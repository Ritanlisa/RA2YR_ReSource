// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00560480  NetworkOptions::DlgProc  this=NetworkOptions  sig=csp ====
int __stdcall NetworkOptions::DlgProc(HWND hWnd, unsigned int a2, int a3, HWND hCtl)
{
  int result; // eax
  HWND v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int i; // ebx
  wchar_t *v9; // eax
  LRESULT v10; // ebx
  HWND v11; // edi
  HWND v12; // ebx
  HWND v13; // edi
  HWND v14; // eax
  HWND DlgItem; // eax
  LRESULT (__stdcall *v16)(HWND, UINT, WPARAM, LPARAM); // esi
  __int16 v17; // dx
  int *v18; // eax
  HWND v19; // eax
  char *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int *v24; // esi
  int *v25; // eax
  HWND v26; // eax
  HWND v27; // edx
  int v28; // esi
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-120h]
  wchar_t *v33; // [esp-10h] [ebp-120h]
  wchar_t *v34; // [esp-10h] [ebp-120h]
  wchar_t *v35; // [esp-10h] [ebp-120h]
  wchar_t *v36; // [esp-10h] [ebp-120h]
  int v37; // [esp+0h] [ebp-110h]
  char v38; // [esp+13h] [ebp-FDh]
  _DWORD *v39; // [esp+14h] [ebp-FCh]
  __int16 v40; // [esp+14h] [ebp-FCh]
  int v41; // [esp+18h] [ebp-F8h] BYREF
  int v42; // [esp+1Ch] [ebp-F4h]
  int v43; // [esp+20h] [ebp-F0h]
  int v44; // [esp+24h] [ebp-ECh]
  _DWORD *WindowLongA; // [esp+28h] [ebp-E8h]
  LPARAM v46[9]; // [esp+2Ch] [ebp-E4h] BYREF
  char v47[32]; // [esp+50h] [ebp-C0h] BYREF
  LPARAM lParam[16]; // [esp+70h] [ebp-A0h] BYREF
  char v49[32]; // [esp+B0h] [ebp-60h] BYREF
  char Destination[32]; // [esp+D0h] [ebp-40h] BYREF
  char String[32]; // [esp+F0h] [ebp-20h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)hCtl); /*0x5604ac*/
  if ( !result )
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x5604c2*/
    if ( a2 == 273 ) /*0x5604cd*/
    {
      switch ( (unsigned __int16)a3 ) /*0x560760*/
      {
        case 1u: /*0x560760*/
          DlgItem = GetDlgItem(hWnd, 1489); /*0x5607b1*/
          v16 = SendMessageA; /*0x5607b3*/
          SendMessageA(DlgItem, 0x4B5u, 0x10u, (LPARAM)v46); /*0x5607c6*/
          if ( strlen((const char *)v46) ) /*0x5607cc*/
          {
            v17 = atoi((const char *)v46); /*0x5607e6*/
            v40 = v17; /*0x5607f4*/
            if ( strlen((const char *)v46) > 5 || (unsigned __int16)v17 > 0x3FFFu ) /*0x560807*/
            {
              v46[5] = (LPARAM)asc_82083C; /*0x560820*/
              StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 983); /*0x56082d*/
              v18 = (int *)GetStringCSF(aTxtInvalidSock, 0, g_Str_File_MainOpt_cpp, 983); /*0x56083f*/
              Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v37); /*0x560849*/
              return 0; /*0x56085a*/
            }
          }
          else
          {
            v40 = -1; /*0x56085d*/
          }
          v19 = GetDlgItem(hWnd, 1491); /*0x56086b*/
          SendMessageA(v19, 0x4B5u, 0x20u, (LPARAM)v47); /*0x56087a*/
          strncpy(Destination, v47, 0x20u); /*0x56088b*/
          if ( strlen(v47) ) /*0x560894*/
          {
            v20 = strtok(v47, asc_826598); /*0x5608b1*/
            v21 = -1; /*0x5608b9*/
            v22 = -1; /*0x5608bc*/
            v23 = -1; /*0x5608bf*/
            v41 = -1; /*0x5608c4*/
            v42 = -1; /*0x5608c8*/
            v43 = -1; /*0x5608cc*/
            v44 = -1; /*0x5608d4*/
            if ( v20 ) /*0x5608d8*/
            {
              v24 = &v41; /*0x5608da*/
              do /*0x5608fe*/
              {
                sscanf(v20, "%x", v24++); /*0x5608e5*/
                v20 = strtok(0, asc_826598); /*0x5608f4*/
              }
              while ( v20 ); /*0x5608fe*/
              v23 = v44; /*0x560900*/
              v22 = v42; /*0x560904*/
              v21 = v41; /*0x560908*/
              v16 = SendMessageA; /*0x56090c*/
            }
            if ( (unsigned __int8)v21 != v21 /*0x560942*/
              || (unsigned __int8)v22 != v22
              || (unsigned __int8)v43 != v43
              || (unsigned __int8)v23 != v23 )
            {
              v46[6] = (LPARAM)asc_82083C; /*0x56095b*/
              v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1017); /*0x560968*/
              v25 = (int *)GetStringCSF(aTxtDestnetAddr, 0, g_Str_File_MainOpt_cpp, 1017); /*0x56097a*/
              Dialog::ShowMessageBox(v25, v33, 0, 0, 0, v37); /*0x560984*/
              return 0; /*0x560995*/
            }
          }
          v26 = GetDlgItem(hWnd, 1492); /*0x56099e*/
          dword_A8EBB4 = v16(v26, 0x147u, 0, 0); /*0x5609ac*/
          HIWORD(unk_A8EBA8) = v40; /*0x5609bf*/
          strcpy(unk_A8EBB8, Destination); /*0x5609e1*/
          v27 = GetDlgItem(hWnd, 1495); /*0x5609ec*/
          memset(v49, 0, sizeof(v49)); /*0x5609fc*/
          SendMessageA(v27, 0x4B5u, 8u, (LPARAM)v49); /*0x560a0e*/
          strncpy(String, v49, 0x20u); /*0x560a26*/
          v28 = atoi(String); /*0x560a38*/
          if ( v28 > 0xFFFF ) /*0x560a43*/
          {
            v46[4] = (LPARAM)asc_82083C; /*0x560a5c*/
            v34 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a69*/
            v29 = (int *)GetStringCSF(aTxtPortNumberE, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a7b*/
            Dialog::ShowMessageBox(v29, v34, 0, 0, 0, v37); /*0x560a85*/
            return 0; /*0x560a96*/
          }
          if ( SendDlgItemMessageA(hWnd, 1890, 0xF0u, 0, 0) == 1 ) /*0x560ab6*/
          {
            if ( !byte_A8E180 ) /*0x560abf*/
            {
              v46[8] = (LPARAM)asc_82083C; /*0x560ad8*/
              v35 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560ae1*/
              v30 = (int *)GetStringCSF(aTxtFirewallSet, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560af3*/
              Dialog::ShowMessageBox(v30, v35, 0, 0, 0, v37); /*0x560afd*/
            }
            byte_A8E180 = 1; /*0x560b02*/
          }
          else
          {
            byte_A8E180 = 0; /*0x560b0b*/
          }
          if ( v28 > 0 && !dword_A8E254 ) /*0x560b1d*/
          {
            v46[7] = (LPARAM)asc_82083C; /*0x560b36*/
            v36 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b3f*/
            v31 = (int *)GetStringCSF(aTxtFirewallSet_0, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b51*/
            Dialog::ShowMessageBox(v31, v36, 0, 0, 0, v37); /*0x560b5b*/
          }
          dword_A8E254 = v28; /*0x560b65*/
          __Release__NonReentrantLock_details_Concurrency__QAEXXZ((Concurrency::details::_NonReentrantLock *)&dword_ABFEC8); /*0x560b6b*/
          RawFileClass::Construct(lParam, (int)aRa2mdIni); /*0x560b79*/
          INIClass::SetBool((char *)&dword_8870C0, aMultiplayer, aSenddelay, byte_A8E180); /*0x560b94*/
          INIClass::SetInt((char *)&dword_8870C0, aMultiplayer, aPortnumberover, dword_A8E254, 0); /*0x560bb1*/
          INIClass::WriteDigest(&dword_8870C0, (int)lParam, 0); /*0x560bc2*/
          RawFileClass::Dtor(lParam); /*0x560bcb*/
          break;
        case 2u: /*0x560760*/
          break;
        case 0x5D4u: /*0x560760*/
          v14 = GetDlgItem(hWnd, 1492); /*0x56077b*/
          dword_82A280 = SendMessageA(v14, 0x147u, 0, 0); /*0x560793*/
          return 0; /*0x5607a2*/
        default:
          return 0; /*0x56076f*/
      }
      *WindowLongA = 2; /*0x560bd4*/
      return 0; /*0x560bda*/
    }
    if ( a2 != 1175 ) /*0x5604d8*/
    {
      if ( a2 == 1243 ) /*0x5604dd*/
      {
        NavigateDialogTab(hCtl, a3 != 0); /*0x5604ea*/
        return 0; /*0x5604fb*/
      }
      return 0; /*0x5604dd*/
    }
    v5 = GetDlgItem(hWnd, 1492); /*0x560510*/
    v38 = 0; /*0x560517*/
    if ( dword_887628
      || ((v6 = (_DWORD *)__2_YAPAXI_Z(0x3F310u)) == 0 ? (v7 = 0) : (v7 = IPXInterfaceClass::Construct(v6)),
          dword_887628 = v7,
          WinsockInterface::Init(v7),
          v38 = 1,
          dword_887628) )
    {
      Debug::Log(); /*0x560560*/
      v39 = dword_887628; /*0x56056d*/
      for ( i = 0; i < 20; ++i ) /*0x560571*/
      {
        if ( NetworkOptions::ApplySettings((int)v39, i, (char *)lParam, 64) ) /*0x56057f*/
        {
          Debug::Log(); /*0x56058e*/
          Debug::Log(); /*0x56059d*/
          if ( SendMessageA(v5, 0x4B8u, 0, (LPARAM)lParam) == -1 ) /*0x5605b7*/
            SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x5605c6*/
        }
      }
      if ( !v38 ) /*0x5605d4*/
      {
LABEL_20:
        if ( !SendMessageA(v5, 0x146u, 0, 0) ) /*0x5605fa*/
        {
          v9 = GetStringCSF(aTxtNoBoundNetC, 0, g_Str_File_MainOpt_cpp, 894); /*0x560611*/
          SendMessageA(v5, 0x4C2u, 0, (LPARAM)v9); /*0x56061f*/
        }
        v10 = dword_A8EBB4; /*0x560621*/
        if ( (dword_A8EBB4 & 0x80000000) != 0 || v10 >= SendMessageA(v5, 0x146u, 0, 0) ) /*0x560639*/
          v10 = 0; /*0x56063b*/
        SendMessageA(v5, 0x14Eu, v10, 0); /*0x560646*/
        SendMessageA(hWnd, 0x464u, 0, 0); /*0x560652*/
        dword_82A280 = -1; /*0x560660*/
        v11 = GetDlgItem(hWnd, 1489); /*0x56066c*/
        if ( HIWORD(unk_A8EBA8) != 0xFFFF ) /*0x560678*/
        {
          sprintf((char *const)v46, "%d", HIWORD(unk_A8EBA8)); /*0x56068a*/
          SendMessageA(v11, 0x4B4u, 0, (LPARAM)v46); /*0x56069f*/
        }
        SendMessageA(v11, 0xC5u, 5u, 0); /*0x5606ab*/
        v12 = GetDlgItem(hWnd, 1491); /*0x5606b5*/
        if ( strlen(unk_A8EBB8) ) /*0x5606bc*/
          SendMessageA(v12, 0x4B4u, 0, (LPARAM)unk_A8EBB8); /*0x5606d4*/
        SendMessageA(v12, 0xC5u, 0xBu, 0); /*0x5606e0*/
        SendDlgItemMessageA(hWnd, 1890, 0xF1u, byte_A8E180 != 0, 0); /*0x5606fe*/
        v13 = GetDlgItem(hWnd, 1495); /*0x560710*/
        if ( v13 != HWND_MESSAGE|0x2 && dword_A8E254 ) /*0x560722*/
        {
          sprintf((char *const)v46, "%d", dword_A8E254); /*0x560733*/
          SendMessageA(v13, 0x4B4u, 0, (LPARAM)v46); /*0x560748*/
          return 0; /*0x560756*/
        }
        return 0; /*0x560722*/
      }
      if ( dword_887628 ) /*0x5605de*/
        (*(void (__thiscall **)(_DWORD *, int))*dword_887628)(dword_887628, 1); /*0x5605e4*/
    }
    dword_887628 = 0; /*0x5605e6*/
    goto LABEL_20; /*0x5605e6*/
  }
  return result; /*0x5604ef*/
}



// ==== 0x00560BF0  ChangeVideoMode  this=ObjectClass  sig=ida-proto ====
char __fastcall ChangeVideoMode(unsigned int xRight, unsigned int yBottom)
{
  unsigned __int64 v2; // rdi
  char BitShift_Green; // bp
  MouseClass *v4; // eax
  int v5; // eax
  LONG v7; // eax
  int *Viewport; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  MouseClass *v13; // eax
  int v14; // eax
  Dialog *i; // esi
  BOOL v16; // [esp+4h] [ebp-78h]
  LONG WindowLongA; // [esp+8h] [ebp-74h]
  DDraw *v18; // [esp+Ch] [ebp-70h]
  int v19; // [esp+Ch] [ebp-70h]
  SidebarClass *v20; // [esp+Ch] [ebp-70h]
  __int16 BitShift_Blue; // [esp+1Ch] [ebp-60h]
  char BitMask_Red; // [esp+20h] [ebp-5Ch]
  __int16 BitMask_Green; // [esp+24h] [ebp-58h]
  char BitMask_Blue; // [esp+28h] [ebp-54h]
  int BitShift_Red; // [esp+2Ch] [ebp-50h] BYREF
  int v26; // [esp+30h] [ebp-4Ch]
  __int64 lParam; // [esp+34h] [ebp-48h] BYREF
  struct tagRECT rc; // [esp+3Ch] [ebp-40h] BYREF
  _DWORD v29[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v30[4]; // [esp+5Ch] [ebp-20h] BYREF
  _DWORD v31[4]; // [esp+6Ch] [ebp-10h] BYREF

  v2 = __PAIR64__(yBottom, xRight); /*0x560bf9*/
  Debug::Log(); /*0x560c00*/
  lParam = *(_QWORD *)&g_DisplayWidth; /*0x560c13*/
  BitShift_Green = GetBitShift_Green(); /*0x560c20*/
  BitShift_Red = GetBitShift_Red(); /*0x560c27*/
  BitMask_Blue = GetBitMask_Blue(); /*0x560c30*/
  BitMask_Green = GetBitMask_Green(); /*0x560c39*/
  BitMask_Red = GetBitMask_Red(); /*0x560c42*/
  BitShift_Blue = GetBitShift_Blue(); /*0x560c51*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x560c57*/
  DDraw::WaitForIdle(v18); /*0x560c5a*/
  if ( g_DDraw_Initialized == 1 ) /*0x560c66*/
  {
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560c73*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560c78*/
    *(_QWORD *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560c7e*/
    *(_QWORD *)&g_DisplayWidth = v2; /*0x560c8a*/
    Debug::Log(); /*0x560c96*/
LABEL_19:
    if ( DSurface_Alternate ) /*0x560e07*/
    {
      Debug::Log(); /*0x560e0e*/
      if ( DSurface_Alternate ) /*0x560e1e*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x560e24*/
      DSurface_Alternate = 0; /*0x560e26*/
    }
    if ( g_DSurface_Hidden ) /*0x560e32*/
    {
      Debug::Log(); /*0x560e39*/
      if ( g_DSurface_Hidden ) /*0x560e49*/
        (*(void (__thiscall **)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)(g_DSurface_Hidden, 1); /*0x560e4f*/
      g_DSurface_Hidden = 0; /*0x560e51*/
    }
    if ( DSurface_Tile ) /*0x560e5d*/
    {
      Debug::Log(); /*0x560e64*/
      if ( DSurface_Tile ) /*0x560e74*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)(DSurface_Tile, 1); /*0x560e7a*/
      DSurface_Tile = 0; /*0x560e7c*/
    }
    if ( DSurface_Sidebar ) /*0x560e88*/
    {
      Debug::Log(); /*0x560e8f*/
      if ( DSurface_Sidebar ) /*0x560e9f*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)(DSurface_Sidebar, 1); /*0x560ea5*/
      DSurface_Sidebar = 0; /*0x560ea7*/
    }
    if ( DSurface_Composite ) /*0x560eb3*/
    {
      Debug::Log(); /*0x560eba*/
      if ( DSurface_Composite ) /*0x560eca*/
        (**(void (__thiscall ***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x560ed0*/
      DSurface_Composite = 0; /*0x560ed2*/
    }
    if ( g_DDraw_Initialized ) /*0x560ee6*/
    {
      Debug::Log(); /*0x560f1f*/
      SetRect(&rc, 0, 0, v2, SHIDWORD(v2)); /*0x560f30*/
      WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x560f4c*/
      v16 = GetMenu(g_hWnd) != 0; /*0x560f60*/
      v7 = GetWindowLongA(g_hWnd, -16); /*0x560f64*/
      AdjustWindowRectEx(&rc, v7, v16, WindowLongA); /*0x560f6c*/
      MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x560f92*/
    }
    else
    {
      Debug::Log(); /*0x560ee8*/
      SetWindowPos(g_hWnd, 0, 0, 0, v2, SHIDWORD(v2), 2u); /*0x560efe*/
      Debug::Log(); /*0x560f09*/
      g_DSurface_Primary = (DSurface *)DSurface::CreatePrimary(0); /*0x560f18*/
    }
    Viewport = Display::GetViewport(v30); /*0x560fa1*/
    rc.left = 0; /*0x560fa3*/
    rc.top = 0; /*0x560fa8*/
    v9 = *Viewport; /*0x560fac*/
    v29[0] = 0; /*0x560fae*/
    v31[0] = v9; /*0x560fb2*/
    v10 = Viewport[1]; /*0x560fbc*/
    rc.right = 168; /*0x560fbf*/
    v31[1] = v10; /*0x560fc3*/
    v11 = Viewport[2]; /*0x560fcb*/
    v29[1] = 0; /*0x560fce*/
    v31[2] = v11; /*0x560fd2*/
    v29[2] = v11; /*0x560fd6*/
    v12 = Viewport[3]; /*0x560fda*/
    v30[2] = v11; /*0x560fdd*/
    v31[3] = v12; /*0x560fe1*/
    rc.bottom = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560feb*/
    v29[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560fef*/
    v30[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560ff3*/
    v30[0] = 0; /*0x561006*/
    v30[1] = 0; /*0x56100a*/
    AllocateSurfaceScreenSurfaces((int)&DSurface_ViewBounds.__pad_8[8], (int)v30, (int)v29, (int)&rc, 0); /*0x56100e*/
    g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56101e*/
    Debug::Log(); /*0x561024*/
    sub_491100(BitShift_Red, BitShift_Green, 0, BitMask_Blue, BitMask_Green, BitMask_Red, BitShift_Blue); /*0x561046*/
    if ( stru_887598.lineTrailer ) /*0x561053*/
    {
      MouseClass::CalcConfiningRect((MouseClass *)stru_887598.lineTrailer); /*0x5610dd*/
    }
    else
    {
      v13 = (MouseClass *)__2_YAPAXI_Z(0x98u); /*0x56105e*/
      if ( v13 ) /*0x561068*/
        stru_887598.lineTrailer = MouseClass::Construct(v13, (int)g_DSurface_Primary, (int)g_hWnd); /*0x56107f*/
      else
        stru_887598.lineTrailer = 0; /*0x561086*/
      v14 = SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x561093*/
      if ( v14 ) /*0x56109a*/
      {
        BitShift_Red = 0; /*0x56109f*/
        v26 = 0; /*0x5610aa*/
        (*(void (__thiscall **)(void *, int *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5610b5*/
          stru_887598.lineTrailer,
          &BitShift_Red,
          v14,
          0);
      }
      Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x5610bf*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x5610cb*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5610d8*/
    }
    TacticalClass::SetViewDimensions((DisplayClass *)v31); /*0x5610ec*/
    ChangeVideoMode_Setup((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x5610fd*/
    SidebarClass::InitButtons((TabClass *)&stru_87F5F0.__pad_58[416]); /*0x561107*/
    TacticalClass::BuildCommandBar((TabClass *)1, v2, v19); /*0x561113*/
    SidebarClass::LoadResources(v20); /*0x56111d*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x561129*/
    for ( i = (Dialog *)Dialog::GetCurrent(); i; i = (Dialog *)Dialog::FindByPtr(i) ) /*0x561137*/
    {
      DestroyDialog((ObjectClass *)i); /*0x56113b*/
      ResizeDialogAndEnum((HWND)i, (LPARAM)&lParam); /*0x561146*/
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x561160*/
    Debug::Log(); /*0x561168*/
    return 1; /*0x561170*/
  }
  if ( stru_887598.lineTrailer ) /*0x560cac*/
  {
    Debug::Log(); /*0x560cb3*/
    if ( stru_887598.lineTrailer ) /*0x560cc3*/
      (**(void (__thiscall ***)(void *, int))stru_887598.lineTrailer)(stru_887598.lineTrailer, 1); /*0x560cc9*/
    stru_887598.lineTrailer = 0; /*0x560ccb*/
  }
  if ( g_DSurface_Primary ) /*0x560cd7*/
  {
    Debug::Log(); /*0x560cde*/
    if ( g_DSurface_Primary ) /*0x560cee*/
      (*(void (__thiscall **)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)(g_DSurface_Primary, 1); /*0x560cf4*/
    g_DSurface_Primary = 0; /*0x560cf6*/
  }
  if ( InitializeDDraw((int)g_hWnd, v2, HIDWORD(v2), 0x10u) ) /*0x560d07*/
  {
    Debug::Log(); /*0x560dd4*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560de2*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560de7*/
    *(_QWORD *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560ded*/
    Debug::Log(); /*0x560df9*/
    goto LABEL_19; /*0x560df9*/
  }
  Debug::Log(); /*0x560d19*/
  Debug::Log(); /*0x560d23*/
  g_DSurface_Primary = (DSurface *)DSurface::CreatePrimary(0); /*0x560d32*/
  Debug::Log(); /*0x560d3c*/
  v4 = (MouseClass *)__2_YAPAXI_Z(0x98u); /*0x560d46*/
  if ( v4 ) /*0x560d50*/
    stru_887598.lineTrailer = MouseClass::Construct(v4, (int)g_DSurface_Primary, (int)g_hWnd); /*0x560d67*/
  else
    stru_887598.lineTrailer = 0; /*0x560d6e*/
  v5 = SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x560d7b*/
  if ( v5 ) /*0x560d82*/
  {
    BitShift_Red = 0; /*0x560d88*/
    v26 = 0; /*0x560d94*/
    (*(void (__thiscall **)(void *, int *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x560d9f*/
      stru_887598.lineTrailer,
      &BitShift_Red,
      v5,
      0);
  }
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x560da9*/
  Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x560db5*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x560dc2*/
  return 0; /*0x560dc7*/
}



// ==== 0x00561180  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char __usercall Team_Start@<al>(ObjectClass *this, unsigned int yBottom@<edx>, int a3@<ebx>, int a4@<edi>)
{
  unsigned int v4; // ecx
  unsigned int v6; // esi
  char result; // al
  Dialog *Dialog; // edi
  TechnoTypeClass *v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // [esp-4h] [ebp-30h]
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+4h] [ebp-28h]
  int v16; // [esp+4h] [ebp-28h]
  int *v17; // [esp+8h] [ebp-24h]
  int *v18; // [esp+8h] [ebp-24h]
  LONG dwNewLong; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v20; // [esp+10h] [ebp-1Ch]
  int Ticks; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  v6 = v4; /*0x561188*/
  v20 = v4; /*0x561191*/
  dwNewLong = -1; /*0x561195*/
  Debug::Log(); /*0x56119d*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5611ad*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5611ba*/
  Frame::Present((int)g_DSurface_Hidden, a3, yBottom, a4, 0, v13, v15, v17); /*0x5611c7*/
  result = ChangeVideoMode(v6, yBottom); /*0x5611d0*/
  if ( result ) /*0x5611d7*/
  {
    (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5611ea*/
    Frame::Present((int)g_DSurface_Hidden, a3, yBottom, a4, 0, v14, v16, v18); /*0x5611f7*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x561204*/
    Screen::Capture(1, 0, a3, yBottom); /*0x56120b*/
    Dialog = (Dialog *)CreateDialog(0xD9u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_561350, 0); /*0x561221*/
    if ( !Dialog ) /*0x561225*/
      goto LABEL_13; /*0x561225*/
    v12 = a3; /*0x56122f*/
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x561234*/
    Dialog::Show(Dialog); /*0x56123c*/
    Ticks = Timer::GetTicks(); /*0x56124a*/
    v23 = 600; /*0x561254*/
    while ( dwNewLong < 0 ) /*0x56125c*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x56126b*/
        break; /*0x56126b*/
      LOBYTE(v9) = 0; /*0x56126d*/
      ScreenSaver::Process(v9, v12); /*0x56126f*/
      v10 = v23; /*0x561278*/
      if ( Ticks != -1 ) /*0x56127f*/
      {
        v11 = Timer::GetTicks() - Ticks; /*0x56128a*/
        if ( v11 >= v10 ) /*0x561290*/
          goto LABEL_9; /*0x561290*/
        v10 -= v11; /*0x561292*/
      }
      if ( v10 <= 0 ) /*0x561296*/
      {
LABEL_9:
        PostMessageA((HWND)Dialog, 0x111u, 0x6CAu, 0); /*0x561298*/
        v24 = Timer::GetTicks(); /*0x5612b9*/
        v26 = 300; /*0x5612bd*/
        Ticks = v24; /*0x5612c1*/
        v22 = v25; /*0x5612c5*/
        v23 = 300; /*0x5612c9*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5612d7*/
    if ( dwNewLong == 1 ) /*0x5612e4*/
    {
LABEL_13:
      Debug::Log(); /*0x561331*/
      g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56133e*/
      return 1; /*0x561343*/
    }
    else
    {
      Debug::Log(); /*0x5612f8*/
      ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x56130c*/
      g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56131b*/
      return 0; /*0x561317*/
    }
  }
  return result; /*0x5611d9*/
}



// ==== 0x00561350  sub_561350  this=-  sig=csp ====
int __stdcall sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x561369*/
  if ( !result ) /*0x561370*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x561379*/
    if ( a2 == 273 ) /*0x561385*/
    {
      if ( (unsigned __int16)a3 == 1473 ) /*0x5613d8*/
      {
        *WindowLongA = 1; /*0x5613f0*/
      }
      else if ( (unsigned __int16)a3 == 1738 ) /*0x5613e0*/
      {
        *WindowLongA = 2; /*0x5613e3*/
        return 0; /*0x5613ed*/
      }
    }
    else if ( a2 == 1175 ) /*0x56138d*/
    {
      StringCSF = GetStringCSF(aGuiConfirmmode, 0, g_Str_File_MainOpt_cpp, 1501); /*0x5613ab*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x5613ad*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5613bc*/
      return 0; /*0x5613c7*/
    }
    return 0; /*0x5613f6*/
  }
  return result; /*0x5613c2*/
}



// ==== 0x00561400  VideoSettingsDialogProc  this=-  sig=csp ====
int __stdcall VideoSettingsDialogProc(HWND hWnd, unsigned int a2, WPARAM wParam, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // esi
  HWND v6; // ebx
  _DWORD *v7; // eax
  LPARAM v8; // esi
  int *v9; // ebp
  int v10; // eax
  int v11; // ecx
  LRESULT v12; // eax
  HWND v13; // esi
  bool v14; // al
  HWND DlgItem; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF
  int wParama; // [esp+58h] [ebp+Ch]
  int v21; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, wParam, a4); /*0x56141c*/
  if ( result ) /*0x561423*/
    return result; /*0x561423*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x561439*/
  if ( a2 == 273 ) /*0x56143b*/
  {
    if ( (unsigned __int16)wParam > 0x686u ) /*0x5615c1*/
    {
      if ( (unsigned __int16)wParam != 1739 ) /*0x56162f*/
        return 0; /*0x5616d5*/
    }
    else
    {
      if ( (unsigned __int16)wParam == 1670 ) /*0x5615c3*/
      {
        __3_YAXPAX_Z(dword_ABCF5C); /*0x561606*/
        dword_ABCF5C = 0; /*0x56160e*/
        *WindowLongA = 2; /*0x561618*/
        return 0; /*0x561627*/
      }
      if ( (unsigned __int16)wParam != 1 ) /*0x5615c6*/
      {
        if ( (unsigned __int16)wParam == 1497 ) /*0x5615cd*/
        {
          DlgItem = GetDlgItem(hWnd, 1497); /*0x5615d9*/
          dword_82A284 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x5615f1*/
          return 0; /*0x5615fd*/
        }
        return 0; /*0x5615cd*/
      }
    }
    if ( dword_82A288 != dword_82A284 ) /*0x56164e*/
    {
      SetDialogParent(hWnd, g_hWnd); /*0x561658*/
      v16 = GetDlgItem(hWnd, 1497); /*0x561663*/
      if ( v16 ) /*0x561667*/
      {
        v17 = SendMessageA(v16, 0x199u, dword_82A284, 0); /*0x561678*/
        dword_ABCE94 = *((_DWORD *)dword_ABCF5C + 2 * v17); /*0x561683*/
        dword_ABCE98 = *((_DWORD *)dword_ABCF5C + 2 * v17 + 1); /*0x56168d*/
      }
    }
    v18 = GetDlgItem(hWnd, 1652); /*0x561698*/
    if ( v18 ) /*0x5616a1*/
      byte_A8EB94 = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5616b4*/
    __3_YAXPAX_Z(dword_ABCF5C); /*0x5616c1*/
    dword_ABCF5C = 0; /*0x5616c6*/
    *WindowLongA = 1; /*0x5616d3*/
    return 0; /*0x5616d3*/
  }
  if ( a2 != 1175 ) /*0x561447*/
    return 0; /*0x561447*/
  v6 = GetDlgItem(hWnd, 1497); /*0x561459*/
  if ( byte_A8EB95 ) /*0x561464*/
    v7 = (_DWORD *)sub_4A4900(4096, 4096, 16); /*0x561470*/
  else
    v7 = (_DWORD *)sub_4A4900(1024, 768, 16); /*0x561486*/
  v8 = 0; /*0x561491*/
  dword_ABCF5C = v7; /*0x561495*/
  v9 = v7; /*0x56149a*/
  wParama = -1; /*0x56149c*/
  v21 = 0; /*0x5614a4*/
  if ( v7 && *v7 ) /*0x5614ae*/
  {
    do /*0x561527*/
    {
      v10 = *v9; /*0x5614b3*/
      v11 = v9[1]; /*0x5614b6*/
      v9 += 2; /*0x5614c2*/
      if ( byte_A8EB95 || v10 == 640 || v10 == 800 || v10 == 1024 ) /*0x5614dc*/
      {
        if ( v10 == dword_ABCE94 && v11 == dword_ABCE98 ) /*0x5614ec*/
          wParama = v21; /*0x5614f2*/
        sprintf(Buffer, "%d x %d x 16", v10, v11); /*0x561502*/
        v12 = SendMessageA(v6, 0x4C8u, 0, (LPARAM)Buffer); /*0x561517*/
        SendMessageA(v6, 0x19Au, v12, v8); /*0x561521*/
        ++v21; /*0x561523*/
      }
      ++v8; /*0x56152a*/
    }
    while ( *v9 ); /*0x561527*/
  }
  SendMessageA(v6, 0x186u, wParama, 0); /*0x56153c*/
  byte_82A28C = 1; /*0x56154c*/
  dword_82A284 = wParama; /*0x561552*/
  dword_82A288 = wParama; /*0x561557*/
  v13 = GetDlgItem(hWnd, 1652); /*0x561567*/
  if ( !v13 ) /*0x56156b*/
    return 0; /*0x56156b*/
  v14 = byte_A8EB94 == 1 && g_DDraw_AllowStretchBlits == 1; /*0x561581*/
  SendMessageA(v13, 0xF1u, v14, 0); /*0x561597*/
  EnableWindow(v13, (unsigned __int8)g_DDraw_AllowStretchBlits); /*0x5615a3*/
  return 0; /*0x5615aa*/
}



// ==== 0x005616F0  sub_5616F0  this=-  sig=ida-proto ====
int sub_5616F0()
{
  dword_ABD470 = 0; /*0x5616f2*/
  dword_ABD474 = 0; /*0x5616f7*/
  dword_ABD478 = 0; /*0x5616fc*/
  dword_ABD47C = 0; /*0x561701*/
  return 0; /*0x561706*/
}



// ==== 0x00561710  sub_561710  this=-  sig=ida-proto ====
void sub_561710()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x56171c*/
  dbl_ABD488 = Math::Sqrt(v0 + v0); /*0x56172e*/
}



// ==== 0x00561740  sub_561740  this=-  sig=ida-proto ====
void sub_561740()
{
  dbl_ABDDA0 = dbl_ABD488 / unk_7ED3C0; /*0x56174c*/
}



// ==== 0x00561760  sub_561760  this=-  sig=ida-proto ====
void sub_561760()
{
  dbl_ABDC38 = 1.0 / dbl_ABDDA0; /*0x56176c*/
}



// ==== 0x00561780  sub_561780  this=-  sig=ida-proto ====
void sub_561780()
{
  dbl_ABDC30 = unk_7ED3C8 * 45.0; /*0x56178c*/
}



// ==== 0x005617A0  sub_5617A0  this=-  sig=ida-proto ====
void sub_5617A0()
{
  dbl_ABDA58 = unk_7ED3C8 * 60.0; /*0x5617ac*/
}



// ==== 0x005617C0  sub_5617C0  this=-  sig=ida-proto ====
void sub_5617C0()
{
  dbl_ABD458 = unk_7ED3C8 * 90.0; /*0x5617cc*/
}



// ==== 0x005617E0  sub_5617E0  this=-  sig=ida-proto ====
__int64 sub_5617E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABD458 - dbl_ABDA58); /*0x5617f2*/
  result = Math::RoundToInt(v0 * dbl_ABD488 * 0.5); /*0x561806*/
  dword_ABDE88 = result; /*0x56180b*/
  return result; /*0x561810*/
}



// ==== 0x00561820  sub_561820  this=-  sig=ida-proto ====
void sub_561820()
{
  dbl_ABDA60 = Math::ArcTan((double)dword_ABDE88 * 0.00390625); /*0x561837*/
}



// ==== 0x00561850  sub_561850  this=-  sig=ida-proto ====
void sub_561850()
{
  dbl_ABDC20 = Math::ArcTan((double)(2 * dword_ABDE88) / dbl_ABD488); /*0x561872*/
}



// ==== 0x00561880  sub_561880  this=-  sig=ida-proto ====
__int64 sub_561880()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDE88) + 0.5); /*0x56189b*/
  dword_ABDD98 = result; /*0x5618a0*/
  return result; /*0x5618a6*/
}



// ==== 0x005618B0  sub_5618B0  this=-  sig=ida-proto ====
int sub_5618B0()
{
  dword_ABD480 = 0; /*0x5618b2*/
  return 0; /*0x5618be*/
}



// ==== 0x005618C0  sub_5618C0  this=-  sig=ida-proto ====
int sub_5618C0()
{
  dword_ABDC10 = 0; /*0x5618c2*/
  dword_ABDC14 = 0; /*0x5618c7*/
  dword_ABDC18 = 0; /*0x5618cc*/
  return 0; /*0x5618d1*/
}



// ==== 0x005618E0  sub_5618E0  this=-  sig=ida-proto ====
int sub_5618E0()
{
  dword_ABDC48 = 0; /*0x5618e5*/
  dword_ABDC40 = 128; /*0x5618ef*/
  dword_ABDC44 = 128; /*0x5618f4*/
  return 128; /*0x5618f9*/
}



// ==== 0x00561900  j_CoordinateTables_Init  this=-  sig=ida-proto ====
// attributes: thunk
int *j_CoordinateTables_Init()
{
  return CoordinateTables::Init();
}



// ==== 0x00561910  CoordinateTables::Init  this=CoordinateTables  sig=ida-proto ====
int *CoordinateTables_Init()
{
  int *result; // eax
  int v1; // [esp+10h] [ebp-4h] BYREF

  dword_ABD490[0] = 0; /*0x561949*/
  dword_ABD494 = -65535; /*0x56195c*/
  dword_ABD498 = -65536; /*0x561970*/
  dword_ABD49C = -1; /*0x561984*/
  dword_ABD4A0 = 0xFFFF; /*0x561997*/
  dword_ABD4A4 = 1; /*0x5619ab*/
  dword_ABD4B0 = 65537; /*0x5619bf*/
  dword_ABD4A8 = 0x1FFFF; /*0x5619ca*/
  dword_ABD4AC = 0x10000; /*0x5619dd*/
  dword_ABD4B4 = -65537; /*0x5619f1*/
  dword_ABD4B8 = -131072; /*0x561a04*/
  dword_ABD4C0 = -2; /*0x561a18*/
  dword_ABD4BC = -131071; /*0x561a23*/
  dword_ABD4C4 = -65534; /*0x561a36*/
  dword_ABD4C8 = 65534; /*0x561a49*/
  dword_ABD4CC = 2; /*0x561a5c*/
  dword_ABD4D0 = 131070; /*0x561a6f*/
  dword_ABD4D4 = 65538; /*0x561a82*/
  dword_ABD4D8 = 196607; /*0x561a9a*/
  dword_ABD4DC = 0x20000; /*0x561aad*/
  dword_ABD4E0 = 131073; /*0x561ac0*/
  dword_ABD4E4 = -131073; /*0x561ad3*/
  dword_ABD4E8 = -196608; /*0x561ae7*/
  dword_ABD4EC = -196607; /*0x561afb*/
  dword_ABD4F0 = -65538; /*0x561b1d*/
  dword_ABD4F4 = -131070; /*0x561b23*/
  dword_ABD4F8 = -3; /*0x561b3c*/
  dword_ABD4FC = -65533; /*0x561b55*/
  dword_ABD500 = 65533; /*0x561b69*/
  dword_ABD504 = 3; /*0x561b7d*/
  dword_ABD508 = 131069; /*0x561b91*/
  dword_ABD50C = 65539; /*0x561ba7*/
  dword_ABD510 = 196606; /*0x561bbb*/
  dword_ABD514 = 131074; /*0x561bcf*/
  dword_ABD518 = 0x3FFFF; /*0x561be3*/
  dword_ABD51C = 196608; /*0x561bf7*/
  dword_ABD520 = 196609; /*0x561c0b*/
  dword_ABD524 = -196609; /*0x561c1c*/
  dword_ABD528 = -262144; /*0x561c32*/
  dword_ABD52C = -262143; /*0x561c48*/
  dword_ABD530 = -131075; /*0x561c5c*/
  dword_ABD534 = -131074; /*0x561c72*/
  dword_ABD538 = -196606; /*0x561c86*/
  dword_ABD53C = -196605; /*0x561c9a*/
  dword_ABD540 = -65539; /*0x561cb0*/
  dword_ABD544 = -131069; /*0x561cc6*/
  dword_ABD548 = -4; /*0x561cdc*/
  dword_ABD54C = -65532; /*0x561cf2*/
  dword_ABD550 = 65532; /*0x561d08*/
  dword_ABD554 = 4; /*0x561d1e*/
  dword_ABD558 = 131068; /*0x561d34*/
  dword_ABD55C = 65540; /*0x561d4a*/
  dword_ABD560 = 196605; /*0x561d5e*/
  dword_ABD564 = 131075; /*0x561d72*/
  dword_ABD568 = 262141; /*0x561d86*/
  dword_ABD56C = 262142; /*0x561d9c*/
  dword_ABD570 = 196610; /*0x561db0*/
  dword_ABD574 = 196611; /*0x561dc4*/
  dword_ABD578 = 327679; /*0x561ddf*/
  dword_ABD57C = 0x40000; /*0x561df5*/
  dword_ABD580 = 262145; /*0x561e0b*/
  dword_ABD584 = -262145; /*0x561e21*/
  dword_ABD588 = -327680; /*0x561e37*/
  dword_ABD58C = -327679; /*0x561e4d*/
  dword_ABD590 = -196611; /*0x561e65*/
  dword_ABD594 = -196610; /*0x561e7b*/
  dword_ABD598 = -262142; /*0x561e91*/
  dword_ABD59C = -262141; /*0x561ea9*/
  dword_ABD5A0 = -131076; /*0x561ebf*/
  dword_ABD5A4 = -196604; /*0x561ed5*/
  dword_ABD5A8 = -65540; /*0x561eed*/
  dword_ABD5AC = -131068; /*0x561f05*/
  dword_ABD5B0 = -5; /*0x561f1b*/
  dword_ABD5B4 = -65531; /*0x561f31*/
  dword_ABD5B8 = 65531; /*0x561f47*/
  dword_ABD5BC = 5; /*0x561f5d*/
  dword_ABD5C0 = 131067; /*0x561f73*/
  dword_ABD5C4 = 65541; /*0x561f89*/
  dword_ABD5C8 = 196604; /*0x561f98*/
  dword_ABD5CC = 131076; /*0x561fae*/
  dword_ABD5D0 = 262140; /*0x561fc4*/
  dword_ABD5D4 = 196612; /*0x561fda*/
  dword_ABD5D8 = 327677; /*0x561ff0*/
  dword_ABD5DC = 327678; /*0x562008*/
  dword_ABD5E0 = 262146; /*0x56201e*/
  dword_ABD5E4 = 262147; /*0x562034*/
  dword_ABD5E8 = 393215; /*0x56204a*/
  dword_ABD5EC = 327680; /*0x562060*/
  dword_ABD5F0 = 327681; /*0x562076*/
  dword_ABD5F4 = -327681; /*0x56208c*/
  dword_ABD5F8 = -393216; /*0x5620a2*/
  dword_ABD5FC = -393215; /*0x5620b8*/
  dword_ABD600 = -262147; /*0x5620ce*/
  dword_ABD604 = -262146; /*0x5620e6*/
  dword_ABD608 = -327678; /*0x5620fc*/
  dword_ABD60C = -327677; /*0x562112*/
  dword_ABD610 = -196612; /*0x562132*/
  dword_ABD614 = -262140; /*0x56214a*/
  dword_ABD618 = -131077; /*0x562159*/
  dword_ABD61C = -196603; /*0x56216f*/
  dword_ABD620 = -65541; /*0x562187*/
  dword_ABD624 = -131067; /*0x56219f*/
  dword_ABD628 = -6; /*0x5621b5*/
  dword_ABD62C = -65530; /*0x5621cb*/
  dword_ABD630 = 65530; /*0x5621e1*/
  dword_ABD634 = 6; /*0x5621f7*/
  dword_ABD638 = 131066; /*0x56220d*/
  dword_ABD63C = 65542; /*0x562223*/
  dword_ABD640 = 196603; /*0x562239*/
  dword_ABD644 = 131077; /*0x56224f*/
  dword_ABD648 = 262139; /*0x562265*/
  dword_ABD64C = 196613; /*0x56227b*/
  dword_ABD650 = 327676; /*0x562293*/
  dword_ABD654 = 262148; /*0x5622b1*/
  dword_ABD658 = 393213; /*0x5622c9*/
  dword_ABD65C = 393214; /*0x5622df*/
  dword_ABD660 = 327682; /*0x5622f5*/
  dword_ABD664 = 327683; /*0x56230b*/
  dword_ABD668 = 458751; /*0x56231c*/
  dword_ABD66C = 393216; /*0x562332*/
  dword_ABD670 = 393217; /*0x562348*/
  dword_ABD674 = -393217; /*0x56235e*/
  dword_ABD678 = -458752; /*0x562374*/
  dword_ABD67C = -458751; /*0x56238a*/
  dword_ABD680 = -327683; /*0x5623a0*/
  dword_ABD684 = -327682; /*0x5623b8*/
  dword_ABD688 = -393214; /*0x5623ce*/
  dword_ABD68C = -393213; /*0x5623e4*/
  dword_ABD690 = -262149; /*0x562404*/
  dword_ABD694 = -262148; /*0x56241c*/
  dword_ABD698 = -327676; /*0x562434*/
  dword_ABD69C = -327675; /*0x56244c*/
  dword_ABD6A0 = -196613; /*0x562464*/
  dword_ABD6A4 = -262139; /*0x56247c*/
  dword_ABD6A8 = -131078; /*0x562492*/
  dword_ABD6AC = -196602; /*0x5624a8*/
  dword_ABD6B0 = -65542; /*0x5624c0*/
  dword_ABD6B4 = -131066; /*0x5624d8*/
  dword_ABD6B8 = -7; /*0x5624e7*/
  dword_ABD6BC = -65529; /*0x5624fd*/
  dword_ABD6C0 = 65529; /*0x562513*/
  dword_ABD6C4 = 7; /*0x562529*/
  dword_ABD6C8 = 131065; /*0x56253f*/
  dword_ABD6CC = 65543; /*0x562555*/
  dword_ABD6D0 = 196602; /*0x56256b*/
  dword_ABD6D4 = 131078; /*0x562581*/
  dword_ABD6D8 = 262138; /*0x562597*/
  dword_ABD6DC = 196614; /*0x5625ad*/
  dword_ABD6E0 = 327675; /*0x5625c5*/
  dword_ABD6E4 = 262149; /*0x5625dd*/
  dword_ABD6E8 = 393211; /*0x5625f5*/
  dword_ABD6EC = 393212; /*0x56260d*/
  dword_ABD6F0 = 327684; /*0x562625*/
  dword_ABD6F4 = 327685; /*0x562643*/
  dword_ABD6F8 = 458749; /*0x56265b*/
  dword_ABD6FC = 458750; /*0x562671*/
  dword_ABD700 = 393218; /*0x562687*/
  dword_ABD704 = 393219; /*0x56269d*/
  dword_ABD708 = 0x7FFFF; /*0x5626ae*/
  dword_ABD70C = 458752; /*0x5626c4*/
  dword_ABD710 = 458753; /*0x5626da*/
  dword_ABD714 = -458753; /*0x5626f0*/
  dword_ABD718 = -524288; /*0x562706*/
  dword_ABD71C = -524287; /*0x56271c*/
  dword_ABD720 = -393219; /*0x562732*/
  dword_ABD724 = -393218; /*0x56274a*/
  dword_ABD728 = -458750; /*0x562760*/
  dword_ABD72C = -458749; /*0x562776*/
  dword_ABD730 = -327685; /*0x56278e*/
  dword_ABD734 = -327684; /*0x5627a6*/
  dword_ABD738 = -393212; /*0x5627be*/
  dword_ABD73C = -393211; /*0x5627d6*/
  dword_ABD740 = -262150; /*0x5627ee*/
  dword_ABD744 = -327674; /*0x562806*/
  dword_ABD748 = -196614; /*0x56281e*/
  dword_ABD74C = -262138; /*0x562836*/
  dword_ABD750 = -131079; /*0x56284c*/
  dword_ABD754 = -196601; /*0x562862*/
  dword_ABD758 = -65543; /*0x562881*/
  dword_ABD75C = -131065; /*0x562899*/
  dword_ABD760 = -8; /*0x5628af*/
  dword_ABD764 = -65528; /*0x5628c5*/
  dword_ABD768 = 65528; /*0x5628db*/
  dword_ABD76C = 8; /*0x5628f1*/
  dword_ABD770 = 131064; /*0x562907*/
  dword_ABD774 = 65544; /*0x56291d*/
  dword_ABD778 = 196601; /*0x562933*/
  dword_ABD77C = 131079; /*0x562949*/
  dword_ABD780 = 262137; /*0x56295f*/
  dword_ABD784 = 196615; /*0x562975*/
  dword_ABD788 = 327674; /*0x56298d*/
  dword_ABD78C = 262150; /*0x5629a5*/
  dword_ABD790 = 393210; /*0x5629bd*/
  dword_ABD794 = 327686; /*0x5629d5*/
  dword_ABD798 = 458747; /*0x5629ed*/
  dword_ABD79C = 458748; /*0x562a05*/
  dword_ABD7A0 = 393220; /*0x562a1d*/
  dword_ABD7A4 = 393221; /*0x562a33*/
  dword_ABD7A8 = 524285; /*0x562a44*/
  dword_ABD7AC = 524286; /*0x562a5c*/
  dword_ABD7B0 = 458754; /*0x562a72*/
  dword_ABD7B4 = 458755; /*0x562a88*/
  dword_ABD7B8 = 589823; /*0x562a9e*/
  dword_ABD7BC = 0x80000; /*0x562ab4*/
  dword_ABD7C0 = 524289; /*0x562aca*/
  dword_ABD7C4 = -524289; /*0x562ae0*/
  dword_ABD7C8 = -589824; /*0x562af6*/
  dword_ABD7CC = -589823; /*0x562b0c*/
  dword_ABD7D0 = -458755; /*0x562b22*/
  dword_ABD7D4 = -458754; /*0x562b3a*/
  dword_ABD7D8 = -524286; /*0x562b50*/
  dword_ABD7DC = -524285; /*0x562b66*/
  dword_ABD7E0 = -393221; /*0x562b7e*/
  dword_ABD7E4 = -393220; /*0x562b96*/
  dword_ABD7E8 = -458748; /*0x562bae*/
  dword_ABD7EC = -458747; /*0x562bc6*/
  dword_ABD7F0 = -327686; /*0x562be6*/
  dword_ABD7F4 = -393210; /*0x562bfe*/
  dword_ABD7F8 = -262151; /*0x562c0f*/
  dword_ABD7FC = -327673; /*0x562c27*/
  dword_ABD800 = -196615; /*0x562c3f*/
  dword_ABD804 = -262137; /*0x562c57*/
  dword_ABD808 = -131080; /*0x562c6d*/
  dword_ABD80C = -196600; /*0x562c83*/
  dword_ABD810 = -65544; /*0x562c9b*/
  dword_ABD814 = -131064; /*0x562cb3*/
  dword_ABD818 = -9; /*0x562cc9*/
  dword_ABD81C = -65527; /*0x562cdf*/
  dword_ABD820 = 65527; /*0x562cf5*/
  dword_ABD824 = 9; /*0x562d0b*/
  dword_ABD828 = 131063; /*0x562d21*/
  dword_ABD82C = 65545; /*0x562d37*/
  dword_ABD830 = 196600; /*0x562d4d*/
  dword_ABD834 = 131080; /*0x562d63*/
  dword_ABD838 = 262136; /*0x562d79*/
  dword_ABD83C = 196616; /*0x562d8f*/
  dword_ABD840 = 327673; /*0x562da7*/
  dword_ABD844 = 262151; /*0x562dbf*/
  dword_ABD848 = 393209; /*0x562dd7*/
  dword_ABD84C = 327687; /*0x562df6*/
  dword_ABD850 = 458746; /*0x562e07*/
  dword_ABD854 = 393222; /*0x562e27*/
  dword_ABD858 = 524283; /*0x562e3f*/
  dword_ABD85C = 524284; /*0x562e57*/
  dword_ABD860 = 458756; /*0x562e6f*/
  dword_ABD864 = 458757; /*0x562e85*/
  dword_ABD868 = 589821; /*0x562e9d*/
  dword_ABD86C = 589822; /*0x562eb3*/
  dword_ABD870 = 524290; /*0x562ec9*/
  dword_ABD874 = 524291; /*0x562edf*/
  dword_ABD878 = 655359; /*0x562ef5*/
  dword_ABD87C = 589824; /*0x562f0b*/
  dword_ABD880 = 589825; /*0x562f21*/
  dword_ABD884 = -589825; /*0x562f37*/
  dword_ABD888 = -655360; /*0x562f4d*/
  dword_ABD88C = -655359; /*0x562f63*/
  dword_ABD890 = -524291; /*0x562f7b*/
  dword_ABD894 = -524290; /*0x562f91*/
  dword_ABD898 = -589822; /*0x562fa2*/
  dword_ABD89C = -589821; /*0x562fbf*/
  dword_ABD8A0 = -458757; /*0x562fd7*/
  dword_ABD8A4 = -458756; /*0x562fef*/
  dword_ABD8A8 = -524284; /*0x563007*/
  dword_ABD8AC = -524283; /*0x563018*/
  dword_ABD8B0 = -393223; /*0x563038*/
  dword_ABD8B4 = -393222; /*0x563050*/
  dword_ABD8B8 = -458746; /*0x563068*/
  dword_ABD8BC = -458745; /*0x563080*/
  dword_ABD8C0 = -327687; /*0x563098*/
  dword_ABD8C4 = -393209; /*0x5630b0*/
  dword_ABD8C8 = -262152; /*0x5630c8*/
  dword_ABD8CC = -327672; /*0x5630e0*/
  dword_ABD8D0 = -196616; /*0x5630f8*/
  dword_ABD8D4 = -262136; /*0x563110*/
  dword_ABD8D8 = -131081; /*0x563124*/
  dword_ABD8DC = -196599; /*0x563138*/
  dword_ABD8E0 = -65545; /*0x56314f*/
  dword_ABD8E4 = -131063; /*0x563164*/
  dword_ABD8E8 = -10; /*0x563179*/
  dword_ABD8EC = -65526; /*0x56318e*/
  dword_ABD8F0 = 65526; /*0x5631a3*/
  dword_ABD8F4 = 10; /*0x5631b8*/
  dword_ABD8F8 = 131062; /*0x5631cd*/
  dword_ABD8FC = 65546; /*0x5631e2*/
  dword_ABD900 = 196599; /*0x563205*/
  v1 = 196617; /*0x56320a*/
  dword_ABD904 = 131081; /*0x56321a*/
  dword_ABD90C = 196617; /*0x563230*/
  dword_ABD908 = 262135; /*0x56323c*/
  dword_ABD910 = *(_DWORD *)CellStruct::Set(&v1, -8, 4); /*0x563250*/
  dword_ABD914 = *(_DWORD *)CellStruct::Set(&v1, 8, 4); /*0x563265*/
  dword_ABD918 = *(_DWORD *)CellStruct::Set(&v1, -8, 5); /*0x563273*/
  dword_ABD91C = *(_DWORD *)CellStruct::Set(&v1, 8, 5); /*0x56328e*/
  dword_ABD920 = *(_DWORD *)CellStruct::Set(&v1, -7, 6); /*0x5632a3*/
  dword_ABD924 = *(_DWORD *)CellStruct::Set(&v1, 7, 6); /*0x5632b1*/
  dword_ABD928 = *(_DWORD *)CellStruct::Set(&v1, -7, 7); /*0x5632c6*/
  dword_ABD92C = *(_DWORD *)CellStruct::Set(&v1, -6, 7); /*0x5632e1*/
  dword_ABD930 = *(_DWORD *)CellStruct::Set(&v1, 6, 7); /*0x5632ef*/
  dword_ABD934 = *(_DWORD *)CellStruct::Set(&v1, 7, 7); /*0x56330a*/
  dword_ABD938 = *(_DWORD *)CellStruct::Set(&v1, -5, 8); /*0x56331f*/
  dword_ABD93C = *(_DWORD *)CellStruct::Set(&v1, -4, 8); /*0x56332d*/
  dword_ABD940 = *(_DWORD *)CellStruct::Set(&v1, 4, 8); /*0x563348*/
  dword_ABD944 = *(_DWORD *)CellStruct::Set(&v1, 5, 8); /*0x56335d*/
  dword_ABD948 = *(_DWORD *)CellStruct::Set(&v1, -3, 9); /*0x56336b*/
  dword_ABD94C = *(_DWORD *)CellStruct::Set(&v1, -2, 9); /*0x563386*/
  dword_ABD950 = *(_DWORD *)CellStruct::Set(&v1, 2, 9); /*0x56339a*/
  dword_ABD954 = *(_DWORD *)CellStruct::Set(&v1, 3, 9); /*0x5633a8*/
  dword_ABD958 = *(_DWORD *)CellStruct::Set(&v1, -1, 10); /*0x5633c1*/
  dword_ABD95C = *(_DWORD *)CellStruct::Set(&v1, 0, 10); /*0x5633d5*/
  dword_ABD960 = *(_DWORD *)CellStruct::Set(&v1, 1, 10); /*0x5633e1*/
  dword_ABD964 = *(_DWORD *)CellStruct::Set(&v1, 0, 11); /*0x5633fc*/
  dword_ABD968 = *(_DWORD *)CellStruct::Set(&v1, 0, -11); /*0x563410*/
  dword_ABD96C = *(_DWORD *)CellStruct::Set(&v1, -1, 11); /*0x56341e*/
  dword_ABD970 = *(_DWORD *)CellStruct::Set(&v1, 1, 11); /*0x563437*/
  dword_ABD974 = *(_DWORD *)CellStruct::Set(&v1, -1, -11); /*0x56344b*/
  dword_ABD978 = *(_DWORD *)CellStruct::Set(&v1, 1, -11); /*0x563459*/
  dword_ABD97C = *(_DWORD *)CellStruct::Set(&v1, -2, 11); /*0x563474*/
  dword_ABD980 = *(_DWORD *)CellStruct::Set(&v1, 2, 11); /*0x563489*/
  dword_ABD984 = *(_DWORD *)CellStruct::Set(&v1, -2, -11); /*0x563497*/
  dword_ABD988 = *(_DWORD *)CellStruct::Set(&v1, 2, -11); /*0x5634b2*/
  dword_ABD98C = *(_DWORD *)CellStruct::Set(&v1, -3, 11); /*0x5634c6*/
  dword_ABD990 = *(_DWORD *)CellStruct::Set(&v1, 3, 11); /*0x5634d4*/
  dword_ABD994 = *(_DWORD *)CellStruct::Set(&v1, -3, -11); /*0x5634e9*/
  dword_ABD998 = *(_DWORD *)CellStruct::Set(&v1, -3, 11); /*0x563504*/
  dword_ABD99C = *(_DWORD *)CellStruct::Set(&v1, -4, 9); /*0x563512*/
  dword_ABD9A0 = *(_DWORD *)CellStruct::Set(&v1, 4, 9); /*0x56352d*/
  dword_ABD9A4 = *(_DWORD *)CellStruct::Set(&v1, -4, -9); /*0x563542*/
  dword_ABD9A8 = *(_DWORD *)CellStruct::Set(&v1, 4, -9); /*0x563550*/
  dword_ABD9AC = *(_DWORD *)CellStruct::Set(&v1, -5, 9); /*0x56356b*/
  dword_ABD9B0 = *(_DWORD *)CellStruct::Set(&v1, 5, 9); /*0x563580*/
  dword_ABD9B4 = *(_DWORD *)CellStruct::Set(&v1, -5, -9); /*0x56358e*/
  dword_ABD9B8 = *(_DWORD *)CellStruct::Set(&v1, 5, -9); /*0x5635a9*/
  dword_ABD9BC = *(_DWORD *)CellStruct::Set(&v1, -6, 8); /*0x5635be*/
  dword_ABD9C0 = *(_DWORD *)CellStruct::Set(&v1, 6, 8); /*0x5635cc*/
  dword_ABD9C4 = *(_DWORD *)CellStruct::Set(&v1, -6, -8); /*0x5635e7*/
  dword_ABD9C8 = *(_DWORD *)CellStruct::Set(&v1, 6, -8); /*0x5635fc*/
  dword_ABD9CC = *(_DWORD *)CellStruct::Set(&v1, -7, 8); /*0x563608*/
  dword_ABD9D0 = *(_DWORD *)CellStruct::Set(&v1, 7, 8); /*0x563625*/
  dword_ABD9D4 = *(_DWORD *)CellStruct::Set(&v1, -7, -8); /*0x56363a*/
  dword_ABD9D8 = *(_DWORD *)CellStruct::Set(&v1, 7, -8); /*0x563648*/
  dword_ABD9DC = *(_DWORD *)CellStruct::Set(&v1, -8, 7); /*0x563663*/
  dword_ABD9E0 = *(_DWORD *)CellStruct::Set(&v1, 8, 7); /*0x563678*/
  dword_ABD9E4 = *(_DWORD *)CellStruct::Set(&v1, -8, -7); /*0x563686*/
  dword_ABD9E8 = *(_DWORD *)CellStruct::Set(&v1, 8, -7); /*0x5636a1*/
  dword_ABD9EC = *(_DWORD *)CellStruct::Set(&v1, -8, 6); /*0x5636b6*/
  dword_ABD9F0 = *(_DWORD *)CellStruct::Set(&v1, 8, 6); /*0x5636c4*/
  dword_ABD9F4 = *(_DWORD *)CellStruct::Set(&v1, -8, -6); /*0x5636df*/
  dword_ABD9F8 = *(_DWORD *)CellStruct::Set(&v1, 8, -6); /*0x5636f4*/
  dword_ABD9FC = *(_DWORD *)CellStruct::Set(&v1, -9, 5); /*0x563702*/
  dword_ABDA00 = *(_DWORD *)CellStruct::Set(&v1, 9, 5); /*0x563717*/
  dword_ABDA04 = *(_DWORD *)CellStruct::Set(&v1, -9, -5); /*0x563732*/
  dword_ABDA08 = *(_DWORD *)CellStruct::Set(&v1, 9, -5); /*0x563740*/
  dword_ABDA0C = *(_DWORD *)CellStruct::Set(&v1, -9, 4); /*0x56375b*/
  dword_ABDA10 = *(_DWORD *)CellStruct::Set(&v1, 9, 4); /*0x563770*/
  dword_ABDA14 = *(_DWORD *)CellStruct::Set(&v1, -9, -4); /*0x56377e*/
  dword_ABDA18 = *(_DWORD *)CellStruct::Set(&v1, 9, -4); /*0x563798*/
  dword_ABDA1C = *(_DWORD *)CellStruct::Set(&v1, -10, 3); /*0x5637ac*/
  dword_ABDA20 = *(_DWORD *)CellStruct::Set(&v1, 10, 3); /*0x5637ba*/
  dword_ABDA24 = *(_DWORD *)CellStruct::Set(&v1, -10, -3); /*0x5637d5*/
  dword_ABDA28 = *(_DWORD *)CellStruct::Set(&v1, 10, -3); /*0x5637ea*/
  dword_ABDA2C = *(_DWORD *)CellStruct::Set(&v1, -10, 2); /*0x5637f8*/
  dword_ABDA30 = *(_DWORD *)CellStruct::Set(&v1, 10, 2); /*0x563813*/
  dword_ABDA34 = *(_DWORD *)CellStruct::Set(&v1, -10, -2); /*0x563828*/
  dword_ABDA38 = *(_DWORD *)CellStruct::Set(&v1, 10, -2); /*0x563834*/
  dword_ABDA3C = *(_DWORD *)CellStruct::Set(&v1, -11, 1); /*0x56384f*/
  dword_ABDA40 = *(_DWORD *)CellStruct::Set(&v1, 11, 1); /*0x563863*/
  dword_ABDA44 = *(_DWORD *)CellStruct::Set(&v1, -11, -1); /*0x563870*/
  dword_ABDA48 = *(_DWORD *)CellStruct::Set(&v1, 11, -1); /*0x56388a*/
  dword_ABDA4C = *(_DWORD *)CellStruct::Set(&v1, 11, 0); /*0x56389e*/
  result = (int *)CellStruct::Set(&v1, -11, 0); /*0x5638a3*/
  dword_ABDA50 = *result; /*0x5638ad*/
  return result; /*0x5638aa*/
}


// ==== 0x00565060  COMStub_565060  this=-  sig=ida-proto ====
int sub_565060()
{
  CellClass::Construct(unk_ABDC50); /*0x565065*/
  return atexit(unknown_libname_22); /*0x565075*/
}



// ==== 0x00565080  unknown_libname_22  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_22()
{
  CellClass::DTOR(&unk_ABDC50); /*0x565085*/
}



// ==== 0x00565090  MapClass::RenderMapPreview  this=MapClass  sig=csp ====
int __thiscall sub_565090(int this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  _WORD *v4; // eax
  int v5; // ecx

  RadarClass::initRadarSurface((_DWORD *)this); /*0x565096*/
  RadarClass::drawRadarTerrain((_DWORD *)(this + 80), 0, 0); /*0x5650a4*/
  *(_DWORD *)(this + 80) = &DynamicVectorClass<ZoneConnectionClass>::`vftable'; /*0x5650a9*/
  *(_DWORD *)(this + 100) = 10; /*0x5650af*/
  *(_DWORD *)(this + 96) = 0; /*0x5650b6*/
  v2 = (_DWORD *)(this + 140); /*0x5650b9*/
  v3 = 3; /*0x5650bf*/
  do /*0x5650e1*/
  {
    RadarClass::RenderJammerRadius(v2, 0, 0); /*0x5650c8*/
    *v2 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable'; /*0x5650cd*/
    v2[5] = 10; /*0x5650d3*/
    v2[4] = 0; /*0x5650da*/
    v2 += 6; /*0x5650dd*/
    --v3; /*0x5650e0*/
  }
  while ( v3 ); /*0x5650e1*/
  VectorClass::CellConstructor((_DWORD *)(this + 212), 0, 0); /*0x5650ed*/
  *(_DWORD *)(this + 212) = &DynamicVectorClass<Cell>::`vftable'; /*0x5650f9*/
  *(_DWORD *)(this + 232) = 10; /*0x5650ff*/
  *(_DWORD *)(this + 228) = 0; /*0x565102*/
  *(_DWORD *)(this + 316) = 0; /*0x565105*/
  *(_DWORD *)(this + 320) = 0; /*0x56510b*/
  *(_BYTE *)(this + 324) = 1; /*0x565111*/
  *(_BYTE *)(this + 325) = 0; /*0x565117*/
  *(_DWORD *)(this + 312) = &VectorClass<CellClass *>::`vftable'; /*0x56511d*/
  v4 = (_WORD *)(this + 356); /*0x565127*/
  v5 = 256; /*0x56512d*/
  do /*0x56513d*/
  {
    *v4 = 0; /*0x565132*/
    v4[1] = 0; /*0x565135*/
    v4 += 8; /*0x565139*/
    --v5; /*0x56513c*/
  }
  while ( v5 ); /*0x56513d*/
  *(_DWORD *)(this + 4448) = 0; /*0x56513f*/
  *(_DWORD *)(this + 4452) = 0; /*0x565145*/
  *(_BYTE *)(this + 4456) = 1; /*0x56514b*/
  *(_BYTE *)(this + 4457) = 0; /*0x565151*/
  *(_DWORD *)(this + 4444) = &DynamicVectorClass<Cell>::`vftable'; /*0x565157*/
  *(_DWORD *)(this + 4464) = 10; /*0x565161*/
  *(_DWORD *)(this + 4460) = 0; /*0x565167*/
  *(_DWORD *)this = &MapClass::`vftable'; /*0x56516d*/
  *(_DWORD *)(this + 328) = 13; /*0x565173*/
  return this; /*0x56517f*/
}



// ==== 0x00565190  RadarClass::Render  this=MapClass  sig=csp ====
char *__thiscall sub_565190(char *this, int a2)
{
  _DWORD *v3; // edi
  _DWORD *v4; // edi
  int v5; // ebp
  _WORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  char *v9; // edi
  int v11; // [esp+10h] [ebp-4h]

  v3 = this + 80; /*0x565199*/
  *(_DWORD *)this = &off_7EA6FC; /*0x5651a0*/
  this->q010 = 0; /*0x5651a6*/
  this->q014 = 0; /*0x5651a9*/
  RadarClass::drawRadarTerrain((_DWORD *)this + 20, 0, 0); /*0x5651ac*/
  *v3 = &DynamicVectorClass<ZoneConnectionClass>::`vftable'; /*0x5651b1*/
  v3[5] = 10; /*0x5651b7*/
  v3[4] = 0; /*0x5651be*/
  v4 = this + 140; /*0x5651c1*/
  v5 = 3; /*0x5651c7*/
  do /*0x5651e9*/
  {
    RadarClass::RenderJammerRadius(v4, 0, 0); /*0x5651d0*/
    *v4 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable'; /*0x5651d5*/
    v4[5] = 10; /*0x5651db*/
    v4[4] = 0; /*0x5651e2*/
    v4 += 6; /*0x5651e5*/
    --v5; /*0x5651e8*/
  }
  while ( v5 ); /*0x5651e9*/
  VectorClass::CellConstructor((_DWORD *)this + 53, 0, 0); /*0x5651f5*/
  this->q0D4 = &DynamicVectorClass<Cell>::`vftable'; /*0x5651ff*/
  this->q03A = 10; /*0x565205*/
  this->q0E4 = 0; /*0x565208*/
  this->MaxLevel = &VectorClass<CellClass *>::`vftable'; /*0x56520b*/
  v6 = this + 356; /*0x565215*/
  v7 = 256; /*0x56521b*/
  do /*0x56522b*/
  {
    *v6 = 0; /*0x565220*/
    v6[1] = 0; /*0x565223*/
    v6 += 8; /*0x565227*/
    --v7; /*0x56522a*/
  }
  while ( v7 ); /*0x56522b*/
  this->q1160 = 0; /*0x56522d*/
  this->q1164 = 0; /*0x565233*/
  this->q1168 = 1; /*0x565239*/
  this->q1169 = 0; /*0x565240*/
  this->q115C = &DynamicVectorClass<Cell>::`vftable'; /*0x565246*/
  this->q1170 = 10; /*0x565250*/
  this->q116C = 0; /*0x565256*/
  *(_DWORD *)this = &MapClass::`vftable'; /*0x565266*/
  v8 = this + 128; /*0x56526c*/
  memset(this + 24, 0, 0x34u); /*0x565272*/
  v9 = this + 140; /*0x565276*/
  v11 = 3; /*0x56527c*/
  this->CapacityIncrement = 0; /*0x565284*/
  this->LevelAndPassability = 0; /*0x565286*/
  this->ValidMapCellCount = 0; /*0x565289*/
  do /*0x5652a5*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v9 + 12))(v9); /*0x565290*/
    *v8++ = 0; /*0x565297*/
    v9 += 24; /*0x56529d*/
    --v11; /*0x5652a1*/
  }
  while ( v11 ); /*0x5652a5*/
  this->q014 = 0; /*0x5652a7*/
  return this; /*0x5652ac*/
}



// ==== 0x005652C0  MapClass::Destruct  this=MapClass  sig=csp ====
void __thiscall MapClass_Destructor(char *this)
{
  _DWORD *v2; // edi
  _DWORD **v3; // ebp
  _DWORD *v4; // edi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  char *v8; // edi
  int v9; // ebp
  void *v10; // ecx
  void *v11; // eax
  int v12; // [esp+8h] [ebp-4h]

  *(_DWORD *)this = &MapClass::`vftable'; /*0x5652c5*/
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->q01A ) /*0x5652df*/
  {
    __3_YAXPAX_Z(*((void **)this + 26)); /*0x5652e9*/
    this->q01A = 0; /*0x5652f1*/
  }
  v2 = (_DWORD *)this->q014; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x565307*/
    __3_YAXPAX_Z(v2); /*0x56530a*/
    this->q014 = 0; /*0x565312*/
  }
  if ( this->q01C ) /*0x565315*/
  {
    __3_YAXPAX_Z(*((void **)this + 28)); /*0x56531d*/
    this->q01C = 0; /*0x565325*/
  }
  v3 = (_DWORD **)(this + 128); /*0x565328*/
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x565347*/
      __3_YAXPAX_Z(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  v5 = (void *)this->q1160; /*0x565363*/
  this->q115C = &VectorClass<Cell>::`vftable'; /*0x565370*/
  if ( v5 && this->q1169 ) /*0x565378*/
  {
    __3_YAXPAX_Z(v5); /*0x565381*/
    this->q1160 = 0; /*0x565389*/
  }
  this->q1169 = 0; /*0x56538f*/
  this->q1164 = 0; /*0x565395*/
  v6 = (void *)this->q04F; /*0x56539b*/
  this->MaxLevel = &VectorClass<CellClass *>::`vftable'; /*0x5653a1*/
  if ( v6 && this->q145 ) /*0x5653af*/
  {
    __3_YAXPAX_Z(v6); /*0x5653b8*/
    this->q04F = 0; /*0x5653c0*/
  }
  this->q145 = 0; /*0x5653c6*/
  this->ptr_50 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
  this->q0D4 = &VectorClass<Cell>::`vftable'; /*0x5653d8*/
  if ( v7 && this->q0E1 ) /*0x5653e2*/
  {
    __3_YAXPAX_Z(v7); /*0x5653eb*/
    this->q0D8 = 0; /*0x5653f3*/
  }
  this->q0E1 = 0; /*0x5653f9*/
  this->q0DC = 0; /*0x5653ff*/
  v8 = this + 212; /*0x565405*/
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
    v10 = (void *)*((_DWORD *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(_DWORD *)v8 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x565418*/
    if ( v10 && v8[13] ) /*0x565420*/
    {
      SubzoneConnectionVector::Destruct(v10, 3); /*0x56542b*/
      *((_DWORD *)v8 + 1) = 0; /*0x565430*/
    }
    --v9; /*0x565433*/
    v8[13] = 0; /*0x565434*/
    *((_DWORD *)v8 + 2) = 0; /*0x565437*/
  }
  while ( v9 ); /*0x56543a*/
  v11 = (void *)this->q054; /*0x56543c*/
  this->q014 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x565442*/
  if ( v11 && this->q05D ) /*0x56544c*/
  {
    __3_YAXPAX_Z(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  this->q05D = 0; /*0x56545d*/
  this->Count = 0; /*0x565460*/
  *(_DWORD *)this = &off_7EA6FC; /*0x565463*/
}



// ==== 0x005654A0  HexCoord::Convert  this=HexCoord  sig=csp ====
_DWORD *__thiscall HexCoord::Convert(HexCoord *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx

  v3 = *((_DWORD *)this + 63) + *a3; /*0x5654ba*/
  v4 = *((_DWORD *)this + 64) + a3[1]; /*0x5654bf*/
  v5 = v4 + 1; /*0x5654c2*/
  v6 = (v4 >> 1) + *((_DWORD *)this + 61); /*0x5654c9*/
  *a2 = v3 + (v5 >> 1); /*0x5654d3*/
  a2[1] = v6 - v3; /*0x5654d5*/
  return a2; /*0x5654c1*/
}



// ==== 0x005654E0  ObjectClass::method_5654E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5654E0(ObjectClass *this, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi

  v3 = this->q03D; /*0x5654e5*/
  v4 = a3[1]; /*0x5654ec*/
  v5 = *a3; /*0x5654f5*/
  if ( (v3 & 1) != 0 ) /*0x5654f7*/
    v6 = v5 - v4 + 1; /*0x5654fb*/
  else
    v6 = v5 - v4; /*0x5654fe*/
  v7 = *a3 + v4 - v3; /*0x565507*/
  *a2 = v3 / 2 + (v6 >> 1); /*0x565514*/
  a2[1] = v7; /*0x565516*/
  return a2; /*0x565513*/
}



// ==== 0x00565520  CellClass::GetScreenCenterOffset  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::GetScreenCenterOffset(CellClass *this, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int CellClass_field_FC; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int occupyHeightsCoveringMe; // [esp+14h] [ebp-4h]

  v3 = this->radLevel[1]; /*0x56552a*/
  occupyHeightsCoveringMe = this->occupyHeightsCoveringMe; /*0x565530*/
  CellClass_field_FC = this->CellClass_field_FC; /*0x565539*/
  v5 = a3[1]; /*0x565540*/
  v6 = *a3; /*0x565549*/
  if ( (v3 & 1) != 0 ) /*0x56554b*/
    v7 = v6 - v5 + 1; /*0x56554f*/
  else
    v7 = v6 - v5; /*0x565552*/
  v8 = *a3 + v5 - v3 - occupyHeightsCoveringMe; /*0x565569*/
  *a2 = v3 / 2 + (v7 >> 1) - CellClass_field_FC; /*0x565570*/
  a2[1] = v8; /*0x565572*/
  return a2; /*0x56556f*/
}



// ==== 0x00565610  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_565610(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  __int16 v7; // si
  __int16 *v9; // [esp+14h] [ebp+8h]

  v3 = this->q03D; /*0x565615*/
  v4 = a3[1]; /*0x56561c*/
  v5 = *a3; /*0x565627*/
  if ( (v3 & 1) != 0 ) /*0x565629*/
    v6 = v5 - v4 + 1; /*0x56562d*/
  else
    v6 = v5 - v4; /*0x565630*/
  v7 = *a3 + v4 - v3; /*0x565639*/
  LOWORD(v9) = v3 / 2 + (v6 >> 1); /*0x565645*/
  HIWORD(v9) = v7; /*0x56564a*/
  *a2 = v9; /*0x565655*/
  return a2; /*0x565653*/
}



// ==== 0x00565660  DamageArea::CalcScatterOffset  this=DamageArea  sig=csp ====
_DWORD *__thiscall DamageArea::CalcScatterOffset(DamageArea *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  __int16 *v11; // [esp+20h] [ebp+8h]

  v3 = *((_DWORD *)this + 61); /*0x565668*/
  v4 = *((_DWORD *)this + 63); /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = *((_DWORD *)this + 64); /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *a2 = v11; /*0x5656c2*/
  return a2; /*0x5656bf*/
}



// ==== 0x005656D0  MapClass::IsCellPassable  this=MapClass  sig=csp ====
int __stdcall MapClass::IsCellPassable(MapClass *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // eax

  v2 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x5656ed*/
  if ( v2 >= 0x40000 || (v3 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_MissionQueueFrame.briefing[130]; /*0x56570d*/
    g_MissionQueueFrame.briefing[139] = a2; /*0x565712*/
  }
  return ((unsigned int)v3[75] >> 3) & 1; /*0x565725*/
}



// ==== 0x00565730  Coord::To_Cell  this=Coord  sig=csp ====
CellClass *__thiscall Coord::To_Cell(Coord *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx
  CellClass *v4; // edx
  _DWORD *v6; // [esp+Ch] [ebp+4h]

  v2 = a2[1] / 256; /*0x56574f*/
  v3 = *a2 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < this->q050 ) /*0x565764*/
  {
    v4 = (CellClass *)*((_DWORD *)this->Coord_field_0x13C + v3); /*0x56576c*/
    if ( v4 ) /*0x565771*/
      return v4; /*0x565774*/
  }
  LOWORD(v6) = *a2 / 256; /*0x56577a*/
  HIWORD(v6) = v2; /*0x56577f*/
  g_MissionQueueFrame.briefing[139] = (int)v6; /*0x565789*/
  return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x565773*/
}



// ==== 0x005657A0  CellCoord::To_CellObj  this=CellCoord  sig=csp ====
void *__thiscall CellCoord::To_CellObj(CellCoord *this, __int16 *a2)
{
  unsigned int v2; // eax
  void *result; // eax

  v2 = *a2 + (a2[1] << 9); /*0x5657af*/
  if ( v2 >= 0x40000 || (result = *(void **)(*((_DWORD *)this + 79) + 4 * v2)) == 0 ) /*0x5657c6*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5657cf*/
    return &g_MissionQueueFrame.briefing[130]; /*0x5657ca*/
  }
  return result; /*0x5657b1*/
}



// ==== 0x005657E0  Cell::Exists  this=Cell  sig=csp ====
int __thiscall Cell::Exists(Cell *this, __int16 *a2)
{
  int result; // eax

  result = *a2; /*0x5657ee*/
  LOBYTE(result) = *((_DWORD *)this->Cell_field_0x13C + 512 * a2[1] + result) != 0; /*0x5657fa*/
  return result; /*0x5657fd*/
}



// ==== 0x00565800  MapClass::Destru_vt05  this=MapClass  sig=csp ====
int __thiscall MapClass::Destru_vt05(MapClass *this)
{
  MapClass *v1; // ebp
  int MapClass_field_0x0; // eax
  HashVector_UInt **v3; // eax
  HashVector_UInt **v4; // edi
  HashVector_UInt *v5; // eax
  HashVector_UInt *v6; // ebp
  HashVector_UInt *v7; // esi
  int v8; // ebx
  HashVector_UInt *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char *v13; // esi
  SubzoneHashVector **v14; // eax
  SubzoneHashVector **v15; // edi
  SubzoneHashVector *v16; // eax
  SubzoneHashVector *v17; // ebp
  SubzoneHashVector *v18; // esi
  int v19; // ebx
  SubzoneHashVector *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  GScreenClass *v25; // [esp+0h] [ebp-20h]
  char *v27; // [esp+14h] [ebp-Ch]
  char *v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x565806*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Add(v25); /*0x56580d*/
  *(_DWORD *)&v1->__pad_144[8] = 512; /*0x565819*/
  *(_DWORD *)&v1->__pad_144[12] = 512; /*0x56581f*/
  MapClass_field_0x0 = v1->MapClass_field_0x0; /*0x565825*/
  *(_DWORD *)&v1->__pad_144[16] = 0x40000; /*0x565828*/
  (*(void (__thiscall **)(MapClass *))(MapClass_field_0x0 + 88))(v1); /*0x565832*/
  if ( v1->MapClass_field_0x14 ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = (HashVector_UInt **)__2_YAPAXI_Z(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = (HashVector_UInt *)Cell::DecodeFlags; /*0x56585e*/
    v3[2] = (HashVector_UInt *)256; /*0x565865*/
    v3[3] = (HashVector_UInt *)20; /*0x56586c*/
    v5 = (HashVector_UInt *)__2_YAPAXI_Z(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = (HashVector_UInt)256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = (HashVector_UInt)&DynamicVectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x565896*/
        v7[5] = (HashVector_UInt)10; /*0x56589c*/
        v7[4] = 0; /*0x5658a3*/
        v7 += 6; /*0x5658aa*/
        --v8; /*0x5658ad*/
      }
      while ( v8 ); /*0x5658ae*/
      v9 = v6; /*0x5658b0*/
      v1 = this; /*0x5658b2*/
    }
    else
    {
      v9 = 0; /*0x5658bd*/
    }
    v10 = (int)v4[2]; /*0x5658bf*/
    *v4 = v9; /*0x5658c2*/
    v11 = 0; /*0x5658c4*/
    if ( v10 > 0 ) /*0x5658c8*/
    {
      v12 = 0; /*0x5658ca*/
      do /*0x5658db*/
      {
        ++v11; /*0x5658ce*/
        (*v4)[v12 + 5] = (HashVector_UInt)20; /*0x5658cf*/
        v12 += 6; /*0x5658d6*/
      }
      while ( v11 < (int)v4[2] ); /*0x5658db*/
      v1->MapClass_field_0x14 = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1->MapClass_field_0x14 = (int)v4; /*0x5658e9*/
LABEL_14:
  v13 = &v1->__pad_5C[48]; /*0x5658f3*/
  v27 = &v1->__pad_5C[36]; /*0x5658ff*/
  v28 = &v1->__pad_5C[48]; /*0x565903*/
  v29 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 12))(v13); /*0x565913*/
    v14 = (SubzoneHashVector **)__2_YAPAXI_Z(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = (SubzoneHashVector *)Cell::DecodeFlags; /*0x56592f*/
      v14[2] = (SubzoneHashVector *)256; /*0x565936*/
      v14[3] = (SubzoneHashVector *)20; /*0x56593d*/
      v16 = (SubzoneHashVector *)__2_YAPAXI_Z(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = (SubzoneHashVector)256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = (SubzoneHashVector)&DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x565967*/
          v18[5] = (SubzoneHashVector)10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v28; /*0x565981*/
        v20 = v17; /*0x565985*/
        v1 = this; /*0x565987*/
      }
      else
      {
        v20 = 0; /*0x565992*/
      }
      v21 = (int)v15[2]; /*0x565994*/
      *v15 = v20; /*0x565997*/
      v22 = 0; /*0x565999*/
      if ( v21 > 0 ) /*0x56599d*/
      {
        v23 = 0; /*0x56599f*/
        do /*0x5659b0*/
        {
          ++v22; /*0x5659a3*/
          (*v15)[v23 + 5] = (SubzoneHashVector)20; /*0x5659a4*/
          v23 += 6; /*0x5659ab*/
        }
        while ( v22 < (int)v15[2] ); /*0x5659b0*/
      }
    }
    else
    {
      v15 = 0; /*0x5659b4*/
    }
    v13 += 24; /*0x5659ba*/
    v28 = v13; /*0x5659bd*/
    *(_DWORD *)v27 = v15; /*0x5659c1*/
    v27 += 4; /*0x5659c6*/
    --v29; /*0x5659cf*/
  }
  while ( v29 ); /*0x5659d3*/
  memset(v1->__pad_18, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}



// ==== 0x005659F0  MapClass::Destru_vt07  this=MapClass  sig=csp ====
void __thiscall MapClass::Destru_vt07(MapClass *this)
{
  char *v2; // edx
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax

  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  MapClass::isCellShrouded((MapClass *)g_ZBufferDescriptor, 0xFFFFu); /*0x565a12*/
  MapClass::isLocationShrouded((MapClass *)dword_87E8A4, 0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Remove((GScreenClass *)this); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = &this->__pad_144[20]; /*0x565a35*/
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
    v4 = *(_DWORD *)v2; /*0x565a40*/
    v5 = *(_DWORD *)v2 == -1; /*0x565a47*/
    *((_DWORD *)v2 + 3) = dword_ABD480; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
      v6 = *((_DWORD *)v2 + 2); /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)dword_A8ED84 - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)dword_A8ED84 - v4; /*0x565a63*/
      }
      *((_DWORD *)v2 + 2) = v6; /*0x565a69*/
      *(_DWORD *)v2 = -1; /*0x565a6c*/
    }
    v2 += 16; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  *(_DWORD *)&this->__pad_144[4] = 13; /*0x565a7d*/
  this->__pad_1140[24] = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/
}



// ==== 0x00565AA0  MapClass::InitCellVector  this=MapClass  sig=csp ====
int __thiscall MapClass::InitCellVector(MapClass *this)
{
  char *v2; // ecx
  int result; // eax

  v2 = &this->__pad_134[4]; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    *((_DWORD *)v2 + 1) = 0; /*0x565aad*/
    *((_DWORD *)v2 + 2) = 0; /*0x565ab4*/
    v2[12] = 1; /*0x565abb*/
    v2[13] = 0; /*0x565abf*/
    *(_DWORD *)v2 = &VectorClass<CellClass *>::`vftable'; /*0x565ac3*/
  }
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)&this->__pad_144[16], 0); /*0x565ad4*/
  for ( result = 0; result < *(_DWORD *)&this->__pad_144[16]; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/
}



// ==== 0x00565B00  MapClass::FreeAllCells  this=MapClass  sig=csp ====
int __thiscall MapClass::FreeAllCells(MapClass *this)
{
  int i; // ecx
  int v3; // eax
  int j; // edi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < this->MapClass_field_0x140; ++i ) /*0x565b0e*/
  {
    v3 = *((_DWORD *)this->MapClass_field_0x13C + i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(_DWORD *)(v3 + 44) = 0; /*0x565b1d*/
      *(_DWORD *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  for ( j = 0; j < this->MapClass_field_0x140; ++j ) /*0x565b39*/
  {
    v5 = *((_DWORD *)this->MapClass_field_0x13C + j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x565b4c*/
      *((_DWORD *)this->MapClass_field_0x13C + j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(); /*0x565b67*/
  result = this->MapClass_field_0x140; /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_134[4] + 8))(&this->__pad_134[4], 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < this->MapClass_field_0x140; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/
}



// ==== 0x00565BC0  MapClass::InitAllCells  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::InitAllCells(MapClass *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax
  CellClass *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  *(_DWORD *)this->__pad_134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->MapClass_field_0x140 ) /*0x565bdb*/
      {
        result = this->MapClass_field_0x13C; /*0x565bdd*/
        v6 = (CellClass *)result[v3]; /*0x565be3*/
        if ( v6 ) /*0x565be8*/
          result = CellClass::Construct(v6); /*0x565bea*/
      }
      ++v3; /*0x565bef*/
      ++v2; /*0x565bf2*/
      --v4; /*0x565bf3*/
    }
    while ( v4 ); /*0x565bf4*/
  }
  while ( v2 < 0x40000 ); /*0x565bfc*/
  return result; /*0x565bfe*/
}



// ==== 0x00565C10  MapClass::UpdateTerrainAndWaypoints  this=MapClass  sig=csp ====
void __thiscall CellClass::UpdateTerrainAndWaypoints(MapClass *this, _DWORD *a2, int jj, char a4, char a5)
{
  int v6; // edi
  int v7; // esi
  __int16 v8; // si
  void *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  void *v13; // eax
  int v14; // esi
  _DWORD *v15; // ebp
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // ecx
  _WORD *v19; // eax
  _WORD *v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // esi
  ... [35344 chars total]



// ==== 0x00567110  CellClass::BuildPathfindingGraph  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::BuildPathfindingGraph(CellClass *this)
{
  int v2; // edi
  int v3; // eax
  _BYTE *v4; // ecx
  int v5; // edx
  int v6; // eax
  int *v7; // edi
  int v8; // edi
  int *v9; // ebp

  if ( this->unknown68 ) /*0x567118*/
  {
    __3_YAXPAX_Z((void *)this->unknown68); /*0x567120*/
    this->unknown68 = 0; /*0x567128*/
  }
  if ( this->unknown70 ) /*0x56712b*/
  {
    __3_YAXPAX_Z((void *)this->unknown70); /*0x567133*/
    this->unknown70 = 0; /*0x56713b*/
  }
  v2 = ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1) /*0x56714e*/
     * ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1);
  this->CellClass_field_6C = v2; /*0x567151*/
  v3 = __2_YAPAXI_Z(4 * v2); /*0x56715c*/
  if ( v3 ) /*0x567166*/
  {
    v4 = (_BYTE *)v3; /*0x56716b*/
    if ( v2 - 1 >= 0 ) /*0x56716f*/
    {
      v5 = v2; /*0x567171*/
      do /*0x56717c*/
      {
        *v4 = 7; /*0x567172*/
        v4[1] = 0; /*0x567175*/
        v4 += 4; /*0x567178*/
        --v5; /*0x56717b*/
      }
      while ( v5 ); /*0x56717c*/
    }
  }
  else
  {
    v3 = 0; /*0x567180*/
  }
  this->unknown68 = v3; /*0x567182*/
  this->unknown70 = __2_YAPAXI_Z(10 * this->CellClass_field_6C); /*0x56719c*/
  CellClass::setOverlayType((CellClass *)&stru_87E790.__pad_D8[80], (int)&this->landType); /*0x5671a5*/
  v6 = 0; /*0x5671aa*/
  v7 = &this->sensorsOfHouses[9]; /*0x5671ac*/
  do /*0x5671df*/
  {
    v7 += 6; /*0x5671c7*/
    *(v7 - 6) = 4 * (int)this->radSite * this->radLevel[1] / ((1 << (v6 + 1)) * (1 << (v6 + 1))); /*0x5671d7*/
    ++v6; /*0x5671da*/
  }
  while ( v6 < 3 ); /*0x5671df*/
  MapClass::PostProcessReveal((MapClass *)this, 0); /*0x5671e4*/
  MapClass::ProcessRegion((MapClass *)this); /*0x5671eb*/
  Terrain::ConnectivityGraph((Terrain *)this); /*0x5671f2*/
  v8 = 2; /*0x5671f7*/
  v9 = &this->disguiseAsType_sensors_of_houses[4]; /*0x5671fc*/
  do /*0x567218*/
  {
    (*(void (__thiscall **)(int *))(*v9 + 12))(v9); /*0x567207*/
    Subzone::BuildGraph((Subzone *)this, v8--); /*0x56720d*/
    v9 -= 6; /*0x567213*/
  }
  while ( v8 >= 0 ); /*0x567218*/
  return MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x567224*/
}



// ==== 0x00567230  MapClass::UpdateVisibility  this=MapClass  sig=csp ====
int __thiscall ShroudClass::UpdateVisibility(MapClass *this, int *a2)
{
  void **p_MapClass_field_0xFC; // esi
  void **v4; // eax
  int v5; // eax
  int MapClass_field_0x100; // edx
  void *MapClass_field_0xF4; // ecx
  int v8; // eax
  void *MapClass_field_0x108; // ecx
  void *v10; // eax
  int result; // eax
  int i; // ebp
  House **v13; // esi
  char v14; // bl
  __int16 *v15; // eax
  char IsWithinUsableArea; // al
  int v17[4]; // [esp+Ch] [ebp-10h] BYREF

  p_MapClass_field_0xFC = &this->MapClass_field_0xFC; /*0x56724b*/
  v4 = (void **)ClipRectIntersection(v17, a2, (int *)&this->MapClass_field_0xEC, 0, 0); /*0x567251*/
  *p_MapClass_field_0xFC = *v4; /*0x56725a*/
  this->MapClass_field_0x100 = v4[1]; /*0x56725f*/
  *(_DWORD *)this->__pad_104 = v4[2]; /*0x567265*/
  this->MapClass_field_0x108 = v4[3]; /*0x56726b*/
  v5 = (int)*p_MapClass_field_0xFC; /*0x56726e*/
  if ( (int)*p_MapClass_field_0xFC <= 2 ) /*0x567273*/
    v5 = 2; /*0x567275*/
  MapClass_field_0x100 = (int)this->MapClass_field_0x100; /*0x56727a*/
  *p_MapClass_field_0xFC = (void *)v5; /*0x567280*/
  if ( MapClass_field_0x100 <= 2 ) /*0x567285*/
    MapClass_field_0x100 = 2; /*0x567287*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56728c*/
  this->MapClass_field_0x100 = (void *)MapClass_field_0x100; /*0x567292*/
  v8 = (int)MapClass_field_0xF4 - v5 - 2; /*0x56729a*/
  if ( *(_DWORD *)this->__pad_104 < v8 ) /*0x5672a5*/
    v8 = *(_DWORD *)this->__pad_104; /*0x5672a7*/
  MapClass_field_0x108 = this->MapClass_field_0x108; /*0x5672a9*/
  *(_DWORD *)this->__pad_104 = v8; /*0x5672af*/
  v10 = (void *)(*(_DWORD *)this->__pad_F8 - MapClass_field_0x100 - 6); /*0x5672bd*/
  if ( (int)MapClass_field_0x108 < (int)v10 ) /*0x5672c2*/
    v10 = MapClass_field_0x108; /*0x5672c4*/
  this->MapClass_field_0x108 = v10; /*0x5672cd*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5672d3*/
  result = *(_DWORD *)&stru_A8EB00.?[164]; /*0x5672d8*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x5672e1*/
  {
    v13 = *(House ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x5672f1*/
    v14 = *((_BYTE *)v13 + 981); /*0x5672f8*/
    v15 = (__int16 *)(*(int (__thiscall **)(House **, int **))&(*v13)->__pad_7C[316])(v13, &a2); /*0x5672fe*/
    IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)this, v15, 1); /*0x567307*/
    *((_BYTE *)v13 + 981) = IsWithinUsableArea; /*0x56730e*/
    if ( !v14 /*0x56733f*/
      && IsWithinUsableArea
      && (unsigned __int8)House::IsHumanPlayer(v13[135])
      && (*(int (__thiscall **)(House **))&(*v13)->House_field_0x29[3])(v13) != 6
      && *((_BYTE *)v13 + 144)
      && !*((_BYTE *)v13 + 129) )
    {
      (*(void (__thiscall **)(House **, _DWORD, _DWORD))&(*v13)->__pad_7C[164])(v13, 0, 0); /*0x567351*/
    }
    result = *(_DWORD *)&stru_A8EB00.?[164]; /*0x567357*/
  }
  return result; /*0x567362*/
}



// ==== 0x005673A0  MapClass::RevealArea0  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea0(
        MapClass *this,
        int *a2,
        int a3,
        void *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int result; // eax
  void *MapClass_field_0xF4; // ecx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  #375 *v19; // edi
  int v20; // eax
  int v21; // esi
  char *v22; // ecx
  __int16 v23; // ax
  __int16 v24; // cx
  void *v25; // edx
  int v26; // esi
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  int *v31; // eax
  int v32; // ecx
  void *v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  double v38; // [esp+0h] [ebp-5Ch]
  char *v39; // [esp+18h] [ebp-44h]
  int v40; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v42; // [esp+24h] [ebp-38h]
  int v43; // [esp+24h] [ebp-38h]
  int v44; // [esp+2Ch] [ebp-30h]
  __int16 v45; // [esp+30h] [ebp-2Ch]
  __int16 v46; // [esp+32h] [ebp-2Ah]
  __int16 v47[4]; // [esp+38h] [ebp-24h] BYREF
  int v48; // [esp+40h] [ebp-1Ch]
  __int16 v49; // [esp+48h] [ebp-14h]
  __int16 v50; // [esp+4Ah] [ebp-12h]
  int v51; // [esp+50h] [ebp-Ch] BYREF
  int v52; // [esp+54h] [ebp-8h]
  int v53; // [esp+58h] [ebp-4h]
  int *v54; // [esp+60h] [ebp+4h]
  int *v55; // [esp+60h] [ebp+4h]
  char v56; // [esp+6Ch] [ebp+10h]

  v44 = a2[2] / g_MissionQueueFrame.briefing[272]; /*0x5673b7*/
  v51 = *a2; /*0x5673bf*/
  v52 = a2[1]; /*0x5673c6*/
  v53 = a2[2]; /*0x5673cd*/
  v11 = ZCoordToScreenY(v53); /*0x5673d1*/
  v51 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x5673f8*/
        + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v12 = ZCoordToScreenY(v53); /*0x5673fc*/
  v52 += (((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x56742a*/
        + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8;
  v47[0] = *a2 / 256; /*0x56744d*/
  v13 = v51 / 256; /*0x56745e*/
  v45 = v51 / 256; /*0x567467*/
  v46 = v52 / 256; /*0x56746c*/
  v47[1] = a2[1] / 256; /*0x567475*/
  v49 = v45 - v47[0] - 2; /*0x56749b*/
  v50 = v46 - v47[1] - 2; /*0x5674a7*/
  result = v46; /*0x5674af*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5674b2*/
  v16 = v46 + v45; /*0x5674b8*/
  if ( v16 <= (int)MapClass_field_0xF4 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v45 - v46 >= (int)MapClass_field_0xF4 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v46 - v45; /*0x5674cf*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = *(_DWORD *)this->__pad_F8; /*0x5674d9*/
  if ( v16 > (int)MapClass_field_0xF4 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = a3; /*0x5674ea*/
  if ( !a3 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( a3 >= 11 ) /*0x5674f9*/
    a3 = 10; /*0x567500*/
  v39 = &g_MissionQueueFrame.waypoints[2150]; /*0x567512*/
  v54 = (int *)&g_MissionQueueFrame.waypoints[822]; /*0x56751a*/
  v17 = dword_7ED3D0[a3]; /*0x567528*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && a5 && a3 > 2 ) /*0x56753e*/
  {
    v18 = dword_7ED3C4[a3]; /*0x567540*/
    v17 -= v18; /*0x567547*/
    v39 = (char *)(4 * v18 + 11261072); /*0x567557*/
    v54 = (int *)(4 * v18 + 11259744); /*0x56755b*/
  }
  v19 = (#375 *)a4; /*0x567563*/
  v55 = v54 - 1; /*0x56756c*/
  if ( !a4 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = (int)dword_A83D4C; /*0x567572*/
  if ( !dword_A83D4C ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( a4 != dword_A83D4C ) /*0x56757d*/
  {
    if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & *((_DWORD *)a4 + 5433)) != 0 ) /*0x567595*/
    {
      v19 = (#375 *)dword_A83D4C; /*0x567597*/
      a4 = dword_A83D4C; /*0x567599*/
    }
    if ( v19 != (#375 *)dword_A83D4C ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v19, (#375 *)dword_A83D4C) /*0x5675b2*/
        && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)dword_A83D4C; /*0x5675bc*/
        v19 = (#375 *)dword_A83D4C; /*0x5675c1*/
        a4 = dword_A83D4C; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
LABEL_21:
      result = (int)dword_A83D4C; /*0x5675c9*/
LABEL_22:
      if ( v19 != (#375 *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x5675f1*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5675fd*/
  }
  v20 = v17; /*0x567602*/
  v21 = v17 - 1; /*0x567604*/
  if ( v20 ) /*0x567607*/
  {
    for ( i = v21 + 1; i; --i ) /*0x56760e*/
    {
      v22 = v39; /*0x56761a*/
      v39 += 4; /*0x56761f*/
      v23 = *(_WORD *)v22 + v13; /*0x567626*/
      v24 = v46 + *((_WORD *)v22 + 1); /*0x56762d*/
      LOWORD(v48) = v23; /*0x567635*/
      ++v55; /*0x56763a*/
      v25 = this->MapClass_field_0xF4; /*0x56763e*/
      HIWORD(v48) = v24; /*0x567644*/
      *(_DWORD *)v47 = v48; /*0x567653*/
      v26 = v24 + v23; /*0x567657*/
      if ( v26 > (int)v25 ) /*0x56765c*/
      {
        if ( v23 - v24 >= (int)v25 || v24 - v23 >= (int)v25 ) /*0x567672*/
        {
          LOWORD(v13) = v45; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        LOWORD(v13) = v45; /*0x56767e*/
        if ( v26 > (int)v25 + 2 * *(_DWORD *)this->__pad_F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v23 - v45) > a3 ) /*0x56769e*/
          continue; /*0x56769e*/
        v42 = (__int16)(HIWORD(v48) - v46); /*0x5676bd*/
        __asm { fild [esp+5Ch+var_38] } /*0x5676c1*/
        v43 = (__int16)(v48 - v45); /*0x5676c5*/
        __asm /*0x5676c9*/
        {
          fild [esp+5Ch+var_38]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+5Ch+var_5C]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v38); /*0x5676de*/
        if ( (__int16)Math::RoundToInt(v9) > a3 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v47[0] + (v47[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v47; /*0x567724*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x567729*/
        }
        if ( a8 && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x56773c*/
        {
          LOWORD(v40) = v47[0] - v49 + *(_WORD *)v55; /*0x567765*/
          HIWORD(v40) = v47[1] - v50 + *((_WORD *)v55 + 1); /*0x56776a*/
          v30 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = &g_MissionQueueFrame.briefing[130]; /*0x567794*/
            g_MissionQueueFrame.briefing[139] = v40; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v44 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = (void *)*((__int16 *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !v56 ) /*0x5677d2*/
        {
LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v47, (int)a4); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !a6 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((RadarClass *)v47, (int)a4, 0); /*0x567893*/
                else
                  CellClass::Unshroud((CellClass *)v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == (char *)this->MapClass_field_0xF4 + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == (char *)this->MapClass_field_0xF4 + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = *(_DWORD *)this->__pad_F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != (char *)this->MapClass_field_0xF4 + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(this, &v51, 0, a3 + 3, 0); /*0x5678cf*/
}



// ==== 0x005678E0  MapClass::RevealArea1  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea1(
        MapClass *this,
        int *a2,
        int a3,
        void *a4,
        char a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  signed int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  int result; // eax
  int v20; // edx
  void *MapClass_field_0xF4; // ecx
  int v22; // esi
  char *v23; // ebp
  int v24; // eax
  #375 *v25; // ebx
  char *v26; // ebp
  int v27; // ecx
  int v28; // esi
  char *v29; // ecx
  __int16 v30; // ax
  __int16 v31; // cx
  void *v32; // edx
  int v33; // esi
  unsigned int v34; // edx
  int *v35; // edx
  int *v36; // esi
  unsigned int v37; // eax
  int *v38; // eax
  int v39; // edx
  void *v40; // eax
  unsigned int v41; // edi
  int v42; // ecx
  double v43; // [esp+0h] [ebp-50h]
  char *v44; // [esp+18h] [ebp-38h]
  int v46; // [esp+20h] [ebp-30h]
  int v47; // [esp+24h] [ebp-2Ch]
  int v48; // [esp+24h] [ebp-2Ch]
  int v49; // [esp+2Ch] [ebp-24h]
  __int16 v50; // [esp+30h] [ebp-20h]
  __int16 v51; // [esp+32h] [ebp-1Eh]
  __int16 v52[4]; // [esp+38h] [ebp-18h] BYREF
  int v53; // [esp+40h] [ebp-10h]
  __int16 v54; // [esp+48h] [ebp-8h]
  __int16 v55; // [esp+4Ah] [ebp-6h]
  char v56; // [esp+54h] [ebp+4h]
  int v57; // [esp+60h] [ebp+10h]

  v49 = a2[2] / g_MissionQueueFrame.briefing[272]; /*0x5678f9*/
  v10 = *a2; /*0x5678ff*/
  v11 = a2[1]; /*0x567901*/
  v12 = a2[2]; /*0x567904*/
  v13 = ZCoordToScreenY(v12); /*0x567909*/
  v14 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 31) /*0x567928*/
        + ((int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 4)) << 8)
      + v10;
  v15 = ZCoordToScreenY(v12); /*0x56792a*/
  v16 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 31) /*0x567958*/
              + ((int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 4)) << 8)
            + v11);
  v52[0] = *a2 / 256; /*0x567971*/
  v17 = v14 / 256; /*0x567982*/
  v18 = (BYTE4(v16) + (int)v16) >> 8; /*0x567985*/
  v50 = v17; /*0x56798b*/
  v51 = v18; /*0x567990*/
  v52[1] = a2[1] / 256; /*0x56799d*/
  v54 = v17 - v52[0] - 2; /*0x5679c3*/
  v55 = v18 - v52[1] - 2; /*0x5679d3*/
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x5679eb*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5679f7*/
  }
  result = (__int16)v18; /*0x5679ff*/
  v20 = (__int16)v18 + (__int16)v17; /*0x567a06*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x567a09*/
  if ( v20 <= (int)MapClass_field_0xF4 ) /*0x567a11*/
    return result; /*0x567a11*/
  if ( (__int16)v17 - (__int16)v18 >= (int)MapClass_field_0xF4 ) /*0x567a1d*/
    return result; /*0x567a1d*/
  result = (__int16)v18 - (__int16)v17; /*0x567a23*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x567a27*/
    return result; /*0x567a27*/
  result = *(_DWORD *)this->__pad_F8; /*0x567a2d*/
  if ( v20 > (int)MapClass_field_0xF4 + 2 * result ) /*0x567a38*/
    return result; /*0x567a38*/
  result = a3; /*0x567a3e*/
  if ( !a3 ) /*0x567a44*/
    return result; /*0x567a44*/
  if ( a3 >= 11 ) /*0x567a4d*/
  {
    result = 10; /*0x567a54*/
    a3 = 10; /*0x567a59*/
  }
  v22 = dword_7ED3D0[result]; /*0x567a63*/
  v44 = &g_MissionQueueFrame.waypoints[2150]; /*0x567a6a*/
  v23 = &g_MissionQueueFrame.waypoints[822]; /*0x567a72*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && a5 && result > 2 ) /*0x567a8c*/
  {
    v24 = dword_7ED3C4[result]; /*0x567a8e*/
    v22 -= v24; /*0x567a95*/
    v23 = (char *)(4 * v24 + 11259744); /*0x567a9e*/
    v44 = (char *)(4 * v24 + 11261072); /*0x567aa5*/
  }
  v25 = (#375 *)a4; /*0x567aa9*/
  v26 = v23 - 4; /*0x567aad*/
  if ( !a4 ) /*0x567ab2*/
    goto LABEL_26; /*0x567ab2*/
  result = (int)dword_A83D4C; /*0x567ab4*/
  if ( !dword_A83D4C ) /*0x567abb*/
    goto LABEL_27; /*0x567abb*/
  if ( a4 != dword_A83D4C ) /*0x567abf*/
  {
    if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & *((_DWORD *)a4 + 5433)) != 0 ) /*0x567ad7*/
    {
      v25 = (#375 *)dword_A83D4C; /*0x567ad9*/
      a4 = dword_A83D4C; /*0x567adb*/
    }
    if ( v25 != (#375 *)dword_A83D4C ) /*0x567ae1*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v25, (#375 *)dword_A83D4C) /*0x567af4*/
        && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)dword_A83D4C; /*0x567afe*/
        v25 = (#375 *)dword_A83D4C; /*0x567b03*/
        a4 = dword_A83D4C; /*0x567b05*/
        goto LABEL_27; /*0x567b09*/
      }
LABEL_26:
      result = (int)dword_A83D4C; /*0x567b0b*/
LABEL_27:
      if ( v25 != (#375 *)result ) /*0x567b12*/
        return result; /*0x567b12*/
    }
  }
  v27 = v22; /*0x567b18*/
  v28 = v22 - 1; /*0x567b1a*/
  if ( v27 ) /*0x567b1d*/
  {
    v46 = v28 + 1; /*0x567b24*/
    while ( 1 ) /*0x567b37*/
    {
      v29 = v44; /*0x567b37*/
      v44 += 4; /*0x567b3c*/
      v30 = *(_WORD *)v29 + v17; /*0x567b43*/
      v31 = v51 + *((_WORD *)v29 + 1); /*0x567b4a*/
      v32 = this->MapClass_field_0xF4; /*0x567b4f*/
      LOWORD(v53) = v30; /*0x567b55*/
      v26 += 4; /*0x567b5a*/
      HIWORD(v53) = v31; /*0x567b5d*/
      *(_DWORD *)v52 = v53; /*0x567b6c*/
      v33 = v31 + v30; /*0x567b70*/
      if ( v33 > (int)v32 /*0x567bb8*/
        && v30 - v31 < (int)v32
        && v31 - v30 < (int)v32
        && v33 <= (int)v32 + 2 * *(_DWORD *)this->__pad_F8
        && (int)abs32(v30 - v50) <= a3 )
      {
        v47 = (__int16)(HIWORD(v53) - v51); /*0x567bd7*/
        __asm { fild [esp+50h+var_2C] } /*0x567bdb*/
        v48 = (__int16)(v53 - v50); /*0x567bdf*/
        __asm /*0x567be3*/
        {
          fild [esp+50h+var_2C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+50h+var_50]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v43); /*0x567bf8*/
        if ( (__int16)Math::RoundToInt(v9) <= a3 ) /*0x567c0a*/
        {
          v34 = v52[0] + (v52[1] << 9); /*0x567c21*/
          if ( v34 < 0x40000 && (v35 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v34)) != 0 ) /*0x567c38*/
          {
            v36 = v35; /*0x567c3a*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v52; /*0x567c3e*/
            v36 = &g_MissionQueueFrame.briefing[130]; /*0x567c43*/
          }
          if ( !a8 || !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x567c56*/
            goto LABEL_47; /*0x567c56*/
          LOWORD(v57) = v52[0] - v54 + *(_WORD *)v26; /*0x567c7c*/
          HIWORD(v57) = v52[1] - v55 + *((_WORD *)v26 + 1); /*0x567c81*/
          v37 = (__int16)v57 + (SHIWORD(v57) << 9); /*0x567c8f*/
          if ( v37 >= 0x40000 || (v38 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v37)) == 0 ) /*0x567ca5*/
          {
            g_MissionQueueFrame.briefing[139] = v57; /*0x567cab*/
            v38 = &g_MissionQueueFrame.briefing[130]; /*0x567cb0*/
          }
          if ( *((char *)v38 + 283) <= v49 + 3 ) /*0x567cc5*/
          {
LABEL_47:
            v39 = *((__int16 *)v36 + 18); /*0x567cd5*/
            v40 = (void *)*((__int16 *)v36 + 19); /*0x567cd9*/
            v41 = v36[80] & 0xFFFFFFBF; /*0x567cdd*/
            v36[80] = v41; /*0x567ce2*/
            if ( a7 ) /*0x567ce8*/
            {
              if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36[75] & 8) != 0 ) /*0x567cff*/
                DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v52, (int)a4); /*0x567d10*/
            }
            else
            {
              if ( !v56 ) /*0x567d1d*/
                goto LABEL_60; /*0x567d1d*/
              if ( v39 == 7 ) /*0x567d22*/
              {
                if ( v40 == (char *)this->MapClass_field_0xF4 + 5 ) /*0x567d2f*/
                  goto LABEL_61; /*0x567d2f*/
              }
              else if ( v39 == 13 && v40 == (char *)this->MapClass_field_0xF4 + 11 ) /*0x567d43*/
              {
                goto LABEL_61; /*0x567d43*/
              }
              v42 = *(_DWORD *)this->__pad_F8; /*0x567d45*/
              if ( v39 != v42 + 13 || v40 != (char *)this->MapClass_field_0xF4 + v42 - 15 ) /*0x567d5e*/
LABEL_60:
                Conditions::CheckResult3((RadarClass *)v52, (int)a4, a9); /*0x567d60*/
            }
          }
        }
      }
LABEL_61:
      result = --v46; /*0x567d79*/
      if ( !v46 ) /*0x567d82*/
        return result; /*0x567d82*/
      LOWORD(v17) = v50; /*0x567b2a*/
    }
  }
  return result; /*0x567d88*/
}



// ==== 0x00567DA0  MapClass::RevealArea2  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea2(MapClass *this, int *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  signed int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  char *v16; // ebp
  __int64 v17; // rax
  int v18; // esi
  int v19; // edi
  char *v20; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  int *v24; // eax
  int *v25; // ebx
  char AdjacentPassableMask; // al
  int v28; // [esp+Ch] [ebp+8h]
  int v29; // [esp+10h] [ebp+Ch]

  v5 = a4; /*0x567da1*/
  if ( a4 <= 11 ) /*0x567dac*/
  {
    if ( a4 < 3 ) /*0x567db8*/
      v5 = 3; /*0x567dba*/
  }
  else
  {
    v5 = 11; /*0x567dae*/
  }
  v6 = a3; /*0x567dbf*/
  if ( a3 < 0 ) /*0x567dc5*/
  {
    v7 = dword_7ED3D0[v5]; /*0x567dc7*/
    a3 = 0; /*0x567dce*/
    goto LABEL_10; /*0x567dd6*/
  }
  if ( a3 > 8 ) /*0x567ddb*/
  {
    a3 = 8; /*0x567de1*/
    v6 = 8; /*0x567de9*/
LABEL_9:
    v7 = dword_7ED3D0[v5] - dword_7ED3CC[v6]; /*0x567ded*/
    goto LABEL_10; /*0x567dfb*/
  }
  if ( a3 ) /*0x567efd*/
    goto LABEL_9; /*0x567efd*/
  v7 = dword_7ED3D0[v5]; /*0x567f03*/
LABEL_10:
  v29 = v7; /*0x567dfd*/
  result = a5; /*0x567e01*/
  if ( !a5 ) /*0x567e0b*/
  {
    v9 = *a2; /*0x567e15*/
    v10 = a2[1]; /*0x567e17*/
    v11 = a2[2]; /*0x567e1a*/
    v12 = ZCoordToScreenY(v11); /*0x567e1f*/
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x567e3e*/
          + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
        + v9;
    v14 = ZCoordToScreenY(v11); /*0x567e40*/
    v15 = (int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4; /*0x567e52*/
    v16 = &g_MissionQueueFrame.waypoints[2150]; /*0x567e57*/
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10); /*0x567e73*/
    v18 = v13 / 256; /*0x567e82*/
    v19 = (BYTE4(v17) + (int)v17) >> 8; /*0x567e85*/
    if ( a3 ) /*0x567e8a*/
      v16 = (char *)(4 * dword_7ED3CC[a3] + 11261072); /*0x567e93*/
    for ( result = v29 - 1; v29; --v29 ) /*0x567ea3*/
    {
      v20 = v16; /*0x567eae*/
      v16 += 4; /*0x567eb0*/
      HIWORD(v28) = v19 + *((_WORD *)v20 + 1); /*0x567ec0*/
      LOWORD(v28) = v18 + *(_WORD *)v20; /*0x567ec5*/
      v21 = SHIWORD(v28) << 9; /*0x567ed4*/
      v22 = (__int16)v28 + v21 < 0; /*0x567ed7*/
      v23 = (__int16)v28 + v21; /*0x567ed7*/
      a5 = v28; /*0x567ed9*/
      if ( v22 || v23 >= 0x40000 || (v24 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v23)) == 0 ) /*0x567ef5*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x567f0f*/
        v25 = &g_MissionQueueFrame.briefing[130]; /*0x567f15*/
      }
      else
      {
        v25 = v24; /*0x567ef7*/
      }
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&a5, 0); /*0x567f27*/
      if ( AdjacentPassableMask != *((_BYTE *)v25 + 288) ) /*0x567f32*/
      {
        *((_BYTE *)v25 + 288) = AdjacentPassableMask; /*0x567f34*/
        *((_BYTE *)v25 + 312) = 1; /*0x567f3a*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v25); /*0x567f48*/
      }
      result = v29 - 1; /*0x567f51*/
    }
  }
  return result; /*0x567f61*/
}



// ==== 0x00567F70  TActionClass_Helper  this=-  sig=csp ====
int __stdcall sub_567F70(int *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int result; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  __int16 v20; // [esp+14h] [ebp-8h]
  __int16 v21; // [esp+16h] [ebp-6h]
  int v22; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x567f7a*/
  v3 = a1[1]; /*0x567f7c*/
  v4 = a1[2]; /*0x567f7f*/
  v5 = ZCoordToScreenY(v4); /*0x567f84*/
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x567fa3*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x567fa5*/
  v8 = a2; /*0x567fb5*/
  v20 = v6 / 256; /*0x567fd6*/
  v9 = -2 - a2; /*0x567fee*/
  v21 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x567ff0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x567ff5*/
  result = a2 + 2; /*0x567ff7*/
  if ( -2 - a2 < a2 + 2 ) /*0x568000*/
  {
    v12 = dword_87F924; /*0x568006*/
    do /*0x568130*/
    {
      if ( v9 < result ) /*0x56800f*/
      {
        v13 = v10 * v10; /*0x56801a*/
        v14 = (v8 + 1) * (v8 + 1); /*0x56801d*/
        while ( 1 ) /*0x56802a*/
        {
          if ( v13 + v9 * v9 < v14 ) /*0x568033*/
          {
            HIWORD(v22) = v9 + v21; /*0x568045*/
            LOWORD(v22) = v10 + v20; /*0x56804a*/
            v15 = ((__int16)(v9 + v21) << 9) + (__int16)(v10 + v20); /*0x56805c*/
            if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x56806e*/
            {
              dword_ABDC74 = v22; /*0x568070*/
              v16 = unk_ABDC50; /*0x568076*/
            }
            if ( !v16[76] ) /*0x56807b*/
            {
              if ( v15 >= 0x40000 || (v17 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x568098*/
              {
                dword_ABDC74 = v22; /*0x56809a*/
                v17 = unk_ABDC50; /*0x5680a0*/
              }
              v17[76] = 1; /*0x5680a7*/
              if ( v15 >= 0x40000 || (v18 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                dword_ABDC74 = v22; /*0x5680c7*/
                v18 = unk_ABDC50; /*0x5680cd*/
              }
              v18[75] &= ~8u; /*0x5680dd*/
              if ( v15 >= 0x40000 || (v19 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                dword_ABDC74 = v22; /*0x5680f9*/
                v19 = unk_ABDC50; /*0x5680ff*/
              }
              v19[75] &= ~0x10u; /*0x56810d*/
              v12 = dword_87F924; /*0x568113*/
            }
          }
          v8 = a2; /*0x568119*/
          ++v9; /*0x56811d*/
          result = a2 + 2; /*0x56811e*/
          if ( v9 >= a2 + 2 ) /*0x568123*/
            break; /*0x568123*/
          v13 = v10 * v10; /*0x568026*/
        }
        v9 = -2 - a2; /*0x568129*/
      }
      ++v10; /*0x56812d*/
    }
    while ( v10 < result ); /*0x568130*/
  }
  return result; /*0x568137*/
}



// ==== 0x00568140  sub_568140  this=-  sig=csp ====
int __stdcall sub_568140(int *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  __int16 v19; // [esp+14h] [ebp-8h]
  __int16 v20; // [esp+16h] [ebp-6h]
  int v21; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x56814a*/
  v3 = a1[1]; /*0x56814c*/
  v4 = a1[2]; /*0x56814f*/
  v5 = ZCoordToScreenY(v4); /*0x568154*/
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x568173*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x568175*/
  v8 = a2; /*0x568185*/
  v19 = v6 / 256; /*0x5681a6*/
  v9 = -2 - a2; /*0x5681be*/
  v20 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x5681c0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x5681c5*/
  for ( result = a2 + 2; v10 < result; ++v10 ) /*0x5681d0*/
  {
    if ( v9 < result ) /*0x5681db*/
    {
      v12 = v10 * v10; /*0x5681e6*/
      v13 = (v8 + 1) * (v8 + 1); /*0x5681e9*/
      do /*0x5682e1*/
      {
        if ( v12 + v9 * v9 < v13 ) /*0x5681f9*/
        {
          LOWORD(v21) = v10 + v19; /*0x56820c*/
          HIWORD(v21) = v9 + v20; /*0x568211*/
          v14 = ((__int16)(v9 + v20) << 9) + (__int16)(v10 + v19); /*0x568223*/
          if ( v14 >= 0x40000 || (v15 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56823b*/
          {
            dword_ABDC74 = v21; /*0x56823d*/
            v15 = unk_ABDC50; /*0x568243*/
          }
          v15[76] = 0; /*0x56824a*/
          if ( v14 >= 0x40000 || (v16 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x568264*/
          {
            dword_ABDC74 = v21; /*0x568266*/
            v16 = unk_ABDC50; /*0x56826c*/
          }
          v16[77] = 0; /*0x568273*/
          if ( v14 >= 0x40000 || (v17 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56828d*/
          {
            dword_ABDC74 = v21; /*0x56828f*/
            v17 = unk_ABDC50; /*0x568295*/
          }
          v17[75] |= 0x10u; /*0x56829a*/
          if ( v14 >= 0x40000 || (v18 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x5682b7*/
          {
            dword_ABDC74 = v21; /*0x5682b9*/
            v18 = unk_ABDC50; /*0x5682bf*/
          }
          v12 = v10 * v10; /*0x5682ca*/
          v18[75] |= 8u; /*0x5682d1*/
          v8 = a2; /*0x5682d7*/
        }
        ++v9; /*0x5682db*/
        result = v8 + 2; /*0x5682dc*/
      }
      while ( v9 < v8 + 2 ); /*0x5682e1*/
      v9 = -2 - a2; /*0x5682e7*/
    }
  }
  return result; /*0x5682f5*/
}



// ==== 0x00568300  LayerClass::CoordinatesLegal  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CoordinatesLegal(LayerClass *this, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  v2 = *((_DWORD *)this + 61); /*0x568304*/
  v3 = *a2; /*0x56830c*/
  result = a2[1]; /*0x56830f*/
  v5 = result + v3; /*0x568313*/
  LOBYTE(result) = result + v3 > v2 /*0x56833f*/
                && v3 - result < v2
                && (result -= v3, result < v2)
                && (result = *((_DWORD *)this + 62), v5 <= v2 + 2 * result);
  return result; /*0x568337*/
}



// ==== 0x00568350  Tactical::IsCellVisible  this=Tactical  sig=csp ====
int __thiscall Tactical::IsCellVisible(Tactical *this, _DWORD *a2)
{
  void *Tactical_field_0xF4; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  Tactical_field_0xF4 = this->Tactical_field_0xF4; /*0x56836f*/
  v3 = (__int16)(*a2 / 256); /*0x56837b*/
  result = (__int16)(a2[1] / 256); /*0x56837e*/
  v5 = result + v3; /*0x568381*/
  LOBYTE(result) = result + v3 > (int)Tactical_field_0xF4 /*0x5683ad*/
                && v3 - result < (int)Tactical_field_0xF4
                && (result -= v3, result < (int)Tactical_field_0xF4)
                && (result = (int)this->Tactical_field_0xF8, v5 <= (int)Tactical_field_0xF4 + 2 * result);
  return result; /*0x5683a5*/
}



// ==== 0x005683C0  MapClass::FillRevealBuffer  this=MapClass  sig=csp ====
int __thiscall MapClass::FillRevealBuffer(MapClass *this, _WORD *a2, _BYTE *a3)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // ebp
  _WORD *v12; // ebx
  __int16 v13; // cx
  int v14; // esi
  __int16 v15; // ax
  int v16; // edi
  __int16 v17; // bx
  __int16 v18; // bp
  int v19; // edx
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // ecx
  int *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edx
  int *v28; // eax
  _DWORD *v29; // edx
  int v30; // edx
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+10h] [ebp-8A0h]
  int v33; // [esp+10h] [ebp-8A0h]
  int v34; // [esp+14h] [ebp-89Ch]
  int v35; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v38; // [esp+20h] [ebp-890h]
  _BYTE *v39; // [esp+24h] [ebp-88Ch]
  int v40; // [esp+28h] [ebp-888h]
  _WORD *v41; // [esp+2Ch] [ebp-884h]
  _BYTE v42[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v43[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x5683d1*/
  if ( !a3 ) /*0x5683d9*/
    return result; /*0x5683d9*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x5683e9*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 136))(a3); /*0x5683ed*/
  if ( !*(_BYTE *)(result + 565) ) /*0x5683f3*/
    return result; /*0x5683f3*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 120))(a3); /*0x568405*/
  if ( result != 2 ) /*0x56840b*/
    return result; /*0x56840b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a3 + 264))(a3, 0); /*0x56841c*/
  sub_48DEE0(v5, 32, (int)v42); /*0x568429*/
  v6 = v42; /*0x56842e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568440*/
  {
    LOWORD(v34) = *a2 + *v6; /*0x56845b*/
    HIWORD(v34) = a2[1] + v6[1]; /*0x568463*/
    v7 = (SHIWORD(v34) << 9) + (__int16)v34; /*0x56846e*/
    if ( v7 >= 0 /*0x568489*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x56849e*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684a6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5684ac*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5684a0*/
      }
      CellClass::AddContent((int)v9, a3, a3[140]); /*0x5684bb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x5684db*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684f9*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x5684ff*/
        v4 = this; /*0x568504*/
        goto LABEL_17; /*0x568504*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x5684e1*/
      v4 = this; /*0x5684e6*/
      v6 += 2; /*0x5684ea*/
    }
    else
    {
LABEL_17:
      v6 += 2; /*0x568508*/
    }
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3); /*0x568514*/
  if ( result == 6 )
  {
    v39 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 6 ? a3 : 0;
    result = *((_DWORD *)v39 + 328); /*0x568536*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v11 = *(_DWORD *)(result + 3832) - 1; /*0x568550*/
      v35 = v11; /*0x568553*/
      if ( v11 <= 0 ) /*0x568557*/
      {
        v35 = 1; /*0x568559*/
        v11 = 1; /*0x568561*/
      }
      v12 = v42; /*0x568573*/
      memset(v43, 0, sizeof(v43)); /*0x568577*/
      while ( 1 )
      {
        v13 = *v12; /*0x568579*/
        v41 = v12; /*0x56857c*/
        if ( *v12 == 0x7FFF && v12[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v14 = v13; /*0x56859b*/
        LOWORD(v38) = *a2 + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        HIWORD(v38) = v15 + a2[1]; /*0x5685b1*/
        v31 = v38; /*0x5685bc*/
        v16 = v15; /*0x5685c0*/
        if ( v11 > 0 )
        {
          v17 = v15 + a2[1]; /*0x5685c9*/
          v40 = v11; /*0x5685d0*/
          v18 = *a2 + v13; /*0x5685d4*/
          v19 = 16 * v15; /*0x5685d9*/
          do
          {
            if ( v18 >= 0 && v17 >= 0 )
            {
              v20 = v14 + (v14 < 0 ? 0x10 : 0);
              if ( v16 < 0 ) /*0x5685f7*/
              {
                v16 += 16; /*0x5685f9*/
                v19 += 256; /*0x5685fc*/
              }
              if ( !v43[v19 + v20] ) /*0x568605*/
              {
                v43[v19 + v20] = 1; /*0x56861a*/
                v21 = (v17 << 9) + v18; /*0x568623*/
                if ( v21 >= 0 && v21 < MapClass_field_0x140 ) /*0x56862d*/
                {
                  v22 = this->MapClass_field_0x13C; /*0x568633*/
                  if ( v22[v21] ) /*0x568639*/
                  {
                    if ( v21 >= 0x40000 || (v23 = (int *)v22[v21]) == 0 ) /*0x56864f*/
                    {
                      g_MissionQueueFrame.briefing[139] = v31; /*0x568655*/
                      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56865a*/
                    }
                    ++v23[64]; /*0x56865f*/
                  }
                }
              }
              --v18; /*0x568665*/
              --v17; /*0x568667*/
              v14 = v20 - 1; /*0x568669*/
              --v16; /*0x56866a*/
              LOWORD(v31) = v18; /*0x56866b*/
              HIWORD(v31) = v17; /*0x568670*/
              v19 -= 16; /*0x568675*/
            }
            --v40; /*0x56867d*/
          }
          while ( v40 );
          v11 = v35; /*0x568687*/
          v12 = v41; /*0x56868b*/
        }
        v12 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v25 = *((_DWORD *)v39 + 328); /*0x5686a2*/
        if ( *(_DWORD *)(i + v25 + 5668) != 0xFFFF || *(_DWORD *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          LOWORD(v32) = *(_WORD *)(i + v25 + 5668) + *(_DWORD *)a2; /*0x5686df*/
          HIWORD(v32) = *(_WORD *)(i + v25 + 5672) + HIWORD(*(_DWORD *)a2); /*0x5686e4*/
          v26 = (__int16)v32 + (SHIWORD(v32) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < MapClass_field_0x140 ) /*0x5686f9*/
          {
            v27 = this->MapClass_field_0x13C; /*0x5686ff*/
            if ( v27[v26] ) /*0x568705*/
            {
              if ( v26 >= 0x40000 ) /*0x568715*/
              {
                g_MissionQueueFrame.briefing[139] = v32; /*0x568721*/
                v28 = &g_MissionQueueFrame.briefing[130]; /*0x568726*/
              }
              else
              {
                v28 = (int *)v27[v26]; /*0x568717*/
              }
              ++v28[64]; /*0x56872b*/
            }
          }
        }
        result = *((_DWORD *)v39 + 328); /*0x568735*/
        if ( *(_DWORD *)(i + result + 5732) != 0xFFFF || *(_DWORD *)(i + result + 5736) != 0xFFFF ) /*0x56874b*/
        {
          LOWORD(v33) = *(_WORD *)(i + result + 5732) + *(_DWORD *)a2; /*0x568776*/
          HIWORD(v33) = *(_WORD *)(i + result + 5736) + HIWORD(*(_DWORD *)a2); /*0x56877b*/
          result = (__int16)v33 + (SHIWORD(v33) << 9); /*0x568786*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568790*/
          {
            v29 = this->MapClass_field_0x13C; /*0x568796*/
            if ( v29[result] ) /*0x56879c*/
            {
              if ( result >= 0x40000 ) /*0x5687ac*/
              {
                g_MissionQueueFrame.briefing[139] = v33; /*0x5687b8*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x5687bd*/
              }
              else
              {
                result = v29[result]; /*0x5687ae*/
              }
              v30 = *(_DWORD *)(result + 256); /*0x5687c2*/
              if ( v30 ) /*0x5687ca*/
                *(_DWORD *)(result + 256) = v30 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5687df*/
}



// ==== 0x005687F0  MapClass::ApplyOverlayReveal  this=MapClass  sig=csp ====
int __thiscall MapClass::ApplyOverlayReveal(MapClass *this, _WORD *a2, char *a3)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  char *v11; // edx
  int v12; // ebp
  _WORD *v13; // ebx
  __int16 v14; // cx
  int v15; // esi
  __int16 v16; // ax
  int v17; // edi
  __int16 v18; // bx
  __int16 v19; // bp
  int v20; // edx
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int j; // esi
  __int16 v27; // dx
  _DWORD *v28; // ecx
  int v29; // ecx
  int v30; // [esp+10h] [ebp-8A0h]
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+14h] [ebp-89Ch]
  char *v33; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v36; // [esp+20h] [ebp-890h]
  int v37; // [esp+24h] [ebp-88Ch]
  _BYTE *i; // [esp+28h] [ebp-888h]
  int v39; // [esp+2Ch] [ebp-884h]
  _BYTE v40[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v41[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x568801*/
  if ( !a3 ) /*0x568809*/
    return result; /*0x568809*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x568819*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 136))(a3); /*0x56881d*/
  if ( !*(_BYTE *)(result + 565) ) /*0x568823*/
    return result; /*0x568823*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 120))(a3); /*0x568835*/
  if ( result != 2 ) /*0x56883b*/
    return result; /*0x56883b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)a3 + 264))(a3, 0); /*0x56884c*/
  sub_48DEE0(v5, 32, (int)v40); /*0x568859*/
  v6 = v40; /*0x56885e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568870*/
  {
    LOWORD(v32) = *a2 + *v6; /*0x56888b*/
    HIWORD(v32) = a2[1] + v6[1]; /*0x568893*/
    v7 = (SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( v7 >= 0 /*0x5688b9*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x5688ce*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x5688d6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5688dc*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5688d0*/
      }
      CellClass::RemoveContent((int)v9, a3, a3[140]); /*0x5688eb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x56890b*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x568929*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x56892f*/
        v4 = this; /*0x568934*/
        goto LABEL_17; /*0x568934*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x568911*/
      v4 = this; /*0x568916*/
      v6 += 2; /*0x56891a*/
    }
    else
    {
LABEL_17:
      v6 += 2; /*0x568938*/
    }
  }
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 44))(a3); /*0x568944*/
  if ( result == 6 )
  {
    v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 44))(a3) == 6 ? a3 : 0;
    v33 = v11; /*0x568964*/
    result = *((_DWORD *)v11 + 328); /*0x568968*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v12 = *(_DWORD *)(result + 3832) - 1; /*0x568982*/
      v36 = v12; /*0x568985*/
      if ( v12 <= 0 ) /*0x568989*/
      {
        v36 = 1; /*0x56898b*/
        v12 = 1; /*0x568993*/
      }
      v13 = v40; /*0x5689a5*/
      memset(v41, 0, sizeof(v41)); /*0x5689a9*/
      for ( i = v40; ; i = v13 )
      {
        v14 = *v13; /*0x5689af*/
        if ( *v13 == 0x7FFF && v13[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v15 = v14; /*0x5689cd*/
        LOWORD(v37) = *a2 + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        HIWORD(v37) = v16 + a2[1]; /*0x5689e3*/
        v30 = v37; /*0x5689ee*/
        v17 = v16; /*0x5689f2*/
        if ( v12 > 0 )
        {
          v18 = v16 + a2[1]; /*0x5689fb*/
          v39 = v12; /*0x568a02*/
          v19 = *a2 + v14; /*0x568a06*/
          v20 = 16 * v16; /*0x568a0b*/
          do
          {
            if ( v19 >= 0 && v18 >= 0 )
            {
              v21 = v15 + (v15 < 0 ? 0x10 : 0);
              if ( v17 < 0 ) /*0x568a29*/
              {
                v17 += 16; /*0x568a2b*/
                v20 += 256; /*0x568a2e*/
              }
              if ( !v41[v20 + v21] ) /*0x568a37*/
              {
                v41[v20 + v21] = 1; /*0x568a4c*/
                v22 = (v18 << 9) + v19; /*0x568a55*/
                if ( v22 >= 0 && v22 < MapClass_field_0x140 ) /*0x568a5f*/
                {
                  v23 = this->MapClass_field_0x13C; /*0x568a65*/
                  if ( v23[v22] ) /*0x568a6b*/
                  {
                    if ( v22 >= 0x40000 || (v24 = (int *)v23[v22]) == 0 ) /*0x568a81*/
                    {
                      g_MissionQueueFrame.briefing[139] = v30; /*0x568a87*/
                      v24 = &g_MissionQueueFrame.briefing[130]; /*0x568a8c*/
                    }
                    v25 = v24[64]; /*0x568a91*/
                    if ( v25 ) /*0x568a99*/
                      v24[64] = v25 - 1; /*0x568a9c*/
                  }
                }
              }
              --v19; /*0x568aa2*/
              --v18; /*0x568aa4*/
              v15 = v21 - 1; /*0x568aa6*/
              --v17; /*0x568aa7*/
              LOWORD(v30) = v19; /*0x568aa8*/
              HIWORD(v30) = v18; /*0x568aad*/
              v20 -= 16; /*0x568ab2*/
            }
            --v39; /*0x568aba*/
          }
          while ( v39 );
          v12 = v36; /*0x568ac4*/
          v13 = i; /*0x568ac8*/
        }
        v11 = v33; /*0x568acc*/
        v13 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        result = *((_DWORD *)v11 + 328); /*0x568ae3*/
        if ( *(_DWORD *)(j + result + 5668) != 0xFFFF || *(_DWORD *)(j + result + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v27 = *(_WORD *)(j + result + 5672) + HIWORD(*(_DWORD *)a2); /*0x568b1c*/
          LOWORD(v31) = *(_WORD *)(j + result + 5668) + *(_DWORD *)a2; /*0x568b24*/
          result = (__int16)v31 + (v27 << 9); /*0x568b32*/
          HIWORD(v31) = v27; /*0x568b34*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568b41*/
          {
            v28 = this->MapClass_field_0x13C; /*0x568b47*/
            if ( v28[result] ) /*0x568b4d*/
            {
              if ( result >= 0x40000 ) /*0x568b5d*/
              {
                g_MissionQueueFrame.briefing[139] = v31; /*0x568b69*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x568b6e*/
              }
              else
              {
                result = v28[result]; /*0x568b5f*/
              }
              v29 = *(_DWORD *)(result + 256); /*0x568b73*/
              if ( v29 ) /*0x568b7b*/
                *(_DWORD *)(result + 256) = v29 - 1; /*0x568b7e*/
            }
          }
          v11 = v33; /*0x568b84*/
        }
      }
    }
  }
  return result; /*0x568b94*/
}



// ==== 0x00568BB0  MapClass::PostProcessReveal  this=MapClass  sig=csp ====
int __thiscall MapClass::PostProcessReveal(MapClass *this, char a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _BYTE *v5; // ecx
  void *MapClass_field_0xF4; // eax
  int i; // eax
  void *v8; // eax
  int j; // esi
  TagClass *v10; // eax
  int k; // edx
  unsigned int v12; // eax
  int *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  int *v16; // eax
  int updated; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x568bba*/
  v20 = 0; /*0x568bc1*/
  if ( dword_A8E9B8 > 0 ) /*0x568bce*/
  {
    v4 = dword_A8E9AC; /*0x568bd0*/
    do /*0x568bfb*/
    {
      v5 = (_BYTE *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = dword_A8E9AC; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < dword_A8E9B8 ); /*0x568bfb*/
  }
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x568bfd*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c03*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x568c09*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x568c12*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x568c27*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c34*/
    *(_DWORD *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = this->MapClass_field_0xF4; /*0x568c54*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c5a*/
  *(_DWORD *)&this->__pad_10C[4] = v8; /*0x568c60*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)v8 - 1; /*0x568c69*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)v8 + 4; /*0x568c7e*/
  for ( j = LayerClass::CellIteratorNext((LayerClass *)this); j; j = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c8d*/
  {
    *(_DWORD *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView((int *)j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(TagClass **)(j + 60); /*0x568cc4*/
    *(_DWORD *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < *(int *)&stru_87F5F0.__pad_58[716]; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          HIWORD(v21) = *(_WORD *)(j + 38); /*0x568d01*/
          LOWORD(v21) = k + *(_DWORD *)&this->__pad_10C[24]; /*0x568d09*/
          v12 = (__int16)v21 + (SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_MissionQueueFrame.briefing[139] = v21; /*0x568d30*/
            v13 = &g_MissionQueueFrame.briefing[130]; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( TagClass::HasCrossesVerticalLineEvent(*(TagClass **)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < *(int *)&stru_87F5F0.__pad_58[720]; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          LOWORD(v22) = *(_WORD *)(j + 36); /*0x568d7b*/
          HIWORD(v22) = (_WORD)this->MapClass_field_0x128 + m; /*0x568d80*/
          v15 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_MissionQueueFrame.briefing[139] = v22; /*0x568daa*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
    if ( a2 ) /*0x568dd2*/
      updated = ObjectClass::UpdateTiberiumGrowth(j, 0); /*0x568dd8*/
    else
      updated = Building::GetNthOfType((Building *)j); /*0x568de1*/
    v20 += updated; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
    v18 = *(_DWORD *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}



// ==== 0x00568E40  Terrain::PlaceCliffs  this=Terrain  sig=csp ====
void __thiscall Terrain::PlaceCliffs(Terrain *this, int a2, int a3, int *a4)
{
  unsigned int v5; // eax
  int *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  int *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int v23; // edi
  int m_8; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  int *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  int *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  int *v43; // eax
  int *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  #374 *v50; // eax
  #374 *v51; // eax
  int v52; // eax
  int v53; // eax
  int *v54; // eax
  unsigned int v55; // edx
  int *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  int *v64; // [esp+14h] [ebp-60h]
  int v65; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  int v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  int v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  __int16 v71[2]; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  _VectorClass_VCell v81; // [esp+5Ch] [ebp-18h] BYREF
  int v82; // [esp+70h] [ebp-4h]
  int v83; // [esp+78h] [ebp+4h]
  int v84; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x568e4b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)(a2 + 36); /*0x568e8a*/
    v64 = &g_MissionQueueFrame.briefing[130]; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor((VectorClass *)&v81, 0, 0); /*0x568ea5*/
  v7 = g_TerrainSoundTable2; /*0x568eae*/
  v8 = g_TerrainSoundConfig; /*0x568eb4*/
  *(_DWORD *)v81.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x568ebd*/
  v82 = 10; /*0x568ec5*/
  *(_DWORD *)v81.__tail_10 = 0; /*0x568ed4*/
  for ( i = 1; i < 30; ++i ) /*0x568edc*/
  {
    v65 = v64[9]; /*0x568ef3*/
    LOWORD(v67) = LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + v65; /*0x568f06*/
    HIWORD(v67) = HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + HIWORD(v65); /*0x568f0e*/
    v9 = SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (__int16)v67 + v9 < 0; /*0x568f1d*/
    v11 = (__int16)v67 + v9; /*0x568f1d*/
    *(_DWORD *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) == 0 ) /*0x568f37*/
    {
      g_MissionQueueFrame.briefing[139] = v67; /*0x568f3f*/
      v64 = &g_MissionQueueFrame.briefing[130]; /*0x568f45*/
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = v64[14] - g_Cell_BuildabilityLUT + 1; /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != dword_ABC1E8 || *((_BYTE *)v64 + 282) != 4 ) /*0x568f79*/
      {
        if ( v13 != dword_AA0E38 || *((_BYTE *)v64 + 282) != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 /*0x568fbf*/
            || *((_BYTE *)v64 + 282) != 4 )
          {
            continue; /*0x568fbf*/
          }
          Cell::SetTileType(v77, v7 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x568fdd*/
          v14 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x568fe9*/
          v7 = g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          v15 = v77[0] + (v77[1] << 9); /*0x569018*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x56902e*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x569030*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x569036*/
          }
          *((_BYTE *)v16 + 283) += 4; /*0x569049*/
          v17 = *CellStruct::Add((CellStruct *)v77, &v72, &g_DDrawSurfaceManager.scenario[82]); /*0x56905d*/
          *(_DWORD *)v71 = v17; /*0x56905f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56906e*/
          if ( v18 >= 0x40000 || (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x569084*/
          {
            g_MissionQueueFrame.briefing[139] = v17; /*0x569086*/
            v19 = &g_MissionQueueFrame.briefing[130]; /*0x56908c*/
          }
          *((_BYTE *)v19 + 283) += 4; /*0x56909f*/
          v20 = *CellStruct::Add((CellStruct *)v77, &v73, &g_DDrawSurfaceManager.scenario[86]); /*0x5690b3*/
          *(_DWORD *)v71 = v20; /*0x5690b5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5690c4*/
          if ( v21 >= 0x40000 || (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) == 0 ) /*0x5690da*/
          {
            g_MissionQueueFrame.briefing[139] = v20; /*0x5690dc*/
            v22 = &g_MissionQueueFrame.briefing[130]; /*0x5690e2*/
          }
          v23 = 0; /*0x5690f0*/
          *((_BYTE *)v22 + 283) += 4; /*0x5690f2*/
          m_8 = v81.m_8; /*0x5690f8*/
LABEL_33:
          v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( *(int *)v81.__tail_10 < m_8 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !BYTE1(v81.m_C) && m_8 || v82 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569141*/
                   &v81,
                   v82 + m_8,
                   0) )
            {
LABEL_39:
              v26 = (*(_DWORD *)v81.__tail_10)++; /*0x569150*/
              *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v26) = v68; /*0x56915b*/
            }
            m_8 = v81.m_8; /*0x56915e*/
LABEL_41:
            if ( ++v25 >= 3 ) /*0x569166*/
            {
              if ( ++v23 >= 2 ) /*0x56916c*/
                goto LABEL_43; /*0x56916c*/
              goto LABEL_33; /*0x56916c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x5693de*/
        *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5693fc*/
        v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569401*/
LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5693ca*/
LABEL_85:
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == dword_ABC1D0 && *((_BYTE *)v64 + 282) == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[82]); /*0x56942c*/
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == dword_AA1540 && *((_BYTE *)v64 + 282) == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[82]); /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || *((_BYTE *)v64 + 282) != 2 ) /*0x5691e7*/
      continue; /*0x5691e7*/
    Cell::SetTileType(v77, g_Cell_BuildabilityLUT + v8 - 1, -1, -1, 0); /*0x569200*/
    v27 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x56920c*/
    v8 = g_TerrainSoundConfig; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569226*/
    {
      v7 = g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
    if ( v28 >= 0x40000 || (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) == 0 ) /*0x569251*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x569253*/
      v29 = &g_MissionQueueFrame.briefing[130]; /*0x569259*/
    }
    *((_BYTE *)v29 + 283) += 4; /*0x56926c*/
    v30 = *CellStruct::Add((CellStruct *)v77, &v74, &g_DDrawSurfaceManager.scenario[84]); /*0x569280*/
    *(_DWORD *)v71 = v30; /*0x569282*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569291*/
    if ( v31 >= 0x40000 || (v32 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      g_MissionQueueFrame.briefing[139] = v30; /*0x5692a9*/
      v32 = &g_MissionQueueFrame.briefing[130]; /*0x5692af*/
    }
    *((_BYTE *)v32 + 283) += 4; /*0x5692c2*/
    v33 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5692d6*/
    *(_DWORD *)v71 = v33; /*0x5692d8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5692e7*/
    if ( v34 >= 0x40000 || (v35 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      g_MissionQueueFrame.briefing[139] = v33; /*0x5692ff*/
      v35 = &g_MissionQueueFrame.briefing[130]; /*0x569305*/
    }
    v36 = 0; /*0x569313*/
    *((_BYTE *)v35 + 283) += 4; /*0x569315*/
    v37 = v81.m_8; /*0x56931b*/
    do /*0x56938f*/
    {
      v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( *(int *)v81.__tail_10 < v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (BYTE1(v81.m_C) || !v37) && v82 > 0 ) /*0x569355*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569364*/
                 &v81,
                 v82 + v37,
                 0) )
          {
LABEL_75:
            v39 = (*(_DWORD *)v81.__tail_10)++; /*0x56936b*/
            *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v39) = v69; /*0x56937e*/
          }
          v37 = v81.m_8; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x56916e*/
LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569174*/
  }
  if ( i == 30 ) /*0x569473*/
  {
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x569479*/
    Buffer::Cleanup(&v81); /*0x569481*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x5694a6*/
    if ( v42 < 0x40000 && (v43 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)(a2 + 36); /*0x5694c2*/
      v44 = &g_MissionQueueFrame.briefing[130]; /*0x5694c8*/
    }
    v45 = a4; /*0x5694cd*/
    if ( a4 ) /*0x5694d6*/
    {
      v83 = *(_DWORD *)(a2 + 36); /*0x5694e7*/
      v78 = ((__int16)*(_DWORD *)(a2 + 36) << 8) + 128; /*0x5694f0*/
      v46 = g_MissionQueueFrame.briefing[272] * *(char *)(a2 + 283); /*0x5694fb*/
      v79 = (SHIWORD(v83) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      *v45 = v75; /*0x56952f*/
      v45[1] = v47; /*0x569532*/
    }
    if ( i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        v49 = v44[14] - g_Cell_BuildabilityLUT + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (*((_BYTE *)v44 + 282) & 1) != 0) /*0x569570*/
          && (v49 != g_TerrainSoundConfig || *((_BYTE *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569580*/
            if ( v50 ) /*0x56958a*/
            {
              a4 = (int *)v44[9]; /*0x569596*/
              Object::SpawnAtCell(v50, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96), (__int16 *)&a4, -1); /*0x5695a9*/
            }
          }
          else
          {
            v51 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5695ab*/
            if ( v51 ) /*0x5695b5*/
            {
              *(_DWORD *)v71 = v44[9]; /*0x5695be*/
              Object::SpawnAtCell(v51, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 100), v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = v44[9]; /*0x5695dd*/
        LOWORD(v84) = LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + v70; /*0x5695f0*/
        HIWORD(v84) = HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + HIWORD(v70); /*0x5695f8*/
        v52 = SHIWORD(v84) << 9; /*0x569604*/
        v10 = (__int16)v84 + v52 < 0; /*0x569607*/
        v53 = (__int16)v84 + v52; /*0x569607*/
        *(_DWORD *)v77 = v84; /*0x569609*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v53)) == 0 ) /*0x569621*/
        {
          g_MissionQueueFrame.briefing[139] = v84; /*0x569627*/
          v44 = &g_MissionQueueFrame.briefing[130]; /*0x56962d*/
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        --v48; /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569652*/
      if ( v55 >= 0x40000 || (v56 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v55)) == 0 ) /*0x569669*/
      {
        g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x56966b*/
        v56 = &g_MissionQueueFrame.briefing[130]; /*0x569671*/
      }
      v80 = g_MissionQueueFrame.briefing[272] * *((char *)v56 + 283); /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (v77[0] << 8) + 128; /*0x5696a5*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x5696b1*/
      v57 = *v45; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      v59 = v45[1]; /*0x5696bd*/
      v60 = *v45; /*0x5696c2*/
      if ( *v45 >= v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = v45[1]; /*0x5696cb*/
      *v45 = v60 - 64; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45[1] = v61 - 64; /*0x5696e2*/
      v45[2] = abs32(v57 - v58) + 128; /*0x5696ec*/
      v45[3] = abs32(v59 - v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(this); /*0x56970c*/
    if ( *(int *)v81.__tail_10 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v81); /*0x569722*/
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x56972b*/
    if ( *(_DWORD *)&v81.m_1[3] ) /*0x569735*/
    {
      if ( BYTE1(v81.m_C) ) /*0x56973d*/
        __3_YAXPAX_Z(*(void **)&v81.m_1[3]); /*0x569740*/
    }
  }
}



// ==== 0x00569760  ObjectClass::DestroyCliffMap  this=ObjectClass  sig=csp ====
void __thiscall DestroyCliffMap(TechnoClass *this, int a2, int a3, int *a4)
{
  unsigned int v5; // eax
  CellClass *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  CellClass *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  CellClass *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  CellClass *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  CellClass *v22; // eax
  int v23; // edi
  int m_8; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  CellClass *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  CellClass *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  CellClass *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  CellClass *v43; // eax
  CellClass *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  Object *v50; // eax
  Object *v51; // eax
  int v52; // eax
  int v53; // eax
  CellClass *v54; // eax
  unsigned int v55; // edx
  CellClass *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  CellClass *v64; // [esp+14h] [ebp-60h]
  int smudgeTypeIndex; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  int v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  int v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  __int16 v71[2]; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  _VectorClass_VCell v81; // [esp+5Ch] [ebp-18h] BYREF
  int v82; // [esp+70h] [ebp-4h]
  int v83; // [esp+78h] [ebp+4h]
  int v84; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = dword_ABD480; /*0x56976b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x56978c*/
  if ( v5 < 0x40000 && (v6 = *(CellClass **)(dword_87F924 + 4 * v5)) != 0 ) /*0x5697a2*/
  {
    v64 = v6; /*0x5697a4*/
  }
  else
  {
    dword_ABDC74 = *(_DWORD *)(a2 + 36); /*0x5697aa*/
    v64 = &unk_ABDC50; /*0x5697b0*/
  }
  v63 = 0; /*0x5697c0*/
  VectorClass::CellConstructor((VectorClass *)&v81, 0, 0); /*0x5697c5*/
  v7 = g_TerrainSoundTable2; /*0x5697ce*/
  v8 = g_TerrainSoundConfig; /*0x5697d4*/
  *(_DWORD *)v81.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5697dd*/
  v82 = 10; /*0x5697e5*/
  *(_DWORD *)v81.__tail_10 = 0; /*0x5697f4*/
  for ( i = 1; i < 30; ++i ) /*0x5697fc*/
  {
    smudgeTypeIndex = v64->smudgeTypeIndex; /*0x569813*/
    LOWORD(v67) = LOWORD(dword_89F688[a3 & 7]) + smudgeTypeIndex; /*0x569826*/
    HIWORD(v67) = HIWORD(dword_89F688[a3 & 7]) + HIWORD(smudgeTypeIndex); /*0x56982e*/
    v9 = SHIWORD(v67) << 9; /*0x56983a*/
    v10 = (__int16)v67 + v9 < 0; /*0x56983d*/
    v11 = (__int16)v67 + v9; /*0x56983d*/
    *(_DWORD *)v77 = v67; /*0x56983f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) == 0 ) /*0x569857*/
    {
      dword_ABDC74 = v67; /*0x56985f*/
      v64 = &unk_ABDC50; /*0x569865*/
    }
    else
    {
      v64 = v12; /*0x569859*/
    }
    v13 = *(_DWORD *)&v64->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x569880*/
    if ( a3 == 2 ) /*0x569884*/
    {
      if ( v13 != dword_ABC1E8 || v64->height[0] != 4 ) /*0x569899*/
      {
        if ( v13 != dword_AA0E38 || v64->height[0] != 4 ) /*0x5698ae*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 || v64->height[0] != 4 ) /*0x5698df*/
            continue; /*0x5698df*/
          Cell::SetTileType(v77, v7 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x5698fd*/
          v14 = InvalidateTileRegionMap(this, v77); /*0x569909*/
          v7 = g_TerrainSoundTable2; /*0x56990e*/
          v63 |= v14; /*0x56991d*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569923*/
            goto LABEL_44; /*0x569923*/
          v15 = v77[0] + (v77[1] << 9); /*0x569938*/
          if ( v15 >= 0x40000 || (v16 = *(CellClass **)(dword_87F924 + 4 * v15)) == 0 ) /*0x56994e*/
          {
            dword_ABDC74 = *(_DWORD *)v77; /*0x569950*/
            v16 = &unk_ABDC50; /*0x569956*/
          }
          v16->level[0] += 4; /*0x569969*/
          v17 = *CellStruct::Add((CellStruct *)v77, &v72, dword_89F688); /*0x56997d*/
          *(_DWORD *)v71 = v17; /*0x56997f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56998e*/
          if ( v18 >= 0x40000 || (v19 = *(CellClass **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5699a4*/
          {
            dword_ABDC74 = v17; /*0x5699a6*/
            v19 = &unk_ABDC50; /*0x5699ac*/
          }
          v19->level[0] += 4; /*0x5699bf*/
          v20 = *CellStruct::Add((CellStruct *)v77, &v73, &dword_89F698); /*0x5699d3*/
          *(_DWORD *)v71 = v20; /*0x5699d5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5699e4*/
          if ( v21 >= 0x40000 || (v22 = *(CellClass **)(dword_87F924 + 4 * v21)) == 0 ) /*0x5699fa*/
          {
            dword_ABDC74 = v20; /*0x5699fc*/
            v22 = &unk_ABDC50; /*0x569a02*/
          }
          v23 = 0; /*0x569a10*/
          v22->level[0] += 4; /*0x569a12*/
          m_8 = v81.m_8; /*0x569a18*/
LABEL_33:
          v25 = -2; /*0x569a1c*/
          while ( 1 ) /*0x569a2e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x569a2e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569a33*/
            if ( *(int *)v81.__tail_10 < m_8 ) /*0x569a3e*/
              goto LABEL_39; /*0x569a3e*/
            if ( !BYTE1(v81.m_C) && m_8 || v82 <= 0 ) /*0x569a52*/
              goto LABEL_41; /*0x569a52*/
            if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569a61*/
                   &v81,
                   v82 + m_8,
                   0) )
            {
LABEL_39:
              v26 = (*(_DWORD *)v81.__tail_10)++; /*0x569a70*/
              *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v26) = v68; /*0x569a7b*/
            }
            m_8 = v81.m_8; /*0x569a7e*/
LABEL_41:
            if ( ++v25 >= 3 ) /*0x569a86*/
            {
              if ( ++v23 >= 2 ) /*0x569a8c*/
                goto LABEL_43; /*0x569a8c*/
              goto LABEL_33; /*0x569a8c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x569cfe*/
        *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569d1c*/
        v40 = InvalidateTileRegionMap(this, v71); /*0x569d21*/
LABEL_86:
        v63 |= v40; /*0x569d88*/
        break; /*0x569d88*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x569ccc*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569cea*/
LABEL_85:
      v40 = InvalidateTileRegionMap(this, v71); /*0x569d80*/
      goto LABEL_86; /*0x569d83*/
    }
    if ( a3 != 4 ) /*0x569ab4*/
      continue; /*0x569ab4*/
    if ( v13 == dword_ABC1D0 && v64->height[0] == 2 ) /*0x569ac5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d2e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x569d4c*/
      v40 = InvalidateTileRegionMap(this, v71); /*0x569d51*/
      goto LABEL_86; /*0x569d51*/
    }
    if ( v13 == dword_AA1540 && v64->height[0] == 2 ) /*0x569ada*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d5e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x569d7c*/
      goto LABEL_85; /*0x569d7c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || v64->height[0] != 2 ) /*0x569b07*/
      continue; /*0x569b07*/
    Cell::SetTileType(v77, g_TerrainBridgeIndex + v8 - 1, -1, -1, 0); /*0x569b20*/
    v27 = InvalidateTileRegionMap(this, v77); /*0x569b2c*/
    v8 = g_TerrainSoundConfig; /*0x569b35*/
    v63 |= v27; /*0x569b3d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569b46*/
    {
      v7 = g_TerrainSoundTable2; /*0x569cb6*/
      continue; /*0x569cbc*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x569b5b*/
    if ( v28 >= 0x40000 || (v29 = *(CellClass **)(dword_87F924 + 4 * v28)) == 0 ) /*0x569b71*/
    {
      dword_ABDC74 = *(_DWORD *)v77; /*0x569b73*/
      v29 = &unk_ABDC50; /*0x569b79*/
    }
    v29->level[0] += 4; /*0x569b8c*/
    v30 = *CellStruct::Add((CellStruct *)v77, &v74, &dword_89F690); /*0x569ba0*/
    *(_DWORD *)v71 = v30; /*0x569ba2*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569bb1*/
    if ( v31 >= 0x40000 || (v32 = *(CellClass **)(dword_87F924 + 4 * v31)) == 0 ) /*0x569bc7*/
    {
      dword_ABDC74 = v30; /*0x569bc9*/
      v32 = &unk_ABDC50; /*0x569bcf*/
    }
    v32->level[0] += 4; /*0x569be2*/
    v33 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569bf6*/
    *(_DWORD *)v71 = v33; /*0x569bf8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x569c07*/
    if ( v34 >= 0x40000 || (v35 = *(CellClass **)(dword_87F924 + 4 * v34)) == 0 ) /*0x569c1d*/
    {
      dword_ABDC74 = v33; /*0x569c1f*/
      v35 = &unk_ABDC50; /*0x569c25*/
    }
    v36 = 0; /*0x569c33*/
    v35->level[0] += 4; /*0x569c35*/
    v37 = v81.m_8; /*0x569c3b*/
    do /*0x569caf*/
    {
      v38 = -2; /*0x569c3f*/
      do /*0x569ca9*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569c51*/
        HIWORD(v69) = v36 + v77[1]; /*0x569c56*/
        if ( *(int *)v81.__tail_10 < v37 ) /*0x569c61*/
          goto LABEL_75; /*0x569c61*/
        if ( (BYTE1(v81.m_C) || !v37) && v82 > 0 ) /*0x569c75*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569c84*/
                 &v81,
                 v82 + v37,
                 0) )
          {
LABEL_75:
            v39 = (*(_DWORD *)v81.__tail_10)++; /*0x569c8b*/
            *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v39) = v69; /*0x569c9e*/
          }
          v37 = v81.m_8; /*0x569ca1*/
        }
        ++v38; /*0x569ca5*/
      }
      while ( v38 < 3 ); /*0x569ca9*/
      ++v36; /*0x569cab*/
    }
    while ( v36 < 2 ); /*0x569caf*/
LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x569a8e*/
LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569a94*/
  }
  if ( i == 30 ) /*0x569d93*/
  {
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x569d99*/
    Buffer::Cleanup(&v81); /*0x569da1*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x569dc6*/
    if ( v42 < 0x40000 && (v43 = *(CellClass **)(dword_87F924 + 4 * v42)) != 0 ) /*0x569ddc*/
    {
      v44 = v43; /*0x569dde*/
    }
    else
    {
      dword_ABDC74 = *(_DWORD *)(a2 + 36); /*0x569de2*/
      v44 = &unk_ABDC50; /*0x569de8*/
    }
    v45 = a4; /*0x569ded*/
    if ( a4 ) /*0x569df6*/
    {
      v83 = *(_DWORD *)(a2 + 36); /*0x569e07*/
      v78 = ((__int16)*(_DWORD *)(a2 + 36) << 8) + 128; /*0x569e10*/
      v46 = dword_ABDE88 * *(char *)(a2 + 283); /*0x569e1b*/
      v79 = (SHIWORD(v83) << 8) + 128; /*0x569e2e*/
      v80 = v46; /*0x569e36*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569e42*/
      v47 = v76; /*0x569e4b*/
      *v45 = v75; /*0x569e4f*/
      v45[1] = v47; /*0x569e52*/
    }
    if ( i > 0 ) /*0x569e57*/
    {
      v48 = i; /*0x569e5d*/
      do /*0x569f59*/
      {
        v49 = *(_DWORD *)&v44->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x569e74*/
        if ( (v49 != g_TerrainSoundTable2 || (v44->height[0] & 1) != 0) /*0x569e90*/
          && (v49 != g_TerrainSoundConfig || v44->height[0] >= 5u) )
        {
          if ( a3 == 2 ) /*0x569e9e*/
          {
            v50 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x569ea0*/
            if ( v50 ) /*0x569eaa*/
            {
              a4 = (int *)v44->smudgeTypeIndex; /*0x569eb6*/
              Object::SpawnAtCell(v50, dword_A83D84->PitchAngle[1], (__int16 *)&a4, -1); /*0x569ecc*/
            }
          }
          else
          {
            v51 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x569ece*/
            if ( v51 ) /*0x569ed8*/
            {
              *(_DWORD *)v71 = v44->smudgeTypeIndex; /*0x569ee1*/
              Object::SpawnAtCell(v51, dword_A83D84->BuildLimit, v71, -1); /*0x569ef7*/
            }
          }
        }
        v70 = v44->smudgeTypeIndex; /*0x569f03*/
        LOWORD(v84) = LOWORD(dword_89F688[a3 & 7]) + v70; /*0x569f16*/
        HIWORD(v84) = HIWORD(dword_89F688[a3 & 7]) + HIWORD(v70); /*0x569f1e*/
        v52 = SHIWORD(v84) << 9; /*0x569f2a*/
        v10 = (__int16)v84 + v52 < 0; /*0x569f2d*/
        v53 = (__int16)v84 + v52; /*0x569f2d*/
        *(_DWORD *)v77 = v84; /*0x569f2f*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(CellClass **)(dword_87F924 + 4 * v53)) == 0 ) /*0x569f47*/
        {
          dword_ABDC74 = v84; /*0x569f4d*/
          v44 = &unk_ABDC50; /*0x569f53*/
        }
        else
        {
          v44 = v54; /*0x569f49*/
        }
        --v48; /*0x569f58*/
      }
      while ( v48 ); /*0x569f59*/
    }
    if ( v45 ) /*0x569f61*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569f78*/
      if ( v55 >= 0x40000 || (v56 = *(CellClass **)(dword_87F924 + 4 * v55)) == 0 ) /*0x569f8f*/
      {
        dword_ABDC74 = *(_DWORD *)v77; /*0x569f91*/
        v56 = &unk_ABDC50; /*0x569f97*/
      }
      v80 = dword_ABDE88 * v56->level[0]; /*0x569fb5*/
      v79 = (v77[1] << 8) + 128; /*0x569fbf*/
      v78 = (v77[0] << 8) + 128; /*0x569fcb*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569fd7*/
      v57 = *v45; /*0x569fdc*/
      v58 = v75; /*0x569fdf*/
      v59 = v45[1]; /*0x569fe3*/
      v60 = *v45; /*0x569fe8*/
      if ( *v45 >= v75 ) /*0x569fea*/
        v60 = v75; /*0x569fec*/
      v61 = v45[1]; /*0x569ff1*/
      *v45 = v60 - 64; /*0x569ff3*/
      v62 = v76; /*0x569ff6*/
      if ( v59 >= v76 ) /*0x569ffc*/
        v61 = v76; /*0x569ffe*/
      v45[1] = v61 - 64; /*0x56a008*/
      v45[2] = abs32(v57 - v58) + 128; /*0x56a012*/
      v45[3] = abs32(v59 - v62) + 128; /*0x56a023*/
    }
    if ( v63 ) /*0x56a02c*/
      Terrain::ConnectivityGraph((Terrain *)this); /*0x56a032*/
    if ( *(_DWORD *)v81.__tail_10 ) /*0x56a03d*/
      LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v81); /*0x56a048*/
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x56a051*/
    if ( *(_DWORD *)&v81.m_1[3] ) /*0x56a05b*/
    {
      if ( BYTE1(v81.m_C) ) /*0x56a063*/
        __3_YAXPAX_Z(*(void **)&v81.m_1[3]); /*0x56a066*/
    }
  }
}



// ==== 0x0056A080  ObjectClass::PlaceTerrainCliffsRegion  this=ObjectClass  sig=csp ====
int __thiscall PlaceTerrainCliffsRegion(ObjectClass *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ebp
  unsigned int v10; // eax
  int *v11; // eax
  int *v12; // ebp
  int v13; // ebx
  __int16 v14; // ax
  __int16 v15; // di
  unsigned int v16; // ecx
  int *v17; // ecx
  unsigned int v18; // ecx
  int *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int *v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int *v27; // eax
  _BYTE *v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // [esp+4h] [ebp-34h] BYREF
  int v32; // [esp+8h] [ebp-30h]
  int v33; // [esp+Ch] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-28h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h]
  int v37; // [esp+1Ch] [ebp-1Ch]
  int v38; // [esp+20h] [ebp-18h] BYREF
  int v39; // [esp+24h] [ebp-14h]
  __int16 v40[2]; // [esp+28h] [ebp-10h] BYREF
  int v41; // [esp+2Ch] [ebp-Ch] BYREF
  int v42; // [esp+30h] [ebp-8h] BYREF
  int v43; // [esp+34h] [ebp-4h] BYREF

  result = this->q04A; /*0x56a086*/
  v3 = result + this->q04C; /*0x56a092*/
  v33 = result; /*0x56a094*/
  if ( result < v3 ) /*0x56a09a*/
  {
    v4 = g_TerrainSoundTable2; /*0x56a0a0*/
    v5 = g_TerrainSoundConfig; /*0x56a0a9*/
    do /*0x56a4ab*/
    {
      v6 = this->u32_49; /*0x56a0af*/
      v7 = v6 + *((_DWORD *)this + 75); /*0x56a0bb*/
      v32 = v6; /*0x56a0bd*/
      if ( v6 < v7 ) /*0x56a0c3*/
      {
        v8 = (__int16)result << 9; /*0x56a0cc*/
        v34 = v8; /*0x56a0cf*/
        while ( 1 ) /*0x56a0dd*/
        {
          v9 = this->q04F; /*0x56a0dd*/
          HIWORD(v31) = result; /*0x56a0e3*/
          LOWORD(v31) = v6; /*0x56a0ed*/
          if ( *(_DWORD *)(v9 + 4 * ((__int16)v6 + v8)) ) /*0x56a0f2*/
          {
            v10 = v34 + (__int16)v6; /*0x56a101*/
            if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56a119*/
            {
              v12 = v11; /*0x56a11b*/
            }
            else
            {
              v12 = &g_MissionQueueFrame.briefing[130]; /*0x56a123*/
              g_MissionQueueFrame.briefing[139] = v31; /*0x56a128*/
            }
            v13 = v12[14] - g_Cell_BuildabilityLUT + 1; /*0x56a13c*/
            if ( (v13 == dword_ABC2B4 || v13 == dword_AA1130) && *((_BYTE *)v12 + 282) == 8 ) /*0x56a150*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a159*/
              v4 = g_TerrainSoundTable2; /*0x56a15e*/
              v5 = g_TerrainSoundConfig; /*0x56a164*/
            }
            if ( (v13 == v4 || v13 == v4 + 3 || v13 == v4 + 4 || v13 == v4 + 1 || v13 == v4 + 2) /*0x56a195*/
              && *((_BYTE *)v12 + 282) == 5 )
            {
              if ( v13 == v4 + 4 ) /*0x56a1a0*/
              {
                Cell::SetTileType((__int16 *)&v31, v4 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a1bd*/
                v14 = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1d5*/
                LOWORD(v35) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1da*/
                HIWORD(v35) = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1e8*/
                v15 = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1ed*/
                v16 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31) /*0x56a1f1*/
                    + ((__int16)(HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88])) << 9);
                if ( v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x56a208*/
                {
                  g_MissionQueueFrame.briefing[139] = v35; /*0x56a20a*/
                  v17 = &g_MissionQueueFrame.briefing[130]; /*0x56a210*/
                }
                *((_BYTE *)v17 + 283) += 4; /*0x56a21e*/
                LOWORD(v36) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a237*/
                HIWORD(v36) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14; /*0x56a23f*/
                v18 = (__int16)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[82])) /*0x56a24a*/
                    + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14) << 9);
                if ( v18 >= 0x40000 || (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x56a261*/
                {
                  g_MissionQueueFrame.briefing[139] = v36; /*0x56a267*/
                  v19 = &g_MissionQueueFrame.briefing[130]; /*0x56a26d*/
                }
                *((_BYTE *)v19 + 283) += 4; /*0x56a27b*/
                HIWORD(v37) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14; /*0x56a291*/
                LOWORD(v37) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x56a296*/
                v20 = (__int16)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[86])) /*0x56a2a4*/
                    + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14) << 9);
                if ( v20 >= 0x40000 || (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56a2ba*/
                {
                  g_MissionQueueFrame.briefing[139] = v37; /*0x56a2c0*/
                  v21 = &g_MissionQueueFrame.briefing[130]; /*0x56a2c5*/
                }
                *((_BYTE *)v21 + 283) += 4; /*0x56a2ca*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a2d8*/
              v4 = g_TerrainSoundTable2; /*0x56a2dd*/
              v5 = g_TerrainSoundConfig; /*0x56a2e3*/
            }
            if ( (v13 == dword_AA1548 || v13 == dword_AA0740) && *((_BYTE *)v12 + 282) == 12 ) /*0x56a300*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a309*/
              v4 = g_TerrainSoundTable2; /*0x56a30e*/
              v5 = g_TerrainSoundConfig; /*0x56a314*/
            }
            if ( (v13 == v5 || v13 == v5 + 3 || v13 == v5 + 4 || v13 == v5 + 2 || v13 == v5 + 1) /*0x56a345*/
              && *((_BYTE *)v12 + 282) == 7 )
            {
              if ( v13 == v5 + 4 ) /*0x56a350*/
              {
                Cell::SetTileType((__int16 *)&v31, v5 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a36e*/
                v22 = *CellStruct::Add((CellStruct *)&v31, &v41, &g_DDrawSurfaceManager.scenario[82]); /*0x56a386*/
                v39 = v22; /*0x56a388*/
                v38 = v22; /*0x56a38c*/
                v23 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x56a39b*/
                if ( v23 >= 0x40000 || (v24 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v23)) == 0 ) /*0x56a3b1*/
                {
                  g_MissionQueueFrame.briefing[139] = v22; /*0x56a3b3*/
                  v24 = &g_MissionQueueFrame.briefing[130]; /*0x56a3b9*/
                }
                *((_BYTE *)v24 + 283) += 4; /*0x56a3d0*/
                v25 = *CellStruct::Add((CellStruct *)&v38, &v42, &g_DDrawSurfaceManager.scenario[84]); /*0x56a3e0*/
                v39 = v25; /*0x56a3e2*/
                v26 = (__int16)v25 + (SHIWORD(v25) << 9); /*0x56a3f1*/
                if ( v26 >= 0x40000 || (v27 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v26)) == 0 ) /*0x56a407*/
                {
                  g_MissionQueueFrame.briefing[139] = v25; /*0x56a409*/
                  v27 = &g_MissionQueueFrame.briefing[130]; /*0x56a40f*/
                }
                *((_BYTE *)v27 + 283) += 4; /*0x56a422*/
                *(_DWORD *)v40 = *CellStruct::Add((CellStruct *)&v38, &v43, &g_DDrawSurfaceManager.scenario[88]); /*0x56a43c*/
                v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40); /*0x56a446*/
                v28[283] += 4; /*0x56a459*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a462*/
              v4 = g_TerrainSoundTable2; /*0x56a467*/
              v5 = g_TerrainSoundConfig; /*0x56a46d*/
            }
            v6 = v32; /*0x56a473*/
          }
          ++v6; /*0x56a483*/
          v29 = this->u32_49 + *((_DWORD *)this + 75); /*0x56a484*/
          v32 = v6; /*0x56a488*/
          if ( v6 >= v29 ) /*0x56a48c*/
            break; /*0x56a48c*/
          v8 = v34; /*0x56a0d5*/
          LOWORD(result) = v33; /*0x56a0d9*/
        }
        result = v33; /*0x56a492*/
      }
      ++result; /*0x56a4a2*/
      v30 = this->q04A + this->q04C; /*0x56a4a3*/
      v33 = result; /*0x56a4a7*/
    }
    while ( result < v30 ); /*0x56a4ab*/
  }
  return result; /*0x56a4b4*/
}



// ==== 0x0056A4C0  ObjectClass::FlattenCliffMap  this=ObjectClass  sig=csp ====
void __thiscall FlattenCliffMap(ObjectClass *this, _WORD *a2)
{
  _WORD *v2; // ebx
  int v3; // edx
  int v4; // edi
  int v6; // eax
  __int16 v7; // cx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // eax
  int *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  int *v18; // ecx
  unsigned int v19; // ecx
  int *v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  int *v26; // ecx
  unsigned int v27; // ecx
  int *v28; // ecx
  unsigned int v29; // eax
  int *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  _WORD *v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]
  int v36; // [esp+20h] [ebp-4h]
  int v37; // [esp+20h] [ebp-4h]
  int v38; // [esp+20h] [ebp-4h]
  int v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+20h] [ebp-4h]
  int v41; // [esp+20h] [ebp-4h]

  v2 = a2; /*0x56a4c4*/
  v3 = 1; /*0x56a4cb*/
  v4 = -1; /*0x56a4d0*/
  v31 = 1; /*0x56a4d5*/
  for ( i = -1; ; i = v4 ) /*0x56a4d9*/
  {
    v6 = *((_DWORD *)this + 75); /*0x56a4dd*/
    if ( v6 <= this->q04C ) /*0x56a4eb*/
      v6 = this->q04C; /*0x56a4ed*/
    if ( v3 >= v6 ) /*0x56a4f1*/
      break; /*0x56a4f1*/
    v32 = v4; /*0x56a4f9*/
    if ( v4 < v3 ) /*0x56a4fd*/
    {
      while ( 2 ) /*0x56a503*/
      {
        v35 = v4; /*0x56a503*/
        do /*0x56a65f*/
        {
          v7 = v32 + v2[1]; /*0x56a50e*/
          LOWORD(v34) = v4 + *v2; /*0x56a519*/
          v8 = this->u32_49; /*0x56a51e*/
          HIWORD(v34) = v7; /*0x56a524*/
          a2 = v34; /*0x56a52f*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= *((_DWORD *)this + 75) + v8 ) /*0x56a541*/
          {
            v9 = v7; /*0x56a547*/
            v10 = this->q04A; /*0x56a54a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56a560*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56a56f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56a571*/
              {
                if ( v11 < 0x40000 && (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) != 0 ) /*0x56a591*/
                {
                  v13 = v12; /*0x56a593*/
                }
                else
                {
                  g_MissionQueueFrame.briefing[139] = (int)v34; /*0x56a597*/
                  v13 = &g_MissionQueueFrame.briefing[130]; /*0x56a59d*/
                }
                v14 = v13[14] - g_Cell_BuildabilityLUT + 1; /*0x56a5b3*/
                if ( (v14 == dword_ABC2B4 || v14 == dword_AA1130) && *((_BYTE *)v13 + 282) == 8 ) /*0x56a5c7*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56a69a*/
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 2, 0); /*0x56a6a6*/
                  return; /*0x56a6b2*/
                }
                if ( (v14 == g_TerrainSoundTable2 /*0x56a5fa*/
                   || v14 == g_TerrainSoundTable2 + 3
                   || v14 == g_TerrainSoundTable2 + 4
                   || v14 == g_TerrainSoundTable2 + 1
                   || v14 == g_TerrainSoundTable2 + 2)
                  && *((_BYTE *)v13 + 282) == 5 )
                {
                  if ( v14 == g_TerrainSoundTable2 + 4 ) /*0x56a6ba*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a6d2*/
                    v15 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a6ea*/
                    LOWORD(v36) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2; /*0x56a6ef*/
                    v16 = LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2; /*0x56a702*/
                    v17 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2) /*0x56a706*/
                        + ((__int16)(HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88])) << 9);
                    if ( v17 >= 0x40000 || (v18 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17)) == 0 ) /*0x56a71d*/
                    {
                      HIWORD(v36) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a6fd*/
                      g_MissionQueueFrame.briefing[139] = v36; /*0x56a71f*/
                      v18 = &g_MissionQueueFrame.briefing[130]; /*0x56a725*/
                    }
                    *((_BYTE *)v18 + 283) += 4; /*0x56a737*/
                    v19 = (__int16)(v36 + LOWORD(g_DDrawSurfaceManager.scenario[82])) /*0x56a763*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + v15) << 9);
                    if ( v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x56a77a*/
                    {
                      HIWORD(v37) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v15; /*0x56a758*/
                      LOWORD(v37) = v16 + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a750*/
                      g_MissionQueueFrame.briefing[139] = v37; /*0x56a780*/
                      v20 = &g_MissionQueueFrame.briefing[130]; /*0x56a786*/
                    }
                    *((_BYTE *)v20 + 283) += 4; /*0x56a793*/
                    HIWORD(v38) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v15; /*0x56a7a9*/
                    v21 = (__int16)(v16 + LOWORD(g_DDrawSurfaceManager.scenario[86])) /*0x56a7bc*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[86]) + v15) << 9);
                    if ( v21 >= 0x40000 || (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) == 0 ) /*0x56a7d2*/
                    {
                      LOWORD(v38) = v16 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x56a7ae*/
                      g_MissionQueueFrame.briefing[139] = v38; /*0x56a7d8*/
                      v22 = &g_MissionQueueFrame.briefing[130]; /*0x56a7dd*/
                    }
                    *((_BYTE *)v22 + 283) += 4; /*0x56a7e2*/
                  }
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 2, 0); /*0x56a7ef*/
                  return; /*0x56a7fb*/
                }
                if ( (v14 == dword_AA1548 || v14 == dword_AA0740) && *((_BYTE *)v13 + 282) == 12 ) /*0x56a617*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56a809*/
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 4, 0); /*0x56a815*/
                  return; /*0x56a821*/
                }
                if ( (v14 == g_TerrainSoundConfig /*0x56a64a*/
                   || v14 == g_TerrainSoundConfig + 3
                   || v14 == g_TerrainSoundConfig + 4
                   || v14 == g_TerrainSoundConfig + 2
                   || v14 == g_TerrainSoundConfig + 1)
                  && *((_BYTE *)v13 + 282) == 7 )
                {
                  if ( v14 == g_TerrainSoundConfig + 4 ) /*0x56a82e*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a84b*/
                    v23 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a863*/
                    LOWORD(v39) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2; /*0x56a868*/
                    v24 = LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2; /*0x56a87b*/
                    v25 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2) /*0x56a87f*/
                        + ((__int16)(HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82])) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v25)) == 0 ) /*0x56a896*/
                    {
                      HIWORD(v39) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a876*/
                      g_MissionQueueFrame.briefing[139] = v39; /*0x56a898*/
                      v26 = &g_MissionQueueFrame.briefing[130]; /*0x56a89e*/
                    }
                    *((_BYTE *)v26 + 283) += 4; /*0x56a8ab*/
                    v27 = (__int16)(v39 + LOWORD(g_DDrawSurfaceManager.scenario[84])) /*0x56a8d7*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[84]) + v23) << 9);
                    if ( v27 >= 0x40000 || (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) == 0 ) /*0x56a8ee*/
                    {
                      HIWORD(v40) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v23; /*0x56a8cc*/
                      LOWORD(v40) = v24 + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x56a8c4*/
                      g_MissionQueueFrame.briefing[139] = v40; /*0x56a8f4*/
                      v28 = &g_MissionQueueFrame.briefing[130]; /*0x56a8fa*/
                    }
                    *((_BYTE *)v28 + 283) += 4; /*0x56a907*/
                    HIWORD(v41) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v23; /*0x56a91d*/
                    v29 = (__int16)(v24 + LOWORD(g_DDrawSurfaceManager.scenario[88])) /*0x56a930*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[88]) + v23) << 9);
                    if ( v29 >= 0x40000 || (v30 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x56a946*/
                    {
                      LOWORD(v41) = v24 + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a922*/
                      g_MissionQueueFrame.briefing[139] = v41; /*0x56a94c*/
                      v30 = &g_MissionQueueFrame.briefing[130]; /*0x56a951*/
                    }
                    *((_BYTE *)v30 + 283) += 4; /*0x56a956*/
                  }
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 4, 0); /*0x56a962*/
                  return; /*0x56a962*/
                }
                v4 = v35; /*0x56a650*/
              }
            }
          }
          v35 = ++v4; /*0x56a65b*/
        }
        while ( v4 < v31 ); /*0x56a65f*/
        v4 = i; /*0x56a66d*/
        if ( ++v32 < v31 ) /*0x56a678*/
          continue; /*0x56a678*/
        break;
      }
      v3 = v31; /*0x56a67e*/
    }
    ++v3; /*0x56a680*/
    --v4; /*0x56a681*/
    v31 = v3; /*0x56a682*/
  }
}



// ==== 0x0056A980  ObjectClass::RepairMapCliff  this=ObjectClass  sig=csp ====
void __thiscall RepairMapCliff(ObjectClass *this, _WORD *a2)
{
  _WORD *v2; // ebx
  int v3; // edx
  int v4; // edi
  int v6; // eax
  __int16 v7; // cx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  CellClass *v12; // eax
  CellClass *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  CellClass *v18; // ecx
  unsigned int v19; // ecx
  CellClass *v20; // ecx
  unsigned int v21; // eax
  CellClass *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  CellClass *v26; // ecx
  unsigned int v27; // ecx
  CellClass *v28; // ecx
  unsigned int v29; // eax
  CellClass *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  _WORD *v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]
  int v36; // [esp+20h] [ebp-4h]
  int v37; // [esp+20h] [ebp-4h]
  int v38; // [esp+20h] [ebp-4h]
  int v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+20h] [ebp-4h]
  int v41; // [esp+20h] [ebp-4h]

  v2 = a2; /*0x56a984*/
  v3 = 1; /*0x56a98b*/
  v4 = -1; /*0x56a990*/
  v31 = 1; /*0x56a995*/
  for ( i = -1; ; i = v4 ) /*0x56a999*/
  {
    v6 = *((_DWORD *)this + 75); /*0x56a99d*/
    if ( v6 <= this->q04C ) /*0x56a9ab*/
      v6 = this->q04C; /*0x56a9ad*/
    if ( v3 >= v6 ) /*0x56a9b1*/
      break; /*0x56a9b1*/
    v32 = v4; /*0x56a9b9*/
    if ( v4 < v3 ) /*0x56a9bd*/
    {
      while ( 2 ) /*0x56a9c3*/
      {
        v35 = v4; /*0x56a9c3*/
        do /*0x56ab1f*/
        {
          v7 = v32 + v2[1]; /*0x56a9ce*/
          LOWORD(v34) = v4 + *v2; /*0x56a9d9*/
          v8 = this->u32_49; /*0x56a9de*/
          HIWORD(v34) = v7; /*0x56a9e4*/
          a2 = v34; /*0x56a9ef*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= *((_DWORD *)this + 75) + v8 ) /*0x56aa01*/
          {
            v9 = v7; /*0x56aa07*/
            v10 = this->q04A; /*0x56aa0a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56aa20*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56aa2f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56aa31*/
              {
                if ( v11 < 0x40000 && (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56aa51*/
                {
                  v13 = v12; /*0x56aa53*/
                }
                else
                {
                  dword_ABDC74 = (int)v34; /*0x56aa57*/
                  v13 = &unk_ABDC50; /*0x56aa5d*/
                }
                v14 = *(_DWORD *)&v13->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x56aa73*/
                if ( (v14 == dword_ABC2B4 || v14 == dword_AA1130) && v13->height[0] == 8 ) /*0x56aa87*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56ab5a*/
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 2, 0); /*0x56ab66*/
                  return; /*0x56ab72*/
                }
                if ( (v14 == g_TerrainSoundTable2 /*0x56aaba*/
                   || v14 == g_TerrainSoundTable2 + 3
                   || v14 == g_TerrainSoundTable2 + 4
                   || v14 == g_TerrainSoundTable2 + 1
                   || v14 == g_TerrainSoundTable2 + 2)
                  && v13->height[0] == 5 )
                {
                  if ( v14 == g_TerrainSoundTable2 + 4 ) /*0x56ab7a*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x56ab92*/
                    v15 = HIWORD(a2) + HIWORD(dword_89F6A0); /*0x56abaa*/
                    LOWORD(v36) = dword_89F6A0 + (_WORD)a2; /*0x56abaf*/
                    v16 = dword_89F6A0 + (_WORD)a2; /*0x56abc2*/
                    v17 = (__int16)(dword_89F6A0 + (_WORD)a2) + ((__int16)(HIWORD(a2) + HIWORD(dword_89F6A0)) << 9); /*0x56abc6*/
                    if ( v17 >= 0x40000 || (v18 = *(CellClass **)(dword_87F924 + 4 * v17)) == 0 ) /*0x56abdd*/
                    {
                      HIWORD(v36) = HIWORD(a2) + HIWORD(dword_89F6A0); /*0x56abbd*/
                      dword_ABDC74 = v36; /*0x56abdf*/
                      v18 = &unk_ABDC50; /*0x56abe5*/
                    }
                    v18->level[0] += 4; /*0x56abf7*/
                    v19 = (__int16)(v36 + LOWORD(dword_89F688[0])) + ((__int16)(HIWORD(dword_89F688[0]) + v15) << 9); /*0x56ac23*/
                    if ( v19 >= 0x40000 || (v20 = *(CellClass **)(dword_87F924 + 4 * v19)) == 0 ) /*0x56ac3a*/
                    {
                      HIWORD(v37) = HIWORD(dword_89F688[0]) + v15; /*0x56ac18*/
                      LOWORD(v37) = v16 + LOWORD(dword_89F688[0]); /*0x56ac10*/
                      dword_ABDC74 = v37; /*0x56ac40*/
                      v20 = &unk_ABDC50; /*0x56ac46*/
                    }
                    v20->level[0] += 4; /*0x56ac53*/
                    HIWORD(v38) = HIWORD(dword_89F698) + v15; /*0x56ac69*/
                    v21 = (__int16)(v16 + dword_89F698) + ((__int16)(HIWORD(dword_89F698) + v15) << 9); /*0x56ac7c*/
                    if ( v21 >= 0x40000 || (v22 = *(CellClass **)(dword_87F924 + 4 * v21)) == 0 ) /*0x56ac92*/
                    {
                      LOWORD(v38) = v16 + dword_89F698; /*0x56ac6e*/
                      dword_ABDC74 = v38; /*0x56ac98*/
                      v22 = &unk_ABDC50; /*0x56ac9d*/
                    }
                    v22->level[0] += 4; /*0x56aca2*/
                  }
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 2, 0); /*0x56acaf*/
                  return; /*0x56acbb*/
                }
                if ( (v14 == dword_AA1548 || v14 == dword_AA0740) && v13->height[0] == 12 ) /*0x56aad7*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56acc9*/
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 4, 0); /*0x56acd5*/
                  return; /*0x56ace1*/
                }
                if ( (v14 == g_TerrainSoundConfig /*0x56ab0a*/
                   || v14 == g_TerrainSoundConfig + 3
                   || v14 == g_TerrainSoundConfig + 4
                   || v14 == g_TerrainSoundConfig + 2
                   || v14 == g_TerrainSoundConfig + 1)
                  && v13->height[0] == 7 )
                {
                  if ( v14 == g_TerrainSoundConfig + 4 ) /*0x56acee*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x56ad0b*/
                    v23 = HIWORD(a2) + HIWORD(dword_89F688[0]); /*0x56ad23*/
                    LOWORD(v39) = LOWORD(dword_89F688[0]) + (_WORD)a2; /*0x56ad28*/
                    v24 = LOWORD(dword_89F688[0]) + (_WORD)a2; /*0x56ad3b*/
                    v25 = (__int16)(LOWORD(dword_89F688[0]) + (_WORD)a2) /*0x56ad3f*/
                        + ((__int16)(HIWORD(a2) + HIWORD(dword_89F688[0])) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(CellClass **)(dword_87F924 + 4 * v25)) == 0 ) /*0x56ad56*/
                    {
                      HIWORD(v39) = HIWORD(a2) + HIWORD(dword_89F688[0]); /*0x56ad36*/
                      dword_ABDC74 = v39; /*0x56ad58*/
                      v26 = &unk_ABDC50; /*0x56ad5e*/
                    }
                    v26->level[0] += 4; /*0x56ad6b*/
                    v27 = (__int16)(v39 + dword_89F690) + ((__int16)(HIWORD(dword_89F690) + v23) << 9); /*0x56ad97*/
                    if ( v27 >= 0x40000 || (v28 = *(CellClass **)(dword_87F924 + 4 * v27)) == 0 ) /*0x56adae*/
                    {
                      HIWORD(v40) = HIWORD(dword_89F690) + v23; /*0x56ad8c*/
                      LOWORD(v40) = v24 + dword_89F690; /*0x56ad84*/
                      dword_ABDC74 = v40; /*0x56adb4*/
                      v28 = &unk_ABDC50; /*0x56adba*/
                    }
                    v28->level[0] += 4; /*0x56adc7*/
                    HIWORD(v41) = HIWORD(dword_89F6A0) + v23; /*0x56addd*/
                    v29 = (__int16)(v24 + dword_89F6A0) + ((__int16)(HIWORD(dword_89F6A0) + v23) << 9); /*0x56adf0*/
                    if ( v29 >= 0x40000 || (v30 = *(CellClass **)(dword_87F924 + 4 * v29)) == 0 ) /*0x56ae06*/
                    {
                      LOWORD(v41) = v24 + dword_89F6A0; /*0x56ade2*/
                      dword_ABDC74 = v41; /*0x56ae0c*/
                      v30 = &unk_ABDC50; /*0x56ae11*/
                    }
                    v30->level[0] += 4; /*0x56ae16*/
                  }
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 4, 0); /*0x56ae22*/
                  return; /*0x56ae22*/
                }
                v4 = v35; /*0x56ab10*/
              }
            }
          }
          v35 = ++v4; /*0x56ab1b*/
        }
        while ( v4 < v31 ); /*0x56ab1f*/
        v4 = i; /*0x56ab2d*/
        if ( ++v32 < v31 ) /*0x56ab38*/
          continue; /*0x56ab38*/
        break;
      }
      v3 = v31; /*0x56ab3e*/
    }
    ++v3; /*0x56ab40*/
    --v4; /*0x56ab41*/
    v31 = v3; /*0x56ab42*/
  }
}



// ==== 0x0056AE40  ObjectClass::method_56AE40  this=ObjectClass  sig=csp ====
int __thiscall sub_56AE40(ObjectClass *this, int a2)
{
  int v3; // edi
  int i; // ebx
  int v5; // eax
  char *v6; // eax
  int j; // ebx
  int v8; // eax
  char *v9; // eax
  int k; // ebx
  int v11; // eax
  char *v12; // eax
  Pipe v14[2]; // [esp+Ch] [ebp-28h] BYREF

  v3 = 0; /*0x56ae48*/
  LCWPipe::Constructor((LCWPipe *)v14, 0, 0x2000); /*0x56ae54*/
  Pipe::SetDelegate(v14, a2); /*0x56ae62*/
  for ( i = 0; i < this->customSound_controller; ++i ) /*0x56ae71*/
  {
    v5 = *(_DWORD *)(this->q04F + 4 * i); /*0x56ae7b*/
    if ( v5 ) /*0x56ae80*/
      v6 = LCW::Compress((LCWPipe *)v14, (char *)(v5 + 56), 2); /*0x56ae86*/
    else
      v6 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[144], 2); /*0x56ae91*/
    v3 += (int)v6; /*0x56ae96*/
  }
  for ( j = 0; j < this->customSound_controller; ++j ) /*0x56aead*/
  {
    v8 = *(_DWORD *)(this->q04F + 4 * j); /*0x56aeb7*/
    if ( v8 ) /*0x56aebc*/
      v9 = LCW::Compress((LCWPipe *)v14, (char *)(v8 + 282), 1); /*0x56aec4*/
    else
      v9 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 2, 1); /*0x56aecf*/
    v3 += (int)v9; /*0x56aed4*/
  }
  for ( k = 0; k < this->customSound_controller; ++k ) /*0x56aeeb*/
  {
    v11 = *(_DWORD *)(this->q04F + 4 * k); /*0x56aef5*/
    if ( v11 ) /*0x56aefa*/
      v12 = LCW::Compress((LCWPipe *)v14, (char *)(v11 + 283), 1); /*0x56af02*/
    else
      v12 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 3, 1); /*0x56af0d*/
    v3 += (int)v12; /*0x56af12*/
  }
  LCWPipe::Dtor((LCWPipe *)v14); /*0x56af23*/
  return v3; /*0x56af2a*/
}



// ==== 0x0056AF40  ObjectClass::method_56AF40  this=ObjectClass  sig=csp ====
char *__thiscall sub_56AF40(ObjectClass *this, int a2)
{
  ObjectClass *v2; // esi
  char *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  char *v8; // edi
  char *v9; // edi
  char *v10; // edi
  char *v11; // edi
  int v12; // esi
  char v15[4]; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56af45*/
  v3 = 0; /*0x56af47*/
  LCWPipe::Constructor((LCWPipe *)&v17, 0, 0x2000); /*0x56af57*/
  Pipe::SetDelegate(&v17, a2); /*0x56af65*/
  v4 = 0; /*0x56af70*/
  v18 = 0; /*0x56af74*/
  if ( v2[1].lastLayer > 0 ) /*0x56af78*/
  {
    do /*0x56b08b*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2[1].isAliveFlag + 4 * v4); /*0x56af88*/
      if ( v4 ) /*0x56af8b*/
      {
        if ( v5 ) /*0x56af93*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56af99*/
          Src = v6; /*0x56afa0*/
          v7 = this->q03D; /*0x56afa9*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56afb7*/
          if ( Src > v7 /*0x56afea*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *((_DWORD *)this + 62) )
          {
            Src = v6; /*0x56aff7*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b028*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b035*/
              v8 = &v3[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)&Src, 4)]; /*0x56b045*/
              v9 = &v8[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 56), 4)]; /*0x56b059*/
              v10 = &v9[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 282), 1)]; /*0x56b06d*/
              v3 = &v10[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 283), 1)]; /*0x56b074*/
            }
          }
        }
      }
      v2 = this; /*0x56b076*/
      v4 = v18 + 1; /*0x56b07e*/
      v18 = v4; /*0x56b085*/
    }
    while ( v4 < this->customSound_controller ); /*0x56b08b*/
  }
  *(_DWORD *)v15 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b0a4*/
  v11 = &v3[(_DWORD)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0ad*/
  v12 = 100; /*0x56b0af*/
  do /*0x56b0c7*/
  {
    v11 = &v11[(_DWORD)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0c4*/
    --v12; /*0x56b0c6*/
  }
  while ( v12 ); /*0x56b0c7*/
  (*(void (__thiscall **)(Pipe *))(*(_DWORD *)v17.__pad_0 + 4))(&v17); /*0x56b0d1*/
  LCWPipe::Dtor((LCWPipe *)&v17); /*0x56b0d8*/
  return v11; /*0x56b0df*/
}



// ==== 0x0056B0F0  ObjectClass::method_56B0F0  this=ObjectClass  sig=csp ====
int __thiscall sub_56B0F0(ObjectClass *this, int *a2)
{
  int v2; // ebx
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // edx
  int i; // [esp+20h] [ebp-Ch]
  ObjectClass *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h] BYREF

  v2 = 0; /*0x56b0fa*/
  v3 = 0; /*0x56b0fc*/
  v4 = a2; /*0x56b0ff*/
  v16 = this; /*0x56b105*/
  for ( i = 0; v3 < v16[1].lastLayer; i = v3 ) /*0x56b10d*/
  {
    v5 = *(_DWORD *)(this->q04F + 4 * v3); /*0x56b11d*/
    if ( v3 ) /*0x56b120*/
    {
      if ( v5 ) /*0x56b128*/
      {
        v6 = *(_DWORD *)(v5 + 36); /*0x56b12e*/
        v7 = this->q03D; /*0x56b131*/
        HIWORD(a2) = HIWORD(v6); /*0x56b137*/
        v8 = (__int16)v6; /*0x56b13b*/
        v9 = SHIWORD(v6); /*0x56b13e*/
        a2 = (int *)(SHIWORD(a2) + v8); /*0x56b148*/
        if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[1].ambientSoundController[4] ) /*0x56b17b*/
        {
          a2 = *(int **)(v5 + 36); /*0x56b18b*/
          if ( a2 != *(int **)&g_MissionQueueFrame.waypoints[2134] /*0x56b1bd*/
            && (int *)v5 != &g_MissionQueueFrame.briefing[130]
            && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
          {
            v10 = (*(int (__thiscall **)(int *, int **, int))(*v4 + 16))(v4, &a2, 4) + v2; /*0x56b1d8*/
            v11 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 56, 4) + v10; /*0x56b1e3*/
            v12 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 282, 1) + v11; /*0x56b1fc*/
            v2 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 283, 1) + v12; /*0x56b201*/
          }
        }
      }
    }
    this = v16; /*0x56b203*/
    v3 = i + 1; /*0x56b20b*/
  }
  v13 = *v4; /*0x56b225*/
  v17 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b227*/
  return v2 + (*(int (__thiscall **)(int *, int *, int))(v13 + 16))(v4, &v17, 4); /*0x56b239*/
}



// ==== 0x0056B250  ObjectClass::method_56B250  this=ObjectClass  sig=csp ====
int __thiscall sub_56B250(ObjectClass *this, int a2)
{
  ObjectClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b255*/
  LZOPipe::Constructor((LZOPipe *)&v17, 0, 0x2000); /*0x56b266*/
  Pipe::SetDelegate(&v17, a2); /*0x56b274*/
  v3 = 0; /*0x56b27f*/
  v4 = 0; /*0x56b281*/
  v18 = 0; /*0x56b285*/
  if ( v2[1].lastLayer > 0 ) /*0x56b289*/
  {
    do /*0x56b39c*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2[1].isAliveFlag + 4 * v4); /*0x56b299*/
      if ( v4 ) /*0x56b29c*/
      {
        if ( v5 ) /*0x56b2a4*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56b2aa*/
          Src = v6; /*0x56b2b1*/
          v7 = this->q03D; /*0x56b2ba*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b2c8*/
          if ( Src > v7 /*0x56b2fb*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *((_DWORD *)this + 62) )
          {
            Src = v6; /*0x56b308*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b339*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b346*/
              v8 = Compression::Read((int *)v17.__pad_0, (int)&Src, 4) + v3; /*0x56b356*/
              v9 = Compression::Read((int *)v17.__pad_0, v5 + 56, 4) + v8; /*0x56b36a*/
              v10 = Compression::Read((int *)v17.__pad_0, v5 + 282, 1) + v9; /*0x56b37e*/
              v3 = Compression::Read((int *)v17.__pad_0, v5 + 283, 1) + v10; /*0x56b385*/
            }
          }
        }
      }
      v2 = this; /*0x56b387*/
      v4 = v18 + 1; /*0x56b38f*/
      v18 = v4; /*0x56b396*/
    }
    while ( v4 < this->customSound_controller ); /*0x56b39c*/
  }
  v16 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b3b5*/
  v11 = Compression::Read((int *)v17.__pad_0, (int)&v16, 4) + v3; /*0x56b3c6*/
  v12 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v17.__pad_0 + 4))(&v17); /*0x56b3cf*/
  LZOPipe::Destructor((LZOPipe *)&v17); /*0x56b3d1*/
  return v12 + v11; /*0x56b3d9*/
}



// ==== 0x0056B3F0  MapClass::DecompressCellData  this=MapClass  sig=csp ====
int __thiscall MapClass::DecompressCellData(MapClass *this, int a2)
{
  MapClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void *MapClass_field_0xF4; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v17; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v18; // [esp+14h] [ebp-28h] BYREF
  int v19; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b3f5*/
  LZOPipe::Constructor((LZOPipe *)&v18, 0, 0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v18, a2); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  v19 = 0; /*0x56b425*/
  if ( v2->MapClass_field_0x140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *((_DWORD *)v2->MapClass_field_0x13C + v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56b44a*/
          Src = v6; /*0x56b451*/
          MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56b45a*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b468*/
          if ( Src > (int)MapClass_field_0xF4 /*0x56b49b*/
            && (__int16)v6 - SHIWORD(v6) < (int)MapClass_field_0xF4
            && SHIWORD(v6) - (__int16)v6 < (int)MapClass_field_0xF4
            && Src <= (int)MapClass_field_0xF4 + 2 * *(_DWORD *)this->__pad_F8 )
          {
            Src = v6; /*0x56b4a8*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b4d9*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b4e6*/
              v8 = Compression::Read((int *)v18.__pad_0, (int)&Src, 4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int *)v18.__pad_0, v5 + 56, 4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int *)v18.__pad_0, v5 + 282, 1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int *)v18.__pad_0, v5 + 283, 1) + v10; /*0x56b532*/
              v3 = Compression::Read((int *)v18.__pad_0, v5 + 281, 1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = this; /*0x56b53b*/
      v4 = v19 + 1; /*0x56b543*/
      v19 = v4; /*0x56b54a*/
    }
    while ( v4 < this->MapClass_field_0x140 ); /*0x56b550*/
  }
  v17 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b568*/
  v12 = Compression::Read((int *)v18.__pad_0, (int)&v17, 4) + v3; /*0x56b579*/
  v13 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v18.__pad_0 + 4))(&v18); /*0x56b582*/
  LZOPipe::Destructor((LZOPipe *)&v18); /*0x56b584*/
  return v13 + v12; /*0x56b58c*/
}



// ==== 0x0056B5A0  CellClass::LoadTerrainTiles  this=CellClass  sig=csp ====
char __thiscall CellClass::LoadTerrainTiles(CellClass *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int j; // esi
  unsigned int v8; // eax
  int *v9; // eax
  int k; // esi
  unsigned int v11; // eax
  int *v12; // eax
  Straw v14[5]; // [esp+0h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp+4h]
  int v16; // [esp+2Ch] [ebp+4h]
  int v17; // [esp+2Ch] [ebp+4h]

  LCWStraw::Constructor((LCWStraw *)v14, 1, 0x2000); /*0x56b5b3*/
  Delegate::Set(v14, a2); /*0x56b5c1*/
  for ( i = 0; i < 0x4000; ++i ) /*0x56b5c6*/
  {
    HIWORD(v15) = i / 128; /*0x56b5e7*/
    v4 = i % 128 + (SHIWORD(v15) << 9); /*0x56b5f5*/
    if ( (v4 >= 0x40000 || (v5 = *(int **)(this->CellClass_field_13C + 4 * v4)) == 0) /*0x56b61d*/
      && (LOWORD(v15) = i % 128,
          g_MissionQueueFrame.briefing[139] = v15,
          v5 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[144], 2); /*0x56b64a*/
    }
    else
    {
      v6 = v5 + 14; /*0x56b61f*/
      v5[14] = 0xFFFF; /*0x56b629*/
      LCW::DecompressReader((LCWStraw *)v14, (char *)v5 + 56, 2); /*0x56b62f*/
      *v6 = AccumulateMIXFileIndex(*v6); /*0x56b63b*/
    }
  }
  for ( j = 0; j < 0x4000; ++j ) /*0x56b65c*/
  {
    HIWORD(v16) = j / 128; /*0x56b67d*/
    v8 = j % 128 + (SHIWORD(v16) << 9); /*0x56b68b*/
    if ( (v8 >= 0x40000 || (v9 = *(int **)(this->CellClass_field_13C + 4 * v8)) == 0) /*0x56b6b3*/
      && (LOWORD(v16) = j % 128,
          g_MissionQueueFrame.briefing[139] = v16,
          v9 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 2, 1); /*0x56b6ca*/
    }
    else
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)v9 + 282, 1); /*0x56b6bd*/
    }
  }
  for ( k = 0; k < 0x4000; ++k ) /*0x56b6d8*/
  {
    HIWORD(v17) = k / 128; /*0x56b6f9*/
    v11 = k % 128 + (SHIWORD(v17) << 9); /*0x56b707*/
    if ( (v11 >= 0x40000 || (v12 = *(int **)(this->CellClass_field_13C + 4 * v11)) == 0) /*0x56b72f*/
      && (LOWORD(v17) = k % 128,
          g_MissionQueueFrame.briefing[139] = v17,
          v12 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 3, 1); /*0x56b746*/
    }
    else
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)v12 + 283, 1); /*0x56b739*/
    }
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b75e*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b760*/
  LCWStraw::Dtor((LCWStraw *)v14); /*0x56b769*/
  return 1; /*0x56b770*/
}



// ==== 0x0056B780  CellClass::CreateOverlay  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateOverlay(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // edi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LCWStraw::Constructor((LCWStraw *)v9, 1, 0x2000); /*0x56b793*/
  Delegate::Set(v9, a2); /*0x56b7a1*/
  LCW::DecompressReader((LCWStraw *)v9, v7, 4); /*0x56b7b1*/
  while ( *(_WORD *)v7 != *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b7cf*/
       || *(_WORD *)&v7[2] != *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56b7de*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56b7f4*/
    {
      v5 = v4; /*0x56b7f6*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56b7fa*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56b800*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56b80f*/
    {
      LCW::DecompressReader((LCWStraw *)v9, v8, 6); /*0x56b857*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56b81b*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 56, 4); /*0x56b821*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56b82d*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 282, 1); /*0x56b83c*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 283, 1); /*0x56b84a*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b868*/
    LCW::DecompressReader((LCWStraw *)v9, v7, 4); /*0x56b86d*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b87c*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b87e*/
  LCWStraw::Dtor((LCWStraw *)v9); /*0x56b887*/
  return 1; /*0x56b88e*/
}



// ==== 0x0056B8A0  CellClass::DecompressRawCellData  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressRawCellData(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  ScenarioClass *v5; // eax
  ScenarioClass *v6; // ebx
  _BYTE v8[8]; // [esp+14h] [ebp-8h] BYREF

  v2 = a2; /*0x56b8a6*/
  while ( 1 ) /*0x56b8ad*/
  {
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &a2, 4); /*0x56b8b8*/
    if ( a2 == *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] ) /*0x56b8cb*/
      break; /*0x56b8cb*/
    v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56b8e3*/
    if ( v4 < 0x40000 && (v5 = *(ScenarioClass **)(this->CellClass_field_13C + 4 * v4)) != 0 ) /*0x56b8f9*/
    {
      v6 = v5; /*0x56b8fb*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = a2; /*0x56b8ff*/
      v6 = (ScenarioClass *)&g_MissionQueueFrame.briefing[130]; /*0x56b905*/
    }
    if ( !v6 || v6 == (ScenarioClass *)&g_MissionQueueFrame.briefing[130] ) /*0x56b914*/
    {
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v8, 6); /*0x56b96c*/
      a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b975*/
    }
    else
    {
      v6->nextScenario[14] = 0xFFFF; /*0x56b91e*/
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &v6->nextScenario[14], 4); /*0x56b926*/
      v6->nextScenario[14] = AccumulateMIXFileIndex(v6->nextScenario[14]); /*0x56b930*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)&v6->altNextScenario[5] + 2, 1); /*0x56b93f*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)&v6->altNextScenario[5] + 3, 1); /*0x56b94f*/
      a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b958*/
    }
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b989*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b98d*/
  return 1; /*0x56b983*/
}



// ==== 0x0056B9A0  CellClass::DecompressTerrainDataSimple  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressTerrainDataSimple(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // edi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor((LZOStraw *)v9, 1, 0x2000); /*0x56b9b3*/
  Delegate::Set(v9, a2); /*0x56b9c1*/
  LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56b9d1*/
  while ( *(_WORD *)v7 != *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b9ef*/
       || *(_WORD *)&v7[2] != *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56b9fe*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56ba14*/
    {
      v5 = v4; /*0x56ba16*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56ba1a*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56ba20*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56ba2f*/
    {
      LCW::Decompress((LZOStraw *)v9, v8, 6); /*0x56ba77*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56ba3b*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 56, 4); /*0x56ba41*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56ba4d*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 282, 1); /*0x56ba5c*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 283, 1); /*0x56ba6a*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56ba88*/
    LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56ba8d*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56ba9c*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56ba9e*/
  LZOStraw::Destructor((LZOStraw *)v9); /*0x56baa7*/
  return 1; /*0x56baae*/
}



// ==== 0x0056BAC0  CellClass::DecompressTerrainData  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressTerrainData(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // esi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor((LZOStraw *)v9, 1, 0x2000); /*0x56bad3*/
  Delegate::Set(v9, a2); /*0x56bae1*/
  while ( 1 ) /*0x56baf1*/
  {
    LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56baf1*/
    if ( *(_WORD *)v7 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bb0f*/
      && *(_WORD *)&v7[2] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bb0f*/
    }
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56bb1e*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56bb34*/
    {
      v5 = v4; /*0x56bb36*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56bb3a*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56bb40*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56bb4f*/
    {
      LCW::Decompress((LZOStraw *)v9, v8, 7); /*0x56bba9*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56bb5b*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 56, 4); /*0x56bb61*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56bb6d*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 282, 1); /*0x56bb7c*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 283, 1); /*0x56bb8e*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 281, 1); /*0x56bb9c*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56bbb3*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56bbc6*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56bbca*/
  LZOStraw::Destructor((LZOStraw *)v9); /*0x56bbd3*/
  return 1; /*0x56bbda*/
}



// ==== 0x0056BBE0  MapClass::Update  this=MapClass  sig=csp ====
char __thiscall CrateClass::Update(MapClass *this)
{
  int v1; // eax
  char *v3; // esi
  int i; // ebx
  int v5; // edx
  int v6; // ecx

  LOBYTE(v1) = dword_A8B238; /*0x56bbe0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x56bbea*/
  {
    LOBYTE(v1) = stru_A8B250.__pad_0[17]; /*0x56bbec*/
    if ( stru_A8B250.__pad_0[17] ) /*0x56bbf3*/
    {
      v3 = &this->__pad_144[20]; /*0x56bbf7*/
      for ( i = 256; i; --i ) /*0x56bbfd*/
      {
        LOWORD(v1) = *((_WORD *)v3 + 6); /*0x56bc02*/
        if ( (_WORD)v1 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bc1a*/
          && *((_WORD *)v3 + 7) == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
        {
          goto LABEL_11; /*0x56bc1a*/
        }
        v5 = *(_DWORD *)v3; /*0x56bc1c*/
        v6 = *((_DWORD *)v3 + 2); /*0x56bc1e*/
        if ( *(_DWORD *)v3 != -1 ) /*0x56bc24*/
        {
          v1 = *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x56bc2b*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x56bc2f*/
            goto LABEL_10; /*0x56bc2f*/
          v6 -= v1; /*0x56bc31*/
        }
        if ( !v6 ) /*0x56bc35*/
        {
LABEL_10:
          CellClass::Cleanup((CellClass *)v3); /*0x56bc37*/
          LOBYTE(v1) = CrateClass::FindPlacement((CrateClass *)this); /*0x56bc40*/
        }
LABEL_11:
        v3 += 16; /*0x56bc45*/
      }
    }
  }
  return v1; /*0x56bc4d*/
}



// ==== 0x0056BC50  Cell::PosToLinearIndex  this=Cell  sig=csp ====
int __stdcall Cell_PosToLinearIndex(__int16 *a1)
{
  return *a1 / 4 + 130 * (a1[1] / 4) + 131; /*0x56bc7c*/
}



// ==== 0x0056BCD0  CellClass::GetTileData  this=CellClass  sig=csp ====
int __stdcall CellClass_GetTileData(__int16 *a1, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  v2 = *a1 + (a1[1] << 9); /*0x56bcde*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(dword_87F924 + 4 * v2)) == 0 ) /*0x56bcf4*/
  {
    dword_ABDC74 = *(_DWORD *)a1; /*0x56bcf8*/
    v3 = &unk_ABDC50; /*0x56bcfd*/
  }
  return *(_DWORD *)(a2 + 4 * ((__int16)v3[9] / 4 + 130 * ((__int16)HIWORD(v3[9]) / 4)) + 23024); /*0x56bd3a*/
}



// ==== 0x0056BD40  CrateClass::FindPlacement  this=CrateClass  sig=csp ====
char __thiscall CrateClass::FindPlacement(CrateClass *this)
{
  _WORD *v1; // edx
  int i; // eax
  int v3; // ebx
  BuildingClass *v4; // ebp
  __int16 v5; // si
  __int16 v6; // ax
  int v7; // eax
  bool v8; // sf
  int v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  __int16 v13[2]; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-14h]
  __int16 v15[2]; // [esp+18h] [ebp-10h] BYREF
  __int16 v16[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+20h] [ebp-8h] BYREF
  int v18; // [esp+24h] [ebp-4h] BYREF

  v1 = (_WORD *)((char *)this + 356); /*0x56bd43*/
  for ( i = 0; i < 256; ++i ) /*0x56bd5c*/
  {
    if ( *v1 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bd67*/
      && v1[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bd67*/
    }
    v1 += 8; /*0x56bd6a*/
  }
  if ( i == 256 ) /*0x56bd79*/
    return 0; /*0x56be9e*/
  v3 = 0; /*0x56bd7f*/
  v4 = (BuildingClass *)((char *)this + 16 * i + 344); /*0x56bd84*/
  while ( 1 ) /*0x56bdb6*/
  {
    v5 = *(_WORD *)&stru_87F5F0.__pad_58[708] /*0x56bdb6*/
       + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1);
    v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1); /*0x56bdc1*/
    LOWORD(v14) = v5; /*0x56bdcc*/
    HIWORD(v14) = *(_WORD *)&stru_87F5F0.__pad_58[712] + v6; /*0x56bdd3*/
    v7 = (__int16)(*(_WORD *)&stru_87F5F0.__pad_58[712] + v6) << 9; /*0x56bde2*/
    v8 = v5 + v7 < 0; /*0x56bde5*/
    v9 = v5 + v7; /*0x56bde5*/
    *(_DWORD *)v13 = v14; /*0x56bde7*/
    if ( v8 || v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x56bdff*/
    {
      g_MissionQueueFrame.briefing[139] = v14; /*0x56be01*/
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x56be07*/
    }
    if ( v10[59] == 2 ) /*0x56be13*/
    {
      v15[0] = 0; /*0x56be33*/
      v15[1] = 0; /*0x56be38*/
      v11 = LayerClass::Pathfinding_Find( /*0x56be42*/
              &stru_87F5F0.__pad_58[416],
              (int)v15,
              &v17,
              v13,
              5,
              -1,
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              v15,
              0,
              0);
    }
    else
    {
      v16[0] = 0; /*0x56be61*/
      v16[1] = 0; /*0x56be66*/
      v11 = LayerClass::Pathfinding_Find( /*0x56be76*/
              &stru_87F5F0.__pad_58[416],
              (int)v16,
              &v18,
              v13,
              1,
              -1,
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              v16,
              0,
              0);
    }
    *(_DWORD *)v13 = *v11; /*0x56be84*/
    if ( BuildingClass::BeginCrumblingTimer(v4, v13) ) /*0x56be88*/
      break; /*0x56be88*/
    if ( ++v3 >= 1000 ) /*0x56be98*/
      return 0; /*0x56be98*/
  }
  return 1; /*0x56be9e*/
}



// ==== 0x0056BEC0  BuildingClass::SearchPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SearchPlacement(BuildingClass *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // [esp-34h] [ebp-48h]
  __int16 v10[2]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bedc*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x56bef2*/
  {
    g_MissionQueueFrame.briefing[139] = a2; /*0x56bef4*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x56befa*/
  }
  if ( v5[59] == 2 ) /*0x56bf06*/
    v9 = 5; /*0x56bf24*/
  else
    v9 = 1; /*0x56bf4f*/
  v10[0] = 0; /*0x56bf26*/
  v10[1] = 0; /*0x56bf2b*/
  a2 = *LayerClass::Pathfinding_Find( /*0x56bf77*/
          &stru_87F5F0.__pad_58[416],
          (int)v10,
          &v11,
          (__int16 *)&a2,
          v9,
          -1,
          0,
          0,
          1,
          1,
          0,
          0,
          0,
          1,
          v10,
          0,
          0);
  result = 0; /*0x56bf81*/
  v7 = &this->?[1]; /*0x56bf83*/
  do /*0x56bf9d*/
  {
    if ( *(_WORD *)v7 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bf92*/
      && *((_WORD *)v7 + 1) == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bf92*/
    }
    ++result; /*0x56bf94*/
    v7 += 4; /*0x56bf95*/
  }
  while ( result < 256 ); /*0x56bf9d*/
  if ( result == 256 || !BuildingClass::BeginCrumblingTimer((BuildingClass *)&this->?[4 * result], (__int16 *)&a2) ) /*0x56bfb5*/
  {
    LOBYTE(result) = 0; /*0x56c00c*/
  }
  else
  {
    if ( a3 != 20 ) /*0x56bfc5*/
    {
      v8 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bfd6*/
      if ( v8 >= 0x40000 || (result = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v8)) == 0 ) /*0x56bfec*/
      {
        g_MissionQueueFrame.briefing[139] = a2; /*0x56bfee*/
        result = (int)&g_MissionQueueFrame.briefing[130]; /*0x56bff4*/
      }
      *(_BYTE *)(result + 286) = a3; /*0x56bff9*/
    }
    LOBYTE(result) = 1; /*0x56c001*/
  }
  return result; /*0x56bfff*/
}



// ==== 0x0056C020  CellClass::CreateBuildingCrater  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateBuildingCrater(CellClass *this, __int16 *a2)
{
  int v2; // edx
  _WORD *i; // eax
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // ebx
  int v8; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // [esp+18h] [ebp-24h]
  int v20[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v21[4]; // [esp+2Ch] [ebp-10h] BYREF
  __int16 *v22; // [esp+40h] [ebp+4h]

  if ( *(_DWORD *)&dword_A8B238 ) /*0x56c02e*/
  {
    v2 = 0; /*0x56c041*/
    for ( i = (_WORD *)((char *)this + 356); /*0x56c043*/
          *i == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] && i[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136]
       || *a2 != *i
       || a2[1] != i[1];
          i += 8 )
    {
      if ( ++v2 >= 256 ) /*0x56c070*/
        return 0; /*0x56c070*/
    }
    return CellClass::Cleanup((CellClass *)((char *)this + 16 * v2 + 344)); /*0x56c082*/
  }
  else
  {
    v5 = *a2 + (a2[1] << 9); /*0x56c09f*/
    if ( v5 < 0x40000 && (v6 = *(int **)(this->CellClass_field_13C + 4 * v5)) != 0 ) /*0x56c0b5*/
    {
      v7 = v6; /*0x56c0b7*/
    }
    else
    {
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56c0bd*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56c0c2*/
    }
    v8 = v7[17]; /*0x56c0c8*/
    v22 = (__int16 *)v7; /*0x56c0cb*/
    if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v8) + 682) ) /*0x56c0e1*/
    {
      return 0; /*0x56c1e6*/
    }
    else
    {
      PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v7, v20); /*0x56c0ff*/
      StartCoords = House::GetStartCoords((House *)v7, v21); /*0x56c104*/
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x56c119*/
      {
        v18 = *PlacementRect; /*0x56c198*/
        v14 = PlacementRect[1]; /*0x56c19a*/
        v15 = PlacementRect[2]; /*0x56c19d*/
        v16 = PlacementRect[3]; /*0x56c1a0*/
      }
      else
      {
        v11 = PlacementRect[2]; /*0x56c11b*/
        if ( v11 <= 0 || (v19 = PlacementRect[3], v19 <= 0) ) /*0x56c12f*/
        {
          v18 = *StartCoords; /*0x56c18b*/
          v14 = StartCoords[1]; /*0x56c18d*/
          v15 = StartCoords[2]; /*0x56c190*/
          v16 = StartCoords[3]; /*0x56c193*/
        }
        else
        {
          v12 = *StartCoords; /*0x56c131*/
          v13 = *PlacementRect; /*0x56c133*/
          v14 = StartCoords[1]; /*0x56c135*/
          v15 = StartCoords[2]; /*0x56c138*/
          v16 = StartCoords[3]; /*0x56c13b*/
          if ( v12 > *PlacementRect ) /*0x56c140*/
          {
            v15 += v12 - v13; /*0x56c144*/
            v12 = *PlacementRect; /*0x56c146*/
          }
          v17 = PlacementRect[1]; /*0x56c148*/
          if ( v14 > v17 ) /*0x56c151*/
          {
            v16 += v14 - v17; /*0x56c155*/
            v14 = v17; /*0x56c157*/
          }
          if ( v15 + v12 < v13 + v11 ) /*0x56c161*/
            v15 = v13 - v12 + v11 + 1; /*0x56c169*/
          if ( v16 + v14 < v19 + v17 ) /*0x56c17c*/
            v16 = v19 + v17 - v14 + 1; /*0x56c181*/
          v18 = v12; /*0x56c183*/
          v7 = (int *)v22; /*0x56c185*/
        }
      }
      v21[1] = v14; /*0x56c1ab*/
      Cell::CreateCrater(v18, v14 - (unsigned int)DSurface_ViewBounds.field_4, v15, v16, 0); /*0x56c1c7*/
      v7[17] = -1; /*0x56c1cc*/
      *((_BYTE *)v7 + 286) = 0; /*0x56c1d3*/
      return 1; /*0x56c1da*/
    }
  }
}



// ==== 0x0056C200  sub_56C200  this=-  sig=ida-proto ====
int sub_56C200()
{
  return 1; /*0x56c205*/
}



// ==== 0x0056C210  Object::FindNearestObjectAtCell  this=Object  sig=csp ====
_DWORD *__thiscall Object::FindNearestObjectAtCell(Object *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edi
  char *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // eax
  _DWORD *i; // esi
  int *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *result; // eax
  _DWORD *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  char *v24; // [esp+20h] [ebp-40h]
  _DWORD v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD v26[3]; // [esp+30h] [ebp-30h] BYREF
  int v27[3]; // [esp+3Ch] [ebp-24h] BYREF
  char v28[12]; // [esp+48h] [ebp-18h] BYREF
  int v29[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 v30; // [esp+64h] [ebp+4h]
  __int16 v31; // [esp+66h] [ebp+6h]

  v21 = 0; /*0x56c238*/
  v22 = 0; /*0x56c23e*/
  v3 = *a2 / 256; /*0x56c249*/
  v4 = a2[1] / 256; /*0x56c24c*/
  v30 = v3; /*0x56c251*/
  v31 = v4; /*0x56c256*/
  if ( (g_MissionQueueFrame.briefing[120] & 1) == 0 ) /*0x56c25b*/
  {
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2058] = 0; /*0x56c271*/
    LOBYTE(g_MissionQueueFrame.briefing[120]) |= 1u; /*0x56c27c*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2062] = 0xFFFF; /*0x56c295*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2066] = 1; /*0x56c2a9*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2074] = 0x10000; /*0x56c2d0*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2078] = 0x1FFFF; /*0x56c2e4*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2070] = -65536; /*0x56c314*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2082] = 65537; /*0x56c31a*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2086] = -65535; /*0x56c320*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2090] = -1; /*0x56c326*/
    atexit(nullsub_167); /*0x56c32b*/
  }
  v5 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c333*/
  v24 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c338*/
  while ( 1 ) /*0x56c343*/
  {
    v6 = *(_WORD *)v5; /*0x56c343*/
    v7 = v4 + *((_WORD *)v5 + 1); /*0x56c351*/
    LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (__int16)(v3 + v6); /*0x56c359*/
    v9 = *(_DWORD *)&this->__pad_EC[8]; /*0x56c35c*/
    HIWORD(v23) = v7; /*0x56c362*/
    v10 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v10 < v9 && v10 - v8 < v9 && v11 <= v9 + 2 * *(_DWORD *)&this->__pad_EC[12] ) /*0x56c39c*/
    {
      v12 = v8 + (v10 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = (int *)*((_DWORD *)this->Object_field_0x13C + v12)) == 0 ) /*0x56c3c1*/
      {
        g_MissionQueueFrame.briefing[139] = v23; /*0x56c3c7*/
        v13 = &g_MissionQueueFrame.briefing[130]; /*0x56c3cc*/
      }
      for ( i = (_DWORD *)v13[57]; i; i = (_DWORD *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((_BYTE *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*i + 72))(i, v28); /*0x56c457*/
            v18 = Coord::Subtract((Coord *)v29, *a2 - *v17, a2[1] - v17[1], a2[2] - v17[2]); /*0x56c477*/
            v26[0] = *v18; /*0x56c47e*/
            v26[1] = v18[1]; /*0x56c485*/
            v26[2] = v18[2]; /*0x56c490*/
            v16 = Coord::Length((Coord *)v26); /*0x56c494*/
LABEL_20:
            if ( v16 >= 0 && (!v21 || v16 < v22) ) /*0x56c4a9*/
            {
              v22 = v16; /*0x56c4ab*/
              v21 = i; /*0x56c4af*/
            }
            continue; /*0x56c4af*/
          }
          v25[0] = (v8 << 8) + 128; /*0x56c41b*/
          v25[1] = (v10 << 8) + 128; /*0x56c429*/
          v25[2] = 0; /*0x56c431*/
          v15 = Vector3::Subtract((Vector3 *)a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length((Coord *)v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      LOWORD(v3) = v30; /*0x56c4be*/
    }
    v5 = v24 + 4; /*0x56c4c7*/
    v24 += 4; /*0x56c4d0*/
    if ( (int)v24 >= (int)&g_MissionQueueFrame.waypoints[2094] ) /*0x56c4d4*/
      break; /*0x56c4d4*/
    LOWORD(v4) = v31; /*0x56c33e*/
  }
  result = v21; /*0x56c4da*/
  if ( v21 ) /*0x56c4e4*/
  {
    if ( v22 > 181 ) /*0x56c4ee*/
      return 0; /*0x56c4f0*/
  }
  return result; /*0x56c4de*/
}



// ==== 0x0056C500  nullsub_167  this=-  sig=ida-proto ====
void __cdecl nullsub_167()
{
  ; /*0x56c500*/
}



// ==== 0x0056C510  Terrain::ConnectivityGraph  this=Terrain  sig=csp ====
int __thiscall Terrain::ConnectivityGraph(Terrain *this)
{
  Terrain *v1; // ebp
  _DWORD *Terrain_field_0x14; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  void **pad_18; // esi
  int v8; // edi
  unsigned int i; // eax
  int v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 *v19; // esi
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  int v30; // edx
  _DWORD *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  bool v37; // zf
  int v38; // eax
  int v39; // ecx
  _WORD *v40; // ebx
  int v41; // eax
  _WORD *v42; // ecx
  int j; // edi
  int v44; // eax
  int v45; // esi
  int *v46; // edx
  int v47; // ecx
  int *v48; // edi
  unsigned __int16 *v49; // esi
  int v50; // eax
  _WORD *v51; // ecx
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // esi
  int v60; // ecx
  int *v61; // edi
  int v62; // eax
  int v63; // ecx
  _WORD *v64; // esi
  int v65; // ecx
  int v66; // eax
  __int16 *v67; // ecx
  int v68; // esi
  _WORD *v69; // edx
  unsigned __int16 v70; // ax
  unsigned __int16 *v71; // edi
  int v72; // ecx
  int v73; // edx
  int v74; // esi
  void **v75; // edi
  int *v77; // [esp+10h] [ebp-54h]
  __int16 v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  unsigned __int8 *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  __int16 *v82; // [esp+20h] [ebp-44h]
  _DWORD *v83; // [esp+24h] [ebp-40h]
  int v84; // [esp+28h] [ebp-3Ch]
  int v85; // [esp+28h] [ebp-3Ch]
  int *v86; // [esp+28h] [ebp-3Ch]
  unsigned __int8 *v87; // [esp+2Ch] [ebp-38h]
  char *v88; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  char *v90; // [esp+2Ch] [ebp-38h]
  _WORD *v91; // [esp+2Ch] [ebp-38h]
  int v92; // [esp+30h] [ebp-34h] BYREF
  int v93; // [esp+34h] [ebp-30h]
  int v94; // [esp+38h] [ebp-2Ch]
  int v95; // [esp+3Ch] [ebp-28h]
  int v96; // [esp+40h] [ebp-24h]
  _WORD *v97; // [esp+44h] [ebp-20h]
  Terrain *v98; // [esp+48h] [ebp-1Ch]
  void **v99; // [esp+4Ch] [ebp-18h] BYREF
  void *v100; // [esp+50h] [ebp-14h]
  int v101; // [esp+54h] [ebp-10h]
  int v102; // [esp+58h] [ebp-Ch]
  int v103; // [esp+5Ch] [ebp-8h]
  int v104; // [esp+60h] [ebp-4h]

  v1 = this; /*0x56c515*/
  v81 = -1; /*0x56c51a*/
  v95 = -1; /*0x56c51e*/
  Terrain_field_0x14 = this->Terrain_field_0x14; /*0x56c529*/
  v3 = 0; /*0x56c52c*/
  v4 = *(_DWORD *)this->__pad_68 + 4 * *(_DWORD *)&this->__pad_68[4]; /*0x56c52e*/
  v100 = 0; /*0x56c531*/
  v101 = 0; /*0x56c535*/
  LOWORD(v102) = 1; /*0x56c539*/
  v99 = &DynamicVectorClass<enum PassabilityType>::`vftable'; /*0x56c542*/
  v103 = 0; /*0x56c54a*/
  v104 = 300; /*0x56c54e*/
  v5 = Terrain_field_0x14[2]; /*0x56c556*/
  v98 = this; /*0x56c55c*/
  v87 = (unsigned __int8 *)v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(*Terrain_field_0x14 + v6) + 12))(*Terrain_field_0x14 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < Terrain_field_0x14[2] ); /*0x56c57c*/
  }
  pad_18 = (void **)v1->__pad_18; /*0x56c57e*/
  v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *pad_18 ) /*0x56c586*/
    {
      __3_YAXPAX_Z(*pad_18); /*0x56c58d*/
      *pad_18 = 0; /*0x56c595*/
    }
    ++pad_18; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = *(_DWORD *)v1->__pad_68; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(_WORD *)(i + 2) = 0; /*0x56c5ac*/
  v10 = 1; /*0x56c5c3*/
  if ( v103 < v101 /*0x56c5eb*/
    || (BYTE1(v102) || !v101)
    && v104 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
  {
    v11 = v103++; /*0x56c5f6*/
    *((_DWORD *)v100 + v11) = 7; /*0x56c601*/
  }
  v12 = *(unsigned __int8 **)v1->__pad_68; /*0x56c608*/
  v92 = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    v13 = v95; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      v14 = *v12; /*0x56c621*/
      v95 = v14; /*0x56c626*/
      if ( v14 == 7 || *((_WORD *)v12 + 1) ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        g_MissionQueueFrame.briefing[273] = 0; /*0x56c640*/
        v15 = Terrain::FloodFillConnectivity((int)v1, v12, v10, &v92); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (unsigned __int16)v10; /*0x56c65d*/
        }
        if ( v103 < v101 /*0x56c68e*/
          || (BYTE1(v102) || !v101)
          && v104 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
        {
          v16 = v103++; /*0x56c69d*/
          *((_DWORD *)v100 + v16) = v95; /*0x56c6a8*/
        }
        ++v10; /*0x56c6af*/
        v12 += 4 * v92; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  *(_DWORD *)&v1->__pad_44[8] = (unsigned __int16)v10; /*0x56c6c8*/
  v17 = v1->Terrain_field_0x60[0] - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    v18 = 16 * v17; /*0x56c6d7*/
    v88 = (char *)(16 * v17); /*0x56c6db*/
    v84 = v1->Terrain_field_0x60[0]; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (__int16 *)(*(_DWORD *)&v1->__pad_44[16] + v18); /*0x56c6ea*/
      if ( *((_BYTE *)v19 + 8) ) /*0x56c6e6*/
      {
        v20 = *(_DWORD *)&v1->__pad_68[144] + *(_DWORD *)&v1->__pad_68[140] + 1; /*0x56c704*/
        v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          v22 = *(_DWORD *)&v1->__pad_68[4]; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        v23 = *(_DWORD *)v1->__pad_68; /*0x56c725*/
        v24 = *(unsigned __int16 *)(v23 + 4 * v21 + 2); /*0x56c72d*/
        v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          v26 = *(_DWORD *)&v1->__pad_68[4]; /*0x56c73e*/
          if ( v25 >= v26 ) /*0x56c743*/
            v25 = v26 - 1; /*0x56c745*/
        }
        else
        {
          v25 = 0; /*0x56c73a*/
        }
        v27 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c74a*/
        if ( (unsigned __int16)v27 != v24 ) /*0x56c751*/
        {
          if ( (unsigned __int16)v27 < v24 ) /*0x56c753*/
          {
            v27 = v24; /*0x56c757*/
            v24 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c759*/
          }
          v28 = v27 | (v24 << 16); /*0x56c763*/
          v29 = *(_DWORD *)v1->Terrain_field_0x14 + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
          v30 = *(_DWORD *)(v29 + 16); /*0x56c778*/
          v31 = *(_DWORD **)(v29 + 4); /*0x56c77c*/
          v32 = v30 - 1; /*0x56c77f*/
          if ( v30 - 1 < 0 ) /*0x56c784*/
          {
LABEL_48:
            v33 = *(_DWORD *)(v29 + 8); /*0x56c790*/
            if ( v30 < v33 /*0x56c7b2*/
              || (*(_BYTE *)(v29 + 13) || !v33)
              && (v34 = *(_DWORD *)(v29 + 20), v34 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v29 + 8))(v29, v33 + v34, 0) )
            {
              v35 = *(_DWORD *)(v29 + 16); /*0x56c7b9*/
              v36 = *(_DWORD *)(v29 + 4); /*0x56c7bc*/
              *(_DWORD *)(v29 + 16) = v35 + 1; /*0x56c7c2*/
              *(_DWORD *)(v36 + 8 * v35) = v28; /*0x56c7c5*/
              *(_DWORD *)(v36 + 8 * v35 + 4) = v28; /*0x56c7c8*/
            }
          }
          else
          {
            while ( v28 != *v31 ) /*0x56c788*/
            {
              v31 += 2; /*0x56c78a*/
              if ( --v32 < 0 ) /*0x56c78e*/
                goto LABEL_48; /*0x56c78e*/
            }
          }
        }
      }
      v18 = (int)(v88 - 16); /*0x56c7d4*/
      v37 = v84 == 1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      --v84; /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = __2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c7ec*/
  v39 = *(_DWORD *)&v1->__pad_44[8]; /*0x56c7f1*/
  v40 = (_WORD *)v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  v97 = v40; /*0x56c7fd*/
  if ( v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      *v42 = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      ++v42; /*0x56c80e*/
    }
    while ( v41 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    v44 = j + *(_DWORD *)v1->Terrain_field_0x14; /*0x56c81c*/
    v45 = *(_DWORD *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      v46 = (int *)(*(_DWORD *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++v40[(unsigned __int16)v47]; /*0x56c83b*/
        ++v40[HIWORD(v47)]; /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = (int *)__2_YAPAXI_Z(4 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c87c*/
  {
    v48 = v77; /*0x56c87e*/
    v49 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v48++ = __2_YAPAXI_Z(2 * *v49++); /*0x56c891*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      *v51 = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      ++v51; /*0x56c8c0*/
    }
    while ( v50 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    v53 = *(_DWORD *)v1->Terrain_field_0x14; /*0x56c8d0*/
    v54 = *(_DWORD *)(v53 + v52 + 16); /*0x56c8d2*/
    v55 = v52 + v53; /*0x56c8d6*/
    if ( v54 > 0 ) /*0x56c8da*/
    {
      v90 = (char *)v54; /*0x56c8df*/
      Block = (int *)(*(_DWORD *)(v55 + 4) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        v56 = *Block; /*0x56c8f4*/
        v57 = (unsigned __int16)*Block; /*0x56c8fa*/
        v58 = HIWORD(*Block); /*0x56c8ff*/
        *(_WORD *)(v77[v57] + 2 * (unsigned __int16)v40[v57]) = v58; /*0x56c909*/
        *(_WORD *)(v77[(unsigned __int16)v58] + 2 * (unsigned __int16)v40[(unsigned __int16)v58]) = v56; /*0x56c920*/
        ++v40[v57]; /*0x56c924*/
        ++v40[(unsigned __int16)v58]; /*0x56c928*/
        v37 = v90 == (char *)1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 += 24; /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( v52 < 6144 ); /*0x56c953*/
  v59 = __2_YAPAXI_Z(*(_DWORD *)&v1->__pad_44[8]); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = (unsigned __int8 *)v59; /*0x56c972*/
        v60 < *(_DWORD *)&v1->__pad_44[8];
        *(_BYTE *)(v59 + v60 - 1) = *((char *)v100 + 4 * v60 - 4) )
  {
    ++v60; /*0x56c978*/
  }
  v91 = (_WORD *)__2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c993*/
  v61 = dword_82A594; /*0x56c997*/
  v86 = dword_82A594; /*0x56c9a2*/
  v83 = v1->__pad_18; /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = __2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c9b8*/
    v82 = (__int16 *)v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    v63 = 0; /*0x56c9cd*/
    if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c9d1*/
    {
      v64 = (_WORD *)v62; /*0x56c9d3*/
      do /*0x56c9f3*/
        *v64++ = v61[Blocka[v63++]] != 1; /*0x56c9e7*/
      while ( v63 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c9f3*/
    }
    v65 = *(_DWORD *)&v1->__pad_44[8]; /*0x56c9f5*/
    v66 = 0; /*0x56c9f8*/
    v94 = 0; /*0x56c9fc*/
    if ( v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      v95 = (int)v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*v67 ) /*0x56ca0e*/
        {
          v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *v67 = v78; /*0x56ca29*/
          v96 = v61[Blocka[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            v69 = &v91[--v68]; /*0x56ca45*/
            v70 = v40[(unsigned __int16)*v69]; /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (unsigned __int16 *)(v77[(unsigned __int16)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              v93 = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                v72 = *v71; /*0x56ca6d*/
                if ( v86[Blocka[v72]] == v96 && !v82[v72] ) /*0x56ca83*/
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  v82[v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --v93; /*0x56caa2*/
              }
              while ( v93 ); /*0x56caa6*/
              v40 = v97; /*0x56caa8*/
              v1 = v98; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = (__int16 *)v95; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = v94; /*0x56cac5*/
        }
        v73 = *(_DWORD *)&v1->__pad_44[8]; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        ++v67; /*0x56cacd*/
        v94 = v66; /*0x56cad2*/
        v95 = (int)v67; /*0x56cad6*/
      }
      while ( v66 < v73 ); /*0x56cada*/
    }
    v61 += 8; /*0x56cae8*/
    *v82 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      __3_YAXPAX_Z(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56cb28*/
  }
  __3_YAXPAX_Z(Blocka); /*0x56cb2f*/
  __3_YAXPAX_Z(v77); /*0x56cb39*/
  __3_YAXPAX_Z(v40); /*0x56cb3f*/
  __3_YAXPAX_Z(v91); /*0x56cb49*/
  v99 = &VectorClass<enum PassabilityType>::`vftable'; /*0x56cb5a*/
  if ( v100 && BYTE1(v102) ) /*0x56cb6b*/
    __3_YAXPAX_Z(v100); /*0x56cb6e*/
  return v81; /*0x56cb57*/
}



// ==== 0x0056CB80  Cell::DecodeFlags  this=Cell  sig=csp ====
int __thiscall Cell::DecodeFlags(Cell *this)
{
  return this->Cell_field_0x0 & 0xF | ((unsigned __int16)this->Cell_field_0x0 >> 12); /*0x56cb8f*/
}



// ==== 0x0056CB90  Terrain::FloodFillConnectivity  this=Terrain  sig=csp ====
int __thiscall Terrain_FloodFillConnectivity(int this, unsigned __int8 *a2, int a3, _DWORD *a4)
{
  unsigned __int8 *v4; // ebx
  int v5; // edi
  unsigned __int8 *v6; // ebp
  int v7; // ecx
  unsigned __int8 *v8; // esi
  __int64 v9; // rax
  int v10; // edx
  int v11; // edi
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  int v27; // ebx
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  unsigned __int8 *v37; // ebp
  unsigned __int8 *v38; // esi
  int v39; // eax
  int v40; // edx
  unsigned __int8 *v41; // edi
  int v42; // ebx
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ebp
  int v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // eax
  _DWORD *v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  unsigned __int8 *v56; // ebp
  unsigned int v57; // esi
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // edi
  int v64; // ecx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  _DWORD *v68; // ecx
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // edx
  bool v74; // [esp+1Bh] [ebp-21h]
  int v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+20h] [ebp-1Ch]
  int v78; // [esp+24h] [ebp-18h]
  int v79; // [esp+24h] [ebp-18h]
  int v80; // [esp+24h] [ebp-18h]
  int v81; // [esp+28h] [ebp-14h]
  int v82; // [esp+2Ch] [ebp-10h] BYREF
  int v83; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v84; // [esp+34h] [ebp-8h]
  int v85; // [esp+38h] [ebp-4h]
  int v86; // [esp+40h] [ebp+4h]
  unsigned int v87; // [esp+48h] [ebp+Ch]

  v4 = a2; /*0x56cb94*/
  v5 = *a2; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  v6 = a2; /*0x56cbaf*/
  v7 = a2[1]; /*0x56cbb1*/
  v8 = a2; /*0x56cbb4*/
  v81 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    v9 = v6[1] - v7; /*0x56cbc5*/
    if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((_WORD *)v6 + 1) = a3; /*0x56cbd6*/
    v10 = *(v6 - 4); /*0x56cbda*/
    v7 = v6[1]; /*0x56cbdf*/
    v6 -= 4; /*0x56cbe2*/
  }
  while ( v10 == v5 ); /*0x56cbe7*/
  v76 = v7; /*0x56cbeb*/
  v11 = *((unsigned __int16 *)v6 + 1); /*0x56cbef*/
  v78 = (unsigned __int16)v11; /*0x56cbf5*/
  if ( (_WORD)v11 ) /*0x56cbf9*/
  {
    v12 = v6[1] - v7; /*0x56cc06*/
    if ( ((int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (unsigned __int16)a3 ) /*0x56cc34*/
    {
      v13 = (unsigned __int16)a3 | ((unsigned __int16)v11 << 16); /*0x56cc46*/
      v14 = **(_DWORD **)(this + 20); /*0x56cc5a*/
      v15 = *(_DWORD *)(v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      v16 = v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
      v17 = v15 - 1; /*0x56cc63*/
      v18 = *(_DWORD **)(v16 + 4); /*0x56cc68*/
      if ( v15 - 1 < 0 ) /*0x56cc6b*/
      {
LABEL_12:
        v19 = *(_DWORD *)(v16 + 8); /*0x56cc77*/
        if ( v15 < v19 /*0x56cc99*/
          || (*(_BYTE *)(v16 + 13) || !v19)
          && (v20 = *(_DWORD *)(v16 + 20), v20 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v19 + v20, 0) )
        {
          v21 = *(_DWORD *)(v16 + 16); /*0x56cca0*/
          v22 = *(_DWORD *)(v16 + 4); /*0x56cca3*/
          *(_DWORD *)(v16 + 16) = v21 + 1; /*0x56cca9*/
          *(_DWORD *)(v22 + 8 * v21) = v13; /*0x56ccac*/
          *(_DWORD *)(v22 + 8 * v21 + 4) = v13; /*0x56ccaf*/
        }
      }
      else
      {
        while ( v13 != *v18 ) /*0x56cc6f*/
        {
          v18 += 2; /*0x56cc71*/
          if ( --v17 < 0 ) /*0x56cc75*/
            goto LABEL_12; /*0x56cc75*/
        }
      }
      v4 = a2; /*0x56ccb7*/
      dword_ABDE8C = v78; /*0x56ccbb*/
    }
  }
  if ( *v4 == v81 ) /*0x56ccca*/
  {
    v23 = v76; /*0x56ccd0*/
    do /*0x56ccfd*/
    {
      v24 = v8[1] - v23; /*0x56ccdd*/
      if ( (int)((HIDWORD(v24) ^ v24) - HIDWORD(v24)) >= 4 ) /*0x56cce5*/
        break; /*0x56cce5*/
      *((_WORD *)v8 + 1) = a3; /*0x56cce9*/
      v23 = v8[1]; /*0x56cced*/
      v8 += 4; /*0x56ccf0*/
      v76 = v23; /*0x56ccf5*/
    }
    while ( *v8 == v81 ); /*0x56ccfd*/
  }
  v25 = *((unsigned __int16 *)v8 + 1); /*0x56cd01*/
  v79 = (unsigned __int16)v25; /*0x56cd07*/
  if ( (_WORD)v25 ) /*0x56cd0b*/
  {
    v26 = v8[1] - v76; /*0x56cd1c*/
    if ( ((int)((HIDWORD(v26) ^ v26) - HIDWORD(v26)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (unsigned __int16)a3 ) /*0x56cd4a*/
    {
      v27 = (unsigned __int16)a3 | ((unsigned __int16)v25 << 16); /*0x56cd5c*/
      v28 = **(_DWORD **)(this + 20); /*0x56cd70*/
      v29 = *(_DWORD *)(v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      v30 = v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
      v31 = v29 - 1; /*0x56cd79*/
      v32 = *(_DWORD **)(v30 + 4); /*0x56cd7e*/
      if ( v29 - 1 < 0 ) /*0x56cd81*/
      {
LABEL_31:
        v33 = *(_DWORD *)(v30 + 8); /*0x56cd8d*/
        if ( v29 < v33 /*0x56cdaf*/
          || (*(_BYTE *)(v30 + 13) || !v33)
          && (v34 = *(_DWORD *)(v30 + 20), v34 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(v30, v33 + v34, 0) )
        {
          v35 = *(_DWORD *)(v30 + 16); /*0x56cdb6*/
          v36 = *(_DWORD *)(v30 + 4); /*0x56cdb9*/
          *(_DWORD *)(v30 + 16) = v35 + 1; /*0x56cdbf*/
          *(_DWORD *)(v36 + 8 * v35) = v27; /*0x56cdc2*/
          *(_DWORD *)(v36 + 8 * v35 + 4) = v27; /*0x56cdc5*/
        }
      }
      else
      {
        while ( v27 != *v32 ) /*0x56cd85*/
        {
          v32 += 2; /*0x56cd87*/
          if ( --v31 < 0 ) /*0x56cd8b*/
            goto LABEL_31; /*0x56cd8b*/
        }
      }
      dword_ABDE8C = v79; /*0x56cdcd*/
    }
  }
  v77 = ((v8 - v6) >> 2) - 1; /*0x56cde6*/
  v37 = v6 + 4; /*0x56cdec*/
  v82 = 0; /*0x56cdf2*/
  v83 = 0; /*0x56cdf6*/
  *a4 = ((v8 - a2) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = *(_DWORD *)(this + 248) + *(_DWORD *)(this + 244) + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v80 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = (int)&v37[v39 - 4]; /*0x56ce2c*/
  v86 = v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  v87 = (unsigned int)&v38[-v39 + 4]; /*0x56ce41*/
  if ( (unsigned int)&v37[-v40] <= v87 )
  {
    while ( 1 )
    {
      v42 = *((unsigned __int16 *)v41 + 1); /*0x56ce51*/
      if ( (unsigned int)v41 >= v87 - 4 )
        v43 = (int)(v41 == (unsigned __int8 *)(v87 - 4) ? &v41[v86] : &v41[v86 - 4]);
      else
        v43 = (int)&v41[v80]; /*0x56ce60*/
      if ( *((_WORD *)v41 + 1) ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v81 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      v44 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56ce98*/
      if ( (int)((HIDWORD(v44) ^ v44) - HIDWORD(v44)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(v41, a3, &v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
LABEL_63:
      if ( (unsigned int)v41 > v87 ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (unsigned __int16)a3 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      v45 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56cefa*/
      if ( (int)((HIDWORD(v45) ^ v45) - HIDWORD(v45)) < 2 || v74 ) /*0x56cf0a*/
      {
        v46 = (unsigned __int16)a3 | (v42 << 16); /*0x56cf16*/
        v47 = **(_DWORD **)(this + 20); /*0x56cf2a*/
        v48 = *(_DWORD *)(v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        v49 = v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
        v50 = v48 - 1; /*0x56cf33*/
        v51 = *(_DWORD **)(v49 + 4); /*0x56cf38*/
        if ( v48 - 1 < 0 ) /*0x56cf3b*/
        {
LABEL_55:
          v52 = *(_DWORD *)(v49 + 8); /*0x56cf47*/
          if ( v48 < v52 /*0x56cf69*/
            || (*(_BYTE *)(v49 + 13) || !v52)
            && (v53 = *(_DWORD *)(v49 + 20), v53 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v49 + 8))(v49, v52 + v53, 0) )
          {
            v54 = *(_DWORD *)(v49 + 16); /*0x56cf70*/
            v55 = *(_DWORD *)(v49 + 4); /*0x56cf73*/
            *(_DWORD *)(v49 + 16) = v54 + 1; /*0x56cf79*/
            *(_DWORD *)(v55 + 8 * v54) = v46; /*0x56cf7c*/
            *(_DWORD *)(v55 + 8 * v54 + 4) = v46; /*0x56cf7f*/
          }
        }
        else
        {
          while ( v46 != *v51 ) /*0x56cf3f*/
          {
            v51 += 2; /*0x56cf41*/
            if ( --v50 < 0 ) /*0x56cf45*/
              goto LABEL_55; /*0x56cf45*/
          }
        }
        dword_ABDE8C = v42; /*0x56cf83*/
      }
    }
LABEL_62:
    v41 += 4; /*0x56cf89*/
    goto LABEL_63; /*0x56cf89*/
  }
LABEL_64:
  v56 = (unsigned __int8 *)v85; /*0x56cf96*/
  v57 = v84; /*0x56cf9a*/
  if ( v85 <= v84 ) /*0x56cfa0*/
  {
    do /*0x56d0e6*/
    {
      v58 = *((unsigned __int16 *)v56 + 1); /*0x56cfab*/
      if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
      {
        v60 = v86; /*0x56cfbe*/
        if ( v56 != (unsigned __int8 *)(v57 - 4) ) /*0x56cfc2*/
          v60 = v80; /*0x56cfc4*/
        v59 = (int)&v56[-v60]; /*0x56cfc8*/
      }
      else
      {
        v59 = (int)&v56[-v86 + 4]; /*0x56cfb9*/
      }
      if ( *((_WORD *)v56 + 1) ) /*0x56cfa9*/
      {
        if ( v58 != (unsigned __int16)a3 && v58 != dword_ABDE8C ) /*0x56d03c*/
        {
          v62 = v56[1] - *(unsigned __int8 *)(v59 + 1); /*0x56d04e*/
          if ( (int)((HIDWORD(v62) ^ v62) - HIDWORD(v62)) < 2 || v74 ) /*0x56d05e*/
          {
            v63 = (unsigned __int16)a3 | (v58 << 16); /*0x56d06a*/
            v64 = **(_DWORD **)(this + 20); /*0x56d07e*/
            v65 = *(_DWORD *)(v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
            v66 = v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
            v67 = v65 - 1; /*0x56d087*/
            v68 = *(_DWORD **)(v66 + 4); /*0x56d08c*/
            if ( v65 - 1 < 0 ) /*0x56d08f*/
            {
LABEL_82:
              v69 = *(_DWORD *)(v66 + 8); /*0x56d09b*/
              if ( v65 < v69 /*0x56d0bd*/
                || (*(_BYTE *)(v66 + 13) || !v69)
                && (v70 = *(_DWORD *)(v66 + 20), v70 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v66 + 8))(v66, v69 + v70, 0) )
              {
                v71 = *(_DWORD *)(v66 + 16); /*0x56d0c4*/
                v72 = *(_DWORD *)(v66 + 4); /*0x56d0c7*/
                *(_DWORD *)(v66 + 16) = v71 + 1; /*0x56d0cd*/
                *(_DWORD *)(v72 + 8 * v71) = v63; /*0x56d0d0*/
                *(_DWORD *)(v72 + 8 * v71 + 4) = v63; /*0x56d0d3*/
              }
            }
            else
            {
              while ( v63 != *v68 ) /*0x56d093*/
              {
                v68 += 2; /*0x56d095*/
                if ( --v67 < 0 ) /*0x56d099*/
                  goto LABEL_82; /*0x56d099*/
              }
            }
            dword_ABDE8C = v58; /*0x56d0d7*/
          }
        }
        v57 = v84; /*0x56d0dd*/
        v56 += 4; /*0x56d0e1*/
      }
      else if ( *v56 == v81 /*0x56cfef*/
             && (v61 = v56[1] - *(unsigned __int8 *)(v59 + 1), (int)((HIDWORD(v61) ^ v61) - HIDWORD(v61)) < 2) )
      {
        v77 += Terrain::FloodFillConnectivity(v56, a3, &v83); /*0x56d00f*/
        v56 += 4 * v83; /*0x56d013*/
      }
      else
      {
        v56 += 4; /*0x56d01c*/
      }
    }
    while ( (unsigned int)v56 <= v57 ); /*0x56d0e6*/
  }
  return v77; /*0x56d0f0*/
}



// ==== 0x0056D100  MapSeed::CheckTileMatch  this=MapSeed  sig=csp ====
bool __thiscall MapSeed::CheckTileMatch(MapSeed *this, __int16 *a2, __int16 *a3, int a4, char a5, char a6, char a7)
{
  char IsWithinUsableArea; // al
  int v10; // ecx
  int v11; // eax
  bool v12; // al
  char v14; // al
  int v15; // edx
  int v16; // ecx
  bool v17; // al
  int TileIndex; // ebp
  char v20; // [esp+18h] [ebp+4h]
  char v21; // [esp+1Ch] [ebp+8h]

  if ( a4 == -1 ) /*0x56d110*/
    return 1; /*0x56d115*/
  IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1); /*0x56d128*/
  v10 = *a2; /*0x56d12d*/
  v20 = IsWithinUsableArea; /*0x56d136*/
  v11 = a2[1]; /*0x56d13a*/
  v12 = v11 + v10 > *(int *)&stru_87F5F0.__pad_58[660] /*0x56d163*/
     && v10 - v11 < *(int *)&stru_87F5F0.__pad_58[660]
     && v11 - v10 < *(int *)&stru_87F5F0.__pad_58[660]
     && v11 + v10 <= *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664];
  if ( !v20 && v12 ) /*0x56d16f*/
    return 1; /*0x56d174*/
  v14 = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a3, 1); /*0x56d187*/
  v15 = *a3; /*0x56d18c*/
  v16 = a3[1]; /*0x56d18f*/
  v21 = v14; /*0x56d199*/
  v17 = v16 + v15 > *(int *)&stru_87F5F0.__pad_58[660] /*0x56d1c3*/
     && v15 - v16 < *(int *)&stru_87F5F0.__pad_58[660]
     && v16 - v15 < *(int *)&stru_87F5F0.__pad_58[660]
     && v16 + v15 <= *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664];
  if ( a7 && v20 && !v21 && v17 ) /*0x56d1df*/
    return 1; /*0x56d1e4*/
  TileIndex = MapClass::GetTileIndex((MapClass *)this, a3, a4, a6); /*0x56d205*/
  return MapClass::GetTileIndex((MapClass *)this, a2, a4, a5) == TileIndex; /*0x56d112*/
}



// ==== 0x0056D230  MapClass::GetTileIndex  this=MapClass  sig=csp ====
int __thiscall MapClass::GetTileIndex(MapClass *this, __int16 *a2, int a3, char a4)
{
  __int16 *v4; // esi
  MapClass *v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int RegionMap; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // eax
  int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = a2; /*0x56d238*/
  v5 = this; /*0x56d23d*/
  if ( a4 )
  {
    v6 = *a2 + (a2[1] << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56d26f*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      RegionMap = GetRegionMap((ObjectClass *)this, a2, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * RegionMap + *(_DWORD *)v5->__pad_54; /*0x56d2a3*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v4 = (__int16 *)(16 * RegionMap + *(_DWORD *)v5->__pad_54); /*0x56d2ac*/
      }
      else
      {
        v10 = *a2 + (a2[1] << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = &g_MissionQueueFrame.briefing[130]; /*0x56d2db*/
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56d2e0*/
        }
        for ( i = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent((Cell *)NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( ((unsigned __int8)Cell::IsInRange((Cell *)NeighbourContent) /*0x56d337*/
           || (unsigned __int8)Cell::IsInRange2((Cell *)NeighbourContent))
          && NeighbourContent[59] != 3 )
        {
          v4 = (__int16 *)(v9 + 4); /*0x56d339*/
        }
        else
        {
          v4 = (__int16 *)v9; /*0x56d361*/
        }
        v5 = this; /*0x56d33b*/
      }
    }
  }
  v14 = *v4 + v4[1] * ((int)v5->MapClass_field_0xF4 + *(_DWORD *)v5->__pad_F8 + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = *(_DWORD *)&v5->__pad_5C[16]; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_18[4 * a3] /*0x56d365*/
                             + 2 * *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_5C[12] + 4 * v14 + 2));
}



// ==== 0x0056D3F0  ObjectClass::CellToTileIndexMap  this=ObjectClass  sig=csp ====
int __thiscall CellToTileIndexMap(ObjectClass *this, __int16 *a2)
{
  int result; // eax
  int health; // ecx

  result = *a2 + a2[1] * (*((_DWORD *)this + 62) + this->q03D + 1); /*0x56d40f*/
  if ( result < 0 ) /*0x56d412*/
    return 0; /*0x56d414*/
  health = this->health; /*0x56d419*/
  if ( result >= health ) /*0x56d41e*/
    return health - 1; /*0x56d420*/
  return result; /*0x56d411*/
}



// ==== 0x0056D430  Cell::CoordToIndex  this=Cell  sig=csp ====
int __thiscall Cell::CoordToIndex(Cell *this, __int16 *a2)
{
  return *a2 + a2[1] * ((int)this->Cell_field_0xF8 + (unsigned int)this->Cell_field_0xF4 + 1); /*0x56d450*/
}



// ==== 0x0056D460  Cell::SetRadar  this=Cell  sig=csp ====
int __thiscall Cell::SetRadar(Cell *this, __int16 *a2)
{
  signed int v2; // eax
  void *Cell_field_0x6C; // edx
  char *Cell_field_0x68; // edx
  char *v5; // ebp
  int v6; // edx
  int result; // eax
  bool v8; // zf
  int v9; // esi
  _DWORD *i; // eax
  int v11; // edx
  int v12; // edi
  _DWORD *v13; // esi
  char *v14; // ecx
  int v15; // [esp+Ch] [ebp-28h]
  char *v16; // [esp+10h] [ebp-24h]
  _DWORD v17[8]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+38h] [ebp+4h]

  v2 = *a2 + a2[1] * ((int)this->Cell_field_0xF8 + (unsigned int)this->Cell_field_0xF4 + 1); /*0x56d484*/
  if ( v2 >= 0 ) /*0x56d486*/
  {
    Cell_field_0x6C = this->Cell_field_0x6C; /*0x56d48c*/
    if ( v2 >= (int)Cell_field_0x6C ) /*0x56d491*/
      v2 = (signed int)Cell_field_0x6C - 1; /*0x56d493*/
  }
  else
  {
    v2 = 0; /*0x56d488*/
  }
  Cell_field_0x68 = (char *)this->Cell_field_0x68; /*0x56d496*/
  v17[2] = 1; /*0x56d499*/
  v17[6] = -1; /*0x56d4a1*/
  v5 = &Cell_field_0x68[4 * v2]; /*0x56d4a9*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x56d4b7*/
  v17[4] = result; /*0x56d4bd*/
  v17[0] = -result; /*0x56d4c3*/
  v17[1] = -(*(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]); /*0x56d4ce*/
  v17[3] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2; /*0x56d4d5*/
  v17[5] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x56d4dc*/
  v6 = -1 - result; /*0x56d4e3*/
  LOBYTE(result) = *v5; /*0x56d4e5*/
  v8 = *v5 == 7; /*0x56d4e8*/
  v17[7] = v6; /*0x56d4ea*/
  if ( !v8 ) /*0x56d4ee*/
  {
    v9 = 0; /*0x56d4f0*/
    for ( i = v17; ; ++i ) /*0x56d4f2*/
    {
      v16 = &v5[4 * *i]; /*0x56d502*/
      if ( !*v16 ) /*0x56d4f8*/
        break; /*0x56d4f8*/
      if ( ++v9 >= 8 ) /*0x56d50f*/
        return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d50f*/
    }
    if ( !&v5[4 * *i] ) /*0x56d4fc*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d4fc*/
    v11 = this->Cell_field_0x18[0]; /*0x56d528*/
    v18 = 0; /*0x56d52c*/
    v12 = 0; /*0x56d534*/
    v13 = v17; /*0x56d536*/
    v15 = 8; /*0x56d53a*/
    do /*0x56d574*/
    {
      v14 = &v5[4 * *v13]; /*0x56d544*/
      if ( *(_WORD *)(v11 + 2 * *((unsigned __int16 *)v14 + 1)) != *(_WORD *)(v11 + 2 * v12) && *v14 != 7 ) /*0x56d55b*/
      {
        v12 = *((unsigned __int16 *)v14 + 1); /*0x56d55d*/
        ++v18; /*0x56d564*/
      }
      ++v13; /*0x56d56c*/
      --v15; /*0x56d570*/
    }
    while ( v15 ); /*0x56d574*/
    result = v18; /*0x56d576*/
    if ( v18 > 3 || *v5 ) /*0x56d580*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d516*/
    *((_WORD *)v5 + 1) = *((_WORD *)v16 + 1); /*0x56d58f*/
  }
  return result; /*0x56d51b*/
}



// ==== 0x0056D5A0  CellClass::DetermineTileConnectivity  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::DetermineTileConnectivity(CellClass *this, __int16 *a2)
{
  int v2; // eax
  int CellClass_field_6C; // edx
  int unknown68; // edx
  unsigned __int8 *v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // edi
  unsigned __int8 *v10; // ebp
  int v11; // ebx
  _DWORD *v12; // edi
  int v14; // [esp+10h] [ebp-28h]
  _DWORD v15[8]; // [esp+18h] [ebp-20h] BYREF
  __int16 *v16; // [esp+3Ch] [ebp+4h]

  v2 = *a2 + a2[1] * ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1); /*0x56d5c5*/
  if ( v2 >= 0 ) /*0x56d5c7*/
  {
    CellClass_field_6C = this->CellClass_field_6C; /*0x56d5cd*/
    if ( v2 >= CellClass_field_6C ) /*0x56d5d2*/
      v2 = CellClass_field_6C - 1; /*0x56d5d4*/
  }
  else
  {
    v2 = 0; /*0x56d5c9*/
  }
  unknown68 = this->unknown68; /*0x56d5d7*/
  v15[2] = 1; /*0x56d5e0*/
  v15[6] = -1; /*0x56d5e8*/
  v5 = (unsigned __int8 *)(unknown68 + 4 * v2); /*0x56d5f0*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x56d5fa*/
  v7 = *v5; /*0x56d5fe*/
  v15[4] = v6; /*0x56d602*/
  v15[0] = -v6; /*0x56d608*/
  v15[1] = -(*(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]); /*0x56d613*/
  v15[3] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2; /*0x56d61a*/
  v15[5] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x56d621*/
  v15[7] = -1 - v6; /*0x56d62d*/
  if ( v7 != 7 ) /*0x56d631*/
  {
    v8 = 0; /*0x56d633*/
    v9 = v15; /*0x56d635*/
    while ( 1 ) /*0x56d63b*/
    {
      v10 = &v5[4 * *v9]; /*0x56d63b*/
      if ( *v10 == v7 ) /*0x56d649*/
        break; /*0x56d649*/
      ++v8; /*0x56d64b*/
      ++v9; /*0x56d64c*/
      if ( v8 >= 8 ) /*0x56d652*/
        goto LABEL_9; /*0x56d652*/
    }
    v11 = 0; /*0x56d668*/
    if ( !v10 ) /*0x56d66c*/
      goto LABEL_9; /*0x56d66c*/
    v16 = 0; /*0x56d671*/
    v12 = v15; /*0x56d675*/
    v14 = 8; /*0x56d679*/
    do /*0x56d6b3*/
    {
      if ( *((_WORD *)&this->attachedTag->AbstractClass + *(unsigned __int16 *)&v5[4 * *v12 + 2]) != *((_WORD *)&this->attachedTag->AbstractClass + v11) /*0x56d69a*/
        && v5[4 * *v12] != 7 )
      {
        v11 = *(unsigned __int16 *)&v5[4 * *v12 + 2]; /*0x56d69c*/
        v16 = (__int16 *)((char *)v16 + 1); /*0x56d6a3*/
      }
      ++v12; /*0x56d6ab*/
      --v14; /*0x56d6af*/
    }
    while ( v14 ); /*0x56d6b3*/
    if ( (int)v16 > 3 ) /*0x56d6ba*/
    {
LABEL_9:
      LOWORD(v6) = Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d654*/
      return v6; /*0x56d659*/
    }
    LOWORD(v6) = *((_WORD *)v10 + 1); /*0x56d6c1*/
    *((_WORD *)v5 + 1) = v6; /*0x56d6c5*/
  }
  return v6; /*0x56d65e*/
}



// ==== 0x0056D6E0  MapClass::ProcessRegion  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessRegion(MapClass *this)
{
  DynamicVector **p_MapClass_field_0x50; // edi
  void *MapClass_field_0xF4; // eax
  int result; // eax
  int v5; // ebp
  InfantryClass *NeighbourContent; // eax
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryClass *v9; // eax
  int v10; // ebx
  int v11; // ebx
  DynamicVector *v12; // eax
  DynamicVector *v13; // ecx
  int v14; // esi
  int v15; // ecx
  DynamicVector *v16; // eax
  int v17; // edx
  char *v18; // eax
  char v19; // al
  int v20; // ecx
  int v21; // eax
  Cell *i; // eax
  Cell *v23; // esi
  int v24; // edx
  int v25; // eax
  void *v26; // ecx
  int Cell_field_0x38; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  DynamicVector *v31; // eax
  DynamicVector *v32; // ecx
  int v33; // ebp
  int v34; // ecx
  DynamicVector *v35; // eax
  int v36; // edx
  char *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  p_MapClass_field_0x50 = &this->MapClass_field_0x50; /*0x56d6ef*/
  (*(void (__thiscall **)(DynamicVector **))this->MapClass_field_0x50->__pad_C)(&this->MapClass_field_0x50); /*0x56d6f4*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56d6f7*/
  *(_DWORD *)this->__pad_10C = 1; /*0x56d6fd*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x56d707*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x56d710*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !(unsigned __int8)Cell::IsInRange((Cell *)v5) && !(unsigned __int8)Cell::IsInRange2((Cell *)v5) ) /*0x56d74c*/
      {
        if ( (unsigned __int8)InfantryClass::IsInBounds((InfantryClass *)v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 2u), /*0x56d7b3*/
                (unsigned __int8)InfantryClass::IsInBounds(NeighbourContent))
            && (v7 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 6u),
                (unsigned __int8)InfantryClass::IsInBounds(v7))
            || (v8 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 4u),
                (unsigned __int8)InfantryClass::IsInBounds(v8))
            && (v9 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 0),
                (unsigned __int8)InfantryClass::IsInBounds(v9)) )
          {
            v42 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((Cell *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((Cell *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7f2*/
              v12 = p_MapClass_field_0x50[2]; /*0x56d7f5*/
              v13 = p_MapClass_field_0x50[4]; /*0x56d7f8*/
              v14 = *(_DWORD *)(v5 + 36); /*0x56d7fb*/
              LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( (int)v13 < (int)v12 /*0x56d82e*/
                || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v12)
                && (v15 = (int)p_MapClass_field_0x50[5], v15 > 0)
                && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                     p_MapClass_field_0x50,
                     &v12->__pad_0[v15],
                     0) )
              {
                v16 = p_MapClass_field_0x50[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                p_MapClass_field_0x50[4] = (DynamicVector *)v16->DynamicVector_field_0x1; /*0x56d843*/
                v18 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v16]; /*0x56d84c*/
                *(_DWORD *)v18 = v14; /*0x56d84e*/
                *((_DWORD *)v18 + 1) = v11; /*0x56d850*/
                *((_DWORD *)v18 + 2) = v17; /*0x56d853*/
                *((_DWORD *)v18 + 3) = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((Cell *)v5); /*0x56d860*/
      v20 = g_Cell_BuildabilityLUT; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(_DWORD *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(unsigned __int8 *)(v5 + 282) ) /*0x56d889*/
        break; /*0x56d889*/
LABEL_42:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d9e9*/
      v5 = result; /*0x56d9f2*/
      if ( !result ) /*0x56d9f6*/
        return result; /*0x56d9f6*/
    }
    v38 = 0; /*0x56d896*/
    v41 = dword_82A774[v21]; /*0x56d89b*/
    v39 = 1; /*0x56d89f*/
    for ( i = (Cell *)Cell::GetNeighbourContent((Cell *)v5, v41); ; i = (Cell *)Cell::GetNeighbourContent(v23, v41) ) /*0x56d8a7*/
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = i; /*0x56d8b0*/
        v24 = *(__int16 *)&i->__pad_1C[8]; /*0x56d8b2*/
        v25 = *(__int16 *)&i->__pad_1C[10]; /*0x56d8b6*/
        v26 = this->MapClass_field_0xF4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= (int)v26 /*0x56d8f8*/
          || v24 - v25 >= (int)v26
          || v25 - v24 >= (int)v26
          || v43 > (int)v26 + 2 * *(_DWORD *)this->__pad_F8 )
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
LABEL_36:
          v30 = *((_DWORD *)Cell::GetNeighbourContent(v23, ((_BYTE)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = p_MapClass_field_0x50[2]; /*0x56d990*/
          v32 = p_MapClass_field_0x50[4]; /*0x56d993*/
          v33 = *(_DWORD *)(v5 + 36); /*0x56d99a*/
          LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( (int)v32 < (int)v31 /*0x56d9c2*/
            || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v31)
            && (v34 = (int)p_MapClass_field_0x50[5], v34 > 0)
            && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                 p_MapClass_field_0x50,
                 &v31->__pad_0[v34],
                 0) )
          {
            v35 = p_MapClass_field_0x50[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            p_MapClass_field_0x50[4] = (DynamicVector *)v35->DynamicVector_field_0x1; /*0x56d9d3*/
            v37 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v35]; /*0x56d9dc*/
            *(_DWORD *)v37 = v33; /*0x56d9de*/
            *((_DWORD *)v37 + 1) = v30; /*0x56d9e0*/
            *((_DWORD *)v37 + 2) = v36; /*0x56d9e3*/
            *((_DWORD *)v37 + 3) = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !(unsigned __int8)Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d90d*/
        v28 = g_Cell_BuildabilityLUT; /*0x56d910*/
LABEL_27:
        v29 = Cell_field_0x38 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == (unsigned __int8)v23->__pad_FC[30] ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
LABEL_30:
        i = (Cell *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( (unsigned __int8)Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( ((int)v23->Cell_field_0x140 & 0x100) != 0 ) /*0x56d960*/
        goto LABEL_30; /*0x56d960*/
      v39 = 0; /*0x56d966*/
    }
  }
  return result; /*0x56d9fd*/
}



// ==== 0x0056DA10  ObjectClass::GetRegionMap  this=ObjectClass  sig=csp ====
int __thiscall GetRegionMap(ObjectClass *this, __int16 *a2, signed int a3, int a4)
{
  __int16 **i; // ecx
  __int16 *v6; // eax
  __int64 v7; // rax
  int v9; // [esp+14h] [ebp-4h]
  __int16 *v10; // [esp+1Ch] [ebp+4h]

  v9 = this->customSound_controller[4]; /*0x56da24*/
  if ( a4 >= v9 ) /*0x56da28*/
    return -1; /*0x56dac3*/
  for ( i = (__int16 **)(16 * a4 + this->customSound_controller[1]); ; i += 4 ) /*0x56da38*/
  {
    if ( i[3] ) /*0x56da3a*/
      goto LABEL_12; /*0x56da3f*/
    v6 = i[1]; /*0x56da43*/
    v10 = *i; /*0x56da4e*/
    if ( (__int16)*i != (__int16)v6 ) /*0x56da52*/
      break; /*0x56da52*/
    LOWORD(v6) = a2[1]; /*0x56da5a*/
    if ( (__int16)v6 >= SHIWORD(v10) && (__int16)v6 <= SHIWORD(v6) && (int)abs32(*a2 - (__int16)*i) <= a3 ) /*0x56da7c*/
      return a4; /*0x56da7c*/
LABEL_12:
    if ( ++a4 >= v9 ) /*0x56dab7*/
      return -1; /*0x56dab7*/
  }
  if ( *a2 > (__int16)v6 ) /*0x56da86*/
    goto LABEL_12; /*0x56da86*/
  if ( *a2 < (__int16)*i ) /*0x56da8b*/
    goto LABEL_12; /*0x56da8b*/
  v7 = a2[1] - SHIWORD(v10); /*0x56da98*/
  if ( (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > a3 ) /*0x56daa3*/
    goto LABEL_12; /*0x56daa3*/
  return a4; /*0x56dab9*/
}



// ==== 0x0056DAE0  MapClass::ClearRegions  this=MapClass  sig=csp ====
char __thiscall MapClass::ClearRegions(MapClass *this, __int16 *a2)
{
  int RegionMap; // edi
  char v6; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(this); /*0x56dafc*/
    RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  v6 = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(_BYTE *)(16 * RegionMap + *(_DWORD *)this->__pad_54 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph((ObjectClass *)this, (int *)(16 * RegionMap + *(_DWORD *)this->__pad_54)); /*0x56db3b*/
      v6 = 1; /*0x56db43*/
      *(_BYTE *)(*(_DWORD *)this->__pad_54 + 16 * RegionMap + 8) = 0; /*0x56db48*/
    }
    RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, RegionMap + 1); /*0x56db59*/
  }
  while ( RegionMap != -1 ); /*0x56db5e*/
  return v6; /*0x56db14*/
}



// ==== 0x0056DB70  ObjectClass::InvalidateTileRegionMap  this=ObjectClass  sig=csp ====
int __thiscall InvalidateTileRegionMap(ObjectClass *this, __int16 *a2)
{
  int result; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  char v8; // cl
  _BYTE *v9; // eax
  char v10; // [esp+10h] [ebp+4h]

  result = GetRegionMap(this, a2, 3, 0); /*0x56db7e*/
  v5 = result; /*0x56db83*/
  if ( result == -1 /*0x56dba2*/
    && (MapClass::ProcessRegion((MapClass *)this), result = GetRegionMap(this, a2, 3, 0), v5 = result, result == -1) )
  {
    LOBYTE(result) = 0; /*0x56dba6*/
  }
  else
  {
    v10 = 0; /*0x56dbaf*/
    if ( v5 != -1 ) /*0x56dbb4*/
    {
      do /*0x56dc0f*/
      {
        v6 = this->customSound_controller[1]; /*0x56dbb7*/
        v7 = 16 * v5; /*0x56dbbc*/
        v8 = *(_BYTE *)(v6 + 16 * v5 + 8); /*0x56dbbf*/
        v9 = (_BYTE *)(v6 + 16 * v5 + 8); /*0x56dbc3*/
        if ( !v8 ) /*0x56dbc9*/
        {
          *v9 = 1; /*0x56dbcb*/
          BuildTileAdjacencyTable(this, (int *)(v7 + this->customSound_controller[1])); /*0x56dbd6*/
          if ( !MapSeed::CheckTileMatch( /*0x56dbf0*/
                  (MapSeed *)this,
                  (__int16 *)(this->customSound_controller[1] + v7),
                  (__int16 *)(this->customSound_controller[1] + v7 + 4),
                  0,
                  0,
                  0,
                  0) )
            v10 = 1; /*0x56dbf9*/
        }
        result = GetRegionMap(this, a2, 3, v5 + 1); /*0x56dc05*/
        v5 = result; /*0x56dc0a*/
      }
      while ( result != -1 ); /*0x56dc0f*/
    }
    LOBYTE(result) = v10; /*0x56dc12*/
  }
  return result; /*0x56dba4*/
}



// ==== 0x0056DC20  LayerClass::Pathfinding_Find  this=LayerClass  sig=csp ====
_DWORD *__fastcall LayerClass::Pathfinding_Find(
        Type *a1,
        int a2,
        _DWORD *a3,
        __int16 *a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14,
        __int16 *a15,
        char a16,
        char a17)
{
  MapClass *v17; // ebx
  int v18; // edx
  Type *v19; // eax
  unsigned int v20; // eax
  int *v21; // eax
  unsigned int v22; // eax
  int *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  Cell *v29; // eax
  Cell *v30; // esi
  __int64 v31; // rax
  int *v32; // ecx
  __int16 v33; // ax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  Cell *v38; // eax
  Cell *v39; // esi
  __int64 v40; // rax
  int *v41; // ecx
  __int16 v42; // ax
  int v43; // esi
  _DWORD *v44; // eax
  int v45; // edi
  int *v46; // ebp
  unsigned int v47; // eax
  Cell *v48; // eax
  Cell *v49; // esi
  __int64 v50; // rax
  __int16 v51; // ax
  int v52; // esi
  _DWORD *v53; // eax
  unsigned int v54; // eax
  Cell *v55; // eax
  Cell *v56; // esi
  __int64 v57; // rax
  __int16 v58; // ax
  int v59; // esi
  _DWORD *v60; // eax
  _DWORD *v61; // ebx
  unsigned __int16 *v62; // esi
  unsigned __int16 v63; // di
  __int16 v64; // bp
  _DWORD *v65; // eax
  Type *v66; // edx
  Type *v67; // ecx
  Type *v69; // ebx
  int v70; // edi
  _DWORD *v71; // eax
  _DWORD *v72; // esi
  int v73; // eax
  double v75; // [esp+0h] [ebp-1F4h]
  int v76; // [esp+18h] [ebp-1DCh] BYREF
  char v77; // [esp+1Fh] [ebp-1D5h]
  int v78; // [esp+20h] [ebp-1D4h]
  int v79; // [esp+24h] [ebp-1D0h]
  int v80; // [esp+28h] [ebp-1CCh]
  Type *v81; // [esp+2Ch] [ebp-1C8h]
  Type *v82; // [esp+30h] [ebp-1C4h]
  _DWORD *i; // [esp+34h] [ebp-1C0h]
  int v84; // [esp+38h] [ebp-1BCh]
  int v85; // [esp+3Ch] [ebp-1B8h]
  int v86; // [esp+40h] [ebp-1B4h]
  int *v87; // [esp+44h] [ebp-1B0h]
  int v88; // [esp+48h] [ebp-1ACh]
  double v89; // [esp+4Ch] [ebp-1A8h] BYREF
  int v90; // [esp+54h] [ebp-1A0h]
  int v91; // [esp+58h] [ebp-19Ch] BYREF
  int v92; // [esp+5Ch] [ebp-198h]
  int v93; // [esp+60h] [ebp-194h]
  _DWORD v94[3]; // [esp+64h] [ebp-190h] BYREF
  _DWORD v95[3]; // [esp+70h] [ebp-184h] BYREF
  _DWORD v96[3]; // [esp+7Ch] [ebp-178h] BYREF
  int v97[4]; // [esp+88h] [ebp-16Ch] BYREF
  int v98[4]; // [esp+98h] [ebp-15Ch] BYREF
  int v99[4]; // [esp+A8h] [ebp-14Ch] BYREF
  int v100[4]; // [esp+B8h] [ebp-13Ch] BYREF
  char v101[4]; // [esp+C8h] [ebp-12Ch] BYREF
  char v102[4]; // [esp+CCh] [ebp-128h] BYREF
  char v103[4]; // [esp+D0h] [ebp-124h] BYREF
  _DWORD v104[24]; // [esp+D4h] [ebp-120h] BYREF
  _DWORD v105[24]; // [esp+134h] [ebp-C0h] BYREF
  _DWORD v106[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = (MapClass *)a1; /*0x56dc27*/
  v18 = *a4; /*0x56dc33*/
  v19 = (Type *)a4[1]; /*0x56dc36*/
  v81 = a1; /*0x56dc49*/
  v78 = 0; /*0x56dc4d*/
  v86 = v18; /*0x56dc51*/
  v82 = v19; /*0x56dc55*/
  v77 = 0; /*0x56dc59*/
  if ( a6 == 0xFFFF ) /*0x56dc5e*/
    a6 = -1; /*0x56dc60*/
  v20 = v18 + ((_DWORD)v19 << 9); /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a4; /*0x56dc88*/
    v21 = &g_MissionQueueFrame.briefing[130]; /*0x56dc8d*/
  }
  v84 = *((char *)v21 + 283); /*0x56dc99*/
  if ( a8 ) /*0x56dca6*/
  {
    v22 = *a4 + (a4[1] << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56dcc6*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a4; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v84 += 4; /*0x56dcdc*/
  }
  v24 = a1[62].Type_field_00 + a1[61].Type_field_00; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (_DWORD *)v24; /*0x56dcfb*/
  v79 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_125; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v79; /*0x56dd09*/
    v26 = -v79; /*0x56dd0f*/
    if ( -v79 <= v79 ) /*0x56dd13*/
    {
      v87 = &v104[v78]; /*0x56dd24*/
      do /*0x56dd28*/
      {
        if ( a16 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        LOWORD(v88) = v86 + v26; /*0x56dd44*/
        v27 = (__int16)((_WORD)v82 - v25); /*0x56dd49*/
        HIWORD(v88) = (_WORD)v82 - v25; /*0x56dd4c*/
        v76 = v88; /*0x56dd5a*/
        v28 = (__int16)(v86 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v79; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v79; /*0x56dd82*/
        }
        g_MissionQueueFrame.briefing[139] = v88; /*0x56dd86*/
        v30 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56dd8c*/
LABEL_23:
        v99[1] = v27; /*0x56dd91*/
        v99[0] = (__int16)(v86 + v26); /*0x56dd9f*/
        v99[2] = a9; /*0x56ddad*/
        v99[3] = a10; /*0x56ddb9*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56de0e*/
          {
            if ( !a12 /*0x56de4c*/
              || (v31 = v84 - 4 * (((unsigned int)v30->Cell_field_0x140 >> 8) & 1) - v30->Cell_field_0x11B[0],
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v30)) /*0x56de9d*/
                && (a14 || ((int)v30->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v99, -1)) )
              {
                v32 = v87; /*0x56deaa*/
                v33 = v76; /*0x56deae*/
                v34 = v78; /*0x56deb2*/
                *v87 = v76; /*0x56deb6*/
                v87 = v32 + 1; /*0x56debb*/
                v78 = v34 + 1; /*0x56dec9*/
                if ( a8 /*0x56df18*/
                  || (v94[0] = (v33 << 8) + 128,
                      v94[1] = (SHIWORD(v76) << 8) + 128,
                      v94[2] = 0,
                      v35 = Terrain::ClimbCheck(v101, v94),
                      v76 == *v35) )
                {
                  v77 = 1; /*0x56df25*/
                }
              }
            }
          }
        }
LABEL_36:
        if ( v78 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( a16 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        HIWORD(v90) = (_WORD)v82 + v25; /*0x56df5a*/
        LOWORD(v90) = v86 + v26; /*0x56df5f*/
        v36 = (__int16)((_WORD)v82 + v25); /*0x56df68*/
        v76 = v90; /*0x56df70*/
        v37 = (__int16)(v86 + v26) + (v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v79; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v79; /*0x56df98*/
        }
        g_MissionQueueFrame.briefing[139] = v90; /*0x56df9c*/
        v39 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56dfa2*/
LABEL_44:
        v98[1] = v36; /*0x56dfa7*/
        v98[3] = a10; /*0x56dfbe*/
        v98[0] = (__int16)(v86 + v26); /*0x56dfc8*/
        v98[2] = a9; /*0x56dfcf*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e024*/
          {
            if ( !a12 /*0x56e062*/
              || (v40 = v84 - 4 * (((unsigned int)v39->Cell_field_0x140 >> 8) & 1) - v39->Cell_field_0x11B[0],
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v39)) /*0x56e0b3*/
                && (a14 || ((int)v39->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v98, -1)) )
              {
                v41 = v87; /*0x56e0c0*/
                v42 = v76; /*0x56e0c4*/
                v43 = v78; /*0x56e0c8*/
                *v87 = v76; /*0x56e0cc*/
                v87 = v41 + 1; /*0x56e0d1*/
                v78 = v43 + 1; /*0x56e0df*/
                if ( a8 /*0x56e12f*/
                  || (v95[0] = (v42 << 8) + 128,
                      v95[1] = (SHIWORD(v76) << 8) + 128,
                      v95[2] = 0,
                      v44 = Terrain::ClimbCheck(v103, v95),
                      v76 == *v44) )
                {
                  v77 = 1; /*0x56e13c*/
                }
              }
            }
          }
        }
LABEL_57:
        if ( v78 == 24 ) /*0x56e146*/
          goto LABEL_103; /*0x56e146*/
        ++v26; /*0x56e14c*/
      }
      while ( v26 <= v25 ); /*0x56dd28*/
    }
    v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      v46 = &v104[v78]; /*0x56e176*/
      do /*0x56e17d*/
      {
        if ( a16 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        LOWORD(v85) = v86 - v79; /*0x56e19c*/
        HIWORD(v85) = v45 + (_WORD)v82; /*0x56e1a1*/
        v76 = v85; /*0x56e1b2*/
        v47 = (__int16)(v86 - v79) + ((__int16)(v45 + (_WORD)v82) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = (MapClass *)v81; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = (MapClass *)v81; /*0x56e1d9*/
        }
        g_MissionQueueFrame.briefing[139] = v85; /*0x56e1dd*/
        v49 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56e1e3*/
LABEL_67:
        v100[0] = (__int16)(v86 - v79); /*0x56e1e8*/
        v100[1] = (__int16)(v45 + (_WORD)v82); /*0x56e1fd*/
        v100[2] = a9; /*0x56e209*/
        v100[3] = a10; /*0x56e210*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e265*/
          {
            if ( !a12 /*0x56e2a5*/
              || (v50 = v84 - 4 * (((unsigned int)v49->Cell_field_0x140 >> 8) & 1) - v49->Cell_field_0x11B[0],
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v49)) /*0x56e2f6*/
                && (a14 || ((int)v49->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v100, -1)) )
              {
                v51 = v76; /*0x56e303*/
                v52 = v78; /*0x56e307*/
                *v46++ = v76; /*0x56e312*/
                v78 = v52 + 1; /*0x56e31b*/
                if ( a8 /*0x56e371*/
                  || (v96[0] = (v51 << 8) + 128,
                      v96[1] = (SHIWORD(v76) << 8) + 128,
                      v96[2] = 0,
                      v53 = Terrain::ClimbCheck(v102, v96),
                      v76 == *v53) )
                {
                  v77 = 1; /*0x56e37e*/
                }
              }
            }
          }
        }
LABEL_80:
        if ( v78 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        HIWORD(v80) = v45 + (_WORD)v82; /*0x56e39c*/
        LOWORD(v80) = v79 + v86; /*0x56e3a6*/
        v76 = v80; /*0x56e3b4*/
        v54 = (__int16)(v79 + v86) + ((__int16)(v45 + (_WORD)v82) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = (MapClass *)v81; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = (MapClass *)v81; /*0x56e3db*/
        }
        g_MissionQueueFrame.briefing[139] = v80; /*0x56e3df*/
        v56 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56e3e5*/
LABEL_86:
        v97[0] = (__int16)(v79 + v86); /*0x56e3ea*/
        v97[1] = (__int16)(v45 + (_WORD)v82); /*0x56e3ff*/
        v97[2] = a9; /*0x56e40b*/
        v97[3] = a10; /*0x56e412*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e467*/
          {
            if ( !a12 /*0x56e4a7*/
              || (v57 = v84 - 4 * (((unsigned int)v56->Cell_field_0x140 >> 8) & 1) - v56->Cell_field_0x11B[0],
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v56)) /*0x56e4f8*/
                && (a14 || ((int)v56->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v97, -1)) )
              {
                v58 = v76; /*0x56e501*/
                v59 = v78; /*0x56e505*/
                *v46++ = v76; /*0x56e510*/
                v78 = v59 + 1; /*0x56e519*/
                if ( a8 /*0x56e566*/
                  || (v91 = (v58 << 8) + 128,
                      v92 = (SHIWORD(v76) << 8) + 128,
                      v93 = 0,
                      v60 = Terrain::ClimbCheck(&v89, &v91),
                      v76 == *v60) )
                {
                  v77 = 1; /*0x56e573*/
                }
              }
            }
          }
        }
        if ( v78 == 24 ) /*0x56e57d*/
          goto LABEL_103; /*0x56e57d*/
        ++v45; /*0x56e583*/
      }
      while ( v45 <= v79 - 1 ); /*0x56e17d*/
    }
    if ( v77 ) /*0x56e59c*/
      break; /*0x56e59c*/
    ++v79; /*0x56e5a9*/
  }
  while ( v79 < (int)i ); /*0x56e5ad*/
LABEL_103:
  if ( v78 <= 0 ) /*0x56e5b9*/
  {
LABEL_125:
    *a3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56e7aa*/
    return a3; /*0x56e79a*/
  }
  v81 = 0; /*0x56e5c5*/
  v82 = 0; /*0x56e5c9*/
  v61 = v106; /*0x56e5da*/
  v62 = (unsigned __int16 *)v104; /*0x56e5e1*/
  i = v105; /*0x56e5e8*/
  v80 = v78; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *v62; /*0x56e5f0*/
    v64 = v62[1]; /*0x56e5f3*/
    v91 = ((__int16)*v62 << 8) + 128; /*0x56e60a*/
    v92 = (v64 << 8) + 128; /*0x56e622*/
    v93 = 0; /*0x56e626*/
    v85 = *Terrain::ClimbCheck(&v89, &v91); /*0x56e638*/
    if ( v85 == __PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = i; /*0x56e645*/
      v66 = v81; /*0x56e64b*/
      *i = *(_DWORD *)v62; /*0x56e64f*/
      v81 = (Type *)((char *)&v66->Type_field_00 + 1); /*0x56e655*/
      i = v65 + 1; /*0x56e659*/
    }
    else
    {
      v67 = (Type *)((char *)&v82->Type_field_00 + 1); /*0x56e665*/
      *v61 = *(_DWORD *)v62; /*0x56e666*/
      v82 = v67; /*0x56e668*/
      ++v61; /*0x56e66c*/
    }
    v62 += 2; /*0x56e673*/
    --v80; /*0x56e677*/
  }
  while ( v80 ); /*0x56e67b*/
  if ( *a15 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56e6a6*/
    && a15[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    if ( v81 ) /*0x56e6b0*/
      *a3 = v105[*(_DWORD *)&stru_A8EB00.?[416] % (int)v81]; /*0x56e6c6*/
    else
      *a3 = v106[*(_DWORD *)&stru_A8EB00.?[416] % (int)v82]; /*0x56e6e5*/
    return a3; /*0x56e6b4*/
  }
  else
  {
    v69 = v81; /*0x56e6f2*/
    if ( !v81 ) /*0x56e6f4*/
      v69 = v82; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    v89 = 100000.0; /*0x56e6fa*/
    for ( i = *(_DWORD **)&g_MissionQueueFrame.waypoints[2134]; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = &v105[v70]; /*0x56e718*/
      if ( !v81 ) /*0x56e71f*/
        v71 = &v106[v70]; /*0x56e721*/
      v72 = (_DWORD *)*v71; /*0x56e728*/
      v73 = (__int16)*v71 - *a15; /*0x56e73c*/
      v80 = v73 * v73 + (SHIWORD(v72) - a15[1]) * (SHIWORD(v72) - a15[1]); /*0x56e751*/
      __asm /*0x56e755*/
      {
        fild [esp+1F4h+var_1CC]
        fstp [esp+1F4h+var_1F4]; double
      }
      Math::Sqrt(v75); /*0x56e75c*/
      __asm { fcom [esp+1F4h+var_1A8] } /*0x56e761*/
      __asm { fnstsw ax }
      if ( (_AX & 0x100) != 0 ) /*0x56e76d*/
      {
        __asm { fstp [esp+1ECh+var_1A8] } /*0x56e76f*/
        i = v72; /*0x56e773*/
      }
      else
      {
        __asm { fstp st } /*0x56e779*/
      }
    }
    *a3 = i; /*0x56e78e*/
    return a3; /*0x56e780*/
  }
}



// ==== 0x0056E7C0  MapClass::CheckCellsBuildable  this=MapClass  sig=csp ====
char __stdcall MapClass_CheckCellsBuildable(
        _WORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9)
{
  int v9; // ebp
  int v11; // esi
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v16; // [esp+2Ch] [ebp+1Ch]

  v9 = 0; /*0x56e7c6*/
  if ( a2 <= 0 ) /*0x56e7cc*/
    return 1; /*0x56e87c*/
  while ( 1 ) /*0x56e7de*/
  {
    v11 = 0; /*0x56e7de*/
    if ( a3 > 0 ) /*0x56e7e2*/
      break; /*0x56e7e2*/
LABEL_11:
    if ( ++v9 >= a2 ) /*0x56e876*/
      return 1; /*0x56e876*/
  }
  while ( 1 ) /*0x56e7f5*/
  {
    HIWORD(v16) = v11 + a1[1]; /*0x56e7f5*/
    LOWORD(v16) = v9 + *a1; /*0x56e7fa*/
    v12 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(_DWORD **)(dword_87F924 + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = &unk_ABDC50; /*0x56e828*/
      dword_ABDC74 = v16; /*0x56e82d*/
    }
    if ( a9 && v14[17] != -1 || !Cell::IsBuildable((int)v14, a4, 0, 0, a5, a6, a7, a8) ) /*0x56e859*/
      return 0; /*0x56e87c*/
    if ( ++v11 >= a3 ) /*0x56e869*/
      goto LABEL_11; /*0x56e869*/
  }
}



// ==== 0x0056E890  ObjectClass::ProcessDataHouseClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataHouseClass(ObjectClass *this, __int16 *a2, _DWORD *a3, int *a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _DWORD *StartCoords; // eax
  int v10; // eax
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *a2 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] && a2[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] ) /*0x56e8b2*/
    return 0; /*0x56e8b2*/
  v4 = this->q03D; /*0x56e8b8*/
  v5 = *a2; /*0x56e8be*/
  v6 = a2[1]; /*0x56e8c1*/
  if ( v6 + v5 <= v4 ) /*0x56e8ca*/
    return 0; /*0x56e8ca*/
  if ( v5 - v6 >= v4 ) /*0x56e8d6*/
    return 0; /*0x56e8d6*/
  if ( v6 - v5 >= v4 ) /*0x56e8e0*/
    return 0; /*0x56e8e0*/
  if ( v6 + v5 > v4 + 2 * *((_DWORD *)this + 62) ) /*0x56e8ed*/
    return 0; /*0x56e8ed*/
  v7 = 0; /*0x56e8f4*/
  if ( stru_A80220.? <= 0 ) /*0x56e8f8*/
    return 0; /*0x56e961*/
  while ( 1 ) /*0x56e904*/
  {
    v8 = *((_DWORD *)stru_A80220.? + v7); /*0x56e904*/
    if ( v8 ) /*0x56e909*/
    {
      if ( !*(_BYTE *)(v8 + 501) ) /*0x56e90b*/
      {
        StartCoords = HouseClass::GetStartCoords(*((HouseClass **)stru_A80220.? + v7), v12); /*0x56e91c*/
        if ( *StartCoords != g_MissionQueueFrame.briefing[114] /*0x56e945*/
          || StartCoords[1] != g_MissionQueueFrame.briefing[115]
          || StartCoords[2] != g_MissionQueueFrame.briefing[116] )
        {
          v10 = sub_4FFD90((ObjectClass *)v8, a2); /*0x56e94a*/
          *a4 = v10; /*0x56e952*/
          if ( v10 != -1 ) /*0x56e955*/
            break; /*0x56e955*/
        }
      }
    }
    if ( ++v7 >= stru_A80220.? ) /*0x56e95f*/
      return 0; /*0x56e95f*/
  }
  *a3 = *(_DWORD *)(*(_DWORD *)(v8 + 52) + 184); /*0x56e97d*/
  return 1; /*0x56e961*/
}



// ==== 0x0056E990  Cell::UpdateTileType  this=Cell  sig=csp ====
char __stdcall Cell_UpdateTileType(__int16 *a1, int a2, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  char v12; // si
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  _DWORD v22[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v23; // [esp+2Ch] [ebp+4h]

  v4 = *a1 + (a1[1] << 9); /*0x56e9a9*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56e9bf*/
  {
    v6 = v5; /*0x56e9c1*/
  }
  else
  {
    v6 = &unk_ABDC50; /*0x56e9c7*/
    dword_ABDC74 = *(_DWORD *)a1; /*0x56e9cc*/
  }
  if ( !(_BYTE)a3 ) /*0x56e9d7*/
  {
    v7 = (_DWORD *)v6[14]; /*0x56e9dd*/
    if ( v7 == (_DWORD *)0xFFFF ) /*0x56e9e5*/
      return (char)v7; /*0x56e9e5*/
    if ( v7 == (_DWORD *)255 ) /*0x56e9f0*/
      return (char)v7; /*0x56e9f0*/
    LOBYTE(v7) = CellClass::GetTerrainFlag(*((unsigned __int8 *)v6 + 282)); /*0x56ea0a*/
    if ( !(_BYTE)v7 ) /*0x56ea11*/
      return (char)v7; /*0x56ea11*/
    v8 = a1[1] << 8; /*0x56ea2a*/
    v22[0] = (*a1 << 8) + 128; /*0x56ea2d*/
    v22[1] = v8 + 128; /*0x56ea3b*/
    v22[2] = 0; /*0x56ea47*/
    Coord::To_Screen(g_TacticalClass_Instance, v22, &v20); /*0x56ea4f*/
    v21 -= 15 * *((char *)v6 + 283); /*0x56ea78*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x56ea98*/
  }
  v9 = a2; /*0x56eaa3*/
  LOBYTE(v7) = (v6[80] & 0x2000) != 0; /*0x56eaaa*/
  if ( (_BYTE)a2 != (_BYTE)v7 ) /*0x56eaae*/
  {
    v10 = v6[80]; /*0x56eab4*/
    v11 = v6[14]; /*0x56eabc*/
    BYTE1(v10) &= ~0x20u; /*0x56eac5*/
    v6[80] = v10 | ((a2 & 1) << 13); /*0x56eace*/
    v23 = v11; /*0x56ead9*/
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 9)); /*0x56eadd*/
    v12 = 0; /*0x56eae2*/
    v13 = 8; /*0x56eae4*/
    do /*0x56eb67*/
    {
      v14 = v12 & 7; /*0x56eaeb*/
      v15 = 4 * v14 + 9041544; /*0x56eaee*/
      LOWORD(v14) = *a1 + LOWORD(dword_89F688[v14]); /*0x56eb05*/
      HIWORD(a3) = a1[1] + *(_WORD *)(v15 + 2); /*0x56eb08*/
      LOWORD(a3) = v14; /*0x56eb0d*/
      v16 = SHIWORD(a3) << 9; /*0x56eb1c*/
      v17 = (__int16)v14 + v16 < 0; /*0x56eb1f*/
      v18 = (__int16)v14 + v16; /*0x56eb1f*/
      a2 = a3; /*0x56eb21*/
      if ( v17 || v18 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eb39*/
      {
        dword_ABDC74 = a3; /*0x56eb3b*/
        v7 = &unk_ABDC50; /*0x56eb41*/
      }
      if ( v7[14] == v23 ) /*0x56eb4f*/
        LOBYTE(v7) = Cell::UpdateTileType(&a2, v9, 1); /*0x56eb5d*/
      v12 = (v12 + 1) & 7; /*0x56eb63*/
      --v13; /*0x56eb66*/
    }
    while ( v13 ); /*0x56eb67*/
  }
  return (char)v7; /*0x56eb69*/
}



// ==== 0x0056EB80  Cell::SetTileType  this=ObjectClass  sig=csp ====
char __stdcall Cell_SetTileType(__int16 *a1, int a2, int a3, int a4, int a5)
{
  _WORD *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char result; // al
  int v10; // ebp
  int v11; // edx
  int v12; // ebx
  char v13; // si
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // [esp-4h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-14h] BYREF
  int v22; // [esp+18h] [ebp-10h]
  _DWORD v23[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = a1; /*0x56eb87*/
  v6 = *a1 + (a1[1] << 9); /*0x56eb99*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) != 0 ) /*0x56ebaf*/
  {
    v8 = v7; /*0x56ebb1*/
  }
  else
  {
    v8 = &unk_ABDC50; /*0x56ebb7*/
    dword_ABDC74 = *(_DWORD *)a1; /*0x56ebbc*/
  }
  result = a5; /*0x56ebc1*/
  v10 = a2; /*0x56ebc5*/
  if ( (_BYTE)a5 ) /*0x56ebcb*/
  {
    v12 = a3; /*0x56ec69*/
  }
  else
  {
    v11 = a1[1]; /*0x56ebd4*/
    v23[0] = (*a1 << 8) + 128; /*0x56ebe5*/
    v23[1] = (v11 << 8) + 128; /*0x56ebfe*/
    v23[2] = 0; /*0x56ec02*/
    Coord::To_Screen(g_TacticalClass_Instance, v23, &v21); /*0x56ec0a*/
    v22 -= 15 * *((char *)v8 + 283); /*0x56ec33*/
    result = Cell::CreateCrater(v21 - 128, v22 - 128, 256, 256, 0); /*0x56ec53*/
    v12 = v8[14]; /*0x56ec58*/
    v10 = a2; /*0x56ec5b*/
    if ( a2 == v12 ) /*0x56ec61*/
      return result; /*0x56ec61*/
  }
  if ( v8[14] != v10 ) /*0x56ec70*/
  {
    v20 = a4; /*0x56ec7c*/
    v8[14] = v10; /*0x56ec7d*/
    House::AnnounceUpgrade((int)v8, v20); /*0x56ec80*/
    BuildingClass::AddUpgrade(v8 + 9); /*0x56ec8e*/
    v13 = 0; /*0x56ec93*/
    a2 = 8; /*0x56ec95*/
    do /*0x56ed23*/
    {
      v14 = v13 & 7; /*0x56ec9f*/
      v15 = dword_89F688[v14]; /*0x56eca2*/
      LOWORD(v14) = v5[1] + HIWORD(dword_89F688[v14]); /*0x56ecb8*/
      LOWORD(a5) = *v5 + v15; /*0x56ecbc*/
      HIWORD(a5) = v14; /*0x56ecc4*/
      v16 = (__int16)v14 << 9; /*0x56ecd0*/
      v17 = (__int16)a5 + v16 < 0; /*0x56ecd3*/
      v18 = (__int16)a5 + v16; /*0x56ecd3*/
      a1 = (__int16 *)a5; /*0x56ecd5*/
      if ( v17 || v18 >= 0x40000 || (v19 = *(_DWORD **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eced*/
      {
        dword_ABDC74 = a5; /*0x56ecef*/
        v19 = &unk_ABDC50; /*0x56ecf5*/
      }
      if ( v19[14] == v12 ) /*0x56ecfd*/
        Cell::SetTileType(&a1, v10, v12, a4, 1); /*0x56ed11*/
      v13 = (v13 + 1) & 7; /*0x56ed1b*/
      result = --a2; /*0x56ed1e*/
    }
    while ( a2 ); /*0x56ed23*/
  }
  return result; /*0x56ed29*/
}



// ==== 0x0056ED40  globalHelper_06ED40  this=ObjectClass  sig=csp ====
char __stdcall sub_56ED40(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ed49*/
  v3 = dword_89F688[v2]; /*0x56ed4c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56ed62*/
  LOWORD(a2) = *a1 + v3; /*0x56ed66*/
  HIWORD(a2) = v2; /*0x56ed6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ed7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ed97*/
  {
    dword_ABDC74 = a2; /*0x56ed99*/
    v5 = unk_ABDC50; /*0x56ed9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56edab*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56edad*/
    if ( v6 <= 3u ) /*0x56edb6*/
    {
      *((_BYTE *)v5 + 286) = 4; /*0x56edc6*/
    }
    else if ( v6 == 5 ) /*0x56edbb*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x56edbd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56edde*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x56ede9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56ee37*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56edf3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainBridgeIndex + g_TerrainSoundTable2, -1, -1, 0); /*0x56ee03*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x56ee13*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56ee25*/
  }
  return v7; /*0x56ee08*/
}



// ==== 0x0056EE40  globalHelper_06EE40  this=ObjectClass  sig=csp ====
char __stdcall sub_56EE40(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ee49*/
  v3 = dword_89F688[v2]; /*0x56ee4c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56ee62*/
  LOWORD(a2) = *a1 + v3; /*0x56ee66*/
  HIWORD(a2) = v2; /*0x56ee6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ee7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ee97*/
  {
    dword_ABDC74 = a2; /*0x56ee99*/
    v5 = unk_ABDC50; /*0x56ee9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56eeab*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56eead*/
    if ( v6 <= 3u ) /*0x56eeb6*/
    {
      *((_BYTE *)v5 + 286) = 5; /*0x56eec6*/
    }
    else if ( v6 == 4 ) /*0x56eebb*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x56eebd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56eede*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x56eee9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56ef39*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56eef3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1, -1, -1, 0); /*0x56ef05*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x56ef15*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56ef27*/
  }
  return v7; /*0x56ef0a*/
}



// ==== 0x0056EF50  CellClass::UpdateVariant3  this=ObjectClass  sig=csp ====
char __stdcall sub_56EF50(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56ef56*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56ef77*/
  a2 = v3; /*0x56ef79*/
  *(_DWORD *)v32 = v3; /*0x56ef7d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56ef8c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56efa2*/
  {
    v6 = v5; /*0x56efa4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56efa8*/
    v6 = &unk_ABDC50; /*0x56efae*/
  }
  if ( (char)v6[320] < 0 ) /*0x56efba*/
  {
    v7 = v6[286]; /*0x56efbc*/
    if ( v7 <= 6u ) /*0x56efc4*/
    {
      v6[286] = 7; /*0x56f000*/
    }
    else if ( v7 == 8 ) /*0x56efc8*/
    {
      CellClass::UpdateVariant3(v32, v2); /*0x56efd2*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56efdd*/
      v6[286] = 0; /*0x56efe5*/
      *((_DWORD *)v6 + 17) = -1; /*0x56eff2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56eff9*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f018*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x56f027*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x56f2d7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x56f042*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f2be*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f04d*/
  {
    CellClass::UpdateVariant3(v32, v2); /*0x56f05b*/
    if ( (v6[282] & 1) != 0 ) /*0x56f067*/
    {
      HIWORD(a2) = v32[1]; /*0x56f078*/
      LOWORD(a2) = v32[0] - 1; /*0x56f07d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f08b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f0a1*/
      {
        v12 = v11; /*0x56f0a3*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x56f0ab*/
        dword_ABDC74 = a2; /*0x56f0b0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f0b5*/
      LOWORD(a2) = v32[0] - 1; /*0x56f0c6*/
      HIWORD(a2) = v32[1] - 1; /*0x56f0cb*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f0d9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f0ef*/
      {
        v15 = v14; /*0x56f0f1*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x56f0f9*/
        dword_ABDC74 = a2; /*0x56f0fe*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f103*/
      LOWORD(a2) = v32[0] - 1; /*0x56f114*/
      HIWORD(a2) = v32[1] + 1; /*0x56f119*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f127*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f13d*/
      {
        v18 = v17; /*0x56f13f*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x56f147*/
        dword_ABDC74 = a2; /*0x56f14c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f151*/
      HIWORD(a2) = v32[1]; /*0x56f15e*/
      v19 = (__int16)(v32[0] - 1); /*0x56f167*/
      v20 = v32[1] << 9; /*0x56f16a*/
      v21 = v19 + v20 < 0; /*0x56f16d*/
      v22 = v19 + v20; /*0x56f16d*/
      LOWORD(a2) = v32[0] - 1; /*0x56f16f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f188*/
      {
        v23 = (char *)&unk_ABDC50; /*0x56f18e*/
        dword_ABDC74 = a2; /*0x56f193*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x56f1db*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f1e9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f1ff*/
      {
        v26 = v25; /*0x56f201*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x56f209*/
        dword_ABDC74 = a2; /*0x56f20e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f214*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x56f227*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f235*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f24b*/
      {
        v29 = v28; /*0x56f24d*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x56f255*/
        dword_ABDC74 = a2; /*0x56f25a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f25f*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x56f277*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56f28a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f291*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f2a2*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0); /*0x56f1c0*/
  }
  return v9; /*0x56f1c5*/
}



// ==== 0x0056F2F0  CellClass::UpdateVariant4  this=ObjectClass  sig=csp ====
char __stdcall sub_56F2F0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56f2f6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56f317*/
  a2 = v3; /*0x56f319*/
  *(_DWORD *)v32 = v3; /*0x56f31d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f32c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f342*/
  {
    v6 = v5; /*0x56f344*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56f348*/
    v6 = &unk_ABDC50; /*0x56f34e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f35a*/
  {
    v7 = v6[286]; /*0x56f35c*/
    if ( v7 <= 6u ) /*0x56f364*/
    {
      v6[286] = 8; /*0x56f3a0*/
    }
    else if ( v7 == 7 ) /*0x56f368*/
    {
      CellClass::UpdateVariant4(v32, v2); /*0x56f372*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56f37d*/
      v6[286] = 0; /*0x56f385*/
      *((_DWORD *)v6 + 17) = -1; /*0x56f392*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f399*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f3b8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x56f3c7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x56f677*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x56f3e2*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f65e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f3ed*/
  {
    CellClass::UpdateVariant4(v32, v2); /*0x56f3fb*/
    if ( (v6[282] & 1) != 0 ) /*0x56f407*/
    {
      HIWORD(a2) = v32[1]; /*0x56f418*/
      LOWORD(a2) = v32[0] - 1; /*0x56f41d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f42b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f441*/
      {
        v12 = v11; /*0x56f443*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x56f44b*/
        dword_ABDC74 = a2; /*0x56f450*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f455*/
      LOWORD(a2) = v32[0] - 1; /*0x56f466*/
      HIWORD(a2) = v32[1] - 1; /*0x56f46b*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f479*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f48f*/
      {
        v15 = v14; /*0x56f491*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x56f499*/
        dword_ABDC74 = a2; /*0x56f49e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f4a3*/
      LOWORD(a2) = v32[0] - 1; /*0x56f4b4*/
      HIWORD(a2) = v32[1] + 1; /*0x56f4b9*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f4c7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f4dd*/
      {
        v18 = v17; /*0x56f4df*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x56f4e7*/
        dword_ABDC74 = a2; /*0x56f4ec*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f4f1*/
      HIWORD(a2) = v32[1]; /*0x56f4fe*/
      v19 = (__int16)(v32[0] - 1); /*0x56f507*/
      v20 = v32[1] << 9; /*0x56f50a*/
      v21 = v19 + v20 < 0; /*0x56f50d*/
      v22 = v19 + v20; /*0x56f50d*/
      LOWORD(a2) = v32[0] - 1; /*0x56f50f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f528*/
      {
        v23 = (char *)&unk_ABDC50; /*0x56f52e*/
        dword_ABDC74 = a2; /*0x56f533*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x56f57b*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f589*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f59f*/
      {
        v26 = v25; /*0x56f5a1*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x56f5a9*/
        dword_ABDC74 = a2; /*0x56f5ae*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f5b4*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x56f5c7*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f5d5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f5eb*/
      {
        v29 = v28; /*0x56f5ed*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x56f5f5*/
        dword_ABDC74 = a2; /*0x56f5fa*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f5ff*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x56f617*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56f62a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f631*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f642*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0); /*0x56f560*/
  }
  return v9; /*0x56f565*/
}



// ==== 0x0056F690  globalHelper_06F690  this=-  sig=csp ====
char __stdcall sub_56F690(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f699*/
  v3 = dword_89F688[v2]; /*0x56f69c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56f6b2*/
  LOWORD(a2) = *a1 + v3; /*0x56f6b6*/
  HIWORD(a2) = v2; /*0x56f6be*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56f6cd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f6e7*/
  {
    dword_ABDC74 = a2; /*0x56f6e9*/
    v5 = unk_ABDC50; /*0x56f6ef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f6fb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56f6fd*/
    if ( v6 >= 9u ) /*0x56f706*/
    {
      if ( v6 <= 0xCu ) /*0x56f70b*/
      {
        *((_BYTE *)v5 + 286) = 14; /*0x56f71b*/
      }
      else if ( v6 == 13 ) /*0x56f710*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x56f712*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f733*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x56f73e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56f78c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f748*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainBridgeIndex + g_TerrainSoundConfig, -1, -1, 0); /*0x56f758*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x56f768*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f77a*/
  }
  return v7; /*0x56f75d*/
}



// ==== 0x0056F7A0  globalHelper_06F7A0  this=-  sig=csp ====
char __stdcall sub_56F7A0(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f7a9*/
  v3 = dword_89F688[v2]; /*0x56f7ac*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56f7c2*/
  LOWORD(a2) = *a1 + v3; /*0x56f7c6*/
  HIWORD(a2) = v2; /*0x56f7ce*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56f7dd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f7f7*/
  {
    dword_ABDC74 = a2; /*0x56f7f9*/
    v5 = unk_ABDC50; /*0x56f7ff*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f80b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56f80d*/
    if ( v6 >= 9u ) /*0x56f816*/
    {
      if ( v6 <= 0xCu ) /*0x56f81b*/
      {
        *((_BYTE *)v5 + 286) = 13; /*0x56f82b*/
      }
      else if ( v6 == 14 ) /*0x56f820*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x56f822*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f843*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x56f84e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56f89e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f858*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 1, -1, -1, 0); /*0x56f86a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x56f87a*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f88c*/
  }
  return v7; /*0x56f86f*/
}



// ==== 0x0056F8B0  CellClass::UpdateTerrain  this=ObjectClass  sig=csp ====
char __stdcall CellClass_UpdateTerrain(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56f8b6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56f8d7*/
  a2 = v3; /*0x56f8d9*/
  *(_DWORD *)v31 = v3; /*0x56f8dd*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f8ec*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f902*/
  {
    v6 = v5; /*0x56f904*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56f908*/
    v6 = &unk_ABDC50; /*0x56f90e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f91a*/
  {
    v7 = v6[286]; /*0x56f91c*/
    if ( v7 >= 9u ) /*0x56f924*/
    {
      if ( v7 <= 0xFu ) /*0x56f928*/
      {
        v6[286] = 17; /*0x56f964*/
      }
      else if ( v7 == 16 ) /*0x56f92c*/
      {
        CellClass::UpdateTerrain(v31, v2); /*0x56f936*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56f941*/
        v6[286] = 0; /*0x56f949*/
        *((_DWORD *)v6 + 17) = -1; /*0x56f956*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f95d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f97c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x56f98b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x56fc66*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x56f9a6*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56fc4d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56f9b1*/
  {
    CellClass::UpdateTerrain(v31, v2); /*0x56f9bf*/
    v10 = v31[0] - 1; /*0x56f9d0*/
    if ( v6[282] <= 4u ) /*0x56f9d3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x56fb39*/
      HIWORD(a2) = v31[1]; /*0x56fb3e*/
      v22 = v10 + (v31[1] << 9); /*0x56fb4c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56fb62*/
      {
        v24 = v23; /*0x56fb64*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x56fb6c*/
        dword_ABDC74 = a2; /*0x56fb71*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56fb76*/
      a2 = *(_DWORD *)v31; /*0x56fb88*/
      v25 = v31[0] + (v31[1] << 9); /*0x56fb96*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56fbac*/
      {
        v27 = v26; /*0x56fbae*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x56fbb6*/
        dword_ABDC74 = a2; /*0x56fbbb*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56fbc0*/
      HIWORD(a2) = v31[1]; /*0x56fbcf*/
      LOWORD(a2) = v31[0] + 1; /*0x56fbd4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56fbeb*/
      CellClass::UpdateAnimations((int)v28); /*0x56fbf2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56fc03*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0); /*0x56fc2d*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x56f9dd*/
      HIWORD(a2) = v31[1] - 1; /*0x56f9e8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56f9f3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fa09*/
      {
        v13 = v12; /*0x56fa0b*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x56fa13*/
        dword_ABDC74 = a2; /*0x56fa18*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fa1d*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fa32*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fa40*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fa56*/
      {
        v16 = v15; /*0x56fa58*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x56fa60*/
        dword_ABDC74 = a2; /*0x56fa65*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fa6a*/
      LOWORD(a2) = v31[0] + 1; /*0x56fa7b*/
      HIWORD(a2) = v31[1] - 1; /*0x56fa80*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fa8e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56faa4*/
      {
        v19 = v18; /*0x56faa6*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x56faae*/
        dword_ABDC74 = a2; /*0x56fab3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fab8*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56facd*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fadb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56faf1*/
      {
        dword_ABDC74 = a2; /*0x56faf7*/
        v21 = (char *)&unk_ABDC50; /*0x56fafc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0); /*0x56fb27*/
    }
  }
  return v9; /*0x56fb2c*/
}



// ==== 0x0056FC80  CellClass::UpdateTileVariant2  this=ObjectClass  sig=csp ====
char __stdcall sub_56FC80(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56fc86*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56fca7*/
  a2 = v3; /*0x56fca9*/
  *(_DWORD *)v31 = v3; /*0x56fcad*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56fcbc*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56fcd2*/
  {
    v6 = v5; /*0x56fcd4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56fcd8*/
    v6 = &unk_ABDC50; /*0x56fcde*/
  }
  if ( (char)v6[320] < 0 ) /*0x56fcea*/
  {
    v7 = v6[286]; /*0x56fcec*/
    if ( v7 >= 9u ) /*0x56fcf4*/
    {
      if ( v7 <= 0xFu ) /*0x56fcf8*/
      {
        v6[286] = 16; /*0x56fd34*/
      }
      else if ( v7 == 17 ) /*0x56fcfc*/
      {
        CellClass::UpdateTileVariant2(v31, v2); /*0x56fd06*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56fd11*/
        v6[286] = 0; /*0x56fd19*/
        *((_DWORD *)v6 + 17) = -1; /*0x56fd26*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56fd2d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56fd4c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x56fd5b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x570036*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x56fd76*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x57001d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56fd81*/
  {
    CellClass::UpdateTileVariant2(v31, v2); /*0x56fd8f*/
    v10 = v31[0] - 1; /*0x56fda0*/
    if ( v6[282] <= 4u ) /*0x56fda3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x56ff09*/
      HIWORD(a2) = v31[1]; /*0x56ff0e*/
      v22 = v10 + (v31[1] << 9); /*0x56ff1c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56ff32*/
      {
        v24 = v23; /*0x56ff34*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x56ff3c*/
        dword_ABDC74 = a2; /*0x56ff41*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56ff46*/
      a2 = *(_DWORD *)v31; /*0x56ff58*/
      v25 = v31[0] + (v31[1] << 9); /*0x56ff66*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56ff7c*/
      {
        v27 = v26; /*0x56ff7e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x56ff86*/
        dword_ABDC74 = a2; /*0x56ff8b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56ff90*/
      HIWORD(a2) = v31[1]; /*0x56ff9f*/
      LOWORD(a2) = v31[0] + 1; /*0x56ffa4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56ffbb*/
      CellClass::UpdateAnimations((int)v28); /*0x56ffc2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56ffd3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0); /*0x56fffd*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x56fdad*/
      HIWORD(a2) = v31[1] - 1; /*0x56fdb8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56fdc3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fdd9*/
      {
        v13 = v12; /*0x56fddb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x56fde3*/
        dword_ABDC74 = a2; /*0x56fde8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fded*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fe02*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fe10*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fe26*/
      {
        v16 = v15; /*0x56fe28*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x56fe30*/
        dword_ABDC74 = a2; /*0x56fe35*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fe3a*/
      LOWORD(a2) = v31[0] + 1; /*0x56fe4b*/
      HIWORD(a2) = v31[1] - 1; /*0x56fe50*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fe5e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56fe74*/
      {
        v19 = v18; /*0x56fe76*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x56fe7e*/
        dword_ABDC74 = a2; /*0x56fe83*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fe88*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fe9d*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56feab*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56fec1*/
      {
        dword_ABDC74 = a2; /*0x56fec7*/
        v21 = (char *)&unk_ABDC50; /*0x56fecc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0); /*0x56fef7*/
    }
  }
  return v9; /*0x56fefc*/
}



// ==== 0x00560480  NetworkOptions::DlgProc  this=NetworkOptions  sig=csp ====
int __stdcall NetworkOptions::DlgProc(HWND hWnd, unsigned int a2, int a3, HWND hCtl)
{
  int result; // eax
  HWND v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int i; // ebx
  wchar_t *v9; // eax
  LRESULT v10; // ebx
  HWND v11; // edi
  HWND v12; // ebx
  HWND v13; // edi
  HWND v14; // eax
  HWND DlgItem; // eax
  LRESULT (__stdcall *v16)(HWND, UINT, WPARAM, LPARAM); // esi
  __int16 v17; // dx
  int *v18; // eax
  HWND v19; // eax
  char *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int *v24; // esi
  int *v25; // eax
  HWND v26; // eax
  HWND v27; // edx
  int v28; // esi
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-120h]
  wchar_t *v33; // [esp-10h] [ebp-120h]
  wchar_t *v34; // [esp-10h] [ebp-120h]
  wchar_t *v35; // [esp-10h] [ebp-120h]
  wchar_t *v36; // [esp-10h] [ebp-120h]
  int v37; // [esp+0h] [ebp-110h]
  char v38; // [esp+13h] [ebp-FDh]
  _DWORD *v39; // [esp+14h] [ebp-FCh]
  __int16 v40; // [esp+14h] [ebp-FCh]
  int v41; // [esp+18h] [ebp-F8h] BYREF
  int v42; // [esp+1Ch] [ebp-F4h]
  int v43; // [esp+20h] [ebp-F0h]
  int v44; // [esp+24h] [ebp-ECh]
  _DWORD *WindowLongA; // [esp+28h] [ebp-E8h]
  LPARAM v46[9]; // [esp+2Ch] [ebp-E4h] BYREF
  char v47[32]; // [esp+50h] [ebp-C0h] BYREF
  LPARAM lParam[16]; // [esp+70h] [ebp-A0h] BYREF
  char v49[32]; // [esp+B0h] [ebp-60h] BYREF
  char Destination[32]; // [esp+D0h] [ebp-40h] BYREF
  char String[32]; // [esp+F0h] [ebp-20h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)hCtl); /*0x5604ac*/
  if ( !result )
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x5604c2*/
    if ( a2 == 273 ) /*0x5604cd*/
    {
      switch ( (unsigned __int16)a3 ) /*0x560760*/
      {
        case 1u: /*0x560760*/
          DlgItem = GetDlgItem(hWnd, 1489); /*0x5607b1*/
          v16 = SendMessageA; /*0x5607b3*/
          SendMessageA(DlgItem, 0x4B5u, 0x10u, (LPARAM)v46); /*0x5607c6*/
          if ( strlen((const char *)v46) ) /*0x5607cc*/
          {
            v17 = atoi((const char *)v46); /*0x5607e6*/
            v40 = v17; /*0x5607f4*/
            if ( strlen((const char *)v46) > 5 || (unsigned __int16)v17 > 0x3FFFu ) /*0x560807*/
            {
              v46[5] = (LPARAM)asc_82083C; /*0x560820*/
              StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 983); /*0x56082d*/
              v18 = (int *)GetStringCSF(aTxtInvalidSock, 0, g_Str_File_MainOpt_cpp, 983); /*0x56083f*/
              Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v37); /*0x560849*/
              return 0; /*0x56085a*/
            }
          }
          else
          {
            v40 = -1; /*0x56085d*/
          }
          v19 = GetDlgItem(hWnd, 1491); /*0x56086b*/
          SendMessageA(v19, 0x4B5u, 0x20u, (LPARAM)v47); /*0x56087a*/
          strncpy(Destination, v47, 0x20u); /*0x56088b*/
          if ( strlen(v47) ) /*0x560894*/
          {
            v20 = strtok(v47, asc_826598); /*0x5608b1*/
            v21 = -1; /*0x5608b9*/
            v22 = -1; /*0x5608bc*/
            v23 = -1; /*0x5608bf*/
            v41 = -1; /*0x5608c4*/
            v42 = -1; /*0x5608c8*/
            v43 = -1; /*0x5608cc*/
            v44 = -1; /*0x5608d4*/
            if ( v20 ) /*0x5608d8*/
            {
              v24 = &v41; /*0x5608da*/
              do /*0x5608fe*/
              {
                sscanf(v20, "%x", v24++); /*0x5608e5*/
                v20 = strtok(0, asc_826598); /*0x5608f4*/
              }
              while ( v20 ); /*0x5608fe*/
              v23 = v44; /*0x560900*/
              v22 = v42; /*0x560904*/
              v21 = v41; /*0x560908*/
              v16 = SendMessageA; /*0x56090c*/
            }
            if ( (unsigned __int8)v21 != v21 /*0x560942*/
              || (unsigned __int8)v22 != v22
              || (unsigned __int8)v43 != v43
              || (unsigned __int8)v23 != v23 )
            {
              v46[6] = (LPARAM)asc_82083C; /*0x56095b*/
              v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1017); /*0x560968*/
              v25 = (int *)GetStringCSF(aTxtDestnetAddr, 0, g_Str_File_MainOpt_cpp, 1017); /*0x56097a*/
              Dialog::ShowMessageBox(v25, v33, 0, 0, 0, v37); /*0x560984*/
              return 0; /*0x560995*/
            }
          }
          v26 = GetDlgItem(hWnd, 1492); /*0x56099e*/
          dword_A8EBB4 = v16(v26, 0x147u, 0, 0); /*0x5609ac*/
          HIWORD(unk_A8EBA8) = v40; /*0x5609bf*/
          strcpy(unk_A8EBB8, Destination); /*0x5609e1*/
          v27 = GetDlgItem(hWnd, 1495); /*0x5609ec*/
          memset(v49, 0, sizeof(v49)); /*0x5609fc*/
          SendMessageA(v27, 0x4B5u, 8u, (LPARAM)v49); /*0x560a0e*/
          strncpy(String, v49, 0x20u); /*0x560a26*/
          v28 = atoi(String); /*0x560a38*/
          if ( v28 > 0xFFFF ) /*0x560a43*/
          {
            v46[4] = (LPARAM)asc_82083C; /*0x560a5c*/
            v34 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a69*/
            v29 = (int *)GetStringCSF(aTxtPortNumberE, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a7b*/
            Dialog::ShowMessageBox(v29, v34, 0, 0, 0, v37); /*0x560a85*/
            return 0; /*0x560a96*/
          }
          if ( SendDlgItemMessageA(hWnd, 1890, 0xF0u, 0, 0) == 1 ) /*0x560ab6*/
          {
            if ( !byte_A8E180 ) /*0x560abf*/
            {
              v46[8] = (LPARAM)asc_82083C; /*0x560ad8*/
              v35 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560ae1*/
              v30 = (int *)GetStringCSF(aTxtFirewallSet, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560af3*/
              Dialog::ShowMessageBox(v30, v35, 0, 0, 0, v37); /*0x560afd*/
            }
            byte_A8E180 = 1; /*0x560b02*/
          }
          else
          {
            byte_A8E180 = 0; /*0x560b0b*/
          }
          if ( v28 > 0 && !dword_A8E254 ) /*0x560b1d*/
          {
            v46[7] = (LPARAM)asc_82083C; /*0x560b36*/
            v36 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b3f*/
            v31 = (int *)GetStringCSF(aTxtFirewallSet_0, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b51*/
            Dialog::ShowMessageBox(v31, v36, 0, 0, 0, v37); /*0x560b5b*/
          }
          dword_A8E254 = v28; /*0x560b65*/
          __Release__NonReentrantLock_details_Concurrency__QAEXXZ((Concurrency::details::_NonReentrantLock *)&dword_ABFEC8); /*0x560b6b*/
          RawFileClass::Construct(lParam, (int)aRa2mdIni); /*0x560b79*/
          INIClass::SetBool((char *)&dword_8870C0, aMultiplayer, aSenddelay, byte_A8E180); /*0x560b94*/
          INIClass::SetInt((char *)&dword_8870C0, aMultiplayer, aPortnumberover, dword_A8E254, 0); /*0x560bb1*/
          INIClass::WriteDigest(&dword_8870C0, (int)lParam, 0); /*0x560bc2*/
          RawFileClass::Dtor(lParam); /*0x560bcb*/
          break;
        case 2u: /*0x560760*/
          break;
        case 0x5D4u: /*0x560760*/
          v14 = GetDlgItem(hWnd, 1492); /*0x56077b*/
          dword_82A280 = SendMessageA(v14, 0x147u, 0, 0); /*0x560793*/
          return 0; /*0x5607a2*/
        default:
          return 0; /*0x56076f*/
      }
      *WindowLongA = 2; /*0x560bd4*/
      return 0; /*0x560bda*/
    }
    if ( a2 != 1175 ) /*0x5604d8*/
    {
      if ( a2 == 1243 ) /*0x5604dd*/
      {
        NavigateDialogTab(hCtl, a3 != 0); /*0x5604ea*/
        return 0; /*0x5604fb*/
      }
      return 0; /*0x5604dd*/
    }
    v5 = GetDlgItem(hWnd, 1492); /*0x560510*/
    v38 = 0; /*0x560517*/
    if ( dword_887628
      || ((v6 = (_DWORD *)__2_YAPAXI_Z(0x3F310u)) == 0 ? (v7 = 0) : (v7 = IPXInterfaceClass::Construct(v6)),
          dword_887628 = v7,
          WinsockInterface::Init(v7),
          v38 = 1,
          dword_887628) )
    {
      Debug::Log(); /*0x560560*/
      v39 = dword_887628; /*0x56056d*/
      for ( i = 0; i < 20; ++i ) /*0x560571*/
      {
        if ( NetworkOptions::ApplySettings((int)v39, i, (char *)lParam, 64) ) /*0x56057f*/
        {
          Debug::Log(); /*0x56058e*/
          Debug::Log(); /*0x56059d*/
          if ( SendMessageA(v5, 0x4B8u, 0, (LPARAM)lParam) == -1 ) /*0x5605b7*/
            SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x5605c6*/
        }
      }
      if ( !v38 ) /*0x5605d4*/
      {
LABEL_20:
        if ( !SendMessageA(v5, 0x146u, 0, 0) ) /*0x5605fa*/
        {
          v9 = GetStringCSF(aTxtNoBoundNetC, 0, g_Str_File_MainOpt_cpp, 894); /*0x560611*/
          SendMessageA(v5, 0x4C2u, 0, (LPARAM)v9); /*0x56061f*/
        }
        v10 = dword_A8EBB4; /*0x560621*/
        if ( (dword_A8EBB4 & 0x80000000) != 0 || v10 >= SendMessageA(v5, 0x146u, 0, 0) ) /*0x560639*/
          v10 = 0; /*0x56063b*/
        SendMessageA(v5, 0x14Eu, v10, 0); /*0x560646*/
        SendMessageA(hWnd, 0x464u, 0, 0); /*0x560652*/
        dword_82A280 = -1; /*0x560660*/
        v11 = GetDlgItem(hWnd, 1489); /*0x56066c*/
        if ( HIWORD(unk_A8EBA8) != 0xFFFF ) /*0x560678*/
        {
          sprintf((char *const)v46, "%d", HIWORD(unk_A8EBA8)); /*0x56068a*/
          SendMessageA(v11, 0x4B4u, 0, (LPARAM)v46); /*0x56069f*/
        }
        SendMessageA(v11, 0xC5u, 5u, 0); /*0x5606ab*/
        v12 = GetDlgItem(hWnd, 1491); /*0x5606b5*/
        if ( strlen(unk_A8EBB8) ) /*0x5606bc*/
          SendMessageA(v12, 0x4B4u, 0, (LPARAM)unk_A8EBB8); /*0x5606d4*/
        SendMessageA(v12, 0xC5u, 0xBu, 0); /*0x5606e0*/
        SendDlgItemMessageA(hWnd, 1890, 0xF1u, byte_A8E180 != 0, 0); /*0x5606fe*/
        v13 = GetDlgItem(hWnd, 1495); /*0x560710*/
        if ( v13 != HWND_MESSAGE|0x2 && dword_A8E254 ) /*0x560722*/
        {
          sprintf((char *const)v46, "%d", dword_A8E254); /*0x560733*/
          SendMessageA(v13, 0x4B4u, 0, (LPARAM)v46); /*0x560748*/
          return 0; /*0x560756*/
        }
        return 0; /*0x560722*/
      }
      if ( dword_887628 ) /*0x5605de*/
        (*(void (__thiscall **)(_DWORD *, int))*dword_887628)(dword_887628, 1); /*0x5605e4*/
    }
    dword_887628 = 0; /*0x5605e6*/
    goto LABEL_20; /*0x5605e6*/
  }
  return result; /*0x5604ef*/
}



// ==== 0x00560BF0  ChangeVideoMode  this=ObjectClass  sig=ida-proto ====
char __fastcall ChangeVideoMode(unsigned int xRight, unsigned int yBottom)
{
  unsigned __int64 v2; // rdi
  char BitShift_Green; // bp
  MouseClass *v4; // eax
  int v5; // eax
  LONG v7; // eax
  int *Viewport; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  MouseClass *v13; // eax
  int v14; // eax
  Dialog *i; // esi
  BOOL v16; // [esp+4h] [ebp-78h]
  LONG WindowLongA; // [esp+8h] [ebp-74h]
  DDraw *v18; // [esp+Ch] [ebp-70h]
  int v19; // [esp+Ch] [ebp-70h]
  SidebarClass *v20; // [esp+Ch] [ebp-70h]
  __int16 BitShift_Blue; // [esp+1Ch] [ebp-60h]
  char BitMask_Red; // [esp+20h] [ebp-5Ch]
  __int16 BitMask_Green; // [esp+24h] [ebp-58h]
  char BitMask_Blue; // [esp+28h] [ebp-54h]
  int BitShift_Red; // [esp+2Ch] [ebp-50h] BYREF
  int v26; // [esp+30h] [ebp-4Ch]
  __int64 lParam; // [esp+34h] [ebp-48h] BYREF
  struct tagRECT rc; // [esp+3Ch] [ebp-40h] BYREF
  _DWORD v29[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v30[4]; // [esp+5Ch] [ebp-20h] BYREF
  _DWORD v31[4]; // [esp+6Ch] [ebp-10h] BYREF

  v2 = __PAIR64__(yBottom, xRight); /*0x560bf9*/
  Debug::Log(); /*0x560c00*/
  lParam = *(_QWORD *)&g_DisplayWidth; /*0x560c13*/
  BitShift_Green = GetBitShift_Green(); /*0x560c20*/
  BitShift_Red = GetBitShift_Red(); /*0x560c27*/
  BitMask_Blue = GetBitMask_Blue(); /*0x560c30*/
  BitMask_Green = GetBitMask_Green(); /*0x560c39*/
  BitMask_Red = GetBitMask_Red(); /*0x560c42*/
  BitShift_Blue = GetBitShift_Blue(); /*0x560c51*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x560c57*/
  DDraw::WaitForIdle(v18); /*0x560c5a*/
  if ( g_DDraw_Initialized == 1 ) /*0x560c66*/
  {
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560c73*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560c78*/
    *(_QWORD *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560c7e*/
    *(_QWORD *)&g_DisplayWidth = v2; /*0x560c8a*/
    Debug::Log(); /*0x560c96*/
LABEL_19:
    if ( DSurface_Alternate ) /*0x560e07*/
    {
      Debug::Log(); /*0x560e0e*/
      if ( DSurface_Alternate ) /*0x560e1e*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x560e24*/
      DSurface_Alternate = 0; /*0x560e26*/
    }
    if ( g_DSurface_Hidden ) /*0x560e32*/
    {
      Debug::Log(); /*0x560e39*/
      if ( g_DSurface_Hidden ) /*0x560e49*/
        (*(void (__thiscall **)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)(g_DSurface_Hidden, 1); /*0x560e4f*/
      g_DSurface_Hidden = 0; /*0x560e51*/
    }
    if ( DSurface_Tile ) /*0x560e5d*/
    {
      Debug::Log(); /*0x560e64*/
      if ( DSurface_Tile ) /*0x560e74*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)(DSurface_Tile, 1); /*0x560e7a*/
      DSurface_Tile = 0; /*0x560e7c*/
    }
    if ( DSurface_Sidebar ) /*0x560e88*/
    {
      Debug::Log(); /*0x560e8f*/
      if ( DSurface_Sidebar ) /*0x560e9f*/
        (*(void (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)(DSurface_Sidebar, 1); /*0x560ea5*/
      DSurface_Sidebar = 0; /*0x560ea7*/
    }
    if ( DSurface_Composite ) /*0x560eb3*/
    {
      Debug::Log(); /*0x560eba*/
      if ( DSurface_Composite ) /*0x560eca*/
        (**(void (__thiscall ***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x560ed0*/
      DSurface_Composite = 0; /*0x560ed2*/
    }
    if ( g_DDraw_Initialized ) /*0x560ee6*/
    {
      Debug::Log(); /*0x560f1f*/
      SetRect(&rc, 0, 0, v2, SHIDWORD(v2)); /*0x560f30*/
      WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x560f4c*/
      v16 = GetMenu(g_hWnd) != 0; /*0x560f60*/
      v7 = GetWindowLongA(g_hWnd, -16); /*0x560f64*/
      AdjustWindowRectEx(&rc, v7, v16, WindowLongA); /*0x560f6c*/
      MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x560f92*/
    }
    else
    {
      Debug::Log(); /*0x560ee8*/
      SetWindowPos(g_hWnd, 0, 0, 0, v2, SHIDWORD(v2), 2u); /*0x560efe*/
      Debug::Log(); /*0x560f09*/
      g_DSurface_Primary = (DSurface *)DSurface::CreatePrimary(0); /*0x560f18*/
    }
    Viewport = Display::GetViewport(v30); /*0x560fa1*/
    rc.left = 0; /*0x560fa3*/
    rc.top = 0; /*0x560fa8*/
    v9 = *Viewport; /*0x560fac*/
    v29[0] = 0; /*0x560fae*/
    v31[0] = v9; /*0x560fb2*/
    v10 = Viewport[1]; /*0x560fbc*/
    rc.right = 168; /*0x560fbf*/
    v31[1] = v10; /*0x560fc3*/
    v11 = Viewport[2]; /*0x560fcb*/
    v29[1] = 0; /*0x560fce*/
    v31[2] = v11; /*0x560fd2*/
    v29[2] = v11; /*0x560fd6*/
    v12 = Viewport[3]; /*0x560fda*/
    v30[2] = v11; /*0x560fdd*/
    v31[3] = v12; /*0x560fe1*/
    rc.bottom = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560feb*/
    v29[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560fef*/
    v30[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20]; /*0x560ff3*/
    v30[0] = 0; /*0x561006*/
    v30[1] = 0; /*0x56100a*/
    AllocateSurfaceScreenSurfaces((int)&DSurface_ViewBounds.__pad_8[8], (int)v30, (int)v29, (int)&rc, 0); /*0x56100e*/
    g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56101e*/
    Debug::Log(); /*0x561024*/
    sub_491100(BitShift_Red, BitShift_Green, 0, BitMask_Blue, BitMask_Green, BitMask_Red, BitShift_Blue); /*0x561046*/
    if ( stru_887598.lineTrailer ) /*0x561053*/
    {
      MouseClass::CalcConfiningRect((MouseClass *)stru_887598.lineTrailer); /*0x5610dd*/
    }
    else
    {
      v13 = (MouseClass *)__2_YAPAXI_Z(0x98u); /*0x56105e*/
      if ( v13 ) /*0x561068*/
        stru_887598.lineTrailer = MouseClass::Construct(v13, (int)g_DSurface_Primary, (int)g_hWnd); /*0x56107f*/
      else
        stru_887598.lineTrailer = 0; /*0x561086*/
      v14 = SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x561093*/
      if ( v14 ) /*0x56109a*/
      {
        BitShift_Red = 0; /*0x56109f*/
        v26 = 0; /*0x5610aa*/
        (*(void (__thiscall **)(void *, int *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5610b5*/
          stru_887598.lineTrailer,
          &BitShift_Red,
          v14,
          0);
      }
      Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x5610bf*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x5610cb*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5610d8*/
    }
    TacticalClass::SetViewDimensions((DisplayClass *)v31); /*0x5610ec*/
    ChangeVideoMode_Setup((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x5610fd*/
    SidebarClass::InitButtons((TabClass *)&stru_87F5F0.__pad_58[416]); /*0x561107*/
    TacticalClass::BuildCommandBar((TabClass *)1, v2, v19); /*0x561113*/
    SidebarClass::LoadResources(v20); /*0x56111d*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x561129*/
    for ( i = (Dialog *)Dialog::GetCurrent(); i; i = (Dialog *)Dialog::FindByPtr(i) ) /*0x561137*/
    {
      DestroyDialog((ObjectClass *)i); /*0x56113b*/
      ResizeDialogAndEnum((HWND)i, (LPARAM)&lParam); /*0x561146*/
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x561160*/
    Debug::Log(); /*0x561168*/
    return 1; /*0x561170*/
  }
  if ( stru_887598.lineTrailer ) /*0x560cac*/
  {
    Debug::Log(); /*0x560cb3*/
    if ( stru_887598.lineTrailer ) /*0x560cc3*/
      (**(void (__thiscall ***)(void *, int))stru_887598.lineTrailer)(stru_887598.lineTrailer, 1); /*0x560cc9*/
    stru_887598.lineTrailer = 0; /*0x560ccb*/
  }
  if ( g_DSurface_Primary ) /*0x560cd7*/
  {
    Debug::Log(); /*0x560cde*/
    if ( g_DSurface_Primary ) /*0x560cee*/
      (*(void (__thiscall **)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)(g_DSurface_Primary, 1); /*0x560cf4*/
    g_DSurface_Primary = 0; /*0x560cf6*/
  }
  if ( InitializeDDraw((int)g_hWnd, v2, HIDWORD(v2), 0x10u) ) /*0x560d07*/
  {
    Debug::Log(); /*0x560dd4*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560de2*/
    *(_DWORD *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560de7*/
    *(_QWORD *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560ded*/
    Debug::Log(); /*0x560df9*/
    goto LABEL_19; /*0x560df9*/
  }
  Debug::Log(); /*0x560d19*/
  Debug::Log(); /*0x560d23*/
  g_DSurface_Primary = (DSurface *)DSurface::CreatePrimary(0); /*0x560d32*/
  Debug::Log(); /*0x560d3c*/
  v4 = (MouseClass *)__2_YAPAXI_Z(0x98u); /*0x560d46*/
  if ( v4 ) /*0x560d50*/
    stru_887598.lineTrailer = MouseClass::Construct(v4, (int)g_DSurface_Primary, (int)g_hWnd); /*0x560d67*/
  else
    stru_887598.lineTrailer = 0; /*0x560d6e*/
  v5 = SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x560d7b*/
  if ( v5 ) /*0x560d82*/
  {
    BitShift_Red = 0; /*0x560d88*/
    v26 = 0; /*0x560d94*/
    (*(void (__thiscall **)(void *, int *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x560d9f*/
      stru_887598.lineTrailer,
      &BitShift_Red,
      v5,
      0);
  }
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x560da9*/
  Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x560db5*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x560dc2*/
  return 0; /*0x560dc7*/
}



// ==== 0x00561180  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char __usercall Team_Start@<al>(ObjectClass *this, unsigned int yBottom@<edx>, int a3@<ebx>, int a4@<edi>)
{
  unsigned int v4; // ecx
  unsigned int v6; // esi
  char result; // al
  Dialog *Dialog; // edi
  TechnoTypeClass *v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // [esp-4h] [ebp-30h]
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+4h] [ebp-28h]
  int v16; // [esp+4h] [ebp-28h]
  int *v17; // [esp+8h] [ebp-24h]
  int *v18; // [esp+8h] [ebp-24h]
  LONG dwNewLong; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v20; // [esp+10h] [ebp-1Ch]
  int Ticks; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  v6 = v4; /*0x561188*/
  v20 = v4; /*0x561191*/
  dwNewLong = -1; /*0x561195*/
  Debug::Log(); /*0x56119d*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5611ad*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5611ba*/
  Frame::Present((int)g_DSurface_Hidden, a3, yBottom, a4, 0, v13, v15, v17); /*0x5611c7*/
  result = ChangeVideoMode(v6, yBottom); /*0x5611d0*/
  if ( result ) /*0x5611d7*/
  {
    (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5611ea*/
    Frame::Present((int)g_DSurface_Hidden, a3, yBottom, a4, 0, v14, v16, v18); /*0x5611f7*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x561204*/
    Screen::Capture(1, 0, a3, yBottom); /*0x56120b*/
    Dialog = (Dialog *)CreateDialog(0xD9u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_561350, 0); /*0x561221*/
    if ( !Dialog ) /*0x561225*/
      goto LABEL_13; /*0x561225*/
    v12 = a3; /*0x56122f*/
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x561234*/
    Dialog::Show(Dialog); /*0x56123c*/
    Ticks = Timer::GetTicks(); /*0x56124a*/
    v23 = 600; /*0x561254*/
    while ( dwNewLong < 0 ) /*0x56125c*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x56126b*/
        break; /*0x56126b*/
      LOBYTE(v9) = 0; /*0x56126d*/
      ScreenSaver::Process(v9, v12); /*0x56126f*/
      v10 = v23; /*0x561278*/
      if ( Ticks != -1 ) /*0x56127f*/
      {
        v11 = Timer::GetTicks() - Ticks; /*0x56128a*/
        if ( v11 >= v10 ) /*0x561290*/
          goto LABEL_9; /*0x561290*/
        v10 -= v11; /*0x561292*/
      }
      if ( v10 <= 0 ) /*0x561296*/
      {
LABEL_9:
        PostMessageA((HWND)Dialog, 0x111u, 0x6CAu, 0); /*0x561298*/
        v24 = Timer::GetTicks(); /*0x5612b9*/
        v26 = 300; /*0x5612bd*/
        Ticks = v24; /*0x5612c1*/
        v22 = v25; /*0x5612c5*/
        v23 = 300; /*0x5612c9*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5612d7*/
    if ( dwNewLong == 1 ) /*0x5612e4*/
    {
LABEL_13:
      Debug::Log(); /*0x561331*/
      g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56133e*/
      return 1; /*0x561343*/
    }
    else
    {
      Debug::Log(); /*0x5612f8*/
      ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x56130c*/
      g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x56131b*/
      return 0; /*0x561317*/
    }
  }
  return result; /*0x5611d9*/
}



// ==== 0x00561350  sub_561350  this=-  sig=csp ====
int __stdcall sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x561369*/
  if ( !result ) /*0x561370*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x561379*/
    if ( a2 == 273 ) /*0x561385*/
    {
      if ( (unsigned __int16)a3 == 1473 ) /*0x5613d8*/
      {
        *WindowLongA = 1; /*0x5613f0*/
      }
      else if ( (unsigned __int16)a3 == 1738 ) /*0x5613e0*/
      {
        *WindowLongA = 2; /*0x5613e3*/
        return 0; /*0x5613ed*/
      }
    }
    else if ( a2 == 1175 ) /*0x56138d*/
    {
      StringCSF = GetStringCSF(aGuiConfirmmode, 0, g_Str_File_MainOpt_cpp, 1501); /*0x5613ab*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x5613ad*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5613bc*/
      return 0; /*0x5613c7*/
    }
    return 0; /*0x5613f6*/
  }
  return result; /*0x5613c2*/
}



// ==== 0x00561400  VideoSettingsDialogProc  this=-  sig=csp ====
int __stdcall VideoSettingsDialogProc(HWND hWnd, unsigned int a2, WPARAM wParam, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // esi
  HWND v6; // ebx
  _DWORD *v7; // eax
  LPARAM v8; // esi
  int *v9; // ebp
  int v10; // eax
  int v11; // ecx
  LRESULT v12; // eax
  HWND v13; // esi
  bool v14; // al
  HWND DlgItem; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF
  int wParama; // [esp+58h] [ebp+Ch]
  int v21; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, wParam, a4); /*0x56141c*/
  if ( result ) /*0x561423*/
    return result; /*0x561423*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x561439*/
  if ( a2 == 273 ) /*0x56143b*/
  {
    if ( (unsigned __int16)wParam > 0x686u ) /*0x5615c1*/
    {
      if ( (unsigned __int16)wParam != 1739 ) /*0x56162f*/
        return 0; /*0x5616d5*/
    }
    else
    {
      if ( (unsigned __int16)wParam == 1670 ) /*0x5615c3*/
      {
        __3_YAXPAX_Z(dword_ABCF5C); /*0x561606*/
        dword_ABCF5C = 0; /*0x56160e*/
        *WindowLongA = 2; /*0x561618*/
        return 0; /*0x561627*/
      }
      if ( (unsigned __int16)wParam != 1 ) /*0x5615c6*/
      {
        if ( (unsigned __int16)wParam == 1497 ) /*0x5615cd*/
        {
          DlgItem = GetDlgItem(hWnd, 1497); /*0x5615d9*/
          dword_82A284 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x5615f1*/
          return 0; /*0x5615fd*/
        }
        return 0; /*0x5615cd*/
      }
    }
    if ( dword_82A288 != dword_82A284 ) /*0x56164e*/
    {
      SetDialogParent(hWnd, g_hWnd); /*0x561658*/
      v16 = GetDlgItem(hWnd, 1497); /*0x561663*/
      if ( v16 ) /*0x561667*/
      {
        v17 = SendMessageA(v16, 0x199u, dword_82A284, 0); /*0x561678*/
        dword_ABCE94 = *((_DWORD *)dword_ABCF5C + 2 * v17); /*0x561683*/
        dword_ABCE98 = *((_DWORD *)dword_ABCF5C + 2 * v17 + 1); /*0x56168d*/
      }
    }
    v18 = GetDlgItem(hWnd, 1652); /*0x561698*/
    if ( v18 ) /*0x5616a1*/
      byte_A8EB94 = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5616b4*/
    __3_YAXPAX_Z(dword_ABCF5C); /*0x5616c1*/
    dword_ABCF5C = 0; /*0x5616c6*/
    *WindowLongA = 1; /*0x5616d3*/
    return 0; /*0x5616d3*/
  }
  if ( a2 != 1175 ) /*0x561447*/
    return 0; /*0x561447*/
  v6 = GetDlgItem(hWnd, 1497); /*0x561459*/
  if ( byte_A8EB95 ) /*0x561464*/
    v7 = (_DWORD *)sub_4A4900(4096, 4096, 16); /*0x561470*/
  else
    v7 = (_DWORD *)sub_4A4900(1024, 768, 16); /*0x561486*/
  v8 = 0; /*0x561491*/
  dword_ABCF5C = v7; /*0x561495*/
  v9 = v7; /*0x56149a*/
  wParama = -1; /*0x56149c*/
  v21 = 0; /*0x5614a4*/
  if ( v7 && *v7 ) /*0x5614ae*/
  {
    do /*0x561527*/
    {
      v10 = *v9; /*0x5614b3*/
      v11 = v9[1]; /*0x5614b6*/
      v9 += 2; /*0x5614c2*/
      if ( byte_A8EB95 || v10 == 640 || v10 == 800 || v10 == 1024 ) /*0x5614dc*/
      {
        if ( v10 == dword_ABCE94 && v11 == dword_ABCE98 ) /*0x5614ec*/
          wParama = v21; /*0x5614f2*/
        sprintf(Buffer, "%d x %d x 16", v10, v11); /*0x561502*/
        v12 = SendMessageA(v6, 0x4C8u, 0, (LPARAM)Buffer); /*0x561517*/
        SendMessageA(v6, 0x19Au, v12, v8); /*0x561521*/
        ++v21; /*0x561523*/
      }
      ++v8; /*0x56152a*/
    }
    while ( *v9 ); /*0x561527*/
  }
  SendMessageA(v6, 0x186u, wParama, 0); /*0x56153c*/
  byte_82A28C = 1; /*0x56154c*/
  dword_82A284 = wParama; /*0x561552*/
  dword_82A288 = wParama; /*0x561557*/
  v13 = GetDlgItem(hWnd, 1652); /*0x561567*/
  if ( !v13 ) /*0x56156b*/
    return 0; /*0x56156b*/
  v14 = byte_A8EB94 == 1 && g_DDraw_AllowStretchBlits == 1; /*0x561581*/
  SendMessageA(v13, 0xF1u, v14, 0); /*0x561597*/
  EnableWindow(v13, (unsigned __int8)g_DDraw_AllowStretchBlits); /*0x5615a3*/
  return 0; /*0x5615aa*/
}



// ==== 0x005616F0  sub_5616F0  this=-  sig=ida-proto ====
int sub_5616F0()
{
  dword_ABD470 = 0; /*0x5616f2*/
  dword_ABD474 = 0; /*0x5616f7*/
  dword_ABD478 = 0; /*0x5616fc*/
  dword_ABD47C = 0; /*0x561701*/
  return 0; /*0x561706*/
}



// ==== 0x00561710  sub_561710  this=-  sig=ida-proto ====
void sub_561710()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x56171c*/
  dbl_ABD488 = Math::Sqrt(v0 + v0); /*0x56172e*/
}



// ==== 0x00561740  sub_561740  this=-  sig=ida-proto ====
void sub_561740()
{
  dbl_ABDDA0 = dbl_ABD488 / unk_7ED3C0; /*0x56174c*/
}



// ==== 0x00561760  sub_561760  this=-  sig=ida-proto ====
void sub_561760()
{
  dbl_ABDC38 = 1.0 / dbl_ABDDA0; /*0x56176c*/
}



// ==== 0x00561780  sub_561780  this=-  sig=ida-proto ====
void sub_561780()
{
  dbl_ABDC30 = unk_7ED3C8 * 45.0; /*0x56178c*/
}



// ==== 0x005617A0  sub_5617A0  this=-  sig=ida-proto ====
void sub_5617A0()
{
  dbl_ABDA58 = unk_7ED3C8 * 60.0; /*0x5617ac*/
}



// ==== 0x005617C0  sub_5617C0  this=-  sig=ida-proto ====
void sub_5617C0()
{
  dbl_ABD458 = unk_7ED3C8 * 90.0; /*0x5617cc*/
}



// ==== 0x005617E0  sub_5617E0  this=-  sig=ida-proto ====
__int64 sub_5617E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABD458 - dbl_ABDA58); /*0x5617f2*/
  result = Math::RoundToInt(v0 * dbl_ABD488 * 0.5); /*0x561806*/
  dword_ABDE88 = result; /*0x56180b*/
  return result; /*0x561810*/
}



// ==== 0x00561820  sub_561820  this=-  sig=ida-proto ====
void sub_561820()
{
  dbl_ABDA60 = Math::ArcTan((double)dword_ABDE88 * 0.00390625); /*0x561837*/
}



// ==== 0x00561850  sub_561850  this=-  sig=ida-proto ====
void sub_561850()
{
  dbl_ABDC20 = Math::ArcTan((double)(2 * dword_ABDE88) / dbl_ABD488); /*0x561872*/
}



// ==== 0x00561880  sub_561880  this=-  sig=ida-proto ====
__int64 sub_561880()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDE88) + 0.5); /*0x56189b*/
  dword_ABDD98 = result; /*0x5618a0*/
  return result; /*0x5618a6*/
}



// ==== 0x005618B0  sub_5618B0  this=-  sig=ida-proto ====
int sub_5618B0()
{
  dword_ABD480 = 0; /*0x5618b2*/
  return 0; /*0x5618be*/
}



// ==== 0x005618C0  sub_5618C0  this=-  sig=ida-proto ====
int sub_5618C0()
{
  dword_ABDC10 = 0; /*0x5618c2*/
  dword_ABDC14 = 0; /*0x5618c7*/
  dword_ABDC18 = 0; /*0x5618cc*/
  return 0; /*0x5618d1*/
}



// ==== 0x005618E0  sub_5618E0  this=-  sig=ida-proto ====
int sub_5618E0()
{
  dword_ABDC48 = 0; /*0x5618e5*/
  dword_ABDC40 = 128; /*0x5618ef*/
  dword_ABDC44 = 128; /*0x5618f4*/
  return 128; /*0x5618f9*/
}



// ==== 0x00561900  j_CoordinateTables_Init  this=-  sig=ida-proto ====
// attributes: thunk
int *j_CoordinateTables_Init()
{
  return CoordinateTables::Init();
}



// ==== 0x00561910  CoordinateTables::Init  this=CoordinateTables  sig=ida-proto ====
int *CoordinateTables_Init()
{
  int *result; // eax
  int v1; // [esp+10h] [ebp-4h] BYREF

  dword_ABD490[0] = 0; /*0x561949*/
  dword_ABD494 = -65535; /*0x56195c*/
  dword_ABD498 = -65536; /*0x561970*/
  dword_ABD49C = -1; /*0x561984*/
  dword_ABD4A0 = 0xFFFF; /*0x561997*/
  dword_ABD4A4 = 1; /*0x5619ab*/
  dword_ABD4B0 = 65537; /*0x5619bf*/
  dword_ABD4A8 = 0x1FFFF; /*0x5619ca*/
  dword_ABD4AC = 0x10000; /*0x5619dd*/
  dword_ABD4B4 = -65537; /*0x5619f1*/
  dword_ABD4B8 = -131072; /*0x561a04*/
  dword_ABD4C0 = -2; /*0x561a18*/
  dword_ABD4BC = -131071; /*0x561a23*/
  dword_ABD4C4 = -65534; /*0x561a36*/
  dword_ABD4C8 = 65534; /*0x561a49*/
  dword_ABD4CC = 2; /*0x561a5c*/
  dword_ABD4D0 = 131070; /*0x561a6f*/
  dword_ABD4D4 = 65538; /*0x561a82*/
  dword_ABD4D8 = 196607; /*0x561a9a*/
  dword_ABD4DC = 0x20000; /*0x561aad*/
  dword_ABD4E0 = 131073; /*0x561ac0*/
  dword_ABD4E4 = -131073; /*0x561ad3*/
  dword_ABD4E8 = -196608; /*0x561ae7*/
  dword_ABD4EC = -196607; /*0x561afb*/
  dword_ABD4F0 = -65538; /*0x561b1d*/
  dword_ABD4F4 = -131070; /*0x561b23*/
  dword_ABD4F8 = -3; /*0x561b3c*/
  dword_ABD4FC = -65533; /*0x561b55*/
  dword_ABD500 = 65533; /*0x561b69*/
  dword_ABD504 = 3; /*0x561b7d*/
  dword_ABD508 = 131069; /*0x561b91*/
  dword_ABD50C = 65539; /*0x561ba7*/
  dword_ABD510 = 196606; /*0x561bbb*/
  dword_ABD514 = 131074; /*0x561bcf*/
  dword_ABD518 = 0x3FFFF; /*0x561be3*/
  dword_ABD51C = 196608; /*0x561bf7*/
  dword_ABD520 = 196609; /*0x561c0b*/
  dword_ABD524 = -196609; /*0x561c1c*/
  dword_ABD528 = -262144; /*0x561c32*/
  dword_ABD52C = -262143; /*0x561c48*/
  dword_ABD530 = -131075; /*0x561c5c*/
  dword_ABD534 = -131074; /*0x561c72*/
  dword_ABD538 = -196606; /*0x561c86*/
  dword_ABD53C = -196605; /*0x561c9a*/
  dword_ABD540 = -65539; /*0x561cb0*/
  dword_ABD544 = -131069; /*0x561cc6*/
  dword_ABD548 = -4; /*0x561cdc*/
  dword_ABD54C = -65532; /*0x561cf2*/
  dword_ABD550 = 65532; /*0x561d08*/
  dword_ABD554 = 4; /*0x561d1e*/
  dword_ABD558 = 131068; /*0x561d34*/
  dword_ABD55C = 65540; /*0x561d4a*/
  dword_ABD560 = 196605; /*0x561d5e*/
  dword_ABD564 = 131075; /*0x561d72*/
  dword_ABD568 = 262141; /*0x561d86*/
  dword_ABD56C = 262142; /*0x561d9c*/
  dword_ABD570 = 196610; /*0x561db0*/
  dword_ABD574 = 196611; /*0x561dc4*/
  dword_ABD578 = 327679; /*0x561ddf*/
  dword_ABD57C = 0x40000; /*0x561df5*/
  dword_ABD580 = 262145; /*0x561e0b*/
  dword_ABD584 = -262145; /*0x561e21*/
  dword_ABD588 = -327680; /*0x561e37*/
  dword_ABD58C = -327679; /*0x561e4d*/
  dword_ABD590 = -196611; /*0x561e65*/
  dword_ABD594 = -196610; /*0x561e7b*/
  dword_ABD598 = -262142; /*0x561e91*/
  dword_ABD59C = -262141; /*0x561ea9*/
  dword_ABD5A0 = -131076; /*0x561ebf*/
  dword_ABD5A4 = -196604; /*0x561ed5*/
  dword_ABD5A8 = -65540; /*0x561eed*/
  dword_ABD5AC = -131068; /*0x561f05*/
  dword_ABD5B0 = -5; /*0x561f1b*/
  dword_ABD5B4 = -65531; /*0x561f31*/
  dword_ABD5B8 = 65531; /*0x561f47*/
  dword_ABD5BC = 5; /*0x561f5d*/
  dword_ABD5C0 = 131067; /*0x561f73*/
  dword_ABD5C4 = 65541; /*0x561f89*/
  dword_ABD5C8 = 196604; /*0x561f98*/
  dword_ABD5CC = 131076; /*0x561fae*/
  dword_ABD5D0 = 262140; /*0x561fc4*/
  dword_ABD5D4 = 196612; /*0x561fda*/
  dword_ABD5D8 = 327677; /*0x561ff0*/
  dword_ABD5DC = 327678; /*0x562008*/
  dword_ABD5E0 = 262146; /*0x56201e*/
  dword_ABD5E4 = 262147; /*0x562034*/
  dword_ABD5E8 = 393215; /*0x56204a*/
  dword_ABD5EC = 327680; /*0x562060*/
  dword_ABD5F0 = 327681; /*0x562076*/
  dword_ABD5F4 = -327681; /*0x56208c*/
  dword_ABD5F8 = -393216; /*0x5620a2*/
  dword_ABD5FC = -393215; /*0x5620b8*/
  dword_ABD600 = -262147; /*0x5620ce*/
  dword_ABD604 = -262146; /*0x5620e6*/
  dword_ABD608 = -327678; /*0x5620fc*/
  dword_ABD60C = -327677; /*0x562112*/
  dword_ABD610 = -196612; /*0x562132*/
  dword_ABD614 = -262140; /*0x56214a*/
  dword_ABD618 = -131077; /*0x562159*/
  dword_ABD61C = -196603; /*0x56216f*/
  dword_ABD620 = -65541; /*0x562187*/
  dword_ABD624 = -131067; /*0x56219f*/
  dword_ABD628 = -6; /*0x5621b5*/
  dword_ABD62C = -65530; /*0x5621cb*/
  dword_ABD630 = 65530; /*0x5621e1*/
  dword_ABD634 = 6; /*0x5621f7*/
  dword_ABD638 = 131066; /*0x56220d*/
  dword_ABD63C = 65542; /*0x562223*/
  dword_ABD640 = 196603; /*0x562239*/
  dword_ABD644 = 131077; /*0x56224f*/
  dword_ABD648 = 262139; /*0x562265*/
  dword_ABD64C = 196613; /*0x56227b*/
  dword_ABD650 = 327676; /*0x562293*/
  dword_ABD654 = 262148; /*0x5622b1*/
  dword_ABD658 = 393213; /*0x5622c9*/
  dword_ABD65C = 393214; /*0x5622df*/
  dword_ABD660 = 327682; /*0x5622f5*/
  dword_ABD664 = 327683; /*0x56230b*/
  dword_ABD668 = 458751; /*0x56231c*/
  dword_ABD66C = 393216; /*0x562332*/
  dword_ABD670 = 393217; /*0x562348*/
  dword_ABD674 = -393217; /*0x56235e*/
  dword_ABD678 = -458752; /*0x562374*/
  dword_ABD67C = -458751; /*0x56238a*/
  dword_ABD680 = -327683; /*0x5623a0*/
  dword_ABD684 = -327682; /*0x5623b8*/
  dword_ABD688 = -393214; /*0x5623ce*/
  dword_ABD68C = -393213; /*0x5623e4*/
  dword_ABD690 = -262149; /*0x562404*/
  dword_ABD694 = -262148; /*0x56241c*/
  dword_ABD698 = -327676; /*0x562434*/
  dword_ABD69C = -327675; /*0x56244c*/
  dword_ABD6A0 = -196613; /*0x562464*/
  dword_ABD6A4 = -262139; /*0x56247c*/
  dword_ABD6A8 = -131078; /*0x562492*/
  dword_ABD6AC = -196602; /*0x5624a8*/
  dword_ABD6B0 = -65542; /*0x5624c0*/
  dword_ABD6B4 = -131066; /*0x5624d8*/
  dword_ABD6B8 = -7; /*0x5624e7*/
  dword_ABD6BC = -65529; /*0x5624fd*/
  dword_ABD6C0 = 65529; /*0x562513*/
  dword_ABD6C4 = 7; /*0x562529*/
  dword_ABD6C8 = 131065; /*0x56253f*/
  dword_ABD6CC = 65543; /*0x562555*/
  dword_ABD6D0 = 196602; /*0x56256b*/
  dword_ABD6D4 = 131078; /*0x562581*/
  dword_ABD6D8 = 262138; /*0x562597*/
  dword_ABD6DC = 196614; /*0x5625ad*/
  dword_ABD6E0 = 327675; /*0x5625c5*/
  dword_ABD6E4 = 262149; /*0x5625dd*/
  dword_ABD6E8 = 393211; /*0x5625f5*/
  dword_ABD6EC = 393212; /*0x56260d*/
  dword_ABD6F0 = 327684; /*0x562625*/
  dword_ABD6F4 = 327685; /*0x562643*/
  dword_ABD6F8 = 458749; /*0x56265b*/
  dword_ABD6FC = 458750; /*0x562671*/
  dword_ABD700 = 393218; /*0x562687*/
  dword_ABD704 = 393219; /*0x56269d*/
  dword_ABD708 = 0x7FFFF; /*0x5626ae*/
  dword_ABD70C = 458752; /*0x5626c4*/
  dword_ABD710 = 458753; /*0x5626da*/
  dword_ABD714 = -458753; /*0x5626f0*/
  dword_ABD718 = -524288; /*0x562706*/
  dword_ABD71C = -524287; /*0x56271c*/
  dword_ABD720 = -393219; /*0x562732*/
  dword_ABD724 = -393218; /*0x56274a*/
  dword_ABD728 = -458750; /*0x562760*/
  dword_ABD72C = -458749; /*0x562776*/
  dword_ABD730 = -327685; /*0x56278e*/
  dword_ABD734 = -327684; /*0x5627a6*/
  dword_ABD738 = -393212; /*0x5627be*/
  dword_ABD73C = -393211; /*0x5627d6*/
  dword_ABD740 = -262150; /*0x5627ee*/
  dword_ABD744 = -327674; /*0x562806*/
  dword_ABD748 = -196614; /*0x56281e*/
  dword_ABD74C = -262138; /*0x562836*/
  dword_ABD750 = -131079; /*0x56284c*/
  dword_ABD754 = -196601; /*0x562862*/
  dword_ABD758 = -65543; /*0x562881*/
  dword_ABD75C = -131065; /*0x562899*/
  dword_ABD760 = -8; /*0x5628af*/
  dword_ABD764 = -65528; /*0x5628c5*/
  dword_ABD768 = 65528; /*0x5628db*/
  dword_ABD76C = 8; /*0x5628f1*/
  dword_ABD770 = 131064; /*0x562907*/
  dword_ABD774 = 65544; /*0x56291d*/
  dword_ABD778 = 196601; /*0x562933*/
  dword_ABD77C = 131079; /*0x562949*/
  dword_ABD780 = 262137; /*0x56295f*/
  dword_ABD784 = 196615; /*0x562975*/
  dword_ABD788 = 327674; /*0x56298d*/
  dword_ABD78C = 262150; /*0x5629a5*/
  dword_ABD790 = 393210; /*0x5629bd*/
  dword_ABD794 = 327686; /*0x5629d5*/
  dword_ABD798 = 458747; /*0x5629ed*/
  dword_ABD79C = 458748; /*0x562a05*/
  dword_ABD7A0 = 393220; /*0x562a1d*/
  dword_ABD7A4 = 393221; /*0x562a33*/
  dword_ABD7A8 = 524285; /*0x562a44*/
  dword_ABD7AC = 524286; /*0x562a5c*/
  dword_ABD7B0 = 458754; /*0x562a72*/
  dword_ABD7B4 = 458755; /*0x562a88*/
  dword_ABD7B8 = 589823; /*0x562a9e*/
  dword_ABD7BC = 0x80000; /*0x562ab4*/
  dword_ABD7C0 = 524289; /*0x562aca*/
  dword_ABD7C4 = -524289; /*0x562ae0*/
  dword_ABD7C8 = -589824; /*0x562af6*/
  dword_ABD7CC = -589823; /*0x562b0c*/
  dword_ABD7D0 = -458755; /*0x562b22*/
  dword_ABD7D4 = -458754; /*0x562b3a*/
  dword_ABD7D8 = -524286; /*0x562b50*/
  dword_ABD7DC = -524285; /*0x562b66*/
  dword_ABD7E0 = -393221; /*0x562b7e*/
  dword_ABD7E4 = -393220; /*0x562b96*/
  dword_ABD7E8 = -458748; /*0x562bae*/
  dword_ABD7EC = -458747; /*0x562bc6*/
  dword_ABD7F0 = -327686; /*0x562be6*/
  dword_ABD7F4 = -393210; /*0x562bfe*/
  dword_ABD7F8 = -262151; /*0x562c0f*/
  dword_ABD7FC = -327673; /*0x562c27*/
  dword_ABD800 = -196615; /*0x562c3f*/
  dword_ABD804 = -262137; /*0x562c57*/
  dword_ABD808 = -131080; /*0x562c6d*/
  dword_ABD80C = -196600; /*0x562c83*/
  dword_ABD810 = -65544; /*0x562c9b*/
  dword_ABD814 = -131064; /*0x562cb3*/
  dword_ABD818 = -9; /*0x562cc9*/
  dword_ABD81C = -65527; /*0x562cdf*/
  dword_ABD820 = 65527; /*0x562cf5*/
  dword_ABD824 = 9; /*0x562d0b*/
  dword_ABD828 = 131063; /*0x562d21*/
  dword_ABD82C = 65545; /*0x562d37*/
  dword_ABD830 = 196600; /*0x562d4d*/
  dword_ABD834 = 131080; /*0x562d63*/
  dword_ABD838 = 262136; /*0x562d79*/
  dword_ABD83C = 196616; /*0x562d8f*/
  dword_ABD840 = 327673; /*0x562da7*/
  dword_ABD844 = 262151; /*0x562dbf*/
  dword_ABD848 = 393209; /*0x562dd7*/
  dword_ABD84C = 327687; /*0x562df6*/
  dword_ABD850 = 458746; /*0x562e07*/
  dword_ABD854 = 393222; /*0x562e27*/
  dword_ABD858 = 524283; /*0x562e3f*/
  dword_ABD85C = 524284; /*0x562e57*/
  dword_ABD860 = 458756; /*0x562e6f*/
  dword_ABD864 = 458757; /*0x562e85*/
  dword_ABD868 = 589821; /*0x562e9d*/
  dword_ABD86C = 589822; /*0x562eb3*/
  dword_ABD870 = 524290; /*0x562ec9*/
  dword_ABD874 = 524291; /*0x562edf*/
  dword_ABD878 = 655359; /*0x562ef5*/
  dword_ABD87C = 589824; /*0x562f0b*/
  dword_ABD880 = 589825; /*0x562f21*/
  dword_ABD884 = -589825; /*0x562f37*/
  dword_ABD888 = -655360; /*0x562f4d*/
  dword_ABD88C = -655359; /*0x562f63*/
  dword_ABD890 = -524291; /*0x562f7b*/
  dword_ABD894 = -524290; /*0x562f91*/
  dword_ABD898 = -589822; /*0x562fa2*/
  dword_ABD89C = -589821; /*0x562fbf*/
  dword_ABD8A0 = -458757; /*0x562fd7*/
  dword_ABD8A4 = -458756; /*0x562fef*/
  dword_ABD8A8 = -524284; /*0x563007*/
  dword_ABD8AC = -524283; /*0x563018*/
  dword_ABD8B0 = -393223; /*0x563038*/
  dword_ABD8B4 = -393222; /*0x563050*/
  dword_ABD8B8 = -458746; /*0x563068*/
  dword_ABD8BC = -458745; /*0x563080*/
  dword_ABD8C0 = -327687; /*0x563098*/
  dword_ABD8C4 = -393209; /*0x5630b0*/
  dword_ABD8C8 = -262152; /*0x5630c8*/
  dword_ABD8CC = -327672; /*0x5630e0*/
  dword_ABD8D0 = -196616; /*0x5630f8*/
  dword_ABD8D4 = -262136; /*0x563110*/
  dword_ABD8D8 = -131081; /*0x563124*/
  dword_ABD8DC = -196599; /*0x563138*/
  dword_ABD8E0 = -65545; /*0x56314f*/
  dword_ABD8E4 = -131063; /*0x563164*/
  dword_ABD8E8 = -10; /*0x563179*/
  dword_ABD8EC = -65526; /*0x56318e*/
  dword_ABD8F0 = 65526; /*0x5631a3*/
  dword_ABD8F4 = 10; /*0x5631b8*/
  dword_ABD8F8 = 131062; /*0x5631cd*/
  dword_ABD8FC = 65546; /*0x5631e2*/
  dword_ABD900 = 196599; /*0x563205*/
  v1 = 196617; /*0x56320a*/
  dword_ABD904 = 131081; /*0x56321a*/
  dword_ABD90C = 196617; /*0x563230*/
  dword_ABD908 = 262135; /*0x56323c*/
  dword_ABD910 = *(_DWORD *)CellStruct::Set(&v1, -8, 4); /*0x563250*/
  dword_ABD914 = *(_DWORD *)CellStruct::Set(&v1, 8, 4); /*0x563265*/
  dword_ABD918 = *(_DWORD *)CellStruct::Set(&v1, -8, 5); /*0x563273*/
  dword_ABD91C = *(_DWORD *)CellStruct::Set(&v1, 8, 5); /*0x56328e*/
  dword_ABD920 = *(_DWORD *)CellStruct::Set(&v1, -7, 6); /*0x5632a3*/
  dword_ABD924 = *(_DWORD *)CellStruct::Set(&v1, 7, 6); /*0x5632b1*/
  dword_ABD928 = *(_DWORD *)CellStruct::Set(&v1, -7, 7); /*0x5632c6*/
  dword_ABD92C = *(_DWORD *)CellStruct::Set(&v1, -6, 7); /*0x5632e1*/
  dword_ABD930 = *(_DWORD *)CellStruct::Set(&v1, 6, 7); /*0x5632ef*/
  dword_ABD934 = *(_DWORD *)CellStruct::Set(&v1, 7, 7); /*0x56330a*/
  dword_ABD938 = *(_DWORD *)CellStruct::Set(&v1, -5, 8); /*0x56331f*/
  dword_ABD93C = *(_DWORD *)CellStruct::Set(&v1, -4, 8); /*0x56332d*/
  dword_ABD940 = *(_DWORD *)CellStruct::Set(&v1, 4, 8); /*0x563348*/
  dword_ABD944 = *(_DWORD *)CellStruct::Set(&v1, 5, 8); /*0x56335d*/
  dword_ABD948 = *(_DWORD *)CellStruct::Set(&v1, -3, 9); /*0x56336b*/
  dword_ABD94C = *(_DWORD *)CellStruct::Set(&v1, -2, 9); /*0x563386*/
  dword_ABD950 = *(_DWORD *)CellStruct::Set(&v1, 2, 9); /*0x56339a*/
  dword_ABD954 = *(_DWORD *)CellStruct::Set(&v1, 3, 9); /*0x5633a8*/
  dword_ABD958 = *(_DWORD *)CellStruct::Set(&v1, -1, 10); /*0x5633c1*/
  dword_ABD95C = *(_DWORD *)CellStruct::Set(&v1, 0, 10); /*0x5633d5*/
  dword_ABD960 = *(_DWORD *)CellStruct::Set(&v1, 1, 10); /*0x5633e1*/
  dword_ABD964 = *(_DWORD *)CellStruct::Set(&v1, 0, 11); /*0x5633fc*/
  dword_ABD968 = *(_DWORD *)CellStruct::Set(&v1, 0, -11); /*0x563410*/
  dword_ABD96C = *(_DWORD *)CellStruct::Set(&v1, -1, 11); /*0x56341e*/
  dword_ABD970 = *(_DWORD *)CellStruct::Set(&v1, 1, 11); /*0x563437*/
  dword_ABD974 = *(_DWORD *)CellStruct::Set(&v1, -1, -11); /*0x56344b*/
  dword_ABD978 = *(_DWORD *)CellStruct::Set(&v1, 1, -11); /*0x563459*/
  dword_ABD97C = *(_DWORD *)CellStruct::Set(&v1, -2, 11); /*0x563474*/
  dword_ABD980 = *(_DWORD *)CellStruct::Set(&v1, 2, 11); /*0x563489*/
  dword_ABD984 = *(_DWORD *)CellStruct::Set(&v1, -2, -11); /*0x563497*/
  dword_ABD988 = *(_DWORD *)CellStruct::Set(&v1, 2, -11); /*0x5634b2*/
  dword_ABD98C = *(_DWORD *)CellStruct::Set(&v1, -3, 11); /*0x5634c6*/
  dword_ABD990 = *(_DWORD *)CellStruct::Set(&v1, 3, 11); /*0x5634d4*/
  dword_ABD994 = *(_DWORD *)CellStruct::Set(&v1, -3, -11); /*0x5634e9*/
  dword_ABD998 = *(_DWORD *)CellStruct::Set(&v1, -3, 11); /*0x563504*/
  dword_ABD99C = *(_DWORD *)CellStruct::Set(&v1, -4, 9); /*0x563512*/
  dword_ABD9A0 = *(_DWORD *)CellStruct::Set(&v1, 4, 9); /*0x56352d*/
  dword_ABD9A4 = *(_DWORD *)CellStruct::Set(&v1, -4, -9); /*0x563542*/
  dword_ABD9A8 = *(_DWORD *)CellStruct::Set(&v1, 4, -9); /*0x563550*/
  dword_ABD9AC = *(_DWORD *)CellStruct::Set(&v1, -5, 9); /*0x56356b*/
  dword_ABD9B0 = *(_DWORD *)CellStruct::Set(&v1, 5, 9); /*0x563580*/
  dword_ABD9B4 = *(_DWORD *)CellStruct::Set(&v1, -5, -9); /*0x56358e*/
  dword_ABD9B8 = *(_DWORD *)CellStruct::Set(&v1, 5, -9); /*0x5635a9*/
  dword_ABD9BC = *(_DWORD *)CellStruct::Set(&v1, -6, 8); /*0x5635be*/
  dword_ABD9C0 = *(_DWORD *)CellStruct::Set(&v1, 6, 8); /*0x5635cc*/
  dword_ABD9C4 = *(_DWORD *)CellStruct::Set(&v1, -6, -8); /*0x5635e7*/
  dword_ABD9C8 = *(_DWORD *)CellStruct::Set(&v1, 6, -8); /*0x5635fc*/
  dword_ABD9CC = *(_DWORD *)CellStruct::Set(&v1, -7, 8); /*0x563608*/
  dword_ABD9D0 = *(_DWORD *)CellStruct::Set(&v1, 7, 8); /*0x563625*/
  dword_ABD9D4 = *(_DWORD *)CellStruct::Set(&v1, -7, -8); /*0x56363a*/
  dword_ABD9D8 = *(_DWORD *)CellStruct::Set(&v1, 7, -8); /*0x563648*/
  dword_ABD9DC = *(_DWORD *)CellStruct::Set(&v1, -8, 7); /*0x563663*/
  dword_ABD9E0 = *(_DWORD *)CellStruct::Set(&v1, 8, 7); /*0x563678*/
  dword_ABD9E4 = *(_DWORD *)CellStruct::Set(&v1, -8, -7); /*0x563686*/
  dword_ABD9E8 = *(_DWORD *)CellStruct::Set(&v1, 8, -7); /*0x5636a1*/
  dword_ABD9EC = *(_DWORD *)CellStruct::Set(&v1, -8, 6); /*0x5636b6*/
  dword_ABD9F0 = *(_DWORD *)CellStruct::Set(&v1, 8, 6); /*0x5636c4*/
  dword_ABD9F4 = *(_DWORD *)CellStruct::Set(&v1, -8, -6); /*0x5636df*/
  dword_ABD9F8 = *(_DWORD *)CellStruct::Set(&v1, 8, -6); /*0x5636f4*/
  dword_ABD9FC = *(_DWORD *)CellStruct::Set(&v1, -9, 5); /*0x563702*/
  dword_ABDA00 = *(_DWORD *)CellStruct::Set(&v1, 9, 5); /*0x563717*/
  dword_ABDA04 = *(_DWORD *)CellStruct::Set(&v1, -9, -5); /*0x563732*/
  dword_ABDA08 = *(_DWORD *)CellStruct::Set(&v1, 9, -5); /*0x563740*/
  dword_ABDA0C = *(_DWORD *)CellStruct::Set(&v1, -9, 4); /*0x56375b*/
  dword_ABDA10 = *(_DWORD *)CellStruct::Set(&v1, 9, 4); /*0x563770*/
  dword_ABDA14 = *(_DWORD *)CellStruct::Set(&v1, -9, -4); /*0x56377e*/
  dword_ABDA18 = *(_DWORD *)CellStruct::Set(&v1, 9, -4); /*0x563798*/
  dword_ABDA1C = *(_DWORD *)CellStruct::Set(&v1, -10, 3); /*0x5637ac*/
  dword_ABDA20 = *(_DWORD *)CellStruct::Set(&v1, 10, 3); /*0x5637ba*/
  dword_ABDA24 = *(_DWORD *)CellStruct::Set(&v1, -10, -3); /*0x5637d5*/
  dword_ABDA28 = *(_DWORD *)CellStruct::Set(&v1, 10, -3); /*0x5637ea*/
  dword_ABDA2C = *(_DWORD *)CellStruct::Set(&v1, -10, 2); /*0x5637f8*/
  dword_ABDA30 = *(_DWORD *)CellStruct::Set(&v1, 10, 2); /*0x563813*/
  dword_ABDA34 = *(_DWORD *)CellStruct::Set(&v1, -10, -2); /*0x563828*/
  dword_ABDA38 = *(_DWORD *)CellStruct::Set(&v1, 10, -2); /*0x563834*/
  dword_ABDA3C = *(_DWORD *)CellStruct::Set(&v1, -11, 1); /*0x56384f*/
  dword_ABDA40 = *(_DWORD *)CellStruct::Set(&v1, 11, 1); /*0x563863*/
  dword_ABDA44 = *(_DWORD *)CellStruct::Set(&v1, -11, -1); /*0x563870*/
  dword_ABDA48 = *(_DWORD *)CellStruct::Set(&v1, 11, -1); /*0x56388a*/
  dword_ABDA4C = *(_DWORD *)CellStruct::Set(&v1, 11, 0); /*0x56389e*/
  result = (int *)CellStruct::Set(&v1, -11, 0); /*0x5638a3*/
  dword_ABDA50 = *result; /*0x5638ad*/
  return result; /*0x5638aa*/
}


// ==== 0x00565060  COMStub_565060  this=-  sig=ida-proto ====
int sub_565060()
{
  CellClass::Construct(unk_ABDC50); /*0x565065*/
  return atexit(unknown_libname_22); /*0x565075*/
}



// ==== 0x00565080  unknown_libname_22  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_22()
{
  CellClass::DTOR(&unk_ABDC50); /*0x565085*/
}



// ==== 0x00565090  MapClass::RenderMapPreview  this=MapClass  sig=csp ====
int __thiscall sub_565090(int this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  _WORD *v4; // eax
  int v5; // ecx

  RadarClass::initRadarSurface((_DWORD *)this); /*0x565096*/
  RadarClass::drawRadarTerrain((_DWORD *)(this + 80), 0, 0); /*0x5650a4*/
  *(_DWORD *)(this + 80) = &DynamicVectorClass<ZoneConnectionClass>::`vftable'; /*0x5650a9*/
  *(_DWORD *)(this + 100) = 10; /*0x5650af*/
  *(_DWORD *)(this + 96) = 0; /*0x5650b6*/
  v2 = (_DWORD *)(this + 140); /*0x5650b9*/
  v3 = 3; /*0x5650bf*/
  do /*0x5650e1*/
  {
    RadarClass::RenderJammerRadius(v2, 0, 0); /*0x5650c8*/
    *v2 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable'; /*0x5650cd*/
    v2[5] = 10; /*0x5650d3*/
    v2[4] = 0; /*0x5650da*/
    v2 += 6; /*0x5650dd*/
    --v3; /*0x5650e0*/
  }
  while ( v3 ); /*0x5650e1*/
  VectorClass::CellConstructor((_DWORD *)(this + 212), 0, 0); /*0x5650ed*/
  *(_DWORD *)(this + 212) = &DynamicVectorClass<Cell>::`vftable'; /*0x5650f9*/
  *(_DWORD *)(this + 232) = 10; /*0x5650ff*/
  *(_DWORD *)(this + 228) = 0; /*0x565102*/
  *(_DWORD *)(this + 316) = 0; /*0x565105*/
  *(_DWORD *)(this + 320) = 0; /*0x56510b*/
  *(_BYTE *)(this + 324) = 1; /*0x565111*/
  *(_BYTE *)(this + 325) = 0; /*0x565117*/
  *(_DWORD *)(this + 312) = &VectorClass<CellClass *>::`vftable'; /*0x56511d*/
  v4 = (_WORD *)(this + 356); /*0x565127*/
  v5 = 256; /*0x56512d*/
  do /*0x56513d*/
  {
    *v4 = 0; /*0x565132*/
    v4[1] = 0; /*0x565135*/
    v4 += 8; /*0x565139*/
    --v5; /*0x56513c*/
  }
  while ( v5 ); /*0x56513d*/
  *(_DWORD *)(this + 4448) = 0; /*0x56513f*/
  *(_DWORD *)(this + 4452) = 0; /*0x565145*/
  *(_BYTE *)(this + 4456) = 1; /*0x56514b*/
  *(_BYTE *)(this + 4457) = 0; /*0x565151*/
  *(_DWORD *)(this + 4444) = &DynamicVectorClass<Cell>::`vftable'; /*0x565157*/
  *(_DWORD *)(this + 4464) = 10; /*0x565161*/
  *(_DWORD *)(this + 4460) = 0; /*0x565167*/
  *(_DWORD *)this = &MapClass::`vftable'; /*0x56516d*/
  *(_DWORD *)(this + 328) = 13; /*0x565173*/
  return this; /*0x56517f*/
}



// ==== 0x00565190  RadarClass::Render  this=MapClass  sig=csp ====
char *__thiscall sub_565190(char *this, int a2)
{
  _DWORD *v3; // edi
  _DWORD *v4; // edi
  int v5; // ebp
  _WORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  char *v9; // edi
  int v11; // [esp+10h] [ebp-4h]

  v3 = this + 80; /*0x565199*/
  *(_DWORD *)this = &off_7EA6FC; /*0x5651a0*/
  this->q010 = 0; /*0x5651a6*/
  this->q014 = 0; /*0x5651a9*/
  RadarClass::drawRadarTerrain((_DWORD *)this + 20, 0, 0); /*0x5651ac*/
  *v3 = &DynamicVectorClass<ZoneConnectionClass>::`vftable'; /*0x5651b1*/
  v3[5] = 10; /*0x5651b7*/
  v3[4] = 0; /*0x5651be*/
  v4 = this + 140; /*0x5651c1*/
  v5 = 3; /*0x5651c7*/
  do /*0x5651e9*/
  {
    RadarClass::RenderJammerRadius(v4, 0, 0); /*0x5651d0*/
    *v4 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable'; /*0x5651d5*/
    v4[5] = 10; /*0x5651db*/
    v4[4] = 0; /*0x5651e2*/
    v4 += 6; /*0x5651e5*/
    --v5; /*0x5651e8*/
  }
  while ( v5 ); /*0x5651e9*/
  VectorClass::CellConstructor((_DWORD *)this + 53, 0, 0); /*0x5651f5*/
  this->q0D4 = &DynamicVectorClass<Cell>::`vftable'; /*0x5651ff*/
  this->q03A = 10; /*0x565205*/
  this->q0E4 = 0; /*0x565208*/
  this->MaxLevel = &VectorClass<CellClass *>::`vftable'; /*0x56520b*/
  v6 = this + 356; /*0x565215*/
  v7 = 256; /*0x56521b*/
  do /*0x56522b*/
  {
    *v6 = 0; /*0x565220*/
    v6[1] = 0; /*0x565223*/
    v6 += 8; /*0x565227*/
    --v7; /*0x56522a*/
  }
  while ( v7 ); /*0x56522b*/
  this->q1160 = 0; /*0x56522d*/
  this->q1164 = 0; /*0x565233*/
  this->q1168 = 1; /*0x565239*/
  this->q1169 = 0; /*0x565240*/
  this->q115C = &DynamicVectorClass<Cell>::`vftable'; /*0x565246*/
  this->q1170 = 10; /*0x565250*/
  this->q116C = 0; /*0x565256*/
  *(_DWORD *)this = &MapClass::`vftable'; /*0x565266*/
  v8 = this + 128; /*0x56526c*/
  memset(this + 24, 0, 0x34u); /*0x565272*/
  v9 = this + 140; /*0x565276*/
  v11 = 3; /*0x56527c*/
  this->CapacityIncrement = 0; /*0x565284*/
  this->LevelAndPassability = 0; /*0x565286*/
  this->ValidMapCellCount = 0; /*0x565289*/
  do /*0x5652a5*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v9 + 12))(v9); /*0x565290*/
    *v8++ = 0; /*0x565297*/
    v9 += 24; /*0x56529d*/
    --v11; /*0x5652a1*/
  }
  while ( v11 ); /*0x5652a5*/
  this->q014 = 0; /*0x5652a7*/
  return this; /*0x5652ac*/
}



// ==== 0x005652C0  MapClass::Destruct  this=MapClass  sig=csp ====
void __thiscall MapClass_Destructor(char *this)
{
  _DWORD *v2; // edi
  _DWORD **v3; // ebp
  _DWORD *v4; // edi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  char *v8; // edi
  int v9; // ebp
  void *v10; // ecx
  void *v11; // eax
  int v12; // [esp+8h] [ebp-4h]

  *(_DWORD *)this = &MapClass::`vftable'; /*0x5652c5*/
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->q01A ) /*0x5652df*/
  {
    __3_YAXPAX_Z(*((void **)this + 26)); /*0x5652e9*/
    this->q01A = 0; /*0x5652f1*/
  }
  v2 = (_DWORD *)this->q014; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x565307*/
    __3_YAXPAX_Z(v2); /*0x56530a*/
    this->q014 = 0; /*0x565312*/
  }
  if ( this->q01C ) /*0x565315*/
  {
    __3_YAXPAX_Z(*((void **)this + 28)); /*0x56531d*/
    this->q01C = 0; /*0x565325*/
  }
  v3 = (_DWORD **)(this + 128); /*0x565328*/
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x565347*/
      __3_YAXPAX_Z(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  v5 = (void *)this->q1160; /*0x565363*/
  this->q115C = &VectorClass<Cell>::`vftable'; /*0x565370*/
  if ( v5 && this->q1169 ) /*0x565378*/
  {
    __3_YAXPAX_Z(v5); /*0x565381*/
    this->q1160 = 0; /*0x565389*/
  }
  this->q1169 = 0; /*0x56538f*/
  this->q1164 = 0; /*0x565395*/
  v6 = (void *)this->q04F; /*0x56539b*/
  this->MaxLevel = &VectorClass<CellClass *>::`vftable'; /*0x5653a1*/
  if ( v6 && this->q145 ) /*0x5653af*/
  {
    __3_YAXPAX_Z(v6); /*0x5653b8*/
    this->q04F = 0; /*0x5653c0*/
  }
  this->q145 = 0; /*0x5653c6*/
  this->ptr_50 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
  this->q0D4 = &VectorClass<Cell>::`vftable'; /*0x5653d8*/
  if ( v7 && this->q0E1 ) /*0x5653e2*/
  {
    __3_YAXPAX_Z(v7); /*0x5653eb*/
    this->q0D8 = 0; /*0x5653f3*/
  }
  this->q0E1 = 0; /*0x5653f9*/
  this->q0DC = 0; /*0x5653ff*/
  v8 = this + 212; /*0x565405*/
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
    v10 = (void *)*((_DWORD *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(_DWORD *)v8 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x565418*/
    if ( v10 && v8[13] ) /*0x565420*/
    {
      SubzoneConnectionVector::Destruct(v10, 3); /*0x56542b*/
      *((_DWORD *)v8 + 1) = 0; /*0x565430*/
    }
    --v9; /*0x565433*/
    v8[13] = 0; /*0x565434*/
    *((_DWORD *)v8 + 2) = 0; /*0x565437*/
  }
  while ( v9 ); /*0x56543a*/
  v11 = (void *)this->q054; /*0x56543c*/
  this->q014 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x565442*/
  if ( v11 && this->q05D ) /*0x56544c*/
  {
    __3_YAXPAX_Z(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  this->q05D = 0; /*0x56545d*/
  this->Count = 0; /*0x565460*/
  *(_DWORD *)this = &off_7EA6FC; /*0x565463*/
}



// ==== 0x005654A0  HexCoord::Convert  this=HexCoord  sig=csp ====
_DWORD *__thiscall HexCoord::Convert(HexCoord *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx

  v3 = *((_DWORD *)this + 63) + *a3; /*0x5654ba*/
  v4 = *((_DWORD *)this + 64) + a3[1]; /*0x5654bf*/
  v5 = v4 + 1; /*0x5654c2*/
  v6 = (v4 >> 1) + *((_DWORD *)this + 61); /*0x5654c9*/
  *a2 = v3 + (v5 >> 1); /*0x5654d3*/
  a2[1] = v6 - v3; /*0x5654d5*/
  return a2; /*0x5654c1*/
}



// ==== 0x005654E0  ObjectClass::method_5654E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5654E0(ObjectClass *this, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi

  v3 = this->q03D; /*0x5654e5*/
  v4 = a3[1]; /*0x5654ec*/
  v5 = *a3; /*0x5654f5*/
  if ( (v3 & 1) != 0 ) /*0x5654f7*/
    v6 = v5 - v4 + 1; /*0x5654fb*/
  else
    v6 = v5 - v4; /*0x5654fe*/
  v7 = *a3 + v4 - v3; /*0x565507*/
  *a2 = v3 / 2 + (v6 >> 1); /*0x565514*/
  a2[1] = v7; /*0x565516*/
  return a2; /*0x565513*/
}



// ==== 0x00565520  CellClass::GetScreenCenterOffset  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::GetScreenCenterOffset(CellClass *this, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int CellClass_field_FC; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int occupyHeightsCoveringMe; // [esp+14h] [ebp-4h]

  v3 = this->radLevel[1]; /*0x56552a*/
  occupyHeightsCoveringMe = this->occupyHeightsCoveringMe; /*0x565530*/
  CellClass_field_FC = this->CellClass_field_FC; /*0x565539*/
  v5 = a3[1]; /*0x565540*/
  v6 = *a3; /*0x565549*/
  if ( (v3 & 1) != 0 ) /*0x56554b*/
    v7 = v6 - v5 + 1; /*0x56554f*/
  else
    v7 = v6 - v5; /*0x565552*/
  v8 = *a3 + v5 - v3 - occupyHeightsCoveringMe; /*0x565569*/
  *a2 = v3 / 2 + (v7 >> 1) - CellClass_field_FC; /*0x565570*/
  a2[1] = v8; /*0x565572*/
  return a2; /*0x56556f*/
}



// ==== 0x00565610  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_565610(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  __int16 v7; // si
  __int16 *v9; // [esp+14h] [ebp+8h]

  v3 = this->q03D; /*0x565615*/
  v4 = a3[1]; /*0x56561c*/
  v5 = *a3; /*0x565627*/
  if ( (v3 & 1) != 0 ) /*0x565629*/
    v6 = v5 - v4 + 1; /*0x56562d*/
  else
    v6 = v5 - v4; /*0x565630*/
  v7 = *a3 + v4 - v3; /*0x565639*/
  LOWORD(v9) = v3 / 2 + (v6 >> 1); /*0x565645*/
  HIWORD(v9) = v7; /*0x56564a*/
  *a2 = v9; /*0x565655*/
  return a2; /*0x565653*/
}



// ==== 0x00565660  DamageArea::CalcScatterOffset  this=DamageArea  sig=csp ====
_DWORD *__thiscall DamageArea::CalcScatterOffset(DamageArea *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  __int16 *v11; // [esp+20h] [ebp+8h]

  v3 = *((_DWORD *)this + 61); /*0x565668*/
  v4 = *((_DWORD *)this + 63); /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = *((_DWORD *)this + 64); /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *a2 = v11; /*0x5656c2*/
  return a2; /*0x5656bf*/
}



// ==== 0x005656D0  MapClass::IsCellPassable  this=MapClass  sig=csp ====
int __stdcall MapClass::IsCellPassable(MapClass *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // eax

  v2 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x5656ed*/
  if ( v2 >= 0x40000 || (v3 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_MissionQueueFrame.briefing[130]; /*0x56570d*/
    g_MissionQueueFrame.briefing[139] = a2; /*0x565712*/
  }
  return ((unsigned int)v3[75] >> 3) & 1; /*0x565725*/
}



// ==== 0x00565730  Coord::To_Cell  this=Coord  sig=csp ====
CellClass *__thiscall Coord::To_Cell(Coord *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx
  CellClass *v4; // edx
  _DWORD *v6; // [esp+Ch] [ebp+4h]

  v2 = a2[1] / 256; /*0x56574f*/
  v3 = *a2 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < this->q050 ) /*0x565764*/
  {
    v4 = (CellClass *)*((_DWORD *)this->Coord_field_0x13C + v3); /*0x56576c*/
    if ( v4 ) /*0x565771*/
      return v4; /*0x565774*/
  }
  LOWORD(v6) = *a2 / 256; /*0x56577a*/
  HIWORD(v6) = v2; /*0x56577f*/
  g_MissionQueueFrame.briefing[139] = (int)v6; /*0x565789*/
  return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x565773*/
}



// ==== 0x005657A0  CellCoord::To_CellObj  this=CellCoord  sig=csp ====
void *__thiscall CellCoord::To_CellObj(CellCoord *this, __int16 *a2)
{
  unsigned int v2; // eax
  void *result; // eax

  v2 = *a2 + (a2[1] << 9); /*0x5657af*/
  if ( v2 >= 0x40000 || (result = *(void **)(*((_DWORD *)this + 79) + 4 * v2)) == 0 ) /*0x5657c6*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5657cf*/
    return &g_MissionQueueFrame.briefing[130]; /*0x5657ca*/
  }
  return result; /*0x5657b1*/
}



// ==== 0x005657E0  Cell::Exists  this=Cell  sig=csp ====
int __thiscall Cell::Exists(Cell *this, __int16 *a2)
{
  int result; // eax

  result = *a2; /*0x5657ee*/
  LOBYTE(result) = *((_DWORD *)this->Cell_field_0x13C + 512 * a2[1] + result) != 0; /*0x5657fa*/
  return result; /*0x5657fd*/
}



// ==== 0x00565800  MapClass::Destru_vt05  this=MapClass  sig=csp ====
int __thiscall MapClass::Destru_vt05(MapClass *this)
{
  MapClass *v1; // ebp
  int MapClass_field_0x0; // eax
  HashVector_UInt **v3; // eax
  HashVector_UInt **v4; // edi
  HashVector_UInt *v5; // eax
  HashVector_UInt *v6; // ebp
  HashVector_UInt *v7; // esi
  int v8; // ebx
  HashVector_UInt *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char *v13; // esi
  SubzoneHashVector **v14; // eax
  SubzoneHashVector **v15; // edi
  SubzoneHashVector *v16; // eax
  SubzoneHashVector *v17; // ebp
  SubzoneHashVector *v18; // esi
  int v19; // ebx
  SubzoneHashVector *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  GScreenClass *v25; // [esp+0h] [ebp-20h]
  char *v27; // [esp+14h] [ebp-Ch]
  char *v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x565806*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Add(v25); /*0x56580d*/
  *(_DWORD *)&v1->__pad_144[8] = 512; /*0x565819*/
  *(_DWORD *)&v1->__pad_144[12] = 512; /*0x56581f*/
  MapClass_field_0x0 = v1->MapClass_field_0x0; /*0x565825*/
  *(_DWORD *)&v1->__pad_144[16] = 0x40000; /*0x565828*/
  (*(void (__thiscall **)(MapClass *))(MapClass_field_0x0 + 88))(v1); /*0x565832*/
  if ( v1->MapClass_field_0x14 ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = (HashVector_UInt **)__2_YAPAXI_Z(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = (HashVector_UInt *)Cell::DecodeFlags; /*0x56585e*/
    v3[2] = (HashVector_UInt *)256; /*0x565865*/
    v3[3] = (HashVector_UInt *)20; /*0x56586c*/
    v5 = (HashVector_UInt *)__2_YAPAXI_Z(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = (HashVector_UInt)256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = (HashVector_UInt)&DynamicVectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x565896*/
        v7[5] = (HashVector_UInt)10; /*0x56589c*/
        v7[4] = 0; /*0x5658a3*/
        v7 += 6; /*0x5658aa*/
        --v8; /*0x5658ad*/
      }
      while ( v8 ); /*0x5658ae*/
      v9 = v6; /*0x5658b0*/
      v1 = this; /*0x5658b2*/
    }
    else
    {
      v9 = 0; /*0x5658bd*/
    }
    v10 = (int)v4[2]; /*0x5658bf*/
    *v4 = v9; /*0x5658c2*/
    v11 = 0; /*0x5658c4*/
    if ( v10 > 0 ) /*0x5658c8*/
    {
      v12 = 0; /*0x5658ca*/
      do /*0x5658db*/
      {
        ++v11; /*0x5658ce*/
        (*v4)[v12 + 5] = (HashVector_UInt)20; /*0x5658cf*/
        v12 += 6; /*0x5658d6*/
      }
      while ( v11 < (int)v4[2] ); /*0x5658db*/
      v1->MapClass_field_0x14 = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1->MapClass_field_0x14 = (int)v4; /*0x5658e9*/
LABEL_14:
  v13 = &v1->__pad_5C[48]; /*0x5658f3*/
  v27 = &v1->__pad_5C[36]; /*0x5658ff*/
  v28 = &v1->__pad_5C[48]; /*0x565903*/
  v29 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 12))(v13); /*0x565913*/
    v14 = (SubzoneHashVector **)__2_YAPAXI_Z(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = (SubzoneHashVector *)Cell::DecodeFlags; /*0x56592f*/
      v14[2] = (SubzoneHashVector *)256; /*0x565936*/
      v14[3] = (SubzoneHashVector *)20; /*0x56593d*/
      v16 = (SubzoneHashVector *)__2_YAPAXI_Z(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = (SubzoneHashVector)256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = (SubzoneHashVector)&DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x565967*/
          v18[5] = (SubzoneHashVector)10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v28; /*0x565981*/
        v20 = v17; /*0x565985*/
        v1 = this; /*0x565987*/
      }
      else
      {
        v20 = 0; /*0x565992*/
      }
      v21 = (int)v15[2]; /*0x565994*/
      *v15 = v20; /*0x565997*/
      v22 = 0; /*0x565999*/
      if ( v21 > 0 ) /*0x56599d*/
      {
        v23 = 0; /*0x56599f*/
        do /*0x5659b0*/
        {
          ++v22; /*0x5659a3*/
          (*v15)[v23 + 5] = (SubzoneHashVector)20; /*0x5659a4*/
          v23 += 6; /*0x5659ab*/
        }
        while ( v22 < (int)v15[2] ); /*0x5659b0*/
      }
    }
    else
    {
      v15 = 0; /*0x5659b4*/
    }
    v13 += 24; /*0x5659ba*/
    v28 = v13; /*0x5659bd*/
    *(_DWORD *)v27 = v15; /*0x5659c1*/
    v27 += 4; /*0x5659c6*/
    --v29; /*0x5659cf*/
  }
  while ( v29 ); /*0x5659d3*/
  memset(v1->__pad_18, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}



// ==== 0x005659F0  MapClass::Destru_vt07  this=MapClass  sig=csp ====
void __thiscall MapClass::Destru_vt07(MapClass *this)
{
  char *v2; // edx
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax

  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  MapClass::isCellShrouded((MapClass *)g_ZBufferDescriptor, 0xFFFFu); /*0x565a12*/
  MapClass::isLocationShrouded((MapClass *)dword_87E8A4, 0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Remove((GScreenClass *)this); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = &this->__pad_144[20]; /*0x565a35*/
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
    v4 = *(_DWORD *)v2; /*0x565a40*/
    v5 = *(_DWORD *)v2 == -1; /*0x565a47*/
    *((_DWORD *)v2 + 3) = dword_ABD480; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
      v6 = *((_DWORD *)v2 + 2); /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)dword_A8ED84 - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)dword_A8ED84 - v4; /*0x565a63*/
      }
      *((_DWORD *)v2 + 2) = v6; /*0x565a69*/
      *(_DWORD *)v2 = -1; /*0x565a6c*/
    }
    v2 += 16; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  *(_DWORD *)&this->__pad_144[4] = 13; /*0x565a7d*/
  this->__pad_1140[24] = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/
}



// ==== 0x00565AA0  MapClass::InitCellVector  this=MapClass  sig=csp ====
int __thiscall MapClass::InitCellVector(MapClass *this)
{
  char *v2; // ecx
  int result; // eax

  v2 = &this->__pad_134[4]; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    *((_DWORD *)v2 + 1) = 0; /*0x565aad*/
    *((_DWORD *)v2 + 2) = 0; /*0x565ab4*/
    v2[12] = 1; /*0x565abb*/
    v2[13] = 0; /*0x565abf*/
    *(_DWORD *)v2 = &VectorClass<CellClass *>::`vftable'; /*0x565ac3*/
  }
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)&this->__pad_144[16], 0); /*0x565ad4*/
  for ( result = 0; result < *(_DWORD *)&this->__pad_144[16]; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/
}



// ==== 0x00565B00  MapClass::FreeAllCells  this=MapClass  sig=csp ====
int __thiscall MapClass::FreeAllCells(MapClass *this)
{
  int i; // ecx
  int v3; // eax
  int j; // edi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < this->MapClass_field_0x140; ++i ) /*0x565b0e*/
  {
    v3 = *((_DWORD *)this->MapClass_field_0x13C + i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(_DWORD *)(v3 + 44) = 0; /*0x565b1d*/
      *(_DWORD *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  for ( j = 0; j < this->MapClass_field_0x140; ++j ) /*0x565b39*/
  {
    v5 = *((_DWORD *)this->MapClass_field_0x13C + j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x565b4c*/
      *((_DWORD *)this->MapClass_field_0x13C + j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(); /*0x565b67*/
  result = this->MapClass_field_0x140; /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_134[4] + 8))(&this->__pad_134[4], 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < this->MapClass_field_0x140; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/
}



// ==== 0x00565BC0  MapClass::InitAllCells  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::InitAllCells(MapClass *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax
  CellClass *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  *(_DWORD *)this->__pad_134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->MapClass_field_0x140 ) /*0x565bdb*/
      {
        result = this->MapClass_field_0x13C; /*0x565bdd*/
        v6 = (CellClass *)result[v3]; /*0x565be3*/
        if ( v6 ) /*0x565be8*/
          result = CellClass::Construct(v6); /*0x565bea*/
      }
      ++v3; /*0x565bef*/
      ++v2; /*0x565bf2*/
      --v4; /*0x565bf3*/
    }
    while ( v4 ); /*0x565bf4*/
  }
  while ( v2 < 0x40000 ); /*0x565bfc*/
  return result; /*0x565bfe*/
}



// ==== 0x00565C10  MapClass::UpdateTerrainAndWaypoints  this=MapClass  sig=csp ====
void __thiscall CellClass::UpdateTerrainAndWaypoints(MapClass *this, _DWORD *a2, int jj, char a4, char a5)
{
  int v6; // edi
  int v7; // esi
  __int16 v8; // si
  void *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  void *v13; // eax
  int v14; // esi
  _DWORD *v15; // ebp
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // ecx
  _WORD *v19; // eax
  _WORD *v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // esi
  ... [35344 chars total]



// ==== 0x00567110  CellClass::BuildPathfindingGraph  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::BuildPathfindingGraph(CellClass *this)
{
  int v2; // edi
  int v3; // eax
  _BYTE *v4; // ecx
  int v5; // edx
  int v6; // eax
  int *v7; // edi
  int v8; // edi
  int *v9; // ebp

  if ( this->unknown68 ) /*0x567118*/
  {
    __3_YAXPAX_Z((void *)this->unknown68); /*0x567120*/
    this->unknown68 = 0; /*0x567128*/
  }
  if ( this->unknown70 ) /*0x56712b*/
  {
    __3_YAXPAX_Z((void *)this->unknown70); /*0x567133*/
    this->unknown70 = 0; /*0x56713b*/
  }
  v2 = ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1) /*0x56714e*/
     * ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1);
  this->CellClass_field_6C = v2; /*0x567151*/
  v3 = __2_YAPAXI_Z(4 * v2); /*0x56715c*/
  if ( v3 ) /*0x567166*/
  {
    v4 = (_BYTE *)v3; /*0x56716b*/
    if ( v2 - 1 >= 0 ) /*0x56716f*/
    {
      v5 = v2; /*0x567171*/
      do /*0x56717c*/
      {
        *v4 = 7; /*0x567172*/
        v4[1] = 0; /*0x567175*/
        v4 += 4; /*0x567178*/
        --v5; /*0x56717b*/
      }
      while ( v5 ); /*0x56717c*/
    }
  }
  else
  {
    v3 = 0; /*0x567180*/
  }
  this->unknown68 = v3; /*0x567182*/
  this->unknown70 = __2_YAPAXI_Z(10 * this->CellClass_field_6C); /*0x56719c*/
  CellClass::setOverlayType((CellClass *)&stru_87E790.__pad_D8[80], (int)&this->landType); /*0x5671a5*/
  v6 = 0; /*0x5671aa*/
  v7 = &this->sensorsOfHouses[9]; /*0x5671ac*/
  do /*0x5671df*/
  {
    v7 += 6; /*0x5671c7*/
    *(v7 - 6) = 4 * (int)this->radSite * this->radLevel[1] / ((1 << (v6 + 1)) * (1 << (v6 + 1))); /*0x5671d7*/
    ++v6; /*0x5671da*/
  }
  while ( v6 < 3 ); /*0x5671df*/
  MapClass::PostProcessReveal((MapClass *)this, 0); /*0x5671e4*/
  MapClass::ProcessRegion((MapClass *)this); /*0x5671eb*/
  Terrain::ConnectivityGraph((Terrain *)this); /*0x5671f2*/
  v8 = 2; /*0x5671f7*/
  v9 = &this->disguiseAsType_sensors_of_houses[4]; /*0x5671fc*/
  do /*0x567218*/
  {
    (*(void (__thiscall **)(int *))(*v9 + 12))(v9); /*0x567207*/
    Subzone::BuildGraph((Subzone *)this, v8--); /*0x56720d*/
    v9 -= 6; /*0x567213*/
  }
  while ( v8 >= 0 ); /*0x567218*/
  return MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x567224*/
}



// ==== 0x00567230  MapClass::UpdateVisibility  this=MapClass  sig=csp ====
int __thiscall ShroudClass::UpdateVisibility(MapClass *this, int *a2)
{
  void **p_MapClass_field_0xFC; // esi
  void **v4; // eax
  int v5; // eax
  int MapClass_field_0x100; // edx
  void *MapClass_field_0xF4; // ecx
  int v8; // eax
  void *MapClass_field_0x108; // ecx
  void *v10; // eax
  int result; // eax
  int i; // ebp
  House **v13; // esi
  char v14; // bl
  __int16 *v15; // eax
  char IsWithinUsableArea; // al
  int v17[4]; // [esp+Ch] [ebp-10h] BYREF

  p_MapClass_field_0xFC = &this->MapClass_field_0xFC; /*0x56724b*/
  v4 = (void **)ClipRectIntersection(v17, a2, (int *)&this->MapClass_field_0xEC, 0, 0); /*0x567251*/
  *p_MapClass_field_0xFC = *v4; /*0x56725a*/
  this->MapClass_field_0x100 = v4[1]; /*0x56725f*/
  *(_DWORD *)this->__pad_104 = v4[2]; /*0x567265*/
  this->MapClass_field_0x108 = v4[3]; /*0x56726b*/
  v5 = (int)*p_MapClass_field_0xFC; /*0x56726e*/
  if ( (int)*p_MapClass_field_0xFC <= 2 ) /*0x567273*/
    v5 = 2; /*0x567275*/
  MapClass_field_0x100 = (int)this->MapClass_field_0x100; /*0x56727a*/
  *p_MapClass_field_0xFC = (void *)v5; /*0x567280*/
  if ( MapClass_field_0x100 <= 2 ) /*0x567285*/
    MapClass_field_0x100 = 2; /*0x567287*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56728c*/
  this->MapClass_field_0x100 = (void *)MapClass_field_0x100; /*0x567292*/
  v8 = (int)MapClass_field_0xF4 - v5 - 2; /*0x56729a*/
  if ( *(_DWORD *)this->__pad_104 < v8 ) /*0x5672a5*/
    v8 = *(_DWORD *)this->__pad_104; /*0x5672a7*/
  MapClass_field_0x108 = this->MapClass_field_0x108; /*0x5672a9*/
  *(_DWORD *)this->__pad_104 = v8; /*0x5672af*/
  v10 = (void *)(*(_DWORD *)this->__pad_F8 - MapClass_field_0x100 - 6); /*0x5672bd*/
  if ( (int)MapClass_field_0x108 < (int)v10 ) /*0x5672c2*/
    v10 = MapClass_field_0x108; /*0x5672c4*/
  this->MapClass_field_0x108 = v10; /*0x5672cd*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5672d3*/
  result = *(_DWORD *)&stru_A8EB00.?[164]; /*0x5672d8*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x5672e1*/
  {
    v13 = *(House ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x5672f1*/
    v14 = *((_BYTE *)v13 + 981); /*0x5672f8*/
    v15 = (__int16 *)(*(int (__thiscall **)(House **, int **))&(*v13)->__pad_7C[316])(v13, &a2); /*0x5672fe*/
    IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)this, v15, 1); /*0x567307*/
    *((_BYTE *)v13 + 981) = IsWithinUsableArea; /*0x56730e*/
    if ( !v14 /*0x56733f*/
      && IsWithinUsableArea
      && (unsigned __int8)House::IsHumanPlayer(v13[135])
      && (*(int (__thiscall **)(House **))&(*v13)->House_field_0x29[3])(v13) != 6
      && *((_BYTE *)v13 + 144)
      && !*((_BYTE *)v13 + 129) )
    {
      (*(void (__thiscall **)(House **, _DWORD, _DWORD))&(*v13)->__pad_7C[164])(v13, 0, 0); /*0x567351*/
    }
    result = *(_DWORD *)&stru_A8EB00.?[164]; /*0x567357*/
  }
  return result; /*0x567362*/
}



// ==== 0x005673A0  MapClass::RevealArea0  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea0(
        MapClass *this,
        int *a2,
        int a3,
        void *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int result; // eax
  void *MapClass_field_0xF4; // ecx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  #375 *v19; // edi
  int v20; // eax
  int v21; // esi
  char *v22; // ecx
  __int16 v23; // ax
  __int16 v24; // cx
  void *v25; // edx
  int v26; // esi
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  int *v31; // eax
  int v32; // ecx
  void *v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  double v38; // [esp+0h] [ebp-5Ch]
  char *v39; // [esp+18h] [ebp-44h]
  int v40; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v42; // [esp+24h] [ebp-38h]
  int v43; // [esp+24h] [ebp-38h]
  int v44; // [esp+2Ch] [ebp-30h]
  __int16 v45; // [esp+30h] [ebp-2Ch]
  __int16 v46; // [esp+32h] [ebp-2Ah]
  __int16 v47[4]; // [esp+38h] [ebp-24h] BYREF
  int v48; // [esp+40h] [ebp-1Ch]
  __int16 v49; // [esp+48h] [ebp-14h]
  __int16 v50; // [esp+4Ah] [ebp-12h]
  int v51; // [esp+50h] [ebp-Ch] BYREF
  int v52; // [esp+54h] [ebp-8h]
  int v53; // [esp+58h] [ebp-4h]
  int *v54; // [esp+60h] [ebp+4h]
  int *v55; // [esp+60h] [ebp+4h]
  char v56; // [esp+6Ch] [ebp+10h]

  v44 = a2[2] / g_MissionQueueFrame.briefing[272]; /*0x5673b7*/
  v51 = *a2; /*0x5673bf*/
  v52 = a2[1]; /*0x5673c6*/
  v53 = a2[2]; /*0x5673cd*/
  v11 = ZCoordToScreenY(v53); /*0x5673d1*/
  v51 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x5673f8*/
        + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v12 = ZCoordToScreenY(v53); /*0x5673fc*/
  v52 += (((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x56742a*/
        + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8;
  v47[0] = *a2 / 256; /*0x56744d*/
  v13 = v51 / 256; /*0x56745e*/
  v45 = v51 / 256; /*0x567467*/
  v46 = v52 / 256; /*0x56746c*/
  v47[1] = a2[1] / 256; /*0x567475*/
  v49 = v45 - v47[0] - 2; /*0x56749b*/
  v50 = v46 - v47[1] - 2; /*0x5674a7*/
  result = v46; /*0x5674af*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5674b2*/
  v16 = v46 + v45; /*0x5674b8*/
  if ( v16 <= (int)MapClass_field_0xF4 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v45 - v46 >= (int)MapClass_field_0xF4 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v46 - v45; /*0x5674cf*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = *(_DWORD *)this->__pad_F8; /*0x5674d9*/
  if ( v16 > (int)MapClass_field_0xF4 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = a3; /*0x5674ea*/
  if ( !a3 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( a3 >= 11 ) /*0x5674f9*/
    a3 = 10; /*0x567500*/
  v39 = &g_MissionQueueFrame.waypoints[2150]; /*0x567512*/
  v54 = (int *)&g_MissionQueueFrame.waypoints[822]; /*0x56751a*/
  v17 = dword_7ED3D0[a3]; /*0x567528*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && a5 && a3 > 2 ) /*0x56753e*/
  {
    v18 = dword_7ED3C4[a3]; /*0x567540*/
    v17 -= v18; /*0x567547*/
    v39 = (char *)(4 * v18 + 11261072); /*0x567557*/
    v54 = (int *)(4 * v18 + 11259744); /*0x56755b*/
  }
  v19 = (#375 *)a4; /*0x567563*/
  v55 = v54 - 1; /*0x56756c*/
  if ( !a4 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = (int)dword_A83D4C; /*0x567572*/
  if ( !dword_A83D4C ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( a4 != dword_A83D4C ) /*0x56757d*/
  {
    if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & *((_DWORD *)a4 + 5433)) != 0 ) /*0x567595*/
    {
      v19 = (#375 *)dword_A83D4C; /*0x567597*/
      a4 = dword_A83D4C; /*0x567599*/
    }
    if ( v19 != (#375 *)dword_A83D4C ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v19, (#375 *)dword_A83D4C) /*0x5675b2*/
        && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)dword_A83D4C; /*0x5675bc*/
        v19 = (#375 *)dword_A83D4C; /*0x5675c1*/
        a4 = dword_A83D4C; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
LABEL_21:
      result = (int)dword_A83D4C; /*0x5675c9*/
LABEL_22:
      if ( v19 != (#375 *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x5675f1*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5675fd*/
  }
  v20 = v17; /*0x567602*/
  v21 = v17 - 1; /*0x567604*/
  if ( v20 ) /*0x567607*/
  {
    for ( i = v21 + 1; i; --i ) /*0x56760e*/
    {
      v22 = v39; /*0x56761a*/
      v39 += 4; /*0x56761f*/
      v23 = *(_WORD *)v22 + v13; /*0x567626*/
      v24 = v46 + *((_WORD *)v22 + 1); /*0x56762d*/
      LOWORD(v48) = v23; /*0x567635*/
      ++v55; /*0x56763a*/
      v25 = this->MapClass_field_0xF4; /*0x56763e*/
      HIWORD(v48) = v24; /*0x567644*/
      *(_DWORD *)v47 = v48; /*0x567653*/
      v26 = v24 + v23; /*0x567657*/
      if ( v26 > (int)v25 ) /*0x56765c*/
      {
        if ( v23 - v24 >= (int)v25 || v24 - v23 >= (int)v25 ) /*0x567672*/
        {
          LOWORD(v13) = v45; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        LOWORD(v13) = v45; /*0x56767e*/
        if ( v26 > (int)v25 + 2 * *(_DWORD *)this->__pad_F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v23 - v45) > a3 ) /*0x56769e*/
          continue; /*0x56769e*/
        v42 = (__int16)(HIWORD(v48) - v46); /*0x5676bd*/
        __asm { fild [esp+5Ch+var_38] } /*0x5676c1*/
        v43 = (__int16)(v48 - v45); /*0x5676c5*/
        __asm /*0x5676c9*/
        {
          fild [esp+5Ch+var_38]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+5Ch+var_5C]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v38); /*0x5676de*/
        if ( (__int16)Math::RoundToInt(v9) > a3 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v47[0] + (v47[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v47; /*0x567724*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x567729*/
        }
        if ( a8 && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x56773c*/
        {
          LOWORD(v40) = v47[0] - v49 + *(_WORD *)v55; /*0x567765*/
          HIWORD(v40) = v47[1] - v50 + *((_WORD *)v55 + 1); /*0x56776a*/
          v30 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = &g_MissionQueueFrame.briefing[130]; /*0x567794*/
            g_MissionQueueFrame.briefing[139] = v40; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v44 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = (void *)*((__int16 *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !v56 ) /*0x5677d2*/
        {
LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v47, (int)a4); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !a6 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((RadarClass *)v47, (int)a4, 0); /*0x567893*/
                else
                  CellClass::Unshroud((CellClass *)v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == (char *)this->MapClass_field_0xF4 + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == (char *)this->MapClass_field_0xF4 + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = *(_DWORD *)this->__pad_F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != (char *)this->MapClass_field_0xF4 + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(this, &v51, 0, a3 + 3, 0); /*0x5678cf*/
}



// ==== 0x005678E0  MapClass::RevealArea1  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea1(
        MapClass *this,
        int *a2,
        int a3,
        void *a4,
        char a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  signed int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  int result; // eax
  int v20; // edx
  void *MapClass_field_0xF4; // ecx
  int v22; // esi
  char *v23; // ebp
  int v24; // eax
  #375 *v25; // ebx
  char *v26; // ebp
  int v27; // ecx
  int v28; // esi
  char *v29; // ecx
  __int16 v30; // ax
  __int16 v31; // cx
  void *v32; // edx
  int v33; // esi
  unsigned int v34; // edx
  int *v35; // edx
  int *v36; // esi
  unsigned int v37; // eax
  int *v38; // eax
  int v39; // edx
  void *v40; // eax
  unsigned int v41; // edi
  int v42; // ecx
  double v43; // [esp+0h] [ebp-50h]
  char *v44; // [esp+18h] [ebp-38h]
  int v46; // [esp+20h] [ebp-30h]
  int v47; // [esp+24h] [ebp-2Ch]
  int v48; // [esp+24h] [ebp-2Ch]
  int v49; // [esp+2Ch] [ebp-24h]
  __int16 v50; // [esp+30h] [ebp-20h]
  __int16 v51; // [esp+32h] [ebp-1Eh]
  __int16 v52[4]; // [esp+38h] [ebp-18h] BYREF
  int v53; // [esp+40h] [ebp-10h]
  __int16 v54; // [esp+48h] [ebp-8h]
  __int16 v55; // [esp+4Ah] [ebp-6h]
  char v56; // [esp+54h] [ebp+4h]
  int v57; // [esp+60h] [ebp+10h]

  v49 = a2[2] / g_MissionQueueFrame.briefing[272]; /*0x5678f9*/
  v10 = *a2; /*0x5678ff*/
  v11 = a2[1]; /*0x567901*/
  v12 = a2[2]; /*0x567904*/
  v13 = ZCoordToScreenY(v12); /*0x567909*/
  v14 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 31) /*0x567928*/
        + ((int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 4)) << 8)
      + v10;
  v15 = ZCoordToScreenY(v12); /*0x56792a*/
  v16 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 31) /*0x567958*/
              + ((int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 4)) << 8)
            + v11);
  v52[0] = *a2 / 256; /*0x567971*/
  v17 = v14 / 256; /*0x567982*/
  v18 = (BYTE4(v16) + (int)v16) >> 8; /*0x567985*/
  v50 = v17; /*0x56798b*/
  v51 = v18; /*0x567990*/
  v52[1] = a2[1] / 256; /*0x56799d*/
  v54 = v17 - v52[0] - 2; /*0x5679c3*/
  v55 = v18 - v52[1] - 2; /*0x5679d3*/
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x5679eb*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5679f7*/
  }
  result = (__int16)v18; /*0x5679ff*/
  v20 = (__int16)v18 + (__int16)v17; /*0x567a06*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x567a09*/
  if ( v20 <= (int)MapClass_field_0xF4 ) /*0x567a11*/
    return result; /*0x567a11*/
  if ( (__int16)v17 - (__int16)v18 >= (int)MapClass_field_0xF4 ) /*0x567a1d*/
    return result; /*0x567a1d*/
  result = (__int16)v18 - (__int16)v17; /*0x567a23*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x567a27*/
    return result; /*0x567a27*/
  result = *(_DWORD *)this->__pad_F8; /*0x567a2d*/
  if ( v20 > (int)MapClass_field_0xF4 + 2 * result ) /*0x567a38*/
    return result; /*0x567a38*/
  result = a3; /*0x567a3e*/
  if ( !a3 ) /*0x567a44*/
    return result; /*0x567a44*/
  if ( a3 >= 11 ) /*0x567a4d*/
  {
    result = 10; /*0x567a54*/
    a3 = 10; /*0x567a59*/
  }
  v22 = dword_7ED3D0[result]; /*0x567a63*/
  v44 = &g_MissionQueueFrame.waypoints[2150]; /*0x567a6a*/
  v23 = &g_MissionQueueFrame.waypoints[822]; /*0x567a72*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && a5 && result > 2 ) /*0x567a8c*/
  {
    v24 = dword_7ED3C4[result]; /*0x567a8e*/
    v22 -= v24; /*0x567a95*/
    v23 = (char *)(4 * v24 + 11259744); /*0x567a9e*/
    v44 = (char *)(4 * v24 + 11261072); /*0x567aa5*/
  }
  v25 = (#375 *)a4; /*0x567aa9*/
  v26 = v23 - 4; /*0x567aad*/
  if ( !a4 ) /*0x567ab2*/
    goto LABEL_26; /*0x567ab2*/
  result = (int)dword_A83D4C; /*0x567ab4*/
  if ( !dword_A83D4C ) /*0x567abb*/
    goto LABEL_27; /*0x567abb*/
  if ( a4 != dword_A83D4C ) /*0x567abf*/
  {
    if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & *((_DWORD *)a4 + 5433)) != 0 ) /*0x567ad7*/
    {
      v25 = (#375 *)dword_A83D4C; /*0x567ad9*/
      a4 = dword_A83D4C; /*0x567adb*/
    }
    if ( v25 != (#375 *)dword_A83D4C ) /*0x567ae1*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v25, (#375 *)dword_A83D4C) /*0x567af4*/
        && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)dword_A83D4C; /*0x567afe*/
        v25 = (#375 *)dword_A83D4C; /*0x567b03*/
        a4 = dword_A83D4C; /*0x567b05*/
        goto LABEL_27; /*0x567b09*/
      }
LABEL_26:
      result = (int)dword_A83D4C; /*0x567b0b*/
LABEL_27:
      if ( v25 != (#375 *)result ) /*0x567b12*/
        return result; /*0x567b12*/
    }
  }
  v27 = v22; /*0x567b18*/
  v28 = v22 - 1; /*0x567b1a*/
  if ( v27 ) /*0x567b1d*/
  {
    v46 = v28 + 1; /*0x567b24*/
    while ( 1 ) /*0x567b37*/
    {
      v29 = v44; /*0x567b37*/
      v44 += 4; /*0x567b3c*/
      v30 = *(_WORD *)v29 + v17; /*0x567b43*/
      v31 = v51 + *((_WORD *)v29 + 1); /*0x567b4a*/
      v32 = this->MapClass_field_0xF4; /*0x567b4f*/
      LOWORD(v53) = v30; /*0x567b55*/
      v26 += 4; /*0x567b5a*/
      HIWORD(v53) = v31; /*0x567b5d*/
      *(_DWORD *)v52 = v53; /*0x567b6c*/
      v33 = v31 + v30; /*0x567b70*/
      if ( v33 > (int)v32 /*0x567bb8*/
        && v30 - v31 < (int)v32
        && v31 - v30 < (int)v32
        && v33 <= (int)v32 + 2 * *(_DWORD *)this->__pad_F8
        && (int)abs32(v30 - v50) <= a3 )
      {
        v47 = (__int16)(HIWORD(v53) - v51); /*0x567bd7*/
        __asm { fild [esp+50h+var_2C] } /*0x567bdb*/
        v48 = (__int16)(v53 - v50); /*0x567bdf*/
        __asm /*0x567be3*/
        {
          fild [esp+50h+var_2C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+50h+var_50]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v43); /*0x567bf8*/
        if ( (__int16)Math::RoundToInt(v9) <= a3 ) /*0x567c0a*/
        {
          v34 = v52[0] + (v52[1] << 9); /*0x567c21*/
          if ( v34 < 0x40000 && (v35 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v34)) != 0 ) /*0x567c38*/
          {
            v36 = v35; /*0x567c3a*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v52; /*0x567c3e*/
            v36 = &g_MissionQueueFrame.briefing[130]; /*0x567c43*/
          }
          if ( !a8 || !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x567c56*/
            goto LABEL_47; /*0x567c56*/
          LOWORD(v57) = v52[0] - v54 + *(_WORD *)v26; /*0x567c7c*/
          HIWORD(v57) = v52[1] - v55 + *((_WORD *)v26 + 1); /*0x567c81*/
          v37 = (__int16)v57 + (SHIWORD(v57) << 9); /*0x567c8f*/
          if ( v37 >= 0x40000 || (v38 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v37)) == 0 ) /*0x567ca5*/
          {
            g_MissionQueueFrame.briefing[139] = v57; /*0x567cab*/
            v38 = &g_MissionQueueFrame.briefing[130]; /*0x567cb0*/
          }
          if ( *((char *)v38 + 283) <= v49 + 3 ) /*0x567cc5*/
          {
LABEL_47:
            v39 = *((__int16 *)v36 + 18); /*0x567cd5*/
            v40 = (void *)*((__int16 *)v36 + 19); /*0x567cd9*/
            v41 = v36[80] & 0xFFFFFFBF; /*0x567cdd*/
            v36[80] = v41; /*0x567ce2*/
            if ( a7 ) /*0x567ce8*/
            {
              if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36[75] & 8) != 0 ) /*0x567cff*/
                DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v52, (int)a4); /*0x567d10*/
            }
            else
            {
              if ( !v56 ) /*0x567d1d*/
                goto LABEL_60; /*0x567d1d*/
              if ( v39 == 7 ) /*0x567d22*/
              {
                if ( v40 == (char *)this->MapClass_field_0xF4 + 5 ) /*0x567d2f*/
                  goto LABEL_61; /*0x567d2f*/
              }
              else if ( v39 == 13 && v40 == (char *)this->MapClass_field_0xF4 + 11 ) /*0x567d43*/
              {
                goto LABEL_61; /*0x567d43*/
              }
              v42 = *(_DWORD *)this->__pad_F8; /*0x567d45*/
              if ( v39 != v42 + 13 || v40 != (char *)this->MapClass_field_0xF4 + v42 - 15 ) /*0x567d5e*/
LABEL_60:
                Conditions::CheckResult3((RadarClass *)v52, (int)a4, a9); /*0x567d60*/
            }
          }
        }
      }
LABEL_61:
      result = --v46; /*0x567d79*/
      if ( !v46 ) /*0x567d82*/
        return result; /*0x567d82*/
      LOWORD(v17) = v50; /*0x567b2a*/
    }
  }
  return result; /*0x567d88*/
}



// ==== 0x00567DA0  MapClass::RevealArea2  this=MapClass  sig=csp ====
int __thiscall MapClass::RevealArea2(MapClass *this, int *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  signed int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  char *v16; // ebp
  __int64 v17; // rax
  int v18; // esi
  int v19; // edi
  char *v20; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  int *v24; // eax
  int *v25; // ebx
  char AdjacentPassableMask; // al
  int v28; // [esp+Ch] [ebp+8h]
  int v29; // [esp+10h] [ebp+Ch]

  v5 = a4; /*0x567da1*/
  if ( a4 <= 11 ) /*0x567dac*/
  {
    if ( a4 < 3 ) /*0x567db8*/
      v5 = 3; /*0x567dba*/
  }
  else
  {
    v5 = 11; /*0x567dae*/
  }
  v6 = a3; /*0x567dbf*/
  if ( a3 < 0 ) /*0x567dc5*/
  {
    v7 = dword_7ED3D0[v5]; /*0x567dc7*/
    a3 = 0; /*0x567dce*/
    goto LABEL_10; /*0x567dd6*/
  }
  if ( a3 > 8 ) /*0x567ddb*/
  {
    a3 = 8; /*0x567de1*/
    v6 = 8; /*0x567de9*/
LABEL_9:
    v7 = dword_7ED3D0[v5] - dword_7ED3CC[v6]; /*0x567ded*/
    goto LABEL_10; /*0x567dfb*/
  }
  if ( a3 ) /*0x567efd*/
    goto LABEL_9; /*0x567efd*/
  v7 = dword_7ED3D0[v5]; /*0x567f03*/
LABEL_10:
  v29 = v7; /*0x567dfd*/
  result = a5; /*0x567e01*/
  if ( !a5 ) /*0x567e0b*/
  {
    v9 = *a2; /*0x567e15*/
    v10 = a2[1]; /*0x567e17*/
    v11 = a2[2]; /*0x567e1a*/
    v12 = ZCoordToScreenY(v11); /*0x567e1f*/
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x567e3e*/
          + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
        + v9;
    v14 = ZCoordToScreenY(v11); /*0x567e40*/
    v15 = (int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4; /*0x567e52*/
    v16 = &g_MissionQueueFrame.waypoints[2150]; /*0x567e57*/
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10); /*0x567e73*/
    v18 = v13 / 256; /*0x567e82*/
    v19 = (BYTE4(v17) + (int)v17) >> 8; /*0x567e85*/
    if ( a3 ) /*0x567e8a*/
      v16 = (char *)(4 * dword_7ED3CC[a3] + 11261072); /*0x567e93*/
    for ( result = v29 - 1; v29; --v29 ) /*0x567ea3*/
    {
      v20 = v16; /*0x567eae*/
      v16 += 4; /*0x567eb0*/
      HIWORD(v28) = v19 + *((_WORD *)v20 + 1); /*0x567ec0*/
      LOWORD(v28) = v18 + *(_WORD *)v20; /*0x567ec5*/
      v21 = SHIWORD(v28) << 9; /*0x567ed4*/
      v22 = (__int16)v28 + v21 < 0; /*0x567ed7*/
      v23 = (__int16)v28 + v21; /*0x567ed7*/
      a5 = v28; /*0x567ed9*/
      if ( v22 || v23 >= 0x40000 || (v24 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v23)) == 0 ) /*0x567ef5*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x567f0f*/
        v25 = &g_MissionQueueFrame.briefing[130]; /*0x567f15*/
      }
      else
      {
        v25 = v24; /*0x567ef7*/
      }
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&a5, 0); /*0x567f27*/
      if ( AdjacentPassableMask != *((_BYTE *)v25 + 288) ) /*0x567f32*/
      {
        *((_BYTE *)v25 + 288) = AdjacentPassableMask; /*0x567f34*/
        *((_BYTE *)v25 + 312) = 1; /*0x567f3a*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v25); /*0x567f48*/
      }
      result = v29 - 1; /*0x567f51*/
    }
  }
  return result; /*0x567f61*/
}



// ==== 0x00567F70  TActionClass_Helper  this=-  sig=csp ====
int __stdcall sub_567F70(int *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int result; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  __int16 v20; // [esp+14h] [ebp-8h]
  __int16 v21; // [esp+16h] [ebp-6h]
  int v22; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x567f7a*/
  v3 = a1[1]; /*0x567f7c*/
  v4 = a1[2]; /*0x567f7f*/
  v5 = ZCoordToScreenY(v4); /*0x567f84*/
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x567fa3*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x567fa5*/
  v8 = a2; /*0x567fb5*/
  v20 = v6 / 256; /*0x567fd6*/
  v9 = -2 - a2; /*0x567fee*/
  v21 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x567ff0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x567ff5*/
  result = a2 + 2; /*0x567ff7*/
  if ( -2 - a2 < a2 + 2 ) /*0x568000*/
  {
    v12 = dword_87F924; /*0x568006*/
    do /*0x568130*/
    {
      if ( v9 < result ) /*0x56800f*/
      {
        v13 = v10 * v10; /*0x56801a*/
        v14 = (v8 + 1) * (v8 + 1); /*0x56801d*/
        while ( 1 ) /*0x56802a*/
        {
          if ( v13 + v9 * v9 < v14 ) /*0x568033*/
          {
            HIWORD(v22) = v9 + v21; /*0x568045*/
            LOWORD(v22) = v10 + v20; /*0x56804a*/
            v15 = ((__int16)(v9 + v21) << 9) + (__int16)(v10 + v20); /*0x56805c*/
            if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x56806e*/
            {
              dword_ABDC74 = v22; /*0x568070*/
              v16 = unk_ABDC50; /*0x568076*/
            }
            if ( !v16[76] ) /*0x56807b*/
            {
              if ( v15 >= 0x40000 || (v17 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x568098*/
              {
                dword_ABDC74 = v22; /*0x56809a*/
                v17 = unk_ABDC50; /*0x5680a0*/
              }
              v17[76] = 1; /*0x5680a7*/
              if ( v15 >= 0x40000 || (v18 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                dword_ABDC74 = v22; /*0x5680c7*/
                v18 = unk_ABDC50; /*0x5680cd*/
              }
              v18[75] &= ~8u; /*0x5680dd*/
              if ( v15 >= 0x40000 || (v19 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                dword_ABDC74 = v22; /*0x5680f9*/
                v19 = unk_ABDC50; /*0x5680ff*/
              }
              v19[75] &= ~0x10u; /*0x56810d*/
              v12 = dword_87F924; /*0x568113*/
            }
          }
          v8 = a2; /*0x568119*/
          ++v9; /*0x56811d*/
          result = a2 + 2; /*0x56811e*/
          if ( v9 >= a2 + 2 ) /*0x568123*/
            break; /*0x568123*/
          v13 = v10 * v10; /*0x568026*/
        }
        v9 = -2 - a2; /*0x568129*/
      }
      ++v10; /*0x56812d*/
    }
    while ( v10 < result ); /*0x568130*/
  }
  return result; /*0x568137*/
}



// ==== 0x00568140  sub_568140  this=-  sig=csp ====
int __stdcall sub_568140(int *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  __int16 v19; // [esp+14h] [ebp-8h]
  __int16 v20; // [esp+16h] [ebp-6h]
  int v21; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x56814a*/
  v3 = a1[1]; /*0x56814c*/
  v4 = a1[2]; /*0x56814f*/
  v5 = ZCoordToScreenY(v4); /*0x568154*/
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x568173*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x568175*/
  v8 = a2; /*0x568185*/
  v19 = v6 / 256; /*0x5681a6*/
  v9 = -2 - a2; /*0x5681be*/
  v20 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x5681c0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x5681c5*/
  for ( result = a2 + 2; v10 < result; ++v10 ) /*0x5681d0*/
  {
    if ( v9 < result ) /*0x5681db*/
    {
      v12 = v10 * v10; /*0x5681e6*/
      v13 = (v8 + 1) * (v8 + 1); /*0x5681e9*/
      do /*0x5682e1*/
      {
        if ( v12 + v9 * v9 < v13 ) /*0x5681f9*/
        {
          LOWORD(v21) = v10 + v19; /*0x56820c*/
          HIWORD(v21) = v9 + v20; /*0x568211*/
          v14 = ((__int16)(v9 + v20) << 9) + (__int16)(v10 + v19); /*0x568223*/
          if ( v14 >= 0x40000 || (v15 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56823b*/
          {
            dword_ABDC74 = v21; /*0x56823d*/
            v15 = unk_ABDC50; /*0x568243*/
          }
          v15[76] = 0; /*0x56824a*/
          if ( v14 >= 0x40000 || (v16 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x568264*/
          {
            dword_ABDC74 = v21; /*0x568266*/
            v16 = unk_ABDC50; /*0x56826c*/
          }
          v16[77] = 0; /*0x568273*/
          if ( v14 >= 0x40000 || (v17 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56828d*/
          {
            dword_ABDC74 = v21; /*0x56828f*/
            v17 = unk_ABDC50; /*0x568295*/
          }
          v17[75] |= 0x10u; /*0x56829a*/
          if ( v14 >= 0x40000 || (v18 = *(_DWORD **)(dword_87F924 + 4 * v14)) == 0 ) /*0x5682b7*/
          {
            dword_ABDC74 = v21; /*0x5682b9*/
            v18 = unk_ABDC50; /*0x5682bf*/
          }
          v12 = v10 * v10; /*0x5682ca*/
          v18[75] |= 8u; /*0x5682d1*/
          v8 = a2; /*0x5682d7*/
        }
        ++v9; /*0x5682db*/
        result = v8 + 2; /*0x5682dc*/
      }
      while ( v9 < v8 + 2 ); /*0x5682e1*/
      v9 = -2 - a2; /*0x5682e7*/
    }
  }
  return result; /*0x5682f5*/
}



// ==== 0x00568300  LayerClass::CoordinatesLegal  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CoordinatesLegal(LayerClass *this, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  v2 = *((_DWORD *)this + 61); /*0x568304*/
  v3 = *a2; /*0x56830c*/
  result = a2[1]; /*0x56830f*/
  v5 = result + v3; /*0x568313*/
  LOBYTE(result) = result + v3 > v2 /*0x56833f*/
                && v3 - result < v2
                && (result -= v3, result < v2)
                && (result = *((_DWORD *)this + 62), v5 <= v2 + 2 * result);
  return result; /*0x568337*/
}



// ==== 0x00568350  Tactical::IsCellVisible  this=Tactical  sig=csp ====
int __thiscall Tactical::IsCellVisible(Tactical *this, _DWORD *a2)
{
  void *Tactical_field_0xF4; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  Tactical_field_0xF4 = this->Tactical_field_0xF4; /*0x56836f*/
  v3 = (__int16)(*a2 / 256); /*0x56837b*/
  result = (__int16)(a2[1] / 256); /*0x56837e*/
  v5 = result + v3; /*0x568381*/
  LOBYTE(result) = result + v3 > (int)Tactical_field_0xF4 /*0x5683ad*/
                && v3 - result < (int)Tactical_field_0xF4
                && (result -= v3, result < (int)Tactical_field_0xF4)
                && (result = (int)this->Tactical_field_0xF8, v5 <= (int)Tactical_field_0xF4 + 2 * result);
  return result; /*0x5683a5*/
}



// ==== 0x005683C0  MapClass::FillRevealBuffer  this=MapClass  sig=csp ====
int __thiscall MapClass::FillRevealBuffer(MapClass *this, _WORD *a2, _BYTE *a3)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // ebp
  _WORD *v12; // ebx
  __int16 v13; // cx
  int v14; // esi
  __int16 v15; // ax
  int v16; // edi
  __int16 v17; // bx
  __int16 v18; // bp
  int v19; // edx
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // ecx
  int *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edx
  int *v28; // eax
  _DWORD *v29; // edx
  int v30; // edx
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+10h] [ebp-8A0h]
  int v33; // [esp+10h] [ebp-8A0h]
  int v34; // [esp+14h] [ebp-89Ch]
  int v35; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v38; // [esp+20h] [ebp-890h]
  _BYTE *v39; // [esp+24h] [ebp-88Ch]
  int v40; // [esp+28h] [ebp-888h]
  _WORD *v41; // [esp+2Ch] [ebp-884h]
  _BYTE v42[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v43[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x5683d1*/
  if ( !a3 ) /*0x5683d9*/
    return result; /*0x5683d9*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x5683e9*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 136))(a3); /*0x5683ed*/
  if ( !*(_BYTE *)(result + 565) ) /*0x5683f3*/
    return result; /*0x5683f3*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 120))(a3); /*0x568405*/
  if ( result != 2 ) /*0x56840b*/
    return result; /*0x56840b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a3 + 264))(a3, 0); /*0x56841c*/
  sub_48DEE0(v5, 32, (int)v42); /*0x568429*/
  v6 = v42; /*0x56842e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568440*/
  {
    LOWORD(v34) = *a2 + *v6; /*0x56845b*/
    HIWORD(v34) = a2[1] + v6[1]; /*0x568463*/
    v7 = (SHIWORD(v34) << 9) + (__int16)v34; /*0x56846e*/
    if ( v7 >= 0 /*0x568489*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x56849e*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684a6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5684ac*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5684a0*/
      }
      CellClass::AddContent((int)v9, a3, a3[140]); /*0x5684bb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x5684db*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684f9*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x5684ff*/
        v4 = this; /*0x568504*/
        goto LABEL_17; /*0x568504*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x5684e1*/
      v4 = this; /*0x5684e6*/
      v6 += 2; /*0x5684ea*/
    }
    else
    {
LABEL_17:
      v6 += 2; /*0x568508*/
    }
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3); /*0x568514*/
  if ( result == 6 )
  {
    v39 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 6 ? a3 : 0;
    result = *((_DWORD *)v39 + 328); /*0x568536*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v11 = *(_DWORD *)(result + 3832) - 1; /*0x568550*/
      v35 = v11; /*0x568553*/
      if ( v11 <= 0 ) /*0x568557*/
      {
        v35 = 1; /*0x568559*/
        v11 = 1; /*0x568561*/
      }
      v12 = v42; /*0x568573*/
      memset(v43, 0, sizeof(v43)); /*0x568577*/
      while ( 1 )
      {
        v13 = *v12; /*0x568579*/
        v41 = v12; /*0x56857c*/
        if ( *v12 == 0x7FFF && v12[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v14 = v13; /*0x56859b*/
        LOWORD(v38) = *a2 + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        HIWORD(v38) = v15 + a2[1]; /*0x5685b1*/
        v31 = v38; /*0x5685bc*/
        v16 = v15; /*0x5685c0*/
        if ( v11 > 0 )
        {
          v17 = v15 + a2[1]; /*0x5685c9*/
          v40 = v11; /*0x5685d0*/
          v18 = *a2 + v13; /*0x5685d4*/
          v19 = 16 * v15; /*0x5685d9*/
          do
          {
            if ( v18 >= 0 && v17 >= 0 )
            {
              v20 = v14 + (v14 < 0 ? 0x10 : 0);
              if ( v16 < 0 ) /*0x5685f7*/
              {
                v16 += 16; /*0x5685f9*/
                v19 += 256; /*0x5685fc*/
              }
              if ( !v43[v19 + v20] ) /*0x568605*/
              {
                v43[v19 + v20] = 1; /*0x56861a*/
                v21 = (v17 << 9) + v18; /*0x568623*/
                if ( v21 >= 0 && v21 < MapClass_field_0x140 ) /*0x56862d*/
                {
                  v22 = this->MapClass_field_0x13C; /*0x568633*/
                  if ( v22[v21] ) /*0x568639*/
                  {
                    if ( v21 >= 0x40000 || (v23 = (int *)v22[v21]) == 0 ) /*0x56864f*/
                    {
                      g_MissionQueueFrame.briefing[139] = v31; /*0x568655*/
                      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56865a*/
                    }
                    ++v23[64]; /*0x56865f*/
                  }
                }
              }
              --v18; /*0x568665*/
              --v17; /*0x568667*/
              v14 = v20 - 1; /*0x568669*/
              --v16; /*0x56866a*/
              LOWORD(v31) = v18; /*0x56866b*/
              HIWORD(v31) = v17; /*0x568670*/
              v19 -= 16; /*0x568675*/
            }
            --v40; /*0x56867d*/
          }
          while ( v40 );
          v11 = v35; /*0x568687*/
          v12 = v41; /*0x56868b*/
        }
        v12 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v25 = *((_DWORD *)v39 + 328); /*0x5686a2*/
        if ( *(_DWORD *)(i + v25 + 5668) != 0xFFFF || *(_DWORD *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          LOWORD(v32) = *(_WORD *)(i + v25 + 5668) + *(_DWORD *)a2; /*0x5686df*/
          HIWORD(v32) = *(_WORD *)(i + v25 + 5672) + HIWORD(*(_DWORD *)a2); /*0x5686e4*/
          v26 = (__int16)v32 + (SHIWORD(v32) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < MapClass_field_0x140 ) /*0x5686f9*/
          {
            v27 = this->MapClass_field_0x13C; /*0x5686ff*/
            if ( v27[v26] ) /*0x568705*/
            {
              if ( v26 >= 0x40000 ) /*0x568715*/
              {
                g_MissionQueueFrame.briefing[139] = v32; /*0x568721*/
                v28 = &g_MissionQueueFrame.briefing[130]; /*0x568726*/
              }
              else
              {
                v28 = (int *)v27[v26]; /*0x568717*/
              }
              ++v28[64]; /*0x56872b*/
            }
          }
        }
        result = *((_DWORD *)v39 + 328); /*0x568735*/
        if ( *(_DWORD *)(i + result + 5732) != 0xFFFF || *(_DWORD *)(i + result + 5736) != 0xFFFF ) /*0x56874b*/
        {
          LOWORD(v33) = *(_WORD *)(i + result + 5732) + *(_DWORD *)a2; /*0x568776*/
          HIWORD(v33) = *(_WORD *)(i + result + 5736) + HIWORD(*(_DWORD *)a2); /*0x56877b*/
          result = (__int16)v33 + (SHIWORD(v33) << 9); /*0x568786*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568790*/
          {
            v29 = this->MapClass_field_0x13C; /*0x568796*/
            if ( v29[result] ) /*0x56879c*/
            {
              if ( result >= 0x40000 ) /*0x5687ac*/
              {
                g_MissionQueueFrame.briefing[139] = v33; /*0x5687b8*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x5687bd*/
              }
              else
              {
                result = v29[result]; /*0x5687ae*/
              }
              v30 = *(_DWORD *)(result + 256); /*0x5687c2*/
              if ( v30 ) /*0x5687ca*/
                *(_DWORD *)(result + 256) = v30 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5687df*/
}



// ==== 0x005687F0  MapClass::ApplyOverlayReveal  this=MapClass  sig=csp ====
int __thiscall MapClass::ApplyOverlayReveal(MapClass *this, _WORD *a2, char *a3)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  char *v11; // edx
  int v12; // ebp
  _WORD *v13; // ebx
  __int16 v14; // cx
  int v15; // esi
  __int16 v16; // ax
  int v17; // edi
  __int16 v18; // bx
  __int16 v19; // bp
  int v20; // edx
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int j; // esi
  __int16 v27; // dx
  _DWORD *v28; // ecx
  int v29; // ecx
  int v30; // [esp+10h] [ebp-8A0h]
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+14h] [ebp-89Ch]
  char *v33; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v36; // [esp+20h] [ebp-890h]
  int v37; // [esp+24h] [ebp-88Ch]
  _BYTE *i; // [esp+28h] [ebp-888h]
  int v39; // [esp+2Ch] [ebp-884h]
  _BYTE v40[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v41[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x568801*/
  if ( !a3 ) /*0x568809*/
    return result; /*0x568809*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x568819*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 136))(a3); /*0x56881d*/
  if ( !*(_BYTE *)(result + 565) ) /*0x568823*/
    return result; /*0x568823*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 120))(a3); /*0x568835*/
  if ( result != 2 ) /*0x56883b*/
    return result; /*0x56883b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)a3 + 264))(a3, 0); /*0x56884c*/
  sub_48DEE0(v5, 32, (int)v40); /*0x568859*/
  v6 = v40; /*0x56885e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568870*/
  {
    LOWORD(v32) = *a2 + *v6; /*0x56888b*/
    HIWORD(v32) = a2[1] + v6[1]; /*0x568893*/
    v7 = (SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( v7 >= 0 /*0x5688b9*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x5688ce*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x5688d6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5688dc*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5688d0*/
      }
      CellClass::RemoveContent((int)v9, a3, a3[140]); /*0x5688eb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x56890b*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x568929*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x56892f*/
        v4 = this; /*0x568934*/
        goto LABEL_17; /*0x568934*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x568911*/
      v4 = this; /*0x568916*/
      v6 += 2; /*0x56891a*/
    }
    else
    {
LABEL_17:
      v6 += 2; /*0x568938*/
    }
  }
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 44))(a3); /*0x568944*/
  if ( result == 6 )
  {
    v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 44))(a3) == 6 ? a3 : 0;
    v33 = v11; /*0x568964*/
    result = *((_DWORD *)v11 + 328); /*0x568968*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v12 = *(_DWORD *)(result + 3832) - 1; /*0x568982*/
      v36 = v12; /*0x568985*/
      if ( v12 <= 0 ) /*0x568989*/
      {
        v36 = 1; /*0x56898b*/
        v12 = 1; /*0x568993*/
      }
      v13 = v40; /*0x5689a5*/
      memset(v41, 0, sizeof(v41)); /*0x5689a9*/
      for ( i = v40; ; i = v13 )
      {
        v14 = *v13; /*0x5689af*/
        if ( *v13 == 0x7FFF && v13[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v15 = v14; /*0x5689cd*/
        LOWORD(v37) = *a2 + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        HIWORD(v37) = v16 + a2[1]; /*0x5689e3*/
        v30 = v37; /*0x5689ee*/
        v17 = v16; /*0x5689f2*/
        if ( v12 > 0 )
        {
          v18 = v16 + a2[1]; /*0x5689fb*/
          v39 = v12; /*0x568a02*/
          v19 = *a2 + v14; /*0x568a06*/
          v20 = 16 * v16; /*0x568a0b*/
          do
          {
            if ( v19 >= 0 && v18 >= 0 )
            {
              v21 = v15 + (v15 < 0 ? 0x10 : 0);
              if ( v17 < 0 ) /*0x568a29*/
              {
                v17 += 16; /*0x568a2b*/
                v20 += 256; /*0x568a2e*/
              }
              if ( !v41[v20 + v21] ) /*0x568a37*/
              {
                v41[v20 + v21] = 1; /*0x568a4c*/
                v22 = (v18 << 9) + v19; /*0x568a55*/
                if ( v22 >= 0 && v22 < MapClass_field_0x140 ) /*0x568a5f*/
                {
                  v23 = this->MapClass_field_0x13C; /*0x568a65*/
                  if ( v23[v22] ) /*0x568a6b*/
                  {
                    if ( v22 >= 0x40000 || (v24 = (int *)v23[v22]) == 0 ) /*0x568a81*/
                    {
                      g_MissionQueueFrame.briefing[139] = v30; /*0x568a87*/
                      v24 = &g_MissionQueueFrame.briefing[130]; /*0x568a8c*/
                    }
                    v25 = v24[64]; /*0x568a91*/
                    if ( v25 ) /*0x568a99*/
                      v24[64] = v25 - 1; /*0x568a9c*/
                  }
                }
              }
              --v19; /*0x568aa2*/
              --v18; /*0x568aa4*/
              v15 = v21 - 1; /*0x568aa6*/
              --v17; /*0x568aa7*/
              LOWORD(v30) = v19; /*0x568aa8*/
              HIWORD(v30) = v18; /*0x568aad*/
              v20 -= 16; /*0x568ab2*/
            }
            --v39; /*0x568aba*/
          }
          while ( v39 );
          v12 = v36; /*0x568ac4*/
          v13 = i; /*0x568ac8*/
        }
        v11 = v33; /*0x568acc*/
        v13 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        result = *((_DWORD *)v11 + 328); /*0x568ae3*/
        if ( *(_DWORD *)(j + result + 5668) != 0xFFFF || *(_DWORD *)(j + result + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v27 = *(_WORD *)(j + result + 5672) + HIWORD(*(_DWORD *)a2); /*0x568b1c*/
          LOWORD(v31) = *(_WORD *)(j + result + 5668) + *(_DWORD *)a2; /*0x568b24*/
          result = (__int16)v31 + (v27 << 9); /*0x568b32*/
          HIWORD(v31) = v27; /*0x568b34*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568b41*/
          {
            v28 = this->MapClass_field_0x13C; /*0x568b47*/
            if ( v28[result] ) /*0x568b4d*/
            {
              if ( result >= 0x40000 ) /*0x568b5d*/
              {
                g_MissionQueueFrame.briefing[139] = v31; /*0x568b69*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x568b6e*/
              }
              else
              {
                result = v28[result]; /*0x568b5f*/
              }
              v29 = *(_DWORD *)(result + 256); /*0x568b73*/
              if ( v29 ) /*0x568b7b*/
                *(_DWORD *)(result + 256) = v29 - 1; /*0x568b7e*/
            }
          }
          v11 = v33; /*0x568b84*/
        }
      }
    }
  }
  return result; /*0x568b94*/
}



// ==== 0x00568BB0  MapClass::PostProcessReveal  this=MapClass  sig=csp ====
int __thiscall MapClass::PostProcessReveal(MapClass *this, char a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _BYTE *v5; // ecx
  void *MapClass_field_0xF4; // eax
  int i; // eax
  void *v8; // eax
  int j; // esi
  TagClass *v10; // eax
  int k; // edx
  unsigned int v12; // eax
  int *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  int *v16; // eax
  int updated; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x568bba*/
  v20 = 0; /*0x568bc1*/
  if ( dword_A8E9B8 > 0 ) /*0x568bce*/
  {
    v4 = dword_A8E9AC; /*0x568bd0*/
    do /*0x568bfb*/
    {
      v5 = (_BYTE *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = dword_A8E9AC; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < dword_A8E9B8 ); /*0x568bfb*/
  }
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x568bfd*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c03*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x568c09*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x568c12*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x568c27*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c34*/
    *(_DWORD *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = this->MapClass_field_0xF4; /*0x568c54*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c5a*/
  *(_DWORD *)&this->__pad_10C[4] = v8; /*0x568c60*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)v8 - 1; /*0x568c69*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)v8 + 4; /*0x568c7e*/
  for ( j = LayerClass::CellIteratorNext((LayerClass *)this); j; j = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c8d*/
  {
    *(_DWORD *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView((int *)j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(TagClass **)(j + 60); /*0x568cc4*/
    *(_DWORD *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < *(int *)&stru_87F5F0.__pad_58[716]; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          HIWORD(v21) = *(_WORD *)(j + 38); /*0x568d01*/
          LOWORD(v21) = k + *(_DWORD *)&this->__pad_10C[24]; /*0x568d09*/
          v12 = (__int16)v21 + (SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_MissionQueueFrame.briefing[139] = v21; /*0x568d30*/
            v13 = &g_MissionQueueFrame.briefing[130]; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( TagClass::HasCrossesVerticalLineEvent(*(TagClass **)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < *(int *)&stru_87F5F0.__pad_58[720]; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          LOWORD(v22) = *(_WORD *)(j + 36); /*0x568d7b*/
          HIWORD(v22) = (_WORD)this->MapClass_field_0x128 + m; /*0x568d80*/
          v15 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_MissionQueueFrame.briefing[139] = v22; /*0x568daa*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
    if ( a2 ) /*0x568dd2*/
      updated = ObjectClass::UpdateTiberiumGrowth(j, 0); /*0x568dd8*/
    else
      updated = Building::GetNthOfType((Building *)j); /*0x568de1*/
    v20 += updated; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
    v18 = *(_DWORD *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}



// ==== 0x00568E40  Terrain::PlaceCliffs  this=Terrain  sig=csp ====
void __thiscall Terrain::PlaceCliffs(Terrain *this, int a2, int a3, int *a4)
{
  unsigned int v5; // eax
  int *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  int *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int v23; // edi
  int m_8; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  int *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  int *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  int *v43; // eax
  int *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  #374 *v50; // eax
  #374 *v51; // eax
  int v52; // eax
  int v53; // eax
  int *v54; // eax
  unsigned int v55; // edx
  int *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  int *v64; // [esp+14h] [ebp-60h]
  int v65; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  int v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  int v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  __int16 v71[2]; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  _VectorClass_VCell v81; // [esp+5Ch] [ebp-18h] BYREF
  int v82; // [esp+70h] [ebp-4h]
  int v83; // [esp+78h] [ebp+4h]
  int v84; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x568e4b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)(a2 + 36); /*0x568e8a*/
    v64 = &g_MissionQueueFrame.briefing[130]; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor((VectorClass *)&v81, 0, 0); /*0x568ea5*/
  v7 = g_TerrainSoundTable2; /*0x568eae*/
  v8 = g_TerrainSoundConfig; /*0x568eb4*/
  *(_DWORD *)v81.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x568ebd*/
  v82 = 10; /*0x568ec5*/
  *(_DWORD *)v81.__tail_10 = 0; /*0x568ed4*/
  for ( i = 1; i < 30; ++i ) /*0x568edc*/
  {
    v65 = v64[9]; /*0x568ef3*/
    LOWORD(v67) = LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + v65; /*0x568f06*/
    HIWORD(v67) = HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + HIWORD(v65); /*0x568f0e*/
    v9 = SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (__int16)v67 + v9 < 0; /*0x568f1d*/
    v11 = (__int16)v67 + v9; /*0x568f1d*/
    *(_DWORD *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) == 0 ) /*0x568f37*/
    {
      g_MissionQueueFrame.briefing[139] = v67; /*0x568f3f*/
      v64 = &g_MissionQueueFrame.briefing[130]; /*0x568f45*/
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = v64[14] - g_Cell_BuildabilityLUT + 1; /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != dword_ABC1E8 || *((_BYTE *)v64 + 282) != 4 ) /*0x568f79*/
      {
        if ( v13 != dword_AA0E38 || *((_BYTE *)v64 + 282) != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 /*0x568fbf*/
            || *((_BYTE *)v64 + 282) != 4 )
          {
            continue; /*0x568fbf*/
          }
          Cell::SetTileType(v77, v7 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x568fdd*/
          v14 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x568fe9*/
          v7 = g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          v15 = v77[0] + (v77[1] << 9); /*0x569018*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x56902e*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x569030*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x569036*/
          }
          *((_BYTE *)v16 + 283) += 4; /*0x569049*/
          v17 = *CellStruct::Add((CellStruct *)v77, &v72, &g_DDrawSurfaceManager.scenario[82]); /*0x56905d*/
          *(_DWORD *)v71 = v17; /*0x56905f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56906e*/
          if ( v18 >= 0x40000 || (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x569084*/
          {
            g_MissionQueueFrame.briefing[139] = v17; /*0x569086*/
            v19 = &g_MissionQueueFrame.briefing[130]; /*0x56908c*/
          }
          *((_BYTE *)v19 + 283) += 4; /*0x56909f*/
          v20 = *CellStruct::Add((CellStruct *)v77, &v73, &g_DDrawSurfaceManager.scenario[86]); /*0x5690b3*/
          *(_DWORD *)v71 = v20; /*0x5690b5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5690c4*/
          if ( v21 >= 0x40000 || (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) == 0 ) /*0x5690da*/
          {
            g_MissionQueueFrame.briefing[139] = v20; /*0x5690dc*/
            v22 = &g_MissionQueueFrame.briefing[130]; /*0x5690e2*/
          }
          v23 = 0; /*0x5690f0*/
          *((_BYTE *)v22 + 283) += 4; /*0x5690f2*/
          m_8 = v81.m_8; /*0x5690f8*/
LABEL_33:
          v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( *(int *)v81.__tail_10 < m_8 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !BYTE1(v81.m_C) && m_8 || v82 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569141*/
                   &v81,
                   v82 + m_8,
                   0) )
            {
LABEL_39:
              v26 = (*(_DWORD *)v81.__tail_10)++; /*0x569150*/
              *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v26) = v68; /*0x56915b*/
            }
            m_8 = v81.m_8; /*0x56915e*/
LABEL_41:
            if ( ++v25 >= 3 ) /*0x569166*/
            {
              if ( ++v23 >= 2 ) /*0x56916c*/
                goto LABEL_43; /*0x56916c*/
              goto LABEL_33; /*0x56916c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x5693de*/
        *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5693fc*/
        v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569401*/
LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5693ca*/
LABEL_85:
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == dword_ABC1D0 && *((_BYTE *)v64 + 282) == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[82]); /*0x56942c*/
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == dword_AA1540 && *((_BYTE *)v64 + 282) == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[82]); /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || *((_BYTE *)v64 + 282) != 2 ) /*0x5691e7*/
      continue; /*0x5691e7*/
    Cell::SetTileType(v77, g_Cell_BuildabilityLUT + v8 - 1, -1, -1, 0); /*0x569200*/
    v27 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x56920c*/
    v8 = g_TerrainSoundConfig; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569226*/
    {
      v7 = g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
    if ( v28 >= 0x40000 || (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) == 0 ) /*0x569251*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x569253*/
      v29 = &g_MissionQueueFrame.briefing[130]; /*0x569259*/
    }
    *((_BYTE *)v29 + 283) += 4; /*0x56926c*/
    v30 = *CellStruct::Add((CellStruct *)v77, &v74, &g_DDrawSurfaceManager.scenario[84]); /*0x569280*/
    *(_DWORD *)v71 = v30; /*0x569282*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569291*/
    if ( v31 >= 0x40000 || (v32 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      g_MissionQueueFrame.briefing[139] = v30; /*0x5692a9*/
      v32 = &g_MissionQueueFrame.briefing[130]; /*0x5692af*/
    }
    *((_BYTE *)v32 + 283) += 4; /*0x5692c2*/
    v33 = *CellStruct::Add((CellStruct *)v77, &v75, &g_DDrawSurfaceManager.scenario[88]); /*0x5692d6*/
    *(_DWORD *)v71 = v33; /*0x5692d8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5692e7*/
    if ( v34 >= 0x40000 || (v35 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      g_MissionQueueFrame.briefing[139] = v33; /*0x5692ff*/
      v35 = &g_MissionQueueFrame.briefing[130]; /*0x569305*/
    }
    v36 = 0; /*0x569313*/
    *((_BYTE *)v35 + 283) += 4; /*0x569315*/
    v37 = v81.m_8; /*0x56931b*/
    do /*0x56938f*/
    {
      v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( *(int *)v81.__tail_10 < v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (BYTE1(v81.m_C) || !v37) && v82 > 0 ) /*0x569355*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569364*/
                 &v81,
                 v82 + v37,
                 0) )
          {
LABEL_75:
            v39 = (*(_DWORD *)v81.__tail_10)++; /*0x56936b*/
            *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v39) = v69; /*0x56937e*/
          }
          v37 = v81.m_8; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x56916e*/
LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569174*/
  }
  if ( i == 30 ) /*0x569473*/
  {
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x569479*/
    Buffer::Cleanup(&v81); /*0x569481*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x5694a6*/
    if ( v42 < 0x40000 && (v43 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)(a2 + 36); /*0x5694c2*/
      v44 = &g_MissionQueueFrame.briefing[130]; /*0x5694c8*/
    }
    v45 = a4; /*0x5694cd*/
    if ( a4 ) /*0x5694d6*/
    {
      v83 = *(_DWORD *)(a2 + 36); /*0x5694e7*/
      v78 = ((__int16)*(_DWORD *)(a2 + 36) << 8) + 128; /*0x5694f0*/
      v46 = g_MissionQueueFrame.briefing[272] * *(char *)(a2 + 283); /*0x5694fb*/
      v79 = (SHIWORD(v83) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      *v45 = v75; /*0x56952f*/
      v45[1] = v47; /*0x569532*/
    }
    if ( i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        v49 = v44[14] - g_Cell_BuildabilityLUT + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (*((_BYTE *)v44 + 282) & 1) != 0) /*0x569570*/
          && (v49 != g_TerrainSoundConfig || *((_BYTE *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569580*/
            if ( v50 ) /*0x56958a*/
            {
              a4 = (int *)v44[9]; /*0x569596*/
              Object::SpawnAtCell(v50, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 96), (__int16 *)&a4, -1); /*0x5695a9*/
            }
          }
          else
          {
            v51 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5695ab*/
            if ( v51 ) /*0x5695b5*/
            {
              *(_DWORD *)v71 = v44[9]; /*0x5695be*/
              Object::SpawnAtCell(v51, *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 100), v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = v44[9]; /*0x5695dd*/
        LOWORD(v84) = LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + v70; /*0x5695f0*/
        HIWORD(v84) = HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]) + HIWORD(v70); /*0x5695f8*/
        v52 = SHIWORD(v84) << 9; /*0x569604*/
        v10 = (__int16)v84 + v52 < 0; /*0x569607*/
        v53 = (__int16)v84 + v52; /*0x569607*/
        *(_DWORD *)v77 = v84; /*0x569609*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v53)) == 0 ) /*0x569621*/
        {
          g_MissionQueueFrame.briefing[139] = v84; /*0x569627*/
          v44 = &g_MissionQueueFrame.briefing[130]; /*0x56962d*/
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        --v48; /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569652*/
      if ( v55 >= 0x40000 || (v56 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v55)) == 0 ) /*0x569669*/
      {
        g_MissionQueueFrame.briefing[139] = *(_DWORD *)v77; /*0x56966b*/
        v56 = &g_MissionQueueFrame.briefing[130]; /*0x569671*/
      }
      v80 = g_MissionQueueFrame.briefing[272] * *((char *)v56 + 283); /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (v77[0] << 8) + 128; /*0x5696a5*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x5696b1*/
      v57 = *v45; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      v59 = v45[1]; /*0x5696bd*/
      v60 = *v45; /*0x5696c2*/
      if ( *v45 >= v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = v45[1]; /*0x5696cb*/
      *v45 = v60 - 64; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45[1] = v61 - 64; /*0x5696e2*/
      v45[2] = abs32(v57 - v58) + 128; /*0x5696ec*/
      v45[3] = abs32(v59 - v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(this); /*0x56970c*/
    if ( *(int *)v81.__tail_10 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v81); /*0x569722*/
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x56972b*/
    if ( *(_DWORD *)&v81.m_1[3] ) /*0x569735*/
    {
      if ( BYTE1(v81.m_C) ) /*0x56973d*/
        __3_YAXPAX_Z(*(void **)&v81.m_1[3]); /*0x569740*/
    }
  }
}



// ==== 0x00569760  ObjectClass::DestroyCliffMap  this=ObjectClass  sig=csp ====
void __thiscall DestroyCliffMap(TechnoClass *this, int a2, int a3, int *a4)
{
  unsigned int v5; // eax
  CellClass *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  CellClass *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  CellClass *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  CellClass *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  CellClass *v22; // eax
  int v23; // edi
  int m_8; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  CellClass *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  CellClass *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  CellClass *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  CellClass *v43; // eax
  CellClass *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  Object *v50; // eax
  Object *v51; // eax
  int v52; // eax
  int v53; // eax
  CellClass *v54; // eax
  unsigned int v55; // edx
  CellClass *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  CellClass *v64; // [esp+14h] [ebp-60h]
  int smudgeTypeIndex; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  int v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  int v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  __int16 v71[2]; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  _VectorClass_VCell v81; // [esp+5Ch] [ebp-18h] BYREF
  int v82; // [esp+70h] [ebp-4h]
  int v83; // [esp+78h] [ebp+4h]
  int v84; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = dword_ABD480; /*0x56976b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x56978c*/
  if ( v5 < 0x40000 && (v6 = *(CellClass **)(dword_87F924 + 4 * v5)) != 0 ) /*0x5697a2*/
  {
    v64 = v6; /*0x5697a4*/
  }
  else
  {
    dword_ABDC74 = *(_DWORD *)(a2 + 36); /*0x5697aa*/
    v64 = &unk_ABDC50; /*0x5697b0*/
  }
  v63 = 0; /*0x5697c0*/
  VectorClass::CellConstructor((VectorClass *)&v81, 0, 0); /*0x5697c5*/
  v7 = g_TerrainSoundTable2; /*0x5697ce*/
  v8 = g_TerrainSoundConfig; /*0x5697d4*/
  *(_DWORD *)v81.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5697dd*/
  v82 = 10; /*0x5697e5*/
  *(_DWORD *)v81.__tail_10 = 0; /*0x5697f4*/
  for ( i = 1; i < 30; ++i ) /*0x5697fc*/
  {
    smudgeTypeIndex = v64->smudgeTypeIndex; /*0x569813*/
    LOWORD(v67) = LOWORD(dword_89F688[a3 & 7]) + smudgeTypeIndex; /*0x569826*/
    HIWORD(v67) = HIWORD(dword_89F688[a3 & 7]) + HIWORD(smudgeTypeIndex); /*0x56982e*/
    v9 = SHIWORD(v67) << 9; /*0x56983a*/
    v10 = (__int16)v67 + v9 < 0; /*0x56983d*/
    v11 = (__int16)v67 + v9; /*0x56983d*/
    *(_DWORD *)v77 = v67; /*0x56983f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) == 0 ) /*0x569857*/
    {
      dword_ABDC74 = v67; /*0x56985f*/
      v64 = &unk_ABDC50; /*0x569865*/
    }
    else
    {
      v64 = v12; /*0x569859*/
    }
    v13 = *(_DWORD *)&v64->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x569880*/
    if ( a3 == 2 ) /*0x569884*/
    {
      if ( v13 != dword_ABC1E8 || v64->height[0] != 4 ) /*0x569899*/
      {
        if ( v13 != dword_AA0E38 || v64->height[0] != 4 ) /*0x5698ae*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 || v64->height[0] != 4 ) /*0x5698df*/
            continue; /*0x5698df*/
          Cell::SetTileType(v77, v7 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x5698fd*/
          v14 = InvalidateTileRegionMap(this, v77); /*0x569909*/
          v7 = g_TerrainSoundTable2; /*0x56990e*/
          v63 |= v14; /*0x56991d*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569923*/
            goto LABEL_44; /*0x569923*/
          v15 = v77[0] + (v77[1] << 9); /*0x569938*/
          if ( v15 >= 0x40000 || (v16 = *(CellClass **)(dword_87F924 + 4 * v15)) == 0 ) /*0x56994e*/
          {
            dword_ABDC74 = *(_DWORD *)v77; /*0x569950*/
            v16 = &unk_ABDC50; /*0x569956*/
          }
          v16->level[0] += 4; /*0x569969*/
          v17 = *CellStruct::Add((CellStruct *)v77, &v72, dword_89F688); /*0x56997d*/
          *(_DWORD *)v71 = v17; /*0x56997f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56998e*/
          if ( v18 >= 0x40000 || (v19 = *(CellClass **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5699a4*/
          {
            dword_ABDC74 = v17; /*0x5699a6*/
            v19 = &unk_ABDC50; /*0x5699ac*/
          }
          v19->level[0] += 4; /*0x5699bf*/
          v20 = *CellStruct::Add((CellStruct *)v77, &v73, &dword_89F698); /*0x5699d3*/
          *(_DWORD *)v71 = v20; /*0x5699d5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5699e4*/
          if ( v21 >= 0x40000 || (v22 = *(CellClass **)(dword_87F924 + 4 * v21)) == 0 ) /*0x5699fa*/
          {
            dword_ABDC74 = v20; /*0x5699fc*/
            v22 = &unk_ABDC50; /*0x569a02*/
          }
          v23 = 0; /*0x569a10*/
          v22->level[0] += 4; /*0x569a12*/
          m_8 = v81.m_8; /*0x569a18*/
LABEL_33:
          v25 = -2; /*0x569a1c*/
          while ( 1 ) /*0x569a2e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x569a2e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569a33*/
            if ( *(int *)v81.__tail_10 < m_8 ) /*0x569a3e*/
              goto LABEL_39; /*0x569a3e*/
            if ( !BYTE1(v81.m_C) && m_8 || v82 <= 0 ) /*0x569a52*/
              goto LABEL_41; /*0x569a52*/
            if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569a61*/
                   &v81,
                   v82 + m_8,
                   0) )
            {
LABEL_39:
              v26 = (*(_DWORD *)v81.__tail_10)++; /*0x569a70*/
              *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v26) = v68; /*0x569a7b*/
            }
            m_8 = v81.m_8; /*0x569a7e*/
LABEL_41:
            if ( ++v25 >= 3 ) /*0x569a86*/
            {
              if ( ++v23 >= 2 ) /*0x569a8c*/
                goto LABEL_43; /*0x569a8c*/
              goto LABEL_33; /*0x569a8c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x569cfe*/
        *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569d1c*/
        v40 = InvalidateTileRegionMap(this, v71); /*0x569d21*/
LABEL_86:
        v63 |= v40; /*0x569d88*/
        break; /*0x569d88*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x569ccc*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569cea*/
LABEL_85:
      v40 = InvalidateTileRegionMap(this, v71); /*0x569d80*/
      goto LABEL_86; /*0x569d83*/
    }
    if ( a3 != 4 ) /*0x569ab4*/
      continue; /*0x569ab4*/
    if ( v13 == dword_ABC1D0 && v64->height[0] == 2 ) /*0x569ac5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d2e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x569d4c*/
      v40 = InvalidateTileRegionMap(this, v71); /*0x569d51*/
      goto LABEL_86; /*0x569d51*/
    }
    if ( v13 == dword_AA1540 && v64->height[0] == 2 ) /*0x569ada*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d5e*/
      *(_DWORD *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x569d7c*/
      goto LABEL_85; /*0x569d7c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || v64->height[0] != 2 ) /*0x569b07*/
      continue; /*0x569b07*/
    Cell::SetTileType(v77, g_TerrainBridgeIndex + v8 - 1, -1, -1, 0); /*0x569b20*/
    v27 = InvalidateTileRegionMap(this, v77); /*0x569b2c*/
    v8 = g_TerrainSoundConfig; /*0x569b35*/
    v63 |= v27; /*0x569b3d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569b46*/
    {
      v7 = g_TerrainSoundTable2; /*0x569cb6*/
      continue; /*0x569cbc*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x569b5b*/
    if ( v28 >= 0x40000 || (v29 = *(CellClass **)(dword_87F924 + 4 * v28)) == 0 ) /*0x569b71*/
    {
      dword_ABDC74 = *(_DWORD *)v77; /*0x569b73*/
      v29 = &unk_ABDC50; /*0x569b79*/
    }
    v29->level[0] += 4; /*0x569b8c*/
    v30 = *CellStruct::Add((CellStruct *)v77, &v74, &dword_89F690); /*0x569ba0*/
    *(_DWORD *)v71 = v30; /*0x569ba2*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569bb1*/
    if ( v31 >= 0x40000 || (v32 = *(CellClass **)(dword_87F924 + 4 * v31)) == 0 ) /*0x569bc7*/
    {
      dword_ABDC74 = v30; /*0x569bc9*/
      v32 = &unk_ABDC50; /*0x569bcf*/
    }
    v32->level[0] += 4; /*0x569be2*/
    v33 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x569bf6*/
    *(_DWORD *)v71 = v33; /*0x569bf8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x569c07*/
    if ( v34 >= 0x40000 || (v35 = *(CellClass **)(dword_87F924 + 4 * v34)) == 0 ) /*0x569c1d*/
    {
      dword_ABDC74 = v33; /*0x569c1f*/
      v35 = &unk_ABDC50; /*0x569c25*/
    }
    v36 = 0; /*0x569c33*/
    v35->level[0] += 4; /*0x569c35*/
    v37 = v81.m_8; /*0x569c3b*/
    do /*0x569caf*/
    {
      v38 = -2; /*0x569c3f*/
      do /*0x569ca9*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569c51*/
        HIWORD(v69) = v36 + v77[1]; /*0x569c56*/
        if ( *(int *)v81.__tail_10 < v37 ) /*0x569c61*/
          goto LABEL_75; /*0x569c61*/
        if ( (BYTE1(v81.m_C) || !v37) && v82 > 0 ) /*0x569c75*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v81.__pad_0 + 8))( /*0x569c84*/
                 &v81,
                 v82 + v37,
                 0) )
          {
LABEL_75:
            v39 = (*(_DWORD *)v81.__tail_10)++; /*0x569c8b*/
            *(_DWORD *)(*(_DWORD *)&v81.m_1[3] + 4 * v39) = v69; /*0x569c9e*/
          }
          v37 = v81.m_8; /*0x569ca1*/
        }
        ++v38; /*0x569ca5*/
      }
      while ( v38 < 3 ); /*0x569ca9*/
      ++v36; /*0x569cab*/
    }
    while ( v36 < 2 ); /*0x569caf*/
LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x569a8e*/
LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569a94*/
  }
  if ( i == 30 ) /*0x569d93*/
  {
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x569d99*/
    Buffer::Cleanup(&v81); /*0x569da1*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x569dc6*/
    if ( v42 < 0x40000 && (v43 = *(CellClass **)(dword_87F924 + 4 * v42)) != 0 ) /*0x569ddc*/
    {
      v44 = v43; /*0x569dde*/
    }
    else
    {
      dword_ABDC74 = *(_DWORD *)(a2 + 36); /*0x569de2*/
      v44 = &unk_ABDC50; /*0x569de8*/
    }
    v45 = a4; /*0x569ded*/
    if ( a4 ) /*0x569df6*/
    {
      v83 = *(_DWORD *)(a2 + 36); /*0x569e07*/
      v78 = ((__int16)*(_DWORD *)(a2 + 36) << 8) + 128; /*0x569e10*/
      v46 = dword_ABDE88 * *(char *)(a2 + 283); /*0x569e1b*/
      v79 = (SHIWORD(v83) << 8) + 128; /*0x569e2e*/
      v80 = v46; /*0x569e36*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569e42*/
      v47 = v76; /*0x569e4b*/
      *v45 = v75; /*0x569e4f*/
      v45[1] = v47; /*0x569e52*/
    }
    if ( i > 0 ) /*0x569e57*/
    {
      v48 = i; /*0x569e5d*/
      do /*0x569f59*/
      {
        v49 = *(_DWORD *)&v44->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x569e74*/
        if ( (v49 != g_TerrainSoundTable2 || (v44->height[0] & 1) != 0) /*0x569e90*/
          && (v49 != g_TerrainSoundConfig || v44->height[0] >= 5u) )
        {
          if ( a3 == 2 ) /*0x569e9e*/
          {
            v50 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x569ea0*/
            if ( v50 ) /*0x569eaa*/
            {
              a4 = (int *)v44->smudgeTypeIndex; /*0x569eb6*/
              Object::SpawnAtCell(v50, dword_A83D84->PitchAngle[1], (__int16 *)&a4, -1); /*0x569ecc*/
            }
          }
          else
          {
            v51 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x569ece*/
            if ( v51 ) /*0x569ed8*/
            {
              *(_DWORD *)v71 = v44->smudgeTypeIndex; /*0x569ee1*/
              Object::SpawnAtCell(v51, dword_A83D84->BuildLimit, v71, -1); /*0x569ef7*/
            }
          }
        }
        v70 = v44->smudgeTypeIndex; /*0x569f03*/
        LOWORD(v84) = LOWORD(dword_89F688[a3 & 7]) + v70; /*0x569f16*/
        HIWORD(v84) = HIWORD(dword_89F688[a3 & 7]) + HIWORD(v70); /*0x569f1e*/
        v52 = SHIWORD(v84) << 9; /*0x569f2a*/
        v10 = (__int16)v84 + v52 < 0; /*0x569f2d*/
        v53 = (__int16)v84 + v52; /*0x569f2d*/
        *(_DWORD *)v77 = v84; /*0x569f2f*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(CellClass **)(dword_87F924 + 4 * v53)) == 0 ) /*0x569f47*/
        {
          dword_ABDC74 = v84; /*0x569f4d*/
          v44 = &unk_ABDC50; /*0x569f53*/
        }
        else
        {
          v44 = v54; /*0x569f49*/
        }
        --v48; /*0x569f58*/
      }
      while ( v48 ); /*0x569f59*/
    }
    if ( v45 ) /*0x569f61*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569f78*/
      if ( v55 >= 0x40000 || (v56 = *(CellClass **)(dword_87F924 + 4 * v55)) == 0 ) /*0x569f8f*/
      {
        dword_ABDC74 = *(_DWORD *)v77; /*0x569f91*/
        v56 = &unk_ABDC50; /*0x569f97*/
      }
      v80 = dword_ABDE88 * v56->level[0]; /*0x569fb5*/
      v79 = (v77[1] << 8) + 128; /*0x569fbf*/
      v78 = (v77[0] << 8) + 128; /*0x569fcb*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569fd7*/
      v57 = *v45; /*0x569fdc*/
      v58 = v75; /*0x569fdf*/
      v59 = v45[1]; /*0x569fe3*/
      v60 = *v45; /*0x569fe8*/
      if ( *v45 >= v75 ) /*0x569fea*/
        v60 = v75; /*0x569fec*/
      v61 = v45[1]; /*0x569ff1*/
      *v45 = v60 - 64; /*0x569ff3*/
      v62 = v76; /*0x569ff6*/
      if ( v59 >= v76 ) /*0x569ffc*/
        v61 = v76; /*0x569ffe*/
      v45[1] = v61 - 64; /*0x56a008*/
      v45[2] = abs32(v57 - v58) + 128; /*0x56a012*/
      v45[3] = abs32(v59 - v62) + 128; /*0x56a023*/
    }
    if ( v63 ) /*0x56a02c*/
      Terrain::ConnectivityGraph((Terrain *)this); /*0x56a032*/
    if ( *(_DWORD *)v81.__tail_10 ) /*0x56a03d*/
      LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v81); /*0x56a048*/
    *(_DWORD *)v81.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x56a051*/
    if ( *(_DWORD *)&v81.m_1[3] ) /*0x56a05b*/
    {
      if ( BYTE1(v81.m_C) ) /*0x56a063*/
        __3_YAXPAX_Z(*(void **)&v81.m_1[3]); /*0x56a066*/
    }
  }
}



// ==== 0x0056A080  ObjectClass::PlaceTerrainCliffsRegion  this=ObjectClass  sig=csp ====
int __thiscall PlaceTerrainCliffsRegion(ObjectClass *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ebp
  unsigned int v10; // eax
  int *v11; // eax
  int *v12; // ebp
  int v13; // ebx
  __int16 v14; // ax
  __int16 v15; // di
  unsigned int v16; // ecx
  int *v17; // ecx
  unsigned int v18; // ecx
  int *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int *v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int *v27; // eax
  _BYTE *v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // [esp+4h] [ebp-34h] BYREF
  int v32; // [esp+8h] [ebp-30h]
  int v33; // [esp+Ch] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-28h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h]
  int v37; // [esp+1Ch] [ebp-1Ch]
  int v38; // [esp+20h] [ebp-18h] BYREF
  int v39; // [esp+24h] [ebp-14h]
  __int16 v40[2]; // [esp+28h] [ebp-10h] BYREF
  int v41; // [esp+2Ch] [ebp-Ch] BYREF
  int v42; // [esp+30h] [ebp-8h] BYREF
  int v43; // [esp+34h] [ebp-4h] BYREF

  result = this->q04A; /*0x56a086*/
  v3 = result + this->q04C; /*0x56a092*/
  v33 = result; /*0x56a094*/
  if ( result < v3 ) /*0x56a09a*/
  {
    v4 = g_TerrainSoundTable2; /*0x56a0a0*/
    v5 = g_TerrainSoundConfig; /*0x56a0a9*/
    do /*0x56a4ab*/
    {
      v6 = this->u32_49; /*0x56a0af*/
      v7 = v6 + *((_DWORD *)this + 75); /*0x56a0bb*/
      v32 = v6; /*0x56a0bd*/
      if ( v6 < v7 ) /*0x56a0c3*/
      {
        v8 = (__int16)result << 9; /*0x56a0cc*/
        v34 = v8; /*0x56a0cf*/
        while ( 1 ) /*0x56a0dd*/
        {
          v9 = this->q04F; /*0x56a0dd*/
          HIWORD(v31) = result; /*0x56a0e3*/
          LOWORD(v31) = v6; /*0x56a0ed*/
          if ( *(_DWORD *)(v9 + 4 * ((__int16)v6 + v8)) ) /*0x56a0f2*/
          {
            v10 = v34 + (__int16)v6; /*0x56a101*/
            if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56a119*/
            {
              v12 = v11; /*0x56a11b*/
            }
            else
            {
              v12 = &g_MissionQueueFrame.briefing[130]; /*0x56a123*/
              g_MissionQueueFrame.briefing[139] = v31; /*0x56a128*/
            }
            v13 = v12[14] - g_Cell_BuildabilityLUT + 1; /*0x56a13c*/
            if ( (v13 == dword_ABC2B4 || v13 == dword_AA1130) && *((_BYTE *)v12 + 282) == 8 ) /*0x56a150*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a159*/
              v4 = g_TerrainSoundTable2; /*0x56a15e*/
              v5 = g_TerrainSoundConfig; /*0x56a164*/
            }
            if ( (v13 == v4 || v13 == v4 + 3 || v13 == v4 + 4 || v13 == v4 + 1 || v13 == v4 + 2) /*0x56a195*/
              && *((_BYTE *)v12 + 282) == 5 )
            {
              if ( v13 == v4 + 4 ) /*0x56a1a0*/
              {
                Cell::SetTileType((__int16 *)&v31, v4 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a1bd*/
                v14 = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1d5*/
                LOWORD(v35) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1da*/
                HIWORD(v35) = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1e8*/
                v15 = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1ed*/
                v16 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31) /*0x56a1f1*/
                    + ((__int16)(HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88])) << 9);
                if ( v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x56a208*/
                {
                  g_MissionQueueFrame.briefing[139] = v35; /*0x56a20a*/
                  v17 = &g_MissionQueueFrame.briefing[130]; /*0x56a210*/
                }
                *((_BYTE *)v17 + 283) += 4; /*0x56a21e*/
                LOWORD(v36) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a237*/
                HIWORD(v36) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14; /*0x56a23f*/
                v18 = (__int16)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[82])) /*0x56a24a*/
                    + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14) << 9);
                if ( v18 >= 0x40000 || (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x56a261*/
                {
                  g_MissionQueueFrame.briefing[139] = v36; /*0x56a267*/
                  v19 = &g_MissionQueueFrame.briefing[130]; /*0x56a26d*/
                }
                *((_BYTE *)v19 + 283) += 4; /*0x56a27b*/
                HIWORD(v37) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14; /*0x56a291*/
                LOWORD(v37) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x56a296*/
                v20 = (__int16)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[86])) /*0x56a2a4*/
                    + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14) << 9);
                if ( v20 >= 0x40000 || (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56a2ba*/
                {
                  g_MissionQueueFrame.briefing[139] = v37; /*0x56a2c0*/
                  v21 = &g_MissionQueueFrame.briefing[130]; /*0x56a2c5*/
                }
                *((_BYTE *)v21 + 283) += 4; /*0x56a2ca*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a2d8*/
              v4 = g_TerrainSoundTable2; /*0x56a2dd*/
              v5 = g_TerrainSoundConfig; /*0x56a2e3*/
            }
            if ( (v13 == dword_AA1548 || v13 == dword_AA0740) && *((_BYTE *)v12 + 282) == 12 ) /*0x56a300*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a309*/
              v4 = g_TerrainSoundTable2; /*0x56a30e*/
              v5 = g_TerrainSoundConfig; /*0x56a314*/
            }
            if ( (v13 == v5 || v13 == v5 + 3 || v13 == v5 + 4 || v13 == v5 + 2 || v13 == v5 + 1) /*0x56a345*/
              && *((_BYTE *)v12 + 282) == 7 )
            {
              if ( v13 == v5 + 4 ) /*0x56a350*/
              {
                Cell::SetTileType((__int16 *)&v31, v5 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a36e*/
                v22 = *CellStruct::Add((CellStruct *)&v31, &v41, &g_DDrawSurfaceManager.scenario[82]); /*0x56a386*/
                v39 = v22; /*0x56a388*/
                v38 = v22; /*0x56a38c*/
                v23 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x56a39b*/
                if ( v23 >= 0x40000 || (v24 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v23)) == 0 ) /*0x56a3b1*/
                {
                  g_MissionQueueFrame.briefing[139] = v22; /*0x56a3b3*/
                  v24 = &g_MissionQueueFrame.briefing[130]; /*0x56a3b9*/
                }
                *((_BYTE *)v24 + 283) += 4; /*0x56a3d0*/
                v25 = *CellStruct::Add((CellStruct *)&v38, &v42, &g_DDrawSurfaceManager.scenario[84]); /*0x56a3e0*/
                v39 = v25; /*0x56a3e2*/
                v26 = (__int16)v25 + (SHIWORD(v25) << 9); /*0x56a3f1*/
                if ( v26 >= 0x40000 || (v27 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v26)) == 0 ) /*0x56a407*/
                {
                  g_MissionQueueFrame.briefing[139] = v25; /*0x56a409*/
                  v27 = &g_MissionQueueFrame.briefing[130]; /*0x56a40f*/
                }
                *((_BYTE *)v27 + 283) += 4; /*0x56a422*/
                *(_DWORD *)v40 = *CellStruct::Add((CellStruct *)&v38, &v43, &g_DDrawSurfaceManager.scenario[88]); /*0x56a43c*/
                v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40); /*0x56a446*/
                v28[283] += 4; /*0x56a459*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a462*/
              v4 = g_TerrainSoundTable2; /*0x56a467*/
              v5 = g_TerrainSoundConfig; /*0x56a46d*/
            }
            v6 = v32; /*0x56a473*/
          }
          ++v6; /*0x56a483*/
          v29 = this->u32_49 + *((_DWORD *)this + 75); /*0x56a484*/
          v32 = v6; /*0x56a488*/
          if ( v6 >= v29 ) /*0x56a48c*/
            break; /*0x56a48c*/
          v8 = v34; /*0x56a0d5*/
          LOWORD(result) = v33; /*0x56a0d9*/
        }
        result = v33; /*0x56a492*/
      }
      ++result; /*0x56a4a2*/
      v30 = this->q04A + this->q04C; /*0x56a4a3*/
      v33 = result; /*0x56a4a7*/
    }
    while ( result < v30 ); /*0x56a4ab*/
  }
  return result; /*0x56a4b4*/
}



// ==== 0x0056A4C0  ObjectClass::FlattenCliffMap  this=ObjectClass  sig=csp ====
void __thiscall FlattenCliffMap(ObjectClass *this, _WORD *a2)
{
  _WORD *v2; // ebx
  int v3; // edx
  int v4; // edi
  int v6; // eax
  __int16 v7; // cx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // eax
  int *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  int *v18; // ecx
  unsigned int v19; // ecx
  int *v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  int *v26; // ecx
  unsigned int v27; // ecx
  int *v28; // ecx
  unsigned int v29; // eax
  int *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  _WORD *v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]
  int v36; // [esp+20h] [ebp-4h]
  int v37; // [esp+20h] [ebp-4h]
  int v38; // [esp+20h] [ebp-4h]
  int v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+20h] [ebp-4h]
  int v41; // [esp+20h] [ebp-4h]

  v2 = a2; /*0x56a4c4*/
  v3 = 1; /*0x56a4cb*/
  v4 = -1; /*0x56a4d0*/
  v31 = 1; /*0x56a4d5*/
  for ( i = -1; ; i = v4 ) /*0x56a4d9*/
  {
    v6 = *((_DWORD *)this + 75); /*0x56a4dd*/
    if ( v6 <= this->q04C ) /*0x56a4eb*/
      v6 = this->q04C; /*0x56a4ed*/
    if ( v3 >= v6 ) /*0x56a4f1*/
      break; /*0x56a4f1*/
    v32 = v4; /*0x56a4f9*/
    if ( v4 < v3 ) /*0x56a4fd*/
    {
      while ( 2 ) /*0x56a503*/
      {
        v35 = v4; /*0x56a503*/
        do /*0x56a65f*/
        {
          v7 = v32 + v2[1]; /*0x56a50e*/
          LOWORD(v34) = v4 + *v2; /*0x56a519*/
          v8 = this->u32_49; /*0x56a51e*/
          HIWORD(v34) = v7; /*0x56a524*/
          a2 = v34; /*0x56a52f*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= *((_DWORD *)this + 75) + v8 ) /*0x56a541*/
          {
            v9 = v7; /*0x56a547*/
            v10 = this->q04A; /*0x56a54a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56a560*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56a56f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56a571*/
              {
                if ( v11 < 0x40000 && (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) != 0 ) /*0x56a591*/
                {
                  v13 = v12; /*0x56a593*/
                }
                else
                {
                  g_MissionQueueFrame.briefing[139] = (int)v34; /*0x56a597*/
                  v13 = &g_MissionQueueFrame.briefing[130]; /*0x56a59d*/
                }
                v14 = v13[14] - g_Cell_BuildabilityLUT + 1; /*0x56a5b3*/
                if ( (v14 == dword_ABC2B4 || v14 == dword_AA1130) && *((_BYTE *)v13 + 282) == 8 ) /*0x56a5c7*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56a69a*/
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 2, 0); /*0x56a6a6*/
                  return; /*0x56a6b2*/
                }
                if ( (v14 == g_TerrainSoundTable2 /*0x56a5fa*/
                   || v14 == g_TerrainSoundTable2 + 3
                   || v14 == g_TerrainSoundTable2 + 4
                   || v14 == g_TerrainSoundTable2 + 1
                   || v14 == g_TerrainSoundTable2 + 2)
                  && *((_BYTE *)v13 + 282) == 5 )
                {
                  if ( v14 == g_TerrainSoundTable2 + 4 ) /*0x56a6ba*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a6d2*/
                    v15 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a6ea*/
                    LOWORD(v36) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2; /*0x56a6ef*/
                    v16 = LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2; /*0x56a702*/
                    v17 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[88]) + (_WORD)a2) /*0x56a706*/
                        + ((__int16)(HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88])) << 9);
                    if ( v17 >= 0x40000 || (v18 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17)) == 0 ) /*0x56a71d*/
                    {
                      HIWORD(v36) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a6fd*/
                      g_MissionQueueFrame.briefing[139] = v36; /*0x56a71f*/
                      v18 = &g_MissionQueueFrame.briefing[130]; /*0x56a725*/
                    }
                    *((_BYTE *)v18 + 283) += 4; /*0x56a737*/
                    v19 = (__int16)(v36 + LOWORD(g_DDrawSurfaceManager.scenario[82])) /*0x56a763*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + v15) << 9);
                    if ( v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x56a77a*/
                    {
                      HIWORD(v37) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v15; /*0x56a758*/
                      LOWORD(v37) = v16 + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a750*/
                      g_MissionQueueFrame.briefing[139] = v37; /*0x56a780*/
                      v20 = &g_MissionQueueFrame.briefing[130]; /*0x56a786*/
                    }
                    *((_BYTE *)v20 + 283) += 4; /*0x56a793*/
                    HIWORD(v38) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v15; /*0x56a7a9*/
                    v21 = (__int16)(v16 + LOWORD(g_DDrawSurfaceManager.scenario[86])) /*0x56a7bc*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[86]) + v15) << 9);
                    if ( v21 >= 0x40000 || (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) == 0 ) /*0x56a7d2*/
                    {
                      LOWORD(v38) = v16 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x56a7ae*/
                      g_MissionQueueFrame.briefing[139] = v38; /*0x56a7d8*/
                      v22 = &g_MissionQueueFrame.briefing[130]; /*0x56a7dd*/
                    }
                    *((_BYTE *)v22 + 283) += 4; /*0x56a7e2*/
                  }
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 2, 0); /*0x56a7ef*/
                  return; /*0x56a7fb*/
                }
                if ( (v14 == dword_AA1548 || v14 == dword_AA0740) && *((_BYTE *)v13 + 282) == 12 ) /*0x56a617*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56a809*/
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 4, 0); /*0x56a815*/
                  return; /*0x56a821*/
                }
                if ( (v14 == g_TerrainSoundConfig /*0x56a64a*/
                   || v14 == g_TerrainSoundConfig + 3
                   || v14 == g_TerrainSoundConfig + 4
                   || v14 == g_TerrainSoundConfig + 2
                   || v14 == g_TerrainSoundConfig + 1)
                  && *((_BYTE *)v13 + 282) == 7 )
                {
                  if ( v14 == g_TerrainSoundConfig + 4 ) /*0x56a82e*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a84b*/
                    v23 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a863*/
                    LOWORD(v39) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2; /*0x56a868*/
                    v24 = LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2; /*0x56a87b*/
                    v25 = (__int16)(LOWORD(g_DDrawSurfaceManager.scenario[82]) + (_WORD)a2) /*0x56a87f*/
                        + ((__int16)(HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82])) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v25)) == 0 ) /*0x56a896*/
                    {
                      HIWORD(v39) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a876*/
                      g_MissionQueueFrame.briefing[139] = v39; /*0x56a898*/
                      v26 = &g_MissionQueueFrame.briefing[130]; /*0x56a89e*/
                    }
                    *((_BYTE *)v26 + 283) += 4; /*0x56a8ab*/
                    v27 = (__int16)(v39 + LOWORD(g_DDrawSurfaceManager.scenario[84])) /*0x56a8d7*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[84]) + v23) << 9);
                    if ( v27 >= 0x40000 || (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) == 0 ) /*0x56a8ee*/
                    {
                      HIWORD(v40) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v23; /*0x56a8cc*/
                      LOWORD(v40) = v24 + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x56a8c4*/
                      g_MissionQueueFrame.briefing[139] = v40; /*0x56a8f4*/
                      v28 = &g_MissionQueueFrame.briefing[130]; /*0x56a8fa*/
                    }
                    *((_BYTE *)v28 + 283) += 4; /*0x56a907*/
                    HIWORD(v41) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v23; /*0x56a91d*/
                    v29 = (__int16)(v24 + LOWORD(g_DDrawSurfaceManager.scenario[88])) /*0x56a930*/
                        + ((__int16)(HIWORD(g_DDrawSurfaceManager.scenario[88]) + v23) << 9);
                    if ( v29 >= 0x40000 || (v30 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x56a946*/
                    {
                      LOWORD(v41) = v24 + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a922*/
                      g_MissionQueueFrame.briefing[139] = v41; /*0x56a94c*/
                      v30 = &g_MissionQueueFrame.briefing[130]; /*0x56a951*/
                    }
                    *((_BYTE *)v30 + 283) += 4; /*0x56a956*/
                  }
                  Terrain::PlaceCliffs((Terrain *)this, (int)v13, 4, 0); /*0x56a962*/
                  return; /*0x56a962*/
                }
                v4 = v35; /*0x56a650*/
              }
            }
          }
          v35 = ++v4; /*0x56a65b*/
        }
        while ( v4 < v31 ); /*0x56a65f*/
        v4 = i; /*0x56a66d*/
        if ( ++v32 < v31 ) /*0x56a678*/
          continue; /*0x56a678*/
        break;
      }
      v3 = v31; /*0x56a67e*/
    }
    ++v3; /*0x56a680*/
    --v4; /*0x56a681*/
    v31 = v3; /*0x56a682*/
  }
}



// ==== 0x0056A980  ObjectClass::RepairMapCliff  this=ObjectClass  sig=csp ====
void __thiscall RepairMapCliff(ObjectClass *this, _WORD *a2)
{
  _WORD *v2; // ebx
  int v3; // edx
  int v4; // edi
  int v6; // eax
  __int16 v7; // cx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  CellClass *v12; // eax
  CellClass *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  CellClass *v18; // ecx
  unsigned int v19; // ecx
  CellClass *v20; // ecx
  unsigned int v21; // eax
  CellClass *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  CellClass *v26; // ecx
  unsigned int v27; // ecx
  CellClass *v28; // ecx
  unsigned int v29; // eax
  CellClass *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  _WORD *v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]
  int v36; // [esp+20h] [ebp-4h]
  int v37; // [esp+20h] [ebp-4h]
  int v38; // [esp+20h] [ebp-4h]
  int v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+20h] [ebp-4h]
  int v41; // [esp+20h] [ebp-4h]

  v2 = a2; /*0x56a984*/
  v3 = 1; /*0x56a98b*/
  v4 = -1; /*0x56a990*/
  v31 = 1; /*0x56a995*/
  for ( i = -1; ; i = v4 ) /*0x56a999*/
  {
    v6 = *((_DWORD *)this + 75); /*0x56a99d*/
    if ( v6 <= this->q04C ) /*0x56a9ab*/
      v6 = this->q04C; /*0x56a9ad*/
    if ( v3 >= v6 ) /*0x56a9b1*/
      break; /*0x56a9b1*/
    v32 = v4; /*0x56a9b9*/
    if ( v4 < v3 ) /*0x56a9bd*/
    {
      while ( 2 ) /*0x56a9c3*/
      {
        v35 = v4; /*0x56a9c3*/
        do /*0x56ab1f*/
        {
          v7 = v32 + v2[1]; /*0x56a9ce*/
          LOWORD(v34) = v4 + *v2; /*0x56a9d9*/
          v8 = this->u32_49; /*0x56a9de*/
          HIWORD(v34) = v7; /*0x56a9e4*/
          a2 = v34; /*0x56a9ef*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= *((_DWORD *)this + 75) + v8 ) /*0x56aa01*/
          {
            v9 = v7; /*0x56aa07*/
            v10 = this->q04A; /*0x56aa0a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56aa20*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56aa2f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56aa31*/
              {
                if ( v11 < 0x40000 && (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56aa51*/
                {
                  v13 = v12; /*0x56aa53*/
                }
                else
                {
                  dword_ABDC74 = (int)v34; /*0x56aa57*/
                  v13 = &unk_ABDC50; /*0x56aa5d*/
                }
                v14 = *(_DWORD *)&v13->__pad_28[16] - g_TerrainBridgeIndex + 1; /*0x56aa73*/
                if ( (v14 == dword_ABC2B4 || v14 == dword_AA1130) && v13->height[0] == 8 ) /*0x56aa87*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56ab5a*/
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 2, 0); /*0x56ab66*/
                  return; /*0x56ab72*/
                }
                if ( (v14 == g_TerrainSoundTable2 /*0x56aaba*/
                   || v14 == g_TerrainSoundTable2 + 3
                   || v14 == g_TerrainSoundTable2 + 4
                   || v14 == g_TerrainSoundTable2 + 1
                   || v14 == g_TerrainSoundTable2 + 2)
                  && v13->height[0] == 5 )
                {
                  if ( v14 == g_TerrainSoundTable2 + 4 ) /*0x56ab7a*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x56ab92*/
                    v15 = HIWORD(a2) + HIWORD(dword_89F6A0); /*0x56abaa*/
                    LOWORD(v36) = dword_89F6A0 + (_WORD)a2; /*0x56abaf*/
                    v16 = dword_89F6A0 + (_WORD)a2; /*0x56abc2*/
                    v17 = (__int16)(dword_89F6A0 + (_WORD)a2) + ((__int16)(HIWORD(a2) + HIWORD(dword_89F6A0)) << 9); /*0x56abc6*/
                    if ( v17 >= 0x40000 || (v18 = *(CellClass **)(dword_87F924 + 4 * v17)) == 0 ) /*0x56abdd*/
                    {
                      HIWORD(v36) = HIWORD(a2) + HIWORD(dword_89F6A0); /*0x56abbd*/
                      dword_ABDC74 = v36; /*0x56abdf*/
                      v18 = &unk_ABDC50; /*0x56abe5*/
                    }
                    v18->level[0] += 4; /*0x56abf7*/
                    v19 = (__int16)(v36 + LOWORD(dword_89F688[0])) + ((__int16)(HIWORD(dword_89F688[0]) + v15) << 9); /*0x56ac23*/
                    if ( v19 >= 0x40000 || (v20 = *(CellClass **)(dword_87F924 + 4 * v19)) == 0 ) /*0x56ac3a*/
                    {
                      HIWORD(v37) = HIWORD(dword_89F688[0]) + v15; /*0x56ac18*/
                      LOWORD(v37) = v16 + LOWORD(dword_89F688[0]); /*0x56ac10*/
                      dword_ABDC74 = v37; /*0x56ac40*/
                      v20 = &unk_ABDC50; /*0x56ac46*/
                    }
                    v20->level[0] += 4; /*0x56ac53*/
                    HIWORD(v38) = HIWORD(dword_89F698) + v15; /*0x56ac69*/
                    v21 = (__int16)(v16 + dword_89F698) + ((__int16)(HIWORD(dword_89F698) + v15) << 9); /*0x56ac7c*/
                    if ( v21 >= 0x40000 || (v22 = *(CellClass **)(dword_87F924 + 4 * v21)) == 0 ) /*0x56ac92*/
                    {
                      LOWORD(v38) = v16 + dword_89F698; /*0x56ac6e*/
                      dword_ABDC74 = v38; /*0x56ac98*/
                      v22 = &unk_ABDC50; /*0x56ac9d*/
                    }
                    v22->level[0] += 4; /*0x56aca2*/
                  }
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 2, 0); /*0x56acaf*/
                  return; /*0x56acbb*/
                }
                if ( (v14 == dword_AA1548 || v14 == dword_AA0740) && v13->height[0] == 12 ) /*0x56aad7*/
                {
                  Cell::UpdateTileType((__int16 *)&a2, 0, 0); /*0x56acc9*/
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 4, 0); /*0x56acd5*/
                  return; /*0x56ace1*/
                }
                if ( (v14 == g_TerrainSoundConfig /*0x56ab0a*/
                   || v14 == g_TerrainSoundConfig + 3
                   || v14 == g_TerrainSoundConfig + 4
                   || v14 == g_TerrainSoundConfig + 2
                   || v14 == g_TerrainSoundConfig + 1)
                  && v13->height[0] == 7 )
                {
                  if ( v14 == g_TerrainSoundConfig + 4 ) /*0x56acee*/
                  {
                    Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x56ad0b*/
                    v23 = HIWORD(a2) + HIWORD(dword_89F688[0]); /*0x56ad23*/
                    LOWORD(v39) = LOWORD(dword_89F688[0]) + (_WORD)a2; /*0x56ad28*/
                    v24 = LOWORD(dword_89F688[0]) + (_WORD)a2; /*0x56ad3b*/
                    v25 = (__int16)(LOWORD(dword_89F688[0]) + (_WORD)a2) /*0x56ad3f*/
                        + ((__int16)(HIWORD(a2) + HIWORD(dword_89F688[0])) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(CellClass **)(dword_87F924 + 4 * v25)) == 0 ) /*0x56ad56*/
                    {
                      HIWORD(v39) = HIWORD(a2) + HIWORD(dword_89F688[0]); /*0x56ad36*/
                      dword_ABDC74 = v39; /*0x56ad58*/
                      v26 = &unk_ABDC50; /*0x56ad5e*/
                    }
                    v26->level[0] += 4; /*0x56ad6b*/
                    v27 = (__int16)(v39 + dword_89F690) + ((__int16)(HIWORD(dword_89F690) + v23) << 9); /*0x56ad97*/
                    if ( v27 >= 0x40000 || (v28 = *(CellClass **)(dword_87F924 + 4 * v27)) == 0 ) /*0x56adae*/
                    {
                      HIWORD(v40) = HIWORD(dword_89F690) + v23; /*0x56ad8c*/
                      LOWORD(v40) = v24 + dword_89F690; /*0x56ad84*/
                      dword_ABDC74 = v40; /*0x56adb4*/
                      v28 = &unk_ABDC50; /*0x56adba*/
                    }
                    v28->level[0] += 4; /*0x56adc7*/
                    HIWORD(v41) = HIWORD(dword_89F6A0) + v23; /*0x56addd*/
                    v29 = (__int16)(v24 + dword_89F6A0) + ((__int16)(HIWORD(dword_89F6A0) + v23) << 9); /*0x56adf0*/
                    if ( v29 >= 0x40000 || (v30 = *(CellClass **)(dword_87F924 + 4 * v29)) == 0 ) /*0x56ae06*/
                    {
                      LOWORD(v41) = v24 + dword_89F6A0; /*0x56ade2*/
                      dword_ABDC74 = v41; /*0x56ae0c*/
                      v30 = &unk_ABDC50; /*0x56ae11*/
                    }
                    v30->level[0] += 4; /*0x56ae16*/
                  }
                  DestroyCliffMap((TechnoClass *)this, (int)v13, 4, 0); /*0x56ae22*/
                  return; /*0x56ae22*/
                }
                v4 = v35; /*0x56ab10*/
              }
            }
          }
          v35 = ++v4; /*0x56ab1b*/
        }
        while ( v4 < v31 ); /*0x56ab1f*/
        v4 = i; /*0x56ab2d*/
        if ( ++v32 < v31 ) /*0x56ab38*/
          continue; /*0x56ab38*/
        break;
      }
      v3 = v31; /*0x56ab3e*/
    }
    ++v3; /*0x56ab40*/
    --v4; /*0x56ab41*/
    v31 = v3; /*0x56ab42*/
  }
}



// ==== 0x0056AE40  ObjectClass::method_56AE40  this=ObjectClass  sig=csp ====
int __thiscall sub_56AE40(ObjectClass *this, int a2)
{
  int v3; // edi
  int i; // ebx
  int v5; // eax
  char *v6; // eax
  int j; // ebx
  int v8; // eax
  char *v9; // eax
  int k; // ebx
  int v11; // eax
  char *v12; // eax
  Pipe v14[2]; // [esp+Ch] [ebp-28h] BYREF

  v3 = 0; /*0x56ae48*/
  LCWPipe::Constructor((LCWPipe *)v14, 0, 0x2000); /*0x56ae54*/
  Pipe::SetDelegate(v14, a2); /*0x56ae62*/
  for ( i = 0; i < this->customSound_controller; ++i ) /*0x56ae71*/
  {
    v5 = *(_DWORD *)(this->q04F + 4 * i); /*0x56ae7b*/
    if ( v5 ) /*0x56ae80*/
      v6 = LCW::Compress((LCWPipe *)v14, (char *)(v5 + 56), 2); /*0x56ae86*/
    else
      v6 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[144], 2); /*0x56ae91*/
    v3 += (int)v6; /*0x56ae96*/
  }
  for ( j = 0; j < this->customSound_controller; ++j ) /*0x56aead*/
  {
    v8 = *(_DWORD *)(this->q04F + 4 * j); /*0x56aeb7*/
    if ( v8 ) /*0x56aebc*/
      v9 = LCW::Compress((LCWPipe *)v14, (char *)(v8 + 282), 1); /*0x56aec4*/
    else
      v9 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 2, 1); /*0x56aecf*/
    v3 += (int)v9; /*0x56aed4*/
  }
  for ( k = 0; k < this->customSound_controller; ++k ) /*0x56aeeb*/
  {
    v11 = *(_DWORD *)(this->q04F + 4 * k); /*0x56aef5*/
    if ( v11 ) /*0x56aefa*/
      v12 = LCW::Compress((LCWPipe *)v14, (char *)(v11 + 283), 1); /*0x56af02*/
    else
      v12 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 3, 1); /*0x56af0d*/
    v3 += (int)v12; /*0x56af12*/
  }
  LCWPipe::Dtor((LCWPipe *)v14); /*0x56af23*/
  return v3; /*0x56af2a*/
}



// ==== 0x0056AF40  ObjectClass::method_56AF40  this=ObjectClass  sig=csp ====
char *__thiscall sub_56AF40(ObjectClass *this, int a2)
{
  ObjectClass *v2; // esi
  char *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  char *v8; // edi
  char *v9; // edi
  char *v10; // edi
  char *v11; // edi
  int v12; // esi
  char v15[4]; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56af45*/
  v3 = 0; /*0x56af47*/
  LCWPipe::Constructor((LCWPipe *)&v17, 0, 0x2000); /*0x56af57*/
  Pipe::SetDelegate(&v17, a2); /*0x56af65*/
  v4 = 0; /*0x56af70*/
  v18 = 0; /*0x56af74*/
  if ( v2[1].lastLayer > 0 ) /*0x56af78*/
  {
    do /*0x56b08b*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2[1].isAliveFlag + 4 * v4); /*0x56af88*/
      if ( v4 ) /*0x56af8b*/
      {
        if ( v5 ) /*0x56af93*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56af99*/
          Src = v6; /*0x56afa0*/
          v7 = this->q03D; /*0x56afa9*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56afb7*/
          if ( Src > v7 /*0x56afea*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *((_DWORD *)this + 62) )
          {
            Src = v6; /*0x56aff7*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b028*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b035*/
              v8 = &v3[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)&Src, 4)]; /*0x56b045*/
              v9 = &v8[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 56), 4)]; /*0x56b059*/
              v10 = &v9[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 282), 1)]; /*0x56b06d*/
              v3 = &v10[(_DWORD)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 283), 1)]; /*0x56b074*/
            }
          }
        }
      }
      v2 = this; /*0x56b076*/
      v4 = v18 + 1; /*0x56b07e*/
      v18 = v4; /*0x56b085*/
    }
    while ( v4 < this->customSound_controller ); /*0x56b08b*/
  }
  *(_DWORD *)v15 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b0a4*/
  v11 = &v3[(_DWORD)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0ad*/
  v12 = 100; /*0x56b0af*/
  do /*0x56b0c7*/
  {
    v11 = &v11[(_DWORD)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0c4*/
    --v12; /*0x56b0c6*/
  }
  while ( v12 ); /*0x56b0c7*/
  (*(void (__thiscall **)(Pipe *))(*(_DWORD *)v17.__pad_0 + 4))(&v17); /*0x56b0d1*/
  LCWPipe::Dtor((LCWPipe *)&v17); /*0x56b0d8*/
  return v11; /*0x56b0df*/
}



// ==== 0x0056B0F0  ObjectClass::method_56B0F0  this=ObjectClass  sig=csp ====
int __thiscall sub_56B0F0(ObjectClass *this, int *a2)
{
  int v2; // ebx
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // edx
  int i; // [esp+20h] [ebp-Ch]
  ObjectClass *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h] BYREF

  v2 = 0; /*0x56b0fa*/
  v3 = 0; /*0x56b0fc*/
  v4 = a2; /*0x56b0ff*/
  v16 = this; /*0x56b105*/
  for ( i = 0; v3 < v16[1].lastLayer; i = v3 ) /*0x56b10d*/
  {
    v5 = *(_DWORD *)(this->q04F + 4 * v3); /*0x56b11d*/
    if ( v3 ) /*0x56b120*/
    {
      if ( v5 ) /*0x56b128*/
      {
        v6 = *(_DWORD *)(v5 + 36); /*0x56b12e*/
        v7 = this->q03D; /*0x56b131*/
        HIWORD(a2) = HIWORD(v6); /*0x56b137*/
        v8 = (__int16)v6; /*0x56b13b*/
        v9 = SHIWORD(v6); /*0x56b13e*/
        a2 = (int *)(SHIWORD(a2) + v8); /*0x56b148*/
        if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[1].ambientSoundController[4] ) /*0x56b17b*/
        {
          a2 = *(int **)(v5 + 36); /*0x56b18b*/
          if ( a2 != *(int **)&g_MissionQueueFrame.waypoints[2134] /*0x56b1bd*/
            && (int *)v5 != &g_MissionQueueFrame.briefing[130]
            && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
          {
            v10 = (*(int (__thiscall **)(int *, int **, int))(*v4 + 16))(v4, &a2, 4) + v2; /*0x56b1d8*/
            v11 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 56, 4) + v10; /*0x56b1e3*/
            v12 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 282, 1) + v11; /*0x56b1fc*/
            v2 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 283, 1) + v12; /*0x56b201*/
          }
        }
      }
    }
    this = v16; /*0x56b203*/
    v3 = i + 1; /*0x56b20b*/
  }
  v13 = *v4; /*0x56b225*/
  v17 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b227*/
  return v2 + (*(int (__thiscall **)(int *, int *, int))(v13 + 16))(v4, &v17, 4); /*0x56b239*/
}



// ==== 0x0056B250  ObjectClass::method_56B250  this=ObjectClass  sig=csp ====
int __thiscall sub_56B250(ObjectClass *this, int a2)
{
  ObjectClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b255*/
  LZOPipe::Constructor((LZOPipe *)&v17, 0, 0x2000); /*0x56b266*/
  Pipe::SetDelegate(&v17, a2); /*0x56b274*/
  v3 = 0; /*0x56b27f*/
  v4 = 0; /*0x56b281*/
  v18 = 0; /*0x56b285*/
  if ( v2[1].lastLayer > 0 ) /*0x56b289*/
  {
    do /*0x56b39c*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2[1].isAliveFlag + 4 * v4); /*0x56b299*/
      if ( v4 ) /*0x56b29c*/
      {
        if ( v5 ) /*0x56b2a4*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56b2aa*/
          Src = v6; /*0x56b2b1*/
          v7 = this->q03D; /*0x56b2ba*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b2c8*/
          if ( Src > v7 /*0x56b2fb*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *((_DWORD *)this + 62) )
          {
            Src = v6; /*0x56b308*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b339*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b346*/
              v8 = Compression::Read((int *)v17.__pad_0, (int)&Src, 4) + v3; /*0x56b356*/
              v9 = Compression::Read((int *)v17.__pad_0, v5 + 56, 4) + v8; /*0x56b36a*/
              v10 = Compression::Read((int *)v17.__pad_0, v5 + 282, 1) + v9; /*0x56b37e*/
              v3 = Compression::Read((int *)v17.__pad_0, v5 + 283, 1) + v10; /*0x56b385*/
            }
          }
        }
      }
      v2 = this; /*0x56b387*/
      v4 = v18 + 1; /*0x56b38f*/
      v18 = v4; /*0x56b396*/
    }
    while ( v4 < this->customSound_controller ); /*0x56b39c*/
  }
  v16 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b3b5*/
  v11 = Compression::Read((int *)v17.__pad_0, (int)&v16, 4) + v3; /*0x56b3c6*/
  v12 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v17.__pad_0 + 4))(&v17); /*0x56b3cf*/
  LZOPipe::Destructor((LZOPipe *)&v17); /*0x56b3d1*/
  return v12 + v11; /*0x56b3d9*/
}



// ==== 0x0056B3F0  MapClass::DecompressCellData  this=MapClass  sig=csp ====
int __thiscall MapClass::DecompressCellData(MapClass *this, int a2)
{
  MapClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void *MapClass_field_0xF4; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v17; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v18; // [esp+14h] [ebp-28h] BYREF
  int v19; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b3f5*/
  LZOPipe::Constructor((LZOPipe *)&v18, 0, 0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v18, a2); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  v19 = 0; /*0x56b425*/
  if ( v2->MapClass_field_0x140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *((_DWORD *)v2->MapClass_field_0x13C + v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56b44a*/
          Src = v6; /*0x56b451*/
          MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56b45a*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b468*/
          if ( Src > (int)MapClass_field_0xF4 /*0x56b49b*/
            && (__int16)v6 - SHIWORD(v6) < (int)MapClass_field_0xF4
            && SHIWORD(v6) - (__int16)v6 < (int)MapClass_field_0xF4
            && Src <= (int)MapClass_field_0xF4 + 2 * *(_DWORD *)this->__pad_F8 )
          {
            Src = v6; /*0x56b4a8*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b4d9*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b4e6*/
              v8 = Compression::Read((int *)v18.__pad_0, (int)&Src, 4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int *)v18.__pad_0, v5 + 56, 4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int *)v18.__pad_0, v5 + 282, 1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int *)v18.__pad_0, v5 + 283, 1) + v10; /*0x56b532*/
              v3 = Compression::Read((int *)v18.__pad_0, v5 + 281, 1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = this; /*0x56b53b*/
      v4 = v19 + 1; /*0x56b543*/
      v19 = v4; /*0x56b54a*/
    }
    while ( v4 < this->MapClass_field_0x140 ); /*0x56b550*/
  }
  v17 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b568*/
  v12 = Compression::Read((int *)v18.__pad_0, (int)&v17, 4) + v3; /*0x56b579*/
  v13 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v18.__pad_0 + 4))(&v18); /*0x56b582*/
  LZOPipe::Destructor((LZOPipe *)&v18); /*0x56b584*/
  return v13 + v12; /*0x56b58c*/
}



// ==== 0x0056B5A0  CellClass::LoadTerrainTiles  this=CellClass  sig=csp ====
char __thiscall CellClass::LoadTerrainTiles(CellClass *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int j; // esi
  unsigned int v8; // eax
  int *v9; // eax
  int k; // esi
  unsigned int v11; // eax
  int *v12; // eax
  Straw v14[5]; // [esp+0h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp+4h]
  int v16; // [esp+2Ch] [ebp+4h]
  int v17; // [esp+2Ch] [ebp+4h]

  LCWStraw::Constructor((LCWStraw *)v14, 1, 0x2000); /*0x56b5b3*/
  Delegate::Set(v14, a2); /*0x56b5c1*/
  for ( i = 0; i < 0x4000; ++i ) /*0x56b5c6*/
  {
    HIWORD(v15) = i / 128; /*0x56b5e7*/
    v4 = i % 128 + (SHIWORD(v15) << 9); /*0x56b5f5*/
    if ( (v4 >= 0x40000 || (v5 = *(int **)(this->CellClass_field_13C + 4 * v4)) == 0) /*0x56b61d*/
      && (LOWORD(v15) = i % 128,
          g_MissionQueueFrame.briefing[139] = v15,
          v5 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[144], 2); /*0x56b64a*/
    }
    else
    {
      v6 = v5 + 14; /*0x56b61f*/
      v5[14] = 0xFFFF; /*0x56b629*/
      LCW::DecompressReader((LCWStraw *)v14, (char *)v5 + 56, 2); /*0x56b62f*/
      *v6 = AccumulateMIXFileIndex(*v6); /*0x56b63b*/
    }
  }
  for ( j = 0; j < 0x4000; ++j ) /*0x56b65c*/
  {
    HIWORD(v16) = j / 128; /*0x56b67d*/
    v8 = j % 128 + (SHIWORD(v16) << 9); /*0x56b68b*/
    if ( (v8 >= 0x40000 || (v9 = *(int **)(this->CellClass_field_13C + 4 * v8)) == 0) /*0x56b6b3*/
      && (LOWORD(v16) = j % 128,
          g_MissionQueueFrame.briefing[139] = v16,
          v9 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 2, 1); /*0x56b6ca*/
    }
    else
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)v9 + 282, 1); /*0x56b6bd*/
    }
  }
  for ( k = 0; k < 0x4000; ++k ) /*0x56b6d8*/
  {
    HIWORD(v17) = k / 128; /*0x56b6f9*/
    v11 = k % 128 + (SHIWORD(v17) << 9); /*0x56b707*/
    if ( (v11 >= 0x40000 || (v12 = *(int **)(this->CellClass_field_13C + 4 * v11)) == 0) /*0x56b72f*/
      && (LOWORD(v17) = k % 128,
          g_MissionQueueFrame.briefing[139] = v17,
          v12 = &g_MissionQueueFrame.briefing[130],
          &g_MissionQueueFrame == (ScenarioClass *)-5720) )
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 3, 1); /*0x56b746*/
    }
    else
    {
      LCW::DecompressReader((LCWStraw *)v14, (char *)v12 + 283, 1); /*0x56b739*/
    }
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b75e*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b760*/
  LCWStraw::Dtor((LCWStraw *)v14); /*0x56b769*/
  return 1; /*0x56b770*/
}



// ==== 0x0056B780  CellClass::CreateOverlay  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateOverlay(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // edi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LCWStraw::Constructor((LCWStraw *)v9, 1, 0x2000); /*0x56b793*/
  Delegate::Set(v9, a2); /*0x56b7a1*/
  LCW::DecompressReader((LCWStraw *)v9, v7, 4); /*0x56b7b1*/
  while ( *(_WORD *)v7 != *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b7cf*/
       || *(_WORD *)&v7[2] != *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56b7de*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56b7f4*/
    {
      v5 = v4; /*0x56b7f6*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56b7fa*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56b800*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56b80f*/
    {
      LCW::DecompressReader((LCWStraw *)v9, v8, 6); /*0x56b857*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56b81b*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 56, 4); /*0x56b821*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56b82d*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 282, 1); /*0x56b83c*/
      LCW::DecompressReader((LCWStraw *)v9, (char *)v5 + 283, 1); /*0x56b84a*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b868*/
    LCW::DecompressReader((LCWStraw *)v9, v7, 4); /*0x56b86d*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b87c*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b87e*/
  LCWStraw::Dtor((LCWStraw *)v9); /*0x56b887*/
  return 1; /*0x56b88e*/
}



// ==== 0x0056B8A0  CellClass::DecompressRawCellData  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressRawCellData(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  ScenarioClass *v5; // eax
  ScenarioClass *v6; // ebx
  _BYTE v8[8]; // [esp+14h] [ebp-8h] BYREF

  v2 = a2; /*0x56b8a6*/
  while ( 1 ) /*0x56b8ad*/
  {
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &a2, 4); /*0x56b8b8*/
    if ( a2 == *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] ) /*0x56b8cb*/
      break; /*0x56b8cb*/
    v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56b8e3*/
    if ( v4 < 0x40000 && (v5 = *(ScenarioClass **)(this->CellClass_field_13C + 4 * v4)) != 0 ) /*0x56b8f9*/
    {
      v6 = v5; /*0x56b8fb*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = a2; /*0x56b8ff*/
      v6 = (ScenarioClass *)&g_MissionQueueFrame.briefing[130]; /*0x56b905*/
    }
    if ( !v6 || v6 == (ScenarioClass *)&g_MissionQueueFrame.briefing[130] ) /*0x56b914*/
    {
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v8, 6); /*0x56b96c*/
      a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b975*/
    }
    else
    {
      v6->nextScenario[14] = 0xFFFF; /*0x56b91e*/
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &v6->nextScenario[14], 4); /*0x56b926*/
      v6->nextScenario[14] = AccumulateMIXFileIndex(v6->nextScenario[14]); /*0x56b930*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)&v6->altNextScenario[5] + 2, 1); /*0x56b93f*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)&v6->altNextScenario[5] + 3, 1); /*0x56b94f*/
      a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b958*/
    }
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56b989*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56b98d*/
  return 1; /*0x56b983*/
}



// ==== 0x0056B9A0  CellClass::DecompressTerrainDataSimple  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressTerrainDataSimple(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // edi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor((LZOStraw *)v9, 1, 0x2000); /*0x56b9b3*/
  Delegate::Set(v9, a2); /*0x56b9c1*/
  LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56b9d1*/
  while ( *(_WORD *)v7 != *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b9ef*/
       || *(_WORD *)&v7[2] != *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56b9fe*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56ba14*/
    {
      v5 = v4; /*0x56ba16*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56ba1a*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56ba20*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56ba2f*/
    {
      LCW::Decompress((LZOStraw *)v9, v8, 6); /*0x56ba77*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56ba3b*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 56, 4); /*0x56ba41*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56ba4d*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 282, 1); /*0x56ba5c*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 283, 1); /*0x56ba6a*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56ba88*/
    LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56ba8d*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56ba9c*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56ba9e*/
  LZOStraw::Destructor((LZOStraw *)v9); /*0x56baa7*/
  return 1; /*0x56baae*/
}



// ==== 0x0056BAC0  CellClass::DecompressTerrainData  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressTerrainData(CellClass *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // esi
  char v7[4]; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  Straw v9[5]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor((LZOStraw *)v9, 1, 0x2000); /*0x56bad3*/
  Delegate::Set(v9, a2); /*0x56bae1*/
  while ( 1 ) /*0x56baf1*/
  {
    LCW::Decompress((LZOStraw *)v9, v7, 4); /*0x56baf1*/
    if ( *(_WORD *)v7 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bb0f*/
      && *(_WORD *)&v7[2] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bb0f*/
    }
    v3 = *(__int16 *)v7 + (*(__int16 *)&v7[2] << 9); /*0x56bb1e*/
    if ( v3 < 0x40000 && (v4 = *(int **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56bb34*/
    {
      v5 = v4; /*0x56bb36*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7; /*0x56bb3a*/
      v5 = &g_MissionQueueFrame.briefing[130]; /*0x56bb40*/
    }
    if ( !v5 || v5 == &g_MissionQueueFrame.briefing[130] ) /*0x56bb4f*/
    {
      LCW::Decompress((LZOStraw *)v9, v8, 7); /*0x56bba9*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56bb5b*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 56, 4); /*0x56bb61*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56bb6d*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 282, 1); /*0x56bb7c*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 283, 1); /*0x56bb8e*/
      LCW::Decompress((LZOStraw *)v9, (char *)v5 + 281, 1); /*0x56bb9c*/
    }
    *(_DWORD *)v7 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56bbb3*/
  }
  if ( &g_MissionQueueFrame != (ScenarioClass *)-5720 ) /*0x56bbc6*/
    CellClass::Construct((CellClass *)&g_MissionQueueFrame.briefing[130]); /*0x56bbca*/
  LZOStraw::Destructor((LZOStraw *)v9); /*0x56bbd3*/
  return 1; /*0x56bbda*/
}



// ==== 0x0056BBE0  MapClass::Update  this=MapClass  sig=csp ====
char __thiscall CrateClass::Update(MapClass *this)
{
  int v1; // eax
  char *v3; // esi
  int i; // ebx
  int v5; // edx
  int v6; // ecx

  LOBYTE(v1) = dword_A8B238; /*0x56bbe0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x56bbea*/
  {
    LOBYTE(v1) = stru_A8B250.__pad_0[17]; /*0x56bbec*/
    if ( stru_A8B250.__pad_0[17] ) /*0x56bbf3*/
    {
      v3 = &this->__pad_144[20]; /*0x56bbf7*/
      for ( i = 256; i; --i ) /*0x56bbfd*/
      {
        LOWORD(v1) = *((_WORD *)v3 + 6); /*0x56bc02*/
        if ( (_WORD)v1 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bc1a*/
          && *((_WORD *)v3 + 7) == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
        {
          goto LABEL_11; /*0x56bc1a*/
        }
        v5 = *(_DWORD *)v3; /*0x56bc1c*/
        v6 = *((_DWORD *)v3 + 2); /*0x56bc1e*/
        if ( *(_DWORD *)v3 != -1 ) /*0x56bc24*/
        {
          v1 = *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x56bc2b*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x56bc2f*/
            goto LABEL_10; /*0x56bc2f*/
          v6 -= v1; /*0x56bc31*/
        }
        if ( !v6 ) /*0x56bc35*/
        {
LABEL_10:
          CellClass::Cleanup((CellClass *)v3); /*0x56bc37*/
          LOBYTE(v1) = CrateClass::FindPlacement((CrateClass *)this); /*0x56bc40*/
        }
LABEL_11:
        v3 += 16; /*0x56bc45*/
      }
    }
  }
  return v1; /*0x56bc4d*/
}



// ==== 0x0056BC50  Cell::PosToLinearIndex  this=Cell  sig=csp ====
int __stdcall Cell_PosToLinearIndex(__int16 *a1)
{
  return *a1 / 4 + 130 * (a1[1] / 4) + 131; /*0x56bc7c*/
}



// ==== 0x0056BCD0  CellClass::GetTileData  this=CellClass  sig=csp ====
int __stdcall CellClass_GetTileData(__int16 *a1, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  v2 = *a1 + (a1[1] << 9); /*0x56bcde*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(dword_87F924 + 4 * v2)) == 0 ) /*0x56bcf4*/
  {
    dword_ABDC74 = *(_DWORD *)a1; /*0x56bcf8*/
    v3 = &unk_ABDC50; /*0x56bcfd*/
  }
  return *(_DWORD *)(a2 + 4 * ((__int16)v3[9] / 4 + 130 * ((__int16)HIWORD(v3[9]) / 4)) + 23024); /*0x56bd3a*/
}



// ==== 0x0056BD40  CrateClass::FindPlacement  this=CrateClass  sig=csp ====
char __thiscall CrateClass::FindPlacement(CrateClass *this)
{
  _WORD *v1; // edx
  int i; // eax
  int v3; // ebx
  BuildingClass *v4; // ebp
  __int16 v5; // si
  __int16 v6; // ax
  int v7; // eax
  bool v8; // sf
  int v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  __int16 v13[2]; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-14h]
  __int16 v15[2]; // [esp+18h] [ebp-10h] BYREF
  __int16 v16[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+20h] [ebp-8h] BYREF
  int v18; // [esp+24h] [ebp-4h] BYREF

  v1 = (_WORD *)((char *)this + 356); /*0x56bd43*/
  for ( i = 0; i < 256; ++i ) /*0x56bd5c*/
  {
    if ( *v1 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bd67*/
      && v1[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bd67*/
    }
    v1 += 8; /*0x56bd6a*/
  }
  if ( i == 256 ) /*0x56bd79*/
    return 0; /*0x56be9e*/
  v3 = 0; /*0x56bd7f*/
  v4 = (BuildingClass *)((char *)this + 16 * i + 344); /*0x56bd84*/
  while ( 1 ) /*0x56bdb6*/
  {
    v5 = *(_WORD *)&stru_87F5F0.__pad_58[708] /*0x56bdb6*/
       + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1);
    v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1); /*0x56bdc1*/
    LOWORD(v14) = v5; /*0x56bdcc*/
    HIWORD(v14) = *(_WORD *)&stru_87F5F0.__pad_58[712] + v6; /*0x56bdd3*/
    v7 = (__int16)(*(_WORD *)&stru_87F5F0.__pad_58[712] + v6) << 9; /*0x56bde2*/
    v8 = v5 + v7 < 0; /*0x56bde5*/
    v9 = v5 + v7; /*0x56bde5*/
    *(_DWORD *)v13 = v14; /*0x56bde7*/
    if ( v8 || v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x56bdff*/
    {
      g_MissionQueueFrame.briefing[139] = v14; /*0x56be01*/
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x56be07*/
    }
    if ( v10[59] == 2 ) /*0x56be13*/
    {
      v15[0] = 0; /*0x56be33*/
      v15[1] = 0; /*0x56be38*/
      v11 = LayerClass::Pathfinding_Find( /*0x56be42*/
              &stru_87F5F0.__pad_58[416],
              (int)v15,
              &v17,
              v13,
              5,
              -1,
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              v15,
              0,
              0);
    }
    else
    {
      v16[0] = 0; /*0x56be61*/
      v16[1] = 0; /*0x56be66*/
      v11 = LayerClass::Pathfinding_Find( /*0x56be76*/
              &stru_87F5F0.__pad_58[416],
              (int)v16,
              &v18,
              v13,
              1,
              -1,
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              v16,
              0,
              0);
    }
    *(_DWORD *)v13 = *v11; /*0x56be84*/
    if ( BuildingClass::BeginCrumblingTimer(v4, v13) ) /*0x56be88*/
      break; /*0x56be88*/
    if ( ++v3 >= 1000 ) /*0x56be98*/
      return 0; /*0x56be98*/
  }
  return 1; /*0x56be9e*/
}



// ==== 0x0056BEC0  BuildingClass::SearchPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SearchPlacement(BuildingClass *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // [esp-34h] [ebp-48h]
  __int16 v10[2]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bedc*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x56bef2*/
  {
    g_MissionQueueFrame.briefing[139] = a2; /*0x56bef4*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x56befa*/
  }
  if ( v5[59] == 2 ) /*0x56bf06*/
    v9 = 5; /*0x56bf24*/
  else
    v9 = 1; /*0x56bf4f*/
  v10[0] = 0; /*0x56bf26*/
  v10[1] = 0; /*0x56bf2b*/
  a2 = *LayerClass::Pathfinding_Find( /*0x56bf77*/
          &stru_87F5F0.__pad_58[416],
          (int)v10,
          &v11,
          (__int16 *)&a2,
          v9,
          -1,
          0,
          0,
          1,
          1,
          0,
          0,
          0,
          1,
          v10,
          0,
          0);
  result = 0; /*0x56bf81*/
  v7 = &this->?[1]; /*0x56bf83*/
  do /*0x56bf9d*/
  {
    if ( *(_WORD *)v7 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56bf92*/
      && *((_WORD *)v7 + 1) == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
    {
      break; /*0x56bf92*/
    }
    ++result; /*0x56bf94*/
    v7 += 4; /*0x56bf95*/
  }
  while ( result < 256 ); /*0x56bf9d*/
  if ( result == 256 || !BuildingClass::BeginCrumblingTimer((BuildingClass *)&this->?[4 * result], (__int16 *)&a2) ) /*0x56bfb5*/
  {
    LOBYTE(result) = 0; /*0x56c00c*/
  }
  else
  {
    if ( a3 != 20 ) /*0x56bfc5*/
    {
      v8 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bfd6*/
      if ( v8 >= 0x40000 || (result = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v8)) == 0 ) /*0x56bfec*/
      {
        g_MissionQueueFrame.briefing[139] = a2; /*0x56bfee*/
        result = (int)&g_MissionQueueFrame.briefing[130]; /*0x56bff4*/
      }
      *(_BYTE *)(result + 286) = a3; /*0x56bff9*/
    }
    LOBYTE(result) = 1; /*0x56c001*/
  }
  return result; /*0x56bfff*/
}



// ==== 0x0056C020  CellClass::CreateBuildingCrater  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateBuildingCrater(CellClass *this, __int16 *a2)
{
  int v2; // edx
  _WORD *i; // eax
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // ebx
  int v8; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // [esp+18h] [ebp-24h]
  int v20[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v21[4]; // [esp+2Ch] [ebp-10h] BYREF
  __int16 *v22; // [esp+40h] [ebp+4h]

  if ( *(_DWORD *)&dword_A8B238 ) /*0x56c02e*/
  {
    v2 = 0; /*0x56c041*/
    for ( i = (_WORD *)((char *)this + 356); /*0x56c043*/
          *i == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] && i[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136]
       || *a2 != *i
       || a2[1] != i[1];
          i += 8 )
    {
      if ( ++v2 >= 256 ) /*0x56c070*/
        return 0; /*0x56c070*/
    }
    return CellClass::Cleanup((CellClass *)((char *)this + 16 * v2 + 344)); /*0x56c082*/
  }
  else
  {
    v5 = *a2 + (a2[1] << 9); /*0x56c09f*/
    if ( v5 < 0x40000 && (v6 = *(int **)(this->CellClass_field_13C + 4 * v5)) != 0 ) /*0x56c0b5*/
    {
      v7 = v6; /*0x56c0b7*/
    }
    else
    {
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56c0bd*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56c0c2*/
    }
    v8 = v7[17]; /*0x56c0c8*/
    v22 = (__int16 *)v7; /*0x56c0cb*/
    if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v8) + 682) ) /*0x56c0e1*/
    {
      return 0; /*0x56c1e6*/
    }
    else
    {
      PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v7, v20); /*0x56c0ff*/
      StartCoords = House::GetStartCoords((House *)v7, v21); /*0x56c104*/
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x56c119*/
      {
        v18 = *PlacementRect; /*0x56c198*/
        v14 = PlacementRect[1]; /*0x56c19a*/
        v15 = PlacementRect[2]; /*0x56c19d*/
        v16 = PlacementRect[3]; /*0x56c1a0*/
      }
      else
      {
        v11 = PlacementRect[2]; /*0x56c11b*/
        if ( v11 <= 0 || (v19 = PlacementRect[3], v19 <= 0) ) /*0x56c12f*/
        {
          v18 = *StartCoords; /*0x56c18b*/
          v14 = StartCoords[1]; /*0x56c18d*/
          v15 = StartCoords[2]; /*0x56c190*/
          v16 = StartCoords[3]; /*0x56c193*/
        }
        else
        {
          v12 = *StartCoords; /*0x56c131*/
          v13 = *PlacementRect; /*0x56c133*/
          v14 = StartCoords[1]; /*0x56c135*/
          v15 = StartCoords[2]; /*0x56c138*/
          v16 = StartCoords[3]; /*0x56c13b*/
          if ( v12 > *PlacementRect ) /*0x56c140*/
          {
            v15 += v12 - v13; /*0x56c144*/
            v12 = *PlacementRect; /*0x56c146*/
          }
          v17 = PlacementRect[1]; /*0x56c148*/
          if ( v14 > v17 ) /*0x56c151*/
          {
            v16 += v14 - v17; /*0x56c155*/
            v14 = v17; /*0x56c157*/
          }
          if ( v15 + v12 < v13 + v11 ) /*0x56c161*/
            v15 = v13 - v12 + v11 + 1; /*0x56c169*/
          if ( v16 + v14 < v19 + v17 ) /*0x56c17c*/
            v16 = v19 + v17 - v14 + 1; /*0x56c181*/
          v18 = v12; /*0x56c183*/
          v7 = (int *)v22; /*0x56c185*/
        }
      }
      v21[1] = v14; /*0x56c1ab*/
      Cell::CreateCrater(v18, v14 - (unsigned int)DSurface_ViewBounds.field_4, v15, v16, 0); /*0x56c1c7*/
      v7[17] = -1; /*0x56c1cc*/
      *((_BYTE *)v7 + 286) = 0; /*0x56c1d3*/
      return 1; /*0x56c1da*/
    }
  }
}



// ==== 0x0056C200  sub_56C200  this=-  sig=ida-proto ====
int sub_56C200()
{
  return 1; /*0x56c205*/
}



// ==== 0x0056C210  Object::FindNearestObjectAtCell  this=Object  sig=csp ====
_DWORD *__thiscall Object::FindNearestObjectAtCell(Object *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edi
  char *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // eax
  _DWORD *i; // esi
  int *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *result; // eax
  _DWORD *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  char *v24; // [esp+20h] [ebp-40h]
  _DWORD v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD v26[3]; // [esp+30h] [ebp-30h] BYREF
  int v27[3]; // [esp+3Ch] [ebp-24h] BYREF
  char v28[12]; // [esp+48h] [ebp-18h] BYREF
  int v29[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 v30; // [esp+64h] [ebp+4h]
  __int16 v31; // [esp+66h] [ebp+6h]

  v21 = 0; /*0x56c238*/
  v22 = 0; /*0x56c23e*/
  v3 = *a2 / 256; /*0x56c249*/
  v4 = a2[1] / 256; /*0x56c24c*/
  v30 = v3; /*0x56c251*/
  v31 = v4; /*0x56c256*/
  if ( (g_MissionQueueFrame.briefing[120] & 1) == 0 ) /*0x56c25b*/
  {
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2058] = 0; /*0x56c271*/
    LOBYTE(g_MissionQueueFrame.briefing[120]) |= 1u; /*0x56c27c*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2062] = 0xFFFF; /*0x56c295*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2066] = 1; /*0x56c2a9*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2074] = 0x10000; /*0x56c2d0*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2078] = 0x1FFFF; /*0x56c2e4*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2070] = -65536; /*0x56c314*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2082] = 65537; /*0x56c31a*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2086] = -65535; /*0x56c320*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2090] = -1; /*0x56c326*/
    atexit(nullsub_167); /*0x56c32b*/
  }
  v5 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c333*/
  v24 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c338*/
  while ( 1 ) /*0x56c343*/
  {
    v6 = *(_WORD *)v5; /*0x56c343*/
    v7 = v4 + *((_WORD *)v5 + 1); /*0x56c351*/
    LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (__int16)(v3 + v6); /*0x56c359*/
    v9 = *(_DWORD *)&this->__pad_EC[8]; /*0x56c35c*/
    HIWORD(v23) = v7; /*0x56c362*/
    v10 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v10 < v9 && v10 - v8 < v9 && v11 <= v9 + 2 * *(_DWORD *)&this->__pad_EC[12] ) /*0x56c39c*/
    {
      v12 = v8 + (v10 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = (int *)*((_DWORD *)this->Object_field_0x13C + v12)) == 0 ) /*0x56c3c1*/
      {
        g_MissionQueueFrame.briefing[139] = v23; /*0x56c3c7*/
        v13 = &g_MissionQueueFrame.briefing[130]; /*0x56c3cc*/
      }
      for ( i = (_DWORD *)v13[57]; i; i = (_DWORD *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((_BYTE *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*i + 72))(i, v28); /*0x56c457*/
            v18 = Coord::Subtract((Coord *)v29, *a2 - *v17, a2[1] - v17[1], a2[2] - v17[2]); /*0x56c477*/
            v26[0] = *v18; /*0x56c47e*/
            v26[1] = v18[1]; /*0x56c485*/
            v26[2] = v18[2]; /*0x56c490*/
            v16 = Coord::Length((Coord *)v26); /*0x56c494*/
LABEL_20:
            if ( v16 >= 0 && (!v21 || v16 < v22) ) /*0x56c4a9*/
            {
              v22 = v16; /*0x56c4ab*/
              v21 = i; /*0x56c4af*/
            }
            continue; /*0x56c4af*/
          }
          v25[0] = (v8 << 8) + 128; /*0x56c41b*/
          v25[1] = (v10 << 8) + 128; /*0x56c429*/
          v25[2] = 0; /*0x56c431*/
          v15 = Vector3::Subtract((Vector3 *)a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length((Coord *)v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      LOWORD(v3) = v30; /*0x56c4be*/
    }
    v5 = v24 + 4; /*0x56c4c7*/
    v24 += 4; /*0x56c4d0*/
    if ( (int)v24 >= (int)&g_MissionQueueFrame.waypoints[2094] ) /*0x56c4d4*/
      break; /*0x56c4d4*/
    LOWORD(v4) = v31; /*0x56c33e*/
  }
  result = v21; /*0x56c4da*/
  if ( v21 ) /*0x56c4e4*/
  {
    if ( v22 > 181 ) /*0x56c4ee*/
      return 0; /*0x56c4f0*/
  }
  return result; /*0x56c4de*/
}



// ==== 0x0056C500  nullsub_167  this=-  sig=ida-proto ====
void __cdecl nullsub_167()
{
  ; /*0x56c500*/
}



// ==== 0x0056C510  Terrain::ConnectivityGraph  this=Terrain  sig=csp ====
int __thiscall Terrain::ConnectivityGraph(Terrain *this)
{
  Terrain *v1; // ebp
  _DWORD *Terrain_field_0x14; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  void **pad_18; // esi
  int v8; // edi
  unsigned int i; // eax
  int v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 *v19; // esi
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  int v30; // edx
  _DWORD *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  bool v37; // zf
  int v38; // eax
  int v39; // ecx
  _WORD *v40; // ebx
  int v41; // eax
  _WORD *v42; // ecx
  int j; // edi
  int v44; // eax
  int v45; // esi
  int *v46; // edx
  int v47; // ecx
  int *v48; // edi
  unsigned __int16 *v49; // esi
  int v50; // eax
  _WORD *v51; // ecx
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // esi
  int v60; // ecx
  int *v61; // edi
  int v62; // eax
  int v63; // ecx
  _WORD *v64; // esi
  int v65; // ecx
  int v66; // eax
  __int16 *v67; // ecx
  int v68; // esi
  _WORD *v69; // edx
  unsigned __int16 v70; // ax
  unsigned __int16 *v71; // edi
  int v72; // ecx
  int v73; // edx
  int v74; // esi
  void **v75; // edi
  int *v77; // [esp+10h] [ebp-54h]
  __int16 v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  unsigned __int8 *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  __int16 *v82; // [esp+20h] [ebp-44h]
  _DWORD *v83; // [esp+24h] [ebp-40h]
  int v84; // [esp+28h] [ebp-3Ch]
  int v85; // [esp+28h] [ebp-3Ch]
  int *v86; // [esp+28h] [ebp-3Ch]
  unsigned __int8 *v87; // [esp+2Ch] [ebp-38h]
  char *v88; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  char *v90; // [esp+2Ch] [ebp-38h]
  _WORD *v91; // [esp+2Ch] [ebp-38h]
  int v92; // [esp+30h] [ebp-34h] BYREF
  int v93; // [esp+34h] [ebp-30h]
  int v94; // [esp+38h] [ebp-2Ch]
  int v95; // [esp+3Ch] [ebp-28h]
  int v96; // [esp+40h] [ebp-24h]
  _WORD *v97; // [esp+44h] [ebp-20h]
  Terrain *v98; // [esp+48h] [ebp-1Ch]
  void **v99; // [esp+4Ch] [ebp-18h] BYREF
  void *v100; // [esp+50h] [ebp-14h]
  int v101; // [esp+54h] [ebp-10h]
  int v102; // [esp+58h] [ebp-Ch]
  int v103; // [esp+5Ch] [ebp-8h]
  int v104; // [esp+60h] [ebp-4h]

  v1 = this; /*0x56c515*/
  v81 = -1; /*0x56c51a*/
  v95 = -1; /*0x56c51e*/
  Terrain_field_0x14 = this->Terrain_field_0x14; /*0x56c529*/
  v3 = 0; /*0x56c52c*/
  v4 = *(_DWORD *)this->__pad_68 + 4 * *(_DWORD *)&this->__pad_68[4]; /*0x56c52e*/
  v100 = 0; /*0x56c531*/
  v101 = 0; /*0x56c535*/
  LOWORD(v102) = 1; /*0x56c539*/
  v99 = &DynamicVectorClass<enum PassabilityType>::`vftable'; /*0x56c542*/
  v103 = 0; /*0x56c54a*/
  v104 = 300; /*0x56c54e*/
  v5 = Terrain_field_0x14[2]; /*0x56c556*/
  v98 = this; /*0x56c55c*/
  v87 = (unsigned __int8 *)v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(*Terrain_field_0x14 + v6) + 12))(*Terrain_field_0x14 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < Terrain_field_0x14[2] ); /*0x56c57c*/
  }
  pad_18 = (void **)v1->__pad_18; /*0x56c57e*/
  v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *pad_18 ) /*0x56c586*/
    {
      __3_YAXPAX_Z(*pad_18); /*0x56c58d*/
      *pad_18 = 0; /*0x56c595*/
    }
    ++pad_18; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = *(_DWORD *)v1->__pad_68; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(_WORD *)(i + 2) = 0; /*0x56c5ac*/
  v10 = 1; /*0x56c5c3*/
  if ( v103 < v101 /*0x56c5eb*/
    || (BYTE1(v102) || !v101)
    && v104 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
  {
    v11 = v103++; /*0x56c5f6*/
    *((_DWORD *)v100 + v11) = 7; /*0x56c601*/
  }
  v12 = *(unsigned __int8 **)v1->__pad_68; /*0x56c608*/
  v92 = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    v13 = v95; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      v14 = *v12; /*0x56c621*/
      v95 = v14; /*0x56c626*/
      if ( v14 == 7 || *((_WORD *)v12 + 1) ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        g_MissionQueueFrame.briefing[273] = 0; /*0x56c640*/
        v15 = Terrain::FloodFillConnectivity((int)v1, v12, v10, &v92); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (unsigned __int16)v10; /*0x56c65d*/
        }
        if ( v103 < v101 /*0x56c68e*/
          || (BYTE1(v102) || !v101)
          && v104 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
        {
          v16 = v103++; /*0x56c69d*/
          *((_DWORD *)v100 + v16) = v95; /*0x56c6a8*/
        }
        ++v10; /*0x56c6af*/
        v12 += 4 * v92; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  *(_DWORD *)&v1->__pad_44[8] = (unsigned __int16)v10; /*0x56c6c8*/
  v17 = v1->Terrain_field_0x60[0] - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    v18 = 16 * v17; /*0x56c6d7*/
    v88 = (char *)(16 * v17); /*0x56c6db*/
    v84 = v1->Terrain_field_0x60[0]; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (__int16 *)(*(_DWORD *)&v1->__pad_44[16] + v18); /*0x56c6ea*/
      if ( *((_BYTE *)v19 + 8) ) /*0x56c6e6*/
      {
        v20 = *(_DWORD *)&v1->__pad_68[144] + *(_DWORD *)&v1->__pad_68[140] + 1; /*0x56c704*/
        v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          v22 = *(_DWORD *)&v1->__pad_68[4]; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        v23 = *(_DWORD *)v1->__pad_68; /*0x56c725*/
        v24 = *(unsigned __int16 *)(v23 + 4 * v21 + 2); /*0x56c72d*/
        v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          v26 = *(_DWORD *)&v1->__pad_68[4]; /*0x56c73e*/
          if ( v25 >= v26 ) /*0x56c743*/
            v25 = v26 - 1; /*0x56c745*/
        }
        else
        {
          v25 = 0; /*0x56c73a*/
        }
        v27 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c74a*/
        if ( (unsigned __int16)v27 != v24 ) /*0x56c751*/
        {
          if ( (unsigned __int16)v27 < v24 ) /*0x56c753*/
          {
            v27 = v24; /*0x56c757*/
            v24 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c759*/
          }
          v28 = v27 | (v24 << 16); /*0x56c763*/
          v29 = *(_DWORD *)v1->Terrain_field_0x14 + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
          v30 = *(_DWORD *)(v29 + 16); /*0x56c778*/
          v31 = *(_DWORD **)(v29 + 4); /*0x56c77c*/
          v32 = v30 - 1; /*0x56c77f*/
          if ( v30 - 1 < 0 ) /*0x56c784*/
          {
LABEL_48:
            v33 = *(_DWORD *)(v29 + 8); /*0x56c790*/
            if ( v30 < v33 /*0x56c7b2*/
              || (*(_BYTE *)(v29 + 13) || !v33)
              && (v34 = *(_DWORD *)(v29 + 20), v34 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v29 + 8))(v29, v33 + v34, 0) )
            {
              v35 = *(_DWORD *)(v29 + 16); /*0x56c7b9*/
              v36 = *(_DWORD *)(v29 + 4); /*0x56c7bc*/
              *(_DWORD *)(v29 + 16) = v35 + 1; /*0x56c7c2*/
              *(_DWORD *)(v36 + 8 * v35) = v28; /*0x56c7c5*/
              *(_DWORD *)(v36 + 8 * v35 + 4) = v28; /*0x56c7c8*/
            }
          }
          else
          {
            while ( v28 != *v31 ) /*0x56c788*/
            {
              v31 += 2; /*0x56c78a*/
              if ( --v32 < 0 ) /*0x56c78e*/
                goto LABEL_48; /*0x56c78e*/
            }
          }
        }
      }
      v18 = (int)(v88 - 16); /*0x56c7d4*/
      v37 = v84 == 1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      --v84; /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = __2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c7ec*/
  v39 = *(_DWORD *)&v1->__pad_44[8]; /*0x56c7f1*/
  v40 = (_WORD *)v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  v97 = v40; /*0x56c7fd*/
  if ( v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      *v42 = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      ++v42; /*0x56c80e*/
    }
    while ( v41 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    v44 = j + *(_DWORD *)v1->Terrain_field_0x14; /*0x56c81c*/
    v45 = *(_DWORD *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      v46 = (int *)(*(_DWORD *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++v40[(unsigned __int16)v47]; /*0x56c83b*/
        ++v40[HIWORD(v47)]; /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = (int *)__2_YAPAXI_Z(4 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c87c*/
  {
    v48 = v77; /*0x56c87e*/
    v49 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v48++ = __2_YAPAXI_Z(2 * *v49++); /*0x56c891*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      *v51 = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      ++v51; /*0x56c8c0*/
    }
    while ( v50 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    v53 = *(_DWORD *)v1->Terrain_field_0x14; /*0x56c8d0*/
    v54 = *(_DWORD *)(v53 + v52 + 16); /*0x56c8d2*/
    v55 = v52 + v53; /*0x56c8d6*/
    if ( v54 > 0 ) /*0x56c8da*/
    {
      v90 = (char *)v54; /*0x56c8df*/
      Block = (int *)(*(_DWORD *)(v55 + 4) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        v56 = *Block; /*0x56c8f4*/
        v57 = (unsigned __int16)*Block; /*0x56c8fa*/
        v58 = HIWORD(*Block); /*0x56c8ff*/
        *(_WORD *)(v77[v57] + 2 * (unsigned __int16)v40[v57]) = v58; /*0x56c909*/
        *(_WORD *)(v77[(unsigned __int16)v58] + 2 * (unsigned __int16)v40[(unsigned __int16)v58]) = v56; /*0x56c920*/
        ++v40[v57]; /*0x56c924*/
        ++v40[(unsigned __int16)v58]; /*0x56c928*/
        v37 = v90 == (char *)1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 += 24; /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( v52 < 6144 ); /*0x56c953*/
  v59 = __2_YAPAXI_Z(*(_DWORD *)&v1->__pad_44[8]); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = (unsigned __int8 *)v59; /*0x56c972*/
        v60 < *(_DWORD *)&v1->__pad_44[8];
        *(_BYTE *)(v59 + v60 - 1) = *((char *)v100 + 4 * v60 - 4) )
  {
    ++v60; /*0x56c978*/
  }
  v91 = (_WORD *)__2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c993*/
  v61 = dword_82A594; /*0x56c997*/
  v86 = dword_82A594; /*0x56c9a2*/
  v83 = v1->__pad_18; /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = __2_YAPAXI_Z(2 * *(_DWORD *)&v1->__pad_44[8]); /*0x56c9b8*/
    v82 = (__int16 *)v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    v63 = 0; /*0x56c9cd*/
    if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56c9d1*/
    {
      v64 = (_WORD *)v62; /*0x56c9d3*/
      do /*0x56c9f3*/
        *v64++ = v61[Blocka[v63++]] != 1; /*0x56c9e7*/
      while ( v63 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56c9f3*/
    }
    v65 = *(_DWORD *)&v1->__pad_44[8]; /*0x56c9f5*/
    v66 = 0; /*0x56c9f8*/
    v94 = 0; /*0x56c9fc*/
    if ( v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      v95 = (int)v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*v67 ) /*0x56ca0e*/
        {
          v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *v67 = v78; /*0x56ca29*/
          v96 = v61[Blocka[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            v69 = &v91[--v68]; /*0x56ca45*/
            v70 = v40[(unsigned __int16)*v69]; /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (unsigned __int16 *)(v77[(unsigned __int16)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              v93 = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                v72 = *v71; /*0x56ca6d*/
                if ( v86[Blocka[v72]] == v96 && !v82[v72] ) /*0x56ca83*/
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  v82[v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --v93; /*0x56caa2*/
              }
              while ( v93 ); /*0x56caa6*/
              v40 = v97; /*0x56caa8*/
              v1 = v98; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = (__int16 *)v95; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = v94; /*0x56cac5*/
        }
        v73 = *(_DWORD *)&v1->__pad_44[8]; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        ++v67; /*0x56cacd*/
        v94 = v66; /*0x56cad2*/
        v95 = (int)v67; /*0x56cad6*/
      }
      while ( v66 < v73 ); /*0x56cada*/
    }
    v61 += 8; /*0x56cae8*/
    *v82 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( *(int *)&v1->__pad_44[8] > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      __3_YAXPAX_Z(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < *(_DWORD *)&v1->__pad_44[8] ); /*0x56cb28*/
  }
  __3_YAXPAX_Z(Blocka); /*0x56cb2f*/
  __3_YAXPAX_Z(v77); /*0x56cb39*/
  __3_YAXPAX_Z(v40); /*0x56cb3f*/
  __3_YAXPAX_Z(v91); /*0x56cb49*/
  v99 = &VectorClass<enum PassabilityType>::`vftable'; /*0x56cb5a*/
  if ( v100 && BYTE1(v102) ) /*0x56cb6b*/
    __3_YAXPAX_Z(v100); /*0x56cb6e*/
  return v81; /*0x56cb57*/
}



// ==== 0x0056CB80  Cell::DecodeFlags  this=Cell  sig=csp ====
int __thiscall Cell::DecodeFlags(Cell *this)
{
  return this->Cell_field_0x0 & 0xF | ((unsigned __int16)this->Cell_field_0x0 >> 12); /*0x56cb8f*/
}



// ==== 0x0056CB90  Terrain::FloodFillConnectivity  this=Terrain  sig=csp ====
int __thiscall Terrain_FloodFillConnectivity(int this, unsigned __int8 *a2, int a3, _DWORD *a4)
{
  unsigned __int8 *v4; // ebx
  int v5; // edi
  unsigned __int8 *v6; // ebp
  int v7; // ecx
  unsigned __int8 *v8; // esi
  __int64 v9; // rax
  int v10; // edx
  int v11; // edi
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  int v27; // ebx
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  unsigned __int8 *v37; // ebp
  unsigned __int8 *v38; // esi
  int v39; // eax
  int v40; // edx
  unsigned __int8 *v41; // edi
  int v42; // ebx
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ebp
  int v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // eax
  _DWORD *v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  unsigned __int8 *v56; // ebp
  unsigned int v57; // esi
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // edi
  int v64; // ecx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  _DWORD *v68; // ecx
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // edx
  bool v74; // [esp+1Bh] [ebp-21h]
  int v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+20h] [ebp-1Ch]
  int v78; // [esp+24h] [ebp-18h]
  int v79; // [esp+24h] [ebp-18h]
  int v80; // [esp+24h] [ebp-18h]
  int v81; // [esp+28h] [ebp-14h]
  int v82; // [esp+2Ch] [ebp-10h] BYREF
  int v83; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v84; // [esp+34h] [ebp-8h]
  int v85; // [esp+38h] [ebp-4h]
  int v86; // [esp+40h] [ebp+4h]
  unsigned int v87; // [esp+48h] [ebp+Ch]

  v4 = a2; /*0x56cb94*/
  v5 = *a2; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  v6 = a2; /*0x56cbaf*/
  v7 = a2[1]; /*0x56cbb1*/
  v8 = a2; /*0x56cbb4*/
  v81 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    v9 = v6[1] - v7; /*0x56cbc5*/
    if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((_WORD *)v6 + 1) = a3; /*0x56cbd6*/
    v10 = *(v6 - 4); /*0x56cbda*/
    v7 = v6[1]; /*0x56cbdf*/
    v6 -= 4; /*0x56cbe2*/
  }
  while ( v10 == v5 ); /*0x56cbe7*/
  v76 = v7; /*0x56cbeb*/
  v11 = *((unsigned __int16 *)v6 + 1); /*0x56cbef*/
  v78 = (unsigned __int16)v11; /*0x56cbf5*/
  if ( (_WORD)v11 ) /*0x56cbf9*/
  {
    v12 = v6[1] - v7; /*0x56cc06*/
    if ( ((int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (unsigned __int16)a3 ) /*0x56cc34*/
    {
      v13 = (unsigned __int16)a3 | ((unsigned __int16)v11 << 16); /*0x56cc46*/
      v14 = **(_DWORD **)(this + 20); /*0x56cc5a*/
      v15 = *(_DWORD *)(v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      v16 = v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
      v17 = v15 - 1; /*0x56cc63*/
      v18 = *(_DWORD **)(v16 + 4); /*0x56cc68*/
      if ( v15 - 1 < 0 ) /*0x56cc6b*/
      {
LABEL_12:
        v19 = *(_DWORD *)(v16 + 8); /*0x56cc77*/
        if ( v15 < v19 /*0x56cc99*/
          || (*(_BYTE *)(v16 + 13) || !v19)
          && (v20 = *(_DWORD *)(v16 + 20), v20 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v19 + v20, 0) )
        {
          v21 = *(_DWORD *)(v16 + 16); /*0x56cca0*/
          v22 = *(_DWORD *)(v16 + 4); /*0x56cca3*/
          *(_DWORD *)(v16 + 16) = v21 + 1; /*0x56cca9*/
          *(_DWORD *)(v22 + 8 * v21) = v13; /*0x56ccac*/
          *(_DWORD *)(v22 + 8 * v21 + 4) = v13; /*0x56ccaf*/
        }
      }
      else
      {
        while ( v13 != *v18 ) /*0x56cc6f*/
        {
          v18 += 2; /*0x56cc71*/
          if ( --v17 < 0 ) /*0x56cc75*/
            goto LABEL_12; /*0x56cc75*/
        }
      }
      v4 = a2; /*0x56ccb7*/
      dword_ABDE8C = v78; /*0x56ccbb*/
    }
  }
  if ( *v4 == v81 ) /*0x56ccca*/
  {
    v23 = v76; /*0x56ccd0*/
    do /*0x56ccfd*/
    {
      v24 = v8[1] - v23; /*0x56ccdd*/
      if ( (int)((HIDWORD(v24) ^ v24) - HIDWORD(v24)) >= 4 ) /*0x56cce5*/
        break; /*0x56cce5*/
      *((_WORD *)v8 + 1) = a3; /*0x56cce9*/
      v23 = v8[1]; /*0x56cced*/
      v8 += 4; /*0x56ccf0*/
      v76 = v23; /*0x56ccf5*/
    }
    while ( *v8 == v81 ); /*0x56ccfd*/
  }
  v25 = *((unsigned __int16 *)v8 + 1); /*0x56cd01*/
  v79 = (unsigned __int16)v25; /*0x56cd07*/
  if ( (_WORD)v25 ) /*0x56cd0b*/
  {
    v26 = v8[1] - v76; /*0x56cd1c*/
    if ( ((int)((HIDWORD(v26) ^ v26) - HIDWORD(v26)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (unsigned __int16)a3 ) /*0x56cd4a*/
    {
      v27 = (unsigned __int16)a3 | ((unsigned __int16)v25 << 16); /*0x56cd5c*/
      v28 = **(_DWORD **)(this + 20); /*0x56cd70*/
      v29 = *(_DWORD *)(v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      v30 = v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
      v31 = v29 - 1; /*0x56cd79*/
      v32 = *(_DWORD **)(v30 + 4); /*0x56cd7e*/
      if ( v29 - 1 < 0 ) /*0x56cd81*/
      {
LABEL_31:
        v33 = *(_DWORD *)(v30 + 8); /*0x56cd8d*/
        if ( v29 < v33 /*0x56cdaf*/
          || (*(_BYTE *)(v30 + 13) || !v33)
          && (v34 = *(_DWORD *)(v30 + 20), v34 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(v30, v33 + v34, 0) )
        {
          v35 = *(_DWORD *)(v30 + 16); /*0x56cdb6*/
          v36 = *(_DWORD *)(v30 + 4); /*0x56cdb9*/
          *(_DWORD *)(v30 + 16) = v35 + 1; /*0x56cdbf*/
          *(_DWORD *)(v36 + 8 * v35) = v27; /*0x56cdc2*/
          *(_DWORD *)(v36 + 8 * v35 + 4) = v27; /*0x56cdc5*/
        }
      }
      else
      {
        while ( v27 != *v32 ) /*0x56cd85*/
        {
          v32 += 2; /*0x56cd87*/
          if ( --v31 < 0 ) /*0x56cd8b*/
            goto LABEL_31; /*0x56cd8b*/
        }
      }
      dword_ABDE8C = v79; /*0x56cdcd*/
    }
  }
  v77 = ((v8 - v6) >> 2) - 1; /*0x56cde6*/
  v37 = v6 + 4; /*0x56cdec*/
  v82 = 0; /*0x56cdf2*/
  v83 = 0; /*0x56cdf6*/
  *a4 = ((v8 - a2) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = *(_DWORD *)(this + 248) + *(_DWORD *)(this + 244) + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v80 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = (int)&v37[v39 - 4]; /*0x56ce2c*/
  v86 = v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  v87 = (unsigned int)&v38[-v39 + 4]; /*0x56ce41*/
  if ( (unsigned int)&v37[-v40] <= v87 )
  {
    while ( 1 )
    {
      v42 = *((unsigned __int16 *)v41 + 1); /*0x56ce51*/
      if ( (unsigned int)v41 >= v87 - 4 )
        v43 = (int)(v41 == (unsigned __int8 *)(v87 - 4) ? &v41[v86] : &v41[v86 - 4]);
      else
        v43 = (int)&v41[v80]; /*0x56ce60*/
      if ( *((_WORD *)v41 + 1) ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v81 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      v44 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56ce98*/
      if ( (int)((HIDWORD(v44) ^ v44) - HIDWORD(v44)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(v41, a3, &v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
LABEL_63:
      if ( (unsigned int)v41 > v87 ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (unsigned __int16)a3 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      v45 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56cefa*/
      if ( (int)((HIDWORD(v45) ^ v45) - HIDWORD(v45)) < 2 || v74 ) /*0x56cf0a*/
      {
        v46 = (unsigned __int16)a3 | (v42 << 16); /*0x56cf16*/
        v47 = **(_DWORD **)(this + 20); /*0x56cf2a*/
        v48 = *(_DWORD *)(v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        v49 = v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
        v50 = v48 - 1; /*0x56cf33*/
        v51 = *(_DWORD **)(v49 + 4); /*0x56cf38*/
        if ( v48 - 1 < 0 ) /*0x56cf3b*/
        {
LABEL_55:
          v52 = *(_DWORD *)(v49 + 8); /*0x56cf47*/
          if ( v48 < v52 /*0x56cf69*/
            || (*(_BYTE *)(v49 + 13) || !v52)
            && (v53 = *(_DWORD *)(v49 + 20), v53 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v49 + 8))(v49, v52 + v53, 0) )
          {
            v54 = *(_DWORD *)(v49 + 16); /*0x56cf70*/
            v55 = *(_DWORD *)(v49 + 4); /*0x56cf73*/
            *(_DWORD *)(v49 + 16) = v54 + 1; /*0x56cf79*/
            *(_DWORD *)(v55 + 8 * v54) = v46; /*0x56cf7c*/
            *(_DWORD *)(v55 + 8 * v54 + 4) = v46; /*0x56cf7f*/
          }
        }
        else
        {
          while ( v46 != *v51 ) /*0x56cf3f*/
          {
            v51 += 2; /*0x56cf41*/
            if ( --v50 < 0 ) /*0x56cf45*/
              goto LABEL_55; /*0x56cf45*/
          }
        }
        dword_ABDE8C = v42; /*0x56cf83*/
      }
    }
LABEL_62:
    v41 += 4; /*0x56cf89*/
    goto LABEL_63; /*0x56cf89*/
  }
LABEL_64:
  v56 = (unsigned __int8 *)v85; /*0x56cf96*/
  v57 = v84; /*0x56cf9a*/
  if ( v85 <= v84 ) /*0x56cfa0*/
  {
    do /*0x56d0e6*/
    {
      v58 = *((unsigned __int16 *)v56 + 1); /*0x56cfab*/
      if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
      {
        v60 = v86; /*0x56cfbe*/
        if ( v56 != (unsigned __int8 *)(v57 - 4) ) /*0x56cfc2*/
          v60 = v80; /*0x56cfc4*/
        v59 = (int)&v56[-v60]; /*0x56cfc8*/
      }
      else
      {
        v59 = (int)&v56[-v86 + 4]; /*0x56cfb9*/
      }
      if ( *((_WORD *)v56 + 1) ) /*0x56cfa9*/
      {
        if ( v58 != (unsigned __int16)a3 && v58 != dword_ABDE8C ) /*0x56d03c*/
        {
          v62 = v56[1] - *(unsigned __int8 *)(v59 + 1); /*0x56d04e*/
          if ( (int)((HIDWORD(v62) ^ v62) - HIDWORD(v62)) < 2 || v74 ) /*0x56d05e*/
          {
            v63 = (unsigned __int16)a3 | (v58 << 16); /*0x56d06a*/
            v64 = **(_DWORD **)(this + 20); /*0x56d07e*/
            v65 = *(_DWORD *)(v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
            v66 = v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
            v67 = v65 - 1; /*0x56d087*/
            v68 = *(_DWORD **)(v66 + 4); /*0x56d08c*/
            if ( v65 - 1 < 0 ) /*0x56d08f*/
            {
LABEL_82:
              v69 = *(_DWORD *)(v66 + 8); /*0x56d09b*/
              if ( v65 < v69 /*0x56d0bd*/
                || (*(_BYTE *)(v66 + 13) || !v69)
                && (v70 = *(_DWORD *)(v66 + 20), v70 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v66 + 8))(v66, v69 + v70, 0) )
              {
                v71 = *(_DWORD *)(v66 + 16); /*0x56d0c4*/
                v72 = *(_DWORD *)(v66 + 4); /*0x56d0c7*/
                *(_DWORD *)(v66 + 16) = v71 + 1; /*0x56d0cd*/
                *(_DWORD *)(v72 + 8 * v71) = v63; /*0x56d0d0*/
                *(_DWORD *)(v72 + 8 * v71 + 4) = v63; /*0x56d0d3*/
              }
            }
            else
            {
              while ( v63 != *v68 ) /*0x56d093*/
              {
                v68 += 2; /*0x56d095*/
                if ( --v67 < 0 ) /*0x56d099*/
                  goto LABEL_82; /*0x56d099*/
              }
            }
            dword_ABDE8C = v58; /*0x56d0d7*/
          }
        }
        v57 = v84; /*0x56d0dd*/
        v56 += 4; /*0x56d0e1*/
      }
      else if ( *v56 == v81 /*0x56cfef*/
             && (v61 = v56[1] - *(unsigned __int8 *)(v59 + 1), (int)((HIDWORD(v61) ^ v61) - HIDWORD(v61)) < 2) )
      {
        v77 += Terrain::FloodFillConnectivity(v56, a3, &v83); /*0x56d00f*/
        v56 += 4 * v83; /*0x56d013*/
      }
      else
      {
        v56 += 4; /*0x56d01c*/
      }
    }
    while ( (unsigned int)v56 <= v57 ); /*0x56d0e6*/
  }
  return v77; /*0x56d0f0*/
}



// ==== 0x0056D100  MapSeed::CheckTileMatch  this=MapSeed  sig=csp ====
bool __thiscall MapSeed::CheckTileMatch(MapSeed *this, __int16 *a2, __int16 *a3, int a4, char a5, char a6, char a7)
{
  char IsWithinUsableArea; // al
  int v10; // ecx
  int v11; // eax
  bool v12; // al
  char v14; // al
  int v15; // edx
  int v16; // ecx
  bool v17; // al
  int TileIndex; // ebp
  char v20; // [esp+18h] [ebp+4h]
  char v21; // [esp+1Ch] [ebp+8h]

  if ( a4 == -1 ) /*0x56d110*/
    return 1; /*0x56d115*/
  IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1); /*0x56d128*/
  v10 = *a2; /*0x56d12d*/
  v20 = IsWithinUsableArea; /*0x56d136*/
  v11 = a2[1]; /*0x56d13a*/
  v12 = v11 + v10 > *(int *)&stru_87F5F0.__pad_58[660] /*0x56d163*/
     && v10 - v11 < *(int *)&stru_87F5F0.__pad_58[660]
     && v11 - v10 < *(int *)&stru_87F5F0.__pad_58[660]
     && v11 + v10 <= *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664];
  if ( !v20 && v12 ) /*0x56d16f*/
    return 1; /*0x56d174*/
  v14 = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a3, 1); /*0x56d187*/
  v15 = *a3; /*0x56d18c*/
  v16 = a3[1]; /*0x56d18f*/
  v21 = v14; /*0x56d199*/
  v17 = v16 + v15 > *(int *)&stru_87F5F0.__pad_58[660] /*0x56d1c3*/
     && v15 - v16 < *(int *)&stru_87F5F0.__pad_58[660]
     && v16 - v15 < *(int *)&stru_87F5F0.__pad_58[660]
     && v16 + v15 <= *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664];
  if ( a7 && v20 && !v21 && v17 ) /*0x56d1df*/
    return 1; /*0x56d1e4*/
  TileIndex = MapClass::GetTileIndex((MapClass *)this, a3, a4, a6); /*0x56d205*/
  return MapClass::GetTileIndex((MapClass *)this, a2, a4, a5) == TileIndex; /*0x56d112*/
}



// ==== 0x0056D230  MapClass::GetTileIndex  this=MapClass  sig=csp ====
int __thiscall MapClass::GetTileIndex(MapClass *this, __int16 *a2, int a3, char a4)
{
  __int16 *v4; // esi
  MapClass *v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int RegionMap; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // eax
  int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = a2; /*0x56d238*/
  v5 = this; /*0x56d23d*/
  if ( a4 )
  {
    v6 = *a2 + (a2[1] << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56d26f*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      RegionMap = GetRegionMap((ObjectClass *)this, a2, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * RegionMap + *(_DWORD *)v5->__pad_54; /*0x56d2a3*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v4 = (__int16 *)(16 * RegionMap + *(_DWORD *)v5->__pad_54); /*0x56d2ac*/
      }
      else
      {
        v10 = *a2 + (a2[1] << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = &g_MissionQueueFrame.briefing[130]; /*0x56d2db*/
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x56d2e0*/
        }
        for ( i = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent((Cell *)NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( ((unsigned __int8)Cell::IsInRange((Cell *)NeighbourContent) /*0x56d337*/
           || (unsigned __int8)Cell::IsInRange2((Cell *)NeighbourContent))
          && NeighbourContent[59] != 3 )
        {
          v4 = (__int16 *)(v9 + 4); /*0x56d339*/
        }
        else
        {
          v4 = (__int16 *)v9; /*0x56d361*/
        }
        v5 = this; /*0x56d33b*/
      }
    }
  }
  v14 = *v4 + v4[1] * ((int)v5->MapClass_field_0xF4 + *(_DWORD *)v5->__pad_F8 + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = *(_DWORD *)&v5->__pad_5C[16]; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_18[4 * a3] /*0x56d365*/
                             + 2 * *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_5C[12] + 4 * v14 + 2));
}



// ==== 0x0056D3F0  ObjectClass::CellToTileIndexMap  this=ObjectClass  sig=csp ====
int __thiscall CellToTileIndexMap(ObjectClass *this, __int16 *a2)
{
  int result; // eax
  int health; // ecx

  result = *a2 + a2[1] * (*((_DWORD *)this + 62) + this->q03D + 1); /*0x56d40f*/
  if ( result < 0 ) /*0x56d412*/
    return 0; /*0x56d414*/
  health = this->health; /*0x56d419*/
  if ( result >= health ) /*0x56d41e*/
    return health - 1; /*0x56d420*/
  return result; /*0x56d411*/
}



// ==== 0x0056D430  Cell::CoordToIndex  this=Cell  sig=csp ====
int __thiscall Cell::CoordToIndex(Cell *this, __int16 *a2)
{
  return *a2 + a2[1] * ((int)this->Cell_field_0xF8 + (unsigned int)this->Cell_field_0xF4 + 1); /*0x56d450*/
}



// ==== 0x0056D460  Cell::SetRadar  this=Cell  sig=csp ====
int __thiscall Cell::SetRadar(Cell *this, __int16 *a2)
{
  signed int v2; // eax
  void *Cell_field_0x6C; // edx
  char *Cell_field_0x68; // edx
  char *v5; // ebp
  int v6; // edx
  int result; // eax
  bool v8; // zf
  int v9; // esi
  _DWORD *i; // eax
  int v11; // edx
  int v12; // edi
  _DWORD *v13; // esi
  char *v14; // ecx
  int v15; // [esp+Ch] [ebp-28h]
  char *v16; // [esp+10h] [ebp-24h]
  _DWORD v17[8]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+38h] [ebp+4h]

  v2 = *a2 + a2[1] * ((int)this->Cell_field_0xF8 + (unsigned int)this->Cell_field_0xF4 + 1); /*0x56d484*/
  if ( v2 >= 0 ) /*0x56d486*/
  {
    Cell_field_0x6C = this->Cell_field_0x6C; /*0x56d48c*/
    if ( v2 >= (int)Cell_field_0x6C ) /*0x56d491*/
      v2 = (signed int)Cell_field_0x6C - 1; /*0x56d493*/
  }
  else
  {
    v2 = 0; /*0x56d488*/
  }
  Cell_field_0x68 = (char *)this->Cell_field_0x68; /*0x56d496*/
  v17[2] = 1; /*0x56d499*/
  v17[6] = -1; /*0x56d4a1*/
  v5 = &Cell_field_0x68[4 * v2]; /*0x56d4a9*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x56d4b7*/
  v17[4] = result; /*0x56d4bd*/
  v17[0] = -result; /*0x56d4c3*/
  v17[1] = -(*(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]); /*0x56d4ce*/
  v17[3] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2; /*0x56d4d5*/
  v17[5] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x56d4dc*/
  v6 = -1 - result; /*0x56d4e3*/
  LOBYTE(result) = *v5; /*0x56d4e5*/
  v8 = *v5 == 7; /*0x56d4e8*/
  v17[7] = v6; /*0x56d4ea*/
  if ( !v8 ) /*0x56d4ee*/
  {
    v9 = 0; /*0x56d4f0*/
    for ( i = v17; ; ++i ) /*0x56d4f2*/
    {
      v16 = &v5[4 * *i]; /*0x56d502*/
      if ( !*v16 ) /*0x56d4f8*/
        break; /*0x56d4f8*/
      if ( ++v9 >= 8 ) /*0x56d50f*/
        return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d50f*/
    }
    if ( !&v5[4 * *i] ) /*0x56d4fc*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d4fc*/
    v11 = this->Cell_field_0x18[0]; /*0x56d528*/
    v18 = 0; /*0x56d52c*/
    v12 = 0; /*0x56d534*/
    v13 = v17; /*0x56d536*/
    v15 = 8; /*0x56d53a*/
    do /*0x56d574*/
    {
      v14 = &v5[4 * *v13]; /*0x56d544*/
      if ( *(_WORD *)(v11 + 2 * *((unsigned __int16 *)v14 + 1)) != *(_WORD *)(v11 + 2 * v12) && *v14 != 7 ) /*0x56d55b*/
      {
        v12 = *((unsigned __int16 *)v14 + 1); /*0x56d55d*/
        ++v18; /*0x56d564*/
      }
      ++v13; /*0x56d56c*/
      --v15; /*0x56d570*/
    }
    while ( v15 ); /*0x56d574*/
    result = v18; /*0x56d576*/
    if ( v18 > 3 || *v5 ) /*0x56d580*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d516*/
    *((_WORD *)v5 + 1) = *((_WORD *)v16 + 1); /*0x56d58f*/
  }
  return result; /*0x56d51b*/
}



// ==== 0x0056D5A0  CellClass::DetermineTileConnectivity  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::DetermineTileConnectivity(CellClass *this, __int16 *a2)
{
  int v2; // eax
  int CellClass_field_6C; // edx
  int unknown68; // edx
  unsigned __int8 *v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // edi
  unsigned __int8 *v10; // ebp
  int v11; // ebx
  _DWORD *v12; // edi
  int v14; // [esp+10h] [ebp-28h]
  _DWORD v15[8]; // [esp+18h] [ebp-20h] BYREF
  __int16 *v16; // [esp+3Ch] [ebp+4h]

  v2 = *a2 + a2[1] * ((int)&this->radSite->AbstractClass + this->radLevel[1] + 1); /*0x56d5c5*/
  if ( v2 >= 0 ) /*0x56d5c7*/
  {
    CellClass_field_6C = this->CellClass_field_6C; /*0x56d5cd*/
    if ( v2 >= CellClass_field_6C ) /*0x56d5d2*/
      v2 = CellClass_field_6C - 1; /*0x56d5d4*/
  }
  else
  {
    v2 = 0; /*0x56d5c9*/
  }
  unknown68 = this->unknown68; /*0x56d5d7*/
  v15[2] = 1; /*0x56d5e0*/
  v15[6] = -1; /*0x56d5e8*/
  v5 = (unsigned __int8 *)(unknown68 + 4 * v2); /*0x56d5f0*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x56d5fa*/
  v7 = *v5; /*0x56d5fe*/
  v15[4] = v6; /*0x56d602*/
  v15[0] = -v6; /*0x56d608*/
  v15[1] = -(*(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]); /*0x56d613*/
  v15[3] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2; /*0x56d61a*/
  v15[5] = *(_DWORD *)&stru_87F5F0.__pad_58[664] + *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x56d621*/
  v15[7] = -1 - v6; /*0x56d62d*/
  if ( v7 != 7 ) /*0x56d631*/
  {
    v8 = 0; /*0x56d633*/
    v9 = v15; /*0x56d635*/
    while ( 1 ) /*0x56d63b*/
    {
      v10 = &v5[4 * *v9]; /*0x56d63b*/
      if ( *v10 == v7 ) /*0x56d649*/
        break; /*0x56d649*/
      ++v8; /*0x56d64b*/
      ++v9; /*0x56d64c*/
      if ( v8 >= 8 ) /*0x56d652*/
        goto LABEL_9; /*0x56d652*/
    }
    v11 = 0; /*0x56d668*/
    if ( !v10 ) /*0x56d66c*/
      goto LABEL_9; /*0x56d66c*/
    v16 = 0; /*0x56d671*/
    v12 = v15; /*0x56d675*/
    v14 = 8; /*0x56d679*/
    do /*0x56d6b3*/
    {
      if ( *((_WORD *)&this->attachedTag->AbstractClass + *(unsigned __int16 *)&v5[4 * *v12 + 2]) != *((_WORD *)&this->attachedTag->AbstractClass + v11) /*0x56d69a*/
        && v5[4 * *v12] != 7 )
      {
        v11 = *(unsigned __int16 *)&v5[4 * *v12 + 2]; /*0x56d69c*/
        v16 = (__int16 *)((char *)v16 + 1); /*0x56d6a3*/
      }
      ++v12; /*0x56d6ab*/
      --v14; /*0x56d6af*/
    }
    while ( v14 ); /*0x56d6b3*/
    if ( (int)v16 > 3 ) /*0x56d6ba*/
    {
LABEL_9:
      LOWORD(v6) = Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d654*/
      return v6; /*0x56d659*/
    }
    LOWORD(v6) = *((_WORD *)v10 + 1); /*0x56d6c1*/
    *((_WORD *)v5 + 1) = v6; /*0x56d6c5*/
  }
  return v6; /*0x56d65e*/
}



// ==== 0x0056D6E0  MapClass::ProcessRegion  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessRegion(MapClass *this)
{
  DynamicVector **p_MapClass_field_0x50; // edi
  void *MapClass_field_0xF4; // eax
  int result; // eax
  int v5; // ebp
  InfantryClass *NeighbourContent; // eax
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryClass *v9; // eax
  int v10; // ebx
  int v11; // ebx
  DynamicVector *v12; // eax
  DynamicVector *v13; // ecx
  int v14; // esi
  int v15; // ecx
  DynamicVector *v16; // eax
  int v17; // edx
  char *v18; // eax
  char v19; // al
  int v20; // ecx
  int v21; // eax
  Cell *i; // eax
  Cell *v23; // esi
  int v24; // edx
  int v25; // eax
  void *v26; // ecx
  int Cell_field_0x38; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  DynamicVector *v31; // eax
  DynamicVector *v32; // ecx
  int v33; // ebp
  int v34; // ecx
  DynamicVector *v35; // eax
  int v36; // edx
  char *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  p_MapClass_field_0x50 = &this->MapClass_field_0x50; /*0x56d6ef*/
  (*(void (__thiscall **)(DynamicVector **))this->MapClass_field_0x50->__pad_C)(&this->MapClass_field_0x50); /*0x56d6f4*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56d6f7*/
  *(_DWORD *)this->__pad_10C = 1; /*0x56d6fd*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x56d707*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x56d710*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !(unsigned __int8)Cell::IsInRange((Cell *)v5) && !(unsigned __int8)Cell::IsInRange2((Cell *)v5) ) /*0x56d74c*/
      {
        if ( (unsigned __int8)InfantryClass::IsInBounds((InfantryClass *)v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 2u), /*0x56d7b3*/
                (unsigned __int8)InfantryClass::IsInBounds(NeighbourContent))
            && (v7 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 6u),
                (unsigned __int8)InfantryClass::IsInBounds(v7))
            || (v8 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 4u),
                (unsigned __int8)InfantryClass::IsInBounds(v8))
            && (v9 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 0),
                (unsigned __int8)InfantryClass::IsInBounds(v9)) )
          {
            v42 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((Cell *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((Cell *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7f2*/
              v12 = p_MapClass_field_0x50[2]; /*0x56d7f5*/
              v13 = p_MapClass_field_0x50[4]; /*0x56d7f8*/
              v14 = *(_DWORD *)(v5 + 36); /*0x56d7fb*/
              LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( (int)v13 < (int)v12 /*0x56d82e*/
                || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v12)
                && (v15 = (int)p_MapClass_field_0x50[5], v15 > 0)
                && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                     p_MapClass_field_0x50,
                     &v12->__pad_0[v15],
                     0) )
              {
                v16 = p_MapClass_field_0x50[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                p_MapClass_field_0x50[4] = (DynamicVector *)v16->DynamicVector_field_0x1; /*0x56d843*/
                v18 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v16]; /*0x56d84c*/
                *(_DWORD *)v18 = v14; /*0x56d84e*/
                *((_DWORD *)v18 + 1) = v11; /*0x56d850*/
                *((_DWORD *)v18 + 2) = v17; /*0x56d853*/
                *((_DWORD *)v18 + 3) = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((Cell *)v5); /*0x56d860*/
      v20 = g_Cell_BuildabilityLUT; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(_DWORD *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(unsigned __int8 *)(v5 + 282) ) /*0x56d889*/
        break; /*0x56d889*/
LABEL_42:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d9e9*/
      v5 = result; /*0x56d9f2*/
      if ( !result ) /*0x56d9f6*/
        return result; /*0x56d9f6*/
    }
    v38 = 0; /*0x56d896*/
    v41 = dword_82A774[v21]; /*0x56d89b*/
    v39 = 1; /*0x56d89f*/
    for ( i = (Cell *)Cell::GetNeighbourContent((Cell *)v5, v41); ; i = (Cell *)Cell::GetNeighbourContent(v23, v41) ) /*0x56d8a7*/
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = i; /*0x56d8b0*/
        v24 = *(__int16 *)&i->__pad_1C[8]; /*0x56d8b2*/
        v25 = *(__int16 *)&i->__pad_1C[10]; /*0x56d8b6*/
        v26 = this->MapClass_field_0xF4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= (int)v26 /*0x56d8f8*/
          || v24 - v25 >= (int)v26
          || v25 - v24 >= (int)v26
          || v43 > (int)v26 + 2 * *(_DWORD *)this->__pad_F8 )
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
LABEL_36:
          v30 = *((_DWORD *)Cell::GetNeighbourContent(v23, ((_BYTE)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = p_MapClass_field_0x50[2]; /*0x56d990*/
          v32 = p_MapClass_field_0x50[4]; /*0x56d993*/
          v33 = *(_DWORD *)(v5 + 36); /*0x56d99a*/
          LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( (int)v32 < (int)v31 /*0x56d9c2*/
            || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v31)
            && (v34 = (int)p_MapClass_field_0x50[5], v34 > 0)
            && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                 p_MapClass_field_0x50,
                 &v31->__pad_0[v34],
                 0) )
          {
            v35 = p_MapClass_field_0x50[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            p_MapClass_field_0x50[4] = (DynamicVector *)v35->DynamicVector_field_0x1; /*0x56d9d3*/
            v37 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v35]; /*0x56d9dc*/
            *(_DWORD *)v37 = v33; /*0x56d9de*/
            *((_DWORD *)v37 + 1) = v30; /*0x56d9e0*/
            *((_DWORD *)v37 + 2) = v36; /*0x56d9e3*/
            *((_DWORD *)v37 + 3) = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !(unsigned __int8)Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d90d*/
        v28 = g_Cell_BuildabilityLUT; /*0x56d910*/
LABEL_27:
        v29 = Cell_field_0x38 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == (unsigned __int8)v23->__pad_FC[30] ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
LABEL_30:
        i = (Cell *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( (unsigned __int8)Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( ((int)v23->Cell_field_0x140 & 0x100) != 0 ) /*0x56d960*/
        goto LABEL_30; /*0x56d960*/
      v39 = 0; /*0x56d966*/
    }
  }
  return result; /*0x56d9fd*/
}



// ==== 0x0056DA10  ObjectClass::GetRegionMap  this=ObjectClass  sig=csp ====
int __thiscall GetRegionMap(ObjectClass *this, __int16 *a2, signed int a3, int a4)
{
  __int16 **i; // ecx
  __int16 *v6; // eax
  __int64 v7; // rax
  int v9; // [esp+14h] [ebp-4h]
  __int16 *v10; // [esp+1Ch] [ebp+4h]

  v9 = this->customSound_controller[4]; /*0x56da24*/
  if ( a4 >= v9 ) /*0x56da28*/
    return -1; /*0x56dac3*/
  for ( i = (__int16 **)(16 * a4 + this->customSound_controller[1]); ; i += 4 ) /*0x56da38*/
  {
    if ( i[3] ) /*0x56da3a*/
      goto LABEL_12; /*0x56da3f*/
    v6 = i[1]; /*0x56da43*/
    v10 = *i; /*0x56da4e*/
    if ( (__int16)*i != (__int16)v6 ) /*0x56da52*/
      break; /*0x56da52*/
    LOWORD(v6) = a2[1]; /*0x56da5a*/
    if ( (__int16)v6 >= SHIWORD(v10) && (__int16)v6 <= SHIWORD(v6) && (int)abs32(*a2 - (__int16)*i) <= a3 ) /*0x56da7c*/
      return a4; /*0x56da7c*/
LABEL_12:
    if ( ++a4 >= v9 ) /*0x56dab7*/
      return -1; /*0x56dab7*/
  }
  if ( *a2 > (__int16)v6 ) /*0x56da86*/
    goto LABEL_12; /*0x56da86*/
  if ( *a2 < (__int16)*i ) /*0x56da8b*/
    goto LABEL_12; /*0x56da8b*/
  v7 = a2[1] - SHIWORD(v10); /*0x56da98*/
  if ( (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > a3 ) /*0x56daa3*/
    goto LABEL_12; /*0x56daa3*/
  return a4; /*0x56dab9*/
}



// ==== 0x0056DAE0  MapClass::ClearRegions  this=MapClass  sig=csp ====
char __thiscall MapClass::ClearRegions(MapClass *this, __int16 *a2)
{
  int RegionMap; // edi
  char v6; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(this); /*0x56dafc*/
    RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  v6 = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(_BYTE *)(16 * RegionMap + *(_DWORD *)this->__pad_54 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph((ObjectClass *)this, (int *)(16 * RegionMap + *(_DWORD *)this->__pad_54)); /*0x56db3b*/
      v6 = 1; /*0x56db43*/
      *(_BYTE *)(*(_DWORD *)this->__pad_54 + 16 * RegionMap + 8) = 0; /*0x56db48*/
    }
    RegionMap = GetRegionMap((ObjectClass *)this, a2, 3, RegionMap + 1); /*0x56db59*/
  }
  while ( RegionMap != -1 ); /*0x56db5e*/
  return v6; /*0x56db14*/
}



// ==== 0x0056DB70  ObjectClass::InvalidateTileRegionMap  this=ObjectClass  sig=csp ====
int __thiscall InvalidateTileRegionMap(ObjectClass *this, __int16 *a2)
{
  int result; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  char v8; // cl
  _BYTE *v9; // eax
  char v10; // [esp+10h] [ebp+4h]

  result = GetRegionMap(this, a2, 3, 0); /*0x56db7e*/
  v5 = result; /*0x56db83*/
  if ( result == -1 /*0x56dba2*/
    && (MapClass::ProcessRegion((MapClass *)this), result = GetRegionMap(this, a2, 3, 0), v5 = result, result == -1) )
  {
    LOBYTE(result) = 0; /*0x56dba6*/
  }
  else
  {
    v10 = 0; /*0x56dbaf*/
    if ( v5 != -1 ) /*0x56dbb4*/
    {
      do /*0x56dc0f*/
      {
        v6 = this->customSound_controller[1]; /*0x56dbb7*/
        v7 = 16 * v5; /*0x56dbbc*/
        v8 = *(_BYTE *)(v6 + 16 * v5 + 8); /*0x56dbbf*/
        v9 = (_BYTE *)(v6 + 16 * v5 + 8); /*0x56dbc3*/
        if ( !v8 ) /*0x56dbc9*/
        {
          *v9 = 1; /*0x56dbcb*/
          BuildTileAdjacencyTable(this, (int *)(v7 + this->customSound_controller[1])); /*0x56dbd6*/
          if ( !MapSeed::CheckTileMatch( /*0x56dbf0*/
                  (MapSeed *)this,
                  (__int16 *)(this->customSound_controller[1] + v7),
                  (__int16 *)(this->customSound_controller[1] + v7 + 4),
                  0,
                  0,
                  0,
                  0) )
            v10 = 1; /*0x56dbf9*/
        }
        result = GetRegionMap(this, a2, 3, v5 + 1); /*0x56dc05*/
        v5 = result; /*0x56dc0a*/
      }
      while ( result != -1 ); /*0x56dc0f*/
    }
    LOBYTE(result) = v10; /*0x56dc12*/
  }
  return result; /*0x56dba4*/
}



// ==== 0x0056DC20  LayerClass::Pathfinding_Find  this=LayerClass  sig=csp ====
_DWORD *__fastcall LayerClass::Pathfinding_Find(
        Type *a1,
        int a2,
        _DWORD *a3,
        __int16 *a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14,
        __int16 *a15,
        char a16,
        char a17)
{
  MapClass *v17; // ebx
  int v18; // edx
  Type *v19; // eax
  unsigned int v20; // eax
  int *v21; // eax
  unsigned int v22; // eax
  int *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  Cell *v29; // eax
  Cell *v30; // esi
  __int64 v31; // rax
  int *v32; // ecx
  __int16 v33; // ax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  Cell *v38; // eax
  Cell *v39; // esi
  __int64 v40; // rax
  int *v41; // ecx
  __int16 v42; // ax
  int v43; // esi
  _DWORD *v44; // eax
  int v45; // edi
  int *v46; // ebp
  unsigned int v47; // eax
  Cell *v48; // eax
  Cell *v49; // esi
  __int64 v50; // rax
  __int16 v51; // ax
  int v52; // esi
  _DWORD *v53; // eax
  unsigned int v54; // eax
  Cell *v55; // eax
  Cell *v56; // esi
  __int64 v57; // rax
  __int16 v58; // ax
  int v59; // esi
  _DWORD *v60; // eax
  _DWORD *v61; // ebx
  unsigned __int16 *v62; // esi
  unsigned __int16 v63; // di
  __int16 v64; // bp
  _DWORD *v65; // eax
  Type *v66; // edx
  Type *v67; // ecx
  Type *v69; // ebx
  int v70; // edi
  _DWORD *v71; // eax
  _DWORD *v72; // esi
  int v73; // eax
  double v75; // [esp+0h] [ebp-1F4h]
  int v76; // [esp+18h] [ebp-1DCh] BYREF
  char v77; // [esp+1Fh] [ebp-1D5h]
  int v78; // [esp+20h] [ebp-1D4h]
  int v79; // [esp+24h] [ebp-1D0h]
  int v80; // [esp+28h] [ebp-1CCh]
  Type *v81; // [esp+2Ch] [ebp-1C8h]
  Type *v82; // [esp+30h] [ebp-1C4h]
  _DWORD *i; // [esp+34h] [ebp-1C0h]
  int v84; // [esp+38h] [ebp-1BCh]
  int v85; // [esp+3Ch] [ebp-1B8h]
  int v86; // [esp+40h] [ebp-1B4h]
  int *v87; // [esp+44h] [ebp-1B0h]
  int v88; // [esp+48h] [ebp-1ACh]
  double v89; // [esp+4Ch] [ebp-1A8h] BYREF
  int v90; // [esp+54h] [ebp-1A0h]
  int v91; // [esp+58h] [ebp-19Ch] BYREF
  int v92; // [esp+5Ch] [ebp-198h]
  int v93; // [esp+60h] [ebp-194h]
  _DWORD v94[3]; // [esp+64h] [ebp-190h] BYREF
  _DWORD v95[3]; // [esp+70h] [ebp-184h] BYREF
  _DWORD v96[3]; // [esp+7Ch] [ebp-178h] BYREF
  int v97[4]; // [esp+88h] [ebp-16Ch] BYREF
  int v98[4]; // [esp+98h] [ebp-15Ch] BYREF
  int v99[4]; // [esp+A8h] [ebp-14Ch] BYREF
  int v100[4]; // [esp+B8h] [ebp-13Ch] BYREF
  char v101[4]; // [esp+C8h] [ebp-12Ch] BYREF
  char v102[4]; // [esp+CCh] [ebp-128h] BYREF
  char v103[4]; // [esp+D0h] [ebp-124h] BYREF
  _DWORD v104[24]; // [esp+D4h] [ebp-120h] BYREF
  _DWORD v105[24]; // [esp+134h] [ebp-C0h] BYREF
  _DWORD v106[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = (MapClass *)a1; /*0x56dc27*/
  v18 = *a4; /*0x56dc33*/
  v19 = (Type *)a4[1]; /*0x56dc36*/
  v81 = a1; /*0x56dc49*/
  v78 = 0; /*0x56dc4d*/
  v86 = v18; /*0x56dc51*/
  v82 = v19; /*0x56dc55*/
  v77 = 0; /*0x56dc59*/
  if ( a6 == 0xFFFF ) /*0x56dc5e*/
    a6 = -1; /*0x56dc60*/
  v20 = v18 + ((_DWORD)v19 << 9); /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a4; /*0x56dc88*/
    v21 = &g_MissionQueueFrame.briefing[130]; /*0x56dc8d*/
  }
  v84 = *((char *)v21 + 283); /*0x56dc99*/
  if ( a8 ) /*0x56dca6*/
  {
    v22 = *a4 + (a4[1] << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56dcc6*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a4; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v84 += 4; /*0x56dcdc*/
  }
  v24 = a1[62].Type_field_00 + a1[61].Type_field_00; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (_DWORD *)v24; /*0x56dcfb*/
  v79 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_125; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v79; /*0x56dd09*/
    v26 = -v79; /*0x56dd0f*/
    if ( -v79 <= v79 ) /*0x56dd13*/
    {
      v87 = &v104[v78]; /*0x56dd24*/
      do /*0x56dd28*/
      {
        if ( a16 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        LOWORD(v88) = v86 + v26; /*0x56dd44*/
        v27 = (__int16)((_WORD)v82 - v25); /*0x56dd49*/
        HIWORD(v88) = (_WORD)v82 - v25; /*0x56dd4c*/
        v76 = v88; /*0x56dd5a*/
        v28 = (__int16)(v86 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v79; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v79; /*0x56dd82*/
        }
        g_MissionQueueFrame.briefing[139] = v88; /*0x56dd86*/
        v30 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56dd8c*/
LABEL_23:
        v99[1] = v27; /*0x56dd91*/
        v99[0] = (__int16)(v86 + v26); /*0x56dd9f*/
        v99[2] = a9; /*0x56ddad*/
        v99[3] = a10; /*0x56ddb9*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56de0e*/
          {
            if ( !a12 /*0x56de4c*/
              || (v31 = v84 - 4 * (((unsigned int)v30->Cell_field_0x140 >> 8) & 1) - v30->Cell_field_0x11B[0],
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v30)) /*0x56de9d*/
                && (a14 || ((int)v30->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v99, -1)) )
              {
                v32 = v87; /*0x56deaa*/
                v33 = v76; /*0x56deae*/
                v34 = v78; /*0x56deb2*/
                *v87 = v76; /*0x56deb6*/
                v87 = v32 + 1; /*0x56debb*/
                v78 = v34 + 1; /*0x56dec9*/
                if ( a8 /*0x56df18*/
                  || (v94[0] = (v33 << 8) + 128,
                      v94[1] = (SHIWORD(v76) << 8) + 128,
                      v94[2] = 0,
                      v35 = Terrain::ClimbCheck(v101, v94),
                      v76 == *v35) )
                {
                  v77 = 1; /*0x56df25*/
                }
              }
            }
          }
        }
LABEL_36:
        if ( v78 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( a16 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        HIWORD(v90) = (_WORD)v82 + v25; /*0x56df5a*/
        LOWORD(v90) = v86 + v26; /*0x56df5f*/
        v36 = (__int16)((_WORD)v82 + v25); /*0x56df68*/
        v76 = v90; /*0x56df70*/
        v37 = (__int16)(v86 + v26) + (v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v79; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v79; /*0x56df98*/
        }
        g_MissionQueueFrame.briefing[139] = v90; /*0x56df9c*/
        v39 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56dfa2*/
LABEL_44:
        v98[1] = v36; /*0x56dfa7*/
        v98[3] = a10; /*0x56dfbe*/
        v98[0] = (__int16)(v86 + v26); /*0x56dfc8*/
        v98[2] = a9; /*0x56dfcf*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e024*/
          {
            if ( !a12 /*0x56e062*/
              || (v40 = v84 - 4 * (((unsigned int)v39->Cell_field_0x140 >> 8) & 1) - v39->Cell_field_0x11B[0],
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v39)) /*0x56e0b3*/
                && (a14 || ((int)v39->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v98, -1)) )
              {
                v41 = v87; /*0x56e0c0*/
                v42 = v76; /*0x56e0c4*/
                v43 = v78; /*0x56e0c8*/
                *v87 = v76; /*0x56e0cc*/
                v87 = v41 + 1; /*0x56e0d1*/
                v78 = v43 + 1; /*0x56e0df*/
                if ( a8 /*0x56e12f*/
                  || (v95[0] = (v42 << 8) + 128,
                      v95[1] = (SHIWORD(v76) << 8) + 128,
                      v95[2] = 0,
                      v44 = Terrain::ClimbCheck(v103, v95),
                      v76 == *v44) )
                {
                  v77 = 1; /*0x56e13c*/
                }
              }
            }
          }
        }
LABEL_57:
        if ( v78 == 24 ) /*0x56e146*/
          goto LABEL_103; /*0x56e146*/
        ++v26; /*0x56e14c*/
      }
      while ( v26 <= v25 ); /*0x56dd28*/
    }
    v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      v46 = &v104[v78]; /*0x56e176*/
      do /*0x56e17d*/
      {
        if ( a16 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        LOWORD(v85) = v86 - v79; /*0x56e19c*/
        HIWORD(v85) = v45 + (_WORD)v82; /*0x56e1a1*/
        v76 = v85; /*0x56e1b2*/
        v47 = (__int16)(v86 - v79) + ((__int16)(v45 + (_WORD)v82) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = (MapClass *)v81; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = (MapClass *)v81; /*0x56e1d9*/
        }
        g_MissionQueueFrame.briefing[139] = v85; /*0x56e1dd*/
        v49 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56e1e3*/
LABEL_67:
        v100[0] = (__int16)(v86 - v79); /*0x56e1e8*/
        v100[1] = (__int16)(v45 + (_WORD)v82); /*0x56e1fd*/
        v100[2] = a9; /*0x56e209*/
        v100[3] = a10; /*0x56e210*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e265*/
          {
            if ( !a12 /*0x56e2a5*/
              || (v50 = v84 - 4 * (((unsigned int)v49->Cell_field_0x140 >> 8) & 1) - v49->Cell_field_0x11B[0],
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v49)) /*0x56e2f6*/
                && (a14 || ((int)v49->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v100, -1)) )
              {
                v51 = v76; /*0x56e303*/
                v52 = v78; /*0x56e307*/
                *v46++ = v76; /*0x56e312*/
                v78 = v52 + 1; /*0x56e31b*/
                if ( a8 /*0x56e371*/
                  || (v96[0] = (v51 << 8) + 128,
                      v96[1] = (SHIWORD(v76) << 8) + 128,
                      v96[2] = 0,
                      v53 = Terrain::ClimbCheck(v102, v96),
                      v76 == *v53) )
                {
                  v77 = 1; /*0x56e37e*/
                }
              }
            }
          }
        }
LABEL_80:
        if ( v78 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        HIWORD(v80) = v45 + (_WORD)v82; /*0x56e39c*/
        LOWORD(v80) = v79 + v86; /*0x56e3a6*/
        v76 = v80; /*0x56e3b4*/
        v54 = (__int16)(v79 + v86) + ((__int16)(v45 + (_WORD)v82) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = (MapClass *)v81; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = (MapClass *)v81; /*0x56e3db*/
        }
        g_MissionQueueFrame.briefing[139] = v80; /*0x56e3df*/
        v56 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x56e3e5*/
LABEL_86:
        v97[0] = (__int16)(v79 + v86); /*0x56e3ea*/
        v97[1] = (__int16)(v45 + (_WORD)v82); /*0x56e3ff*/
        v97[2] = a9; /*0x56e40b*/
        v97[3] = a10; /*0x56e412*/
        if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, a9, a10, a5, a6, a7, -1, a8, a11) ) /*0x56e467*/
          {
            if ( !a12 /*0x56e4a7*/
              || (v57 = v84 - 4 * (((unsigned int)v56->Cell_field_0x140 >> 8) & 1) - v56->Cell_field_0x11B[0],
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!a13 || (unsigned __int8)Cell::IsBuildableAdvanced(v56)) /*0x56e4f8*/
                && (a14 || ((int)v56->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (unsigned __int8)MapClass::IsAreaFree(v17, v97, -1)) )
              {
                v58 = v76; /*0x56e501*/
                v59 = v78; /*0x56e505*/
                *v46++ = v76; /*0x56e510*/
                v78 = v59 + 1; /*0x56e519*/
                if ( a8 /*0x56e566*/
                  || (v91 = (v58 << 8) + 128,
                      v92 = (SHIWORD(v76) << 8) + 128,
                      v93 = 0,
                      v60 = Terrain::ClimbCheck(&v89, &v91),
                      v76 == *v60) )
                {
                  v77 = 1; /*0x56e573*/
                }
              }
            }
          }
        }
        if ( v78 == 24 ) /*0x56e57d*/
          goto LABEL_103; /*0x56e57d*/
        ++v45; /*0x56e583*/
      }
      while ( v45 <= v79 - 1 ); /*0x56e17d*/
    }
    if ( v77 ) /*0x56e59c*/
      break; /*0x56e59c*/
    ++v79; /*0x56e5a9*/
  }
  while ( v79 < (int)i ); /*0x56e5ad*/
LABEL_103:
  if ( v78 <= 0 ) /*0x56e5b9*/
  {
LABEL_125:
    *a3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56e7aa*/
    return a3; /*0x56e79a*/
  }
  v81 = 0; /*0x56e5c5*/
  v82 = 0; /*0x56e5c9*/
  v61 = v106; /*0x56e5da*/
  v62 = (unsigned __int16 *)v104; /*0x56e5e1*/
  i = v105; /*0x56e5e8*/
  v80 = v78; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *v62; /*0x56e5f0*/
    v64 = v62[1]; /*0x56e5f3*/
    v91 = ((__int16)*v62 << 8) + 128; /*0x56e60a*/
    v92 = (v64 << 8) + 128; /*0x56e622*/
    v93 = 0; /*0x56e626*/
    v85 = *Terrain::ClimbCheck(&v89, &v91); /*0x56e638*/
    if ( v85 == __PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = i; /*0x56e645*/
      v66 = v81; /*0x56e64b*/
      *i = *(_DWORD *)v62; /*0x56e64f*/
      v81 = (Type *)((char *)&v66->Type_field_00 + 1); /*0x56e655*/
      i = v65 + 1; /*0x56e659*/
    }
    else
    {
      v67 = (Type *)((char *)&v82->Type_field_00 + 1); /*0x56e665*/
      *v61 = *(_DWORD *)v62; /*0x56e666*/
      v82 = v67; /*0x56e668*/
      ++v61; /*0x56e66c*/
    }
    v62 += 2; /*0x56e673*/
    --v80; /*0x56e677*/
  }
  while ( v80 ); /*0x56e67b*/
  if ( *a15 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56e6a6*/
    && a15[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] )
  {
    if ( v81 ) /*0x56e6b0*/
      *a3 = v105[*(_DWORD *)&stru_A8EB00.?[416] % (int)v81]; /*0x56e6c6*/
    else
      *a3 = v106[*(_DWORD *)&stru_A8EB00.?[416] % (int)v82]; /*0x56e6e5*/
    return a3; /*0x56e6b4*/
  }
  else
  {
    v69 = v81; /*0x56e6f2*/
    if ( !v81 ) /*0x56e6f4*/
      v69 = v82; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    v89 = 100000.0; /*0x56e6fa*/
    for ( i = *(_DWORD **)&g_MissionQueueFrame.waypoints[2134]; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = &v105[v70]; /*0x56e718*/
      if ( !v81 ) /*0x56e71f*/
        v71 = &v106[v70]; /*0x56e721*/
      v72 = (_DWORD *)*v71; /*0x56e728*/
      v73 = (__int16)*v71 - *a15; /*0x56e73c*/
      v80 = v73 * v73 + (SHIWORD(v72) - a15[1]) * (SHIWORD(v72) - a15[1]); /*0x56e751*/
      __asm /*0x56e755*/
      {
        fild [esp+1F4h+var_1CC]
        fstp [esp+1F4h+var_1F4]; double
      }
      Math::Sqrt(v75); /*0x56e75c*/
      __asm { fcom [esp+1F4h+var_1A8] } /*0x56e761*/
      __asm { fnstsw ax }
      if ( (_AX & 0x100) != 0 ) /*0x56e76d*/
      {
        __asm { fstp [esp+1ECh+var_1A8] } /*0x56e76f*/
        i = v72; /*0x56e773*/
      }
      else
      {
        __asm { fstp st } /*0x56e779*/
      }
    }
    *a3 = i; /*0x56e78e*/
    return a3; /*0x56e780*/
  }
}



// ==== 0x0056E7C0  MapClass::CheckCellsBuildable  this=MapClass  sig=csp ====
char __stdcall MapClass_CheckCellsBuildable(
        _WORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9)
{
  int v9; // ebp
  int v11; // esi
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v16; // [esp+2Ch] [ebp+1Ch]

  v9 = 0; /*0x56e7c6*/
  if ( a2 <= 0 ) /*0x56e7cc*/
    return 1; /*0x56e87c*/
  while ( 1 ) /*0x56e7de*/
  {
    v11 = 0; /*0x56e7de*/
    if ( a3 > 0 ) /*0x56e7e2*/
      break; /*0x56e7e2*/
LABEL_11:
    if ( ++v9 >= a2 ) /*0x56e876*/
      return 1; /*0x56e876*/
  }
  while ( 1 ) /*0x56e7f5*/
  {
    HIWORD(v16) = v11 + a1[1]; /*0x56e7f5*/
    LOWORD(v16) = v9 + *a1; /*0x56e7fa*/
    v12 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(_DWORD **)(dword_87F924 + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = &unk_ABDC50; /*0x56e828*/
      dword_ABDC74 = v16; /*0x56e82d*/
    }
    if ( a9 && v14[17] != -1 || !Cell::IsBuildable((int)v14, a4, 0, 0, a5, a6, a7, a8) ) /*0x56e859*/
      return 0; /*0x56e87c*/
    if ( ++v11 >= a3 ) /*0x56e869*/
      goto LABEL_11; /*0x56e869*/
  }
}



// ==== 0x0056E890  ObjectClass::ProcessDataHouseClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataHouseClass(ObjectClass *this, __int16 *a2, _DWORD *a3, int *a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _DWORD *StartCoords; // eax
  int v10; // eax
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *a2 == *(_WORD *)&g_MissionQueueFrame.waypoints[2134] && a2[1] == *(_WORD *)&g_MissionQueueFrame.waypoints[2136] ) /*0x56e8b2*/
    return 0; /*0x56e8b2*/
  v4 = this->q03D; /*0x56e8b8*/
  v5 = *a2; /*0x56e8be*/
  v6 = a2[1]; /*0x56e8c1*/
  if ( v6 + v5 <= v4 ) /*0x56e8ca*/
    return 0; /*0x56e8ca*/
  if ( v5 - v6 >= v4 ) /*0x56e8d6*/
    return 0; /*0x56e8d6*/
  if ( v6 - v5 >= v4 ) /*0x56e8e0*/
    return 0; /*0x56e8e0*/
  if ( v6 + v5 > v4 + 2 * *((_DWORD *)this + 62) ) /*0x56e8ed*/
    return 0; /*0x56e8ed*/
  v7 = 0; /*0x56e8f4*/
  if ( stru_A80220.? <= 0 ) /*0x56e8f8*/
    return 0; /*0x56e961*/
  while ( 1 ) /*0x56e904*/
  {
    v8 = *((_DWORD *)stru_A80220.? + v7); /*0x56e904*/
    if ( v8 ) /*0x56e909*/
    {
      if ( !*(_BYTE *)(v8 + 501) ) /*0x56e90b*/
      {
        StartCoords = HouseClass::GetStartCoords(*((HouseClass **)stru_A80220.? + v7), v12); /*0x56e91c*/
        if ( *StartCoords != g_MissionQueueFrame.briefing[114] /*0x56e945*/
          || StartCoords[1] != g_MissionQueueFrame.briefing[115]
          || StartCoords[2] != g_MissionQueueFrame.briefing[116] )
        {
          v10 = sub_4FFD90((ObjectClass *)v8, a2); /*0x56e94a*/
          *a4 = v10; /*0x56e952*/
          if ( v10 != -1 ) /*0x56e955*/
            break; /*0x56e955*/
        }
      }
    }
    if ( ++v7 >= stru_A80220.? ) /*0x56e95f*/
      return 0; /*0x56e95f*/
  }
  *a3 = *(_DWORD *)(*(_DWORD *)(v8 + 52) + 184); /*0x56e97d*/
  return 1; /*0x56e961*/
}



// ==== 0x0056E990  Cell::UpdateTileType  this=Cell  sig=csp ====
char __stdcall Cell_UpdateTileType(__int16 *a1, int a2, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  char v12; // si
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  _DWORD v22[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v23; // [esp+2Ch] [ebp+4h]

  v4 = *a1 + (a1[1] << 9); /*0x56e9a9*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56e9bf*/
  {
    v6 = v5; /*0x56e9c1*/
  }
  else
  {
    v6 = &unk_ABDC50; /*0x56e9c7*/
    dword_ABDC74 = *(_DWORD *)a1; /*0x56e9cc*/
  }
  if ( !(_BYTE)a3 ) /*0x56e9d7*/
  {
    v7 = (_DWORD *)v6[14]; /*0x56e9dd*/
    if ( v7 == (_DWORD *)0xFFFF ) /*0x56e9e5*/
      return (char)v7; /*0x56e9e5*/
    if ( v7 == (_DWORD *)255 ) /*0x56e9f0*/
      return (char)v7; /*0x56e9f0*/
    LOBYTE(v7) = CellClass::GetTerrainFlag(*((unsigned __int8 *)v6 + 282)); /*0x56ea0a*/
    if ( !(_BYTE)v7 ) /*0x56ea11*/
      return (char)v7; /*0x56ea11*/
    v8 = a1[1] << 8; /*0x56ea2a*/
    v22[0] = (*a1 << 8) + 128; /*0x56ea2d*/
    v22[1] = v8 + 128; /*0x56ea3b*/
    v22[2] = 0; /*0x56ea47*/
    Coord::To_Screen(g_TacticalClass_Instance, v22, &v20); /*0x56ea4f*/
    v21 -= 15 * *((char *)v6 + 283); /*0x56ea78*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x56ea98*/
  }
  v9 = a2; /*0x56eaa3*/
  LOBYTE(v7) = (v6[80] & 0x2000) != 0; /*0x56eaaa*/
  if ( (_BYTE)a2 != (_BYTE)v7 ) /*0x56eaae*/
  {
    v10 = v6[80]; /*0x56eab4*/
    v11 = v6[14]; /*0x56eabc*/
    BYTE1(v10) &= ~0x20u; /*0x56eac5*/
    v6[80] = v10 | ((a2 & 1) << 13); /*0x56eace*/
    v23 = v11; /*0x56ead9*/
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 9)); /*0x56eadd*/
    v12 = 0; /*0x56eae2*/
    v13 = 8; /*0x56eae4*/
    do /*0x56eb67*/
    {
      v14 = v12 & 7; /*0x56eaeb*/
      v15 = 4 * v14 + 9041544; /*0x56eaee*/
      LOWORD(v14) = *a1 + LOWORD(dword_89F688[v14]); /*0x56eb05*/
      HIWORD(a3) = a1[1] + *(_WORD *)(v15 + 2); /*0x56eb08*/
      LOWORD(a3) = v14; /*0x56eb0d*/
      v16 = SHIWORD(a3) << 9; /*0x56eb1c*/
      v17 = (__int16)v14 + v16 < 0; /*0x56eb1f*/
      v18 = (__int16)v14 + v16; /*0x56eb1f*/
      a2 = a3; /*0x56eb21*/
      if ( v17 || v18 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eb39*/
      {
        dword_ABDC74 = a3; /*0x56eb3b*/
        v7 = &unk_ABDC50; /*0x56eb41*/
      }
      if ( v7[14] == v23 ) /*0x56eb4f*/
        LOBYTE(v7) = Cell::UpdateTileType(&a2, v9, 1); /*0x56eb5d*/
      v12 = (v12 + 1) & 7; /*0x56eb63*/
      --v13; /*0x56eb66*/
    }
    while ( v13 ); /*0x56eb67*/
  }
  return (char)v7; /*0x56eb69*/
}



// ==== 0x0056EB80  Cell::SetTileType  this=ObjectClass  sig=csp ====
char __stdcall Cell_SetTileType(__int16 *a1, int a2, int a3, int a4, int a5)
{
  _WORD *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char result; // al
  int v10; // ebp
  int v11; // edx
  int v12; // ebx
  char v13; // si
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // [esp-4h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-14h] BYREF
  int v22; // [esp+18h] [ebp-10h]
  _DWORD v23[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = a1; /*0x56eb87*/
  v6 = *a1 + (a1[1] << 9); /*0x56eb99*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) != 0 ) /*0x56ebaf*/
  {
    v8 = v7; /*0x56ebb1*/
  }
  else
  {
    v8 = &unk_ABDC50; /*0x56ebb7*/
    dword_ABDC74 = *(_DWORD *)a1; /*0x56ebbc*/
  }
  result = a5; /*0x56ebc1*/
  v10 = a2; /*0x56ebc5*/
  if ( (_BYTE)a5 ) /*0x56ebcb*/
  {
    v12 = a3; /*0x56ec69*/
  }
  else
  {
    v11 = a1[1]; /*0x56ebd4*/
    v23[0] = (*a1 << 8) + 128; /*0x56ebe5*/
    v23[1] = (v11 << 8) + 128; /*0x56ebfe*/
    v23[2] = 0; /*0x56ec02*/
    Coord::To_Screen(g_TacticalClass_Instance, v23, &v21); /*0x56ec0a*/
    v22 -= 15 * *((char *)v8 + 283); /*0x56ec33*/
    result = Cell::CreateCrater(v21 - 128, v22 - 128, 256, 256, 0); /*0x56ec53*/
    v12 = v8[14]; /*0x56ec58*/
    v10 = a2; /*0x56ec5b*/
    if ( a2 == v12 ) /*0x56ec61*/
      return result; /*0x56ec61*/
  }
  if ( v8[14] != v10 ) /*0x56ec70*/
  {
    v20 = a4; /*0x56ec7c*/
    v8[14] = v10; /*0x56ec7d*/
    House::AnnounceUpgrade((int)v8, v20); /*0x56ec80*/
    BuildingClass::AddUpgrade(v8 + 9); /*0x56ec8e*/
    v13 = 0; /*0x56ec93*/
    a2 = 8; /*0x56ec95*/
    do /*0x56ed23*/
    {
      v14 = v13 & 7; /*0x56ec9f*/
      v15 = dword_89F688[v14]; /*0x56eca2*/
      LOWORD(v14) = v5[1] + HIWORD(dword_89F688[v14]); /*0x56ecb8*/
      LOWORD(a5) = *v5 + v15; /*0x56ecbc*/
      HIWORD(a5) = v14; /*0x56ecc4*/
      v16 = (__int16)v14 << 9; /*0x56ecd0*/
      v17 = (__int16)a5 + v16 < 0; /*0x56ecd3*/
      v18 = (__int16)a5 + v16; /*0x56ecd3*/
      a1 = (__int16 *)a5; /*0x56ecd5*/
      if ( v17 || v18 >= 0x40000 || (v19 = *(_DWORD **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eced*/
      {
        dword_ABDC74 = a5; /*0x56ecef*/
        v19 = &unk_ABDC50; /*0x56ecf5*/
      }
      if ( v19[14] == v12 ) /*0x56ecfd*/
        Cell::SetTileType(&a1, v10, v12, a4, 1); /*0x56ed11*/
      v13 = (v13 + 1) & 7; /*0x56ed1b*/
      result = --a2; /*0x56ed1e*/
    }
    while ( a2 ); /*0x56ed23*/
  }
  return result; /*0x56ed29*/
}



// ==== 0x0056ED40  globalHelper_06ED40  this=ObjectClass  sig=csp ====
char __stdcall sub_56ED40(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ed49*/
  v3 = dword_89F688[v2]; /*0x56ed4c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56ed62*/
  LOWORD(a2) = *a1 + v3; /*0x56ed66*/
  HIWORD(a2) = v2; /*0x56ed6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ed7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ed97*/
  {
    dword_ABDC74 = a2; /*0x56ed99*/
    v5 = unk_ABDC50; /*0x56ed9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56edab*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56edad*/
    if ( v6 <= 3u ) /*0x56edb6*/
    {
      *((_BYTE *)v5 + 286) = 4; /*0x56edc6*/
    }
    else if ( v6 == 5 ) /*0x56edbb*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x56edbd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56edde*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x56ede9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56ee37*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56edf3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainBridgeIndex + g_TerrainSoundTable2, -1, -1, 0); /*0x56ee03*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x56ee13*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56ee25*/
  }
  return v7; /*0x56ee08*/
}



// ==== 0x0056EE40  globalHelper_06EE40  this=ObjectClass  sig=csp ====
char __stdcall sub_56EE40(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ee49*/
  v3 = dword_89F688[v2]; /*0x56ee4c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56ee62*/
  LOWORD(a2) = *a1 + v3; /*0x56ee66*/
  HIWORD(a2) = v2; /*0x56ee6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ee7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ee97*/
  {
    dword_ABDC74 = a2; /*0x56ee99*/
    v5 = unk_ABDC50; /*0x56ee9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56eeab*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56eead*/
    if ( v6 <= 3u ) /*0x56eeb6*/
    {
      *((_BYTE *)v5 + 286) = 5; /*0x56eec6*/
    }
    else if ( v6 == 4 ) /*0x56eebb*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x56eebd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56eede*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x56eee9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56ef39*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56eef3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1, -1, -1, 0); /*0x56ef05*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x56ef15*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56ef27*/
  }
  return v7; /*0x56ef0a*/
}



// ==== 0x0056EF50  CellClass::UpdateVariant3  this=ObjectClass  sig=csp ====
char __stdcall sub_56EF50(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56ef56*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56ef77*/
  a2 = v3; /*0x56ef79*/
  *(_DWORD *)v32 = v3; /*0x56ef7d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56ef8c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56efa2*/
  {
    v6 = v5; /*0x56efa4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56efa8*/
    v6 = &unk_ABDC50; /*0x56efae*/
  }
  if ( (char)v6[320] < 0 ) /*0x56efba*/
  {
    v7 = v6[286]; /*0x56efbc*/
    if ( v7 <= 6u ) /*0x56efc4*/
    {
      v6[286] = 7; /*0x56f000*/
    }
    else if ( v7 == 8 ) /*0x56efc8*/
    {
      CellClass::UpdateVariant3(v32, v2); /*0x56efd2*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56efdd*/
      v6[286] = 0; /*0x56efe5*/
      *((_DWORD *)v6 + 17) = -1; /*0x56eff2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56eff9*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f018*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x56f027*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x56f2d7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x56f042*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f2be*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f04d*/
  {
    CellClass::UpdateVariant3(v32, v2); /*0x56f05b*/
    if ( (v6[282] & 1) != 0 ) /*0x56f067*/
    {
      HIWORD(a2) = v32[1]; /*0x56f078*/
      LOWORD(a2) = v32[0] - 1; /*0x56f07d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f08b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f0a1*/
      {
        v12 = v11; /*0x56f0a3*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x56f0ab*/
        dword_ABDC74 = a2; /*0x56f0b0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f0b5*/
      LOWORD(a2) = v32[0] - 1; /*0x56f0c6*/
      HIWORD(a2) = v32[1] - 1; /*0x56f0cb*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f0d9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f0ef*/
      {
        v15 = v14; /*0x56f0f1*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x56f0f9*/
        dword_ABDC74 = a2; /*0x56f0fe*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f103*/
      LOWORD(a2) = v32[0] - 1; /*0x56f114*/
      HIWORD(a2) = v32[1] + 1; /*0x56f119*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f127*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f13d*/
      {
        v18 = v17; /*0x56f13f*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x56f147*/
        dword_ABDC74 = a2; /*0x56f14c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f151*/
      HIWORD(a2) = v32[1]; /*0x56f15e*/
      v19 = (__int16)(v32[0] - 1); /*0x56f167*/
      v20 = v32[1] << 9; /*0x56f16a*/
      v21 = v19 + v20 < 0; /*0x56f16d*/
      v22 = v19 + v20; /*0x56f16d*/
      LOWORD(a2) = v32[0] - 1; /*0x56f16f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f188*/
      {
        v23 = (char *)&unk_ABDC50; /*0x56f18e*/
        dword_ABDC74 = a2; /*0x56f193*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x56f1db*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f1e9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f1ff*/
      {
        v26 = v25; /*0x56f201*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x56f209*/
        dword_ABDC74 = a2; /*0x56f20e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f214*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x56f227*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f235*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f24b*/
      {
        v29 = v28; /*0x56f24d*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x56f255*/
        dword_ABDC74 = a2; /*0x56f25a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f25f*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x56f277*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56f28a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f291*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f2a2*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0); /*0x56f1c0*/
  }
  return v9; /*0x56f1c5*/
}



// ==== 0x0056F2F0  CellClass::UpdateVariant4  this=ObjectClass  sig=csp ====
char __stdcall sub_56F2F0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56f2f6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56f317*/
  a2 = v3; /*0x56f319*/
  *(_DWORD *)v32 = v3; /*0x56f31d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f32c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f342*/
  {
    v6 = v5; /*0x56f344*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56f348*/
    v6 = &unk_ABDC50; /*0x56f34e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f35a*/
  {
    v7 = v6[286]; /*0x56f35c*/
    if ( v7 <= 6u ) /*0x56f364*/
    {
      v6[286] = 8; /*0x56f3a0*/
    }
    else if ( v7 == 7 ) /*0x56f368*/
    {
      CellClass::UpdateVariant4(v32, v2); /*0x56f372*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56f37d*/
      v6[286] = 0; /*0x56f385*/
      *((_DWORD *)v6 + 17) = -1; /*0x56f392*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f399*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f3b8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x56f3c7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x56f677*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x56f3e2*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f65e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f3ed*/
  {
    CellClass::UpdateVariant4(v32, v2); /*0x56f3fb*/
    if ( (v6[282] & 1) != 0 ) /*0x56f407*/
    {
      HIWORD(a2) = v32[1]; /*0x56f418*/
      LOWORD(a2) = v32[0] - 1; /*0x56f41d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f42b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f441*/
      {
        v12 = v11; /*0x56f443*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x56f44b*/
        dword_ABDC74 = a2; /*0x56f450*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f455*/
      LOWORD(a2) = v32[0] - 1; /*0x56f466*/
      HIWORD(a2) = v32[1] - 1; /*0x56f46b*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f479*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f48f*/
      {
        v15 = v14; /*0x56f491*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x56f499*/
        dword_ABDC74 = a2; /*0x56f49e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f4a3*/
      LOWORD(a2) = v32[0] - 1; /*0x56f4b4*/
      HIWORD(a2) = v32[1] + 1; /*0x56f4b9*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f4c7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f4dd*/
      {
        v18 = v17; /*0x56f4df*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x56f4e7*/
        dword_ABDC74 = a2; /*0x56f4ec*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f4f1*/
      HIWORD(a2) = v32[1]; /*0x56f4fe*/
      v19 = (__int16)(v32[0] - 1); /*0x56f507*/
      v20 = v32[1] << 9; /*0x56f50a*/
      v21 = v19 + v20 < 0; /*0x56f50d*/
      v22 = v19 + v20; /*0x56f50d*/
      LOWORD(a2) = v32[0] - 1; /*0x56f50f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f528*/
      {
        v23 = (char *)&unk_ABDC50; /*0x56f52e*/
        dword_ABDC74 = a2; /*0x56f533*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x56f57b*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f589*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f59f*/
      {
        v26 = v25; /*0x56f5a1*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x56f5a9*/
        dword_ABDC74 = a2; /*0x56f5ae*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f5b4*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x56f5c7*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f5d5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f5eb*/
      {
        v29 = v28; /*0x56f5ed*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x56f5f5*/
        dword_ABDC74 = a2; /*0x56f5fa*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f5ff*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x56f617*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56f62a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f631*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f642*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0); /*0x56f560*/
  }
  return v9; /*0x56f565*/
}



// ==== 0x0056F690  globalHelper_06F690  this=-  sig=csp ====
char __stdcall sub_56F690(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f699*/
  v3 = dword_89F688[v2]; /*0x56f69c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56f6b2*/
  LOWORD(a2) = *a1 + v3; /*0x56f6b6*/
  HIWORD(a2) = v2; /*0x56f6be*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56f6cd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f6e7*/
  {
    dword_ABDC74 = a2; /*0x56f6e9*/
    v5 = unk_ABDC50; /*0x56f6ef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f6fb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56f6fd*/
    if ( v6 >= 9u ) /*0x56f706*/
    {
      if ( v6 <= 0xCu ) /*0x56f70b*/
      {
        *((_BYTE *)v5 + 286) = 14; /*0x56f71b*/
      }
      else if ( v6 == 13 ) /*0x56f710*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x56f712*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f733*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x56f73e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56f78c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f748*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainBridgeIndex + g_TerrainSoundConfig, -1, -1, 0); /*0x56f758*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x56f768*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f77a*/
  }
  return v7; /*0x56f75d*/
}



// ==== 0x0056F7A0  globalHelper_06F7A0  this=-  sig=csp ====
char __stdcall sub_56F7A0(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f7a9*/
  v3 = dword_89F688[v2]; /*0x56f7ac*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x56f7c2*/
  LOWORD(a2) = *a1 + v3; /*0x56f7c6*/
  HIWORD(a2) = v2; /*0x56f7ce*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56f7dd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f7f7*/
  {
    dword_ABDC74 = a2; /*0x56f7f9*/
    v5 = unk_ABDC50; /*0x56f7ff*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f80b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x56f80d*/
    if ( v6 >= 9u ) /*0x56f816*/
    {
      if ( v6 <= 0xCu ) /*0x56f81b*/
      {
        *((_BYTE *)v5 + 286) = 13; /*0x56f82b*/
      }
      else if ( v6 == 14 ) /*0x56f820*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x56f822*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f843*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x56f84e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56f89e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f858*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 1, -1, -1, 0); /*0x56f86a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x56f87a*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f88c*/
  }
  return v7; /*0x56f86f*/
}



// ==== 0x0056F8B0  CellClass::UpdateTerrain  this=ObjectClass  sig=csp ====
char __stdcall CellClass_UpdateTerrain(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56f8b6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56f8d7*/
  a2 = v3; /*0x56f8d9*/
  *(_DWORD *)v31 = v3; /*0x56f8dd*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f8ec*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f902*/
  {
    v6 = v5; /*0x56f904*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56f908*/
    v6 = &unk_ABDC50; /*0x56f90e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f91a*/
  {
    v7 = v6[286]; /*0x56f91c*/
    if ( v7 >= 9u ) /*0x56f924*/
    {
      if ( v7 <= 0xFu ) /*0x56f928*/
      {
        v6[286] = 17; /*0x56f964*/
      }
      else if ( v7 == 16 ) /*0x56f92c*/
      {
        CellClass::UpdateTerrain(v31, v2); /*0x56f936*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56f941*/
        v6[286] = 0; /*0x56f949*/
        *((_DWORD *)v6 + 17) = -1; /*0x56f956*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f95d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f97c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x56f98b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x56fc66*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x56f9a6*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56fc4d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56f9b1*/
  {
    CellClass::UpdateTerrain(v31, v2); /*0x56f9bf*/
    v10 = v31[0] - 1; /*0x56f9d0*/
    if ( v6[282] <= 4u ) /*0x56f9d3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x56fb39*/
      HIWORD(a2) = v31[1]; /*0x56fb3e*/
      v22 = v10 + (v31[1] << 9); /*0x56fb4c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56fb62*/
      {
        v24 = v23; /*0x56fb64*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x56fb6c*/
        dword_ABDC74 = a2; /*0x56fb71*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56fb76*/
      a2 = *(_DWORD *)v31; /*0x56fb88*/
      v25 = v31[0] + (v31[1] << 9); /*0x56fb96*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56fbac*/
      {
        v27 = v26; /*0x56fbae*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x56fbb6*/
        dword_ABDC74 = a2; /*0x56fbbb*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56fbc0*/
      HIWORD(a2) = v31[1]; /*0x56fbcf*/
      LOWORD(a2) = v31[0] + 1; /*0x56fbd4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56fbeb*/
      CellClass::UpdateAnimations((int)v28); /*0x56fbf2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56fc03*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0); /*0x56fc2d*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x56f9dd*/
      HIWORD(a2) = v31[1] - 1; /*0x56f9e8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56f9f3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fa09*/
      {
        v13 = v12; /*0x56fa0b*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x56fa13*/
        dword_ABDC74 = a2; /*0x56fa18*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fa1d*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fa32*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fa40*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fa56*/
      {
        v16 = v15; /*0x56fa58*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x56fa60*/
        dword_ABDC74 = a2; /*0x56fa65*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fa6a*/
      LOWORD(a2) = v31[0] + 1; /*0x56fa7b*/
      HIWORD(a2) = v31[1] - 1; /*0x56fa80*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fa8e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56faa4*/
      {
        v19 = v18; /*0x56faa6*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x56faae*/
        dword_ABDC74 = a2; /*0x56fab3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fab8*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56facd*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fadb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56faf1*/
      {
        dword_ABDC74 = a2; /*0x56faf7*/
        v21 = (char *)&unk_ABDC50; /*0x56fafc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0); /*0x56fb27*/
    }
  }
  return v9; /*0x56fb2c*/
}



// ==== 0x0056FC80  CellClass::UpdateTileVariant2  this=ObjectClass  sig=csp ====
char __stdcall sub_56FC80(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x56fc86*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x56fca7*/
  a2 = v3; /*0x56fca9*/
  *(_DWORD *)v31 = v3; /*0x56fcad*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56fcbc*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56fcd2*/
  {
    v6 = v5; /*0x56fcd4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x56fcd8*/
    v6 = &unk_ABDC50; /*0x56fcde*/
  }
  if ( (char)v6[320] < 0 ) /*0x56fcea*/
  {
    v7 = v6[286]; /*0x56fcec*/
    if ( v7 >= 9u ) /*0x56fcf4*/
    {
      if ( v7 <= 0xFu ) /*0x56fcf8*/
      {
        v6[286] = 16; /*0x56fd34*/
      }
      else if ( v7 == 17 ) /*0x56fcfc*/
      {
        CellClass::UpdateTileVariant2(v31, v2); /*0x56fd06*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56fd11*/
        v6[286] = 0; /*0x56fd19*/
        *((_DWORD *)v6 + 17) = -1; /*0x56fd26*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56fd2d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56fd4c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x56fd5b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x570036*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x56fd76*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x57001d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56fd81*/
  {
    CellClass::UpdateTileVariant2(v31, v2); /*0x56fd8f*/
    v10 = v31[0] - 1; /*0x56fda0*/
    if ( v6[282] <= 4u ) /*0x56fda3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x56ff09*/
      HIWORD(a2) = v31[1]; /*0x56ff0e*/
      v22 = v10 + (v31[1] << 9); /*0x56ff1c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56ff32*/
      {
        v24 = v23; /*0x56ff34*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x56ff3c*/
        dword_ABDC74 = a2; /*0x56ff41*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56ff46*/
      a2 = *(_DWORD *)v31; /*0x56ff58*/
      v25 = v31[0] + (v31[1] << 9); /*0x56ff66*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56ff7c*/
      {
        v27 = v26; /*0x56ff7e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x56ff86*/
        dword_ABDC74 = a2; /*0x56ff8b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56ff90*/
      HIWORD(a2) = v31[1]; /*0x56ff9f*/
      LOWORD(a2) = v31[0] + 1; /*0x56ffa4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x56ffbb*/
      CellClass::UpdateAnimations((int)v28); /*0x56ffc2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56ffd3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0); /*0x56fffd*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x56fdad*/
      HIWORD(a2) = v31[1] - 1; /*0x56fdb8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56fdc3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fdd9*/
      {
        v13 = v12; /*0x56fddb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x56fde3*/
        dword_ABDC74 = a2; /*0x56fde8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fded*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fe02*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fe10*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fe26*/
      {
        v16 = v15; /*0x56fe28*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x56fe30*/
        dword_ABDC74 = a2; /*0x56fe35*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fe3a*/
      LOWORD(a2) = v31[0] + 1; /*0x56fe4b*/
      HIWORD(a2) = v31[1] - 1; /*0x56fe50*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fe5e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56fe74*/
      {
        v19 = v18; /*0x56fe76*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x56fe7e*/
        dword_ABDC74 = a2; /*0x56fe83*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fe88*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x56fe9d*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56feab*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56fec1*/
      {
        dword_ABDC74 = a2; /*0x56fec7*/
        v21 = (char *)&unk_ABDC50; /*0x56fecc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0); /*0x56fef7*/
    }
  }
  return v9; /*0x56fefc*/
}


