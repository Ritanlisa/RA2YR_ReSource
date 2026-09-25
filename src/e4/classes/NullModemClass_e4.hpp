// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NullModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int PlayerIndex;  // 0x4
    void* Active;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    void* LastPacketTime;  // 0xC
    void* PacketsSent;  // 0x10
    void* PacketsReceived;  // 0x14
    unsigned int q018;  // 0x18
    bool q01B;  // 0x1B
    unsigned char q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q030;  // 0x30
    AbstractClass* q034;  // 0x34
    _DWORD q038;  // 0x38
    void* q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    void* q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    BlowStraw* q050;  // 0x50
    BlowStraw * ptr_51;  // 0x51
    unsigned int q054;  // 0x54
    BlowStraw* q058;  // 0x58
    void* q05C;  // 0x5C
    void* q060;  // 0x60
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    BlowStraw* q080;  // 0x80
    unsigned char q084;  // 0x84
    BlowStraw* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    void* q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    BlowStraw* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    AbstractClass* q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    void* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    BlowStraw* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q320;  // 0x320
    unsigned char q324;  // 0x324
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned int q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned int u32_CF8;  // 0xCF8
    unsigned char qCFC;  // 0xCFC
    unsigned char qD00;  // 0xD00
    unsigned char qDA0;  // 0xDA0
    unsigned char qDA4;  // 0xDA4
    unsigned char q12D4;  // 0x12D4
    unsigned char q12D8;  // 0x12D8
    AnimClass* q206C;  // 0x206C
    unsigned char q2070;  // 0x2070
    unsigned char q2074;  // 0x2074
    unsigned char q2078;  // 0x2078
    unsigned char q207C;  // 0x207C
    unsigned char q2080;  // 0x2080
    unsigned int q3320;  // 0x3320
    unsigned char q3324;  // 0x3324
    unsigned char q3328;  // 0x3328
    unsigned char q3488;  // 0x3488
    unsigned char q348C;  // 0x348C
    unsigned char q3854;  // 0x3854
    unsigned char q3858;  // 0x3858
    unsigned char q4694;  // 0x4694
    unsigned char q4698;  // 0x4698
    unsigned char q4754;  // 0x4754
    unsigned char q4758;  // 0x4758
    unsigned int Active3;
    unsigned int PacketsReceived6;
    unsigned int PlayerIndex2;
    unsigned int PlayerIndex3;
    unsigned int PlayerIndex4;
    unsigned int PlayerIndex5;
    unsigned int PlayerIndex6;
    unsigned int linkObject;
    unsigned int q01C6;
    unsigned int q0242;
    unsigned int u32_CF80;
// --- flat members (END) ---
    int COMStub();
    int COMStub_Return0(int a1);
    int CheckStatus();
    int Disconnect(int a2, int a3, int a4);
    int Flush(int a2);
    int GetAddress(int a2);
    int GetMember23();
    int Receive();
    int Release(int a2, int a3, int a4, int a5);
    int Send(int a1);
    int SetAddress(int a2);
    int ddtor(int a2, int a3, int a4);
    int receiveData();
    int sendData();
    void * QueryInterface(char a2);
};

} // namespace gamemd
