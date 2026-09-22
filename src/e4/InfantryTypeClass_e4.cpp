// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x5236A0
int InfantryTypeClass::Constructor(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  InfantryTypeClass *v3; // eax
  CCINIClass *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, 0); /*0x5236ae*/
  this->ArrayIndex = -1; /*0x5236b3*/
  this->Pip = 1; /*0x5236bd*/
  this->OccupyPip = 7; /*0x5236c7*/
  this->Sequence = 0; /*0x5236d1*/
  this->FireUp = 0; /*0x5236d7*/
  this->FireProne = 0; /*0x5236e3*/
  this->SecondaryFire = 0; /*0x5236ea*/
  this->SecondaryProne = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3664), 0, 0); /*0x5236f9*/
  this->DeadBodies.Count = 0; /*0x523703*/
  this->DeadBodies.CapacityIncrement = 10; /*0x523706*/
  this->DeadBodies = &vt_TypeList_AnimTypeClass_const; /*0x523709*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3692), 0, 0); /*0x523719*/
  this->DeathAnims.CapacityIncrement = 10; /*0x52371e*/
  this->DeathAnims.Count = 0; /*0x523721*/
  this->DeathAnims = &vt_TypeList_AnimTypeClass_const; /*0x523724*/
  VectorClass::Construct((_DWORD *)(this + 3720), 0, 0); /*0x523734*/
  this->VoiceComment.CapacityIncrement = 10; /*0x523739*/
  this->VoiceComment.Count = 0; /*0x52373c*/
  this->VoiceComment = &vt_TypeList_int; /*0x52373f*/
  this->EnterWaterSound = -1; /*0x523748*/
  this->LeaveWaterSound = -1; /*0x52374e*/
  this->Cyborg = 0; /*0x523754*/
  this->NotHuman = 0; /*0x52375a*/
  this->Ivan = 0; /*0x523760*/
  this->DirectionDistance = 0; /*0x523766*/
  this->Occupier = 0; /*0x52376c*/
  this->Assaulter = 0; /*0x523772*/
  this->HarvestRate = 1; /*0x523778*/
  this->Fearless = 0; /*0x523782*/
  this->Crawls = 1; /*0x523788*/
  this->Infiltrate = 0; /*0x52378f*/
  this->Fraidycat = 0; /*0x523795*/
  this->TiberiumProof = 0; /*0x52379b*/
  this->Civilian = 0; /*0x5237a1*/
  this->C4 = 0; /*0x5237a7*/
  this->Engineer = 0; /*0x5237ad*/
  this->Agent = 0; /*0x5237b6*/
  this->Thief = 0; /*0x5237bc*/
  this->VehicleThief = 0; /*0x5237c3*/
  this->Doggie = 0; /*0x5237c9*/
  this->Deployer = 0; /*0x5237cf*/
  this->DeployedCrushable = 1; /*0x5237d5*/
  this->UseOwnName = 0; /*0x5237dc*/
  this->JumpJetTurn = 0; /*0x5237e2*/
  *(_DWORD *)this = &InfantryTypeClass::`vftable'; /*0x5237e8*/
  this->vtable1 = &InfantryTypeClass::`vftable'; /*0x5237ee*/
  this->vtable2 = &InfantryTypeClass::`vftable'; /*0x5237f4*/
  this->vtable3 = &vt_InfantryTypeClass; /*0x5237fb*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x523802*/
  v3 = *(InfantryTypeClass **)&g_NetworkPlayerBuffer[3356]; /*0x523807*/
  if ( *(int *)&g_NetworkPlayerBuffer[3356] < *(int *)&g_NetworkPlayerBuffer[3348] /*0x523845*/
    || (g_NetworkPlayerBuffer[3353] || !*(_DWORD *)&g_NetworkPlayerBuffer[3348])
    && *(int *)&g_NetworkPlayerBuffer[3360] > 0
  bool v4; // zf
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_NetworkPlayerBuffer[3340] + 8))(
               &g_NetworkPlayerBuffer[3340],
               *(_DWORD *)&g_NetworkPlayerBuffer[3348] + *(_DWORD *)&g_NetworkPlayerBuffer[3360],
               0) == 0,
        v3 = *(InfantryTypeClass **)&g_NetworkPlayerBuffer[3356],
        !v4) )
  {
    *(_DWORD *)&g_NetworkPlayerBuffer[3356] = &v3->vtable0[1]; /*0x52384a*/
    *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3344] + 4 * (_DWORD)v3) = this; /*0x523854*/
    v3 = *(InfantryTypeClass **)&g_NetworkPlayerBuffer[3356]; /*0x523857*/
  }
  int v5 = 0; /*0x52385c*/
  if ( (int)v3 <= 0 ) /*0x523860*/
  {
LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = *(CCINIClass **)&g_NetworkPlayerBuffer[3344]; /*0x523862*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x52386d*/
      if ( v5 >= (int)v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  this->ArrayIndex = v5; /*0x52387e*/
  *(_DWORD *)(this + 3592) = 0; /*0x523886*/
  this->OccupyWeapon = 0; /*0x523890*/
  *(_DWORD *)(this + 3596) = 0; /*0x523896*/
  *(_DWORD *)(this + 3604) = 0; /*0x523899*/
  *(_DWORD *)(this + 3608) = 0; /*0x52389f*/
  *(_BYTE *)(this + 3612) = 0; /*0x5238a5*/
  this->q384 = 0; /*0x5238ab*/
  this->EliteOccupyWeapon = 0; /*0x5238b4*/
  this->q38C = 0; /*0x5238ba*/
  *(_DWORD *)(this + 3620) = 0; /*0x5238c0*/
  *(_DWORD *)(this + 3636) = 0; /*0x5238c3*/
  *(_BYTE *)(this + 3640) = 0; /*0x5238c9*/
  this->RotCount = 8; /*0x5238cf*/
  *(_DWORD *)(this + 3624) = 0; /*0x5238d9*/
  this->RadarVisible = 0; /*0x5238dc*/
  this->Crushable = 1; /*0x5238e2*/
  this->Repairable = 0; /*0x5238e9*/
  *(_DWORD *)(this + 3628) = 0; /*0x5238ef*/
  this->Crewed = 0; /*0x5238f2*/
  *(_BYTE *)(this + 3381) = 0; /*0x5238f8*/
  *(_BYTE *)(this + 3382) = 0; /*0x5238fe*/
  *(_BYTE *)(this + 3387) = 0; /*0x523904*/
  this->SpawnRegenRate = 1; /*0x52390a*/
  this->DisableShadowCache = 1; /*0x523911*/
  this->DisableVoxelCache = 0; /*0x523918*/
  *(_BYTE *)(this + 3374) = 0; /*0x52391e*/
  this->Sequence = __2_YAPAXI_Z(0x5E8u); /*0x52392c*/
  for ( i = 0; i < 1512; *(_DWORD *)(i + this->Sequence - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(_DWORD *)(i + this->Sequence - 36) = 0; /*0x523942*/
    *(_DWORD *)(i + this->Sequence - 32) = 0; /*0x52394c*/
    *(_DWORD *)(i + this->Sequence - 28) = 0; /*0x523956*/
    *(_DWORD *)(i + this->Sequence - 24) = -1; /*0x523960*/
  }
  return this; /*0x523972*/
}
}

// 0x523980
unsigned int * InfantryTypeClass::Constructor_523980(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x523988*/
  this->qE50 = &vt_TypeList_AnimTypeClass_const; /*0x523992*/
  this->qE6C = &vt_TypeList_AnimTypeClass_const; /*0x523998*/
  this->qE88 = &vt_TypeList_int; /*0x52399e*/
  *this = &InfantryTypeClass::`vftable'; /*0x5239a8*/
  this->vtable2 = &InfantryTypeClass::`vftable'; /*0x5239ae*/
  this->vtable3 = &InfantryTypeClass::`vftable'; /*0x5239b5*/
  this->vtable4 = &vt_InfantryTypeClass; /*0x5239bc*/
  return this; /*0x5239c5*/
}
}

