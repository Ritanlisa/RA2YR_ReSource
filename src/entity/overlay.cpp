#include "entity/overlay.hpp"
#include "type/overlay_type.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kOverlayFlag = 0x14u;

} // anonymous namespace

OverlayClass::OverlayClass(OverlayTypeClass* pType, const CellStruct& cell,
                           HouseClass* owner) noexcept
{
    Type = pType;

    abstractFlags = kOverlayFlag;

    // TODO: complete implementation
    // - Link to owning cell
    // - Set up draw properties
}

} // namespace gamemd
