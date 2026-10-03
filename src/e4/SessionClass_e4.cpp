// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/IPXConnClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/E4Recv_5CF830_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/MSChoiceClass_e4.hpp"
#include "e4/classes/PaletteManager_e4.hpp"
#include "e4/classes/StringTable_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapFile_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Random_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Player_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/GameConfig_e4.hpp"  // G42.36 C2027 supply

// 0x540DC0
namespace gamemd {
int SessionClass::initLAN(int a2, wchar_t * Source, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x540DC0)
}
} // namespace gamemd
// 0x540E70
namespace gamemd {
int SessionClass::initInternet()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x540E70)
}
} // namespace gamemd
// 0x552CC0
namespace gamemd {
MixFileClass * SessionClass::Load(void *a1, void *a2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x552CC0)
}
} // namespace gamemd
// 0x5ADF20
namespace gamemd {
MixFileClass * SessionClass::LoadGameSession(int aP1, const char **aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5ADF20)
}
} // namespace gamemd
// 0x5CEEF0
namespace gamemd {
AbstractClass * * SessionClass::LoadMapSelection(char **a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CEEF0)
}
} // namespace gamemd
// 0x5CF5F0
namespace gamemd {
int SessionClass::Destruct()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CF5F0)
}
} // namespace gamemd
// 0x5D0070
namespace gamemd {
CampaignClass * * SessionClass::loadSettings()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D0070)
}
} // namespace gamemd
// 0x5D39D0
namespace gamemd {
unsigned int * SessionClass::saveSettings()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D39D0)
}
} // namespace gamemd
// 0x5E64C0
namespace gamemd {
unsigned int SessionClass::initPlayers()
{

  signed int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (SessionClass *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( dword_A8B23C ) /*0x5e64db*/
  {
    v3 = (*((int (**)(ObjectClass *))dword_A8B23C->vtable1 + 38))(dword_A8B23C); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/

}
} // namespace gamemd
// 0x663B40
namespace gamemd {
AbstractClass * * SessionClass::BuildLobbyPlayerList()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x663B40)
}
} // namespace gamemd
// 0x691500
namespace gamemd {
unsigned int * SessionClass::GetEntry(unsigned int *aP1)
{

  int v2; // edx
  int v4; // ecx

  v2 = this->Config[5]; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *aP1 = -1; /*0x691510*/
    aP1[1] = 0; /*0x691512*/
    return aP1; /*0x691508*/
  }
  else
  {
    v4 = this->Config[3]; /*0x691518*/
    *aP1 = *(unsigned int *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1[1] = *(unsigned int *)(v4 + 8 * v2 + 168); /*0x691531*/
    return aP1; /*0x69151b*/
  }

}
} // namespace gamemd
// 0x6915D0
namespace gamemd {
int SessionClass::SetField()
{

  return this->Config[5] < *(unsigned int *)(this->Config[3] + 160); /*0x6915e0*/

}
} // namespace gamemd
// 0x696F10
namespace gamemd {
int SessionClass::GetPlayerSide()
{

  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(int *)((char *)this + 79) != -2 ) /*0x696f1a*/
    return *(int *)((char *)this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/

}
} // namespace gamemd
// 0x696F20
namespace gamemd {
int SessionClass::GetPlayerColor()
{

  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(unsigned int *)&this->__pad_50[7] != -2 ) /*0x696f2a*/
    return *(unsigned int *)&this->__pad_50[3]; /*0x696f2c*/
  return result; /*0x696f2f*/

}
} // namespace gamemd
// 0x696F50
namespace gamemd {
int SessionClass::GetOption()
{

  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(int *)((char *)this + 95) != -2 || *(int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/

}
} // namespace gamemd
// 0x696F70
namespace gamemd {
int SessionClass::GetOption2()
{

  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(unsigned int *)&this->__pad_50[23] != -2 || *(unsigned int *)&this->__pad_50[19] != -1 ) /*0x696f80*/
    return *(unsigned int *)&this->__pad_50[19]; /*0x696f82*/
  return result; /*0x696f85*/

}
} // namespace gamemd
// 0x696F90
namespace gamemd {
int SessionClass::SetPlayerOption(int aP1)
{

  int result; // eax

  result = aP1; /*0x696f90*/
  if ( aP1 == -2 ) /*0x696f97*/
  {
    *(int *)((char *)this + 75) = 0; /*0x696f99*/
    *(int *)((char *)this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(int *)((char *)this + 75) = aP1; /*0x696fa6*/
    *(int *)((char *)this + 79) = -1; /*0x696fa9*/
  }
  return result; /*0x696fa3*/

}
} // namespace gamemd
// 0x696FC0
namespace gamemd {
int SessionClass::SetPlayerColor(int a2)
{

  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(int *)((char *)this + 83) = -1; /*0x696fc9*/
    *(int *)((char *)this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(int *)((char *)this + 83) = a2; /*0x696fd6*/
    *(int *)((char *)this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/

}
} // namespace gamemd
// 0x696FF0
namespace gamemd {
int SessionClass::SetOption(int aP1)
{

  int result; // eax

  result = aP1; /*0x696ff0*/
  if ( aP1 == -2 ) /*0x696ff7*/
  {
    *(int *)((char *)this + 91) = -1; /*0x696ff9*/
    *(int *)((char *)this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(int *)((char *)this + 91) = aP1; /*0x697006*/
    *(int *)((char *)this + 95) = -1; /*0x697009*/
  }
  return result; /*0x697003*/

}
} // namespace gamemd
// 0x697020
namespace gamemd {
int SessionClass::SetOption2(int aP1)
{

  int result; // eax

  result = aP1; /*0x697020*/
  if ( aP1 == -2 ) /*0x697027*/
  {
    *(int *)((char *)this + 99) = -1; /*0x697029*/
    *(int *)((char *)this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(int *)((char *)this + 99) = aP1; /*0x697036*/
    *(int *)((char *)this + 103) = -1; /*0x697039*/
  }
  return result; /*0x697033*/

}
} // namespace gamemd
// 0x6970A0
namespace gamemd {  // G42.18c ns repair
SessionClass::SessionClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6970A0)
}
}  // G42.18c ns repair
// 0x697B70
namespace gamemd {  // G42.18c ns repair
int SessionClass::CreateConnections()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x697B70)
}
}  // G42.18c ns repair
// 0x697E70
namespace gamemd {  // G42.18c ns repair
int  SessionClass::IsValidHouse(void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x697E70)
}
}  // G42.18c ns repair
// 0x699980
namespace gamemd {  // G42.18c ns repair
AbstractClass * * SessionClass::LoadMissionList()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x699980)
}
}  // G42.18c ns repair
// 0x69A980
namespace gamemd {  // G42.18c ns repair
ObjectClass * *  SessionClass::ParseGameInfo(wchar_t * Destination, char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69A980)
}
}  // G42.18c ns repair
// 0x69B7E0
namespace gamemd {  // G42.18c ns repair
int SessionClass::AssignColor(int a2, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69B7E0)
}
}  // G42.18c ns repair
// 0x69BD60
namespace gamemd {  // G42.18c ns repair
void SessionClass::SetupNetwork()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69BD60)
}
}  // G42.18c ns repair
// 0x78F000
namespace gamemd {  // G42.18c ns repair
Coord * * SessionClass::BuildLaunchString()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x78F000)
}
}  // G42.18c ns repair
// 0x69A310
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69A310)
}
}  // G42.18c ns repair
// 0x69B760
namespace gamemd {  // G42.18c ns repair
int SessionClass::AssignSide(int a2, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69B760)
}
}  // G42.18c ns repair
// 0x69BBE0
namespace gamemd {  // G42.18c ns repair
char SessionClass::GetGameSpeed()
{

  int result; // eax

  LOBYTE(result) = this->CurrentlyInGame; /*0x69bbe0*/
  return result; /*0x69bbe6*/

}
}  // G42.18c ns repair
// 0x69C4A0
namespace gamemd {  // G42.18c ns repair
void SessionClass::ddtor(void *a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C4A0)
}
}  // G42.18c ns repair
// 0x69C4D0
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::Write(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C4D0)
}
}  // G42.18c ns repair
// 0x69C4F0
namespace gamemd {  // G42.18c ns repair
int SessionClass::Seek(int a2, void *a2_2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C4F0)
}
}  // G42.18c ns repair
// 0x69C6C0
namespace gamemd {  // G42.18c ns repair
TypeList_flat * SessionClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x69c6c3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x69c6c6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x69c6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x69c6d8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x69c6e0*/
  }
  BYTE1(Block->m_C) = 0; /*0x69c6eb*/
  Block->m_8 = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    __3_YAXPAX_Z(Block); /*0x69c6fb*/
  return Block->__pad_0; /*0x69c705*/

}
}  // G42.18c ns repair
// 0x69C710
namespace gamemd {  // G42.18c ns repair
char SessionClass::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C710)
}
}  // G42.18c ns repair
// 0x69C750
namespace gamemd {  // G42.18c ns repair
char SessionClass::addPlayer(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C750)
}
}  // G42.18c ns repair
// 0x69C800
namespace gamemd {  // G42.18c ns repair
void SessionClass::removePlayer()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C800)
}
}  // G42.18c ns repair
// 0x69C830
namespace gamemd {  // G42.18c ns repair
int  SessionClass::findPlayer(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C830)
}
}  // G42.18c ns repair
// 0x69C870
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::updatePlayer(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C870)
}
}  // G42.18c ns repair
// 0x69C890
namespace gamemd {  // G42.18c ns repair
char SessionClass::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C890)
}
}  // G42.18c ns repair
// 0x69C940
namespace gamemd {  // G42.18c ns repair
int SessionClass::Read(unsigned int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69C940)
}
}  // G42.18c ns repair
// 0x69D460
namespace gamemd {  // G42.18c ns repair
VectorClass_flat * SessionClass::validateGame(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x69d463*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x69d466*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x69d470*/
  {
    __3_YAXPAX_Z(v3); /*0x69d478*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x69d480*/
  }
  BYTE1(Block->m_C) = 0; /*0x69d48b*/
  Block->m_8 = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    __3_YAXPAX_Z(Block); /*0x69d49b*/
  return Block->__pad_0; /*0x69d4a5*/

}
}  // G42.18c ns repair
// 0x7B2720
void SessionClass::SetInstance()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2720)
}
