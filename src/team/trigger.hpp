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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x726860
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x7268D0

    virtual ~TriggerClass() = default;  // 0x726820

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to TriggerClass::ddtor at 0x726820
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // unmatched: no callgraph reference and no git history record
    static TriggerClass* GetInstance(TriggerTypeClass* type);

    bool HasCrossesHorizontalLineEvent() const;  // 0x726250
    bool HasCrossesVerticalLineEvent() const;  // 0x726290
    // wrapper: delegates to TriggerClass::HasCrossesVerticalLineEvent at 0x726290
    bool HasZoneEntryByEvent() const;
    // wrapper: delegates to TriggerClass::HasCrossesVerticalLineEvent at 0x726290
    bool HasAllowWinAction() const;
    // unmatched: no callgraph reference and no git history record
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    void NotifyGlobalChanged(int idx_global);  // 0x7263A0
    void NotifyLocalChanged(int idx_local);  // 0x7263D0
    // wrapper: delegates to TriggerClass::NotifyLocalChanged at 0x7263D0
    void ResetTimers();

    // wrapper: delegates to TriggerClass::NotifyLocalChanged at 0x7263D0
    void MarkEventAsOccured(int idx);
    // unmatched: no callgraph reference and no git history record
    void MarkEventAsNotOccured(int idx);
    // wrapper: delegates to TriggerClass::NotifyLocalChanged at 0x7263D0
    bool HasEventOccured(int idx) const;

    // design: no binary equivalent found in IDA
    void Destroy();
    // unmatched: no callgraph reference and no git history record
    bool HasBeenDestroyed() const;

    void SetHouse(HouseClass* house);  // 0x5D8CB0
    // wrapper: delegates to PlayerClass::SetHouse at 0x5D8CB0
    HouseClass* GetHouse() const;

    void Enable();  // 0x7241A0 // IDA: Tooltip::Enable
    // unmatched: no callgraph reference and no git history record
    void Disable();

    bool RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source);  // 0x7264C0
    // wrapper: delegates to TriggerClass::RegisterEvent at 0x7264C0
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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TriggerTypeClass() = default;

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;
    // arrayIndex() override inherited, conflicts with member

    static void LoadFromINIList(CCINIClass* ini);  // 0x46CE10
    // wrapper: delegates to CampaignClass::LoadFromINIList at 0x46CE10
    static void SaveToINIList(CCINIClass* ini);

    using Flags = uint8_t;
    Flags GetFlags() const;  // 0x7271E0
    // wrapper: delegates to TriggerTypeClass::GetFlags at 0x7271E0
    bool HasAllowWinAction() const;
    // unmatched: no callgraph reference and no git history record
    bool HasGlobalSetOrClearedEvent(int idx_global) const;
    bool HasLocalSetOrClearedEvent(int idx_local) const;  // 0x727050
    // wrapper: delegates to TriggerTypeClass::HasLocalSetOrClearedEvent at 0x727050
    bool HasCrossesHorizontalLineEvent() const;
    // wrapper: delegates to TriggerTypeClass::HasLocalSetOrClearedEvent at 0x727050
    bool HasCrossesVerticalLineEvent() const;
    // wrapper: delegates to TriggerTypeClass::HasLocalSetOrClearedEvent at 0x727050
    bool HasZoneEntryByEvent() const;

    // wrapper: delegates to TriggerTypeClass::HasLocalSetOrClearedEvent at 0x727050
    bool RemoveAction(TActionClass* action);
    // design: no binary equivalent found in IDA
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

