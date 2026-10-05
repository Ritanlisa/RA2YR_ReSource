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
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x5236A0
namespace gamemd {
InfantryTypeClass * InfantryTypeClass::Constructor(char *aP1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this,(int)(aP1), 0); /*0x5236ae*/
  *((unsigned int *)this + 894) = -1; /*0x5236b3*/
  *((unsigned int *)this + 895) = 1; /*0x5236bd*/
  *((unsigned int *)this + 896) = 7; /*0x5236c7*/
  *((unsigned int *)this + 911) = 0; /*0x5236d1*/
  *((unsigned int *)this + 912) = 0; /*0x5236d7*/
  *((unsigned int *)this + 913) = 0; /*0x5236e3*/
  *((unsigned int *)this + 914) = 0; /*0x5236ea*/
  *((unsigned int *)this + 915) = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((int)((unsigned int *)((char *)this + 3664)), 0, 0); /*0x5236f9*/
  *((unsigned int *)this + 920) = 0; /*0x523703*/
  *((unsigned int *)this + 921) = 10; /*0x523706*/
  *((unsigned int *)this + 916) = (unsigned int)(&vt_TypeList); /*0x523709*/
  AnimTypeVector::Constructor((int)((unsigned int *)((char *)this + 3692)), 0, 0); /*0x523719*/
  *((unsigned int *)this + 928) = 10; /*0x52371e*/
  *((unsigned int *)this + 927) = 0; /*0x523721*/
  *((unsigned int *)this + 923) = (unsigned int)(&vt_TypeList); /*0x523724*/
  ((VectorClass *)((unsigned int *)((char *)this + 3720)))->Construct(0, 0); /*0x523734*/
  *((unsigned int *)this + 935) = 10; /*0x523739*/
  *((unsigned int *)this + 934) = 0; /*0x52373c*/
  *((unsigned int *)this + 930) = (unsigned int)(&vt_TypeList); /*0x52373f*/
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
  *(unsigned int *)this = (unsigned int)(&vt_InfantryTypeClass); /*0x5237e8*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_InfantryTypeClass); /*0x5237ee*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_InfantryTypeClass); /*0x5237f4*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_InfantryTypeClass); /*0x5237fb*/
  AbstractClass::GenerateUniqueID((int)((char *)this + 4)); /*0x523802*/
  v3 = dword_A8E358; /*0x523807*/
  if ( dword_A8E358 < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A8E348 + 8))(
               (int *)&dword_A8E348,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = dword_A8E358,
        !v4) )
  {
    dword_A8E358 = (unsigned int)(v3 + 1);
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
    v6 = (unsigned int *)(dword_A8E34C);
    while ( *(unsigned int *)(unsigned int)(v6) != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
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
  *((unsigned int *)this + 911) = (unsigned int)(__2_YAPAXI_Z(0x5E8u)); /*0x52392c*/
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

  ((TechnoTypeClass*)(int)this)->Construct(aP1); /*0x523988*/
  (&this->DeadBodies)[0] = (int)&vt_TypeList; /*0x523992*/
  (&this->DeathAnims)[0] = (int)&vt_TypeList; /*0x523998*/
  (&this->VoiceComment)[0] = (int)&vt_TypeList; /*0x52399e*/
  this->vtable1 = &vt_InfantryTypeClass; /*0x5239a8*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_InfantryTypeClass); /*0x5239ae*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_InfantryTypeClass); /*0x5239b5*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_InfantryTypeClass); /*0x5239bc*/
  return (unsigned int *)(this); /*0x5239c5*/

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

  v5 = (int)(__2_YAPAXI_Z(0x6F0u)); /*0x523b4b*/
  if ( v5 ) /*0x523b55*/
  {
    v6 = InfantryClass::Construct(v5, v3, (int)this, ppv); /*0x523b68*/
    if ( v6 ) /*0x523b6c*/
    {
      v7 = a2[1] << 8; /*0x523b85*/
      v13[0] = (*a2 << 8) + 128; /*0x523b93*/
      v13[1] = v7 + 128; /*0x523b9b*/
      v13[2] = 0; /*0x523bb1*/
      v8 = (gamemd::CellClass *)(((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v13)); /*0x523bb9*/
      v9 = ObjectPlacement::CalcPosition((ObjectPlacement *)v8, v15, v13, 0, 0, 0); /*0x523bc0*/
      v14[0] = *v9; /*0x523bcf*/
      v10 = v9[1]; /*0x523bd5*/
      v14[1] = v10; /*0x523bd9*/
      v11 = v9[2]; /*0x523bdd*/
      v14[2] = v11; /*0x523be0*/
      if ( v14[0] != *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1692) /*0x523bf4*/
        || v10 != *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1696)
        || v11 != *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1700) )
      {
        return (*(char (**)(int, unsigned int *, int))(*(unsigned int *)&v6->q_360)(v6, v14, 64); /*0x523c0b*/
      }
      (*(void (**)(int, int))(*(unsigned int *)&v6->needsRedraw)(v6, 1); /*0x523c14*/
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
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  uint8_t *inited; // eax
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
  uint8_t ***v46; // [esp+0h] [ebp-CCh]
  DynamicVectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  DynamicVector v48; // [esp+14h] [ebp-B8h] BYREF
  int v49; // [esp+40h] [ebp-8Ch]
  int v50; // [esp+44h] [ebp-88h]
  int v51; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  v4 = v3; /*0x5240b0*/
  ((INIClass*)((INIClass *)a2))->ResetSection(); /*0x5240b5*/
  v45 = (int)a2; /*0x5240ba*/
  *(unsigned char *)(v4 + 3215) = 0; /*0x5240bd*/
  if ( !(uint8_t)ObjectTypeClass::LoadExtras((gamemd::CCINIClass *)((TechnoTypeClass *)v45), a2, v46) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(unsigned int *)(v4 + 3580) = INIClass::GetPipIdx( /*0x5240e8*/
                             (INIClass *)a2,
                             (uint8_t *)(v4 + 36),
                             aPip,
                             *(unsigned int *)(v4 + 3580));
  PipIdx = INIClass::GetPipIdx((INIClass *)a2, (uint8_t *)(v4 + 36), aOccupypip, *(unsigned int *)(v4 + 3584)); /*0x5240fd*/
  v6 = *(unsigned int *)(v4 + 3588); /*0x524102*/
  v45 = 128; /*0x52410c*/
  v44.CapacityIncrement = (int)String; /*0x524111*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524112*/
  ((unsigned int *)&v44)[0] = (int)aOccupyweapon; /*0x524117*/
  *(unsigned int *)(unsigned int *)((char *)&v44 + 3) = v4 + 36; /*0x52411c*/
  *(unsigned int *)(v4 + 3584) = PipIdx; /*0x52411f*/
  if ( ((INIClass*)/*0x524125*/
         (INIClass *)a2)->GetString(/*0x524125*/ *(uint8_t **)(unsigned int *)((char *)&v44 + 3), (uint8_t *)((char *)&v44), (char *)v44.Count, (char *)v44.CapacityIncrement, v45) )
  {
    v7 = (int)(InfantryTypeClass::Find(String)); /*0x524132*/
  }
  else
  {
    v7 = v6; /*0x524139*/
  }
  v8 = *(unsigned int *)(v4 + 3616); /*0x52413b*/
  *(unsigned int *)(v4 + 3588) = v7; /*0x524141*/
  if ( /*0x52415e*/
         ((INIClass*)((INIClass *)a2))->GetString(/*0x52415e*/ (uint8_t *)(v4 + 36), aEliteoccupywea, &g_INI_DefaultBuffer, String, 128) )
  {
    v9 = (int)(InfantryTypeClass::Find(String)); /*0x52416b*/
  }
  else
  {
    v9 = v8; /*0x524172*/
  }
  *(unsigned int *)(v4 + 3616) = v9; /*0x52417f*/
  INIClassIntList = (DynamicVectorClass *)(&v44); /*0x524186*/
  ((DynamicVectorClass *)(&v44))->Copy((unsigned int *)(v4 + 3720)); /*0x52418a*/
  *(unsigned int *)INIClassIntList->vtable1 = &vt_TypeList; /*0x524198*/
  inited = (uint8_t *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36)); /*0x5241a0*/
  INIClassIntList = (DynamicVectorClass *)GetINIClassIntList( /*0x5241b4*/
                                            (int)&v48,
                                            (uint8_t ***)a2,
                                            inited,
                                            (uint8_t *)aVoicecomment,
                                            *(void ***)v44.VectorClass,
                                            *(void **)(unsigned int *)((char *)&v44 + 3),
                                            *(int *)(unsigned int *)((char *)&v44 + 3),
                                            ((char *)&v44),
                                            v44.Count,
                                            v44.CapacityIncrement,
                                            v45);
  TypeList::Copy((TypeList *)(v4 + 3720), INIClassIntList); /*0x5241b8*/
  v11 = INIClassIntList; /*0x5241bd*/
  *(unsigned int *)(v4 + 3736) = INIClassIntList->Count; /*0x5241c4*/
  *(unsigned int *)(v4 + 3740) = v11->CapacityIncrement; /*0x5241ca*/
  *(unsigned int *)(v4 + 3744) = *(unsigned int *)v11[1].VectorClass; /*0x5241d4*/
  *(unsigned int *)v48.__pad_0 = (unsigned int)(&vt_VectorClass); /*0x5241d7*/
  ((VectorClass *)((HWND)((int)&v48)))->Destroy(); /*0x5241df*/
  if ( ((INIClass*)/*0x5241fb*/
         (INIClass *)a2)->GetString(/*0x5241fb*/ (uint8_t *)(v4 + 36), aDeadbodies, &g_INI_DefaultBuffer, String, 128) )
  {
    ((DynamicVectorClass *)((DynamicVectorClass *)&v48))->AnimTypeConstructor(0, 0); /*0x524210*/
    *(unsigned int *)v48.__pad_0 = (unsigned int)(&vt_TypeList); /*0x52421f*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate((char *)((gamemd::AbstractClass *)(i))); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        ((DynamicVector *)(&v48))->Add_Alt4((unsigned int *)(&INIClassIntList)); /*0x524250*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x524271*/
    *(unsigned int *)v48.__pad_0 = (unsigned int)(&vt_VectorClass); /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (unsigned int *)(v4 + 3664)); /*0x524294*/
  }
  ((VectorClass *)((VectorClass *)(v4 + 3664)))->CopyDefault(&v48.DynamicVector_field_0x1C); /*0x5242a6*/
  v13 = v50; /*0x5242af*/
  v14 = v51; /*0x5242b3*/
  *(unsigned int *)(v4 + 3680) = v49; /*0x5242b7*/
  *(unsigned int *)(v4 + 3684) = v13; /*0x5242ba*/
  *(unsigned int *)(v4 + 3688) = v14; /*0x5242bd*/
  v48.DynamicVector_field_0x1C = (unsigned int)((AbstractClass *)&vt_VectorClass); /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5242cd*/
  if ( /*0x5242e9*/
         ((INIClass*)((INIClass *)a2))->GetString(/*0x5242e9*/ (uint8_t *)(v4 + 36), aDeathanims, &g_INI_DefaultBuffer, String, 128) )
  {
    ((DynamicVectorClass *)((DynamicVectorClass *)&v48))->AnimTypeConstructor(0, 0); /*0x5242fa*/
    *(unsigned int *)v48.__pad_0 = (unsigned int)(&vt_TypeList); /*0x524309*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate((char *)((gamemd::AbstractClass *)(j))); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        ((DynamicVector *)(&v48))->Add_Alt4((unsigned int *)(&INIClassIntList)); /*0x52433a*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x52435b*/
    *(unsigned int *)v48.__pad_0 = (unsigned int)(&vt_VectorClass); /*0x524364*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (unsigned int *)(v4 + 3692)); /*0x52437a*/
  }
  ((InfantryTypeClass *)((InfantryTypeClass *)(v4 + 3692)))->CopyDataArray(&v48.DynamicVector_field_0x1C); /*0x52438c*/
  *(unsigned int *)(v4 + 3716) = v51; /*0x524399*/
  v48.DynamicVector_field_0x1C = (unsigned int)((AbstractClass *)&vt_VectorClass); /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int *)a2,
                     (uint8_t *)(v4 + 36),
                     aCyborg,
                     *(unsigned char *)(v4 + 3756));
  LOBYTE(v45) = *(unsigned char *)(v4 + 3757); /*0x5243c5*/
  v44.CapacityIncrement = (int)aNothuman; /*0x5243c6*/
  v44.Count = v4 + 36; /*0x5243cb*/
  *(unsigned char *)(v4 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(unsigned char *)(v4 + 3757) = INIClass::ReadBool_Overwrite( /*0x5243d7*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  if ( *(unsigned char *)(v4 + 3756) ) /*0x5243dd*/
    *(unsigned char *)(v4 + 3215) = 1; /*0x5243e7*/
  v17 = *(unsigned int *)(v4 + 3748); /*0x5243ee*/
  if ( !((INIClass*)/*0x524420*/
          (INIClass *)a2)->GetString(/*0x524420*/ (uint8_t *)(v4 + 36), aEnterwatersoun, &g_INI_DefaultBuffer, String, 128)
    || (Index = VocClass::FindIndex((VocClass *)String), Index == -1) )
  {
    Index = v17; /*0x524422*/
  }
  v19 = *(unsigned int *)(v4 + 3752); /*0x524424*/
  v45 = 128; /*0x52442e*/
  v44.CapacityIncrement = (int)String; /*0x524433*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524434*/
  ((unsigned int *)&v44)[0] = (int)aLeavewatersoun; /*0x524439*/
  *(unsigned int *)(unsigned int *)((char *)&v44 + 3) = v4 + 36; /*0x52443e*/
  *(unsigned int *)(v4 + 3748) = Index; /*0x524441*/
  if ( !/*0x52445c*/
          ((INIClass*)((INIClass *)a2))->GetString(/*0x52445c*/ *(uint8_t **)(unsigned int *)((char *)&v44 + 3), (uint8_t *)((char *)&v44), (char *)v44.Count, (char *)v44.CapacityIncrement, v45)
    || (v20 = VocClass::FindIndex((VocClass *)String), v20 == -1) )
  {
    v20 = v19; /*0x52445e*/
  }
  LOBYTE(v45) = *(unsigned char *)(v4 + 3772); /*0x524468*/
  v44.CapacityIncrement = (int)aFearless; /*0x524469*/
  v44.Count = v4 + 36; /*0x52446e*/
  *(unsigned int *)(v4 + 3752) = v20; /*0x52446f*/
  *(unsigned char *)(v4 + 3772) = INIClass::ReadBool_Overwrite( /*0x52447a*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  v21 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aFraidycat, *(unsigned char *)(v4 + 3775)); /*0x52448f*/
  v22 = *(unsigned char *)(v4 + 3774); /*0x524494*/
  *(unsigned char *)(v4 + 3775) = v21; /*0x52449a*/
  v23 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aInfiltrate, v22); /*0x5244a9*/
  LOBYTE(v45) = *(unsigned char *)(v4 + 3758); /*0x5244b6*/
  v44.CapacityIncrement = (int)aIvan; /*0x5244b7*/
  v44.Count = v4 + 36; /*0x5244bc*/
  *(unsigned char *)(v4 + 3774) = v23; /*0x5244bd*/
  *(unsigned char *)(v4 + 3758) = INIClass::ReadBool_Overwrite( /*0x5244c8*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  v24 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aOccupier, *(unsigned char *)(v4 + 3764)); /*0x5244dd*/
  v25 = *(unsigned char *)(v4 + 3765); /*0x5244e2*/
  *(unsigned char *)(v4 + 3764) = v24; /*0x5244e8*/
  v26 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aAssaulter, v25); /*0x5244f7*/
  v45 = *(unsigned int *)(v4 + 3760); /*0x524504*/
  v44.CapacityIncrement = (int)aDetectiondista; /*0x524505*/
  v44.Count = v4 + 36; /*0x52450a*/
  *(unsigned char *)(v4 + 3765) = v26; /*0x52450b*/
  *(unsigned int *)(v4 + 3760) = INIClass::ReadInt_Overwrite( /*0x524516*/
                             (bool *)a2,
                             (uint8_t *)v44.Count,
                             (uint8_t *)v44.CapacityIncrement,
                             v45);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (bool *)a2,
                    (uint8_t *)(v4 + 36),
                    aHarvestrate,
                    *(unsigned int *)(v4 + 3768));
  v28 = *(unsigned char *)(v4 + 3778); /*0x524530*/
  *(unsigned int *)(v4 + 3768) = Int_Overwrite; /*0x524536*/
  v29 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aC4, v28); /*0x524545*/
  LOBYTE(v45) = *(unsigned char *)(v4 + 3777); /*0x524552*/
  v44.CapacityIncrement = (int)&g_INI_Key_Civilian; /*0x524553*/
  v44.Count = v4 + 36; /*0x524558*/
  *(unsigned char *)(v4 + 3778) = v29; /*0x524559*/
  *(unsigned char *)(v4 + 3777) = INIClass::ReadBool_Overwrite( /*0x524564*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  v30 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aEngineer, *(unsigned char *)(v4 + 3779)); /*0x524579*/
  v31 = *(unsigned char *)(v4 + 3776); /*0x52457e*/
  *(unsigned char *)(v4 + 3779) = v30; /*0x524584*/
  v32 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aTiberiumproof, v31); /*0x524593*/
  LOBYTE(v45) = *(unsigned char *)(v4 + 3780); /*0x5245a0*/
  v44.CapacityIncrement = (int)aAgent; /*0x5245a1*/
  v44.Count = v4 + 36; /*0x5245a6*/
  *(unsigned char *)(v4 + 3776) = v32; /*0x5245a7*/
  *(unsigned char *)(v4 + 3780) = INIClass::ReadBool_Overwrite( /*0x5245b2*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  v33 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aThief, *(unsigned char *)(v4 + 3781)); /*0x5245c7*/
  v34 = *(unsigned char *)(v4 + 3782); /*0x5245cc*/
  *(unsigned char *)(v4 + 3781) = v33; /*0x5245d2*/
  v35 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aVehiclethief, v34); /*0x5245e1*/
  LOBYTE(v45) = *(unsigned char *)(v4 + 3783); /*0x5245ee*/
  v44.CapacityIncrement = (int)aDoggie; /*0x5245ef*/
  v44.Count = v4 + 36; /*0x5245f4*/
  *(unsigned char *)(v4 + 3782) = v35; /*0x5245f5*/
  *(unsigned char *)(v4 + 3783) = INIClass::ReadBool_Overwrite( /*0x524600*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  v36 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aDeployer, *(unsigned char *)(v4 + 3784)); /*0x524615*/
  v37 = *(unsigned char *)(v4 + 3785); /*0x52461a*/
  *(unsigned char *)(v4 + 3784) = v36; /*0x524620*/
  v38 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)(v4 + 36), aDeployedcrusha, v37); /*0x52462f*/
  LOBYTE(v45) = *(unsigned char *)(v4 + 3786); /*0x52463c*/
  v44.CapacityIncrement = (int)aUseownname; /*0x52463d*/
  v44.Count = v4 + 36; /*0x524642*/
  *(unsigned char *)(v4 + 3785) = v38; /*0x524643*/
  *(unsigned char *)(v4 + 3786) = INIClass::ReadBool_Overwrite( /*0x52464e*/
                            (int *)a2,
                            (uint8_t *)v44.Count,
                            (uint8_t *)v44.CapacityIncrement,
                            v45);
  *(unsigned char *)(v4 + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                            (int *)a2,
                            (uint8_t *)(v4 + 36),
                            aJumpjetturn,
                            *(unsigned char *)(v4 + 3787));
  if ( *(unsigned char *)(v4 + 3778) ) /*0x52466e*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x524678*/
  if ( *(unsigned char *)(v4 + 3779) ) /*0x52467f*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x524689*/
  if ( *(unsigned char *)(v4 + 3780) ) /*0x524690*/
    *(unsigned char *)(v4 + 3774) = 1; /*0x52469a*/
  v39 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)(v4 + 504),
          aCrawls,
          *(unsigned char *)(v4 + 3773));
  v45 = *(unsigned int *)(v4 + 3648); /*0x5246c9*/
  v44.CapacityIncrement = (int)aFireup; /*0x5246ca*/
  v44.Count = v4 + 504; /*0x5246cf*/
  *(unsigned char *)(v4 + 3773) = v39; /*0x5246d0*/
  *(unsigned int *)(v4 + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (uint8_t *)v44.Count,
                             (uint8_t *)v44.CapacityIncrement,
                             v45);
  v40 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)(v4 + 504),
          aFireprone,
          *(unsigned int *)(v4 + 3652));
  v41 = *(unsigned int *)(v4 + 3656); /*0x5246f8*/
  *(unsigned int *)(v4 + 3652) = v40; /*0x5246fe*/
  v42 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)(v4 + 504),
          aSecondaryfire,
          v41);
  v45 = *(unsigned int *)(v4 + 3660); /*0x524720*/
  v44.CapacityIncrement = (int)g_INI_Key_SecondaryProne; /*0x524721*/
  v44.Count = v4 + 504; /*0x524726*/
  *(unsigned int *)(v4 + 3656) = v42; /*0x524727*/
  *(unsigned int *)(v4 + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (uint8_t *)v44.Count,
                             (uint8_t *)v44.CapacityIncrement,
                             v45);
  AnimSequence::Parse((AnimSequence *)v4); /*0x52473a*/
  return 1; /*0x524741*/

}
} // namespace gamemd
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData(InfantryTypeClass *aP0, void * a2, void * a3)
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
      ((InfantryTypeClass*)v5)->Constructor_523980((int)&aP0); /*0x5249a5*/
    ((VoxelAnimType*)(char *)v5)->LoadAnim(); /*0x5249ad*/
    ((ObjectTypeClass*)(char *)v5)->Load2DArt(); /*0x5249b4*/
    if ( v5 != (InfantryTypeClass *)-3720 ) /*0x5249c1*/
    {
      ((DynamicVectorClass *)((DynamicVectorClass *)v5->VoiceComment))->Construct(0, 0); /*0x5249c7*/
      (&v5->VoiceComment)[0] = (int)&TypeList_int_vftable; /*0x5249cc*/
    }
    (*(void (**)(int, InfantryTypeClass **, int, unsigned int, int))(*(unsigned int *)v7 + 12))(v7, &aP0, 4, 0, v4); /*0x5249de*/
    if ( a2 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a3, 4, 0); /*0x5249f5*/
        ((DynamicVector *)((DynamicVector *)v5->VoiceComment))->Add_Alt(&a3); /*0x5249ff*/
        ++v6; /*0x524a04*/
      }
      while ( v6 < a2 ); /*0x524a09*/
    }
    if ( v5 != (InfantryTypeClass *)-3664 ) /*0x524a13*/
    {
      ((DynamicVectorClass *)((DynamicVectorClass *)v5->DeadBodies))->AnimTypeConstructor(0, 0); /*0x524a1b*/
      (&v5->DeadBodies)[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x524a20*/
    }
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a2, 4, 0); /*0x524a33*/
    for ( i = 0; i < a2; ++i ) /*0x524a3e*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a3, 4, 0); /*0x524a4c*/
      ((DynamicVector *)((DynamicVector *)v5->DeadBodies))->Add_Alt4(&a3); /*0x524a56*/
    }
    for ( j = 0; j < (&v5->DeadBodies)[4]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)((&v5->DeadBodies)[1] + 4 * j)); /*0x524a7d*/
    if ( v5 != (InfantryTypeClass *)-3692 ) /*0x524a95*/
    {
      ((DynamicVectorClass *)((DynamicVectorClass *)v5->DeathAnims))->AnimTypeConstructor(0, 0); /*0x524a9d*/
      v5->DeathAnims[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x524aa2*/
    }
    (*(void (**)(int, int *, int))(*(unsigned int *)v7 + 12))(v7, &a2, 4); /*0x524ab5*/
    for ( k = 0; k < (int)aP0; ++k ) /*0x524ac0*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, &a2, 4, 0); /*0x524ace*/
      ((DynamicVector *)((DynamicVector *)v5->DeathAnims))->Add_Alt4(&a2); /*0x524ad8*/
    }
    for ( m = 0; m < v5->DeathAnims[4]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeathAnims[1] + 4 * m)); /*0x524b00*/
    v13 = RA2_OPNEW(0x5E8u); /*0x524b15*/
    v5->Sequence[0] = v13; /*0x524b1d*/
    (*(void (**)(int, int, int, unsigned int))(*(unsigned int *)v7 + 12))(v7, v13, 1512, 0); /*0x524b2e*/
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
    (*(void (**)(unsigned int *, int **, int, unsigned int, int))(v8 + 16))(a2, &a3, 4, 0, v5); /*0x524b98*/
    for ( i = 0; i < a4; ++i ) /*0x524ba3*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->VoiceComment[1] + 4 * i, 4, 0); /*0x524bb6*/
    v10 = *a2; /*0x524bc6*/
    a4 = aP0->DeadBodies[4]; /*0x524bd2*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v10 + 16))(a2, &a4, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a4; ++j ) /*0x524be1*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->DeadBodies[1] + 4 * j, 4, 0); /*0x524bf4*/
    v12 = *a2; /*0x524c04*/
    a4 = aP0->DeathAnims[4]; /*0x524c10*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v12 + 16))(a2, &a4, 4, 0); /*0x524c14*/
    for ( k = 0; k < a4; ++k ) /*0x524c1f*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->DeathAnims[1] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (**)(unsigned int *, int, int))(*a2 + 16))(a2, aP0->Sequence[0], 1512); /*0x524c4d*/
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

  Block->vtable1 = &vt_InfantryTypeClass; /*0x524d76*/
  ((unsigned int *)Block)[0] = &vt_InfantryTypeClass; /*0x524d7c*/
  ((unsigned int *)Block)[0] = &vt_InfantryTypeClass; /*0x524d83*/
  ((unsigned int *)Block)[0] = &vt_InfantryTypeClass; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x524d91*/
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
  __3_YAXPAX_Z((void *)Block->Sequence[0]); /*0x524de7*/
  Block->Sequence[0] = 0; /*0x524df1*/
  v4 = (void *)Block->VoiceComment[1]; /*0x524df7*/
  Block->VoiceComment[0] = (int)&vt_VectorClass; /*0x524dff*/
  if ( v4 && BYTE1(Block->VoiceComment[3]) ) /*0x524e0b*/
  {
    __3_YAXPAX_Z(v4); /*0x524e14*/
    Block->VoiceComment[1] = 0; /*0x524e1c*/
  }
  BYTE1(Block->VoiceComment[3]) = 0; /*0x524e22*/
  Block->VoiceComment[2] = 0; /*0x524e28*/
  v5 = (void *)Block->DeathAnims[1]; /*0x524e2e*/
  Block->DeathAnims[0] = (int)&vt_VectorClass; /*0x524e34*/
  if ( v5 && BYTE1(Block->DeathAnims[3]) ) /*0x524e42*/
  {
    __3_YAXPAX_Z(v5); /*0x524e4b*/
    Block->DeathAnims[1] = 0; /*0x524e53*/
  }
  BYTE1(Block->DeathAnims[3]) = 0; /*0x524e59*/
  Block->DeathAnims[2] = 0; /*0x524e5f*/
  v6 = (void *)Block->DeadBodies[1]; /*0x524e65*/
  Block->DeadBodies[0] = (int)&vt_VectorClass; /*0x524e6b*/
  if ( v6 && BYTE1(Block->DeadBodies[3]) ) /*0x524e79*/
  {
    __3_YAXPAX_Z(v6); /*0x524e82*/
    Block->DeadBodies[1] = 0; /*0x524e8a*/
  }
  BYTE1(Block->DeadBodies[3]) = 0; /*0x524e92*/
  Block->DeadBodies[2] = 0; /*0x524e98*/
  TechnoTypeClass::DTOR((int)Block); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    __3_YAXPAX_Z(Block); /*0x524ead*/
  return (int)Block; /*0x524eb7*/

}
}  // G42.18c ns repair
// 0x524F20
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::CopyDataArray(unsigned int *aP1)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (InfantryTypeClass *)aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*((void (**)(InfantryTypeClass *))this->vtable1 + 3))(this); /*0x524f2e*/
  v3 = (void *)aP1[2]; /*0x524f31*/
  ((unsigned int *)this)[0] = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    ((unsigned int *)this)[0] = 0; /*0x524f86*/
    BYTE1(((unsigned int *)this)[0]) = 0; /*0x524f8d*/
