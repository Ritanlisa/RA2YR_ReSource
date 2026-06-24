#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

class TechnoClass;
class HouseClass;

// sizeof ~0x5C (ctor 0x4385D0, ddtor 0x438B00)
class BombClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Bomb;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~BombClass() = default;  // 0x438B00

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to BombClass::ddtor at 0x438B00
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // Construction
    BombClass();                                                 // 0x4385D0 (AbstractClass)
    void ddtor();  // 0x438B00

    // Methods
    static void InitPool();                                      // 0x438550
    bool IsDeathBomb() const;                                    // 0x4389F0
    int GetCurrentFrame() const;                                 // 0x438A00
    int TimeToExplode() const;                                   // 0x438A70
    void Stat(IStream*);                                         // 0x438A90
    void Write(IStream*);                                        // 0x438B40
    void Seek(IStream*);                                         // 0x438BD0
    void CopyTo(BombClass*);                                     // 0x4393F0

    // Stubs
    int StubReturn68() const; // 0x4393E0
    int StubReturn92() const; // 0x4393D0

    int32_t     BombClass_field_28;           // +0x28 (this+40)
    int32_t     BombClass_field_2C;           // +0x2C (this+44)
    uint32_t    audioController[5]; // +0x3C (this+60) - AudioController
    int32_t     soundIndex;         // +0x50 (this+80)
    int32_t     BombClass_field_54;           // +0x54 (this+84)
    bool        BombClass_field_58;           // +0x58 (this+88)
    uint8_t     pad_59[3];         // +0x59..+0x5B
};

} // namespace game
} // namespace ra2
