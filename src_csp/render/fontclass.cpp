#include "fontclass.hpp"

char  FontClass::LoadFontResources(int this, __int16 a2)
{
    int v3; // eax
    char *EntireFile; // eax
    uint8_t *v5; // esi
    int v6; // edi
    uint8_t *v7; // edx
    char v8; // al
    char *v9; // ecx
    char v10; // cl
    char v11; // dl
    uint32_t *v12; // eax
    uint32_t *v13; // eax
    int v15; // eax
    uint32_t v16[22]; // [esp+Ch] [ebp-6Ch] BYREF
    uint8_t v17[12]; // [esp+64h] [ebp-14h] BYREF
    int v18; // [esp+70h] [ebp-8h]
    __int16 v19; // [esp+7Ch] [ebp+4h]
    CCFileClass::Construct3((int)v16);
    if ( !dword_ABFBE0 )
    *(uint8_t *)(this + 28) = 0;
    v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0);
    *(uint32_t *)(this + 20) = v3;
    if ( !v3 )
    FileClass::SetFileName(v16, g_Str_File_FULLFNT3_SHP);
    *(uint32_t *)(this + 20) = CCFileClass::ReadEntireFile(v16);
    *(uint8_t *)(this + 28) = 1;
    Debug::Log();
    if ( !*(uint32_t *)(this + 20) )
    goto LABEL_15;
    if ( (uint8_t)a2 == 1 )
    FileClass::SetFileName(v16, aSidefnt3Pal);
    else
    FileClass::SetFileName(v16, aFullfnt3Pal);
    EntireFile = (char *)CCFileClass::ReadEntireFile(v16);
    v5 = EntireFile;
    if ( !EntireFile )
    goto LABEL_15;
    v6 = 0;
    v7 = EntireFile + 2;
    do
    LOBYTE(v19) = 4 * *(v7 - 2);
    HIBYTE(v19) = 4 * *(v7 - 1);
    v8 = 4 * *v7;
    v9 = (char *)&unk_886080 + 3 * (v6 % 256);
    ++v6;
    v7 += 3;
    *(_WORD *)v9 = v19;
    v9[2] = v8;
    while ( v6 < 256 );
    v10 = v5[205];
    v11 = v5[204];
    *(uint8_t *)(this + 14) = 4 * v5[206];
    *(uint8_t *)(this + 12) = 4 * v11;
    *(uint8_t *)(this + 13) = 4 * v10;
    *(uint32_t *)(this + 16) = ((4 * (unsigned __int8)v5[205]) >> g_BitMask_Blue << g_BitMask_Green)
    | ((4 * (unsigned __int8)v5[206]) >> g_BitMask_Red << g_BitShift_Blue)
    | ((4 * (unsigned __int8)v5[204]) >> g_BitShift_Green_0 << g_BitShift_Red);
    __3_YAXPAX_Z(v5);
    v12 = __2_YAPAXI_Z(0x188u);
    v13 = v12 ? ConvertClass::Construct(v12, (int)&unk_886080, (int)&unk_886080, DSurface_Primary, 1, 0) : 0;
    *(uint32_t *)(this + 24) = v13;
    if ( !v13 )
    LABEL_15:
    v16[0] = &CCFileClass::`vftable';
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v16);
    return 0;
    v15 = *(uint32_t *)(this + 20);
    *(uint32_t *)(this + 4) = *(__int16 *)(v15 + 2);
    *(uint32_t *)(this + 8) = *(__int16 *)(v15 + 4);
    Audio::IsSoundEnabled();
    v16[0] = &CCFileClass::`vftable';
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v16);
    return 1;
}

