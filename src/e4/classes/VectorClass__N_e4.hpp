// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass__N {
    void* vfptr;  // minimal E2 declaration
    char Remove(signed int Size, char * a3);  // 0x50F9E0
    char SetCapacity(signed int Size, char * a3);  // 0x50FB20
    int Destroy_0(unsigned char * a2);  // 0x50FBD0
    VectorClass * Add(unsigned int * Block, char a2);  // 0x510360
    DynamicVector * Constructor_VectorClass_bool_(unsigned int * Block, char a2);  // 0x5103B0
    void Destroy();  // 0x50E700
    int GetItemIndex(int a2);  // 0x50E730
    char Clear(int a2);  // 0x50E750
    char AddRef(int a2);  // 0x50F9A0
    void ddtor();  // 0x50FA90
    int GetSize(unsigned char * a2);  // 0x50FAC0
    int Get(int a2);  // 0x50FB00
};
} // namespace gamemd
