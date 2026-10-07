// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Lobby {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int Network;
// --- flat members (END) ---
    int BuildPlayerList();
    int InvalidatePlayerSlots(HWND hDlg);
    int SetupPlayerWidgets(HWND hDlg);
    void UpdatePlayerLabels();
    static int InvalidateFactionCombos(Lobby * aP1);  // G57w10-S raw 0x004E5310 (was C2597 interim stub)
    int FillPlayerFactions();  // 0x4e4820
    int UpdateReadyIcons(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F490
    int EnableStartButton(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F497
    int SetupAllFactionSlots(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46EA9C
    int UpdateReadyIcons();  // 0x46F490 G42.33 b3 (实例 0 参形)
    int EnableStartButton();  // 0x46F497 G42.33 b3 (实例 0 参形)
    int SetupAllFactionSlots();  // 0x46EA9C G42.33 b3 (实例 0 参形)
};

} // namespace gamemd
