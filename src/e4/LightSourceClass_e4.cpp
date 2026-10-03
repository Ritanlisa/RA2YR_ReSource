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
namespace gamemd {
_DWORD * LightSourceClass::Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x554760)
}
} // namespace gamemd
// 0x554830
namespace gamemd {
int LightSourceClass::Constructor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x554830)
}
} // namespace gamemd
// 0x555070
namespace gamemd {
int LightSourceClass::Stat(AbstractClass * aP1)
{

  return ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x55507a*/

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

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x5550df*/
      aP0->vtable1 = &vt_LightSourceClass; /*0x5550e4*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550ea*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550f1*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_LightSourceClass); /*0x5550f8*/
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

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x55511f*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x555150)
}
} // namespace gamemd
