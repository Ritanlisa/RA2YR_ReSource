#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

// sizeof ~0xC8 (ctor 0x6593F0, Create 0x659110)
class RadBeam : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::None;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~RadBeam() = default;

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;
    virtual void calculateChecksum(void* checksum) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // Construction
    static RadBeam* Create(bool);                                // 0x659110
    void sub_6593F0();                                           // 0x6593F0

    double      range;              // +0x18 (this+24)
    uint8_t     data[0xA0];         // +0x20..+0xBF (padding to sizeof 0xC8)
};

} // namespace game
} // namespace ra2
