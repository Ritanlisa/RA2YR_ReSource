#pragma once

#include "..\object\abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif







struct TriggerTypeClass;
struct HouseClass;
struct HouseTypeClass;
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
struct TActionClass;
struct TEventClass;
struct CCINIClass;

class TriggerClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::Trigger;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TriggerClass() = default;

    virtual void PointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Trigger; }
    virtual int Size() const override { return 0; }
    virtual void CalculateChecksum(void* checksum) const {}

    static TriggerClass* GetInstance(TriggerTypeClass* type);

    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;
    bool HasAllowWinAction() const;
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    void NotifyGlobalChanged(int idx_global);
    void NotifyLocalChanged(int idx_local);
    void ResetTimers();

    void MarkEventAsOccured(int idx) { m_occured_events |= (1u << idx); }
    void MarkEventAsNotOccured(int idx) { m_occured_events &= ~(1u << idx); }
    bool HasEventOccured(int idx) const { return (m_occured_events & (1u << idx)) != 0u; }

    void Destroy();
    bool HasBeenDestroyed() const { return m_destroyed; }

    void SetHouse(HouseClass* house) { m_house = house; }
    HouseClass* GetHouse() const { return m_house; }

    void Enable() { m_enabled = true; ResetTimers(); }
    void Disable() { m_enabled = false; }

    bool RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source);
    bool FireActions(ObjectClass* obj, CellStruct location);

    TriggerTypeClass*   m_type;
    TriggerClass*       m_next_trigger;
    HouseClass*         m_house;
    bool                m_destroyed;
    uint8_t             m_align_31[3];
    TimerStruct         m_timer;
    uint32_t            m_occured_events;
    bool                m_enabled;
    uint8_t             m_align_45[3];

protected:
    TriggerClass() = default;
};

// --- TriggerTypeClass ---

class TriggerTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::TriggerType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TriggerTypeClass() = default;

    virtual void PointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::TriggerType; }
    virtual int Size() const override { return 0; }
    virtual void CalculateChecksum(void* checksum) const {}
    virtual int GetArrayIndex() const override { return 0; }

    static void LoadFromINIList(CCINIClass* ini);
    static void SaveToINIList(CCINIClass* ini);

    using Flags = uint8_t;
    Flags GetFlags() const;
    bool HasAllowWinAction() const;
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    bool HasLocalSetOrClearedEvent(int idx_local) const;
    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;

    bool RemoveAction(TActionClass* action);
    bool RemoveEvent(TEventClass* event);

    int32_t             m_array_index;
    bool                m_difficulty[3];
    bool                m_enabled;
    bool                m_must_transfer;
    uint8_t             m_align_A1[3];
    HouseTypeClass*     m_house;
    TriggerTypeClass*   m_next_trigger;
    TEventClass*        m_first_event;
    TActionClass*       m_first_action;

protected:
    TriggerTypeClass() = default;
};

} // namespace gamemd

