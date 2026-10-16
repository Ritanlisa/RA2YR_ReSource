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
namespace gamemd {  // G42.18 ns repair
AbstractClass * * WinMainSetup_Setup_6BB8E0(void * a1)
{

  uint8_t result = g_DDraw_Force3D; // al /*0x6bb8e0*/
  DDraw *v2; // [esp+0h] [ebp-4h]
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(v2); /*0x6bb8ec*/
  if ( !byte_B0BCF5 ) /*0x6bb8f7*/
  {
    if ( g_DSurface_Hidden ) /*0x6bb905*/
    {
      (*(void (**)(ObjectClass *, int))g_DSurface_Hidden->vfptr)(g_DSurface_Hidden, 1); /*0x6bb90b*/
      g_DSurface_Hidden = 0; /*0x6bb90d*/
    }
    if ( DSurface_Alternate ) /*0x6bb91b*/
    {
      (*(void (**)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x6bb921*/
      DSurface_Alternate = 0; /*0x6bb923*/
    }
    if ( DSurface_Tile ) /*0x6bb931*/
    {
      (*(void (**)(DSurface *, int))DSurface_Tile)(DSurface_Tile, 1); /*0x6bb937*/
      DSurface_Tile = 0; /*0x6bb939*/
    }
    if ( DSurface_Sidebar ) /*0x6bb947*/
    {
      (*(void (**)(DSurface *, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x6bb94d*/
      DSurface_Sidebar = 0; /*0x6bb94f*/
    }
    if ( DSurface_Composite ) /*0x6bb95d*/
    {
      (**(void (***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x6bb963*/
      DSurface_Composite = 0; /*0x6bb965*/
    }
    if ( g_DSurface_Primary ) /*0x6bb973*/
    {
      (*(void (**)(DSurface *, int))g_DSurface_Primary)(g_DSurface_Primary, 1); /*0x6bb979*/
      g_DSurface_Primary = 0; /*0x6bb97b*/
    }
    result = (uint8_t)sub_4A44F0((ObjectClass *)v2); /*0x6bb981*/
    byte_B0BCF5 = 1; /*0x6bb986*/
  }
  return (gamemd::AbstractClass **)(result);
}
}  // G42.18 ns repair
// 0x72B130
namespace gamemd {
void sub_72B130()
{

  if ( byte_B0FC90 ) /*0x72b13b*/
  {
    void *v0; // esi
    v0 = (void *)(dword_B0FC80); /*0x72b13d*/
    if ( dword_B0FC80 ) /*0x72b145*/
    {
      FileTreeNode::Destroy(dword_B0FC80); /*0x72b149*/
      operator delete((void *)(v0)); /*0x72b14f*/
    }
    byte_B0FC90 = 0; /*0x72b157*/
  }
  dword_B0FC80 = 0; /*0x72b162*/
  if ( byte_B0FC91 ) /*0x72b16a*/
  {
    void *v1; // esi
    v1 = (void *)(dword_B0FC84); /*0x72b16c*/
    if ( dword_B0FC84 ) /*0x72b174*/
    {
      FileTreeNode::Destroy(dword_B0FC84); /*0x72b178*/
      operator delete((void *)(v1)); /*0x72b17e*/
    }
    byte_B0FC91 = 0; /*0x72b186*/
  }
  dword_B0FC84 = 0; /*0x72b191*/
  if ( byte_B0FC92 ) /*0x72b199*/
  {
    void *v2; // esi
    v2 = (void *)(dword_B0FC88); /*0x72b19b*/
    if ( dword_B0FC88 ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(dword_B0FC88); /*0x72b1a7*/
      operator delete((void *)(v2)); /*0x72b1ad*/
    }
    byte_B0FC92 = 0; /*0x72b1b5*/
  }
  dword_B0FC88 = 0; /*0x72b1c0*/
  if ( byte_B0FC93 ) /*0x72b1c8*/
  {
    void *v3; // esi
    v3 = (void *)(dword_B0FC8C); /*0x72b1ca*/
    if ( dword_B0FC8C ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(dword_B0FC8C); /*0x72b1d6*/
      operator delete((void *)(v3)); /*0x72b1dc*/
    }
    byte_B0FC93 = 0; /*0x72b1e4*/
  }
  dword_B0FC8C = 0; /*0x72b1ef*/
  if ( byte_B0FC94 ) /*0x72b1f7*/
  {
    void *v4; // esi
    v4 = (void *)(dword_B0FACC); /*0x72b1f9*/
    if ( dword_B0FACC ) /*0x72b201*/
    {
      FileTreeNode::Destroy(dword_B0FACC); /*0x72b205*/
      operator delete((void *)(v4)); /*0x72b20b*/
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
  int result; // eax

  int *v1; // esi
  v1 = (int *)(dword_A9FFC8);
  do /*0x53d571*/
  {
    if ( *v1 ) /*0x53d556*/
      result = (**(int (***)(int, int))*v1)(*v1, 1); /*0x53d560*/
    *v1++ = 0; /*0x53d562*/
  }
  while ( (int)v1 < (int)&dbl_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}
} // namespace gamemd

// 0x5B4310
namespace gamemd {
void sub_5B4310()
{

  unsigned int *v0; // esi
  v0 = (unsigned int *)(dword_ABF00C);
  if ( dword_ABF00C ) /*0x5b431a*/
  {
    if ( *(unsigned int *)dword_ABF00C ) /*0x5b431c*/
      (*(unsigned int **)dword_ABF00C)->Destructor(); /*0x5b4324*/
    unsigned int *v1; // ecx
    v1 = (unsigned int *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      (v1)->Destructor(); /*0x5b4330*/
    operator delete((void *)(v0)); /*0x5b4336*/
  }
  dword_ABF00C = 0; /*0x5b433e*/
}
} // namespace gamemd

// 0x5BE940
namespace gamemd {
void sub_5BE940()
{

  void *v0; // esi
  v0 = (void *)(dword_ABF294);
  if ( dword_ABF294 ) /*0x5be949*/
  {
    ((void *)(dword_ABF294))->Destroy(); /*0x5be94d*/
    operator delete((void *)(v0)); /*0x5be953*/
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
  (*((unsigned short *)&(g_CurrentPlayerName))) = 0; /*0x5db700*/
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
    operator delete((void *)((void *)g_HouseClass_ObserverFlags)); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    operator delete((void *)((void *)g_Lobby_PlayerCount)); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    operator delete((void *)((void *)g_Lobby_PlayerTeam)); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    operator delete((void *)((void *)g_Lobby_PlayerSide)); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    operator delete((void *)((void *)g_Lobby_PlayerColor)); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    operator delete((void *)(g_Lobby_PlayerReady)); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    operator delete((void *)((void *)g_Lobby_MaxPlayers)); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
  return ((PtrVector*)&stru_A8DA74)->Destroy(); /*0x5e8ad0*/
}
}
// 0x5FF800
namespace gamemd {
void sub_5FF800()
{

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    operator delete((void *)(dword_AC1838)); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  int *v1; // esi
  v1 = (int *)(dword_AC1698);
  do /*0x5ff83d*/
  {
    if ( *v1 ) /*0x5ff822*/
      (**(void (***)(int, int))*v1)(*v1, 1); /*0x5ff82c*/
    *v1++ = 0; /*0x5ff82e*/
  }
  while ( (int)v1 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}
} // namespace gamemd

// 0x626FF0
namespace gamemd {
void sub_626FF0()
{

  void *v0; // esi
  v0 = (void *)(g_FileExtensionState);
  if ( g_FileExtensionState ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles((gamemd::FileSystem *)(g_FileExtensionState)); /*0x626ffd*/
    operator delete((void *)(v0)); /*0x627003*/
    g_FileExtensionState = 0; /*0x62700b*/
  }
}
} // namespace gamemd

// 0x65FD50
namespace gamemd {
void sub_65FD50()
{

  int i; // edi
  for ( i = g_TriggerEventState - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    void *v2; // esi
    v2 = *(void **)(g_TriggerPool + 4 * i); /*0x65fd65*/
    if ( v2 ) /*0x65fd6a*/
    {
      int v4; // [esp+4h] [ebp-4h] BYREF
      v4 = *(unsigned int *)(g_TriggerPool + 4 * i); /*0x65fd7b*/
      int v3; // eax
      v3 = (*(int (**)(LoadGame *, int *))(*(unsigned int *)DataGlobal_B04DA8 + 16))(&stru_B04DA8, &v4); /*0x65fd7f*/
      if ( v3 != -1 && v3 < g_TriggerEventState ) /*0x65fd8f*/
      {
        --g_TriggerEventState; /*0x65fd94*/
        for ( ; /*0x65fd9a*/
        v3 < g_TriggerEventState;
        *(unsigned int *)(g_TriggerPool + 4 * v3 - 4) = *(unsigned int *)(g_TriggerPool
        + 4 * v3) )
        {
          ++v3; /*0x65fda2*/
        }
      }
      operator delete((void *)(v2)); /*0x65fdb5*/
    }
  }
}
} // namespace gamemd

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
  LoadingScreen *v1; // [esp+0h] [ebp-4h]

  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  ObjectClass *v0; // [esp+0h] [ebp-4h]
  WinMainSetup_Setup_72AC40_Setup_72B230(v0); /*0x72ac46*/
  if ( DataGlobal_B0FBE0 ) /*0x72ac54*/
  {
    DataGlobal_B0FBE0 = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(v1); /*0x72ac65*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC10)); /*0x72ac70*/
    *(unsigned int *)&DataGlobal_B0FC10 = 0; /*0x72ac7b*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC14)); /*0x72ac82*/
    *(unsigned int *)&DataGlobal_B0FC14 = 0; /*0x72ac8d*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC18)); /*0x72ac94*/
    *(unsigned int *)&DataGlobal_B0FC18 = 0; /*0x72ac9e*/
    operator delete((void *)(*(void **)&g_GadgetAnimState)); /*0x72aca5*/
    *(unsigned int *)&g_GadgetAnimState = 0; /*0x72acb0*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC20)); /*0x72acb7*/
    *(unsigned int *)&DataGlobal_B0FC20 = 0; /*0x72acc2*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC24)); /*0x72acc9*/
    *(unsigned int *)&DataGlobal_B0FC24 = 0; /*0x72acd3*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC28)); /*0x72acda*/
    *(unsigned int *)&DataGlobal_B0FC28 = 0; /*0x72ace5*/
    operator delete((void *)(*(void **)&DataGlobal_B0FC2C)); /*0x72acec*/
    *(unsigned int *)&DataGlobal_B0FC2C = 0; /*0x72acf4*/
    ObjectClass *v2; // [esp+0h] [ebp-4h]
    ReleaseLoadingResources(v2); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(v1); /*0x72ad04*/
  this->LoadingScreen::FreeResources2(); /*0x72ad09*/
  DataGlobal_B0FC0C = 0; /*0x72ad0e*/
}
} // namespace gamemd

// 0x72B230
namespace gamemd {
void sub_72B230()
{
  if ( *(unsigned int *)&DataGlobal_B0FB6C ) /*0x72b23a*/
  {
    operator delete((void *)(*(void **)&DataGlobal_B0FB6C)); /*0x72b23d*/
    *(unsigned int *)&DataGlobal_B0FB6C = 0; /*0x72b245*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB70 ) /*0x72b253*/
  {
    (***(void (****)(unsigned int, int))&DataGlobal_B0FB70)( /*0x72b259*/
      *(unsigned int *)&DataGlobal_B0FB70,
      3);
    *(unsigned int *)&DataGlobal_B0FB70 = 0; /*0x72b25b*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB64 ) /*0x72b268*/
  {
    operator delete((void *)(*(void **)&DataGlobal_B0FB64)); /*0x72b26b*/
    *(unsigned int *)&DataGlobal_B0FB64 = 0; /*0x72b273*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB68 ) /*0x72b281*/
  {
    (***(void (****)(unsigned int, int))&DataGlobal_B0FB68)( /*0x72b287*/
      *(unsigned int *)&DataGlobal_B0FB68,
      3);
    *(unsigned int *)&DataGlobal_B0FB68 = 0; /*0x72b289*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB5C ) /*0x72b296*/
  {
    operator delete((void *)(*(void **)&DataGlobal_B0FB5C)); /*0x72b299*/
    *(unsigned int *)&DataGlobal_B0FB5C = 0; /*0x72b2a1*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB60 ) /*0x72b2af*/
  {
    (***(void (****)(unsigned int, int))&DataGlobal_B0FB60)( /*0x72b2b5*/
      *(unsigned int *)&DataGlobal_B0FB60,
      3);
    *(unsigned int *)&DataGlobal_B0FB60 = 0; /*0x72b2b7*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB74 ) /*0x72b2c4*/
  {
    operator delete((void *)(*(void **)&DataGlobal_B0FB74)); /*0x72b2c7*/
    *(unsigned int *)&DataGlobal_B0FB74 = 0; /*0x72b2cf*/
  }
  if ( *(unsigned int *)&DataGlobal_B0FB78 ) /*0x72b2dd*/
  {
    (***(void (****)(unsigned int, int))&DataGlobal_B0FB78)( /*0x72b2e3*/
      *(unsigned int *)&DataGlobal_B0FB78,
      3);
    *(unsigned int *)&DataGlobal_B0FB78 = 0; /*0x72b2e5*/
  }
}
} // namespace gamemd

// 0x730970
namespace gamemd {
int sub_730970()
{
  int result; // eax

  if ( *(unsigned int *)&g_UnitTooltipState ) /*0x730978*/
  {
    result = (***(int (****)(unsigned int, int))&g_UnitTooltipState)( /*0x73097e*/
               *(unsigned int *)&g_UnitTooltipState,
               1);
    *(unsigned int *)&g_UnitTooltipState = 0; /*0x730980*/
  }
  return result; /*0x73098a*/
}
} // namespace gamemd
