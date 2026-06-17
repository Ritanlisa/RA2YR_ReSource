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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TagClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::Tag; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}

    static void DeleteAll();
    static void NotifyGlobalChanged(int idx_global);
    static void NotifyLocalChanged(int idx_local);

    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;
    bool HasAllowWinAction() const;
    void GlobalChanged(int idx_global);
    void LocalChanged(int idx_local);
    bool IsOnlyInstanceOfType() const;

    bool RaiseEvent(int event, ObjectClass* tag_owner, CellStruct location, bool force_all = false, TechnoClass* source = nullptr);

    bool ShouldReplace() const;
    void Destroy();
    bool HasBeenDestroyed() const { return destroyed; }
    void AddTrigger(TriggerClass* trigger);
    bool RemoveTrigger(TriggerClass* trigger);
    bool ContainsTrigger(TriggerClass* trigger) const;

    TagTypeClass*   buildingType;
    TriggerClass*   firstTrigger;
    int32_t         instanceCount;
    CellStruct      defaultCoords;
    bool            destroyed;
    bool            isExecuting;
    uint8_t         align36[2];

protected:
    TagClass() = default;
};

// --- TagTypeClass ---

class CCINIClass;

class TagTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::TagType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TagTypeClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::TagType; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}
    // arrayIndex() override inherited, conflicts with member

    using Flags = uint8_t;

    Flags GetFlags() const;
    bool HasAllowWinAction() const;
    bool HasCrossesHorizontalLineEvent() const;
    bool HasCrossesVerticalLineEvent() const;
    bool HasZoneEntryByEvent() const;
    bool AddTrigger(class TriggerTypeClass* trigger);
    bool RemoveTrigger(class TriggerTypeClass* trigger);
    bool ContainsTrigger(class TriggerTypeClass* trigger) const;

    static void LoadFromINIList(CCINIClass* ini);
    static void SaveToINIList(CCINIClass* ini);

    int32_t             arrayIndex;
    int32_t             persistence;
    class TriggerTypeClass* firstTrigger;

protected:
    TagTypeClass() = default;
};

} // namespace gamemd

