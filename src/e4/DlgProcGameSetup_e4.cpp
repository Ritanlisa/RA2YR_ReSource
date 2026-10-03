// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DiskLaserClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x72B8E0
namespace gamemd {
char sub_72B8E0()
{
  char result; // al

  result = byte_B0FD5D; /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844DC4),(gamemd::ConvertClass *)((bool *)&byte_B0FD5C))); /*0x72b905*/
    result = LoadPaletteSimple((char *)(off_844DC8),(int *)(&dword_B0FD60), &dword_B0FD64); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B930)
}
} // namespace gamemd
