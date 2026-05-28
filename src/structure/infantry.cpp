#include "gamemd/structure/infantry.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim(Sequence::Ready)
    , PanicDurationLeft(0)
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

    m_abstract_flags = kInfantryFlag;
}

int InfantryClass::Mission_Enter()
{
    // Enter building or transport
    // TODO: find building target, play enter animation, garrison/board
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    // Paradrop: descending to ground
    // TODO: parachute descent animation
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    // Paradrop: flyover phase
    // TODO: horizontal movement before drop
    return 5;
}

} // namespace gamemd
