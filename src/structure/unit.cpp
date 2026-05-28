#include "gamemd/structure/unit.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                              | static_cast<uint32_t>(AbstractFlags::Object)
                              | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

UnitClass::UnitClass() noexcept
    : unknown_int_6C0(0)
    , Type(nullptr)
    , FollowerCar(nullptr)
    , FlagHouseIndex(-1)
    , HasFollowerCar(false)
    , Unloading(false)
    , unknown_bool_6D2(false)
    , TerrainPalette(false)
    , unknown_int_6D4(0)
    , DeathFrameCounter(0)
    , ElectricBolt(nullptr)
    , Deployed(false)
    , Deploying(false)
    , Undeploying(false)
    , NonPassengerCount(0)
{
    std::memset(ToolTipText, 0, sizeof(ToolTipText));

    m_abstract_flags = kUnitFlag;
}

// ============================================================
// Mission_Harvest — RA1 5-state harvester state machine
// States: LOOKING=0 → HARVESTING=1 → FINDHOME=2 → HEADINGHOME=3 → GOINGTOIDLE=4
// ============================================================
int UnitClass::Mission_Harvest()
{
    enum { LOOKING, HARVESTING, FINDHOME, HEADINGHOME, GOINGTOIDLE };

    switch (m_mission_status)
    {
    case LOOKING:
    {
        // Full → skip to finding refinery
        // if (Tiberium_Load() == 1) {
        //     m_mission_status = FINDHOME;
        //     return 1;
        // }

        // Head to last known ore patch
        if (m_last_target)
        {
            m_destination = m_last_target;
            m_last_target = nullptr;
        }

        // Scan for tiberium/ore
        // if (Goto_Tiberium(scan_range)) {
        //     m_mission_status = HARVESTING;
        // }
        // else if (!m_destination) {
        //     // No ore found and no destination → idle
        //     m_mission_status = GOINGTOIDLE;
        // }

        return 10;
    }

    case HARVESTING:
    {
        // Harvest until full or ore exhausted
        // if (!Harvesting()) {
        //     if (Tiberium_Load() == 1) {
        //         // Archive current cell as last harvest site
        //         m_mission_status = FINDHOME;
        //     } else {
        //         // Try nearby ore scan
        //         m_mission_status = LOOKING;
        //     }
        // }
        return 10;
    }

    case FINDHOME:
    {
        // Find nearest refinery with docking bay
        // BuildingClass* nearest = Find_Docking_Bay(STRUCT_REFINERY, false);
        // if (nearest && SendCommand(RADIO_HELLO, nearest) == RADIO_ROGER) {
        //     m_mission_status = HEADINGHOME;
        // }
        return 10;
    }

    case HEADINGHOME:
    {
        // Delegate docking to Mission_Enter
        QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Enter)), true);
        return 10;
    }

    case GOINGTOIDLE:
    {
        // Nothing to harvest — fallback to guard or repair
        QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
        return 10;
    }
    }

    return 10;
}

int UnitClass::Mission_Unload()
{
    if (!HasFollowerCar)
        return 0;

    Unloading = true;

    // Eject passengers at current position
    // for each passenger in m_passengers:
    //     passenger->Scatter(0, true);
    //     passenger->QueueMission(Mission::Guard, true);

    return 5;
}

} // namespace gamemd
