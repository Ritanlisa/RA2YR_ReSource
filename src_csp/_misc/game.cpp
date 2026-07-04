#include "game.hpp"

int __stdcall Game::MakeScreenshot(int a1)
{
    int result; // eax
    int v2; // eax
    int v3; // eax
    int v4; // esi
    int v5; // eax
    int v6; // esi
    uint32_t *v7; // eax
    char v8; // bl
    struct tagPOINT Point; // [esp+4h] [ebp-198h] BYREF
    struct tagPOINT v10; // [esp+Ch] [ebp-190h] BYREF
    int v11; // [esp+14h] [ebp-188h]
    int v12; // [esp+18h] [ebp-184h]
    struct tagRECT Rect; // [esp+1Ch] [ebp-180h] BYREF
    struct tagPOINT v14; // [esp+2Ch] [ebp-170h] BYREF
    uint32_t v15[4]; // [esp+34h] [ebp-168h] BYREF
    int v16[22]; // [esp+44h] [ebp-158h] BYREF
    uint8_t v17[12]; // [esp+9Ch] [ebp-100h] BYREF
    int v18; // [esp+A8h] [ebp-F4h]
    uint32_t v19[22]; // [esp+B0h] [ebp-ECh] BYREF
    uint8_t v20[12]; // [esp+108h] [ebp-94h] BYREF
    int v21; // [esp+114h] [ebp-88h]
    char Buffer[128]; // [esp+11Ch] [ebp-80h] BYREF
    result = GetClientRect(g_hWnd, &Rect);
    if ( result )
    Point.x = Rect.left;
    Point.y = Rect.top;
    result = ClientToScreen(g_hWnd, &Point);
    if ( result )
    v14 = *(struct tagPOINT *)&Rect.right;
    result = ClientToScreen(g_hWnd, &v14);
    if ( result )
    v10 = Point;
    v12 = Rect.bottom + 1;
    v11 = Rect.right + 1;
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 124))(DSurface_Hidden);
    if ( v11 >= v2 )
    v11 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 124))(DSurface_Hidden);
    v3 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 128))(DSurface_Hidden);
    if ( v12 >= v3 )
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 128))(DSurface_Hidden);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 12))(WWMouseClass_Instance);
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 124))(DSurface_Hidden);
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 128))(DSurface_Hidden);
    v15[0] = 0;
    v15[1] = 0;
    v15[2] = v4;
    v15[3] = v5;
    (*(void (__thiscall **)(int, uint32_t *, int, struct tagPOINT *, uint32_t, int))(*(uint32_t *)DSurface_Hidden + 8))(
    DSurface_Hidden,
    v15,
    DSurface_Primary,
    &v10,
    0,
    1);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 16))(WWMouseClass_Instance);
    v6 = -1;
    do
    sprintf(Buffer, "SCRN%04d.pcx", ++v6);
    v7 = CCFileClass::Construct(v19, Buffer);
    v8 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*v7 + 20))(v7, 0);
    v19[0] = &CCFileClass::`vftable';
    v21 = 0;
    Vector::Clear((int)v20);
    v19[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v19);
    while ( v8 );
    CCFileClass::Construct(v16, Buffer);
    CompressScreenshot(v16, (int *)DSurface_Hidden, &FileSystem_TEMPERAT_PAL);
    v16[0] = (int)&CCFileClass::`vftable';
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = (int)&off_7E1668;
    return BufferIOFileClass::Dtor(v16);
    return result;
}

int  Game::GetMultiplayerScoreScreenBar(void *this)
{
    int v1; // eax
    v1 = *((uint32_t *)ScenarioClass_Instance + 3374);
    if ( v1 )
    if ( v1 == 1 )
    if ( !this )
    return HashTable::Find(g_DialogHashTable, off_844B4C[0], 0);
    if ( this == (void *)1 )
    return HashTable::Find(g_DialogHashTable, off_844B50[0], 0);
    if ( this == (void *)2 )
    return HashTable::Find(g_DialogHashTable, off_844B54[0], 0);
    if ( this == (void *)3 )
    return HashTable::Find(g_DialogHashTable, off_844B58[0], 0);
    if ( this == (void *)4 )
    return HashTable::Find(g_DialogHashTable, off_844B5C[0], 0);
    if ( this == (void *)5 )
    return HashTable::Find(g_DialogHashTable, off_844B60[0], 0);
    if ( this == (void *)6 )
    return HashTable::Find(g_DialogHashTable, off_844B64[0], 0);
    if ( this == (void *)7 )
    return HashTable::Find(g_DialogHashTable, off_844B68[0], 0);
    if ( this == (void *)8 )
    return HashTable::Find(g_DialogHashTable, off_844B6C[0], 0);
    if ( this == (void *)9 )
    return HashTable::Find(g_DialogHashTable, off_844B70[0], 0);
    else if ( v1 == 2 )
    if ( !this )
    return HashTable::Find(g_DialogHashTable, off_844B74[0], 0);
    if ( this == (void *)1 )
    return HashTable::Find(g_DialogHashTable, off_844B78[0], 0);
    if ( this == (void *)2 )
    return HashTable::Find(g_DialogHashTable, off_844B7C[0], 0);
    if ( this == (void *)3 )
    return HashTable::Find(g_DialogHashTable, off_844B80[0], 0);
    if ( this == (void *)4 )
    return HashTable::Find(g_DialogHashTable, off_844B84[0], 0);
    if ( this == (void *)5 )
    return HashTable::Find(g_DialogHashTable, off_844B88[0], 0);
    if ( this == (void *)6 )
    return HashTable::Find(g_DialogHashTable, off_844B8C[0], 0);
    if ( this == (void *)7 )
    return HashTable::Find(g_DialogHashTable, off_844B90[0], 0);
    if ( this == (void *)8 )
    return HashTable::Find(g_DialogHashTable, off_844B94[0], 0);
    if ( this == (void *)9 )
    return HashTable::Find(g_DialogHashTable, off_844B98[0], 0);
    else
    if ( !this )
    return HashTable::Find(g_DialogHashTable, off_844B24[0], 0);
    if ( this == (void *)1 )
    return HashTable::Find(g_DialogHashTable, off_844B28[0], 0);
    if ( this == (void *)2 )
    return HashTable::Find(g_DialogHashTable, off_844B2C[0], 0);
    if ( this == (void *)3 )
    return HashTable::Find(g_DialogHashTable, off_844B30[0], 0);
    if ( this == (void *)4 )
    return HashTable::Find(g_DialogHashTable, off_844B34[0], 0);
    if ( this == (void *)5 )
    return HashTable::Find(g_DialogHashTable, off_844B38[0], 0);
    if ( this == (void *)6 )
    return HashTable::Find(g_DialogHashTable, off_844B3C[0], 0);
    if ( this == (void *)7 )
    return HashTable::Find(g_DialogHashTable, off_844B40[0], 0);
    if ( this == (void *)8 )
    return HashTable::Find(g_DialogHashTable, off_844B44[0], 0);
    if ( this == (void *)9 )
    return HashTable::Find(g_DialogHashTable, off_844B48[0], 0);
    return 0;
}

char  Game::LoadMultiplayerScoreAssets(void *this)
{
    char result; // al
    char *v3; // ecx
    result = byte_B0FBB8;
    if ( !byte_B0FBB8 )
    Game::shutdownGame(this);
    if ( this )
    v3 = off_844BD8[0];
    if ( this != (void *)1 )
    v3 = off_844BDC;
    else
    v3 = off_844BD4[0];
    result = LoadPaletteSimple(v3, &dword_B0FBB0, &dword_B0FBB4);
    byte_B0FBB8 = 1;
    return result;
}

// 0x0072F440
char  Game::InitializeToolTipColor(void *this)
{
    char result; // al
    if ( this )
    if ( this == (void *)1 )
    LOWORD(dword_B0FA1C) = word_B0FB04;
    BYTE2(dword_B0FA1C) = byte_B0FB06;
    return byte_B0FB06;
    else
    LOWORD(dword_B0FA1C) = word_B0FAA0;
    BYTE2(dword_B0FA1C) = byte_B0FAA2;
    else
    LOWORD(dword_B0FA1C) = word_B0F9D8;
    BYTE2(dword_B0FA1C) = byte_B0F9DA;
    return word_B0F9D8;
    return result;
}

