#include "scorefontclass.hpp"

int  ScoreFontClass::_vt02(void *this, __int16 *a2)
{
    __int16 *v2; // edi
    int v3; // esi
    __int16 i; // ax
    v2 = a2;
    v3 = 0;
    for ( i = *a2; *v2; i = *v2 )
    ++v2;
    v3 += (*(int (__thiscall **)(void *, __int16))(*(uint32_t *)this + 4))(this, i) + 1;
    return v3;
}

int __stdcall ScoreFontClass::_vt01(__int16 szSrc)
{
    int v2; // eax
    CHAR szDst; // [esp+7h] [ebp-11h] BYREF
    uint32_t v4[4]; // [esp+8h] [ebp-10h] BYREF
    if ( szSrc == 32 )
    return 8;
    CharToOemBuffA((LPCSTR)&szSrc, &szDst, 1u);
    v2 = szDst - 33;
    if ( szDst == 33 )
    v2 = 0;
    else if ( v2 >= 216 )
    v2 = 216;
    return Building::GetFoundationSize(v4, 3 * v2 + 2)[2];
}

uint32_t * ScoreFontClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    char *v4; // eax
    v3 = (void *)*(Block + 3);
    *Block = &ScoreFontClass::`vftable';
    if ( v3 && *((uint8_t *)Block + 16) == 1 )
    __3_YAXPAX_Z(v3);
    *(Block + 3) = 0;
    *((uint8_t *)Block + 16) = 0;
    if ( !--dword_B0558C )
    v4 = &byte_B05594;
    do
    *((uint32_t *)v4 - 1) = 0;
    *v4 = 0;
    v4 += 8;
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) );
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ScoreFontClass::sub_691100(uint32_t *Block, char a2)
{
    void *v3; // eax
    char *v4; // eax
    v3 = (void *)*(Block + 3);
    *Block = &ScoreFontClass::`vftable';
    if ( v3 && *((uint8_t *)Block + 16) == 1 )
    __3_YAXPAX_Z(v3);
    *(Block + 3) = 0;
    *((uint8_t *)Block + 16) = 0;
    if ( !--dword_B0558C )
    v4 = &byte_B05594;
    do
    *((uint32_t *)v4 - 1) = 0;
    *v4 = 0;
    v4 += 8;
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) );
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

