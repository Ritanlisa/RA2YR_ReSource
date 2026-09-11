// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct TypeList_cptr_TerrainTypeClass {
    void* vfptr;  // minimal E2 declaration
    void GetClassIdentifier();  // 0x67A930
    unsigned int GetIndex(int a2);  // 0x67A960
    int SaveToINI(int a2);  // 0x67A980
    TypeList * Add(char a2);  // 0x67AA30
    char AddRef(int a2);  // 0x67B1F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x67B230
    void TryFreeAndClear();  // 0x67B2E0
    int IndexOf(unsigned int * a2);  // 0x67B310
    unsigned int PointerToIndex(int a2);  // 0x67B350
    char Remove(int a2, unsigned int * a3);  // 0x67B3D0
    int GetSize(unsigned int * a2);  // 0x67B4D0
    VectorClass * Constructor(char a2);  // 0x67C150
};
} // namespace gamemd
