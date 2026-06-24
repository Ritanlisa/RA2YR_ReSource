#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

// sizeof ~0xC8 (ctor 0x6593F0, Create 0x659110)
class RadBeam : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::None;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~RadBeam() = default;

    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed) override;
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const override;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // Construction
    static RadBeam* Create(bool);                                // 0x659110
    void InitState();                                           // 0x6593F0

    double      range;              // +0x18 (this+24)
    uint8_t     data[0xA0];         // +0x20..+0xBF (padding to sizeof 0xC8)
};

} // namespace game
} // namespace ra2
