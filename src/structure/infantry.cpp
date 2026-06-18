#include "structure/infantry.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
// Note: fields at byte offsets 0x6C0-0x6EC from full object base
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)              // +0x6C0, set by constructor parameter in IDA
    , SequenceAnim(static_cast<Sequence>(-1))  // +0x6C4, IDA: *(this+0x6C4) = -1
    , InfantryClass_field_timer_6C8{}         // +0x6C8, IDA: *(this+0x6C8) = CurrentFrame
    , PanicDurationLeft(0)        // +0x6D0, IDA: *(this+0x6D0) = 0
    , PermanentBerzerk(false)     // +0x6D4, IDA: *(this+0x6D8)=0 (byte)
    , Technician(false)           // +0x6D5, IDA: *(this+0x6D9)=0
    , InfantryClass_field_bool_6DA(false)     // +0x6DA, IDA: *(this+0x6DA)=0
    , Crawling(false)             // +0x6DB, IDA: *(this+0x6DB)=0
    , InfantryClass_field_bool_6DC(false)     // +0x6DC, IDA: *(this+0x6DC)=0
    , InfantryClass_field_bool_6DD(false)     // +0x6DD, IDA: *(this+0x6DD)=0
    , InfantryClass_field_6E0(0)              // +0x6E0, IDA: *(this+0x6E0) = 0
    , ShouldDeploy(false)         // +0x6E4, IDA: *(BYTE*)(this+0x6E4) = 0
    , InfantryClass_field_int_6E8(2)          // +0x6E8, IDA: *(this+0x6E8) = 2
    , unused_6EC(0)               // +0x6EC
{
    // IDA: InfantryClass::PerFrameUpdate called in constructor
    // IDA: CoCreateInstance of locomotor from Type+0x844
    // IDA: BuildingLoadQueue registration
    abstractFlags = kInfantryFlag;
}

// ============================================================
// Mission_Enter -- RA1 FootClass::Mission_Enter pattern
// Single-state radio-based coordination loop
// ============================================================
int InfantryClass::Mission_Enter()
{
    // RA1: Contact transporter via RADIO_DOCKING
    // Find who to coordinate with -- radio contact or archive target
    // If contact exists: send RADIO_DOCKING, wait for RADIO_ROGER
    // If transport says "bug off" -> enter idle mode
    // If no contact -> enter idle mode

    // Contact_With_Whom() equivalent: check current radio link
    // if (!contact) contact = As_Techno(archiveTarget);

    // if (contact) {
    //     if (sendCommand(RADIO_DOCKING, contact) != RADIO_ROGER && !IsTethered) {
    //         sendCommand(RADIO_OVER_OUT, contact);
    //         queueMission(Mission::Guard, true);
    //     }
    // } else {
    //     queueMission(Mission::Guard, true);
    // }

    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    // Paradrop: descend via parachute animation
    hasParachute = true;

    // Check ground proximity -- if reached ground, deploy unit
    // if (location.Z <= ground_z) {
    //     hasParachute = false;
    //     queueMission(Mission::Guard, true);
    // }

    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    // Paradrop flyover: horizontal movement before drop
    // Fly toward drop zone at aircraft speed
    // When over target, transition to ParadropApproach

    // if (distance_to_drop_zone < threshold) {
    //     queueMission(Mission::ParadropApproach, true);
    // }

    return 5;
}

// ============================================================
// InfantryClass_PowerDrainUpdate -- vtable[13] (IDA 0x521C90, 160B)
// Per-frame power consumption for infantry (deployed units, etc.)
// Processes timer at this+1732/1736/1748 via Power_TimerProcess
// Processes flags at this+1753-1757 via Power_FlagProcess (5 flags)
// ============================================================

// ============================================================
// InfantryClass_LoadFromStream -- vtable[5] (IDA 0x521960, 402B)
// COM IPersistStream::Load for infantry deserialization
// ============================================================

// ============================================================
// InfantryClass_PerFrameUpdate -- vtable[9] (IDA 0x517CC0, 207B)
// Per-frame update delegating to FootClass_Update
// ============================================================

// ============================================================
// InfantryClass::Draw (IDA 0x518F90, 1689B)
// Draws the infantry unit at its screen position.
//
// Steps:
//   1. Get draw position (vtable[112] for screen coords)
//   2. Check for parachute state (draw parachute SHP)
//   3. Check locomotor type:
//      a. Drive locomotor: draw POD.SHP + occupant
//      b. Other: draw SHP from Type->GetImage
//   4. Apply fog/shroud color tint
//   5. Draw selection/health indicators
// ============================================================
void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    // Step 1: Get draw offset
    Point2D draw_pos = *screen_pos;

    // Step 2: Check fog/shroud tinting
    // IDA: RulesClass_Instance->color_tables determine fog color
    uint32_t color_flags = 0;

    // Step 3: Draw the infantry SHP image
    // Infantry use SHP-based rendering with locomotion-based frame selection
    // For drive-type locomotor, draws POD.SHP with the vehicle
    // For walk-type, draws the infantry SHP directly

    // Step 4: Draw parachute if hasParachute is set
    if (hasParachute && parachute)
    {
        // Draw parachute SHP above the infantry
        // DrawToSurfaceSHP(DSurface_Hidden_2, palette, parachute_shp, frame,
        //                  &draw_pos, bounds, ...)
    }

    // Step 5: Draw shadow (if on ground)
    // IDA: INFSHDW.SHP shadow rendering when unit is above ground

    // Step 6: Draw selection box, health bar, pips via TechnoClass helpers
    (void)bounds;
    (void)color_flags;
}

// ============================================================
// InfantryClass::DrawShadow (helper)
// Draws the infantry shadow beneath the unit.
// ============================================================
void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd
