// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/FlyLocomotionClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"

// 0x4CC9A0
namespace gamemd {
int FlyLocomotionClass::LocomotionClass()
{
  int v2; // edx

  LocomotionClass::Init(); /*0x4cc9a3*/
    *((unsigned char *)this + 96) = 0;
    *((unsigned int *)this + 112) = MEMORY[0x8B3C78];
    *((unsigned int *)this + 128) = MEMORY[0x8B3C7C];
    *((unsigned int *)this + 144) = MEMORY[0x8B3C80];
    *((unsigned int *)this + 160) = MEMORY[0x8B3C78];
    *((unsigned int *)this + 176) = MEMORY[0x8B3C7C];
  v2 = dword_8B3C80; /*0x4cc9df*/
    *((unsigned int *)this + 256) = 0;
    *((unsigned int *)this + 288) = 0;
    *((unsigned char *)this + 208) = 0;
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 272) = 0;
    *((unsigned int *)this + 304) = 0;
    *((unsigned char *)this + 320) = 0;
    *((unsigned char *)this + 324) = 0;
    *((unsigned char *)this + 328) = 0;
    *((unsigned char *)this + 332) = 0;
    *((unsigned int *)this + 336) = 0;
    *((unsigned int *)this + 352) = 0;
    *((unsigned char *)this + 368) = 0;
    *(unsigned int *)this = &FlyLocomotionClass::`vftable';
    *((unsigned int *)this + 16) = &FlyLocomotionClass::`vftable';
    *((unsigned int *)this + 192) = v2;
    return this;
}
} // namespace gamemd
// 0x4CFE80
namespace gamemd {
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{
    unsigned int v8 = 0;  /* G37 hoist */
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v8 = 0;  /* G37 hoist */
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v8 = 0;  /* G37 hoist */
    unsigned int v7 = 0;  /* G37 hoist */
  HouseClass *owner; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  int ObjectVector_field_0x04; // ecx
  int v7; // eax
  int v8; // esi
  void (__stdcall **vtable0)(unsigned int); // edx
  ObjectVector v10; // [esp+Ch] [ebp-30h] BYREF
  ObjectVector v11; // [esp+24h] [ebp-18h] BYREF
  char thisa; // [esp+40h] [ebp+4h]

  if ( a1->?->? ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v11, 0, 0); /*0x4cfea2*/
  *(unsigned int *)v11.__pad_0 = (void*)&DynamicVectorClass_ObjectClass___vftable; /*0x4cfeb7*/
  v11.ObjectVector_field_0x14 = 10; /*0x4cfebb*/
  v11.ObjectVector_field_0x10 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  *(unsigned int *)v10.__pad_0 = (void*)&DynamicVectorClass_ObjectClass___vftable; /*0x4cfecd*/
  v10.ObjectVector_field_0x14 = 10; /*0x4cfed3*/
  v10.ObjectVector_field_0x10 = 0; /*0x4cfed7*/
  if ( !*(unsigned int *)&dword_A8B238 /*0x4cfeef*/
    || (owner = *(unsigned char *)&a1->ptr_40->?, owner->enemyHouseIndex == -1)
    || (thisa = 1, (uint8_t)House::IsCurrentPlayer((House *)owner)) )
  {
    thisa = 0; /*0x4cfefd*/
  }
  for ( i = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * i); /*0x4cff17*/
    if ( thisa ) /*0x4cff20*/
    {
      if ( *(unsigned int *)(v4 + 540) != *((unsigned int *)stru_A80220.? + a1->?->?->enemyHouseIndex) ) /*0x4cff5e*/
        continue; /*0x4cff5e*/
    }
    else if ( (uint8_t)HouseClass::IsAlliedWith((void *)a1->?->?, *(void **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(unsigned char *)(v4 + 129)
      && *(unsigned char *)(v4 + 144)
      && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3226)
      && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 561)
      && (((int)dword_A8B230->vtable0 & 0x800) == 0
       || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) != 1
       || !*(unsigned char *)(*(unsigned int *)(v4 + 1732) + 3598)) )
    {
      if ( *(unsigned int *)&dword_A8B238 /*0x4d003d*/
        && (uint8_t)House::IsCurrentPlayer((House *)a1->?->?)
        && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(v4 + 540) + 52) + 422)
        && ((*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 1
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 15
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 2) )
      {
        if ( v10.ObjectVector_field_0x10 >= v10.ObjectVector_field_0x08 /*0x4d0069*/
          && (!IDA_BYTE1(v10.ObjectVector_field_0x0C) && v10.ObjectVector_field_0x08
           || v10.ObjectVector_field_0x14 <= 0
           || !(*(uint8_t (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v10.__pad_0 + 8))(
                 &v10,
                 v10.ObjectVector_field_0x14 + v10.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v10.ObjectVector_field_0x10++; /*0x4d0074*/
        ObjectVector_field_0x04 = v10.ObjectVector_field_0x04; /*0x4d007b*/
      }
      else
      {
        if ( v11.ObjectVector_field_0x10 >= v11.ObjectVector_field_0x08 /*0x4d00ab*/
          && (!IDA_BYTE1(v11.ObjectVector_field_0x0C) && v11.ObjectVector_field_0x08
           || v11.ObjectVector_field_0x14 <= 0
           || !(*(uint8_t (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v11.__pad_0 + 8))(
                 &v11,
                 v11.ObjectVector_field_0x14 + v11.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v11.ObjectVector_field_0x10++; /*0x4d00b6*/
        ObjectVector_field_0x04 = v11.ObjectVector_field_0x04; /*0x4d00bd*/
      }
      *(unsigned int *)(ObjectVector_field_0x04 + 4 * v5) = v4; /*0x4d00c1*/
    }
  }
  if ( v10.ObjectVector_field_0x10 <= 0 ) /*0x4d00d1*/
  {
    if ( v11.ObjectVector_field_0x10 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v11.ObjectVector_field_0x10 - 1); /*0x4d0109*/
    v8 = v11.ObjectVector_field_0x04; /*0x4d0111*/
    vtable0 = (void (__stdcall **)(unsigned int))a1->?->TechnoClass; /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v10.ObjectVector_field_0x10 - 1); /*0x4d00e2*/
    v8 = v10.ObjectVector_field_0x04; /*0x4d00ea*/
    vtable0 = (void (__stdcall **)(unsigned int))a1->?->TechnoClass; /*0x4d00ee*/
  }
  vtable0[242](*(unsigned int *)(v8 + 4 * v7)); /*0x4d011b*/
  LABEL_45:
  *(unsigned int *)v10.__pad_0 = (void*)&VectorClass_ObjectClass___vftable; /*0x4d0121*/
  if ( v10.ObjectVector_field_0x04 && IDA_BYTE1(v10.ObjectVector_field_0x0C) ) /*0x4d0136*/
  {
    RA2_OPDEL((void *)v10.ObjectVector_field_0x04); /*0x4d0139*/
    v10.ObjectVector_field_0x04 = 0; /*0x4d0141*/
  }
  *(unsigned int *)v11.__pad_0 = (void*)&VectorClass_ObjectClass___vftable; /*0x4d0149*/
  IDA_BYTE1(v10.ObjectVector_field_0x0C) = 0; /*0x4d0150*/
  v10.ObjectVector_field_0x08 = 0; /*0x4d0154*/
  if ( v11.ObjectVector_field_0x04 ) /*0x4d0159*/
  {
    if ( IDA_BYTE1(v11.ObjectVector_field_0x0C) ) /*0x4d015f*/
      RA2_OPDEL((void *)v11.ObjectVector_field_0x04); /*0x4d0162*/
  }
}
} // namespace gamemd
// 0x4CFC80
namespace gamemd {
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *(IID *)a2 = g_CLSID_FlyLocomotion; /*0x4cfc96*/
  a2[3] = unk_7E9A8C; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}
} // namespace gamemd
// 0x4CFCC0
namespace gamemd {
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax

  result = (int)(SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2));
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *(unsigned int *)a1->LocomotionClass = (void*)&FlyLocomotionClass_vftable; /*0x4cfcd8*/
      *(unsigned int *)&a1->LocomotionClass[4] = (void*)&FlyLocomotionClass_vftable; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}
} // namespace gamemd
// 0x4D0390
namespace gamemd {
int FlyLocomotionClass::StubReturn96()
{
  return 96; /*0x4d0395*/
}
} // namespace gamemd
// 0x4D03A0
namespace gamemd {
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(char a2)
{
  *(unsigned int *)this->LocomotionClass = (void*)&FlyLocomotionClass_vftable; /*0x4d03a3*/
  *(unsigned int *)&this-((unsigned int *)(>LocomotionClass))[4] = (void*)&FlyLocomotionClass_vftable; /*0x4d03a9*/
    LocomotionClass::Construct(Block);
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    RA2_OPDEL(); /*0x4d03bd*/
    return (FlyLocomotionClass *)Block;
}
} // namespace gamemd