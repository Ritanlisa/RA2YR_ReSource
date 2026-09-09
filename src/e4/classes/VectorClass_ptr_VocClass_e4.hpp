// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_VocClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x7518D0
    unsigned int GetItemIndex(int a2);  // 0x751900
    int Get(int a2);  // 0x751920
    char Add(int a2);  // 0x751930
    char Release(int a2, unsigned int * a3);  // 0x751970
    void Remove();  // 0x751A20
    int GetSize(unsigned int * a2);  // 0x751A50
    unsigned int GetCapacity(int a2);  // 0x751A90
    char SetCapacity(int a2, unsigned int * a3);  // 0x751AB0
    int FindItemIndex(unsigned int * a2);  // 0x751B60
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x751B90
    DynamicVector * Constructor_VectorClass_VocClass___(unsigned int * Block, char a2);  // 0x751BE0
};
} // namespace gamemd
