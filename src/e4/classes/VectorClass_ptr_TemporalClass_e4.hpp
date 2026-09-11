// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_TemporalClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_TemporalClass___(char a2);  // 0x71B550
    void Destroy();  // 0x71B240
    unsigned int GetItemIndex(int a2);  // 0x71B270
    int Get(int a2);  // 0x71B290
    char Add(int a2);  // 0x71B2A0
    char Release(int a2, unsigned int * a3);  // 0x71B2E0
    void Remove();  // 0x71B390
    int GetSize(unsigned int * a2);  // 0x71B3C0
    unsigned int GetCapacity(int a2);  // 0x71B400
    char SetCapacity(int a2, unsigned int * a3);  // 0x71B420
    int FindItemIndex(unsigned int * a2);  // 0x71B4D0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x71B500
};
} // namespace gamemd
