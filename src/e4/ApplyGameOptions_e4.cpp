// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6B8AF0_e4.hpp"

// 0x6B8AF0
namespace gamemd {
bool E4Recv_6B8AF0::sub_6B8AF0(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_6B8AF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *this ^ *a2; /*0x6b8af8*/
  return !(_BYTE)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/
}
}
} // namespace gamemd
