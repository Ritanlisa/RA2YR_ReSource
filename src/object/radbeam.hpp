#pragma once

#include <cstdint>
#include <windows.h>
#include <objidl.h>   // IStream, CLSID

#include "abstract.hpp"

namespace ra2 {
namespace game {

// sizeof ~0xC8 (ctor 0x6593F0, Create 0x659110)
// CSP: RadBeam matched via T1
class RadBeam : public AbstractClass {
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::None; // TODO: derive ID lacks IDA evidence - confirm in translation pass

    HRESULT __stdcall GetClassID(CLSID* class_id);
    HRESULT __stdcall Load(IStream* stream);
    HRESULT __stdcall Save(IStream* stream, int clear_dirty);
    void pointerExpired(AbstractClass* ptr, bool removed);
    AbstractType __stdcall whatAmI() const;
    int objectSize() const;
    void calculateChecksum(void* checksum) const;
// --- e4 declarations (BEGIN) ---
    double * Create();  // 0x659110
    unsigned int * InitState(rc_ptr_base * aP1);  // 0x6593F0
// --- e4 declarations (END) ---
};

} // namespace game
} // namespace ra2
