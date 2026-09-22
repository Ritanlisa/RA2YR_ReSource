// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x470D30
namespace gamemd {
int CampaignScreen_Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge CampaignScreen::Init@<eax>(
        CampaignScore *a1@<ebp>,
        HWND hWnd,
        unsigned int a3,
        WPARAM wParam,
        unsigned int a5)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v7; // eax
  wchar_t *StringCSF; // eax
  HWND v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  HWND v14; // eax
  int v15; // ecx
  int v16; // ebp
  wchar_t *v17; // eax
  HWND v18; // eax
  int v19; // eax
  LPARAM v20; // ecx
  LPARAM v21; // ebp
  HWND v22; // eax
  HWND v23; // eax
  int v24; // ecx
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int v29; // ecx
  HWND v30; // eax
  HWND v31; // eax
  int v32; // ecx
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND DlgItem; // eax
  int v43; // [esp-Ch] [ebp-174h]
  const wchar_t *v44; // [esp-8h] [ebp-170h]
  wchar_t *v45; // [esp-8h] [ebp-170h]
  wchar_t *v46; // [esp-8h] [ebp-170h]
  wchar_t *v47; // [esp-8h] [ebp-170h]
  CampaignScore *v48[4]; // [esp-4h] [ebp-16Ch] BYREF
  int nIDDlgItem; // [esp+Ch] [ebp-15Ch]
  int v50; // [esp+10h] [ebp-158h]
  LPARAM lParam; // [esp+14h] [ebp-154h]
  int v52; // [esp+18h] [ebp-150h]
  int v53; // [esp+1Ch] [ebp-14Ch]
  char v54[4]; // [esp+24h] [ebp-144h] BYREF
  wchar_t Buffer[32]; // [esp+28h] [ebp-140h] BYREF
  wchar_t v56[32]; // [esp+68h] [ebp-100h] BYREF
  wchar_t v57[32]; // [esp+A8h] [ebp-C0h] BYREF
  wchar_t v58[32]; // [esp+E8h] [ebp-80h] BYREF
  wchar_t v59[32]; // [esp+128h] [ebp-40h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hWnd, a3, wParam, a5); /*0x470d58*/
  if ( !result ) /*0x470d5f*/
  {
    v48[0] = a1; /*0x470d65*/
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x470d69*/
    if ( a3 > 0x497 ) /*0x470d75*/
    {
      switch ( a3 ) /*0x47138e*/
      {
        case 0x4D8u: /*0x47138e*/
          if ( !wParam ) /*0x4713ce*/
            SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x4713de*/
          break;
        case 0x4ECu: /*0x47138e*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x4713ca*/
          break;
        case 0x4EDu: /*0x47138e*/
          Screen::Capture(1, 0, wParam, (int)a1); /*0x47139c*/
          ShowWindow(hWnd, 0); /*0x4713a4*/
          Dialog::InitWindow((SkirmishDialog *)hWnd, 1); /*0x4713ad*/
          return 0; /*0x4713be*/
      }
      return 0; /*0x471396*/
    }
    if ( a3 == 1175 ) /*0x470d7b*/
    {
      DlgItem = GetDlgItem(hWnd, 1835); /*0x471364*/
      PostMessageA(DlgItem, 0x4D7u, 0, (LPARAM)hWnd); /*0x471373*/
      return 0; /*0x471385*/
    }
    if ( a3 == 15 ) /*0x470d84*/
    {
      Dialog::DrawBackground(hWnd); /*0x471343*/
      Dialog::StopBink(hWnd); /*0x47134a*/
      return 0; /*0x47135b*/
    }
    if ( a3 != 272 ) /*0x470d90*/
    {
      if ( a3 == 273 && (_WORD)wParam == 1745 ) /*0x470d9e*/
      {
        *WindowLongA = 1; /*0x470da6*/
        return 0; /*0x470db6*/
      }
      return 0; /*0x470d9e*/
    }
    Buffer[0] = 0; /*0x470dc5*/
    v7 = GetDlgItem(hWnd, 1843); /*0x470dcc*/
    SendMessageA(v7, 0x4B2u, 0, (LPARAM)&unk_89E0A4); /*0x470de1*/
    v44 = Format; /*0x470deb*/
    StringCSF = GetStringCSF(aGuiCampaignlab, 0, g_Str_File_CampScor_cpp, 1792); /*0x470dfb*/
    swprintf(Buffer, (const size_t)StringCSF, v44, v48[0]); /*0x470e06*/
    v9 = GetDlgItem(hWnd, 1845); /*0x470e14*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)Buffer); /*0x470e23*/
    if ( unk_89E008 ) /*0x470e2c*/
    {
      if ( unk_89E008 == 1 ) /*0x470e71*/
      {
        v46 = GetStringCSF(aTxtDifficultyM, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e89*/
        v11 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e9b*/
        swprintf(Buffer, (const size_t)v11, v46, v48[0]); /*0x470ea6*/
      }
      else if ( unk_89E008 == 2 ) /*0x470eb3*/
      {
        v47 = GetStringCSF(aTxtDifficultyB, 0, g_Str_File_CampScor_cpp, 1800); /*0x470ecb*/
        v12 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1800); /*0x470edd*/
        swprintf(Buffer, (const size_t)v12, v47, v48[0]); /*0x470ee8*/
      }
      else
      {
        v13 = GetStringCSF(aGuiBlank, 0, g_Str_File_CampScor_cpp, 1802); /*0x470f03*/
        swprintf(Buffer, (const size_t)v13, (const wchar_t *const)v48[0], v48[1]); /*0x470f0e*/
      }
    }
    else
    {
      v45 = GetStringCSF(aTxtDifficultyE, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e44*/
      v10 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e56*/
      swprintf(Buffer, (const size_t)v10, v45, v48[0]); /*0x470e61*/
    }
    v14 = GetDlgItem(hWnd, 1842); /*0x470f1c*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)Buffer); /*0x470f2b*/
    v15 = unk_89DFD4 / 60; /*0x470f46*/
    if ( v48 != (CampaignScore **)-44 ) /*0x470f4e*/
    {
      if ( v15 / 3600 > 99 ) /*0x470f6a*/
        v15 = 359999; /*0x470f6c*/
      v16 = v15 / 3600; /*0x470f84*/
      v43 = (720 * (4 * (v15 / -3600) - v15 / 3600) + v15) / 60; /*0x470fb9*/
      v17 = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, g_Str_File_CampScor_cpp, 1770); /*0x470fcc*/
      swprintf(Buffer, (const size_t)v17, (const wchar_t *const)v16, (CampaignScore *)v43); /*0x470fd7*/
    }
    v18 = GetDlgItem(hWnd, 1002); /*0x470fe5*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)Buffer); /*0x470ff4*/
    v50 = 0; /*0x470ffd*/
    if ( (int)unk_89E020 <= 0 ) /*0x471005*/
      return 0; /*0x4713e4*/
    while ( 1 ) /*0x47102c*/
    {
      v19 = Color::ConvertToRGB( /*0x47102c*/
              (unsigned __int8 *)(*(_DWORD *)(stru_B05488.field_4C
                                            + 4 * *(_DWORD *)(*(_DWORD *)&stru_89DFE0[0][4 * v50] + 40))
                                + 776),
              (int)v54);
      LOWORD(v53) = *(_WORD *)v19; /*0x471034*/
      BYTE2(v53) = *(_BYTE *)(v19 + 2); /*0x47103c*/
      v20 = *(_DWORD *)&stru_89DFE0[0][4 * v50]; /*0x471067*/
      v52 = 24 * v50; /*0x471071*/
      v21 = (unsigned __int8)v53 | (*(unsigned __int16 *)((char *)&v53 + 1) << 8); /*0x471081*/
      nIDDlgItem = *(_DWORD *)&stru_81B1A4[72][24 * v50]; /*0x471085*/
      lParam = v20; /*0x471089*/
      v22 = GetDlgItem(hWnd, nIDDlgItem); /*0x47108d*/
      SendMessageA(v22, 0x4B2u, 0, lParam); /*0x47109c*/
      v23 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710a4*/
      SendMessageA(v23, 0x498u, 0, v21); /*0x4710af*/
      v24 = *(_DWORD *)&stru_89DFE0[0][4 * v50]; /*0x4710bf*/
      nIDDlgItem = *(_DWORD *)&stru_81B1A4[72][v52 + 4]; /*0x4710c6*/
      swprintf(v56, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v24 + 64), v48[0]); /*0x4710d8*/
      v25 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710e6*/
      SendMessageA(v25, 0x4B2u, 0, (LPARAM)v56); /*0x4710f5*/
      v26 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710fd*/
      SendMessageA(v26, 0x498u, 0, v21); /*0x471108*/
      nIDDlgItem = *(int *)((char *)&stru_81B1A4.unknown50 + v52); /*0x471118*/
      swprintf( /*0x471134*/
        v58,
        (const size_t)&g_Str_Fmt_PctD,
        *(const wchar_t *const *)(*(_DWORD *)&stru_89DFE0[0][4 * v50] + 48),
        v48[0]);
      v27 = GetDlgItem(hWnd, nIDDlgItem); /*0x471142*/
      SendMessageA(v27, 0x4B2u, 0, (LPARAM)v58); /*0x471154*/
      v28 = GetDlgItem(hWnd, nIDDlgItem); /*0x47115c*/
      SendMessageA(v28, 0x498u, 0, v21); /*0x471167*/
      v29 = *(_DWORD *)&stru_89DFE0[0][4 * v50]; /*0x471177*/
      nIDDlgItem = *(int *)((char *)&stru_81B1A4.unknown54 + v52); /*0x47117e*/
      swprintf(v57, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v29 + 80), v48[0]); /*0x471193*/
      v30 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711a1*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v57); /*0x4711b3*/
      v31 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711bb*/
      SendMessageA(v31, 0x498u, 0, v21); /*0x4711c6*/
      v32 = *(_DWORD *)&stru_89DFE0[0][4 * v50]; /*0x4711d6*/
      nIDDlgItem = *(_DWORD *)((char *)&unk_81B1FC + v52); /*0x4711dd*/
      swprintf(v59, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v32 + 96), v48[0]); /*0x4711f2*/
      v33 = GetDlgItem(hWnd, nIDDlgItem); /*0x471200*/
      SendMessageA(v33, 0x4B2u, 0, (LPARAM)v59); /*0x471212*/
      v34 = GetDlgItem(hWnd, nIDDlgItem); /*0x47121a*/
      SendMessageA(v34, 0x498u, 0, v21); /*0x471225*/
      if ( !v50 ) /*0x47122d*/
        break; /*0x47122d*/
      if ( v50 == 1 ) /*0x47129f*/
      {
        lParam = *(_DWORD *)&stru_89DFE0[4]; /*0x4712ad*/
        v39 = GetDlgItem(hWnd, 1849); /*0x4712b1*/
        SendMessageA(v39, 0x4B2u, 0, lParam); /*0x4712c0*/
        v40 = GetDlgItem(hWnd, 1849); /*0x4712c8*/
        SendMessageA(v40, 0x498u, 0, v21); /*0x4712d3*/
        swprintf( /*0x4712e9*/
          Buffer,
          (const size_t)&g_Str_Fmt_PctD,
          *(const wchar_t *const *)(*(_DWORD *)&stru_89DFE0[4] + 96),
          v48[0]);
        v41 = GetDlgItem(hWnd, 1848); /*0x4712f7*/
        SendMessageA(v41, 0x4B2u, 0, (LPARAM)Buffer); /*0x471306*/
        v38 = GetDlgItem(hWnd, 1848); /*0x47130e*/
        goto LABEL_25; /*0x47130e*/
      }
