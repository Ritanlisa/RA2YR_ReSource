// map_helpers.cpp — blob placement geometry for random map generation
//
// Faithful translations verified bit-exact against the original gamemd.exe
// (Unicorn emulation, FPCW=0x0E7F = PC53/RC-chop) — see ra2-reverse-AI
// code/rewrite/rmg/blob_region.cpp + test/test_blob_region.cpp.

#include "system/map.hpp"
#include "system/globals_system.hpp"
#include "core/math.hpp"
#include "core/reverse_marker.hpp"

#include <cstdint>
#include <cstdlib>

namespace gamemd {

// IDA: 0x59BAB0 -- InRegion (cdecl-ish, ret 0x1c)
REVERSE(0x59bab0, "InRegion: blob placement region predicate (rect/ellipse)", "None")
bool InRegion(const CellStruct* cell, const RectangleStruct* region, bool ellipse, double ellipse_a, double ellipse_b)
{
    // 0x59BABD: four field compares against the full-map bounds — equal means
    // "no constraint", accept immediately without looking at the cell
    if (region->X == g_MapFullBounds.X && region->Y == g_MapFullBounds.Y &&
        region->Width == g_MapFullBounds.Width && region->Height == g_MapFullBounds.Height)
        return true;

    if (!ellipse)
    {
        // 0x59BB83: iso coords compared directly, half-open [x, x+w) x [y, y+h)
        return region->X <= cell->X && cell->X < region->X + region->Width &&
               region->Y <= cell->Y && cell->Y < region->Y + region->Height;
    }

    // 0x59BAFA: inverse iso transform to real coords. The original forms
    // 2*rx / 2*ry as integers first, then converts (fild) and scales by 0.5 —
    // keep that order, do not fold into a single double expression.
    // 0x87F8DC is MapClass+0xF4, the map width used by the iso transform.
    const int map_width = (int)g_Cell_PositionLUT;  // 0x87F8DC
    const int two_rx_rel = cell->X - cell->Y + map_width - 1 - 2 * region->X;
    const int two_ry_rel = cell->X + cell->Y - map_width - 1 - 2 * region->Y;
    const double dx = (double)two_rx_rel * 0.5 - (double)region->Width * 0.5;
    const double dy = (double)two_ry_rel * 0.5 - (double)region->Height * 0.5;
    // 0x59BB68: fcomp 1.0 + test ah,1 — strictly less than
    return dx * dx * ellipse_a + dy * dy * ellipse_b < 1.0;
}

// IDA: 0x59B940 -- DirectionalCost (ret 0x18)
REVERSE(0x59b940, "DirectionalCost: anisotropic blob growth cost", "None")
double DirectionalCost(const CellStruct* p, const CellStruct* n, const RectangleStruct* region, const CellStruct* target, float aspect_x, float aspect_y)
{
    // 0x59B94D-0x59B979: region == full bounds degenerates to the plain
    // euclidean distance between p and n
    if (region->X == g_MapFullBounds.X && region->Y == g_MapFullBounds.Y &&
        region->Width == g_MapFullBounds.Width && region->Height == g_MapFullBounds.Height)
    {
        int dy = p->Y - n->Y;
        int dx = p->X - n->X;
        return Math::Sqrt((double)(dy * dy + dx * dx));  // 0x59BA94: call 0x4CAC40
    }

    // 0x59B989: direction components use ARITHMETIC right shifts (sar) —
    // negative halves round toward -inf, unlike truncating division
    int ax = std::abs(((n->X - n->Y) >> 1) - ((target->X - target->Y) >> 1));
    int ay = std::abs(((n->X + n->Y) >> 1) - ((target->X + target->Y) >> 1));
    if (ax == 0 && ay == 0)
        return 0.0;  // 0x59B9D6: fld dword [0x7E1748] (0.0f)

    double len = Math::Sqrt((double)(ay * ay + ax * ax));
    // 0x59BA30: Chebyshev step distance between p and n (not p and target)
    int cheb = std::max(std::abs(p->X - n->X), std::abs(p->Y - n->Y));

    double first  = (double)ax / len;   // 0x59BA12: fdiv
    double second = (double)ay / len;   // 0x59BA3A: fidivr
    // 0x59BA44/0x59BA48: aspects are FLOAT dwords; widened at the multiply
    double sum = (double)aspect_x * first + second * (double)aspect_y;
    return (double)cheb * sum;
}

} // namespace gamemd
