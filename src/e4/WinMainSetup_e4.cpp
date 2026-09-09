// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53D550
namespace gamemd {
int sub_53D550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  while ( (int)v0 < (int)&unk_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}
}
} // namespace gamemd

// 0x5B4310
namespace gamemd {
void sub_5B4310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4310()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ecx

  v0 = MEMORY[0xABF00C]; /*0x5b4318*/
  if ( MEMORY[0xABF00C] ) /*0x5b431a*/
  {
    if ( *(_DWORD *)MEMORY[0xABF00C] ) /*0x5b431c*/
      Tree::Destructor(*(_DWORD **)MEMORY[0xABF00C]); /*0x5b4324*/
    v1 = (_DWORD *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
    __3_YAXPAX_Z(v0); /*0x5b4336*/
  }
  MEMORY[0xABF00C] = 0; /*0x5b433e*/
}
}
} // namespace gamemd

// 0x5BE940
namespace gamemd {
void sub_5BE940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BE940()
{
  void *v0; // esi

  v0 = MEMORY[0xABF294]; /*0x5be941*/
  if ( MEMORY[0xABF294] ) /*0x5be949*/
  {
    FileTreeNode::Destroy(MEMORY[0xABF294]); /*0x5be94d*/
    __3_YAXPAX_Z(v0); /*0x5be953*/
    MEMORY[0xABF2DC] = 0; /*0x5be95b*/
  }
  MEMORY[0xABF294] = 0; /*0x5be962*/
}
}
} // namespace gamemd

// 0x5DB6F0
namespace gamemd {
int sub_5DB6F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5DB6F0()
{
  int result; // eax

  result = WinMainSetup_Setup_5DB6F0_Setup(); /*0x5db6f1*/
  MEMORY[0xA8D610][0] = 0; /*0x5db700*/
  if ( MEMORY[0x887628] ) /*0x5db707*/
    result = (**(int (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x5db70d*/
  MEMORY[0x887628] = 0; /*0x5db70f*/
  return result; /*0x5db715*/
}
}
} // namespace gamemd

// 0x5FF800
namespace gamemd {
void sub_5FF800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5FF800()
{
  int *v0; // esi

  if ( MEMORY[0xAC1838] ) /*0x5ff807*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC1838]); /*0x5ff80a*/
    MEMORY[0xAC1838] = 0; /*0x5ff812*/
  }
  v0 = MEMORY[0xAC1698]; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *v0 ) /*0x5ff822*/
      (**(void (__thiscall ***)(int, int))*v0)(*v0, 1); /*0x5ff82c*/
    *v0++ = 0; /*0x5ff82e*/
  }
  while ( (int)v0 < (int)&MEMORY[0xAC17C0] ); /*0x5ff83d*/
}
}
} // namespace gamemd

// 0x626FF0
namespace gamemd {
void sub_626FF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_626FF0()
{
  void *v0; // esi

  v0 = MEMORY[0xAC48F0]; /*0x626ff1*/
  if ( MEMORY[0xAC48F0] ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(MEMORY[0xAC48F0]); /*0x626ffd*/
    __3_YAXPAX_Z(v0); /*0x627003*/
    MEMORY[0xAC48F0] = 0; /*0x62700b*/
  }
}
}
} // namespace gamemd

// 0x65FD50
namespace gamemd {
void sub_65FD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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

// 0x72AC40
namespace gamemd {
void sub_72AC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72AC40()
{
  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(); /*0x72ac46*/
  if ( MEMORY[0xB0FBE0] ) /*0x72ac54*/
  {
    MEMORY[0xB0FBE0] = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(); /*0x72ac65*/
    __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72ac70*/
    MEMORY[0xB0FC10] = 0; /*0x72ac7b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72ac82*/
    MEMORY[0xB0FC14] = 0; /*0x72ac8d*/
    __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72ac94*/
    MEMORY[0xB0FC18] = 0; /*0x72ac9e*/
    __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72aca5*/
    MEMORY[0xB0FC1C] = 0; /*0x72acb0*/
    __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72acb7*/
    MEMORY[0xB0FC20] = 0; /*0x72acc2*/
    __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72acc9*/
    MEMORY[0xB0FC24] = 0; /*0x72acd3*/
    __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72acda*/
    MEMORY[0xB0FC28] = 0; /*0x72ace5*/
    __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72acec*/
    MEMORY[0xB0FC2C] = 0; /*0x72acf4*/
    ReleaseLoadingResources(); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(); /*0x72ad04*/
  LoadingScreen::FreeResources2(); /*0x72ad09*/
  MEMORY[0xB0FC0C] = 0; /*0x72ad0e*/
}
}
} // namespace gamemd

// 0x730970
namespace gamemd {
int sub_730970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_730970()
{
  int result; // eax

  if ( MEMORY[0xB0FE6C] ) /*0x730978*/
  {
    result = (**(int (__thiscall ***)(int, int))MEMORY[0xB0FE6C])(MEMORY[0xB0FE6C], 1); /*0x73097e*/
    MEMORY[0xB0FE6C] = 0; /*0x730980*/
  }
  return result; /*0x73098a*/
}
}
} // namespace gamemd

