#include "gamemd/team/tag.hpp"
#include "gamemd/team/trigger.hpp"

#include <cstring>

namespace gamemd
{

// --- TagClass ---

void TagClass::DeleteAll()
{
    // TODO: iterate and destroy all TagClass instances
}

void TagClass::NotifyGlobalChanged(int idx_global)
{
    // TODO: iterate all tags and call GlobalChanged
    (void)idx_global;
}

void TagClass::NotifyLocalChanged(int idx_local)
{
    // TODO: iterate all tags and call LocalChanged
    (void)idx_local;
}

bool TagClass::HasCrossesHorizontalLineEvent() const
{
    return false;
}

bool TagClass::HasCrossesVerticalLineEvent() const
{
    return false;
}

bool TagClass::HasZoneEntryByEvent() const
{
    return false;
}

bool TagClass::HasAllowWinAction() const
{
    return false;
}

void TagClass::GlobalChanged(int idx_global)
{
    // TODO: iterate attached triggers, check and fire events
    (void)idx_global;
}

void TagClass::LocalChanged(int idx_local)
{
    // TODO: iterate attached triggers, check and fire events
    (void)idx_local;
}

bool TagClass::IsOnlyInstanceOfType() const
{
    return m_instance_count <= 1;
}

bool TagClass::RaiseEvent(int event, ObjectClass* tag_owner, CellStruct location, bool force_all, TechnoClass* source)
{
    // TODO: iterate triggers, match event, fire actions
    (void)event;
    (void)tag_owner;
    (void)location;
    (void)force_all;
    (void)source;
    return false;
}

bool TagClass::ShouldReplace() const
{
    // TODO: check TagTypeClass persistence vs instance count
    return false;
}

void TagClass::Destroy()
{
    m_destroyed = true;
    // TODO: remove from global tag list
}

void TagClass::AddTrigger(TriggerClass* trigger)
{
    // TODO: insert trigger into linked list
    (void)trigger;
}

bool TagClass::RemoveTrigger(TriggerClass* trigger)
{
    // TODO: unlink trigger from linked list
    (void)trigger;
    return false;
}

bool TagClass::ContainsTrigger(TriggerClass* trigger) const
{
    // TODO: walk linked list searching for trigger
    (void)trigger;
    return false;
}

// --- TagTypeClass ---

TagTypeClass::Flags TagTypeClass::GetFlags() const
{
    return 0;
}

bool TagTypeClass::HasAllowWinAction() const { return false; }
bool TagTypeClass::HasCrossesHorizontalLineEvent() const { return false; }
bool TagTypeClass::HasCrossesVerticalLineEvent() const { return false; }
bool TagTypeClass::HasZoneEntryByEvent() const { return false; }

bool TagTypeClass::AddTrigger(TriggerTypeClass* trigger)
{
    (void)trigger;
    return false;
}

bool TagTypeClass::RemoveTrigger(TriggerTypeClass* trigger)
{
    (void)trigger;
    return false;
}

bool TagTypeClass::ContainsTrigger(TriggerTypeClass* trigger) const
{
    (void)trigger;
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
