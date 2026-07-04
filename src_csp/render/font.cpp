#include "font.hpp"

int  Font::GetGlyphDataForChar(uint32_t *this, unsigned __int16 a2)
{
    uint32_t *v2; // ecx
    int result; // eax
    int v4; // edx
    v2 = (uint32_t *)*(this + 1);
    result = 0;
    if ( v2 )
    v4 = *(unsigned __int16 *)(v2[6] + 2 * a2);
    if ( (_WORD)v4 )
    return v2[7] + (v4 - 1) * v2[5];
    return result;
}

