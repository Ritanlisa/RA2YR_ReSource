// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Session {
// --- flat members (BEGIN) ---
    unsigned int field_18;  // 0x12
    unsigned int u32_16;  // 0x16
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q128;  // 0x128
    void* q15C;  // 0x15C
    void* q160;  // 0x160
    void* q174;  // 0x174
    void* q178;  // 0x178
    unsigned int MPlayerMax;  // 0x310
    unsigned int MPlayerCount;  // 0x314
    unsigned int MaxAhead;  // 0x318
    unsigned int FrameSendRate;  // 0x31C
    unsigned int DesiredFrameRate;  // 0x320
    unsigned int ProcessTimer;  // 0x324
    unsigned int ProcessTicks;  // 0x328
    unsigned int ProcessFrames;  // 0x32C
    unsigned int MaxMaxAhead;  // 0x330
    unsigned int PrecalcMaxAhead;  // 0x334
    unsigned int PrecalcDesiredFrameRate;  // 0x338
    unsigned int Name;  // 0x33C
    void* q348;  // 0x348
    unsigned int MaxRoundTrip;  // 0x37C
    unsigned int Resends;  // 0x380
    unsigned int Lost;  // 0x384
    unsigned int PercentLost;  // 0x388
    unsigned int MaxAvgRoundTrip;  // 0x38C
    unsigned int FrameSyncStalls;  // 0x390
    unsigned int CommandCoundStalls;  // 0x394
    unsigned int LoadGame;  // 0x680
    unsigned int SaveGame;  // 0x684
    unsigned int SawCompletion;  // 0x689
    unsigned int OutOfSync;  // 0x68A
    unsigned int GameVersion;  // 0x68C
    unsigned int q774;  // 0x774
    unsigned int q784;  // 0x784
    unsigned int q788;  // 0x788
    unsigned int q800;  // 0x800
    unsigned int q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned int q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned int q828;  // 0x828
    void* q840;  // 0x840
    void* q850;  // 0x850
    unsigned int q900;  // 0x900
    unsigned int q904;  // 0x904
    unsigned int q908;  // 0x908
    unsigned int qA13;  // 0xA13
    unsigned int q1634;  // 0x1634
    unsigned int q1664;  // 0x1664
    unsigned int q1668;  // 0x1668
    unsigned int q1674;  // 0x1674
    unsigned int q1908;  // 0x1908
    unsigned int q1924;  // 0x1924
    unsigned int q1928;  // 0x1928
    unsigned int q1938;  // 0x1938
    unsigned int q2048;  // 0x2048
    unsigned int q2070;  // 0x2070
    unsigned int q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned int q2088;  // 0x2088
    void* q2128;  // 0x2128
    void* q2178;  // 0x2178
    unsigned int q2194;  // 0x2194
    unsigned int q2198;  // 0x2198
    unsigned int q2304;  // 0x2304
    unsigned int q2308;  // 0x2308
    unsigned int q5748;  // 0x5748
    unsigned int q5750;  // 0x5750
    unsigned int q6408;  // 0x6408
    unsigned int q6440;  // 0x6440
    unsigned int field_15C;
    unsigned int field_160;
    unsigned int field_174;
    unsigned int field_178;
    unsigned int Debug;
    unsigned int Dialog;
    unsigned int Timer;
    unsigned int Event;
// --- flat members (END) ---
    int RemoveTeam(int (__thiscall ***aP1)(unsigned int, int));  // 0x5D1D80
    int PrepareGame(HWND hWnd);  // 0x5E74E0
    int GetPlayerOption();  // 0x69B700
    int GetPlayerColor();  // 0x69B720
    int StartGame(HWND hWnd);  // 0x5ED370
};
} // namespace gamemd
