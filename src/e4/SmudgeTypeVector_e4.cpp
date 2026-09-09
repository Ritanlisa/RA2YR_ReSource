// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x67C0B0
VectorClass * SmudgeTypeVector::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall SmudgeTypeVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c0b3*/
  *Block = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c0b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(Block + 1) = 0; /*0x67c0d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c0db*/
  *(Block + 2) = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(Block); /*0x67c0eb*/
  return (VectorClass *)Block; /*0x67c0f5*/
}
}
