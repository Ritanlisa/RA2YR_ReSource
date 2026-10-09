// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Mission_e4 {
    void* vfptr;
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_34;  // 0x34
    unsigned int u32_888;  // 0x888
    unsigned int u32_5564;  // 0x5564
    char AssignTeamMemberMissions(ScriptClass * aP1, int a3);
    char ProcessUnitMissionAI();
    int ExecuteTechnoMissionAction();
    int GetMissionDelay(void *a1_1);
    int SetAndCall(int a2, int a3, void *a3_2);
};

} // namespace gamemd
