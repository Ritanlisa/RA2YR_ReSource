// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_74F620_e4.hpp"
#include "e4/classes/E4Recv_74F6F0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x74F620
namespace gamemd {
void E4Recv_74F620::sub_74F620()
{
  int i; // eax

  for ( i = 0; i <= *(_DWORD *)this; *(_DWORD *)(this->M8 + 4 * i - 4) = 0 ) /*0x74f626*/
    ++i; /*0x74f62b*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(); /*0x74f639*/
}
} // namespace gamemd

// 0x74F6F0
namespace gamemd {
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{
  int v2; // edx
  int v4; // edx

  v2 = this->M16; /*0x74f6f0*/
  aP1 = aP1; /*0x74f6f3*/
  if ( aP1 >= v2 ) /*0x74f6f9*/
    return 0; /*0x74f71c*/
  v4 = v2 - 1; /*0x74f6fb*/
  this->M16 = v4; /*0x74f6fe*/
  if ( aP1 < v4 ) /*0x74f701*/
  {
    do /*0x74f714*/
    {
      ++aP1; /*0x74f707*/
      *(_DWORD *)(this->M4 + 4 * aP1 - 4) = *(_DWORD *)(this->M4 + 4 * aP1); /*0x74f70b*/
    }
    while ( aP1 < this->M16 ); /*0x74f714*/
  }
  return 1; /*0x74f719*/
}
} // namespace gamemd
