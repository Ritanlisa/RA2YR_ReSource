#include "wdtsurface.hpp"

char  WDTSurface::ToggleState(int this, int *a2, char a3)
{
    char result; // al
    int v5; // eax
    result = a3;
    if ( *(uint8_t *)(this + 116) != a3 )
    *(uint8_t *)(this + 116) = a3;
    if ( a3 && *(uint8_t *)(this + 104) )
    v5 = *(uint32_t *)(this + 112);
    else
    v5 = *(uint32_t *)(this + 108);
    MSAnim::Reset(v5);
    Team::ReleaseAll(a2, this + 84);
    return DSurface::Flip2();
    return result;
}

