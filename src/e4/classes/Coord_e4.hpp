// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord {
// --- flat members (BEGIN) ---
    Coord * ptr_40;  // 0x40
    Coord * ptr_44;  // 0x44
// --- flat members (END) ---
    int  ToGridIndex(int a2, int a3, int a4);  // 0x4138C0
    unsigned int * ToCell(unsigned int *a2);  // G57w10-S raw 0x00413A30 IUnknown 占位清除
    void * Subtract(int aP1, int aP2, int aP3, void *a1 = 0);  // 0x41C230
    int Length(void *a1 = 0);  // 0x41C380
    static unsigned int *  GetCoords(unsigned int * a2);  // 0x4399A0
    void *  Scale(float a2, void *a1 = 0);  // 0x43A0D0
    void *  To_Cell(unsigned int * a2);  // 0x565730
    int  Compare2D(unsigned short * a2, void *a1 = 0);  // 0x5AC370
    void *  WorldToScreen(int * a2, int * a3, char a4);  // 0x6557F0
    AbstractClass * * To_Screen(unsigned int *a2, int *a3);  // 0x6D2140
    void *  Divide(int * a2, int a3);  // 0x710700
    static int * To_ScreenRaw(int *aP0, unsigned int *aP1);
    long long ScaleToScreenY(void *a1 = 0);  // 0x6D2120
    void initScenario(void *a1_1);
    int SendCampaignOptions();
    AbstractClass * * DestroyAllObjects();
    int MakeScreenshot(int a1);
    HashTable_flat * * StartModemMultiplayer(char a2);
    AbstractClass * * BuildGameSetupPacket();
    int GetMultiplayerScoreScreenBar();
    void BuildGameSettingsPacket(char * Buffer);
    unsigned char ManageGameSpeed();
    unsigned int * LockMutex(void * aP1, void * aP2);  // G42.39: IUnknown global-fwd hazard
    void * * SerializeGameSaveState();  // G42.39: template-type hazard
    int validateScenario(unsigned int *a2, void *a1 = 0);
    void EncodeGameSetupState(char * Buffer);
    Coord * * ProcessIdle(void *a1 = 0);
    AbstractClass * * SetupWOLTournament();
    int loadCampaignData(void *a1_1);
    int Stub3(int a1);
    char ResetFlags();
    int ResetReadyStates();
    int readIniSettings(void *a1 = 0);
    char LoadMultiplayerScoreAssets();
    void * shutdownGame();
    char InitializeToolTipColor();
    int CreateAIPlayer();
    int CreateAIPlayer_Potato();
    Coord * * sub_7A2830();
    static unsigned int * To_Cell(void * aP1, void * aP2);  // G42.39a static-call supply
    unsigned int q_2C0;  // +0x2C0 flat supply (CSP-fed)
    unsigned int u32_1488;  // 0x1488 (offset-truth)
    unsigned int u32_1490;  // 0x1490 (offset-truth)
    unsigned int u32_1498;  // 0x1498 (offset-truth)
    unsigned int u32_14A4;  // 0x14A4 (offset-truth)
    unsigned int u32_14A8;  // 0x14A8 (offset-truth)
};
} // namespace gamemd
