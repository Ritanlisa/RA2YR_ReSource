#include "gamemd/entity/terrain.hpp"
#include "gamemd/type/terrain_type.hpp"
#include "gamemd/core/vector.hpp"

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

    std::memset(&terrainOccupancyRect, 0, sizeof(terrainOccupancyRect));

    m_height  = height;
    m_abstract_flags = kTerrainFlag;

    // TODO: complete implementation
    // - Set up terrain tile coordinates
    // - Initialize animation from type
}

} // namespace gamemd
