#include "gamemd/entity/overlay.hpp"
#include "gamemd/type/overlay_type.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{


extern void* OverlayClass_vftable[1];
extern DynamicVectorClass<OverlayClass*> OverlayClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

namespace {

constexpr uint32_t kOverlayFlag = 0x14u;

} // anonymous namespace

OverlayClass::OverlayClass(OverlayTypeClass* pType, const CellStruct& cell,
                           HouseClass* owner) noexcept
{
    Type = pType;

    m_abstract_flags = kOverlayFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(OverlayClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    OverlayClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Link to owning cell
    // - Set up draw properties
}

} // namespace gamemd
