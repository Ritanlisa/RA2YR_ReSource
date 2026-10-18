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
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int Thunk(); }  // x4:empty@0x77d710
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int AllocateRenderSurface(uint8_t* p0, uint8_t* p1, int p2); }  // x4:signals@0x4335e0
namespace BinkMovieClass { int AllocateRenderSurface(uint8_t* p0, uint8_t* p1, int p2); }  // x4:signals@0x4335e0
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int ConvertWrapper(int p0); }  // x4:signals@0x6cf230
namespace gamemd { int setOverlayType(int p0); }  // x4:signals@0x42ac00
namespace gamemd { int ValidateName(int p0); }  // x4:signals@0x597730
namespace gamemd { int ComputeCRC(); }  // x4:empty@0x5e84d0
namespace gamemd { int SetDigest(char* p0); }  // x4:signals@0x69ad80
namespace gamemd { int DecrementAll(); }  // x4:empty@0x408230
namespace gamemd { int Pump(); }  // x4:empty@0x753620
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int nullsub_158();  // x4:empty@0x7236d0
} // namespace gamemd

// 0x430980
namespace gamemd {  // G42.18 ns repair
void Game::initScenario(void *a1_1)
{


  if ( *(unsigned int *)&a1_1->__pad_44[28] ) /*0x430983*/
  {
    Game *v2; // esi
    v2 = (gamemd::Game *)(a1_1); /*0x43098d*/
    int v3 = 8; // ebx /*0x43098f*/
    do /*0x4309b5*/
    {
      int v4 = 3; // edi /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *(unsigned int *)&v2->__pad_0 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*(void **)&v2->__pad_0); /*0x4309a0*/
          *(unsigned int *)&v2->__pad_0 = 0; /*0x4309a8*/
        }
        v2 = &v2->ptr_4; /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(unsigned int *)&a1_1->__pad_44[28] = 0; /*0x4309b9*/
  }

}
}  // G42.18 ns repair
// 0x46D4A0
namespace gamemd {
int Game::SendCampaignOptions()
{

  int v13; // [esp+8h] [ebp-1C8h] BYREF
  v13 = 50; /*0x46d4bc*/
  char v14[452]; // [esp+Ch] [ebp-1C4h] BYREF
  strcpy(v14, unk_A8B380); /*0x46d4cd*/
  int result; // eax
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (unsigned char)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    int i; // esi
    for ( i = 0; i < 8; ++i )
    {
      int v2; // ecx
      v2 = *(&dword_A8DA90 + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(unsigned int *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(unsigned int *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(unsigned int *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        int Option; // eax
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        int v4; // ecx
        v4 = *(&dword_A8DA90 + i); /*0x46d51c*/
        *(unsigned int *)&v14[4 * i + 44] = Option; /*0x46d523*/
        int PlayerSide; // eax
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        int v6; // ecx
        v6 = *(&dword_A8DA90 + i); /*0x46d52c*/
        *(unsigned int *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(unsigned int *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      char *v7; // eax
      v7 = ToWideStringChar((char *)*(&dword_A8DA90 + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(unsigned int *)&v14[4 * i + 44],
        *(unsigned int *)&v14[4 * i + 76],
        *(unsigned int *)&v14[4 * i + 108]);
      int v8; // ecx
      v8 = g_abs_A8B2BC[i]; /*0x46d588*/
      int v9; // edx
      v9 = g_abs_A8B27C[i]; /*0x46d58f*/
      *(unsigned int *)&v14[4 * i + 140] = g_abs_A8B29C[i]; /*0x46d596*/
      int v10; // eax
      v10 = g_abs_A8B2DC[i]; /*0x46d59d*/
      *(unsigned int *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(unsigned int *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(unsigned int *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      int v11; // eax
      v11 = g_abs_A8B2FC[i]; /*0x46d5b9*/
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
    wchar_t **v12; // esi
    v12 = (wchar_t **)&unk_A8DA94; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (unsigned char)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)unk_A8E9C0, (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = (int)(Network::ReceiveLoop(unk_A8E9C0)); /*0x46d632*/
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


  ++dword_A8E7AC; /*0x53445f*/
  stru_B0F698.Count = 0; /*0x534465*/
  AbstractClassVector::ddtor((int)&stru_B0F698); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  size_t i; // eax
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
    int v1; // ecx
    v1 = *(unsigned int *)(g_BuildingLoadQueue_Array.vtable0 + 4); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (**)(int, int))(*(unsigned int *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ObjectClass *v5; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v5); /*0x5344c6*/
  while ( dword_A8ED50 ) /*0x5344d1*/
    (*(void (**)(unsigned int))(**(unsigned int **)dword_A8ED44 + 8))(*(unsigned int *)dword_A8ED44); /*0x5344dd*/
  ObjectClass *v6; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v6); /*0x5344e8*/
  while ( dword_A8E370 ) /*0x5344f3*/
  {
    if ( *(unsigned int *)dword_A8E364 ) /*0x5344fb*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E364 + 32))(*(unsigned int *)dword_A8E364, 1); /*0x534505*/
  }
  ObjectClass *v7; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v7); /*0x534510*/
  while ( g_GameObjectCleanup ) /*0x53451b*/
  {
    if ( *(unsigned int *)g_TagClassCount ) /*0x534523*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)g_TagClassCount + 32))(*(unsigned int *)g_TagClassCount, 1); /*0x53452d*/
  }
  ObjectClass *v8; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v8); /*0x534538*/
  while ( dword_A8EAF8 ) /*0x534543*/
  {
    if ( *(unsigned int *)dword_A8EAEC ) /*0x53454a*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EAEC + 32))(*(unsigned int *)dword_A8EAEC, 1); /*0x534554*/
  }
  ObjectClass *v9; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v9); /*0x53455f*/
  while ( dword_8B4148 ) /*0x53456a*/
  {
    if ( *(unsigned int *)dword_8B413C ) /*0x534571*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B413C + 32))(*(unsigned int *)dword_8B413C, 1); /*0x53457b*/
  }
  ObjectClass *v10; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v10); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(unsigned int *)dword_8B4194 ) /*0x534598*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B4194 + 32))(*(unsigned int *)dword_8B4194, 1); /*0x5345a2*/
  }
  ObjectClass *v11; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v11); /*0x5345ad*/
  while ( dword_A8EC60 ) /*0x5345b8*/
  {
    if ( *(unsigned int *)dword_A8EC54 ) /*0x5345bf*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EC54 + 32))(*(unsigned int *)dword_A8EC54, 1); /*0x5345c9*/
  }
  ObjectClass *v12; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v12); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(unsigned int *)dword_A8020C ) /*0x5345e6*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8020C + 32))(*(unsigned int *)dword_A8020C, 1); /*0x5345f0*/
  }
  ObjectClass *v13; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v13); /*0x5345fb*/
  while ( dword_A8EC48 ) /*0x534606*/
  {
    if ( *(unsigned int *)dword_A8EC3C ) /*0x53460d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8EC3C + 32))(*(unsigned int *)dword_A8EC3C, 1); /*0x534617*/
  }
  ObjectClass *v14; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v14); /*0x534622*/
  while ( dword_A83E40 ) /*0x53462d*/
  {
    if ( *(unsigned int *)dword_A83E34 ) /*0x534634*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A83E34 + 32))(*(unsigned int *)dword_A83E34, 1); /*0x53463e*/
  }
  ObjectClass *v15; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v15); /*0x534649*/
  while ( dword_8B4130 ) /*0x534654*/
  {
    if ( *(unsigned int *)dword_8B4124 ) /*0x53465b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B4124 + 32))(*(unsigned int *)dword_8B4124, 1); /*0x534665*/
  }
  ObjectClass *v16; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v16); /*0x534670*/
  while ( dword_8B40F8 ) /*0x53467b*/
  {
    if ( *(unsigned int *)dword_8B40EC ) /*0x534682*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B40EC + 32))(*(unsigned int *)dword_8B40EC, 1); /*0x53468c*/
  }
  ObjectClass *v17; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v17); /*0x534697*/
  while ( dword_A80238 ) /*0x5346a2*/
  {
    if ( dword_A8022C->vtable0 ) /*0x5346a9*/
      (*(void (**)(int, int))(*(unsigned int *)dword_A8022C->vtable0 + 32))(dword_A8022C->vtable0, 1); /*0x5346b3*/
  }
  ObjectClass *v18; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v18); /*0x5346be*/
  while ( dword_A8E9B8 ) /*0x5346c9*/
  {
    if ( *(unsigned int *)dword_A8E9AC ) /*0x5346d0*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E9AC + 32))(*(unsigned int *)dword_A8E9AC, 1); /*0x5346da*/
  }
  ObjectClass *v19; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v19); /*0x5346e5*/
  while ( dword_8872C0 ) /*0x5346f0*/
  {
    if ( *(unsigned int *)dword_8872B4 ) /*0x5346f7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8872B4 + 32))(*(unsigned int *)dword_8872B4, 1); /*0x534701*/
  }
  ObjectClass *v20; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v20); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(unsigned int *)dword_B04BD4 ) /*0x53471e*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B04BD4 + 32))(*(unsigned int *)dword_B04BD4, 1); /*0x534728*/
  }
  ObjectClass *v21; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v21); /*0x534733*/
  while ( dword_ABCA20 ) /*0x53473e*/
  {
    if ( *(unsigned int *)dword_ABCA14 ) /*0x534745*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_ABCA14 + 32))(*(unsigned int *)dword_ABCA14, 1); /*0x53474f*/
  }
  ObjectClass *v22; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v22); /*0x53475a*/
  while ( dword_8A3880 ) /*0x534765*/
  {
    if ( *(unsigned int *)dword_8A3874 ) /*0x53476c*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A3874 + 32))(*(unsigned int *)dword_8A3874, 1); /*0x534776*/
  }
  ObjectClass *v23; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v23); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(unsigned int *)dword_89E0F4 ) /*0x534793*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_89E0F4 + 32))(*(unsigned int *)dword_89E0F4, 1); /*0x53479d*/
  }
  ObjectClass *v24; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v24); /*0x5347a8*/
  while ( dword_8A0218 ) /*0x5347b3*/
  {
    if ( *(unsigned int *)dword_8A020C ) /*0x5347ba*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A020C + 32))(*(unsigned int *)dword_8A020C, 1); /*0x5347c4*/
  }
  ObjectClass *v25; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v25); /*0x5347cf*/
  while ( dword_AC4920 ) /*0x5347da*/
  {
    if ( *(unsigned int *)dword_AC4914 ) /*0x5347e1*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_AC4914 + 32))(*(unsigned int *)dword_AC4914, 1); /*0x5347eb*/
  }
  ObjectClass *v26; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v26); /*0x5347f6*/
  while ( dword_B0EC70 ) /*0x534801*/
  {
    if ( *(unsigned int *)dword_B0EC64 ) /*0x534808*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B0EC64 + 32))(*(unsigned int *)dword_B0EC64, 1); /*0x534812*/
  }
  ObjectClass *v27; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v27); /*0x53481d*/
  while ( dword_889FC8 ) /*0x534828*/
  {
    if ( *(unsigned int *)dword_889FBC ) /*0x53482f*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_889FBC + 32))(*(unsigned int *)dword_889FBC, 1); /*0x534839*/
  }
  ObjectClass *v28; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v28); /*0x534844*/
  while ( dword_B0B890 ) /*0x53484f*/
  {
    if ( *(unsigned int *)dword_B0B884 ) /*0x534856*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B0B884 + 32))(*(unsigned int *)dword_B0B884, 1); /*0x534860*/
  }
  ObjectClass *v29; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v29); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(unsigned int *)dword_89C66C ) /*0x53487d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_89C66C + 32))(*(unsigned int *)dword_89C66C, 1); /*0x534887*/
  }
  ObjectClass *v30; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v30); /*0x534892*/
  while ( dword_AC1688 ) /*0x53489d*/
  {
    void *v2; // esi
    v2 = *(void **)dword_AC167C; /*0x5348a5*/
    if ( *(unsigned int *)dword_AC167C ) /*0x5348a5*/
    {
      (*(BuildingLightQueue **)dword_AC167C)->RemoveEntry(); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ObjectClass *v31; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v31); /*0x5348c4*/
  while ( g_FootClassConfig ) /*0x5348cf*/
  {
    if ( *(unsigned int *)dword_8B3D14 ) /*0x5348d7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8B3D14 + 32))(*(unsigned int *)dword_8B3D14, 1); /*0x5348e1*/
  }
  ObjectClass *v32; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v32); /*0x5348ec*/
  while ( g_AlphaShapeLimit ) /*0x5348f7*/
  {
    if ( *(unsigned int *)dword_88A0F4 ) /*0x5348fe*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_88A0F4 + 32))(*(unsigned int *)dword_88A0F4, 1); /*0x534908*/
  }
  ObjectClass *v33; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v33); /*0x534913*/
  while ( dword_A8E998 ) /*0x53491e*/
  {
    if ( *(unsigned int *)dword_A8E98C ) /*0x534925*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E98C + 32))(*(unsigned int *)dword_A8E98C, 1); /*0x53492f*/
  }
  ObjectClass *v34; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v34); /*0x53493a*/
  TechnoClass *v35; // [esp+0h] [ebp-4h]
  sub_4C29E0(v35); /*0x53493f*/
  ObjectClass *v36; // [esp+0h] [ebp-4h]
  Game_Destroy(v36); /*0x534944*/
  Game *v3; // ecx
  (v3)->loadCampaignData(); /*0x534949*/
  while ( dword_A8E978 ) /*0x534954*/
  {
    if ( *(unsigned int *)dword_A8E96C ) /*0x53495b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E96C + 32))(*(unsigned int *)dword_A8E96C, 1); /*0x534965*/
  }
  ObjectClass *v37; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v37); /*0x534970*/
  if ( g_TacticalClass_Instance ) /*0x53497d*/
    (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)g_TacticalClass_Instance + 32))( /*0x534983*/
      g_TacticalClass_Instance,
      1);
  g_TacticalClass_Instance = 0; /*0x53498b*/
  ((MapClass *)&dword_87F7E8)->FreeAllCells(); /*0x534991*/
  ObjectClass *v38; // [esp+0h] [ebp-4h]
  ProcessExpiredPointers(v38); /*0x534996*/
  ((Game *)&g_VisibilitySystem)->initScenario(); /*0x5349a0*/
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

  result = GetClientRect(g_hWnd, &Rect); /*0x537bd3*/
  if ( result ) /*0x537bdb*/
  {
    Point.x = Rect.left; /*0x537bef*/
    Point.y = Rect.top; /*0x537bff*/
    result = ClientToScreen(g_hWnd, &Point); /*0x537c03*/
    if ( result ) /*0x537c07*/
    {
      v14 = *(struct tagPOINT *)&Rect.right; /*0x537c15*/
      result = ClientToScreen(g_hWnd, &v14); /*0x537c28*/
      if ( result ) /*0x537c2c*/
      {
        v10 = Point; /*0x537c3e*/
        v12 = Rect.bottom + 1; /*0x537c4c*/
        v11 = Rect.right + 1; /*0x537c56*/
        v2 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 31))(g_DSurface_Hidden); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 31))(g_DSurface_Hidden); /*0x537c70*/
        v3 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 32))(g_DSurface_Hidden); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 32))(g_DSurface_Hidden); /*0x537c96*/
        (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x537ca4*/
        v4 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 31))(g_DSurface_Hidden); /*0x537cb8*/
        v5 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->ptr_0 + 32))(g_DSurface_Hidden); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*((void (**)(ObjectClass *, unsigned int *, DSurface *, struct tagPOINT *, unsigned int, int))g_DSurface_Hidden->ptr_0 /*0x537cf0*/
         + 2))(
          g_DSurface_Hidden,
          v15,
          g_DSurface_Primary,
          &v10,
          0,
          1);
        (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, "SCRN%04d.pcx", ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(&v19, Buffer); /*0x537d27*/
          v8 = v7->vt_slot_20(0); /*0x537d3b*/
          /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          *(unsigned int *)v19.__tail_0 = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(&v16, Buffer); /*0x537d7b*/
        CompressScreenshot((int *)v16.__tail_0, (int *)g_DSurface_Hidden, &FileSystem_TEMPERAT_PAL); /*0x537d8f*/
        /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        *(unsigned int *)v16.__tail_0 = &off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x537dbb*/
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

  Waypoint *v5; // eax
  Waypoint *v6; // esi
  int v7; // eax
  Waypoint *v8; // eax
  Waypoint *v9; // esi
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
  Game::processStartup((Game *)this); /*0x5b70a7*/
  dword_A8B54C = 0; /*0x5b70b1*/
  v5 = (Waypoint *)__2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v6 = v5; /*0x5b70c0*/
  if ( v5 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid(&v5->q028); /*0x5b70d3*/
    BulkCharToWide(v6, (unsigned __int8 *)unk_A8B380, -1); /*0x5b70e0*/
    *(unsigned int *)&v6[1].__pad_0[15] = dword_A8B3AC; /*0x5b70ea*/
    *(unsigned int *)&v6[1].__pad_0[23] = dword_A8B394; /*0x5b70f3*/
    *(unsigned int *)&v6[1].__pad_0[55] = -1; /*0x5b70f6*/
    if ( *(int *)&stru_A8D804.__pad_3D[579] < *(int *)&stru_A8D804.__pad_3D[571] /*0x5b7130*/
      || (stru_A8D804.__pad_3D[576] || !*(unsigned int *)&stru_A8D804.__pad_3D[571])
      && *(int *)&stru_A8D804.__pad_3D[583] > 0
      && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A8D804.__pad_3D[563] + 8))(
           &stru_A8D804.__pad_3D[563],
           *(unsigned int *)&stru_A8D804.__pad_3D[571] + *(unsigned int *)&stru_A8D804.__pad_3D[583],
           0) )
    {
      v7 = (*(unsigned int *)&stru_A8D804.__pad_3D[579])++; /*0x5b713d*/
      *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v7) = v6; /*0x5b714c*/
    }
    ++dword_A8B54C; /*0x5b714f*/
  }
  v8 = (Waypoint *)__2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v9 = v8; /*0x5b715f*/
  if ( v8 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid(&v8->q028); /*0x5b716f*/
    wcscpy((wchar_t *)v9, &this->q020); /*0x5b7179*/
    *(unsigned int *)&v9[1].__pad_0[15] = this->u32_4C; /*0x5b7184*/
    *(unsigned int *)&v9[1].__pad_0[23] = this->u32_48; /*0x5b718a*/
    *(unsigned int *)&v9[1].__pad_0[55] = -1; /*0x5b718d*/
    if ( *(int *)&stru_A8D804.__pad_3D[579] < *(int *)&stru_A8D804.__pad_3D[571] /*0x5b71c7*/
      || (stru_A8D804.__pad_3D[576] || !*(unsigned int *)&stru_A8D804.__pad_3D[571])
      && *(int *)&stru_A8D804.__pad_3D[583] > 0
      && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A8D804.__pad_3D[563] + 8))(
           &stru_A8D804.__pad_3D[563],
           *(unsigned int *)&stru_A8D804.__pad_3D[571] + *(unsigned int *)&stru_A8D804.__pad_3D[583],
           0) )
    {
      v10 = (*(unsigned int *)&stru_A8D804.__pad_3D[579])++; /*0x5b71d4*/
      *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) = v9; /*0x5b71e3*/
    }
    ++dword_A8B54C; /*0x5b71e6*/
  }
  if ( dword_A8B54C != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF(aTxtSendingGoAc, 0, aDRa2mdpostMode, 1779); /*0x5b7211*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v13 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v14 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5b7231*/
  if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5b7239*/
    v14 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue((Count *)&stru_A8E960.altNextScenario[12]) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v15 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5b7260*/
    if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5b7268*/
      v15 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5b727a*/
    if ( (unsigned int)(v15 - v14) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v16 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5b728b*/
      if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5b7293*/
        v16 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5b72a5*/
      if ( (unsigned int)(v16 - v14) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&stru_A8E960.altNextScenario[12]); /*0x5b72bd*/
  }
  if ( v13 ) /*0x5b72c6*/
    Dialog::Destroy(v13); /*0x5b72ca*/
  EventClass::CheckFlag((EventClass *)&stru_A8E960.altNextScenario[12]); /*0x5b72d4*/
  byte_A8D60E = 0; /*0x5b72e4*/
  dword_A8B230[130].ptr_C = *(unsigned int *)&stru_A8B250.__pad_0[4]; /*0x5b72eb*/
  dword_A8B54C = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x5b730b*/
  v17 = *(unsigned int *)stru_A8E960.nextScenario; /*0x5b7311*/
  BYTE1(v17) = stru_A8E960.nextScenario[1] & 0x77; /*0x5b7319*/
  v18 = v17 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v18) = stru_A8E960.nextScenario[0] | 0xC0; /*0x5b7326*/
  *(unsigned int *)&stru_A8E960.random[528] = 0; /*0x5b7329*/
  dword_A8B24C = 2; /*0x5b7333*/
  *(unsigned int *)stru_A8E960.nextScenario = v18; /*0x5b733d*/
  nullsub_37(a2); /*0x5b7343*/
  return 1; /*0x5b709d*/

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
  __int16 v12; // [esp+100h] [ebp-70h]
  CCFileClass v13; // [esp+104h] [ebp-6Ch] BYREF
  int v14[3]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *&this->q058; /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *&this->u32_54; /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *&this->u32_5C; /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(int *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(int *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(); /*0x5ba6db*/
  Field3 = NetworkBuffer::GetField3(); /*0x5ba6df*/
  *(int *)((char *)&v11[36] + 2) = MEMORY[0xA8ED94]; /*0x5ba6f0*/
  *(int *)((char *)&v11[37] + 2) = stru_A8E960[0]; /*0x5ba6fd*/
  *(int *)((char *)&v11[8] + 2) = Field3; /*0x5ba70a*/
  BYTE2(v11[40]) = stru_A8B250.__pad_0[24]; /*0x5ba71b*/
  v7 = *(int *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(int *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                 | (16
                                  * (stru_A8B250.__pad_0[18] & 1
                                   | (2
                                    * (stru_A8B250.__pad_0[19] & 1
                                     | (2 * (stru_A8B250.__pad_0[20] & 1 | (2 * (stru_A8B250.__pad_0[28] & 1))))))));
  LOBYTE(v11[6]) = MEMORY[0xA8DB30]; /*0x5ba75d*/
  v8 = dword_A8B394; /*0x5ba776*/
  strcpy((char *)&v11[1], unk_A8B380); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(int *)((char *)&v11[6] + 1) = dword_A8B3AC; /*0x5ba797*/
  *(int *)((char *)&v11[31] + 2) = *(unsigned int *)&stru_A8B250.__pad_0[12]; /*0x5ba79b*/
  v9 = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFFE | stru_A8B250.__pad_0[8] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | stru_A8B250.__pad_0[8] & 1; /*0x5ba7cc*/
  *(int *)((char *)&v11[32] + 2) = v9 | (2 * (stru_A8B250.__pad_0[16] & 1 | (2 * (stru_A8B250.__pad_0[17] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = stru_A8B250.__pad_0[36]; /*0x5ba819*/
  *(int *)((char *)&v11[35] + 2) = *(int *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                 | (4 * (dword_A8B320 & 1)) & 0xF5
                                 | (2 * (byte_A8B31D & 1 | (4 * (byte_A8B31F & 1))));
  BYTE1(v11[35]) = stru_A8B250.__pad_0[40]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = stru_A8B250.__pad_0[32]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4])); /*0x5ba85e*/
  CCFileClass::Construct(&v13, (char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88)); /*0x5ba87f*/
  *(int *)((char *)&v11[39] + 2) = CCFileClass::GetSize(&v13); /*0x5ba896*/
  strncpy( /*0x5ba8b3*/
    (char *)&v11[40] + 3,
    (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88),
    0xDu);
  strncpy( /*0x5ba8d7*/
    (char *)&v11[44],
    (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 348),
    0x20u);
  *(int *)((char *)&v11[32] + 2) = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                 | (16
                                  * (*(unsigned char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 380)
                                   & 1));
  Stream::WriteBlock(&MEMORY[0xA8EA70].ptr_0, (int)v11, 250, 1); /*0x5ba91d*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  *(unsigned int *)v13.__tail_0 = &off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v13); /*0x5ba95b*/

}
}
// 0x5CA110
namespace gamemd {
int Game::GetMultiplayerScoreScreenBar()
{

  void *NeedsSaveOrLink; // eax
  NeedsSaveOrLink = ((unsigned int *)(dword_A8B230))[374].NeedsSaveOrLink; /*0x5ca115*/
  if ( NeedsSaveOrLink ) /*0x5ca11d*/
  {
    if ( NeedsSaveOrLink == 1 ) /*0x5ca21f*/
    {
      if ( !this ) /*0x5ca227*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B4C), 0); /*0x5ca23b*/
      if ( this == 1 ) /*0x5ca23f*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B50), 0); /*0x5ca253*/
      if ( this == 2 ) /*0x5ca257*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B54), 0); /*0x5ca26c*/
      if ( this == 3 ) /*0x5ca270*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B58), 0); /*0x5ca285*/
      if ( this == 4 ) /*0x5ca289*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B5C), 0); /*0x5ca29d*/
      if ( this == 5 ) /*0x5ca2a1*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B60), 0); /*0x5ca2b6*/
      if ( this == 6 ) /*0x5ca2ba*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B64), 0); /*0x5ca2cf*/
      if ( this == 7 ) /*0x5ca2d3*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B68), 0); /*0x5ca2e7*/
      if ( this == 8 ) /*0x5ca2eb*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B6C), 0); /*0x5ca300*/
      if ( this == 9 ) /*0x5ca304*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B70), 0); /*0x5ca31d*/
    }
    else if ( NeedsSaveOrLink == 2 ) /*0x5ca321*/
    {
      if ( !this ) /*0x5ca329*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B74), 0); /*0x5ca33c*/
      if ( this == 1 ) /*0x5ca340*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B78), 0); /*0x5ca355*/
      if ( this == 2 ) /*0x5ca359*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B7C), 0); /*0x5ca36e*/
      if ( this == 3 ) /*0x5ca372*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B80), 0); /*0x5ca386*/
      if ( this == 4 ) /*0x5ca38a*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B84), 0); /*0x5ca39f*/
      if ( this == 5 ) /*0x5ca3a3*/
        return HashTable::Find(&g_DialogHashTable,(const char *)(off_844B88), 0); /*0x5ca3b8*/
      if ( this == 6 ) /*0x5ca3bc*/
        return HashTable::Find(&g_DialogHashTable, off_844B8C, 0); /*0x5ca3d0*/
      if ( this == 7 ) /*0x5ca3d4*/
        return HashTable::Find(&g_DialogHashTable, off_844B90, 0); /*0x5ca3e9*/
      if ( this == 8 ) /*0x5ca3ed*/
        return HashTable::Find(&g_DialogHashTable, off_844B94, 0); /*0x5ca402*/
      if ( this == 9 ) /*0x5ca406*/
        return HashTable::Find(&g_DialogHashTable, off_844B98, 0); /*0x5ca41a*/
    }
  }
  else
  {
    if ( !this ) /*0x5ca125*/
      return HashTable::Find(&g_DialogHashTable, off_844B24, 0); /*0x5ca139*/
    if ( this == 1 ) /*0x5ca13d*/
      return HashTable::Find(&g_DialogHashTable, off_844B28, 0); /*0x5ca152*/
    if ( this == 2 ) /*0x5ca156*/
      return HashTable::Find(&g_DialogHashTable, off_844B2C, 0); /*0x5ca16a*/
    if ( this == 3 ) /*0x5ca16e*/
      return HashTable::Find(&g_DialogHashTable, off_844B30, 0); /*0x5ca183*/
    if ( this == 4 ) /*0x5ca187*/
      return HashTable::Find(&g_DialogHashTable, off_844B34, 0); /*0x5ca19c*/
    if ( this == 5 ) /*0x5ca1a0*/
      return HashTable::Find(&g_DialogHashTable, off_844B38, 0); /*0x5ca1b4*/
    if ( this == 6 ) /*0x5ca1b8*/
      return HashTable::Find(&g_DialogHashTable, off_844B3C, 0); /*0x5ca1cd*/
    if ( this == 7 ) /*0x5ca1d1*/
      return HashTable::Find(&g_DialogHashTable, off_844B40, 0); /*0x5ca1e6*/
    if ( this == 8 ) /*0x5ca1ea*/
      return HashTable::Find(&g_DialogHashTable, off_844B44, 0); /*0x5ca1fe*/
    if ( this == 9 ) /*0x5ca202*/
      return HashTable::Find(&g_DialogHashTable, off_844B48, 0); /*0x5ca21b*/
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
  SessionClass *v6; // esi
  int PlayerSide; // edi
  int PlayerColor; // ebp
  char *v9; // esi
  int v10; // eax
  char *v11; // [esp-20h] [ebp-48h]
  int v12; // [esp-14h] [ebp-3Ch]
  void *v13; // [esp-14h] [ebp-3Ch]
  int v14; // [esp-10h] [ebp-38h]
  int Option2; // [esp-10h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-34h]
  DeleteAndZero v17; // [esp+10h] [ebp-18h] BYREF
  void *Option; // [esp+1Ch] [ebp-Ch] BYREF
  char *v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v19 = Buffer; /*0x5dbb70*/
  v20 = 0; /*0x5dbb74*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((String *)&v17.DeleteAndZero_field_0x08, &g_INI_DefaultBuffer); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign((WideString *)&v17, (wchar_t *)&dword_A8B320 + 1); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = Game_Set((char **)&Option, (const wchar_t **)&v17); /*0x5dbb95*/
  }
  String::AssignFromPtr((String *)&v17.DeleteAndZero_field_0x04, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((ObjectClass *)&v17.DeleteAndZero_field_0x08); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((ObjectClass *)&Option); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt(&v17); /*0x5dbbe4*/
  v16 = dword_A8BB04; /*0x5dbc0a*/
  v14 = (unsigned __int8)dword_A8BB08; /*0x5dbc0b*/
  v12 = dword_A8BB0C; /*0x5dbc0c*/
  v4 = String::GetOrEmpty((String *)&v17.DeleteAndZero_field_0x04); /*0x5dbc11*/
  sprintf( /*0x5dbc7e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    *(unsigned int *)&stru_A8E960.random[544],
    *(unsigned int *)&stru_A8E960.altNextScenario[252],
    *(unsigned int *)&stru_A8B250.__pad_0[24],
    *(unsigned int *)&stru_A8B250.__pad_0[12],
    *(unsigned int *)&stru_A8B250.__pad_0[32],
    (unsigned __int8)stru_A8B250.__pad_0[18],
    (unsigned __int8)stru_A8B250.__pad_0[19],
    (unsigned __int8)stru_A8B250.__pad_0[20],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)stru_A8B250.__pad_0[17],
    *(unsigned int *)stru_A8B250.__pad_0,
    stru_A8E960.homeCell,
    v4,
    v12,
    v14,
    v16,
    byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_ABFF94, 0, 0x200u); /*0x5dbc92*/
  v5 = 0; /*0x5dbc99*/
  v17.DeleteAndZero_field_0x08 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x5dbc9d*/
  if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(SessionClass **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5); /*0x5dbca8*/
      PlayerSide = SessionClass::GetPlayerSide(&v6->GameMode); /*0x5dbcb4*/
      PlayerColor = SessionClass::GetPlayerColor(v6); /*0x5dbcbd*/
      Option = (void *)SessionClass::GetOption(&v6->GameMode); /*0x5dbcc6*/
      Option2 = SessionClass::GetOption2(v6); /*0x5dbce2*/
      v13 = Option; /*0x5dbce3*/
      v11 = ToWideStringChar(*(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        &byte_ABFF94[strlen(byte_ABFF94)],
        "%s,%d,%d,%d,%d,%x,%x,%x,",
        v11,
        PlayerSide,
        PlayerColor,
        v13,
        Option2,
        0,
        0,
        0);
      ++v5; /*0x5dbd13*/
    }
    while ( v5 < v17.DeleteAndZero_field_0x08 ); /*0x5dbd16*/
    v1 = v19; /*0x5dbd18*/
  }
  byte_ABFF92[strlen(byte_ABFF94) + 1] = 58; /*0x5dbd2f*/
  strcat(byte_ABFF94, asc_831340); /*0x5dbd53*/
  v9 = &stru_A8B250.__pad_0[76]; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    v10 = *(unsigned int *)v9; /*0x5dbd61*/
    if ( *(unsigned int *)v9 == -3 ) /*0x5dbd66*/
      v10 = -1; /*0x5dbd68*/
    sprintf( /*0x5dbd97*/
      &byte_ABFF94[strlen(byte_ABFF94)],
      "%d,%d,%d,%d,%d,",
      *((unsigned int *)v9 - 8),
      v10,
      *((unsigned int *)v9 + 8),
      *((unsigned int *)v9 + 16),
      *((unsigned int *)v9 + 24));
    v9 += 4; /*0x5dbd9c*/
  }
  while ( (int)v9 < (int)&stru_A8B250.__pad_0[108] ); /*0x5dbda8*/
  strlen(byte_ABFF94); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, byte_ABFF94); /*0x5dbdf7*/
  DeleteAndZero((ObjectClass *)&v17.DeleteAndZero_field_0x04); /*0x5dbe04*/

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
  unsigned __int8 v16; // [esp+13h] [ebp-1Dh]
  unsigned char *v17; // [esp+14h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned char v19[16]; // [esp+20h] [ebp-10h] BYREF

  v3 = 0; /*0x6579ef*/
  v4 = this->u8_14BD; /*0x6579f1*/
  v17 = 0; /*0x6579f7*/
  v5 = g_AsyncIOState > 0; /*0x6579fd*/
  v16 = 0; /*0x657a02*/
  if ( !v4 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    result = Audio::IsPlaying(); /*0x657a0c*/
    v3 = v17; /*0x657a11*/
  }
  if ( this->u8_14DA == 1 && !this->u8_14BD ) /*0x657a22*/
  {
    v6 = VtableStub::72F510(); /*0x657a35*/
    v18[0] = this->u32_11E4; /*0x657a4d*/
    v18[1] = this->u32_11EC; /*0x657a5f*/
    v7 = (int *)(*((int (**)(DSurface *, unsigned char *))DSurface_Sidebar + 30))( /*0x657a6a*/
                  DSurface_Sidebar,
                  v19);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v6, dword_B04A38, 0x20u, v18, v7, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v8 = this->u32_11EC; /*0x657a95*/
    this->u32_120C = this->u32_11E4; /*0x657aab*/
    this->u32_1210 = v8; /*0x657aae*/
    this->u32_1214 = 168; /*0x657ab1*/
    this->u32_1218 = 110; /*0x657ab4*/
    result = Debug::Log(); /*0x657ab7*/
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
      result = (*(int (**)(int *, unsigned char **))(dword_B45B58 + 16))(&dword_B45B58, &v17); /*0x657b52*/
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
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel(&this->Mixer_14C0); /*0x657bb9*/
      v10 = (unsigned int *)PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1784), 0x2000, 1.0, 0); /*0x657bd8*/
      result = SetAudioSource((int)&this->u32_5300, v10, 0); /*0x657be1*/
      this->u32_14AC = 4; /*0x657be6*/
      this->u32_14FC = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)v3 + 4))(v3) == 1 ) /*0x657af3*/
  {
    v9 = this->u32_11EC; /*0x657b01*/
    this->u32_120C = this->u32_11E4; /*0x657b12*/
    this->u32_1210 = v9; /*0x657b15*/
    this->u32_1214 = 168; /*0x657b18*/
    this->u32_1218 = 110; /*0x657b1b*/
  }
  result = (*(int (**)(unsigned char *))(*(unsigned int *)v17 + 20))(v17); /*0x657b24*/
  v3 = v17; /*0x657b27*/
  v15 = result; /*0x657b2d*/
  v16 = v17[4]; /*0x657b34*/
  if ( (unsigned char)result == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
  LABEL_22:
  this->u8_14D9 = 0; /*0x657bfa*/
  if ( !v5 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v11 = this->u32_14B4; /*0x657c0f*/
    this->u32_14AC = 5; /*0x657c1a*/
    RadarClass::SetViewMode((int *)this->__pad_000, v11, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v16 = 0; /*0x657c37*/
    Mixer::ReleaseChannel(&this->Mixer_14C0); /*0x657c3d*/
    v12 = (unsigned int *)PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1788), 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource((int)&this->u32_5300, v12, 0); /*0x657c64*/
    result = RadarClass::SetGlobal(**(RadarClass ***)&g_RulesClass_Instance); /*0x657c71*/
    this->u8_14D9 = 1; /*0x657c76*/
  }
  LOBYTE(result) = v16; /*0x657c81*/
  v13 = this->u8_14BC == v16; /*0x657c90*/
  this->u8_14BD = v15 == 0; /*0x657c92*/
  if ( !v13 ) /*0x657c98*/
  {
    if ( v16 ) /*0x657c9c*/
    {
      result = (unsigned int)SetScenarioClassTimer(0); /*0x657ca0*/
      this->u8_14BC = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned int)ScenarioClass::ProcessIntroTimer(v14); /*0x657cc8*/
      this->u8_14BC = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/

}
}
// 0x67C3A0
namespace gamemd {
unsigned int * Game::LockMutex(int aP1, int aP2)
{

  this->ptr_4 = 0; /*0x67c3ab*/
  *(unsigned int *)this->ptr_8 = aP1; /*0x67c3ae*/
  this->__pad_00C = 1; /*0x67c3b1*/
  this->__pad_8[5] = 0; /*0x67c3b5*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x67c3b8*/
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
  ComPtr *p_ppstgOpen; // ecx
  int v5; // eax
  ObjectClass *v6; // [esp+2Ch] [ebp-518h]
  int v7; // [esp+2Ch] [ebp-518h]
  SidebarClass *v8; // [esp+2Ch] [ebp-518h]
  BuildingClass *v9; // [esp+2Ch] [ebp-518h]
  BuildingClass *v10; // [esp+2Ch] [ebp-518h]
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v12; // [esp+40h] [ebp-504h] BYREF
  ComPtr v13; // [esp+44h] [ebp-500h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  LoadOptions v15; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset((GameState *)&v15); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, a1_1, -1, (LPWSTR)&v13.ComPtr_field_0x0C, 64); /*0x67e47e*/
  ComPtr::ReleaseSimple((ComPtr *)&ppstgOpen); /*0x67e484*/
  ppstgOpen = 0; /*0x67e49e*/
  if ( StgOpenStorage((const WCHAR *)&v13.ComPtr_field_0x0C, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67e4a6*/
  {
    ComPtr::ReleaseSimple((ComPtr *)&ppstgOpen); /*0x67e4ac*/
    return 0; /*0x67e4bd*/
  }
  COM = ScenarioPropertyReadCOM((int)&v15, (int)ppstgOpen); /*0x67e4ca*/
  p_ppstgOpen = (ComPtr *)&ppstgOpen; /*0x67e4d1*/
  if ( COM < 0 ) /*0x67e4d5*/
    goto LABEL_6; /*0x67e4d5*/
  ComPtr::ReleaseSimple((ComPtr *)&ppstgOpen); /*0x67e4d7*/
  *(unsigned int *)&dword_A8B238 = LoadOptions::GetFlag252(&v15); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper(&SwizzleManagerClass_Instance); /*0x67e4f2*/
  *(unsigned int *)v13.__pad_0 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, a1_1, -1, pwcsName, 64); /*0x67e50a*/
  ComPtr::ReleaseSimple(&v13); /*0x67e510*/
  *(unsigned int *)v13.__pad_0 = 0; /*0x67e527*/
  if ( StgOpenStorage(pwcsName, 0, 0x20u, 0, 0, (IStorage **)&v13) < 0 ) /*0x67e52f*/
  {
    p_ppstgOpen = &v13; /*0x67e531*/
LABEL_6:
    ComPtr::ReleaseSimple(p_ppstgOpen); /*0x67e535*/
    return 0; /*0x67e546*/
  }
  v13.ComPtr_field_0x04 = 0; /*0x67e54b*/
  if ( !*(unsigned int *)v13.__pad_0 ) /*0x67e551*/
    sub_7DC720(-2147467261); /*0x67e558*/
  if ( (*(int (**)(unsigned int, _UNKNOWN **, unsigned int, int, unsigned int, int *))(**(unsigned int **)v13.__pad_0 + 16))( /*0x67e577*/
         *(unsigned int *)v13.__pad_0,
         &off_83D5A8,
         0,
         16,
         0,
         &v13.ComPtr_field_0x04) >= 0 )
  {
    v12 = 0; /*0x67e5a6*/
    Game::readIniSettings((Game *)&v12); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &stru_83D598, (void **)&v12); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v12 ) /*0x67e5fd*/
      sub_7DC720(-2147467261); /*0x67e604*/
    (*(void (**)(int, int))(*(unsigned int *)v12 + 12))(v12, v13.ComPtr_field_0x04); /*0x67e615*/
    v13.ComPtr_field_0x08 = 0; /*0x67e618*/
    if ( v12 ) /*0x67e620*/
    {
      v5 = Game::validateScenario((Game *)&v13.ComPtr_field_0x08, &v12); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        sub_7DC720(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)&stru_AC4B48.__pad_2F4[284], 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start((LoadGame *)v13.ComPtr_field_0x08); /*0x67e659*/
    if ( !v12 ) /*0x67e664*/
      sub_7DC720(-2147467261); /*0x67e66b*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v12 + 16))(v12, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper(&SwizzleManagerClass_Instance); /*0x67e680*/
    Game_Load(v6); /*0x67e685*/
    SidebarClass::InitButtons((TabClass *)&dword_87F7E8); /*0x67e68f*/
    TacticalClass::BuildCommandBar((TabClass *)1, (int)MultiByteToWideChar, v7); /*0x67e69f*/
    SidebarClass::LoadResources(v8); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(v9); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(v10); /*0x67e6b3*/
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x67e6bd*/
    stru_A8E960.random[488] = 1; /*0x67e6c4*/
    byte_A8E378 = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( v13.ComPtr_field_0x08 ) /*0x67e6ee*/
      (*(void (**)(int))(*(unsigned int *)v13.ComPtr_field_0x08 + 8))(v13.ComPtr_field_0x08); /*0x67e6f3*/
    if ( v12 ) /*0x67e6fc*/
      (*(void (**)(int))(*(unsigned int *)v12 + 8))(v12); /*0x67e701*/
    if ( v13.ComPtr_field_0x04 ) /*0x67e70a*/
      (*(void (**)(int))(*(unsigned int *)v13.ComPtr_field_0x04 + 8))(v13.ComPtr_field_0x04); /*0x67e70f*/
    if ( *(unsigned int *)v13.__pad_0 ) /*0x67e718*/
      (*(void (**)(unsigned int))(**(unsigned int **)v13.__pad_0 + 8))(*(unsigned int *)v13.__pad_0); /*0x67e71d*/
    return 1; /*0x67e722*/
  }
  else
  {
    if ( v13.ComPtr_field_0x04 ) /*0x67e57f*/
      (*(void (**)(int))(*(unsigned int *)v13.ComPtr_field_0x04 + 8))(v13.ComPtr_field_0x04); /*0x67e584*/
    if ( *(unsigned int *)v13.__pad_0 ) /*0x67e58d*/
      (*(void (**)(unsigned int))(**(unsigned int **)v13.__pad_0 + 8))(*(unsigned int *)v13.__pad_0); /*0x67e592*/
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

  result = (*(int (**)(Game *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67f9d3*/
             this,
             &DataGlobal_A8EC94,
             4,
             0);
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&DataGlobal_A8EC94); /*0x67f9e8*/
    result = (*(int (**)(Game *, Object **, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67f9f9*/
               this,
               &dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&dword_A83D4C); /*0x67fa0e*/
      result = (*(int (**)(Game *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fa1f*/
                 this,
                 &TeamTypeClass_Array,
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
            LABEL_14:
            for ( i = 0; i < *(int *)&Instance; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking( /*0x67fade*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(unsigned int *)&DataGlobal_A8EB00[444] + 4 * i));
            result = (*(int (**)(Game *, float *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fafc*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState((SuperWeapon *)this); /*0x67fb09*/
              result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fb1a*/
                         this,
                         &v13,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
                  LABEL_27:
                  for ( j = 0; j < (int)dword_8B40D8; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking( /*0x67fbc2*/
                      (int)&SwizzleManagerClass_Instance,
                      (int *)&DataGlobal_8B3DC0[780]->ObjectClass + j);
                  result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fbdd*/
                             this,
                             &v13,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
                      LABEL_39:
                      for ( k = 0; k < FootClass_Array; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking( /*0x67fc84*/
                          (int)&SwizzleManagerClass_Instance,
                          (int *)(FootClass_Array.?[5] + 4 * k));
                      result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fc9f*/
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (**)(Game *, double *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fcc8*/
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (**)(Game *, char *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fcdb*/
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (**)(Game *, MissionClass *, int, unsigned int))(*(unsigned int *)this->__pad_000 /*0x67fcf1*/
                                         + 12))(
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fd04*/
                                        this,
                                        &dword_B07784,
                                        4,
                                        0);
                                return v12 >= 0 ? 0 : v12;
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
                        result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( FootClass_Array < FootClass_Array.?[6] /*0x67fc3f*/
                          || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
                          && DataGlobal_8B3DC0[1020] > 0
                          && (*(unsigned __int8 (**)(int *, int, unsigned int))(DataGlobal_8B3DC4 + 8))(
                               &DataGlobal_8B3DC4,
                               FootClass_Array.?[6] + FootClass_Array.?[1],
                               0) )
                        {
                          v10 = FootClass_Array++; /*0x67fc52*/
                          *(unsigned int *)(dword_8B41B8 + 4 * v10) = v14; /*0x67fc5f*/
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
                    result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fb3b*/
                               this,
                               &v14,
                               4,
                               0);
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( (int)FootClass_Array.? < (int)FootClass_Array.? /*0x67fb7d*/
                      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
                      && FootClass_Array > 0
                      && ((unsigned __int8 (*)(ParticleSystemClass **, char *, unsigned int))FootClass_Array.?->?)(
                           &FootClass_Array.?,
                           (char *)FootClass_Array.? + FootClass_Array,
                           0) )
                    {
                      v7 = dword_8B40CC++; /*0x67fb90*/
                      *((unsigned int *)&dword_8B40D8->ObjectClass + (unsigned int)v7) = v14; /*0x67fb9d*/
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
              result = (*(int (**)(Game *, int *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 12))( /*0x67fa57*/
                         this,
                         &v14,
                         4,
                         0);
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( *(int *)&Instance < *(int *)&DataGlobal_A8EB00[448] /*0x67fa99*/
                || (DataGlobal_A8EB00[453] || !*(unsigned int *)&DataGlobal_A8EB00[448])
                && *(int *)&DataGlobal_A8EB00[460] > 0
                && (*(unsigned __int8 (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&DataGlobal_A8EB00[440] + 8))(
                     &DataGlobal_A8EB00[440],
                     *(unsigned int *)&DataGlobal_A8EB00[448] + *(unsigned int *)&DataGlobal_A8EB00[460],
                     0) )
              {
                v4 = (*(unsigned int *)&Instance)++; /*0x67faac*/
                *(unsigned int *)(*(unsigned int *)&dword_A8ECC8 + 4 * v4) = v14; /*0x67fab9*/
              }
              if ( ++v3 >= v13 ) /*0x67fac3*/
                goto LABEL_14; /*0x67fac3*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67fd11*/

}
}
// 0x680F70
namespace gamemd {
int Game::validateScenario(unsigned int *a2, void *a2_1)
{


  if ( *a2 ) /*0x680f78*/
  {
    int v3; // edi
    v3 = (**(int (***)(unsigned int, void *, unsigned int **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      unsigned int *v5 = a2; // ebx /*0x680faf*/
      if ( *(unsigned int *)this->__pad_000 ) /*0x680fac*/
        (*(void (**)(unsigned int))(**(unsigned int **)this->__pad_000 + 8))(*(unsigned int *)this->__pad_000); /*0x680fba*/
      *(unsigned int *)this->__pad_000 = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *(unsigned int *)this->__pad_000 ) /*0x680f93*/
        (*(void (**)(unsigned int))(**(unsigned int **)this->__pad_000 + 8))(*(unsigned int *)this->__pad_000); /*0x680f9c*/
      *(unsigned int *)this->__pad_000 = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    int v6; // eax
    v6 = *(unsigned int *)this->__pad_000; /*0x680fc7*/
    if ( *(unsigned int *)this->__pad_000 ) /*0x680fc7*/
    {
      *(unsigned int *)this->__pad_000 = 0; /*0x680fcd*/
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

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(dword_A8B230[130].uniqueId); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685147*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685158*/
  RadarClass::InitializeHashTable((RadarClass *)&dword_87F7E8); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    int v1; // ecx
    if ( (int)dword_A8ED84 - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v1 = 0; /*0x68518f*/
    else
      v1 = dword_B0EA88 - ((unsigned int)dword_A8ED84 - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v1; /*0x685191*/
  }
  dword_B0EA80 = (int)dword_A8ED84; /*0x6851a1*/
  CellClass::setOverlayType((CellClass *)&unk_87E8B8, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  TechnoClass *v3; // [esp+0h] [ebp-4h]
  FindBuildingClass(v3); /*0x6851b1*/
  MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}
}
// 0x698CB0
namespace gamemd {
CellStruct * * Game::Game_DumpMultiplayerGameInfo()
{

  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  int v2; // eax
  v2 = *(unsigned int *)&g_GameRulesOptions; /*0x698cb0*/
  FILE *v3 = Stream; // esi /*0x698cbc*/
  if ( *(int *)&g_GameRulesOptions < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(unsigned int *)&g_GameRulesOptions = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(dword_A8B8CC + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)&this->q148); /*0x698cfd*/
  int i; // ebp
  for ( i = 0; i < (int)this->q314; ++i ) /*0x698d0f*/
  {
    Network::CopyAddress((Network *)(dword_A8DA78[i] + 40), &Stream, (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    unsigned int j; // edi
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    unsigned int k; // edi
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", *((unsigned __int8 *)v11 + k)); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  Network::CopyAddress(&stru_A8BB1C, &Stream, (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  unsigned int m; // edi
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  unsigned int n; // edi
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", *((unsigned __int8 *)v11 + n)); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", this->q318); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", this->q680); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", this->q17C); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", this->q15C); /*0x698e6a*/
  fprintf(v3, "House = %d\n", this->q174); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", this->q314); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", (unsigned __int8)this->q020); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", this->u32_24); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", (unsigned __int8)this->q028); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", (unsigned __int8)this->u32_29); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", (unsigned __int8)this->u32_35); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", this->q038); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", this->q03C); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", this->q040); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", this->q300); /*0x698f26*/
  if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x698f54*/
      fprintf(v3, "Type = INTERNET\n"); /*0x698f5c*/
    else
      fprintf(v3, "Type = !!Unknown!!\n"); /*0x698f75*/
    return 1; /*0x698f64*/
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
  SessionClass *v6; // esi
  int v7; // ebp
  int v8; // edi
  char *v9; // esi
  char *v10; // eax
  int v11; // esi
  int v12; // edi
  char *v13; // esi
  char *v14; // [esp-20h] [ebp-78h]
  int v15; // [esp-1Ch] [ebp-74h]
  int v16; // [esp-18h] [ebp-70h]
  int v17; // [esp-14h] [ebp-6Ch]
  int v18; // [esp-14h] [ebp-6Ch]
  int v19; // [esp-10h] [ebp-68h]
  int v20; // [esp-10h] [ebp-68h]
  int v21; // [esp-Ch] [ebp-64h]
  DeleteAndZero v22; // [esp+10h] [ebp-48h] BYREF
  String v23; // [esp+1Ch] [ebp-3Ch] BYREF
  void *v24; // [esp+24h] [ebp-34h]
  int v25; // [esp+28h] [ebp-30h]
  int v26; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v31; // [esp+40h] [ebp-18h]
  char *v32; // [esp+44h] [ebp-14h]
  int v33; // [esp+48h] [ebp-10h] BYREF
  int v34[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v32 = Buffer; /*0x77e440*/
  v34[2] = 0; /*0x77e444*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((String *)&v22.DeleteAndZero_field_0x08, &g_INI_DefaultBuffer); /*0x77e47a*/
  }
  else
  {
    WideString::Assign((WideString *)&v22, (wchar_t *)&dword_A8B320 + 1); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = Game_Set((char **)&v22.DeleteAndZero_field_0x04, (const wchar_t **)&v22); /*0x77e465*/
  }
  String::AssignFromPtr(&v23, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero((ObjectClass *)&v22.DeleteAndZero_field_0x08); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero((ObjectClass *)&v22.DeleteAndZero_field_0x04); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt(&v22); /*0x77e4b4*/
  v21 = dword_A8BB04; /*0x77e4da*/
  v19 = (unsigned __int8)dword_A8BB08; /*0x77e4db*/
  v17 = dword_A8BB0C; /*0x77e4dc*/
  v4 = String::GetOrEmpty(&v23); /*0x77e4e1*/
  sprintf( /*0x77e54e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    *(unsigned int *)&stru_A8E960.random[544],
    *(unsigned int *)&stru_A8E960.altNextScenario[252],
    *(unsigned int *)&stru_A8B250.__pad_0[24],
    *(unsigned int *)&stru_A8B250.__pad_0[12],
    *(unsigned int *)&stru_A8B250.__pad_0[32],
    (unsigned __int8)stru_A8B250.__pad_0[18],
    (unsigned __int8)stru_A8B250.__pad_0[19],
    (unsigned __int8)stru_A8B250.__pad_0[20],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)stru_A8B250.__pad_0[17],
    *(unsigned int *)stru_A8B250.__pad_0,
    stru_A8E960.homeCell,
    v4,
    v17,
    v19,
    v21,
    byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v5 = 0; /*0x77e569*/
  v31 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x77e56d*/
  if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(SessionClass **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide(&v6->GameMode); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor(v6); /*0x77e593*/
      Option = SessionClass::GetOption(&v6->GameMode); /*0x77e59e*/
      v7 = 0; /*0x77e5a7*/
      v8 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2(v6); /*0x77e5ab*/
      v25 = 0; /*0x77e5af*/
      v26 = 0; /*0x77e5b3*/
      v9 = &stru_A8D804.__pad_3D[591]; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        *(unsigned int *)&v23.ptr_4 = *(unsigned int *)v9; /*0x77e5c4*/
        v24 = ToWideStringChar(*(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5)); /*0x77e5d4*/
        v10 = ToWideStringChar(*(char **)&v23.ptr_4); /*0x77e5d8*/
        if ( !_strcmpi(v24, v10) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        v9 += 4; /*0x77e5ef*/
        ++v8; /*0x77e5f2*/
        if ( (int)v9 >= (int)&stru_A8D804.__pad_3D[623] ) /*0x77e5f9*/
        {
          v11 = v25; /*0x77e5fb*/
          v12 = v26; /*0x77e5ff*/
          goto LABEL_16; /*0x77e603*/
        }
      }
      Network::GetAddress((Network *)(12 * v8 + 11066316), &v33, (int)v34, &v22); /*0x77e61e*/
      v11 = *(unsigned int *)&stru_A8D804.__pad_3FD[4 * v8 + 43]; /*0x77e623*/
      v7 = v34[0]; /*0x77e62a*/
      v12 = dword_A8E230[v8]; /*0x77e62e*/
LABEL_16:
      WideString::Assign( /*0x77e635*/
        (WideString *)&v22.DeleteAndZero_field_0x04,
        *(wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5));
      ToWideStringCharAlt((char **)&v22.DeleteAndZero_field_0x08, (const wchar_t **)&v22.DeleteAndZero_field_0x04); /*0x77e650*/
      DeleteAndZero::Alt((DeleteAndZero *)&v22.DeleteAndZero_field_0x04); /*0x77e659*/
      v20 = Option2; /*0x77e66d*/
      v18 = Option; /*0x77e672*/
      v16 = PlayerColor; /*0x77e673*/
      v15 = PlayerSide; /*0x77e674*/
      v14 = String::GetOrEmpty((String *)&v22.DeleteAndZero_field_0x08); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], "%s,%d,%d,%d,%d,%x,%x,%x,", v14, v15, v16, v18, v20, v7, v11, v12); /*0x77e69a*/
      DeleteAndZero((ObjectClass *)&v22.DeleteAndZero_field_0x08); /*0x77e6a6*/
      ++v5; /*0x77e6af*/
    }
    while ( v5 < v31 ); /*0x77e6b2*/
    v1 = v32; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, asc_831340); /*0x77e6f3*/
  v13 = &stru_A8B250.__pad_0[140]; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf( /*0x77e72f*/
      &byte_B76C24[strlen(byte_B76C24)],
      aDDDDD_0,
      *((unsigned int *)v13 - 24),
      *((unsigned int *)v13 - 16),
      *((unsigned int *)v13 - 8),
      *(unsigned int *)v13,
      v13->needsSave);
    v13 += 4; /*0x77e734*/
  }
  while ( (int)v13 < (int)&stru_A8B250.__pad_0[172] ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero((ObjectClass *)&v23); /*0x77e770*/

}
}
// 0x77F900
namespace gamemd {
Coord * * Game::ProcessIdle()
{

  int v1; // ebx
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
  void *DynamicVector_field_0x8; // esi
  int v17; // ebx
  char *v18; // edx
  unsigned int *v19; // eax
  unsigned int *v20; // esi
  int v21; // eax
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
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v2; /*0x77f94d*/
    }
    while ( v2 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
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
        StringCSF = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
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
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( *(int *)stru_B777A0.__pad_0 > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < *(int *)stru_B777A0.__pad_0; ++i ) /*0x77fa91*/
      DeleteAndZero((ObjectClass *)(stru_B777A0.DynamicArray_field_0x08 + 4 * i)); /*0x77fa9b*/
    *(unsigned int *)stru_B777A0.__pad_0 = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && *(int *)stru_B777A0.__pad_0 > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && *(int *)stru_B777A0.__pad_0 > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && *(int *)stru_B777A0.__pad_0 > 0 )
  {
    *(unsigned int *)&v29.ptr_4 = 0; /*0x77fb14*/
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fb18*/
    do /*0x77fbde*/
    {
      if ( *(int *)stru_B777A0.__pad_0 <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v6 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset(v6, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v31); /*0x77fb44*/
      v7 = *(unsigned int *)stru_B777A0.__pad_0 - 1; /*0x77fb4e*/
      if ( *(unsigned int *)stru_B777A0.__pad_0 - 1 >= 0 && v7 < *(int *)stru_B777A0.__pad_0 ) /*0x77fb57*/
      {
        String::Reassign(&v31, (const char **)(stru_B777A0.DynamicArray_field_0x08 + 4 * v7)); /*0x77fb67*/
        DynamicArray::Remove(&stru_B777A0, v7); /*0x77fb72*/
      }
      v8 = String::GetOrEmpty(&v31); /*0x77fb80*/
      if ( strlen(v8) > 9 ) /*0x77fb91*/
        v8[9] = 0; /*0x77fb93*/
      strcpy(v6 + 36, v8); /*0x77fbb1*/
      if ( v1 ) /*0x77fbbc*/
        v1->NeedsSaveOrLink = v6; /*0x77fbc4*/
      else
        *(unsigned int *)&v29.ptr_4 = v6; /*0x77fbbe*/
      v1 = (int)v6; /*0x77fbcb*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fbcd*/
      ++*(unsigned int *)v29.__pad_0; /*0x77fbda*/
    }
    while ( *(int *)v29.__pad_0 < 10 ); /*0x77fbde*/
    if ( ppv ) /*0x77fbeb*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 192))(ppv, *(unsigned int *)&v29.ptr_4); /*0x77fbf5*/
    v9 = *(unsigned int **)&v29.ptr_4; /*0x77fc03*/
    if ( *(unsigned int *)&v29.ptr_4 ) /*0x77fc05*/
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
  if ( *(int *)stru_B765F8.__pad_0 > 200 ) /*0x77fc34*/
  {
    for ( j = 0; j < *(int *)stru_B765F8.__pad_0; ++j ) /*0x77fc3a*/
      DeleteAndZero((ObjectClass *)(stru_B765F8.DynamicVector_field_0x8 + 4 * j)); /*0x77fc45*/
    *(unsigned int *)stru_B765F8.__pad_0 = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && *(int *)stru_B765F8.__pad_0 > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && *(int *)stru_B765F8.__pad_0 > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && *(int *)stru_B765F8.__pad_0 > 0 )
  {
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fcbe*/
    *(unsigned int *)&v29.ptr_4 = 0; /*0x77fcc2*/
    *(unsigned int *)v30.__pad_0 = 0; /*0x77fcc6*/
    do /*0x77fe52*/
    {
      if ( *(int *)stru_B765F8.__pad_0 <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v12 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset(v12, 0, 0x6Cu); /*0x77fce9*/
      *(unsigned int *)&v31.ptr_4 = v12; /*0x77fcf2*/
      unknown_libname_73(&v31); /*0x77fcf6*/
      v13 = *(unsigned int *)stru_B765F8.__pad_0 - 1; /*0x77fd00*/
      if ( *(unsigned int *)stru_B765F8.__pad_0 - 1 >= 0 && v13 < *(int *)stru_B765F8.__pad_0 ) /*0x77fd0d*/
      {
        String::Reassign(&v31, (const char **)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13)); /*0x77fd20*/
        if ( *(unsigned int *)stru_B765F8.__pad_0 ) /*0x77fd2c*/
        {
          if ( v13 >= *(int *)stru_B765F8.__pad_0 ) /*0x77fd34*/
            v13 = *(unsigned int *)stru_B765F8.__pad_0 - 1; /*0x77fd36*/
          DeleteAndZero((ObjectClass *)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13)); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (void *)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13),
            (const void *)(stru_B765F8.DynamicVector_field_0x8 + 4 * (v13 + 1)),
            4 * (*(unsigned int *)stru_B765F8.__pad_0 + 0x3FFFFFFF * (v13 + 1)));
          --*(unsigned int *)stru_B765F8.__pad_0; /*0x77fd7f*/
          if ( 3 * *(unsigned int *)stru_B765F8.__pad_0 <= *(int *)&stru_B765F8.DynamicVector_field_0x1[3] ) /*0x77fd89*/
          {
            v14 = *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] / 2; /*0x77fd92*/
            if ( *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] / 2 < 10 ) /*0x77fd97*/
              v14 = 10; /*0x77fd99*/
            if ( v14 < *(int *)&stru_B765F8.DynamicVector_field_0x1[3] ) /*0x77fda0*/
            {
              v15 = (void *)__2_YAPAXI_Z(4 * v14); /*0x77fdaa*/
              DynamicVector_field_0x8 = (void *)stru_B765F8.DynamicVector_field_0x8; /*0x77fdaf*/
              v17 = (int)v15; /*0x77fdba*/
              if ( stru_B765F8.DynamicVector_field_0x8 ) /*0x77fdbc*/
              {
                qmemcpy(v15, (const void *)stru_B765F8.DynamicVector_field_0x8, 4 * *(unsigned int *)stru_B765F8.__pad_0); /*0x77fdc6*/
                DynamicVector_field_0x8 = (void *)stru_B765F8.DynamicVector_field_0x8; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x77fdcf*/
              stru_B765F8.DynamicVector_field_0x8 = v17; /*0x77fdd4*/
              v12 = *(char **)&v31.ptr_4; /*0x77fdda*/
              *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] = v14; /*0x77fde1*/
            }
          }
        }
      }
      v18 = String::GetOrEmpty(&v31); /*0x77fdf0*/
      if ( strlen(v18) > 9 ) /*0x77fe01*/
        v18[9] = 0; /*0x77fe03*/
      strcpy(v12 + 36, v18); /*0x77fe23*/
      if ( *(unsigned int *)&v29.ptr_4 ) /*0x77fe2e*/
        *(unsigned int *)(*(unsigned int *)&v29.ptr_4 + 32) = v12; /*0x77fe36*/
      else
        *(unsigned int *)v29.__pad_0 = v12; /*0x77fe30*/
      *(unsigned int *)&v29.ptr_4 = v12; /*0x77fe3d*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fe41*/
      ++*(unsigned int *)v30.__pad_0; /*0x77fe4e*/
    }
    while ( *(int *)v30.__pad_0 < 10 ); /*0x77fe52*/
    if ( ppv ) /*0x77fe5f*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 188))(ppv, *(unsigned int *)v29.__pad_0); /*0x77fe69*/
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
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 12))(ppv); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (**)(LPVOID))(*(unsigned int *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 20))(dword_AC1174); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( byte_B76B44[0] && stru_B76B00.StringVector_field_0x10 == 41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( ppv && stru_B76B00.StringVector_field_0x10 && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (**)(LPVOID, struct in_addr *))(*(unsigned int *)ppv + 168))(ppv, Buffer); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && stru_B76B00.StringVector_field_0x10 && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((String *)&stru_B73E10.CChatEventSink_field_0x30, (char **)&v30); /*0x77ffe9*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x780008*/
    {
      v21 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x78000e*/
      if ( *(int *)&stru_B778FC.m_3[1] > 0 ) /*0x780015*/
      {
        v22 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v22 >= 0 && v1 < v21 ) /*0x780023*/
            qmemcpy(Buffer, (char *)dword_B77908 + v22, sizeof(Buffer)); /*0x780037*/
          String::Assign(&v29, (const char *)&Buffer[9]); /*0x780042*/
          v23 = String::ToLowerCopy(&v29, (char **)&v31.ptr_4); /*0x780050*/
          v30.tail_7 = String::Compare(&v30, (const char **)v23); /*0x780063*/
          DeleteAndZero((ObjectClass *)&v31.ptr_4); /*0x780067*/
          if ( !v30.tail_7 && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v24 = *(unsigned int *)g_UIPointerTable; /*0x78008c*/
            v25 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (**)(LPVOID, char *, int, char *))(v24 + 24))(g_UIPointerTable, v25, 1000, &v29.ptr_4); /*0x78009b*/
          }
          DeleteAndZero((ObjectClass *)&v29); /*0x7800a2*/
          v21 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x7800a7*/
          ++v1; /*0x7800ac*/
          v22 += 108; /*0x7800ad*/
        }
        while ( v1 < *(int *)&stru_B778FC.m_3[1] ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((ObjectClass *)&v30); /*0x7800cc*/
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

  if ( aP0 ) /*0x7a223d*/
  {
    if ( aP1 ) /*0x7a2245*/
    {
      const char *v5 = Buffera; // edi /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        const char *v6 = a3; // esi /*0x7a2257*/
        if ( a3 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a3 = 0; /*0x7a2272*/
          int v11; // [esp+10h] [ebp-10h] BYREF
          v11 = 0; /*0x7a2276*/
          sscanf(aP1, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a3); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          int v7 = 0; // edi /*0x7a22a2*/
          char **v8; // esi
          v8 = (char **)&dword_A8DA90; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            char *v9; // eax
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi(aP0, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          char *v13; // [esp+18h] [ebp-8h] BYREF
          v13 = Buffera; /*0x7a22de*/
          int16_t v14; // [esp+1Ch] [ebp-4h]
          v14 = 0; /*0x7a22e2*/
          int v12; // [esp+14h] [ebp-Ch] BYREF
          v12 = 0; /*0x7a22fc*/
          NetworkID::Assign((unsigned int *)(12 * v7 + 11066316), &v12, (int)&v13, 0); /*0x7a2300*/
          int v10 = v11; // eax /*0x7a2309*/
          dword_A8DC2C[v7] = (int)a3; /*0x7a230d*/
          dword_A8E230[v7] = v10; /*0x7a2314*/
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
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  strcpy(String, this); /*0x7a2359*/
  v1 = strtok(String, asc_84D68C); /*0x7a2373*/
  v2 = strtok(0, Delimiter); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, Delimiter); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, Delimiter); /*0x7a23a9*/
  v24 = strtok(0, Delimiter); /*0x7a23b7*/
  v7 = strtok(0, Delimiter); /*0x7a23bb*/
  Game_Setup(v1, v6, v24, v7); /*0x7a23cd*/
  String::Assign(&v24, v1); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  DeleteAndZero((void **)&v24); /*0x7a23f0*/
  v8 = strtok(0, Delimiter); /*0x7a2408*/
  v9 = strtok(0, Delimiter); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, Delimiter); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, Delimiter); /*0x7a243e*/
  v24 = strtok(0, Delimiter); /*0x7a244c*/
  v14 = strtok(0, Delimiter); /*0x7a2450*/
  Game_Setup(v8, v13, v24, v14); /*0x7a2462*/
  String::Assign(&v24, v8); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  DeleteAndZero((void **)&v24); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy(&byte_A8B8E0, aRandmapSed); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(aRandmapSed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( dword_A8B8D8 > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(unsigned int *)(dword_A8B8CC + 4 * v17)) ) /*0x7a2504*/
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
    GameOption::SetDigest(v18); /*0x7a25b6*/
    GameOption::SetDescriptionWStr(*(wchar_t **)(dword_A8B8CC + 4 * v17), &unk_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, aRandmapSed, &unk_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x7a258b*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8DC + dword_A8B8D0,
           0) )
    {
      v22 = dword_A8B8D8++; /*0x7a2598*/
      *(unsigned int *)(dword_A8B8CC + 4 * v22) = v21; /*0x7a25a7*/
    }
  }
  __3_YAXPAX_Z(v19); /*0x7a25ce*/
  result = LoadScenarioClassByIndex(v17); /*0x7a25d8*/
  if ( result == 1 ) /*0x7a25df*/
    MEMORY[0xA8B254] = v17; /*0x7a25e1*/
  return result; /*0x7a25e7*/

}
}
// 0x4790A0
namespace gamemd {
int Game::CheckForGameCD(void *a1)
{
  return AlwaysFindYRCD();
}
} // namespace gamemd

// 0x53AB50
namespace gamemd {
void * sub_53AB50()
{

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  void *result = dword_A83D4C; // eax /*0x53ab55*/
  dword_A83D4C->u32_5779 = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}
} // namespace gamemd

// 0x550000
namespace gamemd {
int Game::loadCampaignData(void *a1_1)
{

  Game *v4; // [esp+0h] [ebp-4h] BYREF
  v4 = a1_1; /*0x550000*/
  int result; // eax
  for ( result = g_MissionQueueFrame.random[31]; g_MissionQueueFrame.random[31]; result = g_MissionQueueFrame.random[31] ) /*0x550008*/
  {
    void *v2; // esi
    v2 = *(void **)g_MissionQueueFrame.random[28]; /*0x550010*/
    if ( *(unsigned int *)g_MissionQueueFrame.random[28] ) /*0x550010*/
    {
      v4 = *(Game **)g_MissionQueueFrame.random[28]; /*0x550026*/
      int v3; // eax
      v3 = (*(int (**)(int *, Game **))(g_MissionQueueFrame.random[27] + 16))( /*0x55002a*/
             &g_MissionQueueFrame.random[27],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[31] ) /*0x55003a*/
      {
        --g_MissionQueueFrame.random[31]; /*0x55003f*/
        for ( ; /*0x550045*/
        v3 < g_MissionQueueFrame.random[31];
        *(unsigned int *)(g_MissionQueueFrame.random[28] + 4 * v3 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[28]
        + 4 * v3) )
        {
          ++v3; /*0x55004d*/
        }
      }
      operator delete((v2)); /*0x550060*/
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
  for ( i = 0; i < g_MissionQueueFrame.random[223]; ++i ) /*0x556dfe*/
  {
    unsigned int *v2; // esi
    v2 = *(unsigned int **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556e06*/
    if ( v2 ) /*0x556e0b*/
    {
      int v3; // eax
      v3 = v2[1]; /*0x556e0d*/
      if ( v3 ) /*0x556e12*/
      {
        *(unsigned int *)(v3 + 168) = 0; /*0x556e14*/
        v2[1] = 0; /*0x556e1a*/
      }
      unsigned int *v5; // [esp+8h] [ebp-4h] BYREF
      v5 = v2; /*0x556e2d*/
      int v4; // eax
      v4 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.random[219] + 16))( /*0x556e31*/
             &g_MissionQueueFrame.random[219],
             &v5);
      if ( v4 != -1 && v4 < g_MissionQueueFrame.random[223] ) /*0x556e41*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556e46*/
        for ( ; /*0x556e4c*/
        v4 < g_MissionQueueFrame.random[223];
        *(unsigned int *)(g_MissionQueueFrame.random[220] + 4 * v4 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[220]
        + 4 * v4) )
        {
          ++v4; /*0x556e54*/
        }
      }
      operator delete((v2)); /*0x556e67*/
    }
  }
  g_MissionQueueFrame.random[223] = 0; /*0x556e7f*/
  if ( g_MissionQueueFrame.random[220] && (((unsigned char *)&(g_MissionQueueFrame.random[222]))[1]) ) /*0x556e8f*/
  {
    operator delete(((void *)g_MissionQueueFrame.random[220])); /*0x556e92*/
    g_MissionQueueFrame.random[220] = 0; /*0x556e9a*/
  }
  (((unsigned char *)&(g_MissionQueueFrame.random[222]))[1]) = 0; /*0x556ea0*/
  g_MissionQueueFrame.random[221] = 0; /*0x556ea6*/
}
} // namespace gamemd

// 0x5865E0
namespace gamemd {
char Game::Stub3(IUnknown * aP0)
{

  int result; // eax
  (*((unsigned char *)&(result))) = 0; /*0x5865e0*/
  return result; /*0x5865e2*/
}
} // namespace gamemd

// 0x5B56F0
namespace gamemd {
void Game::processStartup()
{


  Debug::Log(); /*0x5b56fd*/
  HWND DlgItem; // eax
  DlgItem = GetDlgItem(*(HWND *)this->__pad_000, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    char lParam[40]; // [esp+Ch] [ebp-28h] BYREF
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  HWND v3; // eax
  v3 = GetDlgItem(*(HWND *)this->__pad_000, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    dword_A8B394 = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  HWND v4; // eax
  v4 = GetDlgItem(*(HWND *)this->__pad_000, 1639); /*0x5b578a*/
  HWND v5 = v4; // esi /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    LRESULT v6; // eax
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    dword_A8B3AC = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/

}
} // namespace gamemd

// 0x5BF530
namespace gamemd {
char sub_5BF530()
{

  char result = byte_ABF35C; // al /*0x5bf530*/
  if ( byte_ABF35C ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf553*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf563*/
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
  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    HWND v1; // eax
    v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e988b*/
      }
    }
    HWND DlgItem; // eax
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  int v3 = dword_A8DA84; // edi /*0x5e98a7*/
  int i; // esi
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * i), &word_A8D610); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(unsigned int *)(dword_A8DA78 + 4 * i); /*0x5e98d3*/
      if ( result->u32_77 ) /*0x5e98d6*/
        result->u32_77 = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/
}
} // namespace gamemd

// 0x67FDE0
namespace gamemd {
int Game::readIniSettings(void *a1)
{


  int result; // eax
  result = *(unsigned int *)this->__pad_000; /*0x67fde0*/
  if ( *(unsigned int *)this->__pad_000 ) /*0x67fde0*/
    return (*(int (**)(int))(*&result->q020))(result); /*0x67fde9*/
  return result; /*0x67fdec*/

}
} // namespace gamemd

// 0x72D730
namespace gamemd {
char Game::LoadMultiplayerScoreAssets()
{
  char *v3; // ecx

  char result = DataGlobal_B0FBB8; // al /*0x72d730*/
  if ( !DataGlobal_B0FBB8 ) /*0x72d73a*/
  {
    Game::shutdownGame(); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = off_844BD8[0]; /*0x72d74d*/
      if ( this != 1 ) /*0x72d756*/
        v3 = off_844BDC; /*0x72d758*/
    }
    else
    {
      v3 = off_844BD4[0]; /*0x72d745*/
    }
    result = LoadPaletteSimple( /*0x72d768*/
               v3,
               (int *)&DataGlobal_B0FBB0,
               &DataGlobal_B0FBB4);
    DataGlobal_B0FBB8 = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/
}
} // namespace gamemd

// 0x72D830
namespace gamemd {
void * Game::shutdownGame()
{
  void *result; // eax

  if ( this ) /*0x72d832*/
  {
    if ( this == 1 ) /*0x72d86f*/
    {
      if ( g_DisplayWidth == 640 ) /*0x72d87b*/
        result = LoadFileSHP(off_844CA8, (bool *)&DataGlobal_B0FC7D); /*0x72d883*/
      else
        result = LoadFileSHP(off_844CAC, (bool *)&DataGlobal_B0FC7D); /*0x72d894*/
      *(unsigned int *)&DataGlobal_B0FB1C = result; /*0x72d888*/
    }
    else
    {
      char *v2; // ecx
      v2 = off_844CB0[0]; /*0x72d89f*/
      if ( g_DisplayWidth != 640 ) /*0x72d8af*/
        v2 = off_844CB4; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&DataGlobal_B0FC7D); /*0x72d8b7*/
      *(unsigned int *)&DataGlobal_B0FB1C = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( g_DisplayWidth == 640 ) /*0x72d843*/
      result = LoadFileSHP(off_844CA0, (bool *)&DataGlobal_B0FC7D); /*0x72d84b*/
    else
      result = LoadFileSHP(off_844CA4, (bool *)&DataGlobal_B0FC7D); /*0x72d85c*/
    *(unsigned int *)&DataGlobal_B0FB1C = result; /*0x72d850*/
  }
  return result; /*0x72d855*/
}
} // namespace gamemd

// 0x72F440
namespace gamemd {
char Game::InitializeToolTipColor()
{

  if ( this ) /*0x72f442*/
  {
    if ( this == 1 ) /*0x72f460*/
    {
      *(unsigned short *)&DataGlobal_B0FA1C = *(unsigned short *)&DataGlobal_B0FB04; /*0x72f46e*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = DataGlobal_B0FB06; /*0x72f475*/
      return DataGlobal_B0FB06; /*0x72f469*/
    }
    else
    {
      *(unsigned short *)&DataGlobal_B0FA1C = *(unsigned short *)&DataGlobal_B0FAA0; /*0x72f488*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = DataGlobal_B0FAA2; /*0x72f48f*/
    }
  }
  else
  {
    *(unsigned short *)&DataGlobal_B0FA1C = *(unsigned short *)&DataGlobal_B0F9D8; /*0x72f450*/
    g_BuildingLoadQueue_Array.__pad_F70[622] = DataGlobal_B0F9DA; /*0x72f456*/
    return DataGlobal_B0F9D8; /*0x72f444*/
  }
  char result; // al
  return result; /*0x72f45c*/
}
} // namespace gamemd

// 0x74D450
namespace gamemd {
int sub_74D450(int a1)
{

  char Buffer[32]; // [esp+0h] [ebp-20h] BYREF
  sprintf(Buffer, "VEINHOLE.%s", (const char *)&off_7E1BC6 + 112 * a1); /*0x74d46f*/
  int result; // eax
  result = SearchMIXFile(Buffer, 0); /*0x74d47d*/
  dword_B1D2EC = result; /*0x74d482*/
  return result; /*0x74d487*/
}
} // namespace gamemd

// 0x796DE0
namespace gamemd {
int Game::CreateAIPlayer()
{

  int v1; // eax
  v1 = operator new(0x85u); /*0x796dea*/
  int v2 = v1; // esi /*0x796def*/
  if ( v1 ) /*0x796df8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796dfd*/
  else
    v2 = 0; /*0x796e04*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aOlCruddy, -1); /*0x796e0f*/
  v2->u32_7B = -1; /*0x796e1f*/
  v2->u32_4B = 0; /*0x796e26*/
  v2->u32_53 = 3; /*0x796e29*/
  int v6; // [esp+8h] [ebp-Ch] BYREF
  v6 = 0; /*0x796e33*/
  char v9; // [esp+11h] [ebp-3h]
  v9 = 0; /*0x796e37*/
  char v8; // [esp+10h] [ebp-4h]
  v8 = 0; /*0x796e3b*/
  int v7; // [esp+Ch] [ebp-8h] BYREF
  v7 = 1381040650; /*0x796e4e*/
  NetworkID::Assign(&v2->__pad_028, &v6, (int)&v7, 0); /*0x796e53*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    int v3; // eax
    v3 = dword_A8DA84++; /*0x796e99*/
    dword_A8DA78[v3] = v2; /*0x796ea8*/
  }
  int v4 = dword_A8B54C; // eax /*0x796eab*/
  *((unsigned int *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796eb2*/
  int result = v4 + 1; // eax /*0x796ebd*/
  dword_A8B54C = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}
} // namespace gamemd

// 0x796ED0
namespace gamemd {
int Game::CreateAIPlayer_Potato()
{

  int v1; // eax
  v1 = operator new(0x85u); /*0x796eda*/
  int v2 = v1; // esi /*0x796edf*/
  if ( v1 ) /*0x796ee8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796eed*/
  else
    v2 = 0; /*0x796ef4*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aPotato, -1); /*0x796eff*/
  v2->u32_7B = -1; /*0x796f0f*/
  v2->u32_4B = 0; /*0x796f16*/
  v2->u32_53 = 0; /*0x796f19*/
  int v6; // [esp+8h] [ebp-Ch] BYREF
  v6 = 0; /*0x796f1f*/
  char v9; // [esp+11h] [ebp-3h]
  v9 = 0; /*0x796f23*/
  char v8; // [esp+10h] [ebp-4h]
  v8 = 0; /*0x796f27*/
  int v7; // [esp+Ch] [ebp-8h] BYREF
  v7 = 1628701194; /*0x796f3a*/
  NetworkID::Assign(&v2->__pad_028, &v6, (int)&v7, 0); /*0x796f3f*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    int v3; // eax
    v3 = dword_A8DA84++; /*0x796f85*/
    dword_A8DA78[v3] = v2; /*0x796f94*/
  }
  int v4 = dword_A8B54C; // eax /*0x796f97*/
  *((unsigned int *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796f9e*/
  int result = v4 + 1; // eax /*0x796fa9*/
  dword_A8B54C = result; /*0x796faa*/
  return result; /*0x796f9c*/
}
} // namespace gamemd

// 0x7B82E0
namespace gamemd {
char ** sub_7B82E0(char ** a1, const wchar_t ** a2)
{

  const wchar_t *v3 = *a2; // eax /*0x7b82eb*/
  if ( *a2 ) /*0x7b82eb*/
    v3 = (const wchar_t *)wcslen(*a2); /*0x7b82f2*/
  int v4; // esi
  v4 = 16 * ((unsigned int)v3 + 1); /*0x7b8302*/
  char *v5; // ebp
  v5 = (char *)operator new((v4 + 6) / 7); /*0x7b831c*/
  wchar_t *v6; // eax
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  size_t v7; // ecx
  if ( v5 ) /*0x7b8338*/
    v7 = strlen(v5) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  char *v8; // ebx
  v8 = (char *)operator new(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy(v8, v5); /*0x7b8374*/
  operator delete((v5)); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    char *v9; // edx
    v9 = (char *)operator new(strlen(v8) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy(v9, v8); /*0x7b83c2*/
    operator delete((v8)); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}
} // namespace gamemd
