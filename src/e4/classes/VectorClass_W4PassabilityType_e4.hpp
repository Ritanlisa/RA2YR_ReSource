// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_W4PassabilityType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x588F00
    unsigned int GetItemIndex(int a2);  // 0x588F30
    int Clear(int a2);  // 0x588F50
    void Destroy_0();  // 0x588F60
    unsigned int GetItemIndex_0(int a2);  // 0x588F90
    void Destroy_1();  // 0x588FD0
    unsigned int GetItemIndex_1(int a2);  // 0x589000
    char AddRef(int a2);  // 0x589EB0
    char Release(int a2,  unsigned int * a3);    // 0x589EF0
    void ddtor(void *a1 = 0);  // 0x589FA0
    int GetSize(unsigned int * a2);  // 0x589FD0
    unsigned int GetCapacity(int a2);  // 0x58A010
    char SetCapacity(int a2,  unsigned int * a3);    // 0x58A030
    int FindItemIndex(unsigned int * a2);  // 0x58A0E0
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x58A150
    int FindItemIndex_0(unsigned int * a2);  // 0x58A230
    char SetCapacity_1(int a2,  char * a3);    // 0x58A2A0
    int FindItemIndex_1(unsigned int * a2);  // 0x58A3A0
    char * Constructor(unsigned int * Block,  char a2, void *a3 = 0, void *a4 = 0, void *a5 = 0);    // 0x58A630
    char * Constructor_0(unsigned int * Block,  char a2, void *a1 = 0);    // 0x58A840
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x58AA90
    DynamicVector * Constructor_1(unsigned int * Block,  char a2);    // 0x58AAE0
};
} // namespace gamemd
