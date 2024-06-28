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

const uint8_t stringTable_data[66] =
{
    0x06,0x00,0x01,0x00,0x00,0x1C,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,
    0x00,0x2C,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x3E,0x00,0x00,0x01,0x00,0x33,0x00,
    0x01,0x00,0x34,0x00,0x06,0x00,0x50,0x6F,0x70,0x20,0x55,0x70,0x01,0x00,0x32,0x00,
    0x0B,0x00,0x4D,0x61,0x69,0x6E,0x20,0x53,0x63,0x72,0x65,0x65,0x6E,0x00,0x01,0x00,
    0x31,0x00,
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
        66, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_Screen3;
leTableString string_Screen4;
leTableString string_PopUpMessage;
leTableString string_Screen2;
leTableString string_MainScreen;
leTableString string_Screen1;

void initializeStrings(void)
{
    leTableString_Constructor(&string_Screen3, stringID_Screen3);
    leTableString_Constructor(&string_Screen4, stringID_Screen4);
    leTableString_Constructor(&string_PopUpMessage, stringID_PopUpMessage);
    leTableString_Constructor(&string_Screen2, stringID_Screen2);
    leTableString_Constructor(&string_MainScreen, stringID_MainScreen);
    leTableString_Constructor(&string_Screen1, stringID_Screen1);
}
