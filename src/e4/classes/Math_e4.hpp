// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

// G42.35a: tree TUs reach this header with GAMEMD_TREE_UNIVERSE set, which
// suppresses _fwd_e4.hpp's struct TechnoClass; -- supply the bridge ourselves.
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
namespace ra2 { namespace game { class TechnoClass; } }
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd { using ::ra2::game::TechnoClass; }
#endif
#endif

namespace gamemd {
struct Math {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int u32_14;  // 0x14
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_5C;  // 0x5C
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6D;  // 0x6D
    unsigned int u32_6F;  // 0x6F
    unsigned int u32_74;  // 0x74
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned int u32_8C;  // 0x8C
    unsigned int u32_94;  // 0x94
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int u32_C2;  // 0xC2
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    unsigned int u32_E4;  // 0xE4
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int u32_108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int u32_12C;  // 0x12C
    unsigned int u32_12E;  // 0x12E
    unsigned int u32_12F;  // 0x12F
    unsigned int q130;  // 0x130
    unsigned int u32_131;  // 0x131
    unsigned int q260;  // 0x260
    unsigned int q304;  // 0x304
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q630;  // 0x630
    unsigned int q774;  // 0x774
    unsigned int q1544;  // 0x1544
    unsigned int q1584;  // 0x1584
    unsigned int q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    unsigned int q5508;  // 0x5508
    unsigned int q6408;  // 0x6408
    unsigned int q20848;  // 0x20848
    unsigned int q21768;  // 0x21768
    unsigned int q25608;  // 0x25608
    unsigned int q1257874;  // 0x1257874
    unsigned int q1271138;  // 0x1271138
    unsigned int q1388694;  // 0x1388694
    unsigned int q19232884;  // 0x19232884
    unsigned int q19337528;  // 0x19337528
    unsigned int q20481684;  // 0x20481684
    unsigned int q422802728;  // 0x422802728
    unsigned int q541595268;  // 0x541595268
    unsigned int q17758693160;  // 0x17758693160
    unsigned int q22571209320;  // 0x22571209320
    unsigned int q1612096024928;  // 0x1612096024928
// --- flat members (END) ---
    int Hypotenuse2D();  // 0x41C350
   static int Sin(double a1);  // G57w10-S raw 0x4CAD50; G57w18j4 return int per raw int __cdecl (C2556 vs def)
    static float * BuildRotationMatrix(float * aP1, float * a2, float a3);  // 0x5AE750 G57w15f3: static receiver-first per raw __thiscall (float* this, float* a2, float a3) — was 6-param garbage arity
    int DistSq2D(TechnoClass * aP1);  // 0x5F6560
    unsigned int * QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4);  // 0x646590
   static double ArcTan(double a1);  // G57w10-S raw 0x4CADE0 (was C2597 interim stub)
    void InitArcTan();  // 0x473650
    static double ArcTan2_Table(double a1);  // G57w10-S raw 0x4CADB0 (was C2597 interim stub)
    unsigned int * Sub16(unsigned int * aP1, unsigned short * aP2);  // 0x5B2950
    bool Abs16Cmp(unsigned short * aP1, short * aP2);  // 0x5B2990
    static double ArcTan2(double a1);  // G57w10-S raw 0x4CAD00 (was C2597 interim stub)
static double CalcAngle(double a1, double a2);  // G57w10-S raw 0x4CAE30 (was C2597 interim stub)
    static int InitDegToRad();  // G57w10-S raw 0x40FFFF (was C2597 interim stub)
    static double SinCos(double a1);  // G57w10-S raw 0x4CACB0 (was C2597 interim stub)
    static int RoundToInt(double a1);  // G57w10-S raw 0x7C5F00 (was C2597 interim stub)
static double Sqrt(double a1);  // G57w10-S raw 0x4CAC40 (was C2597 interim stub)
    static double Cos(...);  // C2597/C2039 interim stub
    static double Dist2D(...);  // interim stub
     // dup: double DistSq2D(...);  // interim stub
    int Hypotenuse2D(void *a1_1);  // interim stub
    char __pad_28[4];  // @0x629a40 (W16G3 raw-usage vocab)
    unsigned int field_140;  // @0x421xxx (W16G3 raw-usage vocab)
    char vtable3[4];  // @0x425xxx (W16G3 raw-usage vocab)
    char q000[4];  // @0x425xxx (W16G3 raw-usage vocab)
    char q004[4];  // @0x425xxx (W16G3 raw-usage vocab)
};
} // namespace gamemd
