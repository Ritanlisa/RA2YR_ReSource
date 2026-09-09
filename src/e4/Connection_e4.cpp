// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Connection_e4.hpp"

// 0x5422F0
namespace gamemd {
int Connection::GetSpeed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Connection_GetSpeed(int this)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x5422f7*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 72) + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/
}
}
} // namespace gamemd

// 0x543090
namespace gamemd {
int Connection::Close()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Connection_Close(_DWORD *this)
{
  int result; // eax

  result = *(this + 18); /*0x543090*/
  if ( result ) /*0x543095*/
    *(_BYTE *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}
}
} // namespace gamemd
