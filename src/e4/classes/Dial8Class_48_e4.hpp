// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Dial8Class_48 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x4A7D20
    int Seek(int a2);  // 0x4A7D70
    char AddRef(int a2);  // 0x4A7D80
    char Release(int a2, unsigned int * a3);  // 0x4A7DC0
    void ddtor();  // 0x4A7E70
    int Read(unsigned int * a2);  // 0x4A7EA0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4A7F00
    int FindItem(unsigned int * a2);  // 0x4A7FB0
    VectorClass * QueryInterface(char a2);  // 0x4A8030
    DynamicVector * Constructor_VectorClass_DiskLaserClass___(char a2);  // 0x4A8080
    unsigned int PointerToIndex(int a2);  // 0x4A7D50
    unsigned int Write(int a2);  // 0x4A7EE0
};
} // namespace gamemd
