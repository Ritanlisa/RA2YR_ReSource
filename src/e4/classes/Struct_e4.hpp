// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Struct {
// --- flat members (BEGIN) ---
    char Struct_field_00[4];  // 0x0
// --- flat members (END) ---
    void* Active;  // 0x0 (no offset truth)
    int ClearAllMemberFlags();
    int ZeroInit32();
    int ZeroInitAndSetup(void *a1);
    int ZeroInitAndSetup_0();
    int ZeroInitAndSetup_0_0();
    unsigned char * Zero3();
    unsigned int * InitTriple256(unsigned int * a1);
    static unsigned int * Zero25(Struct * aP1);  // G57w10-S raw 0x006D1810 (was C2597 interim stub)
    wchar_t ** WideStringCopy(int a2);  // 0x6247d0
};

} // namespace gamemd
