// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct CChatEventSink {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
// --- flat members (END) ---
    Coord * * HandleChatChannelList(int a1, int a2, const char * a3);
    ObjectClass * DeleteAndZero(char a2);
    char EncodeString(char a2);
    char EnsureCapacity(int a2);
    char Check(_DWORD *a2, int a3);
    int ComputeBucketMask(int a2);
    int GrowBuffer();
    int ProcessChatEvent();
};

} // namespace gamemd
