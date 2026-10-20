// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int SetupSkirmishSpawnLocationEntry(HWND hDlg, int nIDDlgItem);  // x4:ida@0x6adc20
} // namespace gamemd

// 0x6ACEE0
namespace gamemd {  // G42.18 ns repair
void DialogSkirmishFunc_UpdateMultiEngineer(Session *hWnd, int nIDDlgItem, int a3, int a4)
{

  int v6; // edi
  HWND DlgItem; // eax
  int v8; // esi
  LRESULT v9; // eax
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  int v17; // edi
  int v18; // esi
  LRESULT v19; // eax
  int ResourceID4CSF; // eax
  int ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  ObjectClass *v25; // esi
  int *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int ComboBoxSelected; // eax
  ObjectClass *v30; // eax
  ObjectClass *v31; // esi
  int v32; // edi
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  ObjectClass *v36; // edi
  int v37; // esi
  int v38; // ebx
  LRESULT v39; // eax
  LRESULT v40; // esi
  int v41; // ebx
  int ComboBoxSelectedRaw; // eax
  int v43; // edx
  int v44; // esi
  int v45; // edi
  int v46; // ebx
  int v47; // eax
  unsigned int *v48; // esi
  char *v49; // eax
  int v50; // eax
  HWND v51; // eax
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  HWND v55; // eax
  HWND v56; // eax
  HWND v57; // eax
  HWND v58; // eax
  Skirmish *v59; // esi
  unsigned int v60; // kr18_4
  int v61; // ebx
  char *v62; // esi
  unsigned int v63; // ecx
  ObjectClass *v64; // esi
  Skirmish *v65; // esi
  ObjectClass *v66; // eax
  Skirmish *v67; // eax
  int PlayerCountMap; // edi
  int ptr_8; // ecx
  WideString *v70; // eax
  Skirmish *v71; // esi
  ObjectClass *v72; // eax
  Skirmish *v73; // eax
  int v74; // eax
  wchar_t *v75; // [esp-10h] [ebp-270h]
  Dialog *v76; // [esp+0h] [ebp-260h]
  wchar_t *Format; // [esp+10h] [ebp-250h]
  wchar_t *Formata; // [esp+10h] [ebp-250h]
  wchar_t *Formatb; // [esp+10h] [ebp-250h]
  wchar_t *Formatc; // [esp+10h] [ebp-250h]
  int nIDDlgItema; // [esp+14h] [ebp-24Ch]
  int nIDDlgItemb; // [esp+14h] [ebp-24Ch]
  DeleteAndZero v83; // [esp+18h] [ebp-248h] BYREF
  const wchar_t *v84; // [esp+24h] [ebp-23Ch]
  const wchar_t *v85; // [esp+28h] [ebp-238h]
  int *WindowLongA; // [esp+2Ch] [ebp-234h]
  const wchar_t *v87; // [esp+30h] [ebp-230h]
  const wchar_t *v88; // [esp+34h] [ebp-22Ch]
  char lParam[40]; // [esp+38h] [ebp-228h] BYREF
  int Destination[128]; // [esp+60h] [ebp-200h] BYREF

  v83.DeleteAndZero_field_0x04 = nIDDlgItem; /*0x6acef1*/
  WindowLongA = (int *)GetWindowLongA((HWND)hWnd, 8); /*0x6acf01*/
  if ( nIDDlgItem > 1320 )
  {
    if ( nIDDlgItem > 1697 )
    {
      switch ( nIDDlgItem ) /*0x6adb92*/
      {
        case 1698: /*0x6adb92*/
          goto LABEL_153;
        case 1699: /*0x6adb92*/
        case 1700: /*0x6adb92*/
        case 1701: /*0x6adb92*/
        case 1702: /*0x6adb92*/
        case 1703: /*0x6adb92*/
        case 1704: /*0x6adb92*/
        case 1706: /*0x6adb92*/
        case 1707: /*0x6adb92*/
          if ( a4 == 1 ) /*0x6adbc1*/
            FillComboBoxSides((HWND)hWnd, nIDDlgItem); /*0x6adbc7*/
          break; /*0x6adbc7*/
        default:
          return;
      }
    }
    else
    {
      switch ( nIDDlgItem )
      {
        case 1697:
LABEL_151:
          v74 = CountryCombo::IDToIndex((CountryCombo *)nIDDlgItem); /*0x6adb62*/
          sub_4E3690((HWND)hWnd, v74); /*0x6adb6d*/
          break;
        case 1450:
          Formatc = *(wchar_t **)stru_A8B250.__pad_0; /*0x6ad8f2*/
          v60 = strlen(byte_A8B8E0) + 1; /*0x6ad8ff*/
          v61 = *(unsigned int *)&stru_A8B250.__pad_0[4]; /*0x6ad905*/
          memcpy(Destination, byte_A8B8E0, 4 * (v60 >> 2)); /*0x6ad919*/
          v62 = &byte_A8B8E0[4 * (v60 >> 2)]; /*0x6ad919*/
          v63 = v60 & 3; /*0x6ad91d*/
          memcpy(&Destination[v60 >> 2], v62, v63); /*0x6ad920*/
          v64 = (ObjectClass *)&v62[v63]; /*0x6ad920*/
          wcscpy((wchar_t *)Destination, (const wchar_t *)&dword_A8B320 + 1); /*0x6ad927*/
          (v76)->IdleProcess(v64); /*0x6ad931*/
          ShowWindow((HWND)hWnd, 0); /*0x6ad93f*/
          if ( SkirmishDialog::Show(g_hWnd, v61, (int)hWnd) == 2 ) /*0x6ad94f*/
          {
            *(unsigned int *)stru_A8B250.__pad_0 = Formatc; /*0x6ad95b*/
            *(unsigned int *)&stru_A8B250.__pad_0[4] = v61; /*0x6ad961*/
            LoadScenarioClassByIndex(v61); /*0x6ad967*/
            Session::PrepareGame(hWnd); /*0x6ad96e*/
            ShowWindow((HWND)hWnd, 5); /*0x6ad976*/
            if ( (unsigned __int8)IsRandMap::Sed(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4])) ) /*0x6ad986*/
            {
              v65 = g_UIControlState; /*0x6ad995*/
              if ( g_UIControlState ) /*0x6ad99d*/
              {
                ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6ad9a1*/
                __3_YAXPAX_Z(v65); /*0x6ad9a7*/
              }
              v66 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x6ad9b1*/
              if ( v66 ) /*0x6ad9bb*/
                v67 = (Skirmish *)unknown_libname_27(v66); /*0x6ad9bf*/
              else
                v67 = 0; /*0x6ad9c6*/
              g_UIControlState = v67; /*0x6ad9cf*/
              Surface::LoadToSurfaceSHP((Surface *)v67, ExistingFileName); /*0x6ad9d4*/
              if ( !*(unsigned int *)g_UIControlState ) /*0x6ad9df*/
                Session::PrepareGame(hWnd); /*0x6ad9e6*/
              InvalidateRect((HWND)hWnd, 0, 0); /*0x6ad9f0*/
              InvalidateRect((HWND)hWnd, 0, 0); /*0x6ad9f7*/
            }
            else
            {
              Session::PrepareGame(hWnd); /*0x6ada08*/
              InvalidateRect((HWND)hWnd, 0, 0); /*0x6ada12*/
            }
          }
          else
          {
            PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x6ada32*/
            if ( !(*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C) /*0x6ada4b*/
              || (ptr_8 = dword_A8B230[127].ptr_8, ptr_8 > PlayerCountMap) )
            {
              ptr_8 = PlayerCountMap; /*0x6ada4d*/
            }
            ResetLobbyFactionTable(ptr_8); /*0x6ada4f*/
            Lobby::InvalidateFactionCombos((Lobby *)hWnd); /*0x6ada56*/
            Lobby::InvalidatePlayerSlots((Lobby *)hWnd); /*0x6ada5d*/
            Skirmish_Setup_6ADDF0((HWND)hWnd, v61, *(int *)&stru_A8B250.__pad_0[4]); /*0x6ada6d*/
            ShowWindow((HWND)hWnd, 5); /*0x6ada75*/
            if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) ) /*0x6ada7d*/
            {
              v70 = (WideString *)MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x6ada90*/
              SetDialogPlayerName((HWND)hWnd, v70); /*0x6ada99*/
              Dialog::ShowPlayerName((Dialog *)hWnd); /*0x6adaa0*/
              Skirmish::EnableSpawnButtons(0); /*0x6adaa7*/
              if ( (unsigned __int8)IsRandMap::Sed(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4])) ) /*0x6adaba*/
              {
                v71 = g_UIControlState; /*0x6adac3*/
                if ( g_UIControlState ) /*0x6adacb*/
                {
                  ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6adacf*/
                  __3_YAXPAX_Z(v71); /*0x6adad5*/
                  v72 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x6adadf*/
                  if ( v72 ) /*0x6adae9*/
                    v73 = (Skirmish *)unknown_libname_27(v72); /*0x6adaed*/
                  else
                    v73 = 0; /*0x6adaf4*/
                  g_UIControlState = v73; /*0x6adafd*/
                  Surface::LoadToSurfaceSHP((Surface *)v73, ExistingFileName); /*0x6adb02*/
                  v71 = g_UIControlState; /*0x6adb07*/
                }
                if ( !*(unsigned int *)v71 ) /*0x6adb0d*/
                  Session::PrepareGame(hWnd); /*0x6adb14*/
                InvalidateRect((HWND)hWnd, 0, 0); /*0x6adb1e*/
              }
              else
              {
                Session::PrepareGame(hWnd); /*0x6adb33*/
              }
            }
            else
            {
              *(unsigned int *)&stru_A8B250.__pad_0[4] = v61; /*0x6adb4b*/
              *(unsigned int *)stru_A8B250.__pad_0 = Formatc; /*0x6adb52*/
            }
          }
          break;
        case 1472:
        case 1559:
          v6 = 0; /*0x6acf82*/
          if ( !a4 )
          {
            if ( nIDDlgItem == 1559 ) /*0x6acf92*/
            {
              DlgItem = GetDlgItem((HWND)hWnd, 1559); /*0x6acf97*/
              EnableWindow(DlgItem, 0); /*0x6acf9e*/
            }
            Format = (wchar_t *)ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x6acfb5*/
            nIDDlgItema = 0; /*0x6acfb9*/
            do
            {
              if ( v6 )
              {
                switch ( v6 )
                {
                  case 1:
                    v8 = 1294; /*0x6acfcd*/
                    break;
                  case 2:
                    v8 = 1302; /*0x6acfd9*/
                    break;
                  case 3:
                    v8 = 1306; /*0x6acfe5*/
                    break;
                  case 4:
                    v8 = 1307; /*0x6acff1*/
                    break;
                  case 5:
                    v8 = 1308; /*0x6acffd*/
                    break;
                  default:
                    v8 = v6 != 6 ? -1 : 1309;
                    break;
                }
              }
              else
              {
                v8 = 1291; /*0x6acfc1*/
              }
              v9 = SendDlgItemMessageA((HWND)hWnd, v8, 0x147u, 0, 0); /*0x6ad024*/
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v8, 0x150u, v9, 0) <= 2 ) /*0x6ad034*/
                ++nIDDlgItema; /*0x6ad040*/
              ++v6; /*0x6ad044*/
            }
            while ( v6 < 7 );
            *(unsigned int *)&stru_A8B250.__pad_0[36] = nIDDlgItema; /*0x6ad052*/
            v10 = nIDDlgItema + 1; /*0x6ad058*/
            if ( v83.DeleteAndZero_field_0x04 == 1559 )
            {
              if ( (int)Format < v10 ) /*0x6ad071*/
              {
                StringCSF = GetStringCSF(aTxtScenarioToo, 0, g_Str_File_Skirmish_cpp, 1079); /*0x6ad085*/
                swprintf((wchar_t *const)Destination, (const size_t)StringCSF, Format); /*0x6ad090*/
                v85 = asc_82083C; /*0x6ad09f*/
                v12 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Skirmish_cpp, 1080); /*0x6ad0b7*/
                Dialog::ShowMessageBox(Destination, v12, 0, 0, 0, (int)v76); /*0x6ad0c6*/
                v13 = GetDlgItem((HWND)hWnd, 1559); /*0x6ad0d3*/
                EnableWindow(v13, 1); /*0x6ad0da*/
                return; /*0x6ad0ea*/
              }
              if ( v10 <= 1 ) /*0x6ad0f0*/
              {
                v14 = GetStringCSF(aTxtNeedAtLeast, 0, g_Str_File_Skirmish_cpp, 1087); /*0x6ad104*/
                swprintf((wchar_t *const)Destination, (const size_t)v14, Format); /*0x6ad10f*/
                v84 = asc_82083C; /*0x6ad11e*/
                v15 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Skirmish_cpp, 1088); /*0x6ad136*/
                Dialog::ShowMessageBox(Destination, v15, 0, 0, 0, (int)v76); /*0x6ad145*/
                v16 = GetDlgItem((HWND)hWnd, 1559); /*0x6ad152*/
                EnableWindow(v16, 1); /*0x6ad159*/
                return; /*0x6ad169*/
              }
              if ( GetComboBoxSelectedRaw2((HWND)hWnd, 1901, -1) >= 0 )
              {
                v17 = 0; /*0x6ad182*/
                while ( 1 )
                {
                  if ( v17 )
                  {
                    switch ( v17 )
                    {
                      case 1:
                        v18 = 1294; /*0x6ad194*/
                        break;
                      case 2:
                        v18 = 1302; /*0x6ad1a0*/
                        break;
                      case 3:
                        v18 = 1306; /*0x6ad1ac*/
                        break;
                      case 4:
                        v18 = 1307; /*0x6ad1b8*/
                        break;
                      default:
                        v18 = v17 == 5 ? 1308 : v17 != 6 ? -1 : 1309;
                        break;
                    }
                  }
                  else
                  {
                    v18 = 1291; /*0x6ad188*/
                  }
                  v19 = SendDlgItemMessageA((HWND)hWnd, v18, 0x147u, 0, 0); /*0x6ad1eb*/
                  if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v18, 0x150u, v19, 0) <= 2 ) /*0x6ad1fb*/
                  {
                    ResourceID4CSF = GetResourceID4CSF((ObjectClass *)(v17 + 1)); /*0x6ad20c*/
                    ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)hWnd, ResourceID4CSF, -1); /*0x6ad223*/
                    if ( GetComboBoxSelectedRaw2((HWND)hWnd, 1901, -1) != ComboBoxSelectedRaw2 ) /*0x6ad22c*/
                      break; /*0x6ad22c*/
                  }
                  if ( ++v17 >= 7 ) /*0x6ad236*/
                  {
                    v22 = GetStringCSF(g_Str_TXT_CANNOT_ALLY, 0, g_Str_File_Skirmish_cpp, 1111); /*0x6ad252*/
                    swprintf((wchar_t *const)Destination, (const size_t)v22, Format); /*0x6ad25d*/
                    v88 = asc_82083C; /*0x6ad26c*/
                    v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Skirmish_cpp, 1112); /*0x6ad284*/
                    Dialog::ShowMessageBox(Destination, v23, 0, 0, 0, (int)v76); /*0x6ad293*/
                    v24 = GetDlgItem((HWND)hWnd, 1559); /*0x6ad2a0*/
                    EnableWindow(v24, 1); /*0x6ad2a7*/
                    return; /*0x6ad2b7*/
                  }
                }
              }
            }
            v25 = dword_A8B23C; /*0x6ad2ba*/
            unknown_libname_74(&v83); /*0x6ad2c4*/
            if ( !(*(unsigned __int8 (**)(ObjectClass *, DeleteAndZero *))(v25->ptr_0 + 20))(v25, &v83) ) /*0x6ad2d2*/
            {
              if ( v83.DeleteAndZero_field_0x04 == 1559 ) /*0x6ad2e1*/
              {
                v87 = asc_82083C; /*0x6ad2fa*/
                v75 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Skirmish_cpp, 1129); /*0x6ad30b*/
                v26 = (int *)WideString::GetOrEmpty((WideString *)&v83); /*0x6ad30c*/
                Dialog::ShowMessageBox(v26, v75, 0, 0, 0, (int)v76); /*0x6ad316*/
                v27 = GetDlgItem((HWND)hWnd, 1559); /*0x6ad323*/
                EnableWindow(v27, 1); /*0x6ad32a*/
                DeleteAndZero::Alt(&v83); /*0x6ad334*/
                return; /*0x6ad343*/
              }
              MultiplayerGameMode::GetFirst(); /*0x6ad346*/
            }
            dword_A8B3C4 = *(unsigned int *)stru_A8B250.__pad_0; /*0x6ad35e*/
            dword_A8B3C8 = *(unsigned int *)&stru_A8B250.__pad_0[4]; /*0x6ad364*/
            if ( *(int *)&stru_A8B250.__pad_0[4] >= dword_A8B8D8 ) /*0x6ad369*/
              dword_A8B3C8 = 0; /*0x6ad36b*/
            v28 = GetDlgItem((HWND)hWnd, 1696); /*0x6ad37b*/
            SendMessageA(v28, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x6ad38e*/
            CopyWideToChar(unk_A8B380, lParam, -1); /*0x6ad39f*/
            ComboBoxSelected = GetComboBoxSelected((HWND)hWnd, 1697, -1); /*0x6ad3ad*/
            SessionClass::AssignSide((SessionClass *)&dword_A8B238, ComboBoxSelected, 1); /*0x6ad3ba*/
            v30 = 0; /*0x6ad3bf*/
            do
            {
              v31 = (ObjectClass *)v30->ptr_0 + 1); /*0x6ad3c3*/
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  v32 = 1294; /*0x6ad3d4*/
                }
                else if ( v30 == 2 )
                {
                  v32 = 1302; /*0x6ad3e0*/
                }
                else if ( v30 == 3 )
                {
                  v32 = 1306; /*0x6ad3ec*/
                }
                else if ( v30 == 4 )
                {
                  v32 = 1307; /*0x6ad3f8*/
                }
                else if ( v30 == 5 )
                {
                  v32 = 1308; /*0x6ad404*/
                }
                else
                {
                  v32 = v30 != 6 ? -1 : 1309;
                }
              }
              else
              {
                v32 = 1291; /*0x6ad3c8*/
              }
              ResourceID2CSF = GetResourceID2CSF(v31); /*0x6ad427*/
              Formata = (wchar_t *)GetResourceIDCSF(v31); /*0x6ad430*/
              nIDDlgItemb = GetResourceID3CSF(v31); /*0x6ad43b*/
              v83.DeleteAndZero_field_0x08 = GetResourceID4CSF(v31); /*0x6ad444*/
              v34 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0); /*0x6ad453*/
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v32, 0x150u, v34, 0) <= 2 ) /*0x6ad46b*/
              {
                v35 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0); /*0x6ad482*/
                *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v31 + 44] = SendDlgItemMessageA( /*0x6ad49e*/
                                                                          (HWND)hWnd,
                                                                          v32,
                                                                          0x150u,
                                                                          v35,
                                                                          0);
                *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v31 + 76] = GetComboBoxSelected( /*0x6ad4ac*/
                                                                          (HWND)hWnd,
                                                                          ResourceID2CSF,
                                                                          -1);
                *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v31 + 108] = GetComboBoxSelectedRaw( /*0x6ad4c0*/
                                                                           (HWND)hWnd,
                                                                           (int)Formata,
                                                                           -1);
                *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v31 + 140] = SetComboBoxSelection( /*0x6ad4d4*/
                                                                           (HWND)hWnd,
                                                                           nIDDlgItemb,
                                                                           -1);
                *(unsigned int *)&stru_A8B250.__pad_0[4 * (unsigned int)v31 + 172] = GetComboBoxSelectedRaw2( /*0x6ad4e6*/
                                                                           (HWND)hWnd,
                                                                           v83.DeleteAndZero_field_0x08,
                                                                           -1);
              }
              v30 = v31; /*0x6ad4ed*/
            }
            while ( (int)v31 < 7 );
            v36 = 0; /*0x6ad4f8*/
            Formatb = (wchar_t *)&unk_A8B3F0; /*0x6ad4fa*/
            do
            {
              if ( v36 )
              {
                if ( v36 == 1 )
                {
                  v37 = 1294; /*0x6ad512*/
                }
                else if ( v36 == 2 )
                {
                  v37 = 1302; /*0x6ad51e*/
                }
                else if ( v36 == 3 )
                {
                  v37 = 1306; /*0x6ad52a*/
                }
                else if ( v36 == 4 )
                {
                  v37 = 1307; /*0x6ad536*/
                }
                else if ( v36 == 5 )
                {
                  v37 = 1308; /*0x6ad542*/
                }
                else
                {
                  v37 = v36 != 6 ? -1 : 1309;
                }
              }
              else
              {
                v37 = 1291; /*0x6ad506*/
              }
              v36 = &v36->AbstractClass_1; /*0x6ad55e*/
              v38 = GetResourceID2CSF(v36); /*0x6ad568*/
              v83.DeleteAndZero_field_0x08 = GetResourceIDCSF(v36); /*0x6ad56f*/
              v39 = SendDlgItemMessageA((HWND)hWnd, v37, 0x147u, 0, 0); /*0x6ad57e*/
              v40 = SendDlgItemMessageA((HWND)hWnd, v37, 0x150u, v39, 0); /*0x6ad59a*/
              v41 = GetComboBoxSelected((HWND)hWnd, v38, -1); /*0x6ad5a3*/
              ComboBoxSelectedRaw = GetComboBoxSelectedRaw((HWND)hWnd, v83.DeleteAndZero_field_0x08, -1); /*0x6ad5ab*/
              if ( v40 == -1 )
              {
                v43 = 1; /*0x6ad5b5*/
              }
              else if ( v40 )
              {
                if ( v40 == 1 )
                  v43 = 5; /*0x6ad5cc*/
                else
                  v43 = v40 != 2 ? 0 : 6;
              }
              else
              {
                v43 = 4; /*0x6ad5c0*/
              }
              *((unsigned int *)Formatb - 1) = v43; /*0x6ad5e3*/
              *(unsigned int *)Formatb = v41; /*0x6ad5e6*/
              *((unsigned int *)Formatb + 1) = ComboBoxSelectedRaw; /*0x6ad5e8*/
              Formatb += 6; /*0x6ad5f4*/
            }
            while ( (int)&v36->ptr_0 + 1 < 8 );
            v44 = GetComboBoxSelectedRaw((HWND)hWnd, 1698, -1); /*0x6ad615*/
            v45 = SetComboBoxSelection((HWND)hWnd, 1699, -1); /*0x6ad625*/
            v46 = GetComboBoxSelectedRaw2((HWND)hWnd, 1901, -1); /*0x6ad631*/
            SessionClass::AssignColor((SessionClass *)&dword_A8B238, v44, 1); /*0x6ad636*/
            dword_A8B39C = v45; /*0x6ad63b*/
            dword_A8B3A4 = v46; /*0x6ad641*/
            v47 = __2_YAPAXI_Z(0x85u); /*0x6ad64c*/
            v48 = (unsigned int *)v47; /*0x6ad651*/
            if ( v47 ) /*0x6ad658*/
            {
              Waypoint::InitInvalid((Waypoint *)(v47 + 40)); /*0x6ad661*/
              v49 = CharToWideString(unk_A8B380); /*0x6ad66b*/
              wcscpy((wchar_t *)v48, (const wchar_t *)v49); /*0x6ad672*/
              *(unsigned int *)((char *)v48 + 75) = dword_A8B3AC; /*0x6ad67f*/
              *(unsigned int *)((char *)v48 + 83) = dword_A8B394; /*0x6ad688*/
              *(unsigned int *)((char *)v48 + 91) = dword_A8B39C; /*0x6ad691*/
              *(unsigned int *)((char *)v48 + 99) = dword_A8B3A4; /*0x6ad699*/
              *(unsigned int *)((char *)v48 + 115) = -1; /*0x6ad69c*/
              if ( *(int *)&stru_A8D804.__pad_3D[579] < *(int *)&stru_A8D804.__pad_3D[571] /*0x6ad6da*/
                || (stru_A8D804.__pad_3D[576] || !*(unsigned int *)&stru_A8D804.__pad_3D[571])
                && *(int *)&stru_A8D804.__pad_3D[583] > 0
                && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A8D804.__pad_3D[563] + 8))(
                     &stru_A8D804.__pad_3D[563],
                     *(unsigned int *)&stru_A8D804.__pad_3D[571] + *(unsigned int *)&stru_A8D804.__pad_3D[583],
                     0) )
              {
                v50 = (*(unsigned int *)&stru_A8D804.__pad_3D[579])++; /*0x6ad6e7*/
                *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v50) = v48; /*0x6ad6f6*/
              }
            }
            Player::RandomAssign(&dword_A8B238); /*0x6ad6fe*/
            v51 = GetDlgItem((HWND)hWnd, 1321); /*0x6ad70f*/
            if ( v51 ) /*0x6ad713*/
            {
              *(unsigned int *)&stru_A8B250.__pad_0[24] = 6 - SendMessageA(v51, 0x400u, 0, 0); /*0x6ad72e*/
              *(unsigned int *)&stru_A8E960.altNextScenario[252] = *(unsigned int *)&stru_A8B250.__pad_0[24]; /*0x6ad734*/
            }
            v52 = GetDlgItem((HWND)hWnd, 1297); /*0x6ad748*/
            if ( v52 ) /*0x6ad74c*/
              *(unsigned int *)&stru_A8B250.__pad_0[12] = SendMessageA(v52, 0x400u, 0, 0); /*0x6ad75a*/
            v53 = GetDlgItem((HWND)hWnd, 1292); /*0x6ad765*/
            if ( v53 ) /*0x6ad769*/
              *(unsigned int *)&stru_A8B250.__pad_0[32] = SendMessageA(v53, 0x400u, 0, 0); /*0x6ad777*/
            dword_A8B3CC = *(unsigned int *)&stru_A8B250.__pad_0[24]; /*0x6ad793*/
            dword_A8B3D0 = *(unsigned int *)&stru_A8B250.__pad_0[12]; /*0x6ad799*/
            dword_A8B3D4 = *(unsigned int *)&stru_A8B250.__pad_0[32]; /*0x6ad79e*/
            v54 = GetDlgItem((HWND)hWnd, 1358); /*0x6ad7a4*/
            if ( v54 ) /*0x6ad7a8*/
              stru_A8B250.__pad_0[18] = SendMessageA(v54, 0xF0u, 0, 0) == 1; /*0x6ad7bc*/
            v55 = GetDlgItem((HWND)hWnd, 1690); /*0x6ad7c8*/
            if ( v55 ) /*0x6ad7cc*/
              stru_A8B250.__pad_0[19] = SendMessageA(v55, 0xF0u, 0, 0) == 1; /*0x6ad7e0*/
            v56 = GetDlgItem((HWND)hWnd, 1693); /*0x6ad7eb*/
            if ( v56 ) /*0x6ad7ef*/
              stru_A8B250.__pad_0[20] = SendMessageA(v56, 0xF0u, 0, 0) == 1; /*0x6ad803*/
            v57 = GetDlgItem((HWND)hWnd, 1683); /*0x6ad80f*/
            if ( v57 ) /*0x6ad813*/
              LOBYTE(dword_A8B320) = SendMessageA(v57, 0xF0u, 0, 0) == 1; /*0x6ad827*/
            v58 = GetDlgItem((HWND)hWnd, 1686); /*0x6ad833*/
            if ( v58 ) /*0x6ad837*/
              stru_A8B250.__pad_0[17] = SendMessageA(v58, 0xF0u, 0, 0) == 1; /*0x6ad848*/
            v59 = g_UIControlState; /*0x6ad85a*/
            byte_A8B3D8 = stru_A8B250.__pad_0[18]; /*0x6ad866*/
            byte_A8B3D9 = stru_A8B250.__pad_0[19]; /*0x6ad870*/
            byte_A8B3DA = stru_A8B250.__pad_0[20]; /*0x6ad87e*/
            byte_A8B3DB = dword_A8B320; /*0x6ad884*/
            byte_A8B3DC = stru_A8B250.__pad_0[17]; /*0x6ad889*/
            byte_A8B31F = 0; /*0x6ad88f*/
            stru_A8B250.__pad_0[16] = 1; /*0x6ad896*/
            byte_A8B31D = 0; /*0x6ad89d*/
            stru_A8B250.__pad_0[28] = 0; /*0x6ad8a4*/
            if ( g_UIControlState ) /*0x6ad8ab*/
            {
              ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6ad8af*/
              __3_YAXPAX_Z(v59); /*0x6ad8b5*/
              g_UIControlState = 0; /*0x6ad8bd*/
            }
            *WindowLongA = v83.DeleteAndZero_field_0x04; /*0x6ad8d3*/
            DeleteAndZero::Alt(&v83); /*0x6ad8d5*/
          }
          break;
      }
    }
  }
  else if ( nIDDlgItem >= 1314 ) /*0x6acf0d*/
  {
LABEL_153:
    if ( a4 == 1 ) /*0x6adba1*/
      FillColorComboBoxUI((HWND)hWnd, nIDDlgItem); /*0x6adba7*/
  }
  else
  {
    switch ( nIDDlgItem ) /*0x6acf2a*/
    {
      case 1291: /*0x6acf2a*/
      case 1294: /*0x6acf2a*/
      case 1302: /*0x6acf2a*/
      case 1306: /*0x6acf2a*/
      case 1307: /*0x6acf2a*/
      case 1308: /*0x6acf2a*/
      case 1309: /*0x6acf2a*/
        SetupSkirmishSpawnLocationEntry((HWND)hWnd, nIDDlgItem); /*0x6acf35*/
        Skirmish::EnableSpawnButtons(0); /*0x6acf3c*/
        break; /*0x6acf4b*/
      case 1296: /*0x6acf2a*/
      case 1299: /*0x6acf2a*/
      case 1300: /*0x6acf2a*/
      case 1310: /*0x6acf2a*/
      case 1311: /*0x6acf2a*/
      case 1312: /*0x6acf2a*/
      case 1313: /*0x6acf2a*/
        goto LABEL_151;
      default:
        return;
    }
  }

}
} // namespace gamemd
