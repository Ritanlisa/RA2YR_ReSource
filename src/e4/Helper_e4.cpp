// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_634970_e4.hpp"
#include "e4/classes/E4Recv_65A7E0_e4.hpp"
#include "e4/classes/E4Recv_69E900_e4.hpp"
#include "e4/classes/E4Recv_74CDB0_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Helper_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/MPBattleClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"

// 0x6F2040
namespace gamemd {
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = dword_A8ECB0; /*0x6f2040*/
  for ( i = 0; i < dword_A8ECB0; ++i ) /*0x6f204a*/
  {
    ((TeamTypeClass *)(*((unsigned int *)dword_A8ECA4 + i)))->ProcessTaskForce(); /*0x6f2054*/
    result = dword_A8ECB0; /*0x6f2059*/
  }
  return result; /*0x6f2063*/
}
}
// 0x4371D0
namespace gamemd {  // G42.18c ns repair
char Helper::ProcessData(void ** a1, int a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4371D0)
}
}  // G42.18c ns repair
// 0x550240
namespace gamemd {
char sub_550240()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x550240)
}
} // namespace gamemd

// 0x5D81B0
namespace gamemd {
unsigned int * sub_5D81B0(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D81B0)
}
} // namespace gamemd
