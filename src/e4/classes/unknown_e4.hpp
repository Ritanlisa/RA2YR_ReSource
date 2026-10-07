// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct unknown {
// --- flat members (BEGIN) ---
    void* m_Data;  // 0x0
    char m_Position[4];  // 0x4
    int m_Size;  // 0x8
    bool IsAllocated;  // 0xD
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
    void* RoundToInt;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int  Read(unsigned short * a2, void *a2_2);
    int Seek(int a2, int a3, void *a3_2);
    unsigned int Write(int a2);
    wchar_t * ddtor(void *a1);
    unsigned int m_10;  // 0x10
};

} // namespace gamemd
