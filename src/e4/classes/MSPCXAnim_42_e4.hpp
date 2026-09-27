// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSPCXAnim_42 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* ;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
    unsigned int q0042;
    unsigned int q008;
// --- flat members (END) ---
    char AllocCopyData_8B(int a2,  unsigned int * a3);    // 0x5D09C0
    void FreeData();  // 0x5D05A0
    unsigned int GetCount_8B(int a2);  // 0x5D05D0
    void FreeData_0();  // 0x5D0610
    unsigned int GetCount(int a2);  // 0x5D0640
    void FreeData_1();  // 0x5D0670
    unsigned int GetCount_0(int a2);  // 0x5D06A0
    int GetFrame(int a2);  // 0x5D0780
    int FindIndex_Pair(unsigned int * a2);  // 0x5D0AA0
    char AllocCopyData_4B(int a2,  unsigned int * a3);    // 0x5D0C60
    int FindIndex(unsigned int * a2);  // 0x5D0D10
    char AllocCopyData_4B_0(int a2,  unsigned int * a3);    // 0x5D0EC0
    int FindIndex_0(unsigned int * a2);  // 0x5D0F70
    char AddRef(int a2);  // 0x5D1200
    char Release(int a2,  unsigned int * a3);    // 0x5D1240
    void ddtor();  // 0x5D12F0
    int Load(unsigned int * a2);  // 0x5D1320
    unsigned int Draw(int a2);  // 0x5D1360
    DynamicVector * Constructor_VectorClass_Point2D_(char a2);  // 0x5D1710
    DynamicVector * Constructor_VectorClass_MSTextEntry___(char a2);  // 0x5D17B0
    DynamicVector * Constructor_VectorClass_MapSelection___(char a2);  // 0x5D1850
    VectorClass_flat * QueryInterface(char a2);  // 0x5D1940
};
} // namespace gamemd
