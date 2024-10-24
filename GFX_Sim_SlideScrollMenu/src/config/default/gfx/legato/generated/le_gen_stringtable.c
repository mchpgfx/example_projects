#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   13
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

const uint8_t stringTable_data[156] =
{
    0x0D,0x00,0x01,0x00,0x00,0x38,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x40,0x00,0x00,
    0x00,0x44,0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x4C,0x00,0x00,0x00,0x5A,0x00,0x00,
    0x00,0x60,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x8C,0x00,0x00,0x00,0x90,0x00,0x00,
    0x00,0x94,0x00,0x00,0x00,0x98,0x00,0x00,0x01,0x00,0x46,0x00,0x01,0x00,0x44,0x00,
    0x01,0x00,0x41,0x00,0x01,0x00,0x47,0x00,0x01,0x00,0x49,0x00,0x0C,0x00,0x43,0x6F,
    0x6C,0x6F,0x72,0x20,0x50,0x69,0x63,0x6B,0x65,0x72,0x04,0x00,0x4E,0x6F,0x6E,0x65,
    0x1C,0x00,0x57,0x69,0x64,0x67,0x65,0x74,0x20,0x45,0x76,0x65,0x6E,0x74,0x20,0x46,
    0x69,0x6C,0x74,0x65,0x72,0x20,0x45,0x78,0x61,0x6D,0x70,0x6C,0x65,0x73,0x0C,0x00,
    0x53,0x6C,0x69,0x64,0x69,0x6E,0x67,0x20,0x4D,0x65,0x6E,0x75,0x01,0x00,0x43,0x00,
    0x01,0x00,0x42,0x00,0x01,0x00,0x48,0x00,0x01,0x00,0x45,0x00,
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
        156, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_strF;
leTableString string_strD;
leTableString string_strA;
leTableString string_strG;
leTableString string_strI;
leTableString string_strColorPicker;
leTableString string_strNone;
leTableString string_strEventFilter;
leTableString string_strSlide;
leTableString string_strC;
leTableString string_strB;
leTableString string_strH;
leTableString string_strE;

void initializeStrings(void)
{
    leTableString_Constructor(&string_strF, stringID_strF);
    leTableString_Constructor(&string_strD, stringID_strD);
    leTableString_Constructor(&string_strA, stringID_strA);
    leTableString_Constructor(&string_strG, stringID_strG);
    leTableString_Constructor(&string_strI, stringID_strI);
    leTableString_Constructor(&string_strColorPicker, stringID_strColorPicker);
    leTableString_Constructor(&string_strNone, stringID_strNone);
    leTableString_Constructor(&string_strEventFilter, stringID_strEventFilter);
    leTableString_Constructor(&string_strSlide, stringID_strSlide);
    leTableString_Constructor(&string_strC, stringID_strC);
    leTableString_Constructor(&string_strB, stringID_strB);
    leTableString_Constructor(&string_strH, stringID_strH);
    leTableString_Constructor(&string_strE, stringID_strE);
}
