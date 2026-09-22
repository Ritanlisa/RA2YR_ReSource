// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GameClass {
    void* vfptr;  // minimal E2 declaration
    int initGameMode(int a2, int a3);  // 0x437FD0
    unsigned int * processFrame(int a2, int a3);  // 0x4381D0
    unsigned int * updateUI(int a2, int a3);  // 0x438300
    int loadScenarioFiles(ObjectClass * aP1);  // 0x5D2260
    int FrameLoop(int a2);  // 0x5D2410
    int FindOpenSlot();  // 0x5D6370
    int GetRelatedObject();  // 0x631D30
    Pipe * WriteEncryptedStream(BombClass * Src, signed int aP2);  // 0x632DC0
    int ReadEncryptedStream(char * a2, signed int Size);  // 0x633130
    bool initPlayerData(const char ** a2);  // 0x69AE10
    void Shutdown();  // 0x6BEC60
    short ReadVersionFile();  // 0x74F960
    short ReadVersionFile2();  // 0x74FA20
    void ReadVersionString();  // 0x74FC80
    int processNetworkPacket(void * Src, signed int Size);  // 0x7BA3C0
    unsigned int * saveGameState(char a2);  // 0x631F40
    int * initDisplay(char a2);  // 0x4AECA0
    void InitDifficultyButtons();  // 0x5E8AE0
    PKPipe * validateGameFile(char a2);  // 0x632FF0
    PKStrawClass * applyGameSettings(char a2);  // 0x633370
    wchar_t * GetDifficultyString();  // 0x5E99C0
    int loadGameState(int a2);  // 0x632FE0
    int parseGameOptions(int a2);  // 0x633360
    int FindPlayerName(int a1);  // 0x69BC60
};
} // namespace gamemd
