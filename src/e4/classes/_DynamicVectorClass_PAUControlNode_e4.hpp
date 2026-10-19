// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// X78: ControlNode dynamic-vector carrier (see _VectorClass_PAUControlNode).
// Methods = vtable authority 0x7E4BA4 slots 0..6 (live til this-type
// _DynamicVectorClass_PAUControlNode).
struct _DynamicVectorClass_PAUControlNode {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned short tail_E;  // 0xE
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int LoadTypeData(int a2);  // 0x472AB0 (vtable slot 5 = GetItemIndex)
    char Release(int a2, unsigned int * a3);  // 0x472CC0 (vtable slot 2 = SetCapacity)
    int Capture(unsigned int * a2);  // 0x472D70 (vtable slot 4 = FindItemIndex)
    DynamicVector * QueryInterface(char a2);  // 0x473050 (vtable slot 0 = dtor)
    void CaptureManagerClass__vt_03_();  // 0x472A80 (vtable slot 3 = Clear)
};

} // namespace gamemd
