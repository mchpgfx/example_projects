#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   27
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

const uint8_t stringTable_data[302] =
{
    0x1B,0x00,0x01,0x00,0x00,0x70,0x00,0x00,0x00,0x76,0x00,0x00,0x00,0x7C,0x00,0x00,
    0xFF,0x82,0x00,0x00,0x00,0x86,0x00,0x00,0x00,0x90,0x00,0x00,0x00,0x94,0x00,0x00,
    0x00,0x9A,0x00,0x00,0x00,0xA4,0x00,0x00,0x00,0xAA,0x00,0x00,0x00,0xAE,0x00,0x00,
    0x00,0xB8,0x00,0x00,0x00,0xBC,0x00,0x00,0x00,0xC2,0x00,0x00,0x00,0xCA,0x00,0x00,
    0x00,0xD0,0x00,0x00,0x00,0xD6,0x00,0x00,0x00,0xDE,0x00,0x00,0x00,0xE8,0x00,0x00,
    0x00,0xEE,0x00,0x00,0x00,0xF4,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x0A,0x01,0x00,
    0x00,0x0E,0x01,0x00,0x00,0x16,0x01,0x00,0x00,0x1E,0x01,0x00,0x00,0x28,0x01,0x00,
    0x04,0x00,0x4A,0x75,0x6E,0x65,0x03,0x00,0x53,0x61,0x74,0x00,0x03,0x00,0x54,0x68,
    0x75,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x53,0x65,0x74,0x20,0x44,0x61,0x74,0x65,
    0x01,0x00,0x3E,0x00,0x03,0x00,0x4D,0x6F,0x6E,0x00,0x07,0x00,0x4A,0x61,0x6E,0x75,
    0x61,0x72,0x79,0x00,0x03,0x00,0x54,0x75,0x65,0x00,0x01,0x00,0x3C,0x00,0x08,0x00,
    0x44,0x65,0x63,0x65,0x6D,0x62,0x65,0x72,0x02,0x00,0x3E,0x3E,0x04,0x00,0x32,0x30,
    0x32,0x35,0x06,0x00,0x41,0x75,0x67,0x75,0x73,0x74,0x03,0x00,0x57,0x65,0x64,0x00,
    0x03,0x00,0x53,0x75,0x6E,0x00,0x05,0x00,0x4D,0x61,0x72,0x63,0x68,0x00,0x08,0x00,
    0x4E,0x6F,0x76,0x65,0x6D,0x62,0x65,0x72,0x03,0x00,0x46,0x72,0x69,0x00,0x04,0x00,
    0x4A,0x75,0x6C,0x79,0x09,0x00,0x53,0x65,0x70,0x74,0x65,0x6D,0x62,0x65,0x72,0x00,
    0x07,0x00,0x4F,0x63,0x74,0x6F,0x62,0x65,0x72,0x00,0x02,0x00,0x3C,0x3C,0x05,0x00,
    0x43,0x6C,0x6F,0x73,0x65,0x00,0x05,0x00,0x41,0x70,0x72,0x69,0x6C,0x00,0x08,0x00,
    0x46,0x65,0x62,0x72,0x75,0x61,0x72,0x79,0x03,0x00,0x4D,0x61,0x79,0x00,
};

/* font asset pointer list */
leFont* fontList[1] =
{
    (leFont*)&NotoSansSmall,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        302, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_strJun;
leTableString string_strSat;
leTableString string_strThu;
leTableString string_String;
leTableString string_strSetDate;
leTableString string_strNextMonth;
leTableString string_strMon;
leTableString string_strJan;
leTableString string_strTue;
leTableString string_strPrevMonth;
leTableString string_strDec;
leTableString string_strNextYear;
leTableString string_strDefaultYear;
leTableString string_strAug;
leTableString string_strWed;
leTableString string_strSun;
leTableString string_strMar;
leTableString string_strNov;
leTableString string_strFri;
leTableString string_strJul;
leTableString string_strSept;
leTableString string_strOct;
leTableString string_strPrevYear;
leTableString string_strClose;
leTableString string_strApr;
leTableString string_strFeb;
leTableString string_strMay;

void initializeStrings(void)
{
    leTableString_Constructor(&string_strJun, stringID_strJun);
    leTableString_Constructor(&string_strSat, stringID_strSat);
    leTableString_Constructor(&string_strThu, stringID_strThu);
    leTableString_Constructor(&string_String, stringID_String);
    leTableString_Constructor(&string_strSetDate, stringID_strSetDate);
    leTableString_Constructor(&string_strNextMonth, stringID_strNextMonth);
    leTableString_Constructor(&string_strMon, stringID_strMon);
    leTableString_Constructor(&string_strJan, stringID_strJan);
    leTableString_Constructor(&string_strTue, stringID_strTue);
    leTableString_Constructor(&string_strPrevMonth, stringID_strPrevMonth);
    leTableString_Constructor(&string_strDec, stringID_strDec);
    leTableString_Constructor(&string_strNextYear, stringID_strNextYear);
    leTableString_Constructor(&string_strDefaultYear, stringID_strDefaultYear);
    leTableString_Constructor(&string_strAug, stringID_strAug);
    leTableString_Constructor(&string_strWed, stringID_strWed);
    leTableString_Constructor(&string_strSun, stringID_strSun);
    leTableString_Constructor(&string_strMar, stringID_strMar);
    leTableString_Constructor(&string_strNov, stringID_strNov);
    leTableString_Constructor(&string_strFri, stringID_strFri);
    leTableString_Constructor(&string_strJul, stringID_strJul);
    leTableString_Constructor(&string_strSept, stringID_strSept);
    leTableString_Constructor(&string_strOct, stringID_strOct);
    leTableString_Constructor(&string_strPrevYear, stringID_strPrevYear);
    leTableString_Constructor(&string_strClose, stringID_strClose);
    leTableString_Constructor(&string_strApr, stringID_strApr);
    leTableString_Constructor(&string_strFeb, stringID_strFeb);
    leTableString_Constructor(&string_strMay, stringID_strMay);
}