// 0x523B40
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  InfantryClass *v5; // esi
  int v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v4 ) /*0x523b55*/
  {
    v5 = (InfantryClass *)InfantryClass::Construct(v4, this, ppv); /*0x523b68*/
    if ( v5 ) /*0x523b6c*/
    {
      int v6 = a2[1] << 8; /*0x523b85*/
  _DWORD v12[3]; // [esp+4h] [ebp-24h] BYREF
      v12[0] = (*a2 << 8) + 128; /*0x523b93*/
      v12[1] = v6 + 128; /*0x523b9b*/
      v12[2] = 0; /*0x523bb1*/
      _DWORD * v7 = Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v12); /*0x523bb9*/
  int a1[3]; // [esp+1Ch] [ebp-Ch] BYREF
      int * v8 = ObjectPlacement::CalcPosition(v7, a1, (IUnknown *)v12, 0, 0, 0); /*0x523bc0*/
  _DWORD v13[3]; // [esp+10h] [ebp-18h] BYREF
      v13[0] = *v8; /*0x523bcf*/
      int v9 = v8[1]; /*0x523bd5*/
      v13[1] = v9; /*0x523bd9*/
      int v10 = v8[2]; /*0x523bdd*/
      v13[2] = v10; /*0x523be0*/
      if ( v13[0] != *(_DWORD *)&HouseClass_Player[46388] /*0x523bf4*/
        || v9 != *(_DWORD *)&HouseClass_Player[46392]
        || v10 != *(_DWORD *)&HouseClass_Player[46396] )
      {
        return (*(char (__thiscall **)(InfantryClass *, _DWORD *, int))(*(_DWORD *)v5->__pad_0 + 216))(v5, v13, 64); /*0x523c0b*/
      }
      (*(void (__thiscall **)(InfantryClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}
}

// 0x5240A0
int InfantryTypeClass::LoadFromINI(unsigned char *** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int PipIdx; // eax
  WeaponTypeClass *v5; // ebx
  WeaponTypeClass *v6; // eax
  WeaponTypeClass *v7; // ebx
  WeaponTypeClass *v8; // eax
  INIClass *inited; // eax
  VectorClass *v10; // eax
  AbstractClass *i; // eax
  VectorClass *v12; // ecx
  AbstractClass *j; // eax
  char Bool_Overwrite; // al
  int Index; // eax
  int Int_Overwrite; // eax
  CCINIClass *v40; // ecx
  void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
  INIClass *v44; // [esp-14h] [ebp-E0h]
  VectorClass *v45; // [esp-10h] [ebp-DCh]
  CCINIClass *v46; // [esp-Ch] [ebp-D8h]
  CCINIClass *p_unknown30; // [esp-8h] [ebp-D4h]
  unsigned __int8 ***v50; // [esp+8h] [ebp-C4h]
  VectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  VectorClass v52; // [esp+14h] [ebp-B8h] BYREF
  DynamicVector aP1; // [esp+30h] [ebp-9Ch] BYREF

  INIClass::ResetSection(a2); /*0x5240b5*/
  int v48 = (int)a2; /*0x5240ba*/
  this->DamageSparks = 0; /*0x5240bd*/
  double v49; // [esp+0h] [ebp-CCh]
  if ( !ObjectTypeClass::LoadExtras((CCINIClass *)v48, v49, v50) ) /*0x5240c4*/
    return 0; /*0x524751*/
  this->Pip = INIClass::GetPipIdx(a2, (CCINIClass *)(this + 36), aPip, this->qDFC); /*0x5240e8*/
  PipIdx = INIClass::GetPipIdx(a2, (CCINIClass *)(this + 36), &unk_825A60, this->qE00); /*0x5240fd*/
  v5 = this->qE04; /*0x524102*/
  v48 = 128; /*0x52410c*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524111*/
  v46 = (CCINIClass *)&stru_87C374[56304]; /*0x524112*/
  v45 = (VectorClass *)&unk_825A50; /*0x524117*/
  v44 = (INIClass *)(this + 36); /*0x52411c*/
  this->OccupyPip = PipIdx; /*0x52411f*/
  if ( INIClass::GetString(a2, v44, (unsigned __int8 *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) ) /*0x524125*/
    v6 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x524132*/
  else
    v6 = v5; /*0x524139*/
  v7 = this->EliteOccupyWeapon; /*0x52413b*/
  this->OccupyWeapon = v6; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A3C,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    v8 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x52416b*/
  }
  else
  {
    v8 = v7; /*0x524172*/
  }
  this->EliteOccupyWeapon = v8; /*0x52417f*/
  INIClassIntList = (VectorClass *)v43; /*0x524186*/
  DynamicVectorClass::Copy(v43, (DynamicVector *)(this + 3720)); /*0x52418a*/
  INIClassIntList->vtable0 = &vt_TypeList_int; /*0x524198*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36)); /*0x5241a0*/
  INIClassIntList = GetINIClassIntList( /*0x5241b4*/
                      (int)&v52,
                      a2,
                      inited,
                      byte_825A2C,
                      v43[0],
                      v43[1],
                      (int)v44,
                      (__int16)v45,
                      (int)v46,
                      (int)p_unknown30,
                      v48);
  TypeList::Copy((_DWORD *)(this + 3720), INIClassIntList); /*0x5241b8*/
  v10 = INIClassIntList; /*0x5241bd*/
  this->VoiceComment.Count = INIClassIntList[1].vtable0; /*0x5241c4*/
  this->VoiceComment.CapacityIncrement = v10[1].Items; /*0x5241ca*/
  this->VoiceComment.unknown_18 = v10[1].Capacity; /*0x5241d4*/
  v52.vtable0 = &vt_VectorClass_int; /*0x5241d7*/
  VectorClass::Destroy((int)&v52); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A20,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v52, 0, 0); /*0x524210*/
    v52.vtable0 = &vt_TypeList_AnimTypeClass_const; /*0x52421f*/
    for ( i = (AbstractClass *)strtok((char *)&aP1.field_1C, (ObjectClass *)&stru_817F40.nextObject); /*0x524231*/
          i;
          i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (VectorClass *)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        DynamicVector::Add_Alt4(&v52, (VectorClass *)&INIClassIntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy(&aP1, &v52); /*0x524271*/
    v52.vtable0 = &vt_VectorClass_AnimTypeClass_const; /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((int)&v52); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(this + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((_DWORD *)(this + 3664), (VectorClass *)&aP1); /*0x5242a6*/
  v12 = *(VectorClass **)aP1[20]; /*0x5242af*/
  int v13 = *(_DWORD *)&aP1[24]; /*0x5242b3*/
  this->DeadBodies.Count = aP1.field_10; /*0x5242b7*/
  this->DeadBodies.CapacityIncrement = v12; /*0x5242ba*/
  this->DeadBodies.unknown_18 = v13; /*0x5242bd*/
  *(_DWORD *)aP1[0] = &vt_VectorClass_AnimTypeClass_const; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A14,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v52, 0, 0); /*0x5242fa*/
    v52.vtable0 = &vt_TypeList_AnimTypeClass_const; /*0x524309*/
    for ( j = (AbstractClass *)strtok((char *)&aP1.field_1C, (ObjectClass *)&stru_817F40.nextObject); /*0x52431b*/
          j;
          j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !j->__pad_0[0] ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (VectorClass *)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(&v52, (VectorClass *)&INIClassIntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy(&aP1, &v52); /*0x52435b*/
    v52.vtable0 = &vt_VectorClass_AnimTypeClass_const; /*0x524364*/
    DynamicVectorClass::Destroy_Alt((int)&v52); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(this + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray((_DWORD *)(this + 3692), &aP1); /*0x52438c*/
  this->DeathAnims.unknown_18 = *(_DWORD *)&aP1[24]; /*0x524399*/
  *(_DWORD *)aP1[0] = &vt_VectorClass_AnimTypeClass_const; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_825A0C,
                     this->Cyborg);
  LOBYTE(v48) = this->NotHuman; /*0x5243c5*/
  p_unknown30 = &unk_825A00; /*0x5243c6*/
  v46 = (CCINIClass *)(this + 36); /*0x5243cb*/
  this->Cyborg = Bool_Overwrite; /*0x5243cc*/
  this->NotHuman = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5243d7*/
  if ( this->Cyborg ) /*0x5243dd*/
    this->DamageSparks = 1; /*0x5243e7*/
  int v16 = this->EnterWaterSound; /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          a2,
          (INIClass *)(this + 36),
          &unk_8259F0,
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP1.field_1C,
          128)
    || (Index = VocClass::FindIndex(&aP1.field_1C), Index == -1) )
  {
    Index = v16; /*0x524422*/
  }
  int v18 = this->LeaveWaterSound; /*0x524424*/
  v48 = 128; /*0x52442e*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524433*/
  v46 = (CCINIClass *)&stru_87C374[56304]; /*0x524434*/
  v45 = (VectorClass *)&unk_8259E0; /*0x524439*/
  v44 = (INIClass *)(this + 36); /*0x52443e*/
  this->EnterWaterSound = Index; /*0x524441*/
  if ( !INIClass::GetString(a2, v44, (unsigned __int8 *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) /*0x52445c*/
  int v19; // eax
    || (v19 = VocClass::FindIndex(&aP1.field_1C), v19 == -1) )
  {
    v19 = v18; /*0x52445e*/
  }
  LOBYTE(v48) = this->Fearless; /*0x524468*/
  p_unknown30 = &unk_8259D4; /*0x524469*/
  v46 = (CCINIClass *)(this + 36); /*0x52446e*/
  this->LeaveWaterSound = v19; /*0x52446f*/
  this->Fearless = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x52447a*/
  char v20 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259C8, this->Fraidycat); /*0x52448f*/
  char v21 = this->Infiltrate; /*0x524494*/
  this->Fraidycat = v20; /*0x52449a*/
  char v22 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259BC, v21); /*0x5244a9*/
  LOBYTE(v48) = this->Ivan; /*0x5244b6*/
  p_unknown30 = &unk_8259B4; /*0x5244b7*/
  v46 = (CCINIClass *)(this + 36); /*0x5244bc*/
  this->Infiltrate = v22; /*0x5244bd*/
  this->Ivan = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5244c8*/
  char v23 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259A8, this->Occupier); /*0x5244dd*/
  char v24 = this->Assaulter; /*0x5244e2*/
  this->Occupier = v23; /*0x5244e8*/
  char v25 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82599C, v24); /*0x5244f7*/
  v48 = this->DirectionDistance; /*0x524504*/
  p_unknown30 = &unk_825988; /*0x524505*/
  v46 = (CCINIClass *)(this + 36); /*0x52450a*/
  this->Assaulter = v25; /*0x52450b*/
  this->DirectionDistance = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, (INIClass *)v48); /*0x524516*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    &unk_82597C,
                    this->HarvestRate);
  char v27 = this->C4; /*0x524530*/
  this->HarvestRate = Int_Overwrite; /*0x524536*/
  char v28 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_825978, v27); /*0x524545*/
  LOBYTE(v48) = this->Civilian; /*0x524552*/
  p_unknown30 = (CCINIClass *)&g_INI_Key_Easy.unknown30; /*0x524553*/
  v46 = (CCINIClass *)(this + 36); /*0x524558*/
  this->C4 = v28; /*0x524559*/
  this->Civilian = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x524564*/
  char v29 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82596C, this->Engineer); /*0x524579*/
  char v30 = this->TiberiumProof; /*0x52457e*/
  this->Engineer = v29; /*0x524584*/
  char v31 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82595C, v30); /*0x524593*/
  LOBYTE(v48) = this->Agent; /*0x5245a0*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.lineTrailer; /*0x5245a1*/
  v46 = (CCINIClass *)(this + 36); /*0x5245a6*/
  this->TiberiumProof = v31; /*0x5245a7*/
  this->Agent = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5245b2*/
  char v32; // al
  v32 = INIClass::ReadBool_Overwrite( /*0x5245c7*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.location[1],
          this->Thief);
  char v33 = this->VehicleThief; /*0x5245cc*/
  this->Thief = v32; /*0x5245d2*/
  char v34; // al
  v34 = INIClass::ReadBool_Overwrite( /*0x5245e1*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.isAliveFlag,
          v33);
  LOBYTE(v48) = this->Doggie; /*0x5245ee*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.parachute; /*0x5245ef*/
  v46 = (CCINIClass *)(this + 36); /*0x5245f4*/
  this->VehicleThief = v34; /*0x5245f5*/
  this->Doggie = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x524600*/
  char v35; // al
  v35 = INIClass::ReadBool_Overwrite( /*0x524615*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.visibilityFlags,
          this->Deployer);
  char v36 = this->DeployedCrushable; /*0x52461a*/
  this->Deployer = v35; /*0x524620*/
  char v37; // al
  v37 = INIClass::ReadBool_Overwrite( /*0x52462f*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.bombVisible,
          v36);
  LOBYTE(v48) = this->UseOwnName; /*0x52463c*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.customSound_controller[3]; /*0x52463d*/
  v46 = (CCINIClass *)(this + 36); /*0x524642*/
  this->DeployedCrushable = v37; /*0x524643*/
  this->UseOwnName = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x52464e*/
  this->JumpJetTurn = INIClass::ReadBool_Overwrite( /*0x524668*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)stru_8258AC.customSound_controller,
                              this->JumpJetTurn);
  if ( this->C4 ) /*0x52466e*/
    this->Infiltrate = 1; /*0x524678*/
  if ( this->Engineer ) /*0x52467f*/
    this->Infiltrate = 1; /*0x524689*/
  if ( this->Agent ) /*0x524690*/
    this->Infiltrate = 1; /*0x52469a*/
  char v38; // al
  v38 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int)&stru_87C374[44556],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)&stru_8258AC.ambientSoundController[3],
          this->Crawls);
  v48 = this->FireUp; /*0x5246c9*/
  p_unknown30 = (CCINIClass *)stru_8257B8[32]; /*0x5246ca*/
  v46 = (CCINIClass *)(this + 504); /*0x5246cf*/
  this->Crawls = v38; /*0x5246d0*/
  this->FireUp = INIClass::ReadInt_Overwrite( /*0x5246db*/
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  int v39; // eax
  v39 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (int)&stru_87C374[44556],
          (unsigned __int8 *)(this + 504),
          &stru_8257B8,
          this->qE44);
  v40 = this->qE48; /*0x5246f8*/
  this->FireProne = v39; /*0x5246fe*/
  int v41; // eax
  v41 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (int)&stru_87C374[44556],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)g_INI_Key_SecondaryProne.sectionHead,
          (INIClass *)v40);
  v48 = this->SecondaryProne; /*0x524720*/
  p_unknown30 = &g_INI_Key_SecondaryProne; /*0x524721*/
  v46 = (CCINIClass *)(this + 504); /*0x524726*/
  this->SecondaryFire = v41; /*0x524727*/
  this->SecondaryProne = INIClass::ReadInt_Overwrite( /*0x524734*/
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  AnimSequence::Parse(this); /*0x52473a*/
  return 1; /*0x524741*/
}
}

