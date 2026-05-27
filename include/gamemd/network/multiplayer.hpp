#pragma once

#include <cstdint>
#include <windows.h>

#include "..\core\vector.hpp"
#include "..\fundamentals.hpp"

namespace gamemd
{

class HouseClass;
class CCINIClass;
class MPTeam;
struct CellStruct;

class MPGameModeClass
{
public:
    static DynamicVectorClass<MPGameModeClass*>* GameModes;

    MPGameModeClass() noexcept;
    virtual ~MPGameModeClass() = default;

    virtual bool   IsValidMap()                                       { return false; }
    virtual bool   NeedsHouseSelection()                              { return false; }
    virtual bool   ValidatePlayer(int32_t idx)                        { return true; }
    virtual bool   StartGame()                                        { return false; }
    virtual bool   StopGame(int32_t reason)                           { return true; }
    virtual bool   AreTeamChangesAllowed()                            { return true; }
    virtual bool   IsHouseAllyChangeAllowed()                         { return true; }
    virtual void   OnPlayerConnect(int32_t idx)                       {}
    virtual void   OnPlayerDisconnect(int32_t idx)                    {}
    virtual int32_t GetMaximumPlayers()                               { return -2; }
    virtual int32_t GetMinimumPlayers()                               { return MustAlly ? 0 : -2; }
    virtual int32_t GetAlliesLimit()                                  { return AlliesAllowed ? 3 : -2; }
    virtual bool   CanAllyWith(int32_t idx)                           { return false; }
    virtual void   OnGameBegin(int32_t seed)                          {}
    virtual bool   IsAIAllowed()                                      { return AIAllowed; }
    virtual bool   IsTeamsAllowed()                                   { return false; }
    virtual int32_t FirstValidMapIndex()                              { return 0; }
    virtual void   PopulateTeamDropdown(HWND hWnd, DynamicVectorClass<MPTeam*>* vecTeams, MPTeam* pTeam) {}
    virtual void   DrawTeamDropdown(HWND hWnd, DynamicVectorClass<MPTeam*>* vecTeams, MPTeam* pTeam) {}
    virtual void   PopulateTeamDropdownForPlayer(HWND hWnd, int32_t idx) {}
    virtual bool   ValidateHouse(int32_t idx1, int32_t idx2, void* ptr, int32_t a4, int16_t a5, int32_t a6, int32_t a7) { return false; }
    virtual bool   ValidateOwner(int32_t a1, int32_t a2, void* ptr, int32_t a4, int16_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) { return false; }
    virtual bool   ValidateColor(int32_t unk1, int32_t unk2, int32_t unk3) { return true; }
    virtual bool   ValidateStartPosition()                            { return true; }
    virtual bool   IsDefaultFix()                                     { return true; }
    virtual bool   IsDefaultAI()                                      { return true; }
    virtual int32_t RandomHumanCountryIndex()                         { return 0; }
    virtual int32_t RandomAICountryIndex()                            { return RandomHumanCountryIndex(); }
    virtual void   OnDialogCreated(int32_t unk1, int32_t unk2)        {}
    virtual void   OnDialogDestroyed(int32_t unk1)                    {}
    virtual bool   UnfixAlliances()                                   { return false; }
    virtual bool   StartingPositionsToHouseBaseCells(int8_t unused)   { return false; }
    virtual bool   StartingPositionsToHouseBaseCells2(bool arg)       { return false; }
    virtual bool   AllyTeams()                                        { return false; }
    virtual bool   IsMegawealthAllowed()                              { return true; }
    virtual void   OnAIJoined()                                       {}
    virtual void   OnAllCompleted()                                   {}
    virtual int32_t GetScoreMode()                                    { return -1; }
    virtual void   OnNewScenario()                                    {}
    virtual void   OnInitGame(int32_t unk)                            {}
    virtual void   OnGameSpeedChanged(int32_t unk)                    {}
    virtual bool   IsGameOver()                                       { return false; }
    virtual void   OnEndOfFrame()                                     {}
    virtual void   OnDrawDialog()                                     {}
    virtual bool   IsDefeated(int32_t idx, void* ptr, int32_t a3, int16_t a4, int32_t a5, int32_t a6, int32_t a7) { return false; }
    virtual int32_t IsWinner()                                        { return 0; }
    virtual bool   IsPlayerEliminated()                               { return true; }
    virtual void   CreateMPTeams(DynamicVectorClass<MPTeam*>* vecTeams) {}
    virtual CellStruct* AssignStartingPositionsToHouse(CellStruct* result, int32_t idxHouse,
                        DynamicVectorClass<CellStruct>* vecCoords, uint8_t* housesSatisfied) { return nullptr; }
    virtual bool   SpawnBaseUnits(HouseClass* pHouse, uint32_t unused) { return false; }
    virtual bool   GenerateStartingUnits(HouseClass* pHouse, int32_t& amountToSpend) { return false; }

