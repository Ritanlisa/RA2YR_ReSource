#include "scenarioclass.hpp"

void  ScenarioClass::LoadMapData(int *this, unsigned __int8 ***a2)
{
    unsigned int *v3; // eax
    int v4; // edx
    char v5; // bl
    int i; // esi
    int v7; // eax
    char v8; // cl
    int v9; // esi
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    char *v13; // eax
    unsigned __int8 *StringByIndex; // esi
    int v15; // ecx
    char *v16; // esi
    uint32_t *v17; // eax
    int v18; // esi
    uint32_t *v19; // eax
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // edx
    size_t v24; // esi
    int v25; // ebp
    int Base64Data; // ebp
    int v27; // ebp
    int v28; // ebp
    int v29; // ebp
    int v30; // ebp
    int v31; // ebp
    int v32; // ebp
    int v33; // ebp
    int v34; // esi
    int v35; // ebp
    unsigned int *v36; // esi
    unsigned int *v37; // eax
    void*376 *v38; // [esp+Ch] [ebp-134h]
    uint32_t v39[3]; // [esp+1Ch] [ebp-124h] BYREF
    int v40; // [esp+28h] [ebp-118h]
    int v41; // [esp+2Ch] [ebp-114h]
    int v42[3]; // [esp+30h] [ebp-110h] BYREF
    int KeyCount; // [esp+3Ch] [ebp-104h] BYREF
    int j; // [esp+40h] [ebp-100h]
    int v45; // [esp+44h] [ebp-FCh] BYREF
    char *Int_Overwrite; // [esp+48h] [ebp-F8h]
    void **v47; // [esp+4Ch] [ebp-F4h] BYREF
    int v48; // [esp+50h] [ebp-F0h]
    int v49; // [esp+54h] [ebp-ECh]
    uint32_t v50[3]; // [esp+58h] [ebp-E8h] BYREF
    int v51; // [esp+64h] [ebp-DCh]
    int v52; // [esp+68h] [ebp-D8h]
    int v53; // [esp+6Ch] [ebp-D4h]
    int *v54; // [esp+70h] [ebp-D0h]
    int v55[3]; // [esp+74h] [ebp-CCh] BYREF
    unsigned int v56[4]; // [esp+80h] [ebp-C0h] BYREF
    uint32_t v57[4]; // [esp+90h] [ebp-B0h] BYREF
    char Destination[32]; // [esp+A0h] [ebp-A0h] BYREF
    char Source[128]; // [esp+C0h] [ebp-80h] BYREF
    v54 = this;
    INIClass::ResetSection(a2);
    v56[2] = 50;
    v56[3] = 50;
    v56[0] = 1;
    v56[1] = 1;
    v3 = INIClass::ParseValue(
    (int)a2,
    (unsigned int *)&v47,
    (unsigned __int8 *)&off_81FFF0,
    (unsigned __int8 *)g_INI_Key_Size,
    v56);
    v57[0] = *v3;
    v57[1] = v3[1];
    v57[2] = v3[2];
    v4 = *this;
    v57[3] = v3[3];
    (*(void (__thiscall **)(int *))(v4 + 96))(this);
    v5 = 0;
    (*(void (__thiscall **)(int *, uint32_t *, int, uint32_t, int))(*this + 112))(this, v57, 1, 0, 1);
    Int_Overwrite = (char *)INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)&off_81FFF0,
    (unsigned __int8 *)g_INI_Key_Level,
    0);
    v45 = dword_AA10B0;
    j = 0;
    INIClass::GetString(a2, (unsigned __int8 *)&off_81FFF0, (unsigned __int8 *)aFill, g_INI_Key_Clear, Destination, 32);
    if ( !_strcmpi(Destination, g_INI_Key_Water) )
    j = 3;
    v45 = g_CellPassabilityLUT;
    LayerClass::CellIteratorReset(this);
    for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) )
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, j);
    v8 = (uint8_t)Int_Overwrite + *(uint8_t *)(i + 283);
    *(uint32_t *)(i + 56) = v45 + v7;
    *(uint8_t *)(i + 283) = v8;
    *(uint8_t *)(i + 282) = 0;
    *((uint32_t *)ScenarioClass_Instance + 1174) = ScenarioClass::ReadAndParseString(
    a2,
    (unsigned __int8 *)&off_81FFF0,
    (unsigned __int8 *)g_INI_Key_Theater,
    0);
    (*(void (__thiscall **)(int *, uint32_t))(*this + 24))(this, *((uint32_t *)ScenarioClass_Instance + 1174));
    Multiplayer::ShowProgress(GameMode_Current, 63);
    Event::Dispatch();
    v9 = *((uint32_t *)ScenarioClass_Instance + 133);
    LoadObjectTypeClassTheaterSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    v10 = *((uint32_t *)ScenarioClass_Instance + 1174);
    if ( v10 == dword_822CF8 )
    ResetAllTechnoField776();
    else
    LoadTerrainTypeClassTheatre(v10, 1);
    *((uint32_t *)ScenarioClass_Instance + 133) = v9 + 10000;
    LoadBuildingTypeClassSHPs(*((uint32_t *)ScenarioClass_Instance + 1174));
    BuildingTypeClass::LoadRepairAnimations(v38);
    LoadBuildingTypeClassTheatreSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    LoadFactoryClassTheaterSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    Multiplayer::ShowProgress(GameMode_Current, 65);
    Event::Dispatch();
    ScenarioClass::ReadWaypoints((__int16 *)ScenarioClass_Instance, (int)a2);
    if ( !ScenarioClass::Is_Waypoint_Valid((char *)ScenarioClass_Instance, *((uint32_t *)ScenarioClass_Instance + 131)) )
    v11 = *((uint32_t *)ScenarioClass_Instance + 131);
    LOWORD(j) = (*(this + 61) + *(this + 62)) / 2;
    HIWORD(j) = j;
    ScenarioClass::Set_Waypoint((char *)ScenarioClass_Instance, v11, j);
    if ( *((uint8_t *)ScenarioClass_Instance + 7344) )
    v12 = *((uint32_t *)ScenarioClass_Instance + 132);
    else
    v12 = *((uint32_t *)ScenarioClass_Instance + 131);
    v13 = (char *)*ScenarioClass::Get_Waypoint_Location((char *)ScenarioClass_Instance, &KeyCount, v12);
    Int_Overwrite = v13;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13466) = v13;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13462) = *(uint32_t *)((char *)ScenarioClass_Instance + 13466);
    *(uint32_t *)((char *)ScenarioClass_Instance + 13458) = *(uint32_t *)((char *)ScenarioClass_Instance + 13462);
    *(uint32_t *)((char *)ScenarioClass_Instance + 13454) = *(uint32_t *)((char *)ScenarioClass_Instance + 13458);
    v55[1] = (SHIWORD(Int_Overwrite) << 8) + 128;
    v55[0] = ((__int16)v13 << 8) + 128;
    v55[2] = 0;
    Tactical::SetTacticalPosition((int)TacticalClass_Instance, v55);
    KeyCount = INIClass::GetKeyCount((char *)a2, (unsigned __int8 *)g_INI_Key_CellTags);
    for ( j = 0; j < KeyCount; ++j )
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)a2, (unsigned __int8 *)g_INI_Key_CellTags, j);
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)g_INI_Key_CellTags,
    StringByIndex,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    Int_Overwrite = TagTypeClass::FindOrCreate(Source);
    else
    Int_Overwrite = 0;
    v15 = atoi((const char *)StringByIndex);
    if ( dword_A8ED7C < 4 )
    LOWORD(v52) = v15 % 128;
    HIWORD(v52) = v15 / 128;
    v45 = v52;
    else
    LOWORD(v53) = v15 % 1000;
    HIWORD(v53) = v15 / 1000;
    v45 = v53;
    v16 = Int_Overwrite;
    if ( Int_Overwrite )
    if ( !*((uint32_t *)CellCoord::To_CellObj(this, (__int16 *)&v45) + 15) )
    v17 = (uint32_t *)TeamClass::FindOrCreate(v16);
    v18 = (int)v17;
    if ( v17 )
    ScenarioClass::checkMissionObjectives(v17, v45);
    v19 = CellCoord::To_CellObj(this, (__int16 *)&v45);
    ObjectClass::SetTriggerTarget(v19, v18);
    v20 = *(this + 1113);
    if ( *(this + 1115) < v20
    || (*((uint8_t *)this + 4457) || !v20)
    && (v21 = *(this + 1116), v21 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(this + 1111) + 8))(this + 1111, v21 + v20, 0) )
    v22 = *(this + 1115);
    v23 = *(this + 1112);
    *(this + 1115) = v22 + 1;
    *(uint32_t *)(v23 + 4 * v22) = v45;
    Multiplayer::ShowProgress(GameMode_Current, 67);
    Event::Dispatch();
    Surface::Construct(v39, 640, 400);
    v40 = 0;
    v39[0] = &XSurface_Vtable;
    v41 = 2;
    Buffer::Init(v42, 0, 512000);
    v24 = v39[1] * v41 * v39[2];
    v25 = v42[0];
    ++v40;
    v39[0] = &BSurface_Vtable;
    BSurface::GetBytesPerPixel(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    Base64Data = INIClass::GetBase64Data(a2, aIsomappack, v25, v24);
    if ( Base64Data > 0 )
    ++v40;
    KeyCount = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v48 = 0;
    v49 = 0;
    v47 = &Straw::`vftable';
    Buffer::Init(v50, KeyCount, Base64Data);
    v51 = 0;
    v47 = &BufferStraw::`vftable';
    CellClass::LoadTerrainTiles(&MapClass_Instance, (int)&v47);
    --v40;
    Vector::Clear((int)v50);
    Straw::Dtor((int *)&v47);
    v27 = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v28 = INIClass::GetBase64Data(a2, aIsomappack2, v27, v24);
    if ( v28 > 0 )
    ++v40;
    KeyCount = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v48 = 0;
    v49 = 0;
    v47 = &Straw::`vftable';
    Buffer::Init(v50, KeyCount, v28);
    v51 = 0;
    v47 = &BufferStraw::`vftable';
    CellClass::CreateOverlay(&MapClass_Instance, (int)&v47);
    --v40;
    Vector::Clear((int)v50);
    Straw::Dtor((int *)&v47);
    v29 = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v30 = INIClass::GetBase64Data(a2, aIsomappack3, v29, v24);
    if ( v30 > 0 )
    ++v40;
    KeyCount = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v48 = 0;
    v49 = 0;
    v47 = &Straw::`vftable';
    Buffer::Init(v50, KeyCount, v30);
    v51 = 0;
    v47 = &BufferStraw::`vftable';
    CellClass::DecompressRawCellData(&MapClass_Instance, (int)&v47);
    --v40;
    Vector::Clear((int)v50);
    Straw::Dtor((int *)&v47);
    v31 = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v32 = INIClass::GetBase64Data(a2, aIsomappack4, v31, v24);
    if ( v32 > 0 )
    ++v40;
    KeyCount = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v48 = 0;
    v49 = 0;
    v47 = &Straw::`vftable';
    Buffer::Init(v50, KeyCount, v32);
    v51 = 0;
    v47 = &BufferStraw::`vftable';
    CellClass::DecompressTerrainDataSimple(&MapClass_Instance, (int)&v47);
    --v40;
    Vector::Clear((int)v50);
    Straw::Dtor((int *)&v47);
    v33 = v42[0];
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v34 = INIClass::GetBase64Data(a2, aIsomappack5, v33, v24);
    if ( v34 > 0 )
    v35 = v42[0];
    ++v40;
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 112))(v39);
    (*(void (__thiscall **)(uint32_t *))(v39[0] + 116))(v39);
    v48 = 0;
    v49 = 0;
    v47 = &Straw::`vftable';
    Buffer::Init(v50, v35, v34);
    v51 = 0;
    v47 = &BufferStraw::`vftable';
    CellClass::DecompressTerrainData(&MapClass_Instance, (int)&v47);
    --v40;
    Vector::Clear((int)v50);
    Straw::Dtor((int *)&v47);
    --v40;
    Multiplayer::ShowProgress(GameMode_Current, 68);
    Event::Dispatch();
    if ( ArmageddonMode || g_SpawnModeActive )
    v5 = 1;
    LoadMapClassIsometricTiles(v5, *((uint8_t *)ScenarioClass_Instance + 13501));
    Multiplayer::ShowProgress(GameMode_Current, 69);
    Event::Dispatch();
    v36 = (unsigned int *)(v54 + 63);
    v37 = INIClass::ParseValue(
    (int)a2,
    (unsigned int *)&v47,
    (unsigned __int8 *)&off_81FFF0,
    (unsigned __int8 *)g_INI_Key_LocalSize,
    (unsigned int *)v54 + 59);
    *v36 = *v37;
    v36[1] = v37[1];
    v36[2] = v37[2];
    v36[3] = v37[3];
    Shroud::ProcessCellVisibility(&MapClass_Instance, (int)v36);
    ScenarioClass::CalcMinShroudLevel(&MapClass_Instance);
    dword_822CF8 = *((uint32_t *)ScenarioClass_Instance + 1174);
    Vector::Clear((int)v42);
}

