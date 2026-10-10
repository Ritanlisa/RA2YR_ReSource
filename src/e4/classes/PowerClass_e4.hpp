// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply

struct PowerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int MovementZones;  // 0x34
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned int ptr_50;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    unsigned int CellStructs1;  // 0xD4
    unsigned int MapRect;  // 0xEC
    unsigned int VisibleRect;  // 0xFC
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int MaxHeight;  // 0x140
    unsigned int Crates;  // 0x148
    unsigned int MapCoordBounds;  // 0x292
    CampaignClass * ptr_1228;  // 0x1228
    CampaignClass * ptr_1260;  // 0x1260
    CampaignClass * ptr_1264;  // 0x1264
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned int IsAvailableNow;  // 0x14D8
// --- flat members (END) ---
    void checkLowPower();
    static void * checkBlackout(PowerClass * aP1);
    static char getDrain(PowerClass * aP1);
};

} // namespace gamemd
