#include "gamemd/entity/smudge.hpp"
#include "gamemd/type/smudge_type.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{


extern void* SmudgeClass_vftable[1];
extern DynamicVectorClass<SmudgeClass*> SmudgeClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

namespace {

constexpr uint32_t kSmudgeFlag = 0x1Du;

} // anonymous namespace

SmudgeClass::SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell,
                         HouseClass* owner) noexcept
{
    Type = pType;

    m_abstract_flags = kSmudgeFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(SmudgeClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    SmudgeClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Link to owning cell
}

} // namespace gamemd
