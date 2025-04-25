// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Radios_2_H
#define WINRT_Windows_Devices_Radios_2_H
#include "winrt/impl/Windows.Devices.Radios.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Radios
{
    struct WINRT_IMPL_EMPTY_BASES Radio : winrt::Windows::Devices::Radios::IRadio
    {
        Radio(std::nullptr_t) noexcept {}
        Radio(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Radios::IRadio(ptr, take_ownership_from_abi) {}
        static auto GetRadiosAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto RequestAccessAsync();
    };
}
#endif
