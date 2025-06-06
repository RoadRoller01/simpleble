// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Radios_0_H
#define WINRT_Windows_Devices_Radios_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct WINRT_IMPL_EMPTY_BASES TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Radios
{
    enum class RadioAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class RadioKind : int32_t
    {
        Other = 0,
        WiFi = 1,
        MobileBroadband = 2,
        Bluetooth = 3,
        FM = 4,
    };
    enum class RadioState : int32_t
    {
        Unknown = 0,
        On = 1,
        Off = 2,
        Disabled = 3,
    };
    struct IRadio;
    struct IRadioStatics;
    struct Radio;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Radios::IRadio>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Radios::IRadioStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Radios::Radio>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Radios::RadioAccessStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Radios::RadioKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Radios::RadioState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::Radio> = L"Windows.Devices.Radios.Radio";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::RadioAccessStatus> = L"Windows.Devices.Radios.RadioAccessStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::RadioKind> = L"Windows.Devices.Radios.RadioKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::RadioState> = L"Windows.Devices.Radios.RadioState";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::IRadio> = L"Windows.Devices.Radios.IRadio";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Radios::IRadioStatics> = L"Windows.Devices.Radios.IRadioStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Radios::IRadio>{ 0x252118DF,0xB33E,0x416A,{ 0x87,0x5F,0x1C,0xF3,0x8A,0xE2,0xD8,0x3E } }; // 252118DF-B33E-416A-875F-1CF38AE2D83E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Radios::IRadioStatics>{ 0x5FB6A12E,0x67CB,0x46AE,{ 0xAA,0xE9,0x65,0x91,0x9F,0x86,0xEF,0xF4 } }; // 5FB6A12E-67CB-46AE-AAE9-65919F86EFF4
    template <> struct default_interface<winrt::Windows::Devices::Radios::Radio>{ using type = winrt::Windows::Devices::Radios::IRadio; };
    template <> struct abi<winrt::Windows::Devices::Radios::IRadio>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall SetStateAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Radios::IRadioStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetRadiosAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Radios_IRadio
    {
        auto SetStateAsync(winrt::Windows::Devices::Radios::RadioState const& value) const;
        auto StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Radios::Radio, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<winrt::Windows::Devices::Radios::IRadio, &impl::abi_t<winrt::Windows::Devices::Radios::IRadio>::remove_StateChanged>;
        [[nodiscard]] auto StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Radios::Radio, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto StateChanged(winrt::event_token const& eventCookie) const noexcept;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<winrt::Windows::Devices::Radios::IRadio>
    {
        template <typename D> using type = consume_Windows_Devices_Radios_IRadio<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Radios_IRadioStatics
    {
        auto GetRadiosAsync() const;
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::Radios::IRadioStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Radios_IRadioStatics<D>;
    };
}
#endif
