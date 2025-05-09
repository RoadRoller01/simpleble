// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Networking_1_H
#define WINRT_Windows_Networking_1_H
#include "winrt/impl/Windows.Networking.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct WINRT_IMPL_EMPTY_BASES IEndpointPair :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPair>
    {
        IEndpointPair(std::nullptr_t = nullptr) noexcept {}
        IEndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IEndpointPairFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPairFactory>
    {
        IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
        IEndpointPairFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IHostName :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostName>
    {
        IHostName(std::nullptr_t = nullptr) noexcept {}
        IHostName(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IHostNameFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameFactory>
    {
        IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
        IHostNameFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IHostNameStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameStatics>
    {
        IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
        IHostNameStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
