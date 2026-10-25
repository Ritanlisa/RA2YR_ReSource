#include "object/mission.hpp"

namespace ra2 {
namespace game {

extern int& CurrentFrame;

MissionClass::MissionClass() noexcept
    : currentMission(-1)
    , suspendedMission(-1)
    , queuedMission(-1)
    , missionQueued(false)
    , missionStatus(0)
    , missionStartTime(0)
    , missionData(0)
    , missionTimer{}
{
    // IDA 0x5B2DA0: RadioClass base constructor sets missionStartTime = CurrentFrame
    // and initializes all mission fields to -1/0/false
    missionStartTime = (int32_t)(CurrentFrame);
}

bool MissionClass::queueMission(Mission mission, bool start_mission)
{
    if (start_mission)
    {
        suspendedMission = currentMission;
        currentMission = (int32_t)(mission);
        missionQueued = false;
        return true;
    }

    queuedMission = (int32_t)(mission);
    missionQueued = true;
    return true;
}

bool MissionClass::nextMission()
{
    if (missionQueued)
    {
        currentMission = queuedMission;
        missionQueued = false;
        missionStatus = 0;
        return true;
    }
    return false;
}

void MissionClass::forceMission(Mission mission)
{
    suspendedMission = currentMission;
    currentMission = (int32_t)(mission);
    missionQueued = false;
    missionStatus = 0;
}

bool MissionClass::revertMission()
{
    if (suspendedMission != 0)
    {
        currentMission = suspendedMission;
        suspendedMission = 0;
        missionStatus = 0;
        return true;
    }
    return false;
}

} // namespace game
} // namespace ra2


namespace ra2 { namespace game {

// --- MissionClass ---

HRESULT __stdcall MissionClass::Load(IStream* stream) { return S_OK; }
void MissionClass::onMissionChanged(Mission mission) {}
bool MissionClass::isMissionDone() const { return false; }
bool MissionClass::HasValidTarget() const { return false; }
int MissionClass::Mission_Sleep() { return 0; }
int MissionClass::Mission_Harmless() { return 0; }
int MissionClass::Mission_Ambush() { return 0; }
int MissionClass::Mission_Attack() { return 0; }
int MissionClass::Mission_Capture() { return 0; }
int MissionClass::Mission_Eaten() { return 0; }
int MissionClass::Mission_Guard() { return 0; }
int MissionClass::Mission_AreaGuard() { return 0; }
int MissionClass::Mission_Harvest() { return 0; }
int MissionClass::Mission_Hunt() { return 0; }
int MissionClass::Mission_Move() { return 0; }
int MissionClass::Mission_Retreat() { return 0; }
int MissionClass::Mission_Return() { return 0; }
int MissionClass::Mission_Stop() { return 0; }
int MissionClass::Mission_Unload() { return 0; }
int MissionClass::Mission_Enter() { return 0; }
int MissionClass::Mission_Construction() { return 0; }
int MissionClass::Mission_Selling() { return 0; }
int MissionClass::Mission_Repair() { return 0; }
int MissionClass::Mission_Missile() { return 0; }
int MissionClass::Mission_Open() { return 0; }
int MissionClass::Mission_Rescue() { return 0; }
int MissionClass::Mission_Patrol() { return 0; }
int MissionClass::Mission_ParaDropApproach() { return 0; }
int MissionClass::Mission_ParaDropOverfly() { return 0; }
int MissionClass::Mission_Wait() { return 0; }
int MissionClass::Mission_SpyPlaneApproach() { return 0; }
int MissionClass::Mission_SpyPlaneOverfly() { return 0; }

// ============================================================================
// X134: own-slot placeholder definitions (slots [122]-[156] without existing
// translations; bodies pending IDA-faithful translation)
// ============================================================================
int MissionClass::MissionDispatch(int a2, int a3) { (void)a2; (void)a3; return 0; }  // slot 122 = 0x5B35E0
int MissionClass::AdvanceState() { return 0; }  // slot 123 = 0x5B3570
int MissionClass::SetState(int a1) { (void)a1; return 0; }  // slot 124 = 0x5B2FD0
int MissionClass::COMStub_125(int a2, int a3, int a4) { (void)a2; (void)a3; (void)a4; return 0; }  // slot 125 = 0x5B3650
int MissionClass::COMStub_126() { return 0; }  // slot 126 = 0x5B36B0 (head: char)
int MissionClass::ProcessPower() { return 0; }  // X134 slot 13 = 0x5B3970 (arity divergence: impl reads 1 arg; I525)
int MissionClass::DetectCloaked() { return 0; }  // X134 slot 23 = 0x5B3060
int MissionClass::processStateUpdate() { return 0; }  // X134 slot 97 = 0x5B3040 (def merged from GetPrimaryOrFallback)
int MissionClass::Return450A() { return 450; }  // slot 129
int MissionClass::Return450B() { return 450; }  // slot 130
int MissionClass::Return450C() { return 450; }  // slot 131
int MissionClass::StubReturn450() { return 450; }  // slot 132
int MissionClass::StubReturn450_133() { return 450; }  // slot 133
int MissionClass::COMStub_Ret450_134() { return 450; }  // slot 134
int MissionClass::CheckState1() { return 450; }  // slot 135
int MissionClass::CheckState2() { return 450; }  // slot 136
int MissionClass::CheckMissionStatus() { return 450; }  // slot 137
int MissionClass::COMStub_Ret450_138() { return 450; }  // slot 138
int MissionClass::COMStub_Ret450_139() { return 450; }  // slot 139
int MissionClass::COMStub_Ret450_140() { return 450; }  // slot 140
int MissionClass::Return450D() { return 450; }  // slot 141
int MissionClass::Return450E() { return 450; }  // slot 142
int MissionClass::GetMaxSize() { return 450; }  // slot 143 = 0x5B2EF0
int MissionClass::COMStub_Ret450_144() { return 450; }  // slot 144
int MissionClass::Return450G() { return 450; }  // slot 145
int MissionClass::Return450H() { return 450; }  // slot 146
int MissionClass::CheckMissionStatus2() { return 450; }  // slot 147
int MissionClass::Return450I() { return 450; }  // slot 148
int MissionClass::Return450J() { return 450; }  // slot 149
int MissionClass::COMStub_Ret450_150() { return 450; }  // slot 150
int MissionClass::COMStub_Ret450_151() { return 450; }  // slot 151
int MissionClass::Return450K() { return 450; }  // slot 152
int MissionClass::Return450L() { return 450; }  // slot 153
int MissionClass::Return450F() { return 450; }  // slot 154
int MissionClass::Return450M() { return 450; }  // slot 155
int MissionClass::Return450N() { return 450; }  // slot 156

} // namespace game
} // namespace ra2
