// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MSFont_18 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x5D5080
    unsigned int PointerToIndex(int a2);  // 0x5D50B0
    int GetSize(int a2);  // 0x5D50D0
    void Destroy();  // 0x5D50E0
    unsigned int PointerToIndex8(int a2);  // 0x5D5110
    char AddRef(int a2);  // 0x5D5150
    char Release(int a2, unsigned int * a3);  // 0x5D5190
    void ddtor();  // 0x5D5240
    int Create(unsigned int * a2);  // 0x5D5270
    unsigned int Draw(int a2);  // 0x5D52B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x5D52D0
    int FindItem(unsigned int * a2);  // 0x5D5380
    char SetCapacity8(int a2, unsigned int * a3);  // 0x5D55A0
    int FindPair8(unsigned int * a2);  // 0x5D56A0
    VectorClass * QueryInterface(char a2);  // 0x5D56E0
    DynamicVector * Constructor_VectorClass_HWND_____(char a2);  // 0x5D5730
    DynamicVector * Constructor_VectorClass_AcceleratorTracker_(char a2);  // 0x5D57D0
};
} // namespace gamemd
