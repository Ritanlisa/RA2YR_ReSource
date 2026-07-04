#include "lightningstorm.hpp"

int __fastcall LightningStorm::Start(int a1, int a2, int a3, #375 *a4)
{
    int result; // eax
    __int16 v7; // si
    int v8; // esi
    int v9; // ecx
    int v10; // esi
    wchar_t *StringCSF; // eax
    int v12; // [esp+Ch] [ebp-4h]
    result = a3;
    if ( a3 == dword_A9F9F8 )
    for ( ; !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a3); a3 = v12 )
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, g_AircraftTrackerState);
    LOWORD(v12) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, g_AircraftTrackerPool);
    HIWORD(v12) = v7;
    result = a3;
    LightningStorm_Coords = result;
    LightningStorm_Owner = a4;
    if ( !LightningStorm_Active )
    if ( a2 )
    result = LightningStorm_Deferment;
    if ( !LightningStorm_Deferment || LightningStorm_Deferment >= a2 )
    LightningStorm_Deferment = a2;
    LightningStorm_Duration = a1;
    else
    CreateTriggerClassIfFarEnough(13, a2, result);
    v8 = 0;
    LightningStorm_Duration = a1;
    LightningStorm_StartTime = (int)CurrentFrame;
    for ( LightningStorm_Active = 1; v8 < HouseClass_Count; ++v8 )
    if ( !LightningStorm_Owner
    || !(unsigned __int8)House::IsAlliedWith(LightningStorm_Owner, *(void*375 **)&HouseClass_Array->gap0[4 * v8]) )
    v9 = *(uint32_t *)&HouseClass_Array->gap0[4 * v8];
    if ( !*(uint8_t *)(v9 + 501) && !MuteSWLaunches )
    HouseClass::CreateRadarOutage(v9, a1);
    if ( HouseClass_Player )
    *((uint8_t *)HouseClass_Player + 22393) = 1;
    ScenarioClass::UpdateLighting();
    if ( LOBYTE(RulesClass_Instance[1].WobblesPerSecond) )
    v10 = 3;
    if ( HouseClass_Player )
    v10 = *((uint32_t *)HouseClass_Player + 22549);
    PlayVocClass(RulesClass_Instance->Scorches4[3], 0x2000, 1.0, 0);
    StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v10, 16454, 150, 0);
    return MapClass::MarkForRedraw(&MapClass_Instance, 1);
    return result;
}

// 0x0053A140
int __stdcall LightningStorm::Strike(int a1)
{
    uint32_t *v1; // esi
    int v2; // eax
    int v3; // ecx
    int result; // eax
    void *v5; // esi
    void **v6; // eax
    void **v7; // esi
    int v8; // eax
    int v9[3]; // [esp+4h] [ebp-Ch] BYREF
    v1 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a1);
    v2 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)RulesClass_Instance->WarpIn + 156))(*(uint32_t *)RulesClass_Instance->WarpIn);
    v3 = ((v1[80] & 0x100) != 0 ? dword_A9FA84 : 0)
    + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
    + dword_A9FA90 * *((char *)v1 + 283);
    result = ((__int16)a1 << 8) + 128;
    v9[0] = result;
    v9[1] = (SHIWORD(a1) << 8) + 128;
    v9[2] = v3;
    if ( result != dword_A9FA30 || (SHIWORD(a1) << 8) + 128 != qword_A9FA34 || v3 != MEMORY[0xA9FA38] )
    v5 = *(void **)(RulesClass_Instance->DrainAnimationType
    + 4
    * ((unsigned int)Random::State((uint32_t *)ScenarioClass_Instance + 134)
    % RulesClass_Instance->ChronoBlast));
    v6 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v6 )
    v7 = AnimClass::ctor(v6, v5, v9, 0, 1, (void *)0x600, 0, 0);
    else
    v7 = 0;
    if ( dword_A9FA70 < dword_A9FA68
    || (byte_A9FA6D || !dword_A9FA68)
    && dword_A9FA74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(LightningStorm_CloudsManifesting + 8))(
    &LightningStorm_CloudsManifesting,
    dword_A9FA68 + dword_A9FA74,
    0) )
    v8 = dword_A9FA70++;
    *((uint32_t *)dword_A9FA64 + v8) = v7;
    result = dword_A9F9D8;
    if ( dword_A9F9E0 < dword_A9F9D8
    || (byte_A9F9DD || !dword_A9F9D8)
    && dword_A9F9E4 > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(LightningStorm_CloudsPresent + 8))(
    &LightningStorm_CloudsPresent,
    dword_A9F9D8 + dword_A9F9E4,
    0),
    (uint8_t)result) )
    result = dword_A9F9E0++;
    *((uint32_t *)dword_A9F9D4 + result) = v7;
    return result;
}

