// E4 materialized pending bodies (auto-generated from full_export v3)
// G57a1: e4-universe marker battery (this TU pulls core/utility_ext.hpp before e4_globals.hpp)

// G57c1: battery extension -- utility_ext twins that collide with e4 flat carriers / TU-local defs (C2011 family)
#ifndef GAMEMD_E4_AllocCallback
#define GAMEMD_E4_AllocCallback 1
#endif
#ifndef GAMEMD_E4_COM
#define GAMEMD_E4_COM 1
#endif
#ifndef GAMEMD_E4_COMClass
#define GAMEMD_E4_COMClass 1
#endif
#ifndef GAMEMD_E4_COMObject
#define GAMEMD_E4_COMObject 1
#endif
#ifndef GAMEMD_E4_Config
#define GAMEMD_E4_Config 1
#endif
#ifndef GAMEMD_E4_Delegate
#define GAMEMD_E4_Delegate 1
#endif
#ifndef GAMEMD_E4_EnumConnectionPointsClass
#define GAMEMD_E4_EnumConnectionPointsClass 1
#endif
#ifndef GAMEMD_E4_EnumConnectionsClass
#define GAMEMD_E4_EnumConnectionsClass 1
#endif
#ifndef GAMEMD_E4_EventQueue
#define GAMEMD_E4_EventQueue 1
#endif
#ifndef GAMEMD_E4_Event_Dispatch
#define GAMEMD_E4_Event_Dispatch 1
#endif
#ifndef GAMEMD_E4_Float
#define GAMEMD_E4_Float 1
#endif
#ifndef GAMEMD_E4_Float4
#define GAMEMD_E4_Float4 1
#endif
#ifndef GAMEMD_E4_GraphicMenuAnimItem
#define GAMEMD_E4_GraphicMenuAnimItem 1
#endif
#ifndef GAMEMD_E4_GraphicMenuItem
#define GAMEMD_E4_GraphicMenuItem 1
#endif
#ifndef GAMEMD_E4_Hash
#define GAMEMD_E4_Hash 1
#endif
#ifndef GAMEMD_E4_Helper
#define GAMEMD_E4_Helper 1
#endif
#ifndef GAMEMD_E4_LoadGame
#define GAMEMD_E4_LoadGame 1
#endif
#ifndef GAMEMD_E4_Main
#define GAMEMD_E4_Main 1
#endif
#ifndef GAMEMD_E4_MoveFeedback
#define GAMEMD_E4_MoveFeedback 1
#endif
#ifndef GAMEMD_E4_Player
#define GAMEMD_E4_Player 1
#endif
#ifndef GAMEMD_E4_PlayerClass
#define GAMEMD_E4_PlayerClass 1
#endif
#ifndef GAMEMD_E4_Process
#define GAMEMD_E4_Process 1
#endif
#ifndef GAMEMD_E4_PtrVector
#define GAMEMD_E4_PtrVector 1
#endif
#ifndef GAMEMD_E4_Queue
#define GAMEMD_E4_Queue 1
#endif
#ifndef GAMEMD_E4_Rect
#define GAMEMD_E4_Rect 1
#endif
#ifndef GAMEMD_E4_Rect_Point
#define GAMEMD_E4_Rect_Point 1
#endif
#ifndef GAMEMD_E4_RefCount
#define GAMEMD_E4_RefCount 1
#endif
#ifndef GAMEMD_E4_Return
#define GAMEMD_E4_Return 1
#endif
#ifndef GAMEMD_E4_SHA1
#define GAMEMD_E4_SHA1 1
#endif
#ifndef GAMEMD_E4_Selection
#define GAMEMD_E4_Selection 1
#endif
#ifndef GAMEMD_E4_Settings
#define GAMEMD_E4_Settings 1
#endif
#ifndef GAMEMD_E4_StringList
#define GAMEMD_E4_StringList 1
#endif
#ifndef GAMEMD_E4_Struct
#define GAMEMD_E4_Struct 1
#endif
#ifndef GAMEMD_E4_Time
#define GAMEMD_E4_Time 1
#endif
#ifndef GAMEMD_E4_Type
#define GAMEMD_E4_Type 1
#endif
#ifndef GAMEMD_E4_Value
#define GAMEMD_E4_Value 1
#endif
#ifndef GAMEMD_E4_Vector2
#define GAMEMD_E4_Vector2 1
#endif
#ifndef GAMEMD_E4_Vector3
#define GAMEMD_E4_Vector3 1
#endif
#ifndef GAMEMD_E4_VectorCursor
#define GAMEMD_E4_VectorCursor 1
#endif
#ifndef GAMEMD_E4_WinMain
#define GAMEMD_E4_WinMain 1
#endif
#ifndef GAMEMD_E4_unknown
#define GAMEMD_E4_unknown 1
#endif

#ifndef GAMEMD_E4_UNIVERSE
#define GAMEMD_E4_UNIVERSE 1
#endif
#ifndef GAMEMD_E4_HashTable
#define GAMEMD_E4_HashTable 1
#endif
#ifndef GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint
#define GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint 1
#endif
#ifndef GAMEMD_E4_Buffer
#define GAMEMD_E4_Buffer 1
#endif
#ifndef GAMEMD_E4_ComPtr
#define GAMEMD_E4_ComPtr 1
#endif
#ifndef GAMEMD_E4_Random
#define GAMEMD_E4_Random 1
#endif
#ifndef GAMEMD_E4_Compare
#define GAMEMD_E4_Compare 1
#endif
#ifndef GAMEMD_E4_Flag
#define GAMEMD_E4_Flag 1
#endif
#ifndef GAMEMD_E4_StringVector
#define GAMEMD_E4_StringVector 1
#endif
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/GaugeClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_5E93F0_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/BuildingLightQueue_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/GameOptions_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/ProgressAnim_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/SuperWeapon_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DynamicArray_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/Coord_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VtableStub_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Mixer_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RadarClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ScenarioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/GameState_e4.hpp"  // G42.36 C2027 supply
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int ConvertWrapper(...); }
namespace gamemd { int setOverlayType(...); }
namespace gamemd { int ValidateName(...); }
namespace gamemd { int ComputeCRC(...); }
namespace gamemd { int SetDigest(...); }
namespace gamemd { int DecrementAll(...); }
namespace gamemd { int Pump(...); }
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int nullsub_158(...);  // raw 007236D0: void nullsub_158()
} // namespace gamemd

