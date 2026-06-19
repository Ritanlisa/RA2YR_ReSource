#pragma once

#include <cstdint>
#include <windows.h>

#include "core/vector.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class HouseClass;
class CCINIClass;
class MPTeam;
struct CellStruct;

class MPGameModeClass
{
public:
    static DynamicVectorClass<MPGameModeClass*>* GameModes; // 0xA80260

    // IUnknown
    virtual HRESULT __stdcall QueryInterface(const IID&, void**);
    virtual ULONG   __stdcall AddRef(); // 0x5C0E30
    virtual ULONG   __stdcall Release(); // 0x5C0E40

    virtual ~MPGameModeClass() = default;                                                    // 0x5C0E50

    virtual bool   IsValidMap(); // 0x5CACF0 (MPBattleClass::isValidMap)
    virtual bool   NeedsHouseSelection(); // 0x5CAD30 (MPBattleClass::needsHouseSelection)
    virtual bool   ValidatePlayer(int32_t idx); // 0x5CAD60 (MPBattleClass::validatePlayer)
    virtual bool   StartGame(); // 0x5CAD90 (MPBattleClass::startGame)
    virtual bool   StopGame(int32_t reason); // 0x5CADC0 (MPBattleClass::stopGame)
    virtual bool   AreTeamChangesAllowed(); // 0x5CADD0 (MPBattleClass::areTeamChangesAllowed)
    virtual bool   IsHouseAllyChangeAllowed(); // 0x5CADF0 (MPBattleClass::isHouseAllyChangeAllowed)
    virtual void   OnPlayerConnect(int32_t idx); // 0x5CB190 (MPBattleClass::onPlayerConnect)
    virtual void   OnPlayerDisconnect(int32_t idx); // 0x5CB1C0 (MPBattleClass::onPlayerDisconnect)
    virtual int32_t GetMaximumPlayers(); // 0x5CB1E0 (MPBattleClass::getMaximumPlayers)
    virtual int32_t GetMinimumPlayers(); // 0x5CB200 (MPBattleClass::getMinimumPlayers)
    virtual int32_t GetAlliesLimit(); // 0x5CB220 (MPBattleClass::getAlliesLimit)
    virtual bool   CanAllyWith(int32_t idx); // 0x5CB260 (MPBattleClass::canAllyWith)
    virtual void   OnGameBegin(int32_t seed); // 0x5CB2D0 (MPBattleClass::onGameBegin)
    virtual bool   IsAIAllowed(); // 0x5CB380 (MPBattleClass::isAIAllowed)
    virtual bool   IsTeamsAllowed(); // 0x5CB570 (MPBattleClass::isTeamsAllowed)
    virtual int32_t FirstValidMapIndex(); // 0x5CEDB0 (MPBattleClass::firstValidMapIndex)
    virtual void   PopulateTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*); // 0x5D1A80 (MPBattleClass::populateTeamDropdown)
    virtual void   DrawTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*); // 0x5D2DE0 (MPBattleClass::drawTeamDropdown)
    virtual void   PopulateTeamDropdownForPlayer(HWND, int32_t); // 0x5D3470 (MPBattleClass::populateTeamDropdownForPlayer)
    virtual bool   ValidateHouse(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t); // 0x5D3810
    virtual bool   ValidateOwner(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t,int32_t); // 0x5D3830
    virtual bool   ValidateColor(int32_t,int32_t,int32_t); // 0x5D38F0 (MPBattleClass::validateColor)
    virtual bool   ValidateStartPosition(); // 0x5D3920 (MPBattleClass::validateStartPosition)
    virtual bool   IsDefaultFix(); // 0x5D3950 (MPBattleClass::isDefaultFix)
    virtual bool   IsDefaultAI(); // 0x5D3980 (MPBattleClass::isDefaultAI)
    virtual int32_t RandomHumanCountryIndex(); // 0x5D3990 (MPBattleClass::randomHumanCountryIndex)
    virtual int32_t RandomAICountryIndex(); // 0x5D39B0
    virtual void   OnDialogCreated(int32_t, int32_t); // 0x5D4C30 (MPBattleClass::onDialogCreated)
    virtual void   OnDialogDestroyed(int32_t); // 0x5D4C50 (MPBattleClass::onDialogDestroyed)
    virtual bool   UnfixAlliances(); // 0x5D4CD0 (MPBattleClass::unfixAlliances)
    virtual bool   StartingPositionsToHouseBaseCells(int8_t); // 0x5D58B0 (MPBattleClass)
    virtual bool   StartingPositionsToHouseBaseCells2(bool); // 0x5D6310 (ScenarioClass::MissionStubReturnZero2)
    virtual bool   AllyTeams(); // 0x5D58E0 (MPBattleClass::allyTeams)
    virtual bool   IsMegawealthAllowed(); // 0x5D5900 (MPBattleClass::isMegawealthAllowed)
    virtual void   OnAIJoined(); // 0x5D5920 (MPBattleClass::onAIJoined)
    virtual void   OnAllCompleted(); // 0x5C0E60 (ScenarioClass::StubReturnTrue)
    virtual int32_t GetScoreMode(); // 0x5D5DC0 (Dialog::GetModeNeg2)
    virtual void   OnNewScenario(); // 0x5C0EE0 (ScenarioClass::initTriggers)
    virtual void   OnInitGame(int32_t); // 0x5C0EF0 (ScenarioClass::StubReturnFalse6)
    virtual void   OnGameSpeedChanged(int32_t); // 0x5C0F00 (ScenarioClass::StubReturnFalse7)
    virtual bool   IsGameOver(); // 0x5D5DE0 (GameMode::IsValid)
    virtual void   OnEndOfFrame(); // 0x5C0F10 (ScenarioClass::StubReturnTrue3)
    virtual void   OnDrawDialog(); // 0x5C0F20 (ScenarioClass::StubReturnTrue4)
    virtual bool   IsDefeated(int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t); // 0x5D6430 (ScenarioClass::dispatchEvents)
    virtual int32_t IsWinner(); // 0x5D6350 (DialogClass::GetFlag)
    virtual bool   IsPlayerEliminated(); // 0x5C0F40 (ScenarioClass::StubReturnTrue5)
    virtual void   CreateMPTeams(DynamicVectorClass<MPTeam*>*); // 0x5C0F30 (ScenarioClass::initTeams)
    virtual CellStruct* AssignStartingPositionsToHouse(CellStruct*, int32_t,
                        DynamicVectorClass<CellStruct>*, uint8_t*) { return nullptr; }       // 0x5D6BE0 (ScenarioClass::AssignStartPositions)
    virtual bool   SpawnBaseUnits(HouseClass*, uint32_t); // 0x5D6340 (ScenarioClass::createStartingForces)
    virtual bool   GenerateStartingUnits(HouseClass*, int32_t&); // 0x5D6440 (ScenarioClass::MissionStubReturnZero3)

    bool             MPGameModeClass_field_4;
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

