// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_2_H
#define WINRT_Windows_Devices_2_H
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Devices.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices
{
    struct WINRT_IMPL_EMPTY_BASES LowLevelDevicesAggregateProvider : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider
    {
        LowLevelDevicesAggregateProvider(std::nullptr_t) noexcept {}
        LowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider(ptr, take_ownership_from_abi) {}
        LowLevelDevicesAggregateProvider(winrt::Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, winrt::Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi);
    };
    struct WINRT_IMPL_EMPTY_BASES LowLevelDevicesController : winrt::Windows::Devices::ILowLevelDevicesController
    {
        LowLevelDevicesController(std::nullptr_t) noexcept {}
        LowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesController(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DefaultProvider();
        static auto DefaultProvider(winrt::Windows::Devices::ILowLevelDevicesAggregateProvider const& value);
    };
}
#endif
