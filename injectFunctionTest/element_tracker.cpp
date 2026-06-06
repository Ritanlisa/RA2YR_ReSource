// element_tracker.cpp — Render element tracking buffer
#include "element_tracker.h"
#include <cstring>

namespace elements {

static const int MAX_ELEMENTS = 4096;
static Element g_pool[MAX_ELEMENTS];
static int    g_count = 0;

void Reset() { g_count = 0; }

void RecordBlit(uint32_t src_surface, int sx, int sy, int sw, int sh, int dx, int dy, uint32_t flags)
{
    if (g_count >= MAX_ELEMENTS) return;
    auto& e = g_pool[g_count++];
    e.type = SHP;
    e.x = dx; e.y = dy; e.w = sw; e.h = sh;
    e.frame = sx; // source X = frame offset in SHP strip
    e.surface_addr = src_surface;
    e.flags = flags;
    e.ts = GetTickCount();
}

void RecordText(int x, int y, const char* text)
{
    if (g_count >= MAX_ELEMENTS) return;
    auto& e = g_pool[g_count++];
    e.type = TEXT;
    e.x = x; e.y = y;
    strncpy(e.text, text, sizeof(e.text) - 1);
    e.ts = GetTickCount();
}

void RecordRect(int x, int y, int w, int h)
{
    if (g_count >= MAX_ELEMENTS) return;
    auto& e = g_pool[g_count++];
    e.type = RECT;
    e.x = x; e.y = y; e.w = w; e.h = h;
    e.ts = GetTickCount();
}

void RecordBink(int x, int y, int w, int h, uint32_t frame)
{
    if (g_count >= MAX_ELEMENTS) return;
    auto& e = g_pool[g_count++];
    e.type = BINK;
    e.x = x; e.y = y; e.w = w; e.h = h;
    e.frame = frame;
    e.ts = GetTickCount();
}

int Count() { return g_count; }

const Element& Get(int i)
{
    static Element empty = {};
    if (i < 0 || i >= g_count) return empty;
    return g_pool[i];
}

} // namespace elements
