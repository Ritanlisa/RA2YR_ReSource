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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~TriggerClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;
    virtual void calculateChecksum(void* checksum) const;

    static TriggerClass* GetInstance(TriggerTypeClass* type);

    bool HasCrossesHorizontalLineEvent() const;  // 0x726250
    bool HasCrossesVerticalLineEvent() const;  // 0x726290
    bool HasZoneEntryByEvent() const;
    bool HasAllowWinAction() const;
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    void NotifyGlobalChanged(int idx_global);  // 0x7263a0
    void NotifyLocalChanged(int idx_local);  // 0x7263d0
    void ResetTimers();

    void MarkEventAsOccured(int idx);
    void MarkEventAsNotOccured(int idx);
    bool HasEventOccured(int idx) const;

    void Destroy();
    bool HasBeenDestroyed() const;

    void SetHouse(HouseClass* house);
    HouseClass* GetHouse() const;

    void Enable();
    void Disable();

    bool RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source);  // 0x7264c0
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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~TriggerTypeClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;
    virtual void calculateChecksum(void* checksum) const;
    // arrayIndex() override inherited, conflicts with member

    static void LoadFromINIList(CCINIClass* ini);
    static void SaveToINIList(CCINIClass* ini);

    using Flags = uint8_t;
    Flags GetFlags() const;  // 0x7271e0
    bool HasAllowWinAction() const;
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    bool HasLocalSetOrClearedEvent(int idx_local) const;  // 0x727050
    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;

    bool RemoveAction(TActionClass* action);
    bool RemoveEvent(TEventClass* event);

    int32_t             idxArray;
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

