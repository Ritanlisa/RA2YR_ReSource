// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Game {
    void* vfptr;  // minimal E2 declaration
    void initScenario();  // 0x430980
    int SendCampaignOptions();  // 0x46D4A0
    int DestroyAllObjects();  // 0x534450
    int MakeScreenshot(int a1);  // 0x537BC0
    char StartModemMultiplayer(char a2);  // 0x5B7090
    int BuildGameSetupPacket();  // 0x5BA660
    int GetMultiplayerScoreScreenBar();  // 0x5CA110
    void BuildGameSettingsPacket();  // 0x5DBB60
    unsigned char ManageGameSpeed();  // 0x6579E0
    unsigned int * LockMutex(IUnknown * aP1, IUnknown * aP2);  // 0x67C3A0
    char LoadSaved();  // 0x67E440
    int SerializeGameSaveState();  // 0x67F9C0
    int validateScenario(unsigned int * a2);  // 0x680F70
    void EncodeGameSetupState();  // 0x77E430
    char ProcessIdle();  // 0x77F900
    char SetupWOLTournament();  // 0x7A2330
    char LoadMultiplayerScoreAssets();  // 0x72D730
    int CreateAIPlayer();  // 0x796DE0
    int CreateAIPlayer_Potato();  // 0x796ED0
    void * shutdownGame();  // 0x72D830
    int CheckForGameCD();  // 0x4790A0
    int loadCampaignData();  // 0x550000
    void processStartup();  // 0x5B56F0
    char ResetFlags();  // 0x5E8B40
    int ResetReadyStates();  // 0x5E9850
    int readIniSettings();  // 0x67FDE0
    char InitializeToolTipColor();  // 0x72F440
    char Stub3(IUnknown * aP0);  // 0x5865E0
};
} // namespace gamemd
