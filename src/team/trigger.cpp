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
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = *(&this->vtable20); /*0x726253*/
  v3 = (_DWORD *)this->buildingType; /*0x726256*/
  if ( !v2 ) /*0x72625b*/
    return HouseClass::HasType25Building(v3); /*0x72627d*/
  return HouseClass::HasType25Building(v3) || (unsigned __int8)TriggerClass::HasCrossesHorizontalLineEvent(*(&this->vtable20)); /*0x726274*/
}
// 0x726290
bool TriggerClass::HasCrossesVerticalLineEvent() const
{
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = *(&this->vtable20); /*0x726293*/
  v3 = (_DWORD *)this->buildingType; /*0x726296*/
  if ( !v2 ) /*0x72629b*/
    return HouseClass::HasType26Building(v3); /*0x7262bd*/
  return HouseClass::HasType26Building(v3) || (unsigned __int8)TriggerClass::HasCrossesVerticalLineEvent(*(&this->vtable20)); /*0x7262b4*/
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
  int *i; // esi

  for ( i = this; i; i = (int *)i[10] ) /*0x7263a5*/
  {
    if ( HouseClass::FindType2728((_DWORD *)i[9], idx_global) ) /*0x7263b0*/
      BuildingClass::ProcessUpgradeEffects(i); /*0x7263bb*/
  }
}
// 0x7263d0
void TriggerClass::NotifyLocalChanged(int idx_local)
{
  int *i; // esi

  for ( i = this; i; i = (int *)i[10] ) /*0x7263d5*/
  {
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent((_DWORD *)i[9], idx_local) ) /*0x7263e0*/
      BuildingClass::ProcessUpgradeEffects(i); /*0x7263eb*/
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
  _DWORD *v8; // edi
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
          Owner = HouseClass::FindOwner(*(void **)(this->buildingType->House + 180)),
          TEventClass::Execute(v8, a2, Owner, a3, (int *)(&this->abstractFlags2), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        this->house = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA(v8) && TEventClass::GetStateB_SpyEvent(v8) ) /*0x726579*/
        this->occuredEvents |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = (_DWORD *)v8[10]; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
  LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((int *)this); /*0x7265a4*/
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
  int v2; // esi
  int i; // edi
  int v4; // eax
  int j; // esi
  int v6; // eax
  int v7; // ecx

  v2 = *(&this->uniqueId3); /*0x7271e5*/
  for ( i = 0; v2; i |= v4 ) /*0x7271ef*/
  {
    v4 = TriggerTypeClass::GetActionCategoryFlags(*(void **)(v2 + 44)); /*0x7271f4*/
    v2 = *(_DWORD *)(v2 + 40); /*0x7271f9*/
  }
  for ( j = *(&this->uniqueId4); j; i |= v6 ) /*0x72720a*/
  {
    v6 = TriggerTypeClass::Dispatch(*(void **)(j + 44)); /*0x72720f*/
    j = *(_DWORD *)(j + 40); /*0x727214*/
  }
  v7 = *(&this->uniqueId2); /*0x72721d*/
  if ( v7 ) /*0x727225*/
    return i | TriggerTypeClass::GetFlags(v7); /*0x72722c*/
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
  _DWORD *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = (_DWORD *)*(&this->uniqueId3); /*0x727050*/
  result = 0; /*0x727056*/
  if ( v2 ) /*0x72705b*/
  {
    while ( 1 ) /*0x727061*/
    {
      v4 = v2[11]; /*0x727061*/
      if ( (v4 == 36 || v4 == 37) && v2[13] == idx_local ) /*0x727071*/
        break; /*0x727071*/
      v2 = (_DWORD *)v2[10]; /*0x727073*/
      if ( !v2 ) /*0x727078*/
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
}
