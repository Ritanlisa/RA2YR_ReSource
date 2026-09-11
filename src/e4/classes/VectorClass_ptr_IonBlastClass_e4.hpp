// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_IonBlastClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_IonBlastClass___(char a2);  // 0x53DD50
    void Destroy();  // 0x53DA40
    unsigned int GetItemIndex(int a2);  // 0x53DA70
    int Get(int a2);  // 0x53DA90
    char Add(int a2);  // 0x53DAA0
    char Release(int a2, unsigned int * a3);  // 0x53DAE0
    void Remove();  // 0x53DB90
    int GetSize(unsigned int * a2);  // 0x53DBC0
    unsigned int GetCapacity(int a2);  // 0x53DC00
    char SetCapacity(int a2, unsigned int * a3);  // 0x53DC20
    int FindItemIndex(unsigned int * a2);  // 0x53DCD0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x53DD00
};
} // namespace gamemd