protected:
    MPGameModeClass() noexcept; // 0x5D8170 (MPBattleClass ctor area)
};

class MPBattleClass : public MPGameModeClass
{
public:
    MPBattleClass() noexcept;                                                    // 0x5D8170
    virtual ~MPBattleClass() = default;
    virtual bool IsTeamsAllowed() override; // 0x5CB570
    virtual bool IsValidMap() override; // 0x5CACF0
    virtual bool NeedsHouseSelection() override; // 0x5CAD30
    virtual bool StartGame() override; // 0x5CAD90
    virtual bool StopGame(int32_t reason) override; // 0x5CADC0
    virtual void OnPlayerConnect(int32_t idx) override; // 0x5CB190
    virtual void OnPlayerDisconnect(int32_t idx) override; // 0x5CB1C0
    virtual int32_t GetMaximumPlayers() override; // 0x5CB1E0
    virtual int32_t GetMinimumPlayers() override; // 0x5CB200
    virtual int32_t GetAlliesLimit() override; // 0x5CB220
    virtual bool CanAllyWith(int32_t idx) override; // 0x5CB260
    virtual void OnGameBegin(int32_t seed) override; // 0x5CB2D0
    virtual bool IsAIAllowed() override; // 0x5CB380
    virtual int32_t FirstValidMapIndex() override; // 0x5CEDB0
    virtual void PopulateTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) override; // 0x5D1A80
    virtual void PopulateTeamDropdownForPlayer(HWND, int32_t) override; // 0x5D3470
    virtual bool ValidateHouse(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t) override; // 0x5D3810
    virtual bool ValidateOwner(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t,int32_t) override; // 0x5D3830
    virtual bool ValidateColor(int32_t,int32_t,int32_t) override; // 0x5D38F0
    virtual bool ValidateStartPosition() override; // 0x5D3920
    virtual bool IsDefaultFix() override; // 0x5D3950
    virtual bool IsDefaultAI() override; // 0x5D3980
    virtual bool ValidatePlayer(int32_t idx) override; // 0x5CAD60
    virtual int32_t RandomHumanCountryIndex() override; // 0x5D3990
    virtual int32_t RandomAICountryIndex() override; // 0x5D39B0
    virtual bool AreTeamChangesAllowed() override; // 0x5CADD0
    virtual bool IsHouseAllyChangeAllowed() override; // 0x5CADF0
    virtual void OnDialogCreated(int32_t, int32_t) override; // 0x5D4C30
    virtual void OnDialogDestroyed(int32_t) override; // 0x5D4C50
    virtual void DrawTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) override; // 0x5D2DE0
    virtual bool UnfixAlliances() override; // 0x5D4CD0
    virtual bool StartingPositionsToHouseBaseCells(int8_t) override; // 0x5D58B0
    virtual bool StartingPositionsToHouseBaseCells2(bool) override; // 0x5D6310
    virtual bool AllyTeams() override; // 0x5D58E0
    virtual bool IsMegawealthAllowed() override; // 0x5D5900
    virtual void OnAIJoined() override; // 0x5D5920
    virtual void OnAllCompleted() override; // 0x5C0E60
    virtual int32_t GetScoreMode() override; // 0x5D5DC0
    virtual void OnNewScenario() override; // 0x5C0EE0
    virtual void OnInitGame(int32_t) override; // 0x5C0EF0
    virtual void OnGameSpeedChanged(int32_t) override; // 0x5C0F00
    virtual bool IsGameOver() override; // 0x5D5DE0
    virtual void OnEndOfFrame() override; // 0x5C0F10
    virtual void OnDrawDialog() override; // 0x5C0F20
    virtual bool IsDefeated(int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t) override; // 0x5D6430
    virtual int32_t IsWinner() override; // 0x5D6350
    virtual bool IsPlayerEliminated() override; // 0x5C0F40
    virtual void CreateMPTeams(DynamicVectorClass<MPTeam*>*) override; // 0x5C0F30
    virtual CellStruct* AssignStartingPositionsToHouse(CellStruct*, int32_t,
                        DynamicVectorClass<CellStruct>*, uint8_t*) override { return nullptr; } // 0x5D6BE0
    virtual bool SpawnBaseUnits(HouseClass*, uint32_t) override; // 0x5D6340
    virtual bool GenerateStartingUnits(HouseClass*, int32_t&) override; // 0x5D6440

    void initGame(); // 0x5C0DD0
};

