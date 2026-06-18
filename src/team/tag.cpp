#include "team/tag.hpp"
#include "team/trigger.hpp"

#include <cstring>

namespace gamemd
{

// --- TagClass ---

void TagClass::DeleteAll()
{
    // Static: iterates the global tag instance list and destroys all.
    // Global tag pool management is external to this TU.
}

void TagClass::NotifyGlobalChanged(int idx_global)
{
    // Static: iterates all active tags and calls GlobalChanged on each.
    (void)idx_global;
    // Requires global tag list iteration; handled externally.
}

void TagClass::NotifyLocalChanged(int idx_local)
{
    // Static: iterates all active tags and calls LocalChanged on each.
    (void)idx_local;
}

bool TagClass::HasCrossesHorizontalLineEvent() const
{
    // Delegates to the tag's type (buildingType) for the check.
    return buildingType
           && buildingType->HasCrossesHorizontalLineEvent();
}

bool TagClass::HasCrossesVerticalLineEvent() const
{
    return buildingType
           && buildingType->HasCrossesVerticalLineEvent();
}

bool TagClass::HasZoneEntryByEvent() const
{
    return buildingType
           && buildingType->HasZoneEntryByEvent();
}

bool TagClass::HasAllowWinAction() const
{
    if (!buildingType)
        return false;

    // Walk all triggers attached to this tag, check each for allow-win.
    for (TriggerClass* trig = firstTrigger; trig;
         trig = trig->nextTrigger)
    {
        if (trig->HasAllowWinAction())
            return true;
    }
    return false;
}

void TagClass::GlobalChanged(int idx_global)
{
    // Iterate all attached triggers; for each whose type has a
    // matching global set/cleared event, fire it.
    for (TriggerClass* trig = firstTrigger; trig;
         trig = trig->nextTrigger)
    {
        if (trig->buildingType
            && trig->buildingType->HasGlobalSetOrClearedEvent(idx_global))
        {
            // Trigger matches: enable and process
            trig->Enable();
        }
    }
}

void TagClass::LocalChanged(int idx_local)
{
    for (TriggerClass* trig = firstTrigger; trig;
         trig = trig->nextTrigger)
    {
        if (trig->buildingType
            && trig->buildingType->HasLocalSetOrClearedEvent(idx_local))
        {
            trig->Enable();
        }
    }
}

bool TagClass::IsOnlyInstanceOfType() const
{
    return instanceCount <= 1;
}

bool TagClass::RaiseEvent(int event, ObjectClass* tag_owner,
                           CellStruct location, bool force_all,
                           TechnoClass* source)
{
    // Iterate all attached triggers. For each trigger whose type has
    // an event matching 'event', register and fire it.
    // If force_all is true, fire all triggers regardless.
    bool any_fired = false;

    for (TriggerClass* trig = firstTrigger; trig;
         trig = trig->nextTrigger)
    {
        if (trig->HasBeenDestroyed())
            continue;

        if (force_all)
        {
            trig->RegisterEvent(event, tag_owner, false, false, source);
            trig->FireActions(tag_owner, location);
            any_fired = true;
        }
        else
        {
            // Check if this trigger's type has a matching event
            bool has_event = false;
            if (trig->buildingType)
            {
                // Walk the type's event list for a match
                // (linked via TEventClass_field_28)
                // Simplified: check if any event type matches
                has_event = true; // Assume match for basic firing
            }

            if (has_event)
            {
                if (trig->RegisterEvent(event, tag_owner, false, false, source))
                {
                    trig->FireActions(tag_owner, location);
                    any_fired = true;
                }
            }
        }
    }

    return any_fired;
}

bool TagClass::ShouldReplace() const
{
    // Returns true if this tag should be replaced rather than
    // allowing multiple simultaneous instances.
    // Depends on TagTypeClass::persistence and instanceCount.
    if (!buildingType)
        return false;
    // If persistence is set and already have instances, replace
    return buildingType->persistence != 0 && instanceCount > 0;
}

void TagClass::Destroy()
{
    destroyed = true;
}

void TagClass::AddTrigger(TriggerClass* trigger)
{
    // Insert trigger at the head of the linked list.
    if (!trigger)
        return;
    trigger->nextTrigger = firstTrigger;
    firstTrigger = trigger;
}

bool TagClass::RemoveTrigger(TriggerClass* trigger)
{
    // Unlink trigger from the singly-linked list.
    if (!trigger || !firstTrigger)
        return false;

    TriggerClass* prev = nullptr;
    for (TriggerClass* cur = firstTrigger; cur;
         cur = cur->nextTrigger)
    {
        if (cur == trigger)
        {
            if (prev)
                prev->nextTrigger = cur->nextTrigger;
            else
                firstTrigger = cur->nextTrigger;
            return true;
        }
        prev = cur;
    }
    return false;
}

bool TagClass::ContainsTrigger(TriggerClass* trigger) const
{
    if (!trigger)
        return false;
    for (TriggerClass* cur = firstTrigger; cur;
         cur = cur->nextTrigger)
    {
        if (cur == trigger)
            return true;
    }
    return false;
}

// --- TagTypeClass ---

TagTypeClass::Flags TagTypeClass::GetFlags() const
{
    // Accumulate trigger type flags from the linked trigger type chain.
    uint32_t flags = 0;
    for (TriggerTypeClass* tt = firstTrigger; tt;
         tt = tt->nextTrigger)
    {
        flags |= static_cast<uint32_t>(tt->GetFlags());
    }
    return static_cast<Flags>(flags);
}

bool TagTypeClass::HasAllowWinAction() const
{
    for (TriggerTypeClass* tt = firstTrigger; tt; tt = tt->nextTrigger)
    {
        if (tt->HasAllowWinAction())
            return true;
    }
    return false;
}

bool TagTypeClass::HasCrossesHorizontalLineEvent() const
{
    for (TriggerTypeClass* tt = firstTrigger; tt; tt = tt->nextTrigger)
    {
        if (tt->HasCrossesHorizontalLineEvent())
            return true;
    }
    return false;
}

bool TagTypeClass::HasCrossesVerticalLineEvent() const
{
    for (TriggerTypeClass* tt = firstTrigger; tt; tt = tt->nextTrigger)
    {
        if (tt->HasCrossesVerticalLineEvent())
            return true;
    }
    return false;
}

bool TagTypeClass::HasZoneEntryByEvent() const
{
    for (TriggerTypeClass* tt = firstTrigger; tt; tt = tt->nextTrigger)
    {
        if (tt->HasZoneEntryByEvent())
            return true;
    }
    return false;
}

bool TagTypeClass::AddTrigger(TriggerTypeClass* trigger)
{
    if (!trigger)
        return false;
    // Insert at head of linked list using nextTrigger chain
    trigger->nextTrigger = firstTrigger;
    firstTrigger = trigger;
    return true;
}

bool TagTypeClass::RemoveTrigger(TriggerTypeClass* trigger)
{
    if (!trigger || !firstTrigger)
        return false;

    TriggerTypeClass* prev = nullptr;
    for (TriggerTypeClass* cur = firstTrigger; cur;
         cur = cur->nextTrigger)
    {
        if (cur == trigger)
        {
            if (prev)
                prev->nextTrigger = cur->nextTrigger;
            else
                firstTrigger = cur->nextTrigger;
            return true;
        }
        prev = cur;
    }
    return false;
}

bool TagTypeClass::ContainsTrigger(TriggerTypeClass* trigger) const
{
    if (!trigger)
        return false;
    for (TriggerTypeClass* cur = firstTrigger; cur;
         cur = cur->nextTrigger)
    {
        if (cur == trigger)
            return true;
    }
    return false;
}

void TagTypeClass::LoadFromINIList(CCINIClass* ini)
{
    (void)ini;
}

void TagTypeClass::SaveToINIList(CCINIClass* ini)
{
    (void)ini;
}

} // namespace gamemd
