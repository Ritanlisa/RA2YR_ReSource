// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x763730
namespace gamemd {
int WaypointPathClass::Init()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763730)
}
}
// 0x763810
namespace gamemd {
_DWORD WaypointPathClass::Construct(unsigned int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763810)
}
}
// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763C70)
}
}
// 0x764760
namespace gamemd {
_DWORD * WaypointPathClass::computePath(int a2, unsigned int *a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx

  ((unsigned int *)this)[0] = 0; /*0x76476d*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)a2); /*0x764770*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x764773*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x764777*/
  this->vtable1 = (void *)((unsigned int)(&vt_VectorClass)); /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return (_DWORD *)(this); /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = v7 + 1; /*0x7647cc*/
      *v7 = a2; /*0x7647cf*/
      v9 = (unsigned int *)(v7 + 1); /*0x7647d3*/
      if ( a2 - 1 >= 0 ) /*0x7647d5*/
      {
        v10 = a2; /*0x7647d7*/
        do /*0x7647e4*/
        {
          *v9 = 0; /*0x7647d8*/
          v9[1] = 0; /*0x7647da*/
          v9[2] = 0; /*0x7647dd*/
          v9 += 3; /*0x7647e0*/
          --v10; /*0x7647e3*/
        }
        while ( v10 ); /*0x7647e4*/
        ((unsigned int *)this)[0] = (unsigned int)(v8); /*0x7647e6*/
        BYTE1(((unsigned int *)this)[0]) = 1; /*0x7647e9*/
        return (_DWORD *)(this); /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    ((unsigned int *)this)[0] = (unsigned int)(v8); /*0x7647f7*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x7647fa*/
    return (_DWORD *)(this); /*0x7647fe*/
  }
  *a3 = a2; /*0x764790*/
  v4 = a3 + 1; /*0x764794*/
  if ( a2 - 1 >= 0 ) /*0x764796*/
  {
    v5 = a2; /*0x764798*/
    do /*0x7647a5*/
    {
      *v4 = 0; /*0x764799*/
      v4[1] = 0; /*0x76479b*/
      v4[2] = 0; /*0x76479e*/
      v4 += 3; /*0x7647a1*/
      --v5; /*0x7647a4*/
    }
    while ( v5 ); /*0x7647a5*/
  }
  ((unsigned int *)this)[0] = (unsigned int)(a3 + 1); /*0x7647a7*/
  return (_DWORD *)(this); /*0x7647ac*/

}
}
// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763C00)
}
} // namespace gamemd

// 0x763C30
namespace gamemd {
int WaypointPathClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = unk_7E985C; /*0x763c60*/
  return 0; /*0x763c3d*/

}
} // namespace gamemd

// 0x763D90
namespace gamemd {
int WaypointPathClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763D90)
}
} // namespace gamemd

// 0x763E00
namespace gamemd {
int WaypointPathClass::StubReturn64()
{

  return 64; /*0x763e05*/

}
} // namespace gamemd

// 0x763E10
namespace gamemd {
int WaypointPathClass::StubReturn51()
{

  return 51; /*0x763e15*/

}
} // namespace gamemd

// 0x763E20
namespace gamemd {
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763E20)
}
} // namespace gamemd
