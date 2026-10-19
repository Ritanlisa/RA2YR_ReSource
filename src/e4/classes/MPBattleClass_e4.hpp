// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MPBattleClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    char MPGameModeClass_field_4[1];  // 0x4
    char __pad_5[3];  // 0x5
    int MPTeams;  // 0x8
    int CSFTitle;  // 0xC
    int CSFTooltip;  // 0x10
    int MPModeIndex;  // 0x14
    int INIFilename;  // 0x18
    int MapFilter;  // 0x1C
    char AIAllowed[1];  // 0x20
    char __pad_21[3];  // 0x21
    int INI;  // 0x24
    char AlliesAllowed[1];  // 0x28
    char WOLTourney[1];  // 0x29
    char WOLClanTourney[1];  // 0x2A
    char MustAlly[1];  // 0x2B
// --- flat members (BEGIN) ---
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
    int g_var_d773ad();
    long long canAllyWith();
    long long isDefaultFix();
    long long isValidMap();
    long long startGame();
    MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);
    unsigned int * MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6);
    unsigned int * MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6, void *a7);
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
