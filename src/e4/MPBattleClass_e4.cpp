// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C0DD0
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::initGame(
        MultiplayerBattle *this,
        const wchar_t **a1,
        MultiplayerBattle *aP2,
        const char **a3,
        MultiplayerBattle *aP4,
        char aP5,
        MultiplayerBattle *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c0df3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = &MultiplayerBattle::`vftable'; /*0x5c0df8*/
  return &this->vfptr; /*0x5c0e00*/
}
}

// 0x5C5CE0
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::MPFreeForAllClass(
        FreeForAll *this,
        const wchar_t **a1,
        FreeForAll *aP2,
        const char **a3,
        FreeForAll *aP4,
        char aP5,
        FreeForAll *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c5d03*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = &FreeForAll::`vftable'; /*0x5c5d08*/
  return &this->vfptr; /*0x5c5d10*/
}
}

// 0x5C6150
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::MPManBattleClass(
        _DWORD *this,
        const wchar_t **a1,
        MultiplayerManBattle *aP2,
        const char **a3,
        MultiplayerManBattle *aP4,
        char aP5,
        MultiplayerManBattle *aP6)
{
  MultiplayerGameMode::Construct( /*0x5c6173*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &MultiplayerManBattle::`vftable'; /*0x5c6178*/
  return this; /*0x5c6180*/
}
}

// 0x5C93E0
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::MPMegawealthClass(
        _DWORD *this,
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        MPCooperative *aP4,
        char aP5,
        int aP6)
{
  MultiplayerGameMode::Construct( /*0x5c9403*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)a2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &Megawealth::`vftable'; /*0x5c9408*/
  return this; /*0x5c9410*/
}
}

// 0x5CA630
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::MPSiegeClass(
        _DWORD *this,
        const wchar_t **a1,
        MultiplayerSiege *aP2,
        const char **a3,
        MultiplayerSiege *aP4,
        char aP5,
        MultiplayerSiege *aP6)
{
  MultiplayerGameMode::Construct( /*0x5ca653*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &MultiplayerSiege::`vftable'; /*0x5ca658*/
  return this; /*0x5ca660*/
}
}

// 0x5CA7D0
namespace gamemd {
int MPBattleClass_vt_entry_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
bool __thiscall MPBattleClass::vt_entry_18(std::codecvt_base *this)
{
  return ScenarioClass::createStartingForces(this);
}
}
} // namespace gamemd

// 0x5CACF0
long long MPBattleClass::isValidMap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CACF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFA80] - MEMORY[0xABFAA8]); /*0x5cad02*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFAA0] * 0.5); /*0x5cad16*/
  MEMORY[0xABFAF8] = result; /*0x5cad1b*/
  return result; /*0x5cad20*/
}
}

// 0x5CAD30
void MPBattleClass::needsHouseSelection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAD30()
{
  MEMORY[0xABFAB0] = Math::ArcTan((double)MEMORY[0xABFAF8] * 0.00390625); /*0x5cad47*/
}
}

// 0x5CAD60
void MPBattleClass::validatePlayer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAD60()
{
  MEMORY[0xABFAC8] = Math::ArcTan((double)(2 * MEMORY[0xABFAF8]) / MEMORY[0xABFAA0]); /*0x5cad82*/
}
}

// 0x5CAD90
long long MPBattleClass::startGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CAD90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFAF8]) + 0.5); /*0x5cadab*/
  MEMORY[0xABFAEC] = result; /*0x5cadb0*/
  return result; /*0x5cadb6*/
}
}

// 0x5CADC0
int MPBattleClass::stopGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CADC0()
{
  MEMORY[0xABFA98] = 0; /*0x5cadc2*/
  MEMORY[0xABFA9A] = 0; /*0x5cadc8*/
  return 0; /*0x5cadce*/
}
}

// 0x5CADD0
int MPBattleClass::areTeamChangesAllowed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CADD0()
{
  MEMORY[0xABFAB8] = 0; /*0x5cadd2*/
  MEMORY[0xABFABC] = 0; /*0x5cadd7*/
  MEMORY[0xABFAC0] = 0; /*0x5caddc*/
  return 0; /*0x5cade1*/
}
}

// 0x5CADF0
int MPBattleClass::isHouseAllyChangeAllowed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CADF0()
{
  MEMORY[0xABFAE8] = 0; /*0x5cadf5*/
  MEMORY[0xABFAE0] = 128; /*0x5cadff*/
  MEMORY[0xABFAE4] = 128; /*0x5cae04*/
  return 128; /*0x5cae09*/
}
}

// 0x5CB190
void MPBattleClass::onPlayerConnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cb19c*/
  MEMORY[0xABFB28] = Math::Sqrt(v0 + v0); /*0x5cb1ae*/
}
}

