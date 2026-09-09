// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6E5820
int TriggerActionQueue::ProcessAll()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TriggerActionQueue::ProcessAll(void *this)
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xB0E730]; /*0x6e5820*/
  for ( i = 0; i < MEMORY[0xB0E730]; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(this); /*0x6e583b*/
    result = MEMORY[0xB0E730]; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}
}