// 0x430980
namespace gamemd {
void Game::initScenario(void *a1_1)
{

  Game *v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *(unsigned int *)&this->__pad_44[28] ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *(unsigned int *)v2->__pad_0 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*(void **)v2->__pad_0); /*0x4309a0*/
          *(unsigned int *)v2->__pad_0 = 0; /*0x4309a8*/
        }
        v2 = (Game *)((char *)v2 + 4); /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(unsigned int *)&this->__pad_44[28] = 0; /*0x4309b9*/
  }

}
}
// 0x46D4A0
namespace gamemd {
int Game::SendCampaignOptions()
{

  int result; // eax
  int i; // esi
  int v2; // ecx
  int Option; // eax
  int v4; // ecx
  int PlayerSide; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t **v12; // esi
  int v13; // [esp+8h] [ebp-1C8h] BYREF
  char v14[452]; // [esp+Ch] [ebp-1C4h] BYREF

  v13 = 50; /*0x46d4bc*/
  strcpy( (char *)(v14), (const char *)(unk_A8B380)); /*0x46d4cd*/
  result = ((gamemd::Settings *)this)->CheckString(); /*0x46d4d6*/
  if ( (unsigned char)result )
  {
    Debug::Log("Sending Campaign Options...\n"); /*0x46d4e8 G57c1: IDA 0x46d4e8 push offset aSendingCampaig*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&dword_A8DA90 + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(unsigned int *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(unsigned int *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(unsigned int *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = ((SessionClass *)(v2))->GetOption(); /*0x46d517*/
        v4 = *(&dword_A8DA90 + i); /*0x46d51c*/
        *(unsigned int *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = ((SessionClass *)(v4))->GetPlayerSide(); /*0x46d527*/
        v6 = *(&dword_A8DA90 + i); /*0x46d52c*/
        *(unsigned int *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(unsigned int *)&v14[4 * i + 108] = ((SessionClass *)(v6))->GetPlayerColor(); /*0x46d53c*/
      }
      v7 = ToWideStringChar((IUnknown *)((char *)*(&dword_A8DA90 + i))); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(unsigned int *)&v14[4 * i + 44],
        *(unsigned int *)&v14[4 * i + 76],
        *(unsigned int *)&v14[4 * i + 108]);
      v8 = (int)(MEMORY[0xA8B2BC + i]);
      v9 = (int)(MEMORY[0xA8B27C + i]);
      *(unsigned int *)&v14[4 * i + 140] = MEMORY[0xA8B29C + i]; /*0x46d596*/
      v10 = MEMORY[0xA8B2DC + i]; /*0x46d59d*/
      *(unsigned int *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(unsigned int *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(unsigned int *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = MEMORY[0xA8B2FC + i]; /*0x46d5b9*/
      *(unsigned int *)&v14[4 * i + 268] = v11; /*0x46d5c0*/
      result = Debug::Log(
                 "AI %i: Difficulty %i, Country %i, Color %i, Start %i, Ally %i\n",
                 i,
                 *(unsigned int *)&v14[4 * i + 204],
                 *(unsigned int *)&v14[4 * i + 140],
                 *(unsigned int *)&v14[4 * i + 172],
                 *(unsigned int *)&v14[4 * i + 236],
                 v11);
    }
    v12 = (wchar_t **)&unk_A8DA94; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (unsigned char)result ) /*0x46d612*/
        {
          ((Network *)((int)unk_A8E9C0))->SendToPlayer((int)((Network *)((int)unk_A8E9C0)), (int)&v13, 455, (wchar_t *)(1), *v12); /*0x46d628*/
          result = (int)(((Network *)(unk_A8E9C0))->ReceiveLoop()); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&dword_A8DAB0 ); /*0x46d640*/
  }
  return result; /*0x46d642*/

}
}
// 0x534450
namespace gamemd {
AbstractClass * * Game::DestroyAllObjects()
{

  size_t i; // eax
  int v1; // ecx
  void *v2; // esi
  Game *v3; // ecx
  ObjectClass *v5; // [esp+0h] [ebp-4h]
  ObjectClass *v6; // [esp+0h] [ebp-4h]
  ObjectClass *v7; // [esp+0h] [ebp-4h]
  ObjectClass *v8; // [esp+0h] [ebp-4h]
  ObjectClass *v9; // [esp+0h] [ebp-4h]
  ObjectClass *v10; // [esp+0h] [ebp-4h]
  ObjectClass *v11; // [esp+0h] [ebp-4h]
  ObjectClass *v12; // [esp+0h] [ebp-4h]
  ObjectClass *v13; // [esp+0h] [ebp-4h]
  ObjectClass *v14; // [esp+0h] [ebp-4h]
  ObjectClass *v15; // [esp+0h] [ebp-4h]
  ObjectClass *v16; // [esp+0h] [ebp-4h]
  ObjectClass *v17; // [esp+0h] [ebp-4h]
  ObjectClass *v18; // [esp+0h] [ebp-4h]
  ObjectClass *v19; // [esp+0h] [ebp-4h]
  ObjectClass *v20; // [esp+0h] [ebp-4h]
  ObjectClass *v21; // [esp+0h] [ebp-4h]
  ObjectClass *v22; // [esp+0h] [ebp-4h]
  ObjectClass *v23; // [esp+0h] [ebp-4h]
  ObjectClass *v24; // [esp+0h] [ebp-4h]
  ObjectClass *v25; // [esp+0h] [ebp-4h]
  ObjectClass *v26; // [esp+0h] [ebp-4h]
  ObjectClass *v27; // [esp+0h] [ebp-4h]
  ObjectClass *v28; // [esp+0h] [ebp-4h]
  ObjectClass *v29; // [esp+0h] [ebp-4h]
  ObjectClass *v30; // [esp+0h] [ebp-4h]
  ObjectClass *v31; // [esp+0h] [ebp-4h]
  ObjectClass *v32; // [esp+0h] [ebp-4h]
  ObjectClass *v33; // [esp+0h] [ebp-4h]
  ObjectClass *v34; // [esp+0h] [ebp-4h]
  TechnoClass *v35; // [esp+0h] [ebp-4h]
  ObjectClass *v36; // [esp+0h] [ebp-4h]
  ObjectClass *v37; // [esp+0h] [ebp-4h]
  ObjectClass *v38; // [esp+0h] [ebp-4h]

  ++dword_A8E7AC; /*0x53445f*/
  stru_B0F698.Count = 0; /*0x534465*/
  ((AbstractClassVector *)((int)&stru_B0F698))->ddtor(); /*0x53446b*/
  ((gamemd::MixFileClass *)this)->CleanupCache(); /*0x534470*/
  for ( i = dword_B0E844; dword_B0E844; i = dword_B0E844 ) /*0x53447c*/
  {
    if ( !byte_B0E84C ) /*0x534484*/
    {
      qsort( /*0x534494*/
        (void *)g_BuildingLoadQueue_Array.vtable0,
        i,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      dword_B0E850 = 0; /*0x53449c*/
      byte_B0E84C = 1; /*0x5344a2*/
    }
    v1 = *(unsigned int *)(g_BuildingLoadQueue_Array.vtable0 + 4); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (**)(int, int))(*(unsigned int *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(v5); /*0x5344c6*/
  while ( dword_A8ED50 ) /*0x5344d1*/
    (*(void (**)(unsigned int))(**(unsigned int **)dword_A8ED44 + 8))(*(unsigned int *)dword_A8ED44); /*0x5344dd*/
  ProcessExpiredPointers(v6); /*0x5344e8*/
  while ( dword_A8E370 ) /*0x5344f3*/
  {
    if ( *(unsigned int *)dword_A8E364 ) /*0x5344fb*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E364 + 32))(*(unsigned int *)dword_A8E364, 1); /*0x534505*/
  }
  ProcessExpiredPointers(v7); /*0x534510*/
  while ( g_GameObjectCleanup ) /*0x53451b*/
  {
    if ( *(unsigned int *)g_TagClassCount ) /*0x534523*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)g_TagClassCount + 32))(*(unsigned int *)g_TagClassCount, 1); /*0x53452d*/
  }
  ProcessExpiredPointers(v8); /*0x534538*/
  while ( dword_A8EAF8 ) /*0x534543*/
  {
    if ( *(unsigned int *)dword_A8EAEC ) /*0x53454a*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EAEC + 32))(*(unsigned int *)dword_A8EAEC, 1); /*0x534554*/
  }
  ProcessExpiredPointers(v9); /*0x53455f*/
  while ( dword_8B4148 ) /*0x53456a*/
  {
    if ( *(unsigned int *)dword_8B413C ) /*0x534571*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B413C + 32))(*(unsigned int *)dword_8B413C, 1); /*0x53457b*/
  }
  ProcessExpiredPointers(v10); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(unsigned int *)dword_8B4194 ) /*0x534598*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B4194 + 32))(*(unsigned int *)dword_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(v11); /*0x5345ad*/
  while ( dword_A8EC60 ) /*0x5345b8*/
  {
    if ( *(unsigned int *)dword_A8EC54 ) /*0x5345bf*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EC54 + 32))(*(unsigned int *)dword_A8EC54, 1); /*0x5345c9*/
  }
  ProcessExpiredPointers(v12); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(unsigned int *)dword_A8020C ) /*0x5345e6*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8020C + 32))(*(unsigned int *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(v13); /*0x5345fb*/
  while ( dword_A8EC48 ) /*0x534606*/
  {
    if ( *(unsigned int *)dword_A8EC3C ) /*0x53460d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EC3C + 32))(*(unsigned int *)dword_A8EC3C, 1); /*0x534617*/
  }
  ProcessExpiredPointers(v14); /*0x534622*/
  while ( dword_A83E40 ) /*0x53462d*/
  {
    if ( *(unsigned int *)dword_A83E34 ) /*0x534634*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A83E34 + 32))(*(unsigned int *)dword_A83E34, 1); /*0x53463e*/
  }
  ProcessExpiredPointers(v15); /*0x534649*/
  while ( dword_8B4130 ) /*0x534654*/
  {
    if ( *(unsigned int *)dword_8B4124 ) /*0x53465b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B4124 + 32))(*(unsigned int *)dword_8B4124, 1); /*0x534665*/
  }
  ProcessExpiredPointers(v16); /*0x534670*/
  while ( dword_8B40F8 ) /*0x53467b*/
  {
    if ( *(unsigned int *)dword_8B40EC ) /*0x534682*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B40EC + 32))(*(unsigned int *)dword_8B40EC, 1); /*0x53468c*/
  }
  ProcessExpiredPointers(v17); /*0x534697*/
  while ( dword_A80238 ) /*0x5346a2*/
  {
    if ( dword_A8022C->vtable1 ) /*0x5346a9*/
      (*(void (**)(int, int))(*(unsigned int *)dword_A8022C->vtable1 + 32))(dword_A8022C->vtable1, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(v18); /*0x5346be*/
  while ( dword_A8E9B8 ) /*0x5346c9*/
  {
    if ( *(unsigned int *)dword_A8E9AC ) /*0x5346d0*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E9AC + 32))(*(unsigned int *)dword_A8E9AC, 1); /*0x5346da*/
  }
  ProcessExpiredPointers(v19); /*0x5346e5*/
  while ( dword_8872C0 ) /*0x5346f0*/
  {
    if ( *(unsigned int *)dword_8872B4 ) /*0x5346f7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8872B4 + 32))(*(unsigned int *)dword_8872B4, 1); /*0x534701*/
  }
  ProcessExpiredPointers(v20); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(unsigned int *)dword_B04BD4 ) /*0x53471e*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B04BD4 + 32))(*(unsigned int *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(v21); /*0x534733*/
  while ( dword_ABCA20 ) /*0x53473e*/
  {
    if ( *(unsigned int *)dword_ABCA14 ) /*0x534745*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_ABCA14 + 32))(*(unsigned int *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(v22); /*0x53475a*/
  while ( dword_8A3880 ) /*0x534765*/
  {
    if ( *(unsigned int *)dword_8A3874 ) /*0x53476c*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A3874 + 32))(*(unsigned int *)dword_8A3874, 1); /*0x534776*/
  }
  ProcessExpiredPointers(v23); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(unsigned int *)dword_89E0F4 ) /*0x534793*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_89E0F4 + 32))(*(unsigned int *)dword_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(v24); /*0x5347a8*/
  while ( dword_8A0218 ) /*0x5347b3*/
  {
    if ( *(unsigned int *)dword_8A020C ) /*0x5347ba*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A020C + 32))(*(unsigned int *)dword_8A020C, 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(v25); /*0x5347cf*/
  while ( dword_AC4920 ) /*0x5347da*/
  {
    if ( *(unsigned int *)dword_AC4914 ) /*0x5347e1*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_AC4914 + 32))(*(unsigned int *)dword_AC4914, 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(v26); /*0x5347f6*/
  while ( dword_B0EC70 ) /*0x534801*/
  {
    if ( *(unsigned int *)dword_B0EC64 ) /*0x534808*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B0EC64 + 32))(*(unsigned int *)dword_B0EC64, 1); /*0x534812*/
  }
  ProcessExpiredPointers(v27); /*0x53481d*/
  while ( dword_889FC8 ) /*0x534828*/
  {
    if ( *(unsigned int *)dword_889FBC ) /*0x53482f*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_889FBC + 32))(*(unsigned int *)dword_889FBC, 1); /*0x534839*/
  }
  ProcessExpiredPointers(v28); /*0x534844*/
  while ( dword_B0B890 ) /*0x53484f*/
  {
    if ( *(unsigned int *)dword_B0B884 ) /*0x534856*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B0B884 + 32))(*(unsigned int *)dword_B0B884, 1); /*0x534860*/
  }
  ProcessExpiredPointers(v29); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(unsigned int *)dword_89C66C ) /*0x53487d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_89C66C + 32))(*(unsigned int *)dword_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(v30); /*0x534892*/
  while ( dword_AC1688 ) /*0x53489d*/
  {
    v2 = *(void **)dword_AC167C; /*0x5348a5*/
    if ( *(unsigned int *)dword_AC167C ) /*0x5348a5*/
    {
      ((BuildingLightQueue*)*(BuildingLightQueue **)dword_AC167C)->RemoveEntry(); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(v31); /*0x5348c4*/
  while ( g_FootClassConfig ) /*0x5348cf*/
  {
    if ( *(unsigned int *)dword_8B3D14 ) /*0x5348d7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B3D14 + 32))(*(unsigned int *)dword_8B3D14, 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(v32); /*0x5348ec*/
  while ( g_AlphaShapeLimit ) /*0x5348f7*/
  {
    if ( *(unsigned int *)dword_88A0F4 ) /*0x5348fe*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_88A0F4 + 32))(*(unsigned int *)dword_88A0F4, 1); /*0x534908*/
  }
  ProcessExpiredPointers(v33); /*0x534913*/
  while ( dword_A8E998 ) /*0x53491e*/
  {
    if ( *(unsigned int *)dword_A8E98C ) /*0x534925*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E98C + 32))(*(unsigned int *)dword_A8E98C, 1); /*0x53492f*/
  }
  ProcessExpiredPointers(v34); /*0x53493a*/
  sub_4C29E0( (void *)(v35)); /*0x53493f*/
  Game_Destroy(v36); /*0x534944*/
  Game::loadCampaignData( (void *)(v3)); /*0x534949*/
  while ( dword_A8E978 ) /*0x534954*/
  {
    if ( *(unsigned int *)dword_A8E96C ) /*0x53495b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E96C + 32))(*(unsigned int *)dword_A8E96C, 1); /*0x534965*/
  }
  ProcessExpiredPointers(v37); /*0x534970*/
  if ( g_TacticalClass_Instance ) /*0x53497d*/
    (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)&((TacticalMap *)g_TacticalClass_Instance)->q_80))(  /*0x534983*/
      g_TacticalClass_Instance,
      1);
  g_TacticalClass_Instance = 0; /*0x53498b*/
  ((MapClass*)(MapClass *)&dword_87F7E8)->FreeAllCells(); /*0x534991*/
  ProcessExpiredPointers(v38); /*0x534996*/
  Game::initScenario(  (Game *)&g_VisibilitySystem); /*0x5349a0*/
  return (gamemd::AbstractClass **)(--dword_A8E7AC); /*0x5349ab*/

}
}
// 0x537BC0
namespace gamemd {
int Game::MakeScreenshot(int a1)
{

  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  unsigned int *v7; // eax
  char v8; // bl
  struct tagPOINT Point; // [esp+4h] [ebp-198h] BYREF
  struct tagPOINT v10; // [esp+Ch] [ebp-190h] BYREF
  int v11; // [esp+14h] [ebp-188h]
  int v12; // [esp+18h] [ebp-184h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-180h] BYREF
  struct tagPOINT v14; // [esp+2Ch] [ebp-170h] BYREF
  unsigned int v15[4]; // [esp+34h] [ebp-168h] BYREF
  CCFileClass v16; // [esp+44h] [ebp-158h] BYREF
  int v17[3]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  CCFileClass v19; // [esp+B0h] [ebp-ECh] BYREF
  int v20[3]; // [esp+108h] [ebp-94h] BYREF
  int v21; // [esp+114h] [ebp-88h]
  char Buffer[128]; // [esp+11Ch] [ebp-80h] BYREF

  result = GetClientRect((HWND)(g_hWnd), &Rect); /*0x537bd3*/
  if ( result ) /*0x537bdb*/
  {
    Point.x = Rect.left; /*0x537bef*/
    Point.y = Rect.top; /*0x537bff*/
    result = ClientToScreen((HWND)(g_hWnd), &Point); /*0x537c03*/
    if ( result ) /*0x537c07*/
    {
      v14 = *(struct tagPOINT *)&Rect.right; /*0x537c15*/
      result = ClientToScreen((HWND)(g_hWnd), &v14); /*0x537c28*/
      if ( result ) /*0x537c2c*/
      {
        v10 = Point; /*0x537c3e*/
        v12 = Rect.bottom + 1; /*0x537c4c*/
        v11 = Rect.right + 1; /*0x537c56*/
        v2 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 31))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 31))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537c70*/
        v3 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 32))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 32))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537c96*/
        (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q030))(dword_887640);  /*0x537ca4*/
        v4 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 31))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537cb8*/
        v5 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 32))( (ObjectClass *)(g_DSurface_Hidden)); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
