// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptClass;  // fix_fwd_type_supply
struct Mission_e4 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    ScriptClass * ptr_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void * ptr_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    void * ptr_54;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned char q08C;  // 0x8C
    unsigned char q098;  // 0x98
    unsigned int u32_AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    unsigned char q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned int u32_F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int u32_10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void * q130;  // 0x130
    unsigned char q138;  // 0x138
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned int u32_1A0;  // 0x1A0
    unsigned char q264;  // 0x264
    unsigned char q280;  // 0x280
    unsigned int u32_294;  // 0x294
    unsigned int u32_2BC;  // 0x2BC
    unsigned char q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned char q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned int u32_6C0;  // 0x6C0
    unsigned int *__pad_0;
    unsigned int *__pad_18C;
    unsigned int *__pad_5B8;
    unsigned int *__pad_C;
    unsigned int u32_100;
    unsigned int Mission_field_0x180;
    unsigned int Mission_field_0x188;
// --- flat members (END) ---
    int ExecuteTechnoMissionAction();  // 0x520AE0
    char ProcessUnitMissionAI();  // 0x520F40
    int SetAndCall(int a2, int a3, void *a3_2);  // 0x5BDA80
    char AssignTeamMemberMissions(ScriptClass * aP1, int a3);  // 0x6ED7E0
    int GetMissionDelay(void *a1_1);  // 0x70F770
};
} // namespace gamemd
