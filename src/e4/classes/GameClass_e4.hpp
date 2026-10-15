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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
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
    unsigned int m_13C;  // 0x13C (offset-truth)
    Straw* m_34;  // 0x34 (offset-truth) [X30:type_map]
    unsigned int q014;  // 0x14 (offset-truth)
    int __pad_004;  // 0x4 [X30:type_map]
};
struct GameClass {
// --- flat members (BEGIN) ---
    unsigned char *q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u16_A;  // 0xA
    unsigned char q00B;  // 0xB
    unsigned int u32_C;  // 0xC
    int q10;  // 0x10
    Pipe * ptr_14;  // 0x14
    unsigned int u32_18;  // 0x18
    CampaignClass * ptr_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int GameClass_field_0x2A;  // 0x2A
    unsigned char q02E;  // 0x2E
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    BufferIOFileClass* q039;  // 0x39
    unsigned char q03D;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned char u8_44;  // 0x44
    CampaignClass * q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int m_14;  // 0x14
    unsigned char q068;  // 0x68
    unsigned int q06A;  // 0x6A
    unsigned int q06D;  // 0x6D
    unsigned char q070;  // 0x70
    unsigned char q071;  // 0x71
    unsigned int u32_7C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char GameClass_field_0x39[1];  // 0x39
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_F0;  // 0xF0
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int u32_13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    unsigned int q150;  // 0x150
    unsigned int q168;  // 0x168
    unsigned int u32_1A8;  // 0x1A8
    unsigned int u32_1B4;  // 0x1B4
    void* q200;  // 0x200
    unsigned int *GameClass_field_0x4;
    unsigned int *__pad_0;
    unsigned int *__pad_24;
    unsigned int *__pad_3D;
    unsigned int *__pad_8;
    unsigned int field_14;
    unsigned int field_3C;
    unsigned int m_10;
    unsigned int m_140;
    unsigned int m_38;
    unsigned int m_3C;
    unsigned int m_C;
    unsigned int q004;
    unsigned int u32_42;
    unsigned int DDraw;
    unsigned int Timer;
    unsigned int Event;
    unsigned int Network_ph;  // w18j3: filler renamed (no offset truth; canon GameClass::Network is a method)
    unsigned char Pipe_field_0x04;  // 0x4
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

    unsigned char GameClass_30[4];  /* GameClass */  // X10 supply (member_lookup)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_018;  // X10 supply (csp_canon_members)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_17C;  // 0x17C
    unsigned char __pad_024;  // 0x24 [X30:canon]
};
} // namespace gamemd
