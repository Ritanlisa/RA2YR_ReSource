// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Lobby {
    int __pad_000;  // 0x0
    int Lobby_field_0x04;  // 0x4
    int Lobby_field_0x08;  // 0x8
    int Lobby_field_0x0C;  // 0xC
    int Lobby_field_0x10;  // 0x10
    int Lobby_field_0x14;  // 0x14
    int Lobby_field_0x18;  // 0x18
    int Lobby_field_0x1C;  // 0x1C
    int Lobby_field_0x20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int BuildPlayerList();
    int InvalidatePlayerSlots(HWND hDlg);
    int SetupPlayerWidgets(HWND hDlg);
    void UpdatePlayerLabels();
    static int InvalidateFactionCombos(Lobby * aP1);
    int FillPlayerFactions(void *a1 = 0);  // 0x4e4820
    int UpdateReadyIcons(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F490
    int EnableStartButton(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F497
    int SetupAllFactionSlots(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46EA9C
    int UpdateReadyIcons();
    int EnableStartButton();
    int SetupAllFactionSlots();
};

} // namespace gamemd
