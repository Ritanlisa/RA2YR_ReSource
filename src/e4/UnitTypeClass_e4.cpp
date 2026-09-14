// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6B4DD0
char UnitTypeClass::ReadINIEntry()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6B4DD0(char *this)
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
  INIClass::ClearSection((int)this, (int)MEMORY[0x81732C], 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = i; /*0x6b4df6*/
      v8[1] = v1; /*0x6b4e01*/
      v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v8); /*0x6b4e0b*/
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((_BYTE *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((_DWORD *)MEMORY[0xA8EC1C] + v4); /*0x6b4e29*/
        sprintf(Buffer, MEMORY[0x817F6C], v7); /*0x6b4e37*/
        sprintf(Source, MEMORY[0x83FFFC], (const char *)(v5 + 36), i, v1, *((unsigned __int8 *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (unsigned __int8 *)MEMORY[0x81732C], Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < 512 ); /*0x6b4e8e*/
  return v4; /*0x6b4e94*/
}
}

// 0x7470D0
int UnitTypeClass::UnitTypeClass(INIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UnitTypeClass::UnitTypeClass(int this, INIClass *aP1)
{
  HouseClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, -1); /*0x7470de*/
  this->ArrayIndex = -1; /*0x7470e3*/
  this->MovementRestrictedTo = -1; /*0x7470eb*/
  this->HalfDamageSmokeLocation = 0; /*0x7470f1*/
  *(_DWORD *)(this + 3588) = 0; /*0x7470f7*/
  *(_DWORD *)(this + 3592) = 0; /*0x7470fd*/
  this->Passive = 0; /*0x747103*/
  this->CrateGoodie = 0; /*0x747109*/
  this->Harvester = 0; /*0x74710f*/
  this->Weeder = 0; /*0x747115*/
  this->unknown_E10 = 0; /*0x74711b*/
  this->HasTurret = 0; /*0x747121*/
  this->DeployToFire = 0; /*0x747127*/
  this->IsSimpleDeployer = 0; /*0x74712d*/
  this->IsTilter = 1; /*0x747136*/
  this->UseTurretShadow = 0; /*0x74713d*/
  this->TooBigToFitUnderBridge = 0; /*0x747143*/
  this->CanBeach = 0; /*0x747149*/
  this->SmallVisceroid = 0; /*0x74714f*/
  this->LargeVisceroid = 0; /*0x747155*/
  this->CarriesCrate = 0; /*0x74715b*/
  this->NonVehicle = 0; /*0x747161*/
  this->StandingFrames = 0; /*0x747167*/
  this->DeathFrames = 0; /*0x74716d*/
  this->DeathFrameRate = 1; /*0x747173*/
  this->StartStandFrame = -1; /*0x74717d*/
  this->StartWalkFrame = -1; /*0x747183*/
  this->StartFiringFrame = -1; /*0x747189*/
  this->StartDeathFrame = -1; /*0x74718f*/
  this->MaxDeathCounter = -1; /*0x747195*/
  this->Facings = 8; /*0x74719b*/
  this->AltImage = 0; /*0x7471a5*/
  this->WalkFrames = 12; /*0x7471ab*/
  this->FiringFrames = 0; /*0x7471b2*/
  *(_BYTE *)(this + 3678) = 0; /*0x7471b8*/
  *(_DWORD *)this = &UnitTypeClass::`vftable'; /*0x7471bf*/
  this->vtable1 = &UnitTypeClass::`vftable'; /*0x7471c5*/
  this->vtable2 = &UnitTypeClass::`vftable'; /*0x7471cb*/
  this->vtable3 = &vt_UnitTypeClass; /*0x7471d2*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x7471d9*/
  this->RotCount = 32; /*0x7471de*/
  v3 = (HouseClass *)g_CrateCount; /*0x7471e8*/
  if ( (int)g_CrateCount < dword_A83CE8 /*0x747226*/
    || (byte_A83CED || !dword_A83CE8)
    && dword_A83CF4 > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))UnitTypeClass_Array->field_8)(
               &UnitTypeClass_Array,
               dword_A83CE8 + dword_A83CF4,
               0) == 0,
        v3 = (HouseClass *)g_CrateCount,
        !v4) )
  {
    g_CrateCount = (AbstractClass *)&v3->__pad_0[1]; /*0x74722b*/
    *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * (_DWORD)v3] = this; /*0x747235*/
    v3 = (HouseClass *)g_CrateCount; /*0x747238*/
  }
  v5 = 0; /*0x74723d*/
  if ( (int)v3 <= 0 ) /*0x747241*/
  {
LABEL_11:
    v5 = -1; /*0x747255*/
  }
  else
  {
    v6 = g_UnitTypeCount2; /*0x747243*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x74724b*/
    {
      ++v5; /*0x74724d*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x74724e*/
      if ( v5 >= (int)v3 ) /*0x747253*/
        goto LABEL_11; /*0x747253*/
    }
  }
  this->ArrayIndex = v5; /*0x747257*/
  this->FiringSyncFrame0 = -1; /*0x74725f*/
  this->FiringSyncFrame1 = -1; /*0x747267*/
  this->BurstDelay0 = -1; /*0x74726d*/
  this->BurstDelay1 = -1; /*0x747273*/
  this->BurstDelay2 = -1; /*0x747279*/
  this->BurstDelay3 = -1; /*0x74727f*/
  *(_BYTE *)(this + 3381) = 0; /*0x747285*/
  *(_BYTE *)(this + 3382) = 0; /*0x74728b*/
  *(_BYTE *)(this + 3387) = 0; /*0x747291*/
  *(_BYTE *)(this + 3384) = 1; /*0x747297*/
  *(_BYTE *)(this + 3479) = 0; /*0x74729e*/
  *(_BYTE *)(this + 3478) = 0; /*0x7472a4*/
  *(_BYTE *)(this + 3374) = 1; /*0x7472aa*/
  return this; /*0x7472b1*/
}
}

// 0x7474B0
namespace gamemd {
int UnitTypeClass_CreateUnit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x747560
namespace gamemd {
int UnitTypeClass_ConstructUnit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x747620
namespace gamemd {
int UnitTypeClass_LoadFromINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  *(_BYTE *)(a1 + 3597) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845E20], *(_BYTE *)(a1 + 3597)); /*0x747665*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845E10], *(_BYTE *)(a1 + 3602)); /*0x74767a*/
  v70 = *(_BYTE *)(a1 + 3603); /*0x747687*/
  *(_BYTE *)(a1 + 3602) = Bool_Overwrite; /*0x74768e*/
  *(_BYTE *)(a1 + 3603) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DFC], v70); /*0x747699*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83D4CC], *(_BYTE *)(a1 + 3598)); /*0x7476ae*/
  v7 = *(_BYTE *)(a1 + 3599); /*0x7476b3*/
  *(_BYTE *)(a1 + 3598) = v6; /*0x7476b9*/
  *(_BYTE *)(a1 + 3599) = INIClass::ReadBool_Overwrite(a1 + 36, stru_81AC50, v7); /*0x7476cd*/
  if ( *(_DWORD *)(a1 + 1660) == -1 ) /*0x7476dc*/
    *(_DWORD *)(a1 + 1660) = 2 - (*(_BYTE *)(a1 + 3368) != 0); /*0x7476eb*/
  v8 = ObjectTypeClass::loadTypeMember_476FC0(a1 + 36, MEMORY[0x844504], *(_DWORD *)(a1 + 1660)); /*0x747700*/
  v9 = *(_BYTE *)(a1 + 3604); /*0x747705*/
  *(_DWORD *)(a1 + 1660) = v8; /*0x74770b*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DF0], v9); /*0x74771a*/
  v71 = *(_BYTE *)(a1 + 3610); /*0x747727*/
  *(_BYTE *)(a1 + 3604) = v10; /*0x74772e*/
  v11 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DE0], v71); /*0x747734*/
  v12 = *(_BYTE *)(a1 + 3233); /*0x747739*/
  *(_BYTE *)(a1 + 3610) = v11; /*0x74773f*/
  v72 = *(_BYTE *)(a1 + 3606); /*0x74774d*/
  *(_BYTE *)(a1 + 3601) = v12 == 0; /*0x747759*/
  *(_BYTE *)(a1 + 3606) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DC8], v72); /*0x747778*/
  Point3D_Overwrite = (_DWORD *)INIClass::ReadPoint3D_Overwrite(Buffer, a1 + 36, MEMORY[0x845DB0], a1 + 3584); /*0x74777e*/
  *(_DWORD *)(a1 + 3584) = *Point3D_Overwrite; /*0x747785*/
  *(_DWORD *)(a1 + 3588) = Point3D_Overwrite[1]; /*0x74778a*/
  v14 = Point3D_Overwrite[2]; /*0x74778d*/
  *(_DWORD *)(a1 + 920) = 15; /*0x747790*/
  *(_DWORD *)(a1 + 3592) = v14; /*0x74779a*/
  if ( *(_BYTE *)(a1 + 3598) || *(_BYTE *)(a1 + 3599) ) /*0x7477a7*/
    *(_DWORD *)(a1 + 920) = 10; /*0x7477b1*/
  v15 = INIClass::ReadBool_Overwrite(a1 + 504, MEMORY[0x845DA0], *(_BYTE *)(a1 + 3605)); /*0x7477d3*/
  v73 = *(char *)(a1 + 3676); /*0x7477df*/
  *(_BYTE *)(a1 + 3605) = v15; /*0x7477eb*/
  *(_BYTE *)(a1 + 3676) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D94], v73); /*0x7477f6*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D84], *(char *)(a1 + 3677)); /*0x74780f*/
  v17 = *(_BYTE *)(a1 + 3596); /*0x747814*/
  *(_BYTE *)(a1 + 3677) = Int_Overwrite; /*0x74781a*/
  v18 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D7C], v17); /*0x747829*/
  v74 = *(_DWORD *)(a1 + 3580); /*0x747836*/
  *(_BYTE *)(a1 + 3596) = v18; /*0x74783d*/
  *(_DWORD *)(a1 + 3580) = OverlayTypeClass::ReadINIString(a1 + 36, MEMORY[0x845D64], v74); /*0x747848*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D58], *(_BYTE *)(a1 + 3607)); /*0x74785d*/
  v20 = *(_BYTE *)(a1 + 3608); /*0x747862*/
  *(_BYTE *)(a1 + 3607) = v19; /*0x747868*/
  v21 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83CC84], v20); /*0x747877*/
  v75 = *(_BYTE *)(a1 + 3609); /*0x747884*/
  *(_BYTE *)(a1 + 3608) = v21; /*0x74788b*/
  *(_BYTE *)(a1 + 3609) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83CC94], v75); /*0x747896*/
  *(_BYTE *)(a1 + 3611) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D4C], *(_BYTE *)(a1 + 3611)); /*0x7478b0*/
  if ( *(char *)(a1 + 3677) > 0 ) /*0x7478be*/
    *(_DWORD *)(a1 + 3612) = 1; /*0x7478c0*/
  v22 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D3C], *(_DWORD *)(a1 + 3612)); /*0x7478dc*/
  v76 = *(_DWORD *)(a1 + 3616); /*0x7478ec*/
  *(_DWORD *)(a1 + 3612) = v22; /*0x7478f3*/
  *(_DWORD *)(a1 + 3616) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D30], v76); /*0x7478fe*/
  v23 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D20], *(_DWORD *)(a1 + 3620)); /*0x747916*/
  *(_DWORD *)(a1 + 3620) = v23; /*0x747920*/
  if ( v23 < 1 ) /*0x747928*/
    *(_DWORD *)(a1 + 3620) = 1; /*0x74792a*/
  if ( !*(_BYTE *)(a1 + 3677) && !*(_BYTE *)(a1 + 3233) ) /*0x74793a*/
    *(_DWORD *)(a1 + 3644) = 1; /*0x747944*/
  v24 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D18], *(_DWORD *)(a1 + 3644)); /*0x74795c*/
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
  *(_DWORD *)(a1 + 3624) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D08], *(_DWORD *)(a1 + 3624)); /*0x747a2e*/
  v30 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CF8], *(_DWORD *)(a1 + 3628)); /*0x747a46*/
  v31 = *(_DWORD *)(a1 + 3632); /*0x747a4b*/
  *(_DWORD *)(a1 + 3628) = v30; /*0x747a51*/
  v32 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CE4], v31); /*0x747a63*/
  v77 = *(_DWORD *)(a1 + 3636); /*0x747a73*/
  *(_DWORD *)(a1 + 3632) = v32; /*0x747a7a*/
  *(_DWORD *)(a1 + 3636) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CD4], v77); /*0x747a85*/
  *(_DWORD *)(a1 + 3640) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CC4], *(_DWORD *)(a1 + 3640)); /*0x747aa8*/
  v80 = 0; /*0x747aae*/
  v78 = (_DWORD *)(a1 + 3648); /*0x747ab6*/
  do /*0x747b01*/
  {
    sprintf(Buffer, MEMORY[0x845CB0], v80); /*0x747ac9*/
    *v78 = INIClass::ReadInt_Overwrite(a1 + 504, Buffer, *v78); /*0x747aec*/
    v33 = ++v80 < 2; /*0x747af6*/
    ++v78; /*0x747afd*/
  }
  while ( v33 ); /*0x747b01*/
  v34 = 0; /*0x747b09*/
  v79 = (_DWORD *)(a1 + 3656); /*0x747b0b*/
  do /*0x747b47*/
  {
    sprintf(Buffer, MEMORY[0x845CA0], v34++); /*0x747b1a*/
    *v79 = INIClass::ReadInt_Overwrite(a1 + 36, Buffer, *v79); /*0x747b3b*/
    ++v79; /*0x747b43*/
  }
  while ( v34 < 4 ); /*0x747b47*/
  strcpy(Source, (const char *)(a1 + 3678)); /*0x747b6f*/
  INIClass::GetString(a3, v4, (unsigned __int8 *)MEMORY[0x845C94], Source, (char *)(a1 + 3678), 25); /*0x747b88*/
  _makepath(v84, 0, 0, (const char *)(a1 + 3678), Ext); /*0x747ba6*/
  *(_DWORD *)(a1 + 3672) = SearchMIXFile(v84, 0); /*0x747bc4*/
  if ( (unsigned __int8)AbstractTypeClass::NameEquals(MEMORY[0x84314C]) ) /*0x747bca*/
  {
    v35 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C80], 0); /*0x747bf0*/
    v36 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C6C], -1); /*0x747bf2*/
    BuildingClass::SetSlot((_DWORD *)a1, v35, v36); /*0x747bfb*/
    v37 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C58], 1); /*0x747c19*/
    v38 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C44], -1); /*0x747c1b*/
    BuildingClass::SetSlot((_DWORD *)a1, v37, v38); /*0x747c24*/
    v39 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C2C], 2); /*0x747c42*/
    v40 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C14], -1); /*0x747c44*/
    BuildingClass::SetSlot((_DWORD *)a1, v39, v40); /*0x747c4d*/
    v41 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C04], 3); /*0x747c6b*/
    v42 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BF0], -1); /*0x747c6d*/
    BuildingClass::SetSlot((_DWORD *)a1, v41, v42); /*0x747c76*/
    v43 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BDC], 0); /*0x747c94*/
    v44 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BC8], -1); /*0x747c96*/
    BuildingClass::SetSlot((_DWORD *)a1, v43, v44); /*0x747c9f*/
    v45 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BB4], 0); /*0x747cb3*/
    v46 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BA0], -1); /*0x747cbf*/
    BuildingClass::SetSlot((_DWORD *)a1, v45, v46); /*0x747cc8*/
    v47 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B8C], 0); /*0x747ce6*/
    v48 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B78], -1); /*0x747ce8*/
    BuildingClass::SetSlot((_DWORD *)a1, v47, v48); /*0x747cf1*/
    v49 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B64], 0); /*0x747d0f*/
    v50 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B50], -1); /*0x747d11*/
    BuildingClass::SetSlot((_DWORD *)a1, v49, v50); /*0x747d1a*/
    v51 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B38], 0); /*0x747d38*/
    v52 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B20], -1); /*0x747d3a*/
    BuildingClass::SetSlot((_DWORD *)a1, v51, v52); /*0x747d43*/
    v53 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B08], 0); /*0x747d61*/
    v54 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AF0], -1); /*0x747d63*/
    BuildingClass::SetSlot((_DWORD *)a1, v53, v54); /*0x747d6c*/
    v55 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845ADC], 0); /*0x747d8a*/
    v56 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AC8], -1); /*0x747d8c*/
    BuildingClass::SetSlot((_DWORD *)a1, v55, v56); /*0x747d95*/
    v57 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AAC], 0); /*0x747db3*/
    v58 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A8C], -1); /*0x747db5*/
    BuildingClass::SetSlot((_DWORD *)a1, v57, v58); /*0x747dbe*/
    v59 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A7C], 0); /*0x747ddc*/
    v60 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A6C], -1); /*0x747dde*/
    BuildingClass::SetSlot((_DWORD *)a1, v59, v60); /*0x747de7*/
    v61 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A58], 0); /*0x747e05*/
    v62 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A40], -1); /*0x747e07*/
    BuildingClass::SetSlot((_DWORD *)a1, v61, v62); /*0x747e10*/
    v63 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A2C], 0); /*0x747e2e*/
    v64 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A18], -1); /*0x747e30*/
    BuildingClass::SetSlot((_DWORD *)a1, v63, v64); /*0x747e39*/
    v65 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A00], 0); /*0x747e57*/
    v66 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459E8], -1); /*0x747e59*/
    BuildingClass::SetSlot((_DWORD *)a1, v65, v66); /*0x747e62*/
    v67 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459D4], 0); /*0x747e80*/
    v68 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459BC], -1); /*0x747e82*/
    BuildingClass::SetSlot((_DWORD *)a1, v67, v68); /*0x747e8b*/
  }
  return 1; /*0x747e92*/
}
}
} // namespace gamemd

// 0x748010
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{
{
    int result;
    char v3;
    char Buffer[260];
    result = TechnoTypeClass::SaveLoad_Prefix(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    TechnoTypeClass::Construct(a1, (int)&v3);
    *(int *)a1 = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 4) = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 8) = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 12) = &vt_UnitTypeClass;
    }
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    if ( *(int *)(a1 + 3672) )
    {
    _makepath(Buffer, 0, 0, (const char *)(a1 + 3678), Ext);
    *(int *)(a1 + 3672) = SearchMIXFile(Buffer, 0);
    }
    return 0;
  }
    return result;
}
}

// 0x748190
UnitTypeClass * UnitTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_UnitTypeClass;
    *(this + 1) = (unsigned int)vt_UnitTypeClass;
    *(this + 2) = (unsigned int)vt_UnitTypeClass;
    *(this + 3) = &vt_UnitTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(UnitTypeClass_Array + 16))(&UnitTypeClass_Array, &v5);
    if ( v3 != -1 && v3 < g_CrateCount && v3 < --g_CrateCount )
  {
    do
    {
    ++v3;
    *((int *)(g_UnitTypeCount2) + v3 - 1) = *((int *)(g_UnitTypeCount2) + v3);
    }
    while ( v3 < g_CrateCount );
  }
    TechnoTypeClass::DTOR((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (UnitTypeClass *)this;
}
}

// 0x74B960
VoxelAnimTypeClass * UnitTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VoxelAnimTypeClass *__thiscall UnitTypeClass::FindOrCreate(ObjectClass *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x74b97c*/
    return 0; /*0x74b9df*/
  v2 = 0; /*0x74b98d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22660] <= 0 ) /*0x74b991*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x308u); /*0x74b9b6*/
    if ( v3 ) /*0x74b9c5*/
      return (VoxelAnimTypeClass *)VoxelAnimTypeClass::Constructor(v3, this); /*0x74b9d1*/
    return 0; /*0x74b9c5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * v2) + 36), this) ) /*0x74b9aa*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22660] ) /*0x74b9b4*/
      goto LABEL_6; /*0x74b9b4*/
  }
  return *(VoxelAnimTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * v2); /*0x74b9cf*/
}
}

// 0x747590
int * UnitTypeClass::GetDimensions(int * a2)
{
{
    int v2;
    int v3;
    v2 = this->MaxDimension - this->MaxDimension / 4;
    v3 = v2;
    if ( v2 >= 60 )
  {
    v3 = 60;
    v2 = 60;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v2;
    return a2;
}
}

// 0x7475D0
unsigned int * UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_B1D138;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// 0x747EB0
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// 0x747F20
int UnitTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}

// 0x747F30
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -591576342;
  a2[1] = 298976582;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x747F70
int UnitTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(this->MovementRestrictedTo);
    LOBYTE(v3) = this->Passive;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->CrateGoodie;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->Harvester;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->Weeder;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->unknown_E10;
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = this->HasTurret;
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->IsTilter;
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = this->IsSimpleDeployer;
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = this->UseTurretShadow;
    return Power::FlagProcess(a2, v11);
}
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
return 3704;
}

// 0x748170
int UnitTypeClass::GetTypeIdentifier()
{
return 40;
}

// 0x748180
int UnitTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}
