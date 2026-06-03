#include "gamemd/structure/unit.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                              | static_cast<uint32_t>(AbstractFlags::Object)
                              | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x7353C0 — UnitClass::Construct (960B)
// Fields at byte offsets 0x6C0-0x6E4 from full object base
UnitClass::UnitClass() noexcept
    : unknown_int_6C0(static_cast<int>(-1))  // +0x6C0, IDA: *(this+0x6C0) = -1
    , Type(nullptr)              // +0x6C4, set by constructor parameter in IDA
    , FollowerCar(nullptr)       // +0x6C8, IDA: *(this+0x6C8) = 0
    , FlagHouseIndex(-1)         // +0x6CC, IDA: *(this+0x6CC) = -1
    , HasFollowerCar(false)      // +0x6D0, IDA: *(BYTE*)(this+0x6D0) = 0
    , Unloading(false)           // +0x6D1, IDA: *(BYTE*)(this+0x6D1) = 0
    , unknown_bool_6D2(false)    // +0x6D2, IDA: *(BYTE*)(this+0x6D2) = 0
    , TerrainPalette(false)      // +0x6D3, IDA: *(BYTE*)(this+0x6D3) = 0
    , unknown_int_6D4(static_cast<int>(-1))  // +0x6D4, IDA: *(this+0x6D4) = -1
    , DeathFrameCounter(static_cast<int>(-1)) // +0x6D8, IDA: *(this+0x6D8) = -1
    , ElectricBolt(nullptr)      // +0x6DC, IDA: *(this+0x6DC) = 0
    , Deployed(false)            // +0x6E0, IDA: *(BYTE*)(this+0x6E0) = 0
    , Deploying(false)           // +0x6E1, IDA: *(BYTE*)(this+0x6E1) = 0
    , Undeploying(false)         // +0x6E2, IDA: *(BYTE*)(this+0x6E2) = 0
    , NonPassengerCount(0)       // +0x6E4, IDA: *(this+0x6E4) = 0
{
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

// ============================================================
// UnitClass_PowerDrainUpdate — vtable[13] (IDA 0x744640, 159B)
// Per-frame power for units (deployed siege units, mobile factories)
// Gets speed from ILocomotion(vtable[44]) → Power_TimerProcess
// Gets type ID via vtable[16] → Power_TimerProcess
// Timers at this+1732/1736/1740, flags at this+1744-1746, 1671
// ============================================================

// ============================================================
// UnitClass_LoadFromStream — vtable[5] (IDA 0x744470, 391B)
// COM IPersistStream::Load for unit deserialization
// ============================================================

// ============================================================
// UnitClass_PerFrameUpdate — vtable[9] (IDA 0x746810, 167B)
// Per-frame update (speed/position/facing via ILocomotion)
// ============================================================

} // namespace gamemd
