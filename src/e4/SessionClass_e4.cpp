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

  signed int inited; // eax
  int v2; // ecx
  int v3; // ebp
  int v4; // ebx
  ObjectClass **v5; // edi
  ObjectClass *v6; // esi
  ObjectClass **v7; // esi
  char *v8; // esi
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // edi
  char *v14; // eax
  char **v15; // [esp-14h] [ebp-A0h]
  char **v16; // [esp-Ch] [ebp-98h]
  char **v17; // [esp-4h] [ebp-90h]
  char **v18; // [esp+4h] [ebp-88h]
  char *v19; // [esp+14h] [ebp-78h] BYREF
  int v20; // [esp+18h] [ebp-74h]
  String v21; // [esp+1Ch] [ebp-70h] BYREF
  char *v22; // [esp+24h] [ebp-68h] BYREF
  String v23; // [esp+28h] [ebp-64h] BYREF
  String v24; // [esp+30h] [ebp-5Ch] BYREF
  String v25; // [esp+38h] [ebp-54h] BYREF
  char v26[80]; // [esp+3Ch] [ebp-50h] BYREF

  inited = SessionClass::initPlayers(*(SessionClass **)&stru_A8B250.__pad_0[4]); /*0x78f009*/
  v2 = 1; /*0x78f014*/
  if ( g_MenuStateFlags == 1 ) /*0x78f01b*/
    ++inited; /*0x78f01d*/
  v3 = 0; /*0x78f01f*/
  v19 = 0; /*0x78f025*/
  v20 = 0; /*0x78f029*/
  if ( inited <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v4 = inited - 1; /*0x78f030*/
  v5 = (ObjectClass **)&unk_A8DA94; /*0x78f033*/
  *(unsigned int *)v21.__pad_0 = inited; /*0x78f03b*/
  do /*0x78f079*/
  {
    v6 = *v5; /*0x78f03f*/
    if ( *v5 == (ObjectClass *)g_HouseClass_ObserverFlags || v6 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f050*/
    {
      ++v19; /*0x78f071*/
    }
    else if ( (uint8_t)IsKnownPointer(*v5) ) /*0x78f054*/
    {
      ++v3; /*0x78f05d*/
    }
    else if ( (uint8_t)((Player *)((Player *)v6))->IsObserver() ) /*0x78f062*/
    {
      ++v20; /*0x78f06b*/
    }
    ++v5; /*0x78f075*/
    --v4; /*0x78f078*/
  }
  while ( v4 ); /*0x78f079*/
  if ( *(int *)v21.__pad_0 < 8 ) /*0x78f083*/
  {
    v2 = *(unsigned int *)v21.__pad_0; /*0x78f085*/
LABEL_15:
    v7 = (ObjectClass **)(4 * v2 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v7 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f097*/
      {
        ++v19; /*0x78f099*/
      }
      else if ( (uint8_t)IsKnownPointer(*v7) ) /*0x78f09f*/
      {
        ++v3; /*0x78f0a8*/
      }
      ++v7; /*0x78f0a9*/
    }
    while ( (int)v7 < (int)&dword_A8DAB0 ); /*0x78f0b2*/
  }
  if ( ppv ) /*0x78f0bb*/
  {
    v8 = &v19[v3 + 1]; /*0x78f0ca*/
    v18 = ((String *)(&v25))->Assign(String2); /*0x78f0df*/
    v17 = FromStringInt((char **)&v24.m_3[1], (int)v8); /*0x78f0ec*/
    v16 = ((String *)(&v24))->Assign(asc_84BA48); /*0x78f100*/
    v15 = ((String *)((String *)&v23.m_3[1]))->Assign(&stru_B76AC4.needsRedraw); /*0x78f118*/
    v9 = ((String *)(&v23))->Assign(aMode_0); /*0x78f11f*/
    v10 = ((String *)((String *)v9))->Concat(&v22, v15); /*0x78f126*/
    v11 = ((String *)((String *)v10))->Concat((char **)&v21.m_3[1], v16); /*0x78f12d*/
    v12 = ((String *)((String *)v11))->Concat(&v19, v17); /*0x78f134*/
    ((String *)((String *)v12))->Concat((char **)&v21, v18); /*0x78f13b*/
    DeleteAndZero((ObjectClass *)&v19); /*0x78f144*/
    DeleteAndZero((ObjectClass *)&v21.m_3[1]); /*0x78f14d*/
    DeleteAndZero((ObjectClass *)&v22); /*0x78f156*/
    DeleteAndZero((ObjectClass *)&v23); /*0x78f15f*/
    DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x78f168*/
    DeleteAndZero((ObjectClass *)&v24); /*0x78f171*/
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x78f17a*/
    DeleteAndZero((ObjectClass *)&v25); /*0x78f183*/
    v13 = *(unsigned int *)ppv; /*0x78f191*/
    v14 = ((String *)(&v21))->GetOrEmpty(); /*0x78f193*/
    (*(void (**)(LPVOID, char *))(v13 + 156))(ppv, v14); /*0x78f1a0*/
    memset(v26, 0, sizeof(v26)); /*0x78f1b1*/
    GameConfig::BuildChecksum(v26); /*0x78f1b7*/
    v26[40] = 0; /*0x78f1c5*/
    (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 168))(ppv, v26); /*0x78f1ce*/
    (*(void (**)(LPVOID, int, char *))(*(unsigned int *)ppv + 252))(ppv, 1, &v8[v20]); /*0x78f1e5*/
    DeleteAndZero((ObjectClass *)&v21); /*0x78f1ef*/
  }

}
}  // G42.18c ns repair
// 0x69A310
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{

  int result; // eax

  result = aP0; /*0x69a310*/
  if ( aP0 == -2 ) /*0x69a317*/
    return unk_83ED1C; /*0x69a31e*/
  if ( aP0 < 9 ) /*0x69a32b*/
    return byte_83ED14[aP0]; /*0x69a32d*/
  return result; /*0x69a325*/

}
}  // G42.18c ns repair
// 0x69B760
namespace gamemd {  // G42.18c ns repair
int SessionClass::AssignSide(int a2, char aP2)
{

  int result; // eax
  int Side2; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    LOBYTE(result) = aP2; /*0x69b76c*/
    if ( aP2 ) /*0x69b772*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b783*/
      this->Side = result; /*0x69b788*/
      this->Side2 = -2; /*0x69b78e*/
    }
    else
    {
      this->Side = 0; /*0x69b79a*/
      this->Side2 = -2; /*0x69b7a4*/
    }
  }
  else
  {
    this->Side = a2; /*0x69b7b0*/
    this->Side2 = -1; /*0x69b7b6*/
  }
  Side2 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = Side2; /*0x69b7d2*/
  return result; /*0x69b7d8*/

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

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c4a6*/
  this->m_10 = 0; /*0x69c4a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c4b6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69c4be*/
  }
  BYTE1(this->m_C) = 0; /*0x69c4c1*/
  this->m_8 = 0; /*0x69c4c4*/

}
}  // G42.18c ns repair
// 0x69C4D0
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/

}
}  // G42.18c ns repair
// 0x69C4F0
namespace gamemd {  // G42.18c ns repair
int SessionClass::Seek(int a2, void *a2_2, void *a3)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x69c4fa*/

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

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69c712*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( m_8 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x69c725*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69c72b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= m_8 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/

}
}  // G42.18c ns repair
// 0x69C750
namespace gamemd {  // G42.18c ns repair
char SessionClass::addPlayer(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x69c77e*/
    LOBYTE(this->m_C) = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x69c795*/
      {
        m_8 = this->m_8; /*0x69c79c*/
        if ( a2 < m_8 ) /*0x69c7a1*/
          m_8 = a2; /*0x69c7a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( BYTE1(this->m_C) ) /*0x69c7bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c7c6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x69c7ce*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x69c7d7*/
      this->m_8 = a2; /*0x69c7df*/
      BYTE1(this->m_C) = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }

}
}  // G42.18c ns repair
// 0x69C800
namespace gamemd {  // G42.18c ns repair
void SessionClass::removePlayer()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69c80d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c813*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69c81b*/
  }
  BYTE1(this->m_C) = 0; /*0x69c81e*/
  this->m_8 = 0; /*0x69c821*/

}
}  // G42.18c ns repair
// 0x69C830
namespace gamemd {  // G42.18c ns repair
int  SessionClass::findPlayer(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69c830*/
    return 0; /*0x69c838*/
  m_8 = this->m_8; /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( m_8 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= m_8 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/

}
}  // G42.18c ns repair
// 0x69C870
namespace gamemd {  // G42.18c ns repair
unsigned int SessionClass::updatePlayer(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x69c870*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/

}
}  // G42.18c ns repair
// 0x69C890
namespace gamemd {  // G42.18c ns repair
char SessionClass::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x69c8ba*/
    LOBYTE(this->m_C) = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x69c8c8*/
    {
      m_8 = this->m_8; /*0x69c8cf*/
      if ( a2 < m_8 ) /*0x69c8d4*/
        m_8 = a2; /*0x69c8d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( BYTE1(this->m_C) ) /*0x69c8ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c8f9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x69c901*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x69c90a*/
    this->m_8 = a2; /*0x69c912*/
    BYTE1(this->m_C) = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (**)(_TypeList_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x69c91e*/
  }
  v7 = this->m_8; /*0x69c921*/
  if ( v7 < this->m_10 ) /*0x69c929*/
    this->m_10 = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/

}
}  // G42.18c ns repair
// 0x69C940
namespace gamemd {  // G42.18c ns repair
int SessionClass::Read(unsigned int * a2, void *a2_2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( m_10 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= m_10 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/

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

  dword_B780A0 = (int)this; /*0x7b2720*/

}
