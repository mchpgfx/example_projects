#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   3
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

const uint8_t stringTable_data[58] =
{
    0x03,0x00,0x01,0x00,0x00,0x10,0x00,0x00,0x00,0x1E,0x00,0x00,0x01,0x2E,0x00,0x00,
    0x0C,0x00,0x57,0x68,0x69,0x74,0x65,0x20,0x73,0x63,0x68,0x65,0x6D,0x65,0x0E,0x00,
    0x41,0x6C,0x70,0x68,0x61,0x20,0x42,0x6C,0x65,0x6E,0x64,0x69,0x6E,0x67,0x09,0x00,
    0x4E,0x6F,0x20,0x73,0x63,0x68,0x65,0x6D,0x65,0x00,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&Font0,
    (leFont*)&Font1,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        58, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_White_scheme;
leTableString string_AlphaBlending;
leTableString string_No_scheme;

void initializeStrings(void)
{
    leTableString_Constructor(&string_White_scheme, stringID_White_scheme);
    leTableString_Constructor(&string_AlphaBlending, stringID_AlphaBlending);
    leTableString_Constructor(&string_No_scheme, stringID_No_scheme);
}
