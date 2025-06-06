// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Spi_Provider_0_H
#define WINRT_Windows_Devices_Spi_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    enum class ProviderSpiMode : int32_t
    {
        Mode0 = 0,
        Mode1 = 1,
        Mode2 = 2,
        Mode3 = 3,
    };
    enum class ProviderSpiSharingMode : int32_t
    {
        Exclusive = 0,
        Shared = 1,
    };
    struct IProviderSpiConnectionSettings;
    struct IProviderSpiConnectionSettingsFactory;
    struct ISpiControllerProvider;
    struct ISpiDeviceProvider;
    struct ISpiProvider;
    struct ProviderSpiConnectionSettings;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ISpiProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ProviderSpiMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Spi::Provider::ProviderSpiSharingMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings> = L"Windows.Devices.Spi.Provider.ProviderSpiConnectionSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ProviderSpiMode> = L"Windows.Devices.Spi.Provider.ProviderSpiMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ProviderSpiSharingMode> = L"Windows.Devices.Spi.Provider.ProviderSpiSharingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory> = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettingsFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider> = L"Windows.Devices.Spi.Provider.ISpiControllerProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider> = L"Windows.Devices.Spi.Provider.ISpiDeviceProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Spi::Provider::ISpiProvider> = L"Windows.Devices.Spi.Provider.ISpiProvider";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>{ 0xF6034550,0xA542,0x4EC0,{ 0x96,0x01,0xA4,0xDD,0x68,0xF8,0x69,0x7B } }; // F6034550-A542-4EC0-9601-A4DD68F8697B
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>{ 0x66456B5A,0x0C79,0x43E3,{ 0x9F,0x3C,0xE5,0x97,0x80,0xAC,0x18,0xFA } }; // 66456B5A-0C79-43E3-9F3C-E59780AC18FA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider>{ 0xC1686504,0x02CE,0x4226,{ 0xA3,0x85,0x4F,0x11,0xFB,0x04,0xB4,0x1B } }; // C1686504-02CE-4226-A385-4F11FB04B41B
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider>{ 0x0D1C3443,0x304B,0x405C,{ 0xB4,0xF7,0xF5,0xAB,0x10,0x74,0x46,0x1E } }; // 0D1C3443-304B-405C-B4F7-F5AB1074461E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Spi::Provider::ISpiProvider>{ 0x96B461E2,0x77D4,0x48CE,{ 0xAA,0xA0,0x75,0x71,0x5A,0x83,0x62,0xCF } }; // 96B461E2-77D4-48CE-AAA0-75715A8362CF
    template <> struct default_interface<winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings>{ using type = winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings; };
    template <> struct abi<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChipSelectLine(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChipSelectLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DataBitLength(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataBitLength(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ClockFrequency(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClockFrequency(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceProvider(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionSettings(void**) noexcept = 0;
            virtual int32_t __stdcall Write(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall Read(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferSequential(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferFullDuplex(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Spi::Provider::ISpiProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings
    {
        [[nodiscard]] auto ChipSelectLine() const;
        auto ChipSelectLine(int32_t value) const;
        [[nodiscard]] auto Mode() const;
        auto Mode(winrt::Windows::Devices::Spi::Provider::ProviderSpiMode const& value) const;
        [[nodiscard]] auto DataBitLength() const;
        auto DataBitLength(int32_t value) const;
        [[nodiscard]] auto ClockFrequency() const;
        auto ClockFrequency(int32_t value) const;
        [[nodiscard]] auto SharingMode() const;
        auto SharingMode(winrt::Windows::Devices::Spi::Provider::ProviderSpiSharingMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory
    {
        auto Create(int32_t chipSelectLine) const;
    };
    template <> struct consume<winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiControllerProvider
    {
        auto GetDeviceProvider(winrt::Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings const& settings) const;
    };
    template <> struct consume<winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto ConnectionSettings() const;
        auto Write(array_view<uint8_t const> buffer) const;
        auto Read(array_view<uint8_t> buffer) const;
        auto TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
        auto TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    };
    template <> struct consume<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiProvider
    {
        auto GetControllersAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::Spi::Provider::ISpiProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiProvider<D>;
    };
}
#endif
