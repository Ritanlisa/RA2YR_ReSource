// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6B7BB0
namespace gamemd {
void UnitClass::ProcessIdleOrders()
{
  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < *(&this->vtable28); ++i ) /*0x6b7bbc*/
  {
    v3 = *(int **)(*(&this->vtable25) + 4 * i); /*0x6b7bc6*/
    if ( v3[1] == 2 ) /*0x6b7bcd*/
    {
      v4 = *v3; /*0x6b7bcf*/
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3432) ) /*0x6b7bd7*/
      {
        UnitClass::GetExitCell(v4, *(&this->vtable36)); /*0x6b7beb*/
        g_MissionQueueFrame = (int)g_CurrentFrame; /*0x6b7bfa*/
        v5 = v5; /*0x6b7bff*/
        g_MissionQueueType = 2; /*0x6b7c05*/
        UnitClass::ClearTargetRef(**(_DWORD **)(*(&this->vtable25) + 4 * i)); /*0x6b7c16*/
      }
    }
  }
  *(&this->vtable38) = 0; /*0x6b7c26*/
  *(&this->vtable37) = 0; /*0x6b7c29*/
  *(&this->vtable36) = 0; /*0x6b7c2c*/
}
}