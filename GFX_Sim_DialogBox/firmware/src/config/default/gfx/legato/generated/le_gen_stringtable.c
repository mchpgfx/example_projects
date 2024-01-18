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

const uint8_t stringTable_data[74] =
{
    0x05,0x00,0x01,0x00,0x01,0x18,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x2A,0x00,0x00,
    0x01,0x36,0x00,0x00,0x00,0x3C,0x00,0x00,0x02,0x00,0x4F,0x6B,0x0C,0x00,0x53,0x63,
    0x61,0x6E,0x6E,0x69,0x6E,0x67,0x20,0x2E,0x2E,0x2E,0x0A,0x00,0x53,0x63,0x61,0x72,
    0x74,0x20,0x53,0x63,0x61,0x6E,0x04,0x00,0x53,0x74,0x6F,0x70,0x0C,0x00,0x53,0x63,
    0x61,0x6E,0x20,0x53,0x74,0x6F,0x70,0x70,0x65,0x64,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&MedFont,
    (leFont*)&SmallFont,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        74, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_OkString;
leTableString string_ScanningScreen;
leTableString string_StartScanString;
leTableString string_StopString;
leTableString string_StoppedScanString;

void initializeStrings(void)
{
    leTableString_Constructor(&string_OkString, stringID_OkString);
    leTableString_Constructor(&string_ScanningScreen, stringID_ScanningScreen);
    leTableString_Constructor(&string_StartScanString, stringID_StartScanString);
    leTableString_Constructor(&string_StopString, stringID_StopString);
    leTableString_Constructor(&string_StoppedScanString, stringID_StoppedScanString);
}
