// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6B7BB0
namespace gamemd {
void UnitClass::ProcessIdleOrders()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall UnitClass_ProcessIdleOrders(_DWORD *this)
{
  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < this->q048; ++i ) /*0x6b7bbc*/
  {
    v3 = *(int **)(this->ambientSoundController + 4 * i); /*0x6b7bc6*/
    if ( v3[1] == 2 ) /*0x6b7bcd*/
    {
      v4 = *v3; /*0x6b7bcf*/
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3432) ) /*0x6b7bd7*/
      {
        UnitClass::GetExitCell(v4, this->bombVisible); /*0x6b7beb*/
        g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x6b7bfa*/
        g_MissionQueueParam = v5; /*0x6b7bff*/
        g_MissionQueueType = 2; /*0x6b7c05*/
        UnitClass::ClearTargetRef(**(_DWORD **)(this->ambientSoundController + 4 * i)); /*0x6b7c16*/
      }
    }
  }
  this->estimatedHealth = 0; /*0x6b7c26*/
  this->health = 0; /*0x6b7c29*/
  this->bombVisible = 0; /*0x6b7c2c*/
}
}
} // namespace gamemd
