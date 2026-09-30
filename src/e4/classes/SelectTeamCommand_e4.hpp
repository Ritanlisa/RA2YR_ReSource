// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SelectTeamCommand {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* ;  // 0x4
    char SelectTeamCommand_field_04[4];  // 0x8
    unsigned int CommandClass;
    unsigned int m_1;
    unsigned int SelectTeamCommand_field_00;
// --- flat members (END) ---
    void Construct(int a2);
    void * AddRef();
    void * Release();
    wchar_t * ddtor();
};

} // namespace gamemd
