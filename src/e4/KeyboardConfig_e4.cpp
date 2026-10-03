// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/Targeting_e4.hpp"

// 0x533D20
namespace gamemd {
int KeyboardConfig::LoadINI()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x533D20)
}
} // namespace gamemd
// 0x538B80
namespace gamemd {
AbstractClass * KeyboardConfig::ReleaseBuffer(int a2, void *a2_2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  char * v7;

  if ( a2 < 0 ) /*0x538b8c*/
    return 0; /*0x538b8c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x538ba0*/
  if ( !v3 ) /*0x538ba7*/
    return 0; /*0x538c00*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x538bb5*/
  {
    v5 = 8 * i; /*0x538bb9*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x538bc2*/
    *(unsigned int *)&v3[v5] = *v6; /*0x538bc7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x538bdb*/
  v7 = (char *)(a2 + *((unsigned int *)this + 2)); /*0x538be6*/
  *(unsigned int *)this = (unsigned int)(v3); /*0x538be8*/
  *((unsigned int *)this + 2) = (unsigned int)(v7); /*0x538bea*/
  *((unsigned int *)this + 4) = 0; /*0x538bed*/
  return (gamemd::AbstractClass *)(1); /*0x538bf4*/

}
} // namespace gamemd