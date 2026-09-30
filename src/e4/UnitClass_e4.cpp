// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Network_e4.hpp"

// 0x6B7BB0
namespace gamemd {
void UnitClass::ProcessIdleOrders()
{

  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < *((unsigned int *)this + 18); ++i ) /*0x6b7bbc*/
  {
    v3 = *(int **)(*((unsigned int *)this + 15) + 4 * i); /*0x6b7bc6*/
    if ( v3[1] == 2 ) /*0x6b7bcd*/
    {
      v4 = *v3; /*0x6b7bcf*/
      if ( *(unsigned char *)(*(unsigned int *)(v4 + 1732) + 3432) ) /*0x6b7bd7*/
      {
        UnitClass::GetExitCell(v4, *((unsigned int *)this + 26)); /*0x6b7beb*/
        g_MissionQueueFrame = (int)g_abs_A8ED84; /*0x6b7bfa*/
        g_MissionQueueParam = v5; /*0x6b7bff*/
        g_MissionQueueType = 2; /*0x6b7c05*/
        UnitClass::ClearTargetRef(**(unsigned int **)(*((unsigned int *)this + 15) + 4 * i)); /*0x6b7c16*/
      }
    }
  }
  *((unsigned int *)this + 28) = 0; /*0x6b7c26*/
  *((unsigned int *)this + 27) = 0; /*0x6b7c29*/
  *((unsigned int *)this + 26) = 0; /*0x6b7c2c*/

}
}