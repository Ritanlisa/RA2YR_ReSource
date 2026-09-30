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
void LightSourceClass::Construct( int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v10; // eax

  AbstractClass::Constructor((int)this); /*0x554763*/
  *((unsigned int *)this + 10) = a7; /*0x554774*/
  *((unsigned int *)this + 9) = a6; /*0x554777*/
  *((unsigned int *)this + 11) = a8; /*0x55477e*/
  *((unsigned int *)this + 12) = a9; /*0x554788*/
  *((unsigned int *)this + 13) = 2; /*0x55478f*/
  *((unsigned int *)this + 14) = a2; /*0x554796*/
  *((unsigned char *)this + 72) = 0; /*0x55479c*/
  *this = &LightSourceClass::`vftable'; /*0x5547a0*/
  *((unsigned int *)this + 15) = a3; /*0x5547a6*/
  *((unsigned int *)this + 17) = a5; /*0x5547ad*/
  *((unsigned int *)this + 1) = &LightSourceClass::`vftable'; /*0x5547b0*/
  *((unsigned int *)this + 16) = a4; /*0x5547b7*/
  *((unsigned int *)this + 2) = &LightSourceClass::`vftable'; /*0x5547ba*/
  *((unsigned int *)this + 3) = &LightSourceClass::`vftable'; /*0x5547c1*/
  if ( MEMORY[0xABCA20] < MEMORY[0xABCA18] /*0x5547fd*/
    || (MEMORY[0xABCA1D] || !MEMORY[0xABCA18])
    && MEMORY[0xABCA24] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xABCA10] + 8))(
         &MEMORY[0xABCA10],
         MEMORY[0xABCA18] + MEMORY[0xABCA24],
         0) )
  {
    v10 = MEMORY[0xABCA20]++; /*0x55480a*/
    *((unsigned int *)MEMORY[0xABCA14] + v10) = this; /*0x554819*/
  }
  return this; /*0x55481e*/

}
} // namespace gamemd
// 0x554830
namespace gamemd {
void LightSourceClass::Constructor()
{

  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((#373 *)this); /*0x554833*/
  *((unsigned int *)this + 9) = 0; /*0x55483d*/
  *((unsigned int *)this + 10) = 0; /*0x554840*/
  *((unsigned int *)this + 11) = 0; /*0x554843*/
  *((unsigned int *)this + 12) = 0; /*0x554846*/
  *((unsigned int *)this + 14) = MEMORY[0xABCA00]; /*0x55484f*/
  *((unsigned int *)this + 15) = MEMORY[0xABCA04]; /*0x554857*/
  v2 = MEMORY[0xABCA08]; /*0x55485a*/
  *((unsigned int *)this + 17) = 0; /*0x554860*/
  *((unsigned char *)this + 72) = 0; /*0x554863*/
  *((unsigned int *)this + 16) = v2; /*0x554866*/
  *(unsigned int *)this = &LightSourceClass::`vftable'; /*0x554869*/
  *((unsigned int *)this + 1) = &LightSourceClass::`vftable'; /*0x55486f*/
  *((unsigned int *)this + 2) = &LightSourceClass::`vftable'; /*0x554876*/
  *((unsigned int *)this + 3) = &LightSourceClass::`vftable'; /*0x55487d*/
  if ( MEMORY[0xABCA20] < MEMORY[0xABCA18] /*0x5548b6*/
    || (MEMORY[0xABCA1D] || !MEMORY[0xABCA18])
    && MEMORY[0xABCA24] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xABCA10] + 8))(
         &MEMORY[0xABCA10],
         MEMORY[0xABCA18] + MEMORY[0xABCA24],
         0) )
  {
    v3 = MEMORY[0xABCA20]++; /*0x5548c3*/
    *((unsigned int *)MEMORY[0xABCA14] + v3) = this; /*0x5548d2*/
  }
  return this; /*0x5548d7*/

}
} // namespace gamemd
// 0x555070
namespace gamemd {
int LightSourceClass::Stat(AbstractClass * aP1)
{

  return AbstractClass::ProcessPower((void *)this); /*0x55507a*/

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

  result = ((AbstractClass *)(aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x5550df*/
      *(unsigned int *)aP0->__pad_0 = &vt_LightSourceClass; /*0x5550e4*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_LightSourceClass; /*0x5550ea*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_LightSourceClass; /*0x5550f1*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_LightSourceClass; /*0x5550f8*/
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

  result = ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x55511f*/
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
LightSourceClass * LightSourceClass::CopyTo(void ** Block, char a2)
{

  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_LightSourceClass; /*0x555156*/
  *(Block + 1) = &vt_LightSourceClass; /*0x55515c*/
  *(Block + 2) = &vt_LightSourceClass; /*0x555163*/
  *(Block + 3) = &vt_LightSourceClass; /*0x55516a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x555171*/
  v5 = Block; /*0x555186*/
  v3 = ((int (*)(DynamicVector **, void ***))dword_ABCA10->field_10)(&dword_ABCA10, &v5); /*0x55518a*/
  if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool ) /*0x5551a5*/
  {
    do /*0x5551bd*/
    {
      ++v3; /*0x5551ad*/
      *(unsigned int *)&dword_ABCA14->__pad_0[4 * v3 - 4] = *(unsigned int *)&dword_ABCA14->__pad_0[4 * v3]; /*0x5551b1*/
    }
    while ( v3 < g_BridgeCellPool ); /*0x5551bd*/
  }
  if ( *((unsigned char *)Block + 72) ) /*0x5551bf*/
  {
    *((unsigned char *)Block + 72) = 0; /*0x5551ca*/
    TacticalClass::ScrollView(Block, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR(Block); /*0x5551d5*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5551df*/
    RA2_OPDEL(Block); /*0x5551e2*/
  return (LightSourceClass *)Block; /*0x5551ec*/

}
} // namespace gamemd