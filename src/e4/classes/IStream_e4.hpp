// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IStream {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* IStream_field_00;  // 0x4
    unsigned int __pad_0;
// --- flat members (END) ---
    int Read(void * pstm, void * pv, int cb);
};

} // namespace gamemd
