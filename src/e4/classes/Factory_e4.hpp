// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Factory {
    unsigned int __pad_0;  // 0x0
    unsigned int field_4;  // 0x4
    unsigned int field_8;  // 0x8
    char __pad_C[4];  // 0xC
    unsigned int field_10;  // 0x10
    char __pad_14[32];  // 0x14
    void* q034;  // 0x34
    char __pad_38[100];  // 0x38
    void* q09C;  // 0x9C
    char __pad_A0[144];  // 0xA0
    void* q130;  // 0x130
    char __pad_134[328];  // 0x134
    void* q27C;  // 0x27C
    char __pad_280[132];  // 0x280
    void* q304;  // 0x304
    char __pad_308[668];  // 0x308
    void* q5A4;  // 0x5A4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetLinkedIndex(int aP1);  // 0x663D60
    int FindExitCellByName();  // 0x523C90
    int IdleHandler();  // 0x731CD0
};
} // namespace gamemd