LABEL_8:
    ((unsigned int *)this)[0] = aP1[4]; /*0x524f91*/
    ((unsigned int *)this)[0] = aP1[5]; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x524f43*/
  ((unsigned int *)this)[0] = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  vtable2 = ((unsigned int *)this)[0]; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  BYTE1(((unsigned int *)this)[0]) = 1; /*0x524f59*/
  if ( (int)vtable2 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < (int)((unsigned int *)this)[0] ); /*0x524f71*/
  ((unsigned int *)this)[0] = aP1[4]; /*0x524f76*/
  ((unsigned int *)this)[0] = aP1[5]; /*0x524f7c*/
  return this; /*0x524f81*/

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
    v3 = (WeaponTypeClass *)__2_YAPAXI_Z(0x160u); /*0x772ff6*/
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

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b18*/
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

  if ( (*((unsigned int *)((char *)&stru_A8EB00 + 1764)) & 1) == 0 ) /*0x523c2b*/
  {
    *((unsigned int *)((char *)&stru_A8EB00 + 1764)) |= 1u; /*0x523c46*/
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1704) = 0; /*0x523c4c*/
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1708) = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return (int *)&(unsigned int *)((char *)&stru_A8EB00 + 1704); /*0x523c78*/

}
}  // G42.18c ns repair
// 0x524760
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{

  void *v1; // esi

  v1 = (void *)(2 * *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1768)); /*0x52476c*/
  a1->TechnoTypeClass = (void *)85; /*0x524777*/
  ((unsigned int *)a1)[0] = (void *)85; /*0x524779*/
  ((unsigned int *)a1)[0] = v1; /*0x52477c*/
  return a1; /*0x52477f*/

}
}  // G42.18c ns repair
// 0x524790
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5848); /*0x52479b*/

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
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x5247d9*/
  v6 = (void *)a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = (void *)v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x524811*/
  a1->TechnoTypeClass = v5; /*0x52481e*/
  ((unsigned int *)a1)[0] = v6; /*0x524824*/
  ((unsigned int *)a1)[0] = v3; /*0x524828*/
  return a1; /*0x52482b*/

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
  ((Checksummer*)((Checksummer *)a2))->Add_Buffer((uint8_t *)this->Sequence[0], 1512); /*0x52486a*/
  Power::TimerProcess(this->FireUp); /*0x524878*/
  Power::TimerProcess(this->FireProne); /*0x524886*/
  Power::TimerProcess(this->VoiceComment[4]); /*0x524894*/
  Power::TimerProcess(this->DeadBodies[4]); /*0x5248a2*/
  Power::TimerProcess(this->DeathAnims[4]); /*0x5248b0*/
  LOBYTE(v3) = this->Fearless; /*0x5248b5*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x5248be*/
  LOBYTE(v4) = this->Crawls; /*0x5248c3*/
  v5 = ((Power *)((Power *)a2))->FlagProcess(v4); /*0x5248cc*/
  LOBYTE(v5) = this->Infiltrate; /*0x5248d1*/
  ((Power *)((Power *)a2))->FlagProcess(v5); /*0x5248da*/
  LOBYTE(v6) = this->Fraidycat; /*0x5248df*/
  ((Power *)((Power *)a2))->FlagProcess(v6); /*0x5248e8*/
  LOBYTE(v7) = this->TiberiumProof; /*0x5248ed*/
  v8 = ((Power *)((Power *)a2))->FlagProcess(v7); /*0x5248f6*/
  LOBYTE(v8) = this->Civilian; /*0x5248fb*/
  ((Power *)((Power *)a2))->FlagProcess(v8); /*0x524904*/
  LOBYTE(v9) = this->C4; /*0x524909*/
  ((Power *)((Power *)a2))->FlagProcess(v9); /*0x524912*/
  LOBYTE(v10) = this->Engineer; /*0x524917*/
  v11 = ((Power *)((Power *)a2))->FlagProcess(v10); /*0x524920*/
  LOBYTE(v11) = this->Agent; /*0x524925*/
  ((Power *)((Power *)a2))->FlagProcess(v11); /*0x52492e*/
  LOBYTE(v12) = this->Thief; /*0x524933*/
  ((Power *)((Power *)a2))->FlagProcess(v12); /*0x52493c*/
  LOBYTE(v13) = this->VehicleThief; /*0x524941*/
  return ((Power *)((Power *)a2))->FlagProcess(v13); /*0x52494f*/

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
}  // G42.18c ns repair
// 0x524D60
int InfantryTypeClass::GetAuxField()
{

  return this->ArrayIndex; /*0x524d66*/

}
