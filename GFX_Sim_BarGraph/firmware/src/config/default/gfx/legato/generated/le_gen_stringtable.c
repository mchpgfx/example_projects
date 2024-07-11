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

const uint8_t stringTable_data[72] =
{
    0x05,0x00,0x01,0x00,0x00,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x2C,0x00,0x00,
    0x00,0x36,0x00,0x00,0x00,0x3E,0x00,0x00,0x06,0x00,0x61,0x70,0x70,0x6C,0x65,0x73,
    0x09,0x00,0x4B,0x69,0x6C,0x6F,0x67,0x72,0x61,0x6D,0x73,0x00,0x08,0x00,0x63,0x68,
    0x65,0x72,0x72,0x69,0x65,0x73,0x06,0x00,0x50,0x6F,0x75,0x6E,0x64,0x73,0x07,0x00,
    0x62,0x61,0x6E,0x61,0x6E,0x61,0x73,0x00,
};

/* font asset pointer list */
leFont* fontList[1] =
{
    (leFont*)&Font0,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        72, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_apple;
leTableString string_Kilograms;
leTableString string_cherry;
leTableString string_Pounds;
leTableString string_banana;

void initializeStrings(void)
{
    leTableString_Constructor(&string_apple, stringID_apple);
    leTableString_Constructor(&string_Kilograms, stringID_Kilograms);
    leTableString_Constructor(&string_cherry, stringID_cherry);
    leTableString_Constructor(&string_Pounds, stringID_Pounds);
    leTableString_Constructor(&string_banana, stringID_banana);
}
