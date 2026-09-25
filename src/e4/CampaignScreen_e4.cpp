// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"

// 0x470D30
namespace gamemd {
void CampaignScreen_Init()
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v7; // eax
  wchar_t *String; // eax
  HWND v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  HWND v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  wchar_t *v18; // eax
  HWND v19; // eax
  int v20; // eax
  LPARAM v21; // ecx
  LPARAM v22; // ebp
  HWND v23; // eax
  HWND v24; // eax
  int v25; // ecx
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  int v30; // ecx
  HWND v31; // eax
  HWND v32; // eax
  int v33; // ecx
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND DlgItem; // eax
  int v44; // [esp-Ch] [ebp-174h]
  const wchar_t *v45; // [esp-8h] [ebp-170h]
  wchar_t *v46; // [esp-8h] [ebp-170h]
  wchar_t *v47; // [esp-8h] [ebp-170h]
  wchar_t *v48; // [esp-8h] [ebp-170h]
  int v49; // [esp-8h] [ebp-170h]
  const wchar_t *v50; // [esp-4h] [ebp-16Ch] BYREF
  int nIDDlgItem; // [esp+Ch] [ebp-15Ch]
  int v52; // [esp+10h] [ebp-158h]
  LPARAM lParam; // [esp+14h] [ebp-154h]
  unsigned int v54; // [esp+18h] [ebp-150h]
  int v55; // [esp+1Ch] [ebp-14Ch]
  char v56[4]; // [esp+24h] [ebp-144h] BYREF
  wchar_t Buffer[32]; // [esp+28h] [ebp-140h] BYREF
  wchar_t v58[32]; // [esp+68h] [ebp-100h] BYREF
  wchar_t v59[32]; // [esp+A8h] [ebp-C0h] BYREF
  wchar_t v60[32]; // [esp+E8h] [ebp-80h] BYREF
  wchar_t v61[32]; // [esp+128h] [ebp-40h] BYREF

