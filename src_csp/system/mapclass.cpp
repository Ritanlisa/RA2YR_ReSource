#include "mapclass.hpp"

int  MapClass::SaveCellTagsToINI(uint32_t *this, char *a2)
{
    __int16 v3; // bp
    uint32_t *v4; // ebx
    int j; // edi
    int v6; // ebx
    int v7; // edi
    int v8; // edi
    int v9; // edi
    int v10; // eax
    signed int v11; // edi
    int v12; // eax
    __int16 v14[2]; // [esp+10h] [ebp-3Ch] BYREF
    __int16 v15[2]; // [esp+14h] [ebp-38h] BYREF
    uint32_t *v16; // [esp+18h] [ebp-34h]
    CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
    int v18[3]; // [esp+30h] [ebp-1Ch] BYREF
    uint32_t v19[4]; // [esp+3Ch] [ebp-10h] BYREF
    int i; // [esp+50h] [ebp+4h]
    v3 = 0;
    v4 = this;
    v16 = this;
    INIClass::ClearSection((int)a2, (int)&off_81FFF0, 0);
    MapClass::loadTheaterINI(&off_81FFF0, g_INI_Key_Theater, *((uint32_t *)ScenarioClass_Instance + 1174));
    INIClass::SetRect(a2, (unsigned __int8 *)&off_81FFF0, g_INI_Key_Size, v4 + 59);
    INIClass::SetRect(a2, (unsigned __int8 *)&off_81FFF0, g_INI_Key_LocalSize, v4 + 63);
    ScenarioClass::Write_Waypoints(a2);
    INIClass::ClearSection((int)a2, (int)g_INI_Key_CellTags, 0);
    for ( i = 0; i < 512000; i += 1000 )
    for ( j = 0; j < 512; ++j )
    v14[0] = j;
    v14[1] = v3;
    if ( *((uint32_t *)CellCoord::To_CellObj(v4, v14) + 15) )
    v15[0] = j;
    v15[1] = v3;
    v6 = *((uint32_t *)CellCoord::To_CellObj(v4, v15) + 15);
    if ( v6 && *(uint32_t *)(v6 + 36) )
    wsprintfA(v17, "%d", j + i);
    INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_CellTags, v17, (char *)(*(uint32_t *)(v6 + 36) + 36));
    v4 = v16;
    ++v3;
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 128))(DSurface_Alternate);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 124))(DSurface_Alternate) * v7;
    v9 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 112))(DSurface_Alternate) * v8;
    v10 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    v18[1] = 0;
    v18[2] = 0;
    v18[0] = (int)&Pipe::`vftable';
    Buffer::Init(v19, v10, v9);
    v19[3] = 0;
    v18[0] = (int)&BufferPipe::`vftable';
    v11 = MapClass::DecompressCellData(v18);
    INIClass::ClearSection((int)a2, (int)aIsomappack, 0);
    INIClass::ClearSection((int)a2, (int)aIsomappack2, 0);
    INIClass::ClearSection((int)a2, (int)aIsomappack3, 0);
    INIClass::ClearSection((int)a2, (int)aIsomappack4, 0);
    INIClass::ClearSection((int)a2, (int)aIsomappack5, 0);
    if ( v11 > 0 )
    v12 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aIsomappack5, v12, v11);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    Vector::Clear((int)v19);
    return Pipe::Dtor(v18);
}

