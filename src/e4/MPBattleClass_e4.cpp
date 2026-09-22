// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5C0DD0
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    this->vfptr = &vt_MultiplayerBattle;
    return &this->vfptr;
}
}

// 0x5C5CE0
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    this->vfptr = &vt_FreeForAll;
    return &this->vfptr;
}
}

// 0x5C6150
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_MultiplayerManBattle;
    return this;
}
}

// 0x5C93E0
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)a2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_Megawealth;
    return this;
}
}

// 0x5CA630
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_MultiplayerSiege;
    return this;
}
}

// 0x5CA7D0
namespace gamemd {
void MPBattleClass::vt_entry_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return ScenarioClass::createStartingForces(this);
}
}
}
// 0x5CACF0
long long MPBattleClass::isValidMap()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFA80 - DataGlobal_ABFAA8);
    result = Math::RoundToInt(v0 * DataGlobal_ABFAA0 * 0.5);
    DataGlobal_ABFAF8 = result;
    return result;
}
}

// 0x5CAD30
void MPBattleClass::needsHouseSelection()
{
{
    DataGlobal_ABFAB0 = Math::ArcTan((double)DataGlobal_ABFAF8 * 0.00390625);
}
}

// 0x5CAD60
void MPBattleClass::validatePlayer()
{
{
    DataGlobal_ABFAC8 = Math::ArcTan((double)(2 * DataGlobal_ABFAF8) / DataGlobal_ABFAA0);
}
}

// 0x5CAD90
long long MPBattleClass::startGame()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFAF8) + 0.5);
    DataGlobal_ABFAEC = result;
    return result;
}
}

// 0x5CADC0
int MPBattleClass::stopGame()
{
{
    DataGlobal_ABFA98 = 0;
    DataGlobal_ABFA9A = 0;
    return 0;
}
}

// 0x5CADD0
int MPBattleClass::areTeamChangesAllowed()
{
{
    DataGlobal_ABFAB8 = 0;
    DataGlobal_ABFABC = 0;
    DataGlobal_ABFAC0 = 0;
    return 0;
}
}

// 0x5CADF0
int MPBattleClass::isHouseAllyChangeAllowed()
{
{
    DataGlobal_ABFAE8 = 0;
    DataGlobal_ABFAE0 = 128;
    DataGlobal_ABFAE4 = 128;
    return 128;
}
}

// 0x5CB190
void MPBattleClass::onPlayerConnect()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFB28 = Math::Sqrt(v0 + v0);
}
}

// 0x5CB1C0
void MPBattleClass::onPlayerDisconnect()
{
{
    DataGlobal_ABFB78 = DataGlobal_ABFB28 / 60.0;
}
}

// 0x5CB1E0
void MPBattleClass::getMaximumPlayers()
{
{
    DataGlobal_ABFB60 = 1.0 / DataGlobal_ABFB78;
}
}

// 0x5CB200
void MPBattleClass::getMinimumPlayers()
{
{
    DataGlobal_ABFB58 = 0.0174532925199433 * 45.0;
}
}

// 0x5CB220
void MPBattleClass::getAlliesLimit()
{
{
    DataGlobal_ABFB30 = 0.0174532925199433 * 60.0;
}
}

// 0x5CB260
long long MPBattleClass::canAllyWith()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFB08 - DataGlobal_ABFB30);
    result = Math::RoundToInt(v0 * DataGlobal_ABFB28 * 0.5);
    DataGlobal_ABFB80 = result;
    return result;
}
}

// 0x5CB2D0
void MPBattleClass::onGameBegin()
{
{
    DataGlobal_ABFB50 = Math::ArcTan((double)(2 * DataGlobal_ABFB80) / DataGlobal_ABFB28);
}
}

// 0x5CB380
int MPBattleClass::isAIAllowed()
{
{
    DataGlobal_ABFB10 = 0;
    DataGlobal_ABFB14 = 0;
    DataGlobal_ABFB18 = 0;
    DataGlobal_ABFB1C = 0;
    return 0;
}
}

// 0x5CB3A0
unsigned int * MPBattleClass::MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_UnholyAlliance;
    return this;
}
}

// 0x5CB570
int MPBattleClass::isTeamsAllowed()
{
{
    DataGlobal_ABFB88 = 0;
    DataGlobal_ABFB8C = 0;
    DataGlobal_ABFB90 = 0;
    DataGlobal_ABFB94 = 0;
    return 0;
}
}

// 0x5CEDB0
int MPBattleClass::firstValidMapIndex()
{
{
    DataGlobal_ABFBB0 = 0;
    DataGlobal_ABFBB4 = 0;
    DataGlobal_ABFBB8 = 0;
    DataGlobal_ABFBBC = 0;
    return 0;
}
}

