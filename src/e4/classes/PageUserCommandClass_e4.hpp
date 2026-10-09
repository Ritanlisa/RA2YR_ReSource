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
    void* CommandClass;  // 0x0 (no offset truth)
    char * AddRef(void *a1);
    char Do(int a1);
PageUserCommandClass();
    static void * Constructor(void *aP1);  // 0x537DD0 raw: _DWORD *__thiscall PageUserCommandClass::PageUserCommandClass(PageUserCommandClass*) -- site form (W20L4 T2)
    wchar_t * Read(void *a1, void *a2);
    wchar_t * Release(void *a1);
    wchar_t * ddtor();
};

} // namespace gamemd
