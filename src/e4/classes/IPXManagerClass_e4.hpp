// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    bool Active;  // 0x5
    unsigned short tail_6;  // 0x6
    unsigned int Initialized9;
    unsigned int Socket;
    unsigned int curConnIndex;
    unsigned int processPacket;
    unsigned int q0080;
    unsigned int q010;
    unsigned int q014;
    unsigned int q044;
    unsigned int q048;
    unsigned int u32_44;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_50;
    unsigned int connTable;
// --- flat members (END) ---
    IPXManagerClass * QueryInterface(char * Block, char a2);
    int ddtor(int a2, int a3, unsigned int * a4);
    int receivePacket(int a2, void *a2_2, void *a3);
    int send(int a2);
    int sendPacket(int a2, int a3, int a4);
    void StubReturnFalse(int a1, int a2);
    int destroyConnection();  // 0x540d60
    unsigned int * createConnection();  // 0x540d40
};

} // namespace gamemd
