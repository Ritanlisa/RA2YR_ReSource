// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SelectTeamCommand {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* p4;  // regen name
    char SelectTeamCommand_field_04[4];  // 0x8
    unsigned int CommandClass;
    unsigned int *m_1;
    unsigned int SelectTeamCommand_field_00;
// --- flat members (END) ---
    _DWORD * Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6);
    char * AddRef();
    wchar_t * Release();
    wchar_t * ddtor();
};

} // namespace gamemd
