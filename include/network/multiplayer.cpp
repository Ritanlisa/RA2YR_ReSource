#include "network/multiplayer.hpp"

namespace gamemd
{

DynamicVectorClass<MPGameModeClass*>* MPGameModeClass::GameModes = nullptr;

// --- MPGameModeClass ---

MPGameModeClass::MPGameModeClass() noexcept
    : MPGameModeClass_field_4(false)
    , CSFTitle(nullptr)
    , CSFTooltip(nullptr)
    , MPModeIndex(-1)
    , INIFilename(nullptr)
    , MapFilter(nullptr)
    , AIAllowed(false)
    , INI(nullptr)
    , AlliesAllowed(false)
    , WOLTourney(false)
    , WOLClanTourney(false)
    , MustAlly(false)
{
}

// --- MPBattleClass ---

MPBattleClass::MPBattleClass() noexcept
    : MPGameModeClass()
{
}

// --- MPFreeForAllClass ---

MPFreeForAllClass::MPFreeForAllClass() noexcept
    : MPGameModeClass()
{
}

// --- MPUnholyAllianceClass ---

MPUnholyAllianceClass::MPUnholyAllianceClass() noexcept
    : MPGameModeClass()
{
}

// --- MPSiegeClass ---

MPSiegeClass::MPSiegeClass() noexcept
    : MPGameModeClass()
{
}

// --- MPMegawealthClass ---

MPMegawealthClass::MPMegawealthClass() noexcept
    : MPGameModeClass()
{
}

// --- MPManBattleClass ---

MPManBattleClass::MPManBattleClass() noexcept
    : MPGameModeClass()
{
}

} // namespace gamemd

#include "network/multiplayer.hpp"

namespace gamemd {

// --- MPGameModeClass ---

HRESULT __stdcall MPGameModeClass::QueryInterface(const IID&, void**) { return E_NOINTERFACE; }
ULONG   __stdcall MPGameModeClass::AddRef() { return 1; }
ULONG   __stdcall MPGameModeClass::Release() { return 1; }
bool MPGameModeClass::IsValidMap() { return false; }
bool MPGameModeClass::NeedsHouseSelection() { return false; }
bool MPGameModeClass::ValidatePlayer(int32_t idx) { return true; }
bool MPGameModeClass::StartGame() { return false; }
bool MPGameModeClass::StopGame(int32_t reason) { return true; }
bool MPGameModeClass::AreTeamChangesAllowed() { return true; }
bool MPGameModeClass::IsHouseAllyChangeAllowed() { return true; }
void MPGameModeClass::OnPlayerConnect(int32_t idx) {}
void MPGameModeClass::OnPlayerDisconnect(int32_t idx) {}
int32_t MPGameModeClass::GetMaximumPlayers() { return -2; }
int32_t MPGameModeClass::GetMinimumPlayers() { return MustAlly ? 0 : -2; }
int32_t MPGameModeClass::GetAlliesLimit() { return AlliesAllowed ? 3 : -2; }
bool MPGameModeClass::CanAllyWith(int32_t idx) { return false; }
void MPGameModeClass::OnGameBegin(int32_t seed) {}
bool MPGameModeClass::IsAIAllowed() { return AIAllowed; }
bool MPGameModeClass::IsTeamsAllowed() { return false; }
int32_t MPGameModeClass::FirstValidMapIndex() { return 0; }
void MPGameModeClass::PopulateTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) {}
void MPGameModeClass::DrawTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) {}
void MPGameModeClass::PopulateTeamDropdownForPlayer(HWND, int32_t) {}
bool MPGameModeClass::ValidateHouse(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t) { return false; }
bool MPGameModeClass::ValidateOwner(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t,int32_t) { return false; }
bool MPGameModeClass::ValidateColor(int32_t,int32_t,int32_t) { return true; }
bool MPGameModeClass::ValidateStartPosition() { return true; }
bool MPGameModeClass::IsDefaultFix() { return true; }
bool MPGameModeClass::IsDefaultAI() { return true; }
int32_t MPGameModeClass::RandomHumanCountryIndex() { return 0; }
int32_t MPGameModeClass::RandomAICountryIndex() { return RandomHumanCountryIndex(); }
void MPGameModeClass::OnDialogCreated(int32_t, int32_t) {}
void MPGameModeClass::OnDialogDestroyed(int32_t) {}
bool MPGameModeClass::UnfixAlliances() { return false; }
bool MPGameModeClass::StartingPositionsToHouseBaseCells(int8_t) { return false; }
bool MPGameModeClass::StartingPositionsToHouseBaseCells2(bool) { return false; }
bool MPGameModeClass::AllyTeams() { return false; }
bool MPGameModeClass::IsMegawealthAllowed() { return true; }
void MPGameModeClass::OnAIJoined() {}
void MPGameModeClass::OnAllCompleted() {}
int32_t MPGameModeClass::GetScoreMode() { return -1; }
void MPGameModeClass::OnNewScenario() {}
void MPGameModeClass::OnInitGame(int32_t) {}
void MPGameModeClass::OnGameSpeedChanged(int32_t) {}
bool MPGameModeClass::IsGameOver() { return false; }
void MPGameModeClass::OnEndOfFrame() {}
void MPGameModeClass::OnDrawDialog() {}
bool MPGameModeClass::IsDefeated(int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t) { return false; }
int32_t MPGameModeClass::IsWinner() { return 0; }
bool MPGameModeClass::IsPlayerEliminated() { return true; }
void MPGameModeClass::CreateMPTeams(DynamicVectorClass<MPTeam*>*) {}
bool MPGameModeClass::SpawnBaseUnits(HouseClass*, uint32_t) { return false; }
bool MPGameModeClass::GenerateStartingUnits(HouseClass*, int32_t&) { return false; }

