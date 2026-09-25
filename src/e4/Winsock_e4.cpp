// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Winsock_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7B2050
namespace gamemd {
char Winsock::VerifyCRC(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edx
  int v6; // eax

  v1 = a1; /*0x7b2051*/
  v2 = *(_DWORD *)(a1 + 16); /*0x7b2055*/
  if ( v2 < 640 ) /*0x7b205d*/
  {
    v3 = 0; /*0x7b206a*/
    v4 = (int *)(a1 + 32); /*0x7b206c*/
    a1 = 0; /*0x7b2071*/
    if ( v2 / 4 > 0 ) /*0x7b2075*/
    {
      do /*0x7b2094*/
      {
        v5 = *v4++; /*0x7b2077*/
        ComputeHash(&a1, v5); /*0x7b2080*/
        ++v3; /*0x7b2088*/
      }
      while ( v3 < *(_DWORD *)(v1 + 16) / 4 ); /*0x7b2094*/
    }
    v6 = *(_DWORD *)(v1 + 16) & 3; /*0x7b2099*/
    if ( v6 ) /*0x7b209c*/
      ComputeHash(&a1, *v4 & (0xFFFFFFFF >> (32 - 8 * v6))); /*0x7b20b5*/
    if ( a1 == *(_DWORD *)(v1 + 28) ) /*0x7b20c5*/
      return 1; /*0x7b20ca*/
    Debug::Log(); /*0x7b20d2*/
  }
  return 0; /*0x7b20c9*/
}
} // namespace gamemd
