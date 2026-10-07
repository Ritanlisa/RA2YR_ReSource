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
    static void InitializeHashTable(void *aP1);  // 0x655B20 raw: void __thiscall RadarClass::InitializeHashTable(RadarClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetViewMode(void *aP1, int a2, int a3);  // 0x656CB0 raw: int __thiscall RadarClass::SetViewMode(int*, int, char)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetFlag(void *aP1, int a2);  // 0x656E90 raw: int __thiscall RadarClass::SetFlag(RadarClass*, char)  // G57w10 r5 D-classbody supply (raw-anchored)

    static int SetGlobal(void *aP1);  // 0x55AF40 raw: int SetGlobal(RadarClass*)
    static int IsActiveMode(void *aP1);  // 0x656E50 raw: int IsActiveMode(RadarClass*)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int q00D;  // 0xD
    void* q010;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int outBuffer;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    AbstractClass* q04C;  // 0x4C
    unsigned int u32_54;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned char q090;  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int q0A4;  // 0xA4
    void* q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int u32_D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void* q130;  // 0x130
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int u32_1D4;  // 0x1D4
    bool q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned char q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned int q340;  // 0x340
    void* q520;  // 0x520
    void* q5B8;  // 0x5B8
    unsigned int u32_6F0;  // 0x6F0
    unsigned int u32_708;  // 0x708
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    unsigned int RadarClass_field_0x0;
    unsigned int RadarClass_field_0x1224;
    unsigned int RadarClass_field_0x1228;
    unsigned int RadarClass_field_0x125C;
    unsigned int RadarClass_field_0x1260;
    unsigned int RadarClass_field_0x1488;
    unsigned int RadarClass_field_0x14C0;
    unsigned int RadarClass_field_0x4;
    unsigned int RadarClass_field_0x8;
    unsigned int *__pad_122C;
    unsigned int *__pad_1264;
    unsigned int *__pad_C;
    unsigned int field_0;
    unsigned int field_4;
// --- flat members (END) ---
    CampaignClass * Destruct();
    int GetBlip(int a1, int a2, int a3, ObjectClass * aP3);
    unsigned int * initRadarSurface();
    static void Destru_vt50();
    static int Destru_vt05(RadarClass * aP1);  // G57w10-S raw 0x00652CF0 (was C2597 interim stub)
    static char UpdateFoundationShapesCustom(RadarClass * aP1);  // G57w10-S raw 0x006563B0 (was C2597 interim stub)
    char Destru_vt16(char a2);  // 0x653100
};

} // namespace gamemd
