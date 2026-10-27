/*******************************************************************************
  Pinyin Lookup Table Header

  File Name:
    app_pinyin_lut.h

  Summary:
    Pinyin lookup table using a grouped PinyinMap structure.
    One row per base syllable (tone-stripped); all matching characters are
    packed into a single UTF-8 string. This uses significantly less flash
    than storing one struct entry per character.

    The table in app_pinyin_lut.c must remain sorted ascending by 'pinyin'
    so that the prefix scan can exit early.
*******************************************************************************/

#ifndef APP_PINYIN_LUT_H
#define APP_PINYIN_LUT_H

#ifdef __cplusplus
extern "C" {
#endif

// One entry per base syllable.
// 'chars' is a packed UTF-8 string of all characters sharing that syllable.
// e.g. { "zhu", "煮主住柱注助株蛛" }
typedef struct {
    const char* pinyin;   // tone-stripped base syllable, e.g. "zhu"
    const char* chars;    // packed UTF-8 characters, e.g. "煮主住柱"
} PinyinMap;

// Returns a pointer to the first matching UTF-8 character, or NULL.
const char* findPinyinMatch(const char* input);

// Fills results[] with pointers to individual UTF-8 characters whose
// syllable starts with 'prefix'. Returns the number of pointers written.
int findPinyinMatches(const char* prefix, const char** results, int maxResults);

void APP_PINYIN_LUT_Initialize(void);
void APP_PINYIN_LUT_Tasks(void);

#ifdef __cplusplus
}
#endif

#endif // APP_PINYIN_LUT_H
