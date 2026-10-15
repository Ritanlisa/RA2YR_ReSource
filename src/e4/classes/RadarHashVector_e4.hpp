// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct RadarHashVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    int Count;  // 0x16
// --- flat members (END) ---
    AbstractClass * * ComputeHashIndex(int a2, char * a3);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    char * Destructor(char a2);
    int FindItemIndex(unsigned int * a2);
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    unsigned int * Construct(MapClass * aP1, MapClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
    void ddtor(void *a1 = 0);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
};

} // namespace gamemd