// 0x0053C280
int ScenarioClass::UpdateLighting()
{
    if ( NukeFlash_Status == 1 || ChronoScreenEffect_Status )
    *((uint32_t *)ScenarioClass_Instance + 3404) = *((uint32_t *)ScenarioClass_Instance + 3416);
    return UpdateSurfaceAnimations(
    1000 * *((uint32_t *)ScenarioClass_Instance + 3417) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3418) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3419) / 100,
    1);
    else if ( LightningStorm_Active )
    *((uint32_t *)ScenarioClass_Instance + 3404) = *((uint32_t *)ScenarioClass_Instance + 3410);
    return UpdateSurfaceAnimations(
    1000 * *((uint32_t *)ScenarioClass_Instance + 3411) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3412) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3413) / 100,
    1);
    else if ( !PsyDom_Status || PsyDom_Status == 5 )
    *((uint32_t *)ScenarioClass_Instance + 3404) = *((uint32_t *)ScenarioClass_Instance + 3402);
    return UpdateSurfaceAnimations(-1, -1, -1, 0);
    else
    *((uint32_t *)ScenarioClass_Instance + 3404) = *((uint32_t *)ScenarioClass_Instance + 3423);
    return UpdateSurfaceAnimations(
    1000 * *((uint32_t *)ScenarioClass_Instance + 3424) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3425) / 100,
    1000 * *((uint32_t *)ScenarioClass_Instance + 3426) / 100,
    1);
}

