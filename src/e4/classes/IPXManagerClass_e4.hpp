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
// --- flat members (END) ---
    unsigned int processPacket_ph;  // w18j3: filler renamed (no offset truth; canon IPXManagerClass::processPacket is a method)
    static unsigned int processPacket(char *p_this);  // x4:ida@0x5409f0
    unsigned int u32_54;  // G42.40f supply (truth 0x5415F0: *((unsigned int*)this+21), cursor index)
    IPXManagerClass * QueryInterface(char * Block, char a2);
    int ddtor(int a2, int a3, unsigned int * v10);
    int receivePacket(int a2);
    int send(int a2);
    int sendPacket(int a2, int a3, int a4);
    void StubReturnFalse(int a1, int a2);
    static int destroyConnection(void *a1 = 0);  // 0x540d60
    unsigned int * createConnection(void *a1 = 0);  // 0x540d40
unsigned int Socket;  // 0x0 [X35-L7 kind=unsigned int]

    unsigned int u32_4C;  // X10 supply (member_lookup)

    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
};

} // namespace gamemd
