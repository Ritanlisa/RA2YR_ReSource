// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00470C00  MPCooperative::startGame  this=CampaignEndScoreClass  sig=csp ====
_DWORD *__thiscall MPCooperative::startGame(MPCooperative *this)
{
  this->MPCooperative_field_0x0 = &CampaignEndScoreClass::`vftable'; /*0x470c04*/
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return &this->MPCooperative_field_0x0; /*0x470c20*/
}



// ==== 0x00470C30  CampaignEndScoreClass::method_470C30  this=CampaignEndScoreClass  sig=csp ====
void __thiscall sub_470C30(CampaignEndScoreClass *this)
{
  this->m_0 = (int)&CampaignEndScoreClass::`vftable'; /*0x470c30*/
}



// ==== 0x00470C40  sub_470C40  this=-  sig=ida-proto ====
LRESULT __fastcall sub_470C40(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x470c58*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x470c62*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x470c7b*/
}



// ==== 0x00470D30  CampaignScreen::Init  this=CampaignScreen  sig=csp ====
int __userpurge CampaignScreen::Init@<eax>(
        CampaignScreen *this,
        HWND hWnd,
        unsigned int wParam,
        WPARAM a4,
        unsigned int a5)
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
          SendDlgItemMessageA((HWND)this, 1835, 0x4D5u, 0, 29); /*0x4713de*/
      }
      else if ( hWnd == (HWND)1260 ) /*0x471393*/
      {
        SendDlgItemMessageA((HWND)this, 1835, 0x4D3u, 0, 0); /*0x4713ca*/
      }
      else if ( hWnd == (HWND)1261 ) /*0x471396*/
      {
        Screen::Capture(1, 0, wParam, (int)v5); /*0x47139c*/
        ShowWindow((HWND)this, 0); /*0x4713a4*/
        Dialog::InitWindow((HWND)this, 1); /*0x4713ad*/
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
      Dialog::DrawBackground((Dialog *)this); /*0x471343*/
      Dialog::StopBink((Dialog *)this); /*0x47134a*/
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
      LOWORD(v56) = *(_WORD *)v21; /*0x471034*/
      BYTE2(v56) = *(_BYTE *)(v21 + 2); /*0x47103c*/
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



// ==== 0x00471420  CampaignScore::InitScoreScreenData  this=CampaignScore  sig=csp ====
void __thiscall CampaignScore::InitScoreScreenData(
        CampaignScore *this,
        int a2,
        int Block,
        _BYTE *a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        wchar_t *Source,
        wchar_t *a12)
{
  int v12; // ebx
  int v13; // ebp
  signed int v14; // esi
  int *v15; // eax
  size_t v16; // edx
  CampaignScore *NeedsSaveOrLink; // esi
  ObjectClass *v18; // [esp+0h] [ebp-8h]
  FileSystem *v19; // [esp+0h] [ebp-8h]

  dword_89E020 = a6; /*0x471430*/
  wcscpy(&word_89E0A4, Source); /*0x471435*/
  v14 = dword_89E020; /*0x47143a*/
  if ( (int)dword_89E020 > 0 ) /*0x471449*/
  {
    v15 = dword_89DFE0; /*0x47144b*/
    v16 = dword_89E020; /*0x471455*/
    do /*0x471460*/
    {
      *v15 = *(int *)((char *)v15 + Block - (_DWORD)dword_89DFE0); /*0x47145a*/
      ++v15; /*0x47145c*/
      --v16; /*0x47145f*/
    }
    while ( v16 ); /*0x471460*/
  }
  if ( v14 > 1 ) /*0x471466*/
    qsort(dword_89DFE0, v14, 4u, Compare::Field96); /*0x471475*/
  dword_89DFC0 = (wchar_t *)a10; /*0x471489*/
  dword_89E008 = a9; /*0x471495*/
  dword_89DFD4 = a8; /*0x47149a*/
  NeedsSaveOrLink = (CampaignScore *)dword_A8B230[374].NeedsSaveOrLink; /*0x4714a0*/
  CampaignScore::LoadCampaignScoreAssetsGame(NeedsSaveOrLink); /*0x4714a8*/
  Game::LoadMultiplayerScoreAssets((Game *)NeedsSaveOrLink); /*0x4714af*/
  Screen::Capture(1, 0, v12, v13); /*0x4714b8*/
  Campaign::Screen(0); /*0x4714c9*/
  Map_Init_72D780(v18); /*0x4714ce*/
  FileSystem::CleanupTrees(v19); /*0x4714d3*/
  if ( Block ) /*0x4714da*/
  {
    if ( BYTE1(a5) ) /*0x4714e2*/
      __3_YAXPAX_Z((void *)Block); /*0x4714e5*/
  }
}



// ==== 0x00471500  CampaignScore::Constructor_CampaignScoreClass  this=CampaignScore  sig=csp ====
std::locale::facet *__thiscall CampaignScore::Constructor_CampaignScoreClass(CampaignScore *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CampaignScoreClass::`vftable'; /*0x471509*/
  if ( (a2 & 1) != 0 ) /*0x47150f*/
    __3_YAXPAX_Z(this); /*0x471512*/
  return (std::locale::facet *)this; /*0x47151c*/
}



// ==== 0x00471520  CampaignScore::Constructor_CampaignEndScoreClass  this=CampaignEndScoreClass  sig=csp ====
std::locale::facet *__thiscall CampaignScore::Constructor_CampaignEndScoreClass(CampaignScore *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CampaignEndScoreClass::`vftable'; /*0x471529*/
  if ( (a2 & 1) != 0 ) /*0x47152f*/
    __3_YAXPAX_Z(this); /*0x471532*/
  return (std::locale::facet *)this; /*0x47153c*/
}



// ==== 0x00471540  sub_471540  this=-  sig=ida-proto ====
void sub_471540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47154c*/
  dbl_89E120 = Math::Sqrt(v0 + v0); /*0x47155e*/
}



// ==== 0x00471570  sub_471570  this=-  sig=ida-proto ====
void sub_471570()
{
  dbl_89E170 = dbl_89E120 / 60.0; /*0x47157c*/
}



// ==== 0x00471590  sub_471590  this=-  sig=ida-proto ====
void sub_471590()
{
  dbl_89E158 = 1.0 / dbl_89E170; /*0x47159c*/
}



// ==== 0x004715B0  sub_4715B0  this=-  sig=ida-proto ====
void sub_4715B0()
{
  dbl_89E150 = 0.0174532925199433 * 45.0; /*0x4715bc*/
}



// ==== 0x004715D0  sub_4715D0  this=-  sig=ida-proto ====
void sub_4715D0()
{
  dbl_89E128 = 0.0174532925199433 * 60.0; /*0x4715dc*/
}



// ==== 0x004715F0  sub_4715F0  this=-  sig=ida-proto ====
void sub_4715F0()
{
  dbl_89E0E8 = 0.0174532925199433 * 90.0; /*0x4715fc*/
}



// ==== 0x00471610  sub_471610  this=-  sig=ida-proto ====
__int64 sub_471610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E0E8 - dbl_89E128); /*0x471622*/
  result = Math::RoundToInt(v0 * dbl_89E120 * 0.5); /*0x471636*/
  dword_89E178 = result; /*0x47163b*/
  return result; /*0x471640*/
}



// ==== 0x00471650  sub_471650  this=-  sig=ida-proto ====
void sub_471650()
{
  dbl_89E130 = Math::ArcTan((double)dword_89E178 * 0.00390625); /*0x471667*/
}



// ==== 0x00471680  sub_471680  this=-  sig=ida-proto ====
void sub_471680()
{
  dbl_89E148 = Math::ArcTan((double)(2 * dword_89E178) / dbl_89E120); /*0x4716a2*/
}



// ==== 0x004716B0  sub_4716B0  this=-  sig=ida-proto ====
__int64 sub_4716B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E178) + 0.5); /*0x4716cb*/
  dword_89E16C = result; /*0x4716d0*/
  return result; /*0x4716d6*/
}



// ==== 0x004716E0  sub_4716E0  this=-  sig=ida-proto ====
int sub_4716E0()
{
  word_89E118 = 0; /*0x4716e2*/
  word_89E11A = 0; /*0x4716e8*/
  return 0; /*0x4716ee*/
}



// ==== 0x004716F0  sub_4716F0  this=-  sig=ida-proto ====
int sub_4716F0()
{
  dword_89E138 = 0; /*0x4716f2*/
  dword_89E13C = 0; /*0x4716f7*/
  dword_89E140 = 0; /*0x4716fc*/
  return 0; /*0x471701*/
}



// ==== 0x00471710  sub_471710  this=-  sig=ida-proto ====
int sub_471710()
{
  dword_89E168 = 0; /*0x471715*/
  dword_89E160 = 128; /*0x47171f*/
  dword_89E164 = 128; /*0x471724*/
  return 128; /*0x471729*/
}



// ==== 0x00471730  sub_471730  this=-  sig=ida-proto ====
int sub_471730()
{
  dword_89E108 = 0; /*0x471732*/
  dword_89E10C = 0; /*0x471737*/
  dword_89E110 = 0; /*0x47173c*/
  dword_89E114 = 0; /*0x471741*/
  return 0; /*0x471746*/
}



// ==== 0x00471750  sub_471750  this=-  sig=ida-proto ====
int sub_471750()
{
  dword_89E0F4 = 0; /*0x471757*/
  dword_89E0F8 = 0; /*0x47175c*/
  byte_89E0FC = 1; /*0x471761*/
  byte_89E0FD = 0; /*0x471768*/
  dword_89E0F0 = (int)&DynamicVectorClass<CaptureManagerClass *>::`vftable'; /*0x47176d*/
  dword_89E104 = 10; /*0x471777*/
  dword_89E100 = 0; /*0x471781*/
  return atexit(sub_471790); /*0x47178c*/
}



// ==== 0x00471790  sub_471790  this=-  sig=ida-proto ====
void __cdecl sub_471790()
{
  dword_89E0F0 = (int)&VectorClass<CaptureManagerClass *>::`vftable'; /*0x471798*/
  if ( dword_89E0F4 && byte_89E0FD ) /*0x4717ac*/
  {
    __3_YAXPAX_Z(dword_89E0F4); /*0x4717af*/
    dword_89E0F4 = 0; /*0x4717b7*/
  }
  byte_89E0FD = 0; /*0x4717bd*/
  dword_89E0F8 = 0; /*0x4717c3*/
}



// ==== 0x004717D0  CaptureManagerClass::CaptureManagerClass  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass_Constructor(int this, int a2, int a3, char a4)
{
  int v5; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
  *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
  *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
  *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
  *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
  *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
  *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
  *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
  *(_DWORD *)(this + 72) = a2; /*0x471800*/
  *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
  *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
  *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
  *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
  *(_DWORD *)(this + 60) = a3; /*0x471822*/
  *(_BYTE *)(this + 64) = a4; /*0x471825*/
  *(_BYTE *)(this + 65) = 0; /*0x471828*/
  *(_DWORD *)(this + 76) = 30; /*0x47182b*/
  *(_DWORD *)(this + 68) = 0; /*0x471832*/
  if ( dword_89E100 < dword_89E0F8 /*0x471868*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v5 = dword_89E100++; /*0x471875*/
    *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
  }
  return this; /*0x471889*/
}



// ==== 0x00471890  CaptureManagerClass::SmallFunc  this=CaptureManagerClass  sig=csp ====
int __thiscall SmallFunc_471890(CaptureManagerClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x471893*/
  this->controlNodeCount = 0; /*0x47189f*/
  this->controlNodeCapacity = 0; /*0x4718a2*/
  LOBYTE(this->owner) = 1; /*0x4718a5*/
  BYTE1(this->owner) = 0; /*0x4718a8*/
  this->controlNodes[0] = (int)&DynamicVectorClass<ControlNode *>::`vftable'; /*0x4718ab*/
  *(_DWORD *)&this->CaptureManagerClass_field_30 = 10; /*0x4718b2*/
  this->originalOwner = 0; /*0x4718b9*/
  this->AbstractClass = &CaptureManagerClass::`vftable'; /*0x4718bc*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718c2*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718c9*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718d0*/
  this->overloadCount = 0; /*0x4718d7*/
  *(_DWORD *)this->__pad_3C = 1; /*0x4718da*/
  this->CaptureManagerClass_field_40 = 0; /*0x4718dd*/
  this->CaptureManagerClass_field_41 = 0; /*0x4718e0*/
  this->linkCount = 30; /*0x4718e3*/
  this->overloadLimit = 0; /*0x4718ea*/
  if ( dword_89E100 < dword_89E0F8 /*0x47191f*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v2 = dword_89E100++; /*0x47192c*/
    *((_DWORD *)dword_89E0F4 + v2) = this; /*0x47193b*/
  }
  return (int)this; /*0x471940*/
}



// ==== 0x00471A50  CaptureManagerClass::HandleOverload  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::HandleOverload(CaptureManagerClass *this)
{
  int v2; // eax
  int overloadLimit; // eax
  int linkCount; // eax
  HouseClass *originalOwner; // edx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebp
  int overloadCount; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  int *v17; // eax
  double v18; // st7
  int v20; // [esp+1Ch] [ebp-30h]
  float v21; // [esp+1Ch] [ebp-30h]
  int v22; // [esp+20h] [ebp-2Ch]
  int v23; // [esp+24h] [ebp-28h] BYREF
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+40h] [ebp-Ch]
  int v29; // [esp+44h] [ebp-8h]
  int v30; // [esp+48h] [ebp-4h]

  LOBYTE(v2) = this->CaptureManagerClass_field_40; /*0x471a59*/
  if ( (_BYTE)v2 ) /*0x471a5e*/
  {
    overloadLimit = this->overloadLimit; /*0x471a64*/
    if ( overloadLimit > 0 ) /*0x471a69*/
      this->overloadLimit = overloadLimit - 1; /*0x471a6c*/
    linkCount = this->linkCount; /*0x471a6f*/
    if ( linkCount <= 0 ) /*0x471a74*/
    {
      originalOwner = this->originalOwner; /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3820); /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( (int)originalOwner > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3832) - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( (int)originalOwner > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3876) + 4 * v6); /*0x471abe*/
      v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3848) + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
        overloadCount = this->overloadCount; /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)overloadCount /*0x471b04*/
                                                                                           + 364))(
          overloadCount,
          &v23,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
        if ( !this->CaptureManagerClass_field_41 ) /*0x471b0a*/
        {
          v10 = (int *)(this->overloadCount + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 600), &v24, 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
          v12 = *(_DWORD *)(this->overloadCount + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471b98*/
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = (int *)__2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor( /*0x471c15*/
              v17,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
              v27,
              0,
              0,
              &dword_89E138,
              0);
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(_BYTE *)(this->overloadCount + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(this->overloadCount + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = linkCount - 1; /*0x471a76*/
      this->linkCount = v2; /*0x471a78*/
    }
  }
  return v2; /*0x471a77*/
}



// ==== 0x00471C90  CaptureManagerClass::CanCapture  this=CaptureManagerClass  sig=csp ====
bool __thiscall CaptureManagerClass::CanCapture(int this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
    v3 = *(_DWORD *)(this + 72); /*0x471ca4*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3) /*0x471cfe*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
      && !a2[179]
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 352))(a2) )
    {
      if ( *(_BYTE *)(this + 64) || (v5 = *(_DWORD *)(this + 60), *(_DWORD *)(this + 52) < v5) || v5 == 1 ) /*0x471d1c*/
      {
        v6 = a2[43]; /*0x471d1e*/
        if ( v6 != 19 && v6 != 18 ) /*0x471d2c*/
          return 1; /*0x471ce3*/
      }
    }
  }
  return result; /*0x471d2e*/
}



// ==== 0x00471D40  CaptureManagerClass::CaptureUnit  this=CaptureManagerClass  sig=csp ====
char __userpurge CaptureManagerClass::CaptureUnit@<al>(int a1@<ecx>, int a2@<ebp>, int a3)
{
  char result; // al
  _DWORD *v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebp
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  AnimClass *v27; // eax
  BuildingClass *v28; // eax
  _DWORD *v29; // [esp+4h] [ebp-28h]
  int v30; // [esp+8h] [ebp-24h]
  _DWORD *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+18h] [ebp-14h]
  int v34; // [esp+1Ch] [ebp-10h]
  int v35[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a3 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(_BYTE *)(a3 + 20) & 1) != 0 ? (_DWORD *)a3 : 0;
  result = CaptureManagerClass::CanCapture(a1, v5); /*0x471d6e*/
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 60) == 1 ) /*0x471d85*/
    {
      for ( i = *(_DWORD *)(a1 + 52) - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit(**(CaptureManagerClass ***)(*(_DWORD *)(a1 + 40) + 4 * i), a1, a2, v29, v30, v31); /*0x471d98*/
    }
    v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x471da4*/
    v8 = *v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 72) + 60))(*(_DWORD *)(a1 + 72), 1); /*0x471db2*/
    result = (*(int (__thiscall **)(_DWORD *, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = __2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x471ddc*/
        *(_DWORD *)(v11 + 16) = 0; /*0x471de2*/
        *(_DWORD *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (_DWORD *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(_DWORD *)(a1 + 44); /*0x471df3*/
      if ( *(_DWORD *)(a1 + 52) < v14 /*0x471e18*/
        || (*(_BYTE *)(a1 + 49) || !v14)
        && (v15 = *(_DWORD *)(a1 + 56), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 36) + 8))(a1 + 36, v14 + v15, 0) )
      {
        v16 = *(_DWORD *)(a1 + 52); /*0x471e1f*/
        v17 = *(_DWORD *)(a1 + 40); /*0x471e22*/
        *(_DWORD *)(a1 + 52) = v16 + 1; /*0x471e28*/
        *(_DWORD *)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      v5[176] = *(_DWORD *)(a1 + 72); /*0x471e34*/
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 784); /*0x471e45*/
      *v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x471e4b*/
      v18[1] = v33; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
        || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (_DWORD *)1732) + 3603)
        || v5[43] != 16 )
      {
        v20 = v5[43]; /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((CaptureManagerClass *)a1, (int)v5); /*0x471eae*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6 ) /*0x471ec1*/
      {
        v21 = a3; /*0x471ecb*/
        v22 = dword_89E178 * *(_DWORD *)(*(_DWORD *)(a3 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 72))(v5, v35); /*0x471ee1*/
      v24 = *v23; /*0x471f04*/
      v25 = v23[1]; /*0x471f06*/
      v26 = v22 + v23[2]; /*0x471f11*/
      v32 = v24; /*0x471f13*/
      v33 = v25; /*0x471f17*/
      v34 = v26; /*0x471f1b*/
      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = (BuildingClass *)AnimClass::ctor( /*0x471f4c*/
                                 v27,
                                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 800),
                                 &v32,
                                 0,
                                 1,
                                 (void *)0x600,
                                 0,
                                 0);
      else
        v28 = 0; /*0x471f53*/
      v5[178] = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(_DWORD *)(v5[178] + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/
}



// ==== 0x00471F90  ObjectClass::RemoveFromPointerList  this=FootClass  sig=csp ====
char __thiscall ObjectClass::RemoveFromPointerList(ObjectClass *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  TagClass *attachedTag; // eax
  TagClass *v6; // ecx
  int v7; // eax

  v3 = (int)&this->attachedTag[-1].align36[1]; /*0x471f97*/
  if ( v3 < 0 ) /*0x471f98*/
    return 1; /*0x471fe7*/
  do /*0x471fdc*/
  {
    v4 = *(_DWORD **)(this->owningHouseIndex + 4 * v3); /*0x471fa2*/
    if ( *v4 == a2 ) /*0x471fa7*/
    {
      if ( v4 ) /*0x471fab*/
        __3_YAXPAX_Z(*(void **)(this->owningHouseIndex + 4 * v3)); /*0x471fae*/
      attachedTag = this->attachedTag; /*0x471fb6*/
      if ( v3 < (int)attachedTag ) /*0x471fbb*/
      {
        v6 = (TagClass *)((char *)attachedTag - 1); /*0x471fbd*/
        v7 = v3; /*0x471fc0*/
        for ( this->attachedTag = v6; /*0x471fc7*/
              v7 < (int)this->attachedTag;
              *(_DWORD *)(this->owningHouseIndex + 4 * v7 - 4) = *(_DWORD *)(this->owningHouseIndex + 4 * v7) )
        {
          ++v7; /*0x471fcc*/
        }
      }
    }
    --v3; /*0x471fdb*/
  }
  while ( v3 >= 0 ); /*0x471fdc*/
  return 1; /*0x471fdf*/
}



// ==== 0x00471FF0  CaptureManagerClass::FreeUnit  this=CaptureManagerClass  sig=csp ====
char __userpurge CaptureManagerClass::FreeUnit@<al>(
        CaptureManagerClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4,
        int a5,
        _DWORD *a6)
{
  CaptureManagerClass *v6; // ecx
  CaptureManagerClass *v7; // edi
  int i; // ebx
  int v10; // ebp
  int v11; // ecx
  int (__thiscall **vtable0)(CaptureManagerClass *); // edx
  int v13; // eax
  int controlNodeCount; // ecx
  HouseClass *originalOwner; // eax
  HouseClass *v16; // ecx
  int v17; // eax
  _DWORD v20[3]; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  v7 = v6; /*0x471ff9*/
  if ( !this ) /*0x471ffd*/
    return 0; /*0x472000*/
  for ( i = (int)&v6->originalOwner[-1].HouseClass_field_160B4 + 3; i >= 0; --i ) /*0x47200e*/
  {
    v10 = *(_DWORD *)(v7->controlNodeCount + 4 * i); /*0x472018*/
    if ( *(CaptureManagerClass **)v10 == this ) /*0x472022*/
    {
      v11 = *((_DWORD *)this + 178); /*0x472028*/
      if ( v11 ) /*0x472030*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x472034*/
        *((_DWORD *)this + 178) = 0; /*0x47203a*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(CaptureManagerClass *, int, int))this->AbstractClass + 33))(this, a3, a2) /*0x472059*/
                     + 1456) == -1 )
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 612) != -1 ) /*0x4720a3*/
        {
          v21 = *((_DWORD *)this + 39); /*0x4720af*/
          retaddr = (_UNKNOWN *)this->controlNodeCount; /*0x4720b6*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 612), &v21, 0); /*0x4720cb*/
        }
      }
      else
      {
        v20[0] = *((_DWORD *)this + 39); /*0x472069*/
        vtable0 = (int (__thiscall **)(CaptureManagerClass *))this->AbstractClass; /*0x47206d*/
        v20[1] = this->controlNodeCount; /*0x472072*/
        v20[2] = *((_DWORD *)this + 41); /*0x472079*/
        v13 = vtable0[33](this); /*0x47207f*/
        StartAudioControllerAt(*(_DWORD *)(v13 + 1456), v20, 0); /*0x47208d*/
        v10 = a5; /*0x472092*/
      }
      a2 = 1; /*0x4720d5*/
      a3 = *(_DWORD *)(v10 + 4); /*0x4720d7*/
      (*((void (__thiscall **)(CaptureManagerClass *))this->AbstractClass + 245))(this); /*0x4720da*/
      CaptureManagerClass::DecideUnitFate(v7, (int)this); /*0x4720e3*/
      this->controlNodeCapacity = 0; /*0x4720e8*/
      controlNodeCount = v7->controlNodeCount; /*0x4720f2*/
      if ( *(_DWORD *)(controlNodeCount + 4 * i) ) /*0x4720f5*/
        __3_YAXPAX_Z(*(void **)(controlNodeCount + 4 * i)); /*0x4720fd*/
      originalOwner = v7->originalOwner; /*0x472105*/
      if ( i < (int)originalOwner ) /*0x47210a*/
      {
        v16 = (HouseClass *)((char *)originalOwner - 1); /*0x47210c*/
        v17 = i; /*0x47210f*/
        for ( v7->originalOwner = v16; /*0x472116*/
              v17 < (int)v7->originalOwner;
              *(_DWORD *)(v7->controlNodeCount + 4 * v17 - 4) = *(_DWORD *)(v7->controlNodeCount + 4 * v17) )
        {
          ++v17; /*0x47211b*/
        }
      }
    }
  }
  return 1; /*0x471fff*/
}



// ==== 0x00472140  CaptureManager::FreeAll  this=CaptureManager  sig=csp ====
int __thiscall CaptureManager_FreeAll(_DWORD *this)
{
  int i; // esi
  int result; // eax

  for ( i = this->u32_34 - 1; i >= 0; --i ) /*0x472148*/
    result = CaptureManagerClass::FreeUnit(**(_DWORD **)(this->u32_28 + 4 * i)); /*0x472155*/
  return result; /*0x47215d*/
}



// ==== 0x00472160  CaptureManagerClass::DrawLinks  this=CaptureManagerClass  sig=csp ====
char CaptureManagerClass::DrawLinks(CaptureManagerClass *this, ...)
{
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, this);
  v2 = v1; /*0x472167*/
  v3 = *(_DWORD *)(v1 + 72); /*0x47216e*/
  HIBYTE(v20) = *(_BYTE *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(_DWORD *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(_DWORD *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(_BYTE *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(_DWORD *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          LOBYTE(v3) = HIBYTE(v20); /*0x4721d6*/
          if ( HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(_DWORD *)(v7 + 156); /*0x4721ec*/
            v11 = *(_DWORD *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (__thiscall **)(int, int, int, void *, int, int))(*(_DWORD *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = *(_DWORD **)(v2 + 72); /*0x47220c*/
            HIBYTE(v20) = HIBYTE(v13); /*0x47220f*/
            LOWORD(v20) = *(_WORD *)(v13[135] + 22265); /*0x472223*/
            BYTE2(v20) = *(_BYTE *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(_DWORD *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (__thiscall **)(_DWORD *))(*v13 + 176))(v13); /*0x472264*/
            LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x4721af*/
LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/
}



// ==== 0x004722A0  CaptureManagerClass::CannotControlAnyMore  this=CaptureManagerClass  sig=csp ====
bool __thiscall CaptureManagerClass::CannotControlAnyMore(CaptureManagerClass *this)
{
  return !this->CaptureManagerClass_field_40 && (int)this->originalOwner >= *(_DWORD *)this->__pad_3C; /*0x4722a7*/
}



// ==== 0x004722C0  CellClass::HasContent  this=CellClass  sig=csp ====
int __thiscall CellClass::HasContent(CellClass *this)
{
  return *(_DWORD *)&this->__pad_28[12] > 0; /*0x4722ca*/
}



// ==== 0x004722D0  TechnoClass::processPowerDrain  this=FootClass  sig=csp ====
int __thiscall TechnoClass::processPowerDrain(TechnoClass *this)
{
  return (int)this->?; /*0x4722d3*/
}



// ==== 0x004722F0  CaptureManagerClass::GetOriginalOwner  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass::GetOriginalOwner(CaptureManagerClass *this, int a2)
{
  int v2; // eax
  int controlNodeCount; // edx
  _DWORD **i; // ecx

  v2 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  controlNodeCount = this->controlNodeCount; /*0x4722f8*/
  for ( i = (_DWORD **)(controlNodeCount + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(_DWORD *)(*(_DWORD *)(controlNodeCount + 4 * v2) + 4); /*0x472310*/
}



// ==== 0x00472330  HouseClass::AssignCivilianToLowPowerTargets  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AssignCivilianToLowPowerTargets(HouseClass *this, int a2)
{
  int nextArrayIndex; // esi
  int v4; // eax
  int v5; // ecx
  char *i; // edx
  int v8; // ecx
  int j; // edx
  _DWORD *v10; // eax

  nextArrayIndex = stru_A80220.?; /*0x472333*/
  v4 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x472341*/
  v5 = 0; /*0x472346*/
  if ( nextArrayIndex <= 0 ) /*0x47234a*/
    return 0; /*0x47234a*/
  for ( i = (char *)stru_A80220.?; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 52) + 188) != v4; i += 4 ) /*0x472352*/
  {
    if ( ++v5 >= nextArrayIndex ) /*0x472367*/
      return 0; /*0x47236f*/
  }
  v8 = *((_DWORD *)stru_A80220.? + v5); /*0x472372*/
  if ( !v8 ) /*0x472377*/
    return 0; /*0x47237c*/
  for ( j = this->relatedTagsCapacity - 1; j >= 0; --j ) /*0x472386*/
  {
    v10 = (_DWORD *)*((_DWORD *)&this->buildingType->AbstractClass + j); /*0x47238f*/
    if ( *v10 == a2 ) /*0x472394*/
      v10[1] = v8; /*0x472396*/
  }
  return 1; /*0x472369*/
}



// ==== 0x004723B0  CaptureManagerClass::DecideUnitFate  this=CaptureManagerClass  sig=csp ====
void __thiscall CaptureManagerClass::DecideUnitFate(CaptureManagerClass *this, int a2)
{
  int v3; // edi
  int *v5; // ecx
  FactoryClass *v6; // ecx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v13; // ebp
  int v14; // eax
  bool v15; // cc
  int v16; // esi
  int overloadCount; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  CaptureManagerClass *v21; // ecx
  char v22; // al
  int v23; // [esp-4h] [ebp-24h]
  int v24; // [esp+10h] [ebp-10h]
  int v25; // [esp+10h] [ebp-10h]
  int v27; // [esp+18h] [ebp-8h]
  bool v29; // [esp+24h] [ebp+4h]

  _EBX = (_BYTE *)a2; /*0x4723b4*/
  v3 = 0; /*0x4723bb*/
  if ( !a2 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(int **)(a2 + 1492); /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, a2, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(FactoryClass **)(a2 + 628); /*0x4723e4*/
  if ( v6 && v6->production[1] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes((CCINIClass *)a2, 0); /*0x47240f*/
  v7 = *(_DWORD *)(a2 + 540); /*0x472417*/
  v8 = *(_DWORD *)(this->overloadCount + 540); /*0x472422*/
  v29 = v7 != v8; /*0x47242c*/
  if ( *(_BYTE *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v24 = 0; /*0x472446*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 36) + 24))(v8 + 36) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x472459*/
                                                                                     + 3772) )
  {
    HouseClass::GetPowerRatio(*(HouseClass **)(this->overloadCount + 540)); /*0x472470*/
    __asm /*0x472475*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x472480*/
    {
      v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3716); /*0x47248f*/
    }
    else
    {
      __asm { fild dword ptr [ebx+6Ch] } /*0x472497*/
      __asm { fstp [esp+20h+var_8] }
      _EAX = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 132))(_EBX); /*0x4724a2*/
      __asm { fild dword ptr [eax+0A0h] } /*0x4724a8*/
      _ESI = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4724ae*/
      __asm /*0x4724b4*/
      {
        fdivr [esp+20h+var_8]
        fcomp dword ptr [esi+0EC0h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x4724c3*/
        v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3688); /*0x4724cd*/
      else
        v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3660); /*0x4724dd*/
    }
  }
  else
  {
    v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3744); /*0x47245f*/
  }
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 100); /*0x4724f7*/
  v27 = 0; /*0x4724f9*/
  if ( v13 <= 0 )
  {
LABEL_22:
    v16 = v24; /*0x472537*/
    (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 132))(_EBX); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    overloadCount = this->overloadCount; /*0x47256f*/
    if ( overloadCount ) /*0x472574*/
    {
      if ( (*(_BYTE *)(overloadCount + 20) & 4) != 0 ) /*0x47257a*/
      {
        v18 = *(_DWORD *)(overloadCount + 1492); /*0x47257c*/
        if ( v18 ) /*0x472584*/
        {
          v19 = *(_DWORD *)(v18 + 36); /*0x472586*/
          if ( *(_DWORD *)(v19 + 192) ) /*0x472589*/
          {
            v25 = *(_DWORD *)(v19 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v16 = v25; /*0x4725a9*/
          }
        }
      }
    }
    switch ( v16 )
    {
      case 1:
        if ( !v29 )
        {
          v20 = this->overloadCount; /*0x4725bd*/
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 20) & 4) != 0 )
            {
              v21 = *(CaptureManagerClass **)(v20 + 1492); /*0x4725ca*/
              if ( v21 )
              {
                v22 = CaptureManagerClass::AddMember(v21, (_EBX[20] & 4) != 0 ? (unsigned int)_EBX : 0);
                break; /*0x4725e0*/
              }
            }
          }
        }
LABEL_34:
        Debug::Log(); /*0x4725e9*/
        (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)_EBX + 488))(_EBX, 15, 0); /*0x4725fe*/
        return; /*0x4725fe*/
      case 2:
        v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 828))(_EBX); /*0x472617*/
        break;
      case 3:
        v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 832))(_EBX); /*0x472628*/
        break;
      case 5:
        return; /*0x472633*/
      default:
        goto LABEL_34; /*0x472633*/
    }
    if ( v22 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v24 != 6 && v3 != v9[4] ) /*0x47250f*/
  {
    ++v24; /*0x47251e*/
    v23 = v3++; /*0x472524*/
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*v9 + 24))(v9, v23); /*0x472526*/
    v15 = v13 <= v14 + v27; /*0x47252f*/
    v27 += v14; /*0x472531*/
    if ( v15 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }
}



// ==== 0x00472640  CaptureManagerClass::NeedsToDrawLinks  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::NeedsToDrawLinks(CaptureManagerClass *this)
{
  int overloadCount; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  overloadCount = this->overloadCount; /*0x472640*/
  if ( *(_BYTE *)(overloadCount + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(_DWORD *)(overloadCount + 284); /*0x472656*/
  if ( v3 && *(_BYTE *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = this->controlNodeCount + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(_DWORD *)i; /*0x472682*/
      if ( *(_BYTE *)(**(_DWORD **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(_DWORD *)(v6 + 8); /*0x472690*/
      v8 = *(_DWORD *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x4726a3*/
LABEL_12:
    if ( v8 > 0 ) /*0x4726a7*/
      return 1; /*0x4726a7*/
    goto LABEL_13; /*0x4726a7*/
  }
  return 0; /*0x472650*/
}



// ==== 0x004726C0  CaptureManagerClass::IsOverloading  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::IsOverloading(int this, bool *a2)
{
  if ( !*(_BYTE *)(this + 64) || *(_DWORD *)(this + 52) <= *(_DWORD *)(this + 60) ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = *(_DWORD *)(this + 68) > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/
}



// ==== 0x004726F0  CaptureManagerClass::PowerDrainUpdate  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass::PowerDrainUpdate(CaptureManagerClass *this, int a2)
{
  int result; // eax
  int overloadCount; // esi
  int v5; // eax

  result = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4726f9*/
  overloadCount = this->overloadCount; /*0x4726fe*/
  if ( overloadCount ) /*0x472703*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(overloadCount + 4) + 16))(overloadCount + 4); /*0x47270c*/
    return Power::TimerProcess(v5); /*0x472712*/
  }
  return result; /*0x472717*/
}



// ==== 0x00472720  CaptureManagerClass::LoadFromStream  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::LoadFromStream(CaptureManagerClass *this, int *a2)
{
  int *v2; // ebx
  CaptureManagerClass *v3; // ebp
  int result; // eax
  _DWORD *v5; // edi
  int v6; // edx
  CaptureManagerClass *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int controlNodeCapacity; // eax
  int v12; // ecx
  HouseClass *originalOwner; // eax
  int controlNodeCount; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = this; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(this, (int)a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140((CaptureManagerClass *)v3->controlNodes, 0, 0); /*0x472757*/
      v3->controlNodes[0] = (int)&DynamicVectorClass<ControlNode *>::`vftable'; /*0x47275c*/
      *(_DWORD *)&v3->CaptureManagerClass_field_30 = 10; /*0x472762*/
      v3->originalOwner = 0; /*0x472769*/
      v3->AbstractClass = &CaptureManagerClass::`vftable'; /*0x47276c*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x472773*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x47277a*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v3->overloadCount); /*0x472791*/
    v6 = *v2; /*0x472796*/
    this = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, CaptureManagerClass **, int, _DWORD))(v6 + 12))(v2, &this, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = this; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( (int)this <= 0 ) /*0x4727be*/
      {
LABEL_19:
        v15 = 0; /*0x472894*/
        if ( (int)v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v3->controlNodeCount + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking( /*0x4728ba*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->controlNodeCount + 4 * v15++));
          }
          while ( v15 < (int)this ); /*0x4728c4*/
        }
        return v18; /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4727d6*/
            *(_DWORD *)(v8 + 16) = 0; /*0x4727dc*/
            *(_DWORD *)(v8 + 8) = v9; /*0x4727df*/
            v5 = (_DWORD *)v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*v2 + 12))(v2, &v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          controlNodeCapacity = v3->controlNodeCapacity; /*0x472844*/
          if ( (int)v3->originalOwner < controlNodeCapacity /*0x472867*/
            || (BYTE1(v3->owner) || !controlNodeCapacity)
            && (v12 = *(_DWORD *)&v3->CaptureManagerClass_field_30, v12 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3->controlNodes[0] + 8))(
                 v3->controlNodes,
                 controlNodeCapacity + v12,
                 0) )
          {
            originalOwner = v3->originalOwner; /*0x47286e*/
            controlNodeCount = v3->controlNodeCount; /*0x472871*/
            v3->originalOwner = (HouseClass *)((char *)&originalOwner->AbstractClass + 1); /*0x472877*/
            *(_DWORD *)(controlNodeCount + 4 * (_DWORD)originalOwner) = v5; /*0x47287a*/
          }
          v7 = this; /*0x472881*/
          if ( ++v17 >= (int)this ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return result; /*0x4728ca*/
}



// ==== 0x004728E0  CaptureManagerClass::SaveToINI  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::SaveToINI(CaptureManagerClass *this, int *a2, int originalOwner)
{
  int Prefix; // edi
  int v5; // edx
  int result; // eax
  int v7; // ebp
  int v8; // edi
  int *v9; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix((int *)this, a2, originalOwner); /*0x4728f8*/
  v9 = (int *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a2; /*0x472905*/
  originalOwner = (int)this->originalOwner; /*0x472911*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))(a2, &originalOwner, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( originalOwner <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(_DWORD *)(this->controlNodeCount + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= originalOwner ) /*0x472950*/
      return (int)v9; /*0x472952*/
  }
  return result; /*0x472958*/
}



// ==== 0x00472960  CaptureManagerClass::GetClassIdentifier  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::GetClassIdentifier(CaptureManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = unk_7E988C; /*0x472990*/
  return 0; /*0x47296d*/
}



// ==== 0x004729A0  CaptureManagerClass::GetObjectSize  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::GetObjectSize(CaptureManagerClass *this)
{
  return 80; /*0x4729a5*/
}



// ==== 0x004729B0  CaptureManagerClass::GetTypeIdentifier  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::GetTypeIdentifier(CaptureManagerClass *this)
{
  return 66; /*0x4729b5*/
}



// ==== 0x004729C0  CaptureManagerClass::ddtor  this=CaptureManagerClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::ddtor(CaptureManagerClass *this, char a2)
{
  int v3; // eax
  void *controlNodeCount; // eax
  CaptureManagerClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &CaptureManagerClass::`vftable'; /*0x4729cd*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729d3*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729da*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729e1*/
  v6 = this; /*0x4729ef*/
  v3 = (*(int (__thiscall **)(int *, CaptureManagerClass **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((_DWORD *)dword_89E0F4 + v3 - 1) = *((_DWORD *)dword_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  controlNodeCount = (void *)this->controlNodeCount; /*0x472a28*/
  this->controlNodes[0] = (int)&VectorClass<ControlNode *>::`vftable'; /*0x472a2b*/
  if ( controlNodeCount && BYTE1(this->owner) ) /*0x472a36*/
  {
    __3_YAXPAX_Z(controlNodeCount); /*0x472a3e*/
    this->controlNodeCount = 0; /*0x472a46*/
  }
  BYTE1(this->owner) = 0; /*0x472a4f*/
  this->controlNodeCapacity = 0; /*0x472a53*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    __3_YAXPAX_Z(this); /*0x472a67*/
  return &this->AbstractClass; /*0x472a71*/
}



// ==== 0x00472A80  _DynamicVectorClass_PAUControlNode::vt[03]  this=DynamicVector  sig=csp ====
void __thiscall CaptureManagerClass::g_var_ffdfec(_DynamicVectorClass_PAUControlNode *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472a86*/
  this->m_10 = 0; /*0x472a89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x472a90*/
  {
    __3_YAXPAX_Z(v2); /*0x472a96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472a9e*/
  }
  BYTE1(this->m_C) = 0; /*0x472aa1*/
  this->m_8 = 0; /*0x472aa4*/
}



// ==== 0x00472AB0  _DynamicVectorClass_PAUControlNode::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall CaptureManagerClass::LoadTypeData(_DynamicVectorClass_PAUControlNode *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472ab0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/
}



// ==== 0x00472AD0  _VectorClass_PAUControlNode::vt[06]  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::g_var_1d5e6b(_VectorClass_PAUControlNode *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x472ada*/
}



// ==== 0x00472AE0  _DynamicVectorClass_PAVCaptureManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::Destroy(_DynamicVectorClass_PAVCaptureManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472ae6*/
  this->m_10 = 0; /*0x472ae9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x472af0*/
  {
    __3_YAXPAX_Z(v2); /*0x472af6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472afe*/
  }
  BYTE1(this->m_C) = 0; /*0x472b01*/
  this->m_8 = 0; /*0x472b04*/
}



// ==== 0x00472B10  _DynamicVectorClass_PAVCaptureManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472b10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472b25*/
  else
    return 0; /*0x472b17*/
}



// ==== 0x00472B30  _VectorClass_PAVCaptureManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::Get(_VectorClass_PAVCaptureManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x472b3a*/
}



// ==== 0x00472B40  _VectorClass_PAUControlNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::AddRef(_VectorClass_PAUControlNode *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x472b42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x472b4d*/
  {
    v3 = 0; /*0x472b4f*/
    if ( m_8 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x472b55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472b5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472b64*/
    {
      ++v3; /*0x472b66*/
      ++v4; /*0x472b67*/
      if ( v3 >= m_8 ) /*0x472b6c*/
        return 1; /*0x472b6c*/
    }
  }
  return 0; /*0x472b6e*/
}



// ==== 0x00472B80  _VectorClass_PAUControlNode::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::SetCapacity(_VectorClass_PAUControlNode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x472b8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x472b96*/
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472bae*/
    LOBYTE(this->m_C) = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x472bc5*/
      {
        m_8 = this->m_8; /*0x472bcc*/
        if ( a2 < m_8 ) /*0x472bd1*/
          m_8 = a2; /*0x472bd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( BYTE1(this->m_C) ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472bf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x472bfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x472c07*/
      this->m_8 = a2; /*0x472c0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUControlNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }
}



// ==== 0x00472C30  _VectorClass_PAUControlNode::Destroy  this=VectorClass  sig=csp ====
void __thiscall CaptureManagerClass::Destroy(_VectorClass_PAUControlNode *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x472c3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472c43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472c4b*/
  }
  BYTE1(this->m_C) = 0; /*0x472c4e*/
  this->m_8 = 0; /*0x472c51*/
}



// ==== 0x00472C60  _VectorClass_PAUControlNode::IndexOf  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::IndexOf(_VectorClass_PAUControlNode *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x472c60*/
    return 0; /*0x472c68*/
  m_8 = this->m_8; /*0x472c6e*/
  result = 0; /*0x472c71*/
  if ( m_8 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= m_8 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/
}



// ==== 0x00472CA0  _VectorClass_PAUControlNode::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall CaptureManagerClass::PointerToIndex(_VectorClass_PAUControlNode *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472ca0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/
}



// ==== 0x00472CC0  _DynamicVectorClass_PAUControlNode::Release  this=DynamicVector  sig=csp ====
char __thiscall CaptureManagerClass::Release(_DynamicVectorClass_PAUControlNode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472ccc*/
  {
    LOBYTE(this->m_C) = 0; /*0x472cd2*/
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472cea*/
    LOBYTE(this->m_C) = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x472cf8*/
    {
      m_8 = this->m_8; /*0x472cff*/
      if ( a2 < m_8 ) /*0x472d04*/
        m_8 = a2; /*0x472d06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( BYTE1(this->m_C) ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472d29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x472d31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x472d3a*/
    this->m_8 = a2; /*0x472d42*/
    BYTE1(this->m_C) = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUControlNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472d4e*/
  }
  v7 = this->m_8; /*0x472d51*/
  if ( v7 < this->m_10 ) /*0x472d59*/
    this->m_10 = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/
}



// ==== 0x00472D70  _DynamicVectorClass_PAUControlNode::Capture  this=DynamicVector  sig=csp ====
int __thiscall CaptureManagerClass::Capture(_DynamicVectorClass_PAUControlNode *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( m_10 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= m_10 ) /*0x472d8d*/
      return -1; /*0x472d8d*/
  }
  return result; /*0x472d92*/
}



// ==== 0x00472DA0  _VectorClass_PAVCaptureManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::Add(_VectorClass_PAVCaptureManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x472da2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x472dad*/
  {
    v3 = 0; /*0x472daf*/
    if ( m_8 <= 0 ) /*0x472db3*/
      return 1; /*0x472dd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x472db5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472dbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472dc4*/
    {
      ++v3; /*0x472dc6*/
      ++v4; /*0x472dc7*/
      if ( v3 >= m_8 ) /*0x472dcc*/
        return 1; /*0x472dcc*/
    }
  }
  return 0; /*0x472dce*/
}



// ==== 0x00472DE0  _VectorClass_PAVCaptureManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::Release(
        _VectorClass_PAVCaptureManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x472dec*/
  {
    LOBYTE(this->m_C) = 0; /*0x472df6*/
    if ( a3 ) /*0x472dfc*/
      v4 = a3; /*0x472e12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472e0e*/
    LOBYTE(this->m_C) = 1; /*0x472e16*/
    if ( v4 ) /*0x472e1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x472e25*/
      {
        m_8 = this->m_8; /*0x472e2c*/
        if ( a2 < m_8 ) /*0x472e31*/
          m_8 = a2; /*0x472e33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472e39*/
          ++i; /*0x472e3e*/
        if ( BYTE1(this->m_C) ) /*0x472e4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472e56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x472e5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x472e67*/
      this->m_8 = a2; /*0x472e6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x472e72*/
      return 1; /*0x472e78*/
    }
    else
    {
      return 0; /*0x472e1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVCaptureManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472e82*/
    return 1; /*0x472e88*/
  }
}



// ==== 0x00472E90  _VectorClass_PAVCaptureManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::Remove(_VectorClass_PAVCaptureManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x472e9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472ea3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472eab*/
  }
  BYTE1(this->m_C) = 0; /*0x472eae*/
  this->m_8 = 0; /*0x472eb1*/
}



// ==== 0x00472EC0  _VectorClass_PAVCaptureManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::GetSize(_VectorClass_PAVCaptureManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x472ec0*/
    return 0; /*0x472ec8*/
  m_8 = this->m_8; /*0x472ece*/
  result = 0; /*0x472ed1*/
  if ( m_8 <= 0 ) /*0x472ed5*/
    return -1; /*0x472eec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472edb*/
  {
    if ( ++result >= m_8 ) /*0x472eea*/
      return -1; /*0x472eea*/
  }
  return result; /*0x472eca*/
}



// ==== 0x00472F00  _VectorClass_PAVCaptureManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::GetCapacity(
        _VectorClass_PAVCaptureManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472f00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472f15*/
  else
    return 0; /*0x472f07*/
}



// ==== 0x00472F20  _DynamicVectorClass_PAVCaptureManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::SetCapacity(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472f2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x472f32*/
    if ( a3 ) /*0x472f38*/
      v4 = a3; /*0x472f4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472f4a*/
    LOBYTE(this->m_C) = 1; /*0x472f52*/
    if ( !v4 ) /*0x472f56*/
      return 0; /*0x472fca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x472f58*/
    {
      m_8 = this->m_8; /*0x472f5f*/
      if ( a2 < m_8 ) /*0x472f64*/
        m_8 = a2; /*0x472f66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472f6c*/
        ++i; /*0x472f71*/
      if ( BYTE1(this->m_C) ) /*0x472f7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472f89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x472f91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x472f9a*/
    this->m_8 = a2; /*0x472fa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x472fa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVCaptureManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472fae*/
  }
  v7 = this->m_8; /*0x472fb1*/
  if ( v7 < this->m_10 ) /*0x472fb9*/
    this->m_10 = v7; /*0x472fbb*/
  return 1; /*0x472fbe*/
}



// ==== 0x00472FD0  _DynamicVectorClass_PAVCaptureManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x472fd0*/
  result = 0; /*0x472fd3*/
  if ( m_10 <= 0 ) /*0x472fd8*/
    return -1; /*0x472fef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472fde*/
  {
    if ( ++result >= m_10 ) /*0x472fed*/
      return -1; /*0x472fed*/
  }
  return result; /*0x472ff2*/
}



// ==== 0x00473000  _VectorClass_PAUControlNode::Constructor_VectorClass_ControlNode___  this=VectorClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::Constructor_VectorClass_ControlNode___(
        _VectorClass_PAUControlNode *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x473003*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ControlNode *>::`vftable'; /*0x473006*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473010*/
  {
    __3_YAXPAX_Z(v3); /*0x473018*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473020*/
  }
  BYTE1(this->m_C) = 0; /*0x47302b*/
  this->m_8 = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    __3_YAXPAX_Z(this); /*0x47303b*/
  return this->__pad_0; /*0x473045*/
}



// ==== 0x00473050  _DynamicVectorClass_PAUControlNode::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::QueryInterface(_DynamicVectorClass_PAUControlNode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x473053*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ControlNode *>::`vftable'; /*0x473056*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473060*/
  {
    __3_YAXPAX_Z(v3); /*0x473068*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473070*/
  }
  BYTE1(this->m_C) = 0; /*0x47307b*/
  this->m_8 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    __3_YAXPAX_Z(this); /*0x47308b*/
  return this->__pad_0; /*0x473095*/
}



// ==== 0x004730A0  _VectorClass_PAVCaptureManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CaptureManagerClass::QueryInterface(
        _VectorClass_PAVCaptureManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4730a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CaptureManagerClass *>::`vftable'; /*0x4730a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4730b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4730b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4730c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4730cb*/
  this->m_8 = 0; /*0x4730d1*/
  if ( (a2 & 1) != 0 ) /*0x4730d8*/
    __3_YAXPAX_Z(this); /*0x4730db*/
  return this->__pad_0; /*0x4730e5*/
}



// ==== 0x004730F0  _DynamicVectorClass_PAVCaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4730f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CaptureManagerClass *>::`vftable'; /*0x4730f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473100*/
  {
    __3_YAXPAX_Z(v3); /*0x473108*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473110*/
  }
  BYTE1(this->m_C) = 0; /*0x47311b*/
  this->m_8 = 0; /*0x473121*/
  if ( (a2 & 1) != 0 ) /*0x473128*/
    __3_YAXPAX_Z(this); /*0x47312b*/
  return this->__pad_0; /*0x473135*/
}



// ==== 0x00473140  CaptureManagerClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::Constructor_473140(CaptureManagerClass *this, int a2, int a3)
{
  this->? = 0; /*0x47314b*/
  this->? = (void *)a2; /*0x47314e*/
  LOBYTE(this->?) = 1; /*0x473151*/
  BYTE1(this->?) = 0; /*0x473155*/
  this->AbstractClass = &VectorClass<ControlNode *>::`vftable'; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->? = (void *)a3; /*0x473168*/
      return &this->AbstractClass; /*0x47316e*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x47317d*/
    BYTE1(this->?) = 1; /*0x473180*/
  }
  return &this->AbstractClass; /*0x47316d*/
}



// ==== 0x00473190  sub_473190  this=-  sig=ida-proto ====
void sub_473190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47319c*/
  dbl_89E1A0 = Math::Sqrt(v0 + v0); /*0x4731ae*/
}



// ==== 0x004731C0  sub_4731C0  this=-  sig=ida-proto ====
void sub_4731C0()
{
  dbl_89E1F0 = dbl_89E1A0 / 60.0; /*0x4731cc*/
}



// ==== 0x004731E0  sub_4731E0  this=-  sig=ida-proto ====
void sub_4731E0()
{
  dbl_89E1D8 = 1.0 / dbl_89E1F0; /*0x4731ec*/
}



// ==== 0x00473200  sub_473200  this=-  sig=ida-proto ====
void sub_473200()
{
  dbl_89E1D0 = 0.0174532925199433 * 45.0; /*0x47320c*/
}



// ==== 0x00473220  sub_473220  this=-  sig=ida-proto ====
void sub_473220()
{
  dbl_89E1A8 = 0.0174532925199433 * 60.0; /*0x47322c*/
}



// ==== 0x00473240  sub_473240  this=-  sig=ida-proto ====
void sub_473240()
{
  dbl_89E180 = 0.0174532925199433 * 90.0; /*0x47324c*/
}



// ==== 0x00473260  sub_473260  this=-  sig=ida-proto ====
__int64 sub_473260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E180 - dbl_89E1A8); /*0x473272*/
  result = Math::RoundToInt(v0 * dbl_89E1A0 * 0.5); /*0x473286*/
  dword_89E1F8 = result; /*0x47328b*/
  return result; /*0x473290*/
}



// ==== 0x004732A0  sub_4732A0  this=-  sig=ida-proto ====
void sub_4732A0()
{
  dbl_89E1B0 = Math::ArcTan((double)dword_89E1F8 * 0.00390625); /*0x4732b7*/
}



// ==== 0x004732D0  sub_4732D0  this=-  sig=ida-proto ====
void sub_4732D0()
{
  dbl_89E1C8 = Math::ArcTan((double)(2 * dword_89E1F8) / dbl_89E1A0); /*0x4732f2*/
}



// ==== 0x00473300  sub_473300  this=-  sig=ida-proto ====
__int64 sub_473300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E1F8) + 0.5); /*0x47331b*/
  dword_89E1EC = result; /*0x473320*/
  return result; /*0x473326*/
}



// ==== 0x00473330  sub_473330  this=-  sig=ida-proto ====
int sub_473330()
{
  word_89E198 = 0; /*0x473332*/
  word_89E19A = 0; /*0x473338*/
  return 0; /*0x47333e*/
}



// ==== 0x00473340  sub_473340  this=-  sig=ida-proto ====
int sub_473340()
{
  dword_89E1B8 = 0; /*0x473342*/
  dword_89E1BC = 0; /*0x473347*/
  dword_89E1C0 = 0; /*0x47334c*/
  return 0; /*0x473351*/
}



// ==== 0x00473360  sub_473360  this=-  sig=ida-proto ====
int sub_473360()
{
  dword_89E1E8 = 0; /*0x473365*/
  dword_89E1E0 = 128; /*0x47336f*/
  dword_89E1E4 = 128; /*0x473374*/
  return 128; /*0x473379*/
}



// ==== 0x00473380  sub_473380  this=-  sig=ida-proto ====
int sub_473380()
{
  dword_89E188 = 0; /*0x473382*/
  dword_89E18C = 0; /*0x473387*/
  dword_89E190 = 0; /*0x47338c*/
  dword_89E194 = 0; /*0x473391*/
  return 0; /*0x473396*/
}



// ==== 0x004733A0  CellClass::AddObject  this=CellClass  sig=csp ====
void __thiscall CellClass::AddObject(CellClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = a2; /*0x4733a1*/
  if ( a2 ) /*0x4733aa*/
  {
    (*(void (__thiscall **)(_DWORD *))(*a2 + 212))(a2); /*0x4733b0*/
    v4 = a2[12]; /*0x4733b6*/
    if ( v4 && (*(_BYTE *)(v4 + 20) & 4) != 0 ) /*0x4733ca*/
    {
      while ( 1 ) /*0x4733d0*/
      {
        v5 = *(_DWORD *)(v4 + 48); /*0x4733d0*/
        if ( !v5 ) /*0x4733d5*/
          break; /*0x4733d5*/
        if ( (*(_BYTE *)(v5 + 20) & 4) == 0 ) /*0x4733e4*/
          goto LABEL_8; /*0x4733e4*/
        v4 = *(_DWORD *)(v4 + 48); /*0x4733e6*/
      }
      *(_DWORD *)(v4 + 48) = this->foggedObjects; /*0x4733f5*/
    }
    else
    {
LABEL_8:
      a2[12] = this->foggedObjects; /*0x4733fa*/
    }
    this->foggedObjects = a2; /*0x473400*/
    this->mapCoords[0] = 0; /*0x473403*/
    while ( 1 ) /*0x47340c*/
    {
      ++this->mapCoords[0]; /*0x47340c*/
      v6 = v2[12]; /*0x47340e*/
      if ( !v6 || (*(_BYTE *)(v6 + 20) & 4) == 0 ) /*0x473422*/
        break; /*0x473422*/
      v2 = (_DWORD *)v2[12]; /*0x473424*/
    }
  }
}



// ==== 0x00473430  LinkedList::Pop  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Pop(LinkedList *this)
{
  int result; // eax

  result = this->Tail[0]; /*0x473430*/
  if ( result ) /*0x473435*/
  {
    this->Tail[0] = *(_DWORD *)(result + 48); /*0x47343b*/
    *(_DWORD *)(result + 48) = 0; /*0x47343e*/
    --*(_DWORD *)this->__pad_0; /*0x473445*/
  }
  return result; /*0x473437*/
}



// ==== 0x00473450  CCINIClass::GetDB  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::GetDB(CCINIClass *this)
{
  return this->?[0]; /*0x473453*/
}



// ==== 0x00473460  HouseClass::SumPowerDrain  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SumPowerDrain(HouseClass *this)
{
  void *vtable0; // ebx
  _DWORD *vtable1; // ecx
  int result; // eax
  _DWORD *v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // [esp+Ch] [ebp-4h]

  vtable0 = this->AbstractClass; /*0x473462*/
  vtable1 = this->?; /*0x473464*/
  result = 0; /*0x473467*/
  v7 = 0; /*0x47346d*/
  if ( vtable1 ) /*0x473471*/
  {
    v4 = vtable1; /*0x473473*/
    for ( i = 0; i < (int)vtable0; v7 = result ) /*0x47347d*/
    {
      if ( !v4 ) /*0x473481*/
        break; /*0x473481*/
      v6 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x473487*/
      LOWORD(result) = Math::RoundToInt((double)v7 + *(double *)(v6 + 896)); /*0x473497*/
      v4 = (_DWORD *)v4[12]; /*0x47349c*/
      ++i; /*0x47349f*/
    }
  }
  return result; /*0x4734a8*/
}



// ==== 0x004734B0  FootClass::updateMovementAnimation  this=FootClass  sig=csp ====
void __thiscall FootClass::updateMovementAnimation(FootClass *this, int a2)
{
  _DWORD *vtable1; // edx
  _DWORD *v3; // eax

  if ( a2 ) /*0x4734b7*/
  {
    vtable1 = this->?; /*0x4734b9*/
    if ( vtable1 ) /*0x4734be*/
    {
      v3 = (_DWORD *)vtable1[12]; /*0x4734c0*/
      if ( vtable1 == (_DWORD *)a2 ) /*0x4734c5*/
      {
        this->? = v3; /*0x4734c7*/
        --this->TechnoClass; /*0x4734ce*/
      }
      else if ( v3 ) /*0x4734d5*/
      {
        while ( (_DWORD *)a2 != v3 ) /*0x4734d9*/
        {
          vtable1 = v3; /*0x4734db*/
          v3 = (_DWORD *)v3[12]; /*0x4734dd*/
          if ( !v3 ) /*0x4734e2*/
            return; /*0x4734e2*/
        }
        vtable1[12] = *(_DWORD *)(vtable1[12] + 48); /*0x4734ee*/
        --this->TechnoClass; /*0x4734f4*/
      }
    }
  }
}



// ==== 0x00473500  TechnoClass::IndexOf  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IndexOf(TechnoClass *this, int a2)
{
  _DWORD *vtable1; // ecx
  int result; // eax
  int v4; // edx

  vtable1 = this->?; /*0x473500*/
  result = 0; /*0x473503*/
  if ( !vtable1 ) /*0x473508*/
    return 0; /*0x47352c*/
  while ( 1 ) /*0x47350e*/
  {
    ++result; /*0x47350e*/
    if ( vtable1 == (_DWORD *)a2 ) /*0x473511*/
      break; /*0x473511*/
    v4 = vtable1[12]; /*0x473513*/
    if ( v4 ) /*0x473518*/
    {
      if ( (*(_BYTE *)(v4 + 20) & 4) == 0 ) /*0x47351e*/
        return 0; /*0x47351e*/
      vtable1 = (_DWORD *)vtable1[12]; /*0x473520*/
    }
    if ( !vtable1 ) /*0x473524*/
      return 0; /*0x473524*/
  }
  return result; /*0x47352e*/
}



// ==== 0x00473540  sub_473540  this=-  sig=ida-proto ====
void sub_473540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47354c*/
  dbl_89E220 = Math::Sqrt(v0 + v0); /*0x47355e*/
}



// ==== 0x00473570  sub_473570  this=-  sig=ida-proto ====
void sub_473570()
{
  dbl_89E270 = dbl_89E220 / 60.0; /*0x47357c*/
}



// ==== 0x00473590  sub_473590  this=-  sig=ida-proto ====
void sub_473590()
{
  dbl_89E258 = 1.0 / dbl_89E270; /*0x47359c*/
}



// ==== 0x004735B0  sub_4735B0  this=-  sig=ida-proto ====
void sub_4735B0()
{
  dbl_89E250 = 0.0174532925199433 * 45.0; /*0x4735bc*/
}



// ==== 0x004735D0  sub_4735D0  this=-  sig=ida-proto ====
void sub_4735D0()
{
  dbl_89E228 = 0.0174532925199433 * 60.0; /*0x4735dc*/
}



// ==== 0x004735F0  sub_4735F0  this=-  sig=ida-proto ====
void sub_4735F0()
{
  dbl_89E200 = 0.0174532925199433 * 90.0; /*0x4735fc*/
}



// ==== 0x00473610  sub_473610  this=-  sig=ida-proto ====
__int64 sub_473610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E200 - dbl_89E228); /*0x473622*/
  result = Math::RoundToInt(v0 * dbl_89E220 * 0.5); /*0x473636*/
  dword_89E278 = result; /*0x47363b*/
  return result; /*0x473640*/
}



// ==== 0x00473650  Math::InitArcTan  this=Math  sig=ida-proto ====
void Math_InitArcTan()
{
  dbl_89E230 = Math::ArcTan((double)dword_89E278 * 0.00390625); /*0x473667*/
}



// ==== 0x00473680  sub_473680  this=-  sig=ida-proto ====
void sub_473680()
{
  dbl_89E248 = Math::ArcTan((double)(2 * dword_89E278) / dbl_89E220); /*0x4736a2*/
}



// ==== 0x004736B0  sub_4736B0  this=-  sig=ida-proto ====
__int64 sub_4736B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E278) + 0.5); /*0x4736cb*/
  dword_89E26C = result; /*0x4736d0*/
  return result; /*0x4736d6*/
}



// ==== 0x004736E0  sub_4736E0  this=-  sig=ida-proto ====
int sub_4736E0()
{
  word_89E218 = 0; /*0x4736e2*/
  word_89E21A = 0; /*0x4736e8*/
  return 0; /*0x4736ee*/
}



// ==== 0x004736F0  sub_4736F0  this=-  sig=ida-proto ====
int sub_4736F0()
{
  dword_89E238 = 0; /*0x4736f2*/
  dword_89E23C = 0; /*0x4736f7*/
  dword_89E240 = 0; /*0x4736fc*/
  return 0; /*0x473701*/
}



// ==== 0x00473710  sub_473710  this=-  sig=ida-proto ====
int sub_473710()
{
  dword_89E268 = 0; /*0x473715*/
  dword_89E260 = 128; /*0x47371f*/
  dword_89E264 = 128; /*0x473724*/
  return 128; /*0x473729*/
}



// ==== 0x00473730  sub_473730  this=-  sig=ida-proto ====
int sub_473730()
{
  dword_89E208 = 0; /*0x473732*/
  dword_89E20C = 0; /*0x473737*/
  dword_89E210 = 0; /*0x47373c*/
  dword_89E214 = 0; /*0x473741*/
  return 0; /*0x473746*/
}



// ==== 0x00473750  CarryoverClass::method  this=CarryoverClass  sig=csp ====
_DWORD *__thiscall sub_473750(CarryoverClass *this, _DWORD *a2)
{
  CarryoverClass *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v3 = (CarryoverClass *)a2; /*0x473754*/
  *((_DWORD *)this + 1) = 0; /*0x47375a*/
  *((_DWORD *)this + 2) = 0; /*0x47375d*/
  *((_DWORD *)this + 3) = 0; /*0x473760*/
  *((_WORD *)this + 10) = 0; /*0x473763*/
  *((_WORD *)this + 11) = 0; /*0x473767*/
  *((_DWORD *)this + 6) = 0; /*0x47376d*/
  *((_DWORD *)this + 7) = -1; /*0x473770*/
  *this = (CarryoverClass)&CarryoverClass::`vftable'; /*0x473777*/
  if ( v3 ) /*0x47377d*/
  {
    v4 = (*(int (__thiscall **)(CarryoverClass *))(*(_DWORD *)v3 + 44))(v3); /*0x473783*/
    *((_DWORD *)this + 3) = v4; /*0x473786*/
    v5 = v4 - 1; /*0x473789*/
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 ) /*0x473794*/
    {
      v7 = (*(int (__thiscall **)(CarryoverClass *))(*(_DWORD *)v3 + 132))(v3); /*0x4737a6*/
      *((_DWORD *)this + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 64))(v7); /*0x4737b3*/
    }
    *(this + 7) = *(CarryoverClass *)(*(_DWORD *)(*(_DWORD *)&v3[135] + 52) + 184); /*0x4737c7*/
    *(this + 6) = v3[27]; /*0x4737cd*/
    *(this + 5) = *(CarryoverClass *)(*(int (__thiscall **)(CarryoverClass *, _DWORD **))(*(_DWORD *)v3 + 440))(v3, &a2); /*0x4737df*/
  }
  return this; /*0x4737e4*/
}



// ==== 0x004737F0  ReinforcementClass::CreateObject  this=ReinforcementClass  sig=csp ====
char __thiscall ReinforcementClass::CreateObject(ReinforcementClass *this)
{
  IUnknown *Owner; // edi
  int v3; // eax
  ReinforcementClass *v4; // eax
  int v5; // eax
  int *v6; // eax
  bool v7; // zf
  int v8; // edx
  ReinforcementClass v9; // edx
  bool v11; // [esp+8h] [ebp-10h]
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  Owner = (IUnknown *)HouseClass::FindOwner(*((HouseClass **)this + 7)); /*0x4737ff*/
  switch ( *((_DWORD *)this + 3) ) /*0x473805*/
  {
    case 1: /*0x473805*/
      v6 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x473872*/
      if ( !v6 ) /*0x47387c*/
        return 0; /*0x47387c*/
      v4 = (ReinforcementClass *)UnitClass::Construct(v6, *((_DWORD *)dword_A83CE4 + *((_DWORD *)this + 4)), Owner); /*0x473892*/
      break;
    case 6: /*0x473805*/
      v5 = __2_YAPAXI_Z(0x720u); /*0x473846*/
      if ( !v5 ) /*0x473850*/
        return 0; /*0x473850*/
      v4 = (ReinforcementClass *)BuildingClass::Construct( /*0x473866*/
                                   v5,
                                   *((_DWORD *)dword_A83C6C + *((_DWORD *)this + 4)),
                                   (int)Owner);
      break;
    case 0xF: /*0x473805*/
      v3 = __2_YAPAXI_Z(0x6F0u); /*0x47381a*/
      if ( !v3 ) /*0x473824*/
        return 0; /*0x473824*/
      v4 = (ReinforcementClass *)InfantryClass::Construct(v3, *((_DWORD *)dword_A8E34C + *((_DWORD *)this + 4)), Owner); /*0x47383a*/
      break;
    default:
      return 0; /*0x47380f*/
  }
  if ( v4 ) /*0x473899*/
  {
    v7 = dword_A8E7AC == 0; /*0x4738a4*/
    v4[27] = *(this + 6); /*0x4738a6*/
    v11 = !v7; /*0x4738b6*/
    if ( *((_DWORD *)this + 3) == 15 ) /*0x4738ba*/
      dword_A8E7AC = 0; /*0x4738bc*/
    v8 = *((__int16 *)this + 10) << 8; /*0x4738d1*/
    v12[1] = (*((__int16 *)this + 11) << 8) + 128; /*0x4738e0*/
    v12[0] = v8 + 128; /*0x4738e8*/
    v9 = *v4; /*0x4738ec*/
    v12[2] = 0; /*0x4738f3*/
    (*(void (__thiscall **)(ReinforcementClass *, _DWORD *, _DWORD))(*(_DWORD *)&v9 + 216))(v4, v12, 0); /*0x4738fb*/
    if ( *((_DWORD *)this + 3) == 15 ) /*0x473904*/
      dword_A8E7AC = v11; /*0x473910*/
  }
  return 0; /*0x473916*/
}


// ==== 0x00473920  CarryoverClass::QueryInterface  this=CarryoverClass  sig=csp ====
_DWORD *__thiscall CarryoverClass::QueryInterface(CarryoverClass *this, char a2)
{
  LinkClass::Destruct((LinkClass *)this); /*0x473923*/
  if ( (a2 & 1) != 0 ) /*0x47392d*/
    __3_YAXPAX_Z(this); /*0x473930*/
  return this; /*0x47393a*/
}



// ==== 0x00473960  sub_473960  this=-  sig=csp ====
char *__fastcall sub_473960(unsigned int a1)
{
  if ( a1 >= 0xB ) /*0x473963*/
    return g_Str__none_; /*0x47396d*/
  else
    return off_81B7CC[2 * a1]; /*0x473965*/
}



// ==== 0x00473980  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_473980(ObjectTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  v2 = 0; /*0x473989*/
  v3 = off_81B7C8; /*0x47398b*/
  while ( _strcmpi(v3[1], (char *)this) && _strcmpi(*v3, (char *)this) ) /*0x4739af*/
  {
    v3 += 2; /*0x4739b1*/
    ++v2; /*0x4739b4*/
    if ( (int)v3 >= (int)aAirlift ) /*0x4739bb*/
      return -1; /*0x4739bb*/
  }
  return v2; /*0x4739bd*/
}



// ==== 0x004739D0  sub_4739D0  this=-  sig=ida-proto ====
int sub_4739D0()
{
  dword_89E280 = 0; /*0x4739d2*/
  dword_89E284 = 0; /*0x4739d7*/
  dword_89E288 = 0; /*0x4739dc*/
  dword_89E28C = 0; /*0x4739e1*/
  return 0; /*0x4739e6*/
}



// ==== 0x004739F0  CCFileClass::Construct  this=CCFileClass  sig=csp ====
_DWORD *__thiscall CCFileClass::Construct(CCFileClass *this, char *Source)
{
  BufferIOFile::Init((BufferIOFile *)this); /*0x4739f3*/
  Buffer::Init((Buffer *)((char *)this + 88), 0, 0); /*0x4739ff*/
  this->tail_19 = 0; /*0x473a0b*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x473a12*/
  *((_DWORD *)this + 26) = 0; /*0x473a18*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x473a1f*/
  return this->CDFileClass; /*0x473a26*/
}



// ==== 0x00473A30  CCFileClass::Construct2  this=CCFileClass  sig=csp ====
_DWORD *__thiscall CCFileClass::Construct2(CCFileClass *this, char **a2)
{
  char *v3; // eax

  BufferIOFile::Init((BufferIOFile *)this); /*0x473a33*/
  Buffer::Init((Buffer *)((char *)this + 88), 0, 0); /*0x473a3f*/
  this->tail_19 = 0; /*0x473a48*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x473a4f*/
  *((_DWORD *)this + 26) = 0; /*0x473a55*/
  v3 = String::GetOrEmpty_Alt((String *)a2); /*0x473a5c*/
  *((_DWORD *)this + 26) = 0; /*0x473a64*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, v3); /*0x473a6b*/
  return this->CDFileClass; /*0x473a72*/
}



// ==== 0x00473A80  CCFileClass::Construct3  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_Constructor3(int this)
{
  BufferIOFile::Init((_BYTE *)this); /*0x473a83*/
  Buffer::Init((_DWORD *)(this + 88), 0, 0); /*0x473a8f*/
  *(_DWORD *)(this + 100) = 0; /*0x473a94*/
  *(_DWORD *)this = &CCFileClass::`vftable'; /*0x473a9b*/
  *(_DWORD *)(this + 104) = 0; /*0x473aa1*/
  return this; /*0x473aaa*/
}



// ==== 0x00473AB0  CCFileClass::Destru_vt16  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt16(CCFileClass *this, int a2, int a3, int a4)
{
  char result; // al

  result = this->?; /*0x473ab0*/
  if ( !result ) /*0x473ab8*/
    return CD::`vftable'(dword_81C1D0); /*0x473acc*/
  return result; /*0x473ad2*/
}



// ==== 0x00473AE0  CCFileClass::Write  this=CCFileClass  sig=csp ====
int __thiscall FileClass::Write(CCFileClass *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  FileClass v4; // edi
  int v5; // eax

  if ( this->FileTimeDateHi ) /*0x473ae3*/
  {
    v4 = this->FileClass; /*0x473aeb*/
    v5 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x473aed*/
    (*(void (__thiscall **)(CCFileClass *, int, _DWORD, int))(*(_DWORD *)&v4 + 64))(this, 13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter(this, (char *)lpBuffer, nNumberOfBytesToWrite); /*0x473b0c*/
}



// ==== 0x00473B10  CCFileClass::Read  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Read(CCFileClass *this, void *lpBuffer, signed int Size)
{
  bool v4; // bl
  int v5; // edx
  int v6; // ecx
  signed int v7; // edi

  v4 = 0; /*0x473b15*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) ) /*0x473b19*/
    v4 = (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 1) != 0; /*0x473b2d*/
  v5 = this->FileTimeDateHi; /*0x473b2f*/
  if ( v5 ) /*0x473b34*/
  {
    v6 = this->tail_19; /*0x473b36*/
    v7 = Size; /*0x473b3c*/
    if ( *((_DWORD *)this + 23) - v6 < Size ) /*0x473b44*/
      v7 = *((_DWORD *)this + 23) - v6; /*0x473b46*/
    if ( v7 ) /*0x473b4a*/
    {
      memcpy(lpBuffer, (const void *)(v5 + v6), v7); /*0x473b55*/
      this->tail_19 += v7; /*0x473b62*/
    }
    if ( v4 ) /*0x473b67*/
    {
      (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473b6d*/
      return v7; /*0x473b75*/
    }
  }
  else
  {
    v7 = FileClass::BufferedReader(this, (char *)lpBuffer, Size); /*0x473b8b*/
    if ( v4 ) /*0x473b8d*/
      (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473b93*/
  }
  return v7; /*0x473b72*/
}



// ==== 0x00473BA0  CCFileClass::Seek  this=CCFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Seek(CCFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int v3; // eax
  bool v4; // sf
  int v5; // eax
  int result; // eax

  if ( !this->FileTimeDateHi ) /*0x473ba0*/
    return BufferIOFileClass::SeekInternal((BufferIOFileClass *)this, lDistanceToMove, dwMoveMethod); /*0x473bf3*/
  if ( dwMoveMethod ) /*0x473bae*/
  {
    if ( dwMoveMethod == 2 ) /*0x473bb3*/
      this->tail_19 = *((_DWORD *)this + 23); /*0x473bb8*/
  }
  else
  {
    this->tail_19 = 0; /*0x473bbd*/
  }
  v3 = this->tail_19; /*0x473bc8*/
  v4 = lDistanceToMove + v3 < 0; /*0x473bcb*/
  v5 = lDistanceToMove + v3; /*0x473bcb*/
  this->tail_19 = v5; /*0x473bd6*/
  result = v4 ? 0 : v5;
  this->tail_19 = result; /*0x473bdb*/
  if ( result > *((_DWORD *)this + 23) ) /*0x473be3*/
    result = *((_DWORD *)this + 23); /*0x473be5*/
  this->tail_19 = result; /*0x473be7*/
  return result; /*0x473bea*/
}



// ==== 0x00473C00  CCFileClass::GetSize  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::GetSize(CCFileClass *this)
{
  int v3; // edx
  const char *v4; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  if ( this->FileTimeDateHi ) /*0x473c04*/
    return *((_DWORD *)this + 23); /*0x473c0b*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x473c15*/
    return BufferIOFileClass::SetSize((BufferIOFileClass *)this); /*0x473c48*/
  v3 = *(_DWORD *)this->CDFileClass; /*0x473c1e*/
  v5 = 0; /*0x473c2b*/
  v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(v3 + 4))(this); /*0x473c33*/
  LookupFileInfoCache(v4, 0, 0, 0, &v5); /*0x473c3a*/
  return v5; /*0x473c0e*/
}



// ==== 0x00473C50  CCFileClass::Open  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Open(CCFileClass *this, int a2)
{
  int result; // eax
  const char *v4; // eax

  if ( *((_DWORD *)this + 26) == 1 ) /*0x473c5c*/
  {
    LOBYTE(result) = 1; /*0x473c5e*/
  }
  else
  {
    result = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 24))(this); /*0x473c69*/
    if ( (_BYTE)result ) /*0x473c6e*/
    {
      *((_DWORD *)this + 26) = 1; /*0x473c70*/
      LOBYTE(result) = 1; /*0x473c73*/
    }
    else
    {
      v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473c84*/
      if ( LookupFileInfoCache(v4, 0, 0, 0, 0) ) /*0x473c8b*/
      {
        *((_DWORD *)this + 26) = 1; /*0x473c94*/
        LOBYTE(result) = 1; /*0x473c97*/
      }
      else
      {
        result = File::IsReady((BufferIOFileClass *)this, 0); /*0x473ca2*/
        if ( (_BYTE)result ) /*0x473ca9*/
        {
          *((_DWORD *)this + 26) = 1; /*0x473cab*/
          LOBYTE(result) = 1; /*0x473cae*/
        }
        else
        {
          *((_DWORD *)this + 26) = 2; /*0x473cb5*/
          LOBYTE(result) = 0; /*0x473cbd*/
        }
      }
    }
  }
  return result; /*0x473c60*/
}



// ==== 0x00473CD0  CCFileClass::Destru_vt06  this=CCFileClass  sig=csp ====
bool __thiscall CCFileClass::Destru_vt06(CCFileClass *this)
{
  return this->FileTimeDateHi || BufferIOFileClass::Read((BufferIOFileClass *)this); /*0x473cd7*/
}



// ==== 0x00473CE0  CCFileClass::Reset  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Reset(CCFileClass *this)
{
  Buffer *v2; // ecx
  int result; // eax

  v2 = (Buffer *)((char *)this + 88); /*0x473ce3*/
  if ( v2 ) /*0x473ce8*/
    Buffer::Init(v2, 0, 0); /*0x473cee*/
  this->tail_19 = 0; /*0x473cf5*/
  LOBYTE(result) = CCFileClass::Close(this); /*0x473cfc*/
  return result; /*0x473d01*/
}



// ==== 0x00473D10  CCFileClass::Load  this=CCFileClass  sig=csp ====
BOOL __thiscall FileClass::Load(CCFileClass *this, const CHAR *a2)
{
  FileClass v3; // edx
  const char *v4; // eax
  const char *v5; // eax
  char *v6; // edi
  FileClass v7; // eax
  size_t Size; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473d1a*/
  if ( ((unsigned __int8)a2 & 2) != 0 || (unsigned __int8)File::IsReady(this, 0) ) /*0x473d2d*/
    return FileClass::OpenFileBufferIO(this, a2); /*0x473e40*/
  v3 = this->FileClass; /*0x473d44*/
  v11 = 0; /*0x473d4d*/
  v10 = 0; /*0x473d51*/
  Size = 0; /*0x473d55*/
  v12 = 0; /*0x473d59*/
  v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 4))(this); /*0x473d61*/
  if ( !LookupFileInfoCache(v4, &v10, &v11, &v12, &Size) ) /*0x473d68*/
    return FileClass::OpenFileBufferIO(this, a2); /*0x473e2b*/
  if ( v10 || !v11 ) /*0x473d87*/
  {
    if ( this != (CCFileClass *)-88 ) /*0x473e06*/
      Buffer::Init((Buffer *)((char *)this + 88), v10, Size); /*0x473e0e*/
    this->tail_19 = 0; /*0x473e13*/
    return 1; /*0x473e18*/
  }
  else if ( (*(int (__thiscall **)(CCFileClass *, _DWORD, int))(*(_DWORD *)&this->FileClass + 32))( /*0x473d93*/
              this,
              *(_DWORD *)(v11 + 12),
              1) )
  {
    v5 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x473d9e*/
    v6 = _strdup(v5); /*0x473daa*/
    v7 = this->FileClass; /*0x473dac*/
    *((_BYTE *)this + 84) = 1; /*0x473db1*/
    (*(void (__thiscall **)(CCFileClass *, char *))(*(_DWORD *)&v7 + 8))(this, v6); /*0x473db5*/
    *((_BYTE *)this + 84) = 0; /*0x473dbd*/
    FileClass::GetFileSizeOp(this, 0, -1); /*0x473dc0*/
    FileClass::GetFileSizeOp(this, v12, Size); /*0x473dd1*/
    (*(void (__thiscall **)(CCFileClass *, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, 0, 0); /*0x473ddc*/
    free(v6); /*0x473de0*/
    return 1; /*0x473de8*/
  }
  else
  {
    return 0; /*0x473df8*/
  }
}



// ==== 0x00473E50  CCFileClass::Destru_vt14  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destru_vt14(CCFileClass *this)
{
  int DosTimestamp; // ebx
  const char *v3; // eax
  char *v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-70h] BYREF
  BufferIOFile v8; // [esp+10h] [ebp-6Ch] BYREF
  int v9[3]; // [esp+68h] [ebp-14h] BYREF
  int v10; // [esp+74h] [ebp-8h]
  int v11; // [esp+78h] [ebp-4h]

  v7 = 0; /*0x473e5a*/
  DosTimestamp = FileClass::GetDosTimestamp((RawFileClass *)this); /*0x473e63*/
  if ( DosTimestamp ) /*0x473e67*/
    return DosTimestamp; /*0x473e67*/
  v3 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473e78*/
  if ( !LookupFileInfoCache(v3, 0, &v7, 0, 0) ) /*0x473e7f*/
    return DosTimestamp; /*0x473ef7*/
  v4 = *(char **)(v7 + 12); /*0x473e90*/
  BufferIOFile::Init(&v8); /*0x473e93*/
  Buffer::Init((Buffer *)v9, 0, 0); /*0x473e9e*/
  v10 = 0; /*0x473ead*/
  *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473eb1*/
  v11 = 0; /*0x473eb5*/
  FileClass::OpenWithCDSearch((CDFileClass *)&v8, v4); /*0x473eb9*/
  v5 = (*(int (__thiscall **)(BufferIOFile *))(*(_DWORD *)v8.__pad_0 + 56))(&v8); /*0x473ecd*/
  *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473ecf*/
  v10 = 0; /*0x473ed3*/
  Vector::Clear((int)v9); /*0x473ed7*/
  *(_DWORD *)v8.__pad_0 = &off_7E1668; /*0x473ee0*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x473ee8*/
  return v5; /*0x473eef*/
}



// ==== 0x00473F00  CCFileClass::Destru_vt15  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt15(CCFileClass *this, int wFatTime)
{
  char v3; // bl
  const char *v4; // eax
  char *v5; // esi
  int v7; // [esp+10h] [ebp-70h] BYREF
  BufferIOFile v8; // [esp+14h] [ebp-6Ch] BYREF
  int v9[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v10; // [esp+78h] [ebp-8h]
  int v11; // [esp+7Ch] [ebp-4h]

  v7 = 0; /*0x473f10*/
  v3 = FileClass::SetTime((RawFileClass *)this, wFatTime); /*0x473f19*/
  if ( !v3 ) /*0x473f1d*/
  {
    v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473f2e*/
    if ( LookupFileInfoCache(v4, 0, &v7, 0, 0) ) /*0x473f35*/
    {
      v5 = *(char **)(v7 + 12); /*0x473f46*/
      BufferIOFile::Init(&v8); /*0x473f49*/
      Buffer::Init((Buffer *)v9, 0, 0); /*0x473f54*/
      v10 = 0; /*0x473f5e*/
      *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473f62*/
      v11 = 0; /*0x473f6a*/
      FileClass::OpenWithCDSearch((CDFileClass *)&v8, v5); /*0x473f71*/
      v3 = (*(int (__thiscall **)(BufferIOFile *, int))(*(_DWORD *)v8.__pad_0 + 60))(&v8, wFatTime); /*0x473f86*/
      *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473f88*/
      v10 = 0; /*0x473f90*/
      Vector::Clear((int)v9); /*0x473f94*/
      *(_DWORD *)v8.__pad_0 = &off_7E1668; /*0x473f9d*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x473fa5*/
    }
  }
  return v3; /*0x473faa*/
}



// ==== 0x00473FC0  CCFileClass::SetFileName  this=CCFileClass  sig=csp ====
int __thiscall FileClass::SetFileName(CCFileClass *this, char *Source)
{
  *((_DWORD *)this + 26) = 0; /*0x473fc4*/
  return FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x473fd1*/
}



// ==== 0x00473FE0  sub_473FE0  this=-  sig=ida-proto ====
void sub_473FE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x473fec*/
  dbl_89E2B0 = Math::Sqrt(v0 + v0); /*0x473ffe*/
}



// ==== 0x00474010  sub_474010  this=-  sig=ida-proto ====
void sub_474010()
{
  dbl_89E300 = dbl_89E2B0 / 60.0; /*0x47401c*/
}



// ==== 0x00474030  sub_474030  this=-  sig=ida-proto ====
void sub_474030()
{
  dbl_89E2E8 = 1.0 / dbl_89E300; /*0x47403c*/
}



// ==== 0x00474050  sub_474050  this=-  sig=ida-proto ====
void sub_474050()
{
  dbl_89E2E0 = 0.0174532925199433 * 45.0; /*0x47405c*/
}



// ==== 0x00474070  sub_474070  this=-  sig=ida-proto ====
void sub_474070()
{
  dbl_89E2B8 = 0.0174532925199433 * 60.0; /*0x47407c*/
}



// ==== 0x00474090  sub_474090  this=-  sig=ida-proto ====
void sub_474090()
{
  dbl_89E290 = 0.0174532925199433 * 90.0; /*0x47409c*/
}



// ==== 0x004740B0  sub_4740B0  this=-  sig=ida-proto ====
__int64 sub_4740B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E290 - dbl_89E2B8); /*0x4740c2*/
  result = Math::RoundToInt(v0 * dbl_89E2B0 * 0.5); /*0x4740d6*/
  dword_89E308 = result; /*0x4740db*/
  return result; /*0x4740e0*/
}



// ==== 0x004740F0  sub_4740F0  this=-  sig=ida-proto ====
void sub_4740F0()
{
  dbl_89E2C0 = Math::ArcTan((double)dword_89E308 * 0.00390625); /*0x474107*/
}



// ==== 0x00474120  sub_474120  this=-  sig=ida-proto ====
void sub_474120()
{
  dbl_89E2D8 = Math::ArcTan((double)(2 * dword_89E308) / dbl_89E2B0); /*0x474142*/
}



// ==== 0x00474150  sub_474150  this=-  sig=ida-proto ====
__int64 sub_474150()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E308) + 0.5); /*0x47416b*/
  dword_89E2FC = result; /*0x474170*/
  return result; /*0x474176*/
}



// ==== 0x00474180  sub_474180  this=-  sig=ida-proto ====
int sub_474180()
{
  word_89E2A8 = 0; /*0x474182*/
  word_89E2AA = 0; /*0x474188*/
  return 0; /*0x47418e*/
}



// ==== 0x00474190  sub_474190  this=-  sig=ida-proto ====
int sub_474190()
{
  dword_89E2C8 = 0; /*0x474192*/
  dword_89E2CC = 0; /*0x474197*/
  dword_89E2D0 = 0; /*0x47419c*/
  return 0; /*0x4741a1*/
}



// ==== 0x004741B0  sub_4741B0  this=-  sig=ida-proto ====
int sub_4741B0()
{
  dword_89E2F8 = 0; /*0x4741b5*/
  dword_89E2F0 = 128; /*0x4741bf*/
  dword_89E2F4 = 128; /*0x4741c4*/
  return 128; /*0x4741c9*/
}



// ==== 0x004741D0  sub_4741D0  this=-  sig=ida-proto ====
int sub_4741D0()
{
  dword_89E298 = 0; /*0x4741d2*/
  dword_89E29C = 0; /*0x4741d7*/
  dword_89E2A0 = 0; /*0x4741dc*/
  dword_89E2A4 = 0; /*0x4741e1*/
  return 0; /*0x4741e6*/
}



// ==== 0x004741F0  CCINIClass::Load  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::Load(CCINIClass *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  SHA1 v12; // [esp+20h] [ebp-94h] BYREF
  int v13; // [esp+44h] [ebp-70h]
  int v14; // [esp+48h] [ebp-6Ch]
  int v15; // [esp+4Ch] [ebp-68h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  int v18; // [esp+58h] [ebp-5Ch]
  int v19; // [esp+5Ch] [ebp-58h]
  int v20[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = a2; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v10[0] = (int)&FileStraw::`vftable'; /*0x474223*/
  File = INIClass::LoadFile((INIClass *)this, (int)v10, a4); /*0x474230*/
  this->ownsFile = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data((INIClass *)this, g_INI_Key_Digest, (int)v20, 0x14u); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int *)this->INIClass, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  memset(&v12.SHA1_field_0x04, 0, 9); /*0x474286*/
  v18 = 0; /*0x474295*/
  v19 = 0; /*0x474299*/
  v13 = 1732584193; /*0x47429d*/
  v14 = -271733879; /*0x4742a5*/
  v15 = -1732584194; /*0x4742ad*/
  v16 = 271733878; /*0x4742b5*/
  v17 = -1009589776; /*0x4742bd*/
  *(_DWORD *)v12.__pad_0 = &SHAPipe::`vftable'; /*0x4742c5*/
  INIClass::WriteToString((INIClass *)this, (int)&v12); /*0x4742cd*/
  SHA1::ComputeThunk(&v12, this->__pad_41); /*0x4742da*/
  this->ownsFile = 1; /*0x4742e3*/
  Pipe::Dtor((Pipe *)&v12); /*0x4742e7*/
  v8 = memcmp(v20, this->__pad_41, 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((int)v10); /*0x474306*/
  return v7; /*0x474311*/
}



// ==== 0x00474320  CCINIClass::LoadAndVerifyDigest  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadAndVerifyDigest(int *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int result; // eax
  SHA1 v8; // [esp+Ch] [ebp-94h] BYREF
  int v9; // [esp+30h] [ebp-70h]
  int v10; // [esp+34h] [ebp-6Ch]
  int v11; // [esp+38h] [ebp-68h]
  int v12; // [esp+3Ch] [ebp-64h]
  int v13; // [esp+40h] [ebp-60h]
  int v14; // [esp+44h] [ebp-5Ch]
  int v15; // [esp+48h] [ebp-58h]
  int v16[5]; // [esp+8Ch] [ebp-14h] BYREF

  File = INIClass::LoadFile((INIClass *)this, a2, a4); /*0x47433f*/
  this->ownsFile = 0; /*0x474345*/
  if ( !File || !a3 ) /*0x474355*/
    return File; /*0x474355*/
  Base64Data = INIClass::GetBase64Data((INIClass *)this, g_INI_Key_Digest, (int)v16, 0x14u); /*0x47436c*/
  if ( !Base64Data ) /*0x474373*/
    return 2; /*0x474383*/
  if ( Base64Data <= 0 ) /*0x474386*/
    return File; /*0x474386*/
  INIClass::ClearSection(this, (int)g_INI_Key_Digest, 0); /*0x474395*/
  memset(&v8.SHA1_field_0x04, 0, 9); /*0x4743a1*/
  v14 = 0; /*0x4743ad*/
  v15 = 0; /*0x4743b1*/
  v9 = 1732584193; /*0x4743b5*/
  v10 = -271733879; /*0x4743bd*/
  v11 = -1732584194; /*0x4743c5*/
  v12 = 271733878; /*0x4743cd*/
  v13 = -1009589776; /*0x4743d5*/
  *(_DWORD *)v8.__pad_0 = &SHAPipe::`vftable'; /*0x4743dd*/
  INIClass::WriteToString((INIClass *)this, (int)&v8); /*0x4743e5*/
  SHA1::ComputeThunk(&v8, (char *)this + 65); /*0x4743f2*/
  this->ownsFile = 1; /*0x4743fb*/
  Pipe::Dtor((Pipe *)&v8); /*0x4743ff*/
  result = 2; /*0x474412*/
  if ( !memcmp(v16, (char *)this + 65, 0x14u) ) /*0x474417*/
    return File; /*0x47441c*/
  return result; /*0x474375*/
}



// ==== 0x00474430  INIClass::WriteDigest  this=INIClass  sig=csp ====
int __thiscall INIClass::WriteDigest(CCINIClass *this, int a2, char a3)
{
  int v4; // edi
  Pipe v6; // [esp+Ch] [ebp-94h] BYREF
  char v7; // [esp+1Ch] [ebp-84h]
  SHA1 v8; // [esp+20h] [ebp-80h] BYREF
  int v9; // [esp+44h] [ebp-5Ch]
  int v10; // [esp+48h] [ebp-58h]
  int v11; // [esp+4Ch] [ebp-54h]
  int v12; // [esp+50h] [ebp-50h]
  int v13; // [esp+54h] [ebp-4Ch]
  int v14; // [esp+58h] [ebp-48h]
  int v15; // [esp+5Ch] [ebp-44h]

  v6.Pipe_field_0x0C = a2; /*0x47443e*/
  v6.Pipe_field_0x04 = 0; /*0x474451*/
  v6.Pipe_field_0x08 = 0; /*0x474455*/
  v7 = 0; /*0x474459*/
  *(_DWORD *)v6.__pad_0 = &FilePipe::`vftable'; /*0x47445d*/
  if ( a3 ) /*0x474465*/
  {
    INIClass::ClearSection((int *)this->__pad_0, (int)g_INI_Key_Digest, 0); /*0x474482*/
    memset(&v8.SHA1_field_0x04, 0, 9); /*0x47448e*/
    v14 = 0; /*0x47449a*/
    v15 = 0; /*0x47449e*/
    v9 = 1732584193; /*0x4744a2*/
    v10 = -271733879; /*0x4744aa*/
    v11 = -1732584194; /*0x4744b2*/
    v12 = 271733878; /*0x4744ba*/
    v13 = -1009589776; /*0x4744c2*/
    *(_DWORD *)v8.__pad_0 = &SHAPipe::`vftable'; /*0x4744ca*/
    INIClass::WriteToString(this, (int)&v8); /*0x4744d2*/
    SHA1::ComputeThunk(&v8, this->__pad_41); /*0x4744df*/
    this->ownsFile[0] = 1; /*0x4744e8*/
    Pipe::Dtor((Pipe *)&v8); /*0x4744ec*/
    INIClass::ReadBase64Data(this->__pad_0, (unsigned __int8 *)g_INI_Key_Digest, (int)this->__pad_41, 20); /*0x4744fb*/
    v4 = INIClass::WriteToString(this, (int)&v6); /*0x474514*/
    INIClass::ClearSection((int *)this->__pad_0, (int)g_INI_Key_Digest, 0); /*0x474516*/
  }
  else
  {
    v4 = INIClass::WriteToString(this, (int)&v6); /*0x474473*/
  }
  FilePipe::Destructor(&v6); /*0x47451f*/
  return v4; /*0x474526*/
}



// ==== 0x00474540  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_474540(ObjectClass *this, int a2, char a3)
{
  int v5; // edi
  SHA1 v6; // [esp+8h] [ebp-80h] BYREF
  int v7; // [esp+2Ch] [ebp-5Ch]
  int v8; // [esp+30h] [ebp-58h]
  int v9; // [esp+34h] [ebp-54h]
  int v10; // [esp+38h] [ebp-50h]
  int v11; // [esp+3Ch] [ebp-4Ch]
  int v12; // [esp+40h] [ebp-48h]
  int v13; // [esp+44h] [ebp-44h]

  if ( !a3 ) /*0x474552*/
    return INIClass::WriteToString((INIClass *)this, a2); /*0x47455c*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x474575*/
  memset(&v6.SHA1_field_0x04, 0, 9); /*0x47457e*/
  v12 = 0; /*0x47458d*/
  v13 = 0; /*0x474591*/
  v7 = 1732584193; /*0x474595*/
  v8 = -271733879; /*0x47459d*/
  v9 = -1732584194; /*0x4745a5*/
  v10 = 271733878; /*0x4745ad*/
  v11 = -1009589776; /*0x4745b5*/
  *(_DWORD *)v6.__pad_0 = &SHAPipe::`vftable'; /*0x4745bd*/
  INIClass::WriteToString((INIClass *)this, (int)&v6); /*0x4745c5*/
  SHA1::ComputeThunk(&v6, (char *)&this->ambientSoundController[1] + 1); /*0x4745d2*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x4745db*/
  Pipe::Dtor((Pipe *)&v6); /*0x4745df*/
  INIClass::ReadBase64Data( /*0x4745ee*/
    (char *)this,
    (unsigned __int8 *)g_INI_Key_Digest,
    (int)&this->ambientSoundController[1] + 1,
    20);
  v5 = INIClass::WriteToString((INIClass *)this, a2); /*0x47460a*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x47460c*/
  return v5; /*0x474561*/
}



// ==== 0x00474620  INIClass::ReadCoord  this=VectorClass  sig=csp ====
int __userpurge INIClass::ReadCoord@<eax>(
        double *a1@<ecx>,
        double a2@<st0>,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5)
{
  int result; // eax

  INIClass::ReadDouble_Overwrite(a1, a3, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  LOWORD(result) = Math::RoundToInt(a2 * 256.0); /*0x474652*/
  return result; /*0x474649*/
}



// ==== 0x00474660  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_474660(ObjectClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetDouble((char *)this, Block, a3, (double)a4 * 0.00390625); /*0x47467f*/
}



// ==== 0x00474690  ObjectTypeClass::ReadBool  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadBool(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, "%d", 360 * a4 / 256); /*0x4746ba*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x4746d8*/
}



// ==== 0x004746E0  ObjectTypeClass::ReadPrerequisite  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadPrerequisite(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 32) ) /*0x4746f9*/
    return (atoi(String) << 8) / 360; /*0x474727*/
  else
    return a4; /*0x47472f*/
}



// ==== 0x00474740  ObjectTypeClass::ReadSoundList  this=ObjectTypeClass  sig=csp ====
unsigned __int8 **__thiscall ObjectTypeClass::ReadSoundList(
        ObjectTypeClass *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5)
{
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, "%d,%d", &a4, &a3); /*0x474776*/
    HIWORD(a4) = (_WORD)a3; /*0x47478e*/
    *a2 = a4; /*0x47479a*/
    return a2; /*0x474785*/
  }
  else
  {
    *a2 = *a5; /*0x4747ac*/
    return a2; /*0x4747a6*/
  }
}



// ==== 0x004747C0  ObjectTypeClass::ReadBool2  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadBool2(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, __int16 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x4747dd*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x4747fb*/
}



// ==== 0x00474810  WarheadTypeClass::loadWarheadINI  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::loadWarheadINI(
        WarheadTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int Int_Overwrite; // eax
  int result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, a2, a3, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return a4; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return 255; /*0x47485e*/
  return result; /*0x47482a*/
}



// ==== 0x004748A0  INIClass::GetPipIdx  this=INIClass  sig=csp ====
int __thiscall INIClass::GetPipIdx(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a2, a3, (&off_81B958)[2 * a4], Destination, 32); /*0x4748c2*/
  v4 = 0; /*0x4748c7*/
  v5 = &off_81B958; /*0x4748c9*/
  while ( _strcmpi(Destination, *v5) ) /*0x4748e0*/
  {
    v5 += 2; /*0x4748e2*/
    ++v4; /*0x4748e5*/
    if ( (int)v5 >= (int)&off_81B9B0 ) /*0x4748ec*/
      return 1; /*0x4748f8*/
  }
  return dword_81B95C[2 * v4]; /*0x4748ee*/
}



// ==== 0x00474940  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474940(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 32) <= 0 ) /*0x474962*/
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
  v5 = &off_81B9B0; /*0x474966*/
  while ( _strcmpi(Destination, *v5) ) /*0x47497d*/
  {
    v5 += 2; /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return dword_81B9B4[2 * v4]; /*0x47498b*/
}



// ==== 0x004749E0  ObjectTypeClass::loadTypeMember_54749E0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_54749E0(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_473960(a4); /*0x4749f1*/
  INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 32); /*0x474a03*/
  return ObjectTypeClass::loadTypeMember_473980((ObjectTypeClass *)Destination); /*0x474a11*/
}



// ==== 0x00474A90  BuildingTypeClass::FindAnimByName  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindAnimByName(
        BuildingTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    (INIClass *)this,
    a2,
    a3,
    *(char **)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * a4) + 772),
    Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B054D0.__tail_10 <= 0 ) /*0x474ac8*/
    return a4; /*0x474b06*/
  v5 = *(_DWORD *)&stru_B054D0.m_1[3]; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(char **)(*(_DWORD *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(_DWORD *)&stru_B054D0.m_1[3]; /*0x474ae8*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B054D0.__tail_10 ) /*0x474b04*/
      return a4; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}



// ==== 0x00474B20  HouseClass::WriteBuildingTypeNameToINI  this=INIClass  sig=csp ====
char __thiscall sub_474B20(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, *(char **)(*((_DWORD *)dword_B054D4 + a4) + 772)); /*0x474b43*/
}



// ==== 0x00474B50  INIClass::GetCoord  this=INIClass  sig=csp ====
int __thiscall INIClass::GetCoord(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  char v7; // cl
  __int16 v8; // [esp+8h] [ebp-8Ch] BYREF
  char v9; // [esp+Ch] [ebp-88h] BYREF
  char v10; // [esp+10h] [ebp-84h] BYREF
  char Buffer[64]; // [esp+14h] [ebp-80h] BYREF
  char Destination[64]; // [esp+54h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a5, a5[1], a5[2]); /*0x474b7c*/
  if ( INIClass::GetString(this, a3, a4, Buffer, Destination, 64) ) /*0x474ba2*/
  {
    sscanf(Destination, "%d,%d,%d", &v8, &v10, &v9); /*0x474bc4*/
    HIBYTE(v8) = v10; /*0x474bdc*/
    v7 = v9; /*0x474be5*/
    *(_WORD *)a2 = v8; /*0x474bee*/
    *(_BYTE *)(a2 + 2) = v7; /*0x474bf3*/
    return a2; /*0x474bd5*/
  }
  else
  {
    *(_WORD *)a2 = *(_WORD *)a5; /*0x474c0c*/
    *(_BYTE *)(a2 + 2) = a5[2]; /*0x474c13*/
    return a2; /*0x474bff*/
  }
}



// ==== 0x00474C20  INIEntry::Write3Bytes  this=INIEntry  sig=csp ====
char __thiscall INIEntry::Write3Bytes(INIEntry *this, unsigned __int8 *Block, char *a3, unsigned __int8 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474c45*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x474c63*/
}



// ==== 0x00474C70  INIEntry::ReadColor  this=INIEntry  sig=csp ====
int __thiscall INIEntry::ReadColor(
        INIEntry *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  char v7; // cl
  int v8; // [esp+8h] [ebp-8Ch] BYREF
  int v9; // [esp+Ch] [ebp-88h] BYREF
  int v10; // [esp+10h] [ebp-84h] BYREF
  char Buffer[64]; // [esp+14h] [ebp-80h] BYREF
  char Destination[64]; // [esp+54h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a5, a5[1], a5[2]); /*0x474c9c*/
  if ( INIClass::GetString((INIClass *)this, a3, a4, Buffer, Destination, 64) ) /*0x474cc2*/
  {
    v8 = 0; /*0x474cd1*/
    v10 = 0; /*0x474cd5*/
    v9 = 0; /*0x474cd9*/
    sscanf(Destination, "%d,%d,%d", &v8, &v10, &v9); /*0x474cf2*/
    BYTE1(v8) = v10; /*0x474d0a*/
    v7 = v9; /*0x474d13*/
    *(_WORD *)a2 = v8; /*0x474d1c*/
    *(_BYTE *)(a2 + 2) = v7; /*0x474d21*/
    return a2; /*0x474d03*/
  }
  else
  {
    *(_WORD *)a2 = *(_WORD *)a5; /*0x474d3a*/
    *(_BYTE *)(a2 + 2) = a5[2]; /*0x474d41*/
    return a2; /*0x474d2d*/
  }
}



// ==== 0x00474D50  ObjectTypeClass::ReadString  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadString(
        ObjectTypeClass *this,
        unsigned __int8 *Block,
        char *a3,
        unsigned __int8 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474d75*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x474d93*/
}



// ==== 0x00474DA0  INIClass::LookupEnum  this=INIClass  sig=csp ====
int __thiscall INIClass::LookupEnum(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a2, a3, (&off_81B9D8)[2 * a4], Destination, 32); /*0x474dc2*/
  v4 = 0; /*0x474dc7*/
  v5 = &off_81B9D8; /*0x474dc9*/
  while ( _strcmpi(Destination, *v5) ) /*0x474de0*/
  {
    v5 += 2; /*0x474de2*/
    ++v4; /*0x474de5*/
    if ( (int)v5 >= (int)&off_81BA88 ) /*0x474dec*/
      return 0; /*0x474df5*/
  }
  return `typeinfo for'x1[2 * v4]; /*0x474dee*/
}



// ==== 0x00474E40  ObjectTypeClass::loadTypeMember_5474E40  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474E40(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_81BA88)[a4], Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = &off_81BA88; /*0x474e69*/
  while ( _strcmpi(Destination, *v5) ) /*0x474e80*/
  {
    ++v5; /*0x474e82*/
    ++v4; /*0x474e85*/
    if ( (int)v5 >= (int)&off_81BABC ) /*0x474e8c*/
      return -1; /*0x474e96*/
  }
  return v4; /*0x474e8e*/
}



// ==== 0x00474EE0  SuperWeaponTypeClass::loadSWProperties  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::loadSWProperties(
        SuperWeaponTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
  v4 = 0; /*0x474f07*/
  v5 = (char **)&off_7E4C50; /*0x474f09*/
  while ( _strcmpi(Destination, *v5) ) /*0x474f20*/
  {
    ++v5; /*0x474f22*/
    ++v4; /*0x474f25*/
    if ( (int)v5 >= (int)&off_7E4D74 ) /*0x474f2c*/
      return 0; /*0x474f35*/
  }
  return v4; /*0x474f2e*/
}



// ==== 0x00474F50  ObjectTypeClass::ReadInt  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadInt(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *v4; // eax
  char v6; // [esp+0h] [ebp-3Ch] BYREF
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a4 == -1 ) /*0x474f5a*/
  {
    v6 = 0; /*0x474f6a*/
    v4 = &v6; /*0x474f6f*/
  }
  else
  {
    v4 = (char *)(*((_DWORD *)dword_A8E334 + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString((INIClass *)this, a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read((ObjectClass *)Destination); /*0x474f93*/
}



// ==== 0x00474FA0  ObjectTypeClass::ReadDouble  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDouble(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[100]; // [esp+4h] [ebp-64h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 100); /*0x474fba*/
  if ( strlen(Destination) ) /*0x474fc3*/
    return VocClass::FindByName((VocClass *)Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}



// ==== 0x00474FF0  ObjectTypeClass::ReadDouble2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDouble2(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, void *a4)
{
  char *Name; // eax
  StringTable Destination[4]; // [esp+4h] [ebp-20h] BYREF

  Name = AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString((INIClass *)this, a2, a3, Name, Destination[0].__pad_0, 32); /*0x475013*/
  return StringTable::Lookup(Destination); /*0x475021*/
}



// ==== 0x00475060  ObjectTypeClass::ReadBool3  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadBool3(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, void *a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_45DD20((ObjectClass *)a4); /*0x475071*/
  INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 32); /*0x475083*/
  return sub_45DD50((ObjectClass *)Destination); /*0x475091*/
}



// ==== 0x004750D0  INIClass::ParseFlagList  this=INIClass  sig=csp ====
int __thiscall INIClass::ParseFlagList(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *i; // eax
  char String[128]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x4750fa*/
  {
    a4 = 0; /*0x47510d*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475119*/
      a4 |= COMStub_48DEB0((ObjectClass *)i); /*0x475129*/
  }
  return a4; /*0x475139*/
}



// ==== 0x00475150  BulletTypeClass::ReadTrajectoryFlags  this=BulletTypeClass  sig=csp ====
char __thiscall BulletTypeClass::ReadTrajectoryFlags(BulletTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char v4; // bl
  char *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || dword_A83CA8 <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)dword_A83C9C; /*0x47517e*/
  v8 = dword_A83CA8; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(_DWORD *)v5; /*0x47518a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, Str); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(this->ObjectTypeClass, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/
}



// ==== 0x00475260  HouseClass::ReadHouseNamesToBitmask  this=HouseClass  sig=csp ====
int __thiscall HouseClass::ReadHouseNamesToBitmask(HouseClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *i; // eax
  char String[128]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x47528a*/
  {
    a4 = 0; /*0x47529d*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x4752a9*/
      a4 |= 1 << HouseClass::FindByName(i); /*0x4752c2*/
  }
  return a4; /*0x4752d2*/
}



// ==== 0x004752E0  HouseClass::WriteHouseListToINI  this=INIClass  sig=csp ====
char __thiscall sub_4752E0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char v4; // bl
  HouseClass *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x4752ee*/
  Source[0] = 0; /*0x4752f6*/
  if ( !a4 || dword_A80238 <= 0 ) /*0x475307*/
    return 1; /*0x475307*/
  v5 = dword_A8022C; /*0x47530e*/
  v8 = dword_A80238; /*0x475316*/
  do /*0x4753a3*/
  {
    v6 = *(_DWORD *)v5->AbstractClass; /*0x47531a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5->AbstractClass + 48)) & a4) != 0 ) /*0x475330*/
    {
      if ( v4 ) /*0x475334*/
        strcat(Source, Str); /*0x47535b*/
      strcat(Source, (const char *)(v6 + 90100)); /*0x47538a*/
      v4 = Source[0]; /*0x475393*/
    }
    v5 = (HouseClass *)((char *)v5 + 4); /*0x47539b*/
    --v8; /*0x47539f*/
  }
  while ( v8 ); /*0x4753a3*/
  if ( v4 ) /*0x4753ae*/
    return INIClass::SetString(this, Block, a3, Source); /*0x4753c9*/
  else
    return 1; /*0x4753d8*/
}



// ==== 0x004753F0  ArmorType::FindIndex  this=ArmorType  sig=csp ====
int __thiscall ArmorType::FindIndex(ArmorType *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  ArmorType Destination[16]; // [esp+0h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (char *)(&off_7E5210)[a4], Destination[0].__pad_0, 128); /*0x47541c*/
  return ArmorType::LookupByName(Destination); /*0x47542a*/
}



// ==== 0x004754B0  OverlayTypeClass::ReadINIString  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::ReadINIString(
        OverlayTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(a4); /*0x4754cd*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName((OverlayTypeClass *)Destination); /*0x4754f2*/
  else
    return a4; /*0x475502*/
}



// ==== 0x00475540  SuperWeaponTypeClass::FindOrCreate  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindOrCreate(
        SuperWeaponTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  void *v4; // esi
  int result; // eax
  SuperWeaponTypeClass *v6; // eax
  _BYTE *v7; // eax
  int v8; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+4h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475563*/
    return a4; /*0x4755f8*/
  v4 = (void *)PlayerSlot::NameToDialogID(Destination); /*0x475579*/
  if ( (unsigned __int8)BuildingType::IsSpecialType(v4) ) /*0x47557d*/
    return (int)v4; /*0x475586*/
  result = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)Destination); /*0x475596*/
  if ( result == -1 ) /*0x47559e*/
  {
    v6 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x4755a5*/
    if ( v6 ) /*0x4755af*/
      v7 = SuperWeaponTypeClass::Construct(v6, Destination); /*0x4755b8*/
    else
      v7 = 0; /*0x4755bf*/
    v8 = 0; /*0x4755c7*/
    if ( dword_A83CA8 <= 0 ) /*0x4755cb*/
    {
      return -1; /*0x4755df*/
    }
    else
    {
      for ( i = dword_A83C9C; (_BYTE *)*i != v7; ++i ) /*0x4755cd*/
      {
        if ( ++v8 >= dword_A83CA8 ) /*0x4755dd*/
          return -1; /*0x4755dd*/
      }
      return v8; /*0x4755ec*/
    }
  }
  return result; /*0x475588*/
}



// ==== 0x00475610  INIClass::SetHouseName  this=INIClass  sig=csp ====
int __thiscall INIClass::SetHouseName(char *this, unsigned __int8 *Block, char *a3, void *a4)
{
  const char *v5; // edi
  int result; // eax
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  strcpy(Source, g_Str__none_); /*0x475638*/
  if ( (unsigned __int8)BuildingType::IsSpecialType(a4) ) /*0x47564a*/
  {
    FormatHouseClassPlayerName((int)a4, Source, 128); /*0x47565e*/
    goto LABEL_11; /*0x475663*/
  }
  if ( a4 == (void *)-2 ) /*0x475668*/
  {
    v5 = g_Str__random_; /*0x47566e*/
LABEL_10:
    strcpy(Source, v5); /*0x4756a6*/
    goto LABEL_11; /*0x4756ba*/
  }
  if ( a4 == (void *)-3 ) /*0x475678*/
  {
    v5 = g_Str__random_; /*0x47567e*/
    goto LABEL_10; /*0x475683*/
  }
  if ( (int)a4 >= 0 && (int)a4 < dword_A83CA8 ) /*0x475694*/
  {
    v5 = (const char *)(*((_DWORD *)dword_A83C9C + (_DWORD)a4) + 36); /*0x4756a3*/
    goto LABEL_10; /*0x4756a3*/
  }
LABEL_11:
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Source); /*0x4756c3*/
  return result; /*0x4756df*/
}



// ==== 0x004756F0  HouseTypeClass::loadCountryData  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::loadCountryData(HouseTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  SideClass *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475712*/
    return a4; /*0x475782*/
  result = HouseTypeClass::Find((HouseTypeClass *)Destination); /*0x47571f*/
  if ( result == -1 ) /*0x475727*/
  {
    v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x47572e*/
    if ( v5 ) /*0x475738*/
      v6 = SideClass::Construct(v5, Destination); /*0x475741*/
    else
      v6 = 0; /*0x475748*/
    v7 = 0; /*0x475751*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = (_DWORD *)FootClass_Array.?[0]; (_DWORD *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= FootClass_Array.?[0] ) /*0x475767*/
          return -1; /*0x475767*/
      }
      return v7; /*0x475776*/
    }
  }
  return result; /*0x47576d*/
}



// ==== 0x004757D0  INIClass::GetBool  this=INIClass  sig=csp ====
int __thiscall INIClass::GetBool(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  result = LookupNameIndex((ObjectClass *)Destination); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/
}



// ==== 0x00475820  INIClass::SetStringByIndex  this=INIClass  sig=csp ====
char __thiscall INIClass_SetStringByIndex(char *this, unsigned __int8 *Block, char *a3, unsigned int a4)
{
  if ( a4 < dword_ABF3A0 ) /*0x47582c*/
    return INIClass::SetString(this, Block, a3, *((char **)dword_ABF394 + a4)); /*0x475859*/
  else
    return INIClass::SetString(this, Block, a3, g_Str__none_); /*0x47583d*/
}



// ==== 0x00475870  ScenarioClass::ReadAndParseString  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ReadAndParseString(ScenarioClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475892*/
    return ScenarioClass::FindTerrainTypeIndex((ScenarioClass *)Destination); /*0x47589f*/
  else
    return a4; /*0x4758ad*/
}



// ==== 0x004758C0  MapClass::loadTheaterINI  this=INIClass  sig=csp ====
char __thiscall sub_4758C0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, &Theater_Array[112 * a4]); /*0x4758e6*/
}



// ==== 0x004758F0  Scenario::FindBuildingTypeByName  this=Scenario  sig=csp ====
int __thiscall Scenario::FindBuildingTypeByName(Scenario *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475912*/
    return StringList::Find((StringList *)&unk_A83D10, Destination); /*0x475925*/
  else
    return a4; /*0x475933*/
}



// ==== 0x00475950  ScenarioClass::loadMapData  this=INIClass  sig=csp ====
char __thiscall sub_475950(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char *v5; // eax

  v5 = (char *)ScenarioClass::processEndgame(a4); /*0x47595d*/
  return INIClass::SetString(this, Block, a3, v5); /*0x475974*/
}



// ==== 0x00475980  HouseClass::ReadIntFromINI  this=HouseClass  sig=csp ====
int __thiscall HouseClass::ReadIntFromINI(HouseClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4759a2*/
    return HouseClass::FindHouseIndexByName((HouseClass *)Destination); /*0x4759af*/
  else
    return a4; /*0x4759bd*/
}



// ==== 0x004759D0  HouseClass::updateBuildingProduction  this=INIClass  sig=csp ====
char __thiscall sub_4759D0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, (&off_7E1B60)[a4]); /*0x4759eb*/
}



// ==== 0x004759F0  INIClass::ReadStringValue  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadStringValue(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination[0].__pad_0, 128) ) /*0x475a12*/
    return INIClass::readSection(Destination); /*0x475a1f*/
  else
    return a4; /*0x475a2d*/
}



// ==== 0x00475A60  BuildingClass::ReadBuildingSettings  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ReadBuildingSettings(
        BuildingClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char *i; // esi
  int IndexByName; // eax
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x475a84*/
    return a4; /*0x475b55*/
  v4 = 0; /*0x475a9b*/
  for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475aa9*/
  {
    if ( !*i ) /*0x475aaf*/
      break; /*0x475ab2*/
    if ( !_strcmpi(i, aPower) ) /*0x475abe*/
      v4 |= 0x80000000; /*0x475aca*/
    if ( !_strcmpi(i, aFactory) ) /*0x475ad6*/
      v4 |= 0x40000000u; /*0x475ae2*/
    if ( !_strcmpi(i, aBarracks) ) /*0x475aee*/
      v4 |= 0x20000000u; /*0x475afa*/
    if ( !_strcmpi(i, aRadar) ) /*0x475b06*/
      v4 |= 0x10000000u; /*0x475b12*/
    IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)i); /*0x475b1a*/
    if ( IndexByName != -1 ) /*0x475b22*/
      v4 |= 1 << IndexByName; /*0x475b2d*/
  }
  return v4; /*0x475b4a*/
}



// ==== 0x00475B70  WeaponTypeClass::ReadTrajectoryData  this=WeaponTypeClass  sig=csp ====
char __thiscall WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  int v8; // [esp+4h] [ebp-88h]
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = dword_A83C78; /*0x475b94*/
  if ( dword_A83C78 > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v8 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)dword_A83C6C; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Str); /*0x475bf9*/
        strcat(Source, (const char *)(*(_DWORD *)v6 + 36)); /*0x475c27*/
        v4 = v8; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString((char *)this, Block, a3, Source); /*0x475c61*/
}



// ==== 0x00475C70  WeaponTypeClass::ReadVeteranData  this=WeaponTypeClass  sig=csp ====
char __thiscall WeaponTypeClass::ReadVeteranData(
        WeaponTypeClass *this,
        unsigned __int8 *a2,
        char *a3,
        int a4,
        int *Block,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // ebx
  int v11; // ebp
  char *SampleNameByIndex; // edi
  char v13; // bl
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v17; // [esp+89h] [ebp-3h]
  char v18; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475c81*/
  memset(&Source[1], 0, 0x7Cu); /*0x475c90*/
  v17 = 0; /*0x475c92*/
  v18 = 0; /*0x475c94*/
  if ( a8 > 0 ) /*0x475c9e*/
  {
    v10 = Block; /*0x475ca0*/
    v11 = a8; /*0x475ca9*/
    do /*0x475d17*/
    {
      if ( Source[0] ) /*0x475cb1*/
        strcat(Source, Str); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString((char *)this, a2, a3, Source); /*0x475d39*/
  if ( Block && HIBYTE(a7) ) /*0x475d4f*/
    __3_YAXPAX_Z(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}



// ==== 0x00475D70  INIClass::ReadIntList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadIntList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  void *Items; // eax
  bool v17; // zf
  void *v18; // eax
  int v19; // ecx
  VectorClass v21; // [esp+8h] [ebp-21Ch] BYREF
  int v22; // [esp+18h] [ebp-20Ch]
  int v23; // [esp+1Ch] [ebp-208h]
  char String[512]; // [esp+24h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x475d94*/
  {
    VectorClass::Construct(&v21, 0, 0); /*0x475da9*/
    v23 = 10; /*0x475db8*/
    v22 = 0; /*0x475dc0*/
    v21.vtable0 = &TypeList<int>::`vftable'; /*0x475dc4*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475dd6*/
    {
      if ( !*i ) /*0x475dd8*/
        break; /*0x475dda*/
      v12 = atoi(i); /*0x475de6*/
      if ( v22 < v21.Capacity /*0x475e11*/
        || (v21.IsAllocated || !v21.Capacity)
        && v23 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v21.vtable0 + 2))(
             &v21,
             v23 + v21.Capacity,
             0) )
      {
        v13 = v22++; /*0x475e1c*/
        *((_DWORD *)v21.Items + v13) = v12; /*0x475e27*/
      }
    }
    v14 = a2; /*0x475e3c*/
    IntVector::Copy((IntVector *)a2, &v21); /*0x475e4a*/
    v15 = v23; /*0x475e53*/
    *(_DWORD *)(a2 + 16) = v22; /*0x475e57*/
    Items = v21.Items; /*0x475e5a*/
    v17 = v21.Items == 0; /*0x475e5e*/
    *(_DWORD *)(a2 + 20) = v15; /*0x475e60*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x475e63*/
    v21.vtable0 = &VectorClass<int>::`vftable'; /*0x475e69*/
    if ( !v17 && v21.IsAllocated ) /*0x475e77*/
    {
      __3_YAXPAX_Z(Items); /*0x475e7a*/
      v21.Items = 0; /*0x475e82*/
    }
    v18 = a6; /*0x475e86*/
    v21.IsAllocated = 0; /*0x475e8d*/
    v21.Capacity = 0; /*0x475e93*/
    a5 = &VectorClass<int>::`vftable'; /*0x475e97*/
    if ( a6 && HIBYTE(a8) ) /*0x475eab*/
      goto LABEL_19; /*0x475eab*/
  }
  else
  {
    v14 = a2; /*0x475eaf*/
    *(_DWORD *)(a2 + 4) = 0; /*0x475ec2*/
    *(_DWORD *)(a2 + 8) = 0; /*0x475ec5*/
    *(_BYTE *)(a2 + 12) = 1; /*0x475ec8*/
    *(_BYTE *)(a2 + 13) = 0; /*0x475ecc*/
    *(_DWORD *)a2 = &VectorClass<int>::`vftable'; /*0x475ecf*/
    TypeList::Copy((TypeList *)a2, &a5); /*0x475ed5*/
    v19 = a10; /*0x475ee1*/
    *(_DWORD *)(a2 + 16) = a9; /*0x475ee8*/
    v18 = a6; /*0x475eeb*/
    v17 = a6 == 0; /*0x475ef2*/
    *(_DWORD *)(a2 + 20) = v19; /*0x475ef4*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x475ef7*/
    a5 = &VectorClass<int>::`vftable'; /*0x475efd*/
    if ( !v17 && HIBYTE(a8) ) /*0x475f11*/
LABEL_19:
      __3_YAXPAX_Z(v18); /*0x475f13*/
  }
  return v14; /*0x475f1e*/
}



// ==== 0x00475F30  ScenarioClass::SaveIntListToINI  this=INIClass  sig=csp ====
char __thiscall sub_475F30(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  int i; // ebx
  char Buffer[12]; // [esp+10h] [ebp-20Ch] BYREF
  _BYTE Source[509]; // [esp+1Ch] [ebp-200h] BYREF
  __int16 v9; // [esp+219h] [ebp-3h]
  char v10; // [esp+21Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475f42*/
  memset(&Source[1], 0, 0x1FCu); /*0x475f58*/
  v9 = 0; /*0x475f5a*/
  v10 = 0; /*0x475f5c*/
  for ( i = 0; i < *(_DWORD *)(a4 + 16); ++i ) /*0x475f64*/
  {
    if ( Source[0] ) /*0x475f71*/
      strcat(Source, Str); /*0x475f98*/
    sprintf(Buffer, "%d", *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * i)); /*0x475fb2*/
    strcat(Source, Buffer); /*0x475fde*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x476012*/
}



// ==== 0x00476020  INIClass::ReadExitCellList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadExitCellList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  Factory *v11; // esi
  int ExitCellByName; // eax
  _BYTE *WaypointCoords; // eax
  int Index; // eax
  _BYTE *v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  void *Items; // eax
  bool v22; // zf
  void *v23; // eax
  int v24; // ecx
  VectorClass v26; // [esp+8h] [ebp-234h] BYREF
  int v27; // [esp+18h] [ebp-224h]
  int v28; // [esp+1Ch] [ebp-220h]
  int v29; // [esp+28h] [ebp-214h]
  ScriptAction v30; // [esp+2Ch] [ebp-210h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, (char *)v30.ScriptAction_field_0x10, 512) ) /*0x476044*/
  {
    VectorClass::Construct(&v26, 0, 0); /*0x476059*/
    v28 = 10; /*0x476068*/
    v27 = 0; /*0x476070*/
    v26.vtable0 = &TypeList<int>::`vftable'; /*0x476074*/
    v11 = (Factory *)strtok((char *)v30.ScriptAction_field_0x10, Str); /*0x476081*/
    if ( v11 ) /*0x476088*/
    {
      while ( 1 ) /*0x47608e*/
      {
        if ( !v11->__pad_0[0] ) /*0x476090*/
          goto LABEL_16; /*0x476090*/
        ExitCellByName = Factory::FindExitCellByName(v11); /*0x476098*/
        if ( ExitCellByName != -1 ) /*0x4760a0*/
          break; /*0x4760a0*/
        Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v11); /*0x4760b4*/
        if ( Index != -1 ) /*0x4760bc*/
        {
          WaypointCoords = ScriptAction::GetWaypointCoords(&v30, *((_DWORD **)dword_A83CE4 + Index)); /*0x4760cc*/
          goto LABEL_8; /*0x4760cc*/
        }
LABEL_15:
        v11 = (Factory *)strtok(0, Str); /*0x476137*/
        if ( !v11 ) /*0x476149*/
          goto LABEL_16; /*0x476149*/
      }
      WaypointCoords = ScriptAction::GetWaypointCoords( /*0x4760b0*/
                         (ScriptAction *)v30.ScriptAction_field_0x8,
                         *((_DWORD **)dword_A8E34C + ExitCellByName));
LABEL_8:
      v15 = WaypointCoords; /*0x4760d1*/
      v16 = *(_DWORD *)WaypointCoords; /*0x4760d3*/
      LOBYTE(v29) = v15[4]; /*0x4760da*/
      if ( (_BYTE)v29 ) /*0x4760de*/
      {
        v17 = v16 & 0xFFFFFF | ((unsigned __int8)v29 << 24); /*0x4760f6*/
        if ( v27 < v26.Capacity /*0x47611e*/
          || (v26.IsAllocated || !v26.Capacity)
          && v28 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v26.vtable0 + 2))(
               &v26,
               v28 + v26.Capacity,
               0) )
        {
          v18 = v27++; /*0x476129*/
          *((_DWORD *)v26.Items + v18) = v17; /*0x476134*/
        }
      }
      goto LABEL_15; /*0x476134*/
    }
LABEL_16:
    v19 = a2; /*0x47614f*/
    IntVector::Copy((IntVector *)a2, &v26); /*0x47615d*/
    v20 = v28; /*0x476166*/
    *(_DWORD *)(a2 + 16) = v27; /*0x47616a*/
    Items = v26.Items; /*0x47616d*/
    v22 = v26.Items == 0; /*0x476171*/
    *(_DWORD *)(a2 + 20) = v20; /*0x476173*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x476176*/
    v26.vtable0 = &VectorClass<int>::`vftable'; /*0x47617c*/
    if ( !v22 && v26.IsAllocated ) /*0x47618a*/
    {
      __3_YAXPAX_Z(Items); /*0x47618d*/
      v26.Items = 0; /*0x476195*/
    }
    v23 = a6; /*0x476199*/
    v26.IsAllocated = 0; /*0x4761a0*/
    v26.Capacity = 0; /*0x4761a6*/
    a5 = &VectorClass<int>::`vftable'; /*0x4761aa*/
    if ( a6 && HIBYTE(a8) ) /*0x4761be*/
      goto LABEL_24; /*0x4761be*/
  }
  else
  {
    v19 = a2; /*0x4761c2*/
    *(_DWORD *)(a2 + 4) = 0; /*0x4761d5*/
    *(_DWORD *)(a2 + 8) = 0; /*0x4761d8*/
    *(_BYTE *)(a2 + 12) = 1; /*0x4761db*/
    *(_BYTE *)(a2 + 13) = 0; /*0x4761df*/
    *(_DWORD *)a2 = &VectorClass<int>::`vftable'; /*0x4761e2*/
    TypeList::Copy((TypeList *)a2, &a5); /*0x4761e8*/
    v24 = a10; /*0x4761f4*/
    *(_DWORD *)(a2 + 16) = a9; /*0x4761fb*/
    v23 = a6; /*0x4761fe*/
    v22 = a6 == 0; /*0x476205*/
    *(_DWORD *)(a2 + 20) = v24; /*0x476207*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x47620a*/
    a5 = &VectorClass<int>::`vftable'; /*0x476210*/
    if ( !v22 && HIBYTE(a8) ) /*0x476224*/
LABEL_24:
      __3_YAXPAX_Z(v23); /*0x476226*/
  }
  return v19; /*0x476231*/
}



// ==== 0x00476240  ObjectTypeClass::ReadTypeListINI  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadTypeListINI(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  int i; // ebp
  int v5; // eax
  int v6; // ecx
  _BYTE v8[521]; // [esp+Ch] [ebp-20Ch] BYREF
  __int16 v9; // [esp+215h] [ebp-3h]
  char v10; // [esp+217h] [ebp-1h]

  *(_DWORD *)&v8[8] = this; /*0x47624d*/
  v8[12] = g_INI_DefaultBuffer; /*0x476252*/
  memset(&v8[13], 0, 0x1FCu); /*0x476268*/
  v9 = 0; /*0x47626a*/
  v10 = 0; /*0x47626c*/
  for ( i = 0; i < *(_DWORD *)(a4 + 16); ++i ) /*0x476274*/
  {
    if ( v8[12] ) /*0x476281*/
      strcat(&v8[12], Str); /*0x4762a8*/
    v5 = *(_DWORD *)(a4 + 4); /*0x4762b1*/
    v8[4] = 0; /*0x4762b4*/
    v6 = *(_DWORD *)(v5 + 4 * i); /*0x4762bc*/
    v8[4] = HIBYTE(v6); /*0x4762c6*/
    *(_DWORD *)v8 = v6 & 0xFFFFFF; /*0x4762ce*/
    strcat(&v8[12], (const char *)(System_Read_6E7330((ObjectClass *)v8) + 36)); /*0x4762fa*/
  }
  return INIClass::SetString(*(char **)&v8[8], Block, a3, &v8[12]); /*0x47632e*/
}



// ==== 0x00476340  ParticleSystemTypeClass::ReadXYZFromINI  this=ParticleSystemTypeClass  sig=csp ====
float *__thiscall ParticleSystemTypeClass::ReadXYZFromINI(
        ParticleSystemTypeClass *this,
        float *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        float *a5)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  float v9; // [esp+4h] [ebp-20Ch]
  float v10; // [esp+8h] [ebp-208h]
  float v11; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Str); /*0x476396*/
    atof(v5); /*0x47639c*/
    __asm { fstp [esp+21Ch+var_20C] } /*0x4763a1*/
    v6 = strtok(0, Str); /*0x4763ac*/
    atof(v6); /*0x4763b2*/
    __asm { fstp [esp+228h+var_208] } /*0x4763b7*/
    v7 = strtok(0, Str); /*0x4763c2*/
    atof(v7); /*0x4763c8*/
    __asm { fstp [esp+234h+var_204] } /*0x4763d8*/
    *a2 = v9; /*0x4763e1*/
    a2[1] = v10; /*0x4763e8*/
    a2[2] = v11; /*0x4763ef*/
    return a2; /*0x4763cd*/
  }
  else
  {
    *a2 = *a5; /*0x476406*/
    a2[1] = a5[1]; /*0x47640b*/
    a2[2] = a5[2]; /*0x476412*/
    return a2; /*0x4763fb*/
  }
}



// ==== 0x00476420  INIClass::GetCoord2  this=INIClass  sig=csp ====
int *__thiscall INIClass::GetCoord2(INIClass *this, int *a2, unsigned __int8 *a3, unsigned __int8 *a4, int *a5)
{
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  int v10; // eax
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476463*/
  {
    v5 = strtok(String, Str); /*0x476477*/
    v6 = atoi(v5); /*0x476489*/
    v7 = strtok(0, Str); /*0x47648b*/
    v8 = atoi(v7); /*0x47649d*/
    v9 = strtok(0, Str); /*0x47649f*/
    v10 = atoi(v9); /*0x4764a5*/
    *a2 = v6; /*0x4764b6*/
    a2[1] = v8; /*0x4764b8*/
    a2[2] = v10; /*0x4764bd*/
    return a2; /*0x4764c0*/
  }
  else
  {
    *a2 = *a5; /*0x4764d6*/
    a2[1] = a5[1]; /*0x4764db*/
    a2[2] = a5[2]; /*0x4764e2*/
    return a2; /*0x4764cb*/
  }
}



// ==== 0x004764F0  INIClass::ReadTechnoTypeList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadTechnoTypeList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // edi
  int v12; // esi
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  void *Items; // eax
  int CapacityIncrement; // edx
  bool v18; // zf
  void *v19; // eax
  int v20; // edx
  TypeList v22; // [esp+Ch] [ebp-21Ch] BYREF
  char String[512]; // [esp+28h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476515*/
  {
    TypeList::TechnoTypeConstructor(&v22, 0, 0); /*0x47652a*/
    v22.? = 10; /*0x476539*/
    v22.? = 0; /*0x476541*/
    v22.DynamicVectorClass = &TypeList<TechnoTypeClass *>::`vftable'; /*0x476545*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x476559*/
    {
      if ( !*i ) /*0x47655f*/
        break; /*0x476561*/
      v12 = 0; /*0x47656c*/
      if ( stru_A8EB00.ObjectTypeClass[4] > 0 ) /*0x476570*/
      {
        while ( _strcmpi(i, (char *)(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v12) + 36)) ) /*0x47658a*/
        {
          if ( ++v12 >= stru_A8EB00.ObjectTypeClass[4] ) /*0x476594*/
            goto LABEL_14; /*0x476594*/
        }
        v13 = (_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v12); /*0x4765a2*/
        if ( v22.? < v22.? /*0x4765cb*/
          || (v22.? || !v22.?)
          && v22.? > 0
          && (*((unsigned __int8 (__thiscall **)(TypeList *, int, _DWORD))v22.DynamicVectorClass + 2))(
               &v22,
               v22.? + v22.?,
               0) )
        {
          v14 = v22.?++; /*0x4765da*/
          *((_DWORD *)v22.? + v14) = *v13; /*0x4765e3*/
        }
      }
LABEL_14:
      ; /*0x4765f1*/
    }
    v15 = a2; /*0x4765fe*/
    INIClass::parseSection((INIClass *)a2, &v22); /*0x47660c*/
    Items = v22.?; /*0x476611*/
    CapacityIncrement = v22.?; /*0x476619*/
    v18 = v22.? == 0; /*0x476622*/
    *(_DWORD *)(a2 + 16) = v22.?; /*0x476624*/
    *(_DWORD *)(a2 + 20) = CapacityIncrement; /*0x476627*/
    *(_DWORD *)a2 = &TypeList<TechnoTypeClass *>::`vftable'; /*0x47662a*/
    v22.DynamicVectorClass = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x476630*/
    if ( !v18 && v22.? ) /*0x47663a*/
    {
      __3_YAXPAX_Z(Items); /*0x47663d*/
      v22.? = 0; /*0x476645*/
    }
    v19 = a6; /*0x476649*/
    v22.? = 0; /*0x476650*/
    v22.? = 0; /*0x476656*/
    a5 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x47665a*/
    if ( a6 && HIBYTE(a8) ) /*0x47666a*/
      goto LABEL_23; /*0x47666a*/
  }
  else
  {
    v15 = a2; /*0x47666e*/
    *(_DWORD *)(a2 + 4) = 0; /*0x476686*/
    *(_DWORD *)(a2 + 8) = 0; /*0x476689*/
    *(_BYTE *)(a2 + 12) = 1; /*0x47668c*/
    *(_BYTE *)(a2 + 13) = 0; /*0x476690*/
    *(_DWORD *)a2 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x476693*/
    INIClass::writeSection((INIClass *)a2, &a5); /*0x476695*/
    v19 = a6; /*0x47669a*/
    v20 = a10; /*0x4766a8*/
    v18 = a6 == 0; /*0x4766af*/
    *(_DWORD *)(a2 + 16) = a9; /*0x4766b1*/
    *(_DWORD *)(a2 + 20) = v20; /*0x4766b4*/
    *(_DWORD *)a2 = &TypeList<TechnoTypeClass *>::`vftable'; /*0x4766b7*/
    a5 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4766bd*/
    if ( !v18 && HIBYTE(a8) ) /*0x4766cd*/
LABEL_23:
      __3_YAXPAX_Z(v19); /*0x4766cf*/
  }
  return v15; /*0x4766da*/
}



// ==== 0x004766F0  ScenarioClass::SaveTypeNameListToINI  this=INIClass  sig=csp ====
char __thiscall sub_4766F0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  _BYTE Source[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v8; // [esp+205h] [ebp-3h]
  char v9; // [esp+207h] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x476700*/
  memset(&Source[1], 0, 0x1FCu); /*0x47670f*/
  v8 = 0; /*0x476718*/
  v9 = 0; /*0x47671a*/
  if ( *(int *)(a4 + 16) > 0 ) /*0x476720*/
  {
    v4 = *(_DWORD *)(a4 + 4); /*0x476722*/
    v5 = *(_DWORD *)(a4 + 16); /*0x476728*/
    do /*0x476792*/
    {
      if ( Source[0] ) /*0x476730*/
        strcat(Source, Str); /*0x476757*/
      strcat(Source, (const char *)(*(_DWORD *)v4 + 36)); /*0x476785*/
      v4 += 4; /*0x476789*/
      --v5; /*0x47678f*/
    }
    while ( v5 ); /*0x476792*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x4767b5*/
}



// ==== 0x004767C0  INIClass::ReadSuperWeaponTypeList  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::ReadSuperWeaponTypeList(
        INIClass *this,
        _DWORD *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  SuperWeaponTypeClass *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  int Capacity; // eax
  _DWORD *v18; // esi
  int v19; // eax
  _DWORD *v20; // esi
  void *Items; // eax
  int v22; // edx
  bool v23; // zf
  void *v24; // eax
  int v25; // edx
  VectorClass v27; // [esp+8h] [ebp-9Ch] BYREF
  int v28; // [esp+18h] [ebp-8Ch]
  int v29; // [esp+1Ch] [ebp-88h]
  char String[128]; // [esp+24h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x4767e3*/
  {
    VectorClass::Construct(&v27, 0, 0); /*0x4767fa*/
    v29 = 10; /*0x476809*/
    v28 = 0; /*0x476811*/
    v27.vtable0 = &TypeList<int>::`vftable'; /*0x476819*/
    v11 = (SuperWeaponTypeClass *)strtok(String, Str); /*0x476826*/
    if ( v11 ) /*0x47682d*/
    {
      while ( 1 ) /*0x476833*/
      {
        if ( !LOBYTE(v11->AbstractTypeClass) ) /*0x476836*/
          goto LABEL_23; /*0x476836*/
        v12 = SuperWeaponTypeClass::FindByName(v11); /*0x476843*/
        if ( v12 != -1 ) /*0x476848*/
        {
          if ( v28 < v27.Capacity /*0x47687f*/
            || (v27.IsAllocated || !v27.Capacity)
            && v29 > 0
            && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.vtable0 + 2))(
                 &v27,
                 v29 + v27.Capacity,
                 0) )
          {
            v13 = v28++; /*0x47688e*/
            *((_DWORD *)v27.Items + v13) = v12; /*0x476899*/
          }
          goto LABEL_22; /*0x47689c*/
        }
        v14 = HouseTypeClass::Find((HouseTypeClass *)v11); /*0x4768a3*/
        if ( v14 != -1 ) /*0x4768ab*/
        {
          v15 = 0; /*0x4768b3*/
          v16 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v14); /*0x4768b5*/
          if ( *(int *)(v16 + 168) > 0 ) /*0x4768c0*/
            break; /*0x4768c0*/
        }
LABEL_22:
        v11 = (SuperWeaponTypeClass *)strtok(0, Str); /*0x476922*/
        if ( !v11 ) /*0x476935*/
          goto LABEL_23; /*0x476935*/
      }
      Capacity = v27.Capacity; /*0x4768c2*/
      while ( 1 ) /*0x4768cc*/
      {
        v18 = (_DWORD *)(*(_DWORD *)(v16 + 156) + 4 * v15); /*0x4768cc*/
        if ( v28 < Capacity ) /*0x4768d5*/
          goto LABEL_19; /*0x4768d5*/
        if ( !v27.IsAllocated && Capacity || v29 <= 0 ) /*0x4768e9*/
          goto LABEL_21; /*0x4768e9*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.vtable0 + 2))(&v27, v29 + Capacity, 0) ) /*0x4768f8*/
        {
LABEL_19:
          v19 = v28++; /*0x476907*/
          *((_DWORD *)v27.Items + v19) = *v18; /*0x476910*/
        }
        Capacity = v27.Capacity; /*0x476913*/
LABEL_21:
        if ( ++v15 >= *(_DWORD *)(v16 + 168) ) /*0x476920*/
          goto LABEL_22; /*0x476920*/
      }
    }
LABEL_23:
    v20 = a2; /*0x47693b*/
    IntVector::Copy((IntVector *)a2, &v27); /*0x476949*/
    Items = v27.Items; /*0x47694e*/
    v22 = v29; /*0x476956*/
    v23 = v27.Items == 0; /*0x47695f*/
    a2[4] = v28; /*0x476961*/
    a2[5] = v22; /*0x476964*/
    *a2 = &TypeList<int>::`vftable'; /*0x476967*/
    v27.vtable0 = &VectorClass<int>::`vftable'; /*0x47696d*/
    if ( !v23 && v27.IsAllocated ) /*0x476979*/
    {
      __3_YAXPAX_Z(Items); /*0x47697c*/
      v27.Items = 0; /*0x476984*/
    }
    v24 = a6; /*0x47698c*/
    a5 = &VectorClass<int>::`vftable'; /*0x476993*/
    v27.IsAllocated = 0; /*0x47699b*/
    v27.Capacity = 0; /*0x4769a2*/
    if ( a6 && HIBYTE(a8) ) /*0x4769b6*/
      goto LABEL_31; /*0x4769b6*/
  }
  else
  {
    v20 = a2; /*0x4769ba*/
    IntVector::Copy((IntVector *)a2, &a5); /*0x4769cb*/
    v24 = a6; /*0x4769d0*/
    v25 = a10; /*0x4769de*/
    a2[4] = a9; /*0x4769e5*/
    a2[5] = v25; /*0x4769ea*/
    *a2 = &TypeList<int>::`vftable'; /*0x4769ed*/
    a5 = &VectorClass<int>::`vftable'; /*0x4769f3*/
    if ( v24 && HIBYTE(a8) ) /*0x476a09*/
LABEL_31:
      __3_YAXPAX_Z(v24); /*0x476a0b*/
  }
  return v20; /*0x476a16*/
}



// ==== 0x00476A20  INIClass::WriteSuperWeaponList  this=INIClass  sig=csp ====
char __thiscall INIClass::WriteSuperWeaponList(
        INIClass *this,
        unsigned __int8 *a2,
        char *a3,
        int a4,
        void *Block,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  void *v10; // esi
  int *v11; // edx
  int v12; // ebx
  int v13; // ecx
  char v14; // bl
  _BYTE Source[125]; // [esp+10h] [ebp-80h] BYREF
  __int16 v18; // [esp+8Dh] [ebp-3h]
  char v19; // [esp+8Fh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x476a32*/
  v10 = Block; /*0x476a41*/
  memset(&Source[1], 0, 0x7Cu); /*0x476a48*/
  v18 = 0; /*0x476a4a*/
  v19 = 0; /*0x476a4c*/
  if ( a8 > 0 ) /*0x476a56*/
  {
    v11 = (int *)Block; /*0x476a59*/
    v12 = a8; /*0x476a5b*/
    do /*0x476acd*/
    {
      if ( Source[0] ) /*0x476a63*/
        strcat(Source, Str); /*0x476a8a*/
      v13 = *v11++; /*0x476a93*/
      strcat(Source, (const char *)(*((_DWORD *)dword_A83C9C + v13) + 36)); /*0x476ac3*/
      --v12; /*0x476aca*/
    }
    while ( v12 ); /*0x476acd*/
    v10 = Block; /*0x476acf*/
  }
  v14 = INIClass::SetString(this->__pad_0, a2, a3, Source); /*0x476af7*/
  if ( v10 && HIBYTE(a7) ) /*0x476b04*/
    __3_YAXPAX_Z(v10); /*0x476b07*/
  return v14; /*0x476b0f*/
}



// ==== 0x00476B20  INIClass::ReadRGBColorList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadRGBColorList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // esi
  void *v17; // eax
  int v18; // edx
  bool v19; // zf
  void *v20; // eax
  int v21; // edx
  char v23; // [esp+Fh] [ebp-221h]
  __int16 v24; // [esp+10h] [ebp-220h]
  char v25; // [esp+12h] [ebp-21Eh]
  void **v26; // [esp+14h] [ebp-21Ch] BYREF
  void *Block; // [esp+18h] [ebp-218h]
  int v28; // [esp+1Ch] [ebp-214h]
  char v29; // [esp+21h] [ebp-20Fh]
  int v30; // [esp+24h] [ebp-20Ch]
  int v31; // [esp+28h] [ebp-208h]
  char String[512]; // [esp+30h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476b45*/
  {
    BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&v26, 0, 0); /*0x476b5a*/
    v31 = 10; /*0x476b69*/
    v30 = 0; /*0x476b71*/
    v26 = &TypeList<RGBClass>::`vftable'; /*0x476b75*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x476b87*/
    {
      if ( !*i ) /*0x476b8d*/
        break; /*0x476b8f*/
      v23 = 1; /*0x476ba3*/
      v24 = (unsigned __int8)atoi(i + 1); /*0x476bb4*/
      v12 = strtok(0, Str); /*0x476bc4*/
      if ( v12 && *v12 ) /*0x476bd0*/
        HIBYTE(v24) = atoi(v12); /*0x476bdd*/
      else
        v23 = 0; /*0x476be3*/
      v13 = strtok(0, Str); /*0x476bed*/
      if ( v13 ) /*0x476bf9*/
      {
        if ( *v13 ) /*0x476bfb*/
        {
          v13[strlen(v13) - 1] = 0; /*0x476c0c*/
          v25 = atoi(v13); /*0x476c15*/
          if ( v23 ) /*0x476c22*/
          {
            if ( v30 < v28 /*0x476c4e*/
              || (v29 || !v28)
              && v31 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v26[2])(&v26, v31 + v28, 0) )
            {
              v14 = v30++; /*0x476c59*/
              v15 = (char *)Block + 2 * v14 + v14; /*0x476c6c*/
              *(_WORD *)v15 = v24; /*0x476c72*/
              v15[2] = v25; /*0x476c75*/
            }
          }
        }
      }
    }
    v16 = a2; /*0x476c8e*/
    INIClass::parseKeyValue((INIClass *)a2, &v26); /*0x476c9c*/
    v17 = Block; /*0x476ca1*/
    v18 = v31; /*0x476ca9*/
    v19 = Block == 0; /*0x476cb2*/
    *(_DWORD *)(a2 + 16) = v30; /*0x476cb4*/
    *(_DWORD *)(a2 + 20) = v18; /*0x476cb7*/
    *(_DWORD *)a2 = &TypeList<RGBClass>::`vftable'; /*0x476cba*/
    v26 = &VectorClass<RGBClass>::`vftable'; /*0x476cc0*/
    if ( !v19 && v29 ) /*0x476cca*/
    {
      __3_YAXPAX_Z(v17); /*0x476ccd*/
      Block = 0; /*0x476cd5*/
    }
    v20 = a6; /*0x476cd9*/
    v29 = 0; /*0x476ce0*/
    v28 = 0; /*0x476ce6*/
    a5 = &VectorClass<RGBClass>::`vftable'; /*0x476cea*/
    if ( a6 && HIBYTE(a8) ) /*0x476cfa*/
      goto LABEL_26; /*0x476cfa*/
  }
  else
  {
    v16 = a2; /*0x476cfe*/
    *(_DWORD *)(a2 + 4) = 0; /*0x476d16*/
    *(_DWORD *)(a2 + 8) = 0; /*0x476d19*/
    *(_BYTE *)(a2 + 12) = 1; /*0x476d1c*/
    *(_BYTE *)(a2 + 13) = 0; /*0x476d20*/
    *(_DWORD *)a2 = &VectorClass<RGBClass>::`vftable'; /*0x476d23*/
    ParticleTypeClass::EnsureCapacity((ParticleTypeClass *)a2, &a5); /*0x476d25*/
    v20 = a6; /*0x476d2a*/
    v21 = a10; /*0x476d38*/
    v19 = a6 == 0; /*0x476d3f*/
    *(_DWORD *)(a2 + 16) = a9; /*0x476d41*/
    *(_DWORD *)(a2 + 20) = v21; /*0x476d44*/
    *(_DWORD *)a2 = &TypeList<RGBClass>::`vftable'; /*0x476d47*/
    a5 = &VectorClass<RGBClass>::`vftable'; /*0x476d4d*/
    if ( !v19 && HIBYTE(a8) ) /*0x476d5d*/
LABEL_26:
      __3_YAXPAX_Z(v20); /*0x476d5f*/
  }
  return v16; /*0x476d6a*/
}



// ==== 0x00476D80  Hash::ComputeHashSHA1  this=GameConfig  sig=csp ====
int __thiscall SHA1_ComputeHash(int this)
{
  unsigned int v3[3]; // [esp+8h] [ebp-8Ch] BYREF
  int v4[3]; // [esp+14h] [ebp-80h] BYREF
  char v5; // [esp+20h] [ebp-74h]
  int v6; // [esp+38h] [ebp-5Ch]
  int v7; // [esp+3Ch] [ebp-58h]
  int v8; // [esp+40h] [ebp-54h]
  int v9; // [esp+44h] [ebp-50h]
  int v10; // [esp+48h] [ebp-4Ch]
  int v11; // [esp+4Ch] [ebp-48h]
  int v12; // [esp+50h] [ebp-44h]

  if ( !*(_BYTE *)(this + 64) ) /*0x476d8c*/
  {
    v4[1] = 0; /*0x476d95*/
    v4[2] = 0; /*0x476d9a*/
    v5 = 0; /*0x476d9e*/
    v11 = 0; /*0x476da2*/
    v12 = 0; /*0x476da6*/
    v6 = 1732584193; /*0x476daa*/
    v7 = -271733879; /*0x476db2*/
    v8 = -1732584194; /*0x476dba*/
    v9 = 271733878; /*0x476dc2*/
    v10 = -1009589776; /*0x476dca*/
    v4[0] = (int)&SHAPipe::`vftable'; /*0x476dd2*/
    INIClass::WriteToString((_DWORD *)this, (int)v4); /*0x476dda*/
    SHA1::ComputeThunk(this + 65); /*0x476de7*/
    *(_BYTE *)(this + 64) = 1; /*0x476df0*/
    Pipe::Dtor(v4); /*0x476df4*/
  }
  memset(v3, 0, sizeof(v3)); /*0x476e03*/
  return Checksummer::Add_Buffer(v3, (unsigned __int8 *)(this + 65), 20); /*0x476e14*/
}



// ==== 0x00476E20  ObjectClass::method_476E20  this=ObjectClass  sig=csp ====
int __thiscall sub_476E20(ObjectClass *this)
{
  SHA1 v3; // [esp+4h] [ebp-80h] BYREF
  int v4; // [esp+28h] [ebp-5Ch]
  int v5; // [esp+2Ch] [ebp-58h]
  int v6; // [esp+30h] [ebp-54h]
  int v7; // [esp+34h] [ebp-50h]
  int v8; // [esp+38h] [ebp-4Ch]
  int v9; // [esp+3Ch] [ebp-48h]
  int v10; // [esp+40h] [ebp-44h]

  memset(&v3.SHA1_field_0x04, 0, 9); /*0x476e29*/
  v9 = 0; /*0x476e35*/
  v10 = 0; /*0x476e39*/
  v4 = 1732584193; /*0x476e44*/
  v5 = -271733879; /*0x476e4c*/
  v6 = -1732584194; /*0x476e54*/
  v7 = 271733878; /*0x476e5c*/
  v8 = -1009589776; /*0x476e64*/
  *(_DWORD *)v3.__pad_0 = &SHAPipe::`vftable'; /*0x476e6c*/
  INIClass::WriteToString((INIClass *)this, (int)&v3); /*0x476e74*/
  SHA1::ComputeThunk(&v3, (char *)&this->ambientSoundController[1] + 1); /*0x476e81*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x476e8a*/
  return Pipe::Dtor((Pipe *)&v3); /*0x476e93*/
}



// ==== 0x00476EA0  ObjectClass::method_476EA0  this=ObjectClass  sig=csp ====
void __thiscall sub_476EA0(ObjectClass *this)
{
  LOBYTE(this->ambientSoundController[1]) = 0; /*0x476ea0*/
}



// ==== 0x00476EB0  INIEntry::GetTechnoType  this=INIEntry  sig=csp ====
int __thiscall INIEntry::GetTechnoType(INIEntry *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int ExitCellByName; // eax
  int Index; // eax
  int v6; // eax
  int IndexByName; // eax
  TypeClass Destination[32]; // [esp+4h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, g_Str__none_, (char *)Destination, 128); /*0x476ed5*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)Destination); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x476eef*/
  Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)Destination); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *((_DWORD *)dword_A83CE4 + Index); /*0x476f10*/
  v6 = TypeClass::FindByName(Destination); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *((_DWORD *)dword_A8B21C + v6); /*0x476f31*/
  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)Destination); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((_DWORD *)dword_A83C6C + IndexByName); /*0x476f52*/
}



// ==== 0x00476FC0  ObjectTypeClass::loadTypeMember_476FC0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_476FC0(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48E030(a4); /*0x476fdd*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x476ff5*/
    return ObjectTypeClass::loadTypeMember_48DFF0((ObjectTypeClass *)Destination); /*0x477002*/
  else
    return a4; /*0x477012*/
}



// ==== 0x00477050  AnimTypeClass::ReadINIString  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::ReadINIString(
        AnimTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = globalHelper_08E090(a4); /*0x47706d*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName((AnimTypeClass *)Destination); /*0x477092*/
  else
    return a4; /*0x4770a2*/
}



// ==== 0x004770E0  LoadBuildingTypeClassPrerequisites  this=TypeList  sig=csp ====
DynamicVectorClass *__fastcall LoadBuildingTypeClassPrerequisites(
        DynamicVectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // esi
  char v13; // bl
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  DynamicVector v21; // [esp+2Ch] [ebp-A0h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, v21.__pad_20, 128) ) /*0x47710a*/
  {
    DynamicVectorClass::Construct((DynamicVectorClass *)&v21, 0, 0); /*0x477121*/
    *(_DWORD *)v21.__pad_0 = &TypeList<int>::`vftable'; /*0x47712a*/
    for ( i = strtok(v21.__pad_20, Str); i; i = strtok(0, Str) ) /*0x477144*/
    {
      if ( !*i ) /*0x47714a*/
        break; /*0x47714d*/
      v13 = 0; /*0x477159*/
      if ( !_strcmpi(i, aPower) ) /*0x47715b*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477194*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v14 = v21.DynamicVector_field_0x10++; /*0x47719f*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v14) = -1; /*0x4771aa*/
        }
        v13 = 1; /*0x4771b1*/
      }
      if ( !_strcmpi(i, aFactory) ) /*0x4771b9*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4771f2*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v15 = v21.DynamicVector_field_0x10++; /*0x4771fd*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v15) = -2; /*0x477208*/
        }
        v13 = 1; /*0x47720f*/
      }
      if ( !_strcmpi(i, aBarracks) ) /*0x477217*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477250*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v16 = v21.DynamicVector_field_0x10++; /*0x47725b*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v16) = -3; /*0x477266*/
        }
        v13 = 1; /*0x47726d*/
      }
      if ( !_strcmpi(i, aRadar) ) /*0x477275*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4772ae*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v17 = v21.DynamicVector_field_0x10++; /*0x4772b9*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v17) = -4; /*0x4772c4*/
        }
        v13 = 1; /*0x4772cb*/
      }
      if ( !_strcmpi(i, aTech) ) /*0x4772d3*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47730c*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v18 = v21.DynamicVector_field_0x10++; /*0x477317*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v18) = -5; /*0x477322*/
        }
        v13 = 1; /*0x477329*/
      }
      if ( _strcmpi(i, aProc) ) /*0x477331*/
      {
        if ( !v13 ) /*0x47738b*/
        {
          v21.DynamicVector_field_0x1C = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)i); /*0x477397*/
          if ( v21.DynamicVector_field_0x1C != -1 ) /*0x47739b*/
            DynamicVector::Add_Alt(&v21, &v21.DynamicVector_field_0x1C); /*0x4773a6*/
        }
      }
      else if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47736a*/
             || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
             && *(int *)v21.__pad_14 > 0
             && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
                  &v21,
                  v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
                  0) )
      {
        v19 = v21.DynamicVector_field_0x10++; /*0x477375*/
        *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v19) = -6; /*0x477380*/
      }
    }
    DynamicVectorClass::Copy(a1, &v21); /*0x4773cb*/
    a1->vtable0 = (int)&TypeList<int>::`vftable'; /*0x4773d9*/
    *(_DWORD *)v21.__pad_0 = &VectorClass<int>::`vftable'; /*0x4773df*/
    VectorClass::Destroy((int)&v21); /*0x4773e3*/
    a5 = &VectorClass<int>::`vftable'; /*0x4773ef*/
    VectorClass::Destroy((int)&a5); /*0x4773f6*/
    return a1; /*0x4773fb*/
  }
  else
  {
    VectorClass::Copy(a1, &a5); /*0x477413*/
    a5 = &VectorClass<int>::`vftable'; /*0x47741f*/
    VectorClass::Destroy((int)&a5); /*0x47742a*/
    return a1; /*0x47742f*/
  }
}



// ==== 0x00477440  GameSetup::ParseCoordTriple  this=GameSetup  sig=csp ====
const char *__thiscall GameSetup::ParseCoordTriple(
        GameSetup *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int *a4,
        int *a5,
        const char **a6)
{
  const char *result; // eax
  char *v7; // eax
  char *v8; // eax
  char String[509]; // [esp+4h] [ebp-200h] BYREF
  __int16 v10; // [esp+201h] [ebp-3h]
  char v11; // [esp+203h] [ebp-1h]

  String[0] = g_INI_DefaultBuffer; /*0x47744e*/
  memset(&String[1], 0, 0x1FCu); /*0x477462*/
  v10 = 0; /*0x477464*/
  v11 = 0; /*0x47746a*/
  result = (const char *)INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 512); /*0x477483*/
  if ( result ) /*0x47748b*/
  {
    v7 = strtok(String, Str); /*0x477497*/
    if ( v7 ) /*0x4774a1*/
      *a4 = atoi(v7); /*0x4774b3*/
    v8 = strtok(0, Str); /*0x4774bc*/
    if ( v8 ) /*0x4774c6*/
      *a5 = atoi(v8); /*0x4774d8*/
    result = strtok(0, Str); /*0x4774e1*/
    if ( result ) /*0x4774eb*/
    {
      result = (const char *)atoi(result); /*0x4774ee*/
      *a6 = result; /*0x4774fd*/
    }
  }
  return result; /*0x47748a*/
}



// ==== 0x00477510  GameSetup::FormatToString  this=AbstractClass  sig=csp ====
char __thiscall sub_477510(char *this, unsigned __int8 *Block, char *a3, int a4, int a5, int a6)
{
  char Buffer[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v9; // [esp+205h] [ebp-3h]
  char v10; // [esp+207h] [ebp-1h]

  Buffer[0] = g_INI_DefaultBuffer; /*0x47751f*/
  memset(&Buffer[1], 0, 0x1FCu); /*0x47752e*/
  v9 = 0; /*0x47753e*/
  v10 = 0; /*0x477540*/
  sprintf(Buffer, "%d,%d,%d", a4, a5, a6); /*0x477555*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x477579*/
}



// ==== 0x00477590  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5477590(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  char *v4; // esi
  int result; // eax
  bool v6; // zf
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_81BABC)[a4], String, 128); /*0x4775c1*/
  v4 = strtok(String, Str); /*0x4775d5*/
  result = _strcmpi(v4, g_INI_Key_None); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)g_INI_Key_Normal) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4, aStrong) == 0; /*0x477624*/
      result = 2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return a4; /*0x47762d*/
    }
    else
    {
      return 1; /*0x477607*/
    }
  }
  return result; /*0x4775e9*/
}



// ==== 0x00477640  INIEntry::ReadAbilities  this=INIEntry  sig=csp ====
int __thiscall INIEntry::ReadAbilities(INIEntry *this, int a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  __int16 v5; // si
  INIEntry *i; // eax
  int v7; // eax
  int v9; // [esp+4h] [ebp-94h]
  int v10; // [esp+8h] [ebp-90h]
  int v11; // [esp+Ch] [ebp-8Ch]
  int v12; // [esp+10h] [ebp-88h]
  __int16 v13; // [esp+14h] [ebp-84h]
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x477663*/
  {
    v5 = 0; /*0x477674*/
    v13 = 0; /*0x47767c*/
    v9 = 0; /*0x477681*/
    v10 = 0; /*0x477685*/
    v11 = 0; /*0x477689*/
    v12 = 0; /*0x47768d*/
    for ( i = (INIEntry *)strtok(String, Str); i; i = (INIEntry *)strtok(0, Str) ) /*0x47769b*/
    {
      if ( !LOBYTE(i->Key) ) /*0x47769d*/
        break; /*0x4776a0*/
      v7 = INIEntry::LookupByName(i); /*0x4776a4*/
      if ( v7 != -1 ) /*0x4776ac*/
      {
        *((_BYTE *)&v9 + v7) = 1; /*0x4776ae*/
        v5 = v13; /*0x4776b3*/
      }
    }
    *(_DWORD *)a2 = v9; /*0x4776d8*/
    *(_DWORD *)(a2 + 4) = v10; /*0x4776de*/
    *(_DWORD *)(a2 + 8) = v11; /*0x4776e5*/
    *(_DWORD *)(a2 + 12) = v12; /*0x4776ec*/
    *(_WORD *)(a2 + 16) = v5; /*0x4776ef*/
    return a2; /*0x4776cb*/
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a5; /*0x47770f*/
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a5 + 4); /*0x477714*/
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a5 + 8); /*0x47771a*/
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a5 + 12); /*0x477720*/
    *(_WORD *)(a2 + 16) = *(_WORD *)(a5 + 16); /*0x477728*/
    return a2; /*0x477704*/
  }
}



// ==== 0x00477740  Pipe::477740  this=Pipe  sig=csp ====
int __thiscall VtableStub::Method_477740(Pipe *this)
{
  return (*(int (__thiscall **)(Pipe *))(*(_DWORD *)this->__pad_0 + 4))(this);
}



// ==== 0x00477750  SHAPipe::ScalarDtor  this=SHAPipe  sig=csp ====
int *__thiscall VectorClass::ScalarDtor(SHAPipe *this, char a2)
{
  Pipe::Dtor((Pipe *)this); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    __3_YAXPAX_Z(this); /*0x477760*/
  return (int *)this->__pad_0; /*0x47776a*/
}



// ==== 0x00477770  FileStraw::QueryInterface  this=FileStraw  sig=csp ====
void *__thiscall FileStraw_Destru::QueryInterface(FileStraw *this, char a2)
{
  FileStraw::Destructor((int)this); /*0x477773*/
  if ( (a2 & 1) != 0 ) /*0x47777d*/
    __3_YAXPAX_Z(this); /*0x477780*/
  return this; /*0x47778a*/
}



// ==== 0x00477790  FilePipe::QueryInterface  this=FilePipe  sig=csp ====
void *__thiscall FilePipe::QueryInterface(FilePipe *this, char a2)
{
  FilePipe::Destructor((int)this); /*0x477793*/
  if ( (a2 & 1) != 0 ) /*0x47779d*/
    __3_YAXPAX_Z(this); /*0x4777a0*/
  return this; /*0x4777aa*/
}



// ==== 0x004777B0  VectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Copy(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x4777bd*/
  this->Capacity = 0; /*0x4777c0*/
  this->IsInitialized[0] = 1; /*0x4777c3*/
  this->IsAllocated[0] = 0; /*0x4777c7*/
  this->vtable0 = (int)&VectorClass<int>::`vftable'; /*0x4777ca*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x4777d0*/
  {
    VectorClass::Destroy((int)this); /*0x4777d2*/
    v3 = a2[2]; /*0x4777d8*/
    this->Capacity = v3; /*0x4777dd*/
    if ( v3 ) /*0x4777e0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x4777e6*/
      this->Items = v4; /*0x4777f0*/
      if ( v4 ) /*0x4777f3*/
      {
        Capacity = this->Capacity; /*0x4777f5*/
        v6 = 0; /*0x4777f8*/
        this->IsAllocated[0] = 1; /*0x4777fc*/
        if ( Capacity > 0 ) /*0x477800*/
        {
          do /*0x477814*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x47780b*/
            ++v6; /*0x477811*/
          }
          while ( v6 < this->Capacity ); /*0x477814*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x477818*/
      this->IsAllocated[0] = 0; /*0x47781b*/
    }
  }
  this->Count = a2[4]; /*0x477821*/
  this->CapacityIncrement = a2[5]; /*0x477827*/
  this->vtable0 = (int)&TypeList<int>::`vftable'; /*0x47782a*/
  return &this->vtable0; /*0x477832*/
}



// ==== 0x00477840  _DynamicVectorClass_H::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList::ddtor(_DynamicVectorClass_H *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477846*/
  this->m_10 = 0; /*0x477849*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477850*/
  {
    __3_YAXPAX_Z(v2); /*0x477856*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47785e*/
  }
  BYTE1(this->m_C) = 0; /*0x477861*/
  this->m_8 = 0; /*0x477864*/
}



// ==== 0x00477870  _DynamicVectorClass_H::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList::GetCapacity(_DynamicVectorClass_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/
}



// ==== 0x00477890  _VectorClass_H::GetAt_Copy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::GetAt_Copy(_VectorClass_H *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x47789a*/
}



// ==== 0x004778A0  _DynamicVectorClass_PAVTechnoTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::ddtor(_DynamicVectorClass_PAVTechnoTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4778a6*/
  this->m_10 = 0; /*0x4778a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4778b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4778b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4778be*/
  }
  BYTE1(this->m_C) = 0; /*0x4778c1*/
  this->m_8 = 0; /*0x4778c4*/
}



// ==== 0x004778D0  _DynamicVectorClass_PAVTechnoTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::Write(_DynamicVectorClass_PAVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4778d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/
}



// ==== 0x004778F0  _VectorClass_PAVTechnoTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::Clear(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4778fa*/
}



// ==== 0x00477900  _DynamicVectorClass_VRGBClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall ParticleTypeClass::GetClassIdentifier(_DynamicVectorClass_VRGBClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477906*/
  this->m_10 = 0; /*0x477909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47791e*/
  }
  BYTE1(this->m_C) = 0; /*0x477921*/
  this->m_8 = 0; /*0x477924*/
}



// ==== 0x00477930  _DynamicVectorClass_VRGBClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleTypeClass::LoadTypeData(_DynamicVectorClass_VRGBClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477930*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}



// ==== 0x00477960  _VectorClass_VRGBClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38::Seek(_VectorClass_VRGBClass *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 3 * a3; /*0x47796d*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x477978*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x47797f*/
  return a2; /*0x47797b*/
}



// ==== 0x00477990  _TypeList_H::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::QueryInterface(_TypeList_H *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477993*/
  *(_DWORD *)this = &VectorClass<int>::`vftable'; /*0x477996*/
  if ( v3 && this->IsAllocated ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    this->Items = 0; /*0x4779b0*/
  }
  this->IsAllocated = 0; /*0x4779bb*/
  this->Capacity = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(this); /*0x4779cb*/
  return this; /*0x4779d5*/
}



// ==== 0x004779E0  DynamicVectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::Copy(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(_DWORD *)&this->?[3] = 0; /*0x4779ed*/
  *(_DWORD *)&this->?[3] = 0; /*0x4779f0*/
  LOBYTE(this->?) = 1; /*0x4779f3*/
  BYTE1(this->?) = 0; /*0x4779f7*/
  *(_DWORD *)this->VectorClass = &VectorClass<int>::`vftable'; /*0x4779fa*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x477a00*/
  {
    VectorClass::Destroy((int)this); /*0x477a02*/
    v3 = a2[2]; /*0x477a08*/
    *(_DWORD *)&this->?[3] = v3; /*0x477a0d*/
    if ( v3 ) /*0x477a10*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x477a16*/
      *(_DWORD *)&this->?[3] = v4; /*0x477a20*/
      if ( v4 ) /*0x477a23*/
      {
        v5 = *(_DWORD *)&this->?[3]; /*0x477a25*/
        v6 = 0; /*0x477a28*/
        BYTE1(this->?) = 1; /*0x477a2c*/
        if ( v5 > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
            *(_DWORD *)(*(_DWORD *)&this->?[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477a3b*/
            ++v6; /*0x477a41*/
          }
          while ( v6 < *(_DWORD *)&this->?[3] ); /*0x477a44*/
        }
      }
    }
    else
    {
      *(_DWORD *)&this->?[3] = 0; /*0x477a48*/
      BYTE1(this->?) = 0; /*0x477a4b*/
    }
  }
  this->Count = a2[4]; /*0x477a51*/
  this->CapacityIncrement = a2[5]; /*0x477a57*/
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<int>::`vftable'; /*0x477a5a*/
  return this->VectorClass; /*0x477a62*/
}



// ==== 0x00477A70  _TypeList_PAVTechnoTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall FilePipe_30::QueryInterface(_TypeList_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477a73*/
  this->vfptr = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x477a76*/
  if ( v3 && this->IsAllocated ) /*0x477a80*/
  {
    __3_YAXPAX_Z(v3); /*0x477a88*/
    this->Items = 0; /*0x477a90*/
  }
  this->IsAllocated = 0; /*0x477a9b*/
  this->Capacity = 0; /*0x477aa1*/
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    __3_YAXPAX_Z(this); /*0x477aab*/
  return &this->vfptr; /*0x477ab5*/
}



// ==== 0x00477AC0  _TypeList_VRGBClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::QueryInterface(_TypeList_VRGBClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477ac3*/
  *(_DWORD *)this = &VectorClass<RGBClass>::`vftable'; /*0x477ac6*/
  if ( v3 && this->IsAllocated ) /*0x477ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x477ad8*/
    this->Items = 0; /*0x477ae0*/
  }
  this->IsAllocated = 0; /*0x477aeb*/
  this->Capacity = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    __3_YAXPAX_Z(this); /*0x477afb*/
  return this; /*0x477b05*/
}



// ==== 0x00477B10  _DynamicVectorClass_H::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IntDynamicVector::QueryInterface(_DynamicVectorClass_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x477b13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<int>::`vftable'; /*0x477b16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x477b20*/
  {
    __3_YAXPAX_Z(v3); /*0x477b28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x477b30*/
  }
  BYTE1(this->m_C) = 0; /*0x477b3b*/
  this->m_8 = 0; /*0x477b41*/
  if ( (a2 & 1) != 0 ) /*0x477b48*/
    __3_YAXPAX_Z(this); /*0x477b4b*/
  return this->__pad_0; /*0x477b55*/
}



// ==== 0x00477B60  IntVector::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall IntVector::Copy(IntVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->IntVector_field_0x04 = 0; /*0x477b6d*/
  this->Capacity = 0; /*0x477b70*/
  this->IsInitialized = 1; /*0x477b73*/
  this->IsAllocated = 0; /*0x477b77*/
  *(_DWORD *)this->__pad_0 = &VectorClass<int>::`vftable'; /*0x477b7a*/
  if ( this == (IntVector *)a2 ) /*0x477b80*/
    return this->__pad_0; /*0x477b80*/
  VectorClass::Destroy((int)this); /*0x477b82*/
  v3 = a2[2]; /*0x477b88*/
  this->Capacity = v3; /*0x477b8d*/
  if ( !v3 ) /*0x477b90*/
  {
    this->IntVector_field_0x04 = 0; /*0x477bce*/
    this->IsAllocated = 0; /*0x477bd1*/
    return this->__pad_0; /*0x477bd4*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x477b96*/
  this->IntVector_field_0x04 = v4; /*0x477ba0*/
  if ( !v4 ) /*0x477ba3*/
    return this->__pad_0; /*0x477ba3*/
  v5 = this->Capacity; /*0x477ba5*/
  v6 = 0; /*0x477ba8*/
  this->IsAllocated = 1; /*0x477bac*/
  if ( v5 <= 0 ) /*0x477bb0*/
    return this->__pad_0; /*0x477bb0*/
  do /*0x477bc4*/
  {
    *(_DWORD *)(this->IntVector_field_0x04 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477bbb*/
    ++v6; /*0x477bc1*/
  }
  while ( v6 < this->Capacity ); /*0x477bc4*/
  return this->__pad_0; /*0x477bc8*/
}



// ==== 0x00477BE0  VectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Construct(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x477beb*/
  this->Capacity = a2; /*0x477bee*/
  this->IsInitialized = 1; /*0x477bf1*/
  this->IsAllocated = 0; /*0x477bf5*/
  this->vtable0 = &VectorClass<int>::`vftable'; /*0x477bf8*/
  if ( a2 ) /*0x477bfe*/
  {
    if ( a3 ) /*0x477c06*/
    {
      this->Items = (void *)a3; /*0x477c08*/
      return &this->vtable0; /*0x477c0e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x477c1d*/
    this->IsAllocated = 1; /*0x477c20*/
  }
  return &this->vtable0; /*0x477c0d*/
}



// ==== 0x00477C30  _VectorClass_H::CompareEqual  this=VectorClass  sig=csp ====
char __thiscall BufferClass::CompareEqual(_VectorClass_H *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x477c32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x477c3d*/
  {
    v3 = 0; /*0x477c3f*/
    if ( m_8 <= 0 ) /*0x477c43*/
      return 1; /*0x477c63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x477c45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477c4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477c54*/
    {
      ++v3; /*0x477c56*/
      ++v4; /*0x477c57*/
      if ( v3 >= m_8 ) /*0x477c5c*/
        return 1; /*0x477c5c*/
    }
  }
  return 0; /*0x477c5e*/
}



// ==== 0x00477C70  _VectorClass_H::vt02  this=VectorClass  sig=csp ====
char __thiscall VectorClass::vt02(_VectorClass_H *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x477c86*/
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x477c9e*/
    LOBYTE(this->m_C) = 1; /*0x477ca6*/
    if ( v4 ) /*0x477caa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x477cb5*/
      {
        m_8 = this->m_8; /*0x477cbc*/
        if ( a2 < m_8 ) /*0x477cc1*/
          m_8 = a2; /*0x477cc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477cc9*/
          ++i; /*0x477cce*/
        if ( BYTE1(this->m_C) ) /*0x477cdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x477ce6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x477cee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x477cf7*/
      this->m_8 = a2; /*0x477cff*/
      BYTE1(this->m_C) = a3 == 0; /*0x477d02*/
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477d12*/
    return 1; /*0x477d18*/
  }
}



// ==== 0x00477D20  ?$VectorClass@H::Destroy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Destroy(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 4); /*0x477d26*/
  if ( result && *(_BYTE *)(this + 13) ) /*0x477d2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x477d33*/
    *(_DWORD *)(this + 4) = 0; /*0x477d3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477d3e*/
  *(_DWORD *)(this + 8) = 0; /*0x477d41*/
  return result; /*0x477d44*/
}



// ==== 0x00477D50  _VectorClass_H::vt04  this=VectorClass  sig=csp ====
int __thiscall VectorClass::vt04(_VectorClass_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x477d50*/
    return 0; /*0x477d58*/
  m_8 = this->m_8; /*0x477d5e*/
  result = 0; /*0x477d61*/
  if ( m_8 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x477d6b*/
  {
    if ( ++result >= m_8 ) /*0x477d7a*/
      return -1; /*0x477d7a*/
  }
  return result; /*0x477d5a*/
}



// ==== 0x00477D90  _VectorClass_H::vt05  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass::vt05(_VectorClass_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477d90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x477da5*/
  else
    return 0; /*0x477d97*/
}



// ==== 0x00477DB0  DynamicVectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::Construct(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x477db9*/
  *(_DWORD *)&this->?[3] = a2; /*0x477dc0*/
  LOBYTE(this->?) = 1; /*0x477dc3*/
  BYTE1(this->?) = 0; /*0x477dc7*/
  *(_DWORD *)this->VectorClass = &VectorClass<int>::`vftable'; /*0x477dcb*/
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x477ddb*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x477dec*/
      BYTE1(this->?) = 1; /*0x477def*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<int>::`vftable'; /*0x477df3*/
  this->CapacityIncrement = 10; /*0x477df9*/
  this->Count = 0; /*0x477e00*/
  return this->VectorClass; /*0x477e09*/
}



// ==== 0x00477E10  _DynamicVectorClass_H::Resize  this=DynamicVector  sig=csp ====
char __thiscall VectorClass::Resize(_DynamicVectorClass_H *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x477e22*/
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x477e3a*/
    LOBYTE(this->m_C) = 1; /*0x477e42*/
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x477e48*/
    {
      m_8 = this->m_8; /*0x477e4f*/
      if ( a2 < m_8 ) /*0x477e54*/
        m_8 = a2; /*0x477e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477e5c*/
        ++i; /*0x477e61*/
      if ( BYTE1(this->m_C) ) /*0x477e6e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x477e79*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x477e81*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x477e8a*/
    this->m_8 = a2; /*0x477e92*/
    BYTE1(this->m_C) = a3 == 0; /*0x477e95*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477e9e*/
  }
  v7 = this->m_8; /*0x477ea1*/
  if ( v7 < this->m_10 ) /*0x477ea9*/
    this->m_10 = v7; /*0x477eab*/
  return 1; /*0x477eae*/
}



// ==== 0x00477EC0  DynamicVector::Add_Alt  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x477ec3*/
  result = (int)this->DynamicVector_field_0x10; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x477ef5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x477ef8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x477efe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x477f08*/
    LOBYTE(result) = 1; /*0x477f0b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x477eef*/
  }
  return result; /*0x477ef1*/
}



// ==== 0x00477F10  _DynamicVectorClass_H::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList::GetSize(_DynamicVectorClass_H *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( m_10 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= m_10 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/
}



// ==== 0x00477F40  INIClass::parseSection  this=VectorClass  sig=csp ====
_DWORD *__thiscall INIClass::parseSection(INIClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->headNode[0] = 0; /*0x477f4d*/
  this->headNode[1] = 0; /*0x477f50*/
  LOBYTE(this->headNode[2]) = 1; /*0x477f53*/
  BYTE1(this->headNode[2]) = 0; /*0x477f57*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x477f5a*/
  if ( this == (INIClass *)a2 ) /*0x477f60*/
    return this->__pad_0; /*0x477f60*/
  TypeList_TechnoType::ddtor((_VectorClass_PAVTechnoTypeClass *)this); /*0x477f62*/
  v3 = a2[2]; /*0x477f68*/
  this->headNode[1] = v3; /*0x477f6d*/
  if ( !v3 ) /*0x477f70*/
  {
    this->headNode[0] = 0; /*0x477fae*/
    BYTE1(this->headNode[2]) = 0; /*0x477fb1*/
    return this->__pad_0; /*0x477fb4*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x477f76*/
  this->headNode[0] = v4; /*0x477f80*/
  if ( !v4 ) /*0x477f83*/
    return this->__pad_0; /*0x477f83*/
  v5 = this->headNode[1]; /*0x477f85*/
  v6 = 0; /*0x477f88*/
  BYTE1(this->headNode[2]) = 1; /*0x477f8c*/
  if ( v5 <= 0 ) /*0x477f90*/
    return this->__pad_0; /*0x477f90*/
  do /*0x477fa4*/
  {
    *(_DWORD *)(this->headNode[0] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477f9b*/
    ++v6; /*0x477fa1*/
  }
  while ( v6 < this->headNode[1] ); /*0x477fa4*/
  return this->__pad_0; /*0x477fa8*/
}



// ==== 0x00477FC0  _VectorClass_PAVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::AddRef(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x477fc2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( m_8 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x477fd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477fdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= m_8 ) /*0x477fec*/
        return 1; /*0x477fec*/
    }
  }
  return 0; /*0x477fee*/
}



// ==== 0x00478000  _VectorClass_PAVTechnoTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::Remove(_VectorClass_PAVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
    LOBYTE(this->m_C) = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x47802e*/
    LOBYTE(this->m_C) = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x478045*/
      {
        m_8 = this->m_8; /*0x47804c*/
        if ( a2 < m_8 ) /*0x478051*/
          m_8 = a2; /*0x478053*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( BYTE1(this->m_C) ) /*0x47806b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x478076*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x47807e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x478087*/
      this->m_8 = a2; /*0x47808f*/
      BYTE1(this->m_C) = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4780a2*/
    return 1; /*0x4780a8*/
  }
}



// ==== 0x004780B0  _VectorClass_PAVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TypeList_TechnoType::ddtor(_VectorClass_PAVTechnoTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4780bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4780c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4780cb*/
  }
  BYTE1(this->m_C) = 0; /*0x4780ce*/
  this->m_8 = 0; /*0x4780d1*/
}



// ==== 0x004780E0  _VectorClass_PAVTechnoTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::GetSize(_VectorClass_PAVTechnoTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  m_8 = this->m_8; /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( m_8 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= m_8 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/
}



// ==== 0x00478120  _VectorClass_PAVTechnoTypeClass::GetIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_TechnoType::GetIndex(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x478120*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/
}



// ==== 0x00478140  _DynamicVectorClass_PAVTechnoTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::Release(_DynamicVectorClass_PAVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x47814c*/
  {
    LOBYTE(this->m_C) = 0; /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x47816a*/
    LOBYTE(this->m_C) = 1; /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x478178*/
    {
      m_8 = this->m_8; /*0x47817f*/
      if ( a2 < m_8 ) /*0x478184*/
        m_8 = a2; /*0x478186*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( BYTE1(this->m_C) ) /*0x47819e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4781a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4781b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4781ba*/
    this->m_8 = a2; /*0x4781c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4781ce*/
  }
  v7 = this->m_8; /*0x4781d1*/
  if ( v7 < this->m_10 ) /*0x4781d9*/
    this->m_10 = v7; /*0x4781db*/
  return 1; /*0x4781de*/
}



// ==== 0x004781F0  _DynamicVectorClass_PAVTechnoTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::Read(_DynamicVectorClass_PAVTechnoTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( m_10 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4781fe*/
  {
    if ( ++result >= m_10 ) /*0x47820d*/
      return -1; /*0x47820d*/
  }
  return result; /*0x478212*/
}



// ==== 0x00478220  INIClass::parseKeyValue  this=VectorClass  sig=csp ====
_DWORD *__thiscall INIClass::parseKeyValue(INIClass *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  this->headNode[0] = 0; /*0x47822e*/
  this->headNode[1] = 0; /*0x478231*/
  LOBYTE(this->headNode[2]) = 1; /*0x478234*/
  BYTE1(this->headNode[2]) = 0; /*0x478238*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RGBClass>::`vftable'; /*0x47823b*/
  if ( this == (INIClass *)a2 ) /*0x478241*/
    return this->__pad_0; /*0x478241*/
  FilePipe_38::ddtor((int)this); /*0x478247*/
  v3 = a2[2]; /*0x47824d*/
  this->headNode[1] = v3; /*0x478252*/
  if ( !v3 ) /*0x478255*/
  {
    this->headNode[0] = 0; /*0x4782c6*/
    BYTE1(this->headNode[2]) = 0; /*0x4782c9*/
    return this->__pad_0; /*0x4782cc*/
  }
  v4 = __2_YAPAXI_Z(3 * v3); /*0x47825b*/
  if ( v4 ) /*0x478265*/
  {
    if ( v3 - 1 >= 0 ) /*0x47826c*/
    {
      v5 = (_BYTE *)(v4 + 2); /*0x47826e*/
      v6 = v3; /*0x478271*/
      do /*0x47827e*/
      {
        *(v5 - 2) = 0; /*0x478272*/
        *(v5 - 1) = 0; /*0x478275*/
        *v5 = 0; /*0x478278*/
        v5 += 3; /*0x47827a*/
        --v6; /*0x47827d*/
      }
      while ( v6 ); /*0x47827e*/
    }
  }
  else
  {
    v4 = 0; /*0x478282*/
  }
  this->headNode[0] = v4; /*0x478286*/
  if ( !v4 ) /*0x478289*/
    return this->__pad_0; /*0x478289*/
  v7 = this->headNode[1]; /*0x47828b*/
  v8 = 0; /*0x47828e*/
  BYTE1(this->headNode[2]) = 1; /*0x478292*/
  if ( v7 <= 0 ) /*0x478296*/
    return this->__pad_0; /*0x478296*/
  v9 = 0; /*0x478298*/
  do /*0x4782bb*/
  {
    v10 = v9 + a2[1]; /*0x4782a0*/
    v11 = this->headNode[0] + v9; /*0x4782a4*/
    ++v8; /*0x4782a6*/
    v9 += 3; /*0x4782aa*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x4782ad*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x4782b3*/
  }
  while ( v8 < this->headNode[1] ); /*0x4782bb*/
  return this->__pad_0; /*0x4782bf*/
}



// ==== 0x004782E0  _VectorClass_VRGBClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38::AddRef(_VectorClass_VRGBClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _BYTE *v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x4782eb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4782f0*/
  {
    v3 = 0; /*0x4782f2*/
    if ( m_8 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4782f8*/
    v5 = *(_BYTE **)&this->m_1[3]; /*0x4782fb*/
    v6 = (_BYTE *)(v4 + 2); /*0x478300*/
    v7 = v4 - (_DWORD)v5; /*0x478303*/
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x47831f*/
    {
      ++v3; /*0x478321*/
      v6 += 3; /*0x478322*/
      v5 += 3; /*0x478325*/
      if ( v3 >= m_8 ) /*0x47832a*/
        return 1; /*0x47832a*/
    }
  }
  return 0; /*0x47832c*/
}



// ==== 0x00478340  _VectorClass_VRGBClass::Release  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38::Release(_VectorClass_VRGBClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    v5 = a3; /*0x478354*/
    LOBYTE(this->m_C) = 0; /*0x478358*/
    if ( a3 ) /*0x47835d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478396*/
      {
        v9 = a3 + 2; /*0x478398*/
        v10 = a2; /*0x47839b*/
        do /*0x4783a8*/
        {
          *(v9 - 2) = 0; /*0x47839c*/
          *(v9 - 1) = 0; /*0x47839f*/
          *v9 = 0; /*0x4783a2*/
          v9 += 3; /*0x4783a4*/
          --v10; /*0x4783a7*/
        }
        while ( v10 ); /*0x4783a8*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x478377*/
          v8 = a2; /*0x47837a*/
          do /*0x478387*/
          {
            *(v7 - 2) = 0; /*0x47837b*/
            *(v7 - 1) = 0; /*0x47837e*/
            *v7 = 0; /*0x478381*/
            v7 += 3; /*0x478383*/
            --v8; /*0x478386*/
          }
          while ( v8 ); /*0x478387*/
        }
        v5 = (char *)v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4783bb*/
      {
        m_8 = this->m_8; /*0x4783c0*/
        if ( a2 < m_8 ) /*0x4783c5*/
          m_8 = a2; /*0x4783c7*/
        if ( m_8 > 0 ) /*0x4783cb*/
        {
          v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            v14 = *(_DWORD *)&this->m_1[3] + v13; /*0x4783d4*/
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --m_8; /*0x4783dc*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x4783e0*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x4783e6*/
          }
          while ( m_8 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( BYTE1(this->m_C) ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4783fa*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x478402*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x47840d*/
      this->m_8 = v3; /*0x478413*/
      BYTE1(this->m_C) = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VRGBClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x478426*/
    return 1; /*0x47842c*/
  }
}



// ==== 0x00478440  _VectorClass_VRGBClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FilePipe_38::ddtor(_VectorClass_VRGBClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x47844d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x478453*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47845b*/
  }
  BYTE1(this->m_C) = 0; /*0x47845e*/
  this->m_8 = 0; /*0x478461*/
}



// ==== 0x00478470  _VectorClass_VRGBClass::Read  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38::Read(_VectorClass_VRGBClass *this, _BYTE *a2)
{
  int result; // eax
  int m_8; // esi
  _BYTE *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x478470*/
    return 0; /*0x47847c*/
  m_8 = this->m_8; /*0x478482*/
  result = 0; /*0x478485*/
  if ( m_8 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  for ( i = *(_BYTE **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x47848f*/
  {
    if ( ++result >= m_8 ) /*0x4784ae*/
      return -1; /*0x4784ae*/
  }
  return result; /*0x47847a*/
}



// ==== 0x004784C0  _VectorClass_VRGBClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FilePipe_38::Write(_VectorClass_VRGBClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4784c0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/
}



// ==== 0x004784F0  _DynamicVectorClass_VRGBClass::Release  this=DynamicVector  sig=csp ====
char __thiscall ParticleTypeClass::Release(_DynamicVectorClass_VRGBClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    LOBYTE(this->m_C) = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = a3 + 2; /*0x478548*/
        v10 = a2; /*0x47854b*/
        do /*0x478558*/
        {
          *(v9 - 2) = 0; /*0x47854c*/
          *(v9 - 1) = 0; /*0x47854f*/
          *v9 = 0; /*0x478552*/
          v9 += 3; /*0x478554*/
          --v10; /*0x478557*/
        }
        while ( v10 ); /*0x478558*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x478527*/
          v8 = a2; /*0x47852a*/
          do /*0x478537*/
          {
            *(v7 - 2) = 0; /*0x47852b*/
            *(v7 - 1) = 0; /*0x47852e*/
            *v7 = 0; /*0x478531*/
            v7 += 3; /*0x478533*/
            --v8; /*0x478536*/
          }
          while ( v8 ); /*0x478537*/
        }
        v5 = (char *)v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x478562*/
    {
      m_8 = this->m_8; /*0x478567*/
      if ( a2 < m_8 ) /*0x47856c*/
        m_8 = a2; /*0x47856e*/
      if ( m_8 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *(_DWORD *)&this->m_1[3] + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --m_8; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( m_8 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( BYTE1(this->m_C) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4785a1*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4785a9*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4785b4*/
    this->m_8 = v3; /*0x4785ba*/
    BYTE1(this->m_C) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VRGBClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4785c6*/
  }
  v15 = this->m_8; /*0x4785c9*/
  if ( v15 < this->m_10 ) /*0x4785d1*/
    this->m_10 = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/
}



// ==== 0x004785F0  _DynamicVectorClass_VRGBClass::Init  this=DynamicVector  sig=csp ====
int __thiscall ParticleTypeClass::Init(_DynamicVectorClass_VRGBClass *this, _BYTE *a2)
{
  int m_10; // esi
  int result; // eax
  _BYTE *i; // ecx

  m_10 = this->m_10; /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = *(_BYTE **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= m_10 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/
}



// ==== 0x00478630  ?$VectorClass@H::vt00  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478633*/
  *Block = &VectorClass<int>::`vftable'; /*0x478636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478640*/
  {
    __3_YAXPAX_Z(v3); /*0x478648*/
    *(Block + 1) = 0; /*0x478650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47865b*/
  *(Block + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    __3_YAXPAX_Z(Block); /*0x47866b*/
  return Block; /*0x478675*/
}



// ==== 0x00478680  _VectorClass_PAVTechnoTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_TechnoType::Add(_VectorClass_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x478683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x478686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x478690*/
  {
    __3_YAXPAX_Z(v3); /*0x478698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4786a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4786ab*/
  this->m_8 = 0; /*0x4786b1*/
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    __3_YAXPAX_Z(this); /*0x4786bb*/
  return this->__pad_0; /*0x4786c5*/
}



// ==== 0x004786D0  _VectorClass_VRGBClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FilePipe_38::QueryInterface(_VectorClass_VRGBClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4786d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RGBClass>::`vftable'; /*0x4786d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4786e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4786e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4786f0*/
  }
  BYTE1(this->m_C) = 0; /*0x4786fb*/
  this->m_8 = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    __3_YAXPAX_Z(this); /*0x47870b*/
  return this->__pad_0; /*0x478715*/
}



// ==== 0x00478720  TypeList::Copy  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::Copy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (TypeList *)a2 ) /*0x47872a*/
    return &this->DynamicVectorClass; /*0x47872a*/
  (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x47872e*/
  v3 = a2[2]; /*0x478731*/
  this->? = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    this->? = 0; /*0x47877a*/
    this->? = 0; /*0x478781*/
    return &this->DynamicVectorClass; /*0x478785*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x478743*/
  this->? = v4; /*0x47874b*/
  if ( !v4 ) /*0x478750*/
    return &this->DynamicVectorClass; /*0x478750*/
  Capacity = this->?; /*0x478752*/
  v6 = 0; /*0x478755*/
  this->? = 1; /*0x478759*/
  if ( Capacity <= 0 ) /*0x47875d*/
    return &this->DynamicVectorClass; /*0x47875d*/
  do /*0x478771*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < this->? ); /*0x478771*/
  return &this->DynamicVectorClass; /*0x478775*/
}



// ==== 0x00478790  TypeList::TechnoTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::TechnoTypeConstructor(TypeList *this, int a2, int a3)
{
  this->? = 0; /*0x47879b*/
  this->? = a2; /*0x47879e*/
  this->? = 1; /*0x4787a1*/
  this->? = 0; /*0x4787a5*/
  this->DynamicVectorClass = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      this->? = (void *)a3; /*0x4787b8*/
      return &this->DynamicVectorClass; /*0x4787be*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x4787cd*/
    this->? = 1; /*0x4787d0*/
  }
  return &this->DynamicVectorClass; /*0x4787bd*/
}



// ==== 0x004787E0  INIClass::writeSection  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::writeSection(INIClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (INIClass *)a2 ) /*0x4787ea*/
    return this->__pad_0; /*0x4787ea*/
  (*(void (__thiscall **)(INIClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4787ee*/
  v3 = a2[2]; /*0x4787f1*/
  this->headNode[1] = v3; /*0x4787f6*/
  if ( !v3 ) /*0x4787f9*/
  {
    this->headNode[0] = 0; /*0x47883a*/
    BYTE1(this->headNode[2]) = 0; /*0x478841*/
    return this->__pad_0; /*0x478845*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x478803*/
  this->headNode[0] = v4; /*0x47880b*/
  if ( !v4 ) /*0x478810*/
    return this->__pad_0; /*0x478810*/
  v5 = this->headNode[1]; /*0x478812*/
  v6 = 0; /*0x478815*/
  BYTE1(this->headNode[2]) = 1; /*0x478819*/
  if ( v5 <= 0 ) /*0x47881d*/
    return this->__pad_0; /*0x47881d*/
  do /*0x478831*/
  {
    *(_DWORD *)(this->headNode[0] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478828*/
    ++v6; /*0x47882e*/
  }
  while ( v6 < this->headNode[1] ); /*0x478831*/
  return this->__pad_0; /*0x478835*/
}



// ==== 0x00478850  BuildingTypeClass::loadBuildingProperty_b  this=VectorClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_5478850(BuildingTypeClass *this, int a2, int a3)
{
  void *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  this->? = 0; /*0x47885d*/
  this->? = (void *)a2; /*0x478860*/
  LOBYTE(this->?) = 1; /*0x478863*/
  BYTE1(this->?) = 0; /*0x478867*/
  this->TechnoTypeClass = &VectorClass<RGBClass>::`vftable'; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return &this->TechnoTypeClass; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = __2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = (_BYTE *)(v8 + 2); /*0x4788b5*/
        v10 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = (void *)v8; /*0x4788c7*/
    }
    this->? = v4; /*0x4788c9*/
    BYTE1(this->?) = 1; /*0x4788cc*/
    return &this->TechnoTypeClass; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (_BYTE *)(a3 + 2); /*0x478881*/
    v6 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
  this->? = (void *)a3; /*0x478893*/
  return &this->TechnoTypeClass; /*0x478898*/
}



// ==== 0x004788E0  ParticleTypeClass::EnsureCapacity  this=ParticleTypeClass  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::EnsureCapacity(ParticleTypeClass *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  void *BehavesLike; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char *v11; // edi

  if ( this == (ParticleTypeClass *)a2 ) /*0x4788ec*/
    return &this->ArrayIndex; /*0x4788ec*/
  (*((void (__thiscall **)(ParticleTypeClass *))this->ArrayIndex + 3))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->BehavesLike = (void *)v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->ParticleTypeClass_field_28C = 0; /*0x478974*/
    BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x478977*/
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = v4 + 2; /*0x47891a*/
      v6 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  this->ParticleTypeClass_field_28C = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
  BehavesLike = this->BehavesLike; /*0x478937*/
  v8 = 0; /*0x47893a*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x47893e*/
  if ( (int)BehavesLike <= 0 ) /*0x478942*/
    return &this->ArrayIndex; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = (char *)this->ParticleTypeClass_field_28C + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    v11[2] = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < (int)this->BehavesLike ); /*0x478969*/
  return &this->ArrayIndex; /*0x47896d*/
}



// ==== 0x00478990  sub_478990  this=-  sig=ida-proto ====
int sub_478990()
{
  dword_89E318 = 0; /*0x478992*/
  dword_89E31C = 0; /*0x478997*/
  dword_89E320 = 0; /*0x47899c*/
  dword_89E324 = 0; /*0x4789a1*/
  return 0; /*0x4789a6*/
}



// ==== 0x004789B0  sub_4789B0  this=-  sig=ida-proto ====
void sub_4789B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4789bc*/
  dbl_89E330 = Math::Sqrt(v0 + v0); /*0x4789ce*/
}



// ==== 0x004789E0  sub_4789E0  this=-  sig=ida-proto ====
void sub_4789E0()
{
  dbl_89E380 = dbl_89E330 / 60.0; /*0x4789ec*/
}



// ==== 0x00478A00  sub_478A00  this=-  sig=ida-proto ====
void sub_478A00()
{
  dbl_89E368 = 1.0 / dbl_89E380; /*0x478a0c*/
}



// ==== 0x00478A20  sub_478A20  this=-  sig=ida-proto ====
void sub_478A20()
{
  dbl_89E360 = 0.0174532925199433 * 45.0; /*0x478a2c*/
}



// ==== 0x00478A40  sub_478A40  this=-  sig=ida-proto ====
void sub_478A40()
{
  dbl_89E338 = 0.0174532925199433 * 60.0; /*0x478a4c*/
}



// ==== 0x00478A60  sub_478A60  this=-  sig=ida-proto ====
void sub_478A60()
{
  dbl_89E310 = 0.0174532925199433 * 90.0; /*0x478a6c*/
}



// ==== 0x00478A80  sub_478A80  this=-  sig=ida-proto ====
__int64 sub_478A80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E310 - dbl_89E338); /*0x478a92*/
  result = Math::RoundToInt(v0 * dbl_89E330 * 0.5); /*0x478aa6*/
  dword_89E388 = result; /*0x478aab*/
  return result; /*0x478ab0*/
}



// ==== 0x00478AC0  sub_478AC0  this=-  sig=ida-proto ====
void sub_478AC0()
{
  dbl_89E340 = Math::ArcTan((double)dword_89E388 * 0.00390625); /*0x478ad7*/
}



// ==== 0x00478AF0  sub_478AF0  this=-  sig=ida-proto ====
void sub_478AF0()
{
  dbl_89E358 = Math::ArcTan((double)(2 * dword_89E388) / dbl_89E330); /*0x478b12*/
}



// ==== 0x00478B20  sub_478B20  this=-  sig=ida-proto ====
__int64 sub_478B20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E388) + 0.5); /*0x478b3b*/
  dword_89E37C = result; /*0x478b40*/
  return result; /*0x478b46*/
}



// ==== 0x00478B50  sub_478B50  this=-  sig=ida-proto ====
int sub_478B50()
{
  word_89E328 = 0; /*0x478b52*/
  word_89E32A = 0; /*0x478b58*/
  return 0; /*0x478b5e*/
}



// ==== 0x00478B60  sub_478B60  this=-  sig=ida-proto ====
int sub_478B60()
{
  dword_89E348 = 0; /*0x478b62*/
  dword_89E34C = 0; /*0x478b67*/
  dword_89E350 = 0; /*0x478b6c*/
  return 0; /*0x478b71*/
}



// ==== 0x00478B80  sub_478B80  this=-  sig=ida-proto ====
int sub_478B80()
{
  dword_89E378 = 0; /*0x478b85*/
  dword_89E370 = 128; /*0x478b8f*/
  dword_89E374 = 128; /*0x478b94*/
  return 128; /*0x478b99*/
}



// ==== 0x00478BA0  CCToolTip::CalculatePopupPosition  this=CCToolTip  sig=csp ====
char __thiscall CCToolTip::CalculatePopupPosition(CCToolTip *this, _DWORD *a2)
{
  unsigned __int16 *v2; // esi
  CellStruct *v3; // edi
  int v4; // eax
  int v5; // ebp
  char *v6; // ecx
  bool v7; // cc
  char *v8; // edx
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
  char *v12; // eax
  int CCToolTip_field_0x04; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  void *v18; // edi
  int v19; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // [esp+0h] [ebp-1Ch] BYREF
  Text *v25; // [esp+4h] [ebp-18h]
  CCToolTip *v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+14h] [ebp-8h]
  int v28; // [esp+18h] [ebp-4h]

  v26 = this; /*0x478ba3*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) >= 0 ) /*0x478bb4*/
  {
    v25 = g_FogOfWarState; /*0x478bcb*/
    if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478bcf*/
    {
      v2 = (unsigned __int16 *)a2; /*0x478bdc*/
      if ( *a2 > DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478be4*/
      {
        v3 = (CellStruct *)&DSurface_SidebarBounds; /*0x478be6*/
        byte_884B8E = 1; /*0x478beb*/
        goto LABEL_8; /*0x478bf2*/
      }
    }
    else
    {
      v2 = (unsigned __int16 *)a2; /*0x478bff*/
      if ( *a2 <= DSurface_SidebarBounds + dword_886F98 ) /*0x478c07*/
      {
        v3 = (CellStruct *)&DSurface_SidebarBounds; /*0x478c09*/
        byte_884B8E = 1; /*0x478c0e*/
        goto LABEL_8; /*0x478c15*/
      }
    }
    v3 = &DSurface_ViewBounds; /*0x478c17*/
LABEL_8:
    if ( v3 ) /*0x478c1e*/
    {
      Text::Layout(g_FogOfWarState, v2 + 8, &v24, &a2, *(_DWORD *)v3->__pad_8); /*0x478c36*/
      v4 = *((_DWORD *)v2 + 2); /*0x478c43*/
      v5 = v24 + 4; /*0x478c46*/
      v6 = (char *)a2 + 3; /*0x478c49*/
      v7 = v24 + 4 <= v4; /*0x478c4c*/
      v24 += 4; /*0x478c4e*/
      a2 = (_DWORD *)((char *)a2 + 3); /*0x478c52*/
      if ( !v7 ) /*0x478c56*/
        v4 = v5; /*0x478c58*/
      v8 = (char *)*((_DWORD *)v2 + 3); /*0x478c5a*/
      *((_DWORD *)v2 + 2) = v4; /*0x478c5d*/
      if ( (int)v6 <= (int)v8 ) /*0x478c62*/
        v6 = v8; /*0x478c64*/
      *((_DWORD *)v2 + 3) = v6; /*0x478c66*/
      v9 = *(_DWORD *)v3->__pad_8; /*0x478c69*/
      if ( v4 >= v9 ) /*0x478c6e*/
      {
        Text::Layout(v25, v2 + 8, &v24, &a2, v9 - 4); /*0x478c83*/
        v10 = *((_DWORD *)v2 + 2); /*0x478c90*/
        v5 = v24 + 4; /*0x478c93*/
        v11 = (char *)a2 + 3; /*0x478c96*/
        v7 = v24 + 4 <= v10; /*0x478c99*/
        v24 += 4; /*0x478c9b*/
        a2 = (_DWORD *)((char *)a2 + 3); /*0x478c9f*/
        if ( !v7 ) /*0x478ca3*/
          v10 = v5; /*0x478ca5*/
        *((_DWORD *)v2 + 2) = v10; /*0x478ca7*/
        v12 = (char *)*((_DWORD *)v2 + 3); /*0x478caa*/
        if ( (int)v11 > (int)v12 ) /*0x478caf*/
          v12 = v11; /*0x478cb1*/
        *((_DWORD *)v2 + 3) = v12; /*0x478cb3*/
      }
      CCToolTip_field_0x04 = v26->CCToolTip_field_0x04; /*0x478cba*/
      if ( CCToolTip_field_0x04 && *(_BYTE *)(CCToolTip_field_0x04 + 24) ) /*0x478cc5*/
      {
        v14 = (int *)(CCToolTip_field_0x04 + 4); /*0x478cd0*/
        v15 = *v14; /*0x478cd3*/
        v16 = v14[1]; /*0x478cd5*/
        v27 = v14[2]; /*0x478cdb*/
        v28 = v14[3]; /*0x478ce2*/
        if ( v15 >= v3->field_0 + *(_DWORD *)v3->__pad_8 / 2 ) /*0x478cf4*/
          *(_DWORD *)v2 = v15 - v5 + 5; /*0x478d07*/
        else
          *(_DWORD *)v2 = v27 + v15 - 5; /*0x478cfe*/
        v17 = v3->field_0; /*0x478d09*/
        if ( v3->field_0 <= *(_DWORD *)v2 ) /*0x478d0f*/
          v17 = *(_DWORD *)v2; /*0x478d11*/
        *(_DWORD *)v2 = v17; /*0x478d13*/
        if ( v16 >= (int)v3->field_4 + *(_DWORD *)&v3->__pad_8[4] / 2 ) /*0x478d24*/
          *((_DWORD *)v2 + 1) = v16 - (_DWORD)a2 + 5; /*0x478d3a*/
        else
          *((_DWORD *)v2 + 1) = v28 + v16 - 5; /*0x478d2e*/
        v18 = v3->field_4; /*0x478d3d*/
        v19 = *((_DWORD *)v2 + 1); /*0x478d40*/
        if ( (int)v18 > v19 ) /*0x478d45*/
        {
          *((_DWORD *)v2 + 1) = v18; /*0x478d4a*/
          return 1; /*0x478d55*/
        }
      }
      else
      {
        v21 = *((_DWORD *)v2 + 2) + *(_DWORD *)v2 - v3->field_0 - *(_DWORD *)v3->__pad_8; /*0x478d68*/
        if ( v21 > 0 ) /*0x478d6c*/
          *(_DWORD *)v2 -= v21; /*0x478d70*/
        v22 = *((_DWORD *)v2 + 3); /*0x478d75*/
        v23 = *((_DWORD *)v2 + 1) + 16; /*0x478d7b*/
        *((_DWORD *)v2 + 1) = v23; /*0x478d7d*/
        if ( (signed int)(v22 + v23 - *(_DWORD *)&v3->__pad_8[4] - (unsigned int)v3->field_4) <= 0 ) /*0x478d90*/
          return 1; /*0x478d90*/
        v19 = v23 - v22 - 16; /*0x478d94*/
      }
      *((_DWORD *)v2 + 1) = v19; /*0x478d97*/
    }
    return 1; /*0x478da3*/
  }
  return 0; /*0x478d52*/
}



// ==== 0x00478DB0  CCToolTip::Release  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::Release(CCToolTip *this, _DWORD *a2)
{
  _DWORD *v3; // esi

  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478dbc*/
  {
    v3 = a2; /*0x478dca*/
    if ( *a2 >= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478dd2*/
      goto LABEL_5; /*0x478dd2*/
  }
  else
  {
    v3 = a2; /*0x478de2*/
    if ( *a2 <= DSurface_SidebarBounds + dword_886F98 ) /*0x478dea*/
    {
LABEL_5:
      byte_884B8E = 1; /*0x478dec*/
      g_CameoRenderFlag = 1; /*0x478df1*/
    }
  }
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x478df6*/
  return ToolTipManager::release((ToolTipManager *)this, (int)v3); /*0x478e0a*/
}



// ==== 0x00478E10  CCToolTip::Draw1  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::Draw1(CCToolTip *this, char a2)
{
  *((_BYTE *)this + 608) = a2; /*0x478e16*/
  return ToolTipManager::ddtor((ToolTipManager *)this, a2 == 0); /*0x478e25*/
}



// ==== 0x00478E30  CCToolTip::Draw2  this=CCToolTip  sig=csp ====
char __userpurge CCToolTip::Draw2@<al>(CCToolTip *this, int a2@<ebp>, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  int CCToolTip_field_0x04; // edi
  int v7; // ebx
  AudioStream *v8; // esi
  int v9; // ebx
  int v10; // edx
  Text *v11; // ebp
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v21; // [esp+10h] [ebp-28h] BYREF
  _WORD *p_CCToolTip_field_0x10; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  _DWORD v28[3]; // [esp+2Ch] [ebp-Ch] BYREF
  _WORD *retaddr; // [esp+38h] [ebp+0h]

  v5 = *(_DWORD *)this->__pad_0; /*0x478e37*/
  CCToolTip_field_0x04 = this->CCToolTip_field_0x04; /*0x478e42*/
  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478e48*/
  {
    v7 = DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x478e56*/
    if ( v5 + this->CCToolTip_field_0x08 <= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478e5f*/
    {
      v8 = DSurface_Composite; /*0x478e61*/
      goto LABEL_13; /*0x478e67*/
    }
    if ( *(_BYTE *)(v4 + 608) != 1 || v5 < v7 ) /*0x478e78*/
      return v5; /*0x478e78*/
    v8 = (AudioStream *)DSurface_Sidebar; /*0x478e7e*/
    v5 -= v7; /*0x478e84*/
  }
  else
  {
    v9 = DSurface_SidebarBounds + dword_886F98; /*0x478e94*/
    if ( v5 >= DSurface_SidebarBounds + dword_886F98 ) /*0x478e98*/
    {
      v8 = DSurface_Composite; /*0x478e9a*/
      v5 -= v9; /*0x478ea0*/
      goto LABEL_13; /*0x478ea2*/
    }
    if ( *(_BYTE *)(v4 + 608) != 1 || v5 + this->CCToolTip_field_0x08 >= v9 ) /*0x478eb8*/
      return v5; /*0x478eb8*/
    v8 = (AudioStream *)DSurface_Sidebar; /*0x478ebe*/
  }
  g_TooltipActive = 1; /*0x478ec4*/
LABEL_13:
  if ( v8 ) /*0x478ecd*/
  {
    v24 = CCToolTip_field_0x04; /*0x478ed3*/
    v26 = CCToolTip_field_0x04; /*0x478ed7*/
    v10 = *(_DWORD *)v8->__pad_0; /*0x478ede*/
    v11 = g_FogOfWarState; /*0x478ee1*/
    v23 = v5; /*0x478ee9*/
    v25 = v5; /*0x478eed*/
    p_CCToolTip_field_0x10 = &this->CCToolTip_field_0x10; /*0x478ef1*/
    v12 = (*(int (__thiscall **)(AudioStream *, int))(v10 + 124))(v8, a2); /*0x478ef5*/
    Text::Layout(v11, (unsigned __int16 *)&this->CCToolTip_field_0x10, &a3, &v21, v12); /*0x478f06*/
    v27 = v25 + v21; /*0x478f1f*/
    v26 = v24 + a3; /*0x478f25*/
    v13 = *(_DWORD *)v8->__pad_0; /*0x478f2b*/
    v14 = v21 + 4; /*0x478f33*/
    v15 = a3 + 8; /*0x478f37*/
    p_CCToolTip_field_0x10 = (_WORD *)(v21 + 4); /*0x478f39*/
    v16 = (*(int (__thiscall **)(AudioStream *))(v13 + 124))(v8); /*0x478f3d*/
    v17 = v24; /*0x478f40*/
    if ( v15 + v24 > v16 ) /*0x478f49*/
    {
      v17 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)v8->__pad_0 + 124))(v8) - v15; /*0x478f54*/
      v24 = v17; /*0x478f56*/
    }
    v26 = v15 + v17; /*0x478f61*/
    v27 = v25 + v14; /*0x478f71*/
    v28[0] = v17; /*0x478f85*/
    v28[2] = v15; /*0x478f8d*/
    retaddr = p_CCToolTip_field_0x10; /*0x478f91*/
    v28[1] = v25; /*0x478fcf*/
    v18 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x478fda*/
        | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
        | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(AudioStream *, _DWORD *))(*(_DWORD *)v8->__pad_0 + 20))(v8, v28); /*0x478fde*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)v8->__pad_0 + 88))(v8, &v27, v18); /*0x478feb*/
    Char::Swap((Char *)v11, 1); /*0x478ff2*/
    TextGroup::SetRect((TextGroup *)v11, &v23); /*0x478ffe*/
    Property::Set((Property *)v11, v18); /*0x479006*/
    LOBYTE(v5) = Font::Print((int)v11, (int)v8, p_CCToolTip_field_0x10, v23 + 4, v24 + 2, v25 - v23, v26 - v24, 0, 0, 0); /*0x47903c*/
  }
  return v5; /*0x479042*/
}



// ==== 0x00479050  CCToolTip::Show  this=CCToolTip  sig=csp ====
int __stdcall CCToolTip::Show(CCToolTip *this)
{
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) >= 0 ) /*0x47905d*/
    return CursorAnim::Load((TabClass *)this); /*0x47906e*/
  else
    return 0; /*0x47905f*/
}



// ==== 0x00479080  sub_479080  this=-  sig=ida-proto ====
int sub_479080()
{
  dword_89E390 = 0; /*0x479082*/
  dword_89E394 = 0; /*0x479087*/
  dword_89E398 = 0; /*0x47908c*/
  dword_89E39C = 0; /*0x479091*/
  return 0; /*0x479096*/
}



// ==== 0x004790A0  Game::CheckForGameCD  this=Game  sig=csp ====
int __thiscall Game::CheckForGameCD(Game *this)
{
  return AlwaysFindYRCD();
}



// ==== 0x004790B0  SetSoundWarning  this=AbstractClass  sig=csp ====
int __fastcall SetSoundWarning(int a1)
{
  int result; // eax

  if ( byte_89E3A0 == 1 ) /*0x4790b7*/
  {
    dword_81C1D0 = -2; /*0x4790b9*/
  }
  else
  {
    if ( a1 >= 0 ) /*0x4790c6*/
      a1 = 2; /*0x4790c8*/
    dword_81C1D0 = a1; /*0x4790cd*/
  }
  return result; /*0x4790c3*/
}



// ==== 0x004790E0  CD::AlwaysAvailable  this=CD  sig=csp ====
char __thiscall CD::AlwaysAvailable(CD *this, int a2)
{
  if ( a2 == -2 ) /*0x4790e7*/
    return 1; /*0x4790e9*/
  if ( byte_89E3A0 == 1 ) /*0x4790f5*/
    return 1; /*0x4790f7*/
  *((_DWORD *)this + 1) = -1; /*0x4790fd*/
  return CD::CheckDiscPresence(this, a2); /*0x4790eb*/
}



// ==== 0x00479110  CD::NeverAsk  this=CD  sig=csp ====
bool __thiscall CD::NeverAsk(CD *this, int a2)
{
  int v3; // eax
  BOOL v4; // esi
  wchar_t *StringCSF; // eax
  bool v6; // bl
  BOOL v7; // eax
  int v8; // esi
  int v9; // esi

  if ( *((_DWORD *)this + 1) == -1 ) /*0x479119*/
  {
    v3 = dword_A83D14; /*0x47911b*/
    if ( dword_A83D14 == -1 ) /*0x479123*/
      v3 = dword_A83D18; /*0x479125*/
    *((_DWORD *)this + 1) = v3; /*0x47912a*/
  }
  Theme::Stop((Theme *)&unk_A83D10, 0); /*0x479134*/
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0; /*0x47914b*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x47915a*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x479164*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x47917c*/
  StringCSF = GetStringCSF(aTxtInsertCdDia, 0, aDRa2mdpostCdCp, 164); /*0x479194*/
  v6 = (unsigned __int8)CD::CreateDialog((CD *)StringCSF) != 0; /*0x4791a4*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x4791ac*/
  v7 = v4; /*0x4791b1*/
  v8 = v4 - 1; /*0x4791b3*/
  if ( v7 ) /*0x4791b6*/
  {
    v9 = v8 + 1; /*0x4791b8*/
    do /*0x4791c5*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4791c1*/
      --v9; /*0x4791c4*/
    }
    while ( v9 ); /*0x4791c5*/
  }
  if ( !v6 && *((_DWORD *)this + 1) != -1 ) /*0x4791d1*/
  {
    Theme::QueueSong((int)&unk_A83D10, *((_DWORD *)this + 1)); /*0x4791d9*/
    *((_DWORD *)this + 1) = -1; /*0x4791de*/
  }
  return v6; /*0x4791e5*/
}



// ==== 0x004791F0  CD::LoadScenarioMixFiles  this=CD  sig=csp ====
char __userpurge LinkedList::LoadScenarioMixFiles@<al>(CD *this, int a2@<ebx>, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  char *v10; // edi
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  MixFileClass *v13; // eax
  MixFileClass *v14; // eax
  _DWORD *v15; // eax
  char v16; // bl
  MixFileClass *v17; // eax
  MixFileClass *v18; // eax
  _DWORD *v19; // eax
  char v20; // bl
  MixFileClass *v21; // eax
  char Buffer[4]; // [esp+24h] [ebp-ACh] BYREF
  char Source[60]; // [esp+28h] [ebp-A8h] BYREF
  CCFileClass v24; // [esp+64h] [ebp-6Ch] BYREF
  int v25; // [esp+BCh] [ebp-14h] BYREF
  int v26[2]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  Debug::Log(); /*0x479208*/
  if ( *(_DWORD *)(v5 + 4) == -1 ) /*0x479216*/
  {
    v6 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == -1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    *(_DWORD *)(v5 + 4) = v6; /*0x479227*/
  }
  Theme::Stop((Theme *)&unk_A83D10, 0); /*0x479232*/
  if ( g_MixFile_MOVIES ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( g_MixFile_MOVIES ) /*0x479259*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x47925f*/
    g_MixFile_MOVIES = 0; /*0x479261*/
  }
  if ( g_MixFile_THEME ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( g_MixFile_THEME ) /*0x479289*/
      (**(void (__thiscall ***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1); /*0x47928f*/
    g_MixFile_THEME = 0; /*0x479291*/
  }
  if ( MixFileClass_MULTI ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( MixFileClass_MULTI ) /*0x4792b9*/
      (**(void (__thiscall ***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x4792bf*/
    MixFileClass_MULTI = 0; /*0x4792c1*/
  }
  if ( g_MixFile_MULTIMD ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( g_MixFile_MULTIMD ) /*0x4792e9*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x4792ef*/
    g_MixFile_MULTIMD = 0; /*0x4792f1*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( g_MixFile_MAPSFirst ) /*0x479319*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x47931f*/
    g_MixFile_MAPSFirst = 0; /*0x479321*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( g_MixFile_MAPSMDFirst ) /*0x479349*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x47934f*/
    g_MixFile_MAPSMDFirst = 0; /*0x479351*/
  }
  if ( dword_884E34 ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( dword_884E34 ) /*0x479379*/
      (**(void (__thiscall ***)(int, int))dword_884E34)(dword_884E34, 1); /*0x47937f*/
    dword_884E34 = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = MixFileClass::FromFile(v8, aMainMix, (int)dword_886980); /*0x4793b8*/
  else
    v9 = 0; /*0x4793bf*/
  dword_884E34 = (int)v9; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v10 = (char *)this + 1; /*0x4793d4*/
  sprintf(Buffer, "MAPSMD%02d.MIX", &this->__tail_0[1]); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    g_MixFile_MAPSMDFirst = (int)MixFileClass::FromFile(v11, Buffer, (int)dword_886980); /*0x47941a*/
  else
    g_MixFile_MAPSMDFirst = 0; /*0x479421*/
  sprintf(Buffer, "MAPS%02d.MIX", v10); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    g_MixFile_MAPSFirst = 0; /*0x479489*/
LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  g_MixFile_MAPSFirst = (int)MixFileClass::FromFile(v12, Buffer, (int)dword_886980); /*0x479467*/
  if ( !g_MixFile_MAPSFirst ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v13 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    g_MixFile_MULTIMD = (int)MixFileClass::FromFile(v13, g_Str_File_MULTIMD_MIX, (int)dword_886980); /*0x4794ba*/
  else
    g_MixFile_MULTIMD = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v14 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    MixFileClass_MULTI = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  MixFileClass_MULTI = (int)MixFileClass::FromFile(v14, aMultiMix, (int)dword_886980); /*0x4794f2*/
  if ( !MixFileClass_MULTI ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = CCFileClass::Construct(&v24, g_Str_File_THEMEMD_MIX); /*0x479526*/
  v16 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v15 + 20))(v15, 0, a2); /*0x47953f*/
  v24.? = (int)&CCFileClass::`vftable'; /*0x479541*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24.? = (int)&off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v24.?); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v17 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v17, g_Str_File_THEMEMD_MIX, (int)dword_886980); /*0x479590*/
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v18 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v18, g_Str_File_THEME_MIX, (int)dword_886980); /*0x4795bb*/
      goto LABEL_58; /*0x4795c0*/
    }
  }
  g_MixFile_THEME = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles((Audio *)&unk_A83D10); /*0x4795c8*/
  sprintf(Source, "MOVMD%02d.MIX", a3); /*0x4795e4*/
  v19 = CCFileClass::Construct((CCFileClass *)&v24.?, Source); /*0x4795f5*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 20))(v19, 0); /*0x479609*/
  *(_DWORD *)v24.CDFileClass = &CCFileClass::`vftable'; /*0x47960b*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)&v25); /*0x479616*/
  *(_DWORD *)v24.CDFileClass = &off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v24); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    g_MixFile_MOVIES = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v10); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  g_MixFile_MOVIES = (int)MixFileClass::FromFile(v21, Buffer, (int)dword_886980); /*0x47964a*/
  if ( !g_MixFile_MOVIES ) /*0x479662*/
    goto LABEL_61; /*0x479662*/
  return Map_Load_751C30(); /*0x479390*/
}



// ==== 0x004796E0  sub_4796E0  this=-  sig=ida-proto ====
int sub_4796E0()
{
  memset(&unk_89E3A8, 0, 0x68u); /*0x4796ed*/
  return atexit(nullsub_109); /*0x4796fc*/
}



// ==== 0x00479700  nullsub_109  this=-  sig=ida-proto ====
void __cdecl nullsub_109()
{
  ; /*0x479700*/
}



// ==== 0x00479730  nullsub_110  this=-  sig=ida-proto ====
void nullsub_110()
{
  ; /*0x479730*/
}



// ==== 0x00479740  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_479740(ObjectClass *this, DWORD BytesReturned)
{
  int v2; // esi
  UINT v3; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  DWORD Buffer[2]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  if ( stru_887598.onBridge ) /*0x47974c*/
  {
    sub_47A080(this, BytesReturned); /*0x479753*/
    return; /*0x47975d*/
  }
  v2 = (char)BytesReturned + 65; /*0x479769*/
  sprintf((char *const)Buffer, "%c:\\", v2); /*0x479773*/
  v3 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479786*/
  if ( v3 ) /*0x479789*/
  {
    if ( v3 != 3 ) /*0x47978e*/
    {
LABEL_5:
      Debug::Log(); /*0x479790*/
      return; /*0x4797a2*/
    }
    v4 = 0x80000000; /*0x4797a5*/
  }
  else
  {
    v4 = -1073741824; /*0x4797ac*/
  }
  sprintf(FileName, "\\\\.\\%c:", v2); /*0x4797bc*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x4797da*/
  if ( FileA == (HANDLE)-1 ) /*0x4797df*/
    goto LABEL_5; /*0x4797df*/
  v6 = 0; /*0x479805*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479822*/
  {
    GetLastError(); /*0x479824*/
    Debug::Log(); /*0x47982c*/
    Sleep(0x1F4u); /*0x479839*/
    if ( ++v6 >= 20 ) /*0x479843*/
      goto LABEL_18; /*0x479843*/
  }
  if ( !DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x4798c7*/
    || (LOBYTE(BytesReturned) = 0, !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    || !DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    GetLastError(); /*0x4798d4*/
    Debug::Log(); /*0x4798dc*/
  }
LABEL_18:
  CloseHandle(FileA); /*0x4798e4*/
}



// ==== 0x00479900  sub_479900  this=-  sig=csp ====
int __stdcall sub_479900(char a1)
{
  UINT v1; // eax
  DWORD v3; // edi
  HANDLE FileA; // edi
  char Buffer[8]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  sprintf(Buffer, "%c:\\", a1 + 65); /*0x479918*/
  v1 = GetDriveTypeA(Buffer) - 2; /*0x47992b*/
  if ( v1 ) /*0x47992e*/
  {
    if ( v1 != 3 ) /*0x479933*/
    {
      Debug::Log(); /*0x47993a*/
      return -1; /*0x47994a*/
    }
    v3 = 0x80000000; /*0x47994d*/
  }
  else
  {
    v3 = -1073741824; /*0x479954*/
  }
  sprintf(FileName, "\\\\.\\%c:", a1 + 65); /*0x479964*/
  FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0); /*0x479982*/
  if ( FileA == (HANDLE)-1 ) /*0x479987*/
    Debug::Log(); /*0x47998f*/
  return (int)FileA; /*0x479945*/
}



// ==== 0x004799D0  sub_4799D0  this=-  sig=csp ====
char __stdcall sub_4799D0(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x4799d8*/
  v2 = 0; /*0x4799e4*/
  while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a03*/
  {
    GetLastError(); /*0x479a06*/
    Debug::Log(); /*0x479a0e*/
    Sleep(0x1F4u); /*0x479a1b*/
    if ( ++v2 >= 20 ) /*0x479a21*/
      return 0; /*0x479a29*/
  }
  return 1; /*0x479a23*/
}



// ==== 0x00479A40  sub_479A40  this=-  sig=csp ====
char __stdcall sub_479A40(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x479a48*/
  v2 = 0; /*0x479a54*/
  while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a73*/
  {
    GetLastError(); /*0x479a76*/
    Debug::Log(); /*0x479a7e*/
    Sleep(0x1F4u); /*0x479a8b*/
    if ( ++v2 >= 20 ) /*0x479a91*/
      return 0; /*0x479a99*/
  }
  return 1; /*0x479a93*/
}



// ==== 0x00479BA0  sub_479BA0  this=-  sig=csp ====
char __stdcall sub_479BA0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  char v7; // [esp+Bh] [ebp-11h]
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479baa*/
  v7 = 0; /*0x479bb8*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479bbd*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479bd0*/
  if ( v2 ) /*0x479bd3*/
  {
    if ( v2 != 3 ) /*0x479bd8*/
    {
LABEL_3:
      Debug::Log(); /*0x479bda*/
      return 0; /*0x479bee*/
    }
    v4 = 0x80000000; /*0x479bf1*/
  }
  else
  {
    v4 = -1073741824; /*0x479bf8*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479c08*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479c26*/
  if ( FileA == (HANDLE)-1 ) /*0x479c2b*/
    goto LABEL_3; /*0x479c2b*/
  v6 = 0; /*0x479c53*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479c70*/
  {
    GetLastError(); /*0x479c72*/
    Debug::Log(); /*0x479c7e*/
    Sleep(0x1F4u); /*0x479c8b*/
    if ( ++v6 >= 20 ) /*0x479c91*/
      goto LABEL_17; /*0x479c91*/
  }
  if ( DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x479d21*/
    && (LOBYTE(BytesReturned) = 0, DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    && DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    v7 = 1; /*0x479d44*/
  }
  else
  {
    GetLastError(); /*0x479d2e*/
    Debug::Log(); /*0x479d3a*/
  }
LABEL_17:
  CloseHandle(FileA); /*0x479d49*/
  return v7; /*0x479be9*/
}



// ==== 0x00479D60  sub_479D60  this=-  sig=csp ====
char __stdcall sub_479D60(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479d6a*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479d79*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479d8c*/
  if ( v2 ) /*0x479d8f*/
  {
    if ( v2 != 3 ) /*0x479d94*/
    {
LABEL_3:
      Debug::Log(); /*0x479d96*/
      return 0; /*0x479dab*/
    }
    v4 = 0x80000000; /*0x479dae*/
  }
  else
  {
    v4 = -1073741824; /*0x479db5*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479dc5*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479de3*/
  if ( FileA == (HANDLE)-1 ) /*0x479de8*/
    goto LABEL_3; /*0x479de8*/
  v6 = 0; /*0x479e10*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479e2f*/
  {
    GetLastError(); /*0x479e32*/
    Debug::Log(); /*0x479e3a*/
    Sleep(0x1F4u); /*0x479e47*/
    if ( ++v6 >= 20 ) /*0x479e4d*/
      goto LABEL_13; /*0x479e4d*/
  }
  LOBYTE(BytesReturned) = 1; /*0x479e69*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479e6e*/
  {
    GetLastError(); /*0x479e7f*/
    Debug::Log(); /*0x479e87*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x479e8f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479ea6*/
      break; /*0x479eae*/
    GetLastError(); /*0x479eb1*/
    Debug::Log(); /*0x479eb9*/
    Sleep(0x1F4u); /*0x479ec6*/
  }
  CloseHandle(FileA); /*0x479ecf*/
  return 1; /*0x479da5*/
}



// ==== 0x00479EF0  sub_479EF0  this=-  sig=csp ====
char __stdcall sub_479EF0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479efa*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479f09*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479f1c*/
  if ( v2 ) /*0x479f1f*/
  {
    if ( v2 != 3 ) /*0x479f24*/
    {
LABEL_3:
      Debug::Log(); /*0x479f26*/
      return 0; /*0x479f3b*/
    }
    v4 = 0x80000000; /*0x479f3e*/
  }
  else
  {
    v4 = -1073741824; /*0x479f45*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479f55*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479f73*/
  if ( FileA == (HANDLE)-1 ) /*0x479f78*/
    goto LABEL_3; /*0x479f78*/
  v6 = 0; /*0x479fa0*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479fbf*/
  {
    GetLastError(); /*0x479fc2*/
    Debug::Log(); /*0x479fca*/
    Sleep(0x1F4u); /*0x479fd7*/
    if ( ++v6 >= 20 ) /*0x479fdd*/
      goto LABEL_13; /*0x479fdd*/
  }
  LOBYTE(BytesReturned) = 0; /*0x479ff9*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479ffe*/
  {
    GetLastError(); /*0x47a00f*/
    Debug::Log(); /*0x47a017*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x47a01f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x47a036*/
      break; /*0x47a03e*/
    GetLastError(); /*0x47a041*/
    Debug::Log(); /*0x47a049*/
    Sleep(0x1F4u); /*0x47a056*/
  }
  CloseHandle(FileA); /*0x47a05f*/
  return 1; /*0x479f35*/
}



// ==== 0x0047A080  ObjectClass::method_47A080  this=ObjectClass  sig=csp ====
void __thiscall sub_47A080(ObjectClass *this, DWORD a2)
{
  char v2; // bl
  HANDLE FileA; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-20h] BYREF
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2 + 1; /*0x47a098*/
  LOBYTE(a2) = a2 + 1; /*0x47a0a3*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a0b3*/
  if ( !(unsigned __int8)CDROM::LockVolume((int)this, FileA, a2, 0, 0) ) /*0x47a0ba*/
  {
    Debug::Log(); /*0x47a0cf*/
    return; /*0x47a0de*/
  }
  if ( !CDROM::DeviceIoControl(FileA, a2) ) /*0x47a0e5*/
  {
    Debug::Log(); /*0x47a0fa*/
    DriveControlCD((int)this, FileA, a2); /*0x47a105*/
    return; /*0x47a111*/
  }
  memset(&InBuffer[1], 0, 0x18u); /*0x47a123*/
  InBuffer[3] = 17421; /*0x47a13b*/
  InBuffer[0] = v2; /*0x47a143*/
  InBuffer[2] = 2121; /*0x47a147*/
  if ( !DeviceIoControl(FileA, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a14f*/
  {
    GetLastError(); /*0x47a160*/
    Debug::Log(); /*0x47a16c*/
LABEL_8:
    Debug::Log(); /*0x47a17d*/
    goto LABEL_9; /*0x47a186*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a17b*/
    goto LABEL_8; /*0x47a17b*/
LABEL_9:
  DriveControlCD((int)this, FileA, a2); /*0x47a18e*/
  CloseHandle(FileA); /*0x47a19b*/
}



// ==== 0x0047A1B0  ObjectClass::method_47A1B0  this=ObjectClass  sig=csp ====
char __thiscall sub_47A1B0(ObjectClass *this, DWORD BytesReturned)
{
  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a1bc*/
  Debug::Log(); /*0x47a1d6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a1e0*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a203*/
  Debug::Log(); /*0x47a205*/
  if ( (unsigned __int8)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a218*/
  {
    Debug::Log(); /*0x47a244*/
    Debug::Log(); /*0x47a24e*/
    if ( sub_47A560(FileA, BytesReturned) ) /*0x47a25a*/
    {
      Debug::Log(); /*0x47a280*/
      v5 = 1; /*0x47a285*/
    }
    else
    {
      Debug::Log(); /*0x47a26f*/
      v5 = 0; /*0x47a277*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a28f*/
    CloseHandle(FileA); /*0x47a295*/
    Debug::Log(); /*0x47a2af*/
    return v5; /*0x47a2b7*/
  }
  else
  {
    Debug::Log(); /*0x47a22d*/
    return 0; /*0x47a235*/
  }
}



// ==== 0x0047A2D0  ObjectClass::method_47A2D0  this=ObjectClass  sig=csp ====
char __thiscall sub_47A2D0(ObjectClass *this, DWORD BytesReturned)
{
  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a2dc*/
  Debug::Log(); /*0x47a2f6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a300*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a323*/
  Debug::Log(); /*0x47a325*/
  if ( (unsigned __int8)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a338*/
  {
    Debug::Log(); /*0x47a364*/
    Debug::Log(); /*0x47a36e*/
    if ( CDROM::DeviceIoControl(FileA, BytesReturned) ) /*0x47a37a*/
    {
      Debug::Log(); /*0x47a3a0*/
      v5 = 1; /*0x47a3a5*/
    }
    else
    {
      Debug::Log(); /*0x47a38f*/
      v5 = 0; /*0x47a397*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a3af*/
    CloseHandle(FileA); /*0x47a3b5*/
    Debug::Log(); /*0x47a3cf*/
    return v5; /*0x47a3d7*/
  }
  else
  {
    Debug::Log(); /*0x47a34d*/
    return 0; /*0x47a355*/
  }
}



// ==== 0x0047A3F0  CDROM::DeviceIoControl  this=ObjectClass  sig=csp ====
bool __stdcall CDROM_DeviceIoControl(HANDLE hDevice, int a2)
{
  int v2; // esi
  HANDLE v3; // edi
  BOOL v4; // eax
  bool v5; // bl
  char v6; // al
  bool v7; // cc
  char v9; // [esp+10h] [ebp-24h] BYREF
  int v10; // [esp+11h] [ebp-23h]
  _DWORD InBuffer[7]; // [esp+18h] [ebp-1Ch] BYREF

  LOBYTE(v10) = 0; /*0x47a402*/
  v2 = (char)a2; /*0x47a406*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a40b*/
  v3 = hDevice; /*0x47a40d*/
  InBuffer[1] = &v9; /*0x47a426*/
  v9 = 2; /*0x47a437*/
  InBuffer[3] = 17421; /*0x47a43c*/
  InBuffer[0] = (char)a2; /*0x47a444*/
  InBuffer[2] = 2120; /*0x47a448*/
  v4 = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0); /*0x47a450*/
  v5 = v4; /*0x47a454*/
  if ( !v4 ) /*0x47a459*/
  {
    GetLastError(); /*0x47a51a*/
    Debug::Log(); /*0x47a526*/
    return 0; /*0x47a526*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a464*/
  {
    if ( InBuffer[3] == 176 || InBuffer[3] == 1 ) /*0x47a474*/
    {
      v5 = 1; /*0x47a47a*/
      goto LABEL_6; /*0x47a47a*/
    }
    return 0; /*0x47a537*/
  }
LABEL_6:
  Debug::Log(); /*0x47a47c*/
  v6 = v10; /*0x47a491*/
  if ( !(_BYTE)v10 ) /*0x47a49a*/
  {
    v6 = 1; /*0x47a49c*/
    LOBYTE(v10) = 1; /*0x47a49e*/
  }
  a2 = 0; /*0x47a4a4*/
  if ( v6 ) /*0x47a4ac*/
  {
    while ( 1 ) /*0x47a4c1*/
    {
      InBuffer[1] = &v9; /*0x47a4c1*/
      v9 = 1; /*0x47a4d2*/
      InBuffer[3] = 17421; /*0x47a4d7*/
      InBuffer[0] = v2; /*0x47a4df*/
      InBuffer[2] = 2120; /*0x47a4e3*/
      if ( !DeviceIoControl(v3, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0) ) /*0x47a4eb*/
        break; /*0x47a4eb*/
      if ( (InBuffer[6] & 1) != 0 ) /*0x47a4fb*/
        return 0; /*0x47a4fb*/
      v7 = a2 + 1 < (unsigned __int8)v10; /*0x47a50c*/
      v5 = 1; /*0x47a50e*/
      ++a2; /*0x47a510*/
      if ( !v7 ) /*0x47a514*/
        return v5; /*0x47a514*/
    }
    GetLastError(); /*0x47a53c*/
    Debug::Log(); /*0x47a548*/
    return 0; /*0x47a550*/
  }
  return v5; /*0x47a52e*/
}



// ==== 0x0047A560  sub_47A560  this=ObjectClass  sig=csp ====
bool __stdcall sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
  char v2; // bl
  _BYTE v4[2]; // [esp+Eh] [ebp-1Eh] BYREF
  _DWORD InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v2 = BytesReturned; /*0x47a564*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a583*/
  v4[1] = 0; /*0x47a58d*/
  CDROM::DeviceIoControl(hDevice, BytesReturned); /*0x47a591*/
  InBuffer[0] = v2; /*0x47a59d*/
  InBuffer[1] = v4; /*0x47a5ac*/
  v4[0] = 0; /*0x47a5bd*/
  InBuffer[3] = 17421; /*0x47a5c2*/
  InBuffer[2] = 2120; /*0x47a5ca*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a5d2*/
  {
    GetLastError(); /*0x47a5e6*/
    Debug::Log(); /*0x47a5f2*/
    return 0; /*0x47a5ff*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a607*/
}



// ==== 0x0047A620  sub_47A620  this=-  sig=csp ====
bool __stdcall sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
  _DWORD InBuffer[7]; // [esp+4h] [ebp-1Ch] BYREF

  memset(&InBuffer[1], 0, 0x18u); /*0x47a62f*/
  InBuffer[0] = (char)BytesReturned; /*0x47a645*/
  InBuffer[3] = 17421; /*0x47a656*/
  InBuffer[2] = 2121; /*0x47a65e*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a666*/
  {
    GetLastError(); /*0x47a678*/
    Debug::Log(); /*0x47a684*/
    return 0; /*0x47a691*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a699*/
}



// ==== 0x0047A6F0  CDROM::LockVolume  this=CDROM  sig=csp ====
int __stdcall CDROM::LockVolume(int a1, HANDLE hDevice, unsigned __int8 a3, DWORD BytesReturned, __int16 a5)
{
  unsigned __int16 v5; // ax
  int v6; // ebp
  char v7; // bl
  unsigned __int16 v8; // dx
  int result; // eax
  int v10; // [esp+10h] [ebp-20h]
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  LOBYTE(v5) = 0; /*0x47a6fc*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a706*/
  HIBYTE(v5) = BytesReturned; /*0x47a708*/
  v10 = 5; /*0x47a723*/
  v6 = a3 | v5; /*0x47a72b*/
  while ( 2 )
  {
    v7 = 0; /*0x47a72d*/
    do
    {
      LOBYTE(v8) = 0; /*0x47a738*/
      InBuffer[1] = a5; /*0x47a73d*/
      v7 = v7 != 0 ? 8 : 72;
      HIBYTE(v8) = v7; /*0x47a748*/
      InBuffer[2] = v8 | 0x4A; /*0x47a75a*/
      InBuffer[3] = 17421; /*0x47a76b*/
      InBuffer[0] = v6; /*0x47a773*/
      result = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0); /*0x47a777*/
      if ( result ) /*0x47a780*/
      {
        if ( (InBuffer[6] & 1) == 0 ) /*0x47a79f*/
        {
          LOBYTE(result) = 1; /*0x47a835*/
          return result; /*0x47a83b*/
        }
      }
      else
      {
        GetLastError(); /*0x47a784*/
        Debug::Log(); /*0x47a790*/
      }
    }
    while ( v7 != 8 );
    --v10; /*0x47a7b6*/
    Debug::Log(); /*0x47a812*/
    Sleep(0x3E8u); /*0x47a81f*/
    result = v10; /*0x47a825*/
    if ( v10 > 0 ) /*0x47a82b*/
      continue; /*0x47a82b*/
    break;
  }
  LOBYTE(result) = 0; /*0x47a841*/
  return result; /*0x47a832*/
}



// ==== 0x0047A920  DriveControlCD  this=-  sig=csp ====
int __stdcall DriveControlCD(int a1, HANDLE hDevice, DWORD BytesReturned)
{
  int v3; // ebp
  char v4; // bl
  int v5; // eax
  int result; // eax
  _DWORD InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v3 = (char)BytesReturned; /*0x47a92c*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a93b*/
  v4 = 0; /*0x47a943*/
  while ( 1 )
  {
    LOBYTE(v5) = 0; /*0x47a949*/
    v4 = v4 != 0 ? 8 : 72;
    BYTE1(v5) = v4; /*0x47a957*/
    v5 = (unsigned __int16)v5; /*0x47a95a*/
    LOBYTE(v5) = v5 | 0x6A; /*0x47a963*/
    InBuffer[2] = v5; /*0x47a967*/
    InBuffer[3] = 17421; /*0x47a976*/
    InBuffer[0] = v3; /*0x47a97e*/
    result = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0); /*0x47a982*/
    if ( result ) /*0x47a98b*/
      break; /*0x47a98b*/
    GetLastError(); /*0x47a98f*/
    result = Debug::Log(); /*0x47a99b*/
LABEL_5:
    LOBYTE(result) = 0; /*0x47a9ac*/
    if ( v4 == 8 ) /*0x47a9b1*/
      return result; /*0x47a9b1*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a9aa*/
    goto LABEL_5; /*0x47a9aa*/
  LOBYTE(result) = 1; /*0x47a9b5*/
  return result; /*0x47a9b7*/
}



// ==== 0x0047A9D0  BufferIOFile::Constructor  this=CDFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFile::Constructor(BufferIOFile *this, char *Source)
{
  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47a9d3*/
  LOBYTE(this->m_54) = 0; /*0x47a9df*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x47a9e9*/
  return this->__pad_0; /*0x47a9f0*/
}



// ==== 0x0047AA00  CDFileClass::method_47AA00  this=CDFileClass  sig=csp ====
_BYTE *__thiscall sub_47AA00(CDFileClass *this, char **a2)
{
  char *v3; // eax

  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa03*/
  *((_BYTE *)this + 84) = 0; /*0x47aa0c*/
  *(_DWORD *)this->BufferIOFileClass = &off_7E1668; /*0x47aa10*/
  v3 = String::GetOrEmpty_Alt((String *)a2); /*0x47aa16*/
  FileClass::OpenWithCDSearch(this, v3); /*0x47aa1e*/
  return this->BufferIOFileClass; /*0x47aa25*/
}



// ==== 0x0047AA30  BufferIOFile::Init  this=CDFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFile::Init(BufferIOFile *this)
{
  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa33*/
  LOBYTE(this->m_54) = 0; /*0x47aa38*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47aa3c*/
  return this->__pad_0; /*0x47aa44*/
}



// ==== 0x0047AA50  sub_47AA50  this=-  sig=ida-proto ====
int __fastcall sub_47AA50(char a1)
{
  HANDLE FirstFileA; // eax
  CHAR FileName[8]; // [esp+0h] [ebp-148h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-140h] BYREF

  strcpy(FileName, "?:\\*.*"); /*0x47aa65*/
  FileName[0] = a1 + 65; /*0x47aa6e*/
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47aa85*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x47aa8e*/
    return 0; /*0x47aa90*/
  FindClose(FirstFileA); /*0x47aa9a*/
  return 1; /*0x47aa92*/
}



// ==== 0x0047AAB0  CDFileClass::OpenFileBufferIO  this=CDFileClass  sig=csp ====
BOOL __thiscall FileClass::OpenFileBufferIO(CDFileClass *this, const CHAR *a2)
{
  return BufferIOFileClass::Open((BufferIOFileClass *)this, a2); /*0x47aaba*/
}



// ==== 0x0047AAC0  sub_47AAC0  this=-  sig=ida-proto ====
BOOL sub_47AAC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47aac1*/
  if ( CmdLine_NoCD ) /*0x47aac9*/
  {
    do /*0x47aaeb*/
    {
      v1 = (void **)*v0; /*0x47aacf*/
      if ( v0[1] ) /*0x47aacc*/
        free(v0[1]); /*0x47aad6*/
      __3_YAXPAX_Z(v0); /*0x47aadf*/
      v0 = v1; /*0x47aae7*/
    }
    while ( v1 ); /*0x47aaeb*/
  }
  CmdLine_NoCD = 0; /*0x47aaee*/
  return Game::FindGameDirectoryCD(byte_89E41C); /*0x47aafd*/
}



// ==== 0x0047AB10  Game::FindGameDirectoryCD  this=CellStruct  sig=csp ====
BOOL __thiscall CD_FindGameDirectory(char *Source)
{
  char v1; // bl
  char *v3; // ebp
  char *i; // edx
  char v5; // cl
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char Str1[260]; // [esp+8h] [ebp-104h] BYREF

  v1 = 0; /*0x47ab17*/
  if ( !Source ) /*0x47ab1b*/
    return 0; /*0x47ab26*/
  v3 = _strdup(Source); /*0x47ab30*/
  if ( v3 != byte_89E41C ) /*0x47ab3b*/
  {
    strcat(byte_89E41C, asc_81C8FC); /*0x47ab61*/
    strcat(byte_89E41C, v3); /*0x47ab89*/
  }
  for ( i = strtok(v3, asc_81C8FC); i; i = strtok(0, asc_81C8FC) ) /*0x47aba4*/
  {
    if ( strlen(i) ) /*0x47abac*/
    {
      strcpy(Str1, i); /*0x47abd6*/
      v5 = Str1[strlen(Str1) - 1]; /*0x47abed*/
      if ( v5 != 58 && v5 != 92 ) /*0x47abf9*/
        strcat(Str1, asc_815E74); /*0x47ac1e*/
      if ( !strncmp(Str1, Str2, 2u) ) /*0x47ac33*/
      {
        if ( !dword_89E414 ) /*0x47ac47*/
          continue; /*0x47ac47*/
        v1 = 1; /*0x47ac52*/
        if ( AlwaysFindYRCD(dword_89E414, 120) <= -1 ) /*0x47ac5c*/
          continue; /*0x47ac5c*/
        Str1[0] = dword_89E414 + 65; /*0x47ac6d*/
        v6 = __2_YAPAXI_Z(8u); /*0x47ac7a*/
        v6[1] = _strdup(Str1); /*0x47ac82*/
        *v6 = 0; /*0x47ac85*/
        v7 = CmdLine_NoCD; /*0x47ac8b*/
        if ( CmdLine_NoCD ) /*0x47ac96*/
        {
          v8 = *(_DWORD **)CmdLine_NoCD; /*0x47aca0*/
          if ( *(_DWORD *)CmdLine_NoCD ) /*0x47aca0*/
          {
            do /*0x47acac*/
            {
              v7 = v8; /*0x47aca6*/
              v8 = (_DWORD *)*v8; /*0x47aca8*/
            }
            while ( v8 ); /*0x47acac*/
          }
LABEL_24:
          *v7 = v6; /*0x47ad0c*/
          continue; /*0x47ad0c*/
        }
        CmdLine_NoCD = v6; /*0x47ac98*/
      }
      else
      {
        if ( Str1[0] - 65 <= 0 || AlwaysFindYRCD(Str1[0] - 65, 120) != 2 ) /*0x47acc9*/
          continue; /*0x47acc9*/
        v1 = 1; /*0x47accd*/
        v6 = __2_YAPAXI_Z(8u); /*0x47acd4*/
        v6[1] = _strdup(Str1); /*0x47ace0*/
        *v6 = 0; /*0x47ace3*/
        v7 = CmdLine_NoCD; /*0x47ace9*/
        if ( CmdLine_NoCD ) /*0x47acf4*/
        {
          v9 = *(_DWORD **)CmdLine_NoCD; /*0x47acfe*/
          if ( *(_DWORD *)CmdLine_NoCD ) /*0x47acfe*/
          {
            do /*0x47ad0a*/
            {
              v7 = v9; /*0x47ad04*/
              v9 = (_DWORD *)*v9; /*0x47ad06*/
            }
            while ( v9 ); /*0x47ad0a*/
          }
          goto LABEL_24; /*0x47ad0a*/
        }
        CmdLine_NoCD = v6; /*0x47acf6*/
      }
    }
  }
  free(v3); /*0x47ad27*/
  return v1 == 0; /*0x47ab1f*/
}



// ==== 0x0047ADA0  CD::SetCurrentInstance  this=CD  sig=csp ====
int __thiscall CD::SetCurrentInstance(CD *this)
{
  int result; // eax

  result = dword_89E414; /*0x47ada0*/
  dword_89E414 = (int)this; /*0x47ada5*/
  dword_89E418 = result; /*0x47adab*/
  return result; /*0x47adb0*/
}



// ==== 0x0047ADC0  sub_47ADC0  this=-  sig=ida-proto ====
void sub_47ADC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47adc1*/
  if ( CmdLine_NoCD ) /*0x47adc9*/
  {
    do /*0x47adeb*/
    {
      v1 = (void **)*v0; /*0x47adcf*/
      if ( v0[1] ) /*0x47adcc*/
        free(v0[1]); /*0x47add6*/
      __3_YAXPAX_Z(v0); /*0x47addf*/
      v0 = v1; /*0x47ade7*/
    }
    while ( v1 ); /*0x47adeb*/
    CmdLine_NoCD = 0; /*0x47aded*/
  }
  else
  {
    CmdLine_NoCD = 0; /*0x47adf6*/
  }
}



// ==== 0x0047AE10  CDFileClass::OpenWithCDSearch  this=CDFileClass  sig=csp ====
int __thiscall FileClass::OpenWithCDSearch(CDFileClass *this, char *Source)
{
  const char *v3; // ebp
  char v5[260]; // [esp+10h] [ebp-104h] BYREF

  CCFileClass::SetName((BufferIOFileClass *)this, Source); /*0x47ae21*/
  if ( *((_BYTE *)this + 84) || !CmdLine_NoCD || (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x47ae42*/
    return (*(int (__thiscall **)(CDFileClass *))(*(_DWORD *)this->BufferIOFileClass + 4))(this); /*0x47aef4*/
  v3 = (const char *)CmdLine_NoCD; /*0x47ae4f*/
  if ( CmdLine_NoCD ) /*0x47ae57*/
  {
    while ( 1 ) /*0x47ae78*/
    {
      strcpy(v5, *((const char **)v3 + 1)); /*0x47ae78*/
      strcat(v5, Source); /*0x47aea4*/
      CCFileClass::SetName((BufferIOFileClass *)this, v5); /*0x47aeb4*/
      if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x47aebd*/
        break; /*0x47aebd*/
      v3 = *(const char **)v3; /*0x47aec6*/
      if ( !v3 ) /*0x47aecb*/
        goto LABEL_7; /*0x47aecb*/
    }
  }
  else
  {
LABEL_7:
    CCFileClass::SetName((BufferIOFileClass *)this, Source); /*0x47aecd*/
  }
  return (*(int (__thiscall **)(CDFileClass *))(*(_DWORD *)this->BufferIOFileClass + 4))(this); /*0x47aee3*/
}



// ==== 0x0047AF10  CDFileClass::Reopen  this=CDFileClass  sig=csp ====
int __thiscall CCFileClass::Reopen(CDFileClass *this, char *Source, CHAR *a3)
{
  CCFileClass::Close((CCFileClass *)this); /*0x47af15*/
  if ( !Source ) /*0x47af20*/
    (*(void (__thiscall **)(CDFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 2, 0, 0); /*0x47af2a*/
  if ( *((_BYTE *)this + 84) || a3 == (CHAR *)2 ) /*0x47af3b*/
  {
    CCFileClass::SetName(this, Source); /*0x47af56*/
    return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x47af5e*/
  }
  else
  {
    (*(void (__thiscall **)(CDFileClass *, char *))(*(_DWORD *)&this->FileClass + 8))(this, Source); /*0x47af42*/
    return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x47af48*/
  }
}



// ==== 0x0047AF70  FileClass::FindFirstWithCD  this=MixFileClass  sig=csp ====
char __thiscall FileClass_FindFirstWithCD(char *this)
{
  HANDLE FirstFileA; // edx
  const char *v4; // ebx
  CHAR FileName[260]; // [esp+10h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+114h] [ebp-140h] BYREF

  if ( this ) /*0x47af7e*/
  {
    if ( hFindFile != (HANDLE)-1 ) /*0x47af8c*/
    {
      FindClose(hFindFile); /*0x47af8f*/
      hFindFile = (HANDLE)-1; /*0x47af95*/
    }
    strcpy(FileName, this); /*0x47afbd*/
    FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47afd5*/
    if ( FirstFileA != (HANDLE)-1 && (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x47afe7*/
    {
LABEL_6:
      strcpy(this, FindFileData.cFileName); /*0x47afe9*/
      hFindFile = FirstFileA; /*0x47b012*/
      return 1; /*0x47b01f*/
    }
    v4 = (const char *)CmdLine_NoCD; /*0x47b020*/
    if ( CmdLine_NoCD ) /*0x47b028*/
    {
      while ( 1 ) /*0x47b04d*/
      {
        strcpy(FileName, *((const char **)v4 + 1)); /*0x47b04d*/
        strcat(FileName, this); /*0x47b074*/
        FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47b090*/
        if ( FirstFileA != (HANDLE)-1 && (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x47b0a2*/
          break; /*0x47b0a2*/
        v4 = *(const char **)v4; /*0x47b0a8*/
        if ( !v4 ) /*0x47b0ac*/
          return 0; /*0x47b0ac*/
      }
      goto LABEL_6; /*0x47b0a2*/
    }
  }
  return 0; /*0x47b00f*/
}



// ==== 0x0047B0C0  FileFind::Next  this=AbstractClass  sig=csp ====
int __thiscall FileFind::Next(char *this)
{
  int result; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    result = (int)hFindFile; /*0x47b0cd*/
    if ( hFindFile != (HANDLE)-1 ) /*0x47b0d5*/
    {
      result = FindNextFileA(hFindFile, &FindFileData); /*0x47b0dd*/
      if ( result == 1 ) /*0x47b0e6*/
      {
        strcpy(this, FindFileData.cFileName); /*0x47b104*/
        return 1; /*0x47b116*/
      }
    }
    *this = 0; /*0x47b117*/
  }
  LOBYTE(result) = 0; /*0x47b11a*/
  return result; /*0x47b10f*/
}



// ==== 0x0047B130  FileFind::CloseHandle  this=FileFind  sig=ida-proto ====
HANDLE FileFind_CloseHandle()
{
  HANDLE result; // eax

  result = hFindFile; /*0x47b130*/
  if ( hFindFile != (HANDLE)-1 ) /*0x47b138*/
  {
    result = (HANDLE)FindClose(hFindFile); /*0x47b13b*/
    hFindFile = (HANDLE)-1; /*0x47b141*/
  }
  return result; /*0x47b14b*/
}



// ==== 0x0047B150  sub_47B150  this=-  sig=ida-proto ====
void sub_47B150()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47b15c*/
  dbl_89E750 = Math::Sqrt(v0 + v0); /*0x47b16e*/
}



// ==== 0x0047B180  sub_47B180  this=-  sig=ida-proto ====
void sub_47B180()
{
  dbl_89E7B8 = dbl_89E750 / 60.0; /*0x47b18c*/
}



// ==== 0x0047B1A0  sub_47B1A0  this=-  sig=ida-proto ====
void sub_47B1A0()
{
  dbl_89E7A0 = 1.0 / dbl_89E7B8; /*0x47b1ac*/
}



// ==== 0x0047B1C0  sub_47B1C0  this=-  sig=ida-proto ====
void sub_47B1C0()
{
  dbl_89E798 = 0.0174532925199433 * 45.0; /*0x47b1cc*/
}



// ==== 0x0047B1E0  sub_47B1E0  this=-  sig=ida-proto ====
void sub_47B1E0()
{
  dbl_89E758 = 0.0174532925199433 * 60.0; /*0x47b1ec*/
}



// ==== 0x0047B200  sub_47B200  this=-  sig=ida-proto ====
void sub_47B200()
{
  dbl_89E728 = 0.0174532925199433 * 90.0; /*0x47b20c*/
}



// ==== 0x0047B220  sub_47B220  this=-  sig=ida-proto ====
__int64 sub_47B220()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E728 - dbl_89E758); /*0x47b232*/
  result = Math::RoundToInt(v0 * dbl_89E750 * 0.5); /*0x47b246*/
  dword_89E7C0 = result; /*0x47b24b*/
  return result; /*0x47b250*/
}



// ==== 0x0047B260  sub_47B260  this=-  sig=ida-proto ====
void sub_47B260()
{
  dbl_89E768 = Math::ArcTan((double)dword_89E7C0 * 0.00390625); /*0x47b277*/
}



// ==== 0x0047B290  sub_47B290  this=-  sig=ida-proto ====
void sub_47B290()
{
  dbl_89E788 = Math::ArcTan((double)(2 * dword_89E7C0) / dbl_89E750); /*0x47b2b2*/
}



// ==== 0x0047B2C0  sub_47B2C0  this=-  sig=ida-proto ====
__int64 sub_47B2C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E7C0) + 0.5); /*0x47b2db*/
  dword_89E7B4 = result; /*0x47b2e0*/
  return result; /*0x47b2e6*/
}



// ==== 0x0047B2F0  sub_47B2F0  this=-  sig=ida-proto ====
int sub_47B2F0()
{
  dword_89E748 = 0; /*0x47b2f2*/
  return 0; /*0x47b2fe*/
}



// ==== 0x0047B300  sub_47B300  this=-  sig=ida-proto ====
int sub_47B300()
{
  dword_89E778 = 0; /*0x47b302*/
  dword_89E77C = 0; /*0x47b307*/
  dword_89E780 = 0; /*0x47b30c*/
  return 0; /*0x47b311*/
}



// ==== 0x0047B320  sub_47B320  this=-  sig=ida-proto ====
int sub_47B320()
{
  dword_89E7B0 = 0; /*0x47b325*/
  dword_89E7A8 = 128; /*0x47b32f*/
  dword_89E7AC = 128; /*0x47b334*/
  return 128; /*0x47b339*/
}



// ==== 0x0047B340  sub_47B340  this=-  sig=ida-proto ====
int sub_47B340()
{
  dword_89E730 = 0; /*0x47b342*/
  dword_89E734 = 0; /*0x47b347*/
  dword_89E738 = 0; /*0x47b34c*/
  dword_89E73C = 0; /*0x47b351*/
  return 0; /*0x47b356*/
}



// ==== 0x0047B3A0  Isometric::InitTables  this=IUnknown  sig=csp ====
__int64 __thiscall Isometric_InitTables(int this, _DWORD *a2)
{
  char v2; // al
  __int64 result; // rax
  int v5; // ecx
  double v6; // st7

  v2 = byte_89E770; /*0x47b3a9*/
  if ( (byte_89E770 & 1) == 0 ) /*0x47b3b3*/
  {
    v2 = byte_89E770 | 1; /*0x47b3bb*/
    byte_89E770 |= 1u; /*0x47b3bd*/
    dbl_89E720 = (double)dword_89E7C0; /*0x47b3c2*/
  }
  if ( (v2 & 2) == 0 ) /*0x47b3ca*/
  {
    v2 |= 2u; /*0x47b3d8*/
    byte_89E770 = v2; /*0x47b3da*/
    dbl_89E740 = dbl_89E720 * 0.00390625; /*0x47b3df*/
  }
  if ( (v2 & 4) == 0 ) /*0x47b3e7*/
  {
    byte_89E770 = v2 | 4; /*0x47b3f5*/
    *(double *)qword_81C918 = dbl_89E720; /*0x47b3ff*/
    qword_81C940 = *(_QWORD *)&dbl_89E720; /*0x47b40e*/
    qword_81C960 = *(_QWORD *)&dbl_89E720; /*0x47b41d*/
    qword_81C968 = *(_QWORD *)&dbl_89E720; /*0x47b433*/
    qword_81C988 = *(_QWORD *)&dbl_89E720; /*0x47b442*/
    qword_81C990 = *(_QWORD *)&dbl_89E720; /*0x47b451*/
    qword_81C9B8 = *(_QWORD *)&dbl_89E720; /*0x47b461*/
    qword_81C9E0 = *(_QWORD *)&dbl_89E720; /*0x47b470*/
    dbl_81C9B0 = -dbl_89E720; /*0x47b47a*/
    dword_81C920 = 0; /*0x47b482*/
    dword_81C924 = 0; /*0x47b48c*/
    dword_81C928 = 0; /*0x47b496*/
    dword_81C92C = 0; /*0x47b4a0*/
    dword_81C930 = 0; /*0x47b4aa*/
    dword_81C934 = 1072693248; /*0x47b4b4*/
    dword_81C938 = 0; /*0x47b4be*/
    dword_81C93C = 0; /*0x47b4c8*/
    dword_81C948 = 0; /*0x47b4d2*/
    dword_81C94C = 0; /*0x47b4dc*/
    dword_81C950 = 0; /*0x47b4e6*/
    dword_81C954 = -1074790400; /*0x47b4f0*/
    dword_81C958 = 0; /*0x47b4fa*/
    dword_81C95C = 0; /*0x47b504*/
    dword_81C970 = 0; /*0x47b50e*/
    dword_81C974 = 0; /*0x47b518*/
    dword_81C978 = 0; /*0x47b522*/
    dword_81C97C = 0; /*0x47b52c*/
    dword_81C980 = 0; /*0x47b536*/
    dword_81C984 = -1074790400; /*0x47b540*/
    dword_81C998 = 0; /*0x47b54a*/
    dword_81C99C = 0; /*0x47b554*/
    dword_81C9A0 = 0; /*0x47b55e*/
    dword_81C9A4 = 1072693248; /*0x47b568*/
    dword_81C9A8 = 0; /*0x47b572*/
    dword_81C9AC = 1072693248; /*0x47b57c*/
    dword_81C9C0 = 0; /*0x47b586*/
    dword_81C9C4 = 0; /*0x47b590*/
    dword_81C9C8 = 0; /*0x47b59a*/
    dword_81C9CC = -1074790400; /*0x47b5a4*/
    dword_81C9D0 = 0; /*0x47b5ae*/
    dword_81C9D4 = 1072693248; /*0x47b5b8*/
    dword_81C9D8 = 0; /*0x47b5c2*/
    dword_81C9DC = 0; /*0x47b5cc*/
    dword_81C9E8 = 0; /*0x47b5db*/
    dword_81C9EC = 0; /*0x47b5e5*/
    dword_81C9F0 = 0; /*0x47b5ef*/
    dword_81C9F4 = -1074790400; /*0x47b5f9*/
    dword_81C9F8 = 0; /*0x47b603*/
    dword_81C9FC = -1074790400; /*0x47b60d*/
    qword_81CA00 = *(_QWORD *)&dbl_89E720; /*0x47b617*/
    qword_81CA08 = *(_QWORD *)&dbl_89E720; /*0x47b627*/
    qword_81CA30 = *(_QWORD *)&dbl_89E720; /*0x47b63c*/
    qword_81CA58 = *(_QWORD *)&dbl_89E720; /*0x47b64b*/
    qword_81CA78 = *(_QWORD *)&dbl_89E720; /*0x47b65b*/
    qword_81CA80 = *(_QWORD *)&dbl_89E720; /*0x47b66a*/
    qword_81CAA8 = *(_QWORD *)&dbl_89E720; /*0x47b67b*/
    qword_81CAC8 = *(_QWORD *)&dbl_89E720; /*0x47b68b*/
    dbl_81CAA0 = dbl_89E720 + dbl_89E720; /*0x47b692*/
    dbl_81CAF8 = dbl_89E720 + dbl_89E720; /*0x47b698*/
    dword_81CA10 = 0; /*0x47b6a0*/
    dword_81CA14 = 0; /*0x47b6aa*/
    dword_81CA18 = 0; /*0x47b6b4*/
    dword_81CA1C = 1072693248; /*0x47b6be*/
    dword_81CA20 = 0; /*0x47b6c8*/
    dword_81CA24 = -1074790400; /*0x47b6d2*/
    dword_81CA28 = 0; /*0x47b6dc*/
    dword_81CA2C = 0; /*0x47b6e6*/
    dword_81CA38 = 0; /*0x47b6f0*/
    dword_81CA3C = 0; /*0x47b6fa*/
    dword_81CA40 = 0; /*0x47b704*/
    dword_81CA44 = 1072693248; /*0x47b70e*/
    dword_81CA48 = 0; /*0x47b718*/
    dword_81CA4C = 1072693248; /*0x47b722*/
    dword_81CA50 = 0; /*0x47b72c*/
    dword_81CA54 = 0; /*0x47b736*/
    dword_81CA60 = 0; /*0x47b740*/
    dword_81CA64 = 0; /*0x47b74a*/
    dword_81CA68 = 0; /*0x47b754*/
    dword_81CA6C = -1074790400; /*0x47b75e*/
    dword_81CA70 = 0; /*0x47b768*/
    dword_81CA74 = 1072693248; /*0x47b772*/
    dword_81CA88 = 0; /*0x47b77c*/
    dword_81CA8C = 0; /*0x47b786*/
    dword_81CA90 = 0; /*0x47b790*/
    dword_81CA94 = -1074790400; /*0x47b79a*/
    dword_81CA98 = 0; /*0x47b7a4*/
    dword_81CA9C = -1074790400; /*0x47b7ae*/
    dword_81CAB0 = 0; /*0x47b7b8*/
    dword_81CAB4 = 0; /*0x47b7c2*/
    dword_81CAB8 = 0; /*0x47b7cc*/
    dword_81CABC = 1072693248; /*0x47b7d6*/
    dword_81CAC0 = 0; /*0x47b7e0*/
    dword_81CAC4 = -1074790400; /*0x47b7ea*/
    qword_81CAD0 = *(_QWORD *)&dbl_89E720; /*0x47b7fa*/
    dword_81CAD8 = 0; /*0x47b805*/
    dword_81CADC = 0; /*0x47b80f*/
    dword_81CAE0 = 0; /*0x47b819*/
    dword_81CAE4 = 1072693248; /*0x47b823*/
    dword_81CAE8 = 0; /*0x47b82d*/
    dword_81CAEC = 1072693248; /*0x47b837*/
    dword_81CAF0 = 0; /*0x47b841*/
    dword_81CAF4 = 0; /*0x47b84b*/
    dword_81CB00 = 0; /*0x47b855*/
    dword_81CB04 = 0; /*0x47b85f*/
    dword_81CB08 = 0; /*0x47b869*/
    dbl_81CB20 = dbl_89E720 + dbl_89E720; /*0x47b873*/
    dbl_81CB40 = dbl_89E720 + dbl_89E720; /*0x47b879*/
    dbl_81CB48 = dbl_89E720 + dbl_89E720; /*0x47b87f*/
    dbl_81CB70 = dbl_89E720 + dbl_89E720; /*0x47b885*/
    qword_81CB18 = *(_QWORD *)&dbl_89E720; /*0x47b89b*/
    dbl_81CB98 = dbl_89E720 * 0.5; /*0x47b8ab*/
    dbl_81CBA0 = dbl_89E720 * 0.5; /*0x47b8b1*/
    dbl_81CBC0 = dbl_89E720 * 0.5; /*0x47b8b7*/
    qword_81CB68 = *(_QWORD *)&dbl_89E720; /*0x47b8c9*/
    qword_81CBB8 = *(_QWORD *)&dbl_89E720; /*0x47b8da*/
    dbl_81CBC8 = dbl_89E720 * -0.5; /*0x47b8e4*/
    qword_81CC08 = *(_QWORD *)&dbl_89E720; /*0x47b8f5*/
    dword_81CB0C = -1074790400; /*0x47b8ff*/
    dbl_81CBE8 = dbl_89E720 * 0.5; /*0x47b909*/
    dbl_81CBF0 = dbl_89E720 * 0.5; /*0x47b90f*/
    dbl_81CC10 = dbl_89E720 * 0.5; /*0x47b915*/
    dword_81CB10 = 0; /*0x47b91b*/
    dword_81CB14 = 1072693248; /*0x47b925*/
    dword_81CB28 = 0; /*0x47b92f*/
    dword_81CB2C = 0; /*0x47b939*/
    dword_81CB30 = 0; /*0x47b943*/
    dword_81CB34 = -1074790400; /*0x47b94d*/
    dword_81CB38 = 0; /*0x47b957*/
    dword_81CB3C = -1074790400; /*0x47b961*/
    dword_81CB50 = 0; /*0x47b96b*/
    dword_81CB54 = 0; /*0x47b975*/
    dword_81CB58 = 0; /*0x47b97f*/
    dword_81CB5C = 1072693248; /*0x47b989*/
    dword_81CB60 = 0; /*0x47b993*/
    dword_81CB64 = -1074790400; /*0x47b99d*/
    dword_81CB78 = 0; /*0x47b9a7*/
    dword_81CB7C = 0; /*0x47b9b1*/
    dword_81CB80 = 0; /*0x47b9bb*/
    dword_81CB84 = 0; /*0x47b9c5*/
    dword_81CB88 = 0; /*0x47b9cf*/
    dword_81CB8C = 0; /*0x47b9d9*/
    dword_81CB90 = 0; /*0x47b9e3*/
    dword_81CB94 = 0; /*0x47b9ed*/
    dword_81CBA8 = 0; /*0x47b9f7*/
    dword_81CBAC = 0; /*0x47ba01*/
    dword_81CBB0 = 0; /*0x47ba0b*/
    dword_81CBB4 = 0; /*0x47ba15*/
    dword_81CBD0 = 0; /*0x47ba1f*/
    dword_81CBD4 = 0; /*0x47ba29*/
    dword_81CBD8 = 0; /*0x47ba33*/
    dword_81CBDC = 0; /*0x47ba3d*/
    dword_81CBE0 = 0; /*0x47ba47*/
    dword_81CBE4 = 0; /*0x47ba51*/
    dword_81CBF8 = 0; /*0x47ba5b*/
    dword_81CBFC = 0; /*0x47ba65*/
    dword_81CC00 = 0; /*0x47ba6f*/
    dword_81CC04 = 0; /*0x47ba79*/
    *(double *)&qword_81CC18 = dbl_89E720 * -0.5; /*0x47ba89*/
  }
  result = Math::RoundToInt((double)(dword_89E7C0 * *(char *)(this + 283)) + 0.5); /*0x47bab0*/
  if ( *(_BYTE *)(this + 284) ) /*0x47bab5*/
  {
    v5 = 40 * (*(unsigned __int8 *)(this + 284) - 1); /*0x47baec*/
    v6 = (double)(unsigned __int8)a2[1] * *(double *)(v5 + 8505608) * dbl_89E740 /*0x47bb17*/
       + (double)(unsigned __int8)*a2 * *(double *)(v5 + 8505600) * dbl_89E740
       + *(double *)(v5 + 8505616)
       + *(double *)(v5 + 8505632);
    if ( v6 < 0.0 ) /*0x47bb28*/
      v6 = 0.0; /*0x47bb2c*/
    if ( v6 > *(double *)&qword_81C918[5 * *(unsigned __int8 *)(this + 284) - 5] ) /*0x47bb3d*/
      v6 = *(double *)&qword_81C918[5 * *(unsigned __int8 *)(this + 284) - 5]; /*0x47bb41*/
    return Math::RoundToInt(v6); /*0x47bb4d*/
  }
  return result; /*0x47bb54*/
}



// ==== 0x0047BB60  CellClass::DTOR  this=CellClass  sig=csp ====
void __thiscall CellClass::DTOR(CellClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***CellClass_field_FC)(_DWORD, int); // ecx
  int v4; // eax

  v2 = *(void (__thiscall ****)(_DWORD, int))this->__pad_28; /*0x47bb66*/
  this->mapCoords[0] = (int)&CellClass::`vftable'; /*0x47bb69*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bb71*/
  this->bridgeOwnerCell = (CellClass *)&CellClass::`vftable'; /*0x47bb78*/
  this->unknown30 = (int)&CellClass::`vftable'; /*0x47bb7f*/
  if ( v2 ) /*0x47bb86*/
  {
    (**v2)(v2, 1); /*0x47bb8c*/
    *(_DWORD *)this->__pad_28 = 0; /*0x47bb8e*/
  }
  CellClass_field_FC = (void (__thiscall ***)(_DWORD, int))this->CellClass_field_FC; /*0x47bb91*/
  if ( CellClass_field_FC ) /*0x47bb99*/
  {
    (**CellClass_field_FC)(CellClass_field_FC, 1); /*0x47bb9f*/
    this->CellClass_field_FC = 0; /*0x47bba1*/
  }
  this->firstObject = 0; /*0x47bba7*/
  if ( this->smudgeTypeIndex != dword_89E748 ) /*0x47bbb8*/
  {
    v4 = *(_DWORD *)&this->__pad_28[12]; /*0x47bbc7*/
    if ( v4 ) /*0x47bbcc*/
    {
      if ( byte_A8E9A0 ) /*0x47bbd4*/
        --*(_DWORD *)(v4 + 404); /*0x47bbd6*/
      *(_DWORD *)&this->__pad_28[12] = 0; /*0x47bbdc*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x47bbe1*/
}



// ==== 0x0047BBF0  CellClass::Construct  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::Construct(CellClass *this)
{
  unsigned int v2; // edx
  int v3; // ecx

  AbstractClass::Constructor((AbstractClass *)this); /*0x47bbf6*/
  this->smudgeTypeIndex = dword_89E748; /*0x47bc02*/
  *(_DWORD *)this->__pad_28 = 0; /*0x47bc05*/
  *(_DWORD *)&this->__pad_28[4] = 0; /*0x47bc08*/
  *(_DWORD *)&this->__pad_28[8] = 0; /*0x47bc0b*/
  *(_DWORD *)&this->__pad_28[12] = 0; /*0x47bc0e*/
  *(_DWORD *)&this->__pad_28[16] = 0xFFFF; /*0x47bc11*/
  *(_DWORD *)&this->__pad_28[20] = 0; /*0x47bc18*/
  *(_DWORD *)&this->__pad_28[24] = 0; /*0x47bc1e*/
  *(_DWORD *)&this->__pad_28[28] = -1; /*0x47bc21*/
  *(_DWORD *)&this->__pad_28[32] = -1; /*0x47bc24*/
  this->CellClass_field_4C = 0; /*0x47bc27*/
  this->wallOwnerIndex = -1; /*0x47bc2a*/
  this->infantryOwnerIndex = -1; /*0x47bc2d*/
  this->altInfantryOwnerIndex = -1; /*0x47bc30*/
  this->CellClass_field_5C = -1; /*0x47bc33*/
  this->unknown60 = -1; /*0x47bc39*/
  this->unknown64 = -1; /*0x47bc3e*/
  this->unknown68 = 0; /*0x47bc41*/
  *(_WORD *)this->tubeIndex = -1; /*0x47bc48*/
  this->CellClass_field_6C = 0; /*0x47bc4f*/
  v2 = this->copyFlags & 0xFFFFFFE0; /*0x47bc58*/
  this->unknown70 = 0; /*0x47bc5d*/
  this->copyFlags = v2; /*0x47bc60*/
  *(_WORD *)this->unknown108 = 0; /*0x47bc69*/
  this->unknown74 = 0; /*0x47bc70*/
  this->cloakedByHouses = 0; /*0x47bc73*/
  this->baseSpacerOfHouses = 0; /*0x47bc76*/
  this->jumpjet = 0; /*0x47bc7c*/
  this->firstObject = 0; /*0x47bc82*/
  this->altObject = 0; /*0x47bc88*/
  this->landType = 0; /*0x47bc93*/
  this->radLevel[0] = 0; /*0x47bc99*/
  *(_WORD *)this->CellClass_field_10A = 1000; /*0x47bc9f*/
  *(_WORD *)this->CellClass_field_10C = 1000; /*0x47bca6*/
  *(_WORD *)this->CellClass_field_10E = 1000; /*0x47bcad*/
  *(_WORD *)this->unknown110 = 1000; /*0x47bcb4*/
  *(_WORD *)this->unknown112 = 1000; /*0x47bcbb*/
  *(_WORD *)this->unknown114 = 1000; /*0x47bcc2*/
  v3 = this->flags[0]; /*0x47bcc9*/
  this->radLevel[1] = 0; /*0x47bccf*/
  this->radSite = 0; /*0x47bcd5*/
  this->CellClass_field_FC = 0; /*0x47bcdb*/
  this->occupyHeightsCoveringMe = 0; /*0x47bce7*/
  this->unknown104 = 0x10000; /*0x47bced*/
  this->unknown118 = -1; /*0x47bcf7*/
  this->unknown119 = 0; /*0x47bcfe*/
  this->height = 0; /*0x47bd04*/
  this->level = 0; /*0x47bd0a*/
  this->slopeIndex = 0; /*0x47bd10*/
  this->CellClass_field_11D = 0; /*0x47bd16*/
  this->powerup = 0; /*0x47bd1c*/
  this->CellClass_field_11F = 0; /*0x47bd22*/
  this->shroudedness = -2; /*0x47bd28*/
  this->foggedness = -2; /*0x47bd2e*/
  this->blockedNeighbours = 0; /*0x47bd34*/
  this->shroudCounter = 1; /*0x47bd3a*/
  this->gapsCoveringThisCell = 0; /*0x47bd44*/
  this->visibilityChanged = 0; /*0x47bd4a*/
  this->CellClass_field_13C = 0; /*0x47bd50*/
  this->flags[0] = v3 & 0xFF800000; /*0x47bd56*/
  this->mapCoords[0] = (int)&CellClass::`vftable'; /*0x47bd5c*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bd62*/
  this->bridgeOwnerCell = (CellClass *)&CellClass::`vftable'; /*0x47bd68*/
  this->unknown30 = (int)&CellClass::`vftable'; /*0x47bd79*/
  memset(this->sensorsOfHouses, 0, sizeof(this->sensorsOfHouses)); /*0x47bd80*/
  memset(this->disguiseAsType_sensors_of_houses, 0, sizeof(this->disguiseAsType_sensors_of_houses)); /*0x47bd8d*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->foggedObjects); /*0x47bd90*/
  LOBYTE(this->occupationFlags) = 0; /*0x47bd95*/
  LOBYTE(this->altOccupationFlags) = 0; /*0x47bd9b*/
  return this->mapCoords; /*0x47bda3*/
}



// ==== 0x0047BDB0  ObjectClass::GetBridgeCellColor  this=ObjectClass  sig=csp ====
int __thiscall GetBridgeCellColor(ObjectClass *this, _BYTE *a2, char a3)
{
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int RadarColor; // eax
  int v12; // esi
  BombClass *attachedBomb; // ecx
  BombClass *v14; // edx
  ObjectClass *v15; // edi
  int inited; // eax
  _DWORD *v17; // eax
  unsigned __int16 *_549E50; // eax
  _BYTE v19[28]; // [esp-1Ch] [ebp-34h] BYREF
  __int16 v20; // [esp+10h] [ebp-8h]
  unsigned __int8 v21; // [esp+12h] [ebp-6h]

  v19[24] = 0; /*0x47bdbb*/
  *(_DWORD *)&v19[20] = 6; /*0x47bdbf*/
  *a2 = 0; /*0x47bdc1*/
  v4 = PlacementList::FindByID((PlacementList *)this, *(int *)&v19[20], v19[24]); /*0x47bdc9*/
  if ( !a3 ) /*0x47bdd1*/
  {
    if ( v4 ) /*0x47bdd9*/
    {
      v5 = v4[328]; /*0x47bddf*/
      if ( !*(_BYTE *)(v5 + 3226) /*0x47be0f*/
        && !*(_BYTE *)(v5 + 5889)
        && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 104))(v4, 0, 0) != 5 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v4[135] + 90196)); /*0x47be23*/
        v7 = *(_DWORD *)(v6 + 788); /*0x47be26*/
        v8 = *(_DWORD *)(v6 + 780); /*0x47be2c*/
        if ( *(_DWORD *)(v8 + 4) == 1 ) /*0x47be36*/
          v9 = *(unsigned __int8 *)(*(_DWORD *)(v8 + 372) + v7); /*0x47be40*/
        else
          v9 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 372) + 2 * v7); /*0x47be4d*/
        if ( !v9 ) /*0x47be53*/
        {
          qmemcpy(v19, (const void *)(v4[328] + 36), 0x19u); /*0x47be6d*/
          Debug::Log(); /*0x47be70*/
        }
        return v9 | (v9 << 16); /*0x47be86*/
      }
    }
  }
  if ( (this->customSound_controller & 0x100) == 0 ) /*0x47be92*/
  {
    attachedBomb = this->attachedBomb; /*0x47bfa8*/
    v14 = (BombClass *)dword_AA10B0; /*0x47bfab*/
    if ( attachedBomb == (BombClass *)0xFFFF ) /*0x47bfbc*/
      v15 = *(ObjectClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x47bfc3*/
    else
      v15 = *(ObjectClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (_DWORD)attachedBomb); /*0x47bfbe*/
    inited = 0; /*0x47bfc6*/
    if ( attachedBomb == (BombClass *)0xFFFF ) /*0x47bfce*/
    {
      *(_DWORD *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c00d*/
    }
    else
    {
      if ( v15[4].ambientSoundController[1] <= 1 ) /*0x47bfd7*/
      {
LABEL_27:
        v17 = Map_Get(v15, inited); /*0x47c016*/
        _549E50 = (unsigned __int16 *)Map_Get_549E50((int)v17, *((unsigned __int8 *)this + 282), *((char *)this + 283)); /*0x47c031*/
        return _549E50[1] | (*_549E50 << 16); /*0x47c049*/
      }
      if ( (unsigned __int8)CellClass::GetTerrainFlag((CellClass *)v15, *((unsigned __int8 *)this + 282)) ) /*0x47bfe4*/
      {
        inited = (this->customSound_controller >> 13) & 1; /*0x47bff6*/
        goto LABEL_27; /*0x47bff9*/
      }
      v14 = this->attachedBomb; /*0x47c001*/
      *(_DWORD *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c004*/
    }
    inited = CellClass::InitRandomOffsets((int *)this, (int)v14, *(int *)&v19[24]); /*0x47c011*/
    goto LABEL_27; /*0x47c011*/
  }
  RadarColor = OverlayTypeClass::GetRadarColor( /*0x47bea8*/
                 *(OverlayTypeClass **)(*(_DWORD *)stru_A83D50.__pad_34 + 96),
                 (int)&a3,
                 0);
  v20 = *(_WORD *)RadarColor; /*0x47bebc*/
  v21 = *(_BYTE *)(RadarColor + 2); /*0x47beca*/
  v12 = (v21 >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf24*/
      | (HIBYTE(v20) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned __int8)v20 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( !v12 ) /*0x47bf26*/
  {
    v12 = (*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf86*/
        | ((unsigned __int8)HIBYTE(*(_WORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 694)) >> g_BitMask_Blue << g_BitMask_Green)
        | ((unsigned __int8)*(_WORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 694) >> g_BitShift_Green_0 << g_BitShift_Red);
    if ( !v12 ) /*0x47bf88*/
    {
      *(_DWORD *)&v19[24] = aWeJustGotABlac_0; /*0x47bf8a*/
      Debug::Log(); /*0x47bf8f*/
    }
  }
  return v12 | (v12 << 16); /*0x47be7f*/
}



// ==== 0x0047C060  ObjectClass::GetCellRadarColors  this=ObjectClass  sig=csp ====
char __thiscall GetCellRadarColors(int this, int a2, int a3)
{
  int RadarColor; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char **v13; // eax
  int inited; // eax
  _DWORD *v15; // edi
  _BYTE *v16; // ecx
  char v17; // dl
  char v18; // al
  _BYTE *v19; // eax
  int v21; // ecx
  unsigned int v22; // edx
  __int16 v24; // [esp+8h] [ebp-Ch] BYREF
  __int16 v25; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int8 v26; // [esp+Eh] [ebp-6h]
  __int16 v27; // [esp+18h] [ebp+4h]

  if ( PlacementList::FindByID((_DWORD *)this, 36, 0) ) /*0x47c06b*/
  {
    v24 = -14136; /*0x47c07a*/
    *(_WORD *)a2 = this; /*0x47c089*/
    *(_BYTE *)(a2 + 2) = -96; /*0x47c098*/
    *(_WORD *)a3 = -14136; /*0x47c0a0*/
    *(_BYTE *)(a3 + 2) = -96; /*0x47c0a5*/
    LOBYTE(RadarColor) = -96; /*0x47c087*/
    return RadarColor; /*0x47c0ab*/
  }
  if ( (*(_DWORD *)(this + 320) & 0x100) != 0 ) /*0x47c0b7*/
  {
    RadarColor = OverlayTypeClass::GetRadarColor((int *)dword_A83D84->?, (int)&v24, 0); /*0x47c0c9*/
    v5 = a2; /*0x47c0ce*/
    v6 = RadarColor; /*0x47c0d2*/
LABEL_18:
    *(_WORD *)v5 = *(_WORD *)v6; /*0x47c18f*/
    *(_BYTE *)(v5 + 2) = *(_BYTE *)(v6 + 2); /*0x47c19a*/
    *(_WORD *)a3 = *(_WORD *)RadarColor; /*0x47c1a4*/
    LOBYTE(RadarColor) = *(_BYTE *)(RadarColor + 2); /*0x47c1a7*/
    *(_BYTE *)(a3 + 2) = RadarColor; /*0x47c1aa*/
    return RadarColor; /*0x47c1b0*/
  }
  v7 = *(_DWORD *)(this + 56); /*0x47c0d9*/
  if ( v7 == 0xFFFF ) /*0x47c0e1*/
    v8 = (int *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x47c0f9*/
  else
    v8 = (int *)*((_DWORD *)dword_A8ED2C + v7); /*0x47c0e9*/
  v9 = *(_DWORD *)(this + 68); /*0x47c0fc*/
  if ( v9 != -1 && v9 != 239 ) /*0x47c136*/
  {
    v10 = *((_DWORD *)&dword_A83D84->TechnoTypeClass + v9); /*0x47c143*/
    if ( !*(_BYTE *)(v10 + 681) ) /*0x47c146*/
    {
      if ( (v9 < 74 || v9 > 99) && (v9 < 205 || v9 > 230) ) /*0x47c167*/
        v11 = OverlayTypeClass::GetRadarColor( /*0x47c182*/
                *((int **)&dword_A83D84->TechnoTypeClass + v9),
                (int)&v24,
                *(unsigned __int8 *)(this + 286));
      else
        v11 = OverlayTypeClass::GetRadarColor(*((int **)&dword_A83D84->TechnoTypeClass + v9), (int)&v24, 1u); /*0x47c16f*/
      v6 = v11; /*0x47c187*/
      RadarColor = a2; /*0x47c189*/
      v5 = a2; /*0x47c18d*/
      goto LABEL_18; /*0x47c18d*/
    }
    v12 = *(_DWORD *)(v10 + 668); /*0x47c1b3*/
    if ( v12 ) /*0x47c1bb*/
    {
      v13 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 156))(v12); /*0x47c1bf*/
      RadarColor = MixFileClass::GetPixelData(v13, (int)&v24, *(unsigned __int8 *)(this + 286)); /*0x47c1d5*/
      *(_WORD *)a2 = *(_WORD *)RadarColor; /*0x47c1e4*/
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(RadarColor + 2); /*0x47c1eb*/
      *(_WORD *)a3 = *(_WORD *)RadarColor; /*0x47c1f5*/
      LOBYTE(RadarColor) = *(_BYTE *)(RadarColor + 2); /*0x47c1f8*/
      *(_BYTE *)(a3 + 2) = RadarColor; /*0x47c1fb*/
      return RadarColor; /*0x47c201*/
    }
    if ( FindBuildingByTiberiumType(v9) != -1 ) /*0x47c20e*/
    {
      v24 = -21846; /*0x47c216*/
      *(_WORD *)a2 = this; /*0x47c225*/
      *(_BYTE *)(a2 + 2) = -126; /*0x47c234*/
      *(_WORD *)a3 = -21846; /*0x47c23c*/
      *(_BYTE *)(a3 + 2) = -126; /*0x47c241*/
      LOBYTE(RadarColor) = -126; /*0x47c223*/
      return RadarColor; /*0x47c247*/
    }
  }
  inited = 0; /*0x47c24d*/
  if ( *(_DWORD *)(this + 56) == 0xFFFF ) /*0x47c255*/
  {
    inited = CellClass::InitRandomOffsets((int *)this, dword_AA10B0, v8[188]); /*0x47c29d*/
  }
  else if ( v8[188] > 1 ) /*0x47c25e*/
  {
    LOBYTE(inited) = *(_BYTE *)(this + 282); /*0x47c260*/
    if ( (unsigned __int8)CellClass::GetTerrainFlag(v8, inited) ) /*0x47c269*/
      inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x47c27b*/
    else
      inited = CellClass::InitRandomOffsets((int *)this, *(_DWORD *)(this + 56), v8[188]); /*0x47c28b*/
  }
  v15 = Map_Get(v8, inited); /*0x47c2aa*/
  if ( !v15[41] && *((_BYTE *)v15 + 756) ) /*0x47c2b6*/
    CellClass::EnsureFileLoaded((int)v15); /*0x47c2c2*/
  v16 = *(_BYTE **)(v15[41] + 4 * *(unsigned __int8 *)(this + 282) + 16); /*0x47c2d5*/
  if ( v16 ) /*0x47c2df*/
  {
    v17 = v16[44]; /*0x47c2ea*/
    v18 = v16[43]; /*0x47c2ed*/
    v26 = v16[45]; /*0x47c2f0*/
    LOBYTE(v25) = v18; /*0x47c2fa*/
    HIBYTE(v25) = v17; /*0x47c2fe*/
    v19 = Color::ScaleRGB(&v24, (unsigned __int8 *)&v25, dword_7E1BD0[28 * *((_DWORD *)dword_A8B230 + 1174)]); /*0x47c324*/
    v25 = *(_WORD *)v19; /*0x47c330*/
    v26 = v19[2]; /*0x47c338*/
    RadarColor = (unsigned __int8)v25 >> 1; /*0x47c353*/
    v21 = HIBYTE(v25) >> 1; /*0x47c355*/
    LOBYTE(v24) = (unsigned __int8)v25 >> 1; /*0x47c357*/
    HIBYTE(v24) = HIBYTE(v25) >> 1; /*0x47c35b*/
    v22 = v26; /*0x47c364*/
    *(_WORD *)a2 = v24; /*0x47c36a*/
    HIBYTE(v27) = v21; /*0x47c36d*/
    LOBYTE(v27) = RadarColor; /*0x47c375*/
    v22 >>= 1; /*0x47c37f*/
    *(_BYTE *)(a2 + 2) = v22; /*0x47c381*/
    *(_WORD *)a3 = v27; /*0x47c384*/
    *(_BYTE *)(a3 + 2) = v22; /*0x47c388*/
  }
  else
  {
    *(_WORD *)a2 = 15420; /*0x47c3a8*/
    *(_BYTE *)(a2 + 2) = 60; /*0x47c3b5*/
    *(_WORD *)a3 = 15420; /*0x47c3bd*/
    *(_BYTE *)(a3 + 2) = 60; /*0x47c3c0*/
    LOBYTE(RadarColor) = 60; /*0x47c395*/
  }
  return RadarColor; /*0x47c082*/
}



// ==== 0x0047C3D0  Object::FindClosestObjectCell  this=Object  sig=csp ====
int __thiscall Object::FindClosestObjectCell(Object *this, _DWORD *a2, char a3, int a4)
{
  double v4; // st7
  int v5; // edi
  int v6; // ebx
  _BYTE *Object_field_0xE8; // ecx
  _BYTE *v8; // esi
  _DWORD *v9; // eax
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  _BYTE v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v5 = 7 * *a2; /*0x47c3f2*/
  v6 = 7 * a2[1]; /*0x47c3fe*/
  if ( a3 ) /*0x47c405*/
    Object_field_0xE8 = this->Object_field_0xE8; /*0x47c407*/
  else
    Object_field_0xE8 = this->Object_field_0xE4; /*0x47c40f*/
  if ( !Object_field_0xE8 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v8 = Object_field_0xE8; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (v8[20] & 1) != 0 && v8 != (_BYTE *)a4 ) /*0x47c435*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v16); /*0x47c440*/
      v14 = (unsigned __int8)*v9 - v5; /*0x47c45a*/
      v15 = (unsigned __int8)v9[1] - v6; /*0x47c463*/
      v17 = v9[2]; /*0x47c467*/
      Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      LOWORD(v10) = Math::RoundToInt(v4); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = (int)v8; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v8 = (_BYTE *)*((_DWORD *)v8 + 12); /*0x47c4a7*/
  }
  while ( v8 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}



// ==== 0x0047C4D0  PlacementList::FindByID  this=PlacementList  sig=csp ====
_DWORD *__thiscall PlacementList::FindByID(PlacementList *this, int a2, char a3)
{
  _DWORD *v3; // esi

  if ( !byte_A8E9A0 ) /*0x47c4d9*/
    return 0; /*0x47c4d9*/
  v3 = (_DWORD *)(a3 ? *((_DWORD *)this + 58) : *((_DWORD *)this + 57));
  if ( !v3 ) /*0x47c4f3*/
    return 0; /*0x47c50b*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != a2 ) /*0x47c502*/
  {
    v3 = (_DWORD *)v3[12]; /*0x47c504*/
    if ( !v3 ) /*0x47c509*/
      return 0; /*0x47c509*/
  }
  return v3; /*0x47c50b*/
}



// ==== 0x0047C520  Cell::IsBridge  this=Cell  sig=csp ====
_DWORD *__thiscall Cell::IsBridge(Cell *this)
{
  _DWORD *Cell_field_0xE4; // esi

  if ( !byte_A8E9A0 ) /*0x47c528*/
    return 0; /*0x47c528*/
  Cell_field_0xE4 = this->Cell_field_0xE4; /*0x47c52a*/
  if ( !Cell_field_0xE4 ) /*0x47c532*/
    return 0; /*0x47c547*/
  while ( (*(int (__thiscall **)(_DWORD *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4) != 6 ) /*0x47c53e*/
  {
    Cell_field_0xE4 = (_DWORD *)Cell_field_0xE4[12]; /*0x47c540*/
    if ( !Cell_field_0xE4 ) /*0x47c545*/
      return 0; /*0x47c545*/
  }
  return Cell_field_0xE4; /*0x47c549*/
}



// ==== 0x0047C550  CellClass::FindInfantry  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::FindInfantry(CellClass *this, char a2)
{
  ObjectClass *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47c558*/
    return 0; /*0x47c558*/
  v2 = a2 ? this->altObject : this->firstObject;
  if ( !v2 ) /*0x47c572*/
    return 0; /*0x47c587*/
  while ( (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 11))(v2) != 36 ) /*0x47c57e*/
  {
    v2 = v2->nextObject; /*0x47c580*/
    if ( !v2 ) /*0x47c585*/
      return 0; /*0x47c585*/
  }
  return &v2->AbstractClass; /*0x47c589*/
}



// ==== 0x0047C5A0  Object::FindObjectCell  this=Object  sig=csp ====
int __thiscall Object::FindObjectCell(Object *this, _DWORD *a2, char a3)
{
  _DWORD *Object_field_0xE4; // esi
  int result; // eax

  if ( byte_A8E9A0 ) /*0x47c5ab*/
  {
    Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ad*/
    if ( Object_field_0xE4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 2 ) /*0x47c5c1*/
      {
        Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c5c3*/
        if ( !Object_field_0xE4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)Object_field_0xE4; /*0x47c5c1*/
    }
  }
LABEL_5:
  result = Object::FindClosestObjectCell(this, a2, a3, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( byte_A8E9A0 ) /*0x47c5e8*/
    {
      Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ea*/
      if ( Object_field_0xE4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 36 ) /*0x47c5fe*/
        {
          Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c600*/
          if ( !Object_field_0xE4 ) /*0x47c605*/
            return 0; /*0x47c605*/
        }
        return (int)Object_field_0xE4; /*0x47c612*/
      }
    }
    return 0; /*0x47c607*/
  }
  return result; /*0x47c609*/
}



// ==== 0x0047C620  CellClass::IsPassable  this=IUnknown  sig=csp ====
int __thiscall CellClass::IsPassable(int *this, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  char v15; // fps^1
  double v16; // st7
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  int v20; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  result = dword_A8E7AC; /*0x47c620*/
  if ( dword_A8E7AC ) /*0x47c632*/
    goto LABEL_96; /*0x47c632*/
  if ( a3 ) /*0x47c63e*/
  {
    if ( *(_BYTE *)(a3 + 5823) ) /*0x47c640*/
    {
      if ( byte_A8E9A0 ) /*0x47c655*/
      {
        for ( i = (_DWORD *)this->q0E4; i; i = (_DWORD *)i[12] ) /*0x47c65f*/
        {
          result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x47c665*/
          if ( result == 6 ) /*0x47c66b*/
            goto LABEL_17; /*0x47c66b*/
        }
        if ( byte_A8E9A0 ) /*0x47c681*/
        {
          v7 = (_DWORD *)this->q0E4; /*0x47c683*/
          if ( v7 ) /*0x47c68b*/
          {
            while ( 1 ) /*0x47c691*/
            {
              result = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7); /*0x47c691*/
              if ( result == 36 ) /*0x47c697*/
                goto LABEL_17; /*0x47c697*/
              v7 = (_DWORD *)v7[12]; /*0x47c699*/
              if ( !v7 ) /*0x47c69e*/
                goto LABEL_14; /*0x47c69e*/
            }
          }
        }
      }
      goto LABEL_14; /*0x47c68b*/
    }
    if ( *(_BYTE *)(a3 + 5822) || *(_BYTE *)(a3 + 5815) ) /*0x47c6eb*/
    {
      v20 = 0; /*0x47c7cd*/
      v21 = 0; /*0x47c7d3*/
      if ( byte_A8E9A0 && (v11 = (_DWORD *)this->q0E4) != 0 ) /*0x47c7e1*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) != 2 ) /*0x47c7ed*/
        {
          v11 = (_DWORD *)v11[12]; /*0x47c7ef*/
          if ( !v11 ) /*0x47c7f4*/
            goto LABEL_44; /*0x47c7f4*/
        }
      }
      else
      {
LABEL_44:
        result = Object::FindClosestObjectCell((Object *)this, &v20, 0, 0); /*0x47c7fc*/
        if ( !result ) /*0x47c80c*/
          result = (int)PlacementList::FindByID((PlacementList *)this, 36, 0); /*0x47c813*/
        v11 = (_DWORD *)result; /*0x47c818*/
        if ( !result ) /*0x47c81c*/
          goto LABEL_52; /*0x47c81c*/
      }
      result = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x47c822*/
      if ( result != 6 ) /*0x47c828*/
      {
        LOBYTE(result) = 0; /*0x47c82d*/
        return result; /*0x47c833*/
      }
      result = v11[328]; /*0x47c836*/
      if ( *(_BYTE *)(result + 5823) ) /*0x47c83c*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*v11 + 60))(v11); /*0x47c84a*/
        if ( result == a4 ) /*0x47c851*/
        {
LABEL_52:
          if ( (*(_BYTE *)(this + 73) & 0x3F) == 0 ) /*0x47c866*/
            goto LABEL_14; /*0x47c866*/
          goto LABEL_53; /*0x47c866*/
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(a3 + 3672) ) /*0x47c6f9*/
      {
        v9 = this->u32_38; /*0x47c76b*/
        if ( v9 < 0 /*0x47c783*/
          || v9 >= *(int *)&stru_A8EB00.?[340]
          || (result = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9), *(_BYTE *)(result + 736)) )
        {
          if ( byte_A8E9A0 ) /*0x47c798*/
          {
            v10 = (_DWORD *)this->q0E4; /*0x47c79e*/
            if ( v10 ) /*0x47c7a6*/
            {
              while ( 1 ) /*0x47c7b0*/
              {
                result = (*(int (__thiscall **)(_DWORD *))(*v10 + 44))(v10); /*0x47c7b0*/
                if ( result == 6 ) /*0x47c7b6*/
                  goto LABEL_17; /*0x47c7b6*/
                v10 = (_DWORD *)v10[12]; /*0x47c7bc*/
                if ( !v10 ) /*0x47c7c1*/
                  goto LABEL_14; /*0x47c7c1*/
              }
            }
          }
          goto LABEL_14; /*0x47c7a6*/
        }
LABEL_53:
        LOBYTE(result) = 0; /*0x47c86c*/
        return result; /*0x47c875*/
      }
      v20 = 0; /*0x47c706*/
      v21 = 0; /*0x47c70c*/
      if ( byte_A8E9A0 ) /*0x47c710*/
      {
        v8 = (_DWORD *)this->q0E4; /*0x47c712*/
        if ( v8 ) /*0x47c71a*/
        {
          while ( (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) != 2 ) /*0x47c726*/
          {
            v8 = (_DWORD *)v8[12]; /*0x47c728*/
            if ( !v8 ) /*0x47c72d*/
              goto LABEL_25; /*0x47c72d*/
          }
          result = (int)v8; /*0x47c767*/
LABEL_27:
          if ( result ) /*0x47c751*/
          {
            LOBYTE(result) = 0; /*0x47c75a*/
            return result; /*0x47c760*/
          }
          goto LABEL_52; /*0x47c751*/
        }
      }
LABEL_25:
      result = Object::FindClosestObjectCell((Object *)this, &v20, 0, 0); /*0x47c72f*/
      if ( !result ) /*0x47c73f*/
      {
        result = (int)PlacementList::FindByID((PlacementList *)this, 36, 0); /*0x47c74a*/
        goto LABEL_27; /*0x47c74a*/
      }
    }
    LOBYTE(result) = 0; /*0x47c856*/
    return result; /*0x47c85c*/
  }
LABEL_14:
  if ( !stru_A8EB00.?[391] ) /*0x47c6a7*/
  {
    result = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)this, 1); /*0x47c880*/
    if ( !(_BYTE)result ) /*0x47c887*/
      goto LABEL_17; /*0x47c887*/
LABEL_55:
    v12 = this->u8_11; /*0x47c88d*/
    if ( v12 == -1 ) /*0x47c893*/
    {
LABEL_86:
      if ( a2 == -1 ) /*0x47c9d4*/
      {
        result = this->q050; /*0x47c9d6*/
        if ( (result & 0x100) == 0 && (result & 0x400) == 0 && !this->u8_11C ) /*0x47c9f3*/
        {
          if ( !*(_BYTE *)(a3 + 3278) ) /*0x47ca0d*/
          {
            result = this->q03B; /*0x47ca33*/
            LOBYTE(result) = byte_89EA60[36 * result]; /*0x47ca40*/
            return result; /*0x47ca4a*/
          }
          result = this->u32_38; /*0x47ca0f*/
          if ( result >= g_CellPassabilityLUT ) /*0x47ca1a*/
          {
            if ( result >= g_CellPassabilityLUT + 14 ) /*0x47ca25*/
            {
              LOBYTE(result) = 0; /*0x47ca2a*/
              return result; /*0x47ca30*/
            }
            goto LABEL_96; /*0x47ca25*/
          }
        }
        goto LABEL_17; /*0x47ca1a*/
      }
      result = a2 + 8 * this->q03B + this->q03B; /*0x47ca56*/
      v16 = flt_89EA40[result]; /*0x47ca58*/
      v17 = v16 < 0.0; /*0x47ca5f*/
      v18 = 0; /*0x47ca5f*/
      v19 = v16 == 0.0; /*0x47ca5f*/
      BYTE1(result) = v15; /*0x47ca65*/
      if ( v16 == 0.0 ) /*0x47ca6a*/
        goto LABEL_17; /*0x47ca6a*/
LABEL_96:
      LOBYTE(result) = 1; /*0x47ca70*/
      return result; /*0x47ca73*/
    }
    v13 = this->u32_14; /*0x47c899*/
    v14 = 0; /*0x47c89c*/
    if ( v13 >= 0 ) /*0x47c8a0*/
      v14 = *((_DWORD *)stru_A80220.? + v13); /*0x47c8a8*/
    if ( v12 == 2 || !v12 ) /*0x47c8b8*/
    {
      if ( a3 ) /*0x47c8c0*/
      {
        if ( (result = *(_DWORD *)(a3 + 3668)) != 0 /*0x47c8f7*/
          && *(_DWORD *)(result + 660) == v12
          && this->u8_11E >= 0x10u
          || (result = a3, a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172))
          || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2156)
          || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2160) )
        {
          if ( v14 == a4 ) /*0x47c8fd*/
            goto LABEL_96; /*0x47c8fd*/
        }
      }
    }
    if ( v12 == 26 ) /*0x47c906*/
    {
      result = a3; /*0x47c908*/
      if ( !a3 ) /*0x47c90e*/
      {
LABEL_84:
        if ( !stru_A8EB00.?[391] ) /*0x47c9ae*/
          goto LABEL_17; /*0x47c9ae*/
        result = *(_DWORD *)stru_A83D50.__pad_34; /*0x47c9b7*/
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * this->u8_11) + 680) ) /*0x47c9bf*/
          goto LABEL_17; /*0x47c9c7*/
        goto LABEL_86; /*0x47c9c7*/
      }
      result = *(_DWORD *)(a3 + 3668); /*0x47c914*/
      if ( result && *(_DWORD *)(result + 660) == 26 && this->u8_11E >= 0x10u /*0x47c943*/
        || (result = a3, a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2164))
        || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2168) )
      {
        if ( v14 == a4 ) /*0x47c949*/
          goto LABEL_96; /*0x47c949*/
      }
    }
    result = a3; /*0x47c94f*/
    if ( a3 ) /*0x47c955*/
    {
      if ( *(_BYTE *)(a3 + 5823) ) /*0x47c957*/
      {
        if ( v12 == 126 || (result = FindBuildingByTiberiumType(v12), result != -1) ) /*0x47c96e*/
        {
          result = this->q050; /*0x47c970*/
          if ( (result & 0x100) == 0 && (result & 0x400) == 0 ) /*0x47c987*/
          {
            if ( this->u8_11C ) /*0x47c98d*/
            {
              LOBYTE(result) = 0; /*0x47c99e*/
              return result; /*0x47c9a4*/
            }
            goto LABEL_96; /*0x47c995*/
          }
LABEL_17:
          LOBYTE(result) = 0; /*0x47c6d1*/
          return result; /*0x47c6da*/
        }
      }
    }
    goto LABEL_84; /*0x47c96e*/
  }
  result = LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 18); /*0x47c6b6*/
  if ( (_BYTE)result ) /*0x47c6bd*/
    goto LABEL_55; /*0x47c6bd*/
  return result; /*0x47c6c3*/
}



// ==== 0x0047CA80  CellClass::DetermineTileType  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::DetermineTileType(CellClass *this)
{
  int v2; // edx
  int v3; // ebp
  unsigned int v4; // edi
  int i; // ebx
  _DWORD *mapCoords; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ebp
  unsigned int v11; // edi
  int j; // ebx
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ebp
  unsigned int v19; // edi
  int k; // ebx
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  unsigned int v27; // edi
  int m; // ebx
  _DWORD *v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebx
  CellClass *v45; // edi
  int v47; // [esp+10h] [ebp-68h]
  int v48; // [esp+14h] [ebp-64h]
  int v49; // [esp+18h] [ebp-60h]
  int v50; // [esp+1Ch] [ebp-5Ch]
  int v51; // [esp+20h] [ebp-58h]
  int v52; // [esp+24h] [ebp-54h]
  int v53; // [esp+28h] [ebp-50h]
  int v54; // [esp+2Ch] [ebp-4Ch]
  int v55; // [esp+30h] [ebp-48h]
  int v56; // [esp+30h] [ebp-48h]
  int v57; // [esp+30h] [ebp-48h]
  int v58; // [esp+34h] [ebp-44h]
  int v59; // [esp+38h] [ebp-40h]
  int v60; // [esp+38h] [ebp-40h]
  int v61; // [esp+3Ch] [ebp-3Ch]
  int v62; // [esp+40h] [ebp-38h]
  int v63; // [esp+44h] [ebp-34h]
  int v64; // [esp+48h] [ebp-30h]
  int v65; // [esp+4Ch] [ebp-2Ch]
  int v66; // [esp+4Ch] [ebp-2Ch]
  int v67; // [esp+4Ch] [ebp-2Ch]
  int v68; // [esp+4Ch] [ebp-2Ch]
  int v69; // [esp+4Ch] [ebp-2Ch]
  int v70; // [esp+4Ch] [ebp-2Ch]
  int v71; // [esp+4Ch] [ebp-2Ch]
  int v72; // [esp+4Ch] [ebp-2Ch]
  int v73; // [esp+50h] [ebp-28h]
  int smudgeTypeIndex; // [esp+54h] [ebp-24h] BYREF
  __int16 v75[2]; // [esp+58h] [ebp-20h] BYREF
  int v76; // [esp+5Ch] [ebp-1Ch]
  __int16 v77[2]; // [esp+60h] [ebp-18h] BYREF
  int v78; // [esp+64h] [ebp-14h]
  int v79; // [esp+68h] [ebp-10h]
  __int16 v80[2]; // [esp+6Ch] [ebp-Ch] BYREF
  int v81; // [esp+70h] [ebp-8h]
  int v82; // [esp+74h] [ebp-4h] BYREF

  *(_DWORD *)v77 = dword_AA1090; /*0x47ca96*/
  v59 = dword_AA1090 + 1; /*0x47ca9a*/
  if ( dword_AA1090 == -1 ) /*0x47ca9e*/
    v59 = -1; /*0x47caa0*/
  v76 = dword_ABAD28; /*0x47caab*/
  v58 = dword_ABAD28 + 41; /*0x47cab2*/
  if ( dword_ABAD28 == -1 ) /*0x47cab6*/
    v58 = -1; /*0x47cab8*/
  v55 = dword_AA1134; /*0x47cac4*/
  v49 = dword_AA1134 + 15; /*0x47cacb*/
  if ( dword_AA1134 == -1 ) /*0x47cacf*/
    v49 = -1; /*0x47cad1*/
  v47 = dword_AA0E24; /*0x47cadc*/
  v50 = dword_AA0E24 + 15; /*0x47cae3*/
  if ( dword_AA0E24 == -1 ) /*0x47cae7*/
    v50 = -1; /*0x47cae9*/
  v52 = dword_AA0748; /*0x47caf4*/
  v51 = dword_AA0748 + 15; /*0x47cafb*/
  if ( dword_AA0748 == -1 ) /*0x47caff*/
    v51 = -1; /*0x47cb01*/
  v54 = dword_AA10A8; /*0x47cb0c*/
  v53 = dword_AA10A8 + 15; /*0x47cb13*/
  if ( dword_AA10A8 == -1 ) /*0x47cb17*/
    v53 = -1; /*0x47cb19*/
  v78 = dword_AA10A4; /*0x47cb29*/
  v61 = dword_AA10A4 + 13; /*0x47cb2d*/
  if ( dword_AA10A4 == -1 ) /*0x47cb31*/
    v61 = -1; /*0x47cb33*/
  *(_DWORD *)v80 = g_CellTileTypeCache; /*0x47cb43*/
  v63 = g_CellTileTypeCache + 20; /*0x47cb47*/
  if ( g_CellTileTypeCache == -1 ) /*0x47cb4b*/
    v63 = -1; /*0x47cb4d*/
  v79 = dword_AA0E20; /*0x47cb5d*/
  v62 = dword_AA0E20 + 13; /*0x47cb61*/
  if ( dword_AA0E20 == -1 ) /*0x47cb65*/
    v62 = -1; /*0x47cb67*/
  v48 = dword_AA1058; /*0x47cb72*/
  v65 = dword_AA1058 + 11; /*0x47cb79*/
  if ( dword_AA1058 == -1 ) /*0x47cb7d*/
    v65 = -1; /*0x47cb7f*/
  v73 = g_CellTileLookup; /*0x47cb8a*/
  v64 = g_CellTileLookup + 19; /*0x47cb91*/
  if ( g_CellTileLookup == -1 ) /*0x47cb95*/
    v64 = -1; /*0x47cb97*/
  v2 = dword_ABC2B8; /*0x47cb9e*/
  v81 = *(_DWORD *)&this->__pad_28[16]; /*0x47cba6*/
  if ( v81 == dword_ABC2B8 || v81 >= dword_AA1134 && v81 <= v49 ) /*0x47cbb8*/
  {
    v3 = 0; /*0x47cbbe*/
    v4 = 0; /*0x47cbc0*/
    for ( i = 0; i < 4; ++i ) /*0x47cbc2*/
    {
      if ( v4 < 8 ) /*0x47cbc7*/
      {
        smudgeTypeIndex = this->smudgeTypeIndex; /*0x47cbd5*/
        *(_DWORD *)v75 = *CellStruct::Add((CellStruct *)&smudgeTypeIndex, &v82, (_WORD *)(4 * (v4 & 7) + 9041544)); /*0x47cbf6*/
        mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47cbff*/
        v2 = dword_ABC2B8; /*0x47cc04*/
      }
      else
      {
        mapCoords = this->mapCoords; /*0x47cbc9*/
      }
      v7 = mapCoords[14]; /*0x47cc0a*/
      if ( v7 != v2 && (v7 < v55 || v7 > v49) ) /*0x47cc1b*/
        v3 |= 1 << i; /*0x47cc26*/
      v4 = ((_BYTE)v4 + 2) & 7; /*0x47cc2b*/
    }
    if ( v3 ) /*0x47cc36*/
      *(_DWORD *)&this->__pad_28[16] = v55 + v3; /*0x47cc3e*/
    else
      *(_DWORD *)&this->__pad_28[16] = v2; /*0x47cc43*/
  }
  if ( v47 != -1 ) /*0x47cc4b*/
  {
    v8 = *(_DWORD *)&this->__pad_28[16]; /*0x47cc51*/
    v9 = dword_ABB104; /*0x47cc54*/
    if ( v8 == dword_ABB104 || v8 >= v47 && v8 <= v50 ) /*0x47cc6c*/
    {
      v10 = 0; /*0x47cc72*/
      v11 = 0; /*0x47cc74*/
      for ( j = 0; j < 4; ++j ) /*0x47cc76*/
      {
        if ( v11 < 8 ) /*0x47cc7b*/
        {
          v14 = v11 & 7; /*0x47cc86*/
          *(_DWORD *)v75 = this->smudgeTypeIndex; /*0x47cc89*/
          LOWORD(v56) = v75[0] + LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x47cca8*/
          HIWORD(v56) = v75[1] + HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x47ccb1*/
          *(_DWORD *)v75 = v56; /*0x47ccba*/
          v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47ccc4*/
          v9 = dword_ABB104; /*0x47ccc9*/
        }
        else
        {
          v13 = this->mapCoords; /*0x47cc7d*/
        }
        v15 = v13[14]; /*0x47cccf*/
        if ( v15 != v9 && (v15 < v47 || v15 > v50) ) /*0x47cce0*/
          v10 |= 1 << j; /*0x47cceb*/
        v11 = ((_BYTE)v11 + 2) & 7; /*0x47ccf0*/
      }
      if ( v10 ) /*0x47ccff*/
        *(_DWORD *)&this->__pad_28[16] = v47 + v10; /*0x47cd07*/
      else
        *(_DWORD *)&this->__pad_28[16] = v9; /*0x47cd0c*/
    }
  }
  if ( v52 != -1 ) /*0x47cd16*/
  {
    v16 = *(_DWORD *)&this->__pad_28[16]; /*0x47cd1c*/
    v17 = dword_AA0E18; /*0x47cd1f*/
    if ( v16 == dword_AA0E18 || v16 >= v52 && v16 <= v51 ) /*0x47cd35*/
    {
      v18 = 0; /*0x47cd3b*/
      v19 = 0; /*0x47cd3d*/
      for ( k = 0; k < 4; ++k ) /*0x47cd3f*/
      {
        if ( v19 < 8 ) /*0x47cd44*/
        {
          v22 = v19 & 7; /*0x47cd4f*/
          *(_DWORD *)v75 = this->smudgeTypeIndex; /*0x47cd52*/
          LOWORD(v57) = v75[0] + LOWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x47cd71*/
          HIWORD(v57) = v75[1] + HIWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x47cd7a*/
          *(_DWORD *)v75 = v57; /*0x47cd83*/
          v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47cd8d*/
          v17 = dword_AA0E18; /*0x47cd92*/
        }
        else
        {
          v21 = this->mapCoords; /*0x47cd46*/
        }
        v23 = v21[14]; /*0x47cd98*/
        if ( v23 != v17 && (v23 < v52 || v23 > v51) && (v23 < v76 || v23 > v58) && (v23 < *(int *)v77 || v23 > v59) ) /*0x47cdc1*/
          v18 |= 1 << k; /*0x47cdcc*/
        v19 = ((_BYTE)v19 + 2) & 7; /*0x47cdd1*/
      }
      if ( v18 ) /*0x47cde0*/
        *(_DWORD *)&this->__pad_28[16] = v52 + v18; /*0x47cde8*/
      else
        *(_DWORD *)&this->__pad_28[16] = v17; /*0x47cded*/
    }
  }
  if ( v54 != -1 ) /*0x47cdf7*/
  {
    v24 = *(_DWORD *)&this->__pad_28[16]; /*0x47cdfd*/
    v25 = dword_ABC2B0; /*0x47ce00*/
    if ( v24 == dword_ABC2B0 || v24 >= v54 && v24 <= v53 ) /*0x47ce16*/
    {
      v26 = 0; /*0x47ce1c*/
      v27 = 0; /*0x47ce1e*/
      for ( m = 0; m < 4; ++m ) /*0x47ce20*/
      {
        if ( v27 < 8 ) /*0x47ce25*/
        {
          v30 = v27 & 7; /*0x47ce30*/
          *(_DWORD *)v77 = this->smudgeTypeIndex; /*0x47ce33*/
          LOWORD(v60) = v77[0] + LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x47ce52*/
          HIWORD(v60) = v77[1] + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x47ce5b*/
          *(_DWORD *)v77 = v60; /*0x47ce64*/
          v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v77); /*0x47ce6e*/
          v25 = dword_ABC2B0; /*0x47ce73*/
        }
        else
        {
          v29 = this->mapCoords; /*0x47ce27*/
        }
        v31 = v29[14]; /*0x47ce79*/
        if ( v31 != v25 /*0x47ceae*/
          && (v31 < v54 || v31 > v53)
          && (v31 < v78 || v31 > v61)
          && (v31 < v79 || v31 > v62)
          && (v31 < *(int *)v80 || v31 > v63) )
        {
          v26 |= 1 << m; /*0x47ceb9*/
        }
        v27 = ((_BYTE)v27 + 2) & 7; /*0x47cebe*/
      }
      if ( v26 ) /*0x47cecd*/
        *(_DWORD *)&this->__pad_28[16] = v54 + v26; /*0x47ced5*/
      else
        *(_DWORD *)&this->__pad_28[16] = v25; /*0x47ceda*/
    }
  }
  v32 = *(_DWORD *)&this->__pad_28[16]; /*0x47cedd*/
  if ( v32 >= v73 && v32 <= v64 || v32 >= v48 && v32 <= v65 ) /*0x47cefc*/
  {
    v33 = 0; /*0x47cf08*/
    if ( this->slopeIndex == 1 ) /*0x47cf0c*/
    {
      v34 = this->smudgeTypeIndex; /*0x47cf12*/
      LOWORD(v66) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v34; /*0x47cf21*/
      HIWORD(v66) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v34); /*0x47cf37*/
      *(_DWORD *)v80 = v66; /*0x47cf40*/
      v33 = *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) == 0; /*0x47cf58*/
      v35 = this->smudgeTypeIndex; /*0x47cf5d*/
      LOWORD(v66) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v35; /*0x47cf7c*/
      HIWORD(v66) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(v35); /*0x47cf81*/
      *(_DWORD *)v80 = v66; /*0x47cf90*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47cf99*/
        v33 |= 2u; /*0x47cfa3*/
      v36 = v48; /*0x47cfa6*/
      if ( v33 ) /*0x47cfac*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v48 - 1; /*0x47cfb2*/
    }
    else
    {
      v36 = v48; /*0x47cfb7*/
    }
    if ( this->slopeIndex == 2 ) /*0x47cfc2*/
    {
      v37 = this->smudgeTypeIndex; /*0x47cfc8*/
      LOWORD(v67) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v37; /*0x47cfe7*/
      HIWORD(v67) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v37); /*0x47cfec*/
      *(_DWORD *)v80 = v67; /*0x47cffb*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d004*/
        v33 |= 1u; /*0x47d00e*/
      v38 = this->smudgeTypeIndex; /*0x47d011*/
      LOWORD(v68) = v38 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d026*/
      HIWORD(v68) = HIWORD(v38) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d035*/
      *(_DWORD *)v80 = v68; /*0x47d03e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d04c*/
        v33 |= 2u; /*0x47d056*/
      if ( v33 ) /*0x47d05b*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 2; /*0x47d061*/
    }
    if ( this->slopeIndex == 3 ) /*0x47d06b*/
    {
      v39 = this->smudgeTypeIndex; /*0x47d071*/
      LOWORD(v69) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v39; /*0x47d090*/
      HIWORD(v69) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(v39); /*0x47d095*/
      *(_DWORD *)v80 = v69; /*0x47d0a4*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d0ad*/
        v33 |= 1u; /*0x47d0b7*/
      v40 = this->smudgeTypeIndex; /*0x47d0ba*/
      LOWORD(v70) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v40; /*0x47d0c9*/
      HIWORD(v70) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v40); /*0x47d0df*/
      *(_DWORD *)v80 = v70; /*0x47d0e8*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d0f6*/
        v33 |= 2u; /*0x47d100*/
      if ( v33 ) /*0x47d105*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 5; /*0x47d10b*/
    }
    if ( this->slopeIndex == 4 ) /*0x47d115*/
    {
      v41 = this->smudgeTypeIndex; /*0x47d11b*/
      LOWORD(v71) = v41 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d136*/
      HIWORD(v71) = HIWORD(v41) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d13f*/
      *(_DWORD *)v80 = v71; /*0x47d14e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d157*/
        v33 |= 1u; /*0x47d161*/
      v42 = this->smudgeTypeIndex; /*0x47d164*/
      LOWORD(v72) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v42; /*0x47d173*/
      HIWORD(v72) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v42); /*0x47d189*/
      *(_DWORD *)v80 = v72; /*0x47d192*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d1a0*/
        v33 |= 2u; /*0x47d1aa*/
      if ( !v33 ) /*0x47d1af*/
        goto LABEL_128; /*0x47d1af*/
      *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 8; /*0x47d1b5*/
    }
    if ( !v33 ) /*0x47d1ba*/
LABEL_128:
      *(_DWORD *)&this->__pad_28[16] = (unsigned __int8)this->slopeIndex + v73 - 1; /*0x47d1bc*/
  }
  v43 = *(_DWORD *)&this->__pad_28[16]; /*0x47d1cf*/
  v44 = v81; /*0x47d1d2*/
  if ( v81 != v43 ) /*0x47d1d8*/
  {
    v45 = *(CellClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v43); /*0x47d1e0*/
    if ( !(*(int (__thiscall **)(CellClass *))(v45->mapCoords[0] + 156))(v45) ) /*0x47d1e7*/
      CellClass::EnsureFileLoaded(v45); /*0x47d1f3*/
  }
  return v44 != *(_DWORD *)&this->__pad_28[16]; /*0x47d1fd*/
}



// ==== 0x0047D210  CellClass::SetWallOwner  this=CellClass  sig=ida-proto ====
int __fastcall CellClass::SetWallOwner(int a1)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebx
  int i; // edi
  ObjectClass *v5; // esi
  int v6; // eax
  int v7; // [esp+0h] [ebp-4h]

  result = *(_DWORD *)(a1 + 68); /*0x47d211*/
  v7 = a1; /*0x47d214*/
  if ( result != -1 ) /*0x47d21b*/
  {
    result = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result); /*0x47d227*/
    if ( *(_BYTE *)(result + 680) ) /*0x47d22a*/
    {
      result = stru_A8EB00.ObjectTypeClass[20]; /*0x47d234*/
      v2 = -1; /*0x47d23b*/
      v3 = 0; /*0x47d23e*/
      for ( i = 0x7FFFFFFF; v3 < stru_A8EB00.ObjectTypeClass[20]; ++v3 ) /*0x47d248*/
      {
        v5 = *(ObjectClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v3); /*0x47d251*/
        if ( v5->isAliveFlag && v5->isOnMap && *(_BYTE *)(*(_DWORD *)(v5[3].? + 52) + 423) ) /*0x47d26e*/
        {
          v6 = ObjectClass::DistanceTo(v5, a1); /*0x47d27b*/
          if ( v6 < i ) /*0x47d282*/
          {
            i = v6; /*0x47d284*/
            v2 = (*((int (__thiscall **)(ObjectClass *))v5->AbstractClass + 14))(v5); /*0x47d28d*/
          }
        }
        result = stru_A8EB00.ObjectTypeClass[20]; /*0x47d28f*/
        a1 = v7; /*0x47d294*/
      }
      *(_DWORD *)(a1 + 80) = v2; /*0x47d29e*/
    }
  }
  return result; /*0x47d2a5*/
}



// ==== 0x0047D2B0  House::AnnounceUpgrade  this=IUnknown  sig=csp ====
int __thiscall House::AnnounceUpgrade(int this, int a2)
{
  int result; // eax
  __int16 *v4; // edi
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // dx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebp
  bool MapFileData; // al
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // ecx
  __int16 v28; // ax
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  TubeClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  AnimClass *v40; // eax
  void **v41; // eax
  void *v42; // ecx
  _WORD *inited; // ebx
  _DWORD *v44; // eax
  int v45; // eax
  __int16 v46; // dx
  __int16 v47; // cx
  __int16 v48; // dx
  __int16 v49; // dx
  __int16 v50; // dx
  __int16 v51; // dx
  int v52; // eax
  _BYTE *v53; // eax
  int v54; // [esp-8h] [ebp-50h]
  __int16 v55[2]; // [esp+10h] [ebp-38h] BYREF
  int v56; // [esp+14h] [ebp-34h]
  int v57; // [esp+18h] [ebp-30h]
  int v58; // [esp+1Ch] [ebp-2Ch] BYREF
  char v59[4]; // [esp+20h] [ebp-28h] BYREF
  int v60[5]; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (int *)this == &g_MissionQueueFrame.briefing[130] ) /*0x47d2bf*/
    return result; /*0x47d2bf*/
  v4 = (__int16 *)(this + 36); /*0x47d2c5*/
  v5 = (_BYTE *)(*(_DWORD *)&stru_87F5F0.__pad_58[520] /*0x47d2da*/
               + 4 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(this + 36)));
  v57 = (int)v5; /*0x47d2e2*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x47d2f3*/
     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(this + 36));
  v7 = *(_DWORD *)(this + 68); /*0x47d2f6*/
  v56 = v6; /*0x47d2fc*/
  if ( v7 != -1 ) /*0x47d300*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x47d30c*/
    v9 = *(_DWORD *)(v8 + 664); /*0x47d30f*/
    *(_DWORD *)(this + 236) = v9; /*0x47d318*/
    if ( v9 == 4 || v9 == 9 || *(_BYTE *)(v8 + 684) ) /*0x47d325*/
    {
      v10 = *(_DWORD *)(this + 56); /*0x47d333*/
      if ( v10 != 0xFFFF && v10 < *(int *)&stru_A8EB00.?[340] ) /*0x47d343*/
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex( /*0x47d35e*/
                                   *(HouseClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v10),
                                   *(unsigned __int8 *)(this + 282));
      if ( *(_BYTE *)(this + 284) && *(_BYTE *)(v8 + 681) ) /*0x47d36e*/
      {
        *(_DWORD *)(this + 68) = -1; /*0x47d378*/
        *(_BYTE *)(this + 286) = 0; /*0x47d37f*/
      }
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d38b*/
      {
        v11 = *(_WORD *)(this + 38); /*0x47d39c*/
        LOWORD(a2) = *v4; /*0x47d3a0*/
        HIWORD(a2) = v11 - 1; /*0x47d3ab*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d3d6*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d3d6*/
        v12 = *v4 - 1; /*0x47d3e3*/
        HIWORD(a2) = *(_WORD *)(this + 38); /*0x47d3e5*/
        LOWORD(a2) = v12; /*0x47d3ea*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d419*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d419*/
        v13 = *(_WORD *)(this + 38) + 2; /*0x47d42a*/
        LOWORD(a2) = *v4 + 2; /*0x47d42e*/
        HIWORD(a2) = v13; /*0x47d437*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d462*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d462*/
        v14 = *(_WORD *)(this + 38) + 1; /*0x47d471*/
        LOWORD(a2) = *v4 + 1; /*0x47d473*/
        HIWORD(a2) = v14; /*0x47d47c*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d52d*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283)
          || (v15 = *(_WORD *)(this + 38) + 1,
              LOWORD(a2) = *v4 - 1,
              HIWORD(a2) = v15,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283))
          || (v16 = *(_WORD *)(this + 38) - 1,
              LOWORD(a2) = *v4 + 1,
              HIWORD(a2) = v16,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283)) )
        {
LABEL_19:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47d53c*/
            *(_DWORD *)(this + 236) = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType((CellClass *)this); /*0x47d54a*/
      BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47d551*/
      v17 = v56; /*0x47d55c*/
      v5[1] = *(_BYTE *)(this + 283); /*0x47d560*/
      LOBYTE(result) = *(_BYTE *)(this + 283); /*0x47d563*/
      *(_BYTE *)(v17 + 8) = result; /*0x47d569*/
      *v5 = *(_BYTE *)(this + 76); /*0x47d571*/
      return result; /*0x47d578*/
    }
  }
  if ( *(_DWORD *)(this + 56) >= *(int *)&stru_A8EB00.?[340] ) /*0x47d58b*/
    *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d58d*/
  v18 = *(_DWORD *)(this + 56); /*0x47d590*/
  if ( v18 != 0xFFFF ) /*0x47d595*/
  {
    v19 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v18); /*0x47d5ab*/
    v54 = *(unsigned __int8 *)(this + 282); /*0x47d5ae*/
    *(_DWORD *)v55 = v19; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((House *)v19, v54, 0); /*0x47d5b5*/
    if ( *(_BYTE *)(this + 284) ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
LABEL_40:
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex((HouseClass *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d7fb*/
        CellClass::DetermineTileType((CellClass *)this); /*0x47d813*/
        v27 = *(_DWORD *)(this + 68); /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( *(_BYTE *)(this + 284) <= 4u ) /*0x47d831*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)) + 664) ) /*0x47d864*/
              *(_DWORD *)(this + 236) = 5; /*0x47d86e*/
          }
          else
          {
            *(_DWORD *)(this + 236) = House::LookupObject((House *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d843*/
            *(_DWORD *)(this + 68) = -1; /*0x47d849*/
            *(_BYTE *)(this + 286) = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)) + 684) ) /*0x47d885*/
LABEL_47:
          *(_DWORD *)(this + 236) = House::LookupObject((House *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d8aa*/
LABEL_48:
        if ( *(_DWORD *)(this + 236) == 10 ) /*0x47d8b7*/
        {
          v28 = *(_WORD *)(this + 278); /*0x47d8bd*/
          if ( v28 < 0 || v28 >= FootClass_Array.?[0] ) /*0x47d8d2*/
          {
            if ( (v29 = *(_DWORD *)(this + 56), v30 = dword_AA1054, v29 >= dword_AA1054) && v29 <= dword_AA1054 + 3 /*0x47d919*/
              || (v30 = dword_ABB108, v29 >= dword_ABB108) && v29 <= dword_ABB108 + 3
              || (v30 = dword_AA10B4, v29 >= dword_AA10B4) && v29 <= dword_AA10B4 + 3
              || (v30 = dword_ABAD2C, v29 >= dword_ABAD2C) && v29 <= dword_ABAD2C + 3 )
            {
              v31 = v29 - v30; /*0x47d91d*/
              if ( v29 - v30 != -1 ) /*0x47d922*/
              {
                v32 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  TubeClass::Construct(v32, (__int16 *)(this + 36), dword_81CC20[v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( a2 != -1 ) /*0x47d94c*/
          *(_BYTE *)(this + 283) = a2; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((TechnoClass *)v19, *(unsigned __int8 *)(this + 282), v59, &v58); /*0x47d969*/
        v33 = *(_DWORD *)(this + 320); /*0x47d988*/
        *(_BYTE *)(this + 285) = (v58 - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(_DWORD *)(v19 + 712) != -1
          && *(_DWORD *)(v19 + 724) == *(unsigned __int8 *)(this + 282) )
        {
          v34 = *v4; /*0x47d9d0*/
          v35 = *(__int16 *)(this + 38); /*0x47d9d3*/
          v61 = dword_89E7C0 * *(char *)(this + 283); /*0x47d9e1*/
          v36 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v62, (int *)(*(_DWORD *)v55 + 716)); /*0x47da03*/
          v37 = v36[1]; /*0x47da0a*/
          v38 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v39 = v61 + v36[2]; /*0x47da18*/
          v60[0] = v38; /*0x47da1f*/
          v60[1] = (v35 << 8) + 128 + v37; /*0x47da23*/
          v60[2] = v39; /*0x47da27*/
          v40 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(void **)(FootClass_Array.?[3] + 4 * *(_DWORD *)(*(_DWORD *)v55 + 712)),
                    v60,
                    0,
                    -1,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v19 = *(_DWORD *)v55; /*0x47da6c*/
          v42 = *(void **)(*(_DWORD *)v55 + 728); /*0x47da6e*/
          *((_BYTE *)v41 + 406) = 1; /*0x47da74*/
          v41[64] = v42; /*0x47da7b*/
          *((_BYTE *)v41 + 407) = 1; /*0x47da81*/
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x47da88*/
        }
        if ( *(_BYTE *)(v19 + 737) ) /*0x47da92*/
        {
          inited = (_WORD *)InitCoordinateOffsetsMap(v19); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*inited != 0x7FFF || inited[1] != 0x7FFF) && *(_DWORD *)inited != dword_89E748 ) /*0x47dacf*/
            {
              LOWORD(a2) = *v4 + *inited; /*0x47dae6*/
              HIWORD(a2) = inited[1] + *(_WORD *)(this + 38); /*0x47daf3*/
              *(_DWORD *)v55 = a2; /*0x47dafc*/
              v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x47db05*/
              inited += 2; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((House *)v19, *(unsigned __int8 *)(this + 282), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d5e6*/
      *(_BYTE *)(this + 282) = 0; /*0x47d5e9*/
      *(_DWORD *)(this + 236) = 0; /*0x47d5ef*/
      *(_BYTE *)(this + 284) = 0; /*0x47d5f9*/
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d605*/
      {
        v21 = *(_WORD *)(this + 38) - 1; /*0x47d61a*/
        LOWORD(a2) = *v4; /*0x47d61c*/
        HIWORD(a2) = v21; /*0x47d621*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d650*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d650*/
        v22 = *v4 - 1; /*0x47d65d*/
        HIWORD(a2) = *(_WORD *)(this + 38); /*0x47d65f*/
        LOWORD(a2) = v22; /*0x47d664*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d693*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d693*/
        v23 = *(_WORD *)(this + 38); /*0x47d69c*/
        LOWORD(a2) = *v4 + 2; /*0x47d6a8*/
        HIWORD(a2) = v23 + 2; /*0x47d6ad*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d6dc*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d6dc*/
        v24 = *(_WORD *)(this + 38) + 1; /*0x47d6eb*/
        LOWORD(a2) = *v4 + 1; /*0x47d6ed*/
        HIWORD(a2) = v24; /*0x47d6f2*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d7a7*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283)
          || (v25 = *(_WORD *)(this + 38) + 1,
              LOWORD(a2) = *v4 - 1,
              HIWORD(a2) = v25,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283))
          || (v26 = *(_WORD *)(this + 38) - 1,
              LOWORD(a2) = *v4 + 1,
              HIWORD(a2) = v26,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283)) )
        {
LABEL_98:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 && !*(_DWORD *)(this + 236) ) /*0x47d7b7*/
            *(_DWORD *)(this + 236) = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47d7cd*/
      result = v57; /*0x47d7d2*/
      *(_BYTE *)(v57 + 1) = *(_BYTE *)(this + 283); /*0x47d7dd*/
      *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47d7ea*/
      *(_BYTE *)result = *(_BYTE *)(this + 76); /*0x47d7f2*/
      return result; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v7 == -1 || (v45 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7), *(_BYTE *)(v45 + 684)) ) /*0x47db30*/
    *(_DWORD *)(this + 236) = 0; /*0x47db48*/
  else
    *(_DWORD *)(this + 236) = *(_DWORD *)(v45 + 664); /*0x47db40*/
  *(_BYTE *)(this + 284) = 0; /*0x47db52*/
LABEL_82:
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47db5e*/
  {
    v46 = *(_WORD *)(this + 38); /*0x47db6f*/
    LOWORD(a2) = *v4; /*0x47db73*/
    HIWORD(a2) = v46 - 1; /*0x47db7e*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dba9*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dba9*/
    v47 = *v4 - 1; /*0x47dbb6*/
    HIWORD(a2) = *(_WORD *)(this + 38); /*0x47dbb8*/
    LOWORD(a2) = v47; /*0x47dbbd*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dbec*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dbec*/
    v48 = *(_WORD *)(this + 38) + 2; /*0x47dbfd*/
    LOWORD(a2) = *v4 + 2; /*0x47dc01*/
    HIWORD(a2) = v48; /*0x47dc0a*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dc35*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dc35*/
    v49 = *(_WORD *)(this + 38) + 1; /*0x47dc44*/
    LOWORD(a2) = *v4 + 1; /*0x47dc46*/
    HIWORD(a2) = v49; /*0x47dc4f*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dd00*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283)
      || (v50 = *(_WORD *)(this + 38) + 1,
          LOWORD(a2) = *v4 - 1,
          HIWORD(a2) = v50,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283))
      || (v51 = *(_WORD *)(this + 38) - 1,
          LOWORD(a2) = *v4 + 1,
          HIWORD(a2) = v51,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283)) )
    {
LABEL_89:
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47dd0f*/
      {
        v52 = *(_DWORD *)(this + 236); /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          *(_DWORD *)(this + 236) = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47dd36*/
  v53 = (_BYTE *)v57; /*0x47dd3b*/
  *(_BYTE *)(v57 + 1) = *(_BYTE *)(this + 283); /*0x47dd45*/
  *v53 = *(_BYTE *)(this + 76); /*0x47dd4b*/
  result = v56; /*0x47dd4d*/
  *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47dd57*/
  return result; /*0x47d56f*/
}



// ==== 0x0047DD70  CellClass::UpdateAnimations  this=CellClass  sig=csp ====
int __thiscall CellClass::UpdateAnimations(CellClass *this)
{
  int result; // eax
  ObjectClass *firstObject; // ecx
  ObjectClass *nextObject; // edi
  ObjectClass *altObject; // ecx
  ObjectClass *v6; // edi
  int v7; // eax
  __int16 v8; // fps
  double v9; // st7
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int v13; // ecx
  int smudgeTypeIndex_high; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  AnimClass *v19; // esi
  int v20; // eax
  AnimClass *v21; // edi
  void *v22; // esi
  int v23; // eax
  int v24; // [esp+28h] [ebp-Ch] BYREF
  int v25; // [esp+2Ch] [ebp-8h]
  int v26; // [esp+30h] [ebp-4h]

  LOBYTE(result) = stru_A8EB00.?[391]; /*0x47dd70*/
  if ( !stru_A8EB00.?[391] ) /*0x47dd7e*/
  {
    firstObject = this->firstObject; /*0x47dd84*/
    if ( firstObject ) /*0x47dd8c*/
    {
      do /*0x47ddb8*/
      {
        nextObject = firstObject->nextObject; /*0x47dd96*/
        (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))firstObject->AbstractClass + 91))( /*0x47ddae*/
          &firstObject->health,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
        firstObject = nextObject; /*0x47ddb6*/
      }
      while ( nextObject ); /*0x47ddb8*/
    }
    altObject = this->altObject; /*0x47ddba*/
    if ( altObject ) /*0x47ddc2*/
    {
      do /*0x47ddd3*/
      {
        v6 = altObject->nextObject; /*0x47ddc6*/
        (*((void (__thiscall **)(ObjectClass *))altObject->AbstractClass + 59))(altObject); /*0x47ddc9*/
        altObject = v6; /*0x47ddd1*/
      }
      while ( v6 ); /*0x47ddd3*/
    }
    if ( *(int *)&stru_87F5F0.__pad_58[644] < *(int *)&stru_87F5F0.__pad_58[636] /*0x47de0c*/
      || (stru_87F5F0.__pad_58[641] || !*(_DWORD *)&stru_87F5F0.__pad_58[636])
      && *(int *)&stru_87F5F0.__pad_58[648] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_58[628] + 8))(
           &stru_87F5F0.__pad_58[628],
           *(_DWORD *)&stru_87F5F0.__pad_58[636] + *(_DWORD *)&stru_87F5F0.__pad_58[648],
           0) )
    {
      v7 = (*(_DWORD *)&stru_87F5F0.__pad_58[644])++; /*0x47de1f*/
      *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[632] + 4 * v7) = this->smudgeTypeIndex; /*0x47de2b*/
    }
    result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x47de2e*/
    if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) > 0 ) /*0x47de3b*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47de54*/
      v9 = (double)result * 4.656612877414201e-10; /*0x47de61*/
      v10 = v9 < 0.95; /*0x47de67*/
      v11 = 0; /*0x47de67*/
      v12 = v9 == 0.95; /*0x47de67*/
      LOWORD(result) = v8; /*0x47de6d*/
      if ( v9 < 0.95 ) /*0x47de72*/
      {
        v13 = dword_89E7C0 * this->level; /*0x47de83*/
        smudgeTypeIndex_high = SHIWORD(this->smudgeTypeIndex); /*0x47de8a*/
        v24 = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47de9c*/
        v26 = dword_89E7B4 + v13; /*0x47deb6*/
        v25 = (smudgeTypeIndex_high << 8) + 128; /*0x47dec2*/
        v15 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47dec6*/
        LOWORD(v16) = Math::RoundToInt(((double)v15 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v24); /*0x47dee9*/
        v24 = v16; /*0x47deee*/
        v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47df04*/
        LOWORD(v18) = Math::RoundToInt(((double)v17 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v25); /*0x47df27*/
        v25 = v18; /*0x47df3f*/
        if ( (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) * 4.656612877414201e-10 < 0.5 ) /*0x47df61*/
        {
          v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x47df6d*/
          if ( v19 ) /*0x47df74*/
          {
            v20 = Random::Range( /*0x47df91*/
                    (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 332) - 1);
            AnimClass::ctor( /*0x47dfba*/
              v19,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 320) + 4 * v20),
              &v24,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        result = __2_YAPAXI_Z(0x1C8u); /*0x47dfc4*/
        v21 = (AnimClass *)result; /*0x47dfc9*/
        if ( result ) /*0x47dfd0*/
        {
          v22 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x47dff2*/
          v23 = Random::Range( /*0x47e004*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          return (int)AnimClass::ctor( /*0x47e02c*/
                        v21,
                        *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v23),
                        &v24,
                        v22,
                        1,
                        (void *)0x600,
                        0,
                        0);
        }
      }
    }
  }
  return result; /*0x47e031*/
}



// ==== 0x0047E040  UpdateCellClassNeighborTerrain  this=-  sig=csp ====
int __fastcall UpdateCellClassNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  __int16 v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v49[2]; // [esp+30h] [ebp-8h] BYREF
  __int16 v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e04a*/
  if ( a3 ) /*0x47e053*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e05e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e055*/
  v5 = a4; /*0x47e065*/
  v6 = a4 & 1; /*0x47e06b*/
  v40 = v6 << 9; /*0x47e079*/
  v7 = v6 << 12; /*0x47e082*/
  v8 = v6 << 16; /*0x47e085*/
  v39 = v6 << 8; /*0x47e090*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e097*/
  v38 = (a3 == 0) << 11; /*0x47e0af*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e0bf*/
  BYTE1(v9) &= ~2u; /*0x47e0c5*/
  v10 = (v6 << 9) | v9; /*0x47e0c8*/
  BYTE1(v10) &= ~0x10u; /*0x47e0ce*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e0d9*/
  BYTE1(v11) &= ~4u; /*0x47e0db*/
  v12 = a4 | v11; /*0x47e0de*/
  BYTE1(v12) &= ~8u; /*0x47e0e4*/
  *(_DWORD *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e0f0*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e10d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e114*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e122*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e126*/
  if ( a3 < 8 ) /*0x47e132*/
  {
    LOWORD(v41) = *p_smudgeTypeIndex + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e157*/
    HIWORD(v41) = HIWORD(*p_smudgeTypeIndex) + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e166*/
    *(_DWORD *)v48 = v41; /*0x47e16f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e17d*/
  }
  v13 = v4->flags[0]; /*0x47e18f*/
  BYTE1(v13) &= ~1u; /*0x47e195*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e19c*/
  BYTE1(v14) &= ~2u; /*0x47e1a2*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e1a5*/
  v15 = v40 | v14; /*0x47e1a8*/
  BYTE1(v15) &= ~0x10u; /*0x47e1ae*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e1b9*/
  BYTE1(v16) &= ~4u; /*0x47e1bb*/
  v17 = a4 | v16; /*0x47e1be*/
  BYTE1(v17) &= ~8u; /*0x47e1c4*/
  v4->flags[0] = v38 | v17; /*0x47e1cb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e1e8*/
    CellClass::UpdateAnimations(v4); /*0x47e1ef*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e201*/
  v18 = a3; /*0x47e206*/
  if ( a3 < 8 ) /*0x47e20d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e218*/
    *(_DWORD *)v49 = v4->smudgeTypeIndex; /*0x47e227*/
    LOWORD(v42) = v49[0] + v19; /*0x47e232*/
    HIWORD(v42) = v49[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e241*/
    *(_DWORD *)v49 = v42; /*0x47e24a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e258*/
    v18 = a3; /*0x47e25a*/
  }
  v20 = v4->flags[0]; /*0x47e262*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e268*/
  BYTE1(v20) &= ~1u; /*0x47e26f*/
  v21 = v39 | v20; /*0x47e272*/
  BYTE1(v21) &= 0xEDu; /*0x47e278*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e283*/
  BYTE1(v22) &= ~4u; /*0x47e285*/
  v23 = a4 | v22; /*0x47e288*/
  BYTE1(v23) &= ~8u; /*0x47e28e*/
  v4->flags[0] = v38 | v23; /*0x47e295*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e2ae*/
    CellClass::UpdateAnimations(v4); /*0x47e2b5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e2c7*/
  v24 = a3; /*0x47e2cc*/
  if ( a3 < 8 ) /*0x47e2d3*/
  {
    *(_DWORD *)v50 = v4->smudgeTypeIndex; /*0x47e2e9*/
    LOWORD(v43) = v50[0] + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e2fc*/
    HIWORD(v43) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e305*/
    *(_DWORD *)v50 = v43; /*0x47e314*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e318*/
    v24 = a3; /*0x47e31d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e2d5*/
  }
  v26 = mapCoords[80]; /*0x47e321*/
  BYTE1(v26) &= ~0x10u; /*0x47e327*/
  mapCoords[80] = v7 | v26; /*0x47e32c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e335*/
  if ( v27 < 8 ) /*0x47e33b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e34c*/
    *(_DWORD *)v50 = *p_smudgeTypeIndex; /*0x47e35b*/
    LOWORD(v46) = v50[0] + v29; /*0x47e366*/
    HIWORD(v46) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e375*/
    *(_DWORD *)v50 = v46; /*0x47e37e*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e387*/
    v24 = a3; /*0x47e38c*/
    v28 = (int)v30; /*0x47e390*/
  }
  else
  {
    v28 = a1; /*0x47e33d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e392*/
  BYTE1(v31) &= ~1u; /*0x47e39c*/
  v32 = v39 | v31; /*0x47e3a3*/
  BYTE1(v32) &= ~2u; /*0x47e3a9*/
  *(_DWORD *)(v28 + 44) = v47; /*0x47e3ac*/
  v33 = v40 | v32; /*0x47e3af*/
  BYTE1(v33) &= ~4u; /*0x47e3b5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e3c3*/
  BYTE1(v34) &= ~8u; /*0x47e3c5*/
  *(_DWORD *)(v28 + 320) = v38 | v34; /*0x47e3cc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e3e5*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e3ec*/
  }
  v35 = (int *)(v28 + 36); /*0x47e3f1*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e3fa*/
  if ( a3 == 6 ) /*0x47e404*/
  {
    a4 = *v35; /*0x47e40e*/
    LOWORD(a3) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e424*/
    HIWORD(a3) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(a4); /*0x47e429*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x47e43c*/
    v37 = *(_DWORD *)(result + 320); /*0x47e441*/
    *(_DWORD *)(result + 44) = v47; /*0x47e447*/
    *(_DWORD *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e452*/
  }
  return result; /*0x47e458*/
}



// ==== 0x0047E470  SetCellClassOccupancyFlags  this=-  sig=csp ====
int __fastcall SetCellClassOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  __int16 v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v49[2]; // [esp+30h] [ebp-8h] BYREF
  __int16 v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e47a*/
  if ( a3 ) /*0x47e483*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e48e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e485*/
  v5 = a4; /*0x47e495*/
  v6 = a4 & 1; /*0x47e49b*/
  v40 = v6 << 9; /*0x47e4a9*/
  v7 = v6 << 12; /*0x47e4b2*/
  v8 = v6 << 16; /*0x47e4b5*/
  v39 = v6 << 8; /*0x47e4c0*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e4c7*/
  v38 = (a3 == 0) << 11; /*0x47e4df*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e4ef*/
  BYTE1(v9) &= ~2u; /*0x47e4f5*/
  v10 = (v6 << 9) | v9; /*0x47e4f8*/
  BYTE1(v10) &= ~0x10u; /*0x47e4fe*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e509*/
  BYTE1(v11) &= ~4u; /*0x47e50b*/
  v12 = a4 | v11; /*0x47e50e*/
  BYTE1(v12) &= ~8u; /*0x47e514*/
  *(_DWORD *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e520*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e53d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e544*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e552*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e556*/
  if ( a3 < 8 ) /*0x47e562*/
  {
    LOWORD(v41) = *p_smudgeTypeIndex + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e587*/
    HIWORD(v41) = HIWORD(*p_smudgeTypeIndex) + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e596*/
    *(_DWORD *)v48 = v41; /*0x47e59f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e5ad*/
  }
  v13 = v4->flags[0]; /*0x47e5bf*/
  BYTE1(v13) &= ~1u; /*0x47e5c5*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e5cc*/
  BYTE1(v14) &= ~2u; /*0x47e5d2*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e5d5*/
  v15 = v40 | v14; /*0x47e5d8*/
  BYTE1(v15) &= ~0x10u; /*0x47e5de*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e5e9*/
  BYTE1(v16) &= ~4u; /*0x47e5eb*/
  v17 = a4 | v16; /*0x47e5ee*/
  BYTE1(v17) &= ~8u; /*0x47e5f4*/
  v4->flags[0] = v38 | v17; /*0x47e5fb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e618*/
    CellClass::UpdateAnimations(v4); /*0x47e61f*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e631*/
  v18 = a3; /*0x47e636*/
  if ( a3 < 8 ) /*0x47e63d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e648*/
    *(_DWORD *)v49 = v4->smudgeTypeIndex; /*0x47e657*/
    LOWORD(v42) = v49[0] + v19; /*0x47e662*/
    HIWORD(v42) = v49[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e671*/
    *(_DWORD *)v49 = v42; /*0x47e67a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e688*/
    v18 = a3; /*0x47e68a*/
  }
  v20 = v4->flags[0]; /*0x47e692*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e698*/
  BYTE1(v20) &= ~1u; /*0x47e69f*/
  v21 = v39 | v20; /*0x47e6a2*/
  BYTE1(v21) &= 0xEDu; /*0x47e6a8*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e6b3*/
  BYTE1(v22) &= ~4u; /*0x47e6b5*/
  v23 = a4 | v22; /*0x47e6b8*/
  BYTE1(v23) &= ~8u; /*0x47e6be*/
  v4->flags[0] = v38 | v23; /*0x47e6c5*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e6de*/
    CellClass::UpdateAnimations(v4); /*0x47e6e5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e6f7*/
  v24 = a3; /*0x47e6fc*/
  if ( a3 < 8 ) /*0x47e703*/
  {
    *(_DWORD *)v50 = v4->smudgeTypeIndex; /*0x47e719*/
    LOWORD(v43) = v50[0] + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e72c*/
    HIWORD(v43) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e735*/
    *(_DWORD *)v50 = v43; /*0x47e744*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e748*/
    v24 = a3; /*0x47e74d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e705*/
  }
  v26 = mapCoords[80]; /*0x47e751*/
  BYTE1(v26) &= ~0x10u; /*0x47e757*/
  mapCoords[80] = v7 | v26; /*0x47e75c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e765*/
  if ( v27 < 8 ) /*0x47e76b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e77c*/
    *(_DWORD *)v50 = *p_smudgeTypeIndex; /*0x47e78b*/
    LOWORD(v46) = v50[0] + v29; /*0x47e796*/
    HIWORD(v46) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e7a5*/
    *(_DWORD *)v50 = v46; /*0x47e7ae*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e7b7*/
    v24 = a3; /*0x47e7bc*/
    v28 = (int)v30; /*0x47e7c0*/
  }
  else
  {
    v28 = a1; /*0x47e76d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e7c2*/
  BYTE1(v31) &= ~1u; /*0x47e7cc*/
  v32 = v39 | v31; /*0x47e7d3*/
  BYTE1(v32) &= ~2u; /*0x47e7d9*/
  *(_DWORD *)(v28 + 44) = v47; /*0x47e7dc*/
  v33 = v40 | v32; /*0x47e7df*/
  BYTE1(v33) &= ~4u; /*0x47e7e5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e7f3*/
  BYTE1(v34) &= ~8u; /*0x47e7f5*/
  *(_DWORD *)(v28 + 320) = v38 | v34; /*0x47e7fc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e815*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e81c*/
  }
  v35 = (int *)(v28 + 36); /*0x47e821*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e82a*/
  if ( a3 == 6 ) /*0x47e834*/
  {
    a4 = *v35; /*0x47e83e*/
    LOWORD(a3) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e854*/
    HIWORD(a3) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(a4); /*0x47e859*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x47e86c*/
    v37 = *(_DWORD *)(result + 320); /*0x47e871*/
    *(_DWORD *)(result + 44) = v47; /*0x47e877*/
    *(_DWORD *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e882*/
  }
  return result; /*0x47e888*/
}



// ==== 0x0047E8A0  CellClass::AddContent  this=AbstractClass  sig=csp ====
char __thiscall CellClass::AddContent(int this, _DWORD *a2, char a3)
{
  int v3; // eax
  int v5; // esi
  int i; // eax
  int inited; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+28h] [ebp+8h]
  int v19; // [esp+28h] [ebp+8h]

  LOBYTE(v3) = a3; /*0x47e8a0*/
  if ( a3 ) /*0x47e8ae*/
    v5 = *(_DWORD *)(this + 232); /*0x47e8b0*/
  else
    v5 = *(_DWORD *)(this + 228); /*0x47e8b8*/
  if ( a2 ) /*0x47e8c4*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 && v5 ) /*0x47e8d9*/
    {
      for ( i = *(_DWORD *)(v5 + 48); i; i = *(_DWORD *)(i + 48) ) /*0x47e8e0*/
        v5 = i; /*0x47e8e2*/
      *(_DWORD *)(v5 + 48) = a2; /*0x47e8eb*/
      a2[12] = 0; /*0x47e8ee*/
    }
    else if ( a3 ) /*0x47e8fd*/
    {
      if ( !v5 || *(_DWORD **)(v5 + 48) != a2 ) /*0x47e906*/
      {
        a2[12] = v5; /*0x47e908*/
        *(_DWORD *)(this + 232) = a2; /*0x47e90b*/
      }
    }
    else if ( !v5 || *(_DWORD **)(v5 + 48) != a2 ) /*0x47e91a*/
    {
      a2[12] = v5; /*0x47e91c*/
      *(_DWORD *)(this + 228) = a2; /*0x47e91f*/
    }
    v18 = *(_DWORD *)(this + 36); /*0x47e929*/
    v13 = 128; /*0x47e94b*/
    v14 = 128; /*0x47e94f*/
    inited = Isometric::InitTables(this, &v13); /*0x47e953*/
    v15 = ((__int16)v18 << 8) + 128; /*0x47e962*/
    v16 = (SHIWORD(v18) << 8) + 128; /*0x47e966*/
    v17 = inited; /*0x47e96a*/
    if ( !Cell::IsPassable(&v15) /*0x47e9cf*/
      && (v19 = *(_DWORD *)(this + 36),
          v13 = 128,
          v14 = 128,
          v8 = Isometric::InitTables(this, &v13),
          v15 = ((__int16)v19 << 8) + 128,
          v16 = (SHIWORD(v19) << 8) + 128,
          v17 = v8,
          !Game::Stub3((int)&v15))
      || dword_A8B238[0] )
    {
      (*(void (__thiscall **)(_DWORD *, #375 *))(*a2 + 408))(a2, dword_A83D4C); /*0x47e9dc*/
    }
    v3 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2); /*0x47e9e7*/
    if ( v3 != 15 ) /*0x47e9ee*/
    {
      LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *))(*a2 + 192))(a2); /*0x47e9f9*/
      if ( (_BYTE)v3 ) /*0x47ea01*/
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 ) /*0x47ea0e*/
        {
          v9 = *(__int16 *)(this + 36); /*0x47ea10*/
          v10 = *(__int16 *)(this + 38); /*0x47ea14*/
          v11 = *a2; /*0x47ea18*/
          v17 = 0; /*0x47ea1b*/
          v15 = (v9 << 8) + 128; /*0x47ea2e*/
          v16 = (v10 << 8) + 128; /*0x47ea3c*/
        }
        else
        {
          v15 = a2[39]; /*0x47ea5e*/
          v11 = *a2; /*0x47ea62*/
          v16 = a2[40]; /*0x47ea68*/
          v17 = a2[41]; /*0x47ea74*/
        }
        LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, int *))(v11 + 240))(a2, &v15); /*0x47ea43*/
      }
    }
  }
  return v3; /*0x47ea49*/
}



// ==== 0x0047EA90  CellClass::RemoveContent  this=CellClass  sig=csp ====
void __thiscall CellClass::RemoveContent(int this, _DWORD *a2, char a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  if ( !a2 ) /*0x47ea9d*/
    return; /*0x47ea9d*/
  if ( a3 ) /*0x47eaa9*/
    v4 = *(_DWORD **)(this + 232); /*0x47eaab*/
  else
    v4 = *(_DWORD **)(this + 228); /*0x47eab3*/
  if ( v4 == a2 ) /*0x47eabb*/
  {
    if ( a3 ) /*0x47eabf*/
      *(_DWORD *)(this + 232) = a2[12]; /*0x47eac4*/
    else
      *(_DWORD *)(this + 228) = a2[12]; /*0x47eacf*/
LABEL_14:
    a2[12] = 0; /*0x47eaf0*/
    goto LABEL_15; /*0x47eaf0*/
  }
  if ( v4 ) /*0x47ead9*/
  {
    while ( 1 ) /*0x47eadb*/
    {
      v5 = (_DWORD *)v4[12]; /*0x47eadb*/
      if ( v5 == a2 ) /*0x47eae0*/
        break; /*0x47eae0*/
      v4 = (_DWORD *)v4[12]; /*0x47eae2*/
      if ( !v5 ) /*0x47eae6*/
        goto LABEL_15; /*0x47eae6*/
    }
    v4[12] = a2[12]; /*0x47eaed*/
    goto LABEL_14; /*0x47eaed*/
  }
LABEL_15:
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 15 /*0x47eb0b*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 192))(a2) )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 ) /*0x47eb1f*/
    {
      v6 = *(__int16 *)(this + 36); /*0x47eb21*/
      v7 = *(__int16 *)(this + 38); /*0x47eb25*/
      v8 = *a2; /*0x47eb29*/
      v11 = 0; /*0x47eb2b*/
      v9 = (v6 << 8) + 128; /*0x47eb3c*/
      v10 = (v7 << 8) + 128; /*0x47eb50*/
    }
    else
    {
      v9 = a2[39]; /*0x47eb6e*/
      v8 = *a2; /*0x47eb72*/
      v10 = a2[40]; /*0x47eb77*/
      v11 = a2[41]; /*0x47eb85*/
    }
    (*(void (__thiscall **)(_DWORD *, int *))(v8 + 244))(a2, &v9); /*0x47eb54*/
  }
}



// ==== 0x0047EBA0  CellClass::FindBuilding  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::FindBuilding(CellClass *this, char a2)
{
  ObjectClass *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47eba8*/
    return 0; /*0x47eba8*/
  v2 = a2 ? this->altObject : this->firstObject;
  if ( !v2 ) /*0x47ebc2*/
    return 0; /*0x47ebd7*/
  while ( (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 11))(v2) != 1 ) /*0x47ebce*/
  {
    v2 = v2->nextObject; /*0x47ebd0*/
    if ( !v2 ) /*0x47ebd5*/
      return 0; /*0x47ebd5*/
  }
  return &v2->AbstractClass; /*0x47ebd9*/
}



// ==== 0x0047EBF0  PlacementList::FindByType  this=PlacementList  sig=csp ====
_DWORD *__thiscall PlacementList::FindByType(PlacementList *this, char a2)
{
  _DWORD *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47ebf8*/
    return 0; /*0x47ebf8*/
  v2 = (_DWORD *)(a2 ? *((_DWORD *)this + 58) : *((_DWORD *)this + 57));
  if ( !v2 ) /*0x47ec12*/
    return 0; /*0x47ec27*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 2 ) /*0x47ec1e*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47ec20*/
    if ( !v2 ) /*0x47ec25*/
      return 0; /*0x47ec25*/
  }
  return v2; /*0x47ec29*/
}



// ==== 0x0047EC40  WTFMode::FindObjectByType  this=WTFMode  sig=csp ====
_DWORD *__thiscall WTFMode::FindObjectByType(WTFMode *this, char a2)
{
  _DWORD *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47ec48*/
    return 0; /*0x47ec48*/
  v2 = (_DWORD *)(a2 ? this->q0E8 : this->q0E4);
  if ( !v2 ) /*0x47ec62*/
    return 0; /*0x47ec77*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 15 ) /*0x47ec6e*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47ec70*/
    if ( !v2 ) /*0x47ec75*/
      return 0; /*0x47ec75*/
  }
  return v2; /*0x47ec79*/
}



// ==== 0x0047EC90  BuildingPlacement::RenderBuildingPlacementPreview  this=CellClass  sig=csp ====
char __thiscall BuildingPlacement::RenderBuildingPlacementPreview(int this, _DWORD *a2, int *a3, char a4)
{
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  bool *v11; // edi
  int ClosestObjectCell; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned int v18; // [esp-34h] [ebp-64h]
  int *v19; // [esp-2Ch] [ebp-5Ch]
  int v20; // [esp-28h] [ebp-58h]
  int v21; // [esp-20h] [ebp-50h]
  char v22; // [esp+13h] [ebp-1Dh]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h] BYREF
  int v25; // [esp+20h] [ebp-10h]
  _DWORD v26[2]; // [esp+24h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  v5 = *(_DWORD *)(this + 300); /*0x47eca4*/
  v22 = 0; /*0x47ecb4*/
  if ( (v5 & 2) == 0 && (v5 & 4) == 0 ) /*0x47ecbc*/
    return 0; /*0x47efca*/
  v6 = *(_DWORD **)&stru_87F5F0.__pad_E12[1422]; /*0x47ecc2*/
  if ( (v5 & 2) == 0 ) /*0x47ecca*/
    v6 = *(_DWORD **)&stru_87F5F0.__pad_E12[1402]; /*0x47eccc*/
  v7 = -1; /*0x47ecd2*/
  if ( v6 && (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6) == 7 ) /*0x47ece3*/
    v7 = v6[415]; /*0x47ece5*/
  v8 = 15 * *(char *)(this + 283); /*0x47ecf5*/
  v23 = -1 - v8; /*0x47ecfa*/
  v9 = -2 - v8; /*0x47ed03*/
  if ( *(_BYTE *)(this + 284) ) /*0x47ed05*/
    v9 -= 10; /*0x47ed0f*/
  if ( (*(_BYTE *)(this + 300) & 2) != 0 /*0x47ed2d*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1422]) == 7 )
  {
    v10 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47ed48*/
    v26[0] = (*(__int16 *)(this + 36) << 8) + 128; /*0x47ed4e*/
    v26[1] = v10; /*0x47ed56*/
    GroundHeight = 0; /*0x47ed62*/
    GroundHeight = Cell::GetGroundHeight(v26); /*0x47ed6f*/
    if ( (unsigned __int8)Cell::IsPassable(v26) ) /*0x47ed79*/
    {
      if ( !stru_87F5F0.__pad_E12[1382] /*0x47eda4*/
        || !*(_DWORD *)&stru_87F5F0.__pad_E12[1422]
        || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1422]) != 7
        || !*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3672) )
      {
        v22 = 0; /*0x47edb0*/
        goto LABEL_43; /*0x47edb5*/
      }
      goto LABEL_42; /*0x47edaa*/
    }
    if ( !*(_BYTE *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3720) ) /*0x47edc8*/
    {
      if ( !stru_87F5F0.__pad_E12[1382] /*0x47eeb1*/
        || !*(_DWORD *)&stru_87F5F0.__pad_E12[1422]
        || (*(int (**)(void))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))() != 7
        || !(unsigned __int8)CellClass::IsPassable(
                               (int *)this,
                               v7,
                               *(int *)&stru_87F5F0.__pad_E12[1422],
                               (int)dword_A83D4C)
        || *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3672) && *(_DWORD *)(this + 236) == 1 )
      {
        goto LABEL_43; /*0x47eeb1*/
      }
      goto LABEL_42; /*0x47eeb1*/
    }
    v24 = 0; /*0x47edd3*/
    v25 = 0; /*0x47edd9*/
    if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ede7*/
    {
      while ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) != 2 ) /*0x47edf3*/
      {
        v11 = (bool *)*((_DWORD *)v11 + 12); /*0x47edf5*/
        if ( !v11 ) /*0x47edfa*/
          goto LABEL_25; /*0x47edfa*/
      }
    }
    else
    {
LABEL_25:
      ClosestObjectCell = Object::FindClosestObjectCell((Object *)this, &v24, 0, 0); /*0x47ee02*/
      if ( ClosestObjectCell ) /*0x47ee14*/
      {
        v11 = (bool *)ClosestObjectCell; /*0x47ee16*/
      }
      else if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ee2b*/
      {
        while ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) != 36 ) /*0x47ee37*/
        {
          v11 = (bool *)*((_DWORD *)v11 + 12); /*0x47ee39*/
          if ( !v11 ) /*0x47ee3e*/
            goto LABEL_31; /*0x47ee3e*/
        }
      }
      else
      {
LABEL_31:
        v11 = 0; /*0x47ee40*/
      }
      if ( !v11 ) /*0x47ee44*/
        goto LABEL_43; /*0x47ee44*/
    }
    if ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) == 6 /*0x47ee61*/
      && (unsigned __int8)BuildingClass::CanAcceptType(v11, *(int *)&stru_87F5F0.__pad_E12[1422], (int)dword_A83D4C) )
    {
LABEL_42:
      v22 = 1; /*0x47eeb3*/
    }
  }
LABEL_43:
  if ( (*(_BYTE *)(this + 300) & 4) != 0 )
  {
    v13 = a2[1]; /*0x47eee4*/
    v24 = *a2 + 30; /*0x47eef7*/
    v25 = v23 + v13; /*0x47ef00*/
    DrawToSurfaceSHP(
      (int)g_DSurface_Hidden_2,
      *(int *)&stru_87F5F0.__pad_58[124],
      stru_8A0390.health,
      1u,
      &v24,
      a3,
      a4 != 0 ? 67072 : 132608,
      0,
      v9,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    if ( v22 )
    {
      v14 = a2[1]; /*0x47ef30*/
      v24 = *a2 + 30; /*0x47ef43*/
      v21 = v9; /*0x47ef4b*/
      v25 = v23 + v14; /*0x47ef4c*/
      v20 = a4 != 0 ? 67072 : 132608;
      v19 = a3; /*0x47ef5c*/
      v18 = 0; /*0x47ef5e*/
    }
    else
    {
      v15 = v23 + a2[1]; /*0x47ef70*/
      v21 = v9; /*0x47ef7e*/
      v20 = a4 != 0 ? 67072 : 132608;
      v16 = *(unsigned __int8 *)(this + 284); /*0x47ef86*/
      v24 = *a2 + 30; /*0x47ef8c*/
      v25 = v15; /*0x47ef94*/
      v19 = a3; /*0x47ef9c*/
      v18 = v16 + 2; /*0x47efa6*/
    }
    DrawToSurfaceSHP( /*0x47efb4*/
      (int)g_DSurface_Hidden_2,
      *(int *)&stru_87F5F0.__pad_58[124],
      stru_8A0390.health,
      v18,
      &v24,
      v19,
      v20,
      0,
      v21,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  return v22; /*0x47efbd*/
}



// ==== 0x0047EFE0  RenderFogOfWar  this=CellClass  sig=csp ====
unsigned int __stdcall sub_47EFE0(unsigned int *a1, int *a2, unsigned int a3)
{
  int *FoundationSize; // eax
  int v5; // esi
  signed int v6; // ecx
  unsigned int result; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // esi
  signed int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edi
  unsigned __int8 v17; // dl
  unsigned __int8 *v19; // esi
  char **v20; // edi
  int v21; // edx
  int v22; // ebx
  int v23; // ecx
  bool v24; // cc
  int v25[4]; // [esp+0h] [ebp-34h] BYREF
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h]
  int v28; // [esp+18h] [ebp-1Ch]
  signed int v29; // [esp+20h] [ebp-14h]
  signed int v30; // [esp+24h] [ebp-10h]
  signed int v31; // [esp+28h] [ebp-Ch]
  signed int v32; // [esp+2Ch] [ebp-8h]
  char **v33; // [esp+30h] [ebp-4h]
  int v34; // [esp+3Ch] [ebp+8h]
  int v35; // [esp+3Ch] [ebp+8h]
  int v36; // [esp+3Ch] [ebp+8h]
  int v37; // [esp+3Ch] [ebp+8h]
  signed int v38; // [esp+40h] [ebp+Ch]
  int v39; // [esp+40h] [ebp+Ch]
  int SubFile; // [esp+44h] [ebp+10h]
  unsigned __int8 *v41; // [esp+44h] [ebp+10h]

  if ( !byte_89E7C5 ) /*0x47efed*/
  {
    byte_89E7C5 = 1; /*0x47eff6*/
    dword_89E794 = SearchMIXFile(aShroudShp, 0); /*0x47f009*/
    dword_89E790 = SearchMIXFile(aFogShp, 0); /*0x47f013*/
  }
  if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 ) /*0x47f022*/
    v33 = (char **)dword_89E790; /*0x47f02a*/
  else
    v33 = (char **)dword_89E794; /*0x47f035*/
  FoundationSize = Building::GetFoundationSize(v25, a3); /*0x47f046*/
  v26 = *FoundationSize; /*0x47f053*/
  v5 = a2[1]; /*0x47f059*/
  v27 = FoundationSize[1]; /*0x47f05c*/
  v28 = FoundationSize[2]; /*0x47f062*/
  v6 = a1[1]; /*0x47f065*/
  result = v27 + v6 + FoundationSize[3]; /*0x47f06d*/
  v30 = result; /*0x47f074*/
  if ( (int)result >= v5 + 1 ) /*0x47f077*/
  {
    v38 = v5 + a2[3]; /*0x47f084*/
    result = v38; /*0x47f080*/
    if ( v6 < v38 ) /*0x47f087*/
    {
      result = *a1; /*0x47f08d*/
      v8 = v26 + *a1 + v28; /*0x47f097*/
      v34 = *a2; /*0x47f09b*/
      v29 = v8; /*0x47f0a1*/
      if ( v8 >= v34 + 1 ) /*0x47f0a4*/
      {
        v9 = v34; /*0x47f0ad*/
        v31 = v34 + a2[2]; /*0x47f0b4*/
        if ( (int)result < v31 ) /*0x47f0b7*/
        {
          v35 = v5; /*0x47f0c0*/
          if ( v5 <= v6 + v27 ) /*0x47f0c8*/
            v35 = v6 + v27; /*0x47f0ca*/
          v10 = v35 - v6 - v27; /*0x47f0d5*/
          v32 = v38; /*0x47f0dc*/
          if ( v38 >= v30 ) /*0x47f0df*/
            v32 = v30; /*0x47f0e1*/
          if ( v9 <= (int)(result + v26) ) /*0x47f0ec*/
            v9 = result + v26; /*0x47f0ee*/
          v11 = v31; /*0x47f0f0*/
          v12 = v9 - result - v26; /*0x47f0f7*/
          if ( v31 >= v29 ) /*0x47f0fe*/
          {
            v39 = v29; /*0x47f105*/
            v11 = v29; /*0x47f108*/
          }
          else
          {
            v39 = v31; /*0x47f100*/
          }
          v31 = v28 + v9 - v11; /*0x47f118*/
          v30 = v9 + *((_DWORD *)dword_87E8A4 + 10) - v11; /*0x47f12e*/
          SubFile = MixFileClass::GetSubFile(v33, a3); /*0x47f142*/
          result = StreamClass::ReadAndSeek((int)dword_87E8A4, v9, v35 - dword_886FA4); /*0x47f14c*/
          v13 = v32 - v35; /*0x47f15b*/
          v14 = (v32 - v35) * *((_DWORD *)dword_87E8A4 + 10); /*0x47f16d*/
          v41 = (unsigned __int8 *)(v12 + v28 * v10 + SubFile); /*0x47f172*/
          v33 = (char **)result; /*0x47f178*/
          v15 = dword_87E8A4; /*0x47f18a*/
          if ( result + 2 * (v14 + v39 + 0x7FFFFFFF * v9) + 4 < *((_DWORD *)dword_87E8A4 + 7) ) /*0x47f193*/
          {
            v29 = v32 - v35; /*0x47f20d*/
            v37 = v39 - v9; /*0x47f212*/
            v19 = v41; /*0x47f215*/
            v20 = v33; /*0x47f218*/
            v21 = v13; /*0x47f21b*/
            v22 = 2 * v30; /*0x47f221*/
            do /*0x47f242*/
            {
              v23 = v37; /*0x47f223*/
              do /*0x47f23a*/
              {
                result = *v19++; /*0x47f228*/
                if ( result != 254 ) /*0x47f231*/
                  *(_WORD *)v20 = result; /*0x47f233*/
                v20 = (char **)((char *)v20 + 2); /*0x47f236*/
                v24 = v23-- <= 1; /*0x47f239*/
              }
              while ( !v24 ); /*0x47f23a*/
              v19 += v31; /*0x47f23c*/
              v20 = (char **)((char *)v20 + v22); /*0x47f23f*/
              v24 = v21-- <= 1; /*0x47f241*/
            }
            while ( !v24 ); /*0x47f242*/
          }
          else if ( v35 < v32 ) /*0x47f19d*/
          {
            v36 = v32 - v35; /*0x47f1a3*/
            do /*0x47f1ff*/
            {
              if ( v9 < v39 ) /*0x47f1ab*/
              {
                v16 = v39 - v9; /*0x47f1af*/
                do /*0x47f1db*/
                {
                  v17 = *v41; /*0x47f1b4*/
                  if ( *v41++ != 0xFE ) /*0x47f1b7*/
                  {
                    *(_WORD *)result = v17; /*0x47f1c4*/
                    v15 = dword_87E8A4; /*0x47f1c7*/
                  }
                  result += 2; /*0x47f1d0*/
                  if ( result >= v15[7] ) /*0x47f1d5*/
                    result -= v15[8]; /*0x47f1d7*/
                  --v16; /*0x47f1da*/
                }
                while ( v16 ); /*0x47f1db*/
              }
              result += 2 * v30; /*0x47f1e6*/
              v41 += v31; /*0x47f1f0*/
              if ( result >= v15[7] ) /*0x47f1f3*/
                result -= v15[8]; /*0x47f1f5*/
              --v36; /*0x47f1fc*/
            }
            while ( v36 ); /*0x47f1ff*/
          }
        }
      }
    }
  }
  return result; /*0x47f204*/
}



// ==== 0x0047F250  RenderFogOfWarOverlay  this=CellClass  sig=csp ====
_WORD *__stdcall RenderFogOfWarOverlay(int a1, int *a2, unsigned int a3)
{
  int *FoundationSizeBuilding; // eax
  int v5; // ebp
  int v6; // esi
  int v7; // edx
  _WORD *result; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // edx
  unsigned __int8 *v17; // edi
  int v18; // esi
  unsigned __int8 v19; // bl
  __int16 v20; // cx
  int v21; // ecx
  unsigned __int8 *v22; // esi
  int v23; // edi
  unsigned __int8 v24; // dl
  int v25; // ecx
  bool v26; // zf
  int v27; // [esp+4h] [ebp-28h]
  int v28; // [esp+4h] [ebp-28h]
  _WORD *v29; // [esp+8h] [ebp-24h]
  int v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h]
  int v33[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+30h] [ebp+4h]
  _WORD *v35; // [esp+30h] [ebp+4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+30h] [ebp+4h]
  _WORD *v38; // [esp+34h] [ebp+8h]
  int v39; // [esp+34h] [ebp+8h]
  int SubFileMixFileClass; // [esp+38h] [ebp+Ch]
  unsigned __int8 *v41; // [esp+38h] [ebp+Ch]

  if ( !byte_89E7C6 ) /*0x47f25a*/
  {
    byte_89E7C6 = 1; /*0x47f263*/
    dword_89E760 = SearchMIXFile(aFogShp, 0); /*0x47f26f*/
  }
  FoundationSizeBuilding = Building::GetFoundationSize(v33, a3); /*0x47f288*/
  v31 = *FoundationSizeBuilding; /*0x47f293*/
  v5 = FoundationSizeBuilding[1]; /*0x47f297*/
  v6 = a2[1]; /*0x47f29a*/
  v32 = FoundationSizeBuilding[2]; /*0x47f2a3*/
  v7 = *(_DWORD *)(a1 + 4); /*0x47f2ae*/
  result = (_WORD *)(v5 + v7 + FoundationSizeBuilding[3]); /*0x47f2b3*/
  v29 = result; /*0x47f2b7*/
  if ( (int)result >= v6 + 1 )
  {
    v38 = (_WORD *)(v6 + a2[3]); /*0x47f2c8*/
    result = v38; /*0x47f2c4*/
    if ( v7 < (int)v38 )
    {
      result = *(_WORD **)a1; /*0x47f2d2*/
      v9 = v31 + *(_DWORD *)a1 + v32; /*0x47f2de*/
      v34 = *a2; /*0x47f2e2*/
      if ( v9 >= *a2 + 1 )
      {
        v10 = a2[2]; /*0x47f2ef*/
        v11 = *a2; /*0x47f2f2*/
        v27 = v34 + v10; /*0x47f2fa*/
        if ( (int)result < v34 + v10 )
        {
          v12 = v7 + v5; /*0x47f304*/
          if ( v6 > v7 + v5 ) /*0x47f309*/
            v12 = v6; /*0x47f30b*/
          v13 = v12 - v7 - v5; /*0x47f315*/
          v35 = v38; /*0x47f31d*/
          if ( (int)v38 >= (int)v29 ) /*0x47f321*/
            v35 = v29; /*0x47f323*/
          v14 = (int)result + v31; /*0x47f32b*/
          if ( v11 > (int)result + v31 ) /*0x47f330*/
            v14 = v11; /*0x47f332*/
          v15 = v14 - (_DWORD)result - v31; /*0x47f33c*/
          if ( v27 < v9 ) /*0x47f344*/
            v9 = v27; /*0x47f346*/
          v39 = v9; /*0x47f350*/
          v28 = v32 + v14 - v9; /*0x47f362*/
          v30 = v14 + *((_DWORD *)dword_87E8A4 + 10) - v9; /*0x47f373*/
          SubFileMixFileClass = MixFileClass::GetSubFile((char **)dword_89E760, a3); /*0x47f38d*/
          result = (_WORD *)StreamClass::ReadAndSeek((int)dword_87E8A4, v14, v12 - dword_886FA4); /*0x47f397*/
          v16 = dword_87E8A4; /*0x47f3a5*/
          v41 = (unsigned __int8 *)(v15 + v32 * v13 + SubFileMixFileClass); /*0x47f3b4*/
          if ( (unsigned int)&result[((_DWORD)v35 - v12) * *((_DWORD *)dword_87E8A4 + 10) + 2 + v39 + 0x7FFFFFFF * v14] < *((_DWORD *)dword_87E8A4 + 7) )
          {
            if ( v12 < (int)v35 )
            {
              v22 = v41; /*0x47f48c*/
              v37 = (int)v35 - v12; /*0x47f490*/
              do
              {
                if ( v14 < v39 )
                {
                  v23 = v39 - v14; /*0x47f4a0*/
                  do
                  {
                    v24 = *v22++; /*0x47f4a2*/
                    if ( v24 <= 0x7Fu )
                    {
                      if ( *result == 127 )
                      {
                        *result = v24; /*0x47f4bb*/
                      }
                      else
                      {
                        v25 = (unsigned __int16)*result + v24 - 127; /*0x47f4d0*/
                        *result = v25 <= 0 ? 0 : v25;
                      }
                    }
                    ++result; /*0x47f4e1*/
                    --v23; /*0x47f4e4*/
                  }
                  while ( v23 );
                }
                v22 += v28; /*0x47f4eb*/
                v26 = v37 == 1; /*0x47f4ed*/
                result += v30; /*0x47f4ee*/
                --v37; /*0x47f4f1*/
              }
              while ( !v26 );
            }
          }
          else if ( v12 < (int)v35 )
          {
            v17 = v41; /*0x47f3ed*/
            v36 = (int)v35 - v12; /*0x47f3f1*/
            do
            {
              if ( v14 < v39 )
              {
                v18 = v39 - v14; /*0x47f401*/
                do
                {
                  v19 = *v17++; /*0x47f403*/
                  if ( v19 <= 0x7Fu )
                  {
                    if ( *result == 127 )
                    {
                      v20 = v19; /*0x47f41b*/
                    }
                    else
                    {
                      v21 = (unsigned __int16)*result + v19 - 127; /*0x47f42f*/
                      v20 = v21 <= 0 ? 0 : v21;
                    }
                    *result = v20; /*0x47f43d*/
                    v16 = dword_87E8A4; /*0x47f440*/
                  }
                  if ( (unsigned int)++result >= v16[7] ) /*0x47f44e*/
                    result = (_WORD *)((char *)result - v16[8]); /*0x47f450*/
                  --v18; /*0x47f453*/
                }
                while ( v18 );
              }
              v17 += v28; /*0x47f45a*/
              result += v30; /*0x47f45c*/
              if ( (unsigned int)result >= v16[7] ) /*0x47f464*/
                result = (_WORD *)((char *)result - v16[8]); /*0x47f466*/
              --v36; /*0x47f46e*/
            }
            while ( v36 );
          }
        }
      }
    }
  }
  return result; /*0x47f478*/
}



// ==== 0x0047F510  TacticalClass::DrawBuildingPlacement  this=IUnknown  sig=csp ====
void __thiscall TacticalClass::DrawBuildingPlacement(int this, _DWORD *a2, int *a3)
{
  _BYTE *v4; // edi
  int *v5; // eax
  int v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  unsigned __int8 v12; // cl
  char v13; // al
  TacticalClass *v14; // ecx
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)); /*0x47f52c*/
  v15 = 15 * *(char *)(this + 283); /*0x47f534*/
  v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, &v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = a2[1] + v5[1]; /*0x47f55e*/
  v8 = a3; /*0x47f560*/
  v9 = v6 + *a2; /*0x47f564*/
  v10 = a3[1]; /*0x47f568*/
  v17 = v9 - *a3; /*0x47f571*/
  LOBYTE(v9) = *(_BYTE *)(this + 320); /*0x47f575*/
  v11 = v7 - v10; /*0x47f57b*/
  v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = *(_BYTE *)(this + 286); /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !*(_DWORD *)(this + 52) ) /*0x47f5a8*/
    TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(a2) = *(_BYTE *)(this + 286); /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(a2) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(this + 52),
      v16,
      (unsigned __int8)a2 + *(__int16 *)(v16 + 6) / 2,
      &v17,
      v8,
      17921,
      0,
      -2 - v15,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    return; /*0x47f632*/
  }
  if ( !v4[692] ) /*0x47f649*/
    goto LABEL_9; /*0x47f649*/
  v14 = *(TacticalClass **)(this + 64); /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a3, (int *)&a2) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        (int)g_DSurface_Hidden_2,
        *(_DWORD *)(this + 52),
        (int)a3,
        (unsigned int)a2,
        &v17,
        v8,
        17921,
        0,
        -2 - v15,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
  }
}



// ==== 0x0047F6A0  BuildingClass::Draw_0  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::Draw_0(int this, _DWORD *a2, int *a3)
{
  int result; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int *v10; // ebp
  int v11; // eax
  int v12; // edi
  unsigned int v13; // ecx
  _DWORD *v14; // ebx
  int v15; // ecx
  int v16; // edx
  char v17; // bl
  int v18; // edi
  BuildingClass *v19; // ecx
  unsigned int v20; // [esp-34h] [ebp-58h]
  int *v21; // [esp-2Ch] [ebp-50h]
  int v22; // [esp-20h] [ebp-44h]
  int v23; // [esp-1Ch] [ebp-40h]
  int v24; // [esp-18h] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-3Ch]
  int v26; // [esp+10h] [ebp-14h] BYREF
  int v27[2]; // [esp+14h] [ebp-10h] BYREF
  char v28[8]; // [esp+1Ch] [ebp-8h] BYREF
  int v29; // [esp+28h] [ebp+4h]

  result = *(_DWORD *)(this + 68); /*0x47f6a9*/
  if ( result != 167 && result != 178 )
  {
    v26 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result); /*0x47f6d2*/
    v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, v28); /*0x47f6d6*/
    v6 = *v5 + *a2; /*0x47f6ef*/
    v7 = *(char *)(this + 283); /*0x47f6f1*/
    v8 = (*(_DWORD *)(this + 320) >> 7) & 1; /*0x47f6fb*/
    v9 = a2[1] + v5[1]; /*0x47f6fe*/
    v10 = a3; /*0x47f700*/
    v27[0] = v6; /*0x47f704*/
    v27[1] = v9 - a3[1]; /*0x47f713*/
    v11 = *(_DWORD *)(this + 52); /*0x47f717*/
    v12 = 15 * (v7 + 4 * v8); /*0x47f71a*/
    v29 = v12; /*0x47f722*/
    v27[0] = v6 - *a3; /*0x47f728*/
    if ( !v11 ) /*0x47f72c*/
      TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f748*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 156))(v26); /*0x47f755*/
    if ( *(char *)(this + 320) >= 0 )
    {
      if ( *(_BYTE *)(v26 + 681) )
      {
        result = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x47f863*/
        if ( result == -1 ) /*0x47f86b*/
          return result; /*0x47f86b*/
        v14 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * result); /*0x47f87f*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f877*/
        {
          v15 = v14[58]; /*0x47f8c3*/
          v16 = *(_DWORD *)(v14[56] + 660) /*0x47f8ce*/
              + v14[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
              + *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % (v14[59] / 4);
        }
        else
        {
          v16 = *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % v14[58]; /*0x47f8e3*/
          v15 = *(_DWORD *)(v14[56] + 660); /*0x47f8ef*/
        }
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * (v15 + v16)) + 156))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * (v15 + v16))); /*0x47f902*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f908*/
          return DrawToSurfaceSHP( /*0x47f952*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[112],
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   0,
                   1000,
                   0,
                   dword_AA105C[*(unsigned __int8 *)(this + 284)],
                   0,
                   0,
                   0);
        v24 = 1000; /*0x47f960*/
      }
      else
      {
        if ( *(_BYTE *)(v26 + 680) ) /*0x47f96a*/
          return DrawToSurfaceSHP( /*0x47f9c1*/
                   (int)g_DSurface_Hidden_2,
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4
                                                                          * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                             + 780),
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   2,
                   *(__int16 *)(this + 266),
                   0,
                   0,
                   0,
                   0,
                   0);
        if ( *(_DWORD *)(v26 + 660) != 126 )
        {
          v17 = *(_BYTE *)(v26 + 691); /*0x47fa69*/
          v18 = v17 != 0 ? 0 : -15;
          if ( *(_BYTE *)(v26 + 693) ) /*0x47fa81*/
            v18 = 0; /*0x47fa8b*/
          if ( *(_BYTE *)(v26 + 682) )
          {
            v25 = *(__int16 *)(this + 268); /*0x47fab4*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fabc*/
            v21 = v10; /*0x47fac8*/
            v20 = 0; /*0x47faca*/
          }
          else if ( *(_BYTE *)(v26 + 692) )
          {
            v19 = *(BuildingClass **)(this + 64); /*0x47fadb*/
            if ( !v19 ) /*0x47fae0*/
              return result; /*0x47fae0*/
            result = BuildingClass::GetPlacementCoords(v19, &v26, &a3); /*0x47faf0*/
            if ( !(_BYTE)result ) /*0x47faf7*/
              return result; /*0x47faf7*/
            v25 = *(__int16 *)(this + 268); /*0x47fb21*/
            result = v26; /*0x47fb22*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fb2a*/
            v21 = v10; /*0x47fb36*/
            v20 = (unsigned int)a3; /*0x47fb38*/
          }
          else
          {
            v25 = *(__int16 *)(this + 268); /*0x47fb58*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fb60*/
            v21 = v10; /*0x47fb74*/
            v20 = *(unsigned __int8 *)(this + 286); /*0x47fb76*/
          }
          return DrawToSurfaceSHP( /*0x47fb81*/
                   (int)g_DSurface_Hidden_2,
                   *(_DWORD *)(this + 52),
                   result,
                   v20,
                   v27,
                   v21,
                   19968,
                   0,
                   v22,
                   v23,
                   v25,
                   0,
                   0,
                   0,
                   0,
                   0);
        }
        if ( *(_BYTE *)(this + 284) ) /*0x47f9d3*/
          return DrawToSurfaceSHP( /*0x47fa27*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[112],
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   0,
                   *(__int16 *)(this + 268),
                   0,
                   dword_AA105C[*(unsigned __int8 *)(this + 284)],
                   0,
                   30,
                   -2);
        v24 = *(__int16 *)(this + 268); /*0x47fa3c*/
      }
      return DrawToSurfaceSHP( /*0x47fa64*/
               (int)g_DSurface_Hidden_2,
               *(int *)&stru_87F5F0.__pad_58[112],
               result,
               *(unsigned __int8 *)(this + 286),
               v27,
               v10,
               19968,
               0,
               -2 - v12,
               0,
               v24,
               0,
               0,
               0,
               0,
               0);
    }
    if ( *(_DWORD *)(this + 100) != *(_DWORD *)&stru_A8EB00.?[416] /*0x47f7ab*/
      || *(_BYTE *)(this + 280) != stru_87F5F0.__pad_E12[1342]
      || *(_DWORD *)(this + 104) != *v10
      || *(_DWORD *)(this + 108) != v10[1]
      || *(_DWORD *)(this + 112) != v10[2]
      || *(_DWORD *)(this + 116) != v10[3] )
    {
      v13 = *(unsigned __int8 *)(this + 286); /*0x47f7b3*/
      if ( !*(_BYTE *)(this + 286) || v13 == 9 ) /*0x47f7c0*/
        v13 += dword_81CC30[*(_BYTE *)(this + 36) & 3 | (4 * (*(_BYTE *)(this + 38) & 3))]; /*0x47f7d3*/
      DrawToSurfaceSHP( /*0x47f80b*/
        (int)g_DSurface_Hidden_2,
        *(_DWORD *)(this + 52),
        result,
        v13,
        v27,
        v10,
        19968,
        0,
        -2 - v12,
        0,
        *(__int16 *)(this + 270),
        0,
        0,
        0,
        0,
        0);
      *(_DWORD *)(this + 100) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x47f818*/
      *(_DWORD *)(this + 104) = DSurface_ViewBounds.field_0; /*0x47f821*/
      *(_DWORD *)(this + 108) = DSurface_ViewBounds.field_4; /*0x47f829*/
      *(_DWORD *)(this + 112) = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x47f832*/
      result = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f835*/
      *(_DWORD *)(this + 116) = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f83a*/
      *(_BYTE *)(this + 280) = stru_87F5F0.__pad_E12[1342]; /*0x47f843*/
    }
  }
  return result; /*0x47f828*/
}



// ==== 0x0047FB90  House::GetStartCoords  this=House  sig=csp ====
_DWORD *__thiscall House::GetStartCoords(House *this, _DWORD *a2)
{
  int v3; // ecx
  _BYTE *v4; // ebp
  int BuildingByTiberiumType; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // ecx
  House *v9; // eax
  BuildingClass *v10; // ecx
  int v11; // kr08_4
  int v12; // kr00_4
  _DWORD *v13; // eax
  int v14; // esi
  int v16; // edi
  int v17; // esi
  _DWORD *FoundationSize; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // eax
  House *v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = *(_DWORD *)&this->__pad_2D[23]; /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  v24 = (unsigned __int8)this->__pad_7C[162]; /*0x47fbb5*/
  v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3); /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( this->__pad_7C[160] ) /*0x47fbe5*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc36*/
                     + 4
                     * (v6[58]
                      + *(_DWORD *)(v6[56] + 660)
                      + v6[59] / 4 * ((unsigned __int8)this->__pad_7C[160] - 1)
                      + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % (v6[59] / 4)));
      v23 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc6f*/
                   + 4
                   * (*(_DWORD *)(v6[56] + 660)
                    + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % v6[58]));
    v9 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (House *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47fca7*/
LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = *(BuildingClass **)&this->__pad_2D[19]; /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (int *)&v23, &v24); /*0x47fc9b*/
LABEL_12:
  v11 = (*(__int16 *)&this->__pad_C[24] << 8) + 128; /*0x47fcb1*/
  v12 = (*(__int16 *)&this->__pad_C[26] << 8) + 128; /*0x47fce0*/
  v27[2] = 0; /*0x47fce2*/
  v27[0] = (v11 / 256) << 8; /*0x47fd02*/
  v27[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v27, &v25); /*0x47fd0a*/
  v13 = BuildingClass::CalcDrawPos((BuildingClass *)this, v27); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v26; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v26 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
LABEL_13:
    *a2 = 0; /*0x47fd43*/
    a2[1] = 0; /*0x47fd53*/
    a2[2] = 0; /*0x47fd56*/
    a2[3] = 0; /*0x47fd59*/
    return a2; /*0x47fd63*/
  }
  House::Constructor(v23); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    v24 = 0; /*0x47fd75*/
  v16 = v25 - *(__int16 *)v23->House_field_0x2 / 2; /*0x47fd93*/
  v17 = v26 - *(__int16 *)&v23->House_field_0x2[2] / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(v27, v24); /*0x47fda7*/
  v19 = v16 + *FoundationSize; /*0x47fdb1*/
  v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  v21 = FoundationSize[2]; /*0x47fdb9*/
  v22 = FoundationSize[3]; /*0x47fdbc*/
  *a2 = v19; /*0x47fdc1*/
  a2[1] = v20; /*0x47fdc3*/
  a2[2] = v21; /*0x47fdc6*/
  a2[3] = v22; /*0x47fdc9*/
  return a2; /*0x47fd5c*/
}



// ==== 0x0047FDE0  BuildingClass::GetPlacementRect  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::GetPlacementRect(BuildingClass *this, int *a2)
{
  int v3; // eax
  _BYTE *v4; // esi
  __int16 *v5; // ebx
  unsigned int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  unsigned __int8 v12; // al
  int v13; // edi
  int v14; // esi
  _DWORD *FoundationSize; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // eax
  _DWORD v20[3]; // [esp+Ch] [ebp-24h] BYREF
  int v21; // [esp+18h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-14h]
  _DWORD v23[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = this->?[2]; /*0x47fde8*/
  if ( v3 != -1 /*0x47fe07*/
    && (v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3),
        (v5 = (__int16 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4)) != 0) )
  {
    LOBYTE(v20[0]) = BYTE2(this->?); /*0x47fe31*/
    if ( v4[682] ) /*0x47fe35*/
      LOBYTE(v20[0]) = 0; /*0x47fe3f*/
    v7 = LOBYTE(v20[0]) + v5[3] / 2; /*0x47fe67*/
    Coord::Subtract( /*0x47fe9d*/
      (Coord *)v20,
      (((SLOWORD(this->?) << 8) + 128) / 256) << 8,
      (((SHIWORD(this->?) << 8) + 128) / 256) << 8,
      0);
    v23[0] = v20[0]; /*0x47feae*/
    v23[1] = v20[1]; /*0x47feb2*/
    v23[2] = v20[2]; /*0x47febe*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x47feca*/
    v8 = BuildingClass::CalcDrawPos(this, v20); /*0x47fed6*/
    v21 += *v8; /*0x47fee7*/
    v9 = v8[1]; /*0x47feeb*/
    LOBYTE(v8) = this->?; /*0x47feee*/
    v10 = v9 + v22; /*0x47fef4*/
    v11 = v21 - 30; /*0x47fef6*/
    v22 += v9; /*0x47fef9*/
    v21 -= 30; /*0x47feff*/
    if ( (char)v8 < 0 ) /*0x47ff03*/
    {
      v12 = BYTE2(this->?); /*0x47ff05*/
      if ( v12 >= 9u && v12 <= 0x11u ) /*0x47ff11*/
      {
        v11 -= 15; /*0x47ff13*/
        v10 += 7; /*0x47ff16*/
        v21 = v11; /*0x47ff19*/
        v22 = v10; /*0x47ff1d*/
      }
    }
    v13 = v11 - v5[1] / 2; /*0x47ff3a*/
    v14 = v10 - v5[2] / 2; /*0x47ff41*/
    FoundationSize = Building::GetFoundationSize(v23, v7); /*0x47ff43*/
    v16 = v13 + *FoundationSize; /*0x47ff4d*/
    v17 = v14 + FoundationSize[1]; /*0x47ff53*/
    v18 = FoundationSize[2]; /*0x47ff55*/
    v19 = FoundationSize[3]; /*0x47ff58*/
    *a2 = v16; /*0x47ff5e*/
    a2[1] = v17; /*0x47ff60*/
    a2[2] = v18; /*0x47ff63*/
    a2[3] = v19; /*0x47ff66*/
    return a2; /*0x47ff69*/
  }
  else
  {
    *a2 = 0; /*0x47fe17*/
    a2[1] = 0; /*0x47fe19*/
    a2[2] = 0; /*0x47fe1c*/
    a2[3] = 0; /*0x47fe1f*/
    return a2; /*0x47fe09*/
  }
}



// ==== 0x0047FF80  CellClass::GetScreenRect  this=CellClass  sig=csp ====
int *__thiscall CellClass::GetScreenRect(CellClass *this, int *a2)
{
  int v3; // kr04_4
  int v4; // kr00_4
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int height; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v3 = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffab*/
  v4 = (SHIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffb8*/
  v19 = 0; /*0x47ffba*/
  v18 = (v4 / 256) << 8; /*0x47ffc4*/
  v17 = (v3 / 256) << 8; /*0x47ffde*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v17, &v15); /*0x47ffe2*/
  v5 = 3 * this->level; /*0x47fff8*/
  v15 -= 30; /*0x47fffe*/
  v6 = v15; /*0x480002*/
  v7 = 30; /*0x480014*/
  v16 += (int)DSurface_ViewBounds.field_4 - 5 * v5; /*0x480019*/
  v8 = v16; /*0x48001d*/
  v9 = *(_DWORD *)&this->__pad_28[16]; /*0x48001f*/
  if ( v9 == 0xFFFF ) /*0x480027*/
  {
    *a2 = v15; /*0x48002f*/
    a2[1] = v8; /*0x480031*/
    a2[2] = 60; /*0x480037*/
    a2[3] = 30; /*0x48003a*/
    return a2; /*0x480041*/
  }
  if ( v9 < 0 || v9 >= *(int *)&stru_A8EB00.?[340] )
  {
    Debug::Log(); /*0x4800e0*/
  }
  else
  {
    height = (unsigned __int8)this->height; /*0x480065*/
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9) + 156))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9)); /*0x48006b*/
    if ( !v12 ) /*0x480073*/
    {
      *a2 = v17; /*0x480082*/
      a2[1] = v18; /*0x480089*/
      a2[2] = v19; /*0x480090*/
      a2[3] = v20; /*0x480097*/
      return a2; /*0x48009d*/
    }
    if ( height >= *v12 * v12[1] - 1 ) /*0x4800a9*/
      height = *v12 * v12[1] - 1; /*0x4800ab*/
    v13 = v12[height + 4]; /*0x4800ad*/
    if ( (*(_BYTE *)(v13 + 36) & 1) != 0 )
    {
      v14 = *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24) < 0 ? 0 : *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24);
      v8 -= v14; /*0x4800ca*/
      v7 = v14 + 30; /*0x4800cc*/
    }
  }
  *a2 = v6; /*0x4800f3*/
  a2[1] = v8; /*0x4800f5*/
  a2[2] = 60; /*0x4800fb*/
  a2[3] = v7; /*0x4800fe*/
  return a2; /*0x480034*/
}



// ==== 0x00470C00  MPCooperative::startGame  this=CampaignEndScoreClass  sig=csp ====
_DWORD *__thiscall MPCooperative::startGame(MPCooperative *this)
{
  this->MPCooperative_field_0x0 = &CampaignEndScoreClass::`vftable'; /*0x470c04*/
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return &this->MPCooperative_field_0x0; /*0x470c20*/
}



// ==== 0x00470C30  CampaignEndScoreClass::method_470C30  this=CampaignEndScoreClass  sig=csp ====
void __thiscall sub_470C30(CampaignEndScoreClass *this)
{
  this->m_0 = (int)&CampaignEndScoreClass::`vftable'; /*0x470c30*/
}



// ==== 0x00470C40  sub_470C40  this=-  sig=ida-proto ====
LRESULT __fastcall sub_470C40(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x470c58*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x470c62*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x470c7b*/
}



// ==== 0x00470D30  CampaignScreen::Init  this=CampaignScreen  sig=csp ====
int __userpurge CampaignScreen::Init@<eax>(
        CampaignScreen *this,
        HWND hWnd,
        unsigned int wParam,
        WPARAM a4,
        unsigned int a5)
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
          SendDlgItemMessageA((HWND)this, 1835, 0x4D5u, 0, 29); /*0x4713de*/
      }
      else if ( hWnd == (HWND)1260 ) /*0x471393*/
      {
        SendDlgItemMessageA((HWND)this, 1835, 0x4D3u, 0, 0); /*0x4713ca*/
      }
      else if ( hWnd == (HWND)1261 ) /*0x471396*/
      {
        Screen::Capture(1, 0, wParam, (int)v5); /*0x47139c*/
        ShowWindow((HWND)this, 0); /*0x4713a4*/
        Dialog::InitWindow((HWND)this, 1); /*0x4713ad*/
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
      Dialog::DrawBackground((Dialog *)this); /*0x471343*/
      Dialog::StopBink((Dialog *)this); /*0x47134a*/
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
      LOWORD(v56) = *(_WORD *)v21; /*0x471034*/
      BYTE2(v56) = *(_BYTE *)(v21 + 2); /*0x47103c*/
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



// ==== 0x00471420  CampaignScore::InitScoreScreenData  this=CampaignScore  sig=csp ====
void __thiscall CampaignScore::InitScoreScreenData(
        CampaignScore *this,
        int a2,
        int Block,
        _BYTE *a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        wchar_t *Source,
        wchar_t *a12)
{
  int v12; // ebx
  int v13; // ebp
  signed int v14; // esi
  int *v15; // eax
  size_t v16; // edx
  CampaignScore *NeedsSaveOrLink; // esi
  ObjectClass *v18; // [esp+0h] [ebp-8h]
  FileSystem *v19; // [esp+0h] [ebp-8h]

  dword_89E020 = a6; /*0x471430*/
  wcscpy(&word_89E0A4, Source); /*0x471435*/
  v14 = dword_89E020; /*0x47143a*/
  if ( (int)dword_89E020 > 0 ) /*0x471449*/
  {
    v15 = dword_89DFE0; /*0x47144b*/
    v16 = dword_89E020; /*0x471455*/
    do /*0x471460*/
    {
      *v15 = *(int *)((char *)v15 + Block - (_DWORD)dword_89DFE0); /*0x47145a*/
      ++v15; /*0x47145c*/
      --v16; /*0x47145f*/
    }
    while ( v16 ); /*0x471460*/
  }
  if ( v14 > 1 ) /*0x471466*/
    qsort(dword_89DFE0, v14, 4u, Compare::Field96); /*0x471475*/
  dword_89DFC0 = (wchar_t *)a10; /*0x471489*/
  dword_89E008 = a9; /*0x471495*/
  dword_89DFD4 = a8; /*0x47149a*/
  NeedsSaveOrLink = (CampaignScore *)dword_A8B230[374].NeedsSaveOrLink; /*0x4714a0*/
  CampaignScore::LoadCampaignScoreAssetsGame(NeedsSaveOrLink); /*0x4714a8*/
  Game::LoadMultiplayerScoreAssets((Game *)NeedsSaveOrLink); /*0x4714af*/
  Screen::Capture(1, 0, v12, v13); /*0x4714b8*/
  Campaign::Screen(0); /*0x4714c9*/
  Map_Init_72D780(v18); /*0x4714ce*/
  FileSystem::CleanupTrees(v19); /*0x4714d3*/
  if ( Block ) /*0x4714da*/
  {
    if ( BYTE1(a5) ) /*0x4714e2*/
      __3_YAXPAX_Z((void *)Block); /*0x4714e5*/
  }
}



// ==== 0x00471500  CampaignScore::Constructor_CampaignScoreClass  this=CampaignScore  sig=csp ====
std::locale::facet *__thiscall CampaignScore::Constructor_CampaignScoreClass(CampaignScore *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CampaignScoreClass::`vftable'; /*0x471509*/
  if ( (a2 & 1) != 0 ) /*0x47150f*/
    __3_YAXPAX_Z(this); /*0x471512*/
  return (std::locale::facet *)this; /*0x47151c*/
}



// ==== 0x00471520  CampaignScore::Constructor_CampaignEndScoreClass  this=CampaignEndScoreClass  sig=csp ====
std::locale::facet *__thiscall CampaignScore::Constructor_CampaignEndScoreClass(CampaignScore *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CampaignEndScoreClass::`vftable'; /*0x471529*/
  if ( (a2 & 1) != 0 ) /*0x47152f*/
    __3_YAXPAX_Z(this); /*0x471532*/
  return (std::locale::facet *)this; /*0x47153c*/
}



// ==== 0x00471540  sub_471540  this=-  sig=ida-proto ====
void sub_471540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47154c*/
  dbl_89E120 = Math::Sqrt(v0 + v0); /*0x47155e*/
}



// ==== 0x00471570  sub_471570  this=-  sig=ida-proto ====
void sub_471570()
{
  dbl_89E170 = dbl_89E120 / 60.0; /*0x47157c*/
}



// ==== 0x00471590  sub_471590  this=-  sig=ida-proto ====
void sub_471590()
{
  dbl_89E158 = 1.0 / dbl_89E170; /*0x47159c*/
}



// ==== 0x004715B0  sub_4715B0  this=-  sig=ida-proto ====
void sub_4715B0()
{
  dbl_89E150 = 0.0174532925199433 * 45.0; /*0x4715bc*/
}



// ==== 0x004715D0  sub_4715D0  this=-  sig=ida-proto ====
void sub_4715D0()
{
  dbl_89E128 = 0.0174532925199433 * 60.0; /*0x4715dc*/
}



// ==== 0x004715F0  sub_4715F0  this=-  sig=ida-proto ====
void sub_4715F0()
{
  dbl_89E0E8 = 0.0174532925199433 * 90.0; /*0x4715fc*/
}



// ==== 0x00471610  sub_471610  this=-  sig=ida-proto ====
__int64 sub_471610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E0E8 - dbl_89E128); /*0x471622*/
  result = Math::RoundToInt(v0 * dbl_89E120 * 0.5); /*0x471636*/
  dword_89E178 = result; /*0x47163b*/
  return result; /*0x471640*/
}



// ==== 0x00471650  sub_471650  this=-  sig=ida-proto ====
void sub_471650()
{
  dbl_89E130 = Math::ArcTan((double)dword_89E178 * 0.00390625); /*0x471667*/
}



// ==== 0x00471680  sub_471680  this=-  sig=ida-proto ====
void sub_471680()
{
  dbl_89E148 = Math::ArcTan((double)(2 * dword_89E178) / dbl_89E120); /*0x4716a2*/
}



// ==== 0x004716B0  sub_4716B0  this=-  sig=ida-proto ====
__int64 sub_4716B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E178) + 0.5); /*0x4716cb*/
  dword_89E16C = result; /*0x4716d0*/
  return result; /*0x4716d6*/
}



// ==== 0x004716E0  sub_4716E0  this=-  sig=ida-proto ====
int sub_4716E0()
{
  word_89E118 = 0; /*0x4716e2*/
  word_89E11A = 0; /*0x4716e8*/
  return 0; /*0x4716ee*/
}



// ==== 0x004716F0  sub_4716F0  this=-  sig=ida-proto ====
int sub_4716F0()
{
  dword_89E138 = 0; /*0x4716f2*/
  dword_89E13C = 0; /*0x4716f7*/
  dword_89E140 = 0; /*0x4716fc*/
  return 0; /*0x471701*/
}



// ==== 0x00471710  sub_471710  this=-  sig=ida-proto ====
int sub_471710()
{
  dword_89E168 = 0; /*0x471715*/
  dword_89E160 = 128; /*0x47171f*/
  dword_89E164 = 128; /*0x471724*/
  return 128; /*0x471729*/
}



// ==== 0x00471730  sub_471730  this=-  sig=ida-proto ====
int sub_471730()
{
  dword_89E108 = 0; /*0x471732*/
  dword_89E10C = 0; /*0x471737*/
  dword_89E110 = 0; /*0x47173c*/
  dword_89E114 = 0; /*0x471741*/
  return 0; /*0x471746*/
}



// ==== 0x00471750  sub_471750  this=-  sig=ida-proto ====
int sub_471750()
{
  dword_89E0F4 = 0; /*0x471757*/
  dword_89E0F8 = 0; /*0x47175c*/
  byte_89E0FC = 1; /*0x471761*/
  byte_89E0FD = 0; /*0x471768*/
  dword_89E0F0 = (int)&DynamicVectorClass<CaptureManagerClass *>::`vftable'; /*0x47176d*/
  dword_89E104 = 10; /*0x471777*/
  dword_89E100 = 0; /*0x471781*/
  return atexit(sub_471790); /*0x47178c*/
}



// ==== 0x00471790  sub_471790  this=-  sig=ida-proto ====
void __cdecl sub_471790()
{
  dword_89E0F0 = (int)&VectorClass<CaptureManagerClass *>::`vftable'; /*0x471798*/
  if ( dword_89E0F4 && byte_89E0FD ) /*0x4717ac*/
  {
    __3_YAXPAX_Z(dword_89E0F4); /*0x4717af*/
    dword_89E0F4 = 0; /*0x4717b7*/
  }
  byte_89E0FD = 0; /*0x4717bd*/
  dword_89E0F8 = 0; /*0x4717c3*/
}



// ==== 0x004717D0  CaptureManagerClass::CaptureManagerClass  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass_Constructor(int this, int a2, int a3, char a4)
{
  int v5; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
  *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
  *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
  *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
  *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
  *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
  *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
  *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
  *(_DWORD *)(this + 72) = a2; /*0x471800*/
  *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
  *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
  *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
  *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
  *(_DWORD *)(this + 60) = a3; /*0x471822*/
  *(_BYTE *)(this + 64) = a4; /*0x471825*/
  *(_BYTE *)(this + 65) = 0; /*0x471828*/
  *(_DWORD *)(this + 76) = 30; /*0x47182b*/
  *(_DWORD *)(this + 68) = 0; /*0x471832*/
  if ( dword_89E100 < dword_89E0F8 /*0x471868*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v5 = dword_89E100++; /*0x471875*/
    *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
  }
  return this; /*0x471889*/
}



// ==== 0x00471890  CaptureManagerClass::SmallFunc  this=CaptureManagerClass  sig=csp ====
int __thiscall SmallFunc_471890(CaptureManagerClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x471893*/
  this->controlNodeCount = 0; /*0x47189f*/
  this->controlNodeCapacity = 0; /*0x4718a2*/
  LOBYTE(this->owner) = 1; /*0x4718a5*/
  BYTE1(this->owner) = 0; /*0x4718a8*/
  this->controlNodes[0] = (int)&DynamicVectorClass<ControlNode *>::`vftable'; /*0x4718ab*/
  *(_DWORD *)&this->CaptureManagerClass_field_30 = 10; /*0x4718b2*/
  this->originalOwner = 0; /*0x4718b9*/
  this->AbstractClass = &CaptureManagerClass::`vftable'; /*0x4718bc*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718c2*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718c9*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4718d0*/
  this->overloadCount = 0; /*0x4718d7*/
  *(_DWORD *)this->__pad_3C = 1; /*0x4718da*/
  this->CaptureManagerClass_field_40 = 0; /*0x4718dd*/
  this->CaptureManagerClass_field_41 = 0; /*0x4718e0*/
  this->linkCount = 30; /*0x4718e3*/
  this->overloadLimit = 0; /*0x4718ea*/
  if ( dword_89E100 < dword_89E0F8 /*0x47191f*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v2 = dword_89E100++; /*0x47192c*/
    *((_DWORD *)dword_89E0F4 + v2) = this; /*0x47193b*/
  }
  return (int)this; /*0x471940*/
}



// ==== 0x00471A50  CaptureManagerClass::HandleOverload  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::HandleOverload(CaptureManagerClass *this)
{
  int v2; // eax
  int overloadLimit; // eax
  int linkCount; // eax
  HouseClass *originalOwner; // edx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebp
  int overloadCount; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  int *v17; // eax
  double v18; // st7
  int v20; // [esp+1Ch] [ebp-30h]
  float v21; // [esp+1Ch] [ebp-30h]
  int v22; // [esp+20h] [ebp-2Ch]
  int v23; // [esp+24h] [ebp-28h] BYREF
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+40h] [ebp-Ch]
  int v29; // [esp+44h] [ebp-8h]
  int v30; // [esp+48h] [ebp-4h]

  LOBYTE(v2) = this->CaptureManagerClass_field_40; /*0x471a59*/
  if ( (_BYTE)v2 ) /*0x471a5e*/
  {
    overloadLimit = this->overloadLimit; /*0x471a64*/
    if ( overloadLimit > 0 ) /*0x471a69*/
      this->overloadLimit = overloadLimit - 1; /*0x471a6c*/
    linkCount = this->linkCount; /*0x471a6f*/
    if ( linkCount <= 0 ) /*0x471a74*/
    {
      originalOwner = this->originalOwner; /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3820); /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( (int)originalOwner > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3832) - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( (int)originalOwner > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3876) + 4 * v6); /*0x471abe*/
      v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3848) + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
        overloadCount = this->overloadCount; /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)overloadCount /*0x471b04*/
                                                                                           + 364))(
          overloadCount,
          &v23,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
        if ( !this->CaptureManagerClass_field_41 ) /*0x471b0a*/
        {
          v10 = (int *)(this->overloadCount + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 600), &v24, 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
          v12 = *(_DWORD *)(this->overloadCount + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471b98*/
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = (int *)__2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor( /*0x471c15*/
              v17,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
              v27,
              0,
              0,
              &dword_89E138,
              0);
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(_BYTE *)(this->overloadCount + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(this->overloadCount + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = linkCount - 1; /*0x471a76*/
      this->linkCount = v2; /*0x471a78*/
    }
  }
  return v2; /*0x471a77*/
}



// ==== 0x00471C90  CaptureManagerClass::CanCapture  this=CaptureManagerClass  sig=csp ====
bool __thiscall CaptureManagerClass::CanCapture(int this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
    v3 = *(_DWORD *)(this + 72); /*0x471ca4*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3) /*0x471cfe*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
      && !a2[179]
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 352))(a2) )
    {
      if ( *(_BYTE *)(this + 64) || (v5 = *(_DWORD *)(this + 60), *(_DWORD *)(this + 52) < v5) || v5 == 1 ) /*0x471d1c*/
      {
        v6 = a2[43]; /*0x471d1e*/
        if ( v6 != 19 && v6 != 18 ) /*0x471d2c*/
          return 1; /*0x471ce3*/
      }
    }
  }
  return result; /*0x471d2e*/
}



// ==== 0x00471D40  CaptureManagerClass::CaptureUnit  this=CaptureManagerClass  sig=csp ====
char __userpurge CaptureManagerClass::CaptureUnit@<al>(int a1@<ecx>, int a2@<ebp>, int a3)
{
  char result; // al
  _DWORD *v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebp
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  AnimClass *v27; // eax
  BuildingClass *v28; // eax
  _DWORD *v29; // [esp+4h] [ebp-28h]
  int v30; // [esp+8h] [ebp-24h]
  _DWORD *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+18h] [ebp-14h]
  int v34; // [esp+1Ch] [ebp-10h]
  int v35[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a3 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(_BYTE *)(a3 + 20) & 1) != 0 ? (_DWORD *)a3 : 0;
  result = CaptureManagerClass::CanCapture(a1, v5); /*0x471d6e*/
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 60) == 1 ) /*0x471d85*/
    {
      for ( i = *(_DWORD *)(a1 + 52) - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit(**(CaptureManagerClass ***)(*(_DWORD *)(a1 + 40) + 4 * i), a1, a2, v29, v30, v31); /*0x471d98*/
    }
    v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x471da4*/
    v8 = *v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 72) + 60))(*(_DWORD *)(a1 + 72), 1); /*0x471db2*/
    result = (*(int (__thiscall **)(_DWORD *, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = __2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x471ddc*/
        *(_DWORD *)(v11 + 16) = 0; /*0x471de2*/
        *(_DWORD *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (_DWORD *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(_DWORD *)(a1 + 44); /*0x471df3*/
      if ( *(_DWORD *)(a1 + 52) < v14 /*0x471e18*/
        || (*(_BYTE *)(a1 + 49) || !v14)
        && (v15 = *(_DWORD *)(a1 + 56), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 36) + 8))(a1 + 36, v14 + v15, 0) )
      {
        v16 = *(_DWORD *)(a1 + 52); /*0x471e1f*/
        v17 = *(_DWORD *)(a1 + 40); /*0x471e22*/
        *(_DWORD *)(a1 + 52) = v16 + 1; /*0x471e28*/
        *(_DWORD *)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      v5[176] = *(_DWORD *)(a1 + 72); /*0x471e34*/
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 784); /*0x471e45*/
      *v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x471e4b*/
      v18[1] = v33; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
        || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (_DWORD *)1732) + 3603)
        || v5[43] != 16 )
      {
        v20 = v5[43]; /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((CaptureManagerClass *)a1, (int)v5); /*0x471eae*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6 ) /*0x471ec1*/
      {
        v21 = a3; /*0x471ecb*/
        v22 = dword_89E178 * *(_DWORD *)(*(_DWORD *)(a3 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 72))(v5, v35); /*0x471ee1*/
      v24 = *v23; /*0x471f04*/
      v25 = v23[1]; /*0x471f06*/
      v26 = v22 + v23[2]; /*0x471f11*/
      v32 = v24; /*0x471f13*/
      v33 = v25; /*0x471f17*/
      v34 = v26; /*0x471f1b*/
      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = (BuildingClass *)AnimClass::ctor( /*0x471f4c*/
                                 v27,
                                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 800),
                                 &v32,
                                 0,
                                 1,
                                 (void *)0x600,
                                 0,
                                 0);
      else
        v28 = 0; /*0x471f53*/
      v5[178] = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(_DWORD *)(v5[178] + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/
}



// ==== 0x00471F90  ObjectClass::RemoveFromPointerList  this=FootClass  sig=csp ====
char __thiscall ObjectClass::RemoveFromPointerList(ObjectClass *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  TagClass *attachedTag; // eax
  TagClass *v6; // ecx
  int v7; // eax

  v3 = (int)&this->attachedTag[-1].align36[1]; /*0x471f97*/
  if ( v3 < 0 ) /*0x471f98*/
    return 1; /*0x471fe7*/
  do /*0x471fdc*/
  {
    v4 = *(_DWORD **)(this->owningHouseIndex + 4 * v3); /*0x471fa2*/
    if ( *v4 == a2 ) /*0x471fa7*/
    {
      if ( v4 ) /*0x471fab*/
        __3_YAXPAX_Z(*(void **)(this->owningHouseIndex + 4 * v3)); /*0x471fae*/
      attachedTag = this->attachedTag; /*0x471fb6*/
      if ( v3 < (int)attachedTag ) /*0x471fbb*/
      {
        v6 = (TagClass *)((char *)attachedTag - 1); /*0x471fbd*/
        v7 = v3; /*0x471fc0*/
        for ( this->attachedTag = v6; /*0x471fc7*/
              v7 < (int)this->attachedTag;
              *(_DWORD *)(this->owningHouseIndex + 4 * v7 - 4) = *(_DWORD *)(this->owningHouseIndex + 4 * v7) )
        {
          ++v7; /*0x471fcc*/
        }
      }
    }
    --v3; /*0x471fdb*/
  }
  while ( v3 >= 0 ); /*0x471fdc*/
  return 1; /*0x471fdf*/
}



// ==== 0x00471FF0  CaptureManagerClass::FreeUnit  this=CaptureManagerClass  sig=csp ====
char __userpurge CaptureManagerClass::FreeUnit@<al>(
        CaptureManagerClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4,
        int a5,
        _DWORD *a6)
{
  CaptureManagerClass *v6; // ecx
  CaptureManagerClass *v7; // edi
  int i; // ebx
  int v10; // ebp
  int v11; // ecx
  int (__thiscall **vtable0)(CaptureManagerClass *); // edx
  int v13; // eax
  int controlNodeCount; // ecx
  HouseClass *originalOwner; // eax
  HouseClass *v16; // ecx
  int v17; // eax
  _DWORD v20[3]; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  v7 = v6; /*0x471ff9*/
  if ( !this ) /*0x471ffd*/
    return 0; /*0x472000*/
  for ( i = (int)&v6->originalOwner[-1].HouseClass_field_160B4 + 3; i >= 0; --i ) /*0x47200e*/
  {
    v10 = *(_DWORD *)(v7->controlNodeCount + 4 * i); /*0x472018*/
    if ( *(CaptureManagerClass **)v10 == this ) /*0x472022*/
    {
      v11 = *((_DWORD *)this + 178); /*0x472028*/
      if ( v11 ) /*0x472030*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x472034*/
        *((_DWORD *)this + 178) = 0; /*0x47203a*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(CaptureManagerClass *, int, int))this->AbstractClass + 33))(this, a3, a2) /*0x472059*/
                     + 1456) == -1 )
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 612) != -1 ) /*0x4720a3*/
        {
          v21 = *((_DWORD *)this + 39); /*0x4720af*/
          retaddr = (_UNKNOWN *)this->controlNodeCount; /*0x4720b6*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 612), &v21, 0); /*0x4720cb*/
        }
      }
      else
      {
        v20[0] = *((_DWORD *)this + 39); /*0x472069*/
        vtable0 = (int (__thiscall **)(CaptureManagerClass *))this->AbstractClass; /*0x47206d*/
        v20[1] = this->controlNodeCount; /*0x472072*/
        v20[2] = *((_DWORD *)this + 41); /*0x472079*/
        v13 = vtable0[33](this); /*0x47207f*/
        StartAudioControllerAt(*(_DWORD *)(v13 + 1456), v20, 0); /*0x47208d*/
        v10 = a5; /*0x472092*/
      }
      a2 = 1; /*0x4720d5*/
      a3 = *(_DWORD *)(v10 + 4); /*0x4720d7*/
      (*((void (__thiscall **)(CaptureManagerClass *))this->AbstractClass + 245))(this); /*0x4720da*/
      CaptureManagerClass::DecideUnitFate(v7, (int)this); /*0x4720e3*/
      this->controlNodeCapacity = 0; /*0x4720e8*/
      controlNodeCount = v7->controlNodeCount; /*0x4720f2*/
      if ( *(_DWORD *)(controlNodeCount + 4 * i) ) /*0x4720f5*/
        __3_YAXPAX_Z(*(void **)(controlNodeCount + 4 * i)); /*0x4720fd*/
      originalOwner = v7->originalOwner; /*0x472105*/
      if ( i < (int)originalOwner ) /*0x47210a*/
      {
        v16 = (HouseClass *)((char *)originalOwner - 1); /*0x47210c*/
        v17 = i; /*0x47210f*/
        for ( v7->originalOwner = v16; /*0x472116*/
              v17 < (int)v7->originalOwner;
              *(_DWORD *)(v7->controlNodeCount + 4 * v17 - 4) = *(_DWORD *)(v7->controlNodeCount + 4 * v17) )
        {
          ++v17; /*0x47211b*/
        }
      }
    }
  }
  return 1; /*0x471fff*/
}



// ==== 0x00472160  CaptureManagerClass::DrawLinks  this=CaptureManagerClass  sig=csp ====
char CaptureManagerClass::DrawLinks(CaptureManagerClass *this, ...)
{
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, this);
  v2 = v1; /*0x472167*/
  v3 = *(_DWORD *)(v1 + 72); /*0x47216e*/
  HIBYTE(v20) = *(_BYTE *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(_DWORD *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(_DWORD *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(_BYTE *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(_DWORD *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          LOBYTE(v3) = HIBYTE(v20); /*0x4721d6*/
          if ( HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(_DWORD *)(v7 + 156); /*0x4721ec*/
            v11 = *(_DWORD *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (__thiscall **)(int, int, int, void *, int, int))(*(_DWORD *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = *(_DWORD **)(v2 + 72); /*0x47220c*/
            HIBYTE(v20) = HIBYTE(v13); /*0x47220f*/
            LOWORD(v20) = *(_WORD *)(v13[135] + 22265); /*0x472223*/
            BYTE2(v20) = *(_BYTE *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(_DWORD *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (__thiscall **)(_DWORD *))(*v13 + 176))(v13); /*0x472264*/
            LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x4721af*/
LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/
}



// ==== 0x004722A0  CaptureManagerClass::CannotControlAnyMore  this=CaptureManagerClass  sig=csp ====
bool __thiscall CaptureManagerClass::CannotControlAnyMore(CaptureManagerClass *this)
{
  return !this->CaptureManagerClass_field_40 && (int)this->originalOwner >= *(_DWORD *)this->__pad_3C; /*0x4722a7*/
}



// ==== 0x004722C0  CellClass::HasContent  this=CellClass  sig=csp ====
int __thiscall CellClass::HasContent(CellClass *this)
{
  return *(_DWORD *)&this->__pad_28[12] > 0; /*0x4722ca*/
}



// ==== 0x004722D0  TechnoClass::processPowerDrain  this=FootClass  sig=csp ====
int __thiscall TechnoClass::processPowerDrain(TechnoClass *this)
{
  return (int)this->?; /*0x4722d3*/
}



// ==== 0x004722F0  CaptureManagerClass::GetOriginalOwner  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass::GetOriginalOwner(CaptureManagerClass *this, int a2)
{
  int v2; // eax
  int controlNodeCount; // edx
  _DWORD **i; // ecx

  v2 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  controlNodeCount = this->controlNodeCount; /*0x4722f8*/
  for ( i = (_DWORD **)(controlNodeCount + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(_DWORD *)(*(_DWORD *)(controlNodeCount + 4 * v2) + 4); /*0x472310*/
}



// ==== 0x00472330  HouseClass::AssignCivilianToLowPowerTargets  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AssignCivilianToLowPowerTargets(HouseClass *this, int a2)
{
  int nextArrayIndex; // esi
  int v4; // eax
  int v5; // ecx
  char *i; // edx
  int v8; // ecx
  int j; // edx
  _DWORD *v10; // eax

  nextArrayIndex = stru_A80220.?; /*0x472333*/
  v4 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x472341*/
  v5 = 0; /*0x472346*/
  if ( nextArrayIndex <= 0 ) /*0x47234a*/
    return 0; /*0x47234a*/
  for ( i = (char *)stru_A80220.?; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 52) + 188) != v4; i += 4 ) /*0x472352*/
  {
    if ( ++v5 >= nextArrayIndex ) /*0x472367*/
      return 0; /*0x47236f*/
  }
  v8 = *((_DWORD *)stru_A80220.? + v5); /*0x472372*/
  if ( !v8 ) /*0x472377*/
    return 0; /*0x47237c*/
  for ( j = this->relatedTagsCapacity - 1; j >= 0; --j ) /*0x472386*/
  {
    v10 = (_DWORD *)*((_DWORD *)&this->buildingType->AbstractClass + j); /*0x47238f*/
    if ( *v10 == a2 ) /*0x472394*/
      v10[1] = v8; /*0x472396*/
  }
  return 1; /*0x472369*/
}



// ==== 0x004723B0  CaptureManagerClass::DecideUnitFate  this=CaptureManagerClass  sig=csp ====
void __thiscall CaptureManagerClass::DecideUnitFate(CaptureManagerClass *this, int a2)
{
  int v3; // edi
  int *v5; // ecx
  FactoryClass *v6; // ecx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v13; // ebp
  int v14; // eax
  bool v15; // cc
  int v16; // esi
  int overloadCount; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  CaptureManagerClass *v21; // ecx
  char v22; // al
  int v23; // [esp-4h] [ebp-24h]
  int v24; // [esp+10h] [ebp-10h]
  int v25; // [esp+10h] [ebp-10h]
  int v27; // [esp+18h] [ebp-8h]
  bool v29; // [esp+24h] [ebp+4h]

  _EBX = (_BYTE *)a2; /*0x4723b4*/
  v3 = 0; /*0x4723bb*/
  if ( !a2 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(int **)(a2 + 1492); /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, a2, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(FactoryClass **)(a2 + 628); /*0x4723e4*/
  if ( v6 && v6->production[1] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes((CCINIClass *)a2, 0); /*0x47240f*/
  v7 = *(_DWORD *)(a2 + 540); /*0x472417*/
  v8 = *(_DWORD *)(this->overloadCount + 540); /*0x472422*/
  v29 = v7 != v8; /*0x47242c*/
  if ( *(_BYTE *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v24 = 0; /*0x472446*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 36) + 24))(v8 + 36) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x472459*/
                                                                                     + 3772) )
  {
    HouseClass::GetPowerRatio(*(HouseClass **)(this->overloadCount + 540)); /*0x472470*/
    __asm /*0x472475*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x472480*/
    {
      v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3716); /*0x47248f*/
    }
    else
    {
      __asm { fild dword ptr [ebx+6Ch] } /*0x472497*/
      __asm { fstp [esp+20h+var_8] }
      _EAX = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 132))(_EBX); /*0x4724a2*/
      __asm { fild dword ptr [eax+0A0h] } /*0x4724a8*/
      _ESI = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4724ae*/
      __asm /*0x4724b4*/
      {
        fdivr [esp+20h+var_8]
        fcomp dword ptr [esi+0EC0h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x4724c3*/
        v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3688); /*0x4724cd*/
      else
        v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3660); /*0x4724dd*/
    }
  }
  else
  {
    v9 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3744); /*0x47245f*/
  }
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 100); /*0x4724f7*/
  v27 = 0; /*0x4724f9*/
  if ( v13 <= 0 )
  {
LABEL_22:
    v16 = v24; /*0x472537*/
    (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 132))(_EBX); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    overloadCount = this->overloadCount; /*0x47256f*/
    if ( overloadCount ) /*0x472574*/
    {
      if ( (*(_BYTE *)(overloadCount + 20) & 4) != 0 ) /*0x47257a*/
      {
        v18 = *(_DWORD *)(overloadCount + 1492); /*0x47257c*/
        if ( v18 ) /*0x472584*/
        {
          v19 = *(_DWORD *)(v18 + 36); /*0x472586*/
          if ( *(_DWORD *)(v19 + 192) ) /*0x472589*/
          {
            v25 = *(_DWORD *)(v19 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v16 = v25; /*0x4725a9*/
          }
        }
      }
    }
    switch ( v16 )
    {
      case 1:
        if ( !v29 )
        {
          v20 = this->overloadCount; /*0x4725bd*/
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 20) & 4) != 0 )
            {
              v21 = *(CaptureManagerClass **)(v20 + 1492); /*0x4725ca*/
              if ( v21 )
              {
                v22 = CaptureManagerClass::AddMember(v21, (_EBX[20] & 4) != 0 ? (unsigned int)_EBX : 0);
                break; /*0x4725e0*/
              }
            }
          }
        }
LABEL_34:
        Debug::Log(); /*0x4725e9*/
        (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)_EBX + 488))(_EBX, 15, 0); /*0x4725fe*/
        return; /*0x4725fe*/
      case 2:
        v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 828))(_EBX); /*0x472617*/
        break;
      case 3:
        v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)_EBX + 832))(_EBX); /*0x472628*/
        break;
      case 5:
        return; /*0x472633*/
      default:
        goto LABEL_34; /*0x472633*/
    }
    if ( v22 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v24 != 6 && v3 != v9[4] ) /*0x47250f*/
  {
    ++v24; /*0x47251e*/
    v23 = v3++; /*0x472524*/
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*v9 + 24))(v9, v23); /*0x472526*/
    v15 = v13 <= v14 + v27; /*0x47252f*/
    v27 += v14; /*0x472531*/
    if ( v15 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }
}



// ==== 0x00472640  CaptureManagerClass::NeedsToDrawLinks  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::NeedsToDrawLinks(CaptureManagerClass *this)
{
  int overloadCount; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  overloadCount = this->overloadCount; /*0x472640*/
  if ( *(_BYTE *)(overloadCount + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(_DWORD *)(overloadCount + 284); /*0x472656*/
  if ( v3 && *(_BYTE *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = this->controlNodeCount + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(_DWORD *)i; /*0x472682*/
      if ( *(_BYTE *)(**(_DWORD **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(_DWORD *)(v6 + 8); /*0x472690*/
      v8 = *(_DWORD *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x4726a3*/
LABEL_12:
    if ( v8 > 0 ) /*0x4726a7*/
      return 1; /*0x4726a7*/
    goto LABEL_13; /*0x4726a7*/
  }
  return 0; /*0x472650*/
}



// ==== 0x004726C0  CaptureManagerClass::IsOverloading  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::IsOverloading(int this, bool *a2)
{
  if ( !*(_BYTE *)(this + 64) || *(_DWORD *)(this + 52) <= *(_DWORD *)(this + 60) ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = *(_DWORD *)(this + 68) > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/
}



// ==== 0x004726F0  CaptureManagerClass::PowerDrainUpdate  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass::PowerDrainUpdate(CaptureManagerClass *this, int a2)
{
  int result; // eax
  int overloadCount; // esi
  int v5; // eax

  result = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4726f9*/
  overloadCount = this->overloadCount; /*0x4726fe*/
  if ( overloadCount ) /*0x472703*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(overloadCount + 4) + 16))(overloadCount + 4); /*0x47270c*/
    return Power::TimerProcess(v5); /*0x472712*/
  }
  return result; /*0x472717*/
}



// ==== 0x00472720  CaptureManagerClass::LoadFromStream  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::LoadFromStream(CaptureManagerClass *this, int *a2)
{
  int *v2; // ebx
  CaptureManagerClass *v3; // ebp
  int result; // eax
  _DWORD *v5; // edi
  int v6; // edx
  CaptureManagerClass *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int controlNodeCapacity; // eax
  int v12; // ecx
  HouseClass *originalOwner; // eax
  int controlNodeCount; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = this; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(this, (int)a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140((CaptureManagerClass *)v3->controlNodes, 0, 0); /*0x472757*/
      v3->controlNodes[0] = (int)&DynamicVectorClass<ControlNode *>::`vftable'; /*0x47275c*/
      *(_DWORD *)&v3->CaptureManagerClass_field_30 = 10; /*0x472762*/
      v3->originalOwner = 0; /*0x472769*/
      v3->AbstractClass = &CaptureManagerClass::`vftable'; /*0x47276c*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x472773*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x47277a*/
      v3->? = &CaptureManagerClass::`vftable'; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v3->overloadCount); /*0x472791*/
    v6 = *v2; /*0x472796*/
    this = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, CaptureManagerClass **, int, _DWORD))(v6 + 12))(v2, &this, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = this; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( (int)this <= 0 ) /*0x4727be*/
      {
LABEL_19:
        v15 = 0; /*0x472894*/
        if ( (int)v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v3->controlNodeCount + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking( /*0x4728ba*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->controlNodeCount + 4 * v15++));
          }
          while ( v15 < (int)this ); /*0x4728c4*/
        }
        return v18; /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4727d6*/
            *(_DWORD *)(v8 + 16) = 0; /*0x4727dc*/
            *(_DWORD *)(v8 + 8) = v9; /*0x4727df*/
            v5 = (_DWORD *)v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*v2 + 12))(v2, &v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          controlNodeCapacity = v3->controlNodeCapacity; /*0x472844*/
          if ( (int)v3->originalOwner < controlNodeCapacity /*0x472867*/
            || (BYTE1(v3->owner) || !controlNodeCapacity)
            && (v12 = *(_DWORD *)&v3->CaptureManagerClass_field_30, v12 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3->controlNodes[0] + 8))(
                 v3->controlNodes,
                 controlNodeCapacity + v12,
                 0) )
          {
            originalOwner = v3->originalOwner; /*0x47286e*/
            controlNodeCount = v3->controlNodeCount; /*0x472871*/
            v3->originalOwner = (HouseClass *)((char *)&originalOwner->AbstractClass + 1); /*0x472877*/
            *(_DWORD *)(controlNodeCount + 4 * (_DWORD)originalOwner) = v5; /*0x47287a*/
          }
          v7 = this; /*0x472881*/
          if ( ++v17 >= (int)this ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return result; /*0x4728ca*/
}



// ==== 0x004728E0  CaptureManagerClass::SaveToINI  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::SaveToINI(CaptureManagerClass *this, int *a2, int originalOwner)
{
  int Prefix; // edi
  int v5; // edx
  int result; // eax
  int v7; // ebp
  int v8; // edi
  int *v9; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix((int *)this, a2, originalOwner); /*0x4728f8*/
  v9 = (int *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a2; /*0x472905*/
  originalOwner = (int)this->originalOwner; /*0x472911*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))(a2, &originalOwner, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( originalOwner <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(_DWORD *)(this->controlNodeCount + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= originalOwner ) /*0x472950*/
      return (int)v9; /*0x472952*/
  }
  return result; /*0x472958*/
}



// ==== 0x00472960  CaptureManagerClass::GetClassIdentifier  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::GetClassIdentifier(CaptureManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = unk_7E988C; /*0x472990*/
  return 0; /*0x47296d*/
}



// ==== 0x004729A0  CaptureManagerClass::GetObjectSize  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::GetObjectSize(CaptureManagerClass *this)
{
  return 80; /*0x4729a5*/
}



// ==== 0x004729B0  CaptureManagerClass::GetTypeIdentifier  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::GetTypeIdentifier(CaptureManagerClass *this)
{
  return 66; /*0x4729b5*/
}



// ==== 0x004729C0  CaptureManagerClass::ddtor  this=CaptureManagerClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::ddtor(CaptureManagerClass *this, char a2)
{
  int v3; // eax
  void *controlNodeCount; // eax
  CaptureManagerClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &CaptureManagerClass::`vftable'; /*0x4729cd*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729d3*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729da*/
  this->? = &CaptureManagerClass::`vftable'; /*0x4729e1*/
  v6 = this; /*0x4729ef*/
  v3 = (*(int (__thiscall **)(int *, CaptureManagerClass **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((_DWORD *)dword_89E0F4 + v3 - 1) = *((_DWORD *)dword_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  controlNodeCount = (void *)this->controlNodeCount; /*0x472a28*/
  this->controlNodes[0] = (int)&VectorClass<ControlNode *>::`vftable'; /*0x472a2b*/
  if ( controlNodeCount && BYTE1(this->owner) ) /*0x472a36*/
  {
    __3_YAXPAX_Z(controlNodeCount); /*0x472a3e*/
    this->controlNodeCount = 0; /*0x472a46*/
  }
  BYTE1(this->owner) = 0; /*0x472a4f*/
  this->controlNodeCapacity = 0; /*0x472a53*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    __3_YAXPAX_Z(this); /*0x472a67*/
  return &this->AbstractClass; /*0x472a71*/
}



// ==== 0x00472A80  _DynamicVectorClass_PAUControlNode::vt[03]  this=DynamicVector  sig=csp ====
void __thiscall CaptureManagerClass::g_var_ffdfec(_DynamicVectorClass_PAUControlNode *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472a86*/
  this->m_10 = 0; /*0x472a89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x472a90*/
  {
    __3_YAXPAX_Z(v2); /*0x472a96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472a9e*/
  }
  BYTE1(this->m_C) = 0; /*0x472aa1*/
  this->m_8 = 0; /*0x472aa4*/
}



// ==== 0x00472AB0  _DynamicVectorClass_PAUControlNode::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall CaptureManagerClass::LoadTypeData(_DynamicVectorClass_PAUControlNode *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472ab0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/
}



// ==== 0x00472AD0  _VectorClass_PAUControlNode::vt[06]  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::g_var_1d5e6b(_VectorClass_PAUControlNode *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x472ada*/
}



// ==== 0x00472AE0  _DynamicVectorClass_PAVCaptureManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::Destroy(_DynamicVectorClass_PAVCaptureManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472ae6*/
  this->m_10 = 0; /*0x472ae9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x472af0*/
  {
    __3_YAXPAX_Z(v2); /*0x472af6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472afe*/
  }
  BYTE1(this->m_C) = 0; /*0x472b01*/
  this->m_8 = 0; /*0x472b04*/
}



// ==== 0x00472B10  _DynamicVectorClass_PAVCaptureManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472b10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472b25*/
  else
    return 0; /*0x472b17*/
}



// ==== 0x00472B30  _VectorClass_PAVCaptureManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::Get(_VectorClass_PAVCaptureManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x472b3a*/
}



// ==== 0x00472B40  _VectorClass_PAUControlNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::AddRef(_VectorClass_PAUControlNode *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x472b42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x472b4d*/
  {
    v3 = 0; /*0x472b4f*/
    if ( m_8 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x472b55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472b5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472b64*/
    {
      ++v3; /*0x472b66*/
      ++v4; /*0x472b67*/
      if ( v3 >= m_8 ) /*0x472b6c*/
        return 1; /*0x472b6c*/
    }
  }
  return 0; /*0x472b6e*/
}



// ==== 0x00472B80  _VectorClass_PAUControlNode::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::SetCapacity(_VectorClass_PAUControlNode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x472b8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x472b96*/
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472bae*/
    LOBYTE(this->m_C) = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x472bc5*/
      {
        m_8 = this->m_8; /*0x472bcc*/
        if ( a2 < m_8 ) /*0x472bd1*/
          m_8 = a2; /*0x472bd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( BYTE1(this->m_C) ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472bf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x472bfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x472c07*/
      this->m_8 = a2; /*0x472c0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUControlNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }
}



// ==== 0x00472C30  _VectorClass_PAUControlNode::Destroy  this=VectorClass  sig=csp ====
void __thiscall CaptureManagerClass::Destroy(_VectorClass_PAUControlNode *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x472c3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472c43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472c4b*/
  }
  BYTE1(this->m_C) = 0; /*0x472c4e*/
  this->m_8 = 0; /*0x472c51*/
}



// ==== 0x00472C60  _VectorClass_PAUControlNode::IndexOf  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::IndexOf(_VectorClass_PAUControlNode *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x472c60*/
    return 0; /*0x472c68*/
  m_8 = this->m_8; /*0x472c6e*/
  result = 0; /*0x472c71*/
  if ( m_8 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= m_8 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/
}



// ==== 0x00472CA0  _VectorClass_PAUControlNode::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall CaptureManagerClass::PointerToIndex(_VectorClass_PAUControlNode *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472ca0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/
}



// ==== 0x00472CC0  _DynamicVectorClass_PAUControlNode::Release  this=DynamicVector  sig=csp ====
char __thiscall CaptureManagerClass::Release(_DynamicVectorClass_PAUControlNode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472ccc*/
  {
    LOBYTE(this->m_C) = 0; /*0x472cd2*/
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472cea*/
    LOBYTE(this->m_C) = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x472cf8*/
    {
      m_8 = this->m_8; /*0x472cff*/
      if ( a2 < m_8 ) /*0x472d04*/
        m_8 = a2; /*0x472d06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( BYTE1(this->m_C) ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472d29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x472d31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x472d3a*/
    this->m_8 = a2; /*0x472d42*/
    BYTE1(this->m_C) = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUControlNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472d4e*/
  }
  v7 = this->m_8; /*0x472d51*/
  if ( v7 < this->m_10 ) /*0x472d59*/
    this->m_10 = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/
}



// ==== 0x00472D70  _DynamicVectorClass_PAUControlNode::Capture  this=DynamicVector  sig=csp ====
int __thiscall CaptureManagerClass::Capture(_DynamicVectorClass_PAUControlNode *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( m_10 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= m_10 ) /*0x472d8d*/
      return -1; /*0x472d8d*/
  }
  return result; /*0x472d92*/
}



// ==== 0x00472DA0  _VectorClass_PAVCaptureManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::Add(_VectorClass_PAVCaptureManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x472da2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x472dad*/
  {
    v3 = 0; /*0x472daf*/
    if ( m_8 <= 0 ) /*0x472db3*/
      return 1; /*0x472dd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x472db5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472dbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472dc4*/
    {
      ++v3; /*0x472dc6*/
      ++v4; /*0x472dc7*/
      if ( v3 >= m_8 ) /*0x472dcc*/
        return 1; /*0x472dcc*/
    }
  }
  return 0; /*0x472dce*/
}



// ==== 0x00472DE0  _VectorClass_PAVCaptureManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::Release(
        _VectorClass_PAVCaptureManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x472dec*/
  {
    LOBYTE(this->m_C) = 0; /*0x472df6*/
    if ( a3 ) /*0x472dfc*/
      v4 = a3; /*0x472e12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472e0e*/
    LOBYTE(this->m_C) = 1; /*0x472e16*/
    if ( v4 ) /*0x472e1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x472e25*/
      {
        m_8 = this->m_8; /*0x472e2c*/
        if ( a2 < m_8 ) /*0x472e31*/
          m_8 = a2; /*0x472e33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472e39*/
          ++i; /*0x472e3e*/
        if ( BYTE1(this->m_C) ) /*0x472e4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472e56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x472e5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x472e67*/
      this->m_8 = a2; /*0x472e6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x472e72*/
      return 1; /*0x472e78*/
    }
    else
    {
      return 0; /*0x472e1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVCaptureManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472e82*/
    return 1; /*0x472e88*/
  }
}



// ==== 0x00472E90  _VectorClass_PAVCaptureManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::Remove(_VectorClass_PAVCaptureManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x472e9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472ea3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472eab*/
  }
  BYTE1(this->m_C) = 0; /*0x472eae*/
  this->m_8 = 0; /*0x472eb1*/
}



// ==== 0x00472EC0  _VectorClass_PAVCaptureManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::GetSize(_VectorClass_PAVCaptureManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x472ec0*/
    return 0; /*0x472ec8*/
  m_8 = this->m_8; /*0x472ece*/
  result = 0; /*0x472ed1*/
  if ( m_8 <= 0 ) /*0x472ed5*/
    return -1; /*0x472eec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472edb*/
  {
    if ( ++result >= m_8 ) /*0x472eea*/
      return -1; /*0x472eea*/
  }
  return result; /*0x472eca*/
}



// ==== 0x00472F00  _VectorClass_PAVCaptureManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::GetCapacity(
        _VectorClass_PAVCaptureManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x472f00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x472f15*/
  else
    return 0; /*0x472f07*/
}



// ==== 0x00472F20  _DynamicVectorClass_PAVCaptureManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::SetCapacity(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472f2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x472f32*/
    if ( a3 ) /*0x472f38*/
      v4 = a3; /*0x472f4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x472f4a*/
    LOBYTE(this->m_C) = 1; /*0x472f52*/
    if ( !v4 ) /*0x472f56*/
      return 0; /*0x472fca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x472f58*/
    {
      m_8 = this->m_8; /*0x472f5f*/
      if ( a2 < m_8 ) /*0x472f64*/
        m_8 = a2; /*0x472f66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x472f6c*/
        ++i; /*0x472f71*/
      if ( BYTE1(this->m_C) ) /*0x472f7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x472f89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x472f91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x472f9a*/
    this->m_8 = a2; /*0x472fa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x472fa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVCaptureManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x472fae*/
  }
  v7 = this->m_8; /*0x472fb1*/
  if ( v7 < this->m_10 ) /*0x472fb9*/
    this->m_10 = v7; /*0x472fbb*/
  return 1; /*0x472fbe*/
}



// ==== 0x00472FD0  _DynamicVectorClass_PAVCaptureManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x472fd0*/
  result = 0; /*0x472fd3*/
  if ( m_10 <= 0 ) /*0x472fd8*/
    return -1; /*0x472fef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x472fde*/
  {
    if ( ++result >= m_10 ) /*0x472fed*/
      return -1; /*0x472fed*/
  }
  return result; /*0x472ff2*/
}



// ==== 0x00473000  _VectorClass_PAUControlNode::Constructor_VectorClass_ControlNode___  this=VectorClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::Constructor_VectorClass_ControlNode___(
        _VectorClass_PAUControlNode *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x473003*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ControlNode *>::`vftable'; /*0x473006*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473010*/
  {
    __3_YAXPAX_Z(v3); /*0x473018*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473020*/
  }
  BYTE1(this->m_C) = 0; /*0x47302b*/
  this->m_8 = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    __3_YAXPAX_Z(this); /*0x47303b*/
  return this->__pad_0; /*0x473045*/
}



// ==== 0x00473050  _DynamicVectorClass_PAUControlNode::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::QueryInterface(_DynamicVectorClass_PAUControlNode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x473053*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ControlNode *>::`vftable'; /*0x473056*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473060*/
  {
    __3_YAXPAX_Z(v3); /*0x473068*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473070*/
  }
  BYTE1(this->m_C) = 0; /*0x47307b*/
  this->m_8 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    __3_YAXPAX_Z(this); /*0x47308b*/
  return this->__pad_0; /*0x473095*/
}



// ==== 0x004730A0  _VectorClass_PAVCaptureManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CaptureManagerClass::QueryInterface(
        _VectorClass_PAVCaptureManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4730a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CaptureManagerClass *>::`vftable'; /*0x4730a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4730b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4730b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4730c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4730cb*/
  this->m_8 = 0; /*0x4730d1*/
  if ( (a2 & 1) != 0 ) /*0x4730d8*/
    __3_YAXPAX_Z(this); /*0x4730db*/
  return this->__pad_0; /*0x4730e5*/
}



// ==== 0x004730F0  _DynamicVectorClass_PAVCaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(
        _DynamicVectorClass_PAVCaptureManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4730f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CaptureManagerClass *>::`vftable'; /*0x4730f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x473100*/
  {
    __3_YAXPAX_Z(v3); /*0x473108*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x473110*/
  }
  BYTE1(this->m_C) = 0; /*0x47311b*/
  this->m_8 = 0; /*0x473121*/
  if ( (a2 & 1) != 0 ) /*0x473128*/
    __3_YAXPAX_Z(this); /*0x47312b*/
  return this->__pad_0; /*0x473135*/
}



// ==== 0x00473140  CaptureManagerClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall CaptureManagerClass::Constructor_473140(CaptureManagerClass *this, int a2, int a3)
{
  this->? = 0; /*0x47314b*/
  this->? = (void *)a2; /*0x47314e*/
  LOBYTE(this->?) = 1; /*0x473151*/
  BYTE1(this->?) = 0; /*0x473155*/
  this->AbstractClass = &VectorClass<ControlNode *>::`vftable'; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->? = (void *)a3; /*0x473168*/
      return &this->AbstractClass; /*0x47316e*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x47317d*/
    BYTE1(this->?) = 1; /*0x473180*/
  }
  return &this->AbstractClass; /*0x47316d*/
}



// ==== 0x00473190  sub_473190  this=-  sig=ida-proto ====
void sub_473190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47319c*/
  dbl_89E1A0 = Math::Sqrt(v0 + v0); /*0x4731ae*/
}



// ==== 0x004731C0  sub_4731C0  this=-  sig=ida-proto ====
void sub_4731C0()
{
  dbl_89E1F0 = dbl_89E1A0 / 60.0; /*0x4731cc*/
}



// ==== 0x004731E0  sub_4731E0  this=-  sig=ida-proto ====
void sub_4731E0()
{
  dbl_89E1D8 = 1.0 / dbl_89E1F0; /*0x4731ec*/
}



// ==== 0x00473200  sub_473200  this=-  sig=ida-proto ====
void sub_473200()
{
  dbl_89E1D0 = 0.0174532925199433 * 45.0; /*0x47320c*/
}



// ==== 0x00473220  sub_473220  this=-  sig=ida-proto ====
void sub_473220()
{
  dbl_89E1A8 = 0.0174532925199433 * 60.0; /*0x47322c*/
}



// ==== 0x00473240  sub_473240  this=-  sig=ida-proto ====
void sub_473240()
{
  dbl_89E180 = 0.0174532925199433 * 90.0; /*0x47324c*/
}



// ==== 0x00473260  sub_473260  this=-  sig=ida-proto ====
__int64 sub_473260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E180 - dbl_89E1A8); /*0x473272*/
  result = Math::RoundToInt(v0 * dbl_89E1A0 * 0.5); /*0x473286*/
  dword_89E1F8 = result; /*0x47328b*/
  return result; /*0x473290*/
}



// ==== 0x004732A0  sub_4732A0  this=-  sig=ida-proto ====
void sub_4732A0()
{
  dbl_89E1B0 = Math::ArcTan((double)dword_89E1F8 * 0.00390625); /*0x4732b7*/
}



// ==== 0x004732D0  sub_4732D0  this=-  sig=ida-proto ====
void sub_4732D0()
{
  dbl_89E1C8 = Math::ArcTan((double)(2 * dword_89E1F8) / dbl_89E1A0); /*0x4732f2*/
}



// ==== 0x00473300  sub_473300  this=-  sig=ida-proto ====
__int64 sub_473300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E1F8) + 0.5); /*0x47331b*/
  dword_89E1EC = result; /*0x473320*/
  return result; /*0x473326*/
}



// ==== 0x00473330  sub_473330  this=-  sig=ida-proto ====
int sub_473330()
{
  word_89E198 = 0; /*0x473332*/
  word_89E19A = 0; /*0x473338*/
  return 0; /*0x47333e*/
}



// ==== 0x00473340  sub_473340  this=-  sig=ida-proto ====
int sub_473340()
{
  dword_89E1B8 = 0; /*0x473342*/
  dword_89E1BC = 0; /*0x473347*/
  dword_89E1C0 = 0; /*0x47334c*/
  return 0; /*0x473351*/
}



// ==== 0x00473360  sub_473360  this=-  sig=ida-proto ====
int sub_473360()
{
  dword_89E1E8 = 0; /*0x473365*/
  dword_89E1E0 = 128; /*0x47336f*/
  dword_89E1E4 = 128; /*0x473374*/
  return 128; /*0x473379*/
}



// ==== 0x00473380  sub_473380  this=-  sig=ida-proto ====
int sub_473380()
{
  dword_89E188 = 0; /*0x473382*/
  dword_89E18C = 0; /*0x473387*/
  dword_89E190 = 0; /*0x47338c*/
  dword_89E194 = 0; /*0x473391*/
  return 0; /*0x473396*/
}



// ==== 0x004733A0  CellClass::AddObject  this=CellClass  sig=csp ====
void __thiscall CellClass::AddObject(CellClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = a2; /*0x4733a1*/
  if ( a2 ) /*0x4733aa*/
  {
    (*(void (__thiscall **)(_DWORD *))(*a2 + 212))(a2); /*0x4733b0*/
    v4 = a2[12]; /*0x4733b6*/
    if ( v4 && (*(_BYTE *)(v4 + 20) & 4) != 0 ) /*0x4733ca*/
    {
      while ( 1 ) /*0x4733d0*/
      {
        v5 = *(_DWORD *)(v4 + 48); /*0x4733d0*/
        if ( !v5 ) /*0x4733d5*/
          break; /*0x4733d5*/
        if ( (*(_BYTE *)(v5 + 20) & 4) == 0 ) /*0x4733e4*/
          goto LABEL_8; /*0x4733e4*/
        v4 = *(_DWORD *)(v4 + 48); /*0x4733e6*/
      }
      *(_DWORD *)(v4 + 48) = this->foggedObjects; /*0x4733f5*/
    }
    else
    {
LABEL_8:
      a2[12] = this->foggedObjects; /*0x4733fa*/
    }
    this->foggedObjects = a2; /*0x473400*/
    this->mapCoords[0] = 0; /*0x473403*/
    while ( 1 ) /*0x47340c*/
    {
      ++this->mapCoords[0]; /*0x47340c*/
      v6 = v2[12]; /*0x47340e*/
      if ( !v6 || (*(_BYTE *)(v6 + 20) & 4) == 0 ) /*0x473422*/
        break; /*0x473422*/
      v2 = (_DWORD *)v2[12]; /*0x473424*/
    }
  }
}



// ==== 0x00473430  LinkedList::Pop  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Pop(LinkedList *this)
{
  int result; // eax

  result = this->Tail[0]; /*0x473430*/
  if ( result ) /*0x473435*/
  {
    this->Tail[0] = *(_DWORD *)(result + 48); /*0x47343b*/
    *(_DWORD *)(result + 48) = 0; /*0x47343e*/
    --*(_DWORD *)this->__pad_0; /*0x473445*/
  }
  return result; /*0x473437*/
}



// ==== 0x00473450  CCINIClass::GetDB  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::GetDB(CCINIClass *this)
{
  return this->?[0]; /*0x473453*/
}



// ==== 0x00473460  HouseClass::SumPowerDrain  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SumPowerDrain(HouseClass *this)
{
  void *vtable0; // ebx
  _DWORD *vtable1; // ecx
  int result; // eax
  _DWORD *v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // [esp+Ch] [ebp-4h]

  vtable0 = this->AbstractClass; /*0x473462*/
  vtable1 = this->?; /*0x473464*/
  result = 0; /*0x473467*/
  v7 = 0; /*0x47346d*/
  if ( vtable1 ) /*0x473471*/
  {
    v4 = vtable1; /*0x473473*/
    for ( i = 0; i < (int)vtable0; v7 = result ) /*0x47347d*/
    {
      if ( !v4 ) /*0x473481*/
        break; /*0x473481*/
      v6 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x473487*/
      LOWORD(result) = Math::RoundToInt((double)v7 + *(double *)(v6 + 896)); /*0x473497*/
      v4 = (_DWORD *)v4[12]; /*0x47349c*/
      ++i; /*0x47349f*/
    }
  }
  return result; /*0x4734a8*/
}



// ==== 0x004734B0  FootClass::updateMovementAnimation  this=FootClass  sig=csp ====
void __thiscall FootClass::updateMovementAnimation(FootClass *this, int a2)
{
  _DWORD *vtable1; // edx
  _DWORD *v3; // eax

  if ( a2 ) /*0x4734b7*/
  {
    vtable1 = this->?; /*0x4734b9*/
    if ( vtable1 ) /*0x4734be*/
    {
      v3 = (_DWORD *)vtable1[12]; /*0x4734c0*/
      if ( vtable1 == (_DWORD *)a2 ) /*0x4734c5*/
      {
        this->? = v3; /*0x4734c7*/
        --this->TechnoClass; /*0x4734ce*/
      }
      else if ( v3 ) /*0x4734d5*/
      {
        while ( (_DWORD *)a2 != v3 ) /*0x4734d9*/
        {
          vtable1 = v3; /*0x4734db*/
          v3 = (_DWORD *)v3[12]; /*0x4734dd*/
          if ( !v3 ) /*0x4734e2*/
            return; /*0x4734e2*/
        }
        vtable1[12] = *(_DWORD *)(vtable1[12] + 48); /*0x4734ee*/
        --this->TechnoClass; /*0x4734f4*/
      }
    }
  }
}



// ==== 0x00473500  TechnoClass::IndexOf  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IndexOf(TechnoClass *this, int a2)
{
  _DWORD *vtable1; // ecx
  int result; // eax
  int v4; // edx

  vtable1 = this->?; /*0x473500*/
  result = 0; /*0x473503*/
  if ( !vtable1 ) /*0x473508*/
    return 0; /*0x47352c*/
  while ( 1 ) /*0x47350e*/
  {
    ++result; /*0x47350e*/
    if ( vtable1 == (_DWORD *)a2 ) /*0x473511*/
      break; /*0x473511*/
    v4 = vtable1[12]; /*0x473513*/
    if ( v4 ) /*0x473518*/
    {
      if ( (*(_BYTE *)(v4 + 20) & 4) == 0 ) /*0x47351e*/
        return 0; /*0x47351e*/
      vtable1 = (_DWORD *)vtable1[12]; /*0x473520*/
    }
    if ( !vtable1 ) /*0x473524*/
      return 0; /*0x473524*/
  }
  return result; /*0x47352e*/
}



// ==== 0x00473540  sub_473540  this=-  sig=ida-proto ====
void sub_473540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47354c*/
  dbl_89E220 = Math::Sqrt(v0 + v0); /*0x47355e*/
}



// ==== 0x00473570  sub_473570  this=-  sig=ida-proto ====
void sub_473570()
{
  dbl_89E270 = dbl_89E220 / 60.0; /*0x47357c*/
}



// ==== 0x00473590  sub_473590  this=-  sig=ida-proto ====
void sub_473590()
{
  dbl_89E258 = 1.0 / dbl_89E270; /*0x47359c*/
}



// ==== 0x004735B0  sub_4735B0  this=-  sig=ida-proto ====
void sub_4735B0()
{
  dbl_89E250 = 0.0174532925199433 * 45.0; /*0x4735bc*/
}



// ==== 0x004735D0  sub_4735D0  this=-  sig=ida-proto ====
void sub_4735D0()
{
  dbl_89E228 = 0.0174532925199433 * 60.0; /*0x4735dc*/
}



// ==== 0x004735F0  sub_4735F0  this=-  sig=ida-proto ====
void sub_4735F0()
{
  dbl_89E200 = 0.0174532925199433 * 90.0; /*0x4735fc*/
}



// ==== 0x00473610  sub_473610  this=-  sig=ida-proto ====
__int64 sub_473610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E200 - dbl_89E228); /*0x473622*/
  result = Math::RoundToInt(v0 * dbl_89E220 * 0.5); /*0x473636*/
  dword_89E278 = result; /*0x47363b*/
  return result; /*0x473640*/
}



// ==== 0x00473650  Math::InitArcTan  this=Math  sig=ida-proto ====
void Math_InitArcTan()
{
  dbl_89E230 = Math::ArcTan((double)dword_89E278 * 0.00390625); /*0x473667*/
}



// ==== 0x00473680  sub_473680  this=-  sig=ida-proto ====
void sub_473680()
{
  dbl_89E248 = Math::ArcTan((double)(2 * dword_89E278) / dbl_89E220); /*0x4736a2*/
}



// ==== 0x004736B0  sub_4736B0  this=-  sig=ida-proto ====
__int64 sub_4736B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E278) + 0.5); /*0x4736cb*/
  dword_89E26C = result; /*0x4736d0*/
  return result; /*0x4736d6*/
}



// ==== 0x004736E0  sub_4736E0  this=-  sig=ida-proto ====
int sub_4736E0()
{
  word_89E218 = 0; /*0x4736e2*/
  word_89E21A = 0; /*0x4736e8*/
  return 0; /*0x4736ee*/
}



// ==== 0x004736F0  sub_4736F0  this=-  sig=ida-proto ====
int sub_4736F0()
{
  dword_89E238 = 0; /*0x4736f2*/
  dword_89E23C = 0; /*0x4736f7*/
  dword_89E240 = 0; /*0x4736fc*/
  return 0; /*0x473701*/
}



// ==== 0x00473710  sub_473710  this=-  sig=ida-proto ====
int sub_473710()
{
  dword_89E268 = 0; /*0x473715*/
  dword_89E260 = 128; /*0x47371f*/
  dword_89E264 = 128; /*0x473724*/
  return 128; /*0x473729*/
}



// ==== 0x00473730  sub_473730  this=-  sig=ida-proto ====
int sub_473730()
{
  dword_89E208 = 0; /*0x473732*/
  dword_89E20C = 0; /*0x473737*/
  dword_89E210 = 0; /*0x47373c*/
  dword_89E214 = 0; /*0x473741*/
  return 0; /*0x473746*/
}



// ==== 0x00473750  CarryoverClass::method  this=CarryoverClass  sig=csp ====
_DWORD *__thiscall sub_473750(CarryoverClass *this, _DWORD *a2)
{
  CarryoverClass *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v3 = (CarryoverClass *)a2; /*0x473754*/
  *((_DWORD *)this + 1) = 0; /*0x47375a*/
  *((_DWORD *)this + 2) = 0; /*0x47375d*/
  *((_DWORD *)this + 3) = 0; /*0x473760*/
  *((_WORD *)this + 10) = 0; /*0x473763*/
  *((_WORD *)this + 11) = 0; /*0x473767*/
  *((_DWORD *)this + 6) = 0; /*0x47376d*/
  *((_DWORD *)this + 7) = -1; /*0x473770*/
  *this = (CarryoverClass)&CarryoverClass::`vftable'; /*0x473777*/
  if ( v3 ) /*0x47377d*/
  {
    v4 = (*(int (__thiscall **)(CarryoverClass *))(*(_DWORD *)v3 + 44))(v3); /*0x473783*/
    *((_DWORD *)this + 3) = v4; /*0x473786*/
    v5 = v4 - 1; /*0x473789*/
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 ) /*0x473794*/
    {
      v7 = (*(int (__thiscall **)(CarryoverClass *))(*(_DWORD *)v3 + 132))(v3); /*0x4737a6*/
      *((_DWORD *)this + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 64))(v7); /*0x4737b3*/
    }
    *(this + 7) = *(CarryoverClass *)(*(_DWORD *)(*(_DWORD *)&v3[135] + 52) + 184); /*0x4737c7*/
    *(this + 6) = v3[27]; /*0x4737cd*/
    *(this + 5) = *(CarryoverClass *)(*(int (__thiscall **)(CarryoverClass *, _DWORD **))(*(_DWORD *)v3 + 440))(v3, &a2); /*0x4737df*/
  }
  return this; /*0x4737e4*/
}



// ==== 0x004737F0  ReinforcementClass::CreateObject  this=ReinforcementClass  sig=csp ====
char __thiscall ReinforcementClass::CreateObject(ReinforcementClass *this)
{
  IUnknown *Owner; // edi
  int v3; // eax
  ReinforcementClass *v4; // eax
  int v5; // eax
  int *v6; // eax
  bool v7; // zf
  int v8; // edx
  ReinforcementClass v9; // edx
  bool v11; // [esp+8h] [ebp-10h]
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  Owner = (IUnknown *)HouseClass::FindOwner(*((HouseClass **)this + 7)); /*0x4737ff*/
  switch ( *((_DWORD *)this + 3) ) /*0x473805*/
  {
    case 1: /*0x473805*/
      v6 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x473872*/
      if ( !v6 ) /*0x47387c*/
        return 0; /*0x47387c*/
      v4 = (ReinforcementClass *)UnitClass::Construct(v6, *((_DWORD *)dword_A83CE4 + *((_DWORD *)this + 4)), Owner); /*0x473892*/
      break;
    case 6: /*0x473805*/
      v5 = __2_YAPAXI_Z(0x720u); /*0x473846*/
      if ( !v5 ) /*0x473850*/
        return 0; /*0x473850*/
      v4 = (ReinforcementClass *)BuildingClass::Construct( /*0x473866*/
                                   v5,
                                   *((_DWORD *)dword_A83C6C + *((_DWORD *)this + 4)),
                                   (int)Owner);
      break;
    case 0xF: /*0x473805*/
      v3 = __2_YAPAXI_Z(0x6F0u); /*0x47381a*/
      if ( !v3 ) /*0x473824*/
        return 0; /*0x473824*/
      v4 = (ReinforcementClass *)InfantryClass::Construct(v3, *((_DWORD *)dword_A8E34C + *((_DWORD *)this + 4)), Owner); /*0x47383a*/
      break;
    default:
      return 0; /*0x47380f*/
  }
  if ( v4 ) /*0x473899*/
  {
    v7 = dword_A8E7AC == 0; /*0x4738a4*/
    v4[27] = *(this + 6); /*0x4738a6*/
    v11 = !v7; /*0x4738b6*/
    if ( *((_DWORD *)this + 3) == 15 ) /*0x4738ba*/
      dword_A8E7AC = 0; /*0x4738bc*/
    v8 = *((__int16 *)this + 10) << 8; /*0x4738d1*/
    v12[1] = (*((__int16 *)this + 11) << 8) + 128; /*0x4738e0*/
    v12[0] = v8 + 128; /*0x4738e8*/
    v9 = *v4; /*0x4738ec*/
    v12[2] = 0; /*0x4738f3*/
    (*(void (__thiscall **)(ReinforcementClass *, _DWORD *, _DWORD))(*(_DWORD *)&v9 + 216))(v4, v12, 0); /*0x4738fb*/
    if ( *((_DWORD *)this + 3) == 15 ) /*0x473904*/
      dword_A8E7AC = v11; /*0x473910*/
  }
  return 0; /*0x473916*/
}


// ==== 0x00473920  CarryoverClass::QueryInterface  this=CarryoverClass  sig=csp ====
_DWORD *__thiscall CarryoverClass::QueryInterface(CarryoverClass *this, char a2)
{
  LinkClass::Destruct((LinkClass *)this); /*0x473923*/
  if ( (a2 & 1) != 0 ) /*0x47392d*/
    __3_YAXPAX_Z(this); /*0x473930*/
  return this; /*0x47393a*/
}



// ==== 0x00473960  sub_473960  this=-  sig=csp ====
char *__fastcall sub_473960(unsigned int a1)
{
  if ( a1 >= 0xB ) /*0x473963*/
    return g_Str__none_; /*0x47396d*/
  else
    return off_81B7CC[2 * a1]; /*0x473965*/
}



// ==== 0x00473980  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_473980(ObjectTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  v2 = 0; /*0x473989*/
  v3 = off_81B7C8; /*0x47398b*/
  while ( _strcmpi(v3[1], (char *)this) && _strcmpi(*v3, (char *)this) ) /*0x4739af*/
  {
    v3 += 2; /*0x4739b1*/
    ++v2; /*0x4739b4*/
    if ( (int)v3 >= (int)aAirlift ) /*0x4739bb*/
      return -1; /*0x4739bb*/
  }
  return v2; /*0x4739bd*/
}



// ==== 0x004739D0  sub_4739D0  this=-  sig=ida-proto ====
int sub_4739D0()
{
  dword_89E280 = 0; /*0x4739d2*/
  dword_89E284 = 0; /*0x4739d7*/
  dword_89E288 = 0; /*0x4739dc*/
  dword_89E28C = 0; /*0x4739e1*/
  return 0; /*0x4739e6*/
}



// ==== 0x004739F0  CCFileClass::Construct  this=CCFileClass  sig=csp ====
_DWORD *__thiscall CCFileClass::Construct(CCFileClass *this, char *Source)
{
  BufferIOFile::Init((BufferIOFile *)this); /*0x4739f3*/
  Buffer::Init((Buffer *)((char *)this + 88), 0, 0); /*0x4739ff*/
  this->tail_19 = 0; /*0x473a0b*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x473a12*/
  *((_DWORD *)this + 26) = 0; /*0x473a18*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x473a1f*/
  return this->CDFileClass; /*0x473a26*/
}



// ==== 0x00473A30  CCFileClass::Construct2  this=CCFileClass  sig=csp ====
_DWORD *__thiscall CCFileClass::Construct2(CCFileClass *this, char **a2)
{
  char *v3; // eax

  BufferIOFile::Init((BufferIOFile *)this); /*0x473a33*/
  Buffer::Init((Buffer *)((char *)this + 88), 0, 0); /*0x473a3f*/
  this->tail_19 = 0; /*0x473a48*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x473a4f*/
  *((_DWORD *)this + 26) = 0; /*0x473a55*/
  v3 = String::GetOrEmpty_Alt((String *)a2); /*0x473a5c*/
  *((_DWORD *)this + 26) = 0; /*0x473a64*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, v3); /*0x473a6b*/
  return this->CDFileClass; /*0x473a72*/
}



// ==== 0x00473A80  CCFileClass::Construct3  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_Constructor3(int this)
{
  BufferIOFile::Init((_BYTE *)this); /*0x473a83*/
  Buffer::Init((_DWORD *)(this + 88), 0, 0); /*0x473a8f*/
  *(_DWORD *)(this + 100) = 0; /*0x473a94*/
  *(_DWORD *)this = &CCFileClass::`vftable'; /*0x473a9b*/
  *(_DWORD *)(this + 104) = 0; /*0x473aa1*/
  return this; /*0x473aaa*/
}



// ==== 0x00473AB0  CCFileClass::Destru_vt16  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt16(CCFileClass *this, int a2, int a3, int a4)
{
  char result; // al

  result = this->?; /*0x473ab0*/
  if ( !result ) /*0x473ab8*/
    return CD::`vftable'(dword_81C1D0); /*0x473acc*/
  return result; /*0x473ad2*/
}



// ==== 0x00473AE0  CCFileClass::Write  this=CCFileClass  sig=csp ====
int __thiscall FileClass::Write(CCFileClass *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  FileClass v4; // edi
  int v5; // eax

  if ( this->FileTimeDateHi ) /*0x473ae3*/
  {
    v4 = this->FileClass; /*0x473aeb*/
    v5 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x473aed*/
    (*(void (__thiscall **)(CCFileClass *, int, _DWORD, int))(*(_DWORD *)&v4 + 64))(this, 13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter(this, (char *)lpBuffer, nNumberOfBytesToWrite); /*0x473b0c*/
}



// ==== 0x00473B10  CCFileClass::Read  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Read(CCFileClass *this, void *lpBuffer, signed int Size)
{
  bool v4; // bl
  int v5; // edx
  int v6; // ecx
  signed int v7; // edi

  v4 = 0; /*0x473b15*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) ) /*0x473b19*/
    v4 = (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 1) != 0; /*0x473b2d*/
  v5 = this->FileTimeDateHi; /*0x473b2f*/
  if ( v5 ) /*0x473b34*/
  {
    v6 = this->tail_19; /*0x473b36*/
    v7 = Size; /*0x473b3c*/
    if ( *((_DWORD *)this + 23) - v6 < Size ) /*0x473b44*/
      v7 = *((_DWORD *)this + 23) - v6; /*0x473b46*/
    if ( v7 ) /*0x473b4a*/
    {
      memcpy(lpBuffer, (const void *)(v5 + v6), v7); /*0x473b55*/
      this->tail_19 += v7; /*0x473b62*/
    }
    if ( v4 ) /*0x473b67*/
    {
      (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473b6d*/
      return v7; /*0x473b75*/
    }
  }
  else
  {
    v7 = FileClass::BufferedReader(this, (char *)lpBuffer, Size); /*0x473b8b*/
    if ( v4 ) /*0x473b8d*/
      (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473b93*/
  }
  return v7; /*0x473b72*/
}



// ==== 0x00473BA0  CCFileClass::Seek  this=CCFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Seek(CCFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int v3; // eax
  bool v4; // sf
  int v5; // eax
  int result; // eax

  if ( !this->FileTimeDateHi ) /*0x473ba0*/
    return BufferIOFileClass::SeekInternal((BufferIOFileClass *)this, lDistanceToMove, dwMoveMethod); /*0x473bf3*/
  if ( dwMoveMethod ) /*0x473bae*/
  {
    if ( dwMoveMethod == 2 ) /*0x473bb3*/
      this->tail_19 = *((_DWORD *)this + 23); /*0x473bb8*/
  }
  else
  {
    this->tail_19 = 0; /*0x473bbd*/
  }
  v3 = this->tail_19; /*0x473bc8*/
  v4 = lDistanceToMove + v3 < 0; /*0x473bcb*/
  v5 = lDistanceToMove + v3; /*0x473bcb*/
  this->tail_19 = v5; /*0x473bd6*/
  result = v4 ? 0 : v5;
  this->tail_19 = result; /*0x473bdb*/
  if ( result > *((_DWORD *)this + 23) ) /*0x473be3*/
    result = *((_DWORD *)this + 23); /*0x473be5*/
  this->tail_19 = result; /*0x473be7*/
  return result; /*0x473bea*/
}



// ==== 0x00473C00  CCFileClass::GetSize  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::GetSize(CCFileClass *this)
{
  int v3; // edx
  const char *v4; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  if ( this->FileTimeDateHi ) /*0x473c04*/
    return *((_DWORD *)this + 23); /*0x473c0b*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x473c15*/
    return BufferIOFileClass::SetSize((BufferIOFileClass *)this); /*0x473c48*/
  v3 = *(_DWORD *)this->CDFileClass; /*0x473c1e*/
  v5 = 0; /*0x473c2b*/
  v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(v3 + 4))(this); /*0x473c33*/
  LookupFileInfoCache(v4, 0, 0, 0, &v5); /*0x473c3a*/
  return v5; /*0x473c0e*/
}



// ==== 0x00473C50  CCFileClass::Open  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Open(CCFileClass *this, int a2)
{
  int result; // eax
  const char *v4; // eax

  if ( *((_DWORD *)this + 26) == 1 ) /*0x473c5c*/
  {
    LOBYTE(result) = 1; /*0x473c5e*/
  }
  else
  {
    result = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 24))(this); /*0x473c69*/
    if ( (_BYTE)result ) /*0x473c6e*/
    {
      *((_DWORD *)this + 26) = 1; /*0x473c70*/
      LOBYTE(result) = 1; /*0x473c73*/
    }
    else
    {
      v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473c84*/
      if ( LookupFileInfoCache(v4, 0, 0, 0, 0) ) /*0x473c8b*/
      {
        *((_DWORD *)this + 26) = 1; /*0x473c94*/
        LOBYTE(result) = 1; /*0x473c97*/
      }
      else
      {
        result = File::IsReady((BufferIOFileClass *)this, 0); /*0x473ca2*/
        if ( (_BYTE)result ) /*0x473ca9*/
        {
          *((_DWORD *)this + 26) = 1; /*0x473cab*/
          LOBYTE(result) = 1; /*0x473cae*/
        }
        else
        {
          *((_DWORD *)this + 26) = 2; /*0x473cb5*/
          LOBYTE(result) = 0; /*0x473cbd*/
        }
      }
    }
  }
  return result; /*0x473c60*/
}



// ==== 0x00473CD0  CCFileClass::Destru_vt06  this=CCFileClass  sig=csp ====
bool __thiscall CCFileClass::Destru_vt06(CCFileClass *this)
{
  return this->FileTimeDateHi || BufferIOFileClass::Read((BufferIOFileClass *)this); /*0x473cd7*/
}



// ==== 0x00473CE0  CCFileClass::Reset  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Reset(CCFileClass *this)
{
  Buffer *v2; // ecx
  int result; // eax

  v2 = (Buffer *)((char *)this + 88); /*0x473ce3*/
  if ( v2 ) /*0x473ce8*/
    Buffer::Init(v2, 0, 0); /*0x473cee*/
  this->tail_19 = 0; /*0x473cf5*/
  LOBYTE(result) = CCFileClass::Close(this); /*0x473cfc*/
  return result; /*0x473d01*/
}



// ==== 0x00473D10  CCFileClass::Load  this=CCFileClass  sig=csp ====
BOOL __thiscall FileClass::Load(CCFileClass *this, const CHAR *a2)
{
  FileClass v3; // edx
  const char *v4; // eax
  const char *v5; // eax
  char *v6; // edi
  FileClass v7; // eax
  size_t Size; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x473d1a*/
  if ( ((unsigned __int8)a2 & 2) != 0 || (unsigned __int8)File::IsReady(this, 0) ) /*0x473d2d*/
    return FileClass::OpenFileBufferIO(this, a2); /*0x473e40*/
  v3 = this->FileClass; /*0x473d44*/
  v11 = 0; /*0x473d4d*/
  v10 = 0; /*0x473d51*/
  Size = 0; /*0x473d55*/
  v12 = 0; /*0x473d59*/
  v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 4))(this); /*0x473d61*/
  if ( !LookupFileInfoCache(v4, &v10, &v11, &v12, &Size) ) /*0x473d68*/
    return FileClass::OpenFileBufferIO(this, a2); /*0x473e2b*/
  if ( v10 || !v11 ) /*0x473d87*/
  {
    if ( this != (CCFileClass *)-88 ) /*0x473e06*/
      Buffer::Init((Buffer *)((char *)this + 88), v10, Size); /*0x473e0e*/
    this->tail_19 = 0; /*0x473e13*/
    return 1; /*0x473e18*/
  }
  else if ( (*(int (__thiscall **)(CCFileClass *, _DWORD, int))(*(_DWORD *)&this->FileClass + 32))( /*0x473d93*/
              this,
              *(_DWORD *)(v11 + 12),
              1) )
  {
    v5 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x473d9e*/
    v6 = _strdup(v5); /*0x473daa*/
    v7 = this->FileClass; /*0x473dac*/
    *((_BYTE *)this + 84) = 1; /*0x473db1*/
    (*(void (__thiscall **)(CCFileClass *, char *))(*(_DWORD *)&v7 + 8))(this, v6); /*0x473db5*/
    *((_BYTE *)this + 84) = 0; /*0x473dbd*/
    FileClass::GetFileSizeOp(this, 0, -1); /*0x473dc0*/
    FileClass::GetFileSizeOp(this, v12, Size); /*0x473dd1*/
    (*(void (__thiscall **)(CCFileClass *, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, 0, 0); /*0x473ddc*/
    free(v6); /*0x473de0*/
    return 1; /*0x473de8*/
  }
  else
  {
    return 0; /*0x473df8*/
  }
}



// ==== 0x00473E50  CCFileClass::Destru_vt14  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destru_vt14(CCFileClass *this)
{
  int DosTimestamp; // ebx
  const char *v3; // eax
  char *v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-70h] BYREF
  BufferIOFile v8; // [esp+10h] [ebp-6Ch] BYREF
  int v9[3]; // [esp+68h] [ebp-14h] BYREF
  int v10; // [esp+74h] [ebp-8h]
  int v11; // [esp+78h] [ebp-4h]

  v7 = 0; /*0x473e5a*/
  DosTimestamp = FileClass::GetDosTimestamp((RawFileClass *)this); /*0x473e63*/
  if ( DosTimestamp ) /*0x473e67*/
    return DosTimestamp; /*0x473e67*/
  v3 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473e78*/
  if ( !LookupFileInfoCache(v3, 0, &v7, 0, 0) ) /*0x473e7f*/
    return DosTimestamp; /*0x473ef7*/
  v4 = *(char **)(v7 + 12); /*0x473e90*/
  BufferIOFile::Init(&v8); /*0x473e93*/
  Buffer::Init((Buffer *)v9, 0, 0); /*0x473e9e*/
  v10 = 0; /*0x473ead*/
  *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473eb1*/
  v11 = 0; /*0x473eb5*/
  FileClass::OpenWithCDSearch((CDFileClass *)&v8, v4); /*0x473eb9*/
  v5 = (*(int (__thiscall **)(BufferIOFile *))(*(_DWORD *)v8.__pad_0 + 56))(&v8); /*0x473ecd*/
  *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473ecf*/
  v10 = 0; /*0x473ed3*/
  Vector::Clear((int)v9); /*0x473ed7*/
  *(_DWORD *)v8.__pad_0 = &off_7E1668; /*0x473ee0*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x473ee8*/
  return v5; /*0x473eef*/
}



// ==== 0x00473F00  CCFileClass::Destru_vt15  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt15(CCFileClass *this, int wFatTime)
{
  char v3; // bl
  const char *v4; // eax
  char *v5; // esi
  int v7; // [esp+10h] [ebp-70h] BYREF
  BufferIOFile v8; // [esp+14h] [ebp-6Ch] BYREF
  int v9[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v10; // [esp+78h] [ebp-8h]
  int v11; // [esp+7Ch] [ebp-4h]

  v7 = 0; /*0x473f10*/
  v3 = FileClass::SetTime((RawFileClass *)this, wFatTime); /*0x473f19*/
  if ( !v3 ) /*0x473f1d*/
  {
    v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 4))(this); /*0x473f2e*/
    if ( LookupFileInfoCache(v4, 0, &v7, 0, 0) ) /*0x473f35*/
    {
      v5 = *(char **)(v7 + 12); /*0x473f46*/
      BufferIOFile::Init(&v8); /*0x473f49*/
      Buffer::Init((Buffer *)v9, 0, 0); /*0x473f54*/
      v10 = 0; /*0x473f5e*/
      *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473f62*/
      v11 = 0; /*0x473f6a*/
      FileClass::OpenWithCDSearch((CDFileClass *)&v8, v5); /*0x473f71*/
      v3 = (*(int (__thiscall **)(BufferIOFile *, int))(*(_DWORD *)v8.__pad_0 + 60))(&v8, wFatTime); /*0x473f86*/
      *(_DWORD *)v8.__pad_0 = &CCFileClass::`vftable'; /*0x473f88*/
      v10 = 0; /*0x473f90*/
      Vector::Clear((int)v9); /*0x473f94*/
      *(_DWORD *)v8.__pad_0 = &off_7E1668; /*0x473f9d*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x473fa5*/
    }
  }
  return v3; /*0x473faa*/
}



// ==== 0x00473FC0  CCFileClass::SetFileName  this=CCFileClass  sig=csp ====
int __thiscall FileClass::SetFileName(CCFileClass *this, char *Source)
{
  *((_DWORD *)this + 26) = 0; /*0x473fc4*/
  return FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x473fd1*/
}



// ==== 0x00473FE0  sub_473FE0  this=-  sig=ida-proto ====
void sub_473FE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x473fec*/
  dbl_89E2B0 = Math::Sqrt(v0 + v0); /*0x473ffe*/
}



// ==== 0x00474010  sub_474010  this=-  sig=ida-proto ====
void sub_474010()
{
  dbl_89E300 = dbl_89E2B0 / 60.0; /*0x47401c*/
}



// ==== 0x00474030  sub_474030  this=-  sig=ida-proto ====
void sub_474030()
{
  dbl_89E2E8 = 1.0 / dbl_89E300; /*0x47403c*/
}



// ==== 0x00474050  sub_474050  this=-  sig=ida-proto ====
void sub_474050()
{
  dbl_89E2E0 = 0.0174532925199433 * 45.0; /*0x47405c*/
}



// ==== 0x00474070  sub_474070  this=-  sig=ida-proto ====
void sub_474070()
{
  dbl_89E2B8 = 0.0174532925199433 * 60.0; /*0x47407c*/
}



// ==== 0x00474090  sub_474090  this=-  sig=ida-proto ====
void sub_474090()
{
  dbl_89E290 = 0.0174532925199433 * 90.0; /*0x47409c*/
}



// ==== 0x004740B0  sub_4740B0  this=-  sig=ida-proto ====
__int64 sub_4740B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E290 - dbl_89E2B8); /*0x4740c2*/
  result = Math::RoundToInt(v0 * dbl_89E2B0 * 0.5); /*0x4740d6*/
  dword_89E308 = result; /*0x4740db*/
  return result; /*0x4740e0*/
}



// ==== 0x004740F0  sub_4740F0  this=-  sig=ida-proto ====
void sub_4740F0()
{
  dbl_89E2C0 = Math::ArcTan((double)dword_89E308 * 0.00390625); /*0x474107*/
}



// ==== 0x00474120  sub_474120  this=-  sig=ida-proto ====
void sub_474120()
{
  dbl_89E2D8 = Math::ArcTan((double)(2 * dword_89E308) / dbl_89E2B0); /*0x474142*/
}



// ==== 0x00474150  sub_474150  this=-  sig=ida-proto ====
__int64 sub_474150()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E308) + 0.5); /*0x47416b*/
  dword_89E2FC = result; /*0x474170*/
  return result; /*0x474176*/
}



// ==== 0x00474180  sub_474180  this=-  sig=ida-proto ====
int sub_474180()
{
  word_89E2A8 = 0; /*0x474182*/
  word_89E2AA = 0; /*0x474188*/
  return 0; /*0x47418e*/
}



// ==== 0x00474190  sub_474190  this=-  sig=ida-proto ====
int sub_474190()
{
  dword_89E2C8 = 0; /*0x474192*/
  dword_89E2CC = 0; /*0x474197*/
  dword_89E2D0 = 0; /*0x47419c*/
  return 0; /*0x4741a1*/
}



// ==== 0x004741B0  sub_4741B0  this=-  sig=ida-proto ====
int sub_4741B0()
{
  dword_89E2F8 = 0; /*0x4741b5*/
  dword_89E2F0 = 128; /*0x4741bf*/
  dword_89E2F4 = 128; /*0x4741c4*/
  return 128; /*0x4741c9*/
}



// ==== 0x004741D0  sub_4741D0  this=-  sig=ida-proto ====
int sub_4741D0()
{
  dword_89E298 = 0; /*0x4741d2*/
  dword_89E29C = 0; /*0x4741d7*/
  dword_89E2A0 = 0; /*0x4741dc*/
  dword_89E2A4 = 0; /*0x4741e1*/
  return 0; /*0x4741e6*/
}



// ==== 0x004741F0  CCINIClass::Load  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::Load(CCINIClass *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  SHA1 v12; // [esp+20h] [ebp-94h] BYREF
  int v13; // [esp+44h] [ebp-70h]
  int v14; // [esp+48h] [ebp-6Ch]
  int v15; // [esp+4Ch] [ebp-68h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  int v18; // [esp+58h] [ebp-5Ch]
  int v19; // [esp+5Ch] [ebp-58h]
  int v20[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = a2; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v10[0] = (int)&FileStraw::`vftable'; /*0x474223*/
  File = INIClass::LoadFile((INIClass *)this, (int)v10, a4); /*0x474230*/
  this->ownsFile = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data((INIClass *)this, g_INI_Key_Digest, (int)v20, 0x14u); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int *)this->INIClass, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  memset(&v12.SHA1_field_0x04, 0, 9); /*0x474286*/
  v18 = 0; /*0x474295*/
  v19 = 0; /*0x474299*/
  v13 = 1732584193; /*0x47429d*/
  v14 = -271733879; /*0x4742a5*/
  v15 = -1732584194; /*0x4742ad*/
  v16 = 271733878; /*0x4742b5*/
  v17 = -1009589776; /*0x4742bd*/
  *(_DWORD *)v12.__pad_0 = &SHAPipe::`vftable'; /*0x4742c5*/
  INIClass::WriteToString((INIClass *)this, (int)&v12); /*0x4742cd*/
  SHA1::ComputeThunk(&v12, this->__pad_41); /*0x4742da*/
  this->ownsFile = 1; /*0x4742e3*/
  Pipe::Dtor((Pipe *)&v12); /*0x4742e7*/
  v8 = memcmp(v20, this->__pad_41, 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((int)v10); /*0x474306*/
  return v7; /*0x474311*/
}



// ==== 0x00474320  CCINIClass::LoadAndVerifyDigest  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadAndVerifyDigest(int *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int result; // eax
  SHA1 v8; // [esp+Ch] [ebp-94h] BYREF
  int v9; // [esp+30h] [ebp-70h]
  int v10; // [esp+34h] [ebp-6Ch]
  int v11; // [esp+38h] [ebp-68h]
  int v12; // [esp+3Ch] [ebp-64h]
  int v13; // [esp+40h] [ebp-60h]
  int v14; // [esp+44h] [ebp-5Ch]
  int v15; // [esp+48h] [ebp-58h]
  int v16[5]; // [esp+8Ch] [ebp-14h] BYREF

  File = INIClass::LoadFile((INIClass *)this, a2, a4); /*0x47433f*/
  this->ownsFile = 0; /*0x474345*/
  if ( !File || !a3 ) /*0x474355*/
    return File; /*0x474355*/
  Base64Data = INIClass::GetBase64Data((INIClass *)this, g_INI_Key_Digest, (int)v16, 0x14u); /*0x47436c*/
  if ( !Base64Data ) /*0x474373*/
    return 2; /*0x474383*/
  if ( Base64Data <= 0 ) /*0x474386*/
    return File; /*0x474386*/
  INIClass::ClearSection(this, (int)g_INI_Key_Digest, 0); /*0x474395*/
  memset(&v8.SHA1_field_0x04, 0, 9); /*0x4743a1*/
  v14 = 0; /*0x4743ad*/
  v15 = 0; /*0x4743b1*/
  v9 = 1732584193; /*0x4743b5*/
  v10 = -271733879; /*0x4743bd*/
  v11 = -1732584194; /*0x4743c5*/
  v12 = 271733878; /*0x4743cd*/
  v13 = -1009589776; /*0x4743d5*/
  *(_DWORD *)v8.__pad_0 = &SHAPipe::`vftable'; /*0x4743dd*/
  INIClass::WriteToString((INIClass *)this, (int)&v8); /*0x4743e5*/
  SHA1::ComputeThunk(&v8, (char *)this + 65); /*0x4743f2*/
  this->ownsFile = 1; /*0x4743fb*/
  Pipe::Dtor((Pipe *)&v8); /*0x4743ff*/
  result = 2; /*0x474412*/
  if ( !memcmp(v16, (char *)this + 65, 0x14u) ) /*0x474417*/
    return File; /*0x47441c*/
  return result; /*0x474375*/
}



// ==== 0x00474430  INIClass::WriteDigest  this=INIClass  sig=csp ====
int __thiscall INIClass::WriteDigest(CCINIClass *this, int a2, char a3)
{
  int v4; // edi
  Pipe v6; // [esp+Ch] [ebp-94h] BYREF
  char v7; // [esp+1Ch] [ebp-84h]
  SHA1 v8; // [esp+20h] [ebp-80h] BYREF
  int v9; // [esp+44h] [ebp-5Ch]
  int v10; // [esp+48h] [ebp-58h]
  int v11; // [esp+4Ch] [ebp-54h]
  int v12; // [esp+50h] [ebp-50h]
  int v13; // [esp+54h] [ebp-4Ch]
  int v14; // [esp+58h] [ebp-48h]
  int v15; // [esp+5Ch] [ebp-44h]

  v6.Pipe_field_0x0C = a2; /*0x47443e*/
  v6.Pipe_field_0x04 = 0; /*0x474451*/
  v6.Pipe_field_0x08 = 0; /*0x474455*/
  v7 = 0; /*0x474459*/
  *(_DWORD *)v6.__pad_0 = &FilePipe::`vftable'; /*0x47445d*/
  if ( a3 ) /*0x474465*/
  {
    INIClass::ClearSection((int *)this->__pad_0, (int)g_INI_Key_Digest, 0); /*0x474482*/
    memset(&v8.SHA1_field_0x04, 0, 9); /*0x47448e*/
    v14 = 0; /*0x47449a*/
    v15 = 0; /*0x47449e*/
    v9 = 1732584193; /*0x4744a2*/
    v10 = -271733879; /*0x4744aa*/
    v11 = -1732584194; /*0x4744b2*/
    v12 = 271733878; /*0x4744ba*/
    v13 = -1009589776; /*0x4744c2*/
    *(_DWORD *)v8.__pad_0 = &SHAPipe::`vftable'; /*0x4744ca*/
    INIClass::WriteToString(this, (int)&v8); /*0x4744d2*/
    SHA1::ComputeThunk(&v8, this->__pad_41); /*0x4744df*/
    this->ownsFile[0] = 1; /*0x4744e8*/
    Pipe::Dtor((Pipe *)&v8); /*0x4744ec*/
    INIClass::ReadBase64Data(this->__pad_0, (unsigned __int8 *)g_INI_Key_Digest, (int)this->__pad_41, 20); /*0x4744fb*/
    v4 = INIClass::WriteToString(this, (int)&v6); /*0x474514*/
    INIClass::ClearSection((int *)this->__pad_0, (int)g_INI_Key_Digest, 0); /*0x474516*/
  }
  else
  {
    v4 = INIClass::WriteToString(this, (int)&v6); /*0x474473*/
  }
  FilePipe::Destructor(&v6); /*0x47451f*/
  return v4; /*0x474526*/
}



// ==== 0x00474540  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_474540(ObjectClass *this, int a2, char a3)
{
  int v5; // edi
  SHA1 v6; // [esp+8h] [ebp-80h] BYREF
  int v7; // [esp+2Ch] [ebp-5Ch]
  int v8; // [esp+30h] [ebp-58h]
  int v9; // [esp+34h] [ebp-54h]
  int v10; // [esp+38h] [ebp-50h]
  int v11; // [esp+3Ch] [ebp-4Ch]
  int v12; // [esp+40h] [ebp-48h]
  int v13; // [esp+44h] [ebp-44h]

  if ( !a3 ) /*0x474552*/
    return INIClass::WriteToString((INIClass *)this, a2); /*0x47455c*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x474575*/
  memset(&v6.SHA1_field_0x04, 0, 9); /*0x47457e*/
  v12 = 0; /*0x47458d*/
  v13 = 0; /*0x474591*/
  v7 = 1732584193; /*0x474595*/
  v8 = -271733879; /*0x47459d*/
  v9 = -1732584194; /*0x4745a5*/
  v10 = 271733878; /*0x4745ad*/
  v11 = -1009589776; /*0x4745b5*/
  *(_DWORD *)v6.__pad_0 = &SHAPipe::`vftable'; /*0x4745bd*/
  INIClass::WriteToString((INIClass *)this, (int)&v6); /*0x4745c5*/
  SHA1::ComputeThunk(&v6, (char *)&this->ambientSoundController[1] + 1); /*0x4745d2*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x4745db*/
  Pipe::Dtor((Pipe *)&v6); /*0x4745df*/
  INIClass::ReadBase64Data( /*0x4745ee*/
    (char *)this,
    (unsigned __int8 *)g_INI_Key_Digest,
    (int)&this->ambientSoundController[1] + 1,
    20);
  v5 = INIClass::WriteToString((INIClass *)this, a2); /*0x47460a*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x47460c*/
  return v5; /*0x474561*/
}



// ==== 0x00474620  INIClass::ReadCoord  this=VectorClass  sig=csp ====
int __userpurge INIClass::ReadCoord@<eax>(
        double *a1@<ecx>,
        double a2@<st0>,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5)
{
  int result; // eax

  INIClass::ReadDouble_Overwrite(a1, a3, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  LOWORD(result) = Math::RoundToInt(a2 * 256.0); /*0x474652*/
  return result; /*0x474649*/
}



// ==== 0x00474660  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_474660(ObjectClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetDouble((char *)this, Block, a3, (double)a4 * 0.00390625); /*0x47467f*/
}



// ==== 0x00474690  ObjectTypeClass::ReadBool  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadBool(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, "%d", 360 * a4 / 256); /*0x4746ba*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x4746d8*/
}



// ==== 0x004746E0  ObjectTypeClass::ReadPrerequisite  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadPrerequisite(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 32) ) /*0x4746f9*/
    return (atoi(String) << 8) / 360; /*0x474727*/
  else
    return a4; /*0x47472f*/
}



// ==== 0x00474740  ObjectTypeClass::ReadSoundList  this=ObjectTypeClass  sig=csp ====
unsigned __int8 **__thiscall ObjectTypeClass::ReadSoundList(
        ObjectTypeClass *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5)
{
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, "%d,%d", &a4, &a3); /*0x474776*/
    HIWORD(a4) = (_WORD)a3; /*0x47478e*/
    *a2 = a4; /*0x47479a*/
    return a2; /*0x474785*/
  }
  else
  {
    *a2 = *a5; /*0x4747ac*/
    return a2; /*0x4747a6*/
  }
}



// ==== 0x004747C0  ObjectTypeClass::ReadBool2  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadBool2(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, __int16 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x4747dd*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x4747fb*/
}



// ==== 0x00474810  WarheadTypeClass::loadWarheadINI  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::loadWarheadINI(
        WarheadTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int Int_Overwrite; // eax
  int result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, a2, a3, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return a4; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return 255; /*0x47485e*/
  return result; /*0x47482a*/
}



// ==== 0x004748A0  INIClass::GetPipIdx  this=INIClass  sig=csp ====
int __thiscall INIClass::GetPipIdx(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a2, a3, (&off_81B958)[2 * a4], Destination, 32); /*0x4748c2*/
  v4 = 0; /*0x4748c7*/
  v5 = &off_81B958; /*0x4748c9*/
  while ( _strcmpi(Destination, *v5) ) /*0x4748e0*/
  {
    v5 += 2; /*0x4748e2*/
    ++v4; /*0x4748e5*/
    if ( (int)v5 >= (int)&off_81B9B0 ) /*0x4748ec*/
      return 1; /*0x4748f8*/
  }
  return dword_81B95C[2 * v4]; /*0x4748ee*/
}



// ==== 0x00474940  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474940(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 32) <= 0 ) /*0x474962*/
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
  v5 = &off_81B9B0; /*0x474966*/
  while ( _strcmpi(Destination, *v5) ) /*0x47497d*/
  {
    v5 += 2; /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return dword_81B9B4[2 * v4]; /*0x47498b*/
}



// ==== 0x004749E0  ObjectTypeClass::loadTypeMember_54749E0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_54749E0(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_473960(a4); /*0x4749f1*/
  INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 32); /*0x474a03*/
  return ObjectTypeClass::loadTypeMember_473980((ObjectTypeClass *)Destination); /*0x474a11*/
}



// ==== 0x00474A90  BuildingTypeClass::FindAnimByName  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindAnimByName(
        BuildingTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    (INIClass *)this,
    a2,
    a3,
    *(char **)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * a4) + 772),
    Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B054D0.__tail_10 <= 0 ) /*0x474ac8*/
    return a4; /*0x474b06*/
  v5 = *(_DWORD *)&stru_B054D0.m_1[3]; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(char **)(*(_DWORD *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(_DWORD *)&stru_B054D0.m_1[3]; /*0x474ae8*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B054D0.__tail_10 ) /*0x474b04*/
      return a4; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}



// ==== 0x00474B20  HouseClass::WriteBuildingTypeNameToINI  this=INIClass  sig=csp ====
char __thiscall sub_474B20(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, *(char **)(*((_DWORD *)dword_B054D4 + a4) + 772)); /*0x474b43*/
}



// ==== 0x00474B50  INIClass::GetCoord  this=INIClass  sig=csp ====
int __thiscall INIClass::GetCoord(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  char v7; // cl
  __int16 v8; // [esp+8h] [ebp-8Ch] BYREF
  char v9; // [esp+Ch] [ebp-88h] BYREF
  char v10; // [esp+10h] [ebp-84h] BYREF
  char Buffer[64]; // [esp+14h] [ebp-80h] BYREF
  char Destination[64]; // [esp+54h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a5, a5[1], a5[2]); /*0x474b7c*/
  if ( INIClass::GetString(this, a3, a4, Buffer, Destination, 64) ) /*0x474ba2*/
  {
    sscanf(Destination, "%d,%d,%d", &v8, &v10, &v9); /*0x474bc4*/
    HIBYTE(v8) = v10; /*0x474bdc*/
    v7 = v9; /*0x474be5*/
    *(_WORD *)a2 = v8; /*0x474bee*/
    *(_BYTE *)(a2 + 2) = v7; /*0x474bf3*/
    return a2; /*0x474bd5*/
  }
  else
  {
    *(_WORD *)a2 = *(_WORD *)a5; /*0x474c0c*/
    *(_BYTE *)(a2 + 2) = a5[2]; /*0x474c13*/
    return a2; /*0x474bff*/
  }
}



// ==== 0x00474C20  INIEntry::Write3Bytes  this=INIEntry  sig=csp ====
char __thiscall INIEntry::Write3Bytes(INIEntry *this, unsigned __int8 *Block, char *a3, unsigned __int8 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474c45*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x474c63*/
}



// ==== 0x00474C70  INIEntry::ReadColor  this=INIEntry  sig=csp ====
int __thiscall INIEntry::ReadColor(
        INIEntry *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  char v7; // cl
  int v8; // [esp+8h] [ebp-8Ch] BYREF
  int v9; // [esp+Ch] [ebp-88h] BYREF
  int v10; // [esp+10h] [ebp-84h] BYREF
  char Buffer[64]; // [esp+14h] [ebp-80h] BYREF
  char Destination[64]; // [esp+54h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a5, a5[1], a5[2]); /*0x474c9c*/
  if ( INIClass::GetString((INIClass *)this, a3, a4, Buffer, Destination, 64) ) /*0x474cc2*/
  {
    v8 = 0; /*0x474cd1*/
    v10 = 0; /*0x474cd5*/
    v9 = 0; /*0x474cd9*/
    sscanf(Destination, "%d,%d,%d", &v8, &v10, &v9); /*0x474cf2*/
    BYTE1(v8) = v10; /*0x474d0a*/
    v7 = v9; /*0x474d13*/
    *(_WORD *)a2 = v8; /*0x474d1c*/
    *(_BYTE *)(a2 + 2) = v7; /*0x474d21*/
    return a2; /*0x474d03*/
  }
  else
  {
    *(_WORD *)a2 = *(_WORD *)a5; /*0x474d3a*/
    *(_BYTE *)(a2 + 2) = a5[2]; /*0x474d41*/
    return a2; /*0x474d2d*/
  }
}



// ==== 0x00474D50  ObjectTypeClass::ReadString  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadString(
        ObjectTypeClass *this,
        unsigned __int8 *Block,
        char *a3,
        unsigned __int8 *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474d75*/
  return INIClass::SetString((char *)this, Block, a3, Buffer); /*0x474d93*/
}



// ==== 0x00474DA0  INIClass::LookupEnum  this=INIClass  sig=csp ====
int __thiscall INIClass::LookupEnum(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a2, a3, (&off_81B9D8)[2 * a4], Destination, 32); /*0x474dc2*/
  v4 = 0; /*0x474dc7*/
  v5 = &off_81B9D8; /*0x474dc9*/
  while ( _strcmpi(Destination, *v5) ) /*0x474de0*/
  {
    v5 += 2; /*0x474de2*/
    ++v4; /*0x474de5*/
    if ( (int)v5 >= (int)&off_81BA88 ) /*0x474dec*/
      return 0; /*0x474df5*/
  }
  return `typeinfo for'x1[2 * v4]; /*0x474dee*/
}



// ==== 0x00474E40  ObjectTypeClass::loadTypeMember_5474E40  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474E40(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_81BA88)[a4], Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = &off_81BA88; /*0x474e69*/
  while ( _strcmpi(Destination, *v5) ) /*0x474e80*/
  {
    ++v5; /*0x474e82*/
    ++v4; /*0x474e85*/
    if ( (int)v5 >= (int)&off_81BABC ) /*0x474e8c*/
      return -1; /*0x474e96*/
  }
  return v4; /*0x474e8e*/
}



// ==== 0x00474EE0  SuperWeaponTypeClass::loadSWProperties  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::loadSWProperties(
        SuperWeaponTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
  v4 = 0; /*0x474f07*/
  v5 = (char **)&off_7E4C50; /*0x474f09*/
  while ( _strcmpi(Destination, *v5) ) /*0x474f20*/
  {
    ++v5; /*0x474f22*/
    ++v4; /*0x474f25*/
    if ( (int)v5 >= (int)&off_7E4D74 ) /*0x474f2c*/
      return 0; /*0x474f35*/
  }
  return v4; /*0x474f2e*/
}



// ==== 0x00474F50  ObjectTypeClass::ReadInt  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadInt(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *v4; // eax
  char v6; // [esp+0h] [ebp-3Ch] BYREF
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a4 == -1 ) /*0x474f5a*/
  {
    v6 = 0; /*0x474f6a*/
    v4 = &v6; /*0x474f6f*/
  }
  else
  {
    v4 = (char *)(*((_DWORD *)dword_A8E334 + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString((INIClass *)this, a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read((ObjectClass *)Destination); /*0x474f93*/
}



// ==== 0x00474FA0  ObjectTypeClass::ReadDouble  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDouble(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[100]; // [esp+4h] [ebp-64h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 100); /*0x474fba*/
  if ( strlen(Destination) ) /*0x474fc3*/
    return VocClass::FindByName((VocClass *)Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}



// ==== 0x00474FF0  ObjectTypeClass::ReadDouble2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDouble2(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, void *a4)
{
  char *Name; // eax
  StringTable Destination[4]; // [esp+4h] [ebp-20h] BYREF

  Name = AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString((INIClass *)this, a2, a3, Name, Destination[0].__pad_0, 32); /*0x475013*/
  return StringTable::Lookup(Destination); /*0x475021*/
}



// ==== 0x00475060  ObjectTypeClass::ReadBool3  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadBool3(ObjectTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, void *a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_45DD20((ObjectClass *)a4); /*0x475071*/
  INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 32); /*0x475083*/
  return sub_45DD50((ObjectClass *)Destination); /*0x475091*/
}



// ==== 0x004750D0  INIClass::ParseFlagList  this=INIClass  sig=csp ====
int __thiscall INIClass::ParseFlagList(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *i; // eax
  char String[128]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x4750fa*/
  {
    a4 = 0; /*0x47510d*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475119*/
      a4 |= COMStub_48DEB0((ObjectClass *)i); /*0x475129*/
  }
  return a4; /*0x475139*/
}



// ==== 0x00475150  BulletTypeClass::ReadTrajectoryFlags  this=BulletTypeClass  sig=csp ====
char __thiscall BulletTypeClass::ReadTrajectoryFlags(BulletTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char v4; // bl
  char *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || dword_A83CA8 <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)dword_A83C9C; /*0x47517e*/
  v8 = dword_A83CA8; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(_DWORD *)v5; /*0x47518a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, Str); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(this->ObjectTypeClass, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/
}



// ==== 0x00475260  HouseClass::ReadHouseNamesToBitmask  this=HouseClass  sig=csp ====
int __thiscall HouseClass::ReadHouseNamesToBitmask(HouseClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char *i; // eax
  char String[128]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x47528a*/
  {
    a4 = 0; /*0x47529d*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x4752a9*/
      a4 |= 1 << HouseClass::FindByName(i); /*0x4752c2*/
  }
  return a4; /*0x4752d2*/
}



// ==== 0x004752E0  HouseClass::WriteHouseListToINI  this=INIClass  sig=csp ====
char __thiscall sub_4752E0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char v4; // bl
  HouseClass *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x4752ee*/
  Source[0] = 0; /*0x4752f6*/
  if ( !a4 || dword_A80238 <= 0 ) /*0x475307*/
    return 1; /*0x475307*/
  v5 = dword_A8022C; /*0x47530e*/
  v8 = dword_A80238; /*0x475316*/
  do /*0x4753a3*/
  {
    v6 = *(_DWORD *)v5->AbstractClass; /*0x47531a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5->AbstractClass + 48)) & a4) != 0 ) /*0x475330*/
    {
      if ( v4 ) /*0x475334*/
        strcat(Source, Str); /*0x47535b*/
      strcat(Source, (const char *)(v6 + 90100)); /*0x47538a*/
      v4 = Source[0]; /*0x475393*/
    }
    v5 = (HouseClass *)((char *)v5 + 4); /*0x47539b*/
    --v8; /*0x47539f*/
  }
  while ( v8 ); /*0x4753a3*/
  if ( v4 ) /*0x4753ae*/
    return INIClass::SetString(this, Block, a3, Source); /*0x4753c9*/
  else
    return 1; /*0x4753d8*/
}



// ==== 0x004753F0  ArmorType::FindIndex  this=ArmorType  sig=csp ====
int __thiscall ArmorType::FindIndex(ArmorType *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  ArmorType Destination[16]; // [esp+0h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (char *)(&off_7E5210)[a4], Destination[0].__pad_0, 128); /*0x47541c*/
  return ArmorType::LookupByName(Destination); /*0x47542a*/
}



// ==== 0x004754B0  OverlayTypeClass::ReadINIString  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::ReadINIString(
        OverlayTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(a4); /*0x4754cd*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName((OverlayTypeClass *)Destination); /*0x4754f2*/
  else
    return a4; /*0x475502*/
}



// ==== 0x00475540  SuperWeaponTypeClass::FindOrCreate  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindOrCreate(
        SuperWeaponTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  void *v4; // esi
  int result; // eax
  SuperWeaponTypeClass *v6; // eax
  _BYTE *v7; // eax
  int v8; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+4h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475563*/
    return a4; /*0x4755f8*/
  v4 = (void *)PlayerSlot::NameToDialogID(Destination); /*0x475579*/
  if ( (unsigned __int8)BuildingType::IsSpecialType(v4) ) /*0x47557d*/
    return (int)v4; /*0x475586*/
  result = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)Destination); /*0x475596*/
  if ( result == -1 ) /*0x47559e*/
  {
    v6 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x4755a5*/
    if ( v6 ) /*0x4755af*/
      v7 = SuperWeaponTypeClass::Construct(v6, Destination); /*0x4755b8*/
    else
      v7 = 0; /*0x4755bf*/
    v8 = 0; /*0x4755c7*/
    if ( dword_A83CA8 <= 0 ) /*0x4755cb*/
    {
      return -1; /*0x4755df*/
    }
    else
    {
      for ( i = dword_A83C9C; (_BYTE *)*i != v7; ++i ) /*0x4755cd*/
      {
        if ( ++v8 >= dword_A83CA8 ) /*0x4755dd*/
          return -1; /*0x4755dd*/
      }
      return v8; /*0x4755ec*/
    }
  }
  return result; /*0x475588*/
}



// ==== 0x00475610  INIClass::SetHouseName  this=INIClass  sig=csp ====
int __thiscall INIClass::SetHouseName(char *this, unsigned __int8 *Block, char *a3, void *a4)
{
  const char *v5; // edi
  int result; // eax
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  strcpy(Source, g_Str__none_); /*0x475638*/
  if ( (unsigned __int8)BuildingType::IsSpecialType(a4) ) /*0x47564a*/
  {
    FormatHouseClassPlayerName((int)a4, Source, 128); /*0x47565e*/
    goto LABEL_11; /*0x475663*/
  }
  if ( a4 == (void *)-2 ) /*0x475668*/
  {
    v5 = g_Str__random_; /*0x47566e*/
LABEL_10:
    strcpy(Source, v5); /*0x4756a6*/
    goto LABEL_11; /*0x4756ba*/
  }
  if ( a4 == (void *)-3 ) /*0x475678*/
  {
    v5 = g_Str__random_; /*0x47567e*/
    goto LABEL_10; /*0x475683*/
  }
  if ( (int)a4 >= 0 && (int)a4 < dword_A83CA8 ) /*0x475694*/
  {
    v5 = (const char *)(*((_DWORD *)dword_A83C9C + (_DWORD)a4) + 36); /*0x4756a3*/
    goto LABEL_10; /*0x4756a3*/
  }
LABEL_11:
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Source); /*0x4756c3*/
  return result; /*0x4756df*/
}



// ==== 0x004756F0  HouseTypeClass::loadCountryData  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::loadCountryData(HouseTypeClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  SideClass *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475712*/
    return a4; /*0x475782*/
  result = HouseTypeClass::Find((HouseTypeClass *)Destination); /*0x47571f*/
  if ( result == -1 ) /*0x475727*/
  {
    v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x47572e*/
    if ( v5 ) /*0x475738*/
      v6 = SideClass::Construct(v5, Destination); /*0x475741*/
    else
      v6 = 0; /*0x475748*/
    v7 = 0; /*0x475751*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = (_DWORD *)FootClass_Array.?[0]; (_DWORD *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= FootClass_Array.?[0] ) /*0x475767*/
          return -1; /*0x475767*/
      }
      return v7; /*0x475776*/
    }
  }
  return result; /*0x47576d*/
}



// ==== 0x004757D0  INIClass::GetBool  this=INIClass  sig=csp ====
int __thiscall INIClass::GetBool(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  result = LookupNameIndex((ObjectClass *)Destination); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/
}



// ==== 0x00475820  INIClass::SetStringByIndex  this=INIClass  sig=csp ====
char __thiscall INIClass_SetStringByIndex(char *this, unsigned __int8 *Block, char *a3, unsigned int a4)
{
  if ( a4 < dword_ABF3A0 ) /*0x47582c*/
    return INIClass::SetString(this, Block, a3, *((char **)dword_ABF394 + a4)); /*0x475859*/
  else
    return INIClass::SetString(this, Block, a3, g_Str__none_); /*0x47583d*/
}



// ==== 0x00475870  ScenarioClass::ReadAndParseString  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ReadAndParseString(ScenarioClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475892*/
    return ScenarioClass::FindTerrainTypeIndex((ScenarioClass *)Destination); /*0x47589f*/
  else
    return a4; /*0x4758ad*/
}



// ==== 0x004758C0  MapClass::loadTheaterINI  this=INIClass  sig=csp ====
char __thiscall sub_4758C0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, &Theater_Array[112 * a4]); /*0x4758e6*/
}



// ==== 0x004758F0  Scenario::FindBuildingTypeByName  this=Scenario  sig=csp ====
int __thiscall Scenario::FindBuildingTypeByName(Scenario *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475912*/
    return StringList::Find((StringList *)&unk_A83D10, Destination); /*0x475925*/
  else
    return a4; /*0x475933*/
}



// ==== 0x00475950  ScenarioClass::loadMapData  this=INIClass  sig=csp ====
char __thiscall sub_475950(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char *v5; // eax

  v5 = (char *)ScenarioClass::processEndgame(a4); /*0x47595d*/
  return INIClass::SetString(this, Block, a3, v5); /*0x475974*/
}



// ==== 0x00475980  HouseClass::ReadIntFromINI  this=HouseClass  sig=csp ====
int __thiscall HouseClass::ReadIntFromINI(HouseClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4759a2*/
    return HouseClass::FindHouseIndexByName((HouseClass *)Destination); /*0x4759af*/
  else
    return a4; /*0x4759bd*/
}



// ==== 0x004759D0  HouseClass::updateBuildingProduction  this=INIClass  sig=csp ====
char __thiscall sub_4759D0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetString(this, Block, a3, (&off_7E1B60)[a4]); /*0x4759eb*/
}



// ==== 0x004759F0  INIClass::ReadStringValue  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadStringValue(INIClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination[0].__pad_0, 128) ) /*0x475a12*/
    return INIClass::readSection(Destination); /*0x475a1f*/
  else
    return a4; /*0x475a2d*/
}



// ==== 0x00475A60  BuildingClass::ReadBuildingSettings  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ReadBuildingSettings(
        BuildingClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  int v4; // edi
  char *i; // esi
  int IndexByName; // eax
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x475a84*/
    return a4; /*0x475b55*/
  v4 = 0; /*0x475a9b*/
  for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475aa9*/
  {
    if ( !*i ) /*0x475aaf*/
      break; /*0x475ab2*/
    if ( !_strcmpi(i, aPower) ) /*0x475abe*/
      v4 |= 0x80000000; /*0x475aca*/
    if ( !_strcmpi(i, aFactory) ) /*0x475ad6*/
      v4 |= 0x40000000u; /*0x475ae2*/
    if ( !_strcmpi(i, aBarracks) ) /*0x475aee*/
      v4 |= 0x20000000u; /*0x475afa*/
    if ( !_strcmpi(i, aRadar) ) /*0x475b06*/
      v4 |= 0x10000000u; /*0x475b12*/
    IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)i); /*0x475b1a*/
    if ( IndexByName != -1 ) /*0x475b22*/
      v4 |= 1 << IndexByName; /*0x475b2d*/
  }
  return v4; /*0x475b4a*/
}



// ==== 0x00475B70  WeaponTypeClass::ReadTrajectoryData  this=WeaponTypeClass  sig=csp ====
char __thiscall WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  int v8; // [esp+4h] [ebp-88h]
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = dword_A83C78; /*0x475b94*/
  if ( dword_A83C78 > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v8 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)dword_A83C6C; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Str); /*0x475bf9*/
        strcat(Source, (const char *)(*(_DWORD *)v6 + 36)); /*0x475c27*/
        v4 = v8; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString((char *)this, Block, a3, Source); /*0x475c61*/
}



// ==== 0x00475C70  WeaponTypeClass::ReadVeteranData  this=WeaponTypeClass  sig=csp ====
char __thiscall WeaponTypeClass::ReadVeteranData(
        WeaponTypeClass *this,
        unsigned __int8 *a2,
        char *a3,
        int a4,
        int *Block,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // ebx
  int v11; // ebp
  char *SampleNameByIndex; // edi
  char v13; // bl
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v17; // [esp+89h] [ebp-3h]
  char v18; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475c81*/
  memset(&Source[1], 0, 0x7Cu); /*0x475c90*/
  v17 = 0; /*0x475c92*/
  v18 = 0; /*0x475c94*/
  if ( a8 > 0 ) /*0x475c9e*/
  {
    v10 = Block; /*0x475ca0*/
    v11 = a8; /*0x475ca9*/
    do /*0x475d17*/
    {
      if ( Source[0] ) /*0x475cb1*/
        strcat(Source, Str); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString((char *)this, a2, a3, Source); /*0x475d39*/
  if ( Block && HIBYTE(a7) ) /*0x475d4f*/
    __3_YAXPAX_Z(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}



// ==== 0x00475D70  INIClass::ReadIntList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadIntList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  void *Items; // eax
  bool v17; // zf
  void *v18; // eax
  int v19; // ecx
  VectorClass v21; // [esp+8h] [ebp-21Ch] BYREF
  int v22; // [esp+18h] [ebp-20Ch]
  int v23; // [esp+1Ch] [ebp-208h]
  char String[512]; // [esp+24h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x475d94*/
  {
    VectorClass::Construct(&v21, 0, 0); /*0x475da9*/
    v23 = 10; /*0x475db8*/
    v22 = 0; /*0x475dc0*/
    v21.vtable0 = &TypeList<int>::`vftable'; /*0x475dc4*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x475dd6*/
    {
      if ( !*i ) /*0x475dd8*/
        break; /*0x475dda*/
      v12 = atoi(i); /*0x475de6*/
      if ( v22 < v21.Capacity /*0x475e11*/
        || (v21.IsAllocated || !v21.Capacity)
        && v23 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v21.vtable0 + 2))(
             &v21,
             v23 + v21.Capacity,
             0) )
      {
        v13 = v22++; /*0x475e1c*/
        *((_DWORD *)v21.Items + v13) = v12; /*0x475e27*/
      }
    }
    v14 = a2; /*0x475e3c*/
    IntVector::Copy((IntVector *)a2, &v21); /*0x475e4a*/
    v15 = v23; /*0x475e53*/
    *(_DWORD *)(a2 + 16) = v22; /*0x475e57*/
    Items = v21.Items; /*0x475e5a*/
    v17 = v21.Items == 0; /*0x475e5e*/
    *(_DWORD *)(a2 + 20) = v15; /*0x475e60*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x475e63*/
    v21.vtable0 = &VectorClass<int>::`vftable'; /*0x475e69*/
    if ( !v17 && v21.IsAllocated ) /*0x475e77*/
    {
      __3_YAXPAX_Z(Items); /*0x475e7a*/
      v21.Items = 0; /*0x475e82*/
    }
    v18 = a6; /*0x475e86*/
    v21.IsAllocated = 0; /*0x475e8d*/
    v21.Capacity = 0; /*0x475e93*/
    a5 = &VectorClass<int>::`vftable'; /*0x475e97*/
    if ( a6 && HIBYTE(a8) ) /*0x475eab*/
      goto LABEL_19; /*0x475eab*/
  }
  else
  {
    v14 = a2; /*0x475eaf*/
    *(_DWORD *)(a2 + 4) = 0; /*0x475ec2*/
    *(_DWORD *)(a2 + 8) = 0; /*0x475ec5*/
    *(_BYTE *)(a2 + 12) = 1; /*0x475ec8*/
    *(_BYTE *)(a2 + 13) = 0; /*0x475ecc*/
    *(_DWORD *)a2 = &VectorClass<int>::`vftable'; /*0x475ecf*/
    TypeList::Copy((TypeList *)a2, &a5); /*0x475ed5*/
    v19 = a10; /*0x475ee1*/
    *(_DWORD *)(a2 + 16) = a9; /*0x475ee8*/
    v18 = a6; /*0x475eeb*/
    v17 = a6 == 0; /*0x475ef2*/
    *(_DWORD *)(a2 + 20) = v19; /*0x475ef4*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x475ef7*/
    a5 = &VectorClass<int>::`vftable'; /*0x475efd*/
    if ( !v17 && HIBYTE(a8) ) /*0x475f11*/
LABEL_19:
      __3_YAXPAX_Z(v18); /*0x475f13*/
  }
  return v14; /*0x475f1e*/
}



// ==== 0x00475F30  ScenarioClass::SaveIntListToINI  this=INIClass  sig=csp ====
char __thiscall sub_475F30(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  int i; // ebx
  char Buffer[12]; // [esp+10h] [ebp-20Ch] BYREF
  _BYTE Source[509]; // [esp+1Ch] [ebp-200h] BYREF
  __int16 v9; // [esp+219h] [ebp-3h]
  char v10; // [esp+21Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475f42*/
  memset(&Source[1], 0, 0x1FCu); /*0x475f58*/
  v9 = 0; /*0x475f5a*/
  v10 = 0; /*0x475f5c*/
  for ( i = 0; i < *(_DWORD *)(a4 + 16); ++i ) /*0x475f64*/
  {
    if ( Source[0] ) /*0x475f71*/
      strcat(Source, Str); /*0x475f98*/
    sprintf(Buffer, "%d", *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * i)); /*0x475fb2*/
    strcat(Source, Buffer); /*0x475fde*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x476012*/
}



// ==== 0x00476020  INIClass::ReadExitCellList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadExitCellList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  Factory *v11; // esi
  int ExitCellByName; // eax
  _BYTE *WaypointCoords; // eax
  int Index; // eax
  _BYTE *v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  void *Items; // eax
  bool v22; // zf
  void *v23; // eax
  int v24; // ecx
  VectorClass v26; // [esp+8h] [ebp-234h] BYREF
  int v27; // [esp+18h] [ebp-224h]
  int v28; // [esp+1Ch] [ebp-220h]
  int v29; // [esp+28h] [ebp-214h]
  ScriptAction v30; // [esp+2Ch] [ebp-210h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, (char *)v30.ScriptAction_field_0x10, 512) ) /*0x476044*/
  {
    VectorClass::Construct(&v26, 0, 0); /*0x476059*/
    v28 = 10; /*0x476068*/
    v27 = 0; /*0x476070*/
    v26.vtable0 = &TypeList<int>::`vftable'; /*0x476074*/
    v11 = (Factory *)strtok((char *)v30.ScriptAction_field_0x10, Str); /*0x476081*/
    if ( v11 ) /*0x476088*/
    {
      while ( 1 ) /*0x47608e*/
      {
        if ( !v11->__pad_0[0] ) /*0x476090*/
          goto LABEL_16; /*0x476090*/
        ExitCellByName = Factory::FindExitCellByName(v11); /*0x476098*/
        if ( ExitCellByName != -1 ) /*0x4760a0*/
          break; /*0x4760a0*/
        Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v11); /*0x4760b4*/
        if ( Index != -1 ) /*0x4760bc*/
        {
          WaypointCoords = ScriptAction::GetWaypointCoords(&v30, *((_DWORD **)dword_A83CE4 + Index)); /*0x4760cc*/
          goto LABEL_8; /*0x4760cc*/
        }
LABEL_15:
        v11 = (Factory *)strtok(0, Str); /*0x476137*/
        if ( !v11 ) /*0x476149*/
          goto LABEL_16; /*0x476149*/
      }
      WaypointCoords = ScriptAction::GetWaypointCoords( /*0x4760b0*/
                         (ScriptAction *)v30.ScriptAction_field_0x8,
                         *((_DWORD **)dword_A8E34C + ExitCellByName));
LABEL_8:
      v15 = WaypointCoords; /*0x4760d1*/
      v16 = *(_DWORD *)WaypointCoords; /*0x4760d3*/
      LOBYTE(v29) = v15[4]; /*0x4760da*/
      if ( (_BYTE)v29 ) /*0x4760de*/
      {
        v17 = v16 & 0xFFFFFF | ((unsigned __int8)v29 << 24); /*0x4760f6*/
        if ( v27 < v26.Capacity /*0x47611e*/
          || (v26.IsAllocated || !v26.Capacity)
          && v28 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v26.vtable0 + 2))(
               &v26,
               v28 + v26.Capacity,
               0) )
        {
          v18 = v27++; /*0x476129*/
          *((_DWORD *)v26.Items + v18) = v17; /*0x476134*/
        }
      }
      goto LABEL_15; /*0x476134*/
    }
LABEL_16:
    v19 = a2; /*0x47614f*/
    IntVector::Copy((IntVector *)a2, &v26); /*0x47615d*/
    v20 = v28; /*0x476166*/
    *(_DWORD *)(a2 + 16) = v27; /*0x47616a*/
    Items = v26.Items; /*0x47616d*/
    v22 = v26.Items == 0; /*0x476171*/
    *(_DWORD *)(a2 + 20) = v20; /*0x476173*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x476176*/
    v26.vtable0 = &VectorClass<int>::`vftable'; /*0x47617c*/
    if ( !v22 && v26.IsAllocated ) /*0x47618a*/
    {
      __3_YAXPAX_Z(Items); /*0x47618d*/
      v26.Items = 0; /*0x476195*/
    }
    v23 = a6; /*0x476199*/
    v26.IsAllocated = 0; /*0x4761a0*/
    v26.Capacity = 0; /*0x4761a6*/
    a5 = &VectorClass<int>::`vftable'; /*0x4761aa*/
    if ( a6 && HIBYTE(a8) ) /*0x4761be*/
      goto LABEL_24; /*0x4761be*/
  }
  else
  {
    v19 = a2; /*0x4761c2*/
    *(_DWORD *)(a2 + 4) = 0; /*0x4761d5*/
    *(_DWORD *)(a2 + 8) = 0; /*0x4761d8*/
    *(_BYTE *)(a2 + 12) = 1; /*0x4761db*/
    *(_BYTE *)(a2 + 13) = 0; /*0x4761df*/
    *(_DWORD *)a2 = &VectorClass<int>::`vftable'; /*0x4761e2*/
    TypeList::Copy((TypeList *)a2, &a5); /*0x4761e8*/
    v24 = a10; /*0x4761f4*/
    *(_DWORD *)(a2 + 16) = a9; /*0x4761fb*/
    v23 = a6; /*0x4761fe*/
    v22 = a6 == 0; /*0x476205*/
    *(_DWORD *)(a2 + 20) = v24; /*0x476207*/
    *(_DWORD *)a2 = &TypeList<int>::`vftable'; /*0x47620a*/
    a5 = &VectorClass<int>::`vftable'; /*0x476210*/
    if ( !v22 && HIBYTE(a8) ) /*0x476224*/
LABEL_24:
      __3_YAXPAX_Z(v23); /*0x476226*/
  }
  return v19; /*0x476231*/
}



// ==== 0x00476240  ObjectTypeClass::ReadTypeListINI  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadTypeListINI(ObjectTypeClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  int i; // ebp
  int v5; // eax
  int v6; // ecx
  _BYTE v8[521]; // [esp+Ch] [ebp-20Ch] BYREF
  __int16 v9; // [esp+215h] [ebp-3h]
  char v10; // [esp+217h] [ebp-1h]

  *(_DWORD *)&v8[8] = this; /*0x47624d*/
  v8[12] = g_INI_DefaultBuffer; /*0x476252*/
  memset(&v8[13], 0, 0x1FCu); /*0x476268*/
  v9 = 0; /*0x47626a*/
  v10 = 0; /*0x47626c*/
  for ( i = 0; i < *(_DWORD *)(a4 + 16); ++i ) /*0x476274*/
  {
    if ( v8[12] ) /*0x476281*/
      strcat(&v8[12], Str); /*0x4762a8*/
    v5 = *(_DWORD *)(a4 + 4); /*0x4762b1*/
    v8[4] = 0; /*0x4762b4*/
    v6 = *(_DWORD *)(v5 + 4 * i); /*0x4762bc*/
    v8[4] = HIBYTE(v6); /*0x4762c6*/
    *(_DWORD *)v8 = v6 & 0xFFFFFF; /*0x4762ce*/
    strcat(&v8[12], (const char *)(System_Read_6E7330((ObjectClass *)v8) + 36)); /*0x4762fa*/
  }
  return INIClass::SetString(*(char **)&v8[8], Block, a3, &v8[12]); /*0x47632e*/
}



// ==== 0x00476340  ParticleSystemTypeClass::ReadXYZFromINI  this=ParticleSystemTypeClass  sig=csp ====
float *__thiscall ParticleSystemTypeClass::ReadXYZFromINI(
        ParticleSystemTypeClass *this,
        float *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        float *a5)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  float v9; // [esp+4h] [ebp-20Ch]
  float v10; // [esp+8h] [ebp-208h]
  float v11; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Str); /*0x476396*/
    atof(v5); /*0x47639c*/
    __asm { fstp [esp+21Ch+var_20C] } /*0x4763a1*/
    v6 = strtok(0, Str); /*0x4763ac*/
    atof(v6); /*0x4763b2*/
    __asm { fstp [esp+228h+var_208] } /*0x4763b7*/
    v7 = strtok(0, Str); /*0x4763c2*/
    atof(v7); /*0x4763c8*/
    __asm { fstp [esp+234h+var_204] } /*0x4763d8*/
    *a2 = v9; /*0x4763e1*/
    a2[1] = v10; /*0x4763e8*/
    a2[2] = v11; /*0x4763ef*/
    return a2; /*0x4763cd*/
  }
  else
  {
    *a2 = *a5; /*0x476406*/
    a2[1] = a5[1]; /*0x47640b*/
    a2[2] = a5[2]; /*0x476412*/
    return a2; /*0x4763fb*/
  }
}



// ==== 0x00476420  INIClass::GetCoord2  this=INIClass  sig=csp ====
int *__thiscall INIClass::GetCoord2(INIClass *this, int *a2, unsigned __int8 *a3, unsigned __int8 *a4, int *a5)
{
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  int v10; // eax
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476463*/
  {
    v5 = strtok(String, Str); /*0x476477*/
    v6 = atoi(v5); /*0x476489*/
    v7 = strtok(0, Str); /*0x47648b*/
    v8 = atoi(v7); /*0x47649d*/
    v9 = strtok(0, Str); /*0x47649f*/
    v10 = atoi(v9); /*0x4764a5*/
    *a2 = v6; /*0x4764b6*/
    a2[1] = v8; /*0x4764b8*/
    a2[2] = v10; /*0x4764bd*/
    return a2; /*0x4764c0*/
  }
  else
  {
    *a2 = *a5; /*0x4764d6*/
    a2[1] = a5[1]; /*0x4764db*/
    a2[2] = a5[2]; /*0x4764e2*/
    return a2; /*0x4764cb*/
  }
}



// ==== 0x004764F0  INIClass::ReadTechnoTypeList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadTechnoTypeList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // edi
  int v12; // esi
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  void *Items; // eax
  int CapacityIncrement; // edx
  bool v18; // zf
  void *v19; // eax
  int v20; // edx
  TypeList v22; // [esp+Ch] [ebp-21Ch] BYREF
  char String[512]; // [esp+28h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476515*/
  {
    TypeList::TechnoTypeConstructor(&v22, 0, 0); /*0x47652a*/
    v22.? = 10; /*0x476539*/
    v22.? = 0; /*0x476541*/
    v22.DynamicVectorClass = &TypeList<TechnoTypeClass *>::`vftable'; /*0x476545*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x476559*/
    {
      if ( !*i ) /*0x47655f*/
        break; /*0x476561*/
      v12 = 0; /*0x47656c*/
      if ( stru_A8EB00.ObjectTypeClass[4] > 0 ) /*0x476570*/
      {
        while ( _strcmpi(i, (char *)(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v12) + 36)) ) /*0x47658a*/
        {
          if ( ++v12 >= stru_A8EB00.ObjectTypeClass[4] ) /*0x476594*/
            goto LABEL_14; /*0x476594*/
        }
        v13 = (_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v12); /*0x4765a2*/
        if ( v22.? < v22.? /*0x4765cb*/
          || (v22.? || !v22.?)
          && v22.? > 0
          && (*((unsigned __int8 (__thiscall **)(TypeList *, int, _DWORD))v22.DynamicVectorClass + 2))(
               &v22,
               v22.? + v22.?,
               0) )
        {
          v14 = v22.?++; /*0x4765da*/
          *((_DWORD *)v22.? + v14) = *v13; /*0x4765e3*/
        }
      }
LABEL_14:
      ; /*0x4765f1*/
    }
    v15 = a2; /*0x4765fe*/
    INIClass::parseSection((INIClass *)a2, &v22); /*0x47660c*/
    Items = v22.?; /*0x476611*/
    CapacityIncrement = v22.?; /*0x476619*/
    v18 = v22.? == 0; /*0x476622*/
    *(_DWORD *)(a2 + 16) = v22.?; /*0x476624*/
    *(_DWORD *)(a2 + 20) = CapacityIncrement; /*0x476627*/
    *(_DWORD *)a2 = &TypeList<TechnoTypeClass *>::`vftable'; /*0x47662a*/
    v22.DynamicVectorClass = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x476630*/
    if ( !v18 && v22.? ) /*0x47663a*/
    {
      __3_YAXPAX_Z(Items); /*0x47663d*/
      v22.? = 0; /*0x476645*/
    }
    v19 = a6; /*0x476649*/
    v22.? = 0; /*0x476650*/
    v22.? = 0; /*0x476656*/
    a5 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x47665a*/
    if ( a6 && HIBYTE(a8) ) /*0x47666a*/
      goto LABEL_23; /*0x47666a*/
  }
  else
  {
    v15 = a2; /*0x47666e*/
    *(_DWORD *)(a2 + 4) = 0; /*0x476686*/
    *(_DWORD *)(a2 + 8) = 0; /*0x476689*/
    *(_BYTE *)(a2 + 12) = 1; /*0x47668c*/
    *(_BYTE *)(a2 + 13) = 0; /*0x476690*/
    *(_DWORD *)a2 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x476693*/
    INIClass::writeSection((INIClass *)a2, &a5); /*0x476695*/
    v19 = a6; /*0x47669a*/
    v20 = a10; /*0x4766a8*/
    v18 = a6 == 0; /*0x4766af*/
    *(_DWORD *)(a2 + 16) = a9; /*0x4766b1*/
    *(_DWORD *)(a2 + 20) = v20; /*0x4766b4*/
    *(_DWORD *)a2 = &TypeList<TechnoTypeClass *>::`vftable'; /*0x4766b7*/
    a5 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4766bd*/
    if ( !v18 && HIBYTE(a8) ) /*0x4766cd*/
LABEL_23:
      __3_YAXPAX_Z(v19); /*0x4766cf*/
  }
  return v15; /*0x4766da*/
}



// ==== 0x004766F0  ScenarioClass::SaveTypeNameListToINI  this=INIClass  sig=csp ====
char __thiscall sub_4766F0(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  _BYTE Source[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v8; // [esp+205h] [ebp-3h]
  char v9; // [esp+207h] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x476700*/
  memset(&Source[1], 0, 0x1FCu); /*0x47670f*/
  v8 = 0; /*0x476718*/
  v9 = 0; /*0x47671a*/
  if ( *(int *)(a4 + 16) > 0 ) /*0x476720*/
  {
    v4 = *(_DWORD *)(a4 + 4); /*0x476722*/
    v5 = *(_DWORD *)(a4 + 16); /*0x476728*/
    do /*0x476792*/
    {
      if ( Source[0] ) /*0x476730*/
        strcat(Source, Str); /*0x476757*/
      strcat(Source, (const char *)(*(_DWORD *)v4 + 36)); /*0x476785*/
      v4 += 4; /*0x476789*/
      --v5; /*0x47678f*/
    }
    while ( v5 ); /*0x476792*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x4767b5*/
}



// ==== 0x004767C0  INIClass::ReadSuperWeaponTypeList  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::ReadSuperWeaponTypeList(
        INIClass *this,
        _DWORD *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  SuperWeaponTypeClass *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  int Capacity; // eax
  _DWORD *v18; // esi
  int v19; // eax
  _DWORD *v20; // esi
  void *Items; // eax
  int v22; // edx
  bool v23; // zf
  void *v24; // eax
  int v25; // edx
  VectorClass v27; // [esp+8h] [ebp-9Ch] BYREF
  int v28; // [esp+18h] [ebp-8Ch]
  int v29; // [esp+1Ch] [ebp-88h]
  char String[128]; // [esp+24h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x4767e3*/
  {
    VectorClass::Construct(&v27, 0, 0); /*0x4767fa*/
    v29 = 10; /*0x476809*/
    v28 = 0; /*0x476811*/
    v27.vtable0 = &TypeList<int>::`vftable'; /*0x476819*/
    v11 = (SuperWeaponTypeClass *)strtok(String, Str); /*0x476826*/
    if ( v11 ) /*0x47682d*/
    {
      while ( 1 ) /*0x476833*/
      {
        if ( !LOBYTE(v11->AbstractTypeClass) ) /*0x476836*/
          goto LABEL_23; /*0x476836*/
        v12 = SuperWeaponTypeClass::FindByName(v11); /*0x476843*/
        if ( v12 != -1 ) /*0x476848*/
        {
          if ( v28 < v27.Capacity /*0x47687f*/
            || (v27.IsAllocated || !v27.Capacity)
            && v29 > 0
            && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.vtable0 + 2))(
                 &v27,
                 v29 + v27.Capacity,
                 0) )
          {
            v13 = v28++; /*0x47688e*/
            *((_DWORD *)v27.Items + v13) = v12; /*0x476899*/
          }
          goto LABEL_22; /*0x47689c*/
        }
        v14 = HouseTypeClass::Find((HouseTypeClass *)v11); /*0x4768a3*/
        if ( v14 != -1 ) /*0x4768ab*/
        {
          v15 = 0; /*0x4768b3*/
          v16 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v14); /*0x4768b5*/
          if ( *(int *)(v16 + 168) > 0 ) /*0x4768c0*/
            break; /*0x4768c0*/
        }
LABEL_22:
        v11 = (SuperWeaponTypeClass *)strtok(0, Str); /*0x476922*/
        if ( !v11 ) /*0x476935*/
          goto LABEL_23; /*0x476935*/
      }
      Capacity = v27.Capacity; /*0x4768c2*/
      while ( 1 ) /*0x4768cc*/
      {
        v18 = (_DWORD *)(*(_DWORD *)(v16 + 156) + 4 * v15); /*0x4768cc*/
        if ( v28 < Capacity ) /*0x4768d5*/
          goto LABEL_19; /*0x4768d5*/
        if ( !v27.IsAllocated && Capacity || v29 <= 0 ) /*0x4768e9*/
          goto LABEL_21; /*0x4768e9*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.vtable0 + 2))(&v27, v29 + Capacity, 0) ) /*0x4768f8*/
        {
LABEL_19:
          v19 = v28++; /*0x476907*/
          *((_DWORD *)v27.Items + v19) = *v18; /*0x476910*/
        }
        Capacity = v27.Capacity; /*0x476913*/
LABEL_21:
        if ( ++v15 >= *(_DWORD *)(v16 + 168) ) /*0x476920*/
          goto LABEL_22; /*0x476920*/
      }
    }
LABEL_23:
    v20 = a2; /*0x47693b*/
    IntVector::Copy((IntVector *)a2, &v27); /*0x476949*/
    Items = v27.Items; /*0x47694e*/
    v22 = v29; /*0x476956*/
    v23 = v27.Items == 0; /*0x47695f*/
    a2[4] = v28; /*0x476961*/
    a2[5] = v22; /*0x476964*/
    *a2 = &TypeList<int>::`vftable'; /*0x476967*/
    v27.vtable0 = &VectorClass<int>::`vftable'; /*0x47696d*/
    if ( !v23 && v27.IsAllocated ) /*0x476979*/
    {
      __3_YAXPAX_Z(Items); /*0x47697c*/
      v27.Items = 0; /*0x476984*/
    }
    v24 = a6; /*0x47698c*/
    a5 = &VectorClass<int>::`vftable'; /*0x476993*/
    v27.IsAllocated = 0; /*0x47699b*/
    v27.Capacity = 0; /*0x4769a2*/
    if ( a6 && HIBYTE(a8) ) /*0x4769b6*/
      goto LABEL_31; /*0x4769b6*/
  }
  else
  {
    v20 = a2; /*0x4769ba*/
    IntVector::Copy((IntVector *)a2, &a5); /*0x4769cb*/
    v24 = a6; /*0x4769d0*/
    v25 = a10; /*0x4769de*/
    a2[4] = a9; /*0x4769e5*/
    a2[5] = v25; /*0x4769ea*/
    *a2 = &TypeList<int>::`vftable'; /*0x4769ed*/
    a5 = &VectorClass<int>::`vftable'; /*0x4769f3*/
    if ( v24 && HIBYTE(a8) ) /*0x476a09*/
LABEL_31:
      __3_YAXPAX_Z(v24); /*0x476a0b*/
  }
  return v20; /*0x476a16*/
}



// ==== 0x00476A20  INIClass::WriteSuperWeaponList  this=INIClass  sig=csp ====
char __thiscall INIClass::WriteSuperWeaponList(
        INIClass *this,
        unsigned __int8 *a2,
        char *a3,
        int a4,
        void *Block,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  void *v10; // esi
  int *v11; // edx
  int v12; // ebx
  int v13; // ecx
  char v14; // bl
  _BYTE Source[125]; // [esp+10h] [ebp-80h] BYREF
  __int16 v18; // [esp+8Dh] [ebp-3h]
  char v19; // [esp+8Fh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x476a32*/
  v10 = Block; /*0x476a41*/
  memset(&Source[1], 0, 0x7Cu); /*0x476a48*/
  v18 = 0; /*0x476a4a*/
  v19 = 0; /*0x476a4c*/
  if ( a8 > 0 ) /*0x476a56*/
  {
    v11 = (int *)Block; /*0x476a59*/
    v12 = a8; /*0x476a5b*/
    do /*0x476acd*/
    {
      if ( Source[0] ) /*0x476a63*/
        strcat(Source, Str); /*0x476a8a*/
      v13 = *v11++; /*0x476a93*/
      strcat(Source, (const char *)(*((_DWORD *)dword_A83C9C + v13) + 36)); /*0x476ac3*/
      --v12; /*0x476aca*/
    }
    while ( v12 ); /*0x476acd*/
    v10 = Block; /*0x476acf*/
  }
  v14 = INIClass::SetString(this->__pad_0, a2, a3, Source); /*0x476af7*/
  if ( v10 && HIBYTE(a7) ) /*0x476b04*/
    __3_YAXPAX_Z(v10); /*0x476b07*/
  return v14; /*0x476b0f*/
}



// ==== 0x00476B20  INIClass::ReadRGBColorList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadRGBColorList(
        INIClass *this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // esi
  void *v17; // eax
  int v18; // edx
  bool v19; // zf
  void *v20; // eax
  int v21; // edx
  char v23; // [esp+Fh] [ebp-221h]
  __int16 v24; // [esp+10h] [ebp-220h]
  char v25; // [esp+12h] [ebp-21Eh]
  void **v26; // [esp+14h] [ebp-21Ch] BYREF
  void *Block; // [esp+18h] [ebp-218h]
  int v28; // [esp+1Ch] [ebp-214h]
  char v29; // [esp+21h] [ebp-20Fh]
  int v30; // [esp+24h] [ebp-20Ch]
  int v31; // [esp+28h] [ebp-208h]
  char String[512]; // [esp+30h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476b45*/
  {
    BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&v26, 0, 0); /*0x476b5a*/
    v31 = 10; /*0x476b69*/
    v30 = 0; /*0x476b71*/
    v26 = &TypeList<RGBClass>::`vftable'; /*0x476b75*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x476b87*/
    {
      if ( !*i ) /*0x476b8d*/
        break; /*0x476b8f*/
      v23 = 1; /*0x476ba3*/
      v24 = (unsigned __int8)atoi(i + 1); /*0x476bb4*/
      v12 = strtok(0, Str); /*0x476bc4*/
      if ( v12 && *v12 ) /*0x476bd0*/
        HIBYTE(v24) = atoi(v12); /*0x476bdd*/
      else
        v23 = 0; /*0x476be3*/
      v13 = strtok(0, Str); /*0x476bed*/
      if ( v13 ) /*0x476bf9*/
      {
        if ( *v13 ) /*0x476bfb*/
        {
          v13[strlen(v13) - 1] = 0; /*0x476c0c*/
          v25 = atoi(v13); /*0x476c15*/
          if ( v23 ) /*0x476c22*/
          {
            if ( v30 < v28 /*0x476c4e*/
              || (v29 || !v28)
              && v31 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v26[2])(&v26, v31 + v28, 0) )
            {
              v14 = v30++; /*0x476c59*/
              v15 = (char *)Block + 2 * v14 + v14; /*0x476c6c*/
              *(_WORD *)v15 = v24; /*0x476c72*/
              v15[2] = v25; /*0x476c75*/
            }
          }
        }
      }
    }
    v16 = a2; /*0x476c8e*/
    INIClass::parseKeyValue((INIClass *)a2, &v26); /*0x476c9c*/
    v17 = Block; /*0x476ca1*/
    v18 = v31; /*0x476ca9*/
    v19 = Block == 0; /*0x476cb2*/
    *(_DWORD *)(a2 + 16) = v30; /*0x476cb4*/
    *(_DWORD *)(a2 + 20) = v18; /*0x476cb7*/
    *(_DWORD *)a2 = &TypeList<RGBClass>::`vftable'; /*0x476cba*/
    v26 = &VectorClass<RGBClass>::`vftable'; /*0x476cc0*/
    if ( !v19 && v29 ) /*0x476cca*/
    {
      __3_YAXPAX_Z(v17); /*0x476ccd*/
      Block = 0; /*0x476cd5*/
    }
    v20 = a6; /*0x476cd9*/
    v29 = 0; /*0x476ce0*/
    v28 = 0; /*0x476ce6*/
    a5 = &VectorClass<RGBClass>::`vftable'; /*0x476cea*/
    if ( a6 && HIBYTE(a8) ) /*0x476cfa*/
      goto LABEL_26; /*0x476cfa*/
  }
  else
  {
    v16 = a2; /*0x476cfe*/
    *(_DWORD *)(a2 + 4) = 0; /*0x476d16*/
    *(_DWORD *)(a2 + 8) = 0; /*0x476d19*/
    *(_BYTE *)(a2 + 12) = 1; /*0x476d1c*/
    *(_BYTE *)(a2 + 13) = 0; /*0x476d20*/
    *(_DWORD *)a2 = &VectorClass<RGBClass>::`vftable'; /*0x476d23*/
    ParticleTypeClass::EnsureCapacity((ParticleTypeClass *)a2, &a5); /*0x476d25*/
    v20 = a6; /*0x476d2a*/
    v21 = a10; /*0x476d38*/
    v19 = a6 == 0; /*0x476d3f*/
    *(_DWORD *)(a2 + 16) = a9; /*0x476d41*/
    *(_DWORD *)(a2 + 20) = v21; /*0x476d44*/
    *(_DWORD *)a2 = &TypeList<RGBClass>::`vftable'; /*0x476d47*/
    a5 = &VectorClass<RGBClass>::`vftable'; /*0x476d4d*/
    if ( !v19 && HIBYTE(a8) ) /*0x476d5d*/
LABEL_26:
      __3_YAXPAX_Z(v20); /*0x476d5f*/
  }
  return v16; /*0x476d6a*/
}



// ==== 0x00476D80  Hash::ComputeHashSHA1  this=GameConfig  sig=csp ====
int __thiscall SHA1_ComputeHash(int this)
{
  unsigned int v3[3]; // [esp+8h] [ebp-8Ch] BYREF
  int v4[3]; // [esp+14h] [ebp-80h] BYREF
  char v5; // [esp+20h] [ebp-74h]
  int v6; // [esp+38h] [ebp-5Ch]
  int v7; // [esp+3Ch] [ebp-58h]
  int v8; // [esp+40h] [ebp-54h]
  int v9; // [esp+44h] [ebp-50h]
  int v10; // [esp+48h] [ebp-4Ch]
  int v11; // [esp+4Ch] [ebp-48h]
  int v12; // [esp+50h] [ebp-44h]

  if ( !*(_BYTE *)(this + 64) ) /*0x476d8c*/
  {
    v4[1] = 0; /*0x476d95*/
    v4[2] = 0; /*0x476d9a*/
    v5 = 0; /*0x476d9e*/
    v11 = 0; /*0x476da2*/
    v12 = 0; /*0x476da6*/
    v6 = 1732584193; /*0x476daa*/
    v7 = -271733879; /*0x476db2*/
    v8 = -1732584194; /*0x476dba*/
    v9 = 271733878; /*0x476dc2*/
    v10 = -1009589776; /*0x476dca*/
    v4[0] = (int)&SHAPipe::`vftable'; /*0x476dd2*/
    INIClass::WriteToString((_DWORD *)this, (int)v4); /*0x476dda*/
    SHA1::ComputeThunk(this + 65); /*0x476de7*/
    *(_BYTE *)(this + 64) = 1; /*0x476df0*/
    Pipe::Dtor(v4); /*0x476df4*/
  }
  memset(v3, 0, sizeof(v3)); /*0x476e03*/
  return Checksummer::Add_Buffer(v3, (unsigned __int8 *)(this + 65), 20); /*0x476e14*/
}



// ==== 0x00476E20  ObjectClass::method_476E20  this=ObjectClass  sig=csp ====
int __thiscall sub_476E20(ObjectClass *this)
{
  SHA1 v3; // [esp+4h] [ebp-80h] BYREF
  int v4; // [esp+28h] [ebp-5Ch]
  int v5; // [esp+2Ch] [ebp-58h]
  int v6; // [esp+30h] [ebp-54h]
  int v7; // [esp+34h] [ebp-50h]
  int v8; // [esp+38h] [ebp-4Ch]
  int v9; // [esp+3Ch] [ebp-48h]
  int v10; // [esp+40h] [ebp-44h]

  memset(&v3.SHA1_field_0x04, 0, 9); /*0x476e29*/
  v9 = 0; /*0x476e35*/
  v10 = 0; /*0x476e39*/
  v4 = 1732584193; /*0x476e44*/
  v5 = -271733879; /*0x476e4c*/
  v6 = -1732584194; /*0x476e54*/
  v7 = 271733878; /*0x476e5c*/
  v8 = -1009589776; /*0x476e64*/
  *(_DWORD *)v3.__pad_0 = &SHAPipe::`vftable'; /*0x476e6c*/
  INIClass::WriteToString((INIClass *)this, (int)&v3); /*0x476e74*/
  SHA1::ComputeThunk(&v3, (char *)&this->ambientSoundController[1] + 1); /*0x476e81*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x476e8a*/
  return Pipe::Dtor((Pipe *)&v3); /*0x476e93*/
}



// ==== 0x00476EA0  ObjectClass::method_476EA0  this=ObjectClass  sig=csp ====
void __thiscall sub_476EA0(ObjectClass *this)
{
  LOBYTE(this->ambientSoundController[1]) = 0; /*0x476ea0*/
}



// ==== 0x00476EB0  INIEntry::GetTechnoType  this=INIEntry  sig=csp ====
int __thiscall INIEntry::GetTechnoType(INIEntry *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int ExitCellByName; // eax
  int Index; // eax
  int v6; // eax
  int IndexByName; // eax
  TypeClass Destination[32]; // [esp+4h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, g_Str__none_, (char *)Destination, 128); /*0x476ed5*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)Destination); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x476eef*/
  Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)Destination); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *((_DWORD *)dword_A83CE4 + Index); /*0x476f10*/
  v6 = TypeClass::FindByName(Destination); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *((_DWORD *)dword_A8B21C + v6); /*0x476f31*/
  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)Destination); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((_DWORD *)dword_A83C6C + IndexByName); /*0x476f52*/
}



// ==== 0x00476FC0  ObjectTypeClass::loadTypeMember_476FC0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_476FC0(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48E030(a4); /*0x476fdd*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x476ff5*/
    return ObjectTypeClass::loadTypeMember_48DFF0((ObjectTypeClass *)Destination); /*0x477002*/
  else
    return a4; /*0x477012*/
}



// ==== 0x00477050  AnimTypeClass::ReadINIString  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::ReadINIString(
        AnimTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = globalHelper_08E090(a4); /*0x47706d*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName((AnimTypeClass *)Destination); /*0x477092*/
  else
    return a4; /*0x4770a2*/
}



// ==== 0x004770E0  LoadBuildingTypeClassPrerequisites  this=TypeList  sig=csp ====
DynamicVectorClass *__fastcall LoadBuildingTypeClassPrerequisites(
        DynamicVectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // esi
  char v13; // bl
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  DynamicVector v21; // [esp+2Ch] [ebp-A0h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, v21.__pad_20, 128) ) /*0x47710a*/
  {
    DynamicVectorClass::Construct((DynamicVectorClass *)&v21, 0, 0); /*0x477121*/
    *(_DWORD *)v21.__pad_0 = &TypeList<int>::`vftable'; /*0x47712a*/
    for ( i = strtok(v21.__pad_20, Str); i; i = strtok(0, Str) ) /*0x477144*/
    {
      if ( !*i ) /*0x47714a*/
        break; /*0x47714d*/
      v13 = 0; /*0x477159*/
      if ( !_strcmpi(i, aPower) ) /*0x47715b*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477194*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v14 = v21.DynamicVector_field_0x10++; /*0x47719f*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v14) = -1; /*0x4771aa*/
        }
        v13 = 1; /*0x4771b1*/
      }
      if ( !_strcmpi(i, aFactory) ) /*0x4771b9*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4771f2*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v15 = v21.DynamicVector_field_0x10++; /*0x4771fd*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v15) = -2; /*0x477208*/
        }
        v13 = 1; /*0x47720f*/
      }
      if ( !_strcmpi(i, aBarracks) ) /*0x477217*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477250*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v16 = v21.DynamicVector_field_0x10++; /*0x47725b*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v16) = -3; /*0x477266*/
        }
        v13 = 1; /*0x47726d*/
      }
      if ( !_strcmpi(i, aRadar) ) /*0x477275*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4772ae*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v17 = v21.DynamicVector_field_0x10++; /*0x4772b9*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v17) = -4; /*0x4772c4*/
        }
        v13 = 1; /*0x4772cb*/
      }
      if ( !_strcmpi(i, aTech) ) /*0x4772d3*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47730c*/
          || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
               0) )
        {
          v18 = v21.DynamicVector_field_0x10++; /*0x477317*/
          *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v18) = -5; /*0x477322*/
        }
        v13 = 1; /*0x477329*/
      }
      if ( _strcmpi(i, aProc) ) /*0x477331*/
      {
        if ( !v13 ) /*0x47738b*/
        {
          v21.DynamicVector_field_0x1C = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)i); /*0x477397*/
          if ( v21.DynamicVector_field_0x1C != -1 ) /*0x47739b*/
            DynamicVector::Add_Alt(&v21, &v21.DynamicVector_field_0x1C); /*0x4773a6*/
        }
      }
      else if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47736a*/
             || (v21.__pad_C[1] || !v21.DynamicVector_field_0x8)
             && *(int *)v21.__pad_14 > 0
             && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v21.__pad_0 + 8))(
                  &v21,
                  v21.DynamicVector_field_0x8 + *(_DWORD *)v21.__pad_14,
                  0) )
      {
        v19 = v21.DynamicVector_field_0x10++; /*0x477375*/
        *(_DWORD *)(*(_DWORD *)&v21.DynamicVector_field_0x1[3] + 4 * v19) = -6; /*0x477380*/
      }
    }
    DynamicVectorClass::Copy(a1, &v21); /*0x4773cb*/
    a1->vtable0 = (int)&TypeList<int>::`vftable'; /*0x4773d9*/
    *(_DWORD *)v21.__pad_0 = &VectorClass<int>::`vftable'; /*0x4773df*/
    VectorClass::Destroy((int)&v21); /*0x4773e3*/
    a5 = &VectorClass<int>::`vftable'; /*0x4773ef*/
    VectorClass::Destroy((int)&a5); /*0x4773f6*/
    return a1; /*0x4773fb*/
  }
  else
  {
    VectorClass::Copy(a1, &a5); /*0x477413*/
    a5 = &VectorClass<int>::`vftable'; /*0x47741f*/
    VectorClass::Destroy((int)&a5); /*0x47742a*/
    return a1; /*0x47742f*/
  }
}



// ==== 0x00477440  GameSetup::ParseCoordTriple  this=GameSetup  sig=csp ====
const char *__thiscall GameSetup::ParseCoordTriple(
        GameSetup *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int *a4,
        int *a5,
        const char **a6)
{
  const char *result; // eax
  char *v7; // eax
  char *v8; // eax
  char String[509]; // [esp+4h] [ebp-200h] BYREF
  __int16 v10; // [esp+201h] [ebp-3h]
  char v11; // [esp+203h] [ebp-1h]

  String[0] = g_INI_DefaultBuffer; /*0x47744e*/
  memset(&String[1], 0, 0x1FCu); /*0x477462*/
  v10 = 0; /*0x477464*/
  v11 = 0; /*0x47746a*/
  result = (const char *)INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 512); /*0x477483*/
  if ( result ) /*0x47748b*/
  {
    v7 = strtok(String, Str); /*0x477497*/
    if ( v7 ) /*0x4774a1*/
      *a4 = atoi(v7); /*0x4774b3*/
    v8 = strtok(0, Str); /*0x4774bc*/
    if ( v8 ) /*0x4774c6*/
      *a5 = atoi(v8); /*0x4774d8*/
    result = strtok(0, Str); /*0x4774e1*/
    if ( result ) /*0x4774eb*/
    {
      result = (const char *)atoi(result); /*0x4774ee*/
      *a6 = result; /*0x4774fd*/
    }
  }
  return result; /*0x47748a*/
}



// ==== 0x00477510  GameSetup::FormatToString  this=AbstractClass  sig=csp ====
char __thiscall sub_477510(char *this, unsigned __int8 *Block, char *a3, int a4, int a5, int a6)
{
  char Buffer[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v9; // [esp+205h] [ebp-3h]
  char v10; // [esp+207h] [ebp-1h]

  Buffer[0] = g_INI_DefaultBuffer; /*0x47751f*/
  memset(&Buffer[1], 0, 0x1FCu); /*0x47752e*/
  v9 = 0; /*0x47753e*/
  v10 = 0; /*0x477540*/
  sprintf(Buffer, "%d,%d,%d", a4, a5, a6); /*0x477555*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x477579*/
}



// ==== 0x00477590  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5477590(
        ObjectTypeClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4)
{
  char *v4; // esi
  int result; // eax
  bool v6; // zf
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  INIClass::GetString((INIClass *)this, a2, a3, (&off_81BABC)[a4], String, 128); /*0x4775c1*/
  v4 = strtok(String, Str); /*0x4775d5*/
  result = _strcmpi(v4, g_INI_Key_None); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)g_INI_Key_Normal) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4, aStrong) == 0; /*0x477624*/
      result = 2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return a4; /*0x47762d*/
    }
    else
    {
      return 1; /*0x477607*/
    }
  }
  return result; /*0x4775e9*/
}



// ==== 0x00477640  INIEntry::ReadAbilities  this=INIEntry  sig=csp ====
int __thiscall INIEntry::ReadAbilities(INIEntry *this, int a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  __int16 v5; // si
  INIEntry *i; // eax
  int v7; // eax
  int v9; // [esp+4h] [ebp-94h]
  int v10; // [esp+8h] [ebp-90h]
  int v11; // [esp+Ch] [ebp-8Ch]
  int v12; // [esp+10h] [ebp-88h]
  __int16 v13; // [esp+14h] [ebp-84h]
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x477663*/
  {
    v5 = 0; /*0x477674*/
    v13 = 0; /*0x47767c*/
    v9 = 0; /*0x477681*/
    v10 = 0; /*0x477685*/
    v11 = 0; /*0x477689*/
    v12 = 0; /*0x47768d*/
    for ( i = (INIEntry *)strtok(String, Str); i; i = (INIEntry *)strtok(0, Str) ) /*0x47769b*/
    {
      if ( !LOBYTE(i->Key) ) /*0x47769d*/
        break; /*0x4776a0*/
      v7 = INIEntry::LookupByName(i); /*0x4776a4*/
      if ( v7 != -1 ) /*0x4776ac*/
      {
        *((_BYTE *)&v9 + v7) = 1; /*0x4776ae*/
        v5 = v13; /*0x4776b3*/
      }
    }
    *(_DWORD *)a2 = v9; /*0x4776d8*/
    *(_DWORD *)(a2 + 4) = v10; /*0x4776de*/
    *(_DWORD *)(a2 + 8) = v11; /*0x4776e5*/
    *(_DWORD *)(a2 + 12) = v12; /*0x4776ec*/
    *(_WORD *)(a2 + 16) = v5; /*0x4776ef*/
    return a2; /*0x4776cb*/
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a5; /*0x47770f*/
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a5 + 4); /*0x477714*/
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a5 + 8); /*0x47771a*/
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a5 + 12); /*0x477720*/
    *(_WORD *)(a2 + 16) = *(_WORD *)(a5 + 16); /*0x477728*/
    return a2; /*0x477704*/
  }
}



// ==== 0x00477740  Pipe::477740  this=Pipe  sig=csp ====
int __thiscall VtableStub::Method_477740(Pipe *this)
{
  return (*(int (__thiscall **)(Pipe *))(*(_DWORD *)this->__pad_0 + 4))(this);
}



// ==== 0x00477750  SHAPipe::ScalarDtor  this=SHAPipe  sig=csp ====
int *__thiscall VectorClass::ScalarDtor(SHAPipe *this, char a2)
{
  Pipe::Dtor((Pipe *)this); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    __3_YAXPAX_Z(this); /*0x477760*/
  return (int *)this->__pad_0; /*0x47776a*/
}



// ==== 0x00477770  FileStraw::QueryInterface  this=FileStraw  sig=csp ====
void *__thiscall FileStraw_Destru::QueryInterface(FileStraw *this, char a2)
{
  FileStraw::Destructor((int)this); /*0x477773*/
  if ( (a2 & 1) != 0 ) /*0x47777d*/
    __3_YAXPAX_Z(this); /*0x477780*/
  return this; /*0x47778a*/
}



// ==== 0x00477790  FilePipe::QueryInterface  this=FilePipe  sig=csp ====
void *__thiscall FilePipe::QueryInterface(FilePipe *this, char a2)
{
  FilePipe::Destructor((int)this); /*0x477793*/
  if ( (a2 & 1) != 0 ) /*0x47779d*/
    __3_YAXPAX_Z(this); /*0x4777a0*/
  return this; /*0x4777aa*/
}



// ==== 0x004777B0  VectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Copy(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x4777bd*/
  this->Capacity = 0; /*0x4777c0*/
  this->IsInitialized[0] = 1; /*0x4777c3*/
  this->IsAllocated[0] = 0; /*0x4777c7*/
  this->vtable0 = (int)&VectorClass<int>::`vftable'; /*0x4777ca*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x4777d0*/
  {
    VectorClass::Destroy((int)this); /*0x4777d2*/
    v3 = a2[2]; /*0x4777d8*/
    this->Capacity = v3; /*0x4777dd*/
    if ( v3 ) /*0x4777e0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x4777e6*/
      this->Items = v4; /*0x4777f0*/
      if ( v4 ) /*0x4777f3*/
      {
        Capacity = this->Capacity; /*0x4777f5*/
        v6 = 0; /*0x4777f8*/
        this->IsAllocated[0] = 1; /*0x4777fc*/
        if ( Capacity > 0 ) /*0x477800*/
        {
          do /*0x477814*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x47780b*/
            ++v6; /*0x477811*/
          }
          while ( v6 < this->Capacity ); /*0x477814*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x477818*/
      this->IsAllocated[0] = 0; /*0x47781b*/
    }
  }
  this->Count = a2[4]; /*0x477821*/
  this->CapacityIncrement = a2[5]; /*0x477827*/
  this->vtable0 = (int)&TypeList<int>::`vftable'; /*0x47782a*/
  return &this->vtable0; /*0x477832*/
}



// ==== 0x00477840  _DynamicVectorClass_H::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList::ddtor(_DynamicVectorClass_H *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477846*/
  this->m_10 = 0; /*0x477849*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477850*/
  {
    __3_YAXPAX_Z(v2); /*0x477856*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47785e*/
  }
  BYTE1(this->m_C) = 0; /*0x477861*/
  this->m_8 = 0; /*0x477864*/
}



// ==== 0x00477870  _DynamicVectorClass_H::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList::GetCapacity(_DynamicVectorClass_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/
}



// ==== 0x00477890  _VectorClass_H::GetAt_Copy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::GetAt_Copy(_VectorClass_H *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x47789a*/
}



// ==== 0x004778A0  _DynamicVectorClass_PAVTechnoTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::ddtor(_DynamicVectorClass_PAVTechnoTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4778a6*/
  this->m_10 = 0; /*0x4778a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4778b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4778b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4778be*/
  }
  BYTE1(this->m_C) = 0; /*0x4778c1*/
  this->m_8 = 0; /*0x4778c4*/
}



// ==== 0x004778D0  _DynamicVectorClass_PAVTechnoTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::Write(_DynamicVectorClass_PAVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4778d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/
}



// ==== 0x004778F0  _VectorClass_PAVTechnoTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::Clear(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4778fa*/
}



// ==== 0x00477900  _DynamicVectorClass_VRGBClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall ParticleTypeClass::GetClassIdentifier(_DynamicVectorClass_VRGBClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477906*/
  this->m_10 = 0; /*0x477909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47791e*/
  }
  BYTE1(this->m_C) = 0; /*0x477921*/
  this->m_8 = 0; /*0x477924*/
}



// ==== 0x00477930  _DynamicVectorClass_VRGBClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleTypeClass::LoadTypeData(_DynamicVectorClass_VRGBClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477930*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}



// ==== 0x00477960  _VectorClass_VRGBClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38::Seek(_VectorClass_VRGBClass *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 3 * a3; /*0x47796d*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x477978*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x47797f*/
  return a2; /*0x47797b*/
}



// ==== 0x00477990  _TypeList_H::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::QueryInterface(_TypeList_H *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477993*/
  *(_DWORD *)this = &VectorClass<int>::`vftable'; /*0x477996*/
  if ( v3 && this->IsAllocated ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    this->Items = 0; /*0x4779b0*/
  }
  this->IsAllocated = 0; /*0x4779bb*/
  this->Capacity = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(this); /*0x4779cb*/
  return this; /*0x4779d5*/
}



// ==== 0x004779E0  DynamicVectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::Copy(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(_DWORD *)&this->?[3] = 0; /*0x4779ed*/
  *(_DWORD *)&this->?[3] = 0; /*0x4779f0*/
  LOBYTE(this->?) = 1; /*0x4779f3*/
  BYTE1(this->?) = 0; /*0x4779f7*/
  *(_DWORD *)this->VectorClass = &VectorClass<int>::`vftable'; /*0x4779fa*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x477a00*/
  {
    VectorClass::Destroy((int)this); /*0x477a02*/
    v3 = a2[2]; /*0x477a08*/
    *(_DWORD *)&this->?[3] = v3; /*0x477a0d*/
    if ( v3 ) /*0x477a10*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x477a16*/
      *(_DWORD *)&this->?[3] = v4; /*0x477a20*/
      if ( v4 ) /*0x477a23*/
      {
        v5 = *(_DWORD *)&this->?[3]; /*0x477a25*/
        v6 = 0; /*0x477a28*/
        BYTE1(this->?) = 1; /*0x477a2c*/
        if ( v5 > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
            *(_DWORD *)(*(_DWORD *)&this->?[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477a3b*/
            ++v6; /*0x477a41*/
          }
          while ( v6 < *(_DWORD *)&this->?[3] ); /*0x477a44*/
        }
      }
    }
    else
    {
      *(_DWORD *)&this->?[3] = 0; /*0x477a48*/
      BYTE1(this->?) = 0; /*0x477a4b*/
    }
  }
  this->Count = a2[4]; /*0x477a51*/
  this->CapacityIncrement = a2[5]; /*0x477a57*/
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<int>::`vftable'; /*0x477a5a*/
  return this->VectorClass; /*0x477a62*/
}



// ==== 0x00477A70  _TypeList_PAVTechnoTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall FilePipe_30::QueryInterface(_TypeList_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477a73*/
  this->vfptr = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x477a76*/
  if ( v3 && this->IsAllocated ) /*0x477a80*/
  {
    __3_YAXPAX_Z(v3); /*0x477a88*/
    this->Items = 0; /*0x477a90*/
  }
  this->IsAllocated = 0; /*0x477a9b*/
  this->Capacity = 0; /*0x477aa1*/
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    __3_YAXPAX_Z(this); /*0x477aab*/
  return &this->vfptr; /*0x477ab5*/
}



// ==== 0x00477AC0  _TypeList_VRGBClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::QueryInterface(_TypeList_VRGBClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477ac3*/
  *(_DWORD *)this = &VectorClass<RGBClass>::`vftable'; /*0x477ac6*/
  if ( v3 && this->IsAllocated ) /*0x477ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x477ad8*/
    this->Items = 0; /*0x477ae0*/
  }
  this->IsAllocated = 0; /*0x477aeb*/
  this->Capacity = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    __3_YAXPAX_Z(this); /*0x477afb*/
  return this; /*0x477b05*/
}



// ==== 0x00477B10  _DynamicVectorClass_H::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IntDynamicVector::QueryInterface(_DynamicVectorClass_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x477b13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<int>::`vftable'; /*0x477b16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x477b20*/
  {
    __3_YAXPAX_Z(v3); /*0x477b28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x477b30*/
  }
  BYTE1(this->m_C) = 0; /*0x477b3b*/
  this->m_8 = 0; /*0x477b41*/
  if ( (a2 & 1) != 0 ) /*0x477b48*/
    __3_YAXPAX_Z(this); /*0x477b4b*/
  return this->__pad_0; /*0x477b55*/
}



// ==== 0x00477B60  IntVector::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall IntVector::Copy(IntVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->IntVector_field_0x04 = 0; /*0x477b6d*/
  this->Capacity = 0; /*0x477b70*/
  this->IsInitialized = 1; /*0x477b73*/
  this->IsAllocated = 0; /*0x477b77*/
  *(_DWORD *)this->__pad_0 = &VectorClass<int>::`vftable'; /*0x477b7a*/
  if ( this == (IntVector *)a2 ) /*0x477b80*/
    return this->__pad_0; /*0x477b80*/
  VectorClass::Destroy((int)this); /*0x477b82*/
  v3 = a2[2]; /*0x477b88*/
  this->Capacity = v3; /*0x477b8d*/
  if ( !v3 ) /*0x477b90*/
  {
    this->IntVector_field_0x04 = 0; /*0x477bce*/
    this->IsAllocated = 0; /*0x477bd1*/
    return this->__pad_0; /*0x477bd4*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x477b96*/
  this->IntVector_field_0x04 = v4; /*0x477ba0*/
  if ( !v4 ) /*0x477ba3*/
    return this->__pad_0; /*0x477ba3*/
  v5 = this->Capacity; /*0x477ba5*/
  v6 = 0; /*0x477ba8*/
  this->IsAllocated = 1; /*0x477bac*/
  if ( v5 <= 0 ) /*0x477bb0*/
    return this->__pad_0; /*0x477bb0*/
  do /*0x477bc4*/
  {
    *(_DWORD *)(this->IntVector_field_0x04 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477bbb*/
    ++v6; /*0x477bc1*/
  }
  while ( v6 < this->Capacity ); /*0x477bc4*/
  return this->__pad_0; /*0x477bc8*/
}



// ==== 0x00477BE0  VectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Construct(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x477beb*/
  this->Capacity = a2; /*0x477bee*/
  this->IsInitialized = 1; /*0x477bf1*/
  this->IsAllocated = 0; /*0x477bf5*/
  this->vtable0 = &VectorClass<int>::`vftable'; /*0x477bf8*/
  if ( a2 ) /*0x477bfe*/
  {
    if ( a3 ) /*0x477c06*/
    {
      this->Items = (void *)a3; /*0x477c08*/
      return &this->vtable0; /*0x477c0e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x477c1d*/
    this->IsAllocated = 1; /*0x477c20*/
  }
  return &this->vtable0; /*0x477c0d*/
}



// ==== 0x00477C30  _VectorClass_H::CompareEqual  this=VectorClass  sig=csp ====
char __thiscall BufferClass::CompareEqual(_VectorClass_H *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x477c32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x477c3d*/
  {
    v3 = 0; /*0x477c3f*/
    if ( m_8 <= 0 ) /*0x477c43*/
      return 1; /*0x477c63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x477c45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477c4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477c54*/
    {
      ++v3; /*0x477c56*/
      ++v4; /*0x477c57*/
      if ( v3 >= m_8 ) /*0x477c5c*/
        return 1; /*0x477c5c*/
    }
  }
  return 0; /*0x477c5e*/
}



// ==== 0x00477C70  _VectorClass_H::vt02  this=VectorClass  sig=csp ====
char __thiscall VectorClass::vt02(_VectorClass_H *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x477c86*/
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x477c9e*/
    LOBYTE(this->m_C) = 1; /*0x477ca6*/
    if ( v4 ) /*0x477caa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x477cb5*/
      {
        m_8 = this->m_8; /*0x477cbc*/
        if ( a2 < m_8 ) /*0x477cc1*/
          m_8 = a2; /*0x477cc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477cc9*/
          ++i; /*0x477cce*/
        if ( BYTE1(this->m_C) ) /*0x477cdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x477ce6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x477cee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x477cf7*/
      this->m_8 = a2; /*0x477cff*/
      BYTE1(this->m_C) = a3 == 0; /*0x477d02*/
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477d12*/
    return 1; /*0x477d18*/
  }
}



// ==== 0x00477D20  ?$VectorClass@H::Destroy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Destroy(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 4); /*0x477d26*/
  if ( result && *(_BYTE *)(this + 13) ) /*0x477d2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x477d33*/
    *(_DWORD *)(this + 4) = 0; /*0x477d3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477d3e*/
  *(_DWORD *)(this + 8) = 0; /*0x477d41*/
  return result; /*0x477d44*/
}



// ==== 0x00477D50  _VectorClass_H::vt04  this=VectorClass  sig=csp ====
int __thiscall VectorClass::vt04(_VectorClass_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x477d50*/
    return 0; /*0x477d58*/
  m_8 = this->m_8; /*0x477d5e*/
  result = 0; /*0x477d61*/
  if ( m_8 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x477d6b*/
  {
    if ( ++result >= m_8 ) /*0x477d7a*/
      return -1; /*0x477d7a*/
  }
  return result; /*0x477d5a*/
}



// ==== 0x00477D90  _VectorClass_H::vt05  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass::vt05(_VectorClass_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x477d90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x477da5*/
  else
    return 0; /*0x477d97*/
}



// ==== 0x00477DB0  DynamicVectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::Construct(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x477db9*/
  *(_DWORD *)&this->?[3] = a2; /*0x477dc0*/
  LOBYTE(this->?) = 1; /*0x477dc3*/
  BYTE1(this->?) = 0; /*0x477dc7*/
  *(_DWORD *)this->VectorClass = &VectorClass<int>::`vftable'; /*0x477dcb*/
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x477ddb*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x477dec*/
      BYTE1(this->?) = 1; /*0x477def*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<int>::`vftable'; /*0x477df3*/
  this->CapacityIncrement = 10; /*0x477df9*/
  this->Count = 0; /*0x477e00*/
  return this->VectorClass; /*0x477e09*/
}



// ==== 0x00477E10  _DynamicVectorClass_H::Resize  this=DynamicVector  sig=csp ====
char __thiscall VectorClass::Resize(_DynamicVectorClass_H *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x477e22*/
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x477e3a*/
    LOBYTE(this->m_C) = 1; /*0x477e42*/
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x477e48*/
    {
      m_8 = this->m_8; /*0x477e4f*/
      if ( a2 < m_8 ) /*0x477e54*/
        m_8 = a2; /*0x477e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477e5c*/
        ++i; /*0x477e61*/
      if ( BYTE1(this->m_C) ) /*0x477e6e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x477e79*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x477e81*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x477e8a*/
    this->m_8 = a2; /*0x477e92*/
    BYTE1(this->m_C) = a3 == 0; /*0x477e95*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477e9e*/
  }
  v7 = this->m_8; /*0x477ea1*/
  if ( v7 < this->m_10 ) /*0x477ea9*/
    this->m_10 = v7; /*0x477eab*/
  return 1; /*0x477eae*/
}



// ==== 0x00477EC0  DynamicVector::Add_Alt  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x477ec3*/
  result = (int)this->DynamicVector_field_0x10; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x477ef5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x477ef8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x477efe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x477f08*/
    LOBYTE(result) = 1; /*0x477f0b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x477eef*/
  }
  return result; /*0x477ef1*/
}



// ==== 0x00477F10  _DynamicVectorClass_H::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList::GetSize(_DynamicVectorClass_H *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( m_10 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= m_10 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/
}



// ==== 0x00477F40  INIClass::parseSection  this=VectorClass  sig=csp ====
_DWORD *__thiscall INIClass::parseSection(INIClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->headNode[0] = 0; /*0x477f4d*/
  this->headNode[1] = 0; /*0x477f50*/
  LOBYTE(this->headNode[2]) = 1; /*0x477f53*/
  BYTE1(this->headNode[2]) = 0; /*0x477f57*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x477f5a*/
  if ( this == (INIClass *)a2 ) /*0x477f60*/
    return this->__pad_0; /*0x477f60*/
  TypeList_TechnoType::ddtor((_VectorClass_PAVTechnoTypeClass *)this); /*0x477f62*/
  v3 = a2[2]; /*0x477f68*/
  this->headNode[1] = v3; /*0x477f6d*/
  if ( !v3 ) /*0x477f70*/
  {
    this->headNode[0] = 0; /*0x477fae*/
    BYTE1(this->headNode[2]) = 0; /*0x477fb1*/
    return this->__pad_0; /*0x477fb4*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x477f76*/
  this->headNode[0] = v4; /*0x477f80*/
  if ( !v4 ) /*0x477f83*/
    return this->__pad_0; /*0x477f83*/
  v5 = this->headNode[1]; /*0x477f85*/
  v6 = 0; /*0x477f88*/
  BYTE1(this->headNode[2]) = 1; /*0x477f8c*/
  if ( v5 <= 0 ) /*0x477f90*/
    return this->__pad_0; /*0x477f90*/
  do /*0x477fa4*/
  {
    *(_DWORD *)(this->headNode[0] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477f9b*/
    ++v6; /*0x477fa1*/
  }
  while ( v6 < this->headNode[1] ); /*0x477fa4*/
  return this->__pad_0; /*0x477fa8*/
}



// ==== 0x00477FC0  _VectorClass_PAVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::AddRef(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x477fc2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( m_8 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x477fd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477fdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= m_8 ) /*0x477fec*/
        return 1; /*0x477fec*/
    }
  }
  return 0; /*0x477fee*/
}



// ==== 0x00478000  _VectorClass_PAVTechnoTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::Remove(_VectorClass_PAVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
    LOBYTE(this->m_C) = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x47802e*/
    LOBYTE(this->m_C) = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x478045*/
      {
        m_8 = this->m_8; /*0x47804c*/
        if ( a2 < m_8 ) /*0x478051*/
          m_8 = a2; /*0x478053*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( BYTE1(this->m_C) ) /*0x47806b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x478076*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x47807e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x478087*/
      this->m_8 = a2; /*0x47808f*/
      BYTE1(this->m_C) = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4780a2*/
    return 1; /*0x4780a8*/
  }
}



// ==== 0x004780B0  _VectorClass_PAVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TypeList_TechnoType::ddtor(_VectorClass_PAVTechnoTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4780bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4780c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4780cb*/
  }
  BYTE1(this->m_C) = 0; /*0x4780ce*/
  this->m_8 = 0; /*0x4780d1*/
}



// ==== 0x004780E0  _VectorClass_PAVTechnoTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::GetSize(_VectorClass_PAVTechnoTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  m_8 = this->m_8; /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( m_8 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= m_8 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/
}



// ==== 0x00478120  _VectorClass_PAVTechnoTypeClass::GetIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_TechnoType::GetIndex(_VectorClass_PAVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x478120*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/
}



// ==== 0x00478140  _DynamicVectorClass_PAVTechnoTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::Release(_DynamicVectorClass_PAVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x47814c*/
  {
    LOBYTE(this->m_C) = 0; /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x47816a*/
    LOBYTE(this->m_C) = 1; /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x478178*/
    {
      m_8 = this->m_8; /*0x47817f*/
      if ( a2 < m_8 ) /*0x478184*/
        m_8 = a2; /*0x478186*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( BYTE1(this->m_C) ) /*0x47819e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4781a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4781b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4781ba*/
    this->m_8 = a2; /*0x4781c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4781ce*/
  }
  v7 = this->m_8; /*0x4781d1*/
  if ( v7 < this->m_10 ) /*0x4781d9*/
    this->m_10 = v7; /*0x4781db*/
  return 1; /*0x4781de*/
}



// ==== 0x004781F0  _DynamicVectorClass_PAVTechnoTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::Read(_DynamicVectorClass_PAVTechnoTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( m_10 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4781fe*/
  {
    if ( ++result >= m_10 ) /*0x47820d*/
      return -1; /*0x47820d*/
  }
  return result; /*0x478212*/
}



// ==== 0x00478220  INIClass::parseKeyValue  this=VectorClass  sig=csp ====
_DWORD *__thiscall INIClass::parseKeyValue(INIClass *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  this->headNode[0] = 0; /*0x47822e*/
  this->headNode[1] = 0; /*0x478231*/
  LOBYTE(this->headNode[2]) = 1; /*0x478234*/
  BYTE1(this->headNode[2]) = 0; /*0x478238*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RGBClass>::`vftable'; /*0x47823b*/
  if ( this == (INIClass *)a2 ) /*0x478241*/
    return this->__pad_0; /*0x478241*/
  FilePipe_38::ddtor((int)this); /*0x478247*/
  v3 = a2[2]; /*0x47824d*/
  this->headNode[1] = v3; /*0x478252*/
  if ( !v3 ) /*0x478255*/
  {
    this->headNode[0] = 0; /*0x4782c6*/
    BYTE1(this->headNode[2]) = 0; /*0x4782c9*/
    return this->__pad_0; /*0x4782cc*/
  }
  v4 = __2_YAPAXI_Z(3 * v3); /*0x47825b*/
  if ( v4 ) /*0x478265*/
  {
    if ( v3 - 1 >= 0 ) /*0x47826c*/
    {
      v5 = (_BYTE *)(v4 + 2); /*0x47826e*/
      v6 = v3; /*0x478271*/
      do /*0x47827e*/
      {
        *(v5 - 2) = 0; /*0x478272*/
        *(v5 - 1) = 0; /*0x478275*/
        *v5 = 0; /*0x478278*/
        v5 += 3; /*0x47827a*/
        --v6; /*0x47827d*/
      }
      while ( v6 ); /*0x47827e*/
    }
  }
  else
  {
    v4 = 0; /*0x478282*/
  }
  this->headNode[0] = v4; /*0x478286*/
  if ( !v4 ) /*0x478289*/
    return this->__pad_0; /*0x478289*/
  v7 = this->headNode[1]; /*0x47828b*/
  v8 = 0; /*0x47828e*/
  BYTE1(this->headNode[2]) = 1; /*0x478292*/
  if ( v7 <= 0 ) /*0x478296*/
    return this->__pad_0; /*0x478296*/
  v9 = 0; /*0x478298*/
  do /*0x4782bb*/
  {
    v10 = v9 + a2[1]; /*0x4782a0*/
    v11 = this->headNode[0] + v9; /*0x4782a4*/
    ++v8; /*0x4782a6*/
    v9 += 3; /*0x4782aa*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x4782ad*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x4782b3*/
  }
  while ( v8 < this->headNode[1] ); /*0x4782bb*/
  return this->__pad_0; /*0x4782bf*/
}



// ==== 0x004782E0  _VectorClass_VRGBClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38::AddRef(_VectorClass_VRGBClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _BYTE *v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x4782eb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4782f0*/
  {
    v3 = 0; /*0x4782f2*/
    if ( m_8 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4782f8*/
    v5 = *(_BYTE **)&this->m_1[3]; /*0x4782fb*/
    v6 = (_BYTE *)(v4 + 2); /*0x478300*/
    v7 = v4 - (_DWORD)v5; /*0x478303*/
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x47831f*/
    {
      ++v3; /*0x478321*/
      v6 += 3; /*0x478322*/
      v5 += 3; /*0x478325*/
      if ( v3 >= m_8 ) /*0x47832a*/
        return 1; /*0x47832a*/
    }
  }
  return 0; /*0x47832c*/
}



// ==== 0x00478340  _VectorClass_VRGBClass::Release  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38::Release(_VectorClass_VRGBClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    v5 = a3; /*0x478354*/
    LOBYTE(this->m_C) = 0; /*0x478358*/
    if ( a3 ) /*0x47835d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478396*/
      {
        v9 = a3 + 2; /*0x478398*/
        v10 = a2; /*0x47839b*/
        do /*0x4783a8*/
        {
          *(v9 - 2) = 0; /*0x47839c*/
          *(v9 - 1) = 0; /*0x47839f*/
          *v9 = 0; /*0x4783a2*/
          v9 += 3; /*0x4783a4*/
          --v10; /*0x4783a7*/
        }
        while ( v10 ); /*0x4783a8*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x478377*/
          v8 = a2; /*0x47837a*/
          do /*0x478387*/
          {
            *(v7 - 2) = 0; /*0x47837b*/
            *(v7 - 1) = 0; /*0x47837e*/
            *v7 = 0; /*0x478381*/
            v7 += 3; /*0x478383*/
            --v8; /*0x478386*/
          }
          while ( v8 ); /*0x478387*/
        }
        v5 = (char *)v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4783bb*/
      {
        m_8 = this->m_8; /*0x4783c0*/
        if ( a2 < m_8 ) /*0x4783c5*/
          m_8 = a2; /*0x4783c7*/
        if ( m_8 > 0 ) /*0x4783cb*/
        {
          v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            v14 = *(_DWORD *)&this->m_1[3] + v13; /*0x4783d4*/
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --m_8; /*0x4783dc*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x4783e0*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x4783e6*/
          }
          while ( m_8 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( BYTE1(this->m_C) ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4783fa*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x478402*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x47840d*/
      this->m_8 = v3; /*0x478413*/
      BYTE1(this->m_C) = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VRGBClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x478426*/
    return 1; /*0x47842c*/
  }
}



// ==== 0x00478440  _VectorClass_VRGBClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FilePipe_38::ddtor(_VectorClass_VRGBClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x47844d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x478453*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x47845b*/
  }
  BYTE1(this->m_C) = 0; /*0x47845e*/
  this->m_8 = 0; /*0x478461*/
}



// ==== 0x00478470  _VectorClass_VRGBClass::Read  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38::Read(_VectorClass_VRGBClass *this, _BYTE *a2)
{
  int result; // eax
  int m_8; // esi
  _BYTE *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x478470*/
    return 0; /*0x47847c*/
  m_8 = this->m_8; /*0x478482*/
  result = 0; /*0x478485*/
  if ( m_8 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  for ( i = *(_BYTE **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x47848f*/
  {
    if ( ++result >= m_8 ) /*0x4784ae*/
      return -1; /*0x4784ae*/
  }
  return result; /*0x47847a*/
}



// ==== 0x004784C0  _VectorClass_VRGBClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FilePipe_38::Write(_VectorClass_VRGBClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4784c0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/
}



// ==== 0x004784F0  _DynamicVectorClass_VRGBClass::Release  this=DynamicVector  sig=csp ====
char __thiscall ParticleTypeClass::Release(_DynamicVectorClass_VRGBClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    LOBYTE(this->m_C) = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = a3 + 2; /*0x478548*/
        v10 = a2; /*0x47854b*/
        do /*0x478558*/
        {
          *(v9 - 2) = 0; /*0x47854c*/
          *(v9 - 1) = 0; /*0x47854f*/
          *v9 = 0; /*0x478552*/
          v9 += 3; /*0x478554*/
          --v10; /*0x478557*/
        }
        while ( v10 ); /*0x478558*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x478527*/
          v8 = a2; /*0x47852a*/
          do /*0x478537*/
          {
            *(v7 - 2) = 0; /*0x47852b*/
            *(v7 - 1) = 0; /*0x47852e*/
            *v7 = 0; /*0x478531*/
            v7 += 3; /*0x478533*/
            --v8; /*0x478536*/
          }
          while ( v8 ); /*0x478537*/
        }
        v5 = (char *)v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x478562*/
    {
      m_8 = this->m_8; /*0x478567*/
      if ( a2 < m_8 ) /*0x47856c*/
        m_8 = a2; /*0x47856e*/
      if ( m_8 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *(_DWORD *)&this->m_1[3] + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --m_8; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( m_8 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( BYTE1(this->m_C) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4785a1*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4785a9*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4785b4*/
    this->m_8 = v3; /*0x4785ba*/
    BYTE1(this->m_C) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VRGBClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4785c6*/
  }
  v15 = this->m_8; /*0x4785c9*/
  if ( v15 < this->m_10 ) /*0x4785d1*/
    this->m_10 = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/
}



// ==== 0x004785F0  _DynamicVectorClass_VRGBClass::Init  this=DynamicVector  sig=csp ====
int __thiscall ParticleTypeClass::Init(_DynamicVectorClass_VRGBClass *this, _BYTE *a2)
{
  int m_10; // esi
  int result; // eax
  _BYTE *i; // ecx

  m_10 = this->m_10; /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = *(_BYTE **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= m_10 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/
}



// ==== 0x00478630  ?$VectorClass@H::vt00  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478633*/
  *Block = &VectorClass<int>::`vftable'; /*0x478636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478640*/
  {
    __3_YAXPAX_Z(v3); /*0x478648*/
    *(Block + 1) = 0; /*0x478650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47865b*/
  *(Block + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    __3_YAXPAX_Z(Block); /*0x47866b*/
  return Block; /*0x478675*/
}



// ==== 0x00478680  _VectorClass_PAVTechnoTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_TechnoType::Add(_VectorClass_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x478683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x478686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x478690*/
  {
    __3_YAXPAX_Z(v3); /*0x478698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4786a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4786ab*/
  this->m_8 = 0; /*0x4786b1*/
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    __3_YAXPAX_Z(this); /*0x4786bb*/
  return this->__pad_0; /*0x4786c5*/
}



// ==== 0x004786D0  _VectorClass_VRGBClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FilePipe_38::QueryInterface(_VectorClass_VRGBClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4786d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RGBClass>::`vftable'; /*0x4786d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4786e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4786e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4786f0*/
  }
  BYTE1(this->m_C) = 0; /*0x4786fb*/
  this->m_8 = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    __3_YAXPAX_Z(this); /*0x47870b*/
  return this->__pad_0; /*0x478715*/
}



// ==== 0x00478720  TypeList::Copy  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::Copy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (TypeList *)a2 ) /*0x47872a*/
    return &this->DynamicVectorClass; /*0x47872a*/
  (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x47872e*/
  v3 = a2[2]; /*0x478731*/
  this->? = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    this->? = 0; /*0x47877a*/
    this->? = 0; /*0x478781*/
    return &this->DynamicVectorClass; /*0x478785*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x478743*/
  this->? = v4; /*0x47874b*/
  if ( !v4 ) /*0x478750*/
    return &this->DynamicVectorClass; /*0x478750*/
  Capacity = this->?; /*0x478752*/
  v6 = 0; /*0x478755*/
  this->? = 1; /*0x478759*/
  if ( Capacity <= 0 ) /*0x47875d*/
    return &this->DynamicVectorClass; /*0x47875d*/
  do /*0x478771*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < this->? ); /*0x478771*/
  return &this->DynamicVectorClass; /*0x478775*/
}



// ==== 0x00478790  TypeList::TechnoTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::TechnoTypeConstructor(TypeList *this, int a2, int a3)
{
  this->? = 0; /*0x47879b*/
  this->? = a2; /*0x47879e*/
  this->? = 1; /*0x4787a1*/
  this->? = 0; /*0x4787a5*/
  this->DynamicVectorClass = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      this->? = (void *)a3; /*0x4787b8*/
      return &this->DynamicVectorClass; /*0x4787be*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x4787cd*/
    this->? = 1; /*0x4787d0*/
  }
  return &this->DynamicVectorClass; /*0x4787bd*/
}



// ==== 0x004787E0  INIClass::writeSection  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::writeSection(INIClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (INIClass *)a2 ) /*0x4787ea*/
    return this->__pad_0; /*0x4787ea*/
  (*(void (__thiscall **)(INIClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4787ee*/
  v3 = a2[2]; /*0x4787f1*/
  this->headNode[1] = v3; /*0x4787f6*/
  if ( !v3 ) /*0x4787f9*/
  {
    this->headNode[0] = 0; /*0x47883a*/
    BYTE1(this->headNode[2]) = 0; /*0x478841*/
    return this->__pad_0; /*0x478845*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x478803*/
  this->headNode[0] = v4; /*0x47880b*/
  if ( !v4 ) /*0x478810*/
    return this->__pad_0; /*0x478810*/
  v5 = this->headNode[1]; /*0x478812*/
  v6 = 0; /*0x478815*/
  BYTE1(this->headNode[2]) = 1; /*0x478819*/
  if ( v5 <= 0 ) /*0x47881d*/
    return this->__pad_0; /*0x47881d*/
  do /*0x478831*/
  {
    *(_DWORD *)(this->headNode[0] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478828*/
    ++v6; /*0x47882e*/
  }
  while ( v6 < this->headNode[1] ); /*0x478831*/
  return this->__pad_0; /*0x478835*/
}



// ==== 0x00478850  BuildingTypeClass::loadBuildingProperty_b  this=VectorClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_5478850(BuildingTypeClass *this, int a2, int a3)
{
  void *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  this->? = 0; /*0x47885d*/
  this->? = (void *)a2; /*0x478860*/
  LOBYTE(this->?) = 1; /*0x478863*/
  BYTE1(this->?) = 0; /*0x478867*/
  this->TechnoTypeClass = &VectorClass<RGBClass>::`vftable'; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return &this->TechnoTypeClass; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = __2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = (_BYTE *)(v8 + 2); /*0x4788b5*/
        v10 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = (void *)v8; /*0x4788c7*/
    }
    this->? = v4; /*0x4788c9*/
    BYTE1(this->?) = 1; /*0x4788cc*/
    return &this->TechnoTypeClass; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (_BYTE *)(a3 + 2); /*0x478881*/
    v6 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
  this->? = (void *)a3; /*0x478893*/
  return &this->TechnoTypeClass; /*0x478898*/
}



// ==== 0x004788E0  ParticleTypeClass::EnsureCapacity  this=ParticleTypeClass  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::EnsureCapacity(ParticleTypeClass *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  void *BehavesLike; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char *v11; // edi

  if ( this == (ParticleTypeClass *)a2 ) /*0x4788ec*/
    return &this->ArrayIndex; /*0x4788ec*/
  (*((void (__thiscall **)(ParticleTypeClass *))this->ArrayIndex + 3))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->BehavesLike = (void *)v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->ParticleTypeClass_field_28C = 0; /*0x478974*/
    BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x478977*/
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = v4 + 2; /*0x47891a*/
      v6 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  this->ParticleTypeClass_field_28C = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
  BehavesLike = this->BehavesLike; /*0x478937*/
  v8 = 0; /*0x47893a*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x47893e*/
  if ( (int)BehavesLike <= 0 ) /*0x478942*/
    return &this->ArrayIndex; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = (char *)this->ParticleTypeClass_field_28C + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    v11[2] = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < (int)this->BehavesLike ); /*0x478969*/
  return &this->ArrayIndex; /*0x47896d*/
}



// ==== 0x00478990  sub_478990  this=-  sig=ida-proto ====
int sub_478990()
{
  dword_89E318 = 0; /*0x478992*/
  dword_89E31C = 0; /*0x478997*/
  dword_89E320 = 0; /*0x47899c*/
  dword_89E324 = 0; /*0x4789a1*/
  return 0; /*0x4789a6*/
}



// ==== 0x004789B0  sub_4789B0  this=-  sig=ida-proto ====
void sub_4789B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4789bc*/
  dbl_89E330 = Math::Sqrt(v0 + v0); /*0x4789ce*/
}



// ==== 0x004789E0  sub_4789E0  this=-  sig=ida-proto ====
void sub_4789E0()
{
  dbl_89E380 = dbl_89E330 / 60.0; /*0x4789ec*/
}



// ==== 0x00478A00  sub_478A00  this=-  sig=ida-proto ====
void sub_478A00()
{
  dbl_89E368 = 1.0 / dbl_89E380; /*0x478a0c*/
}



// ==== 0x00478A20  sub_478A20  this=-  sig=ida-proto ====
void sub_478A20()
{
  dbl_89E360 = 0.0174532925199433 * 45.0; /*0x478a2c*/
}



// ==== 0x00478A40  sub_478A40  this=-  sig=ida-proto ====
void sub_478A40()
{
  dbl_89E338 = 0.0174532925199433 * 60.0; /*0x478a4c*/
}



// ==== 0x00478A60  sub_478A60  this=-  sig=ida-proto ====
void sub_478A60()
{
  dbl_89E310 = 0.0174532925199433 * 90.0; /*0x478a6c*/
}



// ==== 0x00478A80  sub_478A80  this=-  sig=ida-proto ====
__int64 sub_478A80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E310 - dbl_89E338); /*0x478a92*/
  result = Math::RoundToInt(v0 * dbl_89E330 * 0.5); /*0x478aa6*/
  dword_89E388 = result; /*0x478aab*/
  return result; /*0x478ab0*/
}



// ==== 0x00478AC0  sub_478AC0  this=-  sig=ida-proto ====
void sub_478AC0()
{
  dbl_89E340 = Math::ArcTan((double)dword_89E388 * 0.00390625); /*0x478ad7*/
}



// ==== 0x00478AF0  sub_478AF0  this=-  sig=ida-proto ====
void sub_478AF0()
{
  dbl_89E358 = Math::ArcTan((double)(2 * dword_89E388) / dbl_89E330); /*0x478b12*/
}



// ==== 0x00478B20  sub_478B20  this=-  sig=ida-proto ====
__int64 sub_478B20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E388) + 0.5); /*0x478b3b*/
  dword_89E37C = result; /*0x478b40*/
  return result; /*0x478b46*/
}



// ==== 0x00478B50  sub_478B50  this=-  sig=ida-proto ====
int sub_478B50()
{
  word_89E328 = 0; /*0x478b52*/
  word_89E32A = 0; /*0x478b58*/
  return 0; /*0x478b5e*/
}



// ==== 0x00478B60  sub_478B60  this=-  sig=ida-proto ====
int sub_478B60()
{
  dword_89E348 = 0; /*0x478b62*/
  dword_89E34C = 0; /*0x478b67*/
  dword_89E350 = 0; /*0x478b6c*/
  return 0; /*0x478b71*/
}



// ==== 0x00478B80  sub_478B80  this=-  sig=ida-proto ====
int sub_478B80()
{
  dword_89E378 = 0; /*0x478b85*/
  dword_89E370 = 128; /*0x478b8f*/
  dword_89E374 = 128; /*0x478b94*/
  return 128; /*0x478b99*/
}



// ==== 0x00478BA0  CCToolTip::CalculatePopupPosition  this=CCToolTip  sig=csp ====
char __thiscall CCToolTip::CalculatePopupPosition(CCToolTip *this, _DWORD *a2)
{
  unsigned __int16 *v2; // esi
  CellStruct *v3; // edi
  int v4; // eax
  int v5; // ebp
  char *v6; // ecx
  bool v7; // cc
  char *v8; // edx
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
  char *v12; // eax
  int CCToolTip_field_0x04; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  void *v18; // edi
  int v19; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // [esp+0h] [ebp-1Ch] BYREF
  Text *v25; // [esp+4h] [ebp-18h]
  CCToolTip *v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+14h] [ebp-8h]
  int v28; // [esp+18h] [ebp-4h]

  v26 = this; /*0x478ba3*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) >= 0 ) /*0x478bb4*/
  {
    v25 = g_FogOfWarState; /*0x478bcb*/
    if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478bcf*/
    {
      v2 = (unsigned __int16 *)a2; /*0x478bdc*/
      if ( *a2 > DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478be4*/
      {
        v3 = (CellStruct *)&DSurface_SidebarBounds; /*0x478be6*/
        byte_884B8E = 1; /*0x478beb*/
        goto LABEL_8; /*0x478bf2*/
      }
    }
    else
    {
      v2 = (unsigned __int16 *)a2; /*0x478bff*/
      if ( *a2 <= DSurface_SidebarBounds + dword_886F98 ) /*0x478c07*/
      {
        v3 = (CellStruct *)&DSurface_SidebarBounds; /*0x478c09*/
        byte_884B8E = 1; /*0x478c0e*/
        goto LABEL_8; /*0x478c15*/
      }
    }
    v3 = &DSurface_ViewBounds; /*0x478c17*/
LABEL_8:
    if ( v3 ) /*0x478c1e*/
    {
      Text::Layout(g_FogOfWarState, v2 + 8, &v24, &a2, *(_DWORD *)v3->__pad_8); /*0x478c36*/
      v4 = *((_DWORD *)v2 + 2); /*0x478c43*/
      v5 = v24 + 4; /*0x478c46*/
      v6 = (char *)a2 + 3; /*0x478c49*/
      v7 = v24 + 4 <= v4; /*0x478c4c*/
      v24 += 4; /*0x478c4e*/
      a2 = (_DWORD *)((char *)a2 + 3); /*0x478c52*/
      if ( !v7 ) /*0x478c56*/
        v4 = v5; /*0x478c58*/
      v8 = (char *)*((_DWORD *)v2 + 3); /*0x478c5a*/
      *((_DWORD *)v2 + 2) = v4; /*0x478c5d*/
      if ( (int)v6 <= (int)v8 ) /*0x478c62*/
        v6 = v8; /*0x478c64*/
      *((_DWORD *)v2 + 3) = v6; /*0x478c66*/
      v9 = *(_DWORD *)v3->__pad_8; /*0x478c69*/
      if ( v4 >= v9 ) /*0x478c6e*/
      {
        Text::Layout(v25, v2 + 8, &v24, &a2, v9 - 4); /*0x478c83*/
        v10 = *((_DWORD *)v2 + 2); /*0x478c90*/
        v5 = v24 + 4; /*0x478c93*/
        v11 = (char *)a2 + 3; /*0x478c96*/
        v7 = v24 + 4 <= v10; /*0x478c99*/
        v24 += 4; /*0x478c9b*/
        a2 = (_DWORD *)((char *)a2 + 3); /*0x478c9f*/
        if ( !v7 ) /*0x478ca3*/
          v10 = v5; /*0x478ca5*/
        *((_DWORD *)v2 + 2) = v10; /*0x478ca7*/
        v12 = (char *)*((_DWORD *)v2 + 3); /*0x478caa*/
        if ( (int)v11 > (int)v12 ) /*0x478caf*/
          v12 = v11; /*0x478cb1*/
        *((_DWORD *)v2 + 3) = v12; /*0x478cb3*/
      }
      CCToolTip_field_0x04 = v26->CCToolTip_field_0x04; /*0x478cba*/
      if ( CCToolTip_field_0x04 && *(_BYTE *)(CCToolTip_field_0x04 + 24) ) /*0x478cc5*/
      {
        v14 = (int *)(CCToolTip_field_0x04 + 4); /*0x478cd0*/
        v15 = *v14; /*0x478cd3*/
        v16 = v14[1]; /*0x478cd5*/
        v27 = v14[2]; /*0x478cdb*/
        v28 = v14[3]; /*0x478ce2*/
        if ( v15 >= v3->field_0 + *(_DWORD *)v3->__pad_8 / 2 ) /*0x478cf4*/
          *(_DWORD *)v2 = v15 - v5 + 5; /*0x478d07*/
        else
          *(_DWORD *)v2 = v27 + v15 - 5; /*0x478cfe*/
        v17 = v3->field_0; /*0x478d09*/
        if ( v3->field_0 <= *(_DWORD *)v2 ) /*0x478d0f*/
          v17 = *(_DWORD *)v2; /*0x478d11*/
        *(_DWORD *)v2 = v17; /*0x478d13*/
        if ( v16 >= (int)v3->field_4 + *(_DWORD *)&v3->__pad_8[4] / 2 ) /*0x478d24*/
          *((_DWORD *)v2 + 1) = v16 - (_DWORD)a2 + 5; /*0x478d3a*/
        else
          *((_DWORD *)v2 + 1) = v28 + v16 - 5; /*0x478d2e*/
        v18 = v3->field_4; /*0x478d3d*/
        v19 = *((_DWORD *)v2 + 1); /*0x478d40*/
        if ( (int)v18 > v19 ) /*0x478d45*/
        {
          *((_DWORD *)v2 + 1) = v18; /*0x478d4a*/
          return 1; /*0x478d55*/
        }
      }
      else
      {
        v21 = *((_DWORD *)v2 + 2) + *(_DWORD *)v2 - v3->field_0 - *(_DWORD *)v3->__pad_8; /*0x478d68*/
        if ( v21 > 0 ) /*0x478d6c*/
          *(_DWORD *)v2 -= v21; /*0x478d70*/
        v22 = *((_DWORD *)v2 + 3); /*0x478d75*/
        v23 = *((_DWORD *)v2 + 1) + 16; /*0x478d7b*/
        *((_DWORD *)v2 + 1) = v23; /*0x478d7d*/
        if ( (signed int)(v22 + v23 - *(_DWORD *)&v3->__pad_8[4] - (unsigned int)v3->field_4) <= 0 ) /*0x478d90*/
          return 1; /*0x478d90*/
        v19 = v23 - v22 - 16; /*0x478d94*/
      }
      *((_DWORD *)v2 + 1) = v19; /*0x478d97*/
    }
    return 1; /*0x478da3*/
  }
  return 0; /*0x478d52*/
}



// ==== 0x00478DB0  CCToolTip::Release  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::Release(CCToolTip *this, _DWORD *a2)
{
  _DWORD *v3; // esi

  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478dbc*/
  {
    v3 = a2; /*0x478dca*/
    if ( *a2 >= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478dd2*/
      goto LABEL_5; /*0x478dd2*/
  }
  else
  {
    v3 = a2; /*0x478de2*/
    if ( *a2 <= DSurface_SidebarBounds + dword_886F98 ) /*0x478dea*/
    {
LABEL_5:
      byte_884B8E = 1; /*0x478dec*/
      g_CameoRenderFlag = 1; /*0x478df1*/
    }
  }
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x478df6*/
  return ToolTipManager::release((ToolTipManager *)this, (int)v3); /*0x478e0a*/
}



// ==== 0x00478E10  CCToolTip::Draw1  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::Draw1(CCToolTip *this, char a2)
{
  *((_BYTE *)this + 608) = a2; /*0x478e16*/
  return ToolTipManager::ddtor((ToolTipManager *)this, a2 == 0); /*0x478e25*/
}



// ==== 0x00478E30  CCToolTip::Draw2  this=CCToolTip  sig=csp ====
char __userpurge CCToolTip::Draw2@<al>(CCToolTip *this, int a2@<ebp>, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  int CCToolTip_field_0x04; // edi
  int v7; // ebx
  AudioStream *v8; // esi
  int v9; // ebx
  int v10; // edx
  Text *v11; // ebp
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v21; // [esp+10h] [ebp-28h] BYREF
  _WORD *p_CCToolTip_field_0x10; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  _DWORD v28[3]; // [esp+2Ch] [ebp-Ch] BYREF
  _WORD *retaddr; // [esp+38h] [ebp+0h]

  v5 = *(_DWORD *)this->__pad_0; /*0x478e37*/
  CCToolTip_field_0x04 = this->CCToolTip_field_0x04; /*0x478e42*/
  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) == 1 ) /*0x478e48*/
  {
    v7 = DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x478e56*/
    if ( v5 + this->CCToolTip_field_0x08 <= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8 ) /*0x478e5f*/
    {
      v8 = DSurface_Composite; /*0x478e61*/
      goto LABEL_13; /*0x478e67*/
    }
    if ( *(_BYTE *)(v4 + 608) != 1 || v5 < v7 ) /*0x478e78*/
      return v5; /*0x478e78*/
    v8 = (AudioStream *)DSurface_Sidebar; /*0x478e7e*/
    v5 -= v7; /*0x478e84*/
  }
  else
  {
    v9 = DSurface_SidebarBounds + dword_886F98; /*0x478e94*/
    if ( v5 >= DSurface_SidebarBounds + dword_886F98 ) /*0x478e98*/
    {
      v8 = DSurface_Composite; /*0x478e9a*/
      v5 -= v9; /*0x478ea0*/
      goto LABEL_13; /*0x478ea2*/
    }
    if ( *(_BYTE *)(v4 + 608) != 1 || v5 + this->CCToolTip_field_0x08 >= v9 ) /*0x478eb8*/
      return v5; /*0x478eb8*/
    v8 = (AudioStream *)DSurface_Sidebar; /*0x478ebe*/
  }
  g_TooltipActive = 1; /*0x478ec4*/
LABEL_13:
  if ( v8 ) /*0x478ecd*/
  {
    v24 = CCToolTip_field_0x04; /*0x478ed3*/
    v26 = CCToolTip_field_0x04; /*0x478ed7*/
    v10 = *(_DWORD *)v8->__pad_0; /*0x478ede*/
    v11 = g_FogOfWarState; /*0x478ee1*/
    v23 = v5; /*0x478ee9*/
    v25 = v5; /*0x478eed*/
    p_CCToolTip_field_0x10 = &this->CCToolTip_field_0x10; /*0x478ef1*/
    v12 = (*(int (__thiscall **)(AudioStream *, int))(v10 + 124))(v8, a2); /*0x478ef5*/
    Text::Layout(v11, (unsigned __int16 *)&this->CCToolTip_field_0x10, &a3, &v21, v12); /*0x478f06*/
    v27 = v25 + v21; /*0x478f1f*/
    v26 = v24 + a3; /*0x478f25*/
    v13 = *(_DWORD *)v8->__pad_0; /*0x478f2b*/
    v14 = v21 + 4; /*0x478f33*/
    v15 = a3 + 8; /*0x478f37*/
    p_CCToolTip_field_0x10 = (_WORD *)(v21 + 4); /*0x478f39*/
    v16 = (*(int (__thiscall **)(AudioStream *))(v13 + 124))(v8); /*0x478f3d*/
    v17 = v24; /*0x478f40*/
    if ( v15 + v24 > v16 ) /*0x478f49*/
    {
      v17 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)v8->__pad_0 + 124))(v8) - v15; /*0x478f54*/
      v24 = v17; /*0x478f56*/
    }
    v26 = v15 + v17; /*0x478f61*/
    v27 = v25 + v14; /*0x478f71*/
    v28[0] = v17; /*0x478f85*/
    v28[2] = v15; /*0x478f8d*/
    retaddr = p_CCToolTip_field_0x10; /*0x478f91*/
    v28[1] = v25; /*0x478fcf*/
    v18 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x478fda*/
        | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
        | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(AudioStream *, _DWORD *))(*(_DWORD *)v8->__pad_0 + 20))(v8, v28); /*0x478fde*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)v8->__pad_0 + 88))(v8, &v27, v18); /*0x478feb*/
    Char::Swap((Char *)v11, 1); /*0x478ff2*/
    TextGroup::SetRect((TextGroup *)v11, &v23); /*0x478ffe*/
    Property::Set((Property *)v11, v18); /*0x479006*/
    LOBYTE(v5) = Font::Print((int)v11, (int)v8, p_CCToolTip_field_0x10, v23 + 4, v24 + 2, v25 - v23, v26 - v24, 0, 0, 0); /*0x47903c*/
  }
  return v5; /*0x479042*/
}



// ==== 0x00479050  CCToolTip::Show  this=CCToolTip  sig=csp ====
int __stdcall CCToolTip::Show(CCToolTip *this)
{
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) >= 0 ) /*0x47905d*/
    return CursorAnim::Load((TabClass *)this); /*0x47906e*/
  else
    return 0; /*0x47905f*/
}



// ==== 0x00479080  sub_479080  this=-  sig=ida-proto ====
int sub_479080()
{
  dword_89E390 = 0; /*0x479082*/
  dword_89E394 = 0; /*0x479087*/
  dword_89E398 = 0; /*0x47908c*/
  dword_89E39C = 0; /*0x479091*/
  return 0; /*0x479096*/
}



// ==== 0x004790A0  Game::CheckForGameCD  this=Game  sig=csp ====
int __thiscall Game::CheckForGameCD(Game *this)
{
  return AlwaysFindYRCD();
}



// ==== 0x004790B0  SetSoundWarning  this=AbstractClass  sig=csp ====
int __fastcall SetSoundWarning(int a1)
{
  int result; // eax

  if ( byte_89E3A0 == 1 ) /*0x4790b7*/
  {
    dword_81C1D0 = -2; /*0x4790b9*/
  }
  else
  {
    if ( a1 >= 0 ) /*0x4790c6*/
      a1 = 2; /*0x4790c8*/
    dword_81C1D0 = a1; /*0x4790cd*/
  }
  return result; /*0x4790c3*/
}



// ==== 0x004790E0  CD::AlwaysAvailable  this=CD  sig=csp ====
char __thiscall CD::AlwaysAvailable(CD *this, int a2)
{
  if ( a2 == -2 ) /*0x4790e7*/
    return 1; /*0x4790e9*/
  if ( byte_89E3A0 == 1 ) /*0x4790f5*/
    return 1; /*0x4790f7*/
  *((_DWORD *)this + 1) = -1; /*0x4790fd*/
  return CD::CheckDiscPresence(this, a2); /*0x4790eb*/
}



// ==== 0x00479110  CD::NeverAsk  this=CD  sig=csp ====
bool __thiscall CD::NeverAsk(CD *this, int a2)
{
  int v3; // eax
  BOOL v4; // esi
  wchar_t *StringCSF; // eax
  bool v6; // bl
  BOOL v7; // eax
  int v8; // esi
  int v9; // esi

  if ( *((_DWORD *)this + 1) == -1 ) /*0x479119*/
  {
    v3 = dword_A83D14; /*0x47911b*/
    if ( dword_A83D14 == -1 ) /*0x479123*/
      v3 = dword_A83D18; /*0x479125*/
    *((_DWORD *)this + 1) = v3; /*0x47912a*/
  }
  Theme::Stop((Theme *)&unk_A83D10, 0); /*0x479134*/
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0; /*0x47914b*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x47915a*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x479164*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x47917c*/
  StringCSF = GetStringCSF(aTxtInsertCdDia, 0, aDRa2mdpostCdCp, 164); /*0x479194*/
  v6 = (unsigned __int8)CD::CreateDialog((CD *)StringCSF) != 0; /*0x4791a4*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x4791ac*/
  v7 = v4; /*0x4791b1*/
  v8 = v4 - 1; /*0x4791b3*/
  if ( v7 ) /*0x4791b6*/
  {
    v9 = v8 + 1; /*0x4791b8*/
    do /*0x4791c5*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4791c1*/
      --v9; /*0x4791c4*/
    }
    while ( v9 ); /*0x4791c5*/
  }
  if ( !v6 && *((_DWORD *)this + 1) != -1 ) /*0x4791d1*/
  {
    Theme::QueueSong((int)&unk_A83D10, *((_DWORD *)this + 1)); /*0x4791d9*/
    *((_DWORD *)this + 1) = -1; /*0x4791de*/
  }
  return v6; /*0x4791e5*/
}



// ==== 0x004791F0  CD::LoadScenarioMixFiles  this=CD  sig=csp ====
char __userpurge LinkedList::LoadScenarioMixFiles@<al>(CD *this, int a2@<ebx>, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  char *v10; // edi
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  MixFileClass *v13; // eax
  MixFileClass *v14; // eax
  _DWORD *v15; // eax
  char v16; // bl
  MixFileClass *v17; // eax
  MixFileClass *v18; // eax
  _DWORD *v19; // eax
  char v20; // bl
  MixFileClass *v21; // eax
  char Buffer[4]; // [esp+24h] [ebp-ACh] BYREF
  char Source[60]; // [esp+28h] [ebp-A8h] BYREF
  CCFileClass v24; // [esp+64h] [ebp-6Ch] BYREF
  int v25; // [esp+BCh] [ebp-14h] BYREF
  int v26[2]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  Debug::Log(); /*0x479208*/
  if ( *(_DWORD *)(v5 + 4) == -1 ) /*0x479216*/
  {
    v6 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == -1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    *(_DWORD *)(v5 + 4) = v6; /*0x479227*/
  }
  Theme::Stop((Theme *)&unk_A83D10, 0); /*0x479232*/
  if ( g_MixFile_MOVIES ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( g_MixFile_MOVIES ) /*0x479259*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x47925f*/
    g_MixFile_MOVIES = 0; /*0x479261*/
  }
  if ( g_MixFile_THEME ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( g_MixFile_THEME ) /*0x479289*/
      (**(void (__thiscall ***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1); /*0x47928f*/
    g_MixFile_THEME = 0; /*0x479291*/
  }
  if ( MixFileClass_MULTI ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( MixFileClass_MULTI ) /*0x4792b9*/
      (**(void (__thiscall ***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x4792bf*/
    MixFileClass_MULTI = 0; /*0x4792c1*/
  }
  if ( g_MixFile_MULTIMD ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( g_MixFile_MULTIMD ) /*0x4792e9*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x4792ef*/
    g_MixFile_MULTIMD = 0; /*0x4792f1*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( g_MixFile_MAPSFirst ) /*0x479319*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x47931f*/
    g_MixFile_MAPSFirst = 0; /*0x479321*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( g_MixFile_MAPSMDFirst ) /*0x479349*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x47934f*/
    g_MixFile_MAPSMDFirst = 0; /*0x479351*/
  }
  if ( dword_884E34 ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( dword_884E34 ) /*0x479379*/
      (**(void (__thiscall ***)(int, int))dword_884E34)(dword_884E34, 1); /*0x47937f*/
    dword_884E34 = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = MixFileClass::FromFile(v8, aMainMix, (int)dword_886980); /*0x4793b8*/
  else
    v9 = 0; /*0x4793bf*/
  dword_884E34 = (int)v9; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v10 = (char *)this + 1; /*0x4793d4*/
  sprintf(Buffer, "MAPSMD%02d.MIX", &this->__tail_0[1]); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    g_MixFile_MAPSMDFirst = (int)MixFileClass::FromFile(v11, Buffer, (int)dword_886980); /*0x47941a*/
  else
    g_MixFile_MAPSMDFirst = 0; /*0x479421*/
  sprintf(Buffer, "MAPS%02d.MIX", v10); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    g_MixFile_MAPSFirst = 0; /*0x479489*/
LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  g_MixFile_MAPSFirst = (int)MixFileClass::FromFile(v12, Buffer, (int)dword_886980); /*0x479467*/
  if ( !g_MixFile_MAPSFirst ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v13 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    g_MixFile_MULTIMD = (int)MixFileClass::FromFile(v13, g_Str_File_MULTIMD_MIX, (int)dword_886980); /*0x4794ba*/
  else
    g_MixFile_MULTIMD = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v14 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    MixFileClass_MULTI = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  MixFileClass_MULTI = (int)MixFileClass::FromFile(v14, aMultiMix, (int)dword_886980); /*0x4794f2*/
  if ( !MixFileClass_MULTI ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = CCFileClass::Construct(&v24, g_Str_File_THEMEMD_MIX); /*0x479526*/
  v16 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v15 + 20))(v15, 0, a2); /*0x47953f*/
  v24.? = (int)&CCFileClass::`vftable'; /*0x479541*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24.? = (int)&off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v24.?); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v17 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v17, g_Str_File_THEMEMD_MIX, (int)dword_886980); /*0x479590*/
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v18 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v18, g_Str_File_THEME_MIX, (int)dword_886980); /*0x4795bb*/
      goto LABEL_58; /*0x4795c0*/
    }
  }
  g_MixFile_THEME = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles((Audio *)&unk_A83D10); /*0x4795c8*/
  sprintf(Source, "MOVMD%02d.MIX", a3); /*0x4795e4*/
  v19 = CCFileClass::Construct((CCFileClass *)&v24.?, Source); /*0x4795f5*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 20))(v19, 0); /*0x479609*/
  *(_DWORD *)v24.CDFileClass = &CCFileClass::`vftable'; /*0x47960b*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)&v25); /*0x479616*/
  *(_DWORD *)v24.CDFileClass = &off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v24); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    g_MixFile_MOVIES = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v10); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  g_MixFile_MOVIES = (int)MixFileClass::FromFile(v21, Buffer, (int)dword_886980); /*0x47964a*/
  if ( !g_MixFile_MOVIES ) /*0x479662*/
    goto LABEL_61; /*0x479662*/
  return Map_Load_751C30(); /*0x479390*/
}



// ==== 0x004796E0  sub_4796E0  this=-  sig=ida-proto ====
int sub_4796E0()
{
  memset(&unk_89E3A8, 0, 0x68u); /*0x4796ed*/
  return atexit(nullsub_109); /*0x4796fc*/
}



// ==== 0x00479700  nullsub_109  this=-  sig=ida-proto ====
void __cdecl nullsub_109()
{
  ; /*0x479700*/
}



// ==== 0x00479730  nullsub_110  this=-  sig=ida-proto ====
void nullsub_110()
{
  ; /*0x479730*/
}



// ==== 0x00479740  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_479740(ObjectClass *this, DWORD BytesReturned)
{
  int v2; // esi
  UINT v3; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  DWORD Buffer[2]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  if ( stru_887598.onBridge ) /*0x47974c*/
  {
    sub_47A080(this, BytesReturned); /*0x479753*/
    return; /*0x47975d*/
  }
  v2 = (char)BytesReturned + 65; /*0x479769*/
  sprintf((char *const)Buffer, "%c:\\", v2); /*0x479773*/
  v3 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479786*/
  if ( v3 ) /*0x479789*/
  {
    if ( v3 != 3 ) /*0x47978e*/
    {
LABEL_5:
      Debug::Log(); /*0x479790*/
      return; /*0x4797a2*/
    }
    v4 = 0x80000000; /*0x4797a5*/
  }
  else
  {
    v4 = -1073741824; /*0x4797ac*/
  }
  sprintf(FileName, "\\\\.\\%c:", v2); /*0x4797bc*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x4797da*/
  if ( FileA == (HANDLE)-1 ) /*0x4797df*/
    goto LABEL_5; /*0x4797df*/
  v6 = 0; /*0x479805*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479822*/
  {
    GetLastError(); /*0x479824*/
    Debug::Log(); /*0x47982c*/
    Sleep(0x1F4u); /*0x479839*/
    if ( ++v6 >= 20 ) /*0x479843*/
      goto LABEL_18; /*0x479843*/
  }
  if ( !DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x4798c7*/
    || (LOBYTE(BytesReturned) = 0, !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    || !DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    GetLastError(); /*0x4798d4*/
    Debug::Log(); /*0x4798dc*/
  }
LABEL_18:
  CloseHandle(FileA); /*0x4798e4*/
}



// ==== 0x00479900  sub_479900  this=-  sig=csp ====
int __stdcall sub_479900(char a1)
{
  UINT v1; // eax
  DWORD v3; // edi
  HANDLE FileA; // edi
  char Buffer[8]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  sprintf(Buffer, "%c:\\", a1 + 65); /*0x479918*/
  v1 = GetDriveTypeA(Buffer) - 2; /*0x47992b*/
  if ( v1 ) /*0x47992e*/
  {
    if ( v1 != 3 ) /*0x479933*/
    {
      Debug::Log(); /*0x47993a*/
      return -1; /*0x47994a*/
    }
    v3 = 0x80000000; /*0x47994d*/
  }
  else
  {
    v3 = -1073741824; /*0x479954*/
  }
  sprintf(FileName, "\\\\.\\%c:", a1 + 65); /*0x479964*/
  FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0); /*0x479982*/
  if ( FileA == (HANDLE)-1 ) /*0x479987*/
    Debug::Log(); /*0x47998f*/
  return (int)FileA; /*0x479945*/
}



// ==== 0x004799D0  sub_4799D0  this=-  sig=csp ====
char __stdcall sub_4799D0(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x4799d8*/
  v2 = 0; /*0x4799e4*/
  while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a03*/
  {
    GetLastError(); /*0x479a06*/
    Debug::Log(); /*0x479a0e*/
    Sleep(0x1F4u); /*0x479a1b*/
    if ( ++v2 >= 20 ) /*0x479a21*/
      return 0; /*0x479a29*/
  }
  return 1; /*0x479a23*/
}



// ==== 0x00479A40  sub_479A40  this=-  sig=csp ====
char __stdcall sub_479A40(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x479a48*/
  v2 = 0; /*0x479a54*/
  while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a73*/
  {
    GetLastError(); /*0x479a76*/
    Debug::Log(); /*0x479a7e*/
    Sleep(0x1F4u); /*0x479a8b*/
    if ( ++v2 >= 20 ) /*0x479a91*/
      return 0; /*0x479a99*/
  }
  return 1; /*0x479a93*/
}



// ==== 0x00479BA0  sub_479BA0  this=-  sig=csp ====
char __stdcall sub_479BA0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  char v7; // [esp+Bh] [ebp-11h]
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479baa*/
  v7 = 0; /*0x479bb8*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479bbd*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479bd0*/
  if ( v2 ) /*0x479bd3*/
  {
    if ( v2 != 3 ) /*0x479bd8*/
    {
LABEL_3:
      Debug::Log(); /*0x479bda*/
      return 0; /*0x479bee*/
    }
    v4 = 0x80000000; /*0x479bf1*/
  }
  else
  {
    v4 = -1073741824; /*0x479bf8*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479c08*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479c26*/
  if ( FileA == (HANDLE)-1 ) /*0x479c2b*/
    goto LABEL_3; /*0x479c2b*/
  v6 = 0; /*0x479c53*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479c70*/
  {
    GetLastError(); /*0x479c72*/
    Debug::Log(); /*0x479c7e*/
    Sleep(0x1F4u); /*0x479c8b*/
    if ( ++v6 >= 20 ) /*0x479c91*/
      goto LABEL_17; /*0x479c91*/
  }
  if ( DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x479d21*/
    && (LOBYTE(BytesReturned) = 0, DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    && DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    v7 = 1; /*0x479d44*/
  }
  else
  {
    GetLastError(); /*0x479d2e*/
    Debug::Log(); /*0x479d3a*/
  }
LABEL_17:
  CloseHandle(FileA); /*0x479d49*/
  return v7; /*0x479be9*/
}



// ==== 0x00479D60  sub_479D60  this=-  sig=csp ====
char __stdcall sub_479D60(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479d6a*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479d79*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479d8c*/
  if ( v2 ) /*0x479d8f*/
  {
    if ( v2 != 3 ) /*0x479d94*/
    {
LABEL_3:
      Debug::Log(); /*0x479d96*/
      return 0; /*0x479dab*/
    }
    v4 = 0x80000000; /*0x479dae*/
  }
  else
  {
    v4 = -1073741824; /*0x479db5*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479dc5*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479de3*/
  if ( FileA == (HANDLE)-1 ) /*0x479de8*/
    goto LABEL_3; /*0x479de8*/
  v6 = 0; /*0x479e10*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479e2f*/
  {
    GetLastError(); /*0x479e32*/
    Debug::Log(); /*0x479e3a*/
    Sleep(0x1F4u); /*0x479e47*/
    if ( ++v6 >= 20 ) /*0x479e4d*/
      goto LABEL_13; /*0x479e4d*/
  }
  LOBYTE(BytesReturned) = 1; /*0x479e69*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479e6e*/
  {
    GetLastError(); /*0x479e7f*/
    Debug::Log(); /*0x479e87*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x479e8f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479ea6*/
      break; /*0x479eae*/
    GetLastError(); /*0x479eb1*/
    Debug::Log(); /*0x479eb9*/
    Sleep(0x1F4u); /*0x479ec6*/
  }
  CloseHandle(FileA); /*0x479ecf*/
  return 1; /*0x479da5*/
}



// ==== 0x00479EF0  sub_479EF0  this=-  sig=csp ====
char __stdcall sub_479EF0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479efa*/
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479f09*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479f1c*/
  if ( v2 ) /*0x479f1f*/
  {
    if ( v2 != 3 ) /*0x479f24*/
    {
LABEL_3:
      Debug::Log(); /*0x479f26*/
      return 0; /*0x479f3b*/
    }
    v4 = 0x80000000; /*0x479f3e*/
  }
  else
  {
    v4 = -1073741824; /*0x479f45*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479f55*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479f73*/
  if ( FileA == (HANDLE)-1 ) /*0x479f78*/
    goto LABEL_3; /*0x479f78*/
  v6 = 0; /*0x479fa0*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479fbf*/
  {
    GetLastError(); /*0x479fc2*/
    Debug::Log(); /*0x479fca*/
    Sleep(0x1F4u); /*0x479fd7*/
    if ( ++v6 >= 20 ) /*0x479fdd*/
      goto LABEL_13; /*0x479fdd*/
  }
  LOBYTE(BytesReturned) = 0; /*0x479ff9*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479ffe*/
  {
    GetLastError(); /*0x47a00f*/
    Debug::Log(); /*0x47a017*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x47a01f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x47a036*/
      break; /*0x47a03e*/
    GetLastError(); /*0x47a041*/
    Debug::Log(); /*0x47a049*/
    Sleep(0x1F4u); /*0x47a056*/
  }
  CloseHandle(FileA); /*0x47a05f*/
  return 1; /*0x479f35*/
}



// ==== 0x0047A080  ObjectClass::method_47A080  this=ObjectClass  sig=csp ====
void __thiscall sub_47A080(ObjectClass *this, DWORD a2)
{
  char v2; // bl
  HANDLE FileA; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-20h] BYREF
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2 + 1; /*0x47a098*/
  LOBYTE(a2) = a2 + 1; /*0x47a0a3*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a0b3*/
  if ( !(unsigned __int8)CDROM::LockVolume((int)this, FileA, a2, 0, 0) ) /*0x47a0ba*/
  {
    Debug::Log(); /*0x47a0cf*/
    return; /*0x47a0de*/
  }
  if ( !CDROM::DeviceIoControl(FileA, a2) ) /*0x47a0e5*/
  {
    Debug::Log(); /*0x47a0fa*/
    DriveControlCD((int)this, FileA, a2); /*0x47a105*/
    return; /*0x47a111*/
  }
  memset(&InBuffer[1], 0, 0x18u); /*0x47a123*/
  InBuffer[3] = 17421; /*0x47a13b*/
  InBuffer[0] = v2; /*0x47a143*/
  InBuffer[2] = 2121; /*0x47a147*/
  if ( !DeviceIoControl(FileA, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a14f*/
  {
    GetLastError(); /*0x47a160*/
    Debug::Log(); /*0x47a16c*/
LABEL_8:
    Debug::Log(); /*0x47a17d*/
    goto LABEL_9; /*0x47a186*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a17b*/
    goto LABEL_8; /*0x47a17b*/
LABEL_9:
  DriveControlCD((int)this, FileA, a2); /*0x47a18e*/
  CloseHandle(FileA); /*0x47a19b*/
}



// ==== 0x0047A1B0  ObjectClass::method_47A1B0  this=ObjectClass  sig=csp ====
char __thiscall sub_47A1B0(ObjectClass *this, DWORD BytesReturned)
{
  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a1bc*/
  Debug::Log(); /*0x47a1d6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a1e0*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a203*/
  Debug::Log(); /*0x47a205*/
  if ( (unsigned __int8)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a218*/
  {
    Debug::Log(); /*0x47a244*/
    Debug::Log(); /*0x47a24e*/
    if ( sub_47A560(FileA, BytesReturned) ) /*0x47a25a*/
    {
      Debug::Log(); /*0x47a280*/
      v5 = 1; /*0x47a285*/
    }
    else
    {
      Debug::Log(); /*0x47a26f*/
      v5 = 0; /*0x47a277*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a28f*/
    CloseHandle(FileA); /*0x47a295*/
    Debug::Log(); /*0x47a2af*/
    return v5; /*0x47a2b7*/
  }
  else
  {
    Debug::Log(); /*0x47a22d*/
    return 0; /*0x47a235*/
  }
}



// ==== 0x0047A2D0  ObjectClass::method_47A2D0  this=ObjectClass  sig=csp ====
char __thiscall sub_47A2D0(ObjectClass *this, DWORD BytesReturned)
{
  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a2dc*/
  Debug::Log(); /*0x47a2f6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a300*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a323*/
  Debug::Log(); /*0x47a325*/
  if ( (unsigned __int8)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a338*/
  {
    Debug::Log(); /*0x47a364*/
    Debug::Log(); /*0x47a36e*/
    if ( CDROM::DeviceIoControl(FileA, BytesReturned) ) /*0x47a37a*/
    {
      Debug::Log(); /*0x47a3a0*/
      v5 = 1; /*0x47a3a5*/
    }
    else
    {
      Debug::Log(); /*0x47a38f*/
      v5 = 0; /*0x47a397*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a3af*/
    CloseHandle(FileA); /*0x47a3b5*/
    Debug::Log(); /*0x47a3cf*/
    return v5; /*0x47a3d7*/
  }
  else
  {
    Debug::Log(); /*0x47a34d*/
    return 0; /*0x47a355*/
  }
}



// ==== 0x0047A3F0  CDROM::DeviceIoControl  this=ObjectClass  sig=csp ====
bool __stdcall CDROM_DeviceIoControl(HANDLE hDevice, int a2)
{
  int v2; // esi
  HANDLE v3; // edi
  BOOL v4; // eax
  bool v5; // bl
  char v6; // al
  bool v7; // cc
  char v9; // [esp+10h] [ebp-24h] BYREF
  int v10; // [esp+11h] [ebp-23h]
  _DWORD InBuffer[7]; // [esp+18h] [ebp-1Ch] BYREF

  LOBYTE(v10) = 0; /*0x47a402*/
  v2 = (char)a2; /*0x47a406*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a40b*/
  v3 = hDevice; /*0x47a40d*/
  InBuffer[1] = &v9; /*0x47a426*/
  v9 = 2; /*0x47a437*/
  InBuffer[3] = 17421; /*0x47a43c*/
  InBuffer[0] = (char)a2; /*0x47a444*/
  InBuffer[2] = 2120; /*0x47a448*/
  v4 = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0); /*0x47a450*/
  v5 = v4; /*0x47a454*/
  if ( !v4 ) /*0x47a459*/
  {
    GetLastError(); /*0x47a51a*/
    Debug::Log(); /*0x47a526*/
    return 0; /*0x47a526*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a464*/
  {
    if ( InBuffer[3] == 176 || InBuffer[3] == 1 ) /*0x47a474*/
    {
      v5 = 1; /*0x47a47a*/
      goto LABEL_6; /*0x47a47a*/
    }
    return 0; /*0x47a537*/
  }
LABEL_6:
  Debug::Log(); /*0x47a47c*/
  v6 = v10; /*0x47a491*/
  if ( !(_BYTE)v10 ) /*0x47a49a*/
  {
    v6 = 1; /*0x47a49c*/
    LOBYTE(v10) = 1; /*0x47a49e*/
  }
  a2 = 0; /*0x47a4a4*/
  if ( v6 ) /*0x47a4ac*/
  {
    while ( 1 ) /*0x47a4c1*/
    {
      InBuffer[1] = &v9; /*0x47a4c1*/
      v9 = 1; /*0x47a4d2*/
      InBuffer[3] = 17421; /*0x47a4d7*/
      InBuffer[0] = v2; /*0x47a4df*/
      InBuffer[2] = 2120; /*0x47a4e3*/
      if ( !DeviceIoControl(v3, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0) ) /*0x47a4eb*/
        break; /*0x47a4eb*/
      if ( (InBuffer[6] & 1) != 0 ) /*0x47a4fb*/
        return 0; /*0x47a4fb*/
      v7 = a2 + 1 < (unsigned __int8)v10; /*0x47a50c*/
      v5 = 1; /*0x47a50e*/
      ++a2; /*0x47a510*/
      if ( !v7 ) /*0x47a514*/
        return v5; /*0x47a514*/
    }
    GetLastError(); /*0x47a53c*/
    Debug::Log(); /*0x47a548*/
    return 0; /*0x47a550*/
  }
  return v5; /*0x47a52e*/
}



// ==== 0x0047A560  sub_47A560  this=ObjectClass  sig=csp ====
bool __stdcall sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
  char v2; // bl
  _BYTE v4[2]; // [esp+Eh] [ebp-1Eh] BYREF
  _DWORD InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v2 = BytesReturned; /*0x47a564*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a583*/
  v4[1] = 0; /*0x47a58d*/
  CDROM::DeviceIoControl(hDevice, BytesReturned); /*0x47a591*/
  InBuffer[0] = v2; /*0x47a59d*/
  InBuffer[1] = v4; /*0x47a5ac*/
  v4[0] = 0; /*0x47a5bd*/
  InBuffer[3] = 17421; /*0x47a5c2*/
  InBuffer[2] = 2120; /*0x47a5ca*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a5d2*/
  {
    GetLastError(); /*0x47a5e6*/
    Debug::Log(); /*0x47a5f2*/
    return 0; /*0x47a5ff*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a607*/
}



// ==== 0x0047A620  sub_47A620  this=-  sig=csp ====
bool __stdcall sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
  _DWORD InBuffer[7]; // [esp+4h] [ebp-1Ch] BYREF

  memset(&InBuffer[1], 0, 0x18u); /*0x47a62f*/
  InBuffer[0] = (char)BytesReturned; /*0x47a645*/
  InBuffer[3] = 17421; /*0x47a656*/
  InBuffer[2] = 2121; /*0x47a65e*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a666*/
  {
    GetLastError(); /*0x47a678*/
    Debug::Log(); /*0x47a684*/
    return 0; /*0x47a691*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a699*/
}



// ==== 0x0047A6F0  CDROM::LockVolume  this=CDROM  sig=csp ====
int __stdcall CDROM::LockVolume(int a1, HANDLE hDevice, unsigned __int8 a3, DWORD BytesReturned, __int16 a5)
{
  unsigned __int16 v5; // ax
  int v6; // ebp
  char v7; // bl
  unsigned __int16 v8; // dx
  int result; // eax
  int v10; // [esp+10h] [ebp-20h]
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  LOBYTE(v5) = 0; /*0x47a6fc*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a706*/
  HIBYTE(v5) = BytesReturned; /*0x47a708*/
  v10 = 5; /*0x47a723*/
  v6 = a3 | v5; /*0x47a72b*/
  while ( 2 )
  {
    v7 = 0; /*0x47a72d*/
    do
    {
      LOBYTE(v8) = 0; /*0x47a738*/
      InBuffer[1] = a5; /*0x47a73d*/
      v7 = v7 != 0 ? 8 : 72;
      HIBYTE(v8) = v7; /*0x47a748*/
      InBuffer[2] = v8 | 0x4A; /*0x47a75a*/
      InBuffer[3] = 17421; /*0x47a76b*/
      InBuffer[0] = v6; /*0x47a773*/
      result = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0); /*0x47a777*/
      if ( result ) /*0x47a780*/
      {
        if ( (InBuffer[6] & 1) == 0 ) /*0x47a79f*/
        {
          LOBYTE(result) = 1; /*0x47a835*/
          return result; /*0x47a83b*/
        }
      }
      else
      {
        GetLastError(); /*0x47a784*/
        Debug::Log(); /*0x47a790*/
      }
    }
    while ( v7 != 8 );
    --v10; /*0x47a7b6*/
    Debug::Log(); /*0x47a812*/
    Sleep(0x3E8u); /*0x47a81f*/
    result = v10; /*0x47a825*/
    if ( v10 > 0 ) /*0x47a82b*/
      continue; /*0x47a82b*/
    break;
  }
  LOBYTE(result) = 0; /*0x47a841*/
  return result; /*0x47a832*/
}



// ==== 0x0047A920  DriveControlCD  this=-  sig=csp ====
int __stdcall DriveControlCD(int a1, HANDLE hDevice, DWORD BytesReturned)
{
  int v3; // ebp
  char v4; // bl
  int v5; // eax
  int result; // eax
  _DWORD InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v3 = (char)BytesReturned; /*0x47a92c*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a93b*/
  v4 = 0; /*0x47a943*/
  while ( 1 )
  {
    LOBYTE(v5) = 0; /*0x47a949*/
    v4 = v4 != 0 ? 8 : 72;
    BYTE1(v5) = v4; /*0x47a957*/
    v5 = (unsigned __int16)v5; /*0x47a95a*/
    LOBYTE(v5) = v5 | 0x6A; /*0x47a963*/
    InBuffer[2] = v5; /*0x47a967*/
    InBuffer[3] = 17421; /*0x47a976*/
    InBuffer[0] = v3; /*0x47a97e*/
    result = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0); /*0x47a982*/
    if ( result ) /*0x47a98b*/
      break; /*0x47a98b*/
    GetLastError(); /*0x47a98f*/
    result = Debug::Log(); /*0x47a99b*/
LABEL_5:
    LOBYTE(result) = 0; /*0x47a9ac*/
    if ( v4 == 8 ) /*0x47a9b1*/
      return result; /*0x47a9b1*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a9aa*/
    goto LABEL_5; /*0x47a9aa*/
  LOBYTE(result) = 1; /*0x47a9b5*/
  return result; /*0x47a9b7*/
}



// ==== 0x0047A9D0  BufferIOFile::Constructor  this=CDFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFile::Constructor(BufferIOFile *this, char *Source)
{
  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47a9d3*/
  LOBYTE(this->m_54) = 0; /*0x47a9df*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch((CDFileClass *)this, Source); /*0x47a9e9*/
  return this->__pad_0; /*0x47a9f0*/
}



// ==== 0x0047AA00  CDFileClass::method_47AA00  this=CDFileClass  sig=csp ====
_BYTE *__thiscall sub_47AA00(CDFileClass *this, char **a2)
{
  char *v3; // eax

  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa03*/
  *((_BYTE *)this + 84) = 0; /*0x47aa0c*/
  *(_DWORD *)this->BufferIOFileClass = &off_7E1668; /*0x47aa10*/
  v3 = String::GetOrEmpty_Alt((String *)a2); /*0x47aa16*/
  FileClass::OpenWithCDSearch(this, v3); /*0x47aa1e*/
  return this->BufferIOFileClass; /*0x47aa25*/
}



// ==== 0x0047AA30  BufferIOFile::Init  this=CDFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFile::Init(BufferIOFile *this)
{
  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa33*/
  LOBYTE(this->m_54) = 0; /*0x47aa38*/
  *(_DWORD *)this->__pad_0 = &off_7E1668; /*0x47aa3c*/
  return this->__pad_0; /*0x47aa44*/
}



// ==== 0x0047AA50  sub_47AA50  this=-  sig=ida-proto ====
int __fastcall sub_47AA50(char a1)
{
  HANDLE FirstFileA; // eax
  CHAR FileName[8]; // [esp+0h] [ebp-148h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-140h] BYREF

  strcpy(FileName, "?:\\*.*"); /*0x47aa65*/
  FileName[0] = a1 + 65; /*0x47aa6e*/
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47aa85*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x47aa8e*/
    return 0; /*0x47aa90*/
  FindClose(FirstFileA); /*0x47aa9a*/
  return 1; /*0x47aa92*/
}



// ==== 0x0047AAB0  CDFileClass::OpenFileBufferIO  this=CDFileClass  sig=csp ====
BOOL __thiscall FileClass::OpenFileBufferIO(CDFileClass *this, const CHAR *a2)
{
  return BufferIOFileClass::Open((BufferIOFileClass *)this, a2); /*0x47aaba*/
}



// ==== 0x0047AAC0  sub_47AAC0  this=-  sig=ida-proto ====
BOOL sub_47AAC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47aac1*/
  if ( CmdLine_NoCD ) /*0x47aac9*/
  {
    do /*0x47aaeb*/
    {
      v1 = (void **)*v0; /*0x47aacf*/
      if ( v0[1] ) /*0x47aacc*/
        free(v0[1]); /*0x47aad6*/
      __3_YAXPAX_Z(v0); /*0x47aadf*/
      v0 = v1; /*0x47aae7*/
    }
    while ( v1 ); /*0x47aaeb*/
  }
  CmdLine_NoCD = 0; /*0x47aaee*/
  return Game::FindGameDirectoryCD(byte_89E41C); /*0x47aafd*/
}



// ==== 0x0047AB10  Game::FindGameDirectoryCD  this=CellStruct  sig=csp ====
BOOL __thiscall CD_FindGameDirectory(char *Source)
{
  char v1; // bl
  char *v3; // ebp
  char *i; // edx
  char v5; // cl
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char Str1[260]; // [esp+8h] [ebp-104h] BYREF

  v1 = 0; /*0x47ab17*/
  if ( !Source ) /*0x47ab1b*/
    return 0; /*0x47ab26*/
  v3 = _strdup(Source); /*0x47ab30*/
  if ( v3 != byte_89E41C ) /*0x47ab3b*/
  {
    strcat(byte_89E41C, asc_81C8FC); /*0x47ab61*/
    strcat(byte_89E41C, v3); /*0x47ab89*/
  }
  for ( i = strtok(v3, asc_81C8FC); i; i = strtok(0, asc_81C8FC) ) /*0x47aba4*/
  {
    if ( strlen(i) ) /*0x47abac*/
    {
      strcpy(Str1, i); /*0x47abd6*/
      v5 = Str1[strlen(Str1) - 1]; /*0x47abed*/
      if ( v5 != 58 && v5 != 92 ) /*0x47abf9*/
        strcat(Str1, asc_815E74); /*0x47ac1e*/
      if ( !strncmp(Str1, Str2, 2u) ) /*0x47ac33*/
      {
        if ( !dword_89E414 ) /*0x47ac47*/
          continue; /*0x47ac47*/
        v1 = 1; /*0x47ac52*/
        if ( AlwaysFindYRCD(dword_89E414, 120) <= -1 ) /*0x47ac5c*/
          continue; /*0x47ac5c*/
        Str1[0] = dword_89E414 + 65; /*0x47ac6d*/
        v6 = __2_YAPAXI_Z(8u); /*0x47ac7a*/
        v6[1] = _strdup(Str1); /*0x47ac82*/
        *v6 = 0; /*0x47ac85*/
        v7 = CmdLine_NoCD; /*0x47ac8b*/
        if ( CmdLine_NoCD ) /*0x47ac96*/
        {
          v8 = *(_DWORD **)CmdLine_NoCD; /*0x47aca0*/
          if ( *(_DWORD *)CmdLine_NoCD ) /*0x47aca0*/
          {
            do /*0x47acac*/
            {
              v7 = v8; /*0x47aca6*/
              v8 = (_DWORD *)*v8; /*0x47aca8*/
            }
            while ( v8 ); /*0x47acac*/
          }
LABEL_24:
          *v7 = v6; /*0x47ad0c*/
          continue; /*0x47ad0c*/
        }
        CmdLine_NoCD = v6; /*0x47ac98*/
      }
      else
      {
        if ( Str1[0] - 65 <= 0 || AlwaysFindYRCD(Str1[0] - 65, 120) != 2 ) /*0x47acc9*/
          continue; /*0x47acc9*/
        v1 = 1; /*0x47accd*/
        v6 = __2_YAPAXI_Z(8u); /*0x47acd4*/
        v6[1] = _strdup(Str1); /*0x47ace0*/
        *v6 = 0; /*0x47ace3*/
        v7 = CmdLine_NoCD; /*0x47ace9*/
        if ( CmdLine_NoCD ) /*0x47acf4*/
        {
          v9 = *(_DWORD **)CmdLine_NoCD; /*0x47acfe*/
          if ( *(_DWORD *)CmdLine_NoCD ) /*0x47acfe*/
          {
            do /*0x47ad0a*/
            {
              v7 = v9; /*0x47ad04*/
              v9 = (_DWORD *)*v9; /*0x47ad06*/
            }
            while ( v9 ); /*0x47ad0a*/
          }
          goto LABEL_24; /*0x47ad0a*/
        }
        CmdLine_NoCD = v6; /*0x47acf6*/
      }
    }
  }
  free(v3); /*0x47ad27*/
  return v1 == 0; /*0x47ab1f*/
}



// ==== 0x0047ADA0  CD::SetCurrentInstance  this=CD  sig=csp ====
int __thiscall CD::SetCurrentInstance(CD *this)
{
  int result; // eax

  result = dword_89E414; /*0x47ada0*/
  dword_89E414 = (int)this; /*0x47ada5*/
  dword_89E418 = result; /*0x47adab*/
  return result; /*0x47adb0*/
}



// ==== 0x0047ADC0  sub_47ADC0  this=-  sig=ida-proto ====
void sub_47ADC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47adc1*/
  if ( CmdLine_NoCD ) /*0x47adc9*/
  {
    do /*0x47adeb*/
    {
      v1 = (void **)*v0; /*0x47adcf*/
      if ( v0[1] ) /*0x47adcc*/
        free(v0[1]); /*0x47add6*/
      __3_YAXPAX_Z(v0); /*0x47addf*/
      v0 = v1; /*0x47ade7*/
    }
    while ( v1 ); /*0x47adeb*/
    CmdLine_NoCD = 0; /*0x47aded*/
  }
  else
  {
    CmdLine_NoCD = 0; /*0x47adf6*/
  }
}



// ==== 0x0047AE10  CDFileClass::OpenWithCDSearch  this=CDFileClass  sig=csp ====
int __thiscall FileClass::OpenWithCDSearch(CDFileClass *this, char *Source)
{
  const char *v3; // ebp
  char v5[260]; // [esp+10h] [ebp-104h] BYREF

  CCFileClass::SetName((BufferIOFileClass *)this, Source); /*0x47ae21*/
  if ( *((_BYTE *)this + 84) || !CmdLine_NoCD || (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x47ae42*/
    return (*(int (__thiscall **)(CDFileClass *))(*(_DWORD *)this->BufferIOFileClass + 4))(this); /*0x47aef4*/
  v3 = (const char *)CmdLine_NoCD; /*0x47ae4f*/
  if ( CmdLine_NoCD ) /*0x47ae57*/
  {
    while ( 1 ) /*0x47ae78*/
    {
      strcpy(v5, *((const char **)v3 + 1)); /*0x47ae78*/
      strcat(v5, Source); /*0x47aea4*/
      CCFileClass::SetName((BufferIOFileClass *)this, v5); /*0x47aeb4*/
      if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)this, 0) ) /*0x47aebd*/
        break; /*0x47aebd*/
      v3 = *(const char **)v3; /*0x47aec6*/
      if ( !v3 ) /*0x47aecb*/
        goto LABEL_7; /*0x47aecb*/
    }
  }
  else
  {
LABEL_7:
    CCFileClass::SetName((BufferIOFileClass *)this, Source); /*0x47aecd*/
  }
  return (*(int (__thiscall **)(CDFileClass *))(*(_DWORD *)this->BufferIOFileClass + 4))(this); /*0x47aee3*/
}



// ==== 0x0047AF10  CDFileClass::Reopen  this=CDFileClass  sig=csp ====
int __thiscall CCFileClass::Reopen(CDFileClass *this, char *Source, CHAR *a3)
{
  CCFileClass::Close((CCFileClass *)this); /*0x47af15*/
  if ( !Source ) /*0x47af20*/
    (*(void (__thiscall **)(CDFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 2, 0, 0); /*0x47af2a*/
  if ( *((_BYTE *)this + 84) || a3 == (CHAR *)2 ) /*0x47af3b*/
  {
    CCFileClass::SetName(this, Source); /*0x47af56*/
    return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x47af5e*/
  }
  else
  {
    (*(void (__thiscall **)(CDFileClass *, char *))(*(_DWORD *)&this->FileClass + 8))(this, Source); /*0x47af42*/
    return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x47af48*/
  }
}



// ==== 0x0047AF70  FileClass::FindFirstWithCD  this=MixFileClass  sig=csp ====
char __thiscall FileClass_FindFirstWithCD(char *this)
{
  HANDLE FirstFileA; // edx
  const char *v4; // ebx
  CHAR FileName[260]; // [esp+10h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+114h] [ebp-140h] BYREF

  if ( this ) /*0x47af7e*/
  {
    if ( hFindFile != (HANDLE)-1 ) /*0x47af8c*/
    {
      FindClose(hFindFile); /*0x47af8f*/
      hFindFile = (HANDLE)-1; /*0x47af95*/
    }
    strcpy(FileName, this); /*0x47afbd*/
    FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47afd5*/
    if ( FirstFileA != (HANDLE)-1 && (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x47afe7*/
    {
LABEL_6:
      strcpy(this, FindFileData.cFileName); /*0x47afe9*/
      hFindFile = FirstFileA; /*0x47b012*/
      return 1; /*0x47b01f*/
    }
    v4 = (const char *)CmdLine_NoCD; /*0x47b020*/
    if ( CmdLine_NoCD ) /*0x47b028*/
    {
      while ( 1 ) /*0x47b04d*/
      {
        strcpy(FileName, *((const char **)v4 + 1)); /*0x47b04d*/
        strcat(FileName, this); /*0x47b074*/
        FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47b090*/
        if ( FirstFileA != (HANDLE)-1 && (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x47b0a2*/
          break; /*0x47b0a2*/
        v4 = *(const char **)v4; /*0x47b0a8*/
        if ( !v4 ) /*0x47b0ac*/
          return 0; /*0x47b0ac*/
      }
      goto LABEL_6; /*0x47b0a2*/
    }
  }
  return 0; /*0x47b00f*/
}



// ==== 0x0047B0C0  FileFind::Next  this=AbstractClass  sig=csp ====
int __thiscall FileFind::Next(char *this)
{
  int result; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    result = (int)hFindFile; /*0x47b0cd*/
    if ( hFindFile != (HANDLE)-1 ) /*0x47b0d5*/
    {
      result = FindNextFileA(hFindFile, &FindFileData); /*0x47b0dd*/
      if ( result == 1 ) /*0x47b0e6*/
      {
        strcpy(this, FindFileData.cFileName); /*0x47b104*/
        return 1; /*0x47b116*/
      }
    }
    *this = 0; /*0x47b117*/
  }
  LOBYTE(result) = 0; /*0x47b11a*/
  return result; /*0x47b10f*/
}



// ==== 0x0047B130  FileFind::CloseHandle  this=FileFind  sig=ida-proto ====
HANDLE FileFind_CloseHandle()
{
  HANDLE result; // eax

  result = hFindFile; /*0x47b130*/
  if ( hFindFile != (HANDLE)-1 ) /*0x47b138*/
  {
    result = (HANDLE)FindClose(hFindFile); /*0x47b13b*/
    hFindFile = (HANDLE)-1; /*0x47b141*/
  }
  return result; /*0x47b14b*/
}



// ==== 0x0047B150  sub_47B150  this=-  sig=ida-proto ====
void sub_47B150()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47b15c*/
  dbl_89E750 = Math::Sqrt(v0 + v0); /*0x47b16e*/
}



// ==== 0x0047B180  sub_47B180  this=-  sig=ida-proto ====
void sub_47B180()
{
  dbl_89E7B8 = dbl_89E750 / 60.0; /*0x47b18c*/
}



// ==== 0x0047B1A0  sub_47B1A0  this=-  sig=ida-proto ====
void sub_47B1A0()
{
  dbl_89E7A0 = 1.0 / dbl_89E7B8; /*0x47b1ac*/
}



// ==== 0x0047B1C0  sub_47B1C0  this=-  sig=ida-proto ====
void sub_47B1C0()
{
  dbl_89E798 = 0.0174532925199433 * 45.0; /*0x47b1cc*/
}



// ==== 0x0047B1E0  sub_47B1E0  this=-  sig=ida-proto ====
void sub_47B1E0()
{
  dbl_89E758 = 0.0174532925199433 * 60.0; /*0x47b1ec*/
}



// ==== 0x0047B200  sub_47B200  this=-  sig=ida-proto ====
void sub_47B200()
{
  dbl_89E728 = 0.0174532925199433 * 90.0; /*0x47b20c*/
}



// ==== 0x0047B220  sub_47B220  this=-  sig=ida-proto ====
__int64 sub_47B220()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E728 - dbl_89E758); /*0x47b232*/
  result = Math::RoundToInt(v0 * dbl_89E750 * 0.5); /*0x47b246*/
  dword_89E7C0 = result; /*0x47b24b*/
  return result; /*0x47b250*/
}



// ==== 0x0047B260  sub_47B260  this=-  sig=ida-proto ====
void sub_47B260()
{
  dbl_89E768 = Math::ArcTan((double)dword_89E7C0 * 0.00390625); /*0x47b277*/
}



// ==== 0x0047B290  sub_47B290  this=-  sig=ida-proto ====
void sub_47B290()
{
  dbl_89E788 = Math::ArcTan((double)(2 * dword_89E7C0) / dbl_89E750); /*0x47b2b2*/
}



// ==== 0x0047B2C0  sub_47B2C0  this=-  sig=ida-proto ====
__int64 sub_47B2C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E7C0) + 0.5); /*0x47b2db*/
  dword_89E7B4 = result; /*0x47b2e0*/
  return result; /*0x47b2e6*/
}



// ==== 0x0047B2F0  sub_47B2F0  this=-  sig=ida-proto ====
int sub_47B2F0()
{
  dword_89E748 = 0; /*0x47b2f2*/
  return 0; /*0x47b2fe*/
}



// ==== 0x0047B300  sub_47B300  this=-  sig=ida-proto ====
int sub_47B300()
{
  dword_89E778 = 0; /*0x47b302*/
  dword_89E77C = 0; /*0x47b307*/
  dword_89E780 = 0; /*0x47b30c*/
  return 0; /*0x47b311*/
}



// ==== 0x0047B320  sub_47B320  this=-  sig=ida-proto ====
int sub_47B320()
{
  dword_89E7B0 = 0; /*0x47b325*/
  dword_89E7A8 = 128; /*0x47b32f*/
  dword_89E7AC = 128; /*0x47b334*/
  return 128; /*0x47b339*/
}



// ==== 0x0047B340  sub_47B340  this=-  sig=ida-proto ====
int sub_47B340()
{
  dword_89E730 = 0; /*0x47b342*/
  dword_89E734 = 0; /*0x47b347*/
  dword_89E738 = 0; /*0x47b34c*/
  dword_89E73C = 0; /*0x47b351*/
  return 0; /*0x47b356*/
}



// ==== 0x0047B3A0  Isometric::InitTables  this=IUnknown  sig=csp ====
__int64 __thiscall Isometric_InitTables(int this, _DWORD *a2)
{
  char v2; // al
  __int64 result; // rax
  int v5; // ecx
  double v6; // st7

  v2 = byte_89E770; /*0x47b3a9*/
  if ( (byte_89E770 & 1) == 0 ) /*0x47b3b3*/
  {
    v2 = byte_89E770 | 1; /*0x47b3bb*/
    byte_89E770 |= 1u; /*0x47b3bd*/
    dbl_89E720 = (double)dword_89E7C0; /*0x47b3c2*/
  }
  if ( (v2 & 2) == 0 ) /*0x47b3ca*/
  {
    v2 |= 2u; /*0x47b3d8*/
    byte_89E770 = v2; /*0x47b3da*/
    dbl_89E740 = dbl_89E720 * 0.00390625; /*0x47b3df*/
  }
  if ( (v2 & 4) == 0 ) /*0x47b3e7*/
  {
    byte_89E770 = v2 | 4; /*0x47b3f5*/
    *(double *)qword_81C918 = dbl_89E720; /*0x47b3ff*/
    qword_81C940 = *(_QWORD *)&dbl_89E720; /*0x47b40e*/
    qword_81C960 = *(_QWORD *)&dbl_89E720; /*0x47b41d*/
    qword_81C968 = *(_QWORD *)&dbl_89E720; /*0x47b433*/
    qword_81C988 = *(_QWORD *)&dbl_89E720; /*0x47b442*/
    qword_81C990 = *(_QWORD *)&dbl_89E720; /*0x47b451*/
    qword_81C9B8 = *(_QWORD *)&dbl_89E720; /*0x47b461*/
    qword_81C9E0 = *(_QWORD *)&dbl_89E720; /*0x47b470*/
    dbl_81C9B0 = -dbl_89E720; /*0x47b47a*/
    dword_81C920 = 0; /*0x47b482*/
    dword_81C924 = 0; /*0x47b48c*/
    dword_81C928 = 0; /*0x47b496*/
    dword_81C92C = 0; /*0x47b4a0*/
    dword_81C930 = 0; /*0x47b4aa*/
    dword_81C934 = 1072693248; /*0x47b4b4*/
    dword_81C938 = 0; /*0x47b4be*/
    dword_81C93C = 0; /*0x47b4c8*/
    dword_81C948 = 0; /*0x47b4d2*/
    dword_81C94C = 0; /*0x47b4dc*/
    dword_81C950 = 0; /*0x47b4e6*/
    dword_81C954 = -1074790400; /*0x47b4f0*/
    dword_81C958 = 0; /*0x47b4fa*/
    dword_81C95C = 0; /*0x47b504*/
    dword_81C970 = 0; /*0x47b50e*/
    dword_81C974 = 0; /*0x47b518*/
    dword_81C978 = 0; /*0x47b522*/
    dword_81C97C = 0; /*0x47b52c*/
    dword_81C980 = 0; /*0x47b536*/
    dword_81C984 = -1074790400; /*0x47b540*/
    dword_81C998 = 0; /*0x47b54a*/
    dword_81C99C = 0; /*0x47b554*/
    dword_81C9A0 = 0; /*0x47b55e*/
    dword_81C9A4 = 1072693248; /*0x47b568*/
    dword_81C9A8 = 0; /*0x47b572*/
    dword_81C9AC = 1072693248; /*0x47b57c*/
    dword_81C9C0 = 0; /*0x47b586*/
    dword_81C9C4 = 0; /*0x47b590*/
    dword_81C9C8 = 0; /*0x47b59a*/
    dword_81C9CC = -1074790400; /*0x47b5a4*/
    dword_81C9D0 = 0; /*0x47b5ae*/
    dword_81C9D4 = 1072693248; /*0x47b5b8*/
    dword_81C9D8 = 0; /*0x47b5c2*/
    dword_81C9DC = 0; /*0x47b5cc*/
    dword_81C9E8 = 0; /*0x47b5db*/
    dword_81C9EC = 0; /*0x47b5e5*/
    dword_81C9F0 = 0; /*0x47b5ef*/
    dword_81C9F4 = -1074790400; /*0x47b5f9*/
    dword_81C9F8 = 0; /*0x47b603*/
    dword_81C9FC = -1074790400; /*0x47b60d*/
    qword_81CA00 = *(_QWORD *)&dbl_89E720; /*0x47b617*/
    qword_81CA08 = *(_QWORD *)&dbl_89E720; /*0x47b627*/
    qword_81CA30 = *(_QWORD *)&dbl_89E720; /*0x47b63c*/
    qword_81CA58 = *(_QWORD *)&dbl_89E720; /*0x47b64b*/
    qword_81CA78 = *(_QWORD *)&dbl_89E720; /*0x47b65b*/
    qword_81CA80 = *(_QWORD *)&dbl_89E720; /*0x47b66a*/
    qword_81CAA8 = *(_QWORD *)&dbl_89E720; /*0x47b67b*/
    qword_81CAC8 = *(_QWORD *)&dbl_89E720; /*0x47b68b*/
    dbl_81CAA0 = dbl_89E720 + dbl_89E720; /*0x47b692*/
    dbl_81CAF8 = dbl_89E720 + dbl_89E720; /*0x47b698*/
    dword_81CA10 = 0; /*0x47b6a0*/
    dword_81CA14 = 0; /*0x47b6aa*/
    dword_81CA18 = 0; /*0x47b6b4*/
    dword_81CA1C = 1072693248; /*0x47b6be*/
    dword_81CA20 = 0; /*0x47b6c8*/
    dword_81CA24 = -1074790400; /*0x47b6d2*/
    dword_81CA28 = 0; /*0x47b6dc*/
    dword_81CA2C = 0; /*0x47b6e6*/
    dword_81CA38 = 0; /*0x47b6f0*/
    dword_81CA3C = 0; /*0x47b6fa*/
    dword_81CA40 = 0; /*0x47b704*/
    dword_81CA44 = 1072693248; /*0x47b70e*/
    dword_81CA48 = 0; /*0x47b718*/
    dword_81CA4C = 1072693248; /*0x47b722*/
    dword_81CA50 = 0; /*0x47b72c*/
    dword_81CA54 = 0; /*0x47b736*/
    dword_81CA60 = 0; /*0x47b740*/
    dword_81CA64 = 0; /*0x47b74a*/
    dword_81CA68 = 0; /*0x47b754*/
    dword_81CA6C = -1074790400; /*0x47b75e*/
    dword_81CA70 = 0; /*0x47b768*/
    dword_81CA74 = 1072693248; /*0x47b772*/
    dword_81CA88 = 0; /*0x47b77c*/
    dword_81CA8C = 0; /*0x47b786*/
    dword_81CA90 = 0; /*0x47b790*/
    dword_81CA94 = -1074790400; /*0x47b79a*/
    dword_81CA98 = 0; /*0x47b7a4*/
    dword_81CA9C = -1074790400; /*0x47b7ae*/
    dword_81CAB0 = 0; /*0x47b7b8*/
    dword_81CAB4 = 0; /*0x47b7c2*/
    dword_81CAB8 = 0; /*0x47b7cc*/
    dword_81CABC = 1072693248; /*0x47b7d6*/
    dword_81CAC0 = 0; /*0x47b7e0*/
    dword_81CAC4 = -1074790400; /*0x47b7ea*/
    qword_81CAD0 = *(_QWORD *)&dbl_89E720; /*0x47b7fa*/
    dword_81CAD8 = 0; /*0x47b805*/
    dword_81CADC = 0; /*0x47b80f*/
    dword_81CAE0 = 0; /*0x47b819*/
    dword_81CAE4 = 1072693248; /*0x47b823*/
    dword_81CAE8 = 0; /*0x47b82d*/
    dword_81CAEC = 1072693248; /*0x47b837*/
    dword_81CAF0 = 0; /*0x47b841*/
    dword_81CAF4 = 0; /*0x47b84b*/
    dword_81CB00 = 0; /*0x47b855*/
    dword_81CB04 = 0; /*0x47b85f*/
    dword_81CB08 = 0; /*0x47b869*/
    dbl_81CB20 = dbl_89E720 + dbl_89E720; /*0x47b873*/
    dbl_81CB40 = dbl_89E720 + dbl_89E720; /*0x47b879*/
    dbl_81CB48 = dbl_89E720 + dbl_89E720; /*0x47b87f*/
    dbl_81CB70 = dbl_89E720 + dbl_89E720; /*0x47b885*/
    qword_81CB18 = *(_QWORD *)&dbl_89E720; /*0x47b89b*/
    dbl_81CB98 = dbl_89E720 * 0.5; /*0x47b8ab*/
    dbl_81CBA0 = dbl_89E720 * 0.5; /*0x47b8b1*/
    dbl_81CBC0 = dbl_89E720 * 0.5; /*0x47b8b7*/
    qword_81CB68 = *(_QWORD *)&dbl_89E720; /*0x47b8c9*/
    qword_81CBB8 = *(_QWORD *)&dbl_89E720; /*0x47b8da*/
    dbl_81CBC8 = dbl_89E720 * -0.5; /*0x47b8e4*/
    qword_81CC08 = *(_QWORD *)&dbl_89E720; /*0x47b8f5*/
    dword_81CB0C = -1074790400; /*0x47b8ff*/
    dbl_81CBE8 = dbl_89E720 * 0.5; /*0x47b909*/
    dbl_81CBF0 = dbl_89E720 * 0.5; /*0x47b90f*/
    dbl_81CC10 = dbl_89E720 * 0.5; /*0x47b915*/
    dword_81CB10 = 0; /*0x47b91b*/
    dword_81CB14 = 1072693248; /*0x47b925*/
    dword_81CB28 = 0; /*0x47b92f*/
    dword_81CB2C = 0; /*0x47b939*/
    dword_81CB30 = 0; /*0x47b943*/
    dword_81CB34 = -1074790400; /*0x47b94d*/
    dword_81CB38 = 0; /*0x47b957*/
    dword_81CB3C = -1074790400; /*0x47b961*/
    dword_81CB50 = 0; /*0x47b96b*/
    dword_81CB54 = 0; /*0x47b975*/
    dword_81CB58 = 0; /*0x47b97f*/
    dword_81CB5C = 1072693248; /*0x47b989*/
    dword_81CB60 = 0; /*0x47b993*/
    dword_81CB64 = -1074790400; /*0x47b99d*/
    dword_81CB78 = 0; /*0x47b9a7*/
    dword_81CB7C = 0; /*0x47b9b1*/
    dword_81CB80 = 0; /*0x47b9bb*/
    dword_81CB84 = 0; /*0x47b9c5*/
    dword_81CB88 = 0; /*0x47b9cf*/
    dword_81CB8C = 0; /*0x47b9d9*/
    dword_81CB90 = 0; /*0x47b9e3*/
    dword_81CB94 = 0; /*0x47b9ed*/
    dword_81CBA8 = 0; /*0x47b9f7*/
    dword_81CBAC = 0; /*0x47ba01*/
    dword_81CBB0 = 0; /*0x47ba0b*/
    dword_81CBB4 = 0; /*0x47ba15*/
    dword_81CBD0 = 0; /*0x47ba1f*/
    dword_81CBD4 = 0; /*0x47ba29*/
    dword_81CBD8 = 0; /*0x47ba33*/
    dword_81CBDC = 0; /*0x47ba3d*/
    dword_81CBE0 = 0; /*0x47ba47*/
    dword_81CBE4 = 0; /*0x47ba51*/
    dword_81CBF8 = 0; /*0x47ba5b*/
    dword_81CBFC = 0; /*0x47ba65*/
    dword_81CC00 = 0; /*0x47ba6f*/
    dword_81CC04 = 0; /*0x47ba79*/
    *(double *)&qword_81CC18 = dbl_89E720 * -0.5; /*0x47ba89*/
  }
  result = Math::RoundToInt((double)(dword_89E7C0 * *(char *)(this + 283)) + 0.5); /*0x47bab0*/
  if ( *(_BYTE *)(this + 284) ) /*0x47bab5*/
  {
    v5 = 40 * (*(unsigned __int8 *)(this + 284) - 1); /*0x47baec*/
    v6 = (double)(unsigned __int8)a2[1] * *(double *)(v5 + 8505608) * dbl_89E740 /*0x47bb17*/
       + (double)(unsigned __int8)*a2 * *(double *)(v5 + 8505600) * dbl_89E740
       + *(double *)(v5 + 8505616)
       + *(double *)(v5 + 8505632);
    if ( v6 < 0.0 ) /*0x47bb28*/
      v6 = 0.0; /*0x47bb2c*/
    if ( v6 > *(double *)&qword_81C918[5 * *(unsigned __int8 *)(this + 284) - 5] ) /*0x47bb3d*/
      v6 = *(double *)&qword_81C918[5 * *(unsigned __int8 *)(this + 284) - 5]; /*0x47bb41*/
    return Math::RoundToInt(v6); /*0x47bb4d*/
  }
  return result; /*0x47bb54*/
}



// ==== 0x0047BB60  CellClass::DTOR  this=CellClass  sig=csp ====
void __thiscall CellClass::DTOR(CellClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***CellClass_field_FC)(_DWORD, int); // ecx
  int v4; // eax

  v2 = *(void (__thiscall ****)(_DWORD, int))this->__pad_28; /*0x47bb66*/
  this->mapCoords[0] = (int)&CellClass::`vftable'; /*0x47bb69*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bb71*/
  this->bridgeOwnerCell = (CellClass *)&CellClass::`vftable'; /*0x47bb78*/
  this->unknown30 = (int)&CellClass::`vftable'; /*0x47bb7f*/
  if ( v2 ) /*0x47bb86*/
  {
    (**v2)(v2, 1); /*0x47bb8c*/
    *(_DWORD *)this->__pad_28 = 0; /*0x47bb8e*/
  }
  CellClass_field_FC = (void (__thiscall ***)(_DWORD, int))this->CellClass_field_FC; /*0x47bb91*/
  if ( CellClass_field_FC ) /*0x47bb99*/
  {
    (**CellClass_field_FC)(CellClass_field_FC, 1); /*0x47bb9f*/
    this->CellClass_field_FC = 0; /*0x47bba1*/
  }
  this->firstObject = 0; /*0x47bba7*/
  if ( this->smudgeTypeIndex != dword_89E748 ) /*0x47bbb8*/
  {
    v4 = *(_DWORD *)&this->__pad_28[12]; /*0x47bbc7*/
    if ( v4 ) /*0x47bbcc*/
    {
      if ( byte_A8E9A0 ) /*0x47bbd4*/
        --*(_DWORD *)(v4 + 404); /*0x47bbd6*/
      *(_DWORD *)&this->__pad_28[12] = 0; /*0x47bbdc*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x47bbe1*/
}



// ==== 0x0047BBF0  CellClass::Construct  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::Construct(CellClass *this)
{
  unsigned int v2; // edx
  int v3; // ecx

  AbstractClass::Constructor((AbstractClass *)this); /*0x47bbf6*/
  this->smudgeTypeIndex = dword_89E748; /*0x47bc02*/
  *(_DWORD *)this->__pad_28 = 0; /*0x47bc05*/
  *(_DWORD *)&this->__pad_28[4] = 0; /*0x47bc08*/
  *(_DWORD *)&this->__pad_28[8] = 0; /*0x47bc0b*/
  *(_DWORD *)&this->__pad_28[12] = 0; /*0x47bc0e*/
  *(_DWORD *)&this->__pad_28[16] = 0xFFFF; /*0x47bc11*/
  *(_DWORD *)&this->__pad_28[20] = 0; /*0x47bc18*/
  *(_DWORD *)&this->__pad_28[24] = 0; /*0x47bc1e*/
  *(_DWORD *)&this->__pad_28[28] = -1; /*0x47bc21*/
  *(_DWORD *)&this->__pad_28[32] = -1; /*0x47bc24*/
  this->CellClass_field_4C = 0; /*0x47bc27*/
  this->wallOwnerIndex = -1; /*0x47bc2a*/
  this->infantryOwnerIndex = -1; /*0x47bc2d*/
  this->altInfantryOwnerIndex = -1; /*0x47bc30*/
  this->CellClass_field_5C = -1; /*0x47bc33*/
  this->unknown60 = -1; /*0x47bc39*/
  this->unknown64 = -1; /*0x47bc3e*/
  this->unknown68 = 0; /*0x47bc41*/
  *(_WORD *)this->tubeIndex = -1; /*0x47bc48*/
  this->CellClass_field_6C = 0; /*0x47bc4f*/
  v2 = this->copyFlags & 0xFFFFFFE0; /*0x47bc58*/
  this->unknown70 = 0; /*0x47bc5d*/
  this->copyFlags = v2; /*0x47bc60*/
  *(_WORD *)this->unknown108 = 0; /*0x47bc69*/
  this->unknown74 = 0; /*0x47bc70*/
  this->cloakedByHouses = 0; /*0x47bc73*/
  this->baseSpacerOfHouses = 0; /*0x47bc76*/
  this->jumpjet = 0; /*0x47bc7c*/
  this->firstObject = 0; /*0x47bc82*/
  this->altObject = 0; /*0x47bc88*/
  this->landType = 0; /*0x47bc93*/
  this->radLevel[0] = 0; /*0x47bc99*/
  *(_WORD *)this->CellClass_field_10A = 1000; /*0x47bc9f*/
  *(_WORD *)this->CellClass_field_10C = 1000; /*0x47bca6*/
  *(_WORD *)this->CellClass_field_10E = 1000; /*0x47bcad*/
  *(_WORD *)this->unknown110 = 1000; /*0x47bcb4*/
  *(_WORD *)this->unknown112 = 1000; /*0x47bcbb*/
  *(_WORD *)this->unknown114 = 1000; /*0x47bcc2*/
  v3 = this->flags[0]; /*0x47bcc9*/
  this->radLevel[1] = 0; /*0x47bccf*/
  this->radSite = 0; /*0x47bcd5*/
  this->CellClass_field_FC = 0; /*0x47bcdb*/
  this->occupyHeightsCoveringMe = 0; /*0x47bce7*/
  this->unknown104 = 0x10000; /*0x47bced*/
  this->unknown118 = -1; /*0x47bcf7*/
  this->unknown119 = 0; /*0x47bcfe*/
  this->height = 0; /*0x47bd04*/
  this->level = 0; /*0x47bd0a*/
  this->slopeIndex = 0; /*0x47bd10*/
  this->CellClass_field_11D = 0; /*0x47bd16*/
  this->powerup = 0; /*0x47bd1c*/
  this->CellClass_field_11F = 0; /*0x47bd22*/
  this->shroudedness = -2; /*0x47bd28*/
  this->foggedness = -2; /*0x47bd2e*/
  this->blockedNeighbours = 0; /*0x47bd34*/
  this->shroudCounter = 1; /*0x47bd3a*/
  this->gapsCoveringThisCell = 0; /*0x47bd44*/
  this->visibilityChanged = 0; /*0x47bd4a*/
  this->CellClass_field_13C = 0; /*0x47bd50*/
  this->flags[0] = v3 & 0xFF800000; /*0x47bd56*/
  this->mapCoords[0] = (int)&CellClass::`vftable'; /*0x47bd5c*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bd62*/
  this->bridgeOwnerCell = (CellClass *)&CellClass::`vftable'; /*0x47bd68*/
  this->unknown30 = (int)&CellClass::`vftable'; /*0x47bd79*/
  memset(this->sensorsOfHouses, 0, sizeof(this->sensorsOfHouses)); /*0x47bd80*/
  memset(this->disguiseAsType_sensors_of_houses, 0, sizeof(this->disguiseAsType_sensors_of_houses)); /*0x47bd8d*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->foggedObjects); /*0x47bd90*/
  LOBYTE(this->occupationFlags) = 0; /*0x47bd95*/
  LOBYTE(this->altOccupationFlags) = 0; /*0x47bd9b*/
  return this->mapCoords; /*0x47bda3*/
}



// ==== 0x0047BDB0  ObjectClass::GetBridgeCellColor  this=ObjectClass  sig=csp ====
int __thiscall GetBridgeCellColor(ObjectClass *this, _BYTE *a2, char a3)
{
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int RadarColor; // eax
  int v12; // esi
  BombClass *attachedBomb; // ecx
  BombClass *v14; // edx
  ObjectClass *v15; // edi
  int inited; // eax
  _DWORD *v17; // eax
  unsigned __int16 *_549E50; // eax
  _BYTE v19[28]; // [esp-1Ch] [ebp-34h] BYREF
  __int16 v20; // [esp+10h] [ebp-8h]
  unsigned __int8 v21; // [esp+12h] [ebp-6h]

  v19[24] = 0; /*0x47bdbb*/
  *(_DWORD *)&v19[20] = 6; /*0x47bdbf*/
  *a2 = 0; /*0x47bdc1*/
  v4 = PlacementList::FindByID((PlacementList *)this, *(int *)&v19[20], v19[24]); /*0x47bdc9*/
  if ( !a3 ) /*0x47bdd1*/
  {
    if ( v4 ) /*0x47bdd9*/
    {
      v5 = v4[328]; /*0x47bddf*/
      if ( !*(_BYTE *)(v5 + 3226) /*0x47be0f*/
        && !*(_BYTE *)(v5 + 5889)
        && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 104))(v4, 0, 0) != 5 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v4[135] + 90196)); /*0x47be23*/
        v7 = *(_DWORD *)(v6 + 788); /*0x47be26*/
        v8 = *(_DWORD *)(v6 + 780); /*0x47be2c*/
        if ( *(_DWORD *)(v8 + 4) == 1 ) /*0x47be36*/
          v9 = *(unsigned __int8 *)(*(_DWORD *)(v8 + 372) + v7); /*0x47be40*/
        else
          v9 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 372) + 2 * v7); /*0x47be4d*/
        if ( !v9 ) /*0x47be53*/
        {
          qmemcpy(v19, (const void *)(v4[328] + 36), 0x19u); /*0x47be6d*/
          Debug::Log(); /*0x47be70*/
        }
        return v9 | (v9 << 16); /*0x47be86*/
      }
    }
  }
  if ( (this->customSound_controller & 0x100) == 0 ) /*0x47be92*/
  {
    attachedBomb = this->attachedBomb; /*0x47bfa8*/
    v14 = (BombClass *)dword_AA10B0; /*0x47bfab*/
    if ( attachedBomb == (BombClass *)0xFFFF ) /*0x47bfbc*/
      v15 = *(ObjectClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x47bfc3*/
    else
      v15 = *(ObjectClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (_DWORD)attachedBomb); /*0x47bfbe*/
    inited = 0; /*0x47bfc6*/
    if ( attachedBomb == (BombClass *)0xFFFF ) /*0x47bfce*/
    {
      *(_DWORD *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c00d*/
    }
    else
    {
      if ( v15[4].ambientSoundController[1] <= 1 ) /*0x47bfd7*/
      {
LABEL_27:
        v17 = Map_Get(v15, inited); /*0x47c016*/
        _549E50 = (unsigned __int16 *)Map_Get_549E50((int)v17, *((unsigned __int8 *)this + 282), *((char *)this + 283)); /*0x47c031*/
        return _549E50[1] | (*_549E50 << 16); /*0x47c049*/
      }
      if ( (unsigned __int8)CellClass::GetTerrainFlag((CellClass *)v15, *((unsigned __int8 *)this + 282)) ) /*0x47bfe4*/
      {
        inited = (this->customSound_controller >> 13) & 1; /*0x47bff6*/
        goto LABEL_27; /*0x47bff9*/
      }
      v14 = this->attachedBomb; /*0x47c001*/
      *(_DWORD *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c004*/
    }
    inited = CellClass::InitRandomOffsets((int *)this, (int)v14, *(int *)&v19[24]); /*0x47c011*/
    goto LABEL_27; /*0x47c011*/
  }
  RadarColor = OverlayTypeClass::GetRadarColor( /*0x47bea8*/
                 *(OverlayTypeClass **)(*(_DWORD *)stru_A83D50.__pad_34 + 96),
                 (int)&a3,
                 0);
  v20 = *(_WORD *)RadarColor; /*0x47bebc*/
  v21 = *(_BYTE *)(RadarColor + 2); /*0x47beca*/
  v12 = (v21 >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf24*/
      | (HIBYTE(v20) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned __int8)v20 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( !v12 ) /*0x47bf26*/
  {
    v12 = (*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf86*/
        | ((unsigned __int8)HIBYTE(*(_WORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 694)) >> g_BitMask_Blue << g_BitMask_Green)
        | ((unsigned __int8)*(_WORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96) + 694) >> g_BitShift_Green_0 << g_BitShift_Red);
    if ( !v12 ) /*0x47bf88*/
    {
      *(_DWORD *)&v19[24] = aWeJustGotABlac_0; /*0x47bf8a*/
      Debug::Log(); /*0x47bf8f*/
    }
  }
  return v12 | (v12 << 16); /*0x47be7f*/
}



// ==== 0x0047C060  ObjectClass::GetCellRadarColors  this=ObjectClass  sig=csp ====
char __thiscall GetCellRadarColors(int this, int a2, int a3)
{
  int RadarColor; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char **v13; // eax
  int inited; // eax
  _DWORD *v15; // edi
  _BYTE *v16; // ecx
  char v17; // dl
  char v18; // al
  _BYTE *v19; // eax
  int v21; // ecx
  unsigned int v22; // edx
  __int16 v24; // [esp+8h] [ebp-Ch] BYREF
  __int16 v25; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int8 v26; // [esp+Eh] [ebp-6h]
  __int16 v27; // [esp+18h] [ebp+4h]

  if ( PlacementList::FindByID((_DWORD *)this, 36, 0) ) /*0x47c06b*/
  {
    v24 = -14136; /*0x47c07a*/
    *(_WORD *)a2 = this; /*0x47c089*/
    *(_BYTE *)(a2 + 2) = -96; /*0x47c098*/
    *(_WORD *)a3 = -14136; /*0x47c0a0*/
    *(_BYTE *)(a3 + 2) = -96; /*0x47c0a5*/
    LOBYTE(RadarColor) = -96; /*0x47c087*/
    return RadarColor; /*0x47c0ab*/
  }
  if ( (*(_DWORD *)(this + 320) & 0x100) != 0 ) /*0x47c0b7*/
  {
    RadarColor = OverlayTypeClass::GetRadarColor((int *)dword_A83D84->?, (int)&v24, 0); /*0x47c0c9*/
    v5 = a2; /*0x47c0ce*/
    v6 = RadarColor; /*0x47c0d2*/
LABEL_18:
    *(_WORD *)v5 = *(_WORD *)v6; /*0x47c18f*/
    *(_BYTE *)(v5 + 2) = *(_BYTE *)(v6 + 2); /*0x47c19a*/
    *(_WORD *)a3 = *(_WORD *)RadarColor; /*0x47c1a4*/
    LOBYTE(RadarColor) = *(_BYTE *)(RadarColor + 2); /*0x47c1a7*/
    *(_BYTE *)(a3 + 2) = RadarColor; /*0x47c1aa*/
    return RadarColor; /*0x47c1b0*/
  }
  v7 = *(_DWORD *)(this + 56); /*0x47c0d9*/
  if ( v7 == 0xFFFF ) /*0x47c0e1*/
    v8 = (int *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x47c0f9*/
  else
    v8 = (int *)*((_DWORD *)dword_A8ED2C + v7); /*0x47c0e9*/
  v9 = *(_DWORD *)(this + 68); /*0x47c0fc*/
  if ( v9 != -1 && v9 != 239 ) /*0x47c136*/
  {
    v10 = *((_DWORD *)&dword_A83D84->TechnoTypeClass + v9); /*0x47c143*/
    if ( !*(_BYTE *)(v10 + 681) ) /*0x47c146*/
    {
      if ( (v9 < 74 || v9 > 99) && (v9 < 205 || v9 > 230) ) /*0x47c167*/
        v11 = OverlayTypeClass::GetRadarColor( /*0x47c182*/
                *((int **)&dword_A83D84->TechnoTypeClass + v9),
                (int)&v24,
                *(unsigned __int8 *)(this + 286));
      else
        v11 = OverlayTypeClass::GetRadarColor(*((int **)&dword_A83D84->TechnoTypeClass + v9), (int)&v24, 1u); /*0x47c16f*/
      v6 = v11; /*0x47c187*/
      RadarColor = a2; /*0x47c189*/
      v5 = a2; /*0x47c18d*/
      goto LABEL_18; /*0x47c18d*/
    }
    v12 = *(_DWORD *)(v10 + 668); /*0x47c1b3*/
    if ( v12 ) /*0x47c1bb*/
    {
      v13 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 156))(v12); /*0x47c1bf*/
      RadarColor = MixFileClass::GetPixelData(v13, (int)&v24, *(unsigned __int8 *)(this + 286)); /*0x47c1d5*/
      *(_WORD *)a2 = *(_WORD *)RadarColor; /*0x47c1e4*/
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(RadarColor + 2); /*0x47c1eb*/
      *(_WORD *)a3 = *(_WORD *)RadarColor; /*0x47c1f5*/
      LOBYTE(RadarColor) = *(_BYTE *)(RadarColor + 2); /*0x47c1f8*/
      *(_BYTE *)(a3 + 2) = RadarColor; /*0x47c1fb*/
      return RadarColor; /*0x47c201*/
    }
    if ( FindBuildingByTiberiumType(v9) != -1 ) /*0x47c20e*/
    {
      v24 = -21846; /*0x47c216*/
      *(_WORD *)a2 = this; /*0x47c225*/
      *(_BYTE *)(a2 + 2) = -126; /*0x47c234*/
      *(_WORD *)a3 = -21846; /*0x47c23c*/
      *(_BYTE *)(a3 + 2) = -126; /*0x47c241*/
      LOBYTE(RadarColor) = -126; /*0x47c223*/
      return RadarColor; /*0x47c247*/
    }
  }
  inited = 0; /*0x47c24d*/
  if ( *(_DWORD *)(this + 56) == 0xFFFF ) /*0x47c255*/
  {
    inited = CellClass::InitRandomOffsets((int *)this, dword_AA10B0, v8[188]); /*0x47c29d*/
  }
  else if ( v8[188] > 1 ) /*0x47c25e*/
  {
    LOBYTE(inited) = *(_BYTE *)(this + 282); /*0x47c260*/
    if ( (unsigned __int8)CellClass::GetTerrainFlag(v8, inited) ) /*0x47c269*/
      inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x47c27b*/
    else
      inited = CellClass::InitRandomOffsets((int *)this, *(_DWORD *)(this + 56), v8[188]); /*0x47c28b*/
  }
  v15 = Map_Get(v8, inited); /*0x47c2aa*/
  if ( !v15[41] && *((_BYTE *)v15 + 756) ) /*0x47c2b6*/
    CellClass::EnsureFileLoaded((int)v15); /*0x47c2c2*/
  v16 = *(_BYTE **)(v15[41] + 4 * *(unsigned __int8 *)(this + 282) + 16); /*0x47c2d5*/
  if ( v16 ) /*0x47c2df*/
  {
    v17 = v16[44]; /*0x47c2ea*/
    v18 = v16[43]; /*0x47c2ed*/
    v26 = v16[45]; /*0x47c2f0*/
    LOBYTE(v25) = v18; /*0x47c2fa*/
    HIBYTE(v25) = v17; /*0x47c2fe*/
    v19 = Color::ScaleRGB(&v24, (unsigned __int8 *)&v25, dword_7E1BD0[28 * *((_DWORD *)dword_A8B230 + 1174)]); /*0x47c324*/
    v25 = *(_WORD *)v19; /*0x47c330*/
    v26 = v19[2]; /*0x47c338*/
    RadarColor = (unsigned __int8)v25 >> 1; /*0x47c353*/
    v21 = HIBYTE(v25) >> 1; /*0x47c355*/
    LOBYTE(v24) = (unsigned __int8)v25 >> 1; /*0x47c357*/
    HIBYTE(v24) = HIBYTE(v25) >> 1; /*0x47c35b*/
    v22 = v26; /*0x47c364*/
    *(_WORD *)a2 = v24; /*0x47c36a*/
    HIBYTE(v27) = v21; /*0x47c36d*/
    LOBYTE(v27) = RadarColor; /*0x47c375*/
    v22 >>= 1; /*0x47c37f*/
    *(_BYTE *)(a2 + 2) = v22; /*0x47c381*/
    *(_WORD *)a3 = v27; /*0x47c384*/
    *(_BYTE *)(a3 + 2) = v22; /*0x47c388*/
  }
  else
  {
    *(_WORD *)a2 = 15420; /*0x47c3a8*/
    *(_BYTE *)(a2 + 2) = 60; /*0x47c3b5*/
    *(_WORD *)a3 = 15420; /*0x47c3bd*/
    *(_BYTE *)(a3 + 2) = 60; /*0x47c3c0*/
    LOBYTE(RadarColor) = 60; /*0x47c395*/
  }
  return RadarColor; /*0x47c082*/
}



// ==== 0x0047C3D0  Object::FindClosestObjectCell  this=Object  sig=csp ====
int __thiscall Object::FindClosestObjectCell(Object *this, _DWORD *a2, char a3, int a4)
{
  double v4; // st7
  int v5; // edi
  int v6; // ebx
  _BYTE *Object_field_0xE8; // ecx
  _BYTE *v8; // esi
  _DWORD *v9; // eax
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  _BYTE v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v5 = 7 * *a2; /*0x47c3f2*/
  v6 = 7 * a2[1]; /*0x47c3fe*/
  if ( a3 ) /*0x47c405*/
    Object_field_0xE8 = this->Object_field_0xE8; /*0x47c407*/
  else
    Object_field_0xE8 = this->Object_field_0xE4; /*0x47c40f*/
  if ( !Object_field_0xE8 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v8 = Object_field_0xE8; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (v8[20] & 1) != 0 && v8 != (_BYTE *)a4 ) /*0x47c435*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v16); /*0x47c440*/
      v14 = (unsigned __int8)*v9 - v5; /*0x47c45a*/
      v15 = (unsigned __int8)v9[1] - v6; /*0x47c463*/
      v17 = v9[2]; /*0x47c467*/
      Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      LOWORD(v10) = Math::RoundToInt(v4); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = (int)v8; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v8 = (_BYTE *)*((_DWORD *)v8 + 12); /*0x47c4a7*/
  }
  while ( v8 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}



// ==== 0x0047C4D0  PlacementList::FindByID  this=PlacementList  sig=csp ====
_DWORD *__thiscall PlacementList::FindByID(PlacementList *this, int a2, char a3)
{
  _DWORD *v3; // esi

  if ( !byte_A8E9A0 ) /*0x47c4d9*/
    return 0; /*0x47c4d9*/
  v3 = (_DWORD *)(a3 ? *((_DWORD *)this + 58) : *((_DWORD *)this + 57));
  if ( !v3 ) /*0x47c4f3*/
    return 0; /*0x47c50b*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != a2 ) /*0x47c502*/
  {
    v3 = (_DWORD *)v3[12]; /*0x47c504*/
    if ( !v3 ) /*0x47c509*/
      return 0; /*0x47c509*/
  }
  return v3; /*0x47c50b*/
}



// ==== 0x0047C520  Cell::IsBridge  this=Cell  sig=csp ====
_DWORD *__thiscall Cell::IsBridge(Cell *this)
{
  _DWORD *Cell_field_0xE4; // esi

  if ( !byte_A8E9A0 ) /*0x47c528*/
    return 0; /*0x47c528*/
  Cell_field_0xE4 = this->Cell_field_0xE4; /*0x47c52a*/
  if ( !Cell_field_0xE4 ) /*0x47c532*/
    return 0; /*0x47c547*/
  while ( (*(int (__thiscall **)(_DWORD *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4) != 6 ) /*0x47c53e*/
  {
    Cell_field_0xE4 = (_DWORD *)Cell_field_0xE4[12]; /*0x47c540*/
    if ( !Cell_field_0xE4 ) /*0x47c545*/
      return 0; /*0x47c545*/
  }
  return Cell_field_0xE4; /*0x47c549*/
}



// ==== 0x0047C550  CellClass::FindInfantry  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::FindInfantry(CellClass *this, char a2)
{
  ObjectClass *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47c558*/
    return 0; /*0x47c558*/
  v2 = a2 ? this->altObject : this->firstObject;
  if ( !v2 ) /*0x47c572*/
    return 0; /*0x47c587*/
  while ( (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 11))(v2) != 36 ) /*0x47c57e*/
  {
    v2 = v2->nextObject; /*0x47c580*/
    if ( !v2 ) /*0x47c585*/
      return 0; /*0x47c585*/
  }
  return &v2->AbstractClass; /*0x47c589*/
}



// ==== 0x0047C5A0  Object::FindObjectCell  this=Object  sig=csp ====
int __thiscall Object::FindObjectCell(Object *this, _DWORD *a2, char a3)
{
  _DWORD *Object_field_0xE4; // esi
  int result; // eax

  if ( byte_A8E9A0 ) /*0x47c5ab*/
  {
    Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ad*/
    if ( Object_field_0xE4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 2 ) /*0x47c5c1*/
      {
        Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c5c3*/
        if ( !Object_field_0xE4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)Object_field_0xE4; /*0x47c5c1*/
    }
  }
LABEL_5:
  result = Object::FindClosestObjectCell(this, a2, a3, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( byte_A8E9A0 ) /*0x47c5e8*/
    {
      Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ea*/
      if ( Object_field_0xE4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 36 ) /*0x47c5fe*/
        {
          Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c600*/
          if ( !Object_field_0xE4 ) /*0x47c605*/
            return 0; /*0x47c605*/
        }
        return (int)Object_field_0xE4; /*0x47c612*/
      }
    }
    return 0; /*0x47c607*/
  }
  return result; /*0x47c609*/
}



// ==== 0x0047C620  CellClass::IsPassable  this=IUnknown  sig=csp ====
int __thiscall CellClass::IsPassable(int *this, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  char v15; // fps^1
  double v16; // st7
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  int v20; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  result = dword_A8E7AC; /*0x47c620*/
  if ( dword_A8E7AC ) /*0x47c632*/
    goto LABEL_96; /*0x47c632*/
  if ( a3 ) /*0x47c63e*/
  {
    if ( *(_BYTE *)(a3 + 5823) ) /*0x47c640*/
    {
      if ( byte_A8E9A0 ) /*0x47c655*/
      {
        for ( i = (_DWORD *)this->q0E4; i; i = (_DWORD *)i[12] ) /*0x47c65f*/
        {
          result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x47c665*/
          if ( result == 6 ) /*0x47c66b*/
            goto LABEL_17; /*0x47c66b*/
        }
        if ( byte_A8E9A0 ) /*0x47c681*/
        {
          v7 = (_DWORD *)this->q0E4; /*0x47c683*/
          if ( v7 ) /*0x47c68b*/
          {
            while ( 1 ) /*0x47c691*/
            {
              result = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7); /*0x47c691*/
              if ( result == 36 ) /*0x47c697*/
                goto LABEL_17; /*0x47c697*/
              v7 = (_DWORD *)v7[12]; /*0x47c699*/
              if ( !v7 ) /*0x47c69e*/
                goto LABEL_14; /*0x47c69e*/
            }
          }
        }
      }
      goto LABEL_14; /*0x47c68b*/
    }
    if ( *(_BYTE *)(a3 + 5822) || *(_BYTE *)(a3 + 5815) ) /*0x47c6eb*/
    {
      v20 = 0; /*0x47c7cd*/
      v21 = 0; /*0x47c7d3*/
      if ( byte_A8E9A0 && (v11 = (_DWORD *)this->q0E4) != 0 ) /*0x47c7e1*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) != 2 ) /*0x47c7ed*/
        {
          v11 = (_DWORD *)v11[12]; /*0x47c7ef*/
          if ( !v11 ) /*0x47c7f4*/
            goto LABEL_44; /*0x47c7f4*/
        }
      }
      else
      {
LABEL_44:
        result = Object::FindClosestObjectCell((Object *)this, &v20, 0, 0); /*0x47c7fc*/
        if ( !result ) /*0x47c80c*/
          result = (int)PlacementList::FindByID((PlacementList *)this, 36, 0); /*0x47c813*/
        v11 = (_DWORD *)result; /*0x47c818*/
        if ( !result ) /*0x47c81c*/
          goto LABEL_52; /*0x47c81c*/
      }
      result = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x47c822*/
      if ( result != 6 ) /*0x47c828*/
      {
        LOBYTE(result) = 0; /*0x47c82d*/
        return result; /*0x47c833*/
      }
      result = v11[328]; /*0x47c836*/
      if ( *(_BYTE *)(result + 5823) ) /*0x47c83c*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*v11 + 60))(v11); /*0x47c84a*/
        if ( result == a4 ) /*0x47c851*/
        {
LABEL_52:
          if ( (*(_BYTE *)(this + 73) & 0x3F) == 0 ) /*0x47c866*/
            goto LABEL_14; /*0x47c866*/
          goto LABEL_53; /*0x47c866*/
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(a3 + 3672) ) /*0x47c6f9*/
      {
        v9 = this->u32_38; /*0x47c76b*/
        if ( v9 < 0 /*0x47c783*/
          || v9 >= *(int *)&stru_A8EB00.?[340]
          || (result = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9), *(_BYTE *)(result + 736)) )
        {
          if ( byte_A8E9A0 ) /*0x47c798*/
          {
            v10 = (_DWORD *)this->q0E4; /*0x47c79e*/
            if ( v10 ) /*0x47c7a6*/
            {
              while ( 1 ) /*0x47c7b0*/
              {
                result = (*(int (__thiscall **)(_DWORD *))(*v10 + 44))(v10); /*0x47c7b0*/
                if ( result == 6 ) /*0x47c7b6*/
                  goto LABEL_17; /*0x47c7b6*/
                v10 = (_DWORD *)v10[12]; /*0x47c7bc*/
                if ( !v10 ) /*0x47c7c1*/
                  goto LABEL_14; /*0x47c7c1*/
              }
            }
          }
          goto LABEL_14; /*0x47c7a6*/
        }
LABEL_53:
        LOBYTE(result) = 0; /*0x47c86c*/
        return result; /*0x47c875*/
      }
      v20 = 0; /*0x47c706*/
      v21 = 0; /*0x47c70c*/
      if ( byte_A8E9A0 ) /*0x47c710*/
      {
        v8 = (_DWORD *)this->q0E4; /*0x47c712*/
        if ( v8 ) /*0x47c71a*/
        {
          while ( (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) != 2 ) /*0x47c726*/
          {
            v8 = (_DWORD *)v8[12]; /*0x47c728*/
            if ( !v8 ) /*0x47c72d*/
              goto LABEL_25; /*0x47c72d*/
          }
          result = (int)v8; /*0x47c767*/
LABEL_27:
          if ( result ) /*0x47c751*/
          {
            LOBYTE(result) = 0; /*0x47c75a*/
            return result; /*0x47c760*/
          }
          goto LABEL_52; /*0x47c751*/
        }
      }
LABEL_25:
      result = Object::FindClosestObjectCell((Object *)this, &v20, 0, 0); /*0x47c72f*/
      if ( !result ) /*0x47c73f*/
      {
        result = (int)PlacementList::FindByID((PlacementList *)this, 36, 0); /*0x47c74a*/
        goto LABEL_27; /*0x47c74a*/
      }
    }
    LOBYTE(result) = 0; /*0x47c856*/
    return result; /*0x47c85c*/
  }
LABEL_14:
  if ( !stru_A8EB00.?[391] ) /*0x47c6a7*/
  {
    result = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)this, 1); /*0x47c880*/
    if ( !(_BYTE)result ) /*0x47c887*/
      goto LABEL_17; /*0x47c887*/
LABEL_55:
    v12 = this->u8_11; /*0x47c88d*/
    if ( v12 == -1 ) /*0x47c893*/
    {
LABEL_86:
      if ( a2 == -1 ) /*0x47c9d4*/
      {
        result = this->q050; /*0x47c9d6*/
        if ( (result & 0x100) == 0 && (result & 0x400) == 0 && !this->u8_11C ) /*0x47c9f3*/
        {
          if ( !*(_BYTE *)(a3 + 3278) ) /*0x47ca0d*/
          {
            result = this->q03B; /*0x47ca33*/
            LOBYTE(result) = byte_89EA60[36 * result]; /*0x47ca40*/
            return result; /*0x47ca4a*/
          }
          result = this->u32_38; /*0x47ca0f*/
          if ( result >= g_CellPassabilityLUT ) /*0x47ca1a*/
          {
            if ( result >= g_CellPassabilityLUT + 14 ) /*0x47ca25*/
            {
              LOBYTE(result) = 0; /*0x47ca2a*/
              return result; /*0x47ca30*/
            }
            goto LABEL_96; /*0x47ca25*/
          }
        }
        goto LABEL_17; /*0x47ca1a*/
      }
      result = a2 + 8 * this->q03B + this->q03B; /*0x47ca56*/
      v16 = flt_89EA40[result]; /*0x47ca58*/
      v17 = v16 < 0.0; /*0x47ca5f*/
      v18 = 0; /*0x47ca5f*/
      v19 = v16 == 0.0; /*0x47ca5f*/
      BYTE1(result) = v15; /*0x47ca65*/
      if ( v16 == 0.0 ) /*0x47ca6a*/
        goto LABEL_17; /*0x47ca6a*/
LABEL_96:
      LOBYTE(result) = 1; /*0x47ca70*/
      return result; /*0x47ca73*/
    }
    v13 = this->u32_14; /*0x47c899*/
    v14 = 0; /*0x47c89c*/
    if ( v13 >= 0 ) /*0x47c8a0*/
      v14 = *((_DWORD *)stru_A80220.? + v13); /*0x47c8a8*/
    if ( v12 == 2 || !v12 ) /*0x47c8b8*/
    {
      if ( a3 ) /*0x47c8c0*/
      {
        if ( (result = *(_DWORD *)(a3 + 3668)) != 0 /*0x47c8f7*/
          && *(_DWORD *)(result + 660) == v12
          && this->u8_11E >= 0x10u
          || (result = a3, a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172))
          || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2156)
          || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2160) )
        {
          if ( v14 == a4 ) /*0x47c8fd*/
            goto LABEL_96; /*0x47c8fd*/
        }
      }
    }
    if ( v12 == 26 ) /*0x47c906*/
    {
      result = a3; /*0x47c908*/
      if ( !a3 ) /*0x47c90e*/
      {
LABEL_84:
        if ( !stru_A8EB00.?[391] ) /*0x47c9ae*/
          goto LABEL_17; /*0x47c9ae*/
        result = *(_DWORD *)stru_A83D50.__pad_34; /*0x47c9b7*/
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * this->u8_11) + 680) ) /*0x47c9bf*/
          goto LABEL_17; /*0x47c9c7*/
        goto LABEL_86; /*0x47c9c7*/
      }
      result = *(_DWORD *)(a3 + 3668); /*0x47c914*/
      if ( result && *(_DWORD *)(result + 660) == 26 && this->u8_11E >= 0x10u /*0x47c943*/
        || (result = a3, a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2164))
        || a3 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2168) )
      {
        if ( v14 == a4 ) /*0x47c949*/
          goto LABEL_96; /*0x47c949*/
      }
    }
    result = a3; /*0x47c94f*/
    if ( a3 ) /*0x47c955*/
    {
      if ( *(_BYTE *)(a3 + 5823) ) /*0x47c957*/
      {
        if ( v12 == 126 || (result = FindBuildingByTiberiumType(v12), result != -1) ) /*0x47c96e*/
        {
          result = this->q050; /*0x47c970*/
          if ( (result & 0x100) == 0 && (result & 0x400) == 0 ) /*0x47c987*/
          {
            if ( this->u8_11C ) /*0x47c98d*/
            {
              LOBYTE(result) = 0; /*0x47c99e*/
              return result; /*0x47c9a4*/
            }
            goto LABEL_96; /*0x47c995*/
          }
LABEL_17:
          LOBYTE(result) = 0; /*0x47c6d1*/
          return result; /*0x47c6da*/
        }
      }
    }
    goto LABEL_84; /*0x47c96e*/
  }
  result = LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 18); /*0x47c6b6*/
  if ( (_BYTE)result ) /*0x47c6bd*/
    goto LABEL_55; /*0x47c6bd*/
  return result; /*0x47c6c3*/
}



// ==== 0x0047CA80  CellClass::DetermineTileType  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::DetermineTileType(CellClass *this)
{
  int v2; // edx
  int v3; // ebp
  unsigned int v4; // edi
  int i; // ebx
  _DWORD *mapCoords; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ebp
  unsigned int v11; // edi
  int j; // ebx
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ebp
  unsigned int v19; // edi
  int k; // ebx
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  unsigned int v27; // edi
  int m; // ebx
  _DWORD *v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebx
  CellClass *v45; // edi
  int v47; // [esp+10h] [ebp-68h]
  int v48; // [esp+14h] [ebp-64h]
  int v49; // [esp+18h] [ebp-60h]
  int v50; // [esp+1Ch] [ebp-5Ch]
  int v51; // [esp+20h] [ebp-58h]
  int v52; // [esp+24h] [ebp-54h]
  int v53; // [esp+28h] [ebp-50h]
  int v54; // [esp+2Ch] [ebp-4Ch]
  int v55; // [esp+30h] [ebp-48h]
  int v56; // [esp+30h] [ebp-48h]
  int v57; // [esp+30h] [ebp-48h]
  int v58; // [esp+34h] [ebp-44h]
  int v59; // [esp+38h] [ebp-40h]
  int v60; // [esp+38h] [ebp-40h]
  int v61; // [esp+3Ch] [ebp-3Ch]
  int v62; // [esp+40h] [ebp-38h]
  int v63; // [esp+44h] [ebp-34h]
  int v64; // [esp+48h] [ebp-30h]
  int v65; // [esp+4Ch] [ebp-2Ch]
  int v66; // [esp+4Ch] [ebp-2Ch]
  int v67; // [esp+4Ch] [ebp-2Ch]
  int v68; // [esp+4Ch] [ebp-2Ch]
  int v69; // [esp+4Ch] [ebp-2Ch]
  int v70; // [esp+4Ch] [ebp-2Ch]
  int v71; // [esp+4Ch] [ebp-2Ch]
  int v72; // [esp+4Ch] [ebp-2Ch]
  int v73; // [esp+50h] [ebp-28h]
  int smudgeTypeIndex; // [esp+54h] [ebp-24h] BYREF
  __int16 v75[2]; // [esp+58h] [ebp-20h] BYREF
  int v76; // [esp+5Ch] [ebp-1Ch]
  __int16 v77[2]; // [esp+60h] [ebp-18h] BYREF
  int v78; // [esp+64h] [ebp-14h]
  int v79; // [esp+68h] [ebp-10h]
  __int16 v80[2]; // [esp+6Ch] [ebp-Ch] BYREF
  int v81; // [esp+70h] [ebp-8h]
  int v82; // [esp+74h] [ebp-4h] BYREF

  *(_DWORD *)v77 = dword_AA1090; /*0x47ca96*/
  v59 = dword_AA1090 + 1; /*0x47ca9a*/
  if ( dword_AA1090 == -1 ) /*0x47ca9e*/
    v59 = -1; /*0x47caa0*/
  v76 = dword_ABAD28; /*0x47caab*/
  v58 = dword_ABAD28 + 41; /*0x47cab2*/
  if ( dword_ABAD28 == -1 ) /*0x47cab6*/
    v58 = -1; /*0x47cab8*/
  v55 = dword_AA1134; /*0x47cac4*/
  v49 = dword_AA1134 + 15; /*0x47cacb*/
  if ( dword_AA1134 == -1 ) /*0x47cacf*/
    v49 = -1; /*0x47cad1*/
  v47 = dword_AA0E24; /*0x47cadc*/
  v50 = dword_AA0E24 + 15; /*0x47cae3*/
  if ( dword_AA0E24 == -1 ) /*0x47cae7*/
    v50 = -1; /*0x47cae9*/
  v52 = dword_AA0748; /*0x47caf4*/
  v51 = dword_AA0748 + 15; /*0x47cafb*/
  if ( dword_AA0748 == -1 ) /*0x47caff*/
    v51 = -1; /*0x47cb01*/
  v54 = dword_AA10A8; /*0x47cb0c*/
  v53 = dword_AA10A8 + 15; /*0x47cb13*/
  if ( dword_AA10A8 == -1 ) /*0x47cb17*/
    v53 = -1; /*0x47cb19*/
  v78 = dword_AA10A4; /*0x47cb29*/
  v61 = dword_AA10A4 + 13; /*0x47cb2d*/
  if ( dword_AA10A4 == -1 ) /*0x47cb31*/
    v61 = -1; /*0x47cb33*/
  *(_DWORD *)v80 = g_CellTileTypeCache; /*0x47cb43*/
  v63 = g_CellTileTypeCache + 20; /*0x47cb47*/
  if ( g_CellTileTypeCache == -1 ) /*0x47cb4b*/
    v63 = -1; /*0x47cb4d*/
  v79 = dword_AA0E20; /*0x47cb5d*/
  v62 = dword_AA0E20 + 13; /*0x47cb61*/
  if ( dword_AA0E20 == -1 ) /*0x47cb65*/
    v62 = -1; /*0x47cb67*/
  v48 = dword_AA1058; /*0x47cb72*/
  v65 = dword_AA1058 + 11; /*0x47cb79*/
  if ( dword_AA1058 == -1 ) /*0x47cb7d*/
    v65 = -1; /*0x47cb7f*/
  v73 = g_CellTileLookup; /*0x47cb8a*/
  v64 = g_CellTileLookup + 19; /*0x47cb91*/
  if ( g_CellTileLookup == -1 ) /*0x47cb95*/
    v64 = -1; /*0x47cb97*/
  v2 = dword_ABC2B8; /*0x47cb9e*/
  v81 = *(_DWORD *)&this->__pad_28[16]; /*0x47cba6*/
  if ( v81 == dword_ABC2B8 || v81 >= dword_AA1134 && v81 <= v49 ) /*0x47cbb8*/
  {
    v3 = 0; /*0x47cbbe*/
    v4 = 0; /*0x47cbc0*/
    for ( i = 0; i < 4; ++i ) /*0x47cbc2*/
    {
      if ( v4 < 8 ) /*0x47cbc7*/
      {
        smudgeTypeIndex = this->smudgeTypeIndex; /*0x47cbd5*/
        *(_DWORD *)v75 = *CellStruct::Add((CellStruct *)&smudgeTypeIndex, &v82, (_WORD *)(4 * (v4 & 7) + 9041544)); /*0x47cbf6*/
        mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47cbff*/
        v2 = dword_ABC2B8; /*0x47cc04*/
      }
      else
      {
        mapCoords = this->mapCoords; /*0x47cbc9*/
      }
      v7 = mapCoords[14]; /*0x47cc0a*/
      if ( v7 != v2 && (v7 < v55 || v7 > v49) ) /*0x47cc1b*/
        v3 |= 1 << i; /*0x47cc26*/
      v4 = ((_BYTE)v4 + 2) & 7; /*0x47cc2b*/
    }
    if ( v3 ) /*0x47cc36*/
      *(_DWORD *)&this->__pad_28[16] = v55 + v3; /*0x47cc3e*/
    else
      *(_DWORD *)&this->__pad_28[16] = v2; /*0x47cc43*/
  }
  if ( v47 != -1 ) /*0x47cc4b*/
  {
    v8 = *(_DWORD *)&this->__pad_28[16]; /*0x47cc51*/
    v9 = dword_ABB104; /*0x47cc54*/
    if ( v8 == dword_ABB104 || v8 >= v47 && v8 <= v50 ) /*0x47cc6c*/
    {
      v10 = 0; /*0x47cc72*/
      v11 = 0; /*0x47cc74*/
      for ( j = 0; j < 4; ++j ) /*0x47cc76*/
      {
        if ( v11 < 8 ) /*0x47cc7b*/
        {
          v14 = v11 & 7; /*0x47cc86*/
          *(_DWORD *)v75 = this->smudgeTypeIndex; /*0x47cc89*/
          LOWORD(v56) = v75[0] + LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x47cca8*/
          HIWORD(v56) = v75[1] + HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x47ccb1*/
          *(_DWORD *)v75 = v56; /*0x47ccba*/
          v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47ccc4*/
          v9 = dword_ABB104; /*0x47ccc9*/
        }
        else
        {
          v13 = this->mapCoords; /*0x47cc7d*/
        }
        v15 = v13[14]; /*0x47cccf*/
        if ( v15 != v9 && (v15 < v47 || v15 > v50) ) /*0x47cce0*/
          v10 |= 1 << j; /*0x47cceb*/
        v11 = ((_BYTE)v11 + 2) & 7; /*0x47ccf0*/
      }
      if ( v10 ) /*0x47ccff*/
        *(_DWORD *)&this->__pad_28[16] = v47 + v10; /*0x47cd07*/
      else
        *(_DWORD *)&this->__pad_28[16] = v9; /*0x47cd0c*/
    }
  }
  if ( v52 != -1 ) /*0x47cd16*/
  {
    v16 = *(_DWORD *)&this->__pad_28[16]; /*0x47cd1c*/
    v17 = dword_AA0E18; /*0x47cd1f*/
    if ( v16 == dword_AA0E18 || v16 >= v52 && v16 <= v51 ) /*0x47cd35*/
    {
      v18 = 0; /*0x47cd3b*/
      v19 = 0; /*0x47cd3d*/
      for ( k = 0; k < 4; ++k ) /*0x47cd3f*/
      {
        if ( v19 < 8 ) /*0x47cd44*/
        {
          v22 = v19 & 7; /*0x47cd4f*/
          *(_DWORD *)v75 = this->smudgeTypeIndex; /*0x47cd52*/
          LOWORD(v57) = v75[0] + LOWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x47cd71*/
          HIWORD(v57) = v75[1] + HIWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x47cd7a*/
          *(_DWORD *)v75 = v57; /*0x47cd83*/
          v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v75); /*0x47cd8d*/
          v17 = dword_AA0E18; /*0x47cd92*/
        }
        else
        {
          v21 = this->mapCoords; /*0x47cd46*/
        }
        v23 = v21[14]; /*0x47cd98*/
        if ( v23 != v17 && (v23 < v52 || v23 > v51) && (v23 < v76 || v23 > v58) && (v23 < *(int *)v77 || v23 > v59) ) /*0x47cdc1*/
          v18 |= 1 << k; /*0x47cdcc*/
        v19 = ((_BYTE)v19 + 2) & 7; /*0x47cdd1*/
      }
      if ( v18 ) /*0x47cde0*/
        *(_DWORD *)&this->__pad_28[16] = v52 + v18; /*0x47cde8*/
      else
        *(_DWORD *)&this->__pad_28[16] = v17; /*0x47cded*/
    }
  }
  if ( v54 != -1 ) /*0x47cdf7*/
  {
    v24 = *(_DWORD *)&this->__pad_28[16]; /*0x47cdfd*/
    v25 = dword_ABC2B0; /*0x47ce00*/
    if ( v24 == dword_ABC2B0 || v24 >= v54 && v24 <= v53 ) /*0x47ce16*/
    {
      v26 = 0; /*0x47ce1c*/
      v27 = 0; /*0x47ce1e*/
      for ( m = 0; m < 4; ++m ) /*0x47ce20*/
      {
        if ( v27 < 8 ) /*0x47ce25*/
        {
          v30 = v27 & 7; /*0x47ce30*/
          *(_DWORD *)v77 = this->smudgeTypeIndex; /*0x47ce33*/
          LOWORD(v60) = v77[0] + LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x47ce52*/
          HIWORD(v60) = v77[1] + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x47ce5b*/
          *(_DWORD *)v77 = v60; /*0x47ce64*/
          v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v77); /*0x47ce6e*/
          v25 = dword_ABC2B0; /*0x47ce73*/
        }
        else
        {
          v29 = this->mapCoords; /*0x47ce27*/
        }
        v31 = v29[14]; /*0x47ce79*/
        if ( v31 != v25 /*0x47ceae*/
          && (v31 < v54 || v31 > v53)
          && (v31 < v78 || v31 > v61)
          && (v31 < v79 || v31 > v62)
          && (v31 < *(int *)v80 || v31 > v63) )
        {
          v26 |= 1 << m; /*0x47ceb9*/
        }
        v27 = ((_BYTE)v27 + 2) & 7; /*0x47cebe*/
      }
      if ( v26 ) /*0x47cecd*/
        *(_DWORD *)&this->__pad_28[16] = v54 + v26; /*0x47ced5*/
      else
        *(_DWORD *)&this->__pad_28[16] = v25; /*0x47ceda*/
    }
  }
  v32 = *(_DWORD *)&this->__pad_28[16]; /*0x47cedd*/
  if ( v32 >= v73 && v32 <= v64 || v32 >= v48 && v32 <= v65 ) /*0x47cefc*/
  {
    v33 = 0; /*0x47cf08*/
    if ( this->slopeIndex == 1 ) /*0x47cf0c*/
    {
      v34 = this->smudgeTypeIndex; /*0x47cf12*/
      LOWORD(v66) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v34; /*0x47cf21*/
      HIWORD(v66) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v34); /*0x47cf37*/
      *(_DWORD *)v80 = v66; /*0x47cf40*/
      v33 = *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) == 0; /*0x47cf58*/
      v35 = this->smudgeTypeIndex; /*0x47cf5d*/
      LOWORD(v66) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v35; /*0x47cf7c*/
      HIWORD(v66) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(v35); /*0x47cf81*/
      *(_DWORD *)v80 = v66; /*0x47cf90*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47cf99*/
        v33 |= 2u; /*0x47cfa3*/
      v36 = v48; /*0x47cfa6*/
      if ( v33 ) /*0x47cfac*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v48 - 1; /*0x47cfb2*/
    }
    else
    {
      v36 = v48; /*0x47cfb7*/
    }
    if ( this->slopeIndex == 2 ) /*0x47cfc2*/
    {
      v37 = this->smudgeTypeIndex; /*0x47cfc8*/
      LOWORD(v67) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v37; /*0x47cfe7*/
      HIWORD(v67) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v37); /*0x47cfec*/
      *(_DWORD *)v80 = v67; /*0x47cffb*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d004*/
        v33 |= 1u; /*0x47d00e*/
      v38 = this->smudgeTypeIndex; /*0x47d011*/
      LOWORD(v68) = v38 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d026*/
      HIWORD(v68) = HIWORD(v38) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d035*/
      *(_DWORD *)v80 = v68; /*0x47d03e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d04c*/
        v33 |= 2u; /*0x47d056*/
      if ( v33 ) /*0x47d05b*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 2; /*0x47d061*/
    }
    if ( this->slopeIndex == 3 ) /*0x47d06b*/
    {
      v39 = this->smudgeTypeIndex; /*0x47d071*/
      LOWORD(v69) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v39; /*0x47d090*/
      HIWORD(v69) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(v39); /*0x47d095*/
      *(_DWORD *)v80 = v69; /*0x47d0a4*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d0ad*/
        v33 |= 1u; /*0x47d0b7*/
      v40 = this->smudgeTypeIndex; /*0x47d0ba*/
      LOWORD(v70) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v40; /*0x47d0c9*/
      HIWORD(v70) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v40); /*0x47d0df*/
      *(_DWORD *)v80 = v70; /*0x47d0e8*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d0f6*/
        v33 |= 2u; /*0x47d100*/
      if ( v33 ) /*0x47d105*/
        *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 5; /*0x47d10b*/
    }
    if ( this->slopeIndex == 4 ) /*0x47d115*/
    {
      v41 = this->smudgeTypeIndex; /*0x47d11b*/
      LOWORD(v71) = v41 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d136*/
      HIWORD(v71) = HIWORD(v41) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x47d13f*/
      *(_DWORD *)v80 = v71; /*0x47d14e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d157*/
        v33 |= 1u; /*0x47d161*/
      v42 = this->smudgeTypeIndex; /*0x47d164*/
      LOWORD(v72) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v42; /*0x47d173*/
      HIWORD(v72) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v42); /*0x47d189*/
      *(_DWORD *)v80 = v72; /*0x47d192*/
      if ( !*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 284) ) /*0x47d1a0*/
        v33 |= 2u; /*0x47d1aa*/
      if ( !v33 ) /*0x47d1af*/
        goto LABEL_128; /*0x47d1af*/
      *(_DWORD *)&this->__pad_28[16] = v33 + v36 + 8; /*0x47d1b5*/
    }
    if ( !v33 ) /*0x47d1ba*/
LABEL_128:
      *(_DWORD *)&this->__pad_28[16] = (unsigned __int8)this->slopeIndex + v73 - 1; /*0x47d1bc*/
  }
  v43 = *(_DWORD *)&this->__pad_28[16]; /*0x47d1cf*/
  v44 = v81; /*0x47d1d2*/
  if ( v81 != v43 ) /*0x47d1d8*/
  {
    v45 = *(CellClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v43); /*0x47d1e0*/
    if ( !(*(int (__thiscall **)(CellClass *))(v45->mapCoords[0] + 156))(v45) ) /*0x47d1e7*/
      CellClass::EnsureFileLoaded(v45); /*0x47d1f3*/
  }
  return v44 != *(_DWORD *)&this->__pad_28[16]; /*0x47d1fd*/
}



// ==== 0x0047D210  CellClass::SetWallOwner  this=CellClass  sig=ida-proto ====
int __fastcall CellClass::SetWallOwner(int a1)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebx
  int i; // edi
  ObjectClass *v5; // esi
  int v6; // eax
  int v7; // [esp+0h] [ebp-4h]

  result = *(_DWORD *)(a1 + 68); /*0x47d211*/
  v7 = a1; /*0x47d214*/
  if ( result != -1 ) /*0x47d21b*/
  {
    result = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result); /*0x47d227*/
    if ( *(_BYTE *)(result + 680) ) /*0x47d22a*/
    {
      result = stru_A8EB00.ObjectTypeClass[20]; /*0x47d234*/
      v2 = -1; /*0x47d23b*/
      v3 = 0; /*0x47d23e*/
      for ( i = 0x7FFFFFFF; v3 < stru_A8EB00.ObjectTypeClass[20]; ++v3 ) /*0x47d248*/
      {
        v5 = *(ObjectClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v3); /*0x47d251*/
        if ( v5->isAliveFlag && v5->isOnMap && *(_BYTE *)(*(_DWORD *)(v5[3].? + 52) + 423) ) /*0x47d26e*/
        {
          v6 = ObjectClass::DistanceTo(v5, a1); /*0x47d27b*/
          if ( v6 < i ) /*0x47d282*/
          {
            i = v6; /*0x47d284*/
            v2 = (*((int (__thiscall **)(ObjectClass *))v5->AbstractClass + 14))(v5); /*0x47d28d*/
          }
        }
        result = stru_A8EB00.ObjectTypeClass[20]; /*0x47d28f*/
        a1 = v7; /*0x47d294*/
      }
      *(_DWORD *)(a1 + 80) = v2; /*0x47d29e*/
    }
  }
  return result; /*0x47d2a5*/
}



// ==== 0x0047D2B0  House::AnnounceUpgrade  this=IUnknown  sig=csp ====
int __thiscall House::AnnounceUpgrade(int this, int a2)
{
  int result; // eax
  __int16 *v4; // edi
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // dx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebp
  bool MapFileData; // al
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // ecx
  __int16 v28; // ax
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  TubeClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  AnimClass *v40; // eax
  void **v41; // eax
  void *v42; // ecx
  _WORD *inited; // ebx
  _DWORD *v44; // eax
  int v45; // eax
  __int16 v46; // dx
  __int16 v47; // cx
  __int16 v48; // dx
  __int16 v49; // dx
  __int16 v50; // dx
  __int16 v51; // dx
  int v52; // eax
  _BYTE *v53; // eax
  int v54; // [esp-8h] [ebp-50h]
  __int16 v55[2]; // [esp+10h] [ebp-38h] BYREF
  int v56; // [esp+14h] [ebp-34h]
  int v57; // [esp+18h] [ebp-30h]
  int v58; // [esp+1Ch] [ebp-2Ch] BYREF
  char v59[4]; // [esp+20h] [ebp-28h] BYREF
  int v60[5]; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (int *)this == &g_MissionQueueFrame.briefing[130] ) /*0x47d2bf*/
    return result; /*0x47d2bf*/
  v4 = (__int16 *)(this + 36); /*0x47d2c5*/
  v5 = (_BYTE *)(*(_DWORD *)&stru_87F5F0.__pad_58[520] /*0x47d2da*/
               + 4 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(this + 36)));
  v57 = (int)v5; /*0x47d2e2*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x47d2f3*/
     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(this + 36));
  v7 = *(_DWORD *)(this + 68); /*0x47d2f6*/
  v56 = v6; /*0x47d2fc*/
  if ( v7 != -1 ) /*0x47d300*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x47d30c*/
    v9 = *(_DWORD *)(v8 + 664); /*0x47d30f*/
    *(_DWORD *)(this + 236) = v9; /*0x47d318*/
    if ( v9 == 4 || v9 == 9 || *(_BYTE *)(v8 + 684) ) /*0x47d325*/
    {
      v10 = *(_DWORD *)(this + 56); /*0x47d333*/
      if ( v10 != 0xFFFF && v10 < *(int *)&stru_A8EB00.?[340] ) /*0x47d343*/
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex( /*0x47d35e*/
                                   *(HouseClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v10),
                                   *(unsigned __int8 *)(this + 282));
      if ( *(_BYTE *)(this + 284) && *(_BYTE *)(v8 + 681) ) /*0x47d36e*/
      {
        *(_DWORD *)(this + 68) = -1; /*0x47d378*/
        *(_BYTE *)(this + 286) = 0; /*0x47d37f*/
      }
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d38b*/
      {
        v11 = *(_WORD *)(this + 38); /*0x47d39c*/
        LOWORD(a2) = *v4; /*0x47d3a0*/
        HIWORD(a2) = v11 - 1; /*0x47d3ab*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d3d6*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d3d6*/
        v12 = *v4 - 1; /*0x47d3e3*/
        HIWORD(a2) = *(_WORD *)(this + 38); /*0x47d3e5*/
        LOWORD(a2) = v12; /*0x47d3ea*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d419*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d419*/
        v13 = *(_WORD *)(this + 38) + 2; /*0x47d42a*/
        LOWORD(a2) = *v4 + 2; /*0x47d42e*/
        HIWORD(a2) = v13; /*0x47d437*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d462*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_19; /*0x47d462*/
        v14 = *(_WORD *)(this + 38) + 1; /*0x47d471*/
        LOWORD(a2) = *v4 + 1; /*0x47d473*/
        HIWORD(a2) = v14; /*0x47d47c*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d52d*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283)
          || (v15 = *(_WORD *)(this + 38) + 1,
              LOWORD(a2) = *v4 - 1,
              HIWORD(a2) = v15,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283))
          || (v16 = *(_WORD *)(this + 38) - 1,
              LOWORD(a2) = *v4 + 1,
              HIWORD(a2) = v16,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283)) )
        {
LABEL_19:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47d53c*/
            *(_DWORD *)(this + 236) = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType((CellClass *)this); /*0x47d54a*/
      BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47d551*/
      v17 = v56; /*0x47d55c*/
      v5[1] = *(_BYTE *)(this + 283); /*0x47d560*/
      LOBYTE(result) = *(_BYTE *)(this + 283); /*0x47d563*/
      *(_BYTE *)(v17 + 8) = result; /*0x47d569*/
      *v5 = *(_BYTE *)(this + 76); /*0x47d571*/
      return result; /*0x47d578*/
    }
  }
  if ( *(_DWORD *)(this + 56) >= *(int *)&stru_A8EB00.?[340] ) /*0x47d58b*/
    *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d58d*/
  v18 = *(_DWORD *)(this + 56); /*0x47d590*/
  if ( v18 != 0xFFFF ) /*0x47d595*/
  {
    v19 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v18); /*0x47d5ab*/
    v54 = *(unsigned __int8 *)(this + 282); /*0x47d5ae*/
    *(_DWORD *)v55 = v19; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((House *)v19, v54, 0); /*0x47d5b5*/
    if ( *(_BYTE *)(this + 284) ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
LABEL_40:
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex((HouseClass *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d7fb*/
        CellClass::DetermineTileType((CellClass *)this); /*0x47d813*/
        v27 = *(_DWORD *)(this + 68); /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( *(_BYTE *)(this + 284) <= 4u ) /*0x47d831*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)) + 664) ) /*0x47d864*/
              *(_DWORD *)(this + 236) = 5; /*0x47d86e*/
          }
          else
          {
            *(_DWORD *)(this + 236) = House::LookupObject((House *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d843*/
            *(_DWORD *)(this + 68) = -1; /*0x47d849*/
            *(_BYTE *)(this + 286) = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)) + 684) ) /*0x47d885*/
LABEL_47:
          *(_DWORD *)(this + 236) = House::LookupObject((House *)v19, *(unsigned __int8 *)(this + 282)); /*0x47d8aa*/
LABEL_48:
        if ( *(_DWORD *)(this + 236) == 10 ) /*0x47d8b7*/
        {
          v28 = *(_WORD *)(this + 278); /*0x47d8bd*/
          if ( v28 < 0 || v28 >= FootClass_Array.?[0] ) /*0x47d8d2*/
          {
            if ( (v29 = *(_DWORD *)(this + 56), v30 = dword_AA1054, v29 >= dword_AA1054) && v29 <= dword_AA1054 + 3 /*0x47d919*/
              || (v30 = dword_ABB108, v29 >= dword_ABB108) && v29 <= dword_ABB108 + 3
              || (v30 = dword_AA10B4, v29 >= dword_AA10B4) && v29 <= dword_AA10B4 + 3
              || (v30 = dword_ABAD2C, v29 >= dword_ABAD2C) && v29 <= dword_ABAD2C + 3 )
            {
              v31 = v29 - v30; /*0x47d91d*/
              if ( v29 - v30 != -1 ) /*0x47d922*/
              {
                v32 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  TubeClass::Construct(v32, (__int16 *)(this + 36), dword_81CC20[v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( a2 != -1 ) /*0x47d94c*/
          *(_BYTE *)(this + 283) = a2; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((TechnoClass *)v19, *(unsigned __int8 *)(this + 282), v59, &v58); /*0x47d969*/
        v33 = *(_DWORD *)(this + 320); /*0x47d988*/
        *(_BYTE *)(this + 285) = (v58 - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(_DWORD *)(v19 + 712) != -1
          && *(_DWORD *)(v19 + 724) == *(unsigned __int8 *)(this + 282) )
        {
          v34 = *v4; /*0x47d9d0*/
          v35 = *(__int16 *)(this + 38); /*0x47d9d3*/
          v61 = dword_89E7C0 * *(char *)(this + 283); /*0x47d9e1*/
          v36 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v62, (int *)(*(_DWORD *)v55 + 716)); /*0x47da03*/
          v37 = v36[1]; /*0x47da0a*/
          v38 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v39 = v61 + v36[2]; /*0x47da18*/
          v60[0] = v38; /*0x47da1f*/
          v60[1] = (v35 << 8) + 128 + v37; /*0x47da23*/
          v60[2] = v39; /*0x47da27*/
          v40 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(void **)(FootClass_Array.?[3] + 4 * *(_DWORD *)(*(_DWORD *)v55 + 712)),
                    v60,
                    0,
                    -1,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v19 = *(_DWORD *)v55; /*0x47da6c*/
          v42 = *(void **)(*(_DWORD *)v55 + 728); /*0x47da6e*/
          *((_BYTE *)v41 + 406) = 1; /*0x47da74*/
          v41[64] = v42; /*0x47da7b*/
          *((_BYTE *)v41 + 407) = 1; /*0x47da81*/
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x47da88*/
        }
        if ( *(_BYTE *)(v19 + 737) ) /*0x47da92*/
        {
          inited = (_WORD *)InitCoordinateOffsetsMap(v19); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*inited != 0x7FFF || inited[1] != 0x7FFF) && *(_DWORD *)inited != dword_89E748 ) /*0x47dacf*/
            {
              LOWORD(a2) = *v4 + *inited; /*0x47dae6*/
              HIWORD(a2) = inited[1] + *(_WORD *)(this + 38); /*0x47daf3*/
              *(_DWORD *)v55 = a2; /*0x47dafc*/
              v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x47db05*/
              inited += 2; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((House *)v19, *(unsigned __int8 *)(this + 282), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d5e6*/
      *(_BYTE *)(this + 282) = 0; /*0x47d5e9*/
      *(_DWORD *)(this + 236) = 0; /*0x47d5ef*/
      *(_BYTE *)(this + 284) = 0; /*0x47d5f9*/
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d605*/
      {
        v21 = *(_WORD *)(this + 38) - 1; /*0x47d61a*/
        LOWORD(a2) = *v4; /*0x47d61c*/
        HIWORD(a2) = v21; /*0x47d621*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d650*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d650*/
        v22 = *v4 - 1; /*0x47d65d*/
        HIWORD(a2) = *(_WORD *)(this + 38); /*0x47d65f*/
        LOWORD(a2) = v22; /*0x47d664*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d693*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d693*/
        v23 = *(_WORD *)(this + 38); /*0x47d69c*/
        LOWORD(a2) = *v4 + 2; /*0x47d6a8*/
        HIWORD(a2) = v23 + 2; /*0x47d6ad*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d6dc*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283) )
          goto LABEL_98; /*0x47d6dc*/
        v24 = *(_WORD *)(this + 38) + 1; /*0x47d6eb*/
        LOWORD(a2) = *v4 + 1; /*0x47d6ed*/
        HIWORD(a2) = v24; /*0x47d6f2*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d7a7*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&a2)
                                          + 283)
          || (v25 = *(_WORD *)(this + 38) + 1,
              LOWORD(a2) = *v4 - 1,
              HIWORD(a2) = v25,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283))
          || (v26 = *(_WORD *)(this + 38) - 1,
              LOWORD(a2) = *v4 + 1,
              HIWORD(a2) = v26,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&a2)
                                           + 283)) )
        {
LABEL_98:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 && !*(_DWORD *)(this + 236) ) /*0x47d7b7*/
            *(_DWORD *)(this + 236) = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47d7cd*/
      result = v57; /*0x47d7d2*/
      *(_BYTE *)(v57 + 1) = *(_BYTE *)(this + 283); /*0x47d7dd*/
      *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47d7ea*/
      *(_BYTE *)result = *(_BYTE *)(this + 76); /*0x47d7f2*/
      return result; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v7 == -1 || (v45 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7), *(_BYTE *)(v45 + 684)) ) /*0x47db30*/
    *(_DWORD *)(this + 236) = 0; /*0x47db48*/
  else
    *(_DWORD *)(this + 236) = *(_DWORD *)(v45 + 664); /*0x47db40*/
  *(_BYTE *)(this + 284) = 0; /*0x47db52*/
LABEL_82:
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47db5e*/
  {
    v46 = *(_WORD *)(this + 38); /*0x47db6f*/
    LOWORD(a2) = *v4; /*0x47db73*/
    HIWORD(a2) = v46 - 1; /*0x47db7e*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dba9*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dba9*/
    v47 = *v4 - 1; /*0x47dbb6*/
    HIWORD(a2) = *(_WORD *)(this + 38); /*0x47dbb8*/
    LOWORD(a2) = v47; /*0x47dbbd*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dbec*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dbec*/
    v48 = *(_WORD *)(this + 38) + 2; /*0x47dbfd*/
    LOWORD(a2) = *v4 + 2; /*0x47dc01*/
    HIWORD(a2) = v48; /*0x47dc0a*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dc35*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283) )
      goto LABEL_89; /*0x47dc35*/
    v49 = *(_WORD *)(this + 38) + 1; /*0x47dc44*/
    LOWORD(a2) = *v4 + 1; /*0x47dc46*/
    HIWORD(a2) = v49; /*0x47dc4f*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dd00*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&a2)
                                      + 283)
      || (v50 = *(_WORD *)(this + 38) + 1,
          LOWORD(a2) = *v4 - 1,
          HIWORD(a2) = v50,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283))
      || (v51 = *(_WORD *)(this + 38) - 1,
          LOWORD(a2) = *v4 + 1,
          HIWORD(a2) = v51,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283)) )
    {
LABEL_89:
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47dd0f*/
      {
        v52 = *(_DWORD *)(this + 236); /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          *(_DWORD *)(this + 236) = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState((BuildingClass *)this); /*0x47dd36*/
  v53 = (_BYTE *)v57; /*0x47dd3b*/
  *(_BYTE *)(v57 + 1) = *(_BYTE *)(this + 283); /*0x47dd45*/
  *v53 = *(_BYTE *)(this + 76); /*0x47dd4b*/
  result = v56; /*0x47dd4d*/
  *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47dd57*/
  return result; /*0x47d56f*/
}



// ==== 0x0047DD70  CellClass::UpdateAnimations  this=CellClass  sig=csp ====
int __thiscall CellClass::UpdateAnimations(CellClass *this)
{
  int result; // eax
  ObjectClass *firstObject; // ecx
  ObjectClass *nextObject; // edi
  ObjectClass *altObject; // ecx
  ObjectClass *v6; // edi
  int v7; // eax
  __int16 v8; // fps
  double v9; // st7
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int v13; // ecx
  int smudgeTypeIndex_high; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  AnimClass *v19; // esi
  int v20; // eax
  AnimClass *v21; // edi
  void *v22; // esi
  int v23; // eax
  int v24; // [esp+28h] [ebp-Ch] BYREF
  int v25; // [esp+2Ch] [ebp-8h]
  int v26; // [esp+30h] [ebp-4h]

  LOBYTE(result) = stru_A8EB00.?[391]; /*0x47dd70*/
  if ( !stru_A8EB00.?[391] ) /*0x47dd7e*/
  {
    firstObject = this->firstObject; /*0x47dd84*/
    if ( firstObject ) /*0x47dd8c*/
    {
      do /*0x47ddb8*/
      {
        nextObject = firstObject->nextObject; /*0x47dd96*/
        (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))firstObject->AbstractClass + 91))( /*0x47ddae*/
          &firstObject->health,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
        firstObject = nextObject; /*0x47ddb6*/
      }
      while ( nextObject ); /*0x47ddb8*/
    }
    altObject = this->altObject; /*0x47ddba*/
    if ( altObject ) /*0x47ddc2*/
    {
      do /*0x47ddd3*/
      {
        v6 = altObject->nextObject; /*0x47ddc6*/
        (*((void (__thiscall **)(ObjectClass *))altObject->AbstractClass + 59))(altObject); /*0x47ddc9*/
        altObject = v6; /*0x47ddd1*/
      }
      while ( v6 ); /*0x47ddd3*/
    }
    if ( *(int *)&stru_87F5F0.__pad_58[644] < *(int *)&stru_87F5F0.__pad_58[636] /*0x47de0c*/
      || (stru_87F5F0.__pad_58[641] || !*(_DWORD *)&stru_87F5F0.__pad_58[636])
      && *(int *)&stru_87F5F0.__pad_58[648] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_58[628] + 8))(
           &stru_87F5F0.__pad_58[628],
           *(_DWORD *)&stru_87F5F0.__pad_58[636] + *(_DWORD *)&stru_87F5F0.__pad_58[648],
           0) )
    {
      v7 = (*(_DWORD *)&stru_87F5F0.__pad_58[644])++; /*0x47de1f*/
      *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[632] + 4 * v7) = this->smudgeTypeIndex; /*0x47de2b*/
    }
    result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x47de2e*/
    if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) > 0 ) /*0x47de3b*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47de54*/
      v9 = (double)result * 4.656612877414201e-10; /*0x47de61*/
      v10 = v9 < 0.95; /*0x47de67*/
      v11 = 0; /*0x47de67*/
      v12 = v9 == 0.95; /*0x47de67*/
      LOWORD(result) = v8; /*0x47de6d*/
      if ( v9 < 0.95 ) /*0x47de72*/
      {
        v13 = dword_89E7C0 * this->level; /*0x47de83*/
        smudgeTypeIndex_high = SHIWORD(this->smudgeTypeIndex); /*0x47de8a*/
        v24 = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47de9c*/
        v26 = dword_89E7B4 + v13; /*0x47deb6*/
        v25 = (smudgeTypeIndex_high << 8) + 128; /*0x47dec2*/
        v15 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47dec6*/
        LOWORD(v16) = Math::RoundToInt(((double)v15 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v24); /*0x47dee9*/
        v24 = v16; /*0x47deee*/
        v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x47df04*/
        LOWORD(v18) = Math::RoundToInt(((double)v17 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v25); /*0x47df27*/
        v25 = v18; /*0x47df3f*/
        if ( (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) * 4.656612877414201e-10 < 0.5 ) /*0x47df61*/
        {
          v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x47df6d*/
          if ( v19 ) /*0x47df74*/
          {
            v20 = Random::Range( /*0x47df91*/
                    (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 332) - 1);
            AnimClass::ctor( /*0x47dfba*/
              v19,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 320) + 4 * v20),
              &v24,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        result = __2_YAPAXI_Z(0x1C8u); /*0x47dfc4*/
        v21 = (AnimClass *)result; /*0x47dfc9*/
        if ( result ) /*0x47dfd0*/
        {
          v22 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x47dff2*/
          v23 = Random::Range( /*0x47e004*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          return (int)AnimClass::ctor( /*0x47e02c*/
                        v21,
                        *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v23),
                        &v24,
                        v22,
                        1,
                        (void *)0x600,
                        0,
                        0);
        }
      }
    }
  }
  return result; /*0x47e031*/
}



// ==== 0x0047E040  UpdateCellClassNeighborTerrain  this=-  sig=csp ====
int __fastcall UpdateCellClassNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  __int16 v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v49[2]; // [esp+30h] [ebp-8h] BYREF
  __int16 v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e04a*/
  if ( a3 ) /*0x47e053*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e05e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e055*/
  v5 = a4; /*0x47e065*/
  v6 = a4 & 1; /*0x47e06b*/
  v40 = v6 << 9; /*0x47e079*/
  v7 = v6 << 12; /*0x47e082*/
  v8 = v6 << 16; /*0x47e085*/
  v39 = v6 << 8; /*0x47e090*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e097*/
  v38 = (a3 == 0) << 11; /*0x47e0af*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e0bf*/
  BYTE1(v9) &= ~2u; /*0x47e0c5*/
  v10 = (v6 << 9) | v9; /*0x47e0c8*/
  BYTE1(v10) &= ~0x10u; /*0x47e0ce*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e0d9*/
  BYTE1(v11) &= ~4u; /*0x47e0db*/
  v12 = a4 | v11; /*0x47e0de*/
  BYTE1(v12) &= ~8u; /*0x47e0e4*/
  *(_DWORD *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e0f0*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e10d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e114*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e122*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e126*/
  if ( a3 < 8 ) /*0x47e132*/
  {
    LOWORD(v41) = *p_smudgeTypeIndex + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e157*/
    HIWORD(v41) = HIWORD(*p_smudgeTypeIndex) + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e166*/
    *(_DWORD *)v48 = v41; /*0x47e16f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e17d*/
  }
  v13 = v4->flags[0]; /*0x47e18f*/
  BYTE1(v13) &= ~1u; /*0x47e195*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e19c*/
  BYTE1(v14) &= ~2u; /*0x47e1a2*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e1a5*/
  v15 = v40 | v14; /*0x47e1a8*/
  BYTE1(v15) &= ~0x10u; /*0x47e1ae*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e1b9*/
  BYTE1(v16) &= ~4u; /*0x47e1bb*/
  v17 = a4 | v16; /*0x47e1be*/
  BYTE1(v17) &= ~8u; /*0x47e1c4*/
  v4->flags[0] = v38 | v17; /*0x47e1cb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e1e8*/
    CellClass::UpdateAnimations(v4); /*0x47e1ef*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e201*/
  v18 = a3; /*0x47e206*/
  if ( a3 < 8 ) /*0x47e20d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e218*/
    *(_DWORD *)v49 = v4->smudgeTypeIndex; /*0x47e227*/
    LOWORD(v42) = v49[0] + v19; /*0x47e232*/
    HIWORD(v42) = v49[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e241*/
    *(_DWORD *)v49 = v42; /*0x47e24a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e258*/
    v18 = a3; /*0x47e25a*/
  }
  v20 = v4->flags[0]; /*0x47e262*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e268*/
  BYTE1(v20) &= ~1u; /*0x47e26f*/
  v21 = v39 | v20; /*0x47e272*/
  BYTE1(v21) &= 0xEDu; /*0x47e278*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e283*/
  BYTE1(v22) &= ~4u; /*0x47e285*/
  v23 = a4 | v22; /*0x47e288*/
  BYTE1(v23) &= ~8u; /*0x47e28e*/
  v4->flags[0] = v38 | v23; /*0x47e295*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e2ae*/
    CellClass::UpdateAnimations(v4); /*0x47e2b5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e2c7*/
  v24 = a3; /*0x47e2cc*/
  if ( a3 < 8 ) /*0x47e2d3*/
  {
    *(_DWORD *)v50 = v4->smudgeTypeIndex; /*0x47e2e9*/
    LOWORD(v43) = v50[0] + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e2fc*/
    HIWORD(v43) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e305*/
    *(_DWORD *)v50 = v43; /*0x47e314*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e318*/
    v24 = a3; /*0x47e31d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e2d5*/
  }
  v26 = mapCoords[80]; /*0x47e321*/
  BYTE1(v26) &= ~0x10u; /*0x47e327*/
  mapCoords[80] = v7 | v26; /*0x47e32c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e335*/
  if ( v27 < 8 ) /*0x47e33b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e34c*/
    *(_DWORD *)v50 = *p_smudgeTypeIndex; /*0x47e35b*/
    LOWORD(v46) = v50[0] + v29; /*0x47e366*/
    HIWORD(v46) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e375*/
    *(_DWORD *)v50 = v46; /*0x47e37e*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e387*/
    v24 = a3; /*0x47e38c*/
    v28 = (int)v30; /*0x47e390*/
  }
  else
  {
    v28 = a1; /*0x47e33d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e392*/
  BYTE1(v31) &= ~1u; /*0x47e39c*/
  v32 = v39 | v31; /*0x47e3a3*/
  BYTE1(v32) &= ~2u; /*0x47e3a9*/
  *(_DWORD *)(v28 + 44) = v47; /*0x47e3ac*/
  v33 = v40 | v32; /*0x47e3af*/
  BYTE1(v33) &= ~4u; /*0x47e3b5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e3c3*/
  BYTE1(v34) &= ~8u; /*0x47e3c5*/
  *(_DWORD *)(v28 + 320) = v38 | v34; /*0x47e3cc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e3e5*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e3ec*/
  }
  v35 = (int *)(v28 + 36); /*0x47e3f1*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e3fa*/
  if ( a3 == 6 ) /*0x47e404*/
  {
    a4 = *v35; /*0x47e40e*/
    LOWORD(a3) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e424*/
    HIWORD(a3) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(a4); /*0x47e429*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x47e43c*/
    v37 = *(_DWORD *)(result + 320); /*0x47e441*/
    *(_DWORD *)(result + 44) = v47; /*0x47e447*/
    *(_DWORD *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e452*/
  }
  return result; /*0x47e458*/
}



// ==== 0x0047E470  SetCellClassOccupancyFlags  this=-  sig=csp ====
int __fastcall SetCellClassOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  __int16 v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v49[2]; // [esp+30h] [ebp-8h] BYREF
  __int16 v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e47a*/
  if ( a3 ) /*0x47e483*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e48e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e485*/
  v5 = a4; /*0x47e495*/
  v6 = a4 & 1; /*0x47e49b*/
  v40 = v6 << 9; /*0x47e4a9*/
  v7 = v6 << 12; /*0x47e4b2*/
  v8 = v6 << 16; /*0x47e4b5*/
  v39 = v6 << 8; /*0x47e4c0*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e4c7*/
  v38 = (a3 == 0) << 11; /*0x47e4df*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e4ef*/
  BYTE1(v9) &= ~2u; /*0x47e4f5*/
  v10 = (v6 << 9) | v9; /*0x47e4f8*/
  BYTE1(v10) &= ~0x10u; /*0x47e4fe*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e509*/
  BYTE1(v11) &= ~4u; /*0x47e50b*/
  v12 = a4 | v11; /*0x47e50e*/
  BYTE1(v12) &= ~8u; /*0x47e514*/
  *(_DWORD *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e520*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e53d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e544*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e552*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e556*/
  if ( a3 < 8 ) /*0x47e562*/
  {
    LOWORD(v41) = *p_smudgeTypeIndex + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e587*/
    HIWORD(v41) = HIWORD(*p_smudgeTypeIndex) + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e596*/
    *(_DWORD *)v48 = v41; /*0x47e59f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e5ad*/
  }
  v13 = v4->flags[0]; /*0x47e5bf*/
  BYTE1(v13) &= ~1u; /*0x47e5c5*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e5cc*/
  BYTE1(v14) &= ~2u; /*0x47e5d2*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e5d5*/
  v15 = v40 | v14; /*0x47e5d8*/
  BYTE1(v15) &= ~0x10u; /*0x47e5de*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e5e9*/
  BYTE1(v16) &= ~4u; /*0x47e5eb*/
  v17 = a4 | v16; /*0x47e5ee*/
  BYTE1(v17) &= ~8u; /*0x47e5f4*/
  v4->flags[0] = v38 | v17; /*0x47e5fb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e618*/
    CellClass::UpdateAnimations(v4); /*0x47e61f*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e631*/
  v18 = a3; /*0x47e636*/
  if ( a3 < 8 ) /*0x47e63d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e648*/
    *(_DWORD *)v49 = v4->smudgeTypeIndex; /*0x47e657*/
    LOWORD(v42) = v49[0] + v19; /*0x47e662*/
    HIWORD(v42) = v49[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e671*/
    *(_DWORD *)v49 = v42; /*0x47e67a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e688*/
    v18 = a3; /*0x47e68a*/
  }
  v20 = v4->flags[0]; /*0x47e692*/
  *(_DWORD *)&v4->__pad_28[4] = v47; /*0x47e698*/
  BYTE1(v20) &= ~1u; /*0x47e69f*/
  v21 = v39 | v20; /*0x47e6a2*/
  BYTE1(v21) &= 0xEDu; /*0x47e6a8*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e6b3*/
  BYTE1(v22) &= ~4u; /*0x47e6b5*/
  v23 = a4 | v22; /*0x47e6b8*/
  BYTE1(v23) &= ~8u; /*0x47e6be*/
  v4->flags[0] = v38 | v23; /*0x47e6c5*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e6de*/
    CellClass::UpdateAnimations(v4); /*0x47e6e5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e6f7*/
  v24 = a3; /*0x47e6fc*/
  if ( a3 < 8 ) /*0x47e703*/
  {
    *(_DWORD *)v50 = v4->smudgeTypeIndex; /*0x47e719*/
    LOWORD(v43) = v50[0] + LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e72c*/
    HIWORD(v43) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e735*/
    *(_DWORD *)v50 = v43; /*0x47e744*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e748*/
    v24 = a3; /*0x47e74d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e705*/
  }
  v26 = mapCoords[80]; /*0x47e751*/
  BYTE1(v26) &= ~0x10u; /*0x47e757*/
  mapCoords[80] = v7 | v26; /*0x47e75c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e765*/
  if ( v27 < 8 ) /*0x47e76b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e77c*/
    *(_DWORD *)v50 = *p_smudgeTypeIndex; /*0x47e78b*/
    LOWORD(v46) = v50[0] + v29; /*0x47e796*/
    HIWORD(v46) = v50[1] + HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e7a5*/
    *(_DWORD *)v50 = v46; /*0x47e7ae*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e7b7*/
    v24 = a3; /*0x47e7bc*/
    v28 = (int)v30; /*0x47e7c0*/
  }
  else
  {
    v28 = a1; /*0x47e76d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e7c2*/
  BYTE1(v31) &= ~1u; /*0x47e7cc*/
  v32 = v39 | v31; /*0x47e7d3*/
  BYTE1(v32) &= ~2u; /*0x47e7d9*/
  *(_DWORD *)(v28 + 44) = v47; /*0x47e7dc*/
  v33 = v40 | v32; /*0x47e7df*/
  BYTE1(v33) &= ~4u; /*0x47e7e5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e7f3*/
  BYTE1(v34) &= ~8u; /*0x47e7f5*/
  *(_DWORD *)(v28 + 320) = v38 | v34; /*0x47e7fc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e815*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e81c*/
  }
  v35 = (int *)(v28 + 36); /*0x47e821*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e82a*/
  if ( a3 == 6 ) /*0x47e834*/
  {
    a4 = *v35; /*0x47e83e*/
    LOWORD(a3) = LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e854*/
    HIWORD(a3) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + HIWORD(a4); /*0x47e859*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x47e86c*/
    v37 = *(_DWORD *)(result + 320); /*0x47e871*/
    *(_DWORD *)(result + 44) = v47; /*0x47e877*/
    *(_DWORD *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e882*/
  }
  return result; /*0x47e888*/
}



// ==== 0x0047E8A0  CellClass::AddContent  this=AbstractClass  sig=csp ====
char __thiscall CellClass::AddContent(int this, _DWORD *a2, char a3)
{
  int v3; // eax
  int v5; // esi
  int i; // eax
  int inited; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+28h] [ebp+8h]
  int v19; // [esp+28h] [ebp+8h]

  LOBYTE(v3) = a3; /*0x47e8a0*/
  if ( a3 ) /*0x47e8ae*/
    v5 = *(_DWORD *)(this + 232); /*0x47e8b0*/
  else
    v5 = *(_DWORD *)(this + 228); /*0x47e8b8*/
  if ( a2 ) /*0x47e8c4*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 && v5 ) /*0x47e8d9*/
    {
      for ( i = *(_DWORD *)(v5 + 48); i; i = *(_DWORD *)(i + 48) ) /*0x47e8e0*/
        v5 = i; /*0x47e8e2*/
      *(_DWORD *)(v5 + 48) = a2; /*0x47e8eb*/
      a2[12] = 0; /*0x47e8ee*/
    }
    else if ( a3 ) /*0x47e8fd*/
    {
      if ( !v5 || *(_DWORD **)(v5 + 48) != a2 ) /*0x47e906*/
      {
        a2[12] = v5; /*0x47e908*/
        *(_DWORD *)(this + 232) = a2; /*0x47e90b*/
      }
    }
    else if ( !v5 || *(_DWORD **)(v5 + 48) != a2 ) /*0x47e91a*/
    {
      a2[12] = v5; /*0x47e91c*/
      *(_DWORD *)(this + 228) = a2; /*0x47e91f*/
    }
    v18 = *(_DWORD *)(this + 36); /*0x47e929*/
    v13 = 128; /*0x47e94b*/
    v14 = 128; /*0x47e94f*/
    inited = Isometric::InitTables(this, &v13); /*0x47e953*/
    v15 = ((__int16)v18 << 8) + 128; /*0x47e962*/
    v16 = (SHIWORD(v18) << 8) + 128; /*0x47e966*/
    v17 = inited; /*0x47e96a*/
    if ( !Cell::IsPassable(&v15) /*0x47e9cf*/
      && (v19 = *(_DWORD *)(this + 36),
          v13 = 128,
          v14 = 128,
          v8 = Isometric::InitTables(this, &v13),
          v15 = ((__int16)v19 << 8) + 128,
          v16 = (SHIWORD(v19) << 8) + 128,
          v17 = v8,
          !Game::Stub3((int)&v15))
      || dword_A8B238[0] )
    {
      (*(void (__thiscall **)(_DWORD *, #375 *))(*a2 + 408))(a2, dword_A83D4C); /*0x47e9dc*/
    }
    v3 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2); /*0x47e9e7*/
    if ( v3 != 15 ) /*0x47e9ee*/
    {
      LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *))(*a2 + 192))(a2); /*0x47e9f9*/
      if ( (_BYTE)v3 ) /*0x47ea01*/
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 ) /*0x47ea0e*/
        {
          v9 = *(__int16 *)(this + 36); /*0x47ea10*/
          v10 = *(__int16 *)(this + 38); /*0x47ea14*/
          v11 = *a2; /*0x47ea18*/
          v17 = 0; /*0x47ea1b*/
          v15 = (v9 << 8) + 128; /*0x47ea2e*/
          v16 = (v10 << 8) + 128; /*0x47ea3c*/
        }
        else
        {
          v15 = a2[39]; /*0x47ea5e*/
          v11 = *a2; /*0x47ea62*/
          v16 = a2[40]; /*0x47ea68*/
          v17 = a2[41]; /*0x47ea74*/
        }
        LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, int *))(v11 + 240))(a2, &v15); /*0x47ea43*/
      }
    }
  }
  return v3; /*0x47ea49*/
}



// ==== 0x0047EA90  CellClass::RemoveContent  this=CellClass  sig=csp ====
void __thiscall CellClass::RemoveContent(int this, _DWORD *a2, char a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  if ( !a2 ) /*0x47ea9d*/
    return; /*0x47ea9d*/
  if ( a3 ) /*0x47eaa9*/
    v4 = *(_DWORD **)(this + 232); /*0x47eaab*/
  else
    v4 = *(_DWORD **)(this + 228); /*0x47eab3*/
  if ( v4 == a2 ) /*0x47eabb*/
  {
    if ( a3 ) /*0x47eabf*/
      *(_DWORD *)(this + 232) = a2[12]; /*0x47eac4*/
    else
      *(_DWORD *)(this + 228) = a2[12]; /*0x47eacf*/
LABEL_14:
    a2[12] = 0; /*0x47eaf0*/
    goto LABEL_15; /*0x47eaf0*/
  }
  if ( v4 ) /*0x47ead9*/
  {
    while ( 1 ) /*0x47eadb*/
    {
      v5 = (_DWORD *)v4[12]; /*0x47eadb*/
      if ( v5 == a2 ) /*0x47eae0*/
        break; /*0x47eae0*/
      v4 = (_DWORD *)v4[12]; /*0x47eae2*/
      if ( !v5 ) /*0x47eae6*/
        goto LABEL_15; /*0x47eae6*/
    }
    v4[12] = a2[12]; /*0x47eaed*/
    goto LABEL_14; /*0x47eaed*/
  }
LABEL_15:
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 15 /*0x47eb0b*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 192))(a2) )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 ) /*0x47eb1f*/
    {
      v6 = *(__int16 *)(this + 36); /*0x47eb21*/
      v7 = *(__int16 *)(this + 38); /*0x47eb25*/
      v8 = *a2; /*0x47eb29*/
      v11 = 0; /*0x47eb2b*/
      v9 = (v6 << 8) + 128; /*0x47eb3c*/
      v10 = (v7 << 8) + 128; /*0x47eb50*/
    }
    else
    {
      v9 = a2[39]; /*0x47eb6e*/
      v8 = *a2; /*0x47eb72*/
      v10 = a2[40]; /*0x47eb77*/
      v11 = a2[41]; /*0x47eb85*/
    }
    (*(void (__thiscall **)(_DWORD *, int *))(v8 + 244))(a2, &v9); /*0x47eb54*/
  }
}



// ==== 0x0047EBA0  CellClass::FindBuilding  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::FindBuilding(CellClass *this, char a2)
{
  ObjectClass *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47eba8*/
    return 0; /*0x47eba8*/
  v2 = a2 ? this->altObject : this->firstObject;
  if ( !v2 ) /*0x47ebc2*/
    return 0; /*0x47ebd7*/
  while ( (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 11))(v2) != 1 ) /*0x47ebce*/
  {
    v2 = v2->nextObject; /*0x47ebd0*/
    if ( !v2 ) /*0x47ebd5*/
      return 0; /*0x47ebd5*/
  }
  return &v2->AbstractClass; /*0x47ebd9*/
}



// ==== 0x0047EBF0  PlacementList::FindByType  this=PlacementList  sig=csp ====
_DWORD *__thiscall PlacementList::FindByType(PlacementList *this, char a2)
{
  _DWORD *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47ebf8*/
    return 0; /*0x47ebf8*/
  v2 = (_DWORD *)(a2 ? *((_DWORD *)this + 58) : *((_DWORD *)this + 57));
  if ( !v2 ) /*0x47ec12*/
    return 0; /*0x47ec27*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 2 ) /*0x47ec1e*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47ec20*/
    if ( !v2 ) /*0x47ec25*/
      return 0; /*0x47ec25*/
  }
  return v2; /*0x47ec29*/
}



// ==== 0x0047EC40  WTFMode::FindObjectByType  this=WTFMode  sig=csp ====
_DWORD *__thiscall WTFMode::FindObjectByType(WTFMode *this, char a2)
{
  _DWORD *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47ec48*/
    return 0; /*0x47ec48*/
  v2 = (_DWORD *)(a2 ? this->q0E8 : this->q0E4);
  if ( !v2 ) /*0x47ec62*/
    return 0; /*0x47ec77*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 15 ) /*0x47ec6e*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47ec70*/
    if ( !v2 ) /*0x47ec75*/
      return 0; /*0x47ec75*/
  }
  return v2; /*0x47ec79*/
}



// ==== 0x0047EC90  BuildingPlacement::RenderBuildingPlacementPreview  this=CellClass  sig=csp ====
char __thiscall BuildingPlacement::RenderBuildingPlacementPreview(int this, _DWORD *a2, int *a3, char a4)
{
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  bool *v11; // edi
  int ClosestObjectCell; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned int v18; // [esp-34h] [ebp-64h]
  int *v19; // [esp-2Ch] [ebp-5Ch]
  int v20; // [esp-28h] [ebp-58h]
  int v21; // [esp-20h] [ebp-50h]
  char v22; // [esp+13h] [ebp-1Dh]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h] BYREF
  int v25; // [esp+20h] [ebp-10h]
  _DWORD v26[2]; // [esp+24h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  v5 = *(_DWORD *)(this + 300); /*0x47eca4*/
  v22 = 0; /*0x47ecb4*/
  if ( (v5 & 2) == 0 && (v5 & 4) == 0 ) /*0x47ecbc*/
    return 0; /*0x47efca*/
  v6 = *(_DWORD **)&stru_87F5F0.__pad_E12[1422]; /*0x47ecc2*/
  if ( (v5 & 2) == 0 ) /*0x47ecca*/
    v6 = *(_DWORD **)&stru_87F5F0.__pad_E12[1402]; /*0x47eccc*/
  v7 = -1; /*0x47ecd2*/
  if ( v6 && (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6) == 7 ) /*0x47ece3*/
    v7 = v6[415]; /*0x47ece5*/
  v8 = 15 * *(char *)(this + 283); /*0x47ecf5*/
  v23 = -1 - v8; /*0x47ecfa*/
  v9 = -2 - v8; /*0x47ed03*/
  if ( *(_BYTE *)(this + 284) ) /*0x47ed05*/
    v9 -= 10; /*0x47ed0f*/
  if ( (*(_BYTE *)(this + 300) & 2) != 0 /*0x47ed2d*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1422]) == 7 )
  {
    v10 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47ed48*/
    v26[0] = (*(__int16 *)(this + 36) << 8) + 128; /*0x47ed4e*/
    v26[1] = v10; /*0x47ed56*/
    GroundHeight = 0; /*0x47ed62*/
    GroundHeight = Cell::GetGroundHeight(v26); /*0x47ed6f*/
    if ( (unsigned __int8)Cell::IsPassable(v26) ) /*0x47ed79*/
    {
      if ( !stru_87F5F0.__pad_E12[1382] /*0x47eda4*/
        || !*(_DWORD *)&stru_87F5F0.__pad_E12[1422]
        || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1422]) != 7
        || !*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3672) )
      {
        v22 = 0; /*0x47edb0*/
        goto LABEL_43; /*0x47edb5*/
      }
      goto LABEL_42; /*0x47edaa*/
    }
    if ( !*(_BYTE *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3720) ) /*0x47edc8*/
    {
      if ( !stru_87F5F0.__pad_E12[1382] /*0x47eeb1*/
        || !*(_DWORD *)&stru_87F5F0.__pad_E12[1422]
        || (*(int (**)(void))(**(_DWORD **)&stru_87F5F0.__pad_E12[1422] + 44))() != 7
        || !(unsigned __int8)CellClass::IsPassable(
                               (int *)this,
                               v7,
                               *(int *)&stru_87F5F0.__pad_E12[1422],
                               (int)dword_A83D4C)
        || *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1422] + 3672) && *(_DWORD *)(this + 236) == 1 )
      {
        goto LABEL_43; /*0x47eeb1*/
      }
      goto LABEL_42; /*0x47eeb1*/
    }
    v24 = 0; /*0x47edd3*/
    v25 = 0; /*0x47edd9*/
    if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ede7*/
    {
      while ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) != 2 ) /*0x47edf3*/
      {
        v11 = (bool *)*((_DWORD *)v11 + 12); /*0x47edf5*/
        if ( !v11 ) /*0x47edfa*/
          goto LABEL_25; /*0x47edfa*/
      }
    }
    else
    {
LABEL_25:
      ClosestObjectCell = Object::FindClosestObjectCell((Object *)this, &v24, 0, 0); /*0x47ee02*/
      if ( ClosestObjectCell ) /*0x47ee14*/
      {
        v11 = (bool *)ClosestObjectCell; /*0x47ee16*/
      }
      else if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ee2b*/
      {
        while ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) != 36 ) /*0x47ee37*/
        {
          v11 = (bool *)*((_DWORD *)v11 + 12); /*0x47ee39*/
          if ( !v11 ) /*0x47ee3e*/
            goto LABEL_31; /*0x47ee3e*/
        }
      }
      else
      {
LABEL_31:
        v11 = 0; /*0x47ee40*/
      }
      if ( !v11 ) /*0x47ee44*/
        goto LABEL_43; /*0x47ee44*/
    }
    if ( (*(int (__thiscall **)(bool *))(*(_DWORD *)v11 + 44))(v11) == 6 /*0x47ee61*/
      && (unsigned __int8)BuildingClass::CanAcceptType(v11, *(int *)&stru_87F5F0.__pad_E12[1422], (int)dword_A83D4C) )
    {
LABEL_42:
      v22 = 1; /*0x47eeb3*/
    }
  }
LABEL_43:
  if ( (*(_BYTE *)(this + 300) & 4) != 0 )
  {
    v13 = a2[1]; /*0x47eee4*/
    v24 = *a2 + 30; /*0x47eef7*/
    v25 = v23 + v13; /*0x47ef00*/
    DrawToSurfaceSHP(
      (int)g_DSurface_Hidden_2,
      *(int *)&stru_87F5F0.__pad_58[124],
      stru_8A0390.health,
      1u,
      &v24,
      a3,
      a4 != 0 ? 67072 : 132608,
      0,
      v9,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    if ( v22 )
    {
      v14 = a2[1]; /*0x47ef30*/
      v24 = *a2 + 30; /*0x47ef43*/
      v21 = v9; /*0x47ef4b*/
      v25 = v23 + v14; /*0x47ef4c*/
      v20 = a4 != 0 ? 67072 : 132608;
      v19 = a3; /*0x47ef5c*/
      v18 = 0; /*0x47ef5e*/
    }
    else
    {
      v15 = v23 + a2[1]; /*0x47ef70*/
      v21 = v9; /*0x47ef7e*/
      v20 = a4 != 0 ? 67072 : 132608;
      v16 = *(unsigned __int8 *)(this + 284); /*0x47ef86*/
      v24 = *a2 + 30; /*0x47ef8c*/
      v25 = v15; /*0x47ef94*/
      v19 = a3; /*0x47ef9c*/
      v18 = v16 + 2; /*0x47efa6*/
    }
    DrawToSurfaceSHP( /*0x47efb4*/
      (int)g_DSurface_Hidden_2,
      *(int *)&stru_87F5F0.__pad_58[124],
      stru_8A0390.health,
      v18,
      &v24,
      v19,
      v20,
      0,
      v21,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  return v22; /*0x47efbd*/
}



// ==== 0x0047EFE0  RenderFogOfWar  this=CellClass  sig=csp ====
unsigned int __stdcall sub_47EFE0(unsigned int *a1, int *a2, unsigned int a3)
{
  int *FoundationSize; // eax
  int v5; // esi
  signed int v6; // ecx
  unsigned int result; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // esi
  signed int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edi
  unsigned __int8 v17; // dl
  unsigned __int8 *v19; // esi
  char **v20; // edi
  int v21; // edx
  int v22; // ebx
  int v23; // ecx
  bool v24; // cc
  int v25[4]; // [esp+0h] [ebp-34h] BYREF
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h]
  int v28; // [esp+18h] [ebp-1Ch]
  signed int v29; // [esp+20h] [ebp-14h]
  signed int v30; // [esp+24h] [ebp-10h]
  signed int v31; // [esp+28h] [ebp-Ch]
  signed int v32; // [esp+2Ch] [ebp-8h]
  char **v33; // [esp+30h] [ebp-4h]
  int v34; // [esp+3Ch] [ebp+8h]
  int v35; // [esp+3Ch] [ebp+8h]
  int v36; // [esp+3Ch] [ebp+8h]
  int v37; // [esp+3Ch] [ebp+8h]
  signed int v38; // [esp+40h] [ebp+Ch]
  int v39; // [esp+40h] [ebp+Ch]
  int SubFile; // [esp+44h] [ebp+10h]
  unsigned __int8 *v41; // [esp+44h] [ebp+10h]

  if ( !byte_89E7C5 ) /*0x47efed*/
  {
    byte_89E7C5 = 1; /*0x47eff6*/
    dword_89E794 = SearchMIXFile(aShroudShp, 0); /*0x47f009*/
    dword_89E790 = SearchMIXFile(aFogShp, 0); /*0x47f013*/
  }
  if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 ) /*0x47f022*/
    v33 = (char **)dword_89E790; /*0x47f02a*/
  else
    v33 = (char **)dword_89E794; /*0x47f035*/
  FoundationSize = Building::GetFoundationSize(v25, a3); /*0x47f046*/
  v26 = *FoundationSize; /*0x47f053*/
  v5 = a2[1]; /*0x47f059*/
  v27 = FoundationSize[1]; /*0x47f05c*/
  v28 = FoundationSize[2]; /*0x47f062*/
  v6 = a1[1]; /*0x47f065*/
  result = v27 + v6 + FoundationSize[3]; /*0x47f06d*/
  v30 = result; /*0x47f074*/
  if ( (int)result >= v5 + 1 ) /*0x47f077*/
  {
    v38 = v5 + a2[3]; /*0x47f084*/
    result = v38; /*0x47f080*/
    if ( v6 < v38 ) /*0x47f087*/
    {
      result = *a1; /*0x47f08d*/
      v8 = v26 + *a1 + v28; /*0x47f097*/
      v34 = *a2; /*0x47f09b*/
      v29 = v8; /*0x47f0a1*/
      if ( v8 >= v34 + 1 ) /*0x47f0a4*/
      {
        v9 = v34; /*0x47f0ad*/
        v31 = v34 + a2[2]; /*0x47f0b4*/
        if ( (int)result < v31 ) /*0x47f0b7*/
        {
          v35 = v5; /*0x47f0c0*/
          if ( v5 <= v6 + v27 ) /*0x47f0c8*/
            v35 = v6 + v27; /*0x47f0ca*/
          v10 = v35 - v6 - v27; /*0x47f0d5*/
          v32 = v38; /*0x47f0dc*/
          if ( v38 >= v30 ) /*0x47f0df*/
            v32 = v30; /*0x47f0e1*/
          if ( v9 <= (int)(result + v26) ) /*0x47f0ec*/
            v9 = result + v26; /*0x47f0ee*/
          v11 = v31; /*0x47f0f0*/
          v12 = v9 - result - v26; /*0x47f0f7*/
          if ( v31 >= v29 ) /*0x47f0fe*/
          {
            v39 = v29; /*0x47f105*/
            v11 = v29; /*0x47f108*/
          }
          else
          {
            v39 = v31; /*0x47f100*/
          }
          v31 = v28 + v9 - v11; /*0x47f118*/
          v30 = v9 + *((_DWORD *)dword_87E8A4 + 10) - v11; /*0x47f12e*/
          SubFile = MixFileClass::GetSubFile(v33, a3); /*0x47f142*/
          result = StreamClass::ReadAndSeek((int)dword_87E8A4, v9, v35 - dword_886FA4); /*0x47f14c*/
          v13 = v32 - v35; /*0x47f15b*/
          v14 = (v32 - v35) * *((_DWORD *)dword_87E8A4 + 10); /*0x47f16d*/
          v41 = (unsigned __int8 *)(v12 + v28 * v10 + SubFile); /*0x47f172*/
          v33 = (char **)result; /*0x47f178*/
          v15 = dword_87E8A4; /*0x47f18a*/
          if ( result + 2 * (v14 + v39 + 0x7FFFFFFF * v9) + 4 < *((_DWORD *)dword_87E8A4 + 7) ) /*0x47f193*/
          {
            v29 = v32 - v35; /*0x47f20d*/
            v37 = v39 - v9; /*0x47f212*/
            v19 = v41; /*0x47f215*/
            v20 = v33; /*0x47f218*/
            v21 = v13; /*0x47f21b*/
            v22 = 2 * v30; /*0x47f221*/
            do /*0x47f242*/
            {
              v23 = v37; /*0x47f223*/
              do /*0x47f23a*/
              {
                result = *v19++; /*0x47f228*/
                if ( result != 254 ) /*0x47f231*/
                  *(_WORD *)v20 = result; /*0x47f233*/
                v20 = (char **)((char *)v20 + 2); /*0x47f236*/
                v24 = v23-- <= 1; /*0x47f239*/
              }
              while ( !v24 ); /*0x47f23a*/
              v19 += v31; /*0x47f23c*/
              v20 = (char **)((char *)v20 + v22); /*0x47f23f*/
              v24 = v21-- <= 1; /*0x47f241*/
            }
            while ( !v24 ); /*0x47f242*/
          }
          else if ( v35 < v32 ) /*0x47f19d*/
          {
            v36 = v32 - v35; /*0x47f1a3*/
            do /*0x47f1ff*/
            {
              if ( v9 < v39 ) /*0x47f1ab*/
              {
                v16 = v39 - v9; /*0x47f1af*/
                do /*0x47f1db*/
                {
                  v17 = *v41; /*0x47f1b4*/
                  if ( *v41++ != 0xFE ) /*0x47f1b7*/
                  {
                    *(_WORD *)result = v17; /*0x47f1c4*/
                    v15 = dword_87E8A4; /*0x47f1c7*/
                  }
                  result += 2; /*0x47f1d0*/
                  if ( result >= v15[7] ) /*0x47f1d5*/
                    result -= v15[8]; /*0x47f1d7*/
                  --v16; /*0x47f1da*/
                }
                while ( v16 ); /*0x47f1db*/
              }
              result += 2 * v30; /*0x47f1e6*/
              v41 += v31; /*0x47f1f0*/
              if ( result >= v15[7] ) /*0x47f1f3*/
                result -= v15[8]; /*0x47f1f5*/
              --v36; /*0x47f1fc*/
            }
            while ( v36 ); /*0x47f1ff*/
          }
        }
      }
    }
  }
  return result; /*0x47f204*/
}



// ==== 0x0047F250  RenderFogOfWarOverlay  this=CellClass  sig=csp ====
_WORD *__stdcall RenderFogOfWarOverlay(int a1, int *a2, unsigned int a3)
{
  int *FoundationSizeBuilding; // eax
  int v5; // ebp
  int v6; // esi
  int v7; // edx
  _WORD *result; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // edx
  unsigned __int8 *v17; // edi
  int v18; // esi
  unsigned __int8 v19; // bl
  __int16 v20; // cx
  int v21; // ecx
  unsigned __int8 *v22; // esi
  int v23; // edi
  unsigned __int8 v24; // dl
  int v25; // ecx
  bool v26; // zf
  int v27; // [esp+4h] [ebp-28h]
  int v28; // [esp+4h] [ebp-28h]
  _WORD *v29; // [esp+8h] [ebp-24h]
  int v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h]
  int v33[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+30h] [ebp+4h]
  _WORD *v35; // [esp+30h] [ebp+4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+30h] [ebp+4h]
  _WORD *v38; // [esp+34h] [ebp+8h]
  int v39; // [esp+34h] [ebp+8h]
  int SubFileMixFileClass; // [esp+38h] [ebp+Ch]
  unsigned __int8 *v41; // [esp+38h] [ebp+Ch]

  if ( !byte_89E7C6 ) /*0x47f25a*/
  {
    byte_89E7C6 = 1; /*0x47f263*/
    dword_89E760 = SearchMIXFile(aFogShp, 0); /*0x47f26f*/
  }
  FoundationSizeBuilding = Building::GetFoundationSize(v33, a3); /*0x47f288*/
  v31 = *FoundationSizeBuilding; /*0x47f293*/
  v5 = FoundationSizeBuilding[1]; /*0x47f297*/
  v6 = a2[1]; /*0x47f29a*/
  v32 = FoundationSizeBuilding[2]; /*0x47f2a3*/
  v7 = *(_DWORD *)(a1 + 4); /*0x47f2ae*/
  result = (_WORD *)(v5 + v7 + FoundationSizeBuilding[3]); /*0x47f2b3*/
  v29 = result; /*0x47f2b7*/
  if ( (int)result >= v6 + 1 )
  {
    v38 = (_WORD *)(v6 + a2[3]); /*0x47f2c8*/
    result = v38; /*0x47f2c4*/
    if ( v7 < (int)v38 )
    {
      result = *(_WORD **)a1; /*0x47f2d2*/
      v9 = v31 + *(_DWORD *)a1 + v32; /*0x47f2de*/
      v34 = *a2; /*0x47f2e2*/
      if ( v9 >= *a2 + 1 )
      {
        v10 = a2[2]; /*0x47f2ef*/
        v11 = *a2; /*0x47f2f2*/
        v27 = v34 + v10; /*0x47f2fa*/
        if ( (int)result < v34 + v10 )
        {
          v12 = v7 + v5; /*0x47f304*/
          if ( v6 > v7 + v5 ) /*0x47f309*/
            v12 = v6; /*0x47f30b*/
          v13 = v12 - v7 - v5; /*0x47f315*/
          v35 = v38; /*0x47f31d*/
          if ( (int)v38 >= (int)v29 ) /*0x47f321*/
            v35 = v29; /*0x47f323*/
          v14 = (int)result + v31; /*0x47f32b*/
          if ( v11 > (int)result + v31 ) /*0x47f330*/
            v14 = v11; /*0x47f332*/
          v15 = v14 - (_DWORD)result - v31; /*0x47f33c*/
          if ( v27 < v9 ) /*0x47f344*/
            v9 = v27; /*0x47f346*/
          v39 = v9; /*0x47f350*/
          v28 = v32 + v14 - v9; /*0x47f362*/
          v30 = v14 + *((_DWORD *)dword_87E8A4 + 10) - v9; /*0x47f373*/
          SubFileMixFileClass = MixFileClass::GetSubFile((char **)dword_89E760, a3); /*0x47f38d*/
          result = (_WORD *)StreamClass::ReadAndSeek((int)dword_87E8A4, v14, v12 - dword_886FA4); /*0x47f397*/
          v16 = dword_87E8A4; /*0x47f3a5*/
          v41 = (unsigned __int8 *)(v15 + v32 * v13 + SubFileMixFileClass); /*0x47f3b4*/
          if ( (unsigned int)&result[((_DWORD)v35 - v12) * *((_DWORD *)dword_87E8A4 + 10) + 2 + v39 + 0x7FFFFFFF * v14] < *((_DWORD *)dword_87E8A4 + 7) )
          {
            if ( v12 < (int)v35 )
            {
              v22 = v41; /*0x47f48c*/
              v37 = (int)v35 - v12; /*0x47f490*/
              do
              {
                if ( v14 < v39 )
                {
                  v23 = v39 - v14; /*0x47f4a0*/
                  do
                  {
                    v24 = *v22++; /*0x47f4a2*/
                    if ( v24 <= 0x7Fu )
                    {
                      if ( *result == 127 )
                      {
                        *result = v24; /*0x47f4bb*/
                      }
                      else
                      {
                        v25 = (unsigned __int16)*result + v24 - 127; /*0x47f4d0*/
                        *result = v25 <= 0 ? 0 : v25;
                      }
                    }
                    ++result; /*0x47f4e1*/
                    --v23; /*0x47f4e4*/
                  }
                  while ( v23 );
                }
                v22 += v28; /*0x47f4eb*/
                v26 = v37 == 1; /*0x47f4ed*/
                result += v30; /*0x47f4ee*/
                --v37; /*0x47f4f1*/
              }
              while ( !v26 );
            }
          }
          else if ( v12 < (int)v35 )
          {
            v17 = v41; /*0x47f3ed*/
            v36 = (int)v35 - v12; /*0x47f3f1*/
            do
            {
              if ( v14 < v39 )
              {
                v18 = v39 - v14; /*0x47f401*/
                do
                {
                  v19 = *v17++; /*0x47f403*/
                  if ( v19 <= 0x7Fu )
                  {
                    if ( *result == 127 )
                    {
                      v20 = v19; /*0x47f41b*/
                    }
                    else
                    {
                      v21 = (unsigned __int16)*result + v19 - 127; /*0x47f42f*/
                      v20 = v21 <= 0 ? 0 : v21;
                    }
                    *result = v20; /*0x47f43d*/
                    v16 = dword_87E8A4; /*0x47f440*/
                  }
                  if ( (unsigned int)++result >= v16[7] ) /*0x47f44e*/
                    result = (_WORD *)((char *)result - v16[8]); /*0x47f450*/
                  --v18; /*0x47f453*/
                }
                while ( v18 );
              }
              v17 += v28; /*0x47f45a*/
              result += v30; /*0x47f45c*/
              if ( (unsigned int)result >= v16[7] ) /*0x47f464*/
                result = (_WORD *)((char *)result - v16[8]); /*0x47f466*/
              --v36; /*0x47f46e*/
            }
            while ( v36 );
          }
        }
      }
    }
  }
  return result; /*0x47f478*/
}



// ==== 0x0047F510  TacticalClass::DrawBuildingPlacement  this=IUnknown  sig=csp ====
void __thiscall TacticalClass::DrawBuildingPlacement(int this, _DWORD *a2, int *a3)
{
  _BYTE *v4; // edi
  int *v5; // eax
  int v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  unsigned __int8 v12; // cl
  char v13; // al
  TacticalClass *v14; // ecx
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(this + 68)); /*0x47f52c*/
  v15 = 15 * *(char *)(this + 283); /*0x47f534*/
  v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, &v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = a2[1] + v5[1]; /*0x47f55e*/
  v8 = a3; /*0x47f560*/
  v9 = v6 + *a2; /*0x47f564*/
  v10 = a3[1]; /*0x47f568*/
  v17 = v9 - *a3; /*0x47f571*/
  LOBYTE(v9) = *(_BYTE *)(this + 320); /*0x47f575*/
  v11 = v7 - v10; /*0x47f57b*/
  v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = *(_BYTE *)(this + 286); /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !*(_DWORD *)(this + 52) ) /*0x47f5a8*/
    TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(a2) = *(_BYTE *)(this + 286); /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(a2) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(this + 52),
      v16,
      (unsigned __int8)a2 + *(__int16 *)(v16 + 6) / 2,
      &v17,
      v8,
      17921,
      0,
      -2 - v15,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    return; /*0x47f632*/
  }
  if ( !v4[692] ) /*0x47f649*/
    goto LABEL_9; /*0x47f649*/
  v14 = *(TacticalClass **)(this + 64); /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a3, (int *)&a2) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        (int)g_DSurface_Hidden_2,
        *(_DWORD *)(this + 52),
        (int)a3,
        (unsigned int)a2,
        &v17,
        v8,
        17921,
        0,
        -2 - v15,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
  }
}



// ==== 0x0047F6A0  BuildingClass::Draw_0  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::Draw_0(int this, _DWORD *a2, int *a3)
{
  int result; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int *v10; // ebp
  int v11; // eax
  int v12; // edi
  unsigned int v13; // ecx
  _DWORD *v14; // ebx
  int v15; // ecx
  int v16; // edx
  char v17; // bl
  int v18; // edi
  BuildingClass *v19; // ecx
  unsigned int v20; // [esp-34h] [ebp-58h]
  int *v21; // [esp-2Ch] [ebp-50h]
  int v22; // [esp-20h] [ebp-44h]
  int v23; // [esp-1Ch] [ebp-40h]
  int v24; // [esp-18h] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-3Ch]
  int v26; // [esp+10h] [ebp-14h] BYREF
  int v27[2]; // [esp+14h] [ebp-10h] BYREF
  char v28[8]; // [esp+1Ch] [ebp-8h] BYREF
  int v29; // [esp+28h] [ebp+4h]

  result = *(_DWORD *)(this + 68); /*0x47f6a9*/
  if ( result != 167 && result != 178 )
  {
    v26 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result); /*0x47f6d2*/
    v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, v28); /*0x47f6d6*/
    v6 = *v5 + *a2; /*0x47f6ef*/
    v7 = *(char *)(this + 283); /*0x47f6f1*/
    v8 = (*(_DWORD *)(this + 320) >> 7) & 1; /*0x47f6fb*/
    v9 = a2[1] + v5[1]; /*0x47f6fe*/
    v10 = a3; /*0x47f700*/
    v27[0] = v6; /*0x47f704*/
    v27[1] = v9 - a3[1]; /*0x47f713*/
    v11 = *(_DWORD *)(this + 52); /*0x47f717*/
    v12 = 15 * (v7 + 4 * v8); /*0x47f71a*/
    v29 = v12; /*0x47f722*/
    v27[0] = v6 - *a3; /*0x47f728*/
    if ( !v11 ) /*0x47f72c*/
      TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f748*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 156))(v26); /*0x47f755*/
    if ( *(char *)(this + 320) >= 0 )
    {
      if ( *(_BYTE *)(v26 + 681) )
      {
        result = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x47f863*/
        if ( result == -1 ) /*0x47f86b*/
          return result; /*0x47f86b*/
        v14 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * result); /*0x47f87f*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f877*/
        {
          v15 = v14[58]; /*0x47f8c3*/
          v16 = *(_DWORD *)(v14[56] + 660) /*0x47f8ce*/
              + v14[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
              + *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % (v14[59] / 4);
        }
        else
        {
          v16 = *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % v14[58]; /*0x47f8e3*/
          v15 = *(_DWORD *)(v14[56] + 660); /*0x47f8ef*/
        }
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * (v15 + v16)) + 156))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * (v15 + v16))); /*0x47f902*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f908*/
          return DrawToSurfaceSHP( /*0x47f952*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[112],
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   0,
                   1000,
                   0,
                   dword_AA105C[*(unsigned __int8 *)(this + 284)],
                   0,
                   0,
                   0);
        v24 = 1000; /*0x47f960*/
      }
      else
      {
        if ( *(_BYTE *)(v26 + 680) ) /*0x47f96a*/
          return DrawToSurfaceSHP( /*0x47f9c1*/
                   (int)g_DSurface_Hidden_2,
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4
                                                                          * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                             + 780),
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   2,
                   *(__int16 *)(this + 266),
                   0,
                   0,
                   0,
                   0,
                   0);
        if ( *(_DWORD *)(v26 + 660) != 126 )
        {
          v17 = *(_BYTE *)(v26 + 691); /*0x47fa69*/
          v18 = v17 != 0 ? 0 : -15;
          if ( *(_BYTE *)(v26 + 693) ) /*0x47fa81*/
            v18 = 0; /*0x47fa8b*/
          if ( *(_BYTE *)(v26 + 682) )
          {
            v25 = *(__int16 *)(this + 268); /*0x47fab4*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fabc*/
            v21 = v10; /*0x47fac8*/
            v20 = 0; /*0x47faca*/
          }
          else if ( *(_BYTE *)(v26 + 692) )
          {
            v19 = *(BuildingClass **)(this + 64); /*0x47fadb*/
            if ( !v19 ) /*0x47fae0*/
              return result; /*0x47fae0*/
            result = BuildingClass::GetPlacementCoords(v19, &v26, &a3); /*0x47faf0*/
            if ( !(_BYTE)result ) /*0x47faf7*/
              return result; /*0x47faf7*/
            v25 = *(__int16 *)(this + 268); /*0x47fb21*/
            result = v26; /*0x47fb22*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fb2a*/
            v21 = v10; /*0x47fb36*/
            v20 = (unsigned int)a3; /*0x47fb38*/
          }
          else
          {
            v25 = *(__int16 *)(this + 268); /*0x47fb58*/
            v23 = v17 != 0 ? 0 : 2;
            v22 = v18 - v29 - 2; /*0x47fb60*/
            v21 = v10; /*0x47fb74*/
            v20 = *(unsigned __int8 *)(this + 286); /*0x47fb76*/
          }
          return DrawToSurfaceSHP( /*0x47fb81*/
                   (int)g_DSurface_Hidden_2,
                   *(_DWORD *)(this + 52),
                   result,
                   v20,
                   v27,
                   v21,
                   19968,
                   0,
                   v22,
                   v23,
                   v25,
                   0,
                   0,
                   0,
                   0,
                   0);
        }
        if ( *(_BYTE *)(this + 284) ) /*0x47f9d3*/
          return DrawToSurfaceSHP( /*0x47fa27*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[112],
                   result,
                   *(unsigned __int8 *)(this + 286),
                   v27,
                   v10,
                   19968,
                   0,
                   -2 - v12,
                   0,
                   *(__int16 *)(this + 268),
                   0,
                   dword_AA105C[*(unsigned __int8 *)(this + 284)],
                   0,
                   30,
                   -2);
        v24 = *(__int16 *)(this + 268); /*0x47fa3c*/
      }
      return DrawToSurfaceSHP( /*0x47fa64*/
               (int)g_DSurface_Hidden_2,
               *(int *)&stru_87F5F0.__pad_58[112],
               result,
               *(unsigned __int8 *)(this + 286),
               v27,
               v10,
               19968,
               0,
               -2 - v12,
               0,
               v24,
               0,
               0,
               0,
               0,
               0);
    }
    if ( *(_DWORD *)(this + 100) != *(_DWORD *)&stru_A8EB00.?[416] /*0x47f7ab*/
      || *(_BYTE *)(this + 280) != stru_87F5F0.__pad_E12[1342]
      || *(_DWORD *)(this + 104) != *v10
      || *(_DWORD *)(this + 108) != v10[1]
      || *(_DWORD *)(this + 112) != v10[2]
      || *(_DWORD *)(this + 116) != v10[3] )
    {
      v13 = *(unsigned __int8 *)(this + 286); /*0x47f7b3*/
      if ( !*(_BYTE *)(this + 286) || v13 == 9 ) /*0x47f7c0*/
        v13 += dword_81CC30[*(_BYTE *)(this + 36) & 3 | (4 * (*(_BYTE *)(this + 38) & 3))]; /*0x47f7d3*/
      DrawToSurfaceSHP( /*0x47f80b*/
        (int)g_DSurface_Hidden_2,
        *(_DWORD *)(this + 52),
        result,
        v13,
        v27,
        v10,
        19968,
        0,
        -2 - v12,
        0,
        *(__int16 *)(this + 270),
        0,
        0,
        0,
        0,
        0);
      *(_DWORD *)(this + 100) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x47f818*/
      *(_DWORD *)(this + 104) = DSurface_ViewBounds.field_0; /*0x47f821*/
      *(_DWORD *)(this + 108) = DSurface_ViewBounds.field_4; /*0x47f829*/
      *(_DWORD *)(this + 112) = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x47f832*/
      result = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f835*/
      *(_DWORD *)(this + 116) = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f83a*/
      *(_BYTE *)(this + 280) = stru_87F5F0.__pad_E12[1342]; /*0x47f843*/
    }
  }
  return result; /*0x47f828*/
}



// ==== 0x0047FB90  House::GetStartCoords  this=House  sig=csp ====
_DWORD *__thiscall House::GetStartCoords(House *this, _DWORD *a2)
{
  int v3; // ecx
  _BYTE *v4; // ebp
  int BuildingByTiberiumType; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // ecx
  House *v9; // eax
  BuildingClass *v10; // ecx
  int v11; // kr08_4
  int v12; // kr00_4
  _DWORD *v13; // eax
  int v14; // esi
  int v16; // edi
  int v17; // esi
  _DWORD *FoundationSize; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // eax
  House *v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = *(_DWORD *)&this->__pad_2D[23]; /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  v24 = (unsigned __int8)this->__pad_7C[162]; /*0x47fbb5*/
  v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3); /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( this->__pad_7C[160] ) /*0x47fbe5*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc36*/
                     + 4
                     * (v6[58]
                      + *(_DWORD *)(v6[56] + 660)
                      + v6[59] / 4 * ((unsigned __int8)this->__pad_7C[160] - 1)
                      + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % (v6[59] / 4)));
      v23 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc6f*/
                   + 4
                   * (*(_DWORD *)(v6[56] + 660)
                    + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % v6[58]));
    v9 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (House *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47fca7*/
LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = *(BuildingClass **)&this->__pad_2D[19]; /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (int *)&v23, &v24); /*0x47fc9b*/
LABEL_12:
  v11 = (*(__int16 *)&this->__pad_C[24] << 8) + 128; /*0x47fcb1*/
  v12 = (*(__int16 *)&this->__pad_C[26] << 8) + 128; /*0x47fce0*/
  v27[2] = 0; /*0x47fce2*/
  v27[0] = (v11 / 256) << 8; /*0x47fd02*/
  v27[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v27, &v25); /*0x47fd0a*/
  v13 = BuildingClass::CalcDrawPos((BuildingClass *)this, v27); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v26; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v26 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
LABEL_13:
    *a2 = 0; /*0x47fd43*/
    a2[1] = 0; /*0x47fd53*/
    a2[2] = 0; /*0x47fd56*/
    a2[3] = 0; /*0x47fd59*/
    return a2; /*0x47fd63*/
  }
  House::Constructor(v23); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    v24 = 0; /*0x47fd75*/
  v16 = v25 - *(__int16 *)v23->House_field_0x2 / 2; /*0x47fd93*/
  v17 = v26 - *(__int16 *)&v23->House_field_0x2[2] / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(v27, v24); /*0x47fda7*/
  v19 = v16 + *FoundationSize; /*0x47fdb1*/
  v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  v21 = FoundationSize[2]; /*0x47fdb9*/
  v22 = FoundationSize[3]; /*0x47fdbc*/
  *a2 = v19; /*0x47fdc1*/
  a2[1] = v20; /*0x47fdc3*/
  a2[2] = v21; /*0x47fdc6*/
  a2[3] = v22; /*0x47fdc9*/
  return a2; /*0x47fd5c*/
}



// ==== 0x0047FDE0  BuildingClass::GetPlacementRect  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::GetPlacementRect(BuildingClass *this, int *a2)
{
  int v3; // eax
  _BYTE *v4; // esi
  __int16 *v5; // ebx
  unsigned int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  unsigned __int8 v12; // al
  int v13; // edi
  int v14; // esi
  _DWORD *FoundationSize; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // eax
  _DWORD v20[3]; // [esp+Ch] [ebp-24h] BYREF
  int v21; // [esp+18h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-14h]
  _DWORD v23[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = this->?[2]; /*0x47fde8*/
  if ( v3 != -1 /*0x47fe07*/
    && (v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3),
        (v5 = (__int16 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4)) != 0) )
  {
    LOBYTE(v20[0]) = BYTE2(this->?); /*0x47fe31*/
    if ( v4[682] ) /*0x47fe35*/
      LOBYTE(v20[0]) = 0; /*0x47fe3f*/
    v7 = LOBYTE(v20[0]) + v5[3] / 2; /*0x47fe67*/
    Coord::Subtract( /*0x47fe9d*/
      (Coord *)v20,
      (((SLOWORD(this->?) << 8) + 128) / 256) << 8,
      (((SHIWORD(this->?) << 8) + 128) / 256) << 8,
      0);
    v23[0] = v20[0]; /*0x47feae*/
    v23[1] = v20[1]; /*0x47feb2*/
    v23[2] = v20[2]; /*0x47febe*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x47feca*/
    v8 = BuildingClass::CalcDrawPos(this, v20); /*0x47fed6*/
    v21 += *v8; /*0x47fee7*/
    v9 = v8[1]; /*0x47feeb*/
    LOBYTE(v8) = this->?; /*0x47feee*/
    v10 = v9 + v22; /*0x47fef4*/
    v11 = v21 - 30; /*0x47fef6*/
    v22 += v9; /*0x47fef9*/
    v21 -= 30; /*0x47feff*/
    if ( (char)v8 < 0 ) /*0x47ff03*/
    {
      v12 = BYTE2(this->?); /*0x47ff05*/
      if ( v12 >= 9u && v12 <= 0x11u ) /*0x47ff11*/
      {
        v11 -= 15; /*0x47ff13*/
        v10 += 7; /*0x47ff16*/
        v21 = v11; /*0x47ff19*/
        v22 = v10; /*0x47ff1d*/
      }
    }
    v13 = v11 - v5[1] / 2; /*0x47ff3a*/
    v14 = v10 - v5[2] / 2; /*0x47ff41*/
    FoundationSize = Building::GetFoundationSize(v23, v7); /*0x47ff43*/
    v16 = v13 + *FoundationSize; /*0x47ff4d*/
    v17 = v14 + FoundationSize[1]; /*0x47ff53*/
    v18 = FoundationSize[2]; /*0x47ff55*/
    v19 = FoundationSize[3]; /*0x47ff58*/
    *a2 = v16; /*0x47ff5e*/
    a2[1] = v17; /*0x47ff60*/
    a2[2] = v18; /*0x47ff63*/
    a2[3] = v19; /*0x47ff66*/
    return a2; /*0x47ff69*/
  }
  else
  {
    *a2 = 0; /*0x47fe17*/
    a2[1] = 0; /*0x47fe19*/
    a2[2] = 0; /*0x47fe1c*/
    a2[3] = 0; /*0x47fe1f*/
    return a2; /*0x47fe09*/
  }
}



// ==== 0x0047FF80  CellClass::GetScreenRect  this=CellClass  sig=csp ====
int *__thiscall CellClass::GetScreenRect(CellClass *this, int *a2)
{
  int v3; // kr04_4
  int v4; // kr00_4
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int height; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v3 = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffab*/
  v4 = (SHIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffb8*/
  v19 = 0; /*0x47ffba*/
  v18 = (v4 / 256) << 8; /*0x47ffc4*/
  v17 = (v3 / 256) << 8; /*0x47ffde*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v17, &v15); /*0x47ffe2*/
  v5 = 3 * this->level; /*0x47fff8*/
  v15 -= 30; /*0x47fffe*/
  v6 = v15; /*0x480002*/
  v7 = 30; /*0x480014*/
  v16 += (int)DSurface_ViewBounds.field_4 - 5 * v5; /*0x480019*/
  v8 = v16; /*0x48001d*/
  v9 = *(_DWORD *)&this->__pad_28[16]; /*0x48001f*/
  if ( v9 == 0xFFFF ) /*0x480027*/
  {
    *a2 = v15; /*0x48002f*/
    a2[1] = v8; /*0x480031*/
    a2[2] = 60; /*0x480037*/
    a2[3] = 30; /*0x48003a*/
    return a2; /*0x480041*/
  }
  if ( v9 < 0 || v9 >= *(int *)&stru_A8EB00.?[340] )
  {
    Debug::Log(); /*0x4800e0*/
  }
  else
  {
    height = (unsigned __int8)this->height; /*0x480065*/
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9) + 156))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v9)); /*0x48006b*/
    if ( !v12 ) /*0x480073*/
    {
      *a2 = v17; /*0x480082*/
      a2[1] = v18; /*0x480089*/
      a2[2] = v19; /*0x480090*/
      a2[3] = v20; /*0x480097*/
      return a2; /*0x48009d*/
    }
    if ( height >= *v12 * v12[1] - 1 ) /*0x4800a9*/
      height = *v12 * v12[1] - 1; /*0x4800ab*/
    v13 = v12[height + 4]; /*0x4800ad*/
    if ( (*(_BYTE *)(v13 + 36) & 1) != 0 )
    {
      v14 = *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24) < 0 ? 0 : *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24);
      v8 -= v14; /*0x4800ca*/
      v7 = v14 + 30; /*0x4800cc*/
    }
  }
  *a2 = v6; /*0x4800f3*/
  a2[1] = v8; /*0x4800f5*/
  a2[2] = 60; /*0x4800fb*/
  a2[3] = v7; /*0x4800fe*/
  return a2; /*0x480034*/
}


