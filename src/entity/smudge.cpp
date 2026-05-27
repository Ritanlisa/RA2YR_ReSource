#include "gamemd/entity/smudge.hpp"
#include "gamemd/type/smudge_type.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kSmudgeFlag = 0x1Du;

} // anonymous namespace

SmudgeClass::SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell,
                         HouseClass* owner) noexcept
{
    Type = pType;

    m_abstract_flags = kSmudgeFlag;

    // TODO: complete implementation
    // - Link to owning cell
}

} // namespace gamemd
