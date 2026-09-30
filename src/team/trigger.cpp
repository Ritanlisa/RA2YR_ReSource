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

// 0x726250
bool TriggerClass::HasCrossesHorizontalLineEvent() const
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726253*/
  buildingType = (HouseClass *)this->buildingType; /*0x726256*/
  if ( !nextTrigger ) /*0x72625b*/
// 0x726f80
    return HouseClass::HasType25Building(buildingType); /*0x72627d*/
  return (uint8_t)HouseClass::HasType25Building(buildingType) /*0x726274*/
      || TriggerClass::HasCrossesHorizontalLineEvent(this->nextTrigger);
}
// 0x726290
bool TriggerClass::HasCrossesVerticalLineEvent() const
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726293*/
  buildingType = (HouseClass *)this->buildingType; /*0x726296*/
  if ( !nextTrigger ) /*0x72629b*/
// 0x726f50
    return HouseClass::HasType26Building(buildingType); /*0x7262bd*/
  return (uint8_t)HouseClass::HasType26Building(buildingType) /*0x7262b4*/
      || TriggerClass::HasCrossesVerticalLineEvent(this->nextTrigger);
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

// 0x7263a0
void TriggerClass::NotifyGlobalChanged(int idx_global)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263a5*/
  {
    if ( HouseClass::FindType2728((HouseClass *)i->buildingType, idx_global) ) /*0x7263b0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263bb*/
  }
}
// 0x7263d0
void TriggerClass::NotifyLocalChanged(int idx_local)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263d5*/
  {
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent(i->buildingType, idx_local) ) /*0x7263e0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263eb*/
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

// 0x7264c0
bool TriggerClass::RegisterEvent(int event, ObjectClass* object,
{
  char v7; // bl
  TriggerClass *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !this->enabled || this->destroyed ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = this->buildingType->FirstEvent; /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (this->occuredEvents & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = HouseClass::FindOwner(*(HouseClass **)(this->buildingType->House + 180)),
          TEventClass::Execute((TEventClass *)v8, a2, Owner, a3, (int *)(&this->abstractFlags2), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        this->house = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA((TEventClass *)v8) && TEventClass::GetStateB_SpyEvent((TEventClass *)v8) ) /*0x726579*/
        this->occuredEvents |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = v8->nextTrigger; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
  LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)this); /*0x7265a4*/
  }
  return v12; /*0x7265af*/
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

        action = (TActionClass*)(action->TActionClass_field_28);
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

// 0x7271e0
TriggerTypeClass::Flags TriggerTypeClass::GetFlags() const
{
  TEventClass *FirstEvent; // esi
  int i; // edi
  int ActionCategoryFlags; // eax
  TActionClass *j; // esi
  int v6; // eax
  TriggerTypeClass *NextTrigger; // ecx

  FirstEvent = this->FirstEvent; /*0x7271e5*/
  for ( i = 0; FirstEvent; i |= ActionCategoryFlags ) /*0x7271ef*/
  {
    ActionCategoryFlags = TriggerTypeClass::GetActionCategoryFlags((TriggerTypeClass *)FirstEvent->TEventClass_field_2C); /*0x7271f4*/
    FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x7271f9*/
  }
  for ( j = this->FirstAction; j; i |= v6 ) /*0x72720a*/
  {
    v6 = TriggerTypeClass::Dispatch((TriggerTypeClass *)j->TActionClass_field_2C); /*0x72720f*/
    j = (TActionClass *)j->TActionClass_field_28; /*0x727214*/
  }
  NextTrigger = this->NextTrigger; /*0x72721d*/
  if ( NextTrigger ) /*0x727225*/
    return i | TriggerTypeClass::GetFlags(NextTrigger); /*0x72722c*/
  else
    return i; /*0x727232*/
}
bool TriggerTypeClass::HasAllowWinAction() const
{
    for (TActionClass* act = firstAction; act;
         act = (TActionClass*)(act->TActionClass_field_28))
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
         evt = (TEventClass*)((uintptr_t)(evt->TEventClass_field_28)))
    {
        if ((evt->eventType == 36 || evt->eventType == 37)
            && evt->TEventClass_field_34 == idx_global)
            return true;
    }
    if (nextTrigger)
        return nextTrigger->HasGlobalSetOrClearedEvent(idx_global);
    return false;
}

// 0x727050
bool TriggerTypeClass::HasLocalSetOrClearedEvent(int idx_local) const
{
  TEventClass *FirstEvent; // ecx
  bool result; // al
  int TEventClass_field_2C; // edx

  FirstEvent = this->FirstEvent; /*0x727050*/
  result = 0; /*0x727056*/
  if ( FirstEvent ) /*0x72705b*/
  {
    while ( 1 ) /*0x727061*/
    {
      TEventClass_field_2C = FirstEvent->TEventClass_field_2C; /*0x727061*/
      if ( (TEventClass_field_2C == 36 || TEventClass_field_2C == 37) && FirstEvent->TEventClass_field_34 == idx_local ) /*0x727071*/
        break; /*0x727071*/
      FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x727073*/
      if ( !FirstEvent ) /*0x727078*/
        return result; /*0x727078*/
    }
    return 1; /*0x72707e*/
  }
  return result; /*0x72707a*/
}
bool TriggerTypeClass::HasCrossesHorizontalLineEvent() const
{
    for (TEventClass* evt = nxt; evt;
         evt = (TEventClass*)((uintptr_t)(evt->TEventClass_field_28)))
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
    for (TEventClass* evt = nxt; evt;
         evt = (TEventClass*)((uintptr_t)(evt->TEventClass_field_28)))
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
    for (TEventClass* evt = nxt; evt;
         evt = (TEventClass*)((uintptr_t)(evt->TEventClass_field_28)))
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
         cur = (TActionClass*)(cur->TActionClass_field_28))
    {
        if (cur == action)
        {
            if (prev)
                prev->TActionClass_field_28 = cur->TActionClass_field_28;
            else
                firstAction = (TActionClass*)(cur->TActionClass_field_28);
            cur->ddtor();
            return true;
        }
        prev = cur;
    }
    return false;
}

bool TriggerTypeClass::RemoveEvent(TEventClass* event)
{
    if (!event || !nxt)
        return false;

    TEventClass* prev = nullptr;
    for (TEventClass* cur = nxt; cur;
         cur = (TEventClass*)((uintptr_t)(cur->TEventClass_field_28)))
    {
        if (cur == event)
        {
            auto* nxt = (TEventClass*)((uintptr_t)(cur->TEventClass_field_28));
            if (prev)
                prev->TEventClass_field_28 = (int32_t)((uintptr_t)(nxt));
            else
                nxt = nxt;
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
void TriggerTypeClass::calculateChecksum(void* checksum) const {

} // namespace gamemd
