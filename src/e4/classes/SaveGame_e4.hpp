// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SaveGame {
// --- flat members (BEGIN) ---
    unsigned char q004;  // 0x4
    bool q00A;  // 0xA
    unsigned int u32_10;  // 0x10
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q028;  // 0x28
    unsigned int q034;  // 0x34
    unsigned int q050;  // 0x50
    unsigned int q064;  // 0x64
    unsigned int q080;  // 0x80
    void* q0B4;  // 0xB4
    unsigned int q100;  // 0x100
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    void* q180;  // 0x180
    unsigned int q304;  // 0x304
    void* q384;  // 0x384
    unsigned int q598;  // 0x598
    void* q900;  // 0x900
    unsigned int qA13;  // 0xA13
    unsigned int q1634;  // 0x1634
    void* q2304;  // 0x2304
    unsigned int q5170;  // 0x5170
    unsigned int q5684;  // 0x5684
    unsigned int *__pad_0;
// --- flat members (END) ---
    int LoadArrayData(int * a2);  // 0x4391C0
    int WriteDataArray(int * a2);  // 0x54E750
    int SaveTriggerEvents();  // 0x6607D0
    void Start();  // 0x67D300
    int LoadMainGameState();  // 0x67F7E0
    int LoadVeinholeData();  // 0x74ED60
    int SaveAudioQueueItems();  // 0x751620
    int CountLinkedList(void *a1_1);  // 0x4073B0
    int SaveIteratedData(int a2);  // 0x413850
    int SaveBlock68(int a2);  // 0x4C6340
    int WriteObject(int a1, int a2);  // 0x513CB0
    bool SaveAudioData(int a2);  // 0x69B560
    int VtableDispatch(int a2);  // 0x721010
    int WriteMagicHeader();  // 0x7533B0
};
} // namespace gamemd
