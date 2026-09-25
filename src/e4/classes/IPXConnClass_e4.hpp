// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXConnClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int PlayerIndex;  // 0x4
    char Active;  // 0x8
    int LastPacketTime;  // 0xC
    int PacketsSent;  // 0x10
    unsigned int q011;  // 0x11
    int PacketsReceived;  // 0x14
    unsigned int Socket;  // 0x18
    unsigned int RemoteAddress;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    unsigned short RemoteSocket;  // 0x28
    unsigned char padding;  // 0x2A
    unsigned char q02C;  // 0x2C
    CampaignScore* q030;  // 0x30
    int q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    CampaignScore* q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u16_5C;  // 0x5C
    unsigned char q060;  // 0x60
    IPXGlobalConnClass* q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q07C;  // 0x7C
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned int u32_D0;  // 0xD0
    unsigned char q0D4;  // 0xD4
    unsigned char q0D8;  // 0xD8
    unsigned char q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    IPXGlobalConnClass* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    CampaignScore* q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q184;  // 0x184
    unsigned char q188;  // 0x188
    unsigned int q208;  // 0x208
    unsigned char q20C;  // 0x20C
    unsigned char q210;  // 0x210
    unsigned char q214;  // 0x214
    unsigned char q220;  // 0x220
    unsigned char q224;  // 0x224
    unsigned int q258;  // 0x258
    unsigned char q25C;  // 0x25C
    void* q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned int q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned char q320;  // 0x320
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q388;  // 0x388
    unsigned char q38C;  // 0x38C
    unsigned char q394;  // 0x394
    unsigned char q398;  // 0x398
    unsigned char q40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned int q520;  // 0x520
    unsigned char q524;  // 0x524
    unsigned char q528;  // 0x528
    unsigned char q52C;  // 0x52C
    unsigned char q530;  // 0x530
    unsigned char q534;  // 0x534
    unsigned char q538;  // 0x538
    IPXGlobalConnClass* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    void* q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned int q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q664;  // 0x664
    unsigned char q668;  // 0x668
    unsigned char q66C;  // 0x66C
    unsigned char q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned int q784;  // 0x784
    unsigned char q788;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned char q800;  // 0x800
    unsigned char q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q838;  // 0x838
    unsigned char q83C;  // 0x83C
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned char q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q131C;  // 0x131C
    unsigned char q1320;  // 0x1320
    unsigned char q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned char q145C;  // 0x145C
    unsigned char q1460;  // 0x1460
    unsigned char q2104;  // 0x2104
    unsigned char q2108;  // 0x2108
    unsigned char q2578;  // 0x2578
    unsigned char q257C;  // 0x257C
    unsigned char q2E78;  // 0x2E78
    unsigned int RemoteAddress6;
    unsigned int initConnection;
    unsigned int Active5;
    unsigned int PacketsSent0;
// --- flat members (END) ---
    void * constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8);
};

} // namespace gamemd
