// element_tracker.h -- Render element tracking for headless testing
// Intercepts DSurface operations to build a semantic screen tree:
//   TEXT -- text labels with content
//   SHP  -- sprite frames with palette reference
//   BINK -- video playback state
//   RECT -- filled rectangles / UI boxes
//   VXL  -- voxel model placeholders
//
// Accessed via headless ELEMENTS command.
#pragma once
#include <windows.h>
#include <cstdint>

namespace elements {

enum Type : uint8_t { NONE=0, TEXT, SHP, BINK, RECT, VXL, LINE };

struct Element {
    Type    type;
    int32_t x, y, w, h;    // screen position + size
    uint32_t frame;          // frame number (for SHP/BINK/VXL)
    uint32_t surface_addr;   // source DSurface address
    uint32_t palette_addr;   // palette address (for SHP)
    uint32_t flags;          // rendering flags
    char     text[128];      // text content (for TEXT elements)
    uint32_t ts;             // timestamp (GetTickCount)
};

void Reset();               // clear all elements for new frame
void RecordBlit(uint32_t src_surface, int sx, int sy, int sw, int sh, int dx, int dy, uint32_t flags);
void RecordText(int x, int y, const char* text);
void RecordRect(int x, int y, int w, int h);
void RecordBink(int x, int y, int w, int h, uint32_t frame);

int  Count();               // number of elements recorded
const Element& Get(int i);  // get element by index

} // namespace elements
