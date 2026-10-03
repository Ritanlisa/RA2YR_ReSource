// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/E4Recv_438A60_e4.hpp"
#include "e4/classes/CountdownTimer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x4385D0
namespace gamemd {
int BombClass::AbstractClass()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4385D0)
}
} // namespace ra2

// 0x438A00
namespace gamemd {
void * BombClass::GetCurrentFrame()
{

  int v2; // ecx

  if ( (&this->audioController)[0] == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 /*0x438a4c*/
     * ((*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - (&this->audioController)[1])
      / (*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4048)
       / 6));
  if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) % (2 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4056)) >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4056) ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return (void *)(__0Iostream_init_QAE_XZ_1((Iostream_init *)v2)); /*0x438a59*/
  else
    return (void *)(__0Iostream_init_QAE_XZ_1((Iostream_init *)0xB)); /*0x438a5c*/

}
} // namespace ra2

// 0x438A70
namespace gamemd {
int BombClass::TimeToExplode()
{

  return !(&this->audioController)[0] /*0x438a8c*/
      && *(int *)(unsigned int *)((char *)&stru_A8EB00 + 416) > (&this->audioController)[2]
      && !this->BombClass_field_58;

}
} // namespace ra2

// 0x438A90
namespace gamemd {
int BombClass::Stat(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x438A90)
}
} // namespace ra2

// 0x438550
namespace gamemd {
int BombClass::InitPool()
{

  dword_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  byte_89C674 = 1; /*0x438561*/
  byte_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&vt_DynamicVectorClass; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit((void (__cdecl *)(void))globalHelper_038590); /*0x43858c*/

}
} // namespace gamemd

// 0x4389F0
namespace gamemd {
int BombClass::IsDeathBomb()
{

  return (&this->audioController)[0]; /*0x4389f3*/

}
} // namespace gamemd

// 0x438B00
namespace gamemd {
int BombClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = unk_7E98BC; /*0x438b30*/
  return 0; /*0x438b0d*/

}
} // namespace gamemd

// 0x438B40
namespace gamemd {
int BombClass::Write(int a2, int aP0, int aP1, int a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x438B40)
}
} // namespace gamemd

// 0x438BD0
namespace gamemd {
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x438be4*/

}
} // namespace gamemd

// 0x4393F0
namespace gamemd {
BombClass * BombClass::CopyTo(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4393F0)
}
} // namespace gamemd
