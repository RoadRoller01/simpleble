// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_I2c_Provider_0_H
#define WINRT_Windows_Devices_I2c_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider
{
    enum class ProviderI2cBusSpeed : int32_t
    {
        StandardMode = 0,
        FastMode = 1,
    };
    enum class ProviderI2cSharingMode : int32_t
    {
        Exclusive = 0,
        Shared = 1,
    };
    enum class ProviderI2cTransferStatus : int32_t
    {
        FullTransfer = 0,
        PartialTransfer = 1,
        SlaveAddressNotAcknowledged = 2,
    };
    struct II2cControllerProvider;
    struct II2cDeviceProvider;
    struct II2cProvider;
    struct IProviderI2cConnectionSettings;
    struct ProviderI2cConnectionSettings;
    struct ProviderI2cTransferResult;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::II2cProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::ProviderI2cBusSpeed>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::ProviderI2cSharingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferResult>{ using type = struct_category<winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferStatus, uint32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings> = L"Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::ProviderI2cBusSpeed> = L"Windows.Devices.I2c.Provider.ProviderI2cBusSpeed";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::ProviderI2cSharingMode> = L"Windows.Devices.I2c.Provider.ProviderI2cSharingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferStatus> = L"Windows.Devices.I2c.Provider.ProviderI2cTransferStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferResult> = L"Windows.Devices.I2c.Provider.ProviderI2cTransferResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider> = L"Windows.Devices.I2c.Provider.II2cControllerProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider> = L"Windows.Devices.I2c.Provider.II2cDeviceProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::II2cProvider> = L"Windows.Devices.I2c.Provider.II2cProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> = L"Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider>{ 0x61C2BB82,0x4510,0x4163,{ 0xA8,0x7C,0x4E,0x15,0xA9,0x55,0x89,0x80 } }; // 61C2BB82-4510-4163-A87C-4E15A9558980
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider>{ 0xAD342654,0x57E8,0x453E,{ 0x83,0x29,0xD1,0xE4,0x47,0xD1,0x03,0xA9 } }; // AD342654-57E8-453E-8329-D1E447D103A9
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::I2c::Provider::II2cProvider>{ 0x6F13083E,0xBF62,0x4FE2,{ 0xA9,0x5A,0xF0,0x89,0x99,0x66,0x98,0x18 } }; // 6F13083E-BF62-4FE2-A95A-F08999669818
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ 0xE9DB4E34,0xE510,0x44B7,{ 0x80,0x9D,0xF2,0xF8,0x5B,0x55,0x53,0x39 } }; // E9DB4E34-E510-44B7-809D-F2F85B555339
    template <> struct default_interface<winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings>{ using type = winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings; };
    template <> struct abi<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceProvider(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall Write(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall WritePartial(uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_Provider_ProviderI2cTransferResult*) noexcept = 0;
            virtual int32_t __stdcall Read(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall ReadPartial(uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_Provider_ProviderI2cTransferResult*) noexcept = 0;
            virtual int32_t __stdcall WriteRead(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall WriteReadPartial(uint32_t, uint8_t*, uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_Provider_ProviderI2cTransferResult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::I2c::Provider::II2cProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_SlaveAddress(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SlaveAddress(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BusSpeed(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BusSpeed(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_Provider_II2cControllerProvider
    {
        auto GetDeviceProvider(winrt::Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings const& settings) const;
    };
    template <> struct consume<winrt::Windows::Devices::I2c::Provider::II2cControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_Provider_II2cDeviceProvider
    {
        [[nodiscard]] auto DeviceId() const;
        auto Write(array_view<uint8_t const> buffer) const;
        auto WritePartial(array_view<uint8_t const> buffer) const;
        auto Read(array_view<uint8_t> buffer) const;
        auto ReadPartial(array_view<uint8_t> buffer) const;
        auto WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
        auto WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    };
    template <> struct consume<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_Provider_II2cProvider
    {
        auto GetControllersAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::I2c::Provider::II2cProvider>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings
    {
        [[nodiscard]] auto SlaveAddress() const;
        auto SlaveAddress(int32_t value) const;
        [[nodiscard]] auto BusSpeed() const;
        auto BusSpeed(winrt::Windows::Devices::I2c::Provider::ProviderI2cBusSpeed const& value) const;
        [[nodiscard]] auto SharingMode() const;
        auto SharingMode(winrt::Windows::Devices::I2c::Provider::ProviderI2cSharingMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>;
    };
    struct struct_Windows_Devices_I2c_Provider_ProviderI2cTransferResult
    {
        int32_t Status;
        uint32_t BytesTransferred;
    };
    template <> struct abi<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>
    {
        using type = struct_Windows_Devices_I2c_Provider_ProviderI2cTransferResult;
    };
}
#endif
