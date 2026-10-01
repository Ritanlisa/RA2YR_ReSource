// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct RocketLocomotionClass_17 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_0;
// --- flat members (END) ---
    void ddtor();  // 0x6647B0
    int  UpdateMovement(int a2);  // 0x664800
    char  AddRef(int a2);  // 0x664810
    char  SetCapacity(int a2, unsigned int * a3);  // 0x664850
    void Destroy();  // 0x664900
    int  IndexOf(unsigned int * a2);  // 0x664930
    char  Release(int a2, unsigned int * a3);  // 0x664990
    int  Launch(unsigned int * a2);  // 0x664A40
    VectorClass_flat *  Constructor(unsigned int * Block, char a2);  // 0x664A70
    DynamicVector *  QueryInterface(unsigned int * Block, char a2);  // 0x664AC0
    unsigned int  BeginMove(int a2);  // 0x6647E0
    unsigned int  PointerToIndex(int a2);  // 0x664970
};
} // namespace gamemd
