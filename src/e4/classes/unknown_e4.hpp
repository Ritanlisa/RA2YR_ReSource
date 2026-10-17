// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct unknown {
    void* m_Data;  // 0x0
    int m_Position;  // 0x4
    int m_Size;  // 0x8
    char unknown_field_0C[4];  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Read(unsigned short * a2, void *a2_2, void *a3 = 0);
    int Seek(int a2, int a3, void *a3_2);
    unsigned int Write(int a2);
    wchar_t * ddtor(void *a1);
};

} // namespace gamemd
