// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_Buffer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Buffer_DEF 1
struct Buffer {
    unsigned char Buffer_field_00;  // 0x0
    unsigned char q001;  // 0x1
    char __pad_2[2];  // 0x2
    unsigned char Buffer_field_04;  // 0x4
    char __pad_5[3];  // 0x5
    int Buffer_field_08;  // 0x8
    unsigned char Buffer_field_0C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int Buffer_field_10;  // 0x10
    unsigned int Buffer_field_14;  // 0x14
    unsigned int Buffer_field_18;  // 0x18
    unsigned int Buffer_field_1C;  // 0x1C
    unsigned int Buffer_field_20;  // 0x20
    unsigned int Buffer_field_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int q030;  // 0x30
    char __pad_34[12];  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    char __pad_48[8];  // 0x48
    unsigned int q050;  // 0x50
    char __pad_54[52];  // 0x54
    unsigned int u32_88;  // 0x88
    char __pad_8C[32];  // 0x8C
    unsigned int u32_AC;  // 0xAC
    char __pad_B0[44];  // 0xB0
    unsigned int u32_DC;  // 0xDC
    char __pad_E0[76];  // 0xE0
    unsigned int u32_12C;  // 0x12C
    char __pad_130[40];  // 0x130
    unsigned int u32_158;  // 0x158
    char __pad_15C[12];  // 0x15C
    unsigned int u32_168;  // 0x168
    char __pad_16C[1488];  // 0x16C
    unsigned int u32_73C;  // 0x73C
    char __pad_740[4];  // 0x740
    unsigned int u32_744;  // 0x744
    unsigned int u32_748;  // 0x748
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Init(int a2, int Size);
    DynamicVector * Constructor_VectorClass_ObjectClass___(char a2, int a3, int aP1);
    int * RotateBufferCrypto(int * a2, int a3);
    int AllocateCodecFrameBuffers();
    int AppendCellData(AbstractClass * aP1, int a3);
    void * FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4);
    int Cleanup();  // 0x42f7c0
    int UpdateVolumeSettings(void *a1 = 0);  // 0x40A6D0 G42.33 b3 supplied-body sync
    char *  FillCircularBufferScroll(int a2, int a3, uint16_t a4);  // 0x410ED0
    unsigned int * Init(int a2, int Size, int aP2, int a3, int aP1);
    static unsigned int * Init(Buffer * aP1, int a2, int Size);
    static int Cleanup(void *aP0);  // G57a1 static-form mirror
    int AllocateCodecFrameBuffers(void *a1 = 0);  // G57a1 static-form mirror
};
#endif  // GAMEMD_G2_Buffer_DEF

} // namespace gamemd
