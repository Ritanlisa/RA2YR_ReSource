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
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    AbstractClass* q04C;  // 0x4C
    DynamicVector * q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q078;  // 0x78
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q0A4;  // 0xA4
    unsigned int q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
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
    void* q12C;  // 0x12C
    void* q130;  // 0x130
    unsigned int q144;  // 0x144
    unsigned int Crates;  // 0x148
    HouseClass* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q20C;  // 0x20C
    bool q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned int q340;  // 0x340
    BuildingTypeClass* q520;  // 0x520
    void* q5B8;  // 0x5B8
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    unsigned char q5488;  // 0x5488
// --- flat members (END) ---
    void checkLowPower();
    static double checkBlackout(...);  // C2597 interim stub
    static double getDrain(...);  // C2597 interim stub
};

} // namespace gamemd