class MPFreeForAllClass : public MPGameModeClass
{
public:
    MPFreeForAllClass() noexcept;                                       // 0x5C5CE0 (MPBattleClass::MPFreeForAllClass)
    virtual ~MPFreeForAllClass() = default;
    virtual bool StartGame() override; // 0x5CAD90
    virtual bool StopGame(int32_t reason) override; // 0x5CADC0
    virtual bool AreTeamChangesAllowed() override; // 0x5CADD0
    virtual bool IsTeamsAllowed() override; // 0x5CB570
    virtual void PopulateTeamDropdownForPlayer(HWND, int32_t) override; // 0x5D3470
};

class MPUnholyAllianceClass : public MPGameModeClass
{
public:
    MPUnholyAllianceClass() noexcept;                                    // 0x5CB3A0 (MPBattleClass::MPUnholyAllianceClass)
    virtual ~MPUnholyAllianceClass() = default;
    virtual bool StartGame() override; // 0x5CAD90
    virtual bool StopGame(int32_t reason) override; // 0x5CADC0
    virtual bool AreTeamChangesAllowed() override; // 0x5CADD0
    virtual bool SpawnBaseUnits(HouseClass*, uint32_t) override; // 0x5D6340
};

class MPSiegeClass : public MPGameModeClass
{
public:
    MPSiegeClass() noexcept;                                              // 0x5CA630 (MPBattleClass::MPSiegeClass)
    virtual ~MPSiegeClass() = default;
    virtual bool StartGame() override; // 0x5CAD90
    virtual bool StopGame(int32_t reason) override; // 0x5CADC0
    virtual bool AreTeamChangesAllowed() override; // 0x5CADD0
    virtual bool IsAIAllowed() override; // 0x5CB380
    virtual bool UnfixAlliances() override; // 0x5D4CD0
    virtual bool StartingPositionsToHouseBaseCells2(bool) override; // 0x5D6310
    virtual void CreateMPTeams(DynamicVectorClass<MPTeam*>*) override; // 0x5C0F30
    virtual bool SpawnBaseUnits(HouseClass*, uint32_t) override; // 0x5D6340
};

class MPMegawealthClass : public MPGameModeClass
{
public:
    MPMegawealthClass() noexcept;                                  // 0x5C93E0 (MPBattleClass::MPMegawealthClass)
    virtual ~MPMegawealthClass() = default;
    virtual bool IsMegawealthAllowed() override; // 0x5D5900 (MPBattleClass::isMegawealthAllowed)
};

class MPManBattleClass : public MPGameModeClass
{
public:
    MPManBattleClass() noexcept;  // 0x5C6150 (MPBattleClass::MPManBattleClass)
    virtual ~MPManBattleClass() = default;
};

// TODO: add remaining MP game modes (Cooperative, NavalBattle, etc.)

} // namespace gamemd
