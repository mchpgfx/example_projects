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

const uint8_t stringTable_data[140] =
{
    0x06,0x00,0x01,0x00,0x01,0x1C,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x42,0x00,0x00,
    0x01,0x5A,0x00,0x00,0x00,0x66,0x00,0x00,0x01,0x80,0x00,0x00,0x09,0x00,0x54,0x69,
    0x6D,0x65,0x6C,0x69,0x6E,0x65,0x31,0x00,0x17,0x00,0x47,0x65,0x6E,0x65,0x72,0x61,
    0x74,0x65,0x20,0x52,0x61,0x6E,0x64,0x6F,0x6D,0x20,0x56,0x61,0x6C,0x75,0x65,0x73,
    0x20,0x00,0x16,0x00,0x47,0x65,0x6E,0x65,0x72,0x61,0x74,0x65,0x20,0x53,0x74,0x61,
    0x74,0x69,0x63,0x20,0x56,0x61,0x6C,0x75,0x65,0x73,0x09,0x00,0x54,0x69,0x6D,0x65,
    0x6C,0x69,0x6E,0x65,0x33,0x00,0x18,0x00,0x47,0x65,0x6E,0x65,0x72,0x61,0x74,0x69,
    0x6E,0x67,0x20,0x52,0x61,0x6E,0x64,0x6F,0x6D,0x20,0x56,0x61,0x6C,0x75,0x65,0x73,
    0x09,0x00,0x54,0x69,0x6D,0x65,0x6C,0x69,0x6E,0x65,0x32,0x00,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&Font0,
    (leFont*)&Category_font,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        140, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_Timeline1;
leTableString string_GraphGenerate;
leTableString string_GraphStatic;
leTableString string_Timeline3;
leTableString string_GraphGenerating;
leTableString string_Timeline2;

void initializeStrings(void)
{
    leTableString_Constructor(&string_Timeline1, stringID_Timeline1);
    leTableString_Constructor(&string_GraphGenerate, stringID_GraphGenerate);
    leTableString_Constructor(&string_GraphStatic, stringID_GraphStatic);
    leTableString_Constructor(&string_Timeline3, stringID_Timeline3);
    leTableString_Constructor(&string_GraphGenerating, stringID_GraphGenerating);
    leTableString_Constructor(&string_Timeline2, stringID_Timeline2);
}
