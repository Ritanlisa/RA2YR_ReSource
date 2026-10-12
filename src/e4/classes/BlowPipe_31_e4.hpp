// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct BlowPipe_31 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ddtor(void *a1 = 0);  // 0x63DC20
    int  Seek(int a2);  // 0x63DC70
    char  AddRef(int a2);  // 0x63E310
    char  Release(int a2, unsigned int * a3);  // 0x63E490
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x63E620
    DynamicVector *  QueryInterface(char a2);  // 0x63EDE0
    unsigned int  Write(int a2);  // 0x63DC50
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
};
} // namespace gamemd
