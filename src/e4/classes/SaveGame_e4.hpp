// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct SaveGame {
    void* vfptr;  // minimal E2 declaration
    int CountLinkedList();  // 0x4073B0
    int SaveIteratedData(int a2);  // 0x413850
    int LoadArrayData(int * a2);  // 0x4391C0
    int SaveBlock68(int a2);  // 0x4C6340
    int WriteObject(int a1, int a2);  // 0x513CB0
    int WriteDataArray(int * a2);  // 0x54E750
    bool SaveTriggerEvents();  // 0x6607D0
    char Start(LPSTREAM pStm);  // 0x67D300
    int LoadMainGameState();  // 0x67F7E0
    bool SaveAudioData(int a2);  // 0x69B560
    int VtableDispatch(int a2);  // 0x721010
    char LoadVeinholeData();  // 0x74ED60
    int SaveAudioQueueItems();  // 0x751620
    int WriteMagicHeader();  // 0x7533B0
};
} // namespace gamemd
