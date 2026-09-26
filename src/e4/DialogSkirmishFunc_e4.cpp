// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x6ACEE0
namespace gamemd {
AbstractClass * * DialogSkirmishFunc_UpdateMultiEngineer(SkirmishDialog * hWnd, int nIDDlgItem, int a3, int a4)
{
  HWND DlgItem; // eax
  LRESULT v9; // eax
  CampaignScore *v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  LRESULT v19; // eax
  int ResourceID4CSF; // eax
  wchar_t *ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  SkirmishDialog *v25; // esi
  CampaignScore *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  LRESULT ComboBoxSelected; // eax
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  LRESULT v39; // eax
  LRESULT v40; // esi
  LRESULT v41; // ebx
  LRESULT ComboBoxSelectedRaw; // eax
  LRESULT v44; // esi
  LRESULT v45; // edi
  LRESULT v46; // ebx
  ObjectClass *v50; // eax
  HWND v51; // eax
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  HWND v55; // eax
  HWND v56; // eax
  HWND v57; // eax
  HWND v58; // eax
  ObjectClass *v59; // esi
  CCINIClass *v60; // ebx
  ObjectClass *v61; // esi
  ObjectClass *v63; // eax
  int PlayerCountMap; // edi
  ObjectClass *v67; // esi
  ObjectClass *v69; // eax
  wchar_t *v71; // [esp-10h] [ebp-270h]
  CampaignScore *v72; // [esp+0h] [ebp-260h]
  int _0c; // [esp+0h] [ebp-260h]
  VectorClass_flat *Format; // [esp+10h] [ebp-250h]
  VectorClass_flat *Formata; // [esp+10h] [ebp-250h]
  VectorClass_flat *Formatb; // [esp+10h] [ebp-250h]
  VectorClass_flat *Formatc; // [esp+10h] [ebp-250h]
  VectorClass_flat *v75; // [esp+14h] [ebp-24Ch]
  VectorClass_flat *ResourceID3; // [esp+14h] [ebp-24Ch]
  wchar_t *v82; // [esp+18h] [ebp-248h] BYREF
  int var244; // [esp+1Ch] [ebp-244h]
  VectorClass_flat *nIDDlgItema; // [esp+20h] [ebp-240h]
  CampaignScore *v85; // [esp+24h] [ebp-23Ch]
  CampaignScore *v86; // [esp+28h] [ebp-238h]
  int *WindowLongA; // [esp+2Ch] [ebp-234h]
  VectorClass_flat *v83; // [esp+30h] [ebp-230h]
  CampaignScore *v89; // [esp+34h] [ebp-22Ch]
  char lParam[40]; // [esp+38h] [ebp-228h] BYREF
  wchar_t Destination[256]; // [esp+60h] [ebp-200h] BYREF

  var244 = nIDDlgItem;
  WindowLongA = (int *)GetWindowLongA((HWND)hWnd, 8);
  if ( nIDDlgItem > 1320 )
  {
    if ( nIDDlgItem > 1697 )
    {
      switch ( nIDDlgItem )
      {
        case 1698:
          goto LABEL_153;
        case 1699:
        case 1700:
        case 1701:
        case 1702:
        case 1703:
        case 1704:
        case 1706:
        case 1707:
          if ( a4 == 1 )
            FillComboBoxSides((HWND)hWnd, nIDDlgItem);
          break;
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
          int v70 = CountryCombo::IDToIndex((void *)nIDDlgItem);
          sub_4E3690((HWND)hWnd, v70);
          break;
        case 1450:
          Formatc = *(VectorClass_flat **)&HouseClass_Player[29956];
          v60 = *(CCINIClass **)&HouseClass_Player[29960];
          strcpy((char *)Destination, &HouseClass_Player[31636]);
          wcscpy(Destination, (const wchar_t *)&HouseClass_Player[30166]);
          Dialog::IdleProcess(hWnd);
          ShowWindow((HWND)hWnd, 0);
          if ( SkirmishDialog::Show(g_hWnd, (int)v60, (int)hWnd) == (SkirmishDialog *)2 )
          {
            *(unsigned int *)&HouseClass_Player[29956] = Formatc;
            *(unsigned int *)&HouseClass_Player[29960] = v60;
            LoadScenarioClassByIndex((int)v60);
            Session::PrepareGame((HWND)hWnd);
            ShowWindow((HWND)hWnd, 5);
            if ( IsRandMap::Sed(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[31616]
                                          + 4 * *(unsigned int *)&HouseClass_Player[29960])) )
            {
              v61 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                RA2_OPDEL(v61);
              }
              unsigned int * v62 = (unsigned int *)operator new(4u);
              if ( v62 )
                v63 = (ObjectClass *)unknown_libname_27(v62);
              ObjectClass *v63 = 0;
              *(&g_MatrixTransformState + 2257) = (CoordStruct *)v63;
              Surface::LoadToSurfaceSHP((char **)v63, stru_829ABC[0]);
              if ( !(*(&g_MatrixTransformState + 2257))->X )
                Session::PrepareGame((HWND)hWnd);
              InvalidateRect((HWND)hWnd, 0, 0);
              InvalidateRect((HWND)hWnd, 0, 0);
            }
            else
            {
              Session::PrepareGame((HWND)hWnd);
              InvalidateRect((HWND)hWnd, 0, 0);
            }
          }
          else
          {
            PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player[29960]);
            if ( !(*(uint8_t (__thiscall **)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 4))(*(unsigned int *)&HouseClass_Player[29936])
  int v65; // ecx
              || (v65 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4580), v65 > PlayerCountMap) )
            {
              v65 = PlayerCountMap;
            }
            ResetLobbyFactionTable(v65);
            Lobby::InvalidateFactionCombos((HWND)hWnd);
            Lobby::InvalidatePlayerSlots((HWND)hWnd);
            Skirmish_Setup_6ADDF0((HWND)hWnd, (int)v60, *(int *)&HouseClass_Player[29960]);
            ShowWindow((HWND)hWnd, 5);
            if ( LoadScenarioClassByIndex(*(int *)&HouseClass_Player[29960]) )
            {
              int v66 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]);
              SetDialogPlayerName((HWND)hWnd, v66);
              Dialog::ShowPlayerName((HWND)hWnd);
              Skirmish::EnableSpawnButtons(0);
              if ( IsRandMap::Sed(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[31616]
                                            + 4 * *(unsigned int *)&HouseClass_Player[29960])) )
              {
                v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                if ( *(&g_MatrixTransformState + 2257) )
                {
                  ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                  RA2_OPDEL(v67);
                  unsigned int * v68 = (unsigned int *)operator new(4u);
                  if ( v68 )
                    v69 = (ObjectClass *)unknown_libname_27(v68);
                  ObjectClass *v69 = 0;
                  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v69;
                  Surface::LoadToSurfaceSHP((char **)v69, stru_829ABC[0]);
                  v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                }
                if ( !*(unsigned int *)v67->__pad_0 )
                  Session::PrepareGame((HWND)hWnd);
                InvalidateRect((HWND)hWnd, 0, 0);
              }
              else
              {
                Session::PrepareGame((HWND)hWnd);
              }
            }
            else
            {
              *(unsigned int *)&HouseClass_Player[29960] = v60;
              *(unsigned int *)&HouseClass_Player[29956] = Formatc;
            }
          }
          break;
        case 1472:
        case 1559:
          int v6 = 0;
          if ( !a4 )
          {
  int v31; // esi
            if ( nIDDlgItem == 1559 )
            {
              DlgItem = GetDlgItem((HWND)hWnd, 1559);
              EnableWindow(DlgItem, 0);
            }
            Format = (VectorClass_flat *)ReadPlayerCountMap(*(int *)&HouseClass_Player[29960]);
            v75 = 0;
            do
            {
  int v8; // esi
              if ( v6 )
              {
                switch ( v6 )
                {
                  case 1:
                    v8 = 1294;
                    break;
                  case 2:
                    v8 = 1302;
                    break;
                  case 3:
                    v8 = 1306;
                    break;
                  case 4:
                    v8 = 1307;
                    break;
                  case 5:
                    v8 = 1308;
                    break;
                  default:
                    v8 = v6 != 6 ? -1 : 1309;
                    break;
                }
              }
              else
              {
                v8 = 1291;
              }
              v9 = SendDlgItemMessageA((HWND)hWnd, v8, 0x147u, 0, 0);
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v8, 0x150u, v9, 0) <= 2 )
                v75 = (VectorClass_flat *)((char *)v75 + 1);
              ++v6;
            }
            while ( v6 < 7 );
            *(unsigned int *)&HouseClass_Player[29992] = v75;
            v10 = (CampaignScore *)((char *)&v75->vtable0 + 1);
            if ( var244 == 1559 )
            {
              if ( (int)Format < (int)v10 )
              {
                StringCSF = GetStringCSF(
                              g_Str_TXT_SCENARIO_TOO_SMALL,
                              0,
                              (CampaignScore *)&stru_830620[63020],
                              1079);
                swprintf(Destination, (const size_t)StringCSF, (const wchar_t *const)Format, v72);
                v86 = &stru_82083C;
                v12 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620[63020], 1080);
  int v73; // [esp+0h] [ebp-260h]
                Dialog::ShowMessageBox((int)Destination, v12, 0, 0, 0, v73);
                v13 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v13, 1);
                return;
              }
              if ( (int)v10 <= 1 )
              {
                v14 = GetStringCSF(
                        (wchar_t *)&stru_830620[63048],
                        0,
                        (CampaignScore *)&stru_830620[63020],
                        1087);
                swprintf(Destination, (const size_t)v14, (const wchar_t *const)Format, v72);
                v85 = &stru_82083C;
                v15 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620[63020], 1088);
  int v74; // [esp+0h] [ebp-260h]
                Dialog::ShowMessageBox((int)Destination, v15, 0, 0, 0, v74);
                v16 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v16, 1);
                return;
              }
              if ( GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF) >= 0 )
              {
                int v17 = 0;
                while ( 1 )
                {
  int v18; // esi
                  if ( v17 )
                  {
                    switch ( v17 )
                    {
                      case 1:
                        v18 = 1294;
                        break;
                      case 2:
                        v18 = 1302;
                        break;
                      case 3:
                        v18 = 1306;
                        break;
                      case 4:
                        v18 = 1307;
                        break;
                      default:
                        v18 = v17 == 5 ? 1308 : v17 != 6 ? -1 : 1309;
                        break;
                    }
                  }
                  else
                  {
                    v18 = 1291;
                  }
                  v19 = SendDlgItemMessageA((HWND)hWnd, v18, 0x147u, 0, 0);
                  if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v18, 0x150u, v19, 0) <= 2 )
                  {
                    ResourceID4CSF = GetResourceID4CSF((void *)(v17 + 1));
                    ComboBoxSelectedRaw2 = (wchar_t *)GetComboBoxSelectedRaw2((HWND)hWnd, ResourceID4CSF, 0xFFFFFFFF);
                    if ( (wchar_t *)GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF) != ComboBoxSelectedRaw2 )
                      break;
                  }
                  if ( ++v17 >= 7 )
                  {
                    v22 = GetStringCSF(
                            (wchar_t *)&stru_830620[3632],
                            0,
                            (CampaignScore *)&stru_830620[63020],
                            1111);
                    swprintf(Destination, (const size_t)v22, (const wchar_t *const)Format, v72);
                    v89 = &stru_82083C;
                    v23 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620[63020], 1112);
                    Dialog::ShowMessageBox((int)Destination, v23, 0, 0, 0, _0c);
                    v24 = GetDlgItem((HWND)hWnd, 1559);
                    EnableWindow(v24, 1);
                    return;
                  }
                }
              }
            }
            v25 = *(SkirmishDialog **)&HouseClass_Player[29936];
            unknown_libname_74(&v82);
            if ( !(*(uint8_t (__thiscall **)(SkirmishDialog *, wchar_t **))(*(unsigned int *)v25->__pad_0 + 20))(
                    v25,
                    &v82) )
            {
              if ( var244 == 1559 )
              {
                v83 = (VectorClass_flat *)&stru_82083C;
                v71 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620[63020], 1129);
                v26 = WideString::GetOrEmpty(&v82);
                Dialog::ShowMessageBox((int)v26, v71, 0, 0, 0, (int)v72);
                v27 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v27, 1);
                DeleteAndZero::Alt((void **)&v82);
                return;
              }
              MultiplayerGameMode::GetFirst();
            }
            *(unsigned int *)&HouseClass_Player[30328] = *(unsigned int *)&HouseClass_Player[29956];
            *(unsigned int *)&HouseClass_Player[30332] = *(unsigned int *)&HouseClass_Player[29960];
            if ( *(int *)&HouseClass_Player[29960] >= *(int *)&HouseClass_Player[31628] )
              *(unsigned int *)&HouseClass_Player[30332] = 0;
            v28 = GetDlgItem((HWND)hWnd, 1696);
            SendMessageA(v28, 0x4B3u, 0x14u, (LPARAM)lParam);
            CopyWideToChar(&HouseClass_Player[30260], lParam, -1);
            ComboBoxSelected = GetComboBoxSelected((ReferenceCounted *)hWnd, 1697, 0xFFFFFFFF);
            SessionClass::AssignSide(&HouseClass_Player[29932], ComboBoxSelected, (MPCooperative *)1);
            int v30 = 0;
            do
            {
  int v32; // edi
              v31 = v30 + 1;
              if ( v30 )
              {
                switch ( v30 )
                {
                  case 1:
                    v32 = 1294;
                    break;
                  case 2:
                    v32 = 1302;
                    break;
                  case 3:
                    v32 = 1306;
                    break;
                  case 4:
                    v32 = 1307;
                    break;
                  case 5:
                    v32 = 1308;
                    break;
                  default:
                    v32 = v30 != 6 ? -1 : 1309;
                    break;
                }
              }
              else
              {
                v32 = 1291;
              }
              ResourceID2CSF = GetResourceID2CSF((void *)v31);
              Formata = (VectorClass_flat *)GetResourceIDCSF((void *)v31);
              ResourceID3 = (VectorClass_flat *)GetResourceID3CSF((void *)v31);
              nIDDlgItema = (VectorClass_flat *)GetResourceID4CSF((void *)v31);
              v34 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v32, 0x150u, v34, 0) <= 2 )
              {
                v35 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
                *(unsigned int *)&HouseClass_Player[21864][4 * v31 + 8136] = SendDlgItemMessageA(
                                                                             (HWND)hWnd,
                                                                             v32,
                                                                             0x150u,
                                                                             v35,
                                                                             0);
                *(unsigned int *)&HouseClass_Player[21864][4 * v31 + 8168] = GetComboBoxSelected(
                                                                             (ReferenceCounted *)hWnd,
                                                                             ResourceID2CSF,
                                                                             0xFFFFFFFF);
                *(unsigned int *)&HouseClass_Player[21864][4 * v31 + 8200] = GetComboBoxSelectedRaw(
                                                                             (ReferenceCounted *)hWnd,
                                                                             (int)Formata,
                                                                             0xFFFFFFFF);
                *(unsigned int *)&HouseClass_Player[21864][4 * v31 + 8232] = SetComboBoxSelection(
                                                                             (HWND)hWnd,
                                                                             (int)ResourceID3,
                                                                             0xFFFFFFFF);
                *(unsigned int *)&HouseClass_Player[21864][4 * v31 + 8264] = GetComboBoxSelectedRaw2(
                                                                             (HWND)hWnd,
                                                                             (int)nIDDlgItema,
                                                                             0xFFFFFFFF);
              }
              v30 = v31;
            }
            while ( v31 < 7 );
            char * v36 = 0;
            Formatb = (VectorClass_flat *)&HouseClass_Player[30372];
            do
            {
  int v43; // edx
  int v37; // esi
              if ( v36 )
              {
                if ( v36 == (char *)1 )
                {
                  v37 = 1294;
                }
                else if ( v36 == (char *)2 )
                {
                  v37 = 1302;
                }
                else if ( v36 == (char *)3 )
                {
                  v37 = 1306;
                }
                else if ( v36 == (char *)4 )
                {
                  v37 = 1307;
                }
                else if ( v36 == (char *)5 )
                {
                  v37 = 1308;
                }
                else
                {
                  v37 = v36 != (char *)6 ? -1 : 1309;
                }
              }
              else
              {
                v37 = 1291;
              }
              int v38 = GetResourceID2CSF(++v36);
              nIDDlgItema = (VectorClass_flat *)GetResourceIDCSF(v36);
              v39 = SendDlgItemMessageA((HWND)hWnd, v37, 0x147u, 0, 0);
              v40 = SendDlgItemMessageA((HWND)hWnd, v37, 0x150u, v39, 0);
              v41 = GetComboBoxSelected((ReferenceCounted *)hWnd, v38, 0xFFFFFFFF);
              ComboBoxSelectedRaw = GetComboBoxSelectedRaw((ReferenceCounted *)hWnd, (int)nIDDlgItema, 0xFFFFFFFF);
              if ( v40 == -1 )
              {
                v43 = 1;
              }
              else if ( v40 )
              {
                if ( v40 == 1 )
                  v43 = 5;
                else
                  v43 = v40 != 2 ? 0 : 6;
              }
              else
              {
                v43 = 4;
              }
              *(unsigned int *)&Formatb[-1].IsInitialized = v43;
              Formatb->vtable0 = (void *)v41;
              Formatb->Items = (void *)ComboBoxSelectedRaw;
              Formatb = (VectorClass_flat *)((char *)Formatb + 12);
            }
            while ( (int)(v36 + 1) < 8 );
            v44 = GetComboBoxSelectedRaw((ReferenceCounted *)hWnd, 1698, 0xFFFFFFFF);
            v45 = SetComboBoxSelection((HWND)hWnd, 1699, 0xFFFFFFFF);
            v46 = GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF);
            SessionClass::AssignColor(&HouseClass_Player[29932], v44, (MPCooperative *)1);
            *(unsigned int *)&HouseClass_Player[30288] = v45;
            *(unsigned int *)&HouseClass_Player[30296] = v46;
            int v47 = operator new(0x85u);
            int v48 = v47;
            if ( v47 )
            {
              Waypoint::InitInvalid((unsigned char *)(v47 + 40));
              char * v49 = CharToWideString(&HouseClass_Player[30260]);
              wcscpy((wchar_t *)v48, (const wchar_t *)v49);
              *(unsigned int *)(v48 + 75) = *(unsigned int *)&HouseClass_Player[30304];
              *(unsigned int *)(v48 + 83) = *(unsigned int *)&HouseClass_Player[30280];
              *(unsigned int *)(v48 + 91) = *(unsigned int *)&HouseClass_Player[30288];
              *(unsigned int *)(v48 + 99) = *(unsigned int *)&HouseClass_Player[30296];
              *(unsigned int *)(v48 + 115) = -1;
              if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240]
                || (HouseClass_Player[40245] || !*(unsigned int *)&HouseClass_Player[40240])
                && *(int *)&HouseClass_Player[40252] > 0
                && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40232]
                                                                          + 8))(
                     &HouseClass_Player[40232],
                     *(unsigned int *)&HouseClass_Player[40240] + *(unsigned int *)&HouseClass_Player[40252],
                     0) )
              {
                v50 = (ObjectClass *)(*(unsigned int *)&HouseClass_Player[40248])++;
                *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * (unsigned int)v50) = v48;
              }
            }
            Player::RandomAssign(&HouseClass_Player[29932]);
            v51 = GetDlgItem((HWND)hWnd, 1321);
            if ( v51 )
            {
              *(unsigned int *)&HouseClass_Player[29980] = 6 - SendMessageA(v51, 0x400u, 0, 0);
              *(unsigned int *)&HouseClass_Player[44564] = *(unsigned int *)&HouseClass_Player[29980];
            }
            v52 = GetDlgItem((HWND)hWnd, 1297);
            if ( v52 )
              *(unsigned int *)&HouseClass_Player[29968] = SendMessageA(v52, 0x400u, 0, 0);
            v53 = GetDlgItem((HWND)hWnd, 1292);
            if ( v53 )
              *(unsigned int *)&HouseClass_Player[29988] = SendMessageA(v53, 0x400u, 0, 0);
            *(unsigned int *)&HouseClass_Player[30336] = *(unsigned int *)&HouseClass_Player[29980];
            *(unsigned int *)&HouseClass_Player[30340] = *(unsigned int *)&HouseClass_Player[29968];
            *(unsigned int *)&HouseClass_Player[30344] = *(unsigned int *)&HouseClass_Player[29988];
            v54 = GetDlgItem((HWND)hWnd, 1358);
            if ( v54 )
              HouseClass_Player[29974] = SendMessageA(v54, 0xF0u, 0, 0) == 1;
            v55 = GetDlgItem((HWND)hWnd, 1690);
            if ( v55 )
              HouseClass_Player[29975] = SendMessageA(v55, 0xF0u, 0, 0) == 1;
            v56 = GetDlgItem((HWND)hWnd, 1693);
            if ( v56 )
              HouseClass_Player[29976] = SendMessageA(v56, 0xF0u, 0, 0) == 1;
            v57 = GetDlgItem((HWND)hWnd, 1683);
            if ( v57 )
              HouseClass_Player[30164] = SendMessageA(v57, 0xF0u, 0, 0) == 1;
            v58 = GetDlgItem((HWND)hWnd, 1686);
            if ( v58 )
              HouseClass_Player[29973] = SendMessageA(v58, 0xF0u, 0, 0) == 1;
            v59 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
            HouseClass_Player[30348] = HouseClass_Player[29974];
            HouseClass_Player[30349] = HouseClass_Player[29975];
            HouseClass_Player[30350] = HouseClass_Player[29976];
            HouseClass_Player[30351] = HouseClass_Player[30164];
            HouseClass_Player[30352] = HouseClass_Player[29973];
            HouseClass_Player[30163] = 0;
            HouseClass_Player[29972] = 1;
            HouseClass_Player[30161] = 0;
            HouseClass_Player[29984] = 0;
            if ( *(&g_MatrixTransformState + 2257) )
            {
              ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
              RA2_OPDEL(v59);
              *(&g_MatrixTransformState + 2257) = 0;
            }
            *WindowLongA = var244;
            DeleteAndZero::Alt((void **)&v82);
          }
          break;
      }
    }
  }
  else if ( nIDDlgItem >= 1314 )
  {
LABEL_153:
    if ( a4 == 1 )
      FillColorComboBoxUI((HWND)hWnd, nIDDlgItem);
  }
  else
  {
    switch ( nIDDlgItem )
    {
      case 1291:
      case 1294:
      case 1302:
      case 1306:
      case 1307:
      case 1308:
      case 1309:
        SetupSkirmishSpawnLocationEntry((SessionClass *)hWnd, nIDDlgItem);
        Skirmish::EnableSpawnButtons(0);
        break;
      case 1296:
      case 1299:
      case 1300:
      case 1310:
      case 1311:
      case 1312:
      case 1313:
        goto LABEL_151;
      default:
        return;
    }
  }
}
} // namespace gamemd
