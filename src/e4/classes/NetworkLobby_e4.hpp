// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NetworkLobby {
#pragma pack(push, 1)  // X60: binary-packed layout
    int __pad_0;  // 0x0
    int NetworkLobby_field_0x4;  // 0x4
    int NetworkLobby_field_0x8;  // 0x8
    unsigned char q00C[8];  // 0xC
    unsigned int u32_14;  // 0x14
    char __pad_18[1];  // 0x18
    unsigned char u8_19;  // 0x19
    unsigned char u8_1A;  // 0x1A
    char __pad_1B[9];  // 0x1B
    unsigned int u32_24;  // 0x24
    char __pad_28[17];  // 0x28
    char NetworkLobby_field_0x39[4];  // 0x39
    char __pad_3D[960];  // 0x3D
    unsigned int __pad_3FD;  // 0x3FD
    char __pad_401[683];  // 0x401
    int NetworkLobby_field_0x6AC;  // 0x6AC
    int NetworkLobby_field_0x6B0;  // 0x6B0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int UpdatePlayerList();
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
#pragma pack(pop)
};
} // namespace gamemd
