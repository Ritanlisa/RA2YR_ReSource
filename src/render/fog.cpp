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
    obj->Cell.X = (int16_t)(cell_x);
    obj->Cell.Y = (int16_t)(cell_y);
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
    (void)vsd; (void)cx; (void)cy; (void)bw; (void)bh; (void)fx; (void)fy;
    return (vpx + fx >= 0 && vpy + fy >= 0);
}

bool RenderFogOfWarOverlay(const void* vsd, int vpx, int vpy,
                           int cx, int cy, int bw, int bh, int fx, int fy)
{
    (void)vsd; (void)cx; (void)cy; (void)bw; (void)bh; (void)fx; (void)fy;
    return (vpx + fx >= 0 && vpy + fy >= 0);
}

void FogOfWar_RenderCell(int cx, int cy, int house_idx,
                         uint16_t* surf, int pitch)
{
    (void)cx; (void)cy; (void)house_idx; (void)surf; (void)pitch;
}

void FogOfWar_Render(int mw, int mh, int vx, int vy, int vw, int vh,
                     const uint8_t* fog, uint16_t* surf, int pitch, int sw)
{
    (void)mw; (void)mh; (void)vx; (void)vy; (void)vw; (void)vh;
    (void)fog; (void)surf; (void)pitch; (void)sw;
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

#include "render/fog.hpp"

namespace gamemd {

// --- FoggedObjectClass ---

HRESULT __stdcall FoggedObjectClass::GetClassID(CLSID* class_id) { return E_NOTIMPL; }
HRESULT __stdcall FoggedObjectClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall FoggedObjectClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
AbstractType __stdcall FoggedObjectClass::whatAmI() const { return AbstractType::FoggedObject; }
int FoggedObjectClass::objectSize() const { return sizeof(*this); }
 FoggedObjectClass::FoggedObjectClass(noinit_t) noexcept {}

} // namespace gamemd
