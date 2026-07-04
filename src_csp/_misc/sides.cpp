#include "sides.hpp"

// 0x0072FBC0
int Sides::MixFileYuriFiles3()
{
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) == 2 )
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0);
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8);
    else
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8);
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0);
    LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8);
    LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00);
    return LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08);
}

