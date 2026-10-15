// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct BlowPipe_23 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    int Clear(void *a1_1);  // 0x63DC80
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x63DCD0
    void Clear_0();  // 0x63DCE0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x63E350
    void Clear_1();  // 0x63E400
    int  FindItemIndex(unsigned int * a2);  // 0x63E430
    char  AddRef(int a2);  // 0x63E650
    char  Release(int a2, unsigned int * a3);  // 0x63E690
    void ddtor(void *a1 = 0);  // 0x63E740
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x63E770
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x63E7D0
    int  FindItemIndex_0(unsigned int * a2);  // 0x63E8D0
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x63EAD0
    int  FindItemIndex_1(unsigned int * a2);  // 0x63EC20
    VectorClass_flat *  Destructor(char a2);  // 0x63ED90
    VectorClass_flat *  QueryInterface(char a2);  // 0x63EE30
    DynamicVector *  Destructor_0(char a2);  // 0x63EE80
    DynamicVector *  Destructor_1(char a2);  // 0x63EF20
    unsigned int  GetCount(int a2);  // 0x63DCB0
    unsigned int  GetCount_0(int a2);  // 0x63DD10
    unsigned int  GetCount_1(int a2);  // 0x63E470
    unsigned int  Write(int a2);  // 0x63E7B0
    unsigned char *m_1;  // 0x1 (offset-truth)
int m_10;  // 0x10 [X35-L7 kind=int]
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
};
} // namespace gamemd
