#include "team/trigger.hpp"
#include "team/tevent.hpp"
#include "team/taction.hpp"
#include "house/house.hpp"

#include <cstring>

namespace gamemd
{

// --- TriggerClass ---

TriggerClass* TriggerClass::GetInstance(TriggerTypeClass* type)
{
    if (!type)
        return nullptr;
    return nullptr; // Requires global trigger pool — external linkage
}

bool TriggerClass::HasCrossesHorizontalLineEvent() const
{
    // Recurse through trigger chain: check if any trigger's type
    // has horizontal-line-crossing events configured.
    // Also check the house's building type for Type25 buildings.
    // Check buildingType for horizontal-line triggers
    if (!nextTrigger)
        return buildingType && buildingType->HasCrossesHorizontalLineEvent();
    return (buildingType && buildingType->HasCrossesHorizontalLineEvent())
           || nextTrigger->HasCrossesHorizontalLineEvent();
}

bool TriggerClass::HasCrossesVerticalLineEvent() const
{
    if (!nextTrigger)
        return buildingType && buildingType->HasCrossesVerticalLineEvent();
    if (!nextTrigger)
        return buildingType && buildingType->HasCrossesVerticalLineEvent();
    return (buildingType && buildingType->HasCrossesVerticalLineEvent())
           || nextTrigger->HasCrossesVerticalLineEvent();
}

bool TriggerClass::HasZoneEntryByEvent() const
{
    if (!buildingType)
        return false;
    if (!nextTrigger)
        return buildingType->HasZoneEntryByEvent();
    return buildingType->HasZoneEntryByEvent()
           || nextTrigger->HasZoneEntryByEvent();
}

bool TriggerClass::HasAllowWinAction() const
{
    if (!buildingType)
        return false;
    if (!nextTrigger)
        return buildingType->HasAllowWinAction();
    return buildingType->HasAllowWinAction()
           || nextTrigger->HasAllowWinAction();
}

bool TriggerClass::HasGlobalSetOrClearedEvent(int idx_global) const
{
    if (!buildingType)
        return false;
    bool r = buildingType->HasGlobalSetOrClearedEvent(idx_global);
    if (nextTrigger)
        r = r || nextTrigger->HasGlobalSetOrClearedEvent(idx_global);
    return r;
}

void TriggerClass::NotifyGlobalChanged(int idx_global)
{
    // Walk the trigger chain. For each trigger whose type has
    // a matching global event, reset its timers and re-enable.
    for (TriggerClass* i = this; i; i = i->nextTrigger)
    {
        if (i->buildingType
            && i->buildingType->HasGlobalSetOrClearedEvent(idx_global))
        {
            i->ResetTimers();
            i->enabled = true;
        }
    }
}

void TriggerClass::NotifyLocalChanged(int idx_local)
{
    for (TriggerClass* i = this; i; i = i->nextTrigger)
    {
        if (i->buildingType
            && i->buildingType->HasLocalSetOrClearedEvent(idx_local))
        {
            i->ResetTimers();
            i->enabled = true;
        }
    }
}

void TriggerClass::ResetTimers()
{
    std::memset(&timer, 0, sizeof(timer));
}

void TriggerClass::Destroy()
{
    destroyed = true;
}

bool TriggerClass::RegisterEvent(int event, ObjectClass* object,
                                  bool force_fire, bool persistent,
                                  TechnoClass* source)
{
    (void)source;
    if (destroyed || !enabled)
        return false;

    bool all_fired = true;

    if (force_fire)
        return all_fired;

    if (buildingType)
    {
        TEventClass* evt = buildingType->firstEvent;
        int evt_idx = 0;

        while (evt)
        {
            if (!HasEventOccured(evt_idx))
            {
                int result_buf = 0;
                int house_idx = house ? house->arrayIndex : -1;

                bool fired = evt->Execute(
                    event, house_idx, object,
                    evt->eventType, &result_buf,
                    persistent ? 1 : 0
                );

                if (fired)
                {
                    if (persistent
                        && evt->GetStateA()
                        && evt->GetStateB_SpyEvent())
                    {
                        MarkEventAsOccured(evt_idx);
                    }
                }
                else
                {
                    all_fired = false;
                }
            }

            evt = reinterpret_cast<TEventClass*>(
                static_cast<uintptr_t>(evt->TEventClass_field_28));
            ++evt_idx;
        }
    }

    if (all_fired && persistent)
    {
        ResetTimers();
        enabled = true;
    }

    return all_fired;
}

bool TriggerClass::FireActions(ObjectClass* obj, CellStruct location)
{
    if (!buildingType)
        return false;

    TActionClass* action = buildingType->firstAction;
    bool any = false;

    while (action)
    {
        action->ExecuteAction(
            action->idxArray, obj, nullptr,
            house, location.X, location.Y
        );
        any = true;

        action = static_cast<TActionClass*>(action->TActionClass_field_28);
    }

    return any;
}

// --- TriggerTypeClass ---

void TriggerTypeClass::LoadFromINIList(CCINIClass* ini)
{
    (void)ini;
}

void TriggerTypeClass::SaveToINIList(CCINIClass* ini)
{
    (void)ini;
}

TriggerTypeClass::Flags TriggerTypeClass::GetFlags() const
{
    uint32_t flags = 0;

    for (TActionClass* act = firstAction; act;
         act = static_cast<TActionClass*>(act->TActionClass_field_28))
    {
        flags |= static_cast<uint32_t>(act->idxArray);
    }

    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        flags |= static_cast<uint32_t>(evt->eventType);
    }

