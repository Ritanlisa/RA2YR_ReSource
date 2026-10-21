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
    unsigned int __pad_0;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char __pad_00C;  // 0xC
    char __pad_D[19];  // 0xD
    unsigned int q020;  // 0x20
    int u32_24;  // 0x24
    unsigned char q028[16];  // 0x28
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    char __pad_44[4];  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char __pad_50[4];  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned char q058;  // 0x58
    char __pad_59[3];  // 0x59
    unsigned int u32_5C;  // 0x5C
    char __pad_60[98];  // 0x60
    unsigned char u32_C2;  // 0xC2
    char __pad_C3[133];  // 0xC3
    int q148;  // 0x148
    char __pad_14C[16];  // 0x14C
    int q15C;  // 0x15C
    char __pad_160[20];  // 0x160
    int q174;  // 0x174
    char __pad_178[4];  // 0x178
    int q17C;  // 0x17C
    char __pad_180[258];  // 0x180
    unsigned char q0282;  // 0x282
    char __pad_283[125];  // 0x283
    int q300;  // 0x300
    char __pad_304[16];  // 0x304
    int q314;  // 0x314
    int q318;  // 0x318
    char __pad_31C[868];  // 0x31C
    int q680;  // 0x680
    char __pad_684[116];  // 0x684
    int Game_field_0x6F8;  // 0x6F8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char LoadSaved();
    void initScenario(void *a1_1);  // 0x430980
    int SendCampaignOptions();  // 0x46D4A0
    static AbstractClass * * DestroyAllObjects();  // 0x534450
    int MakeScreenshot(int a1);  // 0x537BC0
    HashTable_flat * * StartModemMultiplayer(char a2);  // 0x5B7090
    AbstractClass * * BuildGameSetupPacket();  // 0x5BA660
    int GetMultiplayerScoreScreenBar();  // 0x5CA110
    void  BuildGameSettingsPacket(char * Buffer);  // 0x5DBB60
    unsigned char ManageGameSpeed();  // 0x6579E0
    unsigned int * LockMutex(int aP1, int aP2);  // G57w10-S raw 0x0067C3A0 IUnknown 占位清除
    CellStruct * * SerializeGameSaveState();  // 0x67F9C0
    int validateScenario(unsigned int *a2, void *a2_1 = 0);  // 0x680F70
    void  EncodeGameSetupState(char * Buffer);  // 0x77E430
    static Coord * * ProcessIdle();  // 0x77F900
    AbstractClass * * SetupWOLTournament();  // 0x7A2330
    char LoadMultiplayerScoreAssets();  // 0x72D730
    int CreateAIPlayer();  // 0x796DE0
    int CreateAIPlayer_Potato();  // 0x796ED0
    void * shutdownGame();  // 0x72D830
    static int CheckForGameCD(void *a1 = 0);  // 0x4790A0
    int loadCampaignData(void *a1_1);  // 0x550000
    void processStartup();
    static char ResetFlags();  // 0x5E8B40
    static int ResetReadyStates();  // 0x5E9850
    int readIniSettings(void *a1 = 0);  // 0x67FDE0
    char InitializeToolTipColor();  // 0x72F440
    static char Stub3(int aP0);  // 0x5865E0 (IDA: int __stdcall Stub3(int))
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
};
} // namespace gamemd