char ScenarioClass::_vt1()
{
    return 0;
}

char ScenarioClass::_vt2()
{
    return 0;
}

char __stdcall ScenarioClass::_vt3(int a1)
{
    return 1;
}

char __stdcall ScenarioClass::_vt23(int a1, int a2, int a3)
{
    return 1;
}

char ScenarioClass::_vt42()
{
    return 0;
}

int ScenarioClass::_vt46()
{
    return 0;
}

uint32_t * ScenarioClass::sub_5C0FE0(uint32_t *Block, char a2)
{
    *Block = &MultiplayerBattle::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ScenarioClass::sub_5C5E40(uint32_t *Block, char a2)
{
    *Block = &FreeForAll::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  ScenarioClass::sub_5CC110(uint32_t *this, int a2, int *a3)
{
    int *FoundationSize; // eax
    int v5; // edi
    int v6; // ecx
    int v7; // eax
    int v8; // ebx
    int *v9; // eax
    int v10; // ecx
    unsigned int v11; // eax
    int v12; // eax
    int v13; // ecx
    int *v14; // eax
    int v15; // [esp-28h] [ebp-68h]
    int v16[4]; // [esp+10h] [ebp-30h] BYREF
    int v17; // [esp+20h] [ebp-20h] BYREF
    int v18; // [esp+24h] [ebp-1Ch]
    int v19; // [esp+28h] [ebp-18h]
    int v20; // [esp+2Ch] [ebp-14h]
    char v21[16]; // [esp+30h] [ebp-10h] BYREF
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( !a3 )
    goto LABEL_6;
    FoundationSize = Building::GetFoundationSize(v16, *(this + 10));
    v17 = *FoundationSize;
    v18 = FoundationSize[1];
    v19 = FoundationSize[2];
    v5 = *(this + 2) + v18;
    v20 = FoundationSize[3];
    v6 = *(this + 1) + v17;
    v7 = *(this + 14);
    v17 = v6;
    v18 = v5;
    if ( (v7 & 0x200) != 0 )
    v8 = *(this + 7);
    v17 = *(__int16 *)(v8 + 2) / -2 + v6;
    v18 = *(__int16 *)(v8 + 4) / -2 + v5;
    v9 = ClipRectIntersection(v16, a3, &v17, 0, 0);
    v17 = *v9;
    v18 = v9[1];
    v19 = v9[2];
    v10 = v9[3];
    v20 = v10;
    if ( v19 > 0 && v10 > 0 )
    LABEL_6:
    v11 = *(this + 16);
    if ( v11 >= 4 )
    v12 = *(this + 14);
    v13 = dword_830084;
    else
    v12 = dword_830078[v11];
    v13 = *(this + 14);
    v16[0] = *(this + 1);
    v16[1] = *(this + 2);
    v15 = v13 | v12;
    v14 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)a2 + 120))(a2, v21);
    DrawToSurfaceSHP(a2, *(this + 8), *(this + 7), *(this + 10), v16, v14, v15, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}

