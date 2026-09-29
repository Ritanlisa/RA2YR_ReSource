// GENERATED template-collision flat carrier (mechanical).
#pragma once

namespace gamemd {

struct DynamicVectorClass_flat {
    unsigned int q010;
    void* vfptr;
    void* q000;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    bool q018;  // 0x18
    unsigned char __pad_01C;  // 0x1C
    int q020;  // 0x20
    bool q024;  // 0x24
    unsigned char __pad_028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char __pad_038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char __pad_04C;  // 0x4C
    int q050;  // 0x50
    bool q054;  // 0x54
    unsigned char __pad_058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char __pad_06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char __pad_078;  // 0x78
    int q080;  // 0x80
unsigned int * AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2);
unsigned int * BuildingTypeConstructor(int a2, int a3);
unsigned int * Construct(int a2, int a3);
unsigned int * Copy(DynamicVector * aP1);
void Destroy(void *a1 = 0);
void Destroy_Alt();
};

} // namespace gamvoid Destroy();