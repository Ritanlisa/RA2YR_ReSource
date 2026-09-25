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
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    void* q034;  // 0x34
    unsigned int Capacity;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int Items2;
    unsigned int q008;
// --- flat members (END) ---
    int Read(unsigned short * a2);
    int Seek(int a2, int a3);
    unsigned int Write(int a2);
    void ddtor();
};

} // namespace gamemd
