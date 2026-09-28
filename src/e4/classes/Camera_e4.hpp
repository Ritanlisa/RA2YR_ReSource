// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Camera {
// --- flat members (BEGIN) ---
    char m_Position[12];  // 0x0
    char m_Target[12];  // 0xC
    char m_Zoom[4];  // 0x18
    float m_Tilt;  // 0x1C
// --- flat members (END) ---
    long long UpdateTilt();
    void StubReturn();
    void StubReturnFalse();
    void StubReturnVoid();
};

} // namespace gamemd
