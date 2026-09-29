// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PageUserCommandClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char PageUserCommandClass_field_00[4];  // 0x4
    char PageUserCommandClass_field_04[4];  // 0x8
// --- flat members (END) ---
    char * AddRef(void *a1 = 0);
    char Do(int a1);
    PageUserCommandClass();
    wchar_t * Read(void *a1 = 0, void *a2 = 0);
    wchar_t * Release(void *a1 = 0);
    wchar_t * ddtor(void *a1 = 0);
};

} // namespace gamemd
