// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct HashTable_flat;  // fix_fwd_type_supply
struct CellStruct;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct Game {
// --- flat members (BEGIN) ---
    ObjectClass* q000;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    int u32_C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int u32_29;  // 0x29
    unsigned int q034;  // 0x34
    unsigned int u32_35;  // 0x35
    void* q038;  // 0x38
    void* q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    void* q060;  // 0x60
    bool q062;  // 0x62
    bool q063;  // 0x63
    void* q064;  // 0x64
    unsigned char q067;  // 0x67
    unsigned char q068;  // 0x68
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int u32_94;  // 0x94
    bool q098;  // 0x98
    unsigned int u32_B0;  // 0xB0
    unsigned int q0C3;  // 0xC3
    unsigned char q0C7;  // 0xC7
    unsigned char q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    void* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    void* q0FA;  // 0xFA
    unsigned char q0FB;  // 0xFB
    unsigned char q0FC;  // 0xFC
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    void* q134;  // 0x134
    unsigned int u32_138;  // 0x138
    unsigned int u32_13C;  // 0x13C
    unsigned char q140;  // 0x140
    void* q148;  // 0x148
    unsigned char q14C;  // 0x14C
    void* q150;  // 0x150
    void* q15C;  // 0x15C
    unsigned char q160;  // 0x160
    void* q174;  // 0x174
    unsigned char q178;  // 0x178
    void* q17C;  // 0x17C
    unsigned char q180;  // 0x180
    void* q248;  // 0x248
    void* q250;  // 0x250
    unsigned char q260;  // 0x260
    unsigned int q280;  // 0x280
    unsigned int u32_298;  // 0x298
    void* q300;  // 0x300
    unsigned char q304;  // 0x304
    void* q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q310;  // 0x310
    void* q314;  // 0x314
    void* q318;  // 0x318
    unsigned char q31C;  // 0x31C
    void* q328;  // 0x328
    bool q338;  // 0x338
    void* q348;  // 0x348
    void* q380;  // 0x380
    unsigned char q384;  // 0x384
    void* q584;  // 0x584
    unsigned char q594;  // 0x594
    unsigned char q598;  // 0x598
    unsigned char q608;  // 0x608
    unsigned int q630;  // 0x630
    unsigned int q640;  // 0x640
    unsigned int q664;  // 0x664
    void* q680;  // 0x680
    unsigned char q684;  // 0x684
    void* q6F8;  // 0x6F8
    unsigned int *__pad_0;
    unsigned int *__pad_44;
    unsigned int u32_C2;
    unsigned int MixFileClass;
    unsigned int Settings;
    unsigned int Timer;
// --- flat members (END) ---
    void initScenario(void *a1_1);  // 0x430980
    int SendCampaignOptions();  // 0x46D4A0
    AbstractClass * * DestroyAllObjects();  // 0x534450
    int MakeScreenshot(int a1);  // 0x537BC0
    HashTable_flat * * StartModemMultiplayer(char a2);  // 0x5B7090
    AbstractClass * * BuildGameSetupPacket();  // 0x5BA660
    int GetMultiplayerScoreScreenBar();  // 0x5CA110
    void BuildGameSettingsPacket(char * Buffer);  // 0x5DBB60
    unsigned char ManageGameSpeed();  // 0x6579E0
    unsigned int * LockMutex(IUnknown * aP1, IUnknown * aP2);  // 0x67C3A0
    int LoadSaved(LPCCH a1_1);
    CellStruct * * SerializeGameSaveState();  // 0x67F9C0
    int validateScenario(unsigned int *a2);  // 0x680F70
    void EncodeGameSetupState(char * Buffer);  // 0x77E430
    static Coord * * ProcessIdle(void *a1_1);  // 0x77F900
    AbstractClass * * SetupWOLTournament();  // 0x7A2330
    char LoadMultiplayerScoreAssets();  // 0x72D730
    int CreateAIPlayer();  // 0x796DE0
    int CreateAIPlayer_Potato();  // 0x796ED0
    void * shutdownGame();  // 0x72D830
    int CheckForGameCD();  // 0x4790A0
    int loadCampaignData(void *a1_1);  // 0x550000
    void processStartup();
    char ResetFlags();  // 0x5E8B40
    int ResetReadyStates();  // 0x5E9850
    int readIniSettings(void *a1_1);  // 0x67FDE0
    char InitializeToolTipColor(void *a1_1);  // 0x72F440
    static int Stub3(int a1);  // 0x5865E0
};
} // namespace gamemd
