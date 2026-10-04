// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct ConnectionPointClass_9 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    AbstractClass * * Release(int a2, unsigned int * a3);  // 0x4A1280
    int EnumConnections(int a2);  // 0x4A0F70
    char AddRef(int a2);  // 0x4A1240
    int Advise(unsigned int * a2);  // 0x4A1360
    unsigned int * QueryInterface(char a2);  // 0x4A14F0 G42.41d truth (param1 was this)
    unsigned int Unadvise(int a2);  // 0x4A13A0
};
} // namespace gamemd
