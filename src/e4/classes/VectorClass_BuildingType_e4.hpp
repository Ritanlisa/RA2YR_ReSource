// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_BuildingType {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x50E6A0
    TypeList * Constructor(unsigned int * Block, char a2);  // 0x50E7E0
    char Set(int a2, unsigned int * a3);  // 0x50E950
    char SetCapacity(int a2, unsigned int * a3);  // 0x50F780
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x50F8C0
    int FindItemIndex_0(unsigned int * a2);  // 0x50F970
    VectorClass * Get(unsigned int * Block, char a2);  // 0x50FFF0
    VectorClass * Constructor_0(unsigned int * Block, char a2);  // 0x510310
    int Count(int a2);  // 0x50E4F0
    unsigned int GetItemIndex(int a2);  // 0x50E6D0
    int GetElement(int a2);  // 0x50E6F0
    char AddRef(int a2);  // 0x50E910
    int GetSize(unsigned int * a2);  // 0x50EA30
    unsigned int GetCapacity(int a2);  // 0x50EA70
    char CompareVectors(int a2);  // 0x50F740
    int FindItemIndex(unsigned int * a2);  // 0x50F860
    unsigned int GetItemIndex_0(int a2);  // 0x50F8A0
};
} // namespace gamemd
