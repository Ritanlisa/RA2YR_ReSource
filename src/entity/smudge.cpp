#include "entity/smudge.hpp"
#include "type/smudge_type.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kSmudgeFlag = 0x1Du;

} // anonymous namespace

SmudgeClass::SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell,
                         HouseClass* owner) noexcept
{
    Type = pType;

    abstractFlags = kSmudgeFlag;

    // TODO: complete implementation
    // - Link to owning cell
}

} // namespace gamemd
