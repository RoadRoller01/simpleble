// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Devices_Enumeration_2_H
#define WINRT_Windows_Devices_Enumeration_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct WINRT_IMPL_EMPTY_BASES DeviceAccessChangedEventArgs : winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs,
        impl::require<DeviceAccessChangedEventArgs, winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2, winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs3>
    {
        DeviceAccessChangedEventArgs(std::nullptr_t) noexcept {}
        DeviceAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceAccessInformation : winrt::Windows::Devices::Enumeration::IDeviceAccessInformation,
        impl::require<DeviceAccessInformation, winrt::Windows::Devices::Enumeration::IDeviceAccessInformation2>
    {
        DeviceAccessInformation(std::nullptr_t) noexcept {}
        DeviceAccessInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceAccessInformation(ptr, take_ownership_from_abi) {}
        static auto CreateFromId(param::hstring const& deviceId);
        static auto CreateFromDeviceClassId(winrt::guid const& deviceClassId);
        static auto CreateFromDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass const& deviceClass);
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceConnectionChangeTriggerDetails : winrt::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails
    {
        DeviceConnectionChangeTriggerDetails(std::nullptr_t) noexcept {}
        DeviceConnectionChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceDisconnectButtonClickedEventArgs : winrt::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs
    {
        DeviceDisconnectButtonClickedEventArgs(std::nullptr_t) noexcept {}
        DeviceDisconnectButtonClickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceInformation : winrt::Windows::Devices::Enumeration::IDeviceInformation,
        impl::require<DeviceInformation, winrt::Windows::Devices::Enumeration::IDeviceInformation2>
    {
        DeviceInformation(std::nullptr_t) noexcept {}
        DeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceInformation(ptr, take_ownership_from_abi) {}
        static auto CreateFromIdAsync(param::hstring const& deviceId);
        static auto CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties);
        static auto FindAllAsync();
        static auto FindAllAsync(winrt::Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto FindAllAsync(param::hstring const& aqsFilter);
        static auto FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties);
        static auto CreateWatcher();
        static auto CreateWatcher(winrt::Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto CreateWatcher(param::hstring const& aqsFilter);
        static auto CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties);
        static auto GetAqsFilterFromDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind);
        static auto FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind);
        static auto CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind);
        static auto CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind, winrt::Windows::Devices::Enumeration::IDeviceEnumerationSettings const& settings);
        static auto FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind, winrt::Windows::Devices::Enumeration::IDeviceEnumerationSettings const& settings);
        static auto CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind const& kind, winrt::Windows::Devices::Enumeration::IDeviceEnumerationSettings const& settings);
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceInformationCollection : winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Enumeration::DeviceInformation>
    {
        DeviceInformationCollection(std::nullptr_t) noexcept {}
        DeviceInformationCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Enumeration::DeviceInformation>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceInformationCustomPairing : winrt::Windows::Devices::Enumeration::IDeviceInformationCustomPairing,
        impl::require<DeviceInformationCustomPairing, winrt::Windows::Devices::Enumeration::IDeviceInformationCustomPairing2>
    {
        DeviceInformationCustomPairing(std::nullptr_t) noexcept {}
        DeviceInformationCustomPairing(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceInformationCustomPairing(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceInformationPairing : winrt::Windows::Devices::Enumeration::IDeviceInformationPairing,
        impl::require<DeviceInformationPairing, winrt::Windows::Devices::Enumeration::IDeviceInformationPairing2>
    {
        DeviceInformationPairing(std::nullptr_t) noexcept {}
        DeviceInformationPairing(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceInformationPairing(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::Enumeration::IDeviceInformationPairing::PairAsync;
        using impl::consume_t<DeviceInformationPairing, winrt::Windows::Devices::Enumeration::IDeviceInformationPairing2>::PairAsync;
        static auto TryRegisterForAllInboundPairingRequests(winrt::Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported);
        static auto TryRegisterForAllInboundPairingRequestsWithProtectionLevel(winrt::Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel);
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceInformationUpdate : winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate,
        impl::require<DeviceInformationUpdate, winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate2>
    {
        DeviceInformationUpdate(std::nullptr_t) noexcept {}
        DeviceInformationUpdate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePairingRequestedEventArgs : winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs,
        impl::require<DevicePairingRequestedEventArgs, winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2, winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs3>
    {
        DevicePairingRequestedEventArgs(std::nullptr_t) noexcept {}
        DevicePairingRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePairingResult : winrt::Windows::Devices::Enumeration::IDevicePairingResult
    {
        DevicePairingResult(std::nullptr_t) noexcept {}
        DevicePairingResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePairingResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePairingSetMembersRequestedEventArgs : winrt::Windows::Devices::Enumeration::IDevicePairingSetMembersRequestedEventArgs
    {
        DevicePairingSetMembersRequestedEventArgs(std::nullptr_t) noexcept {}
        DevicePairingSetMembersRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePairingSetMembersRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePicker : winrt::Windows::Devices::Enumeration::IDevicePicker
    {
        DevicePicker(std::nullptr_t) noexcept {}
        DevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePicker(ptr, take_ownership_from_abi) {}
        DevicePicker();
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePickerAppearance : winrt::Windows::Devices::Enumeration::IDevicePickerAppearance
    {
        DevicePickerAppearance(std::nullptr_t) noexcept {}
        DevicePickerAppearance(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePickerAppearance(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DevicePickerFilter : winrt::Windows::Devices::Enumeration::IDevicePickerFilter
    {
        DevicePickerFilter(std::nullptr_t) noexcept {}
        DevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDevicePickerFilter(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceSelectedEventArgs : winrt::Windows::Devices::Enumeration::IDeviceSelectedEventArgs
    {
        DeviceSelectedEventArgs(std::nullptr_t) noexcept {}
        DeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceSelectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceThumbnail : winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType
    {
        DeviceThumbnail(std::nullptr_t) noexcept {}
        DeviceThumbnail(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceUnpairingResult : winrt::Windows::Devices::Enumeration::IDeviceUnpairingResult
    {
        DeviceUnpairingResult(std::nullptr_t) noexcept {}
        DeviceUnpairingResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceUnpairingResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceWatcher : winrt::Windows::Devices::Enumeration::IDeviceWatcher,
        impl::require<DeviceWatcher, winrt::Windows::Devices::Enumeration::IDeviceWatcher2>
    {
        DeviceWatcher(std::nullptr_t) noexcept {}
        DeviceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceWatcherEvent : winrt::Windows::Devices::Enumeration::IDeviceWatcherEvent
    {
        DeviceWatcherEvent(std::nullptr_t) noexcept {}
        DeviceWatcherEvent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceWatcherEvent(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DeviceWatcherTriggerDetails : winrt::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails
    {
        DeviceWatcherTriggerDetails(std::nullptr_t) noexcept {}
        DeviceWatcherTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES EnclosureLocation : winrt::Windows::Devices::Enumeration::IEnclosureLocation,
        impl::require<EnclosureLocation, winrt::Windows::Devices::Enumeration::IEnclosureLocation2>
    {
        EnclosureLocation(std::nullptr_t) noexcept {}
        EnclosureLocation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Enumeration::IEnclosureLocation(ptr, take_ownership_from_abi) {}
    };
}
#endif
