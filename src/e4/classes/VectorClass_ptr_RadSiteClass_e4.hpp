// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_RadSiteClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x65BEF0
    unsigned int GetItemIndex(int a2);  // 0x65BF20
    int Get(int a2);  // 0x65BF40
    char Add(int a2);  // 0x65BF50
    char Release(int a2, unsigned int * a3);  // 0x65BF90
    void Remove();  // 0x65C040
    int GetSize(unsigned int * a2);  // 0x65C070
    unsigned int GetCapacity(int a2);  // 0x65C0B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x65C0D0
    int FindItemIndex(unsigned int * a2);  // 0x65C180
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x65C1B0
    DynamicVector * Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2);  // 0x65C200
};
} // namespace gamemd