// 0x524960
namespace gamemd {
void InfantryTypeClass_LoadTypeData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx

  _DWORD * v4 = (_DWORD *)a2; /*0x524964*/
  int v5 = 0; /*0x524968*/
  if ( *(_DWORD *)(a2 + 3644) ) /*0x52496a*/
  {
    __3_YAXPAX_Z(*(void **)(a2 + 3644)); /*0x524975*/
    v4[911] = 0; /*0x52497d*/
  }
  int v6 = a3; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((int)v4, a3); /*0x524989*/
  int v13 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v4 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v4, (int)&a2); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x5249b4*/
    if ( v4 != (_DWORD *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct(v4 + 930, 0, 0); /*0x5249c7*/
      v4[930] = &vt_TypeList_int; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x5249de*/
    if ( a3 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt(v4 + 930, &a4); /*0x5249ff*/
        ++v5; /*0x524a04*/
      }
      while ( v5 < a3 ); /*0x524a09*/
    }
    if ( v4 != (_DWORD *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 916, 0, 0); /*0x524a1b*/
      v4[916] = &vt_TypeList_AnimTypeClass_const; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524a33*/
    for ( i = 0; i < a3; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4(v4 + 916, &a4); /*0x524a56*/
    }
    for ( j = 0; j < v4[920]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[917] + 4 * j)); /*0x524a7d*/
    if ( v4 != (_DWORD *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 923, 0, 0); /*0x524a9d*/
      v4[923] = &vt_TypeList_AnimTypeClass_const; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 12))(v6, &a3, 4); /*0x524ab5*/
    for ( k = 0; k < a2; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4(v4 + 923, &a3); /*0x524ad8*/
    }
    for ( m = 0; m < v4[927]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[924] + 4 * m)); /*0x524b00*/
    void * v12 = __2_YAPAXI_Z(0x5E8u); /*0x524b15*/
    v4[911] = v12; /*0x524b1d*/
    (*(void (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, v12, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 897); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 904); /*0x524b4e*/
    return v13; /*0x524b53*/
  }
  return result; /*0x524b57*/
}
}
} // namespace gamemd

