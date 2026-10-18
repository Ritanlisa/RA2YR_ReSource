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
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/E4Recv_524EC0_e4.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
#include "e4/classes/ObjectPlacement_e4.hpp"  // G57w10 D supply
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_147(); }  // w18j2 raw 0x00523C80
// [w16g4] C3861 supply (raw call-form evidence)
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aAgent;  // data: 0x825954 truth(IDA G42.57w9)
extern unsigned char aAssaulter;  // data: 0x82599c truth(IDA G42.57w9)
extern unsigned char aC4;  // data: 0x825978 truth(IDA G42.57w9)
extern unsigned char aCrawls;  // data: 0x8258f4 truth(IDA G42.57w9)
extern unsigned char aCyborg;  // data: 0x825a0c truth(IDA G42.57w9)
extern unsigned char aDeployedcrusha;  // data: 0x825914 truth(IDA G42.57w9)
extern unsigned char aDeployer;  // data: 0x825928 truth(IDA G42.57w9)
extern unsigned char aDetectiondista;  // data: 0x825988 truth(IDA G42.57w9)
extern unsigned char aDoggie;  // data: 0x825934 truth(IDA G42.57w9)
extern unsigned char aEngineer;  // data: 0x82596c truth(IDA G42.57w9)
extern unsigned char aEnterwatersoun;  // data: 0x8259f0 truth(IDA G42.57w9)
extern unsigned char aFearless;  // data: 0x8259d4 truth(IDA G42.57w9)
extern unsigned char aFireprone;  // data: 0x8257b8 truth(IDA G42.57w9)
extern unsigned char aFireup;  // data: 0x8257d8 truth(IDA G42.57w9)
extern unsigned char aFraidycat;  // data: 0x8259c8 truth(IDA G42.57w9)
extern unsigned char aHarvestrate;  // data: 0x82597c truth(IDA G42.57w9)
extern unsigned char aInfiltrate;  // data: 0x8259bc truth(IDA G42.57w9)
extern unsigned char aIvan;  // data: 0x8259b4 truth(IDA G42.57w9)
extern unsigned char aJumpjetturn;  // data: 0x8258fc truth(IDA G42.57w9)
extern unsigned char aLeavewatersoun;  // data: 0x8259e0 truth(IDA G42.57w9)
extern unsigned char aNothuman;  // data: 0x825a00 truth(IDA G42.57w9)
extern unsigned char aOccupier;  // data: 0x8259a8 truth(IDA G42.57w9)
extern unsigned char aSecondaryfire;  // data: 0x825680 truth(IDA G42.57w9)
extern unsigned char aThief;  // data: 0x82594c truth(IDA G42.57w9)
extern unsigned char aTiberiumproof;  // data: 0x82595c truth(IDA G42.57w9)
extern unsigned char aUseownname;  // data: 0x825908 truth(IDA G42.57w9)
extern unsigned char aVehiclethief;  // data: 0x82593c truth(IDA G42.57w9)


