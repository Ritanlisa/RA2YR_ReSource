// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CEB50
void MSOverlayAnim::StubReturnFalse(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall MSOverlayAnim::StubReturnFalse(int a1)
{
  ; /*0x5ceb50*/
}
}

// 0x5CEB80
MSShapeAnim * MSOverlayAnim::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MSShapeAnim *__thiscall MSOverlayAnim::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 7); /*0x5ceb83*/
  *Block = &MSShapeAnim::`vftable'; /*0x5ceb86*/
  if ( v3 && *((_BYTE *)Block + 60) ) /*0x5ceb90*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceb98*/
    *(Block + 7) = 0; /*0x5ceba0*/
    *((_BYTE *)Block + 60) = 0; /*0x5ceba7*/
  }
  *Block = &MSAnim::`vftable'; /*0x5cebaf*/
  if ( (a2 & 1) != 0 ) /*0x5cebb7*/
    __3_YAXPAX_Z(Block); /*0x5cebba*/
  return (MSShapeAnim *)Block; /*0x5cebc4*/
}
}