(*((void (**)(ObjectClass *, unsigned int *, DSurface *, struct tagPOINT *, unsigned int, int))g_DSurface_Hidden->AbstractClass /*0x537cf0*/ + 2))( (ObjectClass *)(g_DSurface_Hidden), (unsigned int *)(v15), (DSurface *)(g_DSurface_Primary), (struct tagPOINT *)(&v10), 0, 1);







        (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q040))(dword_887640);  /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, "SCRN%04d.pcx", ++v6); /*0x537d10*/
          v7 = (unsigned int *)((CCFileClass*)&v19)->Construct( (char *)(Buffer)); /*0x537d27*/
          v8 = (unsigned int)((*(int (**)(unsigned int *, unsigned int))(*v7 + 20))( (unsigned int *)(v7), 0)); /*0x537d3b*/
          *(unsigned int *)v19.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          ((Vector *)((int)v20))->Clear((int)((Vector *)((int)v20))); /*0x537d4f*/
          *(unsigned int *)v19.CDFileClass = (unsigned int)(&off_7E1668); /*0x537d5b*/
          ((BufferIOFileClass *)((BufferIOFileClass *)&v19))->Dtor(); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        ((CCFileClass*)&v16)->Construct( (char *)(Buffer)); /*0x537d7b*/
        CompressScreenshot( (int *)v16.CDFileClass, (int *)g_DSurface_Hidden, (void *)(&FileSystem_TEMPERAT_PAL)); /*0x537d8f*/
        *(unsigned int *)v16.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        ((Vector *)((int)v17))->Clear((int)((Vector *)((int)v17))); /*0x537daa*/
        *(unsigned int *)v16.CDFileClass = (unsigned int)(&off_7E1668); /*0x537db3*/
        return ((BufferIOFileClass *)((BufferIOFileClass *)&v16))->Dtor(); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/

}
}
// 0x5B7090
namespace gamemd {
HashTable_flat * * Game::StartModemMultiplayer(ObjectClass *a2, char a3)
{

  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // edx

  if ( a3 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  ((Game *)((Game *)this))->processStartup(); /*0x5b70a7*/
  dword_A8B54C = 0; /*0x5b70b1*/
  v5 = (int)(__2_YAPAXI_Z(0x85u)); /*0x5b70bb*/
  v6 = v5; /*0x5b70c0*/
  if ( v5 ) /*0x5b70ca*/
  {
    ((Waypoint*)((Waypoint *)(v5 + 40)))->InitInvalid(); /*0x5b70d3*/
    BulkCharToWide((unsigned short *)v6, (uint8_t *)unk_A8B380, -1); /*0x5b70e0*/
    *(unsigned int *)(v6 + 75) = dword_A8B3AC; /*0x5b70ea*/
    *(unsigned int *)(v6 + 83) = dword_A8B394; /*0x5b70f3*/
    *(unsigned int *)(v6 + 115) = -1; /*0x5b70f6*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b7130*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
&& (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))( (PtrVector *)(&stru_A8DA74), dword_A8DA7C + dword_A8DA88, 0) )



    {
      v7 = dword_A8DA84++; /*0x5b713d*/
      ((unsigned int *)dword_A8DA78)[v7] = v6; /*0x5b714c*/
    }
    ++dword_A8B54C; /*0x5b714f*/
  }
  v8 = (int)(__2_YAPAXI_Z(0x85u)); /*0x5b715a*/
  v9 = v8; /*0x5b715f*/
  if ( v8 ) /*0x5b7166*/
  {
    ((Waypoint*)((Waypoint *)(v8 + 40)))->InitInvalid(); /*0x5b716f*/
    wcscpy((wchar_t *)v9, (const wchar_t *)(this + 32)); /*0x5b7179*/
    *(unsigned int *)(v9 + 75) = *(unsigned int *)(this + 76); /*0x5b7184*/
    *(unsigned int *)(v9 + 83) = *(unsigned int *)(this + 72); /*0x5b718a*/
    *(unsigned int *)(v9 + 115) = -1; /*0x5b718d*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b71c7*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
&& (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))( (PtrVector *)(&stru_A8DA74), dword_A8DA7C + dword_A8DA88, 0) )



    {
      v10 = dword_A8DA84++; /*0x5b71d4*/
      ((unsigned int *)dword_A8DA78)[v10] = v9; /*0x5b71e3*/
    }
    ++dword_A8B54C; /*0x5b71e6*/
  }
  if ( dword_A8B54C != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF((wchar_t *)((char *)&stru_82BA00 + 4), 0, (const char *)((char *)&stru_82BA00 + 40), 1779); /*0x5b7211*/
  MessageBox = (Dialog *)CreateMessageBox( (LPARAM)((LPARAM)((LPARAM)StringCSF)), 0, 0); /*0x5b721a*/
  v13 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    ((Dialog *)(MessageBox))->Show(); /*0x5b7227*/
  v14 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b7231*/
  if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7239*/
    v14 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !((Count *)((Count *)&unk_A8EA70))->GetCountQueue() ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v15 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b7260*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7268*/
      v15 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b727a*/
    if ( (unsigned int)(v15 - v14) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v16 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b728b*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7293*/
        v16 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b72a5*/
      if ( (unsigned int)(v16 - v14) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5b72bd*/
  }
  if ( v13 ) /*0x5b72c6*/
    ((Dialog *)v13)->Destroy(); /*0x5b72ca*/
  ((EventClass *)((EventClass *)&unk_A8EA70))->CheckFlag(); /*0x5b72d4*/
  BYTE2(stru_A8D600.q00C) = 0; /*0x5b72e4*/
  ((AbstractClass *)dword_A8B230)[130].vtable3 = *(void **)&((unsigned char *)&stru_A8B250)[4]; /*0x5b72eb*/
  dword_A8B54C = dword_A8DA84; /*0x5b730b*/
  v17 = (&dword_A8E960)[0]; /*0x5b7311*/
  BYTE1(v17) = BYTE1((&dword_A8E960)[0]) & 0x77; /*0x5b7319*/
  v18 = v17 | ((byte_A8B31D & 1 | (16 * (((unsigned char *)&stru_A8B250)[16] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v18) = LOBYTE((&dword_A8E960)[0]) | 0xC0; /*0x5b7326*/
  *(unsigned int *)((char *)&stru_A8EB00 + 416) = 0; /*0x5b7329*/
  dword_A8B24C = 2; /*0x5b7333*/
  (&dword_A8E960)[0] = v18; /*0x5b733d*/
  nullsub_37(); /*0x5b7343*/
  return (gamemd::HashTable_flat **)(1); /*0x5b709d*/

}
}
// 0x5BA660
namespace gamemd {
AbstractClass * * Game::BuildGameSetupPacket()
{

  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int Field3; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  int v11[62]; // [esp+8h] [ebp-168h] BYREF
  int16_t v12; // [esp+100h] [ebp-70h]
  CCFileClass v13; // [esp+104h] [ebp-6Ch] BYREF
  int v14[3]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log("Sending game options packet\n"); /*0x5ba66f G57c1: IDA 0x5ba66f push offset aSendingGameOpt*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(unsigned int *)&this->__pad_44[20]; /*0x5ba696*/
  memset( (void *)(v11), 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(unsigned int *)&this->__pad_44[16]; /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(unsigned int *)&this->__pad_44[24]; /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(int *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(int *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(); /*0x5ba6db*/
  Field3 = NetworkBuffer::GetField3(); /*0x5ba6df*/
  *(int *)((char *)&v11[36] + 2) = *(unsigned int *)((char *)&stru_A8EB00 + 432); /*0x5ba6f0*/
  *(int *)((char *)&v11[37] + 2) = (&dword_A8E960)[0]; /*0x5ba6fd*/
  *(int *)((char *)&v11[8] + 2) = Field3; /*0x5ba70a*/
  BYTE2(v11[40]) = ((unsigned char *)&stru_A8B250)[24]; /*0x5ba71b*/
  v7 = *(int *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(int *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                 | (16
                                  * (((unsigned char *)&stru_A8B250)[18] & 1
                                   | (2
                                    * (((unsigned char *)&stru_A8B250)[19] & 1
                                     | (2 * (((unsigned char *)&stru_A8B250)[20] & 1 | (2 * (((unsigned char *)&stru_A8B250)[28] & 1))))))));
  LOBYTE(v11[6]) = dword_A8DB30; /*0x5ba75d*/
  v8 = dword_A8B394; /*0x5ba776*/
  strcpy((char *)&v11[1],(const char *)(unk_A8B380)); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(int *)((char *)&v11[6] + 1) = dword_A8B3AC; /*0x5ba797*/
  *(int *)((char *)&v11[31] + 2) = *(unsigned int *)&((unsigned char *)&stru_A8B250)[12]; /*0x5ba79b*/
  v9 = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFFE | ((unsigned char *)&stru_A8B250)[8] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | ((unsigned char *)&stru_A8B250)[8] & 1; /*0x5ba7cc*/
  *(int *)((char *)&v11[32] + 2) = v9 | (2 * (((unsigned char *)&stru_A8B250)[16] & 1 | (2 * (((unsigned char *)&stru_A8B250)[17] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = ((unsigned char *)&stru_A8B250)[36]; /*0x5ba819*/
  *(int *)((char *)&v11[35] + 2) = *(int *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                 | (4 * (dword_A8B320 & 1)) & 0xF5
                                 | (2 * (byte_A8B31D & 1 | (4 * (byte_A8B31F & 1))));
  BYTE1(v11[35]) = ((unsigned char *)&stru_A8B250)[40]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = ((unsigned char *)&stru_A8B250)[32]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(dword_A8B8CC + 4 * *(unsigned int *)((unsigned char *)&stru_A8B250 + 4))); /*0x5ba85e*/
  ((CCFileClass*)&v13)->Construct((*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&((unsigned char *)&stru_A8B250)[4]) + 88)); /*0x5ba87f*/
  *(int *)((char *)&v11[39] + 2) = CCFileClass::GetSize( &v13); /*0x5ba896*/
  strncpy( /*0x5ba8b3*/
    (char *)&v11[40] + 3,
    (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)((unsigned char *)&stru_A8B250 + 4)) + 88),
    0xDu);
  strncpy( /*0x5ba8d7*/
    (char *)&v11[44],
    (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)((unsigned char *)&stru_A8B250 + 4)) + 348),
    0x20u);
  *(int *)((char *)&v11[32] + 2) = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                 | (16
                                  * (*(unsigned char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&((unsigned char *)&stru_A8B250)[4]) + 380)
                                   & 1));
  ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v11, 250, 1); /*0x5ba91d*/
  *(unsigned int *)v13.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  ((Vector *)((int)v14))->Clear((int)((Vector *)((int)v14))); /*0x5ba93f*/
  *(unsigned int *)v13.CDFileClass = (unsigned int)(&off_7E1668); /*0x5ba94b*/
  return (AbstractClass * *)((BufferIOFileClass *)((BufferIOFileClass *)&v13))->Dtor(); /*0x5ba95b*/

}
}
// 0x5CA110
namespace gamemd {
int Game::GetMultiplayerScoreScreenBar()
{

  void *NeedsSaveOrLink; // eax

 NeedsSaveOrLink = (void *)(((AbstractClass *)dword_A8B230)[374].NeedsSaveOrLink); /*0x5ca115*/
  if ( NeedsSaveOrLink ) /*0x5ca11d*/
  {
    if ( NeedsSaveOrLink == (void *)1 ) /*0x5ca21f*/
    {
      if ( !this ) /*0x5ca227*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B4C), 0); /*0x5ca23b*/
      if ( this == (Game *)1 ) /*0x5ca23f*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B50), 0); /*0x5ca253*/
      if ( this == (Game *)2 ) /*0x5ca257*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B54), 0); /*0x5ca26c*/
      if ( this == (Game *)3 ) /*0x5ca270*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B58), 0); /*0x5ca285*/
      if ( this == (Game *)4 ) /*0x5ca289*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B5C), 0); /*0x5ca29d*/
      if ( this == (Game *)5 ) /*0x5ca2a1*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B60), 0); /*0x5ca2b6*/
      if ( this == (Game *)6 ) /*0x5ca2ba*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B64), 0); /*0x5ca2cf*/
      if ( this == (Game *)7 ) /*0x5ca2d3*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B68), 0); /*0x5ca2e7*/
      if ( this == (Game *)8 ) /*0x5ca2eb*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B6C), 0); /*0x5ca300*/
      if ( this == (Game *)9 ) /*0x5ca304*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B70), 0); /*0x5ca31d*/
    }
    else if ( NeedsSaveOrLink == (void *)2 ) /*0x5ca321*/
    {
      if ( !this ) /*0x5ca329*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B74), 0); /*0x5ca33c*/
      if ( this == (Game *)1 ) /*0x5ca340*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B78), 0); /*0x5ca355*/
      if ( this == (Game *)2 ) /*0x5ca359*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B7C), 0); /*0x5ca36e*/
      if ( this == (Game *)3 ) /*0x5ca372*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B80), 0); /*0x5ca386*/
      if ( this == (Game *)4 ) /*0x5ca38a*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B84), 0); /*0x5ca39f*/
      if ( this == (Game *)5 ) /*0x5ca3a3*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B88), 0); /*0x5ca3b8*/
      if ( this == (Game *)6 ) /*0x5ca3bc*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B8C), 0); /*0x5ca3d0*/
      if ( this == (Game *)7 ) /*0x5ca3d4*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B90), 0); /*0x5ca3e9*/
      if ( this == (Game *)8 ) /*0x5ca3ed*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B94), 0); /*0x5ca402*/
      if ( this == (Game *)9 ) /*0x5ca406*/
        return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B98), 0); /*0x5ca41a*/
    }
  }
  else
  {
    if ( !this ) /*0x5ca125*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B24), 0); /*0x5ca139*/
    if ( this == (Game *)1 ) /*0x5ca13d*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B28), 0); /*0x5ca152*/
    if ( this == (Game *)2 ) /*0x5ca156*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B2C), 0); /*0x5ca16a*/
    if ( this == (Game *)3 ) /*0x5ca16e*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B30), 0); /*0x5ca183*/
    if ( this == (Game *)4 ) /*0x5ca187*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B34), 0); /*0x5ca19c*/
    if ( this == (Game *)5 ) /*0x5ca1a0*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B38), 0); /*0x5ca1b4*/
    if ( this == (Game *)6 ) /*0x5ca1b8*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B3C), 0); /*0x5ca1cd*/
    if ( this == (Game *)7 ) /*0x5ca1d1*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B40), 0); /*0x5ca1e6*/
    if ( this == (Game *)8 ) /*0x5ca1ea*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B44), 0); /*0x5ca1fe*/
    if ( this == (Game *)9 ) /*0x5ca202*/
      return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)(off_844B48), 0); /*0x5ca21b*/
  }
  return 0; /*0x5ca139*/

}
}
// 0x5DBB60
namespace gamemd {
void Game::BuildGameSettingsPacket(char * Buffer)
{

  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int PlayerSideSessionClass; // edi
  int PlayerColorSessionClass; // ebp
  int *v9; // esi
  int v10; // eax
  char *v11; // [esp-20h] [ebp-48h]
  int v12; // [esp-14h] [ebp-3Ch]
  void *v13; // [esp-14h] [ebp-3Ch]
  int v14; // [esp-10h] [ebp-38h]
  int Option2SessionClass; // [esp-10h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-34h]
  void *v17; // [esp+10h] [ebp-18h] BYREF
  void *v18; // [esp+14h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-10h] BYREF
  int OptionSessionClass; // [esp+1Ch] [ebp-Ch] BYREF
  char *v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v21 = Buffer; /*0x5dbb70*/
  v22 = 0; /*0x5dbb74*/
  if ( &dword_A8B320 == (unsigned int *)-2 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = ((String *)((char **)&v19))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x5dbbaa*/
  }
  else
  {
    ((WideString *)((wchar_t **)&v17))->Assign((wchar_t *)&dword_A8B320 + 1); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = (char **)Game_Set(&OptionSessionClass, &v17); /*0x5dbb95*/
  }
  ((String *)((char **)&v18))->AssignFromPtr((const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    j_DeleteAndZero( (void *)((void **)&v19)); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    j_DeleteAndZero( (void *)((void **)&OptionSessionClass)); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    ((DeleteAndZero*)&v17)->Alt(); /*0x5dbbe4*/
  v16 = dword_A8BB04; /*0x5dbc0a*/
  v14 = (uint8_t)dword_A8BB08; /*0x5dbc0b*/
  v12 = dword_A8BB0C; /*0x5dbc0c*/
  v4 = ((String *)((char **)&v18))->GetOrEmpty(); /*0x5dbc11*/
  sprintf( /*0x5dbc7e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(unsigned int *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (uint8_t)MEMORY[0xA8B262],
    (uint8_t)MEMORY[0xA8B263],
    (uint8_t)MEMORY[0xA8B264],
    (uint8_t)dword_A8B320,
    (uint8_t)MEMORY[0xA8B261],
    *(unsigned int *)stru_A8B250,
    dword_A8EB68,
    v4,
    v12,
    v14,
    v16,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset( (void *)(byte_ABFF94), 0, 0x200u); /*0x5dbc92*/
  v5 = 0; /*0x5dbc99*/
  v19 = dword_A8DA84; /*0x5dbc9d*/
  if ( dword_A8DA84 > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(unsigned int *)(dword_A8DA78 + 4 * v5); /*0x5dbca8*/
      PlayerSideSessionClass = ((SessionClass *)(v6))->GetPlayerSide(); /*0x5dbcb4*/
      PlayerColorSessionClass = ((SessionClass *)(v6))->GetPlayerColor(); /*0x5dbcbd*/
      OptionSessionClass = ((SessionClass *)(v6))->GetOption(); /*0x5dbcc6*/
      Option2SessionClass = ((SessionClass *)(v6))->GetOption2(); /*0x5dbce2*/
      v13 = (void *)OptionSessionClass; /*0x5dbce3*/
      v11 = ToWideStringChar( (IUnknown *)(*(char **)(dword_A8DA78 + 4 * v5))); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        &((unsigned char *)&byte_ABFF94)[strlen( (const char *)(byte_ABFF94))],
        "%s,%d,%d,%d,%d,%x,%x,%x,",
        v11,
        PlayerSideSessionClass,
        PlayerColorSessionClass,
        v13,
        Option2SessionClass,
        0,
        0,
        0);
      ++v5; /*0x5dbd13*/
    }
    while ( v5 < v19 ); /*0x5dbd16*/
    v1 = v21; /*0x5dbd18*/
  }
  (&byte_ABFF92)[strlen( (const char *)(byte_ABFF94)) + 1] = 58; /*0x5dbd2f*/
  strcat( (char *)(byte_ABFF94), (const char *)(asc_831340)); /*0x5dbd53*/
  v9 = (int *)(*(int * *)&MEMORY[0xA8B29C]); /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    v10 = *v9; /*0x5dbd61*/
    if ( *v9 == -3 ) /*0x5dbd66*/
      v10 = -1; /*0x5dbd68*/
    sprintf((unsigned char *)&byte_ABFF94 + strlen( (const char *)(byte_ABFF94)), "%d,%d,%d,%d,%d,", *(v9 - 8), v10, v9[8], v9[16], v9[24]); /*0x5dbd97*/
    ++v9; /*0x5dbd9c*/
  }
  while ( (int)v9 < (int)MEMORY[0xA8B2BC] ); /*0x5dbda8*/
  strlen( (const char *)(byte_ABFF94)); /*0x5dbdaf*/
  Debug::Log("Size of options string is %d bytes\n"); /*0x5dbdbf G57c1: IDA 0x5dbdbf push offset aSizeOfOptionsS*/
  Debug::Log("Options: %s\n"); /*0x5dbdce G57c1: IDA 0x5dbdce push offset aOptionsS*/
  strcat( (char *)(v1), (const char *)(byte_ABFF94)); /*0x5dbdf7*/
  j_DeleteAndZero( (void *)(&v18)); /*0x5dbe04*/

}
}
// 0x6579E0
namespace gamemd {
unsigned char Game::ManageGameSpeed()
{

  unsigned int result; // eax
  unsigned char *v3; // ecx
  char v4; // al
  bool v5; // bl
  int v6; // edi
  int *v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int *v10; // eax
  int v11; // edx
  unsigned int *v12; // eax
  bool v13; // zf
  ScenarioClass *v14; // [esp+0h] [ebp-30h]
  char v15; // [esp+12h] [ebp-1Eh]
  uint8_t v16; // [esp+13h] [ebp-1Dh]
  unsigned char *v17; // [esp+14h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned char v19[16]; // [esp+20h] [ebp-10h] BYREF

  v3 = (unsigned char *)(0); /*0x6579ef*/
  v4 = *((unsigned char *)this + 5309); /*0x6579f1*/
  v17 = (unsigned char *)(0); /*0x6579f7*/
  v5 = g_AsyncIOState > 0; /*0x6579fd*/
  v16 = 0; /*0x657a02*/
  if ( !v4 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    result = Audio::IsPlaying(); /*0x657a0c*/
    v3 = v17; /*0x657a11*/
  }
  if ( *((unsigned char *)this + 5338) == 1 && !*((unsigned char *)this + 5309) ) /*0x657a22*/
  {
    v6 = VtableStub::sub_72F510(); /*0x657a35*/
    v18[0] = *((unsigned int *)this + 1145); /*0x657a4d*/
    v18[1] = *((unsigned int *)this + 1147); /*0x657a5f*/
v7 = (int *)(*((int (**)(DSurface *, unsigned char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x657a6a*/ DSurface_Sidebar, (unsigned char *)(v19));


    DrawToSurfaceSHP( (int)DSurface_Sidebar, v6, (ConvertClass *)(dword_B04A38), 0x20u, (ConvertClass *)(v18), (ConvertClass *)(v7), 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v8 = *((unsigned int *)this + 1147); /*0x657a95*/
    *((unsigned int *)this + 1155) = *((unsigned int *)this + 1145); /*0x657aab*/
    *((unsigned int *)this + 1156) = v8; /*0x657aae*/
    *((unsigned int *)this + 1157) = 168; /*0x657ab1*/
    *((unsigned int *)this + 1158) = 110; /*0x657ab4*/
    result = Debug::Log("Radar: Movie full redrawn\n"); /*0x657ab7 G57c1: IDA 0x657ab7 push offset aRadarMovieFull*/
    v3 = v17; /*0x657abc*/
  }
  if ( !v5 ) /*0x657ac5*/
  {
    v15 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  result = g_AsyncIOState; /*0x657acb*/
  if ( g_AsyncIOState <= 0 || (v3 = *(unsigned char **)AsyncIO_Instance, (v17 = *(unsigned char **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v15 = 1; /*0x657cb4*/
LABEL_13:
    if ( v3 ) /*0x657b40*/
    {
      result = (*(int (**)(int *, unsigned char **))(dword_B45B58 + 16))( (int *)(&dword_B45B58), (unsigned char **)(&v17)); /*0x657b52*/
      if ( result != -1 && (int)result < g_AsyncIOState && (int)result < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++result; /*0x657b75*/
          *((unsigned int *)AsyncIO_Instance + result - 1) = *((unsigned int *)AsyncIO_Instance + result); /*0x657b79*/
        }
        while ( (int)result < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v17 ) /*0x657b8d*/
        result = (**(int (***)(unsigned char *, int))v17)(v17, 1); /*0x657b93*/
    }
    v5 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log("Radar: Next movie.\n"); /*0x657ba9 G57c1: IDA 0x657ba9 push offset aRadarNextMovie*/
      ((Mixer*)((Mixer *)this + 1328))->ReleaseChannel(); /*0x657bb9*/
      v10 = (unsigned int *)PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1784), 0x2000, 1.0, 0); /*0x657bd8*/
      result = SetAudioSource( (AudioMixer *)((int)(unsigned int *)this + 5312), (unsigned int *)(v10), 0); /*0x657be1*/
      *((unsigned int *)this + 1323) = 4; /*0x657be6*/
      *((unsigned int *)this + 1343) = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(uint8_t (**)(unsigned char *))(*(unsigned int *)v3 + 4))( (unsigned char *)(v3)) == 1 ) /*0x657af3*/
  {
    v9 = *((unsigned int *)this + 1147); /*0x657b01*/
    *((unsigned int *)this + 1155) = *((unsigned int *)this + 1145); /*0x657b12*/
    *((unsigned int *)this + 1156) = v9; /*0x657b15*/
    *((unsigned int *)this + 1157) = 168; /*0x657b18*/
    *((unsigned int *)this + 1158) = 110; /*0x657b1b*/
  }
  result = (*(int (**)(unsigned char *))(*(unsigned int *)v17 + 20))( (unsigned char *)(v17)); /*0x657b24*/
  v3 = v17; /*0x657b27*/
  v15 = result; /*0x657b2d*/
  v16 = v17[4]; /*0x657b34*/
  if ( (unsigned char)result == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
LABEL_22:
  *((unsigned char *)this + 5337) = 0; /*0x657bfa*/
  if ( !v5 ) /*0x657c03*/
  {
    Debug::Log("Radar: Movie done.\n"); /*0x657c0a G57c1: IDA 0x657c0a push offset aRadarMovieDone*/
    v11 = *((unsigned int *)this + 1325); /*0x657c0f*/
    *((unsigned int *)this + 1323) = 5; /*0x657c1a*/
    RadarClass::SetViewMode((int *)this->__pad_0, v11, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v16 = 0; /*0x657c37*/
    ((Mixer*)((Mixer *)this + 1328))->ReleaseChannel(); /*0x657c3d*/
    v12 = (unsigned int *)PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1788), 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource( (AudioMixer *)((int)(unsigned int *)this + 5312), (unsigned int *)(v12), 0); /*0x657c64*/
    result = RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x657c71*/
    *((unsigned char *)this + 5337) = 1; /*0x657c76*/
  }
  LOBYTE(result) = v16; /*0x657c81*/
  v13 = *((unsigned char *)this + 5308) == v16; /*0x657c90*/
  *((unsigned char *)this + 5309) = v15 == 0; /*0x657c92*/
  if ( !v13 ) /*0x657c98*/
  {
    if ( v16 ) /*0x657c9c*/
    {
      result = (unsigned int)SetScenarioClassTimer(0); /*0x657ca0*/
      *((unsigned char *)this + 5308) = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned int)((ScenarioClass *)v14)->ProcessIntroTimer(); /*0x657cc8*/
      *((unsigned char *)this + 5308) = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/

}
}
// 0x67C3A0
namespace gamemd {
unsigned int * Game::LockMutex(int aP1, int aP2)
{

  this->Game_field_0x4 = 0; /*0x67c3ab*/
  *(unsigned int *)this->__pad_8 = (unsigned int)aP1; /*0x67c3ae*/
  this->__pad_8[4] = 1; /*0x67c3b1*/
  this->__pad_8[5] = 0; /*0x67c3b5*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( aP1 ) /*0x67c3be*/
  {
    if ( aP2 ) /*0x67c3c6*/
    {
      this->Game_field_0x4 = (AbstractClass *)aP2; /*0x67c3c8*/
      return this->__pad_0; /*0x67c3ce*/
    }
    this->Game_field_0x4 = (AbstractClass *)__2_YAPAXI_Z(4 * aP1); /*0x67c3dd*/
    this->__pad_8[5] = 1; /*0x67c3e0*/
  }
  return this->__pad_0; /*0x67c3cd*/

}
}
// 0x67E440
namespace gamemd {
int Game::LoadSaved(void *a1_1)
{

  int COM; // eax
  int *p_ppstgOpen; // ecx
  int v5; // eax
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v7; // [esp+40h] [ebp-504h] BYREF
  IStorage *v8; // [esp+44h] [ebp-500h] BYREF
  int v9; // [esp+48h] [ebp-4FCh] BYREF
  LPSTREAM pStm; // [esp+4Ch] [ebp-4F8h]
  WCHAR WideCharStr[64]; // [esp+50h] [ebp-4F4h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  unsigned char v13[1012]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log("\nLOADING GAME [%s]\n"); /*0x67e452 G57c1: IDA 0x67e452 push offset aLoadingGameS*/
  ((GameState *)v13)->Reset(); /*0x67e461*/
  ppstgOpen = (IStorage *)(0); /*0x67e47a*/
  MultiByteToWideChar( 0, 0, (LPCCH)(lpMultiByteStr), -1, (LPWSTR)(WideCharStr), 64); /*0x67e47e*/
  ComPtr::ReleaseSimple(  (int *)&ppstgOpen); /*0x67e484*/
  ppstgOpen = (IStorage *)(0); /*0x67e49e*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67e4a6*/
  {
    ComPtr::ReleaseSimple(  (int *)&ppstgOpen); /*0x67e4ac*/
    return 0; /*0x67e4bd*/
  }
  COM = ScenarioPropertyReadCOM((int)v13, (int)ppstgOpen); /*0x67e4ca*/
  p_ppstgOpen = (int *)&ppstgOpen; /*0x67e4d1*/
  if ( COM < 0 ) /*0x67e4d5*/
    goto LABEL_6; /*0x67e4d5*/
  ComPtr::ReleaseSimple(  (int *)&ppstgOpen); /*0x67e4d7*/
  (&dword_A8B238)[0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e4f2*/
  v8 = (IStorage *)(0); /*0x67e4fe*/
  MultiByteToWideChar( 0, 0, (LPCCH)(lpMultiByteStr), -1, (LPWSTR)(pwcsName), 64); /*0x67e50a*/
  ComPtr::ReleaseSimple(  (int *)&v8); /*0x67e510*/
  v8 = (IStorage *)(0); /*0x67e527*/
  if ( StgOpenStorage(pwcsName, 0, 0x20u, 0, 0, &v8) < 0 ) /*0x67e52f*/
  {
    p_ppstgOpen = (int *)&v8; /*0x67e531*/
LABEL_6:
    ComPtr::ReleaseSimple( (void *)(p_ppstgOpen)); /*0x67e535*/
    return 0; /*0x67e546*/
  }
  v9 = 0; /*0x67e54b*/
  if ( !v8 ) /*0x67e551*/
    WinAPI::Wrapper(-2147467261); /*0x67e558*/
  if ( v8->OpenStream((const OLECHAR *)&off_83D5A8, 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    ((Game *)&v7)->readIniSettings(); /*0x67e5aa*/
    if ( CoCreateInstance(*(const IID *)&stru_7E9540, 0, 7u, *(const IID *)&riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->QueryInterface(&stru_83D598, (void **)&v7); /*0x67e5eb*/
      ppstgOpen->Release(); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (**)(int, int))(*(unsigned int *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario( (unsigned int *)((unsigned int)(&v7))); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ((ProgressAnim *)((int)dword_AC4F58))->Init( 0, 1079574528, 0, 0); /*0x67e64e*/
    ((LoadGame *)pStm)->Start(); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&dword_87F7E8); /*0x67e68f*/
    TacticalClass::BuildCommandBar((gamemd::TacticalClass *)(&dword_87F7E8), (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    ((FogOfWar *)((int **)&dword_87F7E8))->Render(); /*0x67e6bd*/
    byte_A8ED5C = 1; /*0x67e6c4*/
    byte_A8E378 = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log("LOADING GAME [%s] - Complete\n\n"); /*0x67e6e0 G57w11: IDA push seq @ 0x67e6e0 +1 reg-vararg(s) omitted*/
    if ( pStm ) /*0x67e6ee*/
      pStm->Release(); /*0x67e6f3*/
    if ( v7 ) /*0x67e6fc*/
      (*(void (**)(int))(*(unsigned int *)v7 + 8))(v7); /*0x67e701*/
    if ( v9 ) /*0x67e70a*/
      (*(void (**)(int))(*(unsigned int *)v9 + 8))(v9); /*0x67e70f*/
    if ( v8 ) /*0x67e718*/
      v8->Release(); /*0x67e71d*/
    return 1; /*0x67e722*/
  }
  else
  {
    if ( v9 ) /*0x67e57f*/
      (*(void (**)(int))(*(unsigned int *)v9 + 8))(v9); /*0x67e584*/
    if ( v8 ) /*0x67e58d*/
      v8->Release(); /*0x67e592*/
    return 0; /*0x67e598*/
  }

}
}
// 0x67F9C0
namespace gamemd {
CellStruct * * Game::SerializeGameSaveState()
{

  int result; // eax
  int v3; // edi
  int v4; // eax
  int i; // edi
  int v6; // edi
  ParticleSystemClass *v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

result = (*(int (**)(Game *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67f9d3*/ this, (unsigned char *)(((char *)&stru_A8EB00 + 404)), 4, 0);




  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)((char *)&stru_A8EB00 + 404)); /*0x67f9e8*/
result = (*(int (**)(Game *, Object **, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67f9f9*/ this, (Object **)(&dword_A83D4C), 4, 0);




    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&dword_A83D4C); /*0x67fa0e*/
result = (*(int (**)(Game *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fa1f*/ this, (unsigned char *)(((char *)&stru_A8EB00 + 416)), 4, 0);




      if ( result >= 0 )
      {
        result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( this, (int *)(&v13), 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < *(int *)((char *)&stru_A8EB00 + 228); ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking( /*0x67fade*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * i));
result = (*(int (**)(Game *, float *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fafc*/ this, (float *)&flt_89EA40, 432, 0);




            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState((SuperWeapon *)this); /*0x67fb09*/
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fb1a*/ this, (int *)(&v13), 4, 0);




              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < (int)((char *)&FootClass_Array); ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking( /*0x67fbc2*/
                      (int)&SwizzleManagerClass_Instance,
                      (int *)(char *)&FootClass_Array->ObjectClass + j);
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fbdd*/ this, (int *)(&v13), 4, 0);




                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < *((unsigned int *)((char *)&FootClass_Array + 0)); ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking( /*0x67fc84*/
                          (int)&SwizzleManagerClass_Instance,
                          (int *)(*((unsigned int *)((char *)&FootClass_Array + 5)) + 4 * k));
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fc9f*/ this, (int *)(dword_81DA8C), 76, 0);




                      if ( result >= 0 )
                      {
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fcb2*/ this, (int *)(dword_81DAD8), 76, 0);




                        if ( result >= 0 )
                        {
result = (*(int (**)(Game *, double *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fcc8*/ this, (double *)&dbl_89EC28, 152, 0);




                          if ( result >= 0 )
                          {
result = (*(int (**)(Game *, char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fcdb*/ this, (char *)(byte_89ECC0), 19, 0);




                            if ( result >= 0 )
                            {
result = (*(int (**)(Game *, MissionClass *, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x67fcf1*/ + 12))( this, (MissionClass *)(&stru_A8E3A8), 1024, 0);





                              if ( result >= 0 )
                              {
v12 = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fd04*/ this, (int *)(&dword_B07784), 4, 0);




                                return (CellStruct * *)v12 >= 0 ? 0 : v12;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67fbfe*/
                      {
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fbfe*/ this, (int *)(&v14), 4, 0);




                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( *((unsigned int *)((char *)&FootClass_Array + 0)) < *((unsigned int *)((char *)&FootClass_Array + 6)) /*0x67fc3f*/
                          || (BYTE1(*((unsigned int *)((char *)&FootClass_Array + 7))) || !((unsigned int *)&FootClass_Array)[6])
                          && *((unsigned int *)((char *)&FootClass_Array + 1)) > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&FootClass_Array + 4)) + 8))( (int *)(((char *)&FootClass_Array + 4)), *((unsigned int *)((char *)&FootClass_Array + 6)) + *((unsigned int *)((char *)&FootClass_Array + 1)), 0) )



                        {
                          v10 = *((unsigned int *)((char *)&FootClass_Array + 0))++; /*0x67fc52*/
                          *(unsigned int *)(*((unsigned int *)((char *)&FootClass_Array + 5)) + 4 * v10) = v14; /*0x67fc5f*/
                        }
                        if ( ++v9 >= v13 ) /*0x67fc69*/
                          goto LABEL_39; /*0x67fc69*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67fb3b*/
                  {
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fb3b*/ this, (int *)(&v14), 4, 0);




                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( (int)((char *)&FootClass_Array) < (int)((char *)&FootClass_Array) /*0x67fb7d*/
                      || (BYTE1(((char *)&FootClass_Array)) || !((char *)&FootClass_Array))
                      && *((unsigned int *)((char *)&FootClass_Array + 0)) > 0
                      && ((uint8_t (*)(ParticleSystemClass **, char *, unsigned int))((char *)&FootClass_Array))(
                           (char *)&FootClass_Array,
                           (char *)((char *)&FootClass_Array) + *((unsigned int *)((char *)&FootClass_Array + 0)),
                           0) )
                    {
                      v7 = (gamemd::ParticleSystemClass *)(((char *)&FootClass_Array)++); /*0x67fb90*/
                      *((unsigned int *)(char *)&FootClass_Array->ObjectClass + (unsigned int)v7) = v14; /*0x67fb9d*/
                    }
                    if ( ++v6 >= v13 ) /*0x67fba7*/
                      goto LABEL_27; /*0x67fba7*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67fa57*/
            {
result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x67fa57*/ this, (int *)(&v14), 4, 0);




              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( *(int *)((char *)&stru_A8EB00 + 228) < *(int *)((char *)&stru_A8EB00 + 220) /*0x67fa99*/
                || (*((unsigned int *)((char *)&stru_A8EB00 + 225)) || !*(unsigned int *)((char *)&stru_A8EB00 + 220))
                && *(int *)((char *)&stru_A8EB00 + 232) > 0
&& (*(uint8_t (**)(unsigned char *, int, unsigned int))(*(unsigned int *)((char *)&stru_A8EB00 + 212) + 8))( (unsigned char *)(((char *)&stru_A8EB00 + 212)), *(unsigned int *)((char *)&stru_A8EB00 + 220) + *(unsigned int *)((char *)&stru_A8EB00 + 232), 0) )



              {
                v4 = (*(unsigned int *)((char *)&stru_A8EB00 + 228))++; /*0x67faac*/
                *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v4) = v14; /*0x67fab9*/
              }
              if ( ++v3 >= v13 ) /*0x67fac3*/
                goto LABEL_14; /*0x67fac3*/
            }
          }
        }
      }
    }
  }
  return (CellStruct * *)result; /*0x67fd11*/

}
}
// 0x680F70
namespace gamemd {
int Game::validateScenario(unsigned int *a2)
{

  int v3; // edi
  unsigned int *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x680f78*/
  {
    v3 = (**(int (***)(unsigned int, void *, unsigned int **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      v5 = a2; /*0x680faf*/
      if ( *(unsigned int *)this->__pad_0 ) /*0x680fac*/
        (*(void (**)(unsigned int))(**(unsigned int **)this->__pad_0 + 8))(*(unsigned int *)this->__pad_0); /*0x680fba*/
      *(unsigned int *)this->__pad_0 = (unsigned int)v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *(unsigned int *)this->__pad_0 ) /*0x680f93*/
        (*(void (**)(unsigned int))(**(unsigned int **)this->__pad_0 + 8))(*(unsigned int *)this->__pad_0); /*0x680f9c*/
      *(unsigned int *)this->__pad_0 = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *(unsigned int *)this->__pad_0; /*0x680fc7*/
    if ( *(unsigned int *)this->__pad_0 ) /*0x680fc7*/
    {
      *(unsigned int *)this->__pad_0 = 0; /*0x680fcd*/
      (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }

}
}
// 0x685120
namespace gamemd {
int sub_685120()
{
  int v1; // ecx
  TechnoClass *v3; // [esp+0h] [ebp-4h]

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(((AbstractClass *)dword_A8B230)[130].uniqueId); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(((AbstractClass *)dword_A8B230)[130].uniqueId); /*0x685147*/
  LoadFactoryClassTheaterSHP(((AbstractClass *)dword_A8B230)[130].uniqueId); /*0x685158*/
  RadarClass::InitializeHashTable((RadarClass *)&dword_87F7E8); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)dword_A8ED84 - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v1 = 0; /*0x68518f*/
    else
      v1 = dword_B0EA88 - ((unsigned int)dword_A8ED84 - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v1; /*0x685191*/
  }
  dword_B0EA80 = (int)dword_A8ED84; /*0x6851a1*/
  CellClass::setOverlayType((CellClass *)&unk_87E8B8, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(v3); /*0x6851b1*/
  ((MapClass *)((int)((GScreenClass *)&dword_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)((GScreenClass *)&dword_87F7E8))), 2); /*0x6851bd*/
  InvalidateRect((HWND)(g_hWnd), 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  ((Selection *)0)->ClearGlobals(); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}
}
// 0x698CB0
namespace gamemd {
CellStruct * * Game::Game_DumpMultiplayerGameInfo()
{

  int v2; // eax
  FILE *v3; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(unsigned int *)&((unsigned char *)&stru_A8B250)[4]; /*0x698cb0*/
  v3 = (FILE *)(Stream); /*0x698cbc*/
  if ( *(int *)&((unsigned char *)&stru_A8B250)[4] < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(unsigned int *)&((unsigned char *)&stru_A8B250)[4] = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(dword_A8B8CC + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)&this->q148); /*0x698cfd*/
  for ( i = 0; i < (int)*(unsigned int *)&this->q314; ++i ) /*0x698d0f*/
  {
    ((Network *)((Network *)(((unsigned int *)dword_A8DA78)[i] + 40)))->CopyAddress( (unsigned int *)(&Stream), (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((uint8_t *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", *((uint8_t *)v11 + k)); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  ((Network *)(&stru_A8BB1C))->CopyAddress( (unsigned int *)(&Stream), (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((uint8_t *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", *((uint8_t *)v11 + n)); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", *(unsigned int *)&this->q318); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", *(unsigned int *)&this->q680); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", *(unsigned int *)&this->q17C); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", *(unsigned int *)&this->q15C); /*0x698e6a*/
  fprintf(v3, "House = %d\n", *(unsigned int *)&this->q174); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", *(unsigned int *)&this->q314); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", *(uint8_t *)&this->q020); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", *((char *)&this->u32_24)); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", *(uint8_t *)&this->q028); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", *(uint8_t *)&this->u32_29); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", *(uint8_t *)&this->u32_35); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", *(unsigned int *)&this->q038); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", *(unsigned int *)&this->q03C); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", *(unsigned int *)&this->q040); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", *(unsigned int *)&this->q300); /*0x698f26*/
  if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return (gamemd::CellStruct **)(1); /*0x698f46*/
  }
  else
  {
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x698f54*/
      fprintf(v3, "Type = INTERNET\n"); /*0x698f5c*/
    else
      fprintf(v3, "Type = !!Unknown!!\n"); /*0x698f75*/
    return (gamemd::CellStruct **)(1); /*0x698f64*/
  }

}
}
// 0x77E430
namespace gamemd {
void Game::EncodeGameSetupState(char * Buffer)
{

  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // edi
  char **v9; // esi
  char *v10; // eax
  int v11; // esi
  int v12; // edi
  int *v13; // esi
  char *v14; // [esp-20h] [ebp-78h]
  int v15; // [esp-1Ch] [ebp-74h]
  int v16; // [esp-18h] [ebp-70h]
  int v17; // [esp-14h] [ebp-6Ch]
  int v18; // [esp-14h] [ebp-6Ch]
  int v19; // [esp-10h] [ebp-68h]
  int v20; // [esp-10h] [ebp-68h]
  int v21; // [esp-Ch] [ebp-64h]
  void *v22; // [esp+10h] [ebp-48h] BYREF
  void *v23; // [esp+14h] [ebp-44h] BYREF
  void *v24; // [esp+18h] [ebp-40h] BYREF
  void *v25; // [esp+1Ch] [ebp-3Ch] BYREF
  char *v26; // [esp+20h] [ebp-38h]
  void *v27; // [esp+24h] [ebp-34h]
  int v28; // [esp+28h] [ebp-30h]
  int v29; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v34; // [esp+40h] [ebp-18h]
  char *v35; // [esp+44h] [ebp-14h]
  int v36; // [esp+48h] [ebp-10h] BYREF
  unsigned int v37[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v35 = Buffer; /*0x77e440*/
  v37[2] = 0; /*0x77e444*/
  if ( &dword_A8B320 == (unsigned int *)-2 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = ((String *)((char **)&v24))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x77e47a*/
  }
  else
  {
    ((WideString *)((wchar_t **)&v22))->Assign((wchar_t *)&dword_A8B320 + 1); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = (char **)Game_Set(&v23, &v22); /*0x77e465*/
  }
  ((String *)((char **)&v25))->AssignFromPtr((const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    j_DeleteAndZero( (void *)(&v24)); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    j_DeleteAndZero( (void *)(&v23)); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    ((DeleteAndZero*)&v22)->Alt(); /*0x77e4b4*/
  v21 = dword_A8BB04; /*0x77e4da*/
  v19 = (uint8_t)dword_A8BB08; /*0x77e4db*/
  v17 = dword_A8BB0C; /*0x77e4dc*/
  v4 = ((String *)((char **)&v25))->GetOrEmpty(); /*0x77e4e1*/
  sprintf( /*0x77e54e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(unsigned int *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (uint8_t)MEMORY[0xA8B262],
    (uint8_t)MEMORY[0xA8B263],
    (uint8_t)MEMORY[0xA8B264],
    (uint8_t)dword_A8B320,
    (uint8_t)MEMORY[0xA8B261],
    *(unsigned int *)stru_A8B250,
    dword_A8EB68,
    v4,
    v17,
    v19,
    v21,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset( (void *)(byte_B76C24), 0, sizeof(byte_B76C24)); /*0x77e562*/
  v5 = 0; /*0x77e569*/
  v34 = dword_A8DA84; /*0x77e56d*/
  if ( dword_A8DA84 > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(unsigned int *)(dword_A8DA78 + 4 * v5); /*0x77e57c*/
      PlayerSide = ((SessionClass *)(v6))->GetPlayerSide(); /*0x77e588*/
      PlayerColor = ((SessionClass *)(v6))->GetPlayerColor(); /*0x77e593*/
      Option = ((SessionClass *)(v6))->GetOption(); /*0x77e59e*/
      v7 = 0; /*0x77e5a7*/
      v8 = 0; /*0x77e5a9*/
      Option2 = ((SessionClass *)(v6))->GetOption2(); /*0x77e5ab*/
      v28 = 0; /*0x77e5af*/
      v29 = 0; /*0x77e5b3*/
      v9 = (char **)&dword_A8DA90; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        v26 = *v9; /*0x77e5c4*/
        v27 = (void *)ToWideStringChar( (IUnknown *)(*(char **)(dword_A8DA78 + 4 * v5))); /*0x77e5d4*/
        v10 = ToWideStringChar( (IUnknown *)(v26)); /*0x77e5d8*/
        if ( !_strcmpi((const char *)(v27), v10) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        ++v9; /*0x77e5ef*/
        ++v8; /*0x77e5f2*/
        if ( (int)v9 >= (int)&dword_A8DAB0 ) /*0x77e5f9*/
        {
          v11 = v28; /*0x77e5fb*/
          v12 = v29; /*0x77e5ff*/
          goto LABEL_16; /*0x77e603*/
        }
      }
      ((Network *)((unsigned int *)(12 * v8 + 11066316)))->GetAddress( (unsigned int *)(&v36), (int)v37, (unsigned short *)(&v22)); /*0x77e61e*/
      v11 = (&dword_A8DC2C)[v8]; /*0x77e623*/
      v7 = v37[0]; /*0x77e62a*/
      v12 = (&dword_A8E230)[v8]; /*0x77e62e*/
LABEL_16:
      ((WideString *)((wchar_t **)&v23))->Assign(*(wchar_t **)(dword_A8DA78 + 4 * v5)); /*0x77e635*/
      ToWideStringCharAlt((char **)&v24, (const wchar_t **)&v23); /*0x77e650*/
      ((DeleteAndZero*)&v23)->Alt(); /*0x77e659*/
      v20 = Option2; /*0x77e66d*/
      v18 = Option; /*0x77e672*/
      v16 = PlayerColor; /*0x77e673*/
      v15 = PlayerSide; /*0x77e674*/
      v14 = ((String *)((char **)&v24))->GetOrEmpty(); /*0x77e686*/
      sprintf((unsigned char *)&byte_B76C24 + strlen( (const char *)(byte_B76C24)), "%s,%d,%d,%d,%d,%x,%x,%x,", v14, v15, v16, v18, v20, v7, v11, v12); /*0x77e69a*/
      j_DeleteAndZero( (void *)(&v24)); /*0x77e6a6*/
      ++v5; /*0x77e6af*/
    }
    while ( v5 < v34 ); /*0x77e6b2*/
    v1 = v35; /*0x77e6b8*/
  }
  ((unsigned char *)&byte_B76C22)[strlen( (const char *)(byte_B76C24)) + 1] = 58; /*0x77e6cf*/
  strcat( (char *)(byte_B76C24), (const char *)(asc_831340)); /*0x77e6f3*/
  v13 = (int *)(*(int * *)&MEMORY[0xA8B2DC]); /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf((unsigned char *)&byte_B76C24 + strlen( (const char *)(byte_B76C24)), "%d,%d,%d,%d,%d," /*w16g4 aDDDDD_0*/, *(v13 - 24), *(v13 - 16), *(v13 - 8), *v13, v13[8]); /*0x77e72f*/
    ++v13; /*0x77e734*/
  }
  while ( (int)v13 < (int)MEMORY[0xA8B2FC] ); /*0x77e740*/
  strcat( (char *)(v1), (const char *)(byte_B76C24)); /*0x77e763*/
  j_DeleteAndZero( (void *)(&v25)); /*0x77e770*/

}
}
// 0x77F900
namespace gamemd {
Coord * * Game::ProcessIdle()
{

  signed int v1; // ebx
  int v2; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v6; // ebp
  int v7; // esi
  char *v8; // edx
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  int j; // esi
  char *v12; // ebx
  int v13; // esi
  int v14; // ebp
  void *v15; // eax
  void *v16; // esi
  void *v17; // ebx
  char *v18; // edx
  unsigned int *v19; // eax
  unsigned int *v20; // esi
  signed int v21; // eax
  int v22; // ebp
  char **v23; // eax
  int v24; // esi
  char *v25; // eax
  int v27; // [esp+14h] [ebp-B0h]
  ObjectClass *v28; // [esp+14h] [ebp-B0h]
  String v29; // [esp+24h] [ebp-A0h] BYREF
  String v30; // [esp+2Ch] [ebp-98h] BYREF
  String v31; // [esp+34h] [ebp-90h] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  LOBYTE(this) = 0; /*0x77f906*/
  ScreenSaver::Process((TechnoTypeClass *)this, v27); /*0x77f90c*/
  v1 = 0; /*0x77f916*/
  v2 = 0; /*0x77f918*/
  ++dword_AA0430; /*0x77f925*/
  if ( GameLoopMessagePump( (MSG*)(&Msg), 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v2; /*0x77f94d*/
    }
    while ( v2 != 100 && GameLoopMessagePump( (MSG*)(&Msg), 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = time(0); /*0x77fa77*/
    }
    else
    {
      if ( g_WOL_IdleHandler < 2 || g_WOL_IdleHandler > 4 ) /*0x77f9e1*/
      {
        StringCSF = GetStringCSF( (wchar_t *)(aWolMatchtimeou), 0, (const char *)(g_Str_File_wonline_cpp), 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v3 = time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v3 = time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v3; /*0x77fa46*/
      SetEvent( (void *)((void *)(hEvent))); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( dword_B777A0 > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < dword_B777A0; ++i ) /*0x77fa91*/
      j_DeleteAndZero( (void *)((ObjectClass *)((char *)dword_B777A8 + 4 * i))); /*0x77fa9b*/
    dword_B777A0 = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && dword_B777A0 > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && dword_B777A0 > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && dword_B777A0 > 0 )
  {
    *(unsigned int *)&v29.m_3[1] = 0; /*0x77fb14*/
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fb18*/
    do /*0x77fbde*/
    {
      if ( dword_B777A0 <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v6 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset( (void *)(v6), 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73( (void *)(&v31)); /*0x77fb44*/
      v7 = dword_B777A0 - 1; /*0x77fb4e*/
      if ( dword_B777A0 - 1 >= 0 && v7 < dword_B777A0 ) /*0x77fb57*/
      {
        ((String *)(&v31))->Reassign((const char **)dword_B777A8 + v7); /*0x77fb67*/
        ((DynamicArray *)((DynamicArray *)&dword_B777A0))->Remove(v7); /*0x77fb72*/
      }
      v8 = ((String *)(&v31))->GetOrEmpty(); /*0x77fb80*/
      if ( strlen( (const char *)(v8)) > 9 ) /*0x77fb91*/
        v8[9] = 0; /*0x77fb93*/
      strcpy( v6 + 36, (const char *)(v8)); /*0x77fbb1*/
      if ( v1 ) /*0x77fbbc*/
        *(unsigned int *)(v1 + 32) = (unsigned int)v6; /*0x77fbc4*/
      else
        *(unsigned int *)&v29.m_3[1] = (unsigned int)v6; /*0x77fbbe*/
      v1 = (signed int)v6; /*0x77fbcb*/
      j_DeleteAndZero( (void *)((ObjectClass *)&v31)); /*0x77fbcd*/
      ++*(unsigned int *)v29.__pad_0; /*0x77fbda*/
    }
    while ( *(int *)v29.__pad_0 < 10 ); /*0x77fbde*/
    if ( ppv ) /*0x77fbeb*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 192))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), *(unsigned int *)&v29.m_3[1]); /*0x77fbf5*/
    v9 = *(unsigned int **)&v29.m_3[1]; /*0x77fc03*/
    if ( *(unsigned int *)&v29.m_3[1] ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v10 = (unsigned int *)v9[8]; /*0x77fc07*/
        __3_YAXPAX_Z(v9); /*0x77fc0b*/
        v9 = v10; /*0x77fc13*/
      }
      while ( v10 ); /*0x77fc17*/
    }
    dword_B76180 = time(0); /*0x77fc23*/
    v1 = 0; /*0x77fc28*/
  }
  if ( dword_B765F8 > 200 ) /*0x77fc34*/
  {
    for ( j = 0; j < dword_B765F8; ++j ) /*0x77fc3a*/
      j_DeleteAndZero( (void *)((ObjectClass *)((char *)dword_B76600 + 4 * j))); /*0x77fc45*/
    dword_B765F8 = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && dword_B765F8 > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && dword_B765F8 > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && dword_B765F8 > 0 )
  {
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fcbe*/
    *(unsigned int *)&v29.m_3[1] = 0; /*0x77fcc2*/
    *(unsigned int *)v30.__pad_0 = 0; /*0x77fcc6*/
    do /*0x77fe52*/
    {
      if ( dword_B765F8 <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v12 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset( (void *)(v12), 0, 0x6Cu); /*0x77fce9*/
      *(unsigned int *)&v31.m_3[1] = (unsigned int)v12; /*0x77fcf2*/
      unknown_libname_73( (void *)(&v31)); /*0x77fcf6*/
      v13 = dword_B765F8 - 1; /*0x77fd00*/
      if ( dword_B765F8 - 1 >= 0 && v13 < dword_B765F8 ) /*0x77fd0d*/
      {
        ((String *)(&v31))->Reassign((const char **)dword_B76600 + v13); /*0x77fd20*/
        if ( dword_B765F8 ) /*0x77fd2c*/
        {
          if ( v13 >= dword_B765F8 ) /*0x77fd34*/
            v13 = dword_B765F8 - 1; /*0x77fd36*/
          j_DeleteAndZero( (void *)((ObjectClass *)((char *)dword_B76600 + 4 * v13))); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * v13,
            (char *)dword_B76600 + 4 * v13 + 4,
            4 * (dword_B765F8 + 0x3FFFFFFF * (v13 + 1)));
          --dword_B765F8; /*0x77fd7f*/
          if ( 3 * dword_B765F8 <= dword_B765FC ) /*0x77fd89*/
          {
            v14 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              v14 = 10; /*0x77fd99*/
            if ( v14 < dword_B765FC ) /*0x77fda0*/
            {
              v15 = (void *)__2_YAPAXI_Z(4 * v14); /*0x77fdaa*/
              v16 = (void *)(dword_B76600); /*0x77fdaf*/
              v17 = v15; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy( (void *)(v15), (const void *)(dword_B76600), 4 * dword_B765F8); /*0x77fdc6*/
                v16 = (void *)(dword_B76600); /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v16); /*0x77fdcf*/
              dword_B76600 = (unsigned int)v17; /*0x77fdd4*/
              v12 = *(char **)&v31.m_3[1]; /*0x77fdda*/
              dword_B765FC = v14; /*0x77fde1*/
            }
          }
        }
      }
      v18 = ((String *)(&v31))->GetOrEmpty(); /*0x77fdf0*/
      if ( strlen( (const char *)(v18)) > 9 ) /*0x77fe01*/
        v18[9] = 0; /*0x77fe03*/
      strcpy( v12 + 36, (const char *)(v18)); /*0x77fe23*/
      if ( *(unsigned int *)&v29.m_3[1] ) /*0x77fe2e*/
        *(unsigned int *)(*(unsigned int *)&v29.m_3[1] + 32) = (unsigned int)v12; /*0x77fe36*/
      else
        *(unsigned int *)v29.__pad_0 = (unsigned int)v12; /*0x77fe30*/
      *(unsigned int *)&v29.m_3[1] = (unsigned int)v12; /*0x77fe3d*/
      j_DeleteAndZero( (void *)((ObjectClass *)&v31)); /*0x77fe41*/
      ++*(unsigned int *)v30.__pad_0; /*0x77fe4e*/
    }
    while ( *(int *)v30.__pad_0 < 10 ); /*0x77fe52*/
    if ( ppv ) /*0x77fe5f*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 188))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), *(unsigned int *)v29.__pad_0); /*0x77fe69*/
    v19 = *(unsigned int **)v29.__pad_0; /*0x77fe77*/
    if ( *(unsigned int *)v29.__pad_0 ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v20 = (unsigned int *)v19[8]; /*0x77fe7b*/
        __3_YAXPAX_Z(v19); /*0x77fe7f*/
        v19 = v20; /*0x77fe87*/
      }
      while ( v20 ); /*0x77fe8b*/
    }
    dword_B7617C = time(0); /*0x77fe97*/
    v1 = 0; /*0x77fe9c*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(v28); /*0x77fed4*/
  }
  if ( ppv && !dword_B77DCC ) /*0x77fee8*/
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 12))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv))))); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (**)(LPVOID))(*(unsigned int *)g_UIPointerTable + 28))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(g_UIPointerTable))))); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 20))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(dword_AC1174))))); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( byte_B76B44 && dword_B76B10 == 41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( ppv && dword_B76B10 && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset( (void *)(Buffer), 0, 0x50u); /*0x77ff6f*/
    ((GameConfig *)Buffer)->BuildChecksum(); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (**)(LPVOID, struct in_addr *))(*(unsigned int *)ppv + 168))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (struct in_addr *)(Buffer)); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && dword_B76B10 && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    ((String *)((String *)&dword_B73E40))->ToLowerCopy((char **)&v30); /*0x77ffe9*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x780008*/
    {
      v21 = dword_B77900; /*0x78000e*/
      if ( (int)dword_B77900 > 0 ) /*0x780015*/
      {
        v22 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v22 >= 0 && v1 < v21 ) /*0x780023*/
            qmemcpy( (void *)(Buffer), (char *)dword_B77908 + v22, sizeof(Buffer)); /*0x780037*/
          ((String *)(&v29))->Assign((const char *)&Buffer[9]); /*0x780042*/
          v23 = ((String *)(&v29))->ToLowerCopy((char **)&v31.m_3[1]); /*0x780050*/
          ((unsigned char *)&v30.__tail_7)[0] = ((String *)(&v30))->Compare((const char **)v23); /*0x780063*/
          j_DeleteAndZero( (void *)((ObjectClass *)&v31.m_3[1])); /*0x780067*/
          if ( !((unsigned char *)&v30.__tail_7)[0] && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v24 = *(unsigned int *)g_UIPointerTable; /*0x78008c*/
            v25 = (char *)ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (**)(LPVOID, char *, int, char *))(v24 + 24))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(g_UIPointerTable)))), (char *)(v25), 1000, (char *)(&v29.m_3[1])); /*0x78009b*/
          }
          j_DeleteAndZero( (void *)((ObjectClass *)&v29)); /*0x7800a2*/
          v21 = dword_B77900; /*0x7800a7*/
          ++v1; /*0x7800ac*/
          v22 += 108; /*0x7800ad*/
        }
        while ( v1 < (int)dword_B77900 ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    j_DeleteAndZero( (void *)((ObjectClass *)&v30)); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(v28); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/

}
}
// 0x7A2230
namespace gamemd {
void Game_Setup(CCINIClass * aP0, CCINIClass * aP1, char * Buffera, char * a3)
{
  const char *v5; // edi
  const char *v6; // esi
  int v7; // edi
  char **v8; // esi
  char *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch] BYREF
  char *v13; // [esp+18h] [ebp-8h] BYREF
  int16_t v14; // [esp+1Ch] [ebp-4h]

