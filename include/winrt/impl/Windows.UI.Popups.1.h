// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_UI_Popups_1_H
#define WINRT_Windows_UI_Popups_1_H
#include "winrt/impl/Windows.UI.Popups.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    struct WINRT_IMPL_EMPTY_BASES IMessageDialog :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMessageDialog>
    {
        IMessageDialog(std::nullptr_t = nullptr) noexcept {}
        IMessageDialog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMessageDialogFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMessageDialogFactory>
    {
        IMessageDialogFactory(std::nullptr_t = nullptr) noexcept {}
        IMessageDialogFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPopupMenu :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPopupMenu>
    {
        IPopupMenu(std::nullptr_t = nullptr) noexcept {}
        IPopupMenu(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUICommand :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUICommand>
    {
        IUICommand(std::nullptr_t = nullptr) noexcept {}
        IUICommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUICommandFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUICommandFactory>
    {
        IUICommandFactory(std::nullptr_t = nullptr) noexcept {}
        IUICommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
