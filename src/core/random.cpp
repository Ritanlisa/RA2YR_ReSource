// random.cpp — R250 random number generator family
//
// Faithful translations of the original gamemd.exe routines, verified
// byte-identical against the binary (same seed -> same stream) via golden
// tests in the companion reverse-engineering project (ra2-reverse-AI,
// code/rewrite/rmg/randomizer.cpp + test/test_randomizer.cpp).
//
// Object layout (Randomizer, 0x3F4 bytes):
//   +0x00 bool      unknown00   nonzero -> State() always returns 0
//   +0x04 int32_t   next1       R250 index 1 (initial 0)
//   +0x08 int32_t   next2       R250 index 2 (initial 103)
//   +0x0C uint32_t  table[250]  state words

#include "core/random.hpp"
#include "system/scenario.hpp"
#include "core/math.hpp"
#include "core/reverse_marker.hpp"

#include <cstdint>

namespace gamemd {

// R250 seeding Feistel round keys. The binary tables at 0x839644 / 0x839694
// hold 20 dwords each; only the first 4 are ever read (inner loop bound is
// CMP EBX,0x10 at 0x65C748). Values read from the original .rdata.
const uint32_t g_RNGSeedKey1[4] = { 0xBAA96887u, 0x1E17D32Cu, 0x03BCDC3Cu, 0x0F33D1B2u }; // 0x839644
const uint32_t g_RNGSeedKey2[4] = { 0x4B0F3B58u, 0xE874F0C3u, 0x6955C5A6u, 0x55A7CA46u }; // 0x839694

// IDA: 0x65C6D0 -- SeedInitRNG (thiscall: ecx=this, [esp+4]=seed; ret 4)
// Each state word is derived from (seed, index) by 4 Feistel rounds:
//   x  = KEY1[r] ^ right
//   hi = x >> 16 (arithmetic), lo = x & 0xFFFF
//   t  = ~(hi*hi) + lo*lo
//   m  = (t >> 16) | (t << 16)   -- arithmetic >>: NOT a clean ROR16
//   right' = ((m ^ KEY2[r]) + hi*lo) ^ left ; left = right
REVERSE(0x65c6d0, "SeedInitRNG: R250 seeding (4-round Feistel)", "None")
Randomizer* SeedInitRNG(Randomizer* rng, int32_t seed)
{
    rng->next1 = 0;
    rng->next2 = 103;

    int i = 0;
    int remaining = 250;
    for (;;)
    {
        uint32_t left  = (uint32_t)seed;
        uint32_t right = (uint32_t)i;

        for (int round = 0; round < 4; ++round)
        {
            uint32_t x  = g_RNGSeedKey1[round] ^ right;
            int32_t  hi = (int32_t)x >> 16;         // 0x65C718: sar edx,0x10
            uint32_t lo = x & 0xFFFFu;

            uint32_t hi_u  = (uint32_t)hi;
            // 0x65C72E: not edx / 0x65C730: add edx,ecx
            uint32_t t     = ~(hi_u * hi_u) + lo * lo;
            // 0x65C734-0x65C73A: sar ecx,0x10 / shl edx,0x10 / or ecx,edx
            // sar smears the sign bit across the top half, so a negative t
            // yields 0xFFFF in the upper word -- kept as-is, this is not ROR16.
            uint32_t mixed = (uint32_t)((int32_t)t >> 16) | (t << 16);
            // 0x65C742-0x65C746: xor / add edi(hi*lo) / xor ebp(left)
            uint32_t next  = ((mixed ^ g_RNGSeedKey2[round]) + hi_u * lo) ^ left;

            left  = right;
            right = next;
        }

        rng->table[i] = right;
        if (--remaining == 0)
            break;
        ++i;
    }

    rng->unknown00 = false;  // 0x65C770: mov byte ptr [eax],0
    return rng;
}

// IDA: 0x65C780 -- Random::State (thiscall: ecx=this)
// R250 draw: table[i1] ^= table[i2], return new table[i1]; both indices
// post-increment and wrap at 250.
REVERSE(0x65c780, "Random::State: R250 draw", "None")
uint32_t Random::State(Randomizer* rng)
{
    if (rng->unknown00)
        return 0;

    int32_t i1 = rng->next1;
    int32_t i2 = rng->next2;
    rng->table[i1] ^= rng->table[i2];
    uint32_t result = rng->table[i1];

    ++i1;
    ++i2;
    rng->next1 = i1;
    rng->next2 = i2;
    if (i1 >= 250)
        rng->next1 = 0;
    if (i2 >= 250)
        rng->next2 = 0;

    return result;
}

// IDA: 0x65C7E0 -- Random::Range (thiscall: ecx=this, [esp+4]=min, [esp+8]=max; ret 8)
// Closed interval [min(a,b), max(a,b)] via mask + rejection sampling (no modulo bias).
REVERSE(0x65c7e0, "Random::Range: ranged random (mask + rejection sampling)", "None")
int32_t Random::Range(Randomizer* rng, int32_t min, int32_t max)
{
    int32_t lower = min;
    int32_t upper = max;
    if (min == max)
        return min;  // 0x65C7EF: jz -> return lower bound unchanged
    if (min > max)
    {
        lower = max;
        upper = min;
    }

    int32_t range = upper - lower;

    // Bits needed to cover range: scan downward from bit 30 (bit 31 tested apart).
    int32_t bits;
    if ((uint32_t)range & 0x80000000u)
    {
        bits = 32;  // 0x65C801: test edi,0x80000000 -> skip scan, ecx stays 0x1F
    }
    else
    {
        int32_t c = 31;
        while (c > 0)
        {
            --c;
            if ((uint32_t)range & (1u << c))
                break;
        }
        bits = c + 1;  // 0x65C81E: inc ecx
    }

    // 0x65C81F-0x65C829: or ebp,-1 / shl ebp,cl / not ebp
    // x86 shift counts are taken mod 32: bits==32 leaves the mask at 0.
    uint32_t mask = ~(0xFFFFFFFFu << (bits & 31));

    // 0x65C824-0x65C82B: lea eax,[edi+1] / cmp eax,edi / jle
    // range+1 overflow (range == INT32_MAX) skips sampling entirely.
    if (range + 1 <= range)
        return (range + 1) + lower;

    // Rejection sampling: mask off the needed bits, redraw while above range.
    // (The original inlines the R250 step here; Random::State is identical.)
    int32_t value;
    for (;;)
    {
        value = (int32_t)(Random::State(rng) & mask);
        if (value <= range)  // 0x65C882: jg -- signed comparison
            break;
    }

    return value + lower;  // 0x65C886: add eax,ebx
}

// IDA: 0x5980C0 -- Random::Gaussian (thiscall: ecx=state)
// Marsaglia polar method over the uniform source pointed to by the state
// object. Each accepted round produces TWO values; the second is cached and
// returned on the next call — call parity changes RNG stream consumption,
// so the cache is load-bearing. Rejection rounds consume extra draws.
REVERSE(0x5980c0, "Random::Gaussian: Marsaglia polar normal deviate (cached pair)", "None")
double Random::Gaussian(GaussianState* state)
{
    if (state->have_cached)
    {
        state->have_cached = 0;
        return state->cached;
    }

    double u, v, s;
    for (;;)
    {
        u = 2.0 * state->uniform() - 1.0;  // 0x5980E1: fadd st,st / fsub 1.0
        v = 2.0 * state->uniform() - 1.0;
        s = v * v + u * u;                 // order: v*v first, then + u*u
        if (s < 1.0 && s != 0.0)           // reject outside the unit circle / dead center
            break;
    }

    // 0x598126: fldln2 / fxch / fyl2x — the original's ln is a single x87
    // instruction under the process-global PC=53/RC=chop; LogChop reproduces
    // that value deterministically (exact ln chopped toward zero).
    double l = Math::LogChop(s);
    double f = Math::Sqrt((-l - l) / s);   // = sqrt(-2 ln s / s)

    state->have_cached = 1;
    state->cached = f * v;
    return f * u;
}

// IDA: 0x598030 -- Range_RandomInt (fastcall: ecx=lo, edx=hi; ret 0)
REVERSE(0x598030, "Range_RandomInt: closed-interval uniform pick via global R250 (rejection sampling)", "None")
int Range_RandomInt(int lo, int hi)
{
    // 0x598039-0x598056: span and base are written into the low half of a
    // stack qword with the high half zeroed, then fild qword — both read as
    // uint32 zero-extended to uint64 (a negative lo would become astronomical;
    // known call sites all pass lo >= 0, replicate the width, don't "fix" it)
    const double span = (double)(uint32_t)(hi - lo + 1);
    const double base = (double)(uint32_t)lo;
    for (;;)
    {
        // 0x598068: eax → qword low half, high half 0 → fild = uint32 zero-extension
        const double u = (double)(uint64_t)Random::State(&g_Randomizer) * span
                         * 2.3283064370807974e-10 + base;  // 0x7ED898 = 1/(2^32-1)
        const int v = (int)(int64_t)u;  // 0x598082: call 0x7C5F00 (_ftol) — truncate, low 32 bits
        if ((uint32_t)v <= (uint32_t)hi)  // 0x598089: ja — UNSIGNED comparison
            return v;
    }
}

// IDA: 0x5980A0 -- InitGaussianState (thiscall: ecx=state, [esp+4]=uniform; ret 4)
REVERSE(0x5980a0, "InitGaussianState: clear have_cached + cached, store uniform source", "None")
void InitGaussianState(GaussianState* state, double (*uniform)())
{
    state->have_cached = 0;  // 0x5980A7: byte [eax] = 0
    state->cached = 0.0;     // 0x5980A4/0x5980A9: both dwords of +0x08 = 0
    state->uniform = uniform;  // 0x5980B0: [eax+0x10] = arg0
}

} // namespace gamemd
