// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ScriptTypeClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_ScriptTypeClass___(char a2);  // 0x4F0520
    DynamicVector * Constructor_VectorClass_OverlayTypeClass___(char a2);  // 0x4F05C0
    void Destroy();  // 0x4E8C00
    unsigned int GetItemIndex(int a2);  // 0x4E8C30
    int Get(int a2);  // 0x4E8C50
    void Destroy_0();  // 0x4E8C60
    unsigned int GetItemIndex_0(int a2);  // 0x4E8C90
    char Add(int a2);  // 0x4ECEE0
    char Release(int a2, unsigned int * a3);  // 0x4ECF20
    void Remove();  // 0x4ECFD0
    int GetSize(unsigned int * a2);  // 0x4ED000
    unsigned int LoadTypeData(int a2);  // 0x4ED040
    char SetCapacity(int a2, unsigned int * a3);  // 0x4ED060
    int FindItemIndex(unsigned int * a2);  // 0x4ED110
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4ED2C0
    int FindItemIndex_0(unsigned int * a2);  // 0x4ED370
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4F04D0
};
} // namespace gamemd
