// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6E5820
int TriggerActionQueue::ProcessAll()
{
{
    int result;
    int i;
    result = g_GameObjectCleanup;
    for ( i = 0; i < g_GameObjectCleanup; ++i )
  {
    TriggerClass::NotifyLocalChanged(this);
    result = g_GameObjectCleanup;
  }
    return result;
}
}
