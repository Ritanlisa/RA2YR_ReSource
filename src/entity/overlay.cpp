#include "gamemd/entity/overlay.hpp"
#include "gamemd/type/overlay_type.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kOverlayFlag = 0x14u;

} // anonymous namespace

OverlayClass::OverlayClass(OverlayTypeClass* pType, const CellStruct& cell,
                           HouseClass* owner) noexcept
{
    Type = pType;

    m_abstract_flags = kOverlayFlag;

    // TODO: complete implementation
    // - Link to owning cell
    // - Set up draw properties
}

} // namespace gamemd
