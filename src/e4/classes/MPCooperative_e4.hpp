// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MPCooperative {
    void* vfptr;  // minimal E2 declaration
    unsigned int * initGame();  // 0x46D330
    unsigned int * startGame();  // 0x470C00
    int processTurn(char * a2, char * a3);  // 0x49B660
    char GetMovieScore(CampaignEndScoreClass * aP1);  // 0x49BCA0
    char BuildScoreEntries(int a2, CCINIClass * aP2);  // 0x49BCE0
    char WriteCoopSaveINI();  // 0x49BE40
    bool ReadCoopSaveINI();  // 0x49D120
    char Read();  // 0x5C18A0
    HWND CopyTo();  // 0x5C1A10
    void COMStub();  // 0x5C1CB0
    int InitSession();  // 0x5C1CC0
    char Write(int a2);  // 0x5C1D80
    char Seek();  // 0x5C1DC0
    int Revert();  // 0x5C1FA0
    char EndGame(int a2, int a3, int a4);  // 0x5C2100
    HWND CheckReady(HWND hDlg);  // 0x5C21A0
    void Clone(HWND hDlg);  // 0x5C2640
    char ProcessTurn();  // 0x5C2680
    char SyncState();  // 0x5C2710
    const char * UpdateLobby(const char * a2, char * String);  // 0x5C2A60
    char ValidateSettings();  // 0x5C2CB0
    int SaveSettings(HWND hWnd, int a3);  // 0x5C2CE0
    unsigned int * selectTeam(unsigned int * a1, int a2, int a3, int a4);  // 0x5C2DE0
    char GetPlayerCount(int a1);  // 0x5C2EF0
    char BroadcastMessage();  // 0x5C30C0
    char GetMapData();  // 0x5C3220
    int ReceiveMessage();  // 0x5C34F0
    int HandleEvent();  // 0x5C35F0
    void LoadSettings(HWND hWnd, int a3, int a4);  // 0x5C3B10
    int Cleanup();  // 0x5C3F30
    void SetGameMode();  // 0x5C3F80
    char ProcessChat();  // 0x5C4110
    char UpdateMovieScore();  // 0x5C42D0
    void ShowScoreScreen(int a2);  // 0x5C44E0
    int checkVictory();  // 0x5C4670
    int InitializePlayers();  // 0x5C4CA0
    char assignResources();  // 0x5C4EE0
    char setUpAlliances();  // 0x5C4EF0
    char initTurnOrder();  // 0x5C4F00
    unsigned int * processTurnEnd(unsigned int * a2);  // 0x5C4F30
    DynamicVector * saveGameState(unsigned int * Block, char a2);  // 0x5C4FC0
    void loadGameState();  // 0x5C5010
    unsigned int syncPlayers(int a2);  // 0x5C5040
    int dispatchEvent(int a2);  // 0x5C5060
    void processPlayerInput();  // 0x5C50D0
    unsigned int updateGameClock(int a2);  // 0x5C5100
    char AddRef(int a2);  // 0x5C5130
    char Release(int a2, unsigned int * a3);  // 0x5C5170
    void ddtor();  // 0x5C5220
    int checkTimeout(unsigned int * a2);  // 0x5C5250
    unsigned int handleDisconnect(int a2);  // 0x5C5290
    char migrateHost(int a2, unsigned int * a3);  // 0x5C52B0
    int validatePlayerAction(unsigned int * a2);  // 0x5C5360
    char processTeamChat(int a2, unsigned int * a3);  // 0x5C53D0
    void updateScoreBoard();  // 0x5C5480
    int processAITurn(unsigned int * a2);  // 0x5C54B0
    unsigned int evaluateAIStrategy(int a2);  // 0x5C54F0
    char broadcastMessage(int a2, unsigned int * a3);  // 0x5C5770
    int handlePlayerReady(unsigned int * a2);  // 0x5C5820
    VectorClass * verifyGameIntegrity(unsigned int * Block, char a2);  // 0x5C5850
    VectorClass * processVote(unsigned int * Block, char a2);  // 0x5C58A0
    DynamicVector * tallyVotes(unsigned int * Block, char a2);  // 0x5C5990
    unsigned int * applyVoteResult(int a2, int a3);  // 0x5C59E0
    char Stub();  // 0x5D6360
    int finalizeSession();  // 0x696F30
    char StubReturnFalse();  // 0x5C3700
    int COMStub_Ret2();  // 0x5C42C0
};
} // namespace gamemd
