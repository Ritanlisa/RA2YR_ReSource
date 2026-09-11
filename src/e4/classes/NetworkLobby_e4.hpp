// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct NetworkLobby {
    void* vfptr;  // minimal E2 declaration
    int MessageList_Append(int a2, int a3, CellStruct * aP3, char a5, int a6);  // 0x5D4210
    int GetPlayerCount(char a1);  // 0x5DA080
    char ValidateSerialNumber();  // 0x5DC170
    char CreateGame();  // 0x5DC350
    INT_PTR DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam);  // 0x5DE520
    void SetupPlayers();  // 0x5E8EA0
    int AssignPlayerSlot();  // 0x5E9240
    char CheckLobbyConditions();  // 0x5E9290
    BOOL IsValidPlayerName();  // 0x5E9470
    bool CheckMinPlayers();  // 0x5E9510
    char CheckPlayerNameValid();  // 0x5E96A0
    char CheckPlayerNames();  // 0x5E9720
    int InitLobbyDropdowns();  // 0x5E9E00
    HWND * Dispatch();  // 0x5EA2A0
    char SetupPlayerSlotControls();  // 0x5EB660
    wchar_t * DeleteAndZero();  // 0x5EDFC0
    char FillOptionCombo();  // 0x5EE3A0
    void UpdateLabels();  // 0x5EE6A0
};
} // namespace gamemd
