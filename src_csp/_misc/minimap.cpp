#include "minimap.hpp"

// 0x006418B0
bool  MiniMap::SavePreviewToINI(char **this, char *a2)
{
    uint32_t *v3; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // edi
    int v7; // edi
    int v8; // edi
    int v9; // eax
    char *v10; // ecx
    int i; // edi
    char *v12; // ecx
    unsigned __int16 v13; // ax
    signed int v14; // ebx
    int v15; // eax
    char v17; // [esp+21h] [ebp-5Dh]
    __int16 v18; // [esp+22h] [ebp-5Ch]
    __int16 Src; // [esp+26h] [ebp-58h] BYREF
    char v20; // [esp+28h] [ebp-56h]
    uint32_t v21[4]; // [esp+2Ah] [ebp-54h] BYREF
    int v22[3]; // [esp+3Ah] [ebp-44h] BYREF
    uint32_t v23[4]; // [esp+46h] [ebp-38h] BYREF
    int v24[10]; // [esp+56h] [ebp-28h] BYREF
    v17 = 0;
    if ( !*this )
    MiniMap::Render(this);
    v17 = 1;
    INIClass::ClearSection((int)a2, (int)aPreview, 0);
    v3 = (uint32_t *)(*(int (__thiscall **)(char *, uint32_t *))(*(uint32_t *)*this + 120))(*this, v21);
    INIClass::SetRect(a2, (unsigned __int8 *)aPreview, g_INI_Key_Size, v3);
    v4 = 0;
    v5 = 0;
    v6 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 128))(DSurface_Alternate);
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 124))(DSurface_Alternate) * v6;
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 112))(DSurface_Alternate) * v7;
    v9 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    v22[1] = 0;
    v22[2] = 0;
    v22[0] = (int)&Pipe::`vftable';
    Buffer::Init(v23, v9, v8);
    v23[3] = 0;
    v22[0] = (int)&BufferPipe::`vftable';
    LZOPipe::Constructor(v24, 0, 0x2000);
    Pipe::SetDelegate(v24, (int)v22);
    v10 = *this;
    Src = 0;
    v20 = 0;
    (*(void (__thiscall **)(char *, uint32_t, uint32_t))(*(uint32_t *)v10 + 92))(v10, 0, 0);
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)*this + 128))(*this) > 0 )
    do
    for ( i = 0; i < (*(int (__thiscall **)(char *))(*(uint32_t *)*this + 124))(*this); ++i )
    v12 = *this;
    v21[0] = i;
    v21[1] = v5;
    v13 = (*(int (__thiscall **)(char *, uint32_t *))(*(uint32_t *)v12 + 40))(v12, v21);
    LOBYTE(v18) = (unsigned __int8)(v13 >> g_BitShift_Red) << g_BitShift_Green_0;
    HIBYTE(v18) = (unsigned __int8)(v13 >> g_BitMask_Green) << g_BitMask_Blue;
    Src = v18;
    v20 = (unsigned __int8)(v13 >> g_BitShift_Blue) << g_BitMask_Red;
    v4 += Compression::Read((int)v24, (int)&Src, 3);
    ++v5;
    while ( v5 < (*(int (__thiscall **)(char *))(*(uint32_t *)*this + 128))(*this) );
    (*(void (__thiscall **)(char *))(*(uint32_t *)*this + 96))(*this);
    v14 = (*(int (__thiscall **)(int *))(v24[0] + 4))(v24) + v4;
    INIClass::ClearSection((int)a2, (int)aPreviewpack, 0);
    if ( v14 > 0 )
    v15 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aPreviewpack, v15, v14);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    if ( v17 )
    if ( *this )
    (**(void (__thiscall ***)(char *, int))*this)(*this, 1);
    *this = 0;
    LZOPipe::Destructor(v24);
    Vector::Clear((int)v23);
    Pipe::Dtor(v22);
    return v14 > 0;
}

