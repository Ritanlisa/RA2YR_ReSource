// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5DB6F0
namespace gamemd {
int sub_5DB6F0()
{
{
    int result;
    result = WinMainSetup_Setup_5DB6F0_Setup();
    g_CurrentPlayerName[0] = 0;
    if ( g_NetworkInterface )
    result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
    return result;
}
}
} // namespace gamemd

// 0x6BB8E0
namespace gamemd {
int WinMainSetup_Setup_6BB8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 __usercall sub_6BB8E0@<al>(int a1@<esi>)
{
  unsigned __int8 result; // al

  result = MEMORY[0x8A0DEF]; /*0x6bb8e0*/
  if ( MEMORY[0x8A0DEF] ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(); /*0x6bb8ec*/
  if ( !MEMORY[0xB0BCF5] ) /*0x6bb8f7*/
  {
    if ( MEMORY[0x88730C] ) /*0x6bb905*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x88730C])(MEMORY[0x88730C], 1); /*0x6bb90b*/
      MEMORY[0x88730C] = 0; /*0x6bb90d*/
    }
    if ( MEMORY[0x887310] ) /*0x6bb91b*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887310])(MEMORY[0x887310], 1); /*0x6bb921*/
      MEMORY[0x887310] = 0; /*0x6bb923*/
    }
    if ( MEMORY[0x8872FC] ) /*0x6bb931*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x8872FC])(MEMORY[0x8872FC], 1); /*0x6bb937*/
      MEMORY[0x8872FC] = 0; /*0x6bb939*/
    }
    if ( MEMORY[0x887300] ) /*0x6bb947*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887300])(MEMORY[0x887300], 1); /*0x6bb94d*/
      MEMORY[0x887300] = 0; /*0x6bb94f*/
    }
    if ( MEMORY[0x88731C] ) /*0x6bb95d*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x88731C])(MEMORY[0x88731C], 1); /*0x6bb963*/
      MEMORY[0x88731C] = 0; /*0x6bb965*/
    }
    if ( MEMORY[0x887308] ) /*0x6bb973*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887308])(MEMORY[0x887308], 1); /*0x6bb979*/
      MEMORY[0x887308] = 0; /*0x6bb97b*/
    }
    result = (unsigned __int8)sub_4A44F0(a1); /*0x6bb981*/
    MEMORY[0xB0BCF5] = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}
}
} // namespace gamemd

// 0x72B130
namespace gamemd {
void sub_72B130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72B130()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi

  if ( MEMORY[0xB0FC90] ) /*0x72b13b*/
  {
    v0 = MEMORY[0xB0FC80]; /*0x72b13d*/
    if ( MEMORY[0xB0FC80] ) /*0x72b145*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC80]); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
    }
    MEMORY[0xB0FC90] = 0; /*0x72b157*/
  }
  MEMORY[0xB0FC80] = 0; /*0x72b162*/
  if ( MEMORY[0xB0FC91] ) /*0x72b16a*/
  {
    v1 = MEMORY[0xB0FC84]; /*0x72b16c*/
    if ( MEMORY[0xB0FC84] ) /*0x72b174*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC84]); /*0x72b178*/
      __3_YAXPAX_Z(v1); /*0x72b17e*/
    }
    MEMORY[0xB0FC91] = 0; /*0x72b186*/
  }
  MEMORY[0xB0FC84] = 0; /*0x72b191*/
  if ( MEMORY[0xB0FC92] ) /*0x72b199*/
  {
    v2 = MEMORY[0xB0FC88]; /*0x72b19b*/
    if ( MEMORY[0xB0FC88] ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC88]); /*0x72b1a7*/
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
    }
    MEMORY[0xB0FC92] = 0; /*0x72b1b5*/
  }
  MEMORY[0xB0FC88] = 0; /*0x72b1c0*/
  if ( MEMORY[0xB0FC93] ) /*0x72b1c8*/
  {
    v3 = MEMORY[0xB0FC8C]; /*0x72b1ca*/
    if ( MEMORY[0xB0FC8C] ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC8C]); /*0x72b1d6*/
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
    }
    MEMORY[0xB0FC93] = 0; /*0x72b1e4*/
  }
  MEMORY[0xB0FC8C] = 0; /*0x72b1ef*/
  if ( MEMORY[0xB0FC94] ) /*0x72b1f7*/
  {
    v4 = MEMORY[0xB0FACC]; /*0x72b1f9*/
    if ( MEMORY[0xB0FACC] ) /*0x72b201*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FACC]); /*0x72b205*/
      __3_YAXPAX_Z(v4); /*0x72b20b*/
    }
    MEMORY[0xB0FC94] = 0; /*0x72b213*/
  }
  MEMORY[0xB0FACC] = 0; /*0x72b219*/
}
}
} // namespace gamemd

