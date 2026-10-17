// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXManagerClass {
    unsigned int Socket;  // 0x0
    bool Initialized;  // 0x4
    bool Active;  // 0x5
    unsigned short tail_6;  // 0x6
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