// --- MPBattleClass ---

bool MPBattleClass::IsTeamsAllowed() { return true; }
bool MPBattleClass::IsValidMap() { return false; }
bool MPBattleClass::NeedsHouseSelection() { return false; }
bool MPBattleClass::StartGame() { return false; }
bool MPBattleClass::StopGame(int32_t reason) { return false; }
void MPBattleClass::OnPlayerConnect(int32_t idx) {}
void MPBattleClass::OnPlayerDisconnect(int32_t idx) {}
int32_t MPBattleClass::GetMaximumPlayers() { return -2; }
int32_t MPBattleClass::GetMinimumPlayers() { return -2; }
int32_t MPBattleClass::GetAlliesLimit() { return -2; }
bool MPBattleClass::CanAllyWith(int32_t idx) { return false; }
void MPBattleClass::OnGameBegin(int32_t seed) {}
bool MPBattleClass::IsAIAllowed() { return false; }
int32_t MPBattleClass::FirstValidMapIndex() { return 0; }
void MPBattleClass::PopulateTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) {}
void MPBattleClass::PopulateTeamDropdownForPlayer(HWND, int32_t) {}
bool MPBattleClass::ValidateHouse(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t) { return false; }
bool MPBattleClass::ValidateOwner(int32_t,int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t,int32_t) { return false; }
bool MPBattleClass::ValidateColor(int32_t,int32_t,int32_t) { return true; }
bool MPBattleClass::ValidateStartPosition() { return true; }
bool MPBattleClass::IsDefaultFix() { return true; }
bool MPBattleClass::IsDefaultAI() { return true; }
bool MPBattleClass::ValidatePlayer(int32_t idx) { return true; }
int32_t MPBattleClass::RandomHumanCountryIndex() { return 0; }
int32_t MPBattleClass::RandomAICountryIndex() { return 0; }
bool MPBattleClass::AreTeamChangesAllowed() { return true; }
bool MPBattleClass::IsHouseAllyChangeAllowed() { return true; }
void MPBattleClass::OnDialogCreated(int32_t, int32_t) {}
void MPBattleClass::OnDialogDestroyed(int32_t) {}
void MPBattleClass::DrawTeamDropdown(HWND, DynamicVectorClass<MPTeam*>*, MPTeam*) {}
bool MPBattleClass::UnfixAlliances() { return false; }
bool MPBattleClass::StartingPositionsToHouseBaseCells(int8_t) { return false; }
bool MPBattleClass::StartingPositionsToHouseBaseCells2(bool) { return false; }
bool MPBattleClass::AllyTeams() { return false; }
bool MPBattleClass::IsMegawealthAllowed() { return true; }
void MPBattleClass::OnAIJoined() {}
void MPBattleClass::OnAllCompleted() {}
int32_t MPBattleClass::GetScoreMode() { return -1; }
void MPBattleClass::OnNewScenario() {}
void MPBattleClass::OnInitGame(int32_t) {}
void MPBattleClass::OnGameSpeedChanged(int32_t) {}
bool MPBattleClass::IsGameOver() { return false; }
void MPBattleClass::OnEndOfFrame() {}
void MPBattleClass::OnDrawDialog() {}
bool MPBattleClass::IsDefeated(int32_t,void*,int32_t,int16_t,int32_t,int32_t,int32_t) { return false; }
int32_t MPBattleClass::IsWinner() { return 0; }
bool MPBattleClass::IsPlayerEliminated() { return true; }
void MPBattleClass::CreateMPTeams(DynamicVectorClass<MPTeam*>*) {}
bool MPBattleClass::SpawnBaseUnits(HouseClass*, uint32_t) { return false; }
bool MPBattleClass::GenerateStartingUnits(HouseClass*, int32_t&) { return false; }

// --- MPFreeForAllClass ---

bool MPFreeForAllClass::StartGame() { return false; }
bool MPFreeForAllClass::StopGame(int32_t reason) { return false; }
bool MPFreeForAllClass::AreTeamChangesAllowed() { return false; }
bool MPFreeForAllClass::IsTeamsAllowed() { return true; }
void MPFreeForAllClass::PopulateTeamDropdownForPlayer(HWND, int32_t) {}

// --- MPUnholyAllianceClass ---

bool MPUnholyAllianceClass::StartGame() { return false; }
bool MPUnholyAllianceClass::StopGame(int32_t reason) { return false; }
bool MPUnholyAllianceClass::AreTeamChangesAllowed() { return false; }
bool MPUnholyAllianceClass::SpawnBaseUnits(HouseClass*, uint32_t) { return false; }

// --- MPSiegeClass ---

bool MPSiegeClass::StartGame() { return false; }
bool MPSiegeClass::StopGame(int32_t reason) { return false; }
bool MPSiegeClass::AreTeamChangesAllowed() { return false; }
bool MPSiegeClass::IsAIAllowed() { return false; }
bool MPSiegeClass::UnfixAlliances() { return MPGameModeClass::UnfixAlliances(); }
bool MPSiegeClass::StartingPositionsToHouseBaseCells2(bool) { return false; }
void MPSiegeClass::CreateMPTeams(DynamicVectorClass<MPTeam*>*) {}
bool MPSiegeClass::SpawnBaseUnits(HouseClass*, uint32_t) { return false; }

// --- MPMegawealthClass ---

bool MPMegawealthClass::IsMegawealthAllowed() { return false; }

} // namespace gamemd
