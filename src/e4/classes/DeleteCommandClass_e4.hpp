// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DeleteCommandClass {
    void* CommandClass;  // 0x0
    int DeleteCommandClass_field_00;  // 0x4
    int DeleteCommandClass_field_04;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char * AddRef(void *a1);
    static unsigned int * Constructor(void *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    wchar_t * Read(void *a1, void *a2, void *a3 = 0);
    wchar_t * Release(void *a1);
    wchar_t * ddtor(void *a1);
};

} // namespace gamemd
