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
    static void NotifyGlobalChanged(int idx_global);  // 0x7263A0
    static void NotifyLocalChanged(int idx_local);  // 0x7263D0

    bool HasCrossesHorizontalLineEvent() const;  // 0x6E5320
    bool HasCrossesVerticalLineEvent() const;  // 0x6E5300
    bool HasZoneEntryByEvent() const;  // 0x6E5340
    // wrapper: delegates to TagClass::HasZoneEntryByEvent at 0x6E5340
    bool HasAllowWinAction() const;
    void GlobalChanged(int idx_global);  // 0x7263A0
    void LocalChanged(int idx_local);  // 0x7263D0
    bool IsOnlyInstanceOfType() const;  // 0x6E5850

    // unmatched: no callgraph reference and no git history record
    bool RaiseEvent(int event, ObjectClass* tag_owner, CellStruct location, bool force_all = false, TechnoClass* source = nullptr);

    // unmatched: no callgraph reference and no git history record
    bool ShouldReplace() const;
    void Destroy();  // 0x6E5230
    // unmatched: no callgraph reference and no git history record
    bool HasBeenDestroyed() const;
    void AddTrigger(TriggerClass* trigger);  // 0x6E55C0
    bool RemoveTrigger(TriggerClass* trigger);  // 0x577920
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

    Flags GetFlags() const;  // 0x7271E0
    // wrapper: delegates to TriggerTypeClass::GetFlags at 0x7271E0
    bool HasAllowWinAction() const;
    bool HasCrossesHorizontalLineEvent() const;  // 0x6E6250
    bool HasCrossesVerticalLineEvent() const;  // 0x6E6280
    bool HasZoneEntryByEvent() const;  // 0x6E62B0
    bool AddTrigger(class TriggerTypeClass* trigger);  // 0x6E55C0
    bool RemoveTrigger(class TriggerTypeClass* trigger);   // 0x577920
    // wrapper: delegates to MapClass::RemoveTriggerRef at 0x577920
    bool ContainsTrigger(class TriggerTypeClass* trigger) const;

    static void LoadFromINIList(CCINIClass* ini);  // 0x46CE10
    // unmatched: no callgraph reference and no git history record
    static void SaveToINIList(CCINIClass* ini);

    int32_t             arrayIndex;
    int32_t             persistence;
    class TriggerTypeClass* firstTrigger;

protected:
    TagTypeClass() = default;
};

} // namespace gamemd

