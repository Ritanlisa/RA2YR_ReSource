// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6BB8E0
namespace gamemd {
AbstractClass * * WinMainSetup_Setup_6BB8E0()
{
  unsigned __int8 result; // al

  result = g_DDraw_Force3D; /*0x6bb8e0*/
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(); /*0x6bb8ec*/
  if ( !byte_B0BCF5 ) /*0x6bb8f7*/
  {
    if ( g_DSurface_Hidden ) /*0x6bb905*/
    {
      (**(void (__thiscall ***)(int, int))g_DSurface_Hidden)(g_DSurface_Hidden, 1); /*0x6bb90b*/
      g_DSurface_Hidden = 0; /*0x6bb90d*/
    }
    if ( DSurface_Alternate ) /*0x6bb91b*/
    {
      (**(void (__thiscall ***)(int, int))DSurface_Alternate)(DSurface_Alternate, 1); /*0x6bb921*/
      DSurface_Alternate = 0; /*0x6bb923*/
    }
    if ( DSurface_Tile ) /*0x6bb931*/
    {
      (**(void (__thiscall ***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x6bb937*/
      DSurface_Tile = 0; /*0x6bb939*/
    }
    if ( DSurface_Sidebar ) /*0x6bb947*/
    {
      (**(void (__thiscall ***)(int, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x6bb94d*/
      DSurface_Sidebar = 0; /*0x6bb94f*/
    }
    if ( DSurface_Composite ) /*0x6bb95d*/
    {
      (**(void (__thiscall ***)(int, int))DSurface_Composite)(DSurface_Composite, 1); /*0x6bb963*/
      DSurface_Composite = 0; /*0x6bb965*/
    }
    if ( g_DSurface_Primary ) /*0x6bb973*/
    {
      (**(void (__thiscall ***)(int, int))g_DSurface_Primary)(g_DSurface_Primary, 1); /*0x6bb979*/
      g_DSurface_Primary = 0; /*0x6bb97b*/
    }
    result = (unsigned __int8)sub_4A44F0(a1); /*0x6bb981*/
    byte_B0BCF5 = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}
}
// 0x72B130
namespace gamemd {
void sub_72B130()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi

  if ( byte_B0FC90 ) /*0x72b13b*/
  {
    v0 = dword_B0FC80; /*0x72b13d*/
    if ( dword_B0FC80 ) /*0x72b145*/
    {
      FileTreeNode::Destroy(dword_B0FC80); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
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
      __3_YAXPAX_Z(v1); /*0x72b17e*/
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
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
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
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
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
      __3_YAXPAX_Z(v4); /*0x72b20b*/
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
  int *v0; // esi
  int result; // eax

  v0 = dword_A9FFC8; /*0x53d551*/
  do /*0x53d571*/
  {
    if ( *v0 ) /*0x53d556*/
      result = (**(int (__thiscall ***)(int, int))*v0)(*v0, 1); /*0x53d560*/
    *v0++ = 0; /*0x53d562*/
  }
  while ( (int)v0 < (int)&dbl_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}
} // namespace gamemd

// 0x5B4310
namespace gamemd {
void sub_5B4310()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ecx

  v0 = g_FileCacheHashRoot; /*0x5b4318*/
  if ( g_FileCacheHashRoot ) /*0x5b431a*/
  {
    if ( *(_DWORD *)g_FileCacheHashRoot ) /*0x5b431c*/
      Tree::Destructor(*(_DWORD **)g_FileCacheHashRoot); /*0x5b4324*/
    v1 = (_DWORD *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
    __3_YAXPAX_Z(v0); /*0x5b4336*/
  }
  g_FileCacheHashRoot = 0; /*0x5b433e*/
}
} // namespace gamemd

// 0x5BE940
namespace gamemd {
void sub_5BE940()
{
  void *v0; // esi

  v0 = dword_ABF294; /*0x5be941*/
  if ( dword_ABF294 ) /*0x5be949*/
  {
    FileTreeNode::Destroy(dword_ABF294); /*0x5be94d*/
    __3_YAXPAX_Z(v0); /*0x5be953*/
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
  g_CurrentPlayerName[0] = 0; /*0x5db700*/
  if ( g_NetworkInterface ) /*0x5db707*/
    result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x5db70d*/
  g_NetworkInterface = 0; /*0x5db70f*/
  return result; /*0x5db715*/
}
} // namespace gamemd

// 0x5E8A20
namespace gamemd {
int sub_5E8A20()
{
  if ( g_HouseClass_ObserverFlags ) /*0x5e8a2a*/
  {
    __3_YAXPAX_Z((void *)g_HouseClass_ObserverFlags); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerCount); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerTeam); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerSide); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerColor); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    __3_YAXPAX_Z(g_Lobby_PlayerReady); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_MaxPlayers); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
  return PtrVector::Destroy(&g_PlayerInfoCount); /*0x5e8ad0*/
}
} // namespace gamemd

// 0x5FF800
namespace gamemd {
void sub_5FF800()
{
  int *v0; // esi

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    __3_YAXPAX_Z(dword_AC1838); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  v0 = dword_AC1698; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *v0 ) /*0x5ff822*/
      (**(void (__thiscall ***)(int, int))*v0)(*v0, 1); /*0x5ff82c*/
    *v0++ = 0; /*0x5ff82e*/
  }
  while ( (int)v0 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}
} // namespace gamemd

// 0x626FF0
namespace gamemd {
void sub_626FF0()
{
  void *v0; // esi

  v0 = g_FileExtensionState; /*0x626ff1*/
  if ( g_FileExtensionState ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(g_FileExtensionState); /*0x626ffd*/
    __3_YAXPAX_Z(v0); /*0x627003*/
    g_FileExtensionState = 0; /*0x62700b*/
  }
}
} // namespace gamemd

// 0x65FD50
namespace gamemd {
void sub_65FD50()
{
  int i; // edi
  void *v1; // esi
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  for ( i = g_TriggerEventState - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    v1 = (void *)*((_DWORD *)g_TriggerPool + i); /*0x65fd65*/
    if ( v1 ) /*0x65fd6a*/
    {
      v3 = *((_DWORD *)g_TriggerPool + i); /*0x65fd7b*/
      v2 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v3); /*0x65fd7f*/
      if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState ) /*0x65fd9a*/
      {
        do /*0x65fdb2*/
        {
          ++v2; /*0x65fda2*/
          *((_DWORD *)g_TriggerPool + v2 - 1) = *((_DWORD *)g_TriggerPool + v2); /*0x65fda6*/
        }
        while ( v2 < g_TriggerEventState ); /*0x65fdb2*/
      }
      __3_YAXPAX_Z(v1); /*0x65fdb5*/
    }
  }
}
} // namespace gamemd

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(); /*0x72ac46*/
  if ( byte_B0FBE0 ) /*0x72ac54*/
  {
    byte_B0FBE0 = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(); /*0x72ac65*/
    __3_YAXPAX_Z(dword_B0FC10); /*0x72ac70*/
    dword_B0FC10 = 0; /*0x72ac7b*/
    __3_YAXPAX_Z(dword_B0FC14); /*0x72ac82*/
    dword_B0FC14 = 0; /*0x72ac8d*/
    __3_YAXPAX_Z(dword_B0FC18); /*0x72ac94*/
    dword_B0FC18 = 0; /*0x72ac9e*/
    __3_YAXPAX_Z(g_GadgetAnimState); /*0x72aca5*/
    g_GadgetAnimState = 0; /*0x72acb0*/
    __3_YAXPAX_Z(dword_B0FC20); /*0x72acb7*/
    dword_B0FC20 = 0; /*0x72acc2*/
    __3_YAXPAX_Z(dword_B0FC24); /*0x72acc9*/
    dword_B0FC24 = 0; /*0x72acd3*/
    __3_YAXPAX_Z(dword_B0FC28); /*0x72acda*/
    dword_B0FC28 = 0; /*0x72ace5*/
    __3_YAXPAX_Z(dword_B0FC2C); /*0x72acec*/
    dword_B0FC2C = 0; /*0x72acf4*/
    ReleaseLoadingResources(); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(); /*0x72ad04*/
  LoadingScreen::FreeResources2(); /*0x72ad09*/
  byte_B0FC0C = 0; /*0x72ad0e*/
}
} // namespace gamemd

// 0x72B230
namespace gamemd {
void sub_72B230()
{
  if ( dword_B0FB6C ) /*0x72b23a*/
  {
    __3_YAXPAX_Z(dword_B0FB6C); /*0x72b23d*/
    dword_B0FB6C = 0; /*0x72b245*/
  }
  if ( dword_B0FB70 ) /*0x72b253*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB70)(dword_B0FB70, 3); /*0x72b259*/
    dword_B0FB70 = 0; /*0x72b25b*/
  }
  if ( dword_B0FB64 ) /*0x72b268*/
  {
    __3_YAXPAX_Z(dword_B0FB64); /*0x72b26b*/
    dword_B0FB64 = 0; /*0x72b273*/
  }
  if ( dword_B0FB68 ) /*0x72b281*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB68)(dword_B0FB68, 3); /*0x72b287*/
    dword_B0FB68 = 0; /*0x72b289*/
  }
  if ( dword_B0FB5C ) /*0x72b296*/
  {
    __3_YAXPAX_Z(dword_B0FB5C); /*0x72b299*/
    dword_B0FB5C = 0; /*0x72b2a1*/
  }
  if ( dword_B0FB60 ) /*0x72b2af*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB60)(dword_B0FB60, 3); /*0x72b2b5*/
    dword_B0FB60 = 0; /*0x72b2b7*/
  }
  if ( dword_B0FB74 ) /*0x72b2c4*/
  {
    __3_YAXPAX_Z(dword_B0FB74); /*0x72b2c7*/
    dword_B0FB74 = 0; /*0x72b2cf*/
  }
  if ( dword_B0FB78 ) /*0x72b2dd*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB78)(dword_B0FB78, 3); /*0x72b2e3*/
    dword_B0FB78 = 0; /*0x72b2e5*/
  }
}
} // namespace gamemd

// 0x730970
namespace gamemd {
int sub_730970()
{
  int result; // eax

  if ( g_UnitTooltipState ) /*0x730978*/
  {
    result = (**(int (__thiscall ***)(int, int))g_UnitTooltipState)(g_UnitTooltipState, 1); /*0x73097e*/
    g_UnitTooltipState = 0; /*0x730980*/
  }
  return result; /*0x73098a*/
}
} // namespace gamemd
