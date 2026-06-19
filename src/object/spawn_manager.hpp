#pragma once

#include "abstract.hpp"
#include "core/vector.hpp"

namespace ra2 {
namespace game {

class TechnoClass;
class HouseClass;
class FootClass;

struct SpawnControl {
    int32_t     SpawnControl_field_0;
    int32_t     SpawnControl_field_4;
    int32_t     SpawnControl_field_8;
    int32_t     SpawnControl_field_C;
    int32_t     SpawnControl_field_10;
    bool        SpawnControl_field_14;
    uint8_t     pad_15[3];
};

// sizeof ~0x78 (ctor 0x6B6C90, ddtor 0x6B7ED0)
class SpawnManagerClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::SpawnManager;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~SpawnManagerClass() = default;  // 0x6B7ED0

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}

    // Construction
    SpawnManagerClass(TechnoClass*, HouseClass*, HouseClass*, int, int); // 0x6B6C90 (Construct)
    void Constructor();                                          // 0x6B6EA0
    void Constructor_SpawnManagerClass();                        // 0x6B7010
    void Constructor_6B83A0(int);                                // 0x6B83A0
    void ddtor();

    // Spawn management
    void SetTarget(AbstractClass*);                              // 0x6B7B90
    int CountAliveSpawns() const;                                // 0x6B7D30
    int CountDockedSpawns() const;                               // 0x6B7D50
    void ProcessEvent();                                         // 0x6B8140

    // Save/Load
    void LoadFromStream(IStream*);                               // 0x6B7F10
    void SaveState(IStream*);                                    // 0x6B80B0
    void PowerDrainUpdate();                                     // 0x6B7DE0

    // Stubs
    int StubReturn65() const { return 65; }                       // IDA: 0x6B8130
    int StubReturn116() const { return 116; }                     // IDA: 0x6B8120

    TechnoClass*                owner;              // +0x24 (this+36)
    HouseClass*                 spawnOwner;         // +0x28 (this+40)
    HouseClass*                 spawnType;          // +0x2C (this+44)
    int32_t                     spawnCount;         // +0x30 (this+48)
    int32_t                     SpawnManagerClass_field_34;           // +0x34 (this+52)
    DynamicVectorClass<SpawnControl*> spawns;        // +0x38 (this+56)
    int32_t                     spawnVectorCount;   // +0x48 (this+72)
    int32_t                     spawnVectorCapacity;// +0x4C (this+76)
    int32_t                     creationFrame;      // +0x50 (this+80)
    int32_t                     SpawnManagerClass_field_54;           // +0x54 (this+84)
    int32_t                     SpawnManagerClass_field_58;           // +0x58 (this+88)
    int32_t                     SpawnManagerClass_field_5C;           // +0x5C (this+92)
    int32_t                     SpawnManagerClass_field_60;           // +0x60 (this+96)
    int32_t                     SpawnManagerClass_field_64;           // +0x64 (this+100)
    int32_t                     SpawnManagerClass_field_68;           // +0x68 (this+104)
    int32_t                     SpawnManagerClass_field_6C;           // +0x6C (this+108)
    int32_t                     SpawnManagerClass_field_70;           // +0x70 (this+112)
};

} // namespace game
} // namespace ra2