// 0x5E8A20
namespace gamemd {
int sub_5E8A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5E8A20()
{
  if ( MEMORY[0xAC119C] ) /*0x5e8a2a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC119C]); /*0x5e8a2d*/
    MEMORY[0xAC119C] = 0; /*0x5e8a35*/
  }
  if ( MEMORY[0xAC11A0] ) /*0x5e8a42*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A0]); /*0x5e8a45*/
    MEMORY[0xAC11A0] = 0; /*0x5e8a4d*/
  }
  if ( MEMORY[0xAC11A4] ) /*0x5e8a5a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A4]); /*0x5e8a5d*/
    MEMORY[0xAC11A4] = 0; /*0x5e8a65*/
  }
  if ( MEMORY[0xAC11A8] ) /*0x5e8a72*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11A8]); /*0x5e8a75*/
    MEMORY[0xAC11A8] = 0; /*0x5e8a7d*/
  }
  if ( MEMORY[0xAC11AC] ) /*0x5e8a8a*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11AC]); /*0x5e8a8d*/
    MEMORY[0xAC11AC] = 0; /*0x5e8a95*/
  }
  if ( MEMORY[0xAC11B0] ) /*0x5e8aa2*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC11B0]); /*0x5e8aa5*/
    MEMORY[0xAC11B0] = 0; /*0x5e8aad*/
  }
  if ( MEMORY[0xAC11B4] ) /*0x5e8aba*/
  {
    __3_YAXPAX_Z((void *)MEMORY[0xAC11B4]); /*0x5e8abd*/
    MEMORY[0xAC11B4] = 0; /*0x5e8ac5*/
  }
  return PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5e8ad0*/
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

// 0x72B230
namespace gamemd {
void sub_72B230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72B230()
{
  if ( MEMORY[0xB0FB6C] ) /*0x72b23a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB6C]); /*0x72b23d*/
    MEMORY[0xB0FB6C] = 0; /*0x72b245*/
  }
  if ( MEMORY[0xB0FB70] ) /*0x72b253*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB70])(MEMORY[0xB0FB70], 3); /*0x72b259*/
    MEMORY[0xB0FB70] = 0; /*0x72b25b*/
  }
  if ( MEMORY[0xB0FB64] ) /*0x72b268*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB64]); /*0x72b26b*/
    MEMORY[0xB0FB64] = 0; /*0x72b273*/
  }
  if ( MEMORY[0xB0FB68] ) /*0x72b281*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB68])(MEMORY[0xB0FB68], 3); /*0x72b287*/
    MEMORY[0xB0FB68] = 0; /*0x72b289*/
  }
  if ( MEMORY[0xB0FB5C] ) /*0x72b296*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB5C]); /*0x72b299*/
    MEMORY[0xB0FB5C] = 0; /*0x72b2a1*/
  }
  if ( MEMORY[0xB0FB60] ) /*0x72b2af*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB60])(MEMORY[0xB0FB60], 3); /*0x72b2b5*/
    MEMORY[0xB0FB60] = 0; /*0x72b2b7*/
  }
  if ( MEMORY[0xB0FB74] ) /*0x72b2c4*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB74]); /*0x72b2c7*/
    MEMORY[0xB0FB74] = 0; /*0x72b2cf*/
  }
  if ( MEMORY[0xB0FB78] ) /*0x72b2dd*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB78])(MEMORY[0xB0FB78], 3); /*0x72b2e3*/
    MEMORY[0xB0FB78] = 0; /*0x72b2e5*/
  }
}
}
} // namespace gamemd
