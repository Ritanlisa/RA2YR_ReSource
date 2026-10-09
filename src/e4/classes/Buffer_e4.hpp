// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_Buffer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Buffer_DEF 1
struct Buffer {
// --- flat members (BEGIN) ---
    unsigned int Buffer_field_00;  // 0x0
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
    unsigned int * Init(int a2);  // G57w19k2 C2661 supply (raw thiscall form; arity per verbatim raw call sites)
    DynamicVector * Constructor_VectorClass_ObjectClass___(char a2, int a3, int aP1);
    int * RotateBufferCrypto(int * a2, int a3);
    int AllocateCodecFrameBuffers();
    int AppendCellData(AbstractClass * aP1, int a3);
    unsigned int * Init(int a2, int Size);
    void * FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4);
    int Cleanup();  // 0x42f7c0
    int UpdateVolumeSettings();  // 0x40A6D0 G42.33 b3 supplied-body sync
    char * FillCircularBufferScroll(int a2, int a3, unsigned short a4);  // 0x410ED0 G42.33 b3 supplied-body sync
    _DWORD * Init(int a2, int Size, int aP2, int aP3, int aP1);
    static unsigned int * Init(Buffer * aP1, int a2, int Size);  // G57w10-S raw 0x0043AD00 (was C2597 interim stub)
    static int Cleanup(void *aP0);  // G57a1 static-form mirror
    static int AllocateCodecFrameBuffers(void *aP0);  // G57a1 static-form mirror
    static int * RotateBufferCrypto(void *aP0, int aP1);  // G57a1 static-form mirror
    static int AppendCellData(void *aP0, int aP1);  // G57a1 static-form mirror
    static void * FillCircularBufferScroll2(void *aP0, int aP1, int aP2);  // G57a1 static-form mirror
    static void * Constructor_VectorClass_ObjectClass___(void *aP0, int aP1, int aP2);  // G57a1 static-form mirror
    unsigned int q008;  // 0x8 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_744;  // 0x744 (offset-truth)
    unsigned int u32_748;  // 0x748 (offset-truth)
    unsigned int u32_88;  // 0x88 (offset-truth)
};
#endif  // GAMEMD_G2_Buffer_DEF

} // namespace gamemd
