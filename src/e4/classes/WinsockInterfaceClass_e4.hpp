// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinsockInterfaceClass {
    int Socket;  // 0x0
    unsigned char __pad_004;  // 0x4
    char __pad_5[1];  // 0x5
    unsigned short BoundPort;  // 0x6
    unsigned int __pad_008;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Destru_vt00(char a2);
    WinsockInterfaceClass();
    static void Constructor(void *aP1);
    char Destru_vt15(int a1);
    int Destru_vt13();
    int Destru_vt14(int a1);
    int Destru_vt16(int a1, int a2, int a3, int a4);
    unsigned int * Destru_vt00(unsigned int * Block, char a2);
};

} // namespace gamemd
