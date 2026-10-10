// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IStream {
// --- flat members (BEGIN) ---
    void* IStream_field_00;  // 0x4
// --- flat members (END) ---
    int Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
};


// supplied (R_fix, C2039 IStreamVtbl x18): SaveGame_e4.cpp lpVtbl 载体
struct IStreamVtbl {
    int Write(void *aP0, void *aP1, int aP2, int aP3);  // COM IStream::Write 形态
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
