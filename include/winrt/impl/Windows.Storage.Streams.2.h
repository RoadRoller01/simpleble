// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Storage_Streams_2_H
#define WINRT_Windows_Storage_Streams_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct WINRT_IMPL_EMPTY_BASES Buffer : winrt::Windows::Storage::Streams::IBuffer
    {
        Buffer(std::nullptr_t) noexcept {}
        Buffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IBuffer(ptr, take_ownership_from_abi) {}
        explicit Buffer(uint32_t capacity);
        static auto CreateCopyFromMemoryBuffer(winrt::Windows::Foundation::IMemoryBuffer const& input);
        static auto CreateMemoryBufferOverIBuffer(winrt::Windows::Storage::Streams::IBuffer const& input);
    };
    struct WINRT_IMPL_EMPTY_BASES DataReader : winrt::Windows::Storage::Streams::IDataReader,
        impl::require<DataReader, winrt::Windows::Foundation::IClosable>
    {
        DataReader(std::nullptr_t) noexcept {}
        DataReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IDataReader(ptr, take_ownership_from_abi) {}
        explicit DataReader(winrt::Windows::Storage::Streams::IInputStream const& inputStream);
        static auto FromBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES DataReaderLoadOperation : winrt::Windows::Foundation::IAsyncOperation<uint32_t>
    {
        DataReaderLoadOperation(std::nullptr_t) noexcept {}
        DataReaderLoadOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IAsyncOperation<uint32_t>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DataWriter : winrt::Windows::Storage::Streams::IDataWriter,
        impl::require<DataWriter, winrt::Windows::Foundation::IClosable>
    {
        DataWriter(std::nullptr_t) noexcept {}
        DataWriter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IDataWriter(ptr, take_ownership_from_abi) {}
        DataWriter();
        explicit DataWriter(winrt::Windows::Storage::Streams::IOutputStream const& outputStream);
    };
    struct WINRT_IMPL_EMPTY_BASES DataWriterStoreOperation : winrt::Windows::Foundation::IAsyncOperation<uint32_t>
    {
        DataWriterStoreOperation(std::nullptr_t) noexcept {}
        DataWriterStoreOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IAsyncOperation<uint32_t>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileInputStream : winrt::Windows::Storage::Streams::IInputStream
    {
        FileInputStream(std::nullptr_t) noexcept {}
        FileInputStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IInputStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileOutputStream : winrt::Windows::Storage::Streams::IOutputStream
    {
        FileOutputStream(std::nullptr_t) noexcept {}
        FileOutputStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IOutputStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileRandomAccessStream : winrt::Windows::Storage::Streams::IRandomAccessStream
    {
        FileRandomAccessStream(std::nullptr_t) noexcept {}
        FileRandomAccessStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
        static auto OpenAsync(param::hstring const& filePath, winrt::Windows::Storage::FileAccessMode const& accessMode);
        static auto OpenAsync(param::hstring const& filePath, winrt::Windows::Storage::FileAccessMode const& accessMode, winrt::Windows::Storage::StorageOpenOptions const& sharingOptions, winrt::Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenTransactedWriteAsync(param::hstring const& filePath);
        static auto OpenTransactedWriteAsync(param::hstring const& filePath, winrt::Windows::Storage::StorageOpenOptions const& openOptions, winrt::Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenForUserAsync(winrt::Windows::System::User const& user, param::hstring const& filePath, winrt::Windows::Storage::FileAccessMode const& accessMode);
        static auto OpenForUserAsync(winrt::Windows::System::User const& user, param::hstring const& filePath, winrt::Windows::Storage::FileAccessMode const& accessMode, winrt::Windows::Storage::StorageOpenOptions const& sharingOptions, winrt::Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenTransactedWriteForUserAsync(winrt::Windows::System::User const& user, param::hstring const& filePath);
        static auto OpenTransactedWriteForUserAsync(winrt::Windows::System::User const& user, param::hstring const& filePath, winrt::Windows::Storage::StorageOpenOptions const& openOptions, winrt::Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
    };
    struct WINRT_IMPL_EMPTY_BASES InMemoryRandomAccessStream : winrt::Windows::Storage::Streams::IRandomAccessStream
    {
        InMemoryRandomAccessStream(std::nullptr_t) noexcept {}
        InMemoryRandomAccessStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
        InMemoryRandomAccessStream();
    };
    struct WINRT_IMPL_EMPTY_BASES InputStreamOverStream : winrt::Windows::Storage::Streams::IInputStream
    {
        InputStreamOverStream(std::nullptr_t) noexcept {}
        InputStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IInputStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES OutputStreamOverStream : winrt::Windows::Storage::Streams::IOutputStream
    {
        OutputStreamOverStream(std::nullptr_t) noexcept {}
        OutputStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IOutputStream(ptr, take_ownership_from_abi) {}
    };
    struct RandomAccessStream
    {
        RandomAccessStream() = delete;
        static auto CopyAsync(winrt::Windows::Storage::Streams::IInputStream const& source, winrt::Windows::Storage::Streams::IOutputStream const& destination);
        static auto CopyAsync(winrt::Windows::Storage::Streams::IInputStream const& source, winrt::Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy);
        static auto CopyAndCloseAsync(winrt::Windows::Storage::Streams::IInputStream const& source, winrt::Windows::Storage::Streams::IOutputStream const& destination);
    };
    struct WINRT_IMPL_EMPTY_BASES RandomAccessStreamOverStream : winrt::Windows::Storage::Streams::IRandomAccessStream
    {
        RandomAccessStreamOverStream(std::nullptr_t) noexcept {}
        RandomAccessStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RandomAccessStreamReference : winrt::Windows::Storage::Streams::IRandomAccessStreamReference
    {
        RandomAccessStreamReference(std::nullptr_t) noexcept {}
        RandomAccessStreamReference(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStreamReference(ptr, take_ownership_from_abi) {}
        static auto CreateFromFile(winrt::Windows::Storage::IStorageFile const& file);
        static auto CreateFromUri(winrt::Windows::Foundation::Uri const& uri);
        static auto CreateFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream);
    };
}
#endif
