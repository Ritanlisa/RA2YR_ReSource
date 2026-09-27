// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"

// 0x5236A0
namespace gamemd {
InfantryTypeClass * * InfantryTypeClass::Constructor(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int v6;
  int i; // eax

  TechnoTypeClass::ReadINI(aP1, 0); /*0x5236ae*/
  this->ArrayIndex = -1; /*0x5236b3*/
  this->qDFC = 1; /*0x5236bd*/
  this->qE00 = 7; /*0x5236c7*/
  this->qE3C = 0; /*0x5236d1*/
  this->qE40 = 0; /*0x5236d7*/
  this->qE44 = 0; /*0x5236e3*/
  this->qE48 = 0; /*0x5236ea*/
  this->qE4C = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((unsigned int *)(&this->q5B84), 0, 0); /*0x5236f9*/
  this->qE60 = 0; /*0x523703*/
  this->u32_E64 = 10; /*0x523706*/
  AnimTypeVector::Constructor((unsigned int *)(&this->q5C42), 0, 0); /*0x523719*/
  this->u32_E80 = 10; /*0x52371e*/
  this->u32_E7C = 0; /*0x523721*/
  VectorClass::Construct((unsigned int *)(&this->u32_5D00), 0, 0); /*0x523734*/
  this->u32_E9C = 10; /*0x523739*/
  this->u32_E98 = 0; /*0x52373c*/
  this->qEA4 = -1; /*0x523748*/
  this->qEA8 = -1; /*0x52374e*/
  this->qEAC = 0; /*0x523754*/
  this->qEAD = 0; /*0x52375a*/
  this->qEAE = 0; /*0x523760*/
  this->qEB0 = 0; /*0x523766*/
  this->qEB4 = 0; /*0x52376c*/
  this->qEB5 = 0; /*0x523772*/
  this->HarvestRate = 1; /*0x523778*/
  this->qEBC = 0; /*0x523782*/
  this->qEBD = 1; /*0x523788*/
  this->qEBE = 0; /*0x52378f*/
  this->qEBF = 0; /*0x523795*/
  this->qEC0 = 0; /*0x52379b*/
  this->qEC1 = 0; /*0x5237a1*/
  this->qEC2 = 0; /*0x5237a7*/
  this->qEC3 = 0; /*0x5237ad*/
  this->qEC4 = 0; /*0x5237b6*/
  this->qEC5 = 0; /*0x5237bc*/
  this->qEC6 = 0; /*0x5237c3*/
  this->qEC7 = 0; /*0x5237c9*/
  this->qEC8 = 0; /*0x5237cf*/
  this->qEC9 = 1; /*0x5237d5*/
  this->qECA = 0; /*0x5237dc*/
  this->qECB = 0; /*0x5237e2*/
  this->vtable2.GenerateUniqueID(); /*0x523802*/
  v3 = g_LoadScreenProgress; /*0x523807*/
  if ( g_LoadScreenProgress < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(InfantryTypeClass_Array + 8))(
               &InfantryTypeClass_Array,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = g_LoadScreenProgress,
        !v4) )
  {
    g_LoadScreenProgress = (unsigned int)(v3 + 1);
    *((unsigned int *)Factory_ExitCellTable + v3) = this; /*0x523854*/
    v3 = g_LoadScreenProgress; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( v3 <= 0 ) /*0x523860*/
  {
  LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = Factory_ExitCellTable; /*0x523862*/
    while ( *v6 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  this->ArrayIndex = v5; /*0x52387e*/
  this->u32_E08 = 0; /*0x523886*/
  this->qE04 = 0; /*0x523890*/
  this->u32_E0C = 0; /*0x523896*/
  this->u32_E14 = 0; /*0x523899*/
  this->u32_E18 = 0; /*0x52389f*/
  this->u8_E1C = 0; /*0x5238a5*/
  this->qE10 = 0; /*0x5238ab*/
  this->EliteOccupyWeapon = 0; /*0x5238b4*/
  this->qE30 = 0; /*0x5238ba*/
  this->u32_E24 = 0; /*0x5238c0*/
  this->u32_E34 = 0; /*0x5238c3*/
  this->u8_E38 = 0; /*0x5238c9*/
  this->RotCount = 8; /*0x5238cf*/
  this->u32_E28 = 0; /*0x5238d9*/
  this->qC9B = 0; /*0x5238dc*/
  this->q22D = 1; /*0x5238e2*/
  this->Repairable = 0; /*0x5238e9*/
  this->u32_E2C = 0; /*0x5238ef*/
  this->Crewed = 0; /*0x5238f2*/
  this->u8_D35 = 0; /*0x5238f8*/
  this->u8_D36 = 0; /*0x5238fe*/
  this->u8_D3B = 0; /*0x523904*/
  this->SpawnRegenRate = 1; /*0x52390a*/
  this->DisableShadowCache = 1; /*0x523911*/
  this->DisableVoxelCache = 0; /*0x523918*/
  this->u8_D2E = 0; /*0x52391e*/
  this->qE3C = operator new(0x5E8u); /*0x52392c*/
  for ( i = 0; i < 1512; *(unsigned int *)(i + this->qE3C - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(unsigned int *)(i + this->qE3C - 36) = 0; /*0x523942*/
    *(unsigned int *)(i + this->qE3C - 32) = 0; /*0x52394c*/
    *(unsigned int *)(i + this->qE3C - 28) = 0; /*0x523956*/
    *(unsigned int *)(i + this->qE3C - 24) = -1; /*0x523960*/
  }
  return (gamemd::InfantryTypeClass **)(this);
}
} // namespace gamemd
// 0x523980
namespace gamemd {
unsigned int * InfantryTypeClass::Constructor_523980(ObjectTypeClass * aP1)
{
  TechnoTypeClass::Construct(aP1); /*0x523988*/
  return this; /*0x5239c5*/
}
} // namespace gamemd
// 0x523B40
namespace gamemd {
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{
  void *v4; // eax
  int v5; // esi
  unsigned int * v6;
  unsigned int *v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int v12[3]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v13[3]; // [esp+10h] [ebp-18h] BYREF
  int v14[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = operator new(0x6F0u); /*0x523b4b*/
  if ( v4 ) /*0x523b55*/
  {
    v5 = InfantryClass::Construct((int)v4, (int)this, ppv); /*0x523b68*/
    if ( v5 ) /*0x523b6c*/
    {
      v6 = (int)((unsigned int *)(a2[1] << 8));
      v12[0] = (unsigned int *)((*a2 << 8) + 128);
      v12[1] = (unsigned int *)(v6 + 128);
      v12[2] = (unsigned int *)(0);
      v7 = (unsigned int *)(Coord::To_Cell(&MapClass_Instance, v12));
      v8 = ObjectPlacement::CalcPosition(v7, v14, v12, 0, 0, 0); /*0x523bc0*/
      v13[0] = *v8; /*0x523bcf*/
      v9 = v8[1]; /*0x523bd5*/
      v13[1] = v9; /*0x523bd9*/
      v10 = v8[2]; /*0x523bdd*/
      v13[2] = v10; /*0x523be0*/
      if ( v13[0] != dword_A8F280 || v9 != dword_A8F284 || v10 != dword_A8F288 ) /*0x523bf4*/
        return (*(int (__thiscall **)(int, unsigned int *, int))(v5->u32_D8)(v5, v13, 64); /*0x523c0b*/
      (*(void (__thiscall **, unsigned int a1)(int, int))(v5->needsSave)(v5, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}
} // namespace gamemd
// 0x5240A0
namespace gamemd {
int InfantryTypeClass::LoadFromINI(unsigned char *** a2, void * a1)
{
  int PipIdx; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  uint8_t *inited; // eax
  void ***v10; // eax
  char *i; // eax
  int v12; // ecx
  int v13; // edx
  char *j; // eax
  char Bool_Overwrite; // al
  int v16; // ebx
  int Index; // eax
  int v18; // ebx
  int v19; // eax
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // cl
  char v25; // al
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // al
  char v33; // cl
  char v34; // al
  char v35; // al
  char v36; // cl
  char v37; // al
  char v38; // al
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
  uint8_t *v44; // [esp-14h] [ebp-E0h]
  char *v45; // [esp-10h] [ebp-DCh]
  char *v46; // [esp-Ch] [ebp-D8h]
  char *v47; // [esp-8h] [ebp-D4h]
  int v48; // [esp-4h] [ebp-D0h]
  void ***IntList; // [esp+10h] [ebp-BCh] BYREF
  unsigned int v50[7]; // [esp+14h] [ebp-B8h] BYREF
  unsigned int v51[6]; // [esp+30h] [ebp-9Ch] BYREF
  int v52; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x5240b5*/
  v48 = (int)a2; /*0x5240ba*/
  *(unsigned char *)(a1 + 3215) = 0; /*0x5240bd*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, (uint8_t ***)v48) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(unsigned int *)(a1 + 3580) = INIClass::GetPipIdx(a1 + 36, aPip, *(unsigned int *)(a1 + 3580)); /*0x5240e8*/
  PipIdx = INIClass::GetPipIdx(a1 + 36, aOccupypip, *(unsigned int *)(a1 + 3584)); /*0x5240fd*/
  v5 = *(unsigned int *)(a1 + 3588); /*0x524102*/
  v48 = 128; /*0x52410c*/
  v47 = String; /*0x524111*/
  v46 = &g_INI_DefaultBuffer; /*0x524112*/
  v45 = aOccupyweapon; /*0x524117*/
  v44 = (uint8_t *)(a1 + 36); /*0x52411c*/
  *(unsigned int *)(a1 + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString(a2, v44, (uint8_t *)v45, v46, v47, v48) ) /*0x524125*/
    v6 = InfantryTypeClass::Find(String); /*0x524132*/
  else
    v6 = v5; /*0x524139*/
  v7 = *(unsigned int *)(a1 + 3616); /*0x52413b*/
  *(unsigned int *)(a1 + 3588) = v6; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         a2,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aEliteoccupywea,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v8 = (int)(InfantryTypeClass::Find(String));
  }
  else
  {
    v8 = v7; /*0x524172*/
  }
  *(unsigned int *)(a1 + 3616) = v8; /*0x52417f*/
  IntList = v43; /*0x524186*/
  DynamicVectorClass::Copy(v43, (unsigned int *)(a1 + 3720)); /*0x52418a*/
  inited = (uint8_t *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x5241a0*/
  IntList = (void ***)GetINIClassIntList( /*0x5241b4*/
                        (int)v50,
                        a2,
                        inited,
                        (uint8_t *)aVoicecomment,
                        v43[0],
                        v43[1],
                        (int)v44,
                        (int16_t)v45,
                        (int)v46,
                        (int)v47,
                        v48);
  TypeList::Copy((unsigned int *)(a1 + 3720), IntList); /*0x5241b8*/
  v10 = IntList; /*0x5241bd*/
  *(unsigned int *)(a1 + 3736) = IntList[4]; /*0x5241c4*/
  *(unsigned int *)(a1 + 3740) = v10[5]; /*0x5241ca*/
  *(unsigned int *)(a1 + 3744) = v10[6]; /*0x5241d4*/
  VectorClass::Destroy((int)v50); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         a2,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aDeadbodies,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0); /*0x524210*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( IntList ) /*0x524245*/
        DynamicVector::Add_Alt4(v50, &IntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy(v51, v50); /*0x524271*/
    DynamicVectorClass::Destroy_Alt((int, unsigned int a1)v50); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy(v51, (unsigned int *, unsigned int a1)(a1 + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((unsigned int *)(a1 + 3664), v51); /*0x5242a6*/
  v12 = v51[5]; /*0x5242af*/
  v13 = v52; /*0x5242b3*/
  *(unsigned int *)(a1 + 3680) = v51[4]; /*0x5242b7*/
  *(unsigned int *)(a1 + 3684) = v12; /*0x5242ba*/
  *(unsigned int *)(a1 + 3688) = v13; /*0x5242bd*/
  DynamicVectorClass::Destroy_Alt((int)v51); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         a2,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aDeathanims,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0); /*0x5242fa*/
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( IntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(v50, &IntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy(v51, v50); /*0x52435b*/
    DynamicVectorClass::Destroy_Alt((int)v50); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy(v51, (unsigned int *)(a1 + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray(v51); /*0x52438c*/
  *(unsigned int *)(a1 + 3716) = v52; /*0x524399*/
  DynamicVectorClass::Destroy_Alt((int)v51); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aCyborg, *(unsigned char *)(a1 + 3756)); /*0x5243b8*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3757); /*0x5243c5*/
  v47 = aNothuman; /*0x5243c6*/
  v46 = (char *)(a1 + 36); /*0x5243cb*/
  *(unsigned char *)(a1 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(unsigned char *)(a1 + 3757) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5243d7*/
  if ( *(unsigned char *)(a1 + 3756) ) /*0x5243dd*/
    *(unsigned char *)(a1 + 3215) = 1; /*0x5243e7*/
  v16 = *(unsigned int *)(a1 + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          a2,
          (uint8_t *)(a1 + 36),
          (uint8_t *)aEnterwatersoun,
          &g_INI_DefaultBuffer,
          String,
          128)
    || (Index = VocClass::FindIndex(String), Index == -1) )
  {
    Index = v16; /*0x524422*/
  }
  v18 = *(unsigned int *)(a1 + 3752); /*0x524424*/
  v48 = 128; /*0x52442e*/
  v47 = String; /*0x524433*/
  v46 = &g_INI_DefaultBuffer; /*0x524434*/
  v45 = aLeavewatersoun; /*0x524439*/
  v44 = (uint8_t *)(a1 + 36); /*0x52443e*/
  *(unsigned int *)(a1 + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString(a2, v44, (uint8_t *)v45, v46, v47, v48) /*0x52445c*/
    || (v19 = VocClass::FindIndex(String), v19 == -1) )
  {
    v19 = v18; /*0x52445e*/
  }
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3772); /*0x524468*/
  v47 = aFearless; /*0x524469*/
  v46 = (char *)(a1 + 36); /*0x52446e*/
  *(unsigned int *)(a1 + 3752) = v19; /*0x52446f*/
  *(unsigned char *)(a1 + 3772) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x52447a*/
  v20 = INIClass::ReadBool_Overwrite(a1 + 36, aFraidycat, *(unsigned char *)(a1 + 3775)); /*0x52448f*/
  v21 = *(unsigned char *)(a1 + 3774); /*0x524494*/
  *(unsigned char *)(a1 + 3775) = v20; /*0x52449a*/
  v22 = INIClass::ReadBool_Overwrite(a1 + 36, aInfiltrate, v21); /*0x5244a9*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3758); /*0x5244b6*/
  v47 = aIvan; /*0x5244b7*/
  v46 = (char *)(a1 + 36); /*0x5244bc*/
  *(unsigned char *)(a1 + 3774) = v22; /*0x5244bd*/
  *(unsigned char *)(a1 + 3758) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5244c8*/
  v23 = INIClass::ReadBool_Overwrite(a1 + 36, aOccupier, *(unsigned char *)(a1 + 3764)); /*0x5244dd*/
  v24 = *(unsigned char *)(a1 + 3765); /*0x5244e2*/
  *(unsigned char *)(a1 + 3764) = v23; /*0x5244e8*/
  v25 = INIClass::ReadBool_Overwrite(a1 + 36, aAssaulter, v24); /*0x5244f7*/
  v48 = *(unsigned int *)(a1 + 3760); /*0x524504*/
  v47 = aDetectiondista; /*0x524505*/
  v46 = (char *)(a1 + 36); /*0x52450a*/
  *(unsigned char *)(a1 + 3765) = v25; /*0x52450b*/
  *(unsigned int *)(a1 + 3760) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x524516*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aHarvestrate, *(unsigned int *)(a1 + 3768)); /*0x52452b*/
  v27 = *(unsigned char *)(a1 + 3778); /*0x524530*/
  *(unsigned int *)(a1 + 3768) = Int_Overwrite; /*0x524536*/
  v28 = INIClass::ReadBool_Overwrite(a1 + 36, aC4, v27); /*0x524545*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3777); /*0x524552*/
  v47 = g_INI_Key_Civilian; /*0x524553*/
  v46 = (char *)(a1 + 36); /*0x524558*/
  *(unsigned char *)(a1 + 3778) = v28; /*0x524559*/
  *(unsigned char *)(a1 + 3777) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x524564*/
  v29 = INIClass::ReadBool_Overwrite(a1 + 36, aEngineer, *(unsigned char *)(a1 + 3779)); /*0x524579*/
  v30 = *(unsigned char *)(a1 + 3776); /*0x52457e*/
  *(unsigned char *)(a1 + 3779) = v29; /*0x524584*/
  v31 = INIClass::ReadBool_Overwrite(a1 + 36, aTiberiumproof, v30); /*0x524593*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3780); /*0x5245a0*/
  v47 = aAgent; /*0x5245a1*/
  v46 = (char *)(a1 + 36); /*0x5245a6*/
  *(unsigned char *)(a1 + 3776) = v31; /*0x5245a7*/
  *(unsigned char *)(a1 + 3780) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5245b2*/
  v32 = INIClass::ReadBool_Overwrite(a1 + 36, aThief, *(unsigned char *)(a1 + 3781)); /*0x5245c7*/
  v33 = *(unsigned char *)(a1 + 3782); /*0x5245cc*/
  *(unsigned char *)(a1 + 3781) = v32; /*0x5245d2*/
  v34 = INIClass::ReadBool_Overwrite(a1 + 36, aVehiclethief, v33); /*0x5245e1*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3783); /*0x5245ee*/
  v47 = aDoggie; /*0x5245ef*/
  v46 = (char *)(a1 + 36); /*0x5245f4*/
  *(unsigned char *)(a1 + 3782) = v34; /*0x5245f5*/
  *(unsigned char *)(a1 + 3783) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x524600*/
  v35 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployer, *(unsigned char *)(a1 + 3784)); /*0x524615*/
  v36 = *(unsigned char *)(a1 + 3785); /*0x52461a*/
  *(unsigned char *)(a1 + 3784) = v35; /*0x524620*/
  v37 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployedcrusha, v36); /*0x52462f*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a1 + 3786); /*0x52463c*/
  v47 = aUseownname; /*0x52463d*/
  v46 = (char *)(a1 + 36); /*0x524642*/
  *(unsigned char *)(a1 + 3785) = v37; /*0x524643*/
  *(unsigned char *)(a1 + 3786) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x52464e*/
  *(unsigned char *)(a1 + 3787) = INIClass::ReadBool_Overwrite(a1 + 36, aJumpjetturn, *(unsigned char *)(a1 + 3787)); /*0x524668*/
  if ( *(unsigned char *)(a1 + 3778) ) /*0x52466e*/
    *(unsigned char *)(a1 + 3774) = 1; /*0x524678*/
  if ( *(unsigned char *)(a1 + 3779) ) /*0x52467f*/
    *(unsigned char *)(a1 + 3774) = 1; /*0x524689*/
  if ( *(unsigned char *)(a1 + 3780) ) /*0x524690*/
    *(unsigned char *)(a1 + 3774) = 1; /*0x52469a*/
  v38 = INIClass::ReadBool_Overwrite(a1 + 504, aCrawls, *(unsigned char *)(a1 + 3773)); /*0x5246b9*/
  v48 = *(unsigned int *)(a1 + 3648); /*0x5246c9*/
  v47 = aFireup; /*0x5246ca*/
  v46 = (char *)(a1 + 504); /*0x5246cf*/
  *(unsigned char *)(a1 + 3773) = v38; /*0x5246d0*/
  *(unsigned int *)(a1 + 3648) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x5246db*/
  v39 = INIClass::ReadInt_Overwrite(a1 + 504, aFireprone, *(unsigned int *)(a1 + 3652)); /*0x5246f3*/
  v40 = *(unsigned int *)(a1 + 3656); /*0x5246f8*/
  *(unsigned int *)(a1 + 3652) = v39; /*0x5246fe*/
  v41 = INIClass::ReadInt_Overwrite(a1 + 504, aSecondaryfire, v40); /*0x524710*/
  v48 = *(unsigned int *)(a1 + 3660); /*0x524720*/
  v47 = g_INI_Key_SecondaryProne; /*0x524721*/
  v46 = (char *)(a1 + 504); /*0x524726*/
  *(unsigned int *)(a1 + 3656) = v41; /*0x524727*/
  *(unsigned int *)(a1 + 3660) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x524734*/
  AnimSequence::Parse(a1); /*0x52473a*/
  return 1; /*0x524741*/
}
} // namespace gamemd
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData()
{
  unsigned int *v4; // edi
  int v5; // ebx
  int v6; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  void *v12; // eax
  int v13; // [esp+70h] [ebp-4h]

  v4 = (unsigned int *)a2; /*0x524964*/
  v5 = 0; /*0x524968*/
  if ( *(unsigned int *)(a2 + 3644) ) /*0x52496a*/
  {
    RA2_OPDEL(*(void **)(a2 + 3644)); /*0x524975*/
    v4[911] = 0; /*0x52497d*/
  }
  v6 = a3; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((int)v4, a3); /*0x524989*/
  v13 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v4 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v4, (int)&a2); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x5249b4*/
    if ( v4 != (unsigned int *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct(v4 + 930, 0, 0); /*0x5249c7*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int, int))(*(unsigned int *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x5249de*/
    if ( a3 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a4, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt(v4 + 930, &a4); /*0x5249ff*/
        ++v5; /*0x524a04*/
      }
      while ( v5 < a3 ); /*0x524a09*/
    }
    if ( v4 != (unsigned int *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 916, 0, 0); /*0x524a1b*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a3, 4, 0); /*0x524a33*/
    for ( i = 0; i < a3; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a4, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4(v4 + 916, &a4); /*0x524a56*/
    }
    for ( j = 0; j < v4[920]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[917] + 4 * j)); /*0x524a7d*/
    if ( v4 != (unsigned int *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 923, 0, 0); /*0x524a9d*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(unsigned int *)v6 + 12))(v6, &a3, 4); /*0x524ab5*/
    for ( k = 0; k < a2; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a3, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4(v4 + 923, &a3); /*0x524ad8*/
    }
    for ( m = 0; m < v4[927]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[924] + 4 * m)); /*0x524b00*/
    v12 = operator new(0x5E8u); /*0x524b15*/
    v4[911] = v12; /*0x524b1d*/
    (*(void (__stdcall **)(int, void *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, v12, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 897); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 904); /*0x524b4e*/
    return v13; /*0x524b53*/
  }
  return result; /*0x524b57*/
}
}
// 0x524B60
namespace gamemd {
TechnoTypeClass * * InfantryTypeClass_SaveLoad_Prefix()
{
  int result; // eax
  int v6; // ebp
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = TechnoTypeClass::SaveLoad_Prefix_0(a2, a3, a4); /*0x524b72*/
  v6 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v7 = *a3; /*0x524b87*/
    a4 = a2[934]; /*0x524b94*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int, int))(v7 + 16))(a3, &a4, 4, 0, a1); /*0x524b98*/
    for ( i = 0; i < a5; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[931] + 4 * i, 4, 0); /*0x524bb6*/
    v9 = *a3; /*0x524bc6*/
    a5 = a2[920]; /*0x524bd2*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a3, &a5, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a5; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[917] + 4 * j, 4, 0); /*0x524bf4*/
    v11 = *a3; /*0x524c04*/
    a5 = a2[927]; /*0x524c10*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v11 + 16))(a3, &a5, 4, 0); /*0x524c14*/
    for ( k = 0; k < a5; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[924] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(int *, unsigned int, int))(*a3 + 16))(a3, a2[911], 1512); /*0x524c4d*/
    return v6; /*0x524c52*/
  }
  return result; /*0x524c51*/
}
}
// 0x524D70
InfantryTypeClass * InfantryTypeClass::ddtor(char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x524d91*/
  v3 = (*(int (__thiscall **)(int *, int *))(InfantryTypeClass_Array + 16))(&InfantryTypeClass_Array, &this); /*0x524daa*/
  if ( v3 != -1 && v3 < g_LoadScreenProgress && v3 < --g_LoadScreenProgress ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((unsigned int *)Factory_ExitCellTable + v3 - 1) = *((unsigned int *)Factory_ExitCellTable + v3); /*0x524dd1*/
    }
    while ( v3 < g_LoadScreenProgress ); /*0x524ddd*/
  }
  RA2_OPDEL(*(void **)(&this->q5B04)); /*0x524de7*/
  this->qE3C = 0; /*0x524df1*/
  v4 = *(void **)(&this->u32_5D04); /*0x524df7*/
  if ( v4 && this->VoiceComment_FlagByte ) /*0x524e0b*/
  {
    RA2_OPDEL(v4); /*0x524e14*/
    this->VoiceComment_Items = 0; /*0x524e1c*/
  }
  this->VoiceComment_FlagByte = 0; /*0x524e22*/
  this->VoiceComment_Capacity = 0; /*0x524e28*/
  v5 = *(void **)(&this->q5C46); /*0x524e2e*/
  if ( v5 && this->DeathAnims_FlagByte ) /*0x524e42*/
  {
    RA2_OPDEL(v5); /*0x524e4b*/
    this->DeathAnims_Items = 0; /*0x524e53*/
  }
  this->DeathAnims_FlagByte = 0; /*0x524e59*/
  this->DeathAnims_Capacity = 0; /*0x524e5f*/
  v6 = *(void **)(&this->q5B88); /*0x524e65*/
  if ( v6 && this->DeadBodies_FlagByte ) /*0x524e79*/
  {
    RA2_OPDEL(v6); /*0x524e82*/
    this->DeadBodies_Items = 0; /*0x524e8a*/
  }
  this->DeadBodies_FlagByte = 0; /*0x524e92*/
  this->DeadBodies_Capacity = 0; /*0x524e98*/
  TechnoTypeClass::DTOR(); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    RA2_OPDEL(); /*0x524ead*/
  return this; /*0x524eb7*/
}
// 0x524F20
unsigned int * InfantryTypeClass::CopyDataArray(DynamicVector * aP1)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  this->vt_slot_12(); /*0x524f2e*/
  v3 = aP1[2]; /*0x524f31*/
  this->q020 = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->FLH = 0; /*0x524f86*/
    this->q034 = 0; /*0x524f8d*/
  LABEL_8:
    this->BarrelLength = aP1[4]; /*0x524f91*/
    this->BarrelThickness = aP1[5]; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  v4 = operator new(4 * v3); /*0x524f43*/
  this->FLH = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  v5 = this->q020; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  this->q034 = 1; /*0x524f59*/
  if ( v5 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *(unsigned int *)(this->FLH + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < this->q020 ); /*0x524f71*/
  this->BarrelLength = aP1[4]; /*0x524f76*/
  this->BarrelThickness = aP1[5]; /*0x524f7c*/
  return this; /*0x524f81*/
}
// 0x772FA0
WeaponTypeClass * * InfantryTypeClass::Find()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( g_WeaponTypePool <= 0 ) /*0x772fd1*/
  {
  LABEL_6:
    if ( operator new(0x160u) ) /*0x772ffb*/
      return WeaponTypeClass::Constructor(Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_WeaponTypeConfig + v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= g_WeaponTypePool ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return *((unsigned int *)g_WeaponTypeConfig + v2); /*0x77300f*/
}
// 0x523B10
InfantryClass * InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
  void *v3; // eax

  v3 = operator new(0x6F0u); /*0x523b18*/
  if ( v3 ) /*0x523b22*/
    return InfantryClass::Construct((int)v3, (int)this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}
// 0x523C20
int * InfantryTypeClass::GetDimensions(int a1)
{
  if ( (byte_A8F2C8 & 1) == 0 ) /*0x523c2b*/
  {
    byte_A8F2C8 |= 1u; /*0x523c46*/
    dword_A8F28C = 0; /*0x523c4c*/
    dword_A8F290 = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return &dword_A8F28C; /*0x523c78*/
}
// 0x524760
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
  int v1; // esi

  v1 = 2 * dword_A8F2CC; /*0x52476c*/
  *a1 = 85; /*0x524777*/
  a1[1] = 85; /*0x524779*/
  a1[2] = v1; /*0x52477c*/
  return a1; /*0x52477f*/
}
// 0x524790
int InfantryTypeClass::GetGameplayValue()
{
  return g_RulesClass_Instance[1].DrainMoneyFrameDelay; /*0x52479b*/
}
// 0x5247A0
int InfantryTypeClass::StubReturnFalse()
{
  return 0; /*0x5247a2*/
}
// 0x5247D0
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x5247d9*/
  v6 = a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = Cell::GetGroundHeight(&v5); /*0x524811*/
  *a1 = v5; /*0x52481e*/
  a1[1] = v6; /*0x524824*/
  a1[2] = v3; /*0x524828*/
  return a1; /*0x52482b*/
}
// 0x524840
int InfantryTypeClass::PowerDrainUpdate(int * a2)
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
  int v12; // ecx
  int v13; // edx

  BuildingTypeClass::ProcessPower(a2); /*0x524849*/
  Power::TimerProcess(this->qDFC); /*0x524857*/
  Checksummer::Add_Buffer((unsigned int *)a2, *(uint8_t **)(&this->q5B04), 1512); /*0x52486a*/
  Power::TimerProcess(this->qE40); /*0x524878*/
  Power::TimerProcess(this->qE44); /*0x524886*/
  Power::TimerProcess(this->u32_E98); /*0x524894*/
  Power::TimerProcess(this->qE60); /*0x5248a2*/
  Power::TimerProcess(this->u32_E7C); /*0x5248b0*/
  IDA_LOBYTE(v3) = this->qEBC; /*0x5248b5*/
  Power::FlagProcess(a2, v3); /*0x5248be*/
  IDA_LOBYTE(v4) = this->qEBD; /*0x5248c3*/
  v5 = Power::FlagProcess(a2, v4); /*0x5248cc*/
  IDA_LOBYTE(v5) = this->qEBE; /*0x5248d1*/
  Power::FlagProcess(a2, v5); /*0x5248da*/
  IDA_LOBYTE(v6) = this->qEBF; /*0x5248df*/
  Power::FlagProcess(a2, v6); /*0x5248e8*/
  IDA_LOBYTE(v7) = this->qEC0; /*0x5248ed*/
  v8 = Power::FlagProcess(a2, v7); /*0x5248f6*/
  IDA_LOBYTE(v8) = this->qEC1; /*0x5248fb*/
  Power::FlagProcess(a2, v8); /*0x524904*/
  IDA_LOBYTE(v9) = this->qEC2; /*0x524909*/
  Power::FlagProcess(a2, v9); /*0x524912*/
  IDA_LOBYTE(v10) = this->qEC3; /*0x524917*/
  v11 = Power::FlagProcess(a2, v10); /*0x524920*/
  IDA_LOBYTE(v11) = this->qEC4; /*0x524925*/
  Power::FlagProcess(a2, v11); /*0x52492e*/
  IDA_LOBYTE(v12) = this->qEC5; /*0x524933*/
  Power::FlagProcess(a2, v12); /*0x52493c*/
  IDA_LOBYTE(v13) = this->qEC6; /*0x524941*/
  return Power::FlagProcess(a2, v13); /*0x52494f*/
}
// 0x524C70
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = -1252326136; /*0x524ca0*/
  return 0; /*0x524c7d*/
}
// 0x524D40
int InfantryTypeClass::GetTypeIdentifier()
{
  return 16; /*0x524d45*/
}
// 0x524D50
int InfantryTypeClass::GetObjectSize()
{
  return 3792; /*0x524d55*/
}
// 0x524D60
int InfantryTypeClass::GetAuxField()
{
  return this->qDF8; /*0x524d66*/
}