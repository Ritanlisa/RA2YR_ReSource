// heap.cpp — blob-placement min-heap for random map generation
//
// Faithful translation verified bit-exact against the original gamemd.exe
// (48 Unicorn-emulated golden cases, half of them with tied priorities) —
// see ra2-reverse-AI code/rewrite/rmg/blob_heap.h + test/test_blob_heap.cpp.

#include "misc/heap.hpp"
#include "core/reverse_marker.hpp"

#include <span>

namespace gamemd
{

// IDA: 0x5AD870 -- Heap::SiftDown (thiscall, ret 4)
REVERSE(0x5ad870, "Heap::SiftDown: 1-based binary min-heap sift-down, strict > so ties never swap", "None")
void Heap::SiftDown(int index)
{
    // Nodes is a malloc'd 1-based PaintNode* array ([ecx+8] in the binary).
    // The span is only an access view for the subscripts below — the field
    // itself stays a raw PaintNode** exactly as the ctor at 0x59BC21 stores it.
    const std::span<PaintNode*> slots(Nodes, (size_t)Count + 1);
    for (;;)
    {
        const int left = 2 * index;
        const int right = 2 * index + 1;
        int best = index;
        // 0x5AD881: fcompp + test ah,0x41 — strictly greater, equal keeps parent
        if (left <= Count && slots[index]->Priority > slots[left]->Priority)
            best = left;
        // 0x5AD89F: best vs right child, same strict comparison
        if (right <= Count && slots[best]->Priority > slots[right]->Priority)
            best = right;
        if (best == index)
            return;
        // 0x5AD8C1: swap slots, continue from the child
        PaintNode* temp = slots[index];
        slots[index] = slots[best];
        slots[best] = temp;
        index = best;
    }
}

} // namespace gamemd
