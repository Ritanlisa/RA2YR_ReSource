// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SaveGame {
    char __pad_0[4];  // 0x0
    unsigned int q004;  // 0x4
    char __pad_8[8];  // 0x8
    unsigned int u32_10;  // 0x10
    char __pad_14[8];  // 0x14
    unsigned int u32_1C;  // 0x1C
    char __pad_20[8];  // 0x20
    unsigned int q028;  // 0x28
    char __pad_2C[136];  // 0x2C
    void* q0B4;  // 0xB4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  LoadArrayData(int * a2);  // 0x4391C0
    int  WriteDataArray(int * a2);  // 0x54E750
    int SaveTriggerEvents();  // 0x6607D0
    char Start(void *a1 = 0, void *a2 = 0);  // 0x67D300
    int LoadMainGameState();  // 0x67F7E0
    int LoadVeinholeData();  // 0x74ED60
    int SaveAudioQueueItems();  // 0x751620
    int CountLinkedList(void *a1_1);  // 0x4073B0
    int  SaveIteratedData(int a2);  // 0x413850
    int  SaveBlock68(int a2);  // 0x4C6340
    int  WriteObject(int a2, int a2_x = 0);  // 0x513CB0
    bool  SaveAudioData(int a2);  // 0x69B560
    int  VtableDispatch(int a2);  // 0x721010
    int WriteMagicHeader();  // 0x7533B0
};
} // namespace gamemd
