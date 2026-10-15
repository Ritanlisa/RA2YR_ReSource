// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int  HashEntryCompare(unsigned char * a2);  // 0x517590
    AbstractClass * *  SetCapacity_0(int a2, char * a3);  // 0x6284A0
    AbstractClass * * Remove(CCINIClass * aP1, unsigned char * a2);  // 0x628BB0
    unsigned int *  Destructor(char a2);  // 0x6244A0
    unsigned int *  Destructor_0(char a2);  // 0x6244C0
    void Clear_627D20();  // 0x627D20
    void Clear_627D80();  // 0x627D80
    char  SetCapacity(int a2, unsigned int * a3);  // 0x627F90
    int  FindItemIndex(unsigned int * a2);  // 0x628040
    DynamicVector *  Destructor_1(char a2);  // 0x628640
    char *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x628690
    DynamicVector *  Destructor_2(char a2);  // 0x6287B0
    wchar_t * ddtor(void *a1_1);  // 0x628800
    unsigned int  GetCount(int a2);  // 0x627D50
    unsigned int  GetItemIndex(int a2);  // 0x627DB0
    int  GetItem(int a2, int a3);  // 0x627DE0
    char  IsEqualTo(int a2);  // 0x6281F0
    int  ProcessAll(int a2);  // 0x6285A0
    unsigned int  Get(int a2, void *a1 = 0);  // 0x628830
    int  Clear(int a2, int a3);  // 0x628860
    char  AddRef(int a2);  // 0x6288A0
    int  GetSize(int a2);  // 0x628D80
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned char __pad_00E;  // 0xE [X30:canon]
    int __pad_0;  // 0x0 [X30:type_map]
};
} // namespace gamemd
