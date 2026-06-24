#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

class FootClass;
class TechnoClass;

// sizeof ~0x44 (ctor 0x629210, ddtor 0x6296D0)
class ParasiteClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Parasite;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x6295B0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x6296B0

    virtual ~ParasiteClass() = default;  // 0x6296D0

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to ParasiteClass::ddtor at 0x6296D0
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // Construction
    ParasiteClass();                                             // 0x6292B0
    void Constructor();                                          // 0x629210
    void ddtor();  // 0x6296D0

    // Parasite logic
    void Attach(FootClass*);                                     // 0x6294D0
    void LoadParasite(IStream*);                                  // 0x6295B0
    void SaveParasite(IStream*);                                  // 0x6296B0
    void DeploySquad(TechnoClass*);                              // 0x6297F0
    void TickDamage(FootClass*);                                 // 0x629FD0
    bool CanInfect(FootClass*) const;                            // 0x62A8E0
    bool TryInfect(FootClass*);                                  // 0x62A980
    bool CanExistOnVictimCell(FootClass*) const;                 // 0x62AB40
    void UpdateParasite();                                       // 0x62AF70
    void Update();                                               // 0x62BD50

    // Stubs
    int StubReturn67() const; // 0x62AF60
    int StubReturn88() const; // 0x62AF50

    int32_t     creationFrame;       // +0x2C (this+44)
    int32_t     ParasiteClass_field_30;           // +0x30 (this+48)
    int32_t     ParasiteClass_field_34;           // +0x34 (this+52)
    int32_t     ParasiteClass_field_38;           // +0x38 (this+56)
    int32_t     ParasiteClass_field_3C;           // +0x3C (this+60)
    int32_t     ParasiteClass_field_40;           // +0x40 (this+64)
};

} // namespace game
} // namespace ra2
