#pragma once

#include <cstdint>
#include <cstddef>

namespace gamemd
{

using int8   = std::int8_t;
using int16  = std::int16_t;
using int32  = std::int32_t;
using int64  = std::int64_t;
using uint8  = std::uint8_t;
using uint16 = std::uint16_t;
using uint32 = std::uint32_t;
using uint64 = std::uint64_t;

using byte  = uint8;
using word  = uint16;
using dword = uint32;

struct noinit_t
{
    // design: default constructor (compiler-generated), no callgraph reference
    constexpr noinit_t() = default;
};

#define GAMEMD_CORE_OWNS_PROGRESSTIMER 1  // G42.17c: e4 flat def yields
#ifndef GAMEMD_E4_OWNS_PROGRESSTIMER  // G42.36: order-independent pair, first include wins
struct ProgressTimer
{
    int32 Value;
    int32 Timer;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* GetValue(void *a1);  // 0x4c93d0 -- W19K4: out-param is pointer per raw 0x41A581 receiver-first
    static void * GetValue(void * aP1, void * aP2);  // G42.39a static-call supply
    // === SYMBOL-ANCHOR (END) ===
};
#endif  // GAMEMD_E4_OWNS_PROGRESSTIMER

extern int& CurrentFrame;

} // namespace gamemd