// 0x5236A0
namespace gamemd {  // G42.18 ns repair
InfantryTypeClass * InfantryTypeClass::Constructor(char *aP1, void *a2, void *a3, void *a4)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, aP1, 0); /*0x5236ae*/
  this->ArrayIndex = (void *)(-1); /*0x5236b3*/
  this->Pip_d = 1; /*0x5236bd*/
  this->OccupyPip_d = 7; /*0x5236c7*/
  this->RecordTable = 0; /*0x5236d1*/
  this->qE40 = 0; /*0x5236d7*/
  this->u32_E44 = 0; /*0x5236e3*/
  this->u32_E48 = 0; /*0x5236ea*/
  this->u32_E4C = 0; /*0x5236f3*/
  AnimTypeVector::Constructor(&this->qE50, 0, 0); /*0x5236f9*/
  this->qE60 = 0; /*0x523703*/
  this->u32_E64 = 10; /*0x523706*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x523709*/
  AnimTypeVector::Constructor(&this->u32_E6C, 0, 0); /*0x523719*/
  this->u32_E80 = 10; /*0x52371e*/
  this->u32_E7C = 0; /*0x523721*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x523724*/
  VectorClass::Construct(&this->u32_E88, 0, 0); /*0x523734*/
  this->u32_E9C = 10; /*0x523739*/
  this->u32_E98 = 0; /*0x52373c*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x52373f*/
  this->u32_EA4 = -1; /*0x523748*/
  this->u32_EA8 = -1; /*0x52374e*/
  this->Cyborg_2 = 0; /*0x523754*/
  this->NotHuman_2 = 0; /*0x52375a*/
  this->Ivan_2 = 0; /*0x523760*/
  this->DetectionDistance = 0; /*0x523766*/
  this->Occupier_d = 0; /*0x52376c*/
  this->Assaulter_2 = 0; /*0x523772*/
  this->HarvestRate = 1; /*0x523778*/
  this->Fearless_d = 0; /*0x523782*/
  this->__pad_EBD = 1; /*0x523788*/
  this->Infiltrate_2 = 0; /*0x52378f*/
  this->Fraidycat_2 = 0; /*0x523795*/
  this->TiberiumProof_d = 0; /*0x52379b*/
  this->__pad_EC1 = 0; /*0x5237a1*/
  this->C4_2 = 0; /*0x5237a7*/
  this->Engineer_2 = 0; /*0x5237ad*/
  this->Agent_2 = 0; /*0x5237b6*/
  this->Thief_2 = 0; /*0x5237bc*/
  this->VehicleThief_2 = 0; /*0x5237c3*/
  this->Doggie_2 = 0; /*0x5237c9*/
  this->Deployer_d = 0; /*0x5237cf*/
  this->__pad_EC9 = 1; /*0x5237d5*/
  this->u32_ECA = 0; /*0x5237dc*/
  this->u32_ECB = 0; /*0x5237e2*/
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5237e8) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5237ee) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5237f4) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5237fb) */
  AbstractClass::GenerateUniqueID(&this->vtable2); /*0x523802*/
  v3 = dword_A8E358; /*0x523807*/
  if ( dword_A8E358 < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A8E348 + 8))(
               &dword_A8E348,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = dword_A8E358,
        !v4) )
  {
    dword_A8E358 = v3 + 1; /*0x52384a*/
    *((unsigned int *)dword_A8E34C + v3) = (unsigned int)(this); /*0x523854*/
    v3 = dword_A8E358; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( v3 <= 0 ) /*0x523860*/
  {
    LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = (unsigned int *)(dword_A8E34C); /*0x523862*/
    while ( *v6 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  this->ArrayIndex = (void *)(v5); /*0x52387e*/
  this->u32_E08 = 0; /*0x523886*/
  this->OccupyWeapon_d = 0; /*0x523890*/
  this->u32_E0C = 0; /*0x523896*/
  this->u32_E14 = 0; /*0x523899*/
  this->u32_E18 = 0; /*0x52389f*/
  this->u32_E1C = 0; /*0x5238a5*/
  this->qE10 = 0; /*0x5238ab*/
  this->EliteOccupyWeapon = 0; /*0x5238b4*/
  this->qE30 = 0; /*0x5238ba*/
  this->u32_E24 = 0; /*0x5238c0*/
  this->u32_E34 = 0; /*0x5238c3*/
  this->u32_E38 = 0; /*0x5238c9*/
  this->RotCount = 8; /*0x5238cf*/
  this->u32_E28 = 0; /*0x5238d9*/
  this->RadarVisible = 0; /*0x5238dc*/
  this->Crushable_d = 1; /*0x5238e2*/
  this->Repairable = 0; /*0x5238e9*/
  this->u32_E2C = 0; /*0x5238ef*/
  this->Crewed = 0; /*0x5238f2*/
  this->u32_D35 = 0; /*0x5238f8*/
  this->u32_D36 = 0; /*0x5238fe*/
  this->u32_D3B = 0; /*0x523904*/
  this->SpawnRegenRate = 1; /*0x52390a*/
  this->DisableShadowCache = 1; /*0x523911*/
  this->DisableVoxelCache = 0; /*0x523918*/
  this->u32_D2E = 0; /*0x52391e*/
  this->RecordTable = (unsigned int)(__2_YAPAXI_Z(0x5E8u)); /*0x52392c*/
  for ( i = 0; i < 1512; *(unsigned int *)(i + this->RecordTable - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(unsigned int *)(i + this->RecordTable - 36) = 0; /*0x523942*/
    *(unsigned int *)(i + this->RecordTable - 32) = 0; /*0x52394c*/
    *(unsigned int *)(i + this->RecordTable - 28) = 0; /*0x523956*/
    *(unsigned int *)(i + this->RecordTable - 24) = -1; /*0x523960*/
  }
  return this; /*0x523972*/

}
} // namespace gamemd
// 0x523980
namespace gamemd {
unsigned int * InfantryTypeClass::Constructor_523980(int aP1)
{

  TechnoTypeClass::Construct((int)this, aP1); /*0x523988*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x523992*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x523998*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x52399e*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_InfantryTypeClass) */  /*0x5239a8*/
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5239ae) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5239b5) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x5239bc) */
  return &this->TechnoTypeClass; /*0x5239c5*/

}
} // namespace gamemd
// 0x523B40
namespace gamemd {
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{

  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v13[3]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v14[3]; // [esp+10h] [ebp-18h] BYREF
  int v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v5 ) /*0x523b55*/
  {
    v6 = InfantryClass::Construct(v5, v3, (int)this, ppv); /*0x523b68*/
    if ( v6 ) /*0x523b6c*/
    {
      v7 = a2[1] << 8; /*0x523b85*/
      v13[0] = (*a2 << 8) + 128; /*0x523b93*/
      v13[1] = v7 + 128; /*0x523b9b*/
      v13[2] = 0; /*0x523bb1*/
      v8 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v13); /*0x523bb9*/
      v9 = ObjectPlacement::CalcPosition((ObjectPlacement *)v8, v15, v13, 0, 0, 0); /*0x523bc0*/
      v14[0] = *v9; /*0x523bcf*/
      v10 = v9->vtable2; /*0x523bd5*/
      v14[1] = v10; /*0x523bd9*/
      v11 = v9->vtable3; /*0x523bdd*/
      v14[2] = v11; /*0x523be0*/
      if ( v14[0] != *(unsigned int *)&MEMORY[0xA8EB00].?[1692] /*0x523bf4*/
        || v10 != *(unsigned int *)&MEMORY[0xA8EB00].?[1696]
        || v11 != *(unsigned int *)&MEMORY[0xA8EB00].?[1700] )
      {
        return (*(char (**)(int, unsigned int *, int))(*(unsigned int *)v6 + 216))(v6, v14, 64); /*0x523c0b*/
      }
      (*(void (**)(int, int))(*(unsigned int *)v6 + 32))(v6, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/

}
} // namespace gamemd
// 0x5240A0
namespace gamemd {
int InfantryTypeClass::LoadFromINI(uint8_t *** a2, void *a2_2)
{

  int v3; // ecx
  int v4; // esi
  int PipIdx; // eax
  unsigned int *v6; // ebx
  unsigned int *v7; // eax
  unsigned int *v8; // ebx
  unsigned int *v9; // eax
  unsigned __int8 *inited; // eax
  DynamicVectorClass *v11; // eax
  char *i; // eax
  int v13; // ecx
  int v14; // edx
  char *j; // eax
  char Bool_Overwrite; // al
  int v17; // ebx
  int Index; // eax
  int v19; // ebx
  int v20; // eax
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  int Int_Overwrite; // eax
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  char v39; // al
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  DynamicVectorClass v44; // [esp-1Ch] [ebp-E8h] BYREF
  int v45; // [esp-4h] [ebp-D0h]
  unsigned __int8 ***v46; // [esp+0h] [ebp-CCh]
  DynamicVectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  DynamicVector v48; // [esp+14h] [ebp-B8h] BYREF
  int v49; // [esp+40h] [ebp-8Ch]
  int v50; // [esp+44h] [ebp-88h]
  int v51; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  v4 = v3; /*0x5240b0*/
  INIClass::ResetSection((INIClass *)this); /*0x5240b5*/
  v45 = (int)this; /*0x5240ba*/
  v4->DamageSparks = 0; /*0x5240bd*/
  if ( !(unsigned __int8)ObjectTypeClass::LoadExtras((TechnoTypeClass *)v45, a2, v46) ) /*0x5240c4*/
    return 0; /*0x524751*/
  v4->Pip_d = INIClass::GetPipIdx( /*0x5240e8*/
                             (INIClass *)this,
                             (unsigned __int8 *)(v4 + 36),
                             aPip,
                             v4->Pip_d);
  PipIdx = INIClass::GetPipIdx((INIClass *)this, (unsigned __int8 *)(v4 + 36), aOccupypip, v4->OccupyPip_d); /*0x5240fd*/
  v6 = v4->OccupyWeapon_d; /*0x524102*/
  v45 = 128; /*0x52410c*/
  v44.CapacityIncrement = (int)String; /*0x524111*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524112*/
  *(unsigned int *)v44.IsInitialized = aOccupyweapon; /*0x524117*/
  v44.Capacity = v4 + 36; /*0x52411c*/
  v4->OccupyPip_d = PipIdx; /*0x52411f*/
  if ( INIClass::GetString( /*0x524125*/
         (INIClass *)this,
         (unsigned __int8 *)v44.Capacity,
         *(unsigned __int8 **)v44.IsInitialized,
         (char *)v44.Count,
         (char *)v44.CapacityIncrement,
         v45) )
  {
    v7 = InfantryTypeClass::Find(String); /*0x524132*/
  }
  else
  {
    v7 = v6; /*0x524139*/
  }
  v8 = v4->EliteOccupyWeapon; /*0x52413b*/
  v4->OccupyWeapon_d = v7; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aEliteoccupywea,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v9 = InfantryTypeClass::Find(String); /*0x52416b*/
  }
  else
  {
    v9 = v8; /*0x524172*/
  }
  v4->EliteOccupyWeapon = v9; /*0x52417f*/
  INIClassIntList = &v44; /*0x524186*/
  DynamicVectorClass::Copy(&v44, &v4->u32_E88); /*0x52418a*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList_int) */  /*0x524198*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4(&v4->BarrelVoxel); /*0x5241a0*/
  INIClassIntList = (DynamicVectorClass *)GetINIClassIntList( /*0x5241b4*/
                                            (int)&v48,
                                            (unsigned __int8 ***)this,
                                            inited,
                                            (unsigned __int8 *)aVoicecomment,
                                            (void **)v44.ptr_0,
                                            (void *)v44.Items,
                                            v44.Capacity,
                                            *(__int16 *)v44.IsInitialized,
                                            v44.Count,
                                            v44.CapacityIncrement,
                                            v45);
  TypeList::Copy(&v4->u32_E88, INIClassIntList); /*0x5241b8*/
  v11 = INIClassIntList; /*0x5241bd*/
  *(unsigned int *)(v4 + 3736) = INIClassIntList->Count; /*0x5241c4*/
  *(unsigned int *)(v4 + 3740) = v11->CapacityIncrement; /*0x5241ca*/
  *(unsigned int *)(v4 + 3744) = v11[1].ptr_0; /*0x5241d4*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x5241d7*/
  VectorClass::Destroy((int)&v48); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeadbodies,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x524210*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_AnimTypeClass_const) */  /*0x52421f*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x524271*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v4->qE50); /*0x524294*/
  }
  VectorClass::CopyDefault(&v4->qE50, &v48.DynamicVector_field_0x1C); /*0x5242a6*/
  v13 = v50; /*0x5242af*/
  v14 = v51; /*0x5242b3*/
  *(unsigned int *)(v4 + 3680) = v49; /*0x5242b7*/
  *(unsigned int *)(v4 + 3684) = v13; /*0x5242ba*/
  *(unsigned int *)(v4 + 3688) = v14; /*0x5242bd*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeathanims,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x5242fa*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_AnimTypeClass_const) */  /*0x524309*/
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x52435b*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x524364*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v4->u32_E6C); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray(&v4->u32_E6C, &v48.DynamicVector_field_0x1C); /*0x52438c*/
  *(unsigned int *)(v4 + 3716) = v51; /*0x524399*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     &this->ptr_0,
                     (unsigned __int8 *)(v4 + 36),
                     aCyborg,
                     v4->Cyborg_2);
  LOBYTE(v45) = v4->NotHuman_2; /*0x5243c5*/
  v44.CapacityIncrement = (int)aNothuman; /*0x5243c6*/
  v44.Count = v4 + 36; /*0x5243cb*/
  v4->Cyborg_2 = Bool_Overwrite; /*0x5243cc*/
  v4->NotHuman_2 = INIClass::ReadBool_Overwrite( /*0x5243d7*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  if ( v4->Cyborg_2 ) /*0x5243dd*/
    v4->DamageSparks = 1; /*0x5243e7*/
  v17 = v4->u32_EA4; /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          (INIClass *)this,
          (unsigned __int8 *)(v4 + 36),
          aEnterwatersoun,
          &g_INI_DefaultBuffer,
          String,
          128)
    || (Index = VocClass::FindIndex((VocClass *)String), Index == -1) )
  {
    Index = v17; /*0x524422*/
  }
  v19 = v4->u32_EA8; /*0x524424*/
  v45 = 128; /*0x52442e*/
  v44.CapacityIncrement = (int)String; /*0x524433*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524434*/
  *(unsigned int *)v44.IsInitialized = aLeavewatersoun; /*0x524439*/
  v44.Capacity = v4 + 36; /*0x52443e*/
  v4->u32_EA4 = Index; /*0x524441*/
  if ( !INIClass::GetString( /*0x52445c*/
          (INIClass *)this,
          (unsigned __int8 *)v44.Capacity,
          *(unsigned __int8 **)v44.IsInitialized,
          (char *)v44.Count,
          (char *)v44.CapacityIncrement,
          v45)
    || (v20 = VocClass::FindIndex((VocClass *)String), v20 == -1) )
  {
    v20 = v19; /*0x52445e*/
  }
  LOBYTE(v45) = v4->Fearless_d; /*0x524468*/
  v44.CapacityIncrement = (int)aFearless; /*0x524469*/
  v44.Count = v4 + 36; /*0x52446e*/
  v4->u32_EA8 = v20; /*0x52446f*/
  v4->Fearless_d = INIClass::ReadBool_Overwrite( /*0x52447a*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v21 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aFraidycat, v4->Fraidycat_2); /*0x52448f*/
  v22 = v4->Infiltrate_2; /*0x524494*/
  v4->Fraidycat_2 = v21; /*0x52449a*/
  v23 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aInfiltrate, v22); /*0x5244a9*/
  LOBYTE(v45) = v4->Ivan_2; /*0x5244b6*/
  v44.CapacityIncrement = (int)aIvan; /*0x5244b7*/
  v44.Count = v4 + 36; /*0x5244bc*/
  v4->Infiltrate_2 = v23; /*0x5244bd*/
  v4->Ivan_2 = INIClass::ReadBool_Overwrite( /*0x5244c8*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v24 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aOccupier, v4->Occupier_d); /*0x5244dd*/
  v25 = v4->Assaulter_2; /*0x5244e2*/
  v4->Occupier_d = v24; /*0x5244e8*/
  v26 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aAssaulter, v25); /*0x5244f7*/
  v45 = v4->DetectionDistance; /*0x524504*/
  v44.CapacityIncrement = (int)aDetectiondista; /*0x524505*/
  v44.Count = v4 + 36; /*0x52450a*/
  v4->Assaulter_2 = v26; /*0x52450b*/
  v4->DetectionDistance = INIClass::ReadInt_Overwrite( /*0x524516*/
                             (bool *)this,
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (bool *)this,
                    (unsigned __int8 *)(v4 + 36),
                    aHarvestrate,
                    v4->HarvestRate);
  v28 = v4->C4_2; /*0x524530*/
  v4->HarvestRate = Int_Overwrite; /*0x524536*/
  v29 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aC4, v28); /*0x524545*/
  LOBYTE(v45) = v4->__pad_EC1; /*0x524552*/
  v44.CapacityIncrement = (int)&g_INI_Key_Civilian; /*0x524553*/
  v44.Count = v4 + 36; /*0x524558*/
  v4->C4_2 = v29; /*0x524559*/
  v4->__pad_EC1 = INIClass::ReadBool_Overwrite( /*0x524564*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v30 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aEngineer, v4->Engineer_2); /*0x524579*/
  v31 = v4->TiberiumProof_d; /*0x52457e*/
  v4->Engineer_2 = v30; /*0x524584*/
  v32 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aTiberiumproof, v31); /*0x524593*/
  LOBYTE(v45) = v4->Agent_2; /*0x5245a0*/
  v44.CapacityIncrement = (int)aAgent; /*0x5245a1*/
  v44.Count = v4 + 36; /*0x5245a6*/
  v4->TiberiumProof_d = v32; /*0x5245a7*/
  v4->Agent_2 = INIClass::ReadBool_Overwrite( /*0x5245b2*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v33 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aThief, v4->Thief_2); /*0x5245c7*/
  v34 = v4->VehicleThief_2; /*0x5245cc*/
  v4->Thief_2 = v33; /*0x5245d2*/
  v35 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aVehiclethief, v34); /*0x5245e1*/
  LOBYTE(v45) = v4->Doggie_2; /*0x5245ee*/
  v44.CapacityIncrement = (int)aDoggie; /*0x5245ef*/
  v44.Count = v4 + 36; /*0x5245f4*/
  v4->VehicleThief_2 = v35; /*0x5245f5*/
  v4->Doggie_2 = INIClass::ReadBool_Overwrite( /*0x524600*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v36 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aDeployer, v4->Deployer_d); /*0x524615*/
  v37 = v4->__pad_EC9; /*0x52461a*/
  v4->Deployer_d = v36; /*0x524620*/
  v38 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aDeployedcrusha, v37); /*0x52462f*/
  LOBYTE(v45) = v4->u32_ECA; /*0x52463c*/
  v44.CapacityIncrement = (int)aUseownname; /*0x52463d*/
  v44.Count = v4 + 36; /*0x524642*/
  *(unsigned char *)(v4 + 3785) = v38; /*0x524643*/
  v4->u32_ECA = INIClass::ReadBool_Overwrite( /*0x52464e*/
                            &this->ptr_0,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  *(unsigned char *)(v4 + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                            &this->ptr_0,
                            (unsigned __int8 *)(v4 + 36),
                            aJumpjetturn,
                            v4->u32_ECB);
  if ( *(unsigned char *)(v4 + 3778) ) /*0x52466e*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x524678*/
  if ( *(unsigned char *)(v4 + 3779) ) /*0x52467f*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x524689*/
  if ( *(unsigned char *)(v4 + 3780) ) /*0x524690*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x52469a*/
  v39 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int *)DataGlobal_887180,
          (unsigned __int8 *)(v4 + 504),
          aCrawls,
          v4->__pad_EBD);
  v45 = *(unsigned int *)(v4 + 3648); /*0x5246c9*/
  v44.CapacityIncrement = (int)aFireup; /*0x5246ca*/
  v44.Count = v4 + 504; /*0x5246cf*/
  *(unsigned char *)(v4 + 3773) = v39; /*0x5246d0*/
  *(unsigned int *)(v4 + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                             (bool *)DataGlobal_887180,
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  v40 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (bool *)DataGlobal_887180,
          (unsigned __int8 *)(v4 + 504),
          aFireprone,
          v4->u32_E44);
  v41 = *(unsigned int *)(v4 + 3656); /*0x5246f8*/
  *(unsigned int *)(v4 + 3652) = v40; /*0x5246fe*/
  v42 = INIClass::ReadInt_Overwrite((bool *)DataGlobal_887180, (unsigned __int8 *)(v4 + 504), aSecondaryfire, v41); /*0x524710*/
  v45 = *(unsigned int *)(v4 + 3660); /*0x524720*/
  v44.CapacityIncrement = (int)g_INI_Key_SecondaryProne; /*0x524721*/
  v44.Count = v4 + 504; /*0x524726*/
  *(unsigned int *)(v4 + 3656) = v42; /*0x524727*/
  *(unsigned int *)(v4 + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                             (bool *)DataGlobal_887180,
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  AnimSequence::Parse((AnimSequence *)v4); /*0x52473a*/
  return 1; /*0x524741*/

}
} // namespace gamemd
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData(InfantryTypeClass *aP0, InfantryTypeClass *aP0, void * a2, void * a3)
{

  aP0 = aP0; /*0x524964*/
  int v6 = 0; // ebx /*0x524968*/
  if ( aP0->Sequence[0] ) /*0x52496a*/
  {
    operator delete(&aP0->Sequence); /*0x524975*/
    aP0->Sequence[0] = 0; /*0x52497d*/
  }
  aP0 = aP0; /*0x524983*/
  int result; // eax
  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)aP0, aP0); /*0x524989*/
  result = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( aP0 ) /*0x52499c*/
      ((InfantryTypeClass *)(aP0))->Constructor_523980((int)&aP0); /*0x5249a5*/
    ((char *)aP0)->LoadAnim(); /*0x5249ad*/
    ((char *)aP0)->Load2DArt(); /*0x5249b4*/
    if ( aP0 != (InfantryTypeClass *)-3720 ) /*0x5249c1*/
    {
      ((DynamicVectorClass *)aP0->VoiceComment)->Construct(0, 0); /*0x5249c7*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x5249cc*/
    }
    int v4; // ebp
    int i; // ebx
    int j; // ebx
    int k; // ebx
    int m; // ebx
    int v13; // eax
    (*(void (__stdcall **)(int, InfantryTypeClass **, int, unsigned int, int))(aP0->vtable4)(aP0, &aP0, 4, 0, v4); /*0x5249de*/
    if ( aP0 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(aP0->vtable4)(aP0, &a2, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt((DynamicVector *)aP0->VoiceComment, &a2); /*0x5249ff*/
        ++v6; /*0x524a04*/
      }
      while ( v6 < aP0 ); /*0x524a09*/
    }
    if ( aP0 != (InfantryTypeClass *)-3664 ) /*0x524a13*/
    {
      ((DynamicVectorClass *)aP0->DeadBodies)->AnimTypeConstructor(0, 0); /*0x524a1b*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int))(aP0->vtable4)(aP0, &aP0, 4, 0); /*0x524a33*/
    for ( i = 0; i < aP0; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(aP0->vtable4)(aP0, &a2, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4((DynamicVector *)aP0->DeadBodies, &a2); /*0x524a56*/
    }
    for ( j = 0; j < aP0->DeadBodies[4]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0->DeadBodies[1] + 4 * j)); /*0x524a7d*/
    if ( aP0 != (InfantryTypeClass *)-3692 ) /*0x524a95*/
    {
      ((DynamicVectorClass *)aP0->DeathAnims)->AnimTypeConstructor(0, 0); /*0x524a9d*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(aP0->vtable4)(aP0, &aP0, 4); /*0x524ab5*/
    for ( k = 0; k < (int)aP0; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(aP0->vtable4)(aP0, &aP0, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4((DynamicVector *)aP0->DeathAnims, &aP0); /*0x524ad8*/
    }
    for ( m = 0; m < aP0->DeathAnims[4]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0->DeathAnims[1] + 4 * m)); /*0x524b00*/
    v13 = operator new(0x5E8u); /*0x524b15*/
    aP0->Sequence[0] = v13; /*0x524b1d*/
    (*(void (__stdcall **)(int, int, int, unsigned int))(aP0->vtable4)(aP0, v13, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->OccupyWeapon); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->EliteOccupyWeapon); /*0x524b4e*/
  }
  return result; /*0x524b57*/
}
}
// 0x524B60
namespace gamemd {
TechnoTypeClass * * InfantryTypeClass_SaveLoad_Prefix(InfantryTypeClass *aP0, unsigned int * a2, int * a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // ebp
  int v8; // edx
  int i; // ebx
  int v10; // edx
  int j; // ebx
  int v12; // edx
  int k; // ebx
  int v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]

