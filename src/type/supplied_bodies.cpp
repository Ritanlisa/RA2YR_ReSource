// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "structure/building.hpp"

// 0x45ECA0
namespace gamemd {
int BuildingTypeClass::GetFoundationHeight(char a2) {
    if ( a2 && *((unsigned char *)this + 5488) ) /*0x45eca8*/
      return dword_819310[*(this + 956)] + 1; /*0x45ecc4*/
    else
      return dword_819310[*(this + 956)]; /*0x45ecd1*/
}
} // namespace gamemd

