#include "gamemd/entity/terrain.hpp"
#include "gamemd/type/terrain_type.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

namespace gamemd
{

extern void* TerrainClass_vftable[1];
extern DynamicVectorClass<TerrainClass*> TerrainClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

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

    m_height  = height;
    m_abstract_flags = kTerrainFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(TerrainClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    TerrainClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Set up terrain tile coordinates
    // - Initialize animation from type
}

} // namespace gamemd
