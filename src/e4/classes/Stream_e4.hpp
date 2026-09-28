// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Stream {
// --- flat members (BEGIN) ---
    StreamClass* m_Stream;  // 0x0
    char Stream_field_04[4];  // 0x4
    char Stream_field_08[4];  // 0x8
    bool q00A;  // 0xA
    char Stream_field_0C[4];  // 0xC
    unsigned int u32_10;  // 0x10
// --- flat members (END) ---
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    void * InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8);
};

} // namespace gamemd
