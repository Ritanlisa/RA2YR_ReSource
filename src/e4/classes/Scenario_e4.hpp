// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Scenario {
    void* vfptr;  // minimal E2 declaration
    int ReadTeams();  // 0x44F820
    int FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3);  // 0x4758F0
    int CopyLocalScenarioData();  // 0x4C6180
    int ProcessSidebarUnits();  // 0x50D610
    int ComputeDisplayPosition();  // 0x552B10
    unsigned int * ComputeDialogPos(unsigned int * a2);  // 0x552BE0
    void Update();  // 0x55AFB0
    char LoadOrReloadOptions(IUnknown * aP1);  // 0x597A10
    void * ResetDisplayArrays();  // 0x5C9700
    int PreGameInit();  // 0x5E7460
    void SetByte96();  // 0x642AD0
    int SetDword32(int a2);  // 0x642B10
    int SetDword30(int a2);  // 0x642DF0
    HWND ClearScreen();  // 0x684240
    char LoadWithProgress();  // 0x684620
};
} // namespace gamemd
