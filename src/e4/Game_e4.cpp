// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x430980
namespace gamemd {
void Game::initScenario()
{
  void **v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *(this + 24) ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *v2 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*v2); /*0x4309a0*/
          *v2 = 0; /*0x4309a8*/
        }
        ++v2; /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(this + 24) = 0; /*0x4309b9*/
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
  strcpy(v14, g_GameSetupBuffer); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (_BYTE)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&g_NetworkPlayerName + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(_DWORD *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(_DWORD *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(_DWORD *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&g_NetworkPlayerName + i); /*0x46d51c*/
        *(_DWORD *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&g_NetworkPlayerName + i); /*0x46d52c*/
        *(_DWORD *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(_DWORD *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&g_NetworkPlayerName + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(_DWORD *)&v14[4 * i + 44],
        *(_DWORD *)&v14[4 * i + 76],
        *(_DWORD *)&v14[4 * i + 108]);
      v8 = g_CampaignConfig[i]; /*0x46d588*/
      v9 = dword_A8B27C[i]; /*0x46d58f*/
      *(_DWORD *)&v14[4 * i + 140] = g_CampaignPlayerArray[i]; /*0x46d596*/
      v10 = g_CampaignSideIndex[i]; /*0x46d59d*/
      *(_DWORD *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(_DWORD *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(_DWORD *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = g_CampaignFactionSlot[i]; /*0x46d5b9*/
      *(_DWORD *)&v14[4 * i + 268] = v11; /*0x46d5c0*/
      result = Debug::Log(
                 "AI %i: Difficulty %i, Country %i, Color %i, Start %i, Ally %i\n",
                 i,
                 *(_DWORD *)&v14[4 * i + 204],
                 *(_DWORD *)&v14[4 * i + 140],
                 *(_DWORD *)&v14[4 * i + 172],
                 *(_DWORD *)&v14[4 * i + 236],
                 v11);
    }
    v12 = (wchar_t **)&unk_A8DA94; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (_BYTE)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)g_NetworkManager, (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(g_NetworkManager); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&g_PlayerNameListEnd ); /*0x46d640*/
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

  ++g_IKnowWhatImDoing; /*0x53445f*/
  g_LaserDrawConfig = 0; /*0x534465*/
  AbstractClassVector::ddtor(&g_DiskLaserManager); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  for ( i = g_BuildingLoadQueue_Count; g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x53447c*/
  {
    if ( !g_BuildingLoadQueue_Dirty ) /*0x534484*/
    {
      qsort(g_BuildingLoadQueue_Array, i, 8u, CompareFunction); /*0x534494*/
      g_BuildingLoadQueue_Active = 0; /*0x53449c*/
      g_BuildingLoadQueue_Dirty = 1; /*0x5344a2*/
    }
    v1 = *((_DWORD *)g_BuildingLoadQueue_Array + 1); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(); /*0x5344c6*/
  while ( dword_A8ED50 ) /*0x5344d1*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)dword_A8ED44 + 8))(*(_DWORD *)dword_A8ED44); /*0x5344dd*/
  ProcessExpiredPointers(); /*0x5344e8*/
  while ( g_PlacementCellPool ) /*0x5344f3*/
  {
    if ( *(_DWORD *)dword_A8E364 ) /*0x5344fb*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E364 + 32))(*(_DWORD *)dword_A8E364, 1); /*0x534505*/
  }
  ProcessExpiredPointers(); /*0x534510*/
  while ( g_GameObjectCleanup ) /*0x53451b*/
  {
    if ( *(_DWORD *)g_TagClassCount ) /*0x534523*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TagClassCount + 32))(*(_DWORD *)g_TagClassCount, 1); /*0x53452d*/
  }
  ProcessExpiredPointers(); /*0x534538*/
  while ( g_ProductionQueueState ) /*0x534543*/
  {
    if ( *(_DWORD *)g_TriggerClassCapacity ) /*0x53454a*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TriggerClassCapacity + 32))( /*0x534554*/
        *(_DWORD *)g_TriggerClassCapacity,
        1);
  }
  ProcessExpiredPointers(); /*0x53455f*/
  while ( g_UnitTypeCount ) /*0x53456a*/
  {
    if ( *(_DWORD *)g_PathClass_State ) /*0x534571*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_PathClass_State + 32))(*(_DWORD *)g_PathClass_State, 1); /*0x53457b*/
  }
  ProcessExpiredPointers(); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(_DWORD *)dword_8B4194 ) /*0x534598*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4194 + 32))(*(_DWORD *)dword_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(); /*0x5345ad*/
  while ( dword_A8EC60 ) /*0x5345b8*/
  {
    if ( *(_DWORD *)g_ObjectClass_Capacity ) /*0x5345bf*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_ObjectClass_Capacity + 32))( /*0x5345c9*/
        *(_DWORD *)g_ObjectClass_Capacity,
        1);
  }
  ProcessExpiredPointers(); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(_DWORD *)dword_A8020C ) /*0x5345e6*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8020C + 32))(*(_DWORD *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(); /*0x5345fb*/
  while ( dword_A8EC48 ) /*0x534606*/
  {
    if ( *(_DWORD *)dword_A8EC3C ) /*0x53460d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EC3C + 32))(*(_DWORD *)dword_A8EC3C, 1); /*0x534617*/
  }
  ProcessExpiredPointers(); /*0x534622*/
  while ( g_TeamTypeCapacity ) /*0x53462d*/
  {
    if ( *(_DWORD *)g_TeamTypeCount ) /*0x534634*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TeamTypeCount + 32))(*(_DWORD *)g_TeamTypeCount, 1); /*0x53463e*/
  }
  ProcessExpiredPointers(); /*0x534649*/
  while ( g_ObjectTypeList ) /*0x534654*/
  {
    if ( *(_DWORD *)dword_8B4124 ) /*0x53465b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4124 + 32))(*(_DWORD *)dword_8B4124, 1); /*0x534665*/
  }
  ProcessExpiredPointers(); /*0x534670*/
  while ( g_HouseClass_AIProductionState ) /*0x53467b*/
  {
    if ( *(_DWORD *)g_TeamClassPool ) /*0x534682*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TeamClassPool + 32))(*(_DWORD *)g_TeamClassPool, 1); /*0x53468c*/
  }
  ProcessExpiredPointers(); /*0x534697*/
  while ( HouseClass_Count ) /*0x5346a2*/
  {
    if ( *(_DWORD *)HouseClass_Array ) /*0x5346a9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)HouseClass_Array + 32))(*(_DWORD *)HouseClass_Array, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(); /*0x5346be*/
  while ( g_AnimClassCount ) /*0x5346c9*/
  {
    if ( *(_DWORD *)g_AnimClassPool ) /*0x5346d0*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_AnimClassPool + 32))(*(_DWORD *)g_AnimClassPool, 1); /*0x5346da*/
  }
  ProcessExpiredPointers(); /*0x5346e5*/
  while ( dword_8872C0 ) /*0x5346f0*/
  {
    if ( *(_DWORD *)dword_8872B4 ) /*0x5346f7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8872B4 + 32))(*(_DWORD *)dword_8872B4, 1); /*0x534701*/
  }
  ProcessExpiredPointers(); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(_DWORD *)dword_B04BD4 ) /*0x53471e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B04BD4 + 32))(*(_DWORD *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(); /*0x534733*/
  while ( g_BridgeCellPool ) /*0x53473e*/
  {
    if ( *(_DWORD *)dword_ABCA14 ) /*0x534745*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_ABCA14 + 32))(*(_DWORD *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(); /*0x53475a*/
  while ( dword_8A3880 ) /*0x534765*/
  {
    if ( *(_DWORD *)dword_8A3874 ) /*0x53476c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A3874 + 32))(*(_DWORD *)dword_8A3874, 1); /*0x534776*/
  }
  ProcessExpiredPointers(); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(_DWORD *)dword_89E0F4 ) /*0x534793*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89E0F4 + 32))(*(_DWORD *)dword_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(); /*0x5347a8*/
  while ( dword_8A0218 ) /*0x5347b3*/
  {
    if ( *(_DWORD *)dword_8A020C ) /*0x5347ba*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A020C + 32))(*(_DWORD *)dword_8A020C, 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(); /*0x5347cf*/
  while ( dword_AC4920 ) /*0x5347da*/
  {
    if ( *(_DWORD *)dword_AC4914 ) /*0x5347e1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_AC4914 + 32))(*(_DWORD *)dword_AC4914, 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(); /*0x5347f6*/
  while ( dword_B0EC70 ) /*0x534801*/
  {
    if ( *(_DWORD *)dword_B0EC64 ) /*0x534808*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0EC64 + 32))(*(_DWORD *)dword_B0EC64, 1); /*0x534812*/
  }
  ProcessExpiredPointers(); /*0x53481d*/
  while ( dword_889FC8 ) /*0x534828*/
  {
    if ( *(_DWORD *)dword_889FBC ) /*0x53482f*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_889FBC + 32))(*(_DWORD *)dword_889FBC, 1); /*0x534839*/
  }
  ProcessExpiredPointers(); /*0x534844*/
  while ( dword_B0B890 ) /*0x53484f*/
  {
    if ( *(_DWORD *)dword_B0B884 ) /*0x534856*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0B884 + 32))(*(_DWORD *)dword_B0B884, 1); /*0x534860*/
  }
  ProcessExpiredPointers(); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(_DWORD *)dword_89C66C ) /*0x53487d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89C66C + 32))(*(_DWORD *)dword_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(); /*0x534892*/
  while ( dword_AC1688 ) /*0x53489d*/
  {
    v2 = *(void **)dword_AC167C; /*0x5348a5*/
    if ( *(_DWORD *)dword_AC167C ) /*0x5348a5*/
    {
      BuildingLightQueue::RemoveEntry(*(_DWORD *)dword_AC167C); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(); /*0x5348c4*/
  while ( g_FootClassConfig ) /*0x5348cf*/
  {
    if ( *(_DWORD *)dword_8B3D14 ) /*0x5348d7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B3D14 + 32))(*(_DWORD *)dword_8B3D14, 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(); /*0x5348ec*/
  while ( g_AlphaShapeLimit ) /*0x5348f7*/
  {
    if ( *(_DWORD *)dword_88A0F4 ) /*0x5348fe*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_88A0F4 + 32))(*(_DWORD *)dword_88A0F4, 1); /*0x534908*/
  }
  ProcessExpiredPointers(); /*0x534913*/
  while ( dword_A8E998 ) /*0x53491e*/
  {
    if ( *(_DWORD *)dword_A8E98C ) /*0x534925*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E98C + 32))(*(_DWORD *)dword_A8E98C, 1); /*0x53492f*/
  }
  ProcessExpiredPointers(); /*0x53493a*/
  sub_4C29E0(); /*0x53493f*/
  Game_Destroy(); /*0x534944*/
  Game::loadCampaignData(); /*0x534949*/
  while ( g_AbstractTypePool ) /*0x534954*/
  {
    if ( *(_DWORD *)dword_A8E96C ) /*0x53495b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E96C + 32))(*(_DWORD *)dword_A8E96C, 1); /*0x534965*/
  }
  ProcessExpiredPointers(); /*0x534970*/
  if ( g_TacticalClass_Instance ) /*0x53497d*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->lpVtbl[1].QueryInterface)( /*0x534983*/
      g_TacticalClass_Instance,
      1);
  g_TacticalClass_Instance = 0; /*0x53498b*/
  MapClass::FreeAllCells(&MapClass_Instance); /*0x534991*/
  ProcessExpiredPointers(); /*0x534996*/
  Game::initScenario(&g_VisibilitySystem); /*0x5349a0*/
  return --g_IKnowWhatImDoing; /*0x5349ab*/
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
  _DWORD *v7; // eax
  char v8; // bl
  struct tagPOINT Point; // [esp+4h] [ebp-198h] BYREF
  struct tagPOINT v10; // [esp+Ch] [ebp-190h] BYREF
  int v11; // [esp+14h] [ebp-188h]
  int v12; // [esp+18h] [ebp-184h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-180h] BYREF
  struct tagPOINT v14; // [esp+2Ch] [ebp-170h] BYREF
  _DWORD v15[4]; // [esp+34h] [ebp-168h] BYREF
  int v16[22]; // [esp+44h] [ebp-158h] BYREF
  _BYTE v17[12]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  _DWORD v19[22]; // [esp+B0h] [ebp-ECh] BYREF
  _BYTE v20[12]; // [esp+108h] [ebp-94h] BYREF
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
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x537c70*/
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden); /*0x537c96*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x537ca4*/
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x537cb8*/
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*(void (__thiscall **)(int, _DWORD *, int, struct tagPOINT *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x537cf0*/
          g_DSurface_Hidden,
          v15,
          g_DSurface_Primary,
          &v10,
          0,
          1);
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, "SCRN%04d.pcx", ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(v19, Buffer); /*0x537d27*/
          v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x537d3b*/
          v19[0] = &CCFileClass::`vftable'; /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          v19[0] = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor(v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(v16, Buffer); /*0x537d7b*/
        CompressScreenshot(v16, (int *)g_DSurface_Hidden, &FileSystem_TEMPERAT_PAL); /*0x537d8f*/
        v16[0] = (int)&CCFileClass::`vftable'; /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        v16[0] = (int)&off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor(v16); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/
}
}
// 0x5B7090
namespace gamemd {
HashTable * * Game::StartModemMultiplayer(char a2)
{
  _BYTE *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax
  char *v7; // eax
  char *v8; // esi
  int v9; // eax
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v12; // ebp
  int v13; // edi
  int v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // edx

  if ( a2 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  Game::processStartup(this); /*0x5b70a7*/
  g_ScenarioLoadFlags = 0; /*0x5b70b1*/
  v4 = __2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v5 = v4; /*0x5b70c0*/
  if ( v4 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid(v4 + 40); /*0x5b70d3*/
    BulkCharToWide(v5, (unsigned __int8 *)g_GameSetupBuffer, -1); /*0x5b70e0*/
    *(_DWORD *)(v5 + 75) = g_CommandExecState; /*0x5b70ea*/
    *(_DWORD *)(v5 + 83) = g_TauntCommandState; /*0x5b70f3*/
    *(_DWORD *)(v5 + 115) = -1; /*0x5b70f6*/
    if ( Game_PlayerCount < dword_A8DA7C /*0x5b7130*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
           &g_PlayerInfoCount,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v6 = Game_PlayerCount++; /*0x5b713d*/
      *(_DWORD *)(Game_PlayerInfoArray + 4 * v6) = v5; /*0x5b714c*/
    }
    ++g_ScenarioLoadFlags; /*0x5b714f*/
  }
  v7 = (char *)__2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v8 = v7; /*0x5b715f*/
  if ( v7 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid(v7 + 40); /*0x5b716f*/
    wcscpy((wchar_t *)v8, (const wchar_t *)(this + 32)); /*0x5b7179*/
    *(_DWORD *)(v8 + 75) = *(_DWORD *)(this + 76); /*0x5b7184*/
    *(_DWORD *)(v8 + 83) = *(_DWORD *)(this + 72); /*0x5b718a*/
    *(_DWORD *)(v8 + 115) = -1; /*0x5b718d*/
    if ( Game_PlayerCount < dword_A8DA7C /*0x5b71c7*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
           &g_PlayerInfoCount,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v9 = Game_PlayerCount++; /*0x5b71d4*/
      *(_DWORD *)(Game_PlayerInfoArray + 4 * v9) = v8; /*0x5b71e3*/
    }
    ++g_ScenarioLoadFlags; /*0x5b71e6*/
  }
  if ( g_ScenarioLoadFlags != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF(aTxtSendingGoAc, 0, g_Str_File_ModemGst_cpp, 1779); /*0x5b7211*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v12 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v13 = g_PerformanceTickOffset; /*0x5b7231*/
  if ( g_LastPerformanceTick != -1 ) /*0x5b7239*/
    v13 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue(&g_EventManager) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v14 = g_PerformanceTickOffset; /*0x5b7260*/
    if ( g_LastPerformanceTick != -1 ) /*0x5b7268*/
      v14 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5b727a*/
    if ( (unsigned int)(v14 - v13) >= 0x708 ) /*0x5b7284*/
    {
  LABEL_31:
      v15 = g_PerformanceTickOffset; /*0x5b728b*/
      if ( g_LastPerformanceTick != -1 ) /*0x5b7293*/
        v15 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5b72a5*/
      if ( (unsigned int)(v15 - v13) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&g_EventManager); /*0x5b72bd*/
  }
  if ( v12 ) /*0x5b72c6*/
    Dialog::Destroy(v12); /*0x5b72ca*/
  EventClass::CheckFlag(&g_EventManager); /*0x5b72d4*/
  g_NetworkQuitFlag = 0; /*0x5b72e4*/
  *((_DWORD *)g_ScenarioClass_Instance + 1173) = g_GameRulesOptions; /*0x5b72eb*/
  g_ScenarioLoadFlags = Game_PlayerCount; /*0x5b730b*/
  v16 = g_IntroMovieObject; /*0x5b7311*/
  BYTE1(v16) = BYTE1(g_IntroMovieObject) & 0x77; /*0x5b7319*/
  v17 = v16 | ((HarvesterTruce & 1 | (16 * (BridgeDestruction & 1))) << 11); /*0x5b731f*/
  LOBYTE(v17) = g_IntroMovieObject | 0xC0; /*0x5b7326*/
  g_CurrentFrame = 0; /*0x5b7329*/
  g_GameTypeFlags = 2; /*0x5b7333*/
  g_IntroMovieObject = v17; /*0x5b733d*/
  nullsub_37(&g_IntroMovieObject); /*0x5b7343*/
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
  int v6; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  _DWORD v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  int v13[22]; // [esp+104h] [ebp-6Ch] BYREF
  _BYTE v14[12]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(_DWORD *)(this + 88); /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(_DWORD *)(this + 84); /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(_DWORD *)(this + 92); /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(_DWORD *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(_DWORD *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(&g_CoordScatterManager); /*0x5ba6db*/
  v6 = NetworkBuffer::GetField3(&g_CoordScatterManager); /*0x5ba6df*/
  *(_DWORD *)((char *)&v11[36] + 2) = g_MenuRandomSeed; /*0x5ba6f0*/
  *(_DWORD *)((char *)&v11[37] + 2) = g_IntroMovieObject; /*0x5ba6fd*/
  *(_DWORD *)((char *)&v11[8] + 2) = v6; /*0x5ba70a*/
  BYTE2(v11[40]) = g_Rules_EngineerCount; /*0x5ba71b*/
  v7 = *(_DWORD *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(_DWORD *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                    | (16
                                     * (ShortGame & 1
                                      | (2 * (SWAllowed & 1 | (2 * (g_Rules_ShortGame & 1 | (2 * (MultiEngineer & 1))))))));
  LOBYTE(v11[6]) = g_EventDispatchState; /*0x5ba75d*/
  v8 = g_TauntCommandState; /*0x5ba776*/
  strcpy((char *)&v11[1], g_GameSetupBuffer); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(_DWORD *)((char *)&v11[6] + 1) = g_CommandExecState; /*0x5ba797*/
  *(_DWORD *)((char *)&v11[31] + 2) = g_Rules_Bases; /*0x5ba79b*/
  v9 = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFFE | Bases & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | Bases & 1; /*0x5ba7cc*/
  *(_DWORD *)((char *)&v11[32] + 2) = v9 | (2 * (BridgeDestruction & 1 | (2 * (Crates & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = g_Rules_AlliesAllowed; /*0x5ba819*/
  *(_DWORD *)((char *)&v11[35] + 2) = *(_DWORD *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                    | (4 * (MCVRedeploy & 1)) & 0xF5
                                    | (2 * (HarvesterTruce & 1 | (4 * (FOW & 1))));
  BYTE1(v11[35]) = dword_A8B278; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = g_Rules_MultiEngineer; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(g_MultiplayerGameState + 4 * g_GameRulesOptions)); /*0x5ba85e*/
  CCFileClass::Construct(v13, (char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88)); /*0x5ba87f*/
  *(_DWORD *)((char *)&v11[39] + 2) = CCFileClass::GetSize(v13); /*0x5ba896*/
  strncpy((char *)&v11[40] + 3, (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88), 0xDu); /*0x5ba8b3*/
  strncpy((char *)&v11[44], (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 348), 0x20u); /*0x5ba8d7*/
  *(_DWORD *)((char *)&v11[32] + 2) = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                    | (16
                                     * (*(_BYTE *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 380)
                                      & 1));
  Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1); /*0x5ba91d*/
  v13[0] = (int)&CCFileClass::`vftable'; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  v13[0] = (int)&off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor(v13); /*0x5ba95b*/
}
}
// 0x5CA110
namespace gamemd {
int Game::GetMultiplayerScoreScreenBar()
{
  int v1; // eax

  v1 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x5ca115*/
  if ( v1 ) /*0x5ca11d*/
  {
    if ( v1 == 1 ) /*0x5ca21f*/
    {
      if ( !this ) /*0x5ca227*/
        return HashTable::Find(g_DialogHashTable, off_844B4C[0], 0); /*0x5ca23b*/
      if ( this == (void *)1 ) /*0x5ca23f*/
        return HashTable::Find(g_DialogHashTable, off_844B50[0], 0); /*0x5ca253*/
      if ( this == (void *)2 ) /*0x5ca257*/
        return HashTable::Find(g_DialogHashTable, off_844B54[0], 0); /*0x5ca26c*/
      if ( this == (void *)3 ) /*0x5ca270*/
        return HashTable::Find(g_DialogHashTable, off_844B58[0], 0); /*0x5ca285*/
      if ( this == (void *)4 ) /*0x5ca289*/
        return HashTable::Find(g_DialogHashTable, off_844B5C[0], 0); /*0x5ca29d*/
      if ( this == (void *)5 ) /*0x5ca2a1*/
        return HashTable::Find(g_DialogHashTable, off_844B60[0], 0); /*0x5ca2b6*/
      if ( this == (void *)6 ) /*0x5ca2ba*/
        return HashTable::Find(g_DialogHashTable, off_844B64[0], 0); /*0x5ca2cf*/
      if ( this == (void *)7 ) /*0x5ca2d3*/
        return HashTable::Find(g_DialogHashTable, off_844B68[0], 0); /*0x5ca2e7*/
      if ( this == (void *)8 ) /*0x5ca2eb*/
        return HashTable::Find(g_DialogHashTable, off_844B6C[0], 0); /*0x5ca300*/
      if ( this == (void *)9 ) /*0x5ca304*/
        return HashTable::Find(g_DialogHashTable, off_844B70[0], 0); /*0x5ca31d*/
    }
    else if ( v1 == 2 ) /*0x5ca321*/
    {
      if ( !this ) /*0x5ca329*/
        return HashTable::Find(g_DialogHashTable, off_844B74[0], 0); /*0x5ca33c*/
      if ( this == (void *)1 ) /*0x5ca340*/
        return HashTable::Find(g_DialogHashTable, off_844B78[0], 0); /*0x5ca355*/
      if ( this == (void *)2 ) /*0x5ca359*/
        return HashTable::Find(g_DialogHashTable, off_844B7C[0], 0); /*0x5ca36e*/
      if ( this == (void *)3 ) /*0x5ca372*/
        return HashTable::Find(g_DialogHashTable, off_844B80[0], 0); /*0x5ca386*/
      if ( this == (void *)4 ) /*0x5ca38a*/
        return HashTable::Find(g_DialogHashTable, off_844B84[0], 0); /*0x5ca39f*/
      if ( this == (void *)5 ) /*0x5ca3a3*/
        return HashTable::Find(g_DialogHashTable, off_844B88[0], 0); /*0x5ca3b8*/
      if ( this == (void *)6 ) /*0x5ca3bc*/
        return HashTable::Find(g_DialogHashTable, off_844B8C[0], 0); /*0x5ca3d0*/
      if ( this == (void *)7 ) /*0x5ca3d4*/
        return HashTable::Find(g_DialogHashTable, off_844B90[0], 0); /*0x5ca3e9*/
      if ( this == (void *)8 ) /*0x5ca3ed*/
        return HashTable::Find(g_DialogHashTable, off_844B94[0], 0); /*0x5ca402*/
      if ( this == (void *)9 ) /*0x5ca406*/
        return HashTable::Find(g_DialogHashTable, off_844B98[0], 0); /*0x5ca41a*/
    }
  }
  else
  {
    if ( !this ) /*0x5ca125*/
      return HashTable::Find(g_DialogHashTable, off_844B24[0], 0); /*0x5ca139*/
    if ( this == (void *)1 ) /*0x5ca13d*/
      return HashTable::Find(g_DialogHashTable, off_844B28[0], 0); /*0x5ca152*/
    if ( this == (void *)2 ) /*0x5ca156*/
      return HashTable::Find(g_DialogHashTable, off_844B2C[0], 0); /*0x5ca16a*/
    if ( this == (void *)3 ) /*0x5ca16e*/
      return HashTable::Find(g_DialogHashTable, off_844B30[0], 0); /*0x5ca183*/
    if ( this == (void *)4 ) /*0x5ca187*/
      return HashTable::Find(g_DialogHashTable, off_844B34[0], 0); /*0x5ca19c*/
    if ( this == (void *)5 ) /*0x5ca1a0*/
      return HashTable::Find(g_DialogHashTable, off_844B38[0], 0); /*0x5ca1b4*/
    if ( this == (void *)6 ) /*0x5ca1b8*/
      return HashTable::Find(g_DialogHashTable, off_844B3C[0], 0); /*0x5ca1cd*/
    if ( this == (void *)7 ) /*0x5ca1d1*/
      return HashTable::Find(g_DialogHashTable, off_844B40[0], 0); /*0x5ca1e6*/
    if ( this == (void *)8 ) /*0x5ca1ea*/
      return HashTable::Find(g_DialogHashTable, off_844B44[0], 0); /*0x5ca1fe*/
    if ( this == (void *)9 ) /*0x5ca202*/
      return HashTable::Find(g_DialogHashTable, off_844B48[0], 0); /*0x5ca21b*/
  }
  return 0; /*0x5ca139*/
}
}
// 0x5DBB60
namespace gamemd {
void Game::BuildGameSettingsPacket()
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
  if ( &MCVRedeploy == (int *)-2 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((char **)&v19, &g_INI_DefaultBuffer); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v17, (wchar_t *)&MCVRedeploy + 1); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = (char **)Game_Set(&OptionSessionClass, &v17); /*0x5dbb95*/
  }
  String::AssignFromPtr((char **)&v18, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((void **)&v19); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((void **)&OptionSessionClass); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt(&v17); /*0x5dbbe4*/
  v16 = g_MultiplayerConfigState; /*0x5dbc0a*/
  v14 = (unsigned __int8)g_MultiplayerSetupState; /*0x5dbc0b*/
  v12 = dword_A8BB0C; /*0x5dbc0c*/
  v4 = String::GetOrEmpty((char **)&v18); /*0x5dbc11*/
  sprintf( /*0x5dbc7e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    g_MenuRandomSeed,
    *(_DWORD *)g_GameModeOptions,
    g_Rules_EngineerCount,
    g_Rules_Bases,
    g_Rules_MultiEngineer,
    (unsigned __int8)ShortGame,
    (unsigned __int8)SWAllowed,
    (unsigned __int8)g_Rules_ShortGame,
    (unsigned __int8)MCVRedeploy,
    (unsigned __int8)Crates,
    *(_DWORD *)g_ScenarioFlags,
    dword_A8EB68,
    v4,
    v12,
    v14,
    v16,
    &Destination,
    &g_MultiplayerFlags);
  memset(byte_ABFF94, 0, 0x200u); /*0x5dbc92*/
  v5 = 0; /*0x5dbc99*/
  v19 = Game_PlayerCount; /*0x5dbc9d*/
  if ( Game_PlayerCount > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v5); /*0x5dbca8*/
      PlayerSideSessionClass = SessionClass::GetPlayerSide(v6); /*0x5dbcb4*/
      PlayerColorSessionClass = SessionClass::GetPlayerColor(v6); /*0x5dbcbd*/
      OptionSessionClass = SessionClass::GetOption(v6); /*0x5dbcc6*/
      Option2SessionClass = SessionClass::GetOption2(v6); /*0x5dbce2*/
      v13 = (void *)OptionSessionClass; /*0x5dbce3*/
      v11 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v5)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        &byte_ABFF94[strlen(byte_ABFF94)],
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
  byte_ABFF92[strlen(byte_ABFF94) + 1] = 58; /*0x5dbd2f*/
  strcat(byte_ABFF94, asc_831340); /*0x5dbd53*/
  v9 = g_CampaignPlayerArray; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    v10 = *v9; /*0x5dbd61*/
    if ( *v9 == -3 ) /*0x5dbd66*/
      v10 = -1; /*0x5dbd68*/
    sprintf(&byte_ABFF94[strlen(byte_ABFF94)], "%d,%d,%d,%d,%d,", *(v9 - 8), v10, v9[8], v9[16], v9[24]); /*0x5dbd97*/
    ++v9; /*0x5dbd9c*/
  }
  while ( (int)v9 < (int)g_CampaignConfig ); /*0x5dbda8*/
  strlen(byte_ABFF94); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, byte_ABFF94); /*0x5dbdf7*/
  DeleteAndZero(&v18); /*0x5dbe04*/
}
}
// 0x6579E0
namespace gamemd {
unsigned char Game::ManageGameSpeed()
{
  _BYTE *v2; // ecx
  char v3; // al
  bool v4; // bl
  int v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  unsigned __int8 result; // al
  bool v15; // zf
  char v16; // [esp+12h] [ebp-1Eh]
  unsigned __int8 v17; // [esp+13h] [ebp-1Dh]
  _BYTE *v18; // [esp+14h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v20[16]; // [esp+20h] [ebp-10h] BYREF

  v2 = 0; /*0x6579ef*/
  v3 = *(_BYTE *)(this + 5309); /*0x6579f1*/
  v18 = 0; /*0x6579f7*/
  v4 = g_AsyncIOState > 0; /*0x6579fd*/
  v17 = 0; /*0x657a02*/
  if ( !v3 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    Audio::IsPlaying(); /*0x657a0c*/
    v2 = v18; /*0x657a11*/
  }
  if ( *(_BYTE *)(this + 5338) == 1 && !*(_BYTE *)(this + 5309) ) /*0x657a22*/
  {
    v5 = VtableStub::72F510(); /*0x657a35*/
    v19[0] = *(_DWORD *)(this + 4580); /*0x657a4d*/
    v19[1] = *(_DWORD *)(this + 4588); /*0x657a5f*/
    v6 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, v20); /*0x657a6a*/
    DrawToSurfaceSHP(DSurface_Sidebar, v5, dword_B04A38, 0x20u, v19, v6, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v7 = *(_DWORD *)(this + 4588); /*0x657a95*/
    *(_DWORD *)(this + 4620) = *(_DWORD *)(this + 4580); /*0x657aab*/
    *(_DWORD *)(this + 4624) = v7; /*0x657aae*/
    *(_DWORD *)(this + 4628) = 168; /*0x657ab1*/
    *(_DWORD *)(this + 4632) = 110; /*0x657ab4*/
    Debug::Log(); /*0x657ab7*/
    v2 = v18; /*0x657abc*/
  }
  if ( !v4 ) /*0x657ac5*/
  {
    v16 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  if ( g_AsyncIOState <= 0 || (v2 = *(_BYTE **)AsyncIO_Instance, (v18 = *(_BYTE **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v16 = 1; /*0x657cb4*/
  LABEL_13:
    if ( v2 ) /*0x657b40*/
    {
      v10 = (*(int (__thiscall **)(int *, _BYTE **))(dword_B45B58 + 16))(&dword_B45B58, &v18); /*0x657b52*/
      if ( v10 != -1 && v10 < g_AsyncIOState && v10 < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++v10; /*0x657b75*/
          *((_DWORD *)AsyncIO_Instance + v10 - 1) = *((_DWORD *)AsyncIO_Instance + v10); /*0x657b79*/
        }
        while ( v10 < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v18 ) /*0x657b8d*/
        (**(void (__thiscall ***)(_BYTE *, int))v18)(v18, 1); /*0x657b93*/
    }
    v4 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel((int **)(this + 5312)); /*0x657bb9*/
      v11 = (_DWORD *)PlayVocClass(g_RulesClass_Instance->Scorches1[1], 0x2000, 1.0, 0); /*0x657bd8*/
      SetAudioSource(this + 5312, v11, 0); /*0x657be1*/
      *(_DWORD *)(this + 5292) = 4; /*0x657be6*/
      *(_DWORD *)(this + 5372) = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 4))(v2) == 1 ) /*0x657af3*/
  {
    v8 = *(_DWORD *)(this + 4588); /*0x657b01*/
    *(_DWORD *)(this + 4620) = *(_DWORD *)(this + 4580); /*0x657b12*/
    *(_DWORD *)(this + 4624) = v8; /*0x657b15*/
    *(_DWORD *)(this + 4628) = 168; /*0x657b18*/
    *(_DWORD *)(this + 4632) = 110; /*0x657b1b*/
  }
  v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 20))(v18); /*0x657b24*/
  v2 = v18; /*0x657b27*/
  v16 = v9; /*0x657b2d*/
  v17 = v18[4]; /*0x657b34*/
  if ( v9 == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
  LABEL_22:
  *(_BYTE *)(this + 5337) = 0; /*0x657bfa*/
  if ( !v4 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v12 = *(_DWORD *)(this + 5300); /*0x657c0f*/
    *(_DWORD *)(this + 5292) = 5; /*0x657c1a*/
    RadarClass::SetViewMode(this, v12, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v17 = 0; /*0x657c37*/
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x657c3d*/
    v13 = (_DWORD *)PlayVocClass(g_RulesClass_Instance->Scorches1[2], 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource(this + 5312, v13, 0); /*0x657c64*/
    RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateNormal); /*0x657c71*/
    *(_BYTE *)(this + 5337) = 1; /*0x657c76*/
  }
  result = v17; /*0x657c81*/
  v15 = *(_BYTE *)(this + 5308) == v17; /*0x657c90*/
  *(_BYTE *)(this + 5309) = v16 == 0; /*0x657c92*/
  if ( !v15 ) /*0x657c98*/
  {
    if ( v17 ) /*0x657c9c*/
    {
      result = (unsigned __int8)SetScenarioClassTimer(0); /*0x657ca0*/
      *(_BYTE *)(this + 5308) = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned __int8)ScenarioClass::ProcessIntroTimer(); /*0x657cc8*/
      *(_BYTE *)(this + 5308) = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/
}
}
// 0x67C3A0
namespace gamemd {
unsigned int * Game::LockMutex(IUnknown * aP1, IUnknown * aP2)
{
  *(this + 1) = 0; /*0x67c3ab*/
  *(this + 2) = aP1; /*0x67c3ae*/
  *((_BYTE *)this + 12) = 1; /*0x67c3b1*/
  *((_BYTE *)this + 13) = 0; /*0x67c3b5*/
  *this = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c3b8*/
  if ( aP1 ) /*0x67c3be*/
  {
    if ( aP2 ) /*0x67c3c6*/
    {
      *(this + 1) = aP2; /*0x67c3c8*/
      return this; /*0x67c3ce*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * aP1); /*0x67c3dd*/
    *((_BYTE *)this + 13) = 1; /*0x67c3e0*/
  }
  return this; /*0x67c3cd*/
}
}
// 0x67E440
namespace gamemd {
int Game::LoadSaved()
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
  _BYTE v13[1012]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset(v13); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67e47e*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e484*/
  ppstgOpen = 0; /*0x67e49e*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67e4a6*/
  {
    ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4ac*/
    return 0; /*0x67e4bd*/
  }
  COM = ScenarioPropertyReadCOM((int)v13, (int)ppstgOpen); /*0x67e4ca*/
  p_ppstgOpen = (int *)&ppstgOpen; /*0x67e4d1*/
  if ( COM < 0 ) /*0x67e4d5*/
    goto LABEL_6; /*0x67e4d5*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4d7*/
  g_GameMode_Current[0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e4f2*/
  v8 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, pwcsName, 64); /*0x67e50a*/
  ComPtr::ReleaseSimple((int *)&v8); /*0x67e510*/
  v8 = 0; /*0x67e527*/
  if ( StgOpenStorage(pwcsName, 0, 0x20u, 0, 0, &v8) < 0 ) /*0x67e52f*/
  {
    p_ppstgOpen = (int *)&v8; /*0x67e531*/
  LABEL_6:
    ComPtr::ReleaseSimple(p_ppstgOpen); /*0x67e535*/
    return 0; /*0x67e546*/
  }
  v9 = 0; /*0x67e54b*/
  if ( !v8 ) /*0x67e551*/
    WinAPI::Wrapper(-2147467261); /*0x67e558*/
  if ( v8->lpVtbl->OpenStream(v8, (const OLECHAR *)&off_83D5A8, 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    Game::readIniSettings(&v7); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &stru_83D598, (void **)&v7); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario(&v7); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)g_UIManager, 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start(pStm); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&MapClass_Instance); /*0x67e68f*/
    TacticalClass::BuildCommandBar(&MapClass_Instance, (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    FogOfWar::Render((int **)&MapClass_Instance); /*0x67e6bd*/
    g_BounceClassInit = 1; /*0x67e6c4*/
    g_FramePresent_State = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( pStm ) /*0x67e6ee*/
      pStm->lpVtbl->Release(pStm); /*0x67e6f3*/
    if ( v7 ) /*0x67e6fc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x67e701*/
    if ( v9 ) /*0x67e70a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67e70f*/
    if ( v8 ) /*0x67e718*/
      v8->lpVtbl->Release(v8); /*0x67e71d*/
    return 1; /*0x67e722*/
  }
  else
  {
    if ( v9 ) /*0x67e57f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67e584*/
    if ( v8 ) /*0x67e58d*/
      v8->lpVtbl->Release(v8); /*0x67e592*/
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
  wchar_t *v4; // eax
  int i; // edi
  int v6; // edi
  int v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &dword_A8ED78, 4, 0); /*0x67f9d3*/
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &dword_A8ED78); /*0x67f9e8*/
    result = (*(int (__stdcall **)(void *, #375 **, int, _DWORD))(*(_DWORD *)this + 12))(this, &HouseClass_Player, 4, 0); /*0x67f9f9*/
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&HouseClass_Player); /*0x67fa0e*/
      result = (*(int (__stdcall **)(void *, wchar_t **, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fa1f*/
                 this,
                 &g_CurrentFrame,
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
  LABEL_14:
            for ( i = 0; i < (int)g_SelectionManager; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)g_ObjectClass_CurrentCount + i); /*0x67fade*/
            result = (*(int (__stdcall **)(void *, float *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fafc*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState(this); /*0x67fb09*/
              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v13, 4, 0); /*0x67fb1a*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
  LABEL_27:
                  for ( j = 0; j < g_ScenarioUpdateState; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_8B40CC + j); /*0x67fbc2*/
                  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v13, 4, 0); /*0x67fbdd*/
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
  LABEL_39:
                      for ( k = 0; k < dword_8B41B8; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_8B41AC + k); /*0x67fc84*/
                      result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fc9f*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(void *, double *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fcc8*/
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(void *, char *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fcdb*/
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(void *, void *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fcf1*/
                                         this,
                                         &unk_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fd04*/
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
                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( dword_8B41B8 < dword_8B41B0 /*0x67fc3f*/
                          || (byte_8B41B5 || !dword_8B41B0)
                          && dword_8B41BC > 0
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41A8 + 8))(
                               &dword_8B41A8,
                               dword_8B41B0 + dword_8B41BC,
                               0) )
                        {
                          v10 = dword_8B41B8++; /*0x67fc52*/
                          *((_DWORD *)dword_8B41AC + v10) = v14; /*0x67fc5f*/
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
                    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v14, 4, 0); /*0x67fb3b*/
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( g_ScenarioUpdateState < dword_8B40D0 /*0x67fb7d*/
                      || (byte_8B40D5 || !dword_8B40D0)
                      && dword_8B40DC > 0
                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40C8 + 8))(
                           &dword_8B40C8,
                           dword_8B40D0 + dword_8B40DC,
                           0) )
                    {
                      v7 = g_ScenarioUpdateState++; /*0x67fb90*/
                      *((_DWORD *)dword_8B40CC + v7) = v14; /*0x67fb9d*/
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
              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v14, 4, 0); /*0x67fa57*/
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( (int)g_SelectionManager < dword_A8ECC0 /*0x67fa99*/
                || (byte_A8ECC5 || !dword_A8ECC0)
                && dword_A8ECCC > 0
                && (*(unsigned __int8 (__thiscall **)(ObjectClass **, int, _DWORD))&ObjectClass_CurrentObjects->parent_gap[8])(
                     &ObjectClass_CurrentObjects,
                     dword_A8ECC0 + dword_A8ECCC,
                     0) )
              {
                v4 = g_SelectionManager; /*0x67faac*/
                g_SelectionManager = (wchar_t *)((char *)g_SelectionManager + 1); /*0x67faaf*/
                *((_DWORD *)g_ObjectClass_CurrentCount + (_DWORD)v4) = v14; /*0x67fab9*/
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
int Game::validateScenario(unsigned int * a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x680f78*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      v5 = a2; /*0x680faf*/
      if ( *this ) /*0x680fac*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680fba*/
      *this = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *this ) /*0x680f93*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680f9c*/
      *this = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *this; /*0x680fc7*/
    if ( *this ) /*0x680fc7*/
    {
      *this = 0; /*0x680fcd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }
}
}
// 0x685120
namespace gamemd {
void sub_685120()
{
  int v0; // ecx

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685147*/
  LoadFactoryClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685158*/
  RadarClass::InitializeHashTable((int *)&MapClass_Instance); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)g_CurrentFrame - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v0 = 0; /*0x68518f*/
    else
      v0 = dword_B0EA88 - ((_DWORD)g_CurrentFrame - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v0; /*0x685191*/
  }
  dword_B0EA80 = (int)g_CurrentFrame; /*0x6851a1*/
  CellClass::setOverlayType((void **)g_AudioInitFlag, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(); /*0x6851b1*/
  MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}
}
// 0x698CB0
namespace gamemd {
CellStruct * * Game_DumpMultiplayerGameInfo()
{
  int v2; // eax
  FILE *v3; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  _BYTE v11[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = g_GameRulesOptions; /*0x698cb0*/
  v3 = Stream; /*0x698cbc*/
  if ( g_GameRulesOptions < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    g_GameRulesOptions = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(g_MultiplayerGameState + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)(this + 328)); /*0x698cfd*/
  for ( i = 0; i < *(_DWORD *)(this + 788); ++i ) /*0x698d0f*/
  {
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40), &Stream, (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", (unsigned __int8)v11[k]); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  Network::CopyAddress(&g_NetworkRematchObject, &Stream, (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", (unsigned __int8)v11[n]); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", *(_DWORD *)(this + 792)); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", *(_DWORD *)(this + 1664)); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", *(_DWORD *)(this + 380)); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", *(_DWORD *)(this + 348)); /*0x698e6a*/
  fprintf(v3, "House = %d\n", *(_DWORD *)(this + 372)); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", *(_DWORD *)(this + 788)); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", *(unsigned __int8 *)(this + 32)); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", *(_DWORD *)(this + 36)); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", *(unsigned __int8 *)(this + 40)); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", *(unsigned __int8 *)(this + 41)); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", *(unsigned __int8 *)(this + 53)); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", *(_DWORD *)(this + 56)); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", *(_DWORD *)(this + 60)); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", *(_DWORD *)(this + 64)); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", *(_DWORD *)(this + 768)); /*0x698f26*/
  if ( g_GameMode_Current[0] == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 4 ) /*0x698f54*/
      fprintf(v3, "Type = INTERNET\n"); /*0x698f5c*/
    else
      fprintf(v3, "Type = !!Unknown!!\n"); /*0x698f75*/
    return 1; /*0x698f64*/
  }
}
}
// 0x77E430
namespace gamemd {
void Game::EncodeGameSetupState()
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
  _DWORD v37[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v35 = Buffer; /*0x77e440*/
  v37[2] = 0; /*0x77e444*/
  if ( &MCVRedeploy == (int *)-2 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((char **)&v24, &g_INI_DefaultBuffer); /*0x77e47a*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v22, (wchar_t *)&MCVRedeploy + 1); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = (char **)Game_Set(&v23, &v22); /*0x77e465*/
  }
  String::AssignFromPtr((char **)&v25, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero(&v24); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero(&v23); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt(&v22); /*0x77e4b4*/
  v21 = g_MultiplayerConfigState; /*0x77e4da*/
  v19 = (unsigned __int8)g_MultiplayerSetupState; /*0x77e4db*/
  v17 = dword_A8BB0C; /*0x77e4dc*/
  v4 = String::GetOrEmpty((char **)&v25); /*0x77e4e1*/
  sprintf( /*0x77e54e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    g_MenuRandomSeed,
    *(_DWORD *)g_GameModeOptions,
    g_Rules_EngineerCount,
    g_Rules_Bases,
    g_Rules_MultiEngineer,
    (unsigned __int8)ShortGame,
    (unsigned __int8)SWAllowed,
    (unsigned __int8)g_Rules_ShortGame,
    (unsigned __int8)MCVRedeploy,
    (unsigned __int8)Crates,
    *(_DWORD *)g_ScenarioFlags,
    dword_A8EB68,
    v4,
    v17,
    v19,
    v21,
    &Destination,
    &g_MultiplayerFlags);
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v5 = 0; /*0x77e569*/
  v34 = Game_PlayerCount; /*0x77e56d*/
  if ( Game_PlayerCount > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v5); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide(v6); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor(v6); /*0x77e593*/
      Option = SessionClass::GetOption(v6); /*0x77e59e*/
      v7 = 0; /*0x77e5a7*/
      v8 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2(v6); /*0x77e5ab*/
      v28 = 0; /*0x77e5af*/
      v29 = 0; /*0x77e5b3*/
      v9 = (char **)&g_NetworkPlayerName; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        v26 = *v9; /*0x77e5c4*/
        v27 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v5)); /*0x77e5d4*/
        v10 = ToWideStringChar(v26); /*0x77e5d8*/
        if ( !_strcmpi(v27, v10) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        ++v9; /*0x77e5ef*/
        ++v8; /*0x77e5f2*/
        if ( (int)v9 >= (int)&g_PlayerNameListEnd ) /*0x77e5f9*/
        {
          v11 = v28; /*0x77e5fb*/
          v12 = v29; /*0x77e5ff*/
          goto LABEL_16; /*0x77e603*/
        }
      }
      Network::GetAddress((_DWORD *)(12 * v8 + 11066316), &v36, (int)v37, &v22); /*0x77e61e*/
      v11 = dword_A8DC2C[v8]; /*0x77e623*/
      v7 = v37[0]; /*0x77e62a*/
      v12 = dword_A8E230[v8]; /*0x77e62e*/
  LABEL_16:
      WideString::Assign((wchar_t **)&v23, *(wchar_t **)(Game_PlayerInfoArray + 4 * v5)); /*0x77e635*/
      ToWideStringCharAlt((char **)&v24, (const wchar_t **)&v23); /*0x77e650*/
      DeleteAndZero::Alt(&v23); /*0x77e659*/
      v20 = Option2; /*0x77e66d*/
      v18 = Option; /*0x77e672*/
      v16 = PlayerColor; /*0x77e673*/
      v15 = PlayerSide; /*0x77e674*/
      v14 = String::GetOrEmpty((char **)&v24); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], "%s,%d,%d,%d,%d,%x,%x,%x,", v14, v15, v16, v18, v20, v7, v11, v12); /*0x77e69a*/
      DeleteAndZero(&v24); /*0x77e6a6*/
      ++v5; /*0x77e6af*/
    }
    while ( v5 < v34 ); /*0x77e6b2*/
    v1 = v35; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, asc_831340); /*0x77e6f3*/
  v13 = g_CampaignSideIndex; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf(&byte_B76C24[strlen(byte_B76C24)], aDDDDD_0, *(v13 - 24), *(v13 - 16), *(v13 - 8), *v13, v13[8]); /*0x77e72f*/
    ++v13; /*0x77e734*/
  }
  while ( (int)v13 < (int)g_CampaignFactionSlot ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero(&v25); /*0x77e770*/
}
}
// 0x77F900
namespace gamemd {
Coord * * Game::ProcessIdle()
{
  signed int v0; // ebx
  int v1; // esi
  __time32_t v2; // eax
  wchar_t *String; // eax
  int i; // esi
  char *v5; // ebp
  int v6; // esi
  char *v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int k; // esi
  char *v11; // ebx
  int v12; // esi
  int v13; // ebp
  void *v14; // eax
  void *v15; // esi
  void *v16; // ebx
  char *v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  int v20; // edx
  int v21; // ecx
  signed int v22; // eax
  int v23; // ebp
  const char **v24; // eax
  int v25; // esi
  char *v26; // eax
  void *j; // [esp+24h] [ebp-A0h] BYREF
  void *Block; // [esp+28h] [ebp-9Ch] BYREF
  const char *m; // [esp+2Ch] [ebp-98h] BYREF
  bool v31; // [esp+33h] [ebp-91h]
  void *v32; // [esp+34h] [ebp-90h] BYREF
  char *v33; // [esp+38h] [ebp-8Ch] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  ScreenSaver::Process(0); /*0x77f90c*/
  v0 = 0; /*0x77f916*/
  v1 = 0; /*0x77f918*/
  ++dword_AA0430; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v1; /*0x77f94d*/
    }
    while ( v1 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) /*0x77f9c5*/
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
        String = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)String); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v2 = time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v2 = time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v2; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( g_WOL_ChatPool > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < g_WOL_ChatPool; ++i ) /*0x77fa91*/
      DeleteAndZero((void **)dword_B777A8 + i); /*0x77fa9b*/
    g_WOL_ChatPool = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && g_WOL_ChatPool > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && g_WOL_ChatPool > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && g_WOL_ChatPool > 0 )
  {
    Block = 0; /*0x77fb14*/
    for ( j = 0; (int)j < 10; j = (char *)j + 1 ) /*0x77fb18*/
    {
      if ( g_WOL_ChatPool <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v5 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset(v5, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v32); /*0x77fb44*/
      v6 = g_WOL_ChatPool - 1; /*0x77fb4e*/
      if ( g_WOL_ChatPool - 1 >= 0 && v6 < g_WOL_ChatPool ) /*0x77fb57*/
      {
        String::Reassign((char **)&v32, (const char **)dword_B777A8 + v6); /*0x77fb67*/
        DynamicArray::Remove(v6); /*0x77fb72*/
      }
      v7 = String::GetOrEmpty((char **)&v32); /*0x77fb80*/
      if ( strlen(v7) > 9 ) /*0x77fb91*/
        v7[9] = 0; /*0x77fb93*/
      strcpy(v5 + 36, v7); /*0x77fbb1*/
      if ( v0 ) /*0x77fbbc*/
        *(_DWORD *)(v0 + 32) = v5; /*0x77fbc4*/
      else
        Block = v5; /*0x77fbbe*/
      v0 = (signed int)v5; /*0x77fbcb*/
      DeleteAndZero(&v32); /*0x77fbcd*/
    }
    if ( ppv ) /*0x77fbeb*/
      (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 192))(ppv, Block); /*0x77fbf5*/
    v8 = Block; /*0x77fc03*/
    if ( Block ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v9 = (_DWORD *)v8[8]; /*0x77fc07*/
        __3_YAXPAX_Z(v8); /*0x77fc0b*/
        v8 = v9; /*0x77fc13*/
      }
      while ( v9 ); /*0x77fc17*/
    }
    dword_B76180 = time(0); /*0x77fc23*/
    v0 = 0; /*0x77fc28*/
  }
  if ( g_WOL_LoginToken > 200 ) /*0x77fc34*/
  {
    for ( k = 0; k < g_WOL_LoginToken; ++k ) /*0x77fc3a*/
      DeleteAndZero((void **)dword_B76600 + k); /*0x77fc45*/
    g_WOL_LoginToken = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && g_WOL_LoginToken > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && g_WOL_LoginToken > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && g_WOL_LoginToken > 0 )
  {
    j = 0; /*0x77fcbe*/
    Block = 0; /*0x77fcc2*/
    for ( m = 0; (int)m < 10; ++m ) /*0x77fcc6*/
    {
      if ( g_WOL_LoginToken <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v11 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset(v11, 0, 0x6Cu); /*0x77fce9*/
      v33 = v11; /*0x77fcf2*/
      unknown_libname_73(&v32); /*0x77fcf6*/
      v12 = g_WOL_LoginToken - 1; /*0x77fd00*/
      if ( g_WOL_LoginToken - 1 >= 0 && v12 < g_WOL_LoginToken ) /*0x77fd0d*/
      {
        String::Reassign((char **)&v32, (const char **)dword_B76600 + v12); /*0x77fd20*/
        if ( g_WOL_LoginToken ) /*0x77fd2c*/
        {
          if ( v12 >= g_WOL_LoginToken ) /*0x77fd34*/
            v12 = g_WOL_LoginToken - 1; /*0x77fd36*/
          DeleteAndZero((void **)dword_B76600 + v12); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * v12,
            (char *)dword_B76600 + 4 * v12 + 4,
            4 * (g_WOL_LoginToken + 0x3FFFFFFF * (v12 + 1)));
          --g_WOL_LoginToken; /*0x77fd7f*/
          if ( 3 * g_WOL_LoginToken <= dword_B765FC ) /*0x77fd89*/
          {
            v13 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              v13 = 10; /*0x77fd99*/
            if ( v13 < dword_B765FC ) /*0x77fda0*/
            {
              v14 = __2_YAPAXI_Z(4 * v13); /*0x77fdaa*/
              v15 = dword_B76600; /*0x77fdaf*/
              v16 = v14; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy(v14, dword_B76600, 4 * g_WOL_LoginToken); /*0x77fdc6*/
                v15 = dword_B76600; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v15); /*0x77fdcf*/
              dword_B76600 = v16; /*0x77fdd4*/
              v11 = v33; /*0x77fdda*/
              dword_B765FC = v13; /*0x77fde1*/
            }
          }
        }
      }
      v17 = String::GetOrEmpty((char **)&v32); /*0x77fdf0*/
      if ( strlen(v17) > 9 ) /*0x77fe01*/
        v17[9] = 0; /*0x77fe03*/
      strcpy(v11 + 36, v17); /*0x77fe23*/
      if ( Block ) /*0x77fe2e*/
        *((_DWORD *)Block + 8) = v11; /*0x77fe36*/
      else
        j = v11; /*0x77fe30*/
      Block = v11; /*0x77fe3d*/
      DeleteAndZero(&v32); /*0x77fe41*/
    }
    if ( ppv ) /*0x77fe5f*/
      (*(void (__stdcall **)(LPVOID, void *))(*(_DWORD *)ppv + 188))(ppv, j); /*0x77fe69*/
    v18 = j; /*0x77fe77*/
    if ( j ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v19 = (_DWORD *)v18[8]; /*0x77fe7b*/
        __3_YAXPAX_Z(v18); /*0x77fe7f*/
        v18 = v19; /*0x77fe87*/
      }
      while ( v19 ); /*0x77fe8b*/
    }
    dword_B7617C = time(0); /*0x77fe97*/
    v0 = 0; /*0x77fe9c*/
  }
  if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(); /*0x77fed4*/
  }
  if ( ppv && !dword_B77DCC ) /*0x77fee8*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 20))(dword_AC1174); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( g_WOL_IdleFlag && g_WOL_ProcessIdle == 41 && dword_B77E4C ) /*0x77ff2b*/
  {
    LOBYTE(v20) = 0; /*0x77ff2d*/
    LOBYTE(v21) = 0; /*0x77ff2f*/
    CheckGameSettingsChanged(v21, v20); /*0x77ff31*/
  }
  if ( ppv && g_WOL_ProcessIdle && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (__stdcall **)(LPVOID, struct in_addr *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && g_WOL_ProcessIdle && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy(&m); /*0x77ffe9*/
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x780008*/
    {
      v22 = g_WOL_State; /*0x78000e*/
      if ( (int)g_WOL_State > 0 ) /*0x780015*/
      {
        v23 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v23 >= 0 && v0 < v22 ) /*0x780023*/
            qmemcpy(Buffer, (char *)g_WOL_ConnectionFlags + v23, sizeof(Buffer)); /*0x780037*/
          String::Assign((char **)&j, (const char *)&Buffer[9]); /*0x780042*/
          v24 = (const char **)String::ToLowerCopy(&v33); /*0x780050*/
          v31 = String::Compare(&m, v24); /*0x780063*/
          DeleteAndZero((void **)&v33); /*0x780067*/
          if ( !v31 && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v25 = *(_DWORD *)g_UIPointerTable; /*0x78008c*/
            v26 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (__stdcall **)(LPVOID, char *, int, void **))(v25 + 24))(g_UIPointerTable, v26, 1000, &Block); /*0x78009b*/
          }
          DeleteAndZero(&j); /*0x7800a2*/
          v22 = g_WOL_State; /*0x7800a7*/
          ++v0; /*0x7800ac*/
          v23 += 108; /*0x7800ad*/
        }
        while ( v0 < (int)g_WOL_State ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((void **)&m); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x7800d8*/
  {
  LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(); /*0x7800ec*/
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
  __int16 v14; // [esp+1Ch] [ebp-4h]

  if ( aP0 ) /*0x7a223d*/
  {
    if ( aP1 ) /*0x7a2245*/
    {
      v5 = Buffera; /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = a3; /*0x7a2257*/
        if ( a3 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a3 = 0; /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(aP1, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a3); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (char **)&g_NetworkPlayerName; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi(aP0, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&g_PlayerNameListEnd ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          v13 = Buffera; /*0x7a22de*/
          v14 = 0; /*0x7a22e2*/
          v12 = 0; /*0x7a22fc*/
          NetworkID::Assign((_DWORD *)(12 * v7 + 11066316), &v12, (int)&v13, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
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
  strcpy(&Destination, g_Str_File_RandMap_Sed); /*0x7a24b0*/
  g_GameRulesOptions = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(g_Str_File_RandMap_Sed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( g_MultiplayerOptions > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v17)) ) /*0x7a2504*/
    {
      if ( ++v17 >= g_MultiplayerOptions ) /*0x7a250e*/
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
    GameOption::SetDescriptionWStr(*(wchar_t **)(g_MultiplayerGameState + 4 * v17), &word_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, g_Str_File_RandMap_Sed, &word_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( g_MultiplayerOptions < dword_A8B8D0 /*0x7a258b*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8DC + dword_A8B8D0,
           0) )
    {
      v22 = g_MultiplayerOptions++; /*0x7a2598*/
      *(_DWORD *)(g_MultiplayerGameState + 4 * v22) = v21; /*0x7a25a7*/
    }
  }
  __3_YAXPAX_Z(v19); /*0x7a25ce*/
  result = LoadScenarioClassByIndex(v17); /*0x7a25d8*/
  if ( result == 1 ) /*0x7a25df*/
    g_GameRulesOptions = v17; /*0x7a25e1*/
  return result; /*0x7a25e7*/
}
}
// 0x4790A0
namespace gamemd {
int Game::CheckForGameCD()
{
  return AlwaysFindYRCD(dword_89E414, this);
}
} // namespace gamemd

// 0x53AB50
namespace gamemd {
void * sub_53AB50()
{
  #375 *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = HouseClass_Player; /*0x53ab55*/
  *((_BYTE *)HouseClass_Player + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}
} // namespace gamemd

// 0x550000
namespace gamemd {
int Game::loadCampaignData()
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_TimerPool; g_TimerPool; result = g_TimerPool ) /*0x550008*/
  {
    v2 = *(void **)dword_ABC87C; /*0x550010*/
    if ( *(_DWORD *)dword_ABC87C ) /*0x550010*/
    {
      v4 = *(void **)dword_ABC87C; /*0x550026*/
      v3 = (*(int (__thiscall **)(int *, void **))(dword_ABC878 + 16))(&dword_ABC878, &v4); /*0x55002a*/
      if ( v3 != -1 && v3 < g_TimerPool && v3 < --g_TimerPool ) /*0x550045*/
      {
        do /*0x55005d*/
        {
          ++v3; /*0x55004d*/
          *((_DWORD *)dword_ABC87C + v3 - 1) = *((_DWORD *)dword_ABC87C + v3); /*0x550051*/
        }
        while ( v3 < g_TimerPool ); /*0x55005d*/
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
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < dword_ABCB88; ++i ) /*0x556dfe*/
  {
    v1 = (_DWORD *)*((_DWORD *)dword_ABCB7C + i); /*0x556e06*/
    if ( v1 ) /*0x556e0b*/
    {
      v2 = v1[1]; /*0x556e0d*/
      if ( v2 ) /*0x556e12*/
      {
        *(_DWORD *)(v2 + 168) = 0; /*0x556e14*/
        v1[1] = 0; /*0x556e1a*/
      }
      v4 = v1; /*0x556e2d*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_ABCB78 + 16))(&dword_ABCB78, &v4); /*0x556e31*/
      if ( v3 != -1 && v3 < dword_ABCB88 && v3 < --dword_ABCB88 ) /*0x556e4c*/
      {
        do /*0x556e64*/
        {
          ++v3; /*0x556e54*/
          *((_DWORD *)dword_ABCB7C + v3 - 1) = *((_DWORD *)dword_ABCB7C + v3); /*0x556e58*/
        }
        while ( v3 < dword_ABCB88 ); /*0x556e64*/
      }
      __3_YAXPAX_Z(v1); /*0x556e67*/
    }
  }
  dword_ABCB88 = 0; /*0x556e7f*/
  if ( dword_ABCB7C && byte_ABCB85 ) /*0x556e8f*/
  {
    __3_YAXPAX_Z(dword_ABCB7C); /*0x556e92*/
    dword_ABCB7C = 0; /*0x556e9a*/
  }
  byte_ABCB85 = 0; /*0x556ea0*/
  dword_ABCB80 = 0; /*0x556ea6*/
}
} // namespace gamemd

// 0x5865E0
namespace gamemd {
char Game::Stub3(IUnknown * aP0)
{
  return 0; /*0x5865e2*/
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

  Debug::Log(); /*0x5b56fd*/
  DlgItem = GetDlgItem(*this, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(g_GameSetupBuffer, lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  v3 = GetDlgItem(*this, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    g_TauntCommandState = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  v4 = GetDlgItem(*this, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    g_CommandExecState = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/
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
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
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
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = Game_PlayerCount; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(Game_PlayerInfoArray + 4 * i), &g_CurrentPlayerName); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(_DWORD *)(Game_PlayerInfoArray + 4 * i); /*0x5e98d3*/
      if ( *(_DWORD *)(result + 119) ) /*0x5e98d6*/
        *(_DWORD *)(result + 119) = 0; /*0x5e98dd*/
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

  result = *this; /*0x67fde0*/
  if ( *this ) /*0x67fde0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fde9*/
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
  if ( !byte_B0FBB8 ) /*0x72d73a*/
  {
    Game::shutdownGame(this); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = off_844BD8[0]; /*0x72d74d*/
      if ( this != (void *)1 ) /*0x72d756*/
        v3 = off_844BDC; /*0x72d758*/
    }
    else
    {
      v3 = off_844BD4[0]; /*0x72d745*/
    }
    result = LoadPaletteSimple(v3, &dword_B0FBB0, &dword_B0FBB4); /*0x72d768*/
    byte_B0FBB8 = 1; /*0x72d76d*/
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
    if ( this == (void *)1 ) /*0x72d86f*/
    {
      if ( g_DisplayWidth == 640 ) /*0x72d87b*/
        result = LoadFileSHP(off_844CA8, (bool *)&byte_B0FC7D); /*0x72d883*/
      else
        result = LoadFileSHP(off_844CAC, (bool *)&byte_B0FC7D); /*0x72d894*/
      dword_B0FB1C = result; /*0x72d888*/
    }
    else
    {
      v2 = off_844CB0[0]; /*0x72d89f*/
      if ( g_DisplayWidth != 640 ) /*0x72d8af*/
        v2 = off_844CB4; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&byte_B0FC7D); /*0x72d8b7*/
      dword_B0FB1C = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( g_DisplayWidth == 640 ) /*0x72d843*/
      result = LoadFileSHP(off_844CA0, (bool *)&byte_B0FC7D); /*0x72d84b*/
    else
      result = LoadFileSHP(off_844CA4, (bool *)&byte_B0FC7D); /*0x72d85c*/
    dword_B0FB1C = result; /*0x72d850*/
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
    if ( this == (void *)1 ) /*0x72f460*/
    {
      LOWORD(dword_B0FA1C) = word_B0FB04; /*0x72f46e*/
      BYTE2(dword_B0FA1C) = byte_B0FB06; /*0x72f475*/
      return byte_B0FB06; /*0x72f469*/
    }
    else
    {
      LOWORD(dword_B0FA1C) = word_B0FAA0; /*0x72f488*/
      BYTE2(dword_B0FA1C) = byte_B0FAA2; /*0x72f48f*/
    }
  }
  else
  {
    LOWORD(dword_B0FA1C) = word_B0F9D8; /*0x72f450*/
    BYTE2(dword_B0FA1C) = byte_B0F9DA; /*0x72f456*/
    return word_B0F9D8; /*0x72f444*/
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
  result = SearchMIXFile(Buffer, 0); /*0x74d47d*/
  dword_B1D2EC = result; /*0x74d482*/
  return result; /*0x74d487*/
}
} // namespace gamemd

// 0x796DE0
namespace gamemd {
int Game::CreateAIPlayer()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[2]; // [esp+Ch] [ebp-8h] BYREF
  char v7[6]; // [esp+Eh] [ebp-6h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v1 = v0; /*0x796def*/
  if ( v0 ) /*0x796df8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796dfd*/
  else
    v1 = 0; /*0x796e04*/
  BulkCharToWide(v1, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796e1f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796e26*/
  *(_DWORD *)(v1 + 83) = 3; /*0x796e29*/
  v5 = 0; /*0x796e33*/
  v7[3] = 0; /*0x796e37*/
  strcpy(v7, "QR"); /*0x796e44*/
  v6[1] = 2; /*0x796e49*/
  v6[0] = 10; /*0x796e4e*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796e53*/
  if ( Game_PlayerCount < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
         &g_PlayerInfoCount,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v2 = Game_PlayerCount++; /*0x796e99*/
    *(_DWORD *)(Game_PlayerInfoArray + 4 * v2) = v1; /*0x796ea8*/
  }
  v3 = g_ScenarioLoadFlags; /*0x796eab*/
  dword_B7790C[g_ScenarioLoadFlags] = 100; /*0x796eb2*/
  result = v3 + 1; /*0x796ebd*/
  g_ScenarioLoadFlags = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}
} // namespace gamemd

// 0x796ED0
namespace gamemd {
int Game::CreateAIPlayer_Potato()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[3]; // [esp+Ch] [ebp-8h] BYREF
  char v7[5]; // [esp+Fh] [ebp-5h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v1 = v0; /*0x796edf*/
  if ( v0 ) /*0x796ee8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796eed*/
  else
    v1 = 0; /*0x796ef4*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796f0f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796f16*/
  *(_DWORD *)(v1 + 83) = 0; /*0x796f19*/
  v5 = 0; /*0x796f1f*/
  v7[2] = 0; /*0x796f23*/
  strcpy(v7, "a"); /*0x796f2b*/
  v6[2] = 20; /*0x796f30*/
  v6[1] = 2; /*0x796f35*/
  v6[0] = 10; /*0x796f3a*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796f3f*/
  if ( Game_PlayerCount < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
         &g_PlayerInfoCount,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v2 = Game_PlayerCount++; /*0x796f85*/
    *(_DWORD *)(Game_PlayerInfoArray + 4 * v2) = v1; /*0x796f94*/
  }
  v3 = g_ScenarioLoadFlags; /*0x796f97*/
  dword_B7790C[g_ScenarioLoadFlags] = 100; /*0x796f9e*/
  result = v3 + 1; /*0x796fa9*/
  g_ScenarioLoadFlags = result; /*0x796faa*/
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
  v4 = 16 * ((_DWORD)v3 + 1); /*0x7b8302*/
  v5 = (char *)__2_YAPAXI_Z((v4 + 6) / 7); /*0x7b831c*/
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  if ( v5 ) /*0x7b8338*/
    v7 = strlen(v5) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy(v8, v5); /*0x7b8374*/
  __3_YAXPAX_Z(v5); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy(v9, v8); /*0x7b83c2*/
    __3_YAXPAX_Z(v8); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}
} // namespace gamemd
