#include "entity/terrain.hpp"
#include "type/terrain_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kTerrainFlag = 0x24u;

} // anonymous namespace

TerrainClass::TerrainClass(TerrainTypeClass* pType, const CellStruct& cell,
                           int height) noexcept
{
    std::memset(&Animation, 0, sizeof(Animation));

    Type       = pType;
    IsBurning  = false;
    TimeToDie  = false;

    std::memset(&TerrainClass_field_rect_D0, 0, sizeof(TerrainClass_field_rect_D0));

    height  = height;
    abstractFlags = kTerrainFlag;
}

} // namespace gamemd

#include "entity/terrain.hpp"

namespace gamemd {

// --- TerrainClass ---

HRESULT __stdcall TerrainClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall TerrainClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall TerrainClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall TerrainClass::whatAmI() const { return kObjectTypeId; }
int TerrainClass::objectSize() const { return sizeof(TerrainClass); }

} // namespace gamemd
