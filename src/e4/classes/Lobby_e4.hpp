// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Lobby {
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
