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

// 0x6e5320
bool TagClass::HasCrossesHorizontalLineEvent() const
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)*(this + 9); /*0x6e5320*/
  return v1 && TagTypeClass::HasCrossesHorizontalLineEvent(v1); /*0x6e5335*/
}
// 0x6e5300
bool TagClass::HasCrossesVerticalLineEvent() const
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)*(this + 9); /*0x6e5300*/
  return v1 && TagTypeClass::HasCrossesVerticalLineEvent(v1); /*0x6e5315*/
}
// 0x6e5340
bool TagClass::HasZoneEntryByEvent() const
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)*(this + 9); /*0x6e5340*/
  return v1 && TagTypeClass::HasZoneEntryByEvent(v1); /*0x6e5355*/
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

// 0x6e5850
bool TagClass::IsOnlyInstanceOfType() const
{
  int v1; // edx
  char *i; // esi

  v1 = 0; /*0x6e5859*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e585d*/
    return 1; /*0x6e587d*/
  for ( i = (char *)g_TagClassCount; *(_DWORD **)i == this || *(_DWORD *)(*(_DWORD *)i + 36) != *(this + 9); i += 4 ) /*0x6e585f*/
  {
    if ( ++v1 >= g_GameObjectCleanup ) /*0x6e587b*/
      return 1; /*0x6e587b*/
  }
  return 0; /*0x6e587d*/
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

// 0x6e5230
void TagClass::Destroy()
{
  int result; // eax

  *(this + 52) = 1; /*0x6e5233*/
  result = dword_B0F6A0; /*0x6e5237*/
  if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e5270*/
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
                   &g_DiskLaserManager,
                   dword_B0F6A0 + dword_B0F6AC,
                   0),
        (_BYTE)result) )
  {
    result = g_LaserDrawConfig++; /*0x6e5278*/
    *((_DWORD *)dword_B0F69C + result) = this; /*0x6e5287*/
  }
  return result; /*0x6e528a*/
}
// 0x6e55c0
void TagClass::AddTrigger(TriggerClass* trigger)
{
  *(_DWORD *)(trigger + 40) = *(this + 10); /*0x6e55c7*/
  *(this + 10) = trigger; /*0x6e55ca*/
  return trigger; /*0x6e55cd*/
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
        flags |= (uint32_t)(tt->GetFlags());
    }
    return (Flags)(flags);
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

// 0x6e6250
bool TagTypeClass::HasCrossesHorizontalLineEvent() const
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 40); /*0x6e6251*/
  if ( !v1 ) /*0x6e6259*/
    return 0; /*0x6e6270*/
  while ( !HouseClass::HasType25Building(v1) ) /*0x6e6264*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6266*/
    if ( !v1 ) /*0x6e626e*/
      return 0; /*0x6e626e*/
  }
  return 1; /*0x6e6272*/
}
// 0x6e6280
bool TagTypeClass::HasCrossesVerticalLineEvent() const
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 40); /*0x6e6281*/
  if ( !v1 ) /*0x6e6289*/
    return 0; /*0x6e62a0*/
  while ( !HouseClass::HasType26Building(v1) ) /*0x6e6294*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6296*/
    if ( !v1 ) /*0x6e629e*/
      return 0; /*0x6e629e*/
  }
  return 1; /*0x6e62a2*/
}
// 0x6e62b0
bool TagTypeClass::HasZoneEntryByEvent() const
{
  int v1; // esi

  v1 = *(this + 40); /*0x6e62b1*/
  if ( !v1 ) /*0x6e62b9*/
    return 0; /*0x6e62d0*/
  while ( !HouseClass::FindType24((std::codecvt_base **)v1) ) /*0x6e62c4*/
  {
    v1 = *(_DWORD *)(v1 + 168); /*0x6e62c6*/
    if ( !v1 ) /*0x6e62ce*/
      return 0; /*0x6e62ce*/
  }
  return 1; /*0x6e62d2*/
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

#include "team/tag.hpp"

namespace gamemd {

// --- TagClass ---

HRESULT __stdcall TagClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall TagClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall TagClass::Save(IStream* stream, int clear_dirty) { return 0; }
void TagClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall TagClass::whatAmI() const { return AbstractType::Tag; }
int TagClass::objectSize() const { return 0; }
void TagClass::calculateChecksum(void* checksum) const {}
bool TagClass::HasBeenDestroyed() const { return destroyed; }

// --- TagTypeClass ---

HRESULT __stdcall TagTypeClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall TagTypeClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall TagTypeClass::Save(IStream* stream, int clear_dirty) { return 0; }
void TagTypeClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall TagTypeClass::whatAmI() const { return AbstractType::TagType; }
int TagTypeClass::objectSize() const { return 0; }
void TagTypeClass::calculateChecksum(void* checksum) const {

} // namespace gamemd
