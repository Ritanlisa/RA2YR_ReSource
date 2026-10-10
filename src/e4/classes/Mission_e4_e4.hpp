// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Mission_e4 {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    AbstractClass * ptr_54;  // 0x54
// --- flat members (END) ---
    char AssignTeamMemberMissions(ScriptClass * aP1, int a3);
    char ProcessUnitMissionAI();
    int ExecuteTechnoMissionAction();
    int GetMissionDelay(void *a1_1);
    int SetAndCall(int a2, int a3, void *a3_2);
};

} // namespace gamemd
