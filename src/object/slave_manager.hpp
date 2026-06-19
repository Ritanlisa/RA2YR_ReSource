#pragma once

#include "abstract.hpp"
#include "core/vector.hpp"

namespace ra2 {
namespace game {

class HouseClass;
class TechnoClass;
class FootClass;

struct SlaveControl {
    int32_t     SlaveControl_field_0;
    int32_t     SlaveControl_field_4;
    int32_t     SlaveControl_field_8;
    int32_t     SlaveControl_field_C;
    int32_t     SlaveControl_field_10;
};

// sizeof ~0x68 (ctor 0x6AF1A0, ddtor 0x6B1130)
class SlaveManagerClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::SlaveManager;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~SlaveManagerClass() = default;  // 0x6B1130

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // Construction
    SlaveManagerClass(TechnoClass*, HouseClass*, HouseClass*, int, int); // 0x6AF1A0 (ctor)
    void Constructor(int, int);                                  // 0x6AF360
    void Constructor_SlaveManagerClass(int, int);                // 0x6AF4A0
    void ddtor();

    // Slave management
    void Check();                                                // 0x522D00
    bool CheckIsOne() const;                                     // 0x522D30
    void VtableDispatch();                                       // 0x522D20
    void SetOwner(HouseClass*);                                  // 0x6AF580
    void UpdateSlaves();                                         // 0x6AF5F0
    void CreateSlave(FootClass*);                                // 0x6AF650
    void ProcessSlaves();                                        // 0x6AF6C0
    void LostSlave(FootClass*);                                  // 0x6B0A20
    bool ShouldWakeUpNow() const;                                // 0x6B1020
    void AssignTask(FootClass*);                                 // 0x6B10F0
    void ProcessOrders();                                        // 0x6B1390
    void sub_5522FC0();                                          // 0x522FC0
    float Calc2DDistance(int, int, int, int);                    // 0x6B1A70

    // Save/Load
    void LoadManager(IStream*);                                  // 0x6B1170
    void SaveManager(IStream*);                                  // 0x6B1300

    // Stubs
    int StubReturn72() const { return 72; }                       // IDA: 0x6B1380
    int StubReturn100() const { return 100; }                     // IDA: 0x6B1370

    TechnoClass*                master;             // +0x24 (this+36)
    HouseClass*                 house;              // +0x28 (this+40)
    HouseClass*                 slaveOwner;         // +0x2C (this+44)
    int32_t                     slaveType;          // +0x30 (this+48)
    int32_t                     slaveCount;         // +0x34 (this+52)
    DynamicVectorClass<SlaveControl*> slaves;       // +0x38 (this+56)
    int32_t                     slaveVectorCount;   // +0x48 (this+72)
    int32_t                     slaveVectorCapacity;// +0x4C (this+76)
    int32_t                     creationFrame;      // +0x50 (this+80)
    int32_t                     SlaveManagerClass_field_54;           // +0x54 (this+84)
    int32_t                     SlaveManagerClass_field_58;           // +0x58 (this+88)
    int32_t                     SlaveManagerClass_field_5C;           // +0x5C (this+92)
    int32_t                     SlaveManagerClass_field_60;           // +0x60 (this+96)
};

} // namespace game
} // namespace ra2
