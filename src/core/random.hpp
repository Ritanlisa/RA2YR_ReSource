// random.hpp — R250 random number generator family (RNG core)
//
// Canonical declarations for the RNG routines implemented in core/random.cpp.
//
// NOTE: these declarations also exist in system/game_systems.hpp (class Random,
// with the original less-precise signatures). game_systems.hpp currently cannot
// be included by any translation unit: its `class GameMode` collides with
// `enum class GameMode` in core/enums.hpp (pre-existing issue, out of scope
// here). Until that is resolved upstream, this header is the includable
// declaration point. When the collision is fixed, this header can be removed
// in favor of game_systems.hpp.
#pragma once

#include <cstdint>

namespace gamemd {

struct Randomizer;  // defined in system/scenario.hpp

// 0x65C6D0 — R250 seeding (thiscall: ecx=this, [esp+4]=seed; ret 4)
Randomizer* SeedInitRNG(Randomizer* rng, int32_t seed);

// 0x598030 — closed-interval uniform pick from the global R250 (fastcall:
// ecx=lo, edx=hi; rejection sampling; ret 0)
int Range_RandomInt(int lo, int hi);

// Gaussian noise generator state (gamemd.exe 0xABDFB8; layout confirmed by its
// initializer 0x5980A0: clears the flag, zeroes both dwords of the cached
// value, stores the uniform source pointer).
struct GaussianState
{
    uint8_t  have_cached;      // +0x00
    uint8_t  pad_01[7];        // +0x01..+0x07 alignment (unobserved)
    double   cached;           // +0x08
    double (*uniform)();       // +0x10 — uniform [0,1) source, init to 0x598000 (RandomState)
};

// 0x5980A0 — GaussianState initializer (thiscall: ecx=state, [esp+4]=uniform;
// clears have_cached, zeroes both dwords of cached, stores the uniform source)
void InitGaussianState(GaussianState* state, double (*uniform)());

class Random
{
public:
    static double Gaussian(GaussianState* state);  // 0x5980C0 (thiscall: ecx=state)
    static uint32_t State(Randomizer* rng);  // 0x65C780
    static int32_t Range(Randomizer* rng, int32_t min, int32_t max);  // 0x65C7E0
    // design: static function, no direct binary match in IDA
    static void Seed(uint32_t seed);

    static uint32_t s_Seed;         // 0x00
    static uint32_t s_State[4];     // 0x04
};

extern Randomizer g_Randomizer;          // data: 0xABE890
// R250 seeding Feistel round keys (binary tables hold 20 dwords each; only
// the first 4 are ever read — inner loop bound is CMP EBX,0x10 at 0x65C748)
extern const uint32_t g_RNGSeedKey1[4];  // data: 0x839644
extern const uint32_t g_RNGSeedKey2[4];  // data: 0x839694

} // namespace gamemd
