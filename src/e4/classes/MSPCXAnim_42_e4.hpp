// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MSPCXAnim_42 {
    void* vfptr;  // minimal E2 declaration
    void FreeData();  // 0x5D05A0
    unsigned int GetCount_8B(int a2);  // 0x5D05D0
    void FreeData_0();  // 0x5D0610
    unsigned int GetCount(int a2);  // 0x5D0640
    void FreeData_1();  // 0x5D0670
    unsigned int GetCount_0(int a2);  // 0x5D06A0
    int GetFrame(int a2);  // 0x5D0780
    char AllocCopyData_8B(int a2, unsigned int * a3);  // 0x5D09C0
    int FindIndex_Pair(unsigned int * a2);  // 0x5D0AA0
    char AllocCopyData_4B(int a2, unsigned int * a3);  // 0x5D0C60
    int FindIndex(unsigned int * a2);  // 0x5D0D10
    char AllocCopyData_4B_0(int a2, unsigned int * a3);  // 0x5D0EC0
    int FindIndex_0(unsigned int * a2);  // 0x5D0F70
    char AddRef(int a2);  // 0x5D1200
    char Release(int a2, unsigned int * a3);  // 0x5D1240
    void ddtor();  // 0x5D12F0
    int Load(unsigned int * a2);  // 0x5D1320
    unsigned int Draw(int a2);  // 0x5D1360
    DynamicVector * Constructor_VectorClass_Point2D_(char a2);  // 0x5D1710
    DynamicVector * Constructor_VectorClass_MSTextEntry___(char a2);  // 0x5D17B0
    DynamicVector * Constructor_VectorClass_MapSelection___(char a2);  // 0x5D1850
    VectorClass * QueryInterface(char a2);  // 0x5D1940
};
} // namespace gamemd
