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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    MultiplayerGameMode * ptr_50;  // 0x50
// --- flat members (END) ---
    void* COMStub;  // 0x0 (no offset truth)
    void* m_Enabled;  // 0x0 (no offset truth)
    int  processTurn(char * a2, char * a3);  // 0x49B660
    int  BuildScoreEntries(int a2, unsigned int * a3);  // 0x49BCE0
    int WriteCoopSaveINI();  // 0x49BE40
    int ReadCoopSaveINI();  // 0x49D120
unsigned int * ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6, void *a1 = 0, void *a2 = 0);
    int Read(void *a1_1, void *a2_1, void *a1 = 0);  // 0x5C18A0
    CampaignClass * * CopyTo();  // 0x5C1A10
    int InitSession();  // 0x5C1CC0
    CampaignClass * * Seek(void *a1_1, void *a2_1, void *a3_1);  // 0x5C1DC0
    int Revert();  // 0x5C1FA0
    int  StartGame(int a2, void ** a3, void * Block, int a5, int16_t a6, int a7, int a8, char * a9, char * a10);  // 0x5C2040
    int  EndGame(int a2, int a3, int a4);  // 0x5C2100
    int ProcessTurn();  // 0x5C2680
    int SyncState();  // 0x5C2710
    const char *  UpdateLobby(void * a2, char * String);  // 0x5C2A60
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
    char  spawnUnits(int a2, void * Block, int a4, int16_t a5, int a6, int a7, unsigned int * a8);  // 0x5C4E90
    unsigned int * initGame();  // 0x46D330
    char  GetMovieScore(unsigned int * a2);  // 0x49BCA0
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
    int Cleanup(void *a1_1, void *a1 = 0);  // 0x5C3F30
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
    unsigned int q0088;  // 0x88 (offset-truth)
    unsigned int q018;  // 0x18 (offset-truth)
    CampaignClass * * MPCooperative___vt07(int a2);  // plateau: def-aligned C2039/C2660
    void MPCooperative_validateMove(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59);  // plateau: def-aligned C2039/C2660

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_011;  // X10 supply (csp_canon_members)
    unsigned char __pad_01A;  // X10 supply (csp_canon_members)
    unsigned char __pad_054;  // X10 supply (csp_canon_members)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    unsigned char q058[4];  /* AbstractClass */  // X10 supply (member_lookup)
    int q068;  // X10 supply (member_lookup)
    int q0C4;  // X10 supply (member_lookup)
    int q264;  // X10 supply (member_lookup)
    int q324;  // X10 supply (member_lookup)
    unsigned char q328[20];  /* char[20] */  // X10 supply (member_lookup)
    unsigned char q32C;  // X10 supply (member_lookup)
    unsigned char q334;  // X10 supply (member_lookup)
    int q33C;  // X10 supply (member_lookup)
    int q340;  // X10 supply (member_lookup)
    int u32_1A4;  // X10 supply (member_lookup)
    unsigned int u32_1AC;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
} // namespace gamemd
