// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Storage_2_H
#define WINRT_Windows_Storage_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Search.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct ApplicationDataSetVersionHandler : winrt::Windows::Foundation::IUnknown
    {
        ApplicationDataSetVersionHandler(std::nullptr_t = nullptr) noexcept {}
        ApplicationDataSetVersionHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ApplicationDataSetVersionHandler(L lambda);
        template <typename F> ApplicationDataSetVersionHandler(F* function);
        template <typename O, typename M> ApplicationDataSetVersionHandler(O* object, M method);
        template <typename O, typename M> ApplicationDataSetVersionHandler(com_ptr<O>&& object, M method);
        template <typename O, typename LM> ApplicationDataSetVersionHandler(weak_ref<O>&& object, LM&& lambda_or_method);
        template <typename O, typename M> ApplicationDataSetVersionHandler(std::shared_ptr<O>&& object, M method);
        template <typename O, typename LM> ApplicationDataSetVersionHandler(std::weak_ptr<O>&& object, LM&& lambda_or_method);
        auto operator()(winrt::Windows::Storage::SetVersionRequest const& setVersionRequest) const;
    };
    struct StreamedFileDataRequestedHandler : winrt::Windows::Foundation::IUnknown
    {
        StreamedFileDataRequestedHandler(std::nullptr_t = nullptr) noexcept {}
        StreamedFileDataRequestedHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> StreamedFileDataRequestedHandler(L lambda);
        template <typename F> StreamedFileDataRequestedHandler(F* function);
        template <typename O, typename M> StreamedFileDataRequestedHandler(O* object, M method);
        template <typename O, typename M> StreamedFileDataRequestedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename LM> StreamedFileDataRequestedHandler(weak_ref<O>&& object, LM&& lambda_or_method);
        template <typename O, typename M> StreamedFileDataRequestedHandler(std::shared_ptr<O>&& object, M method);
        template <typename O, typename LM> StreamedFileDataRequestedHandler(std::weak_ptr<O>&& object, LM&& lambda_or_method);
        auto operator()(winrt::Windows::Storage::StreamedFileDataRequest const& stream) const;
    };
    struct WINRT_IMPL_EMPTY_BASES AppDataPaths : winrt::Windows::Storage::IAppDataPaths
    {
        AppDataPaths(std::nullptr_t) noexcept {}
        AppDataPaths(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IAppDataPaths(ptr, take_ownership_from_abi) {}
        static auto GetForUser(winrt::Windows::System::User const& user);
        static auto GetDefault();
    };
    struct WINRT_IMPL_EMPTY_BASES ApplicationData : winrt::Windows::Storage::IApplicationData,
        impl::require<ApplicationData, winrt::Windows::Storage::IApplicationData2, winrt::Windows::Storage::IApplicationData3, winrt::Windows::Foundation::IClosable>
    {
        ApplicationData(std::nullptr_t) noexcept {}
        ApplicationData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IApplicationData(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
        static auto GetForUserAsync(winrt::Windows::System::User const& user);
    };
    struct WINRT_IMPL_EMPTY_BASES ApplicationDataCompositeValue : winrt::Windows::Foundation::Collections::IPropertySet
    {
        ApplicationDataCompositeValue(std::nullptr_t) noexcept {}
        ApplicationDataCompositeValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IPropertySet(ptr, take_ownership_from_abi) {}
        ApplicationDataCompositeValue();
    };
    struct WINRT_IMPL_EMPTY_BASES ApplicationDataContainer : winrt::Windows::Storage::IApplicationDataContainer,
        impl::require<ApplicationDataContainer, winrt::Windows::Foundation::IClosable>
    {
        ApplicationDataContainer(std::nullptr_t) noexcept {}
        ApplicationDataContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IApplicationDataContainer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ApplicationDataContainerSettings : winrt::Windows::Foundation::Collections::IPropertySet
    {
        ApplicationDataContainerSettings(std::nullptr_t) noexcept {}
        ApplicationDataContainerSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IPropertySet(ptr, take_ownership_from_abi) {}
    };
    struct CachedFileManager
    {
        CachedFileManager() = delete;
        static auto DeferUpdates(winrt::Windows::Storage::IStorageFile const& file);
        static auto CompleteUpdatesAsync(winrt::Windows::Storage::IStorageFile const& file);
    };
    struct DownloadsFolder
    {
        DownloadsFolder() = delete;
        static auto CreateFileAsync(param::hstring const& desiredName);
        static auto CreateFolderAsync(param::hstring const& desiredName);
        static auto CreateFileAsync(param::hstring const& desiredName, winrt::Windows::Storage::CreationCollisionOption const& option);
        static auto CreateFolderAsync(param::hstring const& desiredName, winrt::Windows::Storage::CreationCollisionOption const& option);
        static auto CreateFileForUserAsync(winrt::Windows::System::User const& user, param::hstring const& desiredName);
        static auto CreateFolderForUserAsync(winrt::Windows::System::User const& user, param::hstring const& desiredName);
        static auto CreateFileForUserAsync(winrt::Windows::System::User const& user, param::hstring const& desiredName, winrt::Windows::Storage::CreationCollisionOption const& option);
        static auto CreateFolderForUserAsync(winrt::Windows::System::User const& user, param::hstring const& desiredName, winrt::Windows::Storage::CreationCollisionOption const& option);
    };
    struct FileIO
    {
        FileIO() = delete;
        static auto ReadTextAsync(winrt::Windows::Storage::IStorageFile const& file);
        static auto ReadTextAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto WriteTextAsync(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contents);
        static auto WriteTextAsync(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contents, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto AppendTextAsync(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contents);
        static auto AppendTextAsync(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contents, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto ReadLinesAsync(winrt::Windows::Storage::IStorageFile const& file);
        static auto ReadLinesAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto WriteLinesAsync(winrt::Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines);
        static auto WriteLinesAsync(winrt::Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto AppendLinesAsync(winrt::Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines);
        static auto AppendLinesAsync(winrt::Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto ReadBufferAsync(winrt::Windows::Storage::IStorageFile const& file);
        static auto WriteBufferAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Storage::Streams::IBuffer const& buffer);
        static auto WriteBytesAsync(winrt::Windows::Storage::IStorageFile const& file, array_view<uint8_t const> buffer);
    };
    struct KnownFolders
    {
        KnownFolders() = delete;
        [[nodiscard]] static auto CameraRoll();
        [[nodiscard]] static auto Playlists();
        [[nodiscard]] static auto SavedPictures();
        [[nodiscard]] static auto MusicLibrary();
        [[nodiscard]] static auto PicturesLibrary();
        [[nodiscard]] static auto VideosLibrary();
        [[nodiscard]] static auto DocumentsLibrary();
        [[nodiscard]] static auto HomeGroup();
        [[nodiscard]] static auto RemovableDevices();
        [[nodiscard]] static auto MediaServerDevices();
        [[nodiscard]] static auto Objects3D();
        [[nodiscard]] static auto AppCaptures();
        [[nodiscard]] static auto RecordedCalls();
        static auto GetFolderForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Storage::KnownFolderId const& folderId);
        static auto RequestAccessAsync(winrt::Windows::Storage::KnownFolderId const& folderId);
        static auto RequestAccessForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Storage::KnownFolderId const& folderId);
        static auto GetFolderAsync(winrt::Windows::Storage::KnownFolderId const& folderId);
    };
    struct PathIO
    {
        PathIO() = delete;
        static auto ReadTextAsync(param::hstring const& absolutePath);
        static auto ReadTextAsync(param::hstring const& absolutePath, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents);
        static auto WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents);
        static auto AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto ReadLinesAsync(param::hstring const& absolutePath);
        static auto ReadLinesAsync(param::hstring const& absolutePath, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines);
        static auto WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines);
        static auto AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        static auto ReadBufferAsync(param::hstring const& absolutePath);
        static auto WriteBufferAsync(param::hstring const& absolutePath, winrt::Windows::Storage::Streams::IBuffer const& buffer);
        static auto WriteBytesAsync(param::hstring const& absolutePath, array_view<uint8_t const> buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES SetVersionDeferral : winrt::Windows::Storage::ISetVersionDeferral
    {
        SetVersionDeferral(std::nullptr_t) noexcept {}
        SetVersionDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISetVersionDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SetVersionRequest : winrt::Windows::Storage::ISetVersionRequest
    {
        SetVersionRequest(std::nullptr_t) noexcept {}
        SetVersionRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISetVersionRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StorageFile : winrt::Windows::Storage::IStorageFile,
        impl::require<StorageFile, winrt::Windows::Storage::IStorageItemProperties, winrt::Windows::Storage::IStorageItemProperties2, winrt::Windows::Storage::IStorageItem2, winrt::Windows::Storage::IStorageItemPropertiesWithProvider, winrt::Windows::Storage::IStorageFilePropertiesWithAvailability, winrt::Windows::Storage::IStorageFile2>
    {
        StorageFile(std::nullptr_t) noexcept {}
        StorageFile(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageFile(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Storage::IStorageFile::OpenAsync;
        using impl::consume_t<StorageFile, winrt::Windows::Storage::IStorageFile2>::OpenAsync;
        using winrt::Windows::Storage::IStorageFile::OpenTransactedWriteAsync;
        using impl::consume_t<StorageFile, winrt::Windows::Storage::IStorageFile2>::OpenTransactedWriteAsync;
        static auto GetFileFromPathAsync(param::hstring const& path);
        static auto GetFileFromApplicationUriAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto CreateStreamedFileAsync(param::hstring const& displayNameWithExtension, winrt::Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
        static auto ReplaceWithStreamedFileAsync(winrt::Windows::Storage::IStorageFile const& fileToReplace, winrt::Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
        static auto CreateStreamedFileFromUriAsync(param::hstring const& displayNameWithExtension, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
        static auto ReplaceWithStreamedFileFromUriAsync(winrt::Windows::Storage::IStorageFile const& fileToReplace, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
        static auto GetFileFromPathForUserAsync(winrt::Windows::System::User const& user, param::hstring const& path);
    };
    struct WINRT_IMPL_EMPTY_BASES StorageFolder : winrt::Windows::Storage::IStorageFolder,
        impl::require<StorageFolder, winrt::Windows::Storage::Search::IStorageFolderQueryOperations, winrt::Windows::Storage::IStorageItemProperties, winrt::Windows::Storage::IStorageItemProperties2, winrt::Windows::Storage::IStorageItem2, winrt::Windows::Storage::IStorageFolder2, winrt::Windows::Storage::IStorageItemPropertiesWithProvider, winrt::Windows::Storage::IStorageFolder3>
    {
        StorageFolder(std::nullptr_t) noexcept {}
        StorageFolder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageFolder(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Storage::IStorageFolder::GetFilesAsync;
        using impl::consume_t<StorageFolder, winrt::Windows::Storage::Search::IStorageFolderQueryOperations>::GetFilesAsync;
        using winrt::Windows::Storage::IStorageFolder::GetFoldersAsync;
        using impl::consume_t<StorageFolder, winrt::Windows::Storage::Search::IStorageFolderQueryOperations>::GetFoldersAsync;
        using winrt::Windows::Storage::IStorageFolder::GetItemsAsync;
        using impl::consume_t<StorageFolder, winrt::Windows::Storage::Search::IStorageFolderQueryOperations>::GetItemsAsync;
        static auto GetFolderFromPathAsync(param::hstring const& path);
        static auto GetFolderFromPathForUserAsync(winrt::Windows::System::User const& user, param::hstring const& path);
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibrary : winrt::Windows::Storage::IStorageLibrary,
        impl::require<StorageLibrary, winrt::Windows::Storage::IStorageLibrary2, winrt::Windows::Storage::IStorageLibrary3>
    {
        StorageLibrary(std::nullptr_t) noexcept {}
        StorageLibrary(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibrary(ptr, take_ownership_from_abi) {}
        static auto GetLibraryAsync(winrt::Windows::Storage::KnownLibraryId const& libraryId);
        static auto GetLibraryForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Storage::KnownLibraryId const& libraryId);
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibraryChange : winrt::Windows::Storage::IStorageLibraryChange
    {
        StorageLibraryChange(std::nullptr_t) noexcept {}
        StorageLibraryChange(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibraryChange(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibraryChangeReader : winrt::Windows::Storage::IStorageLibraryChangeReader,
        impl::require<StorageLibraryChangeReader, winrt::Windows::Storage::IStorageLibraryChangeReader2>
    {
        StorageLibraryChangeReader(std::nullptr_t) noexcept {}
        StorageLibraryChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibraryChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibraryChangeTracker : winrt::Windows::Storage::IStorageLibraryChangeTracker,
        impl::require<StorageLibraryChangeTracker, winrt::Windows::Storage::IStorageLibraryChangeTracker2>
    {
        StorageLibraryChangeTracker(std::nullptr_t) noexcept {}
        StorageLibraryChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibraryChangeTracker(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Storage::IStorageLibraryChangeTracker::Enable;
        using impl::consume_t<StorageLibraryChangeTracker, winrt::Windows::Storage::IStorageLibraryChangeTracker2>::Enable;
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibraryChangeTrackerOptions : winrt::Windows::Storage::IStorageLibraryChangeTrackerOptions
    {
        StorageLibraryChangeTrackerOptions(std::nullptr_t) noexcept {}
        StorageLibraryChangeTrackerOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibraryChangeTrackerOptions(ptr, take_ownership_from_abi) {}
        StorageLibraryChangeTrackerOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES StorageLibraryLastChangeId : winrt::Windows::Storage::IStorageLibraryLastChangeId
    {
        StorageLibraryLastChangeId(std::nullptr_t) noexcept {}
        StorageLibraryLastChangeId(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageLibraryLastChangeId(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Unknown();
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProvider : winrt::Windows::Storage::IStorageProvider,
        impl::require<StorageProvider, winrt::Windows::Storage::IStorageProvider2>
    {
        StorageProvider(std::nullptr_t) noexcept {}
        StorageProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageProvider(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StorageStreamTransaction : winrt::Windows::Storage::IStorageStreamTransaction
    {
        StorageStreamTransaction(std::nullptr_t) noexcept {}
        StorageStreamTransaction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IStorageStreamTransaction(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StreamedFileDataRequest : winrt::Windows::Storage::Streams::IOutputStream,
        impl::require<StreamedFileDataRequest, winrt::Windows::Storage::IStreamedFileDataRequest>
    {
        StreamedFileDataRequest(std::nullptr_t) noexcept {}
        StreamedFileDataRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IOutputStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemAudioProperties : winrt::Windows::Storage::ISystemAudioProperties
    {
        SystemAudioProperties(std::nullptr_t) noexcept {}
        SystemAudioProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemAudioProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemDataPaths : winrt::Windows::Storage::ISystemDataPaths
    {
        SystemDataPaths(std::nullptr_t) noexcept {}
        SystemDataPaths(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemDataPaths(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct WINRT_IMPL_EMPTY_BASES SystemGPSProperties : winrt::Windows::Storage::ISystemGPSProperties
    {
        SystemGPSProperties(std::nullptr_t) noexcept {}
        SystemGPSProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemGPSProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemImageProperties : winrt::Windows::Storage::ISystemImageProperties
    {
        SystemImageProperties(std::nullptr_t) noexcept {}
        SystemImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemImageProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemMediaProperties : winrt::Windows::Storage::ISystemMediaProperties
    {
        SystemMediaProperties(std::nullptr_t) noexcept {}
        SystemMediaProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemMediaProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemMusicProperties : winrt::Windows::Storage::ISystemMusicProperties
    {
        SystemMusicProperties(std::nullptr_t) noexcept {}
        SystemMusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemMusicProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemPhotoProperties : winrt::Windows::Storage::ISystemPhotoProperties
    {
        SystemPhotoProperties(std::nullptr_t) noexcept {}
        SystemPhotoProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemPhotoProperties(ptr, take_ownership_from_abi) {}
    };
    struct SystemProperties
    {
        SystemProperties() = delete;
        [[nodiscard]] static auto Author();
        [[nodiscard]] static auto Comment();
        [[nodiscard]] static auto ItemNameDisplay();
        [[nodiscard]] static auto Keywords();
        [[nodiscard]] static auto Rating();
        [[nodiscard]] static auto Title();
        [[nodiscard]] static auto Audio();
        [[nodiscard]] static auto GPS();
        [[nodiscard]] static auto Media();
        [[nodiscard]] static auto Music();
        [[nodiscard]] static auto Photo();
        [[nodiscard]] static auto Video();
        [[nodiscard]] static auto Image();
    };
    struct WINRT_IMPL_EMPTY_BASES SystemVideoProperties : winrt::Windows::Storage::ISystemVideoProperties
    {
        SystemVideoProperties(std::nullptr_t) noexcept {}
        SystemVideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::ISystemVideoProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserDataPaths : winrt::Windows::Storage::IUserDataPaths
    {
        UserDataPaths(std::nullptr_t) noexcept {}
        UserDataPaths(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::IUserDataPaths(ptr, take_ownership_from_abi) {}
        static auto GetForUser(winrt::Windows::System::User const& user);
        static auto GetDefault();
    };
}
#endif
