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

// 0x466380
namespace gamemd {
BulletClass::BulletClass()
{

  int v2; // eax

  ObjectClass::ctor((unsigned int *)this); /*0x466384*/
  *((unsigned int *)this + 43) = 0; /*0x466391*/
  *((unsigned int *)this + 44) = 0; /*0x466397*/
  *((unsigned char *)this + 180) = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer((char *)this + 184); /*0x4663a3*/
  *((unsigned int *)this + 72) = 0; /*0x4663aa*/
  *((unsigned char *)this + 260) = 1; /*0x4663b0*/
  *((unsigned char *)this + 261) = 1; /*0x4663b6*/
  *((unsigned char *)this + 224) = 0; /*0x4663bf*/
  *((unsigned int *)this + 64) = 0; /*0x4663c5*/
  *((unsigned int *)this + 66) = 0; /*0x4663cb*/
  *((unsigned int *)this + 67) = 0; /*0x4663d1*/
  *((unsigned int *)this + 68) = 0; /*0x4663d7*/
  *((unsigned int *)this + 69) = -1; /*0x4663dd*/
  *((unsigned int *)this + 70) = 0; /*0x4663e3*/
  *((unsigned int *)this + 73) = 0; /*0x4663e9*/
  *((unsigned int *)this + 74) = 0; /*0x4663ef*/
  *((unsigned char *)this + 300) = 0; /*0x4663f5*/
  *((unsigned char *)this + 301) = 0; /*0x4663fb*/
  *((unsigned int *)this + 76) = 0; /*0x466401*/
  *((unsigned short *)this + 166) = -1; /*0x466407*/
  *((unsigned short *)this + 167) = -1; /*0x46640e*/
  *((unsigned int *)this + 85) = 0; /*0x466419*/
  *((unsigned char *)this + 344) = 0; /*0x46641f*/
  *(unsigned int *)this = &vt_BulletClass; /*0x466425*/
  *((unsigned int *)this + 1) = &vt_BulletClass; /*0x46642b*/
  *((unsigned int *)this + 2) = &vt_BulletClass; /*0x466431*/
  *((unsigned int *)this + 3) = &vt_BulletClass; /*0x466438*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x46643f*/
  *((unsigned int *)this + 77) = 0; /*0x466444*/
  *((unsigned int *)this + 78) = 0; /*0x46644a*/
  *((unsigned int *)this + 79) = 0; /*0x466450*/
  *((unsigned int *)this + 80) = 0; /*0x466456*/
  *((unsigned int *)this + 81) = 0; /*0x46645c*/
  *((unsigned int *)this + 82) = 0; /*0x466462*/
  if ( g_abs_A8ED50 < g_abs_A8ED48 /*0x46649b*/
    || (g_abs_A8ED4D || !g_abs_A8ED48)
    && g_abs_A8ED54 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8ED40 + 8))(
         &g_abs_A8ED40,
         (unsigned int)(g_abs_A8ED48)+ g_abs_A8ED54,
         0) )
  {
    v2 = (int)((unsigned int)(g_abs_A8ED50++));
    *((unsigned int *)g_abs_A8ED44 + v2) = this; /*0x4664b7*/
  }
  return this; /*0x4664bc*/

}
}
// 0x466560
namespace gamemd {
BulletClass * * BulletClass::Dtor()
{
    unsigned int v5 = 0;  /* G37 hoist */

  int v2; // eax
  int v3; // eax
  void *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this = &vt_BulletClass; /*0x466566*/
  *((unsigned int *)this + 1) = &vt_BulletClass; /*0x46656c*/
  *((unsigned int *)this + 2) = &vt_BulletClass; /*0x466573*/
  *((unsigned int *)this + 3) = &vt_BulletClass; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( *((unsigned char *)this + 344) ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (**)(int *, void **))(g_abs_B0F5B8 + 16))(&g_abs_B0F5B8, &v5); /*0x4665a4*/
    if ( v2 != -1 && v2 < (int)((int))((int))(g_abs_B0F5C8) && v2 < --g_abs_B0F5C8 ) /*0x4665bf*/
    {
      do /*0x4665d7*/
      {
        ++v2; /*0x4665c7*/
        *((unsigned int *)g_abs_B0F5BC + v2 - 1) = *((unsigned int *)g_abs_B0F5BC + v2); /*0x4665cb*/
      }
      while ( v2 < (int)((int))((int))(g_abs_B0F5C8) ); /*0x4665d7*/
    }
  }
  if ( g_abs_A8E9A0 ) /*0x4665e0*/
    ObjectClass::Undeploy(this); /*0x4665e4*/
  *((unsigned int *)this + 43) = 0; /*0x4665e9*/
  *((unsigned int *)this + 44) = 0; /*0x4665f3*/
  *((unsigned int *)this + 85) = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (**)(int *, void **))(g_abs_A8ED40 + 16))(&g_abs_A8ED40, &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A8ED50) && v3 < --g_abs_A8ED50 ) /*0x466636*/
  {
    do /*0x46664e*/
    {
      ++v3; /*0x46663e*/
      *((unsigned int *)g_abs_A8ED44 + v3 - 1) = *((unsigned int *)g_abs_A8ED44 + v3); /*0x466642*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A8ED50) ); /*0x46664e*/
  }
  return ObjectClass::Dtor(this); /*0x466657*/

}
}
// 0x466660
namespace gamemd {
int * BulletClass::CalculateSpreadAngle(int a1)
{

  if ( (unk_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    unk_89DE10 |= 1u; /*0x466689*/
    unk_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return &unk_89DDF4; /*0x4666a2*/

}
} // namespace gamemd

// 0x46AFB0
namespace gamemd {
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x46afc4*/

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
    (*(void (**)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x46b01d*/
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
