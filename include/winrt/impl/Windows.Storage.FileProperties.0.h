// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_Storage_FileProperties_0_H
#define WINRT_Windows_Storage_FileProperties_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct Geolocator;
    struct Geopoint;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct WINRT_IMPL_EMPTY_BASES IIterable;
    template <typename K, typename V> struct WINRT_IMPL_EMPTY_BASES IKeyValuePair;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    enum class PhotoOrientation : int32_t
    {
        Unspecified = 0,
        Normal = 1,
        FlipHorizontal = 2,
        Rotate180 = 3,
        FlipVertical = 4,
        Transpose = 5,
        Rotate270 = 6,
        Transverse = 7,
        Rotate90 = 8,
    };
    enum class PropertyPrefetchOptions : uint32_t
    {
        None = 0,
        MusicProperties = 0x1,
        VideoProperties = 0x2,
        ImageProperties = 0x4,
        DocumentProperties = 0x8,
        BasicProperties = 0x10,
    };
    enum class ThumbnailMode : int32_t
    {
        PicturesView = 0,
        VideosView = 1,
        MusicView = 2,
        DocumentsView = 3,
        ListView = 4,
        SingleItem = 5,
    };
    enum class ThumbnailOptions : uint32_t
    {
        None = 0,
        ReturnOnlyIfCached = 0x1,
        ResizeThumbnail = 0x2,
        UseCurrentScale = 0x4,
    };
    enum class ThumbnailType : int32_t
    {
        Image = 0,
        Icon = 1,
    };
    enum class VideoOrientation : int32_t
    {
        Normal = 0,
        Rotate90 = 90,
        Rotate180 = 180,
        Rotate270 = 270,
    };
    struct IBasicProperties;
    struct IDocumentProperties;
    struct IGeotagHelperStatics;
    struct IImageProperties;
    struct IMusicProperties;
    struct IStorageItemContentProperties;
    struct IStorageItemExtraProperties;
    struct IThumbnailProperties;
    struct IVideoProperties;
    struct BasicProperties;
    struct DocumentProperties;
    struct GeotagHelper;
    struct ImageProperties;
    struct MusicProperties;
    struct StorageItemContentProperties;
    struct StorageItemThumbnail;
    struct VideoProperties;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Storage::FileProperties::IBasicProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IDocumentProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IImageProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IMusicProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IThumbnailProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::IVideoProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::BasicProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::DocumentProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::GeotagHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::ImageProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::MusicProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::StorageItemContentProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::StorageItemThumbnail>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::VideoProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::PhotoOrientation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::PropertyPrefetchOptions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::ThumbnailMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::ThumbnailOptions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::ThumbnailType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Storage::FileProperties::VideoOrientation>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::BasicProperties> = L"Windows.Storage.FileProperties.BasicProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::DocumentProperties> = L"Windows.Storage.FileProperties.DocumentProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::GeotagHelper> = L"Windows.Storage.FileProperties.GeotagHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::ImageProperties> = L"Windows.Storage.FileProperties.ImageProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::MusicProperties> = L"Windows.Storage.FileProperties.MusicProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::StorageItemContentProperties> = L"Windows.Storage.FileProperties.StorageItemContentProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::StorageItemThumbnail> = L"Windows.Storage.FileProperties.StorageItemThumbnail";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::VideoProperties> = L"Windows.Storage.FileProperties.VideoProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::PhotoOrientation> = L"Windows.Storage.FileProperties.PhotoOrientation";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::PropertyPrefetchOptions> = L"Windows.Storage.FileProperties.PropertyPrefetchOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::ThumbnailMode> = L"Windows.Storage.FileProperties.ThumbnailMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::ThumbnailOptions> = L"Windows.Storage.FileProperties.ThumbnailOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::ThumbnailType> = L"Windows.Storage.FileProperties.ThumbnailType";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::VideoOrientation> = L"Windows.Storage.FileProperties.VideoOrientation";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IBasicProperties> = L"Windows.Storage.FileProperties.IBasicProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IDocumentProperties> = L"Windows.Storage.FileProperties.IDocumentProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics> = L"Windows.Storage.FileProperties.IGeotagHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IImageProperties> = L"Windows.Storage.FileProperties.IImageProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IMusicProperties> = L"Windows.Storage.FileProperties.IMusicProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties> = L"Windows.Storage.FileProperties.IStorageItemContentProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties> = L"Windows.Storage.FileProperties.IStorageItemExtraProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IThumbnailProperties> = L"Windows.Storage.FileProperties.IThumbnailProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Storage::FileProperties::IVideoProperties> = L"Windows.Storage.FileProperties.IVideoProperties";
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IBasicProperties>{ 0xD05D55DB,0x785E,0x4A66,{ 0xBE,0x02,0x9B,0xEE,0xC5,0x8A,0xEA,0x81 } }; // D05D55DB-785E-4A66-BE02-9BEEC58AEA81
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IDocumentProperties>{ 0x7EAB19BC,0x1821,0x4923,{ 0xB4,0xA9,0x0A,0xEA,0x40,0x4D,0x00,0x70 } }; // 7EAB19BC-1821-4923-B4A9-0AEA404D0070
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics>{ 0x41493244,0x2524,0x4655,{ 0x86,0xA6,0xED,0x16,0xF5,0xFC,0x71,0x6B } }; // 41493244-2524-4655-86A6-ED16F5FC716B
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IImageProperties>{ 0x523C9424,0xFCFF,0x4275,{ 0xAF,0xEE,0xEC,0xDB,0x9A,0xB4,0x79,0x73 } }; // 523C9424-FCFF-4275-AFEE-ECDB9AB47973
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IMusicProperties>{ 0xBC8AAB62,0x66EC,0x419A,{ 0xBC,0x5D,0xCA,0x65,0xA4,0xCB,0x46,0xDA } }; // BC8AAB62-66EC-419A-BC5D-CA65A4CB46DA
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties>{ 0x05294BAD,0xBC38,0x48BF,{ 0x85,0xD7,0x77,0x0E,0x0E,0x2A,0xE0,0xBA } }; // 05294BAD-BC38-48BF-85D7-770E0E2AE0BA
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties>{ 0xC54361B2,0x54CD,0x432B,{ 0xBD,0xBC,0x4B,0x19,0xC4,0xB4,0x70,0xD7 } }; // C54361B2-54CD-432B-BDBC-4B19C4B470D7
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IThumbnailProperties>{ 0x693DD42F,0xDBE7,0x49B5,{ 0xB3,0xB3,0x28,0x93,0xAC,0x5D,0x34,0x23 } }; // 693DD42F-DBE7-49B5-B3B3-2893AC5D3423
    template <> inline constexpr guid guid_v<winrt::Windows::Storage::FileProperties::IVideoProperties>{ 0x719AE507,0x68DE,0x4DB8,{ 0x97,0xDE,0x49,0x99,0x8C,0x05,0x9F,0x2F } }; // 719AE507-68DE-4DB8-97DE-49998C059F2F
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::BasicProperties>{ using type = winrt::Windows::Storage::FileProperties::IBasicProperties; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::DocumentProperties>{ using type = winrt::Windows::Storage::FileProperties::IDocumentProperties; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::ImageProperties>{ using type = winrt::Windows::Storage::FileProperties::IImageProperties; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::MusicProperties>{ using type = winrt::Windows::Storage::FileProperties::IMusicProperties; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::StorageItemContentProperties>{ using type = winrt::Windows::Storage::FileProperties::IStorageItemContentProperties; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::StorageItemThumbnail>{ using type = winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType; };
    template <> struct default_interface<winrt::Windows::Storage::FileProperties::VideoProperties>{ using type = winrt::Windows::Storage::FileProperties::IVideoProperties; };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IBasicProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DateModified(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItemDate(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IDocumentProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall put_Comment(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetGeotagAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetGeotagFromGeolocatorAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetGeotagAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IImageProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateTaken(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DateTaken(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Latitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Longitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraManufacturer(void*) noexcept = 0;
            virtual int32_t __stdcall get_CameraModel(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraModel(void*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PeopleNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IMusicProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Album(void**) noexcept = 0;
            virtual int32_t __stdcall put_Album(void*) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall put_Artist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Genre(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArtist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Composers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Conductors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Producers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
            virtual int32_t __stdcall put_Publisher(void*) noexcept = 0;
            virtual int32_t __stdcall get_Writers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Year(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Year(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetMusicPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetVideoPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetImagePropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDocumentPropertiesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RetrievePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SavePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SavePropertiesAsyncOverloadDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IThumbnailProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_OriginalWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OriginalHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReturnedSmallerCachedSize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Storage::FileProperties::IVideoProperties>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Latitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Longitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Producers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
            virtual int32_t __stdcall put_Publisher(void*) noexcept = 0;
            virtual int32_t __stdcall get_Writers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Year(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Year(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Directors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IBasicProperties
    {
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto DateModified() const;
        [[nodiscard]] auto ItemDate() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IBasicProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IBasicProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IDocumentProperties
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto Comment() const;
        auto Comment(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IDocumentProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IDocumentProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IGeotagHelperStatics
    {
        auto GetGeotagAsync(winrt::Windows::Storage::IStorageFile const& file) const;
        auto SetGeotagFromGeolocatorAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Devices::Geolocation::Geolocator const& geolocator) const;
        auto SetGeotagAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::Devices::Geolocation::Geopoint const& geopoint) const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IGeotagHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IImageProperties
    {
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto DateTaken() const;
        auto DateTaken(winrt::Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Latitude() const;
        [[nodiscard]] auto Longitude() const;
        [[nodiscard]] auto CameraManufacturer() const;
        auto CameraManufacturer(param::hstring const& value) const;
        [[nodiscard]] auto CameraModel() const;
        auto CameraModel(param::hstring const& value) const;
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto PeopleNames() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IImageProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IImageProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IMusicProperties
    {
        [[nodiscard]] auto Album() const;
        auto Album(param::hstring const& value) const;
        [[nodiscard]] auto Artist() const;
        auto Artist(param::hstring const& value) const;
        [[nodiscard]] auto Genre() const;
        [[nodiscard]] auto TrackNumber() const;
        auto TrackNumber(uint32_t value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Bitrate() const;
        [[nodiscard]] auto AlbumArtist() const;
        auto AlbumArtist(param::hstring const& value) const;
        [[nodiscard]] auto Composers() const;
        [[nodiscard]] auto Conductors() const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
        [[nodiscard]] auto Producers() const;
        [[nodiscard]] auto Publisher() const;
        auto Publisher(param::hstring const& value) const;
        [[nodiscard]] auto Writers() const;
        [[nodiscard]] auto Year() const;
        auto Year(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IMusicProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IMusicProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IStorageItemContentProperties
    {
        auto GetMusicPropertiesAsync() const;
        auto GetVideoPropertiesAsync() const;
        auto GetImagePropertiesAsync() const;
        auto GetDocumentPropertiesAsync() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IStorageItemExtraProperties
    {
        auto RetrievePropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const;
        auto SavePropertiesAsync(param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Foundation::IInspectable>> const& propertiesToSave) const;
        auto SavePropertiesAsync() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IStorageItemExtraProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IThumbnailProperties
    {
        [[nodiscard]] auto OriginalWidth() const;
        [[nodiscard]] auto OriginalHeight() const;
        [[nodiscard]] auto ReturnedSmallerCachedSize() const;
        [[nodiscard]] auto Type() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IThumbnailProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IThumbnailProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IVideoProperties
    {
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Latitude() const;
        [[nodiscard]] auto Longitude() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
        [[nodiscard]] auto Producers() const;
        [[nodiscard]] auto Publisher() const;
        auto Publisher(param::hstring const& value) const;
        [[nodiscard]] auto Writers() const;
        [[nodiscard]] auto Year() const;
        auto Year(uint32_t value) const;
        [[nodiscard]] auto Bitrate() const;
        [[nodiscard]] auto Directors() const;
        [[nodiscard]] auto Orientation() const;
    };
    template <> struct consume<winrt::Windows::Storage::FileProperties::IVideoProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IVideoProperties<D>;
    };
}
#endif
