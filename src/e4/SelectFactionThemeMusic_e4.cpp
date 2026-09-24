// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_734330_e4.hpp"
#include "e4/classes/E4Recv_734390_e4.hpp"

// 0x732210
namespace gamemd {
int sub_732210(int a1, const char * a2)
{
  int v2; // eax
  int v3; // edi
  const char **i; // ebp

  v2 = *(_DWORD *)(a1 + 16); /*0x732211*/
  v3 = 0; /*0x732218*/
  if ( v2 <= 0 ) /*0x732220*/
    return -1; /*0x732261*/
  for ( i = *(const char ***)(a1 + 4); strcmp(a2, *i); ++i ) /*0x732222*/
  {
    if ( ++v3 >= v2 ) /*0x73225f*/
      return -1; /*0x73225f*/
  }
  return v3; /*0x732261*/
}
} // namespace gamemd
