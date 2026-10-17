// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SaveGame {
    char __pad_0[180];  // 0x0
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
