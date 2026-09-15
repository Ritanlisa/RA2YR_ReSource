// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Power {
    void* vfptr;  // minimal E2 declaration
    int Update(int * a2);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    int ComputeHousePowerChecksum(unsigned int * a2);  // 0x68B940
    int FinalizeDrain(int a2);  // 0x4A1C10
    int FlagProcess(int a2);  // 0x4A1CA0
    int TimerProcess();  // 0x4A1D50
    char ChangedHouse(char a2);  // 0x750090
};
} // namespace gamemd
