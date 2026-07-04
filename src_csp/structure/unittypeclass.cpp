#include "unittypeclass.hpp"

// 0x007470D0
int  UnitTypeClass::UnitTypeClass(int this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    uint32_t *v6; // edx
    TechnoTypeClass::ReadINI((char *)this, Source, -1);
    *(uint32_t *)(this + 3576) = -1;
    *(uint32_t *)(this + 3580) = -1;
    *(uint32_t *)(this + 3584) = 0;
    *(uint32_t *)(this + 3588) = 0;
    *(uint32_t *)(this + 3592) = 0;
    *(uint8_t *)(this + 3596) = 0;
    *(uint8_t *)(this + 3597) = 0;
    *(uint8_t *)(this + 3598) = 0;
    *(uint8_t *)(this + 3599) = 0;
    *(uint8_t *)(this + 3600) = 0;
    *(uint8_t *)(this + 3601) = 0;
    *(uint8_t *)(this + 3602) = 0;
    *(uint8_t *)(this + 3603) = 0;
    *(uint8_t *)(this + 3604) = 1;
    *(uint8_t *)(this + 3605) = 0;
    *(uint8_t *)(this + 3606) = 0;
    *(uint8_t *)(this + 3607) = 0;
    *(uint8_t *)(this + 3608) = 0;
    *(uint8_t *)(this + 3609) = 0;
    *(uint8_t *)(this + 3610) = 0;
    *(uint8_t *)(this + 3611) = 0;
    *(uint32_t *)(this + 3612) = 0;
    *(uint32_t *)(this + 3616) = 0;
    *(uint32_t *)(this + 3620) = 1;
    *(uint32_t *)(this + 3624) = -1;
    *(uint32_t *)(this + 3628) = -1;
    *(uint32_t *)(this + 3632) = -1;
    *(uint32_t *)(this + 3636) = -1;
    *(uint32_t *)(this + 3640) = -1;
    *(uint32_t *)(this + 3644) = 8;
    *(uint32_t *)(this + 3672) = 0;
    *(uint8_t *)(this + 3676) = 12;
    *(uint8_t *)(this + 3677) = 0;
    *(uint8_t *)(this + 3678) = 0;
    *(uint32_t *)this = &UnitTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &UnitTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &UnitTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &UnitTypeClass::`vftable';
    AbstractClass::GenerateUniqueID(this + 4);
    *(uint32_t *)(this + 1816) = 32;
    v3 = g_CrateCount;
    if ( g_CrateCount < dword_A83CE8
    || (byte_A83CED || !dword_A83CE8)
    && dword_A83CF4 > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(UnitTypeClass_Array + 8))(
    &UnitTypeClass_Array,
    dword_A83CE8 + dword_A83CF4,
    0) == 0,
    v3 = g_CrateCount,
    !v4) )
    g_CrateCount = v3 + 1;
    *((uint32_t *)g_UnitTypeCount2 + v3) = this;
    v3 = g_CrateCount;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    v5 = -1;
    else
    v6 = g_UnitTypeCount2;
    while ( *v6 != this )
    ++v5;
    ++v6;
    if ( v5 >= v3 )
    goto LABEL_11;
    *(uint32_t *)(this + 3576) = v5;
    *(uint32_t *)(this + 3648) = -1;
    *(uint32_t *)(this + 3652) = -1;
    *(uint32_t *)(this + 3656) = -1;
    *(uint32_t *)(this + 3660) = -1;
    *(uint32_t *)(this + 3664) = -1;
    *(uint32_t *)(this + 3668) = -1;
    *(uint8_t *)(this + 3381) = 0;
    *(uint8_t *)(this + 3382) = 0;
    *(uint8_t *)(this + 3387) = 0;
    *(uint8_t *)(this + 3384) = 1;
    *(uint8_t *)(this + 3479) = 0;
    *(uint8_t *)(this + 3478) = 0;
    *(uint8_t *)(this + 3374) = 1;
    return this;
}

char  UnitTypeClass::_vt32(void *this, __int16 *a2, LPVOID ppv)
{
    void *v4; // eax
    int *v5; // esi
    char v6; // al
    unsigned int v7; // edx
    unsigned __int16 v8; // cx
    unsigned int v9; // eax
    int v10; // ecx
    int v11; // edx
    uint32_t v13[3]; // [esp+4h] [ebp-Ch] BYREF
    v4 = __2_YAPAXI_Z(0x8E8u);
    if ( !v4 )
    return 0;
    v5 = (int *)UnitClass::Construct((int)v4, (int)this, ppv);
    if ( !v5 )
    return 0;
    LOWORD(ppv) = 0;
    v6 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v7 = (unsigned int)ppv;
    LOBYTE(v8) = 0;
    HIBYTE(v8) = v6;
    BYTE1(v7) = 0;
    v13[2] = 0;
    v9 = v7 | v8;
    v10 = (a2[1] << 8) + 128;
    v13[0] = (*a2 << 8) + 128;
    v11 = *v5;
    v13[1] = v10;
    return (*(int (__thiscall **)(int *, uint32_t *, uint32_t))(v11 + 216))(v5, v13, (unsigned __int8)(((v9 >> 7) + 1) >> 1));
}

int  UnitTypeClass::_vt35(void *this, LPVOID ppv)
{
    void *v3; // eax
    v3 = __2_YAPAXI_Z(0x8E8u);
    if ( v3 )
    return UnitClass::Construct((int)v3, (int)this, ppv);
    else
    return 0;
}

int * UnitTypeClass::_vt30(uint32_t *this, int *a2)
{
    int v2; // eax
    int v3; // ecx
    v2 = *(this + 123) - *(this + 123) / 4;
    v3 = v2;
    if ( v2 >= 60 )
    v3 = 60;
    v2 = 60;
    *a2 = v3;
    a2[1] = v3;
    a2[2] = v2;
    return a2;
}

uint32_t *__stdcall UnitTypeClass::_vt31(uint32_t *a1)
{
    int v1; // esi
    v1 = 2 * dword_B1D138;
    *a1 = 256;
    a1[1] = 256;
    a1[2] = v1;
    return a1;
}

char __userpurge UnitTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    unsigned __int8 *v4; // ebp
    char Bool_Overwrite; // al
    char v6; // al
    char v7; // cl
    int v8; // eax
    char v9; // cl
    char v10; // al
    char v11; // al
    char v12; // cl
    uint32_t *Point3D_Overwrite; // eax
    int v14; // eax
    char v15; // al
    char Int_Overwrite; // al
    char v17; // cl
    char v18; // al
    char v19; // al
    char v20; // cl
    char v21; // al
    int v22; // eax
    int v23; // eax
    int v24; // eax
    int v25; // ecx
    int v26; // ecx
    int v27; // ecx
    int v28; // ecx
    int v29; // eax
    int v30; // eax
    int v31; // ecx
    int v32; // eax
    bool v33; // cc
    int v34; // esi
    int v35; // edi
    int v36; // eax
    int v37; // edi
    int v38; // eax
    int v39; // edi
    int v40; // eax
    int v41; // edi
    int v42; // eax
    int v43; // edi
    int v44; // eax
    int v45; // edi
    int v46; // eax
    int v47; // edi
    int v48; // eax
    int v49; // edi
    int v50; // eax
    int v51; // edi
    int v52; // eax
    int v53; // edi
    int v54; // eax
    int v55; // edi
    int v56; // eax
    int v57; // edi
    int v58; // eax
    int v59; // edi
    int v60; // eax
    int v61; // edi
    int v62; // eax
    int v63; // edi
    int v64; // eax
    int v65; // edi
    int v66; // eax
    int v67; // edi
    int v68; // eax
    char v70; // [esp-Ch] [ebp-154h]
    char v71; // [esp-Ch] [ebp-154h]
    char v72; // [esp-Ch] [ebp-154h]
    int v73; // [esp-Ch] [ebp-154h]
    int v74; // [esp-Ch] [ebp-154h]
    char v75; // [esp-Ch] [ebp-154h]
    int v76; // [esp-Ch] [ebp-154h]
    int v77; // [esp-Ch] [ebp-154h]
    uint32_t *v78; // [esp+8h] [ebp-140h]
    uint32_t *v79; // [esp+8h] [ebp-140h]
    int v80; // [esp+Ch] [ebp-13Ch]
    char Buffer[20]; // [esp+14h] [ebp-134h] BYREF
    char Source[28]; // [esp+28h] [ebp-120h] BYREF
    char v84[260]; // [esp+44h] [ebp-104h] BYREF
    INIClass::ResetSection(a3);
    if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) )
    return 0;
    v4 = (unsigned __int8 *)(a1 + 36);
    *(uint8_t *)(a1 + 3597) = INIClass::ReadBool_Overwrite(a1 + 36, aCrategoodie, *(uint8_t *)(a1 + 3597));
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aDeploytofire, *(uint8_t *)(a1 + 3602));
    v70 = *(uint8_t *)(a1 + 3603);
    *(uint8_t *)(a1 + 3602) = Bool_Overwrite;
    *(uint8_t *)(a1 + 3603) = INIClass::ReadBool_Overwrite(a1 + 36, aIssimpledeploy, v70);
    v6 = INIClass::ReadBool_Overwrite(a1 + 36, aHarvester, *(uint8_t *)(a1 + 3598));
    v7 = *(uint8_t *)(a1 + 3599);
    *(uint8_t *)(a1 + 3598) = v6;
    *(uint8_t *)(a1 + 3599) = INIClass::ReadBool_Overwrite(a1 + 36, aWeeder, v7);
    if ( *(uint32_t *)(a1 + 1660) == -1 )
    *(uint32_t *)(a1 + 1660) = 2 - (*(uint8_t *)(a1 + 3368) != 0);
    v8 = ObjectTypeClass::loadTypeMember_476FC0(a1 + 36, aSpeedtype, *(uint32_t *)(a1 + 1660));
    v9 = *(uint8_t *)(a1 + 3604);
    *(uint32_t *)(a1 + 1660) = v8;
    v10 = INIClass::ReadBool_Overwrite(a1 + 36, aIstilter, v9);
    v71 = *(uint8_t *)(a1 + 3610);
    *(uint8_t *)(a1 + 3604) = v10;
    v11 = INIClass::ReadBool_Overwrite(a1 + 36, aCarriescrate, v71);
    v12 = *(uint8_t *)(a1 + 3233);
    *(uint8_t *)(a1 + 3610) = v11;
    v72 = *(uint8_t *)(a1 + 3606);
    *(uint8_t *)(a1 + 3601) = v12 == 0;
    *(uint8_t *)(a1 + 3606) = INIClass::ReadBool_Overwrite(a1 + 36, aToobigtofitund, v72);
    Point3D_Overwrite = (uint32_t *)INIClass::ReadPoint3D_Overwrite(Buffer, a1 + 36, aHalfdamagesmok_1, a1 + 3584);
    *(uint32_t *)(a1 + 3584) = *Point3D_Overwrite;
    *(uint32_t *)(a1 + 3588) = Point3D_Overwrite[1];
    v14 = Point3D_Overwrite[2];
    *(uint32_t *)(a1 + 920) = 15;
    *(uint32_t *)(a1 + 3592) = v14;
    if ( *(uint8_t *)(a1 + 3598) || *(uint8_t *)(a1 + 3599) )
    *(uint32_t *)(a1 + 920) = 10;
    v15 = INIClass::ReadBool_Overwrite(a1 + 504, aUseturretshado, *(uint8_t *)(a1 + 3605));
    v73 = *(char *)(a1 + 3676);
    *(uint8_t *)(a1 + 3605) = v15;
    *(uint8_t *)(a1 + 3676) = INIClass::ReadInt_Overwrite(a1 + 504, aWalkframes, v73);
    Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 504, aFiringframes, *(char *)(a1 + 3677));
    v17 = *(uint8_t *)(a1 + 3596);
    *(uint8_t *)(a1 + 3677) = Int_Overwrite;
    v18 = INIClass::ReadBool_Overwrite(a1 + 36, aPassive, v17);
    v74 = *(uint32_t *)(a1 + 3580);
    *(uint8_t *)(a1 + 3596) = v18;
    *(uint32_t *)(a1 + 3580) = OverlayTypeClass::ReadINIString(a1 + 36, aMovementrestri, v74);
    v19 = INIClass::ReadBool_Overwrite(a1 + 36, aCanbeach, *(uint8_t *)(a1 + 3607));
    v20 = *(uint8_t *)(a1 + 3608);
    *(uint8_t *)(a1 + 3607) = v19;
    v21 = INIClass::ReadBool_Overwrite(a1 + 36, aSmallvisceroid, v20);
    v75 = *(uint8_t *)(a1 + 3609);
    *(uint8_t *)(a1 + 3608) = v21;
    *(uint8_t *)(a1 + 3609) = INIClass::ReadBool_Overwrite(a1 + 36, aLargevisceroid, v75);
    *(uint8_t *)(a1 + 3611) = INIClass::ReadBool_Overwrite(a1 + 36, aNonvehicle, *(uint8_t *)(a1 + 3611));
    if ( *(char *)(a1 + 3677) > 0 )
    *(uint32_t *)(a1 + 3612) = 1;
    v22 = INIClass::ReadInt_Overwrite(a1 + 504, aStandingframes, *(uint32_t *)(a1 + 3612));
    v76 = *(uint32_t *)(a1 + 3616);
    *(uint32_t *)(a1 + 3612) = v22;
    *(uint32_t *)(a1 + 3616) = INIClass::ReadInt_Overwrite(a1 + 504, aDeathframes, v76);
    v23 = INIClass::ReadInt_Overwrite(a1 + 504, aDeathframerate, *(uint32_t *)(a1 + 3620));
    *(uint32_t *)(a1 + 3620) = v23;
    if ( v23 < 1 )
    *(uint32_t *)(a1 + 3620) = 1;
    if ( !*(uint8_t *)(a1 + 3677) && !*(uint8_t *)(a1 + 3233) )
    *(uint32_t *)(a1 + 3644) = 1;
    v24 = INIClass::ReadInt_Overwrite(a1 + 504, aFacings, *(uint32_t *)(a1 + 3644));
    v25 = *(uint32_t *)(a1 + 3628);
    *(uint32_t *)(a1 + 3644) = v24;
    if ( v25 == -1 )
    *(uint32_t *)(a1 + 3628) = 0;
    if ( *(uint32_t *)(a1 + 3624) == -1 )
    if ( *(uint32_t *)(a1 + 3612) )
    v26 = v24 * *(char *)(a1 + 3676);
    else
    v26 = *(uint32_t *)(a1 + 3628);
    *(uint32_t *)(a1 + 3624) = v26;
    if ( *(uint32_t *)(a1 + 3632) == -1 )
    if ( *(uint8_t *)(a1 + 3677) )
    v27 = v24 * (*(uint32_t *)(a1 + 3612) + *(char *)(a1 + 3676));
    else
    v27 = *(uint32_t *)(a1 + 3624);
    *(uint32_t *)(a1 + 3632) = v27;
    if ( *(uint32_t *)(a1 + 3636) == -1 )
    if ( *(uint32_t *)(a1 + 3616) )
    v28 = v24 * (*(char *)(a1 + 3677) + *(char *)(a1 + 3676) + 1);
    else
    v28 = -1;
    v29 = *(uint32_t *)(a1 + 3616);
    *(uint32_t *)(a1 + 3636) = v28;
    *(uint32_t *)(a1 + 3640) = v29 + v28;
    *(uint32_t *)(a1 + 3624) = INIClass::ReadInt_Overwrite(a1 + 504, aStartstandfram, *(uint32_t *)(a1 + 3624));
    v30 = INIClass::ReadInt_Overwrite(a1 + 504, aStartwalkframe, *(uint32_t *)(a1 + 3628));
    v31 = *(uint32_t *)(a1 + 3632);
    *(uint32_t *)(a1 + 3628) = v30;
    v32 = INIClass::ReadInt_Overwrite(a1 + 504, aStartfiringfra, v31);
    v77 = *(uint32_t *)(a1 + 3636);
    *(uint32_t *)(a1 + 3632) = v32;
    *(uint32_t *)(a1 + 3636) = INIClass::ReadInt_Overwrite(a1 + 504, aStartdeathfram, v77);
    *(uint32_t *)(a1 + 3640) = INIClass::ReadInt_Overwrite(a1 + 504, aMaxdeathcounte, *(uint32_t *)(a1 + 3640));
    v80 = 0;
    v78 = (uint32_t *)(a1 + 3648);
    do
    sprintf(Buffer, "FiringSyncFrame%d", v80);
    *v78 = INIClass::ReadInt_Overwrite(a1 + 504, Buffer, *v78);
    v33 = ++v80 < 2;
    ++v78;
    while ( v33 );
    v34 = 0;
    v79 = (uint32_t *)(a1 + 3656);
    do
    sprintf(Buffer, "BurstDelay%d", v34++);
    *v79 = INIClass::ReadInt_Overwrite(a1 + 36, Buffer, *v79);
    ++v79;
    while ( v34 < 4 );
    strcpy(Source, (const char *)(a1 + 3678));
    INIClass::GetString(a3, v4, (unsigned __int8 *)aAltimage, Source, (char *)(a1 + 3678), 25);
    _makepath(v84, 0, 0, (const char *)(a1 + 3678), Ext);
    *(uint32_t *)(a1 + 3672) = SearchMIXFile(v84, 0);
    if ( (unsigned __int8)AbstractTypeClass::NameEquals(aFv) )
    v35 = INIClass::ReadInt_Overwrite(v4, aNormalturretin, 0);
    v36 = INIClass::ReadInt_Overwrite(v4, aNormalturretwe, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v35, v36);
    v37 = INIClass::ReadInt_Overwrite(v4, aRepairturretin, 1);
    v38 = INIClass::ReadInt_Overwrite(v4, aRepairturretwe, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v37, v38);
    v39 = INIClass::ReadInt_Overwrite(v4, aMachinegunturr, 2);
    v40 = INIClass::ReadInt_Overwrite(v4, aMachinegunturr_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v39, v40);
    v41 = INIClass::ReadInt_Overwrite(v4, aFlakturretinde, 3);
    v42 = INIClass::ReadInt_Overwrite(v4, aFlakturretweap, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v41, v42);
    v43 = INIClass::ReadInt_Overwrite(v4, aPistolturretin, 0);
    v44 = INIClass::ReadInt_Overwrite(v4, aPistolturretwe, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v43, v44);
    v45 = INIClass::ReadInt_Overwrite(v4, aSniperturretin, 0);
    v46 = INIClass::ReadInt_Overwrite(v4, aSniperturretwe, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v45, v46);
    v47 = INIClass::ReadInt_Overwrite(v4, aShockturretind, 0);
    v48 = INIClass::ReadInt_Overwrite(v4, aShockturretwea, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v47, v48);
    v49 = INIClass::ReadInt_Overwrite(v4, aExplodeturreti, 0);
    v50 = INIClass::ReadInt_Overwrite(v4, aExplodeturretw, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v49, v50);
    v51 = INIClass::ReadInt_Overwrite(v4, aBrainblastturr, 0);
    v52 = INIClass::ReadInt_Overwrite(v4, aBrainblastturr_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v51, v52);
    v53 = INIClass::ReadInt_Overwrite(v4, aRadcannonturre, 0);
    v54 = INIClass::ReadInt_Overwrite(v4, aRadcannonturre_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v53, v54);
    v55 = INIClass::ReadInt_Overwrite(v4, aChronoturretin, 0);
    v56 = INIClass::ReadInt_Overwrite(v4, aChronoturretwe, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v55, v56);
    v57 = INIClass::ReadInt_Overwrite(v4, aTerroristexplo, 0);
    v58 = INIClass::ReadInt_Overwrite(v4, aTerroristexplo_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v57, v58);
    v59 = INIClass::ReadInt_Overwrite(v4, aCowturretindex, 0);
    v60 = INIClass::ReadInt_Overwrite(v4, aCowturretweapo, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v59, v60);
    v61 = INIClass::ReadInt_Overwrite(v4, aInitiateturret, 0);
    v62 = INIClass::ReadInt_Overwrite(v4, aInitiateturret_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v61, v62);
    v63 = INIClass::ReadInt_Overwrite(v4, aVirusturretind, 0);
    v64 = INIClass::ReadInt_Overwrite(v4, aVirusturretwea, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v63, v64);
    v65 = INIClass::ReadInt_Overwrite(v4, aYuriprimeturre, 0);
    v66 = INIClass::ReadInt_Overwrite(v4, aYuriprimeturre_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v65, v66);
    v67 = INIClass::ReadInt_Overwrite(v4, aGuardianturret, 0);
    v68 = INIClass::ReadInt_Overwrite(v4, aGuardianturret_0, -1);
    BuildingClass::SetSlot((uint32_t *)a1, v67, v68);
    return 1;
}

uint32_t *__stdcall UnitTypeClass::_vt27(uint32_t *a1, int *a2)
{
    int GroundHeight; // eax
    int v3; // ecx
    int v5; // [esp+0h] [ebp-Ch] BYREF
    int v6; // [esp+4h] [ebp-8h]
    int v7; // [esp+8h] [ebp-4h]
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v3;
    return a1;
}

int UnitTypeClass::_vt45()
{
    return RulesClass_Instance[1].DominatorCaptureRange;
}

int __stdcall UnitTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -591576342;
    a2[1] = 298976582;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int  UnitTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 3580));
    LOBYTE(v3) = *(uint8_t *)(this + 3596);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 3597);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 3598);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 3599);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 3600);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 3601);
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 3604);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 3603);
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 3605);
    return Power::FlagProcess(a2, v11);
}

int __stdcall UnitTypeClass::_vt05(int a1, int a2)
{
    int result; // eax
    char v3; // [esp+7h] [ebp-105h] BYREF
    char Buffer[260]; // [esp+8h] [ebp-104h] BYREF
    result = TechnoTypeClass::SaveLoad_Prefix(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    TechnoTypeClass::Construct(a1, (int)&v3);
    *(uint32_t *)a1 = &UnitTypeClass::`vftable';
    *(uint32_t *)(a1 + 4) = &UnitTypeClass::`vftable';
    *(uint32_t *)(a1 + 8) = &UnitTypeClass::`vftable';
    *(uint32_t *)(a1 + 12) = &UnitTypeClass::`vftable';
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    if ( *(uint32_t *)(a1 + 3672) )
    _makepath(Buffer, 0, 0, (const char *)(a1 + 3678), Ext);
    *(uint32_t *)(a1 + 3672) = SearchMIXFile(Buffer, 0);
    return 0;
    return result;
}

int UnitTypeClass::_vt12()
{
    return 3704;
}

int UnitTypeClass::_vt11()
{
    return 40;
}

int  UnitTypeClass::_vt16(uint32_t *this)
{
    return *(this + 894);
}

void ** UnitTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &UnitTypeClass::`vftable';
    *(Block + 1) = &UnitTypeClass::`vftable';
    *(Block + 2) = &UnitTypeClass::`vftable';
    *(Block + 3) = &UnitTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(UnitTypeClass_Array + 16))(&UnitTypeClass_Array, &v5);
    if ( v3 != -1 && v3 < g_CrateCount && v3 < --g_CrateCount )
    do
    ++v3;
    *((uint32_t *)g_UnitTypeCount2 + v3 - 1) = *((uint32_t *)g_UnitTypeCount2 + v3);
    while ( v3 < g_CrateCount );
    TechnoTypeClass::DTOR((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

