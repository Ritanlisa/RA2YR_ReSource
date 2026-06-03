#include "gamemd/structure/infantry.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 — InfantryClass::Construct (617B)
// Note: fields at byte offsets 0x6C0-0x6EC from full object base
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)              // +0x6C0, set by constructor parameter in IDA
    , SequenceAnim(static_cast<Sequence>(-1))  // +0x6C4, IDA: *(this+0x6C4) = -1
    , unknown_Timer_6C8{}         // +0x6C8, IDA: *(this+0x6C8) = CurrentFrame
    , PanicDurationLeft(0)        // +0x6D0, IDA: *(this+0x6D0) = 0
    , PermanentBerzerk(false)     // +0x6D4, IDA: *(this+0x6D8)=0 (byte)
    , Technician(false)           // +0x6D5, IDA: *(this+0x6D9)=0
    , unknown_bool_6DA(false)     // +0x6DA, IDA: *(this+0x6DA)=0
    , Crawling(false)             // +0x6DB, IDA: *(this+0x6DB)=0
    , unknown_bool_6DC(false)     // +0x6DC, IDA: *(this+0x6DC)=0
    , unknown_bool_6DD(false)     // +0x6DD, IDA: *(this+0x6DD)=0
    , unknown_6E0(0)              // +0x6E0, IDA: *(this+0x6E0) = 0
    , ShouldDeploy(false)         // +0x6E4, IDA: *(BYTE*)(this+0x6E4) = 0
    , unknown_int_6E8(2)          // +0x6E8, IDA: *(this+0x6E8) = 2
    , unused_6EC(0)               // +0x6EC
{
    // IDA: InfantryClass::PerFrameUpdate called in constructor
    // IDA: CoCreateInstance of locomotor from Type+0x844
    // IDA: BuildingLoadQueue registration
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

// ============================================================
// InfantryClass_PowerDrainUpdate — vtable[13] (IDA 0x521C90, 160B)
// Per-frame power consumption for infantry (deployed units, etc.)
// Processes timer at this+1732/1736/1748 via Power_TimerProcess
// Processes flags at this+1753-1757 via Power_FlagProcess (5 flags)
// ============================================================

// ============================================================
// InfantryClass_LoadFromStream — vtable[5] (IDA 0x521960, 402B)
// COM IPersistStream::Load for infantry deserialization
// ============================================================

// ============================================================
// InfantryClass_PerFrameUpdate — vtable[9] (IDA 0x517CC0, 207B)
// Per-frame update delegating to FootClass_Update
// ============================================================

} // namespace gamemd
