// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptClass;  // fix_fwd_type_supply
struct Mission_e4 {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    AbstractClass * ptr_54;  // 0x54
// --- flat members (END) ---
    int ExecuteTechnoMissionAction();  // 0x520AE0
    char ProcessUnitMissionAI();  // 0x520F40
    int  SetAndCall(int a2, int a3);  // 0x5BDA80
    char  AssignTeamMemberMissions(int a2, int a3);  // 0x6ED7E0
    int GetMissionDelay(void *a1_1);  // 0x70F770
};
} // namespace gamemd
