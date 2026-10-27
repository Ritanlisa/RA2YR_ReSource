// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_MATH_ALIASES)  // G42.34j + G57a1
// conventions exist (using-bridge TUs vs independent gamemd:: fwd TUs like
// utility_ext.hpp:23); a static decl cannot satisfy both. Tree TUs must order
// this header AFTER their tree headers (render/structure TU pattern).
struct AbstractClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct CellStruct;  // fix_fwd_type_supply
struct TechnoClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
#endif  // GAMEMD_TREE_UNIVERSE / GAMEMD_E4_MATH_ALIASES (Cell fwd block)

struct Cell {
#pragma pack(push, 1)  // X60: binary-packed layout
    int Cell_field_0x0;  // 0x0
    int q004;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    char __pad_10[8];  // 0x10
    int u32_18;  // 0x18
    unsigned int q01C;  // 0x1C
    char __pad_20[4];  // 0x20
    unsigned char u32_24;  // 0x24
    char __pad_25[1];  // 0x25
    unsigned int u32_26;  // 0x26
    char __pad_2A[10];  // 0x2A
    unsigned int q034;  // 0x34
    int q038;  // 0x38
    char __pad_3C[8];  // 0x3C
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    char __pad_4C[28];  // 0x4C
    int q068;  // 0x68
    int q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    char __pad_74[4];  // 0x74
    unsigned char u32_78;  // 0x78
    char __pad_79[3];  // 0x79
    char __pad_7C[5];  // 0x7C
    unsigned char u32_81;  // 0x81
    char __pad_82[62];  // 0x82
    unsigned int u32_C0;  // 0xC0
    char __pad_C4[32];  // 0xC4
    int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    unsigned char u32_EC;  // 0xEC
    char __pad_ED[3];  // 0xED
    char __pad_F0[4];  // 0xF0
    int q0F4;  // 0xF4
    int q0F8;  // 0xF8
    char __pad_FC[24];  // 0xFC
    unsigned int q114;  // 0x114
    char __pad_118[2];  // 0x118
    unsigned char u32_11A;  // 0x11A
    char Cell_field_0x11B[4];  // 0x11B
    char __pad_11F[5];  // 0x11F
    unsigned char u32_124;  // 0x124
    char __pad_125[3];  // 0x125
    unsigned char u8_128;  // 0x128
    char __pad_129[3];  // 0x129
    int q12C;  // 0x12C
    char __pad_130[12];  // 0x130
    int q13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    char __pad_144[216];  // 0x144
    unsigned int u32_21C;  // 0x21C
    char __pad_220[44];  // 0x220
    int q24C;  // 0x24C
    char __pad_250[72];  // 0x250
    int q298;  // 0x298
    int q29C;  // 0x29C
    char __pad_2A0[378];  // 0x2A0
    unsigned char u32_41A;  // 0x41A
    char __pad_41B[261];  // 0x41B
    unsigned int u32_520;  // 0x520
    char __pad_524[68];  // 0x524
    unsigned int u32_568;  // 0x568
    char __pad_56C[56];  // 0x56C
    unsigned int u32_5A4;  // 0x5A4
    char __pad_5A8[284];  // 0x5A8
    unsigned int u32_6C4;  // 0x6C4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    TechnoClass * * IsOccupied(short * a2, char a3);  // 0x419B00
    int PosToIndex(void *a1 = 0);  // 0x42B1C0
    int  CanPlaceBuilding(unsigned int * a2);  // 0x43B4C0
    int ApplyDamage(int aP1, int a3, int a4, char aP4);
    int GetNeighbourContent(unsigned int a2, void *a2_1 = 0);  // 0x481810
    int IsBuildable(int a2, char a3, char a4, int aP4, int aP5, int aP6, char aP7);  // 0x4834A0
    int IsValidHeight();  // 0x485060
    static int IsEmpty(void *a1 = 0);  // 0x486380
    int IsGroundTypeRange();  // 0x4865D0
    int IsInRange(void *a1 = 0);  // 0x486750
    int IsInRange2(void *a1 = 0);  // 0x486770
    int IsShore();  // 0x4867B0
    int IsBuildableAdvanced();  // 0x486FF0
    int HasOccupierBit(char aP1);
    int SearchEnemies(int aP1);  // G57w10-S raw 0x00487A10 IUnknown 占位清除
    long long GetTraversability();  // 0x487CB0
    int GetSlopeIndex();  // 0x487D50
    int IsBridge2();  // 0x487DF0
    Coord * * IsValidDestination(short * a2);  // 0x4DCE80
    int Exists(MouseClass * aP1);  // 0x5657E0
    int CoordToIndex(int16_t *aP1);
    int SetRadar(int16_t *aP1);
    static char UpdateTileType(int16_t *aP0, int aP1, int a3);  // G57w10-S raw 0x0056E990 IUnknown 占位清除
    static char SetTileType(int16_t *a1, int a2, int a3, int a4, int a5);  // G57w10-S raw 0x0056EB80 IUnknown 占位清除
    char IsPassableAllied(int aP0, int16_t *aP1);  // G57w10-S raw 0x00578AD0 IUnknown 占位清除
    static HouseClass * * GetAdjacencyFlags(int aP0);  // 0x579B70 (IDA: int __stdcall GetAdjacencyFlags(int))
    int GetTerrainMask(int *aP1, int a3);  // 0x57B210
    void * Clear(Cell *aP1);
    int  IsWalkable(unsigned short * a2, char a3);  // 0x6B5F80
    static void * CreateCrater(int a1, int a2, int a3, int a4, int a5);
    int GetAdjacentPassableMask(int16_t *aP0, int a2);  // G57w10-S raw 0x006D8700 IUnknown 占位清除
    unsigned short * GetHeight(int *aP1, int *a2);  // 0x4265B0
    unsigned int * GetWorldCoords(unsigned int *v5, int a3, void *a3_1 = 0);  // 0x68BD00
    BOOL IsPassableOffset(int aP1);  // 0x4870D0
    int PosToLinearIndex(IUnknown * aP0);  // G57w10-S raw 0x0056BC50 IUnknown 占位清除
    int DecodeFlags();  // 0x56CB80
    static int GetGroundHeight(unsigned int * a1);
    bool IsPassable(IUnknown * aP0);  // 0x586360
    unsigned int * IsBridge();  // 0x47c520
#pragma pack(pop)
};
} // namespace gamemd
