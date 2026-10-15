// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IStream {
// --- flat members (BEGIN) ---
    void* IStream_field_00;  // 0x4
// --- flat members (END) ---
    int Read(void * pstm, ULONG cb, void *a3 = 0);
    unsigned char __pad_000;  // 0x0 [X30:canon]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
};


// supplied (R_fix, C2039 IStreamVtbl x18): SaveGame_e4.cpp lpVtbl 载体
struct IStreamVtbl {
    int Write(void *aP0, void *aP1, int aP2, int aP3);  // COM IStream::Write 形态
};
} // namespace gamemd
