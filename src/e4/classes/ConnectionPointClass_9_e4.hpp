// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct ConnectionPointClass_9 {
    char __pad_0[4];  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, unsigned int * a3);  // 0x4A1280
    int  EnumConnections(int a2);  // 0x4A0F70
    char  AddRef(int a2);  // 0x4A1240
    int  Advise(unsigned int * a2);  // 0x4A1360
    unsigned int * QueryInterface(char a2);
    unsigned int  Unadvise(int a2);  // 0x4A13A0
};
} // namespace gamemd