// 0x5D1A80
int MPBattleClass::populateTeamDropdown()
{
{
    DataGlobal_ABFBC0 = 0;
    DataGlobal_ABFBC4 = 0;
    DataGlobal_ABFBC8 = 0;
    DataGlobal_ABFBCC = 0;
    return 0;
}
}

// 0x5D2DE0
int MPBattleClass::drawTeamDropdown()
{
{
    DataGlobal_ABFBD0 = 0;
    DataGlobal_ABFBD4 = 0;
    DataGlobal_ABFBD8 = 0;
    DataGlobal_ABFBDC = 0;
    return 0;
}
}

// 0x5D3470
int MPBattleClass::populateTeamDropdownForPlayer()
{
{
    DataGlobal_ABFC00 = 0;
    DataGlobal_ABFC04 = 0;
    DataGlobal_ABFC08 = 0;
    DataGlobal_ABFC0C = 0;
    return 0;
}
}

// 0x5D3810
void MPBattleClass::validateHouse()
{
{
    DataGlobal_ABFC80 = DataGlobal_ABFC30 / 60.0;
}
}

// 0x5D3830
void MPBattleClass::validateOwner()
{
{
    DataGlobal_ABFC68 = 1.0 / DataGlobal_ABFC80;
}
}

// 0x5D38F0
void MPBattleClass::validateColor()
{
{
    DataGlobal_ABFC40 = Math::ArcTan((double)DataGlobal_ABFC88 * 0.00390625);
}
}

// 0x5D3920
void MPBattleClass::validateStartPosition()
{
{
    DataGlobal_ABFC58 = Math::ArcTan((double)(2 * DataGlobal_ABFC88) / DataGlobal_ABFC30);
}
}

// 0x5D3950
long long MPBattleClass::isDefaultFix()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFC88) + 0.5);
    DataGlobal_ABFC7C = result;
    return result;
}
}

// 0x5D3980
int MPBattleClass::isDefaultAI()
{
{
    DataGlobal_ABFC28 = 0;
    DataGlobal_ABFC2A = 0;
    return 0;
}
}

// 0x5D3990
int MPBattleClass::randomHumanCountryIndex()
{
{
    DataGlobal_ABFC48 = 0;
    DataGlobal_ABFC4C = 0;
    DataGlobal_ABFC50 = 0;
    return 0;
}
}

// 0x5D39B0
int MPBattleClass::randomAICountryIndex()
{
{
    DataGlobal_ABFC78 = 0;
    DataGlobal_ABFC70 = 128;
    DataGlobal_ABFC74 = 128;
    return 128;
}
}

// 0x5D4C30
int MPBattleClass::onDialogCreated()
{
{
    DataGlobal_ABFCA8 = 0;
    DataGlobal_ABFCAC = 0;
    DataGlobal_ABFCB0 = 0;
    DataGlobal_ABFCB4 = 0;
    return 0;
}
}

// 0x5D4C50
int MPBattleClass::onDialogDestroyed()
{
{
    DataGlobal_ABFC94 = 0;
    DataGlobal_ABFC98 = 0;
    DataGlobal_ABFC9C = 1;
    DataGlobal_ABFC9D = 0;
    DataGlobal_ABFC90 = (int)&vt_DynamicVectorClass_HWND;
    DataGlobal_ABFCA4 = 10;
    DataGlobal_ABFCA0 = 0;
    return atexit(sub_5D4C90);
}
}

// 0x5D4CD0
int MPBattleClass::unfixAlliances()
{
{
    DataGlobal_ABFCBC = 0;
    DataGlobal_ABFCC0 = 0;
    DataGlobal_ABFCC4 = 1;
    DataGlobal_ABFCC5 = 0;
    DataGlobal_ABFCB8 = (int)&vt_DynamicVectorClass_AcceleratorTracker;
    DataGlobal_ABFCCC = 10;
    DataGlobal_ABFCC8 = 0;
    return atexit(sub_5D4D10);
}
}

// 0x5D58B0
void MPBattleClass::startingPositionsToHouseBaseCells()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFD58 = Math::Sqrt(v0 + v0);
}
}

// 0x5D58E0
void MPBattleClass::allyTeams()
{
{
    DataGlobal_ABFDC8 = DataGlobal_ABFD58 / 60.0;
}
}

// 0x5D5900
void MPBattleClass::isMegawealthAllowed()
{
{
    DataGlobal_ABFD98 = 1.0 / DataGlobal_ABFDC8;
}
}

// 0x5D5920
void MPBattleClass::onAIJoined()
{
{
    DataGlobal_ABFD90 = 0.0174532925199433 * 45.0;
}
}

// 0x5D8170
unsigned int * MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
