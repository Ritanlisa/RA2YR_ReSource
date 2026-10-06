// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct Buffer {
// --- flat members (BEGIN) ---
    void *q0;  // 0x0
    void *q4;  // 0x4
    unsigned int Buffer_field_08;  // 0x8
    unsigned int Buffer_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int Buffer_field_10;  // 0x10
    unsigned int Buffer_field_14;  // 0x14
    unsigned int Buffer_field_18;  // 0x18
    unsigned int Buffer_field_1C;  // 0x1C
    unsigned int Buffer_field_20;  // 0x20
    unsigned int Buffer_field_24;  // 0x24
    unsigned int Buffer_field_184;
    unsigned int Buffer_field_188;
    unsigned int Items;
    unsigned int q008;
    unsigned int q030;
    unsigned int q744;
    unsigned int q748;
    unsigned int u32_1CF0;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_2E42;
    unsigned int u32_88;
    unsigned int Buffer_field_00;
    unsigned int Buffer_field_04;
    unsigned char m_1[16];  // G42.33 b3 flat-carrier vocab ([3] 索引基)
    unsigned int m_C;  // G42.33 b3 flat-carrier vocab
    unsigned int m_8;  // G42.33 b3 flat-carrier vocab
// --- flat members (END) ---
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
    static unsigned int * Init(...);  // G57a1 static-form sync variadic bridge (Buffer::Init(0,size) 0x6c9a7e / 0x52ff3b)
    static int Cleanup(void *aP0);  // G57a1 static-form mirror
    static int AllocateCodecFrameBuffers(void *aP0);  // G57a1 static-form mirror
    static int * RotateBufferCrypto(void *aP0, int aP1);  // G57a1 static-form mirror
    static int AppendCellData(void *aP0, int aP1);  // G57a1 static-form mirror
    static void * FillCircularBufferScroll2(void *aP0, int aP1, int aP2);  // G57a1 static-form mirror
    static void * Constructor_VectorClass_ObjectClass___(void *aP0, int aP1, int aP2);  // G57a1 static-form mirror

    unsigned int u32_158;  // G42.39 data supply

    unsigned int u32_DC;  // G42.39 data supply

    unsigned int u32_12C;  // G42.39 data supply

    unsigned char Buffer_field_046;  // G42.39 data supply

    unsigned char Buffer_field_047;  // G42.39 data supply

    unsigned int u32_744;  // G42.39 data supply

    unsigned int u32_748;  // G42.39 data supply
};

} // namespace gamemd
