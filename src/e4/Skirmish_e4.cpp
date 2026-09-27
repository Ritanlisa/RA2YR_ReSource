// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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
    DlgItem = GetDlgItem(this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem(this, v2); /*0x46f65e*/
      v4 = *(&g_NetworkPlayerName + i); /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA(v2, 0x14Bu, 0, 0); /*0x46f67e*/
        v5 = SendMessageA(v3, 0x4C2u, 0, v4); /*0x46f68f*/
        SendMessageA(v3, 0x151u, v5, v4); /*0x46f699*/
        SendMessageA(v3, 0x14Eu, v5, 0); /*0x46f6a4*/
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
CampaignClass * * Skirmish::SetupAllSpawnLocations()
{
  int v1; // ebp
  int ResourceID; // eax
  wchar_t *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  char *v7; // ebx
  unsigned int v8;
  int v9; // eax
  wchar_t *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v14; // [esp+14h] [ebp-4h]

  v1 = g_NetworkPlayerCount; /*0x46f8f5*/
  v14 = g_NetworkPlayerCount; /*0x46f906*/
  if ( g_NetworkPlayerCount != -1 ) /*0x46f90a*/
  {
    ResourceID = GetResourceIDCSF((void *)g_NetworkPlayerCount); /*0x46f90e*/
    v4 = (wchar_t *)*(&g_NetworkPlayerName + v1); /*0x46f913*/
    v5 = ResourceID; /*0x46f91a*/
    if ( Player::IsObserver(v4) ) /*0x46f91e*/
    {
      PlayerColor = g_CampaignConfig[v1]; /*0x46f927*/
    }
    else if ( v4 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == g_Lobby_PlayerReady ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor((int)v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations(hDlg, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = g_CampaignConfig; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != (char *)v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (wchar_t *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( Player::IsObserver(v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == g_Lobby_PlayerReady ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor((int)v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations(hDlg, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    ++v7; /*0x46f9fc*/
  }
  while ( (int)v8 < (int)g_CampaignSideIndex ); /*0x46fa03*/
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
  LRESULT v12; // eax
  LRESULT v13; // eax
  HWND DlgItem; // eax
  LRESULT v15; // eax
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

  v18 = (unsigned int)((int)this->q03C);
  hDlga = (HWND)((unsigned int)(GetDlgItem(hDlg, 1029)));
  v4 = (unsigned int)(SendMessageA(hDlga, 0x147u, 0, 0));
  v5 = (unsigned int)(SendMessageA(hDlga, 0x150u, v4, 0));
  this->q03C = (unsigned int)((HWND)v5);
  if ( v18 != v5 ) /*0x596cbe*/
    byte_ABE2D8 = 1; /*0x596cc0*/
  v19 = (int)this->u32_38; /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v6 = SendMessageA(hDlgb, 0x147u, 0, 0); /*0x596ce6*/
  v7 = SendMessageA(hDlgb, 0x150u, v6, 0); /*0x596cf3*/
  this->u32_38 = (HWND)v7; /*0x596cf9*/
  if ( v19 != v7 ) /*0x596cfe*/
    byte_ABE2D8 = (unsigned int)(1);
  v20 = (LRESULT)((int)this->u32_40);
  hDlgc = (HWND)((LRESULT)(GetDlgItem(hDlg, 1032)));
  v8 = (LRESULT)((HWND)(SendMessageA(hDlgc, 0x147u, 0, 0)));
  v9 = (LRESULT)((HWND)(SendMessageA(hDlgc, 0x150u, v8, 0)));
  this->u32_40 = (unsigned int)((HWND)v9);
  if ( v20 != v9 ) /*0x596d3e*/
    byte_ABE2D8 = 1; /*0x596d40*/
  v21 = (int)this->u32_48; /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v10 = SendMessageA(hDlgd, 0x147u, 0, 0); /*0x596d66*/
  v11 = SendMessageA(hDlgd, 0x150u, v10, 0); /*0x596d73*/
  this->u32_48 = (HWND)v11; /*0x596d79*/
  if ( v21 != v11 ) /*0x596d7e*/
    byte_ABE2D8 = 1; /*0x596d80*/
  v22 = (int)this->u32_64; /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v12 = SendMessageA(hDlge, 0x147u, 0, 0); /*0x596da6*/
  v13 = SendMessageA(hDlge, 0x150u, v12, 0); /*0x596db3*/
  this->u32_64 = (HWND)v13; /*0x596db9*/
  this->u32_68 = (HWND)v13; /*0x596dbe*/
  if ( v22 != v13 ) /*0x596dc1*/
    byte_ABE2D8 = 1; /*0x596dc3*/
  hDlgf = this->u32_50; /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v15 = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x596de3*/
  this->u32_50 = (HWND)v15; /*0x596de9*/
  if ( hDlgf == (HWND)v15 ) /*0x596dee*/
  {
    if ( !byte_ABE2D8 ) /*0x596e00*/
      return SettingsClass::ClampValues(); /*0x596e00*/
  }
  else
  {
    byte_ABE2D8 = 1; /*0x596df0*/
  }
  Skirmish::RandomizeSettings(this->q03C); /*0x596e08*/
  g_Map_TiberiumConfig = g_Map_TiberiumConfig; /*0x596e0d*/
  if ( g_Map_TiberiumConfig ) /*0x596e15*/
  {
    ComPtr::Dtor(g_Map_TiberiumConfig); /*0x596e19*/
    RA2_OPDEL(g_Map_TiberiumConfig); /*0x596e1f*/
  }
  g_Map_TiberiumConfig = 0; /*0x596e27*/
  byte_ABE2D8 = 0; /*0x596e31*/
  return SettingsClass::ClampValues(); /*0x596e3f*/
}
} // namespace gamemd
// 0x597260
namespace gamemd {
TechnoTypeClass * * Skirmish::RandomizeSettings(ObjectClass * aP1)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  *(&this->q0049) = Random::Range(Randomizer_Global, dword_82B0A8[aP1], dword_82B0BC[aP1]); /*0x597282*/
  *(&this->q0047) = Random::Range(Randomizer_Global, dword_82B10C[aP1], dword_82B120[aP1]); /*0x59729f*/
  *(&this->q0084) = Random::Range(Randomizer_Global, dword_ABED40[aP1], dword_82B0F8[aP1]); /*0x5972bc*/
  *(&this->q0087) = Random::Range(Randomizer_Global, dword_ABED18[aP1], dword_82B0D0[aP1]); /*0x5972d9*/
  *(&this->q0088) = Random::Range(Randomizer_Global, dword_82B080[aP1], dword_82B094[aP1]); /*0x5972f6*/
  *(&this->q0081) = 20 * *(&this->q0046); /*0x59730b*/
  *(&this->q0082) = Random::Range(Randomizer_Global, 0, 100); /*0x597313*/
  v3 = *(unsigned int *)(dword_ABE260 + 4 * aP1); /*0x597322*/
  v4 = *(unsigned int *)(dword_ABE27C + 4 * aP1); /*0x597325*/
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
    v3 = v4; /*0x597350*/
  *(&this->q0083) = Random::Range(Randomizer_Global, v3, v4); /*0x59736a*/
  result = Random::Range(Randomizer_Global, 0, 0xFFFF); /*0x59736d*/
  *(&this->q0089) = result; /*0x597372*/
  return result; /*0x597375*/
}
} // namespace gamemd
// 0x640710
namespace gamemd {
int Skirmish::RenderPreview(SkirmishDialog * aP1)
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
  int v12; // esi
  int v13; // eax
  int v14; // eax
  unsigned int v15;
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
  if ( *this ) /*0x64072c*/
  {
    DlgItem = (HWND)((int)(GetDlgItem(aP1, 1128)));
    ScreenDialogToClient(DlgItem, &Rect); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *this; /*0x64076a*/
    v31 = Rect.bottom - Rect.top; /*0x64076c*/
    v30 = Rect.right - Rect.left; /*0x640770*/
    v6 = (int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v5 + 120))(v5, v26); /*0x64077b*/
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
    (*(void (__thiscall **)(int, LONG *, unsigned int))(*(unsigned int *)DSurface_Alternate + 20))(DSurface_Alternate, &left, 0); /*0x64085d*/
    v12 = *(unsigned int *)DSurface_Alternate; /*0x64086c*/
    v13 = (*(int (__thiscall **)(unsigned int, int *, unsigned int, unsigned int))(*(unsigned int *)*((char *)&this->q076 + 2)))(*this, v27, 0, 0); /*0x640875*/
    (*(void (__thiscall **)(int, int *, unsigned int, int))(v12 + 8))(DSurface_Alternate, &v34, *this, v13); /*0x640887*/
    IDA_HIBYTE(v23) = 0; /*0x640896*/
    if ( (byte_AC4E90 & 1) == 0 ) /*0x64089b*/
    {
      byte_AC4E90 |= 1u; /*0x6408a8*/
      dword_AC4E80 = (int)LoadFileSHP(aStartbutShp, (bool *)&v23 + 3); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    v14 = FindBuildingAnimByName(aYellow, 1); /*0x6408c7*/
    v15 = g_ScenarioClass_Instance; /*0x6408cc*/
    v16 = v14; /*0x6408d2*/
    result = *((unsigned int *)g_ScenarioClass_Instance + 1103); /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 + v34 * (1000 * (v15[2 * v17 + 1104] - v15[1099]) / v15[1101]) / 1000; /*0x640944*/
        v19 = v33 + v35 * (1000 * (v15[2 * v17 + 1105] - v15[1100]) / v15[1102]) / 1000; /*0x64097a*/
        v20 = v19; /*0x64097e*/
        if ( dword_AC4E80 ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
          v21 = (int *)(*(int (__thiscall **)(int, char *))(*(unsigned int *)DSurface_Alternate + 120))( /*0x6409b6*/
                         DSurface_Alternate,
                         v37);
          DrawToSurfaceSHP(DSurface_Alternate, v25, dword_AC4E80, 0, v24, v21, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6409d2*/
        }
        ++v17; /*0x6409e3*/
        v26[0] = v18 - 2; /*0x6409ef*/
        v26[1] = v20 - 6; /*0x6409f3*/
        v22 = (unsigned int *)(*(int (__thiscall **)(int, char *))(*(unsigned int *)DSurface_Alternate + 120))( /*0x640a01*/
                          DSurface_Alternate,
                          v38);
        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)&g_Str_Fmt_PctD,
                        DSurface_Alternate,
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = g_ScenarioClass_Instance; /*0x640a1a*/
      }
      while ( v17 < *((unsigned int *)g_ScenarioClass_Instance + 1103) ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/
}
} // namespace gamemd
// 0x6ACD60
namespace gamemd {
int Skirmish::EnableSpawnButtons()
{
  HWND v1; // ebp
  HWND result; // eax
  char *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  LRESULT v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = (HWND)(hDlg);
  if ( !hDlg ) /*0x6acd66*/
    v1 = (HWND)Dialog::FindByHandle((void *)0x102); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( g_GameStateFlags ) /*0x6acd80*/
    v7 = *(unsigned char *)(g_GameStateFlags + 60); /*0x6acd85*/
  result = GetDlgItem(v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow(result, v7 != 0); /*0x6acdac*/
    v3 = 0; /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (char *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (char *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (char *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (char *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (char *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA(v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      ++v3; /*0x6ace32*/
      v6 = SendDlgItemMessageA(v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = (HWND)GetResourceID4CSF(v3); /*0x6ace37*/
      if ( (int)result >= 0 ) /*0x6ace3e*/
      {
        result = GetDlgItem(v1, (int)result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == -1 ) /*0x6ace4f*/
            result = (HWND)EnableWindow(result, 0); /*0x6ace53*/
          else
            result = (HWND)EnableWindow(result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)(v3 + 1) < 8 );
  }
  return (int)(result);
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

  result = (int)(BaseDialogProc(hDlg, a2, a3, a4));
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      WideString::Assign_Alt(0); /*0x6ae4bb*/
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
              v16 = (wchar_t *)GetStringCSF(aSttPlayernone, (int)g_Str_File_Skirmish_cpp, 135); /*0x6ae617*/
              WideString::Assign_Alt(v16); /*0x6ae61f*/
              return 1; /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerDumbAI, (int)g_Str_File_Skirmish_cpp, 137); /*0x6ae646*/
              WideString::Assign_Alt(v17); /*0x6ae64e*/
              return 1; /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerSmartAI, (int)g_Str_File_Skirmish_cpp, 139); /*0x6ae675*/
              WideString::Assign_Alt(v18); /*0x6ae67d*/
              return 1; /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerGeniusAI, (int)g_Str_File_Skirmish_cpp, 141); /*0x6ae6a3*/
              WideString::Assign_Alt(v19); /*0x6ae6ab*/
              return 1; /*0x6ae6b9*/
          }
          WideString::Assign_Alt(0); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v7) != -1 ) /*0x6ae547*/
          {
            v10 = GetComboBoxSelectedRaw(hDlg, v7, *(unsigned int *)(a4 + 4)); /*0x6ae589*/
            v11 = (wchar_t *)GameSetup::GetColorTooltip(v10); /*0x6ae590*/
            WideString::Assign_Alt(v11); /*0x6ae598*/
            return 1; /*0x6ae5a6*/
          }
          if ( Dialog::SideIDToIndex(v7) != -1 ) /*0x6ae553*/
          {
            v8 = SetComboBoxSelection(hDlg, v7, *(unsigned int *)(a4 + 4)); /*0x6ae561*/
            v9 = (wchar_t *)sub_4E4F30(v8); /*0x6ae568*/
            WideString::Assign_Alt(v9); /*0x6ae570*/
            return 1; /*0x6ae57e*/
          }
        }
        else
        {
          v12 = GetComboBoxSelected(hDlg, v7, *(unsigned int *)(a4 + 4)); /*0x6ae5b1*/
          if ( v12 != -1 ) /*0x6ae5b9*/
          {
            v13 = (wchar_t *)SideClass::GetName(v12); /*0x6ae5c1*/
            WideString::Assign_Alt(v13); /*0x6ae5c9*/
            return 1; /*0x6ae5d7*/
          }
        }
      }
      return 1; /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return Skirmish::SetupGame(hDlg, a4); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer(hDlg, (uint16_t)a3, a4, IDA_HIWORD(a3)); /*0x6ae443*/
          return 1; /*0x6ae451*/
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
  return result; /*0x6ae448*/
}
} // namespace gamemd
// 0x6AE6E0
namespace gamemd {
AbstractClass * * Skirmish::SetupGame(int a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  char *v5; // eax
  int i; // edi
  int v7; // eax
  HWND v8; // esi
  wchar_t *String; // eax
  LRESULT v10; // eax
  wchar_t *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  wchar_t *v15; // eax
  LRESULT v16; // eax
  int v17; // ecx
  char *v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  WPARAM v22; // edi
  int ResourceID2; // esi
  int ResourceID; // edi
  HWND v25; // edi
  int v26; // eax
  int v27; // ecx
  char *v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int PlayerCount; // edi
  int v33; // ecx
  int j; // edi
  int v35; // eax
  HWND (__stdcall *v36)(HWND, int); // edi
  HWND v37; // eax
  LPARAM v39; // edi
  HWND v40; // esi
  HWND v41; // esi
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  void *v48; // eax
  void *v49; // eax
  int hWnda; // [esp+Ch] [ebp-14h]
  HWND hWndb; // [esp+Ch] [ebp-14h]
  int *v53; // [esp+10h] [ebp-10h]
  char *v54; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v58; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4; // [esp+1Ch] [ebp-4h]
  HWND v60; // [esp+1Ch] [ebp-4h]
  HWND First; // [esp+1Ch] [ebp-4h]

  Network::processGameEvent(g_ScenarioFlags); /*0x6ae6ed*/
  DlgItem = GetDlgItem(this, 1696); /*0x6ae6f8*/
  v4 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x6ae714*/
    v5 = CharToWideString(g_GameSetupBuffer); /*0x6ae71b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x6ae729*/
    SendMessageA(v4, 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v7 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v7 = 1302; /*0x6ae756*/
          break;
        case 3:
          v7 = 1306; /*0x6ae762*/
          break;
        case 4:
          v7 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v7 = 1308; /*0x6ae77a*/
          break;
        default:
          v7 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v7 = 1291; /*0x6ae73e*/
    }
    v8 = GetDlgItem(this, v7); /*0x6ae79c*/
    SendMessageA(v8, 0x14Bu, 0, 0); /*0x6ae7a8*/
    String = GetStringCSF(aGuiNone, 0, g_Str_File_Skirmish_cpp, 158); /*0x6ae7bb*/
    v10 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)String); /*0x6ae7c9*/
    SendMessageA(v8, 0x151u, v10, -1); /*0x6ae7d4*/
    v11 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_Skirmish_cpp, 161); /*0x6ae7e7*/
    v12 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v11); /*0x6ae7f5*/
    SendMessageA(v8, 0x151u, v12, 2); /*0x6ae800*/
    v13 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_Skirmish_cpp, 164); /*0x6ae813*/
    v14 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v13); /*0x6ae821*/
    SendMessageA(v8, 0x151u, v14, 1); /*0x6ae82c*/
    v15 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_Skirmish_cpp, 167); /*0x6ae83f*/
    v16 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v15); /*0x6ae84d*/
    SendMessageA(v8, 0x151u, v16, 0); /*0x6ae858*/
    SendMessageA(v8, 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes(); /*0x6ae872*/
  InitGameDropdownColors(v17); /*0x6ae877*/
  Lobby::FillPlayerFactions(); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos(); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  Lobby::InvalidatePlayerSlots(); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot(0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl(0); /*0x6ae8a8*/
  FillLobbyFactionComboBox(0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog(0); /*0x6ae8ba*/
  v54 = 0; /*0x6ae8bf*/
  v53 = (int *)&unk_A8B3F0; /*0x6ae8c7*/
  v18 = 0; /*0x6ae8cf*/
  do
  {
    if ( v18 )
    {
      if ( v18 == (char *)1 )
      {
        v19 = 1294; /*0x6ae8e3*/
      }
      else if ( v18 == (char *)2 )
      {
        v19 = 1302; /*0x6ae8ef*/
      }
      else if ( v18 == (char *)3 )
      {
        v19 = 1306; /*0x6ae8fb*/
      }
      else if ( v18 == (char *)4 )
      {
        v19 = 1307; /*0x6ae907*/
      }
      else if ( v18 == (char *)5 )
      {
        v19 = 1308; /*0x6ae913*/
      }
      else
      {
        v19 = v18 != (char *)6 ? -1 : 1309;
      }
    }
    else
    {
      v19 = 1291; /*0x6ae8d7*/
    }
    v20 = *(v53 - 1); /*0x6ae931*/
    switch ( v20 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnda = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnda = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnda = 1; /*0x6ae957*/
        break;
      default:
        v21 = -(v20 != 6); /*0x6ae966*/
        IDA_LOBYTE(v21) = v21 & 0xFD; /*0x6ae968*/
        hWnda = v21 + 2; /*0x6ae96d*/
        break;
    }
    v22 = 0; /*0x6ae982*/
    v58 = (HWND)SendDlgItemMessageA(this, v19, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v58 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA(this, v19, 0x150u, v22, 0) != hWnda ) /*0x6ae9a0*/
      {
        if ( (int)++v22 >= (int)v58 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA(v19, 0x14Eu, v22, 0); /*0x6ae9b7*/
    }
  LABEL_44:
    ResourceID2 = GetResourceID2CSF(++v54); /*0x6ae9d1*/
    ResourceID = GetResourceIDCSF(v54); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF(v54); /*0x6ae9e7*/
    ResourceID4 = (HWND)GetResourceID4CSF(v54); /*0x6ae9f0*/
    if ( hWnda == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo(ResourceID2, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations(ResourceID, -2); /*0x6aea12*/
      SetupLobbyFactionSlots(nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((int)ResourceID4, -2); /*0x6aea2c*/
      hWndb = GetDlgItem(this, ResourceID2); /*0x6aea3d*/
      v25 = GetDlgItem(this, ResourceID); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem(this, nIDDlgItem); /*0x6aea4d*/
      v60 = GetDlgItem(this, (int)ResourceID4); /*0x6aea66*/
      EnableWindow(hWndb, 0); /*0x6aea6a*/
      EnableWindow(v25, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v60, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo(ResourceID2, *v53); /*0x6aea90*/
      SetupSkirmishSpawnLocations(ResourceID, v53[1]); /*0x6aeaa1*/
    }
    v18 = v54; /*0x6aeaa6*/
    v53 += 3; /*0x6aeab8*/
  }
  while ( (int)(v54 + 1) < 8 );
  if ( dword_A8B3C4 <= 0 || (v26 = MultiplayerGameMode::ListGet(), v27 = dword_A8B3C4, dword_A8B3C4 > v26) ) /*0x6aeadb*/
  {
    v27 = *(unsigned int *)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    dword_A8B3C4 = v27; /*0x6aeae5*/
  }
  *(unsigned int *)g_ScenarioFlags = v27; /*0x6aeaeb*/
  v28 = (char *)Skirmish_Setup(); /*0x6aeaf6*/
  First = (HWND)v28; /*0x6aeaf8*/
  dword_A8B3C4 = *((unsigned int *)v28 + 10); /*0x6aeaff*/
  *(unsigned int *)g_ScenarioFlags = *((unsigned int *)v28 + 10); /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  Lobby::InvalidatePlayerSlots(); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog(0); /*0x6aeb1d*/
  v29 = dword_A8B3C8; /*0x6aeb22*/
  if ( dword_A8B3C8 < 0 || dword_A8B3C8 >= g_MultiplayerOptions ) /*0x6aeb32*/
  {
    v29 = 0; /*0x6aeb34*/
    dword_A8B3C8 = 0; /*0x6aeb36*/
  }
  g_GameRulesOptions = LoadScenarioClassByIndex(v29) != 0 ? dword_A8B3C8 : 0;
  nIDDlgItema = *(unsigned int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions); /*0x6aeb5e*/
  if ( !MapPreview::Check(v28, nIDDlgItema) ) /*0x6aeb62*/
  {
    v30 = (*(int (__thiscall **)(char *))(v28->q044)(v28); /*0x6aeb6f*/
    if ( v30 == -1 ) /*0x6aeb75*/
    {
      First = (HWND)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      dword_A8B3C4 = *((unsigned int *)First + 10); /*0x6aeb83*/
      *(struct HWND__ *)g_ScenarioFlags = First[10]; /*0x6aeb8c*/
      v30 = (*(int (__thiscall **)(HWND))(*(unsigned int *)First + 68))(First); /*0x6aeb96*/
    }
    v31 = *(unsigned int *)(g_MultiplayerGameState + 4 * v30); /*0x6aeb9f*/
    dword_A8B3C8 = v30; /*0x6aeba2*/
    nIDDlgItema = v31; /*0x6aeba7*/
    g_GameRulesOptions = v30; /*0x6aebab*/
    strcpy(&Destination, (const char *)(v31 + 88)); /*0x6aebca*/
    v28 = (char *)First; /*0x6aebd3*/
  }
  g_GameStateFlags = (int)v28; /*0x6aebdd*/
  PlayerCount = ReadPlayerCountMap(g_GameRulesOptions); /*0x6aebee*/
  if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 4))(g_GameStateFlags) /*0x6aec07*/
    || (v33 = *((unsigned int *)g_ScenarioClass_Instance + 1145), v33 > PlayerCount) )
  {
    v33 = PlayerCount; /*0x6aec09*/
  }
  ResetLobbyFactionTable(v33); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos(); /*0x6aec12*/
  Lobby::InvalidatePlayerSlots(); /*0x6aec19*/
  if ( this && g_GameStateFlags ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v35 = GetResourceID4CSF((void *)j); /*0x6aec32*/
      if ( g_GameStateFlags && *(unsigned char *)(g_GameStateFlags + 60) ) /*0x6aec41*/
        SetupLobbyPlayerSlots(v35, 3); /*0x6aec4a*/
      else
        SetupLobbyPlayerSlots(v35, -2); /*0x6aec52*/
    }
  }
  Skirmish_Setup_6ADDF0(g_GameRulesOptions); /*0x6aec69*/
  g_GameStateFlags = (int)v28; /*0x6aec6e*/
  (*(void (__thiscall **)(char *))(v28->needsSave)(v28); /*0x6aec78*/
  Skirmish::EnableSpawnButtons(); /*0x6aec7d*/
  SetDialogPlayerName((int)v28); /*0x6aec86*/
  Dialog::ShowPlayerName(); /*0x6aec8d*/
  PtrVector::Destroy(&g_PlayerInfoCount); /*0x6aec97*/
  v36 = GetDlgItem; /*0x6aecad*/
  dword_A8B3CC = dword_A8B3CC; /*0x6aecb9*/
  dword_A8B3D0 = dword_A8B3D0; /*0x6aecbf*/
  dword_A8B3D4 = dword_A8B3D4; /*0x6aecc5*/
  v37 = GetDlgItem(this, 1321); /*0x6aecca*/
  v37 = v37; /*0x6aeccc*/
  if ( v37 ) /*0x6aecd0*/
  {
    v39 = 6 - dword_A8B3CC; /*0x6aecea*/
    SendMessageA(v37, 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA(v37, 0x405u, 1u, v39); /*0x6aecf7*/
    v36 = GetDlgItem; /*0x6aecf9*/
  }
  v40 = v36(this, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      v40,
      0x406u,
      1u,
      IDA_LOWORD(g_RulesClass_Instance[1].BarrelDebris[2]) | (IDA_LOWORD(g_RulesClass_Instance[1].BarrelParticle) << 16));
    SendMessageA(v40, 0x405u, 1u, dword_A8B3D0); /*0x6aed42*/
    SendMessageA(v40, 0x4ABu, 0, IDA_LODWORD(g_RulesClass_Instance[1].RadarEventColorSpeed)); /*0x6aed59*/
  }
  v41 = v36(this, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      v41,
      0x406u,
      1u,
      IDA_LOWORD(g_RulesClass_Instance[1].RadarEventMinRadius)
    | (IDA_LOWORD(g_RulesClass_Instance[1].RadarEventRotationSpeed) << 16));
    SendMessageA(v41, 0x405u, 1u, dword_A8B3D4); /*0x6aed9e*/
  }
  ShortGame = byte_A8B3D8; /*0x6aedb1*/
  SWAllowed = byte_A8B3D9; /*0x6aedbd*/
  IDA_LOBYTE(g_Rules_ShortGame) = byte_A8B3DA; /*0x6aedcf*/
  IDA_LOBYTE(MCVRedeploy) = byte_A8B3DB; /*0x6aedd4*/
  Crates = byte_A8B3DC; /*0x6aedda*/
  v42 = v36(this, 1358); /*0x6aede0*/
  if ( v42 ) /*0x6aede4*/
    SendMessageA(v42, 0xF1u, ShortGame != 0, 0); /*0x6aedfc*/
  v43 = v36(this, 1690); /*0x6aee04*/
  if ( v43 ) /*0x6aee08*/
    SendMessageA(v43, 0xF1u, SWAllowed != 0, 0); /*0x6aee20*/
  v44 = v36(this, 1693); /*0x6aee28*/
  if ( v44 ) /*0x6aee2c*/
    SendMessageA(v44, 0xF1u, (unsigned char)g_Rules_ShortGame != 0, 0); /*0x6aee44*/
  v45 = v36(this, 1683); /*0x6aee4c*/
  if ( v45 ) /*0x6aee50*/
    SendMessageA(v45, 0xF1u, (unsigned char)MCVRedeploy != 0, 0); /*0x6aee68*/
  v46 = v36(this, 1686); /*0x6aee70*/
  if ( v46 ) /*0x6aee75*/
    SendMessageA(v46, 0xF1u, Crates != 0, 0); /*0x6aee8d*/
  if ( !IsRandMap::Sed(nIDDlgItema) ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions(); /*0x6aee9c*/
  v49 = v49; /*0x6aeea1*/
  if ( v49 ) /*0x6aeea9*/
  {
    ComPtr::Dtor(v49); /*0x6aeead*/
    RA2_OPDEL(v49); /*0x6aeeb3*/
  }
  v48 = operator new(4u); /*0x6aeebd*/
  v49 = v48 ? (void *)unknown_libname_27(v48) : 0;
  v49 = v49; /*0x6aeedb*/
  Surface::LoadToSurfaceSHP((char **)v49, ExistingFileName); /*0x6aeee0*/
  if ( !*(unsigned int *)v49 ) /*0x6aeeeb*/
  LABEL_92:
    Session::PrepareGame(); /*0x6aeef2*/
  return 0; /*0x6aeef7*/
}
} // namespace gamemd
// 0x6ADF00
namespace gamemd {
void Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
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
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF(v5); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF(v5); /*0x6adfd2*/
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

  result = MultiplayerGameMode::Find(*(void **)g_ScenarioFlags); /*0x5e2f86*/
  if ( !result ) /*0x5e2f8d*/
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
    && a2 < g_MultiplayerOptions
    && a3 < g_MultiplayerOptions
    && (v13 = IsRandMap::Sed(*(unsigned int *)(g_MultiplayerGameState + 4 * a2)),
        v7 = IsRandMap::Sed(*(unsigned int *)(g_MultiplayerGameState + 4 * a3)),
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
  if ( v8 && g_GameStateFlags ) /*0x6adeba*/
  {
    for ( i = 1; i < 8; ++i ) /*0x6adebc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)i); /*0x6adec8*/
      if ( g_GameStateFlags && *(unsigned char *)(g_GameStateFlags + 60) ) /*0x6aded3*/
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3); /*0x6adedc*/
      else
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2); /*0x6adee2*/
    }
  }
}
} // namespace gamemd
