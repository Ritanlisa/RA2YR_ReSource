// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord {
    unsigned short __pad_0;  // 0x0
    char Coord_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int u32_8;  // 0x8
    unsigned int q00C;  // 0xC
    char __pad_10[8];  // 0x10
    unsigned int q018;  // 0x18
    char __pad_1C[16];  // 0x1C
    int u32_2C;  // 0x2C
    char __pad_30[28];  // 0x30
    unsigned int u32_4C;  // 0x4C
    char __pad_50[96];  // 0x50
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    char __pad_B8[132];  // 0xB8
    int q13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    char __pad_144[4940];  // 0x144
    unsigned int u32_1490;  // 0x1490
    char __pad_1494[4];  // 0x1494
    unsigned int u32_1498;  // 0x1498
    char __pad_149C[8];  // 0x149C
    unsigned int u32_14A4;  // 0x14A4
    unsigned int u32_14A8;  // 0x14A8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ToGridIndex(int aP1, int aP2, int aP3);  // 0x4138C0
    unsigned int * ToCell(unsigned int *aP1);  // G57w10-S raw 0x00413A30 IUnknown 占位清除
    _DWORD * Subtract(int a2, int a3, int a4);  // 0x41C230
    int Length(void *a1 = 0);  // 0x41C380
    static unsigned int *  GetCoords(unsigned int * a2);  // 0x4399A0
    void * Scale(float aP1, void *a2 = 0);  // 0x43A0D0
    void * To_Cell(unsigned int *aP1);  // 0x565730
    int Compare2D(unsigned short * a2, void *a2_2);  // 0x5AC370
    void * WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4);  // 0x6557F0
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
    void * To_Cell(unsigned int *aP1, void *a2 = 0);  // G42.39a static-call supply
};
} // namespace gamemd