  result = TechnoTypeClass::SaveLoad_Prefix_0((TechnoTypeClass *)aP0, a2, a3, v14, v15); /*0x524b72*/
  v7 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v8 = *a2; /*0x524b87*/
    a3 = (int *)aP0->VoiceComment[4]; /*0x524b94*/
    (*(void (__stdcall **)(unsigned int *, int **, int, unsigned int, int))(v8 + 16))(a2, &a3, 4, 0, v5); /*0x524b98*/
    for ( i = 0; i < a4; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->VoiceComment[1] + 4 * i, 4, 0); /*0x524bb6*/
    v10 = *a2; /*0x524bc6*/
    a4 = aP0->DeadBodies[4]; /*0x524bd2*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v10 + 16))(a2, &a4, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a4; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->DeadBodies[1] + 4 * j, 4, 0); /*0x524bf4*/
    v12 = *a2; /*0x524c04*/
    a4 = aP0->DeathAnims[4]; /*0x524c10*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v12 + 16))(a2, &a4, 4, 0); /*0x524c14*/
    for ( k = 0; k < a4; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->DeathAnims[1] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(unsigned int *, int, int))(*a2 + 16))(a2, aP0->Sequence[0], 1512); /*0x524c4d*/
    return v7; /*0x524c52*/
  }
  return result; /*0x524c51*/
}
}
// 0x524D70
namespace gamemd {  // G42.18c ns repair
InfantryTypeClass * InfantryTypeClass::ddtor(int Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  InfantryTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x524d76) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x524d7c) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x524d83) */
  /* X11: vtable install elided (implicit via InfantryTypeClass virtuals 0x524d8a) */
  AbstractClass::AnnounceExpiredPointer(&Block->ptr_0, 1); /*0x524d91*/
  v8 = Block; /*0x524da6*/
  v3 = (*(int (**)(unsigned int *, InfantryTypeClass **))(dword_A8E348 + 16))(&dword_A8E348, &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < dword_A8E358 && v3 < --dword_A8E358 ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((unsigned int *)dword_A8E34C + v3 - 1) = *((unsigned int *)dword_A8E34C + v3); /*0x524dd1*/
    }
    while ( v3 < dword_A8E358 ); /*0x524ddd*/
  }
  operator delete(((void *)Block->Sequence[0])); /*0x524de7*/
  Block->Sequence[0] = 0; /*0x524df1*/
  v4 = (void *)Block->VoiceComment[1]; /*0x524df7*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x524dff*/
  if ( v4 && (Block->u8_9) ) /*0x524e0b*/
  {
    operator delete((v4)); /*0x524e14*/
    Block->VoiceComment[1] = 0; /*0x524e1c*/
  }
  (Block->u8_9) = 0; /*0x524e22*/
  Block->VoiceComment[2] = 0; /*0x524e28*/
  v5 = (void *)Block->DeathAnims[1]; /*0x524e2e*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x524e34*/
  if ( v5 && (Block->u8_9) ) /*0x524e42*/
  {
    operator delete((v5)); /*0x524e4b*/
    Block->DeathAnims[1] = 0; /*0x524e53*/
  }
  (Block->u8_9) = 0; /*0x524e59*/
  Block->DeathAnims[2] = 0; /*0x524e5f*/
  v6 = (void *)Block->DeadBodies[1]; /*0x524e65*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x524e6b*/
  if ( v6 && (Block->u8_9) ) /*0x524e79*/
  {
    operator delete((v6)); /*0x524e82*/
    Block->DeadBodies[1] = 0; /*0x524e8a*/
  }
  (Block->u8_9) = 0; /*0x524e92*/
  Block->DeadBodies[2] = 0; /*0x524e98*/
  TechnoTypeClass::DTOR((int)Block); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    operator delete((void *)(Block)); /*0x524ead*/
  return (int)Block; /*0x524eb7*/
}
}  // G42.18c ns repair
// 0x524F20
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::CopyDataArray(unsigned int *aP1, void *a2)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (InfantryTypeClass *)aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*((void (**)(InfantryTypeClass *))this->TechnoTypeClass + 3))(this); /*0x524f2e*/
  v3 = aP1->Capacity; /*0x524f31*/
  this->vtable3 = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->vtable2 = 0; /*0x524f86*/
    (this->u8_D) = ((this->u8_D) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x524f8d*/
    LABEL_8:
    this->uniqueId = aP1->q010; /*0x524f91*/
      this->abstractFlags = aP1->u32_14; /*0x524f9a*/
      return &this->TechnoTypeClass; /*0x524f9d*/
  }
  v4 = __2_YAPAXI_Z(4 * (unsigned int)v3); /*0x524f43*/
  this->vtable2 = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  vtable2 = this->vtable3; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  (this->u8_D) = ((this->u8_D) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x524f59*/
  if ( (int)vtable2 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *((unsigned int *)this->vtable3 + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < (int)this->vtable3 ); /*0x524f71*/
  this->uniqueId = aP1->q010; /*0x524f76*/
  this->abstractFlags = aP1->u32_14; /*0x524f7c*/
  return &this->TechnoTypeClass; /*0x524f81*/

}
}  // G42.18c ns repair
// 0x772FA0
namespace gamemd {  // G42.18c ns repair
WeaponTypeClass * * InfantryTypeClass::Find(char *Source)
{
  int v2; // esi
  WeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( g_WeaponTypePool <= 0 ) /*0x772fd1*/
  {
  LABEL_6:
    v3 = (WeaponTypeClass *)operator new(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return WeaponTypeClass::Constructor(v3, Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)g_WeaponTypeConfig + v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= g_WeaponTypePool ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return (unsigned int *)*((unsigned int *)g_WeaponTypeConfig + v2); /*0x77300f*/
}
}  // G42.18c ns repair
// 0x523B10
namespace gamemd {  // G42.18c ns repair
InfantryClass *  InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
  int v2; // edi
  int v4; // eax

  v4 = operator new(0x6F0u); /*0x523b18*/
  if ( v4 ) /*0x523b22*/
    return (InfantryClass *)InfantryClass::Construct(v4, v2, (int)this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}
}  // G42.18c ns repair
// 0x523C20
namespace gamemd {  // G42.18c ns repair
int * InfantryTypeClass::GetDimensions(int a1)
{
  if ( (((unsigned int *)&stru_A8EB00)[1764] & 1) == 0 ) /*0x523c2b*/
  {
    ((unsigned int *)&stru_A8EB00)[1764] |= 1u; /*0x523c46*/
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1704] = 0; /*0x523c4c*/
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1708] = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return (int *)&((unsigned int *)&stru_A8EB00)[1704]; /*0x523c78*/
}
}  // G42.18c ns repair
// 0x524760
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
  void *v1; // esi

