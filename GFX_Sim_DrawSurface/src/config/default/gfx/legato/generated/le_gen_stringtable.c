#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   6
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

const uint8_t stringTable_data[78] =
{
    0x06,0x00,0x01,0x00,0x00,0x1C,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x2C,0x00,0x00,
    0x00,0x32,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x46,0x00,0x00,0x06,0x00,0x52,0x61,
    0x6E,0x64,0x6F,0x6D,0x05,0x00,0x45,0x72,0x61,0x73,0x65,0x00,0x04,0x00,0x42,0x6C,
    0x75,0x65,0x0B,0x00,0x4C,0x69,0x6E,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3A,0x00,
    0x03,0x00,0x52,0x65,0x64,0x00,0x05,0x00,0x47,0x72,0x65,0x65,0x6E,0x00,
};

/* font asset pointer list */
leFont* fontList[1] =
{
    (leFont*)&NotoSans_Regular,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        78, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_RandomStr;
leTableString string_EraseStr;
leTableString string_BlueStr;
leTableString string_LineWidthStr;
leTableString string_RedStr;
leTableString string_GreenStr;

void initializeStrings(void)
{
    leTableString_Constructor(&string_RandomStr, stringID_RandomStr);
    leTableString_Constructor(&string_EraseStr, stringID_EraseStr);
    leTableString_Constructor(&string_BlueStr, stringID_BlueStr);
    leTableString_Constructor(&string_LineWidthStr, stringID_LineWidthStr);
    leTableString_Constructor(&string_RedStr, stringID_RedStr);
    leTableString_Constructor(&string_GreenStr, stringID_GreenStr);
}
