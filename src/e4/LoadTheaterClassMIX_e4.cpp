// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x717840
namespace gamemd {
int sub_717840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_717840()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = MEMORY[0xA8EB10]; /*0x717840*/
  for ( i = 0; i < MEMORY[0xA8EB10]; ++i ) /*0x71784a*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8EB04] + i); /*0x717852*/
    if ( *(_BYTE *)(v2 + 3536) ) /*0x717855*/
      *(_DWORD *)(v2 + 3568) = FileExtension::MapHandler((const char *)(v2 + 3536)); /*0x71786a*/
    result = MEMORY[0xA8EB10]; /*0x717870*/
  }
  return result; /*0x71787b*/
}
}
} // namespace gamemd
