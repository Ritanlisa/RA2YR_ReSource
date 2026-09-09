// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_PlanningMemberClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x63DB60
    unsigned int GetItemIndex(int a2);  // 0x63DB90
    int Get(int a2);  // 0x63DBB0
    void Destroy_0();  // 0x63DBC0
    unsigned int GetItemIndex_0(int a2);  // 0x63DBF0
    char Add(int a2);  // 0x63DD40
    char Release(int a2, unsigned int * a3);  // 0x63DD80
    void Remove();  // 0x63DE30
    int GetSize(unsigned int * a2);  // 0x63DE60
    unsigned int GetCapacity(int a2);  // 0x63DEA0
    char SetCapacity(int a2, unsigned int * a3);  // 0x63DF20
    int FindItemIndex(unsigned int * a2);  // 0x63E020
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x63E230
    int FindItemIndex_0(unsigned int * a2);  // 0x63E2E0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x63EC50
};
} // namespace gamemd
