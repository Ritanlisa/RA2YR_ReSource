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

// 0x554760
namespace gamemd {
void LightSourceClass::Construct(void* a1, void* a2, void* a3, void* a4, int a5, int a6, int a7)
{
  int v10; // eax

  AbstractClass::Constructor(); /*0x554763*/
    *((unsigned int *)this + 40) = a7;
    *((unsigned int *)this + 36) = a6;
    *((unsigned int *)this + 44) = a8;
    *((unsigned int *)this + 48) = a9;
    *((unsigned int *)this + 52) = 2;
    *((unsigned int *)this + 56) = a2;
    *((unsigned char *)this + 72) = 0;
    *this = &LightSourceClass::`vftable';
    *((unsigned int *)this + 60) = a3;
    *((unsigned int *)this + 68) = a5;
    *((unsigned int *)this + 4) = &LightSourceClass::`vftable';
    *((unsigned int *)this + 64) = a4;
    *((unsigned int *)this + 8) = &LightSourceClass::`vftable';
    *((unsigned int *)this + 12) = &LightSourceClass::`vftable';
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
    || (IDA_BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
    *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
  }
    return this;
}
} // namespace gamemd
// 0x554830
namespace gamemd {
void LightSourceClass::Constructor(void* a1, void* a2, void* a3, void* a4, int a5, int a6, int a7)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor(); /*0x554833*/
    *((unsigned int *)this + 144) = 0;
    *((unsigned int *)this + 160) = 0;
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 192) = 0;
    *((unsigned int *)this + 224) = MEMORY[0xABCA00];
    *((unsigned int *)this + 240) = MEMORY[0xABCA04];
  v2 = g_MissionQueueFrame.random[127]; /*0x55485a*/
    *((unsigned int *)this + 272) = 0;
    *((unsigned char *)this + 288) = 0;
    *((unsigned int *)this + 256) = v2;
    *(unsigned int *)this = &LightSourceClass::`vftable';
    *((unsigned int *)this + 16) = &LightSourceClass::`vftable';
    *((unsigned int *)this + 32) = &LightSourceClass::`vftable';
    *((unsigned int *)this + 48) = &LightSourceClass::`vftable';
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5548b6*/
    || (IDA_BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_MissionQueueFrame.random[129] + 8))(
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
// 0x410410
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
  a2[3] = unk_7E98FC; /*0x5550b0*/
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
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x5550df*/
      aP0->AbstractClass = (void*)&LightSourceClass_vftable; /*0x5550e4*/
      *(void **)&aP0->vtable2 = (void*)&LightSourceClass_vftable; /*0x5550ea*/
      *(void **)&aP0->vtable3 = (void*)&LightSourceClass_vftable; /*0x5550f1*/
      *(void **)&aP0->vtable4 = (void*)&LightSourceClass_vftable; /*0x5550f8*/
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

    *Block = &LightSourceClass::`vftable';
    *(Block + 1) = &LightSourceClass::`vftable';
    *(Block + 2) = &LightSourceClass::`vftable';
    *(Block + 3) = &vt_LightSourceClass;
    AbstractClass::AnnounceExpiredPointer(Block, 1);
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
    if ( *((unsigned char *)Block + 72) )
  {
        *((unsigned char *)Block + 72) = 0;
    TacticalClass::ScrollView(0); /*0x5551ce*/
  }
    AbstractClass::DTOR(Block);
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    RA2_OPDEL(); /*0x5551e2*/
    return (LightSourceClass *)Block;
}
} // namespace gamemd