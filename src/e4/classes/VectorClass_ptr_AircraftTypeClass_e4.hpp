// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_AircraftTypeClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_AircraftTypeClass___(char a2);  // 0x4F0840
    DynamicVector * Constructor_VectorClass_UnitTypeClass___(char a2);  // 0x4F08E0
    void Destroy();  // 0x4E8DE0
    unsigned int GetItemIndex(int a2);  // 0x4E8E10
    int Get(int a2);  // 0x4E8E30
    void Destroy_0();  // 0x4E8E40
    unsigned int GetItemIndex_0(int a2);  // 0x4E8E70
    char Add(int a2);  // 0x4EDAC0
    char Release(int a2, unsigned int * a3);  // 0x4EDB00
    void Remove();  // 0x4EDBB0
    int GetSize(unsigned int * a2);  // 0x4EDBE0
    unsigned int LoadTypeData(int a2);  // 0x4EDC20
    char SetCapacity(int a2, unsigned int * a3);  // 0x4EDC40
    int FindItemIndex(unsigned int * a2);  // 0x4EDCF0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EDEA0
    int FindItemIndex_0(unsigned int * a2);  // 0x4EDF50
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4F07F0
};
} // namespace gamemd
