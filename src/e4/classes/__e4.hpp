// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_TREE_OWNS_UNDERSCORE  // G42.36: struct _ dedup pair
#define GAMEMD_E4_OWNS_UNDERSCORE 1
struct _ {
    void* vfptr;  // minimal E2 declaration
    char  AddRef(int a2);  // 0x74F3C0
    char  Release(int a2, unsigned int * a3);  // 0x74F400
    wchar_t * ddtor();  // 0x74F4B0
    int  Read(unsigned int * a2);  // 0x74F4E0
    unsigned int  Write(int a2);  // 0x74F520
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x74F650
    int  Seek(int a2);  // 0x74F3B0
    // G42.38d: receiver `gamemd::_` member supplies (defs in VectorClass_e4.cpp T9 stubs)
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
#endif  // GAMEMD_TREE_OWNS_UNDERSCORE
} // namespace gamemd
