// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinsockInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned short BoundPort;  // 0x6
// --- flat members (END) ---
    void* Initialized;  // 0x0 (no offset truth)
    unsigned int * Destru_vt00(char a2);
    WinsockInterfaceClass();
    static void Constructor(void *aP1);
    char Destru_vt15(int a1);
    int Destru_vt13();
    int Destru_vt14(int a1);
    int Destru_vt16(int a1, int a2, int a3, int a4);
    unsigned int * Destru_vt00(SOCKET * Block, char a2);
    unsigned char u32_15;  // 0x15 (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned char u32_2D;  // 0x2D (offset-truth)
    unsigned int u32_38;  // 0x38 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)
    unsigned int u32_40;  // 0x40 (offset-truth)
    unsigned char u32_42;  // 0x42 (offset-truth)
    unsigned char u32_45;  // 0x45 (offset-truth)
    unsigned int u32_C;  // 0xC (offset-truth)

    int u32_10;  // X10 supply (member_lookup)
    int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_3F068;  // X10 supply (member_lookup)
};

} // namespace gamemd