// 0x524B60
namespace gamemd {
void InfantryTypeClass_SaveLoad_Prefix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx

  result = TechnoTypeClass::SaveLoad_Prefix_0(a2, a3, a4); /*0x524b72*/
  int v6 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    int v7 = *a3; /*0x524b87*/
    a4 = a2[934]; /*0x524b94*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v7 + 16))(a3, &a4, 4, 0, a1); /*0x524b98*/
    for ( i = 0; i < a5; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[931] + 4 * i, 4, 0); /*0x524bb6*/
    int v9 = *a3; /*0x524bc6*/
    a5 = a2[920]; /*0x524bd2*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a3, &a5, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a5; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[917] + 4 * j, 4, 0); /*0x524bf4*/
    int v11 = *a3; /*0x524c04*/
    a5 = a2[927]; /*0x524c10*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v11 + 16))(a3, &a5, 4, 0); /*0x524c14*/
    for ( k = 0; k < a5; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[924] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*a3 + 16))(a3, a2[911], 1512); /*0x524c4d*/
    return v6; /*0x524c52*/
  }
  return result; /*0x524c51*/
}
}
} // namespace gamemd

// 0x524D70
InfantryTypeClass * InfantryTypeClass::ddtor(char a2)
{
    InfantryTypeClass* v7 = this;
    InfantryTypeClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    g_InfantryTypes;
    int v2 = g_InfantryTypes.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_InfantryTypes_Count && v2 < --g_InfantryTypes_Count )
    {
        do
        {
            ++v2;
            *(g_InfantryTypes_Items + v2 - 1) = *(g_InfantryTypes_Items + v2);
        }
        while ( v2 < g_InfantryTypes_Count );
    }
    OperatorDelete(blk->RecordTable);
    blk->RecordTable = nullptr;
    void *v3 = blk->VoiceComment_Items;
    blk->VoiceComment_Base = nullptr;
    if ( v3 && blk->VoiceComment_FlagByte )
    {
        OperatorDelete(v3);
        blk->VoiceComment_Items = nullptr;
    }
    blk->VoiceComment_FlagByte = 0;
    blk->VoiceComment_Capacity = 0;
    void *v4 = blk->DeathAnims_Items;
    blk->DeathAnims_Base = nullptr;
    if ( v4 && blk->DeathAnims_FlagByte )
    {
        OperatorDelete(v4);
        blk->DeathAnims_Items = nullptr;
    }
    blk->DeathAnims_FlagByte = 0;
    blk->DeathAnims_Capacity = 0;
    void *v5 = blk->DeadBodies_Items;
    blk->DeadBodies_Base = nullptr;
    if ( v5 && blk->DeadBodies_FlagByte )
    {
        OperatorDelete(v5);
        blk->DeadBodies_Items = nullptr;
    }
    blk->DeadBodies_FlagByte = 0;
    blk->DeadBodies_Capacity = 0;
    TechnoTypeClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x524F20
