// C++/WinRT v2.0.240405.15

// SPDX-License-Identifier: MIT OR Apache-2.0
// SPDX-FileCopyrightText: Copyright (c) Microsoft Corporation
//
// Generated using .winmd files from https://github.com/microsoft/windows-rs
//

#pragma once
#ifndef WINRT_Windows_UI_0_H
#define WINRT_Windows_UI_0_H
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct IColorHelper;
    struct IColorHelperStatics;
    struct IColorHelperStatics2;
    struct IColors;
    struct IColorsStatics;
    struct IUIContentRoot;
    struct IUIContext;
    struct ColorHelper;
    struct Colors;
    struct UIContentRoot;
    struct UIContext;
    struct Color;
    struct WindowId;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::IColorHelper>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IColorHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IColorHelperStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IColors>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IColorsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IUIContentRoot>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::IUIContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ColorHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Colors>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIContentRoot>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Color>{ using type = struct_category<uint8_t, uint8_t, uint8_t, uint8_t>; };
    template <> struct category<winrt::Windows::UI::WindowId>{ using type = struct_category<uint64_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ColorHelper> = L"Windows.UI.ColorHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Colors> = L"Windows.UI.Colors";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIContentRoot> = L"Windows.UI.UIContentRoot";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIContext> = L"Windows.UI.UIContext";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Color> = L"Windows.UI.Color";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::WindowId> = L"Windows.UI.WindowId";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IColorHelper> = L"Windows.UI.IColorHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IColorHelperStatics> = L"Windows.UI.IColorHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IColorHelperStatics2> = L"Windows.UI.IColorHelperStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IColors> = L"Windows.UI.IColors";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IColorsStatics> = L"Windows.UI.IColorsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IUIContentRoot> = L"Windows.UI.IUIContentRoot";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::IUIContext> = L"Windows.UI.IUIContext";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IColorHelper>{ 0x193CFBE7,0x65C7,0x4540,{ 0xAD,0x08,0x62,0x83,0xBA,0x76,0x87,0x9A } }; // 193CFBE7-65C7-4540-AD08-6283BA76879A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IColorHelperStatics>{ 0x8504DBEA,0xFB6A,0x4144,{ 0xA6,0xC2,0x33,0x49,0x9C,0x92,0x84,0xF5 } }; // 8504DBEA-FB6A-4144-A6C2-33499C9284F5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IColorHelperStatics2>{ 0x24D9AF02,0x6EB0,0x4B94,{ 0x85,0x5C,0xFC,0xF0,0x81,0x8D,0x9A,0x16 } }; // 24D9AF02-6EB0-4B94-855C-FCF0818D9A16
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IColors>{ 0x9B8C9326,0x4CA6,0x4CE5,{ 0x89,0x94,0x9E,0xFF,0x65,0xCA,0xBD,0xCC } }; // 9B8C9326-4CA6-4CE5-8994-9EFF65CABDCC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IColorsStatics>{ 0xCFF52E04,0xCCA6,0x4614,{ 0xA1,0x7E,0x75,0x49,0x10,0xC8,0x4A,0x99 } }; // CFF52E04-CCA6-4614-A17E-754910C84A99
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IUIContentRoot>{ 0x1DFCBAC6,0xB36B,0x5CB9,{ 0x9B,0xC5,0x2B,0x7A,0x0E,0xDD,0xC3,0x78 } }; // 1DFCBAC6-B36B-5CB9-9BC5-2B7A0EDDC378
    template <> inline constexpr guid guid_v<winrt::Windows::UI::IUIContext>{ 0xBB5CFACD,0x5BD8,0x59D0,{ 0xA5,0x9E,0x1C,0x17,0xA4,0xD6,0xD2,0x43 } }; // BB5CFACD-5BD8-59D0-A59E-1C17A4D6D243
    template <> struct default_interface<winrt::Windows::UI::ColorHelper>{ using type = winrt::Windows::UI::IColorHelper; };
    template <> struct default_interface<winrt::Windows::UI::Colors>{ using type = winrt::Windows::UI::IColors; };
    template <> struct default_interface<winrt::Windows::UI::UIContentRoot>{ using type = winrt::Windows::UI::IUIContentRoot; };
    template <> struct default_interface<winrt::Windows::UI::UIContext>{ using type = winrt::Windows::UI::IUIContext; };
    template <> struct abi<winrt::Windows::UI::IColorHelper>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::IColorHelperStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall FromArgb(uint8_t, uint8_t, uint8_t, uint8_t, struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::IColorHelperStatics2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall ToDisplayName(struct struct_Windows_UI_Color, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::IColors>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::IColorsStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_AliceBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_AntiqueWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aqua(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Azure(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Beige(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Bisque(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Black(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlanchedAlmond(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Blue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlueViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Brown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BurlyWood(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CadetBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chartreuse(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chocolate(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Coral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CornflowerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cornsilk(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Crimson(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkKhaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkMagenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOliveGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DimGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DodgerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Firebrick(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FloralWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_ForestGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Fuchsia(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gainsboro(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GhostWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gold(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Goldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Green(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GreenYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Honeydew(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_HotPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_IndianRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Indigo(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Ivory(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Khaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lavender(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LavenderBlush(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LawnGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LemonChiffon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCoral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGoldenrodYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lime(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LimeGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Linen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Magenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Maroon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumAquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumPurple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MidnightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MintCream(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MistyRose(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Moccasin(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_NavajoWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Navy(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OldLace(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Olive(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OliveDrab(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OrangeRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PapayaWhip(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PeachPuff(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Peru(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Pink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Plum(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PowderBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Purple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Red(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RosyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RoyalBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SaddleBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Salmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SandyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaShell(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Sienna(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Silver(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Snow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Teal(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Thistle(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tomato(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Transparent(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Turquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Violet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Wheat(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_White(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_WhiteSmoke(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Yellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_YellowGreen(struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::IUIContentRoot>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::IUIContext>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelper
    {
    };
    template <> struct consume<winrt::Windows::UI::IColorHelper>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelperStatics
    {
        auto FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const;
    };
    template <> struct consume<winrt::Windows::UI::IColorHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelperStatics2
    {
        auto ToDisplayName(winrt::Windows::UI::Color const& color) const;
    };
    template <> struct consume<winrt::Windows::UI::IColorHelperStatics2>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColors
    {
    };
    template <> struct consume<winrt::Windows::UI::IColors>
    {
        template <typename D> using type = consume_Windows_UI_IColors<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorsStatics
    {
        [[nodiscard]] auto AliceBlue() const;
        [[nodiscard]] auto AntiqueWhite() const;
        [[nodiscard]] auto Aqua() const;
        [[nodiscard]] auto Aquamarine() const;
        [[nodiscard]] auto Azure() const;
        [[nodiscard]] auto Beige() const;
        [[nodiscard]] auto Bisque() const;
        [[nodiscard]] auto Black() const;
        [[nodiscard]] auto BlanchedAlmond() const;
        [[nodiscard]] auto Blue() const;
        [[nodiscard]] auto BlueViolet() const;
        [[nodiscard]] auto Brown() const;
        [[nodiscard]] auto BurlyWood() const;
        [[nodiscard]] auto CadetBlue() const;
        [[nodiscard]] auto Chartreuse() const;
        [[nodiscard]] auto Chocolate() const;
        [[nodiscard]] auto Coral() const;
        [[nodiscard]] auto CornflowerBlue() const;
        [[nodiscard]] auto Cornsilk() const;
        [[nodiscard]] auto Crimson() const;
        [[nodiscard]] auto Cyan() const;
        [[nodiscard]] auto DarkBlue() const;
        [[nodiscard]] auto DarkCyan() const;
        [[nodiscard]] auto DarkGoldenrod() const;
        [[nodiscard]] auto DarkGray() const;
        [[nodiscard]] auto DarkGreen() const;
        [[nodiscard]] auto DarkKhaki() const;
        [[nodiscard]] auto DarkMagenta() const;
        [[nodiscard]] auto DarkOliveGreen() const;
        [[nodiscard]] auto DarkOrange() const;
        [[nodiscard]] auto DarkOrchid() const;
        [[nodiscard]] auto DarkRed() const;
        [[nodiscard]] auto DarkSalmon() const;
        [[nodiscard]] auto DarkSeaGreen() const;
        [[nodiscard]] auto DarkSlateBlue() const;
        [[nodiscard]] auto DarkSlateGray() const;
        [[nodiscard]] auto DarkTurquoise() const;
        [[nodiscard]] auto DarkViolet() const;
        [[nodiscard]] auto DeepPink() const;
        [[nodiscard]] auto DeepSkyBlue() const;
        [[nodiscard]] auto DimGray() const;
        [[nodiscard]] auto DodgerBlue() const;
        [[nodiscard]] auto Firebrick() const;
        [[nodiscard]] auto FloralWhite() const;
        [[nodiscard]] auto ForestGreen() const;
        [[nodiscard]] auto Fuchsia() const;
        [[nodiscard]] auto Gainsboro() const;
        [[nodiscard]] auto GhostWhite() const;
        [[nodiscard]] auto Gold() const;
        [[nodiscard]] auto Goldenrod() const;
        [[nodiscard]] auto Gray() const;
        [[nodiscard]] auto Green() const;
        [[nodiscard]] auto GreenYellow() const;
        [[nodiscard]] auto Honeydew() const;
        [[nodiscard]] auto HotPink() const;
        [[nodiscard]] auto IndianRed() const;
        [[nodiscard]] auto Indigo() const;
        [[nodiscard]] auto Ivory() const;
        [[nodiscard]] auto Khaki() const;
        [[nodiscard]] auto Lavender() const;
        [[nodiscard]] auto LavenderBlush() const;
        [[nodiscard]] auto LawnGreen() const;
        [[nodiscard]] auto LemonChiffon() const;
        [[nodiscard]] auto LightBlue() const;
        [[nodiscard]] auto LightCoral() const;
        [[nodiscard]] auto LightCyan() const;
        [[nodiscard]] auto LightGoldenrodYellow() const;
        [[nodiscard]] auto LightGreen() const;
        [[nodiscard]] auto LightGray() const;
        [[nodiscard]] auto LightPink() const;
        [[nodiscard]] auto LightSalmon() const;
        [[nodiscard]] auto LightSeaGreen() const;
        [[nodiscard]] auto LightSkyBlue() const;
        [[nodiscard]] auto LightSlateGray() const;
        [[nodiscard]] auto LightSteelBlue() const;
        [[nodiscard]] auto LightYellow() const;
        [[nodiscard]] auto Lime() const;
        [[nodiscard]] auto LimeGreen() const;
        [[nodiscard]] auto Linen() const;
        [[nodiscard]] auto Magenta() const;
        [[nodiscard]] auto Maroon() const;
        [[nodiscard]] auto MediumAquamarine() const;
        [[nodiscard]] auto MediumBlue() const;
        [[nodiscard]] auto MediumOrchid() const;
        [[nodiscard]] auto MediumPurple() const;
        [[nodiscard]] auto MediumSeaGreen() const;
        [[nodiscard]] auto MediumSlateBlue() const;
        [[nodiscard]] auto MediumSpringGreen() const;
        [[nodiscard]] auto MediumTurquoise() const;
        [[nodiscard]] auto MediumVioletRed() const;
        [[nodiscard]] auto MidnightBlue() const;
        [[nodiscard]] auto MintCream() const;
        [[nodiscard]] auto MistyRose() const;
        [[nodiscard]] auto Moccasin() const;
        [[nodiscard]] auto NavajoWhite() const;
        [[nodiscard]] auto Navy() const;
        [[nodiscard]] auto OldLace() const;
        [[nodiscard]] auto Olive() const;
        [[nodiscard]] auto OliveDrab() const;
        [[nodiscard]] auto Orange() const;
        [[nodiscard]] auto OrangeRed() const;
        [[nodiscard]] auto Orchid() const;
        [[nodiscard]] auto PaleGoldenrod() const;
        [[nodiscard]] auto PaleGreen() const;
        [[nodiscard]] auto PaleTurquoise() const;
        [[nodiscard]] auto PaleVioletRed() const;
        [[nodiscard]] auto PapayaWhip() const;
        [[nodiscard]] auto PeachPuff() const;
        [[nodiscard]] auto Peru() const;
        [[nodiscard]] auto Pink() const;
        [[nodiscard]] auto Plum() const;
        [[nodiscard]] auto PowderBlue() const;
        [[nodiscard]] auto Purple() const;
        [[nodiscard]] auto Red() const;
        [[nodiscard]] auto RosyBrown() const;
        [[nodiscard]] auto RoyalBlue() const;
        [[nodiscard]] auto SaddleBrown() const;
        [[nodiscard]] auto Salmon() const;
        [[nodiscard]] auto SandyBrown() const;
        [[nodiscard]] auto SeaGreen() const;
        [[nodiscard]] auto SeaShell() const;
        [[nodiscard]] auto Sienna() const;
        [[nodiscard]] auto Silver() const;
        [[nodiscard]] auto SkyBlue() const;
        [[nodiscard]] auto SlateBlue() const;
        [[nodiscard]] auto SlateGray() const;
        [[nodiscard]] auto Snow() const;
        [[nodiscard]] auto SpringGreen() const;
        [[nodiscard]] auto SteelBlue() const;
        [[nodiscard]] auto Tan() const;
        [[nodiscard]] auto Teal() const;
        [[nodiscard]] auto Thistle() const;
        [[nodiscard]] auto Tomato() const;
        [[nodiscard]] auto Transparent() const;
        [[nodiscard]] auto Turquoise() const;
        [[nodiscard]] auto Violet() const;
        [[nodiscard]] auto Wheat() const;
        [[nodiscard]] auto White() const;
        [[nodiscard]] auto WhiteSmoke() const;
        [[nodiscard]] auto Yellow() const;
        [[nodiscard]] auto YellowGreen() const;
    };
    template <> struct consume<winrt::Windows::UI::IColorsStatics>
    {
        template <typename D> using type = consume_Windows_UI_IColorsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IUIContentRoot
    {
        [[nodiscard]] auto UIContext() const;
    };
    template <> struct consume<winrt::Windows::UI::IUIContentRoot>
    {
        template <typename D> using type = consume_Windows_UI_IUIContentRoot<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IUIContext
    {
    };
    template <> struct consume<winrt::Windows::UI::IUIContext>
    {
        template <typename D> using type = consume_Windows_UI_IUIContext<D>;
    };
    struct struct_Windows_UI_Color
    {
        uint8_t A;
        uint8_t R;
        uint8_t G;
        uint8_t B;
    };
    template <> struct abi<Windows::UI::Color>
    {
        using type = struct_Windows_UI_Color;
    };
    struct struct_Windows_UI_WindowId
    {
        uint64_t Value;
    };
    template <> struct abi<Windows::UI::WindowId>
    {
        using type = struct_Windows_UI_WindowId;
    };
}
#endif
