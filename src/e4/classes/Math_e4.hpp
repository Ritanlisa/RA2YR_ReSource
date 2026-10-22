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
    unsigned int __pad_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    void* u32_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Hypotenuse2D();  // 0x41C350
   static int Sin(double a1);
    static float * BuildRotationMatrix(float *a2, float a3);
    int DistSq2D(unsigned int *aP1);  // 0x5F6560
    unsigned int *  QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4);  // 0x646590
   static double ArcTan(double a1);
    void InitArcTan();  // 0x473650
    static double ArcTan2_Table(double a1);
    unsigned int * Sub16(unsigned int *aP1, unsigned short *aP2);  // 0x5B2950
    bool Abs16Cmp(unsigned short *aP1, int16_t *aP2);  // 0x5B2990
    static double ArcTan2(double a1);
static double CalcAngle(double a1, double a2);
    static int InitDegToRad();
    static double SinCos(double a1);
    static int RoundToInt(double a1);
static double Sqrt(double a1);
     // dup: double DistSq2D(...);  // interim stub
    int Hypotenuse2D(void *a1 = 0);  // interim stub
};
} // namespace gamemd
