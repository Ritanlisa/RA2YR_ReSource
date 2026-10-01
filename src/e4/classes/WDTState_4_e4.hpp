// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WDTState_4 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    char  Release(int a2, unsigned int * a3);  // 0x76BA70
    int ddtor();  // 0x76B710
    int  Read(int a2);  // 0x76BB90
    DynamicVector *  QueryInterface(unsigned int * Block, char a2);  // 0x76BC10
    unsigned int  Write(int a2);  // 0x76B740
    int Constructor();  // 0x76BC60
};
} // namespace gamemd
