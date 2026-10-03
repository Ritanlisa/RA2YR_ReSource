// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/GadgetGrid_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Targeting_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"

// 0x4B0AD0
namespace gamemd {
AbstractClass * JumpjetLocomotion::MoveTo(IUnknown * aP1, int aP3, void *a3_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B0AD0)
}
}
// 0x4B0F20
namespace gamemd {
AbstractClass * JumpjetLocomotion::ProcessCollision(char a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B0F20)
}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
int JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4, void *a4_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B2630)
}

} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(unsigned int *aP1, int *aP2, int *aP3)
{

  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *JumpjetLocomotion_field_0x40; // edx
  char *JumpjetLocomotion_field_0x44; // ecx

  v4 = (int)(*aP3);
  v5 = (int)((&dword_7E7B30)[3 * (int)this->JumpjetLocomotion_field_0x58]);
  v6 = (int)(*aP2);
  v7 = (int)(aP2[1]);
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = (int)(aP2[1]);
    v7 = (int)(*aP2);
    v4 = (uint8_t)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (uint8_t)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (uint8_t)(0x80 - v4); /*0x4b47dd*/
  }
  *(unsigned int *)aP3 = v4; /*0x4b47df*/
  JumpjetLocomotion_field_0x40 = (char *)this->JumpjetLocomotion_field_0x40; /*0x4b47e2*/
  JumpjetLocomotion_field_0x44 = (char *)this->JumpjetLocomotion_field_0x44; /*0x4b47e5*/
  *aP1 = (unsigned int)(&JumpjetLocomotion_field_0x40[v6]); /*0x4b47f2*/
  aP1[1] = (unsigned int)(&JumpjetLocomotion_field_0x44[v7]); /*0x4b47f5*/
  return aP1; /*0x4b47f0*/

}
}
// 0x54CA90
namespace gamemd {
void* JumpjetLocomotion::Land()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54CA90)
}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
void* JumpjetLocomotion::UpdateFacing()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54D0F0)
}
}
