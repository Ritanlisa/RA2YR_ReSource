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

class Random
{
public:
    static float Gaussian();  // 0x5980C0
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
