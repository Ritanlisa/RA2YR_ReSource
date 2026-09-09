// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct DynamicVector {
    void* vfptr;  // minimal E2 declaration
    char AddItem(VectorClass * aP1);  // 0x413A70
    unsigned int * Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2);  // 0x42F670
    char RemoveItem(IUnknown * aP1);  // 0x45ADD0
    char Add_Alt(VectorClass * aP1);  // 0x477EC0
    int GetOrGrow(DynamicVector * aP1);  // 0x49FAE0
    char Add_Alt4(VectorClass * aP1);  // 0x5253B0
    char Add_Alt2(DynamicVector * aP1);  // 0x538780
    unsigned int * Copy(VectorClass * aP1);  // 0x5AC430
    char Add_Alt3(VectorClass * aP1);  // 0x5AD7D0
    char GrowCapacity();  // 0x624810
    int Read(TechnoTypeClass * aP1);  // 0x67A520
    int Read_Alt(TechnoTypeClass * aP1);  // 0x67A6E0
    unsigned int * Constructor_VoxelAnim(int a2, int a3);  // 0x67AC70
    char Add2(VectorClass * aP1);  // 0x67AD80
    char RemoveAt(int a2);  // 0x67C360
    char RemoveAt2(int a2);  // 0x67C3F0
    char Add(DynamicVector * aP1);  // 0x6C6400
    unsigned int * Constructor_Techno(int a2, int a3);  // 0x7342D0
    char EnsureCapacity();  // 0x7AF000
};
} // namespace gamemd
