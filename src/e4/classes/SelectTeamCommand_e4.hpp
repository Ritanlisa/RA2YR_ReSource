// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SelectTeamCommand {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int CommandClass;
    unsigned int *m_1;
    unsigned int SelectTeamCommand_field_00;
// --- flat members (END) ---
    static _DWORD * Construct(void *aP1, int a2);  // G42.57w14 R2 raw 0x535FC0 _DWORD *__thiscall SelectTeamCommand::Construct(SelectTeamCommand *this, int a2)
    char * AddRef();
    wchar_t * Release();
    wchar_t * ddtor();
};

} // namespace gamemd
