// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct UDPInterfaceClass {
    unsigned char Socket;  // 0x0
    char q001[3];  // 0x1
    char Initialized;  // 0x4
    char __pad_5[1];  // 0x5
    unsigned short BoundPort;  // 0x6
    unsigned int m_8;  // 0x8
    unsigned char m_C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int q010;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int q018;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned int u32_24;  // 0x24
    char __pad_28[8];  // 0x28
    unsigned int u32_30;  // 0x30
    char __pad_34[8];  // 0x34
    unsigned int u32_3C;  // 0x3C
    char __pad_40[8];  // 0x40
    unsigned int u32_48;  // 0x48
    char __pad_4C[258068];  // 0x4C
    unsigned int u32_3F060;  // 0x3F060
    unsigned int u32_3F064;  // 0x3F064
    unsigned char q3F068;  // 0x3F068
    char __pad_3F069[3];  // 0x3F069
    unsigned int u32_3F06C;  // 0x3F06C
    unsigned int u32_3F070;  // 0x3F070
    unsigned int q3F074;  // 0x3F074
    unsigned int q3F078;  // 0x3F078
    char __pad_3F07C[640];  // 0x3F07C
    unsigned short u32_3F2FC;  // 0x3F2FC
    char __pad_3F2FE[2];  // 0x3F2FE
    unsigned int u32_3F300;  // 0x3F300
    char __pad_3F304[28];  // 0x3F304
    unsigned int q3F320;  // 0x3F320
    char __pad_3F324[12];  // 0x3F324
    unsigned int u32_3F330;  // 0x3F330
    unsigned int u32_3F334;  // 0x3F334
    unsigned int q3F338;  // 0x3F338
    unsigned int q3F33C;  // 0x3F33C
    unsigned int q3F340;  // 0x3F340
    char __pad_3F344[1];  // 0x3F344
    unsigned char q3F345;  // 0x3F345
    char __pad_3F346[2];  // 0x3F346
    unsigned int q3F348;  // 0x3F348
    char __pad_3F34C[516];  // 0x3F34C
    unsigned int q3F550;  // 0x3F550
    unsigned int u32_3F554;  // 0x3F554
    unsigned int q3F558;  // 0x3F558
    char __pad_3F55C[1];  // 0x3F55C
    unsigned char q3F55D;  // 0x3F55D
    char __pad_3F55E[2];  // 0x3F55E
    unsigned int u32_3F560;  // 0x3F560
    unsigned int q3F564;  // 0x3F564
    unsigned int u32_3F568;  // 0x3F568
    unsigned int u32_3F56C;  // 0x3F56C
    char __pad_3F570[60];  // 0x3F570
    unsigned int u32_3F5AC;  // 0x3F5AC
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
