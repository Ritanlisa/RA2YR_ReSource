#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

class TechnoClass;

// sizeof ~0x38 (ctor 0x71A450, ddtor 0x71A720)
class TemporalClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Temporal;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x71A660
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x71A700

    virtual ~TemporalClass() = default;  // 0x71A720

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to TemporalClass::ddtor at 0x71A720
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // Construction
    TemporalClass();                                             // 0x71A4E0
    void Constructor();                                          // 0x71A450
    void ddtor();  // 0x71A720

    // Methods
    void SetTarget(TechnoClass*);                                // 0x71A650
    void LoadTemporal(IStream*);                                  // 0x71A660
    void SaveTemporal(IStream*);                                  // 0x71A700
    void ProcessTimeWarp();                                      // 0x71A760
    float GetWarpPerStep() const;                                // 0x71AB10
    bool CanWarpTarget(TechnoClass*) const;                      // 0x71AE50
    void ProcessEvent();                                         // 0x71B1B0

    // Stubs
    int StubReturn70() const; // 0x71B1A0
    int StubReturn80() const; // 0x71B190

    int32_t     creationFrame;       // +0x2C (this+44)
    int32_t     TemporalClass_field_30;           // +0x30 (this+48)
    int32_t     TemporalClass_field_34;           // +0x34 (this+52)
};

} // namespace game
} // namespace ra2
