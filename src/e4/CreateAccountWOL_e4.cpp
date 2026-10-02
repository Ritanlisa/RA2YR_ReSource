// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x72C240
namespace gamemd {
char sub_72C240()
{
  char result; // al

  result = byte_B0FD21; /*0x72c240*/
  if ( !byte_B0FD21 ) /*0x72c247*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c253*/
      dword_B0FA30 = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844D9C),(gamemd::ConvertClass *)((bool *)&byte_B0FD20))); /*0x72c265*/
    result = LoadPaletteSimple((char *)(off_844DA0),(int *)(&dword_B0FD24), &dword_B0FD28); /*0x72c27a*/
    byte_B0FD21 = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}
} // namespace gamemd

// 0x72C290
namespace gamemd {
void sub_72C290()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1393] ) /*0x72c29a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1392] ) /*0x72c2a2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x72c2a5*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[640] ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[640]); /*0x72c2b1*/
        RA2_OPDEL(v1); /*0x72c2b7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1392] = 0; /*0x72c2bf*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[640] = 0; /*0x72c2cb*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1396] ) /*0x72c2d3*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1396]); /*0x72c2d6*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1396] = 0; /*0x72c2de*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1400] ) /*0x72c2ec*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1400])( /*0x72c2f2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1400],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1400] = 0; /*0x72c2f4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1393] = 0; /*0x72c2fa*/
}
} // namespace gamemd

// 0x72C420
namespace gamemd {
char sub_72C420()
{
  char result; // al

  result = byte_B0FD15; /*0x72c420*/
  if ( !byte_B0FD15 ) /*0x72c427*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c433*/
      dword_B0FA64 = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844D94),(gamemd::ConvertClass *)((bool *)&byte_B0FD14))); /*0x72c445*/
    result = LoadPaletteSimple((char *)(off_844D98),(int *)(&dword_B0FD18), &dword_B0FD1C); /*0x72c45a*/
    byte_B0FD15 = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}
} // namespace gamemd

// 0x72C470
namespace gamemd {
void sub_72C470()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1381] ) /*0x72c47a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1380] ) /*0x72c482*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x72c485*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[692] ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[692]); /*0x72c491*/
        RA2_OPDEL(v1); /*0x72c497*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1380] = 0; /*0x72c49f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[692] = 0; /*0x72c4ab*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1384] ) /*0x72c4b3*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1384]); /*0x72c4b6*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1384] = 0; /*0x72c4be*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1388] ) /*0x72c4cc*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1388])( /*0x72c4d2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1388],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1388] = 0; /*0x72c4d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1381] = 0; /*0x72c4da*/
}
} // namespace gamemd
