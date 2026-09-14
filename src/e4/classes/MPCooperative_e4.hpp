// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MPCooperative {
    void* vfptr;  // minimal E2 declaration
    unsigned int * startGame();  // 0x470C00
    int processTurn(char * a2, char * a3);  // 0x49B660
    char BuildScoreEntries(int a2, CCINIClass * aP2);  // 0x49BCE0
    char WriteCoopSaveINI();  // 0x49BE40
    bool ReadCoopSaveINI();  // 0x49D120
    unsigned int * ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6);  // 0x5C1470
    char Read();  // 0x5C18A0
    HWND CopyTo();  // 0x5C1A10
    void COMStub();  // 0x5C1CB0
    int InitSession();  // 0x5C1CC0
    char Seek();  // 0x5C1DC0
    int Revert();  // 0x5C1FA0
    char StartGame(int a2, void ** a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10);  // 0x5C2040
    char EndGame(int a2, int a3, int a4);  // 0x5C2100
    char ProcessTurn();  // 0x5C2680
    char SyncState();  // 0x5C2710
    const char * UpdateLobby(const char * a2, char * String);  // 0x5C2A60
    unsigned int * selectTeam(unsigned int * a1, int a2, int a3, int a4);  // 0x5C2DE0
    char GetPlayerCount(int a1);  // 0x5C2EF0
    char BroadcastMessage();  // 0x5C30C0
    char GetMapData();  // 0x5C3220
    int ReceiveMessage();  // 0x5C34F0
    int HandleEvent();  // 0x5C35F0
    void LoadSettings(HWND hWnd, int a3, int a4);  // 0x5C3B10
    void SetGameMode();  // 0x5C3F80
    char ProcessChat();  // 0x5C4110
    char UpdateMovieScore();  // 0x5C42D0
    void ShowScoreScreen(int a2);  // 0x5C44E0
    int InitializePlayers();  // 0x5C4CA0
    unsigned int * processTurnEnd(unsigned int * a2);  // 0x5C4F30
    int finalizeSession();  // 0x696F30
    char Write(int a2);  // 0x5C1D80
    int checkVictory();  // 0x5C4670
    char spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8);  // 0x5C4E90
    unsigned int * initGame();  // 0x46D330
    char GetMovieScore(CampaignEndScoreClass * aP1);  // 0x49BCA0
    DynamicVector * saveGameState(char a2);  // 0x5C4FC0
    void loadGameState();  // 0x5C5010
    int dispatchEvent(int a2);  // 0x5C5060
    void processPlayerInput();  // 0x5C50D0
    char AddRef(int a2);  // 0x5C5130
    char Release(int a2, unsigned int * a3);  // 0x5C5170
    void ddtor();  // 0x5C5220
    int checkTimeout(unsigned int * a2);  // 0x5C5250
    char migrateHost(int a2, unsigned int * a3);  // 0x5C52B0
    int validatePlayerAction(unsigned int * a2);  // 0x5C5360
    char processTeamChat(int a2, unsigned int * a3);  // 0x5C53D0
    void updateScoreBoard();  // 0x5C5480
    int processAITurn(unsigned int * a2);  // 0x5C54B0
    char broadcastMessage(int a2, unsigned int * a3);  // 0x5C5770
    int handlePlayerReady(unsigned int * a2);  // 0x5C5820
    VectorClass * verifyGameIntegrity(char a2);  // 0x5C5850
    VectorClass * processVote(char a2);  // 0x5C58A0
    DynamicVector * tallyVotes(char a2);  // 0x5C5990
    unsigned int * applyVoteResult(int a2, int a3);  // 0x5C59E0
    HWND CheckReady(HWND hDlg);  // 0x5C21A0
    void Clone(HWND hDlg);  // 0x5C2640
    char ValidateSettings();  // 0x5C2CB0
    int SaveSettings(HWND hWnd, int a3);  // 0x5C2CE0
    int Cleanup();  // 0x5C3F30
    unsigned int syncPlayers(int a2);  // 0x5C5040
    unsigned int updateGameClock(int a2);  // 0x5C5100
    unsigned int handleDisconnect(int a2);  // 0x5C5290
    unsigned int evaluateAIStrategy(int a2);  // 0x5C54F0
    char assignResources();  // 0x5C4EE0
    char setUpAlliances();  // 0x5C4EF0
    char initTurnOrder();  // 0x5C4F00
    char Stub();  // 0x5D6360
    char StubReturnFalse();  // 0x5C3700
    int COMStub_Ret2();  // 0x5C42C0
};
} // namespace gamemd
