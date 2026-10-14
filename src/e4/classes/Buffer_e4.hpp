// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_Buffer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Buffer_DEF 1
struct Buffer {
// --- flat members (BEGIN) ---
    void *q0;  // 0x0
    unsigned int Buffer_field_04;  // 0x4
    unsigned int Buffer_field_08;  // 0x8
    unsigned int Buffer_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int Buffer_field_10;  // 0x10
    unsigned int Buffer_field_14;  // 0x14
    unsigned int Buffer_field_18;  // 0x18
    unsigned int Buffer_field_1C;  // 0x1C
    unsigned int Buffer_field_20;  // 0x20
    unsigned int Buffer_field_24;  // 0x24
// --- flat members (END) ---
    unsigned char m_1[16];  // G42.33 b3 flat-carrier vocab ([3] 索引基)
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
    unsigned int q008;  // 0x8 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_744;  // 0x744 (offset-truth)
    unsigned int u32_748;  // 0x748 (offset-truth)
    unsigned int u32_88;  // 0x88 (offset-truth)

    unsigned int Buffer_field_00;  // X10 supply (csp_canon_members)
    unsigned char __pad_610;  // X10 supply (member_lookup)

    unsigned int u32_12C;  // X10 supply (member_lookup)
    unsigned int u32_158;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_Buffer_DEF

} // namespace gamemd
