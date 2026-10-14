// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct FilePipe_30 {
// --- flat members (BEGIN) ---
    int Capacity;  // 0x8
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ddtor(void *a1 = 0);  // 0x4778A0
    TypeList_flat *  QueryInterface(char a2);  // 0x477A70
    char  Release(int a2, unsigned int * a3);  // 0x478140
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x4781F0
    int Clear(void *a1_1);  // 0x4B9BE0
    void Clear_0();  // 0x4B9C40
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4B9E20
    int  FindItemIndex(unsigned int * a2);  // 0x4B9ED0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4BA080
    int  FindItemIndex_0(unsigned int * a2);  // 0x4BA130
    DynamicVector *  Destructor(char a2);  // 0x4BA160
    DynamicVector *  Destructor_0(char a2);  // 0x4BA200
    DynamicVector *  Destructor_1(char a2);  // 0x4BA2A0
    unsigned int  Write(int a2);  // 0x4778D0
    unsigned int  GetCount(int a2);  // 0x4B9C10
    unsigned int  GetCount_0(int a2);  // 0x4B9C70
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_00C;  // X10 supply (csp_canon_members)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
} // namespace gamemd
