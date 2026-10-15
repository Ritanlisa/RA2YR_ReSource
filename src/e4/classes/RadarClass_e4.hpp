// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MapClass;  // fix_fwd_type_supply
struct GadgetClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply

struct RadarClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int outBuffer;  // 0x24
    unsigned int MovementZones;  // 0x34
    VectorClass * ptr_50;  // 0x50
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned int MapRect;  // 0xEC
    unsigned int VisibleRect;  // 0xFC
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MaxLevel;  // 0x138
    unsigned int MapCoordBounds;  // 0x292
    CampaignClass * ptr_1228;  // 0x1228
    CampaignClass * ptr_1260;  // 0x1260
    CampaignClass * ptr_1264;  // 0x1264
    unsigned int IsAvailableNow;  // 0x14D8
// --- flat members (END) ---
    static void InitializeHashTable(void *aP1);
    static int SetViewMode(void *aP1, int a2, int a3);
    static int SetFlag(void *aP1, int a2);
    static int SetGlobal(void *aP1);
    static int IsActiveMode(void *aP1);
    CampaignClass * Destruct(void *a1 = 0);
    int GetBlip(int a1, int a2, int a3, ObjectClass * aP3);
    unsigned int * initRadarSurface();
    static void Destru_vt50();
    static int Destru_vt05(RadarClass * aP1);
    static char UpdateFoundationShapesCustom(RadarClass * aP1);
    char  Destru_vt16(char a2);  // 0x653100
    char __pad_1264[16];  // 0x1264 (ml)
    CampaignClass* q122C;  // 0x122C (offset-truth) [X30:type_map]

    VectorClass* RadarClass_field_0x1224;  // X10 supply (member_types)
    unsigned int u32_C;  // X10 supply (member_lookup)

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_122C;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int u8_1231;  // X10 supply (member_lookup)
    unsigned char __pad_028;  // 0x28 [X30:canon]
    unsigned char __pad_038;  // 0x38 [X30:canon]
    unsigned char __pad_054;  // 0x54 [X30:canon]
    int __pad_070;  // 0x70 [X30:type_map]
    unsigned char __pad_0F0;  // 0xF0 [X30:canon]
    unsigned char __pad_100;  // 0x100 [X30:canon]
    unsigned char __pad_124;  // 0x124 [X30:canon]
    unsigned char __pad_13C;  // 0x13C [X30:canon]
    unsigned char __pad_296;  // 0x296 [X30:canon]
    unsigned char __pad_1268;  // 0x1268 [X30:canon]
    void* __pad_14DC;  // 0x14DC [X30:type_map]
    unsigned int RadarCells;  // [X30:default]
    CampaignClass* RadarClass_field_0x1228;  // 0x1228 [X30:type_map]
    CampaignClass* RadarClass_field_0x1260;  // 0x1260 [X30:type_map]
    unsigned int RadarPoints;  // [X30:default]
    unsigned int RadarSoundChannel;  // [X30:default]
    unsigned int radarSizeFactor;  // [X30:default]
    int u8_1269;  // 0x1269 [X30:type_map]
};

} // namespace gamemd
