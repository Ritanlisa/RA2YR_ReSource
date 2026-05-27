#include "gamemd/network/multiplayer.hpp"

namespace gamemd
{

DynamicVectorClass<MPGameModeClass*>* MPGameModeClass::GameModes = nullptr;

// --- MPGameModeClass ---

MPGameModeClass::MPGameModeClass() noexcept
    : unknown_4(false)
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

MPBattleClass::MPBattleClass()
    : MPGameModeClass()
{
}

// --- MPFreeForAllClass ---

MPFreeForAllClass::MPFreeForAllClass()
    : MPGameModeClass()
{
}

// --- MPUnholyAllianceClass ---

MPUnholyAllianceClass::MPUnholyAllianceClass()
    : MPGameModeClass()
{
}

// --- MPSiegeClass ---

MPSiegeClass::MPSiegeClass()
    : MPGameModeClass()
{
}

// --- MPMegawealthClass ---

MPMegawealthClass::MPMegawealthClass()
    : MPGameModeClass()
{
}

// --- MPManBattleClass ---

MPManBattleClass::MPManBattleClass()
    : MPGameModeClass()
{
}

// TODO: complete multiplayer game mode implementations

} // namespace gamemd
