#include "tabcameolistclass.hpp"

// 0x006A8710
int  TabCameoListClass::AddCameo_ReplaceItAll(int *this, int a2, int a3)
{
    int v4; // ebp
    int result; // eax
    int *i; // esi
    int v7; // edi
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int *v11; // edi
    int *v12; // esi
    wchar_t *v13; // eax
    int v14; // [esp+14h] [ebp-8h]
    v4 = 0;
    result = *(this + 21) + 1;
    *(this + 21) = result;
    if ( result > 0 )
    for ( i = this + 22; ; i += 13 )
    v7 = a2;
    if ( RadarClass::GetBlip(a2, a3, i[1], *i) )
    break;
    result = *(this + 21);
    if ( ++v4 >= result )
    return result;
    v8 = *(this + 21) - 1;
    if ( v8 > v4 )
    v9 = 13 * v8;
    v10 = v8 - v4;
    v11 = this + v9 + 22;
    do
    --v10;
    qmemcpy(v11, v11 - 13, 0x34u);
    v11 -= 13;
    while ( v10 );
    v7 = a2;
    v12 = this + 13 * v4;
    v12[23] = v7;
    v12[22] = a3;
    if ( v7 == 7 )
    v12[24] = GetHouseTechLevel(7, a3);
    v12[25] = 0;
    *(this + 12 * v4 + v4 + 26) = 0;
    v12[27] = 0;
    v13 = CurrentFrame;
    v12[32] = 0;
    v12[29] = (int)v13;
    v12[30] = v14;
    v12[31] = 0;
    v12[34] = 0;
    return v14;
    return result;
}