unsigned int * InfantryTypeClass::CopyDataArray(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this == (_DWORD *)aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  this->GetClassIdentifier(); /*0x524f2e*/
  int v3 = aP1->field_8; /*0x524f31*/
  this->vtable3 = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->vtable2 = 0; /*0x524f86*/
    this->q034 = 0; /*0x524f8d*/
LABEL_8:
    this->uniqueId = aP1->field_10; /*0x524f91*/
    this->abstractFlags = *(_DWORD *)aP1->__pad_14; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  int v4 = __2_YAPAXI_Z(4 * v3); /*0x524f43*/
  this->vtable2 = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  int v5 = this->vtable3; /*0x524f52*/
  int v6 = 0; /*0x524f55*/
  this->q034 = 1; /*0x524f59*/
  if ( v5 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < this->vtable3 ); /*0x524f71*/
  this->uniqueId = aP1->field_10; /*0x524f76*/
  this->abstractFlags = *(_DWORD *)aP1->__pad_14; /*0x524f7c*/
  return this; /*0x524f81*/
}
}

// 0x772FA0
void * InfantryTypeClass::Find()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  int v2 = 0; /*0x772fcd*/
  if ( *(int *)&stru_87C374[45572] <= 0 ) /*0x772fd1*/
  {
LABEL_6:
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return (WeaponTypeClass *)WeaponTypeClass::Constructor(v3, this); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[45560] + 4 * v2) + 36), this) ) /*0x772fea*/
  {
    if ( ++v2 >= *(int *)&stru_87C374[45572] ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return *(WeaponTypeClass **)(*(_DWORD *)&stru_87C374[45560] + 4 * v2); /*0x77300f*/
}
}

