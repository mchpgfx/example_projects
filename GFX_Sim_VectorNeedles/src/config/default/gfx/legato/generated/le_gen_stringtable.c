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

const uint8_t stringTable_data[120] =
{
    0x06,0x00,0x01,0x00,0x00,0x1C,0x00,0x00,0x00,0x2A,0x00,0x00,0x01,0x32,0x00,0x00,
    0x00,0x48,0x00,0x00,0x00,0x54,0x00,0x00,0x01,0x64,0x00,0x00,0x0C,0x00,0x56,0x65,
    0x63,0x74,0x6F,0x72,0x20,0x4C,0x69,0x6E,0x65,0x73,0x05,0x00,0x30,0x20,0x66,0x70,
    0x73,0x00,0x13,0x00,0x56,0x65,0x63,0x74,0x6F,0x72,0x20,0x4E,0x65,0x65,0x64,0x6C,
    0x65,0x73,0x20,0x44,0x65,0x6D,0x6F,0x00,0x0A,0x00,0x56,0x65,0x63,0x74,0x6F,0x72,
    0x20,0x41,0x72,0x63,0x0E,0x00,0x56,0x65,0x63,0x74,0x6F,0x72,0x20,0x50,0x6F,0x6C,
    0x79,0x67,0x6F,0x6E,0x12,0x00,0x43,0x68,0x61,0x6E,0x67,0x65,0x20,0x6E,0x65,0x65,
    0x64,0x6C,0x65,0x20,0x74,0x79,0x70,0x65,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&NotoSans_small,
    (leFont*)&FontMedium,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        120, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_strVectorLines;
leTableString string_strTest;
leTableString string_strDemoName;
leTableString string_strVectorArc;
leTableString string_strVectorPoly;
leTableString string_strTap;

void initializeStrings(void)
{
    leTableString_Constructor(&string_strVectorLines, stringID_strVectorLines);
    leTableString_Constructor(&string_strTest, stringID_strTest);
    leTableString_Constructor(&string_strDemoName, stringID_strDemoName);
    leTableString_Constructor(&string_strVectorArc, stringID_strVectorArc);
    leTableString_Constructor(&string_strVectorPoly, stringID_strVectorPoly);
    leTableString_Constructor(&string_strTap, stringID_strTap);
}
