// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXManagerClass {
    int Socket;  // 0x0
    char Initialized[1];  // 0x4
    char Active[1];  // 0x5
    unsigned short tail_6;  // 0x6
    char __pad_8[24];  // 0x8
    unsigned int u32_20;  // 0x20
    char __pad_24[4];  // 0x24
    unsigned int q028;  // 0x28
    char __pad_2C[24];  // 0x2C
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    char __pad_58[12];  // 0x58
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    char __pad_70[48];  // 0x70
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int processPacket(char *p_this);  // x4:ida@0x5409f0
    IPXManagerClass * QueryInterface(char * Block, char a2);
    int ddtor(int a2, int a3, unsigned int * v10);
    int receivePacket(int a2);
    int send(int a2);
    int sendPacket(int a2, int a3, int a4);
    void StubReturnFalse(int a1, int a2);
    static int destroyConnection(void *a1 = 0);  // 0x540d60
    unsigned int * createConnection(void *a1 = 0);  // 0x540d40
};

} // namespace gamemd
