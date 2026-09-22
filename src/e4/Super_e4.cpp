// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Super_e4.hpp"

// 0x6CC260
namespace gamemd {
void Super::GetDefaultTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = this->q024; /*0x6cc260*/
  if ( result == -1 ) /*0x6cc266*/
    return *(_DWORD *)(this->q028 + 176); /*0x6cc26b*/
  return result; /*0x6cc271*/
}
}
} // namespace gamemd
