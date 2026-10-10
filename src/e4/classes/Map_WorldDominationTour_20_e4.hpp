// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct Map_WorldDominationTour_20 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x769E30
    void *  Constructor_0(char a2);  // 0x76A610
    VectorCursor *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x769DC0
    char  AddRef(int a2);  // 0x769DE0
    int ddtor(void *a1_1);  // 0x769F50
    int  Read(int a2, void *a1 = 0, void *a3 = 0);  // 0x769F80
    VectorClass_flat *  QueryInterface(char a2);  // 0x76A5C0
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x769CA0
    unsigned int  Write(int a2);  // 0x769FC0
};
} // namespace gamemd
