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

const uint8_t stringTable_data[96] =
{
    0x05,0x00,0x01,0x00,0x00,0x18,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x3A,0x00,0x00,
    0x00,0x44,0x00,0x00,0x00,0x58,0x00,0x00,0x12,0x00,0x42,0x75,0x74,0x74,0x6F,0x6E,
    0x20,0x54,0x6F,0x67,0x67,0x6C,0x65,0x20,0x4F,0x66,0x66,0x21,0x0C,0x00,0x48,0x65,
    0x6C,0x6C,0x6F,0x20,0x57,0x6F,0x72,0x6C,0x64,0x21,0x08,0x00,0x50,0x72,0x65,0x73,
    0x73,0x20,0x4D,0x65,0x11,0x00,0x42,0x75,0x74,0x74,0x6F,0x6E,0x20,0x54,0x6F,0x67,
    0x67,0x6C,0x65,0x20,0x4F,0x6E,0x21,0x00,0x06,0x00,0x54,0x6F,0x67,0x67,0x6C,0x65,
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
        96, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_toggleOff;
leTableString string_pressed;
leTableString string_press;
leTableString string_toggleOn;
leTableString string_toggle;

void initializeStrings(void)
{
    leTableString_Constructor(&string_toggleOff, stringID_toggleOff);
    leTableString_Constructor(&string_pressed, stringID_pressed);
    leTableString_Constructor(&string_press, stringID_press);
    leTableString_Constructor(&string_toggleOn, stringID_toggleOn);
    leTableString_Constructor(&string_toggle, stringID_toggle);
}
