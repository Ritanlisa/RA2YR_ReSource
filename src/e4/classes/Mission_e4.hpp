// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptClass;  // fix_fwd_type_supply
struct Mission_e4 {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_34;  // 0x34
    unsigned int u32_888;  // 0x888
    unsigned int u32_5564;  // 0x5564
// --- flat members (END) ---
    int ExecuteTechnoMissionAction();  // 0x520AE0
    char ProcessUnitMissionAI();  // 0x520F40
    int SetAndCall(int a2, int a3, void *a3_2);  // 0x5BDA80
    char AssignTeamMemberMissions(ScriptClass * aP1, int a3);  // 0x6ED7E0
    int GetMissionDelay(void *a1_1);  // 0x70F770
};
} // namespace gamemd
