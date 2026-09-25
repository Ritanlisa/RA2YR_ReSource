// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BlowPipe_23 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
    unsigned int q0042;
// --- flat members (END) ---
    void Clear();  // 0x63DC80
    int Seek(int a2);  // 0x63DCD0
    void Clear_0();  // 0x63DCE0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x63E350
    void Clear_1();  // 0x63E400
    int FindItemIndex(unsigned int * a2);  // 0x63E430
    char AddRef(int a2);  // 0x63E650
    char Release(int a2,  unsigned int * a3);    // 0x63E690
    void ddtor();  // 0x63E740
    int Read(unsigned int * a2);  // 0x63E770
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x63E7D0
    int FindItemIndex_0(unsigned int * a2);  // 0x63E8D0
    char SetCapacity_1(int a2,  unsigned int * a3);    // 0x63EAD0
    int FindItemIndex_1(unsigned int * a2);  // 0x63EC20
    VectorClass_flat * Destructor(char a2);  // 0x63ED90
    VectorClass_flat * QueryInterface(char a2);  // 0x63EE30
    DynamicVector * Destructor_0(char a2);  // 0x63EE80
    DynamicVector * Destructor_1(char a2);  // 0x63EF20
    unsigned int GetCount(int a2);  // 0x63DCB0
    unsigned int GetCount_0(int a2);  // 0x63DD10
    unsigned int GetCount_1(int a2);  // 0x63E470
    unsigned int Write(int a2);  // 0x63E7B0
};
} // namespace gamemd
