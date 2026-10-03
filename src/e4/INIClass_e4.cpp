// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"

// 0x526810
namespace gamemd {
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1, void *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526810)
}
}
// 0x526960
namespace gamemd {
VoxelStruct * * INIClass::GetKeyCount(INIClass * aP1, void *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526960)
}
}
// 0x528A10
namespace gamemd {
unsigned int INIClass::GetString(unsigned __int8 *a2, unsigned __int8 *a3, char *Source, char *Destination, int Count, int aP4, int aP1, int aP3, int a1, int a4, int a5, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x528A10)
}
}
// 0x535AA0
namespace gamemd {
INIClass::INIClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x535AA0)
}
}
// 0x474620
namespace gamemd {
int INIClass::ReadCoord(double *a1, double a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5, int aP2, int aP1, int aP3)
{

  int result; // eax

  INIClass::ReadDouble_Overwrite(a1, aP2, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  LOWORD(result) = Math::RoundToInt(a2 * 256.0); /*0x474652*/
  return result; /*0x474649*/

}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(uint8_t *aP1, uint8_t *a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4757D0)
}
} // namespace gamemd

// 0x526CC0
namespace gamemd {
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526CC0)
}
} // namespace gamemd

// 0x5278F0
namespace gamemd {
int INIClass::ReadInt(String *a2, String *a3, int a4, int aP2, int aP1, int a1, int aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5278F0)
}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x529820)
}
} // namespace gamemd
