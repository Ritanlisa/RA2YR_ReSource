// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "structure/building.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"  // G42.36 C2027 supply

// 0x45ECA0
namespace gamemd {
int ParticleTypeClass::GetFoundationHeight(char a2)
{
  if ( a2 && this->u32_1570 ) /*0x45eca8*/
    return dword_819310[*(&this->u32_17C6)] + 1; /*0x45ecc4*/
  else
    return dword_819310[*(&this->u32_17C6)]; /*0x45ecd1*/
}
} // namespace gamemd