// 0x0053A300
char __stdcall LightningStorm::Strike2(int a1, int a2, int a3)
{
    uint32_t *v3; // esi
    int *Coords; // eax
    int v5; // ecx
    int v6; // edx
    void *v7; // edi
    void **v8; // eax
    void **v9; // edi
    int v10; // eax
    void **v11; // eax
    RulesClass *v12; // eax
    unsigned int v13; // eax
    int Climb; // ebp
    void *WarheadVersusMultiplier; // ebx
    void **v16; // edi
    void *v17; // eax
    uint32_t *v18; // ebx
    int ClosestObjectCell; // eax
    int v20; // edi
    void **v21; // edi
    void **v22; // esi
    int v23; // eax
    char v25; // [esp+12h] [ebp-2Eh]
    char v26; // [esp+13h] [ebp-2Dh]
    int v27; // [esp+14h] [ebp-2Ch]
    int v28; // [esp+18h] [ebp-28h]
    int v29; // [esp+1Ch] [ebp-24h] BYREF
    int v30; // [esp+20h] [ebp-20h]
    int v31; // [esp+28h] [ebp-18h] BYREF
    int v32; // [esp+2Ch] [ebp-14h]
    void **v33; // [esp+30h] [ebp-10h]
    int v34[3]; // [esp+34h] [ebp-Ch] BYREF
    v3 = Coord::To_Cell(&MapClass_Instance, &a1);
    Coords = CellClass::GetCoords(v3, &v29);
    v5 = Coords[1];
    v6 = Coords[2];
    v34[0] = *Coords;
    v34[1] = v5;
    v34[2] = v6;
    v7 = *(void **)(RulesClass_Instance->WarpIn
    + 4
    * ((unsigned int)Random::State((uint32_t *)ScenarioClass_Instance + 134)
    % RulesClass_Instance->ChronoSparkle1));
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0);
    else
    v9 = 0;
    if ( dword_A9FA28 < dword_A9FA20
    || (byte_A9FA25 || !dword_A9FA20)
    && dword_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(LightningStorm_BoltsPresent + 8))(
    &LightningStorm_BoltsPresent,
    dword_A9FA2C + dword_A9FA20,
    0) )
    v10 = dword_A9FA28++;
    *((uint32_t *)dword_A9FA1C + v10) = v9;
    v27 = v3[9];
    v28 = *((char *)v3 + 283);
    v11 = (void **)(v28 * dword_A9FA90 + ((v3[80] & 0x100) != 0 ? dword_A9FA84 : 0));
    v31 = ((__int16)v27 << 8) + 128;
    v32 = (SHIWORD(v27) << 8) + 128;
    v33 = v11;
    if ( v31 != dword_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 )
    v12 = RulesClass_Instance;
    if ( RulesClass_Instance->GDIGateOne > 0 )
    v13 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    StartAudioControllerAt(
    *(uint32_t *)(RulesClass_Instance->RepairBay[1] + 4 * (v13 % RulesClass_Instance->GDIGateOne)),
    (int)&v31,
    0);
    v12 = RulesClass_Instance;
    Climb = v12[1].Climb;
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(Climb, HIDWORD(v12[1].WobblesPerSecond), v3[59], &v31);
    v16 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v16 )
    v17 = (void *)Return::HRESULT_Fail(v31, v32, (int)v33);
    AnimClass::ctor(v16, WarheadVersusMultiplier, &v31, 0, 1, (void *)0x2600, v17, 0);
    v25 = 0;
    v18 = Cell::IsBridge(v3);
    v29 = 0;
    v30 = 0;
    ClosestObjectCell = Object::FindClosestObjectCell(v3, &v29, 0, 0);
    v20 = ClosestObjectCell;
    if ( !ClosestObjectCell
    || (v26 = 1, (*(int (__thiscall **)(int))(*(uint32_t *)ClosestObjectCell + 44))(ClosestObjectCell) != 15) )
    v26 = 0;
    if ( !v18 && !v20 )
    switch ( v3[59] )
    case 1:
    case 3:
    case 4:
    case 0xB:
    v25 = 1;
    break;
    default:
    break;
    CreateSmokeEffectAt(Climb, HIDWORD(RulesClass_Instance[1].WobblesPerSecond), v31, v32, (int)v33, 0, 0);
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(RulesClass_Instance[1].WobblesPerSecond), 1, (int)LightningStorm_Owner);
    if ( v18 == Cell::IsBridge(v3)
    && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell(v3, &v29, 0, 0))
    && *((char *)v3 + 283) == v28 )
    LOBYTE(v11) = v25;
    else
    LOBYTE(v11) = 1;
    if ( !v26 )
    if ( (uint8_t)v11 )
    v11 = (void **)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 2, 4);
    if ( (int)v11 > 0 )
    v21 = v11;
    do
    v11 = (void **)__2_YAPAXI_Z(0x1C8u);
    v22 = v11;
    if ( v11 )
    v23 = Random::Range(
    (uint32_t *)ScenarioClass_Instance + 134,
    0,
    RulesClass_Instance->BaseUnderAttackSound - 1);
    LOBYTE(v11) = (unsigned __int8)AnimClass::ctor(
    v22,
    *(void **)(RulesClass_Instance->CreateUnitSound + 4 * v23),
    &v31,
    0,
    1,
    (void *)0x600,
    0,
    0);
    v21 = (void **)((char *)v21 - 1);
    while ( v21 );
    return (char)v11;
}

