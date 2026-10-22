// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct rc_ptr;  // G42.32 fwd supply
struct Campaign_WorldDominationTour_16 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x765840
    unsigned int *  Seek(unsigned int * a2, int a3, void *a3_2 = 0);  // 0x7656D0
    rc_ptr * Constructor(char a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0);  // 0x765710
    rc_ptr *  Constructor_0(char a2);  // 0x765740
    VectorCursor *  Constructor_1(char a2);  // 0x765770
    char  AddRef(int a2);  // 0x7657F0
    int ddtor(void *a1 = 0);  // 0x765960
    int Read(int a2, void *a2_2, void *a3 = 0);  // 0x765990
    VectorClass_flat *  QueryInterface(char a2);  // 0x765B60
    unsigned int  Write(int a2);  // 0x7659D0
    rc_ptr * Constructor(char a2);
};
} // namespace gamemd
