// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned short BoundPort;  // 0x6
    unsigned int u32_8;  // 0x8
    void* q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q015;  // 0x15
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    ObjectClass* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    bool q02D;  // 0x2D
    unsigned char q031;  // 0x31
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    ObjectClass* q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    ObjectClass* q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q09C;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned char q0A4;  // 0xA4
    unsigned char q0A8;  // 0xA8
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    ObjectClass* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q160;  // 0x160
    unsigned char q164;  // 0x164
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned int q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned int q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned int q630;  // 0x630
    unsigned char q634;  // 0x634
    unsigned char q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned int q00C2;
    unsigned int q0208;
    unsigned int q3F068;
    unsigned int q3F06C;
    unsigned int q3F070;
    unsigned int q3F330;
    unsigned int q3F334;
    unsigned int q3F554;
    unsigned int q3F560;
    unsigned int u32_3F300;
    unsigned int u32_3F320;
    unsigned int u32_FC1D0;
    unsigned int u32_FCC00;
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
