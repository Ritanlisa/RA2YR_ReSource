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

// 0x466380
namespace gamemd {
BulletClass::BulletClass()
{
  BulletClass * v2;

  ObjectClass::ctor(); /*0x466384*/
  this->q0AC = 0; /*0x466391*/
  this->q0B0 = 0; /*0x466397*/
  this->q0B4 = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer(&this->q0484); /*0x4663a3*/
  this->q120 = 0; /*0x4663aa*/
  this->q104 = 1; /*0x4663b0*/
  this->CourseLock = 1; /*0x4663b6*/
  this->Bright = 0; /*0x4663bf*/
  this->q100 = 0; /*0x4663c5*/
  this->q108 = 0; /*0x4663cb*/
  this->q10C = 0; /*0x4663d1*/
  this->q110 = 0; /*0x4663d7*/
  this->InheritedColor = -1; /*0x4663dd*/
  this->q118 = 0; /*0x4663e3*/
  this->AnimFrame = 0; /*0x4663e9*/
  this->WeaponType = 0; /*0x4663ef*/
  this->SourceCoords = 0; /*0x4663f5*/
  this->q12D = 0; /*0x4663fb*/
  this->q130 = 0; /*0x466401*/
  this->NextAnim = -1; /*0x466407*/
  this->u16_14E = -1; /*0x46640e*/
  this->q154 = 0; /*0x466419*/
  this->q158 = 0; /*0x46641f*/
  *(void **)this = (void*)&BulletClass_vftable; /*0x466425*/
  this->vtable2 = (void*)&BulletClass_vftable; /*0x46642b*/
  this->vtable3 = (void*)&BulletClass_vftable; /*0x466431*/
  this->vtable4 = (void*)&BulletClass_vftable; /*0x466438*/
  this->vtable2.GenerateUniqueID(); /*0x46643f*/
  this->q134 = 0; /*0x466444*/
  this->TargetCoords = 0; /*0x46644a*/
  this->q13C = 0; /*0x466450*/
  this->q140 = 0; /*0x466456*/
  this->q144 = 0; /*0x46645c*/
  this->DamageMultiplier = 0; /*0x466462*/
  if ( dword_A8ED50 < dword_A8ED48 /*0x46649b*/
    || (byte_A8ED4D || !dword_A8ED48)
    && dword_A8ED54 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(BulletClass_Array + 8))(
         &BulletClass_Array,
         dword_A8ED48 + dword_A8ED54,
         0) )
  {
    v2 = dword_A8ED50++; /*0x4664a8*/
    *((_DWORD *)dword_A8ED44 + v2) = this; /*0x4664b7*/
  }
  return this; /*0x4664bc*/
}
}
// 0x466560
namespace gamemd {
BulletClass * * BulletClass::Dtor()
{
  int v2; // eax
  int v3; // eax
  void *this; // [esp+4h] [ebp-4h] BYREF

  *(void **)this = (void*)&BulletClass_vftable; /*0x466566*/
  this->vtable2 = (void*)&BulletClass_vftable; /*0x46656c*/
  this->vtable3 = (void*)&BulletClass_vftable; /*0x466573*/
  this->vtable4 = (void*)&BulletClass_vftable; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x466581*/
  if ( this->q158 ) /*0x466586*/
  {
    v2 = (*(int (__thiscall **)(int *, void **))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &this); /*0x4665a4*/
    if ( v2 != -1 && v2 < g_BuildingTypeInstanceCount && v2 < --g_BuildingTypeInstanceCount ) /*0x4665bf*/
    {
      do /*0x4665d7*/
      {
        ++v2; /*0x4665c7*/
        *((_DWORD *)g_BuildingClassPoolManager + v2 - 1) = *((_DWORD *)g_BuildingClassPoolManager + v2); /*0x4665cb*/
      }
      while ( v2 < g_BuildingTypeInstanceCount ); /*0x4665d7*/
    }
  }
  if ( g_WTFMode ) /*0x4665e0*/
    ObjectClass::Undeploy(); /*0x4665e4*/
  this->q0AC = 0; /*0x4665e9*/
  this->q0B0 = 0; /*0x4665f3*/
  this->q154 = 0; /*0x4665fd*/
  v3 = (*(int (__thiscall **)(int *, void **))(BulletClass_Array + 16))(&BulletClass_Array, &this); /*0x46661b*/
  if ( v3 != -1 && v3 < dword_A8ED50 && v3 < --dword_A8ED50 ) /*0x466636*/
  {
    do /*0x46664e*/
    {
      ++v3; /*0x46663e*/
      *((_DWORD *)dword_A8ED44 + v3 - 1) = *((_DWORD *)dword_A8ED44 + v3); /*0x466642*/
    }
    while ( v3 < dword_A8ED50 ); /*0x46664e*/
  }
  return ObjectClass::Dtor(); /*0x466657*/
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
  return &dword_89DDF4; /*0x4666a2*/
}
} // namespace gamemd

// 0x46AFB0
namespace gamemd {
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x46afc4*/
}
} // namespace gamemd

// 0x46AFD0
namespace gamemd {
LONG BulletClass::CheckTargetValidity(int a1)
{
  ++g_BulletClassPool; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *, unsigned int a1)(a1 + 28)); /*0x46afeb*/
}
} // namespace gamemd

// 0x46AFF0
namespace gamemd {
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x46b000*/
  v1 = InterlockedDecrement(a1 + 7); /*0x46b00d*/
  if ( !v1 && a1 ) /*0x46b015*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x46b01d*/
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
  a2[3] = -777003740; /*0x46b590*/
  return 0; /*0x46b56d*/
}
} // namespace gamemd
