// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Commands {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
// --- flat members (END) ---
    void ** StubReturn8550640();
    char * AddRef(void *a1 = 0);
    char ** Release(void *a1 = 0);
    char Execute(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);
    const wchar_t * ddtor(void *a1 = 0);
};

} // namespace gamemd
