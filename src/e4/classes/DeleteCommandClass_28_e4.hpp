// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct DeleteCommandClass_28 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x53C4C0
    unsigned int PointerToIndex(int a2);  // 0x53C4F0
    int Seek(int a2);  // 0x53C510
    char AddRef(int a2);  // 0x53C520
    char Release(int a2, unsigned int * a3);  // 0x53C560
    void ddtor();  // 0x53C610
    int Read(unsigned int * a2);  // 0x53C640
    unsigned int Write(int a2);  // 0x53C680
    char SetCapacity(int a2, unsigned int * a3);  // 0x53C6A0
    int FindItem(unsigned int * a2);  // 0x53C750
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x53C780
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x53C7D0
};
} // namespace gamemd
