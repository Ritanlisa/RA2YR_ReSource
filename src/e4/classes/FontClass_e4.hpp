// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct FontClass {
    int __thiscall RenderGlyph(unsigned __int16, int xLeft, int yTop, int a5);
    int RenderText(unsigned short *a2, int xLeft, int yTop, int a5, int a6);  // 0x434500 G42.33 b3 supplied-body sync
    int GetPixelData(unsigned short a2);  // 0x4349B0 G42.33 b3 supplied-body sync
    char LoadFontResources(short a2);  // 0x5D2E90 G42.33 b3 supplied-body sync
    unsigned char q004;  // 0x4 (ml; member holds a pointer value per G42.39 note)
};

} // namespace gamemd
