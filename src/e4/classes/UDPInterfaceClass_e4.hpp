// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct UDPInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned short BoundPort;  // 0x6
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

    unsigned char __pad_644;  // X10 supply (member_lookup)
    void* q00C;  // X10 supply (member_lookup)
    void* q010;  // X10 supply (member_lookup)
    unsigned int u32_3F2FC;  // X10 supply (member_lookup)
    unsigned int u32_3F330;  // X10 supply (member_lookup)
    unsigned int u32_3F334;  // X10 supply (member_lookup)
    unsigned int u32_3F554;  // X10 supply (member_lookup)
    int u32_3F320;  // 0x3F320
    unsigned char __pad_005;  // 0x5 [X30:canon]
    int __pad_008;  // 0x8 [X30:type_map]
    char __pad_5[1];  // 0x5 [X30:member_lookup]


    int u32_48;  // 0x48 [X55 W3 supply (render vocab)]
    int u32_30;  // 0x30 [X55 W3 supply (render vocab)]
    unsigned int m_C;  // 0xC [X55 W3 supply (render vocab)]
    unsigned int u32_3C;  // 0x3C [X55 W3 supply (render vocab)]
    int u32_24;  // 0x24 [X55 W3 supply (render vocab)]
    unsigned int m_8;  // 0x8 [X55 W3 supply (render vocab)]
    unsigned int u32_3F300;  // 0x3F300 [X55 W3 supply (render vocab)]
    int m_10;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int u32_3F06C;  // 0x3F06C [X55 W3 supply (render vocab)]
    unsigned int u32_3F070;  // 0x3F070 [X55 W3 supply (render vocab)]
    unsigned int u32_3F560;  // 0x3F560 [X55 W3 supply (render vocab)]
    unsigned int u32_3F060;  // 0x3F060 [X55 W3 supply (render vocab)]
    int q018;  // 0x18 [X55 W3 supply (render vocab)]
    unsigned int u32_3F568;  // 0x3F568 [X55 W3 supply (render vocab)]
    unsigned int u32_3F56C;  // 0x3F56C [X55 W3 supply (render vocab)]
    unsigned int u32_3F5AC;  // 0x3F5AC [X55 W3 supply (render vocab)]
    unsigned int u32_3F064;  // 0x3F064 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
