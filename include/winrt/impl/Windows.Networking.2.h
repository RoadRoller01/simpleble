// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Networking_2_H
#define WINRT_Windows_Networking_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct WINRT_IMPL_EMPTY_BASES EndpointPair : winrt::Windows::Networking::IEndpointPair
    {
        EndpointPair(std::nullptr_t) noexcept {}
        EndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::IEndpointPair(ptr, take_ownership_from_abi) {}
        EndpointPair(winrt::Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
    };
    struct WINRT_IMPL_EMPTY_BASES HostName : winrt::Windows::Networking::IHostName,
        impl::require<HostName, winrt::Windows::Foundation::IStringable>
    {
        HostName(std::nullptr_t) noexcept {}
        HostName(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::IHostName(ptr, take_ownership_from_abi) {}
        explicit HostName(param::hstring const& hostName);
        static auto Compare(param::hstring const& value1, param::hstring const& value2);
    };
}
#endif
