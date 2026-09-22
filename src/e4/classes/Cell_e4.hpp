// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Cell {
    void* vfptr;  // minimal E2 declaration
    char IsOccupied(short * a2, char a3);  // 0x419B00
    int PosToIndex();  // 0x42B1C0
    char CanPlaceBuilding(IUnknown * this, unsigned int * a2);  // 0x43B4C0
    void ApplyDamage(IUnknown * aP1, int a3, int a4, IUnknown * aP4);  // 0x481670
    void * GetNeighbourContent(unsigned int a2);  // 0x481810
    bool IsBuildable(int a2, char a3, char a4, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7);  // 0x4834A0
    BOOL IsValidHeight();  // 0x485060
    bool IsEmpty();  // 0x486380
    bool IsGroundTypeRange();  // 0x4865D0
    bool IsInRange();  // 0x486750
    bool IsInRange2();  // 0x486770
    bool IsShore();  // 0x4867B0
    char IsBuildableAdvanced();  // 0x486FF0
    BOOL HasOccupierBit(IUnknown * aP1);  // 0x4870B0
    int SearchEnemies(IUnknown * aP1);  // 0x487A10
    long long GetTraversability();  // 0x487CB0
    int GetSlopeIndex();  // 0x487D50
    bool IsBridge2();  // 0x487DF0
    bool IsValidDestination(short * a2);  // 0x4DCE80
    bool Exists(MouseClass * aP1);  // 0x5657E0
    int CoordToIndex(IUnknown * aP1);  // 0x56D430
    char SetRadar(IUnknown * aP1);  // 0x56D460
    char UpdateTileType(IUnknown * aP0, IUnknown * aP1, int a3);  // 0x56E990
    char SetTileType(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, int a5);  // 0x56EB80
    char IsPassableAllied(IUnknown * aP0, IUnknown * aP1);  // 0x578AD0
    int GetAdjacencyFlags(MouseClass * aP0);  // 0x579B70
    int GetTerrainMask(IUnknown * aP1, int a3);  // 0x57B210
    Cell * Clear();  // 0x5A9940
    char IsWalkable(unsigned short * a2, char a3);  // 0x6B5F80
    char CreateCrater(IUnknown aP2);  // 0x6D2790
    int GetAdjacentPassableMask(IUnknown * aP0, int a2);  // 0x6D8700
    unsigned short * GetHeight(BuildingTypeClass * aP1, int * a2);  // 0x4265B0
    unsigned int * GetWorldCoords(unsigned int * a2, int a3);  // 0x68BD00
    BOOL IsPassableOffset(IUnknown * aP1);  // 0x4870D0
    int PosToLinearIndex(IUnknown * aP0);  // 0x56BC50
    int DecodeFlags();  // 0x56CB80
    int GetGroundHeight(IUnknown * aP0);  // 0x578080
    bool IsPassable(IUnknown * aP0);  // 0x586360
};
} // namespace gamemd
