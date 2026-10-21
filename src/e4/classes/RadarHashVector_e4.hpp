// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct RadarHashVector {
    char __pad_0[4];  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int m_10;  // 0x10
    int RadarHashVector_field_0x14;  // 0x14
    int RadarHashVector_field_0x18;  // 0x18
    int RadarHashVector_field_0x1C;  // 0x1C
    int RadarHashVector_field_0x20;  // 0x20
    int RadarHashVector_field_0x24;  // 0x24
    int RadarHashVector_field_0x28;  // 0x28
    int RadarHashVector_field_0x2C;  // 0x2C
    int RadarHashVector_field_0x30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ComputeHashIndex(int a2, char * a3);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    char * Destructor(char a2);
    int FindItemIndex(unsigned int * a2);
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    unsigned int * Construct(MapClass * aP1, MapClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
    void ddtor(void *a1 = 0);
};

} // namespace gamemd
