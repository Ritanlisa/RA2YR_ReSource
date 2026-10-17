// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct HouseClass_24 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int HouseClass_24_field_0x8;  // 0x8
    int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x4F28A0
    char  AddRef(int a2);  // 0x4F28E0
    char  Release(int a2, unsigned int * a3);  // 0x4F2920
    wchar_t * ddtor(void *a1 = 0);  // 0x4F29D0
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x4F2A00
    VectorClass_flat *  QueryInterface(char a2);  // 0x4F2B60
    unsigned int  Write(int a2);  // 0x4F2A40
};
} // namespace gamemd
