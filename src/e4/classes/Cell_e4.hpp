// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct CellStruct;  // fix_fwd_type_supply
struct TechnoClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct Cell {
// --- flat members (BEGIN) ---
    Cell* q000;  // 0x0
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q01E;  // 0x1E
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u16_26;  // 0x26
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q038;  // 0x38
    unsigned int q03B;  // 0x3B
    unsigned char q03F;  // 0x3F
    unsigned char q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    unsigned int u32_C4;  // 0xC4
    void* q0E4;  // 0xE4
    unsigned char q0E8;  // 0xE8
    unsigned int u32_EC;  // 0xEC
    void* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
    unsigned char q0FC;  // 0xFC
    unsigned char q100;  // 0x100
    void* q104;  // 0x104
    void* q108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char u8_11C;  // 0x11C
    unsigned char q11F;  // 0x11F
    unsigned char q120;  // 0x120
    unsigned int u32_124;  // 0x124
    unsigned int q128;  // 0x128
    void* q12C;  // 0x12C
    unsigned int u32_12E;  // 0x12E
    unsigned int u32_12F;  // 0x12F
    unsigned char q130;  // 0x130
    unsigned int u32_131;  // 0x131
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    void* q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q160;  // 0x160
    unsigned char q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned char q16C;  // 0x16C
    unsigned char q180;  // 0x180
    unsigned char q184;  // 0x184
    unsigned char q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int u32_1A4;  // 0x1A4
    unsigned char q1A8;  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    unsigned char q1B0;  // 0x1B0
    unsigned char q1B4;  // 0x1B4
    unsigned int u32_21C;  // 0x21C
    void* q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    void* q244;  // 0x244
    void* q248;  // 0x248
    void* q24C;  // 0x24C
    unsigned char q250;  // 0x250
    unsigned char q258;  // 0x258
    void* q260;  // 0x260
    void* q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    void* q298;  // 0x298
    void* q29C;  // 0x29C
    unsigned int Cell_field_0x0;
    unsigned int *Cell_field_0x11B;
    unsigned int Cell_field_0x140;
    unsigned int Cell_field_0x38;
    unsigned int Cell_field_0xE4;
    unsigned int *__pad_1C;
    unsigned int *__pad_3C;
    unsigned int *__pad_70;
    unsigned int *__pad_E8;
    unsigned int *__pad_FC;
    unsigned int u32_5A4;
    unsigned int u32_6C4;
    unsigned int u32_901;
    unsigned int u32_11B;
    unsigned int u32_140;
    unsigned int u32_41A;
    // dup-member: unsigned int HasOccupierBit;
// --- flat members (END) ---
    TechnoClass * * IsOccupied(short * a2, char a3);  // 0x419B00
    int PosToIndex(void *a1_1);  // 0x42B1C0
    int CanPlaceBuilding(unsigned int * a2);  // 0x43B4C0
    void ApplyDamage(int aP1, int a3, int a4, char aP4);
    int GetNeighbourContent(unsigned int a2);  // 0x481810
    int IsBuildable(int a2, char a3, char a4, int aP4, int aP5, int aP6, char aP7);  // 0x4834A0
    int IsValidHeight(void *a1_1);  // 0x485060
    void IsEmpty(void *a1_1);  // 0x486380
    int IsGroundTypeRange(void *a1_1);  // 0x4865D0
    int IsInRange(void *a1_1);  // 0x486750
    int IsInRange2(void *a1_1);  // 0x486770
    void IsShore(void *a1_1);  // 0x4867B0
    int IsBuildableAdvanced(void *a1_1);  // 0x486FF0
    int HasOccupierBit(char aP1);
    int SearchEnemies(IUnknown * aP1);  // 0x487A10
    long long GetTraversability();  // 0x487CB0
    int GetSlopeIndex();  // 0x487D50
    int IsBridge2();  // 0x487DF0
    Coord * * IsValidDestination(short * a2);  // 0x4DCE80
    int Exists(MouseClass * aP1);  // 0x5657E0
    int CoordToIndex(int16_t *aP1);
    int SetRadar(int16_t *aP1);
    AbstractClass * * UpdateTileType(IUnknown * aP0, IUnknown * aP1, int a3);  // 0x56E990
    ObjectClass * * SetTileType(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, int a5);  // 0x56EB80
    int IsPassableAllied(IUnknown * aP0, IUnknown * aP1);  // 0x578AD0
    HouseClass * * GetAdjacencyFlags(MouseClass * aP0);  // 0x579B70
    int GetTerrainMask(int *aP1, int a3);  // 0x57B210
    void * Clear(void *a1_1);  // 0x5A9940
    int IsWalkable(unsigned short * a2, char a3);  // 0x6B5F80
    void* CreateCrater(IUnknown aP2, void *a2_1, void *a3_1, void *a4_1, void *a5_1);  // 0x6D2790
    CellStruct * * GetAdjacentPassableMask(IUnknown * aP0, int a2);  // 0x6D8700
    unsigned short * GetHeight(int *aP1, int *a2);  // 0x4265B0
    unsigned int * GetWorldCoords(unsigned int *a2, int a3);  // 0x68BD00
    BOOL IsPassableOffset(int aP1);  // 0x4870D0
    int PosToLinearIndex(IUnknown * aP0);  // 0x56BC50
    int DecodeFlags();  // 0x56CB80
    int GetGroundHeight(unsigned int * a1);  // 0x578080
    static int IsPassable(unsigned int *a1);  // 0x586360
    unsigned int * IsBridge();  // 0x47c520
};
} // namespace gamemd