// 0x523B10
InfantryClass * InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
{
    int v3;
    v3 = __2_YAPAXI_Z(0x6F0u);
    if ( v3 )
    return (InfantryClass *)InfantryClass::Construct(v3, this, ppv);
    else
    return 0;
}
}

// 0x523C20
int * InfantryTypeClass::GetDimensions(int a1)
{
{
    if ( (DataGlobal_A8F2C8 & 1) == 0 )
  {
    DataGlobal_A8F2C8 |= 1u;
    DataGlobal_A8F28C = 0;
    DataGlobal_A8F290 = 2147450879;
    atexit(nullsub_147);
  }
    return &DataGlobal_A8F28C;
}
}

// 0x524760
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_A8F2CC;
    *a1 = 85;
    *((int*)(a1) + 1) = 85;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// 0x524790
int InfantryTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}

// 0x5247A0
int InfantryTypeClass::StubReturnFalse()
{
return 0;
}

// 0x5247D0
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
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

// 0x524840
int InfantryTypeClass::PowerDrainUpdate(int * a2)
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
    int v12;
    int v13;
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(this->Pip);
    Checksummer::Add_Buffer((unsigned int *)a2, *(unsigned char **)(this + 3644), 1512);
    Power::TimerProcess(this->FireUp);
    Power::TimerProcess(this->FireProne);
    Power::TimerProcess(this->VoiceComment.Count);
    Power::TimerProcess(this->DeadBodies.Count);
    Power::TimerProcess(this->DeathAnims.Count);
    LOBYTE(v3) = this->Fearless;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->Crawls;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->Infiltrate;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->Fraidycat;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->TiberiumProof;
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = this->Civilian;
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->C4;
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = this->Engineer;
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = this->Agent;
    Power::FlagProcess(a2, v11);
    LOBYTE(v12) = this->Thief;
    Power::FlagProcess(a2, v12);
    LOBYTE(v13) = this->VehicleThief;
    return Power::FlagProcess(a2, v13);
}
}

// 0x524C70
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608936;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x524D40
int InfantryTypeClass::GetTypeIdentifier()
{
return 16;
}

// 0x524D50
int InfantryTypeClass::GetObjectSize()
{
return 3792;
}

// 0x524D60
int InfantryTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}
