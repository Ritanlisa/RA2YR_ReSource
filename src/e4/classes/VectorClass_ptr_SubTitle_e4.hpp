// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_SubTitle {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x6CA7C0
    unsigned int GetItemIndex(int a2);  // 0x6CA7F0
    int Get(int a2);  // 0x6CA810
    char Add(int a2);  // 0x6CA820
    char SetCapacity(int a2, unsigned int * a3);  // 0x6CA860
    int FindItemIndex(unsigned int * a2);  // 0x6CA910
    DynamicVector * Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2);  // 0x6CA9C0
    char Release(int a2, unsigned int * a3);  // 0x6CAA10
    void Remove();  // 0x6CAAC0
    int GetSize(unsigned int * a2);  // 0x6CAAF0
    unsigned int GetCapacity(int a2);  // 0x6CAB30
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x6CAB50
};
} // namespace gamemd
