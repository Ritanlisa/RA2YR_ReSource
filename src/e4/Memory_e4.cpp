// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_623E00_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Memory_e4.hpp"
#include "e4/classes/Menu_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"

// 0x53EC40
namespace gamemd {
int sub_53EC40(unsigned char a1, char a2)
{
  int result; // eax

  result = dword_AA0444; /*0x53ec40*/
  if ( dword_AA0444 )
    ((unsigned int *)(word_AA0168))[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}
}
// 0x6149B0
namespace gamemd {
size_t Memory_Helper_6149B0(HWND hWnd, WCHAR * a2, int cchWideChar, size_t * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6149B0)
}
// 0x58C6F0
namespace gamemd {
double Memory_Helper_58C6F0(IUnknown * aP0, short * a1, double a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x58C6F0)
}
} // namespace gamemd
}

// 0x5C0E90
namespace gamemd {  // G42.18c ns repair
char Memory::FreeConditional(int a1, int a2, void * Block, int a4, short a5, int a6, int a7, int a8, int a9)
{

  if ( Block && HIBYTE(a5) ) /*0x5c0e9e*/
    __3_YAXPAX_Z(Block); /*0x5c0ea1*/
  return 0; /*0x5c0eab*/

}
}  // G42.18c ns repair
// 0x5C0FA0
namespace gamemd {  // G42.18c ns repair
char Memory::FreeConditional2(int a1, void * Block, int a3, short a4, int a5, int a6, int a7)
{

  if ( Block && HIBYTE(a4) ) /*0x5c0fae*/
    __3_YAXPAX_Z(Block); /*0x5c0fb1*/
  return 0; /*0x5c0fbb*/

}
}  // G42.18c ns repair
// 0x731CE0
int Memory::Alloc76()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731CE0)
}
