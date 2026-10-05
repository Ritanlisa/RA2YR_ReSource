// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IStream {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int *__pad_0;
// --- flat members (END) ---
    int Read(IStream * pstm, void * pv, ULONG cb);
};


// supplied (R_fix, C2039 IStreamVtbl x18): SaveGame_e4.cpp lpVtbl 载体
struct IStreamVtbl {
    int Write(void *aP0, void *aP1, int aP2, int aP3);  // COM IStream::Write 形态
};
} // namespace gamemd
