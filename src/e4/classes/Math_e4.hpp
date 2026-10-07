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
    unsigned int u32_74;  // 0x74
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int u32_88;  // 0x88
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_E4;  // 0xE4
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int u32_108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int *__pad_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int u32_40;
    unsigned int u32_41;
// --- flat members (END) ---
    int Hypotenuse2D();  // 0x41C350
   static double Sin(double a1);  // G57w10-S raw 0x4CAD50 (was C2597 interim stub)
    static float * BuildRotationMatrix(float * aP1, float * a2, float a3);  // 0x5AE750 G57w15f3: static receiver-first per raw __thiscall (float* this, float* a2, float a3) — was 6-param garbage arity
    int DistSq2D(TechnoClass * aP1);  // 0x5F6560
    unsigned int * QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4);  // 0x646590
   static double ArcTan(double a1);  // G57w10-S raw 0x4CADE0 (was C2597 interim stub)
    void InitArcTan();  // 0x473650
    static double ArcTan2_Table(double a1);  // G57w10-S raw 0x4CADB0 (was C2597 interim stub)
    // G42.35a: IDA truth (0x5B2950/0x5B2990 decompiled heads) -- mechanical
    // supply had filled both params with IUnknown* placeholders.
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
};
} // namespace gamemd
