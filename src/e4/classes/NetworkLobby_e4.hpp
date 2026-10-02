// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NetworkLobby {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char __pad_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char u8_19;  // 0x19
    unsigned char u8_1A;  // 0x1A
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q03D;  // 0x3D
    unsigned char __pad_3D[652];  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6B;  // 0x6B
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned char q134;  // 0x134
    unsigned int u16_16C;  // 0x16C
    unsigned int q260;  // 0x260
    unsigned int u32_2B0;  // 0x2B0
    unsigned int u32_2B4;  // 0x2B4
    unsigned int u16_2B8;  // 0x2B8
    unsigned int u32_2C4;  // 0x2C4
    unsigned int u32_2C8;  // 0x2C8
    unsigned char q308;  // 0x308
    unsigned int q310;  // 0x310
    unsigned int q364;  // 0x364
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q630;  // 0x630
    unsigned int q688;  // 0x688
    void* q6AC;  // 0x6AC
    void* q6B0;  // 0x6B0
    unsigned int MessageHandler;
    unsigned int Debug;
    unsigned int Dialog;
    unsigned int Timer;
    unsigned int Event;
// --- flat members (END) ---
    int MessageList_Append(int a2, int a3, wchar_t *aP3, char a5, int a6);  // 0x5D4210
    int CreateGame();  // 0x5DC350
         INT_PTRDlgProc(HWND hDlg, UINT, int nIDDlgItem, unsigned int lParam);  // 0x5DE520
    void SetupPlayers(wchar_t * Source);  // 0x5E8EA0
    int AssignPlayerSlot();  // 0x5E9240
    int InitLobbyDropdowns(SessionClass * hDlg);  // 0x5E9E00
    void * Dispatch();  // 0x5EA2A0
    int SetupPlayerSlotControls(HWND hDlg);  // 0x5EB660
    static char FillOptionCombo();  // 0x5EE3A0
    char CheckLobbyConditions();  // 0x5E9290
    wchar_t * DeleteAndZero();  // 0x5EDFC0
    int GetPlayerCount(char a1);  // 0x5DA080
    char ValidateSerialNumber();  // 0x5DC170
    BOOL IsValidPlayerName();  // 0x5E9470
    bool CheckMinPlayers();  // 0x5E9510
    char CheckPlayerNameValid();  // 0x5E96A0
    char CheckPlayerNames();  // 0x5E9720
    void UpdateLabels(HWND hDlg);  // 0x5EE6A0
};
} // namespace gamemd
