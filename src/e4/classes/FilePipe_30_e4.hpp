// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FilePipe_30 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void *q8;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int vfptr;
    unsigned int *__pad_0;
    unsigned int Capacity;
// --- flat members (END) ---
    void ddtor();  // 0x4778A0
    TypeList_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x477A70
    char  Release(int a2, unsigned int * a3);  // 0x478140
    int  Read(unsigned int * a2);  // 0x4781F0
    void Clear();  // 0x4B9BE0
    void Clear_0();  // 0x4B9C40
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4B9E20
    int  FindItemIndex(unsigned int * a2);  // 0x4B9ED0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4BA080
    int  FindItemIndex_0(unsigned int * a2);  // 0x4BA130
    DynamicVector *  Destructor(unsigned int * Block, char a2);  // 0x4BA160
    DynamicVector *  Destructor_0(unsigned int * Block, char a2);  // 0x4BA200
    DynamicVector *  Destructor_1(unsigned int * Block, char a2);  // 0x4BA2A0
    unsigned int  Write(int a2);  // 0x4778D0
    unsigned int  GetCount(int a2);  // 0x4B9C10
    unsigned int  GetCount_0(int a2);  // 0x4B9C70
};
} // namespace gamemd