int  MapClass::Destru_vt05(int *this)
{
    int *v1; // ebp
    int v2; // eax
    uint32_t *v3; // eax
    uint32_t *v4; // edi
    uint32_t *v5; // eax
    uint32_t *v6; // ebp
    uint32_t *v7; // esi
    int v8; // ebx
    uint32_t *v9; // eax
    int v10; // ecx
    int v11; // eax
    int v12; // ecx
    uint32_t *v13; // esi
    uint32_t *v14; // eax
    uint32_t *v15; // edi
    uint32_t *v16; // eax
    uint32_t *v17; // ebp
    uint32_t *v18; // esi
    int v19; // ebx
    uint32_t *v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // ecx
    uint32_t *v26; // [esp+14h] [ebp-Ch]
    uint32_t *v27; // [esp+18h] [ebp-8h]
    int v28; // [esp+1Ch] [ebp-4h]
    v1 = this;
    VectorCursor_uint_DynamicVectorClass_uint____13_::Add();
    v1[83] = 512;
    v1[84] = 512;
    v2 = *v1;
    v1[85] = 0x40000;
    (*(void (__thiscall **)(int *))(v2 + 88))(v1);
    if ( v1[5] )
    goto LABEL_14;
    v3 = __2_YAPAXI_Z(0x10u);
    v4 = v3;
    if ( v3 )
    v3[1] = Cell::DecodeFlags;
    v3[2] = 256;
    v3[3] = 20;
    v5 = __2_YAPAXI_Z(0x1804u);
    if ( v5 )
    v6 = v5 + 1;
    *v5 = 256;
    v7 = v5 + 1;
    v8 = 256;
    do
    HashVector_UInt::Construct(v7, 0, 0);
    *v7 = &DynamicVectorClass<HashObject<unsigned int,unsigned int>>::`vftable';
    v7[5] = 10;
    v7[4] = 0;
    v7 += 6;
    --v8;
    while ( v8 );
    v9 = v6;
    v1 = this;
    else
    v9 = 0;
    v10 = v4[2];
    *v4 = v9;
    v11 = 0;
    if ( v10 > 0 )
    v12 = 0;
    do
    ++v11;
    *(uint32_t *)(v12 + *v4 + 20) = 20;
    v12 += 24;
    while ( v11 < v4[2] );
    v1[5] = (int)v4;
    goto LABEL_14;
    else
    v4 = 0;
    v1[5] = (int)v4;
    LABEL_14:
    v13 = v1 + 35;
    v26 = v1 + 32;
    v27 = v1 + 35;
    v28 = 3;
    do
    (*(void (__thiscall **)(uint32_t *))(*v13 + 12))(v13);
    v14 = __2_YAPAXI_Z(0x10u);
    v15 = v14;
    if ( v14 )
    v14[1] = Cell::DecodeFlags;
    v14[2] = 256;
    v14[3] = 20;
    v16 = __2_YAPAXI_Z(0x1804u);
    if ( v16 )
    v17 = v16 + 1;
    *v16 = 256;
    v18 = v16 + 1;
    v19 = 256;
    do
    SubzoneHashVector::Construct(v18, 0, 0);
    *v18 = &DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable';
    v18[5] = 10;
    v18[4] = 0;
    v18 += 6;
    --v19;
    while ( v19 );
    v13 = v27;
    v20 = v17;
    v1 = this;
    else
    v20 = 0;
    v21 = v15[2];
    *v15 = v20;
    v22 = 0;
    if ( v21 > 0 )
    v23 = 0;
    do
    ++v22;
    *(uint32_t *)(*v15 + v23 + 20) = 20;
    v23 += 24;
    while ( v22 < v15[2] );
    else
    v15 = 0;
    v13 += 6;
    v27 = v13;
    *v26++ = v15;
    --v28;
    while ( v28 );
    memset(v1 + 6, 0, 0x34u);
    return 0;
}

void  MapClass::Destru_vt07(int this)
{
    int *v2; // edx
    int v3; // ebx
    int v4; // esi
    bool v5; // zf
    int v6; // eax
    Debug::Log();
    Event::Dispatch();
    MapClass::isCellShrouded(g_ZBufferDescriptor, 0xFFFFu);
    MapClass::isLocationShrouded(g_VisibleSurfaceDescriptor, 0x7Fu);
    Event::Dispatch();
    VectorCursor_uint_DynamicVectorClass_uint____13_::Remove((uint32_t *)this);
    Event::Dispatch();
    v2 = (int *)(this + 344);
    v3 = 256;
    do
    v4 = *v2;
    v5 = *v2 == -1;
    v2[3] = g_MapSeedState;
    if ( !v5 )
    v6 = v2[2];
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v6 )
    v6 = 0;
    else
    v6 -= (int)CurrentFrame - v4;
    v2[2] = v6;
    *v2 = -1;
    v2 += 4;
    --v3;
    while ( v3 );
    *(uint32_t *)(this + 328) = 13;
    *(uint8_t *)(this + 4440) = 0;
    Debug::Log();
}

int  MapClass::RevealArea0(int *this, int *a2, int a3, #375 *a4, char a5, char a6, char a7, char a8, char a9)
{
    int v10; // eax
    int v11; // eax
    int v12; // ebx
    int result; // eax
    int v14; // ecx
    int v15; // edx
    int v16; // esi
    int v17; // eax
    void*375 *v18; // edi
    int v19; // eax
    int v20; // esi
    int *v21; // ecx
    __int16 v22; // ax
    __int16 v23; // cx
    int v24; // edx
    int v25; // esi
    double v26; // st7
    unsigned int v27; // ecx
    int *v28; // ecx
    int *v29; // edi
    unsigned int v30; // eax
    uint32_t *v31; // eax
    int v32; // ecx
    int v33; // eax
    int v34; // edx
    int v35; // eax
    int v36; // eax
    int v37; // eax
    int *v38; // [esp+18h] [ebp-44h]
    int v39; // [esp+1Ch] [ebp-40h]
    int i; // [esp+20h] [ebp-3Ch]
    int v41; // [esp+2Ch] [ebp-30h]
    __int16 v42; // [esp+30h] [ebp-2Ch]
    __int16 v43; // [esp+32h] [ebp-2Ah]
    __int16 v44[4]; // [esp+38h] [ebp-24h] BYREF
    int v45; // [esp+40h] [ebp-1Ch]
    __int16 v46; // [esp+48h] [ebp-14h]
    __int16 v47; // [esp+4Ah] [ebp-12h]
    int v48; // [esp+50h] [ebp-Ch] BYREF
    int v49; // [esp+54h] [ebp-8h]
    int v50; // [esp+58h] [ebp-4h]
    int *v51; // [esp+60h] [ebp+4h]
    int *v52; // [esp+60h] [ebp+4h]
    char v53; // [esp+6Ch] [ebp+10h]
    v41 = a2[2] / g_MapRenderState;
    v48 = *a2;
    v49 = a2[1];
    v50 = a2[2];
    v10 = ZCoordToScreenY(v50);
    v48 += (((unsigned int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 4)) << 8;
    v11 = ZCoordToScreenY(v50);
    v49 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
    v44[0] = *a2 / 256;
    v12 = v48 / 256;
    v42 = v48 / 256;
    v43 = v49 / 256;
    v44[1] = a2[1] / 256;
    v46 = v42 - v44[0] - 2;
    v47 = v43 - v44[1] - 2;
    result = v43;
    v14 = *(this + 61);
    v15 = v43 + v42;
    if ( v15 <= v14 )
    return result;
    if ( v42 - v43 >= v14 )
    return result;
    result = v43 - v42;
    if ( result >= v14 )
    return result;
    result = *(this + 62);
    if ( v15 > v14 + 2 * result )
    return result;
    result = a3;
    if ( !a3 )
    return result;
    if ( a3 >= 11 )
    a3 = 10;
    v38 = dword_ABD490;
    v51 = &dword_ABCF60;
    v16 = dword_7ED3D0[a3];
    if ( !BYTE2(RulesClass_Instance[1].IonCannonDamage) && a5 && a3 > 2 )
    v17 = dword_7ED3C4[a3];
    v16 -= v17;
    v38 = (int *)(4 * v17 + 11261072);
    v51 = (int *)(4 * v17 + 11259744);
    v18 = a4;
    v52 = v51 - 1;
    if ( !a4 )
    goto LABEL_21;
    result = (int)HouseClass_Player;
    if ( !HouseClass_Player )
    goto LABEL_22;
    if ( a4 != HouseClass_Player )
    if ( ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & *((uint32_t *)a4 + 5433)) != 0 )
    v18 = HouseClass_Player;
    a4 = HouseClass_Player;
    if ( v18 != HouseClass_Player )
    if ( (unsigned __int8)House::IsAlliedWith(v18, HouseClass_Player)
    && HIBYTE(RulesClass_Instance[1].RadarEventDurations[2]) )
    result = (int)HouseClass_Player;
    v18 = HouseClass_Player;
    a4 = HouseClass_Player;
    goto LABEL_22;
    LABEL_21:
    result = (int)HouseClass_Player;
    LABEL_22:
    if ( v18 != (void*375 *)result )
    return result;
    if ( GameMode_Current[0] != 3 && GameMode_Current[0] != 4
    || !g_GameStateFlags
    || (v53 = 1, (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 4))(g_GameStateFlags)) )
    v53 = 0;
    v19 = v16;
    v20 = v16 - 1;
    if ( v19 )
    for ( i = v20 + 1; i; --i )
    v21 = v38++;
    v22 = *(_WORD *)v21 + v12;
    v23 = v43 + *((_WORD *)v21 + 1);
    LOWORD(v45) = v22;
    ++v52;
    v24 = *(this + 61);
    HIWORD(v45) = v23;
    *(uint32_t *)v44 = v45;
    v25 = v23 + v22;
    if ( v25 > v24 )
    if ( v22 - v23 >= v24 || v23 - v22 >= v24 )
    LOWORD(v12) = v42;
    continue;
    LOWORD(v12) = v42;
    if ( v25 > v24 + 2 * *(this + 62) )
    continue;
    if ( (int)abs32(v22 - v42) > a3 )
    continue;
    v26 = Math::Sqrt(
    (double)(__int16)(v45 - v42) * (double)(__int16)(v45 - v42)
    + (double)(__int16)(HIWORD(v45) - v43) * (double)(__int16)(HIWORD(v45) - v43));
    if ( (__int16)Math::RoundToInt(v26) > a3 )
    continue;
    v27 = v44[0] + (v44[1] << 9);
    if ( v27 < 0x40000 && (v28 = *(int **)(*(this + 79) + 4 * v27)) != 0 )
    v29 = v28;
    else
    g_Map_GlobalCellIndex = *(uint32_t *)v44;
    v29 = g_CellClassArray;
    if ( a8 && BYTE2(RulesClass_Instance[1].IonCannonDamage) )
    LOWORD(v39) = v44[0] - v46 + *(_WORD *)v52;
    HIWORD(v39) = v44[1] - v47 + *((_WORD *)v52 + 1);
    v30 = (__int16)v39 + (SHIWORD(v39) << 9);
    if ( v30 >= 0x40000 || (v31 = *(uint32_t **)(g_Shroud_CellArray + 4 * v30)) == 0 )
    v31 = g_CellClassArray;
    g_Map_GlobalCellIndex = v39;
    if ( *((char *)v31 + 283) > v41 + 3 )
    continue;
    v32 = *((__int16 *)v29 + 18);
    v33 = *((__int16 *)v29 + 19);
    v29[80] &= ~0x40u;
    if ( !v53 )
    LABEL_54:
    if ( a7 )
    v35 = v29[80];
    if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 )
    DisplayClass::ProcessCellReveal(&MapClass_Instance, v44, (int)a4);
    else
    v36 = v29[75];
    if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 )
    if ( !a6 )
    if ( a9 )
    Conditions::CheckResult3((int)v44, (int)a4, 0);
    else
    CellClass::Unshroud(v29);
    continue;
    if ( v32 == 7 )
    if ( v33 == *(this + 61) + 5 )
    continue;
    else if ( v32 == 13 && v33 == *(this + 61) + 11 )
    continue;
    v34 = *(this + 62);
    if ( v32 != v34 + 13 || v33 != *(this + 61) + v34 - 15 )
    goto LABEL_54;
    return MapClass::RevealArea2(this, &v48, 0, a3 + 3, 0);
}

// 0x005678E0
int  MapClass::RevealArea1(int *this, int *a2, int a3, #375 *a4, char a5, int a6, char a7, char a8, char a9)
{
    int v9; // edi
    int v10; // ebx
    int v11; // ebp
    int v12; // eax
    int v13; // edi
    int v14; // eax
    __int64 v15; // rax
    int v16; // edi
    int v17; // ebx
    int result; // eax
    int v19; // edx
    int v20; // ecx
    int v21; // esi
    int *v22; // ebp
    int v23; // eax
    void*375 *v24; // ebx
    int *v25; // ebp
    int v26; // ecx
    int v27; // esi
    int *v28; // ecx
    __int16 v29; // ax
    __int16 v30; // cx
    int v31; // edx
    int v32; // esi
    double v33; // st7
    unsigned int v34; // edx
    uint32_t *v35; // edx
    uint32_t *v36; // esi
    unsigned int v37; // eax
    uint32_t *v38; // eax
    int v39; // edx
    int v40; // eax
    unsigned int v41; // edi
    int v42; // ecx
    int *v43; // [esp+18h] [ebp-38h]
    int v45; // [esp+20h] [ebp-30h]
    int v46; // [esp+2Ch] [ebp-24h]
    __int16 v47; // [esp+30h] [ebp-20h]
    __int16 v48; // [esp+32h] [ebp-1Eh]
    __int16 v49[4]; // [esp+38h] [ebp-18h] BYREF
    int v50; // [esp+40h] [ebp-10h]
    __int16 v51; // [esp+48h] [ebp-8h]
    __int16 v52; // [esp+4Ah] [ebp-6h]
    char v53; // [esp+54h] [ebp+4h]
    int v54; // [esp+60h] [ebp+10h]
    v46 = a2[2] / g_MapRenderState;
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    v12 = ZCoordToScreenY(v11);
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
    + v9;
    v14 = ZCoordToScreenY(v11);
    v15 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4)) << 8)
    + v10);
    v49[0] = *a2 / 256;
    v16 = v13 / 256;
    v17 = (BYTE4(v15) + (int)v15) >> 8;
    v47 = v16;
    v48 = v17;
    v49[1] = a2[1] / 256;
    v51 = v16 - v49[0] - 2;
    v52 = v17 - v49[1] - 2;
    if ( GameMode_Current[0] != 3 && GameMode_Current[0] != 4
    || !g_GameStateFlags
    || (v53 = 1, (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 4))(g_GameStateFlags)) )
    v53 = 0;
    result = (__int16)v17;
    v19 = (__int16)v17 + (__int16)v16;
    v20 = *(this + 61);
    if ( v19 <= v20 )
    return result;
    if ( (__int16)v16 - (__int16)v17 >= v20 )
    return result;
    result = (__int16)v17 - (__int16)v16;
    if ( result >= v20 )
    return result;
    result = *(this + 62);
    if ( v19 > v20 + 2 * result )
    return result;
    result = a3;
    if ( !a3 )
    return result;
    if ( a3 >= 11 )
    result = 10;
    a3 = 10;
    v21 = dword_7ED3D0[result];
    v43 = dword_ABD490;
    v22 = &dword_ABCF60;
    if ( !BYTE2(RulesClass_Instance[1].IonCannonDamage) && a5 && result > 2 )
    v23 = dword_7ED3C4[result];
    v21 -= v23;
    v22 = (int *)(4 * v23 + 11259744);
    v43 = (int *)(4 * v23 + 11261072);
    v24 = a4;
    v25 = v22 - 1;
    if ( !a4 )
    goto LABEL_26;
    result = (int)HouseClass_Player;
    if ( !HouseClass_Player )
    goto LABEL_27;
    if ( a4 != HouseClass_Player )
    if ( ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & *((uint32_t *)a4 + 5433)) != 0 )
    v24 = HouseClass_Player;
    a4 = HouseClass_Player;
    if ( v24 != HouseClass_Player )
    if ( (unsigned __int8)House::IsAlliedWith(v24, HouseClass_Player)
    && HIBYTE(RulesClass_Instance[1].RadarEventDurations[2]) )
    result = (int)HouseClass_Player;
    v24 = HouseClass_Player;
    a4 = HouseClass_Player;
    goto LABEL_27;
    LABEL_26:
    result = (int)HouseClass_Player;
    LABEL_27:
    if ( v24 != (void*375 *)result )
    return result;
    v26 = v21;
    v27 = v21 - 1;
    if ( v26 )
    v45 = v27 + 1;
    while ( 1 )
    v28 = v43++;
    v29 = *(_WORD *)v28 + v16;
    v30 = v48 + *((_WORD *)v28 + 1);
    v31 = *(this + 61);
    LOWORD(v50) = v29;
    ++v25;
    HIWORD(v50) = v30;
    *(uint32_t *)v49 = v50;
    v32 = v30 + v29;
    if ( v32 > v31
    && v29 - v30 < v31
    && v30 - v29 < v31
    && v32 <= v31 + 2 * *(this + 62)
    && (int)abs32(v29 - v47) <= a3 )
    v33 = Math::Sqrt(
    (double)(__int16)(v50 - v47) * (double)(__int16)(v50 - v47)
    + (double)(__int16)(HIWORD(v50) - v48) * (double)(__int16)(HIWORD(v50) - v48));
    if ( (__int16)Math::RoundToInt(v33) <= a3 )
    v34 = v49[0] + (v49[1] << 9);
    if ( v34 < 0x40000 && (v35 = *(uint32_t **)(*(this + 79) + 4 * v34)) != 0 )
    v36 = v35;
    else
    g_Map_GlobalCellIndex = *(uint32_t *)v49;
    v36 = g_CellClassArray;
    if ( !a8 || !BYTE2(RulesClass_Instance[1].IonCannonDamage) )
    goto LABEL_47;
    LOWORD(v54) = v49[0] - v51 + *(_WORD *)v25;
    HIWORD(v54) = v49[1] - v52 + *((_WORD *)v25 + 1);
    v37 = (__int16)v54 + (SHIWORD(v54) << 9);
    if ( v37 >= 0x40000 || (v38 = *(uint32_t **)(g_Shroud_CellArray + 4 * v37)) == 0 )
    g_Map_GlobalCellIndex = v54;
    v38 = g_CellClassArray;
    if ( *((char *)v38 + 283) <= v46 + 3 )
    LABEL_47:
    v39 = *((__int16 *)v36 + 18);
    v40 = *((__int16 *)v36 + 19);
    v41 = v36[80] & 0xFFFFFFBF;
    v36[80] = v41;
    if ( a7 )
    if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36[75] & 8) != 0 )
    DisplayClass::ProcessCellReveal(&MapClass_Instance, v49, (int)a4);
    else
    if ( !v53 )
    goto LABEL_60;
    if ( v39 == 7 )
    if ( v40 == *(this + 61) + 5 )
    goto LABEL_61;
    else if ( v39 == 13 && v40 == *(this + 61) + 11 )
    goto LABEL_61;
    v42 = *(this + 62);
    if ( v39 != v42 + 13 || v40 != v42 + *(this + 61) - 15 )
    LABEL_60:
    Conditions::CheckResult3((int)v49, (int)a4, a9);
    LABEL_61:
    result = --v45;
    if ( !v45 )
    return result;
    LOWORD(v16) = v47;
    return result;
}

int  MapClass::RevealArea2(uint32_t *this, int *a2, int a3, int a4, int a5)
{
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    int result; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    int v12; // eax
    int v13; // esi
    int v14; // eax
    unsigned int v15; // edx
    int *v16; // ebp
    __int64 v17; // rax
    int v18; // esi
    int v19; // edi
    int *v20; // eax
    int v21; // eax
    bool v22; // sf
    int v23; // eax
    uint32_t *v24; // eax
    uint32_t *v25; // ebx
    char AdjacentPassableMask; // al
    int v28; // [esp+Ch] [ebp+8h]
    int v29; // [esp+10h] [ebp+Ch]
    v5 = a4;
    if ( a4 <= 11 )
    if ( a4 < 3 )
    v5 = 3;
    else
    v5 = 11;
    v6 = a3;
    if ( a3 < 0 )
    v7 = dword_7ED3D0[v5];
    a3 = 0;
    goto LABEL_10;
    if ( a3 > 8 )
    a3 = 8;
    v6 = 8;
    LABEL_9:
    v7 = dword_7ED3D0[v5] - dword_7ED3CC[v6];
    goto LABEL_10;
    if ( a3 )
    goto LABEL_9;
    v7 = dword_7ED3D0[v5];
    LABEL_10:
    v29 = v7;
    result = a5;
    if ( !a5 )
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    v12 = ZCoordToScreenY(v11);
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
    + v9;
    v14 = ZCoordToScreenY(v11);
    v15 = (int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4;
    v16 = dword_ABD490;
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10);
    v18 = v13 / 256;
    v19 = (BYTE4(v17) + (int)v17) >> 8;
    if ( a3 )
    v16 = (int *)(4 * dword_7ED3CC[a3] + 11261072);
    for ( result = v29 - 1; v29; --v29 )
    v20 = v16++;
    HIWORD(v28) = v19 + *((_WORD *)v20 + 1);
    LOWORD(v28) = v18 + *(_WORD *)v20;
    v21 = SHIWORD(v28) << 9;
    v22 = (__int16)v28 + v21 < 0;
    v23 = (__int16)v28 + v21;
    a5 = v28;
    if ( v22 || v23 >= 0x40000 || (v24 = *(uint32_t **)(*(this + 79) + 4 * v23)) == 0 )
    g_Map_GlobalCellIndex = v28;
    v25 = g_CellClassArray;
    else
    v25 = v24;
    AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&a5, 0);
    if ( AdjacentPassableMask != *((uint8_t *)v25 + 288) )
    *((uint8_t *)v25 + 288) = AdjacentPassableMask;
    *((uint8_t *)v25 + 312) = 1;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v25);
    result = v29 - 1;
    return result;
}

// 0x00578880
uint32_t * MapClass::FastCellLookup(uint32_t *this, __int16 *a2, int a3, char a4)
{
    unsigned int v4; // eax
    uint32_t *result; // eax
    int v6; // edi
    int v7; // ebp
    int v8; // ebx
    int v9; // eax
    int v10; // esi
    int v12; // edx
    int v13; // ecx
    __int16 v14; // bx
    __int16 v15; // bp
    int v16; // eax
    bool v17; // sf
    int v18; // eax
    __int16 v19; // bx
    __int16 v20; // bp
    int v21; // eax
    int v22; // eax
    int v23; // eax
    int v24; // eax
    int v25; // [esp+10h] [ebp-8h]
    int v26; // [esp+1Ch] [ebp+4h]
    int v27; // [esp+20h] [ebp+8h]
    int v28; // [esp+24h] [ebp+Ch]
    int v29; // [esp+24h] [ebp+Ch]
    int v30; // [esp+24h] [ebp+Ch]
    if ( a3 == 1 )
    v4 = *a2 + (a2[1] << 9);
    if ( v4 >= 0x40000 || (result = *(uint32_t **)(g_Shroud_CellArray + 4 * v4)) == 0 )
    g_Map_GlobalCellIndex = *(uint32_t *)a2;
    return g_CellClassArray;
    else
    v6 = *(this + 63);
    v7 = *a2;
    v8 = a2[1];
    v9 = *(this + 64);
    v10 = (__int16)(v9 + *(this + 61) - v6);
    v25 = (__int16)(v9 + v6 + 1);
    v26 = (6000 * a3 + v25 - v7) % a3;
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3;
    if ( v26 > 0 )
    v7 += a3 - v26;
    if ( v12 > 0 )
    v8 += a3 - v12;
    v27 = v25 + v10;
    if ( a4 || (v13 = *(this + 66), v8 + v7 < v27 + 2 * v13 / 3) )
    v23 = (__int16)v8 << 9;
    v17 = (__int16)v7 + v23 < 0;
    v24 = (__int16)v7 + v23;
    LOWORD(v30) = v7;
    HIWORD(v30) = v8;
    if ( v17 || v24 >= 0x40000 || (result = *(uint32_t **)(g_Shroud_CellArray + 4 * v24)) == 0 )
    g_Map_GlobalCellIndex = v30;
    return g_CellClassArray;
    else if ( v8 + v7 >= v27 + 4 * v13 / 3 || a3 <= 2 )
    v19 = v8 - (a3 - 1);
    v20 = v7 - (a3 - 1);
    v21 = v19 << 9;
    v17 = v20 + v21 < 0;
    v22 = v20 + v21;
    LOWORD(v29) = v20;
    HIWORD(v29) = v19;
    if ( v17 || v22 >= 0x40000 || (result = *(uint32_t **)(g_Shroud_CellArray + 4 * v22)) == 0 )
    g_Map_GlobalCellIndex = v29;
    return g_CellClassArray;
    else
    v14 = v8 - a3 / 2;
    v15 = v7 - a3 / 2;
    v16 = v14 << 9;
    v17 = v15 + v16 < 0;
    v18 = v15 + v16;
    LOWORD(v28) = v15;
    HIWORD(v28) = v14;
    if ( v17 || v18 >= 0x40000 || (result = *(uint32_t **)(g_Shroud_CellArray + 4 * v18)) == 0 )
    g_Map_GlobalCellIndex = v28;
    return g_CellClassArray;
    return result;
}

char  MapClass::InitializeTileData(uint32_t *this, int a2)
{
    int v3; // esi
    uint32_t *v4; // ebp
    uint32_t *v5; // ebx
    int v6; // esi
    int v7; // ebp
    char *TileDataEntry; // eax
    int BitLCW; // eax
    int v10; // edx
    char j; // bl
    int k; // eax
    int *m; // eax
    int v14; // edx
    int *n; // eax
    int v16; // edx
    int ii; // esi
    char *v18; // eax
    char v20; // [esp+13h] [ebp-5h]
    int i; // [esp+14h] [ebp-4h]
    Mouse::SetBounds((int)&MapClass_Instance, 0);
    v20 = 0;
    if ( !g_MapTileArray )
    v3 = g_MapCellWidth * g_MapCellWidth;
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth);
    if ( v4 )
    v5 = v4;
    if ( v3 - 1 >= 0 )
    do
    TileData::Constructor(v5);
    v5 += 20;
    --v3;
    while ( v3 );
    g_MapTileArray = v4;
    else
    g_MapTileArray = 0;
    v20 = 1;
    v6 = 0;
    v7 = g_MapCellWidth * g_MapCellWidth;
    for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((uint32_t *)TileDataEntry + 16) = -1 )
    GetTileDataEntry(v6)[74] = 1;
    TileDataEntry = GetTileDataEntry(v6++);
    dword_87F8F8 = g_Cell_PositionLUT;
    dword_87F8F4 = 1;
    dword_87F8FC = g_Cell_PositionLUT - 1;
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4;
    BitLCW = LayerClass::CellIteratorNext(&MapClass_Instance);
    for ( j = 1; BitLCW; BitLCW = LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( !j )
    break;
    j = RecursiveCellClassNeighbourUpdate(this, v10, BitLCW, 0, 0);
    dword_87F8F8 = g_Cell_PositionLUT;
    dword_87F8F4 = 1;
    dword_87F8FC = g_Cell_PositionLUT - 1;
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4;
    for ( k = LayerClass::CellIteratorNext(&MapClass_Instance); k; k = LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( !j )
    break;
    MapClass::BuildTileConnectivityGraph(k, 0, 0);
    FloodFillConnectedCells(this, a2, 1);
    dword_87F8F8 = g_Cell_PositionLUT;
    dword_87F8F4 = 1;
    dword_87F8FC = g_Cell_PositionLUT - 1;
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4;
    for ( m = (int *)LayerClass::CellIteratorNext(&MapClass_Instance);
    m;
    m = (int *)LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( !j )
    break;
    j = GenerateMapClassCliffTransitions(this, v14, m, 1, 0, 0);
    dword_87F8F8 = g_Cell_PositionLUT;
    dword_87F8F4 = 1;
    dword_87F8FC = g_Cell_PositionLUT - 1;
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4;
    for ( n = (int *)LayerClass::CellIteratorNext(&MapClass_Instance);
    n;
    n = (int *)LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( !j )
    break;
    j = GenerateMapClassCliffTransitions(this, v16, n, 2, 0, 0);
    g_RadarBlipManager = 0;
    if ( g_RadarBlipPool )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)g_RadarBlipPool + 32))(g_RadarBlipPool, 1);
    g_RadarBlipPool = 0;
    for ( ii = 0; ii < i; v18[74] = 1 )
    v18 = GetTileDataEntry(ii++);
    if ( v20 )
    __3_YAXPAX_Z(g_MapTileArray);
    g_MapTileArray = 0;
    return j;
}

bool  MapClass::IsAreaFree(uint32_t *this, int *a2, int a3)
{
    int v4; // eax
    int v5; // ecx
    int v6; // edi
    int v7; // ebp
    int v8; // eax
    bool v9; // sf
    int v10; // eax
    uint32_t *v11; // eax
    uint32_t *v12; // esi
    int v14; // [esp+0h] [ebp-8h]
    int v16; // [esp+Ch] [ebp+4h]
    int v17; // [esp+10h] [ebp+8h]
    if ( a3 == -1 )
    v14 = 0;
    else
    v14 = 1 << a3;
    v4 = *a2;
    v5 = a2[2] + *a2;
    v16 = v4;
    if ( v4 >= v5 )
    return MapClass::IsRectInBounds(this, a2, 1);
    while ( 1 )
    v6 = a2[1];
    if ( v6 < a2[3] + v6 )
    break;
    LABEL_20:
    v16 = ++v4;
    if ( v4 >= a2[2] + *a2 )
    return MapClass::IsRectInBounds(this, a2, 1);
    LOWORD(v17) = v4;
    v7 = (__int16)v4;
    while ( 1 )
    v8 = (__int16)v6 << 9;
    v9 = v7 + v8 < 0;
    v10 = v7 + v8;
    HIWORD(v17) = v6;
    if ( v9 || v10 >= 0x40000 || (v11 = *(uint32_t **)(g_Shroud_CellArray + 4 * v10)) == 0 )
    v12 = g_CellClassArray;
    g_Map_GlobalCellIndex = v17;
    else
    v12 = v11;
    if ( CellClass::FindInfantry(v12, 0)
    || (v12[55] & v14) != 0
    || v12[17] != -1
    || v12[19]
    || *((uint8_t *)v12 + 284)
    || Cell::IsBridge(v12) )
    return 0;
    if ( ++v6 >= a2[3] + a2[1] )
    v4 = v16;
    goto LABEL_20;
}

// 0x005880A0
int *__stdcall MapClass::FindFirstFirestorm(int *a1, int *a2, int *a3, int a4)
{
    int v4; // ebx
    int v5; // edi
    __int16 v6; // di
    int v7; // esi
    unsigned int v8; // eax
    uint32_t *v9; // eax
    uint32_t *v10; // ecx
    uint32_t *v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // ecx
    int v15; // esi
    int v16; // eax
    __int16 v17; // bx
    unsigned __int16 i; // si
    unsigned int v19; // eax
    uint32_t *v20; // eax
    uint32_t *v21; // ecx
    uint32_t *v22; // eax
    int v23; // eax
    int v25; // eax
    int v26; // eax
    int v27; // ebx
    double v28; // st7
    int v29; // edi
    int v30; // ecx
    uint32_t *v31; // ecx
    uint32_t *v32; // eax
    int v33; // eax
    __int64 v34; // [esp+Ch] [ebp-3Ch]
    int v35; // [esp+Ch] [ebp-3Ch]
    int v36; // [esp+10h] [ebp-38h]
    double v37; // [esp+10h] [ebp-38h]
    int v38; // [esp+10h] [ebp-38h]
    __int16 v39; // [esp+1Ch] [ebp-2Ch]
    int v40; // [esp+1Ch] [ebp-2Ch]
    int v41; // [esp+20h] [ebp-28h]
    int v42; // [esp+20h] [ebp-28h]
    int v43; // [esp+24h] [ebp-24h]
    double v44; // [esp+28h] [ebp-20h]
    double v45; // [esp+30h] [ebp-18h]
    double v46; // [esp+40h] [ebp-8h]
    v4 = *a3;
    v5 = *a2;
    if ( *a2 != *a3 || a2[1] != a3[1] || a2[2] != a3[2] )
    LODWORD(v34) = v5 / 256;
    HIDWORD(v34) = v4 / 256;
    if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
    LOWORD(v34) = v5 / 256;
    WORD1(v34) = a2[1] / 256;
    v6 = WORD1(v34);
    v7 = a3[1] / 256;
    v39 = SWORD1(v34) >= (unsigned __int16)v7 ? -1 : 1;
    while ( (_WORD)v34 != WORD2(v34) || v6 != (_WORD)v7 )
    v8 = (__int16)v34 + (v6 << 9);
    if ( v8 < 0x40000 && (v9 = *(uint32_t **)(g_Shroud_CellArray + 4 * v8)) != 0 )
    v10 = v9;
    else
    v10 = g_CellClassArray;
    g_Map_GlobalCellIndex = v34;
    v11 = Cell::IsBridge(v10);
    if ( v11 )
    if ( *(uint8_t *)(v11[328] + 5824) )
    v12 = v11[135];
    if ( *(uint8_t *)(v12 + 506) )
    if ( v12 != a4 )
    v13 = (__int16)v34;
    goto LABEL_31;
    v6 += v39;
    WORD1(v34) = v6;
    else
    v14 = a2[1];
    v15 = a3[1];
    v16 = v15 / 256;
    v41 = v15 / 256;
    if ( (unsigned __int16)(v14 / 256) == (unsigned __int16)(v15 / 256) )
    WORD1(v34) = v14 / 256;
    v6 = WORD1(v34);
    v17 = (__int16)v34 >= SWORD2(v34) ? -1 : 1;
    for ( i = v34; __PAIR32__(i, v16) != *(uint32_t *)((char *)&v34 + 2); LOWORD(v34) = i )
    v19 = (__int16)i + (SWORD1(v34) << 9);
    if ( v19 < 0x40000 && (v20 = *(uint32_t **)(g_Shroud_CellArray + 4 * v19)) != 0 )
    v21 = v20;
    else
    v21 = g_CellClassArray;
    g_Map_GlobalCellIndex = v34;
    v22 = Cell::IsBridge(v21);
    if ( v22 )
    if ( *(uint8_t *)(v22[328] + 5824) )
    v23 = v22[135];
    if ( *(uint8_t *)(v23 + 506) )
    if ( v23 != a4 )
    v13 = (__int16)i;
    LABEL_31:
    *a1 = (v13 << 8) + 128;
    a1[1] = (v6 << 8) + 128;
    a1[2] = 0;
    return a1;
    LOWORD(v16) = v41;
    i += v17;
    else
    v43 = v5 >= v4 ? -256 : 256;
    v40 = v14 >= v15 ? -256 : 256;
    if ( v43 >= 0 )
    v25 = v5 - v5 % 256 + 256;
    else
    v25 = v5 - v5 % 256;
    v36 = v25;
    if ( v40 >= 0 )
    v26 = v14 - v14 % 256 + 256;
    else
    v26 = v14 - v14 % 256;
    v35 = v26;
    v42 = v4 - v5;
    v27 = v36;
    v28 = (double)v42;
    v44 = (double)(v36 - v5) / v28;
    v37 = (double)(v15 - v14);
    v45 = (double)(v26 - v14) / v37;
    v46 = 1.0 / v37;
    while ( (v44 <= 1.0 || v45 <= 1.0) && v44 >= 0.0 && v45 >= 0.0 )
    v29 = v35;
    v30 = v27 / 256 + ((v35 / 256) << 9);
    if ( v30 < 0 || v30 >= dword_87F928 || (v31 = *(uint32_t **)(g_Shroud_CellArray + 4 * v30)) == 0 )
    LOWORD(v38) = v27 / 256;
    HIWORD(v38) = v35 / 256;
    v31 = g_CellClassArray;
    g_Map_GlobalCellIndex = v38;
    v32 = Cell::IsBridge(v31);
    if ( v32 )
    if ( *(uint8_t *)(v32[328] + 5824) )
    v33 = v32[135];
    if ( *(uint8_t *)(v33 + 506) )
    if ( v33 != a4 )
    *a1 = v27;
    a1[1] = v35;
    a1[2] = 0;
    return a1;
    if ( v44 >= v45 )
    v35 += v40;
    v45 = (double)(v40 + v29 - a2[1]) * v46;
    else
    v27 += v43;
    v44 = (double)(v27 - *a2) * (1.0 / v28);
    *a1 = dword_ABDC10;
    a1[1] = dword_ABDC14;
    a1[2] = dword_ABDC18;
    return a1;
}

char * MapClass::Destru_vt04(char *Block, char a2)
{
    MapClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  MapClass::sub_588D60(int this)
{
    int v2; // ecx
    int v3; // eax
    void *v4; // edx
    int v5; // esi
    int v6; // eax
    int v7; // esi
    int v8; // ebp
    void *v9; // eax
    void *v10; // [esp+8h] [ebp-4h]
    v2 = *(uint32_t *)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    v3 = *(uint32_t *)(v2 - 4);
    v4 = (void *)(v2 - 4);
    v10 = (void *)(v2 - 4);
    v5 = 9 * v3;
    v6 = v3 - 1;
    v7 = v2 + 4 * v5;
    if ( v6 >= 0 )
    v8 = v6 + 1;
    do
    v9 = *(void **)(v7 - 32);
    v7 -= 36;
    *(uint32_t *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( v9 && *(uint8_t *)(v7 + 13) )
    __3_YAXPAX_Z(v9);
    *(uint32_t *)(v7 + 4) = 0;
    --v8;
    *(uint8_t *)(v7 + 13) = 0;
    *(uint32_t *)(v7 + 8) = 0;
    while ( v8 );
    v4 = v10;
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MapClass::sub_588DE0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x24u;
    else
    return 0;
}

// 0x00588EF0
int  MapClass::InitCellVe_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

uint32_t * MapClass::InitCellVe_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<CellClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  MapClass::sub_589370(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // eax
    int v6; // edx
    char *v7; // ecx
    char *v8; // edi
    char *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // ecx
    char *v15; // edx
    int v16; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *((_WORD *)v9 - 1) = 0;
    *(_WORD *)v9 = 0;
    *((_WORD *)v9 + 1) = 0;
    *((_WORD *)v9 + 2) = 0;
    v9[6] = 0;
    *(uint32_t *)(v9 + 10) = -1;
    v9 += 16;
    --v10;
    while ( v10 );
    v5 = a3;
    else
    v5 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( !v5 )
    v8 = 0;
    goto LABEL_14;
    if ( a2 - 1 >= 0 )
    v6 = a2;
    v7 = v5 + 2;
    do
    *((_WORD *)v7 - 1) = 0;
    *(_WORD *)v7 = 0;
    *((_WORD *)v7 + 1) = 0;
    *((_WORD *)v7 + 2) = 0;
    v7[6] = 0;
    *(uint32_t *)(v7 + 10) = -1;
    v7 += 16;
    --v6;
    while ( v6 );
    v8 = v5;
    LABEL_14:
    *((uint8_t *)this + 12) = 1;
    if ( !v8 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
    v13 = 0;
    v16 = v12;
    do
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + v13);
    v15 = &v8[v13];
    v13 += 16;
    *(uint32_t *)v15 = *v14;
    *((uint32_t *)v15 + 1) = v14[1];
    *((uint32_t *)v15 + 2) = v14[2];
    *((uint32_t *)v15 + 3) = v14[3];
    --v16;
    while ( v16 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v8;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
}

void  MapClass::sub_5894A0(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  MapClass::sub_5894D0(int this, _WORD *a2)
{
    int result; // eax
    int v3; // esi
    _WORD *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(_WORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  MapClass::sub_589530(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

char  MapClass::sub_589A60(void *this, int a2, int *a3)
{
    int v3; // edi
    int *v5; // eax
    uint32_t *v6; // ebx
    uint32_t *v7; // esi
    uint32_t *v8; // esi
    uint32_t *v9; // esi
    int v10; // eax
    uint32_t *v11; // edi
    int v12; // ebx
    int *v13; // esi
    uint32_t *v14; // ecx
    int v15; // eax
    int v17; // [esp+10h] [ebp-8h]
    uint32_t *v18; // [esp+10h] [ebp-8h]
    int v19; // [esp+10h] [ebp-8h]
    int v20; // [esp+14h] [ebp-4h]
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    goto LABEL_28;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v9 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v19 = a2;
    do
    MapClass::allocateMapBuffers(v9);
    v9 += 9;
    --v19;
    while ( v19 );
    v18 = a3 + 1;
    else
    v5 = (int *)__2_YAPAXI_Z(36 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v17 = a2;
    do
    MapClass::allocateMapBuffers(v7);
    v7 += 9;
    --v17;
    while ( v17 );
    v8 = v6;
    v18 = v6;
    goto LABEL_14;
    v18 = 0;
    v8 = v18;
    LABEL_14:
    *((uint8_t *)this + 12) = 1;
    if ( !v8 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v10 = *((uint32_t *)this + 2);
    if ( a2 < v10 )
    v10 = a2;
    if ( v10 > 0 )
    v11 = v8 + 7;
    v12 = -28 - (uint32_t)v8;
    v20 = v10;
    do
    v13 = (uint32_t *)((char *)v11 + v12 + *((uint32_t *)this + 1));
    Radar::CopyDataArray(v11 - 7, v13);
    *((_WORD *)v11 - 2) = *((_WORD *)v13 + 12);
    *v11 = v13[7];
    v11[1] = v13[8];
    v11 += 9;
    --v20;
    while ( v20 );
    v3 = a2;
    v8 = v18;
    if ( *((uint8_t *)this + 13) )
    v14 = (uint32_t *)*((uint32_t *)this + 1);
    if ( v14 )
    SubzoneConnectionVector::Destruct(v14, 3);
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v8;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    LABEL_28:
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  MapClass::sub_589C10(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)(*(this + 1) + 28); *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(uint32_t *)(a2 + 28); i += 9 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

// 0x00589CA0
char  MapClass::InitCellVe_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

// 0x00589CE0
char  MapClass::InitCellVe_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

// 0x00589D90
void  MapClass::InitCellVe_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

// 0x00589DC0
int  MapClass::InitCellVe_vt04(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

// 0x00589E00
unsigned int  MapClass::InitCellVe_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * MapClass::sub_58A3D0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ZoneConnectionClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MapClass::sub_58A5B0(uint32_t *Block, char a2)
{
    int v3; // ecx
    int v4; // eax
    void *v5; // ebx
    int v6; // edx
    int v7; // eax
    uint32_t *v8; // esi
    int v9; // ebp
    v3 = *(Block + 1);
    *Block = &VectorClass<SubzoneTrackingStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    v4 = *(uint32_t *)(v3 - 4);
    v5 = (void *)(v3 - 4);
    v6 = 9 * v4;
    v7 = v4 - 1;
    v8 = (uint32_t *)(v3 + 4 * v6);
    if ( v7 >= 0 )
    v9 = v7 + 1;
    do
    v8 -= 9;
    *v8 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    VectorClass::Cleanup5((int)v8);
    --v9;
    while ( v9 );
    __3_YAXPAX_Z(v5);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall MapClass::GetTileDataField14(__int16 *a1)
{
    if ( g_MapTileArray )
    return *((uint32_t *)g_MapTileArray + 20 * *a1 + 20 * g_MapCellWidth * a1[1] + 14);
    else
    return -1;
}

void  MapClass::sub_5AC5A0(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MapClass::sub_5AC5D0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MapClass::sub_5AD010(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  MapClass::sub_5AD0C0(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * MapClass::sub_5AD570(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<CellClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x005F60A0
int  MapClass::SetCellOverlayFlag(#374 *this)
{
    uint32_t *v1; // eax
    int v2; // ecx
    int result; // eax
    uint32_t *v4; // eax
    int v5; // ecx
    uint32_t *v6; // [esp+8h] [ebp+4h]
    if ( dword_AC13BC + Cell::GetGroundHeight(v6) <= v6[2]
    && (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x100) != 0 )
    v1 = Coord::To_Cell(&MapClass_Instance, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(uint32_t *)result = v2 | 0x40;
    else
    v4 = Coord::To_Cell(&MapClass_Instance, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(uint32_t *)result = v5 | 0x40;
    return result;
}

// 0x005F6120
int  MapClass::ClearCellOverlayFlag(#374 *this)
{
    uint32_t *v1; // eax
    int v2; // ecx
    int result; // eax
    uint32_t *v4; // eax
    int v5; // ecx
    uint32_t *v6; // [esp+8h] [ebp+4h]
    if ( dword_AC13BC + Cell::GetGroundHeight(v6) <= v6[2]
    && (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x100) != 0 )
    v1 = Coord::To_Cell(&MapClass_Instance, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(uint32_t *)result = v2 & 0xFFFFFFBF;
    else
    v4 = Coord::To_Cell(&MapClass_Instance, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(uint32_t *)result = v5 & 0xFFFFFFBF;
    return result;
}

unsigned int  MapClass::TransformCoordToScreen(int this, int a2, uint32_t *a3)
{
    uint32_t *v3; // ebx
    int v4; // ebp
    int v6; // eax
    int v7; // ecx
    float *v8; // eax
    int v9; // esi
    int v10; // eax
    int v11; // ecx
    int v12; // esi
    int v13; // ecx
    unsigned int result; // eax
    int v15; // esi
    int v16; // ebp
    int *v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    uint32_t *v21; // [esp+10h] [ebp-54h]
    int v22; // [esp+14h] [ebp-50h]
    int v23; // [esp+18h] [ebp-4Ch]
    int v24; // [esp+1Ch] [ebp-48h]
    __int16 v25; // [esp+20h] [ebp-44h]
    __int16 v26; // [esp+22h] [ebp-42h]
    int v27; // [esp+30h] [ebp-34h] BYREF
    int v28; // [esp+34h] [ebp-30h]
    uint32_t v29[2]; // [esp+38h] [ebp-2Ch] BYREF
    float v30; // [esp+40h] [ebp-24h] BYREF
    float v31; // [esp+44h] [ebp-20h]
    int v32; // [esp+48h] [ebp-1Ch]
    int v33; // [esp+4Ch] [ebp-18h] BYREF
    int v34; // [esp+50h] [ebp-14h]
    int v35; // [esp+54h] [ebp-10h]
    float v36[3]; // [esp+58h] [ebp-Ch] BYREF
    v3 = a3;
    v4 = *a3;
    v32 = 0;
    v6 = v4 + *(uint32_t *)(this + 176);
    v7 = a3[1] + *(uint32_t *)(this + 180);
    v27 = v6 - DSurface_ViewBounds;
    v28 = v7 - Map_VisibleRect;
    v30 = (float)(v6 - DSurface_ViewBounds);
    v31 = (float)(v7 - Map_VisibleRect);
    v8 = TransformMatrix3x4Point(v36, (float *)(this + 3556), &v30);
    v30 = *v8;
    v31 = v8[1];
    v32 = *((uint32_t *)v8 + 2);
    v9 = Math::RoundToInt(v30);
    v10 = Math::RoundToInt(v31);
    v33 = v9;
    v34 = v10;
    v35 = 0;
    if ( v10 < 0 )
    v9 -= v10;
    v10 = 0;
    v33 = v9;
    v34 = 0;
    if ( v9 < 0 )
    v33 = 0;
    v34 = v10 - v9;
    v11 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v33) + 9);
    v12 = v3[2];
    v26 = HIWORD(v11) + 3;
    v25 = v11 - 2;
    v13 = 0;
    result = (unsigned int)((unsigned __int64)(2290649225LL * v12) >> 32) >> 31;
    v15 = v12 / 60 + 7;
    v24 = v3[3] / 15 + 20;
    v23 = v15;
    if ( v24 > 0 )
    do
    v16 = v13 + 1;
    LOWORD(v21) = v25 + v13 / 2;
    HIWORD(v21) = v26 + (v13 + 1) / 2;
    a3 = v21;
    if ( v15 > 0 )
    v22 = v15;
    do
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a3) )
    v36[2] = 0.0;
    LODWORD(v36[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8;
    LODWORD(v36[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8;
    v17 = Coord::To_ScreenRaw((int *)&v30, v36);
    v27 = *v17;
    v18 = *(uint32_t *)(this + 180);
    v19 = v17[1];
    v20 = *(uint32_t *)(this + 176);
    v28 = v19;
    v29[1] = v18;
    v29[0] = v20;
    Vector2::Subtract(&v27, v29);
    v27 -= 30;
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    TacticalClass::DrawCellTerrainOverlay(&v27, v3);
    LOWORD(a3) = (_WORD)a3 + 1;
    --HIWORD(a3);
    --v22;
    while ( v22 );
    v15 = v23;
    result = v24;
    v13 = v16;
    while ( v16 < v24 );
    return result;
}

