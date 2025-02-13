#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   4
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

const uint8_t stringTable_data[54] =
{
    0x04,0x00,0x01,0x00,0x00,0x14,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x22,0x00,0x00,
    0x00,0x2C,0x00,0x00,0x07,0x00,0x53,0x63,0x72,0x65,0x65,0x6E,0x31,0x00,0x01,0x00,
    0x31,0x00,0x08,0x00,0x53,0x63,0x72,0x65,0x65,0x6E,0x20,0x30,0x08,0x00,0x53,0x63,
    0x72,0x65,0x65,0x6E,0x20,0x32,
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
        54, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_strScreen1;
leTableString string_strDefaultCount;
leTableString string_strScreen0;
leTableString string_strScreen2;

void initializeStrings(void)
{
    leTableString_Constructor(&string_strScreen1, stringID_strScreen1);
    leTableString_Constructor(&string_strDefaultCount, stringID_strDefaultCount);
    leTableString_Constructor(&string_strScreen0, stringID_strScreen0);
    leTableString_Constructor(&string_strScreen2, stringID_strScreen2);
}
