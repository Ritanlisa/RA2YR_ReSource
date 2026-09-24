// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72BE80
namespace gamemd {
char sub_72BE80()
{
  char result; // al

  result = byte_B0FD39; /*0x72be80*/
  if ( !byte_B0FD39 ) /*0x72be87*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72be93*/
      dword_B0FA9C = LoadFileSHP(off_844DAC, (bool *)&byte_B0FD38); /*0x72bea5*/
    result = LoadPaletteSimple(off_844DB0, &dword_B0FD3C, &dword_B0FD40); /*0x72beba*/
    byte_B0FD39 = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}
} // namespace gamemd

// 0x72BED0
namespace gamemd {
void sub_72BED0()
{
  void *v0; // esi

  if ( byte_B0FD39 ) /*0x72beda*/
  {
    if ( byte_B0FD38 ) /*0x72bee2*/
    {
      v0 = dword_B0FA9C; /*0x72bee5*/
      if ( dword_B0FA9C ) /*0x72beed*/
      {
        FileTreeNode::Destroy(dword_B0FA9C); /*0x72bef1*/
        __3_YAXPAX_Z(v0); /*0x72bef7*/
      }
      byte_B0FD38 = 0; /*0x72beff*/
    }
    dword_B0FA9C = 0; /*0x72bf0b*/
    if ( dword_B0FD3C ) /*0x72bf13*/
    {
      __3_YAXPAX_Z(dword_B0FD3C); /*0x72bf16*/
      dword_B0FD3C = 0; /*0x72bf1e*/
    }
    if ( dword_B0FD40 ) /*0x72bf2c*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FD40)(dword_B0FD40, 1); /*0x72bf32*/
      dword_B0FD40 = 0; /*0x72bf34*/
    }
  }
  byte_B0FD39 = 0; /*0x72bf3a*/
}
} // namespace gamemd
