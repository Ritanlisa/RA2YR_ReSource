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
namespace gamemd {  // G42.18 ns repair
char sub_72BE80()
{
  char result; // al

  result = byte_B0FD39; /*0x72be80*/
  if ( !byte_B0FD39 ) /*0x72be87*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72be93*/
      dword_B0FA9C = (unsigned int)(LoadFileSHP((char *)(off_844DAC), (bool *)&byte_B0FD38)); /*0x72bea5*/
    result = LoadPaletteSimple((char *)(off_844DB0), &dword_B0FD3C, &dword_B0FD40); /*0x72beba*/
    byte_B0FD39 = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x72BED0
namespace gamemd {
void sub_72BED0()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1417] ) /*0x72beda*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1416] ) /*0x72bee2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x72bee5*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[748] ) /*0x72beed*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[748]); /*0x72bef1*/
        operator delete((void *)(v1)); /*0x72bef7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1416] = 0; /*0x72beff*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[748] = 0; /*0x72bf0b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1420] ) /*0x72bf13*/
    {
      operator delete((void *)(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1420])); /*0x72bf16*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1420] = 0; /*0x72bf1e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1424] ) /*0x72bf2c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1424])( /*0x72bf32*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1424],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1424] = 0; /*0x72bf34*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1417] = 0; /*0x72bf3a*/
}
} // namespace gamemd
