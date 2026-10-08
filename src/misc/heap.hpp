#pragma once

// heap.hpp — blob-placement min-heap for random map generation.
//
// This header exists because the auto-generated `Heap` stub in
// misc/misc_ext.hpp has the wrong shape (virtual SiftDown with no
// parameters, no object layout) and misc_ext is not compilable at
// baseline; the real layout and SiftDown are pinned by the binary:
//   ctor inline at 0x59BC21 — malloc(0x14), slot array malloc(cap*4 + 4),
//   1-based, slots [0..cap-1] zeroed, slot[cap] left uninitialized.

#include <cstdint>

namespace gamemd
{

// 8 bytes; coords are int16 — 0x59C37D reads them back with movsx,
// a wider type would not be the same number.
struct PaintNode
{
    int16_t X;        // +0x00
    int16_t Y;        // +0x02
    float Priority;   // +0x04
};

class Heap
{
public:
    void SiftDown(int index); // 0x5AD870

    int Count;           // +0x00
    int Capacity;        // +0x04
    PaintNode** Nodes;   // +0x08 — 1-based slot array of node pointers
    PaintNode* MaxSeen;  // +0x0C — stats only, written but never read
    PaintNode* MinSeen;  // +0x10 — stats only, written but never read
};

} // namespace gamemd
