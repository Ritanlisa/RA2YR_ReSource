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

    std::memset(&unknown_rect_D0, 0, sizeof(unknown_rect_D0));

    height  = height;
    abstractFlags = kTerrainFlag;

    // TODO: complete implementation
    // - Set up terrain tile coordinates
    // - Initialize animation from type
}

} // namespace gamemd