  if ( aP0 ) /*0x7a223d*/
  {
    if ( aP1 ) /*0x7a2245*/
    {
      v5 = (const char *)(Buffera); /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = (const char *)(a3); /*0x7a2257*/
        if ( a3 ) /*0x7a225d*/
        {
          Buffera = (char *)(0); /*0x7a2267*/
          a3 = (char *)(0); /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(aP1, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a3); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (char **)&dword_A8DA90; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi((const char *)(aP0), v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          v13 = Buffera; /*0x7a22de*/
          v14 = 0; /*0x7a22e2*/
          v12 = 0; /*0x7a22fc*/
          ((NetworkID *)((unsigned int *)(12 * v7 + 11066316)))->Assign( (unsigned int *)(&v12), (int)&v13, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
          (&dword_A8DC2C)[v7] = (int)a3; /*0x7a230d*/
          (&dword_A8E230)[v7] = v10; /*0x7a2314*/
        }
      }
    }
  }
}
}
// 0x7A2330
namespace gamemd {
AbstractClass * * Game::SetupWOLTournament()
{

  char *v1; // esi
  char *v2; // eax
  int v3; // edi
  char *v4; // eax
  int v5; // ebx
  char *v6; // ebp
  char *v7; // eax
  char *v8; // esi
  char *v9; // eax
  int v10; // edi
  char *v11; // eax
  int v12; // ebx
  char *v13; // ebp
  char *v14; // eax
  HWND v15; // eax
  char v16; // bl
  int v17; // esi
  char *v18; // eax
  char *v19; // ebp
  wchar_t *v20; // eax
  wchar_t *v21; // edi
  int v22; // eax
  char result; // al
  char *v24; // [esp+10h] [ebp-104h] BYREF
  char String_v[256]; // [esp+14h] [ebp-100h] BYREF

  strcpy( (char *)(String_v), this); /*0x7a2359*/
  v1 = strtok(String_v, asc_84D68C); /*0x7a2373*/
  v2 = strtok(0, (char *)&::Delimiter); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, (char *)&::Delimiter); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, (char *)&::Delimiter); /*0x7a23a9*/
  v24 = strtok(0, (char *)&::Delimiter); /*0x7a23b7*/
  v7 = strtok(0, (char *)&::Delimiter); /*0x7a23bb*/
  Game_Setup((gamemd::CCINIClass *)(v1), v6, v24, v7); /*0x7a23cd*/
  ((String *)(&v24))->Assign( (const char *)(v1)); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  j_DeleteAndZero( (void *)((void **)&v24)); /*0x7a23f0*/
  v8 = strtok(0, (char *)&::Delimiter); /*0x7a2408*/
  v9 = strtok(0, (char *)&::Delimiter); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, (char *)&::Delimiter); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, (char *)&::Delimiter); /*0x7a243e*/
  v24 = strtok(0, (char *)&::Delimiter); /*0x7a244c*/
  v14 = strtok(0, (char *)&::Delimiter); /*0x7a2450*/
  Game_Setup((gamemd::CCINIClass *)(v8), v13, v24, v14); /*0x7a2462*/
  ((String *)(&v24))->Assign( (const char *)(v8)); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  j_DeleteAndZero( (void *)((void **)&v24)); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy( (char *)(&byte_A8B8E0), (const char *)(aRandmapSed)); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)((Dialog*)((void *)0x11F))->FindByHandle(); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName( (int)(aRandmapSed)); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( dword_A8B8D8 > 0 ) /*0x7a24f3*/
  {
    while ( !((IsRandMap *)(*(unsigned int *)(dword_A8B8CC + 4 * v17)))->Sed() ) /*0x7a2504*/
    {
      if ( ++v17 >= dword_A8B8D8 ) /*0x7a250e*/
        goto LABEL_6; /*0x7a250e*/
    }
    v16 = 1; /*0x7a2512*/
  }
