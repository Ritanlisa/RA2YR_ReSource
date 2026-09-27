// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x554760
namespace gamemd {
unsigned int * LightSourceClass::Construct(int a2, int a3, LightSourceClass * aP3, int a5, int a6, int a7, TintStruct * aP7, int a9)
{
  int v10; // eax

  AbstractClass::Constructor(); /*0x554763*/
  *(&this->vtable20) = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  *(&this->vtable21) = aP7; /*0x55477e*/
  *(&this->vtable22) = a9; /*0x554788*/
  *(&this->vtable23) = 2; /*0x55478f*/
  *(&this->vtable24) = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  *(&this->vtable25) = a3; /*0x5547a6*/
  *(&this->vtable27) = a5; /*0x5547ad*/
  *(&this->vtable26) = aP3; /*0x5547b7*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5547fd*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_ABCA10 + 8))(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    v10 = g_BridgeCellPool++; /*0x55480a*/
    *((unsigned int *)dword_ABCA14 + v10) = this; /*0x554819*/
  }
  return this; /*0x55481e*/
}
} // namespace gamemd
// 0x554830
namespace gamemd {
int LightSourceClass::Constructor()
{
  LightSourceClass * v3;

  AbstractClass::Constructor(); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  this->LightTint = 0; /*0x554840*/
  this->q02C = 0; /*0x554843*/
  this->q030 = 0; /*0x554846*/
  this->Location = dword_ABCA00; /*0x55484f*/
  this->q03C = dword_ABCA04; /*0x554857*/
  dword_ABCA08 = dword_ABCA08; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  this->q040 = dword_ABCA08; /*0x554866*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5548b6*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_ABCA10 + 8))(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    v3 = (gamemd::LightSourceClass *)(g_BridgeCellPool++);
    *((unsigned int *)dword_ABCA14 + v3) = this; /*0x5548d2*/
  }
  return (int)(this);
}
} // namespace gamemd
// 0x555070
namespace gamemd {
int LightSourceClass::Stat(AbstractClass * aP1)
{
  return AbstractClass::ProcessPower(); /*0x55507a*/
}
} // namespace gamemd
// 0x555080
namespace gamemd {
int LightSourceClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = -1252326136; /*0x5550b0*/
  return 0; /*0x55508d*/
}
} // namespace gamemd
// 0x5550C0
namespace gamemd {
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x5550df*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/
}
} // namespace gamemd
// 0x555110
namespace gamemd {
int LightSourceClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/
}
} // namespace gamemd
// 0x555130
namespace gamemd {
int LightSourceClass::StubReturn76()
{
  return 76; /*0x555135*/
}
} // namespace gamemd
// 0x555140
namespace gamemd {
int LightSourceClass::StubReturn54()
{
  return 54; /*0x555145*/
}
} // namespace gamemd
// 0x555150
namespace gamemd {
LightSourceClass * LightSourceClass::CopyTo(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  AbstractClass::AnnounceExpiredPointer(1); /*0x555171*/
  v5 = this; /*0x555186*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_ABCA10 + 16))(&dword_ABCA10, &v5); /*0x55518a*/
  if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool ) /*0x5551a5*/
  {
    do /*0x5551bd*/
    {
      ++v3; /*0x5551ad*/
      *((unsigned int *)dword_ABCA14 + v3 - 1) = *((unsigned int *)dword_ABCA14 + v3); /*0x5551b1*/
    }
    while ( v3 < g_BridgeCellPool ); /*0x5551bd*/
  }
  if ( this->Activated ) /*0x5551bf*/
  {
    this->Activated = 0; /*0x5551ca*/
    TacticalClass::ScrollView(0); /*0x5551ce*/
  }
  AbstractClass::DTOR(); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    RA2_OPDEL(); /*0x5551e2*/
  return this; /*0x5551ec*/
}
} // namespace gamemd