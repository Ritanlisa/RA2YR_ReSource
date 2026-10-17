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
    void* vtable1;  // 0x0
    char __pad_4[9];  // 0x4
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    char __pad_18[12];  // 0x18
    void * field_24;  // 0x24
    char __pad_28[12];  // 0x28
    unsigned int MovementZones;  // 0x34
    char __pad_38[48];  // 0x38
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    char __pad_70[16];  // 0x70
    unsigned int ptr_50;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    char __pad_8C[72];  // 0x8C
    unsigned int CellStructs1;  // 0xD4
    char __pad_D8[20];  // 0xD8
    unsigned int MapRect;  // 0xEC
    char __pad_F0[12];  // 0xF0
    unsigned int VisibleRect;  // 0xFC
    char __pad_100[16];  // 0x100
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    char __pad_124[20];  // 0x124
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int MaxHeight;  // 0x140
    char __pad_144[4];  // 0x144
    unsigned int Crates;  // 0x148
    char __pad_14C[326];  // 0x14C
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3989];  // 0x293
    CampaignClass * ptr_1228;  // 0x1228
    char __pad_122C[52];  // 0x122C
    CampaignClass * ptr_1260;  // 0x1260
    CampaignClass * ptr_1264;  // 0x1264
    char __pad_1268[16];  // 0x1268
    unsigned int FoundationTypePixels;  // 0x1278
    char __pad_127C[524];  // 0x127C
    unsigned int RadarSizeFactor;  // 0x1488
    char __pad_148C[76];  // 0x148C
    unsigned int IsAvailableNow;  // 0x14D8
    char __pad_14DC[48];  // 0x14DC
    int field_150C;  // 0x150C
    char __pad_1510[16];  // 0x1510
    int field_1520;  // 0x1520
    char __pad_1524[4];  // 0x1524
    int field_1528;  // 0x1528
    char __pad_152C[4];  // 0x152C
    int field_1530;  // 0x1530
    char __pad_1534[4];  // 0x1534
    int field_1538;  // 0x1538
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void checkLowPower();
    static void * checkBlackout(PowerClass * aP1);
    static char getDrain(PowerClass * aP1);
};

} // namespace gamemd
