#include "network/multiplayer.hpp"

namespace gamemd
{

DynamicVectorClass<MPGameModeClass*>* MPGameModeClass::GameModes = nullptr;

// --- MPGameModeClass ---

MPGameModeClass::MPGameModeClass() noexcept
    : field_4(false)
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

// TODO: complete multiplayer game mode implementations

} // namespace gamemd
