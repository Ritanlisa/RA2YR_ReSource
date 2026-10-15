// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply

struct VoxelAnimClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char needsSave;  // 0x20
    ObjectClass* nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    char health[4];  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    Coord* location;  // 0x9C [X30:type_map]
    unsigned char alignmentPadding69;  // 0x105
    unsigned int Audio4;  // 0x1D4
    unsigned int Audio3;  // 0x276
    unsigned int Duration;  // 0x320
    DynamicVectorClass * ptr_458;  // 0x458
    unsigned int Invisible;  // 0x660
// --- flat members (END) ---
    AbstractClass * * GetFrameCount(int * a2);
    Coord * * ProcessAnim(int * a2, unsigned int * a3);
    VoxelAnimClass * DrawVoxel(char a2);
    char UpdateMatrix();
    float * QuaternionToMatrix(float * a2, void *a2_2);
    int CleanupMembers(void *a1);
    int Constructor(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6 = 0);
    int DrawVoxelFrame(int a2, int a3, int a4);
    int LoadFrame();
    int Reset(void *a1, void *a2);
    int SaveLoad_Prefix(ObjectClass * aP1, int aP1a);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn3();
    int StubReturn328();
    int StubReturn41();
    int StubReturnFalse(int a1);
    int ddtor(int a1, unsigned int * a2);
    unsigned int ProcessFrame();
    int VoxelAnimClass_Update();
    int Constructor(void *a1, void *a2, void *a3, void *a4, void *a5);
    VoxelAnimClass * DrawVoxel(void * Block, char a2);
    char __pad_98[104];  // 0x98 (ml)

    unsigned char __pad_0A0;  // X10 supply (csp_canon_members)
    unsigned int q0A4;  // X10 supply (member_lookup)
    int q104;  // X10 supply (member_lookup)
    int q108;  // X10 supply (member_lookup)
    unsigned int q13C;  // X10 supply (member_lookup)
    int q140;  // X10 supply (member_lookup)
    unsigned int u32_100;  // X10 supply (member_lookup)
    unsigned int q0D0;  // 0xD0
    unsigned int q0CC;  // 0xCC
    unsigned int u32_C8;  // 0xC8
    unsigned char __pad_018;  // 0x18 [X30:canon]
    unsigned char __pad_024;  // 0x24 [X30:canon]
    unsigned char __pad_038;  // 0x38 [X30:canon]
    unsigned char __pad_080;  // 0x80 [X30:canon]
    unsigned char __pad_08C;  // 0x8C [X30:canon]
    unsigned char __pad_095;  // 0x95 [X30:canon]
    unsigned char __pad_109;  // 0x109 [X30:canon]
    unsigned char __pad_1D8;  // 0x1D8 [X30:canon]
    unsigned char __pad_27A;  // 0x27A [X30:canon]
    unsigned char __pad_324;  // 0x324 [X30:canon]
    unsigned char __pad_45C;  // 0x45C [X30:canon]
    unsigned char __pad_664;  // 0x664 [X30:canon]
    unsigned int AbstractClass_10C;  // [X30:default]
    unsigned int ParticleSystemClass_110;  // [X30:default]
    Mixer* q114;  // 0x114 [X30:type_map]
    unsigned int q_B0;  // [X30:default]
};

} // namespace gamemd
