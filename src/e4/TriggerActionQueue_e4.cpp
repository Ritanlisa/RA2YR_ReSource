// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6E5820
int TriggerActionQueue::ProcessAll()
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e5820*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(this); /*0x6e583b*/
    result = g_GameObjectCleanup; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}