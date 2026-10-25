#pragma once

#include "object.hpp"

namespace ra2 {
namespace game {

struct MissionControlData
{
    int     ArrayIndex;
    bool    NoThreat;
    bool    Zombie;
    bool    Recruitable;
    bool    Paralyzed;
    bool    Retaliate;
    bool    Scatter;
    double  Rate;
    double  AARate;
};

class MissionClass : public ObjectClass
{
public:
    // === X134: inherited-range overrides (Mission binary 0x7EDCC0 slots 0-121 where RVA != ObjectClass) ===
    virtual ~MissionClass();  // X134: slot 8 = 0x5B3A60 (deleting dtor)

    virtual int ProcessPower() override;  // X134 slot 13 = 0x5B3970 (base arity 0 per I525; impl reads 1 arg)
    virtual int DetectCloaked() override;  // X134 slot 23 = 0x5B3060 (head: char)
    virtual int processStateUpdate() override;  // X134 slot 97 = 0x5B3040 (signals: GetPrimaryOrFallback)

    // ========================================================================
    // X134: MissionClass own virtuals -- binary table 0x7EDCC0 slots [122]-[156] (35)
    // declaration order = slot order; arity = Capstone first-retn/4; stub values
    // from binary bodies (mov eax,imm; ret).
    // ========================================================================
    virtual int MissionDispatch(int a1, int a2);  // X134 slot 122 = 0x5B35E0 (promoted from non-virtual; def pending)
    virtual int AdvanceState();  // X134 slot 123 = 0x5B3570 (promoted from gap2)
    virtual int SetState(int a1);  // X134 slot 124 = 0x5B2FD0 (promoted from gap2; binary arity 1)
    virtual int COMStub_125(int a1, int a2, int a3);  // X134 slot 125 = 0x5B3650
    virtual int COMStub_126();  // X134 slot 126 = 0x5B36B0
    virtual bool HasValidTarget() const;  // X134 slot 127 = 0x5B3A10 (renamed from hasValidTarget)
    virtual bool isMissionDone() const;  // X134 slot 128 = 0x4E0140 (RVA-anchored; signals: getCurrentMission)
    virtual int Return450A();  // X134 slot 129 = 0x5B2E10
    virtual int Return450B();  // X134 slot 130 = 0x5B2E20
    virtual int Return450C();  // X134 slot 131 = 0x5B2E30
    virtual int StubReturn450();  // X134 slot 132 = 0x5B2E40
    virtual int StubReturn450_133();  // X134 slot 133 = 0x5B2E50
    virtual int COMStub_Ret450_134();  // X134 slot 134 = 0x5B2E60
    virtual int CheckState1();  // X134 slot 135 = 0x5B2E70
    virtual int CheckState2();  // X134 slot 136 = 0x5B2E80
    virtual int CheckMissionStatus();  // X134 slot 137 = 0x5B2E90
    virtual int COMStub_Ret450_138();  // X134 slot 138 = 0x5B2EA0
    virtual int COMStub_Ret450_139();  // X134 slot 139 = 0x5B2EB0
    virtual int COMStub_Ret450_140();  // X134 slot 140 = 0x5B2EC0
    virtual int Return450D();  // X134 slot 141 = 0x5B2ED0
    virtual int Return450E();  // X134 slot 142 = 0x5B2EE0
    virtual int GetMaxSize();  // X134 slot 143 = 0x5B2EF0
    virtual int COMStub_Ret450_144();  // X134 slot 144 = 0x5B2F00
    virtual int Return450G();  // X134 slot 145 = 0x5B2F10
    virtual int Return450H();  // X134 slot 146 = 0x5B2F20
    virtual int CheckMissionStatus2();  // X134 slot 147 = 0x5B2F30
    virtual int Return450I();  // X134 slot 148 = 0x5B2F40
    virtual int Return450J();  // X134 slot 149 = 0x5B2F50
    virtual int COMStub_Ret450_150();  // X134 slot 150 = 0x5B2F60
    virtual int COMStub_Ret450_151();  // X134 slot 151 = 0x5B2F70
    virtual int Return450K();  // X134 slot 152 = 0x5B2F80
    virtual int Return450L();  // X134 slot 153 = 0x5B2F90
    virtual int Return450F();  // X134 slot 154 = 0x5B2FA0
    virtual int Return450M();  // X134 slot 155 = 0x5B2FB0
    virtual int Return450N();  // X134 slot 156 = 0x5B2FC0

