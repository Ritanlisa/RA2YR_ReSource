// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinsockInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned short BoundPort;  // 0x6
    unsigned int u32_8;  // 0x8
    void* Initialized;  // 0x0 (no offset truth)
// --- flat members (END) ---
    unsigned int * Destru_vt00(char a2);
    WinsockInterfaceClass();
    char Destru_vt15(int a1);
    int Destru_vt13();
    int Destru_vt14(int a1);
    int Destru_vt16(int a1, int a2, int a3, int a4);
    unsigned int * Destru_vt00(unsigned int * Block, char a2);  // G42.40f-b: canonical type (gamemd::SOCKET not visible in all TU orders)
};

} // namespace gamemd
