// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct CStreamClass_16 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Seek(int a2);  // 0x4A4B20
    char  AddRef(int a2);  // 0x4A4B30
    char  Release(int a2, unsigned int * a3);  // 0x4A4B70
    int ddtor(void *a1 = 0);  // 0x4A4C20
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x4A4C50
    VectorClass_flat *  QueryInterface(char a2);  // 0x4A4D90
    unsigned int  Write(int a2);  // 0x4A4C90
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};
} // namespace gamemd
