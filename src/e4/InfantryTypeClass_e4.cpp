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

// 0x5236A0
namespace gamemd {
InfantryTypeClass * InfantryTypeClass::Constructor(ObjectClass * aP1)
{

  InfantryTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, 0); /*0x5236ae*/
  *((unsigned int *)this + 894) = -1; /*0x5236b3*/
  *((unsigned int *)this + 895) = 1; /*0x5236bd*/
  *((unsigned int *)this + 896) = 7; /*0x5236c7*/
  *((unsigned int *)this + 911) = 0; /*0x5236d1*/
  *((unsigned int *)this + 912) = 0; /*0x5236d7*/
  *((unsigned int *)this + 913) = 0; /*0x5236e3*/
  *((unsigned int *)this + 914) = 0; /*0x5236ea*/
  *((unsigned int *)this + 915) = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((unsigned int *)((char *)this + 3664), 0, 0); /*0x5236f9*/
  *((unsigned int *)this + 920) = 0; /*0x523703*/
  *((unsigned int *)this + 921) = 10; /*0x523706*/
  *((unsigned int *)this + 916) = &vt_TypeList_AnimTypeClass_const; /*0x523709*/
  AnimTypeVector::Constructor((unsigned int *)((char *)this + 3692), 0, 0); /*0x523719*/
  *((unsigned int *)this + 928) = 10; /*0x52371e*/
  *((unsigned int *)this + 927) = 0; /*0x523721*/
  *((unsigned int *)this + 923) = &vt_TypeList_AnimTypeClass_const; /*0x523724*/
  VectorClass::Construct((unsigned int *)((char *)this + 3720), 0, 0); /*0x523734*/
  *((unsigned int *)this + 935) = 10; /*0x523739*/
  *((unsigned int *)this + 934) = 0; /*0x52373c*/
  *((unsigned int *)this + 930) = &vt_TypeList_int; /*0x52373f*/
  *((unsigned int *)this + 937) = -1; /*0x523748*/
  *((unsigned int *)this + 938) = -1; /*0x52374e*/
  *((unsigned char *)this + 3756) = 0; /*0x523754*/
  *((unsigned char *)this + 3757) = 0; /*0x52375a*/
  *((unsigned char *)this + 3758) = 0; /*0x523760*/
  *((unsigned int *)this + 940) = 0; /*0x523766*/
  *((unsigned char *)this + 3764) = 0; /*0x52376c*/
  *((unsigned char *)this + 3765) = 0; /*0x523772*/
  *((unsigned int *)this + 942) = 1; /*0x523778*/
  *((unsigned char *)this + 3772) = 0; /*0x523782*/
  *((unsigned char *)this + 3773) = 1; /*0x523788*/
  *((unsigned char *)this + 3774) = 0; /*0x52378f*/
  *((unsigned char *)this + 3775) = 0; /*0x523795*/
  *((unsigned char *)this + 3776) = 0; /*0x52379b*/
  *((unsigned char *)this + 3777) = 0; /*0x5237a1*/
  *((unsigned char *)this + 3778) = 0; /*0x5237a7*/
  *((unsigned char *)this + 3779) = 0; /*0x5237ad*/
  *((unsigned char *)this + 3780) = 0; /*0x5237b6*/
  *((unsigned char *)this + 3781) = 0; /*0x5237bc*/
  *((unsigned char *)this + 3782) = 0; /*0x5237c3*/
  *((unsigned char *)this + 3783) = 0; /*0x5237c9*/
  *((unsigned char *)this + 3784) = 0; /*0x5237cf*/
  *((unsigned char *)this + 3785) = 1; /*0x5237d5*/
  *((unsigned char *)this + 3786) = 0; /*0x5237dc*/
  *((unsigned char *)this + 3787) = 0; /*0x5237e2*/
  *(unsigned int *)this = &vt_InfantryTypeClass; /*0x5237e8*/
  *((unsigned int *)this + 1) = &vt_InfantryTypeClass; /*0x5237ee*/
  *((unsigned int *)this + 2) = &vt_InfantryTypeClass; /*0x5237f4*/
  *((unsigned int *)this + 3) = &vt_InfantryTypeClass; /*0x5237fb*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x523802*/
  v3 = *(InfantryTypeClass **)&g_abs_A8D63C; /*0x523807*/
  if ( *(int *)&g_abs_A8D63C < *(int *)&g_abs_A8D63C /*0x523845*/
    || (g_abs_A8D63C || !*(unsigned int *)&g_abs_A8D63C)
    && *(int *)&g_abs_A8D63C > 0
    && (v4 = (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_A8D63C + 8))(
               &g_abs_A8D63C,
               *(unsigned int *)&g_abs_A8D63C + *(unsigned int *)&g_abs_A8D63C,
               0) == 0,
        v3 = *(InfantryTypeClass **)&g_abs_A8D63C,
        !v4) )
  {
    *(unsigned int *)&g_abs_A8D63C = &v3-((unsigned int *)(>vtable0))[1]; /*0x52384a*/
    *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * (unsigned int)v3) = this; /*0x523854*/
    v3 = *(InfantryTypeClass **)&g_abs_A8D63C; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( (int)v3 <= 0 ) /*0x523860*/
  {
LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = *(CCINIClass **)&g_abs_A8D63C; /*0x523862*/
    while ( *(unsigned int *)v6->__pad_0 != (unsigned int)(this) ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x52386d*/
      if ( v5 >= (int)v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  *((unsigned int *)this + 894) = v5; /*0x52387e*/
  *((unsigned int *)this + 898) = 0; /*0x523886*/
  *((unsigned int *)this + 897) = 0; /*0x523890*/
  *((unsigned int *)this + 899) = 0; /*0x523896*/
  *((unsigned int *)this + 901) = 0; /*0x523899*/
  *((unsigned int *)this + 902) = 0; /*0x52389f*/
  *((unsigned char *)this + 3612) = 0; /*0x5238a5*/
  *((unsigned int *)this + 900) = 0; /*0x5238ab*/
  *((unsigned int *)this + 904) = 0; /*0x5238b4*/
  *((unsigned int *)this + 908) = 0; /*0x5238ba*/
  *((unsigned int *)this + 905) = 0; /*0x5238c0*/
  *((unsigned int *)this + 909) = 0; /*0x5238c3*/
  *((unsigned char *)this + 3640) = 0; /*0x5238c9*/
  *((unsigned int *)this + 454) = 8; /*0x5238cf*/
  *((unsigned int *)this + 906) = 0; /*0x5238d9*/
  *((unsigned char *)this + 3227) = 0; /*0x5238dc*/
  *((unsigned char *)this + 557) = 1; /*0x5238e2*/
  *((unsigned char *)this + 3276) = 0; /*0x5238e9*/
  *((unsigned int *)this + 907) = 0; /*0x5238ef*/
  *((unsigned char *)this + 3277) = 0; /*0x5238f2*/
  *((unsigned char *)this + 3381) = 0; /*0x5238f8*/
  *((unsigned char *)this + 3382) = 0; /*0x5238fe*/
  *((unsigned char *)this + 3387) = 0; /*0x523904*/
  *((unsigned char *)this + 3384) = 1; /*0x52390a*/
  *((unsigned char *)this + 3479) = 1; /*0x523911*/
  *((unsigned char *)this + 3478) = 0; /*0x523918*/
  *((unsigned char *)this + 3374) = 0; /*0x52391e*/
  *((unsigned int *)this + 911) = RA2_OPNEW(0x5E8u); /*0x52392c*/
  for ( i = 0; i < 1512; *(unsigned int *)(i + *((unsigned int *)this + 911) - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(unsigned int *)(i + *((unsigned int *)this + 911) - 36) = 0; /*0x523942*/
    *(unsigned int *)(i + *((unsigned int *)this + 911) - 32) = 0; /*0x52394c*/
    *(unsigned int *)(i + *((unsigned int *)this + 911) - 28) = 0; /*0x523956*/
    *(unsigned int *)(i + *((unsigned int *)this + 911) - 24) = -1; /*0x523960*/
  }
  return this; /*0x523972*/

}
} // namespace gamemd
// 0x523980
namespace gamemd {
unsigned int * InfantryTypeClass::Constructor_523980(ObjectTypeClass * aP1)
{

  TechnoTypeClass::Construct((int)this, aP1); /*0x523988*/
  *((unsigned int *)this + 916) = &vt_TypeList_AnimTypeClass_const; /*0x523992*/
  *((unsigned int *)this + 923) = &vt_TypeList_AnimTypeClass_const; /*0x523998*/
  *((unsigned int *)this + 930) = &vt_TypeList_int; /*0x52399e*/
  *this = &vt_InfantryTypeClass; /*0x5239a8*/
  *((unsigned int *)this + 1) = &vt_InfantryTypeClass; /*0x5239ae*/
  *((unsigned int *)this + 2) = &vt_InfantryTypeClass; /*0x5239b5*/
  *((unsigned int *)this + 3) = &vt_InfantryTypeClass; /*0x5239bc*/
  return this; /*0x5239c5*/

}
} // namespace gamemd
// 0x523B40
namespace gamemd {
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{

  int v4; // eax
  InfantryClass *v5; // esi
  int v6; // eax
  unsigned int *v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int v12[3]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v13[3]; // [esp+10h] [ebp-18h] BYREF
  int a1[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v4 ) /*0x523b55*/
  {
    v5 = (InfantryClass *)InfantryClass::Construct(v4, this, ppv); /*0x523b68*/
    if ( v5 ) /*0x523b6c*/
    {
      v6 = a2[1] << 8; /*0x523b85*/
      v12[0] = (*a2 << 8) + 128; /*0x523b93*/
      v12[1] = v6 + 128; /*0x523b9b*/
      v12[2] = 0; /*0x523bb1*/
      v7 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v12); /*0x523bb9*/
      v8 = ObjectPlacement::CalcPosition(v7, a1, (IUnknown *)v12, 0, 0, 0); /*0x523bc0*/
      v13[0] = *v8; /*0x523bcf*/
      v9 = v8[1]; /*0x523bd5*/
      v13[1] = v9; /*0x523bd9*/
      v10 = v8[2]; /*0x523bdd*/
      v13[2] = v10; /*0x523be0*/
      if ( v13[0] != *(unsigned int *)&HouseClass_Player.__pad_5568[24524] /*0x523bf4*/
        || v9 != *(unsigned int *)&HouseClass_Player.__pad_5568[24528]
        || v10 != *(unsigned int *)&HouseClass_Player.__pad_5568[24532] )
      {
        return (*(char (**)(InfantryClass *, unsigned int *, int))(*(unsigned int *)v5->__pad_0 + 216))(v5, v13, 64); /*0x523c0b*/
      }
      (*(void (**)(InfantryClass *, int))(*(unsigned int *)v5->__pad_0 + 32))(v5, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/

}
} // namespace gamemd
// 0x5240A0
namespace gamemd {
int InfantryTypeClass::LoadFromINI( uint8_t *** a2)
{
    unsigned int v52 = 0;  /* G37 hoist */
    unsigned int v45 = 0;  /* G37 hoist */

  int PipIdx; // eax
  WeaponTypeClass *v5; // ebx
  WeaponTypeClass *v6; // eax
  WeaponTypeClass *v7; // ebx
  WeaponTypeClass *v8; // eax
  INIClass *inited; // eax
  VectorClass *v10; // eax
  AbstractClass *i; // eax
  VectorClass *v12; // ecx
  int v13; // edx
  AbstractClass *j; // eax
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
  CCINIClass *v40; // ecx
  int v41; // eax
  void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
  INIClass *v44; // [esp-14h] [ebp-E0h]
  VectorClass *v45; // [esp-10h] [ebp-DCh]
  CCINIClass *v46; // [esp-Ch] [ebp-D8h]
  CCINIClass *p_unknown30; // [esp-8h] [ebp-D4h]
  int v48; // [esp-4h] [ebp-D0h]
  double v49; // [esp+0h] [ebp-CCh]
  uint8_t ***v50; // [esp+8h] [ebp-C4h]
  VectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  VectorClass v52; // [esp+14h] [ebp-B8h] BYREF
  DynamicVector aP1; // [esp+30h] [ebp-9Ch] BYREF

  INIClass::ResetSection(a2); /*0x5240b5*/
  v48 = (int)a2; /*0x5240ba*/
  *(unsigned char *)(a2 + 3215) = 0; /*0x5240bd*/
  if ( !ObjectTypeClass::LoadExtras((CCINIClass *)v48, v49, v50) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(unsigned int *)(a2 + 3580) = INIClass::GetPipIdx(a2, (CCINIClass *)(a2 + 36), aPip, *(BaseClass **)(a2 + 3580)); /*0x5240e8*/
  PipIdx = INIClass::GetPipIdx(a2, (CCINIClass *)(a2 + 36), &unk_825A60, *(BaseClass **)(a2 + 3584)); /*0x5240fd*/
  v5 = *(WeaponTypeClass **)(a2 + 3588); /*0x524102*/
  v48 = 128; /*0x52410c*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524111*/
  v46 = (CCINIClass *)&stru_87C374.__pad_579C[33876]; /*0x524112*/
  v45 = (VectorClass *)&unk_825A50; /*0x524117*/
  v44 = (INIClass *)(a2 + 36); /*0x52411c*/
  *(unsigned int *)(a2 + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString(a2, v44, (uint8_t *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) ) /*0x524125*/
    v6 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x524132*/
  else
    v6 = v5; /*0x524139*/
  v7 = *(WeaponTypeClass **)(a2 + 3616); /*0x52413b*/
  *(unsigned int *)(a2 + 3588) = v6; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         a2,
         (INIClass *)(a2 + 36),
         &unk_825A3C,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    v8 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x52416b*/
  }
  else
  {
    v8 = v7; /*0x524172*/
  }
  *(unsigned int *)(a2 + 3616) = v8; /*0x52417f*/
  INIClassIntList = (VectorClass *)v43; /*0x524186*/
  DynamicVectorClass::Copy(v43, (DynamicVector *)(a2 + 3720)); /*0x52418a*/
  INIClassIntList->vtable0 = &vt_TypeList_int; /*0x524198*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a2 + 36)); /*0x5241a0*/
  INIClassIntList = GetINIClassIntList( /*0x5241b4*/
                      (int)&v52,
                      a2,
                      inited,
                      byte_825A2C,
                      v43[0],
                      v43[1],
                      (int)v44,
                      (int16_t)v45,
                      (int)v46,
                      (int)p_unknown30,
                      v48);
  TypeList::Copy((unsigned int *)(a2 + 3720), INIClassIntList); /*0x5241b8*/
  v10 = INIClassIntList; /*0x5241bd*/
  *(unsigned int *)(a2 + 3736) = INIClassIntList[1].vtable0; /*0x5241c4*/
  *(unsigned int *)(a2 + 3740) = v10[1].Items; /*0x5241ca*/
  *(unsigned int *)(a2 + 3744) = v10[1].Capacity; /*0x5241d4*/
  v52.vtable0 = &vt_VectorClass_int; /*0x5241d7*/
  VectorClass::Destroy((int)&v52); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         a2,
         (INIClass *)(a2 + 36),
         &unk_825A20,
         (INIClass *)&stru_87C374.__pad_579C[33876],
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
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(a2 + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((unsigned int *)(a2 + 3664), (VectorClass *)&aP1); /*0x5242a6*/
  v12 = *(VectorClass **)aP1.__pad_14; /*0x5242af*/
  v13 = *(unsigned int *)&aP1.__pad_14[4]; /*0x5242b3*/
  *(unsigned int *)(a2 + 3680) = aP1.field_10; /*0x5242b7*/
  *(unsigned int *)(a2 + 3684) = v12; /*0x5242ba*/
  *(unsigned int *)(a2 + 3688) = v13; /*0x5242bd*/
  *(unsigned int *)aP1.__pad_0 = &vt_VectorClass_AnimTypeClass_const; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         a2,
         (INIClass *)(a2 + 36),
         &unk_825A14,
         (INIClass *)&stru_87C374.__pad_579C[33876],
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
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(a2 + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray((unsigned int *)(a2 + 3692), &aP1); /*0x52438c*/
  *(unsigned int *)(a2 + 3716) = *(unsigned int *)&aP1.__pad_14[4]; /*0x524399*/
  *(unsigned int *)aP1.__pad_0 = &vt_VectorClass_AnimTypeClass_const; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int)a2,
                     (uint8_t *)(a2 + 36),
                     &unk_825A0C,
                     *(unsigned char *)(a2 + 3756));
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3757); /*0x5243c5*/
  p_unknown30 = &unk_825A00; /*0x5243c6*/
  v46 = (CCINIClass *)(a2 + 36); /*0x5243cb*/
  *(unsigned char *)(a2 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(unsigned char *)(a2 + 3757) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x5243d7*/
  if ( *(unsigned char *)(a2 + 3756) ) /*0x5243dd*/
    *(unsigned char *)(a2 + 3215) = 1; /*0x5243e7*/
  v16 = *(unsigned int *)(a2 + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          a2,
          (INIClass *)(a2 + 36),
          &unk_8259F0,
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP1.field_1C,
          128)
    || (Index = VocClass::FindIndex(&aP1.field_1C), Index == -1) )
  {
    Index = v16; /*0x524422*/
  }
  v18 = *(unsigned int *)(a2 + 3752); /*0x524424*/
  v48 = 128; /*0x52442e*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524433*/
  v46 = (CCINIClass *)&stru_87C374.__pad_579C[33876]; /*0x524434*/
  v45 = (VectorClass *)&unk_8259E0; /*0x524439*/
  v44 = (INIClass *)(a2 + 36); /*0x52443e*/
  *(unsigned int *)(a2 + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString(a2, v44, (uint8_t *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) /*0x52445c*/
    || (v19 = VocClass::FindIndex(&aP1.field_1C), v19 == -1) )
  {
    v19 = v18; /*0x52445e*/
  }
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3772); /*0x524468*/
  p_unknown30 = &unk_8259D4; /*0x524469*/
  v46 = (CCINIClass *)(a2 + 36); /*0x52446e*/
  *(unsigned int *)(a2 + 3752) = v19; /*0x52446f*/
  *(unsigned char *)(a2 + 3772) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x52447a*/
  v20 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8259C8, *(unsigned char *)(a2 + 3775)); /*0x52448f*/
  v21 = *(unsigned char *)(a2 + 3774); /*0x524494*/
  *(unsigned char *)(a2 + 3775) = v20; /*0x52449a*/
  v22 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8259BC, v21); /*0x5244a9*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3758); /*0x5244b6*/
  p_unknown30 = &unk_8259B4; /*0x5244b7*/
  v46 = (CCINIClass *)(a2 + 36); /*0x5244bc*/
  *(unsigned char *)(a2 + 3774) = v22; /*0x5244bd*/
  *(unsigned char *)(a2 + 3758) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x5244c8*/
  v23 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8259A8, *(unsigned char *)(a2 + 3764)); /*0x5244dd*/
  v24 = *(unsigned char *)(a2 + 3765); /*0x5244e2*/
  *(unsigned char *)(a2 + 3764) = v23; /*0x5244e8*/
  v25 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_82599C, v24); /*0x5244f7*/
  v48 = *(unsigned int *)(a2 + 3760); /*0x524504*/
  p_unknown30 = &unk_825988; /*0x524505*/
  v46 = (CCINIClass *)(a2 + 36); /*0x52450a*/
  *(unsigned char *)(a2 + 3765) = v25; /*0x52450b*/
  *(unsigned int *)(a2 + 3760) = INIClass::ReadInt_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, (INIClass *)v48); /*0x524516*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (int)a2,
                    (uint8_t *)(a2 + 36),
                    &unk_82597C,
                    *(INIClass **)(a2 + 3768));
  v27 = *(unsigned char *)(a2 + 3778); /*0x524530*/
  *(unsigned int *)(a2 + 3768) = Int_Overwrite; /*0x524536*/
  v28 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_825978, v27); /*0x524545*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3777); /*0x524552*/
  p_unknown30 = (CCINIClass *)&g_INI_Key_Easy.unknown30; /*0x524553*/
  v46 = (CCINIClass *)(a2 + 36); /*0x524558*/
  *(unsigned char *)(a2 + 3778) = v28; /*0x524559*/
  *(unsigned char *)(a2 + 3777) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x524564*/
  v29 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_82596C, *(unsigned char *)(a2 + 3779)); /*0x524579*/
  v30 = *(unsigned char *)(a2 + 3776); /*0x52457e*/
  *(unsigned char *)(a2 + 3779) = v29; /*0x524584*/
  v31 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_82595C, v30); /*0x524593*/
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3780); /*0x5245a0*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.lineTrailer; /*0x5245a1*/
  v46 = (CCINIClass *)(a2 + 36); /*0x5245a6*/
  *(unsigned char *)(a2 + 3776) = v31; /*0x5245a7*/
  *(unsigned char *)(a2 + 3780) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x5245b2*/
  v32 = INIClass::ReadBool_Overwrite( /*0x5245c7*/
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_8258AC.location[1],
          *(unsigned char *)(a2 + 3781));
  v33 = *(unsigned char *)(a2 + 3782); /*0x5245cc*/
  *(unsigned char *)(a2 + 3781) = v32; /*0x5245d2*/
  v34 = INIClass::ReadBool_Overwrite( /*0x5245e1*/
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_8258AC.isAliveFlag,
          v33);
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3783); /*0x5245ee*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.parachute; /*0x5245ef*/
  v46 = (CCINIClass *)(a2 + 36); /*0x5245f4*/
  *(unsigned char *)(a2 + 3782) = v34; /*0x5245f5*/
  *(unsigned char *)(a2 + 3783) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x524600*/
  v35 = INIClass::ReadBool_Overwrite( /*0x524615*/
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_8258AC.visibilityFlags,
          *(unsigned char *)(a2 + 3784));
  v36 = *(unsigned char *)(a2 + 3785); /*0x52461a*/
  *(unsigned char *)(a2 + 3784) = v35; /*0x524620*/
  v37 = INIClass::ReadBool_Overwrite( /*0x52462f*/
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_8258AC.bombVisible,
          v36);
  IDA_LOBYTE(v48) = *(unsigned char *)(a2 + 3786); /*0x52463c*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.customSound_controller[3]; /*0x52463d*/
  v46 = (CCINIClass *)(a2 + 36); /*0x524642*/
  *(unsigned char *)(a2 + 3785) = v37; /*0x524643*/
  *(unsigned char *)(a2 + 3786) = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)v46, p_unknown30, v48); /*0x52464e*/
  *(unsigned char *)(a2 + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              (CCINIClass *)stru_8258AC.customSound_controller,
                              *(unsigned char *)(a2 + 3787));
  if ( *(unsigned char *)(a2 + 3778) ) /*0x52466e*/
    *(unsigned char *)(a2 + 3774) = 1; /*0x524678*/
  if ( *(unsigned char *)(a2 + 3779) ) /*0x52467f*/
    *(unsigned char *)(a2 + 3774) = 1; /*0x524689*/
  if ( *(unsigned char *)(a2 + 3780) ) /*0x524690*/
    *(unsigned char *)(a2 + 3774) = 1; /*0x52469a*/
  v38 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int)&stru_87C374.__pad_579C[22128],
          (uint8_t *)(a2 + 504),
          (CCINIClass *)&stru_8258AC.ambientSoundController[3],
          *(unsigned char *)(a2 + 3773));
  v48 = *(unsigned int *)(a2 + 3648); /*0x5246c9*/
  p_unknown30 = (CCINIClass *)stru_8257B8.__pad_20; /*0x5246ca*/
  v46 = (CCINIClass *)(a2 + 504); /*0x5246cf*/
  *(unsigned char *)(a2 + 3773) = v38; /*0x5246d0*/
  *(unsigned int *)(a2 + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                               (int)&stru_87C374.__pad_579C[22128],
                               (uint8_t *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  v39 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (int)&stru_87C374.__pad_579C[22128],
          (uint8_t *)(a2 + 504),
          &stru_8257B8,
          *(INIClass **)(a2 + 3652));
  v40 = *(CCINIClass **)(a2 + 3656); /*0x5246f8*/
  *(unsigned int *)(a2 + 3652) = v39; /*0x5246fe*/
  v41 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (int)&stru_87C374.__pad_579C[22128],
          (uint8_t *)(a2 + 504),
          (CCINIClass *)g_INI_Key_SecondaryProne.sectionHead,
          (INIClass *)v40);
  v48 = *(unsigned int *)(a2 + 3660); /*0x524720*/
  p_unknown30 = &g_INI_Key_SecondaryProne; /*0x524721*/
  v46 = (CCINIClass *)(a2 + 504); /*0x524726*/
  *(unsigned int *)(a2 + 3656) = v41; /*0x524727*/
  *(unsigned int *)(a2 + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                               (int)&stru_87C374.__pad_579C[22128],
                               (uint8_t *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  AnimSequence::Parse(a2); /*0x52473a*/
  return 1; /*0x524741*/

}
} // namespace gamemd
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData(InfantryTypeClass *aP0)
{
  int v4; // ebp
  InfantryTypeClass *v5; // edi
  int v6; // ebx
  int v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  int v13; // eax
  int v14; // [esp+70h] [ebp-4h]

  v5 = aP0; /*0x524964*/
  v6 = 0; /*0x524968*/
  if ( aP0->Sequence[0] ) /*0x52496a*/
  {
    RA2_OPDEL((void *)aP0->Sequence[0]); /*0x524975*/
    v5->Sequence[0] = 0; /*0x52497d*/
  }
  v7 = a2; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)v5, a2); /*0x524989*/
  v14 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v5 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v5, (int)&aP0); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v5); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v5); /*0x5249b4*/
    if ( v5 != (InfantryTypeClass *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)v5->VoiceComment, 0, 0); /*0x5249c7*/
      v5->VoiceComment[0] = (int)&TypeList_int_vftable; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, InfantryTypeClass **, int, unsigned int, int))(*(unsigned int *)v7 + 12))(v7, &aP0, 4, 0, v4); /*0x5249de*/
    if ( a2 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a3, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt((DynamicVector *)v5->VoiceComment, &a3); /*0x5249ff*/
        ++v6; /*0x524a04*/
      }
      while ( v6 < a2 ); /*0x524a09*/
    }
    if ( v5 != (InfantryTypeClass *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeadBodies, 0, 0); /*0x524a1b*/
      v5->DeadBodies[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a2, 4, 0); /*0x524a33*/
    for ( i = 0; i < a2; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a3, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeadBodies, &a3); /*0x524a56*/
    }
    for ( j = 0; j < v5->DeadBodies[4]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeadBodies[1] + 4 * j)); /*0x524a7d*/
    if ( v5 != (InfantryTypeClass *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeathAnims, 0, 0); /*0x524a9d*/
      v5->DeathAnims[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(unsigned int *)v7 + 12))(v7, &a2, 4); /*0x524ab5*/
    for ( k = 0; k < (int)aP0; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a2, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeathAnims, &a2); /*0x524ad8*/
    }
    for ( m = 0; m < v5->DeathAnims[4]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeathAnims[1] + 4 * m)); /*0x524b00*/
    v13 = RA2_OPNEW(0x5E8u); /*0x524b15*/
    v5->Sequence[0] = v13; /*0x524b1d*/
    (*(void (__stdcall **)(int, int, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, v13, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->OccupyWeapon); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->EliteOccupyWeapon); /*0x524b4e*/
    return v14; /*0x524b53*/
  }
  return result; /*0x524b57*/
}
}
// 0x524B60
namespace gamemd {
TechnoTypeClass * * InfantryTypeClass_SaveLoad_Prefix(InfantryTypeClass *aP0)
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
InfantryTypeClass * InfantryTypeClass::ddtor(int Block, char a2)
{

  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)Block = &vt_InfantryTypeClass; /*0x524d76*/
  *(unsigned int *)(Block + 4) = &vt_InfantryTypeClass; /*0x524d7c*/
  *(unsigned int *)(Block + 8) = &vt_InfantryTypeClass; /*0x524d83*/
  *(unsigned int *)(Block + 12) = &vt_InfantryTypeClass; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer((void **)Block, 1); /*0x524d91*/
  v8 = Block; /*0x524da6*/
  v3 = (*(int (**)(int *, int *))(g_abs_A8E348 + 16))(&g_abs_A8E348, &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < g_abs_A8E358 && v3 < --g_abs_A8E358 ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((unsigned int *)g_abs_A8E34C + v3 - 1) = *((unsigned int *)g_abs_A8E34C + v3); /*0x524dd1*/
    }
    while ( v3 < g_abs_A8E358 ); /*0x524ddd*/
  }
  OperatorDelete(*(void **)(Block + 3644)); /*0x524de7*/
  *(unsigned int *)(Block + 3644) = 0; /*0x524df1*/
  v4 = *(void **)(Block + 3724); /*0x524df7*/
  *(unsigned int *)(Block + 3720) = &vt_VectorClass_int; /*0x524dff*/
  if ( v4 && *(unsigned char *)(Block + 3733) ) /*0x524e0b*/
  {
    OperatorDelete(v4); /*0x524e14*/
    *(unsigned int *)(Block + 3724) = 0; /*0x524e1c*/
  }
  *(unsigned char *)(Block + 3733) = 0; /*0x524e22*/
  *(unsigned int *)(Block + 3728) = 0; /*0x524e28*/
  v5 = *(void **)(Block + 3696); /*0x524e2e*/
  *(unsigned int *)(Block + 3692) = &vt_VectorClass_AnimTypeClass_const; /*0x524e34*/
  if ( v5 && *(unsigned char *)(Block + 3705) ) /*0x524e42*/
  {
    OperatorDelete(v5); /*0x524e4b*/
    *(unsigned int *)(Block + 3696) = 0; /*0x524e53*/
  }
  *(unsigned char *)(Block + 3705) = 0; /*0x524e59*/
  *(unsigned int *)(Block + 3700) = 0; /*0x524e5f*/
  v6 = *(void **)(Block + 3668); /*0x524e65*/
  *(unsigned int *)(Block + 3664) = &vt_VectorClass_AnimTypeClass_const; /*0x524e6b*/
  if ( v6 && *(unsigned char *)(Block + 3677) ) /*0x524e79*/
  {
    OperatorDelete(v6); /*0x524e82*/
    *(unsigned int *)(Block + 3668) = 0; /*0x524e8a*/
  }
  *(unsigned char *)(Block + 3677) = 0; /*0x524e92*/
  *(unsigned int *)(Block + 3672) = 0; /*0x524e98*/
  TechnoTypeClass::DTOR(Block); /*0x524e9e*/
  if ( (Block & 1) != 0 ) /*0x524eaa*/
    OperatorDelete((void *)Block); /*0x524ead*/
  return (InfantryTypeClass *)Block; /*0x524eb7*/

}
// 0x524F20
unsigned int * InfantryTypeClass::CopyDataArray(DynamicVector * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (unsigned int *)aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*(void (**)(unsigned int *))(*(unsigned int *)this + 48))(this); /*0x524f2e*/
  v3 = aP1->field_8; /*0x524f31*/
  *((unsigned int *)this + 2) = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    *((unsigned int *)this + 1) = 0; /*0x524f86*/
    *((unsigned char *)this + 13) = 0; /*0x524f8d*/
