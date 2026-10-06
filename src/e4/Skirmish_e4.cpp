// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/PtrVector_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x46F600
namespace gamemd {
int Skirmish::FillPlayerNames()
{

  int result; // eax
  int v2; // ebx
  HWND v3; // esi
  LPARAM v4; // edi
  LRESULT v5; // ebx
  int i; // [esp+14h] [ebp-8h]
  HWND DlgItem; // [esp+18h] [ebp-4h]

  result = 0; /*0x46f60b*/
  for ( i = 0; i < 8; ++i ) /*0x46f613*/
  {
    if ( result ) /*0x46f619*/
    {
      if ( result != 1 ) /*0x46f625*/
        goto LABEL_9; /*0x46f625*/
      v2 = 1042; /*0x46f62b*/
    }
    else
    {
      v2 = 1041; /*0x46f61b*/
    }
    DlgItem = GetDlgItem((HWND)this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem((HWND)this, v2); /*0x46f65e*/
      v4 = (&dword_A8DA90)[i]; /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA((HWND)this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
        v5 = SendMessageA( (HWND)(v3), 0x4C2u, 0, (LPARAM)((LPARAM)(v4))); /*0x46f68f*/
        SendMessageA( (HWND)(v3), 0x151u, v5, (LPARAM)((LPARAM)(v4))); /*0x46f699*/
        SendMessageA( (HWND)(v3), 0x14Eu, v5, 0); /*0x46f6a4*/
        ShowWindow(DlgItem, 5); /*0x46f6ad*/
      }
    }
LABEL_9:
    result = i + 1; /*0x46f6b3*/
  }
  return result; /*0x46f6c5*/

}
} // namespace gamemd
// 0x46F8F0
namespace gamemd {
CampaignClass * * Skirmish::SetupAllSpawnLocations(HWND hDlg)
{

  ObjectClass *v1; // ebp
  int ResourceIDCSF; // eax
  SessionClass *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  ObjectClass *v7; // ebx
  int *v8; // edi
  int v9; // eax
  SessionClass *v10; // esi
  int v11; // ebp
  int v12; // eax
  ObjectClass *v14; // [esp+14h] [ebp-4h]

  v1 = (gamemd::ObjectClass *)(dword_A8DA8C); /*0x46f8f5*/
  v14 = (gamemd::ObjectClass *)(dword_A8DA8C); /*0x46f906*/
  if ( dword_A8DA8C  !=  (unsigned int)((unsigned int))-1 ) /*0x46f90a*/
  {
    ResourceIDCSF = GetResourceIDCSF(dword_A8DA8C); /*0x46f90e*/
    v4 = (SessionClass *)(&dword_A8DA90)[(unsigned int)v1]; /*0x46f913*/
    v5 = ResourceIDCSF; /*0x46f91a*/
    if ( (uint8_t)((Player *)((Player *)v4))->IsObserver() ) /*0x46f91e*/
    {
      PlayerColor = *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v1 + 108]; /*0x46f927*/
    }
    else if ( v4 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = ((SessionClass *)(v4))->GetPlayerColor(); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations((HWND)hDlg, v5, PlayerColor); /*0x46f978*/
  }
  v7 = (ObjectClass *)(0); /*0x46f97d*/
  v8 = (int *)&stru_A8B250[108]; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF((int)(v7)); /*0x46f98a*/
      v10 = (SessionClass *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( (uint8_t)((Player *)((Player *)v10))->IsObserver() ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = ((SessionClass *)(v10))->GetPlayerColor(); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations((HWND)hDlg, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x46f9fc*/
  }
  while ( (int)v8 < (int)&stru_A8B250[140] ); /*0x46fa03*/

}
} // namespace gamemd
// 0x596C70
namespace gamemd {
int Skirmish::ReadSettings(HWND hDlg)
{

  LRESULT v4; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  LRESULT v9; // eax
  LRESULT v10; // eax
  LRESULT v11; // eax
  HWND DlgItem; // eax
  LRESULT v13; // eax
  void *v14; // edi
  LRESULT v16; // [esp-8h] [ebp-1Ch]
  LRESULT v17; // [esp-8h] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+10h] [ebp-4h]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]
  HWND hDlga; // [esp+18h] [ebp+4h]
  HWND hDlgb; // [esp+18h] [ebp+4h]
  HWND hDlgc; // [esp+18h] [ebp+4h]
  HWND hDlgd; // [esp+18h] [ebp+4h]
  HWND hDlge; // [esp+18h] [ebp+4h]
  HWND hDlgf; // [esp+18h] [ebp+4h]

  v18 = *((unsigned int *)this + 15); /*0x596c8a*/
  hDlga = GetDlgItem(hDlg, 1029); /*0x596ca2*/
  v4 = SendMessageA( (HWND)(hDlga), 0x147u, 0, 0); /*0x596ca6*/
  v5 = SendMessageA( (HWND)(hDlga), 0x150u, v4, 0); /*0x596cb3*/
  *((unsigned int *)this + 15) = v5; /*0x596cb9*/
  if ( v18 != v5 ) /*0x596cbe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596cc0*/
  v19 = *((unsigned int *)this + 14); /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v16 = SendMessageA( (HWND)(hDlgb), 0x147u, 0, 0); /*0x596ce8*/
  v6 = SendMessageA( (HWND)(hDlgb), 0x150u, v16, 0); /*0x596cf3*/
  *((unsigned int *)this + 14) = v6; /*0x596cf9*/
  if ( v19 != v6 ) /*0x596cfe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d00*/
  v20 = *((unsigned int *)this + 16); /*0x596d10*/
  hDlgc = GetDlgItem(hDlg, 1032); /*0x596d22*/
  v7 = SendMessageA( (HWND)(hDlgc), 0x147u, 0, 0); /*0x596d26*/
  v8 = SendMessageA( (HWND)(hDlgc), 0x150u, v7, 0); /*0x596d33*/
  *((unsigned int *)this + 16) = v8; /*0x596d39*/
  if ( v20 != v8 ) /*0x596d3e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d40*/
  v21 = *((unsigned int *)this + 18); /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v9 = SendMessageA( (HWND)(hDlgd), 0x147u, 0, 0); /*0x596d66*/
  v10 = SendMessageA( (HWND)(hDlgd), 0x150u, v9, 0); /*0x596d73*/
  *((unsigned int *)this + 18) = v10; /*0x596d79*/
  if ( v21 != v10 ) /*0x596d7e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d80*/
  v22 = *((unsigned int *)this + 25); /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v17 = SendMessageA( (HWND)(hDlge), 0x147u, 0, 0); /*0x596da8*/
  v11 = SendMessageA( (HWND)(hDlge), 0x150u, v17, 0); /*0x596db3*/
  *((unsigned int *)this + 25) = v11; /*0x596db9*/
  *((unsigned int *)this + 26) = v11; /*0x596dbe*/
  if ( v22 != v11 ) /*0x596dc1*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596dc3*/
  hDlgf = (HWND)*((unsigned int *)this + 20); /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v13 = SendMessageA( (HWND)(DlgItem), 0x400u, 0, 0); /*0x596de3*/
  *((unsigned int *)this + 20) = v13; /*0x596de9*/
  if ( hDlgf == (HWND)v13 ) /*0x596dee*/
  {
    if ( !g_MissionQueueFrame.globalVariables[88] ) /*0x596e00*/
      return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e00*/
  }
  else
  {
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596df0*/
  }
  ((Skirmish *)(this))->RandomizeSettings(*((unsigned int *)this + 15)); /*0x596e08*/
  v14 = (void *)g_MissionQueueFrame.briefing[451]; /*0x596e0d*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x596e15*/
  {
    ComPtr::Dtor(  (ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x596e19*/
    __3_YAXPAX_Z(v14); /*0x596e1f*/
  }
  g_MissionQueueFrame.briefing[451] = 0; /*0x596e27*/
  g_MissionQueueFrame.globalVariables[88] = 0; /*0x596e31*/
  return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e3f*/

}
} // namespace gamemd
// 0x597260
namespace gamemd {
TechnoTypeClass * * Skirmish::RandomizeSettings(int aP1)
{

  int v3; // eax
  int v4; // esi
  int result; // eax

  *((unsigned int *)this + 19) = Random::Range( /*0x597282*/
                             &Randomizer_Global,
                             *((unsigned int *)&stru_82ADA8.BounceAnim + aP1),
                             stru_82ADA8.Elasticity[aP1 + 1]);
  *((unsigned int *)this + 17) = Random::Range(&Randomizer_Global, stru_82ADA8.Layer[aP1], (&dword_82B120)[aP1]); /*0x59729f*/
  *((unsigned int *)this + 24) = Random::Range( /*0x5972bc*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[aP1 + 175],
                             *(&stru_82ADA8.RunningFrames + aP1));
  *((unsigned int *)this + 27) = Random::Range( /*0x5972d9*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[aP1 + 165],
                             stru_82ADA8.MaxXYVel[aP1]);
  *((unsigned int *)this + 28) = Random::Range( /*0x5972f6*/
                             &Randomizer_Global,
                             *(&stru_82ADA8.TranslucencyDetailLevel + aP1),
                             stru_82ADA8.RandomRate[aP1 + 2]);
  *((unsigned int *)this + 21) = 20 * *((unsigned int *)this + 16); /*0x59730b*/
  *((unsigned int *)this + 22) = Random::Range(&Randomizer_Global, 0, 100); /*0x597313*/
  v3 = *(unsigned int *)(g_MissionQueueFrame.briefingCsf[6] + 4 * aP1); /*0x597322*/
  v4 = *(unsigned int *)(g_MissionQueueFrame.percent + 4 * aP1); /*0x597325*/
  if ( v3 >= 0 ) /*0x59732a*/
  {
    if ( v3 > 100 ) /*0x597333*/
      v3 = 100; /*0x597335*/
  }
  else
  {
    v3 = 0; /*0x59732c*/
  }
  if ( v4 >= 0 ) /*0x59733c*/
  {
    if ( v4 > 100 ) /*0x597345*/
      v4 = 100; /*0x597347*/
  }
  else
  {
    v4 = 0; /*0x59733e*/
  }
  if ( v3 > v4 ) /*0x59734e*/
    v3 = (unsigned int)(v4); /*0x597350*/
  *((unsigned int *)this + 23) = (unsigned int)((gamemd::TechnoTypeClass **)(Random::Range(&Randomizer_Global, v3, v4))); /*0x59736a*/
  result = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x59736d*/
  *((unsigned int *)this + 29) = (unsigned int)((gamemd::TechnoTypeClass **)(result)); /*0x597372*/
  return (gamemd::TechnoTypeClass **)(result); /*0x597375*/

}
} // namespace gamemd
// 0x640710
namespace gamemd {
int Skirmish::RenderPreview(HWND aP1)
{

  int result; // eax
  HWND DlgItem; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  void (**DSurface_field_0x0)(DSurface *, int *, unsigned int, int); // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  AbstractClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  unsigned int *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+30h] [ebp-74h]
  unsigned int v26[4]; // [esp+34h] [ebp-70h] BYREF
  int v27[4]; // [esp+44h] [ebp-60h] BYREF
  LONG left; // [esp+54h] [ebp-50h] BYREF
  LONG top; // [esp+58h] [ebp-4Ch]
  int v30; // [esp+5Ch] [ebp-48h]
  int v31; // [esp+60h] [ebp-44h]
  int v32; // [esp+64h] [ebp-40h]
  int v33; // [esp+68h] [ebp-3Ch]
  int v34; // [esp+6Ch] [ebp-38h] BYREF
  int v35; // [esp+70h] [ebp-34h]
  struct tagRECT Rect; // [esp+74h] [ebp-30h] BYREF
  char v37[16]; // [esp+84h] [ebp-20h] BYREF
  char v38[16]; // [esp+94h] [ebp-10h] BYREF

  result = ValidateRect(aP1, 0); /*0x640726*/
  if ( *(unsigned int *)this ) /*0x64072c*/
  {
    DlgItem = GetDlgItem(aP1, 1128); /*0x64073f*/
    ScreenDialogToClient( (void *)((void *)(DlgItem)), (void *)(&Rect)); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *(unsigned int *)this; /*0x64076a*/
    v31 = Rect.bottom - Rect.top; /*0x64076c*/
    v30 = Rect.right - Rect.left; /*0x640770*/
    v6 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)v5 + 120))( v5, (unsigned int *)(v26)); /*0x64077b*/
    v27[0] = *v6; /*0x640784*/
    v27[1] = v6[1]; /*0x64078f*/
    v7 = v6[2]; /*0x640793*/
    v8 = v6[3]; /*0x640796*/
    v24[0] = 1000 * v31 / v8; /*0x6407a8*/
    v9 = 1000 * v30 / v7; /*0x6407ba*/
    if ( v24[0] < v9 ) /*0x6407c2*/
      v9 = 1000 * v31 / v8; /*0x6407c4*/
    v10 = v9 * v7; /*0x6407c6*/
    v24[0] = v9; /*0x6407c9*/
    v11 = v9 * v8; /*0x6407d4*/
    v25 = v10 / 2000; /*0x6407e7*/
    v32 = left + v30 / 2 - v10 / 2000; /*0x6407fc*/
    v33 = top + v31 / 2 - v11 / 2000; /*0x640822*/
    v34 = v10 / 1000; /*0x640842*/
    v35 = v11 / 1000; /*0x640856*/
(*((void (**)(DSurface *, LONG *, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x64085d*/ DSurface_Alternate, (LONG *)(&left), 0);



    DSurface_field_0x0 = (void (**)(DSurface *, int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0; /*0x64086c*/
    v13 = (*(int (**)(unsigned int, int *, unsigned int, unsigned int))(**(unsigned int * *)&this->infantryBlinkTimer))( *(unsigned int *)this, (int *)(v27), 0, 0); /*0x640875*/
    DSurface_field_0x0[2](DSurface_Alternate, &v34, *(unsigned int *)this, v13); /*0x640887*/
    HIBYTE(v23) = 0; /*0x640896*/
    if ( (stru_AC4B30.__pad_EC[628] & 1) == 0 ) /*0x64089b*/
    {
      stru_AC4B30.__pad_EC[628] |= 1u; /*0x6408a8*/
      *(unsigned int *)&stru_AC4B30.__pad_EC[612] = (unsigned int)LoadFileSHP((char *)(aStartbutShp),(bool *)((bool *)&v23 + 3)); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    BuildingAnimByName = FindBuildingAnimByName((gamemd::AbstractClass *)((unsigned int *)((char *)&stru_820320 + 12)), 1); /*0x6408c7*/
    v15 = (gamemd::AbstractClass *)(dword_A8B230); /*0x6408cc*/
    v16 = BuildingAnimByName; /*0x6408d2*/
    result = (&dword_A8B230)[122].abstractFlags; /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 /*0x640944*/
            + v34
            * ((signed int)(1000 * (*(&v15[122].nextArrayIndex + 2 * v17) - (unsigned int)v15[122].vtable1))
             / (int)v15[122].vtable3)
            / 1000;
        v19 = v33 /*0x64097a*/
            + v35
            * ((signed int)(1000 * (*(&v15[122].referenceCount + 2 * v17) - (unsigned int)v15[122].vtable2))
             / v15[122].uniqueId)
            / 1000;
        v20 = v19; /*0x64097e*/
        if ( *(unsigned int *)&stru_AC4B30.__pad_EC[612] ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
v21 = (int *)(*((int (**)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x6409b6*/ DSurface_Alternate, (char *)(v37));


          DrawToSurfaceSHP( /*0x6409d2*/
            (int)DSurface_Alternate,
            v25,
            *(int *)&stru_AC4B30.__pad_EC[612],
            0,
            v24,
            v21,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        ++v17; /*0x6409e3*/
        v26[0] = v18 - 2; /*0x6409ef*/
        v26[1] = v20 - 6; /*0x6409f3*/
v22 = (unsigned int *)(*((int (**)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x640a01*/ DSurface_Alternate, (char *)(v38));


        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        (int)DSurface_Alternate,
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = (gamemd::AbstractClass *)(dword_A8B230); /*0x640a1a*/
      }
      while ( v17 < (&dword_A8B230)[122].abstractFlags ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/

}
} // namespace gamemd
// 0x6ACD60
namespace gamemd {
int Skirmish::EnableSpawnButtons(HWND hDlg)
{

  Skirmish *v1; // ebp
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  LRESULT v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = (gamemd::Skirmish *)(hDlg); /*0x6acd62*/
  if ( !hDlg ) /*0x6acd66*/
    v1 = (Skirmish *)((Dialog*)(Dialog *)0x102)->FindByHandle(); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( dword_A8B23C ) /*0x6acd80*/
    v7 = dword_A8B23C->ambientSoundController[0]; /*0x6acd85*/
  result = (int)GetDlgItem((HWND)v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow((HWND)result, v7 != 0); /*0x6acdac*/
    v3 = (ObjectClass *)(0); /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (ObjectClass *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (ObjectClass *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (ObjectClass *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (ObjectClass *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (ObjectClass *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (ObjectClass *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA((HWND)v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      v3 = (ObjectClass *)((char *)v3 + 1); /*0x6ace32*/
      v6 = SendDlgItemMessageA((HWND)v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = GetResourceID4CSF((int)(v3)); /*0x6ace37*/
      if ( result >= 0 ) /*0x6ace3e*/
      {
        result = (int)GetDlgItem((HWND)v1, result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == -1 ) /*0x6ace4f*/
            result = EnableWindow((HWND)result, 0); /*0x6ace53*/
          else
            result = EnableWindow((HWND)result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)v3 + 1 < 8 );
  }
  return result; /*0x6ace79*/

}
} // namespace gamemd
// 0x6AE3F0
namespace gamemd {
ReferenceCounted * * Skirmish::Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4)
{

  int result; // eax
  HWND DlgItem; // eax
  int DlgCtrlID; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hDlg), a2, a3, a4)); /*0x6ae40a*/
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      ((WideString *)(0))->Assign_Alt(); /*0x6ae4bb*/
      if ( *(unsigned int *)a4 && *(unsigned int *)(a4 + 4) != -1 ) /*0x6ae4ce*/
      {
        DlgCtrlID = GetDlgCtrlID(*(HWND *)a4); /*0x6ae4d5*/
        v7 = DlgCtrlID; /*0x6ae4db*/
        if ( DlgCtrlID == 1291 /*0x6ae52b*/
          || DlgCtrlID == 1294
          || DlgCtrlID == 1302
          || DlgCtrlID == 1306
          || DlgCtrlID == 1307
          || DlgCtrlID == 1308
          || DlgCtrlID == 1309 )
        {
          v14 = *(unsigned int *)(a4 + 4); /*0x6ae5da*/
          if ( v14 == -1 ) /*0x6ae5e6*/
            v14 = SendDlgItemMessageA(hDlg, v7, 0x147u, 0, 0); /*0x6ae5f3*/
          v15 = SendDlgItemMessageA(hDlg, v7, 0x150u, v14, 0); /*0x6ae5ff*/
          switch ( v15 ) /*0x6ae604*/
          {
            case -1: /*0x6ae604*/
              v16 = (wchar_t *)GetStringCSF((wchar_t *)(aSttPlayernone),(unsigned int *)((int)g_Str_File_Skirmish_cpp),(const char *)( 135)); /*0x6ae617*/
              ((WideString *)v16)->Assign_Alt(); /*0x6ae61f*/
              return (gamemd::ReferenceCounted **)(1); /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = (wchar_t *)GetStringCSF((wchar_t *)(g_Str_STT_PlayerDumbAI),(unsigned int *)((int)g_Str_File_Skirmish_cpp),(const char *)(137)); /*0x6ae646*/
              ((WideString *)v17)->Assign_Alt(); /*0x6ae64e*/
              return (gamemd::ReferenceCounted **)(1); /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = (wchar_t *)GetStringCSF((wchar_t *)(g_Str_STT_PlayerSmartAI),(unsigned int *)((int)g_Str_File_Skirmish_cpp),(const char *)(139)); /*0x6ae675*/
              ((WideString *)v18)->Assign_Alt(); /*0x6ae67d*/
              return (gamemd::ReferenceCounted **)(1); /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = (wchar_t *)GetStringCSF((wchar_t *)(g_Str_STT_PlayerGeniusAI),(unsigned int *)((int)g_Str_File_Skirmish_cpp),(const char *)(141)); /*0x6ae6a3*/
              ((WideString *)v19)->Assign_Alt(); /*0x6ae6ab*/
              return (gamemd::ReferenceCounted **)(1); /*0x6ae6b9*/
          }
          ((WideString *)(0))->Assign_Alt(); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v7) != -1 ) /*0x6ae547*/
          {
            v10 = (int)((gamemd::ReferenceCounted **)(GetComboBoxSelectedRaw( (HWND)(hDlg), v7, *(unsigned int *)(a4 + 4)))); /*0x6ae589*/
            v11 = (wchar_t *)((GameSetup *)(v10))->GetColorTooltip(); /*0x6ae590*/
            ((WideString *)v11)->Assign_Alt(); /*0x6ae598*/
            return (gamemd::ReferenceCounted **)(1); /*0x6ae5a6*/
          }
          if ( ((Dialog *)(v7))->SideIDToIndex() != -1 ) /*0x6ae553*/
          {
            v8 = SetComboBoxSelection( (HWND)(hDlg), v7, *(unsigned int *)(a4 + 4)); /*0x6ae561*/
            v9 = (wchar_t *)sub_4E4F30( (void *)((void *)(v8))); /*0x6ae568*/
            ((WideString *)v9)->Assign_Alt(); /*0x6ae570*/
            return (gamemd::ReferenceCounted **)(1); /*0x6ae57e*/
          }
        }
        else
        {
          v12 = GetComboBoxSelected( (HWND)(hDlg), v7, *(unsigned int *)(a4 + 4)); /*0x6ae5b1*/
          if ( v12 != -1 ) /*0x6ae5b9*/
          {
            v13 = (wchar_t *)((SideClass *)(v12))->GetName(); /*0x6ae5c1*/
            ((WideString *)v13)->Assign_Alt(); /*0x6ae5c9*/
            return (gamemd::ReferenceCounted **)(1); /*0x6ae5d7*/
          }
        }
      }
      return (gamemd::ReferenceCounted **)(1); /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return (gamemd::ReferenceCounted **)(((Skirmish *)(hDlg))->SetupGame(a4)); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer((gamemd::Session *)(hDlg), (uint16_t)a3, a4, HIWORD(a3)); /*0x6ae443*/
          return (gamemd::ReferenceCounted **)(1); /*0x6ae451*/
        }
        return 0; /*0x6ae430*/
      }
      if ( g_UIControlState ) /*0x6ae45b*/
      {
        DlgItem = GetDlgItem(hDlg, 1128); /*0x6ae463*/
        if ( !(uint8_t)SkirmishMapGen::LookupDialogHash(DlgItem) ) /*0x6ae46b*/
          Skirmish::RenderPreview(hDlg); /*0x6ae47b*/
      }
      ValidateRect(hDlg, 0); /*0x6ae483*/
      return 0; /*0x6ae48c*/
    }
  }
  return (gamemd::ReferenceCounted **)(result); /*0x6ae448*/

}
} // namespace gamemd
// 0x6AE6E0
namespace gamemd {
AbstractClass * * Skirmish::SetupGame(int hWnd)
{

  ObjectClass *v2; // edi
  HWND DlgItem; // eax
  HWND v5; // esi
  char *v6; // eax
  int i; // edi
  int v8; // eax
  HWND v9; // esi
  wchar_t *StringCSF; // eax
  LRESULT v11; // eax
  wchar_t *v12; // eax
  LRESULT v13; // eax
  wchar_t *v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  LRESULT v17; // eax
  ObjectClass *v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  WPARAM v22; // edi
  int ResourceID2CSF; // esi
  int ResourceIDCSF; // edi
  HWND v25; // edi
  int v26; // eax
  int v27; // ecx
  char *v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int PlayerCountMap; // edi
  void *vtable2; // ecx
  int j; // edi
  int v35; // eax
  HWND (*v36)(HWND, int); // edi
  HWND v37; // eax
  HWND v38; // esi
  LPARAM v39; // edi
  HWND v40; // esi
  HWND v41; // esi
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  Skirmish *v47; // esi
  ObjectClass *v48; // eax
  Skirmish *v49; // eax
  ObjectClass *v51; // [esp-4h] [ebp-24h]
  ScenarioClass *v52; // [esp+0h] [ebp-20h]
  int hWnd; // [esp+Ch] [ebp-14h]
  HWND hWnda; // [esp+Ch] [ebp-14h]
  int *v55; // [esp+10h] [ebp-10h]
  ObjectClass *v56; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v60; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v62; // [esp+1Ch] [ebp-4h]
  HWND First; // [esp+1Ch] [ebp-4h]

  ((Network*)(Network *)&stru_A8B250)->processGameEvent(); /*0x6ae6ed*/
  DlgItem = GetDlgItem((HWND)hWnd, 1696); /*0x6ae6f8*/
  v5 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA( (HWND)(DlgItem), 0xC5u, 0x13u, 0); /*0x6ae714*/
    v6 = CharToWideString((unsigned char *)(unk_A8B380)); /*0x6ae71b*/
    SendMessageA( (HWND)(v5), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)v6))); /*0x6ae729*/
    SendMessageA( (HWND)(v5), 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  v51 = v2; /*0x6ae737*/
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v8 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v8 = 1302; /*0x6ae756*/
          break;
        case 3:
          v8 = 1306; /*0x6ae762*/
          break;
        case 4:
          v8 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v8 = 1308; /*0x6ae77a*/
          break;
        default:
          v8 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v8 = 1291; /*0x6ae73e*/
    }
    v9 = GetDlgItem((HWND)hWnd, v8); /*0x6ae79c*/
    SendMessageA( (HWND)(v9), 0x14Bu, 0, 0); /*0x6ae7a8*/
    StringCSF = GetStringCSF((wchar_t *)(aGuiNone), 0,(const char *)(g_Str_File_Skirmish_cpp), 158); /*0x6ae7bb*/
    v11 = SendMessageA( (HWND)(v9), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)StringCSF))); /*0x6ae7c9*/
    SendMessageA( (HWND)(v9), 0x151u, v11, -1); /*0x6ae7d4*/
    v12 = GetStringCSF((wchar_t *)(g_Str_GUI_AIEasy), 0,(const char *)(g_Str_File_Skirmish_cpp), 161); /*0x6ae7e7*/
    v13 = SendMessageA( (HWND)(v9), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v12))); /*0x6ae7f5*/
    SendMessageA( (HWND)(v9), 0x151u, v13, 2); /*0x6ae800*/
    v14 = GetStringCSF((wchar_t *)(g_Str_GUI_AINormal), 0,(const char *)(g_Str_File_Skirmish_cpp), 164); /*0x6ae813*/
    v15 = SendMessageA( (HWND)(v9), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v14))); /*0x6ae821*/
    SendMessageA( (HWND)(v9), 0x151u, v15, 1); /*0x6ae82c*/
    v16 = GetStringCSF((wchar_t *)(g_Str_GUI_AIHard), 0,(const char *)(g_Str_File_Skirmish_cpp), 167); /*0x6ae83f*/
    v17 = SendMessageA( (HWND)(v9), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v16))); /*0x6ae84d*/
    SendMessageA( (HWND)(v9), 0x151u, v17, 0); /*0x6ae858*/
    SendMessageA( (HWND)(v9), 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes( (SkirmishDialog *)hWnd); /*0x6ae872*/
  InitGameDropdownColors( (void *)(v51)); /*0x6ae877*/
  ((Lobby *)((Lobby *)hWnd))->FillPlayerFactions(); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos( (Lobby *)hWnd); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  ((Lobby*)(HWND)((Lobby *)hWnd))->InvalidatePlayerSlots(); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot((HWND)hWnd, 0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl((HWND)hWnd, 0); /*0x6ae8a8*/
  FillLobbyFactionComboBox((HWND)hWnd, 0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog((HWND)hWnd, 0); /*0x6ae8ba*/
  v56 = (ObjectClass *)(0); /*0x6ae8bf*/
  v55 = (int *)&unk_A8B3F0; /*0x6ae8c7*/
  v18 = (ObjectClass *)(0); /*0x6ae8cf*/
  do
  {
    if ( v18 )
    {
      if ( v18 == (ObjectClass *)1 )
      {
        v19 = 1294; /*0x6ae8e3*/
      }
      else if ( v18 == (ObjectClass *)2 )
      {
        v19 = 1302; /*0x6ae8ef*/
      }
      else if ( v18 == (ObjectClass *)3 )
      {
        v19 = 1306; /*0x6ae8fb*/
      }
      else if ( v18 == (ObjectClass *)4 )
      {
        v19 = 1307; /*0x6ae907*/
      }
      else if ( v18 == (ObjectClass *)5 )
      {
        v19 = 1308; /*0x6ae913*/
      }
      else
      {
        v19 = v18 != (ObjectClass *)6 ? -1 : 1309;
      }
    }
    else
    {
      v19 = 1291; /*0x6ae8d7*/
    }
    v20 = *(v55 - 1); /*0x6ae931*/
    switch ( v20 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnd = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnd = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnd = 1; /*0x6ae957*/
        break;
      default:
        v21 = -(v20 != 6); /*0x6ae966*/
        LOBYTE(v21) = (unsigned char)((gamemd::SkirmishDialog *)(v21 & 0xFD)); /*0x6ae968*/
        hWnd = v21 + 2; /*0x6ae96d*/
        break;
    }
    v22 = 0; /*0x6ae982*/
    v60 = (HWND)SendDlgItemMessageA((HWND)hWnd, v19, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v60 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA((HWND)hWnd, v19, 0x150u, v22, 0) != hWnd ) /*0x6ae9a0*/
      {
        if ( (int)++v22 >= (int)v60 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA((HWND)hWnd, v19, 0x14Eu, v22, 0); /*0x6ae9b7*/
    }
LABEL_44:
    v56 = (ObjectClass *)((char *)v56 + 1); /*0x6ae9bd*/
    ResourceID2CSF = GetResourceID2CSF((int)(v56)); /*0x6ae9d1*/
    ResourceIDCSF = GetResourceIDCSF((int)(v56)); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF((int)(v56)); /*0x6ae9e7*/
    ResourceID4CSF = (HWND)GetResourceID4CSF((int)(v56)); /*0x6ae9f0*/
    if ( hWnd == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo((HWND)hWnd, ResourceID2CSF, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations((HWND)hWnd, ResourceIDCSF, -2); /*0x6aea12*/
      SetupLobbyFactionSlots((HWND)hWnd, nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((gamemd::SessionClass *)((HWND)hWnd), (int)ResourceID4CSF, -2); /*0x6aea2c*/
      hWnda = GetDlgItem((HWND)hWnd, ResourceID2CSF); /*0x6aea3d*/
      v25 = GetDlgItem((HWND)hWnd, ResourceIDCSF); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem((HWND)hWnd, nIDDlgItem); /*0x6aea4d*/
      v62 = GetDlgItem((HWND)hWnd, (int)ResourceID4CSF); /*0x6aea66*/
      EnableWindow(hWnda, 0); /*0x6aea6a*/
      EnableWindow(v25, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v62, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo((HWND)hWnd, ResourceID2CSF, *v55); /*0x6aea90*/
      SetupSkirmishSpawnLocations((HWND)hWnd, ResourceIDCSF, v55[1]); /*0x6aeaa1*/
    }
    v18 = v56; /*0x6aeaa6*/
    v55 += 3; /*0x6aeab8*/
  }
  while ( (int)v56 + 1 < 8 );
  if ( dword_A8B3C4 <= 0 || (v26 = MultiplayerGameMode::ListGet(), v27 = dword_A8B3C4, dword_A8B3C4 > v26) ) /*0x6aeadb*/
  {
    v27 = *(unsigned int *)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    dword_A8B3C4 = v27; /*0x6aeae5*/
  }
  *(unsigned int *)stru_A8B250.__pad_0 = v27; /*0x6aeaeb*/
  v28 = (char *)Skirmish_Setup(); /*0x6aeaf6*/
  First = (HWND)v28; /*0x6aeaf8*/
  dword_A8B3C4 = *((unsigned int *)v28 + 10); /*0x6aeaff*/
  *(unsigned int *)stru_A8B250.__pad_0 = *((unsigned int *)v28 + 10); /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  ((Lobby*)(HWND)((Lobby *)hWnd))->InvalidatePlayerSlots(); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog((HWND)hWnd, 0); /*0x6aeb1d*/
  v29 = dword_A8B3C8; /*0x6aeb22*/
  if ( dword_A8B3C8 < 0 || dword_A8B3C8 >= dword_A8B8D8 ) /*0x6aeb32*/
  {
    v29 = 0; /*0x6aeb34*/
    dword_A8B3C8 = 0; /*0x6aeb36*/
  }
  *(unsigned int *)&stru_A8B250[4] = LoadScenarioClassByIndex(v29) != 0 ? dword_A8B3C8 : 0;
  nIDDlgItema = *(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250[4]); /*0x6aeb5e*/
  if ( !(uint8_t)MapPreview::Check(v28, nIDDlgItema) ) /*0x6aeb62*/
  {
    v30 = (*(int (**)(char *))(*(unsigned int *)v28 + 68))( (char *)(v28)); /*0x6aeb6f*/
    if ( v30 == -1 ) /*0x6aeb75*/
    {
      First = (HWND)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      dword_A8B3C4 = *((unsigned int *)First + 10); /*0x6aeb83*/
      *(struct HWND__ *)stru_A8B250.__pad_0 = First[10]; /*0x6aeb8c*/
      v30 = (*(int (**)(HWND))(*(unsigned int *)First + 68))( (HWND)((HWND)((HWND)((HWND)(First))))); /*0x6aeb96*/
    }
    v31 = *(unsigned int *)(dword_A8B8CC + 4 * v30); /*0x6aeb9f*/
    dword_A8B3C8 = v30; /*0x6aeba2*/
    nIDDlgItema = v31; /*0x6aeba7*/
    *(unsigned int *)&stru_A8B250[4] = v30; /*0x6aebab*/
    strcpy((char *)(byte_A8B8E0), (const char *)(v31 + 88)); /*0x6aebca*/
    v28 = (char *)First; /*0x6aebd3*/
  }
  dword_A8B23C = (unsigned int)((ObjectClass *)v28); /*0x6aebdd*/
  PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250[4]); /*0x6aebee*/
  if ( !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->vtable1 + 1))( (ObjectClass *)(dword_A8B23C)) /*0x6aec07*/
    || (vtable2 = (&dword_A8B230)[127].vtable2, (int)vtable2 > PlayerCountMap) )
  {
    vtable2 = (void *)PlayerCountMap; /*0x6aec09*/
  }
  ResetLobbyFactionTable((int)vtable2); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos( (Lobby *)hWnd); /*0x6aec12*/
  ((Lobby*)(HWND)((Lobby *)hWnd))->InvalidatePlayerSlots(); /*0x6aec19*/
  if ( hWnd && dword_A8B23C ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v35 = GetResourceID4CSF((int)((ObjectClass *)j)); /*0x6aec32*/
      if ( dword_A8B23C && LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x6aec41*/
        SetupLobbyPlayerSlots((gamemd::SessionClass *)((HWND)hWnd), v35, 3); /*0x6aec4a*/
      else
        SetupLobbyPlayerSlots((gamemd::SessionClass *)((HWND)hWnd), v35, -2); /*0x6aec52*/
    }
  }
  Skirmish_Setup_6ADDF0((HWND)hWnd, -1, *(int *)&stru_A8B250[4]); /*0x6aec69*/
  dword_A8B23C = (unsigned int)((ObjectClass *)v28); /*0x6aec6e*/
  (*(void (**)(char *))(*(unsigned int *)v28 + 32))( (char *)(v28)); /*0x6aec78*/
  Skirmish::EnableSpawnButtons((HWND)(hWnd)); /*0x6aec7d*/
  SetDialogPlayerName((HWND)hWnd, (int)v28); /*0x6aec86*/
  ((Dialog*)(Dialog *)hWnd)->ShowPlayerName(); /*0x6aec8d*/
  PtrVector::Destroy((HWND)(&stru_A8DA74)); /*0x6aec97*/
  v36 = (HWND (__cdecl *)(HWND,int))(GetDlgItem); /*0x6aecad*/
  *(unsigned int *)&stru_A8B250[24] = dword_A8B3CC; /*0x6aecb9*/
  *(unsigned int *)&stru_A8B250[12] = dword_A8B3D0; /*0x6aecbf*/
  *(unsigned int *)&stru_A8B250[32] = dword_A8B3D4; /*0x6aecc5*/
  v37 = GetDlgItem((HWND)hWnd, 1321); /*0x6aecca*/
  v38 = v37; /*0x6aeccc*/
  if ( v37 ) /*0x6aecd0*/
  {
    v39 = 6 - *(unsigned int *)&stru_A8B250[24]; /*0x6aecea*/
    SendMessageA( (HWND)(v37), 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA( (HWND)(v38), 0x405u, 1u, (LPARAM)((LPARAM)(v39))); /*0x6aecf7*/
    v36 = (HWND (__cdecl *)(HWND,int))(GetDlgItem); /*0x6aecf9*/
  }
  v40 = v36((HWND)hWnd, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      v40,
      0x406u,
      1u,
      *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA( (HWND)(v40), 0x405u, 1u, *(LPARAM *)&stru_A8B250[12]); /*0x6aed42*/
    SendMessageA( (HWND)(v40), 0x4ABu, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5260)); /*0x6aed59*/
  }
  v41 = v36((HWND)hWnd, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      v41,
      0x406u,
      1u,
      *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA( (HWND)(v41), 0x405u, 1u, *(LPARAM *)&stru_A8B250[32]); /*0x6aed9e*/
  }
  stru_A8B250[18] = byte_A8B3D8; /*0x6aedb1*/
  stru_A8B250[19] = byte_A8B3D9; /*0x6aedbd*/
  stru_A8B250[20] = byte_A8B3DA; /*0x6aedcf*/
  dword_A8B320 = byte_A8B3DB; /*0x6aedd4*/
  stru_A8B250[17] = byte_A8B3DC; /*0x6aedda*/
  v42 = v36((HWND)hWnd, 1358); /*0x6aede0*/
  if ( v42 ) /*0x6aede4*/
    SendMessageA( (HWND)(v42), 0xF1u, stru_A8B250[18] != 0, 0); /*0x6aedfc*/
  v43 = v36((HWND)hWnd, 1690); /*0x6aee04*/
  if ( v43 ) /*0x6aee08*/
    SendMessageA( (HWND)(v43), 0xF1u, stru_A8B250[19] != 0, 0); /*0x6aee20*/
  v44 = v36((HWND)hWnd, 1693); /*0x6aee28*/
  if ( v44 ) /*0x6aee2c*/
    SendMessageA( (HWND)(v44), 0xF1u, stru_A8B250[20] != 0, 0); /*0x6aee44*/
  v45 = v36((HWND)hWnd, 1683); /*0x6aee4c*/
  if ( v45 ) /*0x6aee50*/
    SendMessageA( (HWND)(v45), 0xF1u, dword_A8B320 != 0, 0); /*0x6aee68*/
  v46 = v36((HWND)hWnd, 1686); /*0x6aee70*/
  if ( v46 ) /*0x6aee75*/
    SendMessageA( (HWND)(v46), 0xF1u, stru_A8B250[17] != 0, 0); /*0x6aee8d*/
  if ( !(uint8_t)((IsRandMap *)(nIDDlgItema))->Sed() ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions( (void *)(v52)); /*0x6aee9c*/
  v47 = (gamemd::Skirmish *)(g_UIControlState); /*0x6aeea1*/
  if ( g_UIControlState ) /*0x6aeea9*/
  {
    ((ComPtr*)(ComPtr *)g_UIControlState)->Dtor(); /*0x6aeead*/
    __3_YAXPAX_Z(v47); /*0x6aeeb3*/
  }
  v48 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x6aeebd*/
  v49 = v48 ? (Skirmish *)unknown_libname_27( (void *)(v48)) : 0;
  g_UIControlState = (int)(v49); /*0x6aeedb*/
  ((Surface *)((Surface *)v49))->LoadToSurfaceSHP( (char *)(ExistingFileName)); /*0x6aeee0*/
  if ( !*(unsigned int *)g_UIControlState ) /*0x6aeeeb*/
LABEL_92:
    ((Session*)(HWND)((Session *)hWnd))->PrepareGame(); /*0x6aeef2*/
  return 0; /*0x6aeef7*/

}
} // namespace gamemd
// 0x6ADF00
namespace gamemd {
int Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  HWND ResourceIDHardcodedCSF; // [esp+4h] [ebp-1Ch]
  HWND DlgItem; // [esp+4h] [ebp-1Ch]
  HWND ResourceIDCSF; // [esp+8h] [ebp-18h]
  HWND v9; // [esp+8h] [ebp-18h]
  HWND ResourceID2CSF; // [esp+Ch] [ebp-14h]
  HWND v11; // [esp+Ch] [ebp-14h]
  HWND ResourceID3CSF; // [esp+10h] [ebp-10h]
  HWND v13; // [esp+10h] [ebp-10h]
  HWND ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v15; // [esp+14h] [ebp-Ch]
  HWND hWnd; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int nIDDlgItema; // [esp+24h] [ebp+4h]

  result = a2 + nIDDlgItem; /*0x6adf08*/
  v17 = a2 + nIDDlgItem; /*0x6adf0e*/
  if ( a2 < a2 + nIDDlgItem )
  {
    v5 = (char *)(a2 - 1); /*0x6adf27*/
    do
    {
      if ( v5 )
      {
        if ( v5 == (char *)1 )
        {
          nIDDlgItema = 1294; /*0x6adf3d*/
        }
        else if ( v5 == (char *)2 )
        {
          nIDDlgItema = 1302; /*0x6adf4c*/
        }
        else if ( v5 == (char *)3 )
        {
          nIDDlgItema = 1306; /*0x6adf5b*/
        }
        else if ( v5 == (char *)4 )
        {
          nIDDlgItema = 1307; /*0x6adf6a*/
        }
        else if ( v5 == (char *)5 )
        {
          nIDDlgItema = 1308; /*0x6adf79*/
        }
        else
        {
          nIDDlgItema = v5 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        nIDDlgItema = 1291; /*0x6adf2e*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF(++v5); /*0x6adfa4*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((int)(v5)); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((int)(v5)); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((int)(v5)); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((int)(v5)); /*0x6adfd2*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x6adfde*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x6adfe6*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6adff6*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae002*/
      v13 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae00a*/
      v15 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae01d*/
      ShowWindow(hWnd, 5); /*0x6ae021*/
      ShowWindow(DlgItem, 5); /*0x6ae02a*/
      ShowWindow(v9, 5); /*0x6ae033*/
      ShowWindow(v11, 5); /*0x6ae03c*/
      ShowWindow(v13, 5); /*0x6ae045*/
      ShowWindow(v15, 5); /*0x6ae04e*/
      SetupSkirmishSpawnLocationEntry(hDlg, nIDDlgItema); /*0x6ae056*/
      result = v17; /*0x6ae05b*/
    }
    while ( (int)(v5 + 1) < v17 );
  }
  return result; /*0x6ae06d*/
}
}
// 0x5E2F80
namespace gamemd {
int sub_5E2F80()
{
  int result; // eax

  result = ((MultiplayerGameMode*)*(void **)stru_A8B250)->Find(); /*0x5e2f86*/
  if ( !result ) /*0x5e2f8d*/
// 0x5d5e10
    return MultiplayerGameMode::GetFirst(); /*0x5e2f8f*/
  return result; /*0x5e2f94*/
}
} // namespace gamemd

// 0x6ADDF0
namespace gamemd {
void sub_6ADDF0(HWND a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // esi
  bool v7; // al
  HWND v8; // edi
  int i; // esi
  int ResourceID4CSF; // edx
  int PlayerCountMap; // [esp+14h] [ebp-4h]
  bool v13; // [esp+1Ch] [ebp+4h]

  if ( a2 == -1 ) /*0x6ade00*/
    PlayerCountMap = 8; /*0x6ade02*/
  else
    PlayerCountMap = ReadPlayerCountMap(a2); /*0x6ade13*/
  v5 = ReadPlayerCountMap(a3); /*0x6ade26*/
  v6 = v5 - PlayerCountMap; /*0x6ade2a*/
  if ( a2 >= 0 /*0x6ade6a*/
    && a3 >= 0
    && a2 < dword_A8B8D8
    && a3 < dword_A8B8D8
    && (v13 = ((IsRandMap *)(*(unsigned int *)(dword_A8B8CC + 4 * a2)))->Sed(),
        v7 = ((IsRandMap *)(*(unsigned int *)(dword_A8B8CC + 4 * a3)))->Sed(),
        v13)
    && v7 )
  {
    v8 = a1; /*0x6ade6c*/
    HideSkirmishSpawnLocations(a1, 1); /*0x6ade77*/
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1); /*0x6ade87*/
  }
  else
  {
    v8 = a1; /*0x6ade8e*/
  }
  if ( v6 <= 0 ) /*0x6ade94*/
  {
    if ( v6 < 0 ) /*0x6adea4*/
      HideSkirmishSpawnLocations(v8, v5); /*0x6adeaa*/
  }
  else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6); /*0x6ade9d*/
  }
  if ( v8 && dword_A8B23C ) /*0x6adeba*/
  {
    for ( i = 1; i < 8; ++i ) /*0x6adebc*/
    {
      ResourceID4CSF = GetResourceID4CSF((int)((void *)i)); /*0x6adec8*/
      if ( dword_A8B23C && *(unsigned char *)(dword_A8B23C + 60) ) /*0x6aded3*/
        SetupLobbyPlayerSlots( (SessionClass *)(v8), ResourceID4CSF, 3); /*0x6adedc*/
      else
        SetupLobbyPlayerSlots( (SessionClass *)(v8), ResourceID4CSF, -2); /*0x6adee2*/
    }
  }
}
} // namespace gamemd
