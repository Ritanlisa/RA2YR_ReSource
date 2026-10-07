// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_74F620_e4.hpp"
#include "e4/classes/E4Recv_74F6F0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/E4Recv_74F63A_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x74F620
namespace gamemd {
void E4Recv_74F620::sub_74F620()
{

  int i; // eax

  for ( i = 0; i <= (int)this->AbstractClass; *((unsigned int *)((unsigned int *)this)[0] + i - 1) = 0 ) /*0x74f626*/
    ++i; /*0x74f62b*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0((Concurrency::details::_NonReentrantLock *)this); /*0x74f639*/

}
} // namespace gamemd

// 0x74F6F0
namespace gamemd {
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{

  int uniqueId; // edx
  DynamicVector * v3;
  int v4; // edx

  uniqueId = (int)(((unsigned int *)this)[0]);
  v3 = aP1; /*0x74f6f3*/
  if ( aP1 >= (gamemd::DynamicVector *)(uniqueId) ) /*0x74f6f9*/
    return 0; /*0x74f71c*/
  v4 = uniqueId - 1; /*0x74f6fb*/
  ((unsigned int *)this)[0] = v4; /*0x74f6fe*/
  if ( aP1 < (gamemd::DynamicVector *)(v4) ) /*0x74f701*/
  {
    do /*0x74f714*/
    {
      ++v3; /*0x74f707*/
      *((unsigned int *)((unsigned int *)this)[0] + v3 - 1) = *((unsigned int *)((unsigned int *)this)[0] + v3); /*0x74f70b*/
    }
    while ( (int)v3 < *(int **)this ); /*0x74f714*/
  }
  return 1; /*0x74f719*/

}
} // namespace gamemd
