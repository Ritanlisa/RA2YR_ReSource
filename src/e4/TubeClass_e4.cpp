// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x7281A0
namespace gamemd {
int TubeClass::LoadState(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = ((AbstractClass *)(aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( aP0 ) /*0x7281b6*/
    {
      ((AbstractClass *)(aP0))->Constructor(); /*0x7281ba*/
      *(unsigned int *)aP0->__pad_0 = &vt_TubeClass; /*0x7281bf*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_TubeClass; /*0x7281c5*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_TubeClass; /*0x7281cc*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_TubeClass; /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/

}
} // namespace gamemd

// 0x7281E0
namespace gamemd {
int TubeClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7281ef*/
  if ( result >= 0 ) /*0x7281f6*/
    return 0; /*0x7281f8*/
  return result; /*0x7281fa*/

}
} // namespace gamemd

// 0x7286B0
namespace gamemd {
int TubeClass::StubReturn452()
{

  return 452; /*0x7286b5*/

}
} // namespace gamemd

// 0x7286C0
namespace gamemd {
int TubeClass::StubReturn53()
{

  return 53; /*0x7286c5*/

}
} // namespace gamemd

// 0x7286D0
namespace gamemd {
int TubeClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x7286d6*/
    return -2147467261; /*0x7286d8*/
  *a2 = 189572124; /*0x7286e6*/
  a2[1] = 298955687; /*0x7286ee*/
  a2[2] = 1610635188; /*0x7286f7*/
  a2[3] = 2041169559; /*0x728700*/
  return 0; /*0x7286dd*/

}
} // namespace gamemd
