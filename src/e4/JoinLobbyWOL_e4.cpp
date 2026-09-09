// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72BE80
namespace gamemd {
char sub_72BE80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72BE80()
{
  char result; // al

  result = MEMORY[0xB0FD39]; /*0x72be80*/
  if ( !MEMORY[0xB0FD39] ) /*0x72be87*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72be93*/
      MEMORY[0xB0FA9C] = LoadFileSHP(MEMORY[0x844DAC], (bool *)&MEMORY[0xB0FD38]); /*0x72bea5*/
    result = LoadPaletteSimple(MEMORY[0x844DB0], &MEMORY[0xB0FD3C], &MEMORY[0xB0FD40]); /*0x72beba*/
    MEMORY[0xB0FD39] = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}
}
} // namespace gamemd

// 0x72BED0
namespace gamemd {
void sub_72BED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72BED0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD39] ) /*0x72beda*/
  {
    if ( MEMORY[0xB0FD38] ) /*0x72bee2*/
    {
      v0 = MEMORY[0xB0FA9C]; /*0x72bee5*/
      if ( MEMORY[0xB0FA9C] ) /*0x72beed*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA9C]); /*0x72bef1*/
        __3_YAXPAX_Z(v0); /*0x72bef7*/
      }
      MEMORY[0xB0FD38] = 0; /*0x72beff*/
    }
    MEMORY[0xB0FA9C] = 0; /*0x72bf0b*/
    if ( MEMORY[0xB0FD3C] ) /*0x72bf13*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD3C]); /*0x72bf16*/
      MEMORY[0xB0FD3C] = 0; /*0x72bf1e*/
    }
    if ( MEMORY[0xB0FD40] ) /*0x72bf2c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD40])(MEMORY[0xB0FD40], 1); /*0x72bf32*/
      MEMORY[0xB0FD40] = 0; /*0x72bf34*/
    }
  }
  MEMORY[0xB0FD39] = 0; /*0x72bf3a*/
}
}
} // namespace gamemd
