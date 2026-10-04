// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/WinMain_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/FileTree_e4.hpp"
#include "e4/classes/PtrVector_e4.hpp"
#include "e4/classes/Tree_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"

// 0x6BB8E0
namespace gamemd {
AbstractClass * * WinMainSetup_Setup_6BB8E0(void * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6BB8E0)
}
}
// 0x72B130
namespace gamemd {
void sub_72B130()
{
  unsigned int v0;
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;

  if ( byte_B0FC90 ) /*0x72b13b*/
  {
    v0 = dword_B0FC80; /*0x72b13d*/
    if ( dword_B0FC80 ) /*0x72b145*/
    {
      ((FileTreeNode*)(void *)(dword_B0FC80))->Destroy(); /*0x72b149*/
      RA2_OPDEL(v0); /*0x72b14f*/
    }
    byte_B0FC90 = 0; /*0x72b157*/
  }
  dword_B0FC80 = 0; /*0x72b162*/
  if ( byte_B0FC91 ) /*0x72b16a*/
  {
    v1 = dword_B0FC84; /*0x72b16c*/
    if ( dword_B0FC84 ) /*0x72b174*/
    {
      ((FileTreeNode*)(void *)(dword_B0FC84))->Destroy(); /*0x72b178*/
      RA2_OPDEL(v1); /*0x72b17e*/
    }
    byte_B0FC91 = 0; /*0x72b186*/
  }
  dword_B0FC84 = 0; /*0x72b191*/
  if ( byte_B0FC92 ) /*0x72b199*/
  {
    v2 = dword_B0FC88; /*0x72b19b*/
    if ( dword_B0FC88 ) /*0x72b1a3*/
    {
      ((FileTreeNode*)(void *)(dword_B0FC88))->Destroy(); /*0x72b1a7*/
      RA2_OPDEL(v2); /*0x72b1ad*/
    }
    byte_B0FC92 = 0; /*0x72b1b5*/
  }
  dword_B0FC88 = 0; /*0x72b1c0*/
  if ( byte_B0FC93 ) /*0x72b1c8*/
  {
    v3 = dword_B0FC8C; /*0x72b1ca*/
    if ( dword_B0FC8C ) /*0x72b1d2*/
    {
      ((FileTreeNode*)(void *)(dword_B0FC8C))->Destroy(); /*0x72b1d6*/
      RA2_OPDEL(v3); /*0x72b1dc*/
    }
    byte_B0FC93 = 0; /*0x72b1e4*/
  }
  dword_B0FC8C = 0; /*0x72b1ef*/
  if ( byte_B0FC94 ) /*0x72b1f7*/
  {
    v4 = dword_B0FACC; /*0x72b1f9*/
    if ( dword_B0FACC ) /*0x72b201*/
    {
      ((FileTreeNode*)(void *)(dword_B0FACC))->Destroy(); /*0x72b205*/
      RA2_OPDEL(v4); /*0x72b20b*/
    }
    byte_B0FC94 = 0; /*0x72b213*/
  }
  dword_B0FACC = 0; /*0x72b219*/
}
}
// 0x53D550
namespace gamemd {
int sub_53D550()
{
  unsigned int v1;
  int result; // eax

  v1 = dword_A9FFC8; /*0x53d551*/
  do /*0x53d571*/
  {
    if ( *(unsigned int *)(v1) ) /*0x53d556*/
      result = (**(int (***)(int, int))*(unsigned int *)(v1))(*(unsigned int *)(v1), 1); /*0x53d560*/
    *(unsigned int *)(v1)++ = 0; /*0x53d562*/
  }
  while ( (int)v1 < (int)&dbl_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}
} // namespace gamemd

// 0x5B4310
namespace gamemd {
void sub_5B4310()
{
  unsigned int v0;
  unsigned int *v1; // ecx

  v0 = dword_ABF00C; /*0x5b4318*/
  if ( dword_ABF00C ) /*0x5b431a*/
  {
    if ( *(unsigned int *)dword_ABF00C ) /*0x5b431c*/
      ((Tree*)*(unsigned int **)dword_ABF00C)->Destructor(); /*0x5b4324*/
    v1 = (unsigned int *)((unsigned int *)(v0))[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      ((Tree*)v1)->Destructor(); /*0x5b4330*/
    RA2_OPDEL(v0); /*0x5b4336*/
  }
  dword_ABF00C = 0; /*0x5b433e*/
}
} // namespace gamemd

// 0x5BE940
namespace gamemd {
void sub_5BE940()
{
  unsigned int v0;

  v0 = dword_ABF294; /*0x5be941*/
  if ( dword_ABF294 ) /*0x5be949*/
  {
    ((FileTreeNode*)(void *)(dword_ABF294))->Destroy(); /*0x5be94d*/
    RA2_OPDEL(v0); /*0x5be953*/
    byte_ABF2DC = 0; /*0x5be95b*/
  }
  dword_ABF294 = 0; /*0x5be962*/
}
} // namespace gamemd

// 0x5DB6F0
namespace gamemd {
int sub_5DB6F0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DB6F0)
}
} // namespace gamemd

// 0x5E8A20
namespace gamemd {
int sub_5E8A20()
{
  if ( g_HouseClass_ObserverFlags ) /*0x5e8a2a*/
  {
    RA2_OPDEL((void *)g_HouseClass_ObserverFlags); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerCount); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerTeam); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerSide); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerColor); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    RA2_OPDEL(g_Lobby_PlayerReady); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    RA2_OPDEL((void *)g_Lobby_MaxPlayers); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
// 0x5c6120
  return ((PtrVector*)&stru_A8DA74)->Destroy(); /*0x5e8ad0*/
}
} // namespace gamemd

// 0x5FF800
namespace gamemd {
void sub_5FF800()
{
  unsigned int v1;

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    RA2_OPDEL(dword_AC1838); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  v1 = dword_AC1698; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *(unsigned int *)(v1) ) /*0x5ff822*/
      (**(void (***)(int, int))*(unsigned int *)(v1))(*(unsigned int *)(v1), 1); /*0x5ff82c*/
    *(unsigned int *)(v1)++ = 0; /*0x5ff82e*/
  }
  while ( (int)v1 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}
} // namespace gamemd

// 0x626FF0
namespace gamemd {
void sub_626FF0()
{
  unsigned int v0;

  v0 = g_FileExtensionState; /*0x626ff1*/
  if ( g_FileExtensionState ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(g_FileExtensionState); /*0x626ffd*/
    RA2_OPDEL(v0); /*0x627003*/
    g_FileExtensionState = 0; /*0x62700b*/
  }
}
} // namespace gamemd

// 0x65FD50
namespace gamemd {
void sub_65FD50()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65FD50)
}
} // namespace gamemd

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72AC40)
}
} // namespace gamemd

// 0x72B230
namespace gamemd {
void sub_72B230()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B230)
}
} // namespace gamemd

// 0x730970
namespace gamemd {
int sub_730970()
{
  int result; // eax

  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] ) /*0x730978*/
  {
    result = (***(int (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_1624[8])( /*0x73097e*/
               *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
               1);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x730980*/
  }
  return result; /*0x73098a*/
}
} // namespace gamemd
