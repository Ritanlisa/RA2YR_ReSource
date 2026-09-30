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
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d617c*/
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
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d61cf*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d61d4*/
      dword_ABFDB4 = 10; /*0x5d61de*/
      dword_ABFDB0 = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = (wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)((LPARAM)((wchar_t *)(*((unsigned int *)dword_ABFDA4 + v3))))))))));
        if ( (*(unsigned char *)(v5 + 61) || MEMORY[0xA8B238][0] != 4 || !Network::IsMultiplayerActive())
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
  int ebp0; // ebp
  int result; // eax
  SkirmishDialog *v7; // esi
  SkirmishDialog *v8; // esi
  signed int v11; // ebx
  LRESULT v12; // eax
  char *v13; // edi
  int v14; // ebx
  HWND DlgItem; // eax
  SkirmishDialog *v16; // edi
  int v17; // ebx
  LRESULT v18; // eax
  LRESULT v19; // eax
  char *v20; // esi
  HWND v21; // eax
  HWND v22; // eax
  WPARAM v23; // ebx
  signed int esi43; // esi
  const wchar_t *v25; // eax
  SkirmishDialog *v24; // esi
  LRESULT eax48; // eax
  const wchar_t *v28; // eax
  CampaignScore *v27; // eax
  signed int v30; // esi
  void **v31; // ebx
  ReferenceCounted *DlgCtrlID; // edi
  WPARAM esi60; // esi
  LRESULT v34; // eax
  CampaignScore *v33; // eax
  int First; // esi
  signed int v37; // ebx
  SkirmishDialog *v38; // edi
  HWND v39; // eax
  HWND eax71; // eax
  HWND v41; // eax
  CCINIClass *v40; // eax
  WPARAM v43; // ebx
  signed int v44; // esi
  SkirmishDialog *v45; // eax
  unsigned int var18[4]; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  CCINIClass *v46; // [esp+24h] [ebp-4h]

  if ( (unsigned int)a2 <= 0x111 ) /*0x5e6930*/
  {
    if ( a2 != 273 ) /*0x5e6936*/
    {
      switch ( a2 ) /*0x5e694c*/
      {
        case 15: /*0x5e694c*/
          v7 = aP0; /*0x5e696b*/
          Dialog::DrawBackground((HWND)aP0); /*0x5e6971*/
          if ( *(&g_MatrixTransformState + 2257) ) /*0x5e697e*/
            Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), v7); /*0x5e6981*/
          Dialog::StopBink((HWND)v7); /*0x5e6988*/
          ValidateRect((HWND)v7, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 20: /*0x5e694c*/
          goto LABEL_5;
        case 43: /*0x5e694c*/
          Dialog::Resize((char *)a4); /*0x5e6957*/
LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 130: /*0x5e694c*/
          DestroyDialog(aP0); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (unsigned __int16)hWnd <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (unsigned __int16)hWnd ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection((HWND)aP0); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v8 = aP0; /*0x5e69fd*/
          Dialog::IdleProcess(aP0); /*0x5e6a03*/
          ShowWindow((HWND)v8, 0); /*0x5e6a0b*/
          v11 = SkirmishSetup_Setup_5E8590(); /*0x5e6a16*/
          a4 = v11; /*0x5e6a1b*/
          if ( v11 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v12 = SendDlgItemMessageA((HWND)v8, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v12 != -1 ) /*0x5e6a3f*/
          {
            v13 = (char *)SendDlgItemMessageA((HWND)v8, 1771, 0x199u, v12, 0); /*0x5e6a55*/
            if ( v13 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6a67*/
              ebp0 = *(unsigned int *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6a6c*/
              v14 = 0; /*0x5e6a72*/
              var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6a76*/
              v46 = (CCINIClass *)10; /*0x5e6a7e*/
              for ( i = 0; v14 < ebp0; ++v14 ) /*0x5e6a8e*/
              {
                aP0 = *(SkirmishDialog **)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] + 4 * v14); /*0x5e6a9c*/
                if ( MapPreview::Check(v13, (int)aP0) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(var18, &aP0); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem((HWND)v8, 1363); /*0x5e6ac2*/
              (*(void (**)(char *, HWND, unsigned int *, unsigned int))(*(unsigned int *)v13 + 76))(v13, DlgItem, var18, 0); /*0x5e6ad4*/
              var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6adb*/
              VectorClass::Cleanup3((int)var18); /*0x5e6ae3*/
              v11 = a4; /*0x5e6ae8*/
            }
          }
          if ( v11 < *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0((HWND)v8, *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] + 4 * v11)); /*0x5e6aff*/
          LoadScenarioClassByIndex(v11); /*0x5e6b06*/
          if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x5e6b10*/
            Session::PrepareGame((HWND)v8); /*0x5e6b17*/
          *(unsigned int *)&HouseClass_Player.__pad_5568[8096] = *(&g_MatrixTransformState + 2228); /*0x5e6b22*/
          LoadScenarioClassByIndex((int)*(&g_MatrixTransformState + 2228)); /*0x5e6b28*/
          LOBYTE(v11) = HandleMultiplayerMapSelection((HWND)v8); /*0x5e6b38*/
          Screen::Capture(1, 0, v11, ebp0); /*0x5e6b3a*/
          if ( !(unsigned char)v11 ) /*0x5e6b41*/
          {
LABEL_28:
            SkirmishSetup::PlayButtonClickAnim((HWND)v8); /*0x5e6b49*/
            ShowWindow((HWND)v8, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog((HWND)aP0, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (unsigned __int16)hWnd == 1771 && !*((unsigned char *)&g_MatrixTransformState + 9144) && (unsigned int)hWnd >> 16 == 1 ) /*0x5e6b96*/
    {
      v16 = aP0; /*0x5e6b9c*/
      v17 = 0; /*0x5e6ba6*/
      v18 = SendDlgItemMessageA((HWND)aP0, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v18 != *(unsigned int *)&stru_830620.__pad_DFC[736] && v18 != -1 ) /*0x5e6bc6*/
      {
        *(unsigned int *)&stru_830620.__pad_DFC[736] = v18; /*0x5e6bd9*/
        v19 = SendDlgItemMessageA((HWND)v16, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v19 != -1 ) /*0x5e6be3*/
        {
          v20 = (char *)SendDlgItemMessageA((HWND)v16, 1771, 0x199u, v19, 0); /*0x5e6bf8*/
          if ( v20 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&aP0); /*0x5e6c06*/
            if ( (*(unsigned __int8 (**)(char *, SkirmishDialog **))(*(unsigned int *)v20 + 12))(v20, &aP0) ) /*0x5e6c14*/
            {
              (*(void (**)(char *))(*(unsigned int *)v20 + 16))(v20); /*0x5e6c23*/
              MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6c2c*/
              var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6c36*/
              v46 = (CCINIClass *)10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              a2 = *(unsigned int *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6c4c*/
              if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  a4 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] + 4 * v17); /*0x5e6c5d*/
                  if ( MapPreview::Check(v20, a4) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(var18, &a4); /*0x5e6c73*/
                  ++v17; /*0x5e6c7c*/
                }
                while ( v17 < a2 ); /*0x5e6c7f*/
              }
              v21 = GetDlgItem((HWND)v16, 1363); /*0x5e6c8d*/
              (*(void (**)(char *, HWND, unsigned int *, unsigned int))(*(unsigned int *)v20 + 76))(v20, v21, var18, 0); /*0x5e6c9b*/
              var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6ca2*/
              VectorClass::Cleanup3((int)var18); /*0x5e6caa*/
              LOBYTE(a4) = (*(int (**)(char *))(*(unsigned int *)v20 + 60))(v20); /*0x5e6cbc*/
              v22 = GetDlgItem((HWND)v16, 1411); /*0x5e6cc0*/
              EnableWindow(v22, (unsigned __int8)a4); /*0x5e6cce*/
              if ( &g_MatrixTransformState != (CoordStruct **)-8376 ) /*0x5e6cdb*/
              {
                v23 = 0; /*0x5e6cdd*/
                esi43 = 0; /*0x5e6cee*/
                a4 = SendDlgItemMessageA((HWND)v16, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( a4 > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v25 = (const wchar_t *)SendDlgItemMessageA((HWND)v16, 1363, 0x199u, esi43, 0); /*0x5e6d06*/
                    if ( !wcscmp(v25, (const wchar_t *)&g_MatrixTransformState + 4188) ) /*0x5e6d0e*/
                      v23 = esi43; /*0x5e6d1a*/
                    ++esi43; /*0x5e6d20*/
                  }
                  while ( esi43 < a4 ); /*0x5e6d23*/
                }
                SendDlgItemMessageA((HWND)v16, 1363, 0x186u, v23, 0); /*0x5e6d33*/
                SendDlgItemMessageA((HWND)v16, 1363, 0x197u, v23, 0); /*0x5e6d43*/
              }
              v24 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e6d59*/
              eax48 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( eax48 == -1 || (v28 = (const wchar_t *)SendDlgItemMessageA((HWND)v24, 1363, 0x199u, eax48, 0)) == 0 ) /*0x5e6d74*/
              {
                *((unsigned short *)&g_MatrixTransformState + 4188) = 0; /*0x5e6da4*/
                *((unsigned char *)&g_MatrixTransformState + 9145) = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((void **)&aP0); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy((wchar_t *)&g_MatrixTransformState + 4188, v28); /*0x5e6d7c*/
                *((unsigned char *)&g_MatrixTransformState + 9145) = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((void **)&aP0); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !*((unsigned char *)&g_MatrixTransformState + 9145) ) /*0x5e6dcc*/
              {
                v27 = WideString::GetOrEmpty((wchar_t **)&aP0); /*0x5e6dd4*/
                ShowDialogConfirm(v27, 0, 0, 0); /*0x5e6ddd*/
                *((unsigned char *)&g_MatrixTransformState + 9145) = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA((HWND)v16, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((void **)&aP0); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( a2 == 1175 ) /*0x5e6e12*/
  {
    *((unsigned char *)&g_MatrixTransformState + 9144) = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]); /*0x5e6eb8*/
    v37 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v38 = aP0; /*0x5e6ec7*/
    v39 = GetDlgItem((HWND)aP0, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v39, *(unsigned int *)(First + 40)); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor(var18, 0, 0); /*0x5e6ef1*/
      var18[0] = &vt_DynamicVectorClass_MultiMission_const; /*0x5e6efb*/
      v46 = (CCINIClass *)10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      a4 = *(unsigned int *)&HouseClass_Player.__pad_5568[9764]; /*0x5e6f11*/
      if ( *(int *)&HouseClass_Player.__pad_5568[9764] > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          aP0 = *(SkirmishDialog **)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] + 4 * v37); /*0x5e6f23*/
          if ( MapPreview::Check((char *)First, (int)aP0) ) /*0x5e6f27*/
            SkirmishVector::PushBack(var18, &aP0); /*0x5e6f39*/
          ++v37; /*0x5e6f42*/
        }
        while ( v37 < a4 ); /*0x5e6f45*/
      }
      eax71 = GetDlgItem((HWND)v38, 1363); /*0x5e6f4d*/
      (*(void (**)(int, HWND, unsigned int *, unsigned int))(*(unsigned int *)First + 76))(First, eax71, var18, 0); /*0x5e6f5b*/
      var18[0] = &vt_VectorClass_MultiMission_const; /*0x5e6f62*/
      VectorClass::Cleanup3((int)var18); /*0x5e6f6a*/
    }
    LOBYTE(aP0) = (*(int (**)(int))(*(unsigned int *)First + 60))(First); /*0x5e6f7c*/
    v41 = GetDlgItem((HWND)v38, 1411); /*0x5e6f80*/
    EnableWindow(v41, (unsigned __int8)aP0); /*0x5e6f8e*/
    v40 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x5e6f94*/
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8096] != -1 /*0x5e6fa8*/
      && *(int *)&HouseClass_Player.__pad_5568[8096] < *(int *)&HouseClass_Player.__pad_5568[9764] )
    {
      aP0 = *(SkirmishDialog **)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] /*0x5e6fb5*/
                               + 4 * *(unsigned int *)&HouseClass_Player.__pad_5568[8096]);
      if ( aP0 ) /*0x5e6fb9*/
      {
        v43 = 0; /*0x5e6fc1*/
        v44 = 0; /*0x5e6fd2*/
        a4 = SendDlgItemMessageA((HWND)v38, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( a4 > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v45 = (SkirmishDialog *)SendDlgItemMessageA((HWND)v38, 1363, 0x199u, v44, 0); /*0x5e6fea*/
            if ( v45 == aP0 ) /*0x5e6ff0*/
              v43 = v44; /*0x5e6ff2*/
            ++v44; /*0x5e6ff8*/
          }
          while ( v44 < a4 ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA((HWND)v38, 1363, 0x186u, v43, 0); /*0x5e700b*/
        SendDlgItemMessageA((HWND)v38, 1363, 0x197u, v43, 0); /*0x5e701b*/
        v40 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x5e701d*/
      }
    }
    *(&g_MatrixTransformState + 2228) = (CoordStruct *)v40; /*0x5e7022*/
    *(&g_MatrixTransformState + 1992) = (CoordStruct *)-1; /*0x5e7027*/
    *((unsigned char *)&g_MatrixTransformState + 9144) = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( a2 != 1257 ) /*0x5e6e1b*/
  {
    if ( a2 == 1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, v6, ebp0); /*0x5e6e2a*/
      Dialog::EnumAndCleanup((HWND)aP0); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v30 = a4; /*0x5e6e44*/
  v31 = (void **)(a4 + 8); /*0x5e6e51*/
  DlgCtrlID = (ReferenceCounted *)GetDlgCtrlID(*(HWND *)a4); /*0x5e6e58*/
  WideString::Assign_Alt(v31, 0); /*0x5e6e5a*/
  if ( DlgCtrlID == (ReferenceCounted *)1771 ) /*0x5e6e65*/
  {
    esi60 = *(unsigned int *)(v30 + 4); /*0x5e6e67*/
    if ( esi60 != -1 ) /*0x5e6e6d*/
    {
      v34 = SendDlgItemMessageA((HWND)aP0, 1771, 0x199u, esi60, 0); /*0x5e6e7d*/
      if ( v34 ) /*0x5e6e85*/
      {
        v33 = WideString::GetOrEmpty_Alt((wchar_t **)(v34 + 36)); /*0x5e6e8a*/
        WideString::Assign_Alt(v31, (wchar_t *)v33); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/

}
// 0x608260
int SkirmishSetup::PlayButtonClickAnim()
{

  HWND *v2; // eax
  unsigned int *v4; // eax
  bool v5; // bl
  bool v6; // al
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x60826a*/
    return 0; /*0x60826a*/
  v7 = hWnd; /*0x608278*/
  if ( !MEMORY[0xAC1B04] ) /*0x60827e*/
    return 0; /*0x60827e*/
  v2 = (HWND *)*((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60829f*/
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
  v5 = *((unsigned char *)v4 + 189) && v4[44] == 1; /*0x6082d1*/
  v6 = IsWindowVisible(hWnd); /*0x6082eb*/
  if ( !v5 || !v6 ) /*0x6082f4*/
    return 0; /*0x6082b8*/
  PlayVocClass(MEMORY[0x8871E0]->VoiceIFVRepair, 0x2000, 1.0, 0); /*0x60830f*/
  LOBYTE(v7) = IsWindowEnabled(hWnd); /*0x608329*/
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
  g_UIControlState = v5; /*0x5e8621*/
  Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5e8626*/
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