bool __userpurge ScenarioClass::sub_5CC330@<al>(int a1@<ecx>, int a2@<ebp>, int a3, uint32_t *a4)
{
    signed int v5; // edi
    signed int v6; // eax
    int v7; // edi
    unsigned int v8; // eax
    uint32_t *FoundationSize; // eax
    uint32_t *v10; // ebx
    uint32_t *v11; // ecx
    int v12; // ecx
    unsigned int v13; // edx
    int v14; // ecx
    int v15; // edx
    int *v16; // eax
    int v17; // ecx
    int v18; // eax
    int i; // ebp
    int v20; // ecx
    unsigned int v21; // eax
    int v22; // eax
    int *v23; // eax
    uint32_t *v25; // eax
    int v26; // [esp-Ch] [ebp-54h]
    int v27; // [esp-8h] [ebp-50h]
    int v28; // [esp+28h] [ebp-20h] BYREF
    int v29; // [esp+2Ch] [ebp-1Ch]
    int v30; // [esp+30h] [ebp-18h]
    int v31; // [esp+38h] [ebp-10h] BYREF
    char v32[12]; // [esp+3Ch] [ebp-Ch] BYREF
    if ( *(uint8_t *)(a1 + 12) != 1 )
    goto LABEL_19;
    v5 = *(uint32_t *)(a1 + 24);
    if ( *(uint32_t *)(a1 + 16) != -1 )
    v6 = Timer::GetTicks() - *(uint32_t *)(a1 + 16);
    if ( v6 >= v5 )
    goto LABEL_6;
    v5 -= v6;
    if ( v5 )
    LABEL_19:
    v25 = a4;
    *a4 = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    return 0;
    LABEL_6:
    v7 = *(uint32_t *)(a1 + 36);
    *(uint32_t *)(a1 + 16) = Timer::GetTicks();
    *(uint32_t *)(a1 + 20) = v29;
    v8 = *(uint32_t *)(a1 + 64);
    *(uint32_t *)(a1 + 24) = v7;
    if ( v8 >= 4 )
    return 0;
    FoundationSize = Building::GetFoundationSize(&v28, *(uint32_t *)(a1 + 40));
    v10 = a4;
    v11 = a4;
    *a4 = *FoundationSize;
    v11[1] = FoundationSize[1];
    v11[2] = FoundationSize[2];
    v11[3] = FoundationSize[3];
    v12 = v10[1];
    *v10 += *(uint32_t *)(a1 + 4);
    v10[1] = *(uint32_t *)(a1 + 8) + v12;
    if ( (*(uint32_t *)(a1 + 56) & 0x200) != 0 )
    *v10 += *(__int16 *)(*(uint32_t *)(a1 + 28) + 2) / -2;
    v10[1] += *(__int16 *)(*(uint32_t *)(a1 + 28) + 4) / -2;
    (*(void (__thiscall **)(int, uint32_t *, int, uint32_t *, uint32_t, int, int))(*(uint32_t *)a3 + 8))(
    a3,
    v10,
    DSurface_Alternate,
    v10,
    0,
    1,
    a2);
    v13 = *(uint32_t *)(a1 + 64);
    if ( v13 >= 3 )
    v13 = 3;
    v14 = *(uint32_t *)(a1 + 56) | dword_830078[v13];
    v15 = *(uint32_t *)a3;
    v29 = *(uint32_t *)(a1 + 4);
    v26 = v14;
    v30 = *(uint32_t *)(a1 + 8);
    v16 = (int *)(*(int (__thiscall **)(int))(v15 + 120))(a3);
    DrawToSurfaceSHP(
    a3,
    *(uint32_t *)(a1 + 32),
    *(uint32_t *)(a1 + 28),
    *(uint32_t *)(a1 + 40),
    &v28,
    v16,
    (int)v32,
    v26,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0);
    v17 = *(uint32_t *)(a1 + 68);
    if ( v17 )
    a4 = (uint32_t *)a1;
    a4 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t **))(*(uint32_t *)v17 + 16))(v17, &a4);
    v18 = *(uint32_t *)(a1 + 68);
    for ( i = 0; i < *(uint32_t *)(v18 + 16); ++i )
    if ( (uint32_t *)i != a4 )
    v20 = *(uint32_t *)(*(uint32_t *)(v18 + 4) + 4 * i);
    (*(void (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)v20 + 20))(v20, a3, v10);
    v18 = *(uint32_t *)(a1 + 68);
    v21 = *(uint32_t *)(a1 + 64) + 1;
    *(uint32_t *)(a1 + 64) = v21;
    if ( v21 >= 4 )
    v22 = *(uint32_t *)(a1 + 56);
    v28 = *(uint32_t *)(a1 + 4);
    BYTE1(v22) |= 4u;
    v27 = v22;
    v29 = *(uint32_t *)(a1 + 8);
    v23 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a3 + 120))(a3, &v31);
    DrawToSurfaceSHP(
    DSurface_Alternate,
    *(uint32_t *)(a1 + 32),
    *(uint32_t *)(a1 + 28),
    *(uint32_t *)(a1 + 40),
    &v28,
    v23,
    v27,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    return *(uint8_t *)(a1 + 72) == 0;
}

