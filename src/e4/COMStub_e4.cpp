// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_429550_e4.hpp"

// 0x429550
namespace gamemd {
int E4Recv_429550::COMStub_429550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall COMStub_429550(ApplicationClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  return SwizzleManagerClass::Process((int)&MEMORY[0xB077F8].__pad_14B0[13416], &IID_ISwizzle, v2); /*0x429564*/
}
}
} // namespace gamemd

// 0x4E7CF0
namespace gamemd {
unsigned char * sub_4E7CF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_4E7CF0()
{
  _BYTE *v0; // esi
  int v1; // edi
  _BYTE *result; // eax

  v0 = &MEMORY[0xA8E3A8]; /*0x4e7cf2*/
  v1 = 32; /*0x4e7cf7*/
  do /*0x4e7d07*/
  {
    result = MissionClass::FindName(v0); /*0x4e7cfe*/
    v0 += 32; /*0x4e7d03*/
    --v1; /*0x4e7d06*/
  }
  while ( v1 ); /*0x4e7d07*/
  return result; /*0x4e7d09*/
}
}
} // namespace gamemd

// 0x565060
namespace gamemd {
int sub_565060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_565060()
{
  CellClass::Construct(g_CellClassArray); /*0x565065*/
  return atexit(unknown_libname_22); /*0x565075*/
}
}
} // namespace gamemd