LABEL_6:
  v18 = GameConfig::ComputeCRC(); /*0x7a2514*/
  v19 = v18; /*0x7a251b*/
  if ( v16 ) /*0x7a251d*/
  {
    GameOption::SetDigest( (char *)(v18)); /*0x7a25b6*/
    ((GameOption *)(*(wchar_t **)(dword_A8B8CC + 4 * v17)))->SetDescriptionWStr( (CampaignScore *)(&unk_ABE050)); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = (wchar_t *)SessionClass::ParseGameInfo( (wchar_t *)(v20), (char *)(aRandmapSed), (CampaignScore *)(&unk_ABE050), (CCINIClass *)(v19), 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = (wchar_t *)(0); /*0x7a2552*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x7a258b*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(dword_A8B8C8 + 8))( (int *)(&dword_A8B8C8), dword_A8B8DC + dword_A8B8D0, 0) )



    {
      v22 = dword_A8B8D8++; /*0x7a2598*/
      *(unsigned int *)(dword_A8B8CC + 4 * v22) = (unsigned int)v21; /*0x7a25a7*/
    }
  }
  __3_YAXPAX_Z(v19); /*0x7a25ce*/
  result = LoadScenarioClassByIndex(v17); /*0x7a25d8*/
  if ( result == 1 ) /*0x7a25df*/
    MEMORY[0xA8B254] = v17; /*0x7a25e1*/
  return (AbstractClass * *)result; /*0x7a25e7*/

}
}
// 0x4790A0
namespace gamemd {
int Game::CheckForGameCD()
{

  return AlwaysFindYRCD();

}
} // namespace gamemd

