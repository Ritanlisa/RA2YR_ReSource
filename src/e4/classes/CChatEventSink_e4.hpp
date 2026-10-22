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
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    unsigned int q030;  // 0x30
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