void  ScenarioClass::sub_5CC550(int this, int a2, int *a3)
{
    char v4; // al
    int *FoundationSize; // eax
    int v6; // ebp
    int v7; // ecx
    int v8; // edi
    int v9; // eax
    int v10; // ebp
    int *v11; // eax
    int v12; // ecx
    unsigned int v13; // edx
    int v14; // edx
    int v15; // ebx
    int *v16; // eax
    int v17; // [esp-28h] [ebp-64h]
    int v18[4]; // [esp+Ch] [ebp-30h] BYREF
    int v19; // [esp+1Ch] [ebp-20h] BYREF
    int v20; // [esp+20h] [ebp-1Ch]
    int v21; // [esp+24h] [ebp-18h]
    int v22; // [esp+28h] [ebp-14h]
    char v23[16]; // [esp+2Ch] [ebp-10h] BYREF
    v19 = 0;
    v4 = *(uint8_t *)(this + 12);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( v4 )
    FoundationSize = Building::GetFoundationSize(v18, *(uint32_t *)(this + 40));
    v6 = *(uint32_t *)(this + 4);
    v19 = *FoundationSize;
    v7 = v6 + v19;
    v20 = FoundationSize[1];
    v21 = FoundationSize[2];
    v8 = *(uint32_t *)(this + 8) + v20;
    v22 = FoundationSize[3];
    v9 = *(uint32_t *)(this + 56);
    v19 += v6;
    v20 = v8;
    if ( (v9 & 0x200) != 0 )
    v10 = *(uint32_t *)(this + 28);
    v19 = *(__int16 *)(v10 + 2) / -2 + v7;
    v20 = *(__int16 *)(v10 + 4) / -2 + v8;
    if ( !a3
    || (v11 = ClipRectIntersection(v18, a3, &v19, 0, 0),
    v19 = *v11,
    v20 = v11[1],
    v21 = v11[2],
    v12 = v11[3],
    v22 = v12,
    v21 > 0)
    && v12 > 0 )
    v13 = *(uint32_t *)(this + 64);
    if ( v13 >= 3 )
    v13 = 3;
    v14 = dword_830078[v13];
    v18[0] = *(uint32_t *)(this + 4);
    v15 = *(uint32_t *)(this + 56);
    v18[1] = *(uint32_t *)(this + 8);
    v17 = v15 | v14;
    v16 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)a2 + 120))(a2, v23);
    DrawToSurfaceSHP(
    a2,
    *(uint32_t *)(this + 32),
    *(uint32_t *)(this + 28),
    *(uint32_t *)(this + 40),
    v18,
    v16,
    v17,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

void  ScenarioClass::sub_5CC6C0(int this, int a2)
{
    unsigned int v3; // edx
    int v4; // eax
    int v5; // edx
    int *v6; // eax
    int v7; // [esp-2Ch] [ebp-48h]
    int v8[2]; // [esp+4h] [ebp-18h] BYREF
    uint8_t v9[16]; // [esp+Ch] [ebp-10h] BYREF
    v3 = *(uint32_t *)(this + 64);
    if ( v3 >= 3 )
    v3 = 3;
    if ( *(uint8_t *)(this + 12) )
    v4 = dword_830078[v3];
    v5 = *(uint32_t *)(this + 56);
    v8[0] = *(uint32_t *)(this + 4);
    v8[1] = *(uint32_t *)(this + 8);
    v7 = v5 | v4;
    v6 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Alternate + 120))(DSurface_Alternate, v9);
    DrawToSurfaceSHP(
    DSurface_Alternate,
    *(uint32_t *)(this + 32),
    *(uint32_t *)(this + 28),
    *(uint32_t *)(this + 40),
    v8,
    v6,
    v7,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

uint32_t * ScenarioClass::sub_5CEBD0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 7);
    *Block = &MSShapeAnim::`vftable';
    if ( v3 && *((uint8_t *)Block + 60) )
    __3_YAXPAX_Z(v3);
    *(Block + 7) = 0;
    *((uint8_t *)Block + 60) = 0;
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ScenarioClass::sub_5CEC20(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 7);
    *Block = &MSShapeAnim::`vftable';
    if ( v3 && *((uint8_t *)Block + 60) )
    __3_YAXPAX_Z(v3);
    *(Block + 7) = 0;
    *((uint8_t *)Block + 60) = 0;
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  ScenarioClass::_vt28(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 108))(this);
}

char __stdcall ScenarioClass::_vt7(int a1)
{
    return 1;
}

void  ScenarioClass::sub_5D80B0(int this)
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

unsigned int  ScenarioClass::sub_5D80E0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

void  ScenarioClass::sub_5D8110(int this)
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

