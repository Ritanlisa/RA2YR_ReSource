// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MultiplayerGameMode;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct IPXManagerClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply
struct IPXInterfaceClass;  // fix_fwd_type_supply
struct MPCooperative {
    unsigned int MPCooperative_field_0x0;  // 0x0
    unsigned int __pad_004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    char __pad_20[12];  // 0x20
    int MPCooperative_field_0x2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    char __pad_34[4];  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    int MPCooperative_field_0x40;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    MultiplayerGameMode * ptr_50;  // 0x50
    unsigned int __pad_054;  // 0x54
    unsigned char q058[4];  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    char __pad_70[24];  // 0x70
    unsigned int q0088;  // 0x88
    char __pad_8C[16];  // 0x8C
    int MPCooperative_field_0x9C;  // 0x9C
    int MPCooperative_field_0xA0;  // 0xA0
    int MPCooperative_field_0xA4;  // 0xA4
    char __pad_A8[16];  // 0xA8
    int MPCooperative_field_0xB8;  // 0xB8
    int MPCooperative_field_0xBC;  // 0xBC
    int MPCooperative_field_0xC0;  // 0xC0
    int q0C4;  // 0xC4
    char __pad_C8[220];  // 0xC8
    int u32_1A4;  // 0x1A4
    char __pad_1A8[4];  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    char __pad_1B0[180];  // 0x1B0
    int q264;  // 0x264
    char __pad_268[188];  // 0x268
    unsigned int MPCooperative_field_0x324;  // 0x324
    unsigned int __pad_328;  // 0x328
    unsigned char q32C;  // 0x32C
    char __pad_32D[7];  // 0x32D
    unsigned char q334;  // 0x334
    char __pad_335[7];  // 0x335
    unsigned int MPCooperative_field_0x33C;  // 0x33C
    int q340;  // 0x340
    char __pad_344[720];  // 0x344
    int MPCooperative_field_0x614;  // 0x614
    char __pad_618[4];  // 0x618
    int MPCooperative_field_0x61C;  // 0x61C
    char __pad_620[3012];  // 0x620
    int MPCooperative_field_0x11E4;  // 0x11E4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  processTurn(char * a2, char * a3);  // 0x49B660
    int BuildScoreEntries(int a2, CCINIClass * aP2);  // 0x49BCE0
    int WriteCoopSaveINI();  // 0x49BE40
    int ReadCoopSaveINI();  // 0x49D120
unsigned int * ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6, void *a7 = 0, void *a8 = 0);
    int Read(void *a1_1, void *a2_1, void *a3 = 0);  // 0x5C18A0
    CampaignClass * * CopyTo();  // 0x5C1A10
    int InitSession();  // 0x5C1CC0
    CampaignClass * * Seek(void *a1_1, void *a2_1, void *a3_1);  // 0x5C1DC0
    int Revert();  // 0x5C1FA0
    int StartGame(int a2, void ** a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10);  // 0x5C2040
    int  EndGame(int a2, int a3, int a4);  // 0x5C2100
    int ProcessTurn();  // 0x5C2680
    int SyncState();  // 0x5C2710
    const char * UpdateLobby(const char * a2, char * String);  // 0x5C2A60
    unsigned int *  selectTeam(int a2, int a3, int a4);  // 0x5C2DE0
    AbstractClass * * GetPlayerCount(int a1);  // 0x5C2EF0
    ScenarioClass * * BroadcastMessage();  // 0x5C30C0
    AbstractClass * * GetMapData();  // 0x5C3220
    int ReceiveMessage();  // 0x5C34F0
    int HandleEvent();  // 0x5C35F0
    void  LoadSettings(HWND hWnd, int a3, int a4);  // 0x5C3B10
    void SetGameMode();  // 0x5C3F80
    AbstractClass * * ProcessChat();  // 0x5C4110
    int UpdateMovieScore();  // 0x5C42D0
    void  ShowScoreScreen(int a2);  // 0x5C44E0
    IPXInterfaceClass * * InitializePlayers();  // 0x5C4CA0
    unsigned int *  processTurnEnd(unsigned int * a2);  // 0x5C4F30
    int finalizeSession();  // 0x696F30
    unsigned int * startGame();  // 0x470C00
    char  Write(int a2);  // 0x5C1D80
    int checkVictory();  // 0x5C4670
    char spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8);  // 0x5C4E90
    unsigned int * initGame();  // 0x46D330
    char GetMovieScore(CampaignEndScoreClass * result);  // 0x49BCA0
    DynamicVector *  saveGameState(unsigned int * Block, char a2);  // 0x5C4FC0
    void loadGameState();  // 0x5C5010
    int  dispatchEvent(int a2);  // 0x5C5060
    void processPlayerInput();  // 0x5C50D0
    char  AddRef(int a2);  // 0x5C5130
    char  Release(int a2, unsigned int * a3);  // 0x5C5170
    wchar_t * ddtor(void *a1 = 0);  // 0x5C5220
    int  checkTimeout(unsigned int * a2);  // 0x5C5250
    char  migrateHost(int a2, unsigned int * a3);  // 0x5C52B0
    int  validatePlayerAction(unsigned int * a2);  // 0x5C5360
    char  processTeamChat(int a2, unsigned int * a3);  // 0x5C53D0
    void updateScoreBoard();  // 0x5C5480
    int  processAITurn(unsigned int * a2);  // 0x5C54B0
    char  broadcastMessage(int a2, unsigned int * a3);  // 0x5C5770
    int  handlePlayerReady(unsigned int * a2);  // 0x5C5820
    VectorClass_flat *  verifyGameIntegrity(unsigned int * Block, char a2);  // 0x5C5850
    VectorClass_flat *  processVote(unsigned int * Block, char a2);  // 0x5C58A0
    DynamicVector *  tallyVotes(unsigned int * Block, char a2);  // 0x5C5990
    unsigned int *  applyVoteResult(int a2, int a3);  // 0x5C59E0
    HWND CheckReady(HWND hDlg);  // 0x5C21A0
    void  Clone(HWND hDlg);  // 0x5C2640
    char ValidateSettings();  // 0x5C2CB0
    int  SaveSettings(HWND hWnd, int a3);  // 0x5C2CE0
    int Cleanup(void *a1_1, void *a2 = 0);  // 0x5C3F30
    unsigned int  syncPlayers(int a2);  // 0x5C5040
    unsigned int  updateGameClock(int a2);  // 0x5C5100
    unsigned int  handleDisconnect(int a2);  // 0x5C5290
    unsigned int  evaluateAIStrategy(int a2);  // 0x5C54F0
    char assignResources();  // 0x5C4EE0
    char setUpAlliances();  // 0x5C4EF0
    char initTurnOrder();  // 0x5C4F00
    char Stub();  // 0x5D6360
    char StubReturnFalse();  // 0x5C3700
    int COMStub_Ret2();  // 0x5C42C0
    int j__do_always_noconv_codecvt_base_std__MBE_NXZ_17();
    static int validateMove(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18);  // x4:signals@0x49cc50
    CampaignClass * * MPCooperative___vt07(int a2);  // plateau: def-aligned C2039/C2660
    void MPCooperative_validateMove(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59);  // plateau: def-aligned C2039/C2660
};
} // namespace gamemd
