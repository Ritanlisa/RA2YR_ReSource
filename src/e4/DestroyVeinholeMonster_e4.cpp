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

  for ( i = 0; i <= *(unsigned int *)this; *(unsigned int *)(*((unsigned int *)this + 2) + 4 * i - 4) = 0 ) /*0x74f626*/
    ++i; /*0x74f62b*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(this); /*0x74f639*/

}
} // namespace gamemd

// 0x74F6F0
namespace gamemd {
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{

  int v2; // edx
  DynamicVector *v3; // eax
  int v4; // edx

  v2 = *((unsigned int *)this + 4); /*0x74f6f0*/
  v3 = aP1; /*0x74f6f3*/
  if ( (int)aP1 >= v2 ) /*0x74f6f9*/
    return 0; /*0x74f71c*/
  v4 = v2 - 1; /*0x74f6fb*/
  *((unsigned int *)this + 4) = v4; /*0x74f6fe*/
  if ( (int)aP1 < v4 ) /*0x74f701*/
  {
    do /*0x74f714*/
    {
      v3 = (DynamicVector *)((char *)v3 + 1); /*0x74f707*/
      *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3); /*0x74f70b*/
    }
    while ( (int)v3 < *((unsigned int *)this + 4) ); /*0x74f714*/
  }
  return 1; /*0x74f719*/

}
} // namespace gamemd
