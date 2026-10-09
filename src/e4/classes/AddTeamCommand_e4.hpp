// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AddTeamCommand {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char AddTeamCommand_field_00[4];  // 0x4
    char AddTeamCommand_field_04[4];  // 0x8
// --- flat members (END) ---
    static _DWORD * Construct(void *aP1, int a2);  // G42.57w14 R2 raw 0x5360B0 _DWORD *__thiscall AddTeamCommand::Construct(AddTeamCommand *this, int a2)
    char * AddRef();
    wchar_t * Release();
    wchar_t * ddtor();
    unsigned char m_1;  // 0x1 (offset-truth supply)
};

} // namespace gamemd