// 0x53AB50
namespace gamemd {
void * sub_53AB50()
{
  void *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = (void *)(dword_A83D4C); /*0x53ab55*/
  *((unsigned char *)dword_A83D4C + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}
} // namespace gamemd

// 0x550000
namespace gamemd {
int Game::loadCampaignData(void *a1_1)
{

  int result; // eax
  void *v2; // esi
  int v3; // eax
  Game *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_MissionQueueFrame.random[31]; g_MissionQueueFrame.random[31]; result = g_MissionQueueFrame.random[31] ) /*0x550008*/
  {
    v2 = *(void **)&dword_ABC828; /*0x550010*/
    if ( *(unsigned int *)&dword_ABC828 ) /*0x550010*/
    {
      v4 = *(Game **)&dword_ABC828; /*0x550026*/
v3 = (*(int (**)(int *, Game **))(g_MissionQueueFrame.random[27] + 16))( /*0x55002a*/ &g_MissionQueueFrame.random[27], (Game **)(&v4));


      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[31] ) /*0x55003a*/
      {
        --g_MissionQueueFrame.random[31]; /*0x55003f*/
        for ( ; /*0x550045*/
              v3 < g_MissionQueueFrame.random[31];
              *(unsigned int *)(&dword_ABC828 + 4 * v3 - 4) = *(unsigned int *)(&dword_ABC828
                                                                                   + 4 * v3) )
        {
          ++v3; /*0x55004d*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x550060*/
    }
  }
  return result; /*0x550073*/

}
} // namespace gamemd

// 0x556DF0
namespace gamemd {
void sub_556DF0()
{
  int i; // edi
  unsigned int *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.random[223]; ++i ) /*0x556dfe*/
  {
    v2 = *(unsigned int **)(&dbl_ABC8E8 + 4 * i); /*0x556e06*/
    if ( v2 ) /*0x556e0b*/
    {
      v3 = v2[1]; /*0x556e0d*/
      if ( v3 ) /*0x556e12*/
      {
        *(unsigned int *)(v3 + 168) = 0; /*0x556e14*/
        v2[1] = 0; /*0x556e1a*/
      }
      v5 = v2; /*0x556e2d*/
v4 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.random[219] + 16))( /*0x556e31*/ &g_MissionQueueFrame.random[219], (unsigned int **)(&v5));


