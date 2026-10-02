// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct Map_WorldDominationTour_20 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int Release(int a2, unsigned int * a3);  // 0x769E30
    void * Constructor_0(rc_ptr_base * Block, char a2, void *a3_1);  // 0x76A610
    VectorCursor * Constructor(unsigned int * Block, char a2, void *a3_1);  // 0x769DC0
    char AddRef(int a2);  // 0x769DE0
    int ddtor(void *a1_1);  // 0x769F50
    int Read(int a2, void *a2_2);  // 0x769F80
    unsigned char m_1[4];  // 0x1
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x76A5C0
    unsigned int * Seek(unsigned int * a2, int a3, void *a3_2);  // 0x769CA0
    unsigned int Write(int a2);  // 0x769FC0
};
} // namespace gamemd
