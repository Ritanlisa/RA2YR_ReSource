// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Commands {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
// --- flat members (END) ---
    void ** StubReturn8550640();
    int32_t AddRef(void *a1);
    int32_t Release(void *a1);
    int32_t Execute(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7);
    int32_t ddtor();
};

} // namespace gamemd
