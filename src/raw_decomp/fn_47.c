// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00470C00  MPCooperative::startGame  this=CampaignEndScoreClass  sig=csp ====
_DWORD *__thiscall MPCooperative::startGame(CampaignEndScoreClass *this)
{
  this->vfptr = &vt_CampaignEndScoreClass; /*0x470c04*/
  unk_89E008 = -1; /*0x470c0a*/
  unk_89E020 = 0; /*0x470c14*/
  unk_89DFD4 = 0; /*0x470c1a*/
  return &this->vfptr; /*0x470c20*/
}


// ==== 0x00470C30  CampaignEndScoreClass::method_470C30  this=CampaignEndScoreClass  sig=csp ====
void __thiscall sub_470C30(CampaignEndScoreClass *this)
{
  this->vfptr = &vt_CampaignEndScoreClass; /*0x470c30*/
}


// ==== 0x00470C40  sub_470C40  this=-  sig=ida-proto ====
LRESULT __fastcall sub_470C40(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x470c58*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x470c62*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x470c7b*/
}


// ==== 0x00470D30  CampaignScreen::Init  this=CampaignScreen  sig=csp ====
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
                                            + 4 * *(_DWORD *)(*(_DWORD *)&stru_89DFE0.__pad_0[4 * v50] + 40))
                                + 776),
              (int)v54);
      LOWORD(v53) = *(_WORD *)v19; /*0x471034*/
      BYTE2(v53) = *(_BYTE *)(v19 + 2); /*0x47103c*/
      v20 = *(_DWORD *)&stru_89DFE0.__pad_0[4 * v50]; /*0x471067*/
      v52 = 24 * v50; /*0x471071*/
      v21 = (unsigned __int8)v53 | (*(unsigned __int16 *)((char *)&v53 + 1) << 8); /*0x471081*/
      nIDDlgItem = *(_DWORD *)&stru_81B1A4.__pad_48[24 * v50]; /*0x471085*/
      lParam = v20; /*0x471089*/
      v22 = GetDlgItem(hWnd, nIDDlgItem); /*0x47108d*/
      SendMessageA(v22, 0x4B2u, 0, lParam); /*0x47109c*/
      v23 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710a4*/
      SendMessageA(v23, 0x498u, 0, v21); /*0x4710af*/
      v24 = *(_DWORD *)&stru_89DFE0.__pad_0[4 * v50]; /*0x4710bf*/
      nIDDlgItem = *(_DWORD *)&stru_81B1A4.__pad_48[v52 + 4]; /*0x4710c6*/
      swprintf(v56, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v24 + 64), v48[0]); /*0x4710d8*/
      v25 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710e6*/
      SendMessageA(v25, 0x4B2u, 0, (LPARAM)v56); /*0x4710f5*/
      v26 = GetDlgItem(hWnd, nIDDlgItem); /*0x4710fd*/
      SendMessageA(v26, 0x498u, 0, v21); /*0x471108*/
      nIDDlgItem = *(int *)((char *)&stru_81B1A4.unknown50 + v52); /*0x471118*/
      swprintf( /*0x471134*/
        v58,
        (const size_t)&g_Str_Fmt_PctD,
        *(const wchar_t *const *)(*(_DWORD *)&stru_89DFE0.__pad_0[4 * v50] + 48),
        v48[0]);
      v27 = GetDlgItem(hWnd, nIDDlgItem); /*0x471142*/
      SendMessageA(v27, 0x4B2u, 0, (LPARAM)v58); /*0x471154*/
      v28 = GetDlgItem(hWnd, nIDDlgItem); /*0x47115c*/
      SendMessageA(v28, 0x498u, 0, v21); /*0x471167*/
      v29 = *(_DWORD *)&stru_89DFE0.__pad_0[4 * v50]; /*0x471177*/
      nIDDlgItem = *(int *)((char *)&stru_81B1A4.unknown54 + v52); /*0x47117e*/
      swprintf(v57, (const size_t)&g_Str_Fmt_PctD, *(const wchar_t *const *)(v29 + 80), v48[0]); /*0x471193*/
      v30 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711a1*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v57); /*0x4711b3*/
      v31 = GetDlgItem(hWnd, nIDDlgItem); /*0x4711bb*/
      SendMessageA(v31, 0x498u, 0, v21); /*0x4711c6*/
      v32 = *(_DWORD *)&stru_89DFE0.__pad_0[4 * v50]; /*0x4711d6*/
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
        lParam = *(_DWORD *)&stru_89DFE0.__pad_0[4]; /*0x4712ad*/
        v39 = GetDlgItem(hWnd, 1849); /*0x4712b1*/
        SendMessageA(v39, 0x4B2u, 0, lParam); /*0x4712c0*/
        v40 = GetDlgItem(hWnd, 1849); /*0x4712c8*/
        SendMessageA(v40, 0x498u, 0, v21); /*0x4712d3*/
        swprintf( /*0x4712e9*/
          Buffer,
          (const size_t)&g_Str_Fmt_PctD,
          *(const wchar_t *const *)(*(_DWORD *)&stru_89DFE0.__pad_0[4] + 96),
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
    lParam = *(_DWORD *)stru_89DFE0.__pad_0; /*0x47123b*/
    v35 = GetDlgItem(hWnd, 1850); /*0x47123f*/
    SendMessageA(v35, 0x4B2u, 0, lParam); /*0x47124e*/
    v36 = GetDlgItem(hWnd, 1850); /*0x471256*/
    SendMessageA(v36, 0x498u, 0, v21); /*0x471261*/
    swprintf( /*0x471276*/
      Buffer,
      (const size_t)&g_Str_Fmt_PctD,
      *(const wchar_t *const *)(*(_DWORD *)stru_89DFE0.__pad_0 + 96),
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


// ==== 0x00471420  CampaignScore::InitScoreScreenData  this=CampaignScore  sig=csp ====
void CampaignScore::InitScoreScreenData(
        int a1,
        int Block,
        int a3,
        _BYTE *a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        CampaignScore *aP9,
        wchar_t *a10,
        wchar_t *Source)
{
  int ebx0; // ebx
  int ebp0; // ebp
  ObjectClass *v12; // esi
  ObjectClass *v13; // eax
  ObjectClass *v14; // edx
  void *v17; // esi

  unk_89E020 = a5; /*0x471430*/
  wcscpy(&unk_89E0A4, (const wchar_t *)aP9); /*0x471435*/
  v12 = (ObjectClass *)unk_89E020; /*0x47143a*/
  if ( (int)unk_89E020 > 0 ) /*0x471449*/
  {
    v13 = (ObjectClass *)&stru_89DFE0; /*0x47144b*/
    v14 = (ObjectClass *)unk_89E020; /*0x471455*/
    do /*0x471460*/
    {
      *(_DWORD *)v13->__pad_0 = *(_DWORD *)&v13->__pad_0[Block - (_DWORD)&stru_89DFE0]; /*0x47145a*/
      v13 = (ObjectClass *)((char *)v13 + 4); /*0x47145c*/
      v14 = (ObjectClass *)((char *)v14 - 1); /*0x47145f*/
    }
    while ( v14 ); /*0x471460*/
  }
  if ( (int)v12 > 1 ) /*0x471466*/
    qsort(&stru_89DFE0, (IUnknown *)v12, 4u, Compare::Field96); /*0x471475*/
  Format = (wchar_t *)a9; /*0x471489*/
  unk_89E008 = a8; /*0x471495*/
  unk_89DFD4 = a7; /*0x47149a*/
  v17 = *(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496); /*0x4714a0*/
  CampaignScore::LoadCampaignScoreAssetsGame(v17); /*0x4714a8*/
  Game::LoadMultiplayerScoreAssets(v17); /*0x4714af*/
  Screen::Capture(1, 0, ebx0, ebp0); /*0x4714b8*/
  Campaign::Screen(0); /*0x4714c9*/
  Map_Init_72D780(); /*0x4714ce*/
  FileSystem::CleanupTrees(); /*0x4714d3*/
  if ( Block ) /*0x4714da*/
  {
    if ( BYTE1(a4) ) /*0x4714e2*/
      __3_YAXPAX_Z((void *)Block); /*0x4714e5*/
  }
}


// ==== 0x00471500  CampaignScore::Constructor_CampaignScoreClass  this=CampaignScore  sig=csp ====
CampaignScore *__thiscall CampaignScore::Constructor_CampaignScoreClass(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CampaignScoreClass; /*0x471509*/
  if ( (a2 & 1) != 0 ) /*0x47150f*/
    __3_YAXPAX_Z(this); /*0x471512*/
  return (CampaignScore *)this; /*0x47151c*/
}


// ==== 0x00471520  CampaignScore::Constructor_CampaignEndScoreClass  this=CampaignEndScoreClass  sig=csp ====
std::locale::facet *__thiscall CampaignScore::Constructor_CampaignEndScoreClass(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CampaignEndScoreClass; /*0x471529*/
  if ( (a2 & 1) != 0 ) /*0x47152f*/
    __3_YAXPAX_Z(this); /*0x471532*/
  return this; /*0x47153c*/
}


// ==== 0x00471540  sub_471540  this=-  sig=ida-proto ====
void sub_471540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47154c*/
  unk_89E120 = Math::Sqrt(v0 + v0); /*0x47155e*/
}


// ==== 0x00471570  sub_471570  this=-  sig=ida-proto ====
void sub_471570()
{
  MEMORY[0x89E170] = unk_89E120 / 60.0; /*0x47157c*/
}


// ==== 0x00471590  sub_471590  this=-  sig=ida-proto ====
void sub_471590()
{
  MEMORY[0x89E158] = 1.0 / MEMORY[0x89E170]; /*0x47159c*/
}


// ==== 0x004715B0  sub_4715B0  this=-  sig=ida-proto ====
void sub_4715B0()
{
  MEMORY[0x89E150] = 0.0174532925199433 * 45.0; /*0x4715bc*/
}


// ==== 0x004715D0  sub_4715D0  this=-  sig=ida-proto ====
void sub_4715D0()
{
  unk_89E128 = 0.0174532925199433 * 60.0; /*0x4715dc*/
}


// ==== 0x004715F0  sub_4715F0  this=-  sig=ida-proto ====
void sub_4715F0()
{
  unk_89E0E8 = 0.0174532925199433 * 90.0; /*0x4715fc*/
}


// ==== 0x00471610  sub_471610  this=-  sig=ida-proto ====
__int64 sub_471610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89E0E8 - unk_89E128); /*0x471622*/
  result = Math::RoundToInt(v0 * unk_89E120 * 0.5); /*0x471636*/
  MEMORY[0x89E178] = result; /*0x47163b*/
  return result; /*0x471640*/
}


// ==== 0x00471650  sub_471650  this=-  sig=ida-proto ====
void sub_471650()
{
  unk_89E130 = Math::ArcTan((double)MEMORY[0x89E178] * 0.00390625); /*0x471667*/
}


// ==== 0x00471680  sub_471680  this=-  sig=ida-proto ====
void sub_471680()
{
  MEMORY[0x89E148] = Math::ArcTan((double)(2 * MEMORY[0x89E178]) / unk_89E120); /*0x4716a2*/
}


// ==== 0x004716B0  sub_4716B0  this=-  sig=ida-proto ====
__int64 sub_4716B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E178]) + 0.5); /*0x4716cb*/
  MEMORY[0x89E16C] = result; /*0x4716d0*/
  return result; /*0x4716d6*/
}


// ==== 0x004716E0  sub_4716E0  this=-  sig=ida-proto ====
int sub_4716E0()
{
  unk_89E118 = 0; /*0x4716e2*/
  unk_89E11A = 0; /*0x4716e8*/
  return 0; /*0x4716ee*/
}


// ==== 0x004716F0  sub_4716F0  this=-  sig=ida-proto ====
int sub_4716F0()
{
  stru_89E138 = 0; /*0x4716f2*/
  MEMORY[0x89E13C] = 0; /*0x4716f7*/
  MEMORY[0x89E140] = 0; /*0x4716fc*/
  return 0; /*0x471701*/
}


// ==== 0x00471710  sub_471710  this=-  sig=ida-proto ====
int sub_471710()
{
  MEMORY[0x89E168] = 0; /*0x471715*/
  MEMORY[0x89E160] = 128; /*0x47171f*/
  MEMORY[0x89E164] = 128; /*0x471724*/
  return 128; /*0x471729*/
}


// ==== 0x00471730  sub_471730  this=-  sig=ida-proto ====
int sub_471730()
{
  unk_89E108 = 0; /*0x471732*/
  unk_89E10C = 0; /*0x471737*/
  unk_89E110 = 0; /*0x47173c*/
  unk_89E114 = 0; /*0x471741*/
  return 0; /*0x471746*/
}


// ==== 0x00471750  sub_471750  this=-  sig=ida-proto ====
int sub_471750()
{
  unk_89E0F4 = 0; /*0x471757*/
  dword_89E0F8 = 0; /*0x47175c*/
  unk_89E0FC = 1; /*0x471761*/
  unk_89E0FD = 0; /*0x471768*/
  dword_89E0F0 = (int)&vt_DynamicVectorClass_CaptureManagerClass; /*0x47176d*/
  dword_89E104 = 10; /*0x471777*/
  dword_89E100 = 0; /*0x471781*/
  return atexit(sub_471790); /*0x47178c*/
}


// ==== 0x00471790  sub_471790  this=-  sig=ida-proto ====
void __cdecl sub_471790()
{
  dword_89E0F0 = (int)&vt_VectorClass_CaptureManagerClass; /*0x471798*/
  if ( unk_89E0F4 && unk_89E0FD ) /*0x4717ac*/
  {
    __3_YAXPAX_Z(unk_89E0F4); /*0x4717af*/
    unk_89E0F4 = 0; /*0x4717b7*/
  }
  unk_89E0FD = 0; /*0x4717bd*/
  dword_89E0F8 = 0; /*0x4717c3*/
}


// ==== 0x004717D0  CaptureManagerClass::CaptureManagerClass  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass_Constructor(int this, int a2, int a3, char a4)
{
  int v5; // eax

  AbstractClass::Constructor((#373 *)this); /*0x4717d3*/
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
  if ( MEMORY[0x89E100] < MEMORY[0x89E0F8] /*0x471868*/
    || (MEMORY[0x89E0FD] || !MEMORY[0x89E0F8])
    && MEMORY[0x89E104] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x89E0F0] + 8))(
         &MEMORY[0x89E0F0],
         MEMORY[0x89E0F8] + MEMORY[0x89E104],
         0) )
  {
    v5 = MEMORY[0x89E100]++; /*0x471875*/
    *((_DWORD *)MEMORY[0x89E0F4] + v5) = this; /*0x471884*/
  }
  return this; /*0x471889*/
}


// ==== 0x00471890  CaptureManagerClass::SmallFunc  this=CaptureManagerClass  sig=csp ====
int __thiscall sub_471890(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x471893*/
  *(_DWORD *)(this + 40) = 0; /*0x47189f*/
  *(_DWORD *)(this + 44) = 0; /*0x4718a2*/
  *(_BYTE *)(this + 48) = 1; /*0x4718a5*/
  *(_BYTE *)(this + 49) = 0; /*0x4718a8*/
  *(_DWORD *)(this + 36) = &vt_DynamicVectorClass_ControlNode; /*0x4718ab*/
  *(_DWORD *)(this + 56) = 10; /*0x4718b2*/
  *(_DWORD *)(this + 52) = 0; /*0x4718b9*/
  *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x4718bc*/
  *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x4718c2*/
  *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x4718c9*/
  *(_DWORD *)(this + 12) = &vt_CaptureManagerClass; /*0x4718d0*/
  *(_DWORD *)(this + 72) = 0; /*0x4718d7*/
  *(_DWORD *)(this + 60) = 1; /*0x4718da*/
  *(_BYTE *)(this + 64) = 0; /*0x4718dd*/
  *(_BYTE *)(this + 65) = 0; /*0x4718e0*/
  *(_DWORD *)(this + 76) = 30; /*0x4718e3*/
  *(_DWORD *)(this + 68) = 0; /*0x4718ea*/
  if ( dword_89E100 < dword_89E0F8 /*0x47191f*/
    || (unk_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v2 = dword_89E100++; /*0x47192c*/
    *((_DWORD *)unk_89E0F4 + v2) = this; /*0x47193b*/
  }
  return this; /*0x471940*/
}


// ==== 0x00471A50  CaptureManagerClass::HandleOverload  this=CaptureManagerClass  sig=csp ====
char __thiscall ProcessCashCrateEffect(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  void *v17; // eax
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

  LOBYTE(v2) = *(_BYTE *)(this + 64); /*0x471a59*/
  if ( (_BYTE)v2 ) /*0x471a5e*/
  {
    v3 = *(_DWORD *)(this + 68); /*0x471a64*/
    if ( v3 > 0 ) /*0x471a69*/
      *(_DWORD *)(this + 68) = v3 - 1; /*0x471a6c*/
    v4 = *(_DWORD *)(this + 76); /*0x471a6f*/
    if ( v4 <= 0 ) /*0x471a74*/
    {
      v5 = *(_DWORD *)(this + 52); /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = (_DWORD *)MEMORY[0x8871E0]->?[1]; /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( v5 > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= MEMORY[0x8871E0]->?[0] - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( v5 > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      *(_DWORD *)(this + 76) = *(_DWORD *)(HIDWORD(MEMORY[0x8871E0]->?) + 4 * v6); /*0x471abe*/
      v2 = *(_DWORD *)(MEMORY[0x8871E0]->?[0] + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        *(_BYTE *)(this + 65) = 0; /*0x471c83*/
      }
      else
      {
        v9 = *(_DWORD *)(this + 72); /*0x471adc*/
        *(_DWORD *)(this + 68) = 10; /*0x471adf*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 364))( /*0x471b04*/
          v9,
          &v23,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          0,
          0,
          0);
        if ( !*(_BYTE *)(this + 65) ) /*0x471b0a*/
        {
          v10 = (int *)(*(_DWORD *)(this + 72) + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(MEMORY[0x8871E0]->?, (int)&v24, 0); /*0x471b3f*/
          *(_BYTE *)(this + 65) = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(*(_DWORD *)(this + 72) + 156); /*0x471b58*/
          v12 = *(_DWORD *)(*(_DWORD *)(this + 72) + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471b98*/
          v15 = (int *)(*(_DWORD *)(this + 72) + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = __2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor((int)v17, MEMORY[0x8871E0]->?, v27, 0, 0, &stru_89E138, 0); /*0x471c15*/
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(_BYTE *)(*(_DWORD *)(this + 72) + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(*(_DWORD *)(this + 72) + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = v4 - 1; /*0x471a76*/
      *(_DWORD *)(this + 76) = v2; /*0x471a78*/
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
char __thiscall CaptureManagerClass::CaptureUnit(int this, int a2)
{
  char result; // al
  int v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int *v12; // ebp
  IUnknown *v13; // ecx
  IUnknown *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int v23; // eax
  IUnknown *v24; // ecx
  int v25; // edx
  AnimClass *v26; // eax
  void **v27; // eax
  AnimClass *v28; // eax
  int v29; // [esp+4h] [ebp-28h]
  IUnknown *v30; // [esp+8h] [ebp-24h]
  IUnknown *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+10h] [ebp-1Ch]
  CoordStruct aP2; // [esp+14h] [ebp-18h] BYREF
  int v34[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(_BYTE *)(a2 + 20) & 1) != 0 ? a2 : 0;
  result = CaptureManagerClass::CanCapture(this, (_DWORD *)v5); /*0x471d6e*/
  if ( result )
  {
    if ( *(_DWORD *)(this + 60) == 1 ) /*0x471d85*/
    {
      for ( i = *(_DWORD *)(this + 52) - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit( /*0x471d98*/
          **(IUnknown ***)(*(_DWORD *)(this + 40) + 4 * i),
          v29,
          v30,
          v31,
          v32,
          (IUnknown **)aP2.X);
    }
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 60))(v5); /*0x471da4*/
    v8 = *(_DWORD *)v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 60))(*(_DWORD *)(this + 72), 1); /*0x471db2*/
    result = (*(int (__thiscall **)(int, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = __2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x471ddc*/
        *(_DWORD *)(v11 + 16) = 0; /*0x471de2*/
        *(_DWORD *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (int *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(IUnknown **)(this + 44); /*0x471df3*/
      if ( *(_DWORD *)(this + 52) < (int)v14 /*0x471e18*/
        || (*(_BYTE *)(this + 49) || !v14)
        && (v15 = *(_DWORD *)(this + 56), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(this + 36) + 8))(
             this + 36,
             (char *)v14 + v15,
             0) )
      {
        v16 = *(_DWORD *)(this + 52); /*0x471e1f*/
        v17 = *(_DWORD *)(this + 40); /*0x471e22*/
        *(_DWORD *)(this + 52) = v16 + 1; /*0x471e28*/
        *(_DWORD *)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      *(_DWORD *)(v5 + 704) = *(_DWORD *)(this + 72); /*0x471e34*/
      v19 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 784); /*0x471e45*/
      *v18 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x471e4b*/
      v18[1] = aP2.Y; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) != 1
        || !*(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 1 ? v5 + 0x6C4 : 1732) + 3603)
        || *(_DWORD *)(v5 + 172) != 16 )
      {
        v20 = *(_DWORD *)(v5 + 172); /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((_DWORD *)this, (IUnknown *)v5); /*0x471eae*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x471ec1*/
      {
        v21 = a2; /*0x471ecb*/
        v22 = stru_89E138.field_40 * *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 72))(v5, v34); /*0x471ee1*/
      v24 = *(IUnknown **)v23; /*0x471f04*/
      v25 = *(_DWORD *)(v23 + 4); /*0x471f06*/
      v26 = (AnimClass *)(v22 + *(_DWORD *)(v23 + 8)); /*0x471f11*/
      aP2.X = (int)v24; /*0x471f13*/
      aP2.Y = v25; /*0x471f17*/
      aP2.Z = (int)v26; /*0x471f1b*/
      v27 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = AnimClass::ctor( /*0x471f4c*/
                v27,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 800),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      else
        v28 = 0; /*0x471f53*/
      *(_DWORD *)(v5 + 712) = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, (IUnknown *)v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(_DWORD *)(*(_DWORD *)(v5 + 712) + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/
}


// ==== 0x00471F90  ObjectClass::RemoveFromPointerList  this=FootClass  sig=csp ====
char __thiscall sub_471F90(int *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = this->attachedTag - 1; /*0x471f97*/
  if ( v3 < 0 ) /*0x471f98*/
    return 1; /*0x471fe7*/
  do /*0x471fdc*/
  {
    v4 = *(_DWORD **)(this->owningHouseIndex + 4 * v3); /*0x471fa2*/
    if ( *v4 == a2 ) /*0x471fa7*/
    {
      if ( v4 ) /*0x471fab*/
        __3_YAXPAX_Z(*(void **)(this->owningHouseIndex + 4 * v3)); /*0x471fae*/
      v5 = this->attachedTag; /*0x471fb6*/
      if ( v3 < v5 ) /*0x471fbb*/
      {
        v6 = v5 - 1; /*0x471fbd*/
        v7 = v3; /*0x471fc0*/
        for ( this->attachedTag = v6; /*0x471fc7*/
              v7 < this->attachedTag;
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
char CaptureManagerClass::FreeUnit(IUnknown *aP0, int _28, IUnknown *a2, IUnknown *aP1, int _34, IUnknown **a5)
{
  _DWORD *v6; // ecx
  int v7; // ebx
  IUnknown *v8; // ebp
  _DWORD *v9; // edi
  int v11; // ebx
  IUnknown **v12; // ebp
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  IUnknown *v20; // [esp-8h] [ebp-28h]
  int v21; // [esp-4h] [ebp-24h]
  int v22[3]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  v9 = v6; /*0x471ff9*/
  if ( !aP0 ) /*0x471ffd*/
    return 0; /*0x472000*/
  v21 = v7; /*0x472009*/
  v11 = v6[13] - 1; /*0x47200d*/
  if ( v11 >= 0 ) /*0x47200e*/
  {
    v20 = v8; /*0x472014*/
    do /*0x47212b*/
    {
      v12 = *(IUnknown ***)(v9[10] + 4 * v11); /*0x472018*/
      if ( *v12 == aP0 ) /*0x472022*/
      {
        v13 = *(_DWORD *)&aP0->__pad_2B8[16]; /*0x472028*/
        if ( v13 ) /*0x472030*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 248))(v13); /*0x472034*/
          *(_DWORD *)&aP0->__pad_2B8[16] = 0; /*0x47203a*/
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(IUnknown *, IUnknown *, int))(aP0->field_0 + 132))(aP0, v20, v21) + 1456) == -1 ) /*0x472059*/
        {
          if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 612) != -1 ) /*0x4720a3*/
          {
            v23 = aP0->field_9C; /*0x4720af*/
            retaddr = *(_UNKNOWN **)aP0->__pad_A0; /*0x4720b6*/
            StartAudioControllerAt(*(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 612), (int)&v23, 0); /*0x4720cb*/
          }
        }
        else
        {
          v22[0] = aP0->field_9C; /*0x472069*/
          v14 = aP0->field_0; /*0x47206d*/
          v22[1] = *(_DWORD *)aP0->__pad_A0; /*0x472072*/
          v22[2] = aP0->field_A4; /*0x472079*/
          v15 = (*(int (__thiscall **)(IUnknown *))(v14 + 132))(aP0); /*0x47207f*/
          StartAudioControllerAt(*(AudioController **)(v15 + 1456), (int)v22, 0); /*0x47208d*/
          v12 = (IUnknown **)a2; /*0x472092*/
        }
        v21 = 1; /*0x4720d5*/
        v20 = v12[1]; /*0x4720d7*/
        (*(void (__thiscall **)(IUnknown *))(aP0->field_0 + 980))(aP0); /*0x4720da*/
        CaptureManagerClass::DecideUnitFate(v9, aP0); /*0x4720e3*/
        *(_DWORD *)&aP0->__pad_2B8[8] = 0; /*0x4720e8*/
        v16 = v9[10]; /*0x4720f2*/
        if ( *(_DWORD *)(v16 + 4 * v11) ) /*0x4720f5*/
          __3_YAXPAX_Z(*(void **)(v16 + 4 * v11)); /*0x4720fd*/
        v17 = v9[13]; /*0x472105*/
        if ( v11 < v17 ) /*0x47210a*/
        {
          v18 = v17 - 1; /*0x47210c*/
          v19 = v11; /*0x47210f*/
          for ( v9[13] = v18; v19 < v9[13]; *(_DWORD *)(v9[10] + 4 * v19 - 4) = *(_DWORD *)(v9[10] + 4 * v19) ) /*0x472116*/
            ++v19; /*0x47211b*/
        }
      }
      --v11; /*0x47212a*/
    }
    while ( v11 >= 0 ); /*0x47212b*/
  }
  return 1; /*0x471fff*/
}


// ==== 0x00472160  CaptureManagerClass::DrawLinks  this=CaptureManagerClass  sig=csp ====
char CaptureManagerClass::DrawLinks(int a1, ...)
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

  va_start(va, a1);
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
      if ( (int)MEMORY[0xA8ED84] - v9 < v8 ) /*0x4721ad*/
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
    v8 -= (int)MEMORY[0xA8ED84] - v9; /*0x4721af*/
LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/
}


// ==== 0x004722A0  CaptureManagerClass::CannotControlAnyMore  this=CaptureManagerClass  sig=csp ====
bool __thiscall CaptureManagerClass::CannotControlAnyMore(int this)
{
  return !*(_BYTE *)(this + 64) && *(_DWORD *)(this + 52) >= *(_DWORD *)(this + 60); /*0x4722a7*/
}


// ==== 0x004722C0  CellClass::HasContent  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::HasContent(_DWORD *this)
{
  return this->attached3 > 0; /*0x4722ca*/
}


// ==== 0x004722D0  TechnoClass::processPowerDrain  this=FootClass  sig=csp ====
int __thiscall sub_4722D0(_DWORD *this)
{
  return this->attachedTag; /*0x4722d3*/
}


// ==== 0x004722F0  CaptureManagerClass::GetOriginalOwner  this=CaptureManagerClass  sig=csp ====
int __thiscall CaptureManagerClass::GetOriginalOwner(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  _DWORD **i; // ecx

  v2 = this->originalOwner - 1; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  v3 = this->controlNodeCount; /*0x4722f8*/
  for ( i = (_DWORD **)(v3 + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(_DWORD *)(*(_DWORD *)(v3 + 4 * v2) + 4); /*0x472310*/
}


// ==== 0x00472330  HouseClass::AssignCivilianToLowPowerTargets  this=HouseClass  sig=csp ====
char __thiscall sub_472330(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ecx
  HouseClass *i; // edx
  int v8; // ecx
  int j; // edx
  _DWORD *v10; // eax

  v2 = HouseClass_Count; /*0x472333*/
  v4 = HouseTypeClass::Find(MEMORY[0x818164]); /*0x472341*/
  v5 = 0; /*0x472346*/
  if ( v2 <= 0 ) /*0x47234a*/
    return 0; /*0x47234a*/
  for ( i = HouseClass_Array; /*0x472352*/
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i->__pad_0 + 52) + 188) != v4;
        i = (HouseClass *)((char *)i + 4) )
  {
    if ( ++v5 >= v2 ) /*0x472367*/
      return 0; /*0x47236f*/
  }
  v8 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v5]; /*0x472372*/
  if ( !v8 ) /*0x472377*/
    return 0; /*0x47237c*/
  for ( j = this->relatedTagsCapacity - 1; j >= 0; --j ) /*0x472386*/
  {
    v10 = *(_DWORD **)(this->buildingType + 4 * j); /*0x47238f*/
    if ( *v10 == a2 ) /*0x472394*/
      v10[1] = v8; /*0x472396*/
  }
  return 1; /*0x472369*/
}


// ==== 0x004723B0  CaptureManagerClass::DecideUnitFate  this=CaptureManagerClass  sig=csp ====
void __thiscall CaptureManagerClass::DecideUnitFate(_DWORD *this, IUnknown *aP1)
{
  AbstractClass *v3; // edi
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // ecx
  int v8; // eax
  AbstractClass **v9; // esi
  int v10; // ebp
  int v11; // eax
  bool cc21; // cc
  AbstractClass *v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  void *ecx31; // ecx
  char v19; // al
  AbstractClass *v18; // [esp-4h] [ebp-24h]
  AbstractClass *v21; // [esp+10h] [ebp-10h]
  AbstractClass *v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+18h] [ebp-8h]
  bool aP1a; // [esp+24h] [ebp+4h]

  v3 = 0; /*0x4723bb*/
  if ( !aP1 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (aP1->__pad_10[4] & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(_DWORD *)&aP1->__pad_524[176]; /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, aP1, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(_DWORD **)&aP1->__pad_220[84]; /*0x4723e4*/
  if ( v6 && v6[10] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes(aP1, 0); /*0x47240f*/
  v7 = aP1->field_21C; /*0x472417*/
  v8 = *(_DWORD *)(this->overloadCount + 540); /*0x472422*/
  aP1a = v7 != v8; /*0x47242c*/
  if ( *(_BYTE *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v21 = 0; /*0x472446*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 36) + 24))(v8 + 36) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] /*0x472459*/
                                                                                     + 3772) )
  {
    if ( HouseClass::GetPowerRatio((int *)*(_DWORD *)(this->overloadCount + 540)) >= 1.0 ) /*0x472480*/
    {
      v23 = (float)*(int *)&aP1->__pad_68[4]; /*0x47249e*/
      if ( v23 / (double)*(int *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 160) >= *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3776) ) /*0x4724c3*/
        v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3660); /*0x4724dd*/
      else
        v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3688); /*0x4724cd*/
    }
    else
    {
      v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3716); /*0x47248f*/
    }
  }
  else
  {
    v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3744); /*0x47245f*/
  }
  v10 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)1, (IUnknown *)0x64); /*0x4724f7*/
  v24 = 0; /*0x4724f9*/
  if ( v10 <= 0 )
  {
LABEL_22:
    v12 = v21; /*0x472537*/
    (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    v14 = this->overloadCount; /*0x47256f*/
    if ( v14 ) /*0x472574*/
    {
      if ( (*(_BYTE *)(v14 + 20) & 4) != 0 ) /*0x47257a*/
      {
        v15 = *(_DWORD *)(v14 + 1492); /*0x47257c*/
        if ( v15 ) /*0x472584*/
        {
          v16 = *(_DWORD *)(v15 + 36); /*0x472586*/
          if ( *(_DWORD *)(v16 + 192) ) /*0x472589*/
          {
            v22 = *(AbstractClass **)(v16 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v12 = v22; /*0x4725a9*/
          }
        }
      }
    }
    if ( v12 == (AbstractClass *)1 )
    {
      if ( !aP1a )
      {
        v17 = this->overloadCount; /*0x4725bd*/
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 20) & 4) != 0 )
          {
            ecx31 = *(void **)(v17 + 1492); /*0x4725ca*/
            if ( ecx31 )
            {
              v19 = CaptureManagerClass::AddMember(ecx31, (aP1->__pad_10[4] & 4) != 0 ? (TechnoClass *)aP1 : 0);
              goto LABEL_33; /*0x4725e0*/
            }
          }
        }
      }
LABEL_34:
      Debug::Log(); /*0x4725e9*/
      (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 15, 0); /*0x4725fe*/
      return; /*0x4725fe*/
    }
    if ( v12 == (AbstractClass *)2 ) /*0x472611*/
    {
      v19 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 828))(aP1); /*0x472617*/
    }
    else
    {
      if ( v12 != (AbstractClass *)3 ) /*0x472622*/
      {
        if ( v12 == (AbstractClass *)5 ) /*0x472633*/
          return; /*0x472633*/
        goto LABEL_34; /*0x472633*/
      }
      v19 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 832))(aP1); /*0x472628*/
    }
LABEL_33:
    if ( v19 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v21 != (AbstractClass *)6 && v3 != v9[4] ) /*0x47250f*/
  {
    v21 = (AbstractClass *)((char *)v21 + 1); /*0x47251e*/
    v18 = v3; /*0x472524*/
    v3 = (AbstractClass *)((char *)v3 + 1); /*0x472525*/
    v11 = ((int (__thiscall *)(AbstractClass **, AbstractClass *))(*v9)->nextArrayIndex)(v9, v18); /*0x472526*/
    cc21 = v10 <= v11 + v24; /*0x47252f*/
    v24 += v11; /*0x472531*/
    if ( cc21 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }
}


// ==== 0x00472640  CaptureManagerClass::NeedsToDrawLinks  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::NeedsToDrawLinks(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  v1 = this->overloadCount; /*0x472640*/
  if ( *(_BYTE *)(v1 + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(_DWORD *)(v1 + 284); /*0x472656*/
  if ( v3 && *(_BYTE *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = this->originalOwner - 1; /*0x472673*/
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
      if ( (int)MEMORY[0xA8ED84] - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x4726a3*/
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
int __thiscall CaptureManagerClass::_vt13(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax

  result = AbstractClass::ProcessPower((#378 *)this); /*0x4726f9*/
  v4 = *(_DWORD *)(this + 72); /*0x4726fe*/
  if ( v4 ) /*0x472703*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x47270c*/
    return Power::TimerProcess(v5); /*0x472712*/
  }
  return result; /*0x472717*/
}


// ==== 0x00472720  CaptureManagerClass::LoadFromStream  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::LoadFromStream(int a1, int *a2)
{
  int *v2; // ebx
  int v3; // ebp
  int result; // eax
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  wchar_t *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = a1; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((_DWORD *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140(0, 0); /*0x472757*/
      *(_DWORD *)(v3 + 36) = &vt_DynamicVectorClass_ControlNode; /*0x47275c*/
      *(_DWORD *)(v3 + 56) = 10; /*0x472762*/
      *(_DWORD *)(v3 + 52) = 0; /*0x472769*/
      *(_DWORD *)v3 = &CaptureManagerClass::`vftable'; /*0x47276c*/
      *(_DWORD *)(v3 + 4) = &CaptureManagerClass::`vftable'; /*0x472773*/
      *(_DWORD *)(v3 + 8) = &CaptureManagerClass::`vftable'; /*0x47277a*/
      *(_DWORD *)(v3 + 12) = &vt_CaptureManagerClass; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 72)); /*0x472791*/
    v6 = *v2; /*0x472796*/
    a1 = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a1, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = a1; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( a1 <= 0 ) /*0x4727be*/
      {
LABEL_19:
        v15 = 0; /*0x472894*/
        if ( v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&MEMORY[0xB0C110],
              (int *)(*(_DWORD *)(*(_DWORD *)(v3 + 40) + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], *(int **)(*(_DWORD *)(v3 + 40) + 4 * v15++)); /*0x4728ba*/
          }
          while ( v15 < a1 ); /*0x4728c4*/
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
            v9 = MEMORY[0xA8ED84]; /*0x4727d6*/
            v8[4] = 0; /*0x4727dc*/
            v8[2] = v9; /*0x4727df*/
            v5 = v8; /*0x4727e2*/
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
          v5[2] = MEMORY[0xA8ED84]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          v11 = *(_DWORD *)(v3 + 44); /*0x472844*/
          if ( *(_DWORD *)(v3 + 52) < v11 /*0x472867*/
            || (*(_BYTE *)(v3 + 49) || !v11)
            && (v12 = *(_DWORD *)(v3 + 56), v12 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 36) + 8))(v3 + 36, v11 + v12, 0) )
          {
            v13 = *(_DWORD *)(v3 + 52); /*0x47286e*/
            v14 = *(_DWORD *)(v3 + 40); /*0x472871*/
            *(_DWORD *)(v3 + 52) = v13 + 1; /*0x472877*/
            *(_DWORD *)(v14 + 4 * v13) = v5; /*0x47287a*/
          }
          v7 = a1; /*0x472881*/
          if ( ++v17 >= a1 ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return result; /*0x4728ca*/
}


// ==== 0x004728E0  CaptureManagerClass::SaveToINI  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int Prefix; // edi
  int v5; // edx
  int result; // eax
  int v7; // ebp
  int v8; // edi
  ObjectTypeClass *aP1; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4728f8*/
  aP1 = (ObjectTypeClass *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a1; /*0x472905*/
  aP2 = *(_DWORD *)&aP0->BarrelVoxel[16]; /*0x472911*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( aP2 <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)&aP0->BarrelVoxel[4] + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= aP2 ) /*0x472950*/
      return (int)aP1->__pad_0; /*0x472952*/
  }
  return result; /*0x472958*/
}


// ==== 0x00472960  CaptureManagerClass::GetClassIdentifier  this=CaptureManagerClass  sig=csp ====
int __stdcall CaptureManagerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = 1822515787; /*0x472990*/
  return 0; /*0x47296d*/
}


// ==== 0x004729A0  CaptureManagerClass::GetObjectSize  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::_vt12()
{
  return 80; /*0x4729a5*/
}


// ==== 0x004729B0  CaptureManagerClass::GetTypeIdentifier  this=CaptureManagerClass  sig=csp ====
int CaptureManagerClass::_vt11()
{
  return 66; /*0x4729b5*/
}


// ==== 0x004729C0  CaptureManagerClass::ddtor  this=CaptureManagerClass  sig=csp ====
CaptureManagerClass *__thiscall CaptureManagerClass::ddtor(_DWORD *Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &CaptureManagerClass::`vftable'; /*0x4729cd*/
  *(Block + 1) = &CaptureManagerClass::`vftable'; /*0x4729d3*/
  *(Block + 2) = &CaptureManagerClass::`vftable'; /*0x4729da*/
  *(Block + 3) = &vt_CaptureManagerClass; /*0x4729e1*/
  v6 = Block; /*0x4729ef*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((_DWORD *)unk_89E0F4 + v3 - 1) = *((_DWORD *)unk_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  v4 = (void *)*(Block + 10); /*0x472a28*/
  *(Block + 9) = &vt_VectorClass_ControlNode; /*0x472a2b*/
  if ( v4 && *((_BYTE *)Block + 49) ) /*0x472a36*/
  {
    __3_YAXPAX_Z(v4); /*0x472a3e*/
    *(Block + 10) = 0; /*0x472a46*/
  }
  *((_BYTE *)Block + 49) = 0; /*0x472a4f*/
  *(Block + 11) = 0; /*0x472a53*/
  AbstractClass::DTOR(Block); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    __3_YAXPAX_Z(Block); /*0x472a67*/
  return (CaptureManagerClass *)Block; /*0x472a71*/
}


// ==== 0x00472A80  _DynamicVectorClass_PAUControlNode::vt[03]  this=DynamicVector  sig=csp ====
void __thiscall CaptureManagerClass::vt_03_(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x472a86*/
  *(_DWORD *)(this + 16) = 0; /*0x472a89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x472a90*/
  {
    __3_YAXPAX_Z(v2); /*0x472a96*/
    *(_DWORD *)(this + 4) = 0; /*0x472a9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x472aa1*/
  *(_DWORD *)(this + 8) = 0; /*0x472aa4*/
}


// ==== 0x00472AB0  _DynamicVectorClass_PAUControlNode::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall CaptureManagerClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472ab0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/
}


// ==== 0x00472AD0  _VectorClass_PAUControlNode::vt[06]  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::vt_06_(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x472ada*/
}


// ==== 0x00472AE0  _DynamicVectorClass_PAVCaptureManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::sub_472AE0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x472ae6*/
  *(_DWORD *)(this + 16) = 0; /*0x472ae9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x472af0*/
  {
    __3_YAXPAX_Z(v2); /*0x472af6*/
    *(_DWORD *)(this + 4) = 0; /*0x472afe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x472b01*/
  *(_DWORD *)(this + 8) = 0; /*0x472b04*/
}


// ==== 0x00472B10  _DynamicVectorClass_PAVCaptureManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::sub_472B10(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472b10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472b25*/
  else
    return 0; /*0x472b17*/
}


// ==== 0x00472B30  _VectorClass_PAVCaptureManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x472b3a*/
}


// ==== 0x00472B40  _VectorClass_PAUControlNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x472b42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x472b4d*/
  {
    v3 = 0; /*0x472b4f*/
    if ( v2 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    v4 = (_DWORD *)this->Items; /*0x472b55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472b5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472b64*/
    {
      ++v3; /*0x472b66*/
      ++v4; /*0x472b67*/
      if ( v3 >= v2 ) /*0x472b6c*/
        return 1; /*0x472b6c*/
    }
  }
  return 0; /*0x472b6e*/
}


// ==== 0x00472B80  _VectorClass_PAUControlNode::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall CaptureManagerClass::sub_472B80(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x472b8c*/
  {
    this->IsInitialized = 0; /*0x472b96*/
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472bae*/
    this->IsInitialized = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( this->Items ) /*0x472bc5*/
      {
        v6 = this->Capacity; /*0x472bcc*/
        if ( a2 < v6 ) /*0x472bd1*/
          v6 = a2; /*0x472bd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( this->IsAllocated ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x472bf6*/
          this->Items = 0; /*0x472bfe*/
        }
      }
      this->Items = v4; /*0x472c07*/
      this->Capacity = a2; /*0x472c0f*/
      this->IsAllocated = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }
}


// ==== 0x00472C30  _VectorClass_PAUControlNode::Destroy  this=VectorClass  sig=csp ====
void __thiscall CaptureManagerClass::sub_472C30(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x472c3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x472c43*/
    *(_DWORD *)(this + 4) = 0; /*0x472c4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x472c4e*/
  *(_DWORD *)(this + 8) = 0; /*0x472c51*/
}


// ==== 0x00472C60  _VectorClass_PAUControlNode::IndexOf  this=VectorClass  sig=csp ====
int __thiscall CaptureManagerClass::sub_472C60(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x472c60*/
    return 0; /*0x472c68*/
  v3 = *(_DWORD *)(this + 8); /*0x472c6e*/
  result = 0; /*0x472c71*/
  if ( v3 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= v3 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/
}


// ==== 0x00472CA0  _VectorClass_PAUControlNode::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall CaptureManagerClass::sub_472CA0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472ca0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/
}


// ==== 0x00472CC0  _DynamicVectorClass_PAUControlNode::Release  this=DynamicVector  sig=csp ====
char __thiscall CaptureManagerClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472ccc*/
  {
    this->IsInitialized = 0; /*0x472cd2*/
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472cea*/
    this->IsInitialized = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( this->Items ) /*0x472cf8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x472cff*/
      if ( a2 < v5 ) /*0x472d04*/
        v5 = a2; /*0x472d06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( this->IsAllocated ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x472d29*/
        this->Items = 0; /*0x472d31*/
      }
    }
    this->Items = v4; /*0x472d3a*/
    this->DynamicVector_field_0x8 = a2; /*0x472d42*/
    this->IsAllocated = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x472d4e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x472d51*/
  if ( v7 < this->Items ) /*0x472d59*/
    this->Items = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/
}


// ==== 0x00472D70  _DynamicVectorClass_PAUControlNode::Capture  this=DynamicVector  sig=csp ====
int __thiscall CaptureManagerClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( v2 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= v2 ) /*0x472d8d*/
      return -1; /*0x472d8d*/
  }
  return result; /*0x472d92*/
}


// ==== 0x00472DA0  _VectorClass_PAVCaptureManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x472da2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x472dad*/
  {
    v3 = 0; /*0x472daf*/
    if ( v2 <= 0 ) /*0x472db3*/
      return 1; /*0x472dd3*/
    v4 = (_DWORD *)this->Items; /*0x472db5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472dbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472dc4*/
    {
      ++v3; /*0x472dc6*/
      ++v4; /*0x472dc7*/
      if ( v3 >= v2 ) /*0x472dcc*/
        return 1; /*0x472dcc*/
    }
  }
  return 0; /*0x472dce*/
}


// ==== 0x00472DE0  _VectorClass_PAVCaptureManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x472dec*/
  {
    this->IsInitialized = 0; /*0x472df6*/
    if ( a3 ) /*0x472dfc*/
      v4 = a3; /*0x472e12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472e0e*/
    this->IsInitialized = 1; /*0x472e16*/
    if ( v4 ) /*0x472e1a*/
    {
      if ( this->Items ) /*0x472e25*/
      {
        v6 = this->Capacity; /*0x472e2c*/
        if ( a2 < v6 ) /*0x472e31*/
          v6 = a2; /*0x472e33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472e39*/
          ++i; /*0x472e3e*/
        if ( this->IsAllocated ) /*0x472e4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x472e56*/
          this->Items = 0; /*0x472e5e*/
        }
      }
      this->Items = v4; /*0x472e67*/
      this->Capacity = a2; /*0x472e6f*/
      this->IsAllocated = a3 == 0; /*0x472e72*/
      return 1; /*0x472e78*/
    }
    else
    {
      return 0; /*0x472e1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x472e82*/
    return 1; /*0x472e88*/
  }
}


// ==== 0x00472E90  _VectorClass_PAVCaptureManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CaptureManagerClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x472e9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x472ea3*/
    *(_DWORD *)(this + 4) = 0; /*0x472eab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x472eae*/
  *(_DWORD *)(this + 8) = 0; /*0x472eb1*/
}


// ==== 0x00472EC0  _VectorClass_PAVCaptureManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x472ec0*/
    return 0; /*0x472ec8*/
  v3 = *(_DWORD *)(this + 8); /*0x472ece*/
  result = 0; /*0x472ed1*/
  if ( v3 <= 0 ) /*0x472ed5*/
    return -1; /*0x472eec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x472edb*/
  {
    if ( ++result >= v3 ) /*0x472eea*/
      return -1; /*0x472eea*/
  }
  return result; /*0x472eca*/
}


// ==== 0x00472F00  _VectorClass_PAVCaptureManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CaptureManagerClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472f00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472f15*/
  else
    return 0; /*0x472f07*/
}


// ==== 0x00472F20  _DynamicVectorClass_PAVCaptureManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CaptureManagerClass::sub_472F20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472f2c*/
  {
    this->IsInitialized = 0; /*0x472f32*/
    if ( a3 ) /*0x472f38*/
      v4 = a3; /*0x472f4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472f4a*/
    this->IsInitialized = 1; /*0x472f52*/
    if ( !v4 ) /*0x472f56*/
      return 0; /*0x472fca*/
    if ( this->Items ) /*0x472f58*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x472f5f*/
      if ( a2 < v5 ) /*0x472f64*/
        v5 = a2; /*0x472f66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472f6c*/
        ++i; /*0x472f71*/
      if ( this->IsAllocated ) /*0x472f7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x472f89*/
        this->Items = 0; /*0x472f91*/
      }
    }
    this->Items = v4; /*0x472f9a*/
    this->DynamicVector_field_0x8 = a2; /*0x472fa2*/
    this->IsAllocated = a3 == 0; /*0x472fa5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x472fae*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x472fb1*/
  if ( v7 < this->Items ) /*0x472fb9*/
    this->Items = v7; /*0x472fbb*/
  return 1; /*0x472fbe*/
}


// ==== 0x00472FD0  _DynamicVectorClass_PAVCaptureManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CaptureManagerClass::sub_472FD0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x472fd0*/
  result = 0; /*0x472fd3*/
  if ( v2 <= 0 ) /*0x472fd8*/
    return -1; /*0x472fef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x472fde*/
  {
    if ( ++result >= v2 ) /*0x472fed*/
      return -1; /*0x472fed*/
  }
  return result; /*0x472ff2*/
}


// ==== 0x00473000  _VectorClass_PAUControlNode::Constructor_VectorClass_ControlNode___  this=VectorClass  sig=csp ====
VectorClass *__thiscall CaptureManagerClass::Constructor_VectorClass_ControlNode___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x473003*/
  *Block = &vt_VectorClass_ControlNode; /*0x473006*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x473010*/
  {
    __3_YAXPAX_Z(v3); /*0x473018*/
    *(Block + 1) = 0; /*0x473020*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47302b*/
  *(Block + 2) = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    __3_YAXPAX_Z(Block); /*0x47303b*/
  return (VectorClass *)Block; /*0x473045*/
}


// ==== 0x00473050  _DynamicVectorClass_PAUControlNode::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CaptureManagerClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x473053*/
  *Block = &vt_VectorClass_ControlNode; /*0x473056*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x473060*/
  {
    __3_YAXPAX_Z(v3); /*0x473068*/
    *(Block + 1) = 0; /*0x473070*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47307b*/
  *(Block + 2) = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    __3_YAXPAX_Z(Block); /*0x47308b*/
  return (DynamicVector *)Block; /*0x473095*/
}


// ==== 0x004730A0  _VectorClass_PAVCaptureManagerClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_CaptureManagerClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4730a3*/
  *Block = &vt_VectorClass_CaptureManagerClass; /*0x4730a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4730b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4730b8*/
    *(Block + 1) = 0; /*0x4730c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4730cb*/
  *(Block + 2) = 0; /*0x4730d1*/
  if ( (a2 & 1) != 0 ) /*0x4730d8*/
    __3_YAXPAX_Z(Block); /*0x4730db*/
  return (VectorClass *)Block; /*0x4730e5*/
}


// ==== 0x004730F0  _DynamicVectorClass_PAVCaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4730f3*/
  *Block = &vt_VectorClass_CaptureManagerClass; /*0x4730f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x473100*/
  {
    __3_YAXPAX_Z(v3); /*0x473108*/
    *(Block + 1) = 0; /*0x473110*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47311b*/
  *(Block + 2) = 0; /*0x473121*/
  if ( (a2 & 1) != 0 ) /*0x473128*/
    __3_YAXPAX_Z(Block); /*0x47312b*/
  return (DynamicVector *)Block; /*0x473135*/
}


// ==== 0x00473140  CaptureManagerClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_473140(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x47314b*/
  this->Capacity = a2; /*0x47314e*/
  this->q030 = 1; /*0x473151*/
  this->__pad_034 = 0; /*0x473155*/
  *this = &vt_VectorClass_ControlNode; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->Items = a3; /*0x473168*/
      return this; /*0x47316e*/
    }
    this->Items = OperatorNew(4 * a2); /*0x47317d*/
    this->__pad_034 = 1; /*0x473180*/
  }
  return this; /*0x47316d*/
}


// ==== 0x00473190  sub_473190  this=-  sig=ida-proto ====
void sub_473190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47319c*/
  MEMORY[0x89E1A0] = Math::Sqrt(v0 + v0); /*0x4731ae*/
}


// ==== 0x004731C0  sub_4731C0  this=-  sig=ida-proto ====
void sub_4731C0()
{
  MEMORY[0x89E1F0] = MEMORY[0x89E1A0] / 60.0; /*0x4731cc*/
}


// ==== 0x004731E0  sub_4731E0  this=-  sig=ida-proto ====
void sub_4731E0()
{
  MEMORY[0x89E1D8] = 1.0 / MEMORY[0x89E1F0]; /*0x4731ec*/
}


// ==== 0x00473200  sub_473200  this=-  sig=ida-proto ====
void sub_473200()
{
  MEMORY[0x89E1D0] = 0.0174532925199433 * 45.0; /*0x47320c*/
}


// ==== 0x00473220  sub_473220  this=-  sig=ida-proto ====
void sub_473220()
{
  MEMORY[0x89E1A8] = 0.0174532925199433 * 60.0; /*0x47322c*/
}


// ==== 0x00473240  sub_473240  this=-  sig=ida-proto ====
void sub_473240()
{
  MEMORY[0x89E180] = 0.0174532925199433 * 90.0; /*0x47324c*/
}


// ==== 0x00473260  sub_473260  this=-  sig=ida-proto ====
__int64 sub_473260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E180] - MEMORY[0x89E1A8]); /*0x473272*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E1A0] * 0.5); /*0x473286*/
  MEMORY[0x89E1F8] = result; /*0x47328b*/
  return result; /*0x473290*/
}


// ==== 0x004732A0  sub_4732A0  this=-  sig=ida-proto ====
void sub_4732A0()
{
  MEMORY[0x89E1B0] = Math::ArcTan((double)MEMORY[0x89E1F8] * 0.00390625); /*0x4732b7*/
}


// ==== 0x004732D0  sub_4732D0  this=-  sig=ida-proto ====
void sub_4732D0()
{
  MEMORY[0x89E1C8] = Math::ArcTan((double)(2 * MEMORY[0x89E1F8]) / MEMORY[0x89E1A0]); /*0x4732f2*/
}


// ==== 0x00473300  sub_473300  this=-  sig=ida-proto ====
__int64 sub_473300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E1F8]) + 0.5); /*0x47331b*/
  MEMORY[0x89E1EC] = result; /*0x473320*/
  return result; /*0x473326*/
}


// ==== 0x00473330  sub_473330  this=-  sig=ida-proto ====
int sub_473330()
{
  MEMORY[0x89E198] = 0; /*0x473332*/
  MEMORY[0x89E19A] = 0; /*0x473338*/
  return 0; /*0x47333e*/
}


// ==== 0x00473340  sub_473340  this=-  sig=ida-proto ====
int sub_473340()
{
  MEMORY[0x89E1B8] = 0; /*0x473342*/
  MEMORY[0x89E1BC] = 0; /*0x473347*/
  MEMORY[0x89E1C0] = 0; /*0x47334c*/
  return 0; /*0x473351*/
}


// ==== 0x00473360  sub_473360  this=-  sig=ida-proto ====
int sub_473360()
{
  MEMORY[0x89E1E8] = 0; /*0x473365*/
  MEMORY[0x89E1E0] = 128; /*0x47336f*/
  MEMORY[0x89E1E4] = 128; /*0x473374*/
  return 128; /*0x473379*/
}


// ==== 0x00473380  sub_473380  this=-  sig=ida-proto ====
int sub_473380()
{
  MEMORY[0x89E188] = 0; /*0x473382*/
  MEMORY[0x89E18C] = 0; /*0x473387*/
  MEMORY[0x89E190] = 0; /*0x47338c*/
  MEMORY[0x89E194] = 0; /*0x473391*/
  return 0; /*0x473396*/
}


// ==== 0x004733A0  CellClass::AddObject  this=TechnoClass  sig=csp ====
void __thiscall CellClass::AddObject(_DWORD *this, IUnknown *aP1)
{
  IUnknown *v2; // esi
  IUnknown *v4; // eax
  int v5; // ecx
  IUnknown *v6; // eax

  v2 = aP1; /*0x4733a1*/
  if ( aP1 ) /*0x4733aa*/
  {
    (*(void (__thiscall **)(IUnknown *))(aP1->field_0 + 212))(aP1); /*0x4733b0*/
    v4 = *(IUnknown **)&aP1->__pad_28[8]; /*0x4733b6*/
    if ( v4 && (v4->__pad_10[4] & 4) != 0 ) /*0x4733ca*/
    {
      while ( 1 ) /*0x4733d0*/
      {
        v5 = *(_DWORD *)&v4->__pad_28[8]; /*0x4733d0*/
        if ( !v5 ) /*0x4733d5*/
          break; /*0x4733d5*/
        if ( (*(_BYTE *)(v5 + 20) & 4) == 0 ) /*0x4733e4*/
          goto LABEL_8; /*0x4733e4*/
        v4 = *(IUnknown **)&v4->__pad_28[8]; /*0x4733e6*/
      }
      *(_DWORD *)&v4->__pad_28[8] = this->vtable2; /*0x4733f5*/
    }
    else
    {
LABEL_8:
      *(_DWORD *)&aP1->__pad_28[8] = this->vtable2; /*0x4733fa*/
    }
    this->vtable2 = aP1; /*0x473400*/
    *this = 0; /*0x473403*/
    while ( 1 ) /*0x47340c*/
    {
      ++*this; /*0x47340c*/
      v6 = *(IUnknown **)&v2->__pad_28[8]; /*0x47340e*/
      if ( !v6 || (v6->__pad_10[4] & 4) == 0 ) /*0x473422*/
        break; /*0x473422*/
      v2 = *(IUnknown **)&v2->__pad_28[8]; /*0x473424*/
    }
  }
}


// ==== 0x00473430  LinkedList::Pop  this=TechnoClass  sig=csp ====
int __thiscall LinkedList_Pop(_DWORD *this)
{
  int result; // eax

  result = this->vtable2; /*0x473430*/
  if ( result ) /*0x473435*/
  {
    this->vtable2 = *(_DWORD *)(result + 48); /*0x47343b*/
    *(_DWORD *)(result + 48) = 0; /*0x47343e*/
    --*this; /*0x473445*/
  }
  return result; /*0x473437*/
}


// ==== 0x00473450  CCINIClass::GetDB  this=TechnoClass  sig=csp ====
int __thiscall CCINIClass_GetDB(_DWORD *this)
{
  return this->vtable2; /*0x473453*/
}


// ==== 0x00473460  HouseClass::SumPowerDrain  this=OwnedTiberiumStruct  sig=csp ====
int __thiscall HouseClass_SumPowerDrain(int *this)
{
  int v1; // ebx
  _DWORD *v2; // ecx
  int result; // eax
  _DWORD *v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v1 = *this; /*0x473462*/
  v2 = (_DWORD *)*(this + 1); /*0x473464*/
  result = 0; /*0x473467*/
  v7 = 0; /*0x47346d*/
  if ( v2 ) /*0x473471*/
  {
    v4 = v2; /*0x473473*/
    for ( i = 0; i < v1; v7 = result ) /*0x47347d*/
    {
      if ( !v4 ) /*0x473481*/
        break; /*0x473481*/
      v6 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x473487*/
      result = Math::RoundToInt((double)v7 + *(double *)(v6 + 896)); /*0x473497*/
      v4 = (_DWORD *)v4[12]; /*0x47349c*/
      ++i; /*0x47349f*/
    }
  }
  return result; /*0x4734a8*/
}


// ==== 0x004734B0  FootClass::updateMovementAnimation  this=FootClass  sig=csp ====
void __thiscall FootClass::updateMovementAnimation(_DWORD *this, TimerStruct *aP1)
{
  TimerStruct *v2; // edx
  TimerStruct *StartTime; // eax

  if ( aP1 ) /*0x4734b7*/
  {
    v2 = (TimerStruct *)this->vtable2; /*0x4734b9*/
    if ( v2 ) /*0x4734be*/
    {
      StartTime = (TimerStruct *)v2[4].StartTime; /*0x4734c0*/
      if ( v2 == aP1 ) /*0x4734c5*/
      {
        this->vtable2 = StartTime; /*0x4734c7*/
        --*this; /*0x4734ce*/
      }
      else if ( StartTime ) /*0x4734d5*/
      {
        while ( aP1 != StartTime ) /*0x4734d9*/
        {
          v2 = StartTime; /*0x4734db*/
          StartTime = (TimerStruct *)StartTime[4].StartTime; /*0x4734dd*/
          if ( !StartTime ) /*0x4734e2*/
            return; /*0x4734e2*/
        }
        v2[4].StartTime = *(_DWORD *)(v2[4].StartTime + 48); /*0x4734ee*/
        --*this; /*0x4734f4*/
      }
    }
  }
}


// ==== 0x00473500  TechnoClass::IndexOf  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IndexOf(_DWORD *this, InfantryClass *aP1)
{
  InfantryClass *v2; // ecx
  int result; // eax
  _BYTE *nextObject; // edx

  v2 = (InfantryClass *)this->vtable2; /*0x473500*/
  result = 0; /*0x473503*/
  if ( !v2 ) /*0x473508*/
    return 0; /*0x47352c*/
  while ( 1 ) /*0x47350e*/
  {
    ++result; /*0x47350e*/
    if ( v2 == aP1 ) /*0x473511*/
      break; /*0x473511*/
    nextObject = v2->nextObject; /*0x473513*/
    if ( nextObject ) /*0x473518*/
    {
      if ( (nextObject[20] & 4) == 0 ) /*0x47351e*/
        return 0; /*0x47351e*/
      v2 = (InfantryClass *)v2->nextObject; /*0x473520*/
    }
    if ( !v2 ) /*0x473524*/
      return 0; /*0x473524*/
  }
  return result; /*0x47352e*/
}


// ==== 0x00473540  sub_473540  this=-  sig=ida-proto ====
void sub_473540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47354c*/
  MEMORY[0x89E220] = Math::Sqrt(v0 + v0); /*0x47355e*/
}


// ==== 0x00473570  sub_473570  this=-  sig=ida-proto ====
void sub_473570()
{
  MEMORY[0x89E270] = MEMORY[0x89E220] / 60.0; /*0x47357c*/
}


// ==== 0x00473590  sub_473590  this=-  sig=ida-proto ====
void sub_473590()
{
  MEMORY[0x89E258] = 1.0 / MEMORY[0x89E270]; /*0x47359c*/
}


// ==== 0x004735B0  sub_4735B0  this=-  sig=ida-proto ====
void sub_4735B0()
{
  MEMORY[0x89E250] = 0.0174532925199433 * 45.0; /*0x4735bc*/
}


// ==== 0x004735D0  sub_4735D0  this=-  sig=ida-proto ====
void sub_4735D0()
{
  MEMORY[0x89E228] = 0.0174532925199433 * 60.0; /*0x4735dc*/
}


// ==== 0x004735F0  sub_4735F0  this=-  sig=ida-proto ====
void sub_4735F0()
{
  MEMORY[0x89E200] = 0.0174532925199433 * 90.0; /*0x4735fc*/
}


// ==== 0x00473610  sub_473610  this=-  sig=ida-proto ====
__int64 sub_473610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E200] - MEMORY[0x89E228]); /*0x473622*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E220] * 0.5); /*0x473636*/
  MEMORY[0x89E278] = result; /*0x47363b*/
  return result; /*0x473640*/
}


// ==== 0x00473650  Math::InitArcTan  this=Math  sig=ida-proto ====
void Math_InitArcTan()
{
  MEMORY[0x89E230] = Math::ArcTan((double)MEMORY[0x89E278] * 0.00390625); /*0x473667*/
}


// ==== 0x00473680  sub_473680  this=-  sig=ida-proto ====
void sub_473680()
{
  MEMORY[0x89E248] = Math::ArcTan((double)(2 * MEMORY[0x89E278]) / MEMORY[0x89E220]); /*0x4736a2*/
}


// ==== 0x004736B0  sub_4736B0  this=-  sig=ida-proto ====
__int64 sub_4736B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E278]) + 0.5); /*0x4736cb*/
  MEMORY[0x89E26C] = result; /*0x4736d0*/
  return result; /*0x4736d6*/
}


// ==== 0x004736E0  sub_4736E0  this=-  sig=ida-proto ====
int sub_4736E0()
{
  MEMORY[0x89E218] = 0; /*0x4736e2*/
  MEMORY[0x89E21A] = 0; /*0x4736e8*/
  return 0; /*0x4736ee*/
}


// ==== 0x004736F0  sub_4736F0  this=-  sig=ida-proto ====
int sub_4736F0()
{
  MEMORY[0x89E238] = 0; /*0x4736f2*/
  MEMORY[0x89E23C] = 0; /*0x4736f7*/
  MEMORY[0x89E240] = 0; /*0x4736fc*/
  return 0; /*0x473701*/
}


// ==== 0x00473710  sub_473710  this=-  sig=ida-proto ====
int sub_473710()
{
  MEMORY[0x89E268] = 0; /*0x473715*/
  MEMORY[0x89E260] = 128; /*0x47371f*/
  MEMORY[0x89E264] = 128; /*0x473724*/
  return 128; /*0x473729*/
}


// ==== 0x00473730  sub_473730  this=-  sig=ida-proto ====
int sub_473730()
{
  MEMORY[0x89E208] = 0; /*0x473732*/
  MEMORY[0x89E20C] = 0; /*0x473737*/
  MEMORY[0x89E210] = 0; /*0x47373c*/
  MEMORY[0x89E214] = 0; /*0x473741*/
  return 0; /*0x473746*/
}


// ==== 0x00473750  CarryoverClass::method  this=CarryoverClass  sig=csp ====
_DWORD *__thiscall sub_473750(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v3 = a2; /*0x473754*/
  this->q004 = 0; /*0x47375a*/
  *(this + 2) = 0; /*0x47375d*/
  *(this + 3) = 0; /*0x473760*/
  *((_WORD *)this + 10) = 0; /*0x473763*/
  this->__pad_00B = 0; /*0x473767*/
  this->q006 = 0; /*0x47376d*/
  this->q007 = -1; /*0x473770*/
  *this = &vt_CarryoverClass; /*0x473777*/
  if ( v3 ) /*0x47377d*/
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3); /*0x473783*/
    *(this + 3) = v4; /*0x473786*/
    v5 = v4 - 1; /*0x473789*/
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 ) /*0x473794*/
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3); /*0x4737a6*/
      this->q004 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 64))(v7); /*0x4737b3*/
    }
    this->q007 = *(_DWORD *)(*(_DWORD *)(v3[135] + 52) + 184); /*0x4737c7*/
    this->q006 = v3[27]; /*0x4737cd*/
    this->q005 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v3 + 440))(v3, &a2); /*0x4737df*/
  }
  return this; /*0x4737e4*/
}


// ==== 0x00473920  CarryoverClass::QueryInterface  this=CarryoverClass  sig=csp ====
CarryoverClass *__thiscall CarryoverClass::QueryInterface(_DWORD *Block, char a2)
{
  LinkClass::Destruct(Block); /*0x473923*/
  if ( (a2 & 1) != 0 ) /*0x47392d*/
    __3_YAXPAX_Z(Block); /*0x473930*/
  return (CarryoverClass *)Block; /*0x47393a*/
}


// ==== 0x00473960  sub_473960  this=-  sig=csp ====
char *__fastcall sub_473960(unsigned int a1)
{
  if ( a1 >= 0xB ) /*0x473963*/
    return MEMORY[0x817474]; /*0x47396d*/
  else
    return off_81B7CC[2 * a1]; /*0x473965*/
}


// ==== 0x00473980  ObjectTypeClass::loadTypeMember  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_473980(void *this)
{
  int v2; // edi
  ObjectClass *v3; // esi

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  v2 = 0; /*0x473989*/
  v3 = (ObjectClass *)off_81B7C8; /*0x47398b*/
  while ( _strcmpi(*(const void **)&v3->__pad_0[4], this) && _strcmpi(*(const void **)v3->__pad_0, this) ) /*0x4739af*/
  {
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x4739b1*/
    ++v2; /*0x4739b4*/
    if ( (int)v3 >= (int)aAirlift ) /*0x4739bb*/
      return -1; /*0x4739bb*/
  }
  return v2; /*0x4739bd*/
}


// ==== 0x004739D0  sub_4739D0  this=-  sig=ida-proto ====
int sub_4739D0()
{
  MEMORY[0x89E280] = 0; /*0x4739d2*/
  MEMORY[0x89E284] = 0; /*0x4739d7*/
  MEMORY[0x89E288] = 0; /*0x4739dc*/
  MEMORY[0x89E28C] = 0; /*0x4739e1*/
  return 0; /*0x4739e6*/
}


// ==== 0x004739F0  CCFileClass::Construct  this=CCFileClass  sig=csp ====
_DWORD *__thiscall CCFileClass::Construct(_DWORD *this, char *Source)
{
  BufferIOFile::Init(this); /*0x4739f3*/
  Buffer::Init(this + 22, 0, 0); /*0x4739ff*/
  this->q064 = 0; /*0x473a0b*/
  *this = &CCFileClass::`vftable'; /*0x473a12*/
  this->q068 = 0; /*0x473a18*/
  FileClass::OpenWithCDSearch(this, Source); /*0x473a1f*/
  return this; /*0x473a26*/
}


// ==== 0x00473A30  CCFileClass::Construct2  this=CCFileClass  sig=csp ====
CCFileClass *__thiscall CCFileClass::Construct2(_DWORD *this, char **a2)
{
  char *v3; // eax

  BufferIOFile::Init(this); /*0x473a33*/
  Buffer::Init(this + 22, 0, 0); /*0x473a3f*/
  this->q064 = 0; /*0x473a48*/
  *this = &vt_CCFileClass; /*0x473a4f*/
  this->q068 = 0; /*0x473a55*/
  v3 = String::GetOrEmpty_Alt(a2); /*0x473a5c*/
  this->q068 = 0; /*0x473a64*/
  FileClass::OpenWithCDSearch(this, (IUnknown *)v3); /*0x473a6b*/
  return (CCFileClass *)this; /*0x473a72*/
}


// ==== 0x00473A80  CCFileClass::Construct3  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_Constructor3(int this)
{
  BufferIOFile::Init((_BYTE *)this); /*0x473a83*/
  Buffer::Init((_DWORD *)(this + 88), 0, 0); /*0x473a8f*/
  *(_DWORD *)(this + 100) = 0; /*0x473a94*/
  *(_DWORD *)this = &vt_CCFileClass; /*0x473a9b*/
  *(_DWORD *)(this + 104) = 0; /*0x473aa1*/
  return this; /*0x473aaa*/
}


// ==== 0x00473AB0  CCFileClass::Destru_vt16  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt16(_BYTE *this, int a2, int a3, int a4)
{
  char result; // al

  result = this->FilePointer; /*0x473ab0*/
  if ( !result ) /*0x473ab8*/
    return CD::`vftable'(dword_81C1D0); /*0x473acc*/
  return result; /*0x473ad2*/
}


// ==== 0x00473AE0  CCFileClass::Write  this=CCFileClass  sig=csp ====
int __thiscall FileClass::Write(_DWORD *this, CCFileClass *aP1, DWORD nNumberOfBytesToWrite)
{
  int v4; // edi
  int v5; // eax

  if ( this->FileBuffer ) /*0x473ae3*/
  {
    v4 = *this; /*0x473aeb*/
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x473aed*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, int))(v4 + 64))(this, 13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter(this, aP1, nNumberOfBytesToWrite); /*0x473b0c*/
}


// ==== 0x00473B10  CCFileClass::Read  this=CCFileClass  sig=csp ====
size_t __thiscall CCFileClass::Read(_DWORD *this, CampaignScore *aP1, signed int Size)
{
  bool v4; // bl
  int v5; // edx
  int v6; // ecx
  size_t v7; // edi

  v4 = 0; /*0x473b15*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 24))(this) ) /*0x473b19*/
    v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1) != 0; /*0x473b2d*/
  v5 = this->FileBuffer; /*0x473b2f*/
  if ( v5 ) /*0x473b34*/
  {
    v6 = this->q064; /*0x473b36*/
    v7 = Size; /*0x473b3c*/
    if ( this->q05C - v6 < Size ) /*0x473b44*/
      v7 = this->q05C - v6; /*0x473b46*/
    if ( v7 ) /*0x473b4a*/
    {
      memcpy(aP1, (const void *)(v5 + v6), v7); /*0x473b55*/
      this->q064 += v7; /*0x473b62*/
    }
    if ( v4 ) /*0x473b67*/
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 52))(this); /*0x473b6d*/
      return v7; /*0x473b75*/
    }
  }
  else
  {
    v7 = FileClass::BufferedReader((int)this, (BufferIOFileClass *)aP1, Size); /*0x473b8b*/
    if ( v4 ) /*0x473b8d*/
      (*(void (__thiscall **)(_DWORD *))(*this + 52))(this); /*0x473b93*/
  }
  return v7; /*0x473b72*/
}


// ==== 0x00473BA0  CCFileClass::Seek  this=CCFileClass  sig=csp ====
int __thiscall BufferIOFileClass_Seek(_DWORD *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int v3; // eax
  bool v4; // sf
  int v5; // eax
  int result; // eax

  if ( !this->FileBuffer ) /*0x473ba0*/
    return BufferIOFileClass::SeekInternal(lDistanceToMove, dwMoveMethod); /*0x473bf3*/
  if ( dwMoveMethod ) /*0x473bae*/
  {
    if ( dwMoveMethod == 2 ) /*0x473bb3*/
      this->q064 = this->q05C; /*0x473bb8*/
  }
  else
  {
    this->q064 = 0; /*0x473bbd*/
  }
  v3 = this->q064; /*0x473bc8*/
  v4 = lDistanceToMove + v3 < 0; /*0x473bcb*/
  v5 = lDistanceToMove + v3; /*0x473bcb*/
  this->q064 = v5; /*0x473bd6*/
  result = v4 ? 0 : v5;
  this->q064 = result; /*0x473bdb*/
  if ( result > this->q05C ) /*0x473be3*/
    result = this->q05C; /*0x473be5*/
  this->q064 = result; /*0x473be7*/
  return result; /*0x473bea*/
}


// ==== 0x00473C00  CCFileClass::GetSize  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_GetSize(int *this)
{
  int v3; // edx
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( this->FileTimeDateHi ) /*0x473c04*/
    return this->q05C; /*0x473c0b*/
  if ( File::IsReady(this, 0) ) /*0x473c15*/
    return BufferIOFileClass::SetSize(this); /*0x473c48*/
  v3 = *this; /*0x473c1e*/
  v4 = 0; /*0x473c2b*/
  (*(void (__thiscall **)(int *))(v3 + 4))(this); /*0x473c33*/
  LookupFileInfoCache(0, 0, &v4); /*0x473c3a*/
  return v4; /*0x473c0e*/
}


// ==== 0x00473C50  CCFileClass::Open  this=CCFileClass  sig=csp ====
char __thiscall sub_473C50(_DWORD *this, int a2)
{
  if ( this->q068 == 1 ) /*0x473c5c*/
    return 1; /*0x473c5e*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 24))(this) ) /*0x473c69*/
  {
    this->q068 = 1; /*0x473c70*/
    return 1; /*0x473c73*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x473c84*/
    if ( (unsigned __int8)LookupFileInfoCache(0, 0, 0) ) /*0x473c8b*/
    {
      this->q068 = 1; /*0x473c94*/
      return 1; /*0x473c97*/
    }
    else if ( (unsigned __int8)File::IsReady(0) ) /*0x473ca2*/
    {
      this->q068 = 1; /*0x473cab*/
      return 1; /*0x473cae*/
    }
    else
    {
      this->q068 = 2; /*0x473cb5*/
      return 0; /*0x473cbd*/
    }
  }
}


// ==== 0x00473CD0  CCFileClass::Destru_vt06  this=CCFileClass  sig=csp ====
bool __thiscall CCFileClass::Destru_vt06(int this)
{
  return *(_DWORD *)(this + 88) || BufferIOFileClass::Read(this); /*0x473cd7*/
}


// ==== 0x00473CE0  CCFileClass::Reset  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_Reset(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = this + 22; /*0x473ce3*/
  if ( v2 ) /*0x473ce8*/
    Buffer::Init(v2, 0, 0); /*0x473cee*/
  this->q064 = 0; /*0x473cf5*/
  return CCFileClass::Close(this); /*0x473d01*/
}


// ==== 0x00473D10  CCFileClass::Load  this=CCFileClass  sig=csp ====
BOOL __thiscall FileClass::Load(int *this, CDFileClass *aP1)
{
  int v3; // edx
  const char *v4; // eax
  const char *eax7a; // eax
  CCINIClass *v5; // edi
  int v7; // eax
  size_t Size; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int *))(*this + 52))(this); /*0x473d1a*/
  if ( ((unsigned __int8)aP1 & 2) != 0 || File::IsReady(this, 0) ) /*0x473d2d*/
    return FileClass::OpenFileBufferIO(this, aP1); /*0x473e40*/
  v3 = *this; /*0x473d44*/
  v11 = 0; /*0x473d4d*/
  v10 = 0; /*0x473d51*/
  Size = 0; /*0x473d55*/
  v12 = 0; /*0x473d59*/
  v4 = (const char *)(*(int (__thiscall **)(int *))(v3 + 4))(this); /*0x473d61*/
  if ( !LookupFileInfoCache(v4, &v10, &v11, &v12, &Size) ) /*0x473d68*/
    return FileClass::OpenFileBufferIO(this, aP1); /*0x473e2b*/
  if ( v10 || !v11 ) /*0x473d87*/
  {
    if ( this != (int *)-88 ) /*0x473e06*/
      Buffer::Init(this + 22, v10, (AbstractClass *)Size); /*0x473e0e*/
    this->q064 = 0; /*0x473e13*/
    return 1; /*0x473e18*/
  }
  else if ( (*(int (__thiscall **)(int *, _DWORD, int))(*this + 32))(this, *(_DWORD *)(v11 + 12), 1) ) /*0x473d93*/
  {
    eax7a = (const char *)(*(int (__thiscall **)(int *))(*this + 4))(this); /*0x473d9e*/
    v5 = (CCINIClass *)_strdup(eax7a); /*0x473daa*/
    v7 = *this; /*0x473dac*/
    this->q054 = 1; /*0x473db1*/
    (*(void (__thiscall **)(int *, CCINIClass *))(v7 + 8))(this, v5); /*0x473db5*/
    this->q054 = 0; /*0x473dbd*/
    FileClass::GetFileSizeOp(this, 0, (CCFileClass *)0xFFFFFFFF); /*0x473dc0*/
    FileClass::GetFileSizeOp(this, v12, (CCFileClass *)Size); /*0x473dd1*/
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 40))(this, 0, 0); /*0x473ddc*/
    free(v5); /*0x473de0*/
    return 1; /*0x473de8*/
  }
  else
  {
    return 0; /*0x473df8*/
  }
}


// ==== 0x00473E50  CCFileClass::Destru_vt14  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destru_vt14(HANDLE *this)
{
  int DosTimestamp; // ebx
  const char *v3; // eax
  char *v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-70h] BYREF
  _DWORD v8[22]; // [esp+10h] [ebp-6Ch] BYREF
  _DWORD v9[3]; // [esp+68h] [ebp-14h] BYREF
  int v10; // [esp+74h] [ebp-8h]
  int v11; // [esp+78h] [ebp-4h]

  v7 = 0; /*0x473e5a*/
  DosTimestamp = FileClass::GetDosTimestamp(this); /*0x473e63*/
  if ( DosTimestamp ) /*0x473e67*/
    return DosTimestamp; /*0x473e67*/
  v3 = (const char *)(*((int (__thiscall **)(HANDLE *))*this + 1))(this); /*0x473e78*/
  if ( !LookupFileInfoCache(v3, 0, &v7, 0, 0) ) /*0x473e7f*/
    return DosTimestamp; /*0x473ef7*/
  v4 = *(char **)(v7 + 12); /*0x473e90*/
  BufferIOFile::Init(v8); /*0x473e93*/
  Buffer::Init(v9, 0, 0); /*0x473e9e*/
  v10 = 0; /*0x473ead*/
  v8[0] = &vt_CCFileClass; /*0x473eb1*/
  v11 = 0; /*0x473eb5*/
  FileClass::OpenWithCDSearch(v8, v4); /*0x473eb9*/
  v5 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 56))(v8); /*0x473ecd*/
  v8[0] = &vt_CCFileClass; /*0x473ecf*/
  v10 = 0; /*0x473ed3*/
  Vector::Clear((int)v9); /*0x473ed7*/
  v8[0] = &off_7E1668; /*0x473ee0*/
  BufferIOFileClass::Dtor(v8); /*0x473ee8*/
  return v5; /*0x473eef*/
}


// ==== 0x00473F00  CCFileClass::Destru_vt15  this=CCFileClass  sig=csp ====
char __thiscall CCFileClass::Destru_vt15(HANDLE *this, int wFatTime)
{
  char v3; // bl
  const char *v4; // eax
  char *v5; // esi
  int v7; // [esp+10h] [ebp-70h] BYREF
  _DWORD v8[22]; // [esp+14h] [ebp-6Ch] BYREF
  _DWORD v9[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v10; // [esp+78h] [ebp-8h]
  int v11; // [esp+7Ch] [ebp-4h]

  v7 = 0; /*0x473f10*/
  v3 = FileClass::SetTime(this, wFatTime); /*0x473f19*/
  if ( !v3 ) /*0x473f1d*/
  {
    v4 = (const char *)(*((int (__thiscall **)(HANDLE *))*this + 1))(this); /*0x473f2e*/
    if ( LookupFileInfoCache(v4, 0, &v7, 0, 0) ) /*0x473f35*/
    {
      v5 = *(char **)(v7 + 12); /*0x473f46*/
      BufferIOFile::Init(v8); /*0x473f49*/
      Buffer::Init(v9, 0, 0); /*0x473f54*/
      v10 = 0; /*0x473f5e*/
      v8[0] = &vt_CCFileClass; /*0x473f62*/
      v11 = 0; /*0x473f6a*/
      FileClass::OpenWithCDSearch(v8, v5); /*0x473f71*/
      v3 = (*(int (__thiscall **)(_DWORD *, int))(v8[0] + 60))(v8, wFatTime); /*0x473f86*/
      v8[0] = &vt_CCFileClass; /*0x473f88*/
      v10 = 0; /*0x473f90*/
      Vector::Clear((int)v9); /*0x473f94*/
      v8[0] = &off_7E1668; /*0x473f9d*/
      BufferIOFileClass::Dtor(v8); /*0x473fa5*/
    }
  }
  return v3; /*0x473faa*/
}


// ==== 0x00473FC0  CCFileClass::SetFileName  this=CCFileClass  sig=csp ====
int __thiscall FileClass::SetFileName(_DWORD *this, IUnknown *aP1)
{
  this->q068 = 0; /*0x473fc4*/
  return FileClass::OpenWithCDSearch(this, aP1); /*0x473fd1*/
}


// ==== 0x00473FE0  sub_473FE0  this=-  sig=ida-proto ====
void sub_473FE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x473fec*/
  MEMORY[0x89E2B0] = Math::Sqrt(v0 + v0); /*0x473ffe*/
}


// ==== 0x00474010  sub_474010  this=-  sig=ida-proto ====
void sub_474010()
{
  MEMORY[0x89E300] = MEMORY[0x89E2B0] / 60.0; /*0x47401c*/
}


// ==== 0x00474030  sub_474030  this=-  sig=ida-proto ====
void sub_474030()
{
  MEMORY[0x89E2E8] = 1.0 / MEMORY[0x89E300]; /*0x47403c*/
}


// ==== 0x00474050  sub_474050  this=-  sig=ida-proto ====
void sub_474050()
{
  MEMORY[0x89E2E0] = 0.0174532925199433 * 45.0; /*0x47405c*/
}


// ==== 0x00474070  sub_474070  this=-  sig=ida-proto ====
void sub_474070()
{
  MEMORY[0x89E2B8] = 0.0174532925199433 * 60.0; /*0x47407c*/
}


// ==== 0x00474090  sub_474090  this=-  sig=ida-proto ====
void sub_474090()
{
  MEMORY[0x89E290] = 0.0174532925199433 * 90.0; /*0x47409c*/
}


// ==== 0x004740B0  sub_4740B0  this=-  sig=ida-proto ====
__int64 sub_4740B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E290] - MEMORY[0x89E2B8]); /*0x4740c2*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E2B0] * 0.5); /*0x4740d6*/
  MEMORY[0x89E308] = result; /*0x4740db*/
  return result; /*0x4740e0*/
}


// ==== 0x004740F0  sub_4740F0  this=-  sig=ida-proto ====
void sub_4740F0()
{
  MEMORY[0x89E2C0] = Math::ArcTan((double)MEMORY[0x89E308] * 0.00390625); /*0x474107*/
}


// ==== 0x00474120  sub_474120  this=-  sig=ida-proto ====
void sub_474120()
{
  MEMORY[0x89E2D8] = Math::ArcTan((double)(2 * MEMORY[0x89E308]) / MEMORY[0x89E2B0]); /*0x474142*/
}


// ==== 0x00474150  sub_474150  this=-  sig=ida-proto ====
__int64 sub_474150()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E308]) + 0.5); /*0x47416b*/
  MEMORY[0x89E2FC] = result; /*0x474170*/
  return result; /*0x474176*/
}


// ==== 0x00474180  sub_474180  this=-  sig=ida-proto ====
int sub_474180()
{
  MEMORY[0x89E2A8] = 0; /*0x474182*/
  MEMORY[0x89E2AA] = 0; /*0x474188*/
  return 0; /*0x47418e*/
}


// ==== 0x00474190  sub_474190  this=-  sig=ida-proto ====
int sub_474190()
{
  MEMORY[0x89E2C8] = 0; /*0x474192*/
  MEMORY[0x89E2CC] = 0; /*0x474197*/
  MEMORY[0x89E2D0] = 0; /*0x47419c*/
  return 0; /*0x4741a1*/
}


// ==== 0x004741B0  sub_4741B0  this=-  sig=ida-proto ====
int sub_4741B0()
{
  MEMORY[0x89E2F8] = 0; /*0x4741b5*/
  MEMORY[0x89E2F0] = 128; /*0x4741bf*/
  MEMORY[0x89E2F4] = 128; /*0x4741c4*/
  return 128; /*0x4741c9*/
}


// ==== 0x004741D0  sub_4741D0  this=-  sig=ida-proto ====
int sub_4741D0()
{
  MEMORY[0x89E298] = 0; /*0x4741d2*/
  MEMORY[0x89E29C] = 0; /*0x4741d7*/
  MEMORY[0x89E2A0] = 0; /*0x4741dc*/
  MEMORY[0x89E2A4] = 0; /*0x4741e1*/
  return 0; /*0x4741e6*/
}


// ==== 0x004741F0  CCINIClass::Load  this=IUnknown  sig=csp ====
int __thiscall CCINIClass::Load(char *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  _DWORD v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  int v12[3]; // [esp+20h] [ebp-94h] BYREF
  char v13; // [esp+2Ch] [ebp-88h]
  int v14; // [esp+44h] [ebp-70h]
  int v15; // [esp+48h] [ebp-6Ch]
  int v16; // [esp+4Ch] [ebp-68h]
  int v17; // [esp+50h] [ebp-64h]
  int v18; // [esp+54h] [ebp-60h]
  int v19; // [esp+58h] [ebp-5Ch]
  int v20; // [esp+5Ch] [ebp-58h]
  int v21[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = a2; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v10[0] = &FileStraw::`vftable'; /*0x474223*/
  File = INIClass::LoadFile(this, (int)v10, a4); /*0x474230*/
  this->q010 = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data(g_INI_Key_Digest, v21, 20); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int)this, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  v12[1] = 0; /*0x474286*/
  v12[2] = 0; /*0x47428d*/
  v13 = 0; /*0x474291*/
  v19 = 0; /*0x474295*/
  v20 = 0; /*0x474299*/
  v14 = 1732584193; /*0x47429d*/
  v15 = -271733879; /*0x4742a5*/
  v16 = -1732584194; /*0x4742ad*/
  v17 = 271733878; /*0x4742b5*/
  v18 = -1009589776; /*0x4742bd*/
  v12[0] = (int)&SHAPipe::`vftable'; /*0x4742c5*/
  INIClass::WriteToString(this, (int)v12); /*0x4742cd*/
  SHA1::ComputeThunk(v12, this + 65); /*0x4742da*/
  this->q010 = 1; /*0x4742e3*/
  Pipe::Dtor(v12); /*0x4742e7*/
  v8 = memcmp(v21, this + 65, 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((int)v10); /*0x474306*/
  return v7; /*0x474311*/
}


// ==== 0x00474320  CCINIClass::LoadAndVerifyDigest  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadAndVerifyDigest(int this, AbstractTypeClass *aP1, char a3, char aP2)
{
  int File; // ebp
  int Base64Data; // eax
  int result; // eax
  CCINIClass v8; // [esp+Ch] [ebp-94h] BYREF
  int v9[5]; // [esp+8Ch] [ebp-14h] BYREF

  File = INIClass::LoadFile((_DWORD *)this, (CCINIClass *)aP1, (INIClass *)aP2); /*0x47433f*/
  *(_BYTE *)(this + 64) = 0; /*0x474345*/
  if ( !File || !a3 ) /*0x474355*/
    return File; /*0x474355*/
  Base64Data = INIClass::GetBase64Data((void *)this, g_INI_Key_Digest.__pad_0, (int)v9, 0x14u); /*0x47436c*/
  if ( !Base64Data ) /*0x474373*/
    return 2; /*0x474383*/
  if ( Base64Data <= 0 ) /*0x474386*/
    return File; /*0x474386*/
  INIClass::ClearSection(this, &g_INI_Key_Digest, 0); /*0x474395*/
  memset(v8.headNode, 0, 9); /*0x4743a1*/
  v8.unknown38 = 0; /*0x4743ad*/
  v8.INIClass_field_3C = 0; /*0x4743b1*/
  *(_DWORD *)&v8.__pad_20[4] = 1732584193; /*0x4743b5*/
  *(_DWORD *)&v8.__pad_20[8] = -271733879; /*0x4743bd*/
  v8.INIClass_field_2C = -1732584194; /*0x4743c5*/
  v8.unknown30 = 271733878; /*0x4743cd*/
  *(_DWORD *)&v8.needsSave_flag = -1009589776; /*0x4743d5*/
  *(_DWORD *)v8.__pad_0 = &vt_SHAPipe; /*0x4743dd*/
  INIClass::WriteToString((_DWORD *)this, &v8); /*0x4743e5*/
  SHA1::ComputeThunk(&v8, (ObjectClass *)(this + 65)); /*0x4743f2*/
  *(_BYTE *)(this + 64) = 1; /*0x4743fb*/
  Pipe::Dtor((int *)v8.__pad_0); /*0x4743ff*/
  result = 2; /*0x474412*/
  if ( !memcmp(v9, (const void *)(this + 65), 0x14u) ) /*0x474417*/
    return File; /*0x47441c*/
  return result; /*0x474375*/
}


// ==== 0x00474430  INIClass::WriteDigest  this=AbstractTypeClass  sig=csp ====
int __thiscall INIClass::WriteDigest(_BYTE *this, CCINIClass *aP1, char a3)
{
  CCINIClass *v4; // edi
  CCINIClass v6; // [esp+Ch] [ebp-94h] BYREF

  v6.headNode[2] = (int)aP1; /*0x47443e*/
  v6.headNode[0] = 0; /*0x474451*/
  v6.headNode[1] = 0; /*0x474455*/
  LOBYTE(v6.sectionHead[0]) = 0; /*0x474459*/
  *(_DWORD *)v6.__pad_0 = &FilePipe::`vftable'; /*0x47445d*/
  if ( a3 ) /*0x474465*/
  {
    INIClass::ClearSection((int)this, &g_INI_Key_Digest, 0); /*0x474482*/
    memset(&v6.sectionHead[2], 0, 9); /*0x47448e*/
    v6.CCINIClass_field_4C = 0; /*0x47449a*/
    v6.unknown50 = 0; /*0x47449e*/
    v6.unknown38 = 1732584193; /*0x4744a2*/
    v6.INIClass_field_3C = -271733879; /*0x4744aa*/
    *(_DWORD *)&v6.ownsFile = -1732584194; /*0x4744b2*/
    *(_DWORD *)&v6.__pad_41[3] = 271733878; /*0x4744ba*/
    *(_DWORD *)v6.__pad_48 = -1009589776; /*0x4744c2*/
    v6.sectionHead[1] = (int)&vt_SHAPipe; /*0x4744ca*/
    INIClass::WriteToString(this, (CCINIClass *)&v6.sectionHead[1]); /*0x4744d2*/
    SHA1::ComputeThunk(&v6.sectionHead[1], (ObjectClass *)(this + 65)); /*0x4744df*/
    this->q100 = 1; /*0x4744e8*/
    Pipe::Dtor(&v6.sectionHead[1]); /*0x4744ec*/
    INIClass::ReadBase64Data( /*0x4744fb*/
      this,
      (unsigned __int8 *)&g_INI_Key_Digest,
      (ObjectClass *)(this + 65),
      (ObjectClass *)0x14);
    v4 = (CCINIClass *)INIClass::WriteToString(this, &v6); /*0x474514*/
    INIClass::ClearSection((int)this, &g_INI_Key_Digest, 0); /*0x474516*/
  }
  else
  {
    v4 = (CCINIClass *)INIClass::WriteToString(this, &v6); /*0x474473*/
  }
  FilePipe::Destructor((int)&v6); /*0x47451f*/
  return (int)v4->__pad_0; /*0x474526*/
}


// ==== 0x00474540  ObjectClass::method  this=ObjectClass  sig=csp ====
CCINIClass *__thiscall sub_474540(int this, CCINIClass *aP1, char a3)
{
  CCINIClass *v5; // edi
  CCINIClass v6; // [esp+8h] [ebp-80h] BYREF

  if ( !a3 ) /*0x474552*/
    return (CCINIClass *)INIClass::WriteToString((_DWORD *)this, aP1); /*0x47455c*/
  INIClass::ClearSection(this, &g_INI_Key_Digest, 0); /*0x474575*/
  memset(v6.headNode, 0, 9); /*0x47457e*/
  v6.unknown38 = 0; /*0x47458d*/
  v6.INIClass_field_3C = 0; /*0x474591*/
  *(_DWORD *)&v6.__pad_20[4] = 1732584193; /*0x474595*/
  *(_DWORD *)&v6.__pad_20[8] = -271733879; /*0x47459d*/
  v6.INIClass_field_2C = -1732584194; /*0x4745a5*/
  v6.unknown30 = 271733878; /*0x4745ad*/
  *(_DWORD *)&v6.needsSave_flag = -1009589776; /*0x4745b5*/
  *(_DWORD *)v6.__pad_0 = &vt_SHAPipe; /*0x4745bd*/
  INIClass::WriteToString((_DWORD *)this, &v6); /*0x4745c5*/
  SHA1::ComputeThunk(&v6, (ObjectClass *)(this + 65)); /*0x4745d2*/
  *(_BYTE *)(this + 64) = 1; /*0x4745db*/
  Pipe::Dtor((int *)v6.__pad_0); /*0x4745df*/
  INIClass::ReadBase64Data( /*0x4745ee*/
    (char *)this,
    (unsigned __int8 *)&g_INI_Key_Digest,
    (ObjectClass *)(this + 65),
    (ObjectClass *)0x14);
  v5 = (CCINIClass *)INIClass::WriteToString((_DWORD *)this, aP1); /*0x47460a*/
  INIClass::ClearSection(this, &g_INI_Key_Digest, 0); /*0x47460c*/
  return v5; /*0x474561*/
}


// ==== 0x00474620  INIClass::ReadCoord  this=IUnknown  sig=csp ====
INIClass *INIClass::ReadCoord(double aP1, int a2, INIClass *aP2, int a4)
{
  int v4; // ecx
  double Double_Overwrite; // st7

  Double_Overwrite = INIClass::ReadDouble_Overwrite(v4, (INIClass *)LODWORD(aP1), (unsigned __int8 *)HIDWORD(aP1), 0); /*0x474631*/
  if ( Double_Overwrite == -1.0 ) /*0x474641*/
    return (INIClass *)a2; /*0x474645*/
  else
    return (INIClass *)Math::RoundToInt(Double_Overwrite * 256.0); /*0x474652*/
}


// ==== 0x00474660  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_474660(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  return INIClass::SetDouble(this, Block, a3, (double)a4 * 0.00390625); /*0x47467f*/
}


// ==== 0x00474690  ObjectTypeClass::ReadBool  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadBool(char *this, INIClass *Block, INIClass *aP2, int a4)
{
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, MEMORY[0x817F6C], 360 * a4 / 256); /*0x4746ba*/
  return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer); /*0x4746d8*/
}


// ==== 0x004746E0  ObjectTypeClass::ReadPrerequisite  this=ObjectTypeClass  sig=csp ====
int __thiscall sub_4746E0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], String, 32) ) /*0x4746f9*/
    return (atoi(String) << 8) / 360; /*0x474727*/
  else
    return a4; /*0x47472f*/
}


// ==== 0x00474740  ObjectTypeClass::ReadSoundList  this=ObjectTypeClass  sig=csp ====
unsigned __int8 **__thiscall sub_474740(
        unsigned __int8 ***this,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5)
{
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  if ( INIClass::GetString(this, a3, a4, &MEMORY[0x889F64], Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, MEMORY[0x81C000], &a4, &a3); /*0x474776*/
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
char __thiscall ObjectTypeClass::ReadBool2(char *this, INIClass *Block, INIClass *aP2, __int16 *a4)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, g_INI_Key_Digest.__pad_20, *a4, a4[1]); /*0x4747dd*/
  return INIClass::SetString(this, Block, aP2, &Buffer); /*0x4747fb*/
}


// ==== 0x00474810  WarheadTypeClass::loadWarheadINI  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_474810(void *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int Int_Overwrite; // eax
  int result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite((int)this, a2, a3, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return a4; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return 255; /*0x47485e*/
  return result; /*0x47482a*/
}


// ==== 0x004748A0  INIClass::GetPipIdx  this=IUnknown  sig=csp ====
int __thiscall INIClass::GetPipIdx(unsigned __int8 ***this, CCINIClass *aP1, unsigned __int8 *a2, BaseClass *aP3)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, *(&off_81B958 + 2 * (_DWORD)aP3), (INIClass *)Destination, 32); /*0x4748c2*/
  v4 = 0; /*0x4748c7*/
  v5 = (ObjectClass *)&off_81B958; /*0x4748c9*/
  while ( _strcmpi(Destination, *(char **)v5->__pad_0) ) /*0x4748e0*/
  {
    v5 = (ObjectClass *)((char *)v5 + 8); /*0x4748e2*/
    ++v4; /*0x4748e5*/
    if ( (int)v5 >= (int)&off_81B9B0 ) /*0x4748ec*/
      return 1; /*0x4748f8*/
  }
  return dword_81B95C[2 * v4]; /*0x4748ee*/
}


// ==== 0x00474940  ObjectTypeClass::loadTypeMember  this=IUnknown  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474940(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        int a4)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( (int)INIClass::GetString( /*0x474962*/
              this,
              (INIClass *)aP1,
              a2,
              (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
              (INIClass *)Destination,
              32) <= 0 )
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
  v5 = (ObjectClass *)&off_81B9B0; /*0x474966*/
  while ( _strcmpi(Destination, *(char **)v5->__pad_0) ) /*0x47497d*/
  {
    v5 = (ObjectClass *)((char *)v5 + 8); /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return dword_81B9B4[2 * v4]; /*0x47498b*/
}


// ==== 0x004749E0  ObjectTypeClass::loadTypeMember_54749E0  this=IUnknown  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_54749E0(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        unsigned int a4)
{
  INIClass *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = (INIClass *)sub_473960(a4); /*0x4749f1*/
  INIClass::GetString(this, (INIClass *)aP1, a2, v5, (INIClass *)Destination, 32); /*0x474a03*/
  return ObjectTypeClass::loadTypeMember_473980(Destination); /*0x474a11*/
}


// ==== 0x00474A90  BuildingTypeClass::FindAnimByName  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::FindAnimByName(
        unsigned __int8 ***this,
        INIClass *aP1,
        unsigned __int8 *a2,
        AnimTypeClass *aP3)
{
  int v4; // esi
  IUnknown *v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    this,
    aP1,
    a2,
    *(INIClass **)(*(_DWORD *)(stru_B05488.field_4C + 4 * (_DWORD)aP3) + 772),
    (INIClass *)Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x474ac8*/
    return (int)aP3->__pad_0; /*0x474b06*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(const void **)(*(&v5->field_0 + v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x474ae8*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B05488.__pad_58 ) /*0x474b04*/
      return (int)aP3->__pad_0; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}


// ==== 0x00474B20  HouseClass::WriteBuildingTypeNameToINI  this=HouseClass  sig=csp ====
char __thiscall HouseClass::WriteBuildingTypeNameToINI(char *this, INIClass *aP1, char *a2, int a4)
{
  return INIClass::SetString(this, aP1, (INIClass *)a2, *(INIClass **)(*((_DWORD *)MEMORY[0xB054D4] + a4) + 772)); /*0x474b43*/
}


// ==== 0x00474B50  INIClass::GetCoord  this=IUnknown  sig=csp ====
int __thiscall INIClass::GetCoord(unsigned __int8 ***this, CCINIClass *aP1, INIClass *aP2, Color *aP3, Color *aP4)
{
  char v7; // cl
  __int16 v8; // [esp+8h] [ebp-8Ch] BYREF
  char v9; // [esp+Ch] [ebp-88h] BYREF
  char v10; // [esp+10h] [ebp-84h] BYREF
  INIClass Buffer; // [esp+14h] [ebp-80h] BYREF
  INIClass Destination; // [esp+54h] [ebp-40h] BYREF

  sprintf( /*0x474b7c*/
    Buffer.__pad_0,
    (const char *const)&MEMORY[0x818994].sectionCount,
    LOBYTE(aP4->Color_field_00),
    BYTE1(aP4->Color_field_00),
    BYTE2(aP4->Color_field_00));
  if ( INIClass::GetString(this, aP2, (unsigned __int8 *)aP3, &Buffer, &Destination, 64) ) /*0x474ba2*/
  {
    sscanf(Destination.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, &v8, &v10, &v9); /*0x474bc4*/
    HIBYTE(v8) = v10; /*0x474bdc*/
    v7 = v9; /*0x474be5*/
    *(_WORD *)aP1->__pad_0 = v8; /*0x474bee*/
    aP1->__pad_0[2] = v7; /*0x474bf3*/
    return (int)aP1->__pad_0; /*0x474bd5*/
  }
  else
  {
    *(_WORD *)aP1->__pad_0 = aP4->Color_field_00; /*0x474c0c*/
    aP1->__pad_0[2] = BYTE2(aP4->Color_field_00); /*0x474c13*/
    return (int)aP1->__pad_0; /*0x474bff*/
  }
}


// ==== 0x00474C20  INIEntry::Write3Bytes  this=INIEntry  sig=csp ====
char __thiscall INIEntry::Write3Bytes(char *this, INIClass *Block, INIClass *aP2, unsigned __int8 *a4)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, *a4, a4[1], a4[2]); /*0x474c45*/
  return INIClass::SetString(this, Block, aP2, &Buffer); /*0x474c63*/
}


// ==== 0x00474C70  INIEntry::ReadColor  this=INIEntry  sig=csp ====
int __thiscall INIEntry::ReadColor(
        unsigned __int8 ***this,
        int a2,
        CCINIClass *aP2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char v7; // cl
  int v8; // [esp+8h] [ebp-8Ch] BYREF
  int v9; // [esp+Ch] [ebp-88h] BYREF
  int v10; // [esp+10h] [ebp-84h] BYREF
  INIClass Buffer; // [esp+14h] [ebp-80h] BYREF
  INIClass Destination; // [esp+54h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, *a4, a4[1], a4[2]); /*0x474c9c*/
  if ( INIClass::GetString(this, (INIClass *)aP2, a3, &Buffer, &Destination, 64) ) /*0x474cc2*/
  {
    v8 = 0; /*0x474cd1*/
    v10 = 0; /*0x474cd5*/
    v9 = 0; /*0x474cd9*/
    sscanf(Destination.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, &v8, &v10, &v9); /*0x474cf2*/
    BYTE1(v8) = v10; /*0x474d0a*/
    v7 = v9; /*0x474d13*/
    *(_WORD *)a2 = v8; /*0x474d1c*/
    *(_BYTE *)(a2 + 2) = v7; /*0x474d21*/
    return a2; /*0x474d03*/
  }
  else
  {
    *(_WORD *)a2 = *(_WORD *)a4; /*0x474d3a*/
    *(_BYTE *)(a2 + 2) = a4[2]; /*0x474d41*/
    return a2; /*0x474d2d*/
  }
}


// ==== 0x00474D50  ObjectTypeClass::ReadString  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadString(char *this, INIClass *Block, INIClass *aP2, unsigned __int8 *a4)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, *a4, a4[1], a4[2]); /*0x474d75*/
  return INIClass::SetString(this, Block, aP2, &Buffer); /*0x474d93*/
}


// ==== 0x00474DA0  INIClass::LookupEnum  this=AbstractTypeClass  sig=csp ====
int __thiscall INIClass::LookupEnum(unsigned __int8 ***this, ObjectClass *aP1, unsigned __int8 *a2, Color *aP3)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, *(&off_81B9D8 + 2 * (_DWORD)aP3), (INIClass *)Destination, 32); /*0x474dc2*/
  v4 = 0; /*0x474dc7*/
  v5 = (ObjectClass *)&off_81B9D8; /*0x474dc9*/
  while ( _strcmpi(Destination, *(const void **)v5->__pad_0) ) /*0x474de0*/
  {
    v5 = (ObjectClass *)((char *)v5 + 8); /*0x474de2*/
    ++v4; /*0x474de5*/
    if ( (int)v5 >= (int)&off_81BA88 ) /*0x474dec*/
      return 0; /*0x474df5*/
  }
  return `typeinfo for'x1[2 * v4]; /*0x474dee*/
}


// ==== 0x00474E40  ObjectTypeClass::loadTypeMember_5474E40  this=IUnknown  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5474E40(
        unsigned __int8 ***this,
        INIClass *aP1,
        unsigned __int8 *a2,
        int a4)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, aP1, a2, *(&off_81BA88 + a4), (INIClass *)Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = (ObjectClass *)&off_81BA88; /*0x474e69*/
  while ( _strcmpi(Destination, *(char **)v5->__pad_0) ) /*0x474e80*/
  {
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x474e82*/
    ++v4; /*0x474e85*/
    if ( (int)v5 >= (int)&off_81BABC ) /*0x474e8c*/
      return -1; /*0x474e96*/
  }
  return v4; /*0x474e8e*/
}


// ==== 0x00474EE0  SuperWeaponTypeClass::loadSWProperties  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_474EE0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  const void **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a2, a3, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
  v4 = 0; /*0x474f07*/
  v5 = (const void **)&off_7E4C50; /*0x474f09*/
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
int __thiscall sub_474F50(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
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
    v4 = (char *)(*((_DWORD *)MEMORY[0xA8E334] + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString(this, a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read(Destination); /*0x474f93*/
}


// ==== 0x00474FA0  ObjectTypeClass::ReadDouble  this=ObjectTypeClass  sig=csp ====
int __thiscall sub_474FA0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[100]; // [esp+4h] [ebp-64h] BYREF

  INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], Destination, 100); /*0x474fba*/
  if ( strlen(Destination) ) /*0x474fc3*/
    return VocClass::FindByName(Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}


// ==== 0x00474FF0  ObjectTypeClass::ReadDouble2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDouble2(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, void *a4)
{
  INIClass *Name; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  Name = (INIClass *)AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString(this, aP1, a2, Name, (INIClass *)Destination, 32); /*0x475013*/
  return StringTable::Lookup(Destination); /*0x475021*/
}


// ==== 0x00475060  ObjectTypeClass::ReadBool3  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadBool3(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, void *a4)
{
  INIClass *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = (INIClass *)sub_45DD20(a4); /*0x475071*/
  INIClass::GetString(this, aP1, a2, v5, (INIClass *)Destination, 32); /*0x475083*/
  return sub_45DD50(Destination); /*0x475091*/
}


// ==== 0x004750D0  INIClass::ParseFlagList  this=IUnknown  sig=csp ====
int __thiscall INIClass::ParseFlagList(unsigned __int8 ***this, CCINIClass *aP1, unsigned __int8 *a2, int a4)
{
  char *i; // eax
  INIClass String[2]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x4750fa*/
  {
    a4 = 0; /*0x47510d*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x475119*/
      a4 |= COMStub_48DEB0(i); /*0x475129*/
  }
  return a4; /*0x475139*/
}


// ==== 0x00475150  BulletTypeClass::ReadTrajectoryFlags  this=BulletTypeClass  sig=csp ====
char __thiscall sub_475150(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char v4; // bl
  char *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || g_SuperWeaponTypeArray <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)g_SuperWeaponTypeCount; /*0x47517e*/
  v8 = g_SuperWeaponTypeArray; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(_DWORD *)v5; /*0x47518a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, MEMORY[0x817F70]); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(this, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/
}


// ==== 0x00475260  HouseClass::ReadHouseNamesToBitmask  this=IUnknown  sig=csp ====
int __thiscall HouseClass::ReadHouseNamesToBitmask(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        int a4)
{
  char *i; // eax
  INIClass String[2]; // [esp+4h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x47528a*/
  {
    a4 = 0; /*0x47529d*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x4752a9*/
      a4 |= 1 << HouseClass::FindByName(i); /*0x4752c2*/
  }
  return a4; /*0x4752d2*/
}


// ==== 0x004752E0  HouseClass::WriteHouseListToINI  this=HouseClass  sig=csp ====
char __thiscall HouseClass::WriteHouseListToINI(char *this, CCINIClass *aP1, char *a2, int a4)
{
  char v4; // bl
  HouseClass *v5; // ebp
  int v6; // edx
  IUnknown *v8; // [esp+4h] [ebp-88h]
  INIClass Source[2]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x4752ee*/
  Source[0].__pad_0[0] = 0; /*0x4752f6*/
  if ( !a4 || (int)HouseClass_Count <= 0 ) /*0x475307*/
    return 1; /*0x475307*/
  v5 = HouseClass_Array; /*0x47530e*/
  v8 = HouseClass_Count; /*0x475316*/
  do /*0x4753a3*/
  {
    v6 = *(_DWORD *)v5->__pad_0; /*0x47531a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5->__pad_0 + 48)) & a4) != 0 ) /*0x475330*/
    {
      if ( v4 ) /*0x475334*/
        strcat(Source[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x47535b*/
      strcat(Source[0].__pad_0, (const char *)(v6 + 90100)); /*0x47538a*/
      v4 = Source[0].__pad_0[0]; /*0x475393*/
    }
    v5 = (HouseClass *)((char *)v5 + 4); /*0x47539b*/
    v8 = (IUnknown *)((char *)v8 - 1); /*0x47539f*/
  }
  while ( v8 ); /*0x4753a3*/
  if ( v4 ) /*0x4753ae*/
    return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, Source); /*0x4753c9*/
  else
    return 1; /*0x4753d8*/
}


// ==== 0x004753F0  ArmorType::FindIndex  this=ObjectTypeClass  sig=csp ====
int __thiscall ArmorType::FindIndex(unsigned __int8 ***this, CCINIClass *aP1, unsigned __int8 *a2, Armor a3)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, *(&off_7E5210 + a3), Destination, 128); /*0x47541c*/
  return ArmorType::LookupByName(Destination); /*0x47542a*/
}


// ==== 0x004754B0  OverlayTypeClass::ReadINIString  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_4754B0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, unsigned int a4)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(a4); /*0x4754cd*/
  if ( INIClass::GetString(this, a2, a3, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName(Destination); /*0x4754f2*/
  else
    return a4; /*0x475502*/
}


// ==== 0x00475540  SuperWeaponTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindOrCreate(
        unsigned __int8 ***this,
        INIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  void *v4; // esi
  HouseTypeClass *result; // eax
  _BYTE *eax5; // eax
  HouseTypeClass *v6; // eax
  int v8; // ecx
  CCINIClass *i; // edx
  INIClass Destination[2]; // [esp+4h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x475563*/
    return (int)aP3->__pad_0; /*0x4755f8*/
  v4 = (void *)PlayerSlot::NameToDialogID(Destination[0].__pad_0); /*0x475579*/
  if ( BuildingType::IsSpecialType(v4) ) /*0x47557d*/
    return (int)v4; /*0x475586*/
  result = (HouseTypeClass *)SuperWeaponTypeClass::FindByName(Destination); /*0x475596*/
  if ( result == (HouseTypeClass *)-1 ) /*0x47559e*/
  {
    eax5 = (_BYTE *)__2_YAPAXI_Z(0x1B0u); /*0x4755a5*/
    if ( eax5 ) /*0x4755af*/
      v6 = (HouseTypeClass *)SuperWeaponTypeClass::Construct(eax5, Destination[0].__pad_0); /*0x4755b8*/
    else
      v6 = 0; /*0x4755bf*/
    v8 = 0; /*0x4755c7*/
    if ( g_SuperWeaponTypeArray <= 0 ) /*0x4755cb*/
    {
      return -1; /*0x4755df*/
    }
    else
    {
      for ( i = (CCINIClass *)g_SuperWeaponTypeCount; /*0x4755cd*/
            *(HouseTypeClass **)i->__pad_0 != v6;
            i = (CCINIClass *)((char *)i + 4) )
      {
        if ( ++v8 >= g_SuperWeaponTypeArray ) /*0x4755dd*/
          return -1; /*0x4755dd*/
      }
      return v8; /*0x4755ec*/
    }
  }
  return (int)result->__pad_0; /*0x475588*/
}


// ==== 0x00475610  INIClass::SetHouseName  this=AbstractTypeClass  sig=csp ====
char __thiscall INIClass::SetHouseName(char *this, INIClass *aP1, char *a2, INIClass *aP3)
{
  const char *v5; // edi
  INIClass Source[2]; // [esp+Ch] [ebp-80h] BYREF

  strcpy(Source[0].__pad_0, (const char *)&stru_817460.sectionHead[1]); /*0x475638*/
  if ( BuildingType::IsSpecialType(aP3) ) /*0x47564a*/
  {
    FormatHouseClassPlayerName((int)aP3, Source, 128); /*0x47565e*/
    return INIClass::SetString(this, aP1, (INIClass *)a2, Source); /*0x475663*/
  }
  if ( aP3 == (INIClass *)-2 ) /*0x475668*/
  {
    v5 = &g_INI_Key_Digest.__pad_20[8]; /*0x47566e*/
LABEL_10:
    strcpy(Source[0].__pad_0, v5); /*0x4756a6*/
    return INIClass::SetString(this, aP1, (INIClass *)a2, Source); /*0x4756ba*/
  }
  if ( aP3 == (INIClass *)-3 ) /*0x475678*/
  {
    v5 = &g_INI_Key_Digest.__pad_20[8]; /*0x47567e*/
    goto LABEL_10; /*0x475683*/
  }
  if ( (int)aP3 >= 0 && (int)aP3 < g_SuperWeaponTypeArray ) /*0x475694*/
  {
    v5 = (const char *)(*((_DWORD *)g_SuperWeaponTypeCount + (_DWORD)aP3) + 36); /*0x4756a3*/
    goto LABEL_10; /*0x4756a3*/
  }
  return INIClass::SetString(this, aP1, (INIClass *)a2, Source); /*0x4756df*/
}


// ==== 0x004756F0  HouseTypeClass::loadCountryData  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_4756F0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], Destination, 128) ) /*0x475712*/
    return a4; /*0x475782*/
  result = HouseTypeClass::Find(Destination); /*0x47571f*/
  if ( result == -1 ) /*0x475727*/
  {
    v5 = __2_YAPAXI_Z(0xB4u); /*0x47572e*/
    if ( v5 ) /*0x475738*/
      v6 = SideClass::Construct(v5, Destination); /*0x475741*/
    else
      v6 = 0; /*0x475748*/
    v7 = 0; /*0x475751*/
    if ( MEMORY[0x8B4130] <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = MEMORY[0x8B4124]; (_DWORD *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= MEMORY[0x8B4130] ) /*0x475767*/
          return -1; /*0x475767*/
      }
      return v7; /*0x475776*/
    }
  }
  return result; /*0x47576d*/
}


// ==== 0x004757D0  INIClass::GetBool  this=IUnknown  sig=csp ====
int __thiscall INIClass::GetBool(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  int result; // eax
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  result = LookupNameIndex(Destination); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/
}


// ==== 0x00475820  INIClass::SetStringByIndex  this=INIClass  sig=csp ====
char __thiscall INIClass::SetStringByIndex(char *this, INIClass *aP1, char *a2, CCINIClass *aP3)
{
  if ( aP3 < (CCINIClass *)*(&g_MatrixTransformState + 356) ) /*0x47582c*/
    return INIClass::SetString( /*0x475859*/
             this,
             aP1,
             (INIClass *)a2,
             *((INIClass **)&(*(&g_MatrixTransformState + 353))->X + (_DWORD)aP3));
  else
    return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)&stru_817460.sectionHead[1]); /*0x47583d*/
}


// ==== 0x00475870  ScenarioClass::ReadAndParseString  this=IUnknown  sig=csp ====
int __thiscall sub_475870(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], Destination, 128) ) /*0x475892*/
    return ScenarioClass::FindTerrainTypeIndex(Destination); /*0x47589f*/
  else
    return a4; /*0x4758ad*/
}


// ==== 0x004758C0  MapClass::loadTheaterINI  this=ObjectClass  sig=csp ====
char __thiscall MapClass::loadTheaterINI(char *this, INIClass *aP1, char *a2, int a4)
{
  return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)&Theater_Array[112 * a4]); /*0x4758e6*/
}


// ==== 0x004758F0  Scenario::FindBuildingTypeByName  this=IUnknown  sig=csp ====
int __thiscall Scenario::FindBuildingTypeByName(
        unsigned __int8 ***this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, (INIClass *)a1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x475912*/
    return StringList::Find(&g_BuildingTypeClass_Count, Destination[0].__pad_0); /*0x475925*/
  else
    return (int)aP3->__pad_0; /*0x475933*/
}


// ==== 0x00475950  ScenarioClass::loadMapData  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::loadMapData(char *this, CCINIClass *aP1, char *a2, int aP1a)
{
  INIClass *v5; // eax

  v5 = (INIClass *)ScenarioClass::processEndgame(&g_BuildingTypeClass_Count, (INIClass *)aP1a); /*0x47595d*/
  return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, v5); /*0x475974*/
}


// ==== 0x00475980  HouseClass::ReadIntFromINI  this=IUnknown  sig=csp ====
int __thiscall sub_475980(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], Destination, 128) ) /*0x4759a2*/
    return HouseClass::FindHouseIndexByName(Destination); /*0x4759af*/
  else
    return a4; /*0x4759bd*/
}


// ==== 0x004759D0  HouseClass::updateBuildingProduction  this=HouseClass  sig=csp ====
char __thiscall HouseClass::updateBuildingProduction(char *this, INIClass *aP1, char *a2, CCINIClass *aP3)
{
  return INIClass::SetString(this, aP1, (INIClass *)a2, *(&off_7E1B60 + (_DWORD)aP3)); /*0x4759eb*/
}


// ==== 0x004759F0  INIClass::ReadStringValue  this=ObjectTypeClass  sig=csp ====
int __thiscall INIClass::ReadStringValue(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x475a12*/
    return INIClass::readSection(Destination); /*0x475a1f*/
  else
    return (int)aP3->__pad_0; /*0x475a2d*/
}


// ==== 0x00475A60  BuildingClass::ReadBuildingSettings  this=BuildingClass  sig=csp ====
int __thiscall sub_475A60(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // edi
  char *i; // esi
  int IndexByName; // eax
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], String, 128) ) /*0x475a84*/
    return a4; /*0x475b55*/
  v4 = 0; /*0x475a9b*/
  for ( i = strtok(String, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) ) /*0x475aa9*/
  {
    if ( !*i ) /*0x475aaf*/
      break; /*0x475ab2*/
    if ( !_strcmpi(i, aPower) ) /*0x475abe*/
      v4 |= 0x80000000; /*0x475aca*/
    if ( !_strcmpi(i, aFactory) ) /*0x475ad6*/
      v4 |= 0x40000000u; /*0x475ae2*/
    if ( !_strcmpi(i, MEMORY[0x81C01C]) ) /*0x475aee*/
      v4 |= 0x20000000u; /*0x475afa*/
    if ( !_strcmpi(i, MEMORY[0x81C014]) ) /*0x475b06*/
      v4 |= 0x10000000u; /*0x475b12*/
    IndexByName = BuildingTypeClass::FindIndexByName(i); /*0x475b1a*/
    if ( IndexByName != -1 ) /*0x475b22*/
      v4 |= 1 << IndexByName; /*0x475b2d*/
  }
  return v4; /*0x475b4a*/
}


// ==== 0x00475B70  WeaponTypeClass::ReadTrajectoryData  this=WeaponTypeClass  sig=csp ====
char __thiscall sub_475B70(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  int v8; // [esp+4h] [ebp-88h]
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = MEMORY[0x889F64]; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = MEMORY[0xA83C78]; /*0x475b94*/
  if ( MEMORY[0xA83C78] > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v8 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)MEMORY[0xA83C6C]; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Delimiter); /*0x475bf9*/
        strcat(Source, (const char *)(*(_DWORD *)v6 + 36)); /*0x475c27*/
        v4 = v8; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x475c61*/
}


// ==== 0x00475C70  WeaponTypeClass::ReadVeteranData  this=WeaponTypeClass  sig=csp ====
char __thiscall sub_475C70(
        char *this,
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

  Source[0] = MEMORY[0x889F64]; /*0x475c81*/
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
        strcat(Source, MEMORY[0x817F70]); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString(this, a2, a3, Source); /*0x475d39*/
  if ( Block && HIBYTE(a7) ) /*0x475d4f*/
    __3_YAXPAX_Z(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}


// ==== 0x00475D70  INIClass::ReadIntList  this=IUnknown  sig=csp ====
int __thiscall INIClass::ReadIntList(
        unsigned __int8 ***this,
        int a2,
        INIClass *aP2,
        unsigned __int8 *a3,
        void **a4,
        void *a5,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  CCINIClass *v12; // esi
  int v13; // eax
  VectorClass *v14; // esi
  int v15; // ecx
  void *v16; // eax
  bool v17; // zf
  void *v18; // eax
  int v19; // ecx
  void **v21; // [esp+8h] [ebp-21Ch] BYREF
  void *Block; // [esp+Ch] [ebp-218h]
  int v23; // [esp+10h] [ebp-214h]
  char v24; // [esp+15h] [ebp-20Fh]
  int v25; // [esp+18h] [ebp-20Ch]
  int v26; // [esp+1Ch] [ebp-208h]
  INIClass String[8]; // [esp+24h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, aP2, a3, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 512) ) /*0x475d94*/
  {
    VectorClass::Construct(&v21, 0, 0); /*0x475da9*/
    v26 = 10; /*0x475db8*/
    v25 = 0; /*0x475dc0*/
    v21 = &vt_TypeList_int; /*0x475dc4*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x475dd6*/
    {
      if ( !*i ) /*0x475dd8*/
        break; /*0x475dda*/
      v12 = (CCINIClass *)atoi(i); /*0x475de6*/
      if ( v25 < v23 /*0x475e11*/
        || (v24 || !v23)
        && v26 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v21[2])(&v21, v26 + v23, 0) )
      {
        v13 = v25++; /*0x475e1c*/
        *((_DWORD *)Block + v13) = v12; /*0x475e27*/
      }
    }
    v14 = (VectorClass *)a2; /*0x475e3c*/
    IntVector::Copy((_DWORD *)a2, (VectorClass *)&v21); /*0x475e4a*/
    v15 = v26; /*0x475e53*/
    *(_DWORD *)(a2 + 16) = v25; /*0x475e57*/
    v16 = Block; /*0x475e5a*/
    v17 = Block == 0; /*0x475e5e*/
    *(_DWORD *)(a2 + 20) = v15; /*0x475e60*/
    *(_DWORD *)a2 = &vt_TypeList_int; /*0x475e63*/
    v21 = &vt_VectorClass_int; /*0x475e69*/
    if ( !v17 && v24 ) /*0x475e77*/
    {
      __3_YAXPAX_Z(v16); /*0x475e7a*/
      Block = 0; /*0x475e82*/
    }
    v18 = a5; /*0x475e86*/
    v24 = 0; /*0x475e8d*/
    v23 = 0; /*0x475e93*/
    a4 = &vt_VectorClass_int; /*0x475e97*/
    if ( a5 && HIBYTE(a8) ) /*0x475eab*/
      goto LABEL_19; /*0x475eab*/
  }
  else
  {
    v14 = (VectorClass *)a2; /*0x475eaf*/
    *(_DWORD *)(a2 + 4) = 0; /*0x475ec2*/
    *(_DWORD *)(a2 + 8) = 0; /*0x475ec5*/
    *(_BYTE *)(a2 + 12) = 1; /*0x475ec8*/
    *(_BYTE *)(a2 + 13) = 0; /*0x475ecc*/
    *(_DWORD *)a2 = &vt_VectorClass_int; /*0x475ecf*/
    TypeList::Copy((_DWORD *)a2, &a4); /*0x475ed5*/
    v19 = a10; /*0x475ee1*/
    *(_DWORD *)(a2 + 16) = a9; /*0x475ee8*/
    v18 = a5; /*0x475eeb*/
    v17 = a5 == 0; /*0x475ef2*/
    *(_DWORD *)(a2 + 20) = v19; /*0x475ef4*/
    *(_DWORD *)a2 = &vt_TypeList_int; /*0x475ef7*/
    a4 = &vt_VectorClass_int; /*0x475efd*/
    if ( !v17 && HIBYTE(a8) ) /*0x475f11*/
LABEL_19:
      __3_YAXPAX_Z(v18); /*0x475f13*/
  }
  return (int)v14->vtable0; /*0x475f1e*/
}


// ==== 0x00475F30  ScenarioClass::SaveIntListToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveIntListToINI(char *this, INIClass *aP1, char *a2, CCINIClass *aP3)
{
  int i; // ebx
  char Buffer[12]; // [esp+10h] [ebp-20Ch] BYREF
  _BYTE Source[509]; // [esp+1Ch] [ebp-200h] BYREF
  __int16 v9; // [esp+219h] [ebp-3h]
  char v10; // [esp+21Bh] [ebp-1h]

  Source[0] = stru_87C374.__pad_579C[33876]; /*0x475f42*/
  memset(&Source[1], 0, 0x1FCu); /*0x475f58*/
  v9 = 0; /*0x475f5a*/
  v10 = 0; /*0x475f5c*/
  for ( i = 0; i < aP3->sectionHead[0]; ++i ) /*0x475f64*/
  {
    if ( Source[0] ) /*0x475f71*/
      strcat(Source, (const char *)&stru_817F40.nextObject); /*0x475f98*/
    sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, *(INIClass **)(aP3->headNode[0] + 4 * i)); /*0x475fb2*/
    strcat(Source, Buffer); /*0x475fde*/
  }
  return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)Source); /*0x476012*/
}


// ==== 0x00476020  INIClass::ReadExitCellList  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadExitCellList(
        unsigned __int8 ***this,
        int arg0,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        DynamicVector *aP4,
        void *a5,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  INIClass *v11; // esi
  int ExitCellByName; // eax
  TechnoClass *WaypointCoords; // eax
  int Index; // eax
  TechnoClass *v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  VectorClass *v19; // esi
  int v20; // ecx
  CCINIClass *v21; // eax
  bool v22; // zf
  void *v23; // eax
  int v24; // ecx
  void **v26; // [esp+8h] [ebp-234h] BYREF
  VectorClass *Block; // [esp+Ch] [ebp-230h]
  int v28; // [esp+10h] [ebp-22Ch]
  char v29; // [esp+15h] [ebp-227h]
  int v30; // [esp+18h] [ebp-224h]
  int v31; // [esp+1Ch] [ebp-220h]
  int v32; // [esp+28h] [ebp-214h]
  _BYTE v33[8]; // [esp+2Ch] [ebp-210h] BYREF
  _BYTE v34[8]; // [esp+34h] [ebp-208h] BYREF
  INIClass String[8]; // [esp+3Ch] [ebp-200h] BYREF

  if ( INIClass::GetString(this, (INIClass *)a2, a3, (INIClass *)&stru_87C374.__pad_579C[33876], String, 512) ) /*0x476044*/
  {
    VectorClass::Construct(&v26, 0, 0); /*0x476059*/
    v31 = 10; /*0x476068*/
    v30 = 0; /*0x476070*/
    v26 = &vt_TypeList_int; /*0x476074*/
    v11 = (INIClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x476081*/
    if ( v11 ) /*0x476088*/
    {
      while ( 1 ) /*0x47608e*/
      {
        if ( !v11->__pad_0[0] ) /*0x476090*/
          goto LABEL_16; /*0x476090*/
        ExitCellByName = Factory::FindExitCellByName(v11); /*0x476098*/
        if ( ExitCellByName != -1 ) /*0x4760a0*/
          break; /*0x4760a0*/
        Index = BuildingTypeClass::FindIndex(v11); /*0x4760b4*/
        if ( Index != -1 ) /*0x4760bc*/
        {
          WaypointCoords = (TechnoClass *)ScriptAction::GetWaypointCoords( /*0x4760cc*/
                                            v33,
                                            *(IUnknown **)&g_UnitTypeCount2->__pad_0[4 * Index]);
          goto LABEL_8; /*0x4760cc*/
        }
LABEL_15:
        v11 = (INIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x476137*/
        if ( !v11 ) /*0x476149*/
          goto LABEL_16; /*0x476149*/
      }
      WaypointCoords = (TechnoClass *)ScriptAction::GetWaypointCoords( /*0x4760b0*/
                                        v34,
                                        *(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632]
                                                     + 4 * ExitCellByName));
LABEL_8:
      v15 = WaypointCoords; /*0x4760d1*/
      v16 = *(_DWORD *)WaypointCoords->__pad_0; /*0x4760d3*/
      LOBYTE(v32) = v15->__pad_0[4]; /*0x4760da*/
      if ( (_BYTE)v32 ) /*0x4760de*/
      {
        v17 = v16 & 0xFFFFFF | ((unsigned __int8)v32 << 24); /*0x4760f6*/
        if ( v30 < v28 /*0x47611e*/
          || (v29 || !v28)
          && v31 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v26[2])(&v26, v31 + v28, 0) )
        {
          v18 = v30++; /*0x476129*/
          *(_DWORD *)&Block->vtable0[4 * v18] = v17; /*0x476134*/
        }
      }
      goto LABEL_15; /*0x476134*/
    }
LABEL_16:
    v19 = (VectorClass *)arg0; /*0x47614f*/
    IntVector::Copy((_DWORD *)arg0, (VectorClass *)&v26); /*0x47615d*/
    v20 = v31; /*0x476166*/
    *(_DWORD *)(arg0 + 16) = v30; /*0x47616a*/
    v21 = (CCINIClass *)Block; /*0x47616d*/
    v22 = Block == 0; /*0x476171*/
    *(_DWORD *)(arg0 + 20) = v20; /*0x476173*/
    *(_DWORD *)arg0 = &vt_TypeList_int; /*0x476176*/
    v26 = &vt_VectorClass_int; /*0x47617c*/
    if ( !v22 && v29 ) /*0x47618a*/
    {
      __3_YAXPAX_Z(v21); /*0x47618d*/
      Block = 0; /*0x476195*/
    }
    v23 = a5; /*0x476199*/
    v29 = 0; /*0x4761a0*/
    v28 = 0; /*0x4761a6*/
    aP4 = (DynamicVector *)&vt_VectorClass_int; /*0x4761aa*/
    if ( a5 && HIBYTE(a8) ) /*0x4761be*/
      goto LABEL_24; /*0x4761be*/
  }
  else
  {
    v19 = (VectorClass *)arg0; /*0x4761c2*/
    *(_DWORD *)(arg0 + 4) = 0; /*0x4761d5*/
    *(_DWORD *)(arg0 + 8) = 0; /*0x4761d8*/
    *(_BYTE *)(arg0 + 12) = 1; /*0x4761db*/
    *(_BYTE *)(arg0 + 13) = 0; /*0x4761df*/
    *(_DWORD *)arg0 = &vt_VectorClass_int; /*0x4761e2*/
    TypeList::Copy((_DWORD *)arg0, &aP4); /*0x4761e8*/
    v24 = a10; /*0x4761f4*/
    *(_DWORD *)(arg0 + 16) = a9; /*0x4761fb*/
    v23 = a5; /*0x4761fe*/
    v22 = a5 == 0; /*0x476205*/
    *(_DWORD *)(arg0 + 20) = v24; /*0x476207*/
    *(_DWORD *)arg0 = &vt_TypeList_int; /*0x47620a*/
    aP4 = (DynamicVector *)&vt_VectorClass_int; /*0x476210*/
    if ( !v22 && HIBYTE(a8) ) /*0x476224*/
LABEL_24:
      __3_YAXPAX_Z(v23); /*0x476226*/
  }
  return (int)v19->vtable0; /*0x476231*/
}


// ==== 0x00476240  ObjectTypeClass::ReadTypeListINI  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::ReadTypeListINI(char *this, unsigned __int8 *Block, char *a2, ObjectTypeClass *aP3)
{
  int i; // ebp
  int v5; // eax
  int v6; // ecx
  CCINIClass *v8; // [esp+Ch] [ebp-20Ch] BYREF
  char v9; // [esp+10h] [ebp-208h]
  char *v10; // [esp+14h] [ebp-204h]
  _BYTE Source[509]; // [esp+18h] [ebp-200h] BYREF
  __int16 v12; // [esp+215h] [ebp-3h]
  char v13; // [esp+217h] [ebp-1h]

  v10 = this; /*0x47624d*/
  Source[0] = stru_87C374.__pad_579C[33876]; /*0x476252*/
  memset(&Source[1], 0, 0x1FCu); /*0x476268*/
  v12 = 0; /*0x47626a*/
  v13 = 0; /*0x47626c*/
  for ( i = 0; i < aP3->uniqueId; ++i ) /*0x476274*/
  {
    if ( Source[0] ) /*0x476281*/
      strcat(Source, (const char *)&stru_817F40.nextObject); /*0x4762a8*/
    v5 = *(_DWORD *)&aP3->__pad_0[4]; /*0x4762b1*/
    v9 = 0; /*0x4762b4*/
    v6 = *(_DWORD *)(v5 + 4 * i); /*0x4762bc*/
    v9 = HIBYTE(v6); /*0x4762c6*/
    v8 = (CCINIClass *)(v6 & 0xFFFFFF); /*0x4762ce*/
    strcat(Source, (const char *)(System_Read_6E7330(&v8) + 36)); /*0x4762fa*/
  }
  return INIClass::SetString(v10, (INIClass *)Block, (INIClass *)a2, (INIClass *)Source); /*0x47632e*/
}


// ==== 0x00476340  ParticleSystemTypeClass::ReadXYZFromINI  this=IUnknown  sig=csp ====
float *__thiscall sub_476340(unsigned __int8 ***this, float *a2, unsigned __int8 *a3, unsigned __int8 *a4, float *a5)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  double v8; // st7
  float v10; // [esp+4h] [ebp-20Ch]
  float v11; // [esp+8h] [ebp-208h]
  float v12; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a3, a4, &MEMORY[0x889F64], String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Delimiter); /*0x476396*/
    v10 = atof(v5); /*0x4763a1*/
    v6 = strtok(0, Delimiter); /*0x4763ac*/
    v11 = atof(v6); /*0x4763b7*/
    v7 = strtok(0, Delimiter); /*0x4763c2*/
    v8 = atof(v7); /*0x4763c8*/
    v12 = v8; /*0x4763d8*/
    *a2 = v10; /*0x4763e1*/
    a2[1] = v11; /*0x4763e8*/
    a2[2] = v12; /*0x4763ef*/
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


// ==== 0x00476420  INIClass::GetCoord2  this=IUnknown  sig=csp ====
int *__thiscall INIClass::GetCoord2(unsigned __int8 ***this, int *a1, CCINIClass *aP2, unsigned __int8 *a3, int *a4)
{
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  int v10; // eax
  INIClass String[8]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 512) ) /*0x476463*/
  {
    v5 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x476477*/
    v6 = atoi(v5); /*0x476489*/
    v7 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x47648b*/
    v8 = atoi(v7); /*0x47649d*/
    v9 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x47649f*/
    v10 = atoi(v9); /*0x4764a5*/
    *a1 = v6; /*0x4764b6*/
    a1[1] = v8; /*0x4764b8*/
    a1[2] = v10; /*0x4764bd*/
    return a1; /*0x4764c0*/
  }
  else
  {
    *a1 = *a4; /*0x4764d6*/
    a1[1] = a4[1]; /*0x4764db*/
    a1[2] = a4[2]; /*0x4764e2*/
    return a1; /*0x4764cb*/
  }
}


// ==== 0x004764F0  INIClass::ReadTechnoTypeList  this=IUnknown  sig=csp ====
int __thiscall INIClass::ReadTechnoTypeList(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        void **a4,
        void *a5,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  CCINIClass *i; // edi
  int v12; // esi
  CCINIClass *v13; // esi
  int v14; // eax
  VectorClass *v15; // esi
  VectorClass *v16; // eax
  int v17; // edx
  bool v18; // zf
  void *v19; // eax
  int v20; // edx
  void **v22; // [esp+Ch] [ebp-21Ch] BYREF
  VectorClass *Block; // [esp+10h] [ebp-218h]
  int v24; // [esp+14h] [ebp-214h]
  char v25; // [esp+19h] [ebp-20Fh]
  int v26; // [esp+1Ch] [ebp-20Ch]
  int v27; // [esp+20h] [ebp-208h]
  INIClass String[8]; // [esp+28h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, (INIClass *)a2, a3, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 512) ) /*0x476515*/
  {
    TypeList::TechnoTypeConstructor(&v22, 0, 0); /*0x47652a*/
    v27 = 10; /*0x476539*/
    v26 = 0; /*0x476541*/
    v22 = &vt_TypeList_TechnoTypeClass; /*0x476545*/
    for ( i = (CCINIClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x476559*/
          i;
          i = (CCINIClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !i->__pad_0[0] ) /*0x47655f*/
        break; /*0x476561*/
      v12 = 0; /*0x47656c*/
      if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] > 0 ) /*0x476570*/
      {
        while ( _strcmpi(i->__pad_0, (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[24] + 4 * v12) + 36)) ) /*0x47658a*/
        {
          if ( ++v12 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] ) /*0x476594*/
            goto LABEL_14; /*0x476594*/
        }
        v13 = (CCINIClass *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[24] + 4 * v12); /*0x4765a2*/
        if ( v26 < v24 /*0x4765cb*/
          || (v25 || !v24)
          && v27 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v27 + v24, 0) )
        {
          v14 = v26++; /*0x4765da*/
          *(_DWORD *)&Block->vtable0[4 * v14] = *(_DWORD *)v13->__pad_0; /*0x4765e3*/
        }
      }
LABEL_14:
      ; /*0x4765f1*/
    }
    v15 = (VectorClass *)aP1; /*0x4765fe*/
    INIClass::parseSection(aP1, &v22); /*0x47660c*/
    v16 = Block; /*0x476611*/
    v17 = v27; /*0x476619*/
    v18 = Block == 0; /*0x476622*/
    aP1->sectionHead[0] = v26; /*0x476624*/
    aP1->sectionHead[1] = v17; /*0x476627*/
    *(_DWORD *)aP1->__pad_0 = &vt_TypeList_TechnoTypeClass; /*0x47662a*/
    v22 = &vt_VectorClass_TechnoTypeClass; /*0x476630*/
    if ( !v18 && v25 ) /*0x47663a*/
    {
      __3_YAXPAX_Z(v16); /*0x47663d*/
      Block = 0; /*0x476645*/
    }
    v19 = a5; /*0x476649*/
    v25 = 0; /*0x476650*/
    v24 = 0; /*0x476656*/
    a4 = &vt_VectorClass_TechnoTypeClass; /*0x47665a*/
    if ( a5 && HIBYTE(a8) ) /*0x47666a*/
      goto LABEL_23; /*0x47666a*/
  }
  else
  {
    v15 = (VectorClass *)aP1; /*0x47666e*/
    aP1->headNode[0] = 0; /*0x476686*/
    aP1->headNode[1] = 0; /*0x476689*/
    LOBYTE(aP1->headNode[2]) = 1; /*0x47668c*/
    BYTE1(aP1->headNode[2]) = 0; /*0x476690*/
    *(_DWORD *)aP1->__pad_0 = &vt_VectorClass_TechnoTypeClass; /*0x476693*/
    INIClass::writeSection(aP1, &a4); /*0x476695*/
    v19 = a5; /*0x47669a*/
    v20 = a10; /*0x4766a8*/
    v18 = a5 == 0; /*0x4766af*/
    aP1->sectionHead[0] = a9; /*0x4766b1*/
    aP1->sectionHead[1] = v20; /*0x4766b4*/
    *(_DWORD *)aP1->__pad_0 = &vt_TypeList_TechnoTypeClass; /*0x4766b7*/
    a4 = &vt_VectorClass_TechnoTypeClass; /*0x4766bd*/
    if ( !v18 && HIBYTE(a8) ) /*0x4766cd*/
LABEL_23:
      __3_YAXPAX_Z(v19); /*0x4766cf*/
  }
  return (int)v15->vtable0; /*0x4766da*/
}


// ==== 0x004766F0  ScenarioClass::SaveTypeNameListToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveTypeNameListToINI(char *this, INIClass *aP1, char *a2, int a4)
{
  int v4; // edx
  int v5; // ebx
  _BYTE Source[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v8; // [esp+205h] [ebp-3h]
  char v9; // [esp+207h] [ebp-1h]

  Source[0] = MEMORY[0x87F8E4].__pad_5568[20760]; /*0x476700*/
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
        strcat(Source, MEMORY[0x817F70].__pad_0); /*0x476757*/
      strcat(Source, (const char *)(*(_DWORD *)v4 + 36)); /*0x476785*/
      v4 += 4; /*0x476789*/
      --v5; /*0x47678f*/
    }
    while ( v5 ); /*0x476792*/
  }
  return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)Source); /*0x4767b5*/
}


// ==== 0x004767C0  INIClass::ReadSuperWeaponTypeList  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::ReadSuperWeaponTypeList(
        unsigned __int8 ***this,
        _DWORD *a1,
        CCINIClass *aP2,
        CCINIClass *aP3,
        void **a4,
        DynamicVector *aP5,
        int aP1_8,
        __int16 aP1_12,
        int aP1_16,
        int aP1_20,
        int aP1_24)
{
  CCINIClass *v11; // esi
  CCINIClass *v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  DynamicVector *v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  VectorClass *v20; // esi
  DynamicVector *v21; // eax
  int v22; // edx
  bool v23; // zf
  DynamicVector *v24; // eax
  int v25; // edx
  void **v27; // [esp+8h] [ebp-9Ch] BYREF
  void *Block; // [esp+Ch] [ebp-98h]
  DynamicVector *v29; // [esp+10h] [ebp-94h]
  char v30; // [esp+15h] [ebp-8Fh]
  int v31; // [esp+18h] [ebp-8Ch]
  int v32; // [esp+1Ch] [ebp-88h]
  INIClass String[2]; // [esp+24h] [ebp-80h] BYREF

  if ( INIClass::GetString( /*0x4767e3*/
         this,
         (INIClass *)aP2,
         (unsigned __int8 *)aP3,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         String,
         128) )
  {
    VectorClass::Construct(&v27, 0, 0); /*0x4767fa*/
    v32 = 10; /*0x476809*/
    v31 = 0; /*0x476811*/
    v27 = &vt_TypeList_int; /*0x476819*/
    v11 = (CCINIClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x476826*/
    if ( v11 ) /*0x47682d*/
    {
      while ( 1 ) /*0x476833*/
      {
        if ( !v11->__pad_0[0] ) /*0x476836*/
          goto LABEL_23; /*0x476836*/
        v12 = (CCINIClass *)SuperWeaponTypeClass::FindByName(v11); /*0x476843*/
        if ( v12 != (CCINIClass *)-1 ) /*0x476848*/
        {
          if ( v31 < (int)v29 /*0x47687f*/
            || (v30 || !v29)
            && v32 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v27[2])(&v27, &v29->__pad_0[v32], 0) )
          {
            v13 = v31++; /*0x47688e*/
            *((_DWORD *)Block + v13) = v12; /*0x476899*/
          }
          goto LABEL_22; /*0x47689c*/
        }
        v14 = HouseTypeClass::Find(v11); /*0x4768a3*/
        if ( v14 != -1 ) /*0x4768ab*/
        {
          v15 = 0; /*0x4768b3*/
          v16 = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67664] + 4 * v14); /*0x4768b5*/
          if ( *(int *)(v16 + 168) > 0 ) /*0x4768c0*/
            break; /*0x4768c0*/
        }
LABEL_22:
        v11 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x476922*/
        if ( !v11 ) /*0x476935*/
          goto LABEL_23; /*0x476935*/
      }
      v17 = v29; /*0x4768c2*/
      while ( 1 ) /*0x4768cc*/
      {
        v18 = (_DWORD *)(*(_DWORD *)(v16 + 156) + 4 * v15); /*0x4768cc*/
        if ( v31 < (int)v17 ) /*0x4768d5*/
          goto LABEL_19; /*0x4768d5*/
        if ( !v30 && v17 || v32 <= 0 ) /*0x4768e9*/
          goto LABEL_21; /*0x4768e9*/
        if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v27[2])(&v27, &v17->__pad_0[v32], 0) ) /*0x4768f8*/
        {
LABEL_19:
          v19 = v31++; /*0x476907*/
          *((_DWORD *)Block + v19) = *v18; /*0x476910*/
        }
        v17 = v29; /*0x476913*/
LABEL_21:
        if ( ++v15 >= *(_DWORD *)(v16 + 168) ) /*0x476920*/
          goto LABEL_22; /*0x476920*/
      }
    }
LABEL_23:
    v20 = (VectorClass *)a1; /*0x47693b*/
    IntVector::Copy(a1, (VectorClass *)&v27); /*0x476949*/
    v21 = (DynamicVector *)Block; /*0x47694e*/
    v22 = v32; /*0x476956*/
    v23 = Block == 0; /*0x47695f*/
    a1[4] = v31; /*0x476961*/
    a1[5] = v22; /*0x476964*/
    *a1 = &vt_TypeList_int; /*0x476967*/
    v27 = &vt_VectorClass_int; /*0x47696d*/
    if ( !v23 && v30 ) /*0x476979*/
    {
      __3_YAXPAX_Z(v21); /*0x47697c*/
      Block = 0; /*0x476984*/
    }
    v24 = aP5; /*0x47698c*/
    a4 = &vt_VectorClass_int; /*0x476993*/
    v30 = 0; /*0x47699b*/
    v29 = 0; /*0x4769a2*/
    if ( aP5 && HIBYTE(aP1_12) ) /*0x4769b6*/
      goto LABEL_31; /*0x4769b6*/
  }
  else
  {
    v20 = (VectorClass *)a1; /*0x4769ba*/
    IntVector::Copy(a1, (VectorClass *)&a4); /*0x4769cb*/
    v24 = aP5; /*0x4769d0*/
    v25 = aP1_20; /*0x4769de*/
    a1[4] = aP1_16; /*0x4769e5*/
    a1[5] = v25; /*0x4769ea*/
    *a1 = &vt_TypeList_int; /*0x4769ed*/
    a4 = &vt_VectorClass_int; /*0x4769f3*/
    if ( v24 && HIBYTE(aP1_12) ) /*0x476a09*/
LABEL_31:
      __3_YAXPAX_Z(v24); /*0x476a0b*/
  }
  return v20->vtable0; /*0x476a16*/
}


// ==== 0x00476A20  INIClass::WriteSuperWeaponList  this=INIClass  sig=csp ====
char __thiscall sub_476A20(
        char *this,
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

  Source[0] = MEMORY[0x889F64]; /*0x476a32*/
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
        strcat(Source, MEMORY[0x817F70]); /*0x476a8a*/
      v13 = *v11++; /*0x476a93*/
      strcat(Source, (const char *)(*((_DWORD *)g_SuperWeaponTypeCount + v13) + 36)); /*0x476ac3*/
      --v12; /*0x476aca*/
    }
    while ( v12 ); /*0x476acd*/
    v10 = Block; /*0x476acf*/
  }
  v14 = INIClass::SetString(this, a2, a3, Source); /*0x476af7*/
  if ( v10 && HIBYTE(a7) ) /*0x476b04*/
    __3_YAXPAX_Z(v10); /*0x476b07*/
  return v14; /*0x476b0f*/
}


// ==== 0x00476B20  INIClass::ReadRGBColorList  this=IUnknown  sig=csp ====
int __thiscall sub_476B20(
        unsigned __int8 ***this,
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

  if ( INIClass::GetString(this, a3, a4, &MEMORY[0x889F64], String, 512) ) /*0x476b45*/
  {
    BuildingTypeClass::loadBuildingProperty_b_5478850(0, 0); /*0x476b5a*/
    v31 = 10; /*0x476b69*/
    v30 = 0; /*0x476b71*/
    v26 = &vt_TypeList_RGBClass; /*0x476b75*/
    for ( i = strtok(String, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) ) /*0x476b87*/
    {
      if ( !*i ) /*0x476b8d*/
        break; /*0x476b8f*/
      v23 = 1; /*0x476ba3*/
      v24 = (unsigned __int8)atoi(i + 1); /*0x476bb4*/
      v12 = strtok(0, MEMORY[0x817F70]); /*0x476bc4*/
      if ( v12 && *v12 ) /*0x476bd0*/
        HIBYTE(v24) = atoi(v12); /*0x476bdd*/
      else
        v23 = 0; /*0x476be3*/
      v13 = strtok(0, MEMORY[0x817F70]); /*0x476bed*/
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
    INIClass::parseKeyValue(&v26); /*0x476c9c*/
    v17 = Block; /*0x476ca1*/
    v18 = v31; /*0x476ca9*/
    v19 = Block == 0; /*0x476cb2*/
    *(_DWORD *)(a2 + 16) = v30; /*0x476cb4*/
    *(_DWORD *)(a2 + 20) = v18; /*0x476cb7*/
    *(_DWORD *)a2 = &vt_TypeList_RGBClass; /*0x476cba*/
    v26 = &vt_VectorClass_RGBClass; /*0x476cc0*/
    if ( !v19 && v29 ) /*0x476cca*/
    {
      __3_YAXPAX_Z(v17); /*0x476ccd*/
      Block = 0; /*0x476cd5*/
    }
    v20 = a6; /*0x476cd9*/
    v29 = 0; /*0x476ce0*/
    v28 = 0; /*0x476ce6*/
    a5 = &vt_VectorClass_RGBClass; /*0x476cea*/
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
    *(_DWORD *)a2 = &vt_VectorClass_RGBClass; /*0x476d23*/
    ParticleTypeClass::EnsureCapacity(&a5); /*0x476d25*/
    v20 = a6; /*0x476d2a*/
    v21 = a10; /*0x476d38*/
    v19 = a6 == 0; /*0x476d3f*/
    *(_DWORD *)(a2 + 16) = a9; /*0x476d41*/
    *(_DWORD *)(a2 + 20) = v21; /*0x476d44*/
    *(_DWORD *)a2 = &vt_TypeList_RGBClass; /*0x476d47*/
    a5 = &vt_VectorClass_RGBClass; /*0x476d4d*/
    if ( !v19 && HIBYTE(a8) ) /*0x476d5d*/
LABEL_26:
      __3_YAXPAX_Z(v20); /*0x476d5f*/
  }
  return v16; /*0x476d6a*/
}


// ==== 0x00476D80  Hash::ComputeHashSHA1  this=IUnknown  sig=csp ====
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
    v4[0] = (int)&vt_SHAPipe; /*0x476dd2*/
    INIClass::WriteToString((_DWORD *)this, (int)v4); /*0x476dda*/
    SHA1::ComputeThunk(this + 65); /*0x476de7*/
    *(_BYTE *)(this + 64) = 1; /*0x476df0*/
    Pipe::Dtor(v4); /*0x476df4*/
  }
  memset(v3, 0, sizeof(v3)); /*0x476e03*/
  return Checksummer::Add_Buffer(v3, (unsigned __int8 *)(this + 65), 20); /*0x476e14*/
}


// ==== 0x00476E20  ObjectClass::method_476E20  this=ObjectClass  sig=csp ====
int __thiscall sub_476E20(int this)
{
  int v3[3]; // [esp+4h] [ebp-80h] BYREF
  char v4; // [esp+10h] [ebp-74h]
  int v5; // [esp+28h] [ebp-5Ch]
  int v6; // [esp+2Ch] [ebp-58h]
  int v7; // [esp+30h] [ebp-54h]
  int v8; // [esp+34h] [ebp-50h]
  int v9; // [esp+38h] [ebp-4Ch]
  int v10; // [esp+3Ch] [ebp-48h]
  int v11; // [esp+40h] [ebp-44h]

  v3[1] = 0; /*0x476e29*/
  v3[2] = 0; /*0x476e2d*/
  v4 = 0; /*0x476e31*/
  v10 = 0; /*0x476e35*/
  v11 = 0; /*0x476e39*/
  v5 = 1732584193; /*0x476e44*/
  v6 = -271733879; /*0x476e4c*/
  v7 = -1732584194; /*0x476e54*/
  v8 = 271733878; /*0x476e5c*/
  v9 = -1009589776; /*0x476e64*/
  v3[0] = (int)&vt_SHAPipe; /*0x476e6c*/
  INIClass::WriteToString((_DWORD *)this, (int)v3); /*0x476e74*/
  SHA1::ComputeThunk(v3, (char *)(this + 65)); /*0x476e81*/
  *(_BYTE *)(this + 64) = 1; /*0x476e8a*/
  return Pipe::Dtor(v3); /*0x476e93*/
}


// ==== 0x00476EA0  ObjectClass::method_476EA0  this=ObjectClass  sig=csp ====
void __thiscall sub_476EA0(_BYTE *this)
{
  this->q040 = 0; /*0x476ea0*/
}


// ==== 0x00476EB0  INIEntry::GetTechnoType  this=IUnknown  sig=csp ====
int __thiscall INIEntry::GetTechnoType(unsigned __int8 ***this, CCINIClass *aP1, unsigned __int8 *a2)
{
  int ExitCellByName; // eax
  int Index; // eax
  int v6; // eax
  int IndexByName; // eax
  INIClass Destination[2]; // [esp+4h] [ebp-80h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&stru_817460.sectionHead[1], Destination, 128); /*0x476ed5*/
  ExitCellByName = Factory::FindExitCellByName(Destination); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336] + 4 * ExitCellByName); /*0x476eef*/
  Index = BuildingTypeClass::FindIndex(Destination); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * Index]; /*0x476f10*/
  v6 = TypeClass::FindByName(Destination); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *(_DWORD *)&MEMORY[0xA8B21C]->__pad_0[4 * v6]; /*0x476f31*/
  IndexByName = BuildingTypeClass::FindIndexByName(Destination); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((_DWORD *)g_TriggerTypeCount + IndexByName); /*0x476f52*/
}


// ==== 0x00476FC0  ObjectTypeClass::loadTypeMember_476FC0  this=IUnknown  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_476FC0(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  INIClass *v5; // eax
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF

  v5 = (INIClass *)sub_48E030((unsigned int)aP3); /*0x476fdd*/
  if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) ) /*0x476ff5*/
    return ObjectTypeClass::loadTypeMember_48DFF0(Destination); /*0x477002*/
  else
    return (int)aP3->__pad_0; /*0x477012*/
}


// ==== 0x00477050  AnimTypeClass::ReadINIString  this=AbstractTypeClass  sig=csp ====
int __thiscall AnimTypeClass::ReadINIString(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, Layer a3)
{
  INIClass *v5; // eax
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF

  v5 = (INIClass *)globalHelper_08E090(a3); /*0x47706d*/
  if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName(Destination); /*0x477092*/
  else
    return a3; /*0x4770a2*/
}


// ==== 0x004770E0  LoadBuildingTypeClassPrerequisites  this=TypeList  sig=csp ====
VectorClass *__fastcall LoadBuildingTypeClassPrerequisites(
        _DWORD *a1,
        unsigned __int8 ***edx0,
        INIClass *a3,
        unsigned __int8 *a2,
        VectorClass a5,
        int a6,
        int a7,
        int a8)
{
  CCINIClass *i; // esi
  char v10; // bl
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  DynamicVector aP1; // [esp+2Ch] [ebp-A0h] BYREF

  if ( INIClass::GetString(edx0, a3, a2, (INIClass *)&stru_87C374.__pad_579C[33876], (INIClass *)aP1.__pad_20, 128) ) /*0x47710a*/
  {
    DynamicVectorClass::Construct(&aP1, 0, 0); /*0x477121*/
    *(_DWORD *)aP1.__pad_0 = &vt_TypeList_int; /*0x47712a*/
    for ( i = (CCINIClass *)strtok(aP1.__pad_20, (ObjectClass *)&stru_817F40.nextObject); /*0x477144*/
          i;
          i = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x47714a*/
        break; /*0x47714d*/
      v10 = 0; /*0x477159*/
      if ( !_strcmpi(i->__pad_0, aPower) ) /*0x47715b*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x477194*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v11 = aP1.field_10++; /*0x47719f*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v11) = -1; /*0x4771aa*/
        }
        v10 = 1; /*0x4771b1*/
      }
      if ( !_strcmpi(i->__pad_0, aFactory) ) /*0x4771b9*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x4771f2*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v12 = aP1.field_10++; /*0x4771fd*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v12) = -2; /*0x477208*/
        }
        v10 = 1; /*0x47720f*/
      }
      if ( !_strcmpi(i->__pad_0, (char *)&g_INI_Key_Digest.INIClass_field_3C) ) /*0x477217*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x477250*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v13 = aP1.field_10++; /*0x47725b*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v13) = -3; /*0x477266*/
        }
        v10 = 1; /*0x47726d*/
      }
      if ( !_strcmpi(i->__pad_0, &g_INI_Key_Digest.needsSave_flag) ) /*0x477275*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x4772ae*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v14 = aP1.field_10++; /*0x4772b9*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v14) = -4; /*0x4772c4*/
        }
        v10 = 1; /*0x4772cb*/
      }
      if ( !_strcmpi(i->__pad_0, aTech) ) /*0x4772d3*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x47730c*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v15 = aP1.field_10++; /*0x477317*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v15) = -5; /*0x477322*/
        }
        v10 = 1; /*0x477329*/
      }
      if ( _strcmpi(i->__pad_0, aProc) ) /*0x477331*/
      {
        if ( !v10 ) /*0x47738b*/
        {
          aP1.field_1C = BuildingTypeClass::FindIndexByName(i); /*0x477397*/
          if ( aP1.field_1C != -1 ) /*0x47739b*/
            DynamicVector::Add_Alt(&aP1, (VectorClass *)&aP1.field_1C); /*0x4773a6*/
        }
      }
      else if ( (int)aP1.field_10 < aP1.field_8 /*0x47736a*/
             || (aP1.__pad_C[1] || !aP1.field_8)
             && *(int *)aP1.__pad_14 > 0
             && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
                  &aP1,
                  aP1.field_8 + *(_DWORD *)aP1.__pad_14,
                  0) )
      {
        v16 = aP1.field_10++; /*0x477375*/
        *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v16) = -6; /*0x477380*/
      }
    }
    DynamicVectorClass::Copy(a1, &aP1); /*0x4773cb*/
    *a1 = &vt_TypeList_int; /*0x4773d9*/
    *(_DWORD *)aP1.__pad_0 = &vt_VectorClass_int; /*0x4773df*/
    VectorClass::Destroy((int)&aP1); /*0x4773e3*/
    a5.vtable0 = &vt_VectorClass_int; /*0x4773ef*/
    VectorClass::Destroy((int)&a5); /*0x4773f6*/
    return (VectorClass *)a1; /*0x4773fb*/
  }
  else
  {
    VectorClass::Copy(a1, &a5); /*0x477413*/
    a5.vtable0 = &vt_VectorClass_int; /*0x47741f*/
    VectorClass::Destroy((int)&a5); /*0x47742a*/
    return (VectorClass *)a1; /*0x47742f*/
  }
}


// ==== 0x00477440  GameSetup::ParseCoordTriple  this=IUnknown  sig=csp ====
const char *__thiscall GameSetup::ParseCoordTriple(
        unsigned __int8 ***this,
        INIClass *aP1,
        CCINIClass *aP2,
        int *a3,
        INIClass *aP4,
        CCINIClass *aP5)
{
  const char *result; // eax
  char *v7; // eax
  char *v8; // eax
  _BYTE String[509]; // [esp+4h] [ebp-200h] BYREF
  __int16 v10; // [esp+201h] [ebp-3h]
  char v11; // [esp+203h] [ebp-1h]

  String[0] = MEMORY[0x87F8E4].__pad_5568[20760]; /*0x47744e*/
  memset(&String[1], 0, 0x1FCu); /*0x477462*/
  v10 = 0; /*0x477464*/
  v11 = 0; /*0x47746a*/
  result = (const char *)INIClass::GetString( /*0x477483*/
                           this,
                           aP1,
                           (unsigned __int8 *)aP2,
                           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                           (INIClass *)String,
                           512);
  if ( result ) /*0x47748b*/
  {
    v7 = strtok(String, MEMORY[0x817F70].__pad_0); /*0x477497*/
    if ( v7 ) /*0x4774a1*/
      *a3 = atoi(v7); /*0x4774b3*/
    v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x4774bc*/
    if ( v8 ) /*0x4774c6*/
      *(_DWORD *)aP4->__pad_0 = atoi(v8); /*0x4774d8*/
    result = strtok(0, MEMORY[0x817F70].__pad_0); /*0x4774e1*/
    if ( result ) /*0x4774eb*/
    {
      result = (const char *)atoi(result); /*0x4774ee*/
      *(_DWORD *)aP5->__pad_0 = result; /*0x4774fd*/
    }
  }
  return result; /*0x47748a*/
}


// ==== 0x00477510  GameSetup::FormatToString  this=AbstractClass  sig=csp ====
char __thiscall GameSetup::FormatToString(
        char *this,
        unsigned __int8 *Block,
        char *a2,
        CCINIClass *aP3,
        CCINIClass *aP4,
        int a6)
{
  _BYTE Buffer[509]; // [esp+8h] [ebp-200h] BYREF
  __int16 v9; // [esp+205h] [ebp-3h]
  char v10; // [esp+207h] [ebp-1h]

  Buffer[0] = MEMORY[0x87F8E4].__pad_5568[20760]; /*0x47751f*/
  memset(&Buffer[1], 0, 0x1FCu); /*0x47752e*/
  v9 = 0; /*0x47753e*/
  v10 = 0; /*0x477540*/
  sprintf(Buffer, (const char *const)&MEMORY[0x818994].sectionCount, aP3, aP4, a6); /*0x477555*/
  return INIClass::SetString(this, (INIClass *)Block, (INIClass *)a2, (INIClass *)Buffer); /*0x477579*/
}


// ==== 0x00477590  ObjectTypeClass::loadTypeMember  this=IUnknown  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5477590(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  char *v4; // esi
  ObjectClass *result; // eax
  bool v6; // zf
  INIClass String[2]; // [esp+8h] [ebp-80h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, *(&off_81BABC + (_DWORD)aP3), String, 128); /*0x4775c1*/
  v4 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x4775d5*/
  result = (ObjectClass *)_strcmpi(v4, MEMORY[0x817F64]); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)&stru_81BB58.headNode[1]) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4, aStrong) == 0; /*0x477624*/
      result = (ObjectClass *)2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return (int)aP3->__pad_0; /*0x47762d*/
    }
    else
    {
      return 1; /*0x477607*/
    }
  }
  return (int)result->__pad_0; /*0x4775e9*/
}


// ==== 0x00477640  INIEntry::ReadAbilities  this=IUnknown  sig=csp ====
int __thiscall INIEntry::ReadAbilities(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        CCINIClass *aP2,
        unsigned __int8 *a3,
        int a5)
{
  __int16 v5; // si
  char *i; // eax
  ObjectClass *v7; // eax
  VectorClass *v9; // [esp+4h] [ebp-94h]
  int v10; // [esp+8h] [ebp-90h]
  int v11; // [esp+Ch] [ebp-8Ch]
  int v12; // [esp+10h] [ebp-88h]
  __int16 v13; // [esp+14h] [ebp-84h]
  INIClass String[2]; // [esp+18h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x477663*/
  {
    v5 = 0; /*0x477674*/
    v13 = 0; /*0x47767c*/
    v9 = 0; /*0x477681*/
    v10 = 0; /*0x477685*/
    v11 = 0; /*0x477689*/
    v12 = 0; /*0x47768d*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x47769b*/
    {
      if ( !*i ) /*0x47769d*/
        break; /*0x4776a0*/
      v7 = INIEntry::LookupByName(i); /*0x4776a4*/
      if ( v7 != (ObjectClass *)-1 ) /*0x4776ac*/
      {
        *((_BYTE *)&v9 + (_DWORD)v7) = 1; /*0x4776ae*/
        v5 = v13; /*0x4776b3*/
      }
    }
    *(_DWORD *)aP1->__pad_0 = v9; /*0x4776d8*/
    aP1->headNode[0] = v10; /*0x4776de*/
    aP1->headNode[1] = v11; /*0x4776e5*/
    aP1->headNode[2] = v12; /*0x4776ec*/
    LOWORD(aP1->sectionHead[0]) = v5; /*0x4776ef*/
    return (int)aP1->__pad_0; /*0x4776cb*/
  }
  else
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)a5; /*0x47770f*/
    aP1->headNode[0] = *(_DWORD *)(a5 + 4); /*0x477714*/
    aP1->headNode[1] = *(_DWORD *)(a5 + 8); /*0x47771a*/
    aP1->headNode[2] = *(_DWORD *)(a5 + 12); /*0x477720*/
    LOWORD(aP1->sectionHead[0]) = *(_WORD *)(a5 + 16); /*0x477728*/
    return (int)aP1->__pad_0; /*0x477704*/
  }
}


// ==== 0x00477740  Pipe::477740  this=Pipe  sig=csp ====
int __thiscall VtableStub::477740(void *this)
{
  return (*(int (__thiscall **)(void *))(this->Pipe_field_0x04)(this);
}


// ==== 0x00477750  SHAPipe::ScalarDtor  this=SHAPipe  sig=csp ====
int *__thiscall VectorClass::ScalarDtor(SHAPipe *this, char a2)
{
  Pipe::Dtor((int *)this); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    __3_YAXPAX_Z(this); /*0x477760*/
  return (int *)this; /*0x47776a*/
}


// ==== 0x00477770  FileStraw::QueryInterface  this=FileStraw  sig=csp ====
FileStraw *__thiscall FileStraw_Destru::QueryInterface(void *Block, char a2)
{
  FileStraw::Destructor((int)Block); /*0x477773*/
  if ( (a2 & 1) != 0 ) /*0x47777d*/
    __3_YAXPAX_Z(Block); /*0x477780*/
  return (FileStraw *)Block; /*0x47778a*/
}


// ==== 0x00477790  FilePipe::QueryInterface  this=FilePipe  sig=csp ====
FilePipe *__thiscall FilePipe::QueryInterface(void *Block, char a2)
{
  FilePipe::Destructor((int)Block); /*0x477793*/
  if ( (a2 & 1) != 0 ) /*0x47779d*/
    __3_YAXPAX_Z(Block); /*0x4777a0*/
  return (FilePipe *)Block; /*0x4777aa*/
}


// ==== 0x004777B0  VectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Copy(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x4777bd*/
  this->Capacity = 0; /*0x4777c0*/
  this->q030 = 1; /*0x4777c3*/
  this->__pad_034 = 0; /*0x4777c7*/
  *this = &vt_VectorClass_int; /*0x4777ca*/
  if ( this != (_DWORD *)aP1 ) /*0x4777d0*/
  {
    VectorClass::Destroy((int)this); /*0x4777d2*/
    v3 = aP1->Capacity; /*0x4777d8*/
    this->Capacity = v3; /*0x4777dd*/
    if ( v3 ) /*0x4777e0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x4777e6*/
      this->Items = v4; /*0x4777f0*/
      if ( v4 ) /*0x4777f3*/
      {
        v5 = this->Capacity; /*0x4777f5*/
        v6 = 0; /*0x4777f8*/
        this->__pad_034 = 1; /*0x4777fc*/
        if ( v5 > 0 ) /*0x477800*/
        {
          do /*0x477814*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x47780b*/
            ++v6; /*0x477811*/
          }
          while ( v6 < this->Capacity ); /*0x477814*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x477818*/
      this->__pad_034 = 0; /*0x47781b*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x477821*/
  this->q005 = aP1[1].Items; /*0x477827*/
  *this = &vt_TypeList_int; /*0x47782a*/
  return this; /*0x477832*/
}


// ==== 0x00477840  _DynamicVectorClass_H::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x477846*/
  *(_DWORD *)(this + 16) = 0; /*0x477849*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x477850*/
  {
    __3_YAXPAX_Z(v2); /*0x477856*/
    *(_DWORD *)(this + 4) = 0; /*0x47785e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477861*/
  *(_DWORD *)(this + 8) = 0; /*0x477864*/
}


// ==== 0x00477870  _DynamicVectorClass_H::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x477870*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/
}


// ==== 0x00477890  _VectorClass_H::GetAt_Copy  this=VectorClass  sig=csp ====
int __thiscall VectorClass_GetAt_Copy(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x47789a*/
}


// ==== 0x004778A0  _DynamicVectorClass_PAVTechnoTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4778a6*/
  *(_DWORD *)(this + 16) = 0; /*0x4778a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4778b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4778b6*/
    *(_DWORD *)(this + 4) = 0; /*0x4778be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4778c1*/
  *(_DWORD *)(this + 8) = 0; /*0x4778c4*/
}


// ==== 0x004778D0  _DynamicVectorClass_PAVTechnoTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4778d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/
}


// ==== 0x004778F0  _VectorClass_PAVTechnoTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4778fa*/
}


// ==== 0x00477900  _DynamicVectorClass_VRGBClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall ParticleTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x477906*/
  *(_DWORD *)(this + 16) = 0; /*0x477909*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(_DWORD *)(this + 4) = 0; /*0x47791e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477921*/
  *(_DWORD *)(this + 8) = 0; /*0x477924*/
}


// ==== 0x00477930  _DynamicVectorClass_VRGBClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x477930*/
    return (a2 - *(_DWORD *)(this + 4)) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}


// ==== 0x00477960  _VectorClass_VRGBClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38_::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  v3 = this->Items + 3 * a3; /*0x47796d*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x477978*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x47797f*/
  return a2; /*0x47797b*/
}


// ==== 0x00477990  _TypeList_H::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477993*/
  *Block = &vt_VectorClass_int; /*0x477996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    *(Block + 1) = 0; /*0x4779b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4779bb*/
  *(Block + 2) = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(Block); /*0x4779cb*/
  return (TypeList *)Block; /*0x4779d5*/
}


// ==== 0x004779E0  DynamicVectorClass::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::Copy(_DWORD *this, DynamicVector *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x4779ed*/
  this->Capacity = 0; /*0x4779f0*/
  this->q030 = 1; /*0x4779f3*/
  this->__pad_034 = 0; /*0x4779f7*/
  *this = &vt_VectorClass_int; /*0x4779fa*/
  if ( this != (_DWORD *)aP1 ) /*0x477a00*/
  {
    VectorClass::Destroy((int)this); /*0x477a02*/
    v3 = aP1->field_8; /*0x477a08*/
    this->Capacity = v3; /*0x477a0d*/
    if ( v3 ) /*0x477a10*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x477a16*/
      this->Items = v4; /*0x477a20*/
      if ( v4 ) /*0x477a23*/
      {
        v5 = this->Capacity; /*0x477a25*/
        v6 = 0; /*0x477a28*/
        this->__pad_034 = 1; /*0x477a2c*/
        if ( v5 > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x477a3b*/
            ++v6; /*0x477a41*/
          }
          while ( v6 < this->Capacity ); /*0x477a44*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x477a48*/
      this->__pad_034 = 0; /*0x477a4b*/
    }
  }
  this->q010 = aP1->field_10; /*0x477a51*/
  this->q005 = *(_DWORD *)aP1->__pad_14; /*0x477a57*/
  *this = &vt_DynamicVectorClass_int; /*0x477a5a*/
  return this; /*0x477a62*/
}


// ==== 0x00477A70  _TypeList_PAVTechnoTypeClass::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall FilePipe_30_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477a73*/
  *Block = &vt_VectorClass_TechnoTypeClass; /*0x477a76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x477a80*/
  {
    __3_YAXPAX_Z(v3); /*0x477a88*/
    *(Block + 1) = 0; /*0x477a90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x477a9b*/
  *(Block + 2) = 0; /*0x477aa1*/
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    __3_YAXPAX_Z(Block); /*0x477aab*/
  return (TypeList *)Block; /*0x477ab5*/
}


// ==== 0x00477AC0  _TypeList_VRGBClass::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall ParticleTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477ac3*/
  *Block = &vt_VectorClass_RGBClass; /*0x477ac6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x477ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x477ad8*/
    *(Block + 1) = 0; /*0x477ae0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x477aeb*/
  *(Block + 2) = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    __3_YAXPAX_Z(Block); /*0x477afb*/
  return (TypeList *)Block; /*0x477b05*/
}


// ==== 0x00477B10  _DynamicVectorClass_H::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall IntDynamicVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477b13*/
  *Block = &vt_VectorClass_int; /*0x477b16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x477b20*/
  {
    __3_YAXPAX_Z(v3); /*0x477b28*/
    *(Block + 1) = 0; /*0x477b30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x477b3b*/
  *(Block + 2) = 0; /*0x477b41*/
  if ( (a2 & 1) != 0 ) /*0x477b48*/
    __3_YAXPAX_Z(Block); /*0x477b4b*/
  return (DynamicVector *)Block; /*0x477b55*/
}


// ==== 0x00477B60  IntVector::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall IntVector::Copy(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x477b6d*/
  this->Capacity = 0; /*0x477b70*/
  this->q030 = 1; /*0x477b73*/
  this->__pad_034 = 0; /*0x477b77*/
  *this = &vt_VectorClass_int; /*0x477b7a*/
  if ( this == (_DWORD *)aP1 ) /*0x477b80*/
    return this; /*0x477b80*/
  VectorClass::Destroy((int)this); /*0x477b82*/
  v3 = aP1->Capacity; /*0x477b88*/
  this->Capacity = v3; /*0x477b8d*/
  if ( !v3 ) /*0x477b90*/
  {
    this->Items = 0; /*0x477bce*/
    this->__pad_034 = 0; /*0x477bd1*/
    return this; /*0x477bd4*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x477b96*/
  this->Items = v4; /*0x477ba0*/
  if ( !v4 ) /*0x477ba3*/
    return this; /*0x477ba3*/
  v5 = this->Capacity; /*0x477ba5*/
  v6 = 0; /*0x477ba8*/
  this->__pad_034 = 1; /*0x477bac*/
  if ( v5 <= 0 ) /*0x477bb0*/
    return this; /*0x477bb0*/
  do /*0x477bc4*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->?[3] + 4 * v6); /*0x477bbb*/
    ++v6; /*0x477bc1*/
  }
  while ( v6 < this->Capacity ); /*0x477bc4*/
  return this; /*0x477bc8*/
}


// ==== 0x00477BE0  VectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::Construct(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x477beb*/
  this->Capacity = a2; /*0x477bee*/
  this->q030 = 1; /*0x477bf1*/
  this->__pad_034 = 0; /*0x477bf5*/
  *this = &VectorClass<int>::`vftable'; /*0x477bf8*/
  if ( a2 ) /*0x477bfe*/
  {
    if ( a3 ) /*0x477c06*/
    {
      this->Items = a3; /*0x477c08*/
      return this; /*0x477c0e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x477c1d*/
    this->__pad_034 = 1; /*0x477c20*/
  }
  return this; /*0x477c0d*/
}


// ==== 0x00477C30  _VectorClass_H::CompareEqual  this=VectorClass  sig=csp ====
char __thiscall BufferClass_CompareEqual(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x477c32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x477c3d*/
  {
    v3 = 0; /*0x477c3f*/
    if ( v2 <= 0 ) /*0x477c43*/
      return 1; /*0x477c63*/
    v4 = (_DWORD *)this->Items; /*0x477c45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477c4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477c54*/
    {
      ++v3; /*0x477c56*/
      ++v4; /*0x477c57*/
      if ( v3 >= v2 ) /*0x477c5c*/
        return 1; /*0x477c5c*/
    }
  }
  return 0; /*0x477c5e*/
}


// ==== 0x00477C70  _VectorClass_H::vt02  this=VectorClass  sig=csp ====
char __thiscall VectorClass::vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
    this->IsInitialized = 0; /*0x477c86*/
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x477c9e*/
    this->IsInitialized = 1; /*0x477ca6*/
    if ( v4 ) /*0x477caa*/
    {
      if ( this->Items ) /*0x477cb5*/
      {
        v6 = this->Capacity; /*0x477cbc*/
        if ( a2 < v6 ) /*0x477cc1*/
          v6 = a2; /*0x477cc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x477cc9*/
          ++i; /*0x477cce*/
        if ( this->IsAllocated ) /*0x477cdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x477ce6*/
          this->Items = 0; /*0x477cee*/
        }
      }
      this->Items = v4; /*0x477cf7*/
      this->Capacity = a2; /*0x477cff*/
      this->IsAllocated = a3 == 0; /*0x477d02*/
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x477d12*/
    return 1; /*0x477d18*/
  }
}


// ==== 0x00477D20  ?$VectorClass@H::Destroy  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Destroy(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x477d2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x477d33*/
    *(_DWORD *)(this + 4) = 0; /*0x477d3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477d3e*/
  *(_DWORD *)(this + 8) = 0; /*0x477d41*/
}


// ==== 0x00477D50  _VectorClass_H::vt04  this=VectorClass  sig=csp ====
int __thiscall VectorClass::vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x477d50*/
    return 0; /*0x477d58*/
  v3 = *(_DWORD *)(this + 8); /*0x477d5e*/
  result = 0; /*0x477d61*/
  if ( v3 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x477d6b*/
  {
    if ( ++result >= v3 ) /*0x477d7a*/
      return -1; /*0x477d7a*/
  }
  return result; /*0x477d5a*/
}


// ==== 0x00477D90  _VectorClass_H::vt05  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass::vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x477d90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x477da5*/
  else
    return 0; /*0x477d97*/
}


// ==== 0x00477DB0  DynamicVectorClass::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x477db9*/
  this->Capacity = a2; /*0x477dc0*/
  this->q030 = 1; /*0x477dc3*/
  this->__pad_034 = 0; /*0x477dc7*/
  *this = &vt_VectorClass_int; /*0x477dcb*/
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
      this->Items = a3; /*0x477ddb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x477dec*/
      this->__pad_034 = 1; /*0x477def*/
    }
  }
  *this = &vt_DynamicVectorClass_int; /*0x477df3*/
  this->q005 = 10; /*0x477df9*/
  this->q010 = 0; /*0x477e00*/
  return this; /*0x477e09*/
}


// ==== 0x00477E10  _DynamicVectorClass_H::Resize  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Resize(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
    this->IsInitialized = 0; /*0x477e22*/
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x477e3a*/
    this->IsInitialized = 1; /*0x477e42*/
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
    if ( this->Items ) /*0x477e48*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x477e4f*/
      if ( a2 < v5 ) /*0x477e54*/
        v5 = a2; /*0x477e56*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x477e5c*/
        ++i; /*0x477e61*/
      if ( this->IsAllocated ) /*0x477e6e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x477e79*/
        this->Items = 0; /*0x477e81*/
      }
    }
    this->Items = v4; /*0x477e8a*/
    this->DynamicVector_field_0x8 = a2; /*0x477e92*/
    this->IsAllocated = a3 == 0; /*0x477e95*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x477e9e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x477ea1*/
  if ( v7 < this->Items ) /*0x477ea9*/
    this->Items = v7; /*0x477eab*/
  return 1; /*0x477eae*/
}


// ==== 0x00477EC0  DynamicVector::Add_Alt  this=VectorClass  sig=csp ====
char __thiscall DynamicVector::Add_Alt(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)this->Capacity; /*0x477ec3*/
  if ( this->q010 >= (int)v3 ) /*0x477ecb*/
  {
    if ( !this->__pad_034 && v3 ) /*0x477ed6*/
      return 0; /*0x477ed6*/
    v4 = this->q005; /*0x477ed8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x477ee8*/
      return 0; /*0x477eef*/
  }
  v6 = this->q010; /*0x477ef5*/
  v7 = (VectorClass *)this->Items; /*0x477ef8*/
  this->q010 = v6 + 1; /*0x477efe*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x477f08*/
  return 1; /*0x477ef1*/
}


// ==== 0x00477F10  _DynamicVectorClass_H::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( v2 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= v2 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/
}


// ==== 0x00477F40  INIClass::parseSection  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_477F40(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x477f4d*/
  this->Capacity = 0; /*0x477f50*/
  this->q030 = 1; /*0x477f53*/
  this->__pad_034 = 0; /*0x477f57*/
  *this = &vt_VectorClass_TechnoTypeClass; /*0x477f5a*/
  if ( this == a2 ) /*0x477f60*/
    return this; /*0x477f60*/
  TypeList_TechnoType::ddtor((int)this); /*0x477f62*/
  v3 = a2[2]; /*0x477f68*/
  this->Capacity = v3; /*0x477f6d*/
  if ( !v3 ) /*0x477f70*/
  {
    this->Items = 0; /*0x477fae*/
    this->__pad_034 = 0; /*0x477fb1*/
    return this; /*0x477fb4*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x477f76*/
  this->Items = v4; /*0x477f80*/
  if ( !v4 ) /*0x477f83*/
    return this; /*0x477f83*/
  v5 = this->Capacity; /*0x477f85*/
  v6 = 0; /*0x477f88*/
  this->__pad_034 = 1; /*0x477f8c*/
  if ( v5 <= 0 ) /*0x477f90*/
    return this; /*0x477f90*/
  do /*0x477fa4*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x477f9b*/
    ++v6; /*0x477fa1*/
  }
  while ( v6 < this->Capacity ); /*0x477fa4*/
  return this; /*0x477fa8*/
}


// ==== 0x00477FC0  _VectorClass_PAVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x477fc2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( v2 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = (_DWORD *)this->Items; /*0x477fd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477fdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= v2 ) /*0x477fec*/
        return 1; /*0x477fec*/
    }
  }
  return 0; /*0x477fee*/
}


// ==== 0x00478000  _VectorClass_PAVTechnoTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_TechnoType::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
    this->IsInitialized = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x47802e*/
    this->IsInitialized = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( this->Items ) /*0x478045*/
      {
        v6 = this->Capacity; /*0x47804c*/
        if ( a2 < v6 ) /*0x478051*/
          v6 = a2; /*0x478053*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( this->IsAllocated ) /*0x47806b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x478076*/
          this->Items = 0; /*0x47807e*/
        }
      }
      this->Items = v4; /*0x478087*/
      this->Capacity = a2; /*0x47808f*/
      this->IsAllocated = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4780a2*/
    return 1; /*0x4780a8*/
  }
}


// ==== 0x004780B0  _VectorClass_PAVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TypeList_TechnoType::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4780bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4780c3*/
    *(_DWORD *)(this + 4) = 0; /*0x4780cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4780ce*/
  *(_DWORD *)(this + 8) = 0; /*0x4780d1*/
}


// ==== 0x004780E0  _VectorClass_PAVTechnoTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_TechnoType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  v3 = *(_DWORD *)(this + 8); /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( v3 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= v3 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/
}


// ==== 0x00478120  _VectorClass_PAVTechnoTypeClass::GetIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_TechnoType::GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x478120*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/
}


// ==== 0x00478140  _DynamicVectorClass_PAVTechnoTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x47814c*/
  {
    this->IsInitialized = 0; /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x47816a*/
    this->IsInitialized = 1; /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( this->Items ) /*0x478178*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x47817f*/
      if ( a2 < v5 ) /*0x478184*/
        v5 = a2; /*0x478186*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( this->IsAllocated ) /*0x47819e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4781a9*/
        this->Items = 0; /*0x4781b1*/
      }
    }
    this->Items = v4; /*0x4781ba*/
    this->DynamicVector_field_0x8 = a2; /*0x4781c2*/
    this->IsAllocated = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4781ce*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x4781d1*/
  if ( v7 < this->Items ) /*0x4781d9*/
    this->Items = v7; /*0x4781db*/
  return 1; /*0x4781de*/
}


// ==== 0x004781F0  _DynamicVectorClass_PAVTechnoTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( v2 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4781fe*/
  {
    if ( ++result >= v2 ) /*0x47820d*/
      return -1; /*0x47820d*/
  }
  return result; /*0x478212*/
}


// ==== 0x00478220  INIClass::parseKeyValue  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_478220(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  this->Items = 0; /*0x47822e*/
  this->Capacity = 0; /*0x478231*/
  this->q030 = 1; /*0x478234*/
  this->__pad_034 = 0; /*0x478238*/
  *this = &vt_VectorClass_RGBClass; /*0x47823b*/
  if ( this == a2 ) /*0x478241*/
    return this; /*0x478241*/
  FilePipe_38::ddtor((int)this); /*0x478247*/
  v3 = a2[2]; /*0x47824d*/
  this->Capacity = v3; /*0x478252*/
  if ( !v3 ) /*0x478255*/
  {
    this->Items = 0; /*0x4782c6*/
    this->__pad_034 = 0; /*0x4782c9*/
    return this; /*0x4782cc*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x47825b*/
  if ( v4 ) /*0x478265*/
  {
    if ( v3 - 1 >= 0 ) /*0x47826c*/
    {
      v5 = v4 + 2; /*0x47826e*/
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
  this->Items = v4; /*0x478286*/
  if ( !v4 ) /*0x478289*/
    return this; /*0x478289*/
  v7 = this->Capacity; /*0x47828b*/
  v8 = 0; /*0x47828e*/
  this->__pad_034 = 1; /*0x478292*/
  if ( v7 <= 0 ) /*0x478296*/
    return this; /*0x478296*/
  v9 = 0; /*0x478298*/
  do /*0x4782bb*/
  {
    v10 = v9 + a2[1]; /*0x4782a0*/
    v11 = this->Items + v9; /*0x4782a4*/
    ++v8; /*0x4782a6*/
    v9 += 3; /*0x4782aa*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x4782ad*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x4782b3*/
  }
  while ( v8 < this->Capacity ); /*0x4782bb*/
  return this; /*0x4782bf*/
}


// ==== 0x004782E0  _VectorClass_VRGBClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38_::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _BYTE *v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  v2 = this->Capacity; /*0x4782eb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4782f0*/
  {
    v3 = 0; /*0x4782f2*/
    if ( v2 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4782f8*/
    v5 = (_BYTE *)this->Items; /*0x4782fb*/
    v6 = (_BYTE *)(v4 + 2); /*0x478300*/
    v7 = v4 - (_DWORD)v5; /*0x478303*/
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x47831f*/
    {
      ++v3; /*0x478321*/
      v6 += 3; /*0x478322*/
      v5 += 3; /*0x478325*/
      if ( v3 >= v2 ) /*0x47832a*/
        return 1; /*0x47832a*/
    }
  }
  return 0; /*0x47832c*/
}


// ==== 0x00478340  _VectorClass_VRGBClass::Release  this=VectorClass  sig=csp ====
char __thiscall FilePipe_38_::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    v5 = a3; /*0x478354*/
    this->IsInitialized = 0; /*0x478358*/
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
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          v7 = v6 + 2; /*0x478377*/
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
        v5 = v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    this->IsInitialized = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( this->Items ) /*0x4783bb*/
      {
        v12 = this->Capacity; /*0x4783c0*/
        if ( a2 < v12 ) /*0x4783c5*/
          v12 = a2; /*0x4783c7*/
        if ( v12 > 0 ) /*0x4783cb*/
        {
          v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            v14 = this->Items + v13; /*0x4783d4*/
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --v12; /*0x4783dc*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x4783e0*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x4783e6*/
          }
          while ( v12 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( this->IsAllocated ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4783fa*/
          this->Items = 0; /*0x478402*/
        }
      }
      this->Items = v5; /*0x47840d*/
      this->Capacity = v3; /*0x478413*/
      this->IsAllocated = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x478426*/
    return 1; /*0x47842c*/
  }
}


// ==== 0x00478440  _VectorClass_VRGBClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FilePipe_38_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x47844d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x478453*/
    *(_DWORD *)(this + 4) = 0; /*0x47845b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x47845e*/
  *(_DWORD *)(this + 8) = 0; /*0x478461*/
}


// ==== 0x00478470  _VectorClass_VRGBClass::Read  this=VectorClass  sig=csp ====
int __thiscall FilePipe_38_::_vt04(int this, _BYTE *a2)
{
  int result; // eax
  int v3; // esi
  _BYTE *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x478470*/
    return 0; /*0x47847c*/
  v3 = *(_DWORD *)(this + 8); /*0x478482*/
  result = 0; /*0x478485*/
  if ( v3 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  for ( i = *(_BYTE **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x47848f*/
  {
    if ( ++result >= v3 ) /*0x4784ae*/
      return -1; /*0x4784ae*/
  }
  return result; /*0x47847a*/
}


// ==== 0x004784C0  _VectorClass_VRGBClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FilePipe_38_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4784c0*/
    return (a2 - *(_DWORD *)(this + 4)) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/
}


// ==== 0x004784F0  _DynamicVectorClass_VRGBClass::Release  this=DynamicVector  sig=csp ====
char __thiscall ParticleTypeClass::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    this->IsInitialized = 0; /*0x478508*/
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
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = v6 + 2; /*0x478527*/
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
        v5 = v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    this->IsInitialized = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( this->Items ) /*0x478562*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x478567*/
      if ( a2 < v11 ) /*0x47856c*/
        v11 = a2; /*0x47856e*/
      if ( v11 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = this->Items + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --v11; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( v11 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( this->IsAllocated ) /*0x478598*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4785a1*/
        this->Items = 0; /*0x4785a9*/
      }
    }
    this->Items = v5; /*0x4785b4*/
    this->DynamicVector_field_0x8 = v3; /*0x4785ba*/
    this->IsAllocated = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4785c6*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x4785c9*/
  if ( v15 < this->Items ) /*0x4785d1*/
    this->Items = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/
}


// ==== 0x004785F0  _DynamicVectorClass_VRGBClass::Init  this=DynamicVector  sig=csp ====
int __thiscall ParticleTypeClass::_vt04(int *this, _BYTE *a2)
{
  int v2; // esi
  int result; // eax
  _BYTE *i; // ecx

  v2 = this->Items; /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( v2 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = (_BYTE *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= v2 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/
}


// ==== 0x00478630  ?$VectorClass@H::vt00  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass::vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478633*/
  *Block = &vt_VectorClass_int; /*0x478636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478640*/
  {
    __3_YAXPAX_Z(v3); /*0x478648*/
    *(Block + 1) = 0; /*0x478650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47865b*/
  *(Block + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    __3_YAXPAX_Z(Block); /*0x47866b*/
  return (VectorClass *)Block; /*0x478675*/
}


// ==== 0x00478680  _VectorClass_PAVTechnoTypeClass::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall TypeList_TechnoType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478683*/
  *Block = &vt_VectorClass_TechnoTypeClass; /*0x478686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478690*/
  {
    __3_YAXPAX_Z(v3); /*0x478698*/
    *(Block + 1) = 0; /*0x4786a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4786ab*/
  *(Block + 2) = 0; /*0x4786b1*/
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    __3_YAXPAX_Z(Block); /*0x4786bb*/
  return (VectorClass *)Block; /*0x4786c5*/
}


// ==== 0x004786D0  _VectorClass_VRGBClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall FilePipe_38_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4786d3*/
  *Block = &vt_VectorClass_RGBClass; /*0x4786d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4786e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4786e8*/
    *(Block + 1) = 0; /*0x4786f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4786fb*/
  *(Block + 2) = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    __3_YAXPAX_Z(Block); /*0x47870b*/
  return (VectorClass *)Block; /*0x478715*/
}


// ==== 0x00478720  TypeList::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_Copy(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x47872a*/
    return this; /*0x47872a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x47872e*/
  v3 = a2[2]; /*0x478731*/
  this->Capacity = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    this->Items = 0; /*0x47877a*/
    this->__pad_034 = 0; /*0x478781*/
    return this; /*0x478785*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x478743*/
  this->Items = v4; /*0x47874b*/
  if ( !v4 ) /*0x478750*/
    return this; /*0x478750*/
  v5 = this->Capacity; /*0x478752*/
  v6 = 0; /*0x478755*/
  this->__pad_034 = 1; /*0x478759*/
  if ( v5 <= 0 ) /*0x47875d*/
    return this; /*0x47875d*/
  do /*0x478771*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < this->Capacity ); /*0x478771*/
  return this; /*0x478775*/
}


// ==== 0x00478790  TypeList::TechnoTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_TechnoType_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x47879b*/
  this->Capacity = a2; /*0x47879e*/
  this->q030 = 1; /*0x4787a1*/
  this->__pad_034 = 0; /*0x4787a5*/
  *this = &vt_VectorClass_TechnoTypeClass; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      this->Items = a3; /*0x4787b8*/
      return this; /*0x4787be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4787cd*/
    this->__pad_034 = 1; /*0x4787d0*/
  }
  return this; /*0x4787bd*/
}


// ==== 0x004787E0  INIClass::writeSection  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4787E0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x4787ea*/
    return this; /*0x4787ea*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4787ee*/
  v3 = a2[2]; /*0x4787f1*/
  this->Capacity = v3; /*0x4787f6*/
  if ( !v3 ) /*0x4787f9*/
  {
    this->Items = 0; /*0x47883a*/
    this->__pad_034 = 0; /*0x478841*/
    return this; /*0x478845*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x478803*/
  this->Items = v4; /*0x47880b*/
  if ( !v4 ) /*0x478810*/
    return this; /*0x478810*/
  v5 = this->Capacity; /*0x478812*/
  v6 = 0; /*0x478815*/
  this->__pad_034 = 1; /*0x478819*/
  if ( v5 <= 0 ) /*0x47881d*/
    return this; /*0x47881d*/
  do /*0x478831*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478828*/
    ++v6; /*0x47882e*/
  }
  while ( v6 < this->Capacity ); /*0x478831*/
  return this; /*0x478835*/
}


// ==== 0x00478850  BuildingTypeClass::loadBuildingProperty_b  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_478850(_DWORD *this, int a2, int a3)
{
  char *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  char *v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  this->Items = 0; /*0x47885d*/
  this->Capacity = a2; /*0x478860*/
  this->q030 = 1; /*0x478863*/
  this->__pad_034 = 0; /*0x478867*/
  *this = &vt_VectorClass_RGBClass; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return this; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = (char *)__2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = v8 + 2; /*0x4788b5*/
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
      v4 = v8; /*0x4788c7*/
    }
    this->Items = v4; /*0x4788c9*/
    this->__pad_034 = 1; /*0x4788cc*/
    return this; /*0x4788cc*/
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
  this->Items = a3; /*0x478893*/
  return this; /*0x478898*/
}


// ==== 0x004788E0  ParticleTypeClass::EnsureCapacity  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4788E0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  if ( this == a2 ) /*0x4788ec*/
    return this; /*0x4788ec*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->Capacity = v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->Items = 0; /*0x478974*/
    this->__pad_034 = 0; /*0x478977*/
    return this; /*0x47897a*/
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
  this->Items = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return this; /*0x478935*/
  v7 = this->Capacity; /*0x478937*/
  v8 = 0; /*0x47893a*/
  this->__pad_034 = 1; /*0x47893e*/
  if ( v7 <= 0 ) /*0x478942*/
    return this; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = this->Items + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < this->Capacity ); /*0x478969*/
  return this; /*0x47896d*/
}


// ==== 0x00478990  sub_478990  this=-  sig=ida-proto ====
int sub_478990()
{
  MEMORY[0x89E318] = 0; /*0x478992*/
  MEMORY[0x89E31C] = 0; /*0x478997*/
  MEMORY[0x89E320] = 0; /*0x47899c*/
  MEMORY[0x89E324] = 0; /*0x4789a1*/
  return 0; /*0x4789a6*/
}


// ==== 0x004789B0  sub_4789B0  this=-  sig=ida-proto ====
void sub_4789B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4789bc*/
  MEMORY[0x89E330] = Math::Sqrt(v0 + v0); /*0x4789ce*/
}


// ==== 0x004789E0  sub_4789E0  this=-  sig=ida-proto ====
void sub_4789E0()
{
  MEMORY[0x89E380] = MEMORY[0x89E330] / 60.0; /*0x4789ec*/
}


// ==== 0x00478A00  sub_478A00  this=-  sig=ida-proto ====
void sub_478A00()
{
  MEMORY[0x89E368] = 1.0 / MEMORY[0x89E380]; /*0x478a0c*/
}


// ==== 0x00478A20  sub_478A20  this=-  sig=ida-proto ====
void sub_478A20()
{
  MEMORY[0x89E360] = 0.0174532925199433 * 45.0; /*0x478a2c*/
}


// ==== 0x00478A40  sub_478A40  this=-  sig=ida-proto ====
void sub_478A40()
{
  MEMORY[0x89E338] = 0.0174532925199433 * 60.0; /*0x478a4c*/
}


// ==== 0x00478A60  sub_478A60  this=-  sig=ida-proto ====
void sub_478A60()
{
  MEMORY[0x89E310] = 0.0174532925199433 * 90.0; /*0x478a6c*/
}


// ==== 0x00478A80  sub_478A80  this=-  sig=ida-proto ====
__int64 sub_478A80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E310] - MEMORY[0x89E338]); /*0x478a92*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E330] * 0.5); /*0x478aa6*/
  MEMORY[0x89E388] = result; /*0x478aab*/
  return result; /*0x478ab0*/
}


// ==== 0x00478AC0  sub_478AC0  this=-  sig=ida-proto ====
void sub_478AC0()
{
  MEMORY[0x89E340] = Math::ArcTan((double)MEMORY[0x89E388] * 0.00390625); /*0x478ad7*/
}


// ==== 0x00478AF0  sub_478AF0  this=-  sig=ida-proto ====
void sub_478AF0()
{
  MEMORY[0x89E358] = Math::ArcTan((double)(2 * MEMORY[0x89E388]) / MEMORY[0x89E330]); /*0x478b12*/
}


// ==== 0x00478B20  sub_478B20  this=-  sig=ida-proto ====
__int64 sub_478B20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E388]) + 0.5); /*0x478b3b*/
  MEMORY[0x89E37C] = result; /*0x478b40*/
  return result; /*0x478b46*/
}


// ==== 0x00478B50  sub_478B50  this=-  sig=ida-proto ====
int sub_478B50()
{
  MEMORY[0x89E328] = 0; /*0x478b52*/
  MEMORY[0x89E32A] = 0; /*0x478b58*/
  return 0; /*0x478b5e*/
}


// ==== 0x00478B60  sub_478B60  this=-  sig=ida-proto ====
int sub_478B60()
{
  MEMORY[0x89E348] = 0; /*0x478b62*/
  MEMORY[0x89E34C] = 0; /*0x478b67*/
  MEMORY[0x89E350] = 0; /*0x478b6c*/
  return 0; /*0x478b71*/
}


// ==== 0x00478B80  sub_478B80  this=-  sig=ida-proto ====
int sub_478B80()
{
  MEMORY[0x89E378] = 0; /*0x478b85*/
  MEMORY[0x89E370] = 128; /*0x478b8f*/
  MEMORY[0x89E374] = 128; /*0x478b94*/
  return 128; /*0x478b99*/
}


// ==== 0x00478BA0  CCToolTip::CalculatePopupPosition  this=CCToolTip  sig=csp ====
char __thiscall CCToolTip::CalculatePopupPosition(_DWORD *this, _DWORD *a2)
{
  int *v2; // esi
  int *v3; // edi
  int v4; // eax
  int v5; // ebp
  char *v6; // ecx
  bool v7; // cc
  char *v8; // edx
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
  char *v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v25; // [esp+4h] [ebp-18h]
  _DWORD *v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+14h] [ebp-8h]
  int v28; // [esp+18h] [ebp-4h]

  v26 = this; /*0x478ba3*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) >= 0 ) /*0x478bb4*/
  {
    v25 = (_DWORD *)aP0; /*0x478bcb*/
    if ( MEMORY[0xA8EB7C] == 1 ) /*0x478bcf*/
    {
      v2 = a2; /*0x478bdc*/
      if ( *a2 > MEMORY[0x886FA0] + MEMORY[0x886FA8] ) /*0x478be4*/
      {
        v3 = &MEMORY[0x886F90]; /*0x478be6*/
        MEMORY[0x884B8E] = 1; /*0x478beb*/
        goto LABEL_8; /*0x478bf2*/
      }
    }
    else
    {
      v2 = a2; /*0x478bff*/
      if ( *a2 <= MEMORY[0x886F90] + MEMORY[0x886F98] ) /*0x478c07*/
      {
        v3 = &MEMORY[0x886F90]; /*0x478c09*/
        MEMORY[0x884B8E] = 1; /*0x478c0e*/
        goto LABEL_8; /*0x478c15*/
      }
    }
    v3 = &MEMORY[0x886FA0]; /*0x478c17*/
LABEL_8:
    if ( v3 ) /*0x478c1e*/
    {
      Text::Layout((_DWORD *)aP0, (unsigned __int16 *)v2 + 8, &v24, &a2, v3[2]); /*0x478c36*/
      v4 = v2[2]; /*0x478c43*/
      v5 = v24 + 4; /*0x478c46*/
      v6 = (char *)a2 + 3; /*0x478c49*/
      v7 = v24 + 4 <= v4; /*0x478c4c*/
      v24 += 4; /*0x478c4e*/
      a2 = (_DWORD *)((char *)a2 + 3); /*0x478c52*/
      if ( !v7 ) /*0x478c56*/
        v4 = v5; /*0x478c58*/
      v8 = (char *)v2[3]; /*0x478c5a*/
      v2[2] = v4; /*0x478c5d*/
      if ( (int)v6 <= (int)v8 ) /*0x478c62*/
        v6 = v8; /*0x478c64*/
      v2[3] = (int)v6; /*0x478c66*/
      v9 = v3[2]; /*0x478c69*/
      if ( v4 >= v9 ) /*0x478c6e*/
      {
        Text::Layout(v25, (unsigned __int16 *)v2 + 8, &v24, &a2, v9 - 4); /*0x478c83*/
        v10 = v2[2]; /*0x478c90*/
        v5 = v24 + 4; /*0x478c93*/
        v11 = (char *)a2 + 3; /*0x478c96*/
        v7 = v24 + 4 <= v10; /*0x478c99*/
        v24 += 4; /*0x478c9b*/
        a2 = (_DWORD *)((char *)a2 + 3); /*0x478c9f*/
        if ( !v7 ) /*0x478ca3*/
          v10 = v5; /*0x478ca5*/
        v2[2] = v10; /*0x478ca7*/
        v12 = (char *)v2[3]; /*0x478caa*/
        if ( (int)v11 > (int)v12 ) /*0x478caf*/
          v12 = v11; /*0x478cb1*/
        v2[3] = (int)v12; /*0x478cb3*/
      }
      v13 = v26[1]; /*0x478cba*/
      if ( v13 && *(_BYTE *)(v13 + 24) ) /*0x478cc5*/
      {
        v14 = (int *)(v13 + 4); /*0x478cd0*/
        v15 = *v14; /*0x478cd3*/
        v16 = v14[1]; /*0x478cd5*/
        v27 = v14[2]; /*0x478cdb*/
        v28 = v14[3]; /*0x478ce2*/
        if ( v15 >= *v3 + v3[2] / 2 ) /*0x478cf4*/
          *v2 = v15 - v5 + 5; /*0x478d07*/
        else
          *v2 = v27 + v15 - 5; /*0x478cfe*/
        v17 = *v3; /*0x478d09*/
        if ( *v3 <= *v2 ) /*0x478d0f*/
          v17 = *v2; /*0x478d11*/
        *v2 = v17; /*0x478d13*/
        if ( v16 >= v3[1] + v3[3] / 2 ) /*0x478d24*/
          v2[1] = v16 - (_DWORD)a2 + 5; /*0x478d3a*/
        else
          v2[1] = v28 + v16 - 5; /*0x478d2e*/
        v18 = v3[1]; /*0x478d3d*/
        v19 = v2[1]; /*0x478d40*/
        if ( v18 > v19 ) /*0x478d45*/
        {
          v2[1] = v18; /*0x478d4a*/
          return 1; /*0x478d55*/
        }
      }
      else
      {
        v21 = v2[2] + *v2 - *v3 - v3[2]; /*0x478d68*/
        if ( v21 > 0 ) /*0x478d6c*/
          *v2 -= v21; /*0x478d70*/
        v22 = v2[3]; /*0x478d75*/
        v23 = v2[1] + 16; /*0x478d7b*/
        v2[1] = v23; /*0x478d7d*/
        if ( v22 + v23 - v3[3] - v3[1] <= 0 ) /*0x478d90*/
          return 1; /*0x478d90*/
        v19 = v23 - v22 - 16; /*0x478d94*/
      }
      v2[1] = v19; /*0x478d97*/
    }
    return 1; /*0x478da3*/
  }
  return 0; /*0x478d52*/
}


// ==== 0x00478DB0  CCToolTip::Release  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::_vt02(_DWORD *this, _DWORD *a2)
{
  int v3; // esi

  if ( MEMORY[0xA8EB7C] == 1 ) /*0x478dbc*/
  {
    v3 = (int)a2; /*0x478dca*/
    if ( *a2 >= MEMORY[0x886FA0] + MEMORY[0x886FA8] ) /*0x478dd2*/
      goto LABEL_5; /*0x478dd2*/
  }
  else
  {
    v3 = (int)a2; /*0x478de2*/
    if ( *a2 <= MEMORY[0x886F90] + MEMORY[0x886F98] ) /*0x478dea*/
    {
LABEL_5:
      MEMORY[0x884B8E] = 1; /*0x478dec*/
      MEMORY[0x884B8F] = 1; /*0x478df1*/
    }
  }
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x478df6*/
  return ToolTipManager::release(this, v3); /*0x478e0a*/
}


// ==== 0x00478E10  CCToolTip::Draw1  this=CCToolTip  sig=csp ====
int __thiscall CCToolTip::Draw1(_BYTE *this, char a2)
{
  this->q260 = a2; /*0x478e16*/
  return ToolTipManager::ddtor((int)this, a2 == 0); /*0x478e25*/
}


// ==== 0x00478E30  CCToolTip::Draw2  this=CCToolTip  sig=csp ====
char __userpurge CCToolTip::Draw2@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // ebx
  int v9; // edx
  _DWORD *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // edi
  int v20; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h] BYREF
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  int v25; // [esp+24h] [ebp-14h]
  int v26; // [esp+28h] [ebp-10h] BYREF
  _DWORD v27[3]; // [esp+2Ch] [ebp-Ch] BYREF
  int retaddr; // [esp+38h] [ebp+0h]

  v4 = *(_DWORD *)a3; /*0x478e37*/
  v5 = *(_DWORD *)(a3 + 4); /*0x478e42*/
  if ( MEMORY[0xA8EB7C] == 1 ) /*0x478e48*/
  {
    v6 = MEMORY[0x886FA0] + MEMORY[0x886FA8]; /*0x478e56*/
    if ( v4 + *(_DWORD *)(a3 + 8) <= MEMORY[0x886FA0] + MEMORY[0x886FA8] ) /*0x478e5f*/
    {
      v7 = MEMORY[0x88731C]; /*0x478e61*/
      goto LABEL_13; /*0x478e67*/
    }
    if ( *(_BYTE *)(a1 + 608) != 1 || v4 < v6 ) /*0x478e78*/
      return v4; /*0x478e78*/
    v7 = MEMORY[0x887300]; /*0x478e7e*/
    v4 -= v6; /*0x478e84*/
  }
  else
  {
    v8 = MEMORY[0x886F90] + MEMORY[0x886F98]; /*0x478e94*/
    if ( v4 >= MEMORY[0x886F90] + MEMORY[0x886F98] ) /*0x478e98*/
    {
      v7 = MEMORY[0x88731C]; /*0x478e9a*/
      v4 -= v8; /*0x478ea0*/
      goto LABEL_13; /*0x478ea2*/
    }
    if ( *(_BYTE *)(a1 + 608) != 1 || v4 + *(_DWORD *)(a3 + 8) >= v8 ) /*0x478eb8*/
      return v4; /*0x478eb8*/
    v7 = MEMORY[0x887300]; /*0x478ebe*/
  }
  MEMORY[0xB0B518] = 1; /*0x478ec4*/
LABEL_13:
  if ( v7 ) /*0x478ecd*/
  {
    v23 = v5; /*0x478ed3*/
    v25 = v5; /*0x478ed7*/
    v9 = *(_DWORD *)v7; /*0x478ede*/
    v10 = (_DWORD *)aP0; /*0x478ee1*/
    v22 = v4; /*0x478ee9*/
    v24 = v4; /*0x478eed*/
    v21 = a3 + 16; /*0x478ef1*/
    v11 = (*(int (__thiscall **)(int, int))(v9 + 124))(v7, a2); /*0x478ef5*/
    Text::Layout(v10, (unsigned __int16 *)(a3 + 16), &a4, &v20, v11); /*0x478f06*/
    v26 = v24 + v20; /*0x478f1f*/
    v25 = v23 + a4; /*0x478f25*/
    v12 = *(_DWORD *)v7; /*0x478f2b*/
    v13 = v20 + 4; /*0x478f33*/
    v14 = a4 + 8; /*0x478f37*/
    v21 = v20 + 4; /*0x478f39*/
    v15 = (*(int (__thiscall **)(int))(v12 + 124))(v7); /*0x478f3d*/
    v16 = v23; /*0x478f40*/
    if ( v14 + v23 > v15 ) /*0x478f49*/
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 124))(v7) - v14; /*0x478f54*/
      v23 = v16; /*0x478f56*/
    }
    v25 = v14 + v16; /*0x478f61*/
    v26 = v24 + v13; /*0x478f71*/
    v27[0] = v16; /*0x478f85*/
    v27[2] = v14; /*0x478f8d*/
    retaddr = v21; /*0x478f91*/
    v27[1] = v24; /*0x478fcf*/
    v17 = ((unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x478fda*/
        | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
        | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 20))(v7, v27); /*0x478fde*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 88))(v7, &v26, v17); /*0x478feb*/
    Char::Swap(v10, 1); /*0x478ff2*/
    TextGroup::SetRect(v10, &v22); /*0x478ffe*/
    Property::Set(v10, v17); /*0x479006*/
    LOBYTE(v4) = Font::Print((int)v10, v7, (_WORD *)v21, v22 + 4, v23 + 2, v24 - v22, v25 - v23, 0, 0, 0); /*0x47903c*/
  }
  return v4; /*0x479042*/
}


// ==== 0x00479050  CCToolTip::Show  this=CCToolTip  sig=csp ====
int __stdcall CCToolTip::_vt05(int a1)
{
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) >= 0 ) /*0x47905d*/
    return CursorAnim::Load(a1); /*0x47906e*/
  else
    return 0; /*0x47905f*/
}


// ==== 0x00479080  sub_479080  this=-  sig=ida-proto ====
int sub_479080()
{
  MEMORY[0x89E390] = 0; /*0x479082*/
  MEMORY[0x89E394] = 0; /*0x479087*/
  MEMORY[0x89E398] = 0; /*0x47908c*/
  MEMORY[0x89E39C] = 0; /*0x479091*/
  return 0; /*0x479096*/
}


// ==== 0x004790A0  Game::CheckForGameCD  this=Game  sig=csp ====
int __thiscall CD_CheckForGame(void *this)
{
  return AlwaysFindYRCD(MEMORY[0x89E414], this);
}


// ==== 0x004790B0  SetSoundWarning  this=-  sig=csp ====
void __fastcall SoundWarning_Set(int a1)
{
  if ( MEMORY[0x89E3A0] == 1 ) /*0x4790b7*/
  {
    dword_81C1D0 = -2; /*0x4790b9*/
  }
  else
  {
    if ( a1 >= 0 ) /*0x4790c6*/
      a1 = 2; /*0x4790c8*/
    dword_81C1D0 = a1; /*0x4790cd*/
  }
}


// ==== 0x004790E0  CD::AlwaysAvailable  this=CD  sig=csp ====
char __thiscall CD::AlwaysAvailable(_DWORD *this, int a2)
{
  if ( a2 == -2 ) /*0x4790e7*/
    return 1; /*0x4790e9*/
  if ( MEMORY[0x89E3A0] == 1 ) /*0x4790f5*/
    return 1; /*0x4790f7*/
  this->q004 = -1; /*0x4790fd*/
  return CD::CheckDiscPresence(this, a2); /*0x4790eb*/
}


// ==== 0x00479110  CD::NeverAsk  this=CD  sig=csp ====
bool __thiscall CD_NeverAsk(int *this, int a2)
{
  int v3; // eax
  BOOL v4; // esi
  wchar_t *String; // eax
  bool v6; // bl
  BOOL v7; // eax
  int v8; // esi
  int v9; // esi

  if ( this->q004 == -1 ) /*0x479119*/
  {
    v3 = dword_A83D14; /*0x47911b*/
    if ( dword_A83D14 == -1 ) /*0x479123*/
      v3 = dword_A83D18; /*0x479125*/
    this->q004 = v3; /*0x47912a*/
  }
  Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x479134*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < 0; /*0x47914b*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < 0 ) /*0x47915a*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x479164*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x47917c*/
  String = GetStringCSF(aTxtInsertCdDia, 0, aDRa2mdpostCdCp, 164); /*0x479194*/
  v6 = (unsigned __int8)CD::CreateDialog((LPARAM)String) != 0; /*0x4791a4*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x4791ac*/
  v7 = v4; /*0x4791b1*/
  v8 = v4 - 1; /*0x4791b3*/
  if ( v7 ) /*0x4791b6*/
  {
    v9 = v8 + 1; /*0x4791b8*/
    do /*0x4791c5*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x4791c1*/
      --v9; /*0x4791c4*/
    }
    while ( v9 ); /*0x4791c5*/
  }
  if ( !v6 && this->q004 != -1 ) /*0x4791d1*/
  {
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, this->q004); /*0x4791d9*/
    this->q004 = -1; /*0x4791de*/
  }
  return v6; /*0x4791e5*/
}


// ==== 0x004791F0  CD::LoadScenarioMixFiles  this=CD  sig=csp ====
char LinkedList::LoadScenarioMixFiles(INIClass *aP0, int aP2, int a3, int a4)
{
  CD *v4; // ecx
  CD *v5; // esi
  IUnknown *v6; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  INIClass *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  CCFileClass *v15; // eax
  char v16; // bl
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  CCFileClass *v19; // eax
  char v20; // bl
  _DWORD *v21; // eax
  MixFileClass Buffer; // [esp+24h] [ebp-ACh] BYREF
  void **v23; // [esp+64h] [ebp-6Ch] BYREF
  _DWORD v24[21]; // [esp+68h] [ebp-68h] BYREF
  _BYTE v25[4]; // [esp+BCh] [ebp-14h] BYREF
  _BYTE v26[8]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  Debug::Log(); /*0x479208*/
  if ( *(_DWORD *)&v5[1] == -1 ) /*0x479216*/
  {
    v6 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == (IUnknown *)-1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    v5[1] = (CD)v6; /*0x479227*/
  }
  Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x479232*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x479259*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13084])( /*0x47925f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13084],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13084] = 0; /*0x479261*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[3860] ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[3860] ) /*0x479289*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_14B0[3860])( /*0x47928f*/
        *(_DWORD *)&stru_87C374.__pad_14B0[3860],
        1);
    *(_DWORD *)&stru_87C374.__pad_14B0[3860] = 0; /*0x479291*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x4792b9*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13004])( /*0x4792bf*/
        *(_DWORD *)&stru_87C374.__pad_579C[13004],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13004] = 0; /*0x4792c1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13000] ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13000] ) /*0x4792e9*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13000])( /*0x4792ef*/
        *(_DWORD *)&stru_87C374.__pad_579C[13000],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = 0; /*0x4792f1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x479319*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13140])( /*0x47931f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13140],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13140] = 0; /*0x479321*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13136] ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13136] ) /*0x479349*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13136])( /*0x47934f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13136],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = 0; /*0x479351*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13092] ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13092] ) /*0x479379*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13092])( /*0x47937f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13092],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13092] = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = MixFileClass::FromFile( /*0x4793b8*/
           v8,
           (MixFileClass *)stru_81C2C4.customSound_controller,
           (int)&stru_87C374.__pad_579C[20080]);
  else
    v9 = 0; /*0x4793bf*/
  *(_DWORD *)&stru_87C374.__pad_579C[13092] = v9; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v10 = (INIClass *)&aP0->__pad_0[1]; /*0x4793d4*/
  sprintf(Buffer.__pad_0, (ObjectClass *)&stru_81C2C4.owningHouseIndex, (INIClass *)&aP0->__pad_0[1]); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v11 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = MixFileClass::FromFile( /*0x47941a*/
                                                  v11,
                                                  &Buffer,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = 0; /*0x479421*/
  sprintf(Buffer.__pad_0, &stru_81C2C4, v10); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v12 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    *(_DWORD *)&stru_87C374.__pad_579C[13140] = 0; /*0x479489*/
LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  *(_DWORD *)&stru_87C374.__pad_579C[13140] = MixFileClass::FromFile(v12, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x479467*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v13 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = MixFileClass::FromFile( /*0x4794ba*/
                                                  v13,
                                                  (MixFileClass *)&stru_81C200.hasParachute,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v14 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    *(_DWORD *)&stru_87C374.__pad_579C[13004] = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  *(_DWORD *)&stru_87C374.__pad_579C[13004] = MixFileClass::FromFile( /*0x4794f2*/
                                                v14,
                                                (MixFileClass *)&stru_81C200.customSound_controller[2],
                                                (int)&stru_87C374.__pad_579C[20080]);
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = CCFileClass::Construct(&v23, (char *)&stru_81C200.ambientSoundController[4]); /*0x479526*/
  v16 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v15->__pad_0 + 20))(v15, 0); /*0x47953f*/
  v24[0] = &vt_CCFileClass; /*0x479541*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24[0] = &off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor(v24); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v17 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      *(_DWORD *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x479590*/
                                                   v17,
                                                   (MixFileClass *)&stru_81C200.ambientSoundController[4],
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v18 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      *(_DWORD *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x4795bb*/
                                                   v18,
                                                   (MixFileClass *)&stru_81C200.NeedsSaveOrLink,
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x4795c0*/
    }
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[3860] = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count); /*0x4795c8*/
  sprintf((char *const)&Buffer.Previous, (ObjectClass *)&stru_81C200.uniqueId, (INIClass *)aP2); /*0x4795e4*/
  v19 = CCFileClass::Construct(v24, (char *)&Buffer.Previous); /*0x4795f5*/
  v20 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v19->__pad_0 + 20))(v19, 0); /*0x479609*/
  v23 = &vt_CCFileClass; /*0x47960b*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)v25); /*0x479616*/
  v23 = (void **)&off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor(&v23); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v21 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    *(_DWORD *)&stru_87C374.__pad_579C[13084] = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer.__pad_0, &stru_81C200, v10); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v21 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  *(_DWORD *)&stru_87C374.__pad_579C[13084] = MixFileClass::FromFile(v21, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x47964a*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x479662*/
    goto LABEL_61; /*0x479662*/
  return Map_Load_751C30(); /*0x479390*/
}


// ==== 0x004796E0  sub_4796E0  this=-  sig=ida-proto ====
int sub_4796E0()
{
  memset(&MEMORY[0x89E3A8], 0, 0x68u); /*0x4796ed*/
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
void __thiscall sub_479740(void *this, DWORD BytesReturned)
{
  int v2; // esi
  UINT v3; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  DWORD Buffer[2]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  if ( MEMORY[0x887624] ) /*0x47974c*/
  {
    sub_47A080(this, BytesReturned); /*0x479753*/
    return; /*0x47975d*/
  }
  v2 = (char)BytesReturned + 65; /*0x479769*/
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v2); /*0x479773*/
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
  sprintf(FileName, g_Str_Trace______c_, v2); /*0x4797bc*/
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

  sprintf(Buffer, MEMORY[0x81C4B4], a1 + 65); /*0x479918*/
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
  sprintf(FileName, g_Str_Trace______c_, a1 + 65); /*0x479964*/
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
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479bbd*/
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
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479c08*/
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
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479d79*/
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
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479dc5*/
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
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479f09*/
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
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479f55*/
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
  AnimClass *FileA; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-20h] BYREF
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2 + 1; /*0x47a098*/
  LOBYTE(a2) = a2 + 1; /*0x47a0a3*/
  FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a0b3*/
  if ( !CDROM::LockVolume(this, FileA, a2, 0, 0) ) /*0x47a0ba*/
  {
    Debug::Log(); /*0x47a0cf*/
    return; /*0x47a0de*/
  }
  if ( !CDROM::DeviceIoControl(FileA, a2) ) /*0x47a0e5*/
  {
    Debug::Log(); /*0x47a0fa*/
    DriveControlCD(this, FileA, a2); /*0x47a105*/
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
  DriveControlCD(this, FileA, a2); /*0x47a18e*/
  CloseHandle(FileA); /*0x47a19b*/
}


// ==== 0x0047A1B0  ObjectClass::method_47A1B0  this=ObjectClass  sig=csp ====
char __thiscall sub_47A1B0(ObjectClass *this, DWORD BytesReturned)
{
  AnimClass *FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a1bc*/
  Debug::Log(); /*0x47a1d6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a1e0*/
  FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a203*/
  Debug::Log(); /*0x47a205*/
  if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) ) /*0x47a218*/
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
    DriveControlCD(this, FileA, BytesReturned); /*0x47a28f*/
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
  AnimClass *FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a2dc*/
  Debug::Log(); /*0x47a2f6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a300*/
  FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a323*/
  Debug::Log(); /*0x47a325*/
  if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) ) /*0x47a338*/
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
    DriveControlCD(this, FileA, BytesReturned); /*0x47a3af*/
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
char __stdcall CDROM::LockVolume(ObjectClass *aP0, AnimClass *aP1, unsigned __int8 a3, DWORD BytesReturned, __int16 a5)
{
  unsigned __int16 v5; // ax
  int v6; // ebp
  char v7; // bl
  unsigned __int16 v8; // dx
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
      if ( DeviceIoControl(aP1, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a777*/
      {
        if ( (InBuffer[6] & 1) == 0 ) /*0x47a79f*/
          return 1; /*0x47a83b*/
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
    if ( v10 > 0 ) /*0x47a82b*/
      continue; /*0x47a82b*/
    break;
  }
  return 0; /*0x47a832*/
}


// ==== 0x0047A920  DriveControlCD  this=-  sig=csp ====
char __stdcall DriveControlCD(ObjectClass *aP0, HANDLE hDevice, DWORD BytesReturned)
{
  int v3; // ebp
  char v4; // bl
  int v5; // eax
  char result; // al
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
    if ( DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a982*/
      break; /*0x47a982*/
    GetLastError(); /*0x47a98f*/
    Debug::Log(); /*0x47a99b*/
LABEL_5:
    result = 0; /*0x47a9ac*/
    if ( v4 == 8 ) /*0x47a9b1*/
      return result; /*0x47a9b1*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a9aa*/
    goto LABEL_5; /*0x47a9aa*/
  return 1; /*0x47a9b7*/
}


// ==== 0x0047A9D0  BufferIOFile::Constructor  this=CDFileClass  sig=csp ====
CDFileClass *__thiscall BufferIOFile::Constructor(_BYTE *this, char *Source)
{
  BufferIOFileClass::Constructor(this); /*0x47a9d3*/
  this->q054 = 0; /*0x47a9df*/
  *(_DWORD *)this = &off_7E1668; /*0x47a9e3*/
  FileClass::OpenWithCDSearch(this, (IUnknown *)Source); /*0x47a9e9*/
  return (CDFileClass *)this; /*0x47a9f0*/
}


// ==== 0x0047AA00  CDFileClass::method_47AA00  this=CDFileClass  sig=csp ====
CDFileClass *__thiscall sub_47AA00(_BYTE *this, char **a2)
{
  char *v3; // eax

  BufferIOFileClass::Constructor(this); /*0x47aa03*/
  this->q054 = 0; /*0x47aa0c*/
  *(_DWORD *)this = &off_7E1668; /*0x47aa10*/
  v3 = String::GetOrEmpty_Alt(a2); /*0x47aa16*/
  FileClass::OpenWithCDSearch(this, (IUnknown *)v3); /*0x47aa1e*/
  return (CDFileClass *)this; /*0x47aa25*/
}


// ==== 0x0047AA30  BufferIOFile::Init  this=CDFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFile_Init(_BYTE *this)
{
  BufferIOFileClass::Constructor(); /*0x47aa33*/
  this->q054 = 0; /*0x47aa38*/
  *(_DWORD *)this = &off_7E1668; /*0x47aa3c*/
  return this; /*0x47aa44*/
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
BOOL __thiscall FileClass::OpenFileBufferIO(void *this, CDFileClass *aP1)
{
  return BufferIOFileClass::Open((int)this, aP1); /*0x47aaba*/
}


// ==== 0x0047AAC0  sub_47AAC0  this=-  sig=ida-proto ====
BOOL sub_47AAC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)MEMORY[0x89E410]; /*0x47aac1*/
  if ( MEMORY[0x89E410] ) /*0x47aac9*/
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
  MEMORY[0x89E410] = 0; /*0x47aaee*/
  return Game::FindGameDirectoryCD(MEMORY[0x89E41C]); /*0x47aafd*/
}


// ==== 0x0047AB10  Game::FindGameDirectoryCD  this=Game  sig=csp ====
BOOL __thiscall Game::FindGameDirectoryCD(char *Source)
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
  if ( v3 != (char *)&MEMORY[0x87F7E8][31501] ) /*0x47ab3b*/
  {
    strcat((char *)&MEMORY[0x87F7E8][31501], asc_81C8FC); /*0x47ab61*/
    strcat((char *)&MEMORY[0x87F7E8][31501], v3); /*0x47ab89*/
  }
  for ( i = strtok(v3, asc_81C8FC); i; i = strtok(0, asc_81C8FC) ) /*0x47aba4*/
  {
    if ( strlen(i) ) /*0x47abac*/
    {
      strcpy(Str1, i); /*0x47abd6*/
      v5 = Str1[strlen(Str1) - 1]; /*0x47abed*/
      if ( v5 != 58 && v5 != 92 ) /*0x47abf9*/
        strcat(Str1, asc_815E74); /*0x47ac1e*/
      if ( !strncmp(Str1, Str2, 2) ) /*0x47ac33*/
      {
        if ( !MEMORY[0x87F7E8][31499] ) /*0x47ac47*/
          continue; /*0x47ac47*/
        v1 = 1; /*0x47ac52*/
        if ( AlwaysFindYRCD() <= -1 ) /*0x47ac5c*/
          continue; /*0x47ac5c*/
        Str1[0] = LOBYTE(MEMORY[0x87F7E8][31499]) + 65; /*0x47ac6d*/
        v6 = (_DWORD *)__2_YAPAXI_Z(8); /*0x47ac7a*/
        v6[1] = _strdup(Str1); /*0x47ac82*/
        *v6 = 0; /*0x47ac85*/
        v7 = (_DWORD *)MEMORY[0x87F7E8][31498]; /*0x47ac8b*/
        if ( MEMORY[0x87F7E8][31498] ) /*0x47ac96*/
        {
          v8 = *(_DWORD **)MEMORY[0x87F7E8][31498]; /*0x47aca0*/
          if ( *(_DWORD *)MEMORY[0x87F7E8][31498] ) /*0x47aca0*/
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
        MEMORY[0x87F7E8][31498] = v6; /*0x47ac98*/
      }
      else
      {
        if ( Str1[0] - 65 <= 0 || AlwaysFindYRCD() != 2 ) /*0x47acc9*/
          continue; /*0x47acc9*/
        v1 = 1; /*0x47accd*/
        v6 = (_DWORD *)__2_YAPAXI_Z(8); /*0x47acd4*/
        v6[1] = _strdup(Str1); /*0x47ace0*/
        *v6 = 0; /*0x47ace3*/
        v7 = (_DWORD *)MEMORY[0x87F7E8][31498]; /*0x47ace9*/
        if ( MEMORY[0x87F7E8][31498] ) /*0x47acf4*/
        {
          v9 = *(_DWORD **)MEMORY[0x87F7E8][31498]; /*0x47acfe*/
          if ( *(_DWORD *)MEMORY[0x87F7E8][31498] ) /*0x47acfe*/
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
        MEMORY[0x87F7E8][31498] = v6; /*0x47acf6*/
      }
    }
  }
  free(v3); /*0x47ad27*/
  return v1 == 0; /*0x47ab1f*/
}


// ==== 0x0047ADA0  CD::SetCurrentInstance  this=CD  sig=csp ====
int __thiscall sub_47ADA0(void *this)
{
  int result; // eax

  result = MEMORY[0x89E414]; /*0x47ada0*/
  MEMORY[0x89E414] = (int)this; /*0x47ada5*/
  MEMORY[0x89E418] = result; /*0x47adab*/
  return result; /*0x47adb0*/
}


// ==== 0x0047ADC0  sub_47ADC0  this=-  sig=ida-proto ====
void sub_47ADC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)MEMORY[0x89E410]; /*0x47adc1*/
  if ( MEMORY[0x89E410] ) /*0x47adc9*/
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
    MEMORY[0x89E410] = 0; /*0x47aded*/
  }
  else
  {
    MEMORY[0x89E410] = 0; /*0x47adf6*/
  }
}


// ==== 0x0047AE10  CDFileClass::OpenWithCDSearch  this=CDFileClass  sig=csp ====
int __thiscall FileClass::OpenWithCDSearch(_BYTE *this, IUnknown *aP1)
{
  const char *v3; // ebp
  char v5[260]; // [esp+10h] [ebp-104h] BYREF

  CCFileClass::SetName(this, aP1); /*0x47ae21*/
  if ( this->q054 || !MEMORY[0x89E410] || File::IsReady(this, 0) ) /*0x47ae42*/
    return (*(int (__thiscall **)(_BYTE *))(this->FilePointer)(this); /*0x47aef4*/
  v3 = (const char *)MEMORY[0x89E410]; /*0x47ae4f*/
  if ( MEMORY[0x89E410] ) /*0x47ae57*/
  {
    while ( 1 ) /*0x47ae78*/
    {
      strcpy(v5, *((const char **)v3 + 1)); /*0x47ae78*/
      strcat(v5, (const char *)aP1); /*0x47aea4*/
      CCFileClass::SetName(this, (IUnknown *)v5); /*0x47aeb4*/
      if ( File::IsReady(this, 0) ) /*0x47aebd*/
        break; /*0x47aebd*/
      v3 = *(const char **)v3; /*0x47aec6*/
      if ( !v3 ) /*0x47aecb*/
        goto LABEL_7; /*0x47aecb*/
    }
  }
  else
  {
LABEL_7:
    CCFileClass::SetName(this, aP1); /*0x47aecd*/
  }
  return (*(int (__thiscall **)(_BYTE *))(this->FilePointer)(this); /*0x47aee3*/
}


// ==== 0x0047AF10  CDFileClass::Reopen  this=CDFileClass  sig=csp ====
BOOL __thiscall CCFileClass::Reopen(_BYTE *this, char *Source, CDFileClass *aP1)
{
  CCFileClass::Close(this); /*0x47af15*/
  if ( !Source ) /*0x47af20*/
    (*(void (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(this->BufferCursor)(this, 2, 0, 0); /*0x47af2a*/
  if ( this->q054 || aP1 == (CDFileClass *)2 ) /*0x47af3b*/
  {
    CCFileClass::SetName(this, (IUnknown *)Source); /*0x47af56*/
    return BufferIOFileClass::Open((int)this, aP1); /*0x47af5e*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, char *))(this->FileSize)(this, Source); /*0x47af42*/
    return BufferIOFileClass::Open((int)this, aP1); /*0x47af48*/
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
    v4 = (const char *)MEMORY[0x89E410]; /*0x47b020*/
    if ( MEMORY[0x89E410] ) /*0x47b028*/
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


// ==== 0x0047B0C0  FileFind::Next  this=CampaignClass  sig=csp ====
char __thiscall FileFind_Next(char *this)
{
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    if ( hFindFile != (HANDLE)-1 && FindNextFileA(hFindFile, &FindFileData) ) /*0x47b0dd*/
    {
      strcpy(this, FindFileData.cFileName); /*0x47b104*/
      return 1; /*0x47b116*/
    }
    *this = 0; /*0x47b117*/
  }
  return 0; /*0x47b10f*/
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
  MEMORY[0x89E750] = Math::Sqrt(v0 + v0); /*0x47b16e*/
}


// ==== 0x0047B180  sub_47B180  this=-  sig=ida-proto ====
void sub_47B180()
{
  MEMORY[0x89E7B8] = MEMORY[0x89E750] / 60.0; /*0x47b18c*/
}


// ==== 0x0047B1A0  sub_47B1A0  this=-  sig=ida-proto ====
void sub_47B1A0()
{
  MEMORY[0x89E7A0] = 1.0 / MEMORY[0x89E7B8]; /*0x47b1ac*/
}


// ==== 0x0047B1C0  sub_47B1C0  this=-  sig=ida-proto ====
void sub_47B1C0()
{
  MEMORY[0x89E798] = 0.0174532925199433 * 45.0; /*0x47b1cc*/
}


// ==== 0x0047B1E0  sub_47B1E0  this=-  sig=ida-proto ====
void sub_47B1E0()
{
  MEMORY[0x89E758] = 0.0174532925199433 * 60.0; /*0x47b1ec*/
}


// ==== 0x0047B200  sub_47B200  this=-  sig=ida-proto ====
void sub_47B200()
{
  MEMORY[0x89E728] = 0.0174532925199433 * 90.0; /*0x47b20c*/
}


// ==== 0x0047B220  sub_47B220  this=-  sig=ida-proto ====
__int64 sub_47B220()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E728] - MEMORY[0x89E758]); /*0x47b232*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E750] * 0.5); /*0x47b246*/
  MEMORY[0x89E7C0] = result; /*0x47b24b*/
  return result; /*0x47b250*/
}


// ==== 0x0047B260  sub_47B260  this=-  sig=ida-proto ====
void sub_47B260()
{
  MEMORY[0x89E768] = Math::ArcTan((double)MEMORY[0x89E7C0] * 0.00390625); /*0x47b277*/
}


// ==== 0x0047B290  sub_47B290  this=-  sig=ida-proto ====
void sub_47B290()
{
  MEMORY[0x89E788] = Math::ArcTan((double)(2 * MEMORY[0x89E7C0]) / MEMORY[0x89E750]); /*0x47b2b2*/
}


// ==== 0x0047B2C0  sub_47B2C0  this=-  sig=ida-proto ====
__int64 sub_47B2C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E7C0]) + 0.5); /*0x47b2db*/
  MEMORY[0x89E7B4] = result; /*0x47b2e0*/
  return result; /*0x47b2e6*/
}


// ==== 0x0047B2F0  sub_47B2F0  this=-  sig=ida-proto ====
int sub_47B2F0()
{
  MEMORY[0x89E748] = 0; /*0x47b2f2*/
  return 0; /*0x47b2fe*/
}


// ==== 0x0047B300  sub_47B300  this=-  sig=ida-proto ====
int sub_47B300()
{
  MEMORY[0x89E778] = 0; /*0x47b302*/
  MEMORY[0x89E77C] = 0; /*0x47b307*/
  MEMORY[0x89E780] = 0; /*0x47b30c*/
  return 0; /*0x47b311*/
}


// ==== 0x0047B320  sub_47B320  this=-  sig=ida-proto ====
int sub_47B320()
{
  MEMORY[0x89E7B0] = 0; /*0x47b325*/
  MEMORY[0x89E7A8] = 128; /*0x47b32f*/
  MEMORY[0x89E7AC] = 128; /*0x47b334*/
  return 128; /*0x47b339*/
}


// ==== 0x0047B340  sub_47B340  this=-  sig=ida-proto ====
int sub_47B340()
{
  MEMORY[0x89E730] = 0; /*0x47b342*/
  MEMORY[0x89E734] = 0; /*0x47b347*/
  MEMORY[0x89E738] = 0; /*0x47b34c*/
  MEMORY[0x89E73C] = 0; /*0x47b351*/
  return 0; /*0x47b356*/
}


// ==== 0x0047B3A0  Isometric::InitTables  this=IUnknown  sig=csp ====
__int64 __thiscall Isometric::InitTables(int this, IUnknown *aP1)
{
  char v2; // al
  __int64 result; // rax
  int v5; // ecx
  double v6; // st7

  v2 = MEMORY[0x89E770]; /*0x47b3a9*/
  if ( (MEMORY[0x89E770] & 1) == 0 ) /*0x47b3b3*/
  {
    v2 = MEMORY[0x89E770] | 1; /*0x47b3bb*/
    MEMORY[0x89E770] |= 1u; /*0x47b3bd*/
    *(double *)&MEMORY[0x89E720] = (double)MEMORY[0x89E7C0]; /*0x47b3c2*/
  }
  if ( (v2 & 2) == 0 ) /*0x47b3ca*/
  {
    v2 |= 2u; /*0x47b3d8*/
    MEMORY[0x89E770] = v2; /*0x47b3da*/
    MEMORY[0x89E740] = *(double *)&MEMORY[0x89E720] * 0.00390625; /*0x47b3df*/
  }
  if ( (v2 & 4) == 0 ) /*0x47b3e7*/
  {
    MEMORY[0x89E770] = v2 | 4; /*0x47b3f5*/
    MEMORY[0x81C918][0] = MEMORY[0x89E720]; /*0x47b3ff*/
    MEMORY[0x81C940] = MEMORY[0x89E720]; /*0x47b40e*/
    MEMORY[0x81C960] = MEMORY[0x89E720]; /*0x47b41d*/
    MEMORY[0x81C968] = MEMORY[0x89E720]; /*0x47b433*/
    MEMORY[0x81C988] = MEMORY[0x89E720]; /*0x47b442*/
    MEMORY[0x81C990] = MEMORY[0x89E720]; /*0x47b451*/
    qword_81C9B8 = MEMORY[0x89E720]; /*0x47b461*/
    qword_81C9E0 = MEMORY[0x89E720]; /*0x47b470*/
    dbl_81C9B0 = -*(double *)&MEMORY[0x89E720]; /*0x47b47a*/
    MEMORY[0x81C920] = 0; /*0x47b482*/
    MEMORY[0x81C924] = 0; /*0x47b48c*/
    MEMORY[0x81C928] = 0; /*0x47b496*/
    MEMORY[0x81C92C] = 0; /*0x47b4a0*/
    MEMORY[0x81C930] = 0; /*0x47b4aa*/
    MEMORY[0x81C934] = 1072693248; /*0x47b4b4*/
    MEMORY[0x81C938] = 0; /*0x47b4be*/
    MEMORY[0x81C93C] = 0; /*0x47b4c8*/
    MEMORY[0x81C948] = 0; /*0x47b4d2*/
    MEMORY[0x81C94C] = 0; /*0x47b4dc*/
    MEMORY[0x81C950] = 0; /*0x47b4e6*/
    MEMORY[0x81C954] = -1074790400; /*0x47b4f0*/
    MEMORY[0x81C958] = 0; /*0x47b4fa*/
    MEMORY[0x81C95C] = 0; /*0x47b504*/
    MEMORY[0x81C970] = 0; /*0x47b50e*/
    MEMORY[0x81C974] = 0; /*0x47b518*/
    MEMORY[0x81C978] = 0; /*0x47b522*/
    MEMORY[0x81C97C] = 0; /*0x47b52c*/
    MEMORY[0x81C980] = 0; /*0x47b536*/
    MEMORY[0x81C984] = -1074790400; /*0x47b540*/
    MEMORY[0x81C998] = 0; /*0x47b54a*/
    MEMORY[0x81C99C] = 0; /*0x47b554*/
    MEMORY[0x81C9A0] = 0; /*0x47b55e*/
    MEMORY[0x81C9A4] = 1072693248; /*0x47b568*/
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
    qword_81CA00 = MEMORY[0x89E720]; /*0x47b617*/
    qword_81CA08 = MEMORY[0x89E720]; /*0x47b627*/
    qword_81CA30 = MEMORY[0x89E720]; /*0x47b63c*/
    qword_81CA58 = MEMORY[0x89E720]; /*0x47b64b*/
    qword_81CA78 = MEMORY[0x89E720]; /*0x47b65b*/
    qword_81CA80 = MEMORY[0x89E720]; /*0x47b66a*/
    qword_81CAA8 = MEMORY[0x89E720]; /*0x47b67b*/
    qword_81CAC8 = MEMORY[0x89E720]; /*0x47b68b*/
    dbl_81CAA0 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b692*/
    dbl_81CAF8 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b698*/
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
    qword_81CAD0 = MEMORY[0x89E720]; /*0x47b7fa*/
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
    dbl_81CB20 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b873*/
    dbl_81CB40 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b879*/
    dbl_81CB48 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b87f*/
    dbl_81CB70 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b885*/
    qword_81CB18 = MEMORY[0x89E720]; /*0x47b89b*/
    dbl_81CB98 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8ab*/
    dbl_81CBA0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8b1*/
    dbl_81CBC0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8b7*/
    qword_81CB68 = MEMORY[0x89E720]; /*0x47b8c9*/
    qword_81CBB8 = MEMORY[0x89E720]; /*0x47b8da*/
    dbl_81CBC8 = *(double *)&MEMORY[0x89E720] * -0.5; /*0x47b8e4*/
    qword_81CC08 = MEMORY[0x89E720]; /*0x47b8f5*/
    dword_81CB0C = -1074790400; /*0x47b8ff*/
    dbl_81CBE8 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b909*/
    dbl_81CBF0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b90f*/
    dbl_81CC10 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b915*/
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
    *(double *)&qword_81CC18 = *(double *)&MEMORY[0x89E720] * -0.5; /*0x47ba89*/
  }
  result = Math::RoundToInt((double)(MEMORY[0x89E7C0] * *(char *)(this + 283)) + 0.5); /*0x47bab0*/
  if ( *(_BYTE *)(this + 284) ) /*0x47bab5*/
  {
    v5 = 40 * (*(unsigned __int8 *)(this + 284) - 1); /*0x47baec*/
    v6 = (double)(unsigned __int8)aP1->field_4 * *(double *)(v5 + 8505608) * MEMORY[0x89E740] /*0x47bb17*/
       + (double)(unsigned __int8)aP1->field_0 * *(double *)(v5 + 8505600) * MEMORY[0x89E740]
       + *(double *)(v5 + 8505616)
       + *(double *)(v5 + 8505632);
    if ( v6 < 0.0 ) /*0x47bb28*/
      v6 = 0.0; /*0x47bb2c*/
    if ( v6 > *(double *)&MEMORY[0x81C918][5 * *(unsigned __int8 *)(this + 284) - 5] ) /*0x47bb3d*/
      v6 = *(double *)&MEMORY[0x81C918][5 * *(unsigned __int8 *)(this + 284) - 5]; /*0x47bb41*/
    return Math::RoundToInt(v6); /*0x47bb4d*/
  }
  return result; /*0x47bb54*/
}


// ==== 0x0047BB60  CellClass::DTOR  this=CellClass  sig=csp ====
void __thiscall CellClass::DTOR(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))this->attached1; /*0x47bb66*/
  *this = &CellClass::`vftable'; /*0x47bb69*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bb71*/
  this->bridgeOwnerCell = &CellClass::`vftable'; /*0x47bb78*/
  this->unknown30 = &CellClass::`vftable'; /*0x47bb7f*/
  if ( v2 ) /*0x47bb86*/
  {
    (**v2)(v2, 1); /*0x47bb8c*/
    this->attached1 = 0; /*0x47bb8e*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->CellClass_field_FC; /*0x47bb91*/
  if ( v3 ) /*0x47bb99*/
  {
    (**v3)(v3, 1); /*0x47bb9f*/
    this->CellClass_field_FC = 0; /*0x47bba1*/
  }
  this->firstObject = 0; /*0x47bba7*/
  if ( this->smudgeTypeIndex != MEMORY[0x89E748] ) /*0x47bbb8*/
  {
    v4 = this->attached3; /*0x47bbc7*/
    if ( v4 ) /*0x47bbcc*/
    {
      if ( MEMORY[0xA8E9A0] ) /*0x47bbd4*/
        --*(_DWORD *)(v4 + 404); /*0x47bbd6*/
      this->attached3 = 0; /*0x47bbdc*/
    }
  }
  AbstractClass::DTOR(this); /*0x47bbe1*/
}


// ==== 0x0047BBF0  CellClass::Construct  this=CellClass  sig=csp ====
_DWORD *__thiscall sub_47BBF0(_DWORD *this)
{
  unsigned int v2; // edx
  int v3; // ecx

  AbstractClass::Constructor((int)this); /*0x47bbf6*/
  this->smudgeTypeIndex = MEMORY[0x89E748]; /*0x47bc02*/
  this->attached1 = 0; /*0x47bc05*/
  this->q02C = 0; /*0x47bc08*/
  this->q030 = 0; /*0x47bc0b*/
  this->attached3 = 0; /*0x47bc0e*/
  this->q038 = 0xFFFF; /*0x47bc11*/
  this->q03C = 0; /*0x47bc18*/
  this->q040 = 0; /*0x47bc1e*/
  this->q044 = -1; /*0x47bc21*/
  this->q048 = -1; /*0x47bc24*/
  this->CellClass_field_4C = 0; /*0x47bc27*/
  this->wallOwnerIndex = -1; /*0x47bc2a*/
  this->infantryOwnerIndex = -1; /*0x47bc2d*/
  this->altInfantryOwnerIndex = -1; /*0x47bc30*/
  this->CellClass_field_5C = -1; /*0x47bc33*/
  this->unknown60 = -1; /*0x47bc39*/
  this->unknown64 = -1; /*0x47bc3e*/
  this->unknown68 = 0; /*0x47bc41*/
  *((_WORD *)this + 139) = -1; /*0x47bc48*/
  this->CellClass_field_6C = 0; /*0x47bc4f*/
  v2 = this->copyFlags & 0xFFFFFFE0; /*0x47bc58*/
  this->unknown70 = 0; /*0x47bc5d*/
  this->copyFlags = v2; /*0x47bc60*/
  this->alignmentPadding = 0; /*0x47bc69*/
  this->unknown74 = 0; /*0x47bc70*/
  this->cloakedByHouses = 0; /*0x47bc73*/
  this->baseSpacerOfHouses = 0; /*0x47bc76*/
  this->jumpjet = 0; /*0x47bc7c*/
  this->firstObject = 0; /*0x47bc82*/
  this->altObject = 0; /*0x47bc88*/
  this->landType = 0; /*0x47bc93*/
  this->radLevel = 0; /*0x47bc99*/
  this->q214 = 1000; /*0x47bc9f*/
  this->__pad_218 = 1000; /*0x47bca6*/
  *((_WORD *)this + 135) = 1000; /*0x47bcad*/
  *((_WORD *)this + 136) = 1000; /*0x47bcb4*/
  *((_WORD *)this + 137) = 1000; /*0x47bcbb*/
  *((_WORD *)this + 138) = 1000; /*0x47bcc2*/
  v3 = this->flags; /*0x47bcc9*/
  this->q0F4 = 0; /*0x47bccf*/
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
  this->q488 = 0; /*0x47bd34*/
  this->shroudCounter = 1; /*0x47bd3a*/
  this->gapsCoveringThisCell = 0; /*0x47bd44*/
  this->visibilityChanged = 0; /*0x47bd4a*/
  this->CellClass_field_13C = 0; /*0x47bd50*/
  this->flags = v3 & 0xFF800000; /*0x47bd56*/
  *this = &CellClass::`vftable'; /*0x47bd5c*/
  this->foggedObjects = &CellClass::`vftable'; /*0x47bd62*/
  this->bridgeOwnerCell = &CellClass::`vftable'; /*0x47bd68*/
  this->unknown30 = &CellClass::`vftable'; /*0x47bd79*/
  memset(this + 31, 0, 0x30u); /*0x47bd80*/
  memset(this + 43, 0, 0x30u); /*0x47bd8d*/
  AbstractClass::GenerateUniqueID(this + 1); /*0x47bd90*/
  this->occupationFlags = 0; /*0x47bd95*/
  this->altOccupationFlags = 0; /*0x47bd9b*/
  return this; /*0x47bda3*/
}


// ==== 0x0047BDB0  ObjectClass::GetBridgeCellColor  this=ObjectClass  sig=csp ====
int __thiscall GetBridgeCellColor(int this, _BYTE *a2, char a3)
{
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int RadarColor; // eax
  int v12; // esi
  BombClass *v13; // ecx
  BombClass *v14; // edx
  _DWORD *v15; // edi
  int inited; // eax
  _DWORD *v17; // eax
  unsigned __int16 *_549E50; // eax
  _BYTE v19[28]; // [esp-1Ch] [ebp-34h] BYREF
  __int16 v20; // [esp+10h] [ebp-8h]
  unsigned __int8 v21; // [esp+12h] [ebp-6h]

  *(_DWORD *)&v19[24] = 0; /*0x47bdbb*/
  *(_DWORD *)&v19[20] = 6; /*0x47bdbf*/
  *a2 = 0; /*0x47bdc1*/
  v4 = PlacementList::FindByID((_DWORD *)this, *(int *)&v19[20], *(TechnoClass **)&v19[24]); /*0x47bdc9*/
  if ( !a3 ) /*0x47bdd1*/
  {
    if ( v4 ) /*0x47bdd9*/
    {
      v5 = v4[328]; /*0x47bddf*/
      if ( !*(_BYTE *)(v5 + 3226) /*0x47be0f*/
        && !*(_BYTE *)(v5 + 5889)
        && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 104))(v4, 0, 0) != 5 )
      {
        v6 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v4[135] + 90196)); /*0x47be23*/
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
  if ( (*(_DWORD *)(this + 320) & 0x100) == 0 ) /*0x47be92*/
  {
    v13 = *(BombClass **)(this + 56); /*0x47bfa8*/
    v14 = *(BombClass **)&MEMORY[0xA8D63C].__pad_579C[58072]; /*0x47bfab*/
    if ( v13 == (BombClass *)0xFFFF ) /*0x47bfbc*/
      v15 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] /*0x47bfc3*/
                       + 4 * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072]);
    else
      v15 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * (_DWORD)v13); /*0x47bfbe*/
    inited = 0; /*0x47bfc6*/
    if ( v13 == (BombClass *)0xFFFF ) /*0x47bfce*/
    {
      *(_DWORD *)&v19[24] = v15[188]; /*0x47c00d*/
    }
    else
    {
      if ( (int)v15[188] <= 1 ) /*0x47bfd7*/
      {
LABEL_27:
        v17 = Map_Get(v15, inited); /*0x47c016*/
        _549E50 = (unsigned __int16 *)Map_Get_549E50((int)v17, *(unsigned __int8 *)(this + 282), *(char *)(this + 283)); /*0x47c031*/
        return _549E50[1] | (*_549E50 << 16); /*0x47c049*/
      }
      if ( CellClass::GetTerrainFlag(v15, *(unsigned __int8 *)(this + 282)) ) /*0x47bfe4*/
      {
        inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x47bff6*/
        goto LABEL_27; /*0x47bff9*/
      }
      v14 = *(BombClass **)(this + 56); /*0x47c001*/
      *(_DWORD *)&v19[24] = v15[188]; /*0x47c004*/
    }
    inited = CellClass::InitRandomOffsets(this, v14, *(IUnknown **)&v19[24]); /*0x47c011*/
    goto LABEL_27; /*0x47c011*/
  }
  RadarColor = OverlayTypeClass::GetRadarColor((int *)MEMORY[0xA83D84][1].headNode[1], (int)&a3, 0); /*0x47bea8*/
  v20 = *(_WORD *)RadarColor; /*0x47bebc*/
  v21 = *(_BYTE *)(RadarColor + 2); /*0x47beca*/
  v12 = (v21 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x47bf24*/
      | (HIBYTE(v20) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
      | ((unsigned __int8)v20 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
  if ( !v12 ) /*0x47bf26*/
  {
    v12 = (*(unsigned __int8 *)(MEMORY[0xA83D84][1].headNode[1] + 696) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x47bf86*/
        | ((unsigned __int8)HIBYTE(*(_WORD *)(MEMORY[0xA83D84][1].headNode[1] + 694)) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
        | ((unsigned __int8)*(_WORD *)(MEMORY[0xA83D84][1].headNode[1] + 694) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
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
  IUnknown **v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char **v13; // eax
  int inited; // eax
  CellClass *v15; // edi
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
    RadarColor = OverlayTypeClass::GetRadarColor((int *)MEMORY[0xA83D84][1].headNode[1], (int)&v24, 0); /*0x47c0c9*/
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
    v8 = *(IUnknown ***)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] /*0x47c0f9*/
                       + 4 * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072]);
  else
    v8 = *(IUnknown ***)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v7); /*0x47c0e9*/
  v9 = *(_DWORD *)(this + 68); /*0x47c0fc*/
  if ( v9 != -1 && v9 != 239 ) /*0x47c136*/
  {
    v10 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v9]; /*0x47c143*/
    if ( !*(_BYTE *)(v10 + 681) ) /*0x47c146*/
    {
      if ( (v9 < 74 || v9 > 99) && (v9 < 205 || v9 > 230) ) /*0x47c167*/
        v11 = OverlayTypeClass::GetRadarColor( /*0x47c182*/
                *(int **)&MEMORY[0xA83D84]->__pad_0[4 * v9],
                (int)&v24,
                *(unsigned __int8 *)(this + 286));
      else
        v11 = OverlayTypeClass::GetRadarColor(*(int **)&MEMORY[0xA83D84]->__pad_0[4 * v9], (int)&v24, 1u); /*0x47c16f*/
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
    inited = CellClass::InitRandomOffsets(this, *(BombClass **)&MEMORY[0xA8D63C].__pad_579C[58072], v8[188]); /*0x47c29d*/
  }
  else if ( (int)v8[188] > 1 ) /*0x47c25e*/
  {
    LOBYTE(inited) = *(_BYTE *)(this + 282); /*0x47c260*/
    if ( CellClass::GetTerrainFlag(v8, inited) ) /*0x47c269*/
      inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x47c27b*/
    else
      inited = CellClass::InitRandomOffsets(this, *(BombClass **)(this + 56), v8[188]); /*0x47c28b*/
  }
  v15 = (CellClass *)Map_Get(v8, inited); /*0x47c2aa*/
  if ( !v15->sensorsOfHouses[10] && LOBYTE(v15[2].unknown64) ) /*0x47c2b6*/
    CellClass::EnsureFileLoaded((int)v15); /*0x47c2c2*/
  v16 = *(_BYTE **)(v15->sensorsOfHouses[10] + 4 * *(unsigned __int8 *)(this + 282) + 16); /*0x47c2d5*/
  if ( v16 ) /*0x47c2df*/
  {
    v17 = v16[44]; /*0x47c2ea*/
    v18 = v16[43]; /*0x47c2ed*/
    v26 = v16[45]; /*0x47c2f0*/
    LOBYTE(v25) = v18; /*0x47c2fa*/
    HIBYTE(v25) = v17; /*0x47c2fe*/
    v19 = Color::ScaleRGB(&v24, (unsigned __int8 *)&v25, dword_7E1BD0[28 * MEMORY[0xA8B230]->theater]); /*0x47c324*/
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
int __thiscall Object::FindClosestObjectCell(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  int v4; // edi
  int v5; // ebx
  IUnknown *v6; // ecx
  IUnknown *v7; // esi
  _DWORD *v8; // eax
  double v9; // st7
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  _BYTE v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v4 = 7 * aP1->field_0; /*0x47c3f2*/
  v5 = 7 * aP1->field_4; /*0x47c3fe*/
  if ( (_BYTE)aP2 ) /*0x47c405*/
    v6 = (IUnknown *)this->Object_field_0xE8; /*0x47c407*/
  else
    v6 = (IUnknown *)this->Object_field_0xE4; /*0x47c40f*/
  if ( !v6 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v7 = v6; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (v7->__pad_10[4] & 1) != 0 && v7 != aP3 ) /*0x47c435*/
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(v7->field_0 + 72))(v7, v16); /*0x47c440*/
      v14 = (unsigned __int8)*v8 - v4; /*0x47c45a*/
      v15 = (unsigned __int8)v8[1] - v5; /*0x47c463*/
      v17 = v8[2]; /*0x47c467*/
      v9 = Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      v10 = Math::RoundToInt(v9); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = (int)v7; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v7 = *(IUnknown **)&v7->__pad_28[8]; /*0x47c4a7*/
  }
  while ( v7 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}


// ==== 0x0047C4D0  PlacementList::FindByID  this=IUnknown  sig=csp ====
_DWORD *__thiscall PlacementList::FindByID(_DWORD *this, int a2, TechnoClass *aP2)
{
  _DWORD *v3; // esi

  if ( !MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c4d9*/
    return 0; /*0x47c4d9*/
  v3 = (_DWORD *)((_BYTE)aP2 ? this->q03A : this->q0E4);
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
_DWORD *__thiscall Cell_IsBridge(_DWORD *this)
{
  _DWORD *v1; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x47c528*/
    return 0; /*0x47c528*/
  v1 = (_DWORD *)this->Cell_field_0xE4; /*0x47c52a*/
  if ( !v1 ) /*0x47c532*/
    return 0; /*0x47c547*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) != 6 ) /*0x47c53e*/
  {
    v1 = (_DWORD *)v1[12]; /*0x47c540*/
    if ( !v1 ) /*0x47c545*/
      return 0; /*0x47c545*/
  }
  return v1; /*0x47c549*/
}


// ==== 0x0047C550  CellClass::FindInfantry  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellClass_FindInfantry(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x47c558*/
    return 0; /*0x47c558*/
  v2 = (_DWORD *)(a2 ? this->q03A : this->q0E4);
  if ( !v2 ) /*0x47c572*/
    return 0; /*0x47c587*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 36 ) /*0x47c57e*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47c580*/
    if ( !v2 ) /*0x47c585*/
      return 0; /*0x47c585*/
  }
  return v2; /*0x47c589*/
}


// ==== 0x0047C5A0  Object::FindObjectCell  this=Object  sig=csp ====
int __thiscall Object::FindObjectCell(_DWORD *this, TechnoClass *aP1, char aP2)
{
  _DWORD *v4; // esi
  int result; // eax

  if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c5ab*/
  {
    v4 = (_DWORD *)this->Object_field_0xE4; /*0x47c5ad*/
    if ( v4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 ) /*0x47c5c1*/
      {
        v4 = (_DWORD *)v4[12]; /*0x47c5c3*/
        if ( !v4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)v4; /*0x47c5c1*/
    }
  }
LABEL_5:
  result = Object::FindClosestObjectCell(this, (IUnknown *)aP1, (IUnknown *)aP2, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c5e8*/
    {
      v4 = (_DWORD *)this->Object_field_0xE4; /*0x47c5ea*/
      if ( v4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 36 ) /*0x47c5fe*/
        {
          v4 = (_DWORD *)v4[12]; /*0x47c600*/
          if ( !v4 ) /*0x47c605*/
            return 0; /*0x47c605*/
        }
        return (int)v4; /*0x47c612*/
      }
    }
    return 0; /*0x47c607*/
  }
  return result; /*0x47c609*/
}


// ==== 0x0047C620  CellClass::IsPassable  this=CellClass  sig=csp ====
char __thiscall CellClass::IsPassable(int this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  char result; // al
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  BombClass *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // esi
  _DWORD *ClosestObjectCell; // eax
  int v14; // ecx
  int v15; // eax
  IUnknown *v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  BombClass *v21; // eax
  int v22; // [esp+10h] [ebp-8h] BYREF
  int v23; // [esp+14h] [ebp-4h]

  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x47c632*/
    return 1; /*0x47c632*/
  if ( aP2 ) /*0x47c63e*/
  {
    if ( aP2->__pad_14B0[527] ) /*0x47c640*/
    {
      if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c655*/
      {
        v5 = *(_DWORD **)(this + 228); /*0x47c657*/
        if ( v5 ) /*0x47c65f*/
        {
          while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 6 ) /*0x47c66b*/
          {
            v5 = (_DWORD *)v5[12]; /*0x47c66d*/
            if ( !v5 ) /*0x47c672*/
              goto LABEL_10; /*0x47c672*/
          }
          return 0; /*0x47c66b*/
        }
LABEL_10:
        if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c681*/
        {
          v6 = *(_DWORD **)(this + 228); /*0x47c683*/
          if ( v6 ) /*0x47c68b*/
          {
            while ( (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6) != 36 ) /*0x47c697*/
            {
              v6 = (_DWORD *)v6[12]; /*0x47c699*/
              if ( !v6 ) /*0x47c69e*/
                goto LABEL_14; /*0x47c69e*/
            }
            return 0; /*0x47c697*/
          }
        }
      }
      goto LABEL_14; /*0x47c68b*/
    }
    if ( aP2->__pad_14B0[526] || aP2->__pad_14B0[519] ) /*0x47c6eb*/
    {
      v22 = 0; /*0x47c7cd*/
      v23 = 0; /*0x47c7d3*/
      if ( MEMORY[0xA8D63C].__pad_1258[268] && (v12 = *(_DWORD **)(this + 228)) != 0 ) /*0x47c7e1*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) != 2 ) /*0x47c7ed*/
        {
          v12 = (_DWORD *)v12[12]; /*0x47c7ef*/
          if ( !v12 ) /*0x47c7f4*/
            goto LABEL_44; /*0x47c7f4*/
        }
      }
      else
      {
LABEL_44:
        ClosestObjectCell = (_DWORD *)Object::FindClosestObjectCell((_DWORD *)this, (IUnknown *)&v22, 0, 0); /*0x47c7fc*/
        if ( !ClosestObjectCell ) /*0x47c80c*/
          ClosestObjectCell = PlacementList::FindByID((_DWORD *)this, 36, 0); /*0x47c813*/
        v12 = ClosestObjectCell; /*0x47c818*/
        if ( !ClosestObjectCell ) /*0x47c81c*/
          goto LABEL_52; /*0x47c81c*/
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) != 6 ) /*0x47c828*/
        return 0; /*0x47c833*/
      if ( *(_BYTE *)(v12[328] + 5823) && (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*v12 + 60))(v12) == aP3 ) /*0x47c851*/
      {
LABEL_52:
        if ( (*(_BYTE *)(this + 292) & 0x3F) == 0 ) /*0x47c866*/
          goto LABEL_14; /*0x47c866*/
        return 0; /*0x47c866*/
      }
    }
    else
    {
      if ( *(_DWORD *)&aP2->__pad_DFC[92] ) /*0x47c6f9*/
      {
        v10 = *(BombClass **)(this + 56); /*0x47c76b*/
        if ( (int)v10 < 0 /*0x47c783*/
          || (int)v10 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[588]
          || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * (_DWORD)v10) + 736) )
        {
          if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c798*/
          {
            v11 = *(_DWORD **)(this + 228); /*0x47c79e*/
            if ( v11 ) /*0x47c7a6*/
            {
              while ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) != 6 ) /*0x47c7b6*/
              {
                v11 = (_DWORD *)v11[12]; /*0x47c7bc*/
                if ( !v11 ) /*0x47c7c1*/
                  goto LABEL_14; /*0x47c7c1*/
              }
              return 0; /*0x47c7b6*/
            }
          }
          goto LABEL_14; /*0x47c7a6*/
        }
        return 0; /*0x47c875*/
      }
      v22 = 0; /*0x47c706*/
      v23 = 0; /*0x47c70c*/
      if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c710*/
      {
        v8 = *(_DWORD **)(this + 228); /*0x47c712*/
        if ( v8 ) /*0x47c71a*/
        {
          while ( (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) != 2 ) /*0x47c726*/
          {
            v8 = (_DWORD *)v8[12]; /*0x47c728*/
            if ( !v8 ) /*0x47c72d*/
              goto LABEL_25; /*0x47c72d*/
          }
          v9 = v8; /*0x47c767*/
LABEL_27:
          if ( v9 ) /*0x47c751*/
            return 0; /*0x47c760*/
          goto LABEL_52; /*0x47c751*/
        }
      }
LABEL_25:
      if ( !Object::FindClosestObjectCell((_DWORD *)this, (IUnknown *)&v22, 0, 0) ) /*0x47c738*/
      {
        v9 = PlacementList::FindByID((_DWORD *)this, 36, 0); /*0x47c74a*/
        goto LABEL_27; /*0x47c74a*/
      }
    }
    return 0; /*0x47c85c*/
  }
LABEL_14:
  if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x47c6a7*/
  {
    if ( !Type::CheckAmbiguity(&MEMORY[0x87F7E8], this, 1) ) /*0x47c887*/
      return 0; /*0x47c887*/
LABEL_55:
    v14 = *(_DWORD *)(this + 68); /*0x47c88d*/
    if ( v14 == -1 ) /*0x47c893*/
    {
LABEL_86:
      if ( aP1 == (IUnknown *)-1 ) /*0x47c9d4*/
      {
        v20 = *(_DWORD *)(this + 320); /*0x47c9d6*/
        if ( (v20 & 0x100) == 0 && (v20 & 0x400) == 0 && !*(_BYTE *)(this + 284) ) /*0x47c9f3*/
        {
          if ( !aP2->__pad_BC0[270] ) /*0x47ca0d*/
            return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)]; /*0x47ca4a*/
          v21 = *(BombClass **)(this + 56); /*0x47ca0f*/
          if ( (int)v21 >= *(int *)&MEMORY[0xA8D63C].__pad_579C[55648] ) /*0x47ca1a*/
            return (int)v21 < *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] + 14; /*0x47ca25*/
        }
        return 0; /*0x47ca1a*/
      }
      return MEMORY[0x89EA40][(_DWORD)aP1 + 8 * *(_DWORD *)(this + 236) + *(_DWORD *)(this + 236)] != 0.0; /*0x47ca6a*/
    }
    v15 = *(_DWORD *)(this + 80); /*0x47c899*/
    v16 = 0; /*0x47c89c*/
    if ( v15 >= 0 ) /*0x47c8a0*/
      v16 = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v15]; /*0x47c8a8*/
    if ( v14 == 2 || !v14 ) /*0x47c8b8*/
    {
      if ( aP2 ) /*0x47c8c0*/
      {
        if ( ((v17 = *(_DWORD *)&aP2->__pad_DFC[88]) != 0 /*0x47c8fd*/
           && *(_DWORD *)(v17 + 660) == v14
           && *(_BYTE *)(this + 286) >= 0x10u
           || aP2 == *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2172)
           || aP2 == *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2156)
           || aP2 == *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2160))
          && v16 == aP3 )
        {
          return 1; /*0x47c8fd*/
        }
      }
    }
    if ( v14 == 26 ) /*0x47c906*/
    {
      if ( !aP2 ) /*0x47c90e*/
      {
LABEL_84:
        if ( !MEMORY[0xA8D63C].__pad_14B0[639] /*0x47c9bf*/
          || *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *(_DWORD *)(this + 68)] + 680) )
        {
          return 0; /*0x47c9c7*/
        }
        goto LABEL_86; /*0x47c9c7*/
      }
      v18 = *(_DWORD *)&aP2->__pad_DFC[88]; /*0x47c914*/
      if ( (v18 && *(_DWORD *)(v18 + 660) == 26 && *(_BYTE *)(this + 286) >= 0x10u /*0x47c949*/
         || aP2 == *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2164)
         || aP2 == *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2168))
        && v16 == aP3 )
      {
        return 1; /*0x47c949*/
      }
    }
    if ( aP2 && aP2->__pad_14B0[527] && (v14 == 126 || FindBuildingByTiberiumType(v14) != -1) ) /*0x47c96e*/
    {
      v19 = *(_DWORD *)(this + 320); /*0x47c970*/
      if ( (v19 & 0x100) == 0 && (v19 & 0x400) == 0 ) /*0x47c987*/
        return !*(_BYTE *)(this + 284); /*0x47c98d*/
      return 0; /*0x47c6da*/
    }
    goto LABEL_84; /*0x47c96e*/
  }
  result = LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)(this + 36)); /*0x47c6b6*/
  if ( result ) /*0x47c6bd*/
    goto LABEL_55; /*0x47c6bd*/
  return result; /*0x47c6c3*/
}


// ==== 0x0047CA80  CellClass::DetermineTileType  this=CellClass  sig=csp ====
BOOL __thiscall CellClass_DetermineTileType(int this)
{
  int v2; // edx
  int v3; // ebp
  unsigned int v4; // edi
  int i; // ebx
  _DWORD *v6; // eax
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
  int v45; // edi
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
  int v74; // [esp+54h] [ebp-24h] BYREF
  int v75; // [esp+58h] [ebp-20h] BYREF
  int v76; // [esp+5Ch] [ebp-1Ch]
  int v77; // [esp+60h] [ebp-18h] BYREF
  int v78; // [esp+64h] [ebp-14h]
  int v79; // [esp+68h] [ebp-10h]
  int v80; // [esp+6Ch] [ebp-Ch] BYREF
  int v81; // [esp+70h] [ebp-8h]
  int v82; // [esp+74h] [ebp-4h] BYREF

  v77 = unk_AA1090; /*0x47ca96*/
  v59 = unk_AA1090 + 1; /*0x47ca9a*/
  if ( unk_AA1090 == -1 ) /*0x47ca9e*/
    v59 = -1; /*0x47caa0*/
  v76 = dword_ABAD28; /*0x47caab*/
  v58 = dword_ABAD28 + 41; /*0x47cab2*/
  if ( dword_ABAD28 == -1 ) /*0x47cab6*/
    v58 = -1; /*0x47cab8*/
  v55 = unk_AA1134; /*0x47cac4*/
  v49 = unk_AA1134 + 15; /*0x47cacb*/
  if ( unk_AA1134 == -1 ) /*0x47cacf*/
    v49 = -1; /*0x47cad1*/
  v47 = unk_AA0E24; /*0x47cadc*/
  v50 = unk_AA0E24 + 15; /*0x47cae3*/
  if ( unk_AA0E24 == -1 ) /*0x47cae7*/
    v50 = -1; /*0x47cae9*/
  v52 = unk_AA0748; /*0x47caf4*/
  v51 = unk_AA0748 + 15; /*0x47cafb*/
  if ( unk_AA0748 == -1 ) /*0x47caff*/
    v51 = -1; /*0x47cb01*/
  v54 = unk_AA10A8; /*0x47cb0c*/
  v53 = unk_AA10A8 + 15; /*0x47cb13*/
  if ( unk_AA10A8 == -1 ) /*0x47cb17*/
    v53 = -1; /*0x47cb19*/
  v78 = unk_AA10A4; /*0x47cb29*/
  v61 = unk_AA10A4 + 13; /*0x47cb2d*/
  if ( unk_AA10A4 == -1 ) /*0x47cb31*/
    v61 = -1; /*0x47cb33*/
  v80 = g_CellTileTypeCache; /*0x47cb43*/
  v63 = g_CellTileTypeCache + 20; /*0x47cb47*/
  if ( g_CellTileTypeCache == -1 ) /*0x47cb4b*/
    v63 = -1; /*0x47cb4d*/
  v79 = unk_AA0E20; /*0x47cb5d*/
  v62 = unk_AA0E20 + 13; /*0x47cb61*/
  if ( unk_AA0E20 == -1 ) /*0x47cb65*/
    v62 = -1; /*0x47cb67*/
  v48 = unk_AA1058; /*0x47cb72*/
  v65 = unk_AA1058 + 11; /*0x47cb79*/
  if ( unk_AA1058 == -1 ) /*0x47cb7d*/
    v65 = -1; /*0x47cb7f*/
  v73 = g_CellTileLookup; /*0x47cb8a*/
  v64 = g_CellTileLookup + 19; /*0x47cb91*/
  if ( g_CellTileLookup == -1 ) /*0x47cb95*/
    v64 = -1; /*0x47cb97*/
  v2 = dword_ABC2B8; /*0x47cb9e*/
  v81 = *(_DWORD *)(this + 56); /*0x47cba6*/
  if ( v81 == dword_ABC2B8 || v81 >= unk_AA1134 && v81 <= v49 ) /*0x47cbb8*/
  {
    v3 = 0; /*0x47cbbe*/
    v4 = 0; /*0x47cbc0*/
    for ( i = 0; i < 4; ++i ) /*0x47cbc2*/
    {
      if ( v4 < 8 ) /*0x47cbc7*/
      {
        v74 = *(_DWORD *)(this + 36); /*0x47cbd5*/
        v75 = *CellStruct::Add(&v74, &v82, (_WORD *)(4 * (v4 & 7) + 9041544)); /*0x47cbf6*/
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75); /*0x47cbff*/
        v2 = dword_ABC2B8; /*0x47cc04*/
      }
      else
      {
        v6 = (_DWORD *)this; /*0x47cbc9*/
      }
      v7 = v6[14]; /*0x47cc0a*/
      if ( v7 != v2 && (v7 < v55 || v7 > v49) ) /*0x47cc1b*/
        v3 |= 1 << i; /*0x47cc26*/
      v4 = ((_BYTE)v4 + 2) & 7; /*0x47cc2b*/
    }
    if ( v3 ) /*0x47cc36*/
      *(_DWORD *)(this + 56) = v55 + v3; /*0x47cc3e*/
    else
      *(_DWORD *)(this + 56) = v2; /*0x47cc43*/
  }
  if ( v47 != -1 ) /*0x47cc4b*/
  {
    v8 = *(_DWORD *)(this + 56); /*0x47cc51*/
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
          v75 = *(_DWORD *)(this + 36); /*0x47cc89*/
          LOWORD(v56) = v75 + LOWORD(MEMORY[0x89F688][v14]); /*0x47cca8*/
          HIWORD(v56) = HIWORD(v75) + HIWORD(MEMORY[0x89F688][v14]); /*0x47ccb1*/
          v75 = v56; /*0x47ccba*/
          v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75); /*0x47ccc4*/
          v9 = dword_ABB104; /*0x47ccc9*/
        }
        else
        {
          v13 = (_DWORD *)this; /*0x47cc7d*/
        }
        v15 = v13[14]; /*0x47cccf*/
        if ( v15 != v9 && (v15 < v47 || v15 > v50) ) /*0x47cce0*/
          v10 |= 1 << j; /*0x47cceb*/
        v11 = ((_BYTE)v11 + 2) & 7; /*0x47ccf0*/
      }
      if ( v10 ) /*0x47ccff*/
        *(_DWORD *)(this + 56) = v47 + v10; /*0x47cd07*/
      else
        *(_DWORD *)(this + 56) = v9; /*0x47cd0c*/
    }
  }
  if ( v52 != -1 ) /*0x47cd16*/
  {
    v16 = *(_DWORD *)(this + 56); /*0x47cd1c*/
    v17 = unk_AA0E18; /*0x47cd1f*/
    if ( v16 == unk_AA0E18 || v16 >= v52 && v16 <= v51 ) /*0x47cd35*/
    {
      v18 = 0; /*0x47cd3b*/
      v19 = 0; /*0x47cd3d*/
      for ( k = 0; k < 4; ++k ) /*0x47cd3f*/
      {
        if ( v19 < 8 ) /*0x47cd44*/
        {
          v22 = v19 & 7; /*0x47cd4f*/
          v75 = *(_DWORD *)(this + 36); /*0x47cd52*/
          LOWORD(v57) = v75 + LOWORD(MEMORY[0x89F688][v22]); /*0x47cd71*/
          HIWORD(v57) = HIWORD(v75) + HIWORD(MEMORY[0x89F688][v22]); /*0x47cd7a*/
          v75 = v57; /*0x47cd83*/
          v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75); /*0x47cd8d*/
          v17 = unk_AA0E18; /*0x47cd92*/
        }
        else
        {
          v21 = (_DWORD *)this; /*0x47cd46*/
        }
        v23 = v21[14]; /*0x47cd98*/
        if ( v23 != v17 && (v23 < v52 || v23 > v51) && (v23 < v76 || v23 > v58) && (v23 < v77 || v23 > v59) ) /*0x47cdc1*/
          v18 |= 1 << k; /*0x47cdcc*/
        v19 = ((_BYTE)v19 + 2) & 7; /*0x47cdd1*/
      }
      if ( v18 ) /*0x47cde0*/
        *(_DWORD *)(this + 56) = v52 + v18; /*0x47cde8*/
      else
        *(_DWORD *)(this + 56) = v17; /*0x47cded*/
    }
  }
  if ( v54 != -1 ) /*0x47cdf7*/
  {
    v24 = *(_DWORD *)(this + 56); /*0x47cdfd*/
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
          v77 = *(_DWORD *)(this + 36); /*0x47ce33*/
          LOWORD(v60) = v77 + LOWORD(MEMORY[0x89F688][v30]); /*0x47ce52*/
          HIWORD(v60) = HIWORD(v77) + HIWORD(MEMORY[0x89F688][v30]); /*0x47ce5b*/
          v77 = v60; /*0x47ce64*/
          v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v77); /*0x47ce6e*/
          v25 = dword_ABC2B0; /*0x47ce73*/
        }
        else
        {
          v29 = (_DWORD *)this; /*0x47ce27*/
        }
        v31 = v29[14]; /*0x47ce79*/
        if ( v31 != v25 /*0x47ceae*/
          && (v31 < v54 || v31 > v53)
          && (v31 < v78 || v31 > v61)
          && (v31 < v79 || v31 > v62)
          && (v31 < v80 || v31 > v63) )
        {
          v26 |= 1 << m; /*0x47ceb9*/
        }
        v27 = ((_BYTE)v27 + 2) & 7; /*0x47cebe*/
      }
      if ( v26 ) /*0x47cecd*/
        *(_DWORD *)(this + 56) = v54 + v26; /*0x47ced5*/
      else
        *(_DWORD *)(this + 56) = v25; /*0x47ceda*/
    }
  }
  v32 = *(_DWORD *)(this + 56); /*0x47cedd*/
  if ( v32 >= v73 && v32 <= v64 || v32 >= v48 && v32 <= v65 ) /*0x47cefc*/
  {
    v33 = 0; /*0x47cf08*/
    if ( *(_BYTE *)(this + 284) == 1 ) /*0x47cf0c*/
    {
      v34 = *(_DWORD *)(this + 36); /*0x47cf12*/
      LOWORD(v66) = MEMORY[0x89F6A0] + v34; /*0x47cf21*/
      HIWORD(v66) = HIWORD(MEMORY[0x89F6A0]) + HIWORD(v34); /*0x47cf37*/
      v80 = v66; /*0x47cf40*/
      v33 = *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) == 0; /*0x47cf58*/
      v35 = *(_DWORD *)(this + 36); /*0x47cf5d*/
      LOWORD(v66) = MEMORY[0x89F690] + v35; /*0x47cf7c*/
      HIWORD(v66) = HIWORD(MEMORY[0x89F690]) + HIWORD(v35); /*0x47cf81*/
      v80 = v66; /*0x47cf90*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47cf99*/
        v33 |= 2u; /*0x47cfa3*/
      v36 = v48; /*0x47cfa6*/
      if ( v33 ) /*0x47cfac*/
        *(_DWORD *)(this + 56) = v33 + v48 - 1; /*0x47cfb2*/
    }
    else
    {
      v36 = v48; /*0x47cfb7*/
    }
    if ( *(_BYTE *)(this + 284) == 2 ) /*0x47cfc2*/
    {
      v37 = *(_DWORD *)(this + 36); /*0x47cfc8*/
      LOWORD(v67) = LOWORD(MEMORY[0x89F688][0]) + v37; /*0x47cfe7*/
      HIWORD(v67) = HIWORD(MEMORY[0x89F688][0]) + HIWORD(v37); /*0x47cfec*/
      v80 = v67; /*0x47cffb*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d004*/
        v33 |= 1u; /*0x47d00e*/
      v38 = *(_DWORD *)(this + 36); /*0x47d011*/
      LOWORD(v68) = v38 + MEMORY[0x89F698]; /*0x47d026*/
      HIWORD(v68) = HIWORD(v38) + HIWORD(MEMORY[0x89F698]); /*0x47d035*/
      v80 = v68; /*0x47d03e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d04c*/
        v33 |= 2u; /*0x47d056*/
      if ( v33 ) /*0x47d05b*/
        *(_DWORD *)(this + 56) = v33 + v36 + 2; /*0x47d061*/
    }
    if ( *(_BYTE *)(this + 284) == 3 ) /*0x47d06b*/
    {
      v39 = *(_DWORD *)(this + 36); /*0x47d071*/
      LOWORD(v69) = MEMORY[0x89F690] + v39; /*0x47d090*/
      HIWORD(v69) = HIWORD(MEMORY[0x89F690]) + HIWORD(v39); /*0x47d095*/
      v80 = v69; /*0x47d0a4*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d0ad*/
        v33 |= 1u; /*0x47d0b7*/
      v40 = *(_DWORD *)(this + 36); /*0x47d0ba*/
      LOWORD(v70) = MEMORY[0x89F6A0] + v40; /*0x47d0c9*/
      HIWORD(v70) = HIWORD(MEMORY[0x89F6A0]) + HIWORD(v40); /*0x47d0df*/
      v80 = v70; /*0x47d0e8*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d0f6*/
        v33 |= 2u; /*0x47d100*/
      if ( v33 ) /*0x47d105*/
        *(_DWORD *)(this + 56) = v33 + v36 + 5; /*0x47d10b*/
    }
    if ( *(_BYTE *)(this + 284) == 4 ) /*0x47d115*/
    {
      v41 = *(_DWORD *)(this + 36); /*0x47d11b*/
      LOWORD(v71) = v41 + MEMORY[0x89F698]; /*0x47d136*/
      HIWORD(v71) = HIWORD(v41) + HIWORD(MEMORY[0x89F698]); /*0x47d13f*/
      v80 = v71; /*0x47d14e*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d157*/
        v33 |= 1u; /*0x47d161*/
      v42 = *(_DWORD *)(this + 36); /*0x47d164*/
      LOWORD(v72) = LOWORD(MEMORY[0x89F688][0]) + v42; /*0x47d173*/
      HIWORD(v72) = HIWORD(MEMORY[0x89F688][0]) + HIWORD(v42); /*0x47d189*/
      v80 = v72; /*0x47d192*/
      if ( !*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 284) ) /*0x47d1a0*/
        v33 |= 2u; /*0x47d1aa*/
      if ( !v33 ) /*0x47d1af*/
        goto LABEL_128; /*0x47d1af*/
      *(_DWORD *)(this + 56) = v33 + v36 + 8; /*0x47d1b5*/
    }
    if ( !v33 ) /*0x47d1ba*/
LABEL_128:
      *(_DWORD *)(this + 56) = *(unsigned __int8 *)(this + 284) + v73 - 1; /*0x47d1bc*/
  }
  v43 = *(_DWORD *)(this + 56); /*0x47d1cf*/
  v44 = v81; /*0x47d1d2*/
  if ( v81 != v43 ) /*0x47d1d8*/
  {
    v45 = *((_DWORD *)MEMORY[0xA8ED2C] + v43); /*0x47d1e0*/
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v45 + 156))(v45) ) /*0x47d1e7*/
      CellClass::EnsureFileLoaded(v45); /*0x47d1f3*/
  }
  return v44 != *(_DWORD *)(this + 56); /*0x47d1fd*/
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
    result = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * result]; /*0x47d227*/
    if ( *(_BYTE *)(result + 680) ) /*0x47d22a*/
    {
      result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x47d234*/
      v2 = -1; /*0x47d23b*/
      v3 = 0; /*0x47d23e*/
      for ( i = 0x7FFFFFFF; v3 < *(int *)&MEMORY[0xA8D63C].__pad_14B0[100]; ++v3 ) /*0x47d248*/
      {
        v5 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * v3); /*0x47d251*/
        if ( v5->isAliveFlag && v5->isOnMap && *(_BYTE *)(*(_DWORD *)(v5[3].nextArrayIndex + 52) + 423) ) /*0x47d26e*/
        {
          v6 = ObjectClass::DistanceTo(v5, (AbstractClass *)a1); /*0x47d27b*/
          if ( v6 < i ) /*0x47d282*/
          {
            i = v6; /*0x47d284*/
            v2 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 56))(v5); /*0x47d28d*/
          }
        }
        result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x47d28f*/
        a1 = v7; /*0x47d294*/
      }
      *(_DWORD *)(a1 + 80) = v2; /*0x47d29e*/
    }
  }
  return result; /*0x47d2a5*/
}


// ==== 0x0047D2B0  House::AnnounceUpgrade  this=IUnknown  sig=csp ====
void __thiscall House::AnnounceUpgrade(int this, IUnknown *aP1)
{
  IUnknown *v3; // edi
  _BYTE *v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  int v16; // ecx
  int v17; // ecx
  int v18; // ebp
  bool MapFileData; // al
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // cx
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  _BYTE *v26; // eax
  int v27; // ecx
  __int16 v28; // ax
  int v29; // eax
  CCINIClass *v30; // ecx
  TubeClass *v31; // ebx
  AbstractClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _DWORD *v36; // eax
  int v37; // edx
  int ecx67; // ecx
  AnimClass *v38; // eax
  void **v40; // eax
  AnimClass *v41; // eax
  int v42; // ecx
  IUnknown **inited; // ebx
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
  IUnknown *v55; // [esp+10h] [ebp-38h] BYREF
  int v56; // [esp+14h] [ebp-34h]
  _BYTE *v57; // [esp+18h] [ebp-30h]
  int var2C; // [esp+1Ch] [ebp-2Ch] BYREF
  Tactical *v58; // [esp+20h] [ebp-28h] BYREF
  CoordStruct aP2; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (_DWORD *)this == g_CellClassArray ) /*0x47d2bf*/
    return; /*0x47d2bf*/
  v3 = (IUnknown *)(this + 36); /*0x47d2c5*/
  v4 = (_BYTE *)(MEMORY[0x87F850] + 4 * CellToTileIndexMap((int *)&MEMORY[0x87F7E8], (IUnknown *)(this + 36))); /*0x47d2da*/
  v57 = v4; /*0x47d2e2*/
  v5 = MEMORY[0x87F858] + 10 * CellToTileIndexMap((int *)&MEMORY[0x87F7E8], (IUnknown *)(this + 36)); /*0x47d2f3*/
  v6 = *(_DWORD *)(this + 68); /*0x47d2f6*/
  v56 = v5; /*0x47d2fc*/
  if ( v6 != -1 ) /*0x47d300*/
  {
    v7 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v6]; /*0x47d30c*/
    v8 = *(_DWORD *)(v7 + 664); /*0x47d30f*/
    *(_DWORD *)(this + 236) = v8; /*0x47d318*/
    if ( v8 == 4 || v8 == 9 || *(_BYTE *)(v7 + 684) ) /*0x47d325*/
    {
      v9 = *(_DWORD *)(this + 56); /*0x47d333*/
      if ( v9 != 0xFFFF && v9 < *(int *)&MEMORY[0xA8D63C].__pad_14B0[588] ) /*0x47d343*/
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex( /*0x47d35e*/
                                   *(void **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v9),
                                   *(unsigned __int8 *)(this + 282));
      if ( *(_BYTE *)(this + 284) && *(_BYTE *)(v7 + 681) ) /*0x47d36e*/
      {
        *(_DWORD *)(this + 68) = -1; /*0x47d378*/
        *(_BYTE *)(this + 286) = 0; /*0x47d37f*/
      }
      if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) ) /*0x47d38b*/
      {
        v10 = *(_WORD *)(this + 38); /*0x47d39c*/
        LOWORD(aP1) = v3->field_0; /*0x47d3a0*/
        HIWORD(aP1) = v10 - 1; /*0x47d3ab*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d3d6*/
          goto LABEL_19; /*0x47d3d6*/
        v11 = LOWORD(v3->field_0) - 1; /*0x47d3e3*/
        HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47d3e5*/
        LOWORD(aP1) = v11; /*0x47d3ea*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d419*/
          goto LABEL_19; /*0x47d419*/
        v12 = *(_WORD *)(this + 38) + 2; /*0x47d42a*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47d42e*/
        HIWORD(aP1) = v12; /*0x47d437*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d462*/
          goto LABEL_19; /*0x47d462*/
        v13 = *(_WORD *)(this + 38) + 1; /*0x47d471*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47d473*/
        HIWORD(aP1) = v13; /*0x47d47c*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) /*0x47d52d*/
          || (v14 = *(_WORD *)(this + 38) + 1,
              LOWORD(aP1) = LOWORD(v3->field_0) - 1,
              HIWORD(aP1) = v14,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283))
          || (v15 = *(_WORD *)(this + 38) - 1,
              LOWORD(aP1) = LOWORD(v3->field_0) + 1,
              HIWORD(aP1) = v15,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)) )
        {
LABEL_19:
          if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) == 2 ) /*0x47d53c*/
            *(_DWORD *)(this + 236) = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType(this); /*0x47d54a*/
      BuildingClass::DetermineVisualState(this); /*0x47d551*/
      v16 = v56; /*0x47d55c*/
      v4[1] = *(_BYTE *)(this + 283); /*0x47d560*/
      *(_BYTE *)(v16 + 8) = *(_BYTE *)(this + 283); /*0x47d569*/
      *v4 = *(_BYTE *)(this + 76); /*0x47d571*/
      return; /*0x47d578*/
    }
  }
  if ( *(_DWORD *)(this + 56) >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[588] ) /*0x47d58b*/
    *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d58d*/
  v17 = *(_DWORD *)(this + 56); /*0x47d590*/
  if ( v17 != 0xFFFF ) /*0x47d595*/
  {
    v18 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v17); /*0x47d5ab*/
    v54 = *(unsigned __int8 *)(this + 282); /*0x47d5ae*/
    v55 = (IUnknown *)v18; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((_DWORD *)v18, v54, 0); /*0x47d5b5*/
    if ( *(_BYTE *)(this + 284) ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
LABEL_40:
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d7fb*/
        CellClass::DetermineTileType(this); /*0x47d813*/
        v27 = *(_DWORD *)(this + 68); /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( *(_BYTE *)(this + 284) <= 4u ) /*0x47d831*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *(_DWORD *)(this + 68)] + 664) ) /*0x47d864*/
              *(_DWORD *)(this + 236) = 5; /*0x47d86e*/
          }
          else
          {
            *(_DWORD *)(this + 236) = House::LookupObject((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d843*/
            *(_DWORD *)(this + 68) = -1; /*0x47d849*/
            *(_BYTE *)(this + 286) = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *(_DWORD *)(this + 68)] + 684) ) /*0x47d885*/
LABEL_47:
          *(_DWORD *)(this + 236) = House::LookupObject((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d8aa*/
LABEL_48:
        if ( *(_DWORD *)(this + 236) == 10 ) /*0x47d8b7*/
        {
          v28 = *(_WORD *)(this + 278); /*0x47d8bd*/
          if ( v28 < 0 || v28 >= *(int *)&MEMORY[0x89F690].__pad_579C[62236] ) /*0x47d8d2*/
          {
            if ( (v29 = *(_DWORD *)(this + 56), /*0x47d919*/
                  v30 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[57980],
                  v29 >= *(int *)&MEMORY[0xA8D63C].__pad_579C[57980])
              && v29 <= *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57980] + 3
              || (v30 = dword_ABB108, v29 >= (int)dword_ABB108) && v29 <= (int)&dword_ABB108->__pad_0[3]
              || (v30 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[58076],
                  v29 >= *(int *)&MEMORY[0xA8D63C].__pad_579C[58076])
              && v29 <= *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58076] + 3
              || (v30 = dword_ABAD2C, v29 >= (int)dword_ABAD2C) && v29 <= (int)&dword_ABAD2C->__pad_0[3] )
            {
              v31 = (TubeClass *)(v29 - (_DWORD)v30); /*0x47d91d*/
              if ( v29 - (_DWORD)v30 != -1 ) /*0x47d922*/
              {
                v32 = (AbstractClass *)__2_YAPAXI_Z(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  TubeClass::Construct(v32, (__int16 *)(this + 36), dword_81CC20[(_DWORD)v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( aP1 != (IUnknown *)-1 ) /*0x47d94c*/
          *(_BYTE *)(this + 283) = (_BYTE)aP1; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((void *)v18, *(unsigned __int8 *)(this + 282), &v58, &var2C); /*0x47d969*/
        v33 = *(_DWORD *)(this + 320); /*0x47d988*/
        *(_BYTE *)(this + 285) = (var2C - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(_DWORD *)(v18 + 712) != -1
          && *(_DWORD *)(v18 + 724) == *(unsigned __int8 *)(this + 282) )
        {
          v34 = SLOWORD(v3->field_0); /*0x47d9d0*/
          v35 = *(__int16 *)(this + 38); /*0x47d9d3*/
          v61 = MEMORY[0x89E7C0] * *(char *)(this + 283); /*0x47d9e1*/
          v36 = Matrix3x4::TransformCell( /*0x47da03*/
                  *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                  (AbstractClass *)v62,
                  (AbstractClass *)&v55->__pad_2B8[20]);
          v37 = v36[1]; /*0x47da0a*/
          ecx67 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v38 = (AnimClass *)(v61 + v36[2]); /*0x47da18*/
          aP2.X = ecx67; /*0x47da1f*/
          aP2.Y = (v35 << 8) + 128 + v37; /*0x47da23*/
          aP2.Z = (int)v38; /*0x47da27*/
          v40 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(CoordStruct **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4
                                                                                     * *(_DWORD *)&v55->__pad_2B8[16]),
                    &aP2,
                    0,
                    (CoordStruct *)0xFFFFFFFF,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v18 = (int)v55; /*0x47da6c*/
          v42 = *(_DWORD *)&v55->__pad_2B8[32]; /*0x47da6e*/
          v41->__pad_194[2] = 1; /*0x47da74*/
          v41->field_100 = v42; /*0x47da7b*/
          v41->__pad_194[3] = 1; /*0x47da81*/
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x47da88*/
        }
        if ( *(_BYTE *)(v18 + 737) ) /*0x47da92*/
        {
          inited = (IUnknown **)InitCoordinateOffsetsMap(v18); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*(_WORD *)inited != 0x7FFF || *((_WORD *)inited + 1) != 0x7FFF) && *inited != MEMORY[0x89E748] ) /*0x47dacf*/
            {
              LOWORD(aP1) = LOWORD(v3->field_0) + *(_WORD *)inited; /*0x47dae6*/
              HIWORD(aP1) = *((_WORD *)inited + 1) + *(_WORD *)(this + 38); /*0x47daf3*/
              v55 = aP1; /*0x47dafc*/
              v44 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v55); /*0x47db05*/
              ++inited; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((_DWORD *)v18, *(unsigned __int8 *)(this + 282), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d5e6*/
      *(_BYTE *)(this + 282) = 0; /*0x47d5e9*/
      *(_DWORD *)(this + 236) = 0; /*0x47d5ef*/
      *(_BYTE *)(this + 284) = 0; /*0x47d5f9*/
      if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) ) /*0x47d605*/
      {
        v20 = *(_WORD *)(this + 38) - 1; /*0x47d61a*/
        LOWORD(aP1) = v3->field_0; /*0x47d61c*/
        HIWORD(aP1) = v20; /*0x47d621*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d650*/
          goto LABEL_98; /*0x47d650*/
        v21 = LOWORD(v3->field_0) - 1; /*0x47d65d*/
        HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47d65f*/
        LOWORD(aP1) = v21; /*0x47d664*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d693*/
          goto LABEL_98; /*0x47d693*/
        v22 = *(_WORD *)(this + 38); /*0x47d69c*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47d6a8*/
        HIWORD(aP1) = v22 + 2; /*0x47d6ad*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47d6dc*/
          goto LABEL_98; /*0x47d6dc*/
        v23 = *(_WORD *)(this + 38) + 1; /*0x47d6eb*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47d6ed*/
        HIWORD(aP1) = v23; /*0x47d6f2*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) /*0x47d7a7*/
          || (v24 = *(_WORD *)(this + 38) + 1,
              LOWORD(aP1) = LOWORD(v3->field_0) - 1,
              HIWORD(aP1) = v24,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283))
          || (v25 = *(_WORD *)(this + 38) - 1,
              LOWORD(aP1) = LOWORD(v3->field_0) + 1,
              HIWORD(aP1) = v25,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)) )
        {
LABEL_98:
          if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) == 2 && !*(_DWORD *)(this + 236) ) /*0x47d7b7*/
            *(_DWORD *)(this + 236) = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState(this); /*0x47d7cd*/
      v26 = v57; /*0x47d7d2*/
      v57[1] = *(_BYTE *)(this + 283); /*0x47d7dd*/
      *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47d7ea*/
      *v26 = *(_BYTE *)(this + 76); /*0x47d7f2*/
      return; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v6 == -1 || (v45 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v6], *(_BYTE *)(v45 + 684)) ) /*0x47db30*/
    *(_DWORD *)(this + 236) = 0; /*0x47db48*/
  else
    *(_DWORD *)(this + 236) = *(_DWORD *)(v45 + 664); /*0x47db40*/
  *(_BYTE *)(this + 284) = 0; /*0x47db52*/
LABEL_82:
  if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) ) /*0x47db5e*/
  {
    v46 = *(_WORD *)(this + 38); /*0x47db6f*/
    LOWORD(aP1) = v3->field_0; /*0x47db73*/
    HIWORD(aP1) = v46 - 1; /*0x47db7e*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47dba9*/
      goto LABEL_89; /*0x47dba9*/
    v47 = LOWORD(v3->field_0) - 1; /*0x47dbb6*/
    HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47dbb8*/
    LOWORD(aP1) = v47; /*0x47dbbd*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47dbec*/
      goto LABEL_89; /*0x47dbec*/
    v48 = *(_WORD *)(this + 38) + 2; /*0x47dbfd*/
    LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47dc01*/
    HIWORD(aP1) = v48; /*0x47dc0a*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) ) /*0x47dc35*/
      goto LABEL_89; /*0x47dc35*/
    v49 = *(_WORD *)(this + 38) + 1; /*0x47dc44*/
    LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47dc46*/
    HIWORD(aP1) = v49; /*0x47dc4f*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) /*0x47dd00*/
      || (v50 = *(_WORD *)(this + 38) + 1,
          LOWORD(aP1) = LOWORD(v3->field_0) - 1,
          HIWORD(aP1) = v50,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283))
      || (v51 = *(_WORD *)(this + 38) - 1,
          LOWORD(aP1) = LOWORD(v3->field_0) + 1,
          HIWORD(aP1) = v51,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)) )
    {
LABEL_89:
      if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) == 2 ) /*0x47dd0f*/
      {
        v52 = *(_DWORD *)(this + 236); /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          *(_DWORD *)(this + 236) = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState(this); /*0x47dd36*/
  v53 = v57; /*0x47dd3b*/
  v57[1] = *(_BYTE *)(this + 283); /*0x47dd45*/
  *v53 = *(_BYTE *)(this + 76); /*0x47dd4b*/
  *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47dd57*/
}


// ==== 0x0047DD70  CellClass::UpdateAnimations  this=CellClass  sig=csp ====
void __thiscall CellClass_UpdateAnimations(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void **v11; // esi
  int v12; // eax
  void **v13; // edi
  void *v14; // esi
  int v15; // eax
  int v16; // [esp+28h] [ebp-Ch] BYREF
  int v17; // [esp+2Ch] [ebp-8h]
  int v18; // [esp+30h] [ebp-4h]

  if ( !MEMORY[0xA8ED6B] ) /*0x47dd7e*/
  {
    v2 = *(_DWORD **)(this + 228); /*0x47dd84*/
    if ( v2 ) /*0x47dd8c*/
    {
      do /*0x47ddb8*/
      {
        v3 = (_DWORD *)v2[12]; /*0x47dd96*/
        (*(void (__stdcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v2 + 364))( /*0x47ddae*/
          v2 + 27,
          0,
          *((_DWORD *)MEMORY[0x8871E0] + 1002),
          0,
          1,
          1,
          0);
        v2 = v3; /*0x47ddb6*/
      }
      while ( v3 ); /*0x47ddb8*/
    }
    v4 = *(_DWORD **)(this + 232); /*0x47ddba*/
    if ( v4 ) /*0x47ddc2*/
    {
      do /*0x47ddd3*/
      {
        v5 = (_DWORD *)v4[12]; /*0x47ddc6*/
        (*(void (__thiscall **)(_DWORD *))(*v4 + 236))(v4); /*0x47ddc9*/
        v4 = v5; /*0x47ddd1*/
      }
      while ( v5 ); /*0x47ddd3*/
    }
    if ( MEMORY[0x87F8CC] < MEMORY[0x87F8C4] /*0x47de0c*/
      || (MEMORY[0x87F8C9] || !MEMORY[0x87F8C4])
      && MEMORY[0x87F8D0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x87F8BC] + 8))(
           &MEMORY[0x87F8BC],
           MEMORY[0x87F8C4] + MEMORY[0x87F8D0],
           0) )
    {
      v6 = MEMORY[0x87F8CC]++; /*0x47de1f*/
      *(_DWORD *)(MEMORY[0x87F8C0] + 4 * v6) = *(_DWORD *)(this + 36); /*0x47de2b*/
    }
    if ( *((int *)MEMORY[0x8871E0] + 90) > 0 /*0x47de72*/
      && (double)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646) * 4.656612877414201e-10 < 0.95 )
    {
      v7 = MEMORY[0x89E7C0] * *(char *)(this + 283); /*0x47de83*/
      v8 = *(__int16 *)(this + 38); /*0x47de8a*/
      v16 = (*(__int16 *)(this + 36) << 8) + 128; /*0x47de9c*/
      v18 = MEMORY[0x89E7B4] + v7; /*0x47deb6*/
      v17 = (v8 << 8) + 128; /*0x47dec2*/
      v9 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646); /*0x47dec6*/
      v16 = Math::RoundToInt(((double)v9 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v16); /*0x47deee*/
      v10 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646); /*0x47df04*/
      v17 = Math::RoundToInt(((double)v10 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v17); /*0x47df3f*/
      if ( (double)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646) * 4.656612877414201e-10 < 0.5 ) /*0x47df61*/
      {
        v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x47df6d*/
        if ( v11 ) /*0x47df74*/
        {
          v12 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, *((_DWORD *)MEMORY[0x8871E0] + 83) - 1); /*0x47df91*/
          AnimClass::ctor( /*0x47dfba*/
            v11,
            *(void **)(*((_DWORD *)MEMORY[0x8871E0] + 80) + 4 * v12),
            (int)&v16,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
      }
      v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x47dfc9*/
      if ( v13 ) /*0x47dfd0*/
      {
        v14 = (void *)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 1, 5); /*0x47dff2*/
        v15 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, *((_DWORD *)MEMORY[0x8871E0] + 90) - 1); /*0x47e004*/
        AnimClass::ctor( /*0x47e02c*/
          v13,
          *(void **)(*((_DWORD *)MEMORY[0x8871E0] + 87) + 4 * v15),
          (int)&v16,
          v14,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
  }
}


// ==== 0x0047E040  UpdateCellClassNeighborTerrain  this=CellStruct  sig=csp ====
char __fastcall CellClass_UpdateNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
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
  _DWORD *v25; // eax
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
  _DWORD *v36; // eax
  int v37; // edx
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+18h] [ebp-20h]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int v44; // [esp+1Ch] [ebp-1Ch]
  int *v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+24h] [ebp-14h]
  int v48; // [esp+28h] [ebp-10h]
  int v49; // [esp+2Ch] [ebp-Ch] BYREF
  int v50; // [esp+30h] [ebp-8h] BYREF
  int v51; // [esp+34h] [ebp-4h] BYREF

  v4 = (_DWORD *)a1; /*0x47e04a*/
  if ( a3 ) /*0x47e053*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e05e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e055*/
  v5 = a4; /*0x47e065*/
  v6 = a4 & 1; /*0x47e06b*/
  v41 = v6 << 9; /*0x47e079*/
  v7 = v6 << 12; /*0x47e082*/
  v8 = v6 << 16; /*0x47e085*/
  v40 = v6 << 8; /*0x47e090*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e097*/
  v39 = (a3 == 0) << 11; /*0x47e0af*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e0bf*/
  BYTE1(v9) &= ~2u; /*0x47e0c5*/
  v10 = (v6 << 9) | v9; /*0x47e0c8*/
  BYTE1(v10) &= ~0x10u; /*0x47e0ce*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e0d9*/
  BYTE1(v11) &= ~4u; /*0x47e0db*/
  v12 = a4 | v11; /*0x47e0de*/
  BYTE1(v12) &= ~8u; /*0x47e0e4*/
  *(_DWORD *)(a1 + 320) = v39 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e0f0*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e10d*/
    CellClass::UpdateAnimations(a1); /*0x47e114*/
  }
  v46 = v4 + 9; /*0x47e122*/
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e126*/
  if ( a3 < 8 ) /*0x47e132*/
  {
    LOWORD(v42) = *v46 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e157*/
    HIWORD(v42) = HIWORD(*v46) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e166*/
    v49 = v42; /*0x47e16f*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x47e17d*/
  }
  v13 = v4[80]; /*0x47e18f*/
  BYTE1(v13) &= ~1u; /*0x47e195*/
  v48 = v5 != 0 ? a1 : 0;
  v14 = v40 | v13; /*0x47e19c*/
  BYTE1(v14) &= ~2u; /*0x47e1a2*/
  v4[11] = v48; /*0x47e1a5*/
  v15 = v41 | v14; /*0x47e1a8*/
  BYTE1(v15) &= ~0x10u; /*0x47e1ae*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e1b9*/
  BYTE1(v16) &= ~4u; /*0x47e1bb*/
  v17 = a4 | v16; /*0x47e1be*/
  BYTE1(v17) &= ~8u; /*0x47e1c4*/
  v4[80] = v39 | v17; /*0x47e1cb*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e1e8*/
    CellClass::UpdateAnimations((int)v4); /*0x47e1ef*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e201*/
  v18 = a3; /*0x47e206*/
  if ( a3 < 8 ) /*0x47e20d*/
  {
    v19 = MEMORY[0x89F688][a3 & 7]; /*0x47e218*/
    v50 = v4[9]; /*0x47e227*/
    LOWORD(v43) = v50 + v19; /*0x47e232*/
    HIWORD(v43) = HIWORD(v50) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e241*/
    v50 = v43; /*0x47e24a*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x47e258*/
    v18 = a3; /*0x47e25a*/
  }
  v20 = v4[80]; /*0x47e262*/
  v4[11] = v48; /*0x47e268*/
  BYTE1(v20) &= ~1u; /*0x47e26f*/
  v21 = v40 | v20; /*0x47e272*/
  BYTE1(v21) &= 0xEDu; /*0x47e278*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e283*/
  BYTE1(v22) &= ~4u; /*0x47e285*/
  v23 = a4 | v22; /*0x47e288*/
  BYTE1(v23) &= ~8u; /*0x47e28e*/
  v4[80] = v39 | v23; /*0x47e295*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = v18 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e2ae*/
    CellClass::UpdateAnimations((int)v4); /*0x47e2b5*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e2c7*/
  v24 = a3; /*0x47e2cc*/
  if ( a3 < 8 ) /*0x47e2d3*/
  {
    v51 = v4[9]; /*0x47e2e9*/
    LOWORD(v44) = v51 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e2fc*/
    HIWORD(v44) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e305*/
    v51 = v44; /*0x47e314*/
    v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e318*/
    v24 = a3; /*0x47e31d*/
  }
  else
  {
    v25 = v4; /*0x47e2d5*/
  }
  v26 = v25[80]; /*0x47e321*/
  BYTE1(v26) &= ~0x10u; /*0x47e327*/
  v25[80] = v7 | v26; /*0x47e32c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e335*/
  if ( v27 < 8 ) /*0x47e33b*/
  {
    v29 = MEMORY[0x89F688][v27]; /*0x47e34c*/
    v51 = *v46; /*0x47e35b*/
    LOWORD(v47) = v51 + v29; /*0x47e366*/
    HIWORD(v47) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][v27]); /*0x47e375*/
    v51 = v47; /*0x47e37e*/
    v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e387*/
    v24 = a3; /*0x47e38c*/
    v28 = (int)v30; /*0x47e390*/
  }
  else
  {
    v28 = a1; /*0x47e33d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e392*/
  BYTE1(v31) &= ~1u; /*0x47e39c*/
  v32 = v40 | v31; /*0x47e3a3*/
  BYTE1(v32) &= ~2u; /*0x47e3a9*/
  *(_DWORD *)(v28 + 44) = v48; /*0x47e3ac*/
  v33 = v41 | v32; /*0x47e3af*/
  BYTE1(v33) &= ~4u; /*0x47e3b5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e3c3*/
  BYTE1(v34) &= ~8u; /*0x47e3c5*/
  *(_DWORD *)(v28 + 320) = v39 | v34; /*0x47e3cc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e3e5*/
    CellClass::UpdateAnimations(v28); /*0x47e3ec*/
  }
  v35 = (int *)(v28 + 36); /*0x47e3f1*/
  LOBYTE(v36) = BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)v35); /*0x47e3fa*/
  if ( a3 == 6 ) /*0x47e404*/
  {
    a4 = *v35; /*0x47e40e*/
    LOWORD(a3) = MEMORY[0x89F690] + a4; /*0x47e424*/
    HIWORD(a3) = HIWORD(MEMORY[0x89F690]) + HIWORD(a4); /*0x47e429*/
    v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x47e43c*/
    v37 = v36[80]; /*0x47e441*/
    v36[11] = v48; /*0x47e447*/
    v36[80] = v8 | v37 & 0xFFFEFFFF; /*0x47e452*/
  }
  return (char)v36; /*0x47e458*/
}


// ==== 0x0047E470  SetCellClassOccupancyFlags  this=CellStruct  sig=csp ====
char __fastcall CellClass_SetOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
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
  _DWORD *v25; // eax
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
  _DWORD *v36; // eax
  int v37; // edx
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+18h] [ebp-20h]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int v44; // [esp+1Ch] [ebp-1Ch]
  int *v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+24h] [ebp-14h]
  int v48; // [esp+28h] [ebp-10h]
  int v49; // [esp+2Ch] [ebp-Ch] BYREF
  int v50; // [esp+30h] [ebp-8h] BYREF
  int v51; // [esp+34h] [ebp-4h] BYREF

  v4 = (_DWORD *)a1; /*0x47e47a*/
  if ( a3 ) /*0x47e483*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e48e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e485*/
  v5 = a4; /*0x47e495*/
  v6 = a4 & 1; /*0x47e49b*/
  v41 = v6 << 9; /*0x47e4a9*/
  v7 = v6 << 12; /*0x47e4b2*/
  v8 = v6 << 16; /*0x47e4b5*/
  v40 = v6 << 8; /*0x47e4c0*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e4c7*/
  v39 = (a3 == 0) << 11; /*0x47e4df*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e4ef*/
  BYTE1(v9) &= ~2u; /*0x47e4f5*/
  v10 = (v6 << 9) | v9; /*0x47e4f8*/
  BYTE1(v10) &= ~0x10u; /*0x47e4fe*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e509*/
  BYTE1(v11) &= ~4u; /*0x47e50b*/
  v12 = a4 | v11; /*0x47e50e*/
  BYTE1(v12) &= ~8u; /*0x47e514*/
  *(_DWORD *)(a1 + 320) = v39 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e520*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e53d*/
    CellClass::UpdateAnimations(a1); /*0x47e544*/
  }
  v46 = v4 + 9; /*0x47e552*/
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e556*/
  if ( a3 < 8 ) /*0x47e562*/
  {
    LOWORD(v42) = *v46 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e587*/
    HIWORD(v42) = HIWORD(*v46) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e596*/
    v49 = v42; /*0x47e59f*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x47e5ad*/
  }
  v13 = v4[80]; /*0x47e5bf*/
  BYTE1(v13) &= ~1u; /*0x47e5c5*/
  v48 = v5 != 0 ? a1 : 0;
  v14 = v40 | v13; /*0x47e5cc*/
  BYTE1(v14) &= ~2u; /*0x47e5d2*/
  v4[11] = v48; /*0x47e5d5*/
  v15 = v41 | v14; /*0x47e5d8*/
  BYTE1(v15) &= ~0x10u; /*0x47e5de*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e5e9*/
  BYTE1(v16) &= ~4u; /*0x47e5eb*/
  v17 = a4 | v16; /*0x47e5ee*/
  BYTE1(v17) &= ~8u; /*0x47e5f4*/
  v4[80] = v39 | v17; /*0x47e5fb*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e618*/
    CellClass::UpdateAnimations((int)v4); /*0x47e61f*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e631*/
  v18 = a3; /*0x47e636*/
  if ( a3 < 8 ) /*0x47e63d*/
  {
    v19 = MEMORY[0x89F688][a3 & 7]; /*0x47e648*/
    v50 = v4[9]; /*0x47e657*/
    LOWORD(v43) = v50 + v19; /*0x47e662*/
    HIWORD(v43) = HIWORD(v50) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e671*/
    v50 = v43; /*0x47e67a*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x47e688*/
    v18 = a3; /*0x47e68a*/
  }
  v20 = v4[80]; /*0x47e692*/
  v4[11] = v48; /*0x47e698*/
  BYTE1(v20) &= ~1u; /*0x47e69f*/
  v21 = v40 | v20; /*0x47e6a2*/
  BYTE1(v21) &= 0xEDu; /*0x47e6a8*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e6b3*/
  BYTE1(v22) &= ~4u; /*0x47e6b5*/
  v23 = a4 | v22; /*0x47e6b8*/
  BYTE1(v23) &= ~8u; /*0x47e6be*/
  v4[80] = v39 | v23; /*0x47e6c5*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = v18 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e6de*/
    CellClass::UpdateAnimations((int)v4); /*0x47e6e5*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e6f7*/
  v24 = a3; /*0x47e6fc*/
  if ( a3 < 8 ) /*0x47e703*/
  {
    v51 = v4[9]; /*0x47e719*/
    LOWORD(v44) = v51 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e72c*/
    HIWORD(v44) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e735*/
    v51 = v44; /*0x47e744*/
    v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e748*/
    v24 = a3; /*0x47e74d*/
  }
  else
  {
    v25 = v4; /*0x47e705*/
  }
  v26 = v25[80]; /*0x47e751*/
  BYTE1(v26) &= ~0x10u; /*0x47e757*/
  v25[80] = v7 | v26; /*0x47e75c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e765*/
  if ( v27 < 8 ) /*0x47e76b*/
  {
    v29 = MEMORY[0x89F688][v27]; /*0x47e77c*/
    v51 = *v46; /*0x47e78b*/
    LOWORD(v47) = v51 + v29; /*0x47e796*/
    HIWORD(v47) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][v27]); /*0x47e7a5*/
    v51 = v47; /*0x47e7ae*/
    v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e7b7*/
    v24 = a3; /*0x47e7bc*/
    v28 = (int)v30; /*0x47e7c0*/
  }
  else
  {
    v28 = a1; /*0x47e76d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e7c2*/
  BYTE1(v31) &= ~1u; /*0x47e7cc*/
  v32 = v40 | v31; /*0x47e7d3*/
  BYTE1(v32) &= ~2u; /*0x47e7d9*/
  *(_DWORD *)(v28 + 44) = v48; /*0x47e7dc*/
  v33 = v41 | v32; /*0x47e7df*/
  BYTE1(v33) &= ~4u; /*0x47e7e5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e7f3*/
  BYTE1(v34) &= ~8u; /*0x47e7f5*/
  *(_DWORD *)(v28 + 320) = v39 | v34; /*0x47e7fc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e815*/
    CellClass::UpdateAnimations(v28); /*0x47e81c*/
  }
  v35 = (int *)(v28 + 36); /*0x47e821*/
  LOBYTE(v36) = BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)v35); /*0x47e82a*/
  if ( a3 == 6 ) /*0x47e834*/
  {
    a4 = *v35; /*0x47e83e*/
    LOWORD(a3) = MEMORY[0x89F690] + a4; /*0x47e854*/
    HIWORD(a3) = HIWORD(MEMORY[0x89F690]) + HIWORD(a4); /*0x47e859*/
    v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x47e86c*/
    v37 = v36[80]; /*0x47e871*/
    v36[11] = v48; /*0x47e877*/
    v36[80] = v8 | v37 & 0xFFFEFFFF; /*0x47e882*/
  }
  return (char)v36; /*0x47e888*/
}


// ==== 0x0047E8A0  CellClass::AddContent  this=AbstractClass  sig=csp ====
char __thiscall CellClass::AddContent(int this, _DWORD *a2, char a3)
{
  int v3; // eax
  AbstractClass *v5; // esi
  int i; // eax
  AbstractClass *inited; // eax
  AbstractClass *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  MouseClass *v15; // [esp+14h] [ebp-Ch] BYREF
  AbstractClass *v16; // [esp+18h] [ebp-8h]
  AbstractClass *v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+28h] [ebp+8h]
  int v19; // [esp+28h] [ebp+8h]

  LOBYTE(v3) = a3; /*0x47e8a0*/
  if ( a3 ) /*0x47e8ae*/
    v5 = *(AbstractClass **)(this + 232); /*0x47e8b0*/
  else
    v5 = *(AbstractClass **)(this + 228); /*0x47e8b8*/
  if ( a2 ) /*0x47e8c4*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 6 && v5 ) /*0x47e8d9*/
    {
      for ( i = *(_DWORD *)&v5[1].__pad_0[12]; i; i = *(_DWORD *)(i + 48) ) /*0x47e8e0*/
        v5 = (AbstractClass *)i; /*0x47e8e2*/
      *(_DWORD *)&v5[1].__pad_0[12] = a2; /*0x47e8eb*/
      a2[12] = 0; /*0x47e8ee*/
    }
    else if ( a3 ) /*0x47e8fd*/
    {
      if ( !v5 || *(_DWORD **)&v5[1].__pad_0[12] != a2 ) /*0x47e906*/
      {
        a2[12] = v5; /*0x47e908*/
        *(_DWORD *)(this + 232) = a2; /*0x47e90b*/
      }
    }
    else if ( !v5 || *(_DWORD **)&v5[1].__pad_0[12] != a2 ) /*0x47e91a*/
    {
      a2[12] = v5; /*0x47e91c*/
      *(_DWORD *)(this + 228) = a2; /*0x47e91f*/
    }
    v18 = *(_DWORD *)(this + 36); /*0x47e929*/
    v13 = 128; /*0x47e94b*/
    v14 = 128; /*0x47e94f*/
    inited = (AbstractClass *)Isometric::InitTables(this, (IUnknown *)&v13); /*0x47e953*/
    v15 = (MouseClass *)(((__int16)v18 << 8) + 128); /*0x47e962*/
    v16 = (AbstractClass *)((SHIWORD(v18) << 8) + 128); /*0x47e966*/
    v17 = inited; /*0x47e96a*/
    if ( !Cell::IsPassable(&v15) /*0x47e9cf*/
      && (v19 = *(_DWORD *)(this + 36),
          v13 = 128,
          v14 = 128,
          v8 = (AbstractClass *)Isometric::InitTables(this, (IUnknown *)&v13),
          v15 = (MouseClass *)(((__int16)v19 << 8) + 128),
          v16 = (AbstractClass *)((SHIWORD(v19) << 8) + 128),
          v17 = v8,
          !Game::Stub3((int)&v15))
      || MEMORY[0xA8B238] )
    {
      (*(void (__thiscall **)(_DWORD *, IUnknown *))(*a2 + 408))(a2, HouseClass_Player); /*0x47e9dc*/
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
          v15 = (MouseClass *)((v9 << 8) + 128); /*0x47ea2e*/
          v16 = (AbstractClass *)((v10 << 8) + 128); /*0x47ea3c*/
        }
        else
        {
          v15 = (MouseClass *)a2[39]; /*0x47ea5e*/
          v11 = *a2; /*0x47ea62*/
          v16 = (AbstractClass *)a2[40]; /*0x47ea68*/
          v17 = (AbstractClass *)a2[41]; /*0x47ea74*/
        }
        LOBYTE(v3) = (*(char (__thiscall **)(_DWORD *, MouseClass **))(v11 + 240))(a2, &v15); /*0x47ea43*/
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


// ==== 0x0047EBA0  CellClass::FindBuilding  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellClass_FindBuilding(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x47eba8*/
    return 0; /*0x47eba8*/
  v2 = (_DWORD *)(a2 ? this->q03A : this->q0E4);
  if ( !v2 ) /*0x47ebc2*/
    return 0; /*0x47ebd7*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 1 ) /*0x47ebce*/
  {
    v2 = (_DWORD *)v2[12]; /*0x47ebd0*/
    if ( !v2 ) /*0x47ebd5*/
      return 0; /*0x47ebd5*/
  }
  return v2; /*0x47ebd9*/
}


// ==== 0x0047EBF0  PlacementList::FindByType  this=IUnknown  sig=csp ====
_DWORD *__thiscall PlacementList_FindByType(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x47ebf8*/
    return 0; /*0x47ebf8*/
  v2 = (_DWORD *)(a2 ? this->q03A : this->q0E4);
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
_DWORD *__thiscall WTFMode_FindObjectByType(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x47ec48*/
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


// ==== 0x0047EC90  BuildingPlacement::RenderBuildingPlacementPreview  this=BuildingPlacement  sig=csp ====
char __thiscall BuildingPlacement::RenderBuildingPlacementPreview(
        int this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3)
{
  int v5; // eax
  IUnknown *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // edi
  int ClosestObjectCell; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  IUnknown *v18; // [esp-34h] [ebp-64h]
  IUnknown *v19; // [esp-2Ch] [ebp-5Ch]
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
  v6 = *(IUnknown **)&MEMORY[0x87F8E4].__pad_1D4[3800]; /*0x47ecc2*/
  if ( (v5 & 2) == 0 ) /*0x47ecca*/
    v6 = *(IUnknown **)&MEMORY[0x87F8E4].__pad_1D4[3780]; /*0x47eccc*/
  v7 = -1; /*0x47ecd2*/
  if ( v6 && (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6) == 7 ) /*0x47ece3*/
    v7 = *(_DWORD *)&v6->__pad_524[344]; /*0x47ece5*/
  v8 = 15 * *(char *)(this + 283); /*0x47ecf5*/
  v23 = -1 - v8; /*0x47ecfa*/
  v9 = -2 - v8; /*0x47ed03*/
  if ( *(_BYTE *)(this + 284) ) /*0x47ed05*/
    v9 -= 10; /*0x47ed0f*/
  if ( (*(_BYTE *)(this + 300) & 2) != 0 /*0x47ed2d*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3800] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]) == 7 )
  {
    v10 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47ed48*/
    v26[0] = (*(__int16 *)(this + 36) << 8) + 128; /*0x47ed4e*/
    v26[1] = v10; /*0x47ed56*/
    GroundHeight = 0; /*0x47ed62*/
    GroundHeight = Cell::GetGroundHeight(v26); /*0x47ed6f*/
    if ( Cell::IsPassable(v26) ) /*0x47ed79*/
    {
      if ( !MEMORY[0x87F8E4].__pad_1D4[3760] /*0x47eda4*/
        || !*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]
        || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3800] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]) != 7
        || !*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] + 3672) )
      {
        v22 = 0; /*0x47edb0*/
        goto LABEL_43; /*0x47edb5*/
      }
      goto LABEL_42; /*0x47edaa*/
    }
    if ( !*(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] + 3720) ) /*0x47edc8*/
    {
      if ( !MEMORY[0x87F8E4].__pad_1D4[3760] /*0x47eeb1*/
        || !*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]
        || (*(int (**)(void))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3800] + 44))() != 7
        || !CellClass::IsPassable(
              this,
              (IUnknown *)v7,
              *(IUnknown **)&MEMORY[0x87F8E4].__pad_1D4[3800],
              HouseClass_Player)
        || *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] + 3672) && *(_DWORD *)(this + 236) == 1 )
      {
        goto LABEL_43; /*0x47eeb1*/
      }
      goto LABEL_42; /*0x47eeb1*/
    }
    v24 = 0; /*0x47edd3*/
    v25 = 0; /*0x47edd9*/
    if ( MEMORY[0xA8D63C].__pad_1258[268] && (v11 = *(_DWORD **)(this + 228)) != 0 ) /*0x47ede7*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) != 2 ) /*0x47edf3*/
      {
        v11 = (_DWORD *)v11[12]; /*0x47edf5*/
        if ( !v11 ) /*0x47edfa*/
          goto LABEL_25; /*0x47edfa*/
      }
    }
    else
    {
LABEL_25:
      ClosestObjectCell = Object::FindClosestObjectCell((_DWORD *)this, (IUnknown *)&v24, 0, 0); /*0x47ee02*/
      if ( ClosestObjectCell ) /*0x47ee14*/
      {
        v11 = (_DWORD *)ClosestObjectCell; /*0x47ee16*/
      }
      else if ( MEMORY[0xA8D63C].__pad_1258[268] && (v11 = *(_DWORD **)(this + 228)) != 0 ) /*0x47ee2b*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) != 36 ) /*0x47ee37*/
        {
          v11 = (_DWORD *)v11[12]; /*0x47ee39*/
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
    if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 /*0x47ee61*/
      && BuildingClass::CanAcceptType(
           (int)v11,
           *(IUnknown **)&MEMORY[0x87F8E4].__pad_1D4[3800],
           (AbstractClass *)HouseClass_Player) )
    {
LABEL_42:
      v22 = 1; /*0x47eeb3*/
    }
  }
LABEL_43:
  if ( (*(_BYTE *)(this + 300) & 4) != 0 )
  {
    v13 = aP1->field_4; /*0x47eee4*/
    v24 = aP1->field_0 + 30; /*0x47eef7*/
    v25 = v23 + v13; /*0x47ef00*/
    DrawToSurfaceSHP(
      *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
      (int)MEMORY[0x87F6C4],
      *(int *)&MEMORY[0x89F690].__pad_BC0[428],
      1u,
      &v24,
      &aP2->field_0,
      (_BYTE)aP3 != 0 ? 67072 : 132608,
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
      v14 = aP1->field_4; /*0x47ef30*/
      v24 = aP1->field_0 + 30; /*0x47ef43*/
      v21 = v9; /*0x47ef4b*/
      v25 = v23 + v14; /*0x47ef4c*/
      v20 = (_BYTE)aP3 != 0 ? 67072 : 132608;
      v19 = aP2; /*0x47ef5c*/
      v18 = 0; /*0x47ef5e*/
    }
    else
    {
      v15 = v23 + aP1->field_4; /*0x47ef70*/
      v21 = v9; /*0x47ef7e*/
      v20 = (_BYTE)aP3 != 0 ? 67072 : 132608;
      v16 = *(unsigned __int8 *)(this + 284); /*0x47ef86*/
      v24 = aP1->field_0 + 30; /*0x47ef8c*/
      v25 = v15; /*0x47ef94*/
      v19 = aP2; /*0x47ef9c*/
      v18 = (IUnknown *)(v16 + 2); /*0x47efa6*/
    }
    DrawToSurfaceSHP( /*0x47efb4*/
      *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
      (int)MEMORY[0x87F6C4],
      *(int *)&MEMORY[0x89F690].__pad_BC0[428],
      (unsigned int)v18,
      &v24,
      &v19->field_0,
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


// ==== 0x0047EFE0  RenderFogOfWar  this=IUnknown  sig=csp ====
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

  if ( !MEMORY[0x89E7C5] ) /*0x47efed*/
  {
    MEMORY[0x89E7C5] = 1; /*0x47eff6*/
    MEMORY[0x89E794] = SearchMIXFile(aShroudShp, 0); /*0x47f009*/
    MEMORY[0x89E790] = SearchMIXFile(aFogShp, 0); /*0x47f013*/
  }
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x47f022*/
    v33 = (char **)MEMORY[0x89E790]; /*0x47f02a*/
  else
    v33 = (char **)MEMORY[0x89E794]; /*0x47f035*/
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
          v30 = v9 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v11; /*0x47f12e*/
          SubFile = MixFileClass::GetSubFile(v33, a3); /*0x47f142*/
          result = StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], v9, v35 - MEMORY[0x886FA4]); /*0x47f14c*/
          v13 = v32 - v35; /*0x47f15b*/
          v14 = (v32 - v35) * *((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x47f16d*/
          v41 = (unsigned __int8 *)(v12 + v28 * v10 + SubFile); /*0x47f172*/
          v33 = (char **)result; /*0x47f178*/
          v15 = MEMORY[0x87E8A4]; /*0x47f18a*/
          if ( result + 2 * (v14 + v39 + 0x7FFFFFFF * v9) + 4 < *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x47f193*/
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
                    v15 = MEMORY[0x87E8A4]; /*0x47f1c7*/
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


// ==== 0x0047F250  RenderFogOfWarOverlay  this=IUnknown  sig=csp ====
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

  if ( !MEMORY[0x89E7C6] ) /*0x47f25a*/
  {
    MEMORY[0x89E7C6] = 1; /*0x47f263*/
    MEMORY[0x89E760] = SearchMIXFile(aFogShp, 0); /*0x47f26f*/
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
          v30 = v14 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v9; /*0x47f373*/
          SubFileMixFileClass = MixFileClass::GetSubFile((char **)MEMORY[0x89E760], a3); /*0x47f38d*/
          result = (_WORD *)StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], v14, v12 - MEMORY[0x886FA4]); /*0x47f397*/
          v16 = MEMORY[0x87E8A4]; /*0x47f3a5*/
          v41 = (unsigned __int8 *)(v15 + v32 * v13 + SubFileMixFileClass); /*0x47f3b4*/
          if ( (unsigned int)&result[((_DWORD)v35 - v12) * *((_DWORD *)MEMORY[0x87E8A4] + 10)
                                   + 2
                                   + v39
                                   + 0x7FFFFFFF * v14] < *((_DWORD *)MEMORY[0x87E8A4] + 7) )
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
                    v16 = MEMORY[0x87E8A4]; /*0x47f440*/
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
void __thiscall TacticalClass::DrawBuildingPlacement(int this, IUnknown *aP1, int *a2)
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
  int *v14; // ecx
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = *(_BYTE **)&MEMORY[0xA83D84]->__pad_0[4 * *(_DWORD *)(this + 68)]; /*0x47f52c*/
  v15 = 15 * *(char *)(this + 283); /*0x47f534*/
  v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos(this, (IUnknown *)&v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = aP1->field_4 + v5[1]; /*0x47f55e*/
  v8 = a2; /*0x47f560*/
  v9 = v6 + aP1->field_0; /*0x47f564*/
  v10 = a2[1]; /*0x47f568*/
  v17 = v9 - *a2; /*0x47f571*/
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
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(aP1) = *(_BYTE *)(this + 286); /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(aP1) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
      *(_DWORD *)(this + 52),
      v16,
      (unsigned __int8)aP1 + *(__int16 *)(v16 + 6) / 2,
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
  v14 = *(int **)(this + 64); /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a2, (int *)&aP1) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
        *(_DWORD *)(this + 52),
        (int)a2,
        (unsigned int)aP1,
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
void __thiscall BuildingClass::Draw_0(int this, _DWORD *arg0, int *a2)
{
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int *v10; // ebp
  ConvertClass *v11; // eax
  int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  int BuildingByTiberiumType; // eax
  _DWORD *v16; // ebx
  int v17; // ecx
  int v18; // edx
  char v19; // bl
  int v20; // edi
  int *v21; // ecx
  unsigned int v22; // [esp-34h] [ebp-58h]
  int *v23; // [esp-2Ch] [ebp-50h]
  int v24; // [esp-20h] [ebp-44h]
  int v25; // [esp-1Ch] [ebp-40h]
  int v26; // [esp-18h] [ebp-3Ch]
  int v27; // [esp-18h] [ebp-3Ch]
  int v28; // [esp+10h] [ebp-14h] BYREF
  int v29[2]; // [esp+14h] [ebp-10h] BYREF
  char v30[8]; // [esp+1Ch] [ebp-8h] BYREF
  int v31; // [esp+28h] [ebp+4h]

  v4 = *(_DWORD *)(this + 68); /*0x47f6a9*/
  if ( v4 != 167 && v4 != 178 )
  {
    v28 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v4]; /*0x47f6d2*/
    v5 = BuildingClass::CalcDrawPos(this, (IUnknown *)v30); /*0x47f6d6*/
    v6 = *v5 + *arg0; /*0x47f6ef*/
    v7 = *(char *)(this + 283); /*0x47f6f1*/
    v8 = (*(_DWORD *)(this + 320) >> 7) & 1; /*0x47f6fb*/
    v9 = arg0[1] + v5[1]; /*0x47f6fe*/
    v10 = a2; /*0x47f700*/
    v29[0] = v6; /*0x47f704*/
    v29[1] = v9 - a2[1]; /*0x47f713*/
    v11 = *(ConvertClass **)(this + 52); /*0x47f717*/
    v12 = 15 * (v7 + 4 * v8); /*0x47f71a*/
    v31 = v12; /*0x47f722*/
    v29[0] = v6 - *a2; /*0x47f728*/
    if ( !v11 ) /*0x47f72c*/
      TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f748*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 156))(v28); /*0x47f755*/
    if ( *(char *)(this + 320) >= 0 )
    {
      if ( *(_BYTE *)(v28 + 681) )
      {
        BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x47f863*/
        if ( BuildingByTiberiumType == -1 ) /*0x47f86b*/
          return; /*0x47f86b*/
        v16 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9560] + 4 * BuildingByTiberiumType); /*0x47f87f*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f877*/
        {
          v17 = v16[58]; /*0x47f8c3*/
          v18 = *(_DWORD *)(v16[56] + 660) /*0x47f8ce*/
              + v16[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
              + *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % (v16[59] / 4);
        }
        else
        {
          v18 = *(__int16 *)(this + 36) * *(__int16 *)(this + 38) % v16[58]; /*0x47f8e3*/
          v17 = *(_DWORD *)(v16[56] + 660); /*0x47f8ef*/
        }
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0xA83D84]->__pad_0[4 * v17 + 4 * v18] + 156))(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v17 + 4 * v18]); /*0x47f902*/
        if ( *(_BYTE *)(this + 284) ) /*0x47f908*/
        {
          DrawToSurfaceSHP( /*0x47f952*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
            (int)MEMORY[0x87F6B8],
            v13,
            *(unsigned __int8 *)(this + 286),
            v29,
            v10,
            19968,
            0,
            -2 - v12,
            0,
            1000,
            0,
            *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * *(unsigned __int8 *)(this + 284) + 57988],
            0,
            0,
            0);
          return; /*0x47f952*/
        }
        v26 = 1000; /*0x47f960*/
      }
      else
      {
        if ( *(_BYTE *)(v28 + 680) ) /*0x47f96a*/
        {
          DrawToSurfaceSHP( /*0x47f9c1*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
            *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + HouseClass_Player[1].field_24) + 780),
            v13,
            *(unsigned __int8 *)(this + 286),
            v29,
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
          return; /*0x47f9c1*/
        }
        if ( *(_DWORD *)(v28 + 660) != 126 )
        {
          v19 = *(_BYTE *)(v28 + 691); /*0x47fa69*/
          v20 = v19 != 0 ? 0 : -15;
          if ( *(_BYTE *)(v28 + 693) ) /*0x47fa81*/
            v20 = 0; /*0x47fa8b*/
          if ( *(_BYTE *)(v28 + 682) )
          {
            v27 = *(__int16 *)(this + 268); /*0x47fab4*/
            v25 = v19 != 0 ? 0 : 2;
            v24 = v20 - v31 - 2; /*0x47fabc*/
            v23 = v10; /*0x47fac8*/
            v22 = 0; /*0x47faca*/
          }
          else if ( *(_BYTE *)(v28 + 692) )
          {
            v21 = *(int **)(this + 64); /*0x47fadb*/
            if ( !v21 || !BuildingClass::GetPlacementCoords(v21, (BuildingTypeClass *)&v28, &a2) ) /*0x47faf0*/
              return; /*0x47faf7*/
            v27 = *(__int16 *)(this + 268); /*0x47fb21*/
            v13 = v28; /*0x47fb22*/
            v25 = v19 != 0 ? 0 : 2;
            v24 = v20 - v31 - 2; /*0x47fb2a*/
            v23 = v10; /*0x47fb36*/
            v22 = (unsigned int)a2; /*0x47fb38*/
          }
          else
          {
            v27 = *(__int16 *)(this + 268); /*0x47fb58*/
            v25 = v19 != 0 ? 0 : 2;
            v24 = v20 - v31 - 2; /*0x47fb60*/
            v23 = v10; /*0x47fb74*/
            v22 = *(unsigned __int8 *)(this + 286); /*0x47fb76*/
          }
          DrawToSurfaceSHP( /*0x47fb81*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
            *(_DWORD *)(this + 52),
            v13,
            v22,
            v29,
            v23,
            19968,
            0,
            v24,
            v25,
            v27,
            0,
            0,
            0,
            0,
            0);
          return; /*0x47fb81*/
        }
        if ( *(_BYTE *)(this + 284) ) /*0x47f9d3*/
        {
          DrawToSurfaceSHP( /*0x47fa27*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
            (int)MEMORY[0x87F6B8],
            v13,
            *(unsigned __int8 *)(this + 286),
            v29,
            v10,
            19968,
            0,
            -2 - v12,
            0,
            *(__int16 *)(this + 268),
            0,
            *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * *(unsigned __int8 *)(this + 284) + 57988],
            0,
            30,
            -2);
          return; /*0x47fa27*/
        }
        v26 = *(__int16 *)(this + 268); /*0x47fa3c*/
      }
      DrawToSurfaceSHP( /*0x47fa64*/
        *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
        (int)MEMORY[0x87F6B8],
        v13,
        *(unsigned __int8 *)(this + 286),
        v29,
        v10,
        19968,
        0,
        -2 - v12,
        0,
        v26,
        0,
        0,
        0,
        0,
        0);
      return; /*0x47fa64*/
    }
    if ( *(_DWORD *)(this + 100) != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] /*0x47f7ab*/
      || *(_BYTE *)(this + 280) != MEMORY[0x87F8E4].__pad_1D4[3720]
      || *(_DWORD *)(this + 104) != *v10
      || *(_DWORD *)(this + 108) != v10[1]
      || *(_DWORD *)(this + 112) != v10[2]
      || *(_DWORD *)(this + 116) != v10[3] )
    {
      v14 = *(unsigned __int8 *)(this + 286); /*0x47f7b3*/
      if ( !*(_BYTE *)(this + 286) || v14 == 9 ) /*0x47f7c0*/
        v14 += dword_81CC30[*(_BYTE *)(this + 36) & 3 | (4 * (*(_BYTE *)(this + 38) & 3))]; /*0x47f7d3*/
      DrawToSurfaceSHP( /*0x47f80b*/
        *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
        *(_DWORD *)(this + 52),
        v13,
        v14,
        v29,
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
      *(_DWORD *)(this + 100) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x47f818*/
      *(_DWORD *)(this + 104) = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x47f821*/
      *(_DWORD *)(this + 108) = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x47f829*/
      *(_DWORD *)(this + 112) = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540]; /*0x47f832*/
      *(_DWORD *)(this + 116) = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x47f83a*/
      *(_BYTE *)(this + 280) = MEMORY[0x87F8E4].__pad_1D4[3720]; /*0x47f843*/
    }
  }
}


// ==== 0x0047FB90  House::GetStartCoords  this=IUnknown  sig=csp ====
_DWORD *__thiscall House::GetStartCoords(int this, IUnknown *aP1)
{
  int v3; // ecx
  _BYTE *v4; // ebp
  int BuildingByTiberiumType; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // ecx
  char **v9; // eax
  int *v10; // ecx
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
  char **v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int a2; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  _DWORD a1[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 68); /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  a2 = *(unsigned __int8 *)(this + 286); /*0x47fbb5*/
  v4 = *(_BYTE **)&MEMORY[0xA83D84]->__pad_0[4 * v3]; /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9560] + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( *(_BYTE *)(this + 284) ) /*0x47fbe5*/
    {
      v7 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v6[58] /*0x47fc36*/
                                               + 4 * *(_DWORD *)(v6[56] + 660)
                                               + 4 * v6[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
                                               + 4 * (*(__int16 *)(this + 36) * *(__int16 *)(this + 38) % (v6[59] / 4))];
      v23 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *(_DWORD *)(v6[56] + 660) /*0x47fc6f*/
                                             + 4 * (*(__int16 *)(this + 36) * *(__int16 *)(this + 38) % v6[58])];
    v9 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (char **)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47fca7*/
LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = *(int **)(this + 64); /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (BuildingTypeClass *)&v23, &a2); /*0x47fc9b*/
LABEL_12:
  v11 = (*(__int16 *)(this + 36) << 8) + 128; /*0x47fcb1*/
  v12 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47fce0*/
  a1[2] = 0; /*0x47fce2*/
  a1[0] = (v11 / 256) << 8; /*0x47fd02*/
  a1[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], a1, (IUnknown *)&v25); /*0x47fd0a*/
  v13 = BuildingClass::CalcDrawPos(this, (IUnknown *)a1); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v26; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v26 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
LABEL_13:
    aP1->field_0 = 0; /*0x47fd43*/
    aP1->field_4 = 0; /*0x47fd53*/
    aP1->field_8 = 0; /*0x47fd56*/
    aP1->field_C = 0; /*0x47fd59*/
    return &aP1->field_0; /*0x47fd63*/
  }
  House::Constructor(v23); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    a2 = 0; /*0x47fd75*/
  v16 = v25 - *((__int16 *)v23 + 1) / 2; /*0x47fd93*/
  v17 = v26 - *((__int16 *)v23 + 2) / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(a1, a2); /*0x47fda7*/
  v19 = v16 + *FoundationSize; /*0x47fdb1*/
  v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  v21 = FoundationSize[2]; /*0x47fdb9*/
  v22 = FoundationSize[3]; /*0x47fdbc*/
  aP1->field_0 = v19; /*0x47fdc1*/
  aP1->field_4 = v20; /*0x47fdc3*/
  aP1->field_8 = v21; /*0x47fdc6*/
  aP1->field_C = v22; /*0x47fdc9*/
  return &aP1->field_0; /*0x47fd5c*/
}


// ==== 0x0047FDE0  BuildingClass::GetPlacementRect  this=IUnknown  sig=csp ====
int *__thiscall BuildingClass_GetPlacementRect(int this, int *a2)
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

  v3 = *(_DWORD *)(this + 68); /*0x47fde8*/
  if ( v3 != -1 /*0x47fe07*/
    && (v4 = *(_BYTE **)(MEMORY[0x87F7E8][528743] + 4 * v3),
        (v5 = (__int16 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4)) != 0) )
  {
    LOBYTE(v20[0]) = *(_BYTE *)(this + 286); /*0x47fe31*/
    if ( v4[682] ) /*0x47fe35*/
      LOBYTE(v20[0]) = 0; /*0x47fe3f*/
    v7 = LOBYTE(v20[0]) + v5[3] / 2; /*0x47fe67*/
    Coord::Subtract( /*0x47fe9d*/
      v20,
      (((*(__int16 *)(this + 36) << 8) + 128) / 256) << 8,
      (((*(__int16 *)(this + 38) << 8) + 128) / 256) << 8,
      0);
    v23[0] = v20[0]; /*0x47feae*/
    v23[1] = v20[1]; /*0x47feb2*/
    v23[2] = v20[2]; /*0x47febe*/
    Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v23, &v21); /*0x47feca*/
    v8 = (_DWORD *)((_DWORD *(__stdcall *)(_DWORD *))BuildingClass::CalcDrawPos)(v20); /*0x47fed6*/
    v21 += *v8; /*0x47fee7*/
    v9 = v8[1]; /*0x47feeb*/
    LOBYTE(v8) = *(_BYTE *)(this + 320); /*0x47feee*/
    v10 = v9 + v22; /*0x47fef4*/
    v11 = v21 - 30; /*0x47fef6*/
    v22 += v9; /*0x47fef9*/
    v21 -= 30; /*0x47feff*/
    if ( (char)v8 < 0 ) /*0x47ff03*/
    {
      v12 = *(_BYTE *)(this + 286); /*0x47ff05*/
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


// ==== 0x0047FF80  CellClass::GetScreenRect  this=IUnknown  sig=csp ====
int *__thiscall CellClass_GetScreenRect(int this, int *a2)
{
  int v3; // kr04_4
  int v4; // kr00_4
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v3 = (*(__int16 *)(this + 36) << 8) + 128; /*0x47ffab*/
  v4 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47ffb8*/
  v19 = 0; /*0x47ffba*/
  v18 = (v4 / 256) << 8; /*0x47ffc4*/
  v17 = (v3 / 256) << 8; /*0x47ffde*/
  Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], &v17, &v15); /*0x47ffe2*/
  v5 = 3 * *(char *)(this + 283); /*0x47fff8*/
  v15 -= 30; /*0x47fffe*/
  v6 = v15; /*0x480002*/
  v7 = 30; /*0x480014*/
  v16 += MEMORY[0x87F7E8][7663] - 5 * v5; /*0x480019*/
  v8 = v16; /*0x48001d*/
  v9 = *(_DWORD *)(this + 56); /*0x48001f*/
  if ( v9 == 0xFFFF ) /*0x480027*/
  {
    *a2 = v15; /*0x48002f*/
    a2[1] = v8; /*0x480031*/
    a2[2] = 60; /*0x480037*/
    a2[3] = 30; /*0x48003a*/
    return a2; /*0x480041*/
  }
  if ( v9 < 0 || v9 >= MEMORY[0x87F7E8][539988] )
  {
    ((void (*)(const char *, ...))Debug::Log)( /*0x4800e0*/
      "Invalid tile at (%d, %d)\n",
      *(__int16 *)(this + 36),
      *(__int16 *)(this + 38));
  }
  else
  {
    v11 = *(unsigned __int8 *)(this + 282); /*0x480065*/
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(MEMORY[0x87F7E8][539985] + 4 * v9) + 156))(*(_DWORD *)(MEMORY[0x87F7E8][539985] + 4 * v9)); /*0x48006b*/
    if ( !v12 ) /*0x480073*/
    {
      *a2 = v17; /*0x480082*/
      a2[1] = v18; /*0x480089*/
      a2[2] = v19; /*0x480090*/
      a2[3] = v20; /*0x480097*/
      return a2; /*0x48009d*/
    }
    if ( v11 >= *v12 * v12[1] - 1 ) /*0x4800a9*/
      v11 = *v12 * v12[1] - 1; /*0x4800ab*/
    v13 = v12[v11 + 4]; /*0x4800ad*/
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

