// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00560480  NetworkOptions::DlgProc  this=NetworkOptions  sig=csp ====
int __stdcall NetworkOptions::DlgProc(int hWnd, int a2, int a3, int hCtl)
{
  int result; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int i; // ebx
  #72 *v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  LRESULT (__stdcall *v17)(HWND, UINT, WPARAM, LPARAM); // esi
  __int16 v18; // dx
  #72 *v19; // eax
  int v20; // eax
  char *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int *v25; // esi
  #72 *v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // esi
  #72 *v30; // eax
  #72 *v31; // eax
  #72 *v32; // eax
  #72 *StringCSF; // [esp-10h] [ebp-120h]
  #72 *v34; // [esp-10h] [ebp-120h]
  #72 *v35; // [esp-10h] [ebp-120h]
  #72 *v36; // [esp-10h] [ebp-120h]
  #72 *v37; // [esp-10h] [ebp-120h]
  char v38; // [esp+13h] [ebp-FDh]
  int v39; // [esp+14h] [ebp-FCh]
  __int16 v40; // [esp+14h] [ebp-FCh]
  int v41; // [esp+18h] [ebp-F8h] BYREF
  int v42; // [esp+1Ch] [ebp-F4h]
  int v43; // [esp+20h] [ebp-F0h]
  int v44; // [esp+24h] [ebp-ECh]
  _DWORD *v45; // [esp+28h] [ebp-E8h]
  __int128 v46; // [esp+2Ch] [ebp-E4h] BYREF
  const __int16 *v47; // [esp+3Ch] [ebp-D4h]
  const __int16 *v48; // [esp+40h] [ebp-D0h]
  const __int16 *v49; // [esp+44h] [ebp-CCh]
  const __int16 *v50; // [esp+48h] [ebp-C8h]
  const __int16 *v51; // [esp+4Ch] [ebp-C4h]
  char v52[32]; // [esp+50h] [ebp-C0h] BYREF
  int lParam[16]; // [esp+70h] [ebp-A0h] BYREF
  char v54[32]; // [esp+B0h] [ebp-60h] BYREF
  char Destination[32]; // [esp+D0h] [ebp-40h] BYREF
  char String[32]; // [esp+F0h] [ebp-20h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, hCtl); /*0x5604ac*/
  if ( !result )
  {
    v45 = (_DWORD *)((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, 8); /*0x5604c2*/
    if ( a2 == 273 ) /*0x5604cd*/
    {
      switch ( (unsigned __int16)a3 ) /*0x560760*/
      {
        case 1u: /*0x560760*/
          v16 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1489); /*0x5607b1*/
          v17 = SendMessageA; /*0x5607b3*/
          ((void (__stdcall *)(int, int, int, __int128 *))SendMessageA)(v16, 1205, 16, &v46); /*0x5607c6*/
          if ( strlen((const char *)&v46) ) /*0x5607d1*/
          {
            v18 = atoi((const char *)&v46); /*0x5607e6*/
            v40 = v18; /*0x5607f4*/
            if ( strlen((const char *)&v46) > 5 || (unsigned __int16)v18 > 0x3FFFu ) /*0x560807*/
            {
              v48 = asc_82083C; /*0x560820*/
              StringCSF = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 983); /*0x56082d*/
              v19 = GetStringCSF((#72 *)aTxtInvalidSock, 0, g_Str_File_MainOpt_cpp, 983); /*0x56083f*/
              Dialog::ShowMessageBox(v19, StringCSF, 0, 0, 0); /*0x560849*/
              return 0; /*0x56085a*/
            }
          }
          else
          {
            v40 = -1; /*0x56085d*/
          }
          v20 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1491); /*0x56086b*/
          ((void (__stdcall *)(int, int, int, char *))SendMessageA)(v20, 1205, 32, v52); /*0x56087a*/
          strncpy(Destination, v52, 32); /*0x56088b*/
          if ( strlen(v52) ) /*0x56089c*/
          {
            v21 = strtok(v52, asc_826598); /*0x5608b1*/
            v22 = -1; /*0x5608b9*/
            v23 = -1; /*0x5608bc*/
            v24 = -1; /*0x5608bf*/
            v41 = -1; /*0x5608c4*/
            v42 = -1; /*0x5608c8*/
            v43 = -1; /*0x5608cc*/
            v44 = -1; /*0x5608d4*/
            if ( v21 ) /*0x5608d8*/
            {
              v25 = &v41; /*0x5608da*/
              do /*0x5608fe*/
              {
                sscanf(v21, "%x", v25++); /*0x5608e5*/
                v21 = strtok(0, asc_826598); /*0x5608f4*/
              }
              while ( v21 ); /*0x5608fe*/
              v24 = v44; /*0x560900*/
              v23 = v42; /*0x560904*/
              v22 = v41; /*0x560908*/
              v17 = SendMessageA; /*0x56090c*/
            }
            if ( (unsigned __int8)v22 != v22 /*0x560942*/
              || (unsigned __int8)v23 != v23
              || (unsigned __int8)v43 != v43
              || (unsigned __int8)v24 != v24 )
            {
              v49 = asc_82083C; /*0x56095b*/
              v34 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1017); /*0x560968*/
              v26 = GetStringCSF((#72 *)aTxtDestnetAddr, 0, g_Str_File_MainOpt_cpp, 1017); /*0x56097a*/
              Dialog::ShowMessageBox(v26, v34, 0, 0, 0); /*0x560984*/
              return 0; /*0x560995*/
            }
          }
          v27 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492); /*0x56099e*/
          MEMORY[0x87F7E8][539891] = ((int (__stdcall *)(int, int, _DWORD, _DWORD))v17)(v27, 327, 0, 0); /*0x5609ac*/
          HIWORD(MEMORY[0x87F7E8][539888]) = v40; /*0x5609bf*/
          strcpy((char *)&MEMORY[0x87F7E8][539892], Destination); /*0x5609e1*/
          v28 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1495); /*0x5609ec*/
          memset(v54, 0, sizeof(v54)); /*0x5609fc*/
          ((void (__stdcall *)(int, int, int, char *))SendMessageA)(v28, 1205, 8, v54); /*0x560a0e*/
          strncpy(String, v54, 32); /*0x560a26*/
          v29 = atoi(String); /*0x560a38*/
          if ( v29 > 0xFFFF ) /*0x560a43*/
          {
            v47 = asc_82083C; /*0x560a5c*/
            v35 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a69*/
            v30 = GetStringCSF((#72 *)aTxtPortNumberE, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a7b*/
            Dialog::ShowMessageBox(v30, v35, 0, 0, 0); /*0x560a85*/
            return 0; /*0x560a96*/
          }
          if ( ((int (__stdcall *)(int, int, int, _DWORD, _DWORD))SendDlgItemMessageA)(hWnd, 1890, 240, 0, 0) == 1 ) /*0x560ab6*/
          {
            if ( !LOBYTE(MEMORY[0x87F7E8][539238]) ) /*0x560abf*/
            {
              v51 = asc_82083C; /*0x560ad8*/
              v36 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560ae1*/
              v31 = GetStringCSF((#72 *)aTxtFirewallSet, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560af3*/
              Dialog::ShowMessageBox(v31, v36, 0, 0, 0); /*0x560afd*/
            }
            LOBYTE(MEMORY[0x87F7E8][539238]) = 1; /*0x560b02*/
          }
          else
          {
            LOBYTE(MEMORY[0x87F7E8][539238]) = 0; /*0x560b0b*/
          }
          if ( v29 > 0 && !MEMORY[0x87F7E8][539291] ) /*0x560b1d*/
          {
            v50 = asc_82083C; /*0x560b36*/
            v37 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b3f*/
            v32 = GetStringCSF((#72 *)aTxtFirewallSet_0, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b51*/
            Dialog::ShowMessageBox(v32, v37, 0, 0, 0); /*0x560b5b*/
          }
          MEMORY[0x87F7E8][539291] = v29; /*0x560b65*/
          __Release__NonReentrantLock_details_Concurrency__QAEXXZ((#350 *)&dword_A8ED54[50269]); /*0x560b6b*/
          RawFileClass::Construct(lParam, (int)g_Str_File_RA2MD_INI); /*0x560b79*/
          INIClass::SetBool( /*0x560b94*/
            (char *)&MEMORY[0x87F7E8][7734],
            (unsigned __int8 *)g_INI_Key_MultiPlayer,
            aSenddelay,
            MEMORY[0x87F7E8][539238]);
          INIClass::SetInt( /*0x560bb1*/
            (char *)&MEMORY[0x87F7E8][7734],
            (unsigned __int8 *)g_INI_Key_MultiPlayer,
            aPortnumberover,
            MEMORY[0x87F7E8][539291],
            0);
          INIClass::WriteDigest((char *)&MEMORY[0x87F7E8][7734], (int)lParam, 0); /*0x560bc2*/
          RawFileClass::Dtor(lParam); /*0x560bcb*/
          break;
        case 2u: /*0x560760*/
          break;
        case 0x5D4u: /*0x560760*/
          v15 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492); /*0x56077b*/
          dword_82A280 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v15, 327, 0, 0); /*0x560793*/
          return 0; /*0x5607a2*/
        default:
          return 0; /*0x56076f*/
      }
      *v45 = 2; /*0x560bd4*/
      return 0; /*0x560bda*/
    }
    if ( a2 != 1175 ) /*0x5604d8*/
    {
      if ( a2 == 1243 ) /*0x5604dd*/
      {
        LOBYTE(v5) = a3 != 0; /*0x5604e5*/
        NavigateDialogTab(hCtl, v5); /*0x5604ea*/
        return 0; /*0x5604fb*/
      }
      return 0; /*0x5604dd*/
    }
    v6 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492); /*0x560510*/
    v38 = 0; /*0x560517*/
    if ( MEMORY[0x87F7E8][8080]
      || ((v7 = (_DWORD *)__2_YAPAXI_Z(258832)) == 0 ? (v8 = 0) : (v8 = IPXInterfaceClass::Construct(v7)),
          MEMORY[0x87F7E8][8080] = v8,
          WinsockInterface::Init(v8),
          v38 = 1,
          MEMORY[0x87F7E8][8080]) )
    {
      Debug::Log(); /*0x560560*/
      v39 = MEMORY[0x87F7E8][8080]; /*0x56056d*/
      for ( i = 0; i < 20; ++i ) /*0x560571*/
      {
        if ( NetworkOptions::ApplySettings(v39, i, (char *)lParam, 64) ) /*0x56057f*/
        {
          Debug::Log(); /*0x56058e*/
          Debug::Log(); /*0x56059d*/
          if ( ((int (__stdcall *)(int, int, _DWORD, int *))SendMessageA)(v6, 1208, 0, lParam) == -1 ) /*0x5605b7*/
            ((void (__stdcall *)(int, int, _DWORD, int *))SendMessageA)(v6, 1212, 0, lParam); /*0x5605c6*/
        }
      }
      if ( !v38 ) /*0x5605d4*/
      {
LABEL_20:
        if ( !((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v6, 326, 0, 0) ) /*0x5605fa*/
        {
          v10 = GetStringCSF((#72 *)aTxtNoBoundNetC, 0, g_Str_File_MainOpt_cpp, 894); /*0x560611*/
          ((void (__stdcall *)(int, int, _DWORD, #72 *))SendMessageA)(v6, 1218, 0, v10); /*0x56061f*/
        }
        v11 = MEMORY[0x87F7E8][539891]; /*0x560621*/
        if ( MEMORY[0x87F7E8][539891] < 0 /*0x560639*/
          || v11 >= ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v6, 326, 0, 0) )
        {
          v11 = 0; /*0x56063b*/
        }
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v6, 334, v11, 0); /*0x560646*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1124, 0, 0); /*0x560652*/
        dword_82A280 = -1; /*0x560660*/
        v12 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1489); /*0x56066c*/
        if ( HIWORD(MEMORY[0x87F7E8][539888]) != 0xFFFF ) /*0x560678*/
        {
          sprintf((char *const)&v46, "%d", HIWORD(MEMORY[0x87F7E8][539888])); /*0x56068a*/
          ((void (__stdcall *)(int, int, _DWORD, __int128 *))SendMessageA)(v12, 1204, 0, &v46); /*0x56069f*/
        }
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v12, 197, 5, 0); /*0x5606ab*/
        v13 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1491); /*0x5606b5*/
        if ( strlen((const char *)&MEMORY[0x87F7E8][539892]) ) /*0x5606c1*/
          ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v13, 1204, 0, &MEMORY[0x87F7E8][539892]); /*0x5606d4*/
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v13, 197, 11, 0); /*0x5606e0*/
        ((void (__stdcall *)(int, int, int, bool, _DWORD))SendDlgItemMessageA)( /*0x5606fe*/
          hWnd,
          1890,
          241,
          LOBYTE(MEMORY[0x87F7E8][539238]) != 0,
          0);
        v14 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1495); /*0x560710*/
        if ( v14 != -1 && MEMORY[0x87F7E8][539291] ) /*0x560722*/
        {
          sprintf((char *const)&v46, "%d", MEMORY[0x87F7E8][539291]); /*0x560733*/
          ((void (__stdcall *)(int, int, _DWORD, __int128 *))SendMessageA)(v14, 1204, 0, &v46); /*0x560748*/
          return 0; /*0x560756*/
        }
        return 0; /*0x560722*/
      }
      if ( MEMORY[0x87F7E8][8080] ) /*0x5605de*/
        (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][8080])(MEMORY[0x87F7E8][8080], 1); /*0x5605e4*/
    }
    MEMORY[0x87F7E8][8080] = 0; /*0x5605e6*/
    goto LABEL_20; /*0x5605e6*/
  }
  return result; /*0x5604ef*/
}


// ==== 0x00560BF0  ChangeVideoMode  this=ObjectClass  sig=ida-proto ====
char __fastcall ChangeVideoMode(ObjectClass *xRight, int yBottom)
{
  _DWORD *v4; // eax
  IUnknown *v5; // edx
  int v6; // eax
  LONG eax41; // eax
  ObjectClass *Viewport; // ecx
  ObjectClass *v8; // edx
  ObjectClass *v9; // eax
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  IUnknown *v15; // edx
  int eax46; // eax
  MouseClass *i; // esi
  ObjectClass *v16; // [esp+4h] [ebp-78h]
  ObjectClass *WindowLongA; // [esp+8h] [ebp-74h]
  __int16 v20; // [esp+Ch] [ebp-70h]
  char v21; // [esp+10h] [ebp-6Ch]
  __int16 v22; // [esp+14h] [ebp-68h]
  ObjectClass *aP3; // [esp+1Ch] [ebp-60h]
  int BitMask_Red; // [esp+20h] [ebp-5Ch]
  char BitMask_Green; // [esp+24h] [ebp-58h]
  ObjectClass *aP0; // [esp+28h] [ebp-54h]
  int BitShift_Red; // [esp+2Ch] [ebp-50h] BYREF
  int v28; // [esp+30h] [ebp-4Ch]
  __int64 lParam; // [esp+34h] [ebp-48h]
  struct tagRECT rc; // [esp+3Ch] [ebp-40h] BYREF
  _DWORD v31[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v32[4]; // [esp+5Ch] [ebp-20h] BYREF
  _DWORD v33[4]; // [esp+6Ch] [ebp-10h] BYREF

  Debug::Log(); /*0x560c00*/
  lParam = *(_QWORD *)&stru_89E138.__pad_14B0[2748]; /*0x560c13*/
  GetBitShift_Green(); /*0x560c1b*/
  BitShift_Red = GetBitShift_Red(); /*0x560c27*/
  aP0 = (ObjectClass *)GetBitMask_Blue(); /*0x560c30*/
  BitMask_Green = GetBitMask_Green(); /*0x560c39*/
  BitMask_Red = GetBitMask_Red(); /*0x560c42*/
  aP3 = (ObjectClass *)GetBitShift_Blue(); /*0x560c51*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x560c57*/
  DDraw::WaitForIdle(); /*0x560c5a*/
  if ( stru_89E138.__pad_14B0[912] == 1 ) /*0x560c66*/
  {
    *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0; /*0x560c73*/
    *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0; /*0x560c78*/
    *(_DWORD *)&stru_87C374.__pad_579C[21672] = xRight; /*0x560c7e*/
    *(_DWORD *)&stru_87C374.__pad_579C[21676] = yBottom; /*0x560c84*/
    *(_DWORD *)&stru_89E138.__pad_14B0[2748] = xRight; /*0x560c8a*/
    *(_DWORD *)&stru_89E138.__pad_14B0[2752] = yBottom; /*0x560c90*/
    Debug::Log(); /*0x560c96*/
LABEL_19:
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22528] ) /*0x560e07*/
    {
      Debug::Log(); /*0x560e0e*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22528] ) /*0x560e1e*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22528])( /*0x560e24*/
          *(_DWORD *)&stru_87C374.__pad_579C[22528],
          1);
      *(_DWORD *)&stru_87C374.__pad_579C[22528] = 0; /*0x560e26*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22524] ) /*0x560e32*/
    {
      Debug::Log(); /*0x560e39*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22524] ) /*0x560e49*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22524])( /*0x560e4f*/
          *(_DWORD *)&stru_87C374.__pad_579C[22524],
          1);
      *(_DWORD *)&stru_87C374.__pad_579C[22524] = 0; /*0x560e51*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22508] ) /*0x560e5d*/
    {
      Debug::Log(); /*0x560e64*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22508] ) /*0x560e74*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22508])( /*0x560e7a*/
          *(_DWORD *)&stru_87C374.__pad_579C[22508],
          1);
      *(_DWORD *)&stru_87C374.__pad_579C[22508] = 0; /*0x560e7c*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22512] ) /*0x560e88*/
    {
      Debug::Log(); /*0x560e8f*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22512] ) /*0x560e9f*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22512])( /*0x560ea5*/
          *(_DWORD *)&stru_87C374.__pad_579C[22512],
          1);
      *(_DWORD *)&stru_87C374.__pad_579C[22512] = 0; /*0x560ea7*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] ) /*0x560eb3*/
    {
      Debug::Log(); /*0x560eba*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] ) /*0x560eca*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22540])( /*0x560ed0*/
          *(_DWORD *)&stru_87C374.__pad_579C[22540],
          1);
      *(_DWORD *)&stru_87C374.__pad_579C[22540] = 0; /*0x560ed2*/
    }
    if ( stru_89E138.__pad_14B0[912] ) /*0x560ee6*/
    {
      Debug::Log(); /*0x560f1f*/
      SetRect(&rc, 0, 0, (int)xRight, yBottom); /*0x560f30*/
      WindowLongA = (ObjectClass *)GetWindowLongA(g_hWnd, -20); /*0x560f4c*/
      v16 = (ObjectClass *)(GetMenu(g_hWnd) != 0); /*0x560f60*/
      eax41 = GetWindowLongA(g_hWnd, -16); /*0x560f64*/
      AdjustWindowRectEx(&rc, eax41, (BOOL)v16, (DWORD)WindowLongA); /*0x560f6c*/
      MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x560f92*/
    }
    else
    {
      Debug::Log(); /*0x560ee8*/
      SetWindowPos(g_hWnd, 0, 0, 0, (int)xRight, yBottom, 2u); /*0x560efe*/
      Debug::Log(); /*0x560f09*/
      *(_DWORD *)&stru_87C374.__pad_579C[22520] = DSurface::CreatePrimary(0); /*0x560f18*/
    }
    Viewport = (ObjectClass *)Display::GetViewport(v32); /*0x560fa1*/
    rc.left = 0; /*0x560fa3*/
    rc.top = 0; /*0x560fa8*/
    v8 = *(ObjectClass **)Viewport->__pad_0; /*0x560fac*/
    v31[0] = 0; /*0x560fae*/
    v33[0] = v8; /*0x560fb2*/
    v9 = *(ObjectClass **)&Viewport->__pad_0[4]; /*0x560fbc*/
    rc.right = 168; /*0x560fbf*/
    v33[1] = v9; /*0x560fc3*/
    v12 = *(_DWORD *)&Viewport->__pad_0[8]; /*0x560fcb*/
    v31[1] = 0; /*0x560fce*/
    v33[2] = v12; /*0x560fd2*/
    v31[2] = v12; /*0x560fd6*/
    v13 = *(_DWORD *)&Viewport->__pad_0[12]; /*0x560fda*/
    v32[2] = v12; /*0x560fdd*/
    v33[3] = v13; /*0x560fe1*/
    rc.bottom = *(_DWORD *)&stru_87C374.__pad_579C[21676]; /*0x560feb*/
    v31[3] = *(_DWORD *)&stru_87C374.__pad_579C[21676]; /*0x560fef*/
    v32[3] = *(_DWORD *)&stru_87C374.__pad_579C[21676]; /*0x560ff3*/
    v32[0] = 0; /*0x561006*/
    v32[1] = 0; /*0x56100a*/
    AllocateSurfaceScreenSurfaces( /*0x56100e*/
      (int)&stru_87C374.__pad_579C[21664],
      (ObjectClass *)v32,
      (ObjectClass *)v31,
      (int)&rc,
      0);
    *(_DWORD *)&stru_87C374.__pad_579C[22532] = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x56101e*/
    Debug::Log(); /*0x561024*/
    sub_491100(aP0, BitMask_Green, BitMask_Red, aP3, v20, v21, v22); /*0x561046*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] ) /*0x561053*/
    {
      MouseClass::CalcConfiningRect(*(HWND **)&stru_87C374.__pad_579C[23344]); /*0x5610dd*/
    }
    else
    {
      v14 = (_DWORD *)__2_YAPAXI_Z(0x98u); /*0x56105e*/
      if ( v14 ) /*0x561068*/
        *(_DWORD *)&stru_87C374.__pad_579C[23344] = MouseClass::Construct( /*0x56107f*/
                                                      v14,
                                                      *(ObjectClass **)&stru_87C374.__pad_579C[22520],
                                                      (IUnknown *)g_hWnd);
      else
        *(_DWORD *)&stru_87C374.__pad_579C[23344] = 0; /*0x561086*/
      LOBYTE(v15) = 0; /*0x56108c*/
      eax46 = SearchMIXFile(g_Str_File_MOUSE_SHA.__pad_0, v15); /*0x561093*/
      if ( eax46 ) /*0x56109a*/
      {
        BitShift_Red = 0; /*0x56109f*/
        v28 = 0; /*0x5610aa*/
        (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 4))( /*0x5610b5*/
          *(_DWORD *)&stru_87C374.__pad_579C[23344],
          &BitShift_Red,
          eax46,
          0);
      }
      Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, 0); /*0x5610bf*/
      Mouse::SetCursor((int)&stru_87C374.__pad_14B0[8132], 0, 0); /*0x5610cb*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5610d8*/
    }
    TacticalClass::SetViewDimensions((MouseClass *)v33); /*0x5610ec*/
    ChangeVideoMode_Setup(*(int *)&stru_89E138.__pad_14B0[2748], *(int *)&stru_89E138.__pad_14B0[2752]); /*0x5610fd*/
    SidebarClass::InitButtons(&stru_87C374.__pad_14B0[8132]); /*0x561107*/
    TacticalClass::BuildCommandBar(&stru_87C374.__pad_14B0[8132], (int)xRight, 1); /*0x561113*/
    SidebarClass::LoadResources(); /*0x56111d*/
    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x561129*/
    for ( i = (MouseClass *)Dialog::GetCurrent(); i; i = (MouseClass *)Dialog::FindByPtr(i) ) /*0x561137*/
    {
      DestroyDialog(i); /*0x56113b*/
      ResizeDialogAndEnum((SkirmishDialog *)i); /*0x561146*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x561160*/
    Debug::Log(); /*0x561168*/
    return 1; /*0x561170*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] ) /*0x560cac*/
  {
    Debug::Log(); /*0x560cb3*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] ) /*0x560cc3*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23344])( /*0x560cc9*/
        *(_DWORD *)&stru_87C374.__pad_579C[23344],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[23344] = 0; /*0x560ccb*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22520] ) /*0x560cd7*/
  {
    Debug::Log(); /*0x560cde*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22520] ) /*0x560cee*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22520])( /*0x560cf4*/
        *(_DWORD *)&stru_87C374.__pad_579C[22520],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22520] = 0; /*0x560cf6*/
  }
  if ( InitializeDDraw((int)g_hWnd, xRight, yBottom, 0x10u) ) /*0x560d07*/
  {
    Debug::Log(); /*0x560dd4*/
    *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0; /*0x560de2*/
    *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0; /*0x560de7*/
    *(_DWORD *)&stru_87C374.__pad_579C[21672] = xRight; /*0x560ded*/
    *(_DWORD *)&stru_87C374.__pad_579C[21676] = yBottom; /*0x560df3*/
    Debug::Log(); /*0x560df9*/
    goto LABEL_19; /*0x560df9*/
  }
  Debug::Log(); /*0x560d19*/
  Debug::Log(); /*0x560d23*/
  *(_DWORD *)&stru_87C374.__pad_579C[22520] = DSurface::CreatePrimary(0); /*0x560d32*/
  Debug::Log(); /*0x560d3c*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x98u); /*0x560d46*/
  if ( v4 ) /*0x560d50*/
    *(_DWORD *)&stru_87C374.__pad_579C[23344] = MouseClass::Construct( /*0x560d67*/
                                                  v4,
                                                  *(ObjectClass **)&stru_87C374.__pad_579C[22520],
                                                  (IUnknown *)g_hWnd);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[23344] = 0; /*0x560d6e*/
  LOBYTE(v5) = 0; /*0x560d74*/
  v6 = SearchMIXFile(g_Str_File_MOUSE_SHA.__pad_0, v5); /*0x560d7b*/
  if ( v6 ) /*0x560d82*/
  {
    BitShift_Red = 0; /*0x560d88*/
    v28 = 0; /*0x560d94*/
    (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 4))( /*0x560d9f*/
      *(_DWORD *)&stru_87C374.__pad_579C[23344],
      &BitShift_Red,
      v6,
      0);
  }
  Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, 0); /*0x560da9*/
  Mouse::SetCursor((int)&stru_87C374.__pad_14B0[8132], 0, 0); /*0x560db5*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x560dc2*/
  return 0; /*0x560dc7*/
}


// ==== 0x00561180  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char __usercall sub_561180@<al>(int xRight@<ecx>, int yBottom@<edx>, int a3@<ebx>, int a4@<edi>)
{
  char result; // al
  HWND Dialog; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // [esp+0h] [ebp-2Ch]
  int v12; // [esp+0h] [ebp-2Ch]
  int v13; // [esp+4h] [ebp-28h]
  int v14; // [esp+4h] [ebp-28h]
  int *v15; // [esp+8h] [ebp-24h]
  int *v16; // [esp+8h] [ebp-24h]
  LONG dwNewLong[2]; // [esp+Ch] [ebp-20h] BYREF
  DWORD Ticks; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  int v20; // [esp+1Ch] [ebp-10h]
  DWORD v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]

  dwNewLong[1] = xRight; /*0x561191*/
  dwNewLong[0] = -1; /*0x561195*/
  Debug::Log(); /*0x56119d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x5611ad*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x5611ba*/
  Frame::Present(MEMORY[0x88730C], a3, yBottom, a4, 0, v11, v13, v15); /*0x5611c7*/
  result = ChangeVideoMode(xRight, yBottom); /*0x5611d0*/
  if ( result ) /*0x5611d7*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x5611ea*/
    Frame::Present(MEMORY[0x88730C], a3, yBottom, a4, 0, v12, v14, v16); /*0x5611f7*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x561204*/
    Screen::Capture(1, 0, a3, yBottom); /*0x56120b*/
    Dialog = (HWND)CreateDialog(0xD9u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_561350, 0); /*0x561221*/
    if ( !Dialog ) /*0x561225*/
      goto LABEL_13; /*0x561225*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x561234*/
    Dialog::Show(Dialog); /*0x56123c*/
    Ticks = Timer::GetTicks(); /*0x56124a*/
    v20 = 600; /*0x561254*/
    while ( dwNewLong[0] < 0 ) /*0x56125c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x56126b*/
        break; /*0x56126b*/
      LOBYTE(v8) = 0; /*0x56126d*/
      ScreenSaver::Process(v8); /*0x56126f*/
      v9 = v20; /*0x561278*/
      if ( Ticks != -1 ) /*0x56127f*/
      {
        v10 = Timer::GetTicks() - Ticks; /*0x56128a*/
        if ( v10 >= v9 ) /*0x561290*/
          goto LABEL_9; /*0x561290*/
        v9 -= v10; /*0x561292*/
      }
      if ( v9 <= 0 ) /*0x561296*/
      {
LABEL_9:
        PostMessageA(Dialog, 0x111u, 0x6CAu, 0); /*0x561298*/
        v21 = Timer::GetTicks(); /*0x5612b9*/
        v23 = 300; /*0x5612bd*/
        Ticks = v21; /*0x5612c1*/
        v19 = v22; /*0x5612c5*/
        v20 = 300; /*0x5612c9*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5612d7*/
    if ( dwNewLong[0] == 1 ) /*0x5612e4*/
    {
LABEL_13:
      Debug::Log(); /*0x561331*/
      MEMORY[0x887314] = MEMORY[0x88730C]; /*0x56133e*/
      return 1; /*0x561343*/
    }
    else
    {
      Debug::Log(); /*0x5612f8*/
      ChangeVideoMode(MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x56130c*/
      MEMORY[0x887314] = MEMORY[0x88730C]; /*0x56131b*/
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
int __stdcall VideoSettingsDialogProc(INIClass *aP0, unsigned int a2, WPARAM wParam, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // esi
  HWND v6; // ebx
  unsigned int *v7; // eax
  LPARAM v8; // esi
  INIClass **v9; // ebp
  INIClass *v10; // eax
  INIClass *v11; // ecx
  LRESULT v12; // eax
  HWND v13; // esi
  bool v14; // al
  HWND DlgItem; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF
  int wParama; // [esp+58h] [ebp+Ch]
  unsigned int v21; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc((SkirmishDialog *)aP0, a2, wParam, a4); /*0x56141c*/
  if ( result ) /*0x561423*/
    return result; /*0x561423*/
  WindowLongA = (_DWORD *)GetWindowLongA((HWND)aP0, 8); /*0x561439*/
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
          DlgItem = GetDlgItem((HWND)aP0, 1497); /*0x5615d9*/
          dword_82A284 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x5615f1*/
          return 0; /*0x5615fd*/
        }
        return 0; /*0x5615cd*/
      }
    }
    if ( dword_82A288 != dword_82A284 ) /*0x56164e*/
    {
      SetDialogParent((HWND)aP0, g_hWnd); /*0x561658*/
      v16 = GetDlgItem((HWND)aP0, 1497); /*0x561663*/
      if ( v16 ) /*0x561667*/
      {
        v17 = SendMessageA(v16, 0x199u, dword_82A284, 0); /*0x561678*/
        dword_ABCE94 = *(_DWORD *)&dword_ABCF5C->__pad_0[8 * v17]; /*0x561683*/
        dword_ABCE98 = dword_ABCF5C->headNode[2 * v17]; /*0x56168d*/
      }
    }
    v18 = GetDlgItem((HWND)aP0, 1652); /*0x561698*/
    if ( v18 ) /*0x5616a1*/
      HouseClass_Player.__pad_5568[22752] = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5616b4*/
    __3_YAXPAX_Z(dword_ABCF5C); /*0x5616c1*/
    dword_ABCF5C = 0; /*0x5616c6*/
    *WindowLongA = 1; /*0x5616d3*/
    return 0; /*0x5616d3*/
  }
  if ( a2 != 1175 ) /*0x561447*/
    return 0; /*0x561447*/
  v6 = GetDlgItem((HWND)aP0, 1497); /*0x561459*/
  if ( HouseClass_Player.__pad_5568[22753] ) /*0x561464*/
    v7 = sub_4A4900(0x280u, 0x1E0u, 0x1000u, 0x1000u, 16); /*0x561470*/
  else
    v7 = sub_4A4900(0x280u, 0x1E0u, 0x400u, 0x300u, 16); /*0x561486*/
  v8 = 0; /*0x561491*/
  dword_ABCF5C = (CCINIClass *)v7; /*0x561495*/
  v9 = (INIClass **)v7; /*0x56149a*/
  wParama = -1; /*0x56149c*/
  v21 = 0; /*0x5614a4*/
  if ( v7 && *v7 ) /*0x5614ae*/
  {
    do /*0x561527*/
    {
      v10 = *v9; /*0x5614b3*/
      v11 = v9[1]; /*0x5614b6*/
      v9 += 2; /*0x5614c2*/
      if ( HouseClass_Player.__pad_5568[22753] /*0x5614dc*/
        || v10 == (INIClass *)640
        || v10 == (INIClass *)800
        || v10 == (INIClass *)1024 )
      {
        if ( v10 == (INIClass *)dword_ABCE94 && v11 == (INIClass *)dword_ABCE98 ) /*0x5614ec*/
          wParama = v21; /*0x5614f2*/
        sprintf(Buffer, &stru_82A2C4, v10); /*0x561502*/
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
  v13 = GetDlgItem((HWND)aP0, 1652); /*0x561567*/
  if ( !v13 ) /*0x56156b*/
    return 0; /*0x56156b*/
  v14 = HouseClass_Player.__pad_5568[22752] == 1 && stru_89E138.__pad_14B0[6150] == 1; /*0x561581*/
  SendMessageA(v13, 0xF1u, v14, 0); /*0x561597*/
  EnableWindow(v13, (unsigned __int8)stru_89E138.__pad_14B0[6150]); /*0x5615a3*/
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
  MEMORY[0xABDDA0] = dbl_ABD488 / unk_7ED3C0; /*0x56174c*/
}


// ==== 0x00561760  sub_561760  this=-  sig=ida-proto ====
void sub_561760()
{
  dbl_ABDC38 = 1.0 / MEMORY[0xABDDA0]; /*0x56176c*/
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
  g_MapRenderState = result; /*0x56180b*/
  return result; /*0x561810*/
}


// ==== 0x00561820  sub_561820  this=-  sig=ida-proto ====
void sub_561820()
{
  dbl_ABDA60 = Math::ArcTan((double)g_MapRenderState * 0.00390625); /*0x561837*/
}


// ==== 0x00561850  sub_561850  this=-  sig=ida-proto ====
void sub_561850()
{
  dbl_ABDC20 = Math::ArcTan((double)(2 * g_MapRenderState) / dbl_ABD488); /*0x561872*/
}


// ==== 0x00561880  sub_561880  this=-  sig=ida-proto ====
__int64 sub_561880()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * g_MapRenderState) + 0.5); /*0x56189b*/
  MEMORY[0xABDD98] = result; /*0x5618a0*/
  return result; /*0x5618a6*/
}


// ==== 0x005618B0  sub_5618B0  this=-  sig=ida-proto ====
int sub_5618B0()
{
  g_MapSeedState = 0; /*0x5618b2*/
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


// ==== 0x00565060  COMStub_565060  this=-  sig=ida-proto ====
int sub_565060()
{
  CellClass::Construct(g_CellClassArray); /*0x565065*/
  return atexit(unknown_libname_22); /*0x565075*/
}


// ==== 0x00565080  unknown_libname_22  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_22()
{
  CellClass::DTOR(g_CellClassArray); /*0x565085*/
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
  *(_DWORD *)(this + 212) = &vt_DynamicVectorClass_Cell; /*0x5650f9*/
  *(_DWORD *)(this + 232) = 10; /*0x5650ff*/
  *(_DWORD *)(this + 228) = 0; /*0x565102*/
  *(_DWORD *)(this + 316) = 0; /*0x565105*/
  *(_DWORD *)(this + 320) = 0; /*0x56510b*/
  *(_BYTE *)(this + 324) = 1; /*0x565111*/
  *(_BYTE *)(this + 325) = 0; /*0x565117*/
  *(_DWORD *)(this + 312) = &vt_VectorClass_CellClass; /*0x56511d*/
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
  *(_DWORD *)(this + 4444) = &vt_DynamicVectorClass_Cell; /*0x565157*/
  *(_DWORD *)(this + 4464) = 10; /*0x565161*/
  *(_DWORD *)(this + 4460) = 0; /*0x565167*/
  *(_DWORD *)this = &vt_MapClass; /*0x56516d*/
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
  this->q005 = 0; /*0x5651a9*/
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
  this->q0D4 = &vt_DynamicVectorClass_Cell; /*0x5651ff*/
  this->q03A = 10; /*0x565205*/
  *((_DWORD *)this + 57) = 0; /*0x565208*/
  this->q04E = &vt_VectorClass_CellClass; /*0x56520b*/
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
  this->q115C = &vt_DynamicVectorClass_Cell; /*0x565246*/
  this->q1170 = 10; /*0x565250*/
  this->q116C = 0; /*0x565256*/
  *(_DWORD *)this = &vt_MapClass; /*0x565266*/
  v8 = this + 128; /*0x56526c*/
  memset(this + 24, 0, 0x34u); /*0x565272*/
  v9 = this + 140; /*0x565276*/
  v11 = 3; /*0x56527c*/
  this->q020 = 0; /*0x565284*/
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
  this->q005 = 0; /*0x5652a7*/
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

  *(_DWORD *)this = &vt_MapClass; /*0x5652c5*/
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->q01A ) /*0x5652df*/
  {
    __3_YAXPAX_Z(*((void **)this + 26)); /*0x5652e9*/
    this->q01A = 0; /*0x5652f1*/
  }
  v2 = (_DWORD *)this->q005; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x565307*/
    __3_YAXPAX_Z(v2); /*0x56530a*/
    this->q005 = 0; /*0x565312*/
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
  this->q115C = &vt_VectorClass_Cell; /*0x565370*/
  if ( v5 && this->q1169 ) /*0x565378*/
  {
    __3_YAXPAX_Z(v5); /*0x565381*/
    this->q1160 = 0; /*0x565389*/
  }
  this->q1169 = 0; /*0x56538f*/
  this->q1164 = 0; /*0x565395*/
  v6 = (void *)this->q04F; /*0x56539b*/
  this->q04E = &vt_VectorClass_CellClass; /*0x5653a1*/
  if ( v6 && this->q145 ) /*0x5653af*/
  {
    __3_YAXPAX_Z(v6); /*0x5653b8*/
    this->q04F = 0; /*0x5653c0*/
  }
  this->q145 = 0; /*0x5653c6*/
  this->q050 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
  this->q0D4 = &vt_VectorClass_Cell; /*0x5653d8*/
  if ( v7 && this->q0E1 ) /*0x5653e2*/
  {
    __3_YAXPAX_Z(v7); /*0x5653eb*/
    this->q0D8 = 0; /*0x5653f3*/
  }
  this->q0E1 = 0; /*0x5653f9*/
  this->q037 = 0; /*0x5653ff*/
  v8 = this + 212; /*0x565405*/
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
    v10 = (void *)*((_DWORD *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(_DWORD *)v8 = &vt_VectorClass_SubzoneTrackingStruct; /*0x565418*/
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
  this->q014 = &vt_VectorClass_ZoneConnectionClass; /*0x565442*/
  if ( v11 && this->q05D ) /*0x56544c*/
  {
    __3_YAXPAX_Z(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  this->q05D = 0; /*0x56545d*/
  this->q058 = 0; /*0x565460*/
  *(_DWORD *)this = &off_7EA6FC; /*0x565463*/
}


// ==== 0x005654A0  HexCoord::Convert  this=IUnknown  sig=csp ====
_DWORD *__thiscall HexCoord::Convert(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx

  v3 = this->q0FC + aP2->field_0; /*0x5654ba*/
  v4 = this->q010 + aP2->field_4; /*0x5654bf*/
  v5 = v4 + 1; /*0x5654c2*/
  v6 = (v4 >> 1) + this->q03D; /*0x5654c9*/
  aP1->field_0 = v3 + (v5 >> 1); /*0x5654d3*/
  aP1->field_4 = v6 - v3; /*0x5654d5*/
  return &aP1->field_0; /*0x5654c1*/
}


// ==== 0x005654E0  ObjectClass::method_5654E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5654E0(_DWORD *this, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi

  v3 = this->q0F4; /*0x5654e5*/
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


// ==== 0x00565520  CellClass::GetScreenCenterOffset  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellClass::GetScreenCenterOffset(_DWORD *this, MouseClass *aP1, int *a2)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  void *v8; // esi
  int v10; // [esp+14h] [ebp-4h]

  v3 = this->q03D; /*0x56552a*/
  v10 = this->q010; /*0x565530*/
  v4 = this->q0FC; /*0x565539*/
  v5 = a2[1]; /*0x565540*/
  v6 = *a2; /*0x565549*/
  if ( (v3 & 1) != 0 ) /*0x56554b*/
    v7 = v6 - v5 + 1; /*0x56554f*/
  else
    v7 = v6 - v5; /*0x565552*/
  v8 = (void *)(*a2 + v5 - v3 - v10); /*0x565569*/
  aP1->field_0 = v3 / 2 + (v7 >> 1) - v4; /*0x565570*/
  aP1->field_4 = v8; /*0x565572*/
  return &aP1->field_0; /*0x56556f*/
}


// ==== 0x00565610  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_565610(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  __int16 v7; // si
  int v9; // [esp+14h] [ebp+8h]

  v3 = this->q0F4; /*0x565615*/
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
_DWORD *__thiscall sub_565660(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+20h] [ebp+8h]

  v3 = this->q0F4; /*0x565668*/
  v4 = this->q0FC; /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = this->q100; /*0x56567e*/
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
int __stdcall MapClass_IsCellPassable(int a1, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  v2 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x5656ed*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(*(_DWORD *)(a1 + 316) + 4 * v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_CellClassArray; /*0x56570d*/
    g_Map_GlobalCellIndex = a2; /*0x565712*/
  }
  return (v3[75] >> 3) & 1; /*0x565725*/
}


// ==== 0x00565730  Coord::To_Cell  this=Coord  sig=csp ====
void *__thiscall Coord::To_Cell(_DWORD *this, IUnknown *aP1)
{
  int v2; // eax
  int v3; // edx
  void *v4; // edx
  ObjectClass *aP1a; // [esp+Ch] [ebp+4h]

  v2 = aP1->field_4 / 256; /*0x56574f*/
  v3 = aP1->field_0 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < this->q050 ) /*0x565764*/
  {
    v4 = *(void **)(this->q13C + 4 * v3); /*0x56576c*/
    if ( v4 ) /*0x565771*/
      return v4; /*0x565774*/
  }
  LOWORD(aP1a) = aP1->field_0 / 256; /*0x56577a*/
  HIWORD(aP1a) = v2; /*0x56577f*/
  g_Map_GlobalCellIndex = (IUnknown *)aP1a; /*0x565789*/
  return g_CellClassArray; /*0x565773*/
}


// ==== 0x005657A0  CellCoord::To_CellObj  this=IUnknown  sig=csp ====
void *__thiscall CellCoord_To_CellObj(_DWORD *this, __int16 *a2)
{
  unsigned int v2; // eax
  void *result; // eax

  v2 = *a2 + (a2[1] << 9); /*0x5657af*/
  if ( v2 >= 0x40000 || (result = *(void **)(this->q04F + 4 * v2)) == 0 ) /*0x5657c6*/
  {
    g_Map_GlobalCellIndex = *(_DWORD *)a2; /*0x5657cf*/
    return &g_CellClassArray; /*0x5657ca*/
  }
  return result; /*0x5657b1*/
}


// ==== 0x005657E0  Cell::Exists  this=MouseClass  sig=csp ====
bool __thiscall Cell::Exists(_DWORD *this, MouseClass *aP1)
{
  return *(_DWORD *)(this->MaxWidth + 4 * (SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9))) != 0; /*0x5657fd*/
}


// ==== 0x00565800  MapClass::Destru_vt05  this=MapClass  sig=csp ====
int __thiscall MapClass::Destru_vt05(int *this)
{
  int *v1; // ebp
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // ebp
  _DWORD *v18; // esi
  int v19; // ebx
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  _DWORD *v26; // [esp+14h] [ebp-Ch]
  _DWORD *v27; // [esp+18h] [ebp-8h]
  int v28; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x565806*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Add(); /*0x56580d*/
  v1[83] = 512; /*0x565819*/
  v1[84] = 512; /*0x56581f*/
  v2 = *v1; /*0x565825*/
  v1[85] = 0x40000; /*0x565828*/
  (*(void (__thiscall **)(int *))(v2 + 88))(v1); /*0x565832*/
  if ( v1[5] ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = __2_YAPAXI_Z(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = Cell::DecodeFlags; /*0x56585e*/
    v3[2] = 256; /*0x565865*/
    v3[3] = 20; /*0x56586c*/
    v5 = __2_YAPAXI_Z(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = 256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = &vt_DynamicVectorClass_HashObject_unsigned_int_unsigned_int; /*0x565896*/
        v7[5] = 10; /*0x56589c*/
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
    v10 = v4[2]; /*0x5658bf*/
    *v4 = v9; /*0x5658c2*/
    v11 = 0; /*0x5658c4*/
    if ( v10 > 0 ) /*0x5658c8*/
    {
      v12 = 0; /*0x5658ca*/
      do /*0x5658db*/
      {
        ++v11; /*0x5658ce*/
        *(_DWORD *)(v12 + *v4 + 20) = 20; /*0x5658cf*/
        v12 += 24; /*0x5658d6*/
      }
      while ( v11 < v4[2] ); /*0x5658db*/
      v1[5] = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1[5] = (int)v4; /*0x5658e9*/
LABEL_14:
  v13 = v1 + 35; /*0x5658f3*/
  v26 = v1 + 32; /*0x5658ff*/
  v27 = v1 + 35; /*0x565903*/
  v28 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(_DWORD *))(*v13 + 12))(v13); /*0x565913*/
    v14 = __2_YAPAXI_Z(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = Cell::DecodeFlags; /*0x56592f*/
      v14[2] = 256; /*0x565936*/
      v14[3] = 20; /*0x56593d*/
      v16 = __2_YAPAXI_Z(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = 256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = &vt_DynamicVectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x565967*/
          v18[5] = 10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v27; /*0x565981*/
        v20 = v17; /*0x565985*/
        v1 = this; /*0x565987*/
      }
      else
      {
        v20 = 0; /*0x565992*/
      }
      v21 = v15[2]; /*0x565994*/
      *v15 = v20; /*0x565997*/
      v22 = 0; /*0x565999*/
      if ( v21 > 0 ) /*0x56599d*/
      {
        v23 = 0; /*0x56599f*/
        do /*0x5659b0*/
        {
          ++v22; /*0x5659a3*/
          *(_DWORD *)(*v15 + v23 + 20) = 20; /*0x5659a4*/
          v23 += 24; /*0x5659ab*/
        }
        while ( v22 < v15[2] ); /*0x5659b0*/
      }
    }
    else
    {
      v15 = 0; /*0x5659b4*/
    }
    v13 += 6; /*0x5659ba*/
    v27 = v13; /*0x5659bd*/
    *v26++ = v15; /*0x5659c1*/
    --v28; /*0x5659cf*/
  }
  while ( v28 ); /*0x5659d3*/
  memset(v1 + 6, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}


// ==== 0x005659F0  MapClass::Destru_vt07  this=MapClass  sig=csp ====
void __thiscall MapClass::Destru_vt07(int this)
{
  int *v2; // edx
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax

  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  MapClass::isCellShrouded(MEMORY[0x887644], 0xFFFFu); /*0x565a12*/
  MapClass::isLocationShrouded(MEMORY[0x87E8A4], 0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Remove((_DWORD *)this); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = (int *)(this + 344); /*0x565a35*/
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
    v4 = *v2; /*0x565a40*/
    v5 = *v2 == -1; /*0x565a47*/
    v2[3] = g_MapSeedState; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
      v6 = v2[2]; /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)MEMORY[0xA8ED84] - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)MEMORY[0xA8ED84] - v4; /*0x565a63*/
      }
      v2[2] = v6; /*0x565a69*/
      *v2 = -1; /*0x565a6c*/
    }
    v2 += 4; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  *(_DWORD *)(this + 328) = 13; /*0x565a7d*/
  *(_BYTE *)(this + 4440) = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/
}


// ==== 0x00565AA0  MapClass::InitCellVector  this=MapClass  sig=csp ====
int __thiscall MapClass_InitCellVector(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 78; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    v2[1] = 0; /*0x565aad*/
    v2[2] = 0; /*0x565ab4*/
    *((_BYTE *)v2 + 12) = 1; /*0x565abb*/
    *((_BYTE *)v2 + 13) = 0; /*0x565abf*/
    *v2 = &vt_VectorClass_CellClass; /*0x565ac3*/
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v2 + 8))(v2, this->q154, 0); /*0x565ad4*/
  for ( result = 0; result < this->q154; *(_DWORD *)(this->q13C + 4 * result - 4) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/
}


// ==== 0x00565B00  MapClass::FreeAllCells  this=MapClass  sig=csp ====
int __thiscall MapClass_FreeAllCells(int *this)
{
  int i; // ecx
  int v3; // eax
  int j; // edi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < this->q050; ++i ) /*0x565b0e*/
  {
    v3 = *(_DWORD *)(this->q04F + 4 * i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(_DWORD *)(v3 + 44) = 0; /*0x565b1d*/
      *(_DWORD *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  for ( j = 0; j < this->q050; ++j ) /*0x565b39*/
  {
    v5 = *(_DWORD *)(this->q04F + 4 * j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x565b4c*/
      *(_DWORD *)(this->q04F + 4 * j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(0, 1); /*0x565b67*/
  result = this->q050; /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD))(this->q04E + 8))(this + 78, 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < this->q050; *(_DWORD *)(this->q04F + 4 * result - 4) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/
}


// ==== 0x00565BC0  MapClass::InitAllCells  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass_InitAllCells(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax
  _DWORD *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  this->q134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->q140 ) /*0x565bdb*/
      {
        result = (_DWORD *)this->q13C; /*0x565bdd*/
        v6 = (_DWORD *)result[v3]; /*0x565be3*/
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
void __thiscall sub_565C10(int *this, _DWORD *a2, int jj, char a4, char a5)
{
  int v6; // edi
  int v7; // esi
  __int16 v8; // si
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int Bit; // esi
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
  int v54; // edx
  int v55; // eax
  int v56; // edi
  _DWORD *v57; // ecx
  _DWORD *v58; // eax
  _DWORD *v59; // ebp
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // edx
  int *v64; // ebp
  char *v65; // edi
  unsigned int v66; // eax
  char *v67; // eax
  char *v68; // esi
  int v69; // ecx
  _WORD *v70; // eax
  int v71; // ecx
  _WORD *v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  int v76; // ecx
  int v77; // ecx
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // ecx
  int v94; // eax
  int v95; // ecx
  int v96; // eax
  int v97; // ecx
  int v98; // eax
  int v99; // ecx
  int v100; // eax
  int j; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // edx
  int v105; // esi
  int v106; // ecx
  _DWORD *v107; // eax
  _DWORD *v108; // eax
  int k; // esi
  _WORD *Waypoint_Location; // eax
  _DWORD *v111; // eax
  int m; // esi
  int *v113; // eax
  int v114; // edi
  int v115; // ebp
  _DWORD *v116; // esi
  int v117; // eax
  int *v118; // eax
  int v119; // edx
  int ii; // esi
  int v121; // eax
  int *v122; // ecx
  int v123; // edx
  int v124; // eax
  int v125; // esi
  int v126; // ebp
  _WORD *kk; // eax
  int v128; // esi
  int v129; // edx
  int v130; // ecx
  int v131; // ecx
  int v132; // edi
  int v133; // eax
  int v134; // ecx
  __int16 v135; // si
  int v136; // edx
  int v137; // eax
  int v138; // ebp
  int v139; // eax
  _DWORD *mm; // eax
  int v141; // edx
  int v142; // ecx
  unsigned int v143; // edx
  int nn; // esi
  char v145; // [esp+25h] [ebp-4Dh]
  _DWORD v146[3]; // [esp+26h] [ebp-4Ch] BYREF
  int v147; // [esp+32h] [ebp-40h] BYREF
  int v148; // [esp+36h] [ebp-3Ch]
  int v149; // [esp+3Ah] [ebp-38h]
  __int16 v150[4]; // [esp+3Eh] [ebp-34h] BYREF
  int v151; // [esp+46h] [ebp-2Ch] BYREF
  void *Block; // [esp+4Ah] [ebp-28h]
  int v153; // [esp+4Eh] [ebp-24h] BYREF
  int v154; // [esp+52h] [ebp-20h]
  int v155; // [esp+56h] [ebp-1Ch]
  int v156; // [esp+5Ah] [ebp-18h] BYREF
  int i; // [esp+5Eh] [ebp-14h]
  int v158; // [esp+62h] [ebp-10h]
  int v159; // [esp+66h] [ebp-Ch]
  int v160; // [esp+6Ah] [ebp-8h]
  int n; // [esp+6Eh] [ebp-4h]

  v158 = this->q03D;
  v159 = g_MapSeedState;
  v6 = 0;
  v7 = 0;
  Block = 0;
  v156 = 0;
  for ( i = 2 * MEMORY[0x87F8E0] + 8; v7 < MEMORY[0xA8E370]; ++v7 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8E364] + v7) + 292))(
      *((_DWORD *)MEMORY[0xA8E364] + v7),
      0);
  if ( this->q050 > 0 )
  {
    do
    {
      v8 = v6 % 512;
      v9 = this->q03D;
      v10 = (__int16)(v6 / 512);
      v11 = v8 + v10;
      if ( v11 <= v9 || v8 - v10 >= v9 || v10 - v8 >= v9 || v11 > v9 + 2 * this->q0F8 )
      {
        v12 = *(_DWORD *)(this->q04F + 4 * v6);
        if ( v12 )
          *(_BYTE *)(v12 + 283) = a4;
      }
      ++v6;
    }
    while ( v6 < this->q050 );
  }
  v151 = 0;
  if ( !(_BYTE)jj )
  {
    Block = __2_YAPAXI_Z(328 * v158 * i);
    v156 = (int)Block;
    v13 = this->q03D;
    this->q043 = 1;
    this->CellIterator_NextY = v13;
    this->CellIterator_CurrentY = v13 - 1;
    this->CellIterator_NextCell = (v13 << 11) + this->q04F + 4;
    Bit = LayerClass::CellIteratorNext(this);
    v159 = *(_DWORD *)(Bit + 36);
    if ( Bit )
    {
      v15 = (char *)Block + 40;
      do
      {
        v16 = v15 - 10;
        CellClass::CopyNeighborData(Bit);
        v17 = *(_DWORD *)(Bit + 36);
        *(_DWORD *)v150 = 24;
        *(v15 - 1) = v17;
        *v15 = *(_DWORD *)(Bit + 40);
        v15[1] = *(_DWORD *)(Bit + 44);
        v15[2] = *(_DWORD *)(Bit + 48);
        v15[3] = *(_DWORD *)(Bit + 52);
        v15[4] = *(_DWORD *)(Bit + 56);
        v15[5] = *(_DWORD *)(Bit + 60);
        v15[6] = *(_DWORD *)(Bit + 64);
        v15[7] = *(_DWORD *)(Bit + 68);
        v15[8] = *(_DWORD *)(Bit + 72);
        v15[9] = *(_DWORD *)(Bit + 76);
        v15[10] = *(_DWORD *)(Bit + 80);
        v15[11] = *(_DWORD *)(Bit + 84);
        v15[12] = *(_DWORD *)(Bit + 88);
        v15[13] = *(_DWORD *)(Bit + 92);
        v15[14] = *(_DWORD *)(Bit + 96);
        v15[15] = *(_DWORD *)(Bit + 100);
        v15[16] = *(_DWORD *)(Bit + 104);
        v15[17] = *(_DWORD *)(Bit + 108);
        v15[18] = *(_DWORD *)(Bit + 112);
        v18 = Bit - (_DWORD)(v15 - 10);
        v15[19] = *(_DWORD *)(Bit + 116);
        v15[20] = *(_DWORD *)(Bit + 120);
        v19 = v15 + 21;
        do
        {
          *v19 = *(_WORD *)((char *)v19 + v18);
          ++v19;
          --*(_DWORD *)v150;
        }
        while ( *(_DWORD *)v150 );
        v20 = v16 + 43;
        *(_DWORD *)v150 = 24;
        do
        {
          *v20 = *(_WORD *)((char *)v20 + v18);
          ++v20;
          --*(_DWORD *)v150;
        }
        while ( *(_DWORD *)v150 );
        v16[55] = *(_DWORD *)(Bit + 220);
        v16[56] = *(_DWORD *)(Bit + 224);
        v16[57] = *(_DWORD *)(Bit + 228);
        v16[58] = *(_DWORD *)(Bit + 232);
        v16[59] = *(_DWORD *)(Bit + 236);
        v16[60] = *(_DWORD *)(Bit + 240);
        v16[61] = *(_DWORD *)(Bit + 244);
        v16[62] = *(_DWORD *)(Bit + 248);
        v16[63] = *(_DWORD *)(Bit + 252);
        v16[64] = *(_DWORD *)(Bit + 256);
        v16[65] = *(_DWORD *)(Bit + 260);
        *((_WORD *)v16 + 132) = *(_WORD *)(Bit + 264);
        *((_WORD *)v16 + 133) = *(_WORD *)(Bit + 266);
        *((_WORD *)v16 + 134) = *(_WORD *)(Bit + 268);
        *((_WORD *)v16 + 135) = *(_WORD *)(Bit + 270);
        *((_WORD *)v16 + 136) = *(_WORD *)(Bit + 272);
        *((_WORD *)v16 + 137) = *(_WORD *)(Bit + 274);
        *((_WORD *)v16 + 138) = *(_WORD *)(Bit + 276);
        *((_WORD *)v16 + 139) = *(_WORD *)(Bit + 278);
        *((_BYTE *)v16 + 280) = *(_BYTE *)(Bit + 280);
        *((_BYTE *)v16 + 281) = *(_BYTE *)(Bit + 281);
        *((_BYTE *)v16 + 282) = *(_BYTE *)(Bit + 282);
        *((_BYTE *)v16 + 283) = *(_BYTE *)(Bit + 283);
        *((_BYTE *)v16 + 284) = *(_BYTE *)(Bit + 284);
        *((_BYTE *)v16 + 285) = *(_BYTE *)(Bit + 285);
        *((_BYTE *)v16 + 286) = *(_BYTE *)(Bit + 286);
        *((_BYTE *)v16 + 287) = *(_BYTE *)(Bit + 287);
        *((_BYTE *)v16 + 288) = *(_BYTE *)(Bit + 288);
        *((_BYTE *)v16 + 289) = *(_BYTE *)(Bit + 289);
        *((_BYTE *)v16 + 290) = *(_BYTE *)(Bit + 290);
        v16[73] = *(_DWORD *)(Bit + 292);
        v16[74] = *(_DWORD *)(Bit + 296);
        v21 = v16[75] ^ ((unsigned __int8)*(_DWORD *)(Bit + 300) ^ (unsigned __int8)v16[75]) & 1;
        v16[75] = v21;
        v22 = v21 ^ ((unsigned __int8)*(_DWORD *)(Bit + 300) ^ (unsigned __int8)v21) & 2;
        v16[75] = v22;
        v23 = v22 ^ ((unsigned __int8)*(_DWORD *)(Bit + 300) ^ (unsigned __int8)v22) & 4;
        v16[75] = v23;
        v24 = v23 ^ ((unsigned __int8)*(_DWORD *)(Bit + 300) ^ (unsigned __int8)v23) & 8;
        v16[75] = v24;
        v16[75] = v24 ^ ((unsigned __int8)*(_DWORD *)(Bit + 300) ^ (unsigned __int8)v24) & 0x10;
        v16[76] = *(_DWORD *)(Bit + 304);
        v16[77] = *(_DWORD *)(Bit + 308);
        v25 = v16[80];
        *((_BYTE *)v16 + 312) = *(_BYTE *)(Bit + 312);
        v16[79] = *(_DWORD *)(Bit + 316);
        v26 = v25 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v25) & 1;
        v16[80] = v26;
        v27 = v26 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v26) & 2;
        v16[80] = v27;
        v28 = v27 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v27) & 4;
        v16[80] = v28;
        v29 = v28 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v28) & 8;
        v16[80] = v29;
        v30 = v29 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v29) & 0x10;
        v16[80] = v30;
        v31 = v30 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v30) & 0x20;
        v16[80] = v31;
        v32 = v31 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v31) & 0x40;
        v16[80] = v32;
        v33 = v32 ^ ((unsigned __int8)*(_DWORD *)(Bit + 320) ^ (unsigned __int8)v32) & 0x80;
        v16[80] = v33;
        v34 = v33 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v33) & 0x100;
        v16[80] = v34;
        v35 = v34 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v34) & 0x200;
        v16[80] = v35;
        v36 = v35 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v35) & 0x400;
        v16[80] = v36;
        v37 = v36 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v36) & 0x800;
        v16[80] = v37;
        v38 = v37 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v37) & 0x1000;
        v16[80] = v38;
        v39 = v38 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v38) & 0x2000;
        v16[80] = v39;
        v40 = v39 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v39) & 0x4000;
        v16[80] = v40;
        v41 = v40 ^ ((unsigned __int16)*(_DWORD *)(Bit + 320) ^ (unsigned __int16)v40) & 0x8000;
        v16[80] = v41;
        v42 = v41 ^ (*(_DWORD *)(Bit + 320) ^ v41) & 0x10000;
        v16[80] = v42;
        v43 = v42 ^ (*(_DWORD *)(Bit + 320) ^ v42) & 0x20000;
        v16[80] = v43;
        v44 = v43 ^ (*(_DWORD *)(Bit + 320) ^ v43) & 0x40000;
        v16[80] = v44;
        v45 = v44 ^ (*(_DWORD *)(Bit + 320) ^ v44) & 0x80000;
        v16[80] = v45;
        v46 = v45 ^ (*(_DWORD *)(Bit + 320) ^ v45) & 0x100000;
        v16[80] = v46;
        v47 = v46 ^ (*(_DWORD *)(Bit + 320) ^ v46) & 0x200000;
        v16[80] = v47;
        v16[80] = v47 ^ (*(_DWORD *)(Bit + 320) ^ v47) & 0x400000;
        v15[1] = 0;
        v15[2] = 0;
        Bit = LayerClass::CellIteratorNext(this);
        v15 += 82;
        ++v151;
      }
      while ( Bit );
    }
  }
  v48 = a2;
  v49 = a2;
  v50 = 0;
  this->q03B = *a2;
  this->q03C = v49[1];
  this->q03D = v49[2];
  this->q0F8 = v49[3];
  v51 = this->q03D;
  this->q03B = 0;
  this->q03C = 0;
  if ( v51 > 63 || this->q0F8 > 63 )
    MEMORY[0x880C74] = 2;
  g_MapCellHeight_Value = MEMORY[0x87F8DC];
  v153 = 0;
  g_MapCellCount = MEMORY[0x87F8DC] + 2 * MEMORY[0x87F8E0];
  this->q049 = 1;
  this->q04A = 1;
  v52 = v48[3] + v48[2] - 1;
  this->q12C = v52;
  this->q130 = v52;
  if ( 2 * v52 + 2 > 0 )
  {
    *(_DWORD *)v150 = 0;
    do
    {
      v53 = 0;
      if ( this->q12C + 2 > 0 )
      {
        v146[0] = (__int16)v50;
        do
        {
          LOWORD(v147) = v53;
          HIWORD(v147) = v50;
          v54 = (__int16)v53 + v146[0];
          v55 = this->q03D;
          if ( v54 > v55
            && (__int16)v53 - v146[0] < v55
            && v146[0] - (__int16)v53 < v55
            && v54 <= v55 + 2 * this->q0F8 )
          {
            v56 = *(_DWORD *)v150 + v53;
            v57 = *(_DWORD **)(this->q04F + 4 * (*(_DWORD *)v150 + v53));
            if ( v57 )
            {
              CellClass::Construct(v57);
              ObjectClass::SetMember09(&v147);
            }
            else
            {
              v58 = __2_YAPAXI_Z(0x148u);
              if ( v58 )
                v59 = CellClass::Construct(v58);
              else
                v59 = 0;
              ObjectClass::SetMember09(&v147);
              *(_DWORD *)(this->q04F + 4 * v56) = v59;
              v50 = v153;
            }
            *(_BYTE *)(*(_DWORD *)(this->q04F + 4 * v56) + 283) = a4;
          }
          ++v53;
        }
        while ( v53 < this->q12C + 2 );
      }
      v153 = ++v50;
      *(_DWORD *)v150 += 512;
    }
    while ( v50 < 2 * this->q130 + 2 );
  }
  v145 = 0;
  if ( (_BYTE)jj )
    goto LABEL_119;
  v60 = this->q03D;
  this->q043 = 1;
  this->CellIterator_NextY = v60;
  this->CellIterator_CurrentY = v60 - 1;
  this->CellIterator_NextCell = (v60 << 11) + this->q04F + 4;
  v61 = *(_DWORD *)(LayerClass::CellIteratorNext(this) + 36);
  v62 = a2[1];
  v63 = *a2;
  v146[0] = v61;
  LOWORD(v153) = v61 - v159;
  LOWORD(v147) = v63 + v62;
  HIWORD(v147) = v62 - v63;
  HIWORD(v153) = HIWORD(v61) - HIWORD(v159);
  LOWORD(jj) = v61 - v159 - (v63 + v62);
  HIWORD(jj) = HIWORD(v61) - HIWORD(v159) - (v62 - v63);
  *(_DWORD *)v150 = jj;
  if ( v151 > 0 )
  {
    v153 = v151;
    v64 = (int *)(v156 + 36);
    do
    {
      v159 = *v64;
      LOWORD(jj) = v159 + v150[0];
      HIWORD(jj) = v150[1] + HIWORD(v159);
      v65 = (char *)(v64 - 9);
      v66 = (__int16)(v159 + v150[0]) + ((__int16)(v150[1] + HIWORD(v159)) << 9);
      if ( v66 < 0x40000 && (v67 = *(char **)(this->q04F + 4 * v66)) != 0 )
      {
        v68 = v67;
      }
      else
      {
        v68 = (char *)g_CellClassArray;
        g_Map_GlobalCellIndex = jj;
      }
      v151 = *((_DWORD *)v68 + 9);
      if ( v68 )
      {
        CellClass::CopyNeighborData(v64 - 9);
        v69 = *v64;
        v156 = 24;
        *((_DWORD *)v68 + 9) = v69;
        *((_DWORD *)v68 + 10) = v64[1];
        *((_DWORD *)v68 + 11) = v64[2];
        *((_DWORD *)v68 + 12) = v64[3];
        *((_DWORD *)v68 + 13) = v64[4];
        *((_DWORD *)v68 + 14) = v64[5];
        *((_DWORD *)v68 + 15) = v64[6];
        *((_DWORD *)v68 + 16) = v64[7];
        *((_DWORD *)v68 + 17) = v64[8];
        *((_DWORD *)v68 + 18) = v64[9];
        *((_DWORD *)v68 + 19) = v64[10];
        *((_DWORD *)v68 + 20) = v64[11];
        *((_DWORD *)v68 + 21) = v64[12];
        *((_DWORD *)v68 + 22) = v64[13];
        *((_DWORD *)v68 + 23) = v64[14];
        *((_DWORD *)v68 + 24) = v64[15];
        *((_DWORD *)v68 + 25) = v64[16];
        *((_DWORD *)v68 + 26) = v64[17];
        *((_DWORD *)v68 + 27) = v64[18];
        *((_DWORD *)v68 + 28) = v64[19];
        *((_DWORD *)v68 + 29) = v64[20];
        *((_DWORD *)v68 + 30) = v64[21];
        v70 = v68 + 124;
        v71 = v65 - v68;
        do
        {
          *v70 = *(_WORD *)((char *)v70 + v71);
          ++v70;
          --v156;
        }
        while ( v156 );
        v72 = v68 + 172;
        v156 = 24;
        do
        {
          *v72 = *(_WORD *)((char *)v72 + v71);
          ++v72;
          --v156;
        }
        while ( v156 );
        *((_DWORD *)v68 + 55) = *((_DWORD *)v65 + 55);
        *((_DWORD *)v68 + 56) = *((_DWORD *)v65 + 56);
        *((_DWORD *)v68 + 57) = *((_DWORD *)v65 + 57);
        *((_DWORD *)v68 + 58) = *((_DWORD *)v65 + 58);
        *((_DWORD *)v68 + 59) = *((_DWORD *)v65 + 59);
        *((_DWORD *)v68 + 60) = *((_DWORD *)v65 + 60);
        *((_DWORD *)v68 + 61) = *((_DWORD *)v65 + 61);
        *((_DWORD *)v68 + 62) = *((_DWORD *)v65 + 62);
        *((_DWORD *)v68 + 63) = *((_DWORD *)v65 + 63);
        *((_DWORD *)v68 + 64) = *((_DWORD *)v65 + 64);
        *((_DWORD *)v68 + 65) = *((_DWORD *)v65 + 65);
        *((_WORD *)v68 + 132) = *((_WORD *)v65 + 132);
        *((_WORD *)v68 + 133) = *((_WORD *)v65 + 133);
        *((_WORD *)v68 + 134) = *((_WORD *)v65 + 134);
        *((_WORD *)v68 + 135) = *((_WORD *)v65 + 135);
        *((_WORD *)v68 + 136) = *((_WORD *)v65 + 136);
        *((_WORD *)v68 + 137) = *((_WORD *)v65 + 137);
        *((_WORD *)v68 + 138) = *((_WORD *)v65 + 138);
        *((_WORD *)v68 + 139) = *((_WORD *)v65 + 139);
        v68[280] = v65[280];
        v68[281] = v65[281];
        v68[282] = v65[282];
        v68[283] = v65[283];
        v68[284] = v65[284];
        v68[285] = v65[285];
        v68[286] = v65[286];
        v68[287] = v65[287];
        v68[288] = v65[288];
        v68[289] = v65[289];
        v68[290] = v65[290];
        *((_DWORD *)v68 + 73) = *((_DWORD *)v65 + 73);
        *((_DWORD *)v68 + 74) = *((_DWORD *)v65 + 74);
        v73 = *((_DWORD *)v68 + 75)
            ^ ((unsigned __int8)*((_DWORD *)v65 + 75)
             ^ (unsigned __int8)*((_DWORD *)v68 + 75))
            & 1;
        *((_DWORD *)v68 + 75) = v73;
        v74 = v73 ^ ((unsigned __int8)*((_DWORD *)v65 + 75) ^ (unsigned __int8)v73) & 2;
        *((_DWORD *)v68 + 75) = v74;
        v75 = v74 ^ ((unsigned __int8)*((_DWORD *)v65 + 75) ^ (unsigned __int8)v74) & 4;
        *((_DWORD *)v68 + 75) = v75;
        v76 = v75 ^ ((unsigned __int8)*((_DWORD *)v65 + 75) ^ (unsigned __int8)v75) & 8;
        *((_DWORD *)v68 + 75) = v76;
        *((_DWORD *)v68 + 75) = v76 ^ ((unsigned __int8)*((_DWORD *)v65 + 75) ^ (unsigned __int8)v76) & 0x10;
        *((_DWORD *)v68 + 76) = *((_DWORD *)v65 + 76);
        *((_DWORD *)v68 + 77) = *((_DWORD *)v65 + 77);
        v77 = *((_DWORD *)v68 + 80);
        v68[312] = v65[312];
        *((_DWORD *)v68 + 79) = *((_DWORD *)v65 + 79);
        v78 = v77 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v77) & 1;
        *((_DWORD *)v68 + 80) = v78;
        v79 = v78 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v78) & 2;
        *((_DWORD *)v68 + 80) = v79;
        v80 = v79 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v79) & 4;
        *((_DWORD *)v68 + 80) = v80;
        v81 = v80 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v80) & 8;
        *((_DWORD *)v68 + 80) = v81;
        v82 = v81 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v81) & 0x10;
        *((_DWORD *)v68 + 80) = v82;
        v83 = v82 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v82) & 0x20;
        *((_DWORD *)v68 + 80) = v83;
        v84 = v83 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v83) & 0x40;
        *((_DWORD *)v68 + 80) = v84;
        v85 = v84 ^ ((unsigned __int8)*((_DWORD *)v65 + 80) ^ (unsigned __int8)v84) & 0x80;
        *((_DWORD *)v68 + 80) = v85;
        v86 = v85 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v85) & 0x100;
        *((_DWORD *)v68 + 80) = v86;
        v87 = v86 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v86) & 0x200;
        *((_DWORD *)v68 + 80) = v87;
        v88 = v87 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v87) & 0x400;
        *((_DWORD *)v68 + 80) = v88;
        v89 = v88 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v88) & 0x800;
        *((_DWORD *)v68 + 80) = v89;
        v90 = v89 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v89) & 0x1000;
        *((_DWORD *)v68 + 80) = v90;
        v91 = v90 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v90) & 0x2000;
        *((_DWORD *)v68 + 80) = v91;
        v92 = v91 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v91) & 0x4000;
        *((_DWORD *)v68 + 80) = v92;
        v93 = v92 ^ ((unsigned __int16)*((_DWORD *)v65 + 80) ^ (unsigned __int16)v92) & 0x8000;
        *((_DWORD *)v68 + 80) = v93;
        v94 = v93 ^ (*((_DWORD *)v65 + 80) ^ v93) & 0x10000;
        *((_DWORD *)v68 + 80) = v94;
        v95 = v94 ^ (*((_DWORD *)v65 + 80) ^ v94) & 0x20000;
        *((_DWORD *)v68 + 80) = v95;
        v96 = v95 ^ (*((_DWORD *)v65 + 80) ^ v95) & 0x40000;
        *((_DWORD *)v68 + 80) = v96;
        v97 = v96 ^ (*((_DWORD *)v65 + 80) ^ v96) & 0x80000;
        *((_DWORD *)v68 + 80) = v97;
        v98 = v97 ^ (*((_DWORD *)v65 + 80) ^ v97) & 0x100000;
        *((_DWORD *)v68 + 80) = v98;
        v99 = v98 ^ (*((_DWORD *)v65 + 80) ^ v98) & 0x200000;
        *((_DWORD *)v68 + 80) = v99;
        *((_DWORD *)v68 + 80) = v99 ^ (*((_DWORD *)v65 + 80) ^ v99) & 0x400000;
        ObjectClass::SetMember09(&v151);
      }
      v64 += 82;
      --v153;
    }
    while ( v153 );
  }
  v100 = this->q03D;
  this->q043 = 1;
  this->CellIterator_NextY = v100;
  this->CellIterator_CurrentY = v100 - 1;
  this->CellIterator_NextCell = (v100 << 11) + this->q04F + 4;
  for ( j = LayerClass::CellIteratorNext(this); j; j = LayerClass::CellIteratorNext(this) )
  {
    v102 = *(_DWORD *)(j + 36);
    v103 = this->q03D;
    jj = v102;
    v104 = a2[1];
    v156 = v102;
    if ( (__int16)v102 + SHIWORD(v102) < v103 - 2 * v104 + 1
      || SHIWORD(v102) - (__int16)v102 > v103 + 2 * *a2 - 1
      || (__int16)v102 + SHIWORD(v102) > v103 + 2 * (i + this->q0F8 - v104 - MEMORY[0x87F8E0])
      || (__int16)v102 - SHIWORD(v102) > v103 + 2 * (v158 - *a2 - MEMORY[0x87F8DC]) - 1 )
    {
      v105 = (__int16)v102 + (SHIWORD(v102) << 9);
      v106 = *(_DWORD *)(this->q04F + 4 * v105);
      if ( v106 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v106 + 32))(v106, 1);
      v107 = __2_YAPAXI_Z(0x148u);
      if ( v107 )
        v108 = CellClass::Construct(v107);
      else
        v108 = 0;
      *(_DWORD *)(this->q04F + 4 * v105) = v108;
      ObjectClass::SetMember09(&v156);
      *(_DWORD *)(*(_DWORD *)(this->q04F + 4 * v105) + 56) = 0xFFFF;
      *(_BYTE *)(*(_DWORD *)(this->q04F + 4 * v105) + 282) = 0;
      *(_BYTE *)(*(_DWORD *)(this->q04F + 4 * v105) + 284) = 0;
      *(_DWORD *)(*(_DWORD *)(this->q04F + 4 * v105) + 68) = -1;
      *(_BYTE *)(*(_DWORD *)(this->q04F + 4 * v105) + 283) = a4;
    }
  }
  for ( k = 0; k < 702; ++k )
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(k) )
    {
      Waypoint_Location = (_WORD *)ScenarioClass::Get_Waypoint_Location(&a2, k);
      v111 = CellStruct::Add(Waypoint_Location, &jj, v150);
      ScenarioClass::Set_Waypoint(k, *v111);
    }
  }
  for ( m = 0; m < MEMORY[0x8B4148]; ++m )
  {
    CellClass::initCellData(v150);
    CellClass::initCellData(v150);
  }
  Coord::Subtract(&v147, 128, 128, 0);
  Coord::Subtract(&v153, (v150[0] << 8) + 128, (v150[1] << 8) + 128, 0);
  v113 = Coord::Subtract(v146, v153 - v147, v154 - v148, v155 - v149);
  v114 = *v113;
  jj = 0;
  v115 = v113[1];
  v160 = v115;
  for ( n = v113[2]; jj < MEMORY[0xA8E370]; ++jj )
  {
    v116 = (_DWORD *)*((_DWORD *)MEMORY[0xA8E364] + jj);
    if ( (*(int (__thiscall **)(_DWORD *))(*v116 + 44))(v116) != 4 )
    {
      v117 = v114 + v116[39];
      v148 = v116[40];
      v118 = Coord::Subtract(v146, v117, v148 + v115, v116[41] + n);
      v153 = *v118;
      v154 = v118[1];
      v119 = *v116;
      v155 = v118[2];
      (*(void (__thiscall **)(_DWORD *, int *))(v119 + 436))(v116, &v153);
    }
  }
  for ( ii = HouseClass_Count - 1; ii >= 0; --ii )
    CellClass::IterateOccupiers(*(_DWORD *)v150);
  v121 = 0;
  for ( jj = 0; v121 < MEMORY[0xA8E9B8]; jj = v121 )
  {
    v122 = (int *)*((_DWORD *)MEMORY[0xA8E9AC] + v121);
    if ( !v122[51] )
    {
      v123 = v122[40];
      v153 = v114 + v122[39];
      v124 = *v122;
      v125 = v122[41];
      v154 = v115 + v123;
      v155 = n + v125;
      (*(void (__thiscall **)(int *, int *))(v124 + 436))(v122, &v153);
      v115 = v160;
      v121 = jj;
    }
    ++v121;
  }
  v126 = 0;
  ++MEMORY[0xA8E7AC];
  jj = 0;
  if ( MEMORY[0xA8E370] > 0 )
  {
    do
    {
      if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8E364] + v126) + 44))(*((_DWORD *)MEMORY[0xA8E364]
                                                                                         + v126)) != 24
        || *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0xA8E364] + v126) + 172) + 692) != 1 )
      {
        a2 = *(_DWORD **)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)MEMORY[0xA8E364] + v126) + 440))(
                           *((_DWORD *)MEMORY[0xA8E364] + v126),
                           &a4);
        for ( kk = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8E364] + v126) + 264))(
                              *((_DWORD *)MEMORY[0xA8E364] + v126),
                              0); *kk != 0x7FFF || kk[1] != 0x7FFF; kk += 2 )
        {
          v128 = (__int16)(*kk + (_WORD)a2);
          v129 = this->q03D;
          v130 = (__int16)(HIWORD(a2) + kk[1]);
          if ( v130 + v128 <= v129 )
            goto LABEL_93;
          if ( v128 - v130 >= v129 || v130 - v128 >= v129 || v130 + v128 > v129 + 2 * this->q0F8 )
          {
            v126 = jj;
LABEL_93:
            (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8E364] + v126) + 212))(*((_DWORD *)MEMORY[0xA8E364]
                                                                                            + v126));
            v131 = *((_DWORD *)MEMORY[0xA8E364] + v126);
            if ( v131 )
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v131 + 32))(v131, 1);
            --v126;
            break;
          }
          v126 = jj;
        }
      }
      jj = ++v126;
    }
    while ( v126 < MEMORY[0xA8E370] );
  }
  v132 = 0;
  --MEMORY[0xA8E7AC];
  if ( this->q050 > 0 )
  {
    do
    {
      v133 = this->q04F;
      v134 = *(_DWORD *)(v133 + 4 * v132);
      a2 = (_DWORD *)(v133 + 4 * v132);
      jj = v134;
      if ( v134 )
      {
        v135 = v132 % 512;
        v136 = this->q03D;
        v137 = (__int16)(v132 / 512);
        v138 = v135 + v137;
        if ( v138 > v136 )
        {
          if ( v135 - v137 < v136 && v137 - v135 < v136 && v138 <= v136 + 2 * this->q0F8 )
            continue;
          v134 = jj;
        }
        *a2 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v134 + 32))(v134, 1);
      }
    }
    while ( ++v132 < this->q050 );
  }
  v139 = this->q03D;
  this->q043 = 1;
  this->CellIterator_NextY = v139;
  this->CellIterator_CurrentY = v139 - 1;
  this->CellIterator_NextCell = (v139 << 11) + this->q04F + 4;
  for ( mm = (_DWORD *)LayerClass::CellIteratorNext(this); mm; mm = (_DWORD *)LayerClass::CellIteratorNext(this) )
  {
    v141 = mm[80];
    if ( (v141 & 0x80u) != 0 && !mm[11] )
    {
      v142 = mm[17];
      v143 = 2 * (((unsigned int)~v141 >> 11) & 1);
      if ( v142 == 24 || v142 == 25 )
        UpdateCellClassNeighborTerrain((int)mm, v143, v143, 1);
      else
        SetCellClassOccupancyFlags((int)mm, v143, v143, 1);
    }
  }
  if ( a5 )
  {
    CellClass::BuildPathfindingGraph(this);
    v145 = 1;
  }
  for ( nn = 0; nn < MEMORY[0xA8E370]; ++nn )
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)MEMORY[0xA8E364] + nn) + 292))(
      *((_DWORD *)MEMORY[0xA8E364] + nn),
      1);
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
  if ( !v145 )
  {
LABEL_119:
    if ( a5 )
      CellClass::BuildPathfindingGraph(this);
  }
  if ( g_CellClassArray )
    CellClass::Construct(g_CellClassArray);
  __3_YAXPAX_Z(Block);
}


// ==== 0x00567110  CellClass::BuildPathfindingGraph  this=CellClass  sig=csp ====
_DWORD *__thiscall sub_567110(int this)
{
  int v2; // edi
  _BYTE *v3; // eax
  _BYTE *v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // ebp

  if ( *(_DWORD *)(this + 104) ) /*0x567118*/
  {
    __3_YAXPAX_Z(*(void **)(this + 104)); /*0x567120*/
    *(_DWORD *)(this + 104) = 0; /*0x567128*/
  }
  if ( *(_DWORD *)(this + 112) ) /*0x56712b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 112)); /*0x567133*/
    *(_DWORD *)(this + 112) = 0; /*0x56713b*/
  }
  v2 = (*(_DWORD *)(this + 244) + *(_DWORD *)(this + 248) + 1) * (*(_DWORD *)(this + 244) + *(_DWORD *)(this + 248) + 1); /*0x56714e*/
  *(_DWORD *)(this + 108) = v2; /*0x567151*/
  v3 = __2_YAPAXI_Z(4 * v2); /*0x56715c*/
  if ( v3 ) /*0x567166*/
  {
    v4 = v3; /*0x56716b*/
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
  *(_DWORD *)(this + 104) = v3; /*0x567182*/
  *(_DWORD *)(this + 112) = __2_YAPAXI_Z(10 * *(_DWORD *)(this + 108)); /*0x56719c*/
  CellClass::setOverlayType((void **)MEMORY[0x87E8B8], this + 236); /*0x5671a5*/
  v6 = 0; /*0x5671aa*/
  v7 = this + 160; /*0x5671ac*/
  do /*0x5671df*/
  {
    v7 += 24; /*0x5671c7*/
    *(_DWORD *)(v7 - 24) = 4 * *(_DWORD *)(this + 248) * *(_DWORD *)(this + 244) / ((1 << (v6 + 1)) * (1 << (v6 + 1))); /*0x5671d7*/
    ++v6; /*0x5671da*/
  }
  while ( v6 < 3 ); /*0x5671df*/
  MapClass::PostProcessReveal((_DWORD *)this, 0); /*0x5671e4*/
  MapClass::ProcessRegion((_DWORD *)this); /*0x5671eb*/
  Terrain::ConnectivityGraph((_DWORD *)this); /*0x5671f2*/
  v8 = 2; /*0x5671f7*/
  v9 = this + 188; /*0x5671fc*/
  do /*0x567218*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x567207*/
    Subzone::BuildGraph((_DWORD *)this, v8--); /*0x56720d*/
    v9 -= 24; /*0x567213*/
  }
  while ( v8 >= 0 ); /*0x567218*/
  return MapClass::AllocArrays(MEMORY[0x87E8B8]); /*0x567224*/
}


// ==== 0x00567230  MapClass::UpdateVisibility  this=MapClass  sig=csp ====
int __thiscall ShroudClass::UpdateVisibility(int *this, MouseClass *aP1)
{
  int *v3; // esi
  int *v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  int i; // ebp
  #375 **v13; // esi
  char v14; // bl
  IUnknown *v15; // eax
  bool IsWithinUsableArea; // al
  int v17[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = this + 63; /*0x56724b*/
  v4 = ClipRectIntersection(v17, &aP1->field_0, this + 59, 0, 0); /*0x567251*/
  *v3 = *v4; /*0x56725a*/
  this->q100 = v4[1]; /*0x56725f*/
  this->q041 = v4[2]; /*0x567265*/
  this->q042 = v4[3]; /*0x56726b*/
  v5 = *v3; /*0x56726e*/
  if ( *v3 <= 2 ) /*0x567273*/
    v5 = 2; /*0x567275*/
  v6 = this->q100; /*0x56727a*/
  *v3 = v5; /*0x567280*/
  if ( v6 <= 2 ) /*0x567285*/
    v6 = 2; /*0x567287*/
  v7 = this->q03D; /*0x56728c*/
  this->q100 = v6; /*0x567292*/
  v8 = v7 - v5 - 2; /*0x56729a*/
  if ( this->q041 < v8 ) /*0x5672a5*/
    v8 = this->q041; /*0x5672a7*/
  v9 = this->q042; /*0x5672a9*/
  this->q041 = v8; /*0x5672af*/
  v10 = this->q0F8 - v6 - 6; /*0x5672bd*/
  if ( v9 < v10 ) /*0x5672c2*/
    v10 = v9; /*0x5672c4*/
  this->q042 = v10; /*0x5672cd*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x5672d3*/
  result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412]; /*0x5672d8*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_14B0[412]; ++i ) /*0x5672e1*/
  {
    v13 = *(#375 ***)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i); /*0x5672f1*/
    v14 = *((_BYTE *)v13 + 981); /*0x5672f8*/
    v15 = (IUnknown *)(*((int (__thiscall **)(#375 **, MouseClass **))*v13 + 110))(v13, &aP1); /*0x5672fe*/
    IsWithinUsableArea = LayerClass::IsWithinUsableArea(this, v15, (TechnoClass *)1); /*0x567307*/
    *((_BYTE *)v13 + 981) = IsWithinUsableArea; /*0x56730e*/
    if ( !v14 /*0x56733f*/
      && IsWithinUsableArea
      && (unsigned __int8)House::IsHumanPlayer(v13[135])
      && (*((int (__thiscall **)(#375 **))*v13 + 11))(v13) != 6
      && *((_BYTE *)v13 + 144)
      && !*((_BYTE *)v13 + 129) )
    {
      (*((void (__thiscall **)(#375 **, _DWORD, _DWORD))*v13 + 72))(v13, 0, 0); /*0x567351*/
    }
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412]; /*0x567357*/
  }
  return result; /*0x567362*/
}


// ==== 0x005673A0  MapClass::RevealArea0  this=IUnknown  sig=csp ====
int __thiscall MapClass::RevealArea0(
        int *this,
        IUnknown *aP1,
        MouseClass *aP2,
        HouseClass *aP3,
        MouseClass *aP4,
        HouseClass *aP5,
        char a7,
        char a8,
        char a9)
{
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int result; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  IUnknown *v18; // edi
  int v19; // eax
  int v20; // esi
  MouseClass *v21; // ecx
  __int16 v22; // ax
  __int16 v23; // cx
  int v24; // edx
  int v25; // esi
  double v26; // st7
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  _DWORD *v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  MouseClass *v38; // [esp+18h] [ebp-44h]
  IUnknown *v39; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v41; // [esp+2Ch] [ebp-30h]
  __int16 v42; // [esp+30h] [ebp-2Ch]
  __int16 v43; // [esp+32h] [ebp-2Ah]
  __int16 v44[4]; // [esp+38h] [ebp-24h] BYREF
  int v45; // [esp+40h] [ebp-1Ch]
  __int16 v46; // [esp+48h] [ebp-14h]
  __int16 v47; // [esp+4Ah] [ebp-12h]
  int v48; // [esp+50h] [ebp-Ch] BYREF
  int v49; // [esp+54h] [ebp-8h]
  IUnknown *aP0; // [esp+58h] [ebp-4h]
  IUnknown *aP1a; // [esp+60h] [ebp+4h]
  IUnknown *aP1b; // [esp+60h] [ebp+4h]
  char aP4a; // [esp+6Ch] [ebp+10h]

  v41 = aP1->field_8 / g_MapRenderState; /*0x5673b7*/
  v48 = aP1->field_0; /*0x5673bf*/
  v49 = aP1->field_4; /*0x5673c6*/
  aP0 = (IUnknown *)aP1->field_8; /*0x5673cd*/
  v10 = ZCoordToScreenY(aP0); /*0x5673d1*/
  v48 += (((unsigned int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 31) /*0x5673f8*/
        + ((int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 4)) << 8;
  v11 = ZCoordToScreenY(aP0); /*0x5673fc*/
  v49 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x56742a*/
        + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v44[0] = aP1->field_0 / 256; /*0x56744d*/
  v12 = v48 / 256; /*0x56745e*/
  v42 = v48 / 256; /*0x567467*/
  v43 = v49 / 256; /*0x56746c*/
  v44[1] = aP1->field_4 / 256; /*0x567475*/
  v46 = v42 - v44[0] - 2; /*0x56749b*/
  v47 = v43 - v44[1] - 2; /*0x5674a7*/
  result = v43; /*0x5674af*/
  v14 = this->q03D; /*0x5674b2*/
  v15 = v43 + v42; /*0x5674b8*/
  if ( v15 <= v14 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v42 - v43 >= v14 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v43 - v42; /*0x5674cf*/
  if ( result >= v14 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = this->q0F8; /*0x5674d9*/
  if ( v15 > v14 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = (int)aP2; /*0x5674ea*/
  if ( !aP2 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( (int)aP2 >= 11 ) /*0x5674f9*/
    aP2 = (MouseClass *)10; /*0x567500*/
  v38 = (MouseClass *)dword_ABD490; /*0x567512*/
  aP1a = (IUnknown *)&dword_ABCF60; /*0x56751a*/
  v16 = dword_7ED3D0[(_DWORD)aP2]; /*0x567528*/
  if ( !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6126) && (_BYTE)aP4 && (int)aP2 > 2 ) /*0x56753e*/
  {
    v17 = dword_7ED3C4[(_DWORD)aP2]; /*0x567540*/
    v16 -= v17; /*0x567547*/
    v38 = (MouseClass *)(4 * v17 + 11261072); /*0x567557*/
    aP1a = (IUnknown *)(4 * v17 + 11259744); /*0x56755b*/
  }
  v18 = (IUnknown *)aP3; /*0x567563*/
  aP1b = (IUnknown *)((char *)aP1a - 4); /*0x56756c*/
  if ( !aP3 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = HouseClass_Player.field_0; /*0x567572*/
  if ( !HouseClass_Player.field_0 ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( aP3 != (HouseClass *)HouseClass_Player.field_0 ) /*0x56757d*/
  {
    if ( ((1 << *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184)) & aP3->radarVisibleTo[0]) != 0 ) /*0x567595*/
    {
      v18 = (IUnknown *)HouseClass_Player.field_0; /*0x567597*/
      aP3 = (HouseClass *)HouseClass_Player.field_0; /*0x567599*/
    }
    if ( v18 != (IUnknown *)HouseClass_Player.field_0 ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v18, (IUnknown *)HouseClass_Player.field_0) /*0x5675b2*/
        && *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6119) )
      {
        result = HouseClass_Player.field_0; /*0x5675bc*/
        v18 = (IUnknown *)HouseClass_Player.field_0; /*0x5675c1*/
        aP3 = (HouseClass *)HouseClass_Player.field_0; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
LABEL_21:
      result = HouseClass_Player.field_0; /*0x5675c9*/
LABEL_22:
      if ( v18 != (IUnknown *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 3 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x5675f1*/
    || !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
    || (aP4a = 1,
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])) )
  {
    aP4a = 0; /*0x5675fd*/
  }
  v19 = v16; /*0x567602*/
  v20 = v16 - 1; /*0x567604*/
  if ( v19 ) /*0x567607*/
  {
    for ( i = v20 + 1; i; --i ) /*0x56760e*/
    {
      v21 = v38; /*0x56761a*/
      v38 = (MouseClass *)((char *)v38 + 4); /*0x56761f*/
      v22 = LOWORD(v21->field_0) + v12; /*0x567626*/
      v23 = v43 + HIWORD(v21->field_0); /*0x56762d*/
      LOWORD(v45) = v22; /*0x567635*/
      aP1b = (IUnknown *)((char *)aP1b + 4); /*0x56763a*/
      v24 = this->q03D; /*0x56763e*/
      HIWORD(v45) = v23; /*0x567644*/
      *(_DWORD *)v44 = v45; /*0x567653*/
      v25 = v23 + v22; /*0x567657*/
      if ( v25 > v24 ) /*0x56765c*/
      {
        if ( v22 - v23 >= v24 || v23 - v22 >= v24 ) /*0x567672*/
        {
          LOWORD(v12) = v42; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        LOWORD(v12) = v42; /*0x56767e*/
        if ( v25 > v24 + 2 * this->q0F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v22 - v42) > (int)aP2 ) /*0x56769e*/
          continue; /*0x56769e*/
        v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x5676de*/
                                            (double)(__int16)(v45 - v42) * (double)(__int16)(v45 - v42)
                                          + (double)(__int16)(HIWORD(v45) - v43) * (double)(__int16)(HIWORD(v45) - v43)));
        if ( (__int16)Math::RoundToInt(v26) > (int)aP2 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v44[0] + (v44[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = *(int **)(this->q04F + 4 * v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_Map_GlobalCellIndex = *(IUnknown **)v44; /*0x567724*/
          v29 = g_CellClassArray; /*0x567729*/
        }
        if ( a8 && *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6126) ) /*0x56773c*/
        {
          LOWORD(v39) = v44[0] - v46 + LOWORD(aP1b->field_0); /*0x567765*/
          HIWORD(v39) = v44[1] - v47 + HIWORD(aP1b->field_0); /*0x56776a*/
          v30 = (__int16)v39 + (SHIWORD(v39) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = g_CellClassArray; /*0x567794*/
            g_Map_GlobalCellIndex = v39; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v41 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = *((__int16 *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !aP4a ) /*0x5677d2*/
        {
LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal(&stru_87C374.__pad_14B0[8132], (MouseClass *)v44, (IUnknown *)aP3); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !(_BYTE)aP5 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((MouseClass *)v44, (IUnknown *)aP3, 0); /*0x567893*/
                else
                  CellClass::Unshroud(v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == this->q03D + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == this->q03D + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = this->q0F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != this->q03D + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(this, (IUnknown *)&v48, 0, (MouseClass *)((char *)&aP2->field_0 + 3), 0); /*0x5678cf*/
}


// ==== 0x005678E0  MapClass::RevealArea1  this=HouseClass  sig=csp ====
int __thiscall MapClass::RevealArea1(
        int *this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6,
        char a8,
        IUnknown *aP8)
{
  BuildingTypeClass *v9; // edi
  BuildingTypeClass *v10; // ebx
  IUnknown *v11; // ebp
  int v12; // eax
  int v13; // edi
  int v14; // eax
  __int64 v15; // rax
  int v16; // edi
  int v17; // ebx
  int result; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  int *v22; // ebp
  int v23; // eax
  IUnknown *v24; // ebx
  int *v25; // ebp
  int v26; // ecx
  int v27; // esi
  MouseClass *v28; // ecx
  __int16 v29; // ax
  __int16 v30; // cx
  int v31; // edx
  int v32; // esi
  double v33; // st7
  unsigned int v34; // edx
  _DWORD *v35; // edx
  _DWORD *v36; // esi
  unsigned int v37; // eax
  _DWORD *v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // edi
  int v42; // ecx
  MouseClass *v43; // [esp+18h] [ebp-38h]
  IUnknown *v45; // [esp+20h] [ebp-30h]
  int v46; // [esp+2Ch] [ebp-24h]
  __int16 v47; // [esp+30h] [ebp-20h]
  __int16 v48; // [esp+32h] [ebp-1Eh]
  __int16 v49[4]; // [esp+38h] [ebp-18h] BYREF
  WaveClass *v50; // [esp+40h] [ebp-10h]
  __int16 v51; // [esp+48h] [ebp-8h]
  __int16 v52; // [esp+4Ah] [ebp-6h]
  char aP1a; // [esp+54h] [ebp+4h]
  IUnknown *aP4a; // [esp+60h] [ebp+10h]

  v46 = aP1->field_8 / g_MapRenderState; /*0x5678f9*/
  v9 = (BuildingTypeClass *)aP1->field_0; /*0x5678ff*/
  v10 = (BuildingTypeClass *)aP1->field_4; /*0x567901*/
  v11 = (IUnknown *)aP1->field_8; /*0x567904*/
  v12 = ZCoordToScreenY(v11); /*0x567909*/
  v13 = (int)&v9->vtable0[256 /*0x567928*/
                        * (((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31)
                         + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4))];
  v14 = ZCoordToScreenY(v11); /*0x56792a*/
  v15 = (int)&v10->vtable0[256 /*0x567958*/
                         * (((unsigned int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 31)
                          + ((int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4))];
  v49[0] = aP1->field_0 / 256; /*0x567971*/
  v16 = v13 / 256; /*0x567982*/
  v17 = (BYTE4(v15) + (int)v15) >> 8; /*0x567985*/
  v47 = v16; /*0x56798b*/
  v48 = v17; /*0x567990*/
  v49[1] = aP1->field_4 / 256; /*0x56799d*/
  v51 = v16 - v49[0] - 2; /*0x5679c3*/
  v52 = v17 - v49[1] - 2; /*0x5679d3*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 3 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x5679eb*/
    || !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
    || (aP1a = 1,
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])) )
  {
    aP1a = 0; /*0x5679f7*/
  }
  result = (__int16)v17; /*0x5679ff*/
  v19 = (__int16)v17 + (__int16)v16; /*0x567a06*/
  v20 = this->q0F4; /*0x567a09*/
  if ( v19 <= v20 ) /*0x567a11*/
    return result; /*0x567a11*/
  if ( (__int16)v16 - (__int16)v17 >= v20 ) /*0x567a1d*/
    return result; /*0x567a1d*/
  result = (__int16)v17 - (__int16)v16; /*0x567a23*/
  if ( result >= v20 ) /*0x567a27*/
    return result; /*0x567a27*/
  result = this->armorMultiplier; /*0x567a2d*/
  if ( v19 > v20 + 2 * result ) /*0x567a38*/
    return result; /*0x567a38*/
  result = (int)aP2; /*0x567a3e*/
  if ( !aP2 ) /*0x567a44*/
    return result; /*0x567a44*/
  if ( (int)aP2 >= 11 ) /*0x567a4d*/
  {
    result = 10; /*0x567a54*/
    aP2 = (IUnknown *)10; /*0x567a59*/
  }
  v21 = dword_7ED3D0[result]; /*0x567a63*/
  v43 = (MouseClass *)dword_ABD490; /*0x567a6a*/
  v22 = &dword_ABCF60; /*0x567a72*/
  if ( !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6126) && (_BYTE)aP4 && result > 2 ) /*0x567a8c*/
  {
    v23 = dword_7ED3C4[result]; /*0x567a8e*/
    v21 -= v23; /*0x567a95*/
    v22 = (int *)(4 * v23 + 11259744); /*0x567a9e*/
    v43 = (MouseClass *)(4 * v23 + 11261072); /*0x567aa5*/
  }
  v24 = aP3; /*0x567aa9*/
  v25 = v22 - 1; /*0x567aad*/
  if ( !aP3 ) /*0x567ab2*/
    goto LABEL_26; /*0x567ab2*/
  result = HouseClass_Player.field_0; /*0x567ab4*/
  if ( !HouseClass_Player.field_0 ) /*0x567abb*/
    goto LABEL_27; /*0x567abb*/
  if ( aP3 != (IUnknown *)HouseClass_Player.field_0 ) /*0x567abf*/
  {
    if ( ((1 << *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184)) & *(_DWORD *)&aP3->__pad_5498[76]) != 0 ) /*0x567ad7*/
    {
      v24 = (IUnknown *)HouseClass_Player.field_0; /*0x567ad9*/
      aP3 = (IUnknown *)HouseClass_Player.field_0; /*0x567adb*/
    }
    if ( v24 != (IUnknown *)HouseClass_Player.field_0 ) /*0x567ae1*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v24, (IUnknown *)HouseClass_Player.field_0) /*0x567af4*/
        && *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6119) )
      {
        result = HouseClass_Player.field_0; /*0x567afe*/
        v24 = (IUnknown *)HouseClass_Player.field_0; /*0x567b03*/
        aP3 = (IUnknown *)HouseClass_Player.field_0; /*0x567b05*/
        goto LABEL_27; /*0x567b09*/
      }
LABEL_26:
      result = HouseClass_Player.field_0; /*0x567b0b*/
LABEL_27:
      if ( v24 != (IUnknown *)result ) /*0x567b12*/
        return result; /*0x567b12*/
    }
  }
  v26 = v21; /*0x567b18*/
  v27 = v21 - 1; /*0x567b1a*/
  if ( v26 ) /*0x567b1d*/
  {
    v45 = (IUnknown *)(v27 + 1); /*0x567b24*/
    while ( 1 ) /*0x567b37*/
    {
      v28 = v43; /*0x567b37*/
      v43 = (MouseClass *)((char *)v43 + 4); /*0x567b3c*/
      v29 = LOWORD(v28->field_0) + v16; /*0x567b43*/
      v30 = v48 + HIWORD(v28->field_0); /*0x567b4a*/
      v31 = this->q0F4; /*0x567b4f*/
      LOWORD(v50) = v29; /*0x567b55*/
      ++v25; /*0x567b5a*/
      HIWORD(v50) = v30; /*0x567b5d*/
      *(_DWORD *)v49 = v50; /*0x567b6c*/
      v32 = v30 + v29; /*0x567b70*/
      if ( v32 > v31 /*0x567bb8*/
        && v29 - v30 < v31
        && v30 - v29 < v31
        && v32 <= v31 + 2 * this->armorMultiplier
        && (int)abs32(v29 - v47) <= (int)aP2 )
      {
        v33 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x567bf8*/
                                            (double)(__int16)((_WORD)v50 - v47) * (double)(__int16)((_WORD)v50 - v47)
                                          + (double)(__int16)(HIWORD(v50) - v48) * (double)(__int16)(HIWORD(v50) - v48)));
        if ( (__int16)Math::RoundToInt(v33) <= (int)aP2 ) /*0x567c0a*/
        {
          v34 = v49[0] + (v49[1] << 9); /*0x567c21*/
          if ( v34 < 0x40000 && (v35 = *(_DWORD **)(this->q04F + 4 * v34)) != 0 ) /*0x567c38*/
          {
            v36 = v35; /*0x567c3a*/
          }
          else
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v49; /*0x567c3e*/
            v36 = g_CellClassArray; /*0x567c43*/
          }
          if ( !a8 || !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6126) ) /*0x567c56*/
            goto LABEL_47; /*0x567c56*/
          LOWORD(aP4a) = v49[0] - v51 + *(_WORD *)v25; /*0x567c7c*/
          HIWORD(aP4a) = v49[1] - v52 + *((_WORD *)v25 + 1); /*0x567c81*/
          v37 = (__int16)aP4a + (SHIWORD(aP4a) << 9); /*0x567c8f*/
          if ( v37 >= 0x40000 || (v38 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v37)) == 0 ) /*0x567ca5*/
          {
            g_Map_GlobalCellIndex = aP4a; /*0x567cab*/
            v38 = g_CellClassArray; /*0x567cb0*/
          }
          if ( *((char *)v38 + 283) <= v46 + 3 ) /*0x567cc5*/
          {
LABEL_47:
            v39 = *((__int16 *)v36 + 18); /*0x567cd5*/
            v40 = *((__int16 *)v36 + 19); /*0x567cd9*/
            v41 = v36[80] & 0xFFFFFFBF; /*0x567cdd*/
            v36[80] = v41; /*0x567ce2*/
            if ( (_BYTE)aP6 ) /*0x567ce8*/
            {
              if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36[75] & 8) != 0 ) /*0x567cff*/
                DisplayClass::ProcessCellReveal(&stru_87C374.__pad_14B0[8132], (MouseClass *)v49, aP3); /*0x567d10*/
            }
            else
            {
              if ( !aP1a ) /*0x567d1d*/
                goto LABEL_60; /*0x567d1d*/
              if ( v39 == 7 ) /*0x567d22*/
              {
                if ( v40 == this->q0F4 + 5 ) /*0x567d2f*/
                  goto LABEL_61; /*0x567d2f*/
              }
              else if ( v39 == 13 && v40 == this->q0F4 + 11 ) /*0x567d43*/
              {
                goto LABEL_61; /*0x567d43*/
              }
              v42 = this->armorMultiplier; /*0x567d45*/
              if ( v39 != v42 + 13 || v40 != v42 + this->q0F4 - 15 ) /*0x567d5e*/
LABEL_60:
                Conditions::CheckResult3((MouseClass *)v49, aP3, (char)aP8); /*0x567d60*/
            }
          }
        }
      }
LABEL_61:
      result = (int)&v45[-1].__tail_1602E[1]; /*0x567d79*/
      v45 = (IUnknown *)((char *)v45 - 1); /*0x567d7e*/
      if ( !v45 ) /*0x567d82*/
        return result; /*0x567d82*/
      LOWORD(v16) = v47; /*0x567b2a*/
    }
  }
  return result; /*0x567d88*/
}


// ==== 0x00567DA0  MapClass::RevealArea2  this=IUnknown  sig=csp ====
int __thiscall MapClass::RevealArea2(_DWORD *this, IUnknown *aP1, MouseClass *aP2, MouseClass *aP3, IUnknown *aP4)
{
  MouseClass *v5; // eax
  MouseClass *v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // edi
  BuildingTypeClass *v11; // ebx
  int v12; // eax
  signed int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  int *v16; // ebp
  __int64 v17; // rax
  int v18; // esi
  int v19; // edi
  int *v20; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  IUnknown *v24; // eax
  IUnknown *v25; // ebx
  char AdjacentPassableMask; // al
  ObjectClass *v28; // [esp+Ch] [ebp+8h]
  MouseClass *aP3a; // [esp+10h] [ebp+Ch]

  v5 = aP3; /*0x567da1*/
  if ( (int)aP3 <= 11 ) /*0x567dac*/
  {
    if ( (int)aP3 < 3 ) /*0x567db8*/
      v5 = (MouseClass *)3; /*0x567dba*/
  }
  else
  {
    v5 = (MouseClass *)11; /*0x567dae*/
  }
  v6 = aP2; /*0x567dbf*/
  if ( (int)aP2 < 0 ) /*0x567dc5*/
  {
    v7 = dword_7ED3D0[(_DWORD)v5]; /*0x567dc7*/
    aP2 = 0; /*0x567dce*/
    goto LABEL_10; /*0x567dd6*/
  }
  if ( (int)aP2 > 8 ) /*0x567ddb*/
  {
    aP2 = (MouseClass *)8; /*0x567de1*/
    v6 = (MouseClass *)8; /*0x567de9*/
LABEL_9:
    v7 = dword_7ED3D0[(_DWORD)v5] - dword_7ED3CC[(_DWORD)v6]; /*0x567ded*/
    goto LABEL_10; /*0x567dfb*/
  }
  if ( aP2 ) /*0x567efd*/
    goto LABEL_9; /*0x567efd*/
  v7 = dword_7ED3D0[(_DWORD)v5]; /*0x567f03*/
LABEL_10:
  aP3a = (MouseClass *)v7; /*0x567dfd*/
  result = (int)aP4; /*0x567e01*/
  if ( !aP4 ) /*0x567e0b*/
  {
    v9 = aP1->field_0; /*0x567e15*/
    v10 = aP1->field_4; /*0x567e17*/
    v11 = (BuildingTypeClass *)aP1->field_8; /*0x567e1a*/
    v12 = ZCoordToScreenY((int)v11); /*0x567e1f*/
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x567e3e*/
          + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
        + v9;
    v14 = ZCoordToScreenY((int)v11); /*0x567e40*/
    v15 = (int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4; /*0x567e52*/
    v16 = dword_ABD490; /*0x567e57*/
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10); /*0x567e73*/
    v18 = v13 / 256; /*0x567e82*/
    v19 = (BYTE4(v17) + (int)v17) >> 8; /*0x567e85*/
    if ( aP2 ) /*0x567e8a*/
      v16 = (int *)(4 * dword_7ED3CC[(_DWORD)aP2] + 11261072); /*0x567e93*/
    for ( result = (int)&aP3a[-1].__tail_1600D[2]; aP3a; aP3a = (MouseClass *)((char *)aP3a - 1) ) /*0x567ea3*/
    {
      v20 = v16++; /*0x567eae*/
      HIWORD(v28) = v19 + *((_WORD *)v20 + 1); /*0x567ec0*/
      LOWORD(v28) = v18 + *(_WORD *)v20; /*0x567ec5*/
      v21 = SHIWORD(v28) << 9; /*0x567ed4*/
      v22 = (__int16)v28 + v21 < 0; /*0x567ed7*/
      v23 = (__int16)v28 + v21; /*0x567ed7*/
      aP4 = (IUnknown *)v28; /*0x567ed9*/
      if ( v22 || v23 >= 0x40000 || (v24 = *(IUnknown **)(this->q04F + 4 * v23)) == 0 ) /*0x567ef5*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v28; /*0x567f0f*/
        v25 = (IUnknown *)g_CellClassArray; /*0x567f15*/
      }
      else
      {
        v25 = v24; /*0x567ef7*/
      }
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&aP4, 0); /*0x567f27*/
      if ( AdjacentPassableMask != v25->__pad_11C[4] ) /*0x567f32*/
      {
        v25->__pad_11C[4] = AdjacentPassableMask; /*0x567f34*/
        v25->__pad_134[4] = 1; /*0x567f3a*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v25); /*0x567f48*/
      }
      result = (int)&aP3a[-1].__tail_1600D[2]; /*0x567f51*/
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
    v12 = MEMORY[0x87F924]; /*0x568006*/
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
              g_Map_GlobalCellIndex = v22; /*0x568070*/
              v16 = g_CellClassArray; /*0x568076*/
            }
            if ( !v16[76] ) /*0x56807b*/
            {
              if ( v15 >= 0x40000 || (v17 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x568098*/
              {
                g_Map_GlobalCellIndex = v22; /*0x56809a*/
                v17 = g_CellClassArray; /*0x5680a0*/
              }
              v17[76] = 1; /*0x5680a7*/
              if ( v15 >= 0x40000 || (v18 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                g_Map_GlobalCellIndex = v22; /*0x5680c7*/
                v18 = g_CellClassArray; /*0x5680cd*/
              }
              v18[75] &= ~8u; /*0x5680dd*/
              if ( v15 >= 0x40000 || (v19 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                g_Map_GlobalCellIndex = v22; /*0x5680f9*/
                v19 = g_CellClassArray; /*0x5680ff*/
              }
              v19[75] &= ~0x10u; /*0x56810d*/
              v12 = MEMORY[0x87F924]; /*0x568113*/
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
          if ( v14 >= 0x40000 || (v15 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v14)) == 0 ) /*0x56823b*/
          {
            g_Map_GlobalCellIndex = v21; /*0x56823d*/
            v15 = g_CellClassArray; /*0x568243*/
          }
          v15[76] = 0; /*0x56824a*/
          if ( v14 >= 0x40000 || (v16 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v14)) == 0 ) /*0x568264*/
          {
            g_Map_GlobalCellIndex = v21; /*0x568266*/
            v16 = g_CellClassArray; /*0x56826c*/
          }
          v16[77] = 0; /*0x568273*/
          if ( v14 >= 0x40000 || (v17 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v14)) == 0 ) /*0x56828d*/
          {
            g_Map_GlobalCellIndex = v21; /*0x56828f*/
            v17 = g_CellClassArray; /*0x568295*/
          }
          v17[75] |= 0x10u; /*0x56829a*/
          if ( v14 >= 0x40000 || (v18 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v14)) == 0 ) /*0x5682b7*/
          {
            g_Map_GlobalCellIndex = v21; /*0x5682b9*/
            v18 = g_CellClassArray; /*0x5682bf*/
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


// ==== 0x00568300  LayerClass::CoordinatesLegal  this=IUnknown  sig=csp ====
bool __thiscall LayerClass::CoordinatesLegal(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = this->q03D; /*0x568304*/
  v3 = SLOWORD(aP1->field_0); /*0x56830c*/
  v4 = SHIWORD(aP1->field_0); /*0x56830f*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * this->q0F8; /*0x568337*/
}


// ==== 0x00568350  Tactical::IsCellVisible  this=Tactical  sig=csp ====
bool __thiscall Tactical::IsCellVisible(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = this->q0F4; /*0x56836f*/
  v3 = (__int16)(aP1->field_0 / 256); /*0x56837b*/
  v4 = (__int16)(aP1->field_4 / 256); /*0x56837e*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * this->q0F8; /*0x5683a5*/
}


// ==== 0x005683C0  MapClass::FillRevealBuffer  this=MapClass  sig=csp ====
void __thiscall MapClass::FillRevealBuffer(_DWORD *this, MouseClass *aP1, IUnknown *aP2)
{
  MouseClass *v3; // ebx
  _DWORD *v4; // eax
  _WORD *v5; // ebp
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  int v10; // eax
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
  int v22; // ecx
  _DWORD *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edx
  _DWORD *eax59; // eax
  int edx61; // edx
  MouseClass *v32; // [esp+10h] [ebp-8A0h]
  MouseClass *v33; // [esp+10h] [ebp-8A0h]
  MouseClass *v34; // [esp+10h] [ebp-8A0h]
  ObjectClass *v35; // [esp+14h] [ebp-89Ch]
  ObjectClass *v36; // [esp+14h] [ebp-89Ch]
  int v40; // [esp+1Ch] [ebp-894h]
  ObjectClass *v39; // [esp+20h] [ebp-890h]
  IUnknown *v42; // [esp+24h] [ebp-88Ch]
  int v43; // [esp+28h] [ebp-888h]
  _WORD *v44; // [esp+2Ch] [ebp-884h]
  _BYTE v45[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v46[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = (MouseClass *)this; /*0x5683d1*/
  if ( !aP2 ) /*0x5683d9*/
    return; /*0x5683d9*/
  v40 = this->q140; /*0x5683e9*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 136))(aP2) + 565) /*0x56840b*/
    || (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 120))(aP2) != 2 )
  {
    return; /*0x56840b*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(aP2->field_0 + 264))(aP2, 0); /*0x56841c*/
  sub_48DEE0(v4, 32, (int)v45); /*0x568429*/
  v5 = v45; /*0x56842e*/
  while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x568440*/
  {
    LOWORD(v35) = LOWORD(aP1->field_0) + *v5; /*0x56845b*/
    HIWORD(v35) = HIWORD(aP1->field_0) + v5[1]; /*0x568463*/
    v6 = (SHIWORD(v35) << 9) + (__int16)v35; /*0x56846e*/
    if ( v6 >= 0 && v6 < v40 && (v7 = *(_DWORD *)&v3->__pad_11F[29], *(_DWORD *)(v7 + 4 * v6)) ) /*0x568489*/
    {
      if ( v6 >= 0x40000 ) /*0x56849e*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v35; /*0x5684a6*/
        v8 = g_CellClassArray; /*0x5684ac*/
      }
      else
      {
        v8 = *(_DWORD **)(v7 + 4 * v6); /*0x5684a0*/
      }
      CellClass::AddContent((int)v8, aP2, aP2->__pad_8C[0]); /*0x5684bb*/
      if ( v6 >= 0x40000 || (v9 = *(_DWORD *)(this->q13C + 4 * v6)) == 0 ) /*0x5684db*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v35; /*0x5684f9*/
        House::AnnounceUpgrade((int)g_CellClassArray, (IUnknown *)0xFFFFFFFF); /*0x5684ff*/
        v3 = (MouseClass *)this; /*0x568504*/
        goto LABEL_17; /*0x568504*/
      }
      House::AnnounceUpgrade(v9, (IUnknown *)0xFFFFFFFF); /*0x5684e1*/
      v3 = (MouseClass *)this; /*0x5684e6*/
      v5 += 2; /*0x5684ea*/
    }
    else
    {
LABEL_17:
      v5 += 2; /*0x568508*/
    }
  }
  if ( (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 44))(aP2) == 6 )
  {
    v42 = (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 44))(aP2) == 6 ? aP2 : 0;
    v10 = v42->field_520; /*0x568536*/
    if ( *(_BYTE *)(v10 + 5990) )
    {
      v11 = *(_DWORD *)(v10 + 3832) - 1; /*0x568550*/
      v36 = (ObjectClass *)v11; /*0x568553*/
      if ( v11 <= 0 ) /*0x568557*/
      {
        v36 = (ObjectClass *)1; /*0x568559*/
        v11 = 1; /*0x568561*/
      }
      v12 = v45; /*0x568573*/
      memset(v46, 0, sizeof(v46)); /*0x568577*/
      while ( 1 )
      {
        v13 = *v12; /*0x568579*/
        v44 = v12; /*0x56857c*/
        if ( *v12 == 0x7FFF && v12[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v14 = v13; /*0x56859b*/
        LOWORD(v39) = LOWORD(aP1->field_0) + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        HIWORD(v39) = v15 + HIWORD(aP1->field_0); /*0x5685b1*/
        v32 = (MouseClass *)v39; /*0x5685bc*/
        v16 = v15; /*0x5685c0*/
        if ( v11 > 0 )
        {
          v17 = v15 + HIWORD(aP1->field_0); /*0x5685c9*/
          v43 = v11; /*0x5685d0*/
          v18 = LOWORD(aP1->field_0) + v13; /*0x5685d4*/
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
              if ( !v46[v19 + v20] ) /*0x568605*/
              {
                v46[v19 + v20] = 1; /*0x56861a*/
                v21 = (v17 << 9) + v18; /*0x568623*/
                if ( v21 >= 0 && v21 < v40 ) /*0x56862d*/
                {
                  v22 = this->q13C; /*0x568633*/
                  if ( *(_DWORD *)(v22 + 4 * v21) ) /*0x568639*/
                  {
                    if ( v21 >= 0x40000 || (v23 = *(_DWORD **)(v22 + 4 * v21)) == 0 ) /*0x56864f*/
                    {
                      g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x568655*/
                      v23 = g_CellClassArray; /*0x56865a*/
                    }
                    ++v23[64]; /*0x56865f*/
                  }
                }
              }
              --v18; /*0x568665*/
              --v17; /*0x568667*/
              v14 = v20 - 1; /*0x568669*/
              --v16; /*0x56866a*/
              LOWORD(v32) = v18; /*0x56866b*/
              HIWORD(v32) = v17; /*0x568670*/
              v19 -= 16; /*0x568675*/
            }
            --v43; /*0x56867d*/
          }
          while ( v43 );
          v11 = (int)v36; /*0x568687*/
          v12 = v44; /*0x56868b*/
        }
        v12 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v25 = v42->field_520; /*0x5686a2*/
        if ( *(_DWORD *)(i + v25 + 5668) != 0xFFFF || *(_DWORD *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          LOWORD(v33) = *(_WORD *)(i + v25 + 5668) + aP1->field_0; /*0x5686df*/
          HIWORD(v33) = *(_WORD *)(i + v25 + 5672) + HIWORD(aP1->field_0); /*0x5686e4*/
          v26 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < v40 ) /*0x5686f9*/
          {
            v27 = this->q13C; /*0x5686ff*/
            if ( *(_DWORD *)(v27 + 4 * v26) ) /*0x568705*/
            {
              if ( v26 >= 0x40000 ) /*0x568715*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v33; /*0x568721*/
                v28 = g_CellClassArray; /*0x568726*/
              }
              else
              {
                v28 = *(_DWORD **)(v27 + 4 * v26); /*0x568717*/
              }
              ++v28[64]; /*0x56872b*/
            }
          }
        }
        v29 = v42->field_520; /*0x568735*/
        if ( *(_DWORD *)(i + v29 + 5732) != 0xFFFF || *(_DWORD *)(i + v29 + 5736) != 0xFFFF ) /*0x56874b*/
        {
          LOWORD(v34) = *(_WORD *)(i + v29 + 5732) + aP1->field_0; /*0x568776*/
          HIWORD(v34) = *(_WORD *)(i + v29 + 5736) + HIWORD(aP1->field_0); /*0x56877b*/
          v30 = (__int16)v34 + (SHIWORD(v34) << 9); /*0x568786*/
          if ( v30 >= 0 && v30 < v40 ) /*0x568790*/
          {
            v31 = this->q13C; /*0x568796*/
            if ( *(_DWORD *)(v31 + 4 * v30) ) /*0x56879c*/
            {
              if ( v30 >= 0x40000 ) /*0x5687ac*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v34; /*0x5687b8*/
                eax59 = g_CellClassArray; /*0x5687bd*/
              }
              else
              {
                eax59 = *(_DWORD **)(v31 + 4 * v30); /*0x5687ae*/
              }
              edx61 = eax59[64]; /*0x5687c2*/
              if ( edx61 ) /*0x5687ca*/
                eax59[64] = edx61 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
}


// ==== 0x005687F0  MapClass::ApplyOverlayReveal  this=MapClass  sig=csp ====
void __thiscall MapClass::ApplyOverlayReveal(_DWORD *this, MouseClass *aP1, BuildingClass *aP2)
{
  MouseClass *v3; // ebx
  _DWORD *v4; // eax
  _WORD *v5; // ebp
  int esi7; // esi
  int v7; // eax
  _DWORD *v8; // eax
  IUnknown *v6; // esi
  ObjectClass *v10; // edx
  int health; // eax
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
  int v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  int j; // esi
  int v27; // eax
  __int16 v28; // dx
  int v29; // eax
  int ecx49; // ecx
  _DWORD *eax51; // eax
  int ecx53; // ecx
  MouseClass *v30; // [esp+10h] [ebp-8A0h]
  MouseClass *v31; // [esp+10h] [ebp-8A0h]
  ObjectClass *v32; // [esp+14h] [ebp-89Ch]
  ObjectClass *v33; // [esp+14h] [ebp-89Ch]
  int v38; // [esp+1Ch] [ebp-894h]
  int v39; // [esp+20h] [ebp-890h]
  MouseClass *v40; // [esp+24h] [ebp-88Ch]
  _BYTE *i; // [esp+28h] [ebp-888h]
  int v42; // [esp+2Ch] [ebp-884h]
  _BYTE v43[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v44[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = (MouseClass *)this; /*0x568801*/
  if ( !aP2 ) /*0x568809*/
    return; /*0x568809*/
  v38 = this->q140; /*0x568819*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 136))(aP2) + 565) /*0x56883b*/
    || (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 120))(aP2) != 2 )
  {
    return; /*0x56883b*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(*(_DWORD *)aP2->__pad_0 + 264))(aP2, 0); /*0x56884c*/
  sub_48DEE0(v4, 32, (int)v43); /*0x568859*/
  v5 = v43; /*0x56885e*/
  while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x568870*/
  {
    LOWORD(v32) = LOWORD(aP1->field_0) + *v5; /*0x56888b*/
    HIWORD(v32) = HIWORD(aP1->field_0) + v5[1]; /*0x568893*/
    esi7 = (SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( esi7 >= 0 && esi7 < v38 && (v7 = *(_DWORD *)&v3->__pad_11F[29], *(_DWORD *)(v7 + 4 * esi7)) ) /*0x5688b9*/
    {
      if ( esi7 >= 0x40000 ) /*0x5688ce*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x5688d6*/
        v8 = g_CellClassArray; /*0x5688dc*/
      }
      else
      {
        v8 = *(_DWORD **)(v7 + 4 * esi7); /*0x5688d0*/
      }
      CellClass::RemoveContent((int)v8, aP2, aP2->onBridge); /*0x5688eb*/
      if ( esi7 >= 0x40000 || (v6 = *(IUnknown **)(this->q13C + 4 * esi7)) == 0 ) /*0x56890b*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x568929*/
        House::AnnounceUpgrade((int)g_CellClassArray, (IUnknown *)0xFFFFFFFF); /*0x56892f*/
        v3 = (MouseClass *)this; /*0x568934*/
        goto LABEL_17; /*0x568934*/
      }
      House::AnnounceUpgrade((int)v6, (IUnknown *)0xFFFFFFFF); /*0x568911*/
      v3 = (MouseClass *)this; /*0x568916*/
      v5 += 2; /*0x56891a*/
    }
    else
    {
LABEL_17:
      v5 += 2; /*0x568938*/
    }
  }
  if ( (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 6 )
  {
    v10 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 6 ? (ObjectClass *)aP2 : 0;
    v33 = v10; /*0x568964*/
    health = v10[7].health; /*0x568968*/
    if ( *(_BYTE *)(health + 5990) )
    {
      v12 = *(_DWORD *)(health + 3832) - 1; /*0x568982*/
      v39 = v12; /*0x568985*/
      if ( v12 <= 0 ) /*0x568989*/
      {
        v39 = 1; /*0x56898b*/
        v12 = 1; /*0x568993*/
      }
      v13 = v43; /*0x5689a5*/
      memset(v44, 0, sizeof(v44)); /*0x5689a9*/
      for ( i = v43; ; i = v13 )
      {
        v14 = *v13; /*0x5689af*/
        if ( *v13 == 0x7FFF && v13[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v15 = v14; /*0x5689cd*/
        LOWORD(v40) = LOWORD(aP1->field_0) + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        HIWORD(v40) = v16 + HIWORD(aP1->field_0); /*0x5689e3*/
        v30 = v40; /*0x5689ee*/
        v17 = v16; /*0x5689f2*/
        if ( v12 > 0 )
        {
          v18 = v16 + HIWORD(aP1->field_0); /*0x5689fb*/
          v42 = v12; /*0x568a02*/
          v19 = LOWORD(aP1->field_0) + v14; /*0x568a06*/
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
              if ( !v44[v20 + v21] ) /*0x568a37*/
              {
                v44[v20 + v21] = 1; /*0x568a4c*/
                v22 = (v18 << 9) + v19; /*0x568a55*/
                if ( v22 >= 0 && v22 < v38 ) /*0x568a5f*/
                {
                  v23 = this->q13C; /*0x568a65*/
                  if ( *(_DWORD *)(v23 + 4 * v22) ) /*0x568a6b*/
                  {
                    if ( v22 >= 0x40000 || (v24 = *(_DWORD **)(v23 + 4 * v22)) == 0 ) /*0x568a81*/
                    {
                      g_Map_GlobalCellIndex = (IUnknown *)v30; /*0x568a87*/
                      v24 = g_CellClassArray; /*0x568a8c*/
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
            --v42; /*0x568aba*/
          }
          while ( v42 );
          v12 = v39; /*0x568ac4*/
          v13 = i; /*0x568ac8*/
        }
        v10 = v33; /*0x568acc*/
        v13 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        v27 = v10[7].health; /*0x568ae3*/
        if ( *(_DWORD *)(j + v27 + 5668) != 0xFFFF || *(_DWORD *)(j + v27 + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v28 = *(_WORD *)(j + v27 + 5672) + HIWORD(aP1->field_0); /*0x568b1c*/
          LOWORD(v31) = *(_WORD *)(j + v27 + 5668) + aP1->field_0; /*0x568b24*/
          v29 = (__int16)v31 + (v28 << 9); /*0x568b32*/
          HIWORD(v31) = v28; /*0x568b34*/
          if ( v29 >= 0 && v29 < v38 ) /*0x568b41*/
          {
            ecx49 = this->q13C; /*0x568b47*/
            if ( *(_DWORD *)(ecx49 + 4 * v29) ) /*0x568b4d*/
            {
              if ( v29 >= 0x40000 ) /*0x568b5d*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v31; /*0x568b69*/
                eax51 = g_CellClassArray; /*0x568b6e*/
              }
              else
              {
                eax51 = *(_DWORD **)(ecx49 + 4 * v29); /*0x568b5f*/
              }
              ecx53 = eax51[64]; /*0x568b73*/
              if ( ecx53 ) /*0x568b7b*/
                eax51[64] = ecx53 - 1; /*0x568b7e*/
            }
          }
          v10 = v33; /*0x568b84*/
        }
      }
    }
  }
}


// ==== 0x00568BB0  MapClass::PostProcessReveal  this=CellClass  sig=csp ====
int __thiscall MapClass_PostProcessReveal(_DWORD *this, char a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _BYTE *v5; // ecx
  int v6; // eax
  int i; // eax
  int v8; // eax
  int j; // esi
  int v10; // eax
  int k; // edx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  _DWORD *v16; // eax
  int NthOfType; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x568bba*/
  v20 = 0; /*0x568bc1*/
  if ( MEMORY[0xA8E9B8] > 0 ) /*0x568bce*/
  {
    v4 = MEMORY[0xA8E9AC]; /*0x568bd0*/
    do /*0x568bfb*/
    {
      v5 = (_BYTE *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = MEMORY[0xA8E9AC]; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < MEMORY[0xA8E9B8] ); /*0x568bfb*/
  }
  v6 = this->q0F4; /*0x568bfd*/
  this->CellClass_field_10C = 1; /*0x568c03*/
  this->unknown110 = v6; /*0x568c09*/
  this->unknown114 = v6 - 1; /*0x568c12*/
  this->unknown118 = (v6 << 11) + this->CellClass_field_13C + 4; /*0x568c27*/
  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x568c34*/
    *(_DWORD *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = this->q0F4; /*0x568c54*/
  this->CellClass_field_10C = 1; /*0x568c5a*/
  this->unknown110 = v8; /*0x568c60*/
  this->unknown114 = v8 - 1; /*0x568c69*/
  this->unknown118 = (v8 << 11) + this->CellClass_field_13C + 4; /*0x568c7e*/
  for ( j = LayerClass::CellIteratorNext(this); j; j = LayerClass::CellIteratorNext(this) ) /*0x568c8d*/
  {
    *(_DWORD *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView(j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(_DWORD *)(j + 60); /*0x568cc4*/
    *(_DWORD *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( (unsigned __int8)TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < MEMORY[0x87F914]; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          HIWORD(v21) = *(_WORD *)(j + 38); /*0x568d01*/
          LOWORD(v21) = k + this->occupationFlags; /*0x568d09*/
          v12 = (__int16)v21 + (SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_Map_GlobalCellIndex = v21; /*0x568d30*/
            v13 = &g_CellClassArray; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( (unsigned __int8)TagClass::HasCrossesVerticalLineEvent(*(_DWORD *)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < MEMORY[0x87F918]; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          LOWORD(v22) = *(_WORD *)(j + 36); /*0x568d7b*/
          HIWORD(v22) = m + this->altOccupationFlags; /*0x568d80*/
          v15 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_Map_GlobalCellIndex = v22; /*0x568daa*/
            v16 = &g_CellClassArray; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
    if ( a2 ) /*0x568dd2*/
      NthOfType = ObjectClass::UpdateTiberiumGrowth(0); /*0x568dd8*/
    else
      NthOfType = Building::GetNthOfType(j); /*0x568de1*/
    v20 += NthOfType; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
    v18 = *(_DWORD *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}


// ==== 0x00568E40  Terrain::PlaceCliffs  this=ObjectClass  sig=csp ====
void __thiscall Terrain::PlaceCliffs(_DWORD *this, int a2, int a3, IUnknown *aP3)
{
  unsigned int v5; // eax
  ObjectClass *v6; // eax
  AbstractClass *v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  ObjectClass *v12; // eax
  AbstractClass *v13; // esi
  char v14; // al
  unsigned int v15; // eax
  _DWORD *v16; // eax
  ObjectClass *v17; // ecx
  unsigned int v18; // eax
  _DWORD *v19; // eax
  ObjectClass *v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // eax
  int v23; // edi
  CCINIClass *v24; // eax
  int v25; // esi
  ObjectClass *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  _DWORD *v29; // eax
  ObjectClass *v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // eax
  ObjectClass *v33; // ecx
  unsigned int v34; // eax
  _DWORD *v35; // eax
  int v36; // edi
  CCINIClass *v37; // eax
  int v38; // esi
  ObjectClass *v39; // eax
  char v40; // al
  unsigned int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // esi
  IUnknown *v45; // ebp
  int v46; // ecx
  IUnknown *v47; // edx
  IUnknown *v48; // edi
  int v49; // eax
  #374 *v50; // eax
  #374 *v51; // eax
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // eax
  unsigned int v55; // edx
  _DWORD *v56; // edx
  int v57; // eax
  IUnknown *v58; // edx
  int v59; // ecx
  IUnknown *v60; // esi
  IUnknown *v61; // edi
  IUnknown *v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  ObjectClass *v64; // [esp+14h] [ebp-60h]
  ObjectClass *v65; // [esp+14h] [ebp-60h]
  IUnknown *i; // [esp+18h] [ebp-5Ch]
  ObjectClass *v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  IUnknown *v69; // [esp+24h] [ebp-50h]
  IUnknown *v70; // [esp+24h] [ebp-50h]
  IUnknown *v71; // [esp+30h] [ebp-44h] BYREF
  IUnknown *v72; // [esp+34h] [ebp-40h] BYREF
  IUnknown *v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  IUnknown *v75; // [esp+40h] [ebp-34h] BYREF
  IUnknown *v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  CCINIClass *v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  void **v81; // [esp+5Ch] [ebp-18h] BYREF
  void *Block; // [esp+60h] [ebp-14h]
  ObjectClass *v83; // [esp+64h] [ebp-10h]
  char v84; // [esp+69h] [ebp-Bh]
  ObjectClass *v85; // [esp+6Ch] [ebp-8h]
  int v86; // [esp+70h] [ebp-4h]
  int v87; // [esp+78h] [ebp+4h]
  IUnknown *v88; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = g_MapSeedState; /*0x568e4b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x568e8a*/
    v64 = (ObjectClass *)g_CellClassArray; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor(&v81, 0, 0); /*0x568ea5*/
  v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x568eae*/
  v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x568eb4*/
  v81 = &vt_DynamicVectorClass_Cell; /*0x568ebd*/
  v86 = 10; /*0x568ec5*/
  v85 = 0; /*0x568ed4*/
  for ( i = (IUnknown *)1; (int)i < 30; i = (IUnknown *)((char *)i + 1) ) /*0x568edc*/
  {
    v65 = (ObjectClass *)v64->objectTypeFlags; /*0x568ef3*/
    LOWORD(v67) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * (a3 & 7)) + (_WORD)v65; /*0x568f06*/
    HIWORD(v67) = *((_WORD *)&MEMORY[0x89F68A] + 2 * (a3 & 7)) + HIWORD(v65); /*0x568f0e*/
    v9 = SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (__int16)v67 + v9 < 0; /*0x568f1d*/
    v11 = (__int16)v67 + v9; /*0x568f1d*/
    *(_DWORD *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v11)) == 0 ) /*0x568f37*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v67; /*0x568f3f*/
      v64 = (ObjectClass *)g_CellClassArray; /*0x568f45*/
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = (AbstractClass *)((char *)v64->attachedBomb - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + 1); /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != (AbstractClass *)dword_ABC1E8 || BYTE2(v64[1].health) != 4 ) /*0x568f79*/
      {
        if ( v13 != *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57440] || BYTE2(v64[1].health) != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 /*0x568fbf*/
            && v13 != (AbstractClass *)&v7->__pad_0[3]
            && v13 != (AbstractClass *)&v7->__pad_0[4]
            && v13 != (AbstractClass *)&v7->__pad_0[1]
            && v13 != (AbstractClass *)&v7->__pad_0[2]
            || BYTE2(v64[1].health) != 4 )
          {
            continue; /*0x568fbf*/
          }
          Cell::SetTileType(v77, (int)&v7->__pad_0[*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] - 1], -1, -1, 0); /*0x568fdd*/
          v14 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x568fe9*/
          v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != (AbstractClass *)(g_TerrainSoundTable2 + 4) ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          v15 = v77[0] + (v77[1] << 9); /*0x569018*/
          if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v15)) == 0 ) /*0x56902e*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569030*/
            v16 = g_CellClassArray; /*0x569036*/
          }
          *((_BYTE *)v16 + 283) += 4; /*0x569049*/
          v17 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v72, &MEMORY[0x89F688])->field_0; /*0x56905d*/
          v71 = (IUnknown *)v17; /*0x56905f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56906e*/
          if ( v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v18)) == 0 ) /*0x569084*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v17; /*0x569086*/
            v19 = g_CellClassArray; /*0x56908c*/
          }
          *((_BYTE *)v19 + 283) += 4; /*0x56909f*/
          v20 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v73, (IUnknown *)&MEMORY[0x89F690].field_8)->field_0; /*0x5690b3*/
          v71 = (IUnknown *)v20; /*0x5690b5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5690c4*/
          if ( v21 >= 0x40000 || (v22 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v21)) == 0 ) /*0x5690da*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v20; /*0x5690dc*/
            v22 = g_CellClassArray; /*0x5690e2*/
          }
          v23 = 0; /*0x5690f0*/
          *((_BYTE *)v22 + 283) += 4; /*0x5690f2*/
          v24 = (CCINIClass *)v83; /*0x5690f8*/
LABEL_33:
          v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( (int)v85 < (int)v24 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !v84 && v24 || v86 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v24->__pad_0[v86], 0) ) /*0x569141*/
            {
LABEL_39:
              v26 = v85; /*0x569150*/
              v85 = (ObjectClass *)((char *)v85 + 1); /*0x569153*/
              *((_DWORD *)Block + (_DWORD)v26) = v68; /*0x56915b*/
            }
            v24 = (CCINIClass *)v83; /*0x56915e*/
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
        v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x5693fc*/
        v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569401*/
LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x5693ca*/
LABEL_85:
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == (AbstractClass *)dword_ABC1D0 && BYTE2(v64[1].health) == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &MEMORY[0x89F688])->field_0; /*0x56942c*/
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[59240] && BYTE2(v64[1].health) == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &MEMORY[0x89F688])->field_0; /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != (AbstractClass *)v8 /*0x5691e7*/
      && v13 != (AbstractClass *)(v8 + 3)
      && v13 != (AbstractClass *)(v8 + 4)
      && v13 != (AbstractClass *)(v8 + 2)
      && v13 != (AbstractClass *)(v8 + 1)
      || BYTE2(v64[1].health) != 2 )
    {
      continue; /*0x5691e7*/
    }
    Cell::SetTileType(v77, *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + v8 - 1, -1, -1, 0); /*0x569200*/
    v27 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x56920c*/
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != (AbstractClass *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] + 4) ) /*0x569226*/
    {
      v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
    if ( v28 >= 0x40000 || (v29 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v28)) == 0 ) /*0x569251*/
    {
      g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569253*/
      v29 = g_CellClassArray; /*0x569259*/
    }
    *((_BYTE *)v29 + 283) += 4; /*0x56926c*/
    v30 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v74, &MEMORY[0x89F690])->field_0; /*0x569280*/
    v71 = (IUnknown *)v30; /*0x569282*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569291*/
    if ( v31 >= 0x40000 || (v32 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v30; /*0x5692a9*/
      v32 = g_CellClassArray; /*0x5692af*/
    }
    *((_BYTE *)v32 + 283) += 4; /*0x5692c2*/
    v33 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x5692d6*/
    v71 = (IUnknown *)v33; /*0x5692d8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5692e7*/
    if ( v34 >= 0x40000 || (v35 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v33; /*0x5692ff*/
      v35 = g_CellClassArray; /*0x569305*/
    }
    v36 = 0; /*0x569313*/
    *((_BYTE *)v35 + 283) += 4; /*0x569315*/
    v37 = (CCINIClass *)v83; /*0x56931b*/
    do /*0x56938f*/
    {
      v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( (int)v85 < (int)v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (v84 || !v37) && v86 > 0 ) /*0x569355*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v37->__pad_0[v86], 0) ) /*0x569364*/
          {
LABEL_75:
            v39 = v85; /*0x56936b*/
            v85 = (ObjectClass *)((char *)v85 + 1); /*0x569376*/
            *((_DWORD *)Block + (_DWORD)v39) = v69; /*0x56937e*/
          }
          v37 = (CCINIClass *)v83; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
LABEL_43:
    v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x56916e*/
LABEL_44:
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x569174*/
  }
  if ( i == (IUnknown *)30 ) /*0x569473*/
  {
    v81 = &vt_VectorClass_Cell; /*0x569479*/
    Buffer::Cleanup((int)&v81); /*0x569481*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x5694a6*/
    if ( v42 < 0x40000 && (v43 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x5694c2*/
      v44 = g_CellClassArray; /*0x5694c8*/
    }
    v45 = aP3; /*0x5694cd*/
    if ( aP3 ) /*0x5694d6*/
    {
      v87 = *(_DWORD *)(a2 + 36); /*0x5694e7*/
      v78 = (CCINIClass *)(((__int16)*(_DWORD *)(a2 + 36) << 8) + 128); /*0x5694f0*/
      v46 = g_MapRenderState * *(char *)(a2 + 283); /*0x5694fb*/
      v79 = (SHIWORD(v87) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &v78, (IUnknown *)&v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      v45->field_0 = (int)v75; /*0x56952f*/
      v45->field_4 = (int)v47; /*0x569532*/
    }
    if ( (int)i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        v49 = v44[14] - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (*((_BYTE *)v44 + 282) & 1) != 0) /*0x569570*/
          && (v49 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] || *((_BYTE *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569580*/
            if ( v50 ) /*0x56958a*/
            {
              aP3 = (IUnknown *)v44[9]; /*0x569596*/
              Object::SpawnAtCell(v50, MEMORY[0xA83D84][1].headNode[1], (__int16 *)&aP3, -1); /*0x5695a9*/
            }
          }
          else
          {
            v51 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5695ab*/
            if ( v51 ) /*0x5695b5*/
            {
              v71 = (IUnknown *)v44[9]; /*0x5695be*/
              Object::SpawnAtCell(v51, MEMORY[0xA83D84][1].headNode[2], (__int16 *)&v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = (IUnknown *)v44[9]; /*0x5695dd*/
        LOWORD(v88) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * (a3 & 7)) + (_WORD)v70; /*0x5695f0*/
        HIWORD(v88) = *((_WORD *)&MEMORY[0x89F68A] + 2 * (a3 & 7)) + HIWORD(v70); /*0x5695f8*/
        v52 = SHIWORD(v88) << 9; /*0x569604*/
        v10 = (__int16)v88 + v52 < 0; /*0x569607*/
        v53 = (__int16)v88 + v52; /*0x569607*/
        *(_DWORD *)v77 = v88; /*0x569609*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v53)) == 0 ) /*0x569621*/
        {
          g_Map_GlobalCellIndex = v88; /*0x569627*/
          v44 = g_CellClassArray; /*0x56962d*/
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        v48 = (IUnknown *)((char *)v48 - 1); /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569652*/
      if ( v55 >= 0x40000 || (v56 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v55)) == 0 ) /*0x569669*/
      {
        g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x56966b*/
        v56 = g_CellClassArray; /*0x569671*/
      }
      v80 = g_MapRenderState * *((char *)v56 + 283); /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (CCINIClass *)((v77[0] << 8) + 128); /*0x5696a5*/
      Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &v78, (IUnknown *)&v75); /*0x5696b1*/
      v57 = v45->field_0; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      v59 = v45->field_4; /*0x5696bd*/
      v60 = (IUnknown *)v45->field_0; /*0x5696c2*/
      if ( v45->field_0 >= (int)v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = (IUnknown *)v45->field_4; /*0x5696cb*/
      v45->field_0 = (int)&v60[-1].__pad_579C[67668]; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= (int)v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45->field_4 = (int)&v61[-1].__pad_579C[67668]; /*0x5696e2*/
      v45->field_8 = abs32(v57 - (_DWORD)v58) + 128; /*0x5696ec*/
      v45->field_C = abs32(v59 - (_DWORD)v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(this); /*0x56970c*/
    if ( (int)v85 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v81); /*0x569722*/
    v81 = &vt_VectorClass_Cell; /*0x56972b*/
    if ( Block ) /*0x569735*/
    {
      if ( v84 ) /*0x56973d*/
        __3_YAXPAX_Z(Block); /*0x569740*/
    }
  }
}


// ==== 0x00569760  ObjectClass::DestroyCliffMap  this=ObjectClass  sig=csp ====
void __thiscall DestroyCliffMap(int *this, int a2, int a3, IUnknown *aP3)
{
  unsigned int v5; // eax
  ObjectClass *v6; // eax
  AbstractClass *v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  ObjectClass *v12; // eax
  AbstractClass *v13; // esi
  char v14; // al
  unsigned int v15; // eax
  _DWORD *v16; // eax
  ObjectClass *v17; // ecx
  unsigned int v18; // eax
  _DWORD *v19; // eax
  ObjectClass *v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // eax
  int v23; // edi
  CCINIClass *v24; // eax
  int v25; // esi
  ObjectClass *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  _DWORD *v29; // eax
  ObjectClass *v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // eax
  ObjectClass *v33; // ecx
  unsigned int v34; // eax
  _DWORD *v35; // eax
  int v36; // edi
  CCINIClass *v37; // eax
  int v38; // esi
  ObjectClass *v39; // eax
  char v40; // al
  unsigned int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // esi
  IUnknown *v45; // ebp
  int v46; // ecx
  IUnknown *v47; // edx
  IUnknown *v48; // edi
  int v49; // eax
  #374 *v50; // eax
  #374 *v51; // eax
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // eax
  unsigned int v55; // edx
  _DWORD *v56; // edx
  int v57; // eax
  IUnknown *v58; // edx
  int v59; // ecx
  IUnknown *v60; // esi
  IUnknown *v61; // edi
  IUnknown *v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  ObjectClass *v64; // [esp+14h] [ebp-60h]
  ObjectClass *v65; // [esp+14h] [ebp-60h]
  IUnknown *i; // [esp+18h] [ebp-5Ch]
  ObjectClass *v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  IUnknown *v69; // [esp+24h] [ebp-50h]
  IUnknown *v70; // [esp+24h] [ebp-50h]
  IUnknown *v71; // [esp+30h] [ebp-44h] BYREF
  IUnknown *v72; // [esp+34h] [ebp-40h] BYREF
  IUnknown *v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  IUnknown *v75; // [esp+40h] [ebp-34h] BYREF
  IUnknown *v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  CCINIClass *v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  void **v81; // [esp+5Ch] [ebp-18h] BYREF
  void *Block; // [esp+60h] [ebp-14h]
  ObjectClass *v83; // [esp+64h] [ebp-10h]
  char v84; // [esp+69h] [ebp-Bh]
  ObjectClass *v85; // [esp+6Ch] [ebp-8h]
  int v86; // [esp+70h] [ebp-4h]
  int v87; // [esp+78h] [ebp+4h]
  IUnknown *v88; // [esp+78h] [ebp+4h]

  *(_DWORD *)v77 = g_MapSeedState; /*0x56976b*/
  v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x56978c*/
  if ( v5 < 0x40000 && (v6 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v5)) != 0 ) /*0x5697a2*/
  {
    v64 = v6; /*0x5697a4*/
  }
  else
  {
    g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x5697aa*/
    v64 = (ObjectClass *)g_CellClassArray; /*0x5697b0*/
  }
  v63 = 0; /*0x5697c0*/
  VectorClass::CellConstructor(&v81, 0, 0); /*0x5697c5*/
  v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x5697ce*/
  v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x5697d4*/
  v81 = &vt_DynamicVectorClass_Cell; /*0x5697dd*/
  v86 = 10; /*0x5697e5*/
  v85 = 0; /*0x5697f4*/
  for ( i = (IUnknown *)1; (int)i < 30; i = (IUnknown *)((char *)i + 1) ) /*0x5697fc*/
  {
    v65 = (ObjectClass *)v64->objectTypeFlags; /*0x569813*/
    LOWORD(v67) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * (a3 & 7)) + (_WORD)v65; /*0x569826*/
    HIWORD(v67) = *((_WORD *)&MEMORY[0x89F68A] + 2 * (a3 & 7)) + HIWORD(v65); /*0x56982e*/
    v9 = SHIWORD(v67) << 9; /*0x56983a*/
    v10 = (__int16)v67 + v9 < 0; /*0x56983d*/
    v11 = (__int16)v67 + v9; /*0x56983d*/
    *(_DWORD *)v77 = v67; /*0x56983f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v11)) == 0 ) /*0x569857*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v67; /*0x56985f*/
      v64 = (ObjectClass *)g_CellClassArray; /*0x569865*/
    }
    else
    {
      v64 = v12; /*0x569859*/
    }
    v13 = (AbstractClass *)((char *)v64->attachedBomb - g_TerrainBridgeIndex + 1); /*0x569880*/
    if ( a3 == 2 ) /*0x569884*/
    {
      if ( v13 != (AbstractClass *)dword_ABC1E8 || BYTE2(v64[1].health) != 4 ) /*0x569899*/
      {
        if ( v13 != *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57440] || BYTE2(v64[1].health) != 4 ) /*0x5698ae*/
        {
          if ( v13 != v7 /*0x5698df*/
            && v13 != (AbstractClass *)&v7->__pad_0[3]
            && v13 != (AbstractClass *)&v7->__pad_0[4]
            && v13 != (AbstractClass *)&v7->__pad_0[1]
            && v13 != (AbstractClass *)&v7->__pad_0[2]
            || BYTE2(v64[1].health) != 4 )
          {
            continue; /*0x5698df*/
          }
          Cell::SetTileType(v77, (int)&v7->__pad_0[g_TerrainBridgeIndex - 1], -1, -1, 0); /*0x5698fd*/
          v14 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x569909*/
          v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x56990e*/
          v63 |= v14; /*0x56991d*/
          if ( v13 != (AbstractClass *)(g_TerrainSoundTable2 + 4) ) /*0x569923*/
            goto LABEL_44; /*0x569923*/
          v15 = v77[0] + (v77[1] << 9); /*0x569938*/
          if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v15)) == 0 ) /*0x56994e*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569950*/
            v16 = g_CellClassArray; /*0x569956*/
          }
          *((_BYTE *)v16 + 283) += 4; /*0x569969*/
          v17 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v72, &MEMORY[0x89F688])->field_0; /*0x56997d*/
          v71 = (IUnknown *)v17; /*0x56997f*/
          v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56998e*/
          if ( v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v18)) == 0 ) /*0x5699a4*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v17; /*0x5699a6*/
            v19 = g_CellClassArray; /*0x5699ac*/
          }
          *((_BYTE *)v19 + 283) += 4; /*0x5699bf*/
          v20 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v73, (IUnknown *)&MEMORY[0x89F690].field_8)->field_0; /*0x5699d3*/
          v71 = (IUnknown *)v20; /*0x5699d5*/
          v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5699e4*/
          if ( v21 >= 0x40000 || (v22 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v21)) == 0 ) /*0x5699fa*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v20; /*0x5699fc*/
            v22 = g_CellClassArray; /*0x569a02*/
          }
          v23 = 0; /*0x569a10*/
          *((_BYTE *)v22 + 283) += 4; /*0x569a12*/
          v24 = (CCINIClass *)v83; /*0x569a18*/
LABEL_33:
          v25 = -2; /*0x569a1c*/
          while ( 1 ) /*0x569a2e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x569a2e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569a33*/
            if ( (int)v85 < (int)v24 ) /*0x569a3e*/
              goto LABEL_39; /*0x569a3e*/
            if ( !v84 && v24 || v86 <= 0 ) /*0x569a52*/
              goto LABEL_41; /*0x569a52*/
            if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v24->__pad_0[v86], 0) ) /*0x569a61*/
            {
LABEL_39:
              v26 = v85; /*0x569a70*/
              v85 = (ObjectClass *)((char *)v85 + 1); /*0x569a73*/
              *((_DWORD *)Block + (_DWORD)v26) = v68; /*0x569a7b*/
            }
            v24 = (CCINIClass *)v83; /*0x569a7e*/
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
        v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x569d1c*/
        v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569d21*/
LABEL_86:
        v63 |= v40; /*0x569d88*/
        break; /*0x569d88*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x569ccc*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x569cea*/
LABEL_85:
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569d80*/
      goto LABEL_86; /*0x569d83*/
    }
    if ( a3 != 4 ) /*0x569ab4*/
      continue; /*0x569ab4*/
    if ( v13 == (AbstractClass *)dword_ABC1D0 && BYTE2(v64[1].health) == 2 ) /*0x569ac5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d2e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &MEMORY[0x89F688])->field_0; /*0x569d4c*/
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569d51*/
      goto LABEL_86; /*0x569d51*/
    }
    if ( v13 == *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[59240] && BYTE2(v64[1].health) == 2 ) /*0x569ada*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x569d5e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &MEMORY[0x89F688])->field_0; /*0x569d7c*/
      goto LABEL_85; /*0x569d7c*/
    }
    if ( v13 != (AbstractClass *)v8 /*0x569b07*/
      && v13 != (AbstractClass *)(v8 + 3)
      && v13 != (AbstractClass *)(v8 + 4)
      && v13 != (AbstractClass *)(v8 + 2)
      && v13 != (AbstractClass *)(v8 + 1)
      || BYTE2(v64[1].health) != 2 )
    {
      continue; /*0x569b07*/
    }
    Cell::SetTileType(v77, g_TerrainBridgeIndex + v8 - 1, -1, -1, 0); /*0x569b20*/
    v27 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x569b2c*/
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x569b35*/
    v63 |= v27; /*0x569b3d*/
    if ( v13 != (AbstractClass *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] + 4) ) /*0x569b46*/
    {
      v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x569cb6*/
      continue; /*0x569cbc*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x569b5b*/
    if ( v28 >= 0x40000 || (v29 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v28)) == 0 ) /*0x569b71*/
    {
      g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569b73*/
      v29 = g_CellClassArray; /*0x569b79*/
    }
    *((_BYTE *)v29 + 283) += 4; /*0x569b8c*/
    v30 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v74, &MEMORY[0x89F690])->field_0; /*0x569ba0*/
    v71 = (IUnknown *)v30; /*0x569ba2*/
    v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569bb1*/
    if ( v31 >= 0x40000 || (v32 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v31)) == 0 ) /*0x569bc7*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v30; /*0x569bc9*/
      v32 = g_CellClassArray; /*0x569bcf*/
    }
    *((_BYTE *)v32 + 283) += 4; /*0x569be2*/
    v33 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x569bf6*/
    v71 = (IUnknown *)v33; /*0x569bf8*/
    v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x569c07*/
    if ( v34 >= 0x40000 || (v35 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v34)) == 0 ) /*0x569c1d*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v33; /*0x569c1f*/
      v35 = g_CellClassArray; /*0x569c25*/
    }
    v36 = 0; /*0x569c33*/
    *((_BYTE *)v35 + 283) += 4; /*0x569c35*/
    v37 = (CCINIClass *)v83; /*0x569c3b*/
    do /*0x569caf*/
    {
      v38 = -2; /*0x569c3f*/
      do /*0x569ca9*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569c51*/
        HIWORD(v69) = v36 + v77[1]; /*0x569c56*/
        if ( (int)v85 < (int)v37 ) /*0x569c61*/
          goto LABEL_75; /*0x569c61*/
        if ( (v84 || !v37) && v86 > 0 ) /*0x569c75*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v37->__pad_0[v86], 0) ) /*0x569c84*/
          {
LABEL_75:
            v39 = v85; /*0x569c8b*/
            v85 = (ObjectClass *)((char *)v85 + 1); /*0x569c96*/
            *((_DWORD *)Block + (_DWORD)v39) = v69; /*0x569c9e*/
          }
          v37 = (CCINIClass *)v83; /*0x569ca1*/
        }
        ++v38; /*0x569ca5*/
      }
      while ( v38 < 3 ); /*0x569ca9*/
      ++v36; /*0x569cab*/
    }
    while ( v36 < 2 ); /*0x569caf*/
LABEL_43:
    v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x569a8e*/
LABEL_44:
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x569a94*/
  }
  if ( i == (IUnknown *)30 ) /*0x569d93*/
  {
    v81 = &vt_VectorClass_Cell; /*0x569d99*/
    Buffer::Cleanup((int)&v81); /*0x569da1*/
  }
  else
  {
    v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x569dc6*/
    if ( v42 < 0x40000 && (v43 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v42)) != 0 ) /*0x569ddc*/
    {
      v44 = v43; /*0x569dde*/
    }
    else
    {
      g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x569de2*/
      v44 = g_CellClassArray; /*0x569de8*/
    }
    v45 = aP3; /*0x569ded*/
    if ( aP3 ) /*0x569df6*/
    {
      v87 = *(_DWORD *)(a2 + 36); /*0x569e07*/
      v78 = (CCINIClass *)(((__int16)*(_DWORD *)(a2 + 36) << 8) + 128); /*0x569e10*/
      v46 = g_MapRenderState * *(char *)(a2 + 283); /*0x569e1b*/
      v79 = (SHIWORD(v87) << 8) + 128; /*0x569e2e*/
      v80 = v46; /*0x569e36*/
      Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &v78, (IUnknown *)&v75); /*0x569e42*/
      v47 = v76; /*0x569e4b*/
      v45->field_0 = (int)v75; /*0x569e4f*/
      v45->field_4 = (int)v47; /*0x569e52*/
    }
    if ( (int)i > 0 ) /*0x569e57*/
    {
      v48 = i; /*0x569e5d*/
      do /*0x569f59*/
      {
        v49 = v44[14] - g_TerrainBridgeIndex + 1; /*0x569e74*/
        if ( (v49 != g_TerrainSoundTable2 || (*((_BYTE *)v44 + 282) & 1) != 0) /*0x569e90*/
          && (v49 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] || *((_BYTE *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x569e9e*/
          {
            v50 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569ea0*/
            if ( v50 ) /*0x569eaa*/
            {
              aP3 = (IUnknown *)v44[9]; /*0x569eb6*/
              Object::SpawnAtCell(v50, *(_DWORD *)&MEMORY[0xA83D84][10].__pad_41[3], (__int16 *)&aP3, -1); /*0x569ecc*/
            }
          }
          else
          {
            v51 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569ece*/
            if ( v51 ) /*0x569ed8*/
            {
              v71 = (IUnknown *)v44[9]; /*0x569ee1*/
              Object::SpawnAtCell(v51, *(_DWORD *)MEMORY[0xA83D84][10].__pad_48, (__int16 *)&v71, -1); /*0x569ef7*/
            }
          }
        }
        v70 = (IUnknown *)v44[9]; /*0x569f03*/
        LOWORD(v88) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * (a3 & 7)) + (_WORD)v70; /*0x569f16*/
        HIWORD(v88) = *((_WORD *)&MEMORY[0x89F68A] + 2 * (a3 & 7)) + HIWORD(v70); /*0x569f1e*/
        v52 = SHIWORD(v88) << 9; /*0x569f2a*/
        v10 = (__int16)v88 + v52 < 0; /*0x569f2d*/
        v53 = (__int16)v88 + v52; /*0x569f2d*/
        *(_DWORD *)v77 = v88; /*0x569f2f*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v53)) == 0 ) /*0x569f47*/
        {
          g_Map_GlobalCellIndex = v88; /*0x569f4d*/
          v44 = g_CellClassArray; /*0x569f53*/
        }
        else
        {
          v44 = v54; /*0x569f49*/
        }
        v48 = (IUnknown *)((char *)v48 - 1); /*0x569f58*/
      }
      while ( v48 ); /*0x569f59*/
    }
    if ( v45 ) /*0x569f61*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569f78*/
      if ( v55 >= 0x40000 || (v56 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v55)) == 0 ) /*0x569f8f*/
      {
        g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569f91*/
        v56 = g_CellClassArray; /*0x569f97*/
      }
      v80 = g_MapRenderState * *((char *)v56 + 283); /*0x569fb5*/
      v79 = (v77[1] << 8) + 128; /*0x569fbf*/
      v78 = (CCINIClass *)((v77[0] << 8) + 128); /*0x569fcb*/
      Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &v78, (IUnknown *)&v75); /*0x569fd7*/
      v57 = v45->field_0; /*0x569fdc*/
      v58 = v75; /*0x569fdf*/
      v59 = v45->field_4; /*0x569fe3*/
      v60 = (IUnknown *)v45->field_0; /*0x569fe8*/
      if ( v45->field_0 >= (int)v75 ) /*0x569fea*/
        v60 = v75; /*0x569fec*/
      v61 = (IUnknown *)v45->field_4; /*0x569ff1*/
      v45->field_0 = (int)&v60[-1].__pad_579C[67668]; /*0x569ff3*/
      v62 = v76; /*0x569ff6*/
      if ( v59 >= (int)v76 ) /*0x569ffc*/
        v61 = v76; /*0x569ffe*/
      v45->field_4 = (int)&v61[-1].__pad_579C[67668]; /*0x56a008*/
      v45->field_8 = abs32(v57 - (_DWORD)v58) + 128; /*0x56a012*/
      v45->field_C = abs32(v59 - (_DWORD)v62) + 128; /*0x56a023*/
    }
    if ( v63 ) /*0x56a02c*/
      Terrain::ConnectivityGraph(this); /*0x56a032*/
    if ( v85 ) /*0x56a03d*/
      LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v81); /*0x56a048*/
    v81 = &vt_VectorClass_Cell; /*0x56a051*/
    if ( Block ) /*0x56a05b*/
    {
      if ( v84 ) /*0x56a063*/
        __3_YAXPAX_Z(Block); /*0x56a066*/
    }
  }
}


// ==== 0x0056A080  ObjectClass::PlaceTerrainCliffsRegion  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall PlaceTerrainCliffsRegion(ObjectClass **this)
{
  ObjectClass *result; // eax
  ObjectClass *v3; // ecx
  AbstractClass *v4; // edx
  AbstractClass *v5; // edi
  ObjectClass *v6; // ebx
  ObjectClass *v7; // ecx
  ObjectClass *v8; // ecx
  int v9; // ebp
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  AbstractClass *v13; // ebx
  __int16 v14; // ax
  __int16 v15; // di
  unsigned int v16; // ecx
  _DWORD *v17; // ecx
  unsigned int v18; // ecx
  _DWORD *v19; // ecx
  unsigned int v20; // eax
  _DWORD *v21; // eax
  ObjectClass *v22; // ecx
  unsigned int v23; // eax
  _DWORD *v24; // eax
  ObjectClass *v25; // ecx
  unsigned int v26; // eax
  _DWORD *v27; // eax
  _BYTE *v28; // eax
  int v29; // eax
  ObjectClass *v30; // ecx
  ObjectClass *v31; // [esp+4h] [ebp-34h] BYREF
  ObjectClass *v32; // [esp+8h] [ebp-30h]
  ObjectClass *v33; // [esp+Ch] [ebp-2Ch]
  ObjectClass *v34; // [esp+10h] [ebp-28h]
  IUnknown *v35; // [esp+14h] [ebp-24h]
  IUnknown *v36; // [esp+18h] [ebp-20h]
  IUnknown *v37; // [esp+1Ch] [ebp-1Ch]
  IUnknown *v38; // [esp+20h] [ebp-18h] BYREF
  IUnknown *v39; // [esp+24h] [ebp-14h]
  int v40; // [esp+28h] [ebp-10h] BYREF
  int v41; // [esp+2Ch] [ebp-Ch] BYREF
  int v42; // [esp+30h] [ebp-8h] BYREF
  int v43; // [esp+34h] [ebp-4h] BYREF

  result = this->q04A; /*0x56a086*/
  v3 = (ObjectClass *)((char *)this->q04C + (_DWORD)result); /*0x56a092*/
  v33 = result; /*0x56a094*/
  if ( (int)result < (int)v3 ) /*0x56a09a*/
  {
    v4 = (AbstractClass *)g_TerrainSoundTable2; /*0x56a0a0*/
    v5 = *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x56a0a9*/
    do /*0x56a4ab*/
    {
      v6 = this->q049; /*0x56a0af*/
      v7 = (ObjectClass *)((char *)this->q12C + (_DWORD)v6); /*0x56a0bb*/
      v32 = v6; /*0x56a0bd*/
      if ( (int)v6 < (int)v7 ) /*0x56a0c3*/
      {
        v8 = (ObjectClass *)((__int16)result << 9); /*0x56a0cc*/
        v34 = v8; /*0x56a0cf*/
        while ( 1 ) /*0x56a0dd*/
        {
          v9 = (int)this->q04F; /*0x56a0dd*/
          HIWORD(v31) = (_WORD)result; /*0x56a0e3*/
          LOWORD(v31) = (_WORD)v6; /*0x56a0ed*/
          if ( *(_DWORD *)(v9 + 4 * ((_DWORD)v8 + (__int16)v6)) ) /*0x56a0f2*/
          {
            v10 = (unsigned int)&v34->__pad_0[(__int16)v6]; /*0x56a101*/
            if ( v10 < 0x40000 && (v11 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v10)) != 0 ) /*0x56a119*/
            {
              v12 = v11; /*0x56a11b*/
            }
            else
            {
              v12 = g_CellClassArray; /*0x56a123*/
              g_Map_GlobalCellIndex = (IUnknown *)v31; /*0x56a128*/
            }
            v13 = (AbstractClass *)(v12[14] - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + 1); /*0x56a13c*/
            if ( (v13 == (AbstractClass *)dword_ABC2B4 || v13 == *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[58200]) /*0x56a150*/
              && *((_BYTE *)v12 + 282) == 8 )
            {
              Terrain::PlaceCliffs(this, (int)v12, 2, 0); /*0x56a159*/
              v4 = (AbstractClass *)g_TerrainSoundTable2; /*0x56a15e*/
              v5 = *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x56a164*/
            }
            if ( (v13 == v4 /*0x56a195*/
               || v13 == (AbstractClass *)&v4->__pad_0[3]
               || v13 == (AbstractClass *)&v4->__pad_0[4]
               || v13 == (AbstractClass *)&v4->__pad_0[1]
               || v13 == (AbstractClass *)&v4->__pad_0[2])
              && *((_BYTE *)v12 + 282) == 5 )
            {
              if ( v13 == (AbstractClass *)&v4->__pad_0[4] ) /*0x56a1a0*/
              {
                Cell::SetTileType( /*0x56a1bd*/
                  (__int16 *)&v31,
                  (int)&v4->__pad_0[*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] - 1],
                  -1,
                  -1,
                  0);
                v14 = HIWORD(v31) + *(_WORD *)&MEMORY[0x89F690].__pad_10[2]; /*0x56a1d5*/
                LOWORD(v35) = *(_WORD *)MEMORY[0x89F690].__pad_10 + (_WORD)v31; /*0x56a1da*/
                HIWORD(v35) = HIWORD(v31) + *(_WORD *)&MEMORY[0x89F690].__pad_10[2]; /*0x56a1e8*/
                v15 = *(_WORD *)MEMORY[0x89F690].__pad_10 + (_WORD)v31; /*0x56a1ed*/
                v16 = (__int16)(*(_WORD *)MEMORY[0x89F690].__pad_10 + (_WORD)v31) /*0x56a1f1*/
                    + ((__int16)(HIWORD(v31) + *(_WORD *)&MEMORY[0x89F690].__pad_10[2]) << 9);
                if ( v16 >= 0x40000 || (v17 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v16)) == 0 ) /*0x56a208*/
                {
                  g_Map_GlobalCellIndex = v35; /*0x56a20a*/
                  v17 = g_CellClassArray; /*0x56a210*/
                }
                *((_BYTE *)v17 + 283) += 4; /*0x56a21e*/
                LOWORD(v36) = v15 + LOWORD(MEMORY[0x89F688].field_0); /*0x56a237*/
                HIWORD(v36) = MEMORY[0x89F68A] + v14; /*0x56a23f*/
                v18 = (__int16)(v15 + LOWORD(MEMORY[0x89F688].field_0)) + ((__int16)(MEMORY[0x89F68A] + v14) << 9); /*0x56a24a*/
                if ( v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v18)) == 0 ) /*0x56a261*/
                {
                  g_Map_GlobalCellIndex = v36; /*0x56a267*/
                  v19 = g_CellClassArray; /*0x56a26d*/
                }
                *((_BYTE *)v19 + 283) += 4; /*0x56a27b*/
                HIWORD(v37) = HIWORD(MEMORY[0x89F690].field_8) + v14; /*0x56a291*/
                LOWORD(v37) = v15 + LOWORD(MEMORY[0x89F690].field_8); /*0x56a296*/
                v20 = (__int16)(v15 + LOWORD(MEMORY[0x89F690].field_8)) /*0x56a2a4*/
                    + ((__int16)(HIWORD(MEMORY[0x89F690].field_8) + v14) << 9);
                if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v20)) == 0 ) /*0x56a2ba*/
                {
                  g_Map_GlobalCellIndex = v37; /*0x56a2c0*/
                  v21 = g_CellClassArray; /*0x56a2c5*/
                }
                *((_BYTE *)v21 + 283) += 4; /*0x56a2ca*/
              }
              Terrain::PlaceCliffs(this, (int)v12, 2, 0); /*0x56a2d8*/
              v4 = (AbstractClass *)g_TerrainSoundTable2; /*0x56a2dd*/
              v5 = *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x56a2e3*/
            }
            if ( (v13 == *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[59248] /*0x56a300*/
               || v13 == *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[55656])
              && *((_BYTE *)v12 + 282) == 12 )
            {
              Terrain::PlaceCliffs(this, (int)v12, 4, 0); /*0x56a309*/
              v4 = (AbstractClass *)g_TerrainSoundTable2; /*0x56a30e*/
              v5 = *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x56a314*/
            }
            if ( (v13 == v5 /*0x56a345*/
               || v13 == (AbstractClass *)&v5->__pad_0[3]
               || v13 == (AbstractClass *)&v5->__pad_0[4]
               || v13 == (AbstractClass *)&v5->__pad_0[2]
               || v13 == (AbstractClass *)&v5->__pad_0[1])
              && *((_BYTE *)v12 + 282) == 7 )
            {
              if ( v13 == (AbstractClass *)&v5->__pad_0[4] ) /*0x56a350*/
              {
                Cell::SetTileType( /*0x56a36e*/
                  (__int16 *)&v31,
                  (int)&v5->__pad_0[*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] - 1],
                  -1,
                  -1,
                  0);
                v22 = (ObjectClass *)CellStruct::Add(&v31, (IUnknown *)&v41, &MEMORY[0x89F688])->field_0; /*0x56a386*/
                v39 = (IUnknown *)v22; /*0x56a388*/
                v38 = (IUnknown *)v22; /*0x56a38c*/
                v23 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x56a39b*/
                if ( v23 >= 0x40000 || (v24 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v23)) == 0 ) /*0x56a3b1*/
                {
                  g_Map_GlobalCellIndex = (IUnknown *)v22; /*0x56a3b3*/
                  v24 = g_CellClassArray; /*0x56a3b9*/
                }
                *((_BYTE *)v24 + 283) += 4; /*0x56a3d0*/
                v25 = (ObjectClass *)CellStruct::Add(&v38, (IUnknown *)&v42, &MEMORY[0x89F690])->field_0; /*0x56a3e0*/
                v39 = (IUnknown *)v25; /*0x56a3e2*/
                v26 = (__int16)v25 + (SHIWORD(v25) << 9); /*0x56a3f1*/
                if ( v26 >= 0x40000 || (v27 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v26)) == 0 ) /*0x56a407*/
                {
                  g_Map_GlobalCellIndex = (IUnknown *)v25; /*0x56a409*/
                  v27 = g_CellClassArray; /*0x56a40f*/
                }
                *((_BYTE *)v27 + 283) += 4; /*0x56a422*/
                v40 = CellStruct::Add(&v38, (IUnknown *)&v43, (IUnknown *)MEMORY[0x89F690].__pad_10)->field_0; /*0x56a43c*/
                v28 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x56a446*/
                v28[283] += 4; /*0x56a459*/
              }
              Terrain::PlaceCliffs(this, (int)v12, 4, 0); /*0x56a462*/
              v4 = (AbstractClass *)g_TerrainSoundTable2; /*0x56a467*/
              v5 = *(AbstractClass **)&MEMORY[0xA8D63C].__pad_579C[57936]; /*0x56a46d*/
            }
            v6 = v32; /*0x56a473*/
          }
          v6 = (ObjectClass *)((char *)v6 + 1); /*0x56a483*/
          v29 = (int)&(this->q12C)->__pad_0[(_DWORD)this->q049]; /*0x56a484*/
          v32 = v6; /*0x56a488*/
          if ( (int)v6 >= v29 ) /*0x56a48c*/
            break; /*0x56a48c*/
          v8 = v34; /*0x56a0d5*/
          LOWORD(result) = (_WORD)v33; /*0x56a0d9*/
        }
        result = v33; /*0x56a492*/
      }
      result = (ObjectClass *)((char *)result + 1); /*0x56a4a2*/
      v30 = (ObjectClass *)((char *)this->q04C + (_DWORD)this->q04A); /*0x56a4a3*/
      v33 = result; /*0x56a4a7*/
    }
    while ( (int)result < (int)v30 ); /*0x56a4ab*/
  }
  return result; /*0x56a4b4*/
}


// ==== 0x0056A4C0  ObjectClass::FlattenCliffMap  this=ObjectClass  sig=csp ====
void __userpurge FlattenCliffMap(int *this@<ecx>, IUnknown aP0)
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
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  _DWORD *v18; // ecx
  unsigned int v19; // ecx
  _DWORD *v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  _DWORD *v26; // ecx
  unsigned int v27; // ecx
  _DWORD *v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  ObjectClass *v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  IUnknown *v34; // [esp+1Ch] [ebp-8h]
  IUnknown *v35; // [esp+20h] [ebp-4h]
  IUnknown *v36; // [esp+20h] [ebp-4h]
  IUnknown *v37; // [esp+20h] [ebp-4h]
  IUnknown *v38; // [esp+20h] [ebp-4h]
  IUnknown *v39; // [esp+20h] [ebp-4h]
  IUnknown *v40; // [esp+20h] [ebp-4h]
  IUnknown *v41; // [esp+20h] [ebp-4h]

  v2 = (_WORD *)aP0.field_0; /*0x56a4c4*/
  v3 = 1; /*0x56a4cb*/
  v4 = -1; /*0x56a4d0*/
  v31 = 1; /*0x56a4d5*/
  for ( i = -1; ; i = v4 ) /*0x56a4d9*/
  {
    v6 = this->q12C; /*0x56a4dd*/
    if ( v6 <= this->q04C ) /*0x56a4eb*/
      v6 = this->q04C; /*0x56a4ed*/
    if ( v3 >= v6 ) /*0x56a4f1*/
      break; /*0x56a4f1*/
    v32 = (ObjectClass *)v4; /*0x56a4f9*/
    if ( v4 < v3 ) /*0x56a4fd*/
    {
      while ( 2 ) /*0x56a503*/
      {
        v35 = (IUnknown *)v4; /*0x56a503*/
        do /*0x56a65f*/
        {
          v7 = (_WORD)v32 + v2[1]; /*0x56a50e*/
          LOWORD(v34) = v4 + *v2; /*0x56a519*/
          v8 = this->q049; /*0x56a51e*/
          HIWORD(v34) = v7; /*0x56a524*/
          aP0.field_0 = (int)v34; /*0x56a52f*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= this->q12C + v8 ) /*0x56a541*/
          {
            v9 = v7; /*0x56a547*/
            v10 = this->q04A; /*0x56a54a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56a560*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56a56f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56a571*/
              {
                if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56a591*/
                {
                  v13 = v12; /*0x56a593*/
                }
                else
                {
                  g_Map_GlobalCellIndex = v34; /*0x56a597*/
                  v13 = g_CellClassArray; /*0x56a59d*/
                }
                v14 = v13[14] - unk_AA0E28 + 1; /*0x56a5b3*/
                if ( (v14 == dword_ABC2B4 || v14 == unk_AA1130) && *((_BYTE *)v13 + 282) == 8 ) /*0x56a5c7*/
                {
                  Cell::UpdateTileType(&aP0, 0, 0); /*0x56a69a*/
                  Terrain::PlaceCliffs(this, (int)v13, 2, 0); /*0x56a6a6*/
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
                    Cell::SetTileType( /*0x56a6d2*/
                      &aP0,
                      (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 - 1),
                      (IUnknown *)0xFFFFFFFF,
                      (IUnknown *)0xFFFFFFFF,
                      0);
                    v15 = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]; /*0x56a6ea*/
                    LOWORD(v36) = *(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0); /*0x56a6ef*/
                    v16 = *(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0); /*0x56a702*/
                    v17 = (__int16)(*(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0)) /*0x56a706*/
                        + ((__int16)(HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]) << 9);
                    if ( v17 >= 0x40000 || (v18 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) == 0 ) /*0x56a71d*/
                    {
                      HIWORD(v36) = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]; /*0x56a6fd*/
                      g_Map_GlobalCellIndex = v36; /*0x56a71f*/
                      v18 = g_CellClassArray; /*0x56a725*/
                    }
                    *((_BYTE *)v18 + 283) += 4; /*0x56a737*/
                    v19 = (__int16)((_WORD)v36 + *(_WORD *)&stru_89E138.__pad_14B0[160]) /*0x56a763*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[162] + v15) << 9);
                    if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v19)) == 0 ) /*0x56a77a*/
                    {
                      HIWORD(v37) = *(_WORD *)&stru_89E138.__pad_14B0[162] + v15; /*0x56a758*/
                      LOWORD(v37) = v16 + *(_WORD *)&stru_89E138.__pad_14B0[160]; /*0x56a750*/
                      g_Map_GlobalCellIndex = v37; /*0x56a780*/
                      v20 = g_CellClassArray; /*0x56a786*/
                    }
                    *((_BYTE *)v20 + 283) += 4; /*0x56a793*/
                    HIWORD(v38) = *(_WORD *)&stru_89E138.__pad_14B0[178] + v15; /*0x56a7a9*/
                    v21 = (__int16)(v16 + *(_WORD *)&stru_89E138.__pad_14B0[176]) /*0x56a7bc*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[178] + v15) << 9);
                    if ( v21 >= 0x40000 || (v22 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v21)) == 0 ) /*0x56a7d2*/
                    {
                      LOWORD(v38) = v16 + *(_WORD *)&stru_89E138.__pad_14B0[176]; /*0x56a7ae*/
                      g_Map_GlobalCellIndex = v38; /*0x56a7d8*/
                      v22 = g_CellClassArray; /*0x56a7dd*/
                    }
                    *((_BYTE *)v22 + 283) += 4; /*0x56a7e2*/
                  }
                  Terrain::PlaceCliffs(this, (int)v13, 2, 0); /*0x56a7ef*/
                  return; /*0x56a7fb*/
                }
                if ( (v14 == unk_AA1548 || v14 == unk_AA0740) && *((_BYTE *)v13 + 282) == 12 ) /*0x56a617*/
                {
                  Cell::UpdateTileType(&aP0, 0, 0); /*0x56a809*/
                  Terrain::PlaceCliffs(this, (int)v13, 4, 0); /*0x56a815*/
                  return; /*0x56a821*/
                }
                if ( (v14 == unk_AA1028 /*0x56a64a*/
                   || v14 == unk_AA1028 + 3
                   || v14 == unk_AA1028 + 4
                   || v14 == unk_AA1028 + 2
                   || v14 == unk_AA1028 + 1)
                  && *((_BYTE *)v13 + 282) == 7 )
                {
                  if ( v14 == unk_AA1028 + 4 ) /*0x56a82e*/
                  {
                    Cell::SetTileType( /*0x56a84b*/
                      &aP0,
                      (IUnknown *)(unk_AA1028 + unk_AA0E28 - 1),
                      (IUnknown *)0xFFFFFFFF,
                      (IUnknown *)0xFFFFFFFF,
                      0);
                    v23 = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]; /*0x56a863*/
                    LOWORD(v39) = *(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0); /*0x56a868*/
                    v24 = *(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0); /*0x56a87b*/
                    v25 = (__int16)(*(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0)) /*0x56a87f*/
                        + ((__int16)(HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) == 0 ) /*0x56a896*/
                    {
                      HIWORD(v39) = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]; /*0x56a876*/
                      g_Map_GlobalCellIndex = v39; /*0x56a898*/
                      v26 = g_CellClassArray; /*0x56a89e*/
                    }
                    *((_BYTE *)v26 + 283) += 4; /*0x56a8ab*/
                    v27 = (__int16)((_WORD)v39 + *(_WORD *)&stru_89E138.__pad_14B0[168]) /*0x56a8d7*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[170] + v23) << 9);
                    if ( v27 >= 0x40000 || (v28 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) == 0 ) /*0x56a8ee*/
                    {
                      HIWORD(v40) = *(_WORD *)&stru_89E138.__pad_14B0[170] + v23; /*0x56a8cc*/
                      LOWORD(v40) = v24 + *(_WORD *)&stru_89E138.__pad_14B0[168]; /*0x56a8c4*/
                      g_Map_GlobalCellIndex = v40; /*0x56a8f4*/
                      v28 = g_CellClassArray; /*0x56a8fa*/
                    }
                    *((_BYTE *)v28 + 283) += 4; /*0x56a907*/
                    HIWORD(v41) = *(_WORD *)&stru_89E138.__pad_14B0[186] + v23; /*0x56a91d*/
                    v29 = (__int16)(v24 + *(_WORD *)&stru_89E138.__pad_14B0[184]) /*0x56a930*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[186] + v23) << 9);
                    if ( v29 >= 0x40000 || (v30 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v29)) == 0 ) /*0x56a946*/
                    {
                      LOWORD(v41) = v24 + *(_WORD *)&stru_89E138.__pad_14B0[184]; /*0x56a922*/
                      g_Map_GlobalCellIndex = v41; /*0x56a94c*/
                      v30 = g_CellClassArray; /*0x56a951*/
                    }
                    *((_BYTE *)v30 + 283) += 4; /*0x56a956*/
                  }
                  Terrain::PlaceCliffs(this, (int)v13, 4, 0); /*0x56a962*/
                  return; /*0x56a962*/
                }
                v4 = (int)v35; /*0x56a650*/
              }
            }
          }
          v35 = (IUnknown *)++v4; /*0x56a65b*/
        }
        while ( v4 < v31 ); /*0x56a65f*/
        v4 = i; /*0x56a66d*/
        v32 = (ObjectClass *)((char *)v32 + 1); /*0x56a674*/
        if ( (int)v32 < v31 ) /*0x56a678*/
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
void __userpurge RepairMapCliff(int *this@<ecx>, IUnknown aP0)
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
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // si
  unsigned int v17; // ecx
  _DWORD *v18; // ecx
  unsigned int v19; // ecx
  _DWORD *v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // eax
  __int16 v23; // ax
  __int16 v24; // si
  unsigned int v25; // ecx
  _DWORD *v26; // ecx
  unsigned int v27; // ecx
  _DWORD *v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // eax
  int v31; // [esp+10h] [ebp-14h]
  ObjectClass *v32; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  IUnknown *v34; // [esp+1Ch] [ebp-8h]
  IUnknown *v35; // [esp+20h] [ebp-4h]
  IUnknown *v36; // [esp+20h] [ebp-4h]
  IUnknown *v37; // [esp+20h] [ebp-4h]
  IUnknown *v38; // [esp+20h] [ebp-4h]
  IUnknown *v39; // [esp+20h] [ebp-4h]
  IUnknown *v40; // [esp+20h] [ebp-4h]
  IUnknown *v41; // [esp+20h] [ebp-4h]

  v2 = (_WORD *)aP0.field_0; /*0x56a984*/
  v3 = 1; /*0x56a98b*/
  v4 = -1; /*0x56a990*/
  v31 = 1; /*0x56a995*/
  for ( i = -1; ; i = v4 ) /*0x56a999*/
  {
    v6 = this->q12C; /*0x56a99d*/
    if ( v6 <= this->q04C ) /*0x56a9ab*/
      v6 = this->q04C; /*0x56a9ad*/
    if ( v3 >= v6 ) /*0x56a9b1*/
      break; /*0x56a9b1*/
    v32 = (ObjectClass *)v4; /*0x56a9b9*/
    if ( v4 < v3 ) /*0x56a9bd*/
    {
      while ( 2 ) /*0x56a9c3*/
      {
        v35 = (IUnknown *)v4; /*0x56a9c3*/
        do /*0x56ab1f*/
        {
          v7 = (_WORD)v32 + v2[1]; /*0x56a9ce*/
          LOWORD(v34) = v4 + *v2; /*0x56a9d9*/
          v8 = this->q049; /*0x56a9de*/
          HIWORD(v34) = v7; /*0x56a9e4*/
          aP0.field_0 = (int)v34; /*0x56a9ef*/
          if ( (__int16)v34 >= v8 && (__int16)v34 <= this->q12C + v8 ) /*0x56aa01*/
          {
            v9 = v7; /*0x56aa07*/
            v10 = this->q04A; /*0x56aa0a*/
            if ( v9 >= v10 && v9 <= this->q04C + v10 ) /*0x56aa20*/
            {
              v11 = (__int16)v34 + (v9 << 9); /*0x56aa2f*/
              if ( *(_DWORD *)(this->q04F + 4 * v11) ) /*0x56aa31*/
              {
                if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56aa51*/
                {
                  v13 = v12; /*0x56aa53*/
                }
                else
                {
                  g_Map_GlobalCellIndex = v34; /*0x56aa57*/
                  v13 = g_CellClassArray; /*0x56aa5d*/
                }
                v14 = v13[14] - g_TerrainBridgeIndex + 1; /*0x56aa73*/
                if ( (v14 == dword_ABC2B4 || v14 == unk_AA1130) && *((_BYTE *)v13 + 282) == 8 ) /*0x56aa87*/
                {
                  Cell::UpdateTileType(&aP0, 0, 0); /*0x56ab5a*/
                  DestroyCliffMap(this, (int)v13, 2, 0); /*0x56ab66*/
                  return; /*0x56ab72*/
                }
                if ( (v14 == g_TerrainSoundTable2 /*0x56aaba*/
                   || v14 == g_TerrainSoundTable2 + 3
                   || v14 == g_TerrainSoundTable2 + 4
                   || v14 == g_TerrainSoundTable2 + 1
                   || v14 == g_TerrainSoundTable2 + 2)
                  && *((_BYTE *)v13 + 282) == 5 )
                {
                  if ( v14 == g_TerrainSoundTable2 + 4 ) /*0x56ab7a*/
                  {
                    Cell::SetTileType( /*0x56ab92*/
                      &aP0,
                      (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1),
                      (IUnknown *)0xFFFFFFFF,
                      (IUnknown *)0xFFFFFFFF,
                      0);
                    v15 = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]; /*0x56abaa*/
                    LOWORD(v36) = *(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0); /*0x56abaf*/
                    v16 = *(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0); /*0x56abc2*/
                    v17 = (__int16)(*(_WORD *)&stru_89E138.__pad_14B0[184] + LOWORD(aP0.field_0)) /*0x56abc6*/
                        + ((__int16)(HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]) << 9);
                    if ( v17 >= 0x40000 || (v18 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) == 0 ) /*0x56abdd*/
                    {
                      HIWORD(v36) = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[186]; /*0x56abbd*/
                      g_Map_GlobalCellIndex = v36; /*0x56abdf*/
                      v18 = g_CellClassArray; /*0x56abe5*/
                    }
                    *((_BYTE *)v18 + 283) += 4; /*0x56abf7*/
                    v19 = (__int16)((_WORD)v36 + *(_WORD *)&stru_89E138.__pad_14B0[160]) /*0x56ac23*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[162] + v15) << 9);
                    if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v19)) == 0 ) /*0x56ac3a*/
                    {
                      HIWORD(v37) = *(_WORD *)&stru_89E138.__pad_14B0[162] + v15; /*0x56ac18*/
                      LOWORD(v37) = v16 + *(_WORD *)&stru_89E138.__pad_14B0[160]; /*0x56ac10*/
                      g_Map_GlobalCellIndex = v37; /*0x56ac40*/
                      v20 = g_CellClassArray; /*0x56ac46*/
                    }
                    *((_BYTE *)v20 + 283) += 4; /*0x56ac53*/
                    HIWORD(v38) = *(_WORD *)&stru_89E138.__pad_14B0[178] + v15; /*0x56ac69*/
                    v21 = (__int16)(v16 + *(_WORD *)&stru_89E138.__pad_14B0[176]) /*0x56ac7c*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[178] + v15) << 9);
                    if ( v21 >= 0x40000 || (v22 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v21)) == 0 ) /*0x56ac92*/
                    {
                      LOWORD(v38) = v16 + *(_WORD *)&stru_89E138.__pad_14B0[176]; /*0x56ac6e*/
                      g_Map_GlobalCellIndex = v38; /*0x56ac98*/
                      v22 = g_CellClassArray; /*0x56ac9d*/
                    }
                    *((_BYTE *)v22 + 283) += 4; /*0x56aca2*/
                  }
                  DestroyCliffMap(this, (int)v13, 2, 0); /*0x56acaf*/
                  return; /*0x56acbb*/
                }
                if ( (v14 == unk_AA1548 || v14 == unk_AA0740) && *((_BYTE *)v13 + 282) == 12 ) /*0x56aad7*/
                {
                  Cell::UpdateTileType(&aP0, 0, 0); /*0x56acc9*/
                  DestroyCliffMap(this, (int)v13, 4, 0); /*0x56acd5*/
                  return; /*0x56ace1*/
                }
                if ( (v14 == unk_AA1028 /*0x56ab0a*/
                   || v14 == unk_AA1028 + 3
                   || v14 == unk_AA1028 + 4
                   || v14 == unk_AA1028 + 2
                   || v14 == unk_AA1028 + 1)
                  && *((_BYTE *)v13 + 282) == 7 )
                {
                  if ( v14 == unk_AA1028 + 4 ) /*0x56acee*/
                  {
                    Cell::SetTileType( /*0x56ad0b*/
                      &aP0,
                      (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex - 1),
                      (IUnknown *)0xFFFFFFFF,
                      (IUnknown *)0xFFFFFFFF,
                      0);
                    v23 = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]; /*0x56ad23*/
                    LOWORD(v39) = *(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0); /*0x56ad28*/
                    v24 = *(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0); /*0x56ad3b*/
                    v25 = (__int16)(*(_WORD *)&stru_89E138.__pad_14B0[160] + LOWORD(aP0.field_0)) /*0x56ad3f*/
                        + ((__int16)(HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]) << 9);
                    if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) == 0 ) /*0x56ad56*/
                    {
                      HIWORD(v39) = HIWORD(aP0.field_0) + *(_WORD *)&stru_89E138.__pad_14B0[162]; /*0x56ad36*/
                      g_Map_GlobalCellIndex = v39; /*0x56ad58*/
                      v26 = g_CellClassArray; /*0x56ad5e*/
                    }
                    *((_BYTE *)v26 + 283) += 4; /*0x56ad6b*/
                    v27 = (__int16)((_WORD)v39 + *(_WORD *)&stru_89E138.__pad_14B0[168]) /*0x56ad97*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[170] + v23) << 9);
                    if ( v27 >= 0x40000 || (v28 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) == 0 ) /*0x56adae*/
                    {
                      HIWORD(v40) = *(_WORD *)&stru_89E138.__pad_14B0[170] + v23; /*0x56ad8c*/
                      LOWORD(v40) = v24 + *(_WORD *)&stru_89E138.__pad_14B0[168]; /*0x56ad84*/
                      g_Map_GlobalCellIndex = v40; /*0x56adb4*/
                      v28 = g_CellClassArray; /*0x56adba*/
                    }
                    *((_BYTE *)v28 + 283) += 4; /*0x56adc7*/
                    HIWORD(v41) = *(_WORD *)&stru_89E138.__pad_14B0[186] + v23; /*0x56addd*/
                    v29 = (__int16)(v24 + *(_WORD *)&stru_89E138.__pad_14B0[184]) /*0x56adf0*/
                        + ((__int16)(*(_WORD *)&stru_89E138.__pad_14B0[186] + v23) << 9);
                    if ( v29 >= 0x40000 || (v30 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v29)) == 0 ) /*0x56ae06*/
                    {
                      LOWORD(v41) = v24 + *(_WORD *)&stru_89E138.__pad_14B0[184]; /*0x56ade2*/
                      g_Map_GlobalCellIndex = v41; /*0x56ae0c*/
                      v30 = g_CellClassArray; /*0x56ae11*/
                    }
                    *((_BYTE *)v30 + 283) += 4; /*0x56ae16*/
                  }
                  DestroyCliffMap(this, (int)v13, 4, 0); /*0x56ae22*/
                  return; /*0x56ae22*/
                }
                v4 = (int)v35; /*0x56ab10*/
              }
            }
          }
          v35 = (IUnknown *)++v4; /*0x56ab1b*/
        }
        while ( v4 < v31 ); /*0x56ab1f*/
        v4 = i; /*0x56ab2d*/
        v32 = (ObjectClass *)((char *)v32 + 1); /*0x56ab34*/
        if ( (int)v32 < v31 ) /*0x56ab38*/
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
int __thiscall sub_56AE40(_DWORD *this, int a2)
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
  int v14[10]; // [esp+Ch] [ebp-28h] BYREF

  v3 = 0; /*0x56ae48*/
  LCWPipe::Constructor(v14, 0, 0x2000); /*0x56ae54*/
  Pipe::SetDelegate(v14, a2); /*0x56ae62*/
  for ( i = 0; i < this->q140; ++i ) /*0x56ae71*/
  {
    v5 = *(_DWORD *)(this->q13C + 4 * i); /*0x56ae7b*/
    if ( v5 ) /*0x56ae80*/
      v6 = LCW::Compress((int)v14, (char *)(v5 + 56), 2); /*0x56ae86*/
    else
      v6 = LCW::Compress((int)v14, stru_ABDC88, 2); /*0x56ae91*/
    v3 += (int)v6; /*0x56ae96*/
  }
  for ( j = 0; j < this->q140; ++j ) /*0x56aead*/
  {
    v8 = *(_DWORD *)(this->q13C + 4 * j); /*0x56aeb7*/
    if ( v8 ) /*0x56aebc*/
      v9 = LCW::Compress((int)v14, (char *)(v8 + 282), 1); /*0x56aec4*/
    else
      v9 = LCW::Compress((int)v14, (char *)&stru_ABDD6A, 1); /*0x56aecf*/
    v3 += (int)v9; /*0x56aed4*/
  }
  for ( k = 0; k < this->q140; ++k ) /*0x56aeeb*/
  {
    v11 = *(_DWORD *)(this->q13C + 4 * k); /*0x56aef5*/
    if ( v11 ) /*0x56aefa*/
      v12 = LCW::Compress((int)v14, (char *)(v11 + 283), 1); /*0x56af02*/
    else
      v12 = LCW::Compress((int)v14, MEMORY[0xABDD6B], 1); /*0x56af0d*/
    v3 += (int)v12; /*0x56af12*/
  }
  LCWPipe::Dtor(v14); /*0x56af23*/
  return v3; /*0x56af2a*/
}


// ==== 0x0056AF40  ObjectClass::method_56AF40  this=ObjectClass  sig=csp ====
char *__thiscall sub_56AF40(int *this, int a2)
{
  int *v2; // esi
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
  int v15; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  int v17[10]; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56af45*/
  v3 = 0; /*0x56af47*/
  LCWPipe::Constructor(v17, 0, 0x2000); /*0x56af57*/
  Pipe::SetDelegate(v17, a2); /*0x56af65*/
  v4 = 0; /*0x56af70*/
  v18 = 0; /*0x56af74*/
  if ( v2[80] > 0 ) /*0x56af78*/
  {
    do /*0x56b08b*/
    {
      v5 = *(_DWORD *)(v2[79] + 4 * v4); /*0x56af88*/
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
            && Src <= v7 + 2 * this->q0F8 )
          {
            Src = v6; /*0x56aff7*/
            if ( v6 != g_MapSeedState /*0x56b028*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b035*/
              v8 = &v3[(_DWORD)LCW::Compress((int)v17, (char *)&Src, 4)]; /*0x56b045*/
              v9 = &v8[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 56), 4)]; /*0x56b059*/
              v10 = &v9[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 282), 1)]; /*0x56b06d*/
              v3 = &v10[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 283), 1)]; /*0x56b074*/
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
  v15 = g_MapSeedState; /*0x56b0a4*/
  v11 = &v3[(_DWORD)LCW::Compress((int)v17, (char *)&v15, 4)]; /*0x56b0ad*/
  v12 = 100; /*0x56b0af*/
  do /*0x56b0c7*/
  {
    v11 = &v11[(_DWORD)LCW::Compress((int)v17, (char *)&v15, 4)]; /*0x56b0c4*/
    --v12; /*0x56b0c6*/
  }
  while ( v12 ); /*0x56b0c7*/
  (*(void (__thiscall **)(int *))(v17[0] + 4))(v17); /*0x56b0d1*/
  LCWPipe::Dtor(v17); /*0x56b0d8*/
  return v11; /*0x56b0df*/
}


// ==== 0x0056B0F0  ObjectClass::method_56B0F0  this=ObjectClass  sig=csp ====
int __thiscall sub_56B0F0(_DWORD *this, int *a2)
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
  _DWORD *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h] BYREF

  v2 = 0; /*0x56b0fa*/
  v3 = 0; /*0x56b0fc*/
  v4 = a2; /*0x56b0ff*/
  v16 = this; /*0x56b105*/
  for ( i = 0; v3 < v16[80]; i = v3 ) /*0x56b10d*/
  {
    v5 = *(_DWORD *)(this->q13C + 4 * v3); /*0x56b11d*/
    if ( v3 ) /*0x56b120*/
    {
      if ( v5 ) /*0x56b128*/
      {
        v6 = *(_DWORD *)(v5 + 36); /*0x56b12e*/
        v7 = this->q0F4; /*0x56b131*/
        HIWORD(a2) = HIWORD(v6); /*0x56b137*/
        v8 = (__int16)v6; /*0x56b13b*/
        v9 = SHIWORD(v6); /*0x56b13e*/
        a2 = (int *)(SHIWORD(a2) + v8); /*0x56b148*/
        if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[62] ) /*0x56b17b*/
        {
          a2 = *(int **)(v5 + 36); /*0x56b18b*/
          if ( a2 != (int *)g_MapSeedState /*0x56b1bd*/
            && (_DWORD *)v5 != g_CellClassArray
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
  v17 = g_MapSeedState; /*0x56b227*/
  return v2 + (*(int (__thiscall **)(int *, int *, int))(v13 + 16))(v4, &v17, 4); /*0x56b239*/
}


// ==== 0x0056B250  ObjectClass::method_56B250  this=ObjectClass  sig=csp ====
int __thiscall sub_56B250(int *this, int a2)
{
  int *v2; // esi
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
  int v17[10]; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b255*/
  LZOPipe::Constructor(v17, 0, 0x2000); /*0x56b266*/
  Pipe::SetDelegate(v17, a2); /*0x56b274*/
  v3 = 0; /*0x56b27f*/
  v4 = 0; /*0x56b281*/
  v18 = 0; /*0x56b285*/
  if ( v2[80] > 0 ) /*0x56b289*/
  {
    do /*0x56b39c*/
    {
      v5 = *(_DWORD *)(v2[79] + 4 * v4); /*0x56b299*/
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
            && Src <= v7 + 2 * this->q0F8 )
          {
            Src = v6; /*0x56b308*/
            if ( v6 != g_MapSeedState /*0x56b339*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b346*/
              v8 = Compression::Read((int)v17, (int)&Src, 4) + v3; /*0x56b356*/
              v9 = Compression::Read((int)v17, v5 + 56, 4) + v8; /*0x56b36a*/
              v10 = Compression::Read((int)v17, v5 + 282, 1) + v9; /*0x56b37e*/
              v3 = Compression::Read((int)v17, v5 + 283, 1) + v10; /*0x56b385*/
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
  v16 = g_MapSeedState; /*0x56b3b5*/
  v11 = Compression::Read((int)v17, (int)&v16, 4) + v3; /*0x56b3c6*/
  v12 = (*(int (__thiscall **)(int *))(v17[0] + 4))(v17); /*0x56b3cf*/
  LZOPipe::Destructor(v17); /*0x56b3d1*/
  return v12 + v11; /*0x56b3d9*/
}


// ==== 0x0056B3F0  MapClass::DecompressCellData  this=ObjectClass  sig=csp ====
int __thiscall MapClass::DecompressCellData(int *this, MouseClass *aP1)
{
  MouseClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  TagClass *v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  TagClass *v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  AbstractClass v17; // [esp+10h] [ebp-2Ch] BYREF
  MouseClass *aP1a; // [esp+40h] [ebp+4h]

  v2 = (MouseClass *)this; /*0x56b3f5*/
  LZOPipe::Constructor(&v17.__pad_0[4], 0, (TechnoTypeClass *)0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v17.__pad_0[4], (int)aP1); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  aP1a = 0; /*0x56b425*/
  if ( v2->field_140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2->__pad_11F[29] + 4 * v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(TagClass **)(v5 + 36); /*0x56b44a*/
          Src = (int)v6; /*0x56b451*/
          v7 = this->q03D; /*0x56b45a*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b468*/
          if ( Src > v7 /*0x56b49b*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * this->q0F8 )
          {
            Src = (int)v6; /*0x56b4a8*/
            if ( v6 != g_MapSeedState /*0x56b4d9*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = (int)v6; /*0x56b4e6*/
              v8 = Compression::Read((int)&v17.__pad_0[4], (AbstractClass *)&Src, (IUnknown *)4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int)&v17.__pad_0[4], (AbstractClass *)(v5 + 56), (IUnknown *)4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int)&v17.__pad_0[4], (AbstractClass *)(v5 + 282), (IUnknown *)1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int)&v17.__pad_0[4], (AbstractClass *)(v5 + 283), (IUnknown *)1) + v10; /*0x56b532*/
              v3 = Compression::Read((int)&v17.__pad_0[4], (AbstractClass *)(v5 + 281), (IUnknown *)1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = (MouseClass *)this; /*0x56b53b*/
      v4 = (int)&aP1a->field_0 + 1; /*0x56b543*/
      aP1a = (MouseClass *)v4; /*0x56b54a*/
    }
    while ( v4 < this->customSound_controller ); /*0x56b550*/
  }
  *(_DWORD *)v17.__pad_0 = g_MapSeedState; /*0x56b568*/
  v12 = Compression::Read((int)&v17.__pad_0[4], &v17, (IUnknown *)4) + v3; /*0x56b579*/
  v13 = (TagClass *)(*(int (__thiscall **)(char *))(*(_DWORD *)&v17.__pad_0[4] + 4))(&v17.__pad_0[4]); /*0x56b582*/
  LZOPipe::Destructor((int *)&v17.__pad_0[4]); /*0x56b584*/
  return (int)&v13->__pad_0[v12]; /*0x56b58c*/
}


// ==== 0x0056B5A0  CellClass::LoadTerrainTiles  this=CellClass  sig=csp ====
char __thiscall sub_56B5A0(_DWORD *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int *v6; // esi
  int j; // esi
  unsigned int v8; // eax
  char *v9; // eax
  int k; // esi
  unsigned int v11; // eax
  char *v12; // eax
  int v14[10]; // [esp+0h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp+4h]
  int v16; // [esp+2Ch] [ebp+4h]
  int v17; // [esp+2Ch] [ebp+4h]

  LCWStraw::Constructor(v14, 1, 0x2000); /*0x56b5b3*/
  Delegate::Set(v14, a2); /*0x56b5c1*/
  for ( i = 0; i < 0x4000; ++i ) /*0x56b5c6*/
  {
    HIWORD(v15) = i / 128; /*0x56b5e7*/
    v4 = i % 128 + (SHIWORD(v15) << 9); /*0x56b5f5*/
    if ( v4 < 0x40000 && (v5 = *(_DWORD **)(this->CellClass_field_13C + 4 * v4)) != 0 /*0x56b61d*/
      || (LOWORD(v15) = i % 128, g_Map_GlobalCellIndex = v15, (v5 = g_CellClassArray) != 0) )
    {
      v6 = v5 + 14; /*0x56b61f*/
      v5[14] = 0xFFFF; /*0x56b629*/
      LCW::DecompressReader((int)v14, (char *)v5 + 56, 2); /*0x56b62f*/
      *v6 = AccumulateMIXFileIndex(*v6); /*0x56b63b*/
    }
    else
    {
      LCW::DecompressReader((int)v14, stru_ABDC88, 2); /*0x56b64a*/
    }
  }
  for ( j = 0; j < 0x4000; ++j ) /*0x56b65c*/
  {
    HIWORD(v16) = j / 128; /*0x56b67d*/
    v8 = j % 128 + (SHIWORD(v16) << 9); /*0x56b68b*/
    if ( v8 < 0x40000 && (v9 = *(char **)(this->CellClass_field_13C + 4 * v8)) != 0 /*0x56b6b3*/
      || (LOWORD(v16) = j % 128, g_Map_GlobalCellIndex = v16, (v9 = (char *)g_CellClassArray) != 0) )
    {
      LCW::DecompressReader((int)v14, v9 + 282, 1); /*0x56b6bd*/
    }
    else
    {
      LCW::DecompressReader((int)v14, (char *)&stru_ABDD6A, 1); /*0x56b6ca*/
    }
  }
  for ( k = 0; k < 0x4000; ++k ) /*0x56b6d8*/
  {
    HIWORD(v17) = k / 128; /*0x56b6f9*/
    v11 = k % 128 + (SHIWORD(v17) << 9); /*0x56b707*/
    if ( v11 < 0x40000 && (v12 = *(char **)(this->CellClass_field_13C + 4 * v11)) != 0 /*0x56b72f*/
      || (LOWORD(v17) = k % 128, g_Map_GlobalCellIndex = v17, (v12 = (char *)g_CellClassArray) != 0) )
    {
      LCW::DecompressReader((int)v14, v12 + 283, 1); /*0x56b739*/
    }
    else
    {
      LCW::DecompressReader((int)v14, MEMORY[0xABDD6B], 1); /*0x56b746*/
    }
  }
  if ( g_CellClassArray ) /*0x56b75e*/
    CellClass::Construct(g_CellClassArray); /*0x56b760*/
  LCWStraw::Dtor(v14); /*0x56b769*/
  return 1; /*0x56b770*/
}


// ==== 0x0056B780  CellClass::CreateOverlay  this=CellClass  sig=csp ====
char __thiscall sub_56B780(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  char *v4; // eax
  char *v5; // edi
  int v7; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  int v9[10]; // [esp+Ch] [ebp-28h] BYREF

  LCWStraw::Constructor(v9, 1, 0x2000); /*0x56b793*/
  Delegate::Set(v9, a2); /*0x56b7a1*/
  LCW::DecompressReader((int)v9, (char *)&v7, 4); /*0x56b7b1*/
  while ( v7 != g_MapSeedState ) /*0x56b7c6*/
  {
    v3 = (__int16)v7 + (SHIWORD(v7) << 9); /*0x56b7de*/
    if ( v3 < 0x40000 && (v4 = *(char **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56b7f4*/
    {
      v5 = v4; /*0x56b7f6*/
    }
    else
    {
      g_Map_GlobalCellIndex = v7; /*0x56b7fa*/
      v5 = (char *)g_CellClassArray; /*0x56b800*/
    }
    if ( !v5 || v5 == (char *)g_CellClassArray ) /*0x56b80f*/
    {
      LCW::DecompressReader((int)v9, v8, 6); /*0x56b857*/
    }
    else
    {
      *((_DWORD *)v5 + 14) = 0xFFFF; /*0x56b81b*/
      LCW::DecompressReader((int)v9, v5 + 56, 4); /*0x56b821*/
      *((_DWORD *)v5 + 14) = AccumulateMIXFileIndex(*((_DWORD *)v5 + 14)); /*0x56b82d*/
      LCW::DecompressReader((int)v9, v5 + 282, 1); /*0x56b83c*/
      LCW::DecompressReader((int)v9, v5 + 283, 1); /*0x56b84a*/
    }
    v7 = g_MapSeedState; /*0x56b868*/
    LCW::DecompressReader((int)v9, (char *)&v7, 4); /*0x56b86d*/
  }
  if ( g_CellClassArray ) /*0x56b87c*/
    CellClass::Construct(g_CellClassArray); /*0x56b87e*/
  LCWStraw::Dtor(v9); /*0x56b887*/
  return 1; /*0x56b88e*/
}


// ==== 0x0056B8A0  CellClass::DecompressRawCellData  this=CellClass  sig=csp ====
char __thiscall sub_56B8A0(_DWORD *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _BYTE v8[8]; // [esp+14h] [ebp-8h] BYREF

  v2 = a2; /*0x56b8a6*/
  while ( 1 ) /*0x56b8ad*/
  {
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 8))(v2, &a2, 4); /*0x56b8b8*/
    if ( a2 == g_MapSeedState ) /*0x56b8cb*/
      break; /*0x56b8cb*/
    v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56b8e3*/
    if ( v4 < 0x40000 && (v5 = *(_DWORD **)(this->CellClass_field_13C + 4 * v4)) != 0 ) /*0x56b8f9*/
    {
      v6 = v5; /*0x56b8fb*/
    }
    else
    {
      g_Map_GlobalCellIndex = a2; /*0x56b8ff*/
      v6 = g_CellClassArray; /*0x56b905*/
    }
    if ( !v6 || v6 == g_CellClassArray ) /*0x56b914*/
    {
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v2 + 8))(v2, v8, 6); /*0x56b96c*/
      a2 = g_MapSeedState; /*0x56b975*/
    }
    else
    {
      v6[14] = 0xFFFF; /*0x56b91e*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v2 + 8))(v2, v6 + 14, 4); /*0x56b926*/
      v6[14] = AccumulateMIXFileIndex(v6[14]); /*0x56b930*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)v6 + 282, 1); /*0x56b93f*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, (int)v6 + 283, 1); /*0x56b94f*/
      a2 = g_MapSeedState; /*0x56b958*/
    }
  }
  if ( g_CellClassArray ) /*0x56b989*/
    CellClass::Construct(g_CellClassArray); /*0x56b98d*/
  return 1; /*0x56b983*/
}


// ==== 0x0056B9A0  CellClass::DecompressTerrainDataSimple  this=CellClass  sig=csp ====
char __thiscall sub_56B9A0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  char *v4; // eax
  char *v5; // edi
  int v7; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  int v9[10]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor(v9, 1, 0x2000); /*0x56b9b3*/
  Delegate::Set(v9, a2); /*0x56b9c1*/
  LCW::Decompress((int)v9, (char *)&v7, 4); /*0x56b9d1*/
  while ( v7 != g_MapSeedState ) /*0x56b9e6*/
  {
    v3 = (__int16)v7 + (SHIWORD(v7) << 9); /*0x56b9fe*/
    if ( v3 < 0x40000 && (v4 = *(char **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56ba14*/
    {
      v5 = v4; /*0x56ba16*/
    }
    else
    {
      g_Map_GlobalCellIndex = v7; /*0x56ba1a*/
      v5 = (char *)g_CellClassArray; /*0x56ba20*/
    }
    if ( !v5 || v5 == (char *)g_CellClassArray ) /*0x56ba2f*/
    {
      LCW::Decompress((int)v9, v8, 6); /*0x56ba77*/
    }
    else
    {
      *((_DWORD *)v5 + 14) = 0xFFFF; /*0x56ba3b*/
      LCW::Decompress((int)v9, v5 + 56, 4); /*0x56ba41*/
      *((_DWORD *)v5 + 14) = AccumulateMIXFileIndex(*((_DWORD *)v5 + 14)); /*0x56ba4d*/
      LCW::Decompress((int)v9, v5 + 282, 1); /*0x56ba5c*/
      LCW::Decompress((int)v9, v5 + 283, 1); /*0x56ba6a*/
    }
    v7 = g_MapSeedState; /*0x56ba88*/
    LCW::Decompress((int)v9, (char *)&v7, 4); /*0x56ba8d*/
  }
  if ( g_CellClassArray ) /*0x56ba9c*/
    CellClass::Construct(g_CellClassArray); /*0x56ba9e*/
  LZOStraw::Destructor(v9); /*0x56baa7*/
  return 1; /*0x56baae*/
}


// ==== 0x0056BAC0  CellClass::DecompressTerrainData  this=CellClass  sig=csp ====
char __thiscall CellClass::DecompressTerrainData(_DWORD *this, MouseClass *aP1)
{
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  ObjectClass *v7; // [esp+0h] [ebp-34h] BYREF
  char v8[8]; // [esp+4h] [ebp-30h] BYREF
  int v9[10]; // [esp+Ch] [ebp-28h] BYREF

  LZOStraw::Constructor(v9, 1, 0x2000); /*0x56bad3*/
  Delegate::Set(v9, (AbstractTypeClass *)aP1); /*0x56bae1*/
  while ( 1 ) /*0x56baf1*/
  {
    LCW::Decompress((int)v9, (CCINIClass *)&v7, 4); /*0x56baf1*/
    if ( v7 == (ObjectClass *)g_MapSeedState ) /*0x56bb06*/
      break; /*0x56bb06*/
    v3 = (__int16)v7 + (SHIWORD(v7) << 9); /*0x56bb1e*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD **)(this->CellClass_field_13C + 4 * v3)) != 0 ) /*0x56bb34*/
    {
      v5 = v4; /*0x56bb36*/
    }
    else
    {
      g_Map_GlobalCellIndex = (IUnknown *)v7; /*0x56bb3a*/
      v5 = g_CellClassArray; /*0x56bb40*/
    }
    if ( !v5 || v5 == g_CellClassArray ) /*0x56bb4f*/
    {
      LCW::Decompress((int)v9, (CCINIClass *)v8, 7); /*0x56bba9*/
    }
    else
    {
      v5[14] = 0xFFFF; /*0x56bb5b*/
      LCW::Decompress((int)v9, (CCINIClass *)(v5 + 14), 4); /*0x56bb61*/
      v5[14] = AccumulateMIXFileIndex(v5[14]); /*0x56bb6d*/
      LCW::Decompress((int)v9, (CCINIClass *)((char *)v5 + 282), 1); /*0x56bb7c*/
      LCW::Decompress((int)v9, (CCINIClass *)((char *)v5 + 283), 1); /*0x56bb8e*/
      LCW::Decompress((int)v9, (CCINIClass *)((char *)v5 + 281), 1); /*0x56bb9c*/
    }
    v7 = (ObjectClass *)g_MapSeedState; /*0x56bbb3*/
  }
  if ( g_CellClassArray ) /*0x56bbc6*/
    CellClass::Construct(g_CellClassArray); /*0x56bbca*/
  LZOStraw::Destructor(v9); /*0x56bbd3*/
  return 1; /*0x56bbda*/
}


// ==== 0x0056BBE0  MapClass::Update  this=MapClass  sig=csp ====
char __thiscall CrateClass_Update(char *this)
{
  char *v1; // eax
  char *v3; // esi
  int i; // ebx
  int v5; // edx
  int v6; // ecx

  LOBYTE(v1) = MEMORY[0xA8B238][0]; /*0x56bbe0*/
  if ( MEMORY[0xA8B238][0] ) /*0x56bbea*/
  {
    LOBYTE(v1) = MEMORY[0xA8B261]; /*0x56bbec*/
    if ( MEMORY[0xA8B261] ) /*0x56bbf3*/
    {
      v3 = this + 344; /*0x56bbf7*/
      for ( i = 256; i; --i ) /*0x56bbfd*/
      {
        LOWORD(v1) = *((_WORD *)v3 + 6); /*0x56bc02*/
        if ( *((_DWORD *)v3 + 3) != g_MapSeedState ) /*0x56bc0d*/
        {
          v5 = *(_DWORD *)v3; /*0x56bc1c*/
          v6 = *((_DWORD *)v3 + 2); /*0x56bc1e*/
          if ( *(_DWORD *)v3 != -1 ) /*0x56bc24*/
          {
            v1 = (char *)MEMORY[0xA8ED84] - v5; /*0x56bc2b*/
            if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x56bc2f*/
              goto LABEL_9; /*0x56bc2f*/
            v6 -= (int)v1; /*0x56bc31*/
          }
          if ( !v6 ) /*0x56bc35*/
          {
LABEL_9:
            CellClass::Cleanup(v3); /*0x56bc37*/
            LOBYTE(v1) = CrateClass::FindPlacement(this); /*0x56bc40*/
          }
        }
        v3 += 16; /*0x56bc45*/
      }
    }
  }
  return (char)v1; /*0x56bc4d*/
}


// ==== 0x0056BC50  Cell::PosToLinearIndex  this=Cell  sig=csp ====
int __stdcall Cell::PosToLinearIndex(IUnknown *aP0)
{
  return SLOWORD(aP0->field_0) / 4 + 130 * (SHIWORD(aP0->field_0) / 4) + 131; /*0x56bc7c*/
}


// ==== 0x0056BCD0  CellClass::GetTileData  this=CellClass  sig=csp ====
int __stdcall CellClass::GetTileData(IUnknown *aP0, IUnknown *aP1)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  v2 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56bcde*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v2)) == 0 ) /*0x56bcf4*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56bcf8*/
    v3 = g_CellClassArray; /*0x56bcfd*/
  }
  return *(_DWORD *)&aP1->__pad_579C[520 * ((__int16)HIWORD(v3[9]) / 4) + 596 + 4 * ((__int16)v3[9] / 4)]; /*0x56bd3a*/
}


// ==== 0x0056BD40  CrateClass::FindPlacement  this=MapClass  sig=csp ====
char __thiscall CrateClass_FindPlacement(_DWORD *this)
{
  _DWORD *v1; // edx
  int i; // eax
  int v3; // ebx
  __int16 v4; // si
  __int16 v5; // ax
  int v6; // eax
  bool v7; // sf
  int v8; // eax
  _DWORD *v9; // eax
  int *PlacementCells; // eax
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h]
  __int16 v14[2]; // [esp+18h] [ebp-10h] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h] BYREF
  int v17; // [esp+24h] [ebp-4h] BYREF

  v1 = this + 89; /*0x56bd43*/
  for ( i = 0; i < 256; ++i ) /*0x56bd5c*/
  {
    if ( *v1 == g_MapSeedState ) /*0x56bd61*/
      break; /*0x56bd61*/
    v1 += 4; /*0x56bd6a*/
  }
  if ( i == 256 ) /*0x56bd79*/
    return 0; /*0x56be9e*/
  v3 = 0; /*0x56bd7f*/
  while ( 1 ) /*0x56bdb6*/
  {
    v4 = MEMORY[0x87F90C] + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x87F914] - 1); /*0x56bdb6*/
    v5 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x87F918] - 1); /*0x56bdc1*/
    LOWORD(v13) = v4; /*0x56bdcc*/
    HIWORD(v13) = MEMORY[0x87F910] + v5; /*0x56bdd3*/
    v6 = (__int16)(MEMORY[0x87F910] + v5) << 9; /*0x56bde2*/
    v7 = v4 + v6 < 0; /*0x56bde5*/
    v8 = v4 + v6; /*0x56bde5*/
    v12 = v13; /*0x56bde7*/
    if ( v7 || v8 >= 0x40000 || (v9 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v8)) == 0 ) /*0x56bdff*/
    {
      g_Map_GlobalCellIndex = v13; /*0x56be01*/
      v9 = g_CellClassArray; /*0x56be07*/
    }
    if ( v9[59] == 2 ) /*0x56be13*/
    {
      v14[0] = 0; /*0x56be33*/
      v14[1] = 0; /*0x56be38*/
      PlacementCells = LayerClass::Pathfinding_Find( /*0x56be42*/
                         &MEMORY[0x87F7E8],
                         (int)v14,
                         &v16,
                         (__int16 *)&v12,
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
                         v14,
                         0,
                         0);
    }
    else
    {
      v15[0] = 0; /*0x56be61*/
      v15[1] = 0; /*0x56be66*/
      PlacementCells = LayerClass::Pathfinding_Find( /*0x56be76*/
                         &MEMORY[0x87F7E8],
                         (int)v15,
                         &v17,
                         (__int16 *)&v12,
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
                         v15,
                         0,
                         0);
    }
    v12 = *PlacementCells; /*0x56be84*/
    if ( (unsigned __int8)BuildingClass::BeginCrumblingTimer(&v12) ) /*0x56be88*/
      break; /*0x56be88*/
    if ( ++v3 >= 1000 ) /*0x56be98*/
      return 0; /*0x56be98*/
  }
  return 1; /*0x56be9e*/
}


// ==== 0x0056BEC0  BuildingClass::SearchPlacement  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_SearchPlacement(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  int v11; // [esp-34h] [ebp-48h]
  __int16 v12[2]; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bedc*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v4)) == 0 ) /*0x56bef2*/
  {
    MEMORY[0xABDC74] = a2; /*0x56bef4*/
    v5 = &MEMORY[0xABDC50]; /*0x56befa*/
  }
  if ( v5[59] == 2 ) /*0x56bf06*/
    v11 = 5; /*0x56bf24*/
  else
    v11 = 1; /*0x56bf4f*/
  v12[0] = 0; /*0x56bf26*/
  v12[1] = 0; /*0x56bf2b*/
  a2 = *LayerClass::Pathfinding_Find( /*0x56bf77*/
          &MEMORY[0x87F7E8],
          (int)v12,
          &v13,
          (__int16 *)&a2,
          v11,
          -1,
          0,
          0,
          1,
          1,
          0,
          0,
          0,
          1,
          v12,
          0,
          0);
  v6 = 0; /*0x56bf81*/
  v7 = this + 89; /*0x56bf83*/
  do /*0x56bf9d*/
  {
    if ( *v7 == MEMORY[0xABD480] ) /*0x56bf8c*/
      break; /*0x56bf8c*/
    ++v6; /*0x56bf94*/
    v7 += 4; /*0x56bf95*/
  }
  while ( v6 < 256 ); /*0x56bf9d*/
  if ( v6 == 256 || !(unsigned __int8)BuildingClass::BeginCrumblingTimer(&a2) ) /*0x56bfb5*/
    return 0; /*0x56c00c*/
  if ( a3 != 20 ) /*0x56bfc5*/
  {
    v8 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x56bfd6*/
    if ( v8 >= 0x40000 || (v9 = *(_BYTE **)(MEMORY[0x87F924] + 4 * v8)) == 0 ) /*0x56bfec*/
    {
      MEMORY[0xABDC74] = a2; /*0x56bfee*/
      v9 = &MEMORY[0xABDC50]; /*0x56bff4*/
    }
    v9[286] = a3; /*0x56bff9*/
  }
  return 1; /*0x56bfff*/
}


// ==== 0x0056C020  CellClass::CreateBuildingCrater  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateBuildingCrater(__int16 *this, MouseClass *aP1)
{
  int v2; // edx
  __int16 *i; // eax
  unsigned int v5; // eax
  MouseClass *v6; // eax
  MouseClass *v7; // ebx
  int v8; // eax
  IUnknown *PlacementRect; // esi
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
  char v21; // [esp+2Ch] [ebp-10h] BYREF
  int v22; // [esp+30h] [ebp-Ch]
  MouseClass *aP1a; // [esp+40h] [ebp+4h]

  if ( MEMORY[0xA8B238] ) /*0x56c02e*/
  {
    v2 = 0; /*0x56c041*/
    for ( i = this + 178; /*0x56c043*/
          *(TagClass **)i == g_MapSeedState || LOWORD(aP1->field_0) != *i || HIWORD(aP1->field_0) != i[1];
          i += 8 )
    {
      if ( ++v2 >= 256 ) /*0x56c070*/
        return 0; /*0x56c070*/
    }
    return CellClass::Cleanup(this + 8 * v2 + 172); /*0x56c082*/
  }
  else
  {
    v5 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x56c09f*/
    if ( v5 < 0x40000 && (v6 = *(MouseClass **)(this->q04F + 4 * v5)) != 0 ) /*0x56c0b5*/
    {
      v7 = v6; /*0x56c0b7*/
    }
    else
    {
      v7 = (MouseClass *)g_CellClassArray; /*0x56c0bd*/
      g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x56c0c2*/
    }
    v8 = *(_DWORD *)&v7->__pad_3C[8]; /*0x56c0c8*/
    aP1a = v7; /*0x56c0cb*/
    if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v8] + 682) ) /*0x56c0e1*/
    {
      return 0; /*0x56c1e6*/
    }
    else
    {
      PlacementRect = (IUnknown *)BuildingClass::GetPlacementRect((int)v7, (IUnknown *)v20); /*0x56c0ff*/
      StartCoords = House::GetStartCoords((int)v7, (IUnknown *)&v21); /*0x56c104*/
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x56c119*/
      {
        v18 = PlacementRect->field_0; /*0x56c198*/
        v14 = PlacementRect->field_4; /*0x56c19a*/
        v15 = PlacementRect->field_8; /*0x56c19d*/
        v16 = PlacementRect->field_C; /*0x56c1a0*/
      }
      else
      {
        v11 = PlacementRect->field_8; /*0x56c11b*/
        if ( v11 <= 0 || (v19 = PlacementRect->field_C, v19 <= 0) ) /*0x56c12f*/
        {
          v18 = *StartCoords; /*0x56c18b*/
          v14 = StartCoords[1]; /*0x56c18d*/
          v15 = StartCoords[2]; /*0x56c190*/
          v16 = StartCoords[3]; /*0x56c193*/
        }
        else
        {
          v12 = *StartCoords; /*0x56c131*/
          v13 = PlacementRect->field_0; /*0x56c133*/
          v14 = StartCoords[1]; /*0x56c135*/
          v15 = StartCoords[2]; /*0x56c138*/
          v16 = StartCoords[3]; /*0x56c13b*/
          if ( v12 > PlacementRect->field_0 ) /*0x56c140*/
          {
            v15 += v12 - v13; /*0x56c144*/
            v12 = PlacementRect->field_0; /*0x56c146*/
          }
          v17 = PlacementRect->field_4; /*0x56c148*/
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
          v7 = aP1a; /*0x56c185*/
        }
      }
      v22 = v14; /*0x56c1ab*/
      Cell::CreateCrater(v18, v14 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536], v15, v16, 0); /*0x56c1c7*/
      *(_DWORD *)&v7->__pad_3C[8] = -1; /*0x56c1cc*/
      v7->field_11B[3] = 0; /*0x56c1d3*/
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
_DWORD *__thiscall FindNearestObjectAtCell(_DWORD *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edi
  int *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *i; // esi
  int *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int *v18; // eax
  _DWORD *result; // eax
  _DWORD *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  int *v24; // [esp+20h] [ebp-40h]
  _DWORD v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  int v26[3]; // [esp+30h] [ebp-30h] BYREF
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
  if ( (byte_ABDC28 & 1) == 0 ) /*0x56c25b*/
  {
    dword_ABD434 = 0; /*0x56c271*/
    byte_ABDC28 |= 1u; /*0x56c27c*/
    dword_ABD438 = 0xFFFF; /*0x56c295*/
    dword_ABD43C = 1; /*0x56c2a9*/
    dword_ABD444 = 0x10000; /*0x56c2d0*/
    dword_ABD448 = 0x1FFFF; /*0x56c2e4*/
    dword_ABD440 = -65536; /*0x56c314*/
    dword_ABD44C = 65537; /*0x56c31a*/
    dword_ABD450 = -65535; /*0x56c320*/
    dword_ABD454 = -1; /*0x56c326*/
    atexit(nullsub_167); /*0x56c32b*/
  }
  v5 = &dword_ABD434; /*0x56c333*/
  v24 = &dword_ABD434; /*0x56c338*/
  while ( 1 ) /*0x56c343*/
  {
    v6 = *(_WORD *)v5; /*0x56c343*/
    v7 = v4 + *((_WORD *)v5 + 1); /*0x56c351*/
    LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (__int16)(v3 + v6); /*0x56c359*/
    v9 = this->q03D; /*0x56c35c*/
    HIWORD(v23) = v7; /*0x56c362*/
    v10 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v10 < v9 && v10 - v8 < v9 && v11 <= v9 + 2 * this->q03E ) /*0x56c39c*/
    {
      v12 = v8 + (v10 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(this->q13C + 4 * v12)) == 0 ) /*0x56c3c1*/
      {
        g_Map_GlobalCellIndex = v23; /*0x56c3c7*/
        v13 = g_CellClassArray; /*0x56c3cc*/
      }
      for ( i = (_DWORD *)v13[57]; i; i = (_DWORD *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((_BYTE *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*i + 72))(i, v28); /*0x56c457*/
            v18 = Coord::Subtract(v29, *a2 - *v17, a2[1] - v17[1], a2[2] - v17[2]); /*0x56c477*/
            v26[0] = *v18; /*0x56c47e*/
            v26[1] = v18[1]; /*0x56c485*/
            v26[2] = v18[2]; /*0x56c490*/
            v16 = Coord::Length(v26); /*0x56c494*/
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
          v15 = Vector3::Subtract(a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length(v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      LOWORD(v3) = v30; /*0x56c4be*/
    }
    v5 = ++v24; /*0x56c4c7*/
    if ( (int)v24 >= (int)&dbl_ABD458 ) /*0x56c4d4*/
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


// ==== 0x0056C510  Terrain::ConnectivityGraph  this=IUnknown  sig=csp ====
int __thiscall Terrain::ConnectivityGraph(_DWORD *this)
{
  _DWORD *nextArrayIndex; // ebp
  _DWORD *v2; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  void **v7; // esi
  int v8; // edi
  unsigned int i; // eax
  IUnknown *v10; // edi
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
  IUnknown *v38; // eax
  AbstractClass *v39; // ecx
  IUnknown *v40; // ebx
  int v41; // eax
  IUnknown *v42; // ecx
  int j; // edi
  int v44; // eax
  int v45; // esi
  int *v46; // edx
  int v47; // ecx
  int *v48; // edi
  IUnknown *v49; // esi
  int v50; // eax
  IUnknown *v51; // ecx
  CCINIClass *v52; // edx
  int v53; // eax
  int v54; // ecx
  char *v55; // eax
  int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  AbstractClass *v59; // esi
  int v60; // ecx
  CCINIClass *v61; // edi
  AbstractClass *v62; // eax
  int v63; // ecx
  AbstractClass *v64; // esi
  AbstractClass *v65; // ecx
  int v66; // eax
  AbstractClass *v67; // ecx
  int v68; // esi
  _WORD *v69; // edx
  unsigned __int16 v70; // ax
  unsigned __int16 *v71; // edi
  int v72; // ecx
  AbstractClass *v73; // edx
  int v74; // esi
  void **v75; // edi
  int *v77; // [esp+10h] [ebp-54h]
  __int16 v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  AbstractClass *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  AbstractClass *v82; // [esp+20h] [ebp-44h]
  AbstractClass **v83; // [esp+24h] [ebp-40h]
  CCINIClass *v84; // [esp+28h] [ebp-3Ch]
  CCINIClass *v85; // [esp+28h] [ebp-3Ch]
  CCINIClass *v86; // [esp+28h] [ebp-3Ch]
  unsigned __int8 *v87; // [esp+2Ch] [ebp-38h]
  char *v88; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  char *v90; // [esp+2Ch] [ebp-38h]
  _WORD *v91; // [esp+2Ch] [ebp-38h]
  AbstractClass aP3; // [esp+30h] [ebp-34h] BYREF
  int v93; // [esp+54h] [ebp-10h]
  int v94; // [esp+58h] [ebp-Ch]
  int v95; // [esp+5Ch] [ebp-8h]
  int v96; // [esp+60h] [ebp-4h]

  nextArrayIndex = this; /*0x56c515*/
  v81 = -1; /*0x56c51a*/
  *(_DWORD *)&aP3.__pad_0[12] = -1; /*0x56c51e*/
  v2 = (_DWORD *)this->q005; /*0x56c529*/
  v3 = 0; /*0x56c52c*/
  v4 = this->q01A + 4 * this->q06C; /*0x56c52e*/
  aP3.NeedsSaveOrLink = 0; /*0x56c531*/
  v93 = 0; /*0x56c535*/
  LOWORD(v94) = 1; /*0x56c539*/
  aP3.referenceCount = (int)&vt_DynamicVectorClass_enum_PassabilityType; /*0x56c542*/
  v95 = 0; /*0x56c54a*/
  v96 = 300; /*0x56c54e*/
  v5 = v2[2]; /*0x56c556*/
  aP3.nextArrayIndex = (int)this; /*0x56c55c*/
  v87 = (unsigned __int8 *)v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(*v2 + v6) + 12))(*v2 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < v2[2] ); /*0x56c57c*/
  }
  v7 = (void **)(nextArrayIndex + 6); /*0x56c57e*/
  v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *v7 ) /*0x56c586*/
    {
      __3_YAXPAX_Z(*v7); /*0x56c58d*/
      *v7 = 0; /*0x56c595*/
    }
    ++v7; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = nextArrayIndex[26]; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(_WORD *)(i + 2) = 0; /*0x56c5ac*/
  v10 = (IUnknown *)1; /*0x56c5c3*/
  if ( v95 < v93 /*0x56c5eb*/
    || (BYTE1(v94) || !v93)
    && v96 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP3.referenceCount + 8))(
         &aP3.referenceCount,
         v96 + v93,
         0) )
  {
    v11 = v95++; /*0x56c5f6*/
    *((_DWORD *)aP3.NeedsSaveOrLink + v11) = 7; /*0x56c601*/
  }
  v12 = (unsigned __int8 *)nextArrayIndex[26]; /*0x56c608*/
  *(_DWORD *)aP3.__pad_0 = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    v13 = *(_DWORD *)&aP3.__pad_0[12]; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      v14 = *v12; /*0x56c621*/
      *(_DWORD *)&aP3.__pad_0[12] = v14; /*0x56c626*/
      if ( v14 == 7 || *((_WORD *)v12 + 1) ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        dword_ABDE8C = 0; /*0x56c640*/
        v15 = Terrain::FloodFillConnectivity((int)nextArrayIndex, v12, v10, &aP3); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (unsigned __int16)v10; /*0x56c65d*/
        }
        if ( v95 < v93 /*0x56c68e*/
          || (BYTE1(v94) || !v93)
          && v96 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP3.referenceCount + 8))(
               &aP3.referenceCount,
               v96 + v93,
               0) )
        {
          v16 = v95++; /*0x56c69d*/
          *((_DWORD *)aP3.NeedsSaveOrLink + v16) = *(_DWORD *)&aP3.__pad_0[12]; /*0x56c6a8*/
        }
        v10 = (IUnknown *)((char *)v10 + 1); /*0x56c6af*/
        v12 += 4 * *(_DWORD *)aP3.__pad_0; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  nextArrayIndex[19] = (unsigned __int16)v10; /*0x56c6c8*/
  v17 = nextArrayIndex[24] - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    v18 = 16 * v17; /*0x56c6d7*/
    v88 = (char *)(16 * v17); /*0x56c6db*/
    v84 = (CCINIClass *)nextArrayIndex[24]; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (__int16 *)(nextArrayIndex[21] + v18); /*0x56c6ea*/
      if ( *((_BYTE *)v19 + 8) ) /*0x56c6e6*/
      {
        v20 = nextArrayIndex[62] + nextArrayIndex[61] + 1; /*0x56c704*/
        v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          v22 = nextArrayIndex[27]; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        v23 = nextArrayIndex[26]; /*0x56c725*/
        v24 = *(unsigned __int16 *)(v23 + 4 * v21 + 2); /*0x56c72d*/
        v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          v26 = nextArrayIndex[27]; /*0x56c73e*/
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
          v29 = *(_DWORD *)nextArrayIndex[5] + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
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
      v37 = v84 == (CCINIClass *)1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      v84 = (CCINIClass *)((char *)v84 - 1); /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = (IUnknown *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c7ec*/
  v39 = (AbstractClass *)nextArrayIndex[19]; /*0x56c7f1*/
  v40 = v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  aP3.abstractFlags = (int)v40; /*0x56c7fd*/
  if ( (int)v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      LOWORD(v42->field_0) = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      v42 = (IUnknown *)((char *)v42 + 2); /*0x56c80e*/
    }
    while ( v41 < nextArrayIndex[19] ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    v44 = j + *(_DWORD *)nextArrayIndex[5]; /*0x56c81c*/
    v45 = *(_DWORD *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      v46 = (int *)(*(_DWORD *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++*((_WORD *)&v40->field_0 + (unsigned __int16)v47); /*0x56c83b*/
        ++*((_WORD *)&v40->field_0 + HIWORD(v47)); /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = (int *)__2_YAPAXI_Z(4 * nextArrayIndex[19]); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56c87c*/
  {
    v48 = v77; /*0x56c87e*/
    v49 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v48 = __2_YAPAXI_Z(2 * LOWORD(v49->field_0)); /*0x56c891*/
      v49 = (IUnknown *)((char *)v49 + 2); /*0x56c89e*/
      ++v48; /*0x56c8a1*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < nextArrayIndex[19] ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      LOWORD(v51->field_0) = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      v51 = (IUnknown *)((char *)v51 + 2); /*0x56c8c0*/
    }
    while ( v50 < nextArrayIndex[19] ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    v53 = *(_DWORD *)nextArrayIndex[5]; /*0x56c8d0*/
    v54 = *(int *)((char *)v52->sectionHead + v53); /*0x56c8d2*/
    v55 = &v52->__pad_0[v53]; /*0x56c8d6*/
    if ( v54 > 0 ) /*0x56c8da*/
    {
      v90 = (char *)v54; /*0x56c8df*/
      Block = (int *)(*((_DWORD *)v55 + 1) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        v56 = *Block; /*0x56c8f4*/
        v57 = (unsigned __int16)*Block; /*0x56c8fa*/
        v58 = HIWORD(*Block); /*0x56c8ff*/
        *(_WORD *)(v77[v57] + 2 * *((unsigned __int16 *)&v40->field_0 + v57)) = v58; /*0x56c909*/
        *(_WORD *)(v77[(unsigned __int16)v58] + 2 * *((unsigned __int16 *)&v40->field_0 + (unsigned __int16)v58)) = v56; /*0x56c920*/
        ++*((_WORD *)&v40->field_0 + v57); /*0x56c924*/
        ++*((_WORD *)&v40->field_0 + (unsigned __int16)v58); /*0x56c928*/
        v37 = v90 == (char *)1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 = (CCINIClass *)((char *)v52 + 24); /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( (int)v52 < 6144 ); /*0x56c953*/
  v59 = (AbstractClass *)__2_YAPAXI_Z(nextArrayIndex[19]); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = v59; v60 < nextArrayIndex[19]; v59->__pad_0[v60 - 1] = *((_BYTE *)aP3.NeedsSaveOrLink + 4 * v60 - 4) ) /*0x56c972*/
    ++v60; /*0x56c978*/
  v91 = (_WORD *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c993*/
  v61 = (CCINIClass *)dword_82A594; /*0x56c997*/
  v86 = (CCINIClass *)dword_82A594; /*0x56c9a2*/
  v83 = (AbstractClass **)(nextArrayIndex + 6); /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = (AbstractClass *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c9b8*/
    v82 = v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    v63 = 0; /*0x56c9cd*/
    if ( (int)nextArrayIndex[19] > 0 ) /*0x56c9d1*/
    {
      v64 = v62; /*0x56c9d3*/
      do /*0x56c9f3*/
      {
        *(_WORD *)v64->__pad_0 = *(_DWORD *)&v61->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v63++]] != 1; /*0x56c9e7*/
        v64 = (AbstractClass *)((char *)v64 + 2); /*0x56c9ee*/
      }
      while ( v63 < nextArrayIndex[19] ); /*0x56c9f3*/
    }
    v65 = (AbstractClass *)nextArrayIndex[19]; /*0x56c9f5*/
    v66 = 0; /*0x56c9f8*/
    *(_DWORD *)&aP3.__pad_0[8] = 0; /*0x56c9fc*/
    if ( (int)v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      *(_DWORD *)&aP3.__pad_0[12] = v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*(_WORD *)v67->__pad_0 ) /*0x56ca0e*/
        {
          v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *(_WORD *)v67->__pad_0 = v78; /*0x56ca29*/
          aP3.uniqueId = *(_DWORD *)&v61->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            v69 = &v91[--v68]; /*0x56ca45*/
            v70 = *((_WORD *)&v40->field_0 + (unsigned __int16)*v69); /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (unsigned __int16 *)(v77[(unsigned __int16)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              *(_DWORD *)&aP3.__pad_0[4] = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                v72 = *v71; /*0x56ca6d*/
                if ( *(_DWORD *)&v86->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v72]] == aP3.uniqueId /*0x56ca83*/
                  && !*(_WORD *)&v82->__pad_0[2 * v72] )
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  *(_WORD *)&v82->__pad_0[2 * v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --*(_DWORD *)&aP3.__pad_0[4]; /*0x56caa2*/
              }
              while ( *(_DWORD *)&aP3.__pad_0[4] ); /*0x56caa6*/
              v40 = (IUnknown *)aP3.abstractFlags; /*0x56caa8*/
              nextArrayIndex = (_DWORD *)aP3.nextArrayIndex; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = *(AbstractClass **)&aP3.__pad_0[12]; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = *(_DWORD *)&aP3.__pad_0[8]; /*0x56cac5*/
        }
        v73 = (AbstractClass *)nextArrayIndex[19]; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        v67 = (AbstractClass *)((char *)v67 + 2); /*0x56cacd*/
        *(_DWORD *)&aP3.__pad_0[8] = v66; /*0x56cad2*/
        *(_DWORD *)&aP3.__pad_0[12] = v67; /*0x56cad6*/
      }
      while ( v66 < (int)v73 ); /*0x56cada*/
    }
    v61 = (CCINIClass *)((char *)v61 + 32); /*0x56cae8*/
    *(_WORD *)v82->__pad_0 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      __3_YAXPAX_Z(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < nextArrayIndex[19] ); /*0x56cb28*/
  }
  __3_YAXPAX_Z(Blocka); /*0x56cb2f*/
  __3_YAXPAX_Z(v77); /*0x56cb39*/
  __3_YAXPAX_Z(v40); /*0x56cb3f*/
  __3_YAXPAX_Z(v91); /*0x56cb49*/
  aP3.referenceCount = (int)&vt_VectorClass_enum_PassabilityType; /*0x56cb5a*/
  if ( aP3.NeedsSaveOrLink && BYTE1(v94) ) /*0x56cb6b*/
    __3_YAXPAX_Z(aP3.NeedsSaveOrLink); /*0x56cb6e*/
  return v81; /*0x56cb57*/
}


// ==== 0x0056CB80  Cell::DecodeFlags  this=Cell  sig=csp ====
int __thiscall Cell_DecodeFlags(_DWORD *this)
{
  return *this & 0xF | ((unsigned __int16)*this >> 12); /*0x56cb8f*/
}


// ==== 0x0056CB90  Terrain::FloodFillConnectivity  this=IUnknown  sig=csp ====
int __thiscall Terrain::FloodFillConnectivity(int this, unsigned __int8 *a1, IUnknown *aP2, AbstractClass *aP3)
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
  IUnknown *v56; // ebp
  unsigned int v57; // esi
  int v58; // ebx
  int v59; // eax
  unsigned __int8 *v60; // ecx
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
  IUnknown *v85; // [esp+38h] [ebp-4h]
  unsigned __int8 *a1a; // [esp+40h] [ebp+4h]
  AbstractClass *aP3a; // [esp+48h] [ebp+Ch]

  v4 = a1; /*0x56cb94*/
  v5 = *a1; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  v6 = a1; /*0x56cbaf*/
  v7 = a1[1]; /*0x56cbb1*/
  v8 = a1; /*0x56cbb4*/
  v81 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    v9 = v6[1] - v7; /*0x56cbc5*/
    if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((_WORD *)v6 + 1) = (_WORD)aP2; /*0x56cbd6*/
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
    if ( ((int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (unsigned __int16)aP2 ) /*0x56cc34*/
    {
      v13 = (unsigned __int16)aP2 | ((unsigned __int16)v11 << 16); /*0x56cc46*/
      v14 = **(_DWORD **)(this + 20); /*0x56cc5a*/
      v15 = *(_DWORD *)(v14 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      v16 = v14 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
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
      v4 = a1; /*0x56ccb7*/
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
      *((_WORD *)v8 + 1) = (_WORD)aP2; /*0x56cce9*/
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
    if ( ((int)((HIDWORD(v26) ^ v26) - HIDWORD(v26)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (unsigned __int16)aP2 ) /*0x56cd4a*/
    {
      v27 = (unsigned __int16)aP2 | ((unsigned __int16)v25 << 16); /*0x56cd5c*/
      v28 = **(_DWORD **)(this + 20); /*0x56cd70*/
      v29 = *(_DWORD *)(v28 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      v30 = v28 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
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
  *(_DWORD *)aP3->__pad_0 = ((v8 - a1) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = *(_DWORD *)(this + 248) + *(_DWORD *)(this + 244) + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v80 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = (IUnknown *)&v37[v39 - 4]; /*0x56ce2c*/
  a1a = (unsigned __int8 *)v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  aP3a = (AbstractClass *)&v38[-v39 + 4]; /*0x56ce41*/
  if ( &v37[-v40] <= (unsigned __int8 *)aP3a )
  {
    while ( 1 )
    {
      v42 = *((unsigned __int16 *)v41 + 1); /*0x56ce51*/
      if ( v41 >= (unsigned __int8 *)&aP3a[-1].NeedsSaveOrLink )
        v43 = (int)(v41 == (unsigned __int8 *)&aP3a[-1].NeedsSaveOrLink ? &v41[(_DWORD)a1a] : &v41[(_DWORD)a1a - 4]);
      else
        v43 = (int)&v41[v80]; /*0x56ce60*/
      if ( *((_WORD *)v41 + 1) ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v81 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      v44 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56ce98*/
      if ( (int)((HIDWORD(v44) ^ v44) - HIDWORD(v44)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(this, v41, aP2, (AbstractClass *)&v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
LABEL_63:
      if ( v41 > (unsigned __int8 *)aP3a ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (unsigned __int16)aP2 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      v45 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56cefa*/
      if ( (int)((HIDWORD(v45) ^ v45) - HIDWORD(v45)) < 2 || v74 ) /*0x56cf0a*/
      {
        v46 = (unsigned __int16)aP2 | (v42 << 16); /*0x56cf16*/
        v47 = **(_DWORD **)(this + 20); /*0x56cf2a*/
        v48 = *(_DWORD *)(v47 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        v49 = v47 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
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
  v56 = v85; /*0x56cf96*/
  v57 = v84; /*0x56cf9a*/
  while ( (unsigned int)v56 <= v57 ) /*0x56cfa0*/
  {
    v58 = HIWORD(v56->field_0); /*0x56cfab*/
    if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
    {
      v60 = a1a; /*0x56cfbe*/
      if ( v56 != (IUnknown *)(v57 - 4) ) /*0x56cfc2*/
        v60 = (unsigned __int8 *)v80; /*0x56cfc4*/
      v59 = (char *)v56 - (char *)v60; /*0x56cfc8*/
    }
    else
    {
      v59 = (char *)v56 - (char *)a1a + 4; /*0x56cfb9*/
    }
    if ( HIWORD(v56->field_0) ) /*0x56cfa9*/
    {
      if ( v58 != (unsigned __int16)aP2 && v58 != dword_ABDE8C ) /*0x56d03c*/
      {
        v62 = BYTE1(v56->field_0) - *(unsigned __int8 *)(v59 + 1); /*0x56d04e*/
        if ( (int)((HIDWORD(v62) ^ v62) - HIDWORD(v62)) < 2 || v74 ) /*0x56d05e*/
        {
          v63 = (unsigned __int16)aP2 | (v58 << 16); /*0x56d06a*/
          v64 = **(_DWORD **)(this + 20); /*0x56d07e*/
          v65 = *(_DWORD *)(v64 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
          v66 = v64 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
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
      v56 = (IUnknown *)((char *)v56 + 4); /*0x56d0e1*/
    }
    else if ( LOBYTE(v56->field_0) == v81 /*0x56cfef*/
           && (v61 = BYTE1(v56->field_0) - *(unsigned __int8 *)(v59 + 1), (int)((HIDWORD(v61) ^ v61) - HIDWORD(v61)) < 2) )
    {
      v77 += Terrain::FloodFillConnectivity(this, (unsigned __int8 *)v56, aP2, (AbstractClass *)&v83); /*0x56d00f*/
      v56 = (IUnknown *)((char *)v56 + 4 * v83); /*0x56d013*/
    }
    else
    {
      v56 = (IUnknown *)((char *)v56 + 4); /*0x56d01c*/
    }
  }
  return v77; /*0x56d0f0*/
}


// ==== 0x0056D100  MapSeed::CheckTileMatch  this=ObjectClass  sig=csp ====
bool __thiscall MapSeed::CheckTileMatch(
        _DWORD *this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6)
{
  bool IsWithinUsableArea; // al
  int v10; // ecx
  int v11; // eax
  bool v12; // al
  bool v14; // al
  int v15; // edx
  int v16; // ecx
  bool v17; // al
  int TileIndex; // ebp
  bool aP1a; // [esp+18h] [ebp+4h]
  bool v21; // [esp+1Ch] [ebp+8h]

  if ( aP3 == (IUnknown *)-1 ) /*0x56d110*/
    return 1; /*0x56d115*/
  IsWithinUsableArea = LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], aP1, (TechnoClass *)1); /*0x56d128*/
  v10 = SLOWORD(aP1->field_0); /*0x56d12d*/
  aP1a = IsWithinUsableArea; /*0x56d136*/
  v11 = SHIWORD(aP1->field_0); /*0x56d13a*/
  v12 = v11 + v10 > *(int *)&stru_87C374.__pad_14B0[8376] /*0x56d163*/
     && v10 - v11 < *(int *)&stru_87C374.__pad_14B0[8376]
     && v11 - v10 < *(int *)&stru_87C374.__pad_14B0[8376]
     && v11 + v10 <= *(_DWORD *)&stru_87C374.__pad_14B0[8376] + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8380];
  if ( !aP1a && v12 ) /*0x56d16f*/
    return 1; /*0x56d174*/
  v14 = LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], aP2, (TechnoClass *)1); /*0x56d187*/
  v15 = SLOWORD(aP2->field_0); /*0x56d18c*/
  v16 = SHIWORD(aP2->field_0); /*0x56d18f*/
  v21 = v14; /*0x56d199*/
  v17 = v16 + v15 > *(int *)&stru_87C374.__pad_14B0[8376] /*0x56d1c3*/
     && v15 - v16 < *(int *)&stru_87C374.__pad_14B0[8376]
     && v16 - v15 < *(int *)&stru_87C374.__pad_14B0[8376]
     && v16 + v15 <= *(_DWORD *)&stru_87C374.__pad_14B0[8376] + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8380];
  if ( (_BYTE)aP6 && aP1a && !v21 && v17 ) /*0x56d1df*/
    return 1; /*0x56d1e4*/
  TileIndex = MapClass::GetTileIndex(this, aP2, aP3, aP5); /*0x56d205*/
  return MapClass::GetTileIndex(this, aP1, aP3, aP4) == TileIndex; /*0x56d112*/
}


// ==== 0x0056D230  MapClass::GetTileIndex  this=ObjectClass  sig=csp ====
int __thiscall MapClass::GetTileIndex(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  IUnknown *v4; // esi
  IUnknown *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int RegionMap; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // eax
  int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = aP1; /*0x56d238*/
  v5 = (IUnknown *)this; /*0x56d23d*/
  if ( (_BYTE)aP3 )
  {
    v6 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x56d26f*/
      v7 = g_CellClassArray; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      RegionMap = GetRegionMap(this, aP1, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * RegionMap + v5->field_54; /*0x56d2a3*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v4 = (IUnknown *)(16 * RegionMap + v5->field_54); /*0x56d2ac*/
      }
      else
      {
        v10 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = g_CellClassArray; /*0x56d2db*/
          g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x56d2e0*/
        }
        for ( i = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x56d337*/
          v4 = (IUnknown *)(v9 + 4); /*0x56d339*/
        else
          v4 = (IUnknown *)v9; /*0x56d361*/
        v5 = (IUnknown *)this; /*0x56d33b*/
      }
    }
  }
  v14 = SLOWORD(v4->field_0) + SHIWORD(v4->field_0) * (v5->field_F8 + *(_DWORD *)&v5->__pad_EC[8] + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = *(_DWORD *)&v5->__pad_68[4]; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_10[4 * (_DWORD)aP2 + 8] /*0x56d365*/
                             + 2 * *(unsigned __int16 *)(*(_DWORD *)v5->__pad_68 + 4 * v14 + 2));
}


// ==== 0x0056D3F0  ObjectClass::CellToTileIndexMap  this=IUnknown  sig=csp ====
int __thiscall CellToTileIndexMap(int *this, IUnknown *aP1)
{
  int result; // eax
  int v3; // ecx

  result = SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (this->q0F8 + this->q03D + 1); /*0x56d40f*/
  if ( result < 0 ) /*0x56d412*/
    return 0; /*0x56d414*/
  v3 = this->q06C; /*0x56d419*/
  if ( result >= v3 ) /*0x56d41e*/
    return v3 - 1; /*0x56d420*/
  return result; /*0x56d411*/
}


// ==== 0x0056D430  Cell::CoordToIndex  this=IUnknown  sig=csp ====
int __thiscall Cell::CoordToIndex(_DWORD *this, IUnknown *aP1)
{
  return SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (this->q0F8 + this->q03D + 1); /*0x56d450*/
}


// ==== 0x0056D460  Cell::SetRadar  this=Cell  sig=csp ====
char __thiscall Cell::SetRadar(int *this, IUnknown *aP1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edx
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  char result; // al
  bool v9; // zf
  int v10; // esi
  _DWORD *i; // eax
  int v12; // edx
  int v13; // edi
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  _DWORD v18[8]; // [esp+14h] [ebp-20h] BYREF
  IUnknown *aP1a; // [esp+38h] [ebp+4h]

  v2 = SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (this->q0F8 + this->q0F4 + 1); /*0x56d484*/
  if ( v2 >= 0 ) /*0x56d486*/
  {
    v3 = this->q06C; /*0x56d48c*/
    if ( v2 >= v3 ) /*0x56d491*/
      v2 = v3 - 1; /*0x56d493*/
  }
  else
  {
    v2 = 0; /*0x56d488*/
  }
  v4 = this->q068; /*0x56d496*/
  v18[2] = 1; /*0x56d499*/
  v18[6] = -1; /*0x56d4a1*/
  v5 = v4 + 4 * v2; /*0x56d4a9*/
  v6 = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 1; /*0x56d4b7*/
  v18[4] = v6; /*0x56d4bd*/
  v18[0] = -v6; /*0x56d4c3*/
  v18[1] = -(MEMORY[0x87F8E0] + MEMORY[0x87F8DC]); /*0x56d4ce*/
  v18[3] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 2; /*0x56d4d5*/
  v18[5] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC]; /*0x56d4dc*/
  v7 = -1 - v6; /*0x56d4e3*/
  result = *(_BYTE *)v5; /*0x56d4e5*/
  v9 = *(_BYTE *)v5 == 7; /*0x56d4e8*/
  v18[7] = v7; /*0x56d4ea*/
  if ( !v9 ) /*0x56d4ee*/
  {
    v10 = 0; /*0x56d4f0*/
    for ( i = v18; ; ++i ) /*0x56d4f2*/
    {
      v17 = v5 + 4 * *i; /*0x56d502*/
      if ( !*(_BYTE *)v17 ) /*0x56d4f8*/
        break; /*0x56d4f8*/
      if ( ++v10 >= 8 ) /*0x56d50f*/
        return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d50f*/
    }
    if ( !(v5 + 4 * *i) ) /*0x56d4fc*/
      return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d4fc*/
    v12 = this->q018; /*0x56d528*/
    aP1a = 0; /*0x56d52c*/
    v13 = 0; /*0x56d534*/
    v14 = v18; /*0x56d536*/
    v16 = 8; /*0x56d53a*/
    do /*0x56d574*/
    {
      v15 = v5 + 4 * *v14; /*0x56d544*/
      if ( *(_WORD *)(v12 + 2 * *(unsigned __int16 *)(v15 + 2)) != *(_WORD *)(v12 + 2 * v13) && *(_BYTE *)v15 != 7 ) /*0x56d55b*/
      {
        v13 = *(unsigned __int16 *)(v15 + 2); /*0x56d55d*/
        aP1a = (IUnknown *)((char *)aP1a + 1); /*0x56d564*/
      }
      ++v14; /*0x56d56c*/
      --v16; /*0x56d570*/
    }
    while ( v16 ); /*0x56d574*/
    result = (char)aP1a; /*0x56d576*/
    if ( (int)aP1a > 3 || *(_BYTE *)v5 ) /*0x56d580*/
      return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d516*/
    *(_WORD *)(v5 + 2) = *(_WORD *)(v17 + 2); /*0x56d58f*/
  }
  return result; /*0x56d51b*/
}


// ==== 0x0056D5A0  CellClass::DetermineTileConnectivity  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::DetermineTileConnectivity(int *this, IUnknown *aP1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edx
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
  IUnknown *aP1a; // [esp+3Ch] [ebp+4h]

  v2 = SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (this->radSite + this->q03D + 1); /*0x56d5c5*/
  if ( v2 >= 0 ) /*0x56d5c7*/
  {
    v3 = this->CellClass_field_6C; /*0x56d5cd*/
    if ( v2 >= v3 ) /*0x56d5d2*/
      v2 = v3 - 1; /*0x56d5d4*/
  }
  else
  {
    v2 = 0; /*0x56d5c9*/
  }
  v4 = this->q01A; /*0x56d5d7*/
  v15[2] = 1; /*0x56d5e0*/
  v15[6] = -1; /*0x56d5e8*/
  v5 = (unsigned __int8 *)(v4 + 4 * v2); /*0x56d5f0*/
  v6 = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 1; /*0x56d5fa*/
  v7 = *v5; /*0x56d5fe*/
  v15[4] = v6; /*0x56d602*/
  v15[0] = -v6; /*0x56d608*/
  v15[1] = -(MEMORY[0x87F8E0] + MEMORY[0x87F8DC]); /*0x56d613*/
  v15[3] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 2; /*0x56d61a*/
  v15[5] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC]; /*0x56d621*/
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
    aP1a = 0; /*0x56d671*/
    v12 = v15; /*0x56d675*/
    v14 = 8; /*0x56d679*/
    do /*0x56d6b3*/
    {
      if ( *(_WORD *)(this->attachedTag + 2 * *(unsigned __int16 *)&v5[4 * *v12 + 2]) != *(_WORD *)(this->attachedTag + 2 * v11) /*0x56d69a*/
        && v5[4 * *v12] != 7 )
      {
        v11 = *(unsigned __int16 *)&v5[4 * *v12 + 2]; /*0x56d69c*/
        aP1a = (IUnknown *)((char *)aP1a + 1); /*0x56d6a3*/
      }
      ++v12; /*0x56d6ab*/
      --v14; /*0x56d6af*/
    }
    while ( v14 ); /*0x56d6b3*/
    if ( (int)aP1a > 3 ) /*0x56d6ba*/
    {
LABEL_9:
      LOWORD(v6) = Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d654*/
      return v6; /*0x56d659*/
    }
    LOWORD(v6) = *((_WORD *)v10 + 1); /*0x56d6c1*/
    *((_WORD *)v5 + 1) = v6; /*0x56d6c5*/
  }
  return v6; /*0x56d65e*/
}


// ==== 0x0056D6E0  MapClass::ProcessRegion  this=AbstractClass  sig=csp ====
int __thiscall MapClass_ProcessRegion(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int result; // eax
  int v5; // ebp
  void *NeighbourContent; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  __int16 *i; // eax
  int *v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  int v33; // ebp
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  _DWORD *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  v2 = this + 20; /*0x56d6ef*/
  (*(void (__thiscall **)(_DWORD *))(this->q050 + 12))(this + 20); /*0x56d6f4*/
  v3 = this->q0F4; /*0x56d6f7*/
  this->q10C = 1; /*0x56d6fd*/
  this->q110 = v3; /*0x56d707*/
  this->q114 = v3 - 1; /*0x56d710*/
  this->q118 = (v3 << 11) + this->q13C + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext(this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !Cell::IsInRange((int *)v5) && !Cell::IsInRange2((int *)v5) ) /*0x56d74c*/
      {
        if ( InfantryClass::IsInBounds(v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v5, 2u), /*0x56d7b3*/
                InfantryClass::IsInBounds((int)NeighbourContent))
            && (v7 = Cell::GetNeighbourContent((_DWORD *)v5, 6u), InfantryClass::IsInBounds((int)v7))
            || (v8 = Cell::GetNeighbourContent((_DWORD *)v5, 4u), InfantryClass::IsInBounds((int)v8))
            && (v9 = Cell::GetNeighbourContent((_DWORD *)v5, 0), InfantryClass::IsInBounds((int)v9)) )
          {
            v42 = *(_DWORD *)(InfantryClass::GetType((__int16 *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((__int16 *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((__int16 *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(_DWORD *)(InfantryClass::GetType((__int16 *)v5) + 40); /*0x56d7f2*/
              v12 = v2[2]; /*0x56d7f5*/
              v13 = v2[4]; /*0x56d7f8*/
              v14 = *(_DWORD *)(v5 + 36); /*0x56d7fb*/
              LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( v13 < v12 /*0x56d82e*/
                || (*((_BYTE *)v2 + 13) || !v12)
                && (v15 = v2[5], v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v12 + v15, 0) )
              {
                v16 = v2[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                v2[4] = v16 + 1; /*0x56d843*/
                v18 = (_DWORD *)(v2[1] + 16 * v16); /*0x56d84c*/
                *v18 = v14; /*0x56d84e*/
                v18[1] = v11; /*0x56d850*/
                v18[2] = v17; /*0x56d853*/
                v18[3] = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((int *)v5); /*0x56d860*/
      v20 = unk_AA0E28; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(_DWORD *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(unsigned __int8 *)(v5 + 282) ) /*0x56d889*/
        break; /*0x56d889*/
LABEL_42:
      result = LayerClass::CellIteratorNext(this); /*0x56d9e9*/
      v5 = result; /*0x56d9f2*/
      if ( !result ) /*0x56d9f6*/
        return result; /*0x56d9f6*/
    }
    v38 = 0; /*0x56d896*/
    v41 = dword_82A774[v21]; /*0x56d89b*/
    v39 = 1; /*0x56d89f*/
    for ( i = (__int16 *)Cell::GetNeighbourContent((_DWORD *)v5, v41); ; i = (__int16 *)Cell::GetNeighbourContent( /*0x56d8a7*/
                                                                                          v23,
                                                                                          v41) )
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = (int *)i; /*0x56d8b0*/
        v24 = i[18]; /*0x56d8b2*/
        v25 = i[19]; /*0x56d8b6*/
        v26 = this->q0F4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= v26 || v24 - v25 >= v26 || v25 - v24 >= v26 || v43 > v26 + 2 * this->q0F8 ) /*0x56d8f8*/
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
LABEL_36:
          v30 = *((_DWORD *)Cell::GetNeighbourContent(v23, ((_BYTE)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = v2[2]; /*0x56d990*/
          v32 = v2[4]; /*0x56d993*/
          v33 = *(_DWORD *)(v5 + 36); /*0x56d99a*/
          LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( v32 < v31 /*0x56d9c2*/
            || (*((_BYTE *)v2 + 13) || !v31)
            && (v34 = v2[5], v34 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v31 + v34, 0) )
          {
            v35 = v2[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            v2[4] = v35 + 1; /*0x56d9d3*/
            v37 = (_DWORD *)(v2[1] + 16 * v35); /*0x56d9dc*/
            *v37 = v33; /*0x56d9de*/
            v37[1] = v30; /*0x56d9e0*/
            v37[2] = v36; /*0x56d9e3*/
            v37[3] = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        v27 = v23[14]; /*0x56d90d*/
        v28 = unk_AA0E28; /*0x56d910*/
LABEL_27:
        v29 = v27 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == *((unsigned __int8 *)v23 + 282) ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
LABEL_30:
        i = (__int16 *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        v27 = v23[14]; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( (v23[80] & 0x100) != 0 ) /*0x56d960*/
        goto LABEL_30; /*0x56d960*/
      v39 = 0; /*0x56d966*/
    }
  }
  return result; /*0x56d9fd*/
}


// ==== 0x0056DA10  ObjectClass::GetRegionMap  this=AbstractClass  sig=csp ====
int __thiscall GetRegionMap(int *this, IUnknown *aP1, signed int a3, int a4)
{
  IUnknown **i; // ecx
  IUnknown *v6; // eax
  __int64 v7; // rax
  IUnknown *v9; // [esp+14h] [ebp-4h]
  IUnknown *aP1a; // [esp+1Ch] [ebp+4h]

  v9 = (IUnknown *)this->nextArrayIndex; /*0x56da24*/
  if ( a4 >= (int)v9 ) /*0x56da28*/
    return -1; /*0x56dac3*/
  for ( i = (IUnknown **)(16 * a4 + this->q054); ; i += 4 ) /*0x56da38*/
  {
    if ( i[3] ) /*0x56da3a*/
      goto LABEL_12; /*0x56da3f*/
    v6 = i[1]; /*0x56da43*/
    aP1a = *i; /*0x56da4e*/
    if ( (__int16)*i != (__int16)v6 ) /*0x56da52*/
      break; /*0x56da52*/
    LOWORD(v6) = HIWORD(aP1->field_0); /*0x56da5a*/
    if ( (__int16)v6 >= SHIWORD(aP1a) /*0x56da7c*/
      && (__int16)v6 <= SHIWORD(v6)
      && (int)abs32(SLOWORD(aP1->field_0) - (__int16)*i) <= a3 )
    {
      return a4; /*0x56da7c*/
    }
LABEL_12:
    if ( ++a4 >= (int)v9 ) /*0x56dab7*/
      return -1; /*0x56dab7*/
  }
  if ( SLOWORD(aP1->field_0) > (__int16)v6 ) /*0x56da86*/
    goto LABEL_12; /*0x56da86*/
  if ( SLOWORD(aP1->field_0) < (__int16)*i ) /*0x56da8b*/
    goto LABEL_12; /*0x56da8b*/
  v7 = SHIWORD(aP1->field_0) - SHIWORD(aP1a); /*0x56da98*/
  if ( (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > a3 ) /*0x56daa3*/
    goto LABEL_12; /*0x56daa3*/
  return a4; /*0x56dab9*/
}


// ==== 0x0056DAE0  MapClass::ClearRegions  this=AbstractClass  sig=csp ====
char __thiscall MapClass::ClearRegions(int *this, IUnknown *aP1)
{
  int RegionMap; // edi
  char aP1a; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(this); /*0x56dafc*/
    RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  aP1a = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(_BYTE *)(16 * RegionMap + this->q054 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph(this, (int *)(16 * RegionMap + this->q054)); /*0x56db3b*/
      aP1a = 1; /*0x56db43*/
      *(_BYTE *)(this->q054 + 16 * RegionMap + 8) = 0; /*0x56db48*/
    }
    RegionMap = GetRegionMap(this, aP1, 3, RegionMap + 1); /*0x56db59*/
  }
  while ( RegionMap != -1 ); /*0x56db5e*/
  return aP1a; /*0x56db14*/
}


// ==== 0x0056DB70  ObjectClass::InvalidateTileRegionMap  this=ObjectClass  sig=csp ====
char __thiscall InvalidateTileRegionMap(int *this, IUnknown *aP1)
{
  int RegionMap; // ebp
  int v6; // eax
  int v7; // edi
  char v8; // cl
  _BYTE *v9; // eax
  char aP1a; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56db83*/
  if ( RegionMap == -1 ) /*0x56db88*/
  {
    MapClass::ProcessRegion(this); /*0x56db8c*/
    RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56db9d*/
    if ( RegionMap == -1 ) /*0x56dba2*/
      return 0; /*0x56dba6*/
  }
  aP1a = 0; /*0x56dbaf*/
  do /*0x56dc0f*/
  {
    v6 = this->q054; /*0x56dbb7*/
    v7 = 16 * RegionMap; /*0x56dbbc*/
    v8 = *(_BYTE *)(v6 + 16 * RegionMap + 8); /*0x56dbbf*/
    v9 = (_BYTE *)(v6 + 16 * RegionMap + 8); /*0x56dbc3*/
    if ( !v8 ) /*0x56dbc9*/
    {
      *v9 = 1; /*0x56dbcb*/
      BuildTileAdjacencyTable(this, (IUnknown *)(v7 + this->q054)); /*0x56dbd6*/
      if ( !MapSeed::CheckTileMatch( /*0x56dbf0*/
              this,
              (IUnknown *)(this->q054 + v7),
              (IUnknown *)(this->q054 + v7 + 4),
              0,
              0,
              0,
              0) )
        aP1a = 1; /*0x56dbf9*/
    }
    RegionMap = GetRegionMap(this, aP1, 3, RegionMap + 1); /*0x56dc0a*/
  }
  while ( RegionMap != -1 ); /*0x56dc0f*/
  return aP1a; /*0x56dba4*/
}


// ==== 0x0056DC20  LayerClass::Pathfinding_Find  this=LayerClass  sig=csp ====
_DWORD *__fastcall LayerClass::Pathfinding_Find(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6,
        IUnknown *aP7,
        IUnknown *aP8,
        IUnknown *aP9,
        IUnknown *aP10,
        IUnknown *aP11,
        IUnknown *aP12,
        IUnknown *aP13,
        IUnknown *aP14,
        MouseClass *aP15,
        char a17)
{
  IUnknown *v17; // ebx
  Tactical *v18; // edx
  IUnknown *v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  ObjectClass *v29; // eax
  ObjectClass *v30; // esi
  __int64 v31; // rax
  char *v32; // ecx
  __int16 v33; // ax
  int v34; // esi
  TagClass **v35; // eax
  TagClass *v36; // ecx
  unsigned int v37; // eax
  ObjectClass *v38; // eax
  ObjectClass *v39; // esi
  __int64 v40; // rax
  char *v41; // ecx
  __int16 v42; // ax
  int v43; // esi
  TagClass **v44; // eax
  int v45; // edi
  char *v46; // ebp
  unsigned int v47; // eax
  ObjectClass *v48; // eax
  ObjectClass *v49; // esi
  __int64 v50; // rax
  __int16 v51; // ax
  int v52; // esi
  TagClass **v53; // eax
  unsigned int v54; // eax
  ObjectClass *v55; // eax
  ObjectClass *v56; // esi
  __int64 v57; // rax
  __int16 v58; // ax
  int v59; // esi
  TagClass **v60; // eax
  _DWORD *v61; // ebx
  char *v62; // esi
  unsigned __int16 v63; // di
  unsigned __int16 v64; // bp
  TagClass *v65; // eax
  IUnknown *v66; // edx
  IUnknown *v67; // ecx
  IUnknown *v69; // ebx
  int v70; // edi
  TagClass **v71; // eax
  TagClass *v72; // esi
  BuildingTypeClass *v73; // eax
  double v74; // st7
  TagClass *v75; // [esp+18h] [ebp-1DCh] BYREF
  char v76; // [esp+1Fh] [ebp-1D5h]
  int v77; // [esp+20h] [ebp-1D4h]
  int v78; // [esp+24h] [ebp-1D0h]
  TagClass *v79; // [esp+28h] [ebp-1CCh]
  IUnknown *v80; // [esp+2Ch] [ebp-1C8h]
  IUnknown *v81; // [esp+30h] [ebp-1C4h]
  Tactical *i; // [esp+34h] [ebp-1C0h]
  int v83; // [esp+38h] [ebp-1BCh]
  TagClass *v84; // [esp+3Ch] [ebp-1B8h]
  Tactical *v85; // [esp+40h] [ebp-1B4h]
  char *v86; // [esp+44h] [ebp-1B0h]
  TagClass *v87; // [esp+48h] [ebp-1ACh]
  AbstractClass aP1a; // [esp+4Ch] [ebp-1A8h] BYREF
  AbstractClass v89; // [esp+70h] [ebp-184h] BYREF
  IUnknown *v90; // [esp+94h] [ebp-160h]
  int v91[4]; // [esp+98h] [ebp-15Ch] BYREF
  int v92[4]; // [esp+A8h] [ebp-14Ch] BYREF
  int v93[4]; // [esp+B8h] [ebp-13Ch] BYREF
  AbstractClass aP0a; // [esp+C8h] [ebp-12Ch] BYREF
  _DWORD v95[24]; // [esp+134h] [ebp-C0h] BYREF
  _DWORD v96[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = aP0; /*0x56dc27*/
  v18 = (Tactical *)SLOWORD(aP3->field_0); /*0x56dc33*/
  v19 = (IUnknown *)SHIWORD(aP3->field_0); /*0x56dc36*/
  v80 = aP0; /*0x56dc49*/
  v77 = 0; /*0x56dc4d*/
  v85 = v18; /*0x56dc51*/
  v81 = v19; /*0x56dc55*/
  v76 = 0; /*0x56dc59*/
  if ( aP5 == (IUnknown *)0xFFFF ) /*0x56dc5e*/
    aP5 = (IUnknown *)-1; /*0x56dc60*/
  v20 = (unsigned int)v18 + 512 * (_DWORD)v19; /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dc88*/
    v21 = g_CellClassArray; /*0x56dc8d*/
  }
  v83 = *((char *)v21 + 283); /*0x56dc99*/
  if ( (_BYTE)aP7 ) /*0x56dca6*/
  {
    v22 = SLOWORD(aP3->field_0) + (SHIWORD(aP3->field_0) << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = g_CellClassArray; /*0x56dcc6*/
      g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v83 += 4; /*0x56dcdc*/
  }
  v24 = aP0->field_F8 + *(_DWORD *)&aP0->__pad_EC[8]; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (Tactical *)v24; /*0x56dcfb*/
  v78 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_123; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v78; /*0x56dd09*/
    v26 = -v78; /*0x56dd0f*/
    if ( -v78 <= v78 ) /*0x56dd13*/
    {
      v86 = &aP0a.__pad_0[4 * v77 + 12]; /*0x56dd24*/
      do /*0x56dd28*/
      {
        if ( (_BYTE)aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        LOWORD(v87) = (_WORD)v85 + v26; /*0x56dd44*/
        v27 = (__int16)((_WORD)v81 - v25); /*0x56dd49*/
        HIWORD(v87) = (_WORD)v81 - v25; /*0x56dd4c*/
        v75 = v87; /*0x56dd5a*/
        v28 = (__int16)((_WORD)v85 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v78; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v78; /*0x56dd82*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v87; /*0x56dd86*/
        v30 = (ObjectClass *)g_CellClassArray; /*0x56dd8c*/
LABEL_23:
        v92[1] = v27; /*0x56dd91*/
        v92[0] = (__int16)((_WORD)v85 + v26); /*0x56dd9f*/
        v92[2] = (int)aP8; /*0x56ddad*/
        v92[3] = (int)aP9; /*0x56ddb9*/
        if ( Type::CheckAmbiguity(v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !(_BYTE)aP11 /*0x56de4c*/
              || (v31 = v83 - 4 * (((unsigned int)v30[1].lastLayer >> 8) & 1) - SHIBYTE(v30[1].health),
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v30)) /*0x56de9d*/
                && ((_BYTE)aP13 || (v30[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v92, -1)) )
              {
                v32 = v86; /*0x56deaa*/
                v33 = (__int16)v75; /*0x56deae*/
                v34 = v77; /*0x56deb2*/
                *(_DWORD *)v86 = v75; /*0x56deb6*/
                v86 = v32 + 4; /*0x56debb*/
                v77 = v34 + 1; /*0x56dec9*/
                if ( (_BYTE)aP7 /*0x56df18*/
                  || (aP1a.nextArrayIndex = (v33 << 8) + 128,
                      aP1a.referenceCount = (SHIWORD(v75) << 8) + 128,
                      aP1a.NeedsSaveOrLink = 0,
                      v35 = (TagClass **)Terrain::ClimbCheck(&aP0a, (AbstractClass *)&aP1a.nextArrayIndex),
                      v75 == *v35) )
                {
                  v76 = 1; /*0x56df25*/
                }
              }
            }
          }
        }
LABEL_36:
        if ( v77 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( (_BYTE)aP15 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        *(_WORD *)&aP1a.__pad_0[10] = (_WORD)v81 + v25; /*0x56df5a*/
        *(_WORD *)&aP1a.__pad_0[8] = (_WORD)v85 + v26; /*0x56df5f*/
        v36 = (TagClass *)(__int16)((_WORD)v81 + v25); /*0x56df68*/
        v75 = *(TagClass **)&aP1a.__pad_0[8]; /*0x56df70*/
        v37 = (__int16)((_WORD)v85 + v26) + ((_DWORD)v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v78; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v78; /*0x56df98*/
        }
        g_Map_GlobalCellIndex = *(IUnknown **)&aP1a.__pad_0[8]; /*0x56df9c*/
        v39 = (ObjectClass *)g_CellClassArray; /*0x56dfa2*/
LABEL_44:
        v91[1] = (int)v36; /*0x56dfa7*/
        v91[3] = (int)aP9; /*0x56dfbe*/
        v91[0] = (__int16)((_WORD)v85 + v26); /*0x56dfc8*/
        v91[2] = (int)aP8; /*0x56dfcf*/
        if ( Type::CheckAmbiguity(v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !(_BYTE)aP11 /*0x56e062*/
              || (v40 = v83 - 4 * (((unsigned int)v39[1].lastLayer >> 8) & 1) - SHIBYTE(v39[1].health),
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v39)) /*0x56e0b3*/
                && ((_BYTE)aP13 || (v39[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v91, -1)) )
              {
                v41 = v86; /*0x56e0c0*/
                v42 = (__int16)v75; /*0x56e0c4*/
                v43 = v77; /*0x56e0c8*/
                *(_DWORD *)v86 = v75; /*0x56e0cc*/
                v86 = v41 + 4; /*0x56e0d1*/
                v77 = v43 + 1; /*0x56e0df*/
                if ( (_BYTE)aP7 /*0x56e12f*/
                  || (*(_DWORD *)v89.__pad_0 = (v42 << 8) + 128,
                      *(_DWORD *)&v89.__pad_0[4] = (SHIWORD(v75) << 8) + 128,
                      *(_DWORD *)&v89.__pad_0[8] = 0,
                      v44 = (TagClass **)Terrain::ClimbCheck((AbstractClass *)&aP0a.__pad_0[8], &v89),
                      v75 == *v44) )
                {
                  v76 = 1; /*0x56e13c*/
                }
              }
            }
          }
        }
LABEL_57:
        if ( v77 == 24 ) /*0x56e146*/
          goto LABEL_103; /*0x56e146*/
        ++v26; /*0x56e14c*/
      }
      while ( v26 <= v25 ); /*0x56dd28*/
    }
    v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      v46 = &aP0a.__pad_0[4 * v77 + 12]; /*0x56e176*/
      do /*0x56e17d*/
      {
        if ( (_BYTE)aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        LOWORD(v84) = (_WORD)v85 - v78; /*0x56e19c*/
        HIWORD(v84) = v45 + (_WORD)v81; /*0x56e1a1*/
        v75 = v84; /*0x56e1b2*/
        v47 = (__int16)((_WORD)v85 - v78) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = v80; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = v80; /*0x56e1d9*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v84; /*0x56e1dd*/
        v49 = (ObjectClass *)g_CellClassArray; /*0x56e1e3*/
LABEL_67:
        v93[0] = (__int16)((_WORD)v85 - v78); /*0x56e1e8*/
        v93[1] = (__int16)(v45 + (_WORD)v81); /*0x56e1fd*/
        v93[2] = (int)aP8; /*0x56e209*/
        v93[3] = (int)aP9; /*0x56e210*/
        if ( Type::CheckAmbiguity(v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !(_BYTE)aP11 /*0x56e2a5*/
              || (v50 = v83 - 4 * (((unsigned int)v49[1].lastLayer >> 8) & 1) - SHIBYTE(v49[1].health),
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v49)) /*0x56e2f6*/
                && ((_BYTE)aP13 || (v49[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v93, -1)) )
              {
                v51 = (__int16)v75; /*0x56e303*/
                v52 = v77; /*0x56e307*/
                *(_DWORD *)v46 = v75; /*0x56e312*/
                v46 += 4; /*0x56e316*/
                v77 = v52 + 1; /*0x56e31b*/
                if ( (_BYTE)aP7 /*0x56e371*/
                  || (*(_DWORD *)&v89.__pad_0[12] = (v51 << 8) + 128,
                      v89.uniqueId = (SHIWORD(v75) << 8) + 128,
                      v89.abstractFlags = 0,
                      v53 = (TagClass **)Terrain::ClimbCheck(
                                           (AbstractClass *)&aP0a.__pad_0[4],
                                           (AbstractClass *)&v89.__pad_0[12]),
                      v75 == *v53) )
                {
                  v76 = 1; /*0x56e37e*/
                }
              }
            }
          }
        }
LABEL_80:
        if ( v77 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        HIWORD(v79) = v45 + (_WORD)v81; /*0x56e39c*/
        LOWORD(v79) = v78 + (_WORD)v85; /*0x56e3a6*/
        v75 = v79; /*0x56e3b4*/
        v54 = (__int16)(v78 + (_WORD)v85) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = v80; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = v80; /*0x56e3db*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v79; /*0x56e3df*/
        v56 = (ObjectClass *)g_CellClassArray; /*0x56e3e5*/
LABEL_86:
        v89.nextArrayIndex = (__int16)(v78 + (_WORD)v85); /*0x56e3ea*/
        v89.referenceCount = (__int16)(v45 + (_WORD)v81); /*0x56e3ff*/
        v89.NeedsSaveOrLink = aP8; /*0x56e40b*/
        v90 = aP9; /*0x56e412*/
        if ( Type::CheckAmbiguity(v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !(_BYTE)aP11 /*0x56e4a7*/
              || (v57 = v83 - 4 * (((unsigned int)v56[1].lastLayer >> 8) & 1) - SHIBYTE(v56[1].health),
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v56)) /*0x56e4f8*/
                && ((_BYTE)aP13 || (v56[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, &v89.nextArrayIndex, -1)) )
              {
                v58 = (__int16)v75; /*0x56e501*/
                v59 = v77; /*0x56e505*/
                *(_DWORD *)v46 = v75; /*0x56e510*/
                v46 += 4; /*0x56e514*/
                v77 = v59 + 1; /*0x56e519*/
                if ( (_BYTE)aP7 /*0x56e566*/
                  || (*(_DWORD *)&aP1a.__pad_0[12] = (v58 << 8) + 128,
                      aP1a.uniqueId = (SHIWORD(v75) << 8) + 128,
                      aP1a.abstractFlags = 0,
                      v60 = (TagClass **)Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a.__pad_0[12]),
                      v75 == *v60) )
                {
                  v76 = 1; /*0x56e573*/
                }
              }
            }
          }
        }
        if ( v77 == 24 ) /*0x56e57d*/
          goto LABEL_103; /*0x56e57d*/
        ++v45; /*0x56e583*/
      }
      while ( v45 <= v78 - 1 ); /*0x56e17d*/
    }
    if ( v76 ) /*0x56e59c*/
      break; /*0x56e59c*/
    ++v78; /*0x56e5a9*/
  }
  while ( v78 < (int)i ); /*0x56e5ad*/
LABEL_103:
  if ( v77 <= 0 ) /*0x56e5b9*/
  {
LABEL_123:
    aP2->field_0 = (int)g_MapSeedState; /*0x56e7aa*/
    return &aP2->field_0; /*0x56e79a*/
  }
  v80 = 0; /*0x56e5c5*/
  v81 = 0; /*0x56e5c9*/
  v61 = v96; /*0x56e5da*/
  v62 = &aP0a.__pad_0[12]; /*0x56e5e1*/
  i = (Tactical *)v95; /*0x56e5e8*/
  v79 = (TagClass *)v77; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *(_WORD *)v62; /*0x56e5f0*/
    v64 = *((_WORD *)v62 + 1); /*0x56e5f3*/
    *(_DWORD *)&aP1a.__pad_0[12] = (*(__int16 *)v62 << 8) + 128; /*0x56e60a*/
    aP1a.uniqueId = ((__int16)v64 << 8) + 128; /*0x56e622*/
    aP1a.abstractFlags = 0; /*0x56e626*/
    v84 = (TagClass *)*Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a.__pad_0[12]); /*0x56e638*/
    if ( v84 == (TagClass *)__PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = (TagClass *)i; /*0x56e645*/
      v66 = v80; /*0x56e64b*/
      *(_DWORD *)i->__pad_0 = *(_DWORD *)v62; /*0x56e64f*/
      v80 = (IUnknown *)((char *)&v66->field_0 + 1); /*0x56e655*/
      i = (Tactical *)&v65->__pad_0[4]; /*0x56e659*/
    }
    else
    {
      v67 = (IUnknown *)((char *)&v81->field_0 + 1); /*0x56e665*/
      *v61 = *(_DWORD *)v62; /*0x56e666*/
      v81 = v67; /*0x56e668*/
      ++v61; /*0x56e66c*/
    }
    v62 += 4; /*0x56e673*/
    v79 = (TagClass *)((char *)v79 - 1); /*0x56e677*/
  }
  while ( v79 ); /*0x56e67b*/
  if ( (TagClass *)aP14->field_0 == g_MapSeedState ) /*0x56e699*/
  {
    if ( v80 ) /*0x56e6b0*/
      aP2->field_0 = v95[*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % (int)v80]; /*0x56e6c6*/
    else
      aP2->field_0 = v96[*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % (int)v81]; /*0x56e6e5*/
    return &aP2->field_0; /*0x56e6b4*/
  }
  else
  {
    v69 = v80; /*0x56e6f2*/
    if ( !v80 ) /*0x56e6f4*/
      v69 = v81; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    *(_DWORD *)aP1a.__pad_0 = 0; /*0x56e6fa*/
    *(_DWORD *)&aP1a.__pad_0[4] = 1090021888; /*0x56e704*/
    for ( i = (Tactical *)g_MapSeedState; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = (TagClass **)&v95[v70]; /*0x56e718*/
      if ( !v80 ) /*0x56e71f*/
        v71 = (TagClass **)&v96[v70]; /*0x56e721*/
      v72 = *v71; /*0x56e728*/
      v73 = (BuildingTypeClass *)((__int16)*v71 - SLOWORD(aP14->field_0)); /*0x56e73c*/
      v79 = (TagClass *)((_DWORD)v73 * (_DWORD)v73 /*0x56e751*/
                       + (SHIWORD(v72) - SHIWORD(aP14->field_0)) * (SHIWORD(v72) - SHIWORD(aP14->field_0)));
      v74 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v79)); /*0x56e75c*/
      if ( v74 < *(double *)aP1a.__pad_0 ) /*0x56e76d*/
      {
        *(double *)aP1a.__pad_0 = v74; /*0x56e76f*/
        i = (Tactical *)v72; /*0x56e773*/
      }
    }
    aP2->field_0 = (int)i; /*0x56e78e*/
    return &aP2->field_0; /*0x56e780*/
  }
}


// ==== 0x0056E7C0  MapClass::CheckCellsBuildable  this=ObjectClass  sig=csp ====
char __stdcall MapClass::CheckCellsBuildable(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        int aP6,
        IUnknown *aP7,
        IUnknown *aP8)
{
  int v9; // ebp
  int v11; // esi
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  IUnknown *aP6a; // [esp+2Ch] [ebp+1Ch]

  v9 = 0; /*0x56e7c6*/
  if ( (int)aP1 <= 0 ) /*0x56e7cc*/
    return 1; /*0x56e87c*/
  while ( 1 ) /*0x56e7de*/
  {
    v11 = 0; /*0x56e7de*/
    if ( (int)aP2 > 0 ) /*0x56e7e2*/
      break; /*0x56e7e2*/
LABEL_11:
    if ( ++v9 >= (int)aP1 ) /*0x56e876*/
      return 1; /*0x56e876*/
  }
  while ( 1 ) /*0x56e7f5*/
  {
    HIWORD(aP6a) = v11 + HIWORD(aP0->field_0); /*0x56e7f5*/
    LOWORD(aP6a) = v9 + LOWORD(aP0->field_0); /*0x56e7fa*/
    v12 = (__int16)aP6a + (SHIWORD(aP6a) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = g_CellClassArray; /*0x56e828*/
      g_Map_GlobalCellIndex = aP6a; /*0x56e82d*/
    }
    if ( (_BYTE)aP8 && v14[17] != -1 || !Cell::IsBuildable((int)v14, (int)aP3, 0, 0, aP4, aP5, (IUnknown *)aP6, aP7) ) /*0x56e859*/
      return 0; /*0x56e87c*/
    if ( ++v11 >= (int)aP2 ) /*0x56e869*/
      goto LABEL_11; /*0x56e869*/
  }
}


// ==== 0x0056E890  ObjectClass::ProcessDataHouseClass  this=ObjectClass  sig=csp ====
char __thiscall sub_56E890(_DWORD *this, __int16 *a2, _DWORD *a3, int *a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _DWORD *StartCoords; // eax
  int v10; // eax
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_DWORD *)a2 == g_MapSeedState ) /*0x56e8a5*/
    return 0; /*0x56e8a5*/
  v4 = this->q0F4; /*0x56e8b8*/
  v5 = *a2; /*0x56e8be*/
  v6 = a2[1]; /*0x56e8c1*/
  if ( v6 + v5 <= v4 ) /*0x56e8ca*/
    return 0; /*0x56e8ca*/
  if ( v5 - v6 >= v4 ) /*0x56e8d6*/
    return 0; /*0x56e8d6*/
  if ( v6 - v5 >= v4 ) /*0x56e8e0*/
    return 0; /*0x56e8e0*/
  if ( v6 + v5 > v4 + 2 * this->q0F8 ) /*0x56e8ed*/
    return 0; /*0x56e8ed*/
  v7 = 0; /*0x56e8f4*/
  if ( HouseClass_Count <= 0 ) /*0x56e8f8*/
    return 0; /*0x56e961*/
  while ( 1 ) /*0x56e904*/
  {
    v8 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v7]; /*0x56e904*/
    if ( v8 ) /*0x56e909*/
    {
      if ( !*(_BYTE *)(v8 + 501) ) /*0x56e90b*/
      {
        StartCoords = HouseClass::GetStartCoords(*(_DWORD **)&HouseClass_Array->__pad_0[4 * v7], v12); /*0x56e91c*/
        if ( *StartCoords != dword_ABDC10 || StartCoords[1] != dword_ABDC14 || StartCoords[2] != dword_ABDC18 ) /*0x56e945*/
        {
          v10 = sub_4FFD90((_DWORD *)v8, a2); /*0x56e94a*/
          *a4 = v10; /*0x56e952*/
          if ( v10 != -1 ) /*0x56e955*/
            break; /*0x56e955*/
        }
      }
    }
    if ( ++v7 >= HouseClass_Count ) /*0x56e95f*/
      return 0; /*0x56e95f*/
  }
  *a3 = *(_DWORD *)(*(_DWORD *)(v8 + 52) + 184); /*0x56e97d*/
  return 1; /*0x56e961*/
}


// ==== 0x0056E990  Cell::UpdateTileType  this=ObjectClass  sig=csp ====
char __stdcall Cell::UpdateTileType(IUnknown *aP0, IUnknown *aP1, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  ObjectClass *v9; // ebx
  int v10; // edx
  IUnknown *v11; // eax
  char v12; // si
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  _DWORD a1[3]; // [esp+1Ch] [ebp-Ch] BYREF
  IUnknown *aP0a; // [esp+2Ch] [ebp+4h]

  v4 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56e9a9*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56e9bf*/
  {
    v6 = v5; /*0x56e9c1*/
  }
  else
  {
    v6 = g_CellClassArray; /*0x56e9c7*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56e9cc*/
  }
  if ( !(_BYTE)a3 ) /*0x56e9d7*/
  {
    v7 = (_DWORD *)v6[14]; /*0x56e9dd*/
    if ( v7 == (_DWORD *)0xFFFF ) /*0x56e9e5*/
      return (char)v7; /*0x56e9e5*/
    if ( v7 == (_DWORD *)255 ) /*0x56e9f0*/
      return (char)v7; /*0x56e9f0*/
    LOBYTE(v7) = CellClass::GetTerrainFlag( /*0x56ea0a*/
                   *(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * (_DWORD)v7),
                   *((unsigned __int8 *)v6 + 282));
    if ( !(_BYTE)v7 ) /*0x56ea11*/
      return (char)v7; /*0x56ea11*/
    v8 = SHIWORD(aP0->field_0) << 8; /*0x56ea2a*/
    a1[0] = (SLOWORD(aP0->field_0) << 8) + 128; /*0x56ea2d*/
    a1[1] = v8 + 128; /*0x56ea3b*/
    a1[2] = 0; /*0x56ea47*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v20); /*0x56ea4f*/
    v21 -= 15 * *((char *)v6 + 283); /*0x56ea78*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x56ea98*/
  }
  v9 = (ObjectClass *)aP1; /*0x56eaa3*/
  LOBYTE(v7) = (v6[80] & 0x2000) != 0; /*0x56eaaa*/
  if ( (_BYTE)aP1 != (_BYTE)v7 ) /*0x56eaae*/
  {
    v10 = v6[80]; /*0x56eab4*/
    v11 = (IUnknown *)v6[14]; /*0x56eabc*/
    BYTE1(v10) &= ~0x20u; /*0x56eac5*/
    v6[80] = v10 | (((unsigned __int8)aP1 & 1) << 13); /*0x56eace*/
    aP0a = v11; /*0x56ead9*/
    BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56eadd*/
    v12 = 0; /*0x56eae2*/
    v13 = 8; /*0x56eae4*/
    do /*0x56eb67*/
    {
      v14 = v12 & 7; /*0x56eaeb*/
      v15 = 4 * v14 + 9041544; /*0x56eaee*/
      LOWORD(v14) = LOWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 160]; /*0x56eb05*/
      HIWORD(a3) = HIWORD(aP0->field_0) + *(_WORD *)(v15 + 2); /*0x56eb08*/
      LOWORD(a3) = v14; /*0x56eb0d*/
      v16 = SHIWORD(a3) << 9; /*0x56eb1c*/
      v17 = (__int16)v14 + v16 < 0; /*0x56eb1f*/
      v18 = (__int16)v14 + v16; /*0x56eb1f*/
      aP1 = (IUnknown *)a3; /*0x56eb21*/
      if ( v17 || v18 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v18)) == 0 ) /*0x56eb39*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)a3; /*0x56eb3b*/
        v7 = g_CellClassArray; /*0x56eb41*/
      }
      if ( (IUnknown *)v7[14] == aP0a ) /*0x56eb4f*/
        LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&aP1, (IUnknown *)v9, 1); /*0x56eb5d*/
      v12 = (v12 + 1) & 7; /*0x56eb63*/
      --v13; /*0x56eb66*/
    }
    while ( v13 ); /*0x56eb67*/
  }
  return (char)v7; /*0x56eb69*/
}


// ==== 0x0056EB80  Cell::SetTileType  this=ObjectClass  sig=csp ====
char __stdcall Cell::SetTileType(IUnknown *aP0, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3, int a5)
{
  IUnknown *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char result; // al
  IUnknown *v10; // ebp
  int v11; // edx
  IUnknown *v12; // ebx
  char v13; // si
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  _DWORD *v19; // eax
  IUnknown *v20; // [esp-4h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-14h] BYREF
  ObjectClass *v22; // [esp+18h] [ebp-10h]
  _DWORD a1[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = aP0; /*0x56eb87*/
  v6 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56eb99*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) != 0 ) /*0x56ebaf*/
  {
    v8 = v7; /*0x56ebb1*/
  }
  else
  {
    v8 = g_CellClassArray; /*0x56ebb7*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56ebbc*/
  }
  result = a5; /*0x56ebc1*/
  v10 = aP1; /*0x56ebc5*/
  if ( (_BYTE)a5 ) /*0x56ebcb*/
  {
    v12 = aP2; /*0x56ec69*/
  }
  else
  {
    v11 = SHIWORD(aP0->field_0); /*0x56ebd4*/
    a1[0] = (SLOWORD(aP0->field_0) << 8) + 128; /*0x56ebe5*/
    a1[1] = (v11 << 8) + 128; /*0x56ebfe*/
    a1[2] = 0; /*0x56ec02*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v21); /*0x56ec0a*/
    v22 = (ObjectClass *)((char *)v22 - 15 * *((char *)v8 + 283)); /*0x56ec33*/
    result = Cell::CreateCrater(v21 - 128, (int)&v22[-1].fallRate, 256, 256, 0); /*0x56ec53*/
    v12 = (IUnknown *)v8[14]; /*0x56ec58*/
    v10 = aP1; /*0x56ec5b*/
    if ( aP1 == v12 ) /*0x56ec61*/
      return result; /*0x56ec61*/
  }
  if ( (IUnknown *)v8[14] != v10 ) /*0x56ec70*/
  {
    v20 = aP3; /*0x56ec7c*/
    v8[14] = v10; /*0x56ec7d*/
    House::AnnounceUpgrade((int)v8, v20); /*0x56ec80*/
    BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v8 + 9)); /*0x56ec8e*/
    v13 = 0; /*0x56ec93*/
    aP1 = (IUnknown *)8; /*0x56ec95*/
    do /*0x56ed23*/
    {
      v14 = v13 & 7; /*0x56ec9f*/
      v15 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 160]; /*0x56eca2*/
      LOWORD(v14) = HIWORD(v5->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 162]; /*0x56ecb8*/
      LOWORD(a5) = LOWORD(v5->field_0) + v15; /*0x56ecbc*/
      HIWORD(a5) = v14; /*0x56ecc4*/
      v16 = (__int16)v14 << 9; /*0x56ecd0*/
      v17 = (__int16)a5 + v16 < 0; /*0x56ecd3*/
      v18 = (__int16)a5 + v16; /*0x56ecd3*/
      aP0 = (IUnknown *)a5; /*0x56ecd5*/
      if ( v17 || v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v18)) == 0 ) /*0x56eced*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)a5; /*0x56ecef*/
        v19 = g_CellClassArray; /*0x56ecf5*/
      }
      if ( (IUnknown *)v19[14] == v12 ) /*0x56ecfd*/
        Cell::SetTileType((IUnknown *)&aP0, v10, v12, aP3, 1); /*0x56ed11*/
      v13 = (v13 + 1) & 7; /*0x56ed1b*/
      result = (_BYTE)aP1 - 1; /*0x56ed1e*/
      aP1 = (IUnknown *)((char *)aP1 - 1); /*0x56ed1f*/
    }
    while ( aP1 ); /*0x56ed23*/
  }
  return result; /*0x56ed29*/
}


// ==== 0x0056ED40  globalHelper_06ED40  this=AbstractClass  sig=csp ====
char __stdcall globalHelper_06ED40(IUnknown *aP0, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ed49*/
  v3 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x56ed4c*/
  LOWORD(v2) = HIWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x56ed62*/
  LOWORD(a2) = LOWORD(aP0->field_0) + v3; /*0x56ed66*/
  HIWORD(a2) = v2; /*0x56ed6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ed7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x56ed97*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x56ed99*/
    v5 = g_CellClassArray; /*0x56ed9f*/
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
  if ( v7 == dword_ABC1E8 || v7 == unk_AA0E38 ) /*0x56ede9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x56ee37*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56edf3*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56ee03*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainBridgeIndex + g_TerrainSoundTable2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x56ee13*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56ee25*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x56ee08*/
}


// ==== 0x0056EE40  globalHelper_06EE40  this=AbstractClass  sig=csp ====
char __stdcall globalHelper_06EE40(IUnknown *aP0, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ee49*/
  v3 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x56ee4c*/
  LOWORD(v2) = HIWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x56ee62*/
  LOWORD(a2) = LOWORD(aP0->field_0) + v3; /*0x56ee66*/
  HIWORD(a2) = v2; /*0x56ee6e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56ee7d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x56ee97*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x56ee99*/
    v5 = g_CellClassArray; /*0x56ee9f*/
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
  if ( v7 == dword_ABC2B4 || v7 == unk_AA1130 ) /*0x56eee9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x56ef39*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56eef3*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56ef05*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x56ef15*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56ef27*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x56ef0a*/
}


// ==== 0x0056EF50  CellClass::UpdateVariant3  this=AbstractClass  sig=csp ====
char __stdcall CellClass::UpdateVariant3(IUnknown *aP0, IUnknown *aP1)
{
  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  _DWORD *v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x56ef56*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((unsigned __int8)aP1 & 7) + 9041544))->field_0; /*0x56ef77*/
  aP1 = (IUnknown *)v3; /*0x56ef79*/
  *(_DWORD *)v32 = v3; /*0x56ef7d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56ef8c*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56efa2*/
  {
    v6 = v5; /*0x56efa4*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x56efa8*/
    v6 = g_CellClassArray; /*0x56efae*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56efba*/
  {
    v7 = *((_BYTE *)v6 + 286); /*0x56efbc*/
    if ( v7 <= 6u ) /*0x56efc4*/
    {
      *((_BYTE *)v6 + 286) = 7; /*0x56f000*/
    }
    else if ( v7 == 8 ) /*0x56efc8*/
    {
      CellClass::UpdateVariant3((IUnknown *)v32, v2); /*0x56efd2*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56efdd*/
      *((_BYTE *)v6 + 286) = 0; /*0x56efe5*/
      v6[17] = -1; /*0x56eff2*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56eff9*/
    }
  }
  v9 = v6[14] - g_TerrainBridgeIndex + 1; /*0x56f018*/
  if ( v9 == dword_ABC1E8 || v9 == unk_AA0E38 ) /*0x56f027*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v32, (IUnknown *)1, 0); /*0x56f2d7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x56f042*/
  {
    LOBYTE(v9) = Cell::SetTileType( /*0x56f2be*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f04d*/
  {
    CellClass::UpdateVariant3((IUnknown *)v32, v2); /*0x56f05b*/
    if ( (*((_BYTE *)v6 + 282) & 1) != 0 ) /*0x56f067*/
    {
      HIWORD(aP1) = v32[1]; /*0x56f078*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f07d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f08b*/
      if ( v10 < 0x40000 && (v11 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x56f0a1*/
      {
        v12 = v11; /*0x56f0a3*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x56f0ab*/
        g_Map_GlobalCellIndex = aP1; /*0x56f0b0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f0b5*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f0c6*/
      HIWORD(aP1) = v32[1] - 1; /*0x56f0cb*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f0d9*/
      if ( v13 < 0x40000 && (v14 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x56f0ef*/
      {
        v15 = v14; /*0x56f0f1*/
      }
      else
      {
        v15 = g_CellClassArray; /*0x56f0f9*/
        g_Map_GlobalCellIndex = aP1; /*0x56f0fe*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f103*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f114*/
      HIWORD(aP1) = v32[1] + 1; /*0x56f119*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f127*/
      if ( v16 < 0x40000 && (v17 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x56f13d*/
      {
        v18 = v17; /*0x56f13f*/
      }
      else
      {
        v18 = g_CellClassArray; /*0x56f147*/
        g_Map_GlobalCellIndex = aP1; /*0x56f14c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f151*/
      HIWORD(aP1) = v32[1]; /*0x56f15e*/
      v19 = (__int16)(v32[0] - 1); /*0x56f167*/
      v20 = v32[1] << 9; /*0x56f16a*/
      v21 = v19 + v20 < 0; /*0x56f16d*/
      v22 = v19 + v20; /*0x56f16d*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f16f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56f188*/
      {
        v23 = g_CellClassArray; /*0x56f18e*/
        g_Map_GlobalCellIndex = aP1; /*0x56f193*/
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x56f1db*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f1e9*/
      if ( v24 < 0x40000 && (v25 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x56f1ff*/
      {
        v26 = v25; /*0x56f201*/
      }
      else
      {
        v26 = g_CellClassArray; /*0x56f209*/
        g_Map_GlobalCellIndex = aP1; /*0x56f20e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f214*/
      aP1 = (IUnknown *)(*(_DWORD *)v32 - 0x10000); /*0x56f227*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f235*/
      if ( v27 < 0x40000 && (v28 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x56f24b*/
      {
        v29 = v28; /*0x56f24d*/
      }
      else
      {
        v29 = g_CellClassArray; /*0x56f255*/
        g_Map_GlobalCellIndex = aP1; /*0x56f25a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f25f*/
      aP1 = (IUnknown *)(*(_DWORD *)v32 + 0x10000); /*0x56f277*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x56f28a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f291*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x56f2a2*/
    }
    LOBYTE(v9) = Cell::SetTileType( /*0x56f1c0*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x56f1c5*/
}


// ==== 0x0056F2F0  CellClass::UpdateVariant4  this=AbstractClass  sig=csp ====
char __stdcall CellClass::UpdateVariant4(IUnknown *aP0, IUnknown *aP1)
{
  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  _DWORD *v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x56f2f6*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((unsigned __int8)aP1 & 7) + 9041544))->field_0; /*0x56f317*/
  aP1 = (IUnknown *)v3; /*0x56f319*/
  *(_DWORD *)v32 = v3; /*0x56f31d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f32c*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56f342*/
  {
    v6 = v5; /*0x56f344*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x56f348*/
    v6 = g_CellClassArray; /*0x56f34e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56f35a*/
  {
    v7 = *((_BYTE *)v6 + 286); /*0x56f35c*/
    if ( v7 <= 6u ) /*0x56f364*/
    {
      *((_BYTE *)v6 + 286) = 8; /*0x56f3a0*/
    }
    else if ( v7 == 7 ) /*0x56f368*/
    {
      CellClass::UpdateVariant4((IUnknown *)v32, v2); /*0x56f372*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56f37d*/
      *((_BYTE *)v6 + 286) = 0; /*0x56f385*/
      v6[17] = -1; /*0x56f392*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56f399*/
    }
  }
  v9 = v6[14] - g_TerrainBridgeIndex + 1; /*0x56f3b8*/
  if ( v9 == dword_ABC2B4 || v9 == unk_AA1130 ) /*0x56f3c7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v32, (IUnknown *)1, 0); /*0x56f677*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x56f3e2*/
  {
    LOBYTE(v9) = Cell::SetTileType( /*0x56f65e*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f3ed*/
  {
    CellClass::UpdateVariant4((IUnknown *)v32, v2); /*0x56f3fb*/
    if ( (*((_BYTE *)v6 + 282) & 1) != 0 ) /*0x56f407*/
    {
      HIWORD(aP1) = v32[1]; /*0x56f418*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f41d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x56f42b*/
      if ( v10 < 0x40000 && (v11 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x56f441*/
      {
        v12 = v11; /*0x56f443*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x56f44b*/
        g_Map_GlobalCellIndex = aP1; /*0x56f450*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f455*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f466*/
      HIWORD(aP1) = v32[1] - 1; /*0x56f46b*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x56f479*/
      if ( v13 < 0x40000 && (v14 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x56f48f*/
      {
        v15 = v14; /*0x56f491*/
      }
      else
      {
        v15 = g_CellClassArray; /*0x56f499*/
        g_Map_GlobalCellIndex = aP1; /*0x56f49e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f4a3*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f4b4*/
      HIWORD(aP1) = v32[1] + 1; /*0x56f4b9*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x56f4c7*/
      if ( v16 < 0x40000 && (v17 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x56f4dd*/
      {
        v18 = v17; /*0x56f4df*/
      }
      else
      {
        v18 = g_CellClassArray; /*0x56f4e7*/
        g_Map_GlobalCellIndex = aP1; /*0x56f4ec*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f4f1*/
      HIWORD(aP1) = v32[1]; /*0x56f4fe*/
      v19 = (__int16)(v32[0] - 1); /*0x56f507*/
      v20 = v32[1] << 9; /*0x56f50a*/
      v21 = v19 + v20 < 0; /*0x56f50d*/
      v22 = v19 + v20; /*0x56f50d*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f50f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56f528*/
      {
        v23 = g_CellClassArray; /*0x56f52e*/
        g_Map_GlobalCellIndex = aP1; /*0x56f533*/
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x56f57b*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f589*/
      if ( v24 < 0x40000 && (v25 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x56f59f*/
      {
        v26 = v25; /*0x56f5a1*/
      }
      else
      {
        v26 = g_CellClassArray; /*0x56f5a9*/
        g_Map_GlobalCellIndex = aP1; /*0x56f5ae*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f5b4*/
      aP1 = (IUnknown *)(*(_DWORD *)v32 - 0x10000); /*0x56f5c7*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x56f5d5*/
      if ( v27 < 0x40000 && (v28 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x56f5eb*/
      {
        v29 = v28; /*0x56f5ed*/
      }
      else
      {
        v29 = g_CellClassArray; /*0x56f5f5*/
        g_Map_GlobalCellIndex = aP1; /*0x56f5fa*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f5ff*/
      aP1 = (IUnknown *)(*(_DWORD *)v32 + 0x10000); /*0x56f617*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x56f62a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f631*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x56f642*/
    }
    LOBYTE(v9) = Cell::SetTileType( /*0x56f560*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x56f565*/
}


// ==== 0x0056F690  globalHelper_06F690  this=AbstractClass  sig=csp ====
char __stdcall globalHelper_06F690(IUnknown *aP0, IUnknown *aP1)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = (unsigned __int8)aP1 & 7; /*0x56f699*/
  v3 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x56f69c*/
  LOWORD(v2) = HIWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x56f6b2*/
  LOWORD(aP1) = LOWORD(aP0->field_0) + v3; /*0x56f6b6*/
  HIWORD(aP1) = v2; /*0x56f6be*/
  v4 = (__int16)aP1 + ((__int16)v2 << 9); /*0x56f6cd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x56f6e7*/
  {
    g_Map_GlobalCellIndex = aP1; /*0x56f6e9*/
    v5 = g_CellClassArray; /*0x56f6ef*/
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
  if ( v7 == dword_ABC1D0 || v7 == unk_AA1540 ) /*0x56f73e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&aP1, (IUnknown *)1, 0); /*0x56f78c*/
  }
  else if ( v7 == unk_AA1028 ) /*0x56f748*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56f758*/
                   (IUnknown *)&aP1,
                   (IUnknown *)(g_TerrainBridgeIndex + unk_AA1028),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == unk_AA1028 + 2 ) /*0x56f768*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x56f77a*/
                   (IUnknown *)&aP1,
                   (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x56f75d*/
}


// ==== 0x0056F7A0  globalHelper_06F7A0  this=AbstractClass  sig=csp ====
char __stdcall sub_56F7A0(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f7a9*/
  v3 = MEMORY[0x89F688][v2]; /*0x56f7ac*/
  LOWORD(v2) = a1[1] + HIWORD(MEMORY[0x89F688][v2]); /*0x56f7c2*/
  LOWORD(a2) = *a1 + v3; /*0x56f7c6*/
  HIWORD(a2) = v2; /*0x56f7ce*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x56f7dd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v4)) == 0 ) /*0x56f7f7*/
  {
    g_Map_GlobalCellIndex = a2; /*0x56f7f9*/
    v5 = g_CellClassArray; /*0x56f7ff*/
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
  if ( v7 == unk_AA1548 || v7 == unk_AA0740 ) /*0x56f84e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x56f89e*/
  }
  else if ( v7 == unk_AA1028 ) /*0x56f858*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, unk_AA1028 + g_TerrainBridgeIndex + 1, -1, -1, 0); /*0x56f86a*/
  }
  else if ( v7 == unk_AA1028 + 1 ) /*0x56f87a*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, unk_AA1028 + g_TerrainBridgeIndex + 2, -1, -1, 0); /*0x56f88c*/
  }
  return v7; /*0x56f86f*/
}


// ==== 0x0056F8B0  CellClass::UpdateTerrain  this=AbstractClass  sig=csp ====
char __stdcall CellClass::UpdateTerrain(IUnknown *aP0, IUnknown *aP1)
{
  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  unsigned int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x56f8b6*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((unsigned __int8)aP1 & 7) + 9041544))->field_0; /*0x56f8d7*/
  aP1 = (IUnknown *)v3; /*0x56f8d9*/
  *(_DWORD *)v31 = v3; /*0x56f8dd*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56f8ec*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56f902*/
  {
    v6 = v5; /*0x56f904*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x56f908*/
    v6 = g_CellClassArray; /*0x56f90e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56f91a*/
  {
    v7 = *((_BYTE *)v6 + 286); /*0x56f91c*/
    if ( v7 >= 9u ) /*0x56f924*/
    {
      if ( v7 <= 0xFu ) /*0x56f928*/
      {
        *((_BYTE *)v6 + 286) = 17; /*0x56f964*/
      }
      else if ( v7 == 16 ) /*0x56f92c*/
      {
        CellClass::UpdateTerrain((IUnknown *)v31, v2); /*0x56f936*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56f941*/
        *((_BYTE *)v6 + 286) = 0; /*0x56f949*/
        v6[17] = -1; /*0x56f956*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56f95d*/
      }
    }
  }
  v9 = v6[14] - g_TerrainBridgeIndex + 1; /*0x56f97c*/
  if ( v9 == dword_ABC1D0 || v9 == unk_AA1540 ) /*0x56f98b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v31, (IUnknown *)1, 0); /*0x56fc66*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 2 ) /*0x56f9a6*/
  {
    LOBYTE(v9) = Cell::SetTileType( /*0x56fc4d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x56f9b1*/
  {
    CellClass::UpdateTerrain((IUnknown *)v31, v2); /*0x56f9bf*/
    v10 = v31[0] - 1; /*0x56f9d0*/
    if ( *((_BYTE *)v6 + 282) <= 4u ) /*0x56f9d3*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56fb39*/
      HIWORD(aP1) = v31[1]; /*0x56fb3e*/
      v22 = v10 + (v31[1] << 9); /*0x56fb4c*/
      if ( v22 < 0x40000 && (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x56fb62*/
      {
        v24 = v23; /*0x56fb64*/
      }
      else
      {
        v24 = g_CellClassArray; /*0x56fb6c*/
        g_Map_GlobalCellIndex = aP1; /*0x56fb71*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56fb76*/
      aP1 = *(IUnknown **)v31; /*0x56fb88*/
      v25 = v31[0] + (v31[1] << 9); /*0x56fb96*/
      if ( v25 < 0x40000 && (v26 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x56fbac*/
      {
        v27 = v26; /*0x56fbae*/
      }
      else
      {
        v27 = g_CellClassArray; /*0x56fbb6*/
        g_Map_GlobalCellIndex = aP1; /*0x56fbbb*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56fbc0*/
      HIWORD(aP1) = v31[1]; /*0x56fbcf*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fbd4*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x56fbeb*/
      CellClass::UpdateAnimations((int)v28); /*0x56fbf2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x56fc03*/
      LOBYTE(v9) = Cell::SetTileType( /*0x56fc2d*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56f9dd*/
      HIWORD(aP1) = v31[1] - 1; /*0x56f9e8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56f9f3*/
      if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56fa09*/
      {
        v13 = v12; /*0x56fa0b*/
      }
      else
      {
        v13 = g_CellClassArray; /*0x56fa13*/
        g_Map_GlobalCellIndex = aP1; /*0x56fa18*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fa1d*/
      aP1 = (IUnknown *)(*(_DWORD *)v31 - 0x10000); /*0x56fa32*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fa40*/
      if ( v14 < 0x40000 && (v15 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x56fa56*/
      {
        v16 = v15; /*0x56fa58*/
      }
      else
      {
        v16 = g_CellClassArray; /*0x56fa60*/
        g_Map_GlobalCellIndex = aP1; /*0x56fa65*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fa6a*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fa7b*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fa80*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fa8e*/
      if ( v17 < 0x40000 && (v18 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x56faa4*/
      {
        v19 = v18; /*0x56faa6*/
      }
      else
      {
        v19 = g_CellClassArray; /*0x56faae*/
        g_Map_GlobalCellIndex = aP1; /*0x56fab3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fab8*/
      aP1 = (IUnknown *)(*(_DWORD *)v31 - 0x10000); /*0x56facd*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fadb*/
      if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56faf1*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x56faf7*/
        v21 = g_CellClassArray; /*0x56fafc*/
      }
      LOBYTE(v9) = Cell::SetTileType( /*0x56fb27*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x56fb2c*/
}


// ==== 0x0056FC80  CellClass::UpdateTileVariant2  this=AbstractClass  sig=csp ====
char __stdcall CellClass::UpdateTileVariant2(IUnknown *aP0, IUnknown *aP1)
{
  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  unsigned int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x56fc86*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((unsigned __int8)aP1 & 7) + 9041544))->field_0; /*0x56fca7*/
  aP1 = (IUnknown *)v3; /*0x56fca9*/
  *(_DWORD *)v31 = v3; /*0x56fcad*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x56fcbc*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56fcd2*/
  {
    v6 = v5; /*0x56fcd4*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x56fcd8*/
    v6 = g_CellClassArray; /*0x56fcde*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56fcea*/
  {
    v7 = *((_BYTE *)v6 + 286); /*0x56fcec*/
    if ( v7 >= 9u ) /*0x56fcf4*/
    {
      if ( v7 <= 0xFu ) /*0x56fcf8*/
      {
        *((_BYTE *)v6 + 286) = 16; /*0x56fd34*/
      }
      else if ( v7 == 17 ) /*0x56fcfc*/
      {
        CellClass::UpdateTileVariant2((IUnknown *)v31, v2); /*0x56fd06*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56fd11*/
        *((_BYTE *)v6 + 286) = 0; /*0x56fd19*/
        v6[17] = -1; /*0x56fd26*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56fd2d*/
      }
    }
  }
  v9 = v6[14] - g_TerrainBridgeIndex + 1; /*0x56fd4c*/
  if ( v9 == unk_AA1548 || v9 == unk_AA0740 ) /*0x56fd5b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v31, (IUnknown *)1, 0); /*0x570036*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 1 ) /*0x56fd76*/
  {
    LOBYTE(v9) = Cell::SetTileType( /*0x57001d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x56fd81*/
  {
    CellClass::UpdateTileVariant2((IUnknown *)v31, v2); /*0x56fd8f*/
    v10 = v31[0] - 1; /*0x56fda0*/
    if ( *((_BYTE *)v6 + 282) <= 4u ) /*0x56fda3*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56ff09*/
      HIWORD(aP1) = v31[1]; /*0x56ff0e*/
      v22 = v10 + (v31[1] << 9); /*0x56ff1c*/
      if ( v22 < 0x40000 && (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x56ff32*/
      {
        v24 = v23; /*0x56ff34*/
      }
      else
      {
        v24 = g_CellClassArray; /*0x56ff3c*/
        g_Map_GlobalCellIndex = aP1; /*0x56ff41*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56ff46*/
      aP1 = *(IUnknown **)v31; /*0x56ff58*/
      v25 = v31[0] + (v31[1] << 9); /*0x56ff66*/
      if ( v25 < 0x40000 && (v26 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x56ff7c*/
      {
        v27 = v26; /*0x56ff7e*/
      }
      else
      {
        v27 = g_CellClassArray; /*0x56ff86*/
        g_Map_GlobalCellIndex = aP1; /*0x56ff8b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56ff90*/
      HIWORD(aP1) = v31[1]; /*0x56ff9f*/
      LOWORD(aP1) = v31[0] + 1; /*0x56ffa4*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x56ffbb*/
      CellClass::UpdateAnimations((int)v28); /*0x56ffc2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x56ffd3*/
      LOBYTE(v9) = Cell::SetTileType( /*0x56fffd*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56fdad*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fdb8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x56fdc3*/
      if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56fdd9*/
      {
        v13 = v12; /*0x56fddb*/
      }
      else
      {
        v13 = g_CellClassArray; /*0x56fde3*/
        g_Map_GlobalCellIndex = aP1; /*0x56fde8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fded*/
      aP1 = (IUnknown *)(*(_DWORD *)v31 - 0x10000); /*0x56fe02*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56fe10*/
      if ( v14 < 0x40000 && (v15 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x56fe26*/
      {
        v16 = v15; /*0x56fe28*/
      }
      else
      {
        v16 = g_CellClassArray; /*0x56fe30*/
        g_Map_GlobalCellIndex = aP1; /*0x56fe35*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fe3a*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fe4b*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fe50*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x56fe5e*/
      if ( v17 < 0x40000 && (v18 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x56fe74*/
      {
        v19 = v18; /*0x56fe76*/
      }
      else
      {
        v19 = g_CellClassArray; /*0x56fe7e*/
        g_Map_GlobalCellIndex = aP1; /*0x56fe83*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fe88*/
      aP1 = (IUnknown *)(*(_DWORD *)v31 - 0x10000); /*0x56fe9d*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x56feab*/
      if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56fec1*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x56fec7*/
        v21 = g_CellClassArray; /*0x56fecc*/
      }
      LOBYTE(v9) = Cell::SetTileType( /*0x56fef7*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x56fefc*/
}

