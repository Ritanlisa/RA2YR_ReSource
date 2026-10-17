// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct CChatEventSink {
    unsigned int __pad_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int CChatEventSink_field_0x10;  // 0x10
    int q014;  // 0x14
    int CChatEventSink_field_0x18;  // 0x18
    int CChatEventSink_field_0x1C;  // 0x1C
    int CChatEventSink_field_0x20;  // 0x20
    int CChatEventSink_field_0x24;  // 0x24
    int CChatEventSink_field_0x28;  // 0x28
    int CChatEventSink_field_0x2C;  // 0x2C
    unsigned int CChatEventSink_field_0x30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    Coord * * HandleChatChannelList(int a1, int a2, const char * a3);
    ObjectClass * DeleteAndZero(char a2, void *a2_1 = 0);
    char EncodeString(char a2, void *a2_1 = 0);
    char EnsureCapacity(int a2);
    char Check(unsigned int * a2, int a3, void *a3_1 = 0);
    int ComputeBucketMask(int a2);
    int GrowBuffer();
    int ProcessChatEvent();
};

} // namespace gamemd
