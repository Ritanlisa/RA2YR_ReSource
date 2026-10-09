// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DeleteCommandClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char DeleteCommandClass_field_00[4];  // 0x4
    char DeleteCommandClass_field_04[4];  // 0x8
// --- flat members (END) ---
    void* CommandClass;  // 0x0 (no offset truth)
    char * AddRef(void *a1);
    static unsigned int * Constructor(void *aP1);  // G42.57w14 R2 raw 0x537F10 _DWORD *__thiscall DeleteCommandClass::Constructor(DeleteCommandClass *this)
    wchar_t * Read(void *a1, void *a2);
    wchar_t * Release(void *a1);
    wchar_t * ddtor(void *a1);
};

} // namespace gamemd
