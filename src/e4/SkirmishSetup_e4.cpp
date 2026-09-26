// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/SkirmishSetup_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x5D6130
namespace gamemd {
void SkirmishSetup_Setup(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d614d*/
  v8 = g_GameMode_Current[0] == 5; /*0x5d6156*/
  v3 = 0; /*0x5d615b*/
  for ( i = 0; ; v3 = i ) /*0x5d615d*/
  {
    result = g_MultiplayerMode; /*0x5d6161*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6168*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6171*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d617c*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d6181*/
      dword_ABFDB4 = 10; /*0x5d618b*/
      g_MultiplayerGameList = 0; /*0x5d619a*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d61a0*/
    }
    if ( v3 >= g_MultiplayerGameList ) /*0x5d61ae*/
      break; /*0x5d61ae*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d61bb*/
    {
      g_MultiplayerMode |= 1u; /*0x5d61c4*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d61cf*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d61d4*/
      dword_ABFDB4 = 10; /*0x5d61de*/
      g_MultiplayerGameList = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = *((_DWORD *)Src + v3); /*0x5d6200*/
    if ( (*(_BYTE *)(v5 + 61) || g_GameMode_Current[0] != 4 || !Network::IsMultiplayerActive()) /*0x5d6267*/
      && (*(_BYTE *)(v5 + 62) || g_GameMode_Current[0] != 4 || !Network::IsLobbyFeature())
      && (g_MPCooperativeState
       || *(_DWORD *)(g_NetworkPlayerName + 107) != -1
       || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 188))(v5))
      && (!v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5)) )
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d6271*/
      v7 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v6); /*0x5d6280*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d628b*/
        SendMessageA(hWnd, 0x186u, v7, 0); /*0x5d6296*/
      SendMessageA(hWnd, 0x19Au, v7, v5); /*0x5d62a0*/
    }
    ++i; /*0x5d62a9*/
  }
  return result; /*0x5d62b4*/
}
}
// 0x5E6920
int SkirmishSetup::DlgProc(SkirmishDialog * aP0, int a2, HWND hWnd, signed int a4, WPARAM _3C, char * a5)
{
  int result; // eax
  HWND v7; // esi
  HWND v8; // esi
  int v9; // ebx
  LRESULT v10; // eax
  LRESULT v11; // edi
  int v12; // ebx
  HWND DlgItem; // eax
  HWND v14; // edi
  signed int v15; // ebx
  LRESULT v16; // eax
  LRESULT v17; // eax
  LRESULT v18; // esi
  HWND v19; // eax
  HWND v20; // eax
  WPARAM v21; // ebx
  signed int v22; // esi
  const wchar_t *v23; // eax
  HWND v24; // esi
  LRESULT v25; // eax
  const wchar_t *v26; // eax
  wchar_t *v27; // eax
  char *v28; // esi
  void **v29; // ebx
  int DlgCtrlID; // edi
  WPARAM v31; // esi
  LRESULT v32; // eax
  wchar_t *v33; // eax
  int First; // esi
  char *v35; // ebx
  HWND v36; // edi
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // eax
  WPARAM v41; // ebx
  signed int v42; // esi
  HWND v43; // eax
  _DWORD v44[4]; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v46; // [esp+24h] [ebp-4h]

  if ( (unsigned int)a4 <= 0x111 ) /*0x5e6930*/
  {
    if ( a4 != 273 ) /*0x5e6936*/
    {
      switch ( a4 ) /*0x5e694c*/
      {
        case 15: /*0x5e694c*/
          v7 = hWnd; /*0x5e696b*/
          Dialog::DrawBackground(hWnd); /*0x5e6971*/
          if ( g_UIControlState ) /*0x5e697e*/
            Skirmish::RenderPreview(g_UIControlState, v7); /*0x5e6981*/
          Dialog::StopBink(v7); /*0x5e6988*/
          ValidateRect(v7, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 20: /*0x5e694c*/
          goto LABEL_5;
        case 43: /*0x5e694c*/
          Dialog::Resize(a6); /*0x5e6957*/
  LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 130: /*0x5e694c*/
          DestroyDialog(hWnd); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (unsigned __int16)a5 <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (unsigned __int16)a5 ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection(hWnd); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v8 = hWnd; /*0x5e69fd*/
          Dialog::IdleProcess(hWnd); /*0x5e6a03*/
          ShowWindow(v8, 0); /*0x5e6a0b*/
          v9 = SkirmishSetup_Setup_5E8590(); /*0x5e6a16*/
          a6 = (char *)v9; /*0x5e6a1b*/
          if ( v9 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v10 = SendDlgItemMessageA(v8, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v10 != -1 ) /*0x5e6a3f*/
          {
            v11 = SendDlgItemMessageA(v8, 1771, 0x199u, v10, 0); /*0x5e6a55*/
            if ( v11 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor(0, 0); /*0x5e6a67*/
              a2 = g_MultiplayerOptions; /*0x5e6a6c*/
              v12 = 0; /*0x5e6a72*/
              v44[0] = (void*)&DynamicVectorClass_MultiMission_const___vftable; /*0x5e6a76*/
              v46 = 10; /*0x5e6a7e*/
              for ( i = 0; v12 < a2; ++v12 ) /*0x5e6a8e*/
              {
                hWnd = *(HWND *)(g_MultiplayerGameState + 4 * v12); /*0x5e6a9c*/
                if ( (unsigned __int8)MapPreview::Check(hWnd) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(&hWnd); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem(v8, 1363); /*0x5e6ac2*/
              (*(void (__thiscall **)(LRESULT, HWND, _DWORD *, _DWORD))(*(_DWORD *)v11 + 76))(v11, DlgItem, v44, 0); /*0x5e6ad4*/
              v44[0] = (void*)&VectorClass_MultiMission_const___vftable; /*0x5e6adb*/
              VectorClass::Cleanup3(v44); /*0x5e6ae3*/
              v9 = (int)a6; /*0x5e6ae8*/
            }
          }
          if ( v9 < g_MultiplayerOptions ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0(v8); /*0x5e6aff*/
          LoadScenarioClassByIndex(v9); /*0x5e6b06*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e6b10*/
            Session::PrepareGame(v8); /*0x5e6b17*/
          g_GameRulesOptions = dword_AC10E0; /*0x5e6b22*/
          LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6b28*/
          IDA_LOBYTE(v9) = HandleMultiplayerMapSelection(v8); /*0x5e6b38*/
          Screen::Capture(1, 0, v9, a2); /*0x5e6b3a*/
          if ( !(_BYTE)v9 ) /*0x5e6b41*/
          {
  LABEL_28:
            SkirmishSetup::PlayButtonClickAnim(v8); /*0x5e6b49*/
            ShowWindow(v8, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog(hWnd, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (unsigned __int16)a5 == 1771 && !byte_AC11C8 && IDA_HIWORD(a5) == 1 ) /*0x5e6b96*/
    {
      v14 = hWnd; /*0x5e6b9c*/
      v15 = 0; /*0x5e6ba6*/
      v16 = SendDlgItemMessageA(hWnd, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v16 != dword_8316FC && v16 != -1 ) /*0x5e6bc6*/
      {
        dword_8316FC = v16; /*0x5e6bd9*/
        v17 = SendDlgItemMessageA(v14, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v17 != -1 ) /*0x5e6be3*/
        {
          v18 = SendDlgItemMessageA(v14, 1771, 0x199u, v17, 0); /*0x5e6bf8*/
          if ( v18 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&hWnd); /*0x5e6c06*/
            if ( (*(unsigned __int8 (__thiscall **)(LRESULT, HWND *))(*(_DWORD *)v18 + 12))(v18, &hWnd) ) /*0x5e6c14*/
            {
              (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v18 + 16))(v18); /*0x5e6c23*/
              MultiMissionVector::Constructor(0, 0); /*0x5e6c2c*/
              v44[0] = (void*)&DynamicVectorClass_MultiMission_const___vftable; /*0x5e6c36*/
              v46 = 10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              a4 = g_MultiplayerOptions; /*0x5e6c4c*/
              if ( g_MultiplayerOptions > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  a6 = *(char **)(g_MultiplayerGameState + 4 * v15); /*0x5e6c5d*/
                  if ( (unsigned __int8)MapPreview::Check(a6) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(&a6); /*0x5e6c73*/
                  ++v15; /*0x5e6c7c*/
                }
                while ( v15 < a4 ); /*0x5e6c7f*/
              }
              v19 = GetDlgItem(v14, 1363); /*0x5e6c8d*/
              (*(void (__thiscall **)(LRESULT, HWND, _DWORD *, _DWORD))(*(_DWORD *)v18 + 76))(v18, v19, v44, 0); /*0x5e6c9b*/
              v44[0] = (void*)&VectorClass_MultiMission_const___vftable; /*0x5e6ca2*/
              VectorClass::Cleanup3(v44); /*0x5e6caa*/
              IDA_LOBYTE(a6) = (*(int (__thiscall **)(LRESULT))(*(_DWORD *)v18 + 60))(v18); /*0x5e6cbc*/
              v20 = GetDlgItem(v14, 1411); /*0x5e6cc0*/
              EnableWindow(v20, (unsigned __int8)a6); /*0x5e6cce*/
              if ( &word_AC0EC8 ) /*0x5e6cdb*/
              {
                v21 = 0; /*0x5e6cdd*/
                v22 = 0; /*0x5e6cee*/
                a6 = (char *)SendDlgItemMessageA(v14, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( (int)a6 > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v23 = (const wchar_t *)SendDlgItemMessageA(v14, 1363, 0x199u, v22, 0); /*0x5e6d06*/
                    if ( !wcscmp(v23, &word_AC0EC8) ) /*0x5e6d0e*/
                      v21 = v22; /*0x5e6d1a*/
                    ++v22; /*0x5e6d20*/
                  }
                  while ( v22 < (int)a6 ); /*0x5e6d23*/
                }
                SendDlgItemMessageA(v14, 1363, 0x186u, v21, 0); /*0x5e6d33*/
                SendDlgItemMessageA(v14, 1363, 0x197u, v21, 0); /*0x5e6d43*/
              }
              v24 = hDlg; /*0x5e6d59*/
              v25 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( v25 == -1 || (v26 = (const wchar_t *)SendDlgItemMessageA(v24, 1363, 0x199u, v25, 0)) == 0 ) /*0x5e6d74*/
              {
                word_AC0EC8 = 0; /*0x5e6da4*/
                byte_AC11C9 = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((void **)&hWnd); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy(&word_AC0EC8, v26); /*0x5e6d7c*/
                byte_AC11C9 = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((void **)&hWnd); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !byte_AC11C9 ) /*0x5e6dcc*/
              {
                v27 = WideString::GetOrEmpty((wchar_t **)&hWnd); /*0x5e6dd4*/
                ShowDialogConfirm(v27, 0, 0, 0); /*0x5e6ddd*/
                byte_AC11C9 = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA(v14, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((void **)&hWnd); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( a4 == 1175 ) /*0x5e6e12*/
  {
    byte_AC11C8 = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(void **)g_ScenarioFlags); /*0x5e6eb8*/
    v35 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v36 = hWnd; /*0x5e6ec7*/
    v37 = GetDlgItem(hWnd, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v37); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor(0, 0); /*0x5e6ef1*/
      v44[0] = (void*)&DynamicVectorClass_MultiMission_const___vftable; /*0x5e6efb*/
      v46 = 10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      a6 = (char *)g_MultiplayerOptions; /*0x5e6f11*/
      if ( g_MultiplayerOptions > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          hWnd = *(HWND *)(g_MultiplayerGameState + 4 * (_DWORD)v35); /*0x5e6f23*/
          if ( (unsigned __int8)MapPreview::Check(hWnd) ) /*0x5e6f27*/
            SkirmishVector::PushBack(&hWnd); /*0x5e6f39*/
          ++v35; /*0x5e6f42*/
        }
        while ( (int)v35 < (int)a6 ); /*0x5e6f45*/
      }
      v38 = GetDlgItem(v36, 1363); /*0x5e6f4d*/
      (*(void (__thiscall **)(int, HWND, _DWORD *, _DWORD))(*(_DWORD *)First + 76))(First, v38, v44, 0); /*0x5e6f5b*/
      v44[0] = (void*)&VectorClass_MultiMission_const___vftable; /*0x5e6f62*/
      VectorClass::Cleanup3(v44); /*0x5e6f6a*/
    }
    IDA_LOBYTE(hWnd) = (*(int (__thiscall **)(int))(*(_DWORD *)First + 60))(First); /*0x5e6f7c*/
    v39 = GetDlgItem(v36, 1411); /*0x5e6f80*/
    EnableWindow(v39, (unsigned __int8)hWnd); /*0x5e6f8e*/
    v40 = g_GameRulesOptions; /*0x5e6f94*/
    if ( g_GameRulesOptions != -1 && g_GameRulesOptions < g_MultiplayerOptions ) /*0x5e6fa8*/
    {
      hWnd = *(HWND *)(g_MultiplayerGameState + 4 * g_GameRulesOptions); /*0x5e6fb5*/
      if ( hWnd ) /*0x5e6fb9*/
      {
        v41 = 0; /*0x5e6fc1*/
        v42 = 0; /*0x5e6fd2*/
        a6 = (char *)SendDlgItemMessageA(v36, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( (int)a6 > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v43 = (HWND)SendDlgItemMessageA(v36, 1363, 0x199u, v42, 0); /*0x5e6fea*/
            if ( v43 == hWnd ) /*0x5e6ff0*/
              v41 = v42; /*0x5e6ff2*/
            ++v42; /*0x5e6ff8*/
          }
          while ( v42 < (int)a6 ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA(v36, 1363, 0x186u, v41, 0); /*0x5e700b*/
        SendDlgItemMessageA(v36, 1363, 0x197u, v41, 0); /*0x5e701b*/
        v40 = g_GameRulesOptions; /*0x5e701d*/
      }
    }
    dword_AC10E0 = v40; /*0x5e7022*/
    dword_AC0D30 = -1; /*0x5e7027*/
    byte_AC11C8 = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( a4 != 1257 ) /*0x5e6e1b*/
  {
    if ( a4 == 1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, a1, a2); /*0x5e6e2a*/
      Dialog::EnumAndCleanup(hWnd); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v28 = a6; /*0x5e6e44*/
  v29 = (void **)(a6 + 8); /*0x5e6e51*/
  DlgCtrlID = GetDlgCtrlID(*(HWND *)a6); /*0x5e6e58*/
  WideString::Assign_Alt(v29, 0); /*0x5e6e5a*/
  if ( DlgCtrlID == 1771 ) /*0x5e6e65*/
  {
    v31 = *((_DWORD *)v28 + 1); /*0x5e6e67*/
    if ( v31 != -1 ) /*0x5e6e6d*/
    {
      v32 = SendDlgItemMessageA(hWnd, 1771, 0x199u, v31, 0); /*0x5e6e7d*/
      if ( v32 ) /*0x5e6e85*/
      {
        v33 = WideString::GetOrEmpty_Alt((wchar_t **)(v32 + 36)); /*0x5e6e8a*/
        WideString::Assign_Alt(v29, v33); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/
}
// 0x608260
int SkirmishSetup::PlayButtonClickAnim()
{
  HWND *v2; // eax
  _DWORD *v4; // eax
  bool v5; // bl
  bool v6; // al
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( SessionClass::GetGameSpeed(g_GameMode_Current) ) /*0x60826a*/
    return 0; /*0x60826a*/
  v7 = hWnd; /*0x608278*/
  if ( !g_DialogHashMap_Count ) /*0x60827e*/
    return 0; /*0x60827e*/
  v2 = (HWND *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v7) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60829f*/
  if ( !v2 ) /*0x6082a4*/
    return 0; /*0x6082a4*/
  while ( *v2 != v7 ) /*0x6082ac*/
  {
    v2 = (HWND *)v2[129]; /*0x6082ae*/
    if ( !v2 ) /*0x6082b6*/
      return 0; /*0x6082b6*/
  }
  v4 = v2 + 1; /*0x6082c2*/
  if ( !v4 ) /*0x6082c7*/
    return 0; /*0x6082c7*/
  v5 = *((_BYTE *)v4 + 189) && v4[44] == 1; /*0x6082d1*/
  v6 = IsWindowVisible(hWnd); /*0x6082eb*/
  if ( !v5 || !v6 ) /*0x6082f4*/
    return 0; /*0x6082b8*/
  PlayVocClass(g_RulesClass_Instance->AddPlanningModeCommandSound, 0x2000, 1.0, 0); /*0x60830f*/
  IDA_LOBYTE(v7) = IsWindowEnabled(hWnd); /*0x608329*/
  EnableWindow(hWnd, 0); /*0x60832d*/
  EnumChildWindows(hWnd, Dialog::MapControlToAction, 1); /*0x60833d*/
  RenderGadgetClassAnimation(hWnd, 1); /*0x608343*/
  EnumChildWindows(hWnd, Dialog::MapControlToAction, 0); /*0x608350*/
  EnableWindow(hWnd, (unsigned __int8)v7); /*0x60835d*/
  InvalidateRect(hWnd, 0, 0); /*0x608364*/
  return 1; /*0x6082b8*/
}
// 0x5E8590
namespace gamemd {
AbstractClass * * SkirmishSetup_Setup_5E8590()
{
  char (*v0)(); // ecx
  unsigned int v2;
  void *v3; // eax
  void *v4; // eax
  int v5; // ebx
  char *v6; // edi
  wchar_t *v7; // eax
  wchar_t *v8; // esi
  wchar_t * v9;
  char **v10; // esi
  char *v11; // eax

  if ( g_GameMode_Current[0] == 3 ) /*0x5e8598*/
  {
    v0 = (char (*)())&loc_5DAF20; /*0x5e859a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e85a4*/
  {
    v0 = Game::ProcessIdle; /*0x5e85a6*/
  }
  else if ( g_GameMode_Current[0] == 1 || (v0 = Event_Dispatch::Return0, g_GameMode_Current[0] == 2) ) /*0x5e85ba*/
  {
    v0 = (char (*)())&loc_5BB260; /*0x5e85bc*/
  }
  if ( CCFileClass::Load(v0) != 1 ) /*0x5e85c9*/
    return -1; /*0x5e85cb*/
  byte_8316D4 = 1; /*0x5e85db*/
  MapSeed::ValidateName((char *)dword_ABDFD8, (int)g_Str_File_RandMap_Sed); /*0x5e85e2*/
  v2 = g_UIControlState; /*0x5e85e7*/
  if ( g_UIControlState ) /*0x5e85ef*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x5e85f3*/
    RA2_OPDEL(v2); /*0x5e85f9*/
  }
  v3 = RA2_OPNEW(4u); /*0x5e8603*/
  if ( v3 ) /*0x5e860d*/
    v4 = (void *)unknown_libname_27(v3); /*0x5e8611*/
  else
    v4 = 0; /*0x5e8618*/
  g_UIControlState = v4; /*0x5e8621*/
  Surface::LoadToSurfaceSHP((char **)v4, ExistingFileName); /*0x5e8626*/
  v5 = 0; /*0x5e8630*/
  if ( g_MultiplayerOptions <= 0 ) /*0x5e8634*/
  {
  LABEL_18:
    v6 = GameConfig::ComputeCRC(); /*0x5e8655*/
    v7 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x5e8662*/
    if ( v7 ) /*0x5e866c*/
      v8 = SessionClass::ParseGameInfo(v7, g_Str_File_RandMap_Sed, &word_ABE050, v6, 1, 0, 2, 4); /*0x5e8688*/
    else
      v8 = 0; /*0x5e868c*/
    if ( g_MultiplayerOptions < dword_A8B8D0 /*0x5e86c5*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8D0 + dword_A8B8DC,
           0) )
    {
      v9 = g_MultiplayerOptions++; /*0x5e86d2*/
      *(_DWORD *)(g_MultiplayerGameState + 4 * v9) = v8; /*0x5e86e1*/
    }
    RA2_OPDEL(v6); /*0x5e86e5*/
    return v5; /*0x5e86ed*/
  }
  else
  {
    while ( !IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v5)) ) /*0x5e8645*/
    {
      if ( ++v5 >= g_MultiplayerOptions ) /*0x5e8653*/
        goto LABEL_18; /*0x5e8653*/
    }
    GameOption::SetDescriptionWStr(*(wchar_t **)(g_MultiplayerGameState + 4 * v5), &word_ABE050); /*0x5e8701*/
    v10 = (char **)(g_MultiplayerGameState + 4 * v5); /*0x5e870b*/
    v11 = GameConfig::ComputeCRC(); /*0x5e870e*/
    GameOption::SetDigest(*v10, v11); /*0x5e8716*/
    return v5; /*0x5e871b*/
  }
}
}
// 0x5E70D0
namespace gamemd {
WPARAM SkirmishSetup_Setup_5E70D0(HWND hDlg, int a2)
{
  WPARAM v4; // ebp
  signed int v5; // esi
  LRESULT v7; // [esp+8h] [ebp-4h]

  if ( !a2 ) /*0x5e70dc*/
    return -1; /*0x5e70de*/
  v4 = 0; /*0x5e70ee*/
  v5 = 0; /*0x5e7100*/
  v7 = SendDlgItemMessageA(hDlg, 1363, 0x18Bu, 0, 0); /*0x5e7104*/
  if ( v7 > 0 ) /*0x5e7108*/
  {
    do /*0x5e7129*/
    {
      if ( SendDlgItemMessageA(hDlg, 1363, 0x199u, v5, 0) == a2 ) /*0x5e711e*/
        v4 = v5; /*0x5e7120*/
      ++v5; /*0x5e7126*/
    }
    while ( v5 < v7 ); /*0x5e7129*/
  }
  SendDlgItemMessageA(hDlg, 1363, 0x186u, v4, 0); /*0x5e7139*/
  SendDlgItemMessageA(hDlg, 1363, 0x197u, v4, 0); /*0x5e7149*/
  return v4; /*0x5e70e1*/
}
} // namespace gamemd
