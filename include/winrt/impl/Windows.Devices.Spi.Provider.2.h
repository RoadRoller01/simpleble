// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Spi_Provider_2_H
#define WINRT_Windows_Devices_Spi_Provider_2_H
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    struct WINRT_IMPL_EMPTY_BASES ProviderSpiConnectionSettings : winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings
    {
        ProviderSpiConnectionSettings(std::nullptr_t) noexcept {}
        ProviderSpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings(ptr, take_ownership_from_abi) {}
        explicit ProviderSpiConnectionSettings(int32_t chipSelectLine);
    };
}
#endif
