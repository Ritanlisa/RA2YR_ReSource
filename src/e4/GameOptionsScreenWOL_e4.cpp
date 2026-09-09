// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72C060
namespace gamemd {
char sub_72C060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C060()
{
  char result; // al

  result = MEMORY[0xB0FD2D]; /*0x72c060*/
  if ( !MEMORY[0xB0FD2D] ) /*0x72c067*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c073*/
      MEMORY[0xB0FA4C] = LoadFileSHP(MEMORY[0x844DA4], (bool *)&MEMORY[0xB0FD2C]); /*0x72c085*/
    result = LoadPaletteSimple(MEMORY[0x844DA8], &MEMORY[0xB0FD30], &MEMORY[0xB0FD34]); /*0x72c09a*/
    MEMORY[0xB0FD2D] = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}
}
} // namespace gamemd

// 0x72C0B0
namespace gamemd {
void sub_72C0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72C0B0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD2D] ) /*0x72c0ba*/
  {
    if ( MEMORY[0xB0FD2C] ) /*0x72c0c2*/
    {
      v0 = MEMORY[0xB0FA4C]; /*0x72c0c5*/
      if ( MEMORY[0xB0FA4C] ) /*0x72c0cd*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA4C]); /*0x72c0d1*/
        __3_YAXPAX_Z(v0); /*0x72c0d7*/
      }
      MEMORY[0xB0FD2C] = 0; /*0x72c0df*/
    }
    MEMORY[0xB0FA4C] = 0; /*0x72c0eb*/
    if ( MEMORY[0xB0FD30] ) /*0x72c0f3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD30]); /*0x72c0f6*/
      MEMORY[0xB0FD30] = 0; /*0x72c0fe*/
    }
    if ( MEMORY[0xB0FD34] ) /*0x72c10c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD34])(MEMORY[0xB0FD34], 1); /*0x72c112*/
      MEMORY[0xB0FD34] = 0; /*0x72c114*/
    }
  }
  MEMORY[0xB0FD2D] = 0; /*0x72c11a*/
}
}
} // namespace gamemd

// 0x798340
namespace gamemd {
BOOL sub_798340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL sub_798340()
{
  HANDLE *v0; // esi
  BOOL result; // eax

  v0 = &Handles; /*0x798348*/
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}
}
} // namespace gamemd
