// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass__N_18 {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x50E760
    unsigned int GetItemIndex(int a2);  // 0x50E7A0
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x50E7C0
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x50E8C0
    char AddRef(int a2);  // 0x50FC00
    char Remove(int a2, int * a3);  // 0x50FC60
    void ddtor();  // 0x50FD70
    int GetSize(unsigned int * a2);  // 0x50FDB0
    unsigned int Get(int a2);  // 0x50FE00
    char SetCapacity(int a2, int * a3);  // 0x50FE20
    int FindItemIndex(unsigned int * a2);  // 0x50FFB0
    VectorClass * Add(unsigned int * Block, char a2);  // 0x510400
    DynamicVector * Constructor_0(unsigned int * Block, char a2);  // 0x5104A0
};
} // namespace gamemd