    // --- X134: demoted phantoms (non-virtual; no binary slot in any chain table) ---
    bool queueMission(Mission mission, bool start_mission);
    bool nextMission();
    void forceMission(Mission mission);
    void onMissionChanged(Mission mission);
    bool revertMission();
    HRESULT __stdcall Load(IStream* stream);  // 0x5B3760 (Mission table slot 5 = base impl 0x5F5E80; not an override)
    int Mission_Sleep();
    int Mission_Harmless();
    int Mission_Ambush();
    int Mission_Attack();
    int Mission_Capture();
    int Mission_Eaten();
    int Mission_Guard();
    int Mission_AreaGuard();
    int Mission_Harvest();
    int Mission_Hunt();
    int Mission_Move();
    int Mission_Retreat();
    int Mission_Return();
    int Mission_Stop();
    int Mission_Unload();
    int Mission_Enter();
    int Mission_Construction();
    int Mission_Selling();
    int Mission_Repair();
    int Mission_Missile();
    int Mission_Open();
    int Mission_Rescue();
    int Mission_Patrol();
    int Mission_ParaDropApproach();
    int Mission_ParaDropOverfly();
    int Mission_Wait();
    int Mission_SpyPlaneApproach();
    int Mission_SpyPlaneOverfly();

    int32_t     currentMission;
    int32_t     suspendedMission;
    int32_t     queuedMission;
    bool        missionQueued;
    uint8_t     alignmentPaddingB9[3];
    int32_t     missionStatus;
    int32_t     missionStartTime;
    uint32_t    missionData;
    TimerStruct missionTimer;

protected:
    MissionClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool sub_41B5E0();  // 0x41B5E0
    int IsProducing();  // 0x454250
    void* Init();  // 0x49B610
    void* FindName();  // 0x5B3700
    void* GetMissionControl();  // 0x5B3A00
    static void * GetMissionControl(void *a1);  // W20M26 static supply (PR 0x44c819 mov ecx,ebp)
    int Construct(int a1, int a2, int a3);  // 0x6E8A90
    int OverrideMission_SyncLog();  // 0x7013A0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ExecuteTechnoMissionAction();  // 0x520ae0 -- Mission::ExecuteTechnoMissionAction
    int ProcessUnitMissionAI();  // 0x520f40 -- Mission::ProcessUnitMissionAI
    int AssignTeamMemberMissions(int a1, int a2);  // 0x6ed7e0 -- Mission::AssignTeamMemberMissions
    int GetMissionDelay();  // 0x70f770 -- Mission::GetMissionDelay
    // === SYMBOL-ANCHOR (END) ===
public:  // g57c5 W6 owner supply
    unsigned int q0CC;  // 0xCC g57c5 W6 (ml MissionClass@0xCC own)

    unsigned int abstractFlags;  // X10 supply (csp_canon_members)
    unsigned char ambientSoundController[20];  /* AudioController */  // X10 supply (csp_canon_members)
    BombClass* attachedBomb;  // X10 supply (csp_canon_members)
    TagClass* attachedTag;  // X10 supply (csp_canon_members)
    bool bombVisible;  // X10 supply (csp_canon_members)
    int32_t customSound;  // X10 supply (csp_canon_members)
    unsigned char customSound_controller[20];  /* AudioController */  // X10 supply (csp_canon_members)
    int32_t health;  // X10 supply (csp_canon_members)
    unsigned int nextArrayIndex;  // X10 supply (member_lookup)
    ObjectClass* nextObject;  // X10 supply (csp_canon_members)
    int referenceCount;  // X10 supply (csp_canon_members)
    unsigned int spawnStatus;  // X10 supply (csp_canon_members)
    unsigned int uniqueId;  // X10 supply (csp_canon_members)
    unsigned int visibilityFlags;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)
    void* ptr_8;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)

    unsigned int q005;  // X10 supply (member_lookup)
    unsigned int q006;  // X10 supply (member_lookup)
    unsigned int q009;  // X10 supply (member_lookup)
};

} // namespace game
} // namespace ra2
