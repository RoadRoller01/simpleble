const std = @import("std");

pub fn build(b: *std.Build) void {
    const upstream = b.dependency("simpleble", .{});
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const linkage = b.option(std.builtin.LinkMode, "linkage", "Link mode") orelse .static;
    const strip = b.option(bool, "strip", "Omit debug information") orelse false;
    const pic = b.option(bool, "pic", "Produce Position Independent Code") orelse true;

    // Configuration options
    const plain = b.option(bool, "plain", "Use plain version of SimpleBLE") orelse false;
    const exclude_c = b.option(bool, "exclude_c", "Exclude C bindings from SimpleBLE") orelse false;
    // const test_enabled = b.option(bool, "test", "Enable tests") orelse false;
    const log_level = b.option([]const u8, "log_level", "Log level (INFO, WARN, etc.)") orelse "INFO";
    const use_session_dbus = b.option(bool, "use_session_dbus", "Use session DBus on Linux") orelse false;

    const examples_enabled = b.option(bool, "examples", "Build all SimpleBLE cpp examples") orelse false;

    // Platform detection
    const is_linux = target.result.os.tag == .linux;
    const is_windows = target.result.os.tag == .windows;
    const is_macos = target.result.os.tag.isDarwin();
    const is_android = target.result.abi == .android;

    const simpleble = b.addLibrary(.{
        .linkage = linkage,
        .name = "simpleble",
        .root_module = b.createModule(.{
            .target = target,
            .optimize = optimize,
            .strip = strip,
            .pic = pic,
            .link_libc = true,
        }),
    });
    b.installArtifact(simpleble);
    simpleble.linkLibCpp();

    const fmt_dependency = b.dependency("fmt", .{
        .target = target,
        .optimize = optimize,
    });
    // simpleble.root_module.addCMacro("FMT_HEADER_ONLY", "1");
    simpleble.linkLibrary(fmt_dependency.artifact("fmt"));

    // Common compilation flags
    const cpp_flags: []const []const u8 = &.{
        "-std=c++20",
        "-fvisibility=hidden",
        "-fvisibility-inlines-hidden",
    };

    // Common includes
    simpleble.addIncludePath(upstream.path("simpleble/src"));
    simpleble.addIncludePath(upstream.path("simpleble/include"));
    simpleble.addIncludePath(upstream.path("simpleble/src/builders"));
    simpleble.addIncludePath(upstream.path("simpleble/src/external"));
    simpleble.addIncludePath(upstream.path("simpleble/src/backends/common"));
    simpleble.addIncludePath(upstream.path("simpleble/src/frontends/safe"));
    simpleble.addIncludePath(upstream.path("dependencies/external"));
    simpleble.addIncludePath(upstream.path("dependencies/internal"));
    simpleble.addIncludePath(b.path("include")); // cmake export.h and needed cppwinrt headers.

    // Public includes
    simpleble.installHeadersDirectory(upstream.path("simpleble/include/simpleble"), "simpleble", .{});
    simpleble.installHeader(upstream.path("dependencies/external/kvn/kvn_bytearray.h"), "simpleble/kvn");
    simpleble.installHeadersDirectory(b.path("include/simpleble"), "simpleble", .{});

    // Definitions
    simpleble.root_module.addCMacro("SIMPLEBLE_LOG_LEVEL", b.fmt("SIMPLEBLE_LOG_LEVEL_{s}", .{log_level}));
    simpleble.root_module.addCMacro("SIMPLEBLE_VERSION", "\"0.9.1\"");

    // Initialize all SIMPLEBLE_BACKEND_ macros to zero except target.
    simpleble.root_module.addCMacro("SIMPLEBLE_BACKEND_PLAIN", if (plain) "1" else "0");
    simpleble.root_module.addCMacro("SIMPLEBLE_BACKEND_LINUX", if (is_linux) "1" else "0");
    simpleble.root_module.addCMacro("SIMPLEBLE_BACKEND_WINDOWS", if (is_windows) "1" else "0");
    simpleble.root_module.addCMacro("SIMPLEBLE_BACKEND_MACOS", if (is_macos) "1" else "0");
    simpleble.root_module.addCMacro("SIMPLEBLE_BACKEND_ANDROID", if (is_android) "1" else "0");

    // Common sources
    simpleble.addCSourceFiles(.{
        .root = upstream.path("."),
        .files = common_sources,
        .flags = cpp_flags,
    });

    if (plain) {
        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = plain_sources,
            .flags = cpp_flags,
        });
    } else if (is_linux) {
        simpleble.linkSystemLibrary("dbus-1");
        simpleble.linkSystemLibrary("pthread");

        if (use_session_dbus) {
            simpleble.root_module.addCMacro("SIMPLEBLUEZ_USE_SESSION_DBUS", "1");
        }

        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = linux_sources,
            .flags = cpp_flags,
        });

        simpleble.addIncludePath(upstream.path("simplebluez/include"));
        simpleble.addIncludePath(upstream.path("simpledbus/include"));
    } else if (is_windows) {
        // simpleble.root_module.addCMacro("_WIN32_WINNT", "0x0A00"); // Windows 10
        simpleble.root_module.addCMacro("_USE_MATH_DEFINES", "1");
        simpleble.root_module.addCMacro("NOMINMAX", "1");

        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = windows_sources,
            .flags = cpp_flags ++ [_][]const u8{
                "-include",
                b.graph.zig_lib_directory.join(b.allocator, &[_][]const u8{"libc/include/any-windows-any/crtdbg.h"}) catch unreachable,
            },
        });

        simpleble.linkSystemLibrary("ole32");
        simpleble.linkSystemLibrary("oleaut32");

        // runtimeobject:
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-error-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-error-l1-1-1");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-registration-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-robuffer-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-roparameterizediid-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-core-winrt-string-l1-1-0");
        simpleble.linkSystemLibrary("api-ms-win-ro-typeresolution-l1-1-0");

        // For crtdbg.h
        simpleble.linkSystemLibrary("ucrtbased");
    } else if (is_macos) {
        // simpleble.linkFramework("Foundation");
        // simpleble.linkFramework("CoreBluetooth");
        // simpleble.linkSystemLibrary("objc");

        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = macos_sources,
            .flags = cpp_flags ++ [_][]const u8{"-fobjc-arc"},
        });
    } else if (is_android) {
        simpleble.root_module.addCMacro("ANDROID", "1");
        simpleble.root_module.addCMacro("__ANDROID_API__", "24"); // TODO: Make configurable

        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = android_sources,
            .flags = cpp_flags,
        });

        simpleble.linkSystemLibrary("android");
        simpleble.linkSystemLibrary("nativehelper");
        simpleble.linkSystemLibrary("log");
    }

    // C bindings
    if (!exclude_c) {
        simpleble.addCSourceFiles(.{
            .root = upstream.path("."),
            .files = c_binding_sources,
            .flags = cpp_flags,
        });

        simpleble.installHeadersDirectory(upstream.path("simpleble/include/simpleble_c"), "simpleble_c", .{});
    }

    // Tests
    // Tests have not yet been ported...

    if (examples_enabled) {
        for (examples) |example| {
            const exe = b.addExecutable(.{
                .name = example["examples/simpleble/src/".len .. example.len - 4],
                .root_module = b.createModule(.{
                    .target = target,
                    .optimize = optimize,
                    .link_libcpp = true,
                }),
            });
            exe.addIncludePath(upstream.path("examples/simpleble/src"));
            exe.addCSourceFiles(.{
                .root = upstream.path("."),
                .files = &.{
                    example,
                    "examples/simpleble/src/utils.cpp",
                },
                .flags = cpp_flags,
            });
            for (simpleble.root_module.include_dirs.items) |include_dir| {
                exe.root_module.include_dirs.append(b.allocator, include_dir) catch unreachable;
            }
            exe.linkLibrary(simpleble);

            b.installArtifact(exe);
        }
    }
}

