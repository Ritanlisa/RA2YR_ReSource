// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
// G58a2: dedup guard removed - carrier renamed _e4, no longer collides with tree-owned `struct _`
struct _e4 {
    void* vfptr;  // 0x0 minimal E2 declaration
    void* Items;  // 0x4 (G57W14E1 til vector supply)
    void* Capacity;  // 0x8 (G57W14E1 til vector supply)
    void* IsInitialized;  // 0xC (G57W14E1 til vector supply)
    unsigned char IsAllocated;  // 0xD (G57W14E1 til vector supply)
    void* Count;  // 0x10 (G57W14E1 til vector supply)
    char  AddRef(int a2);  // 0x74F3C0
    char  Release(int a2, unsigned int * a3);  // 0x74F400
    wchar_t * ddtor();  // 0x74F4B0
    int  Read(unsigned int * a2);  // 0x74F4E0
    unsigned int  Write(int a2);  // 0x74F520
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x74F650
    int  Seek(int a2);  // 0x74F3B0
    // G42.38d: receiver `gamemd::_e4` member supplies (defs in VectorClass_e4.cpp T9 stubs)
    unsigned int * CellConstructor(int a2, int a3);
    unsigned int * Copy(unsigned int *a2);
    unsigned int * Construct(int a2, int a3);
    int Destroy();
    unsigned int * BuildingConstructor(int a2, int a3);
    unsigned int * BuildingTypeConstructor(int a2, int a3);
    unsigned int * CopyDefault(unsigned int *a2);
    int RemoveItem(int a2);
    unsigned int * ConstructHSV(int a2, int a3);
    int Cleanup2();
    int Append(unsigned int *a2);
    int EraseAt(int a2);
    unsigned int * CopyBuilding(unsigned int *a2);
    unsigned int * WstringConstructor(int a2, unsigned int *a3);
    int RemoveAt(int a2);
    int Shrink();
};
} // namespace gamemd
