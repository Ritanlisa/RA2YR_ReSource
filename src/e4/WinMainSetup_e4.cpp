// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6BB8E0
namespace gamemd {
AbstractClass * * WinMainSetup_Setup_6BB8E0()
{
{
  unsigned __int8 result; // al

  result = g_DDraw_Force3D; /*0x6bb8e0*/
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(); /*0x6bb8ec*/
  if ( !DataGlobal_B0BCF5 ) /*0x6bb8f7*/
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
    DataGlobal_B0BCF5 = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}
} // namespace gamemd
}

// 0x72B130
namespace gamemd {
void sub_72B130()
{
{

  if ( DataGlobal_B0FC90 ) /*0x72b13b*/
  {
    AbstractClass *v0 = DataGlobal_B0FC80; /*0x72b13d*/
    if ( DataGlobal_B0FC80 ) /*0x72b145*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FC80); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
    }
    DataGlobal_B0FC90 = 0; /*0x72b157*/
  }
  DataGlobal_B0FC80 = 0; /*0x72b162*/
  if ( DataGlobal_B0FC91 ) /*0x72b16a*/
  {
    AbstractClass *v1 = DataGlobal_B0FC84; /*0x72b16c*/
    if ( DataGlobal_B0FC84 ) /*0x72b174*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FC84); /*0x72b178*/
      __3_YAXPAX_Z(v1); /*0x72b17e*/
    }
    DataGlobal_B0FC91 = 0; /*0x72b186*/
  }
  DataGlobal_B0FC84 = 0; /*0x72b191*/
  if ( DataGlobal_B0FC92 ) /*0x72b199*/
  {
    AbstractClass *v2 = DataGlobal_B0FC88; /*0x72b19b*/
    if ( DataGlobal_B0FC88 ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FC88); /*0x72b1a7*/
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
    }
    DataGlobal_B0FC92 = 0; /*0x72b1b5*/
  }
  DataGlobal_B0FC88 = 0; /*0x72b1c0*/
  if ( DataGlobal_B0FC93 ) /*0x72b1c8*/
  {
    AbstractClass *v3 = DataGlobal_B0FC8C; /*0x72b1ca*/
    if ( DataGlobal_B0FC8C ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FC8C); /*0x72b1d6*/
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
    }
    DataGlobal_B0FC93 = 0; /*0x72b1e4*/
  }
  DataGlobal_B0FC8C = 0; /*0x72b1ef*/
  if ( DataGlobal_B0FC94 ) /*0x72b1f7*/
  {
    AbstractClass *v4 = DataGlobal_B0FACC; /*0x72b1f9*/
    if ( DataGlobal_B0FACC ) /*0x72b201*/
    {
      FileTreeNode::Destroy(DataGlobal_B0FACC); /*0x72b205*/
      __3_YAXPAX_Z(v4); /*0x72b20b*/
    }
    DataGlobal_B0FC94 = 0; /*0x72b213*/
  }
  DataGlobal_B0FACC = 0; /*0x72b219*/
}
} // namespace gamemd
}

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
