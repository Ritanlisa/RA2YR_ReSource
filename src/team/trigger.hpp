#pragma once

#include "object/abstract.hpp"

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







class TriggerTypeClass;
class HouseClass;
class HouseTypeClass;
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
class CCINIClass;

class TriggerClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Trigger;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TriggerClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::Trigger; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}

    static TriggerClass* GetInstance(TriggerTypeClass* type);

    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;
    bool HasAllowWinAction() const;
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    void NotifyGlobalChanged(int idx_global);
    void NotifyLocalChanged(int idx_local);
    void ResetTimers();

    void MarkEventAsOccured(int idx) { occuredEvents |= (1u << idx); }
    void MarkEventAsNotOccured(int idx) { occuredEvents &= ~(1u << idx); }
    bool HasEventOccured(int idx) const { return (occuredEvents & (1u << idx)) != 0u; }

    void Destroy();
    bool HasBeenDestroyed() const { return destroyed; }

    void SetHouse(HouseClass* house) { house = house; }
    HouseClass* GetHouse() const { return house; }

    void Enable() { enabled = true; ResetTimers(); }
    void Disable() { enabled = false; }

    bool RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source);
    bool FireActions(ObjectClass* obj, CellStruct location);

    TriggerTypeClass*   buildingType;
    TriggerClass*       nextTrigger;
    HouseClass*         house;
    bool                destroyed;
    uint8_t             align31[3];
    TimerStruct         timer;
    uint32_t            occuredEvents;
    bool                enabled;
    uint8_t             align45[3];

protected:
    TriggerClass() = default;
};

// --- TriggerTypeClass ---

class TriggerTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::TriggerType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TriggerTypeClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::TriggerType; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}
    virtual int arrayIndex() const override { return 0; }

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

    int32_t             arrayIndex;
    bool                difficulty[3];
    bool                enabled;
    bool                mustTransfer;
    uint8_t             m_align_A1[3];
    HouseTypeClass*     house;
    TriggerTypeClass*   nextTrigger;
    TEventClass*        firstEvent;
    TActionClass*       firstAction;

protected:
    TriggerTypeClass() = default;
};

} // namespace gamemd

