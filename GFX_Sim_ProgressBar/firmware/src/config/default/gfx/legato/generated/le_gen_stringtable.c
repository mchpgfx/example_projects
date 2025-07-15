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

const uint8_t stringTable_data[80] =
{
    0x03,0x00,0x01,0x00,0x00,0x10,0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x4C,0x00,0x00,
    0x36,0x00,0x4D,0x6F,0x76,0x65,0x20,0x74,0x68,0x65,0x20,0x73,0x6C,0x69,0x64,0x65,
    0x72,0x20,0x74,0x6F,0x20,0x63,0x68,0x61,0x6E,0x67,0x65,0x0A,0x74,0x68,0x65,0x20,
    0x66,0x69,0x6C,0x6C,0x20,0x6F,0x66,0x20,0x74,0x68,0x65,0x20,0x70,0x72,0x6F,0x67,
    0x72,0x65,0x73,0x73,0x20,0x62,0x61,0x72,0x02,0x00,0x35,0x30,0x01,0x00,0x25,0x00,
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
        80, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_String_Label;
leTableString string_String_Label1;
leTableString string_String_Label2;

void initializeStrings(void)
{
    leTableString_Constructor(&string_String_Label, stringID_String_Label);
    leTableString_Constructor(&string_String_Label1, stringID_String_Label1);
    leTableString_Constructor(&string_String_Label2, stringID_String_Label2);
}
