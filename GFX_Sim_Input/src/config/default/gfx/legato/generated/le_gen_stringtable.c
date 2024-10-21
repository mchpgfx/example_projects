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

const uint8_t stringTable_data[106] =
{
    0x04,0x00,0x01,0x00,0x00,0x14,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x34,0x00,0x00,
    0x00,0x5A,0x00,0x00,0x06,0x00,0x55,0x6E,0x6C,0x6F,0x63,0x6B,0x15,0x00,0x53,0x63,
    0x72,0x65,0x65,0x6E,0x20,0x77,0x69,0x6C,0x6C,0x20,0x6C,0x6F,0x63,0x6B,0x20,0x69,
    0x6E,0x3A,0x20,0x00,0x23,0x00,0x53,0x63,0x72,0x65,0x65,0x6E,0x20,0x69,0x73,0x20,
    0x6C,0x6F,0x63,0x6B,0x65,0x64,0x20,0x64,0x75,0x65,0x20,0x74,0x6F,0x20,0x69,0x6E,
    0x61,0x63,0x74,0x69,0x76,0x69,0x74,0x79,0x2E,0x00,0x0D,0x00,0x54,0x61,0x70,0x20,
    0x74,0x6F,0x20,0x72,0x65,0x73,0x65,0x74,0x2E,0x00,
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
        106, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_strUnlock;
leTableString string_strTimerMessage;
leTableString string_strLockMessage;
leTableString string_strTouchMessage;

void initializeStrings(void)
{
    leTableString_Constructor(&string_strUnlock, stringID_strUnlock);
    leTableString_Constructor(&string_strTimerMessage, stringID_strTimerMessage);
    leTableString_Constructor(&string_strLockMessage, stringID_strLockMessage);
    leTableString_Constructor(&string_strTouchMessage, stringID_strTouchMessage);
}
