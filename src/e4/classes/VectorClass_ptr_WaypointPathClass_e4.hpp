// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_WaypointPathClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_WaypointPathClass___(char a2);  // 0x764710
    void Destroy();  // 0x763F90
    unsigned int GetItemIndex(int a2);  // 0x763FC0
    int Get(int a2);  // 0x763FE0
    char Add(int a2);  // 0x764460
    char Release(int a2, unsigned int * a3);  // 0x7644A0
    void Remove();  // 0x764550
    int GetSize(unsigned int * a2);  // 0x764580
    unsigned int GetCapacity(int a2);  // 0x7645C0
    char SetCapacity(int a2, unsigned int * a3);  // 0x7645E0
    int FindItemIndex(unsigned int * a2);  // 0x764690
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x7646C0
};
} // namespace gamemd
