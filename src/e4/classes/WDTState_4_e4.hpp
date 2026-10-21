// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct WDTState_4 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int Capacity;  // 0x8
    unsigned int m_C;  // 0xC
    int m_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char Release(int a2, unsigned int * a3);  // 0x76BA70
    int ddtor(void *a1 = 0);  // 0x76B710
    int Read(int a2, void *a2_2, void *a3 = 0);  // 0x76BB90
    DynamicVector *  QueryInterface(char a2);  // 0x76BC10
    unsigned int  Write(int a2);  // 0x76B740
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x76BC60
};
} // namespace gamemd
