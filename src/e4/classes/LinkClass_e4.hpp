// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LinkClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    LinkClass* m_Next;  // 0x4
    LinkClass* m_Prev;  // 0x8
    char LinkClass_field_0C[4];  // 0xC
    unsigned char q010;  // 0x10
    char q018[4];  // 0x18
    unsigned int q01E;  // 0x1E
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q06C;  // 0x6C
    unsigned int FindNext;
    unsigned int vt_slot_84;
// --- flat members (END) ---
    LinkClass * Destru_vt00(char a2);
    int Destroy();
    int Destruct();
};

} // namespace gamemd
