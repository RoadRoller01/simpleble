// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Radios_1_H
#define WINRT_Windows_Devices_Radios_1_H
#include "winrt/impl/Windows.Devices.Radios.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Radios
{
    struct WINRT_IMPL_EMPTY_BASES IRadio :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRadio>
    {
        IRadio(std::nullptr_t = nullptr) noexcept {}
        IRadio(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRadioStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRadioStatics>
    {
        IRadioStatics(std::nullptr_t = nullptr) noexcept {}
        IRadioStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
