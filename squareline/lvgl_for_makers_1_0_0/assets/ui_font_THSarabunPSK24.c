/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font C:\Users\chan1\Desktop\Works\lvgl_for_makers_screen\squareline\lvgl_for_makers_1_0_0\assets\THSarabunNew Bold.ttf -o C:\Users\chan1\Desktop\Works\lvgl_for_makers_screen\squareline\lvgl_for_makers_1_0_0\assets\ui_font_THSarabunPSK24.c --format lvgl -r 0x20-0x7f -r 0x0E00-0x0E7F
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_THSARABUNPSK24
#define UI_FONT_THSARABUNPSK24 1
#endif

#if UI_FONT_THSARABUNPSK24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x55, 0x55, 0xf,

    /* U+0022 "\"" */
    0x99, 0x99, 0x90,

    /* U+0023 "#" */
    0x31, 0x10, 0x88, 0xdf, 0xf2, 0x31, 0x19, 0x89,
    0xff, 0x62, 0x31, 0x11, 0x88, 0xc0,

    /* U+0024 "$" */
    0x10, 0x47, 0xe0, 0x83, 0x6, 0xe, 0xc, 0x10,
    0x63, 0xf8, 0x41, 0x0,

    /* U+0025 "%" */
    0x70, 0x23, 0x61, 0x8, 0x8c, 0x22, 0x20, 0x89,
    0x82, 0x6c, 0xe7, 0x24, 0xc1, 0x91, 0x4, 0x44,
    0x31, 0x11, 0x84, 0xc4, 0xe,

    /* U+0026 "&" */
    0x1c, 0xc, 0x82, 0x20, 0x88, 0x34, 0x7, 0x7,
    0x87, 0xb3, 0xc4, 0xb0, 0xec, 0x31, 0x8e, 0x3c,
    0xc0,

    /* U+0027 "'" */
    0xf8,

    /* U+0028 "(" */
    0x36, 0x44, 0x88, 0x88, 0x88, 0x84, 0x46, 0x30,

    /* U+0029 ")" */
    0xc6, 0x22, 0x31, 0x11, 0x11, 0x32, 0x26, 0xc0,

    /* U+002A "*" */
    0x1, 0xe3, 0x3f, 0x31, 0xe0, 0x0,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x0,

    /* U+002C "," */
    0xf6, 0x0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x3, 0x3, 0x6, 0x6, 0x4, 0xc, 0x8, 0x18,
    0x10, 0x30, 0x20, 0x60, 0x40, 0xc0,

    /* U+0030 "0" */
    0x38, 0x89, 0x14, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x89, 0x11, 0xc0,

    /* U+0031 "1" */
    0x10, 0xc7, 0x14, 0x10, 0x41, 0x4, 0x10, 0x41,
    0x1f,

    /* U+0032 "2" */
    0x3c, 0xc5, 0x8, 0x10, 0x60, 0x83, 0xc, 0x30,
    0xc3, 0x7, 0xf0,

    /* U+0033 "3" */
    0x39, 0x8a, 0x10, 0x61, 0x87, 0x89, 0x81, 0x2,
    0x6, 0x17, 0xc0,

    /* U+0034 "4" */
    0xc, 0x1c, 0x34, 0x64, 0x64, 0x44, 0xc4, 0xc4,
    0xfe, 0x4, 0x4, 0x4,

    /* U+0035 "5" */
    0x7e, 0x81, 0x2, 0x7, 0x88, 0x80, 0x81, 0x2,
    0xe, 0x37, 0xc0,

    /* U+0036 "6" */
    0x0, 0x1c, 0xe1, 0x4, 0x1f, 0x31, 0x41, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+0037 "7" */
    0x7f, 0x6, 0x6, 0xc, 0xc, 0x8, 0x18, 0x10,
    0x10, 0x10, 0x10, 0x10,

    /* U+0038 "8" */
    0x3c, 0xcd, 0xa, 0x16, 0x67, 0x91, 0xc1, 0x83,
    0x7, 0x13, 0xe0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0xcf, 0x82, 0xc,
    0x73, 0x80, 0x0,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3, 0xd8,

    /* U+003C "<" */
    0x0, 0x81, 0xc3, 0x87, 0xe, 0x7, 0x0, 0xe0,
    0x38, 0x7, 0x0, 0xc0,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x80, 0x70, 0xe, 0x3, 0x80, 0x70, 0x1c, 0x38,
    0x70, 0xe0, 0x40, 0x0,

    /* U+003F "?" */
    0x78, 0x10, 0x41, 0x8, 0x63, 0x8, 0x20, 0x3,
    0xc,

    /* U+0040 "@" */
    0xf, 0x83, 0x4, 0x6f, 0x24, 0x1b, 0x80, 0x98,
    0x79, 0x98, 0x99, 0x9, 0x91, 0xac, 0xfc, 0x40,
    0x3, 0x8, 0x1f, 0x80,

    /* U+0041 "A" */
    0x4, 0x1, 0xc0, 0x28, 0xd, 0x1, 0xb0, 0x22,
    0xc, 0x61, 0xfc, 0x60, 0x8c, 0x19, 0x1, 0x60,
    0x30,

    /* U+0042 "B" */
    0xf9, 0xe, 0xc, 0x18, 0x7f, 0xa1, 0xc1, 0x83,
    0x6, 0x17, 0xc0,

    /* U+0043 "C" */
    0x1f, 0xb0, 0x10, 0x10, 0x8, 0x4, 0x2, 0x1,
    0x0, 0x80, 0x20, 0x18, 0x3, 0xe0,

    /* U+0044 "D" */
    0xfc, 0x41, 0xa0, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x81, 0xc0, 0xa0, 0x9f, 0x80,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0x1f, 0x90, 0x50, 0x10, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xa0, 0x58, 0x23, 0xf0,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xfe, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x10,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0x45, 0xe0,

    /* U+004B "K" */
    0x83, 0x86, 0x8c, 0x98, 0xb0, 0xe0, 0xf0, 0x98,
    0x8c, 0x86, 0x86, 0x83,

    /* U+004C "L" */
    0x81, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+004D "M" */
    0x60, 0x33, 0x1, 0x9c, 0x1c, 0xe0, 0xe5, 0x5,
    0x2c, 0x69, 0x22, 0x49, 0xb2, 0xcd, 0x9e, 0x28,
    0xf1, 0xc7, 0x84, 0x30,

    /* U+004E "N" */
    0x80, 0xe0, 0x78, 0x36, 0x19, 0xc, 0xc6, 0x33,
    0xd, 0x86, 0xc1, 0xe0, 0x70, 0x10,

    /* U+004F "O" */
    0x1f, 0x4, 0x11, 0x1, 0x60, 0x38, 0x3, 0x0,
    0x60, 0xc, 0x1, 0xc0, 0x68, 0x8, 0x82, 0xf,
    0x80,

    /* U+0050 "P" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x4, 0x11, 0x1, 0x60, 0x38, 0x3, 0x0,
    0x60, 0xc, 0x1, 0xc0, 0x68, 0x8, 0x82, 0xf,
    0x80, 0x1e, 0x0, 0x40,

    /* U+0052 "R" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xff, 0x46, 0x87,
    0x6, 0xc, 0x10,

    /* U+0053 "S" */
    0x3e, 0x82, 0x4, 0xe, 0xf, 0x7, 0x3, 0x2,
    0x6, 0x17, 0xc0,

    /* U+0054 "T" */
    0xff, 0xc2, 0x0, 0x80, 0x20, 0x8, 0x2, 0x0,
    0x80, 0x20, 0x8, 0x2, 0x0, 0x80, 0x20,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+0056 "V" */
    0xc0, 0xd0, 0x34, 0x9, 0x86, 0x21, 0x8c, 0x43,
    0x30, 0x48, 0x1a, 0x7, 0x80, 0xc0, 0x30,

    /* U+0057 "W" */
    0xc3, 0x7, 0x86, 0x9, 0xe, 0x12, 0x14, 0x66,
    0x68, 0xcc, 0x99, 0x9, 0x12, 0x16, 0x2c, 0x3c,
    0x78, 0x70, 0xe0, 0x60, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0xc0, 0xd8, 0x63, 0x10, 0x4c, 0x1e, 0x3, 0x0,
    0xe0, 0x78, 0x33, 0xc, 0x66, 0x1b, 0x3,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x41, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0x7f, 0xc0, 0x60, 0x30, 0xc, 0x6, 0x3, 0x1,
    0x80, 0x60, 0x30, 0x18, 0x4, 0x3, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x38,

    /* U+005C "\\" */
    0x40, 0x60, 0x20, 0x30, 0x10, 0x18, 0x8, 0xc,
    0x4, 0x6, 0x2, 0x3, 0x3,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x78,

    /* U+005E "^" */
    0x18, 0x18, 0x1c, 0x34, 0x24, 0x66, 0x42, 0xc3,
    0xc1,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x89, 0x80,

    /* U+0061 "a" */
    0xfd, 0xc, 0x9, 0xf4, 0x30, 0x60, 0xc3, 0x7e,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc2, 0xfc,

    /* U+0063 "c" */
    0x3c, 0x82, 0x4, 0x8, 0x10, 0x20, 0x20, 0x3c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x1, 0x3d, 0x43, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x43, 0x3f,

    /* U+0065 "e" */
    0x3c, 0x66, 0xc3, 0xc1, 0xff, 0xc0, 0xc0, 0x61,
    0x3f,

    /* U+0066 "f" */
    0x1c, 0xc2, 0x8, 0xf8, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x20,

    /* U+0067 "g" */
    0x7f, 0x9a, 0x14, 0x2c, 0xcf, 0x30, 0x38, 0x3c,
    0x18, 0x10, 0x27, 0x80,

    /* U+0068 "h" */
    0x81, 0x2, 0x4, 0xb, 0x98, 0xa0, 0xc1, 0x83,
    0x6, 0xc, 0x18, 0x20,

    /* U+0069 "i" */
    0xf1, 0x55, 0x55,

    /* U+006A "j" */
    0x33, 0x1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x6c,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x8, 0xd3, 0x2c, 0x70, 0xe1,
    0x62, 0x64, 0x68, 0x60,

    /* U+006C "l" */
    0x92, 0x49, 0x24, 0x92, 0x36,

    /* U+006D "m" */
    0xfc, 0xe6, 0x38, 0xa0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0x8,

    /* U+006E "n" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+006F "o" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0xc3, 0x42,
    0x3c,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0x81, 0xc2,
    0xfc, 0x80, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x81, 0x43,
    0x3f, 0x1, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xfc, 0x88, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x7c, 0x61, 0xc7, 0xc, 0x31, 0xf0,

    /* U+0074 "t" */
    0x20, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x7,

    /* U+0075 "u" */
    0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x46,
    0x7a,

    /* U+0076 "v" */
    0xc1, 0x21, 0x90, 0xcc, 0x42, 0x61, 0xa0, 0x70,
    0x38, 0x18, 0x0,

    /* U+0077 "w" */
    0xc6, 0x3c, 0x62, 0xce, 0x24, 0xb6, 0x49, 0x65,
    0x14, 0x71, 0xc3, 0xc, 0x20, 0xc0,

    /* U+0078 "x" */
    0xc3, 0x33, 0xd, 0x83, 0x81, 0x81, 0xe0, 0x98,
    0xc4, 0xc3, 0x0,

    /* U+0079 "y" */
    0xc1, 0xa1, 0x98, 0xcc, 0x43, 0x61, 0xa0, 0x70,
    0x30, 0x18, 0x8, 0xc, 0x1c, 0x0, 0x0,

    /* U+007A "z" */
    0xff, 0x6, 0xc, 0x8, 0x18, 0x30, 0x60, 0x40,
    0xff,

    /* U+007B "{" */
    0x3a, 0x10, 0x82, 0x10, 0x98, 0x21, 0x18, 0x84,
    0x1c,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe0, 0x84, 0x22, 0x10, 0x83, 0x21, 0x4, 0x21,
    0x70,

    /* U+007E "~" */
    0x70, 0xce, 0x61, 0xc0,

    /* U+0E00 "฀" */
    0x0,

    /* U+0E01 "ก" */
    0x3c, 0x62, 0x41, 0x21, 0x41, 0x41, 0x41, 0x41,
    0x41, 0x41,

    /* U+0E02 "ข" */
    0x71, 0xf9, 0x99, 0x69, 0x11, 0x11, 0x11, 0x11,
    0x11, 0xe,

    /* U+0E03 "ฃ" */
    0x79, 0xd5, 0xe5, 0x95, 0x9d, 0x69, 0x9, 0x9,
    0x9, 0x6,

    /* U+0E04 "ค" */
    0x38, 0x8e, 0x6d, 0xbf, 0x7f, 0x58, 0xa1, 0x42,
    0x84,

    /* U+0E05 "ฅ" */
    0x77, 0xb6, 0xc, 0xfa, 0x77, 0xd8, 0xa1, 0x42,
    0x84,

    /* U+0E06 "ฆ" */
    0x68, 0xca, 0x79, 0x32, 0x99, 0x8b, 0x44, 0xe2,
    0x9d, 0x4b, 0x98, 0x40,

    /* U+0E07 "ง" */
    0x11, 0x4a, 0x78, 0xe5, 0xa7, 0x18, 0x40,

    /* U+0E08 "จ" */
    0x7c, 0xc3, 0x1, 0x31, 0x59, 0x59, 0x39, 0x9,
    0xd, 0xe,

    /* U+0E09 "ฉ" */
    0x7c, 0xc6, 0xc2, 0x2, 0xe2, 0xa2, 0xe6, 0x2d,
    0x3d, 0x27,

    /* U+0E0A "ช" */
    0x1, 0xb8, 0xbe, 0xd3, 0x66, 0x90, 0x88, 0x44,
    0x22, 0x11, 0x8, 0x83, 0x80,

    /* U+0E0B "ซ" */
    0x1, 0xbc, 0xb5, 0x5c, 0xe9, 0x54, 0xe9, 0xa4,
    0x12, 0x9, 0x4, 0x81, 0x80,

    /* U+0E0C "ฌ" */
    0x7c, 0x38, 0xc7, 0x88, 0xb1, 0x14, 0x22, 0x84,
    0x58, 0xcc, 0xaf, 0x95, 0x6c, 0x64,

    /* U+0E0D "ญ" */
    0x3c, 0x14, 0x61, 0x62, 0x16, 0x21, 0x42, 0x14,
    0x21, 0x72, 0x16, 0xa1, 0x4a, 0x13, 0x1e, 0x0,
    0x0, 0x39, 0x2, 0x90, 0x3a, 0x1, 0xe0,

    /* U+0E0E "ฎ" */
    0x1e, 0x38, 0x9c, 0x23, 0x12, 0x9, 0x5, 0x83,
    0x21, 0x90, 0xb0, 0x40, 0x20, 0x93, 0xca, 0x7c,
    0xe2,

    /* U+0E0F "ฏ" */
    0x1e, 0x38, 0x9c, 0x23, 0x12, 0x9, 0x5, 0x83,
    0x21, 0x90, 0xb0, 0x40, 0x23, 0x1f, 0x8c, 0xdd,
    0xd2,

    /* U+0E10 "ฐ" */
    0x3f, 0xbc, 0x3, 0xc6, 0x25, 0x92, 0xc8, 0xe4,
    0x12, 0x9, 0x3, 0x1, 0xc3, 0x6f, 0x74, 0xcb,
    0xbc,

    /* U+0E11 "ฑ" */
    0x78, 0xd1, 0x5e, 0x56, 0x59, 0x9a, 0x5f, 0x11,
    0x44, 0x51, 0x18, 0x46, 0x10,

    /* U+0E12 "ฒ" */
    0x64, 0x3f, 0xc6, 0x8, 0xcd, 0x1a, 0x63, 0x7c,
    0x56, 0x8b, 0xbd, 0x65, 0xe8, 0xe4,

    /* U+0E13 "ณ" */
    0x3c, 0x12, 0x30, 0x98, 0x84, 0xc4, 0x24, 0x21,
    0x21, 0x9, 0xc9, 0xcd, 0x5d, 0x4b, 0xc9, 0x91,
    0x80,

    /* U+0E14 "ด" */
    0x3c, 0x42, 0x99, 0xa5, 0xbd, 0xc9, 0xd1, 0x71,
    0x61, 0x41,

    /* U+0E15 "ต" */
    0x66, 0xff, 0x81, 0x99, 0xa5, 0xbd, 0xd9, 0x71,
    0x61, 0x41,

    /* U+0E16 "ถ" */
    0x3c, 0x62, 0x61, 0x61, 0x41, 0x41, 0x71, 0x69,
    0x49, 0x31,

    /* U+0E17 "ท" */
    0x43, 0x53, 0x69, 0xad, 0x92, 0xc9, 0x44, 0xe2,
    0x61, 0x30, 0x90, 0x40,

    /* U+0E18 "ธ" */
    0x7e, 0x40, 0xfc, 0x6, 0x42, 0x42, 0x42, 0x42,
    0x42, 0x3c,

    /* U+0E19 "น" */
    0x60, 0xd0, 0x68, 0x2c, 0x12, 0x9, 0x4, 0x84,
    0x59, 0x3c, 0x99, 0x80,

    /* U+0E1A "บ" */
    0x40, 0xd0, 0x68, 0x2c, 0x12, 0x9, 0x4, 0x82,
    0x41, 0x20, 0x8f, 0x80,

    /* U+0E1B "ป" */
    0x0, 0x80, 0x40, 0x20, 0x14, 0xd, 0x6, 0x82,
    0xc1, 0x20, 0x90, 0x48, 0x24, 0x12, 0x8, 0xf8,

    /* U+0E1C "ผ" */
    0x61, 0x91, 0x91, 0xe1, 0x81, 0x99, 0xbd, 0xe7,
    0xc3, 0x81,

    /* U+0E1D "ฝ" */
    0x1, 0x1, 0x1, 0x1, 0x61, 0x91, 0x91, 0xe1,
    0x81, 0x99, 0xbd, 0xe7, 0xc3, 0x81,

    /* U+0E1E "พ" */
    0x46, 0x69, 0x9a, 0x65, 0xbd, 0x29, 0x4a, 0x53,
    0x9c, 0xc3, 0x30, 0xc8, 0x10,

    /* U+0E1F "ฟ" */
    0x0, 0x40, 0x10, 0x4, 0x1, 0x46, 0x69, 0x9a,
    0x65, 0xbd, 0x29, 0x4a, 0x53, 0x9c, 0xc3, 0x30,
    0xc8, 0x10,

    /* U+0E20 "ภ" */
    0x1e, 0x18, 0x9c, 0x23, 0x12, 0x9, 0x5, 0x83,
    0x21, 0x90, 0xb0, 0x40,

    /* U+0E21 "ม" */
    0x61, 0xa1, 0xa1, 0x61, 0x21, 0x21, 0x61, 0x9d,
    0x97, 0x63,

    /* U+0E22 "ย" */
    0x73, 0x27, 0x8c, 0x17, 0x30, 0x60, 0xc1, 0x82,
    0xf8,

    /* U+0E23 "ร" */
    0x7e, 0xc1, 0xe0, 0x20, 0x40, 0x83, 0xa, 0x14,
    0x18,

    /* U+0E24 "ฤ" */
    0x3c, 0x62, 0x61, 0x61, 0x41, 0x41, 0x71, 0x69,
    0x49, 0x31, 0x1, 0x1, 0x1,

    /* U+0E25 "ล" */
    0x3c, 0x63, 0xc1, 0x3f, 0x63, 0x41, 0x71, 0x69,
    0x49, 0x31,

    /* U+0E26 "ฦ" */
    0x1e, 0x18, 0x9c, 0x23, 0x12, 0x9, 0x5, 0x83,
    0x21, 0x90, 0xb0, 0x40, 0x20, 0x10, 0x8,

    /* U+0E27 "ว" */
    0x7d, 0x8e, 0x8, 0x10, 0x20, 0x41, 0x85, 0xa,
    0x1c,

    /* U+0E28 "ศ" */
    0x2, 0x7d, 0x1c, 0xdb, 0x7e, 0xfe, 0xb1, 0x42,
    0x85, 0x8,

    /* U+0E29 "ษ" */
    0xc0, 0xa8, 0x2e, 0xe8, 0xab, 0x2a, 0xc9, 0xe2,
    0x8, 0x82, 0x21, 0x87, 0xc0,

    /* U+0E2A "ส" */
    0x1, 0x3f, 0x63, 0xc1, 0x3f, 0x63, 0x41, 0x71,
    0x69, 0x49, 0x31,

    /* U+0E2B "ห" */
    0x63, 0x51, 0x68, 0xac, 0x72, 0x69, 0x64, 0xb2,
    0x71, 0x30, 0x90, 0x40,

    /* U+0E2C "ฬ" */
    0x0, 0x28, 0x3a, 0x89, 0x51, 0x66, 0x1c, 0x40,
    0x89, 0x91, 0x5a, 0x39, 0xc6, 0x18, 0x81, 0x0,

    /* U+0E2D "อ" */
    0x7c, 0xc3, 0x1, 0x31, 0x49, 0x49, 0x71, 0x41,
    0x41, 0x3e,

    /* U+0E2E "ฮ" */
    0x7d, 0x86, 0x7e, 0x22, 0x92, 0x92, 0x62, 0x42,
    0x42, 0x3c,

    /* U+0E2F "ฯ" */
    0x67, 0x2e, 0x6b, 0x90, 0x20, 0x40, 0x81, 0x2,
    0x4,

    /* U+0E30 "ะ" */
    0xe6, 0x9a, 0xde, 0x0, 0xe, 0x69, 0xad, 0xe0,

    /* U+0E31 "ั" */
    0xe7, 0x4e, 0xb3, 0xc0,

    /* U+0E32 "า" */
    0x7b, 0x38, 0x41, 0x4, 0x10, 0x41, 0x4, 0x10,

    /* U+0E33 "ำ" */
    0x60, 0x12, 0x2, 0x40, 0x48, 0x6, 0x0, 0x0,
    0x0, 0xf0, 0x33, 0x4, 0x20, 0x4, 0x0, 0x80,
    0x10, 0x2, 0x0, 0x40, 0x8, 0x1,

    /* U+0E34 "ิ" */
    0x7c, 0x46, 0xfe, 0x3,

    /* U+0E35 "ี" */
    0x2, 0xf7, 0x1f, 0xf0, 0x60,

    /* U+0E36 "ึ" */
    0x3, 0x7d, 0xc6, 0xfe, 0x3,

    /* U+0E37 "ื" */
    0xa, 0xf7, 0x1f, 0xf0, 0x60,

    /* U+0E38 "ุ" */
    0x75, 0x92,

    /* U+0E39 "ู" */
    0x66, 0x96, 0x49, 0x3c,

    /* U+0E3A "ฺ" */
    0x80,

    /* U+0E3F "฿" */
    0x20, 0x8f, 0xa3, 0x86, 0x3f, 0xa3, 0x86, 0x18,
    0xfc, 0x20, 0x80,

    /* U+0E40 "เ" */
    0x88, 0x88, 0x88, 0xe9, 0x96,

    /* U+0E41 "แ" */
    0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0xe6, 0x95,
    0x99, 0x66,

    /* U+0E42 "โ" */
    0x77, 0x9b, 0x81, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x81, 0xc3, 0x44, 0x86,

    /* U+0E43 "ใ" */
    0x71, 0x92, 0xa7, 0x40, 0x81, 0x2, 0x4, 0x8,
    0x10, 0x20, 0x40, 0xc2, 0x44, 0x86,

    /* U+0E44 "ไ" */
    0x48, 0xb1, 0xe3, 0x40, 0x81, 0x2, 0x4, 0x8,
    0x10, 0x20, 0x40, 0xc1, 0x44, 0x86,

    /* U+0E45 "ๅ" */
    0x7b, 0x18, 0x41, 0x4, 0x10, 0x41, 0x4, 0x10,
    0x41, 0x4,

    /* U+0E46 "ๆ" */
    0x7d, 0xbf, 0x8c, 0x99, 0x2c, 0x40, 0x81, 0x2,
    0x4, 0x8, 0x10, 0x20, 0x40,

    /* U+0E47 "็" */
    0x4, 0x17, 0xa3, 0xfe, 0x70,

    /* U+0E48 "่" */
    0xe0,

    /* U+0E49 "้" */
    0xee, 0xa7, 0xbc,

    /* U+0E4A "๊" */
    0x7b, 0x96, 0xb6, 0xc0,

    /* U+0E4B "๋" */
    0x4f, 0x40,

    /* U+0E4C "์" */
    0x17, 0xea, 0xe0,

    /* U+0E4D "ํ" */
    0x69, 0x96,

    /* U+0E4E "๎" */
    0x74, 0x68, 0xe0,

    /* U+0E4F "๏" */
    0x3c, 0x5e, 0xa3, 0xa3, 0xa3, 0x9d, 0x42, 0x3c,

    /* U+0E50 "๐" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0E51 "๑" */
    0x3c, 0x42, 0x81, 0x99, 0xa5, 0xbd, 0x4d, 0x7a,

    /* U+0E52 "๒" */
    0xc0, 0x10, 0x4, 0x1, 0x3e, 0x5b, 0x57, 0x15,
    0x45, 0x71, 0x40, 0x5f, 0xf0,

    /* U+0E53 "๓" */
    0x7b, 0x22, 0x61, 0x30, 0x9e, 0x4c, 0xa5, 0xd2,

    /* U+0E54 "๔" */
    0x0, 0x20, 0x2, 0x0, 0x43, 0xf8, 0x4c, 0x9,
    0x20, 0x92, 0x9, 0xc0, 0x47, 0x83, 0xfc, 0x0,
    0x40,

    /* U+0E55 "๕" */
    0xe, 0x21, 0x4c, 0x3f, 0x3f, 0xcc, 0xc1, 0x24,
    0x24, 0x84, 0xe0, 0x47, 0x87, 0xf8, 0x0, 0x0,

    /* U+0E56 "๖" */
    0x80, 0x60, 0x10, 0xf, 0xc6, 0x12, 0x4, 0xc2,
    0x91, 0x59, 0x1f, 0x0,

    /* U+0E57 "๗" */
    0x0, 0x40, 0x8, 0x1, 0x3f, 0x28, 0x95, 0x12,
    0xb8, 0x54, 0x8e, 0x93, 0x8c, 0x60,

    /* U+0E58 "๘" */
    0x0, 0x40, 0x10, 0xc, 0xfc, 0xc0, 0x20, 0x8,
    0x1a, 0xe9, 0xfe, 0x50, 0xe0,

    /* U+0E59 "๙" */
    0x0, 0x40, 0x10, 0x4, 0xff, 0x46, 0x21, 0x8b,
    0x23, 0x24, 0x49, 0x8c, 0x20,

    /* U+0E5A "๚" */
    0x66, 0xf2, 0xde, 0x6e, 0xb9, 0x90, 0x22, 0x4,
    0x40, 0x88, 0x11, 0x2, 0x20, 0x44,

    /* U+0E5B "๛" */
    0x70, 0x3, 0x20, 0x8, 0xa8, 0x2e, 0xbc, 0xab,
    0xfe, 0xce, 0x4, 0x40, 0xe, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 87, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 65, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 7, .adv_w = 177, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 141, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 33, .adv_w = 264, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 65, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 72, .adv_w = 94, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 80, .adv_w = 94, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 88, .adv_w = 132, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 94, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 66, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 107, .adv_w = 87, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 108, .adv_w = 66, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 106, .box_w = 8, .box_h = 14, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 123, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 145, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 145, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 66, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 66, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 240, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 160, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 256, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 220, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 297, .adv_w = 173, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 137, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 181, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 63, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 108, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 220, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 181, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 199, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 516, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 185, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 235, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 152, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 173, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 90, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 655, .adv_w = 103, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 668, .adv_w = 90, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 674, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 683, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 685, .adv_w = 81, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 687, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 133, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 98, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 760, .adv_w = 162, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 63, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 66, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 783, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 244, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 162, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 158, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 166, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 845, .adv_w = 166, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 858, .adv_w = 94, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 114, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 99, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 137, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 898, .adv_w = 184, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 134, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 938, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 98, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 956, .adv_w = 68, .box_w = 1, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 959, .adv_w = 98, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 968, .adv_w = 162, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 972, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 159, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 166, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 155, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 155, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1021, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 122, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 217, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 217, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1123, .adv_w = 163, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1140, .adv_w = 163, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1157, .adv_w = 143, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1174, .adv_w = 189, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 212, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 221, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1218, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1228, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1238, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1248, .adv_w = 168, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1270, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1282, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1294, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1310, .adv_w = 159, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 159, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 185, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 185, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 148, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 150, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1418, .adv_w = 153, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1428, .adv_w = 163, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1443, .adv_w = 146, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1452, .adv_w = 155, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1462, .adv_w = 177, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 168, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 180, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1514, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 148, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 146, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1543, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1551, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = -6, .ofs_y = 12},
    {.bitmap_index = 1555, .adv_w = 129, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1563, .adv_w = 129, .box_w = 11, .box_h = 16, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 0, .box_w = 8, .box_h = 4, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1589, .adv_w = 0, .box_w = 7, .box_h = 5, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1594, .adv_w = 0, .box_w = 8, .box_h = 5, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1599, .adv_w = 0, .box_w = 7, .box_h = 5, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1604, .adv_w = 0, .box_w = 3, .box_h = 5, .ofs_x = -5, .ofs_y = -6},
    {.bitmap_index = 1606, .adv_w = 0, .box_w = 6, .box_h = 5, .ofs_x = -7, .ofs_y = -6},
    {.bitmap_index = 1610, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 1611, .adv_w = 149, .box_w = 6, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1622, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 152, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1637, .adv_w = 97, .box_w = 7, .box_h = 16, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1651, .adv_w = 103, .box_w = 7, .box_h = 16, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1665, .adv_w = 97, .box_w = 7, .box_h = 16, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1679, .adv_w = 80, .box_w = 6, .box_h = 13, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1689, .adv_w = 168, .box_w = 7, .box_h = 14, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1702, .adv_w = 0, .box_w = 6, .box_h = 6, .ofs_x = -8, .ofs_y = 11},
    {.bitmap_index = 1707, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -3, .ofs_y = 17},
    {.bitmap_index = 1708, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -5, .ofs_y = 16},
    {.bitmap_index = 1711, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = -6, .ofs_y = 16},
    {.bitmap_index = 1715, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -4, .ofs_y = 17},
    {.bitmap_index = 1717, .adv_w = 0, .box_w = 4, .box_h = 5, .ofs_x = -4, .ofs_y = 16},
    {.bitmap_index = 1720, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -4, .ofs_y = 11},
    {.bitmap_index = 1722, .adv_w = 0, .box_w = 4, .box_h = 5, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1725, .adv_w = 173, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1733, .adv_w = 175, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1740, .adv_w = 175, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 175, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 175, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1769, .adv_w = 175, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1786, .adv_w = 175, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1802, .adv_w = 175, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1814, .adv_w = 175, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 175, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1841, .adv_w = 175, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1854, .adv_w = 202, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1868, .adv_w = 268, .box_w = 14, .box_h = 8, .ofs_x = 2, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3584, .range_length = 59, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 29, .glyph_id_start = 155,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 90,
    39, 34,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    49, 34,
    49, 43,
    53, 34,
    53, 43,
    53, 66,
    53, 68,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    55, 34,
    55, 43,
    55, 68,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 84,
    56, 34,
    56, 68,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 84,
    58, 34,
    58, 66,
    58, 68,
    58, 70,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    156, 98,
    156, 99,
    156, 104,
    156, 106,
    156, 107,
    156, 113,
    156, 131,
    156, 135,
    157, 98,
    157, 99,
    157, 104,
    157, 106,
    157, 107,
    157, 113,
    157, 131,
    157, 135,
    158, 98,
    158, 99,
    158, 104,
    158, 106,
    158, 107,
    158, 113,
    158, 131,
    158, 135,
    159, 98,
    159, 99,
    159, 104,
    159, 106,
    159, 107,
    159, 113,
    159, 131,
    159, 135,
    160, 98,
    160, 99,
    160, 104,
    160, 106,
    160, 107,
    160, 113,
    160, 131,
    160, 135
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -15, -19, -17, -15, -6, -15, -31, -31,
    -27, -27, -19, -23, -15, -15, -12, -12,
    -12, -13, -12, -12, -12, -12, -12, -12,
    -12, -12, -12, -12, -12, -12, -12, -19,
    -15, -12, -12, -12, -12, -12, -8, -17,
    -8, -8, -8, -8, -8, -8, -15, -8,
    -10, -10, -10, -8, -8, -10, -8, -10,
    -8, -10, -8, -12, -12, -8, -12, -12,
    -12, -10, -8, -12, -12, -8, -12, -12,
    -8, -10, -8, -12, -12, -8, -12, -12,
    -12, -10, -8, -12, -12, -8, -12, -12,
    -12, -10, -8, -12, -12, -8, -12, -12,
    -12, -10, -8
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 99,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_THSarabunPSK24 = {
#else
lv_font_t ui_font_THSarabunPSK24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_THSARABUNPSK24*/