  v1 = (void *)(2 * *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1768]); /*0x52476c*/
  a1->ptr_0 = (void *)85; /*0x524777*/
  a1->ptr_1 = (void *)85; /*0x524779*/
  a1->ptr_2 = v1; /*0x52477c*/
  return &a1->ptr_0; /*0x52477f*/
}
}  // G42.18c ns repair
// 0x524790
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetGameplayValue()
{
  return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5848); /*0x52479b*/
}
}  // G42.18c ns repair
// 0x5247A0
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::StubReturnFalse()
{
  return 0; /*0x5247a2*/
}
}  // G42.18c ns repair
// 0x5247D0
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{

  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  void *v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x5247d9*/
  v6 = a2[1]; /*0x5247ea*/
  v7 = (void *)a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = (int)v7; /*0x5247fa*/
  if ( (int)v7 < GroundHeight ) /*0x524800*/
    v3 = Cell::GetGroundHeight(&v5); /*0x524811*/
  this->ptr_0 = v5; /*0x52481e*/
  this->ptr_4 = v6; /*0x524824*/
  this->ptr_8 = v3; /*0x524828*/
  return &this->ptr_0; /*0x52482b*/

}
}  // G42.18c ns repair
// 0x524840
namespace gamemd {  // G42.18c ns repair
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

