// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct CStreamClass_16 {
    void* vfptr;  // minimal E2 declaration
    int Seek(int a2);  // 0x4A4B20
    char AddRef(int a2);  // 0x4A4B30
    char Release(int a2, unsigned int * a3);  // 0x4A4B70
    void ddtor();  // 0x4A4C20
    int Read(unsigned int * a2);  // 0x4A4C50
    unsigned int Write(int a2);  // 0x4A4C90
    VectorClass * QueryInterface(char a2);  // 0x4A4D90
};
} // namespace gamemd
