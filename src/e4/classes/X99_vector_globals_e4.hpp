// X99 S4: flat typed carriers for shape-clean DynamicVector-shaped .data
// globals (X74 raw-carrier model: the vptr slot is a data member because any
// C++ virtualisation would need dtor bodies / new symbols the gates forbid).
//
// Layout authority: src/core/vector.hpp (binary-verified 16B VectorClass /
// 24B DynamicVectorClass; ctor 0x7216C0 + per-type vtables) and each object's
// own census init/base-swap store map (X99_TABLES.md). Member types are the
// declared types of the merged raw tokens; size == 0x18. ptr_0 is `int` because
// the binary virtual-call sites pass `&object` as the `int*` this parameter
// (fnptr loaded from ptr_0 + 8, this = &object); the slot is 4 bytes either way.
#pragma once

namespace gamemd {

struct X99_Vec_B0CDE8 {  // 0x18
    int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
};

struct X99_Vec_B0F1A0 {  // 0x18
    int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
};

struct X99_Vec_AA1078 {  // 0x18
    int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
};

struct X99_Vec_ABCA40 {  // 0x18
    int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
};

struct X99_Vec_89ECF8 {  // 0x18
    int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
};

extern X99_Vec_B0CDE8 g_X99Vec_B0CDE8;  // data: 0xB0CDE8 (X99 merge of dword_B0CDE8/dword_B0CDEC/dword_B0CDF0/byte_B0CDF4/byte_B0CDF5/dword_B0CDF8/dword_B0CDFC)
extern X99_Vec_B0F1A0 g_X99Vec_B0F1A0;  // data: 0xB0F1A0 (X99 merge of dword_B0F1A0/dword_B0F1A4/dword_B0F1A8/byte_B0F1AC/byte_B0F1AD/dword_B0F1B0/dword_B0F1B4)
extern X99_Vec_AA1078 g_X99Vec_AA1078;  // data: 0xAA1078 (X99 merge of dword_AA1078/dword_AA107C/dword_AA1080/byte_AA1084/byte_AA1085/dword_AA1088/dword_AA108C)
extern X99_Vec_ABCA40 g_X99Vec_ABCA40;  // data: 0xABCA40 (X99 merge of dword_ABCA40/dword_ABCA44/dword_ABCA48/byte_ABCA4C/byte_ABCA4D/dword_ABCA50/dword_ABCA54)
extern X99_Vec_89ECF8 g_X99Vec_89ECF8;  // data: 0x89ECF8 (X99 merge of dword_89ECF8/dword_89ECFC/dword_89ED00/byte_89ED04/byte_89ED05/dword_89ED08/dword_89ED0C)

} // namespace gamemd
