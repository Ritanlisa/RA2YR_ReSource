// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct RocketLocomotionClass_17 {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x6647B0
    unsigned int BeginMove(int a2);  // 0x6647E0
    int UpdateMovement(int a2);  // 0x664800
    char AddRef(int a2);  // 0x664810
    char SetCapacity(int a2, unsigned int * a3);  // 0x664850
    void Destroy();  // 0x664900
    int IndexOf(unsigned int * a2);  // 0x664930
    unsigned int PointerToIndex(int a2);  // 0x664970
    char Release(int a2, unsigned int * a3);  // 0x664990
    int Launch(unsigned int * a2);  // 0x664A40
    VectorClass * Constructor(unsigned int * Block, char a2);  // 0x664A70
    DynamicVector * QueryInterface(unsigned int * Block, char a2);  // 0x664AC0
};
} // namespace gamemd
