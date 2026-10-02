// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
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
#include "e4/classes/HouseClass_e4.hpp"
#include "src/e4/classes/SwizzleManager_e4.hpp"

// 0x4CC9A0
namespace gamemd {
int FlyLocomotionClass::LocomotionClass()
{

  int v2; // edx

  LocomotionClass::Init((LocomotionClass *)this); /*0x4cc9a3*/
  this->AirportBound = 0; /*0x4cc9ad*/
  this->MovingDestination[0] = dword_8B3C78; /*0x4cc9b6*/
  this->MovingDestination[1] = dword_8B3C7C; /*0x4cc9be*/
  this->MovingDestination[2] = dword_8B3C80; /*0x4cc9c7*/
  this->XYZ2[0] = dword_8B3C78; /*0x4cc9d3*/
  this->XYZ2[1] = dword_8B3C7C; /*0x4cc9dc*/
  v2 = dword_8B3C80; /*0x4cc9df*/
  this->TargetSpeed[1] = 0; /*0x4cc9e5*/
  this->CurrentSpeed[1] = 0; /*0x4cc9e8*/
  this->HasMoveOrder = 0; /*0x4cc9eb*/
  this->FlightLevel = 0; /*0x4cc9ee*/
  this->CurrentSpeed[0] = 0; /*0x4cc9f1*/
  *(unsigned int *)&this->IsTakingOff = 0; /*0x4cc9f4*/
  this->__pad_4F[1] = 0; /*0x4cc9f7*/
  this->__pad_4F[2] = 0; /*0x4cc9fa*/
  this->__pad_4F[3] = 0; /*0x4cc9fd*/
  this->FlyLocomotionClass_field_bool_53 = 0; /*0x4cca00*/
  this->FlyLocomotionClass_field_54 = 0; /*0x4cca03*/
  this->FlyLocomotionClass_field_58 = 0; /*0x4cca06*/
  this->IsElevating = 0; /*0x4cca09*/
  *(unsigned int *)this->LocomotionClass = &vt_FlyLocomotionClass; /*0x4cca0c*/
  *(unsigned int *)&this->LocomotionClass[4] = &vt_FlyLocomotionClass; /*0x4cca12*/
  this->XYZ2[2] = v2; /*0x4cca1b*/
  return (int)this->LocomotionClass; /*0x4cca1e*/

}
} // namespace gamemd
// 0x4CFE80
namespace gamemd {
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{

  HouseClass *owner; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  int ObjectVector_field_0x04; // ecx
  int v7; // eax
  int v8; // esi
  void (**vtable0)(unsigned int); // edx
  ObjectVector v10; // [esp+Ch] [ebp-30h] BYREF
  ObjectVector v11; // [esp+24h] [ebp-18h] BYREF
  char thisa; // [esp+40h] [ebp+4h]

  if ( ((unsigned int *)a1)[0] ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ((ObjectVector*)&v11)->Construct(0, 0); /*0x4cfea2*/
  *(unsigned int *)v11.__pad_0 = (unsigned int)(&vt_DynamicVectorClass); /*0x4cfeb7*/
  v11.ObjectVector_field_0x14 = 10; /*0x4cfebb*/
  v11.ObjectVector_field_0x10 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  *(unsigned int *)v10.__pad_0 = (unsigned int)(&vt_DynamicVectorClass); /*0x4cfecd*/
  v10.ObjectVector_field_0x14 = 10; /*0x4cfed3*/
  v10.ObjectVector_field_0x10 = 0; /*0x4cfed7*/
  if ( !*(unsigned int *)&dword_A8B238 /*0x4cfeef*/
    || (owner = ((unsigned int *)a1)[0], owner->enemyHouseIndex == -1)
    || (thisa = 1, (uint8_t)((House *)((House *)owner))->IsCurrentPlayer()) )
  {
    thisa = 0; /*0x4cfefd*/
  }
  for ( i = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * i); /*0x4cff17*/
    if ( thisa ) /*0x4cff20*/
    {
      if ( *(unsigned int *)(v4 + 540) != *((unsigned int *)((char *)&stru_A80220) + ((unsigned int *)a1)[0]->enemyHouseIndex) ) /*0x4cff5e*/
        continue; /*0x4cff5e*/
    }
    else if ( (uint8_t)HouseClass::IsAlliedWith((void *)((unsigned int *)a1)[0], *(void **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(unsigned char *)(v4 + 129)
      && *(unsigned char *)(v4 + 144)
      && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3226)
      && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 561)
      && (((int)dword_A8B230->vtable1 & 0x800) == 0
       || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) != 1
       || !*(unsigned char *)(*(unsigned int *)(v4 + 1732) + 3598)) )
    {
      if ( *(unsigned int *)&dword_A8B238 /*0x4d003d*/
        && (uint8_t)((House *)((House *)((unsigned int *)a1)[0]))->IsCurrentPlayer()
        && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(v4 + 540) + 52) + 422)
        && ((*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 1
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 15
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 2) )
      {
        if ( v10.ObjectVector_field_0x10 >= v10.ObjectVector_field_0x08 /*0x4d0069*/
          && (!BYTE1(v10.ObjectVector_field_0x0C) && v10.ObjectVector_field_0x08
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
          && (!BYTE1(v11.ObjectVector_field_0x0C) && v11.ObjectVector_field_0x08
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
    v7 = Random::Range((Random *)&(&dword_A8B230)[14].NeedsSaveOrLink, 0, v11.ObjectVector_field_0x10 - 1); /*0x4d0109*/
    v8 = v11.ObjectVector_field_0x04; /*0x4d0111*/
    vtable0 = (void (**)(unsigned int))((unsigned int *)a1)[0]->TechnoClass; /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((Random *)&(&dword_A8B230)[14].NeedsSaveOrLink, 0, v10.ObjectVector_field_0x10 - 1); /*0x4d00e2*/
    v8 = v10.ObjectVector_field_0x04; /*0x4d00ea*/
    vtable0 = (void (**)(unsigned int))((unsigned int *)a1)[0]->TechnoClass; /*0x4d00ee*/
  }
  vtable0[242](*(unsigned int *)(v8 + 4 * v7)); /*0x4d011b*/
LABEL_45:
  *(unsigned int *)v10.__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d0121*/
  if ( v10.ObjectVector_field_0x04 && BYTE1(v10.ObjectVector_field_0x0C) ) /*0x4d0136*/
  {
    __3_YAXPAX_Z((void *)v10.ObjectVector_field_0x04); /*0x4d0139*/
    v10.ObjectVector_field_0x04 = 0; /*0x4d0141*/
  }
  *(unsigned int *)v11.__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d0149*/
  BYTE1(v10.ObjectVector_field_0x0C) = 0; /*0x4d0150*/
  v10.ObjectVector_field_0x08 = 0; /*0x4d0154*/
  if ( v11.ObjectVector_field_0x04 ) /*0x4d0159*/
  {
    if ( BYTE1(v11.ObjectVector_field_0x0C) ) /*0x4d015f*/
      __3_YAXPAX_Z((void *)v11.ObjectVector_field_0x04); /*0x4d0162*/
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

  result = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *(unsigned int *)a1->LocomotionClass = &vt_FlyLocomotionClass; /*0x4cfcd8*/
      *(unsigned int *)&a1->LocomotionClass[4] = &vt_FlyLocomotionClass; /*0x4cfcde*/
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

  *(unsigned int *)Block->LocomotionClass = &vt_FlyLocomotionClass; /*0x4d03a3*/
  *(unsigned int *)&Block->LocomotionClass[4] = &vt_FlyLocomotionClass; /*0x4d03a9*/
  ((LocomotionClass*)(gamemd::LocomotionClass *)this)->Construct(); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    __3_YAXPAX_Z(this); /*0x4d03bd*/
  return this->LocomotionClass; /*0x4d03c7*/

}
} // namespace gamemd