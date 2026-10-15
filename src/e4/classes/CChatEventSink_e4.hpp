// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct CChatEventSink {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    Coord * * HandleChatChannelList(int a1, int a2, const char * a3);
    ObjectClass * DeleteAndZero(char a2, void *a2_1 = 0);
    char EncodeString(char a2, void *a2_1 = 0);
    char EnsureCapacity(int a2);
    char Check(unsigned int * a2, int a3, void *a3_1 = 0);
    int ComputeBucketMask(int a2);
    int GrowBuffer();
    int ProcessChatEvent();
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_84;  // 0x84 (offset-truth)

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    int q014;  // 0x14
};

} // namespace gamemd
