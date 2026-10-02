// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct UDPInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned char __pad_5[356];  // 0x5
    unsigned short BoundPort;  // 0x6
    unsigned int Socket;
    unsigned int q3F06C;
    unsigned int q3F070;
    unsigned int q3F330;
    unsigned int q3F334;
    unsigned int q3F554;
    unsigned int q3F560;
    unsigned int u32_3F068;
    unsigned int u32_3F300;
    unsigned int u32_3F330;
    unsigned int u32_3F334;
    unsigned int u32_FC1D0;
    unsigned int u32_FCC00;
    unsigned int q010;
    unsigned int q018;
    unsigned int q020;
    unsigned int q0208;
    unsigned int q3F074;
    unsigned int qFC18;
    unsigned int u32_FC1E0;
// --- flat members (END) ---
    AbstractClass * * Flush();
    AbstractClass * * ProcessSocketIO(int a2, SOCKET s, int a4, unsigned int a5);
    AbstractClass * * flush(int a2, unsigned int * a3);
    CampaignClass * * Destructor(char a2);
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