LABEL_8:
    *((unsigned int *)this + 4) = aP1->field_10; /*0x524f91*/
    *((unsigned int *)this + 5) = *(unsigned int *)aP1->__pad_14; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x524f43*/
  *((unsigned int *)this + 1) = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  v5 = *((unsigned int *)this + 2); /*0x524f52*/
  v6 = 0; /*0x524f55*/
  *((unsigned char *)this + 13) = 1; /*0x524f59*/
  if ( v5 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x524f71*/
  *((unsigned int *)this + 4) = aP1->field_10; /*0x524f76*/
  *((unsigned int *)this + 5) = *(unsigned int *)aP1->__pad_14; /*0x524f7c*/
  return this; /*0x524f81*/

}
// 0x772FA0
WeaponTypeClass * * InfantryTypeClass::Find(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] <= 0 ) /*0x772fd1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return (WeaponTypeClass *)WeaponTypeClass::Constructor(v3, Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= *(int *)&stru_87C374.__pad_579C[23144] ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return *(WeaponTypeClass **)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * v2); /*0x77300f*/

}
// 0x523B10
InfantryClass *  InfantryTypeClass::ConstructInfantry( AbstractClass * ppv)
{

  int v3; // eax

  v3 = RA2_OPNEW(0x6F0u); /*0x523b18*/
  if ( v3 ) /*0x523b22*/
    return (InfantryClass *)InfantryClass::Construct(v3, this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/

}
// 0x523C20
int * InfantryTypeClass::GetDimensions(int a1)
{

  if ( (g_abs_A8F2C8 & 1) == 0 ) /*0x523c2b*/
  {
    g_abs_A8F2C8 |= 1u; /*0x523c46*/
    g_abs_A8F28C = 0; /*0x523c4c*/
    g_abs_A8F290 = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return &g_abs_A8F28C; /*0x523c78*/

}
// 0x524760
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{

  int v1; // esi

  v1 = 2 * g_abs_A8F2CC; /*0x52476c*/
  *a1 = 85; /*0x524777*/
  a1[1] = 85; /*0x524779*/
  a1[2] = v1; /*0x52477c*/
  return a1; /*0x52477f*/

}
// 0x524790
int InfantryTypeClass::GetGameplayValue()
{

  return g_abs_8871E0[1].?; /*0x52479b*/

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

  BuildingTypeClass::ProcessPower(this, a2); /*0x524849*/
  Power::TimerProcess(*((unsigned int *)this + 895)); /*0x524857*/
  Checksummer::Add_Buffer((unsigned int *)a2, *(uint8_t **)((char *)this + 3644), 1512); /*0x52486a*/
  Power::TimerProcess(*((unsigned int *)this + 912)); /*0x524878*/
  Power::TimerProcess(*((unsigned int *)this + 913)); /*0x524886*/
  Power::TimerProcess(*((unsigned int *)this + 934)); /*0x524894*/
  Power::TimerProcess(*((unsigned int *)this + 920)); /*0x5248a2*/
  Power::TimerProcess(*((unsigned int *)this + 927)); /*0x5248b0*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 3772); /*0x5248b5*/
  Power::FlagProcess(a2, v3); /*0x5248be*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 3773); /*0x5248c3*/
  v5 = Power::FlagProcess(a2, v4); /*0x5248cc*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 3774); /*0x5248d1*/
  Power::FlagProcess(a2, v5); /*0x5248da*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 3775); /*0x5248df*/
  Power::FlagProcess(a2, v6); /*0x5248e8*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 3776); /*0x5248ed*/
  v8 = Power::FlagProcess(a2, v7); /*0x5248f6*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 3777); /*0x5248fb*/
  Power::FlagProcess(a2, v8); /*0x524904*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 3778); /*0x524909*/
  Power::FlagProcess(a2, v9); /*0x524912*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 3779); /*0x524917*/
  v11 = Power::FlagProcess(a2, v10); /*0x524920*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 3780); /*0x524925*/
  Power::FlagProcess(a2, v11); /*0x52492e*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 3781); /*0x524933*/
  Power::FlagProcess(a2, v12); /*0x52493c*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 3782); /*0x524941*/
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

  return *((unsigned int *)this + 894); /*0x524d66*/

}