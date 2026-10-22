// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct MSPCXAnim_42 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * *  AllocCopyData_8B(int a2, unsigned int * a3);  // 0x5D09C0
    void FreeData();  // 0x5D05A0
    unsigned int  GetCount_8B(int a2);  // 0x5D05D0
    void FreeData_0();  // 0x5D0610
    unsigned int  GetCount(int a2);  // 0x5D0640
    void FreeData_1();  // 0x5D0670
    unsigned int  GetCount_0(int a2);  // 0x5D06A0
    int  GetFrame(int a2);  // 0x5D0780
    int  FindIndex_Pair(unsigned int * a2);  // 0x5D0AA0
    char  AllocCopyData_4B(int a2, unsigned int * a3);  // 0x5D0C60
    int  FindIndex(unsigned int * a2);  // 0x5D0D10
    char  AllocCopyData_4B_0(int a2, unsigned int * a3);  // 0x5D0EC0
    int  FindIndex_0(unsigned int * a2);  // 0x5D0F70
    char  AddRef(int a2);  // 0x5D1200
    char  Release(int a2, unsigned int * a3);  // 0x5D1240
    void ddtor(void *a1 = 0);  // 0x5D12F0
    int Load(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1);  // 0x5D1320
    unsigned int Draw(int a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);  // 0x5D1360
    DynamicVector *  Constructor_VectorClass_Point2D_(char a2);  // 0x5D1710
    DynamicVector *  Constructor_VectorClass_MSTextEntry___(char a2);  // 0x5D17B0
    DynamicVector *  Constructor_VectorClass_MapSelection___(char a2);  // 0x5D1850
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D1940
};
} // namespace gamemd
