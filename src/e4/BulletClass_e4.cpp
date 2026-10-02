// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/Byte_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"

// 0x466380
namespace gamemd {
BulletClass::BulletClass()
{

  int v2; // eax

  ((ObjectClass *)((ObjectClass *)this))->ctor(); /*0x466384*/
  this->BulletClass_field_0xAC = 0; /*0x466391*/
  this->BulletClass_field_0xB0 = 0; /*0x466397*/
  this->__pad_B4[0] = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer((BulletClass *)&this->__pad_B4[4]); /*0x4663a3*/
  *(unsigned int *)&this->__pad_110[16] = 0; /*0x4663aa*/
  this->__pad_B4[80] = 1; /*0x4663b0*/
  this->__pad_B4[81] = 1; /*0x4663b6*/
  this->__pad_B4[44] = 0; /*0x4663bf*/
  *(unsigned int *)&this->__pad_B4[76] = 0; /*0x4663c5*/
  *(unsigned int *)&this->__pad_B4[84] = 0; /*0x4663cb*/
  this->BulletClass_field_0x10C = 0; /*0x4663d1*/
  *(unsigned int *)this->__pad_110 = 0; /*0x4663d7*/
  *(unsigned int *)&this->__pad_110[4] = -1; /*0x4663dd*/
  *(unsigned int *)&this->__pad_110[8] = 0; /*0x4663e3*/
  *(unsigned int *)&this->__pad_110[20] = 0; /*0x4663e9*/
  *(unsigned int *)&this->__pad_110[24] = 0; /*0x4663ef*/
  this->__pad_110[28] = 0; /*0x4663f5*/
  this->__pad_110[29] = 0; /*0x4663fb*/
  this->BulletClass_field_0x130 = 0; /*0x466401*/
  *(unsigned short *)&this->__pad_144[8] = -1; /*0x466407*/
  *(unsigned short *)&this->__pad_144[10] = -1; /*0x46640e*/
  this->BulletClass_field_0x154 = 0; /*0x466419*/
  this->__pad_158[0] = 0; /*0x46641f*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_BulletClass); /*0x466425*/
  this->BulletClass_field_0x4 = (unsigned int)(&vt_BulletClass); /*0x46642b*/
  this->BulletClass_field_0x8 = (unsigned int)(&vt_BulletClass); /*0x466431*/
  *(unsigned int *)this->__pad_C = (unsigned int)(&vt_BulletClass); /*0x466438*/
  AbstractClass::GenerateUniqueID((int)((AbstractClass *)&this->BulletClass_field_0x4)); /*0x46643f*/
  *(unsigned int *)this->__pad_134 = 0; /*0x466444*/
  *(unsigned int *)&this->__pad_134[4] = 0; /*0x46644a*/
  *(unsigned int *)&this->__pad_134[8] = 0; /*0x466450*/
  this->BulletClass_field_0x140 = 0; /*0x466456*/
  *(unsigned int *)this->__pad_144 = 0; /*0x46645c*/
  *(unsigned int *)&this->__pad_144[4] = 0; /*0x466462*/
  if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 364) < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 356) /*0x46649b*/
    || (*((unsigned int *)((char *)&stru_A8EB00 + 361)) || !*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 356))
    && *(int *)(unsigned int *)((char *)&stru_A8EB00 + 368) > 0
    && (*(uint8_t (**)(unsigned char *, int, unsigned int))(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 348) + 8))(
         (unsigned char *)(unsigned int *)((char *)&stru_A8EB00 + 348),
         *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 356) + *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 368),
         0) )
  {
    v2 = (*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 364))++; /*0x4664a8*/
    *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 352) + 4 * v2) = (unsigned int)(this); /*0x4664b7*/
  }
  return (int)this->__pad_0; /*0x4664bc*/

}
}
// 0x466560
namespace gamemd {
BulletClass * * BulletClass::Dtor(void *a1)
{

  int v2; // eax
  int v3; // eax
  BulletClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_BulletClass); /*0x466566*/
  this->BulletClass_field_0x4 = (unsigned int)(&vt_BulletClass); /*0x46656c*/
  this->BulletClass_field_0x8 = (unsigned int)(&vt_BulletClass); /*0x466573*/
  *(unsigned int *)this->__pad_C = (unsigned int)(&vt_BulletClass); /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)((void **)this),(int)((gamemd::AbstractClass *)(1))); /*0x466581*/
  if ( this->__pad_158[0] ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (**)(int *, BulletClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x4665a4*/
           (int *)((char *)(int *)&g_BuildingLoadQueue_Array),
           &v5);
    if ( v2 != -1 && v2 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) ) /*0x4665b4*/
    {
      --((unsigned int *)&g_BuildingLoadQueue_Array)[1]; /*0x4665b9*/
      for ( ; /*0x4665bf*/
            v2 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1));
            *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * v2 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))
                                                                                 + 4 * v2) )
      {
        ++v2; /*0x4665c7*/
      }
    }
  }
  if ( byte_A8E9A0 ) /*0x4665e0*/
    ((ObjectClass *)((ObjectClass *)this))->Undeploy(); /*0x4665e4*/
  this->BulletClass_field_0xAC = 0; /*0x4665e9*/
  this->BulletClass_field_0xB0 = 0; /*0x4665f3*/
  this->BulletClass_field_0x154 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (**)(unsigned char *, BulletClass **))(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 348) + 16))((unsigned char *)&(unsigned int *)((char *)&stru_A8EB00 + 348), &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 364) ) /*0x46662b*/
  {
    --*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 364); /*0x466630*/
    for ( ; /*0x466636*/
          v3 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 364);
          *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 352) + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 352) + 4 * v3) )
    {
      ++v3; /*0x46663e*/
    }
  }
  return (gamemd::BulletClass **)(((ObjectClass *)((ObjectClass *)this))->Dtor()); /*0x466657*/

}
}
// 0x466660
namespace gamemd {
int * BulletClass::CalculateSpreadAngle(int a1)
{

  if ( (byte_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    byte_89DE10 |= 1u; /*0x466689*/
    dword_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return (int *)(&dword_89DDF4); /*0x4666a2*/

}
} // namespace gamemd

// 0x46AFB0
namespace gamemd {
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x46afc4*/

}
} // namespace gamemd

// 0x46AFD0
namespace gamemd {
LONG BulletClass::CheckTargetValidity(int a1)
{

  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)a1->__pad_1C); /*0x46afeb*/

}
} // namespace gamemd

// 0x46AFF0
namespace gamemd {
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{

  LONG v1; // esi

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x46b000*/
  v1 = InterlockedDecrement((volatile LONG *)a1->__pad_1C); /*0x46b00d*/
  if ( !v1 && a1 ) /*0x46b015*/
    (*(void (**)(BulletClass *, int))(*(unsigned int *)a1->__pad_0 + 32))(a1, 1); /*0x46b01d*/
  return v1; /*0x46b022*/

}
} // namespace gamemd

// 0x46B540
namespace gamemd {
int BulletClass::MissionStubReturnZero()
{

  return 352; /*0x46b545*/

}
} // namespace gamemd

// 0x46B550
namespace gamemd {
int BulletClass::MissionStubReturnZero2()
{

  return 8; /*0x46b555*/

}
} // namespace gamemd

// 0x46B560
namespace gamemd {
int BulletClass::PowerDrainProcess(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = unk_7E96EC; /*0x46b590*/
  return 0; /*0x46b56d*/

}
} // namespace gamemd
