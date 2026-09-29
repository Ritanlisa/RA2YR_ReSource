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

// 0x6BB8E0
namespace gamemd {
AbstractClass * * WinMainSetup_Setup_6BB8E0(void * a1)
{
  uint8_t result; // al
  DDraw *v2; // [esp+0h] [ebp-4h]

  result = g_DDraw_Force3D; /*0x6bb8e0*/
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(v2); /*0x6bb8ec*/
  if ( !byte_B0BCF5 ) /*0x6bb8f7*/
  {
    if ( g_DSurface_Hidden ) /*0x6bb905*/
    {
      (*(void (**)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)(g_DSurface_Hidden, 1); /*0x6bb90b*/
      g_DSurface_Hidden = 0; /*0x6bb90d*/
    }
    if ( DSurface_Alternate ) /*0x6bb91b*/
    {
      (*(void (**)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x6bb921*/
      DSurface_Alternate = 0; /*0x6bb923*/
    }
    if ( DSurface_Tile ) /*0x6bb931*/
    {
      (*(void (**)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)(DSurface_Tile, 1); /*0x6bb937*/
      DSurface_Tile = 0; /*0x6bb939*/
    }
    if ( DSurface_Sidebar ) /*0x6bb947*/
    {
      (*(void (**)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)(DSurface_Sidebar, 1); /*0x6bb94d*/
      DSurface_Sidebar = 0; /*0x6bb94f*/
    }
    if ( DSurface_Composite ) /*0x6bb95d*/
    {
      (**(void (***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x6bb963*/
      DSurface_Composite = 0; /*0x6bb965*/
    }
    if ( g_DSurface_Primary ) /*0x6bb973*/
    {
      (*(void (**)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)(g_DSurface_Primary, 1); /*0x6bb979*/
      g_DSurface_Primary = 0; /*0x6bb97b*/
    }
    result = (uint8_t)sub_4A44F0((ObjectClass *)v2); /*0x6bb981*/
    byte_B0BCF5 = 1; /*0x6bb986*/
  }
  return (gamemd::AbstractClass **)(result);
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
      FileTreeNode::Destroy(dword_B0FC80); /*0x72b149*/
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
      FileTreeNode::Destroy(dword_B0FC84); /*0x72b178*/
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
      FileTreeNode::Destroy(dword_B0FC88); /*0x72b1a7*/
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
      FileTreeNode::Destroy(dword_B0FC8C); /*0x72b1d6*/
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
      FileTreeNode::Destroy(dword_B0FACC); /*0x72b205*/
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
      Tree::Destructor(*(unsigned int **)dword_ABF00C); /*0x5b4324*/
    v1 = (unsigned int *)((unsigned int *)(v0))[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
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
    FileTreeNode::Destroy(dword_ABF294); /*0x5be94d*/
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
  int result; // eax

  result = WinMainSetup_Setup_5DB6F0_Setup(); /*0x5db6f1*/
  IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x5db700*/
  if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x5db707*/
    result = (***(int (****)(unsigned int, int))&stru_887598.isAliveFlag)(*(unsigned int *)&stru_887598.isAliveFlag, 1); /*0x5db70d*/
  *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x5db70f*/
  return result; /*0x5db715*/
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
  return PtrVector::Destroy(&stru_A8DA74); /*0x5e8ad0*/
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
  int i; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = stru_B04DA8.LoadGame_field_0x10 - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    v2 = *(void **)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd65*/
    if ( v2 ) /*0x65fd6a*/
    {
      v4 = *(unsigned int *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd7b*/
      v3 = (*(int (**)(LoadGame *, int *))(*(unsigned int *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v4); /*0x65fd7f*/
      if ( v3 != -1 && v3 < stru_B04DA8.LoadGame_field_0x10 ) /*0x65fd8f*/
      {
        --stru_B04DA8.LoadGame_field_0x10; /*0x65fd94*/
        for ( ; /*0x65fd9a*/
              v3 < stru_B04DA8.LoadGame_field_0x10;
              *(unsigned int *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v3 - 4) = *(unsigned int *)(stru_B04DA8.LoadGame_field_0x04
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x65fda2*/
        }
      }
      RA2_OPDEL(v2); /*0x65fdb5*/
    }
  }
}
} // namespace gamemd

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
  ObjectClass *v0; // [esp+0h] [ebp-4h]
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(v0); /*0x72ac46*/
  if ( g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72ac54*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72ac5a*/
    this->LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(v1); /*0x72ac65*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72ac70*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72ac7b*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72ac82*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72ac8d*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72ac94*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72ac9e*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72aca5*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72acb0*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72acb7*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72acc2*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72acc9*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72acd3*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72acda*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72ace5*/
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72acec*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72acf4*/
    ReleaseLoadingResources(v2); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(v1); /*0x72ad04*/
  this->LoadingScreen::FreeResources2(); /*0x72ad09*/
  g_BuildingLoadQueue_Array.__pad_F70[1116] = 0; /*0x72ad0e*/
}
} // namespace gamemd

// 0x72B230
namespace gamemd {
void sub_72B230()
{
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[956] ) /*0x72b23a*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[956]); /*0x72b23d*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[956] = 0; /*0x72b245*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[960] ) /*0x72b253*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[960])( /*0x72b259*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[960],
      3);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[960] = 0; /*0x72b25b*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[948] ) /*0x72b268*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[948]); /*0x72b26b*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[948] = 0; /*0x72b273*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[952] ) /*0x72b281*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[952])( /*0x72b287*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[952],
      3);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[952] = 0; /*0x72b289*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[940] ) /*0x72b296*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[940]); /*0x72b299*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[940] = 0; /*0x72b2a1*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[944] ) /*0x72b2af*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[944])( /*0x72b2b5*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[944],
      3);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[944] = 0; /*0x72b2b7*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[964] ) /*0x72b2c4*/
  {
    RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[964]); /*0x72b2c7*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[964] = 0; /*0x72b2cf*/
  }
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[968] ) /*0x72b2dd*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[968])( /*0x72b2e3*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[968],
      3);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[968] = 0; /*0x72b2e5*/
  }
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
