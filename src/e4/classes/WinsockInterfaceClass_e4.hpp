// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinsockInterfaceClass {
    int Socket;  // 0x0
    bool Initialized;  // 0x4
    char __pad_5[1];  // 0x5
    unsigned short BoundPort;  // 0x6
    unsigned int __pad_008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[1];  // 0x14
    unsigned char u32_15;  // 0x15
    char __pad_16[2];  // 0x16
    unsigned int u32_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[1];  // 0x2C
    unsigned char u32_2D;  // 0x2D
    char __pad_2E[2];  // 0x2E
    unsigned int u32_30;  // 0x30
    char __pad_34[4];  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    char __pad_44[1];  // 0x44
    unsigned char u32_45;  // 0x45
    char __pad_46[2];  // 0x46
    unsigned int u32_48;  // 0x48
    char __pad_4C[258052];  // 0x4C
    unsigned int u32_3F050;  // 0x3F050
    unsigned int u32_3F054;  // 0x3F054
    unsigned int u32_3F058;  // 0x3F058
    unsigned int u32_3F05C;  // 0x3F05C
    unsigned int u32_3F060;  // 0x3F060
    unsigned int u32_3F064;  // 0x3F064
    unsigned char u32_3F068;  // 0x3F068
    char __pad_3F069[3];  // 0x3F069
    unsigned int u32_3F06C;  // 0x3F06C
    unsigned int u32_3F070;  // 0x3F070
    char __pad_3F074[644];  // 0x3F074
    unsigned int u32_3F2F8;  // 0x3F2F8
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
