// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Calls_Background_1_H
#define WINRT_Windows_ApplicationModel_Calls_Background_1_H
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background
{
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallBlockedTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallBlockedTriggerDetails>
    {
        IPhoneCallBlockedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallBlockedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOriginDataRequestTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOriginDataRequestTriggerDetails>
    {
        IPhoneCallOriginDataRequestTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOriginDataRequestTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneIncomingCallDismissedTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneIncomingCallDismissedTriggerDetails>
    {
        IPhoneIncomingCallDismissedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneIncomingCallDismissedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneIncomingCallNotificationTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneIncomingCallNotificationTriggerDetails>
    {
        IPhoneIncomingCallNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneIncomingCallNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneLineChangedTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneLineChangedTriggerDetails>
    {
        IPhoneLineChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneLineChangedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneNewVoicemailMessageTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNewVoicemailMessageTriggerDetails>
    {
        IPhoneNewVoicemailMessageTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPhoneNewVoicemailMessageTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