// 0x5CB1C0
void MPBattleClass::onPlayerDisconnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB1C0()
{
  MEMORY[0xABFB78] = MEMORY[0xABFB28] / 60.0; /*0x5cb1cc*/
}
}

// 0x5CB1E0
void MPBattleClass::getMaximumPlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB1E0()
{
  MEMORY[0xABFB60] = 1.0 / MEMORY[0xABFB78]; /*0x5cb1ec*/
}
}

// 0x5CB200
void MPBattleClass::getMinimumPlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB200()
{
  MEMORY[0xABFB58] = 0.0174532925199433 * 45.0; /*0x5cb20c*/
}
}

// 0x5CB220
void MPBattleClass::getAlliesLimit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB220()
{
  MEMORY[0xABFB30] = 0.0174532925199433 * 60.0; /*0x5cb22c*/
}
}

// 0x5CB260
long long MPBattleClass::canAllyWith()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CB260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFB08] - MEMORY[0xABFB30]); /*0x5cb272*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFB28] * 0.5); /*0x5cb286*/
  MEMORY[0xABFB80] = result; /*0x5cb28b*/
  return result; /*0x5cb290*/
}
}

// 0x5CB2D0
void MPBattleClass::onGameBegin()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB2D0()
{
  MEMORY[0xABFB50] = Math::ArcTan((double)(2 * MEMORY[0xABFB80]) / MEMORY[0xABFB28]); /*0x5cb2f2*/
}
}

// 0x5CB380
int MPBattleClass::isAIAllowed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CB380()
{
  MEMORY[0xABFB10] = 0; /*0x5cb382*/
  MEMORY[0xABFB14] = 0; /*0x5cb387*/
  MEMORY[0xABFB18] = 0; /*0x5cb38c*/
  MEMORY[0xABFB1C] = 0; /*0x5cb391*/
  return 0; /*0x5cb396*/
}
}

// 0x5CB3A0
unsigned int * MPBattleClass::MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MPBattleClass::MPUnholyAllianceClass(
        _DWORD *this,
        const wchar_t **a1,
        UnholyAlliance *aP2,
        const char **a3,
        UnholyAlliance *aP4,
        char aP5,
        UnholyAlliance *aP6)
{
  MultiplayerGameMode::Construct( /*0x5cb3c3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &UnholyAlliance::`vftable'; /*0x5cb3c8*/
  return this; /*0x5cb3d0*/
}
}

// 0x5CB570
int MPBattleClass::isTeamsAllowed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CB570()
{
  MEMORY[0xABFB88] = 0; /*0x5cb572*/
  MEMORY[0xABFB8C] = 0; /*0x5cb577*/
  MEMORY[0xABFB90] = 0; /*0x5cb57c*/
  MEMORY[0xABFB94] = 0; /*0x5cb581*/
  return 0; /*0x5cb586*/
}
}

// 0x5CEDB0
int MPBattleClass::firstValidMapIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CEDB0()
{
  MEMORY[0xABFBB0] = 0; /*0x5cedb2*/
  MEMORY[0xABFBB4] = 0; /*0x5cedb7*/
  MEMORY[0xABFBB8] = 0; /*0x5cedbc*/
  MEMORY[0xABFBBC] = 0; /*0x5cedc1*/
  return 0; /*0x5cedc6*/
}
}

// 0x5D1A80
int MPBattleClass::populateTeamDropdown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D1A80()
{
  MEMORY[0xABFBC0] = 0; /*0x5d1a82*/
  MEMORY[0xABFBC4] = 0; /*0x5d1a87*/
  MEMORY[0xABFBC8] = 0; /*0x5d1a8c*/
  MEMORY[0xABFBCC] = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/
}
}

// 0x5D2DE0
int MPBattleClass::drawTeamDropdown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D2DE0()
{
  MEMORY[0xABFBD0] = 0; /*0x5d2de2*/
  MEMORY[0xABFBD4] = 0; /*0x5d2de7*/
  MEMORY[0xABFBD8] = 0; /*0x5d2dec*/
  MEMORY[0xABFBDC] = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/
}
}

// 0x5D3470
int MPBattleClass::populateTeamDropdownForPlayer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D3470()
{
  MEMORY[0xABFC00] = 0; /*0x5d3472*/
  MEMORY[0xABFC04] = 0; /*0x5d3477*/
  MEMORY[0xABFC08] = 0; /*0x5d347c*/
  MEMORY[0xABFC0C] = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/
}
}

// 0x5D3810
void MPBattleClass::validateHouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D3810()
{
  MEMORY[0xABFC80] = MEMORY[0xABFC30] / 60.0; /*0x5d381c*/
}
}