// 0x53D550
namespace gamemd {
int sub_53D550()
{
{
    int *v0;
    int result;
    v0 = DataGlobal_A9FFC8;
    do
  {
    if ( *v0 )
    result = (**(int (__thiscall ***)(int, int))*v0)(*v0, 1);
    *v0++ = 0;
  }
    while ( (int)v0 < (int)&DataGlobal_AA0108 );
    return result;
}
}
} // namespace gamemd

// 0x5B4310
namespace gamemd {
void sub_5B4310()
{
{
    int *v0;
    int *v1;
    v0 = g_FileCacheHashRoot;
    if ( g_FileCacheHashRoot )
  {
    if ( *(int *)g_FileCacheHashRoot )
    Tree::Destructor(*(int **)g_FileCacheHashRoot);
    v1 = (int *)v0[1];
    if ( v1 )
    Tree::Destructor(v1);
    __3_YAXPAX_Z(v0);
  }
    g_FileCacheHashRoot = 0;
}
}
} // namespace gamemd

// 0x5BE940
namespace gamemd {
void sub_5BE940()
{
{
    void *v0;
    v0 = DataGlobal_ABF294;
    if ( DataGlobal_ABF294 )
  {
    FileTreeNode::Destroy(DataGlobal_ABF294);
    __3_YAXPAX_Z(v0);
    DataGlobal_ABF2DC = 0;
  }
    DataGlobal_ABF294 = 0;
}
}
} // namespace gamemd

// 0x5E8A20
namespace gamemd {
int sub_5E8A20()
{
{
    if ( g_HouseClass_ObserverFlags )
  {
    __3_YAXPAX_Z((void *)g_HouseClass_ObserverFlags);
    g_HouseClass_ObserverFlags = 0;
  }
    if ( g_Lobby_PlayerCount )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerCount);
    g_Lobby_PlayerCount = 0;
  }
    if ( g_Lobby_PlayerTeam )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerTeam);
    g_Lobby_PlayerTeam = 0;
  }
    if ( g_Lobby_PlayerSide )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerSide);
    g_Lobby_PlayerSide = 0;
  }
    if ( g_Lobby_PlayerColor )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerColor);
    g_Lobby_PlayerColor = 0;
  }
    if ( g_Lobby_PlayerReady )
  {
    __3_YAXPAX_Z(g_Lobby_PlayerReady);
    g_Lobby_PlayerReady = 0;
  }
    if ( g_Lobby_MaxPlayers )
  {
    __3_YAXPAX_Z((void *)g_Lobby_MaxPlayers);
    g_Lobby_MaxPlayers = 0;
  }
    return PtrVector::Destroy(&g_PlayerInfoCount);
}
}
} // namespace gamemd

// 0x5FF800
namespace gamemd {
void sub_5FF800()
{
{
    int *v0;
    if ( DataGlobal_AC1838 )
  {
    __3_YAXPAX_Z(DataGlobal_AC1838);
    DataGlobal_AC1838 = 0;
  }
    v0 = DataGlobal_AC1698;
    do
  {
    if ( *v0 )
    (**(void (__thiscall ***)(int, int))*v0)(*v0, 1);
    *v0++ = 0;
  }
    while ( (int)v0 < (int)&DataGlobal_AC17C0 );
}
}
} // namespace gamemd

