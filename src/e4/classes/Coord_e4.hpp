// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int q028;  // 0x28
    int u32_2C;  // 0x2C
    unsigned int q034;  // 0x34
    Coord * ptr_40;  // 0x40
    Coord * ptr_44;  // 0x44
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int u32_60;  // 0x60
    Coord * q064;  // 0x64
    Coord * q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int u32_9C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    unsigned int u32_E0;  // 0xE0
    Coord * q100;  // 0x100
    Coord * q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned char q138;  // 0x138
    void* q13C;  // 0x13C
    unsigned int *Coord_field_0x2;
    unsigned int Coord_field_0x8;
    unsigned int *__pad_0;
    unsigned int *__pad_C;
    unsigned int q01C;
    unsigned int u32_1488;
    unsigned int u32_1490;
    unsigned int u32_1498;
    unsigned int u32_14A4;
    unsigned int Coord_field_0x13C;  // 0x13C
    unsigned int u32_14A8;
// --- flat members (END) ---
    int ToGridIndex(int aP1, int aP2, int aP3);  // 0x4138C0
    unsigned int * ToCell(IUnknown * aP1);  // 0x413A30
    void * Subtract(int aP1, int aP2, int aP3);  // 0x41C230
    int Length();  // 0x41C380
    unsigned int * GetCoords(int * outCoords, void *a2_1);  // 0x4399A0
    void * Scale(float aP1);  // 0x43A0D0
    void * To_Cell(unsigned int *aP1);  // 0x565730
    int Compare2D(unsigned short * a2, void *a2_2);  // 0x5AC370
    void * WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4);  // 0x6557F0
    AbstractClass * * To_Screen(unsigned int *a2, int *a3);  // 0x6D2140
    void * Divide(int * a2, int a3);  // 0x710700
    static int * To_ScreenRaw(int *aP0, unsigned int *aP1);
    long long ScaleToScreenY();  // 0x6D2120
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
    int validateScenario(unsigned int *a2);
    void EncodeGameSetupState(char * Buffer);
    Coord * * ProcessIdle();
    AbstractClass * * SetupWOLTournament();
    int loadCampaignData(void *a1_1);
    int Stub3(int a1);
    char ResetFlags();
    int ResetReadyStates();
    int readIniSettings();
    char LoadMultiplayerScoreAssets();
    void * shutdownGame();
    char InitializeToolTipColor();
    int CreateAIPlayer();
    int CreateAIPlayer_Potato();
    Coord * * sub_7A2830();
    static unsigned int * To_Cell(void * aP1, void * aP2);  // G42.39a static-call supply
    unsigned int q_2C0;  // +0x2C0 flat supply (CSP-fed)
};
} // namespace gamemd