// 0x5D3830
void MPBattleClass::validateOwner()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D3830()
{
  MEMORY[0xABFC68] = 1.0 / MEMORY[0xABFC80]; /*0x5d383c*/
}
}

// 0x5D38F0
void MPBattleClass::validateColor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D38F0()
{
  MEMORY[0xABFC40] = Math::ArcTan((double)MEMORY[0xABFC88] * 0.00390625); /*0x5d3907*/
}
}

// 0x5D3920
void MPBattleClass::validateStartPosition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D3920()
{
  MEMORY[0xABFC58] = Math::ArcTan((double)(2 * MEMORY[0xABFC88]) / MEMORY[0xABFC30]); /*0x5d3942*/
}
}

// 0x5D3950
long long MPBattleClass::isDefaultFix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5D3950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFC88]) + 0.5); /*0x5d396b*/
  MEMORY[0xABFC7C] = result; /*0x5d3970*/
  return result; /*0x5d3976*/
}
}

// 0x5D3980
int MPBattleClass::isDefaultAI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D3980()
{
  MEMORY[0xABFC28] = 0; /*0x5d3982*/
  MEMORY[0xABFC2A] = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/
}
}

// 0x5D3990
int MPBattleClass::randomHumanCountryIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D3990()
{
  MEMORY[0xABFC48] = 0; /*0x5d3992*/
  MEMORY[0xABFC4C] = 0; /*0x5d3997*/
  MEMORY[0xABFC50] = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/
}
}

// 0x5D39B0
int MPBattleClass::randomAICountryIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D39B0()
{
  MEMORY[0xABFC78] = 0; /*0x5d39b5*/
  MEMORY[0xABFC70] = 128; /*0x5d39bf*/
  MEMORY[0xABFC74] = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/
}
}

// 0x5D4C30
int MPBattleClass::onDialogCreated()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D4C30()
{
  MEMORY[0xABFCA8] = 0; /*0x5d4c32*/
  MEMORY[0xABFCAC] = 0; /*0x5d4c37*/
  MEMORY[0xABFCB0] = 0; /*0x5d4c3c*/
  MEMORY[0xABFCB4] = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/
}
}

// 0x5D4C50
int MPBattleClass::onDialogDestroyed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D4C50()
{
  MEMORY[0xABFC94] = 0; /*0x5d4c57*/
  MEMORY[0xABFC98] = 0; /*0x5d4c5c*/
  MEMORY[0xABFC9C] = 1; /*0x5d4c61*/
  MEMORY[0xABFC9D] = 0; /*0x5d4c68*/
  MEMORY[0xABFC90] = (int)&DynamicVectorClass<HWND__ *>::`vftable'; /*0x5d4c6d*/
  MEMORY[0xABFCA4] = 10; /*0x5d4c77*/
  MEMORY[0xABFCA0] = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/
}
}

// 0x5D4CD0
int MPBattleClass::unfixAlliances()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5D4CD0()
{
  MEMORY[0xABFCBC] = 0; /*0x5d4cd7*/
  MEMORY[0xABFCC0] = 0; /*0x5d4cdc*/
  MEMORY[0xABFCC4] = 1; /*0x5d4ce1*/
  MEMORY[0xABFCC5] = 0; /*0x5d4ce8*/
  MEMORY[0xABFCB8] = (int)&DynamicVectorClass<AcceleratorTracker>::`vftable'; /*0x5d4ced*/
  MEMORY[0xABFCCC] = 10; /*0x5d4cf7*/
  MEMORY[0xABFCC8] = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/
}
}

// 0x5D58B0
void MPBattleClass::startingPositionsToHouseBaseCells()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D58B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d58bc*/
  MEMORY[0xABFD58] = Math::Sqrt(v0 + v0); /*0x5d58ce*/
}
}

// 0x5D58E0
void MPBattleClass::allyTeams()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D58E0()
{
  MEMORY[0xABFDC8] = MEMORY[0xABFD58] / 60.0; /*0x5d58ec*/
}
}

// 0x5D5900
void MPBattleClass::isMegawealthAllowed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D5900()
{
  MEMORY[0xABFD98] = 1.0 / MEMORY[0xABFDC8]; /*0x5d590c*/
}
}

// 0x5D5920
void MPBattleClass::onAIJoined()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5D5920()
{
  MEMORY[0xABFD90] = 0.0174532925199433 * 45.0; /*0x5d592c*/
}
}

// 0x5D8170
unsigned int * MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall MPBattleClass::MPBattleClass(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8172*/
  if ( v6 ) /*0x5d817c*/
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
  else
    return 0; /*0x5d81a6*/
}
}
