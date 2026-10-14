// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NetworkLobby {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int UpdatePlayerList();
    unsigned int MessageHandler_ph;  // w18j3: filler renamed (no offset truth; canon NetworkLobby::MessageHandler is a method)
    static unsigned int MessageHandler(NetworkLobby *p_this);  // x4:ida@0x5e00b0
    int MessageList_Append(int a2, int a3, wchar_t *aP3, char a5, int a6);  // 0x5D4210
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char q00C[45];  /* char[45] */  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    uint16_t u16_16C;  // X10 supply (member_lookup)
    int u16_2B8;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    int u32_1480;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2B0;  // X10 supply (member_lookup)
    unsigned int u32_2B4;  // X10 supply (member_lookup)
    unsigned int u32_2C4;  // X10 supply (member_lookup)
    unsigned int u32_2C8;  // X10 supply (member_lookup)
    unsigned int u32_6B;  // X10 supply (member_lookup)
    int u32_8;  // X10 supply (member_lookup)
    int u8_19;  // X10 supply (member_lookup)
    int u8_1A;  // X10 supply (member_lookup)
};
} // namespace gamemd
