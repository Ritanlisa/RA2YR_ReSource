// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_ScriptClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x40E7F0
    unsigned int GetItemIndex(int a2);  // 0x40E820
    int Get(int a2);  // 0x40E840
    char Add(int a2);  // 0x40E850
    char Release(int a2, unsigned int * a3);  // 0x40E890
    void Remove();  // 0x40E940
    int GetSize(unsigned int * a2);  // 0x40E970
    unsigned int GetCapacity(int a2);  // 0x40E9B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x40E9D0
    int FindItemIndex(unsigned int * a2);  // 0x40EA80
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40EAB0
    DynamicVector * Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2);  // 0x40EB00
};
} // namespace gamemd
