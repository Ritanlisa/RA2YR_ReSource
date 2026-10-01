// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RadarHashVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int RadarHashVector_field_0x04;
    unsigned int RadarHashVector_field_0x08;
    unsigned int RadarHashVector_field_0x0C;
    unsigned int RadarHashVector_field_0x10;
    unsigned int RadarHashVector_field_0x14;
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
struct AbstractClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
    AbstractClass * * ComputeHashIndex(int a2, char * a3);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    char * Destructor(char a2);
    int FindItemIndex(unsigned int * a2);
    int Read(unsigned int * a2, void *a2);
    unsigned int * Construct(MapClass * aP1, MapClass * aP2, void *a3, void *a4, void *a5, void *a6);
    unsigned int Write(int a2);
    void ddtor();
};

} // namespace gamemd
