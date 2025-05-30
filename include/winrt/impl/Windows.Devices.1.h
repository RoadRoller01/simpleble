// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_1_H
#define WINRT_Windows_Devices_1_H
#include "winrt/impl/Windows.Devices.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices
{
    struct WINRT_IMPL_EMPTY_BASES ILowLevelDevicesAggregateProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesAggregateProvider>
    {
        ILowLevelDevicesAggregateProvider(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ILowLevelDevicesAggregateProviderFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesAggregateProviderFactory>
    {
        ILowLevelDevicesAggregateProviderFactory(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesAggregateProviderFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ILowLevelDevicesController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesController>
    {
        ILowLevelDevicesController(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ILowLevelDevicesControllerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILowLevelDevicesControllerStatics>
    {
        ILowLevelDevicesControllerStatics(std::nullptr_t = nullptr) noexcept {}
        ILowLevelDevicesControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
