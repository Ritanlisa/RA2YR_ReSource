#pragma once

#include "object/abstract.hpp"
#include "core/vector.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

class TechnoTypeClass;
class HouseClass;
class TeamClass;

// sizeof ~0x78 (ctor 0x4C98B0, dtor 0x6F20D0)
class TeamTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::TeamType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~TeamTypeClass() = default;  // 0x6F20D0

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // Construction
    TeamTypeClass() noexcept { }                             // IDA: 0x4C98B0 (Construct)
    void ddtor();

    // Methods
    void Construct(); // 0x4C98B0
    void Check();                                            // 0x6EF5F0
    void CreateScriptType(TechnoClass*);                     // 0x691C00
    void DestroyAllInstances();                              // 0x6F0A70
    void FlashAllInstances();                                // 0x6F1F30
    TeamClass* FindFirstInstance();                          // 0x6F1F70
    static TeamTypeClass* FindByName(const char*);           // 0x6F0FC0
    int GetAuxField() const;                                 // 0x6F20C0
    int GetClassIdentifier();                                // 0x6F1C40
    int GetGroup() const;                                    // 0x6F1870
    int GetMaxCount() const;                                 // 0x6F1550
    int GetObjectSize();                                     // 0x6F20B0
    TeamClass* GetTeam();                                    // 0x6F1030
    int GetTransportWaypoint() const;                        // 0x6F18E0
    int GetTypeIdentifier();                                 // 0x6F20A0
    void LoadFromINI();                                      // 0x6F1090
    void LoadTypeData();                                     // 0x6F1BB0
    void PowerDrainUpdate();                                 // 0x6F1C80
    void ProcessTaskForce();                                 // 0x6F1FA0
    void ReadScriptData();                                   // 0x6F1AB0
    void SaveToINI();                                        // 0x6F1B90
    void sub_56E85F0();                                      // 0x6E85F0

    int32_t     TeamTypeClass_field_24;           // +0x24 (this+36)
    uint8_t     TeamTypeClass_field_28;           // +0x28 (this+40)
    uint8_t     pad_29[3];         // +0x29..+0x2B
    int32_t     TeamTypeClass_field_2C;          // +0x2C (this+44) - creationFrame
    int32_t     TeamTypeClass_field_30;          // +0x30 (this+48)
    int32_t     TeamTypeClass_field_34;          // +0x34 (this+52) - timer
    int32_t     TeamTypeClass_field_38;          // +0x38 (this+56)
    int32_t     TeamTypeClass_field_3C;          // +0x3C (this+60)
    DynamicVectorClass<const TechnoTypeClass*> taskForce; // +0x40 (this+64)
    int32_t     taskForceCount;    // +0x50 (this+80)
    int32_t     taskForceCapacity; // +0x54 (this+84)
    int32_t     TeamTypeClass_field_58;          // +0x58 (this+88)
    uint8_t     TeamTypeClass_field_5C;          // +0x5C (this+92)
    uint8_t     TeamTypeClass_field_5D;          // +0x5D (this+93)
    uint8_t     pad_5E[2];        // +0x5E..+0x5F
    int32_t     TeamTypeClass_field_60;          // +0x60 (this+96)
    int32_t     TeamTypeClass_field_64;          // +0x64 (this+100)
    int32_t     TeamTypeClass_field_68;          // +0x68 (this+104)
    int32_t     TeamTypeClass_field_6C;          // +0x6C (this+108)
    uint8_t     TeamTypeClass_field_70;          // +0x70 (this+112)
    uint8_t     TeamTypeClass_field_71;          // +0x71 (this+113)
    uint8_t     pad_72[2];        // +0x72..+0x73
};
} // namespace gamemd
