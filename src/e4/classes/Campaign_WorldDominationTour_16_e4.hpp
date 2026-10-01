// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct Campaign_WorldDominationTour_16 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int *__pad_0;
// --- flat members (END) ---
    int Release(int a2, unsigned int * a3);  // 0x765840
    unsigned int * Seek(unsigned int * a2, int a3, void *a3_2);  // 0x7656D0
    rc_ptr * Constructor(unsigned int * Block, char a2, void *a3_1);  // 0x765710
    rc_ptr * Constructor_0(unsigned int * Block, char a2, void *a3_1);  // 0x765740
    VectorCursor * Constructor_1(unsigned int * Block, char a2);  // 0x765770
    char AddRef(int a2);  // 0x7657F0
    int ddtor();  // 0x765960
    int Read(int a2, void *a2_2);  // 0x765990
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x765B60
    unsigned int Write(int a2);  // 0x7659D0
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};
} // namespace gamemd
