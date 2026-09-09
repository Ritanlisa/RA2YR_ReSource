// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_Reestablish {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x45A0D0
    unsigned int GetItemIndex(int a2);  // 0x45A100
    int Clear(int a2);  // 0x45A120
    char AddRef(int a2);  // 0x45A760
    char Remove(int a2, unsigned int * a3);  // 0x45A7A0
    void ddtor();  // 0x45A850
    int GetSize(unsigned int * a2);  // 0x45A880
    unsigned int Get(int a2);  // 0x45A8C0
    char SetCapacity(int a2, unsigned int * a3);  // 0x45A8E0
    int FindItemIndex(unsigned int * a2);  // 0x45A990
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x45AA10
    VectorClass * Add(unsigned int * Block, char a2);  // 0x45ACE0
    DynamicVector * Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2);  // 0x45AD30
};
} // namespace gamemd
