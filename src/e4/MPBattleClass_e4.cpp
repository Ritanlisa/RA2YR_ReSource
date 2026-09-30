// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MPBattleClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/MultiplayerManBattle_e4.hpp"
#include "e4/classes/MultiplayerSiege_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MSBitPrintAnim_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"

// 0x5C0DD0
namespace gamemd {
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{

  MultiplayerGameMode::Construct( /*0x5c0df3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = (unsigned int)(&vt_MultiplayerBattle);
  return &this->vfptr; /*0x5c0e00*/

}
} // namespace gamemd
// 0x5C5CE0
namespace gamemd {
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{

  MultiplayerGameMode::Construct( /*0x5c5d03*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  this->vfptr = (unsigned int)(&vt_FreeForAll);
  return &this->vfptr; /*0x5c5d10*/

}
} // namespace gamemd
// 0x5C6150
namespace gamemd {
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6)
{

  MultiplayerGameMode::Construct( /*0x5c6173*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = (unsigned int *)(&vt_MultiplayerManBattle);
  return this; /*0x5c6180*/

}
} // namespace gamemd
// 0x5C93E0
namespace gamemd {
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{

  MultiplayerGameMode::Construct( /*0x5c9403*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)a2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = (unsigned int *)(&vt_Megawealth);
  return this; /*0x5c9410*/

}
} // namespace gamemd
// 0x5CA630
namespace gamemd {
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{

  MultiplayerGameMode::Construct( /*0x5ca653*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = (unsigned int *)(&vt_MultiplayerSiege);
  return this; /*0x5ca660*/

}
} // namespace gamemd
// 0x5CA7D0
namespace gamemd {
int MPBattleClass::vt_entry_18()
{

  return ScenarioClass::createStartingForces(this);

}
}
// 0x5CACF0
long long MPBattleClass::isValidMap()
{

  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(g_abs_ABFA80 - g_abs_ABFAA8); /*0x5cad02*/
  result = Math::RoundToInt(v0 * g_abs_ABFAA0 * 0.5); /*0x5cad16*/
  g_abs_ABFAF8 = result; /*0x5cad1b*/
  return result; /*0x5cad20*/

}
// 0x5CAD30
void MPBattleClass::needsHouseSelection()
{

  g_abs_ABFAB0 = Math::ArcTan((double)g_abs_ABFAF8 * 0.00390625); /*0x5cad47*/

}
// 0x5CAD60
void MPBattleClass::validatePlayer()
{

  g_abs_ABFAC8 = Math::ArcTan((double)(2 * g_abs_ABFAF8) / g_abs_ABFAA0); /*0x5cad82*/

}
// 0x5CAD90
long long MPBattleClass::startGame()
{

  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * g_abs_ABFAF8) + 0.5); /*0x5cadab*/
  g_abs_ABFAEC = result; /*0x5cadb0*/
  return result; /*0x5cadb6*/

}
// 0x5CADC0
int MPBattleClass::stopGame()
{

  g_abs_ABFA98 = 0; /*0x5cadc2*/
  g_abs_ABFA9A = 0; /*0x5cadc8*/
  return 0; /*0x5cadce*/

}
// 0x5CADD0
int MPBattleClass::areTeamChangesAllowed()
{

  g_abs_ABFAB8 = 0; /*0x5cadd2*/
  g_abs_ABFABC = 0; /*0x5cadd7*/
  g_abs_ABFAC0 = 0; /*0x5caddc*/
  return 0; /*0x5cade1*/

}
// 0x5CADF0
int MPBattleClass::isHouseAllyChangeAllowed()
{

  g_abs_ABFAE8 = 0; /*0x5cadf5*/
  g_abs_ABFAE0 = 128; /*0x5cadff*/
  g_abs_ABFAE4 = 128; /*0x5cae04*/
  return 128; /*0x5cae09*/

}
// 0x5CB190
void MPBattleClass::onPlayerConnect()
{

  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cb19c*/
  g_abs_ABFB28 = Math::Sqrt(v0 + v0); /*0x5cb1ae*/

}
// 0x5CB1C0
void MPBattleClass::onPlayerDisconnect()
{

  g_abs_ABFB78 = g_abs_ABFB28 / 60.0; /*0x5cb1cc*/

}
// 0x5CB1E0
void MPBattleClass::getMaximumPlayers()
{

  g_abs_ABFB60 = 1.0 / g_abs_ABFB78; /*0x5cb1ec*/

}
// 0x5CB200
void MPBattleClass::getMinimumPlayers()
{

  g_abs_ABFB58 = 0.0174532925199433 * 45.0; /*0x5cb20c*/

}
// 0x5CB220
void MPBattleClass::getAlliesLimit()
{

  g_abs_ABFB30 = 0.0174532925199433 * 60.0; /*0x5cb22c*/

}
// 0x5CB260
long long MPBattleClass::canAllyWith()
{

  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(g_abs_ABFB08 - g_abs_ABFB30); /*0x5cb272*/
  result = Math::RoundToInt(v0 * g_abs_ABFB28 * 0.5); /*0x5cb286*/
  g_abs_ABFB80 = result; /*0x5cb28b*/
  return result; /*0x5cb290*/

}
// 0x5CB2D0
void MPBattleClass::onGameBegin()
{

  g_abs_ABFB50 = Math::ArcTan((double)(2 * g_abs_ABFB80) / g_abs_ABFB28); /*0x5cb2f2*/

}
// 0x5CB380
int MPBattleClass::isAIAllowed()
{

  g_abs_ABFB10 = 0; /*0x5cb382*/
  g_abs_ABFB14 = 0; /*0x5cb387*/
  g_abs_ABFB18 = 0; /*0x5cb38c*/
  g_abs_ABFB1C = 0; /*0x5cb391*/
  return 0; /*0x5cb396*/

}
// 0x5CB3A0
unsigned int * MPBattleClass::MPUnholyAllianceClass( const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{

  MultiplayerGameMode::Construct( /*0x5cb3c3*/
    this,
    (MultiplayerGameMode *)a1,
    (MultiplayerGameMode *)aP2,
    (MultiplayerGameMode *)a3,
    (MultiplayerGameMode *)aP4,
    (MultiplayerGameMode *)aP5,
    (MultiplayerGameMode *)aP6);
  *this = &vt_UnholyAlliance; /*0x5cb3c8*/
  return this; /*0x5cb3d0*/

}
// 0x5CB570
int MPBattleClass::isTeamsAllowed()
{

  g_abs_ABFB88 = 0; /*0x5cb572*/
  g_abs_ABFB8C = 0; /*0x5cb577*/
  g_abs_ABFB90 = 0; /*0x5cb57c*/
  g_abs_ABFB94 = 0; /*0x5cb581*/
  return 0; /*0x5cb586*/

}
// 0x5CEDB0
int MPBattleClass::firstValidMapIndex()
{

  g_abs_ABFBB0 = 0; /*0x5cedb2*/
  g_abs_ABFBB4 = 0; /*0x5cedb7*/
  g_abs_ABFBB8 = 0; /*0x5cedbc*/
  g_abs_ABFBBC = 0; /*0x5cedc1*/
  return 0; /*0x5cedc6*/

}
// 0x5D1A80
int MPBattleClass::populateTeamDropdown()
{

  g_abs_ABFBC0 = 0; /*0x5d1a82*/
  g_abs_ABFBC4 = 0; /*0x5d1a87*/
  g_abs_ABFBC8 = 0; /*0x5d1a8c*/
  g_abs_ABFBCC = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/

}
// 0x5D2DE0
int MPBattleClass::drawTeamDropdown()
{

  g_abs_ABFBD0 = 0; /*0x5d2de2*/
  g_abs_ABFBD4 = 0; /*0x5d2de7*/
  g_abs_ABFBD8 = 0; /*0x5d2dec*/
  g_abs_ABFBDC = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/

}
// 0x5D3470
int MPBattleClass::populateTeamDropdownForPlayer()
{

  g_abs_ABFC00 = 0; /*0x5d3472*/
  g_abs_ABFC04 = 0; /*0x5d3477*/
  g_abs_ABFC08 = 0; /*0x5d347c*/
  g_abs_ABFC0C = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/

}
// 0x5D3810
void MPBattleClass::validateHouse()
{

  g_abs_ABFC80 = g_abs_ABFC30 / 60.0; /*0x5d381c*/

}
// 0x5D3830
void MPBattleClass::validateOwner()
{

  g_abs_ABFC68 = 1.0 / g_abs_ABFC80; /*0x5d383c*/

}
// 0x5D38F0
void MPBattleClass::validateColor()
{

  g_abs_ABFC40 = Math::ArcTan((double)g_abs_ABFC88 * 0.00390625); /*0x5d3907*/

}
// 0x5D3920
void MPBattleClass::validateStartPosition()
{

  g_abs_ABFC58 = Math::ArcTan((double)(2 * g_abs_ABFC88) / g_abs_ABFC30); /*0x5d3942*/

}
// 0x5D3950
long long MPBattleClass::isDefaultFix()
{

  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * g_abs_ABFC88) + 0.5); /*0x5d396b*/
  g_abs_ABFC7C = result; /*0x5d3970*/
  return result; /*0x5d3976*/

}
// 0x5D3980
int MPBattleClass::isDefaultAI()
{

  g_abs_ABFC28 = 0; /*0x5d3982*/
  g_abs_ABFC2A = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/

}
// 0x5D3990
int MPBattleClass::randomHumanCountryIndex()
{

  g_abs_ABFC48 = 0; /*0x5d3992*/
  g_abs_ABFC4C = 0; /*0x5d3997*/
  g_abs_ABFC50 = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/

}
// 0x5D39B0
int MPBattleClass::randomAICountryIndex()
{

  g_abs_ABFC78 = 0; /*0x5d39b5*/
  g_abs_ABFC70 = 128; /*0x5d39bf*/
  g_abs_ABFC74 = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/

}
// 0x5D4C30
int MPBattleClass::onDialogCreated()
{

  g_abs_ABFCA8 = 0; /*0x5d4c32*/
  g_abs_ABFCAC = 0; /*0x5d4c37*/
  g_abs_ABFCB0 = 0; /*0x5d4c3c*/
  g_abs_ABFCB4 = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/

}
// 0x5D4C50
int MPBattleClass::onDialogDestroyed()
{

  g_abs_ABFC94 = 0; /*0x5d4c57*/
  g_abs_ABFC98 = 0; /*0x5d4c5c*/
  g_abs_ABFC9C = 1; /*0x5d4c61*/
  g_abs_ABFC9D = 0; /*0x5d4c68*/
  g_abs_ABFC90 = (int)&vt_DynamicVectorClass_HWND; /*0x5d4c6d*/
  g_abs_ABFCA4 = 10; /*0x5d4c77*/
  g_abs_ABFCA0 = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/

}
// 0x5D4CD0
int MPBattleClass::unfixAlliances()
{

  g_abs_ABFCBC = 0; /*0x5d4cd7*/
  g_abs_ABFCC0 = 0; /*0x5d4cdc*/
  g_abs_ABFCC4 = 1; /*0x5d4ce1*/
  g_abs_ABFCC5 = 0; /*0x5d4ce8*/
  g_abs_ABFCB8 = (int)&vt_DynamicVectorClass_AcceleratorTracker; /*0x5d4ced*/
  g_abs_ABFCCC = 10; /*0x5d4cf7*/
  g_abs_ABFCC8 = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/

}
// 0x5D58B0
void MPBattleClass::startingPositionsToHouseBaseCells()
{

  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d58bc*/
  g_abs_ABFD58 = Math::Sqrt(v0 + v0); /*0x5d58ce*/

}
// 0x5D58E0
void MPBattleClass::allyTeams()
{

  g_abs_ABFDC8 = g_abs_ABFD58 / 60.0; /*0x5d58ec*/

}
// 0x5D5900
void MPBattleClass::isMegawealthAllowed()
{

  g_abs_ABFD98 = 1.0 / g_abs_ABFDC8; /*0x5d590c*/

}
// 0x5D5920
void MPBattleClass::onAIJoined()
{

  g_abs_ABFD90 = 0.0174532925199433 * 45.0; /*0x5d592c*/

}
// 0x5D8170
MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{

  unsigned int *v6; // eax

  v6 = RA2_OPNEW(0x40u); /*0x5d8172*/
  if ( v6 ) /*0x5d817c*/
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
  else
    return 0; /*0x5d81a6*/

}