    bool             unknown_4;
    DynamicVectorClass<MPTeam*> MPTeams;
    wchar_t*         CSFTitle;
    wchar_t*         CSFTooltip;
    int32_t          MPModeIndex;
    char*            INIFilename;
    char*            MapFilter;
    bool             AIAllowed;
    CCINIClass*      INI;
    bool             AlliesAllowed;
    bool             WOLTourney;
    bool             WOLClanTourney;
    bool             MustAlly;

    // TODO: complete MPGameModeClass members

protected:
    MPGameModeClass() noexcept;
};

class MPBattleClass : public MPGameModeClass
{
public:
    virtual ~MPBattleClass() = default;
    virtual bool IsTeamsAllowed() override { return true; }
    // TODO: complete MPBattleClass
};

class MPFreeForAllClass : public MPGameModeClass
{
public:
    virtual ~MPFreeForAllClass() = default;
    virtual bool StartGame() override { return false; }
    virtual bool StopGame(int32_t reason) override { return false; }
    virtual bool AreTeamChangesAllowed() override { return false; }
    virtual bool IsTeamsAllowed() override { return true; }
    virtual void PopulateTeamDropdownForPlayer(HWND hWnd, int32_t idx) override {}
    // TODO: complete MPFreeForAllClass
};

class MPUnholyAllianceClass : public MPGameModeClass
{
public:
    virtual ~MPUnholyAllianceClass() = default;
    virtual bool StartGame() override { return false; }
    virtual bool StopGame(int32_t reason) override { return false; }
    virtual bool AreTeamChangesAllowed() override { return false; }
    virtual bool SpawnBaseUnits(HouseClass* pHouse, uint32_t unused) override { return false; }
    // TODO: complete MPUnholyAllianceClass
};

class MPSiegeClass : public MPGameModeClass
{
public:
    virtual ~MPSiegeClass() = default;
    virtual bool StartGame() override { return false; }
    virtual bool StopGame(int32_t reason) override { return false; }
    virtual bool AreTeamChangesAllowed() override { return false; }
    virtual bool IsAIAllowed() override { return false; }
    virtual bool UnfixAlliances() override { return MPGameModeClass::UnfixAlliances(); }
    virtual bool StartingPositionsToHouseBaseCells2(bool arg) override { return false; }
    virtual void CreateMPTeams(DynamicVectorClass<MPTeam*>* vecTeams) override {}
    virtual bool SpawnBaseUnits(HouseClass* pHouse, uint32_t unused) override { return false; }
    // TODO: complete MPSiegeClass
};

class MPMegawealthClass : public MPGameModeClass
{
public:
    virtual ~MPMegawealthClass() = default;
    virtual bool IsMegawealthAllowed() override { return false; }
    // TODO: complete MPMegawealthClass
};

class MPManBattleClass : public MPGameModeClass
{
public:
    virtual ~MPManBattleClass() = default;
    // TODO: complete MPManBattleClass
};

// TODO: add remaining MP game modes (Cooperative, NavalBattle, etc.)

} // namespace gamemd
