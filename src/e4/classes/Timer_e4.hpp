// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Timer {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Start(DynamicVector * aP1);  // 0x46B640
    char StartDouble(double a2);  // 0x4A5240
    DWORD * Init(DWORD a2);  // 0x4F1B00
    int GetRemainingMs();  // 0x4F1B20
    HWND PumpMessages();  // 0x54F720
    double GetHighPrecision();  // 0x5B1E40
    void * EnableHighPrecision();  // 0x5D5870
    MMRESULT DisableHighPrecision();  // 0x5D5880
    int GetElapsed();  // 0x5F1390
    int UpdateDelta();  // 0x6C8820
    DWORD GetTicks();  // 0x6C8C40
    char SetFlag(char a2);  // 0x7500B0
    unsigned long long ReadTSC(unsigned int * a1);  // 0x7C6064
};
} // namespace gamemd
