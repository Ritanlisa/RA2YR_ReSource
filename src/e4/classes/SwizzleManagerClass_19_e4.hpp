// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct SwizzleManagerClass_19 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x6CF4F0
    unsigned int PointerToIndex(int a2);  // 0x6CF520
    unsigned int * Lookup(unsigned int * a2, int a3);  // 0x6CF540
    char AddRef(int a2);  // 0x6CF560
    char Release(int a2, unsigned int * a3);  // 0x6CF5A0
    void ddtor();  // 0x6CF690
    int Init(unsigned int * a2);  // 0x6CF6C0
    unsigned int Add(int a2);  // 0x6CF700
    char SetCapacity(int a2, unsigned int * a3);  // 0x6CF720
    int FindItem(unsigned int * a2);  // 0x6CF820
    VectorClass * QueryInterface(char a2);  // 0x6CF850
    DynamicVector * Constructor_VectorClass_SwizzlePointerClass_(char a2);  // 0x6CF8A0
};
} // namespace gamemd
