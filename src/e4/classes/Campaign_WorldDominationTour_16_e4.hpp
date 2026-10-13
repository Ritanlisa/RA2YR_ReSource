// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct rc_ptr;  // G42.32 fwd supply
struct Campaign_WorldDominationTour_16 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x765840
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x7656D0
    rc_ptr *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x765710
    rc_ptr *  Constructor_0(char a2);  // 0x765740
    VectorCursor *  Constructor_1(char a2);  // 0x765770
    char  AddRef(int a2);  // 0x7657F0
    int ddtor(void *a1 = 0);  // 0x765960
    int  Read(int a2, void *a1 = 0, void *a3 = 0);  // 0x765990
    VectorClass_flat *  QueryInterface(char a2);  // 0x765B60
    unsigned int  Write(int a2);  // 0x7659D0
    unsigned int m_8;  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    rc_ptr * Constructor(char Block);
    rc_ptr * Constructor_0(char Block);
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
};
} // namespace gamemd
