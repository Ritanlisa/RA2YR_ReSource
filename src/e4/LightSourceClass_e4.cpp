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
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"

// 0x554760
namespace gamemd {  // G42.18 ns repair
unsigned int * LightSourceClass::Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v10; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
  this->LightTint[0] = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  this->LightTint[1] = a8; /*0x55477e*/
  this->LightTint[2] = a9; /*0x554788*/
  this->DetailLevel = 2; /*0x55478f*/
  this->Location[0] = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  this->AbstractClass = &vt_LightSourceClass; /*0x5547a0*/
  this->Location[1] = a3; /*0x5547a6*/
  this->LightVisibility = a5; /*0x5547ad*/
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5547b0) */
  this->Location[2] = a4; /*0x5547b7*/
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5547ba) */
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5547c1) */
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
    *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
  }
  return &this->AbstractClass; /*0x55481e*/

}
} // namespace gamemd
// 0x554830
namespace gamemd {
int LightSourceClass::Constructor()
{

  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  this->LightTint[0] = 0; /*0x554840*/
  this->LightTint[1] = 0; /*0x554843*/
  this->LightTint[2] = 0; /*0x554846*/
  this->Location[0] = g_MissionQueueFrame.random[125]; /*0x55484f*/
  this->Location[1] = g_MissionQueueFrame.random[126]; /*0x554857*/
  v2 = g_MissionQueueFrame.random[127]; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  this->Location[2] = v2; /*0x554866*/
  this->AbstractClass = &vt_LightSourceClass; /*0x554869*/
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x55486f) */
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x554876) */
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x55487d) */
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5548b6*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v3 = g_MissionQueueFrame.random[133]++; /*0x5548c3*/
    *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v3) = this; /*0x5548d2*/
  }
  return (int)this; /*0x5548d7*/

}
} // namespace gamemd
// 0x555070
namespace gamemd {
int LightSourceClass::Stat(AbstractClass * aP1)
{
  return this->AbstractClass::ProcessPower(); /*0x55507a*/
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
  a2[3] = unk_7E98FC; /*0x5550b0*/
  return 0; /*0x55508d*/
}
} // namespace gamemd
// 0x5550C0
namespace gamemd {
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)(aP0), aP1); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x5550df*/
      /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5550e4) */
      /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5550ea) */
      /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5550f1) */
      /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x5550f8) */
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x55511f*/
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
  LightSourceClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &vt_LightSourceClass; /*0x555156*/
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x55515c) */
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x555163) */
  /* X11: vtable install elided (implicit via LightSourceClass virtuals 0x55516a) */
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x555171*/
  v5 = this; /*0x555186*/
  v3 = (*(int (**)(int *, LightSourceClass **))(g_MissionQueueFrame.random[129] + 16))( /*0x55518a*/
         &g_MissionQueueFrame.random[129],
         &v5);
  if ( v3 != -1 && v3 < g_MissionQueueFrame.random[133] ) /*0x55519a*/
  {
    --g_MissionQueueFrame.random[133]; /*0x55519f*/
    for ( ; /*0x5551a5*/
          v3 < g_MissionQueueFrame.random[133];
          *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v3 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[130]
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5551ad*/
    }
  }
  if ( this->Activated ) /*0x5551bf*/
  {
    this->Activated = 0; /*0x5551ca*/
    TacticalClass::ScrollView((TacticalClass *)this, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    __3_YAXPAX_Z(this); /*0x5551e2*/
  return &this->AbstractClass; /*0x5551ec*/

}
} // namespace gamemd
