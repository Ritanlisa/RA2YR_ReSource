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
#include "e4/classes/Main_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5C0DD0
namespace gamemd {
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{

  ((MultiplayerGameMode *)((MultiplayerGameMode *)this))->Construct(a1, aP2, a3, aP4, aP5, aP6); /*0x5c0df3*/
  *(unsigned int *)this->MPGameModeClass = (unsigned int)(&vt_MultiplayerBattle); /*0x5c0df8*/
  return (unsigned int *)(this->MPGameModeClass); /*0x5c0e00*/

}
} // namespace gamemd
// 0x5C5CE0
namespace gamemd {
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{

  ((MultiplayerGameMode *)((MultiplayerGameMode *)this))->Construct(a1, aP2, a3, aP4, aP5, aP6); /*0x5c5d03*/
  *(unsigned int *)this->MPGameModeClass = (unsigned int)(&vt_FreeForAll); /*0x5c5d08*/
  return (unsigned int *)(this->MPGameModeClass); /*0x5c5d10*/

}
} // namespace gamemd
// 0x5C6150
namespace gamemd {
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6, void *a7)
{

  ((MultiplayerGameMode *)((MultiplayerGameMode *)this))->Construct(a1, aP2, a3, aP4, aP5, aP6); /*0x5c6173*/
  *(unsigned int *)this->MPGameModeClass = (unsigned int)(&vt_MultiplayerManBattle); /*0x5c6178*/
  return (unsigned int *)(this->MPGameModeClass); /*0x5c6180*/

}
} // namespace gamemd
// 0x5C93E0
namespace gamemd {
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{

  ((MultiplayerGameMode *)((MultiplayerGameMode *)this))->Construct(a1, a2, a3, aP4, aP5, aP6); /*0x5c9403*/
  *(unsigned int *)this->MPGameModeClass = (unsigned int)(&vt_Megawealth); /*0x5c9408*/
  return (unsigned int *)(this->MPGameModeClass); /*0x5c9410*/

}
} // namespace gamemd
// 0x5CA630
namespace gamemd {
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{

  ((MultiplayerGameMode *)((MultiplayerGameMode *)this))->Construct(a1, aP2, a3, aP4, aP5, aP6); /*0x5ca653*/
  *(unsigned int *)this->MPGameModeClass = (unsigned int)(&vt_MultiplayerSiege); /*0x5ca658*/
  return (unsigned int *)(this->MPGameModeClass); /*0x5ca660*/

}
} // namespace gamemd
// 0x5CA7D0
namespace gamemd {
int MPBattleClass::vt_entry_18()
{

  return ScenarioClass::createStartingForces((MultiplayerGameMode *)this);

}
}
// 0x5CACF0
namespace gamemd {  // G42.18c ns repair
long long MPBattleClass::isValidMap()
{
dword_ABFAF8 = result; /*0x5cad1b*/
dword_ABFAF8 = result; /*0x5cad1b*/

  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFA80 - dbl_ABFAA8); /*0x5cad02*/
  result = Math::RoundToInt(v0 * dbl_ABFAA0 * 0.5); /*0x5cad16*/
  dword_ABFAF8 = result; /*0x5cad1b*/
  return result; /*0x5cad20*/

}
}  // G42.18c ns repair
// 0x5CAD30
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::needsHouseSelection()
{
dbl_ABFAB0 = Math::ArcTan((double)dword_ABFAF8 * 0.00390625); /*0x5cad47*/
dbl_ABFAB0 = Math::ArcTan((double)dword_ABFAF8 * 0.00390625); /*0x5cad47*/

  dbl_ABFAB0 = Math::ArcTan((double)dword_ABFAF8 * 0.00390625); /*0x5cad47*/

}
}  // G42.18c ns repair
// 0x5CAD60
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::validatePlayer()
{
dbl_ABFAC8 = Math::ArcTan((double)(2 * dword_ABFAF8) / dbl_ABFAA0); /*0x5cad82*/
dbl_ABFAC8 = Math::ArcTan((double)(2 * dword_ABFAF8) / dbl_ABFAA0); /*0x5cad82*/

  dbl_ABFAC8 = Math::ArcTan((double)(2 * dword_ABFAF8) / dbl_ABFAA0); /*0x5cad82*/

}
}  // G42.18c ns repair
// 0x5CAD90
namespace gamemd {  // G42.18c ns repair
long long MPBattleClass::startGame()
{
dword_ABFAEC = result; /*0x5cadb0*/
dword_ABFAEC = result; /*0x5cadb0*/

  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFAF8) + 0.5); /*0x5cadab*/
  dword_ABFAEC = result; /*0x5cadb0*/
  return result; /*0x5cadb6*/

}
}  // G42.18c ns repair
// 0x5CADC0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::stopGame()
{
word_ABFA98 = 0; /*0x5cadc2*/
word_ABFA9A = 0; /*0x5cadc8*/
word_ABFA98 = 0; /*0x5cadc2*/
word_ABFA9A = 0; /*0x5cadc8*/

  word_ABFA98 = 0; /*0x5cadc2*/
  word_ABFA9A = 0; /*0x5cadc8*/
  return 0; /*0x5cadce*/

}
}  // G42.18c ns repair
// 0x5CADD0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::areTeamChangesAllowed()
{
dword_ABFAB8 = 0; /*0x5cadd2*/
dword_ABFABC = 0; /*0x5cadd7*/
dword_ABFAC0 = 0; /*0x5caddc*/
dword_ABFAB8 = 0; /*0x5cadd2*/
dword_ABFABC = 0; /*0x5cadd7*/
dword_ABFAC0 = 0; /*0x5caddc*/

  dword_ABFAB8 = 0; /*0x5cadd2*/
  dword_ABFABC = 0; /*0x5cadd7*/
  dword_ABFAC0 = 0; /*0x5caddc*/
  return 0; /*0x5cade1*/

}
}  // G42.18c ns repair
// 0x5CADF0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::isHouseAllyChangeAllowed()
{
dword_ABFAE8 = 0; /*0x5cadf5*/
dword_ABFAE0 = 128; /*0x5cadff*/
dword_ABFAE4 = 128; /*0x5cae04*/
dword_ABFAE8 = 0; /*0x5cadf5*/
dword_ABFAE0 = 128; /*0x5cadff*/
dword_ABFAE4 = 128; /*0x5cae04*/

  dword_ABFAE8 = 0; /*0x5cadf5*/
  dword_ABFAE0 = 128; /*0x5cadff*/
  dword_ABFAE4 = 128; /*0x5cae04*/
  return 128; /*0x5cae09*/

}
}  // G42.18c ns repair
// 0x5CB190
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::onPlayerConnect()
{
dbl_ABFB28 = Math::Sqrt(v0 + v0); /*0x5cb1ae*/
dbl_ABFB28 = Math::Sqrt(v0 + v0); /*0x5cb1ae*/

  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cb19c*/
  dbl_ABFB28 = Math::Sqrt(v0 + v0); /*0x5cb1ae*/

}
}  // G42.18c ns repair
// 0x5CB1C0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::onPlayerDisconnect()
{
dbl_ABFB78 = dbl_ABFB28 / 60.0; /*0x5cb1cc*/
dbl_ABFB78 = dbl_ABFB28 / 60.0; /*0x5cb1cc*/

  dbl_ABFB78 = dbl_ABFB28 / 60.0; /*0x5cb1cc*/

}
}  // G42.18c ns repair
// 0x5CB1E0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::getMaximumPlayers()
{
dbl_ABFB60 = 1.0 / dbl_ABFB78; /*0x5cb1ec*/
dbl_ABFB60 = 1.0 / dbl_ABFB78; /*0x5cb1ec*/

  dbl_ABFB60 = 1.0 / dbl_ABFB78; /*0x5cb1ec*/

}
}  // G42.18c ns repair
// 0x5CB200
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::getMinimumPlayers()
{
dbl_ABFB58 = 0.0174532925199433 * 45.0; /*0x5cb20c*/
dbl_ABFB58 = 0.0174532925199433 * 45.0; /*0x5cb20c*/

  dbl_ABFB58 = 0.0174532925199433 * 45.0; /*0x5cb20c*/

}
}  // G42.18c ns repair
// 0x5CB220
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::getAlliesLimit()
{
dbl_ABFB30 = 0.0174532925199433 * 60.0; /*0x5cb22c*/
dbl_ABFB30 = 0.0174532925199433 * 60.0; /*0x5cb22c*/

  dbl_ABFB30 = 0.0174532925199433 * 60.0; /*0x5cb22c*/

}
}  // G42.18c ns repair
// 0x5CB260
namespace gamemd {  // G42.18c ns repair
long long MPBattleClass::canAllyWith()
{
dword_ABFB80 = result; /*0x5cb28b*/
dword_ABFB80 = result; /*0x5cb28b*/

  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFB08 - dbl_ABFB30); /*0x5cb272*/
  result = Math::RoundToInt(v0 * dbl_ABFB28 * 0.5); /*0x5cb286*/
  dword_ABFB80 = result; /*0x5cb28b*/
  return result; /*0x5cb290*/

}
}  // G42.18c ns repair
// 0x5CB2D0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::onGameBegin()
{
dbl_ABFB50 = Math::ArcTan((double)(2 * dword_ABFB80) / dbl_ABFB28); /*0x5cb2f2*/

  dbl_ABFB50 = Math::ArcTan((double)(2 * dword_ABFB80) / dbl_ABFB28); /*0x5cb2f2*/

}
}  // G42.18c ns repair
// 0x5CB380
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::isAIAllowed()
{
dword_ABFB10 = 0; /*0x5cb382*/
dword_ABFB14 = 0; /*0x5cb387*/
dword_ABFB18 = 0; /*0x5cb38c*/
dword_ABFB1C = 0; /*0x5cb391*/

  dword_ABFB10 = 0; /*0x5cb382*/
  dword_ABFB14 = 0; /*0x5cb387*/
  dword_ABFB18 = 0; /*0x5cb38c*/
  dword_ABFB1C = 0; /*0x5cb391*/
  return 0; /*0x5cb396*/

}
}  // G42.18c ns repair
// 0x5CB3A0
namespace gamemd {  // G42.18c ns repair
unsigned int * MPBattleClass::MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{

  MultiplayerGameMode::Construct((MultiplayerGameMode *)this, a1, aP2, a3, aP4, aP5, aP6); /*0x5cb3c3*/
  *(unsigned int *)this->MPGameModeClass = &vt_UnholyAlliance; /*0x5cb3c8*/
  return this->MPGameModeClass; /*0x5cb3d0*/

}
}  // G42.18c ns repair
// 0x5CB570
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::isTeamsAllowed()
{
dword_ABFB88 = 0; /*0x5cb572*/
dword_ABFB8C = 0; /*0x5cb577*/
dword_ABFB90 = 0; /*0x5cb57c*/
dword_ABFB94 = 0; /*0x5cb581*/

  dword_ABFB88 = 0; /*0x5cb572*/
  dword_ABFB8C = 0; /*0x5cb577*/
  dword_ABFB90 = 0; /*0x5cb57c*/
  dword_ABFB94 = 0; /*0x5cb581*/
  return 0; /*0x5cb586*/

}
}  // G42.18c ns repair
// 0x5CEDB0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::firstValidMapIndex()
{
dword_ABFBB0 = 0; /*0x5cedb2*/
dword_ABFBB4 = 0; /*0x5cedb7*/
dword_ABFBB8 = 0; /*0x5cedbc*/
dword_ABFBBC = 0; /*0x5cedc1*/

  dword_ABFBB0 = 0; /*0x5cedb2*/
  dword_ABFBB4 = 0; /*0x5cedb7*/
  dword_ABFBB8 = 0; /*0x5cedbc*/
  dword_ABFBBC = 0; /*0x5cedc1*/
  return 0; /*0x5cedc6*/

}
}  // G42.18c ns repair
// 0x5D1A80
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::populateTeamDropdown()
{
dword_ABFBC0 = 0; /*0x5d1a82*/
dword_ABFBC4 = 0; /*0x5d1a87*/
dword_ABFBC8 = 0; /*0x5d1a8c*/
dword_ABFBCC = 0; /*0x5d1a91*/

  dword_ABFBC0 = 0; /*0x5d1a82*/
  dword_ABFBC4 = 0; /*0x5d1a87*/
  dword_ABFBC8 = 0; /*0x5d1a8c*/
  dword_ABFBCC = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/

}
}  // G42.18c ns repair
// 0x5D2DE0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::drawTeamDropdown()
{

  dword_ABFBD0 = 0; /*0x5d2de2*/
  dword_ABFBD4 = 0; /*0x5d2de7*/
  dword_ABFBD8 = 0; /*0x5d2dec*/
  dword_ABFBDC = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/

}
}  // G42.18c ns repair
// 0x5D3470
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::populateTeamDropdownForPlayer()
{

  dword_ABFC00 = 0; /*0x5d3472*/
  dword_ABFC04 = 0; /*0x5d3477*/
  dword_ABFC08 = 0; /*0x5d347c*/
  dword_ABFC0C = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/

}
}  // G42.18c ns repair
// 0x5D3810
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::validateHouse()
{

  dbl_ABFC80 = dbl_ABFC30 / 60.0; /*0x5d381c*/

}
}  // G42.18c ns repair
// 0x5D3830
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::validateOwner()
{

  dbl_ABFC68 = 1.0 / dbl_ABFC80; /*0x5d383c*/

}
}  // G42.18c ns repair
// 0x5D38F0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::validateColor()
{

  dbl_ABFC40 = Math::ArcTan((double)dword_ABFC88 * 0.00390625); /*0x5d3907*/

}
}  // G42.18c ns repair
// 0x5D3920
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::validateStartPosition()
{

  dbl_ABFC58 = Math::ArcTan((double)(2 * dword_ABFC88) / dbl_ABFC30); /*0x5d3942*/

}
}  // G42.18c ns repair
// 0x5D3950
namespace gamemd {  // G42.18c ns repair
long long MPBattleClass::isDefaultFix()
{

  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFC88) + 0.5); /*0x5d396b*/
  dword_ABFC7C = result; /*0x5d3970*/
  return result; /*0x5d3976*/

}
}  // G42.18c ns repair
// 0x5D3980
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::isDefaultAI()
{

  word_ABFC28 = 0; /*0x5d3982*/
  word_ABFC2A = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/

}
}  // G42.18c ns repair
// 0x5D3990
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::randomHumanCountryIndex()
{

  dword_ABFC48 = 0; /*0x5d3992*/
  dword_ABFC4C = 0; /*0x5d3997*/
  dword_ABFC50 = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/

}
}  // G42.18c ns repair
// 0x5D39B0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::randomAICountryIndex()
{

  dword_ABFC78 = 0; /*0x5d39b5*/
  dword_ABFC70 = 128; /*0x5d39bf*/
  dword_ABFC74 = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/

}
}  // G42.18c ns repair
// 0x5D4C30
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::onDialogCreated()
{

  dword_ABFCA8 = 0; /*0x5d4c32*/
  dword_ABFCAC = 0; /*0x5d4c37*/
  dword_ABFCB0 = 0; /*0x5d4c3c*/
  dword_ABFCB4 = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/

}
}  // G42.18c ns repair
// 0x5D4C50
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::onDialogDestroyed()
{

  dword_ABFC94 = 0; /*0x5d4c57*/
  dword_ABFC98 = 0; /*0x5d4c5c*/
  byte_ABFC9C = 1; /*0x5d4c61*/
  byte_ABFC9D = 0; /*0x5d4c68*/
  dword_ABFC90 = (int)&vt_DynamicVectorClass; /*0x5d4c6d*/
  dword_ABFCA4 = 10; /*0x5d4c77*/
  dword_ABFCA0 = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/

}
}  // G42.18c ns repair
// 0x5D4CD0
namespace gamemd {  // G42.18c ns repair
int MPBattleClass::unfixAlliances()
{

  dword_ABFCBC = 0; /*0x5d4cd7*/
  dword_ABFCC0 = 0; /*0x5d4cdc*/
  byte_ABFCC4 = 1; /*0x5d4ce1*/
  byte_ABFCC5 = 0; /*0x5d4ce8*/
  dword_ABFCB8 = (int)&vt_DynamicVectorClass; /*0x5d4ced*/
  dword_ABFCCC = 10; /*0x5d4cf7*/
  dword_ABFCC8 = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/

}
}  // G42.18c ns repair
// 0x5D58B0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::startingPositionsToHouseBaseCells()
{

  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d58bc*/
  dbl_ABFD58 = Math::Sqrt(v0 + v0); /*0x5d58ce*/

}
}  // G42.18c ns repair
// 0x5D58E0
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::allyTeams()
{

  dbl_ABFDC8 = dbl_ABFD58 / 60.0; /*0x5d58ec*/

}
}  // G42.18c ns repair
// 0x5D5900
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::isMegawealthAllowed()
{

  dbl_ABFD98 = 1.0 / dbl_ABFDC8; /*0x5d590c*/

}
}  // G42.18c ns repair
// 0x5D5920
namespace gamemd {  // G42.18c ns repair
void MPBattleClass::onAIJoined()
{

  dbl_ABFD90 = 0.0174532925199433 * 45.0; /*0x5d592c*/

}
}  // G42.18c ns repair
// 0x5D8170
MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{

  unsigned int *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8172*/
  if ( v6 ) /*0x5d817c*/
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
  else
    return 0; /*0x5d81a6*/

}