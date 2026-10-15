// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Session {
// --- flat members (BEGIN) ---
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
// --- flat members (END) ---
    int StartGame();
int RemoveTeam(int (***aP1)(unsigned int, int));  // 0x005d1d80 g57w12-r raw-sync (def-form)
    int PrepareGame(HWND hWnd);
    int GetPlayerOption();  // 0x69B700
    int AssignSide(int aP1, int aP2);  // G42.33 b10 member-form sync
    int AssignColor(int aP1, int aP2);  // G42.33 b10
    int SetPlayerOption(int aP1);  // G42.33 b10
    int SetPlayerColor(int aP1, void *a1 = 0);  // G42.33 b10
    int SetOption(int aP1);  // G42.33 b10
    int SetOption2(int aP1, void *a1 = 0);  // G42.33 b10
    int GetPlayerColor(void *a1 = 0);  // 0x69B720
    int StartGame(HWND hWnd);  // 0x5ED370
    unsigned int q018;  // 0x18 (offset-truth)
    void * field_178;  // 0x178
    void * field_174;  // 0x174
    unsigned int field_15C;  // [X30:default]
    unsigned int field_160;  // [X30:default]
    unsigned int field_18;  // [X30:default]
};
} // namespace gamemd
