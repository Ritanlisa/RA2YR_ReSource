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
    char AssignTeamMemberMissions(ScriptClass * aP1, int a3);  // 0x6ED7E0
    int GetMissionDelay(void *a1_1);  // 0x70F770

    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_294;  // X10 supply (member_lookup)
    unsigned int u32_2B4;  // X10 supply (member_lookup)
    unsigned int u32_5A4;  // X10 supply (member_lookup)
    unsigned int u32_674;  // X10 supply (member_lookup)
    unsigned int u32_6C0;  // X10 supply (member_lookup)
    unsigned int u32_6C4;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    double u64_578;  // X10 supply (member_lookup)
};
} // namespace gamemd