  BuildingTypeClass::ProcessPower((int)this, a2); /*0x524849*/
  Power::TimerProcess(this->Pip[0]); /*0x524857*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->Sequence[0], 1512); /*0x52486a*/
  Power::TimerProcess(this->FireUp); /*0x524878*/
  Power::TimerProcess(this->FireProne); /*0x524886*/
  Power::TimerProcess(this->VoiceComment[4]); /*0x524894*/
  Power::TimerProcess(this->DeadBodies[4]); /*0x5248a2*/
  Power::TimerProcess(this->DeathAnims[4]); /*0x5248b0*/
  LOBYTE(v3) = this->Fearless; /*0x5248b5*/
  Power::FlagProcess((Power *)a2, v3); /*0x5248be*/
  LOBYTE(v4) = this->Crawls; /*0x5248c3*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5248cc*/
  LOBYTE(v5) = this->Infiltrate; /*0x5248d1*/
  Power::FlagProcess((Power *)a2, v5); /*0x5248da*/
  LOBYTE(v6) = this->Fraidycat; /*0x5248df*/
  Power::FlagProcess((Power *)a2, v6); /*0x5248e8*/
  LOBYTE(v7) = this->TiberiumProof; /*0x5248ed*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x5248f6*/
  LOBYTE(v8) = this->Civilian; /*0x5248fb*/
  Power::FlagProcess((Power *)a2, v8); /*0x524904*/
  LOBYTE(v9) = this->C4; /*0x524909*/
  Power::FlagProcess((Power *)a2, v9); /*0x524912*/
  LOBYTE(v10) = this->Engineer; /*0x524917*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x524920*/
  LOBYTE(v11) = this->Agent; /*0x524925*/
  Power::FlagProcess((Power *)a2, v11); /*0x52492e*/
  LOBYTE(v12) = this->Thief; /*0x524933*/
  Power::FlagProcess((Power *)a2, v12); /*0x52493c*/
  LOBYTE(v13) = this->VehicleThief; /*0x524941*/
  return Power::FlagProcess((Power *)a2, v13); /*0x52494f*/

}
}  // G42.18c ns repair
// 0x524C70
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = unk_7E95AC; /*0x524ca0*/
  return 0; /*0x524c7d*/
}
}  // G42.18c ns repair
// 0x524D40
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetTypeIdentifier()
{
  return 16; /*0x524d45*/
}
}  // G42.18c ns repair
// 0x524D50
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetObjectSize()
{
  return 3792; /*0x524d55*/
}
}
// 0x524D60
int InfantryTypeClass::GetAuxField()
{
  return this->ArrayIndex; /*0x524d66*/
}