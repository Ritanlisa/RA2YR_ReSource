// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MapSeedClass_18 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x5AC4C0
    unsigned int PointerToIndex(int a2);  // 0x5AC4F0
    int GetCell(int a2);  // 0x5AC510
    char AddRef(int a2);  // 0x5ACA60
    char Release(int a2, unsigned int * a3);  // 0x5ACAA0
    void ddtor();  // 0x5ACB50
    unsigned int Generate(int a2);  // 0x5ACBC0
    char SetCapacity(int a2, unsigned int * a3);  // 0x5ACBE0
    int FindItem(unsigned int * a2);  // 0x5ACC90
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5AD430
    DynamicVector * Constructor_VectorClass__WIN32_FIND_DATAA___(unsigned int * Block, char a2);  // 0x5AD480
};
} // namespace gamemd
