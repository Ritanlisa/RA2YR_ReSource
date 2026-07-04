#include "triggeractionqueue.hpp"

int  TriggerActionQueue::ProcessAll(void *this)
{
    int result; // eax
    int i; // esi
    result = g_GameObjectCleanup;
    for ( i = 0; i < g_GameObjectCleanup; ++i )
    TriggerClass::NotifyLocalChanged(this);
    result = g_GameObjectCleanup;
    return result;
}

