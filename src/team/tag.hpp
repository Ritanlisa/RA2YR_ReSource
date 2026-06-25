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
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif






class TagTypeClass;
class TriggerClass;
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif

class TagClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Tag;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x6E5730
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x6E57A0

    virtual ~TagClass() = default;  // 0x6E56A0

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to TagClass::ddtor at 0x6E56A0
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // design: static function, no direct binary match in IDA
    static void DeleteAll();
    static void NotifyGlobalChanged(int idx_global);
    static void NotifyLocalChanged(int idx_local);

    bool HasCrossesHorizontalLineEvent() const;  // 0x6E5320
    bool HasCrossesVerticalLineEvent() const;  // 0x6E5300
    bool HasZoneEntryByEvent() const;  // 0x6E5340
    // wrapper: delegates to TagClass::HasZoneEntryByEvent at 0x6E5340
    bool HasAllowWinAction() const;
    void GlobalChanged(int idx_global);
    void LocalChanged(int idx_local);
    bool IsOnlyInstanceOfType() const;  // 0x6E5850

    // unmatched: no callgraph reference and no git history record
    bool RaiseEvent(int event, ObjectClass* tag_owner, CellStruct location, bool force_all = false, TechnoClass* source = nullptr);

    // unmatched: no callgraph reference and no git history record
    bool ShouldReplace() const;
    void Destroy();  // 0x6E5230
    // unmatched: no callgraph reference and no git history record
    bool HasBeenDestroyed() const;
    void AddTrigger(TriggerClass* trigger);  // 0x6E55C0
    bool RemoveTrigger(TriggerClass* trigger);
    // wrapper: delegates to MapClass::RemoveTriggerRef at 0x577920
    bool ContainsTrigger(TriggerClass* trigger) const;

    TagTypeClass*   buildingType;
    TriggerClass*   firstTrigger;
    int32_t         instanceCount;
    CellStruct      defaultCoords;
    bool            destroyed;
    bool            isExecuting;
    uint8_t         align36[2];

protected:
    TagClass() = default; // 0x6E4F60
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int CheckEvent(int a1, int a2);  // 0x6e5610 -- TagClass::CheckEvent
    int ProcessTag(int a1);  // 0x6e56e0 -- TagClass::ProcessTag
    void* ProcessTrigger(int a1);  // 0x6e58b0 -- TagClass::ProcessTrigger
    int HasValidHouse();  // 0x6e6220 -- TagClass::HasValidHouse
    int Unlink();  // 0x71ade0 -- TagClass::Unlink
    // === SYMBOL-ANCHOR (END) ===
};

// --- TagTypeClass ---

class CCINIClass;

class TagTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::TagType;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x6E6470

    virtual ~TagTypeClass() = default;  // 0x6E64C0

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;  // 0x6E64A0
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;
    // arrayIndex() override inherited, conflicts with member

    using Flags = uint8_t;

    Flags GetFlags() const;
    // wrapper: delegates to TriggerTypeClass::GetFlags at 0x7271E0
    bool HasAllowWinAction() const;
    bool HasCrossesHorizontalLineEvent() const;  // 0x6E6250
    bool HasCrossesVerticalLineEvent() const;  // 0x6E6280
    bool HasZoneEntryByEvent() const;  // 0x6E62B0
    bool AddTrigger(class TriggerTypeClass* trigger);  // 0x6E55C0
    bool RemoveTrigger(class TriggerTypeClass* trigger);
    // wrapper: delegates to MapClass::RemoveTriggerRef at 0x577920
    bool ContainsTrigger(class TriggerTypeClass* trigger) const;

    static void LoadFromINIList(CCINIClass* ini);
    // unmatched: no callgraph reference and no git history record
    static void SaveToINIList(CCINIClass* ini);

    int32_t             arrayIndex;
    int32_t             persistence;
    class TriggerTypeClass* firstTrigger;

protected:
    TagTypeClass() = default;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int CleanupMembers();  // 0x6e5ca0 -- TagTypeClass::CleanupMembers
    int GetEvent(int a1, int a2);  // 0x6e5e50 -- TagTypeClass::GetEvent
    int GetAction(int a1);  // 0x6e6080 -- TagTypeClass::GetAction
    int GetParameter(int a1);  // 0x6e6160 -- TagTypeClass::GetParameter
    void* FindOrCreate();  // 0x6e6310 -- TagTypeClass::FindOrCreate
    int PowerDrainUpdate(int a1);  // 0x6e63e0 -- TagTypeClass::PowerDrainUpdate
    int GetAuxField();  // 0x6e64b0 -- TagTypeClass::GetAuxField
    void* FindOrCreateTriggerType();  // 0x727aa0 -- TagTypeClass::FindOrCreateTriggerType
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int GetClassIdentifier(int a1, int a2);  // 0x6e63a0
    int LoadTypeData(int a1, int a2);  // 0x6e6410
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd

