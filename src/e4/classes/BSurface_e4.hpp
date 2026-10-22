// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BSurface {
    void * q000;  // 0x0
    int Width;  // 0x4
    int Height;  // 0x8
    int LockCount;  // 0xC
    int BytesPerPixel;  // 0x10
    void * Buffer;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    void * ptr_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[20];  // 0x30
    unsigned int q044;  // 0x44
    char __pad_48[16];  // 0x48
    unsigned int q058;  // 0x58
    char __pad_5C[4];  // 0x5C
    unsigned int q060;  // 0x60
    char __pad_64[8];  // 0x64
    unsigned int q06C;  // 0x6C
    char __pad_70[32];  // 0x70
    char __pad_90[4];  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    char __pad_A0[72];  // 0xA0
    unsigned short u16_E8;  // 0xE8
    unsigned short u16_EA;  // 0xEA
    unsigned short u16_EC;  // 0xEC
    unsigned short u16_EE;  // 0xEE
    unsigned short u16_F0;  // 0xF0
    unsigned char u8_F2;  // 0xF2
    unsigned char u8_F3;  // 0xF3
    unsigned char u8_F4;  // 0xF4
    unsigned char u8_F5;  // 0xF5
    char __pad_F6[2];  // 0xF6
    unsigned short u16_F8;  // 0xF8
    char __pad_FA[4];  // 0xFA
    unsigned short u16_FE;  // 0xFE
    unsigned short u16_100;  // 0x100
    unsigned char u8_102;  // 0x102
    unsigned char u8_103;  // 0x103
    unsigned short u16_104;  // 0x104
    unsigned char u8_106;  // 0x106
    unsigned char u8_107;  // 0x107
    unsigned char u8_108;  // 0x108
    char __pad_109[75];  // 0x109
    unsigned int u32_154;  // 0x154
    char __pad_158[12];  // 0x158
    unsigned int u32_164;  // 0x164
    unsigned int u32_168;  // 0x168
    char __pad_16C[4];  // 0x16C
    unsigned int u32_170;  // 0x170
    char __pad_174[44];  // 0x174
    unsigned int u32_1A0;  // 0x1A0
    char __pad_1A4[1336];  // 0x1A4
    unsigned int u32_6DC;  // 0x6DC
    char __pad_6E0[4];  // 0x6E0
    unsigned int u32_6E4;  // 0x6E4
    unsigned int u32_6E8;  // 0x6E8
    unsigned int u32_6EC;  // 0x6EC
    unsigned int u32_6F0;  // 0x6F0
    char __pad_6F4[32];  // 0x6F4
    unsigned short u16_714;  // 0x714
    char __pad_716[6];  // 0x716
    unsigned int u32_71C;  // 0x71C
    char __pad_720[44];  // 0x720
    unsigned short u16_74C;  // 0x74C
    unsigned short u16_74E;  // 0x74E
    char __pad_750[4];  // 0x750
    unsigned int u32_754;  // 0x754
    char __pad_758[12];  // 0x758
    unsigned int u32_764;  // 0x764
    unsigned int u32_768;  // 0x768
    unsigned int u32_76C;  // 0x76C
    unsigned int u32_770;  // 0x770
    unsigned int u32_774;  // 0x774
    unsigned int u32_778;  // 0x778
    char __pad_77C[16];  // 0x77C
    unsigned int u32_78C;  // 0x78C
    char __pad_790[4];  // 0x790
    unsigned int u32_794;  // 0x794
    unsigned int u32_798;  // 0x798
    unsigned int u32_79C;  // 0x79C
    char __pad_7A0[8];  // 0x7A0
    unsigned int u32_7A8;  // 0x7A8
    char __pad_7AC[8];  // 0x7AC
    unsigned int u32_7B4;  // 0x7B4
    unsigned int u32_7B8;  // 0x7B8
    char __pad_7BC[16];  // 0x7BC
    unsigned int u32_7CC;  // 0x7CC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct(int a2, int a3, int v14, int a5, void *a5_2, void *a6_1, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x410CE0
    bool CreateTripleBuffer(void *a1 = 0);  // 0x7B8C60
    unsigned int *  ConstructEx(int a2, int a3, int a4, int a5);  // 0x7BC970
    int GetBytesPerPixel();  // 0x411630
    int GetPitch();  // 0x411640
    BSurface *  ScalarDtor(char a2);  // 0x411650
    char Stub(int a1, int a2);
};
} // namespace gamemd
