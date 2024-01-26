#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   22
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[240] =
{
    0x16,0x00,0x01,0x00,0x00,0x5C,0x00,0x00,0x00,0x60,0x00,0x00,0x01,0x64,0x00,0x00,
    0x00,0x68,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x74,0x00,0x00,0x01,0x78,0x00,0x00,
    0x00,0x80,0x00,0x00,0x01,0x88,0x00,0x00,0x00,0x9E,0x00,0x00,0x00,0xA2,0x00,0x00,
    0x00,0xA6,0x00,0x00,0x00,0xAA,0x00,0x00,0x00,0xAE,0x00,0x00,0x00,0xB2,0x00,0x00,
    0x01,0xBA,0x00,0x00,0x00,0xD0,0x00,0x00,0x01,0xD4,0x00,0x00,0x00,0xDE,0x00,0x00,
    0x00,0xE2,0x00,0x00,0x01,0xE6,0x00,0x00,0x00,0xEC,0x00,0x00,0x01,0x00,0x2A,0x00,
    0x01,0x00,0x34,0x00,0x02,0x00,0x4F,0x4B,0x01,0x00,0x35,0x00,0x06,0x00,0x53,0x6D,
    0x61,0x72,0x74,0x2E,0x01,0x00,0x30,0x00,0x05,0x00,0x43,0x6C,0x65,0x61,0x72,0x00,
    0x05,0x00,0x46,0x61,0x73,0x74,0x2E,0x00,0x13,0x00,0x54,0x6F,0x75,0x63,0x68,0x20,
    0x74,0x6F,0x20,0x45,0x6E,0x74,0x65,0x72,0x20,0x43,0x6F,0x64,0x65,0x00,0x01,0x00,
    0x31,0x00,0x01,0x00,0x33,0x00,0x01,0x00,0x31,0x00,0x01,0x00,0x37,0x00,0x01,0x00,
    0x39,0x00,0x05,0x00,0x45,0x61,0x73,0x79,0x2E,0x00,0x13,0x00,0x53,0x65,0x74,0x20,
    0x74,0x6F,0x20,0x44,0x65,0x66,0x61,0x75,0x6C,0x74,0x20,0x43,0x6F,0x64,0x65,0x00,
    0x01,0x00,0x36,0x00,0x08,0x00,0x4E,0x65,0x77,0x20,0x43,0x6F,0x64,0x65,0x01,0x00,
    0x38,0x00,0x01,0x00,0x32,0x00,0x03,0x00,0x44,0x65,0x6C,0x00,0x01,0x00,0x23,0x00,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&NotoSans_48,
    (leFont*)&Font0,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        240, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_String_star;
leTableString string_String_4;
leTableString string_StrOK;
leTableString string_String_5;
leTableString string_Smart;
leTableString string_String_0;
leTableString string_StrClear;
leTableString string_Fast;
leTableString string_NumDefault;
leTableString string_String_1;
leTableString string_String_3;
leTableString string_Str1;
leTableString string_String_7;
leTableString string_String_9;
leTableString string_Easy;
leTableString string_StringDefault;
leTableString string_String_6;
leTableString string_StringNewCode;
leTableString string_String_8;
leTableString string_String_2;
leTableString string_StrDel;
leTableString string_String_pound;

void initializeStrings(void)
{
    leTableString_Constructor(&string_String_star, stringID_String_star);
    leTableString_Constructor(&string_String_4, stringID_String_4);
    leTableString_Constructor(&string_StrOK, stringID_StrOK);
    leTableString_Constructor(&string_String_5, stringID_String_5);
    leTableString_Constructor(&string_Smart, stringID_Smart);
    leTableString_Constructor(&string_String_0, stringID_String_0);
    leTableString_Constructor(&string_StrClear, stringID_StrClear);
    leTableString_Constructor(&string_Fast, stringID_Fast);
    leTableString_Constructor(&string_NumDefault, stringID_NumDefault);
    leTableString_Constructor(&string_String_1, stringID_String_1);
    leTableString_Constructor(&string_String_3, stringID_String_3);
    leTableString_Constructor(&string_Str1, stringID_Str1);
    leTableString_Constructor(&string_String_7, stringID_String_7);
    leTableString_Constructor(&string_String_9, stringID_String_9);
    leTableString_Constructor(&string_Easy, stringID_Easy);
    leTableString_Constructor(&string_StringDefault, stringID_StringDefault);
    leTableString_Constructor(&string_String_6, stringID_String_6);
    leTableString_Constructor(&string_StringNewCode, stringID_StringNewCode);
    leTableString_Constructor(&string_String_8, stringID_String_8);
    leTableString_Constructor(&string_String_2, stringID_String_2);
    leTableString_Constructor(&string_StrDel, stringID_StrDel);
    leTableString_Constructor(&string_String_pound, stringID_String_pound);
}
