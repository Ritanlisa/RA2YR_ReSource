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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x470D30
namespace gamemd {
void CampaignScreen_Init()
{
  const wchar_t *v5; // ebp
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v8; // eax
  wchar_t *StringCSF; // eax
  HWND v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  HWND v15; // eax
  int v16; // ecx
  int v17; // ebp
  int v18; // ecx
  wchar_t *v19; // eax
  HWND v20; // eax
  int v21; // eax
  LPARAM v22; // ecx
  LPARAM v23; // ebp
  HWND v24; // eax
  HWND v25; // eax
  int v26; // ecx
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // ecx
  HWND v32; // eax
  HWND v33; // eax
  int v34; // ecx
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND DlgItem; // eax
  int v45; // [esp-Ch] [ebp-174h]
  const wchar_t *v46; // [esp-8h] [ebp-170h]
  wchar_t *v47; // [esp-8h] [ebp-170h]
  wchar_t *v48; // [esp-8h] [ebp-170h]
  wchar_t *v49; // [esp-8h] [ebp-170h]
  int v50; // [esp-8h] [ebp-170h]
  const wchar_t *v51; // [esp-4h] [ebp-16Ch] BYREF
  int nIDDlgItem; // [esp+Ch] [ebp-15Ch]
  int v53; // [esp+10h] [ebp-158h]
  LPARAM lParam; // [esp+14h] [ebp-154h]
  unsigned int v55; // [esp+18h] [ebp-150h]
  int v56; // [esp+1Ch] [ebp-14Ch]
  char v57[4]; // [esp+24h] [ebp-144h] BYREF
  wchar_t Buffer[32]; // [esp+28h] [ebp-140h] BYREF
  wchar_t v59[32]; // [esp+68h] [ebp-100h] BYREF
  wchar_t v60[32]; // [esp+A8h] [ebp-C0h] BYREF
  wchar_t v61[32]; // [esp+E8h] [ebp-80h] BYREF
  wchar_t v62[32]; // [esp+128h] [ebp-40h] BYREF

  result = BaseDialogProc((HWND)this, (unsigned int)hWnd, wParam, (HWND)a4); /*0x470d58*/
  if ( !result ) /*0x470d5f*/
  {
    v51 = v5; /*0x470d65*/
    WindowLongA = (_DWORD *)GetWindowLongA((HWND)this, 8); /*0x470d69*/
    if ( (unsigned int)hWnd > 0x497 ) /*0x470d75*/
    {
      if ( hWnd == (HWND)1240 ) /*0x47138e*/
      {
        if ( !wParam ) /*0x4713ce*/
          SendDlgItemMessageA(1835, 0x4D5u, 0, 29); /*0x4713de*/
      }
      else if ( hWnd == (HWND)1260 ) /*0x471393*/
      {
        SendDlgItemMessageA(1835, 0x4D3u, 0, 0); /*0x4713ca*/
      }
      else if ( hWnd == (HWND)1261 ) /*0x471396*/
      {
        Screen::Capture(1, 0, wParam, (int)v5); /*0x47139c*/
        ShowWindow(0); /*0x4713a4*/
        Dialog::InitWindow(1); /*0x4713ad*/
        return 0; /*0x4713be*/
      }
      return 0; /*0x471396*/
    }
    if ( hWnd == (HWND)1175 ) /*0x470d7b*/
    {
      DlgItem = GetDlgItem((HWND)this, 1835); /*0x471364*/
      PostMessageA(DlgItem, 0x4D7u, 0, (LPARAM)this); /*0x471373*/
      return 0; /*0x471385*/
    }
    if ( hWnd == (HWND)15 ) /*0x470d84*/
    {
      Dialog::DrawBackground(); /*0x471343*/
      Dialog::StopBink(); /*0x47134a*/
      return 0; /*0x47135b*/
    }
    if ( hWnd != (HWND)272 ) /*0x470d90*/
    {
      if ( hWnd == (HWND)273 && (_WORD)wParam == 1745 ) /*0x470d9e*/
      {
        *WindowLongA = 1; /*0x470da6*/
        return 0; /*0x470db6*/
      }
      return 0; /*0x470d9e*/
    }
    Buffer[0] = 0; /*0x470dc5*/
    v8 = GetDlgItem((HWND)this, 1843); /*0x470dcc*/
    SendMessageA(v8, 0x4B2u, 0, (LPARAM)&word_89E0A4); /*0x470de1*/
    v46 = dword_89DFC0; /*0x470deb*/
    StringCSF = GetStringCSF(aGuiCampaignlab, 0, g_Str_File_CampScor_cpp, 1792); /*0x470dfb*/
    swprintf(Buffer, (const size_t)StringCSF, v46); /*0x470e06*/
    v10 = GetDlgItem((HWND)this, 1845); /*0x470e14*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)Buffer); /*0x470e23*/
    if ( dword_89E008 ) /*0x470e2c*/
    {
      if ( dword_89E008 == 1 ) /*0x470e71*/
      {
        v48 = GetStringCSF(aTxtDifficultyM, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e89*/
        v12 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1798); /*0x470e9b*/
        swprintf(Buffer, (const size_t)v12, v48); /*0x470ea6*/
      }
      else if ( dword_89E008 == 2 ) /*0x470eb3*/
      {
        v49 = GetStringCSF(aTxtDifficultyB, 0, g_Str_File_CampScor_cpp, 1800); /*0x470ecb*/
        v13 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1800); /*0x470edd*/
        swprintf(Buffer, (const size_t)v13, v49); /*0x470ee8*/
      }
      else
      {
        v14 = GetStringCSF(aGuiBlank, 0, g_Str_File_CampScor_cpp, 1802); /*0x470f03*/
        swprintf(Buffer, (const size_t)v14, v51); /*0x470f0e*/
      }
    }
    else
    {
      v47 = GetStringCSF(aTxtDifficultyE, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e44*/
      v11 = GetStringCSF(g_Str_GUI_DifficultyString, 0, g_Str_File_CampScor_cpp, 1796); /*0x470e56*/
      swprintf(Buffer, (const size_t)v11, v47); /*0x470e61*/
    }
    v15 = GetDlgItem((HWND)this, 1842); /*0x470f1c*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)Buffer); /*0x470f2b*/
    v16 = dword_89DFD4 / 60; /*0x470f46*/
    if ( &v51 != (const wchar_t **)-44 ) /*0x470f4e*/
    {
      if ( v16 / 3600 > 99 ) /*0x470f6a*/
        v16 = 359999; /*0x470f6c*/
      v17 = v16 / 3600; /*0x470f84*/
      v18 = 720 * (4 * (v16 / -3600) - v16 / 3600) + v16; /*0x470f9d*/
      v50 = v18 % 60; /*0x470fb8*/
      v45 = v18 / 60; /*0x470fb9*/
      v19 = GetStringCSF((wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, g_Str_File_CampScor_cpp, 1770); /*0x470fcc*/
      swprintf(Buffer, (const size_t)v19, (const wchar_t *const)v17, v45, v50); /*0x470fd7*/
    }
    v20 = GetDlgItem((HWND)this, 1002); /*0x470fe5*/
    SendMessageA(v20, 0x4B2u, 0, (LPARAM)Buffer); /*0x470ff4*/
    v53 = 0; /*0x470ffd*/
    if ( (int)dword_89E020 <= 0 ) /*0x471005*/
      return 0; /*0x4713e4*/
    while ( 1 ) /*0x47102c*/
    {
      v21 = Color::ConvertToRGB( /*0x47102c*/
              (Color *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(dword_89DFE0[v53] + 40)) + 776),
              (int)v57);
      IDA_LOWORD(v56) = *(_WORD *)v21; /*0x471034*/
      IDA_BYTE2(v56) = *(_BYTE *)(v21 + 2); /*0x47103c*/
      v22 = dword_89DFE0[v53]; /*0x471067*/
      v55 = 24 * v53; /*0x471071*/
      v23 = (unsigned __int8)v56 | (*(unsigned __int16 *)((char *)&v56 + 1) << 8); /*0x471081*/
      nIDDlgItem = stru_81AF8C.?[6 * v53 + 7]; /*0x471085*/
      lParam = v22; /*0x471089*/
      v24 = GetDlgItem((HWND)this, nIDDlgItem); /*0x47108d*/
      SendMessageA(v24, 0x4B2u, 0, lParam); /*0x47109c*/
      v25 = GetDlgItem((HWND)this, nIDDlgItem); /*0x4710a4*/
      SendMessageA(v25, 0x498u, 0, v23); /*0x4710af*/
      v26 = dword_89DFE0[v53]; /*0x4710bf*/
      nIDDlgItem = stru_81AF8C.?[v55 / 4 + 8]; /*0x4710c6*/
      swprintf(v59, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v26 + 64)); /*0x4710d8*/
      v27 = GetDlgItem((HWND)this, nIDDlgItem); /*0x4710e6*/
      SendMessageA(v27, 0x4B2u, 0, (LPARAM)v59); /*0x4710f5*/
      v28 = GetDlgItem((HWND)this, nIDDlgItem); /*0x4710fd*/
      SendMessageA(v28, 0x498u, 0, v23); /*0x471108*/
      nIDDlgItem = stru_81AF8C.?[v55 / 4 + 9]; /*0x471118*/
      swprintf(v61, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE0[v53] + 48)); /*0x471134*/
      v29 = GetDlgItem((HWND)this, nIDDlgItem); /*0x471142*/
      SendMessageA(v29, 0x4B2u, 0, (LPARAM)v61); /*0x471154*/
      v30 = GetDlgItem((HWND)this, nIDDlgItem); /*0x47115c*/
      SendMessageA(v30, 0x498u, 0, v23); /*0x471167*/
      v31 = dword_89DFE0[v53]; /*0x471177*/
      nIDDlgItem = stru_81AF8C.?[v55 / 4 + 10]; /*0x47117e*/
      swprintf(v60, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v31 + 80)); /*0x471193*/
      v32 = GetDlgItem((HWND)this, nIDDlgItem); /*0x4711a1*/
      SendMessageA(v32, 0x4B2u, 0, (LPARAM)v60); /*0x4711b3*/
      v33 = GetDlgItem((HWND)this, nIDDlgItem); /*0x4711bb*/
      SendMessageA(v33, 0x498u, 0, v23); /*0x4711c6*/
      v34 = dword_89DFE0[v53]; /*0x4711d6*/
      nIDDlgItem = stru_81AF8C.?[v55 / 4 + 11]; /*0x4711dd*/
      swprintf(v62, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v34 + 96)); /*0x4711f2*/
      v35 = GetDlgItem((HWND)this, nIDDlgItem); /*0x471200*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)v62); /*0x471212*/
      v36 = GetDlgItem((HWND)this, nIDDlgItem); /*0x47121a*/
      SendMessageA(v36, 0x498u, 0, v23); /*0x471225*/
      if ( !v53 ) /*0x47122d*/
        break; /*0x47122d*/
      if ( v53 == 1 ) /*0x47129f*/
      {
        lParam = dword_89DFE4; /*0x4712ad*/
        v41 = GetDlgItem((HWND)this, 1849); /*0x4712b1*/
        SendMessageA(v41, 0x4B2u, 0, lParam); /*0x4712c0*/
        v42 = GetDlgItem((HWND)this, 1849); /*0x4712c8*/
        SendMessageA(v42, 0x498u, 0, v23); /*0x4712d3*/
        swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE4 + 96)); /*0x4712e9*/
        v43 = GetDlgItem((HWND)this, 1848); /*0x4712f7*/
        SendMessageA(v43, 0x4B2u, 0, (LPARAM)Buffer); /*0x471306*/
        v40 = GetDlgItem((HWND)this, 1848); /*0x47130e*/
        goto LABEL_25; /*0x47130e*/
      }
  LABEL_26:
      if ( ++v53 >= (int)dword_89E020 ) /*0x47132c*/
        return 0; /*0x47133e*/
    }
    lParam = dword_89DFE0[0]; /*0x47123b*/
    v37 = GetDlgItem((HWND)this, 1850); /*0x47123f*/
    SendMessageA(v37, 0x4B2u, 0, lParam); /*0x47124e*/
    v38 = GetDlgItem((HWND)this, 1850); /*0x471256*/
    SendMessageA(v38, 0x498u, 0, v23); /*0x471261*/
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(dword_89DFE0[0] + 96)); /*0x471276*/
    v39 = GetDlgItem((HWND)this, 1851); /*0x471284*/
    SendMessageA(v39, 0x4B2u, 0, (LPARAM)Buffer); /*0x471293*/
    v40 = GetDlgItem((HWND)this, 1851); /*0x47129a*/
  LABEL_25:
    SendMessageA(v40, 0x498u, 0, v23); /*0x471310*/
    goto LABEL_26; /*0x471319*/
  }
  return result; /*0x470da5*/
}
}