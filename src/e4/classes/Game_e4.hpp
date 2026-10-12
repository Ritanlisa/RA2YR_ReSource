// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct HashTable_flat;  // fix_fwd_type_supply
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_MATH_ALIASES)  // G57a1
struct CellStruct;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE / GAMEMD_E4_MATH_ALIASES (Game fwd)
struct Coord;  // fix_fwd_type_supply
struct Game {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
// --- flat members (END) ---
    char LoadSaved();
    void initScenario(void *a1_1);  // 0x430980
    int SendCampaignOptions();  // 0x46D4A0
    AbstractClass * * DestroyAllObjects();  // 0x534450
    int MakeScreenshot(int a1);  // 0x537BC0
    HashTable_flat * * StartModemMultiplayer(char a2);  // 0x5B7090
    AbstractClass * * BuildGameSetupPacket();  // 0x5BA660
    int GetMultiplayerScoreScreenBar();  // 0x5CA110
    void  BuildGameSettingsPacket(char * Buffer);  // 0x5DBB60
    unsigned char ManageGameSpeed();  // 0x6579E0
    unsigned int * LockMutex(int a2, int a3);  // G57w10-S raw 0x0067C3A0 IUnknown 占位清除
    int LoadSaved(LPCCH a1_1);
    CellStruct * * SerializeGameSaveState();  // 0x67F9C0
    int  validateScenario(unsigned int * a2, void *a1 = 0);  // 0x680F70
    void  EncodeGameSetupState(char * Buffer);  // 0x77E430
    static Coord * * ProcessIdle();  // 0x77F900
    AbstractClass * * SetupWOLTournament();  // 0x7A2330
    char LoadMultiplayerScoreAssets();  // 0x72D730
    int CreateAIPlayer();  // 0x796DE0
    int CreateAIPlayer_Potato();  // 0x796ED0
    void * shutdownGame();  // 0x72D830
    int CheckForGameCD(void *a1 = 0);  // 0x4790A0
    int loadCampaignData(void *a1_1);  // 0x550000
    void processStartup();
    static char ResetFlags();  // 0x5E8B40
    static int ResetReadyStates();  // 0x5E9850
    int readIniSettings(void *a1 = 0);  // 0x67FDE0
    char InitializeToolTipColor();  // 0x72F440
    static int Stub3(int a1);  // 0x5865E0
    int LoadSaved(void *a1_1);
    CellStruct * * Game_DumpMultiplayerGameInfo();
    int ReadTeams();
    int CopyLocalScenarioData();
    int ProcessSidebarUnits();
    Game * * ComputeDisplayPosition();
    unsigned int * ComputeDialogPos(unsigned int * a2);
    void Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);
    int LoadOrReloadOptions(IUnknown * aP1);
    int PreGameInit();
    void SetByte96();
    int ClearScreen(Scenario *p_this);  // x4:ida@0x684240
    int LoadWithProgress(const char *aP0, double a2);
    int FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3);
    void * ResetDisplayArrays();
    int SetDword32(int a2);
    int SetDword30(int a2);
    Game * * sub_634B20();
    HashTable_flat * * StartModemMultiplayer(ObjectClass *a2, char a3);
    unsigned char u32_C2;  // 0xC2 (offset-truth)
};
} // namespace gamemd
