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

// ============================================================
// Mission_Enter — RA1 FootClass::Mission_Enter pattern
// Single-state radio-based coordination loop
// ============================================================
int InfantryClass::Mission_Enter()
{
    // RA1: Contact transporter via RADIO_DOCKING
    // Find who to coordinate with — radio contact or archive target
    // If contact exists: send RADIO_DOCKING, wait for RADIO_ROGER
    // If transport says "bug off" → enter idle mode
    // If no contact → enter idle mode

    // Contact_With_Whom() equivalent: check current radio link
    // if (!contact) contact = As_Techno(m_archive_target);

    // if (contact) {
    //     if (SendCommand(RADIO_DOCKING, contact) != RADIO_ROGER && !IsTethered) {
    //         SendCommand(RADIO_OVER_OUT, contact);
    //         QueueMission(Mission::Guard, true);
    //     }
    // } else {
    //     QueueMission(Mission::Guard, true);
    // }

    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    // Paradrop: descend via parachute animation
    m_has_parachute = true;

    // Check ground proximity — if reached ground, deploy unit
    // if (m_location.Z <= ground_z) {
    //     m_has_parachute = false;
    //     QueueMission(Mission::Guard, true);
    // }

    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    // Paradrop flyover: horizontal movement before drop
    // Fly toward drop zone at aircraft speed
    // When over target, transition to ParadropApproach

    // if (distance_to_drop_zone < threshold) {
    //     QueueMission(Mission::ParadropApproach, true);
    // }

    return 5;
}

} // namespace gamemd
