// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Session {
    char __pad_0[24];  // 0x0
    unsigned int field_18;  // 0x18
    char __pad_1C[320];  // 0x1C
    unsigned int field_15C;  // 0x15C
    unsigned int field_160;  // 0x160
    char __pad_164[16];  // 0x164
    void * field_174;  // 0x174
    void * field_178;  // 0x178
// --- flat members (BEGIN) ---
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
};
} // namespace gamemd