const common_sources: []const []const u8 = &.{
    "simpleble/src/frontends/base/Adapter.cpp",
    "simpleble/src/frontends/base/Peripheral.cpp",
    "simpleble/src/frontends/base/Service.cpp",
    "simpleble/src/frontends/base/Characteristic.cpp",
    "simpleble/src/frontends/base/Descriptor.cpp",
    "simpleble/src/frontends/base/Backend.cpp",
    "simpleble/src/backends/common/ServiceBase.cpp",
    "simpleble/src/backends/common/CharacteristicBase.cpp",
    "simpleble/src/backends/common/DescriptorBase.cpp",
    "simpleble/src/Exceptions.cpp",
    "simpleble/src/Utils.cpp",
    "simpleble/src/Logging.cpp",
    "simpleble/src/frontends/safe/AdapterSafe.cpp",
    "simpleble/src/frontends/safe/PeripheralSafe.cpp",
};

const plain_sources: []const []const u8 = &.{
    "simpleble/src/backends/plain/AdapterPlain.cpp",
    "simpleble/src/backends/plain/PeripheralPlain.cpp",
    "simpleble/src/backends/plain/BackendPlain.cpp",
};

const linux_sources: []const []const u8 = &.{
    "simpleble/src/backends/linux/AdapterLinux.cpp",
    "simpleble/src/backends/linux/PeripheralLinux.cpp",
    "simpleble/src/backends/linux/BackendBluez.cpp",
    "simplebluez/src/ProxyOrg.cpp",
    "simplebluez/src/Logging.cpp",
    "simplebluez/src/Agent.cpp",
    "simplebluez/src/Device.cpp",
    "simplebluez/src/Characteristic.cpp",
    "simplebluez/src/Exceptions.cpp",
    "simplebluez/src/ProxyOrgBluez.cpp",
    "simplebluez/src/Service.cpp",
    "simplebluez/src/Adapter.cpp",
    "simplebluez/src/Bluez.cpp",
    "simplebluez/src/Descriptor.cpp",
    "simplebluez/src/interfaces/Adapter1.cpp",
    "simplebluez/src/interfaces/Agent1.cpp",
    "simplebluez/src/interfaces/GattDescriptor1.cpp",
    "simplebluez/src/interfaces/GattCharacteristic1.cpp",
    "simplebluez/src/interfaces/GattService1.cpp",
    "simplebluez/src/interfaces/Device1.cpp",
    "simplebluez/src/interfaces/Battery1.cpp",
    "simplebluez/src/interfaces/AgentManager1.cpp",
    "simpledbus/src/advanced/Interface.cpp",
    "simpledbus/src/advanced/Proxy.cpp",
    "simpledbus/src/base/Connection.cpp",
    "simpledbus/src/base/Exceptions.cpp",
    "simpledbus/src/base/Holder.cpp",
    "simpledbus/src/base/Logging.cpp",
    "simpledbus/src/base/Message.cpp",
    "simpledbus/src/base/Path.cpp",
    "simpledbus/src/interfaces/ObjectManager.cpp",
};

