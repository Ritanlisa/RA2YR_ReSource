// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#ifndef GAMEMD_E4_FLAT_DynamicVector
#define GAMEMD_E4_FLAT_DynamicVector 1  // G57c2: suppress minimal_carriers.hpp twin
#endif


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Constructor_VectorClass_MovieHandle___;  // G42.36 fwd supply
class Constructor_VectorClass_VocClass___;  // G42.36 fwd supply
class Constructor_VectorClass_ThemeControl___;  // G42.36 fwd supply
class Constructor_VectorClass_TEventClass___;  // G42.36 fwd supply
class Constructor_VectorClass_TagTypeClass___;  // G42.36 fwd supply
struct BufferIOFileClass;  // fix_fwd_type_supply
struct DynamicVector {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char __pad_0[4];  // 0x0
    unsigned int *Items;  // 0x4
    unsigned int DynamicVector_field_0x8;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char tail_E;  // 0xE
    char __pad_F[1];  // 0xF
    unsigned int DynamicVector_field_0x10;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned char __pad_018;  // 0x18
    char __pad_19[3];  // 0x19
    int DynamicVector_field_0x1C;  // 0x1C
    int q020;  // 0x20
    char __pad_24[4];  // 0x24
    int DynamicVector_field_0x28;  // 0x28
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Copy(VectorClass_flat * aP1, void *a2_1);  // 0x5AC430
    char AddItem(unsigned int *aP1);  // 0x413A70
    unsigned int * Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1);  // 0x42F670
    char RemoveItem(int aP1, void *a2 = 0);  // 0x45ADD0
    char Add_Alt(unsigned int *aP1, void *a2 = 0);  // 0x477EC0
    int GetOrGrow(int aP1);
    char Add_Alt4(unsigned int *aP1, void *a2 = 0);  // 0x5253B0
    char Add_Alt2(DynamicVector * aP1);  // 0x538780
    char Add_Alt3(VectorClass_flat * aP1);  // 0x5AD7D0
    char GrowCapacity();  // 0x624810
    int Read(TechnoTypeClass * aP1, void *a2_1, void *a3 = 0);  // 0x67A520
    int Read_Alt(TechnoTypeClass * aP1);  // 0x67A6E0
    unsigned int *  Constructor_VoxelAnim(int a2, int a3);  // 0x67AC70
    char Add2(unsigned int *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x67AD80
    char RemoveAt(int a2, void *a2_2);  // 0x67C360
    char  RemoveAt2(int a2);  // 0x67C3F0
    char Add(DynamicVector * aP1, void *a2_1, void *a3_1);  // 0x6C6400
    unsigned int * Constructor_Techno(int a2, int a3, void *a3_1 = 0);  // 0x7342D0
    char EnsureCapacity(void *a1 = 0);  // 0x7AF000
    AbstractClass * * Release(int a2, int * a3);
    AbstractClass * * SetCapacity(int a2, int * a3);
    void * Constructor_ConvertClass(void ** Block, char a2);
    int Destroy(void *a1_1);
    unsigned int GetItemIndex(int a2);
    int Get(int a2, void *a2_2);
    void Remove(void *a1_1, void *a1 = 0);
    int GetSize(unsigned int * a2);
    unsigned int GetCapacity(int a2);
    int FindItemIndex(unsigned int * a2);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2);
    char AddRef(int a2);
    DynamicVector * Constructor(unsigned int * Block, char a2, void *a3_1, void *a1 = 0);
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
    VectorClass_flat * Destructor(unsigned int * Block, char a2);
    AbstractClass * * Release(int a2, unsigned int * a3);
    void * Constructor_WonlineStringDialogControl(DialogControl_OwnerDraw * Block, char a2);
    AbstractClass * * SetCapacity(int a2, unsigned int * a3);
    wchar_t * ddtor(void *a1_1, void *a2_1);
    unsigned int LoadState(int a2);
    int SaveState(int a2);
    int Spawn(unsigned int * a2);
    unsigned int BeginMove(int a2);
    int IndexOf(unsigned int * a2);
    unsigned int PointerToIndex(int a2);
    int Launch(unsigned int * a2);
    AbstractClass * * Release(int a2, char * a3);
    AbstractClass * * SetCapacity(int a2, char * a3);
    int FindItem(unsigned int * a2);
    void ClearBuffer(void *a1_1);
    int Seek(int a2, void *a2_2, void *a3_1);
    int Read(TechnoTypeClass * aP1, void *a2_1);
    unsigned int Write(int a2);
    DynamicVector * Constructor_VectorClass_KamikazeControl___(unsigned int * Block, char a2);
    AbstractClass * * SetCapacity_0(int a2, char * a3);
    AbstractClass * * Remove(CCINIClass * aP1, unsigned char * a2);
    void Clear_49E9B0();
    unsigned int GetCount(int a2);
    unsigned int * Destructor_0(char a2);
    void Clear_627D20();
    void Clear_627D80();
    int GetItem(int a2, int a3);
    char IsEqualTo(int a2);
    int ProcessAll(int a2);
    DynamicVector * Destructor_1(unsigned int * Block, char a2);
    DynamicVector * Destructor_2(unsigned int * Block, char a2);
    int Clear(int a2, int a3);
    char SetCapacity_0(int a2, unsigned int * a3);
    int FindItemIndex_0(unsigned int * a2);
    char  SetCapacity_1(int a2, char * a3);  // 0x58A2A0
    int FindItemIndex_1(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_bool_(unsigned int * Block, char a2);
    unsigned int LoadTypeData(int a2);
    char * Constructor_0(unsigned int * Block, char a2, void *a3_1);
    DynamicVector * Constructor_1(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_double_(unsigned int * Block, char a2);
    unsigned int * Count(unsigned int * a2, int a3);
    void Set(void *a1_1, void *a2_1, void *a3_1);
    DynamicVector * Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2);
    char SetAt(int a2, unsigned int * a3);
    VectorClass_flat * GetAt(unsigned int * Block, char a2);
    int j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7);
    unsigned int * j_vt00(char a2);
    VectorClass_flat * Constructor_VectorClass_MapStage___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TagTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_VocClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2);
    wchar_t * ddtor(void *a1_1);  // 0x4EA390
    char Remove(signed int Size, char * a3);
#pragma pack(pop)
};
} // namespace gamemd