unsigned int  ScenarioClass::sub_5D8140(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  ScenarioClass::sub_5D8160(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

char  ScenarioClass::sub_5D8470(void *this, int a2, uint32_t *a3)
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

int  ScenarioClass::sub_5D8520(int *this, uint32_t *a2)
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

char  ScenarioClass::sub_5D8550(int *this, int a2)
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

char  ScenarioClass::sub_5D8590(void *this, int a2, uint32_t *a3)
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

int  ScenarioClass::sub_5D8670(int this, uint32_t *a2)
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

unsigned int  ScenarioClass::sub_5D86B0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  ScenarioClass::sub_5D8730(void *this, int a2, uint32_t *a3)
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

int  ScenarioClass::sub_5D87E0(int *this, uint32_t *a2)
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

uint32_t * ScenarioClass::sub_5D8860(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MultiplayerTeam *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ScenarioClass::sub_5D88B0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MultiplayerGameMode *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ScenarioClass::sub_5D8900(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MultiplayerGameMode *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  ScenarioClass::Constructor(int this)
{
    wchar_t *v2; // eax
    wchar_t *v3; // ecx
    wchar_t *v4; // eax
    wchar_t *v5; // edx
    uint32_t *v6; // eax
    int v7; // ecx
    int v8; // esi
    uint8_t *v9; // edi
    int v10; // esi
    uint8_t *v11; // edi
    SeedInitRNG((uint32_t *)(this + 536), 0);
    *(uint32_t *)(this + 1556) = Timer::GetTicks();
    *(uint32_t *)(this + 1564) = 0;
    *(uint32_t *)(this + 1568) = Timer::GetTicks();
    *(uint32_t *)(this + 1576) = 0;
    v2 = CurrentFrame;
    *(uint32_t *)(this + 4592) = 0;
    *(uint32_t *)(this + 4584) = v2;
    *(uint8_t *)(this + 4600) = 0;
    v3 = CurrentFrame;
    *(uint32_t *)(this + 4640) = 0;
    *(uint32_t *)(this + 4632) = v3;
    *(uint32_t *)(this + 4644) = CurrentFrame;
    *(uint32_t *)(this + 4652) = 0;
    v4 = CurrentFrame;
    *(uint32_t *)(this + 4664) = 0;
    *(uint32_t *)(this + 4656) = v4;
    *(uint32_t *)(this + 4668) = CurrentFrame;
    *(uint32_t *)(this + 4676) = 0;
    v5 = CurrentFrame;
    *(uint32_t *)(this + 4688) = 0;
    *(uint32_t *)(this + 4680) = v5;
    *(uint32_t *)(this + 13504) = CurrentFrame;
    *(uint32_t *)(this + 13512) = 0;
    TypeList::TechnoTypeConstructor((uint32_t *)(this + 13524), 0, 0);
    *(uint32_t *)(this + 13540) = 0;
    *(uint32_t *)(this + 13544) = 10;
    *(uint32_t *)(this + 13524) = &TypeList<TechnoTypeClass *>::`vftable';
    VectorClass::Construct((uint32_t *)(this + 13552), 0, 0);
    *(uint32_t *)(this + 13572) = 10;
    *(uint32_t *)(this + 13568) = 0;
    *(uint32_t *)(this + 13552) = &TypeList<int>::`vftable';
    VectorClass::Construct((uint32_t *)(this + 13580), 0, 0);
    *(uint32_t *)(this + 13600) = 10;
    *(uint32_t *)(this + 13596) = 0;
    *(uint32_t *)(this + 13580) = &TypeList<int>::`vftable';
    ScenarioClass::InitTimer(this);
    *(uint8_t *)(this + 13720) = 0;
    *(uint8_t *)(this + 13501) = 0;
    ScenarioClass::ResetIntroFlags(this);
    *(uint32_t *)(this + 4692) = 1;
    *(uint32_t *)(this + 13516) = -1;
    *(uint8_t *)(this + 4) = 0;
    *(uint8_t *)(this + 264) = 0;
    v6 = (uint32_t *)(this + 1586);
    v7 = 702;
    do
    *v6++ = dword_B05458;
    --v7;
    while ( v7 );
    wcscpy((wchar_t *)(this + 4960), &g_TypeClass_DefaultString);
    wcscpy((wchar_t *)(this + 5082), &g_TypeClass_DefaultString);
    strcpy((char *)(this + 4700), &g_INI_DefaultBuffer);
    strcpy((char *)(this + 7248), &g_INI_DefaultBuffer);
    strcpy((char *)(this + 5050), &g_INI_DefaultBuffer);
    wcscpy((wchar_t *)(this + 5200), &g_TypeClass_DefaultString);
    v8 = 0;
    v9 = (uint8_t *)(this + 7344);
    do
    *(v9 - 40) = 0;
    if ( (unsigned int)v8 < 0x32 && *v9 )
    *v9 = 0;
    *(uint8_t *)(this + 13482) = 1;
    HouseClass::UpdateAllTypes((void *)v8);
    ++v8;
    v9 += 41;
    while ( v8 < 50 );
    v10 = 0;
    v11 = (uint8_t *)(this + 9394);
    do
    *(v11 - 40) = 0;
    if ( (unsigned int)v10 < 0x64 && *v11 )
    *v11 = 0;
    *(uint8_t *)(this + 13482) = 1;
    TriggerActionQueue::ProcessAll(v10);
    ++v10;
    v11 += 41;
    while ( v10 < 100 );
    *(uint32_t *)(this + 13454) = 0;
    *(uint32_t *)(this + 13458) = 0;
    *(uint32_t *)(this + 13462) = 0;
    *(uint32_t *)(this + 13466) = 0;
    return this;
}

// 0x00686890
int  ScenarioClass::SetupAlliances(void *this)
{
    int i; // esi
    int v3; // ecx
    int v4; // esi
    int WaypointAnimationSpeed; // eax
    int v6; // esi
    void *v7; // eax
    int Owner; // ebp
    int j; // esi
    HouseClass *v10; // edx
    int v11; // eax
    uint32_t *v12; // eax
    int v13; // edx
    uint32_t *v14; // edi
    int v15; // eax
    int v16; // eax
    int v17; // ecx
    int result; // eax
    int v19; // [esp+4h] [ebp-10h]
    int v20; // [esp+Ch] [ebp-8h]
    if ( g_Rules_AlliesAllowed + Game_PlayerCount < *(uint32_t *)RulesClass_Instance[1].gapB0 && !ArmageddonMode )
    for ( i = 0; i < HouseClass_Count; ++i )
    v3 = *(uint32_t *)&HouseClass_Array->gap0[4 * i];
    if ( !*(uint8_t *)(v3 + 492) && !*(uint8_t *)(*(uint32_t *)(v3 + 52) + 422) && g_Rules_AlliesAllowed < 1 )
    HouseClass::SDDTORAllAndTriggers();
    Event::Dispatch();
    if ( !ArmageddonMode )
    v4 = IKnowWhatImDoing;
    IKnowWhatImDoing = 0;
    if ( g_GameStateFlags )
    (*(void (__thiscall **)(int, void *))(*(uint32_t *)g_GameStateFlags + 132))(g_GameStateFlags, this);
    ComputeMultiEngineerAdjustment((int *)g_GameStateFlags);
    else
    GenerateScenarioUnits((char)this);
    IKnowWhatImDoing = v4;
    Multiplayer::ShowProgress(GameMode_Current, 93);
    Event::Dispatch();
    if ( Crates )
    WaypointAnimationSpeed = RulesClass_Instance[1].WaypointAnimationSpeed;
    if ( WaypointAnimationSpeed <= g_ScenarioLoadFlags )
    WaypointAnimationSpeed = g_ScenarioLoadFlags;
    if ( WaypointAnimationSpeed >= RulesClass_Instance[1].BarrelExplode )
    WaypointAnimationSpeed = RulesClass_Instance[1].BarrelExplode;
    if ( WaypointAnimationSpeed > 0 )
    v6 = WaypointAnimationSpeed;
    do
    CrateClass::FindPlacement(&MapClass_Instance);
    --v6;
    while ( v6 );
    Event::Dispatch();
    GetHouseData(&MapClass_Instance);
    v7 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Special);
    Owner = HouseClass::FindOwner(v7);
    for ( j = 0; j < HouseClass_Count; ++j )
    *(uint32_t *)(*(uint32_t *)&HouseClass_Array->gap0[4 * j] + 22388) = *(uint32_t *)&HouseClass_Array->gap0[4 * j];
    v10 = HouseClass_Array;
    v11 = *(uint32_t *)&HouseClass_Array->gap0[4 * j];
    if ( !*(uint8_t *)(v11 + 492) && !*(uint8_t *)(*(uint32_t *)(v11 + 52) + 422) )
    v12 = (uint32_t *)(v11 + 22080);
    v13 = *(uint32_t *)(RulesClass_Instance->Difficult[10]
    + 4 * *(uint32_t *)(*(uint32_t *)&HouseClass_Array->gap0[4 * j] + 388));
    *v12 = CurrentFrame;
    v12[1] = v20;
    v12[2] = v13;
    v19 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)&HouseClass_Array->gap0[4 * j] + 36) + 24))(*(uint32_t *)&HouseClass_Array->gap0[4 * j] + 36);
    v14 = *(uint32_t **)&HouseClass_Array->gap0[4 * j];
    v15 = Math::RoundToInt((double)*(int *)(RulesClass_Instance->LightningHitDelay + 4 * v14[97]) * 0.01 * (double)v19);
    HouseClass::AddPower(v14, v15);
    v10 = HouseClass_Array;
    v16 = *(uint32_t *)(*(uint32_t *)&v10->gap0[4 * j] + 52);
    if ( *(uint8_t *)(v16 + 422) )
    *(uint8_t *)(v16 + 423) = 0;
    else
    *(uint8_t *)(v16 + 423) = 1;
    v17 = *(uint32_t *)&HouseClass_Array->gap0[4 * j];
    if ( v17 != Owner )
    HouseClass::HandleAlliance(v17, Owner, 0);
    HouseClass::HandleAlliance(Owner, *(uint32_t *)&HouseClass_Array->gap0[4 * j], 0);
    if ( g_GameStateFlags )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)g_GameStateFlags + 136))(g_GameStateFlags, v19);
    (*(void (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 140))(g_GameStateFlags);
    result = sub_68C050(ScenarioClass_Instance);
    dword_A8D108 = 16843009;
    dword_A8D10C = 16843009;
    return result;
}

char  ScenarioClass::SaveLoad_Prefix(DWORD *this, int *a2)
{
    DWORD *v3; // ebx
    DWORD Ticks; // eax
    int v5; // ecx
    DWORD v6; // eax
    int *v7; // esi
    int v8; // eax
    int i; // ebp
    int v10; // eax
    int j; // ebp
    int v12; // eax
    int k; // ebp
    DWORD v14; // eax
    bool v16; // [esp+71h] [ebp-1h]
    v3 = this + 389;
    Debug::Log();
    v16 = *v3 == -1;
    if ( *v3 != -1 )
    Ticks = Timer::GetTicks();
    v5 = *(this + 391);
    v6 = Ticks - *v3;
    *v3 = -1;
    *(this + 391) = v6 + v5;
    v7 = a2;
    (*(void (__stdcall **)(int *, DWORD *, int, uint32_t))(*a2 + 16))(a2, this, 14144, 0);
    v8 = *v7;
    a2 = (int *)*(this + 3385);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v8 + 16))(v7, &a2, 4, 0);
    for ( i = 0; i < (int)a2; ++i )
    (*(void (__stdcall **)(int *, DWORD, int, uint32_t))(*v7 + 16))(v7, *(this + 3382) + 4 * i, 4, 0);
    v10 = *v7;
    a2 = (int *)*(this + 3392);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v10 + 16))(v7, &a2, 4, 0);
    for ( j = 0; j < (int)a2; ++j )
    (*(void (__stdcall **)(int *, DWORD, int, uint32_t))(*v7 + 16))(v7, *(this + 3389) + 4 * j, 4, 0);
    v12 = *v7;
    a2 = (int *)*(this + 3399);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v12 + 16))(v7, &a2, 4, 0);
    for ( k = 0; k < (int)a2; ++k )
    (*(void (__stdcall **)(int *, DWORD, int, uint32_t))(*v7 + 16))(v7, *(this + 3396) + 4 * k, 4, 0);
    LOBYTE(v14) = v16;
    if ( !v16 && *v3 == -1 )
    v14 = Timer::GetTicks();
    *v3 = v14;
    return v14;
}

void  ScenarioClass::SaveLoad_Prefix_0(int this, int a2)
{
    int v3; // eax
    uint32_t *v4; // esi
    DWORD Ticks; // eax
    int v6; // ecx
    DWORD v7; // eax
    int v8; // esi
    int i; // edi
    int j; // edi
    int k; // edi
    int m; // esi
    DWORD *v13; // esi
    int v14; // [esp+70h] [ebp-8h] BYREF
    DWORD *v15; // [esp+74h] [ebp-4h]
    v3 = *(uint32_t *)(this + 1556);
    v4 = (uint32_t *)(this + 1556);
    v15 = (DWORD *)(this + 1556);
    if ( v3 != -1 )
    Ticks = Timer::GetTicks();
    v6 = v4[2];
    v7 = Ticks - *v4;
    *v4 = -1;
    v4[2] = v7 + v6;
    v8 = a2;
    (*(void (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, this, 14144, 0);
    if ( this )
    ScenarioClass::ReadINIEntry(this, (int)&a2);
    if ( this != -13524 )
    TechnoTypeVector::Construct((uint32_t *)(this + 13524), 0, 0);
    *(uint32_t *)(this + 13524) = &TypeList<TechnoTypeClass *>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &a2, 4, 0);
    for ( i = 0; i < a2; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &v14, 4, 0);
    DynamicVector_PushBack((uint32_t *)(this + 13524), &v14);
    if ( this != -13552 )
    DynamicVectorClass::Construct((uint32_t *)(this + 13552), 0, 0);
    *(uint32_t *)(this + 13552) = &TypeList<int>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &a2, 4, 0);
    for ( j = 0; j < a2; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &v14, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(this + 13552), &v14);
    if ( this != -13580 )
    DynamicVectorClass::Construct((uint32_t *)(this + 13580), 0, 0);
    *(uint32_t *)(this + 13580) = &TypeList<int>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &a2, 4, 0);
    for ( k = 0; k < a2; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v8 + 12))(v8, &v14, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(this + 13580), &v14);
    for ( m = 0; m < *(uint32_t *)(this + 13540); ++m )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(this + 13528) + 4 * m));
    if ( *(uint8_t *)(this + 4600) )
    *(uint32_t *)(this + 4596) = GetStringCSF((wchar_t *)(this + 4600), 0, g_Str_File_Scenario_CPP, 6608);
    else
    *(uint32_t *)(this + 4596) = &g_TypeClass_DefaultString;
    v13 = v15;
    if ( *v15 == -1 )
    *v13 = Timer::GetTicks();
    Debug::Log();
}

char  ScenarioClass::SetGlobalToByID(uint8_t *this, unsigned int a2, char a3)
{
    char v3; // bl
    if ( a2 >= 0x32 )
    return 0;
    v3 = *(this + 40 * a2 + a2 + 7344);
    if ( v3 != a3 )
    *(this + 40 * a2 + a2 + 7344) = a3;
    *(this + 13482) = 1;
    HouseClass::UpdateAllTypes((void *)a2);
    return v3;
}

char  ScenarioClass::GetGlobalStateByID(uint8_t *this, unsigned int a2, uint8_t *a3)
{
    if ( a2 > 0x31 )
    return 0;
    *a3 = *(this + 40 * a2 + a2 + 7344);
    return 1;
}

char  ScenarioClass::ReadGlobalVariables(char *this, char *a2)
{
    int KeyCount; // ebp
    int v3; // esi
    char *StringByIndex; // edi
    int v5; // eax
    if ( INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames) >= 50 )
    KeyCount = 50;
    else
    KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames);
    v3 = 0;
    if ( KeyCount <= 0 )
    return 1;
    do
    StringByIndex = (char *)INIClass::GetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_VariableNames, v3);
    v5 = atoi(StringByIndex);
    INIClass::GetString(
    (unsigned __int8 ***)a2,
    (unsigned __int8 *)g_INI_Key_VariableNames,
    (unsigned __int8 *)StringByIndex,
    0,
    this + 40 * v5 + v5 + 7304,
    40);
    ++v3;
    while ( v3 < KeyCount );
    return 1;
}

char  ScenarioClass::SetLocalToByID(uint8_t *this, unsigned int a2, char a3)
{
    char v3; // bl
    if ( a2 >= 0x64 )
    return 0;
    v3 = *(this + 40 * a2 + a2 + 9394);
    if ( v3 != a3 )
    *(this + 40 * a2 + a2 + 9394) = a3;
    *(this + 13482) = 1;
    TriggerActionQueue::ProcessAll((void *)a2);
    return v3;
}

char  ScenarioClass::GetLocalStateByID(uint8_t *this, unsigned int a2, uint8_t *a3)
{
    if ( a2 >= 0x64 )
    return 0;
    *a3 = *(this + 40 * a2 + a2 + 9394);
    return 1;
}

char  ScenarioClass::ReadLocalVariables(char *this, char *a2)
{
    char *v2; // ebx
    uint8_t *v3; // eax
    int v4; // ecx
    char *StringByIndex; // edi
    int v6; // esi
    int v7; // ebx
    char *v8; // eax
    int KeyCount; // [esp+8h] [ebp-8Ch]
    int v11; // [esp+Ch] [ebp-88h]
    char String[128]; // [esp+14h] [ebp-80h] BYREF
    v2 = this;
    v3 = this + 9354;
    v4 = 100;
    do
    *v3 = 0;
    v3 += 41;
    --v4;
    while ( v4 );
    if ( INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames) >= 100 )
    KeyCount = 100;
    else
    KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames);
    v11 = 0;
    if ( KeyCount <= 0 )
    return 1;
    while ( 1 )
    StringByIndex = (char *)INIClass::GetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_VariableNames, v11);
    v6 = atoi(StringByIndex);
    INIClass::GetString(
    (unsigned __int8 ***)a2,
    (unsigned __int8 *)g_INI_Key_VariableNames,
    (unsigned __int8 *)StringByIndex,
    0,
    String,
    128);
    v7 = (int)&v2[40 * v6 + v6];
    strcpy((char *)(v7 + 9354), strtok(String, Delimiter));
    v8 = strtok(0, Delimiter);
    if ( v8 )
    *(uint8_t *)(v7 + 9394) = atoi(v8) != 0;
    if ( ++v11 >= KeyCount )
    break;
    v2 = this;
    return 1;
}

uint32_t * ScenarioClass::Get_Waypoint_Location(char *this, uint32_t *a2, int a3)
{
    *a2 = *(uint32_t *)(this + 4 * a3 + 1586);
    return a2;
}

uint32_t * ScenarioClass::ClearAllWaypoints(char *this)
{
    uint32_t *result; // eax
    int v2; // ecx
    result = this + 1586;
    v2 = 702;
    do
    *result++ = dword_B05458;
    --v2;
    while ( v2 );
    return result;
}

bool  ScenarioClass::Is_Waypoint_Valid(char *this, unsigned int a2)
{
    return a2 <= 0x2BD && *(uint32_t *)(this + 4 * a2 + 1586) != dword_B05458;
}

char  ScenarioClass::Write_Waypoints(__int16 *this, char *a2)
{
    char result; // al
    int v4; // edi
    __int16 *v5; // esi
    CHAR v6[32]; // [esp+10h] [ebp-20h] BYREF
    result = INIClass::ClearSection((int)a2, (int)g_INI_Key_Waypoints, 0);
    v4 = 0;
    v5 = this + 793;
    do
    if ( *(uint32_t *)v5 != dword_B05458 )
    wsprintfA(v6, "%d", v4);
    result = INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Waypoints, v6, *v5 + 1000 * v5[1], 0);
    ++v4;
    v5 += 2;
    while ( v4 < 702 );
    return result;
}

// 0x0068BF30
int  ScenarioClass::Set_Default_Waypoint(char *this, int a2)
{
    *(uint32_t *)(this + 4 * a2 + 1586) = dword_B05458;
    return a2;
}

int  ScenarioClass::Set_Waypoint(char *this, int a2, int a3)
{
    *(uint32_t *)(this + 4 * a2 + 1586) = a3;
    return a3;
}

