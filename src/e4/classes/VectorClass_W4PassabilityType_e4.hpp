// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
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
    int Clear(void *a1_1);  // 0x588F00
    unsigned int Clear(int a2);  // 0x588F30
    int Clear(int a2);  // 0x588F50
    void Destroy_0();  // 0x588F60
    unsigned int GetItemIndex_0(int a2);  // 0x588F90
    void Destroy_1();  // 0x588FD0
    unsigned int GetItemIndex_1(int a2);  // 0x589000
    char AddRef(int a2);  // 0x589EB0
    char Release(int a2, unsigned int * a3);  // 0x589EF0
    wchar_t * SetCapacity_1(void *a1_1);  // 0x589FA0
    int SetCapacity_1(unsigned int * a2);  // 0x589FD0
    unsigned int SetCapacity_1(int a2);  // 0x58A010
    char SetCapacity_1(int a2, unsigned int * a3);  // 0x58A030
    int SetCapacity_1(unsigned int * a2);  // 0x58A0E0
    char SetCapacity_1(int a2, unsigned int * a3);  // 0x58A150
    int SetCapacity_1(unsigned int * a2);  // 0x58A230
    char SetCapacity_1(int a2, char * a3);  // 0x58A2A0
    int Constructor_0(unsigned int * a2);  // 0x58A3A0
    char * Constructor_0(unsigned int * Block, char a2, void *a3_1);  // 0x58A630
    char * Constructor_0(unsigned int * Block, char a2, void *a3_1);  // 0x58A840
    VectorClass_flat * Constructor_1(unsigned int * Block, char a2);  // 0x58AA90
    DynamicVector * Constructor_1(unsigned int * Block, char a2);  // 0x58AAE0
};
} // namespace gamemd
