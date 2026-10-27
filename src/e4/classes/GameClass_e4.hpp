// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Straw;  // fix_fwd_type_supply
struct Pipe;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct BufferIOFileClass;  // fix_fwd_type_supply
struct PKPipe;  // fix_fwd_type_supply
struct PKStrawClass {
    void * ptr_0;  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    unsigned char u8_C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int u32_10;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    char __pad_24[16];  // 0x24
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[256];  // 0x3C
    unsigned int u32_13C;  // 0x13C
    unsigned int u32_140;  // 0x140
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  initGameMode(int a2, int a3, void *a1 = 0);  // 0x437FD0
    int applyGameSettings2(int a2, int a3);  // G42.39 supply
    int QueryGameMode(int a2);  // G42.39 supply
    unsigned int * processFrame(int a2, int a3, void *a1 = 0);  // G42.39 supply
    unsigned int * updateUI(int a2, int a3, void *a3_2);  // G42.39 supply
    int loadScenarioFiles(int aP1);  // G42.39 supply
    int FrameLoop(int a2);  // G42.39 supply
    int FindOpenSlot();  // G42.39 supply
    int GetRelatedObject(void *a1 = 0);  // G42.39 supply
    void * WriteEncryptedStream(BombClass * Src, signed int aP2);  // G42.39 supply
    int ReadEncryptedStream(char * a2, signed int Size);  // G42.39 supply
    int initPlayerData(const char **a2);  // G42.39 supply
    static ObjectClass * * Shutdown(void *a1_1);  // G42.39 supply
    int ReadVersionFile();  // G42.39 supply
    int ReadVersionFile2();  // G42.39 supply
    void ReadVersionString();  // G42.39 supply
    int processNetworkPacket(void * Src, signed int Size);  // G42.39 supply
    int * initDisplay(char a2);  // G42.39 supply
    void InitDifficultyButtons();  // G42.39 supply
    wchar_t * GetDifficultyString();  // G42.39 supply
    unsigned int * saveGameState(char a2);  // G42.39 supply
    int loadGameState(int a2);  // G42.39 supply
    PKPipe * validateGameFile(unsigned int * Block, char a2);  // G42.39 supply
    int parseGameOptions(int a2);  // G42.39 supply
    PKStrawClass * applyGameSettings(unsigned int * Block, char a2);  // G42.39 supply
    int FindPlayerName(int a1);  // G42.39 supply
};
struct GameClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int __pad_0;  // 0x0
    int u32_4;  // 0x4
    char u32_8[2];  // 0x8
    unsigned short u16_A;  // 0xA
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    Pipe * ptr_14;  // 0x14
    unsigned int __pad_018;  // 0x18
    char __pad_1C[4];  // 0x1C
    CampaignClass * ptr_20;  // 0x20
    unsigned int q024;  // 0x24
    char __pad_28[2];  // 0x28
    unsigned int GameClass_field_0x2A;  // 0x2A
    unsigned char q02E;  // 0x2E
    char __pad_2F[1];  // 0x2F
    unsigned char GameClass_30[4];  // 0x30
    unsigned int u32_34;  // 0x34
    char u32_38[1];  // 0x38
    char q039[3];  // 0x39
    unsigned char u32_3C;  // 0x3C
    unsigned char q03D;  // 0x3D
    char __pad_3E[2];  // 0x3E
    unsigned int q040;  // 0x40
    unsigned char u8_44;  // 0x44
    char __pad_45[11];  // 0x45
    CampaignClass * q050;  // 0x50
    unsigned int q054;  // 0x54
    char __pad_58[8];  // 0x58
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    char __pad_69[1];  // 0x69
    unsigned char q06A;  // 0x6A
    char __pad_6B[2];  // 0x6B
    unsigned char q06D;  // 0x6D
    char __pad_6E[2];  // 0x6E
    unsigned char q070;  // 0x70
    unsigned char q071;  // 0x71
    char __pad_72[10];  // 0x72
    unsigned int u32_7C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    char __pad_88[32];  // 0x88
    unsigned int u32_A8;  // 0xA8
    char __pad_AC[56];  // 0xAC
    unsigned int u32_E4;  // 0xE4
    char __pad_E8[8];  // 0xE8
    unsigned int u32_F0;  // 0xF0
    char __pad_F4[12];  // 0xF4
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    char __pad_105[31];  // 0x105
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    char __pad_12C[4];  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    char __pad_138[4];  // 0x138
    unsigned int u32_13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    char __pad_144[12];  // 0x144
    unsigned int q150;  // 0x150
    char __pad_154[20];  // 0x154
    unsigned int q168;  // 0x168
    char __pad_16C[16];  // 0x16C
    unsigned int u32_17C;  // 0x17C
    char __pad_180[40];  // 0x180
    unsigned int u32_1A8;  // 0x1A8
    char __pad_1AC[8];  // 0x1AC
    unsigned int u32_1B4;  // 0x1B4
    char __pad_1B8[72];  // 0x1B8
    void * q200;  // 0x200
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int *  processFrame(int a2, int a3);  // 0x4381D0
    unsigned int * updateUI(int a2, int a3_2);  // 0x438300
    int loadScenarioFiles(int aP1);  // 0x5D2260
    int  FrameLoop(int a2);  // 0x5D2410
    int FindOpenSlot();  // 0x5D6370
    int GetRelatedObject();  // 0x631D30
    void * WriteEncryptedStream(BombClass * Src, signed int aP2);  // 0x632DC0
    int  ReadEncryptedStream(char * a2, signed int Size);  // 0x633130
    int  initPlayerData(void * a2);  // 0x69AE10
    static ObjectClass * * Shutdown(void *a1_1);  // 0x6BEC60
    int ReadVersionFile();  // 0x74F960
    int ReadVersionFile2();  // 0x74FA20
    void ReadVersionString();  // 0x74FC80
    int  processNetworkPacket(void * Src, signed int Size);  // 0x7BA3C0
    unsigned int *  saveGameState(char a2);  // 0x631F40
    int *  initDisplay(char a2);  // 0x4AECA0
    static void InitDifficultyButtons();  // 0x5E8AE0
    PKPipe *  validateGameFile(char a2);  // 0x632FF0
    PKStrawClass *  applyGameSettings(char a2);  // 0x633370
    wchar_t * GetDifficultyString();  // 0x5E99C0
    int  loadGameState(int a2);  // 0x632FE0
    int  parseGameOptions(int a2);  // 0x633360
    int  FindPlayerName(int a1);  // 0x69BC60
    int initPlayerData(const char **a2, void * aStandard_0);
    wchar_t * GetDifficultyString(void * aSttPlayerclose, void * aSttPlayerhuman, void * aSttPlayeropen, void * aSttPlayeropeno);
#pragma pack(pop)
};
} // namespace gamemd
