// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FactoryClass_33 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Seek(int a2);  // 0x4CA8E0
    char  AddRef(int a2);  // 0x4CA8F0
    char  Release(int a2, unsigned int * a3);  // 0x4CA930
    void ddtor(int a1, unsigned int * a2);  // 0x4CA9E0
    int  Read(unsigned int * a2);  // 0x4CAA10
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4CAB50
    unsigned int  Write(int a2);  // 0x4CAA50
};
} // namespace gamemd
