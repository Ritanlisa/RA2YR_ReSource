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

struct OwnedTiberiumStruct {
    float Amount1;
    float Amount2;
    float Amount3;
    float Amount4;
};  // X10: single authority (was house.hpp + techno.hpp twins)

struct TurretControl {
    int Travel;
    int CompressFrames;
    int RecoverFrames;
    int HoldFrames;
};  // X10: single authority (was techno.hpp + techno_type.hpp twins)

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


    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int q08C;  // 0x8C [X55 W3 supply (render vocab)]
    int ProgressTimer_field_0x8;  // 0x8 [X55 W3 supply (render vocab)]
    int ProgressTimer_field_0x10;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int q09C;  // 0x9C [X55 W3 supply (render vocab)]
    unsigned int ProgressTimer_field_0x14;  // 0x14 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_OWNS_PROGRESSTIMER

extern int& CurrentFrame;

} // namespace gamemd
