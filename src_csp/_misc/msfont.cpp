#include "msfont.hpp"

int  MSFont::_vt02(void *this, __int16 *a2)
{
    __int16 *v2; // esi
    int v3; // ebp
    __int16 v5; // ax
    int i; // ebx
    v2 = a2;
    v3 = 0;
    if ( !a2 )
    return 0;
    do
    v5 = *v2;
    for ( i = 0; *v2; v5 = *v2 )
    if ( v5 == 10 )
    break;
    ++v2;
    i += (*(int (__thiscall **)(void *, __int16))(*(uint32_t *)this + 4))(this, v5);
    if ( *v2 == 10 )
    ++v2;
    if ( i > v3 )
    v3 = i;
    while ( *v2 );
    return v3;
}

int __stdcall MSFont::_vt01(unsigned __int8 szSrc)
{
    int v2; // eax
    uint32_t v3[4]; // [esp+4h] [ebp-10h] BYREF
    CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u);
    if ( szSrc == 32 )
    return 8;
    if ( szSrc <= 0x20u )
    return 0;
    v2 = szSrc - 33;
    if ( v2 > 0 )
    if ( v2 >= 216 )
    v2 = 216;
    else
    v2 = 0;
    return Building::GetFoundationSize(v3, 3 * v2 + 2)[2] + 1;
}

void  MSFont::_vt04(int *this, int *a2, unsigned __int8 szSrc, int a4, int a5, int a6, int a7)
{
    int v8; // eax
    int v9; // esi
    int v10; // edx
    int v11; // eax
    int *v12; // eax
    int v13[2]; // [esp+4h] [ebp-28h] BYREF
    uint32_t v14[4]; // [esp+Ch] [ebp-20h] BYREF
    uint8_t v15[16]; // [esp+1Ch] [ebp-10h] BYREF
    if ( (char)szSrc == 176 )
    Debug::Log();
    CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u);
    if ( szSrc > 0x20u )
    v8 = szSrc - 33;
    if ( v8 > 0 )
    if ( v8 >= 216 )
    v8 = 216;
    else
    v8 = 0;
    v9 = 3 * v8;
    v10 = *Building::GetFoundationSize(v14, 3 * v8 + 2);
    v11 = *a2;
    v13[0] = a4 - v10;
    v13[1] = a5;
    v12 = (int *)(*(int (__thiscall **)(int *, uint8_t *))(v11 + 120))(a2, v15);
    DrawToSurfaceSHP((int)a2, *(this + 6), *(this + 5), a6 + v9, v13, v12, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}

void * MSFont::_vt00(void *Block, char a2)
{
    MSFont::Constructor_MSFont(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

