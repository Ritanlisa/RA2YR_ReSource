// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct UDPInterfaceClass {
    int Socket;  // 0x0
    bool Initialized;  // 0x4
    char __pad_5[1];  // 0x5
    unsigned short BoundPort;  // 0x6
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * Flush(void *a1 = 0);
    AbstractClass * * ProcessSocketIO(int a2, void * s, int a4, unsigned int a5, int a3, int aP1, int aP5, int a7, int a8);
    AbstractClass * * flush(int a2, unsigned int * a3);
    CampaignClass * * Destructor(char a2, int a3, int aP1, int a5, int aP5, int a7, int a8, int a4);
    DynamicVector * receivePacket(unsigned int * Block, char a2, void *a3);
    int Connect(int a2);
    int Receive();
    int connect(void *a1);
    int sendPacket(unsigned int * a2);
    unsigned int reset(int a2);
    void CheckStatus(short a2);
    void GetStatistics(unsigned short a2);
    void disconnect();
};

} // namespace gamemd
