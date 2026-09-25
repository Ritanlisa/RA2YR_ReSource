// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MPBattleClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    bool q00D;  // 0xD
    bool q00E;  // 0xE
    bool q010;  // 0x10
    bool q014;  // 0x14
    unsigned char q015;  // 0x15
    bool q020;  // 0x20
    bool q034;  // 0x34
    bool q039;  // 0x39
    unsigned char q03D;  // 0x3D
    bool q050;  // 0x50
    unsigned char q054;  // 0x54
    bool q080;  // 0x80
    unsigned char q084;  // 0x84
    RandomStruct* q0AC;  // 0xAC
    bool q0AD;  // 0xAD
    unsigned int q0AF;  // 0xAF
    unsigned int q0B1;  // 0xB1
    unsigned char q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned char q0E8;  // 0xE8
    bool q128;  // 0x128
    unsigned char q12C;  // 0x12C
    bool q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q220;  // 0x220
    unsigned char q224;  // 0x224
    unsigned char q228;  // 0x228
    RandomStruct* q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q394;  // 0x394
    unsigned char q398;  // 0x398
    unsigned char q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q694;  // 0x694
    unsigned char q698;  // 0x698
    RandomStruct* q880;  // 0x880
// --- flat members (END) ---
    int areTeamChangesAllowed();
    int drawTeamDropdown();
    int firstValidMapIndex();
    int isAIAllowed();
    int isDefaultAI();
    int isHouseAllyChangeAllowed();
    int isTeamsAllowed();
    int onDialogCreated();
    int onDialogDestroyed();
    int populateTeamDropdown();
    int populateTeamDropdownForPlayer();
    int randomAICountryIndex();
    int randomHumanCountryIndex();
    int stopGame();
    int unfixAlliances();
    int vt_entry_18();
    long long canAllyWith();
    long long isDefaultFix();
    long long isValidMap();
    long long startGame();
    MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);
    unsigned int * MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6);
    unsigned int * MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6);
    unsigned int * MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6);
    unsigned int * MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6);
    unsigned int * MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6);
    unsigned int * initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6);
    void allyTeams();
    void getAlliesLimit();
    void getMaximumPlayers();
    void getMinimumPlayers();
    void isMegawealthAllowed();
    void needsHouseSelection();
    void onAIJoined();
    void onGameBegin();
    void onPlayerConnect();
    void onPlayerDisconnect();
    void startingPositionsToHouseBaseCells();
    void validateColor();
    void validateHouse();
    void validateOwner();
    void validatePlayer();
    void validateStartPosition();
};

} // namespace gamemd
