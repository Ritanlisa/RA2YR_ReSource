// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6ACEE0
namespace gamemd {
void DialogSkirmishFunc_UpdateMultiEngineer(SkirmishDialog * hWnd, int nIDDlgItem, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall DialogSkirmishFunc_UpdateMultiEngineer(SkirmishDialog *hWnd, int nIDDlgItem, int a3, int a4)
{
  int v6; // edi
  HWND DlgItem; // eax
  int v8; // esi
  LRESULT v9; // eax
  CampaignScore *v10; // eax
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
  wchar_t *ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  SkirmishDialog *v25; // esi
  CampaignScore *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  LRESULT ComboBoxSelected; // eax
  int v30; // eax
  int v31; // esi
  int v32; // edi
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  char *v36; // edi
  int v37; // esi
  int v38; // ebx
  LRESULT v39; // eax
  LRESULT v40; // esi
  LRESULT v41; // ebx
  LRESULT ComboBoxSelectedRaw; // eax
  int v43; // edx
  LRESULT v44; // esi
  LRESULT v45; // edi
  LRESULT v46; // ebx
  int v47; // eax
  int v48; // esi
  char *v49; // eax
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
  _DWORD *v62; // eax
  ObjectClass *v63; // eax
  int PlayerCountMap; // edi
  int v65; // ecx
  int v66; // eax
  ObjectClass *v67; // esi
  _DWORD *v68; // eax
  ObjectClass *v69; // eax
  int v70; // eax
  wchar_t *v71; // [esp-10h] [ebp-270h]
  CampaignScore *v72; // [esp+0h] [ebp-260h]
  int v73; // [esp+0h] [ebp-260h]
  int v74; // [esp+0h] [ebp-260h]
  int _0c; // [esp+0h] [ebp-260h]
  VectorClass *Format; // [esp+10h] [ebp-250h]
  VectorClass *Formata; // [esp+10h] [ebp-250h]
  VectorClass *Formatb; // [esp+10h] [ebp-250h]
  VectorClass *Formatc; // [esp+10h] [ebp-250h]
  VectorClass *v75; // [esp+14h] [ebp-24Ch]
  VectorClass *ResourceID3; // [esp+14h] [ebp-24Ch]
  wchar_t *v82; // [esp+18h] [ebp-248h] BYREF
  int var244; // [esp+1Ch] [ebp-244h]
  VectorClass *nIDDlgItema; // [esp+20h] [ebp-240h]
  CampaignScore *v85; // [esp+24h] [ebp-23Ch]
  CampaignScore *v86; // [esp+28h] [ebp-238h]
  int *WindowLongA; // [esp+2Ch] [ebp-234h]
  VectorClass *v83; // [esp+30h] [ebp-230h]
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
          v70 = CountryCombo::IDToIndex((void *)nIDDlgItem);
          sub_4E3690((HWND)hWnd, v70);
          break;
        case 1450:
          Formatc = *(VectorClass **)&HouseClass_Player.__pad_5568[8092];
          v60 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096];
          strcpy((char *)Destination, &HouseClass_Player.__pad_5568[9772]);
          wcscpy(Destination, (const wchar_t *)&HouseClass_Player.__pad_5568[8302]);
          Dialog::IdleProcess(hWnd);
          ShowWindow((HWND)hWnd, 0);
          if ( SkirmishDialog::Show(g_hWnd, (int)v60, (int)hWnd) == (SkirmishDialog *)2 )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = Formatc;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v60;
            LoadScenarioClassByIndex((int)v60);
            Session::PrepareGame((HWND)hWnd);
            ShowWindow((HWND)hWnd, 5);
            if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752]
                                          + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096])) )
            {
              v61 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                __3_YAXPAX_Z(v61);
              }
              v62 = (_DWORD *)__2_YAPAXI_Z(4u);
              if ( v62 )
                v63 = (ObjectClass *)unknown_libname_27(v62);
              else
                v63 = 0;
              *(&g_MatrixTransformState + 2257) = (CoordStruct *)v63;
              Surface::LoadToSurfaceSHP((char **)v63, stru_829ABC.__pad_0);
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
            PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
              || (v65 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v65 > PlayerCountMap) )
            {
              v65 = PlayerCountMap;
            }
            ResetLobbyFactionTable(v65);
            Lobby::InvalidateFactionCombos((HWND)hWnd);
            Lobby::InvalidatePlayerSlots((HWND)hWnd);
            Skirmish_Setup_6ADDF0((HWND)hWnd, (int)v60, *(int *)&HouseClass_Player.__pad_5568[8096]);
            ShowWindow((HWND)hWnd, 5);
            if ( LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]) )
            {
              v66 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]);
              SetDialogPlayerName((HWND)hWnd, v66);
              Dialog::ShowPlayerName((HWND)hWnd);
              Skirmish::EnableSpawnButtons(0);
              if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752]
                                            + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096])) )
              {
                v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                if ( *(&g_MatrixTransformState + 2257) )
                {
                  ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                  __3_YAXPAX_Z(v67);
                  v68 = (_DWORD *)__2_YAPAXI_Z(4u);
                  if ( v68 )
                    v69 = (ObjectClass *)unknown_libname_27(v68);
                  else
                    v69 = 0;
                  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v69;
                  Surface::LoadToSurfaceSHP((char **)v69, stru_829ABC.__pad_0);
                  v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                }
                if ( !*(_DWORD *)v67->__pad_0 )
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
              *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v60;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = Formatc;
            }
          }
          break;
        case 1472:
        case 1559:
          v6 = 0;
          if ( !a4 )
          {
            if ( nIDDlgItem == 1559 )
            {
              DlgItem = GetDlgItem((HWND)hWnd, 1559);
              EnableWindow(DlgItem, 0);
            }
            Format = (VectorClass *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
            v75 = 0;
            do
            {
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
                v75 = (VectorClass *)((char *)v75 + 1);
              ++v6;
            }
            while ( v6 < 7 );
            *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = v75;
            v10 = (CampaignScore *)((char *)&v75->vtable0 + 1);
            if ( var244 == 1559 )
            {
              if ( (int)Format < (int)v10 )
              {
                StringCSF = GetStringCSF(
                              g_Str_TXT_SCENARIO_TOO_SMALL,
                              0,
                              (CampaignScore *)&stru_830620.__pad_579C[40592],
                              1079);
                swprintf(Destination, (const size_t)StringCSF, (const wchar_t *const)Format, v72);
                v86 = &stru_82083C;
                v12 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1080);
                Dialog::ShowMessageBox((int)Destination, v12, 0, 0, 0, v73);
                v13 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v13, 1);
                return;
              }
              if ( (int)v10 <= 1 )
              {
                v14 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_579C[40620],
                        0,
                        (CampaignScore *)&stru_830620.__pad_579C[40592],
                        1087);
                swprintf(Destination, (const size_t)v14, (const wchar_t *const)Format, v72);
                v85 = &stru_82083C;
                v15 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1088);
                Dialog::ShowMessageBox((int)Destination, v15, 0, 0, 0, v74);
                v16 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v16, 1);
                return;
              }
              if ( GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF) >= 0 )
              {
                v17 = 0;
                while ( 1 )
                {
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
                            (wchar_t *)&stru_830620.__pad_DFC[52],
                            0,
                            (CampaignScore *)&stru_830620.__pad_579C[40592],
                            1111);
                    swprintf(Destination, (const size_t)v22, (const wchar_t *const)Format, v72);
                    v89 = &stru_82083C;
                    v23 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1112);
                    Dialog::ShowMessageBox((int)Destination, v23, 0, 0, 0, _0c);
                    v24 = GetDlgItem((HWND)hWnd, 1559);
                    EnableWindow(v24, 1);
                    return;
                  }
                }
              }
            }
            v25 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
            unknown_libname_74(&v82);
            if ( !(*(unsigned __int8 (__thiscall **)(SkirmishDialog *, wchar_t **))(*(_DWORD *)v25->__pad_0 + 20))(
                    v25,
                    &v82) )
            {
              if ( var244 == 1559 )
              {
                v83 = (VectorClass *)&stru_82083C;
                v71 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1129);
                v26 = WideString::GetOrEmpty(&v82);
                Dialog::ShowMessageBox((int)v26, v71, 0, 0, 0, (int)v72);
                v27 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v27, 1);
                DeleteAndZero::Alt((void **)&v82);
                return;
              }
              MultiplayerGameMode::GetFirst();
            }
            *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = *(_DWORD *)&HouseClass_Player.__pad_5568[8092];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = *(_DWORD *)&HouseClass_Player.__pad_5568[8096];
            if ( *(int *)&HouseClass_Player.__pad_5568[8096] >= *(int *)&HouseClass_Player.__pad_5568[9764] )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = 0;
            v28 = GetDlgItem((HWND)hWnd, 1696);
            SendMessageA(v28, 0x4B3u, 0x14u, (LPARAM)lParam);
            CopyWideToChar(&HouseClass_Player.__pad_5568[8396], lParam, -1);
            ComboBoxSelected = GetComboBoxSelected((ReferenceCounted *)hWnd, 1697, 0xFFFFFFFF);
            SessionClass::AssignSide(&HouseClass_Player.__pad_5568[8068], ComboBoxSelected, (MPCooperative *)1);
            v30 = 0;
            do
            {
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
              Formata = (VectorClass *)GetResourceIDCSF((void *)v31);
              ResourceID3 = (VectorClass *)GetResourceID3CSF((void *)v31);
              nIDDlgItema = (VectorClass *)GetResourceID4CSF((void *)v31);
              v34 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v32, 0x150u, v34, 0) <= 2 )
              {
                v35 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8136] = SendDlgItemMessageA(
                                                                             (HWND)hWnd,
                                                                             v32,
                                                                             0x150u,
                                                                             v35,
                                                                             0);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8168] = GetComboBoxSelected(
                                                                             (ReferenceCounted *)hWnd,
                                                                             ResourceID2CSF,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8200] = GetComboBoxSelectedRaw(
                                                                             (ReferenceCounted *)hWnd,
                                                                             (int)Formata,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8232] = SetComboBoxSelection(
                                                                             (HWND)hWnd,
                                                                             (int)ResourceID3,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8264] = GetComboBoxSelectedRaw2(
                                                                             (HWND)hWnd,
                                                                             (int)nIDDlgItema,
                                                                             0xFFFFFFFF);
              }
              v30 = v31;
            }
            while ( v31 < 7 );
            v36 = 0;
            Formatb = (VectorClass *)&HouseClass_Player.__pad_5568[8508];
            do
            {
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
              v38 = GetResourceID2CSF(++v36);
              nIDDlgItema = (VectorClass *)GetResourceIDCSF(v36);
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
              *(_DWORD *)&Formatb[-1].IsInitialized = v43;
              Formatb->vtable0 = (void *)v41;
              Formatb->Items = (void *)ComboBoxSelectedRaw;
              Formatb = (VectorClass *)((char *)Formatb + 12);
            }
            while ( (int)(v36 + 1) < 8 );
            v44 = GetComboBoxSelectedRaw((ReferenceCounted *)hWnd, 1698, 0xFFFFFFFF);
            v45 = SetComboBoxSelection((HWND)hWnd, 1699, 0xFFFFFFFF);
            v46 = GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF);
            SessionClass::AssignColor(&HouseClass_Player.__pad_5568[8068], v44, (MPCooperative *)1);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8424] = v45;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8432] = v46;
            v47 = __2_YAPAXI_Z(0x85u);
            v48 = v47;
            if ( v47 )
            {
              Waypoint::InitInvalid((_BYTE *)(v47 + 40));
              v49 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
              wcscpy((wchar_t *)v48, (const wchar_t *)v49);
              *(_DWORD *)(v48 + 75) = *(_DWORD *)&HouseClass_Player.__pad_5568[8440];
              *(_DWORD *)(v48 + 83) = *(_DWORD *)&HouseClass_Player.__pad_5568[8416];
              *(_DWORD *)(v48 + 91) = *(_DWORD *)&HouseClass_Player.__pad_5568[8424];
              *(_DWORD *)(v48 + 99) = *(_DWORD *)&HouseClass_Player.__pad_5568[8432];
              *(_DWORD *)(v48 + 115) = -1;
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
                || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
                && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                          + 8))(
                     &HouseClass_Player.__pad_5568[18368],
                     *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                     0) )
              {
                v50 = (ObjectClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
                *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * (_DWORD)v50) = v48;
              }
            }
            Player::RandomAssign(&HouseClass_Player.__pad_5568[8068]);
            v51 = GetDlgItem((HWND)hWnd, 1321);
            if ( v51 )
            {
              *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendMessageA(v51, 0x400u, 0, 0);
              *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116];
            }
            v52 = GetDlgItem((HWND)hWnd, 1297);
            if ( v52 )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendMessageA(v52, 0x400u, 0, 0);
            v53 = GetDlgItem((HWND)hWnd, 1292);
            if ( v53 )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendMessageA(v53, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8472] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8476] = *(_DWORD *)&HouseClass_Player.__pad_5568[8104];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8480] = *(_DWORD *)&HouseClass_Player.__pad_5568[8124];
            v54 = GetDlgItem((HWND)hWnd, 1358);
            if ( v54 )
              HouseClass_Player.__pad_5568[8110] = SendMessageA(v54, 0xF0u, 0, 0) == 1;
            v55 = GetDlgItem((HWND)hWnd, 1690);
            if ( v55 )
              HouseClass_Player.__pad_5568[8111] = SendMessageA(v55, 0xF0u, 0, 0) == 1;
            v56 = GetDlgItem((HWND)hWnd, 1693);
            if ( v56 )
              HouseClass_Player.__pad_5568[8112] = SendMessageA(v56, 0xF0u, 0, 0) == 1;
            v57 = GetDlgItem((HWND)hWnd, 1683);
            if ( v57 )
              HouseClass_Player.__pad_5568[8300] = SendMessageA(v57, 0xF0u, 0, 0) == 1;
            v58 = GetDlgItem((HWND)hWnd, 1686);
            if ( v58 )
              HouseClass_Player.__pad_5568[8109] = SendMessageA(v58, 0xF0u, 0, 0) == 1;
            v59 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
            HouseClass_Player.__pad_5568[8484] = HouseClass_Player.__pad_5568[8110];
            HouseClass_Player.__pad_5568[8485] = HouseClass_Player.__pad_5568[8111];
            HouseClass_Player.__pad_5568[8486] = HouseClass_Player.__pad_5568[8112];
            HouseClass_Player.__pad_5568[8487] = HouseClass_Player.__pad_5568[8300];
            HouseClass_Player.__pad_5568[8488] = HouseClass_Player.__pad_5568[8109];
            HouseClass_Player.__pad_5568[8299] = 0;
            HouseClass_Player.__pad_5568[8108] = 1;
            HouseClass_Player.__pad_5568[8297] = 0;
            HouseClass_Player.__pad_5568[8120] = 0;
            if ( *(&g_MatrixTransformState + 2257) )
            {
              ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
              __3_YAXPAX_Z(v59);
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
}
} // namespace gamemd
