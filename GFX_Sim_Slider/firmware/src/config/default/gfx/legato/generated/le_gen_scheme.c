#include "gfx/legato/generated/le_gen_scheme.h"

const leScheme WhiteScheme = 
{
    {
        { { 0xFF, 0xCF, 0xFF, 0x80, 0x40, 0xFF, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0xFF, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xFFFF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xFFFF, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xFFFF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xFFFF, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFFFFFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFFFFFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFFFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFFFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFFFFFF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xF, 0xFC, 0xF, 0x8, 0xED, 0xF, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme RedScheme = 
{
    {
        { { 0x36, 0xCF, 0xFF, 0x80, 0x40, 0x36, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x36, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xE0, 0xBA, 0xFF, 0x92, 0x49, 0xE0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xE0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xF800, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xF800, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xF800, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xF801, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xF801, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xF801, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFF0000, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF0000, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF0000, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF0000FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF0000FF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF0000FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFF0000, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFF0000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFFF0000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x9, 0xFC, 0xF, 0x8, 0xED, 0x9, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x9, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme GreenScheme = 
{
    {
        { { 0xB6, 0xCF, 0xFF, 0x80, 0x40, 0xB6, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0xB6, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x1C, 0xBA, 0xFF, 0x92, 0x49, 0x1C, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x1C, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x7E0, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x7E0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x7E0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x7C1, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x7C1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x7C1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFF00, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF00, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF00, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF00FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF00FF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF00FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF00FF00, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF00FF00, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF00FF00, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xA, 0xFC, 0xF, 0x8, 0xED, 0xA, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xA, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme BlueScheme = 
{
    {
        { { 0xF7, 0xCF, 0xFF, 0x80, 0x40, 0x12, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x12, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0x3, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x3, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xF7BF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x1F, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x1F, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xF7BF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x3F, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x3F, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xF6F7FF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xF6F7FFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFFFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFF6F7FF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF0000FF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF0000FF, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xF, 0xFC, 0xF, 0x8, 0xED, 0xC, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xC, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme SLiderScheme = 
{
    {
        { { 0xD4, 0xCF, 0x92, 0xEB, 0xDA, 0x0, 0xE1, 0x80, 0xDA, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x9A, 0xBA, 0x72, 0xDF, 0xBB, 0x0, 0xDB, 0x92, 0xBB, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x9F51, 0xC67A, 0x6CF0, 0xCF9E, 0xAF3C, 0x0, 0xD71C, 0x8410, 0xAF3C, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x9F63, 0xC675, 0x6CE1, 0xCF7D, 0xAF39, 0x1, 0xD739, 0x8421, 0xAF39, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x9BED8D, 0xC8D0D4, 0x6A9F81, 0xCBF2F8, 0xADE6E8, 0x0, 0xD6E3E7, 0x808080, 0xAEE5E8, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0x9BED8DFF, 0xC8D0D4FF, 0x6A9F81FF, 0xCBF2F8FF, 0xADE6E8FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xAEE5E8FF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF9BED8D, 0xFFC8D0D4, 0xFF6A9F81, 0xFFCBF2F8, 0xFFADE6E8, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFAEE5E8, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x77, 0xFC, 0x47, 0xC2, 0x97, 0x0, 0xFE, 0x8, 0x97, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme PanelScheme = 
{
    {
        { { 0xF8, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xEE, 0xE1, 0xCF, 0xB1, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xDF, 0xDB, 0xBA, 0x96, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xEFDF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xD79E, 0xD71C, 0xC67A, 0x9DB6, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xEFBF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xD7BD, 0xD739, 0xC675, 0x9DAD, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xF1FAFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xD9F3F5, 0xD6E3E7, 0xC8D0D4, 0xA0B6B1, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xF1FAFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xD9F3F5FF, 0xD6E3E7FF, 0xC8D0D4FF, 0xA0B6B1FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFF1FAFF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFD9F3F5, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFA0B6B1, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xF, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xC2, 0xFE, 0xFC, 0x90, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};
