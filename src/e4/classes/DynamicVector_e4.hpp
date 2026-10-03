// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class GetItemIndex_1;  // G42.36 fwd supply
class Destroy_1;  // G42.36 fwd supply
class GetItemIndex_0;  // G42.36 fwd supply
class Destroy_0;  // G42.36 fwd supply
class Clear;  // G42.36 fwd supply
class Constructor_VectorClass_EMPulseClass___;  // G42.36 fwd supply
class Constructor_VectorClass_EgoClass___;  // G42.36 fwd supply
class Constructor_VectorClass_EBolt___;  // G42.36 fwd supply
class Constructor_VectorClass_ConvertClass___;  // G42.36 fwd supply
class Constructor_VectorClass_DamageGroup___;  // G42.36 fwd supply
class Destruct;  // G42.36 fwd supply
class Constructor;  // G42.36 fwd supply
class AddRef;  // G42.36 fwd supply
class Constructor_VectorClass_ScriptClass___;  // G42.36 fwd supply
class QueryInterface;  // G42.36 fwd supply
class FindItemIndex;  // G42.36 fwd supply
class GetCapacity;  // G42.36 fwd supply
class GetSize;  // G42.36 fwd supply
class Remove;  // G42.36 fwd supply
class Get;  // G42.36 fwd supply
class GetItemIndex;  // G42.36 fwd supply
class Destroy;  // G42.36 fwd supply
class Constructor_ConvertClass;  // G42.36 fwd supply
class Block;  // G42.36 fwd supply
class SetCapacity;  // G42.36 fwd supply
class Release;  // G42.36 fwd supply
struct BufferIOFileClass;  // fix_fwd_type_supply
struct DynamicVector {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    AbstractClass* q008;  // 0x8
    char q00B[4];  // 0xB
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
    void* q010;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned char q018;  // 0x18
    AbstractClass* q01C;  // 0x1C
    unsigned int u32_1D;  // 0x1D
    int q020;  // 0x20
    unsigned char q024;  // 0x24
    void* q028;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    unsigned int DynamicVector_field_0x1;
    unsigned int DynamicVector_field_0x10;
    unsigned int DynamicVector_field_0x1C;
    unsigned int DynamicVector_field_0x8;
    unsigned int *__pad_0;
    unsigned int *__pad_14;
    unsigned int *__pad_20;
    unsigned int *__pad_C;
// --- flat members (END) ---
    unsigned int * Copy(VectorClass_flat * aP1, void *a2_1);  // 0x5AC430
    char AddItem(unsigned int *aP1);  // 0x413A70
    unsigned int * Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1);  // 0x42F670
    char RemoveItem(int aP1);  // 0x45ADD0
    char Add_Alt(unsigned int *aP1);  // 0x477EC0
    int GetOrGrow(int aP1);
    char Add_Alt4(unsigned int *aP1);  // 0x5253B0
    char Add_Alt2(DynamicVector * aP1);  // 0x538780
    char Add_Alt3(VectorClass_flat * aP1);  // 0x5AD7D0
    char GrowCapacity();  // 0x624810
    int Read(TechnoTypeClass * aP1, void *a2_1);  // 0x67A520
    int Read_Alt(TechnoTypeClass * aP1);  // 0x67A6E0
    unsigned int * Constructor_VoxelAnim(int a2, int a3);  // 0x67AC70
    char Add2(unsigned int *aP1);  // 0x67AD80
    char RemoveAt(int a2, void *a2_2);  // 0x67C360
    char RemoveAt2(int a2);  // 0x67C3F0
    char Add(DynamicVector * aP1, void *a2_1, void *a3_1);  // 0x6C6400
    unsigned int * Constructor_Techno(int a2, int a3);  // 0x7342D0
    char EnsureCapacity();  // 0x7AF000
    char Add(int a2, void *a2_2, void *a3_1);
    AbstractClass * * Release(int a2, int * a3);
    AbstractClass * * SetCapacity(int a2, int * a3);
    void * Constructor_ConvertClass(void ** Block, char a2);
    int Destroy(void *a1_1);
    unsigned int GetItemIndex(int a2);
    int Get(int a2, void *a2_2);
    void Remove(void *a1_1);
    int GetSize(unsigned int * a2);
    unsigned int GetCapacity(int a2);
    int FindItemIndex(unsigned int * a2);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2);
    char AddRef(int a2);
    DynamicVector * Constructor(unsigned int * Block, char a2, void *a3_1);
    DynamicVector * Destruct(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_EBolt___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_EMPulseClass___(unsigned int * Block, char a2);
    unsigned int * Clear(unsigned int * a2, int a3);
    void Destroy_0();
    unsigned int GetItemIndex_0(int a2);
    void Destroy_1();
    unsigned int GetItemIndex_1(int a2);
};
} // namespace gamemd
