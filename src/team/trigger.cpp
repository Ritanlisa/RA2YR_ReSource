#include "gamemd/team/trigger.hpp"
#include "gamemd/house/house.hpp"

#include <cstring>

namespace gamemd
{

// --- TriggerClass ---

TriggerClass* TriggerClass::GetInstance(TriggerTypeClass* type)
{
    // TODO: allocate and configure from TriggerTypeClass
    return nullptr;
}

bool TriggerClass::HasCrossesHorizontalLineEvent() const
{
    // TODO: check event list for horizontal line events
    return false;
}

bool TriggerClass::HasCrossesVerticalLineEvent() const
{
    // TODO: check event list for vertical line events
    return false;
}

bool TriggerClass::HasZoneEntryByEvent() const
{
    // TODO: check event list for zone entry event
    return false;
}

bool TriggerClass::HasAllowWinAction() const
{
    // TODO: check action list for allow win action
    return false;
}

bool TriggerClass::HasGlobalSetOrClearedEvent(int idx_global) const
{
    // TODO: check event list for global set/cleared event at idx
    (void)idx_global;
    return false;
}

void TriggerClass::NotifyGlobalChanged(int idx_global)
{
    // TODO: fire attached events matching global idx
    (void)idx_global;
}

void TriggerClass::NotifyLocalChanged(int idx_local)
{
    // TODO: fire attached events matching local idx
    (void)idx_local;
}

void TriggerClass::ResetTimers()
{
    std::memset(&m_timer, 0, sizeof(m_timer));
}

void TriggerClass::Destroy()
{
    m_destroyed = true;
    // TODO: remove from trigger chain, notify actions
}

bool TriggerClass::RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source)
{
    // TODO: register event handler
    (void)event;
    (void)object;
    (void)force_fire;
    (void)persistent;
    (void)source;
    return false;
}

bool TriggerClass::FireActions(ObjectClass* obj, CellStruct location)
{
    // TODO: iterate and execute all TriggerActions
    (void)obj;
    (void)location;
    return false;
}

// --- TriggerTypeClass ---

void TriggerTypeClass::LoadFromINIList(CCINIClass* ini)
{
    // TODO: read all TriggerTypes from INI
    (void)ini;
}

void TriggerTypeClass::SaveToINIList(CCINIClass* ini)
{
    // TODO: write all TriggerTypes to INI
    (void)ini;
}

TriggerTypeClass::Flags TriggerTypeClass::GetFlags() const
{
    // TODO: compute flags from event/action configuration
    return 0;
}

bool TriggerTypeClass::HasAllowWinAction() const
{
    // TODO: check actions for allow win
    return false;
}

bool TriggerTypeClass::HasGlobalSetOrClearedEvent(int idx_global) const
{
    // TODO: check events for global set/cleared
    (void)idx_global;
    return false;
}

bool TriggerTypeClass::HasLocalSetOrClearedEvent(int idx_local) const
{
    // TODO: check events for local set/cleared
    (void)idx_local;
    return false;
}

bool TriggerTypeClass::HasCrossesHorizontalLineEvent() const
{
    return false;
}

bool TriggerTypeClass::HasCrossesVerticalLineEvent() const
{
    return false;
}

bool TriggerTypeClass::HasZoneEntryByEvent() const
{
    return false;
}

bool TriggerTypeClass::RemoveAction(TActionClass* action)
{
    // TODO: unlink and delete action
    (void)action;
    return false;
}

bool TriggerTypeClass::RemoveEvent(TEventClass* event)
{
    // TODO: unlink and delete event
    (void)event;
    return false;
}

} // namespace gamemd
