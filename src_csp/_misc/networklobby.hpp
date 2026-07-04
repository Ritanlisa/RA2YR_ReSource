#pragma once
// CSP: NetworkLobby

class NetworkLobby {
public:
    uint8_t pad_0[21644]; // +0x0
    uint32_t member_548C; // +0x548C
    // 0x005E9510
    void CheckMinPlayers();
    // 0x005E96A0
    void CheckPlayerNameValid();
    // 0x005DC350
    void CreateGame();
    // 0x005DE520
    void DlgProc();
    // 0x005EE3A0
    void FillOptionCombo();
    // 0x005D4210
    void MessageList_Append();
    // 0x005DB9B0
    void UpdatePlayerList();
    // 0x005DC170
    void ValidateSerialNumber();
};