LABEL_26:
      if ( ++v50 >= (int)unk_89E020 ) /*0x47132c*/
        return 0; /*0x47133e*/
    }
    lParam = *(_DWORD *)stru_89DFE0[0]; /*0x47123b*/
    v35 = GetDlgItem(hWnd, 1850); /*0x47123f*/
    SendMessageA(v35, 0x4B2u, 0, lParam); /*0x47124e*/
    v36 = GetDlgItem(hWnd, 1850); /*0x471256*/
    SendMessageA(v36, 0x498u, 0, v21); /*0x471261*/
    swprintf( /*0x471276*/
      Buffer,
      (const size_t)&g_Str_Fmt_PctD,
      *(const wchar_t *const *)(*(_DWORD *)stru_89DFE0[0] + 96),
      v48[0]);
    v37 = GetDlgItem(hWnd, 1851); /*0x471284*/
    SendMessageA(v37, 0x4B2u, 0, (LPARAM)Buffer); /*0x471293*/
    v38 = GetDlgItem(hWnd, 1851); /*0x47129a*/
LABEL_25:
    SendMessageA(v38, 0x498u, 0, v21); /*0x471310*/
    goto LABEL_26; /*0x471319*/
  }
  return result; /*0x470da5*/
}
}
} // namespace gamemd
