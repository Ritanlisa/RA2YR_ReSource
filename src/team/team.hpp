#pragma once

#include "object/abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif

class TeamTypeClass;
class ScriptClass;
class HouseClass;
class FootClass;
class TechnoTypeClass;
class TagClass;
class CellClass;

class TeamClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Team;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }       // 0x6EC540 (SaveLoad_Prefix_0)
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }             // 0x6EC450 (SaveLoad_Prefix)
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; } // 0x6EC540

    virtual ~TeamClass() = default;                                                      // 0x6EC560 (ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::Team; } // 0x6EC560
    virtual int objectSize() const override { return 0; }                               // 0x6EC560

    // core methods
    void GetTaskForceMissingMemberTypes(TechnoTypeClass** dest, int& dest_count) const;  // 0x6F1FA0 (TeamTypeClass::ProcessTaskForce)
    void LiberateMember(FootClass* foot, int idx = -1, uint8_t count = 0);               // 0x6EA870 (LiberateMember_Start)
    void LiberateMember_Start(FootClass* foot, int idx, uint8_t count);                  // 0x6EA870
    void RecruitMember(FootClass* foot, int idx);                                        // 0x6EAA90
    void AddMember(FootClass* foot);                                                     // 0x6EA500
    bool ValidateMember(FootClass* foot);                                                // 0x6EA610
    void RemoveAllMembers();                                                             // 0x636120
    void DestroyAllMembers();                                                            // 0x6340B0
    FootClass* GetMember(int index);                                                      // 0x635C10
    int GetLeaderIndex() const;                                                          // 0x6339B0
    FootClass* SelectMember(int idx);                                                     // 0x6E9050

    // script / action
    void ProcessScriptActions();                                                         // 0x636980
    bool FindScriptAction(int action);                                                   // 0x633EA0
    bool GetNextScriptAction();                                                          // 0x633F20
    void ExecuteAction(int action);                                                      // 0x6EAE60
    void SetField11();                                                                   // 0x6915A0

    // update
    void Update();                                                                       // 0x6E9140
    void Update_0();                                                                     // 0x6E53A0
    void UpdateMembers();                                                                // 0x6EBAD0
    void UpdateReadinessState();                                                         // 0x6EA3E0
    void UpdateBuildQueue();                                                             // 0x6367B0
    void ProcessMemberPositions();                                                       // 0x6EBF50
    void WakeUpAllMembers();                                                             // 0x6EC3A0
    void Check();                                                                        // 0x6915B0

    // coordination
    FootClass* FindClosestEnemy(FootClass* foot);                                         // 0x6EAEE0
    void AttackCoordinator();                                                            // 0x6EB490
    void CheckCohesion();                                                                // 0x4D9E70
    bool HasAnyMemberFlagged(int flag) const;                                             // 0x4E0080
    void MoveTeamToWaypoint(CellStruct target);                                          // 0x6EC7D0

    // lifecycle
    static TeamClass* FindOrCreate(TeamTypeClass* type);                                  // 0x6E52A0
    static int CountActiveTeamsForType(TeamTypeClass* type);                              // 0x5095D0
    static TeamClass* FindByMemberType(TechnoTypeClass* type);                             // 0x635A40
    void DisbandTeam();                                                                  // 0x577BB0
    void Reset();                                                                        // 0x635DB0
    void Cleanup();                                                                      // 0x636B50
    void Destructor();                                                                   // 0x6E8DE0
    void DeployUnit(FootClass* foot);                                                     // 0x62A260
    void PowerDrainUpdate();                                                             // 0x6EC5A0

    // save/load
    void SaveLoad_Prefix(IStream* stream);                                                // 0x6EC450
    void SaveLoad_Prefix_0(IStream* stream);                                              // 0x6EC540

    TeamTypeClass*  buildingType;
    ScriptClass*    currentScript;
    HouseClass*     owner;
    HouseClass*     target;
    CellClass*      spawnCell;
    uint32_t        unknown38;
    AbstractClass*  queuedFocus;
    AbstractClass*  focus;
    int32_t         unknown44;
    int32_t         totalObjects;
    int32_t         totalThreatValue;
    int32_t         creationFrame;
    FootClass*      firstUnit;
    TimerStruct     guardAreaTimer;
    TimerStruct     suspendTimer;
    TagClass*       tag;
    bool            unknown74;
    bool            unknown75;
    bool            unknown76;
    bool            unknown77;
    bool            spawnStatus;
    bool            unknown79;
    bool            TeamClass_field_7A;
    bool            TeamClass_field_7B;
    bool            visibilityFlags;
    bool            needsToDisappear;
    bool            TeamClass_field_7E;
    bool            TeamClass_field_7F;
    bool            stepCompleted;
    bool            unknown81;
    bool            unknown82;
    bool            isSuspended;
    bool            achievedGreatSuccess;
    bool            unknown85;
    bool            unknown86;
    bool            unknown87;
    int32_t         countObjects[6];

protected:
    TeamClass() = default;
};

} // namespace gamemd
