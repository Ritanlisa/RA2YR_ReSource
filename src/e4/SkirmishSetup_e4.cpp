// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
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
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Event_Dispatch_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x5D6130
namespace gamemd {
void SkirmishSetup_Setup(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5;
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d614d*/
  v8 = ((unsigned int *)(dword_A8B238))[0] == 5; /*0x5d6156*/
  v3 = 0; /*0x5d615b*/
  for ( i = 0; ; v3 = i ) /*0x5d615d*/
  {
    result = g_MultiplayerMode; /*0x5d6161*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6168*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6171*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass((int)(&g_MultiplayerModeConfig), 0, 0); /*0x5d617c*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d6181*/
      dword_ABFDB4 = 10; /*0x5d618b*/
      dword_ABFDB0 = 0; /*0x5d619a*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d61a0*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d61ae*/
      break; /*0x5d61ae*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d61bb*/
    {
      g_MultiplayerMode |= 1u; /*0x5d61c4*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass((int)(&g_MultiplayerModeConfig), 0, 0); /*0x5d61cf*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d61d4*/
      dword_ABFDB4 = 10; /*0x5d61de*/
      dword_ABFDB0 = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = (LPARAM)((wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)(*((unsigned int *)dword_ABFDA4 + v3)))))))))));
        if ( (*(unsigned char *)(v5 + 61) || g_abs_A8B238[0] != 4 || !Network::IsMultiplayerActive())
      && (*(unsigned char *)(v5 + 62) || ((unsigned int *)(dword_A8B238))[0] != 4 || !this->Network::IsLobbyFeature())
      && (g_MPCooperativeState
       || *(unsigned int *)(dword_A8DA90 + 107) != -1
       || (*(uint8_t (**)(LPARAM))(*(unsigned int *)v5 + 188))(v5))
      && (!v8 || (*(uint8_t (**)(LPARAM))(*(unsigned int *)v5 + 64))(v5)) )
    {
      v6 = (wchar_t *)(WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)));
      v7 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v6); /*0x5d6280*/
      if ( *(unsigned int *)(v5 + 40) == a2 ) /*0x5d628b*/
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

  int v6; // ebx
  int result; // eax
  Dialog *v8; // esi
  Session *v9; // esi
  int v10; // ebx
  LRESULT v11; // eax
  char *v12; // edi
  int v13; // ebx
  HWND DlgItem; // eax
  SkirmishSetup *v15; // edi
  int v16; // ebx
  LRESULT v17; // eax
  LRESULT v18; // eax
  char *v19; // esi
  HWND v20; // eax
  HWND v21; // eax
  WPARAM v22; // ebx
  signed int v23; // esi
  const wchar_t *v24; // eax
  HWND v25; // esi
  LRESULT v26; // eax
  const wchar_t *v27; // eax
  wchar_t *v28; // eax
  WPARAM v29; // esi
  void **v30; // ebx
  int DlgCtrlID; // edi
  WPARAM v32; // esi
  LRESULT v33; // eax
  wchar_t *v34; // eax
  int First; // esi
  signed int v36; // ebx
  SkirmishSetup *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  int v41; // eax
  WPARAM v42; // ebx
  signed int v43; // esi
  SkirmishSetup *v44; // eax
  Dialog *v45; // [esp+0h] [ebp-28h]
  ObjectClass *v46; // [esp+0h] [ebp-28h]
  SkirmishVector v47; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v49; // [esp+24h] [ebp-4h]

  if ( (unsigned int)hWnd <= 0x111 ) /*0x5e6930*/
  {
    if ( hWnd != (HWND)273 ) /*0x5e6936*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e694c*/
      {
        case 0xFu: /*0x5e694c*/
          v8 = (Dialog *)aP0; /*0x5e696b*/
          Dialog::DrawBackground((Dialog *)aP0); /*0x5e6971*/
          if ( g_UIControlState ) /*0x5e697e*/
            ((Skirmish *)(g_UIControlState))->RenderPreview((HWND)v8); /*0x5e6981*/
          Dialog::StopBink(v8); /*0x5e6988*/
          ValidateRect((HWND)v8, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 0x14u: /*0x5e694c*/
          goto LABEL_5;
        case 0x2Bu: /*0x5e694c*/
          Dialog::Resize((char *)_3C); /*0x5e6957*/
LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 0x82u: /*0x5e694c*/
          DestroyDialog((ObjectClass *)aP0); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (uint16_t)a4 <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (uint16_t)a4 ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection((ObjectClass *)aP0); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v9 = (Session *)aP0; /*0x5e69fd*/
          Dialog::IdleProcess(v45, (ObjectClass *)aP0); /*0x5e6a03*/
          ShowWindow((HWND)v9, 0); /*0x5e6a0b*/
          v10 = SkirmishSetup_Setup_5E8590(v46); /*0x5e6a16*/
          _3C = v10; /*0x5e6a1b*/
          if ( v10 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v11 = SendDlgItemMessageA((HWND)v9, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v11 != -1 ) /*0x5e6a3f*/
          {
            v12 = (char *)SendDlgItemMessageA((HWND)v9, 1771, 0x199u, v11, 0); /*0x5e6a55*/
            if ( v12 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6a67*/
              a2 = dword_A8B8D8; /*0x5e6a6c*/
              v13 = 0; /*0x5e6a72*/
              v47 = (SkirmishVector)&vt_DynamicVectorClass; /*0x5e6a76*/
              v49 = 10; /*0x5e6a7e*/
              for ( i = 0; v13 < a2; ++v13 ) /*0x5e6a8e*/
              {
                aP0 = *(SkirmishSetup **)(dword_A8B8CC + 4 * v13); /*0x5e6a9c*/
                if ( (uint8_t)MapPreview::Check(v12, (int)aP0) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(&v47, &aP0); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem((HWND)v9, 1363); /*0x5e6ac2*/
              (*(void (**)(char *, HWND, SkirmishVector *, unsigned int))(*(unsigned int *)v12 + 76))( /*0x5e6ad4*/
                v12,
                DlgItem,
                &v47,
                0);
              v47 = (SkirmishVector)&vt_VectorClass; /*0x5e6adb*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6ae3*/
              v10 = _3C; /*0x5e6ae8*/
            }
          }
          if ( v10 < dword_A8B8D8 ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0((HWND)v9, *(unsigned int *)(dword_A8B8CC + 4 * v10)); /*0x5e6aff*/
          LoadScenarioClassByIndex(v10); /*0x5e6b06*/
          if ( !*(unsigned int *)g_UIControlState ) /*0x5e6b10*/
            Session::PrepareGame(v9); /*0x5e6b17*/
          *(unsigned int *)&stru_A8B250.__pad_0[4] = dword_AC10E0; /*0x5e6b22*/
          LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6b28*/
          LOBYTE(v10) = HandleMultiplayerMapSelection((ObjectClass *)v9); /*0x5e6b38*/
          Screen::Capture(1, 0, v10, a2); /*0x5e6b3a*/
          if ( !(unsigned char)v10 ) /*0x5e6b41*/
          {
LABEL_28:
            SkirmishSetup::PlayButtonClickAnim((SkirmishSetup *)v9); /*0x5e6b49*/
            ShowWindow((HWND)v9, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog((HWND)aP0, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (uint16_t)a4 == 1771 && !byte_AC11C8 && HIWORD(a4) == 1 ) /*0x5e6b96*/
    {
      v15 = aP0; /*0x5e6b9c*/
      v16 = 0; /*0x5e6ba6*/
      v17 = SendDlgItemMessageA((HWND)aP0, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v17 != dword_8316FC && v17 != -1 ) /*0x5e6bc6*/
      {
        dword_8316FC = v17; /*0x5e6bd9*/
        v18 = SendDlgItemMessageA((HWND)v15, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v18 != -1 ) /*0x5e6be3*/
        {
          v19 = (char *)SendDlgItemMessageA((HWND)v15, 1771, 0x199u, v18, 0); /*0x5e6bf8*/
          if ( v19 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&aP0); /*0x5e6c06*/
            if ( (*(uint8_t (**)(char *, SkirmishSetup **))(*(unsigned int *)v19 + 12))(v19, &aP0) ) /*0x5e6c14*/
            {
              (*(void (**)(char *))(*(unsigned int *)v19 + 16))(v19); /*0x5e6c23*/
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6c2c*/
              v47 = (SkirmishVector)&vt_DynamicVectorClass; /*0x5e6c36*/
              v49 = 10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              hWnd = (HWND)dword_A8B8D8; /*0x5e6c4c*/
              if ( dword_A8B8D8 > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  _3C = *(unsigned int *)(dword_A8B8CC + 4 * v16); /*0x5e6c5d*/
                  if ( (uint8_t)MapPreview::Check(v19, _3C) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(&v47, &_3C); /*0x5e6c73*/
                  ++v16; /*0x5e6c7c*/
                }
                while ( v16 < (int)hWnd ); /*0x5e6c7f*/
              }
              v20 = GetDlgItem((HWND)v15, 1363); /*0x5e6c8d*/
              (*(void (**)(char *, HWND, SkirmishVector *, unsigned int))(*(unsigned int *)v19 + 76))(v19, v20, &v47, 0); /*0x5e6c9b*/
              v47 = (SkirmishVector)&vt_VectorClass; /*0x5e6ca2*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6caa*/
              LOBYTE(_3C) = (*(int (**)(char *))(*(unsigned int *)v19 + 60))(v19); /*0x5e6cbc*/
              v21 = GetDlgItem((HWND)v15, 1411); /*0x5e6cc0*/
              EnableWindow(v21, (uint8_t)_3C); /*0x5e6cce*/
              if ( &word_AC0EC8 ) /*0x5e6cdb*/
              {
                v22 = 0; /*0x5e6cdd*/
                v23 = 0; /*0x5e6cee*/
                _3C = SendDlgItemMessageA((HWND)v15, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( (int)_3C > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v24 = (const wchar_t *)SendDlgItemMessageA((HWND)v15, 1363, 0x199u, v23, 0); /*0x5e6d06*/
                    if ( !wcscmp(v24, &word_AC0EC8) ) /*0x5e6d0e*/
                      v22 = v23; /*0x5e6d1a*/
                    ++v23; /*0x5e6d20*/
                  }
                  while ( v23 < (int)_3C ); /*0x5e6d23*/
                }
                SendDlgItemMessageA((HWND)v15, 1363, 0x186u, v22, 0); /*0x5e6d33*/
                SendDlgItemMessageA((HWND)v15, 1363, 0x197u, v22, 0); /*0x5e6d43*/
              }
              v25 = hDlg; /*0x5e6d59*/
              v26 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( v26 == -1 || (v27 = (const wchar_t *)SendDlgItemMessageA(v25, 1363, 0x199u, v26, 0)) == 0 ) /*0x5e6d74*/
              {
                word_AC0EC8 = 0; /*0x5e6da4*/
                byte_AC11C9 = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((DeleteAndZero *)&aP0); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy(&word_AC0EC8, v27); /*0x5e6d7c*/
                byte_AC11C9 = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((DeleteAndZero *)&aP0); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !byte_AC11C9 ) /*0x5e6dcc*/
              {
                v28 = WideString::GetOrEmpty((wchar_t **)&aP0); /*0x5e6dd4*/
                ShowDialogConfirm(v28, 0, 0, 0); /*0x5e6ddd*/
                byte_AC11C9 = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA((HWND)v15, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((DeleteAndZero *)&aP0); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( hWnd == (HWND)1175 ) /*0x5e6e12*/
  {
    byte_AC11C8 = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5e6eb8*/
    v36 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v37 = aP0; /*0x5e6ec7*/
    v38 = GetDlgItem((HWND)aP0, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v38, *(unsigned int *)(First + 40)); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6ef1*/
      v47 = (SkirmishVector)&vt_DynamicVectorClass; /*0x5e6efb*/
      v49 = 10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      _3C = dword_A8B8D8; /*0x5e6f11*/
      if ( dword_A8B8D8 > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          aP0 = *(SkirmishSetup **)(dword_A8B8CC + 4 * v36); /*0x5e6f23*/
          if ( (uint8_t)MapPreview::Check((char *)First, (int)aP0) ) /*0x5e6f27*/
            SkirmishVector::PushBack(&v47, &aP0); /*0x5e6f39*/
          ++v36; /*0x5e6f42*/
        }
        while ( v36 < (int)_3C ); /*0x5e6f45*/
      }
      v39 = GetDlgItem((HWND)v37, 1363); /*0x5e6f4d*/
      (*(void (**)(int, HWND, SkirmishVector *, unsigned int))(*(unsigned int *)First + 76))(First, v39, &v47, 0); /*0x5e6f5b*/
      v47 = (SkirmishVector)&vt_VectorClass; /*0x5e6f62*/
      VectorClass::Cleanup3((int)&v47); /*0x5e6f6a*/
    }
    LOBYTE(aP0) = (*(int (**)(int))(*(unsigned int *)First + 60))(First); /*0x5e6f7c*/
    v40 = GetDlgItem((HWND)v37, 1411); /*0x5e6f80*/
    EnableWindow(v40, (uint8_t)aP0); /*0x5e6f8e*/
    v41 = *(unsigned int *)&stru_A8B250.__pad_0[4]; /*0x5e6f94*/
    if ( *(unsigned int *)&stru_A8B250.__pad_0[4] != -1 && *(int *)&stru_A8B250.__pad_0[4] < dword_A8B8D8 ) /*0x5e6fa8*/
    {
      aP0 = *(SkirmishSetup **)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]); /*0x5e6fb5*/
      if ( aP0 ) /*0x5e6fb9*/
      {
        v42 = 0; /*0x5e6fc1*/
        v43 = 0; /*0x5e6fd2*/
        _3C = SendDlgItemMessageA((HWND)v37, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( (int)_3C > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v44 = (SkirmishSetup *)SendDlgItemMessageA((HWND)v37, 1363, 0x199u, v43, 0); /*0x5e6fea*/
            if ( v44 == aP0 ) /*0x5e6ff0*/
              v42 = v43; /*0x5e6ff2*/
            ++v43; /*0x5e6ff8*/
          }
          while ( v43 < (int)_3C ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA((HWND)v37, 1363, 0x186u, v42, 0); /*0x5e700b*/
        SendDlgItemMessageA((HWND)v37, 1363, 0x197u, v42, 0); /*0x5e701b*/
        v41 = *(unsigned int *)&stru_A8B250.__pad_0[4]; /*0x5e701d*/
      }
    }
    dword_AC10E0 = v41; /*0x5e7022*/
    dword_AC0D30 = -1; /*0x5e7027*/
    byte_AC11C8 = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( hWnd != (HWND)1257 ) /*0x5e6e1b*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, v6, a2); /*0x5e6e2a*/
      Dialog::EnumAndCleanup((Dialog *)aP0); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v29 = _3C; /*0x5e6e44*/
  v30 = (void **)(_3C + 8); /*0x5e6e51*/
  DlgCtrlID = GetDlgCtrlID(*(HWND *)_3C); /*0x5e6e58*/
  ((WideString *)(v30))->Assign_Alt(0); /*0x5e6e5a*/
  if ( DlgCtrlID == 1771 ) /*0x5e6e65*/
  {
    v32 = *(unsigned int *)(v29 + 4); /*0x5e6e67*/
    if ( v32 != -1 ) /*0x5e6e6d*/
    {
      v33 = SendDlgItemMessageA((HWND)aP0, 1771, 0x199u, v32, 0); /*0x5e6e7d*/
      if ( v33 ) /*0x5e6e85*/
      {
        v34 = WideString::GetOrEmpty_Alt((wchar_t **)(v33 + 36)); /*0x5e6e8a*/
        ((WideString *)(v30))->Assign_Alt(v34); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/

}
// 0x608260
int SkirmishSetup::PlayButtonClickAnim(HWND hWnd)
{

  int result; // eax
  char v3; // bl
  SkirmishSetup *v4; // [esp+8h] [ebp-4h] BYREF

  result = ((SessionClass *)((SessionClass *)&dword_A8B238))->GetGameSpeed(); /*0x60826a*/
  if ( (unsigned char)result ) /*0x608271*/
    goto LABEL_6; /*0x608271*/
  result = *(unsigned int *)&g_DialogPool.__pad_208[60]; /*0x608273*/
  v4 = hWnd; /*0x608278*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60827e*/
    goto LABEL_6; /*0x60827e*/
  result = *(unsigned int *)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60829f*/
                     + 4
                     * ((*(int (**)(SkirmishSetup **))&g_DialogPool.__pad_208[80])(&v4)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x6082a4*/
    goto LABEL_6; /*0x6082a4*/
  while ( *(SkirmishSetup **)result != v4 ) /*0x6082ac*/
  {
    result = *(unsigned int *)(result + 516); /*0x6082ae*/
    if ( !result ) /*0x6082b6*/
      goto LABEL_6; /*0x6082b6*/
  }
  result += 4; /*0x6082c2*/
  if ( result
    && (!*(unsigned char *)(result + 189) || *(unsigned int *)(result + 176) != 1 ? (v3 = 0) : (v3 = 1),
        (result = IsWindowVisible((HWND)hWnd), LOBYTE(result) = result != 0, v3) && (unsigned char)result) )
  {
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 416), 0x2000, 1.0, 0); /*0x60830f*/
    LOBYTE(v4) = IsWindowEnabled((HWND)hWnd); /*0x608329*/
    EnableWindow((HWND)hWnd, 0); /*0x60832d*/
    EnumChildWindows((HWND)hWnd, Dialog::MapControlToAction, 1); /*0x60833d*/
    RenderGadgetClassAnimation((HWND)hWnd, 1); /*0x608343*/
    EnumChildWindows((HWND)hWnd, Dialog::MapControlToAction, 0); /*0x608350*/
    EnableWindow((HWND)hWnd, (uint8_t)v4); /*0x60835d*/
    result = InvalidateRect((HWND)hWnd, 0, 0); /*0x608364*/
    LOBYTE(result) = 1; /*0x60836a*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x6082b8*/
  }
  return result; /*0x6082b8*/

}
// 0x5E8590
namespace gamemd {
AbstractClass * * SkirmishSetup_Setup_5E8590()
{
  CCFileClass *v1; // ecx
  unsigned int v3;
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  int v6; // ebx
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // esi
  wchar_t * v10;
  char **v11; // esi
  char *v12; // eax

  if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x5e8598*/
  {
    unsigned int loc_5DAF20 = 0;  /* G37 hoist */
    v1 = (CCFileClass *)loc_5DAF20; /*0x5e859a*/
  }
  else if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e85a4*/
  {
    v1 = (CCFileClass *)Game::ProcessIdle; /*0x5e85a6*/
  }
  else if ( *(unsigned int *)&dword_A8B238 == 1 /*0x5e85ba*/
         || (v1 = (CCFileClass *)Event_Dispatch::Return0, *(unsigned int *)&dword_A8B238 == 2) )
  {
    unsigned int loc_5BB260 = (unsigned int)((gamemd::AbstractClass **)(0));
    v1 = (CCFileClass *)&loc_5BB260; /*0x5e85bc*/
  }
  if ( CCFileClass::Load(v1) != 1 ) /*0x5e85c9*/
    return -1; /*0x5e85cb*/
  byte_8316D4 = 1; /*0x5e85db*/
  MapSeed::ValidateName(byte_ABDFD8, (int)aRandmapSed); /*0x5e85e2*/
  v3 = g_UIControlState; /*0x5e85e7*/
  if ( g_UIControlState ) /*0x5e85ef*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e85f3*/
    RA2_OPDEL(v3); /*0x5e85f9*/
  }
  v4 = (gamemd::ObjectClass *)((int)((ObjectClass *)RA2_OPNEW(4u)));
  if ( v4 ) /*0x5e860d*/
    v5 = (Skirmish *)unknown_libname_27(v4); /*0x5e8611*/
  else
    v5 = 0; /*0x5e8618*/
  g_UIControlState = (int)(v5); /*0x5e8621*/
  ((Surface *)((Surface *)v5))->LoadToSurfaceSHP(ExistingFileName); /*0x5e8626*/
  v6 = 0; /*0x5e8630*/
  if ( dword_A8B8D8 <= 0 ) /*0x5e8634*/
  {
  LABEL_18:
    v7 = GameConfig::ComputeCRC(); /*0x5e8655*/
    v8 = (SessionClass *)RA2_OPNEW(0x1BCu); /*0x5e8662*/
    if ( v8 ) /*0x5e866c*/
      v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &unk_ABE050, v7, 1, 0, 2, 4); /*0x5e8688*/
    else
      v9 = 0; /*0x5e868c*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x5e86c5*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8D0 + dword_A8B8DC,
           0) )
    {
      v10 = (wchar_t *)((unsigned int)(dword_A8B8D8++));
      *(unsigned int *)(dword_A8B8CC + 4 * v10) = v9; /*0x5e86e1*/
    }
    RA2_OPDEL(v7); /*0x5e86e5*/
    return v6; /*0x5e86ed*/
  }
  else
  {
    while ( !(uint8_t)IsRandMap::Sed(*(unsigned int *)(dword_A8B8CC + 4 * v6)) ) /*0x5e8645*/
    {
      if ( ++v6 >= dword_A8B8D8 ) /*0x5e8653*/
        goto LABEL_18; /*0x5e8653*/
    }
    GameOption::SetDescriptionWStr(*(GameOption **)(dword_A8B8CC + 4 * v6), &unk_ABE050); /*0x5e8701*/
    v11 = (char **)(dword_A8B8CC + 4 * v6); /*0x5e870b*/
    v12 = GameConfig::ComputeCRC(); /*0x5e870e*/
    GameOption::SetDigest(*v11, v12); /*0x5e8716*/
    return v6; /*0x5e871b*/
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
