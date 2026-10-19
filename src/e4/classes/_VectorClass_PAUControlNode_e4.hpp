// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// X78: ControlNode vector carrier. Members = canonical VectorClass<T> layout
// (src/core/vector.hpp: Items/Capacity/IsInitialized/IsAllocated) with the
// row-evidenced +0x10/+0x14 DynamicVector fields. Methods = vtable authority
// 0x7E4BC4 slots 0..6 (live til this-type _VectorClass_PAUControlNode).
struct _VectorClass_PAUControlNode {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned short tail_E;  // 0xE
    char AddRef(int a2);  // 0x472B40 (vtable slot 1 = operator==)
    char SetCapacity(int a2, unsigned int * a3);  // 0x472B80 (vtable slot 2)
    void Destroy();  // 0x472C30 (vtable slot 3 = Clear)
    int IndexOf(unsigned int * a2);  // 0x472C60 (vtable slot 4 = FindItemIndex)
    unsigned int PointerToIndex(int a2);  // 0x472CA0 (vtable slot 5 = GetItemIndex)
    unsigned int * Constructor_VectorClass_ControlNode___(char a2);  // 0x473000 (vtable slot 0 = dtor)
    unsigned int * Constructor_473140(int a2, int a3);  // 0x473140 (ctor; receiver = +0x24 vector member)
    int CaptureManagerClass__vt_06_(int a2);  // 0x472AD0 (vtable slot 6 = GetItem)
};

} // namespace gamemd
