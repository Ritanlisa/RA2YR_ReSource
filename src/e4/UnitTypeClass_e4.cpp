// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x6B4DD0
INIClass * * UnitTypeClass::ReadINIEntry()
{
  int v1; // ebp
  int i; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ebx
  int v7; // [esp+10h] [ebp-98h]
  __int16 v8[2]; // [esp+14h] [ebp-94h] BYREF
  char *v9; // [esp+18h] [ebp-90h]
  char Buffer[12]; // [esp+1Ch] [ebp-8Ch] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  v1 = 0; /*0x6b4dde*/
  v9 = this; /*0x6b4de3*/
  INIClass::ClearSection((int)this, (int)aSmudge, 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = i; /*0x6b4df6*/
      v8[1] = v1; /*0x6b4e01*/
      v3 = CellCoord::To_CellObj(&MapClass_Instance, v8); /*0x6b4e0b*/
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((_BYTE *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((_DWORD *)FactoryClass_Array + v4); /*0x6b4e29*/
        sprintf(Buffer, "%d", v7); /*0x6b4e37*/
        sprintf(Source, "%s,%d,%d,%d", (const char *)(v5 + 36), i, v1, *((unsigned __int8 *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (unsigned __int8 *)aSmudge, Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < 512 ); /*0x6b4e8e*/
  return v4; /*0x6b4e94*/
}
// 0x7470D0
U UnitTypeClass::UnitTypeClass(INIClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1, -1); /*0x7470de*/
  *(_DWORD *)(this + 3576) = -1; /*0x7470e3*/
  *(_DWORD *)(this + 3580) = -1; /*0x7470eb*/
  *(_DWORD *)(this + 3584) = 0; /*0x7470f1*/
  *(_DWORD *)(this + 3588) = 0; /*0x7470f7*/
  *(_DWORD *)(this + 3592) = 0; /*0x7470fd*/
  *(_BYTE *)(this + 3596) = 0; /*0x747103*/
  *(_BYTE *)(this + 3597) = 0; /*0x747109*/
  *(_BYTE *)(this + 3598) = 0; /*0x74710f*/
  *(_BYTE *)(this + 3599) = 0; /*0x747115*/
  *(_BYTE *)(this + 3600) = 0; /*0x74711b*/
  *(_BYTE *)(this + 3601) = 0; /*0x747121*/
  *(_BYTE *)(this + 3602) = 0; /*0x747127*/
  *(_BYTE *)(this + 3603) = 0; /*0x74712d*/
  *(_BYTE *)(this + 3604) = 1; /*0x747136*/
  *(_BYTE *)(this + 3605) = 0; /*0x74713d*/
  *(_BYTE *)(this + 3606) = 0; /*0x747143*/
  *(_BYTE *)(this + 3607) = 0; /*0x747149*/
  *(_BYTE *)(this + 3608) = 0; /*0x74714f*/
  *(_BYTE *)(this + 3609) = 0; /*0x747155*/
  *(_BYTE *)(this + 3610) = 0; /*0x74715b*/
  *(_BYTE *)(this + 3611) = 0; /*0x747161*/
  *(_DWORD *)(this + 3612) = 0; /*0x747167*/
  *(_DWORD *)(this + 3616) = 0; /*0x74716d*/
  *(_DWORD *)(this + 3620) = 1; /*0x747173*/
  *(_DWORD *)(this + 3624) = -1; /*0x74717d*/
  *(_DWORD *)(this + 3628) = -1; /*0x747183*/
  *(_DWORD *)(this + 3632) = -1; /*0x747189*/
  *(_DWORD *)(this + 3636) = -1; /*0x74718f*/
  *(_DWORD *)(this + 3640) = -1; /*0x747195*/
  *(_DWORD *)(this + 3644) = 8; /*0x74719b*/
  *(_DWORD *)(this + 3672) = 0; /*0x7471a5*/
  *(_BYTE *)(this + 3676) = 12; /*0x7471ab*/
  *(_BYTE *)(this + 3677) = 0; /*0x7471b2*/
  *(_BYTE *)(this + 3678) = 0; /*0x7471b8*/
  *(_DWORD *)this = &UnitTypeClass::`vftable'; /*0x7471bf*/
  *(_DWORD *)(this + 4) = &UnitTypeClass::`vftable'; /*0x7471c5*/
  *(_DWORD *)(this + 8) = &UnitTypeClass::`vftable'; /*0x7471cb*/
  *(_DWORD *)(this + 12) = &UnitTypeClass::`vftable'; /*0x7471d2*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x7471d9*/
  *(_DWORD *)(this + 1816) = 32; /*0x7471de*/
  v3 = g_CrateCount; /*0x7471e8*/
  if ( g_CrateCount < dword_A83CE8 /*0x747226*/
    || (byte_A83CED || !dword_A83CE8)
    && dword_A83CF4 > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(UnitTypeClass_Array + 8))(
               &UnitTypeClass_Array,
               dword_A83CE8 + dword_A83CF4,
               0) == 0,
        v3 = g_CrateCount,
        !v4) )
  {
    g_CrateCount = v3 + 1; /*0x74722b*/
    *((_DWORD *)g_UnitTypeCount2 + v3) = this; /*0x747235*/
    v3 = g_CrateCount; /*0x747238*/
  }
  v5 = 0; /*0x74723d*/
  if ( v3 <= 0 ) /*0x747241*/
  {
  LABEL_11:
    v5 = -1; /*0x747255*/
  }
  else
  {
    v6 = g_UnitTypeCount2; /*0x747243*/
    while ( *v6 != this ) /*0x74724b*/
    {
      ++v5; /*0x74724d*/
      ++v6; /*0x74724e*/
      if ( v5 >= v3 ) /*0x747253*/
        goto LABEL_11; /*0x747253*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x747257*/
  *(_DWORD *)(this + 3648) = -1; /*0x74725f*/
  *(_DWORD *)(this + 3652) = -1; /*0x747267*/
  *(_DWORD *)(this + 3656) = -1; /*0x74726d*/
  *(_DWORD *)(this + 3660) = -1; /*0x747273*/
  *(_DWORD *)(this + 3664) = -1; /*0x747279*/
  *(_DWORD *)(this + 3668) = -1; /*0x74727f*/
  *(_BYTE *)(this + 3381) = 0; /*0x747285*/
  *(_BYTE *)(this + 3382) = 0; /*0x74728b*/
  *(_BYTE *)(this + 3387) = 0; /*0x747291*/
  *(_BYTE *)(this + 3384) = 1; /*0x747297*/
  *(_BYTE *)(this + 3479) = 0; /*0x74729e*/
  *(_BYTE *)(this + 3478) = 0; /*0x7472a4*/
  *(_BYTE *)(this + 3374) = 1; /*0x7472aa*/
  return this; /*0x7472b1*/
}
// 0x7474B0
namespace gamemd {
void UnitTypeClass_CreateUnit()
{
  void *v4; // eax
  int *v5; // esi
  char v6; // al
  unsigned int v7; // edx
  unsigned __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD v13[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x8E8u); /*0x7474bb*/
  if ( !v4 ) /*0x7474c5*/
    return 0; /*0x7474c5*/
  v5 = (int *)UnitClass::Construct((int)v4, (int)this, ppv); /*0x7474d8*/
  if ( !v5 ) /*0x7474dc*/
    return 0; /*0x747554*/
  LOWORD(ppv) = 0; /*0x7474e4*/
  v6 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134); /*0x7474f1*/
  v7 = (unsigned int)ppv; /*0x7474f6*/
  LOBYTE(v8) = 0; /*0x7474fa*/
  HIBYTE(v8) = v6; /*0x7474fc*/
  BYTE1(v7) = 0; /*0x7474fe*/
  v13[2] = 0; /*0x747503*/
  v9 = v7 | v8; /*0x74750b*/
  v10 = (a2[1] << 8) + 128; /*0x747527*/
  v13[0] = (*a2 << 8) + 128; /*0x74752e*/
  v11 = *v5; /*0x747532*/
  v13[1] = v10; /*0x747534*/
  return (*(int (__thiscall **)(int *, _DWORD *, _DWORD))(v11 + 216))(v5, v13, (unsigned __int8)(((v9 >> 7) + 1) >> 1)); /*0x74754d*/
}
}
// 0x747560
namespace gamemd {
void UnitTypeClass_ConstructUnit()
{
  void *v3; // eax

  v3 = __2_YAPAXI_Z(0x8E8u); /*0x747568*/
  if ( v3 ) /*0x747572*/
    return UnitClass::Construct((int)v3, (int)this, ppv); /*0x74757c*/
  else
    return 0; /*0x747585*/
}
}
// 0x747620
namespace gamemd {
void* UnitTypeClass_LoadFromINI()
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
  _DWORD *Point3D_Overwrite; // eax
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
  _DWORD *v78; // [esp+8h] [ebp-140h]
  _DWORD *v79; // [esp+8h] [ebp-140h]
  int v80; // [esp+Ch] [ebp-13Ch]
  char Buffer[20]; // [esp+14h] [ebp-134h] BYREF
  char Source[28]; // [esp+28h] [ebp-120h] BYREF
  char v84[260]; // [esp+44h] [ebp-104h] BYREF

  INIClass::ResetSection(a3); /*0x747637*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) ) /*0x74763f*/
    return 0; /*0x747ea0*/
  v4 = (unsigned __int8 *)(a1 + 36); /*0x747654*/
  *(_BYTE *)(a1 + 3597) = INIClass::ReadBool_Overwrite(a1 + 36, aCrategoodie, *(_BYTE *)(a1 + 3597)); /*0x747665*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aDeploytofire, *(_BYTE *)(a1 + 3602)); /*0x74767a*/
  v70 = *(_BYTE *)(a1 + 3603); /*0x747687*/
  *(_BYTE *)(a1 + 3602) = Bool_Overwrite; /*0x74768e*/
  *(_BYTE *)(a1 + 3603) = INIClass::ReadBool_Overwrite(a1 + 36, aIssimpledeploy, v70); /*0x747699*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, aHarvester, *(_BYTE *)(a1 + 3598)); /*0x7476ae*/
  v7 = *(_BYTE *)(a1 + 3599); /*0x7476b3*/
  *(_BYTE *)(a1 + 3598) = v6; /*0x7476b9*/
  *(_BYTE *)(a1 + 3599) = INIClass::ReadBool_Overwrite(a1 + 36, aWeeder, v7); /*0x7476cd*/
  if ( *(_DWORD *)(a1 + 1660) == -1 ) /*0x7476dc*/
    *(_DWORD *)(a1 + 1660) = 2 - (*(_BYTE *)(a1 + 3368) != 0); /*0x7476eb*/
  v8 = ObjectTypeClass::loadTypeMember_476FC0(a1 + 36, aSpeedtype, *(_DWORD *)(a1 + 1660)); /*0x747700*/
  v9 = *(_BYTE *)(a1 + 3604); /*0x747705*/
  *(_DWORD *)(a1 + 1660) = v8; /*0x74770b*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, aIstilter, v9); /*0x74771a*/
  v71 = *(_BYTE *)(a1 + 3610); /*0x747727*/
  *(_BYTE *)(a1 + 3604) = v10; /*0x74772e*/
  v11 = INIClass::ReadBool_Overwrite(a1 + 36, aCarriescrate, v71); /*0x747734*/
  v12 = *(_BYTE *)(a1 + 3233); /*0x747739*/
  *(_BYTE *)(a1 + 3610) = v11; /*0x74773f*/
  v72 = *(_BYTE *)(a1 + 3606); /*0x74774d*/
  *(_BYTE *)(a1 + 3601) = v12 == 0; /*0x747759*/
  *(_BYTE *)(a1 + 3606) = INIClass::ReadBool_Overwrite(a1 + 36, aToobigtofitund, v72); /*0x747778*/
  Point3D_Overwrite = (_DWORD *)INIClass::ReadPoint3D_Overwrite(Buffer, a1 + 36, aHalfdamagesmok_1, a1 + 3584); /*0x74777e*/
  *(_DWORD *)(a1 + 3584) = *Point3D_Overwrite; /*0x747785*/
  *(_DWORD *)(a1 + 3588) = Point3D_Overwrite[1]; /*0x74778a*/
  v14 = Point3D_Overwrite[2]; /*0x74778d*/
  *(_DWORD *)(a1 + 920) = 15; /*0x747790*/
  *(_DWORD *)(a1 + 3592) = v14; /*0x74779a*/
  if ( *(_BYTE *)(a1 + 3598) || *(_BYTE *)(a1 + 3599) ) /*0x7477a7*/
    *(_DWORD *)(a1 + 920) = 10; /*0x7477b1*/
  v15 = INIClass::ReadBool_Overwrite(a1 + 504, aUseturretshado, *(_BYTE *)(a1 + 3605)); /*0x7477d3*/
  v73 = *(char *)(a1 + 3676); /*0x7477df*/
  *(_BYTE *)(a1 + 3605) = v15; /*0x7477eb*/
  *(_BYTE *)(a1 + 3676) = INIClass::ReadInt_Overwrite(a1 + 504, aWalkframes, v73); /*0x7477f6*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 504, aFiringframes, *(char *)(a1 + 3677)); /*0x74780f*/
  v17 = *(_BYTE *)(a1 + 3596); /*0x747814*/
  *(_BYTE *)(a1 + 3677) = Int_Overwrite; /*0x74781a*/
  v18 = INIClass::ReadBool_Overwrite(a1 + 36, aPassive, v17); /*0x747829*/
  v74 = *(_DWORD *)(a1 + 3580); /*0x747836*/
  *(_BYTE *)(a1 + 3596) = v18; /*0x74783d*/
  *(_DWORD *)(a1 + 3580) = OverlayTypeClass::ReadINIString(a1 + 36, aMovementrestri, v74); /*0x747848*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, aCanbeach, *(_BYTE *)(a1 + 3607)); /*0x74785d*/
  v20 = *(_BYTE *)(a1 + 3608); /*0x747862*/
  *(_BYTE *)(a1 + 3607) = v19; /*0x747868*/
  v21 = INIClass::ReadBool_Overwrite(a1 + 36, aSmallvisceroid, v20); /*0x747877*/
  v75 = *(_BYTE *)(a1 + 3609); /*0x747884*/
  *(_BYTE *)(a1 + 3608) = v21; /*0x74788b*/
  *(_BYTE *)(a1 + 3609) = INIClass::ReadBool_Overwrite(a1 + 36, aLargevisceroid, v75); /*0x747896*/
  *(_BYTE *)(a1 + 3611) = INIClass::ReadBool_Overwrite(a1 + 36, aNonvehicle, *(_BYTE *)(a1 + 3611)); /*0x7478b0*/
  if ( *(char *)(a1 + 3677) > 0 ) /*0x7478be*/
    *(_DWORD *)(a1 + 3612) = 1; /*0x7478c0*/
  v22 = INIClass::ReadInt_Overwrite(a1 + 504, aStandingframes, *(_DWORD *)(a1 + 3612)); /*0x7478dc*/
  v76 = *(_DWORD *)(a1 + 3616); /*0x7478ec*/
  *(_DWORD *)(a1 + 3612) = v22; /*0x7478f3*/
  *(_DWORD *)(a1 + 3616) = INIClass::ReadInt_Overwrite(a1 + 504, aDeathframes, v76); /*0x7478fe*/
  v23 = INIClass::ReadInt_Overwrite(a1 + 504, aDeathframerate, *(_DWORD *)(a1 + 3620)); /*0x747916*/
  *(_DWORD *)(a1 + 3620) = v23; /*0x747920*/
  if ( v23 < 1 ) /*0x747928*/
    *(_DWORD *)(a1 + 3620) = 1; /*0x74792a*/
  if ( !*(_BYTE *)(a1 + 3677) && !*(_BYTE *)(a1 + 3233) ) /*0x74793a*/
    *(_DWORD *)(a1 + 3644) = 1; /*0x747944*/
  v24 = INIClass::ReadInt_Overwrite(a1 + 504, aFacings, *(_DWORD *)(a1 + 3644)); /*0x74795c*/
  v25 = *(_DWORD *)(a1 + 3628); /*0x747961*/
  *(_DWORD *)(a1 + 3644) = v24; /*0x74796c*/
  if ( v25 == -1 ) /*0x747972*/
    *(_DWORD *)(a1 + 3628) = 0; /*0x747974*/
  if ( *(_DWORD *)(a1 + 3624) == -1 ) /*0x747984*/
  {
    if ( *(_DWORD *)(a1 + 3612) ) /*0x747986*/
      v26 = v24 * *(char *)(a1 + 3676); /*0x74799f*/
    else
      v26 = *(_DWORD *)(a1 + 3628); /*0x747990*/
    *(_DWORD *)(a1 + 3624) = v26; /*0x7479a2*/
  }
  if ( *(_DWORD *)(a1 + 3632) == -1 ) /*0x7479ae*/
  {
    if ( *(_BYTE *)(a1 + 3677) ) /*0x7479b0*/
      v27 = v24 * (*(_DWORD *)(a1 + 3612) + *(char *)(a1 + 3676)); /*0x7479cf*/
    else
      v27 = *(_DWORD *)(a1 + 3624); /*0x7479ba*/
    *(_DWORD *)(a1 + 3632) = v27; /*0x7479d2*/
  }
  if ( *(_DWORD *)(a1 + 3636) == -1 ) /*0x7479de*/
  {
    if ( *(_DWORD *)(a1 + 3616) ) /*0x7479e0*/
      v28 = v24 * (*(char *)(a1 + 3677) + *(char *)(a1 + 3676) + 1); /*0x747a00*/
    else
      v28 = -1; /*0x7479ea*/
    v29 = *(_DWORD *)(a1 + 3616); /*0x747a03*/
    *(_DWORD *)(a1 + 3636) = v28; /*0x747a09*/
    *(_DWORD *)(a1 + 3640) = v29 + v28; /*0x747a11*/
  }
  *(_DWORD *)(a1 + 3624) = INIClass::ReadInt_Overwrite(a1 + 504, aStartstandfram, *(_DWORD *)(a1 + 3624)); /*0x747a2e*/
  v30 = INIClass::ReadInt_Overwrite(a1 + 504, aStartwalkframe, *(_DWORD *)(a1 + 3628)); /*0x747a46*/
  v31 = *(_DWORD *)(a1 + 3632); /*0x747a4b*/
  *(_DWORD *)(a1 + 3628) = v30; /*0x747a51*/
  v32 = INIClass::ReadInt_Overwrite(a1 + 504, aStartfiringfra, v31); /*0x747a63*/
  v77 = *(_DWORD *)(a1 + 3636); /*0x747a73*/
  *(_DWORD *)(a1 + 3632) = v32; /*0x747a7a*/
  *(_DWORD *)(a1 + 3636) = INIClass::ReadInt_Overwrite(a1 + 504, aStartdeathfram, v77); /*0x747a85*/
  *(_DWORD *)(a1 + 3640) = INIClass::ReadInt_Overwrite(a1 + 504, aMaxdeathcounte, *(_DWORD *)(a1 + 3640)); /*0x747aa8*/
  v80 = 0; /*0x747aae*/
  v78 = (_DWORD *)(a1 + 3648); /*0x747ab6*/
  do /*0x747b01*/
  {
    sprintf(Buffer, "FiringSyncFrame%d", v80); /*0x747ac9*/
    *v78 = INIClass::ReadInt_Overwrite(a1 + 504, Buffer, *v78); /*0x747aec*/
    v33 = ++v80 < 2; /*0x747af6*/
    ++v78; /*0x747afd*/
  }
  while ( v33 ); /*0x747b01*/
  v34 = 0; /*0x747b09*/
  v79 = (_DWORD *)(a1 + 3656); /*0x747b0b*/
  do /*0x747b47*/
  {
    sprintf(Buffer, "BurstDelay%d", v34++); /*0x747b1a*/
    *v79 = INIClass::ReadInt_Overwrite(a1 + 36, Buffer, *v79); /*0x747b3b*/
    ++v79; /*0x747b43*/
  }
  while ( v34 < 4 ); /*0x747b47*/
  strcpy(Source, (const char *)(a1 + 3678)); /*0x747b6f*/
  INIClass::GetString(a3, v4, (unsigned __int8 *)aAltimage, Source, (char *)(a1 + 3678), 25); /*0x747b88*/
  _makepath(v84, 0, 0, (const char *)(a1 + 3678), Ext); /*0x747ba6*/
  *(_DWORD *)(a1 + 3672) = SearchMIXFile(v84, 0); /*0x747bc4*/
  if ( (unsigned __int8)AbstractTypeClass::NameEquals(aFv) ) /*0x747bca*/
  {
    v35 = INIClass::ReadInt_Overwrite(v4, aNormalturretin, 0); /*0x747bf0*/
    v36 = INIClass::ReadInt_Overwrite(v4, aNormalturretwe, -1); /*0x747bf2*/
    BuildingClass::SetSlot((_DWORD *)a1, v35, v36); /*0x747bfb*/
    v37 = INIClass::ReadInt_Overwrite(v4, aRepairturretin, 1); /*0x747c19*/
    v38 = INIClass::ReadInt_Overwrite(v4, aRepairturretwe, -1); /*0x747c1b*/
    BuildingClass::SetSlot((_DWORD *)a1, v37, v38); /*0x747c24*/
    v39 = INIClass::ReadInt_Overwrite(v4, aMachinegunturr, 2); /*0x747c42*/
    v40 = INIClass::ReadInt_Overwrite(v4, aMachinegunturr_0, -1); /*0x747c44*/
    BuildingClass::SetSlot((_DWORD *)a1, v39, v40); /*0x747c4d*/
    v41 = INIClass::ReadInt_Overwrite(v4, aFlakturretinde, 3); /*0x747c6b*/
    v42 = INIClass::ReadInt_Overwrite(v4, aFlakturretweap, -1); /*0x747c6d*/
    BuildingClass::SetSlot((_DWORD *)a1, v41, v42); /*0x747c76*/
    v43 = INIClass::ReadInt_Overwrite(v4, aPistolturretin, 0); /*0x747c94*/
    v44 = INIClass::ReadInt_Overwrite(v4, aPistolturretwe, -1); /*0x747c96*/
    BuildingClass::SetSlot((_DWORD *)a1, v43, v44); /*0x747c9f*/
    v45 = INIClass::ReadInt_Overwrite(v4, aSniperturretin, 0); /*0x747cb3*/
    v46 = INIClass::ReadInt_Overwrite(v4, aSniperturretwe, -1); /*0x747cbf*/
    BuildingClass::SetSlot((_DWORD *)a1, v45, v46); /*0x747cc8*/
    v47 = INIClass::ReadInt_Overwrite(v4, aShockturretind, 0); /*0x747ce6*/
    v48 = INIClass::ReadInt_Overwrite(v4, aShockturretwea, -1); /*0x747ce8*/
    BuildingClass::SetSlot((_DWORD *)a1, v47, v48); /*0x747cf1*/
    v49 = INIClass::ReadInt_Overwrite(v4, aExplodeturreti, 0); /*0x747d0f*/
    v50 = INIClass::ReadInt_Overwrite(v4, aExplodeturretw, -1); /*0x747d11*/
    BuildingClass::SetSlot((_DWORD *)a1, v49, v50); /*0x747d1a*/
    v51 = INIClass::ReadInt_Overwrite(v4, aBrainblastturr, 0); /*0x747d38*/
    v52 = INIClass::ReadInt_Overwrite(v4, aBrainblastturr_0, -1); /*0x747d3a*/
    BuildingClass::SetSlot((_DWORD *)a1, v51, v52); /*0x747d43*/
    v53 = INIClass::ReadInt_Overwrite(v4, aRadcannonturre, 0); /*0x747d61*/
    v54 = INIClass::ReadInt_Overwrite(v4, aRadcannonturre_0, -1); /*0x747d63*/
    BuildingClass::SetSlot((_DWORD *)a1, v53, v54); /*0x747d6c*/
    v55 = INIClass::ReadInt_Overwrite(v4, aChronoturretin, 0); /*0x747d8a*/
    v56 = INIClass::ReadInt_Overwrite(v4, aChronoturretwe, -1); /*0x747d8c*/
    BuildingClass::SetSlot((_DWORD *)a1, v55, v56); /*0x747d95*/
    v57 = INIClass::ReadInt_Overwrite(v4, aTerroristexplo, 0); /*0x747db3*/
    v58 = INIClass::ReadInt_Overwrite(v4, aTerroristexplo_0, -1); /*0x747db5*/
    BuildingClass::SetSlot((_DWORD *)a1, v57, v58); /*0x747dbe*/
    v59 = INIClass::ReadInt_Overwrite(v4, aCowturretindex, 0); /*0x747ddc*/
    v60 = INIClass::ReadInt_Overwrite(v4, aCowturretweapo, -1); /*0x747dde*/
    BuildingClass::SetSlot((_DWORD *)a1, v59, v60); /*0x747de7*/
    v61 = INIClass::ReadInt_Overwrite(v4, aInitiateturret, 0); /*0x747e05*/
    v62 = INIClass::ReadInt_Overwrite(v4, aInitiateturret_0, -1); /*0x747e07*/
    BuildingClass::SetSlot((_DWORD *)a1, v61, v62); /*0x747e10*/
    v63 = INIClass::ReadInt_Overwrite(v4, aVirusturretind, 0); /*0x747e2e*/
    v64 = INIClass::ReadInt_Overwrite(v4, aVirusturretwea, -1); /*0x747e30*/
    BuildingClass::SetSlot((_DWORD *)a1, v63, v64); /*0x747e39*/
    v65 = INIClass::ReadInt_Overwrite(v4, aYuriprimeturre, 0); /*0x747e57*/
    v66 = INIClass::ReadInt_Overwrite(v4, aYuriprimeturre_0, -1); /*0x747e59*/
    BuildingClass::SetSlot((_DWORD *)a1, v65, v66); /*0x747e62*/
    v67 = INIClass::ReadInt_Overwrite(v4, aGuardianturret, 0); /*0x747e80*/
    v68 = INIClass::ReadInt_Overwrite(v4, aGuardianturret_0, -1); /*0x747e82*/
    BuildingClass::SetSlot((_DWORD *)a1, v67, v68); /*0x747e8b*/
  }
  return 1; /*0x747e92*/
}
}
// 0x74B960
VoxelAnimTypeClass * * UnitTypeClass::FindOrCreate()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x74b97c*/
    return 0; /*0x74b9df*/
  v2 = 0; /*0x74b98d*/
  if ( g_MultiplayerPool <= 0 ) /*0x74b991*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x308u) ) /*0x74b9bb*/
      return VoxelAnimTypeClass::Constructor(Source); /*0x74b9d1*/
    return 0; /*0x74b9c5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8EB2C + v2) + 36), Source) ) /*0x74b9aa*/
  {
    if ( ++v2 >= g_MultiplayerPool ) /*0x74b9b4*/
      goto LABEL_6; /*0x74b9b4*/
  }
  return *((_DWORD *)dword_A8EB2C + v2); /*0x74b9cf*/
}
// 0x747590
int * UnitTypeClass::GetDimensions(int * a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 123) - *(this + 123) / 4; /*0x7475a3*/
  v3 = v2; /*0x7475a5*/
  if ( v2 >= 60 ) /*0x7475aa*/
  {
    v3 = 60; /*0x7475ac*/
    v2 = 60; /*0x7475b6*/
  }
  *a2 = v3; /*0x7475c2*/
  a2[1] = v3; /*0x7475c4*/
  a2[2] = v2; /*0x7475c7*/
  return a2; /*0x7475cd*/
}
// 0x7475D0
unsigned int * UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{
  int v1; // esi

  v1 = 2 * dword_B1D138; /*0x7475dc*/
  *a1 = 256; /*0x7475e7*/
  a1[1] = 256; /*0x7475e9*/
  a1[2] = v1; /*0x7475ec*/
  return a1; /*0x7475ef*/
}
// 0x747EB0
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x747eb9*/
  v6 = a2[1]; /*0x747eca*/
  v7 = a2[2]; /*0x747ed1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x747ed5*/
  v3 = v7; /*0x747eda*/
  if ( v7 < GroundHeight ) /*0x747ee0*/
    v3 = Cell::GetGroundHeight(&v5); /*0x747ef1*/
  *a1 = v5; /*0x747efe*/
  a1[1] = v6; /*0x747f04*/
  a1[2] = v3; /*0x747f08*/
  return a1; /*0x747f0b*/
}
// 0x747F20
int UnitTypeClass::GetGameplayValue()
{
  return g_RulesClass_Instance[1].DominatorCaptureRange; /*0x747f2b*/
}
// 0x747F30
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x747f36*/
    return -2147467261; /*0x747f38*/
  *a2 = -591576342; /*0x747f46*/
  a2[1] = 298976582; /*0x747f4e*/
  a2[2] = 1610654892; /*0x747f57*/
  a2[3] = -1252326136; /*0x747f60*/
  return 0; /*0x747f3d*/
}
// 0x747F70
int UnitTypeClass::PowerDrainUpdate(int * a2)
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

  BuildingTypeClass::ProcessPower(this, a2); /*0x747f79*/
  Power::TimerProcess(*(_DWORD *)(this + 3580)); /*0x747f87*/
  LOBYTE(v3) = *(_BYTE *)(this + 3596); /*0x747f8c*/
  Power::FlagProcess(a2, v3); /*0x747f95*/
  LOBYTE(v4) = *(_BYTE *)(this + 3597); /*0x747f9a*/
  v5 = Power::FlagProcess(a2, v4); /*0x747fa3*/
  LOBYTE(v5) = *(_BYTE *)(this + 3598); /*0x747fa8*/
  Power::FlagProcess(a2, v5); /*0x747fb1*/
  LOBYTE(v6) = *(_BYTE *)(this + 3599); /*0x747fb6*/
  Power::FlagProcess(a2, v6); /*0x747fbf*/
  LOBYTE(v7) = *(_BYTE *)(this + 3600); /*0x747fc4*/
  v8 = Power::FlagProcess(a2, v7); /*0x747fcd*/
  LOBYTE(v8) = *(_BYTE *)(this + 3601); /*0x747fd2*/
  Power::FlagProcess(a2, v8); /*0x747fdb*/
  LOBYTE(v9) = *(_BYTE *)(this + 3604); /*0x747fe0*/
  Power::FlagProcess(a2, v9); /*0x747fe9*/
  LOBYTE(v10) = *(_BYTE *)(this + 3603); /*0x747fee*/
  v11 = Power::FlagProcess(a2, v10); /*0x747ff7*/
  LOBYTE(v11) = *(_BYTE *)(this + 3605); /*0x747ffc*/
  return Power::FlagProcess(a2, v11); /*0x74800a*/
}
// 0x748010
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-105h] BYREF
  char Buffer[260]; // [esp+8h] [ebp-104h] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix(a1, a2); /*0x748024*/
  if ( result >= 0 ) /*0x74802b*/
  {
    if ( a1 ) /*0x74802f*/
    {
      TechnoTypeClass::Construct(a1, (int)&v3); /*0x748038*/
      *(_DWORD *)a1 = &UnitTypeClass::`vftable'; /*0x74803d*/
      *(_DWORD *)(a1 + 4) = &UnitTypeClass::`vftable'; /*0x748043*/
      *(_DWORD *)(a1 + 8) = &UnitTypeClass::`vftable'; /*0x74804a*/
      *(_DWORD *)(a1 + 12) = &UnitTypeClass::`vftable'; /*0x748051*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x74805a*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x748061*/
    if ( *(_DWORD *)(a1 + 3672) ) /*0x748066*/
    {
      _makepath(Buffer, 0, 0, (const char *)(a1 + 3678), Ext); /*0x748085*/
      *(_DWORD *)(a1 + 3672) = SearchMIXFile(Buffer, 0); /*0x748098*/
    }
    return 0; /*0x74809e*/
  }
  return result; /*0x7480a0*/
}
// 0x7480B0
int UnitTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x748160
int UnitTypeClass::GetObjectSize()
{
  return 3704; /*0x748165*/
}
// 0x748170
int UnitTypeClass::GetTypeIdentifier()
{
  return 40; /*0x748175*/
}
// 0x748180
int UnitTypeClass::GetAuxField()
{
  return *(this + 894); /*0x748186*/
}
// 0x748190
UnitTypeClass * UnitTypeClass::ddtor(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &UnitTypeClass::`vftable'; /*0x748196*/
  *(this + 1) = &UnitTypeClass::`vftable'; /*0x74819c*/
  *(this + 2) = &UnitTypeClass::`vftable'; /*0x7481a3*/
  *(this + 3) = &UnitTypeClass::`vftable'; /*0x7481aa*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x7481b1*/
  v5 = this; /*0x7481c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(UnitTypeClass_Array + 16))(&UnitTypeClass_Array, &v5); /*0x7481ca*/
  if ( v3 != -1 && v3 < g_CrateCount && v3 < --g_CrateCount ) /*0x7481e5*/
  {
    do /*0x7481fd*/
    {
      ++v3; /*0x7481ed*/
      *((_DWORD *)g_UnitTypeCount2 + v3 - 1) = *((_DWORD *)g_UnitTypeCount2 + v3); /*0x7481f1*/
    }
    while ( v3 < g_CrateCount ); /*0x7481fd*/
  }
  TechnoTypeClass::DTOR((int)this); /*0x748201*/
  if ( (a2 & 1) != 0 ) /*0x74820b*/
    __3_YAXPAX_Z(this); /*0x74820e*/
  return this; /*0x748218*/
}