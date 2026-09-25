// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int u32_18;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned int u32_4B;  // 0x4B
    unsigned int u32_4F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned int u32_53;  // 0x53
    unsigned int q054;  // 0x54
    unsigned int u32_57;  // 0x57
    void* q05C;  // 0x5C
    void* q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    void* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    void* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char u8_1F5;  // 0x1F5
    void* q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q298;  // 0x298
    unsigned char q29C;  // 0x29C
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    void* q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q664;  // 0x664
    unsigned char q668;  // 0x668
    unsigned char q8D4;  // 0x8D4
    unsigned char q8D8;  // 0x8D8
    unsigned char q2260;  // 0x2260
    unsigned char q2264;  // 0x2264
    unsigned char q4738;  // 0x4738
    unsigned int q0080;
    unsigned int q0146;
    unsigned int q0242;
    unsigned int u32_100;
    unsigned int u32_180;
    unsigned int u32_288;
    unsigned int u32_58;
    unsigned int Active;
    unsigned int LastPacketTime;
    unsigned int PacketsReceived;
    unsigned int PacketsSent;
    unsigned int PlayerIndex;
    unsigned int q0085;
    unsigned int q0086;
    unsigned int q018;
// --- flat members (END) ---
    AbstractClass * * Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8);
    WinModemClass * * LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4);
    WinModemClass * QueryInterface(char a2);
    int HangUp(int a2);
    int LogCommErrors(NullModemClass * aP1, char a3, int a4, int a5);
    int ReadBytes(void (**this)(), WinModemClass * aP1, WinModemClass * aP2);
    int ReadSerial();
    int SaveToINI(const char * NumberOfBytesWritten);
    int WriteSerial(LPCVOID lpBuffer, WinModemClass * aP2);
    int ddtor(int a2);
};

} // namespace gamemd
