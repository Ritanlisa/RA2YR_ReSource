// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NetworkLobby {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int UpdatePlayerList();
    unsigned int MessageHandler_ph;  // w18j3: filler renamed (no offset truth; canon NetworkLobby::MessageHandler is a method)
    static unsigned int MessageHandler(...);
    int  MessageList_Append(int a2, int a3, void * String, char a5, int a6);  // 0x5D4210
    int CreateGame();  // 0x5DC350
         INT_PTR DlgProc_Wnd(HWND hDlg, UINT msg, int nIDDlgItem, unsigned int lParam);
    void SetupPlayers(wchar_t * Source);  // 0x5E8EA0
    int AssignPlayerSlot();  // 0x5E9240
    int InitLobbyDropdowns(SessionClass * hDlg);  // 0x5E9E00
    void * Dispatch(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x5EA2A0
    int SetupPlayerSlotControls(HWND hDlg);  // 0x5EB660
    static char FillOptionCombo();  // 0x5EE3A0
    char CheckLobbyConditions();  // 0x5E9290
    wchar_t * DeleteAndZero(void *a1 = 0, void *a2 = 0);  // 0x5EDFC0
    static int  GetPlayerCount(char a1);  // 0x5DA080
    char ValidateSerialNumber();  // 0x5DC170
    BOOL IsValidPlayerName();  // 0x5E9470
    bool CheckMinPlayers();  // 0x5E9510
    char CheckPlayerNameValid();  // 0x5E96A0
    char CheckPlayerNames();  // 0x5E9720
    void UpdateLabels(HWND hDlg);  // 0x5EE6A0
    int DlgProc(HWND hDlg, UINT, WPARAM nIDDlgItem, unsigned int lParam, void * a2);
    char __pad_3D[960];  // 0x3D (ml)
};
} // namespace gamemd