      if ( v4 != -1 && v4 < g_MissionQueueFrame.random[223] ) /*0x556e41*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556e46*/
        for ( ; /*0x556e4c*/
              v4 < g_MissionQueueFrame.random[223];
              *(unsigned int *)(&dbl_ABC8E8 + 4 * v4 - 4) = *(unsigned int *)(&dbl_ABC8E8
                                                                                    + 4 * v4) )
        {
          ++v4; /*0x556e54*/
        }
      }
      RA2_OPDEL(v2); /*0x556e67*/
    }
  }
  g_MissionQueueFrame.random[223] = 0; /*0x556e7f*/
  if ( &dbl_ABC8E8 && IDA_BYTE1(g_MissionQueueFrame.random[222]) ) /*0x556e8f*/
  {
    RA2_OPDEL((void *)&dbl_ABC8E8); /*0x556e92*/
    &dbl_ABC8E8 = 0; /*0x556e9a*/
  }
  IDA_BYTE1(g_MissionQueueFrame.random[222]) = 0; /*0x556ea0*/
  g_MissionQueueFrame.random[221] = 0; /*0x556ea6*/
}
} // namespace gamemd

// 0x5865E0
namespace gamemd {
char Game::Stub3(IUnknown * aP0)
{

  int result; // eax

  LOBYTE(result) = 0; /*0x5865e0*/
  return result; /*0x5865e2*/

}
} // namespace gamemd

