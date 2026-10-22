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
    void * ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    int q010;  // 0x10
    char __pad_14[16];  // 0x14
    unsigned int outBuffer;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[11];  // 0x29
    unsigned int MovementZones;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[23];  // 0x39
    VectorClass * ptr_50;  // 0x50
    unsigned char __pad_054;  // 0x54
    char __pad_55[11];  // 0x55
    int u32_60;  // 0x60
    char __pad_64[4];  // 0x64
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned int __pad_070;  // 0x70
    char __pad_74[60];  // 0x74
    int q0B0;  // 0xB0
    char __pad_B4[8];  // 0xB4
    int q0BC;  // 0xBC
    char __pad_C0[44];  // 0xC0
    unsigned int MapRect;  // 0xEC
    unsigned char __pad_0F0;  // 0xF0
    char __pad_F1[11];  // 0xF1
    unsigned int VisibleRect;  // 0xFC
    unsigned char __pad_100;  // 0x100
    char __pad_101[15];  // 0x101
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned char __pad_124;  // 0x124
    char __pad_125[19];  // 0x125
    unsigned int MaxLevel;  // 0x138
    unsigned char __pad_13C;  // 0x13C
    char __pad_13D[341];  // 0x13D
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3];  // 0x293
    unsigned char __pad_296;  // 0x296
    char __pad_297[649];  // 0x297
    int q520;  // 0x520
    char __pad_524[148];  // 0x524
    int q5B8;  // 0x5B8
    char __pad_5BC[312];  // 0x5BC
    int q6F4;  // 0x6F4
    char __pad_6F8[2800];  // 0x6F8
    int q11E8;  // 0x11E8
    int u32_11EC;  // 0x11EC
    int q11F0;  // 0x11F0
    int q11F4;  // 0x11F4
    int q11F8;  // 0x11F8
    int q11FC;  // 0x11FC
    int q1200;  // 0x1200
    int q1204;  // 0x1204
    char __pad_1208[20];  // 0x1208
    int u32_121C;  // 0x121C
    int u32_1220;  // 0x1220
    VectorClass * q1224;  // 0x1224
    CampaignClass * ptr_1228;  // 0x1228
    unsigned char __pad_122C;  // 0x122C
    char __pad_122D[4];  // 0x122D
    unsigned char u8_1231;  // 0x1231
    char __pad_1232[10];  // 0x1232
    int u32_123C;  // 0x123C
    int u32_1240;  // 0x1240
    int u32_1244;  // 0x1244
    int q1248;  // 0x1248
    int q124C;  // 0x124C
    int q1250;  // 0x1250
    int q1254;  // 0x1254
    int u32_1258;  // 0x1258
    int q125C;  // 0x125C
    CampaignClass * ptr_1260;  // 0x1260
    char __pad_1264[5];  // 0x1264
    unsigned char u8_1269;  // 0x1269
    char __pad_126A[10];  // 0x126A
    int u32_1274;  // 0x1274
    int q1278;  // 0x1278
    char __pad_127C[524];  // 0x127C
    int u32_1488;  // 0x1488
    char __pad_148C[4];  // 0x148C
    int u32_1490;  // 0x1490
    int q1494;  // 0x1494
    int u32_1498;  // 0x1498
    int u32_149C;  // 0x149C
    char __pad_14A0[4];  // 0x14A0
    int q14A4;  // 0x14A4
    char __pad_14A8[4];  // 0x14A8
    int u32_14AC;  // 0x14AC
    int u32_14B0;  // 0x14B0
    int u32_14B4;  // 0x14B4
    char __pad_14B8[8];  // 0x14B8
    int q14C0;  // 0x14C0
    char __pad_14C4[20];  // 0x14C4
    char IsAvailableNow[1];  // 0x14D8
    char u32_14D9[4];  // 0x14D9
    char __pad_14DD[31];  // 0x14DD
    int u32_14FC;  // 0x14FC
    char __pad_1500[8];  // 0x1500
    int q1508;  // 0x1508
    char __pad_150C[427];  // 0x150C
    char RadarClass_field_0x16B7[4];  // 0x16B7
    char __pad_16BB[1];  // 0x16BB
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void InitializeHashTable(void *aP1);
    static int SetViewMode(void *aP1, int a2, int a3);
    static int SetFlag(void *aP1, int a2);
    static int SetGlobal(void *aP1);
    static int IsActiveMode(void *aP1);
    int Destruct(void *a1 = 0);
    int GetBlip(int a1, int a2, int a3, ObjectClass * aP3);
    unsigned int * initRadarSurface();
    static void Destru_vt50();
    static int Destru_vt05(RadarClass * aP1);
    static char UpdateFoundationShapesCustom(RadarClass * aP1);
    char  Destru_vt16(char a2);  // 0x653100
};

} // namespace gamemd
