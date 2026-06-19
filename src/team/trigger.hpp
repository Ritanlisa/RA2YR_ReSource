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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x726860
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x7268D0

    virtual ~TriggerClass() = default;  // 0x726820

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND
    virtual void calculateChecksum(void* checksum) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static TriggerClass* GetInstance(TriggerTypeClass* type); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool HasCrossesHorizontalLineEvent() const;  // 0x726250
    bool HasCrossesVerticalLineEvent() const;  // 0x726290
    bool HasZoneEntryByEvent() const; // IDA: NOT_FOUND
    bool HasAllowWinAction() const; // IDA: NOT_FOUND
    bool HasGlobalSetOrClearedEvent(int idx_global) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void NotifyGlobalChanged(int idx_global);  // 0x7263A0
    void NotifyLocalChanged(int idx_local);  // 0x7263D0
    void ResetTimers(); // IDA: NOT_FOUND

    void MarkEventAsOccured(int idx); // IDA: NOT_FOUND
    void MarkEventAsNotOccured(int idx); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool HasEventOccured(int idx) const; // IDA: NOT_FOUND

    void Destroy(); // IDA: NOT_FOUND
    bool HasBeenDestroyed() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void SetHouse(HouseClass* house);  // 0x5D8CB0
    HouseClass* GetHouse() const; // IDA: NOT_FOUND

    void Enable();  // 0x7241A0
    void Disable(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool RegisterEvent(int event, ObjectClass* object, bool force_fire, bool persistent, TechnoClass* source);  // 0x7264C0
    bool FireActions(ObjectClass* obj, CellStruct location); // IDA: NOT_FOUND

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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override; // IDA: NOT_FOUND

    virtual ~TriggerTypeClass() = default; // IDA: NOT_FOUND

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND
    virtual void calculateChecksum(void* checksum) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    // arrayIndex() override inherited, conflicts with member

    static void LoadFromINIList(CCINIClass* ini);  // 0x46CE10
    static void SaveToINIList(CCINIClass* ini); // IDA: NOT_FOUND

    using Flags = uint8_t;
    Flags GetFlags() const;  // 0x7271E0
    bool HasAllowWinAction() const; // IDA: NOT_FOUND
    bool HasGlobalSetOrClearedEvent(int idx_global) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool HasLocalSetOrClearedEvent(int idx_local) const;  // 0x727050
    bool HasCrossesHorizontalLineEvent() const; // IDA: NOT_FOUND
    bool HasCrossesVerticalLineEvent() const; // IDA: NOT_FOUND
    bool HasZoneEntryByEvent() const; // IDA: NOT_FOUND

    bool RemoveAction(TActionClass* action); // IDA: NOT_FOUND
    bool RemoveEvent(TEventClass* event); // IDA: NOT_FOUND

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

