// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IsometricTileClass_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x72BE80
namespace gamemd {
char sub_72BE80()
{
  char result; // al

  result = byte_B0FD39; /*0x72be80*/
  if ( !byte_B0FD39 ) /*0x72be87*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72be93*/
      dword_B0FA9C = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844DAC),(gamemd::ConvertClass *)((bool *)&byte_B0FD38))); /*0x72bea5*/
    result = LoadPaletteSimple((char *)(off_844DB0),(int *)(&dword_B0FD3C), &dword_B0FD40); /*0x72beba*/
    byte_B0FD39 = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}
} // namespace gamemd

// 0x72BED0
namespace gamemd {
void sub_72BED0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72BED0)
}
} // namespace gamemd
