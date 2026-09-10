// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_cptr_MultiMission {
    void* vfptr;  // minimal E2 declaration
    unsigned int * j_vt00(char a2);  // 0x5EF290
    void Destroy();  // 0x5EEBB0
    char SetAt(int a2, unsigned int * a3);  // 0x5EEC50
    char SetCapacity(int a2, unsigned int * a3);  // 0x5EED90
    int FindItemIndex(unsigned int * a2);  // 0x5EEE90
    VectorClass * GetAt(unsigned int * Block, char a2);  // 0x5EEEC0
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x5EEF10
    unsigned int GetItemIndex(int a2);  // 0x5EEBE0
    int Capacity(int a2);  // 0x5EEC00
    char AddRef(int a2);  // 0x5EEC10
    int GetSize(unsigned int * a2);  // 0x5EED30
    unsigned int GetCapacity(int a2);  // 0x5EED70
};
} // namespace gamemd