    if (nextTrigger)
        flags |= static_cast<uint32_t>(nextTrigger->GetFlags());

    return static_cast<Flags>(flags);
}

bool TriggerTypeClass::HasAllowWinAction() const
{
    for (TActionClass* act = firstAction; act;
         act = static_cast<TActionClass*>(act->TActionClass_field_28))
    {
        if (act->idxArray & 0x80)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasAllowWinAction();
    return false;
}

bool TriggerTypeClass::HasGlobalSetOrClearedEvent(int idx_global) const
{
    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        if ((evt->eventType == 36 || evt->eventType == 37)
            && evt->TEventClass_field_34 == idx_global)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasGlobalSetOrClearedEvent(idx_global);
    return false;
}

bool TriggerTypeClass::HasLocalSetOrClearedEvent(int idx_local) const
{
    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        if ((evt->eventType == 36 || evt->eventType == 37)
            && evt->TEventClass_field_34 == idx_local)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasLocalSetOrClearedEvent(idx_local);
    return false;
}

bool TriggerTypeClass::HasCrossesHorizontalLineEvent() const
{
    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        if (evt->eventType == 25)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasCrossesHorizontalLineEvent();
    return false;
}

bool TriggerTypeClass::HasCrossesVerticalLineEvent() const
{
    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        if (evt->eventType == 26)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasCrossesVerticalLineEvent();
    return false;
}

bool TriggerTypeClass::HasZoneEntryByEvent() const
{
    for (TEventClass* evt = firstEvent; evt;
         evt = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(evt->TEventClass_field_28)))
    {
        if (evt->eventType == 4)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasZoneEntryByEvent();
    return false;
}

bool TriggerTypeClass::RemoveAction(TActionClass* action)
{
    if (!action || !firstAction)
        return false;

    TActionClass* prev = nullptr;
    for (TActionClass* cur = firstAction; cur;
         cur = static_cast<TActionClass*>(cur->TActionClass_field_28))
    {
        if (cur == action)
        {
            if (prev)
                prev->TActionClass_field_28 = cur->TActionClass_field_28;
            else
                firstAction = static_cast<TActionClass*>(
                    cur->TActionClass_field_28);
            cur->ddtor();
            return true;
        }
        prev = cur;
    }
    return false;
}

bool TriggerTypeClass::RemoveEvent(TEventClass* event)
{
    if (!event || !firstEvent)
        return false;

    TEventClass* prev = nullptr;
    for (TEventClass* cur = firstEvent; cur;
         cur = reinterpret_cast<TEventClass*>(
             static_cast<uintptr_t>(cur->TEventClass_field_28)))
    {
        if (cur == event)
        {
            auto* nxt = reinterpret_cast<TEventClass*>(
                static_cast<uintptr_t>(cur->TEventClass_field_28));
            if (prev)
                prev->TEventClass_field_28 = static_cast<int32_t>(
                    reinterpret_cast<uintptr_t>(nxt));
            else
                firstEvent = nxt;
            cur->ddtor();
            return true;
        }
        prev = cur;
    }
    return false;
}

} // namespace gamemd

#include "team/trigger.hpp"

namespace gamemd {

// --- TriggerClass ---

HRESULT __stdcall TriggerClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall TriggerClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall TriggerClass::Save(IStream* stream, int clear_dirty) { return 0; }
void TriggerClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall TriggerClass::whatAmI() const { return AbstractType::Trigger; }
int TriggerClass::objectSize() const { return 0; }
void TriggerClass::calculateChecksum(void* checksum) const {}
void TriggerClass::MarkEventAsOccured(int idx) { occuredEvents |= (1u << idx); }
void TriggerClass::MarkEventAsNotOccured(int idx) { occuredEvents &= ~(1u << idx); }
bool TriggerClass::HasEventOccured(int idx) const { return (occuredEvents & (1u << idx)) != 0u; }
bool TriggerClass::HasBeenDestroyed() const { return destroyed; }
void TriggerClass::SetHouse(HouseClass* house) { house = house; }
HouseClass* TriggerClass::GetHouse() const { return house; }
void TriggerClass::Enable() { enabled = true; ResetTimers(); }
void TriggerClass::Disable() { enabled = false; }

// --- TriggerTypeClass ---

HRESULT __stdcall TriggerTypeClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall TriggerTypeClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall TriggerTypeClass::Save(IStream* stream, int clear_dirty) { return 0; }
void TriggerTypeClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall TriggerTypeClass::whatAmI() const { return AbstractType::TriggerType; }
int TriggerTypeClass::objectSize() const { return 0; }
void TriggerTypeClass::calculateChecksum(void* checksum) const {}

} // namespace gamemd
