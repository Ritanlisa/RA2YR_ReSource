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
namespace gamemd {  // G42.18 ns repair
BulletClass::BulletClass()
{


  ((ObjectClass *)this)->ctor(); /*0x466384*/
  this->u32_AC = 0; /*0x466391*/
  this->q_B0 = 0; /*0x466397*/
  this->__pad_B4 = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer(&this->Data); /*0x4663a3*/
  *&this->q_120 = 0; /*0x4663aa*/
  this->q104 = 1; /*0x4663b0*/
  this->CourseLock = 1; /*0x4663b6*/
  this->Bright = 0; /*0x4663bf*/
  *&this->q100 = 0; /*0x4663c5*/
  *&this->q108 = 0; /*0x4663cb*/
  this->AbstractClass_10C = 0; /*0x4663d1*/
  *(unsigned int *)this->ParticleSystemClass_110 = 0; /*0x4663d7*/
  *&this->InheritedColor = -1; /*0x4663dd*/
  *&this->__pad_118 = 0; /*0x4663e3*/
  *&this->AnimFrame = 0; /*0x4663e9*/
  *&this->WeaponType = 0; /*0x4663ef*/
  this->SourceCoords = 0; /*0x4663f5*/
  this->q12D = 0; /*0x4663fb*/
  this->__pad_130 = 0; /*0x466401*/
  *&this->NextAnim = (gamemd::CellStruct *)(-1); /*0x466407*/
  *&this->u16_14E = -1; /*0x46640e*/
  this->__pad_154 = 0; /*0x466419*/
  this->q158 = 0; /*0x46641f*/
  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x466425) */
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E46B8) */  /*0x46642b*/
  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x466431) */
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E46B8) */  /*0x466438*/
  AbstractClass::GenerateUniqueID(&this->BulletClass_field_0x4); /*0x46643f*/
  *(unsigned int *)this->q134 = 0; /*0x466444*/
  *&this->TargetCoords = 0; /*0x46644a*/
  *&this->__pad_13C = 0; /*0x466450*/
  this->q140 = 0; /*0x466456*/
  *(unsigned int *)this->q144 = 0; /*0x46645c*/
  *&this->DamageMultiplier = 0; /*0x466462*/
  if ( *(int *)&DataGlobal_A8EB00[592] < *(int *)&DataGlobal_A8EB00[584] /*0x46649b*/
    || (DataGlobal_A8EB00[589] || !*(unsigned int *)&DataGlobal_A8EC64)
    && *(int *)&DataGlobal_A8EC70 > 0
    && (*(unsigned __int8 (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&DataGlobal_A8EC5C + 8))(
         &DataGlobal_A8EC5C,
         *(unsigned int *)&DataGlobal_A8EC64 + *(unsigned int *)&DataGlobal_A8EC70,
         0) )
  {
    int v2; // eax
    v2 = (*(unsigned int *)&DataGlobal_A8EB00[592])++; /*0x4664a8*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EB00[580] + 4 * v2) = this; /*0x4664b7*/
  }
  return (int)this->ptr_0; /*0x4664bc*/

}
}  // G42.18 ns repair
// 0x466560
namespace gamemd {
int BulletClass::Dtor(void *a1)
{
  BulletClass *v5; // [esp+4h] [ebp-4h] BYREF

  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x466566) */
  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x46656c) */
  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x466573) */
  /* X11: ptr_0 install elided (implicit via BulletClass virtuals 0x46657a) */
  AbstractClass::AnnounceExpiredPointer((void **)a1, 1); /*0x466581*/
  if ( a1->q158 ) /*0x466586*/
  {
    v5 = (gamemd::BulletClass *)(a1); /*0x4665a0*/
    int v2; // eax
    v2 = (*(int (**)(int *, BulletClass **))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x4665a4*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v5);
    if ( v2 != -1 && v2 < g_BuildingLoadQueue_Array.SecondSpawnOffset[1] ) /*0x4665b4*/
    {
      --g_BuildingLoadQueue_Array.SecondSpawnOffset[1]; /*0x4665b9*/
      for ( ; /*0x4665bf*/
      v2 < g_BuildingLoadQueue_Array.SecondSpawnOffset[1];
      *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * v2 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0]
      + 4 * v2) )
      {
        ++v2; /*0x4665c7*/
      }
    }
  }
  if ( byte_A8E9A0 ) /*0x4665e0*/
    ((ObjectClass *)a1)->Undeploy(); /*0x4665e4*/
  a1->u32_AC = 0; /*0x4665e9*/
  a1->q_B0 = 0; /*0x4665f3*/
  a1->__pad_154 = 0; /*0x4665fd*/
  v5 = (gamemd::BulletClass *)(a1); /*0x466617*/
  int v3; // eax
  v3 = (*(int (**)(unsigned char *, BulletClass **))(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[348] + 16))(&((unsigned int *)&stru_A8EB00)[348], &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < *(int *)&((unsigned int *)&stru_A8EB00)[364] ) /*0x46662b*/
  {
    --*(unsigned int *)&((unsigned int *)&stru_A8EB00)[364]; /*0x466630*/
    for ( ; /*0x466636*/
    v3 < *(int *)&((unsigned int *)&stru_A8EB00)[364];
    *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[352] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[352] + 4 * v3) )
    {
      ++v3; /*0x46663e*/
    }
  }
  return ((ObjectClass *)a1)->Dtor(); /*0x466657*/
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
  return AbstractClass::SaveLoad_Prefix((int *)aP0->ptr_0, a1, aP2); /*0x46afc4*/
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

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x46b000*/
  LONG v1; // esi
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
