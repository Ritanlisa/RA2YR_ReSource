// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6B7BB0
namespace gamemd {
void UnitClass::ProcessIdleOrders()
{
  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < *(this + 18); ++i ) /*0x6b7bbc*/
  {
    v3 = *(int **)(*(this + 15) + 4 * i); /*0x6b7bc6*/
    if ( v3[1] == 2 ) /*0x6b7bcd*/
    {
      v4 = *v3; /*0x6b7bcf*/
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3432) ) /*0x6b7bd7*/
      {
        UnitClass::GetExitCell(v4, *(this + 26)); /*0x6b7beb*/
        g_MissionQueueFrame = (int)g_CurrentFrame; /*0x6b7bfa*/
        g_MissionQueueParam = v5; /*0x6b7bff*/
        g_MissionQueueType = 2; /*0x6b7c05*/
        UnitClass::ClearTargetRef(**(_DWORD **)(*(this + 15) + 4 * i)); /*0x6b7c16*/
      }
    }
  }
  *(this + 28) = 0; /*0x6b7c26*/
  *(this + 27) = 0; /*0x6b7c29*/
  *(this + 26) = 0; /*0x6b7c2c*/
}
}