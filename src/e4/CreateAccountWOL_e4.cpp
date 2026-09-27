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

// 0x72C240
namespace gamemd {
char sub_72C240()
{
  char result; // al

  result = byte_B0FD21; /*0x72c240*/
  if ( !byte_B0FD21 ) /*0x72c247*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c253*/
      dword_B0FA30 = LoadFileSHP(off_844D9C, (bool *)&byte_B0FD20); /*0x72c265*/
    result = LoadPaletteSimple(off_844DA0, &dword_B0FD24, &dword_B0FD28); /*0x72c27a*/
    byte_B0FD21 = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}
} // namespace gamemd

// 0x72C290
namespace gamemd {
void sub_72C290()
{
  unsigned int v0;

  if ( byte_B0FD21 ) /*0x72c29a*/
  {
    if ( byte_B0FD20 ) /*0x72c2a2*/
    {
      v0 = dword_B0FA30; /*0x72c2a5*/
      if ( dword_B0FA30 ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(dword_B0FA30); /*0x72c2b1*/
        RA2_OPDEL(v0); /*0x72c2b7*/
      }
      byte_B0FD20 = 0; /*0x72c2bf*/
    }
    dword_B0FA30 = 0; /*0x72c2cb*/
    if ( dword_B0FD24 ) /*0x72c2d3*/
    {
      RA2_OPDEL(dword_B0FD24); /*0x72c2d6*/
      dword_B0FD24 = 0; /*0x72c2de*/
    }
    if ( dword_B0FD28 ) /*0x72c2ec*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FD28)(dword_B0FD28, 1); /*0x72c2f2*/
      dword_B0FD28 = 0; /*0x72c2f4*/
    }
  }
  byte_B0FD21 = 0; /*0x72c2fa*/
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
      dword_B0FA64 = LoadFileSHP(off_844D94, (bool *)&byte_B0FD14); /*0x72c445*/
    result = LoadPaletteSimple(off_844D98, &dword_B0FD18, &dword_B0FD1C); /*0x72c45a*/
    byte_B0FD15 = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}
} // namespace gamemd

// 0x72C470
namespace gamemd {
void sub_72C470()
{
  unsigned int v0;

  if ( byte_B0FD15 ) /*0x72c47a*/
  {
    if ( byte_B0FD14 ) /*0x72c482*/
    {
      v0 = dword_B0FA64; /*0x72c485*/
      if ( dword_B0FA64 ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(dword_B0FA64); /*0x72c491*/
        RA2_OPDEL(v0); /*0x72c497*/
      }
      byte_B0FD14 = 0; /*0x72c49f*/
    }
    dword_B0FA64 = 0; /*0x72c4ab*/
    if ( dword_B0FD18 ) /*0x72c4b3*/
    {
      RA2_OPDEL(dword_B0FD18); /*0x72c4b6*/
      dword_B0FD18 = 0; /*0x72c4be*/
    }
    if ( dword_B0FD1C ) /*0x72c4cc*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FD1C)(dword_B0FD1C, 1); /*0x72c4d2*/
      dword_B0FD1C = 0; /*0x72c4d4*/
    }
  }
  byte_B0FD15 = 0; /*0x72c4da*/
}
} // namespace gamemd
