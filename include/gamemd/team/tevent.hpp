#pragma once

#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

class ObjectClass;
class TechnoClass;

// sizeof ~0x70 (Execute 0x71E940, ddtor 0x71F880)
struct TEventClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Event;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; } // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; } // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~TEventClass() = default;  // 0x71F880

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override { return 0; } // IDA: NOT_FOUND
    virtual void calculateChecksum(void* checksum) const {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // Methods
    bool Execute(int event_type, int house_idx, ObjectClass* object, int data, int* result, int link_event); // 0x71E940
    void PrepareSaveToINI();                                 // 0x71F390
    bool CheckConditions(int);                               // 0x71F800
    void ProcessEvent();                                     // 0x71F820
    void ddtor() { }                                         // 0x71F880
    void SaveLoad_Prefix(IStream*);                          // 0x71F8C0
    void SaveLoad_Prefix_0(IStream*);                        // 0x71F930
    int GetStateA() const;                                   // 0x71F950
    int GetStateB_SpyEvent() const;                          // 0x71F9C0
    int StubReturn48() const { return 48; }                   // 0x71FA60
    int StubReturn88() const { return 88; }                   // 0x71FA50
    void Stub() { }                                          // 0x71FA70
    void Fire(TechnoClass*, int);                            // 0x71FA80

    int32_t     eventType;          // +0x24 (this+36)
    int32_t     TEventClass_field_28;           // +0x28 (this+40)
    int32_t     TEventClass_field_2C;           // +0x2C (this+44) - used as event[11]
    int32_t     TEventClass_field_30;           // +0x30 (this+48) - used as event[12]
    int32_t     TEventClass_field_34;           // +0x34 (this+52) - used as event[13]
    char        TEventClass_field_38[16];       // +0x38 (this+56=0x38, string at +14)
    int32_t     TEventClass_field_48;           // +0x48 (this+72)
    int32_t     TEventClass_field_4C;           // +0x4C (this+76)
    int32_t     TEventClass_field_50;           // +0x50 (this+80) - used as event[21]
    int32_t     TEventClass_field_54;           // +0x54 (this+84)
    int32_t     TEventClass_field_58;           // +0x58 (this+88)
    int32_t     TEventClass_field_5C;           // +0x5C (this+92)
};
} // namespace gamemd
