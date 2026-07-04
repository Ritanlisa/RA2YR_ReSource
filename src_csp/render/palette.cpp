#include "palette.hpp"

// 0x00661350
int  Palette::CalcColorDistance(unsigned __int8 *this, unsigned __int8 *a2)
{
    int v2; // esi
    int v3; // edx
    int v4; // eax
    v2 = *this - *a2;
    if ( v2 < 0 )
    v2 = *a2 - *this;
    v3 = *(this + 1) - a2[1];
    if ( v3 < 0 )
    v3 = a2[1] - *(this + 1);
    v4 = *(this + 2) - a2[2];
    if ( v4 < 0 )
    v4 = a2[2] - *(this + 2);
    return 3 * v4 + 2 * (v2 + 2 * v3);
}

