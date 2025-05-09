// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Gpio_Provider_2_H
#define WINRT_Windows_Devices_Gpio_Provider_2_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider
{
    struct WINRT_IMPL_EMPTY_BASES GpioPinProviderValueChangedEventArgs : winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs
    {
        GpioPinProviderValueChangedEventArgs(std::nullptr_t) noexcept {}
        GpioPinProviderValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs(ptr, take_ownership_from_abi) {}
        explicit GpioPinProviderValueChangedEventArgs(winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge);
    };
}
#endif
