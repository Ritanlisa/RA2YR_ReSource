// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct FoggedObjectClass_42 {
    void* vfptr;  // minimal E2 declaration
    unsigned int * loc_4E0D30(char a2);  // 0x4E0D30
    void ClearBuffer();  // 0x4E01F0
    unsigned int PointerToIndex(int a2);  // 0x4E0220
    int Seek(int a2);  // 0x4E0240
    char AddRef(int a2);  // 0x4E0580
    char Release(int a2, unsigned int * a3);  // 0x4E05C0
    void ddtor();  // 0x4E0670
    int Read(unsigned int * a2);  // 0x4E06A0
    unsigned int Write(int a2);  // 0x4E06E0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4E0700
    int FindItem(unsigned int * a2);  // 0x4E07B0
    VectorClass * QueryInterface(char a2);  // 0x4E0CE0
};
} // namespace gamemd
