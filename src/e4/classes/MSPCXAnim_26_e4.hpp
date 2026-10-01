// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSPCXAnim_26 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_0;
// --- flat members (END) ---
    void ddtor();  // 0x5D06D0
    unsigned int  Draw(int a2);  // 0x5D0700
    int  GetFrame(int a2);  // 0x5D0720
    void FreeData();  // 0x5D0730
    unsigned int  GetCount(int a2);  // 0x5D0760
    void FreeData_0();  // 0x5D0790
    unsigned int  GetCount_0(int a2);  // 0x5D07C0
    char  AddRef(int a2);  // 0x5D0FA0
    char  AllocCopyData_4B(int a2, unsigned int * a3);  // 0x5D0FE0
    void FreeData_1();  // 0x5D1090
    int  FindIndex(unsigned int * a2);  // 0x5D10C0
    unsigned int  GetCount_1(int a2);  // 0x5D1100
    char  Release(int a2, unsigned int * a3);  // 0x5D1120
    int  Load(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x5D11D0
    char  AllocCopyData_4B_0(int a2, unsigned int * a3);  // 0x5D1380
    int  FindIndex_0(unsigned int * a2);  // 0x5D1430
    char  AllocCopyData_4B_1(int a2, unsigned int * a3);  // 0x5D15E0
    int  FindIndex_1(unsigned int * a2);  // 0x5D1690
    VectorClass_flat *  Constructor_VectorClass_MapStage___(unsigned int * Block, char a2);  // 0x5D18A0
    DynamicVector *  QueryInterface(unsigned int * Block, char a2);  // 0x5D18F0
    DynamicVector *  Constructor_VectorClass_MSAnimEntry___(unsigned int * Block, char a2);  // 0x5D1990
    DynamicVector *  Constructor_VectorClass_MSSfxEntry___(unsigned int * Block, char a2);  // 0x5D1A30
};
} // namespace gamemd
