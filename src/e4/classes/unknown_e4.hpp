// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct unknown {
// --- flat members (BEGIN) ---
    void* m_Data;  // 0x0
    char m_Position[4];  // 0x4
    char m_Size[4];  // 0x8
    char unknown_field_0C[4];  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    void* RoundToInt;  // 0x0 (no offset truth)
    int  Read(unsigned short * a2, void *a2_2);
    int Seek(int a2, int a3, void *a3_2);
    unsigned int Write(int a2);
    wchar_t * ddtor(void *a1);
};

} // namespace gamemd
