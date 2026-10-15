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
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    TechnoClass * * IsOccupied(short * a2, char a3);  // 0x419B00
    int PosToIndex(void *a1 = 0);  // 0x42B1C0
    int  CanPlaceBuilding(unsigned int * a2);  // 0x43B4C0
    int ApplyDamage(int aP1, int a3, int a4, char aP4);
    int GetNeighbourContent(unsigned int a2, void *a2_1 = 0);  // 0x481810
    int IsBuildable(int a2, char a3, char a4, int aP4, int aP5, int aP6, char aP7);  // 0x4834A0
    int IsValidHeight(void *a1 = 0);  // 0x485060
    int IsEmpty(void *a1 = 0);  // 0x486380
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
    char UpdateTileType(int16_t *aP0, int aP1, int a3);  // G57w10-S raw 0x0056E990 IUnknown 占位清除
    static char SetTileType(int16_t *a1, int a2, int a3, int a4, int a5);  // G57w10-S raw 0x0056EB80 IUnknown 占位清除
    char IsPassableAllied(int aP0, int16_t *aP1);  // G57w10-S raw 0x00578AD0 IUnknown 占位清除
    HouseClass * * GetAdjacencyFlags(MouseClass * aP0);  // 0x579B70
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
    int GetGroundHeight(unsigned int * a1);
    bool IsPassable(IUnknown * aP0);  // 0x586360
    unsigned int * IsBridge();  // 0x47c520
    unsigned int q_4C4;  // +0x4C4 flat supply (final pass)
    unsigned int q03C;  // 0x3C (offset-truth)
    unsigned int q070;  // 0x70 (offset-truth)
    unsigned char u32_11B;  // 0x11B (offset-truth)
    unsigned int u32_140;  // 0x140 (offset-truth)
    unsigned char u32_41A;  // 0x41A (offset-truth)
    unsigned int u32_5A4;  // 0x5A4 (offset-truth)
    unsigned int u32_6C4;  // 0x6C4 (offset-truth)
    unsigned char u32_703;  // 0x703 (offset-truth)
    unsigned char u32_742;  // 0x742 (offset-truth)
    unsigned char u32_746;  // 0x746 (offset-truth)
    unsigned char u32_901;  // 0x901 (offset-truth)
    unsigned int u32_C0;  // 0xC0 (offset-truth)

    unsigned char Cell_5A41[4];  /* Cell */  // X10 supply (member_lookup)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q038;  // X10 supply (member_lookup)
    int q068;  // X10 supply (member_lookup)
    int q06C;  // X10 supply (member_lookup)
    int q0E4;  // X10 supply (member_lookup)
    unsigned char q0E8[12];  /* char[12] */  // X10 supply (member_lookup)
    int q0F4;  // X10 supply (member_lookup)
    int q0F8;  // X10 supply (member_lookup)
    int q13C;  // X10 supply (member_lookup)
    int q298;  // X10 supply (member_lookup)
    int q29C;  // X10 supply (member_lookup)
    unsigned char q384;  // X10 supply (member_lookup)
    unsigned int u32_11C;  // X10 supply (member_lookup)
    int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_26;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_46C;  // X10 supply (member_lookup)
    unsigned int u32_490;  // X10 supply (member_lookup)
    unsigned int u32_4A0;  // X10 supply (member_lookup)
    unsigned int u32_78;  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    unsigned int u32_11A;  // 0x11A
};
} // namespace gamemd
