// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_IsometricTileClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x40C820
    unsigned int GetItemIndex(int a2);  // 0x40C850
    int Get(int a2);  // 0x40C870
    char Add(int a2);  // 0x40C880
    char Release(int a2, unsigned int * a3);  // 0x40C8C0
    void Remove();  // 0x40C970
    int GetSize(unsigned int * a2);  // 0x40C9A0
    unsigned int GetCapacity(int a2);  // 0x40C9E0
    char SetCapacity(int a2, unsigned int * a3);  // 0x40CA00
    int FindItemIndex(unsigned int * a2);  // 0x40CAB0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40CAE0
    int GetItem();  // 0x40CC00
    void TryFreeAndClear();  // 0x40CC70
    unsigned int GetPtrOffset(int a2);  // 0x40CCA0
    int FindValue(unsigned int * a2);  // 0x40CF00
};
} // namespace gamemd
