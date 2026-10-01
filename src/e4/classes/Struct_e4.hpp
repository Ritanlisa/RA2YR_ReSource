// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Struct {
// --- flat members (BEGIN) ---
    char Struct_field_00[4];  // 0x0
    unsigned int LastPacketTime;
    unsigned int PacketsReceived;
    unsigned int PacketsSent;
    unsigned int PhoneNumber;
    unsigned int PlayerIndex;
    unsigned int u32_14;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_20;
    unsigned int u32_24;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_30;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_4;
    unsigned int u32_40;
    unsigned int u32_44;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_54;
    unsigned int u32_8;
    unsigned int *__pad_0;
    unsigned int *__pad_14;
    unsigned int *__pad_28;
    unsigned int field_24;
    unsigned int field_34;
    unsigned int field_8;
// --- flat members (END) ---
    void ClearAllMemberFlags();
    int ZeroInit32(void *a1);
    int ZeroInitAndSetup(void *a1);
    int ZeroInitAndSetup_0();
    int ZeroInitAndSetup_0_0();
    unsigned char * Zero3();
    unsigned int * InitTriple256(unsigned int * a1);
    static double Zero25(...);  // C2597 interim stub
};

} // namespace gamemd
