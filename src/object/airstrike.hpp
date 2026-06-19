#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

class TechnoClass;
class HouseClass;

// sizeof ~0x64 (ctor 0x41D380, ddtor 0x41D7A0)
class AirstrikeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Airstrike;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~AirstrikeClass() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;
    virtual void calculateChecksum(void* checksum) const;

    // Construction
    AirstrikeClass(TechnoClass*);                                // 0x41D380
    void ddtor();                                                // 0x41D7A0

    // Methods
    void StartMission();                                         // 0x41D830
    void SpawnAircraft();                                        // 0x41D860
    void ReassignTarget();                                       // 0x41DA20
    void RemoveAircraft(TechnoClass*);                           // 0x41DC80
    void CopyTo(AirstrikeClass*);                                // 0x41DD50
    void UpdateAll();                                            // 0x420E90
    void Stat(IStream*);                                         // 0x41D6E0
    void Write(IStream*);                                        // 0x41D6F0
    void Seek(IStream*);                                         // 0x41D780

    // Stubs
    bool StubReturnFalse() const; // 0x41DC50
    int StubReturn71() const; // 0x41DD40
    int StubReturn96() const; // 0x41DD30

    int32_t     AirstrikeClass_field_24;           // +0x24 (this+36)
    int32_t     AirstrikeClass_field_28;           // +0x28 (this+40)
    uint8_t     AirstrikeClass_field_3C;           // +0x3C (this+60)
    uint8_t     AirstrikeClass_field_3D;           // +0x3D (this+61)
    uint8_t     pad_3E[2];          // +0x3E..+0x3F
    int32_t     AirstrikeClass_field_44;           // +0x44 (this+68)
    int32_t     AirstrikeClass_field_48;           // +0x48 (this+72)
    TechnoClass* owner;             // +0x4C (this+76)
    int32_t     AirstrikeClass_field_50;           // +0x50 (this+80)
    int32_t     AirstrikeClass_field_54;           // +0x54 (this+84)
    int32_t     AirstrikeClass_field_58;           // +0x58 (this+88)
    int32_t     AirstrikeClass_field_5C;           // +0x5C (this+92)
};

} // namespace game
} // namespace ra2
