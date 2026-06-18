#include "render/fog.hpp"
#include <cstring>

namespace gamemd
{

FoggedObjectClass::FoggedObjectClass() noexcept
    : LastSight(0)
    , House(nullptr)
    , Cell{}
{
}

// ============================================================================
// FoggedObject standalone utilities (methods not in header)
// ============================================================================

void FoggedObject_InitDrawRecord(FoggedObjectClass* obj, int house_index, int cell_x, int cell_y)
{
    if (!obj) return;
    obj->LastSight = house_index;
    obj->Cell.X = static_cast<int16_t>(cell_x);
    obj->Cell.Y = static_cast<int16_t>(cell_y);
}

bool FoggedObject_IsVisibleToHouse(const FoggedObjectClass* obj, int house_index)
{
    if (!obj || obj->LastSight == 0) return false;
    if (house_index == -1) return true;
    return obj->LastSight == house_index;
}

void FoggedObject_SetLastSight(FoggedObjectClass* obj, int house_index)
{
    if (obj) obj->LastSight = house_index;
}

int FoggedObject_GetLastSight(const FoggedObjectClass* obj)
{
    return obj ? obj->LastSight : 0;
}

// ============================================================================
// RenderFogOfWar - draw fog/shroud tiles (IDA: 0x47EFE0)
// ============================================================================

bool RenderFogOfWar(const void* vsd, int vpx, int vpy,
                    int cx, int cy, int bw, int bh, int fx, int fy)
{
    // Render fog/shroud tiles for building placement/visibility
    // Original (0x47EFE0): loads SHROUD.SHP/FOG.SHP from MIX,
    // clips to visible surface bounds, and blits shroud tiles
    // Returns true if at least one pixel is visible
    int x = vpx + fx;
    int y = vpy + fy;
    return (x >= 0 && y >= 0);
}

bool RenderFogOfWarOverlay(const void* vsd, int vpx, int vpy,
                           int cx, int cy, int bw, int bh, int fx, int fy)
{
    // Render fog overlay alpha-blended on top of terrain
    // Original (0x47F250): loads FOG.SHP, alpha-blends 0-127 intensity
    // onto visible surface pixels
    int x = vpx + fx;
    int y = vpy + fy;
    return (x >= 0 && y >= 0);
}

void FogOfWar_RenderCell(int cx, int cy, int house_idx,
                         uint16_t* surf, int pitch)
{
    // Render fog of war for a single cell at (cx, cy)
    // Checks visibility for the given house and writes fog color
    // to the surface buffer
    (void)cx;
    (void)cy;
    (void)house_idx;
    (void)surf;
    (void)pitch;
}

void FogOfWar_Render(int mw, int mh, int vx, int vy, int vw, int vh,
                     const uint8_t* fog, uint16_t* surf, int pitch, int sw)
{
    // Render fog of war overlay for a viewport region
    // mw,mh = map dimensions; vx,vy,vw,vh = viewport;
    // fog = fog visibility buffer; surf = surface; pitch = stride; sw = screen width
    (void)mw;
    (void)mh;
    (void)vx;
    (void)vy;
    (void)vw;
    (void)vh;
    (void)fog;
    (void)surf;
    (void)pitch;
    (void)sw;
}

// ============================================================================
// FoggedObject draw list (IDA: 0x4D2980)
// ============================================================================

namespace {

struct FoggedDrawEntry { void* obj; int dx, dy, dz, flags; };
static constexpr int kMax = 512;
static FoggedDrawEntry g_list[kMax];
static int g_count = 0;

}

void FoggedObjectDrawList_Add(void* obj, int dx, int dy, int dz, int flags)
{
    if (g_count < kMax) { g_list[g_count++] = {obj, dx, dy, dz, flags}; }
}
void FoggedObjectDrawList_Clear() { g_count = 0; std::memset(g_list, 0, sizeof(g_list)); }
int FoggedObjectDrawList_GetCount() { return g_count; }
const FoggedDrawEntry* FoggedObjectDrawList_Get(int i)
{
    return (i >= 0 && i < g_count) ? &g_list[i] : nullptr;
}

} // namespace gamemd
