// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int __pad_0;
    unsigned int m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    BOOL  HashEntryCompare(unsigned char * a2);  // 0x517590
    char  SetCapacity_0(int a2, char * a3);  // 0x6284A0
    char  Remove(void * aP1, unsigned char * a2);  // 0x628BB0
    unsigned int *  Destructor(char a2);  // 0x6244A0
    unsigned int *  Destructor_0(char a2);  // 0x6244C0
    void Clear_627D20();  // 0x627D20
    void Clear_627D80();  // 0x627D80
    char  SetCapacity(int a2, unsigned int * a3);  // 0x627F90
    int  FindItemIndex(unsigned int * a2);  // 0x628040
    DynamicVector *  Destructor_1(unsigned int * Block, char a2);  // 0x628640
    char *  Add(unsigned int * Block, char a2);  // 0x628690
    DynamicVector *  Destructor_2(unsigned int * Block, char a2);  // 0x6287B0
    void ddtor(void *a1 = 0);  // 0x628800
    unsigned int  GetCount(int a2);  // 0x627D50
    unsigned int  GetItemIndex(int a2);  // 0x627DB0
    int  GetItem(int a2, int a3);  // 0x627DE0
    char  IsEqualTo(int a2);  // 0x6281F0
    int  ProcessAll(int a2);  // 0x6285A0
    unsigned int  Get(int a2);  // 0x628830
    int  Clear(int a2, int a3);  // 0x628860
    char  AddRef(int a2);  // 0x6288A0
    int  GetSize(int a2);  // 0x628D80
};
} // namespace gamemd
