// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7011A0_e4.hpp"
#include "e4/classes/E4Recv_706BD0_e4.hpp"
#include "e4/classes/E4Recv_707280_e4.hpp"
#include "e4/classes/E4Recv_7087C0_e4.hpp"
#include "e4/classes/E4Recv_70DE20_e4.hpp"
#include "e4/classes/E4Recv_70E5A0_e4.hpp"
#include "e4/classes/E4Recv_70F1D0_e4.hpp"
#include "e4/classes/E4Recv_70F740_e4.hpp"
#include "e4/classes/E4Recv_70FE40_e4.hpp"
#include "e4/classes/E4Recv_70FE50_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_7187A0_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"
#include "e4/classes/Viewport_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"

// 0x7049C0
namespace gamemd {
char DrawTacticalMapLine(FootClass * aP0, FootClass * aP1, int a3, int a4, int a5, int a6, int a7, char a8, char a9)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7049C0)
}
}
// 0x704E40
namespace gamemd {
void* DrawTacticalLaserLine(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x704E40)
}
}
// 0x706ED0
namespace gamemd {
void * TechnoClass_RenderVoxel(int * a1, int a2, void * a3, unsigned int * a4, const void * a5, int a6, int * a7, unsigned int a8, int a9, int a10, int a11)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x706ED0)
}
}
// 0x709550
namespace gamemd {
AbstractClass * * __usercall SelectTargetByWeight(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x709550)
}
}
// 0x70E920
namespace gamemd {
void UpdateTimedStateMachine(int * a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70E920)
}
}
// 0x70F120
namespace gamemd {
unsigned long long TechnoClass_RevealRadarEvent(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70F120)
}
}
// 0x7011A0
namespace gamemd {
int E4Recv_7011A0::sub_7011A0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7011A0)
}
} // namespace gamemd

// 0x70D180
namespace gamemd {
void GlobalFlag_Set(char a1)
{
  byte_843108 = a1; /*0x70d180*/
}
} // namespace gamemd

// 0x70DE20
namespace gamemd {
int E4Recv_70DE20::sub_70DE20(int a2)
{

  this->M324 += a2; /*0x70de2c*/
  return a2; /*0x70de32*/

}
} // namespace gamemd

// 0x70F740
namespace gamemd {
int E4Recv_70F740::sub_70F740(int a2)
{

  ObjectClass *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = (ObjectClass *)((char *)this + 384); /*0x70f74c*/
  v2->AbstractClass =(void *)(unsigned int)(*(void **)(unsigned int *)((char *)&stru_A8EB00 + 416)); /*0x70f752*/
  ((unsigned int *)v2)[0] = (unsigned int)((void *)v4); /*0x70f758*/
  ((unsigned int *)v2)[0] = (unsigned int)((void *)a2); /*0x70f75b*/
  return v4; /*0x70f75e*/

}
} // namespace gamemd

// 0x70FE40
namespace gamemd {
int E4Recv_70FE40::sub_70FE40(int a2)
{

  this->M464 = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/

}
} // namespace gamemd

// 0x70FE50
namespace gamemd {
int E4Recv_70FE50::sub_70FE50()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70FE50)
}
} // namespace gamemd
