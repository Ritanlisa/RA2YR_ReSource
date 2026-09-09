// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct TeamTypeClass_28 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x6F21B0
    unsigned int PointerToIndex(int a2);  // 0x6F21F0
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x6F2210
    char AddRef(int a2);  // 0x6F2290
    char Release(int a2, int * a3);  // 0x6F22F0
    void ddtor();  // 0x6F2400
    int Read(unsigned int * a2);  // 0x6F2440
    unsigned int Write(int a2);  // 0x6F2490
    char SetCapacity(int a2, int * a3);  // 0x6F24B0
    int FindItem(unsigned int * a2);  // 0x6F2640
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x6F2680
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x6F2720
};
} // namespace gamemd