// 0x626FF0
namespace gamemd {
void sub_626FF0()
{
{
    void *v0;
    v0 = g_FileExtensionState;
    if ( g_FileExtensionState )
  {
    FileSystem::FlushTempFiles(g_FileExtensionState);
    __3_YAXPAX_Z(v0);
    g_FileExtensionState = 0;
  }
}
}
} // namespace gamemd

// 0x65FD50
namespace gamemd {
void sub_65FD50()
{
{
    int i;
    void *v1;
    int v2;
    int v3;
    for ( i = g_TriggerEventState - 1; i >= 0; --i )
  {
    v1 = (void *)*((int *)(g_TriggerPool) + i);
    if ( v1 )
    {
    v3 = *((int *)(g_TriggerPool) + i);
    v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B04DA8 + 16))(&DataGlobal_B04DA8, &v3);
    if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState )
      {
    do
        {
    ++v2;
    *((int *)(g_TriggerPool) + v2 - 1) = *((int *)(g_TriggerPool) + v2);
        }
    while ( v2 < g_TriggerEventState );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}
} // namespace gamemd

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
{
    WinMainSetup_Setup_72AC40_Setup();
    WinMainSetup_Setup_72AC40_Setup_72B230();
    if ( DataGlobal_B0FBE0 )
  {
    DataGlobal_B0FBE0 = 0;
    LoadingScreen::DestroyFileTrees();
    LoadingScreen::CleanupObjects();
    __3_YAXPAX_Z(DataGlobal_B0FC10);
    DataGlobal_B0FC10 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC14);
    DataGlobal_B0FC14 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC18);
    DataGlobal_B0FC18 = 0;
    __3_YAXPAX_Z(g_GadgetAnimState);
    g_GadgetAnimState = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC20);
    DataGlobal_B0FC20 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC24);
    DataGlobal_B0FC24 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC28);
    DataGlobal_B0FC28 = 0;
    __3_YAXPAX_Z(DataGlobal_B0FC2C);
    DataGlobal_B0FC2C = 0;
    ReleaseLoadingResources();
  }
    FileTree::CleanupAll();
    LoadingScreen::FreeResources();
    LoadingScreen::FreeResources2();
    DataGlobal_B0FC0C = 0;
}
}
} // namespace gamemd

// 0x72B230
namespace gamemd {
void sub_72B230()
{
{
    if ( DataGlobal_B0FB6C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB6C);
    DataGlobal_B0FB6C = 0;
  }
    if ( DataGlobal_B0FB70 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB70)(DataGlobal_B0FB70, 3);
    DataGlobal_B0FB70 = 0;
  }
    if ( DataGlobal_B0FB64 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB64);
    DataGlobal_B0FB64 = 0;
  }
    if ( DataGlobal_B0FB68 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB68)(DataGlobal_B0FB68, 3);
    DataGlobal_B0FB68 = 0;
  }
    if ( DataGlobal_B0FB5C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB5C);
    DataGlobal_B0FB5C = 0;
  }
    if ( DataGlobal_B0FB60 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB60)(DataGlobal_B0FB60, 3);
    DataGlobal_B0FB60 = 0;
  }
    if ( DataGlobal_B0FB74 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB74);
    DataGlobal_B0FB74 = 0;
  }
    if ( DataGlobal_B0FB78 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB78)(DataGlobal_B0FB78, 3);
    DataGlobal_B0FB78 = 0;
  }
}
}
} // namespace gamemd

// 0x730970
namespace gamemd {
int sub_730970()
{
{
    int result;
    if ( g_UnitTooltipState )
  {
    result = (**(int (__thiscall ***)(int, int))g_UnitTooltipState)(g_UnitTooltipState, 1);
    g_UnitTooltipState = 0;
  }
    return result;
}
}
} // namespace gamemd
