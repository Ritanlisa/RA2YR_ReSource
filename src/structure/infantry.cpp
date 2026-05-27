#include "gamemd/structure/infantry.hpp"

#include <cstring>

namespace gamemd
{

extern void* InfantryClass_vftable[1];

namespace {

constexpr uint32_t kInfantryFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim(Sequence::Ready)
    , PermanentBerzerk(false)
    , Technician(false)
    , unknown_bool_6DA(false)
    , Crawling(false)
    , unknown_bool_6DC(false)
    , unknown_bool_6DD(false)
    , unknown_6E0(0)
    , ShouldDeploy(false)
    , unknown_int_6E8(0)
    , unused_6EC(0)
{
    std::memset(&unknown_Timer_6C8, 0, sizeof(unknown_Timer_6C8));

    PanicDurationLeft = 0;

    const auto vtbl = const_cast<void**>(reinterpret_cast<void* const*>(InfantryClass_vftable));
    reinterpret_cast<void**>(this)[0] = vtbl;
    reinterpret_cast<void**>(this)[1] = vtbl;
    reinterpret_cast<void**>(this)[2] = vtbl;
    reinterpret_cast<void**>(this)[3] = vtbl;

    m_abstract_flags = kInfantryFlag;
}

} // namespace gamemd
