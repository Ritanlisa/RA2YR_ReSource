// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Lobby {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int BuildPlayerList();
    int InvalidatePlayerSlots(HWND hDlg);
    int SetupPlayerWidgets(HWND hDlg);
    void UpdatePlayerLabels();
    static int InvalidateFactionCombos(Lobby * aP1);
    int FillPlayerFactions();  // 0x4e4820
    int UpdateReadyIcons(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F490
    int EnableStartButton(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F497
    int SetupAllFactionSlots(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46EA9C
    int UpdateReadyIcons();
    int EnableStartButton();
    int SetupAllFactionSlots();
};

} // namespace gamemd
