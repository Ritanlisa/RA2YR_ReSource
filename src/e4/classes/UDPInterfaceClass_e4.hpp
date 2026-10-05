// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct UDPInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char m_1[4];  // 0x1
    bool Initialized;  // 0x4
    unsigned char __pad_5[356];  // 0x5
    unsigned int Socket;
    unsigned int u32_3F068;
    unsigned int u32_3F330;
    unsigned int u32_3F334;
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int q010;
    unsigned int q018;
    unsigned int q020;
// --- flat members (END) ---
    AbstractClass * * Flush();
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
    unsigned int m_10;  // 0x10
};

} // namespace gamemd
