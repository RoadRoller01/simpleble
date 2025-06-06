// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Spi_Provider_1_H
#define WINRT_Windows_Devices_Spi_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    struct WINRT_IMPL_EMPTY_BASES IProviderSpiConnectionSettings :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettings>
    {
        IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IProviderSpiConnectionSettingsFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettingsFactory>
    {
        IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiControllerProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerProvider>
    {
        ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiDeviceProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceProvider>,
        impl::require<winrt::Windows::Devices::Spi::Provider::ISpiDeviceProvider, winrt::Windows::Foundation::IClosable>
    {
        ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiDeviceProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiProvider>
    {
        ISpiProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
