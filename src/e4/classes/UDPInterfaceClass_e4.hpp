// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned short BoundPort;  // 0x6
// --- flat members (END) ---
    AbstractClass * * Flush();
    AbstractClass * * ProcessSocketIO(int a2, SOCKET s, int a4, unsigned int a5);
    AbstractClass * * flush(int a2, unsigned int * a3);
    CampaignClass * * Destructor(char a2);
    DynamicVector * receivePacket(char a2);
    int Connect(int a2);
    int Receive();
    int connect();
    int sendPacket(unsigned int * a2);
    unsigned int reset(int a2);
    void CheckStatus(short a2);
    void GetStatistics(unsigned short a2);
    void disconnect();
};

} // namespace gamemd