// 0x5B56F0
namespace gamemd {
void Game::processStartup()
{

  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // esi
  LRESULT v6; // eax
  char lParam[40]; // [esp+Ch] [ebp-28h] BYREF

  Debug::Log("ModemGuest.ReadDialog(enter)\n"); /*0x5b56fd G57w11: IDA push seq @ 0x5b56fd +3 reg-vararg(s) omitted*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA( (HWND)(DlgItem), 0x4B3u, 0x14u, (LPARAM)((LPARAM)((LPARAM)lParam))); /*0x5b572c*/
    CopyWideToChar( (unsigned char *)(unk_A8B380), (char *)(lParam), -1); /*0x5b5739*/
  }
  Debug::Log("Name: %s\n", 0xa8b380); /*0x5b5748 G57w11: IDA push seq @ 0x5b5748*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    dword_A8B394 = SendMessageA( (HWND)(v3), 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log("Color: %d\n"); /*0x5b577a G57w11: IDA push seq @ 0x5b577a +1 reg-vararg(s) omitted*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA( (HWND)(v4), 0x147u, 0, 0); /*0x5b579c*/
    dword_A8B3AC = SendMessageA( (HWND)(v5), 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log("ModemGuest.ReadDialog(exit)\n"); /*0x5b57b3 G57w11: IDA push seq @ 0x5b57b3*/

}
} // namespace gamemd

// 0x5BF530
namespace gamemd {
char sub_5BF530()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf530*/
  if ( byte_ABF35C ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer( (VolumeStruct*)((unsigned int *)g_MixerState), 0x4000); /*0x5bf553*/
    RequestBufferMixer( (VolumeStruct*)((unsigned int *)g_MixerChannel_Ambient), 0x4000); /*0x5bf563*/
    result = AudioMixer::Pump(); /*0x5bf568*/
    byte_ABF35C = 0; /*0x5bf56d*/
  }
  return result; /*0x5bf574*/
}
} // namespace gamemd

// 0x5E8B40
namespace gamemd {
char Game::ResetFlags()
{

  byte_AC0AC8 = 0; /*0x5e8b42*/
  byte_AC0AEC = 0; /*0x5e8b47*/
  byte_AC0EA4 = 0; /*0x5e8b4c*/
  byte_AC0B10 = 0; /*0x5e8b51*/
  return 0; /*0x5e8b56*/

}
} // namespace gamemd

// 0x5E9850
namespace gamemd {
int Game::ResetReadyStates()
{

  int result; // eax
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    v1 = (HWND)((Dialog*)((void *)0xC2))->FindByHandle(); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)((Dialog*)((void *)0xC9))->FindByHandle(); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)((Dialog*)((void *)0xBC))->FindByHandle(); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)((Dialog*)((void *)0xBD))->FindByHandle(); /*0x5e988b*/
      }
    }
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = dword_A8DA84; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * i), &word_A8D610); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(unsigned int *)(dword_A8DA78 + 4 * i); /*0x5e98d3*/
      if ( *(unsigned int *)(result + 119) ) /*0x5e98d6*/
        *(unsigned int *)(result + 119) = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/

}
} // namespace gamemd

// 0x67FDE0
namespace gamemd {
int Game::readIniSettings()
{

  int result; // eax

  result = *(unsigned int *)this->__pad_0; /*0x67fde0*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x67fde0*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x67fde9*/
  return result; /*0x67fdec*/

}
} // namespace gamemd

// 0x72D730
namespace gamemd {
char Game::LoadMultiplayerScoreAssets()
{

  char result; // al
  char *v3; // ecx

  result = byte_B0FBB8; /*0x72d730*/
  if ( !&byte_B0FBB8 ) /*0x72d73a*/
  {
    ((Game *)this)->shutdownGame(); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = (char *)off_844BD8[0]; /*0x72d74d*/
      if ( this != (Game *)1 ) /*0x72d756*/
        v3 = (char *)(off_844BDC); /*0x72d758*/
    }
    else
    {
      v3 = off_844BD4[0]; /*0x72d745*/
    }
    result = LoadPaletteSimple( /*0x72d768*/
               v3,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[1024],
               &g_BuildingLoadQueue_Array.__pad_F70[1028]);
    &byte_B0FBB8 = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/

}
} // namespace gamemd

// 0x72D830
namespace gamemd {
void * Game::shutdownGame()
{

  void *result; // eax
  char *v2; // ecx

  if ( this ) /*0x72d832*/
  {
    if ( this == (Game *)1 ) /*0x72d86f*/
    {
      if ( (int)g_DisplayWidth == 640 ) /*0x72d87b*/
        result = (void *)LoadFileSHP( (char *)(off_844CA8), (bool *)((bool *)((char *)&g_BuildingLoadQueue_Array + 0xF70 + 1229))); /*0x72d883*/
      else
        result = (void *)LoadFileSHP( (char *)(off_844CAC), (bool *)((bool *)((char *)&g_BuildingLoadQueue_Array + 0xF70 + 1229))); /*0x72d894*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[876] = (unsigned int)result; /*0x72d888*/
    }
    else
    {
      v2 = off_844CB0[0]; /*0x72d89f*/
      if ( (int)g_DisplayWidth != 640 ) /*0x72d8af*/
        v2 = (char *)(off_844CB4); /*0x72d8b1*/
      result = (void *)LoadFileSHP( (char *)(v2), (bool *)((bool *)((char *)&g_BuildingLoadQueue_Array + 0xF70 + 1229))); /*0x72d8b7*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[876] = (unsigned int)result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( (int)g_DisplayWidth == 640 ) /*0x72d843*/
      result = (void *)LoadFileSHP( (char *)(off_844CA0), (bool *)((bool *)((char *)&g_BuildingLoadQueue_Array + 0xF70 + 1229))); /*0x72d84b*/
    else
      result = (void *)LoadFileSHP( (char *)(off_844CA4), (bool *)((bool *)((char *)&g_BuildingLoadQueue_Array + 0xF70 + 1229))); /*0x72d85c*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[876] = (unsigned int)result; /*0x72d850*/
  }
  return result; /*0x72d855*/

}
} // namespace gamemd

// 0x72F440
namespace gamemd {
char Game::InitializeToolTipColor()
{

  char result; // al

  if ( this ) /*0x72f442*/
  {
    if ( this == (Game *)1 ) /*0x72f460*/
    {
      *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[852]; /*0x72f46e*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = &byte_B0FB06; /*0x72f475*/
      return &byte_B0FB06; /*0x72f469*/
    }
    else
    {
      *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[752]; /*0x72f488*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = &byte_B0FAA2; /*0x72f48f*/
    }
  }
  else
  {
    *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[552]; /*0x72f450*/
    g_BuildingLoadQueue_Array.__pad_F70[622] = &byte_B0F9DA; /*0x72f456*/
    return &word_B0F9D8; /*0x72f444*/
  }
  return result; /*0x72f45c*/

}
} // namespace gamemd

// 0x74D450
namespace gamemd {
int sub_74D450(int a1)
{
  int result; // eax
  char Buffer[32]; // [esp+0h] [ebp-20h] BYREF

  sprintf(Buffer, "VEINHOLE.%s", (const char *)&off_7E1BC6 + 112 * a1); /*0x74d46f*/
  result = (unsigned int)SearchMIXFile( (char *)(Buffer), 0); /*0x74d47d*/
  dword_B1D2EC = result; /*0x74d482*/
  return result; /*0x74d487*/
}
} // namespace gamemd

// 0x796DE0
namespace gamemd {
int Game::CreateAIPlayer()
{

  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = (unsigned int)__2_YAPAXI_Z(0x85u); /*0x796dea*/
  v2 = v1; /*0x796def*/
  if ( v1 ) /*0x796df8*/
    ((Waypoint*)((Waypoint *)(v1 + 40)))->InitInvalid(); /*0x796dfd*/
  else
    v2 = 0; /*0x796e04*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aOlCruddy, -1); /*0x796e0f*/
  *(unsigned int *)(v2 + 123) = -1; /*0x796e1f*/
  *(unsigned int *)(v2 + 75) = 0; /*0x796e26*/
  *(unsigned int *)(v2 + 83) = 3; /*0x796e29*/
  v6 = 0; /*0x796e33*/
  v9 = 0; /*0x796e37*/
  v8 = 0; /*0x796e3b*/
  v7 = 1381040650; /*0x796e4e*/
  ((NetworkID *)((NetworkID *)(v2 + 40)))->Assign( (unsigned int *)(&v6), (int)&v7, 0); /*0x796e53*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
&& (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))( (PtrVector *)(&stru_A8DA74), dword_A8DA7C + dword_A8DA88, 0) )



  {
    v3 = dword_A8DA84++; /*0x796e99*/
    (&dword_A8DA78)[v3] = v2; /*0x796ea8*/
  }
  v4 = dword_A8B54C; /*0x796eab*/
  *((unsigned int *)&dword_B7790C+ dword_A8B54C) = 100; /*0x796eb2*/
  result = v4 + 1; /*0x796ebd*/
  dword_A8B54C = result; /*0x796ebe*/
  return result; /*0x796eb0*/

}
} // namespace gamemd

// 0x796ED0
namespace gamemd {
int Game::CreateAIPlayer_Potato()
{

  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = (unsigned int)__2_YAPAXI_Z(0x85u); /*0x796eda*/
  v2 = v1; /*0x796edf*/
  if ( v1 ) /*0x796ee8*/
    ((Waypoint*)((Waypoint *)(v1 + 40)))->InitInvalid(); /*0x796eed*/
  else
    v2 = 0; /*0x796ef4*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aPotato, -1); /*0x796eff*/
  *(unsigned int *)(v2 + 123) = -1; /*0x796f0f*/
  *(unsigned int *)(v2 + 75) = 0; /*0x796f16*/
  *(unsigned int *)(v2 + 83) = 0; /*0x796f19*/
  v6 = 0; /*0x796f1f*/
  v9 = 0; /*0x796f23*/
  v8 = 0; /*0x796f27*/
  v7 = 1628701194; /*0x796f3a*/
  ((NetworkID *)((NetworkID *)(v2 + 40)))->Assign( (unsigned int *)(&v6), (int)&v7, 0); /*0x796f3f*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
&& (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))( (PtrVector *)(&stru_A8DA74), dword_A8DA7C + dword_A8DA88, 0) )



  {
    v3 = dword_A8DA84++; /*0x796f85*/
    (&dword_A8DA78)[v3] = v2; /*0x796f94*/
  }
  v4 = dword_A8B54C; /*0x796f97*/
  *((unsigned int *)&dword_B7790C+ dword_A8B54C) = 100; /*0x796f9e*/
  result = v4 + 1; /*0x796fa9*/
  dword_A8B54C = result; /*0x796faa*/
  return result; /*0x796f9c*/

}
} // namespace gamemd

// 0x7B82E0
namespace gamemd {
char ** sub_7B82E0(char ** a1, const wchar_t ** a2)
{
  const wchar_t *v3; // eax
  int v4; // esi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = *a2; /*0x7b82eb*/
  if ( *a2 ) /*0x7b82eb*/
    v3 = (const wchar_t *)wcslen(*a2); /*0x7b82f2*/
  v4 = 16 * ((unsigned int)v3 + 1); /*0x7b8302*/
  v5 = (char *)RA2_OPNEW((v4 + 6) / 7); /*0x7b831c*/
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  if ( v5 ) /*0x7b8338*/
    v7 = strlen( (const char *)(v5)) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  v8 = (char *)RA2_OPNEW(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy( (char *)(v8), (const char *)(v5)); /*0x7b8374*/
  RA2_OPDEL(v5); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    v9 = (char *)RA2_OPNEW(strlen( (const char *)(v8)) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy( (char *)(v9), (const char *)(v8)); /*0x7b83c2*/
    RA2_OPDEL(v8); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}
} // namespace gamemd
