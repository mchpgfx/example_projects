#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   5
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

const uint8_t stringTable_data[60] =
{
    0x05,0x00,0x01,0x00,0x00,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x28,0x00,0x00,
    0x00,0x2E,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0x00,0x45,0x61,0x73,0x79,0x2E,0x00,
    0x05,0x00,0x46,0x61,0x73,0x74,0x2E,0x00,0x04,0x00,0x3E,0x3E,0x3E,0x3E,0x06,0x00,
    0x53,0x6D,0x61,0x72,0x74,0x2E,0x04,0x00,0x3C,0x3C,0x3C,0x3C,
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
        60, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_Easy;
leTableString string_Fast;
leTableString string_SlideRight;
leTableString string_Smart;
leTableString string_SlideLeft;

void initializeStrings(void)
{
    leTableString_Constructor(&string_Easy, stringID_Easy);
    leTableString_Constructor(&string_Fast, stringID_Fast);
    leTableString_Constructor(&string_SlideRight, stringID_SlideRight);
    leTableString_Constructor(&string_Smart, stringID_Smart);
    leTableString_Constructor(&string_SlideLeft, stringID_SlideLeft);
}