const windows_sources: []const []const u8 = &.{
    "simpleble/src/backends/windows/AdapterWindows.cpp",
    "simpleble/src/backends/windows/PeripheralWindows.cpp",
    "simpleble/src/backends/windows/BackendWinRT.cpp",
    "simpleble/src/backends/windows/MtaManager.cpp",
    "simpleble/src/backends/windows/Utils.cpp",
};

const macos_sources: []const []const u8 = &.{
    "simpleble/src/backends/macos/Utils.mm",
    "simpleble/src/backends/macos/AdapterMac.mm",
    "simpleble/src/backends/macos/AdapterBaseMacOS.mm",
    "simpleble/src/backends/macos/PeripheralMac.mm",
    "simpleble/src/backends/macos/PeripheralBaseMacOS.mm",
    "simpleble/src/backends/macos/BackendCoreBluetooth.mm",
};

const android_sources: []const []const u8 = &.{
    "simpleble/src/backends/android/AdapterAndroid.cpp",
    "simpleble/src/backends/android/PeripheralAndroid.cpp",
    "simpleble/src/backends/android/BackendAndroid.cpp",
    "simpleble/src/backends/android/android/ClassHandler.cpp",
    "simpleble/src/backends/android/android/BluetoothAdapter.cpp",
    "simpleble/src/backends/android/android/BluetoothDevice.cpp",
    "simpleble/src/backends/android/android/BluetoothGatt.cpp",
    "simpleble/src/backends/android/android/BluetoothGattService.cpp",
    "simpleble/src/backends/android/android/BluetoothGattCharacteristic.cpp",
    "simpleble/src/backends/android/android/BluetoothGattDescriptor.cpp",
    "simpleble/src/backends/android/android/BluetoothScanner.cpp",
    "simpleble/src/backends/android/android/UUID.cpp",
    "simpleble/src/backends/android/android/ParcelUUID.cpp",
    "simpleble/src/backends/android/android/ScanRecord.cpp",
    "simpleble/src/backends/android/android/ScanResult.cpp",
    "simpleble/src/backends/android/android/SparseArray.cpp",
    "simpleble/src/backends/android/bridge/ClassHandler.cpp",
    "simpleble/src/backends/android/bridge/BluetoothGattCallback.cpp",
    "simpleble/src/backends/android/bridge/ScanCallback.cpp",
    "simpleble/src/backends/android/jni/Iterator.cpp",
    "simpleble/src/backends/android/jni/List.cpp",
    "simpleble/src/backends/android/jni/Set.cpp",
};

const c_binding_sources: []const []const u8 = &.{
    "simpleble/src_c/simpleble.cpp",
    "simpleble/src_c/adapter.cpp",
    "simpleble/src_c/peripheral.cpp",
    "simpleble/src_c/logging.cpp",
    "simpleble/src_c/utils.cpp",
};

const examples: []const []const u8 = &.{
    "examples/simpleble/src/list_adapters.cpp",
    "examples/simpleble/src/list_adapters_safe.cpp",
    "examples/simpleble/src/multiconnect.cpp",
    "examples/simpleble/src/notify.cpp",
    "examples/simpleble/src/notify_multi.cpp",
    "examples/simpleble/src/read.cpp",
    "examples/simpleble/src/scan.cpp",
    "examples/simpleble/src/write.cpp",
};