  result = BaseDialogProc(hWnd, a3, wParam, a5); /*0x470d58*/
  if ( !result ) /*0x470d5f*/
  {
    v50 = a1; /*0x470d65*/
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
          Dialog::InitWindow(hWnd, 1, unsigned int a3); /*0x4713ad*/
          return 0; /*0x4713be*/
      }
      return 0; /*0x471396*/
    }
    if ( a3 == 1175 ) /*0x470d7b*/
    {
      DlgItem = GetDlgItem(hWnd, 1835); /*0x471364*/
      PostMessageA(DlgItem, 0x4D7u, 0, (LPARAM, unsigned int a3)hWnd); /*0x471373*/
      return 0; /*0x471385*/
    }
    if ( a3 == 15 ) /*0x470d84*/
    {
      Dialog::DrawBackground(hWnd); /*0x471343*/
      Dialog::StopBink(hWnd, unsigned int a3); /*0x47134a*/
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
    SendMessageA(v7, 0x4B2u, 0, (LPARAM)&word_89E0A4); /*0x470de1*/
    v45 = dword_89DFC0; /*0x470deb*/
    String = GetStringCSF(aGuiCampaignlab, 0, g_Str_File_CampScor_cpp, 1792); /*0x470dfb*/
    swprintf(Buffer, (const size_t)String, v45); /*0x470e06*/
    v9 = GetDlgItem(hWnd, 1845); /*0x470e14*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)Buffer); /*0x470e23*/
    if ( dword_89E008 ) /*0x470e2c*/
    {
      if ( dword_89E008 == 1 ) /*0x470e71*/
      {
        v47 = GetStringCSF(aTxtDifficultyM, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e89*/
        v11 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e9b*/
        swprintf(Buffer, (const size_t)v11, v47); /*0x470ea6*/
      }
      else if ( dword_89E008 == 2 ) /*0x470eb3*/
      {
        v48 = GetStringCSF(aTxtDifficultyB, 0, g_Str_File_CampScor_cpp, 1800); /*0x470ecb*/
        v12 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1800); /*0x470edd*/
        swprintf(Buffer, (const size_t)v12, v48); /*0x470ee8*/
      }
      else
      {
        v13 = GetStringCSF(aGuiBlank, 0, g_Str_File_CampScor_cpp, 1802); /*0x470f03*/
        swprintf(Buffer, (const size_t)v13, v50); /*0x470f0e*/
      }
    }
    else
    {
      v46 = GetStringCSF(aTxtDifficultyE, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e44*/
      v10 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e56*/
      swprintf(Buffer, (const size_t)v10, v46); /*0x470e61*/
    }
    v14 = GetDlgItem(hWnd, 1842); /*0x470f1c*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)Buffer); /*0x470f2b*/
    v15 = dword_89DFD4 / 60; /*0x470f46*/
    if ( &v50 != (const wchar_t **)-44 ) /*0x470f4e*/
    {
      if ( v15 / 3600 > 99 ) /*0x470f6a*/
        v15 = 359999; /*0x470f6c*/
      v16 = v15 / 3600; /*0x470f84*/
      v17 = 720 * (4 * (v15 / -3600) - v15 / 3600) + v15; /*0x470f9d*/
      v49 = v17 % 60; /*0x470fb8*/
      v44 = v17 / 60; /*0x470fb9*/
      v18 = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, g_Str_File_CampScor_cpp, 1770); /*0x470fcc*/
      swprintf(Buffer, (const size_t)v18, (const wchar_t *const)v16, v44, v49); /*0x470fd7*/
    }
    v19 = GetDlgItem(hWnd, 1002); /*0x470fe5*/
    SendMessageA(v19, 0x4B2u, 0, (LPARAM)Buffer); /*0x470ff4*/
    v52 = 0; /*0x470ffd*/
    if ( (int)dword_89E020 <= 0 ) /*0x471005*/
      return 0; /*0x4713e4*/
    while ( 1 ) /*0x47102c*/
    {
      v20 = Color::ConvertToRGB( /*0x47102c*/
              (unsigned __int8 *)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(dword_89DFE0[v52] + 40)) + 776),
              (int)v56);
      IDA_LOWORD(v55) = *(_WORD *)v20; /*0x471034*/
      IDA_BYTE2(v55) = *(_BYTE *)(v20 + 2); /*0x47103c*/
      v21 = dword_89DFE0[v52]; /*0x471067*/
      v54 = 24 * v52; /*0x471071*/
      v22 = (unsigned __int8)v55 | (*(unsigned __int16 *)((char *)&v55 + 1) << 8); /*0x471081*/
      nIDDlgItem = dword_81B1EC[6 * v52]; /*0x471085*/
      lParam = v21; /*0x471089*/
      v23 = GetDlgItem(hWnd, nIDDlgItem); /*0x47108d*/
      SendMessageA(v23, 0x4B2u, 0, lParam); /*0x47109c*/
      v24 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710a4*/
      SendMessageA(v24, 0x498u, 0, v22); /*0x4710af*/
      v25 = dword_89DFE0[v52]; /*0x4710bf*/
      nIDDlgItem = dword_81B1F0[v54 / 4]; /*0x4710c6*/
      swprintf(v58, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v25 + 64)); /*0x4710d8*/
      v26 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710e6*/
      SendMessageA(v26, 0x4B2u, 0, (LPARAM)v58); /*0x4710f5*/
      v27 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710fd*/
      SendMessageA(v27, 0x498u, 0, v22); /*0x471108*/
      nIDDlgItem = dword_81B1F4[v54 / 4]; /*0x471118*/
      swprintf(v60, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE0[v52] + 48)); /*0x471134*/
      v28 = GetDlgItem(hWnd, nIDDlgItem); /*0x471142*/
      SendMessageA(v28, 0x4B2u, 0, (LPARAM)v60); /*0x471154*/
      v29 = GetDlgItem(hWnd, nIDDlgItem); /*0x47115c*/
      SendMessageA(v29, 0x498u, 0, v22); /*0x471167*/
      v30 = dword_89DFE0[v52]; /*0x471177*/
      nIDDlgItem = dword_81B1F8[v54 / 4]; /*0x47117e*/
      swprintf(v59, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v30 + 80)); /*0x471193*/
      v31 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711a1*/
      SendMessageA(v31, 0x4B2u, 0, (LPARAM)v59); /*0x4711b3*/
      v32 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711bb*/
      SendMessageA(v32, 0x498u, 0, v22); /*0x4711c6*/
      v33 = dword_89DFE0[v52]; /*0x4711d6*/
      nIDDlgItem = dword_81B1FC[v54 / 4]; /*0x4711dd*/
      swprintf(v61, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v33 + 96)); /*0x4711f2*/
      v34 = GetDlgItem(hWnd, nIDDlgItem); /*0x471200*/
      SendMessageA(v34, 0x4B2u, 0, (LPARAM)v61); /*0x471212*/
      v35 = GetDlgItem(hWnd, nIDDlgItem); /*0x47121a*/
      SendMessageA(v35, 0x498u, 0, v22); /*0x471225*/
      if ( !v52 ) /*0x47122d*/
        break; /*0x47122d*/
      if ( v52 == 1 ) /*0x47129f*/
      {
        lParam = dword_89DFE4; /*0x4712ad*/
        v40 = GetDlgItem(hWnd, 1849); /*0x4712b1*/
        SendMessageA(v40, 0x4B2u, 0, lParam); /*0x4712c0*/
        v41 = GetDlgItem(hWnd, 1849); /*0x4712c8*/
        SendMessageA(v41, 0x498u, 0, v22); /*0x4712d3*/
        swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE4 + 96)); /*0x4712e9*/
        v42 = GetDlgItem(hWnd, 1848); /*0x4712f7*/
        SendMessageA(v42, 0x4B2u, 0, (LPARAM)Buffer); /*0x471306*/
        v39 = GetDlgItem(hWnd, 1848); /*0x47130e*/
        goto LABEL_25; /*0x47130e*/
      }
  LABEL_26:
      if ( ++v52 >= (int)dword_89E020 ) /*0x47132c*/
        return 0; /*0x47133e*/
    }
    lParam = dword_89DFE0[0]; /*0x47123b*/
    v36 = GetDlgItem(hWnd, 1850); /*0x47123f*/
    SendMessageA(v36, 0x4B2u, 0, lParam); /*0x47124e*/
    v37 = GetDlgItem(hWnd, 1850); /*0x471256*/
    SendMessageA(v37, 0x498u, 0, v22); /*0x471261*/
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE0[0] + 96)); /*0x471276*/
    v38 = GetDlgItem(hWnd, 1851); /*0x471284*/
    SendMessageA(v38, 0x4B2u, 0, (LPARAM)Buffer); /*0x471293*/
    v39 = GetDlgItem(hWnd, 1851); /*0x47129a*/
  LABEL_25:
    SendMessageA(v39, 0x498u, 0, v22); /*0x471310*/
    goto LABEL_26; /*0x471319*/
  }
  return result; /*0x470da5*/
}
}