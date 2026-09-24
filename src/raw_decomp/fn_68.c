// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00680070  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680070(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680083*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680089*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68008d*/
  if ( result >= 0 ) /*0x680092*/
  {
    v6 = 0; /*0x680098*/
    if ( v9 <= 0 ) /*0x68009c*/
    {
      return 0; /*0x6800e6*/
    }
    else
    {
      while ( 1 ) /*0x68009e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68009e*/
        pPStm = 0; /*0x6800a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6800d6*/
        if ( result < 0 ) /*0x6800db*/
          break; /*0x6800db*/
        if ( ++v6 >= v9 ) /*0x6800e4*/
          return 0; /*0x6800e4*/
      }
    }
  }
  return result; /*0x6800e8*/
}



// ==== 0x006800F0  SaveGame_Start_6800F0  this=-  sig=csp ====
HRESULT __fastcall sub_6800F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680103*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680109*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68010d*/
  if ( result >= 0 ) /*0x680112*/
  {
    v6 = 0; /*0x680118*/
    if ( v9 <= 0 ) /*0x68011c*/
    {
      return 0; /*0x680166*/
    }
    else
    {
      while ( 1 ) /*0x68011e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68011e*/
        pPStm = 0; /*0x680121*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680156*/
        if ( result < 0 ) /*0x68015b*/
          break; /*0x68015b*/
        if ( ++v6 >= v9 ) /*0x680164*/
          return 0; /*0x680164*/
      }
    }
  }
  return result; /*0x680168*/
}



// ==== 0x00680170  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680170(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680183*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680189*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68018d*/
  if ( result >= 0 ) /*0x680192*/
  {
    v6 = 0; /*0x680198*/
    if ( v9 <= 0 ) /*0x68019c*/
    {
      return 0; /*0x6801e6*/
    }
    else
    {
      while ( 1 ) /*0x68019e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68019e*/
        pPStm = 0; /*0x6801a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6801d6*/
        if ( result < 0 ) /*0x6801db*/
          break; /*0x6801db*/
        if ( ++v6 >= v9 ) /*0x6801e4*/
          return 0; /*0x6801e4*/
      }
    }
  }
  return result; /*0x6801e8*/
}



// ==== 0x006801F0  SaveGame_Start_6801F0  this=-  sig=csp ====
HRESULT __fastcall sub_6801F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680203*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680209*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68020d*/
  if ( result >= 0 ) /*0x680212*/
  {
    v6 = 0; /*0x680218*/
    if ( v9 <= 0 ) /*0x68021c*/
    {
      return 0; /*0x680266*/
    }
    else
    {
      while ( 1 ) /*0x68021e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68021e*/
        pPStm = 0; /*0x680221*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680256*/
        if ( result < 0 ) /*0x68025b*/
          break; /*0x68025b*/
        if ( ++v6 >= v9 ) /*0x680264*/
          return 0; /*0x680264*/
      }
    }
  }
  return result; /*0x680268*/
}



// ==== 0x00680270  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680270(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680283*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680289*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68028d*/
  if ( result >= 0 ) /*0x680292*/
  {
    v6 = 0; /*0x680298*/
    if ( v9 <= 0 ) /*0x68029c*/
    {
      return 0; /*0x6802e6*/
    }
    else
    {
      while ( 1 ) /*0x68029e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68029e*/
        pPStm = 0; /*0x6802a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6802d6*/
        if ( result < 0 ) /*0x6802db*/
          break; /*0x6802db*/
        if ( ++v6 >= v9 ) /*0x6802e4*/
          return 0; /*0x6802e4*/
      }
    }
  }
  return result; /*0x6802e8*/
}



// ==== 0x006802F0  SaveGame_Start_6802F0  this=-  sig=csp ====
HRESULT __fastcall sub_6802F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680303*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680309*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68030d*/
  if ( result >= 0 ) /*0x680312*/
  {
    v6 = 0; /*0x680318*/
    if ( v9 <= 0 ) /*0x68031c*/
    {
      return 0; /*0x680366*/
    }
    else
    {
      while ( 1 ) /*0x68031e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68031e*/
        pPStm = 0; /*0x680321*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680356*/
        if ( result < 0 ) /*0x68035b*/
          break; /*0x68035b*/
        if ( ++v6 >= v9 ) /*0x680364*/
          return 0; /*0x680364*/
      }
    }
  }
  return result; /*0x680368*/
}



// ==== 0x00680370  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680370(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680383*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680389*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68038d*/
  if ( result >= 0 ) /*0x680392*/
  {
    v6 = 0; /*0x680398*/
    if ( v9 <= 0 ) /*0x68039c*/
    {
      return 0; /*0x6803e6*/
    }
    else
    {
      while ( 1 ) /*0x68039e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68039e*/
        pPStm = 0; /*0x6803a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6803d6*/
        if ( result < 0 ) /*0x6803db*/
          break; /*0x6803db*/
        if ( ++v6 >= v9 ) /*0x6803e4*/
          return 0; /*0x6803e4*/
      }
    }
  }
  return result; /*0x6803e8*/
}



// ==== 0x006803F0  SaveGame_Start_6803F0  this=-  sig=csp ====
HRESULT __fastcall sub_6803F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680403*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680409*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68040d*/
  if ( result >= 0 ) /*0x680412*/
  {
    v6 = 0; /*0x680418*/
    if ( v9 <= 0 ) /*0x68041c*/
    {
      return 0; /*0x680466*/
    }
    else
    {
      while ( 1 ) /*0x68041e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68041e*/
        pPStm = 0; /*0x680421*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680456*/
        if ( result < 0 ) /*0x68045b*/
          break; /*0x68045b*/
        if ( ++v6 >= v9 ) /*0x680464*/
          return 0; /*0x680464*/
      }
    }
  }
  return result; /*0x680468*/
}



// ==== 0x00680470  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680470(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680483*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680489*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68048d*/
  if ( result >= 0 ) /*0x680492*/
  {
    v6 = 0; /*0x680498*/
    if ( v9 <= 0 ) /*0x68049c*/
    {
      return 0; /*0x6804e6*/
    }
    else
    {
      while ( 1 ) /*0x68049e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68049e*/
        pPStm = 0; /*0x6804a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6804d6*/
        if ( result < 0 ) /*0x6804db*/
          break; /*0x6804db*/
        if ( ++v6 >= v9 ) /*0x6804e4*/
          return 0; /*0x6804e4*/
      }
    }
  }
  return result; /*0x6804e8*/
}



// ==== 0x006804F0  SaveGame_Start_6804F0  this=-  sig=csp ====
HRESULT __fastcall sub_6804F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680503*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680509*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68050d*/
  if ( result >= 0 ) /*0x680512*/
  {
    v6 = 0; /*0x680518*/
    if ( v9 <= 0 ) /*0x68051c*/
    {
      return 0; /*0x680566*/
    }
    else
    {
      while ( 1 ) /*0x68051e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68051e*/
        pPStm = 0; /*0x680521*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680556*/
        if ( result < 0 ) /*0x68055b*/
          break; /*0x68055b*/
        if ( ++v6 >= v9 ) /*0x680564*/
          return 0; /*0x680564*/
      }
    }
  }
  return result; /*0x680568*/
}



// ==== 0x00680570  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680570(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680583*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680589*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68058d*/
  if ( result >= 0 ) /*0x680592*/
  {
    v6 = 0; /*0x680598*/
    if ( v9 <= 0 ) /*0x68059c*/
    {
      return 0; /*0x6805e6*/
    }
    else
    {
      while ( 1 ) /*0x68059e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68059e*/
        pPStm = 0; /*0x6805a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6805d6*/
        if ( result < 0 ) /*0x6805db*/
          break; /*0x6805db*/
        if ( ++v6 >= v9 ) /*0x6805e4*/
          return 0; /*0x6805e4*/
      }
    }
  }
  return result; /*0x6805e8*/
}



// ==== 0x006805F0  SaveGame_Start_6805F0  this=-  sig=csp ====
HRESULT __fastcall sub_6805F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680603*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680609*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68060d*/
  if ( result >= 0 ) /*0x680612*/
  {
    v6 = 0; /*0x680618*/
    if ( v9 <= 0 ) /*0x68061c*/
    {
      return 0; /*0x680666*/
    }
    else
    {
      while ( 1 ) /*0x68061e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68061e*/
        pPStm = 0; /*0x680621*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680656*/
        if ( result < 0 ) /*0x68065b*/
          break; /*0x68065b*/
        if ( ++v6 >= v9 ) /*0x680664*/
          return 0; /*0x680664*/
      }
    }
  }
  return result; /*0x680668*/
}



// ==== 0x00680670  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680670(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680683*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680689*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68068d*/
  if ( result >= 0 ) /*0x680692*/
  {
    v6 = 0; /*0x680698*/
    if ( v9 <= 0 ) /*0x68069c*/
    {
      return 0; /*0x6806e6*/
    }
    else
    {
      while ( 1 ) /*0x68069e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68069e*/
        pPStm = 0; /*0x6806a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6806b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6806bd*/
          break; /*0x6806bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6806c5*/
        if ( result < 0 ) /*0x6806cd*/
          break; /*0x6806cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6806d6*/
        if ( result < 0 ) /*0x6806db*/
          break; /*0x6806db*/
        if ( ++v6 >= v9 ) /*0x6806e4*/
          return 0; /*0x6806e4*/
      }
    }
  }
  return result; /*0x6806e8*/
}



// ==== 0x006806F0  SaveGame_Start_6806F0  this=-  sig=csp ====
HRESULT __fastcall sub_6806F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680703*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680709*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68070d*/
  if ( result >= 0 ) /*0x680712*/
  {
    v6 = 0; /*0x680718*/
    if ( v9 <= 0 ) /*0x68071c*/
    {
      return 0; /*0x680766*/
    }
    else
    {
      while ( 1 ) /*0x68071e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68071e*/
        pPStm = 0; /*0x680721*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680739*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68073d*/
          break; /*0x68073d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680745*/
        if ( result < 0 ) /*0x68074d*/
          break; /*0x68074d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680756*/
        if ( result < 0 ) /*0x68075b*/
          break; /*0x68075b*/
        if ( ++v6 >= v9 ) /*0x680764*/
          return 0; /*0x680764*/
      }
    }
  }
  return result; /*0x680768*/
}



// ==== 0x00680770  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680770(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680783*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680789*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68078d*/
  if ( result >= 0 ) /*0x680792*/
  {
    v6 = 0; /*0x680798*/
    if ( v9 <= 0 ) /*0x68079c*/
    {
      return 0; /*0x6807e6*/
    }
    else
    {
      while ( 1 ) /*0x68079e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68079e*/
        pPStm = 0; /*0x6807a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6807b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6807bd*/
          break; /*0x6807bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6807c5*/
        if ( result < 0 ) /*0x6807cd*/
          break; /*0x6807cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6807d6*/
        if ( result < 0 ) /*0x6807db*/
          break; /*0x6807db*/
        if ( ++v6 >= v9 ) /*0x6807e4*/
          return 0; /*0x6807e4*/
      }
    }
  }
  return result; /*0x6807e8*/
}



// ==== 0x006807F0  SaveGame_Start_6807F0  this=-  sig=csp ====
HRESULT __fastcall sub_6807F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680803*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680809*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68080d*/
  if ( result >= 0 ) /*0x680812*/
  {
    v6 = 0; /*0x680818*/
    if ( v9 <= 0 ) /*0x68081c*/
    {
      return 0; /*0x680866*/
    }
    else
    {
      while ( 1 ) /*0x68081e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68081e*/
        pPStm = 0; /*0x680821*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680839*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68083d*/
          break; /*0x68083d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680845*/
        if ( result < 0 ) /*0x68084d*/
          break; /*0x68084d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680856*/
        if ( result < 0 ) /*0x68085b*/
          break; /*0x68085b*/
        if ( ++v6 >= v9 ) /*0x680864*/
          return 0; /*0x680864*/
      }
    }
  }
  return result; /*0x680868*/
}



// ==== 0x00680870  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680870(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680883*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680889*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68088d*/
  if ( result >= 0 ) /*0x680892*/
  {
    v6 = 0; /*0x680898*/
    if ( v9 <= 0 ) /*0x68089c*/
    {
      return 0; /*0x6808e6*/
    }
    else
    {
      while ( 1 ) /*0x68089e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68089e*/
        pPStm = 0; /*0x6808a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6808b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6808bd*/
          break; /*0x6808bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6808c5*/
        if ( result < 0 ) /*0x6808cd*/
          break; /*0x6808cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6808d6*/
        if ( result < 0 ) /*0x6808db*/
          break; /*0x6808db*/
        if ( ++v6 >= v9 ) /*0x6808e4*/
          return 0; /*0x6808e4*/
      }
    }
  }
  return result; /*0x6808e8*/
}



// ==== 0x006808F0  SaveGame_Start_6808F0  this=-  sig=csp ====
HRESULT __fastcall sub_6808F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680903*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680909*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68090d*/
  if ( result >= 0 ) /*0x680912*/
  {
    v6 = 0; /*0x680918*/
    if ( v9 <= 0 ) /*0x68091c*/
    {
      return 0; /*0x680966*/
    }
    else
    {
      while ( 1 ) /*0x68091e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68091e*/
        pPStm = 0; /*0x680921*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680939*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68093d*/
          break; /*0x68093d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680945*/
        if ( result < 0 ) /*0x68094d*/
          break; /*0x68094d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680956*/
        if ( result < 0 ) /*0x68095b*/
          break; /*0x68095b*/
        if ( ++v6 >= v9 ) /*0x680964*/
          return 0; /*0x680964*/
      }
    }
  }
  return result; /*0x680968*/
}



// ==== 0x00680970  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_680970(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680983*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680989*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68098d*/
  if ( result >= 0 ) /*0x680992*/
  {
    v6 = 0; /*0x680998*/
    if ( v9 <= 0 ) /*0x68099c*/
    {
      return 0; /*0x6809e6*/
    }
    else
    {
      while ( 1 ) /*0x68099e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68099e*/
        pPStm = 0; /*0x6809a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6809b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6809bd*/
          break; /*0x6809bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6809c5*/
        if ( result < 0 ) /*0x6809cd*/
          break; /*0x6809cd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x6809d6*/
        if ( result < 0 ) /*0x6809db*/
          break; /*0x6809db*/
        if ( ++v6 >= v9 ) /*0x6809e4*/
          return 0; /*0x6809e4*/
      }
    }
  }
  return result; /*0x6809e8*/
}



// ==== 0x006809F0  SaveGame_Start_6809F0  this=-  sig=csp ====
HRESULT __fastcall sub_6809F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680a03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680a09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a0d*/
  if ( result >= 0 ) /*0x680a12*/
  {
    v6 = 0; /*0x680a18*/
    if ( v9 <= 0 ) /*0x680a1c*/
    {
      return 0; /*0x680a66*/
    }
    else
    {
      while ( 1 ) /*0x680a1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680a1e*/
        pPStm = 0; /*0x680a21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680a39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680a3d*/
          break; /*0x680a3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680a45*/
        if ( result < 0 ) /*0x680a4d*/
          break; /*0x680a4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680a56*/
        if ( result < 0 ) /*0x680a5b*/
          break; /*0x680a5b*/
        if ( ++v6 >= v9 ) /*0x680a64*/
          return 0; /*0x680a64*/
      }
    }
  }
  return result; /*0x680a68*/
}



// ==== 0x00680A70  SaveGame_Start_680A70  this=-  sig=csp ====
HRESULT __fastcall sub_680A70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680a83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680a89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a8d*/
  if ( result >= 0 ) /*0x680a92*/
  {
    v6 = 0; /*0x680a98*/
    if ( v9 <= 0 ) /*0x680a9c*/
    {
      return 0; /*0x680ae6*/
    }
    else
    {
      while ( 1 ) /*0x680a9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680a9e*/
        pPStm = 0; /*0x680aa1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680ab9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680abd*/
          break; /*0x680abd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ac5*/
        if ( result < 0 ) /*0x680acd*/
          break; /*0x680acd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680ad6*/
        if ( result < 0 ) /*0x680adb*/
          break; /*0x680adb*/
        if ( ++v6 >= v9 ) /*0x680ae4*/
          return 0; /*0x680ae4*/
      }
    }
  }
  return result; /*0x680ae8*/
}



// ==== 0x00680AF0  SaveGame_Start_680AF0  this=-  sig=csp ====
HRESULT __fastcall sub_680AF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680b03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680b09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b0d*/
  if ( result >= 0 ) /*0x680b12*/
  {
    v6 = 0; /*0x680b18*/
    if ( v9 <= 0 ) /*0x680b1c*/
    {
      return 0; /*0x680b66*/
    }
    else
    {
      while ( 1 ) /*0x680b1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680b1e*/
        pPStm = 0; /*0x680b21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680b39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680b3d*/
          break; /*0x680b3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680b45*/
        if ( result < 0 ) /*0x680b4d*/
          break; /*0x680b4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680b56*/
        if ( result < 0 ) /*0x680b5b*/
          break; /*0x680b5b*/
        if ( ++v6 >= v9 ) /*0x680b64*/
          return 0; /*0x680b64*/
      }
    }
  }
  return result; /*0x680b68*/
}



// ==== 0x00680B70  SaveGame_Start_680B70  this=-  sig=csp ====
HRESULT __fastcall sub_680B70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680b83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680b89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b8d*/
  if ( result >= 0 ) /*0x680b92*/
  {
    v6 = 0; /*0x680b98*/
    if ( v9 <= 0 ) /*0x680b9c*/
    {
      return 0; /*0x680be6*/
    }
    else
    {
      while ( 1 ) /*0x680b9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680b9e*/
        pPStm = 0; /*0x680ba1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680bb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680bbd*/
          break; /*0x680bbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680bc5*/
        if ( result < 0 ) /*0x680bcd*/
          break; /*0x680bcd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680bd6*/
        if ( result < 0 ) /*0x680bdb*/
          break; /*0x680bdb*/
        if ( ++v6 >= v9 ) /*0x680be4*/
          return 0; /*0x680be4*/
      }
    }
  }
  return result; /*0x680be8*/
}



// ==== 0x00680BF0  SaveGame_Start_680BF0  this=-  sig=csp ====
HRESULT __fastcall sub_680BF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680c03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680c09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c0d*/
  if ( result >= 0 ) /*0x680c12*/
  {
    v6 = 0; /*0x680c18*/
    if ( v9 <= 0 ) /*0x680c1c*/
    {
      return 0; /*0x680c66*/
    }
    else
    {
      while ( 1 ) /*0x680c1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680c1e*/
        pPStm = 0; /*0x680c21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680c39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680c3d*/
          break; /*0x680c3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680c45*/
        if ( result < 0 ) /*0x680c4d*/
          break; /*0x680c4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680c56*/
        if ( result < 0 ) /*0x680c5b*/
          break; /*0x680c5b*/
        if ( ++v6 >= v9 ) /*0x680c64*/
          return 0; /*0x680c64*/
      }
    }
  }
  return result; /*0x680c68*/
}



// ==== 0x00680C70  SaveGame_Start_680C70  this=-  sig=csp ====
HRESULT __fastcall sub_680C70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680c83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680c89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c8d*/
  if ( result >= 0 ) /*0x680c92*/
  {
    v6 = 0; /*0x680c98*/
    if ( v9 <= 0 ) /*0x680c9c*/
    {
      return 0; /*0x680ce6*/
    }
    else
    {
      while ( 1 ) /*0x680c9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680c9e*/
        pPStm = 0; /*0x680ca1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680cb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680cbd*/
          break; /*0x680cbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680cc5*/
        if ( result < 0 ) /*0x680ccd*/
          break; /*0x680ccd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680cd6*/
        if ( result < 0 ) /*0x680cdb*/
          break; /*0x680cdb*/
        if ( ++v6 >= v9 ) /*0x680ce4*/
          return 0; /*0x680ce4*/
      }
    }
  }
  return result; /*0x680ce8*/
}



// ==== 0x00680CF0  SaveGame_Start_680CF0  this=-  sig=csp ====
HRESULT __fastcall sub_680CF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680d03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680d09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d0d*/
  if ( result >= 0 ) /*0x680d12*/
  {
    v6 = 0; /*0x680d18*/
    if ( v9 <= 0 ) /*0x680d1c*/
    {
      return 0; /*0x680d66*/
    }
    else
    {
      while ( 1 ) /*0x680d1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680d1e*/
        pPStm = 0; /*0x680d21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680d39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680d3d*/
          break; /*0x680d3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680d45*/
        if ( result < 0 ) /*0x680d4d*/
          break; /*0x680d4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680d56*/
        if ( result < 0 ) /*0x680d5b*/
          break; /*0x680d5b*/
        if ( ++v6 >= v9 ) /*0x680d64*/
          return 0; /*0x680d64*/
      }
    }
  }
  return result; /*0x680d68*/
}



// ==== 0x00680D70  SaveGame_Start_680D70  this=-  sig=csp ====
HRESULT __fastcall sub_680D70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680d83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680d89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d8d*/
  if ( result >= 0 ) /*0x680d92*/
  {
    v6 = 0; /*0x680d98*/
    if ( v9 <= 0 ) /*0x680d9c*/
    {
      return 0; /*0x680de6*/
    }
    else
    {
      while ( 1 ) /*0x680d9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680d9e*/
        pPStm = 0; /*0x680da1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680db9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680dbd*/
          break; /*0x680dbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680dc5*/
        if ( result < 0 ) /*0x680dcd*/
          break; /*0x680dcd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680dd6*/
        if ( result < 0 ) /*0x680ddb*/
          break; /*0x680ddb*/
        if ( ++v6 >= v9 ) /*0x680de4*/
          return 0; /*0x680de4*/
      }
    }
  }
  return result; /*0x680de8*/
}



// ==== 0x00680DF0  SaveGame_Start_680DF0  this=-  sig=csp ====
HRESULT __fastcall sub_680DF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680e03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680e09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e0d*/
  if ( result >= 0 ) /*0x680e12*/
  {
    v6 = 0; /*0x680e18*/
    if ( v9 <= 0 ) /*0x680e1c*/
    {
      return 0; /*0x680e66*/
    }
    else
    {
      while ( 1 ) /*0x680e1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680e1e*/
        pPStm = 0; /*0x680e21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680e39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680e3d*/
          break; /*0x680e3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680e45*/
        if ( result < 0 ) /*0x680e4d*/
          break; /*0x680e4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680e56*/
        if ( result < 0 ) /*0x680e5b*/
          break; /*0x680e5b*/
        if ( ++v6 >= v9 ) /*0x680e64*/
          return 0; /*0x680e64*/
      }
    }
  }
  return result; /*0x680e68*/
}



// ==== 0x00680E70  SaveGame_Start_680E70  this=-  sig=csp ====
HRESULT __fastcall sub_680E70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680e83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680e89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e8d*/
  if ( result >= 0 ) /*0x680e92*/
  {
    v6 = 0; /*0x680e98*/
    if ( v9 <= 0 ) /*0x680e9c*/
    {
      return 0; /*0x680ee6*/
    }
    else
    {
      while ( 1 ) /*0x680e9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680e9e*/
        pPStm = 0; /*0x680ea1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680eb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680ebd*/
          break; /*0x680ebd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ec5*/
        if ( result < 0 ) /*0x680ecd*/
          break; /*0x680ecd*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680ed6*/
        if ( result < 0 ) /*0x680edb*/
          break; /*0x680edb*/
        if ( ++v6 >= v9 ) /*0x680ee4*/
          return 0; /*0x680ee4*/
      }
    }
  }
  return result; /*0x680ee8*/
}



// ==== 0x00680EF0  SaveGame_Start_680EF0  this=-  sig=csp ====
HRESULT __fastcall sub_680EF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->lpVtbl; /*0x680f03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680f09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680f0d*/
  if ( result >= 0 ) /*0x680f12*/
  {
    v6 = 0; /*0x680f18*/
    if ( v9 <= 0 ) /*0x680f1c*/
    {
      return 0; /*0x680f66*/
    }
    else
    {
      while ( 1 ) /*0x680f1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680f1e*/
        pPStm = 0; /*0x680f21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680f39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680f3d*/
          break; /*0x680f3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680f45*/
        if ( result < 0 ) /*0x680f4d*/
          break; /*0x680f4d*/
        result = pPStm->lpVtbl->Release(pPStm); /*0x680f56*/
        if ( result < 0 ) /*0x680f5b*/
          break; /*0x680f5b*/
        if ( ++v6 >= v9 ) /*0x680f64*/
          return 0; /*0x680f64*/
      }
    }
  }
  return result; /*0x680f68*/
}



// ==== 0x00680F70  Game::validateScenario  this=Game  sig=csp ====
int __thiscall sub_680F70(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x680f78*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      v5 = a2; /*0x680faf*/
      if ( *this ) /*0x680fac*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680fba*/
      *this = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *this ) /*0x680f93*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680f9c*/
      *this = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *this; /*0x680fc7*/
    if ( *this ) /*0x680fc7*/
    {
      *this = 0; /*0x680fcd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }
}



// ==== 0x00680FF0  GameState::Reset  this=GameState  sig=csp ====
_DWORD *__thiscall GameState::Reset(_DWORD *this)
{
  *this = 0; /*0x680ff4*/
  this->q001 = 0; /*0x680ff6*/
  this->q062 = -1; /*0x680ff9*/
  this->q063 = 0; /*0x681003*/
  this->q0FC = 0; /*0x681009*/
  this->q001 = 0; /*0x68100f*/
  *((_WORD *)this + 132) = 0; /*0x681013*/
  *((_BYTE *)this + 400) = 0; /*0x68101a*/
  *((_BYTE *)this + 660) = 0; /*0x681020*/
  *((_BYTE *)this + 724) = 0; /*0x681026*/
  this->q0F6 = 0; /*0x68102c*/
  this->q0F7 = 0; /*0x681032*/
  this->q0F8 = 0; /*0x681038*/
  this->q0F9 = 0; /*0x68103e*/
  this->q0FA = 0; /*0x681044*/
  this->q0FB = 0; /*0x68104a*/
  return this; /*0x681050*/
}



// ==== 0x00681060  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681060(_DWORD *this, int a2)
{
  this->vtable2 = a2; /*0x681064*/
  return a2; /*0x681067*/
}



// ==== 0x00681070  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_681070(_DWORD *this)
{
  return this->vtable2; /*0x681073*/
}



// ==== 0x00681080  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681080(_DWORD *this, int a2)
{
  *this = a2; /*0x681084*/
  return a2; /*0x681086*/
}



// ==== 0x00681090  ObjectClass::ReadPointerFromECX3  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX3(void *this)
{
  return *(_DWORD *)this; /*0x681092*/
}



// ==== 0x006810A0  ObjectClass::Map_Save_6810A0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall sub_6810A0(wchar_t *this, wchar_t *Source)
{
  this->isSelected = 0; /*0x6810a4*/
  return wcsncpy(this + 4, Source, 0x7Fu); /*0x6810bc*/
}



// ==== 0x006810C0  ObjectClass::?raw_name_type_info__QBEPBDXZ  this=ObjectClass  sig=csp ====
const char *__thiscall _raw_name_type_info__QBEPBDXZ(type_info *this)
{
  return (char *)this + 8; /*0x6810c3*/
}



// ==== 0x006810D0  ObjectClass::Map_Save_6810D0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall sub_6810D0(wchar_t *this, wchar_t *Source)
{
  this->q0C3 = 0; /*0x6810d4*/
  return wcsncpy(this + 132, Source, 0x3Fu); /*0x6810ef*/
}



// ==== 0x00681100  LoadOptions::GetData  this=LoadOptions  sig=csp ====
char *__thiscall sub_681100(char *this)
{
  return this + 264; /*0x681106*/
}



// ==== 0x00681110  ObjectClass::Map_Save  this=ScenarioClass  sig=csp ====
int __thiscall sub_681110(_DWORD *this, int a2)
{
  this->q188 = a2; /*0x681114*/
  return a2; /*0x68111a*/
}



// ==== 0x00681120  LoadOptions::GetFlag98  this=LoadOptions  sig=csp ====
int __thiscall sub_681120(_DWORD *this)
{
  return this->q188; /*0x681126*/
}



// ==== 0x00681130  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681130(_DWORD *this, int a2)
{
  this->q18C = a2; /*0x681134*/
  return a2; /*0x68113a*/
}



// ==== 0x00681140  LoadOptions::GetFlag99  this=LoadOptions  sig=csp ====
int __thiscall sub_681140(_DWORD *this)
{
  return this->q18C; /*0x681146*/
}



// ==== 0x00681180  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_681180(char *this)
{
  return this + 400; /*0x681186*/
}



// ==== 0x006811B0  ObjectClass::method_6811B0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811B0(char *this)
{
  return this + 660; /*0x6811b6*/
}



// ==== 0x006811C0  ObjectClass::Map_Save_6811C0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811C0(char *this, char *Source)
{
  this->q3D7 = 0; /*0x6811c4*/
  return strncpy(this + 724, Source, 0x103u); /*0x6811e0*/
}



// ==== 0x006811F0  ObjectClass::method_6811F0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811F0(char *this)
{
  return this + 724; /*0x6811f6*/
}



// ==== 0x00681200  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681200(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->u32_3D8 = *a2; /*0x681206*/
  result = a2[1]; /*0x68120c*/
  this->q0F7 = result; /*0x68120f*/
  return result; /*0x681215*/
}



// ==== 0x00681220  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681220(_DWORD *this, _DWORD *a2)
{
  *a2 = this->u32_3D8; /*0x68122a*/
  a2[1] = this->q0F7; /*0x681232*/
  return a2; /*0x681235*/
}



// ==== 0x00681240  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681240(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->q0F8 = *a2; /*0x681246*/
  result = a2[1]; /*0x68124c*/
  this->q3E4 = result; /*0x68124f*/
  return result; /*0x681255*/
}



// ==== 0x00681260  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681260(_DWORD *this, _DWORD *a2)
{
  *a2 = this->q0F8; /*0x68126a*/
  a2[1] = this->q3E4; /*0x681272*/
  return a2; /*0x681275*/
}



// ==== 0x00681280  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681280(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->q3E8 = *a2; /*0x681286*/
  result = a2[1]; /*0x68128c*/
  this->q0FB = result; /*0x68128f*/
  return result; /*0x681295*/
}



// ==== 0x006812A0  ObjectClass::method_6812A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6812A0(_DWORD *this, _DWORD *a2)
{
  *a2 = this->q3E8; /*0x6812aa*/
  a2[1] = this->q0FB; /*0x6812b2*/
  return a2; /*0x6812b5*/
}



// ==== 0x006812C0  ObjectClass::Map_Save_6812C0  this=ObjectClass  sig=csp ====
int __thiscall sub_6812C0(_DWORD *this, int a2)
{
  this->qFC0 = a2; /*0x6812c4*/
  return a2; /*0x6812ca*/
}



// ==== 0x006812D0  LoadOptions::GetFlag252  this=LoadOptions  sig=csp ====
int __thiscall sub_6812D0(_DWORD *this)
{
  return this->q3F0; /*0x6812d6*/
}



// ==== 0x006812E0  GameOptions::SaveLoad  this=GameOptions  sig=csp ====
int __thiscall GameOptions_SaveLoad(int this, int *a2)
{
  int v2; // edi
  int (__stdcall **v5)(int, void *, int **); // eax
  int String; // ebx
  int v7; // ebp
  int v8; // ebp
  int Bool; // esi

  v2 = (int)a2; /*0x6812e4*/
  if ( !a2 ) /*0x6812ec*/
    return -2147467261; /*0x6812f7*/
  v5 = (int (__stdcall **)(int, void *, int **))*a2; /*0x6812fa*/
  a2 = 0; /*0x681307*/
  if ( (*v5)(v2, &unk_7F7D00, &a2) >= 0 ) /*0x681313*/
  {
    String = GameOptions_Load_6829A0(a2, 2, this + 8); /*0x68132b*/
    if ( String < 0 ) /*0x68132f*/
    {
      if ( a2 ) /*0x681337*/
        goto LABEL_77; /*0x681337*/
      return String; /*0x681337*/
    }
    String = GameOptions_Load_6829A0(a2, 3, this + 264); /*0x681361*/
    if ( String < 0 ) /*0x681365*/
    {
      if ( a2 ) /*0x68136d*/
        goto LABEL_77; /*0x68136d*/
      return String; /*0x68136d*/
    }
    String = PropertyBagReadCOM(a2, 9, *(_DWORD *)(this + 4)); /*0x681394*/
    if ( String < 0 ) /*0x681398*/
    {
      if ( a2 ) /*0x6813a0*/
        goto LABEL_77; /*0x6813a0*/
      return String; /*0x6813a0*/
    }
    String = PropertyBagReadCOM(a2, 16, *(_DWORD *)this); /*0x6813c6*/
    if ( String < 0 ) /*0x6813ca*/
    {
      if ( a2 ) /*0x6813d2*/
        goto LABEL_77; /*0x6813d2*/
      return String; /*0x6813d2*/
    }
    String = SetBufferParamsCOM(a2, 12, (int *)(this + 984)); /*0x6813fc*/
    if ( String < 0 ) /*0x681400*/
    {
      if ( a2 ) /*0x681408*/
        goto LABEL_77; /*0x681408*/
      return String; /*0x681408*/
    }
    String = SetBufferParamsCOM(a2, 13, (int *)(this + 1000)); /*0x681432*/
    if ( String < 0 ) /*0x681436*/
    {
      if ( a2 ) /*0x68143e*/
        goto LABEL_77; /*0x68143e*/
      return String; /*0x68143e*/
    }
    String = SetBufferParamsCOM(a2, 10, (int *)(this + 992)); /*0x681468*/
    if ( String < 0 ) /*0x68146c*/
    {
      if ( a2 ) /*0x681474*/
        goto LABEL_77; /*0x681474*/
      return String; /*0x681474*/
    }
    String = ReadStringCOM(a2, 18, (LPCCH)(this + 724)); /*0x68149e*/
    if ( String < 0 ) /*0x6814a2*/
    {
      if ( a2 ) /*0x6814aa*/
        goto LABEL_77; /*0x6814aa*/
      return String; /*0x6814aa*/
    }
    v7 = ReadStringCOM(a2, 4, (LPCCH)(this + 660)); /*0x6814d4*/
    if ( v7 < 0 ) /*0x6814d8*/
    {
      if ( a2 ) /*0x6814e0*/
        (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6814e5*/
      return v7; /*0x6814ee*/
    }
    String = ReadStringCOM(a2, 8, (LPCCH)(this + 660)); /*0x681500*/
    if ( String < 0 ) /*0x681504*/
    {
      if ( a2 ) /*0x68150c*/
        goto LABEL_77; /*0x68150c*/
      return String; /*0x68150c*/
    }
    String = PropertyBagReadCOM(a2, 100, *(_DWORD *)(this + 396)); /*0x681536*/
    if ( String < 0 ) /*0x68153a*/
    {
      if ( a2 ) /*0x681542*/
        goto LABEL_77; /*0x681542*/
      return String; /*0x681542*/
    }
    String = PropertyBagReadCOM(a2, 101, *(_DWORD *)(this + 392)); /*0x68156c*/
    if ( String < 0 ) /*0x681570*/
    {
      if ( a2 ) /*0x681578*/
        goto LABEL_77; /*0x681578*/
      return String; /*0x681578*/
    }
    String = PropertyBagReadCOM(a2, 102, *(_DWORD *)(this + 1008)); /*0x6815a2*/
    if ( String < 0 ) /*0x6815a6*/
    {
      if ( a2 ) /*0x6815ae*/
        goto LABEL_77; /*0x6815ae*/
      return String; /*0x6815ae*/
    }
  }
  String = GameOptions_Load(v2, 2, (wchar_t *)(this + 8)); /*0x6815d1*/
  if ( String < 0 ) /*0x6815d5*/
  {
    if ( a2 ) /*0x6815dd*/
      goto LABEL_77; /*0x6815dd*/
    return String; /*0x6815dd*/
  }
  String = GameOptions_Load(v2, 3, (wchar_t *)(this + 264)); /*0x681603*/
  if ( String < 0 ) /*0x681607*/
  {
    if ( a2 ) /*0x68160f*/
      goto LABEL_77; /*0x68160f*/
    return String; /*0x68160f*/
  }
  String = PropertyReadBoolCOM(v2, 9, *(_DWORD *)(this + 4)); /*0x681632*/
  if ( String < 0 ) /*0x681636*/
  {
    if ( a2 ) /*0x68163e*/
      goto LABEL_77; /*0x68163e*/
    return String; /*0x68163e*/
  }
  String = PropertyReadBoolCOM(v2, 16, *(_DWORD *)this); /*0x681660*/
  if ( String < 0 ) /*0x681664*/
  {
    if ( a2 ) /*0x68166c*/
      goto LABEL_77; /*0x68166c*/
    return String; /*0x68166c*/
  }
  String = WriteIntCOM(v2, 12, this + 984); /*0x681692*/
  if ( String < 0 ) /*0x681696*/
  {
    if ( a2 ) /*0x68169e*/
      goto LABEL_77; /*0x68169e*/
    return String; /*0x68169e*/
  }
  String = WriteIntCOM(v2, 13, this + 1000); /*0x6816c4*/
  if ( String < 0 ) /*0x6816c8*/
  {
    if ( a2 ) /*0x6816d0*/
      goto LABEL_77; /*0x6816d0*/
    return String; /*0x6816d0*/
  }
  String = WriteIntCOM(v2, 10, this + 992); /*0x6816f6*/
  if ( String < 0 ) /*0x6816fa*/
  {
    if ( a2 ) /*0x681702*/
      goto LABEL_77; /*0x681702*/
    return String; /*0x681702*/
  }
  String = WriteStringCOM(v2, 18, (LPCCH)(this + 724)); /*0x681728*/
  if ( String < 0 ) /*0x68172c*/
  {
    if ( a2 ) /*0x681734*/
      goto LABEL_77; /*0x681734*/
    return String; /*0x681734*/
  }
  v8 = WriteStringCOM(v2, 4, (LPCCH)(this + 660)); /*0x68175a*/
  if ( v8 < 0 ) /*0x68175e*/
  {
    if ( a2 ) /*0x681766*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68176b*/
    return v8; /*0x681774*/
  }
  String = WriteStringCOM(v2, 8, (LPCCH)(this + 660)); /*0x681782*/
  if ( String < 0 ) /*0x681786*/
  {
    if ( a2 ) /*0x68178e*/
      goto LABEL_77; /*0x68178e*/
    return String; /*0x68178e*/
  }
  String = PropertyReadBoolCOM(v2, 100, *(_DWORD *)(this + 396)); /*0x6817b0*/
  if ( String < 0 ) /*0x6817b4*/
  {
    if ( a2 ) /*0x6817bc*/
    {
LABEL_77:
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817be*/
      return String; /*0x6817ca*/
    }
    return String; /*0x6817bc*/
  }
  String = PropertyReadBoolCOM(v2, 101, *(_DWORD *)(this + 392)); /*0x6817de*/
  if ( String < 0 ) /*0x6817e2*/
  {
    if ( a2 ) /*0x6817ea*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817ef*/
    return String; /*0x6817f8*/
  }
  Bool = PropertyReadBoolCOM(v2, 102, *(_DWORD *)(this + 1008)); /*0x68180c*/
  if ( Bool >= 0 ) /*0x681814*/
  {
    if ( a2 ) /*0x68182b*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x681830*/
    return 0; /*0x681836*/
  }
  else
  {
    if ( a2 ) /*0x681818*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68181d*/
    return Bool; /*0x681820*/
  }
}



// ==== 0x00681840  ObjectClass::ScenarioPropertyReadCOM  this=ObjectClass  sig=csp ====
int __thiscall sub_681840(int this, int a2)
{
  int (__stdcall **v4)(int, void *, int *); // eax
  int Scenario; // esi
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // eax
  _UNKNOWN **v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  _UNKNOWN **v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  _UNKNOWN **v18; // ecx
  int v19; // eax
  int (__stdcall **v20)(int, void *, int *); // edx
  _UNKNOWN **v21; // eax
  int v22; // esi
  int (__stdcall **v23)(int, void *, int *); // esi
  _UNKNOWN **v24; // eax
  int (__stdcall **v25)(int, void *, int *); // esi
  _UNKNOWN **v26; // eax
  int v27; // eax
  int (__stdcall **v28)(int, void *, int *); // esi
  _UNKNOWN **v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // [esp+124h] [ebp-30Ch] BYREF
  int v33; // [esp+128h] [ebp-308h] BYREF
  int (__stdcall **v34)(int, void *, int *); // [esp+12Ch] [ebp-304h]
  CHAR MultiByteStr[256]; // [esp+130h] [ebp-300h] BYREF
  wchar_t Source[256]; // [esp+230h] [ebp-200h] BYREF

  if ( !a2 ) /*0x681855*/
    return -2147467261; /*0x681866*/
  v4 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681869*/
  v33 = 0; /*0x681877*/
  if ( (*v4)(a2, &unk_7F7D00, &v33) >= 0 && Map_Read_6823D0(v33, 2, Source) >= 0 ) /*0x6818a1*/
  {
    wcscpy((wchar_t *)(this + 8), Source); /*0x6818b3*/
    Scenario = Map_Read_6823D0(v33, 3, Source); /*0x6818d1*/
    if ( Scenario < 0 ) /*0x6818d5*/
    {
      if ( v33 ) /*0x6818dd*/
        goto LABEL_43; /*0x6818dd*/
      return Scenario; /*0x6818dd*/
    }
    wcscpy((wchar_t *)(this + 264), Source); /*0x681907*/
    Scenario = PropertyReadScenarioCOM(v33, 9, (_DWORD *)(this + 4)); /*0x681921*/
    if ( Scenario < 0 ) /*0x681925*/
    {
      if ( v33 ) /*0x68192d*/
        goto LABEL_43; /*0x68192d*/
      return Scenario; /*0x68192d*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 16, (_DWORD *)this); /*0x681957*/
    if ( Scenario < 0 ) /*0x68195b*/
    {
      if ( v33 ) /*0x681963*/
        goto LABEL_43; /*0x681963*/
      return Scenario; /*0x681963*/
    }
    Scenario = ReadBufferCOM(v33, 12, (_DWORD *)(this + 984)); /*0x681993*/
    if ( Scenario < 0 ) /*0x681997*/
    {
      if ( v33 ) /*0x68199f*/
        goto LABEL_43; /*0x68199f*/
      return Scenario; /*0x68199f*/
    }
    Scenario = ReadBufferCOM(v33, 13, (_DWORD *)(this + 1000)); /*0x6819cf*/
    if ( Scenario < 0 ) /*0x6819d3*/
    {
      if ( v33 ) /*0x6819db*/
        goto LABEL_43; /*0x6819db*/
      return Scenario; /*0x6819db*/
    }
    Scenario = ReadBufferCOM(v33, 10, (_DWORD *)(this + 992)); /*0x681a0b*/
    if ( Scenario < 0 ) /*0x681a0f*/
    {
      if ( v33 ) /*0x681a17*/
        goto LABEL_43; /*0x681a17*/
      return Scenario; /*0x681a17*/
    }
    Scenario = Map_Read_6822F0(v33, 18, MultiByteStr); /*0x681a45*/
    if ( Scenario < 0 ) /*0x681a49*/
    {
      if ( v33 ) /*0x681a51*/
        goto LABEL_43; /*0x681a51*/
      return Scenario; /*0x681a51*/
    }
    v6 = v33; /*0x681a87*/
    strcpy((char *)(this + 724), MultiByteStr); /*0x681a8e*/
    Scenario = Map_Read_6822F0(v6, 4, MultiByteStr); /*0x681aa6*/
    if ( Scenario < 0 ) /*0x681aaa*/
    {
      if ( v33 ) /*0x681ab2*/
        goto LABEL_43; /*0x681ab2*/
      return Scenario; /*0x681ab2*/
    }
    v7 = v33; /*0x681ae8*/
    strcpy((char *)(this + 660), MultiByteStr); /*0x681aef*/
    Scenario = PropertyReadScenarioCOM(v7, 100, (_DWORD *)(this + 396)); /*0x681b09*/
    if ( Scenario < 0 ) /*0x681b0d*/
    {
      if ( v33 ) /*0x681b15*/
        goto LABEL_43; /*0x681b15*/
      return Scenario; /*0x681b15*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 101, (_DWORD *)(this + 392)); /*0x681b45*/
    if ( Scenario < 0 ) /*0x681b49*/
    {
      if ( v33 ) /*0x681b51*/
        goto LABEL_43; /*0x681b51*/
      return Scenario; /*0x681b51*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 102, (_DWORD *)(this + 1008)); /*0x681b81*/
    if ( Scenario < 0 ) /*0x681b85*/
    {
      if ( v33 ) /*0x681b91*/
        goto LABEL_43; /*0x681b91*/
      return Scenario; /*0x681b91*/
    }
LABEL_107:
    if ( v33 ) /*0x682138*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x68213d*/
    return 0; /*0x682143*/
  }
  Scenario = Map_Read_682240(a2, 2, Source); /*0x681bbe*/
  if ( Scenario < 0 ) /*0x681bc2*/
  {
    if ( v33 ) /*0x681bca*/
      goto LABEL_43; /*0x681bca*/
    return Scenario; /*0x681bca*/
  }
  wcscpy((wchar_t *)(this + 8), Source); /*0x681bf1*/
  Scenario = Map_Read_682240(a2, 3, Source); /*0x681c0b*/
  if ( Scenario < 0 ) /*0x681c0f*/
  {
    if ( v33 ) /*0x681c17*/
    {
LABEL_43:
      (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681c1d*/
      return Scenario; /*0x681c2f*/
    }
    return Scenario; /*0x681c17*/
  }
  wcscpy((wchar_t *)(this + 264), Source); /*0x681c41*/
  *(_DWORD *)(this + 4) = 0; /*0x681c52*/
  v32 = 0; /*0x681c54*/
  ReleaseCOM(&v32); /*0x681c58*/
  v32 = 0; /*0x681c5d*/
  v8 = 0; /*0x681c61*/
  v9 = &unk_83D658; /*0x681c63*/
  while ( *v9 != 9 ) /*0x681c6b*/
  {
    v9 += 2; /*0x681c6d*/
    ++v8; /*0x681c70*/
    if ( (int)v9 >= (int)g_INI_Key_GameType ) /*0x681c76*/
    {
      v10 = 0; /*0x681c78*/
      goto LABEL_48; /*0x681c78*/
    }
  }
  v10 = (&off_83D65C)[2 * v8]; /*0x681cdb*/
LABEL_48:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681c7a*/
               a2,
               v10,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681c95*/
  {
    v11 = COMObject::ValidatePtr(&v32); /*0x681c97*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, this + 4, 4, 0); /*0x681ca7*/
  }
  ReleaseCOM(&v32); /*0x681caf*/
  if ( Scenario < 0 ) /*0x681cb8*/
  {
    if ( v33 ) /*0x681cc0*/
      goto LABEL_91; /*0x681cc0*/
    return Scenario; /*0x681fca*/
  }
  *(_DWORD *)this = 0; /*0x681ce8*/
  v32 = 0; /*0x681cea*/
  ReleaseCOM(&v32); /*0x681cee*/
  v32 = 0; /*0x681cf3*/
  v12 = 0; /*0x681cf7*/
  v13 = &unk_83D658; /*0x681cf9*/
  while ( *v13 != 16 ) /*0x681d01*/
  {
    v13 += 2; /*0x681d03*/
    ++v12; /*0x681d06*/
    if ( (int)v13 >= (int)g_INI_Key_GameType ) /*0x681d0c*/
    {
      v14 = 0; /*0x681d0e*/
      goto LABEL_58; /*0x681d0e*/
    }
  }
  v14 = (&off_83D65C)[2 * v12]; /*0x681d6c*/
LABEL_58:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681d10*/
               a2,
               v14,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681d29*/
  {
    v15 = COMObject::ValidatePtr(&v32); /*0x681d2b*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v15 + 12))(v15, this, 4, 0); /*0x681d3a*/
  }
  ReleaseCOM(&v32); /*0x681d42*/
  if ( Scenario < 0 ) /*0x681d49*/
  {
    if ( v33 ) /*0x681d51*/
      goto LABEL_91; /*0x681d51*/
    return Scenario; /*0x681d51*/
  }
  v32 = 0; /*0x681d81*/
  *(_DWORD *)(this + 984) = 0; /*0x681d85*/
  *(_DWORD *)(this + 988) = 0; /*0x681d87*/
  ReleaseCOM(&v32); /*0x681d8a*/
  v32 = 0; /*0x681d8f*/
  v16 = 0; /*0x681d93*/
  v17 = &unk_83D658; /*0x681d95*/
  while ( *v17 != 12 ) /*0x681d9d*/
  {
    v17 += 2; /*0x681d9f*/
    ++v16; /*0x681da2*/
    if ( (int)v17 >= (int)g_INI_Key_GameType ) /*0x681da8*/
    {
      v18 = 0; /*0x681daa*/
      goto LABEL_68; /*0x681daa*/
    }
  }
  v18 = (&off_83D65C)[2 * v16]; /*0x681e0b*/
LABEL_68:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681dac*/
               a2,
               v18,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681dc7*/
  {
    v19 = COMObject::ValidatePtr(&v32); /*0x681dc9*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v19 + 12))(v19, this + 984, 8, 0); /*0x681dd9*/
  }
  ReleaseCOM(&v32); /*0x681de1*/
  if ( Scenario < 0 ) /*0x681de8*/
  {
    if ( v33 ) /*0x681df0*/
      goto LABEL_91; /*0x681df0*/
    return Scenario; /*0x681df0*/
  }
  v32 = 0; /*0x681e20*/
  *(_DWORD *)(this + 1000) = 0; /*0x681e24*/
  *(_DWORD *)(this + 1004) = 0; /*0x681e26*/
  ReleaseCOM(&v32); /*0x681e29*/
  v20 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681e2e*/
  v32 = 0; /*0x681e3f*/
  v34 = v20; /*0x681e43*/
  v21 = ScenarioClass::LookupMethod((void *)0xD); /*0x681e47*/
  v22 = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v34[4])(a2, v21, 0, 16, 0, &v32); /*0x681e55*/
  if ( v22 >= 0 ) /*0x681e59*/
  {
    if ( !v32 ) /*0x681e61*/
      WinAPI::Wrapper(-2147467261); /*0x681e68*/
    v22 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v32 + 12))(v32, this + 1000, 8, 0); /*0x681e7c*/
  }
  ReleaseCOM(&v32); /*0x681e82*/
  if ( v22 >= 0 ) /*0x681e8b*/
  {
    v32 = 0; /*0x681eb4*/
    *(_DWORD *)(this + 992) = 0; /*0x681eb8*/
    *(_DWORD *)(this + 996) = 0; /*0x681eba*/
    ReleaseCOM(&v32); /*0x681ebd*/
    v23 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681ec2*/
    v32 = 0; /*0x681ed5*/
    v24 = ScenarioClass::LookupMethod((void *)0xA); /*0x681edd*/
    Scenario = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v23[4])(a2, v24, 0, 16, 0, &v32); /*0x681ee7*/
    if ( Scenario >= 0 ) /*0x681eeb*/
    {
      if ( !v32 ) /*0x681ef3*/
        WinAPI::Wrapper(-2147467261); /*0x681efa*/
      Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v32 + 12))(v32, this + 992, 8, 0); /*0x681f0e*/
    }
    ReleaseCOM(&v32); /*0x681f14*/
    if ( Scenario >= 0 ) /*0x681f1b*/
    {
      Scenario = Map_Read(a2, 18, MultiByteStr); /*0x681f4d*/
      if ( Scenario >= 0 ) /*0x681f51*/
      {
        strcpy((char *)(this + 724), MultiByteStr); /*0x681f92*/
        Scenario = Map_Read(a2, 4, MultiByteStr); /*0x681faa*/
        if ( Scenario < 0 ) /*0x681fae*/
        {
          if ( v33 ) /*0x681fb6*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681fbb*/
          return Scenario; /*0x681fbb*/
        }
        v32 = 0; /*0x681fe2*/
        strcpy((char *)(this + 660), MultiByteStr); /*0x681ff3*/
        *(_DWORD *)(this + 396) = 0; /*0x682006*/
        ReleaseCOM(&v32); /*0x68200c*/
        v25 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x682011*/
        v32 = 0; /*0x682024*/
        v26 = ScenarioClass::LookupMethod((void *)0x64); /*0x68202c*/
        Scenario = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v25[4])(a2, v26, 0, 16, 0, &v32); /*0x682036*/
        if ( Scenario >= 0 ) /*0x68203e*/
        {
          v27 = COMObject::ValidatePtr(&v32); /*0x682040*/
          Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v27 + 12))(v27, this + 396, 4, 0); /*0x682050*/
        }
        ReleaseCOM(&v32); /*0x682058*/
        if ( Scenario >= 0 ) /*0x68205f*/
        {
          v32 = 0; /*0x682088*/
          *(_DWORD *)(this + 392) = 0; /*0x682090*/
          ReleaseCOM(&v32); /*0x682096*/
          v28 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x68209b*/
          v32 = 0; /*0x6820ae*/
          v29 = ScenarioClass::LookupMethod((void *)0x65); /*0x6820b6*/
          v30 = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v28[4])(a2, v29, 0, 16, 0, &v32); /*0x6820c0*/
          if ( v30 >= 0 ) /*0x6820c8*/
          {
            v31 = COMObject::ValidatePtr(&v32); /*0x6820ca*/
            v30 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v31 + 12))(v31, this + 392, 4, 0); /*0x6820da*/
          }
          ReleaseCOM(&v32); /*0x6820e2*/
          if ( v30 < 0 || (v30 = Map_Read_6824B0(a2, 102, this + 1008), v30 < 0) ) /*0x682118*/
          {
            Map_Read_683050(&v33); /*0x6820ef*/
            return v30; /*0x682100*/
          }
          goto LABEL_107; /*0x682118*/
        }
        if ( v33 ) /*0x682067*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x68206c*/
      }
      else if ( v33 ) /*0x681f59*/
      {
LABEL_91:
        (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681f5f*/
        return Scenario; /*0x681f71*/
      }
    }
    else if ( v33 ) /*0x681f23*/
    {
      goto LABEL_91; /*0x681f23*/
    }
    return Scenario; /*0x68207b*/
  }
  if ( v33 ) /*0x681e93*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681e98*/
  return v22; /*0x681857*/
}



// ==== 0x00682150  Map_Read  this=-  sig=csp ====
int __stdcall sub_682150(int a1, int a2, LPSTR lpMultiByteStr)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  WCHAR *i; // edi
  int v9; // [esp+28h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+2Ch] [ebp-100h] BYREF

  v9 = 0; /*0x682167*/
  *lpMultiByteStr = 0; /*0x68216f*/
  v3 = 0; /*0x682172*/
  v4 = &unk_83D658; /*0x682174*/
  while ( *v4 != a2 ) /*0x68217b*/
  {
    v4 += 2; /*0x68217d*/
    ++v3; /*0x682180*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682186*/
    {
      v5 = 0; /*0x682188*/
      goto LABEL_5; /*0x682188*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x6821c5*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a1 + 16))(a1, v5, 0, 16, 0, &v9); /*0x68218a*/
  if ( v6 >= 0 ) /*0x6821a7*/
  {
    for ( i = WideCharStr; ; ++i ) /*0x6821ce*/
    {
      if ( !v9 ) /*0x6821d8*/
        WinAPI::Wrapper(-2147467261); /*0x6821df*/
      v6 = (*(int (__stdcall **)(int, WCHAR *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, i, 2, 0); /*0x6821f3*/
      if ( v6 < 0 ) /*0x6821f7*/
        break; /*0x6821f7*/
      if ( !*i ) /*0x6821fd*/
      {
        WideCharToMultiByte(0, 0, WideCharStr, -1, lpMultiByteStr, 127, 0, 0); /*0x682216*/
        if ( v9 ) /*0x682222*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682227*/
        return v6; /*0x682227*/
      }
    }
  }
  if ( !v9 ) /*0x6821af*/
    return v6; /*0x68222a*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x6821b4*/
  return v6; /*0x6821b9*/
}



// ==== 0x00682240  Map_Read  this=-  sig=csp ====
int __stdcall sub_682240(int a1, int a2, _WORD *a3)
{
  _WORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682246*/
  a3 = 0; /*0x68224a*/
  v4 = 0; /*0x682252*/
  *v3 = 0; /*0x682254*/
  v5 = &unk_83D658; /*0x682259*/
  while ( *v5 != a2 ) /*0x682260*/
  {
    v5 += 2; /*0x682262*/
    ++v4; /*0x682265*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x68226b*/
    {
      v6 = 0; /*0x68226d*/
      goto LABEL_5; /*0x68226d*/
    }
  }
  v6 = (&off_83D65C)[2 * v4]; /*0x6822a0*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _WORD **))(*(_DWORD *)a1 + 16))( /*0x68226f*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682289*/
  {
    while ( 1 ) /*0x6822a9*/
    {
      if ( !a3 ) /*0x6822af*/
        WinAPI::Wrapper(-2147467261); /*0x6822b6*/
      v7 = (*(int (__stdcall **)(_WORD *, _WORD *, int, _DWORD))(*(_DWORD *)a3 + 12))(a3, v3, 2, 0); /*0x6822ca*/
      if ( v7 < 0 ) /*0x6822ce*/
        break; /*0x6822ce*/
      if ( !*v3 ) /*0x6822d4*/
      {
        if ( a3 ) /*0x6822e1*/
          (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x6822e6*/
        return v7; /*0x6822e6*/
      }
      ++v3; /*0x6822d6*/
    }
  }
  if ( !a3 ) /*0x682291*/
    return v7; /*0x6822e9*/
  (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x682296*/
  return v7; /*0x68229b*/
}



// ==== 0x006822F0  Map_Read_6822F0  this=-  sig=csp ====
int __stdcall sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
  LPSTR v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  LPCWCH lpWideCharStr; // [esp+28h] [ebp-8h]

  v3 = lpMultiByteStr; /*0x6822f9*/
  lpMultiByteStr = 0; /*0x682301*/
  *v3 = 0; /*0x68230a*/
  v4 = (*(int (__stdcall **)(int, void *, int, LPSTR *))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &lpMultiByteStr); /*0x68231a*/
  if ( v4 >= 0 ) /*0x68231e*/
  {
    v6[0] = 1; /*0x682346*/
    v6[1] = a2; /*0x68234e*/
    if ( !lpMultiByteStr ) /*0x682352*/
      WinAPI::Wrapper(-2147467261); /*0x682359*/
    v4 = (*(int (__stdcall **)(LPSTR, int, _DWORD *, _WORD *))(*(_DWORD *)lpMultiByteStr + 12))( /*0x682374*/
           lpMultiByteStr,
           1,
           v6,
           v7);
    if ( v4 >= 0 ) /*0x682378*/
    {
      if ( v7[0] == 31 ) /*0x682398*/
        WideCharToMultiByte(0, 0, lpWideCharStr, -1, v3, 128, 0, 0); /*0x6823af*/
      if ( lpMultiByteStr ) /*0x6823bb*/
        (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x6823c0*/
    }
    else if ( lpMultiByteStr ) /*0x682380*/
    {
      (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x682385*/
      return v4; /*0x68238f*/
    }
  }
  else if ( lpMultiByteStr ) /*0x682326*/
  {
    (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x68232f*/
    return v4; /*0x682339*/
  }
  return v4; /*0x682334*/
}



// ==== 0x006823D0  Map_Read_6823D0  this=-  sig=csp ====
int __stdcall sub_6823D0(int a1, int a2, wchar_t *Destination)
{
  wchar_t *v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  wchar_t *Source; // [esp+28h] [ebp-8h]

  v3 = Destination; /*0x6823d9*/
  Destination = 0; /*0x6823e1*/
  *v3 = 0; /*0x6823ea*/
  v4 = (*(int (__stdcall **)(int, void *, int, wchar_t **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &Destination); /*0x6823fc*/
  if ( v4 >= 0 ) /*0x682400*/
  {
    v6[0] = 1; /*0x682428*/
    v6[1] = a2; /*0x682430*/
    if ( !Destination ) /*0x682434*/
      WinAPI::Wrapper(-2147467261); /*0x68243b*/
    v4 = (*(int (__stdcall **)(wchar_t *, int, _DWORD *, _WORD *))(*(_DWORD *)Destination + 12))(Destination, 1, v6, v7); /*0x682456*/
    if ( v4 >= 0 ) /*0x68245a*/
    {
      if ( v7[0] == 31 ) /*0x68247a*/
        wcsncpy(v3, Source, 0x80u); /*0x682487*/
      if ( Destination ) /*0x682495*/
        (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x68249a*/
    }
    else if ( Destination ) /*0x682462*/
    {
      (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x682467*/
      return v4; /*0x682471*/
    }
  }
  else if ( Destination ) /*0x682408*/
  {
    (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x682411*/
    return v4; /*0x68241b*/
  }
  return v4; /*0x682416*/
}



// ==== 0x006824B0  Map_Read_6824B0  this=-  sig=csp ====
int __stdcall sub_6824B0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x6824b6*/
  a3 = 0; /*0x6824ba*/
  v4 = 0; /*0x6824c2*/
  *v3 = 0; /*0x6824c4*/
  v5 = &unk_83D658; /*0x6824ca*/
  while ( *v5 != a2 ) /*0x6824d1*/
  {
    v5 += 2; /*0x6824d3*/
    ++v4; /*0x6824d6*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x6824dc*/
    {
      v6 = 0; /*0x6824de*/
      goto LABEL_5; /*0x6824de*/
    }
  }
  v6 = (&off_83D65C)[2 * v4]; /*0x682511*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x6824e0*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x6824fe*/
  {
    if ( !a3 ) /*0x68251c*/
      WinAPI::Wrapper(-2147467261); /*0x682523*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 4, 0); /*0x682537*/
    if ( v7 >= 0 ) /*0x68253f*/
    {
      if ( a3 ) /*0x682554*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682559*/
    }
    else if ( a3 ) /*0x682543*/
    {
      goto LABEL_7; /*0x682543*/
    }
  }
  else if ( a3 ) /*0x682502*/
  {
LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682504*/
    return v7; /*0x68250e*/
  }
  return v7; /*0x68250c*/
}



// ==== 0x00682570  PropertyReadScenarioCOM  this=-  sig=csp ====
int __stdcall COM_Property_ReadScenario(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+28h] [ebp-8h]

  v3 = a3; /*0x682579*/
  a3 = 0; /*0x682581*/
  *v3 = 0; /*0x68258a*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x68259d*/
  if ( v4 >= 0 ) /*0x6825a1*/
  {
    v6[0] = 1; /*0x6825c9*/
    v6[1] = a2; /*0x6825d1*/
    if ( !a3 ) /*0x6825d5*/
      WinAPI::Wrapper(-2147467261); /*0x6825dc*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v6, v7); /*0x6825f7*/
    if ( v4 >= 0 ) /*0x6825fb*/
    {
      if ( v7[0] == 3 ) /*0x68261b*/
        *v3 = v8; /*0x682621*/
      if ( a3 ) /*0x682629*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x68262e*/
    }
    else if ( a3 ) /*0x682603*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682608*/
      return v4; /*0x682612*/
    }
  }
  else if ( a3 ) /*0x6825a9*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x6825b2*/
    return v4; /*0x6825bc*/
  }
  return v4; /*0x6825b7*/
}



// ==== 0x00682640  WriteStringCOM  this=-  sig=csp ====
int __stdcall COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+34h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68265f*/
  v9 = 0; /*0x68266c*/
  v3 = 0; /*0x682674*/
  v4 = &unk_83D658; /*0x682676*/
  while ( *v4 != a2 ) /*0x68267d*/
  {
    v4 += 2; /*0x68267f*/
    ++v3; /*0x682682*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682688*/
    {
      v5 = 0; /*0x68268a*/
      goto LABEL_5; /*0x68268a*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x6826c9*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x68268c*/
  if ( v6 >= 0 ) /*0x6826ad*/
  {
    if ( !v9 ) /*0x6826d4*/
      WinAPI::Wrapper(-2147467261); /*0x6826db*/
    v7 = wcslen(WideCharStr); /*0x6826f0*/
    v6 = (*(int (__stdcall **)(int, WCHAR *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, WideCharStr, 2 * v7 + 2, 0); /*0x682706*/
    if ( v6 >= 0 ) /*0x68270f*/
    {
      if ( !v9 ) /*0x682729*/
        WinAPI::Wrapper(-2147467261); /*0x682730*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x682741*/
      if ( v6 >= 0 ) /*0x682749*/
      {
        if ( v9 ) /*0x682763*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682768*/
      }
      else if ( v9 ) /*0x68274d*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68274f*/
        return v6; /*0x68275e*/
      }
    }
    else if ( v9 ) /*0x682713*/
    {
      goto LABEL_18; /*0x682713*/
    }
  }
  else if ( v9 ) /*0x6826b1*/
  {
    goto LABEL_18; /*0x6826b1*/
  }
  return v6; /*0x6826bf*/
}



// ==== 0x00682780  GameOptions_Load  this=-  sig=csp ====
int __stdcall sub_682780(int a1, int a2, wchar_t *String)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-4h] BYREF

  v9 = 0; /*0x682786*/
  v3 = 0; /*0x68278e*/
  v4 = &unk_83D658; /*0x682790*/
  while ( *v4 != a2 ) /*0x682797*/
  {
    v4 += 2; /*0x682799*/
    ++v3; /*0x68279c*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x6827a2*/
    {
      v5 = 0; /*0x6827a4*/
      goto LABEL_5; /*0x6827a4*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x6827db*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x6827a6*/
  if ( v6 >= 0 ) /*0x6827c4*/
  {
    if ( !v9 ) /*0x6827e6*/
      WinAPI::Wrapper(-2147467261); /*0x6827ed*/
    v7 = wcslen(String); /*0x682803*/
    v6 = (*(int (__stdcall **)(int, wchar_t *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, String, 2 * v7 + 2, 0); /*0x682815*/
    if ( v6 >= 0 ) /*0x68281f*/
    {
      if ( !v9 ) /*0x682834*/
        WinAPI::Wrapper(-2147467261); /*0x68283b*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x68284c*/
      if ( v6 >= 0 ) /*0x682854*/
      {
        if ( v9 ) /*0x682869*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68286e*/
      }
      else if ( v9 ) /*0x682858*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68285a*/
        return v6; /*0x682864*/
      }
    }
    else if ( v9 ) /*0x682823*/
    {
      goto LABEL_18; /*0x682823*/
    }
  }
  else if ( v9 ) /*0x6827c8*/
  {
    goto LABEL_18; /*0x6827c8*/
  }
  return v6; /*0x6827d6*/
}



// ==== 0x00682880  ReadStringCOM  this=-  sig=csp ====
int __stdcall COM_ReadString(int *a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+2Ch] [ebp-11Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-118h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-110h] BYREF
  WCHAR *v10; // [esp+40h] [ebp-108h]
  WCHAR WideCharStr[128]; // [esp+48h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68289f*/
  v3 = *a1; /*0x6828b3*/
  v7 = 0; /*0x6828bb*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(v3 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x6828c8*/
    goto LABEL_7; /*0x6828c8*/
  if ( v7 ) /*0x6828d0*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x6828d5*/
  v4 = *a1; /*0x6828d8*/
  v7 = 0; /*0x6828ee*/
  v5 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v4 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x6828f9*/
  if ( v5 >= 0 ) /*0x6828fd*/
  {
LABEL_7:
    v10 = WideCharStr; /*0x682928*/
    v8[0] = 1; /*0x682932*/
    v8[1] = a2; /*0x68293a*/
    v9[0] = 31; /*0x68293e*/
    if ( !v7 ) /*0x682945*/
      WinAPI::Wrapper(-2147467261); /*0x68294c*/
    v5 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682969*/
    if ( v5 >= 0 ) /*0x682971*/
    {
      if ( v7 ) /*0x68298b*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682990*/
    }
    else if ( v7 ) /*0x682975*/
    {
      goto LABEL_6; /*0x682975*/
    }
  }
  else if ( v7 ) /*0x682905*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x68290b*/
    return v5; /*0x68291a*/
  }
  return v5; /*0x682913*/
}



// ==== 0x006829A0  GameOptions_Load_6829A0  this=-  sig=csp ====
int __stdcall sub_6829A0(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x6829ac*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x6829c4*/
    goto LABEL_7; /*0x6829c4*/
  if ( v6 ) /*0x6829cc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x6829d1*/
  v3 = *a1; /*0x6829d4*/
  v6 = 0; /*0x6829ea*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x6829f5*/
  if ( v4 >= 0 ) /*0x6829f9*/
  {
LABEL_7:
    v7[1] = a2; /*0x682a1a*/
    v7[0] = 1; /*0x682a24*/
    v8[0] = 31; /*0x682a2c*/
    v9 = a3; /*0x682a33*/
    if ( !v6 ) /*0x682a37*/
      WinAPI::Wrapper(-2147467261); /*0x682a3e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682a5b*/
    if ( v4 >= 0 ) /*0x682a63*/
    {
      if ( v6 ) /*0x682a7a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a7f*/
    }
    else if ( v6 ) /*0x682a67*/
    {
      goto LABEL_6; /*0x682a67*/
    }
  }
  else if ( v6 ) /*0x682a01*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a03*/
    return v4; /*0x682a0f*/
  }
  return v4; /*0x682a0b*/
}



// ==== 0x00682A90  PropertyReadBoolCOM  this=-  sig=csp ====
int __stdcall COM_Property_ReadBool(int a1, int a2, char a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682a96*/
  v3 = 0; /*0x682a9e*/
  v4 = &unk_83D658; /*0x682aa0*/
  while ( *v4 != a2 ) /*0x682aa7*/
  {
    v4 += 2; /*0x682aa9*/
    ++v3; /*0x682aac*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682ab2*/
    {
      v5 = 0; /*0x682ab4*/
      goto LABEL_5; /*0x682ab4*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x682aeb*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682ab6*/
  if ( v6 >= 0 ) /*0x682ad4*/
  {
    if ( !v8 ) /*0x682af6*/
      WinAPI::Wrapper(-2147467261); /*0x682afd*/
    v6 = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, &a3, 4, 0); /*0x682b15*/
    if ( v6 >= 0 ) /*0x682b1d*/
    {
      if ( !v8 ) /*0x682b32*/
        WinAPI::Wrapper(-2147467261); /*0x682b39*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682b4a*/
      if ( v6 >= 0 ) /*0x682b52*/
      {
        if ( v8 ) /*0x682b67*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b6c*/
      }
      else if ( v8 ) /*0x682b56*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b58*/
        return v6; /*0x682b62*/
      }
    }
    else if ( v8 ) /*0x682b21*/
    {
      goto LABEL_18; /*0x682b21*/
    }
  }
  else if ( v8 ) /*0x682ad8*/
  {
    goto LABEL_18; /*0x682ad8*/
  }
  return v6; /*0x682ae6*/
}



// ==== 0x00682B80  PropertyBagReadCOM  this=-  sig=csp ====
int __stdcall COM_PropertyBag_Read(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x682b8c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x682ba4*/
    goto LABEL_7; /*0x682ba4*/
  if ( v6 ) /*0x682bac*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682bb1*/
  v3 = *a1; /*0x682bb4*/
  v6 = 0; /*0x682bca*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x682bd5*/
  if ( v4 >= 0 ) /*0x682bd9*/
  {
LABEL_7:
    v7[1] = a2; /*0x682bfa*/
    v7[0] = 1; /*0x682c04*/
    v8[0] = 3; /*0x682c0c*/
    v9 = a3; /*0x682c13*/
    if ( !v6 ) /*0x682c17*/
      WinAPI::Wrapper(-2147467261); /*0x682c1e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682c3b*/
    if ( v4 >= 0 ) /*0x682c43*/
    {
      if ( v6 ) /*0x682c5a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682c5f*/
    }
    else if ( v6 ) /*0x682c47*/
    {
      goto LABEL_6; /*0x682c47*/
    }
  }
  else if ( v6 ) /*0x682be1*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682be3*/
    return v4; /*0x682bef*/
  }
  return v4; /*0x682beb*/
}



// ==== 0x00682C70  sub_682C70  this=-  sig=csp ====
int __stdcall sub_682C70(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682c76*/
  a3 = 0; /*0x682c7a*/
  v4 = 0; /*0x682c82*/
  *v3 = 0; /*0x682c84*/
  v3[1] = 0; /*0x682c8a*/
  v5 = &unk_83D658; /*0x682c91*/
  while ( *v5 != a2 ) /*0x682c98*/
  {
    v5 += 2; /*0x682c9a*/
    ++v4; /*0x682c9d*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x682ca3*/
    {
      v6 = 0; /*0x682ca5*/
      goto LABEL_5; /*0x682ca5*/
    }
  }
  v6 = (&off_83D65C)[2 * v4]; /*0x682cd8*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x682ca7*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682cc5*/
  {
    if ( !a3 ) /*0x682ce3*/
      WinAPI::Wrapper(-2147467261); /*0x682cea*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 8, 0); /*0x682cfe*/
    if ( v7 >= 0 ) /*0x682d06*/
    {
      if ( a3 ) /*0x682d1b*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d20*/
    }
    else if ( a3 ) /*0x682d0a*/
    {
      goto LABEL_7; /*0x682d0a*/
    }
  }
  else if ( a3 ) /*0x682cc9*/
  {
LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682ccb*/
    return v7; /*0x682cd5*/
  }
  return v7; /*0x682cd3*/
}



// ==== 0x00682D30  ReadBufferCOM  this=-  sig=csp ====
int __stdcall COM_ReadBuffer(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  int v6; // eax
  _DWORD v7[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v8[4]; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]

  v3 = a3; /*0x682d39*/
  a3 = 0; /*0x682d41*/
  *v3 = 0; /*0x682d4a*/
  v3[1] = 0; /*0x682d50*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x682d64*/
  if ( v4 >= 0 ) /*0x682d68*/
  {
    v7[0] = 1; /*0x682d90*/
    v7[1] = a2; /*0x682d98*/
    if ( !a3 ) /*0x682d9c*/
      WinAPI::Wrapper(-2147467261); /*0x682da3*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v7, v8); /*0x682dbe*/
    if ( v4 >= 0 ) /*0x682dc2*/
    {
      if ( v8[0] == 64 ) /*0x682de2*/
      {
        v6 = v10; /*0x682de8*/
        *v3 = v9; /*0x682dec*/
        v3[1] = v6; /*0x682dee*/
      }
      if ( a3 ) /*0x682df7*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dfc*/
    }
    else if ( a3 ) /*0x682dca*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dcf*/
      return v4; /*0x682dd9*/
    }
  }
  else if ( a3 ) /*0x682d70*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d79*/
    return v4; /*0x682d83*/
  }
  return v4; /*0x682d7e*/
}



// ==== 0x00682E10  WriteIntCOM  this=-  sig=csp ====
int __stdcall COM_WriteInt(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682e16*/
  v3 = 0; /*0x682e1e*/
  v4 = &unk_83D658; /*0x682e20*/
  while ( *v4 != a2 ) /*0x682e27*/
  {
    v4 += 2; /*0x682e29*/
    ++v3; /*0x682e2c*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682e32*/
    {
      v5 = 0; /*0x682e34*/
      goto LABEL_5; /*0x682e34*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x682e6b*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682e36*/
  if ( v6 >= 0 ) /*0x682e54*/
  {
    if ( !v8 ) /*0x682e76*/
      WinAPI::Wrapper(-2147467261); /*0x682e7d*/
    v6 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, a3, 8, 0); /*0x682e95*/
    if ( v6 >= 0 ) /*0x682e9d*/
    {
      if ( !v8 ) /*0x682eb2*/
        WinAPI::Wrapper(-2147467261); /*0x682eb9*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682eca*/
      if ( v6 >= 0 ) /*0x682ed2*/
      {
        if ( v8 ) /*0x682ee7*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682eec*/
      }
      else if ( v8 ) /*0x682ed6*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682ed8*/
        return v6; /*0x682ee2*/
      }
    }
    else if ( v8 ) /*0x682ea1*/
    {
      goto LABEL_18; /*0x682ea1*/
    }
  }
  else if ( v8 ) /*0x682e58*/
  {
    goto LABEL_18; /*0x682e58*/
  }
  return v6; /*0x682e66*/
}



// ==== 0x00682F00  SetBufferParamsCOM  this=-  sig=csp ====
int __stdcall COM_SetBufferParams(int *a1, int a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // edx
  int v7; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+40h] [ebp-8h]
  int v11; // [esp+44h] [ebp-4h]

  v7 = 0; /*0x682f0c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x682f24*/
    goto LABEL_7; /*0x682f24*/
  if ( v7 ) /*0x682f2c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f31*/
  v3 = *a1; /*0x682f34*/
  v7 = 0; /*0x682f4a*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x682f55*/
  if ( v4 >= 0 ) /*0x682f59*/
  {
LABEL_7:
    v8[0] = 1; /*0x682f7a*/
    v8[1] = a2; /*0x682f82*/
    v9[0] = 64; /*0x682f8a*/
    v6 = a3[1]; /*0x682f93*/
    v10 = *a3; /*0x682f9a*/
    v11 = v6; /*0x682fa0*/
    if ( !v7 ) /*0x682fa4*/
      WinAPI::Wrapper(-2147467261); /*0x682fab*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682fc8*/
    if ( v4 >= 0 ) /*0x682fd0*/
    {
      if ( v7 ) /*0x682fe7*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682fec*/
    }
    else if ( v7 ) /*0x682fd4*/
    {
      goto LABEL_6; /*0x682fd4*/
    }
  }
  else if ( v7 ) /*0x682f61*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f67*/
    return v4; /*0x682f73*/
  }
  return v4; /*0x682f6f*/
}



// ==== 0x00683000  ScenarioClass::LookupMethod  this=ScenarioClass  sig=csp ====
_UNKNOWN **__thiscall ScenarioClass_LookupMethod(void *this)
{
  int v1; // edx
  void **v2; // eax

  v1 = 0; /*0x683000*/
  v2 = (void **)&unk_83D658; /*0x683002*/
  while ( *v2 != this ) /*0x683009*/
  {
    v2 += 2; /*0x68300b*/
    ++v1; /*0x68300e*/
    if ( (int)v2 >= (int)g_INI_Key_GameType ) /*0x683014*/
      return 0; /*0x683018*/
  }
  return (&off_83D65C)[2 * v1]; /*0x683018*/
}



// ==== 0x00683030  COMObject::ValidatePtr  this=COMObject  sig=csp ====
int __thiscall COMObject_ValidatePtr(void *this)
{
  if ( !*(_DWORD *)this ) /*0x683033*/
    WinAPI::Wrapper(-2147467261); /*0x68303d*/
  return *(_DWORD *)this; /*0x683044*/
}



// ==== 0x00683050  ObjectClass::Map_Read  this=ObjectClass  sig=csp ====
int __thiscall sub_683050(int *this)
{
  int result; // eax

  result = *this; /*0x683050*/
  if ( *this ) /*0x683050*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683059*/
  return result; /*0x68305c*/
}



// ==== 0x00683060  ObjectClass::ReleaseCOM  this=ObjectClass  sig=csp ====
int __thiscall COM_Release(int *this)
{
  int result; // eax

  result = *this; /*0x683060*/
  if ( *this ) /*0x683060*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683069*/
  return result; /*0x68306c*/
}



// ==== 0x00683070  sub_683070  this=-  sig=ida-proto ====
void sub_683070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68307c*/
  dbl_B05460 = Math::Sqrt(v0 + v0); /*0x68308e*/
}



// ==== 0x006830A0  sub_6830A0  this=-  sig=ida-proto ====
void sub_6830A0()
{
  dbl_B054C0 = dbl_B05460 / 60.0; /*0x6830ac*/
}



// ==== 0x006830C0  sub_6830C0  this=-  sig=ida-proto ====
void sub_6830C0()
{
  dbl_B054A8 = 1.0 / dbl_B054C0; /*0x6830cc*/
}



// ==== 0x006830E0  sub_6830E0  this=-  sig=ida-proto ====
void sub_6830E0()
{
  dbl_B054A0 = 0.0174532925199433 * 45.0; /*0x6830ec*/
}



// ==== 0x00683100  sub_683100  this=-  sig=ida-proto ====
void sub_683100()
{
  dbl_B05468 = 0.0174532925199433 * 60.0; /*0x68310c*/
}



// ==== 0x00683120  sub_683120  this=-  sig=ida-proto ====
void sub_683120()
{
  dbl_B05440 = 0.0174532925199433 * 90.0; /*0x68312c*/
}



// ==== 0x00683140  sub_683140  this=-  sig=ida-proto ====
__int64 sub_683140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05440 - dbl_B05468); /*0x683152*/
  result = Math::RoundToInt(v0 * dbl_B05460 * 0.5); /*0x683166*/
  dword_B054C8 = result; /*0x68316b*/
  return result; /*0x683170*/
}



// ==== 0x00683180  sub_683180  this=-  sig=ida-proto ====
void sub_683180()
{
  dbl_B05470 = Math::ArcTan((double)dword_B054C8 * 0.00390625); /*0x683197*/
}



// ==== 0x006831B0  sub_6831B0  this=-  sig=ida-proto ====
void sub_6831B0()
{
  dbl_B05498 = Math::ArcTan((double)(2 * dword_B054C8) / dbl_B05460); /*0x6831d2*/
}



// ==== 0x006831E0  sub_6831E0  this=-  sig=ida-proto ====
__int64 sub_6831E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B054C8) + 0.5); /*0x6831fb*/
  dword_B054BC = result; /*0x683200*/
  return result; /*0x683206*/
}



// ==== 0x00683210  sub_683210  this=-  sig=ida-proto ====
int sub_683210()
{
  dword_B05458 = 0; /*0x683212*/
  return 0; /*0x68321e*/
}



// ==== 0x00683220  sub_683220  this=-  sig=ida-proto ====
int sub_683220()
{
  dword_B05488 = 0; /*0x683222*/
  dword_B0548C = 0; /*0x683227*/
  dword_B05490 = 0; /*0x68322c*/
  return 0; /*0x683231*/
}



// ==== 0x00683240  sub_683240  this=-  sig=ida-proto ====
int sub_683240()
{
  dword_B054B8 = 0; /*0x683245*/
  dword_B054B0 = 128; /*0x68324f*/
  dword_B054B4 = 128; /*0x683254*/
  return 128; /*0x683259*/
}



// ==== 0x00683260  sub_683260  this=-  sig=ida-proto ====
int sub_683260()
{
  dword_B05448 = 0; /*0x683262*/
  dword_B0544C = 0; /*0x683267*/
  dword_B05450 = 0; /*0x68326c*/
  dword_B05454 = 0; /*0x683271*/
  return 0; /*0x683276*/
}



// ==== 0x00683280  sub_683280  this=-  sig=ida-proto ====
int sub_683280()
{
  dword_B05478 = Timer::GetTicks(); /*0x68328f*/
  dword_B05480 = 0; /*0x683294*/
  return atexit(nullsub_226); /*0x6832a4*/
}



// ==== 0x006832B0  nullsub_226  this=-  sig=ida-proto ====
void __cdecl nullsub_226()
{
  ; /*0x6832b0*/
}



// ==== 0x006832C0  ScenarioClass::Constructor  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Constructor(int this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *v4; // eax
  wchar_t *v5; // edx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  _BYTE *v9; // edi
  int v10; // esi
  _BYTE *v11; // edi

  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x6832cf*/
  *(_DWORD *)(this + 1556) = Timer::GetTicks(); /*0x6832e5*/
  *(_DWORD *)(this + 1564) = 0; /*0x6832eb*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x6832f6*/
  *(_DWORD *)(this + 1576) = 0; /*0x6832fc*/
  v2 = g_CurrentFrame; /*0x683302*/
  *(_DWORD *)(this + 4592) = 0; /*0x683307*/
  *(_DWORD *)(this + 4584) = v2; /*0x68330d*/
  *(_BYTE *)(this + 4600) = 0; /*0x683313*/
  v3 = g_CurrentFrame; /*0x683319*/
  *(_DWORD *)(this + 4640) = 0; /*0x68331f*/
  *(_DWORD *)(this + 4632) = v3; /*0x683325*/
  *(_DWORD *)(this + 4644) = g_CurrentFrame; /*0x683331*/
  *(_DWORD *)(this + 4652) = 0; /*0x683337*/
  v4 = g_CurrentFrame; /*0x68333d*/
  *(_DWORD *)(this + 4664) = 0; /*0x683342*/
  *(_DWORD *)(this + 4656) = v4; /*0x683348*/
  *(_DWORD *)(this + 4668) = g_CurrentFrame; /*0x683354*/
  *(_DWORD *)(this + 4676) = 0; /*0x68335a*/
  v5 = g_CurrentFrame; /*0x683360*/
  *(_DWORD *)(this + 4688) = 0; /*0x683366*/
  *(_DWORD *)(this + 4680) = v5; /*0x68336c*/
  *(_DWORD *)(this + 13504) = g_CurrentFrame; /*0x683381*/
  *(_DWORD *)(this + 13512) = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((_DWORD *)(this + 13524), 0, 0); /*0x68338d*/
  *(_DWORD *)(this + 13540) = 0; /*0x683397*/
  *(_DWORD *)(this + 13544) = 10; /*0x68339a*/
  *(_DWORD *)(this + 13524) = &TypeList<TechnoTypeClass *>::`vftable'; /*0x68339d*/
  VectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x6833ad*/
  *(_DWORD *)(this + 13572) = 10; /*0x6833b2*/
  *(_DWORD *)(this + 13568) = 0; /*0x6833b5*/
  *(_DWORD *)(this + 13552) = &TypeList<int>::`vftable'; /*0x6833b8*/
  VectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x6833c8*/
  *(_DWORD *)(this + 13600) = 10; /*0x6833cf*/
  *(_DWORD *)(this + 13596) = 0; /*0x6833d2*/
  *(_DWORD *)(this + 13580) = &TypeList<int>::`vftable'; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  *(_BYTE *)(this + 13720) = 0; /*0x6833e2*/
  *(_BYTE *)(this + 13501) = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  *(_DWORD *)(this + 4692) = 1; /*0x6833f3*/
  *(_DWORD *)(this + 13516) = -1; /*0x6833fd*/
  *(_BYTE *)(this + 4) = 0; /*0x683407*/
  *(_BYTE *)(this + 264) = 0; /*0x68340a*/
  v6 = (_DWORD *)(this + 1586); /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *v6++ = dword_B05458; /*0x683421*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)(this + 4960), &g_TypeClass_DefaultString); /*0x683435*/
  wcscpy((wchar_t *)(this + 5082), &g_TypeClass_DefaultString); /*0x683446*/
  strcpy((char *)(this + 4700), &g_INI_DefaultBuffer); /*0x683475*/
  strcpy((char *)(this + 7248), &g_INI_DefaultBuffer); /*0x68349d*/
  strcpy((char *)(this + 5050), &g_INI_DefaultBuffer); /*0x6834bf*/
  wcscpy((wchar_t *)(this + 5200), &g_TypeClass_DefaultString); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = (_BYTE *)(this + 7344); /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      *(_BYTE *)(this + 13482) = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((void *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (_BYTE *)(this + 9394); /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      *(_BYTE *)(this + 13482) = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll(v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(_DWORD *)(this + 13454) = 0; /*0x683534*/
  *(_DWORD *)(this + 13458) = 0; /*0x68353c*/
  *(_DWORD *)(this + 13462) = 0; /*0x683543*/
  *(_DWORD *)(this + 13466) = 0; /*0x683549*/
  return this; /*0x683533*/
}



// ==== 0x00683560  ScenarioClass::ReadINIEntry  this=ScenarioClass  sig=csp ====
int __thiscall sub_683560(int this, int a2)
{
  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x68356c*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x683588*/
  *(_DWORD *)(this + 1576) = 0; /*0x68358e*/
  TechnoTypeVector::Construct((_DWORD *)(this + 13524), 0, 0); /*0x683598*/
  *(_DWORD *)(this + 13524) = &TypeList<TechnoTypeClass *>::`vftable'; /*0x68359d*/
  DynamicVectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x6835af*/
  *(_DWORD *)(this + 13552) = &TypeList<int>::`vftable'; /*0x6835b4*/
  DynamicVectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x6835c6*/
  *(_DWORD *)(this + 13580) = &TypeList<int>::`vftable'; /*0x6835d1*/
  if ( *(_BYTE *)(this + 4600) ) /*0x6835d7*/
    *(_DWORD *)(this + 4596) = GetStringCSF((wchar_t *)(this + 4600), 0, g_Str_File_Scenario_CPP, 344); /*0x6835ed*/
  else
    *(_DWORD *)(this + 4596) = &g_TypeClass_DefaultString; /*0x6835fa*/
  return this; /*0x6835f5*/
}



// ==== 0x00683610  ScenarioClass::InitTimer  this=ScenarioClass  sig=csp ====
wchar_t *__thiscall ScenarioClass_InitTimer(int this)
{
  _DWORD *v2; // edi
  DWORD Ticks; // eax
  int v4; // ecx
  DWORD v5; // eax
  _DWORD *v6; // edi
  signed int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  wchar_t *result; // eax
  wchar_t *String; // eax
  signed int v14; // [esp+10h] [ebp-30h]
  int v15; // [esp+18h] [ebp-28h]
  char Destination[32]; // [esp+20h] [ebp-20h] BYREF

  *(_DWORD *)(this + 524) = 699; /*0x683622*/
  *(_DWORD *)(this + 528) = 699; /*0x683628*/
  *(_DWORD *)(this + 532) = 1000000; /*0x683633*/
  *(_DWORD *)(this + 1548) = 1; /*0x68363d*/
  *(_DWORD *)(this + 1552) = 1; /*0x683643*/
  v2 = (_DWORD *)(this + 1556); /*0x683652*/
  *(_DWORD *)(this + 1556) = Timer::GetTicks(); /*0x68365f*/
  *(_DWORD *)(this + 1560) = v15; /*0x683661*/
  *(_DWORD *)(this + 1564) = 0; /*0x683664*/
  if ( *(_DWORD *)(this + 1556) != -1 ) /*0x68366b*/
  {
    Ticks = Timer::GetTicks(); /*0x683670*/
    v4 = *(_DWORD *)(this + 1564); /*0x683677*/
    v5 = Ticks - *v2; /*0x68367a*/
    *v2 = -1; /*0x68367c*/
    *(_DWORD *)(this + 1564) = v5 + v4; /*0x683680*/
  }
  v6 = (_DWORD *)(this + 1568); /*0x683690*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x683698*/
  *(_DWORD *)(this + 1572) = v15; /*0x68369a*/
  *(_DWORD *)(this + 1576) = 0; /*0x68369d*/
  if ( *(_DWORD *)(this + 1568) != -1 ) /*0x6836a4*/
  {
    v14 = *(_DWORD *)(this + 1576); /*0x6836a9*/
    v7 = Timer::GetTicks() - *v6; /*0x6836b7*/
    if ( v7 >= v14 ) /*0x6836bf*/
      v8 = 0; /*0x6836c5*/
    else
      v8 = v14 - v7; /*0x6836c1*/
    *(_DWORD *)(this + 1576) = v8; /*0x6836c7*/
    *v6 = -1; /*0x6836ca*/
  }
  *(_DWORD *)(this + 1580) = 0; /*0x6836d2*/
  *(_BYTE *)(this + 1584) = 0; /*0x6836d8*/
  *(_DWORD *)(this + 4584) = g_CurrentFrame; /*0x6836e6*/
  *(_DWORD *)(this + 4588) = v15; /*0x6836ec*/
  *(_DWORD *)(this + 4592) = 0; /*0x6836ef*/
  v9 = *(_DWORD *)(this + 4584); /*0x6836f2*/
  if ( v9 != -1 ) /*0x6836f6*/
  {
    v10 = *(_DWORD *)(this + 4592); /*0x6836fe*/
    if ( (int)g_CurrentFrame - v9 >= v10 ) /*0x683705*/
      v11 = 0; /*0x68370b*/
    else
      v11 = v10 - ((_DWORD)g_CurrentFrame - v9); /*0x683707*/
    *(_DWORD *)(this + 4592) = v11; /*0x68370d*/
    *(_DWORD *)(this + 4584) = -1; /*0x683710*/
  }
  *(_DWORD *)(this + 4596) = &g_TypeClass_DefaultString; /*0x683717*/
  if ( &g_INI_DefaultBuffer ) /*0x683723*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x683737*/
    Destination[31] = 0; /*0x68373f*/
  }
  else
  {
    Destination[0] = 0; /*0x683725*/
  }
  if ( Destination != (char *)(this + 4600) ) /*0x68374f*/
    qmemcpy((void *)(this + 4600), Destination, 0x20u); /*0x68375a*/
  *(_DWORD *)(this + 4632) = g_CurrentFrame; /*0x683770*/
  *(_DWORD *)(this + 4636) = v15; /*0x683776*/
  *(_DWORD *)(this + 4640) = 0; /*0x683779*/
  *(_DWORD *)(this + 4644) = g_CurrentFrame; /*0x683785*/
  *(_DWORD *)(this + 4648) = v15; /*0x683787*/
  *(_DWORD *)(this + 4652) = 0; /*0x68378e*/
  *(_DWORD *)(this + 4656) = g_CurrentFrame; /*0x68379c*/
  *(_DWORD *)(this + 4660) = v15; /*0x6837a2*/
  *(_DWORD *)(this + 4664) = 0; /*0x6837a9*/
  *(_DWORD *)(this + 4668) = g_CurrentFrame; /*0x6837b7*/
  *(_DWORD *)(this + 4672) = v15; /*0x6837bd*/
  *(_DWORD *)(this + 4676) = 0; /*0x6837c4*/
  *(_DWORD *)(this + 4680) = g_CurrentFrame; /*0x6837d2*/
  *(_DWORD *)(this + 4684) = v15; /*0x6837d8*/
  *(_DWORD *)(this + 4688) = 0; /*0x6837df*/
  *(_DWORD *)(this + 4696) = -1; /*0x6837e2*/
  *(_DWORD *)(this + 5172) = -1; /*0x6837e8*/
  *(_DWORD *)(this + 5176) = -1; /*0x6837ee*/
  *(_DWORD *)(this + 5180) = -1; /*0x6837f4*/
  *(_DWORD *)(this + 5184) = -1; /*0x6837fa*/
  *(_DWORD *)(this + 5188) = -1; /*0x683800*/
  *(_DWORD *)(this + 5192) = -1; /*0x683806*/
  *(_DWORD *)(this + 5196) = -1; /*0x68380c*/
  *(_DWORD *)(this + 7280) = -1; /*0x683812*/
  *(_DWORD *)(this + 7284) = 0; /*0x683818*/
  *(_DWORD *)(this + 7288) = 0; /*0x68381e*/
  *(_DWORD *)(this + 7292) = 0; /*0x683824*/
  *(_DWORD *)(this + 7296) = 0; /*0x68382a*/
  *(_DWORD *)(this + 7300) = 0; /*0x683830*/
  *(_DWORD *)(this + 13472) = 0; /*0x683836*/
  *(_BYTE *)(this + 13476) = 0; /*0x68383c*/
  *(_BYTE *)(this + 13477) = 0; /*0x683842*/
  *(_BYTE *)(this + 13478) = 1; /*0x683848*/
  *(_BYTE *)(this + 13479) = 1; /*0x68384f*/
  *(_BYTE *)(this + 13480) = 1; /*0x683856*/
  *(_BYTE *)(this + 13481) = 0; /*0x68385d*/
  *(_BYTE *)(this + 13482) = 0; /*0x683863*/
  *(_BYTE *)(this + 13483) = 0; /*0x683869*/
  *(_BYTE *)(this + 13484) = 0; /*0x68386f*/
  *(_BYTE *)(this + 13485) = 0; /*0x683875*/
  *(_BYTE *)(this + 13486) = 0; /*0x68387b*/
  *(_BYTE *)(this + 13487) = 0; /*0x683881*/
  *(_BYTE *)(this + 13488) = 0; /*0x683887*/
  *(_BYTE *)(this + 13489) = 0; /*0x68388d*/
  *(_BYTE *)(this + 13490) = 0; /*0x683893*/
  *(_BYTE *)(this + 13492) = 0; /*0x683899*/
  *(_DWORD *)(this + 13496) = 0; /*0x68389f*/
  *(_BYTE *)(this + 13500) = 0; /*0x6838a5*/
  *(_BYTE *)(this + 13502) = 0; /*0x6838ab*/
  *(_DWORD *)(this + 13504) = g_CurrentFrame; /*0x6838bc*/
  *(_DWORD *)(this + 13508) = v15; /*0x6838c7*/
  *(_DWORD *)(this + 13512) = 0; /*0x6838ca*/
  *(_DWORD *)(this + 13520) = 0; /*0x6838cd*/
  *(_DWORD *)(this + 13608) = 100; /*0x6838d3*/
  *(_DWORD *)(this + 13612) = 100; /*0x6838d9*/
  *(_DWORD *)(this + 13616) = 100; /*0x6838df*/
  *(_DWORD *)(this + 13620) = 100; /*0x6838e5*/
  *(_DWORD *)(this + 13624) = 100; /*0x6838eb*/
  *(_DWORD *)(this + 13628) = 100; /*0x6838f1*/
  *(_DWORD *)(this + 13632) = 50; /*0x6838f7*/
  *(_DWORD *)(this + 13636) = 8; /*0x683901*/
  *(_DWORD *)(this + 13640) = 87; /*0x68390b*/
  *(_DWORD *)(this + 13680) = 100; /*0x68391a*/
  *(_DWORD *)(this + 13684) = 100; /*0x683920*/
  *(_DWORD *)(this + 13644) = 30; /*0x68392b*/
  *(_DWORD *)(this + 13648) = 40; /*0x683931*/
  *(_DWORD *)(this + 13688) = 1; /*0x68393b*/
  *(_DWORD *)(this + 13716) = 1; /*0x683941*/
  *(_BYTE *)(this + 13491) = 1; /*0x683947*/
  *(_DWORD *)(this + 13652) = 75; /*0x68394d*/
  *(_DWORD *)(this + 13656) = 0; /*0x683961*/
  *(_DWORD *)(this + 13660) = 0; /*0x683967*/
  *(_DWORD *)(this + 13664) = 200; /*0x68396d*/
  *(_DWORD *)(this + 13668) = 175; /*0x683977*/
  *(_DWORD *)(this + 13672) = 150; /*0x683981*/
  *(_DWORD *)(this + 13676) = 125; /*0x683987*/
  *(_DWORD *)(this + 13692) = 150; /*0x683991*/
  *(_DWORD *)(this + 13696) = 85; /*0x683997*/
  *(_DWORD *)(this + 13700) = 20; /*0x6839a1*/
  *(_DWORD *)(this + 13704) = 30; /*0x6839ab*/
  *(_DWORD *)(this + 13708) = 0; /*0x6839b1*/
  *(_DWORD *)(this + 13712) = 0; /*0x6839b7*/
  *(_DWORD *)(this + 13724) = 10000; /*0x6839bd*/
  *(_WORD *)(this + 13728) = 0; /*0x6839c7*/
  *(_BYTE *)(this + 13730) = 0; /*0x6839ce*/
  *(_DWORD *)(this + 13732) = 3600; /*0x6839d4*/
  *(_DWORD *)(this + 13736) = 3600; /*0x6839da*/
  *(_DWORD *)(this + 13740) = 3600; /*0x6839e0*/
  *(_BYTE *)(this + 13744) = 0; /*0x6839e6*/
  *(_BYTE *)(this + 13775) = 0; /*0x6839ec*/
  *(_BYTE *)(this + 13806) = 0; /*0x6839f2*/
  *(_BYTE *)(this + 13837) = 0; /*0x6839f8*/
  *(_BYTE *)(this + 13868) = 0; /*0x6839fe*/
  *(_BYTE *)(this + 13899) = 0; /*0x683a04*/
  *(_DWORD *)(this + 13932) = 0; /*0x683a0a*/
  *(_DWORD *)(this + 13936) = 0; /*0x683a10*/
  *(_DWORD *)(this + 13940) = 0; /*0x683a16*/
  *(_DWORD *)(this + 13944) = 0; /*0x683a1c*/
  *(_BYTE *)(this + 13948) = 0; /*0x683a22*/
  *(_BYTE *)(this + 14012) = 0; /*0x683a28*/
  *(_BYTE *)(this + 14076) = 0; /*0x683a2e*/
  *(_BYTE *)(this + 4576) = 0; /*0x683a3a*/
  *(_DWORD *)(this + 4580) = 4; /*0x683a40*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13524) + 12))(this + 13524); /*0x683a4c*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13552) + 12))(this + 13552); /*0x683a5b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13580) + 12))(this + 13580); /*0x683a6a*/
  result = (wchar_t *)g_GameMode_Current[0]; /*0x683a6d*/
  if ( g_GameMode_Current[0] == 5 ) /*0x683a79*/
  {
    String = GetStringCSF(aGuiSkirmishgam, 0, g_Str_File_Scenario_CPP, 522); /*0x683a8c*/
    return wcscpy((wchar_t *)g_ScenarioClass_Instance + 2480, String); /*0x683a9f*/
  }
  return result; /*0x683a72*/
}



// ==== 0x00683AB0  ScenarioClass::LoadScenarioAndStart  this=AbstractClass  sig=csp ====
char __fastcall Scenario_LoadAndStart(char *Source, char a2, int a3)
{
  char *v3; // ebp
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int Bool; // esi
  int v10; // eax
  int v12; // eax
  int v13; // ecx
  DWORD *v14; // esi
  int v15; // [esp+0h] [ebp-FCh]
  int v16; // [esp+4h] [ebp-F8h]
  int *v17; // [esp+8h] [ebp-F4h]
  void *v19[3]; // [esp+1Ch] [ebp-E0h] BYREF
  _DWORD v20[10]; // [esp+28h] [ebp-D4h] BYREF
  char v21; // [esp+50h] [ebp-ACh]
  int v22; // [esp+54h] [ebp-A8h]
  int v23; // [esp+58h] [ebp-A4h]
  char v24; // [esp+5Ch] [ebp-A0h]
  _DWORD v25[22]; // [esp+74h] [ebp-88h] BYREF
  _BYTE v26[12]; // [esp+CCh] [ebp-30h] BYREF
  int v27; // [esp+D8h] [ebp-24h]
  CHAR v28[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v3 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source)) && a3 != -1 ) /*0x683ade*/
  {
    if ( g_SpawnModeActive == 1 ) /*0x683ae7*/
      v3 = (char *)&unk_A83E48; /*0x683ae9*/
    else
      v3 = (char *)(*((_DWORD *)g_CampaignTypeArray + a3) + 156); /*0x683af8*/
  }
  *((_DWORD *)g_ScenarioClass_Instance + 3379) = a3; /*0x683b0a*/
  Debug::Log("\n----- Starting scnenario: %s -----\n", v3);
  Debug::Log("Player Count: %d\n", Game_PlayerCount);
  strcpy((char *)g_ScenarioClass_Instance + 4700, v3); /*0x683b47*/
  _strupr((char *)g_ScenarioClass_Instance + 4700); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !g_GameMode_Current ) /*0x683b73*/
  {
    v4 = *((_DWORD *)g_ScenarioClass_Instance + 3379); /*0x683b7b*/
    if ( v4 == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    v5 = *(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v4) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( g_GameRulesOptions != -1 ) /*0x683b9f*/
  {
    v6 = *(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions); /*0x683ba7*/
    v7 = Game::CheckForGameCD(60); /*0x683baf*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists(v7) ) /*0x683bb7*/
    {
      v5 = GameOption::GetField(v6); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(v5); /*0x683bc9*/
    }
  }
LABEL_14:
  v8 = ++g_GameFlags_Campaign; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( g_GameMode_Current == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --g_GameFlags_Campaign; /*0x683c03*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x683c11*/
  v19[1] = 0; /*0x683c18*/
  v19[2] = 0; /*0x683c1c*/
  GenericList::Constructor(v20); /*0x683c20*/
  v20[0] = &List<INIClass::INISection *>::`vftable'; /*0x683c29*/
  memset(&v20[7], 0, 12); /*0x683c32*/
  v21 = 0; /*0x683c3e*/
  v22 = 0; /*0x683c42*/
  v23 = 0; /*0x683c46*/
  v24 = 0; /*0x683c4a*/
  v19[0] = &CCINIClass_Vtable; /*0x683c4e*/
  CCFileClass::Construct(v25, v3); /*0x683c56*/
  if ( CCINIClass::Load(v19, (int)v25, 1, 0) ) /*0x683c67*/
  {
    Bool = INIClass::GetBool( /*0x683c85*/
             (unsigned __int8 ***)v19,
             (unsigned __int8 *)g_INI_Key_Basic,
             (unsigned __int8 *)g_INI_Key_Intro,
             -1);
    if ( Bool != -1 /*0x683ca5*/
      || (Bool = INIClass::GetBool(
                   (unsigned __int8 ***)v19,
                   (unsigned __int8 *)g_INI_Key_Basic,
                   (unsigned __int8 *)g_INI_Key_Brief,
                   -1),
          Bool != -1) )
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v3, v8, 1, 1, 1); /*0x683cbd*/
    }
  }
  v25[0] = &CCFileClass::`vftable'; /*0x683cc9*/
  v27 = 0; /*0x683cd1*/
  Vector::Clear((int)v26); /*0x683cd8*/
  v25[0] = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor(v25); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass(v19); /*0x683cf2*/
  Debug::Log("Reading scenario: %s\n", v3);
  v10 = StringList::Find(&g_BuildingTypeClass_Count, aLoading); /*0x683d0f*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, v10); /*0x683d1a*/
  if ( !(unsigned __int8)Scenario::LoadWithProgress(v3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  v12 = *((_DWORD *)g_ScenarioClass_Instance + 1294); /*0x683d5e*/
  if ( v12 != -1 ) /*0x683d67*/
    wsprintfA(v28, "%s.VQA", *((const char **)dword_ABF394 + v12)); /*0x683d80*/
  if ( *((int *)g_ScenarioClass_Instance + 3380) > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(*((_DWORD *)g_ScenarioClass_Instance + 1297), (int)v3, v8, 1, 1, 1); /*0x683db6*/
  v13 = g_CommandLineParam; /*0x683dc8*/
  if ( g_CreditsScreenBounds != g_CommandLineFlags || g_CreditsScreenConfig != g_CommandLineParam ) /*0x683dd6*/
  {
    Debug::Log("Toggle display mode to %d x %d\n", g_CommandLineFlags, g_CommandLineParam); /*0x683ddf*/
    ChangeVideoMode(g_CommandLineFlags, g_CommandLineParam); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(v13); /*0x683df8*/
  AudioOptionsClass::ApplySettings(g_GameModeOptions); /*0x683e02*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present(g_DSurface_Hidden, 0, (int)v3, v8, 0, v15, v16, v17); /*0x683e1c*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) == -1 ) /*0x683e35*/
  {
    v14 = (DWORD *)((char *)g_ScenarioClass_Instance + 1556); /*0x683e26*/
    *v14 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1820) == -1 ) /*0x683e50*/
    Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, *((_DWORD *)g_ScenarioClass_Instance + 1820)); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  g_BounceClassInit = 1; /*0x683e75*/
  g_FramePresent_State = 1; /*0x683e7f*/
  if ( g_GameMode_Current == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683e8f*/
  return 1; /*0x683d4a*/
}



// ==== 0x00683EB0  ScenarioClass::CleanupTemporary  this=ScenarioClass  sig=csp ====
int sub_683EB0()
{
  void *v0; // ecx
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax

  sub_406F00(); /*0x683eb1*/
  dword_83D834 = sub_4072B0((_DWORD *)g_MixerState); /*0x683ecc*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x683ed1*/
  if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x683ee2*/
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v0 = g_ScenarioClass_Instance; /*0x683f18*/
    v1 = (char *)g_ScenarioClass_Instance + 1556; /*0x683f27*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v3 = v1[2]; /*0x683f3d*/
      v4 = Ticks - *v1; /*0x683f40*/
      *v1 = -1; /*0x683f42*/
      v0 = (void *)(v4 + v3); /*0x683f48*/
      v1[2] = v0; /*0x683f4a*/
    }
  }
  LOBYTE(v0) = 1; /*0x683f4d*/
  AsyncIO::Read(v0); /*0x683f4f*/
  if ( g_TacticalRender ) /*0x683f5d*/
    Tooltip::Enable((void *)g_TacticalRender, 0); /*0x683f61*/
  Mouse::ReleaseCapture(&MapClass_Instance); /*0x683f6b*/
  Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x683f86*/
  MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x683f90*/
  TacticalMap::Redraw(&MapClass_Instance); /*0x683f9a*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
}



// ==== 0x00683FB0  ObjectClass::PostFrameCleanup  this=ObjectClass  sig=csp ====
int sub_683FB0()
{
  DWORD *v0; // esi
  void *v1; // ecx

  MouseClass::GetPosition(&MapClass_Instance); /*0x683fb7*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) == -1 ) /*0x683fd0*/
  {
    v0 = (DWORD *)((char *)g_ScenarioClass_Instance + 1556); /*0x683fc1*/
    *v0 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( g_TacticalRender ) /*0x68401d*/
    Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x684026*/
  EndBufferMixer((int *)g_MixerState, dword_83D834); /*0x684037*/
  LOBYTE(v1) = 0; /*0x68403c*/
  dword_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v1); /*0x684048*/
  return sub_406F40();
}



// ==== 0x00684060  SetScenarioClassTimer  this=RandomStruct  sig=ida-proto ====
void *__fastcall ScenarioClass_SetTimer(int a1)
{
  DWORD Ticks; // eax
  char *v3; // edx
  void *result; // eax
  _DWORD *v5; // esi
  DWORD v6; // eax
  int v7; // ecx
  DWORD v8; // eax
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 ) /*0x684068*/
  {
    Ticks = Timer::GetTicks(); /*0x68406e*/
    v3 = (char *)g_ScenarioClass_Instance + 1568; /*0x68407c*/
    *((_DWORD *)g_ScenarioClass_Instance + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = g_ScenarioClass_Instance; /*0x68409c*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)g_ScenarioClass_Instance + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)g_ScenarioClass_Instance + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)g_ScenarioClass_Instance + 1556; /*0x6840e2*/
      if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    byte_B054CC = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x68411b*/
    if ( !byte_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&MapClass_Instance); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684143*/
      *((_BYTE *)g_ScenarioClass_Instance + 13730) = 1; /*0x68414c*/
      g_GameActive = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x684160*/
      dword_B07784 = 0; /*0x684165*/
    }
  }
  result = g_ScenarioClass_Instance; /*0x68416f*/
  ++*((_DWORD *)g_ScenarioClass_Instance + 395); /*0x684174*/
  return result; /*0x68417a*/
}



// ==== 0x00684180  ScenarioClass::ProcessIntroTimer  this=ScenarioClass  sig=csp ====
_BYTE *ScenarioClass_ProcessIntroTimer()
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)g_ScenarioClass_Instance + 395); /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    *((_DWORD *)g_ScenarioClass_Instance + 395) = result - 1; /*0x684195*/
    result = g_ScenarioClass_Instance; /*0x68419b*/
    if ( !*((_DWORD *)g_ScenarioClass_Instance + 395) ) /*0x6841a0*/
    {
      if ( !byte_B054CC ) /*0x6841b6*/
      {
        if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x6841c9*/
            (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x6841d8*/
          result = g_ScenarioClass_Instance; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        g_GameActive = 0; /*0x6841fc*/
        Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x684203*/
        result = g_ScenarioClass_Instance; /*0x684208*/
        dword_B07784 = 0; /*0x68420d*/
      }
      if ( *((_DWORD *)result + 389) == -1 ) /*0x684227*/
        *((_DWORD *)result + 389) = Timer::GetTicks(); /*0x684231*/
      return (_BYTE *)sub_406F40(); /*0x684233*/
    }
  }
  return result; /*0x684239*/
}



// ==== 0x00684240  Scenario::ClearScreen  this=Scenario  sig=csp ====
HWND Scenario_ClearScreen()
{
  HWND result; // eax

  Mouse::ReleaseCapture(&MapClass_Instance); /*0x684245*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684252*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684261*/
  *((_BYTE *)g_ScenarioClass_Instance + 13730) = 1; /*0x68426c*/
  g_GameActive = 1; /*0x684278*/
  result = Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x68427d*/
  dword_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/
}



// ==== 0x00684290  ObjectClass::UpdateMouse  this=ObjectClass  sig=csp ====
HWND Mouse_Update()
{
  HWND result; // eax

  if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x6842b5*/
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ); /*0x6842c0*/
  }
  *((_BYTE *)g_ScenarioClass_Instance + 13730) = 0; /*0x6842cc*/
  g_GameActive = 0; /*0x6842d9*/
  result = Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x6842e0*/
  dword_B07784 = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}



// ==== 0x006842F0  ToggleDisplayMode  this=-  sig=ida-proto ====
char __fastcall DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = g_CommandLineFlags; /*0x6842f4*/
    if ( g_CreditsScreenBounds != g_CommandLineFlags || g_CreditsScreenConfig != g_CommandLineParam ) /*0x68430f*/
    {
      Debug::Log("Toggle display mode to %d x %d\n", g_CommandLineFlags, g_CommandLineParam); /*0x684318*/
      return ChangeVideoMode(g_CommandLineFlags, g_CommandLineParam); /*0x68432c*/
    }
  }
  else
  {
    result = g_CreditsScreenBounds; /*0x684331*/
    if ( g_CreditsScreenBounds != xRight ) /*0x68433e*/
    {
      result = yBottom; /*0x684346*/
      if ( g_CreditsScreenConfig != yBottom ) /*0x68434d*/
      {
        Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x684354*/
        return ChangeVideoMode(xRight, yBottom); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}



// ==== 0x00684370  ObjectClass::WaitForMultiplayerLoadSync  this=ObjectClass  sig=csp ====
char WaitForMultiplayerLoadSync()
{
  int v0; // ebx
  int v1; // esi
  int v2; // eax
  double v3; // st7
  char v5; // c0
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v10; // edi
  int v11; // edi
  double AverageProgress; // [esp+10h] [ebp-40h]
  DWORD v13; // [esp+20h] [ebp-30h]
  int v14; // [esp+28h] [ebp-28h]
  DWORD TicksTimer; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+34h] [ebp-1Ch]

  if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  TicksTimer = Timer::GetTicks(); /*0x6843b5*/
  v16 = 300; /*0x6843b9*/
  v13 = Timer::GetTicks(); /*0x6843cb*/
  v14 = 3600; /*0x6843d3*/
  AverageProgress = Progress::GetAverage((int)g_UIManager); /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(g_BinkMoviePlayer); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v0 = 1; /*0x6843fe*/
    if ( g_GameMode_Current[0] == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v1 = v14; /*0x684422*/
    if ( v13 != -1 ) /*0x68442b*/
    {
      v2 = Timer::GetTicks() - v13; /*0x684436*/
      if ( v2 >= v14 ) /*0x68443c*/
        break; /*0x68443c*/
      v1 = v14 - v2; /*0x684442*/
    }
    if ( v1 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    v3 = Progress::GetAverage((int)g_UIManager); /*0x684451*/
    if ( !v5 )
    {
      Multiplayer::ShowProgress(g_GameMode_Current, *((_BYTE *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    if ( v3 != AverageProgress ) /*0x684474*/
    {
      v13 = Timer::GetTicks(); /*0x684490*/
      v14 = 7200; /*0x684498*/
      AverageProgress = v3; /*0x6844a4*/
    }
    v6 = v16; /*0x6844b0*/
    if ( TicksTimer != -1 ) /*0x6844b6*/
    {
      v7 = Timer::GetTicks() - TicksTimer; /*0x6844c1*/
      if ( v7 >= v16 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v16 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
LABEL_18:
      TicksTimer = Timer::GetTicks(); /*0x6844d3*/
      v16 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress(g_GameMode_Current, *((_BYTE *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x68453f*/
  {
    if ( Progress::GetWeighted((int)g_UIManager, v0) < 0.999 ) /*0x68455b*/
    {
      v10 = *(char **)(Game_PlayerInfoArray + 4 * i); /*0x684562*/
      ToWideStringChar(v10); /*0x684567*/
      ToWideStringChar(v10); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v11 = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v11, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)g_GameMode_Current, *(#375 **)&HouseClass_Array->gap0[4 * v11]) ) /*0x6845aa*/
      {
        dword_A8E2AC = -1; /*0x6845bf*/
        memset(word_A8E258, 0, 0x28u); /*0x6845c9*/
        unk_A8E280 = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v0; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}



// ==== 0x00684620  Scenario::LoadWithProgress  this=AbstractClass  sig=csp ====
char __thiscall Scenario_LoadWithProgress(const char *this)
{
  char v1; // al
  wchar_t *v2; // edi
  wchar_t *String; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  _WORD *v12; // edi
  int v13; // eax
  char v14; // bl
  int v15; // ecx
  wchar_t *v16; // eax
  char v18; // bl
  int i; // esi
  int j; // esi
  wchar_t *v21; // [esp-10h] [ebp-258h]
  char v22; // [esp-8h] [ebp-250h]
  const wchar_t *v23; // [esp-4h] [ebp-24Ch]
  int v24; // [esp-4h] [ebp-24Ch]
  int v25; // [esp+10h] [ebp-238h]
  _BYTE v26[8]; // [esp+14h] [ebp-234h] BYREF
  const wchar_t *v27; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v29; // [esp+30h] [ebp-218h]
  int v30; // [esp+34h] [ebp-214h]
  int v31; // [esp+38h] [ebp-210h]
  int v32; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v34[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, this); /*0x684653*/
  g_CurrentFrame = 0; /*0x68466b*/
  *((_BYTE *)g_ScenarioClass_Instance + 13720) = 1; /*0x684675*/
  ++g_IKnowWhatImDoing; /*0x684685*/
  if ( _strcmpi(&Source[strlen(Source) - 4], aSed) ) /*0x684694*/
    *((_BYTE *)g_ScenarioClass_Instance + 13501) = 0; /*0x6846be*/
  else
    *((_BYTE *)g_ScenarioClass_Instance + 13501) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v25 = 0; /*0x6846d4*/
  if ( !g_ArmageddonMode ) /*0x6846d8*/
  {
    v1 = 1; /*0x6846eb*/
    if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x6846f2*/
      v1 = Game_PlayerCount; /*0x6846f4*/
    ProgressAnim::Init((int)g_UIManager, 0, 1079574528, v1, 0); /*0x684706*/
    v2 = 0; /*0x684710*/
    if ( g_GameMode_Current[0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x68471c*/
    {
      v23 = dword_B779D4; /*0x684729*/
      String = GetStringCSF(aTxtGameId, 0, g_Str_File_Scenario_CPP, 1199); /*0x684736*/
      swprintf(v34, (const size_t)String, v23); /*0x684744*/
      v2 = v34; /*0x68474c*/
    }
    v4 = LoadProgressMgr::GetInstance(); /*0x684758*/
    v25 = v4; /*0x68475c*/
    Scenario::ComputeDisplayPosition(v4); /*0x684760*/
    Function::643E80(v4); /*0x68476b*/
    v5 = 0; /*0x68477c*/
    if ( g_GameMode_Current[0] ) /*0x684780*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 75); /*0x6847a4*/
      if ( v7 == -3 ) /*0x6847aa*/
        v7 = 0; /*0x6847ac*/
      v5 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v7) + 188); /*0x6847b7*/
    }
    else
    {
      v6 = *((_DWORD *)g_ScenarioClass_Instance + 3379); /*0x684782*/
      if ( v6 != -1 ) /*0x68478b*/
        v5 = *(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v6) + 152); /*0x684795*/
    }
    *((_DWORD *)g_ScenarioClass_Instance + 3374) = v5; /*0x6847c3*/
    Scenario::SetDword32(v5); /*0x6847c9*/
    v8 = LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v8); /*0x6847d5*/
    if ( g_GameMode_Current[0] ) /*0x6847e1*/
    {
      SHPClass::Load((int)g_UIManager, g_Str_File_PROGBARM_SHP, 0, 0); /*0x684800*/
    }
    else
    {
      v24 = Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((int)g_UIManager, aSpldbrShp, 0, v24); /*0x6847f0*/
    }
    v22 = g_GameMode_Current[0] != 0; /*0x684819*/
    v9 = (int *)Scenario::ComputeDialogPos(v26); /*0x68481e*/
    TextRenderer::MeasureBuilding((int)g_UIManager, *v9, v9[1], (int)v2, v22, v22); /*0x68482f*/
    v10 = Map_Load(v4); /*0x684836*/
    Scenario::SetDword30(v10); /*0x684841*/
    if ( g_NetworkInterface ) /*0x68484d*/
    {
      if ( g_GameMode_Current[0] == 4 && Game_PlayerCount > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 48))(g_NetworkInterface); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v29 = 0; /*0x6848a3*/
        v30 = 0; /*0x6848b0*/
        v31 = 0; /*0x6848b6*/
        v32 = 0; /*0x6848be*/
        v11 = 1; /*0x6848c2*/
        if ( Game_PlayerCount > 1 ) /*0x6848c4*/
        {
          v12 = (_WORD *)(&Network_PlayerPorts + 2); /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v11) + 40), &v27, (int)v26); /*0x6848e5*/
            sprintf(Buffer, "%d.%d.%d.%d", v26[0], v26[1], v26[2], v26[3]); /*0x68491f*/
            Debug::Log(); /*0x68492e*/
            LOWORD(v13) = *v12; /*0x684933*/
            (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)g_NetworkInterface + 44))( /*0x684947*/
              g_NetworkInterface,
              Buffer,
              v13);
            ++v11; /*0x68494f*/
            ++v12; /*0x684950*/
          }
          while ( v11 < Game_PlayerCount ); /*0x684955*/
        }
      }
    }
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13501) ) /*0x684961*/
  {
    v14 = Scenario::LoadOrReloadOptions(Source); /*0x68497a*/
    if ( v14 ) /*0x68497e*/
    {
      RandomMap::Generate((int *)dword_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v15) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v15); /*0x684990*/
    }
    strcpy((char *)g_ScenarioClass_Instance + 4700, Source); /*0x6849b8*/
  }
  else
  {
    v14 = ScenarioClass::Construct(Source); /*0x6849ce*/
  }
  if ( !BYTE2(g_RulesClass_Instance[1].NukeTakeOff) ) /*0x6849d6*/
    MapClass::ClearShroud(&MapClass_Instance, 0); /*0x6849e7*/
  if ( v14 )
  {
    MessageListClass::Init( /*0x684ac9*/
      g_GameNetworkObject,
      DSurface_ViewBounds + 3,
      g_Map_VisibleRect,
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      g_Map_VisibleRectOffset - 6);
    PostLoadInitScenario(); /*0x684ace*/
    if ( g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress(g_GameMode_Current, 99); /*0x684ae8*/
      if ( g_GameMode_Current[0] == 4 ) /*0x684af3*/
      {
        if ( g_Network_IsHosting ) /*0x684afc*/
          Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x3A98u, 1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress(g_GameMode_Current, *((_BYTE *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
    byte_A8B8C1 = 0; /*0x684b30*/
    byte_A8B8C2 = 0; /*0x684b37*/
    v18 = WaitForMultiplayerLoadSync(); /*0x684b43*/
    if ( g_GameMode_Current[0] == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances(g_GameMode_Current); /*0x684b53*/
    --g_IKnowWhatImDoing; /*0x684b66*/
    if ( !g_ArmageddonMode ) /*0x684b6c*/
    {
      if ( v18 ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        while ( Progress::GetAverage((int)g_UIManager) < 1.0 ) /*0x684b8c*/
        {
          for ( i = 0; i < Game_PlayerCount; ++i ) /*0x684b97*/
            Network::UpdateLatencyDisplay((int)g_UIManager, i, 100.0, NAN); /*0x684bae*/
        }
      }
    }
    *((_BYTE *)g_ScenarioClass_Instance + 13720) = 0; /*0x684bde*/
    Scenario::SetByte96(g_UIManager); /*0x684be5*/
    if ( v25 ) /*0x684bf0*/
    {
      Function::643E80(0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v25); /*0x684c00*/
    }
    for ( j = HouseClass_Count - 1; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*(_DWORD *)&HouseClass_Array->gap0[4 * j]); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v27 = asc_82083C; /*0x684a31*/
    v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a45*/
    v16 = GetStringCSF(aTxtUnableReadS, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a50*/
    Dialog::ShowMessageBox(4, v16, v21, 0, 0, 0); /*0x684a5a*/
    --g_IKnowWhatImDoing; /*0x684a6b*/
    *((_BYTE *)g_ScenarioClass_Instance + 13720) = 0; /*0x684a71*/
    if ( v25 ) /*0x684a7d*/
    {
      Function::643E80(0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}



// ==== 0x00684C30  ObjectClass::PostLoadInitScenario  this=ObjectClass  sig=csp ====
int __usercall ScenarioClass_PostLoadInit@<eax>(int a1@<edi>)
{
  int i; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int j; // ebx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // ebp
  int v25; // eax
  int m; // eax
  void *v27; // esi
  int v28; // eax
  int n; // esi
  void **v30; // edi
  int *v31; // eax
  int k; // [esp+20h] [ebp-10h]
  int v34; // [esp+24h] [ebp-Ch] BYREF
  int v35; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++g_IKnowWhatImDoing; /*0x684c3f*/
  for ( i = 0; i < g_BuildingProductionState; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)g_BuildingClass_InstanceCount + i) + 1248))(*((_DWORD *)g_BuildingClass_InstanceCount /*0x684c58*/
                                                                                               + i));
  MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x684c6f*/
  if ( !g_ArmageddonMode ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar(&MapClass_Instance, a1, 1); /*0x684c88*/
    if ( !g_GameMode_Current[0] ) /*0x684c94*/
    {
      if ( byte_8A38E0 ) /*0x684ca7*/
        v2 = *((_DWORD *)g_ScenarioClass_Instance + 132); /*0x684ca9*/
      else
        v2 = *((_DWORD *)g_ScenarioClass_Instance + 131); /*0x684cb1*/
      v3 = *(_DWORD *)((char *)g_ScenarioClass_Instance + 4 * v2 + 1586); /*0x684cb7*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466) = v3; /*0x684cbe*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466); /*0x684cd4*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462); /*0x684ce9*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13454) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458); /*0x684d03*/
      v34 = ((__int16)v3 << 8) + 128; /*0x684d09*/
      v35 = (SHIWORD(v3) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v34); /*0x684d3e*/
      TacticalClass::SetPositionThunk((int)&v34); /*0x684d42*/
    }
  }
  v4 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    v6 = (_DWORD *)*((_DWORD *)dword_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x684d68*/
    {
      v7 = TeamClass::FindOrCreate(v6); /*0x684d77*/
      if ( dword_8B41B8 < dword_8B41B0 /*0x684da9*/
        || (byte_8B41B5 || !dword_8B41B0)
        && dword_8B41BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41A8 + 8))(
             &dword_8B41A8,
             dword_8B41B0 + dword_8B41BC,
             0) )
      {
        v8 = dword_8B41B8++; /*0x684db6*/
        *((_DWORD *)dword_8B41AC + v8) = v7; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 0x10) != 0 ) /*0x684dd1*/
    {
      v9 = TeamClass::FindOrCreate(v6); /*0x684de0*/
      if ( g_ScenarioUpdateState < dword_8B40D0 /*0x684e13*/
        || (byte_8B40D5 || !dword_8B40D0)
        && dword_8B40DC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40C8 + 8))(
             &dword_8B40C8,
             dword_8B40D0 + dword_8B40DC,
             0) )
      {
        v10 = g_ScenarioUpdateState++; /*0x684e20*/
        *((_DWORD *)dword_8B40CC + v10) = v9; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 8) != 0 ) /*0x684e3b*/
    {
      v11 = TeamClass::FindOrCreate(v6); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v13 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        v14 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v13 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v13)
          && (v15 = *(_DWORD *)(Owner + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v13 + v15, 0) )
        {
          v16 = v14[4]; /*0x684e93*/
          v17 = v14[1]; /*0x684e96*/
          v14[4] = v16 + 1; /*0x684e9c*/
          *(_DWORD *)(v17 + 4 * v16) = v11; /*0x684e9f*/
        }
      }
    }
    v4 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  v18 = 0; /*0x684eb6*/
  --g_IKnowWhatImDoing; /*0x684ebb*/
  if ( v4 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v19 = *((_DWORD *)dword_B0E784 + v18); /*0x684ec8*/
      if ( (unsigned __int8)TagClass::HasValidHouse(v19) ) /*0x684ecd*/
      {
        v20 = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(v19 + 160) + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v20 + 636); /*0x684eed*/
      }
      ++v18; /*0x684ef8*/
    }
    while ( v18 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13490) ) /*0x684f02*/
  {
    v21 = 0; /*0x684f12*/
    for ( k = 0; v21 < HouseClass_Count; k = v21 ) /*0x684f1a*/
    {
      v22 = *(_DWORD *)&HouseClass_Array->gap0[4 * v21]; /*0x684f23*/
      if ( v22 ) /*0x684f28*/
      {
        v23 = (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 24))(v22 + 36); /*0x684f34*/
        v24 = *(_DWORD *)BuildingClass_InstanceArray->gap0; /*0x684f3b*/
        if ( v23 > *(_DWORD *)(*(_DWORD *)BuildingClass_InstanceArray->gap0 + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 28))(v22 + 36) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(1.0, 0); /*0x684f58*/
            v25 = *(_DWORD *)(v24 + 184); /*0x684f5d*/
            v23 -= v25; /*0x684f63*/
          }
          while ( v23 > v25 ); /*0x684f69*/
        }
        v21 = k; /*0x684f6b*/
      }
      ++v21; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(); /*0x684f8e*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext(&MapClass_Instance); m; m = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x684fa9*/
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  MapClass::ProcessRegion(&MapClass_Instance); /*0x684fc7*/
  Terrain::ConnectivityGraph(&MapClass_Instance); /*0x684fd1*/
  MapClass::BuildSubzones(&MapClass_Instance); /*0x684fdb*/
  MarkCliffEdgePassability(&MapClass_Instance); /*0x684fe5*/
  if ( !dword_A8ED78 ) /*0x684ff0*/
  {
    v27 = __2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v27 ) /*0x685003*/
    {
      v34 = 2688; /*0x68500f*/
      v35 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v28 = WarheadTypeClass::applyDamage(aGascloudsys); /*0x68501b*/
      dword_A8ED78 = ParticleSystemClass::Constructor( /*0x685040*/
                       (int)v27,
                       *((_DWORD *)dword_A83D6C + v28),
                       &v34,
                       0,
                       0,
                       &dword_B05488,
                       0);
    }
    else
    {
      dword_A8ED78 = 0; /*0x685047*/
    }
  }
  if ( g_RulesClass_Instance[1].DMisl[11] ) /*0x685052*/
  {
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x685063*/
    for ( n = LayerClass::CellIteratorNext(&MapClass_Instance); n; n = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x685076*/
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_RulesClass_Instance[1].DMisl[10] - 1) ) /*0x68509e*/
        {
          v30 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v30 ) /*0x6850b8*/
          {
            v31 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)n + 72))(n, &v34); /*0x6850cd*/
            AnimClass::ctor(v30, (void *)g_RulesClass_Instance[1].DMisl[11], v31, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateNormal); /*0x6850fd*/
  return Map_Init(g_RulesClass_Instance->DetailBufferZoneWidth); /*0x685110*/
}



// ==== 0x00685120  ObjectClass::Game_Load  this=ObjectClass  sig=csp ====
int sub_685120()
{
  int v0; // ecx

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685147*/
  LoadFactoryClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x685158*/
  RadarClass::InitializeHashTable((int *)&MapClass_Instance); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)g_CurrentFrame - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v0 = 0; /*0x68518f*/
    else
      v0 = dword_B0EA88 - ((_DWORD)g_CurrentFrame - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v0; /*0x685191*/
  }
  dword_B0EA80 = (int)g_CurrentFrame; /*0x6851a1*/
  CellClass::setOverlayType((void **)g_AudioInitFlag, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(); /*0x6851b1*/
  MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}



// ==== 0x006851F0  ObjectClass::ResetScenario  this=ObjectClass  sig=csp ====
int ScenarioClass_Reset()
{
  int i; // esi
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  char *v6; // edi
  int j; // esi
  _BYTE *v8; // eax
  void *v9; // eax
  IPersistStream *v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  int result; // eax

  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x6851fc*/
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 1; /*0x68520c*/
  dword_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  HouseClass_Player = 0; /*0x685231*/
  ScenarioClass::InitTimer((int)g_ScenarioClass_Instance); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = g_AbstractTypePool - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)dword_A8E96C + i) + 4) + 12))(*((_DWORD *)dword_A8E96C + i) + 4) == 18 /*0x68526c*/
      && i < g_AbstractTypePool )
    {
      v1 = i; /*0x68526f*/
      if ( i < --g_AbstractTypePool ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v1; /*0x685281*/
          *((_DWORD *)dword_A8E96C + v1 - 1) = *((_DWORD *)dword_A8E96C + v1); /*0x685285*/
        }
        while ( v1 < g_AbstractTypePool ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v2 = 0; /*0x6852a1*/
  if ( g_TechnoClassCount > 0 ) /*0x6852a5*/
  {
    v3 = dword_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v4 = *((_DWORD *)g_FrameCounter + v2); /*0x6852b2*/
      if ( g_AbstractTypePool < v3 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !byte_A8E975 && v3 || dword_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))( /*0x6852e4*/
             &dword_A8E968,
             v3 + dword_A8E97C,
             0) )
      {
LABEL_14:
        v5 = g_AbstractTypePool++; /*0x6852f1*/
        *((_DWORD *)dword_A8E96C + v5) = v4; /*0x685300*/
      }
      v3 = dword_A8E970; /*0x685303*/
LABEL_16:
      ++v2; /*0x685308*/
    }
    while ( v2 < g_TechnoClassCount ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((int *)&MapClass_Instance); /*0x685313*/
  dword_87F848 = 0; /*0x685322*/
  if ( dword_87F83C && byte_87F845 ) /*0x685332*/
  {
    __3_YAXPAX_Z(dword_87F83C); /*0x685335*/
    dword_87F83C = 0; /*0x68533d*/
  }
  byte_87F845 = 0; /*0x685343*/
  dword_87F840 = 0; /*0x685349*/
  Map_Reset_6E5570(); /*0x68534f*/
  v6 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v8 = g_ScenarioClass_Instance; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)g_ScenarioClass_Instance + j + 7344) ) /*0x685365*/
    {
      *((_BYTE *)g_ScenarioClass_Instance + j + 7344) = 0; /*0x68536e*/
      v8[13482] = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v6); /*0x68537e*/
    }
    ++v6; /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->lpVtbl[1].QueryInterface)( /*0x68539e*/
      g_TacticalClass_Instance,
      1);
  v9 = __2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v9 ) /*0x6853b0*/
    v10 = (IPersistStream *)TacticalMap::Construct((int)v9); /*0x6853b4*/
  else
    v10 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v10; /*0x6853bf*/
  Map_Setup_6DA980(v10); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( g_PlacementCellPool ) /*0x6853d6*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_A8E364 + 44))(*(_DWORD *)dword_A8E364) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)dword_A8E364 + 8))(*(_DWORD *)dword_A8E364); /*0x6853f3*/
    }
    else if ( *(_DWORD *)dword_A8E364 ) /*0x6853fe*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E364 + 32))(*(_DWORD *)dword_A8E364, 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( g_MultiplayerCleanup ) /*0x685421*/
  {
    if ( *(_DWORD *)dword_B0E784 ) /*0x685429*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0E784 + 32))(*(_DWORD *)dword_B0E784, 1); /*0x685433*/
  }
  dword_8B41B8 = 0; /*0x685443*/
  if ( dword_8B41AC && byte_8B41B5 ) /*0x685453*/
  {
    __3_YAXPAX_Z(dword_8B41AC); /*0x685456*/
    dword_8B41AC = 0; /*0x68545e*/
  }
  byte_8B41B5 = 0; /*0x685469*/
  dword_8B41B0 = 0; /*0x685471*/
  g_ScenarioUpdateState = 0; /*0x685477*/
  if ( dword_8B40CC && byte_8B40D5 ) /*0x685485*/
  {
    __3_YAXPAX_Z(dword_8B40CC); /*0x685488*/
    dword_8B40CC = 0; /*0x685490*/
  }
  byte_8B40D5 = 0; /*0x68549b*/
  dword_8B40D0 = 0; /*0x6854a1*/
  *((_DWORD *)g_ScenarioClass_Instance + 3433) = 3600; /*0x6854a7*/
  *((_DWORD *)g_ScenarioClass_Instance + 3434) = *((_DWORD *)g_ScenarioClass_Instance + 3433); /*0x6854bc*/
  *((_DWORD *)g_ScenarioClass_Instance + 3435) = *((_DWORD *)g_ScenarioClass_Instance + 3433); /*0x6854cd*/
  *((_BYTE *)g_ScenarioClass_Instance + 13744) = 0; /*0x6854d8*/
  *((_BYTE *)g_ScenarioClass_Instance + 13775) = 0; /*0x6854e4*/
  *((_BYTE *)g_ScenarioClass_Instance + 13806) = 0; /*0x6854f0*/
  *((_BYTE *)g_ScenarioClass_Instance + 13837) = 0; /*0x6854fb*/
  Map_Reset_5549A0(); /*0x685501*/
  Map_Reset(); /*0x685506*/
  sub_4C5470(); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&dword_87F5D8); /*0x685524*/
  LoadGame::CleanupArray(&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots(g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  dword_87F8D4 = 0; /*0x68554f*/
  dword_87F8D8 = 0; /*0x685554*/
  g_Cell_PositionLUT = 0; /*0x68555a*/
  g_CellPositionOffset = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick(&MapClass_Instance); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(int *))(g_GameConfigManager + 12))(&g_GameConfigManager); /*0x685590*/
  Debug::Log(); /*0x685598*/
  g_SelectionManager = 0; /*0x6855a7*/
  if ( g_ObjectClass_CurrentCount && byte_A8ECC5 ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(g_ObjectClass_CurrentCount); /*0x6855b8*/
    g_ObjectClass_CurrentCount = 0; /*0x6855c0*/
  }
  byte_A8ECC5 = 0; /*0x6855cb*/
  dword_A8ECC0 = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v11 = (char *)g_ScenarioClass_Instance + 1586; /*0x6855e4*/
  v12 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v11++ = dword_B05458; /*0x6855f4*/
    --v12; /*0x6855f9*/
  }
  while ( v12 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( dword_A8ED78 ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(); /*0x685618*/
    if ( dword_A8ED78 ) /*0x685625*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8ED78 + 32))(dword_A8ED78, 1); /*0x68562b*/
    dword_A8ED78 = 0; /*0x68562e*/
  }
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x685659*/
  return result; /*0x685657*/
}



// ==== 0x00685670  Scenario::EndGameFlow  this=Scenario  sig=csp ====
__int16 __usercall Scenario_EndGameFlow@<ax>(char a1@<bl>)
{
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  wchar_t *String; // eax
  int v9; // eax
  int v10; // ecx
  char v11; // al
  __int16 result; // ax
  Iostream_init *v13; // eax
  int v14; // ecx
  int v15; // ecx
  _BYTE *v16; // ecx
  int v17; // ecx
  void *v18; // eax
  LPARAM v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+Bh] [ebp-81h] BYREF
  _DWORD v28[8]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v29[8]; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD v30[8]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v31[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( g_GameMode_Current && g_GameMode_Current != 5 && (g_NetworkEventPending & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(); /*0x68568d*/
    Map_Get_55CF10(); /*0x685692*/
  }
  v1 = (char *)g_ScenarioClass_Instance + 1556; /*0x68569f*/
  g_BounceClassInit = 0; /*0x6856a5*/
  g_FramePresent_State = 0; /*0x6856ac*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    v3 = v1[2]; /*0x6856c7*/
    v4 = Ticks - *v1; /*0x6856ca*/
    *v1 = -1; /*0x6856cc*/
    v1[2] = v4 + v3; /*0x6856d0*/
  }
  AsyncIO::Shutdown(); /*0x6856d3*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x6856e8*/
    g_WWMouseClass_Instance,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x6856f3*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x68570c*/
  Audio::GetFlag(g_MixerState); /*0x685715*/
  Audio::WaitForCallback(g_MixerState); /*0x685720*/
  v5 = g_PerformanceTickOffset; /*0x68572a*/
  if ( g_LastPerformanceTick != -1 ) /*0x685732*/
    v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685744*/
  v6 = v5 + 300; /*0x685746*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68574c*/
  {
    v5 = g_PerformanceTickOffset; /*0x68575a*/
    if ( g_LastPerformanceTick != -1 ) /*0x685762*/
      v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685774*/
    if ( v6 <= v5 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x6857ca*/
  {
    Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x6857d1*/
    ChangeVideoMode(xRight, yBottom); /*0x6857e5*/
  }
  v7 = g_GameMode_Current; /*0x6857ea*/
  if ( !g_GameMode_Current ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  a1 = 0; /*0x685802*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685807*/
  {
    v10 = g_GameStateFlags; /*0x6858c6*/
LABEL_36:
    g_CurrentPlayerName = 0; /*0x6858ce*/
    if ( v10 ) /*0x6858d7*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 164))(v10, 1); /*0x6858dd*/
    g_WTFMode = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685817*/
  if ( g_GameMode_Current == 4 ) /*0x68581d*/
  {
    String = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, String); /*0x685839*/
    v7 = g_GameMode_Current; /*0x68583e*/
  }
  v5 = 0; /*0x685849*/
  if ( !g_GameStateFlags ) /*0x68584d*/
  {
    g_CurrentPlayerName = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(unsigned __int8 (**)(void))(*(_DWORD *)g_GameStateFlags + 8))() ) /*0x68585a*/
  {
    g_CurrentPlayerName = 0; /*0x68586c*/
LABEL_28:
    v9 = Scenario::ResetDisplayArrays(&v27); /*0x685884*/
    Map_Load_5C9720(v9); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
LABEL_29:
  v10 = g_GameStateFlags; /*0x685890*/
  if ( g_GameStateFlags ) /*0x685898*/
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 168))(g_GameStateFlags); /*0x68589c*/
    v10 = g_GameStateFlags; /*0x6858a2*/
    a1 = v11; /*0x6858a8*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x6858b8*/
    dword_A8D588 = 3; /*0x6858ba*/
  if ( !a1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 172))(v10); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
LABEL_40:
  Movie::PlayWrapper(*((_DWORD *)g_ScenarioClass_Instance + 1295), -1, 3, 1, 1, 1); /*0x685915*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685940*/
  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13486) ) /*0x68594b*/
  {
    v13 = __0Iostream_init_QAE_XZ_5((Iostream_init *)&v27); /*0x685959*/
    Map_Load_6C8E80(v13); /*0x685960*/
  }
  v14 = *((_DWORD *)g_ScenarioClass_Instance + 1298); /*0x68596b*/
  if ( v14 != -1 ) /*0x685973*/
    Movie::PlayWrapper(v14, -1, 3, 1, 1, 1); /*0x68597d*/
  v15 = *((_DWORD *)g_ScenarioClass_Instance + 1299); /*0x685987*/
  if ( v15 != -1 ) /*0x68598f*/
    Movie::PlayWrapper(v15, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !(unsigned __int8)CopyProtection::CheckProtectedData() /*0x6859b1*/
    || (v16 = g_ScenarioClass_Instance, *((_BYTE *)g_ScenarioClass_Instance + 13487)) )
  {
    g_WTFMode = 0; /*0x685b33*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685b49*/
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13484) ) /*0x6859bf*/
  {
    v17 = *((_DWORD *)g_ScenarioClass_Instance + 3379); /*0x6859c9*/
    if ( v17 != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v17) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(a1, 3, v5); /*0x6859ee*/
    g_WTFMode = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a0f*/
  }
  if ( g_GameMode_Current != 3 && g_GameMode_Current != 4 || !g_GameStateFlags ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) ) /*0x685a2b*/
  {
    v16 = g_ScenarioClass_Instance; /*0x685a32*/
LABEL_58:
    if ( v16[13488] ) /*0x685a38*/
    {
      if ( v16[7385] ) /*0x685a42*/
        Map_Delete_5ADE20(v16, v16 + 264); /*0x685a52*/
      else
        Map_Delete_5ADE20(v16, v16 + 4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a6b*/
      Map_Delete(g_ScenarioClass_Instance); /*0x685a74*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x685a81*/
    }
  }
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685a84*/
LABEL_64:
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a8f*/
  Scenario::CopyLocalScenarioData(&byte_8A38E0); /*0x685a9f*/
  ++*((_DWORD *)g_ScenarioClass_Instance + 1173); /*0x685ab0*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685ada*/
    && g_GameStateFlags
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    if ( g_GameMode_Current == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 4))(g_NetworkInterface); /*0x685af5*/
      if ( g_NetworkInterface ) /*0x685b00*/
        (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685b06*/
      g_NetworkInterface = 0; /*0x685b0d*/
      v18 = __2_YAPAXI_Z(0x3F310u); /*0x685b13*/
      if ( v18 ) /*0x685b1d*/
        g_NetworkInterface = IPXInterfaceClass::Construct(v18); /*0x685b26*/
      else
        g_NetworkInterface = 0; /*0x685b4a*/
    }
    WinsockInterface::Init((_DWORD *)g_NetworkInterface); /*0x685b56*/
    v19 = g_Rules_AlliesAllowed; /*0x685b69*/
    qmemcpy(v31, &g_NetworkPlayerName, sizeof(v31)); /*0x685b6f*/
    qmemcpy(v29, g_CampaignConfig, sizeof(v29)); /*0x685b7f*/
    qmemcpy(v28, g_CampaignPlayerArray, sizeof(v28)); /*0x685b8f*/
    qmemcpy(v30, dword_A8B27C, sizeof(v30)); /*0x685b9f*/
    result = InitNetworkGameState(); /*0x685ba1*/
    if ( !(_BYTE)result ) /*0x685ba8*/
    {
      if ( g_NetworkInterface ) /*0x685bb2*/
      {
        result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685bb8*/
        g_NetworkInterface = 0; /*0x685bba*/
      }
      g_WTFMode = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    g_Rules_AlliesAllowed = v19; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v21 = v28[i]; /*0x685be2*/
      dword_A8B27C[i] = v30[i]; /*0x685be6*/
      v22 = v29[i]; /*0x685bec*/
      g_CampaignPlayerArray[i] = v21; /*0x685bf0*/
      v23 = v31[i]; /*0x685bf6*/
      g_CampaignConfig[i] = v22; /*0x685bfa*/
      *(LPARAM *)((char *)&g_NetworkPlayerName + i * 4) = v23; /*0x685c00*/
    }
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685c14*/
  }
  g_WTFMode = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !g_WTFMode ) /*0x685c28*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685c32*/
  while ( !(unsigned __int8)ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
                              (char *)g_ScenarioClass_Instance + 4700,
                              *((_DWORD *)g_ScenarioClass_Instance + 3379)) )
    ; /*0x685c5d*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685c9d*/
    && g_GameStateFlags
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    SessionClass::CreateConnections(&g_GameMode_Current); /*0x685cad*/
    if ( g_GameMode_Current == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0xF ) /*0x685ccc*/
        v24 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685cdf*/
      else
        v24 = 15; /*0x685cce*/
      Network::SetConnectionParams(g_NetworkManager, v24, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d05*/
        v25 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d18*/
      else
        v25 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(v25, -1, 600); /*0x685d27*/
    }
    else if ( g_GameMode_Current == 4 && !g_GameSessionFlags ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d4c*/
        v26 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d5f*/
      else
        v26 = 60; /*0x685d4e*/
      Network::SetConnectionParams(g_NetworkManager, v26, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore(&byte_8A38E0); /*0x685d7a*/
  if ( g_TacticalRender ) /*0x685d87*/
    Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x685d90*/
  TacticalMap::Redraw(&MapClass_Instance); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}



// ==== 0x00685DC0  Scenario::EndGame  this=Scenario  sig=csp ====
char Scenario_EndGame()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // eax
  char v8; // bl
  wchar_t *String; // eax
  int v10; // eax
  int v11; // ecx
  char v12; // al
  LONG v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  _DWORD *v16; // eax
  LPARAM v17; // ebp
  int i; // eax
  int v19; // edx
  int v20; // ecx
  LPARAM v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wchar_t *v26; // [esp-1Ah] [ebp-A8h]
  wchar_t *v27; // [esp-16h] [ebp-A4h]
  char v28; // [esp+9h] [ebp-85h] BYREF
  const wchar_t *v29; // [esp+Ah] [ebp-84h]
  _DWORD v30[8]; // [esp+Eh] [ebp-80h] BYREF
  _DWORD v31[8]; // [esp+2Eh] [ebp-60h] BYREF
  _DWORD v32[8]; // [esp+4Eh] [ebp-40h] BYREF
  _DWORD v33[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 && (g_NetworkEventPending & 2) == 0 ) /*0x685ddb*/
  {
    RunNetworkGameLoop(); /*0x685ddd*/
    Map_Get_55CF10(); /*0x685de2*/
  }
  v0 = (char *)g_ScenarioClass_Instance + 1556; /*0x685def*/
  g_BounceClassInit = 0; /*0x685df5*/
  g_FramePresent_State = 0; /*0x685dfc*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    v2 = v0[2]; /*0x685e17*/
    v3 = Ticks - *v0; /*0x685e1a*/
    *v0 = -1; /*0x685e1c*/
    v0[2] = v3 + v2; /*0x685e20*/
  }
  AsyncIO::Shutdown(); /*0x685e23*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x685e38*/
    g_WWMouseClass_Instance,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x685e43*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x685e5c*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x685e7b*/
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(xRight, yBottom); /*0x685e96*/
  }
  Audio::GetFlag(g_MixerState); /*0x685ea1*/
  Audio::WaitForCallback(g_MixerState); /*0x685eac*/
  v4 = g_PerformanceTickOffset; /*0x685eb6*/
  if ( g_LastPerformanceTick != -1 ) /*0x685ebe*/
    v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685ed0*/
  v5 = v4 + 300; /*0x685ed2*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x685ed8*/
  {
    v6 = g_PerformanceTickOffset; /*0x685ee6*/
    if ( g_LastPerformanceTick != -1 ) /*0x685eee*/
      v6 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685f00*/
    if ( v5 <= v6 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x685f35*/
  v7 = g_GameMode_Current[0]; /*0x685f3a*/
  v8 = 0; /*0x685f41*/
  if ( !g_GameMode_Current[0] ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685f52*/
  {
    v11 = g_GameStateFlags; /*0x686014*/
LABEL_36:
    g_CurrentPlayerName[0] = 0; /*0x68601a*/
    if ( v11 ) /*0x686023*/
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 164))(v11, 0); /*0x686028*/
    g_WTFMode = 0; /*0x686035*/
    LOBYTE(v13) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68603c*/
    return v13; /*0x68604b*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685f62*/
  if ( g_GameMode_Current[0] == 4 ) /*0x685f68*/
  {
    String = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2492); /*0x685f7b*/
    ChatMessageWOL(1, String); /*0x685f84*/
    v7 = g_GameMode_Current[0]; /*0x685f89*/
  }
  if ( !g_GameStateFlags ) /*0x685f96*/
  {
    g_CurrentPlayerName[0] = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(unsigned __int8 (**)(void))(*(_DWORD *)g_GameStateFlags + 8))() ) /*0x685fa4*/
  {
    g_CurrentPlayerName[0] = 0; /*0x685fb6*/
LABEL_28:
    v10 = Scenario::ResetDisplayArrays(&v28); /*0x685fce*/
    Map_Load_5C9720(v10); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
LABEL_29:
  v11 = g_GameStateFlags; /*0x685fda*/
  if ( g_GameStateFlags ) /*0x685fe2*/
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 168))(g_GameStateFlags); /*0x685fe6*/
    v11 = g_GameStateFlags; /*0x685fec*/
    v8 = v12; /*0x685ff2*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x686002*/
    dword_A8D588 = 3; /*0x686004*/
  if ( !v8 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 172))(v11); /*0x68604e*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68605b*/
LABEL_40:
  Movie::PlayWrapper(*((_DWORD *)g_ScenarioClass_Instance + 1296), -1, v5, 1, 1, 1); /*0x686060*/
  LOBYTE(v13) = Screen::Capture(1, 0, v8, -1); /*0x68607c*/
  if ( g_GameMode_Current[0] /*0x6860ec*/
    || (g_NetworkEventPending & 2) != 0
    || (v29 = asc_82083C,
        v27 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_Scenario_CPP, 2559),
        v26 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_Scenario_CPP, 2559),
        v14 = GetStringCSF(aTxtToReplay, 0, g_Str_File_Scenario_CPP, 2559),
        (v13 = Dialog::ShowMessageBox(-1, v14, v26, v27, 0, 0)) != 0) )
  {
    if ( !v8 ) /*0x6860f0*/
    {
      g_WTFMode = 0; /*0x6863c3*/
      return v13; /*0x6863c3*/
    }
  }
  if ( g_GameMode_Current[0] == 4 ) /*0x6860fd*/
  {
    v15 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Scenario_CPP, 2566); /*0x686110*/
    ChatMessageWOL(1, v15); /*0x686119*/
  }
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 /*0x686141*/
    || !g_GameStateFlags
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( g_GameMode_Current[0] == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 4))(g_NetworkInterface); /*0x68615d*/
    if ( g_NetworkInterface ) /*0x686168*/
      (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x68616e*/
    g_NetworkInterface = 0; /*0x686175*/
    v16 = __2_YAPAXI_Z(0x3F310u); /*0x68617b*/
    if ( v16 ) /*0x686185*/
      g_NetworkInterface = (int)IPXInterfaceClass::Construct(v16); /*0x68618e*/
    else
      g_NetworkInterface = 0; /*0x686195*/
  }
  WinsockInterface::Init((_DWORD *)g_NetworkInterface); /*0x6861a1*/
  v17 = g_Rules_AlliesAllowed; /*0x6861b4*/
  qmemcpy(v33, &g_NetworkPlayerName, sizeof(v33)); /*0x6861ba*/
  qmemcpy(v31, g_CampaignConfig, sizeof(v31)); /*0x6861ca*/
  qmemcpy(v32, g_CampaignPlayerArray, sizeof(v32)); /*0x6861da*/
  qmemcpy(v30, dword_A8B27C, sizeof(v30)); /*0x6861ea*/
  LOBYTE(v13) = InitNetworkGameState(); /*0x6861ec*/
  if ( (_BYTE)v13 ) /*0x6861f3*/
  {
    g_Rules_AlliesAllowed = v17; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v19 = v32[i]; /*0x686246*/
      dword_A8B27C[i] = v30[i]; /*0x68624a*/
      v20 = v31[i]; /*0x686250*/
      g_CampaignPlayerArray[i] = v19; /*0x686254*/
      v21 = v33[i]; /*0x68625a*/
      g_CampaignConfig[i] = v20; /*0x68625e*/
      *(LPARAM *)((char *)&g_NetworkPlayerName + i * 4) = v21; /*0x686264*/
    }
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x686278*/
LABEL_65:
    ScenarioClass::LoadScenarioAndStart( /*0x686282*/
      (char *)g_ScenarioClass_Instance + 4700,
      0,
      *((_DWORD *)g_ScenarioClass_Instance + 3379));
    if ( (g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4) /*0x6862be*/
      && g_GameStateFlags
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
    {
      SessionClass::CreateConnections(g_GameMode_Current); /*0x6862ce*/
      if ( g_GameMode_Current[0] == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0xF ) /*0x6862ed*/
          v22 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x686300*/
        else
          v22 = 15; /*0x6862ef*/
        Network::SetConnectionParams(g_NetworkManager, v22, -1, 600, 1); /*0x686311*/
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x686326*/
          v23 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x686339*/
        else
          v23 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(g_NetworkManager, v23, -1, 600); /*0x686348*/
      }
      else if ( g_GameMode_Current[0] == 4 && !g_GameSessionFlags ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x68636c*/
          v24 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x68637f*/
        else
          v24 = 60; /*0x68636e*/
        Network::SetConnectionParams(g_NetworkManager, v24, -1, 600, 1); /*0x686390*/
      }
    }
    GameResult::CalcScore((int)&byte_8A38E0); /*0x68639a*/
    if ( g_TacticalRender ) /*0x6863a7*/
      Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x6863af*/
    LOBYTE(v13) = TacticalMap::Redraw(&MapClass_Instance); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( g_NetworkInterface ) /*0x6861fd*/
  {
    LOBYTE(v13) = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x686203*/
    g_NetworkInterface = 0; /*0x686205*/
  }
  g_WTFMode = 0; /*0x68620f*/
LABEL_60:
  if ( g_GameMode_Current[0] == 4 ) /*0x68621d*/
    LOBYTE(v13) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68622a*/
  return v13; /*0x686045*/
}



// ==== 0x006863E0  GameFrameCheck_Check  this=-  sig=ida-proto ====
int sub_6863E0()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // eax
  DWORD v7; // [esp+0h] [ebp-18h]

  MouseClass::LoadCursors(); /*0x6863e3*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x686404*/
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(xRight, yBottom); /*0x68641f*/
  }
  g_BounceClassInit = 0; /*0x68642a*/
  g_FramePresent_State = 0; /*0x686433*/
  if ( g_TacticalRender ) /*0x68643a*/
    Tooltip::Enable((void *)g_TacticalRender, 0); /*0x68643e*/
  v0 = (char *)g_ScenarioClass_Instance + 1556; /*0x686450*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x686459*/
  {
    Ticks = Timer::GetTicks(); /*0x68645e*/
    v2 = v0[2]; /*0x686465*/
    v3 = Ticks - *v0; /*0x686468*/
    *v0 = -1; /*0x68646a*/
    v0[2] = v3 + v2; /*0x686472*/
  }
  AsyncIO::Shutdown(); /*0x686475*/
  Timer::GetTicks(); /*0x68647e*/
  v7 = Timer::GetTicks(); /*0x68649d*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6864b4*/
  AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x6864d8*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart( /*0x6864fc*/
    (char *)g_ScenarioClass_Instance + 4700,
    0,
    *((_DWORD *)g_ScenarioClass_Instance + 3379));
  GameResult::CalcScore((int)&byte_8A38E0); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v4 = 60; /*0x68650f*/
    if ( v7 != -1 ) /*0x686516*/
    {
      v5 = Timer::GetTicks() - v7; /*0x686521*/
      if ( v5 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v4 = 60 - v5; /*0x686529*/
    }
    if ( v4 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x686536*/
  if ( g_TacticalRender ) /*0x68654a*/
    Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x686553*/
  return TacticalMap::Redraw(&MapClass_Instance); /*0x686562*/
}



// ==== 0x00686570  ObjectClass::GameFrameCheck_Check  this=ObjectClass  sig=csp ====
char sub_686570()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  char result; // al

  v0 = (char *)g_ScenarioClass_Instance + 1556; /*0x686579*/
  g_BounceClassInit = 0; /*0x68657f*/
  g_FramePresent_State = 0; /*0x686585*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x68658e*/
  {
    Ticks = Timer::GetTicks(); /*0x686593*/
    v2 = v0[2]; /*0x68659a*/
    v3 = Ticks - *v0; /*0x68659d*/
    *v0 = -1; /*0x68659f*/
    v0[2] = v3 + v2; /*0x6865a7*/
  }
  *((_DWORD *)g_ScenarioClass_Instance + 1173) = 1; /*0x6865b0*/
  AsyncIO::Shutdown(); /*0x6865ba*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x6865c5*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x6865d9*/
    g_WWMouseClass_Instance,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x6865e4*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x6865ee*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6865fa*/
  Audio::GetFlag((unsigned int *)g_MixerState); /*0x686605*/
  VoxClass::FindAndPlay(aEvaBattlecontr, -1); /*0x686616*/
  Audio::WaitForCallback(g_MixerState); /*0x686621*/
  v4 = g_PerformanceTickOffset; /*0x68662b*/
  if ( g_LastPerformanceTick != -1 ) /*0x686634*/
    v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x686646*/
  v5 = v4 + 300; /*0x686649*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68664f*/
  {
    v6 = g_PerformanceTickOffset; /*0x68665d*/
    if ( g_LastPerformanceTick != -1 ) /*0x686666*/
      v6 += Timer::GetTicks() - g_LastPerformanceTick; /*0x686678*/
    if ( v5 <= v6 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6866ad*/
  result = g_CreditsScreenBounds; /*0x6866b2*/
  if ( g_CreditsScreenBounds != xRight ) /*0x6866c0*/
  {
    result = yBottom; /*0x6866c8*/
    if ( g_CreditsScreenConfig != yBottom ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(xRight, yBottom); /*0x6866ea*/
    }
  }
  g_WTFMode = 0; /*0x6866ef*/
  return result; /*0x6866f5*/
}



// ==== 0x00686700  ScenarioClass::SetFileName  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass_SetFileName(char *this, char *Source)
{
  char *result; // eax

  result = Source; /*0x686700*/
  if ( Source ) /*0x686709*/
  {
    result = strncpy(this + 4700, Source, 0x104u); /*0x686718*/
    this->q135F = 0; /*0x686720*/
  }
  return result; /*0x686727*/
}



// ==== 0x00686730  ScenarioClass::Construct  this=ScenarioClass  sig=csp ====
char __usercall sub_686730@<al>(char *Source@<ecx>, double a2@<st0>)
{
  char result; // al
  char v4; // bl
  void *v5[3]; // [esp+10h] [ebp-C4h] BYREF
  void **v6; // [esp+1Ch] [ebp-B8h] BYREF
  _DWORD v7[6]; // [esp+38h] [ebp-9Ch] BYREF
  char v8; // [esp+50h] [ebp-84h]
  _DWORD v9[22]; // [esp+68h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+C0h] [ebp-14h] BYREF
  int v11; // [esp+CCh] [ebp-8h]

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    g_CurrentFrame = 0; /*0x686765*/
    v5[1] = 0; /*0x68676b*/
    v5[2] = 0; /*0x68676f*/
    GenericList::Constructor(&v6); /*0x686773*/
    v6 = &List<INIClass::INISection *>::`vftable'; /*0x68677c*/
    Node::Init(v7); /*0x686784*/
    v7[5] = 0; /*0x68678d*/
    v8 = 0; /*0x686792*/
    v5[0] = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(v9, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(v5, (int)v9, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)g_ScenarioClass_Instance + 4700, Source); /*0x686836*/
      v4 = ScenarioClass::LoadMap(0, (int)v5, a2); /*0x686851*/
      v9[0] = &CCFileClass::`vftable'; /*0x686853*/
      v11 = 0; /*0x68685b*/
      Vector::Clear((int)v10); /*0x686862*/
      v9[0] = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor(v9); /*0x686873*/
      HashTable::DestroyHashTableINIClass(v5); /*0x68687c*/
      return v4; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      v9[0] = &CCFileClass::`vftable'; /*0x6867db*/
      v11 = 0; /*0x6867e3*/
      Vector::Clear((int)v10); /*0x6867ea*/
      v9[0] = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor(v9); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass(v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}



// ==== 0x00686890  ScenarioClass::SetupAlliances  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SetupAlliances(void *this)
{
  int i; // esi
  int v3; // ecx
  int v4; // esi
  int WaypointAnimationSpeed; // eax
  int v6; // esi
  void *v7; // eax
  int Owner; // ebp
  int j; // esi
  HouseClass *v10; // edx
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int result; // eax
  int v19; // [esp+4h] [ebp-10h]
  int v20; // [esp+Ch] [ebp-8h]

  if ( g_Rules_AlliesAllowed + Game_PlayerCount < *(_DWORD *)g_RulesClass_Instance[1].gapB0 && !g_ArmageddonMode ) /*0x6868bc*/
  {
    for ( i = 0; i < HouseClass_Count; ++i ) /*0x6868c7*/
    {
      v3 = *(_DWORD *)&HouseClass_Array->gap0[4 * i]; /*0x6868ce*/
      if ( !*(_BYTE *)(v3 + 492) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && g_Rules_AlliesAllowed < 1 ) /*0x6868ef*/
        HouseClass::SDDTORAllAndTriggers(); /*0x6868f1*/
    }
  }
  Event::Dispatch(); /*0x686900*/
  if ( !g_ArmageddonMode ) /*0x68690c*/
  {
    v4 = g_IKnowWhatImDoing; /*0x686914*/
    g_IKnowWhatImDoing = 0; /*0x68691c*/
    if ( g_GameStateFlags ) /*0x686926*/
    {
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_GameStateFlags + 132))(g_GameStateFlags, this); /*0x68692b*/
      ComputeMultiEngineerAdjustment((int *)g_GameStateFlags); /*0x686937*/
    }
    else
    {
      GenerateScenarioUnits((char)this); /*0x686940*/
    }
    g_IKnowWhatImDoing = v4; /*0x686945*/
  }
  Multiplayer::ShowProgress(g_GameMode_Current, 93); /*0x686952*/
  Event::Dispatch(); /*0x686957*/
  if ( Crates ) /*0x686963*/
  {
    WaypointAnimationSpeed = g_RulesClass_Instance[1].WaypointAnimationSpeed; /*0x686971*/
    if ( WaypointAnimationSpeed <= g_ScenarioLoadFlags ) /*0x686979*/
      WaypointAnimationSpeed = g_ScenarioLoadFlags; /*0x68697b*/
    if ( WaypointAnimationSpeed >= g_RulesClass_Instance[1].BarrelExplode ) /*0x686985*/
      WaypointAnimationSpeed = g_RulesClass_Instance[1].BarrelExplode; /*0x686987*/
    if ( WaypointAnimationSpeed > 0 ) /*0x68698b*/
    {
      v6 = WaypointAnimationSpeed; /*0x68698d*/
      do /*0x68699a*/
      {
        CrateClass::FindPlacement(&MapClass_Instance); /*0x686994*/
        --v6; /*0x686999*/
      }
      while ( v6 ); /*0x68699a*/
    }
  }
  Event::Dispatch(); /*0x68699c*/
  GetHouseData(&MapClass_Instance); /*0x6869a6*/
  v7 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Special); /*0x6869b0*/
  Owner = HouseClass::FindOwner(v7); /*0x6869bc*/
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x6869c7*/
  {
    *(_DWORD *)(*(_DWORD *)&HouseClass_Array->gap0[4 * j] + 22388) = *(_DWORD *)&HouseClass_Array->gap0[4 * j]; /*0x6869db*/
    v10 = HouseClass_Array; /*0x6869e1*/
    v11 = *(_DWORD *)&HouseClass_Array->gap0[4 * j]; /*0x6869e7*/
    if ( !*(_BYTE *)(v11 + 492) && !*(_BYTE *)(*(_DWORD *)(v11 + 52) + 422) ) /*0x6869fb*/
    {
      v12 = (_DWORD *)(v11 + 22080); /*0x686a12*/
      v13 = *(_DWORD *)(g_RulesClass_Instance->Difficult[10] /*0x686a23*/
                      + 4 * *(_DWORD *)(*(_DWORD *)&HouseClass_Array->gap0[4 * j] + 388));
      *v12 = g_CurrentFrame; /*0x686a26*/
      v12[1] = v20; /*0x686a28*/
      v12[2] = v13; /*0x686a2b*/
      v19 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->gap0[4 * j] + 36) + 24))(*(_DWORD *)&HouseClass_Array->gap0[4 * j] + 36); /*0x686a4b*/
      v14 = *(_DWORD **)&HouseClass_Array->gap0[4 * j]; /*0x686a4f*/
      v15 = Math::RoundToInt((double)*(int *)(g_RulesClass_Instance->LightningHitDelay + 4 * v14[97]) * 0.01 * (double)v19); /*0x686a6b*/
      HouseClass::AddPower(v14, v15); /*0x686a73*/
      v10 = HouseClass_Array; /*0x686a78*/
    }
    v16 = *(_DWORD *)(*(_DWORD *)&v10->gap0[4 * j] + 52); /*0x686a81*/
    if ( *(_BYTE *)(v16 + 422) ) /*0x686a84*/
      *(_BYTE *)(v16 + 423) = 0; /*0x686a8e*/
    else
      *(_BYTE *)(v16 + 423) = 1; /*0x686a97*/
    v17 = *(_DWORD *)&HouseClass_Array->gap0[4 * j]; /*0x686aa4*/
    if ( v17 != Owner ) /*0x686aa9*/
    {
      HouseClass::HandleAlliance(v17, Owner, 0); /*0x686aae*/
      HouseClass::HandleAlliance(Owner, *(_DWORD *)&HouseClass_Array->gap0[4 * j], 0); /*0x686ac1*/
    }
  }
  if ( g_GameStateFlags ) /*0x686ae0*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)g_GameStateFlags + 136))(g_GameStateFlags, v19); /*0x686ae4*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 140))(g_GameStateFlags); /*0x686af2*/
  }
  result = Map_Setup(g_ScenarioClass_Instance); /*0x686afe*/
  dword_A8D108 = 16843009; /*0x686b08*/
  dword_A8D10C = 16843009; /*0x686b0e*/
  return result; /*0x686b14*/
}



// ==== 0x00686B20  ScenarioClass::LoadMap  this=IUnknown  sig=csp ====
char __usercall Scenario_Load@<al>(char a1@<dl>, int a2@<ecx>, double a3@<st0>)
{
  int v3; // ebp
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  const wchar_t *v11; // eax
  int v12; // eax
  const wchar_t *v13; // eax
  const wchar_t *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int i; // eax
  char *v25; // ecx
  int v26; // eax
  int j; // esi
  int *v28; // eax
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  void *v32; // eax
  IPersistStream *v33; // eax
  char v34; // al
  int v35; // ebx
  int k; // esi
  const char *v37; // edi
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v47; // eax
  int m; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // edx
  int v52;... [26487 chars total]



// ==== 0x00687CE0  SaveScenarioToINI  this=-  sig=csp ====
char *__fastcall SaveScenarioToINI(char *Source, char a2)
{
  _DWORD *v3; // eax
  char v4; // al
  char v6; // [esp+Bh] [ebp-F1h]
  char *v8; // [esp+10h] [ebp-ECh] BYREF
  void *v9[3]; // [esp+14h] [ebp-E8h] BYREF
  void **v10; // [esp+20h] [ebp-DCh] BYREF
  _DWORD v11[6]; // [esp+3Ch] [ebp-C0h] BYREF
  char v12; // [esp+54h] [ebp-A8h]
  _DWORD v13[22]; // [esp+6Ch] [ebp-90h] BYREF
  _BYTE v14[12]; // [esp+C4h] [ebp-38h] BYREF
  int v15; // [esp+D0h] [ebp-2Ch]
  int v16[9]; // [esp+D8h] [ebp-24h] BYREF

  v9[1] = 0; /*0x687cf4*/
  v9[2] = 0; /*0x687cf8*/
  GenericList::Constructor(&v10); /*0x687cfc*/
  v10 = &List<INIClass::INISection *>::`vftable'; /*0x687d05*/
  Node::Init(v11); /*0x687d0d*/
  v11[5] = 0; /*0x687d17*/
  v12 = 0; /*0x687d1d*/
  v9[0] = &CCINIClass_Vtable; /*0x687d21*/
  if ( g_ArmageddonMode ) /*0x687d29*/
  {
    v3 = CCFileClass::Construct(v13, Source); /*0x687d34*/
    v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x687d3e*/
    v13[0] = &CCFileClass::`vftable'; /*0x687d48*/
    v6 = v4; /*0x687d50*/
    v15 = 0; /*0x687d54*/
    Vector::Clear((int)v14); /*0x687d5b*/
    v13[0] = &off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor(v13); /*0x687d6c*/
    if ( v6 ) /*0x687d75*/
    {
      CCFileClass::Construct(v13, Source); /*0x687d7c*/
      CCINIClass::Load(v9, (int)v13, 1, 0); /*0x687d8d*/
      v13[0] = &CCFileClass::`vftable'; /*0x687d99*/
      v15 = 0; /*0x687da1*/
      Vector::Clear((int)v14); /*0x687da8*/
      v13[0] = &off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor(v13); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)g_ScenarioClass_Instance, (char *)v9, a2); /*0x687dce*/
  if ( a2 ) /*0x687dd7*/
  {
    if ( g_Map_TiberiumConfig && *(_DWORD *)g_Map_TiberiumConfig ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI(v9); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v8); /*0x687df7*/
      MiniMap::Render(&v8); /*0x687e00*/
      MiniMap::SavePreviewToINI(v9); /*0x687e0e*/
      ComPtr::Dtor(&v8); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses(v9); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI(v9); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim(v9); /*0x687e3a*/
  ReadFootINI(v9); /*0x687e43*/
  SaveInfantryToINI(v9); /*0x687e4c*/
  SaveAircraftToINI(v9); /*0x687e55*/
  sub_44FE60(v9); /*0x687e5e*/
  OverlayClass::WriteINI(v9); /*0x687e67*/
  UnitTypeClass::ReadINIEntry(v9); /*0x687e70*/
  InfantryClass::SetMission(v9); /*0x687e79*/
  if ( !a2 || g_ArmageddonMode ) /*0x687e8a*/
  {
    nullsub_34(v9, 0); /*0x687e92*/
    ScriptTypeClass::ReadINI(v9, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData(v9, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList(v9, 0); /*0x687eb3*/
  }
  ReadAudioEventINI(v9); /*0x687ebc*/
  SaveTriggerTagsToINI(v9); /*0x687ec5*/
  RawFileClass::Construct(v16, (int)Source); /*0x687ed2*/
  INIClass::WriteDigest(v9, (int)v16, 1); /*0x687ee5*/
  RawFileClass::Dtor(v16); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass(v9); /*0x687eff*/
}



// ==== 0x00687F10  ObjectClass::AssignSessionHouses  this=ObjectClass  sig=csp ====
char SessionClass_AssignHouses()
{
  int v0; // edi
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  void *v7; // eax
  int v8; // ebp
  char *v9; // eax
  LPARAM v10; // eax
  int *v11; // ebx
  int v12; // edi
  int v13; // esi
  void *v14; // eax
  int v15; // ebp
  LPARAM v16; // edx
  int v17; // eax
  wchar_t *String; // eax
  int v19; // eax
  void *v20; // esi
  int v21; // eax
  int v22; // esi
  void *v23; // esi
  int v24; // eax
  int v25; // esi
  int v27; // [esp+8h] [ebp-4Ch]
  void *v28; // [esp+Ch] [ebp-48h] BYREF
  void *v29; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  LPARAM v31; // [esp+18h] [ebp-3Ch]
  _DWORD v32[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v34; // [esp+38h] [ebp-1Ch]
  char v35[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v36; // [esp+50h] [ebp-4h]

  v0 = Game_PlayerCount; /*0x687f15*/
  v1 = 0; /*0x687f1b*/
  for ( i = Game_PlayerCount; v1 < v0; ++v1 ) /*0x687f23*/
  {
    v2 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v1); /*0x687f2a*/
    if ( *(_DWORD *)(v2 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v2, 0); /*0x687f35*/
  }
  v32[0] = 0; /*0x687f42*/
  v32[1] = 0; /*0x687f49*/
  HouseClass_Observer = 0; /*0x687f4d*/
  if ( v0 > 0 ) /*0x687f53*/
  {
    v31 = v0; /*0x687f59*/
    do /*0x688146*/
    {
      v3 = -1; /*0x687f63*/
      v27 = -1; /*0x687f66*/
      v4 = 0; /*0x687f6e*/
      v5 = Game_PlayerInfoArray; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((_BYTE *)v32 + v4) && (v3 == -1 || *(_DWORD *)(*(_DWORD *)v5 + 83) < v3) ) /*0x687f84*/
        {
          v27 = v4; /*0x687f88*/
          v3 = *(_DWORD *)(*(_DWORD *)v5 + 83); /*0x687f8c*/
        }
        ++v4; /*0x687f8f*/
        v5 += 4; /*0x687f90*/
      }
      while ( v4 < v0 ); /*0x687f95*/
      v6 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v27); /*0x687fa0*/
      *((_BYTE *)v32 + v27) = 1; /*0x687fa3*/
      v7 = __2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v7 ) /*0x687fb2*/
        v8 = HouseClass::Construct((int)v7, *((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v6 + 75))); /*0x687fc8*/
      else
        v8 = 0; /*0x687fcc*/
      if ( g_GameMode_Current[0] == 4 ) /*0x687fd5*/
      {
        WideString::Assign((wchar_t **)&v28, (wchar_t *)v6); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29, (const wchar_t **)&v28); /*0x687fe9*/
        DeleteAndZero::Alt(&v28); /*0x687ff2*/
        v9 = String::GetOrEmpty((char **)&v29); /*0x687ffb*/
        if ( v9 ) /*0x688002*/
        {
          strncpy(Destination, v9, 0x14u); /*0x688012*/
          v34 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v8 + 90100) ) /*0x68802b*/
        {
          qmemcpy((void *)(v8 + 90100), Destination, 0x14u); /*0x688038*/
          *(_BYTE *)(v8 + 90120) = v34; /*0x68803a*/
          v0 = i; /*0x68803b*/
        }
        DeleteAndZero(&v29); /*0x688043*/
      }
      else
      {
        if ( aHumanPlayer ) /*0x688051*/
        {
          strncpy(v35, aHumanPlayer, 0x14u); /*0x688065*/
          v36 = 0; /*0x68806d*/
        }
        else
        {
          v35[0] = (unsigned __int8)aHumanPlayer; /*0x688053*/
        }
        if ( v35 != (char *)(v8 + 90100) ) /*0x68807e*/
        {
          qmemcpy((void *)(v8 + 90100), v35, 0x14u); /*0x68808b*/
          *(_BYTE *)(v8 + 90120) = v36; /*0x68808d*/
          v0 = i; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v8 + 90154), (const wchar_t *)v6, 0x15u); /*0x68809c*/
      *(_WORD *)(v8 + 90194) = 0; /*0x6880a4*/
      *(_BYTE *)(v8 + 492) = 1; /*0x6880ad*/
      sub_4FCE00(*(_DWORD *)(v6 + 83), *(_DWORD *)(v6 + 75), g_Rules_Bases); /*0x6880c4*/
      *(_DWORD *)(v8 + 90196) = SessionClass::GetPlayerColorScheme(*(_DWORD *)(v6 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v8); /*0x6880df*/
      ComputeSessionColorVector(v8); /*0x6880e6*/
      *(_DWORD *)(v8 + 90200) = SessionClass::GetOption(v6); /*0x6880f2*/
      *(_DWORD *)(v8 + 90204) = *(_DWORD *)(v6 + 99); /*0x688101*/
      if ( !v27 ) /*0x688107*/
      {
        HouseClass_Player = (#375 *)v8; /*0x688109*/
        *(_BYTE *)(v8 + 493) = 1; /*0x68810f*/
      }
      if ( *(_DWORD *)(v6 + 107) == -1 ) /*0x68811a*/
        HouseClass_Observer = v8; /*0x68811c*/
      *(_DWORD *)(v8 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower(v8, 1); /*0x688132*/
      *(_DWORD *)(v6 + 111) = *(_DWORD *)(v8 + 48); /*0x68813a*/
      --v31; /*0x688142*/
    }
    while ( v31 ); /*0x688146*/
  }
  v10 = 0; /*0x688152*/
  v31 = g_Rules_AlliesAllowed; /*0x688154*/
  v11 = g_CampaignPlayerArray; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v10 < v31 ) /*0x688161*/
    {
      v12 = *v11; /*0x688167*/
      if ( *v11 != -1 && v12 != -3 ) /*0x688175*/
      {
        v13 = v11[8]; /*0x68817b*/
        i = v10 + 1; /*0x688184*/
        v14 = __2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v14 ) /*0x688192*/
          v15 = HouseClass::Construct((int)v14, *((_DWORD *)g_SuperWeaponTypeCount + v12)); /*0x6881a5*/
        else
          v15 = 0; /*0x6881a9*/
        v16 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v15 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v15 + 468) = v16; /*0x6881b8*/
        sub_4FCE00(v13, v12, g_Rules_Bases); /*0x6881c8*/
        *(_DWORD *)(v15 + 90196) = SessionClass::GetPlayerColorScheme(v13); /*0x6881da*/
        HouseClass::GetColor((char *)v15); /*0x6881e0*/
        ComputeSessionColorVector(v15); /*0x6881e7*/
        *(_DWORD *)(v15 + 90200) = v11[16]; /*0x6881ef*/
        v17 = v11[24]; /*0x6881f5*/
        *(_DWORD *)(v15 + 90204) = v17; /*0x6881fb*/
        if ( v17 != -1 ) /*0x688201*/
          *((_BYTE *)g_ScenarioClass_Instance + 4576) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v35, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v36 = 0; /*0x688233*/
        }
        else
        {
          v35[0] = (unsigned __int8)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v35 != (char *)(v15 + 90100) ) /*0x688244*/
        {
          qmemcpy((void *)(v15 + 90100), v35, 0x14u); /*0x68824f*/
          *(_BYTE *)(v15 + 90120) = v36; /*0x688251*/
        }
        String = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Scenario_CPP, 4032); /*0x688263*/
        wcscpy((wchar_t *)(v15 + 90154), String); /*0x688270*/
        if ( g_GameMode_Current[0] ) /*0x68827f*/
          *(_DWORD *)(v15 + 588) = g_RulesClass_Instance[1].SmallVisceroid; /*0x68828d*/
        v19 = *(v11 - 8); /*0x688299*/
        if ( Game_PlayerCount > 1 && HIBYTE(g_RulesClass_Instance[1].RadarEventDurations[1]) && v19 > 0 ) /*0x6882b3*/
          --v19; /*0x6882b5*/
        HouseClass::SetCombatPower(v15, v19); /*0x6882b9*/
        v10 = i; /*0x6882be*/
      }
    }
    ++v11; /*0x6882c2*/
  }
  while ( (int)v11 < (int)g_CampaignConfig ); /*0x6882cb*/
  v20 = __2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v20 ) /*0x6882e4*/
  {
    v21 = SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x6882eb*/
    v22 = HouseClass::Construct((int)v20, *((_DWORD *)g_SuperWeaponTypeCount + v21)); /*0x688303*/
  }
  else
  {
    v22 = 0; /*0x688307*/
  }
  *(_DWORD *)(v22 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68831a*/
  HouseClass::GetColor((char *)v22); /*0x688320*/
  v23 = __2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v23 ) /*0x688336*/
  {
    v24 = SuperWeaponTypeClass::FindByName(g_INI_Key_Special); /*0x68833d*/
    v25 = HouseClass::Construct((int)v23, *((_DWORD *)g_SuperWeaponTypeCount + v24)); /*0x688356*/
  }
  else
  {
    v25 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v25 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68836d*/
  return HouseClass::GetColor((char *)v25); /*0x688378*/
}



// ==== 0x00688380  Multiplayer::FindStartPositions  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_688380(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // edi
  char *v3; // edx
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  int v10; // ebp
  unsigned int i; // esi
  int v12; // edi
  int v13; // eax
  __int16 v14; // si
  int v15; // eax
  void *v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  int v20; // [esp+14h] [ebp-2Ch]
  _DWORD *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  void **v25; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  char v28; // [esp+35h] [ebp-Bh]
  int v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v1 = 0; /*0x688387*/
  v2 = this; /*0x688389*/
  v21 = this; /*0x688391*/
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = (char *)g_ScenarioClass_Instance; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25 = &DynamicVectorClass<Cell>::`vftable'; /*0x6883a5*/
  v30 = 10; /*0x6883ad*/
  v29 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  v6 = (char *)g_ScenarioClass_Instance + 1586; /*0x6883b7*/
  do /*0x6883e9*/
  {
    if ( v5 < 0 ) /*0x6883c6*/
      break; /*0x6883c6*/
    if ( *v6 == dword_B05458 ) /*0x6883d2*/
      break; /*0x6883d2*/
    ++v1; /*0x6883e1*/
    ++v5; /*0x6883e2*/
    ++v6; /*0x6883e3*/
  }
  while ( v5 < 8 ); /*0x6883e9*/
  v7 = 0; /*0x6883f0*/
  if ( Game_PlayerCount > 0 ) /*0x6883f4*/
  {
    v8 = Game_PlayerInfoArray; /*0x6883f6*/
    v9 = Game_PlayerCount; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      v8 += 4; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v30; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( v1 <= g_Rules_AlliesAllowed + Game_PlayerCount - v7 ) /*0x688421*/
  {
    v20 = g_Rules_AlliesAllowed + Game_PlayerCount - v7; /*0x68842b*/
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = v1; /*0x688423*/
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < v10; ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(_DWORD *)&v3[4 * i + 1586] == dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(_DWORD *)&v3[4 * i + 1586]; /*0x688478*/
    if ( v29 < v27 ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v28 && v27 || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v4 + v27, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v29++; /*0x6884ab*/
      *((_DWORD *)Block + v13) = v12; /*0x6884b6*/
    }
    v3 = (char *)g_ScenarioClass_Instance; /*0x6884b9*/
LABEL_24:
    v23 = *(_DWORD *)&v3[4 * i + 1586]; /*0x6884bf*/
    Debug::Log("Multiplayer start waypoint found at cell %d,%d\n", (__int16)v23, SHIWORD(v23)); /*0x6884d9*/
    v4 = v30; /*0x6884de*/
    v3 = (char *)g_ScenarioClass_Instance; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( v10 - v29 > 0 ) /*0x688502*/
  {
    Debug::Log(aMultiplayerSta_0); /*0x68850d*/
    if ( v29 < v10 ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_AircraftTrackerState - 10); /*0x688551*/
        LOWORD(v22) = dword_87F90C /*0x688573*/
                    + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 10, g_AircraftTrackerPool - 10);
        HIWORD(v22) = v14 + dword_87F910 + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 &MapClass_Instance,
                 (int)&v23,
                 &v24,
                 (__int16 *)&v19,
                 1,
                 -1,
                 0,
                 0,
                 8,
                 8,
                 0,
                 0,
                 0,
                 1,
                 (__int16 *)&v23,
                 0,
                 0);
        if ( v19 != dword_B05458 ) /*0x6885c7*/
        {
          if ( v29 < v27 /*0x688603*/
            || (v28 || !v27)
            && v30 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v30 + v27, 0) )
          {
            v15 = v29++; /*0x688612*/
            *((_DWORD *)Block + v15) = v19; /*0x68861d*/
          }
          Debug::Log("Random multiplayer start waypoint added at cell %d,%d\n", (__int16)v19, SHIWORD(v19)); /*0x688631*/
        }
      }
      while ( v29 < v20 ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  v2[1] = 0; /*0x688651*/
  v2[2] = 0; /*0x688654*/
  *((_BYTE *)v2 + 13) = 0; /*0x688657*/
  *((_BYTE *)v2 + 12) = 1; /*0x68865f*/
  *v2 = &VectorClass<Cell>::`vftable'; /*0x688663*/
  Multiplayer::CopyDataArray(&v25); /*0x688669*/
  *v2 = &DynamicVectorClass<Cell>::`vftable'; /*0x68866e*/
  v25 = &VectorClass<Cell>::`vftable'; /*0x688674*/
  v16 = Block; /*0x68867c*/
  v17 = v30; /*0x688684*/
  v2[4] = v29; /*0x688688*/
  v2[5] = v17; /*0x68868d*/
  if ( v16 && v28 ) /*0x688698*/
    __3_YAXPAX_Z(v16); /*0x68869b*/
  return v2; /*0x6886a5*/
}



// ==== 0x006886B0  GenerateScenarioUnits  this=-  sig=ida-proto ====
void __fastcall Scenario_GenerateUnits(char a1)
{
  int v1; // edi
  int v2; // ebp
  int i; // ebx
  _BYTE *v4; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edx
  int j; // esi
  _BYTE *v9; // ecx
  int v10; // edi
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // ebp
  int v28; // eax
  int k; // edi
  __int16 v30; // cx
  double v31; // st7
  double v32; // st7
  int v33; // edi
  int v34; // edx
  int v35; // ecx
  int *v36; // ebp
  _DWORD *v37; // edx
  int v38; // eax
  void *v39; // esi
  _DWORD *v40; // edi
  int v41; // eax
  int *v42; // esi
  int v43; // eax
  int v44; // eax
  void *v45; // eax
  int v46; // ebx
  int v47; // esi
  int v48; // eax
  int v49; // eax
  void *v50; // edi
  _DWORD *v51; // ebp
  #375 *v52; // edi
  int v53; // eax
  _DWORD v54[253]; // [esp-3DCh] [ebp-504h] BYREF
  LPVOID ppv; // [esp+28h] [ebp-100h]
  char v56; // [esp+2Fh] [ebp-F9h]
  int v57; // [esp+30h] [ebp-F8h]
  int v58; // [esp+34h] [ebp-F4h] BYREF
  int v59; // [esp+38h] [ebp-F0h]
  void **v60; // [esp+3Ch] [ebp-ECh] BYREF
  void *Block; // [esp+40h] [ebp-E8h]
  int v62; // [esp+44h] [ebp-E4h]
  char v63; // [esp+49h] [ebp-DFh]
  int v64; // [esp+4Ch] [ebp-DCh]
  int v65; // [esp+50h] [ebp-D8h]
  int v66; // [esp+54h] [ebp-D4h]
  void **v67; // [esp+58h] [ebp-D0h] BYREF
  void *v68; // [esp+5Ch] [ebp-CCh]
  int v69; // [esp+60h] [ebp-C8h]
  char v70; // [esp+65h] [ebp-C3h]
  int v71; // [esp+68h] [ebp-C0h]
  int v72; // [esp+6Ch] [ebp-BCh]
  void **v73; // [esp+70h] [ebp-B8h] BYREF
  void *v74; // [esp+74h] [ebp-B4h]
  int v75; // [esp+78h] [ebp-B0h]
  int v76; // [esp+7Ch] [ebp-ACh]
  int v77; // [esp+80h] [ebp-A8h]
  int v78; // [esp+84h] [ebp-A4h]
  int v79; // [esp+88h] [ebp-A0h]
  void **v80; // [esp+8Ch] [ebp-9Ch] BYREF
  void *v81; // [esp+90h] [ebp-98h]
  int v82; // [esp+94h] [ebp-94h]
  char v83; // [esp+99h] [ebp-8Fh]
  int v84; // [esp+9Ch] [ebp-8Ch]
  _DWORD v85[4]; // [esp+A4h] [ebp-84h] BYREF
  _DWORD v86[3]; // [esp+B4h] [ebp-74h] BYREF
  _DWORD v87[26]; // [esp+C0h] [ebp-68h] BYREF

  v56 = a1; /*0x6886c0*/
  EventClass::resetEvent(&v60, 0, 0); /*0x6886cc*/
  v60 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x6886d6*/
  ppv = (LPVOID)g_Rules_MultiEngineer; /*0x6886de*/
  v65 = 10; /*0x6886e9*/
  v64 = 0; /*0x6886f1*/
  if ( Bases ) /*0x6886f9*/
    ppv = (char *)ppv - 1; /*0x6886fb*/
  qmemcpy(v54, (char *)g_ScenarioClass_Instance + 536, sizeof(v54)); /*0x68871d*/
  Debug::Log(); /*0x688724*/
  Debug::Log(); /*0x68873a*/
  v1 = 0; /*0x68874a*/
  v2 = 0; /*0x68874c*/
  for ( i = 0; i < g_CrateCount; ++i ) /*0x688752*/
  {
    v4 = (_BYTE *)*((_DWORD *)g_UnitTypeCount2 + i); /*0x68875a*/
    if ( v4[1749] ) /*0x68875d*/
    {
      v5 = 0; /*0x68876d*/
      v6 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x68876f*/
      if ( v6 <= 0 ) /*0x688777*/
      {
LABEL_9:
        v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 172))(v4); /*0x68878b*/
        ++v2; /*0x688795*/
      }
      else
      {
        v7 = (_DWORD *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x688779*/
        while ( (_BYTE *)*v7 != v4 ) /*0x688781*/
        {
          ++v5; /*0x688783*/
          ++v7; /*0x688784*/
          if ( v5 >= v6 ) /*0x688789*/
            goto LABEL_9; /*0x688789*/
        }
      }
    }
  }
  for ( j = 0; j < g_LoadScreenProgress; ++j ) /*0x6887a9*/
  {
    v9 = (_BYTE *)*((_DWORD *)Factory_ExitCellTable + j); /*0x6887b1*/
    if ( v9[1749] ) /*0x6887b4*/
    {
      v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 172))(v9); /*0x6887c6*/
      ++v2; /*0x6887c8*/
    }
  }
  v66 = (_DWORD)ppv * (v1 / v2); /*0x6887e5*/
  Multiplayer::FindStartPositions(&v80); /*0x6887e9*/
  v10 = 0; /*0x6887f0*/
  memset(v85, 0, sizeof(v85)); /*0x6887f2*/
  v11 = 0; /*0x6887f9*/
  v59 = 0; /*0x688802*/
  v79 = 0; /*0x68880d*/
  if ( HouseClass_Count > 0 ) /*0x68881f*/
  {
LABEL_16:
    v12 = *(_DWORD **)&HouseClass_Array->gap0[4 * v11]; /*0x688825*/
    ppv = v12; /*0x68882e*/
    v13 = v12[13]; /*0x688832*/
    if ( *(_BYTE *)(v13 + 422) ) /*0x688835*/
      goto LABEL_111; /*0x68883d*/
    v54[252] = v13 + 36; /*0x688846*/
    v54[251] = v11; /*0x688847*/
    v54[250] = aGeneratingUnit; /*0x688848*/
    Debug::Log(); /*0x68884d*/
    UnitTypeVector::Construct2(0, 0); /*0x68885b*/
    v67 = &DynamicVectorClass<UnitTypeClass *>::`vftable'; /*0x68886b*/
    v72 = 10; /*0x688873*/
    v71 = 0; /*0x688877*/
    InfantryTypeVector::ConstructFromData(0, 0); /*0x68887b*/
    v73 = &DynamicVectorClass<InfantryTypeClass *>::`vftable'; /*0x688880*/
    v78 = 10; /*0x688888*/
    v77 = 0; /*0x68888c*/
    v14 = 0; /*0x688898*/
    v15 = 1 << *(_DWORD *)(v12[13] + 180); /*0x6888a5*/
    if ( g_CrateCount <= 0 ) /*0x6888a9*/
      goto LABEL_35; /*0x6888a9*/
    v16 = v69; /*0x6888af*/
    while ( 1 ) /*0x6888b9*/
    {
      v17 = *((_DWORD *)g_UnitTypeCount2 + v14); /*0x6888b9*/
      if ( *(_BYTE *)(v17 + 1749) /*0x6888e2*/
        && *(_DWORD *)(v17 + 1588) <= *((_DWORD *)ppv + 117)
        && (v15 & *(_DWORD *)(v17 + 1740)) != 0 )
      {
        v18 = 0; /*0x6888ea*/
        v19 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x6888ec*/
        if ( v19 > 0 ) /*0x6888f4*/
        {
          v20 = (_DWORD *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x6888f6*/
          while ( *v20 != v17 ) /*0x6888fe*/
          {
            ++v18; /*0x688900*/
            ++v20; /*0x688901*/
            if ( v18 >= v19 ) /*0x688906*/
              goto LABEL_26; /*0x688906*/
          }
          goto LABEL_33; /*0x6888fe*/
        }
LABEL_26:
        if ( v71 < v16 ) /*0x68890c*/
          goto LABEL_31; /*0x68890c*/
        if ( !v70 && v16 || v72 <= 0 ) /*0x688920*/
          goto LABEL_33; /*0x688920*/
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v72 + v16, 0) ) /*0x688931*/
        {
LABEL_31:
          v21 = v71++; /*0x68893c*/
          *((_DWORD *)v68 + v21) = v17; /*0x688947*/
        }
        v16 = v69; /*0x68894a*/
      }
LABEL_33:
      if ( ++v14 >= g_CrateCount ) /*0x688956*/
      {
        v10 = 0; /*0x68895c*/
LABEL_35:
        if ( g_LoadScreenProgress > 0 ) /*0x688964*/
        {
          v22 = v75; /*0x68896a*/
          do /*0x688974*/
          {
            v23 = *((_DWORD *)Factory_ExitCellTable + v10); /*0x688974*/
            if ( *(_BYTE *)(v23 + 1749) /*0x688999*/
              && *(_DWORD *)(v23 + 1588) <= *((_DWORD *)ppv + 117)
              && (v15 & *(_DWORD *)(v23 + 1740)) != 0 )
            {
              if ( v77 < v22 ) /*0x68899f*/
                goto LABEL_45; /*0x68899f*/
              if ( !BYTE1(v76) && v22 || v78 <= 0 ) /*0x6889b3*/
                goto LABEL_47; /*0x6889b3*/
              if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v73[2])(&v73, v78 + v22, 0) ) /*0x6889c2*/
              {
LABEL_45:
                v24 = v77++; /*0x6889cd*/
                *((_DWORD *)v74 + v24) = v23; /*0x6889d8*/
              }
              v22 = v75; /*0x6889db*/
            }
LABEL_47:
            ++v10; /*0x6889df*/
          }
          while ( v10 < g_LoadScreenProgress ); /*0x688974*/
        }
        if ( v59 ) /*0x6889f0*/
        {
          v27 = 0; /*0x688a3b*/
          memset(v87, 0, sizeof(v87)); /*0x688a3d*/
          v28 = v84; /*0x688a3f*/
          if ( v84 > 0 ) /*0x688a48*/
          {
            do /*0x688ad6*/
            {
              if ( !*((_BYTE *)v85 + v27) ) /*0x688a4e*/
              {
                for ( k = 0; k < v28; ++k ) /*0x688a5d*/
                {
                  if ( *((_BYTE *)v85 + k) ) /*0x688a5f*/
                  {
                    v30 = *((_WORD *)v81 + 2 * v27) - *((_WORD *)v81 + 2 * k); /*0x688a86*/
                    v57 = (__int16)(*((_WORD *)v81 + 2 * v27 + 1) - *((_WORD *)v81 + 2 * k + 1)); /*0x688a90*/
                    v31 = (double)v57; /*0x688a94*/
                    v57 = v30; /*0x688a98*/
                    v32 = Math::Sqrt((double)v30 * (double)v30 + v31 * v31); /*0x688ab1*/
                    v87[v27] += (__int16)Math::RoundToInt(v32); /*0x688ac5*/
                    v28 = v84; /*0x688ac7*/
                  }
                }
              }
              ++v27; /*0x688ad3*/
            }
            while ( v27 < v28 ); /*0x688ad6*/
          }
          v33 = 0; /*0x688adc*/
          v34 = 0; /*0x688ade*/
          v35 = 0; /*0x688ae0*/
          if ( v28 > 0 ) /*0x688ae4*/
          {
            v36 = v87; /*0x688ae6*/
            do /*0x688b02*/
            {
              if ( *v36 > v34 || !v34 ) /*0x688af6*/
              {
                v34 = *v36; /*0x688af8*/
                v33 = v35; /*0x688afa*/
              }
              ++v35; /*0x688afc*/
              ++v36; /*0x688afd*/
            }
            while ( v35 < v28 ); /*0x688b02*/
          }
          v37 = v81; /*0x688b04*/
          v38 = v59 + 1; /*0x688b0c*/
          *((_BYTE *)v85 + v33) = 1; /*0x688b0d*/
          v26 = v37[v33]; /*0x688b15*/
          v59 = v38; /*0x688b18*/
          v58 = v26; /*0x688b1c*/
        }
        else
        {
          v25 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v84 - 1); /*0x688a08*/
          *((_BYTE *)v85 + v25) = 1; /*0x688a0d*/
          v59 = 1; /*0x688a19*/
          v26 = *((_DWORD *)v81 + v25); /*0x688a21*/
          v58 = v26; /*0x688a24*/
        }
        HouseClass::SetMapSeed(ppv, v26); /*0x688b25*/
        if ( Bases ) /*0x688b31*/
        {
          v39 = __2_YAPAXI_Z(0x8E8u); /*0x688b41*/
          v40 = ppv; /*0x688b51*/
          if ( v39 ) /*0x688b4a*/
          {
            v54[252] = ppv; /*0x688b5a*/
            v41 = BuildingClass::FindBySWType(ppv, (int)&g_RulesClass_Instance->AICaptureLowPower[1]); /*0x688b5e*/
            v42 = (int *)UnitClass::Construct((int)v39, v41, (LPVOID)v54[252]); /*0x688b6b*/
          }
          else
          {
            v42 = 0; /*0x688b73*/
          }
          v43 = *v42; /*0x688b7f*/
          v54[252] = 0; /*0x688b81*/
          v86[2] = 0; /*0x688b8b*/
          v86[0] = ((__int16)v58 << 8) + 128; /*0x688b92*/
          v54[251] = v86; /*0x688ba9*/
          v86[1] = (SHIWORD(v58) << 8) + 128; /*0x688bac*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v43 + 216))(v42, v86, 0) /*0x688bc5*/
            || FindInfantryDeployPosition(v42, (__int16 *)&v58, 1) )
          {
            if ( v42 ) /*0x688bdf*/
            {
              v44 = dword_B05458; /*0x688be1*/
              v40[5367] = 0; /*0x688be6*/
              v40[5368] = v44; /*0x688bec*/
              if ( (*(_BYTE *)g_ScenarioClass_Instance & 0x10) != 0 ) /*0x688bfb*/
                HouseClass::PickedUpFlag(v42, 1); /*0x688c02*/
            }
          }
          else if ( v42 ) /*0x688bd0*/
          {
            (*(void (__thiscall **)(int *, int))(*v42 + 32))(v42, 1); /*0x688bd8*/
          }
        }
        v45 = Block; /*0x688c0b*/
        v46 = 0; /*0x688c0f*/
        v64 = 0; /*0x688c13*/
        if ( Block && v63 ) /*0x688c1f*/
        {
          __3_YAXPAX_Z(Block); /*0x688c22*/
          v45 = 0; /*0x688c2a*/
          Block = 0; /*0x688c2c*/
        }
        v63 = 0; /*0x688c34*/
        v62 = 0; /*0x688c3b*/
        if ( v66 > 0 ) /*0x688c3f*/
        {
          v57 = 2 * v66 / 3; /*0x688c58*/
          do /*0x688da2*/
          {
            v47 = 0; /*0x688c60*/
            if ( v46 >= v57 || v71 <= 0 ) /*0x688c6c*/
            {
              if ( v77 > 0 ) /*0x688c91*/
              {
                v49 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v77 - 1); /*0x688ca2*/
                v47 = *((_DWORD *)v74 + v49); /*0x688cab*/
              }
            }
            else
            {
              v48 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v71 - 1); /*0x688c7d*/
              v47 = *((_DWORD *)v68 + v48); /*0x688c86*/
            }
            v50 = (void *)(*(int (__thiscall **)(int, LPVOID))(*(_DWORD *)v47 + 140))(v47, ppv); /*0x688cbd*/
            v51 = AbstractClass::IsTechnoType(v50); /*0x688cce*/
            if ( FindInfantryDeployPosition((int *)v50, (__int16 *)&v58, 4) ) /*0x688cd0*/
            {
              v52 = (#375 *)ppv; /*0x688cef*/
              v54[252] = v47 + 36; /*0x688cf6*/
              v54[251] = *((_DWORD *)ppv + 13) + 36; /*0x688cfd*/
              v54[250] = aHouseSDeployed; /*0x688cfe*/
              Debug::Log(); /*0x688d03*/
              v46 += (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 172))(v47); /*0x688d19*/
              if ( v64 < v62 /*0x688d44*/
                || (v63 || !v62)
                && v65 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v60[2])(&v60, v65 + v62, 0) )
              {
                v53 = v64++; /*0x688d4f*/
                *((_DWORD *)Block + v53) = v51; /*0x688d5a*/
              }
              if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x200) != 0 ) /*0x688d68*/
                Timer::SetFlag(v51 + 84, 1); /*0x688d72*/
              if ( (unsigned __int8)House::IsCurrentPlayer(v52) ) /*0x688d79*/
                (*(void (__thiscall **)(_DWORD *, int))(*v51 + 496))(v51, 5); /*0x688d98*/
              else
                (*(void (__thiscall **)(_DWORD *, int))(*v51 + 496))(v51, 11); /*0x688d89*/
            }
            else if ( v50 ) /*0x688cdb*/
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)v50 + 32))(v50, 1); /*0x688ce7*/
            }
          }
          while ( v46 < v66 ); /*0x688da2*/
          v45 = Block; /*0x688da8*/
        }
        v64 = 0; /*0x688db0*/
        if ( v45 && v63 ) /*0x688dbc*/
        {
          __3_YAXPAX_Z(v45); /*0x688dbf*/
          Block = 0; /*0x688dc7*/
        }
        v63 = 0; /*0x688dcf*/
        v62 = 0; /*0x688dd6*/
        v73 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x688dda*/
        if ( v74 && BYTE1(v76) ) /*0x688dea*/
        {
          __3_YAXPAX_Z(v74); /*0x688ded*/
          v74 = 0; /*0x688df5*/
        }
        BYTE1(v76) = 0; /*0x688dfd*/
        v75 = 0; /*0x688e04*/
        v67 = &VectorClass<UnitTypeClass *>::`vftable'; /*0x688e08*/
        if ( v68 && v70 ) /*0x688e18*/
        {
          __3_YAXPAX_Z(v68); /*0x688e1b*/
          v68 = 0; /*0x688e23*/
        }
        v11 = v79; /*0x688e27*/
        v70 = 0; /*0x688e2b*/
        v69 = 0; /*0x688e30*/
        v10 = 0; /*0x688e34*/
LABEL_111:
        v79 = ++v11; /*0x688e3e*/
        if ( v11 >= HouseClass_Count ) /*0x688e42*/
          break; /*0x688e42*/
        goto LABEL_16; /*0x688e42*/
      }
    }
  }
  v54[252] = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 0xFFFF); /*0x688e48*/
  v54[251] = aFinishedUnitGe; /*0x688e5f*/
  Debug::Log(); /*0x688e64*/
  v80 = &VectorClass<Cell>::`vftable'; /*0x688e75*/
  if ( v81 && v83 ) /*0x688e88*/
  {
    __3_YAXPAX_Z(v81); /*0x688e8b*/
    v81 = 0; /*0x688e93*/
  }
  v83 = 0; /*0x688e9b*/
  v82 = 0; /*0x688ea5*/
  v60 = &VectorClass<TechnoClass *>::`vftable'; /*0x688ea9*/
  if ( Block ) /*0x688eb1*/
  {
    if ( v63 ) /*0x688eb9*/
      __3_YAXPAX_Z(Block); /*0x688ebc*/
  }
}



// ==== 0x00688ED0  FindInfantryDeployPosition  this=AbstractClass  sig=csp ====
int __fastcall Infantry_FindDeployPosition(int *a1, __int16 *a2, int a3)
{
  __int16 *v3; // esi
  _DWORD *v5; // eax
  int ClosestObject; // eax
  int v7; // edx
  int GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  unsigned __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  int v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  int v30; // [esp+18h] [ebp-54h]
  int v31; // [esp+1Ch] [ebp-50h]
  int v32; // [esp+20h] [ebp-4Ch]
  int v33; // [esp+24h] [ebp-48h]
  __int16 *v34; // [esp+28h] [ebp-44h]
  int *v35; // [esp+2Ch] [ebp-40h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  int v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  int v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  v35 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, a2, 1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = CellCoord::To_CellObj(&MapClass_Instance, v3); /*0x688f0f*/
    ClosestObject = Object::FindClosestObjectCell(v5, &v39, 0, 0); /*0x688f16*/
    if ( !ClosestObject /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObject + 44))(ClosestObject) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = v3[1] << 8; /*0x688f4f*/
      v42 = (*v3 << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = v3[1]; /*0x688f72*/
      v10 = (*v3 << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
LABEL_8:
    v29 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = *v3; /*0x689006*/
      v14 = v3[1]; /*0x689009*/
      v15 = dword_87F90C; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = dword_87F910; /*0x689017*/
      v32 = dword_87F910 + g_AircraftTrackerState - 1; /*0x689025*/
      switch ( v29 ) /*0x689032*/
      {
        case 0: /*0x689032*/
          v17 = a3; /*0x689039*/
          v14 -= a3; /*0x68903d*/
          break; /*0x68903f*/
        case 1: /*0x689032*/
          v17 = a3; /*0x689041*/
          v13 += a3; /*0x689045*/
          v14 -= a3; /*0x689047*/
          break; /*0x689049*/
        case 2: /*0x689032*/
          v17 = a3; /*0x68904b*/
          v13 += a3; /*0x68904f*/
          break; /*0x689051*/
        case 3: /*0x689032*/
          v17 = a3; /*0x689053*/
          v13 += a3; /*0x689057*/
          v14 += a3; /*0x689059*/
          break; /*0x68905b*/
        case 4: /*0x689032*/
          v17 = a3; /*0x68905d*/
          v14 += a3; /*0x689061*/
          break; /*0x689063*/
        case 5: /*0x689032*/
          v17 = a3; /*0x689065*/
          v13 -= a3; /*0x689069*/
          v14 += a3; /*0x68906b*/
          break; /*0x68906d*/
        case 6: /*0x689032*/
          v17 = a3; /*0x68906f*/
          v13 -= a3; /*0x689073*/
          break; /*0x689075*/
        case 7: /*0x689032*/
          v17 = a3; /*0x689077*/
          v13 -= a3; /*0x68907b*/
          v14 -= a3; /*0x68907d*/
          break; /*0x68907f*/
        default:
          v17 = a3; /*0x689081*/
          break; /*0x689081*/
      }
      if ( v13 > dword_87F90C + g_AircraftTrackerPool - 1 ) /*0x689087*/
        v13 = dword_87F90C + g_AircraftTrackerPool - 1; /*0x689089*/
      if ( v13 < dword_87F90C ) /*0x68908d*/
        LOWORD(v13) = dword_87F90C; /*0x68908f*/
      if ( v14 > v32 ) /*0x689097*/
        v14 = v32; /*0x689099*/
      if ( v14 < dword_87F910 ) /*0x68909d*/
        LOWORD(v14) = dword_87F910; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      v28 = v31; /*0x6890b4*/
      if ( v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = dword_87F90C + g_AircraftTrackerPool - 1; /*0x6890d0*/
        v39 = dword_87F910 + g_AircraftTrackerState - 1; /*0x6890e5*/
        v32 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x6890fe*/
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x68910a*/
        {
          v21 = v20 - v32; /*0x68911e*/
          if ( v21 < v15 ) /*0x689124*/
            LOWORD(v21) = v15; /*0x689126*/
        }
        else
        {
          v21 = v32 + v20; /*0x689114*/
          if ( v21 > v38 ) /*0x689118*/
            LOWORD(v21) = v38; /*0x68911a*/
        }
        v22 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x68913d*/
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < v16 ) /*0x68916a*/
            LOWORD(v23) = v16; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            LOWORD(v23) = v39; /*0x689162*/
        }
        v24 = v35; /*0x68916e*/
        v3 = v34; /*0x689172*/
        LOWORD(v33) = v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        HIWORD(v33) = v23; /*0x68917f*/
        v18 = v33; /*0x689184*/
        v28 = v33; /*0x689188*/
      }
      if ( __PAIR32__(HIWORD(v28), v18) == *(_DWORD *)v3 ) /*0x689199*/
        v36 = 1; /*0x6891a6*/
      if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v28, 1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        v25 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v28); /*0x6891ee*/
        v26 = Object::FindClosestObjectCell(v25, &v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
          Coord::Subtract(v45, ((__int16)v28 << 8) + 128, (SHIWORD(v28) << 8) + 128, 0); /*0x68923d*/
          v27 = Cell::GetGroundHeight(v45); /*0x68924c*/
          Coord::Subtract(v46, ((__int16)v28 << 8) + 128, (SHIWORD(v28) << 8) + 128, v27); /*0x689274*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
            return 1; /*0x68928b*/
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        if ( ++v30 >= 2 ) /*0x6892c5*/
        {
          a3 = v17 + 1; /*0x6892cf*/
          if ( v17 + 1 < 32 ) /*0x6892d3*/
            goto LABEL_8; /*0x6892d3*/
          return 0; /*0x6892d3*/
        }
        v37 = 0; /*0x688ff2*/
      }
    }
  }
  return 0; /*0x688fa8*/
}



// ==== 0x00689310  ScenarioClass::SaveLoad_Prefix  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveLoad_Prefix(DWORD *this, int *a2)
{
  DWORD *v3; // ebx
  DWORD Ticks; // eax
  int v5; // ecx
  DWORD v6; // eax
  int *v7; // esi
  int v8; // eax
  int i; // ebp
  int v10; // eax
  int j; // ebp
  int v12; // eax
  int k; // ebp
  DWORD v14; // eax
  bool v16; // [esp+71h] [ebp-1h]

  v3 = this + 389; /*0x68931c*/
  Debug::Log(); /*0x689339*/
  v16 = *v3 == -1; /*0x68934b*/
  if ( *v3 != -1 ) /*0x68934f*/
  {
    Ticks = Timer::GetTicks(); /*0x68935b*/
    v5 = this->pauseTimer; /*0x689362*/
    v6 = Ticks - *v3; /*0x689365*/
    *v3 = -1; /*0x689367*/
    this->pauseTimer = v6 + v5; /*0x68936f*/
  }
  v7 = a2; /*0x689372*/
  (*(void (__stdcall **)(int *, DWORD *, int, _DWORD))(*a2 + 16))(a2, this, 14144, 0); /*0x689381*/
  v8 = *v7; /*0x68938a*/
  a2 = (int *)this->dropshipUnitCounts; /*0x689396*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v7, &a2, 4, 0); /*0x68939a*/
  for ( i = 0; i < (int)a2; ++i ) /*0x6893a5*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->allowableUnitsCount + 4 * i, 4, 0); /*0x6893b8*/
  v10 = *v7; /*0x6893ca*/
  a2 = (int *)this->blue; /*0x6893d6*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v7, &a2, 4, 0); /*0x6893da*/
  for ( j = 0; j < (int)a2; ++j ) /*0x6893e5*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ambientTarget + 4 * j, 4, 0); /*0x6893f8*/
  v12 = *v7; /*0x68940a*/
  a2 = (int *)this->ionGround; /*0x689416*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v7, &a2, 4, 0); /*0x68941a*/
  for ( k = 0; k < (int)a2; ++k ) /*0x689425*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ionRed + 4 * k, 4, 0); /*0x689438*/
  LOBYTE(v14) = v16; /*0x689444*/
  if ( !v16 && *v3 == -1 ) /*0x68944f*/
  {
    v14 = Timer::GetTicks(); /*0x689454*/
    *v3 = v14; /*0x689459*/
  }
  return v14; /*0x68945b*/
}



// ==== 0x00689470  ScenarioClass::SaveLoad_Prefix_0  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass::SaveLoad_Prefix_0(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  DWORD Ticks; // eax
  int v6; // ecx
  DWORD v7; // eax
  int v8; // esi
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // esi
  DWORD *v13; // esi
  int v14; // [esp+70h] [ebp-8h] BYREF
  DWORD *v15; // [esp+74h] [ebp-4h]

  v3 = *(_DWORD *)(this + 1556); /*0x689479*/
  v4 = (_DWORD *)(this + 1556); /*0x68947f*/
  v15 = (DWORD *)(this + 1556); /*0x689488*/
  if ( v3 != -1 ) /*0x68948c*/
  {
    Ticks = Timer::GetTicks(); /*0x689491*/
    v6 = v4[2]; /*0x689498*/
    v7 = Ticks - *v4; /*0x68949b*/
    *v4 = -1; /*0x68949d*/
    v4[2] = v7 + v6; /*0x6894a5*/
  }
  v8 = a2; /*0x6894a8*/
  (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 14144, 0); /*0x6894b7*/
  if ( this ) /*0x6894bc*/
    ScenarioClass::ReadINIEntry(this, (int)&a2); /*0x6894c5*/
  if ( this != -13524 ) /*0x6894d2*/
  {
    TechnoTypeVector::Construct((_DWORD *)(this + 13524), 0, 0); /*0x6894da*/
    *(_DWORD *)(this + 13524) = &TypeList<TechnoTypeClass *>::`vftable'; /*0x6894df*/
  }
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &a2, 4, 0); /*0x6894f1*/
  for ( i = 0; i < a2; ++i ) /*0x6894fc*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x68950a*/
    DynamicVector_PushBack((_DWORD *)(this + 13524), &v14); /*0x689514*/
  }
  if ( this != -13552 ) /*0x68952a*/
  {
    DynamicVectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x689532*/
    *(_DWORD *)(this + 13552) = &TypeList<int>::`vftable'; /*0x689537*/
  }
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &a2, 4, 0); /*0x689549*/
  for ( j = 0; j < a2; ++j ) /*0x689554*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x689562*/
    DynamicVector::Add_Alt((_DWORD *)(this + 13552), &v14); /*0x68956c*/
  }
  if ( this != -13580 ) /*0x689582*/
  {
    DynamicVectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x68958a*/
    *(_DWORD *)(this + 13580) = &TypeList<int>::`vftable'; /*0x68958f*/
  }
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &a2, 4, 0); /*0x6895a1*/
  for ( k = 0; k < a2; ++k ) /*0x6895ac*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x6895ba*/
    DynamicVector::Add_Alt((_DWORD *)(this + 13580), &v14); /*0x6895c4*/
  }
  for ( m = 0; m < *(_DWORD *)(this + 13540); ++m ) /*0x6895dc*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(this + 13528) + 4 * m)); /*0x6895ed*/
  if ( *(_BYTE *)(this + 4600) ) /*0x6895fd*/
    *(_DWORD *)(this + 4596) = GetStringCSF((wchar_t *)(this + 4600), 0, g_Str_File_Scenario_CPP, 6608); /*0x68961e*/
  else
    *(_DWORD *)(this + 4596) = &g_TypeClass_DefaultString; /*0x689626*/
  v13 = v15; /*0x689630*/
  if ( *v15 == -1 ) /*0x689637*/
    *v13 = Timer::GetTicks(); /*0x689641*/
  Debug::Log(); /*0x68965d*/
}



// ==== 0x00689670  ScenarioClass::SetGlobalToByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetGlobalToByID(_BYTE *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x32 ) /*0x68967a*/
    return 0; /*0x6896b2*/
  v3 = *(this + 40 * a2 + a2 + 7344); /*0x689684*/
  if ( v3 != a3 ) /*0x689698*/
  {
    *(this + 40 * a2 + a2 + 7344) = a3; /*0x68969a*/
    this->variablesChanged = 1; /*0x68969e*/
    HouseClass::UpdateAllTypes((void *)a2); /*0x6896a5*/
  }
  return v3; /*0x6896ae*/
}



// ==== 0x006896C0  ScenarioClass::SetCountryFlag  this=ScenarioClass  sig=csp ====
char __thiscall sub_6896C0(const char *this, const char *a2, char a3)
{
  unsigned int v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x6896c4*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x6896c6*/
  {
    if ( (int)++v3 >= 50 ) /*0x689706*/
      return 1; /*0x689706*/
  }
  if ( v3 == -1 ) /*0x689714*/
    return 1; /*0x68970e*/
  if ( v3 >= 0x32 ) /*0x689719*/
    return 0; /*0x689753*/
  v6 = *(this + 40 * v3 + v3 + 7344); /*0x689721*/
  if ( v6 != a3 ) /*0x689735*/
  {
    *((_BYTE *)this + 40 * v3 + v3 + 7344) = a3; /*0x689737*/
    this->variablesChanged = 1; /*0x689739*/
    HouseClass::UpdateAllTypes((void *)v3); /*0x689742*/
  }
  return v6; /*0x689708*/
}



// ==== 0x00689760  ScenarioClass::GetGlobalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetGlobalStateByID(_BYTE *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 > 0x31 ) /*0x689766*/
    return 0; /*0x689784*/
  *a3 = *(this + 40 * a2 + a2 + 7344); /*0x68977d*/
  return 1; /*0x689781*/
}



// ==== 0x00689790  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689790(const char *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *(this + 40 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}



// ==== 0x00689820  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_689820(const char *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68982a*/
  {
    if ( ++v2 >= 50 ) /*0x689868*/
      return -1; /*0x689871*/
  }
  return v2; /*0x68986a*/
}



// ==== 0x00689880  ScenarioClass::ReadGlobalVariables  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::ReadGlobalVariables(char *this, char *a2)
{
  int KeyCount; // ebp
  int v3; // esi
  char *StringByIndex; // edi
  int v5; // eax

  if ( INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames) >= 50 ) /*0x68989b*/
    KeyCount = 50; /*0x6898ad*/
  else
    KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames); /*0x6898a9*/
  v3 = 0; /*0x6898b2*/
  if ( KeyCount <= 0 ) /*0x6898b6*/
    return 1; /*0x689904*/
  do /*0x6898f6*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_VariableNames, v3); /*0x6898c6*/
    v5 = atoi(StringByIndex); /*0x6898c9*/
    INIClass::GetString( /*0x6898ee*/
      (unsigned __int8 ***)a2,
      (unsigned __int8 *)g_INI_Key_VariableNames,
      (unsigned __int8 *)StringByIndex,
      0,
      this + 40 * v5 + v5 + 7304,
      40);
    ++v3; /*0x6898f3*/
  }
  while ( v3 < KeyCount ); /*0x6898f6*/
  return 1; /*0x6898f9*/
}



// ==== 0x00689910  ScenarioClass::SetLocalToByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetLocalToByID(_BYTE *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x64 ) /*0x68991a*/
    return 0; /*0x689952*/
  v3 = *(this + 40 * a2 + a2 + 9394); /*0x689924*/
  if ( v3 != a3 ) /*0x689938*/
  {
    *(this + 40 * a2 + a2 + 9394) = a3; /*0x68993a*/
    this->variablesChanged = 1; /*0x68993e*/
    TriggerActionQueue::ProcessAll((void *)a2); /*0x689945*/
  }
  return v3; /*0x68994e*/
}



// ==== 0x00689960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689960(const char *this, const char *a2, char a3)
{
  unsigned int v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == -1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = *(this + 40 * v3 + v3 + 9394); /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    *((_BYTE *)this + 40 * v3 + v3 + 9394) = a3; /*0x6899d7*/
    *((_BYTE *)this + 13482) = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll((void *)v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}



// ==== 0x00689A00  ScenarioClass::GetLocalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetLocalStateByID(_BYTE *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 >= 0x64 ) /*0x689a06*/
    return 0; /*0x689a24*/
  *a3 = *(this + 40 * a2 + a2 + 9394); /*0x689a1d*/
  return 1; /*0x689a21*/
}



// ==== 0x00689A30  ObjectClass::method_689A30  this=ObjectClass  sig=csp ====
char __thiscall sub_689A30(const char *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *(this + 40 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}



// ==== 0x00689AC0  ObjectClass::method_689AC0  this=ObjectClass  sig=csp ====
int __thiscall sub_689AC0(const char *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}



// ==== 0x00689B20  ScenarioClass::ReadLocalVariables  this=AbstractTypeClass  sig=csp ====
char __thiscall ScenarioClass::ReadLocalVariables(char *this, char *a2)
{
  char *v2; // ebx
  _BYTE *v3; // eax
  int v4; // ecx
  char *StringByIndex; // edi
  int v6; // esi
  int v7; // ebx
  char *v8; // eax
  int KeyCount; // [esp+8h] [ebp-8Ch]
  int v11; // [esp+Ch] [ebp-88h]
  char String[128]; // [esp+14h] [ebp-80h] BYREF

  v2 = this; /*0x689b27*/
  v3 = this + 9354; /*0x689b2e*/
  v4 = 100; /*0x689b34*/
  do /*0x689b40*/
  {
    *v3 = 0; /*0x689b39*/
    v3 += 41; /*0x689b3c*/
    --v4; /*0x689b3f*/
  }
  while ( v4 ); /*0x689b40*/
  if ( INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames) >= 100 ) /*0x689b58*/
    KeyCount = 100; /*0x689b6c*/
  else
    KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_VariableNames); /*0x689b66*/
  v11 = 0; /*0x689b78*/
  if ( KeyCount <= 0 ) /*0x689b82*/
    return 1; /*0x689c4f*/
  while ( 1 ) /*0x689ba1*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_VariableNames, v11); /*0x689ba1*/
    v6 = atoi(StringByIndex); /*0x689bb0*/
    INIClass::GetString( /*0x689bc2*/
      (unsigned __int8 ***)a2,
      (unsigned __int8 *)g_INI_Key_VariableNames,
      (unsigned __int8 *)StringByIndex,
      0,
      String,
      128);
    v7 = (int)&v2[40 * v6 + v6]; /*0x689bdf*/
    strcpy((char *)(v7 + 9354), strtok(String, Delimiter)); /*0x689bff*/
    v8 = strtok(0, Delimiter); /*0x689c0a*/
    if ( v8 ) /*0x689c14*/
      *(_BYTE *)(v7 + 9394) = atoi(v8) != 0; /*0x689c24*/
    if ( ++v11 >= KeyCount ) /*0x689c39*/
      break; /*0x689c39*/
    v2 = this; /*0x689b8c*/
  }
  return 1; /*0x689c41*/
}



// ==== 0x00689C60  ScenarioClass::ReadWaypoint  this=ScenarioClass  sig=csp ====
char __thiscall sub_689C60(char *this, char *a2)
{
  int v3; // edi
  char *v4; // esi
  CHAR v6[12]; // [esp+10h] [ebp-8Ch] BYREF
  CHAR Source[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int)a2, (int)g_INI_Key_VariableNames, 0); /*0x689c7d*/
  v3 = 0; /*0x689c88*/
  v4 = this + 9354; /*0x689c8a*/
  do /*0x689cdb*/
  {
    if ( *v4 ) /*0x689c90*/
    {
      wsprintfA(v6, "%d", v3); /*0x689ca0*/
      wsprintfA(Source, "%s,%d", v4, v4[40] != 0); /*0x689cb8*/
      INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_VariableNames, v6, Source); /*0x689ccf*/
    }
    ++v3; /*0x689cd4*/
    v4 += 41; /*0x689cd5*/
  }
  while ( v3 < 100 ); /*0x689cdb*/
  return 1; /*0x689cdd*/
}



// ==== 0x00689D30  PreviewClass::RenderMapPreview  this=ScenarioClass  sig=csp ====
char __thiscall sub_689D30(int *this, _DWORD *a2)
{
  int *v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int Int_Overwrite; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v20; // [esp-4h] [ebp-28h]
  int v21; // [esp-4h] [ebp-28h]
  int v22; // [esp+10h] [ebp-14h] BYREF
  char Buffer[12]; // [esp+18h] [ebp-Ch] BYREF

  v3 = this + 1104; /*0x689d40*/
  this->startX = -1; /*0x689d46*/
  this->startY = -1; /*0x689d4c*/
  this->width = -1; /*0x689d52*/
  this->height = -1; /*0x689d58*/
  this->numberStartingPoints = -1; /*0x689d5e*/
  v4 = this + 1104; /*0x689d64*/
  v5 = 8; /*0x689d66*/
  do /*0x689d74*/
  {
    *v4 = 0; /*0x689d6b*/
    v4[1] = 0; /*0x689d6d*/
    v4 += 2; /*0x689d70*/
    --v5; /*0x689d73*/
  }
  while ( v5 ); /*0x689d74*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x689d8d*/
                    (int)a2,
                    (unsigned __int8 *)g_INI_Key_Header,
                    (unsigned __int8 *)g_INI_Key_StartX,
                    this->startX);
  v7 = this->startY; /*0x689d92*/
  this->startX = Int_Overwrite; /*0x689d98*/
  v8 = INIClass::ReadInt_Overwrite( /*0x689dab*/
         (int)a2,
         (unsigned __int8 *)g_INI_Key_Header,
         (unsigned __int8 *)g_INI_Key_StartY,
         v7);
  v20 = this->width; /*0x689db8*/
  this->startY = v8; /*0x689dc3*/
  this->width = INIClass::ReadInt_Overwrite( /*0x689dce*/
                     (int)a2,
                     (unsigned __int8 *)g_INI_Key_Header,
                     (unsigned __int8 *)g_INI_Key_Width,
                     v20);
  v9 = INIClass::ReadInt_Overwrite( /*0x689de7*/
         (int)a2,
         (unsigned __int8 *)g_INI_Key_Header,
         (unsigned __int8 *)g_INI_Key_Height,
         this->height);
  v10 = this->numberStartingPoints; /*0x689dec*/
  this->height = v9; /*0x689df2*/
  v11 = INIClass::ReadInt_Overwrite( /*0x689e05*/
          (int)a2,
          (unsigned __int8 *)g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumberStartingPoints,
          v10);
  v21 = this->numCoopHumanStartSpots; /*0x689e12*/
  this->numberStartingPoints = v11; /*0x689e1d*/
  v12 = INIClass::ReadInt_Overwrite( /*0x689e23*/
          (int)a2,
          (unsigned __int8 *)g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumCoopHumanStartSpots,
          v21);
  v13 = this->numberStartingPoints; /*0x689e28*/
  this->numCoopHumanStartSpots = v12; /*0x689e2e*/
  v14 = 0; /*0x689e34*/
  if ( v13 > 0 ) /*0x689e38*/
  {
    do /*0x689e7e*/
    {
      v15 = v14 + 1; /*0x689e3a*/
      sprintf(Buffer, "Waypoint%d", v14 + 1); /*0x689e48*/
      v16 = INIClass::ReadPoint2D_Overwrite(a2, &v22, (unsigned __int8 *)g_INI_Key_Header, (int)Buffer, v3); /*0x689e62*/
      v17 = *v16; /*0x689e67*/
      v18 = v16[1]; /*0x689e69*/
      *v3 = v17; /*0x689e6c*/
      v3[1] = v18; /*0x689e6e*/
      v14 = v15; /*0x689e77*/
      v3 += 2; /*0x689e79*/
    }
    while ( v15 < this->numberStartingPoints ); /*0x689e7e*/
  }
  return 1; /*0x689e80*/
}



// ==== 0x00689E90  ScenarioClass::ReadMapINI  this=ScenarioClass  sig=csp ====
char __userpurge Scenario_ReadINI@<al>(int a1@<ecx>, double a2@<st0>, int a3)
{
  void ***v4; // eax
  _DWORD *v5; // ebx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void ***v11; // eax
  void **v12; // eax
  void *v13; // eax
  int v14; // ecx
  int v15; // eax
  void **v16; // edx
  void *v17; // eax
  void ***v18; // ebx
  void ***v19; // ecx
  void **v20; // eax
  void ***v21; // ecx
  void **v22; // eax
  void ***v23; // ecx
  int v24; // edx
  int v25; // eax
  void ***v26; // eax
  void **v27; // eax
  void *v28; // eax
  int v29; // ecx
  int v30; // eax
  void **v31; // edx
  void *v32; // eax
  char v33; // al
  char v34; // al
  char v35; // cl
  char v36; // al
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  i... [24437 chars total]



// ==== 0x0068AD70  ScenarioClass::SaveToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass_SaveToINI(int this, char *a2, char a3)
{
  int v4; // esi
  __int16 *i; // edi
  int v6; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // esi
  void *v15; // edi
  int v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // edi
  int v21; // [esp+20h] [ebp-E8h]
  int v22; // [esp+20h] [ebp-E8h]
  int v23; // [esp+24h] [ebp-E4h] BYREF
  int v24; // [esp+28h] [ebp-E0h] BYREF
  int v25; // [esp+2Ch] [ebp-DCh] BYREF
  int v26[2]; // [esp+30h] [ebp-D8h] BYREF
  _DWORD v27[3]; // [esp+38h] [ebp-D0h] BYREF
  char Buffer[8]; // [esp+44h] [ebp-C4h] BYREF
  _BYTE v29[4]; // [esp+4Ch] [ebp-BCh] BYREF
  _BYTE v30[8]; // [esp+50h] [ebp-B8h] BYREF
  _BYTE v31[16]; // [esp+58h] [ebp-B0h] BYREF
  char Source[32]; // [esp+68h] [ebp-A0h] BYREF
  CHAR v33[128]; // [esp+88h] [ebp-80h] BYREF

  INIClass::ClearSection((int)a2, (int)g_INI_Key_Basic, 0); /*0x68ad8d*/
  INIClass::ClearSection((int)a2, (int)g_INI_Key_Basic, (unsigned __int8 *)aCivevac); /*0x68ada0*/
  if ( strlen((const char *)g_ScenarioClass_Instance + 7248) ) /*0x68adb8*/
    INIClass::SetString( /*0x68adcd*/
      a2,
      (unsigned __int8 *)g_INI_Key_Basic,
      g_INI_Key_Briefing,
      (char *)g_ScenarioClass_Instance + 7248);
  if ( strlen((const char *)g_ScenarioClass_Instance + 5050) ) /*0x68ade5*/
    INIClass::SetString( /*0x68adfb*/
      a2,
      (unsigned __int8 *)g_INI_Key_Basic,
      g_INI_Key_UIName,
      (char *)g_ScenarioClass_Instance + 5050);
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x68ae05*/
  v4 = 10000; /*0x68ae0a*/
  v26[0] = 10000; /*0x68ae16*/
  v23 = 0; /*0x68ae1a*/
  v21 = 0; /*0x68ae1e*/
  for ( i = (__int16 *)LayerClass::CellIteratorNext(&MapClass_Instance); /*0x68ae2b*/
        i;
        i = (__int16 *)LayerClass::CellIteratorNext(&MapClass_Instance) )
  {
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, i + 18, 0) ) /*0x68ae3c*/
    {
      v6 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)i + 72))(i); /*0x68ae5c*/
      v7 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *, _DWORD))(*(_DWORD *)i + 72))(i, v29, *(_DWORD *)(v6 + 4)); /*0x68ae6c*/
      IsoCoord::ToScreenOffset(*v7, (int)v27, &v25, &v24); /*0x68ae78*/
      v8 = v24 / 30; /*0x68aeab*/
      if ( v25 / 60 < v4 ) /*0x68aeaf*/
        v4 = v25 / 60; /*0x68aeb1*/
      if ( v25 / 60 > v23 ) /*0x68aeb7*/
        v23 = v25 / 60; /*0x68aeb9*/
      if ( v8 < v26[0] ) /*0x68aec1*/
        v26[0] = v24 / 30; /*0x68aec3*/
      if ( v8 > v21 ) /*0x68aecb*/
        v21 = v24 / 30; /*0x68aecd*/
    }
  }
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Header, g_INI_Key_StartX, v4, 0); /*0x68aef4*/
  v9 = v26[0]; /*0x68aef9*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Header, g_INI_Key_StartY, v26[0], 0); /*0x68af0c*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Header, g_INI_Key_Width, v23 - v4, 0); /*0x68af26*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Header, g_INI_Key_Height, v21 - v9, 0); /*0x68af40*/
  v10 = 0; /*0x68af58*/
  v11 = 0; /*0x68af5a*/
  v12 = (char *)g_ScenarioClass_Instance + 1586; /*0x68af60*/
  do /*0x68af84*/
  {
    if ( v11 >= 0 && *v12 != dword_B05458 ) /*0x68af74*/
      ++v10; /*0x68af7c*/
    ++v11; /*0x68af7d*/
    ++v12; /*0x68af7e*/
  }
  while ( v11 < 8 ); /*0x68af84*/
  v22 = v10; /*0x68af95*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Header, g_INI_Key_NumberStartingPoints, v10, 0); /*0x68af99*/
  INIClass::SetInt( /*0x68afb3*/
    a2,
    (unsigned __int8 *)g_INI_Key_Header,
    g_INI_Key_NumCoopHumanStartSpots,
    *(_DWORD *)(this + 4580),
    0);
  v13 = 0; /*0x68afb8*/
  do /*0x68b09b*/
  {
    v14 = v13 + 1; /*0x68afba*/
    sprintf(Buffer, "Waypoint%d", v13 + 1); /*0x68afc8*/
    if ( v13 >= v22 ) /*0x68afd6*/
    {
      v27[0] = 0; /*0x68b081*/
      v27[1] = 0; /*0x68b085*/
      ((void (__stdcall *)(void *, char *, int))INIEntry::Write2Integers)(g_INI_Key_Header, Buffer, (int)v27); /*0x68b091*/
    }
    else
    {
      v24 = *(_DWORD *)((char *)g_ScenarioClass_Instance + 4 * v13 + 1586); /*0x68aff3*/
      v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24); /*0x68b000*/
      v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15); /*0x68b011*/
      v17 = (int *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD))(*(_DWORD *)v15 + 72))( /*0x68b021*/
                     v15,
                     v31,
                     *(_DWORD *)(v16 + 4));
      IsoCoord::ToScreenOffset(*v17, (int)v30, &v25, &v23); /*0x68b02d*/
      v26[0] = v25 / 60; /*0x68b061*/
      v26[1] = v23 / 30; /*0x68b06a*/
      ((void (__stdcall *)(void *, char *, int))INIEntry::Write2Integers)(g_INI_Key_Header, Buffer, (int)v26); /*0x68b074*/
    }
    v13 = v14; /*0x68b096*/
  }
  while ( v14 < 8 ); /*0x68b09b*/
  ((void (__stdcall *)(char *))ScenarioClass::RevealMapForHouse)(a2); /*0x68b0a4*/
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Basic, aNextscenario, (char *)(this + 4)); /*0x68b0bb*/
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Basic, aAltnextscenari, (char *)(this + 264)); /*0x68b0d4*/
  ((void (__stdcall *)(void *, char *, wchar_t *))INIClass::SetWideAsHex)( /*0x68b0ee*/
    g_INI_Key_Basic,
    g_INI_Key_Name,
    (wchar_t *)(this + 4960));
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aNewiniformat, 4, 0); /*0x68b104*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aCarryovercap, *(_DWORD *)(this + 7296) / 100, 0); /*0x68b131*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aEndofgame, *(_BYTE *)(this + 13484)); /*0x68b14b*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aSkipscore, *(_BYTE *)(this + 13486)); /*0x68b164*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aOnetimeonly, *(_BYTE *)(this + 13487)); /*0x68b17e*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aSkipmapselect, *(_BYTE *)(this + 13488)); /*0x68b198*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Official, 1); /*0x68b1ad*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aIgnoreglobalai, *(_BYTE *)(this + 13492)); /*0x68b1c7*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aTruckcrate, *(_BYTE *)(this + 13489)); /*0x68b1e0*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aTraincrate, *(_BYTE *)(this + 13477)); /*0x68b1fa*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aPercent, *(_DWORD *)(this + 7300), 0); /*0x68b216*/
  ((void (__stdcall *)(void *, char *, int))ScenarioClass::SaveTypeNameListToINI)( /*0x68b22f*/
    g_INI_Key_Basic,
    aAllowableunits,
    this + 13524);
  ((void (__stdcall *)(void *, char *, int))ScenarioClass::SaveIntListToINI)( /*0x68b249*/
    g_INI_Key_Basic,
    aAllowableunitm,
    this + 13552);
  ((void (__stdcall *)(void *, char *, int))ScenarioClass::loadMapData)( /*0x68b263*/
    g_INI_Key_Basic,
    g_INI_Key_Theme,
    *(_DWORD *)(this + 7280));
  if ( !a3 ) /*0x68b271*/
  {
    strcpy(Source, (const char *)HouseClass_Player + 90100); /*0x68b2a1*/
    INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Player, Source); /*0x68b2b7*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Intro, *(_DWORD *)(this + 5172)); /*0x68b2d1*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Brief, *(_DWORD *)(this + 5176)); /*0x68b2ea*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, off_83E188, *(_DWORD *)(this + 5180)); /*0x68b304*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Lose, *(_DWORD *)(this + 5184)); /*0x68b31e*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, g_INI_Key_Action, *(_DWORD *)(this + 5188)); /*0x68b337*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, aPostscore, *(_DWORD *)(this + 5192)); /*0x68b351*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)g_INI_Key_Basic, aPremapselect, *(_DWORD *)(this + 5196)); /*0x68b36b*/
    INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Basic, aCarryovermoney, *(double *)(this + 7288)); /*0x68b38c*/
    INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aTimerinherit, *(_BYTE *)(this + 13485)); /*0x68b3a5*/
    INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aFillsilos, *(_BYTE *)(this + 13490)); /*0x68b3bf*/
    INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aStartingdropsh, *(_DWORD *)(this + 13520), 0); /*0x68b3db*/
    INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aHomecell, *(_DWORD *)(this + 524), 0); /*0x68b3f6*/
    INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aAlthomecell, *(_DWORD *)(this + 528), 0); /*0x68b412*/
  }
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aMultiplayeronl, *(unsigned __int8 *)(this + 13500), 0); /*0x68b430*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aTiberiumgrowth, *(_BYTE *)(this + 13478)); /*0x68b449*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aVeingrowthenab, *(_BYTE *)(this + 13479)); /*0x68b463*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aIcegrowthenabl, *(_BYTE *)(this + 13480)); /*0x68b47d*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aTiberiumdeatht, *(_BYTE *)(this + 13491)); /*0x68b496*/
  INIClass::SetBool(a2, (unsigned __int8 *)g_INI_Key_Basic, aFreeradar, *(_BYTE *)(this + 13476)); /*0x68b4b0*/
  INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Basic, aInittime, *(_DWORD *)(this + 13724), 0); /*0x68b4cc*/
  INIClass::ClearSection((int)a2, (int)g_INI_Key_VariableNames, 0); /*0x68b4dc*/
  v18 = 0; /*0x68b4e1*/
  v19 = this + 9354; /*0x68b4e3*/
  do /*0x68b540*/
  {
    if ( *(_BYTE *)v19 ) /*0x68b4e9*/
    {
      wsprintfA((LPSTR)v27, "%d", v18); /*0x68b4f9*/
      wsprintfA(v33, "%s,%d", (const char *)v19, *(_BYTE *)(v19 + 40) != 0); /*0x68b518*/
      INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_VariableNames, (char *)v27, v33); /*0x68b534*/
    }
    ++v18; /*0x68b539*/
    v19 += 41; /*0x68b53a*/
  }
  while ( v18 < 100 ); /*0x68b540*/
  ((void (__stdcall *)(void *, char *, int))INIClass::SaveTimeField)( /*0x68b555*/
    g_INI_Key_Ranking,
    aPartimeeasy,
    *(_DWORD *)(this + 13732));
  ((void (__stdcall *)(void *, char *, int))INIClass::SaveTimeField)( /*0x68b56d*/
    g_INI_Key_Ranking,
    aPartimemedium,
    *(_DWORD *)(this + 13736));
  ((void (__stdcall *)(void *, char *, int))INIClass::SaveTimeField)( /*0x68b585*/
    g_INI_Key_Ranking,
    aPartimehard,
    *(_DWORD *)(this + 13740));
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Ranking, aUnderpartitle, (char *)(this + 13744)); /*0x68b59d*/
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Ranking, aUnderparmessag, (char *)(this + 13775)); /*0x68b5b5*/
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Ranking, aOverpartitle, (char *)(this + 13806)); /*0x68b5cd*/
  INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_Ranking, aOverparmessage, (char *)(this + 13837)); /*0x68b5e5*/
  INIClass::ClearSection((int)a2, (int)g_INI_Key_Lighting, 0); /*0x68b5f3*/
  INIClass::SetDouble( /*0x68b616*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_Ambient,
    (double)*(int *)(this + 13608) * 0.01);
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, off_820538, (double)*(int *)(this + 13620) * 0.01); /*0x68b639*/
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_Green, (double)*(int *)(this + 13624) * 0.01); /*0x68b65c*/
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_Blue, (double)*(int *)(this + 13628) * 0.01); /*0x68b67f*/
  INIClass::SetDouble( /*0x68b6a2*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_Ground,
    (double)*(int *)(this + 13632) * 0.001);
  INIClass::SetDouble( /*0x68b6c5*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_Level,
    (double)*(int *)(this + 13636) * 0.001);
  INIClass::SetDouble( /*0x68b6e8*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonAmbient,
    (double)*(int *)(this + 13640) * 0.01);
  INIClass::SetDouble( /*0x68b70b*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonRed,
    (double)*(int *)(this + 13644) * 0.01);
  INIClass::SetDouble( /*0x68b72e*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonGreen,
    (double)*(int *)(this + 13648) * 0.01);
  INIClass::SetDouble( /*0x68b751*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonBlue,
    (double)*(int *)(this + 13652) * 0.01);
  INIClass::SetDouble( /*0x68b774*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonGround,
    (double)*(int *)(this + 13656) * 0.001);
  INIClass::SetDouble( /*0x68b797*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    g_INI_Key_IonLevel,
    (double)*(int *)(this + 13660) * 0.001);
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, aDominatorambie, (double)*(int *)(this + 13692) * 0.01); /*0x68b7ba*/
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, aDominatorred, (double)*(int *)(this + 13696) * 0.01); /*0x68b7dd*/
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, aDominatorgreen, (double)*(int *)(this + 13700) * 0.01); /*0x68b800*/
  INIClass::SetDouble(a2, (unsigned __int8 *)g_INI_Key_Lighting, aDominatorblue, (double)*(int *)(this + 13704) * 0.01); /*0x68b823*/
  INIClass::SetDouble( /*0x68b846*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    aDominatorgroun,
    (double)*(int *)(this + 13708) * 0.001);
  INIClass::SetDouble( /*0x68b869*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    aDominatorlevel,
    (double)*(int *)(this + 13712) * 0.001);
  INIClass::SetDouble( /*0x68b88c*/
    a2,
    (unsigned __int8 *)g_INI_Key_Lighting,
    aDominatorambie_0,
    (double)*(int *)(this + 13716) * 0.001);
  return 1; /*0x68b891*/
}



// ==== 0x0068B8A0  ObjectClass::method_68B8A0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_68B8A0(void *this)
{
  DWORD v1; // eax
  unsigned int v2; // ecx
  char v4; // [esp+3h] [ebp-15h] BYREF
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v8; // [esp+10h] [ebp-8h] BYREF

  v5 = (int)this; /*0x68b8a3*/
  v6 = 0; /*0x68b8b3*/
  GetVersionString(&v7, &v4, 0, 0); /*0x68b8bb*/
  if ( v7 > 5 ) /*0x68b8c5*/
    v5 = Math::RoundToInt((double)v5 * 0.8); /*0x68b8d6*/
  v1 = sub_5CAF70((LONG *)&v8); /*0x68b8de*/
  v2 = v8; /*0x68b8e3*/
  if ( v1 || (_DWORD)v8 ) /*0x68b8ed*/
  {
    v8 = v1; /*0x68b8ff*/
    v6 = Math::RoundToInt(((double)v2 * 4294967296.0 + (double)v1) * 0.000001); /*0x68b922*/
  }
  return Math::RoundToInt((double)v5 * 200.0 / (double)v6); /*0x68b939*/
}



// ==== 0x0068B940  Power::ComputeHousePowerChecksum  this=ScenarioClass  sig=csp ====
int __thiscall ComputeHousePowerChecksum(int this, unsigned int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  int v23; // edx

  Checksum::AddString(a2, (unsigned __int8 *)(this + 5050)); /*0x68b952*/
  Power::TimerProcess(*(_DWORD *)(this + 5172)); /*0x68b960*/
  Power::TimerProcess(*(_DWORD *)(this + 5176)); /*0x68b96e*/
  Power::TimerProcess(*(_DWORD *)(this + 5180)); /*0x68b97c*/
  Power::TimerProcess(*(_DWORD *)(this + 5184)); /*0x68b98a*/
  Power::TimerProcess(*(_DWORD *)(this + 5188)); /*0x68b998*/
  Power::TimerProcess(*(_DWORD *)(this + 5192)); /*0x68b9a6*/
  Power::TimerProcess(*(_DWORD *)(this + 5196)); /*0x68b9b4*/
  Power::TimerProcess(*(_DWORD *)(this + 7284)); /*0x68b9c2*/
  Power::TimerProcess(*(_DWORD *)(this + 7300)); /*0x68b9d0*/
  Power::TimerProcess(*(_DWORD *)(this + 7280)); /*0x68b9de*/
  Checksummer::Add_double(*(_DWORD *)(this + 7288), *(_DWORD *)(this + 7292)); /*0x68b9f3*/
  LOBYTE(v3) = *(_BYTE *)(this + 13500); /*0x68b9f8*/
  Power::FlagProcess((int *)a2, v3); /*0x68ba01*/
  LOBYTE(v4) = *(_BYTE *)(this + 13485); /*0x68ba06*/
  Power::FlagProcess((int *)a2, v4); /*0x68ba0f*/
  Power::TimerProcess(*(_DWORD *)(this + 7296) / 100); /*0x68ba2e*/
  Power::TimerProcess(*(_DWORD *)(this + 13472)); /*0x68ba3c*/
  LOBYTE(v5) = *(_BYTE *)(this + 13484); /*0x68ba41*/
  Power::FlagProcess((int *)a2, v5); /*0x68ba4a*/
  Power::TimerProcess(*(_DWORD *)(this + 13516)); /*0x68ba58*/
  LOBYTE(v6) = *(_BYTE *)(this + 13486); /*0x68ba5d*/
  Power::FlagProcess((int *)a2, v6); /*0x68ba66*/
  LOBYTE(v7) = *(_BYTE *)(this + 13487); /*0x68ba6b*/
  v8 = Power::FlagProcess((int *)a2, v7); /*0x68ba74*/
  LOBYTE(v8) = *(_BYTE *)(this + 13488); /*0x68ba79*/
  Power::FlagProcess((int *)a2, v8); /*0x68ba82*/
  LOBYTE(v9) = *(_BYTE *)(this + 13490); /*0x68ba87*/
  Power::FlagProcess((int *)a2, v9); /*0x68ba90*/
  LOBYTE(v10) = *(_BYTE *)(this + 13492); /*0x68ba95*/
  v11 = Power::FlagProcess((int *)a2, v10); /*0x68ba9e*/
  LOBYTE(v11) = *(_BYTE *)(this + 13489); /*0x68baa3*/
  Power::FlagProcess((int *)a2, v11); /*0x68baac*/
  Power::TimerProcess(*(_DWORD *)(this + 7300)); /*0x68baba*/
  Power::TimerProcess(*(_DWORD *)(this + 13520)); /*0x68bac8*/
  v12 = *(_DWORD *)(this + 4584); /*0x68bacd*/
  v13 = *(_DWORD *)(this + 4592); /*0x68bad3*/
  if ( v12 != -1 ) /*0x68badc*/
  {
    if ( (int)g_CurrentFrame - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)g_CurrentFrame - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *(_DWORD *)(this + 4632); /*0x68baf8*/
  v15 = *(_DWORD *)(this + 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)g_CurrentFrame - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)g_CurrentFrame - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *(_DWORD *)(this + 4644); /*0x68bb23*/
  v17 = *(_DWORD *)(this + 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)g_CurrentFrame - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)g_CurrentFrame - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *(_DWORD *)(this + 4656); /*0x68bb4e*/
  v19 = *(_DWORD *)(this + 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)g_CurrentFrame - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)g_CurrentFrame - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *(_DWORD *)(this + 4668); /*0x68bb79*/
  v21 = *(_DWORD *)(this + 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)g_CurrentFrame - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)g_CurrentFrame - v20; /*0x68bb96*/
  }
  Power::TimerProcess(v21); /*0x68bb9f*/
  v22 = *(_DWORD *)(this + 1564); /*0x68bbaa*/
  if ( *(_DWORD *)(this + 1556) != -1 ) /*0x68bbb3*/
    v22 += Timer::GetTicks() - *(_DWORD *)(this + 1556); /*0x68bbc6*/
  Power::TimerProcess(v22); /*0x68bbcb*/
  Power::TimerProcess(*(_DWORD *)(this + 1548)); /*0x68bbd9*/
  Power::TimerProcess(*(_DWORD *)(this + 1552)); /*0x68bbe7*/
  Power::TimerProcess(*(_DWORD *)(this + 4696)); /*0x68bbf5*/
  Power::TimerProcess(*(_DWORD *)(this + 13632)); /*0x68bc03*/
  Power::TimerProcess(*(_DWORD *)(this + 13636)); /*0x68bc11*/
  LOBYTE(v23) = *(_BYTE *)(this + 13476); /*0x68bc16*/
  Power::FlagProcess((int *)a2, v23); /*0x68bc1f*/
  Power::TimerProcess(*(_DWORD *)(this + 13640)); /*0x68bc2d*/
  Power::TimerProcess(*(_DWORD *)(this + 13644)); /*0x68bc3b*/
  Power::TimerProcess(*(_DWORD *)(this + 13648)); /*0x68bc49*/
  Power::TimerProcess(*(_DWORD *)(this + 13652)); /*0x68bc57*/
  Power::TimerProcess(*(_DWORD *)(this + 13656)); /*0x68bc65*/
  Power::TimerProcess(*(_DWORD *)(this + 13660)); /*0x68bc73*/
  Power::TimerProcess(*(_DWORD *)(this + 13608)); /*0x68bc81*/
  Power::TimerProcess(*(_DWORD *)(this + 13612)); /*0x68bc8f*/
  return Power::TimerProcess(*(_DWORD *)(this + 13616)); /*0x68bca2*/
}



// ==== 0x0068BCB0  AbstractClass::updateAITimer  this=ScenarioClass  sig=csp ====
int __thiscall sub_68BCB0(_DWORD *this)
{
  int result; // eax

  result = this->random + 1; /*0x68bcb6*/
  this->random = result; /*0x68bcb7*/
  return result; /*0x68bcbd*/
}



// ==== 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::Get_Waypoint_Location(char *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(this + 4 * a3 + 1586); /*0x68bccf*/
  return a2; /*0x68bcd1*/
}



// ==== 0x0068BCE0  ScenarioClass::GetCellFromArray  this=ScenarioClass  sig=csp ====
void *__thiscall ScenarioClass_GetCellFromArray(__int16 *this, int a2)
{
  return CellCoord::To_CellObj(&MapClass_Instance, this + 2 * a2 + 793); /*0x68bcf6*/
}



// ==== 0x0068BD00  Cell::GetWorldCoords  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall Cell_GetWorldCoords(__int16 *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = CellCoord::To_CellObj(&MapClass_Instance, this + 2 * a3 + 793); /*0x68bd1b*/
  v4 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v9); /*0x68bd26*/
  v5 = *v4; /*0x68bd29*/
  v6 = v4[1]; /*0x68bd2b*/
  v7 = v4[2]; /*0x68bd2e*/
  if ( (v3[80] & 0x500) != 0 ) /*0x68bd3a*/
    v7 += dword_B054BC; /*0x68bd3c*/
  *a2 = v5; /*0x68bd48*/
  a2[1] = v6; /*0x68bd4a*/
  a2[2] = v7; /*0x68bd4e*/
  return a2; /*0x68bd4d*/
}



// ==== 0x0068BD60  ScenarioClass::ClearAllWaypoints  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::ClearAllWaypoints(char *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 1586; /*0x68bd60*/
  v2 = 702; /*0x68bd66*/
  do /*0x68bd77*/
  {
    *result++ = dword_B05458; /*0x68bd71*/
    --v2; /*0x68bd76*/
  }
  while ( v2 ); /*0x68bd77*/
  return result; /*0x68bd79*/
}



// ==== 0x0068BD80  ScenarioClass::Is_Waypoint_Valid  this=ScenarioClass  sig=csp ====
bool __thiscall ScenarioClass::Is_Waypoint_Valid(char *this, unsigned int a2)
{
  return a2 <= 0x2BD && *(_DWORD *)(this + 4 * a2 + 1586) != dword_B05458; /*0x68bdb3*/
}



// ==== 0x0068BDC0  ScenarioClass::ReadWaypoints  this=ScenarioClass  sig=csp ====
__int16 __thiscall ScenarioClass::ReadWaypoints(__int16 *this, int a2)
{
  int v3; // esi
  __int16 *v4; // edi
  signed int Int_Overwrite; // eax
  signed int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  CHAR v10[20]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+28h] [ebp+4h]

  v3 = 0; /*0x68bdcb*/
  v4 = this + 793; /*0x68bdcd*/
  do /*0x68be7f*/
  {
    wsprintfA(v10, "%d", v3); /*0x68bdde*/
    Int_Overwrite = INIClass::ReadInt_Overwrite(a2, (unsigned __int8 *)g_INI_Key_Waypoints, (unsigned __int8 *)v10, 0); /*0x68bdf5*/
    v6 = Int_Overwrite; /*0x68bdfa*/
    if ( Int_Overwrite ) /*0x68bdfe*/
    {
      LOWORD(v11) = Int_Overwrite % 1000; /*0x68be19*/
      Int_Overwrite = (unsigned int)((unsigned __int64)(274877907LL * Int_Overwrite) >> 32) >> 31; /*0x68be25*/
      HIWORD(v11) = v6 / 1000; /*0x68be2a*/
      *(_DWORD *)v4 = v11; /*0x68be33*/
    }
    else
    {
      *(_DWORD *)v4 = dword_B05458; /*0x68be06*/
    }
    if ( v3 >= 0 ) /*0x68be3f*/
    {
      if ( *v4 != (_WORD)dword_B05458 || (LOWORD(Int_Overwrite) = v4[1], (_WORD)Int_Overwrite != HIWORD(dword_B05458)) ) /*0x68be58*/
      {
        v7 = CellCoord::To_CellObj(&MapClass_Instance, v4); /*0x68be60*/
        v8 = v7[80]; /*0x68be65*/
        Int_Overwrite = (signed int)(v7 + 80); /*0x68be6b*/
        *(_DWORD *)Int_Overwrite = v8 | 4; /*0x68be73*/
      }
    }
    ++v3; /*0x68be75*/
    v4 += 2; /*0x68be76*/
  }
  while ( v3 < 702 ); /*0x68be7f*/
  return Int_Overwrite; /*0x68be85*/
}



// ==== 0x0068BE90  ScenarioClass::Write_Waypoints  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Write_Waypoints(__int16 *this, char *a2)
{
  char result; // al
  int v4; // edi
  __int16 *v5; // esi
  CHAR v6[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::ClearSection((int)a2, (int)g_INI_Key_Waypoints, 0); /*0x68bea7*/
  v4 = 0; /*0x68beb2*/
  v5 = this + 793; /*0x68beb4*/
  do /*0x68bf16*/
  {
    if ( *(_DWORD *)v5 != dword_B05458 ) /*0x68bec4*/
    {
      wsprintfA(v6, "%d", v4); /*0x68bede*/
      result = INIClass::SetInt(a2, (unsigned __int8 *)g_INI_Key_Waypoints, v6, *v5 + 1000 * v5[1], 0); /*0x68bf07*/
    }
    ++v4; /*0x68bf0c*/
    v5 += 2; /*0x68bf0d*/
  }
  while ( v4 < 702 ); /*0x68bf16*/
  return result; /*0x68bf18*/
}



// ==== 0x0068BF30  ScenarioClass::Set_Default_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Default_Waypoint(char *this, int a2)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = dword_B05458; /*0x68bf3a*/
  return a2; /*0x68bf41*/
}



// ==== 0x0068BF50  ScenarioClass::Set_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Waypoint(char *this, int a2, int a3)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = a3; /*0x68bf58*/
  return a3; /*0x68bf5f*/
}



// ==== 0x0068C030  BuildingType::Init  this=ScenarioClass  sig=csp ====
int __thiscall sub_68C030(_DWORD *this, unsigned int a2)
{
  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *(this + a2 + 1120); /*0x68c03d*/
}



// ==== 0x0068C050  ObjectClass::Map_Setup  this=ObjectClass  sig=csp ====
void sub_68C050()
{
  int v0; // edi
  int WarRatio_high; // ecx
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int HelipadRatio; // edx
  int v10; // eax
  int v11; // edx
  int AirstripRatio_high; // ecx
  void **v13; // [esp+8h] [ebp-18h] BYREF
  void *Block; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  char v16; // [esp+15h] [ebp-Bh]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v0 = 0; /*0x68c059*/
  if ( dword_8B41F0 > 0 ) /*0x68c05d*/
  {
    WarRatio_high = HIDWORD(g_RulesClass_Instance->WarRatio); /*0x68c069*/
    if ( WarRatio_high > 0 && WarRatio_high >= dword_8B41F0 ) /*0x68c079*/
    {
      VectorClass::Construct(&v13, 0, 0); /*0x68c086*/
      v2 = 10; /*0x68c091*/
      v13 = &DynamicVectorClass<int>::`vftable'; /*0x68c096*/
      v18 = 10; /*0x68c09e*/
      v17 = 0; /*0x68c0a2*/
      v3 = 0; /*0x68c0ac*/
      if ( SHIDWORD(g_RulesClass_Instance->WarRatio) > 0 ) /*0x68c0b0*/
      {
        v4 = v15; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v17 < v4 ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v16 || !v4) && v2 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
LABEL_14:
          if ( ++v3 >= SHIDWORD(g_RulesClass_Instance->WarRatio) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v2 = v18; /*0x68c0b8*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v13[2])(&v13, v2 + v4, 0) ) /*0x68c0df*/
        {
LABEL_12:
          v5 = v17++; /*0x68c0e6*/
          *((_DWORD *)Block + v5) = v3; /*0x68c0f5*/
        }
        v4 = v15; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
LABEL_15:
      v6 = 0; /*0x68c10b*/
      if ( dword_8B41F0 > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v17 - 1); /*0x68c12f*/
          if ( v7 < v17 ) /*0x68c13a*/
          {
            v8 = v7; /*0x68c13d*/
            if ( v7 < --v17 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v8; /*0x68c14b*/
                *((_DWORD *)Block + v8 - 1) = *((_DWORD *)Block + v8); /*0x68c14f*/
              }
              while ( v8 < v17 ); /*0x68c159*/
            }
          }
          HelipadRatio = g_RulesClass_Instance->HelipadRatio; /*0x68c164*/
          if ( v7 + 1 <= HelipadRatio ) /*0x68c16c*/
            break; /*0x68c16c*/
          v10 = v7 - HelipadRatio; /*0x68c16e*/
          v11 = *(_DWORD *)g_RulesClass_Instance->gapD2C; /*0x68c170*/
          if ( v10 + 1 <= v11 ) /*0x68c17b*/
          {
            v0 = *(_DWORD *)(LODWORD(g_RulesClass_Instance->TeslaRatio) + 4 * v10); /*0x68c19a*/
          }
          else
          {
            v7 = v10 - v11; /*0x68c183*/
            if ( v7 + 1 <= g_RulesClass_Instance->DefenseLimit ) /*0x68c18a*/
            {
              AirstripRatio_high = *(_DWORD *)g_RulesClass_Instance->gapD3C; /*0x68c18c*/
LABEL_25:
              v0 = *(_DWORD *)(AirstripRatio_high + 4 * v7); /*0x68c1a5*/
            }
          }
          if ( v0 ) /*0x68c1aa*/
            *(_DWORD *)(*((_DWORD *)dword_8B41E4 + v6) + 1780) = v0; /*0x68c1b5*/
          if ( ++v6 >= dword_8B41F0 ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        AirstripRatio_high = HIDWORD(g_RulesClass_Instance->AirstripRatio); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
LABEL_29:
      v13 = &VectorClass<int>::`vftable'; /*0x68c1ca*/
      if ( Block ) /*0x68c1d9*/
      {
        if ( v16 ) /*0x68c1e1*/
          __3_YAXPAX_Z(Block); /*0x68c1e4*/
      }
    }
  }
}



// ==== 0x0068C200  TechnoTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_68C200(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x68c209*/
  this->Capacity = a2; /*0x68c210*/
  this->q030 = 1; /*0x68c213*/
  this->q034 = 0; /*0x68c217*/
  *this = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x68c21b*/
  if ( a2 ) /*0x68c221*/
  {
    if ( a3 ) /*0x68c229*/
    {
      this->Items = a3; /*0x68c22b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x68c23c*/
      this->q034 = 1; /*0x68c23f*/
    }
  }
  *this = &DynamicVectorClass<TechnoTypeClass *>::`vftable'; /*0x68c243*/
  this->u32_14 = 10; /*0x68c249*/
  this->q010 = 0; /*0x68c250*/
  return this; /*0x68c259*/
}



// ==== 0x0068C260  ObjectClass::DynamicVector_PushBack  this=VectorClass  sig=csp ====
char __thiscall sub_68C260(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x68c263*/
  if ( this->q010 >= v3 ) /*0x68c26b*/
  {
    if ( !this->q034 && v3 ) /*0x68c276*/
      return 0; /*0x68c276*/
    v4 = this->u32_14; /*0x68c278*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x68c288*/
      return 0; /*0x68c28f*/
  }
  v6 = this->q010; /*0x68c295*/
  v7 = this->Items; /*0x68c298*/
  this->q010 = v6 + 1; /*0x68c29e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x68c2a8*/
  return 1; /*0x68c291*/
}



// ==== 0x0068C2B0  Multiplayer::CopyDataArray  this=Multiplayer  sig=csp ====
_DWORD *__thiscall sub_68C2B0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x68c2bf*/
  v3 = a2[2]; /*0x68c2c2*/
  this->u32_8 = v3; /*0x68c2c7*/
  if ( !v3 ) /*0x68c2ca*/
  {
    this->u32_4 = 0; /*0x68c319*/
    this->u8_D = 0; /*0x68c320*/
    return this; /*0x68c324*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x68c2d4*/
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
  this->u32_4 = v4; /*0x68c2eb*/
  if ( !v4 ) /*0x68c2ee*/
    return this; /*0x68c2ee*/
  v5 = this->u32_8; /*0x68c2f0*/
  v6 = 0; /*0x68c2f3*/
  this->u8_D = 1; /*0x68c2f7*/
  if ( v5 <= 0 ) /*0x68c2fb*/
    return this; /*0x68c2fb*/
  do /*0x68c30f*/
  {
    *(_DWORD *)(this->u32_4 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x68c306*/
    ++v6; /*0x68c30c*/
  }
  while ( v6 < this->u32_8 ); /*0x68c30f*/
  return this; /*0x68c313*/
}



// ==== 0x0068C330  sub_68C330  this=-  sig=ida-proto ====
int sub_68C330()
{
  BuildingTypeClass_AnimTable = 0; /*0x68c337*/
  dword_B054D8 = 0; /*0x68c33c*/
  byte_B054DC = 1; /*0x68c341*/
  byte_B054DD = 0; /*0x68c348*/
  ColorScheme_Array = (int)&DynamicVectorClass<ColorScheme *>::`vftable'; /*0x68c34d*/
  dword_B054E4 = 10; /*0x68c357*/
  g_AnimClass_SaveState = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}



// ==== 0x0068C370  sub_68C370  this=-  sig=ida-proto ====
void __cdecl sub_68C370()
{
  ColorScheme_Array = (int)&VectorClass<ColorScheme *>::`vftable'; /*0x68c378*/
  if ( BuildingTypeClass_AnimTable && byte_B054DD ) /*0x68c38c*/
  {
    __3_YAXPAX_Z(BuildingTypeClass_AnimTable); /*0x68c38f*/
    BuildingTypeClass_AnimTable = 0; /*0x68c397*/
  }
  byte_B054DD = 0; /*0x68c39d*/
  dword_B054D8 = 0; /*0x68c3a3*/
}



// ==== 0x0068C3B0  FontClass::CreateGlyphColor  this=FontClass  sig=csp ====
int __fastcall sub_68C3B0(char *a1, const void *a2, int a3, void *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  char v11; // bl
  int v12; // edx
  int v13; // esi
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int v17; // eax
  __int16 v18; // cx
  char v19; // dl
  int v20; // eax
  void *v21; // eax
  int v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h] BYREF
  double v25; // [esp+18h] [ebp-20h]
  double v26; // [esp+20h] [ebp-18h]
  double v27; // [esp+28h] [ebp-10h]
  double v28; // [esp+30h] [ebp-8h]

  v11 = *a1; /*0x68c3bf*/
  v12 = (unsigned __int8)a1[2]; /*0x68c3c8*/
  v24 = (unsigned __int8)a1[1]; /*0x68c3d0*/
  v23 = v12; /*0x68c3d4*/
  Block::Copy(a4, a2); /*0x68c3d8*/
  v13 = 0; /*0x68c3e1*/
  LODWORD(v25) = 0; /*0x68c3e3*/
  v27 = (double)v24; /*0x68c3e7*/
  v28 = (double)v23; /*0x68c3ef*/
  do /*0x68c4a7*/
  {
    v14 = (double)SLODWORD(v25); /*0x68c3f3*/
    v25 = v14 * 0.08144869842640204 + 0.3490658503988659; /*0x68c407*/
    v26 = v14 * 0.04654211338651545 + 0.8726646259971648; /*0x68c417*/
    if ( !v13 ) /*0x68c41b*/
      v25 = 0.1963495408493621; /*0x68c41d*/
    v15 = Math::SinCos(v26); /*0x68c437*/
    BYTE1(v23) = Math::RoundToInt(v15 * v27); /*0x68c449*/
    LOBYTE(v23) = v11; /*0x68c453*/
    v16 = Math::ArcTan2(v25); /*0x68c457*/
    BYTE2(v23) = Math::RoundToInt(v16 * v28); /*0x68c46c*/
    v17 = Color::ConvertToRGB((unsigned __int8 *)&v23, (int)&v24); /*0x68c475*/
    v18 = *(_WORD *)v17; /*0x68c47a*/
    v19 = *(_BYTE *)(v17 + 2); /*0x68c47d*/
    v20 = (int)a4 + 2 * ((v13 + 16) % 256) + (v13 + 16) % 256; /*0x68c497*/
    LODWORD(v25) = ++v13; /*0x68c49d*/
    *(_WORD *)v20 = v18; /*0x68c4a1*/
    *(_BYTE *)(v20 + 2) = v19; /*0x68c4a4*/
  }
  while ( v13 < 16 ); /*0x68c4a7*/
  v21 = __2_YAPAXI_Z(0x1B4u); /*0x68c4b2*/
  if ( v21 ) /*0x68c4bc*/
    return LightConvertClass::Constructor((int)v21, (int)a4, a3, a5, a7, a8, a9, 0, a10, a6); /*0x68c4e2*/
  else
    return 0; /*0x68c4f2*/
}



// ==== 0x0068C710  FontClass::InitMetrics  this=AbstractClass  sig=csp ====
char *__thiscall FontClass_InitMetrics(char *this, char *Source, int a3, int a4, int a5, int a6, char a7)
{
  int v8; // ecx
  _BYTE *v9; // eax
  int v10; // eax

  v8 = 256; /*0x68c715*/
  v9 = this + 4; /*0x68c71f*/
  do /*0x68c72d*/
  {
    *v9 = 0; /*0x68c721*/
    v9[1] = 0; /*0x68c723*/
    v9[2] = 0; /*0x68c726*/
    v9 += 3; /*0x68c729*/
    --v8; /*0x68c72c*/
  }
  while ( v8 ); /*0x68c72d*/
  this->q304 = _strdup(Source); /*0x68c744*/
  this->q184 = *(_WORD *)a3; /*0x68c752*/
  this->q30A = *(_BYTE *)(a3 + 2); /*0x68c75d*/
  this->q0C3 = 0; /*0x68c778*/
  this->q0C4 = a6; /*0x68c77e*/
  *((_DWORD *)this + 197) = 16; /*0x68c784*/
  *((_DWORD *)this + 198) = 15; /*0x68c78a*/
  *((_DWORD *)this + 199) = 25; /*0x68c794*/
  this->q0C8 = 24; /*0x68c79e*/
  this->q324 = 22; /*0x68c7a8*/
  this->q328 = 16; /*0x68c7b2*/
  *((_DWORD *)this + 203) = 19; /*0x68c7b8*/
  this->q0CC = 16; /*0x68c7c2*/
  this->q334 = 16; /*0x68c7c8*/
  this->q338 = 21; /*0x68c7d2*/
  this->q0C3 = FontClass::CreateGlyphColor( /*0x68c7ee*/
                              a5,
                              this + 4,
                              g_DSurface_Primary,
                              a6,
                              1000,
                              1000,
                              1000,
                              &unk_83E1AC);
  if ( a7 ) /*0x68c7fb*/
  {
    if ( g_AnimClass_SaveState < dword_B054D8 /*0x68c830*/
      || (byte_B054DD || !dword_B054D8)
      && dword_B054E4 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(ColorScheme_Array + 8))(
           &ColorScheme_Array,
           dword_B054D8 + dword_B054E4,
           0) )
    {
      v10 = g_AnimClass_SaveState++; /*0x68c83d*/
      *((_DWORD *)BuildingTypeClass_AnimTable + v10) = this; /*0x68c84c*/
    }
    *(_DWORD *)this = g_AnimClass_SaveState; /*0x68c855*/
  }
  return this; /*0x68c859*/
}



// ==== 0x0068C860  ObjectClass::LoadTheaterClassMIX_Load  this=AbstractClass  sig=csp ====
int __thiscall sub_68C860(int this, const void *a2, int a3, int a4, int a5, int a6)
{
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int result; // eax

  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 780); /*0x68c863*/
  if ( v7 ) /*0x68c86b*/
  {
    (**v7)(v7, 1); /*0x68c871*/
    *(_DWORD *)(this + 780) = 0; /*0x68c873*/
  }
  result = FontClass::CreateGlyphColor( /*0x68c8b2*/
             (char *)(this + 776),
             a2,
             a3,
             (void *)(this + 4),
             g_DSurface_Primary,
             *(_DWORD *)(this + 784),
             a4,
             a5,
             a6,
             (int)&unk_83E1AC);
  *(_DWORD *)(this + 780) = result; /*0x68c8b7*/
  return result; /*0x68c8bd*/
}



// ==== 0x0068C8D0  ColorScheme::Destructor  this=ColorScheme  sig=csp ====
int __thiscall ColorScheme_Destructor(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 772) ) /*0x68c8d4*/
    free(*(void **)(this + 772)); /*0x68c8df*/
  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 780); /*0x68c8e7*/
  *(_DWORD *)(this + 772) = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  *(_DWORD *)(this + 780) = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (__thiscall **)(int *, int *))(ColorScheme_Array + 16))(&ColorScheme_Array, &v4); /*0x68c91f*/
  if ( result != -1 && result < g_AnimClass_SaveState && result < --g_AnimClass_SaveState ) /*0x68c93b*/
  {
    do /*0x68c953*/
    {
      ++result; /*0x68c943*/
      *((_DWORD *)BuildingTypeClass_AnimTable + result - 1) = *((_DWORD *)BuildingTypeClass_AnimTable + result); /*0x68c947*/
    }
    while ( result < g_AnimClass_SaveState ); /*0x68c953*/
  }
  return result; /*0x68c925*/
}



// ==== 0x0068C9C0  System_Read_68C9C0  this=INIClass  sig=csp ====
int __fastcall sub_68C9C0(char *Source, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  char *v9; // eax

  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( g_AnimClass_SaveState > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
LABEL_6:
    v9 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, Source, a2, a3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = BuildingTypeClass_AnimTable; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    v8 = _strcmpi(Source, *(const void **)(v7[v6] + 772)) == 0; /*0x68c9f6*/
    v7 = BuildingTypeClass_AnimTable; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= g_AnimClass_SaveState ) /*0x68ca13*/
      goto LABEL_6; /*0x68ca13*/
  }
}



// ==== 0x0068CA50  FindBuildingAnimByName  this=char*  sig=csp ====
int __fastcall BuildingAnim_FindByName(void *a1, int a2)
{
  int v2; // esi
  _DWORD *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68ca57*/
  if ( g_AnimClass_SaveState <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = BuildingTypeClass_AnimTable; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68ca7a*/
    v5 = BuildingTypeClass_AnimTable; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= g_AnimClass_SaveState ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *((_DWORD *)BuildingTypeClass_AnimTable + v2); /*0x68caa3*/
}



// ==== 0x0068CAB0  Network_Assign  this=-  sig=csp ====
int __fastcall sub_68CAB0(void *a1, int a2)
{
  int v2; // esi
  _DWORD *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( g_AnimClass_SaveState <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = BuildingTypeClass_AnimTable; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68cada*/
    v5 = BuildingTypeClass_AnimTable; /*0x68cadc*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= g_AnimClass_SaveState ) /*0x68caf7*/
      return -1; /*0x68caf7*/
  }
  return v2; /*0x68caf9*/
}



// ==== 0x0068CB10  sub_68CB10  this=-  sig=ida-proto ====
int sub_68CB10()
{
  dword_B054F8 = 0; /*0x68cb12*/
  dword_B054FC = 0; /*0x68cb17*/
  dword_B05500 = 0; /*0x68cb1c*/
  dword_B05504 = 0; /*0x68cb21*/
  return 0; /*0x68cb26*/
}



// ==== 0x0068CB30  sub_68CB30  this=-  sig=ida-proto ====
void sub_68CB30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68cb3c*/
  dbl_B05510 = Math::Sqrt(v0 + v0); /*0x68cb4e*/
}



// ==== 0x0068CB60  sub_68CB60  this=-  sig=ida-proto ====
void sub_68CB60()
{
  dbl_B05578 = dbl_B05510 / 60.0; /*0x68cb6c*/
}



// ==== 0x0068CB80  sub_68CB80  this=-  sig=ida-proto ====
void sub_68CB80()
{
  dbl_B05558 = 1.0 / dbl_B05578; /*0x68cb8c*/
}



// ==== 0x0068CBA0  sub_68CBA0  this=-  sig=ida-proto ====
void sub_68CBA0()
{
  dbl_B05550 = 0.0174532925199433 * 45.0; /*0x68cbac*/
}



// ==== 0x0068CBC0  sub_68CBC0  this=-  sig=ida-proto ====
void sub_68CBC0()
{
  dbl_B05518 = 0.0174532925199433 * 60.0; /*0x68cbcc*/
}



// ==== 0x0068CBE0  sub_68CBE0  this=-  sig=ida-proto ====
void sub_68CBE0()
{
  dbl_B054E8 = 0.0174532925199433 * 90.0; /*0x68cbec*/
}



// ==== 0x0068CC00  sub_68CC00  this=-  sig=ida-proto ====
__int64 sub_68CC00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B054E8 - dbl_B05518); /*0x68cc12*/
  result = Math::RoundToInt(v0 * dbl_B05510 * 0.5); /*0x68cc26*/
  dword_B05580 = result; /*0x68cc2b*/
  return result; /*0x68cc30*/
}



// ==== 0x0068CC40  sub_68CC40  this=-  sig=ida-proto ====
void sub_68CC40()
{
  dbl_B05520 = Math::ArcTan((double)dword_B05580 * 0.00390625); /*0x68cc57*/
}



// ==== 0x0068CC70  sub_68CC70  this=-  sig=ida-proto ====
void sub_68CC70()
{
  dbl_B05548 = Math::ArcTan((double)(2 * dword_B05580) / dbl_B05510); /*0x68cc92*/
}



// ==== 0x0068CCA0  sub_68CCA0  this=-  sig=ida-proto ====
__int64 sub_68CCA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05580) + 0.5); /*0x68ccbb*/
  dword_B05574 = result; /*0x68ccc0*/
  return result; /*0x68ccc6*/
}



// ==== 0x0068CCD0  sub_68CCD0  this=-  sig=ida-proto ====
int sub_68CCD0()
{
  word_B05508 = 0; /*0x68ccd2*/
  word_B0550A = 0; /*0x68ccd8*/
  return 0; /*0x68ccde*/
}



// ==== 0x0068CCE0  sub_68CCE0  this=-  sig=ida-proto ====
int sub_68CCE0()
{
  dword_B05538 = 0; /*0x68cce2*/
  dword_B0553C = 0; /*0x68cce7*/
  dword_B05540 = 0; /*0x68ccec*/
  return 0; /*0x68ccf1*/
}



// ==== 0x0068CD00  sub_68CD00  this=-  sig=ida-proto ====
int sub_68CD00()
{
  dword_B05570 = 0; /*0x68cd05*/
  dword_B05568 = 128; /*0x68cd0f*/
  dword_B0556C = 128; /*0x68cd14*/
  return 128; /*0x68cd19*/
}



// ==== 0x0068CD20  ScoreScreen::Display  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen_Display(int this)
{
  int v2; // eax
  unsigned __int8 *EntireFile; // ebx
  int v4; // edi
  char *v5; // ecx
  char v6; // al
  char v7; // dl
  char *v8; // eax
  _DWORD *v9; // eax
  char *v10; // edi
  int v11; // eax
  char *v12; // eax
  int i; // edi
  char **v14; // eax
  char **v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  char **v20; // eax
  char **v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  char **v26; // eax
  char **v27; // ebx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  char **v32; // eax
  char **v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // edx
  char **v38; // eax
  char **v39; // ebx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  char **v44; // eax
  char **v45; // ebx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  char **v50; // eax
  char **... [58501 chars total]



// ==== 0x0068EC00  ScoreScreen::Check  this=ScoreScreen  sig=csp ====
bool __thiscall sub_68EC00(_DWORD *this, char a2)
{
  return (*(int (__thiscall **)(_DWORD *, char *))(this->q01C + 16))(this + 7, &a2) == -1; /*0x68ec14*/
}



// ==== 0x0068EC20  CellClass::CreateInstance  this=ScoreScreen  sig=csp ====
HWND __thiscall sub_68EC20(int *this, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  _BYTE v9[4]; // [esp+14h] [ebp-1FCh] BYREF
  _DWORD v10[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v11; // [esp+110h] [ebp-100h]
  _BYTE v12[252]; // [esp+114h] [ebp-FCh] BYREF

  v2 = g_PerformanceTickOffset; /*0x68ec31*/
  v3 = 20; /*0x68ec3e*/
  if ( g_LastPerformanceTick != -1 ) /*0x68ec43*/
    v2 += Timer::GetTicks() - g_LastPerformanceTick; /*0x68ec55*/
  v4 = v2; /*0x68ec57*/
  while ( 1 ) /*0x68ec5f*/
  {
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x68ec5f*/
    if ( !v3 ) /*0x68ec66*/
      break; /*0x68ec66*/
LABEL_6:
    if ( g_GameMode_Current[0] == 2 || g_GameMode_Current[0] == 1 ) /*0x68ec89*/
    {
      v5 = g_PerformanceTickOffset; /*0x68ec94*/
      if ( g_LastPerformanceTick != -1 ) /*0x68ec9c*/
        v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x68ecae*/
      if ( (unsigned int)(v5 - v4) > 0x28 ) /*0x68ecb5*/
      {
        memset(v10, 0, sizeof(v10)); /*0x68ecc2*/
        v11 = 0; /*0x68ecc4*/
        v10[0] = 106; /*0x68eccb*/
        *(_DWORD *)((char *)&v10[38] + 2) = CellClass::GetBridgeIndexThunk(&g_EventManager); /*0x68ecde*/
        LOBYTE(v10[6]) = g_EventDispatchState; /*0x68ecf5*/
        Stream::WriteBlock((int)&g_EventManager, (int)v10, 250, 0); /*0x68ecf9*/
        v6 = g_PerformanceTickOffset; /*0x68ed03*/
        if ( g_LastPerformanceTick != -1 ) /*0x68ed0b*/
          v6 += Timer::GetTicks() - g_LastPerformanceTick; /*0x68ed1d*/
        v4 = v6; /*0x68ed1f*/
      }
      ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v12, (int)v9); /*0x68ed33*/
      Stream::ReadPacket((int)&g_EventManager); /*0x68ed3d*/
    }
    Screen::TransitionLoop(this, 1); /*0x68ed48*/
    if ( !v3 ) /*0x68ed4f*/
      break; /*0x68ed4f*/
    --v3; /*0x68ed55*/
  }
  if ( !EventQueue::Process(g_BinkMoviePlayer) ) /*0x68ec6e*/
    goto LABEL_6; /*0x68ec76*/
  return Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x68ed66*/
}



// ==== 0x0068ED80  Render_Get  this=ScoreScreen  sig=csp ====
int __stdcall sub_68ED80(#375 *other)
{
  int v1; // ebp
  int v2; // ebx
  int v4; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v9; // [esp-4h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]
  #375 *othera; // [esp+28h] [ebp+4h]
  float otherb; // [esp+28h] [ebp+4h]

  v1 = 0; /*0x68ed8a*/
  v2 = 0; /*0x68ed8d*/
  v12 = 0; /*0x68ed96*/
  v10 = 0; /*0x68ed9a*/
  if ( HouseClass_Count > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      v4 = *(_DWORD *)&HouseClass_Array->gap0[4 * v10]; /*0x68edad*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(other, (#375 *)v4) /*0x68edca*/
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v4, other)
        || other == (#375 *)v4 )
      {
        v5 = VectorClass::GetCount((_DWORD *)(v4 + 21840)) + v2; /*0x68eddd*/
        v6 = VectorClass::GetCount((_DWORD *)(v4 + 21860)) + v5; /*0x68edea*/
        v7 = VectorClass::GetCount((_DWORD *)(v4 + 21880)) + v6; /*0x68edf7*/
        v2 = VectorClass::GetCount((_DWORD *)(v4 + 21900)) + v7; /*0x68ee0c*/
        v1 += *(_DWORD *)(v4 + 21556) + *(_DWORD *)(v4 + 21640); /*0x68ee0e*/
      }
      ++v10; /*0x68ee1d*/
    }
    while ( v10 < HouseClass_Count ); /*0x68ee21*/
    v12 = v2; /*0x68ee23*/
  }
  Debug::Log(); /*0x68ee34*/
  if ( v2 + v1 <= 0 ) /*0x68ee3e*/
    v11 = 0.0; /*0x68ee4e*/
  else
    v11 = (double)v12 / (double)(v2 + v1); /*0x68ee48*/
  Debug::Log(); /*0x68ee65*/
  (*(void (__stdcall **)(char *))(*((_DWORD *)other + 9) + 24))((char *)other + 36); /*0x68ee82*/
  Debug::Log(); /*0x68ee8b*/
  othera = (#375 *)(*((_DWORD *)other + 184) + *((_DWORD *)other + 119)); /*0x68eea3*/
  if ( (int)othera <= 0 ) /*0x68eea7*/
    otherb = 0.0; /*0x68eec1*/
  else
    otherb = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)other + 9) + 24))((char *)other + 36) /*0x68eebb*/
           / (double)(int)othera;
  Debug::Log(); /*0x68eed8*/
  v9 = Math::RoundToInt((otherb + v11) * 0.5 * 100.0); /*0x68eef8*/
  Debug::Log(); /*0x68eefe*/
  return v9; /*0x68ef08*/
}



// ==== 0x0068EF20  ScoreScreen::AccumulateScoreStats  this=ScoreScreen  sig=csp ====
int __thiscall sub_68EF20(int *this)
{
  int *v1; // esi
  wchar_t *v2; // ebx
  wchar_t *v3; // ebp
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  int v6; // esi
  wchar_t *v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]

  v1 = this; /*0x68ef26*/
  v2 = 0; /*0x68ef2f*/
  v3 = 0; /*0x68ef31*/
  v4 = 0; /*0x68ef33*/
  v5 = 0; /*0x68ef35*/
  v8 = 0; /*0x68ef3d*/
  v9 = 0; /*0x68ef41*/
  if ( HouseClass_Count > 0 ) /*0x68ef45*/
  {
    do /*0x68eff3*/
    {
      v6 = *(_DWORD *)&HouseClass_Array->gap0[4 * v9]; /*0x68ef54*/
      Debug::Log(); /*0x68ef71*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, (#375 *)v6) /*0x68efa1*/
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, HouseClass_Player)
        || HouseClass_Player == (#375 *)v6 )
      {
        v3 = (wchar_t *)((char *)v3 + *(_DWORD *)(v6 + 21556)); /*0x68efb3*/
        v8 = (wchar_t *)((char *)v8 + *(_DWORD *)(v6 + 21640)); /*0x68efb7*/
      }
      else
      {
        v5 = (wchar_t *)((char *)v5 + *(_DWORD *)(v6 + 21556)); /*0x68efc9*/
        v2 = (wchar_t *)((char *)v2 + *(_DWORD *)(v6 + 21640)); /*0x68efcb*/
      }
      Debug::Log(); /*0x68efda*/
      ++v9; /*0x68efef*/
    }
    while ( v9 < HouseClass_Count ); /*0x68eff3*/
    v1 = this; /*0x68eff9*/
    v4 = v8; /*0x68effd*/
  }
  if ( *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 188) ) /*0x68f00f*/
  {
    Screen::TransitionRender(v1, v2, v4, 227); /*0x68f03c*/
    return Screen::TransitionRender(v1, v5, v3, 283); /*0x68f04a*/
  }
  else
  {
    Screen::TransitionRender(v1, v4, v2, 227); /*0x68f01d*/
    return Screen::TransitionRender(v1, v3, v5, 283); /*0x68f02b*/
  }
}



// ==== 0x0068F060  Screen::TransitionRender  this=Screen  sig=csp ====
int __thiscall Screen_TransitionRender(int *this, wchar_t *Format, wchar_t *a3, int a4)
{
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // ebx
  int *v25; // ecx
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // ecx
  int v29; // ebx
  int *v30; // ecx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebx
  int *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // ecx
  int v42; // ebx
  int *v43; // ecx
  int v44; // edx
  int v45; // eax
  int i; // ebx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  int v50; // ebx
  int v51; // ebx
  int v53; // [esp+C8h] [ebp-25Ch] BYREF
  int v54; // [esp+CCh] [ebp-258h]
  int v55; // [esp+D0h] [ebp-254h] BYREF
  int v56; // [esp+D4h] [ebp-250h]
  int v57; // [esp+D8h] [ebp-24Ch]
  int v58; // [esp+DCh] [ebp-248h]
  int v59; // [esp+E0h] [ebp-244h]
  int v60; // [esp+E4h] [ebp-240h]
  int v61; // [esp+E8h] [ebp-23Ch]
  int v62; // [esp+ECh] [ebp-238h]
  int v63; // [esp+F0h] [ebp-234h]
  int v64; // [esp+F4h] [ebp-230h] BYREF
  int v65; // [esp+F8h] [ebp-22Ch]
  int v66; // [esp+FCh] [ebp-228h]
  int v67; // [esp+100h] [ebp-224h]
  int v68; // [esp+104h] [ebp-220h] BYREF
  int v69; // [esp+108h] [ebp-21Ch]
  int v70; // [esp+10Ch] [ebp-218h]
  int v71; // [esp+110h] [ebp-214h]
  int v72; // [esp+114h] [ebp-210h]
  int v73; // [esp+118h] [ebp-20Ch]
  int v74; // [esp+11Ch] [ebp-208h]
  int v75; // [esp+120h] [ebp-204h]
  wchar_t v76[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v78[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v79[64]; // [esp+2A4h] [ebp-80h] BYREF

  v5 = (int)a3; /*0x68f07a*/
  v6 = *this + a4; /*0x68f085*/
  v7 = this->q001 + 244; /*0x68f08a*/
  v68 = 0; /*0x68f092*/
  v69 = 0; /*0x68f096*/
  v70 = 0; /*0x68f09a*/
  v71 = 0; /*0x68f09e*/
  v64 = 0; /*0x68f0a2*/
  v65 = 0; /*0x68f0a6*/
  v66 = 0; /*0x68f0aa*/
  v67 = 0; /*0x68f0ae*/
  if ( (int)Format > (int)a3 ) /*0x68f0b2*/
    v5 = (int)Format; /*0x68f0b4*/
  v60 = v5; /*0x68f0b8*/
  if ( !v5 ) /*0x68f0bc*/
  {
    v5 = 1; /*0x68f0be*/
    v60 = 1; /*0x68f0c3*/
  }
  v8 = 140 * (int)Format / v5; /*0x68f0e0*/
  v61 = v8; /*0x68f0eb*/
  v9 = 140 * (int)a3 / v60; /*0x68f0f6*/
  v59 = v9; /*0x68f0ff*/
  if ( v60 < 20 ) /*0x68f103*/
  {
    v61 = 5 * (_DWORD)Format; /*0x68f108*/
    v59 = 5 * (_DWORD)a3; /*0x68f116*/
    v8 = 5 * (_DWORD)Format; /*0x68f11a*/
    v9 = 5 * (_DWORD)a3; /*0x68f11e*/
  }
  v60 = v8; /*0x68f124*/
  if ( v8 <= v9 ) /*0x68f128*/
    v60 = v9; /*0x68f12a*/
  if ( !v60 ) /*0x68f134*/
    v60 = 1; /*0x68f136*/
  v58 = v8; /*0x68f140*/
  v10 = v7 - v8; /*0x68f144*/
  v11 = this->q008; /*0x68f146*/
  v72 = v10; /*0x68f149*/
  v56 = v10; /*0x68f14d*/
  v55 = v6; /*0x68f15a*/
  v57 = 4; /*0x68f15e*/
  LOWORD(v53) = -18947; /*0x68f166*/
  BYTE2(v53) = 28; /*0x68f170*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v11 + 28))(v11, &v55, &v53, 25); /*0x68f17b*/
  v58 = v61; /*0x68f189*/
  v55 = v6 + 4; /*0x68f18d*/
  v12 = this->q008; /*0x68f191*/
  v56 = v72; /*0x68f19b*/
  v57 = 7; /*0x68f19f*/
  LOWORD(v53) = -18947; /*0x68f1a7*/
  BYTE2(v53) = 28; /*0x68f1b1*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v12 + 28))(v12, &v55, &v53, 50); /*0x68f1bc*/
  v58 = v61; /*0x68f1ca*/
  v55 = v6 + 11; /*0x68f1ce*/
  v13 = this->q008; /*0x68f1d2*/
  v56 = v72; /*0x68f1dc*/
  v57 = 4; /*0x68f1e0*/
  LOWORD(v53) = -18947; /*0x68f1e8*/
  BYTE2(v53) = 28; /*0x68f1f2*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v13 + 28))(v13, &v55, &v53, 25); /*0x68f1fd*/
  v62 = v6 + 132; /*0x68f20a*/
  v55 = v6 + 132; /*0x68f20e*/
  v58 = v59; /*0x68f214*/
  v14 = this->q008; /*0x68f21a*/
  v73 = v7 - v59; /*0x68f21d*/
  v56 = v7 - v59; /*0x68f221*/
  v57 = 4; /*0x68f22c*/
  LOWORD(v53) = 7418; /*0x68f234*/
  BYTE2(v53) = 28; /*0x68f23d*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v14 + 28))(v14, &v55, &v53, 25); /*0x68f248*/
  v55 = v6 + 136; /*0x68f255*/
  v56 = v73; /*0x68f259*/
  v57 = 7; /*0x68f25d*/
  v15 = this->q008; /*0x68f269*/
  v58 = v59; /*0x68f26c*/
  LOWORD(v53) = 7418; /*0x68f277*/
  BYTE2(v53) = 28; /*0x68f280*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v15 + 28))(v15, &v55, &v53, 50); /*0x68f28b*/
  v58 = v59; /*0x68f29c*/
  v55 = v6 + 143; /*0x68f2a0*/
  v16 = this->q008; /*0x68f2a4*/
  v56 = v73; /*0x68f2ae*/
  v57 = 4; /*0x68f2b2*/
  LOWORD(v53) = 7418; /*0x68f2ba*/
  BYTE2(v53) = 28; /*0x68f2c3*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v16 + 28))(v16, &v55, &v53, 25); /*0x68f2ce*/
  v17 = (int)Format; /*0x68f2d8*/
  v18 = 1; /*0x68f2df*/
  v63 = 1; /*0x68f2e7*/
  v74 = (int)a3; /*0x68f2eb*/
  v75 = (int)Format; /*0x68f2ef*/
  v53 = v7 - 1; /*0x68f2f3*/
  while ( 1 ) /*0x68f2f7*/
  {
    v19 = v61; /*0x68f2f7*/
    v20 = v59; /*0x68f2fb*/
    if ( v61 > v59 ) /*0x68f301*/
      v20 = v61; /*0x68f303*/
    if ( v18 > v20 ) /*0x68f307*/
      break; /*0x68f307*/
    if ( v70 > 0 && v71 > 0 ) /*0x68f31b*/
    {
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f33a*/
        g_DSurface_Hidden,
        &v68,
        DSurface_Alternate,
        &v68,
        0,
        1);
      v19 = v61; /*0x68f33d*/
      v18 = v63; /*0x68f341*/
    }
    if ( v18 > v19 ) /*0x68f347*/
    {
      v54 = g_DSurface_Hidden; /*0x68f414*/
      swprintf(v79, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f418*/
      v28 = (_DWORD *)this->q003; /*0x68f41d*/
      v29 = v7 - v28[2] - v61; /*0x68f430*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v28 + 12))(v28, v54, v79, v6, v29, 2); /*0x68f443*/
      v30 = (int *)this->q003; /*0x68f446*/
      v31 = *v30; /*0x68f44c*/
      v54 = v30[2]; /*0x68f44e*/
      v70 = (*(int (__thiscall **)(int *, wchar_t *))(v31 + 8))(v30, v79); /*0x68f45d*/
      v68 = v6; /*0x68f465*/
      v69 = v29; /*0x68f469*/
      v71 = v54; /*0x68f46d*/
    }
    else
    {
      v58 = v18; /*0x68f351*/
      v21 = this->q008; /*0x68f35e*/
      v56 = v53; /*0x68f361*/
      v55 = v6; /*0x68f36c*/
      v57 = 15; /*0x68f370*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f37f*/
        g_DSurface_Hidden,
        &v55,
        v21,
        &v55,
        0,
        1);
      v22 = v75 / v60; /*0x68f38d*/
      v54 = g_DSurface_Hidden; /*0x68f391*/
      if ( v75 / v60 >= v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v22); /*0x68f3a9*/
      v23 = (_DWORD *)this->q003; /*0x68f3ae*/
      v24 = v53 - v23[2]; /*0x68f3c2*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v23 + 12))(v23, v54, Buffer, v6, v24, 2); /*0x68f3d0*/
      v25 = (int *)this->q003; /*0x68f3d3*/
      v26 = *v25; /*0x68f3d9*/
      v54 = v25[2]; /*0x68f3db*/
      v27 = (*(int (__thiscall **)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v68 = v6; /*0x68f3ee*/
      v69 = v24; /*0x68f3f2*/
      v70 = v27; /*0x68f3f6*/
      v71 = v54; /*0x68f3fa*/
    }
    if ( v66 > 0 && v67 > 0 ) /*0x68f47f*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f49d*/
        g_DSurface_Hidden,
        &v64,
        DSurface_Alternate,
        &v64,
        0,
        1);
    if ( v63 > v59 ) /*0x68f4aa*/
    {
      v54 = g_DSurface_Hidden; /*0x68f585*/
      swprintf(v76, (const size_t)&g_Str_Fmt_PctD, a3); /*0x68f589*/
      v41 = (_DWORD *)this->q003; /*0x68f58e*/
      v42 = v7 - v41[2] - v59; /*0x68f5a3*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v41 + 12))(v41, v54, v76, v62, v42, 2); /*0x68f5b5*/
      v43 = (int *)this->q003; /*0x68f5b8*/
      v44 = *v43; /*0x68f5be*/
      v54 = v43[2]; /*0x68f5c0*/
      v45 = (*(int (__thiscall **)(int *, wchar_t *))(v44 + 8))(v43, v76); /*0x68f5c9*/
      v40 = v54; /*0x68f5d0*/
      v64 = v62; /*0x68f5d4*/
      v65 = v42; /*0x68f5d8*/
      v66 = v45; /*0x68f5dc*/
    }
    else
    {
      v32 = v53; /*0x68f4b4*/
      v58 = v63; /*0x68f4b8*/
      v33 = this->q008; /*0x68f4c5*/
      v55 = v62; /*0x68f4c8*/
      v56 = v53; /*0x68f4d3*/
      v57 = 15; /*0x68f4d7*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f4e6*/
        g_DSurface_Hidden,
        &v55,
        v33,
        &v55,
        0,
        1);
      v34 = v74 / v60; /*0x68f4f4*/
      v54 = g_DSurface_Hidden; /*0x68f4f8*/
      if ( v74 / v60 >= (int)a3 ) /*0x68f505*/
        v34 = (int)a3; /*0x68f507*/
      swprintf(v78, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v34); /*0x68f517*/
      v35 = (_DWORD *)this->q003; /*0x68f51c*/
      v36 = v32 - v35[2]; /*0x68f529*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v35 + 12))(v35, v54, v78, v62, v36, 2); /*0x68f53e*/
      v37 = (int *)this->q003; /*0x68f541*/
      v38 = *v37; /*0x68f547*/
      v54 = v37[2]; /*0x68f549*/
      v39 = (*(int (__thiscall **)(int *, wchar_t *))(v38 + 8))(v37, v78); /*0x68f555*/
      v40 = v54; /*0x68f55c*/
      v64 = v62; /*0x68f560*/
      v65 = v36; /*0x68f564*/
      v66 = v39; /*0x68f568*/
    }
    v67 = v40; /*0x68f5e5*/
    if ( g_INI_Key_BarGraph ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q011; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(g_INI_Key_BarGraph, **(const void ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop(this, 1); /*0x68f625*/
    v63 += 2; /*0x68f646*/
    v53 -= 2; /*0x68f651*/
    v75 += 2 * (_DWORD)Format; /*0x68f660*/
    v17 = (int)Format; /*0x68f664*/
    v18 = v63; /*0x68f66d*/
    v74 += 2 * (_DWORD)a3; /*0x68f671*/
  }
  if ( v70 > 0 && v71 > 0 ) /*0x68f688*/
  {
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f6a6*/
      g_DSurface_Hidden,
      &v68,
      DSurface_Alternate,
      &v68,
      0,
      1);
    v19 = v61; /*0x68f6a9*/
  }
  v56 = v72; /*0x68f6b3*/
  v47 = this->q008; /*0x68f6be*/
  v58 = v19; /*0x68f6c1*/
  v55 = v6; /*0x68f6cc*/
  v57 = 15; /*0x68f6d0*/
  (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x68f6df*/
    DSurface_Alternate,
    &v55,
    v47,
    &v55,
    0,
    1);
  v54 = g_DSurface_Hidden; /*0x68f6f2*/
  swprintf(v76, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f6f6*/
  (*(void (__thiscall **)(_DWORD, int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f71f*/
    this->q003,
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->q003 + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v76); /*0x68f72c*/
  v54 = DSurface_Alternate; /*0x68f740*/
  swprintf(v76, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f744*/
  (*(void (__stdcall **)(int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f76c*/
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->q003 + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v76); /*0x68f779*/
  if ( v66 > 0 && v67 > 0 ) /*0x68f78a*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68f7a9*/
      g_DSurface_Hidden,
      &v64,
      DSurface_Alternate,
      &v64,
      0,
      1);
  v48 = v62; /*0x68f7b4*/
  v56 = v73; /*0x68f7b8*/
  v49 = this->q008; /*0x68f7c5*/
  v58 = v59; /*0x68f7c8*/
  v55 = v62; /*0x68f7d3*/
  v57 = 15; /*0x68f7d7*/
  (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x68f7e6*/
    DSurface_Alternate,
    &v55,
    v49,
    &v55,
    0,
    1);
  v50 = g_DSurface_Hidden; /*0x68f7f0*/
  swprintf(v76, (const size_t)&g_Str_Fmt_PctD, a3); /*0x68f801*/
  (*(void (__thiscall **)(_DWORD, int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f821*/
    this->q003,
    v50,
    v76,
    v48,
    v7 - *(_DWORD *)(this->q003 + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v76); /*0x68f82e*/
  v51 = DSurface_Alternate; /*0x68f838*/
  swprintf(v76, (const size_t)&g_Str_Fmt_PctD, a3); /*0x68f849*/
  (*(void (__stdcall **)(int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f86b*/
    v51,
    v76,
    v48,
    v7 - *(_DWORD *)(this->q003 + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v76); /*0x68f878*/
  return Screen::TransitionLoop(this, 20); /*0x68f884*/
}



// ==== 0x0068F8A0  ObjectClass::method_68F8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_68F8A0(int this)
{
  int v2; // eax
  unsigned int v3; // kr04_4
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  _DWORD *v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x68f8b3*/
  sprintf(Buffer, "%d", v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    v5 = *(_DWORD *)(this + 12); /*0x68f8f8*/
    v6 = *(_DWORD *)(this + 4) + 214; /*0x68f8fd*/
    v4[1] = 590 - 12 * (v3 - 1) + *(_DWORD *)this; /*0x68f902*/
    v4[2] = v6; /*0x68f908*/
    v4[3] = Timer::GetTicks(); /*0x68f910*/
    v4[5] = 0; /*0x68f915*/
    v4[10] = v5; /*0x68f91c*/
    v4[6] = Buffer; /*0x68f91f*/
    v4[7] = 0; /*0x68f922*/
    v4[8] = 0; /*0x68f925*/
    *((_BYTE *)v4 + 36) = 0; /*0x68f928*/
    *v4 = &ScorePrintClass::`vftable'; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  v7 = *(_DWORD *)(this + 36); /*0x68f936*/
  v8 = (int *)(this + 28); /*0x68f93c*/
  if ( *(_DWORD *)(this + 44) < v7 /*0x68f95e*/
    || (*(_BYTE *)(this + 41) || !v7)
    && (v9 = *(_DWORD *)(this + 48), v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*v8 + 8))(this + 28, v7 + v9, 0) )
  {
    v10 = *(_DWORD *)(this + 44); /*0x68f965*/
    v11 = *(_DWORD *)(this + 32); /*0x68f968*/
    *(_DWORD *)(this + 44) = v10 + 1; /*0x68f96e*/
    *(_DWORD *)(v11 + 4 * v10) = v4; /*0x68f971*/
  }
  v12 = *v8; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int, _DWORD **))(v12 + 16))(this + 28, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int, _DWORD **))(v14 + 16))(this + 28, &v15) )
  {
    Screen::TransitionLoop((int *)this, 1); /*0x68f98d*/
    v14 = *v8; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}



// ==== 0x0068F9B0  ScoreScreen::DisplayTimeText  this=ScoreScreen  sig=csp ====
int __thiscall sub_68F9B0(int this, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  _DWORD *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // edx
  wchar_t Buffer[20]; // [esp+Ch] [ebp-28h] BYREF

  v3 = a2; /*0x68f9bb*/
  if ( a2 / 0xE10 > 0x63 ) /*0x68f9c9*/
    v3 = 359999; /*0x68f9cb*/
  swprintf( /*0x68fa12*/
    Buffer,
    (const size_t)a02ld02ld02ld,
    (const wchar_t *const)(v3 / 0xE10),
    v3 % 0xE10 / 0x3C,
    v3 % 0xE10 % 0x3C);
  v4 = *(_DWORD *)this /*0x68fa33*/
     - (*(int (__thiscall **)(_DWORD, wchar_t *))(**(_DWORD **)(this + 16) + 8))(*(_DWORD *)(this + 16), Buffer) / 2
     + 542;
  v5 = __2_YAPAXI_Z(0x2Cu); /*0x68fa3e*/
  if ( v5 ) /*0x68fa45*/
  {
    v6 = *(_DWORD *)(this + 16); /*0x68fa4b*/
    v7 = *(_DWORD *)(this + 4) + 322; /*0x68fa4e*/
    v5[1] = v4; /*0x68fa56*/
    v5[2] = v7; /*0x68fa59*/
    v5[3] = Timer::GetTicks(); /*0x68fa61*/
    v5[5] = 0; /*0x68fa66*/
    v5[10] = v6; /*0x68fa6d*/
    v5[6] = Buffer; /*0x68fa70*/
    v5[7] = 0; /*0x68fa73*/
    v5[8] = 0; /*0x68fa76*/
    *((_BYTE *)v5 + 36) = 0; /*0x68fa79*/
    *v5 = &ScorePrintClass::`vftable'; /*0x68fa7c*/
  }
  else
  {
    v5 = 0; /*0x68fa85*/
  }
  v8 = *(_DWORD *)(this + 36); /*0x68fa87*/
  v9 = (int *)(this + 28); /*0x68fa8d*/
  if ( *(_DWORD *)(this + 44) < v8 /*0x68faaf*/
    || (*(_BYTE *)(this + 41) || !v8)
    && (v10 = *(_DWORD *)(this + 48), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*v9 + 8))(this + 28, v8 + v10, 0) )
  {
    v11 = *(_DWORD *)(this + 44); /*0x68fab6*/
    v12 = *(_DWORD *)(this + 32); /*0x68fab9*/
    *(_DWORD *)(this + 44) = v11 + 1; /*0x68fabf*/
    *(_DWORD *)(v12 + 4 * v11) = v5; /*0x68fac2*/
  }
  v13 = *v9; /*0x68fac5*/
  a2 = (unsigned int)v5; /*0x68face*/
  for ( result = (*(int (__thiscall **)(int, unsigned int *))(v13 + 16))(this + 28, &a2); /*0x68fad8*/
        result != -1;
        result = (*(int (__thiscall **)(int, unsigned int *))(v15 + 16))(this + 28, &a2) )
  {
    Screen::TransitionLoop((int *)this, 1); /*0x68fade*/
    v15 = *v9; /*0x68fae3*/
    a2 = (unsigned int)v5; /*0x68faec*/
  }
  return result; /*0x68faf8*/
}



// ==== 0x0068FB10  ObjectClass::method_68FB10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_68FB10(
        _DWORD *this,
        _DWORD *a2,
        int a3,
        size_t BufferCount,
        wchar_t *Format,
        const wchar_t *a6,
        int a7,
        int a8)
{
  const wchar_t *v8; // eax
  _DWORD *v10; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8); /*0x68fb3d*/
  v10 = (_DWORD *)this->vtable4; /*0x68fb42*/
  v11 = a8 - v10[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = (_DWORD *)this->vtable4; /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/
}



// ==== 0x0068FBB0  ObjectClass::RenderScoreTypeText  this=ScoreScreen  sig=csp ====
int __thiscall ScoreRenderer_TypeText(int this, int a2, int a3, int a4)
{
  int v4; // ebp
  int i; // edi
  int v7; // ecx
  int j; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int m; // edi
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  _BYTE *v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  _DWORD *v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int k; // edi
  int result; // eax
  int v33; // [esp+38h] [ebp-3Ch]
  int v34; // [esp+3Ch] [ebp-38h]
  int v35; // [esp+40h] [ebp-34h]
  _DWORD v36[4]; // [esp+44h] [ebp-30h] BYREF
  _DWORD v37[4]; // [esp+54h] [ebp-20h] BYREF
  _DWORD v38[4]; // [esp+64h] [ebp-10h] BYREF

  v4 = a3; /*0x68fbb5*/
  v34 = 0; /*0x68fbbf*/
  v33 = 0; /*0x68fbc3*/
  do /*0x68ffc4*/
  {
    if ( g_DDraw_Active != 1 ) /*0x68fbce*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x68fbd7*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * i); /*0x68fbdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x68fbe1*/
      }
      while ( !g_DDraw_Active ) /*0x68fbf3*/
      {
        Sleep(0x1F4u); /*0x68fbfa*/
        MessageLoop(); /*0x68fc00*/
      }
      for ( j = 0; j < *(_DWORD *)(this + 44); ++j ) /*0x68fc15*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * j); /*0x68fc1a*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68fc1f*/
      }
    }
    if ( EventQueue::Process(g_BinkMoviePlayer) ) /*0x68fc30*/
    {
      LOWORD(v10) = EventQueue::Read(g_BinkMoviePlayer); /*0x68fc44*/
      v11 = (unsigned __int8)Event_Process(v10); /*0x68fc57*/
      v34 = v11; /*0x68fc5d*/
      Event::Dispatch(); /*0x68fc61*/
      v12 = a3 + 90; /*0x68fc6a*/
      if ( v4 >= a3 + 90 && EventQueue::Process(g_BinkMoviePlayer) ) /*0x68fc7b*/
      {
        do /*0x68fc96*/
          EventQueue::Read(g_BinkMoviePlayer); /*0x68fc8b*/
        while ( EventQueue::Process(g_BinkMoviePlayer) ); /*0x68fc96*/
      }
      if ( v11 != 8 ) /*0x68fca3*/
      {
        if ( v11 < 32 ) /*0x68fdfe*/
          goto LABEL_46; /*0x68fdfe*/
        v13 = a2; /*0x68fe0f*/
        v15 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v11); /*0x68fe1d*/
        goto LABEL_27; /*0x68fe1d*/
      }
      v13 = a2; /*0x68fcb2*/
      if ( v4 >= a3 + 84 ) /*0x68fcb6*/
      {
        LOBYTE(v12) = *(_BYTE *)(v33 + a2); /*0x68fcb8*/
        if ( (_BYTE)v12 ) /*0x68fcbd*/
        {
          if ( (_BYTE)v12 != 32 ) /*0x68fcc1*/
          {
            LOWORD(v12) = (char)v12; /*0x68fcc6*/
            v36[2] = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) /*0x68fcd5*/
                   + 1;
            v14 = *(_DWORD *)(this + 8); /*0x68fce3*/
            v36[1] = a4 + 1; /*0x68fce6*/
            v36[0] = v4; /*0x68fcf1*/
            v36[3] = 16; /*0x68fcf5*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68fd04*/
              g_DSurface_Hidden,
              v36,
              v14,
              v36,
              0,
              1);
            (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x68fd21*/
              DSurface_Alternate,
              v36,
              *(_DWORD *)(this + 8),
              v36,
              0,
              1);
            v34 = 32; /*0x68fd24*/
            v15 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), 32); /*0x68fd2c*/
LABEL_27:
            v19 = *(_DWORD **)(this + 12); /*0x68fe20*/
            v20 = v15 + 1; /*0x68fe27*/
            if ( v4 + v19[1] <= a3 + 90 ) /*0x68fe2f*/
            {
              if ( v4 + v20 >= a3 + 84 ) /*0x68fe40*/
              {
                HIWORD(v21) = HIWORD(v33); /*0x68fe42*/
                LOWORD(v21) = *(char *)(v33 + v13); /*0x68fe48*/
                v38[2] = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 4))(v19, v21) + 1; /*0x68fe56*/
                v22 = *(_DWORD *)(this + 8); /*0x68fe64*/
                v38[1] = a4 + 1; /*0x68fe67*/
                v38[0] = v4; /*0x68fe72*/
                v38[3] = 16; /*0x68fe76*/
                (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68fe85*/
                  g_DSurface_Hidden,
                  v38,
                  v22,
                  v38,
                  0,
                  1);
                (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x68fea2*/
                  DSurface_Alternate,
                  v38,
                  *(_DWORD *)(this + 8),
                  v38,
                  0,
                  1);
              }
              v23 = (_BYTE *)(v33 + v13); /*0x68feb1*/
              *v23 = v34; /*0x68feb4*/
              v23[1] = 0; /*0x68feb6*/
              v24 = __2_YAPAXI_Z(0x2Cu); /*0x68febb*/
              v25 = v24; /*0x68fec0*/
              if ( v24 ) /*0x68fec7*/
              {
                v35 = *(_DWORD *)(this + 12); /*0x68fed0*/
                v24[1] = v4; /*0x68fed7*/
                v24[2] = a4; /*0x68feda*/
                v24[3] = Timer::GetTicks(); /*0x68fee2*/
                v25[5] = 0; /*0x68fee7*/
                v25[7] = 0; /*0x68feea*/
                v25[8] = 0; /*0x68feed*/
                *((_BYTE *)v25 + 36) = 0; /*0x68fef0*/
                v25[6] = v23; /*0x68fef7*/
                v25[10] = v35; /*0x68fefa*/
                *v25 = &ScorePrintClass::`vftable'; /*0x68fefd*/
                v26 = v25; /*0x68ff03*/
              }
              else
              {
                v26 = 0; /*0x68ff07*/
              }
              v27 = *(_DWORD *)(this + 36); /*0x68ff09*/
              if ( *(_DWORD *)(this + 44) < v27 /*0x68ff31*/
                || (*(_BYTE *)(this + 41) || !v27)
                && (v28 = *(_DWORD *)(this + 48), v28 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 28) + 8))(
                     this + 28,
                     v27 + v28,
                     0) )
              {
                v29 = *(_DWORD *)(this + 44); /*0x68ff38*/
                v30 = *(_DWORD *)(this + 32); /*0x68ff3b*/
                *(_DWORD *)(this + 44) = v29 + 1; /*0x68ff41*/
                *(_DWORD *)(v30 + 4 * v29) = v26; /*0x68ff44*/
              }
              if ( g_INI_Key_Type ) /*0x68ff4e*/
              {
                if ( Audio::IsSoundEnabled() ) /*0x68ff50*/
                {
                  for ( k = 0; k < *(_DWORD *)(this + 68); ++k ) /*0x68ff60*/
                  {
                    if ( !_strcmpi(g_INI_Key_Type, **(const void ***)(*(_DWORD *)(this + 56) + 4 * k)) ) /*0x68ff70*/
                      break; /*0x68ff7a*/
                  }
                }
              }
              if ( v4 < a3 + 87 ) /*0x68ff8d*/
              {
                ++v33; /*0x68ff9e*/
                v4 += (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v34) /*0x68ffa5*/
                    + 1;
              }
            }
            goto LABEL_46; /*0x68ffa5*/
          }
        }
      }
      if ( v33 ) /*0x68fd33*/
      {
        LOBYTE(v12) = *(_BYTE *)(v33 + a2 - 1); /*0x68fd39*/
        --v33; /*0x68fd43*/
        LOWORD(v12) = (char)v12; /*0x68fd47*/
        v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) + 1; /*0x68fd53*/
        v4 -= v16; /*0x68fd54*/
        v37[2] = v16; /*0x68fd56*/
        v17 = *(_DWORD *)(this + 8); /*0x68fd64*/
        v37[1] = a4 + 1; /*0x68fd67*/
        v37[0] = v4; /*0x68fd72*/
        v37[3] = 16; /*0x68fd76*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x68fd85*/
          g_DSurface_Hidden,
          v37,
          v17,
          v37,
          0,
          1);
        (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x68fda2*/
          DSurface_Alternate,
          v37,
          *(_DWORD *)(this + 8),
          v37,
          0,
          1);
        *(_BYTE *)(v33 + a2) = 0; /*0x68fdaa*/
        if ( g_INI_Key_Back ) /*0x68fdb0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x68fdb6*/
          {
            for ( m = 0; m < *(_DWORD *)(this + 68); ++m ) /*0x68fdca*/
            {
              if ( !_strcmpi(g_INI_Key_Back, **(const void ***)(*(_DWORD *)(this + 56) + 4 * m)) ) /*0x68fdde*/
                break; /*0x68fde8*/
            }
          }
        }
      }
    }
LABEL_46:
    Render_Render_68FFE0(v4, a4); /*0x68ffa9*/
    result = Screen::TransitionLoop((int *)this, 1); /*0x68ffba*/
  }
  while ( v34 != 13 ); /*0x68ffc4*/
  return result; /*0x68ffca*/
}



// ==== 0x0068FFE0  ObjectClass::Render_Render_68FFE0  this=ScoreScreen  sig=csp ====
signed int __thiscall sub_68FFE0(_DWORD *this, int a2, int a3)
{
  signed int result; // eax
  int v5; // esi
  int v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h]
  _DWORD v8[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+30h] [ebp-10h] BYREF
  int v12; // [esp+34h] [ebp-Ch]
  int v13; // [esp+38h] [ebp-8h]
  int v14; // [esp+3Ch] [ebp-4h]

  if ( (byte_B054F0 & 1) == 0 ) /*0x68ffef*/
  {
    byte_B054F0 |= 1u; /*0x68fffb*/
    dword_B05528 = Timer::GetTicks(); /*0x69000b*/
    dword_B05530 = 0; /*0x690010*/
    atexit(nullsub_227); /*0x69001a*/
  }
  if ( a2 != dword_B05588 ) /*0x690034*/
  {
    v11 = dword_B05588; /*0x69004c*/
    v12 = a3 + 14; /*0x690050*/
    v13 = 11; /*0x690054*/
    v14 = 1; /*0x69005c*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x69006b*/
      g_DSurface_Hidden,
      &v11,
      DSurface_Alternate,
      &v11,
      0,
      1);
    dword_B05588 = a2; /*0x69006e*/
  }
  if ( dword_B05560 ) /*0x69007b*/
  {
    v8[0] = a2 + 10; /*0x690086*/
    v7 = this->q018; /*0x69008d*/
    v8[1] = a3 + 14; /*0x690093*/
    v9 = a2; /*0x690097*/
    v10 = a3 + 14; /*0x69009b*/
    (*(void (__thiscall **)(int, int *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden + 48))( /*0x6900a6*/
      g_DSurface_Hidden,
      &v9,
      v8,
      v7);
  }
  else
  {
    v6 = this->q008; /*0x6900bd*/
    v11 = a2; /*0x6900be*/
    v12 = a3 + 14; /*0x6900c2*/
    v13 = 11; /*0x6900c6*/
    v14 = 1; /*0x6900ce*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x6900dd*/
      g_DSurface_Hidden,
      &v11,
      v6,
      &v11,
      0,
      1);
  }
  result = dword_B05528; /*0x6900e0*/
  v5 = dword_B05530; /*0x6900e5*/
  if ( dword_B05528 == -1 ) /*0x6900ee*/
  {
LABEL_11:
    if ( v5 ) /*0x690108*/
      return result; /*0x690108*/
    goto LABEL_12; /*0x690108*/
  }
  result = Timer::GetTicks() - dword_B05528; /*0x6900fa*/
  if ( result < v5 ) /*0x690102*/
  {
    v5 -= result; /*0x690104*/
    goto LABEL_11; /*0x690104*/
  }
LABEL_12:
  dword_B05560 ^= 1u; /*0x69010a*/
  result = Timer::GetTicks(); /*0x69011b*/
  dword_B05528 = result; /*0x690129*/
  dword_B0552C = v10; /*0x69012e*/
  dword_B05530 = 5; /*0x690134*/
  return result; /*0x69013a*/
}



// ==== 0x00680070  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680083*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680089*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68008d*/
  if ( result >= 0 ) /*0x680092*/
  {
    v6 = 0; /*0x680098*/
    if ( v9 <= 0 ) /*0x68009c*/
    {
      return 0; /*0x6800e6*/
    }
    else
    {
      while ( 1 ) /*0x68009e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68009e*/
        pPStm = 0; /*0x6800a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6800d6*/
        if ( result < 0 ) /*0x6800db*/
          break; /*0x6800db*/
        if ( ++v6 >= v9 ) /*0x6800e4*/
          return 0; /*0x6800e4*/
      }
    }
  }
  return result; /*0x6800e8*/
}


// ==== 0x006800F0  SaveGame_Start_6800F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680103*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680109*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68010d*/
  if ( result >= 0 ) /*0x680112*/
  {
    v6 = 0; /*0x680118*/
    if ( v9 <= 0 ) /*0x68011c*/
    {
      return 0; /*0x680166*/
    }
    else
    {
      while ( 1 ) /*0x68011e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68011e*/
        pPStm = 0; /*0x680121*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680156*/
        if ( result < 0 ) /*0x68015b*/
          break; /*0x68015b*/
        if ( ++v6 >= v9 ) /*0x680164*/
          return 0; /*0x680164*/
      }
    }
  }
  return result; /*0x680168*/
}


// ==== 0x00680170  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680183*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680189*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68018d*/
  if ( result >= 0 ) /*0x680192*/
  {
    v6 = 0; /*0x680198*/
    if ( v9 <= 0 ) /*0x68019c*/
    {
      return 0; /*0x6801e6*/
    }
    else
    {
      while ( 1 ) /*0x68019e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68019e*/
        pPStm = 0; /*0x6801a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6801d6*/
        if ( result < 0 ) /*0x6801db*/
          break; /*0x6801db*/
        if ( ++v6 >= v9 ) /*0x6801e4*/
          return 0; /*0x6801e4*/
      }
    }
  }
  return result; /*0x6801e8*/
}


// ==== 0x006801F0  SaveGame_Start_6801F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680203*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680209*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68020d*/
  if ( result >= 0 ) /*0x680212*/
  {
    v6 = 0; /*0x680218*/
    if ( v9 <= 0 ) /*0x68021c*/
    {
      return 0; /*0x680266*/
    }
    else
    {
      while ( 1 ) /*0x68021e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68021e*/
        pPStm = 0; /*0x680221*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680256*/
        if ( result < 0 ) /*0x68025b*/
          break; /*0x68025b*/
        if ( ++v6 >= v9 ) /*0x680264*/
          return 0; /*0x680264*/
      }
    }
  }
  return result; /*0x680268*/
}


// ==== 0x00680270  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680283*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680289*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68028d*/
  if ( result >= 0 ) /*0x680292*/
  {
    v6 = 0; /*0x680298*/
    if ( v9 <= 0 ) /*0x68029c*/
    {
      return 0; /*0x6802e6*/
    }
    else
    {
      while ( 1 ) /*0x68029e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68029e*/
        pPStm = 0; /*0x6802a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6802d6*/
        if ( result < 0 ) /*0x6802db*/
          break; /*0x6802db*/
        if ( ++v6 >= v9 ) /*0x6802e4*/
          return 0; /*0x6802e4*/
      }
    }
  }
  return result; /*0x6802e8*/
}


// ==== 0x006802F0  SaveGame_Start_6802F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680303*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680309*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68030d*/
  if ( result >= 0 ) /*0x680312*/
  {
    v6 = 0; /*0x680318*/
    if ( v9 <= 0 ) /*0x68031c*/
    {
      return 0; /*0x680366*/
    }
    else
    {
      while ( 1 ) /*0x68031e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68031e*/
        pPStm = 0; /*0x680321*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680356*/
        if ( result < 0 ) /*0x68035b*/
          break; /*0x68035b*/
        if ( ++v6 >= v9 ) /*0x680364*/
          return 0; /*0x680364*/
      }
    }
  }
  return result; /*0x680368*/
}


// ==== 0x00680370  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680383*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680389*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68038d*/
  if ( result >= 0 ) /*0x680392*/
  {
    v6 = 0; /*0x680398*/
    if ( v9 <= 0 ) /*0x68039c*/
    {
      return 0; /*0x6803e6*/
    }
    else
    {
      while ( 1 ) /*0x68039e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68039e*/
        pPStm = 0; /*0x6803a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6803d6*/
        if ( result < 0 ) /*0x6803db*/
          break; /*0x6803db*/
        if ( ++v6 >= v9 ) /*0x6803e4*/
          return 0; /*0x6803e4*/
      }
    }
  }
  return result; /*0x6803e8*/
}


// ==== 0x006803F0  SaveGame_Start_6803F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680403*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680409*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68040d*/
  if ( result >= 0 ) /*0x680412*/
  {
    v6 = 0; /*0x680418*/
    if ( v9 <= 0 ) /*0x68041c*/
    {
      return 0; /*0x680466*/
    }
    else
    {
      while ( 1 ) /*0x68041e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68041e*/
        pPStm = 0; /*0x680421*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680456*/
        if ( result < 0 ) /*0x68045b*/
          break; /*0x68045b*/
        if ( ++v6 >= v9 ) /*0x680464*/
          return 0; /*0x680464*/
      }
    }
  }
  return result; /*0x680468*/
}


// ==== 0x00680470  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680483*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680489*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68048d*/
  if ( result >= 0 ) /*0x680492*/
  {
    v6 = 0; /*0x680498*/
    if ( v9 <= 0 ) /*0x68049c*/
    {
      return 0; /*0x6804e6*/
    }
    else
    {
      while ( 1 ) /*0x68049e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68049e*/
        pPStm = 0; /*0x6804a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6804d6*/
        if ( result < 0 ) /*0x6804db*/
          break; /*0x6804db*/
        if ( ++v6 >= v9 ) /*0x6804e4*/
          return 0; /*0x6804e4*/
      }
    }
  }
  return result; /*0x6804e8*/
}


// ==== 0x006804F0  SaveGame_Start_6804F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680503*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680509*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68050d*/
  if ( result >= 0 ) /*0x680512*/
  {
    v6 = 0; /*0x680518*/
    if ( v9 <= 0 ) /*0x68051c*/
    {
      return 0; /*0x680566*/
    }
    else
    {
      while ( 1 ) /*0x68051e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68051e*/
        pPStm = 0; /*0x680521*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680556*/
        if ( result < 0 ) /*0x68055b*/
          break; /*0x68055b*/
        if ( ++v6 >= v9 ) /*0x680564*/
          return 0; /*0x680564*/
      }
    }
  }
  return result; /*0x680568*/
}


// ==== 0x00680570  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680583*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680589*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68058d*/
  if ( result >= 0 ) /*0x680592*/
  {
    v6 = 0; /*0x680598*/
    if ( v9 <= 0 ) /*0x68059c*/
    {
      return 0; /*0x6805e6*/
    }
    else
    {
      while ( 1 ) /*0x68059e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68059e*/
        pPStm = 0; /*0x6805a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6805d6*/
        if ( result < 0 ) /*0x6805db*/
          break; /*0x6805db*/
        if ( ++v6 >= v9 ) /*0x6805e4*/
          return 0; /*0x6805e4*/
      }
    }
  }
  return result; /*0x6805e8*/
}


// ==== 0x006805F0  SaveGame_Start_6805F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680603*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680609*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68060d*/
  if ( result >= 0 ) /*0x680612*/
  {
    v6 = 0; /*0x680618*/
    if ( v9 <= 0 ) /*0x68061c*/
    {
      return 0; /*0x680666*/
    }
    else
    {
      while ( 1 ) /*0x68061e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68061e*/
        pPStm = 0; /*0x680621*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680656*/
        if ( result < 0 ) /*0x68065b*/
          break; /*0x68065b*/
        if ( ++v6 >= v9 ) /*0x680664*/
          return 0; /*0x680664*/
      }
    }
  }
  return result; /*0x680668*/
}


// ==== 0x00680670  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680683*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680689*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68068d*/
  if ( result >= 0 ) /*0x680692*/
  {
    v6 = 0; /*0x680698*/
    if ( v9 <= 0 ) /*0x68069c*/
    {
      return 0; /*0x6806e6*/
    }
    else
    {
      while ( 1 ) /*0x68069e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68069e*/
        pPStm = 0; /*0x6806a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6806b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6806bd*/
          break; /*0x6806bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6806c5*/
        if ( result < 0 ) /*0x6806cd*/
          break; /*0x6806cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6806d6*/
        if ( result < 0 ) /*0x6806db*/
          break; /*0x6806db*/
        if ( ++v6 >= v9 ) /*0x6806e4*/
          return 0; /*0x6806e4*/
      }
    }
  }
  return result; /*0x6806e8*/
}


// ==== 0x006806F0  SaveGame_Start_6806F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680703*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680709*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68070d*/
  if ( result >= 0 ) /*0x680712*/
  {
    v6 = 0; /*0x680718*/
    if ( v9 <= 0 ) /*0x68071c*/
    {
      return 0; /*0x680766*/
    }
    else
    {
      while ( 1 ) /*0x68071e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68071e*/
        pPStm = 0; /*0x680721*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680739*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68073d*/
          break; /*0x68073d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680745*/
        if ( result < 0 ) /*0x68074d*/
          break; /*0x68074d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680756*/
        if ( result < 0 ) /*0x68075b*/
          break; /*0x68075b*/
        if ( ++v6 >= v9 ) /*0x680764*/
          return 0; /*0x680764*/
      }
    }
  }
  return result; /*0x680768*/
}


// ==== 0x00680770  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680783*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680789*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68078d*/
  if ( result >= 0 ) /*0x680792*/
  {
    v6 = 0; /*0x680798*/
    if ( v9 <= 0 ) /*0x68079c*/
    {
      return 0; /*0x6807e6*/
    }
    else
    {
      while ( 1 ) /*0x68079e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68079e*/
        pPStm = 0; /*0x6807a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6807b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6807bd*/
          break; /*0x6807bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6807c5*/
        if ( result < 0 ) /*0x6807cd*/
          break; /*0x6807cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6807d6*/
        if ( result < 0 ) /*0x6807db*/
          break; /*0x6807db*/
        if ( ++v6 >= v9 ) /*0x6807e4*/
          return 0; /*0x6807e4*/
      }
    }
  }
  return result; /*0x6807e8*/
}


// ==== 0x006807F0  SaveGame_Start_6807F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680803*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680809*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68080d*/
  if ( result >= 0 ) /*0x680812*/
  {
    v6 = 0; /*0x680818*/
    if ( v9 <= 0 ) /*0x68081c*/
    {
      return 0; /*0x680866*/
    }
    else
    {
      while ( 1 ) /*0x68081e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68081e*/
        pPStm = 0; /*0x680821*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680839*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68083d*/
          break; /*0x68083d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680845*/
        if ( result < 0 ) /*0x68084d*/
          break; /*0x68084d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680856*/
        if ( result < 0 ) /*0x68085b*/
          break; /*0x68085b*/
        if ( ++v6 >= v9 ) /*0x680864*/
          return 0; /*0x680864*/
      }
    }
  }
  return result; /*0x680868*/
}


// ==== 0x00680870  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680883*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680889*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68088d*/
  if ( result >= 0 ) /*0x680892*/
  {
    v6 = 0; /*0x680898*/
    if ( v9 <= 0 ) /*0x68089c*/
    {
      return 0; /*0x6808e6*/
    }
    else
    {
      while ( 1 ) /*0x68089e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68089e*/
        pPStm = 0; /*0x6808a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6808b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6808bd*/
          break; /*0x6808bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6808c5*/
        if ( result < 0 ) /*0x6808cd*/
          break; /*0x6808cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6808d6*/
        if ( result < 0 ) /*0x6808db*/
          break; /*0x6808db*/
        if ( ++v6 >= v9 ) /*0x6808e4*/
          return 0; /*0x6808e4*/
      }
    }
  }
  return result; /*0x6808e8*/
}


// ==== 0x006808F0  SaveGame_Start_6808F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680903*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680909*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68090d*/
  if ( result >= 0 ) /*0x680912*/
  {
    v6 = 0; /*0x680918*/
    if ( v9 <= 0 ) /*0x68091c*/
    {
      return 0; /*0x680966*/
    }
    else
    {
      while ( 1 ) /*0x68091e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68091e*/
        pPStm = 0; /*0x680921*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680939*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68093d*/
          break; /*0x68093d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680945*/
        if ( result < 0 ) /*0x68094d*/
          break; /*0x68094d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680956*/
        if ( result < 0 ) /*0x68095b*/
          break; /*0x68095b*/
        if ( ++v6 >= v9 ) /*0x680964*/
          return 0; /*0x680964*/
      }
    }
  }
  return result; /*0x680968*/
}


// ==== 0x00680970  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680983*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680989*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68098d*/
  if ( result >= 0 ) /*0x680992*/
  {
    v6 = 0; /*0x680998*/
    if ( v9 <= 0 ) /*0x68099c*/
    {
      return 0; /*0x6809e6*/
    }
    else
    {
      while ( 1 ) /*0x68099e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68099e*/
        pPStm = 0; /*0x6809a1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6809b9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6809bd*/
          break; /*0x6809bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6809c5*/
        if ( result < 0 ) /*0x6809cd*/
          break; /*0x6809cd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x6809d6*/
        if ( result < 0 ) /*0x6809db*/
          break; /*0x6809db*/
        if ( ++v6 >= v9 ) /*0x6809e4*/
          return 0; /*0x6809e4*/
      }
    }
  }
  return result; /*0x6809e8*/
}


// ==== 0x006809F0  SaveGame_Start_6809F0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680a03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680a09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680a0d*/
  if ( result >= 0 ) /*0x680a12*/
  {
    v6 = 0; /*0x680a18*/
    if ( v9 <= 0 ) /*0x680a1c*/
    {
      return 0; /*0x680a66*/
    }
    else
    {
      while ( 1 ) /*0x680a1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680a1e*/
        pPStm = 0; /*0x680a21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680a39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680a3d*/
          break; /*0x680a3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680a45*/
        if ( result < 0 ) /*0x680a4d*/
          break; /*0x680a4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680a56*/
        if ( result < 0 ) /*0x680a5b*/
          break; /*0x680a5b*/
        if ( ++v6 >= v9 ) /*0x680a64*/
          return 0; /*0x680a64*/
      }
    }
  }
  return result; /*0x680a68*/
}


// ==== 0x00680A70  SaveGame_Start_680A70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680a83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680a89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680a8d*/
  if ( result >= 0 ) /*0x680a92*/
  {
    v6 = 0; /*0x680a98*/
    if ( v9 <= 0 ) /*0x680a9c*/
    {
      return 0; /*0x680ae6*/
    }
    else
    {
      while ( 1 ) /*0x680a9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680a9e*/
        pPStm = 0; /*0x680aa1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680ab9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680abd*/
          break; /*0x680abd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ac5*/
        if ( result < 0 ) /*0x680acd*/
          break; /*0x680acd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680ad6*/
        if ( result < 0 ) /*0x680adb*/
          break; /*0x680adb*/
        if ( ++v6 >= v9 ) /*0x680ae4*/
          return 0; /*0x680ae4*/
      }
    }
  }
  return result; /*0x680ae8*/
}


// ==== 0x00680AF0  SaveGame_Start_680AF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680b03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680b09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680b0d*/
  if ( result >= 0 ) /*0x680b12*/
  {
    v6 = 0; /*0x680b18*/
    if ( v9 <= 0 ) /*0x680b1c*/
    {
      return 0; /*0x680b66*/
    }
    else
    {
      while ( 1 ) /*0x680b1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680b1e*/
        pPStm = 0; /*0x680b21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680b39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680b3d*/
          break; /*0x680b3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680b45*/
        if ( result < 0 ) /*0x680b4d*/
          break; /*0x680b4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680b56*/
        if ( result < 0 ) /*0x680b5b*/
          break; /*0x680b5b*/
        if ( ++v6 >= v9 ) /*0x680b64*/
          return 0; /*0x680b64*/
      }
    }
  }
  return result; /*0x680b68*/
}


// ==== 0x00680B70  SaveGame_Start_680B70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680b83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680b89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680b8d*/
  if ( result >= 0 ) /*0x680b92*/
  {
    v6 = 0; /*0x680b98*/
    if ( v9 <= 0 ) /*0x680b9c*/
    {
      return 0; /*0x680be6*/
    }
    else
    {
      while ( 1 ) /*0x680b9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680b9e*/
        pPStm = 0; /*0x680ba1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680bb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680bbd*/
          break; /*0x680bbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680bc5*/
        if ( result < 0 ) /*0x680bcd*/
          break; /*0x680bcd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680bd6*/
        if ( result < 0 ) /*0x680bdb*/
          break; /*0x680bdb*/
        if ( ++v6 >= v9 ) /*0x680be4*/
          return 0; /*0x680be4*/
      }
    }
  }
  return result; /*0x680be8*/
}


// ==== 0x00680BF0  SaveGame_Start_680BF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680c03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680c09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680c0d*/
  if ( result >= 0 ) /*0x680c12*/
  {
    v6 = 0; /*0x680c18*/
    if ( v9 <= 0 ) /*0x680c1c*/
    {
      return 0; /*0x680c66*/
    }
    else
    {
      while ( 1 ) /*0x680c1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680c1e*/
        pPStm = 0; /*0x680c21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680c39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680c3d*/
          break; /*0x680c3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680c45*/
        if ( result < 0 ) /*0x680c4d*/
          break; /*0x680c4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680c56*/
        if ( result < 0 ) /*0x680c5b*/
          break; /*0x680c5b*/
        if ( ++v6 >= v9 ) /*0x680c64*/
          return 0; /*0x680c64*/
      }
    }
  }
  return result; /*0x680c68*/
}


// ==== 0x00680C70  SaveGame_Start_680C70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680c83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680c89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680c8d*/
  if ( result >= 0 ) /*0x680c92*/
  {
    v6 = 0; /*0x680c98*/
    if ( v9 <= 0 ) /*0x680c9c*/
    {
      return 0; /*0x680ce6*/
    }
    else
    {
      while ( 1 ) /*0x680c9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680c9e*/
        pPStm = 0; /*0x680ca1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680cb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680cbd*/
          break; /*0x680cbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680cc5*/
        if ( result < 0 ) /*0x680ccd*/
          break; /*0x680ccd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680cd6*/
        if ( result < 0 ) /*0x680cdb*/
          break; /*0x680cdb*/
        if ( ++v6 >= v9 ) /*0x680ce4*/
          return 0; /*0x680ce4*/
      }
    }
  }
  return result; /*0x680ce8*/
}


// ==== 0x00680CF0  SaveGame_Start_680CF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680d03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680d09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680d0d*/
  if ( result >= 0 ) /*0x680d12*/
  {
    v6 = 0; /*0x680d18*/
    if ( v9 <= 0 ) /*0x680d1c*/
    {
      return 0; /*0x680d66*/
    }
    else
    {
      while ( 1 ) /*0x680d1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680d1e*/
        pPStm = 0; /*0x680d21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680d39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680d3d*/
          break; /*0x680d3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680d45*/
        if ( result < 0 ) /*0x680d4d*/
          break; /*0x680d4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680d56*/
        if ( result < 0 ) /*0x680d5b*/
          break; /*0x680d5b*/
        if ( ++v6 >= v9 ) /*0x680d64*/
          return 0; /*0x680d64*/
      }
    }
  }
  return result; /*0x680d68*/
}


// ==== 0x00680D70  SaveGame_Start_680D70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680d83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680d89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680d8d*/
  if ( result >= 0 ) /*0x680d92*/
  {
    v6 = 0; /*0x680d98*/
    if ( v9 <= 0 ) /*0x680d9c*/
    {
      return 0; /*0x680de6*/
    }
    else
    {
      while ( 1 ) /*0x680d9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680d9e*/
        pPStm = 0; /*0x680da1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680db9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680dbd*/
          break; /*0x680dbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680dc5*/
        if ( result < 0 ) /*0x680dcd*/
          break; /*0x680dcd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680dd6*/
        if ( result < 0 ) /*0x680ddb*/
          break; /*0x680ddb*/
        if ( ++v6 >= v9 ) /*0x680de4*/
          return 0; /*0x680de4*/
      }
    }
  }
  return result; /*0x680de8*/
}


// ==== 0x00680DF0  SaveGame_Start_680DF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680e03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680e09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680e0d*/
  if ( result >= 0 ) /*0x680e12*/
  {
    v6 = 0; /*0x680e18*/
    if ( v9 <= 0 ) /*0x680e1c*/
    {
      return 0; /*0x680e66*/
    }
    else
    {
      while ( 1 ) /*0x680e1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680e1e*/
        pPStm = 0; /*0x680e21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680e39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680e3d*/
          break; /*0x680e3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680e45*/
        if ( result < 0 ) /*0x680e4d*/
          break; /*0x680e4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680e56*/
        if ( result < 0 ) /*0x680e5b*/
          break; /*0x680e5b*/
        if ( ++v6 >= v9 ) /*0x680e64*/
          return 0; /*0x680e64*/
      }
    }
  }
  return result; /*0x680e68*/
}


// ==== 0x00680E70  SaveGame_Start_680E70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680e83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680e89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680e8d*/
  if ( result >= 0 ) /*0x680e92*/
  {
    v6 = 0; /*0x680e98*/
    if ( v9 <= 0 ) /*0x680e9c*/
    {
      return 0; /*0x680ee6*/
    }
    else
    {
      while ( 1 ) /*0x680e9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680e9e*/
        pPStm = 0; /*0x680ea1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680eb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680ebd*/
          break; /*0x680ebd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ec5*/
        if ( result < 0 ) /*0x680ecd*/
          break; /*0x680ecd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680ed6*/
        if ( result < 0 ) /*0x680edb*/
          break; /*0x680edb*/
        if ( ++v6 >= v9 ) /*0x680ee4*/
          return 0; /*0x680ee4*/
      }
    }
  }
  return result; /*0x680ee8*/
}


// ==== 0x00680EF0  SaveGame_Start_680EF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680f03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680f09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x680f0d*/
  if ( result >= 0 ) /*0x680f12*/
  {
    v6 = 0; /*0x680f18*/
    if ( v9 <= 0 ) /*0x680f1c*/
    {
      return 0; /*0x680f66*/
    }
    else
    {
      while ( 1 ) /*0x680f1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x680f1e*/
        pPStm = 0; /*0x680f21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680f39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680f3d*/
          break; /*0x680f3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680f45*/
        if ( result < 0 ) /*0x680f4d*/
          break; /*0x680f4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680f56*/
        if ( result < 0 ) /*0x680f5b*/
          break; /*0x680f5b*/
        if ( ++v6 >= v9 ) /*0x680f64*/
          return 0; /*0x680f64*/
      }
    }
  }
  return result; /*0x680f68*/
}


// ==== 0x00680F70  Game::validateScenario  this=Game  sig=csp ====
int __thiscall sub_680F70(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x680f78*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      v5 = a2; /*0x680faf*/
      if ( *this ) /*0x680fac*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680fba*/
      *this = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *this ) /*0x680f93*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x680f9c*/
      *this = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *this; /*0x680fc7*/
    if ( *this ) /*0x680fc7*/
    {
      *this = 0; /*0x680fcd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }
}


// ==== 0x00680FF0  GameState::Reset  this=GameState  sig=csp ====
_DWORD *__thiscall GameState::Reset(_DWORD *this)
{
  *this = 0; /*0x680ff4*/
  this->q001 = 0; /*0x680ff6*/
  this->q062 = -1; /*0x680ff9*/
  this->q063 = 0; /*0x681003*/
  this->q0FC = 0; /*0x681009*/
  this->q001 = 0; /*0x68100f*/
  *((_WORD *)this + 132) = 0; /*0x681013*/
  *((_BYTE *)this + 400) = 0; /*0x68101a*/
  *((_BYTE *)this + 660) = 0; /*0x681020*/
  *((_BYTE *)this + 724) = 0; /*0x681026*/
  this->q0F6 = 0; /*0x68102c*/
  this->q0F7 = 0; /*0x681032*/
  this->q0F8 = 0; /*0x681038*/
  this->q0F9 = 0; /*0x68103e*/
  this->q0FA = 0; /*0x681044*/
  this->q0FB = 0; /*0x68104a*/
  return this; /*0x681050*/
}


// ==== 0x00681060  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681060(_DWORD *this, int a2)
{
  this->vtable2 = a2; /*0x681064*/
  return a2; /*0x681067*/
}


// ==== 0x00681070  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_681070(_DWORD *this)
{
  return this->vtable2; /*0x681073*/
}


// ==== 0x00681080  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681080(_DWORD *this, int a2)
{
  *this = a2; /*0x681084*/
  return a2; /*0x681086*/
}


// ==== 0x00681090  ObjectClass::ReadPointerFromECX3  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX3(void *this)
{
  return *(_DWORD *)this; /*0x681092*/
}


// ==== 0x006810A0  ObjectClass::Map_Save_6810A0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall sub_6810A0(wchar_t *this, wchar_t *Source)
{
  this->isSelected = 0; /*0x6810a4*/
  return wcsncpy(this + 4, Source, 0x7Fu); /*0x6810bc*/
}


// ==== 0x006810C0  ObjectClass::?raw_name_type_info__QBEPBDXZ  this=ObjectClass  sig=csp ====
const char *__thiscall _raw_name_type_info__QBEPBDXZ(type_info *this)
{
  return (char *)this + 8; /*0x6810c3*/
}


// ==== 0x006810D0  ObjectClass::Map_Save_6810D0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall sub_6810D0(wchar_t *this, wchar_t *Source)
{
  this->q0C3 = 0; /*0x6810d4*/
  return wcsncpy(this + 132, Source, 0x3Fu); /*0x6810ef*/
}


// ==== 0x00681100  LoadOptions::GetData  this=LoadOptions  sig=csp ====
char *__thiscall sub_681100(char *this)
{
  return this + 264; /*0x681106*/
}


// ==== 0x00681110  ObjectClass::Map_Save  this=ScenarioClass  sig=csp ====
int __thiscall sub_681110(_DWORD *this, int a2)
{
  this->q188 = a2; /*0x681114*/
  return a2; /*0x68111a*/
}


// ==== 0x00681120  LoadOptions::GetFlag98  this=LoadOptions  sig=csp ====
int __thiscall sub_681120(_DWORD *this)
{
  return this->q188; /*0x681126*/
}


// ==== 0x00681130  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681130(_DWORD *this, int a2)
{
  this->q18C = a2; /*0x681134*/
  return a2; /*0x68113a*/
}


// ==== 0x00681140  LoadOptions::GetFlag99  this=LoadOptions  sig=csp ====
int __thiscall sub_681140(_DWORD *this)
{
  return this->q18C; /*0x681146*/
}


// ==== 0x00681180  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_681180(char *this)
{
  return this + 400; /*0x681186*/
}


// ==== 0x006811B0  ObjectClass::method_6811B0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811B0(char *this)
{
  return this + 660; /*0x6811b6*/
}


// ==== 0x006811C0  ObjectClass::Map_Save_6811C0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811C0(char *this, char *Source)
{
  this->q3D7 = 0; /*0x6811c4*/
  return strncpy(this + 724, Source, 0x103u); /*0x6811e0*/
}


// ==== 0x006811F0  ObjectClass::method_6811F0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811F0(char *this)
{
  return this + 724; /*0x6811f6*/
}


// ==== 0x00681200  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681200(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->u32_3D8 = *a2; /*0x681206*/
  result = a2[1]; /*0x68120c*/
  this->q0F7 = result; /*0x68120f*/
  return result; /*0x681215*/
}


// ==== 0x00681220  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681220(_DWORD *this, _DWORD *a2)
{
  *a2 = this->u32_3D8; /*0x68122a*/
  a2[1] = this->q0F7; /*0x681232*/
  return a2; /*0x681235*/
}


// ==== 0x00681240  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681240(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->q0F8 = *a2; /*0x681246*/
  result = a2[1]; /*0x68124c*/
  this->q3E4 = result; /*0x68124f*/
  return result; /*0x681255*/
}


// ==== 0x00681260  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681260(_DWORD *this, _DWORD *a2)
{
  *a2 = this->q0F8; /*0x68126a*/
  a2[1] = this->q3E4; /*0x681272*/
  return a2; /*0x681275*/
}


// ==== 0x00681280  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall sub_681280(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this->q3E8 = *a2; /*0x681286*/
  result = a2[1]; /*0x68128c*/
  this->q0FB = result; /*0x68128f*/
  return result; /*0x681295*/
}


// ==== 0x006812A0  ObjectClass::method_6812A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6812A0(_DWORD *this, _DWORD *a2)
{
  *a2 = this->q3E8; /*0x6812aa*/
  a2[1] = this->q0FB; /*0x6812b2*/
  return a2; /*0x6812b5*/
}


// ==== 0x006812C0  ObjectClass::Map_Save_6812C0  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_6812C0(_DWORD *this, CellStruct *aP1)
{
  this->qFC0 = aP1; /*0x6812c4*/
  return (int)aP1; /*0x6812ca*/
}


// ==== 0x006812D0  LoadOptions::GetFlag252  this=LoadOptions  sig=csp ====
int __thiscall sub_6812D0(_DWORD *this)
{
  return this->q3F0; /*0x6812d6*/
}


// ==== 0x006812E0  GameOptions::SaveLoad  this=GameOptions  sig=csp ====
int __thiscall GameOptions_SaveLoad(int this, int *a2)
{
  int v2; // edi
  int (__stdcall **v5)(int, void *, int **); // eax
  int String; // ebx
  int v7; // ebp
  int v8; // ebp
  int Bool; // esi

  v2 = (int)a2; /*0x6812e4*/
  if ( !a2 ) /*0x6812ec*/
    return -2147467261; /*0x6812f7*/
  v5 = (int (__stdcall **)(int, void *, int **))*a2; /*0x6812fa*/
  a2 = 0; /*0x681307*/
  if ( (*v5)(v2, &unk_7F7D00, &a2) >= 0 ) /*0x681313*/
  {
    String = GameOptions_Load_6829A0(a2, 2, this + 8); /*0x68132b*/
    if ( String < 0 ) /*0x68132f*/
    {
      if ( a2 ) /*0x681337*/
        goto LABEL_77; /*0x681337*/
      return String; /*0x681337*/
    }
    String = GameOptions_Load_6829A0(a2, 3, this + 264); /*0x681361*/
    if ( String < 0 ) /*0x681365*/
    {
      if ( a2 ) /*0x68136d*/
        goto LABEL_77; /*0x68136d*/
      return String; /*0x68136d*/
    }
    String = PropertyBagReadCOM(a2, 9, *(_DWORD *)(this + 4)); /*0x681394*/
    if ( String < 0 ) /*0x681398*/
    {
      if ( a2 ) /*0x6813a0*/
        goto LABEL_77; /*0x6813a0*/
      return String; /*0x6813a0*/
    }
    String = PropertyBagReadCOM(a2, 16, *(_DWORD *)this); /*0x6813c6*/
    if ( String < 0 ) /*0x6813ca*/
    {
      if ( a2 ) /*0x6813d2*/
        goto LABEL_77; /*0x6813d2*/
      return String; /*0x6813d2*/
    }
    String = SetBufferParamsCOM(a2, 12, (int *)(this + 984)); /*0x6813fc*/
    if ( String < 0 ) /*0x681400*/
    {
      if ( a2 ) /*0x681408*/
        goto LABEL_77; /*0x681408*/
      return String; /*0x681408*/
    }
    String = SetBufferParamsCOM(a2, 13, (int *)(this + 1000)); /*0x681432*/
    if ( String < 0 ) /*0x681436*/
    {
      if ( a2 ) /*0x68143e*/
        goto LABEL_77; /*0x68143e*/
      return String; /*0x68143e*/
    }
    String = SetBufferParamsCOM(a2, 10, (int *)(this + 992)); /*0x681468*/
    if ( String < 0 ) /*0x68146c*/
    {
      if ( a2 ) /*0x681474*/
        goto LABEL_77; /*0x681474*/
      return String; /*0x681474*/
    }
    String = ReadStringCOM(a2, 18, (LPCCH)(this + 724)); /*0x68149e*/
    if ( String < 0 ) /*0x6814a2*/
    {
      if ( a2 ) /*0x6814aa*/
        goto LABEL_77; /*0x6814aa*/
      return String; /*0x6814aa*/
    }
    v7 = ReadStringCOM(a2, 4, (LPCCH)(this + 660)); /*0x6814d4*/
    if ( v7 < 0 ) /*0x6814d8*/
    {
      if ( a2 ) /*0x6814e0*/
        (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6814e5*/
      return v7; /*0x6814ee*/
    }
    String = ReadStringCOM(a2, 8, (LPCCH)(this + 660)); /*0x681500*/
    if ( String < 0 ) /*0x681504*/
    {
      if ( a2 ) /*0x68150c*/
        goto LABEL_77; /*0x68150c*/
      return String; /*0x68150c*/
    }
    String = PropertyBagReadCOM(a2, 100, *(_DWORD *)(this + 396)); /*0x681536*/
    if ( String < 0 ) /*0x68153a*/
    {
      if ( a2 ) /*0x681542*/
        goto LABEL_77; /*0x681542*/
      return String; /*0x681542*/
    }
    String = PropertyBagReadCOM(a2, 101, *(_DWORD *)(this + 392)); /*0x68156c*/
    if ( String < 0 ) /*0x681570*/
    {
      if ( a2 ) /*0x681578*/
        goto LABEL_77; /*0x681578*/
      return String; /*0x681578*/
    }
    String = PropertyBagReadCOM(a2, 102, *(_DWORD *)(this + 1008)); /*0x6815a2*/
    if ( String < 0 ) /*0x6815a6*/
    {
      if ( a2 ) /*0x6815ae*/
        goto LABEL_77; /*0x6815ae*/
      return String; /*0x6815ae*/
    }
  }
  String = GameOptions_Load(v2, 2, (wchar_t *)(this + 8)); /*0x6815d1*/
  if ( String < 0 ) /*0x6815d5*/
  {
    if ( a2 ) /*0x6815dd*/
      goto LABEL_77; /*0x6815dd*/
    return String; /*0x6815dd*/
  }
  String = GameOptions_Load(v2, 3, (wchar_t *)(this + 264)); /*0x681603*/
  if ( String < 0 ) /*0x681607*/
  {
    if ( a2 ) /*0x68160f*/
      goto LABEL_77; /*0x68160f*/
    return String; /*0x68160f*/
  }
  String = PropertyReadBoolCOM(v2, 9, *(_DWORD *)(this + 4)); /*0x681632*/
  if ( String < 0 ) /*0x681636*/
  {
    if ( a2 ) /*0x68163e*/
      goto LABEL_77; /*0x68163e*/
    return String; /*0x68163e*/
  }
  String = PropertyReadBoolCOM(v2, 16, *(_DWORD *)this); /*0x681660*/
  if ( String < 0 ) /*0x681664*/
  {
    if ( a2 ) /*0x68166c*/
      goto LABEL_77; /*0x68166c*/
    return String; /*0x68166c*/
  }
  String = WriteIntCOM(v2, 12, this + 984); /*0x681692*/
  if ( String < 0 ) /*0x681696*/
  {
    if ( a2 ) /*0x68169e*/
      goto LABEL_77; /*0x68169e*/
    return String; /*0x68169e*/
  }
  String = WriteIntCOM(v2, 13, this + 1000); /*0x6816c4*/
  if ( String < 0 ) /*0x6816c8*/
  {
    if ( a2 ) /*0x6816d0*/
      goto LABEL_77; /*0x6816d0*/
    return String; /*0x6816d0*/
  }
  String = WriteIntCOM(v2, 10, this + 992); /*0x6816f6*/
  if ( String < 0 ) /*0x6816fa*/
  {
    if ( a2 ) /*0x681702*/
      goto LABEL_77; /*0x681702*/
    return String; /*0x681702*/
  }
  String = WriteStringCOM(v2, 18, (LPCCH)(this + 724)); /*0x681728*/
  if ( String < 0 ) /*0x68172c*/
  {
    if ( a2 ) /*0x681734*/
      goto LABEL_77; /*0x681734*/
    return String; /*0x681734*/
  }
  v8 = WriteStringCOM(v2, 4, (LPCCH)(this + 660)); /*0x68175a*/
  if ( v8 < 0 ) /*0x68175e*/
  {
    if ( a2 ) /*0x681766*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68176b*/
    return v8; /*0x681774*/
  }
  String = WriteStringCOM(v2, 8, (LPCCH)(this + 660)); /*0x681782*/
  if ( String < 0 ) /*0x681786*/
  {
    if ( a2 ) /*0x68178e*/
      goto LABEL_77; /*0x68178e*/
    return String; /*0x68178e*/
  }
  String = PropertyReadBoolCOM(v2, 100, *(_DWORD *)(this + 396)); /*0x6817b0*/
  if ( String < 0 ) /*0x6817b4*/
  {
    if ( a2 ) /*0x6817bc*/
    {
LABEL_77:
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817be*/
      return String; /*0x6817ca*/
    }
    return String; /*0x6817bc*/
  }
  String = PropertyReadBoolCOM(v2, 101, *(_DWORD *)(this + 392)); /*0x6817de*/
  if ( String < 0 ) /*0x6817e2*/
  {
    if ( a2 ) /*0x6817ea*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817ef*/
    return String; /*0x6817f8*/
  }
  Bool = PropertyReadBoolCOM(v2, 102, *(_DWORD *)(this + 1008)); /*0x68180c*/
  if ( Bool >= 0 ) /*0x681814*/
  {
    if ( a2 ) /*0x68182b*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x681830*/
    return 0; /*0x681836*/
  }
  else
  {
    if ( a2 ) /*0x681818*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68181d*/
    return Bool; /*0x681820*/
  }
}


// ==== 0x00681840  ObjectClass::ScenarioPropertyReadCOM  this=ObjectClass  sig=csp ====
int __thiscall sub_681840(int this, int a2)
{
  int (__stdcall **v4)(int, void *, int *); // eax
  int Scenario; // esi
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // eax
  _UNKNOWN **v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  _UNKNOWN **v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  _UNKNOWN **v18; // ecx
  int v19; // eax
  int (__stdcall **v20)(int, void *, int *); // edx
  _UNKNOWN **v21; // eax
  int v22; // esi
  int (__stdcall **v23)(int, void *, int *); // esi
  _UNKNOWN **v24; // eax
  int (__stdcall **v25)(int, void *, int *); // esi
  _UNKNOWN **v26; // eax
  int v27; // eax
  int (__stdcall **v28)(int, void *, int *); // esi
  _UNKNOWN **v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // [esp+124h] [ebp-30Ch] BYREF
  int v33; // [esp+128h] [ebp-308h] BYREF
  int (__stdcall **v34)(int, void *, int *); // [esp+12Ch] [ebp-304h]
  CHAR MultiByteStr[256]; // [esp+130h] [ebp-300h] BYREF
  wchar_t Source[256]; // [esp+230h] [ebp-200h] BYREF

  if ( !a2 ) /*0x681855*/
    return -2147467261; /*0x681866*/
  v4 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681869*/
  v33 = 0; /*0x681877*/
  if ( (*v4)(a2, &unk_7F7D00, &v33) >= 0 && Map_Read_6823D0(v33, 2, Source) >= 0 ) /*0x6818a1*/
  {
    wcscpy((wchar_t *)(this + 8), Source); /*0x6818b3*/
    Scenario = Map_Read_6823D0(v33, 3, Source); /*0x6818d1*/
    if ( Scenario < 0 ) /*0x6818d5*/
    {
      if ( v33 ) /*0x6818dd*/
        goto LABEL_43; /*0x6818dd*/
      return Scenario; /*0x6818dd*/
    }
    wcscpy((wchar_t *)(this + 264), Source); /*0x681907*/
    Scenario = PropertyReadScenarioCOM(v33, 9, (_DWORD *)(this + 4)); /*0x681921*/
    if ( Scenario < 0 ) /*0x681925*/
    {
      if ( v33 ) /*0x68192d*/
        goto LABEL_43; /*0x68192d*/
      return Scenario; /*0x68192d*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 16, (_DWORD *)this); /*0x681957*/
    if ( Scenario < 0 ) /*0x68195b*/
    {
      if ( v33 ) /*0x681963*/
        goto LABEL_43; /*0x681963*/
      return Scenario; /*0x681963*/
    }
    Scenario = ReadBufferCOM(v33, 12, (_DWORD *)(this + 984)); /*0x681993*/
    if ( Scenario < 0 ) /*0x681997*/
    {
      if ( v33 ) /*0x68199f*/
        goto LABEL_43; /*0x68199f*/
      return Scenario; /*0x68199f*/
    }
    Scenario = ReadBufferCOM(v33, 13, (_DWORD *)(this + 1000)); /*0x6819cf*/
    if ( Scenario < 0 ) /*0x6819d3*/
    {
      if ( v33 ) /*0x6819db*/
        goto LABEL_43; /*0x6819db*/
      return Scenario; /*0x6819db*/
    }
    Scenario = ReadBufferCOM(v33, 10, (_DWORD *)(this + 992)); /*0x681a0b*/
    if ( Scenario < 0 ) /*0x681a0f*/
    {
      if ( v33 ) /*0x681a17*/
        goto LABEL_43; /*0x681a17*/
      return Scenario; /*0x681a17*/
    }
    Scenario = Map_Read_6822F0(v33, 18, MultiByteStr); /*0x681a45*/
    if ( Scenario < 0 ) /*0x681a49*/
    {
      if ( v33 ) /*0x681a51*/
        goto LABEL_43; /*0x681a51*/
      return Scenario; /*0x681a51*/
    }
    v6 = v33; /*0x681a87*/
    strcpy((char *)(this + 724), MultiByteStr); /*0x681a8e*/
    Scenario = Map_Read_6822F0(v6, 4, MultiByteStr); /*0x681aa6*/
    if ( Scenario < 0 ) /*0x681aaa*/
    {
      if ( v33 ) /*0x681ab2*/
        goto LABEL_43; /*0x681ab2*/
      return Scenario; /*0x681ab2*/
    }
    v7 = v33; /*0x681ae8*/
    strcpy((char *)(this + 660), MultiByteStr); /*0x681aef*/
    Scenario = PropertyReadScenarioCOM(v7, 100, (_DWORD *)(this + 396)); /*0x681b09*/
    if ( Scenario < 0 ) /*0x681b0d*/
    {
      if ( v33 ) /*0x681b15*/
        goto LABEL_43; /*0x681b15*/
      return Scenario; /*0x681b15*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 101, (_DWORD *)(this + 392)); /*0x681b45*/
    if ( Scenario < 0 ) /*0x681b49*/
    {
      if ( v33 ) /*0x681b51*/
        goto LABEL_43; /*0x681b51*/
      return Scenario; /*0x681b51*/
    }
    Scenario = PropertyReadScenarioCOM(v33, 102, (_DWORD *)(this + 1008)); /*0x681b81*/
    if ( Scenario < 0 ) /*0x681b85*/
    {
      if ( v33 ) /*0x681b91*/
        goto LABEL_43; /*0x681b91*/
      return Scenario; /*0x681b91*/
    }
LABEL_107:
    if ( v33 ) /*0x682138*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x68213d*/
    return 0; /*0x682143*/
  }
  Scenario = Map_Read_682240(a2, 2, Source); /*0x681bbe*/
  if ( Scenario < 0 ) /*0x681bc2*/
  {
    if ( v33 ) /*0x681bca*/
      goto LABEL_43; /*0x681bca*/
    return Scenario; /*0x681bca*/
  }
  wcscpy((wchar_t *)(this + 8), Source); /*0x681bf1*/
  Scenario = Map_Read_682240(a2, 3, Source); /*0x681c0b*/
  if ( Scenario < 0 ) /*0x681c0f*/
  {
    if ( v33 ) /*0x681c17*/
    {
LABEL_43:
      (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681c1d*/
      return Scenario; /*0x681c2f*/
    }
    return Scenario; /*0x681c17*/
  }
  wcscpy((wchar_t *)(this + 264), Source); /*0x681c41*/
  *(_DWORD *)(this + 4) = 0; /*0x681c52*/
  v32 = 0; /*0x681c54*/
  ReleaseCOM(&v32); /*0x681c58*/
  v32 = 0; /*0x681c5d*/
  v8 = 0; /*0x681c61*/
  v9 = &MEMORY[0x83D658]; /*0x681c63*/
  while ( *v9 != 9 ) /*0x681c6b*/
  {
    v9 += 2; /*0x681c6d*/
    ++v8; /*0x681c70*/
    if ( (int)v9 >= (int)MEMORY[0x83D6C0] ) /*0x681c76*/
    {
      v10 = 0; /*0x681c78*/
      goto LABEL_48; /*0x681c78*/
    }
  }
  v10 = (&MEMORY[0x83D65C])[2 * v8]; /*0x681cdb*/
LABEL_48:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681c7a*/
               a2,
               v10,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681c95*/
  {
    v11 = COMObject::ValidatePtr(&v32); /*0x681c97*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, this + 4, 4, 0); /*0x681ca7*/
  }
  ReleaseCOM(&v32); /*0x681caf*/
  if ( Scenario < 0 ) /*0x681cb8*/
  {
    if ( v33 ) /*0x681cc0*/
      goto LABEL_91; /*0x681cc0*/
    return Scenario; /*0x681fca*/
  }
  *(_DWORD *)this = 0; /*0x681ce8*/
  v32 = 0; /*0x681cea*/
  ReleaseCOM(&v32); /*0x681cee*/
  v32 = 0; /*0x681cf3*/
  v12 = 0; /*0x681cf7*/
  v13 = &MEMORY[0x83D658]; /*0x681cf9*/
  while ( *v13 != 16 ) /*0x681d01*/
  {
    v13 += 2; /*0x681d03*/
    ++v12; /*0x681d06*/
    if ( (int)v13 >= (int)MEMORY[0x83D6C0] ) /*0x681d0c*/
    {
      v14 = 0; /*0x681d0e*/
      goto LABEL_58; /*0x681d0e*/
    }
  }
  v14 = (&MEMORY[0x83D65C])[2 * v12]; /*0x681d6c*/
LABEL_58:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681d10*/
               a2,
               v14,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681d29*/
  {
    v15 = COMObject::ValidatePtr(&v32); /*0x681d2b*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v15 + 12))(v15, this, 4, 0); /*0x681d3a*/
  }
  ReleaseCOM(&v32); /*0x681d42*/
  if ( Scenario < 0 ) /*0x681d49*/
  {
    if ( v33 ) /*0x681d51*/
      goto LABEL_91; /*0x681d51*/
    return Scenario; /*0x681d51*/
  }
  v32 = 0; /*0x681d81*/
  *(_DWORD *)(this + 984) = 0; /*0x681d85*/
  *(_DWORD *)(this + 988) = 0; /*0x681d87*/
  ReleaseCOM(&v32); /*0x681d8a*/
  v32 = 0; /*0x681d8f*/
  v16 = 0; /*0x681d93*/
  v17 = &MEMORY[0x83D658]; /*0x681d95*/
  while ( *v17 != 12 ) /*0x681d9d*/
  {
    v17 += 2; /*0x681d9f*/
    ++v16; /*0x681da2*/
    if ( (int)v17 >= (int)MEMORY[0x83D6C0] ) /*0x681da8*/
    {
      v18 = 0; /*0x681daa*/
      goto LABEL_68; /*0x681daa*/
    }
  }
  v18 = (&MEMORY[0x83D65C])[2 * v16]; /*0x681e0b*/
LABEL_68:
  Scenario = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a2 + 16))( /*0x681dac*/
               a2,
               v18,
               0,
               16,
               0,
               &v32);
  if ( Scenario >= 0 ) /*0x681dc7*/
  {
    v19 = COMObject::ValidatePtr(&v32); /*0x681dc9*/
    Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v19 + 12))(v19, this + 984, 8, 0); /*0x681dd9*/
  }
  ReleaseCOM(&v32); /*0x681de1*/
  if ( Scenario < 0 ) /*0x681de8*/
  {
    if ( v33 ) /*0x681df0*/
      goto LABEL_91; /*0x681df0*/
    return Scenario; /*0x681df0*/
  }
  v32 = 0; /*0x681e20*/
  *(_DWORD *)(this + 1000) = 0; /*0x681e24*/
  *(_DWORD *)(this + 1004) = 0; /*0x681e26*/
  ReleaseCOM(&v32); /*0x681e29*/
  v20 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681e2e*/
  v32 = 0; /*0x681e3f*/
  v34 = v20; /*0x681e43*/
  v21 = ScenarioClass::LookupMethod((void *)0xD); /*0x681e47*/
  v22 = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v34[4])(a2, v21, 0, 16, 0, &v32); /*0x681e55*/
  if ( v22 >= 0 ) /*0x681e59*/
  {
    if ( !v32 ) /*0x681e61*/
      WinAPI::Wrapper(-2147467261); /*0x681e68*/
    v22 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v32 + 12))(v32, this + 1000, 8, 0); /*0x681e7c*/
  }
  ReleaseCOM(&v32); /*0x681e82*/
  if ( v22 >= 0 ) /*0x681e8b*/
  {
    v32 = 0; /*0x681eb4*/
    *(_DWORD *)(this + 992) = 0; /*0x681eb8*/
    *(_DWORD *)(this + 996) = 0; /*0x681eba*/
    ReleaseCOM(&v32); /*0x681ebd*/
    v23 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x681ec2*/
    v32 = 0; /*0x681ed5*/
    v24 = ScenarioClass::LookupMethod((void *)0xA); /*0x681edd*/
    Scenario = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v23[4])(a2, v24, 0, 16, 0, &v32); /*0x681ee7*/
    if ( Scenario >= 0 ) /*0x681eeb*/
    {
      if ( !v32 ) /*0x681ef3*/
        WinAPI::Wrapper(-2147467261); /*0x681efa*/
      Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v32 + 12))(v32, this + 992, 8, 0); /*0x681f0e*/
    }
    ReleaseCOM(&v32); /*0x681f14*/
    if ( Scenario >= 0 ) /*0x681f1b*/
    {
      Scenario = Map_Read(a2, 18, MultiByteStr); /*0x681f4d*/
      if ( Scenario >= 0 ) /*0x681f51*/
      {
        strcpy((char *)(this + 724), MultiByteStr); /*0x681f92*/
        Scenario = Map_Read(a2, 4, MultiByteStr); /*0x681faa*/
        if ( Scenario < 0 ) /*0x681fae*/
        {
          if ( v33 ) /*0x681fb6*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681fbb*/
          return Scenario; /*0x681fbb*/
        }
        v32 = 0; /*0x681fe2*/
        strcpy((char *)(this + 660), MultiByteStr); /*0x681ff3*/
        *(_DWORD *)(this + 396) = 0; /*0x682006*/
        ReleaseCOM(&v32); /*0x68200c*/
        v25 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x682011*/
        v32 = 0; /*0x682024*/
        v26 = ScenarioClass::LookupMethod((void *)0x64); /*0x68202c*/
        Scenario = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v25[4])(a2, v26, 0, 16, 0, &v32); /*0x682036*/
        if ( Scenario >= 0 ) /*0x68203e*/
        {
          v27 = COMObject::ValidatePtr(&v32); /*0x682040*/
          Scenario = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v27 + 12))(v27, this + 396, 4, 0); /*0x682050*/
        }
        ReleaseCOM(&v32); /*0x682058*/
        if ( Scenario >= 0 ) /*0x68205f*/
        {
          v32 = 0; /*0x682088*/
          *(_DWORD *)(this + 392) = 0; /*0x682090*/
          ReleaseCOM(&v32); /*0x682096*/
          v28 = *(int (__stdcall ***)(int, void *, int *))a2; /*0x68209b*/
          v32 = 0; /*0x6820ae*/
          v29 = ScenarioClass::LookupMethod((void *)0x65); /*0x6820b6*/
          v30 = ((int (__stdcall *)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))v28[4])(a2, v29, 0, 16, 0, &v32); /*0x6820c0*/
          if ( v30 >= 0 ) /*0x6820c8*/
          {
            v31 = COMObject::ValidatePtr(&v32); /*0x6820ca*/
            v30 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v31 + 12))(v31, this + 392, 4, 0); /*0x6820da*/
          }
          ReleaseCOM(&v32); /*0x6820e2*/
          if ( v30 < 0 || (v30 = Map_Read_6824B0(a2, 102, this + 1008), v30 < 0) ) /*0x682118*/
          {
            Map_Read_683050(&v33); /*0x6820ef*/
            return v30; /*0x682100*/
          }
          goto LABEL_107; /*0x682118*/
        }
        if ( v33 ) /*0x682067*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x68206c*/
      }
      else if ( v33 ) /*0x681f59*/
      {
LABEL_91:
        (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681f5f*/
        return Scenario; /*0x681f71*/
      }
    }
    else if ( v33 ) /*0x681f23*/
    {
      goto LABEL_91; /*0x681f23*/
    }
    return Scenario; /*0x68207b*/
  }
  if ( v33 ) /*0x681e93*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33); /*0x681e98*/
  return v22; /*0x681857*/
}


// ==== 0x00682150  Map_Read  this=-  sig=csp ====
int __stdcall sub_682150(int a1, int a2, LPSTR lpMultiByteStr)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  WCHAR *i; // edi
  int v9; // [esp+28h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+2Ch] [ebp-100h] BYREF

  v9 = 0; /*0x682167*/
  *lpMultiByteStr = 0; /*0x68216f*/
  v3 = 0; /*0x682172*/
  v4 = &MEMORY[0x83D658]; /*0x682174*/
  while ( *v4 != a2 ) /*0x68217b*/
  {
    v4 += 2; /*0x68217d*/
    ++v3; /*0x682180*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682186*/
    {
      v5 = 0; /*0x682188*/
      goto LABEL_5; /*0x682188*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x6821c5*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a1 + 16))(a1, v5, 0, 16, 0, &v9); /*0x68218a*/
  if ( v6 >= 0 ) /*0x6821a7*/
  {
    for ( i = WideCharStr; ; ++i ) /*0x6821ce*/
    {
      if ( !v9 ) /*0x6821d8*/
        WinAPI::Wrapper(-2147467261); /*0x6821df*/
      v6 = (*(int (__stdcall **)(int, WCHAR *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, i, 2, 0); /*0x6821f3*/
      if ( v6 < 0 ) /*0x6821f7*/
        break; /*0x6821f7*/
      if ( !*i ) /*0x6821fd*/
      {
        WideCharToMultiByte(0, 0, WideCharStr, -1, lpMultiByteStr, 127, 0, 0); /*0x682216*/
        if ( v9 ) /*0x682222*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682227*/
        return v6; /*0x682227*/
      }
    }
  }
  if ( !v9 ) /*0x6821af*/
    return v6; /*0x68222a*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x6821b4*/
  return v6; /*0x6821b9*/
}


// ==== 0x00682240  Map_Read  this=-  sig=csp ====
int __stdcall sub_682240(int a1, int a2, _WORD *a3)
{
  _WORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682246*/
  a3 = 0; /*0x68224a*/
  v4 = 0; /*0x682252*/
  *v3 = 0; /*0x682254*/
  v5 = &MEMORY[0x83D658]; /*0x682259*/
  while ( *v5 != a2 ) /*0x682260*/
  {
    v5 += 2; /*0x682262*/
    ++v4; /*0x682265*/
    if ( (int)v5 >= (int)MEMORY[0x83D6C0] ) /*0x68226b*/
    {
      v6 = 0; /*0x68226d*/
      goto LABEL_5; /*0x68226d*/
    }
  }
  v6 = (&MEMORY[0x83D65C])[2 * v4]; /*0x6822a0*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _WORD **))(*(_DWORD *)a1 + 16))( /*0x68226f*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682289*/
  {
    while ( 1 ) /*0x6822a9*/
    {
      if ( !a3 ) /*0x6822af*/
        WinAPI::Wrapper(-2147467261); /*0x6822b6*/
      v7 = (*(int (__stdcall **)(_WORD *, _WORD *, int, _DWORD))(*(_DWORD *)a3 + 12))(a3, v3, 2, 0); /*0x6822ca*/
      if ( v7 < 0 ) /*0x6822ce*/
        break; /*0x6822ce*/
      if ( !*v3 ) /*0x6822d4*/
      {
        if ( a3 ) /*0x6822e1*/
          (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x6822e6*/
        return v7; /*0x6822e6*/
      }
      ++v3; /*0x6822d6*/
    }
  }
  if ( !a3 ) /*0x682291*/
    return v7; /*0x6822e9*/
  (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x682296*/
  return v7; /*0x68229b*/
}


// ==== 0x006822F0  Map_Read_6822F0  this=-  sig=csp ====
int __stdcall sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
  LPSTR v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  LPCWCH lpWideCharStr; // [esp+28h] [ebp-8h]

  v3 = lpMultiByteStr; /*0x6822f9*/
  lpMultiByteStr = 0; /*0x682301*/
  *v3 = 0; /*0x68230a*/
  v4 = (*(int (__stdcall **)(int, void *, int, LPSTR *))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &lpMultiByteStr); /*0x68231a*/
  if ( v4 >= 0 ) /*0x68231e*/
  {
    v6[0] = 1; /*0x682346*/
    v6[1] = a2; /*0x68234e*/
    if ( !lpMultiByteStr ) /*0x682352*/
      WinAPI::Wrapper(-2147467261); /*0x682359*/
    v4 = (*(int (__stdcall **)(LPSTR, int, _DWORD *, _WORD *))(*(_DWORD *)lpMultiByteStr + 12))( /*0x682374*/
           lpMultiByteStr,
           1,
           v6,
           v7);
    if ( v4 >= 0 ) /*0x682378*/
    {
      if ( v7[0] == 31 ) /*0x682398*/
        WideCharToMultiByte(0, 0, lpWideCharStr, -1, v3, 128, 0, 0); /*0x6823af*/
      if ( lpMultiByteStr ) /*0x6823bb*/
        (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x6823c0*/
    }
    else if ( lpMultiByteStr ) /*0x682380*/
    {
      (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x682385*/
      return v4; /*0x68238f*/
    }
  }
  else if ( lpMultiByteStr ) /*0x682326*/
  {
    (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x68232f*/
    return v4; /*0x682339*/
  }
  return v4; /*0x682334*/
}


// ==== 0x006823D0  Map_Read_6823D0  this=-  sig=csp ====
int __stdcall sub_6823D0(int a1, int a2, wchar_t *Destination)
{
  wchar_t *v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  wchar_t *Source; // [esp+28h] [ebp-8h]

  v3 = Destination; /*0x6823d9*/
  Destination = 0; /*0x6823e1*/
  *v3 = 0; /*0x6823ea*/
  v4 = (*(int (__stdcall **)(int, void *, int, wchar_t **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &Destination); /*0x6823fc*/
  if ( v4 >= 0 ) /*0x682400*/
  {
    v6[0] = 1; /*0x682428*/
    v6[1] = a2; /*0x682430*/
    if ( !Destination ) /*0x682434*/
      WinAPI::Wrapper(-2147467261); /*0x68243b*/
    v4 = (*(int (__stdcall **)(wchar_t *, int, _DWORD *, _WORD *))(*(_DWORD *)Destination + 12))(Destination, 1, v6, v7); /*0x682456*/
    if ( v4 >= 0 ) /*0x68245a*/
    {
      if ( v7[0] == 31 ) /*0x68247a*/
        wcsncpy(v3, Source, 0x80u); /*0x682487*/
      if ( Destination ) /*0x682495*/
        (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x68249a*/
    }
    else if ( Destination ) /*0x682462*/
    {
      (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x682467*/
      return v4; /*0x682471*/
    }
  }
  else if ( Destination ) /*0x682408*/
  {
    (*(void (__stdcall **)(wchar_t *))(*(_DWORD *)Destination + 8))(Destination); /*0x682411*/
    return v4; /*0x68241b*/
  }
  return v4; /*0x682416*/
}


// ==== 0x006824B0  Map_Read_6824B0  this=-  sig=csp ====
int __stdcall sub_6824B0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x6824b6*/
  a3 = 0; /*0x6824ba*/
  v4 = 0; /*0x6824c2*/
  *v3 = 0; /*0x6824c4*/
  v5 = &MEMORY[0x83D658]; /*0x6824ca*/
  while ( *v5 != a2 ) /*0x6824d1*/
  {
    v5 += 2; /*0x6824d3*/
    ++v4; /*0x6824d6*/
    if ( (int)v5 >= (int)MEMORY[0x83D6C0] ) /*0x6824dc*/
    {
      v6 = 0; /*0x6824de*/
      goto LABEL_5; /*0x6824de*/
    }
  }
  v6 = (&MEMORY[0x83D65C])[2 * v4]; /*0x682511*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x6824e0*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x6824fe*/
  {
    if ( !a3 ) /*0x68251c*/
      WinAPI::Wrapper(-2147467261); /*0x682523*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 4, 0); /*0x682537*/
    if ( v7 >= 0 ) /*0x68253f*/
    {
      if ( a3 ) /*0x682554*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682559*/
    }
    else if ( a3 ) /*0x682543*/
    {
      goto LABEL_7; /*0x682543*/
    }
  }
  else if ( a3 ) /*0x682502*/
  {
LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682504*/
    return v7; /*0x68250e*/
  }
  return v7; /*0x68250c*/
}


// ==== 0x00682570  PropertyReadScenarioCOM  this=-  sig=csp ====
int __stdcall COM_Property_ReadScenario(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+28h] [ebp-8h]

  v3 = a3; /*0x682579*/
  a3 = 0; /*0x682581*/
  *v3 = 0; /*0x68258a*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x68259d*/
  if ( v4 >= 0 ) /*0x6825a1*/
  {
    v6[0] = 1; /*0x6825c9*/
    v6[1] = a2; /*0x6825d1*/
    if ( !a3 ) /*0x6825d5*/
      WinAPI::Wrapper(-2147467261); /*0x6825dc*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v6, v7); /*0x6825f7*/
    if ( v4 >= 0 ) /*0x6825fb*/
    {
      if ( v7[0] == 3 ) /*0x68261b*/
        *v3 = v8; /*0x682621*/
      if ( a3 ) /*0x682629*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x68262e*/
    }
    else if ( a3 ) /*0x682603*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682608*/
      return v4; /*0x682612*/
    }
  }
  else if ( a3 ) /*0x6825a9*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x6825b2*/
    return v4; /*0x6825bc*/
  }
  return v4; /*0x6825b7*/
}


// ==== 0x00682640  WriteStringCOM  this=-  sig=csp ====
int __stdcall COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+34h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68265f*/
  v9 = 0; /*0x68266c*/
  v3 = 0; /*0x682674*/
  v4 = &MEMORY[0x83D658]; /*0x682676*/
  while ( *v4 != a2 ) /*0x68267d*/
  {
    v4 += 2; /*0x68267f*/
    ++v3; /*0x682682*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682688*/
    {
      v5 = 0; /*0x68268a*/
      goto LABEL_5; /*0x68268a*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x6826c9*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x68268c*/
  if ( v6 >= 0 ) /*0x6826ad*/
  {
    if ( !v9 ) /*0x6826d4*/
      WinAPI::Wrapper(-2147467261); /*0x6826db*/
    v7 = wcslen(WideCharStr); /*0x6826f0*/
    v6 = (*(int (__stdcall **)(int, WCHAR *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, WideCharStr, 2 * v7 + 2, 0); /*0x682706*/
    if ( v6 >= 0 ) /*0x68270f*/
    {
      if ( !v9 ) /*0x682729*/
        WinAPI::Wrapper(-2147467261); /*0x682730*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x682741*/
      if ( v6 >= 0 ) /*0x682749*/
      {
        if ( v9 ) /*0x682763*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682768*/
      }
      else if ( v9 ) /*0x68274d*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68274f*/
        return v6; /*0x68275e*/
      }
    }
    else if ( v9 ) /*0x682713*/
    {
      goto LABEL_18; /*0x682713*/
    }
  }
  else if ( v9 ) /*0x6826b1*/
  {
    goto LABEL_18; /*0x6826b1*/
  }
  return v6; /*0x6826bf*/
}


// ==== 0x00682780  GameOptions_Load  this=-  sig=csp ====
int __stdcall sub_682780(int a1, int a2, wchar_t *String)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-4h] BYREF

  v9 = 0; /*0x682786*/
  v3 = 0; /*0x68278e*/
  v4 = &MEMORY[0x83D658]; /*0x682790*/
  while ( *v4 != a2 ) /*0x682797*/
  {
    v4 += 2; /*0x682799*/
    ++v3; /*0x68279c*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x6827a2*/
    {
      v5 = 0; /*0x6827a4*/
      goto LABEL_5; /*0x6827a4*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x6827db*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x6827a6*/
  if ( v6 >= 0 ) /*0x6827c4*/
  {
    if ( !v9 ) /*0x6827e6*/
      WinAPI::Wrapper(-2147467261); /*0x6827ed*/
    v7 = wcslen(String); /*0x682803*/
    v6 = (*(int (__stdcall **)(int, wchar_t *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, String, 2 * v7 + 2, 0); /*0x682815*/
    if ( v6 >= 0 ) /*0x68281f*/
    {
      if ( !v9 ) /*0x682834*/
        WinAPI::Wrapper(-2147467261); /*0x68283b*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x68284c*/
      if ( v6 >= 0 ) /*0x682854*/
      {
        if ( v9 ) /*0x682869*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68286e*/
      }
      else if ( v9 ) /*0x682858*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68285a*/
        return v6; /*0x682864*/
      }
    }
    else if ( v9 ) /*0x682823*/
    {
      goto LABEL_18; /*0x682823*/
    }
  }
  else if ( v9 ) /*0x6827c8*/
  {
    goto LABEL_18; /*0x6827c8*/
  }
  return v6; /*0x6827d6*/
}


// ==== 0x00682880  ReadStringCOM  this=-  sig=csp ====
int __stdcall COM_ReadString(int *a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+2Ch] [ebp-11Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-118h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-110h] BYREF
  WCHAR *v10; // [esp+40h] [ebp-108h]
  WCHAR WideCharStr[128]; // [esp+48h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68289f*/
  v3 = *a1; /*0x6828b3*/
  v7 = 0; /*0x6828bb*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(v3 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x6828c8*/
    goto LABEL_7; /*0x6828c8*/
  if ( v7 ) /*0x6828d0*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x6828d5*/
  v4 = *a1; /*0x6828d8*/
  v7 = 0; /*0x6828ee*/
  v5 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v4 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x6828f9*/
  if ( v5 >= 0 ) /*0x6828fd*/
  {
LABEL_7:
    v10 = WideCharStr; /*0x682928*/
    v8[0] = 1; /*0x682932*/
    v8[1] = a2; /*0x68293a*/
    v9[0] = 31; /*0x68293e*/
    if ( !v7 ) /*0x682945*/
      WinAPI::Wrapper(-2147467261); /*0x68294c*/
    v5 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682969*/
    if ( v5 >= 0 ) /*0x682971*/
    {
      if ( v7 ) /*0x68298b*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682990*/
    }
    else if ( v7 ) /*0x682975*/
    {
      goto LABEL_6; /*0x682975*/
    }
  }
  else if ( v7 ) /*0x682905*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x68290b*/
    return v5; /*0x68291a*/
  }
  return v5; /*0x682913*/
}


// ==== 0x006829A0  GameOptions_Load_6829A0  this=-  sig=csp ====
int __stdcall sub_6829A0(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x6829ac*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x6829c4*/
    goto LABEL_7; /*0x6829c4*/
  if ( v6 ) /*0x6829cc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x6829d1*/
  v3 = *a1; /*0x6829d4*/
  v6 = 0; /*0x6829ea*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x6829f5*/
  if ( v4 >= 0 ) /*0x6829f9*/
  {
LABEL_7:
    v7[1] = a2; /*0x682a1a*/
    v7[0] = 1; /*0x682a24*/
    v8[0] = 31; /*0x682a2c*/
    v9 = a3; /*0x682a33*/
    if ( !v6 ) /*0x682a37*/
      WinAPI::Wrapper(-2147467261); /*0x682a3e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682a5b*/
    if ( v4 >= 0 ) /*0x682a63*/
    {
      if ( v6 ) /*0x682a7a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a7f*/
    }
    else if ( v6 ) /*0x682a67*/
    {
      goto LABEL_6; /*0x682a67*/
    }
  }
  else if ( v6 ) /*0x682a01*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a03*/
    return v4; /*0x682a0f*/
  }
  return v4; /*0x682a0b*/
}


// ==== 0x00682A90  PropertyReadBoolCOM  this=-  sig=csp ====
int __stdcall COM_Property_ReadBool(int a1, int a2, char a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682a96*/
  v3 = 0; /*0x682a9e*/
  v4 = &MEMORY[0x83D658]; /*0x682aa0*/
  while ( *v4 != a2 ) /*0x682aa7*/
  {
    v4 += 2; /*0x682aa9*/
    ++v3; /*0x682aac*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682ab2*/
    {
      v5 = 0; /*0x682ab4*/
      goto LABEL_5; /*0x682ab4*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x682aeb*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682ab6*/
  if ( v6 >= 0 ) /*0x682ad4*/
  {
    if ( !v8 ) /*0x682af6*/
      WinAPI::Wrapper(-2147467261); /*0x682afd*/
    v6 = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, &a3, 4, 0); /*0x682b15*/
    if ( v6 >= 0 ) /*0x682b1d*/
    {
      if ( !v8 ) /*0x682b32*/
        WinAPI::Wrapper(-2147467261); /*0x682b39*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682b4a*/
      if ( v6 >= 0 ) /*0x682b52*/
      {
        if ( v8 ) /*0x682b67*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b6c*/
      }
      else if ( v8 ) /*0x682b56*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b58*/
        return v6; /*0x682b62*/
      }
    }
    else if ( v8 ) /*0x682b21*/
    {
      goto LABEL_18; /*0x682b21*/
    }
  }
  else if ( v8 ) /*0x682ad8*/
  {
    goto LABEL_18; /*0x682ad8*/
  }
  return v6; /*0x682ae6*/
}


// ==== 0x00682B80  PropertyBagReadCOM  this=-  sig=csp ====
int __stdcall COM_PropertyBag_Read(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x682b8c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x682ba4*/
    goto LABEL_7; /*0x682ba4*/
  if ( v6 ) /*0x682bac*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682bb1*/
  v3 = *a1; /*0x682bb4*/
  v6 = 0; /*0x682bca*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x682bd5*/
  if ( v4 >= 0 ) /*0x682bd9*/
  {
LABEL_7:
    v7[1] = a2; /*0x682bfa*/
    v7[0] = 1; /*0x682c04*/
    v8[0] = 3; /*0x682c0c*/
    v9 = a3; /*0x682c13*/
    if ( !v6 ) /*0x682c17*/
      WinAPI::Wrapper(-2147467261); /*0x682c1e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682c3b*/
    if ( v4 >= 0 ) /*0x682c43*/
    {
      if ( v6 ) /*0x682c5a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682c5f*/
    }
    else if ( v6 ) /*0x682c47*/
    {
      goto LABEL_6; /*0x682c47*/
    }
  }
  else if ( v6 ) /*0x682be1*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682be3*/
    return v4; /*0x682bef*/
  }
  return v4; /*0x682beb*/
}


// ==== 0x00682C70  sub_682C70  this=-  sig=csp ====
int __stdcall sub_682C70(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682c76*/
  a3 = 0; /*0x682c7a*/
  v4 = 0; /*0x682c82*/
  *v3 = 0; /*0x682c84*/
  v3[1] = 0; /*0x682c8a*/
  v5 = &MEMORY[0x83D658]; /*0x682c91*/
  while ( *v5 != a2 ) /*0x682c98*/
  {
    v5 += 2; /*0x682c9a*/
    ++v4; /*0x682c9d*/
    if ( (int)v5 >= (int)MEMORY[0x83D6C0] ) /*0x682ca3*/
    {
      v6 = 0; /*0x682ca5*/
      goto LABEL_5; /*0x682ca5*/
    }
  }
  v6 = (&MEMORY[0x83D65C])[2 * v4]; /*0x682cd8*/
LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x682ca7*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682cc5*/
  {
    if ( !a3 ) /*0x682ce3*/
      WinAPI::Wrapper(-2147467261); /*0x682cea*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 8, 0); /*0x682cfe*/
    if ( v7 >= 0 ) /*0x682d06*/
    {
      if ( a3 ) /*0x682d1b*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d20*/
    }
    else if ( a3 ) /*0x682d0a*/
    {
      goto LABEL_7; /*0x682d0a*/
    }
  }
  else if ( a3 ) /*0x682cc9*/
  {
LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682ccb*/
    return v7; /*0x682cd5*/
  }
  return v7; /*0x682cd3*/
}


// ==== 0x00682D30  ReadBufferCOM  this=-  sig=csp ====
int __stdcall COM_ReadBuffer(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  int v6; // eax
  _DWORD v7[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v8[4]; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]

  v3 = a3; /*0x682d39*/
  a3 = 0; /*0x682d41*/
  *v3 = 0; /*0x682d4a*/
  v3[1] = 0; /*0x682d50*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x682d64*/
  if ( v4 >= 0 ) /*0x682d68*/
  {
    v7[0] = 1; /*0x682d90*/
    v7[1] = a2; /*0x682d98*/
    if ( !a3 ) /*0x682d9c*/
      WinAPI::Wrapper(-2147467261); /*0x682da3*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v7, v8); /*0x682dbe*/
    if ( v4 >= 0 ) /*0x682dc2*/
    {
      if ( v8[0] == 64 ) /*0x682de2*/
      {
        v6 = v10; /*0x682de8*/
        *v3 = v9; /*0x682dec*/
        v3[1] = v6; /*0x682dee*/
      }
      if ( a3 ) /*0x682df7*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dfc*/
    }
    else if ( a3 ) /*0x682dca*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dcf*/
      return v4; /*0x682dd9*/
    }
  }
  else if ( a3 ) /*0x682d70*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d79*/
    return v4; /*0x682d83*/
  }
  return v4; /*0x682d7e*/
}


// ==== 0x00682E10  WriteIntCOM  this=-  sig=csp ====
int __stdcall COM_WriteInt(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682e16*/
  v3 = 0; /*0x682e1e*/
  v4 = &MEMORY[0x83D658]; /*0x682e20*/
  while ( *v4 != a2 ) /*0x682e27*/
  {
    v4 += 2; /*0x682e29*/
    ++v3; /*0x682e2c*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682e32*/
    {
      v5 = 0; /*0x682e34*/
      goto LABEL_5; /*0x682e34*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x682e6b*/
LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682e36*/
  if ( v6 >= 0 ) /*0x682e54*/
  {
    if ( !v8 ) /*0x682e76*/
      WinAPI::Wrapper(-2147467261); /*0x682e7d*/
    v6 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, a3, 8, 0); /*0x682e95*/
    if ( v6 >= 0 ) /*0x682e9d*/
    {
      if ( !v8 ) /*0x682eb2*/
        WinAPI::Wrapper(-2147467261); /*0x682eb9*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682eca*/
      if ( v6 >= 0 ) /*0x682ed2*/
      {
        if ( v8 ) /*0x682ee7*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682eec*/
      }
      else if ( v8 ) /*0x682ed6*/
      {
LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682ed8*/
        return v6; /*0x682ee2*/
      }
    }
    else if ( v8 ) /*0x682ea1*/
    {
      goto LABEL_18; /*0x682ea1*/
    }
  }
  else if ( v8 ) /*0x682e58*/
  {
    goto LABEL_18; /*0x682e58*/
  }
  return v6; /*0x682e66*/
}


// ==== 0x00682F00  SetBufferParamsCOM  this=-  sig=csp ====
int __stdcall COM_SetBufferParams(int *a1, int a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // edx
  int v7; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+40h] [ebp-8h]
  int v11; // [esp+44h] [ebp-4h]

  v7 = 0; /*0x682f0c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x682f24*/
    goto LABEL_7; /*0x682f24*/
  if ( v7 ) /*0x682f2c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f31*/
  v3 = *a1; /*0x682f34*/
  v7 = 0; /*0x682f4a*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x682f55*/
  if ( v4 >= 0 ) /*0x682f59*/
  {
LABEL_7:
    v8[0] = 1; /*0x682f7a*/
    v8[1] = a2; /*0x682f82*/
    v9[0] = 64; /*0x682f8a*/
    v6 = a3[1]; /*0x682f93*/
    v10 = *a3; /*0x682f9a*/
    v11 = v6; /*0x682fa0*/
    if ( !v7 ) /*0x682fa4*/
      WinAPI::Wrapper(-2147467261); /*0x682fab*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682fc8*/
    if ( v4 >= 0 ) /*0x682fd0*/
    {
      if ( v7 ) /*0x682fe7*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682fec*/
    }
    else if ( v7 ) /*0x682fd4*/
    {
      goto LABEL_6; /*0x682fd4*/
    }
  }
  else if ( v7 ) /*0x682f61*/
  {
LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f67*/
    return v4; /*0x682f73*/
  }
  return v4; /*0x682f6f*/
}


// ==== 0x00683000  ScenarioClass::LookupMethod  this=ScenarioClass  sig=csp ====
_UNKNOWN **__thiscall ScenarioClass_LookupMethod(void *this)
{
  int v1; // edx
  void **v2; // eax

  v1 = 0; /*0x683000*/
  v2 = (void **)&MEMORY[0x83D658]; /*0x683002*/
  while ( *v2 != this ) /*0x683009*/
  {
    v2 += 2; /*0x68300b*/
    ++v1; /*0x68300e*/
    if ( (int)v2 >= (int)MEMORY[0x83D6C0] ) /*0x683014*/
      return 0; /*0x683018*/
  }
  return (&MEMORY[0x83D65C])[2 * v1]; /*0x683018*/
}


// ==== 0x00683030  COMObject::ValidatePtr  this=COMObject  sig=csp ====
int __thiscall COMObject_ValidatePtr(void *this)
{
  if ( !*(_DWORD *)this ) /*0x683033*/
    WinAPI::Wrapper(-2147467261); /*0x68303d*/
  return *(_DWORD *)this; /*0x683044*/
}


// ==== 0x00683050  ObjectClass::Map_Read  this=ObjectClass  sig=csp ====
int __thiscall sub_683050(int *this)
{
  int result; // eax

  result = *this; /*0x683050*/
  if ( *this ) /*0x683050*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683059*/
  return result; /*0x68305c*/
}


// ==== 0x00683060  ObjectClass::ReleaseCOM  this=ObjectClass  sig=csp ====
int __thiscall COM_Release(int *this)
{
  int result; // eax

  result = *this; /*0x683060*/
  if ( *this ) /*0x683060*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683069*/
  return result; /*0x68306c*/
}


// ==== 0x00683070  sub_683070  this=-  sig=ida-proto ====
void sub_683070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68307c*/
  dbl_B05460 = Math::Sqrt(v0 + v0); /*0x68308e*/
}


// ==== 0x006830A0  sub_6830A0  this=-  sig=ida-proto ====
void sub_6830A0()
{
  MEMORY[0xB054C0] = dbl_B05460 / 60.0; /*0x6830ac*/
}


// ==== 0x006830C0  sub_6830C0  this=-  sig=ida-proto ====
void sub_6830C0()
{
  MEMORY[0xB054A8] = 1.0 / MEMORY[0xB054C0]; /*0x6830cc*/
}


// ==== 0x006830E0  sub_6830E0  this=-  sig=ida-proto ====
void sub_6830E0()
{
  MEMORY[0xB054A0] = 0.0174532925199433 * 45.0; /*0x6830ec*/
}


// ==== 0x00683100  sub_683100  this=-  sig=ida-proto ====
void sub_683100()
{
  dbl_B05468 = 0.0174532925199433 * 60.0; /*0x68310c*/
}


// ==== 0x00683120  sub_683120  this=-  sig=ida-proto ====
void sub_683120()
{
  dbl_B05440 = 0.0174532925199433 * 90.0; /*0x68312c*/
}


// ==== 0x00683140  sub_683140  this=-  sig=ida-proto ====
__int64 sub_683140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05440 - dbl_B05468); /*0x683152*/
  result = Math::RoundToInt(v0 * dbl_B05460 * 0.5); /*0x683166*/
  MEMORY[0xB054C8] = result; /*0x68316b*/
  return result; /*0x683170*/
}


// ==== 0x00683180  sub_683180  this=-  sig=ida-proto ====
void sub_683180()
{
  dbl_B05470 = Math::ArcTan((double)MEMORY[0xB054C8] * 0.00390625); /*0x683197*/
}


// ==== 0x006831B0  sub_6831B0  this=-  sig=ida-proto ====
void sub_6831B0()
{
  MEMORY[0xB05498] = Math::ArcTan((double)(2 * MEMORY[0xB054C8]) / dbl_B05460); /*0x6831d2*/
}


// ==== 0x006831E0  sub_6831E0  this=-  sig=ida-proto ====
__int64 sub_6831E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB054C8]) + 0.5); /*0x6831fb*/
  MEMORY[0xB054BC] = result; /*0x683200*/
  return result; /*0x683206*/
}


// ==== 0x00683210  sub_683210  this=-  sig=ida-proto ====
int sub_683210()
{
  dword_B05458 = 0; /*0x683212*/
  return 0; /*0x68321e*/
}


// ==== 0x00683220  sub_683220  this=-  sig=ida-proto ====
int sub_683220()
{
  stru_B05488 = 0; /*0x683222*/
  MEMORY[0xB0548C] = 0; /*0x683227*/
  MEMORY[0xB05490] = 0; /*0x68322c*/
  return 0; /*0x683231*/
}


// ==== 0x00683240  sub_683240  this=-  sig=ida-proto ====
int sub_683240()
{
  MEMORY[0xB054B8] = 0; /*0x683245*/
  MEMORY[0xB054B0] = 128; /*0x68324f*/
  MEMORY[0xB054B4] = 128; /*0x683254*/
  return 128; /*0x683259*/
}


// ==== 0x00683260  sub_683260  this=-  sig=ida-proto ====
int sub_683260()
{
  dword_B05448 = 0; /*0x683262*/
  dword_B0544C = 0; /*0x683267*/
  dword_B05450 = 0; /*0x68326c*/
  dword_B05454 = 0; /*0x683271*/
  return 0; /*0x683276*/
}


// ==== 0x00683280  sub_683280  this=-  sig=ida-proto ====
int sub_683280()
{
  dword_B05478 = Timer::GetTicks(); /*0x68328f*/
  dword_B05480 = 0; /*0x683294*/
  return atexit(nullsub_226); /*0x6832a4*/
}


// ==== 0x006832B0  nullsub_226  this=-  sig=ida-proto ====
void __cdecl nullsub_226()
{
  ; /*0x6832b0*/
}


// ==== 0x006832C0  ScenarioClass::Constructor  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Constructor(int this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *v4; // eax
  wchar_t *v5; // edx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  _BYTE *v9; // edi
  int v10; // esi
  _BYTE *v11; // edi

  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x6832cf*/
  *(_DWORD *)(this + 1556) = Timer::GetTicks(); /*0x6832e5*/
  *(_DWORD *)(this + 1564) = 0; /*0x6832eb*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x6832f6*/
  *(_DWORD *)(this + 1576) = 0; /*0x6832fc*/
  v2 = MEMORY[0xA8ED84]; /*0x683302*/
  *(_DWORD *)(this + 4592) = 0; /*0x683307*/
  *(_DWORD *)(this + 4584) = v2; /*0x68330d*/
  *(_BYTE *)(this + 4600) = 0; /*0x683313*/
  v3 = MEMORY[0xA8ED84]; /*0x683319*/
  *(_DWORD *)(this + 4640) = 0; /*0x68331f*/
  *(_DWORD *)(this + 4632) = v3; /*0x683325*/
  *(_DWORD *)(this + 4644) = MEMORY[0xA8ED84]; /*0x683331*/
  *(_DWORD *)(this + 4652) = 0; /*0x683337*/
  v4 = MEMORY[0xA8ED84]; /*0x68333d*/
  *(_DWORD *)(this + 4664) = 0; /*0x683342*/
  *(_DWORD *)(this + 4656) = v4; /*0x683348*/
  *(_DWORD *)(this + 4668) = MEMORY[0xA8ED84]; /*0x683354*/
  *(_DWORD *)(this + 4676) = 0; /*0x68335a*/
  v5 = MEMORY[0xA8ED84]; /*0x683360*/
  *(_DWORD *)(this + 4688) = 0; /*0x683366*/
  *(_DWORD *)(this + 4680) = v5; /*0x68336c*/
  *(_DWORD *)(this + 13504) = MEMORY[0xA8ED84]; /*0x683381*/
  *(_DWORD *)(this + 13512) = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((_DWORD *)(this + 13524), 0, 0); /*0x68338d*/
  *(_DWORD *)(this + 13540) = 0; /*0x683397*/
  *(_DWORD *)(this + 13544) = 10; /*0x68339a*/
  *(_DWORD *)(this + 13524) = &vt_TypeList_TechnoTypeClass; /*0x68339d*/
  VectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x6833ad*/
  *(_DWORD *)(this + 13572) = 10; /*0x6833b2*/
  *(_DWORD *)(this + 13568) = 0; /*0x6833b5*/
  *(_DWORD *)(this + 13552) = &vt_TypeList_int; /*0x6833b8*/
  VectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x6833c8*/
  *(_DWORD *)(this + 13600) = 10; /*0x6833cf*/
  *(_DWORD *)(this + 13596) = 0; /*0x6833d2*/
  *(_DWORD *)(this + 13580) = &vt_TypeList_int; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  *(_BYTE *)(this + 13720) = 0; /*0x6833e2*/
  *(_BYTE *)(this + 13501) = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  *(_DWORD *)(this + 4692) = 1; /*0x6833f3*/
  *(_DWORD *)(this + 13516) = -1; /*0x6833fd*/
  *(_BYTE *)(this + 4) = 0; /*0x683407*/
  *(_BYTE *)(this + 264) = 0; /*0x68340a*/
  v6 = (_DWORD *)(this + 1586); /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *v6++ = dword_B05458; /*0x683421*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)(this + 4960), &MEMORY[0x887734]); /*0x683435*/
  wcscpy((wchar_t *)(this + 5082), &MEMORY[0x887734]); /*0x683446*/
  strcpy((char *)(this + 4700), &MEMORY[0x889F64]); /*0x683475*/
  strcpy((char *)(this + 7248), &MEMORY[0x889F64]); /*0x68349d*/
  strcpy((char *)(this + 5050), &MEMORY[0x889F64]); /*0x6834bf*/
  wcscpy((wchar_t *)(this + 5200), &MEMORY[0x887734]); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = (_BYTE *)(this + 7344); /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      *(_BYTE *)(this + 13482) = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((void *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (_BYTE *)(this + 9394); /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      *(_BYTE *)(this + 13482) = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll(v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(_DWORD *)(this + 13454) = 0; /*0x683534*/
  *(_DWORD *)(this + 13458) = 0; /*0x68353c*/
  *(_DWORD *)(this + 13462) = 0; /*0x683543*/
  *(_DWORD *)(this + 13466) = 0; /*0x683549*/
  return this; /*0x683533*/
}


// ==== 0x00683560  ScenarioClass::ReadINIEntry  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ReadINIEntry(int this, ScenarioClass *aP1)
{
  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x68356c*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x683588*/
  *(_DWORD *)(this + 1576) = 0; /*0x68358e*/
  TechnoTypeVector::Construct((_DWORD *)(this + 13524), 0, 0); /*0x683598*/
  *(_DWORD *)(this + 13524) = &vt_TypeList_TechnoTypeClass; /*0x68359d*/
  DynamicVectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x6835af*/
  *(_DWORD *)(this + 13552) = &vt_TypeList_int; /*0x6835b4*/
  DynamicVectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x6835c6*/
  *(_DWORD *)(this + 13580) = &vt_TypeList_int; /*0x6835d1*/
  if ( *(_BYTE *)(this + 4600) ) /*0x6835d7*/
    *(_DWORD *)(this + 4596) = GetStringCSF((wchar_t *)(this + 4600), 0, &stru_830620.__pad_579C[31356], 344); /*0x6835ed*/
  else
    *(_DWORD *)(this + 4596) = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x6835fa*/
  return this; /*0x6835f5*/
}


// ==== 0x00683610  ScenarioClass::InitTimer  this=ScenarioClass  sig=csp ====
#72 *__thiscall ScenarioClass::InitTimer(int this)
{
  int Ticks; // eax
  int v3; // edx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  #72 *result; // eax
  #72 *StringCSF; // eax
  int v23; // [esp+10h] [ebp-30h]
  _DWORD v24[2]; // [esp+18h] [ebp-28h] BYREF
  char Destination[32]; // [esp+20h] [ebp-20h] BYREF

  *(_DWORD *)(this + 524) = 699; /*0x683622*/
  *(_DWORD *)(this + 528) = 699; /*0x683628*/
  *(_DWORD *)(this + 532) = 1000000; /*0x683633*/
  *(_DWORD *)(this + 1548) = 1; /*0x68363d*/
  *(_DWORD *)(this + 1552) = 1; /*0x683643*/
  Ticks = Timer::GetTicks(v24); /*0x683649*/
  v3 = v24[0]; /*0x68364e*/
  v4 = (_DWORD *)(this + 1556); /*0x683652*/
  *(_DWORD *)(this + 1556) = Ticks; /*0x68365f*/
  *(_DWORD *)(this + 1560) = v3; /*0x683661*/
  *(_DWORD *)(this + 1564) = 0; /*0x683664*/
  if ( *(_DWORD *)(this + 1556) != -1 ) /*0x68366b*/
  {
    v5 = Timer::GetTicks(this + 1560); /*0x683670*/
    v6 = *(_DWORD *)(this + 1564); /*0x683677*/
    v7 = v5 - *v4; /*0x68367a*/
    *v4 = -1; /*0x68367c*/
    *(_DWORD *)(this + 1564) = v7 + v6; /*0x683680*/
  }
  v8 = Timer::GetTicks(v24); /*0x683687*/
  v9 = v24[0]; /*0x68368c*/
  v10 = (_DWORD *)(this + 1568); /*0x683690*/
  *(_DWORD *)(this + 1568) = v8; /*0x683698*/
  *(_DWORD *)(this + 1572) = v9; /*0x68369a*/
  *(_DWORD *)(this + 1576) = 0; /*0x68369d*/
  if ( *(_DWORD *)(this + 1568) != -1 ) /*0x6836a4*/
  {
    v23 = *(_DWORD *)(this + 1576); /*0x6836a9*/
    v11 = Timer::GetTicks(this + 1572) - *v10; /*0x6836b7*/
    if ( v11 >= v23 ) /*0x6836bf*/
      v12 = 0; /*0x6836c5*/
    else
      v12 = v23 - v11; /*0x6836c1*/
    *(_DWORD *)(this + 1576) = v12; /*0x6836c7*/
    *v10 = -1; /*0x6836ca*/
  }
  *(_DWORD *)(this + 1580) = 0; /*0x6836d2*/
  *(_BYTE *)(this + 1584) = 0; /*0x6836d8*/
  *(_DWORD *)(this + 4584) = dword_A8ED54[12]; /*0x6836e6*/
  *(_DWORD *)(this + 4588) = v24[0]; /*0x6836ec*/
  *(_DWORD *)(this + 4592) = 0; /*0x6836ef*/
  v13 = *(_DWORD *)(this + 4584); /*0x6836f2*/
  if ( v13 != -1 ) /*0x6836f6*/
  {
    v14 = *(_DWORD *)(this + 4592); /*0x6836fe*/
    if ( dword_A8ED54[12] - v13 >= v14 ) /*0x683705*/
      v15 = 0; /*0x68370b*/
    else
      v15 = v14 - (dword_A8ED54[12] - v13); /*0x683707*/
    *(_DWORD *)(this + 4592) = v15; /*0x68370d*/
    *(_DWORD *)(this + 4584) = -1; /*0x683710*/
  }
  *(_DWORD *)(this + 4596) = &MEMORY[0x87F7E8][8147]; /*0x683717*/
  if ( MEMORY[0x87F7E8] == (_DWORD *)-42876 ) /*0x683723*/
  {
    Destination[0] = 0; /*0x683725*/
  }
  else
  {
    strncpy(Destination, (const char *)&MEMORY[0x87F7E8][10719], 31); /*0x683737*/
    Destination[31] = 0; /*0x68373f*/
  }
  if ( Destination != (char *)(this + 4600) ) /*0x68374f*/
    qmemcpy((void *)(this + 4600), Destination, 0x20u); /*0x68375a*/
  *(_DWORD *)(this + 4632) = dword_A8ED54[12]; /*0x683770*/
  *(_DWORD *)(this + 4636) = v24[0]; /*0x683776*/
  *(_DWORD *)(this + 4640) = 0; /*0x683779*/
  v16 = v24[0]; /*0x683781*/
  *(_DWORD *)(this + 4644) = dword_A8ED54[12]; /*0x683785*/
  *(_DWORD *)(this + 4648) = v16; /*0x683787*/
  v17 = v24[0]; /*0x68378a*/
  *(_DWORD *)(this + 4652) = 0; /*0x68378e*/
  *(_DWORD *)(this + 4656) = dword_A8ED54[12]; /*0x68379c*/
  *(_DWORD *)(this + 4660) = v17; /*0x6837a2*/
  v18 = v24[0]; /*0x6837a5*/
  *(_DWORD *)(this + 4664) = 0; /*0x6837a9*/
  *(_DWORD *)(this + 4668) = dword_A8ED54[12]; /*0x6837b7*/
  *(_DWORD *)(this + 4672) = v18; /*0x6837bd*/
  v19 = v24[0]; /*0x6837c0*/
  *(_DWORD *)(this + 4676) = 0; /*0x6837c4*/
  *(_DWORD *)(this + 4680) = dword_A8ED54[12]; /*0x6837d2*/
  *(_DWORD *)(this + 4684) = v19; /*0x6837d8*/
  v20 = v24[0]; /*0x6837db*/
  *(_DWORD *)(this + 4688) = 0; /*0x6837df*/
  *(_DWORD *)(this + 4696) = -1; /*0x6837e2*/
  *(_DWORD *)(this + 5172) = -1; /*0x6837e8*/
  *(_DWORD *)(this + 5176) = -1; /*0x6837ee*/
  *(_DWORD *)(this + 5180) = -1; /*0x6837f4*/
  *(_DWORD *)(this + 5184) = -1; /*0x6837fa*/
  *(_DWORD *)(this + 5188) = -1; /*0x683800*/
  *(_DWORD *)(this + 5192) = -1; /*0x683806*/
  *(_DWORD *)(this + 5196) = -1; /*0x68380c*/
  *(_DWORD *)(this + 7280) = -1; /*0x683812*/
  *(_DWORD *)(this + 7284) = 0; /*0x683818*/
  *(_DWORD *)(this + 7288) = 0; /*0x68381e*/
  *(_DWORD *)(this + 7292) = 0; /*0x683824*/
  *(_DWORD *)(this + 7296) = 0; /*0x68382a*/
  *(_DWORD *)(this + 7300) = 0; /*0x683830*/
  *(_DWORD *)(this + 13472) = 0; /*0x683836*/
  *(_BYTE *)(this + 13476) = 0; /*0x68383c*/
  *(_BYTE *)(this + 13477) = 0; /*0x683842*/
  *(_BYTE *)(this + 13478) = 1; /*0x683848*/
  *(_BYTE *)(this + 13479) = 1; /*0x68384f*/
  *(_BYTE *)(this + 13480) = 1; /*0x683856*/
  *(_BYTE *)(this + 13481) = 0; /*0x68385d*/
  *(_BYTE *)(this + 13482) = 0; /*0x683863*/
  *(_BYTE *)(this + 13483) = 0; /*0x683869*/
  *(_BYTE *)(this + 13484) = 0; /*0x68386f*/
  *(_BYTE *)(this + 13485) = 0; /*0x683875*/
  *(_BYTE *)(this + 13486) = 0; /*0x68387b*/
  *(_BYTE *)(this + 13487) = 0; /*0x683881*/
  *(_BYTE *)(this + 13488) = 0; /*0x683887*/
  *(_BYTE *)(this + 13489) = 0; /*0x68388d*/
  *(_BYTE *)(this + 13490) = 0; /*0x683893*/
  *(_BYTE *)(this + 13492) = 0; /*0x683899*/
  *(_DWORD *)(this + 13496) = 0; /*0x68389f*/
  *(_BYTE *)(this + 13500) = 0; /*0x6838a5*/
  *(_BYTE *)(this + 13502) = 0; /*0x6838ab*/
  *(_DWORD *)(this + 13504) = dword_A8ED54[12]; /*0x6838bc*/
  *(_DWORD *)(this + 13508) = v20; /*0x6838c7*/
  *(_DWORD *)(this + 13512) = 0; /*0x6838ca*/
  *(_DWORD *)(this + 13520) = 0; /*0x6838cd*/
  *(_DWORD *)(this + 13608) = 100; /*0x6838d3*/
  *(_DWORD *)(this + 13612) = 100; /*0x6838d9*/
  *(_DWORD *)(this + 13616) = 100; /*0x6838df*/
  *(_DWORD *)(this + 13620) = 100; /*0x6838e5*/
  *(_DWORD *)(this + 13624) = 100; /*0x6838eb*/
  *(_DWORD *)(this + 13628) = 100; /*0x6838f1*/
  *(_DWORD *)(this + 13632) = 50; /*0x6838f7*/
  *(_DWORD *)(this + 13636) = 8; /*0x683901*/
  *(_DWORD *)(this + 13640) = 87; /*0x68390b*/
  *(_DWORD *)(this + 13680) = 100; /*0x68391a*/
  *(_DWORD *)(this + 13684) = 100; /*0x683920*/
  *(_DWORD *)(this + 13644) = 30; /*0x68392b*/
  *(_DWORD *)(this + 13648) = 40; /*0x683931*/
  *(_DWORD *)(this + 13688) = 1; /*0x68393b*/
  *(_DWORD *)(this + 13716) = 1; /*0x683941*/
  *(_BYTE *)(this + 13491) = 1; /*0x683947*/
  *(_DWORD *)(this + 13652) = 75; /*0x68394d*/
  *(_DWORD *)(this + 13656) = 0; /*0x683961*/
  *(_DWORD *)(this + 13660) = 0; /*0x683967*/
  *(_DWORD *)(this + 13664) = 200; /*0x68396d*/
  *(_DWORD *)(this + 13668) = 175; /*0x683977*/
  *(_DWORD *)(this + 13672) = 150; /*0x683981*/
  *(_DWORD *)(this + 13676) = 125; /*0x683987*/
  *(_DWORD *)(this + 13692) = 150; /*0x683991*/
  *(_DWORD *)(this + 13696) = 85; /*0x683997*/
  *(_DWORD *)(this + 13700) = 20; /*0x6839a1*/
  *(_DWORD *)(this + 13704) = 30; /*0x6839ab*/
  *(_DWORD *)(this + 13708) = 0; /*0x6839b1*/
  *(_DWORD *)(this + 13712) = 0; /*0x6839b7*/
  *(_DWORD *)(this + 13724) = 10000; /*0x6839bd*/
  *(_WORD *)(this + 13728) = 0; /*0x6839c7*/
  *(_BYTE *)(this + 13730) = 0; /*0x6839ce*/
  *(_DWORD *)(this + 13732) = 3600; /*0x6839d4*/
  *(_DWORD *)(this + 13736) = 3600; /*0x6839da*/
  *(_DWORD *)(this + 13740) = 3600; /*0x6839e0*/
  *(_BYTE *)(this + 13744) = 0; /*0x6839e6*/
  *(_BYTE *)(this + 13775) = 0; /*0x6839ec*/
  *(_BYTE *)(this + 13806) = 0; /*0x6839f2*/
  *(_BYTE *)(this + 13837) = 0; /*0x6839f8*/
  *(_BYTE *)(this + 13868) = 0; /*0x6839fe*/
  *(_BYTE *)(this + 13899) = 0; /*0x683a04*/
  *(_DWORD *)(this + 13932) = 0; /*0x683a0a*/
  *(_DWORD *)(this + 13936) = 0; /*0x683a10*/
  *(_DWORD *)(this + 13940) = 0; /*0x683a16*/
  *(_DWORD *)(this + 13944) = 0; /*0x683a1c*/
  *(_BYTE *)(this + 13948) = 0; /*0x683a22*/
  *(_BYTE *)(this + 14012) = 0; /*0x683a28*/
  *(_BYTE *)(this + 14076) = 0; /*0x683a2e*/
  *(_BYTE *)(this + 4576) = 0; /*0x683a3a*/
  *(_DWORD *)(this + 4580) = 4; /*0x683a40*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13524) + 12))(this + 13524); /*0x683a4c*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13552) + 12))(this + 13552); /*0x683a5b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13580) + 12))(this + 13580); /*0x683a6a*/
  result = (#72 *)MEMORY[0x87F7E8][536212]; /*0x683a6d*/
  if ( MEMORY[0x87F7E8][536212] == 5 ) /*0x683a79*/
  {
    StringCSF = GetStringCSF((#72 *)aGuiSkirmishgam, 0, g_Str_File_Scenario_CPP, 522); /*0x683a8c*/
    return wcscpy((#72 *)(MEMORY[0x87F7E8][536210] + 4960), StringCSF); /*0x683a9f*/
  }
  return result; /*0x683a72*/
}


// ==== 0x00683AB0  ScenarioClass::LoadScenarioAndStart  this=AbstractClass  sig=csp ====
char __fastcall ScenarioClass::LoadScenarioAndStart(AnimClass *Source, char a2, int a3)
{
  AnimClass *v3; // ebp
  int v4; // eax
  int Field; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // edi
  Movie *Bool; // esi
  int v10; // eax
  int v12; // eax
  Frame *v13; // ecx
  DWORD *v14; // esi
  void *v16[3]; // [esp+1Ch] [ebp-E0h] BYREF
  _DWORD v17[10]; // [esp+28h] [ebp-D4h] BYREF
  char v18; // [esp+50h] [ebp-ACh]
  int v19; // [esp+54h] [ebp-A8h]
  int v20; // [esp+58h] [ebp-A4h]
  char v21; // [esp+5Ch] [ebp-A0h]
  _DWORD v22[22]; // [esp+74h] [ebp-88h] BYREF
  _BYTE v23[12]; // [esp+CCh] [ebp-30h] BYREF
  int v24; // [esp+D8h] [ebp-24h]
  CHAR v25[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v3 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source->field_0)) && a3 != -1 ) /*0x683ade*/
  {
    if ( MEMORY[0xA8EA70].__pad_2EC[1] == 1 ) /*0x683ae7*/
      v3 = (AnimClass *)&MEMORY[0xA83E48]; /*0x683ae9*/
    else
      v3 = (AnimClass *)(*((_DWORD *)g_CampaignTypeArray + a3) + 156); /*0x683af8*/
  }
  *((_DWORD *)MEMORY[0xA8B230] + 3379) = a3; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)MEMORY[0xA8B230] + 4700, v3->field_0); /*0x683b47*/
  _strupr((char *)MEMORY[0xA8B230] + 4700); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !MEMORY[0xA8B238][0] ) /*0x683b73*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8B230] + 3379); /*0x683b7b*/
    if ( v4 == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v4) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( MEMORY[0xA8B254] != -1 ) /*0x683b9f*/
  {
    v6 = *(int **)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]); /*0x683ba7*/
    v7 = Game::CheckForGameCD((void *)0x3C); /*0x683baf*/
    if ( !ScenarioClass::CheckExists(v6, v7) ) /*0x683bb7*/
    {
      Field = GameOption::GetField((_DWORD **)v6); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v8 = ++MEMORY[0xA8DAB4]; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( MEMORY[0xA8B238][0] == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &MEMORY[0x887734]); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --MEMORY[0xA8DAB4]; /*0x683c03*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x683c11*/
  v16[1] = 0; /*0x683c18*/
  v16[2] = 0; /*0x683c1c*/
  GenericList::Constructor(v17); /*0x683c20*/
  v17[0] = &vt_List_INIClass_INISection; /*0x683c29*/
  memset(&v17[7], 0, 12); /*0x683c32*/
  v18 = 0; /*0x683c3e*/
  v19 = 0; /*0x683c42*/
  v20 = 0; /*0x683c46*/
  v21 = 0; /*0x683c4a*/
  v16[0] = &CCINIClass_Vtable; /*0x683c4e*/
  CCFileClass::Construct(v22, v3->field_0); /*0x683c56*/
  if ( CCINIClass::Load(v16, (int)v22, 1, 0) ) /*0x683c67*/
  {
    Bool = (Movie *)INIClass::GetBool( /*0x683c85*/
                      (unsigned __int8 ***)v16,
                      (unsigned __int8 *)MEMORY[0x82BF9C],
                      (unsigned __int8 *)g_INI_Key_Intro,
                      -1);
    if ( Bool != (Movie *)-1 /*0x683ca5*/
      || (Bool = (Movie *)INIClass::GetBool(
                            (unsigned __int8 ***)v16,
                            (unsigned __int8 *)MEMORY[0x82BF9C],
                            (unsigned __int8 *)MEMORY[0x83D8A8],
                            -1),
          Bool != (Movie *)-1) )
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x683cad*/
      Movie::PlayWrapper((int)Bool, (int)v3, v8, 1, 1, 1); /*0x683cbd*/
    }
  }
  v22[0] = &vt_CCFileClass; /*0x683cc9*/
  v24 = 0; /*0x683cd1*/
  Vector::Clear((int)v23); /*0x683cd8*/
  v22[0] = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor(v22); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass(v16); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v10 = StringList::Find(&g_BuildingTypeClass_Count, aLoading); /*0x683d0f*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, v10); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  v12 = *((_DWORD *)MEMORY[0xA8B230] + 1294); /*0x683d5e*/
  if ( v12 != -1 ) /*0x683d67*/
    wsprintfA(v25, MEMORY[0x83D888], *((const char **)MEMORY[0xABF394] + v12)); /*0x683d80*/
  if ( *((int *)MEMORY[0xA8B230] + 3380) > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(*((_DWORD *)MEMORY[0xA8B230] + 1297), (int)v3, v8, 1, 1, 1); /*0x683db6*/
  if ( MEMORY[0x886FB8] != *(_DWORD *)&MEMORY[0xA8EA70].field_D0[68] /*0x683dd6*/
    || MEMORY[0x886FBC] != *(_DWORD *)&MEMORY[0xA8EA70].field_D0[72] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(*(unsigned int *)&MEMORY[0xA8EA70].field_D0[68], *(unsigned int *)&MEMORY[0xA8EA70].field_D0[72]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((int)&MEMORY[0xA8EA70].field_D0[32]); /*0x683e02*/
  (*(void (__thiscall **)(IUnknown *, _DWORD))(MEMORY[0x88730C]->field_0 + 24))(MEMORY[0x88730C], 0); /*0x683e10*/
  LOBYTE(v13) = 1; /*0x683e19*/
  Frame::Present(v13, 0); /*0x683e1c*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) == -1 ) /*0x683e35*/
  {
    v14 = (DWORD *)((char *)MEMORY[0xA8B230] + 1556); /*0x683e26*/
    *v14 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1820) == -1 ) /*0x683e50*/
    Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, *((_DWORD *)MEMORY[0xA8B230] + 1820)); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  MEMORY[0xA8EA70].__pad_2EC[0] = 1; /*0x683e75*/
  MEMORY[0xA8E378] = 1; /*0x683e7f*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &MEMORY[0x887734]); /*0x683e8f*/
  return 1; /*0x683d4a*/
}


// ==== 0x00683EB0  ScenarioClass::CleanupTemporary  this=ScenarioClass  sig=csp ====
int sub_683EB0()
{
  void *v0; // ecx
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax

  sub_406F00(); /*0x683eb1*/
  MEMORY[0x83D834] = sub_4072B0((_DWORD *)MEMORY[0x87E758]); /*0x683ecc*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x683ed1*/
  if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x683ee2*/
  {
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v0 = MEMORY[0xA8B230]; /*0x683f18*/
    v1 = (char *)MEMORY[0xA8B230] + 1556; /*0x683f27*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v3 = v1[2]; /*0x683f3d*/
      v4 = Ticks - *v1; /*0x683f40*/
      *v1 = -1; /*0x683f42*/
      v0 = (void *)(v4 + v3); /*0x683f48*/
      v1[2] = v0; /*0x683f4a*/
    }
  }
  LOBYTE(v0) = 1; /*0x683f4d*/
  AsyncIO::Read(v0); /*0x683f4f*/
  if ( MEMORY[0x887368] ) /*0x683f5d*/
    Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x683f61*/
  Mouse::ReleaseCapture(&MEMORY[0x87F7E8]); /*0x683f6b*/
  Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x683f86*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x683f90*/
  TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x683f9a*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]);
}


// ==== 0x00683FB0  ObjectClass::PostFrameCleanup  this=ObjectClass  sig=csp ====
int sub_683FB0()
{
  DWORD *v0; // esi
  void *v1; // ecx

  MouseClass::GetPosition(&MEMORY[0x87F7E8]); /*0x683fb7*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) == -1 ) /*0x683fd0*/
  {
    v0 = (DWORD *)((char *)MEMORY[0xA8B230] + 1556); /*0x683fc1*/
    *v0 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( MEMORY[0x887368] ) /*0x68401d*/
    Tooltip::Enable((void *)MEMORY[0x887368], MEMORY[0xA8EB80]); /*0x684026*/
  EndBufferMixer((int *)MEMORY[0x87E758], MEMORY[0x83D834]); /*0x684037*/
  LOBYTE(v1) = 0; /*0x68403c*/
  MEMORY[0x83D834] = 0x4000; /*0x68403e*/
  AsyncIO::Read(v1); /*0x684048*/
  return sub_406F40();
}


// ==== 0x00684060  SetScenarioClassTimer  this=RandomStruct  sig=ida-proto ====
void *__fastcall ScenarioClass_SetTimer(int a1)
{
  DWORD Ticks; // eax
  char *v3; // edx
  void *result; // eax
  _DWORD *v5; // esi
  DWORD v6; // eax
  int v7; // ecx
  DWORD v8; // eax
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 ) /*0x684068*/
  {
    Ticks = Timer::GetTicks(); /*0x68406e*/
    v3 = (char *)MEMORY[0xA8B230] + 1568; /*0x68407c*/
    *((_DWORD *)MEMORY[0xA8B230] + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = MEMORY[0xA8B230]; /*0x68409c*/
    if ( *((_BYTE *)MEMORY[0xA8B230] + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)MEMORY[0xA8B230] + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)MEMORY[0xA8B230] + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)MEMORY[0xA8B230] + 1556; /*0x6840e2*/
      if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    MEMORY[0xB054CC] = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x68411b*/
    if ( !MEMORY[0xB054CC] ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&MEMORY[0x87F7E8]); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x684143*/
      *((_BYTE *)MEMORY[0xA8B230] + 13730) = 1; /*0x68414c*/
      MEMORY[0xA8ED9C] = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x684160*/
      MEMORY[0xB07784] = 0; /*0x684165*/
    }
  }
  result = MEMORY[0xA8B230]; /*0x68416f*/
  ++*((_DWORD *)MEMORY[0xA8B230] + 395); /*0x684174*/
  return result; /*0x68417a*/
}


// ==== 0x00684180  ScenarioClass::ProcessIntroTimer  this=ScenarioClass  sig=csp ====
_BYTE *ScenarioClass_ProcessIntroTimer()
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)MEMORY[0xA8B230] + 395); /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 395) = result - 1; /*0x684195*/
    result = MEMORY[0xA8B230]; /*0x68419b*/
    if ( !*((_DWORD *)MEMORY[0xA8B230] + 395) ) /*0x6841a0*/
    {
      if ( !MEMORY[0xB054CC] ) /*0x6841b6*/
      {
        if ( *((_BYTE *)MEMORY[0xA8B230] + 13730) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x6841c9*/
            (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x6841d8*/
          result = MEMORY[0xA8B230]; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        MEMORY[0xA8ED9C] = 0; /*0x6841fc*/
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x684203*/
        result = MEMORY[0xA8B230]; /*0x684208*/
        MEMORY[0xB07784] = 0; /*0x68420d*/
      }
      if ( *((_DWORD *)result + 389) == -1 ) /*0x684227*/
        *((_DWORD *)result + 389) = Timer::GetTicks(); /*0x684231*/
      return (_BYTE *)sub_406F40(); /*0x684233*/
    }
  }
  return result; /*0x684239*/
}


// ==== 0x00684240  Scenario::ClearScreen  this=Scenario  sig=csp ====
HWND Scenario_ClearScreen()
{
  HWND result; // eax

  Mouse::ReleaseCapture(&MEMORY[0x87F7E8]); /*0x684245*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x684252*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x684261*/
  *((_BYTE *)MEMORY[0xA8B230] + 13730) = 1; /*0x68426c*/
  MEMORY[0xA8ED9C] = 1; /*0x684278*/
  result = Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x68427d*/
  MEMORY[0xB07784] = 0; /*0x684282*/
  return result; /*0x68428c*/
}


// ==== 0x00684290  ObjectClass::UpdateMouse  this=ObjectClass  sig=csp ====
HWND Mouse_Update()
{
  HWND result; // eax

  if ( *((_BYTE *)MEMORY[0xA8B230] + 13730) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x6842b5*/
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ); /*0x6842c0*/
  }
  *((_BYTE *)MEMORY[0xA8B230] + 13730) = 0; /*0x6842cc*/
  MEMORY[0xA8ED9C] = 0; /*0x6842d9*/
  result = Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6842e0*/
  MEMORY[0xB07784] = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}


// ==== 0x006842F0  ToggleDisplayMode  this=-  sig=ida-proto ====
char __fastcall DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = MEMORY[0xA8EB84]; /*0x6842f4*/
    if ( MEMORY[0x886FB8] != MEMORY[0xA8EB84] || MEMORY[0x886FBC] != MEMORY[0xA8EB88] ) /*0x68430f*/
    {
      Debug::Log(MEMORY[0x83D868], MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x684318*/
      return ChangeVideoMode(MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x68432c*/
    }
  }
  else
  {
    result = MEMORY[0x886FB8]; /*0x684331*/
    if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] ) /*0x68433e*/
    {
      result = MEMORY[0xA8EB90]; /*0x684346*/
      if ( MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x68434d*/
      {
        Debug::Log(MEMORY[0x83D924]); /*0x684354*/
        return ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}


// ==== 0x00684370  ObjectClass::WaitForMultiplayerLoadSync  this=ObjectClass  sig=csp ====
char WaitForMultiplayerLoadSync()
{
  int v0; // ebx
  int v1; // esi
  int v2; // eax
  double v3; // st7
  char v5; // c0
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v10; // edi
  int v11; // edi
  double AverageProgress; // [esp+10h] [ebp-40h]
  DWORD v13; // [esp+20h] [ebp-30h]
  int v14; // [esp+28h] [ebp-28h]
  DWORD TicksTimer; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+34h] [ebp-1Ch]

  if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  TicksTimer = Timer::GetTicks(); /*0x6843b5*/
  v16 = 300; /*0x6843b9*/
  v13 = Timer::GetTicks(); /*0x6843cb*/
  v14 = 3600; /*0x6843d3*/
  AverageProgress = Progress::GetAverage((int)MEMORY[0xAC4F58]); /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(MEMORY[0x87F770]); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v0 = 1; /*0x6843fe*/
    if ( MEMORY[0xA8B238][0] == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v1 = v14; /*0x684422*/
    if ( v13 != -1 ) /*0x68442b*/
    {
      v2 = Timer::GetTicks() - v13; /*0x684436*/
      if ( v2 >= v14 ) /*0x68443c*/
        break; /*0x68443c*/
      v1 = v14 - v2; /*0x684442*/
    }
    if ( v1 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    v3 = Progress::GetAverage((int)MEMORY[0xAC4F58]); /*0x684451*/
    if ( !v5 )
    {
      Multiplayer::ShowProgress(MEMORY[0xA8B238], *((_BYTE *)MEMORY[0xA8B230] + 13501) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    if ( v3 != AverageProgress ) /*0x684474*/
    {
      v13 = Timer::GetTicks(); /*0x684490*/
      v14 = 7200; /*0x684498*/
      AverageProgress = v3; /*0x6844a4*/
    }
    v6 = v16; /*0x6844b0*/
    if ( TicksTimer != -1 ) /*0x6844b6*/
    {
      v7 = Timer::GetTicks() - TicksTimer; /*0x6844c1*/
      if ( v7 >= v16 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v16 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
LABEL_18:
      TicksTimer = Timer::GetTicks(); /*0x6844d3*/
      v16 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress(MEMORY[0xA8B238], *((_BYTE *)MEMORY[0xA8B230] + 13501) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x68453f*/
  {
    if ( Progress::GetWeighted((int)MEMORY[0xAC4F58], v0) < 0.999 ) /*0x68455b*/
    {
      v10 = *(char **)(MEMORY[0xA8DA78] + 4 * i); /*0x684562*/
      ToWideStringChar(v10); /*0x684567*/
      ToWideStringChar(v10); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v11 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v11, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], *(#375 **)&HouseClass_Array->__pad_0[4 * v11]) ) /*0x6845aa*/
      {
        MEMORY[0xA8E2AC] = -1; /*0x6845bf*/
        memset(MEMORY[0xA8E258], 0, 0x28u); /*0x6845c9*/
        MEMORY[0xA8E280] = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v0; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}


// ==== 0x00684620  Scenario::LoadWithProgress  this=AbstractClass  sig=csp ====
char __thiscall Scenario::LoadWithProgress(AnimClass *this)
{
  double v1; // st7
  ProgressScreenClass *v2; // edi
  unsigned int v3; // kr08_4
  char v4; // al
  wchar_t *StringCSF; // eax
  int *Instance; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  ProgressScreenClass *v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  char v16; // bl
  void *v17; // ecx
  int v18; // edx
  unsigned int v19; // kr0C_4
  char *v20; // edi
  unsigned int v21; // ecx
  wchar_t *v22; // eax
  char Sync; // bl
  ProgressScreenClass *i; // esi
  int j; // esi
  wchar_t *v27; // [esp-10h] [ebp-258h]
  ProgressScreenClass *v28; // [esp-8h] [ebp-250h]
  const wchar_t *v29; // [esp-4h] [ebp-24Ch]
  ProgressScreenClass *_72B380; // [esp-4h] [ebp-24Ch]
  char v31; // [esp-4h] [ebp-24Ch]
  CampaignScore *v32; // [esp+0h] [ebp-248h]
  int v33; // [esp+10h] [ebp-238h]
  _DWORD v34[2]; // [esp+14h] [ebp-234h] BYREF
  CampaignScore *v35; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v37; // [esp+30h] [ebp-218h]
  int v38; // [esp+34h] [ebp-214h]
  int v39; // [esp+38h] [ebp-210h]
  int v40; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v42[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, (const char *)this); /*0x684653*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[23248] = 0; /*0x68466b*/
  *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13720) = 1; /*0x684675*/
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x684685*/
  v3 = strlen(Source) + 1; /*0x68468c*/
  v2 = (ProgressScreenClass *)&Source[v3]; /*0x68468c*/
  if ( _strcmpi((char *)&v40 + v3 - 1, &stru_830620.__pad_579C[31948]) ) /*0x684694*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13501) = 0; /*0x6846be*/
  else
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13501) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v33 = 0; /*0x6846d4*/
  if ( !HouseClass_Player.__pad_5568[23223] ) /*0x6846d8*/
  {
    v4 = 1; /*0x6846eb*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x6846f2*/
      v4 = HouseClass_Player.__pad_5568[18384]; /*0x6846f4*/
    ProgressAnim::Init((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 1079574528, v4, 0); /*0x684706*/
    v2 = 0; /*0x684710*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && dword_B779C4 ) /*0x68471c*/
    {
      v29 = (const wchar_t *)dword_B779D4; /*0x684729*/
      StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[31888], 0, &stru_830620.__pad_579C[31356], 1199); /*0x684736*/
      swprintf(v42, (const size_t)StringCSF, v29, v32); /*0x684744*/
      v2 = (ProgressScreenClass *)v42; /*0x68474c*/
    }
    Instance = LoadProgressMgr::GetInstance(); /*0x684758*/
    v33 = (int)Instance; /*0x68475c*/
    Scenario::ComputeDisplayPosition(Instance); /*0x684760*/
    Function::643E80(&g_MatrixTransformState + 6226, (int)Instance); /*0x68476b*/
    v7 = 0; /*0x68477c*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x684780*/
    {
      v9 = *(_DWORD *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 75); /*0x6847a4*/
      if ( v9 == -3 ) /*0x6847aa*/
        v9 = 0; /*0x6847ac*/
      v7 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v9) + 188); /*0x6847b7*/
    }
    else
    {
      v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516); /*0x684782*/
      if ( v8 != -1 ) /*0x68478b*/
        v7 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v8] + 152); /*0x684795*/
    }
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496) = v7; /*0x6847c3*/
    Scenario::SetDword32((ProgressScreenClass *)&g_MatrixTransformState + 283, v7); /*0x6847c9*/
    v10 = LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v10); /*0x6847d5*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x6847e1*/
    {
      SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620.__pad_579C[31860], 0, 0); /*0x684800*/
    }
    else
    {
      _72B380 = (ProgressScreenClass *)Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620.__pad_579C[31876], 0, _72B380); /*0x6847f0*/
    }
    v11 = *(ProgressScreenClass **)&HouseClass_Player.__pad_5568[8068]; /*0x684805*/
    LOBYTE(v11) = *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 0; /*0x684815*/
    v31 = *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 0; /*0x684818*/
    v28 = v11; /*0x684819*/
    v12 = Scenario::ComputeDialogPos(Instance, v34); /*0x68481e*/
    TextRenderer::MeasureBuilding( /*0x68482f*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      *v12,
      (ProgressScreenClass *)v12[1],
      v2,
      v28,
      v31);
    v13 = Map_Load(); /*0x684836*/
    Scenario::SetDword30((ProgressScreenClass *)&g_MatrixTransformState + 283, v13); /*0x684841*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] ) /*0x68484d*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && *(int *)&HouseClass_Player.__pad_5568[18384] > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 48))(*(_DWORD *)&stru_87C374.__pad_579C[23320]); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v37 = 0; /*0x6848a3*/
        v38 = 0; /*0x6848b0*/
        v39 = 0; /*0x6848b6*/
        v40 = 0; /*0x6848be*/
        v14 = 1; /*0x6848c2*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 ) /*0x6848c4*/
        {
          v2 = (ProgressScreenClass *)(&HouseClass_Player + 42344); /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress( /*0x6848e5*/
              (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v14) + 40),
              &v35,
              (int)v34);
            sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[31808], (INIClass *)LOBYTE(v34[0])); /*0x68491f*/
            Debug::Log(); /*0x68492e*/
            LOWORD(v15) = *(_WORD *)v2->__pad_0; /*0x684933*/
            (*(void (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 44))( /*0x684947*/
              *(_DWORD *)&stru_87C374.__pad_579C[23320],
              Buffer,
              v15);
            ++v14; /*0x68494f*/
            v2 = (ProgressScreenClass *)((char *)v2 + 2); /*0x684950*/
          }
          while ( v14 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x684955*/
        }
      }
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13501) ) /*0x684961*/
  {
    v16 = Scenario::LoadOrReloadOptions(dword_ABDFD8, (IUnknown *)Source); /*0x68497a*/
    if ( v16 ) /*0x68497e*/
    {
      RandomMap::Generate((int *)dword_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v17) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v17); /*0x684990*/
    }
    v18 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700; /*0x6849a1*/
    v19 = strlen(Source) + 1; /*0x6849a9*/
    qmemcpy((void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), Source, 4 * (v19 >> 2)); /*0x6849b8*/
    v20 = (char *)(v18 + 4 * (v19 >> 2)); /*0x6849b8*/
    v21 = v19 & 3; /*0x6849bc*/
    qmemcpy(v20, &Source[4 * (v19 >> 2)], v21); /*0x6849bf*/
    v2 = (ProgressScreenClass *)&v20[v21]; /*0x6849bf*/
  }
  else
  {
    v16 = ScenarioClass::Construct(Source, v1); /*0x6849ce*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5294) ) /*0x6849d6*/
    MapClass::ClearShroud(&stru_87C374.__pad_14B0[8132], 0); /*0x6849e7*/
  if ( v16 )
  {
    MessageListClass::Init( /*0x684ac9*/
      &HouseClass_Player.__pad_5568[10668],
      *(_DWORD *)&stru_87C374.__pad_579C[21648] + 3,
      *(int *)&stru_87C374.__pad_579C[21652],
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      (CellStruct *)(*(_DWORD *)&stru_87C374.__pad_579C[21656] - 6));
    PostLoadInitScenario((int)v2); /*0x684ace*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress(&HouseClass_Player.__pad_5568[8068], 99); /*0x684ae8*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x684af3*/
      {
        if ( HouseClass_Player.__pad_5568[18668] ) /*0x684afc*/
          Process::WaitForExit(&g_NetworkEventQueue, 0x3A98u, (CellStruct *)1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress(
      &HouseClass_Player.__pad_5568[8068],
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13501) != 0 ? 200 : 100);
    HouseClass_Player.__pad_5568[9741] = 0; /*0x684b30*/
    HouseClass_Player.__pad_5568[9742] = 0; /*0x684b37*/
    Sync = WaitForMultiplayerLoadSync(); /*0x684b43*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances(&HouseClass_Player.__pad_5568[8068]); /*0x684b53*/
    --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x684b66*/
    if ( !HouseClass_Player.__pad_5568[23223] ) /*0x684b6c*/
    {
      if ( Sync ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        while ( Progress::GetAverage((int)(&g_MatrixTransformState + 6226)) < 1.0 ) /*0x684b8c*/
        {
          for ( i = 0; (int)i < *(int *)&HouseClass_Player.__pad_5568[18384]; i = (ProgressScreenClass *)((char *)i + 1) ) /*0x684b97*/
            Network::UpdateLatencyDisplay( /*0x684bae*/
              (ProgressScreenClass *)&g_MatrixTransformState + 283,
              i,
              0,
              (ProgressScreenClass *)0x40590000);
        }
      }
    }
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13720) = 0; /*0x684bde*/
    Scenario::SetByte96((ProgressScreenClass *)&g_MatrixTransformState + 283); /*0x684be5*/
    if ( v33 ) /*0x684bf0*/
    {
      Function::643E80(&g_MatrixTransformState + 6226, 0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v33); /*0x684c00*/
    }
    for ( j = (int)&HouseClass_Count[-1].__tail_1602E[1]; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j]); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&stru_87C374.__pad_579C[15472], 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v35 = &stru_82083C; /*0x684a31*/
    v27 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[31356], 1293); /*0x684a45*/
    v22 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[32], 0, &stru_830620.__pad_579C[31356], 1293); /*0x684a50*/
    Dialog::ShowMessageBox((int)v22, v27, 0, 0, 0, (int)v32); /*0x684a5a*/
    --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x684a6b*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13720) = 0; /*0x684a71*/
    if ( v33 ) /*0x684a7d*/
    {
      Function::643E80(&g_MatrixTransformState + 6226, 0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}


// ==== 0x00684C30  ObjectClass::PostLoadInitScenario  this=ObjectClass  sig=csp ====
int __usercall ScenarioClass_PostLoadInit@<eax>(int a1@<edi>)
{
  int i; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int j; // ebx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // ebp
  int v25; // eax
  int m; // eax
  void *v27; // esi
  int v28; // eax
  int n; // esi
  void **v30; // edi
  int *v31; // eax
  int k; // [esp+20h] [ebp-10h]
  int v34; // [esp+24h] [ebp-Ch] BYREF
  int v35; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++MEMORY[0xA8E7AC]; /*0x684c3f*/
  for ( i = 0; i < MEMORY[0xA8EB50]; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8EB44] + i) + 1248))(*((_DWORD *)MEMORY[0xA8EB44] + i)); /*0x684c58*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x684c6f*/
  if ( !MEMORY[0xA8ED6B] ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar(&MEMORY[0x87F7E8], a1, 1); /*0x684c88*/
    if ( !MEMORY[0xA8B238][0] ) /*0x684c94*/
    {
      if ( MEMORY[0x8A38E0] ) /*0x684ca7*/
        v2 = *((_DWORD *)MEMORY[0xA8B230] + 132); /*0x684ca9*/
      else
        v2 = *((_DWORD *)MEMORY[0xA8B230] + 131); /*0x684cb1*/
      v3 = *(_DWORD *)((char *)MEMORY[0xA8B230] + 4 * v2 + 1586); /*0x684cb7*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466) = v3; /*0x684cbe*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466); /*0x684cd4*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462); /*0x684ce9*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13454) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458); /*0x684d03*/
      v34 = ((__int16)v3 << 8) + 128; /*0x684d09*/
      v35 = (SHIWORD(v3) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v34); /*0x684d3e*/
      TacticalClass::SetPositionThunk((int)&v34); /*0x684d42*/
    }
  }
  v4 = MEMORY[0xB0E790]; /*0x684d47*/
  for ( j = 0; j < MEMORY[0xB0E790]; ++j ) /*0x684d50*/
  {
    v6 = (_DWORD *)*((_DWORD *)MEMORY[0xB0E784] + j); /*0x684d5c*/
    if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x684d68*/
    {
      v7 = TeamClass::FindOrCreate(v6); /*0x684d77*/
      if ( dword_8B41B8 < unk_8B41B0 /*0x684da9*/
        || (unk_8B41B5 || !unk_8B41B0)
        && unk_8B41BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_8B41A8 + 8))(
             &unk_8B41A8,
             unk_8B41B0 + unk_8B41BC,
             0) )
      {
        v8 = dword_8B41B8++; /*0x684db6*/
        *((_DWORD *)unk_8B41AC + v8) = v7; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 0x10) != 0 ) /*0x684dd1*/
    {
      v9 = TeamClass::FindOrCreate(v6); /*0x684de0*/
      if ( MEMORY[0x8B40D8] < MEMORY[0x8B40D0] /*0x684e13*/
        || (MEMORY[0x8B40D5] || !MEMORY[0x8B40D0])
        && MEMORY[0x8B40DC] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B40C8] + 8))(
             &MEMORY[0x8B40C8],
             MEMORY[0x8B40D0] + MEMORY[0x8B40DC],
             0) )
      {
        v10 = MEMORY[0x8B40D8]++; /*0x684e20*/
        *((_DWORD *)MEMORY[0x8B40CC] + v10) = v9; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 8) != 0 ) /*0x684e3b*/
    {
      v11 = TeamClass::FindOrCreate(v6); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v13 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        v14 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v13 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v13)
          && (v15 = *(_DWORD *)(Owner + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v13 + v15, 0) )
        {
          v16 = v14[4]; /*0x684e93*/
          v17 = v14[1]; /*0x684e96*/
          v14[4] = v16 + 1; /*0x684e9c*/
          *(_DWORD *)(v17 + 4 * v16) = v11; /*0x684e9f*/
        }
      }
    }
    v4 = MEMORY[0xB0E790]; /*0x684ea2*/
  }
  v18 = 0; /*0x684eb6*/
  --MEMORY[0xA8E7AC]; /*0x684ebb*/
  if ( v4 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v19 = *((_DWORD *)MEMORY[0xB0E784] + v18); /*0x684ec8*/
      if ( (unsigned __int8)TagClass::HasValidHouse(v19) ) /*0x684ecd*/
      {
        v20 = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(v19 + 160) + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v20 + 636); /*0x684eed*/
      }
      ++v18; /*0x684ef8*/
    }
    while ( v18 < MEMORY[0xB0E790] ); /*0x684efb*/
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13490) ) /*0x684f02*/
  {
    v21 = 0; /*0x684f12*/
    for ( k = 0; v21 < HouseClass_Count; k = v21 ) /*0x684f1a*/
    {
      v22 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v21]; /*0x684f23*/
      if ( v22 ) /*0x684f28*/
      {
        v23 = (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 24))(v22 + 36); /*0x684f34*/
        v24 = *(_DWORD *)MEMORY[0xB0F4EC]->__pad_0; /*0x684f3b*/
        if ( v23 > *(_DWORD *)(*(_DWORD *)MEMORY[0xB0F4EC]->__pad_0 + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 28))(v22 + 36) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(1.0, 0); /*0x684f58*/
            v25 = *(_DWORD *)(v24 + 184); /*0x684f5d*/
            v23 -= v25; /*0x684f63*/
          }
          while ( v23 > v25 ); /*0x684f69*/
        }
        v21 = k; /*0x684f6b*/
      }
      ++v21; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(); /*0x684f8e*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x684fa9*/
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  MapClass::ProcessRegion(&MEMORY[0x87F7E8]); /*0x684fc7*/
  Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x684fd1*/
  MapClass::BuildSubzones(&MEMORY[0x87F7E8]); /*0x684fdb*/
  MarkCliffEdgePassability(&MEMORY[0x87F7E8]); /*0x684fe5*/
  if ( !MEMORY[0xA8ED78] ) /*0x684ff0*/
  {
    v27 = __2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v27 ) /*0x685003*/
    {
      v34 = 2688; /*0x68500f*/
      v35 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v28 = WarheadTypeClass::applyDamage(MEMORY[0x83DA90]); /*0x68501b*/
      MEMORY[0xA8ED78] = ParticleSystemClass::Constructor( /*0x685040*/
                           (int)v27,
                           *((_DWORD *)MEMORY[0xA83D6C] + v28),
                           &v34,
                           0,
                           0,
                           &stru_B05488,
                           0);
    }
    else
    {
      MEMORY[0xA8ED78] = 0; /*0x685047*/
    }
  }
  if ( MEMORY[0x8871E0][1].?[11] ) /*0x685052*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x685063*/
    for ( n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); n; n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x685076*/
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x8871E0][1].?[10] - 1) ) /*0x68509e*/
        {
          v30 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v30 ) /*0x6850b8*/
          {
            v31 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)n + 72))(n, &v34); /*0x6850cd*/
            AnimClass::ctor(v30, (void *)MEMORY[0x8871E0][1].?[11], v31, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateNormal); /*0x6850fd*/
  return Map_Init(MEMORY[0x8871E0]->DetailBufferZoneWidth); /*0x685110*/
}


// ==== 0x00685120  ObjectClass::Game_Load  this=ObjectClass  sig=csp ====
int sub_685120()
{
  int v0; // ecx

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(*((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(*((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x685147*/
  LoadFactoryClassTheaterSHP(*((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x685158*/
  RadarClass::InitializeHashTable((int *)&MEMORY[0x87F7E8]); /*0x685162*/
  if ( MEMORY[0xB0EA80] != -1 ) /*0x685176*/
  {
    if ( (int)MEMORY[0xA8ED84] - MEMORY[0xB0EA80] >= MEMORY[0xB0EA88] ) /*0x685189*/
      v0 = 0; /*0x68518f*/
    else
      v0 = MEMORY[0xB0EA88] - ((_DWORD)MEMORY[0xA8ED84] - MEMORY[0xB0EA80]); /*0x68518b*/
    MEMORY[0xB0EA88] = v0; /*0x685191*/
  }
  MEMORY[0xB0EA80] = (int)MEMORY[0xA8ED84]; /*0x6851a1*/
  CellClass::setOverlayType((void **)MEMORY[0x87E8B8], (int)&MEMORY[0x87F8D4]); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(); /*0x6851b1*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}


// ==== 0x006851F0  ObjectClass::ResetScenario  this=ObjectClass  sig=csp ====
int ScenarioClass_Reset()
{
  int i; // esi
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  char *v6; // edi
  int j; // esi
  _BYTE *v8; // eax
  void *v9; // eax
  IPersistStream *v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  int result; // eax

  *((_DWORD *)MEMORY[0xA8B230] + 133) = 1000000; /*0x6851fc*/
  *((_BYTE *)MEMORY[0xA8B230] + 536) = 1; /*0x68520c*/
  MEMORY[0x83D834] = 0x4000; /*0x685219*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  HouseClass_Player = 0; /*0x685231*/
  ScenarioClass::InitTimer((int)MEMORY[0xA8B230]); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = MEMORY[0xA8E978] - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)MEMORY[0xA8E96C] + i) + 4) + 12))(*((_DWORD *)MEMORY[0xA8E96C] /*0x68526c*/
                                                                                               + i) + 4) == 18
      && i < MEMORY[0xA8E978] )
    {
      v1 = i; /*0x68526f*/
      if ( i < --MEMORY[0xA8E978] ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v1; /*0x685281*/
          *((_DWORD *)MEMORY[0xA8E96C] + v1 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v1); /*0x685285*/
        }
        while ( v1 < MEMORY[0xA8E978] ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v2 = 0; /*0x6852a1*/
  if ( MEMORY[0xA8ED38] > 0 ) /*0x6852a5*/
  {
    v3 = MEMORY[0xA8E970]; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v4 = *((_DWORD *)MEMORY[0xA8ED2C] + v2); /*0x6852b2*/
      if ( MEMORY[0xA8E978] < v3 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !MEMORY[0xA8E975] && v3 || MEMORY[0xA8E97C] <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E968] + 8))( /*0x6852e4*/
             &MEMORY[0xA8E968],
             v3 + MEMORY[0xA8E97C],
             0) )
      {
LABEL_14:
        v5 = MEMORY[0xA8E978]++; /*0x6852f1*/
        *((_DWORD *)MEMORY[0xA8E96C] + v5) = v4; /*0x685300*/
      }
      v3 = MEMORY[0xA8E970]; /*0x685303*/
LABEL_16:
      ++v2; /*0x685308*/
    }
    while ( v2 < MEMORY[0xA8ED38] ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((int *)&MEMORY[0x87F7E8]); /*0x685313*/
  MEMORY[0x87F848] = 0; /*0x685322*/
  if ( MEMORY[0x87F83C] && MEMORY[0x87F845] ) /*0x685332*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F83C]); /*0x685335*/
    MEMORY[0x87F83C] = 0; /*0x68533d*/
  }
  MEMORY[0x87F845] = 0; /*0x685343*/
  MEMORY[0x87F840] = 0; /*0x685349*/
  Map_Reset_6E5570(); /*0x68534f*/
  v6 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v8 = MEMORY[0xA8B230]; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)MEMORY[0xA8B230] + j + 7344) ) /*0x685365*/
    {
      *((_BYTE *)MEMORY[0xA8B230] + j + 7344) = 0; /*0x68536e*/
      v8[13482] = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v6); /*0x68537e*/
    }
    ++v6; /*0x685386*/
  }
  if ( MEMORY[0x887324] ) /*0x685398*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x68539e*/
  v9 = __2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v9 ) /*0x6853b0*/
    v10 = (IPersistStream *)TacticalMap::Construct((int)v9); /*0x6853b4*/
  else
    v10 = 0; /*0x6853bb*/
  MEMORY[0x887324] = v10; /*0x6853bf*/
  Map_Setup_6DA980(v10); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( MEMORY[0xA8E370] ) /*0x6853d6*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8E364] + 44))(*(_DWORD *)MEMORY[0xA8E364]) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8E364] + 8))(*(_DWORD *)MEMORY[0xA8E364]); /*0x6853f3*/
    }
    else if ( *(_DWORD *)MEMORY[0xA8E364] ) /*0x6853fe*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E364] + 32))(*(_DWORD *)MEMORY[0xA8E364], 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( MEMORY[0xB0E790] ) /*0x685421*/
  {
    if ( *(_DWORD *)MEMORY[0xB0E784] ) /*0x685429*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0E784] + 32))(*(_DWORD *)MEMORY[0xB0E784], 1); /*0x685433*/
  }
  dword_8B41B8 = 0; /*0x685443*/
  if ( unk_8B41AC && unk_8B41B5 ) /*0x685453*/
  {
    __3_YAXPAX_Z(unk_8B41AC); /*0x685456*/
    unk_8B41AC = 0; /*0x68545e*/
  }
  unk_8B41B5 = 0; /*0x685469*/
  unk_8B41B0 = 0; /*0x685471*/
  MEMORY[0x8B40D8] = 0; /*0x685477*/
  if ( MEMORY[0x8B40CC] && MEMORY[0x8B40D5] ) /*0x685485*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40CC]); /*0x685488*/
    MEMORY[0x8B40CC] = 0; /*0x685490*/
  }
  MEMORY[0x8B40D5] = 0; /*0x68549b*/
  MEMORY[0x8B40D0] = 0; /*0x6854a1*/
  *((_DWORD *)MEMORY[0xA8B230] + 3433) = 3600; /*0x6854a7*/
  *((_DWORD *)MEMORY[0xA8B230] + 3434) = *((_DWORD *)MEMORY[0xA8B230] + 3433); /*0x6854bc*/
  *((_DWORD *)MEMORY[0xA8B230] + 3435) = *((_DWORD *)MEMORY[0xA8B230] + 3433); /*0x6854cd*/
  *((_BYTE *)MEMORY[0xA8B230] + 13744) = 0; /*0x6854d8*/
  *((_BYTE *)MEMORY[0xA8B230] + 13775) = 0; /*0x6854e4*/
  *((_BYTE *)MEMORY[0xA8B230] + 13806) = 0; /*0x6854f0*/
  *((_BYTE *)MEMORY[0xA8B230] + 13837) = 0; /*0x6854fb*/
  Map_Reset_5549A0(); /*0x685501*/
  Map_Reset(); /*0x685506*/
  sub_4C5470(); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&MEMORY[0x87F5D8]); /*0x685524*/
  LoadGame::CleanupArray(&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots(MEMORY[0x887888]); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  MEMORY[0x87F8D4] = 0; /*0x68554f*/
  MEMORY[0x87F8D8] = 0; /*0x685554*/
  MEMORY[0x87F8DC] = 0; /*0x68555a*/
  MEMORY[0x87F8E0] = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick(&MEMORY[0x87F7E8]); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(int *))(MEMORY[0x87F778] + 12))(&MEMORY[0x87F778]); /*0x685590*/
  Debug::Log(); /*0x685598*/
  MEMORY[0xA8ECC8] = 0; /*0x6855a7*/
  if ( MEMORY[0xA8ECBC] && MEMORY[0xA8ECC5] ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECBC]); /*0x6855b8*/
    MEMORY[0xA8ECBC] = 0; /*0x6855c0*/
  }
  MEMORY[0xA8ECC5] = 0; /*0x6855cb*/
  MEMORY[0xA8ECC0] = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v11 = (char *)MEMORY[0xA8B230] + 1586; /*0x6855e4*/
  v12 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v11++ = dword_B05458; /*0x6855f4*/
    --v12; /*0x6855f9*/
  }
  while ( v12 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( MEMORY[0xA8ED78] ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(); /*0x685618*/
    if ( MEMORY[0xA8ED78] ) /*0x685625*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8ED78] + 32))(MEMORY[0xA8ED78], 1); /*0x68562b*/
    MEMORY[0xA8ED78] = 0; /*0x68562e*/
  }
  *((_BYTE *)MEMORY[0xA8B230] + 536) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  *((_DWORD *)MEMORY[0xA8B230] + 133) = 1000000; /*0x685659*/
  return result; /*0x685657*/
}


// ==== 0x00685670  Scenario::EndGameFlow  this=Scenario  sig=csp ====
__int16 __usercall Scenario_EndGameFlow@<ax>(char a1@<bl>)
{
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  wchar_t *String; // eax
  int v9; // eax
  int v10; // ecx
  char v11; // al
  __int16 result; // ax
  Iostream_init *v13; // eax
  int v14; // ecx
  int v15; // ecx
  _BYTE *v16; // ecx
  int v17; // ecx
  void *v18; // eax
  LPARAM v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+Bh] [ebp-81h] BYREF
  _DWORD v28[8]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v29[8]; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD v30[8]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v31[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( MEMORY[0xA8B238] && MEMORY[0xA8B238] != 5 && (MEMORY[0xA8D5F8] & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(); /*0x68568d*/
    Map_Get_55CF10(); /*0x685692*/
  }
  v1 = (char *)MEMORY[0xA8B230] + 1556; /*0x68569f*/
  MEMORY[0xA8ED5C] = 0; /*0x6856a5*/
  MEMORY[0xA8E378] = 0; /*0x6856ac*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    v3 = v1[2]; /*0x6856c7*/
    v4 = Ticks - *v1; /*0x6856ca*/
    *v1 = -1; /*0x6856cc*/
    v1[2] = v4 + v3; /*0x6856d0*/
  }
  AsyncIO::Shutdown(); /*0x6856d3*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], MEMORY[0x88730C], 0); /*0x6856e8*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x6856f3*/
  Mission::SetAndCall((int *)&MEMORY[0x87F7E8], 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x68570c*/
  Audio::GetFlag(MEMORY[0x87E758]); /*0x685715*/
  Audio::WaitForCallback(MEMORY[0x87E758]); /*0x685720*/
  v5 = MEMORY[0x887340]; /*0x68572a*/
  if ( MEMORY[0x887338] != -1 ) /*0x685732*/
    v5 += Timer::GetTicks() - MEMORY[0x887338]; /*0x685744*/
  v6 = v5 + 300; /*0x685746*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68574c*/
  {
    v5 = MEMORY[0x887340]; /*0x68575a*/
    if ( MEMORY[0x887338] != -1 ) /*0x685762*/
      v5 += Timer::GetTicks() - MEMORY[0x887338]; /*0x685774*/
    if ( v6 <= v5 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x6857a9*/
  if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] && MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x6857ca*/
  {
    Debug::Log(MEMORY[0x83D924]); /*0x6857d1*/
    ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x6857e5*/
  }
  v7 = MEMORY[0xA8B238]; /*0x6857ea*/
  if ( !MEMORY[0xA8B238] ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  a1 = 0; /*0x685802*/
  if ( (MEMORY[0xA8D5F8] & 2) != 0 ) /*0x685807*/
  {
    v10 = MEMORY[0xA8B23C]; /*0x6858c6*/
LABEL_36:
    MEMORY[0xA8D610] = 0; /*0x6858ce*/
    if ( v10 ) /*0x6858d7*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 164))(v10, 1); /*0x6858dd*/
    MEMORY[0xA8E9A0] = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &MEMORY[0x887734]); /*0x685900*/
  }
  MEMORY[0xA8D57C] = (wchar_t *)((char *)MEMORY[0xA8D57C] + 1); /*0x685817*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x68581d*/
  {
    String = GetStringCSF(MEMORY[0x83DB0C], 0, MEMORY[0x83D838], 2024); /*0x685830*/
    ChatMessageWOL(1, String); /*0x685839*/
    v7 = MEMORY[0xA8B238]; /*0x68583e*/
  }
  v5 = 0; /*0x685849*/
  if ( !MEMORY[0xA8B23C] ) /*0x68584d*/
  {
    MEMORY[0xA8D610] = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(unsigned __int8 (**)(void))(*(_DWORD *)MEMORY[0xA8B23C] + 8))() ) /*0x68585a*/
  {
    MEMORY[0xA8D610] = 0; /*0x68586c*/
LABEL_28:
    v9 = Scenario::ResetDisplayArrays(&v27); /*0x685884*/
    Map_Load_5C9720(v9); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
LABEL_29:
  v10 = MEMORY[0xA8B23C]; /*0x685890*/
  if ( MEMORY[0xA8B23C] ) /*0x685898*/
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 168))(MEMORY[0xA8B23C]); /*0x68589c*/
    v10 = MEMORY[0xA8B23C]; /*0x6858a2*/
    a1 = v11; /*0x6858a8*/
  }
  if ( ++MEMORY[0xA8D588] >= 4 ) /*0x6858b8*/
    MEMORY[0xA8D588] = 3; /*0x6858ba*/
  if ( !a1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 172))(v10); /*0x685903*/
  ChatMessageWOL(0, &MEMORY[0x887734]); /*0x685910*/
LABEL_40:
  Movie::PlayWrapper(*((_DWORD *)MEMORY[0xA8B230] + 1295), -1, 3, 1, 1, 1); /*0x685915*/
  if ( (MEMORY[0xA8D5F8] & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x685940*/
  if ( !*((_BYTE *)MEMORY[0xA8B230] + 13486) ) /*0x68594b*/
  {
    v13 = __0Iostream_init_QAE_XZ_5((Iostream_init *)&v27); /*0x685959*/
    Map_Load_6C8E80(v13); /*0x685960*/
  }
  v14 = *((_DWORD *)MEMORY[0xA8B230] + 1298); /*0x68596b*/
  if ( v14 != -1 ) /*0x685973*/
    Movie::PlayWrapper(v14, -1, 3, 1, 1, 1); /*0x68597d*/
  v15 = *((_DWORD *)MEMORY[0xA8B230] + 1299); /*0x685987*/
  if ( v15 != -1 ) /*0x68598f*/
    Movie::PlayWrapper(v15, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !(unsigned __int8)CopyProtection::CheckProtectedData() /*0x6859b1*/
    || (v16 = MEMORY[0xA8B230], *((_BYTE *)MEMORY[0xA8B230] + 13487)) )
  {
    MEMORY[0xA8E9A0] = 0; /*0x685b33*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x685b49*/
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13484) ) /*0x6859bf*/
  {
    v17 = *((_DWORD *)MEMORY[0xA8B230] + 3379); /*0x6859c9*/
    if ( v17 != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v17) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(a1, 3, v5); /*0x6859ee*/
    MEMORY[0xA8E9A0] = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x685a0f*/
  }
  if ( MEMORY[0xA8B238] != 3 && MEMORY[0xA8B238] != 4 || !MEMORY[0xA8B23C] ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C]) ) /*0x685a2b*/
  {
    v16 = MEMORY[0xA8B230]; /*0x685a32*/
LABEL_58:
    if ( v16[13488] ) /*0x685a38*/
    {
      if ( v16[7385] ) /*0x685a42*/
        Map_Delete_5ADE20(v16, v16 + 264); /*0x685a52*/
      else
        Map_Delete_5ADE20(v16, v16 + 4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x685a6b*/
      Map_Delete(MEMORY[0xA8B230]); /*0x685a74*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x685a81*/
    }
  }
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x685a84*/
LABEL_64:
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x685a8f*/
  Scenario::CopyLocalScenarioData(&MEMORY[0x8A38E0]); /*0x685a9f*/
  ++*((_DWORD *)MEMORY[0xA8B230] + 1173); /*0x685ab0*/
  if ( (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) /*0x685ada*/
    && MEMORY[0xA8B23C]
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C]) )
  {
    if ( MEMORY[0xA8B238] == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 4))(MEMORY[0x887628]); /*0x685af5*/
      if ( MEMORY[0x887628] ) /*0x685b00*/
        (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x685b06*/
      MEMORY[0x887628] = 0; /*0x685b0d*/
      v18 = __2_YAPAXI_Z(0x3F310u); /*0x685b13*/
      if ( v18 ) /*0x685b1d*/
        MEMORY[0x887628] = IPXInterfaceClass::Construct(v18); /*0x685b26*/
      else
        MEMORY[0x887628] = 0; /*0x685b4a*/
    }
    WinsockInterface::Init((_DWORD *)MEMORY[0x887628]); /*0x685b56*/
    v19 = MEMORY[0xA8B274]; /*0x685b69*/
    qmemcpy(v31, &MEMORY[0xA8DA90], sizeof(v31)); /*0x685b6f*/
    qmemcpy(v29, MEMORY[0xA8B2BC], sizeof(v29)); /*0x685b7f*/
    qmemcpy(v28, MEMORY[0xA8B29C], sizeof(v28)); /*0x685b8f*/
    qmemcpy(v30, MEMORY[0xA8B27C], sizeof(v30)); /*0x685b9f*/
    result = InitNetworkGameState(); /*0x685ba1*/
    if ( !(_BYTE)result ) /*0x685ba8*/
    {
      if ( MEMORY[0x887628] ) /*0x685bb2*/
      {
        result = (**(int (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x685bb8*/
        MEMORY[0x887628] = 0; /*0x685bba*/
      }
      MEMORY[0xA8E9A0] = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    MEMORY[0xA8B274] = v19; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v21 = v28[i]; /*0x685be2*/
      MEMORY[0xA8B27C][i] = v30[i]; /*0x685be6*/
      v22 = v29[i]; /*0x685bec*/
      MEMORY[0xA8B29C][i] = v21; /*0x685bf0*/
      v23 = v31[i]; /*0x685bf6*/
      MEMORY[0xA8B2BC][i] = v22; /*0x685bfa*/
      *(LPARAM *)((char *)&MEMORY[0xA8DA90] + i * 4) = v23; /*0x685c00*/
    }
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x685c14*/
  }
  MEMORY[0xA8E9A0] = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !MEMORY[0xA8E9A0] ) /*0x685c28*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x685c32*/
  while ( !(unsigned __int8)ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
                              (char *)MEMORY[0xA8B230] + 4700,
                              *((_DWORD *)MEMORY[0xA8B230] + 3379)) )
    ; /*0x685c5d*/
  if ( (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) /*0x685c9d*/
    && MEMORY[0xA8B23C]
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C]) )
  {
    SessionClass::CreateConnections(&MEMORY[0xA8B238]); /*0x685cad*/
    if ( MEMORY[0xA8B238] == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2) >= 0xF ) /*0x685ccc*/
        v24 = Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2; /*0x685cdf*/
      else
        v24 = 15; /*0x685cce*/
      Network::SetConnectionParams(MEMORY[0xA8E9C0], v24, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2) >= 0x3C ) /*0x685d05*/
        v25 = Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2; /*0x685d18*/
      else
        v25 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(v25, -1, 600); /*0x685d27*/
    }
    else if ( MEMORY[0xA8B238] == 4 && !MEMORY[0xA8B570] ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2) >= 0x3C ) /*0x685d4c*/
        v26 = Network::GetLobbyStatus(MEMORY[0xA8E9C0]) + 2; /*0x685d5f*/
      else
        v26 = 60; /*0x685d4e*/
      Network::SetConnectionParams(MEMORY[0xA8E9C0], v26, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore(&MEMORY[0x8A38E0]); /*0x685d7a*/
  if ( MEMORY[0x887368] ) /*0x685d87*/
    Tooltip::Enable((void *)MEMORY[0x887368], MEMORY[0xA8EB80]); /*0x685d90*/
  TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x685d9a*/
  return FadePalette(&MEMORY[0x885780], 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}


// ==== 0x00685DC0  Scenario::EndGame  this=Scenario  sig=csp ====
char __usercall Scenario::EndGame@<al>(int a1@<edi>)
{
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax
  int v5; // esi
  int v6; // edi
  int esi13; // esi
  CellStruct *v7; // eax
  char v9; // bl
  wchar_t *StringCSF; // eax
  SkirmishDialog *v11; // ecx
  char v12; // al
  LONG v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  _DWORD *v16; // eax
  int v17; // ebp
  int i; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wchar_t *v26; // [esp-1Ah] [ebp-A8h]
  wchar_t *v27; // [esp-16h] [ebp-A4h]
  char v29; // [esp+9h] [ebp-85h] BYREF
  CampaignScore *v30; // [esp+Ah] [ebp-84h]
  _DWORD v31[8]; // [esp+Eh] [ebp-80h] BYREF
  _DWORD v32[8]; // [esp+2Eh] [ebp-60h] BYREF
  _DWORD v33[8]; // [esp+4Eh] [ebp-40h] BYREF
  _DWORD v34[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] /*0x685ddb*/
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5
    && (HouseClass_Player.__pad_5568[17220] & 2) == 0 )
  {
    RunNetworkGameLoop(); /*0x685ddd*/
    Map_Get_55CF10(); /*0x685de2*/
  }
  v1 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556); /*0x685def*/
  HouseClass_Player.__pad_5568[23208] = 0; /*0x685df5*/
  HouseClass_Player.__pad_5568[20676] = 0; /*0x685dfc*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556) != -1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    v3 = v1[2]; /*0x685e17*/
    v4 = Ticks - *v1; /*0x685e1a*/
    *v1 = -1; /*0x685e1c*/
    v1[2] = v4 + v3; /*0x685e20*/
  }
  AsyncIO::Shutdown(); /*0x685e23*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 64))( /*0x685e38*/
    *(_DWORD *)&stru_87C374.__pad_579C[23344],
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x685e43*/
  Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x685e5c*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[21672] != *(_DWORD *)&HouseClass_Player.__pad_5568[22744] /*0x685e7b*/
    && *(_DWORD *)&stru_87C374.__pad_579C[21676] != *(_DWORD *)&HouseClass_Player.__pad_5568[22748] )
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(*(ObjectClass **)&HouseClass_Player.__pad_5568[22744], *(int *)&HouseClass_Player.__pad_5568[22748]); /*0x685e96*/
  }
  Audio::GetFlag(*(unsigned int **)&stru_87C374.__pad_14B0[3892]); /*0x685ea1*/
  Audio::WaitForCallback(*(int *)&stru_87C374.__pad_14B0[3892]); /*0x685eac*/
  v5 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x685eb6*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x685ebe*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x685ed0*/
  v6 = v5 + 300; /*0x685ed2*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x685ed8*/
  {
    esi13 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x685ee6*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x685eee*/
      esi13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x685f00*/
    if ( v6 <= esi13 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x685f35*/
  v7 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x685f3a*/
  v9 = 0; /*0x685f41*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x685f52*/
  {
    v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x686014*/
LABEL_36:
    *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0; /*0x68601a*/
    if ( v11 ) /*0x686023*/
      (*(void (__thiscall **)(SkirmishDialog *, _DWORD))(*(_DWORD *)v11->__pad_0 + 164))(v11, 0); /*0x686028*/
    HouseClass_Player.__pad_5568[22252] = 0; /*0x686035*/
    LOBYTE(v13) = ChatMessageWOL(0, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x68603c*/
    return v13; /*0x68604b*/
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[17096]; /*0x685f62*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x685f68*/
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[32080], 0, &stru_830620.__pad_579C[31356], 2492); /*0x685f7b*/
    ChatMessageWOL(1, StringCSF); /*0x685f84*/
    v7 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x685f89*/
  }
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x685f96*/
  {
    *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v7 != (CellStruct *)3 && v7 != (CellStruct *)4 /*0x685fa4*/
    || !(*(unsigned __int8 (**)(void))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 8))() )
  {
    *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0; /*0x685fb6*/
LABEL_28:
    Scenario::ResetDisplayArrays(&v29); /*0x685fce*/
    Map_Load_5C9720(0, -1, v6); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
LABEL_29:
  v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x685fda*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x685fe2*/
  {
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 168))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x685fe6*/
    v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x685fec*/
    v9 = v12; /*0x685ff2*/
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[17108]; /*0x685ffd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[17108] >= 4 ) /*0x686002*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[17108] = 3; /*0x686004*/
  if ( !v9 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v11->__pad_0 + 172))(v11); /*0x68604e*/
  ChatMessageWOL(0, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x68605b*/
LABEL_40:
  Movie::PlayWrapper(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 5184), -1, v6, 1, 1, 1); /*0x686060*/
  LOBYTE(v13) = Screen::Capture(1, 0, v9, -1); /*0x68607c*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] /*0x6860ec*/
    || (HouseClass_Player.__pad_5568[17220] & 2) != 0
    || (v30 = &stru_82083C,
        v27 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_830620.__pad_579C[31356], 2559),
        v26 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_830620.__pad_579C[31356], 2559),
        v14 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[32104], 0, &stru_830620.__pad_579C[31356], 2559),
        (v13 = Dialog::ShowMessageBox((int)v14, v26, (Movie *)v27, 0, 0, a1)) != 0) )
  {
    if ( !v9 ) /*0x6860f0*/
    {
      HouseClass_Player.__pad_5568[22252] = 0; /*0x6863c3*/
      return v13; /*0x6863c3*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x6860fd*/
  {
    v15 = GetStringCSF(aTxtAwayLoading, 0, &stru_830620.__pad_579C[31356], 2566); /*0x686110*/
    ChatMessageWOL(1, v15); /*0x686119*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 3 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x686141*/
    || !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 8))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 4))(*(_DWORD *)&stru_87C374.__pad_579C[23320]); /*0x68615d*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] ) /*0x686168*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])( /*0x68616e*/
        *(_DWORD *)&stru_87C374.__pad_579C[23320],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0; /*0x686175*/
    v16 = (_DWORD *)__2_YAPAXI_Z(0x3F310u); /*0x68617b*/
    if ( v16 ) /*0x686185*/
      *(_DWORD *)&stru_87C374.__pad_579C[23320] = IPXInterfaceClass::Construct(v16); /*0x68618e*/
    else
      *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0; /*0x686195*/
  }
  WinsockInterface::Init(*(_DWORD **)&stru_87C374.__pad_579C[23320]); /*0x6861a1*/
  v17 = *(_DWORD *)&HouseClass_Player.__pad_5568[8128]; /*0x6861b4*/
  qmemcpy(v34, &HouseClass_Player.__pad_5568[18396], sizeof(v34)); /*0x6861ba*/
  qmemcpy(v32, &HouseClass_Player.__pad_5568[8200], sizeof(v32)); /*0x6861ca*/
  qmemcpy(v33, &HouseClass_Player.__pad_5568[8168], sizeof(v33)); /*0x6861da*/
  qmemcpy(v31, &HouseClass_Player.__pad_5568[8136], sizeof(v31)); /*0x6861ea*/
  LOBYTE(v13) = InitNetworkGameState(); /*0x6861ec*/
  if ( (_BYTE)v13 ) /*0x6861f3*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = v17; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v19 = v33[i]; /*0x686246*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[i * 4 + 8136] = v31[i]; /*0x68624a*/
      v20 = v32[i]; /*0x686250*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[i * 4 + 8168] = v19; /*0x686254*/
      v21 = v34[i]; /*0x68625a*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[i * 4 + 8200] = v20; /*0x68625e*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[i * 4 + 18396] = v21; /*0x686264*/
    }
    Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x686278*/
LABEL_65:
    ScenarioClass::LoadScenarioAndStart( /*0x686282*/
      (AnimClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700),
      0,
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516));
    if ( (*(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) /*0x6862be*/
      && *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 8))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
    {
      SessionClass::CreateConnections(&HouseClass_Player.__pad_5568[8068]); /*0x6862ce*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0xF ) /*0x6862ed*/
          v22 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2; /*0x686300*/
        else
          v22 = 15; /*0x6862ef*/
        Network::SetConnectionParams( /*0x686311*/
          (int *)&HouseClass_Player.__pad_5568[22284],
          (IUnknown *)v22,
          -1,
          600,
          (CellStruct *)1);
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x3C ) /*0x686326*/
          v23 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2; /*0x686339*/
        else
          v23 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(&HouseClass_Player.__pad_5568[22284], v23, -1, 600); /*0x686348*/
      }
      else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && !*(_DWORD *)&HouseClass_Player.__pad_5568[8892] ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x3C ) /*0x68636c*/
          v24 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2; /*0x68637f*/
        else
          v24 = 60; /*0x68636e*/
        Network::SetConnectionParams( /*0x686390*/
          (int *)&HouseClass_Player.__pad_5568[22284],
          (IUnknown *)v24,
          -1,
          600,
          (CellStruct *)1);
      }
    }
    GameResult::CalcScore((int)&stru_89E138.__pad_579C[12]); /*0x68639a*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22616] ) /*0x6863a7*/
      Tooltip::Enable(*(void **)&stru_87C374.__pad_579C[22616], HouseClass_Player.__pad_5568[22732]); /*0x6863af*/
    LOBYTE(v13) = TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] ) /*0x6861fd*/
  {
    LOBYTE(v13) = (***(int (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])( /*0x686203*/
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
    *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0; /*0x686205*/
  }
  HouseClass_Player.__pad_5568[22252] = 0; /*0x68620f*/
LABEL_60:
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x68621d*/
    LOBYTE(v13) = ChatMessageWOL(0, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x68622a*/
  return v13; /*0x686045*/
}


// ==== 0x006863E0  GameFrameCheck_Check  this=-  sig=ida-proto ====
int sub_6863E0()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // eax
  DWORD v7; // [esp+0h] [ebp-18h]

  MouseClass::LoadCursors(); /*0x6863e3*/
  if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] && MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x686404*/
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x68641f*/
  }
  MEMORY[0xA8ED5C] = 0; /*0x68642a*/
  MEMORY[0xA8E378] = 0; /*0x686433*/
  if ( MEMORY[0x887368] ) /*0x68643a*/
    Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x68643e*/
  v0 = (char *)MEMORY[0xA8B230] + 1556; /*0x686450*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x686459*/
  {
    Ticks = Timer::GetTicks(); /*0x68645e*/
    v2 = v0[2]; /*0x686465*/
    v3 = Ticks - *v0; /*0x686468*/
    *v0 = -1; /*0x68646a*/
    v0[2] = v3 + v2; /*0x686472*/
  }
  AsyncIO::Shutdown(); /*0x686475*/
  Timer::GetTicks(); /*0x68647e*/
  v7 = Timer::GetTicks(); /*0x68649d*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6864b4*/
  AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((int *)&MEMORY[0x87F7E8], 0, 0); /*0x6864d8*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)MEMORY[0xA8B230] + 4700, 0, *((_DWORD *)MEMORY[0xA8B230] + 3379)); /*0x6864fc*/
  GameResult::CalcScore((int)&MEMORY[0x8A38E0]); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v4 = 60; /*0x68650f*/
    if ( v7 != -1 ) /*0x686516*/
    {
      v5 = Timer::GetTicks() - v7; /*0x686521*/
      if ( v5 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v4 = 60 - v5; /*0x686529*/
    }
    if ( v4 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x686536*/
  if ( MEMORY[0x887368] ) /*0x68654a*/
    Tooltip::Enable((void *)MEMORY[0x887368], MEMORY[0xA8EB80]); /*0x686553*/
  return TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x686562*/
}


// ==== 0x00686570  ObjectClass::GameFrameCheck_Check  this=ObjectClass  sig=csp ====
char sub_686570()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  char result; // al

  v0 = (char *)MEMORY[0xA8B230] + 1556; /*0x686579*/
  MEMORY[0xA8ED5C] = 0; /*0x68657f*/
  MEMORY[0xA8E378] = 0; /*0x686585*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x68658e*/
  {
    Ticks = Timer::GetTicks(); /*0x686593*/
    v2 = v0[2]; /*0x68659a*/
    v3 = Ticks - *v0; /*0x68659d*/
    *v0 = -1; /*0x68659f*/
    v0[2] = v3 + v2; /*0x6865a7*/
  }
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = 1; /*0x6865b0*/
  AsyncIO::Shutdown(); /*0x6865ba*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6865c5*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], MEMORY[0x88730C], 0); /*0x6865d9*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x6865e4*/
  Mission::SetAndCall((int *)&MEMORY[0x87F7E8], 0, 0); /*0x6865ee*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6865fa*/
  Audio::GetFlag((unsigned int *)MEMORY[0x87E758]); /*0x686605*/
  VoxClass::FindAndPlay(MEMORY[0x83DB34], -1); /*0x686616*/
  Audio::WaitForCallback(MEMORY[0x87E758]); /*0x686621*/
  v4 = MEMORY[0x887340]; /*0x68662b*/
  if ( MEMORY[0x887338] != -1 ) /*0x686634*/
    v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x686646*/
  v5 = v4 + 300; /*0x686649*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68664f*/
  {
    v6 = MEMORY[0x887340]; /*0x68665d*/
    if ( MEMORY[0x887338] != -1 ) /*0x686666*/
      v6 += Timer::GetTicks() - MEMORY[0x887338]; /*0x686678*/
    if ( v5 <= v6 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x6866ad*/
  result = MEMORY[0x886FB8]; /*0x6866b2*/
  if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] ) /*0x6866c0*/
  {
    result = MEMORY[0xA8EB90]; /*0x6866c8*/
    if ( MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x6866ea*/
    }
  }
  MEMORY[0xA8E9A0] = 0; /*0x6866ef*/
  return result; /*0x6866f5*/
}


// ==== 0x00686700  ScenarioClass::SetFileName  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass::SetFileName(char *this, ObjectClass *aP1)
{
  ObjectClass *result; // eax

  result = aP1; /*0x686700*/
  if ( aP1 ) /*0x686709*/
  {
    result = (ObjectClass *)strncpy(this + 4700, aP1->__pad_0, 0x104u); /*0x686718*/
    this->q135F = 0; /*0x686720*/
  }
  return result->__pad_0; /*0x686727*/
}


// ==== 0x00686730  ScenarioClass::Construct  this=ScenarioClass  sig=csp ====
char __usercall sub_686730@<al>(char *Source@<ecx>, double a2@<st0>)
{
  char result; // al
  char v4; // bl
  void *v5[3]; // [esp+10h] [ebp-C4h] BYREF
  void **v6; // [esp+1Ch] [ebp-B8h] BYREF
  _DWORD v7[6]; // [esp+38h] [ebp-9Ch] BYREF
  char v8; // [esp+50h] [ebp-84h]
  _DWORD v9[22]; // [esp+68h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+C0h] [ebp-14h] BYREF
  int v11; // [esp+CCh] [ebp-8h]

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    MEMORY[0xA8ED84] = 0; /*0x686765*/
    v5[1] = 0; /*0x68676b*/
    v5[2] = 0; /*0x68676f*/
    GenericList::Constructor(&v6); /*0x686773*/
    v6 = &vt_List_INIClass_INISection; /*0x68677c*/
    Node::Init(v7); /*0x686784*/
    v7[5] = 0; /*0x68678d*/
    v8 = 0; /*0x686792*/
    v5[0] = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(v9, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(v5, (int)v9, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)MEMORY[0xA8B230] + 4700, Source); /*0x686836*/
      v4 = ScenarioClass::LoadMap(0, (int)v5, a2); /*0x686851*/
      v9[0] = &vt_CCFileClass; /*0x686853*/
      v11 = 0; /*0x68685b*/
      Vector::Clear((int)v10); /*0x686862*/
      v9[0] = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor(v9); /*0x686873*/
      HashTable::DestroyHashTableINIClass(v5); /*0x68687c*/
      return v4; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      v9[0] = &vt_CCFileClass; /*0x6867db*/
      v11 = 0; /*0x6867e3*/
      Vector::Clear((int)v10); /*0x6867ea*/
      v9[0] = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor(v9); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass(v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}


// ==== 0x00686890  ScenarioClass::SetupAlliances  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SetupAlliances(void *this)
{
  int i; // esi
  int v3; // ecx
  int v4; // esi
  int WaypointAnimationSpeed; // eax
  int v6; // esi
  void *v7; // eax
  int Owner; // ebp
  int j; // esi
  HouseClass *v10; // edx
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int result; // eax
  int v19; // [esp+4h] [ebp-10h]
  int v20; // [esp+Ch] [ebp-8h]

  if ( MEMORY[0xA8B274] + MEMORY[0xA8DA84] < *(_DWORD *)MEMORY[0x8871E0][1].? && !MEMORY[0xA8ED6B] ) /*0x6868bc*/
  {
    for ( i = 0; i < HouseClass_Count; ++i ) /*0x6868c7*/
    {
      v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i]; /*0x6868ce*/
      if ( !*(_BYTE *)(v3 + 492) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && MEMORY[0xA8B274] < 1 ) /*0x6868ef*/
        HouseClass::SDDTORAllAndTriggers(); /*0x6868f1*/
    }
  }
  Event::Dispatch(); /*0x686900*/
  if ( !MEMORY[0xA8ED6B] ) /*0x68690c*/
  {
    v4 = MEMORY[0xA8E7AC]; /*0x686914*/
    MEMORY[0xA8E7AC] = 0; /*0x68691c*/
    if ( MEMORY[0xA8B23C] ) /*0x686926*/
    {
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)MEMORY[0xA8B23C] + 132))(MEMORY[0xA8B23C], this); /*0x68692b*/
      ComputeMultiEngineerAdjustment((int *)MEMORY[0xA8B23C]); /*0x686937*/
    }
    else
    {
      GenerateScenarioUnits((char)this); /*0x686940*/
    }
    MEMORY[0xA8E7AC] = v4; /*0x686945*/
  }
  Multiplayer::ShowProgress(MEMORY[0xA8B238], 93); /*0x686952*/
  Event::Dispatch(); /*0x686957*/
  if ( MEMORY[0xA8B261] ) /*0x686963*/
  {
    WaypointAnimationSpeed = MEMORY[0x8871E0][1].RadarCombatFlashTime; /*0x686971*/
    if ( WaypointAnimationSpeed <= MEMORY[0xA8B54C] ) /*0x686979*/
      WaypointAnimationSpeed = MEMORY[0xA8B54C]; /*0x68697b*/
    if ( WaypointAnimationSpeed >= MEMORY[0x8871E0][1].MaxWaypointPathLength ) /*0x686985*/
      WaypointAnimationSpeed = MEMORY[0x8871E0][1].MaxWaypointPathLength; /*0x686987*/
    if ( WaypointAnimationSpeed > 0 ) /*0x68698b*/
    {
      v6 = WaypointAnimationSpeed; /*0x68698d*/
      do /*0x68699a*/
      {
        CrateClass::FindPlacement(&MEMORY[0x87F7E8]); /*0x686994*/
        --v6; /*0x686999*/
      }
      while ( v6 ); /*0x68699a*/
    }
  }
  Event::Dispatch(); /*0x68699c*/
  GetHouseData(&MEMORY[0x87F7E8]); /*0x6869a6*/
  v7 = (void *)SuperWeaponTypeClass::FindByName(MEMORY[0x817318]); /*0x6869b0*/
  Owner = HouseClass::FindOwner(v7); /*0x6869bc*/
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x6869c7*/
  {
    *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j] + 22388) = *(_DWORD *)&HouseClass_Array->__pad_0[4 * j]; /*0x6869db*/
    v10 = HouseClass_Array; /*0x6869e1*/
    v11 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * j]; /*0x6869e7*/
    if ( !*(_BYTE *)(v11 + 492) && !*(_BYTE *)(*(_DWORD *)(v11 + 52) + 422) ) /*0x6869fb*/
    {
      v12 = (_DWORD *)(v11 + 22080); /*0x686a12*/
      v13 = *(_DWORD *)(MEMORY[0x8871E0]->?[10] + 4 * *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j] + 388)); /*0x686a23*/
      *v12 = MEMORY[0xA8ED84]; /*0x686a26*/
      v12[1] = v20; /*0x686a28*/
      v12[2] = v13; /*0x686a2b*/
      v19 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j] + 36) + 24))(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j] + 36); /*0x686a4b*/
      v14 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * j]; /*0x686a4f*/
      v15 = Math::RoundToInt((double)*(int *)(MEMORY[0x8871E0]->? + 4 * v14[97]) * 0.01 * (double)v19); /*0x686a6b*/
      HouseClass::AddPower(v14, v15); /*0x686a73*/
      v10 = HouseClass_Array; /*0x686a78*/
    }
    v16 = *(_DWORD *)(*(_DWORD *)&v10->__pad_0[4 * j] + 52); /*0x686a81*/
    if ( *(_BYTE *)(v16 + 422) ) /*0x686a84*/
      *(_BYTE *)(v16 + 423) = 0; /*0x686a8e*/
    else
      *(_BYTE *)(v16 + 423) = 1; /*0x686a97*/
    v17 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * j]; /*0x686aa4*/
    if ( v17 != Owner ) /*0x686aa9*/
    {
      HouseClass::HandleAlliance(v17, Owner, 0); /*0x686aae*/
      HouseClass::HandleAlliance(Owner, *(_DWORD *)&HouseClass_Array->__pad_0[4 * j], 0); /*0x686ac1*/
    }
  }
  if ( MEMORY[0xA8B23C] ) /*0x686ae0*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8B23C] + 136))(MEMORY[0xA8B23C], v19); /*0x686ae4*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 140))(MEMORY[0xA8B23C]); /*0x686af2*/
  }
  result = Map_Setup(MEMORY[0xA8B230]); /*0x686afe*/
  MEMORY[0xA8D108] = 16843009; /*0x686b08*/
  MEMORY[0xA8D10C] = 16843009; /*0x686b0e*/
  return result; /*0x686b14*/
}


// ==== 0x00686B20  ScenarioClass::LoadMap  this=IUnknown  sig=csp ====
char __usercall ScenarioClass::LoadMap@<al>(char a1@<dl>, CCINIClass *a2@<ecx>, double a3@<st0>)
{
  CCINIClass *v3; // ebp
  int v4; // ecx
  ObjectClass *v5; // eax
  int v6; // ecx
  ObjectClass *v7; // eax
  char Bool_Overwrite; // al
  int Section; // eax
  int v10; // eax
  wchar_t *StringCSF; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int i; // eax
  ScenarioClass *v25; // ecx
  int v26; // eax
  int j; // esi
  unsigned int *v28; // eax
  unsigned int *v29; // eax
  _DWORD *Instance; // eax
  int v31; // eax
  int v32; // eax
  char *v33; // ebp
  INIClass *v35; // ebx
  CCINIClass *k; // esi
  INIClass *v37; // edi
  int eax102; // eax
  ScenarioClass *v38; // ebp
  int v39; // ecx
  int campaignIndex; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  ObjectClass *v47; // eax
  int m; // eax
  void *v48; // ecx
  int v49; // edx
  int v50; // edi
  bool v51; // [esp+12h] [ebp-162h]
  char v53; // [esp+14h] [ebp-160h]
  CCINIClass *v56; // [esp+14h] [ebp-160h]
  unsigned __int8 **var158[3]; // [esp+1Ch] [ebp-158h] BYREF
  void **v57; // [esp+28h] [ebp-14Ch] BYREF
  _DWORD v58[6]; // [esp+44h] [ebp-130h] BYREF
  char v59; // [esp+5Ch] [ebp-118h]
  unsigned int v60; // [esp+74h] [ebp-100h] BYREF
  unsigned int v61; // [esp+78h] [ebp-FCh]
  unsigned int v62; // [esp+7Ch] [ebp-F8h]
  unsigned int v63; // [esp+80h] [ebp-F4h]
  MultiplayerGameMode aP1[3]; // [esp+84h] [ebp-F0h] BYREF
  _DWORD v65[3]; // [esp+DCh] [ebp-98h] BYREF
  ObjectClass *v69; // [esp+E8h] [ebp-8Ch]
  _DWORD v67[4]; // [esp+F0h] [ebp-84h] BYREF
  INIClass Filename; // [esp+100h] [ebp-74h] BYREF
  _BYTE var34[16]; // [esp+140h] [ebp-34h] BYREF
  wchar_t Buffer[18]; // [esp+150h] [ebp-24h] BYREF

  v51 = MEMORY[0xA8B238] == 0;
  v3 = a2;
  ++*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
  Debug::Log();
  while ( 1 )
  {
    if ( !v51 )
      ResetScenario();
    if ( MEMORY[0xA8B238] )
    {
      MEMORY[0xA8B230]->difficulty2 = (int)MEMORY[0xA8B278];
      MEMORY[0xA8B230]->elapsedTimer[0] = 2 - MEMORY[0xA8B230]->difficulty2;
      v6 = MEMORY[0xA8B230]->nextScenario[0];
      BYTE1(v6) = BYTE1(MEMORY[0xA8B230]->nextScenario[0]) & 0xEF;
      MEMORY[0xA8B230]->nextScenario[0] = v6 | (((unsigned __int8)MEMORY[0xA8B31F] & 1) << 12);
      v7 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
      BYTE1(v7) = MEMORY[0xA8D63C].__pad_1258[205] & 0xEF;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = (unsigned int)v7 | (((unsigned __int8)MEMORY[0xA8B31F] & 1) << 12);
    }
    else
    {
      MEMORY[0xA8B230]->difficulty2 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[120];
      MEMORY[0xA8B230]->elapsedTimer[0] = 2 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[120];
      v4 = MEMORY[0xA8B230]->nextScenario[0];
      BYTE1(v4) = BYTE1(MEMORY[0xA8B230]->nextScenario[0]) & 0xEF;
      MEMORY[0xA8B230]->nextScenario[0] = v4;
      v5 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
      BYTE1(v5) = MEMORY[0xA8D63C].__pad_1258[205] & 0xEF;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = v5;
    }
    *(_DWORD *)&MEMORY[0xA8B230]->__pad_3566[54] = INIClass::ReadInt_Overwrite(
                                                     (int)v3,
                                                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                                     (CCINIClass *)&stru_830620.__pad_579C[32428],
                                                     (INIClass *)0x2710);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v3,
                       (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                       (CCINIClass *)&stru_830620.__pad_579C[32416],
                       0);
    var158[1] = 0;
    v53 = Bool_Overwrite;
    var158[2] = 0;
    GenericList::Constructor(&v57);
    v57 = &vt_List_INIClass_INISection;
    Node::Init(v58);
    v58[5] = 0;
    v59 = 0;
    var158[0] = (unsigned __int8 **)&CCINIClass_Vtable;
    CCFileClass::Construct3((int)aP1);
    if ( !MEMORY[0xA8B238] )
    {
      if ( !v51 )
      {
        _splitpath((const char *)MEMORY[0xA8B230]->fileName, 0, 0, Filename.__pad_0, 0);
        strcat(Filename.__pad_0, &stru_830620.__pad_579C[32408]);
        FileClass::SetFileName(aP1, (IUnknown *)&Filename);
        if ( CCFileClass::Open(aP1, 0) )
        {
          CCINIClass::Load(var158, aP1, 0, 0);
          RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
        }
        CCFileClass::Reset(aP1);
      }
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620.__pad_579C[14696]);
      if ( CCFileClass::Open(aP1, 0) )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        *(_WORD *)MEMORY[0xA8B230]->name = 0;
        if ( &MEMORY[0x81784C] == (INIClass *)-8 )
          Section = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          Section = HashTableSection::FindSection(
                      (int)var158,
                      (CCINIClass *)MEMORY[0xA8B230]->fileName,
                      (CCINIClass *)&MEMORY[0x81784C].headNode[1]);
        if ( Section )
          INIClass::ParseValue_Wide(
            (char **)var158,
            (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
            (CCINIClass *)&MEMORY[0x81784C].headNode[1],
            (wchar_t *)&MEMORY[0x87F8E4].__pad_5568[10472],
            (CCINIClass *)MEMORY[0xA8B230]->name,
            0x2Du);
        LOWORD(MEMORY[0xA8B230]->briefing[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-37112 )
          v10 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v10 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[14684]);
        if ( v10 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[14684],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->briefingCsf,
            32);
          if ( strlen((const char *)MEMORY[0xA8B230]->briefingCsf) )
          {
            StringCSF = GetStringCSF((wchar_t *)MEMORY[0xA8B230]->briefingCsf, 0, &stru_830620.__pad_579C[31356], 3167);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->briefing, StringCSF, 0x400u);
            HIWORD(MEMORY[0xA8B230]->briefing[511]) = 0;
          }
        }
        MEMORY[0xA8B230]->uiName[0] = 0;
        if ( &MEMORY[0x81784C] )
          v12 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&MEMORY[0x81784C]);
        else
          v12 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        if ( v12 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&MEMORY[0x81784C],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->uiName,
            32);
          if ( strlen(MEMORY[0xA8B230]->uiName) )
          {
            v13 = GetStringCSF((wchar_t *)MEMORY[0xA8B230]->uiName, 0, &stru_830620.__pad_579C[31356], 3179);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->name, v13, 0x2Du);
            *(_WORD *)&MEMORY[0xA8B230]->name[88] = 0;
            sprintf((char *const)Buffer, &stru_830620.__pad_579C[32400], MEMORY[0xA8B230]->uiName);
            v14 = GetStringCSF(Buffer, 0, &stru_830620.__pad_579C[31356], 3183);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->uiNameLoaded, v14, 0x2Du);
            if ( !wcsncmp(
                    (const wchar_t *)MEMORY[0xA8B230]->uiNameLoaded,
                    (const wchar_t *)&stru_830620.__pad_579C[32380],
                    8u) )
              wcsncpy((wchar_t *)MEMORY[0xA8B230]->uiNameLoaded, (const wchar_t *)MEMORY[0xA8B230]->name, 0x2Du);
            *(_WORD *)&MEMORY[0xA8B230]->uiNameLoaded[88] = 0;
          }
        }
        MEMORY[0xA8B230]->lsLoadMessage[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54792 )
          v15 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v15 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32364]);
        if ( v15 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32364],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->lsLoadMessage,
            31);
        MEMORY[0xA8B230]->lsBrief[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54776 )
          v16 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v16 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32348]);
        if ( v16 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32348],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->lsBrief,
            31);
        if ( &stru_830620 == (IUnknown *)-54760 )
          v17 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v17 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32332]);
        if ( v17 )
          MEMORY[0xA8B230]->ls640BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32332],
                                               (INIClass *)MEMORY[0xA8B230]->ls640BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54744 )
          v18 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v18 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32316]);
        if ( v18 )
          MEMORY[0xA8B230]->ls640BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32316],
                                               (INIClass *)MEMORY[0xA8B230]->ls640BriefLocY);
        if ( &stru_830620 == (IUnknown *)-54728 )
          v19 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v19 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32300]);
        if ( v19 )
          MEMORY[0xA8B230]->ls800BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32300],
                                               (INIClass *)MEMORY[0xA8B230]->ls800BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54712 )
          v20 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v20 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32284]);
        if ( v20 )
          MEMORY[0xA8B230]->ls800BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32284],
                                               (INIClass *)MEMORY[0xA8B230]->ls800BriefLocY);
        LOBYTE(MEMORY[0xA8B230]->ls640BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54696 )
          v21 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v21 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32268]);
        if ( v21 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32268],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls640BkgdName,
            64);
        LOBYTE(MEMORY[0xA8B230]->ls800BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54680 )
          v22 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v22 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32252]);
        if ( v22 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32252],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls800BkgdName,
            64);
        LOBYTE(MEMORY[0xA8B230]->ls800BkgdPal[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54664 )
          v23 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v23 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32236]);
        if ( v23 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32236],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls800BkgdPal,
            64);
      }
    }
    for ( i = 1120; i < 1136; MEMORY[0xA8B230]->nextScenario[i - 1] = -1 )
      ++i;
    if ( MEMORY[0xA8B238] )
    {
      ScenarioClass::ReadWaypoints((__int16 *)MEMORY[0xA8B230], v3);
      v25 = MEMORY[0xA8B230];
      if ( MEMORY[0xA8B230]->isRandom )
      {
        v26 = 0;
        while ( 1 )
        {
          *(_DWORD *)&v25->waypoints[v26 * 4] = v25->houseHomeCells[v26];
          if ( ++v26 >= 8 )
            break;
          v25 = MEMORY[0xA8B230];
        }
      }
      RulesClass::LoadCountries(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      RulesClass::LoadFromINI(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_SuperWeaponTypeCount + j) + 100))(
          *((_DWORD *)g_SuperWeaponTypeCount + j),
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8700]);
      AssignSessionHouses();
      v3 = a2;
      v67[0] = 1;
      v67[1] = 1;
      v67[2] = 50;
      v67[3] = 50;
      v28 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)var34,
              (INIClass *)&MEMORY[0x81FFE4].headNode[2],
              (unsigned __int8 *)g_INI_Key_Size,
              (MouseClass *)v67);
      v60 = *v28;
      v61 = v28[1];
      v62 = v28[2];
      v63 = v28[3];
      CellClass::DrawWrapper((int *)&MEMORY[0x87F7E8], (Tactical *)&v60, 1, 0, 1);
      if ( !MEMORY[0xA8B230]->isRandom )
        PreviewClass::RenderMapPreview(MEMORY[0xA8B230]->nextScenario, a2);
      v29 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)Filename.__pad_20,
              (INIClass *)&MEMORY[0x81FFE4].headNode[2],
              (unsigned __int8 *)g_INI_Key_LocalSize,
              &MEMORY[0x87F8E4]);
      v60 = *v29;
      v61 = v29[1];
      v62 = v29[2];
      v63 = v29[3];
      Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (MouseClass *)&v60);
      (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 128))(
        MEMORY[0xA8B23C],
        v53);
      if ( MEMORY[0xA8B244] == 2 )
        HouseClass::FindStartPositions();
      else
        (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 132))(
          MEMORY[0xA8B23C],
          v53);
    }
    Instance = LoadProgressMgr::GetInstance();
    LoadingScreen::Render(Instance);
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 3);
    if ( !v51 )
      break;
    v51 = 0;
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
    v69 = 0;
    Vector::Clear((int)v65);
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
    BufferIOFileClass::Dtor(aP1);
    HashTable::DestroyHashTableINIClass((void **)var158);
  }
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB077F8].__pad_14B0[13416]);
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432] + 32))(
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432],
      1);
  v31 = __2_YAPAXI_Z(0xE18u);
  if ( v31 )
    v32 = TacticalMap::Construct(v31);
  else
    v32 = 0;
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] = v32;
  TacticalClass::SetViewportPosition(v32, (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532]);
  MEMORY[0xA8B230]->theater = ScenarioClass::ReadAndParseString(
                                (unsigned __int8 ***)v3,
                                (INIClass *)&MEMORY[0x81FFE4].headNode[2],
                                (unsigned __int8 *)&unk_818658,
                                0);
  LoadTheaterClassMIX(MEMORY[0xA8B230]->theater);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 30);
  SidebarClass::ReadButtonList(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 31);
  ResetRules(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 35);
  Event::Dispatch();
  v33 = *(char **)&MEMORY[0x87F8E4].__pad_5568[8700];
  v56 = (CCINIClass *)MEMORY[0xA8B230];
  if ( INIClass::GetKeyCount(*(char **)&MEMORY[0x87F8E4].__pad_5568[8700], (INIClass *)&stru_830620.__pad_579C[31336]) >= 50 )
    v35 = (INIClass *)50;
  else
    v35 = (INIClass *)INIClass::GetKeyCount(v33, (INIClass *)&stru_830620.__pad_579C[31336]);
  for ( k = 0; (int)k < (int)v35; k = (CCINIClass *)((char *)k + 1) )
  {
    v37 = (INIClass *)INIClass::GetStringByIndex(v33, (CCINIClass *)&stru_830620.__pad_579C[31336], k);
    eax102 = atoi(v37->__pad_0);
    INIClass::GetString(
      (unsigned __int8 ***)v33,
      (INIClass *)&stru_830620.__pad_579C[31336],
      (unsigned __int8 *)v37,
      0,
      (INIClass *)((char *)&v56[83] + 40 * eax102 + eax102),
      40);
  }
  Event::Dispatch();
  RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 45);
  v38 = MEMORY[0xA8B230];
  v39 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[44] = 0;
  if ( MEMORY[0xA8B238] )
  {
    v41 = *(_DWORD *)(**(_DWORD **)&MEMORY[0xA8D63C].__pad_430[12] + 75);
    if ( v41 == -3 )
      v41 = 0;
    v39 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v41) + 188);
  }
  else
  {
    campaignIndex = MEMORY[0xA8B230]->campaignIndex;
    if ( campaignIndex != -1 )
      v39 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * campaignIndex] + 152);
  }
  v42 = v39;
  if ( MEMORY[0xA8B238] )
  {
    MEMORY[0xA8B230]->playerSideIndex = v39;
    if ( !MixFile::LoadSide(v39) )
    {
LABEL_124:
      *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
      --*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
      v69 = 0;
      Vector::Clear((int)v65);
      *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
      BufferIOFileClass::Dtor(aP1);
      HashTable::DestroyHashTableINIClass((void **)var158);
      return 0;
    }
  }
  else
  {
    HouseClass::LoadTypeList(a2->__pad_0);
    INIClass::GetString(
      (unsigned __int8 ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620.__pad_579C[32224],
      &Filename,
      32);
    v43 = HouseClass::FindByName(Filename.__pad_0);
    if ( v43 == -1 || v43 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v43] + 52) + 188);
    MEMORY[0xA8B230]->playerSideIndex = v42;
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
  }
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 50);
  if ( !ScenarioClass::ReadMapINI((int)MEMORY[0xA8B230], a3, (int)a2) )
    goto LABEL_124;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 58);
  if ( MEMORY[0xA8B238] )
  {
    MEMORY[0xA8B230]->playerSideIndex = v42;
    if ( MEMORY[0xA8B23C] )
      (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 124))(MEMORY[0xA8B23C]);
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620.__pad_579C[32224],
      (INIClass *)Filename.__pad_20,
      32);
    v44 = HouseClass::FindByName(Filename.__pad_20);
    if ( v44 == -1 || v44 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v44] + 52) + 188);
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
    MEMORY[0xA8B230]->playerSideIndex = v42;
  }
  if ( MEMORY[0xA8B238] && !(_BYTE)MEMORY[0xA8B260] )
  {
    v47 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
    BYTE1(v47) = MEMORY[0xA8D63C].__pad_1258[205] & 0x7F;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = v47;
  }
  nullsub_37();
  Event::Dispatch();
  SmallFunc_6F19B0(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  SmallFunc_6F19B0(a2->__pad_0, 0);
  ScoreScreenClass::ProcessFrame(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  ScoreScreenClass::ProcessFrame(a2->__pad_0, 0);
  TaskForceClass::LoadFromINI(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  TaskForceClass::LoadFromINI(a2->__pad_0, 0);
  TriggerClass::Process(a2->__pad_0);
  CCINIClass::ProcessSection(a2->__pad_0);
  CCINIClass::ReadTypeList(&MEMORY[0x87F8E4].__pad_5568[8924], (CCINIClass *)1);
  CCINIClass::ReadTypeList(a2->__pad_0, 0);
  Helper_6F2040();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 60);
  ScenarioClass::LoadMapData((int *)&MEMORY[0x87F7E8], a2);
  Event::Dispatch();
  ScenarioClass::LoadWaypoints(a2->__pad_0);
  BulletTypeClass::ReadTrailerAnim();
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 70);
  Event::Dispatch();
  ReadOverlayINI(a2);
  Event::Dispatch();
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
    House::AnnounceUpgrade(m, (IUnknown *)0xFFFFFFFF);
  ResetBuildingState();
  CCINIClass::LoadTypeFromINI(a2->__pad_0);
  Event::Dispatch();
  InitializeVeinholeSystem(1);
  BuildingClass::ClearOccupancyData();
  BuildingClass::ClearFactoryData();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 72);
  RadarClass::RecreateSurface((int)&MEMORY[0x87F7E8], v42);
  PlaceScenarioUnits(a2->__pad_0, (int)v38);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 74);
  PlaceAircraftFromINI(a2->__pad_0, (int)a2);
  Event::Dispatch();
  PlaceScenarioInfantry(a2->__pad_0);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 76);
  byte_829AE4 = 0;
  Scenario::ReadTeams(a2);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 78);
  byte_829AE4 = 1;
  Event::Dispatch();
  UnitClass::ReadINI(a2->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] == (CellStruct *)5 )
  {
    if ( MEMORY[0xA8D63C].__pad_14B0[677] )
    {
      CCFileClass::Reset(aP1);
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620.__pad_579C[32212]);
      if ( CCFileClass::Open(aP1, 0) == 1 )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      }
    }
  }
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 82);
  Event::Dispatch();
  MEMORY[0x87F8E4].field_38 = MapClass::PostProcessReveal(&MEMORY[0x87F7E8], 0);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 86);
  Event::Dispatch();
  CCFileClass::Create(dword_89C3B0);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 90);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] && !a1 )
  {
    LOBYTE(v48) = INIClass::ReadBool_Overwrite(
                    (int)a2,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.__pad_579C[32416],
                    0);
    ScenarioClass::SetupAlliances(v48);
  }
  Event::Dispatch();
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB077F8].__pad_14B0[13416]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 96);
  Event::Dispatch();
  ProcessExpiredPointers();
  if ( MEMORY[0xA8B238] )
    MEMORY[0xA8B230]->nextScenario[0] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204];
  v49 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = 0;
  v50 = v49 - 1;
  ProcessDataBuildingClass();
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = v50;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 98);
  Event::Dispatch();
  (*(void (__thiscall **)(char *))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3924] + 12))(&MEMORY[0x87F8E4].__pad_1D4[3924]);
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&MEMORY[0x87F7E8]);
  Map_Load_660B00();
  FogOfWar::Render((int **)&MEMORY[0x87F7E8]);
  *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
  v69 = 0;
  Vector::Clear((int)v65);
  *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
  BufferIOFileClass::Dtor(aP1);
  HashTable::DestroyHashTableINIClass((void **)var158);
  return 1;
}


// ==== 0x00687CE0  SaveScenarioToINI  this=-  sig=csp ====
char *__usercall SaveScenarioToINI@<eax>(RawFileClass *Source@<ecx>, ScenarioClass *a2@<edx>, int a3@<edi>)
{
  CCFileClass *v4; // eax
  char v5; // al
  char v7; // [esp+Bh] [ebp-F1h]
  char *v9; // [esp+10h] [ebp-ECh] BYREF
  INIClass a1; // [esp+14h] [ebp-E8h] BYREF
  char v11; // [esp+54h] [ebp-A8h]
  MultiplayerGameMode aP1[3]; // [esp+6Ch] [ebp-90h] BYREF
  _BYTE v13[12]; // [esp+C4h] [ebp-38h] BYREF
  CCINIClass *v15; // [esp+D0h] [ebp-2Ch]
  int var24[9]; // [esp+D8h] [ebp-24h] BYREF

  a1.headNode[0] = 0; /*0x687cf4*/
  a1.headNode[1] = 0; /*0x687cf8*/
  GenericList::Constructor(&a1.headNode[2]); /*0x687cfc*/
  a1.headNode[2] = (int)&vt_List_INIClass_INISection; /*0x687d05*/
  Node::Init(&a1.__pad_20[8]); /*0x687d0d*/
  a1.INIClass_field_3C = 0; /*0x687d17*/
  v11 = 0; /*0x687d1d*/
  *(_DWORD *)a1.__pad_0 = &CCINIClass_Vtable; /*0x687d21*/
  if ( MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d34*/
    v5 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v4->__pad_0 + 20))(v4, 0); /*0x687d3e*/
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x687d48*/
    v7 = v5; /*0x687d50*/
    v15 = 0; /*0x687d54*/
    Vector::Clear((int)v13); /*0x687d5b*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor(aP1); /*0x687d6c*/
    if ( v7 ) /*0x687d75*/
    {
      CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d7c*/
      CCINIClass::Load(&a1, aP1, 1, 0); /*0x687d8d*/
      *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x687d99*/
      v15 = 0; /*0x687da1*/
      Vector::Clear((int)v13); /*0x687da8*/
      *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor(aP1); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)MEMORY[0xA8B230], a1.__pad_0, a2); /*0x687dce*/
  if ( (_BYTE)a2 ) /*0x687dd7*/
  {
    if ( g_Map_TiberiumConfig && g_Map_TiberiumConfig->field_0 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((char **)g_Map_TiberiumConfig, a1.__pad_0); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v9); /*0x687df7*/
      MiniMap::Render(&v9); /*0x687e00*/
      MiniMap::SavePreviewToINI(&v9, a1.__pad_0); /*0x687e0e*/
      ComPtr::Dtor(&v9); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses(&a1); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI(&MEMORY[0x87F7E8], a1.__pad_0); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim(a1.__pad_0); /*0x687e3a*/
  ReadFootINI(a1.__pad_0); /*0x687e43*/
  SaveInfantryToINI((int)&a1, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI(a1.__pad_0); /*0x687e55*/
  sub_44FE60(&a1); /*0x687e5e*/
  OverlayClass::WriteINI(a1.__pad_0); /*0x687e67*/
  UnitTypeClass::ReadINIEntry(a1.__pad_0); /*0x687e70*/
  InfantryClass::SetMission(a1.__pad_0); /*0x687e79*/
  if ( !(_BYTE)a2 || MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x687e8a*/
  {
    nullsub_34(&a1, 0); /*0x687e92*/
    ScriptTypeClass::ReadINI(a1.__pad_0, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData(a1.__pad_0, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList(a1.__pad_0, 0); /*0x687eb3*/
  }
  ReadAudioEventINI(a1.__pad_0); /*0x687ebc*/
  SaveTriggerTagsToINI(a1.__pad_0); /*0x687ec5*/
  RawFileClass::Construct(var24, Source); /*0x687ed2*/
  INIClass::WriteDigest(&a1, (CCINIClass *)var24, 1); /*0x687ee5*/
  RawFileClass::Dtor(var24); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((void **)&a1); /*0x687eff*/
}


// ==== 0x00687F10  ObjectClass::AssignSessionHouses  this=ObjectClass  sig=csp ====
char SessionClass_AssignHouses()
{
  int v0; // edi
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  void *v7; // eax
  int v8; // ebp
  char *v9; // eax
  LPARAM v10; // eax
  int *v11; // ebx
  int v12; // edi
  int v13; // esi
  void *v14; // eax
  int v15; // ebp
  LPARAM v16; // edx
  int v17; // eax
  wchar_t *String; // eax
  int v19; // eax
  void *v20; // esi
  int v21; // eax
  int v22; // esi
  void *v23; // esi
  int v24; // eax
  int v25; // esi
  int v27; // [esp+8h] [ebp-4Ch]
  void *v28; // [esp+Ch] [ebp-48h] BYREF
  void *v29; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  LPARAM v31; // [esp+18h] [ebp-3Ch]
  _DWORD v32[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v34; // [esp+38h] [ebp-1Ch]
  char v35[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v36; // [esp+50h] [ebp-4h]

  v0 = MEMORY[0xA8DA84]; /*0x687f15*/
  v1 = 0; /*0x687f1b*/
  for ( i = MEMORY[0xA8DA84]; v1 < v0; ++v1 ) /*0x687f23*/
  {
    v2 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v1); /*0x687f2a*/
    if ( *(_DWORD *)(v2 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v2, 0); /*0x687f35*/
  }
  v32[0] = 0; /*0x687f42*/
  v32[1] = 0; /*0x687f49*/
  MEMORY[0xAC1198] = 0; /*0x687f4d*/
  if ( v0 > 0 ) /*0x687f53*/
  {
    v31 = v0; /*0x687f59*/
    do /*0x688146*/
    {
      v3 = -1; /*0x687f63*/
      v27 = -1; /*0x687f66*/
      v4 = 0; /*0x687f6e*/
      v5 = MEMORY[0xA8DA78]; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((_BYTE *)v32 + v4) && (v3 == -1 || *(_DWORD *)(*(_DWORD *)v5 + 83) < v3) ) /*0x687f84*/
        {
          v27 = v4; /*0x687f88*/
          v3 = *(_DWORD *)(*(_DWORD *)v5 + 83); /*0x687f8c*/
        }
        ++v4; /*0x687f8f*/
        v5 += 4; /*0x687f90*/
      }
      while ( v4 < v0 ); /*0x687f95*/
      v6 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v27); /*0x687fa0*/
      *((_BYTE *)v32 + v27) = 1; /*0x687fa3*/
      v7 = __2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v7 ) /*0x687fb2*/
        v8 = HouseClass::Construct((int)v7, *((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v6 + 75))); /*0x687fc8*/
      else
        v8 = 0; /*0x687fcc*/
      if ( MEMORY[0xA8B238][0] == 4 ) /*0x687fd5*/
      {
        WideString::Assign((wchar_t **)&v28, (wchar_t *)v6); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29, (const wchar_t **)&v28); /*0x687fe9*/
        DeleteAndZero::Alt(&v28); /*0x687ff2*/
        v9 = String::GetOrEmpty((char **)&v29); /*0x687ffb*/
        if ( v9 ) /*0x688002*/
        {
          strncpy(Destination, v9, 0x14u); /*0x688012*/
          v34 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v8 + 90100) ) /*0x68802b*/
        {
          qmemcpy((void *)(v8 + 90100), Destination, 0x14u); /*0x688038*/
          *(_BYTE *)(v8 + 90120) = v34; /*0x68803a*/
          v0 = i; /*0x68803b*/
        }
        DeleteAndZero(&v29); /*0x688043*/
      }
      else
      {
        if ( MEMORY[0x83DC8C] ) /*0x688051*/
        {
          strncpy(v35, MEMORY[0x83DC8C], 0x14u); /*0x688065*/
          v36 = 0; /*0x68806d*/
        }
        else
        {
          v35[0] = (unsigned __int8)MEMORY[0x83DC8C]; /*0x688053*/
        }
        if ( v35 != (char *)(v8 + 90100) ) /*0x68807e*/
        {
          qmemcpy((void *)(v8 + 90100), v35, 0x14u); /*0x68808b*/
          *(_BYTE *)(v8 + 90120) = v36; /*0x68808d*/
          v0 = i; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v8 + 90154), (const wchar_t *)v6, 0x15u); /*0x68809c*/
      *(_WORD *)(v8 + 90194) = 0; /*0x6880a4*/
      *(_BYTE *)(v8 + 492) = 1; /*0x6880ad*/
      sub_4FCE00(*(_DWORD *)(v6 + 83), *(_DWORD *)(v6 + 75), MEMORY[0xA8B25C]); /*0x6880c4*/
      *(_DWORD *)(v8 + 90196) = SessionClass::GetPlayerColorScheme(*(_DWORD *)(v6 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v8); /*0x6880df*/
      ComputeSessionColorVector(v8); /*0x6880e6*/
      *(_DWORD *)(v8 + 90200) = SessionClass::GetOption(v6); /*0x6880f2*/
      *(_DWORD *)(v8 + 90204) = *(_DWORD *)(v6 + 99); /*0x688101*/
      if ( !v27 ) /*0x688107*/
      {
        HouseClass_Player = (#375 *)v8; /*0x688109*/
        *(_BYTE *)(v8 + 493) = 1; /*0x68810f*/
      }
      if ( *(_DWORD *)(v6 + 107) == -1 ) /*0x68811a*/
        MEMORY[0xAC1198] = v8; /*0x68811c*/
      *(_DWORD *)(v8 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower(v8, 1); /*0x688132*/
      *(_DWORD *)(v6 + 111) = *(_DWORD *)(v8 + 48); /*0x68813a*/
      --v31; /*0x688142*/
    }
    while ( v31 ); /*0x688146*/
  }
  v10 = 0; /*0x688152*/
  v31 = MEMORY[0xA8B274]; /*0x688154*/
  v11 = MEMORY[0xA8B29C]; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v10 < v31 ) /*0x688161*/
    {
      v12 = *v11; /*0x688167*/
      if ( *v11 != -1 && v12 != -3 ) /*0x688175*/
      {
        v13 = v11[8]; /*0x68817b*/
        i = v10 + 1; /*0x688184*/
        v14 = __2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v14 ) /*0x688192*/
          v15 = HouseClass::Construct((int)v14, *((_DWORD *)g_SuperWeaponTypeCount + v12)); /*0x6881a5*/
        else
          v15 = 0; /*0x6881a9*/
        v16 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v15 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v15 + 468) = v16; /*0x6881b8*/
        sub_4FCE00(v13, v12, MEMORY[0xA8B25C]); /*0x6881c8*/
        *(_DWORD *)(v15 + 90196) = SessionClass::GetPlayerColorScheme(v13); /*0x6881da*/
        HouseClass::GetColor((char *)v15); /*0x6881e0*/
        ComputeSessionColorVector(v15); /*0x6881e7*/
        *(_DWORD *)(v15 + 90200) = v11[16]; /*0x6881ef*/
        v17 = v11[24]; /*0x6881f5*/
        *(_DWORD *)(v15 + 90204) = v17; /*0x6881fb*/
        if ( v17 != -1 ) /*0x688201*/
          *((_BYTE *)MEMORY[0xA8B230] + 4576) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v35, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v36 = 0; /*0x688233*/
        }
        else
        {
          v35[0] = (unsigned __int8)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v35 != (char *)(v15 + 90100) ) /*0x688244*/
        {
          qmemcpy((void *)(v15 + 90100), v35, 0x14u); /*0x68824f*/
          *(_BYTE *)(v15 + 90120) = v36; /*0x688251*/
        }
        String = GetStringCSF(g_Str_TXT_COMPUTER, 0, MEMORY[0x83D838], 4032); /*0x688263*/
        wcscpy((wchar_t *)(v15 + 90154), String); /*0x688270*/
        if ( MEMORY[0xA8B238][0] ) /*0x68827f*/
          *(_DWORD *)(v15 + 588) = MEMORY[0x8871E0][1].SmallVisceroid; /*0x68828d*/
        v19 = *(v11 - 8); /*0x688299*/
        if ( MEMORY[0xA8DA84] > 1 && HIBYTE(MEMORY[0x8871E0][1].?[1]) && v19 > 0 ) /*0x6882b3*/
          --v19; /*0x6882b5*/
        HouseClass::SetCombatPower(v15, v19); /*0x6882b9*/
        v10 = i; /*0x6882be*/
      }
    }
    ++v11; /*0x6882c2*/
  }
  while ( (int)v11 < (int)MEMORY[0xA8B2BC] ); /*0x6882cb*/
  v20 = __2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v20 ) /*0x6882e4*/
  {
    v21 = SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x6882eb*/
    v22 = HouseClass::Construct((int)v20, *((_DWORD *)g_SuperWeaponTypeCount + v21)); /*0x688303*/
  }
  else
  {
    v22 = 0; /*0x688307*/
  }
  *(_DWORD *)(v22 + 90196) = Network_Assign(MEMORY[0x836ECC]); /*0x68831a*/
  HouseClass::GetColor((char *)v22); /*0x688320*/
  v23 = __2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v23 ) /*0x688336*/
  {
    v24 = SuperWeaponTypeClass::FindByName(MEMORY[0x817318]); /*0x68833d*/
    v25 = HouseClass::Construct((int)v23, *((_DWORD *)g_SuperWeaponTypeCount + v24)); /*0x688356*/
  }
  else
  {
    v25 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v25 + 90196) = Network_Assign(MEMORY[0x836ECC]); /*0x68836d*/
  return HouseClass::GetColor((char *)v25); /*0x688378*/
}


// ==== 0x00688380  Multiplayer::FindStartPositions  this=VectorClass  sig=csp ====
VectorClass *__thiscall Multiplayer::FindStartPositions(VectorClass *this)
{
  IUnknown *v1; // esi
  VectorClass *v2; // edi
  ScenarioClass *v3; // edx
  int v4; // ebx
  int v5; // eax
  char *waypoints; // ecx
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  IUnknown *v10; // ebp
  unsigned int i; // esi
  int v12; // edi
  IUnknown *v13; // eax
  __int16 v14; // si
  IUnknown *v15; // eax
  WinModemClass *v16; // eax
  IUnknown *v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  IUnknown *v20; // [esp+14h] [ebp-2Ch]
  VectorClass *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  void **v25; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  char v28; // [esp+35h] [ebp-Bh]
  IUnknown *v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v1 = 0; /*0x688387*/
  v2 = this; /*0x688389*/
  v21 = this; /*0x688391*/
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25 = (void **)&vt_DynamicVectorClass_Cell; /*0x6883a5*/
  v30 = 10; /*0x6883ad*/
  v29 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  waypoints = (char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1586); /*0x6883b7*/
  do /*0x6883e9*/
  {
    if ( v5 < 0 ) /*0x6883c6*/
      break; /*0x6883c6*/
    if ( *(_DWORD *)waypoints == dword_B05458 ) /*0x6883d2*/
      break; /*0x6883d2*/
    v1 = (IUnknown *)((char *)v1 + 1); /*0x6883e1*/
    ++v5; /*0x6883e2*/
    waypoints += 4; /*0x6883e3*/
  }
  while ( v5 < 8 ); /*0x6883e9*/
  v7 = 0; /*0x6883f0*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x6883f4*/
  {
    v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x6883f6*/
    v9 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      v8 += 4; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v30; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( (int)v1 <= *(_DWORD *)&HouseClass_Player.__pad_5568[8128] + *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - v7 ) /*0x688421*/
  {
    v20 = (IUnknown *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8128] /*0x68842b*/
                     + *(_DWORD *)&HouseClass_Player.__pad_5568[18384]
                     - v7);
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = v1; /*0x688423*/
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < (int)v10; ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(_DWORD *)&v3->waypoints[4 * i] == dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(_DWORD *)&v3->waypoints[4 * i]; /*0x688478*/
    if ( (int)v29 < v27 ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v28 && v27 || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v4 + v27, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v29; /*0x6884ab*/
      v29 = (IUnknown *)((char *)v29 + 1); /*0x6884ae*/
      *((_DWORD *)Block + (_DWORD)v13) = v12; /*0x6884b6*/
    }
    v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x6884b9*/
LABEL_24:
    v23 = *(_DWORD *)&v3->waypoints[4 * i]; /*0x6884bf*/
    Debug::Log(); /*0x6884d9*/
    v4 = v30; /*0x6884de*/
    v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( (char *)v10 - (char *)v29 > 0 ) /*0x688502*/
  {
    Debug::Log(); /*0x68850d*/
    if ( (int)v29 < (int)v10 ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range( /*0x688551*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_14B0[8436] - 10));
        LOWORD(v22) = *(_WORD *)&stru_87C374.__pad_14B0[8424] /*0x688573*/
                    + Random::Range(
                        (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                        (IUnknown *)0xA,
                        (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_14B0[8432] - 10));
        HIWORD(v22) = v14 + *(_WORD *)&stru_87C374.__pad_14B0[8428] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (IUnknown *)&stru_87C374.__pad_14B0[8132],
                 (IUnknown *)&v23,
                 (IUnknown *)&v24,
                 (IUnknown *)&v19,
                 (IUnknown *)1,
                 (IUnknown *)-1,
                 0,
                 0,
                 (IUnknown *)8,
                 (IUnknown *)8,
                 0,
                 0,
                 0,
                 (IUnknown *)1,
                 (IUnknown *)&v23,
                 0,
                 0);
        if ( v19 != dword_B05458 ) /*0x6885c7*/
        {
          if ( (int)v29 < v27 /*0x688603*/
            || (v28 || !v27)
            && v30 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v30 + v27, 0) )
          {
            v15 = v29; /*0x688612*/
            v29 = (IUnknown *)((char *)v29 + 1); /*0x688615*/
            *((_DWORD *)Block + (_DWORD)v15) = v19; /*0x68861d*/
          }
          Debug::Log(); /*0x688631*/
        }
      }
      while ( (int)v29 < (int)v20 ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  v2->Items = 0; /*0x688651*/
  v2->Capacity = 0; /*0x688654*/
  v2->IsAllocated = 0; /*0x688657*/
  v2->IsInitialized = 1; /*0x68865f*/
  v2->vtable0 = &vt_VectorClass_Cell; /*0x688663*/
  Multiplayer::CopyDataArray(v2, (ObjectClass *)&v25); /*0x688669*/
  v2->vtable0 = &vt_DynamicVectorClass_Cell; /*0x68866e*/
  v25 = (void **)&vt_VectorClass_Cell; /*0x688674*/
  v16 = (WinModemClass *)Block; /*0x68867c*/
  v17 = (IUnknown *)v30; /*0x688684*/
  v2[1].vtable0 = v29; /*0x688688*/
  v2[1].Items = v17; /*0x68868d*/
  if ( v16 && v28 ) /*0x688698*/
    __3_YAXPAX_Z(v16); /*0x68869b*/
  return v2; /*0x6886a5*/
}


// ==== 0x006886B0  GenerateScenarioUnits  this=-  sig=ida-proto ====
int __fastcall FindInfantryDeployPosition(int *a1, RadarClass *a2, int a3)
{
  RadarClass *v3; // esi
  _DWORD *v5; // eax
  int ClosestObjectCell; // eax
  int v7; // edx
  IUnknown *GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  unsigned __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  char *v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  IUnknown *v27; // eax
  IUnknown *v28; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  ScenarioClass *v30; // [esp+18h] [ebp-54h]
  IUnknown *v31; // [esp+1Ch] [ebp-50h]
  RadarClass *v32; // [esp+20h] [ebp-4Ch]
  IUnknown *v33; // [esp+24h] [ebp-48h]
  RadarClass *v34; // [esp+28h] [ebp-44h]
  int *v35; // [esp+2Ch] [ebp-40h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  IUnknown *v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  IUnknown *v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  v35 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)a2, (TechnoClass *)1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, (IUnknown *)&v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = SHIWORD(v3->field_0) << 8; /*0x688f4f*/
      v42 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = (IUnknown *)Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = SHIWORD(v3->field_0); /*0x688f72*/
      v10 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
LABEL_8:
    v29 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = SLOWORD(v3->field_0); /*0x689006*/
      v14 = SHIWORD(v3->field_0); /*0x689009*/
      v15 = MEMORY[0x87F8E4].field_28; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C; /*0x689017*/
      v32 = (RadarClass *)(*(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1); /*0x689025*/
      switch ( v29 ) /*0x689032*/
      {
        case 0: /*0x689032*/
          v17 = a3; /*0x689039*/
          v14 -= a3; /*0x68903d*/
          break; /*0x68903f*/
        case 1: /*0x689032*/
          v17 = a3; /*0x689041*/
          v13 += a3; /*0x689045*/
          v14 -= a3; /*0x689047*/
          break; /*0x689049*/
        case 2: /*0x689032*/
          v17 = a3; /*0x68904b*/
          v13 += a3; /*0x68904f*/
          break; /*0x689051*/
        case 3: /*0x689032*/
          v17 = a3; /*0x689053*/
          v13 += a3; /*0x689057*/
          v14 += a3; /*0x689059*/
          break; /*0x68905b*/
        case 4: /*0x689032*/
          v17 = a3; /*0x68905d*/
          v14 += a3; /*0x689061*/
          break; /*0x689063*/
        case 5: /*0x689032*/
          v17 = a3; /*0x689065*/
          v13 -= a3; /*0x689069*/
          v14 += a3; /*0x68906b*/
          break; /*0x68906d*/
        case 6: /*0x689032*/
          v17 = a3; /*0x68906f*/
          v13 -= a3; /*0x689073*/
          break; /*0x689075*/
        case 7: /*0x689032*/
          v17 = a3; /*0x689077*/
          v13 -= a3; /*0x68907b*/
          v14 -= a3; /*0x68907d*/
          break; /*0x68907f*/
        default:
          v17 = a3; /*0x689081*/
          break; /*0x689081*/
      }
      if ( v13 > MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1 ) /*0x689087*/
        v13 = MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1; /*0x689089*/
      if ( v13 < MEMORY[0x87F8E4].field_28 ) /*0x68908d*/
        LOWORD(v13) = MEMORY[0x87F8E4].field_28; /*0x68908f*/
      if ( v14 > (int)v32 ) /*0x689097*/
        v14 = (int)v32; /*0x689099*/
      if ( v14 < *(int *)MEMORY[0x87F8E4].__pad_2C ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)MEMORY[0x87F8E4].__pad_2C; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      v28 = v31; /*0x6890b4*/
      if ( (int)v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = (IUnknown *)(MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1); /*0x6890d0*/
        v39 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1; /*0x6890e5*/
        v32 = (RadarClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x6890fe*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x68910a*/
        {
          v21 = (char *)(v20 - (_DWORD)v32); /*0x68911e*/
          if ( (int)v21 < v15 ) /*0x689124*/
            LOWORD(v21) = v15; /*0x689126*/
        }
        else
        {
          v21 = (char *)v32 + v20; /*0x689114*/
          if ( (int)v21 > (int)v38 ) /*0x689118*/
            LOWORD(v21) = (_WORD)v38; /*0x68911a*/
        }
        v22 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x68913d*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < v16 ) /*0x68916a*/
            LOWORD(v23) = v16; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            LOWORD(v23) = v39; /*0x689162*/
        }
        v24 = v35; /*0x68916e*/
        v3 = v34; /*0x689172*/
        LOWORD(v33) = (_WORD)v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        HIWORD(v33) = v23; /*0x68917f*/
        v18 = (unsigned __int16)v33; /*0x689184*/
        v28 = v33; /*0x689188*/
      }
      if ( __PAIR32__(HIWORD(v28), v18) == v3->field_0 ) /*0x689199*/
        v36 = 1; /*0x6891a6*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v28, (TechnoClass *)1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28); /*0x6891ee*/
        v26 = Object::FindClosestObjectCell(v25, (IUnknown *)&v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
          Coord::Subtract(v45, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), 0); /*0x68923d*/
          v27 = (IUnknown *)Cell::GetGroundHeight(v45); /*0x68924c*/
          Coord::Subtract(v46, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), v27); /*0x689274*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
            return 1; /*0x68928b*/
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        v30 = (ScenarioClass *)((char *)v30 + 1); /*0x6892c1*/
        if ( (int)v30 >= 2 ) /*0x6892c5*/
        {
          a3 = v17 + 1; /*0x6892cf*/
          if ( v17 + 1 < 32 ) /*0x6892d3*/
            goto LABEL_8; /*0x6892d3*/
          return 0; /*0x6892d3*/
        }
        v37 = 0; /*0x688ff2*/
      }
    }
  }
  return 0; /*0x688fa8*/
}


// ==== 0x00688ED0  FindInfantryDeployPosition  this=AbstractClass  sig=csp ====
int __fastcall FindInfantryDeployPosition(int *a1, RadarClass *a2, int a3)
{
  RadarClass *v3; // esi
  _DWORD *v5; // eax
  int ClosestObjectCell; // eax
  int v7; // edx
  IUnknown *GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  unsigned __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  char *v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  IUnknown *v27; // eax
  IUnknown *v28; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  ScenarioClass *v30; // [esp+18h] [ebp-54h]
  IUnknown *v31; // [esp+1Ch] [ebp-50h]
  RadarClass *v32; // [esp+20h] [ebp-4Ch]
  IUnknown *v33; // [esp+24h] [ebp-48h]
  RadarClass *v34; // [esp+28h] [ebp-44h]
  int *v35; // [esp+2Ch] [ebp-40h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  IUnknown *v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  IUnknown *v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  v35 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)a2, (TechnoClass *)1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, (IUnknown *)&v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = SHIWORD(v3->field_0) << 8; /*0x688f4f*/
      v42 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = (IUnknown *)Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = SHIWORD(v3->field_0); /*0x688f72*/
      v10 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
LABEL_8:
    v29 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = SLOWORD(v3->field_0); /*0x689006*/
      v14 = SHIWORD(v3->field_0); /*0x689009*/
      v15 = MEMORY[0x87F8E4].field_28; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C; /*0x689017*/
      v32 = (RadarClass *)(*(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1); /*0x689025*/
      switch ( v29 ) /*0x689032*/
      {
        case 0: /*0x689032*/
          v17 = a3; /*0x689039*/
          v14 -= a3; /*0x68903d*/
          break; /*0x68903f*/
        case 1: /*0x689032*/
          v17 = a3; /*0x689041*/
          v13 += a3; /*0x689045*/
          v14 -= a3; /*0x689047*/
          break; /*0x689049*/
        case 2: /*0x689032*/
          v17 = a3; /*0x68904b*/
          v13 += a3; /*0x68904f*/
          break; /*0x689051*/
        case 3: /*0x689032*/
          v17 = a3; /*0x689053*/
          v13 += a3; /*0x689057*/
          v14 += a3; /*0x689059*/
          break; /*0x68905b*/
        case 4: /*0x689032*/
          v17 = a3; /*0x68905d*/
          v14 += a3; /*0x689061*/
          break; /*0x689063*/
        case 5: /*0x689032*/
          v17 = a3; /*0x689065*/
          v13 -= a3; /*0x689069*/
          v14 += a3; /*0x68906b*/
          break; /*0x68906d*/
        case 6: /*0x689032*/
          v17 = a3; /*0x68906f*/
          v13 -= a3; /*0x689073*/
          break; /*0x689075*/
        case 7: /*0x689032*/
          v17 = a3; /*0x689077*/
          v13 -= a3; /*0x68907b*/
          v14 -= a3; /*0x68907d*/
          break; /*0x68907f*/
        default:
          v17 = a3; /*0x689081*/
          break; /*0x689081*/
      }
      if ( v13 > MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1 ) /*0x689087*/
        v13 = MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1; /*0x689089*/
      if ( v13 < MEMORY[0x87F8E4].field_28 ) /*0x68908d*/
        LOWORD(v13) = MEMORY[0x87F8E4].field_28; /*0x68908f*/
      if ( v14 > (int)v32 ) /*0x689097*/
        v14 = (int)v32; /*0x689099*/
      if ( v14 < *(int *)MEMORY[0x87F8E4].__pad_2C ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)MEMORY[0x87F8E4].__pad_2C; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      v28 = v31; /*0x6890b4*/
      if ( (int)v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = (IUnknown *)(MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1); /*0x6890d0*/
        v39 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1; /*0x6890e5*/
        v32 = (RadarClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x6890fe*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x68910a*/
        {
          v21 = (char *)(v20 - (_DWORD)v32); /*0x68911e*/
          if ( (int)v21 < v15 ) /*0x689124*/
            LOWORD(v21) = v15; /*0x689126*/
        }
        else
        {
          v21 = (char *)v32 + v20; /*0x689114*/
          if ( (int)v21 > (int)v38 ) /*0x689118*/
            LOWORD(v21) = (_WORD)v38; /*0x68911a*/
        }
        v22 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x68913d*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < v16 ) /*0x68916a*/
            LOWORD(v23) = v16; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            LOWORD(v23) = v39; /*0x689162*/
        }
        v24 = v35; /*0x68916e*/
        v3 = v34; /*0x689172*/
        LOWORD(v33) = (_WORD)v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        HIWORD(v33) = v23; /*0x68917f*/
        v18 = (unsigned __int16)v33; /*0x689184*/
        v28 = v33; /*0x689188*/
      }
      if ( __PAIR32__(HIWORD(v28), v18) == v3->field_0 ) /*0x689199*/
        v36 = 1; /*0x6891a6*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v28, (TechnoClass *)1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28); /*0x6891ee*/
        v26 = Object::FindClosestObjectCell(v25, (IUnknown *)&v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
          Coord::Subtract(v45, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), 0); /*0x68923d*/
          v27 = (IUnknown *)Cell::GetGroundHeight(v45); /*0x68924c*/
          Coord::Subtract(v46, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), v27); /*0x689274*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
            return 1; /*0x68928b*/
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        v30 = (ScenarioClass *)((char *)v30 + 1); /*0x6892c1*/
        if ( (int)v30 >= 2 ) /*0x6892c5*/
        {
          a3 = v17 + 1; /*0x6892cf*/
          if ( v17 + 1 < 32 ) /*0x6892d3*/
            goto LABEL_8; /*0x6892d3*/
          return 0; /*0x6892d3*/
        }
        v37 = 0; /*0x688ff2*/
      }
    }
  }
  return 0; /*0x688fa8*/
}


// ==== 0x00689310  ScenarioClass::SaveLoad_Prefix  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveLoad_Prefix(DWORD *this, int *a2)
{
  DWORD *v3; // ebx
  DWORD Ticks; // eax
  int v5; // ecx
  DWORD v6; // eax
  int *v7; // esi
  int v8; // eax
  int i; // ebp
  int v10; // eax
  int j; // ebp
  int v12; // eax
  int k; // ebp
  DWORD v14; // eax
  bool v16; // [esp+71h] [ebp-1h]

  v3 = this + 389; /*0x68931c*/
  Debug::Log(); /*0x689339*/
  v16 = *v3 == -1; /*0x68934b*/
  if ( *v3 != -1 ) /*0x68934f*/
  {
    Ticks = Timer::GetTicks(); /*0x68935b*/
    v5 = this->pauseTimer; /*0x689362*/
    v6 = Ticks - *v3; /*0x689365*/
    *v3 = -1; /*0x689367*/
    this->pauseTimer = v6 + v5; /*0x68936f*/
  }
  v7 = a2; /*0x689372*/
  (*(void (__stdcall **)(int *, DWORD *, int, _DWORD))(*a2 + 16))(a2, this, 14144, 0); /*0x689381*/
  v8 = *v7; /*0x68938a*/
  a2 = (int *)this->dropshipUnitCounts; /*0x689396*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v7, &a2, 4, 0); /*0x68939a*/
  for ( i = 0; i < (int)a2; ++i ) /*0x6893a5*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->allowableUnitsCount + 4 * i, 4, 0); /*0x6893b8*/
  v10 = *v7; /*0x6893ca*/
  a2 = (int *)this->blue; /*0x6893d6*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v7, &a2, 4, 0); /*0x6893da*/
  for ( j = 0; j < (int)a2; ++j ) /*0x6893e5*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ambientTarget + 4 * j, 4, 0); /*0x6893f8*/
  v12 = *v7; /*0x68940a*/
  a2 = (int *)this->ionGround; /*0x689416*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v7, &a2, 4, 0); /*0x68941a*/
  for ( k = 0; k < (int)a2; ++k ) /*0x689425*/
    (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ionRed + 4 * k, 4, 0); /*0x689438*/
  LOBYTE(v14) = v16; /*0x689444*/
  if ( !v16 && *v3 == -1 ) /*0x68944f*/
  {
    v14 = Timer::GetTicks(); /*0x689454*/
    *v3 = v14; /*0x689459*/
  }
  return v14; /*0x68945b*/
}


// ==== 0x00689470  ScenarioClass::SaveLoad_Prefix_0  this=ScenarioClass  sig=csp ====
void __userpurge ScenarioClass::SaveLoad_Prefix_0(int this@<ecx>, ScenarioClass aP1)
{
  int v3; // eax
  _DWORD *v4; // esi
  DWORD Ticks; // eax
  int v6; // ecx
  DWORD v7; // eax
  int v8; // esi
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // esi
  DWORD *v13; // esi
  int v14; // [esp+70h] [ebp-8h] BYREF
  DWORD *v15; // [esp+74h] [ebp-4h]

  v3 = *(_DWORD *)(this + 1556); /*0x689479*/
  v4 = (_DWORD *)(this + 1556); /*0x68947f*/
  v15 = (DWORD *)(this + 1556); /*0x689488*/
  if ( v3 != -1 ) /*0x68948c*/
  {
    Ticks = Timer::GetTicks(); /*0x689491*/
    v6 = v4[2]; /*0x689498*/
    v7 = Ticks - *v4; /*0x68949b*/
    *v4 = -1; /*0x68949d*/
    v4[2] = v7 + v6; /*0x6894a5*/
  }
  v8 = aP1.nextScenario[0]; /*0x6894a8*/
  (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)aP1.nextScenario[0] + 12))( /*0x6894b7*/
    aP1.nextScenario[0],
    this,
    14144,
    0);
  if ( this ) /*0x6894bc*/
    ScenarioClass::ReadINIEntry(this, &aP1); /*0x6894c5*/
  if ( this != -13524 ) /*0x6894d2*/
  {
    TechnoTypeVector::Construct((_DWORD *)(this + 13524), 0, 0); /*0x6894da*/
    *(_DWORD *)(this + 13524) = &vt_TypeList_TechnoTypeClass; /*0x6894df*/
  }
  (*(void (__stdcall **)(int, ScenarioClass *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &aP1, 4, 0); /*0x6894f1*/
  for ( i = 0; i < aP1.nextScenario[0]; ++i ) /*0x6894fc*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x68950a*/
    DynamicVector_PushBack((_DWORD *)(this + 13524), (VectorClass *)&v14); /*0x689514*/
  }
  if ( this != -13552 ) /*0x68952a*/
  {
    DynamicVectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x689532*/
    *(_DWORD *)(this + 13552) = &vt_TypeList_int; /*0x689537*/
  }
  (*(void (__stdcall **)(int, ScenarioClass *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &aP1, 4, 0); /*0x689549*/
  for ( j = 0; j < aP1.nextScenario[0]; ++j ) /*0x689554*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x689562*/
    DynamicVector::Add_Alt((_DWORD *)(this + 13552), (VectorClass *)&v14); /*0x68956c*/
  }
  if ( this != -13580 ) /*0x689582*/
  {
    DynamicVectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x68958a*/
    *(_DWORD *)(this + 13580) = &vt_TypeList_int; /*0x68958f*/
  }
  (*(void (__stdcall **)(int, ScenarioClass *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &aP1, 4, 0); /*0x6895a1*/
  for ( k = 0; k < aP1.nextScenario[0]; ++k ) /*0x6895ac*/
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 12))(v8, &v14, 4, 0); /*0x6895ba*/
    DynamicVector::Add_Alt((_DWORD *)(this + 13580), (VectorClass *)&v14); /*0x6895c4*/
  }
  for ( m = 0; m < *(_DWORD *)(this + 13540); ++m ) /*0x6895dc*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB077F8].__pad_14B0[13416], (int *)(*(_DWORD *)(this + 13528) + 4 * m)); /*0x6895ed*/
  if ( *(_BYTE *)(this + 4600) ) /*0x6895fd*/
    *(_DWORD *)(this + 4596) = GetStringCSF((wchar_t *)(this + 4600), 0, &stru_830620.__pad_579C[31356], 6608); /*0x68961e*/
  else
    *(_DWORD *)(this + 4596) = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x689626*/
  v13 = v15; /*0x689630*/
  if ( *v15 == -1 ) /*0x689637*/
    *v13 = Timer::GetTicks(); /*0x689641*/
  Debug::Log(); /*0x68965d*/
}


// ==== 0x00689670  ScenarioClass::SetGlobalToByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetGlobalToByID(_BYTE *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x32 ) /*0x68967a*/
    return 0; /*0x6896b2*/
  v3 = *(this + 40 * a2 + a2 + 7344); /*0x689684*/
  if ( v3 != a3 ) /*0x689698*/
  {
    *(this + 40 * a2 + a2 + 7344) = a3; /*0x68969a*/
    this->variablesChanged = 1; /*0x68969e*/
    HouseClass::UpdateAllTypes((void *)a2); /*0x6896a5*/
  }
  return v3; /*0x6896ae*/
}


// ==== 0x006896C0  ScenarioClass::SetCountryFlag  this=ScenarioClass  sig=csp ====
char __thiscall sub_6896C0(const char *this, const char *a2, char a3)
{
  unsigned int v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x6896c4*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x6896c6*/
  {
    if ( (int)++v3 >= 50 ) /*0x689706*/
      return 1; /*0x689706*/
  }
  if ( v3 == -1 ) /*0x689714*/
    return 1; /*0x68970e*/
  if ( v3 >= 0x32 ) /*0x689719*/
    return 0; /*0x689753*/
  v6 = *(this + 40 * v3 + v3 + 7344); /*0x689721*/
  if ( v6 != a3 ) /*0x689735*/
  {
    *((_BYTE *)this + 40 * v3 + v3 + 7344) = a3; /*0x689737*/
    this->variablesChanged = 1; /*0x689739*/
    HouseClass::UpdateAllTypes((void *)v3); /*0x689742*/
  }
  return v6; /*0x689708*/
}


// ==== 0x00689760  ScenarioClass::GetGlobalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetGlobalStateByID(_BYTE *this, unsigned int a2, ScenarioClass *aP2)
{
  if ( a2 > 0x31 ) /*0x689766*/
    return 0; /*0x689784*/
  LOBYTE(aP2->nextScenario[0]) = *(this + 40 * a2 + a2 + 7344); /*0x68977d*/
  return 1; /*0x689781*/
}


// ==== 0x00689790  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689790(const char *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *(this + 40 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}


// ==== 0x00689820  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_689820(const char *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68982a*/
  {
    if ( ++v2 >= 50 ) /*0x689868*/
      return -1; /*0x689871*/
  }
  return v2; /*0x68986a*/
}


// ==== 0x00689880  ScenarioClass::ReadGlobalVariables  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::ReadGlobalVariables(char *this, ScenarioClass *aP1)
{
  int KeyCount; // ebp
  CCINIClass *v3; // esi
  CCINIClass *StringByIndex; // edi
  int v5; // eax

  if ( INIClass::GetKeyCount((char *)aP1, (INIClass *)&stru_830620.__pad_579C[31336]) >= 50 ) /*0x68989b*/
    KeyCount = 50; /*0x6898ad*/
  else
    KeyCount = INIClass::GetKeyCount((char *)aP1, (INIClass *)&stru_830620.__pad_579C[31336]); /*0x6898a9*/
  v3 = 0; /*0x6898b2*/
  if ( KeyCount <= 0 ) /*0x6898b6*/
    return 1; /*0x689904*/
  do /*0x6898f6*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex( /*0x6898c6*/
                                    (char *)aP1,
                                    (CCINIClass *)&stru_830620.__pad_579C[31336],
                                    v3);
    v5 = atoi(StringByIndex->__pad_0); /*0x6898c9*/
    INIClass::GetString( /*0x6898ee*/
      (unsigned __int8 ***)aP1,
      (INIClass *)&stru_830620.__pad_579C[31336],
      (unsigned __int8 *)StringByIndex,
      0,
      (INIClass *)(this + 40 * v5 + v5 + 7304),
      40);
    v3 = (CCINIClass *)((char *)v3 + 1); /*0x6898f3*/
  }
  while ( (int)v3 < KeyCount ); /*0x6898f6*/
  return 1; /*0x6898f9*/
}


// ==== 0x00689910  ScenarioClass::SetLocalToByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetLocalToByID(_BYTE *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x64 ) /*0x68991a*/
    return 0; /*0x689952*/
  v3 = *(this + 40 * a2 + a2 + 9394); /*0x689924*/
  if ( v3 != a3 ) /*0x689938*/
  {
    *(this + 40 * a2 + a2 + 9394) = a3; /*0x68993a*/
    this->variablesChanged = 1; /*0x68993e*/
    TriggerActionQueue::ProcessAll((void *)a2); /*0x689945*/
  }
  return v3; /*0x68994e*/
}


// ==== 0x00689960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689960(const char *this, const char *a2, char a3)
{
  unsigned int v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == -1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = *(this + 40 * v3 + v3 + 9394); /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    *((_BYTE *)this + 40 * v3 + v3 + 9394) = a3; /*0x6899d7*/
    *((_BYTE *)this + 13482) = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll((void *)v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}


// ==== 0x00689A00  ScenarioClass::GetLocalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetLocalStateByID(_BYTE *this, DynamicVector *aP1, ScenarioClass *aP2)
{
  if ( (unsigned int)aP1 >= 0x64 ) /*0x689a06*/
    return 0; /*0x689a24*/
  LOBYTE(aP2->nextScenario[0]) = *(this + 40 * (_DWORD)aP1 + (_DWORD)aP1 + 9394); /*0x689a1d*/
  return 1; /*0x689a21*/
}


// ==== 0x00689A30  ObjectClass::method_689A30  this=ObjectClass  sig=csp ====
char __thiscall sub_689A30(const char *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *(this + 40 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}


// ==== 0x00689AC0  ObjectClass::method_689AC0  this=ObjectClass  sig=csp ====
int __thiscall sub_689AC0(const char *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}


// ==== 0x00689B20  ScenarioClass::ReadLocalVariables  this=AbstractTypeClass  sig=csp ====
char __thiscall ScenarioClass::ReadLocalVariables(char *this, CCINIClass *aP1)
{
  ScenarioClass *v2; // ebx
  char *v3; // eax
  int v4; // ecx
  CCINIClass *StringByIndex; // edi
  CCINIClass *v6; // esi
  char *v7; // ebx
  char *v8; // eax
  int KeyCount; // [esp+8h] [ebp-8Ch]
  CCINIClass *aP2; // [esp+Ch] [ebp-88h]
  INIClass String[2]; // [esp+14h] [ebp-80h] BYREF

  v2 = (ScenarioClass *)this; /*0x689b27*/
  v3 = this + 9354; /*0x689b2e*/
  v4 = 100; /*0x689b34*/
  do /*0x689b40*/
  {
    *v3 = 0; /*0x689b39*/
    v3 += 41; /*0x689b3c*/
    --v4; /*0x689b3f*/
  }
  while ( v4 ); /*0x689b40*/
  if ( INIClass::GetKeyCount(aP1->__pad_0, (INIClass *)&stru_830620.__pad_579C[31336]) >= 100 ) /*0x689b58*/
    KeyCount = 100; /*0x689b6c*/
  else
    KeyCount = INIClass::GetKeyCount(aP1->__pad_0, (INIClass *)&stru_830620.__pad_579C[31336]); /*0x689b66*/
  aP2 = 0; /*0x689b78*/
  if ( KeyCount <= 0 ) /*0x689b82*/
    return 1; /*0x689c4f*/
  while ( 1 ) /*0x689ba1*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex( /*0x689ba1*/
                                    aP1->__pad_0,
                                    (CCINIClass *)&stru_830620.__pad_579C[31336],
                                    aP2);
    v6 = (CCINIClass *)atoi(StringByIndex->__pad_0); /*0x689bb0*/
    INIClass::GetString( /*0x689bc2*/
      (unsigned __int8 ***)aP1,
      (INIClass *)&stru_830620.__pad_579C[31336],
      (unsigned __int8 *)StringByIndex,
      0,
      String,
      128);
    v7 = (char *)v2 + 40 * (_DWORD)v6 + (_DWORD)v6; /*0x689bdf*/
    strcpy(v7 + 9354, strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0)); /*0x689bff*/
    v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x689c0a*/
    if ( v8 ) /*0x689c14*/
      v7[9394] = atoi(v8) != 0; /*0x689c24*/
    aP2 = (CCINIClass *)((char *)aP2 + 1); /*0x689c35*/
    if ( (int)aP2 >= KeyCount ) /*0x689c39*/
      break; /*0x689c39*/
    v2 = (ScenarioClass *)this; /*0x689b8c*/
  }
  return 1; /*0x689c41*/
}


// ==== 0x00689C60  ScenarioClass::ReadWaypoint  this=ScenarioClass  sig=csp ====
char __thiscall sub_689C60(char *this, char *a2)
{
  int v3; // edi
  char *v4; // esi
  CHAR v6[12]; // [esp+10h] [ebp-8Ch] BYREF
  CHAR Source[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int)a2, (int)MEMORY[0x83D824], 0); /*0x689c7d*/
  v3 = 0; /*0x689c88*/
  v4 = this + 9354; /*0x689c8a*/
  do /*0x689cdb*/
  {
    if ( *v4 ) /*0x689c90*/
    {
      wsprintfA(v6, MEMORY[0x817F6C], v3); /*0x689ca0*/
      wsprintfA(Source, MEMORY[0x83DE1C], v4, v4[40] != 0); /*0x689cb8*/
      INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x83D824], v6, Source); /*0x689ccf*/
    }
    ++v3; /*0x689cd4*/
    v4 += 41; /*0x689cd5*/
  }
  while ( v3 < 100 ); /*0x689cdb*/
  return 1; /*0x689cdd*/
}


// ==== 0x00689D30  PreviewClass::RenderMapPreview  this=ScenarioClass  sig=csp ====
char __thiscall PreviewClass::RenderMapPreview(int *this, CCINIClass *aP1)
{
  RandomStruct *v3; // edi
  RandomStruct *v4; // eax
  int v5; // ecx
  int Int_Overwrite; // eax
  CCINIClass *v7; // ecx
  int v8; // eax
  int v9; // eax
  CCINIClass *v10; // ecx
  int v11; // eax
  int v12; // eax
  CCINIClass *v13; // ecx
  INIClass *v14; // eax
  INIClass *v15; // ebx
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  INIClass *v20; // [esp-4h] [ebp-28h]
  INIClass *v21; // [esp-4h] [ebp-28h]
  RandomStruct v22; // [esp+10h] [ebp-14h] BYREF
  char Buffer[12]; // [esp+18h] [ebp-Ch] BYREF

  v3 = (RandomStruct *)(this + 1104); /*0x689d40*/
  this->startX = -1; /*0x689d46*/
  this->startY = -1; /*0x689d4c*/
  this->width = -1; /*0x689d52*/
  this->height = -1; /*0x689d58*/
  this->numberStartingPoints = -1; /*0x689d5e*/
  v4 = (RandomStruct *)(this + 1104); /*0x689d64*/
  v5 = 8; /*0x689d66*/
  do /*0x689d74*/
  {
    v4->Min = 0; /*0x689d6b*/
    v4->Max = 0; /*0x689d6d*/
    ++v4; /*0x689d70*/
    --v5; /*0x689d73*/
  }
  while ( v5 ); /*0x689d74*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x689d8d*/
                    (int)aP1,
                    (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                    (CCINIClass *)&stru_830620.__pad_579C[32948],
                    (INIClass *)this->startX);
  v7 = (CCINIClass *)this->startY; /*0x689d92*/
  this->startX = Int_Overwrite; /*0x689d98*/
  v8 = INIClass::ReadInt_Overwrite( /*0x689dab*/
         (int)aP1,
         (unsigned __int8 *)&stru_830620.__pad_579C[32940],
         (CCINIClass *)&stru_830620.__pad_579C[32932],
         (INIClass *)v7);
  v20 = (INIClass *)this->width; /*0x689db8*/
  this->startY = v8; /*0x689dc3*/
  this->width = INIClass::ReadInt_Overwrite( /*0x689dce*/
                     (int)aP1,
                     (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                     (CCINIClass *)&stru_82BBD0.sectionHead[1],
                     v20);
  v9 = INIClass::ReadInt_Overwrite( /*0x689de7*/
         (int)aP1,
         (unsigned __int8 *)&stru_830620.__pad_579C[32940],
         &g_INI_Key_Height,
         (INIClass *)this->height);
  v10 = (CCINIClass *)this->numberStartingPoints; /*0x689dec*/
  this->height = v9; /*0x689df2*/
  v11 = INIClass::ReadInt_Overwrite( /*0x689e05*/
          (int)aP1,
          (unsigned __int8 *)&stru_830620.__pad_579C[32940],
          (CCINIClass *)&stru_830620.__pad_579C[32908],
          (INIClass *)v10);
  v21 = (INIClass *)this->numCoopHumanStartSpots; /*0x689e12*/
  this->numberStartingPoints = v11; /*0x689e1d*/
  v12 = INIClass::ReadInt_Overwrite( /*0x689e23*/
          (int)aP1,
          (unsigned __int8 *)&stru_830620.__pad_579C[32940],
          (CCINIClass *)&stru_830620.__pad_579C[32884],
          v21);
  v13 = (CCINIClass *)this->numberStartingPoints; /*0x689e28*/
  this->numCoopHumanStartSpots = v12; /*0x689e2e*/
  v14 = 0; /*0x689e34*/
  if ( (int)v13 > 0 ) /*0x689e38*/
  {
    do /*0x689e7e*/
    {
      v15 = (INIClass *)&v14->__pad_0[1]; /*0x689e3a*/
      sprintf(Buffer, &stru_830620.__pad_579C[32872], &v14->__pad_0[1]); /*0x689e48*/
      v16 = INIClass::ReadPoint2D_Overwrite( /*0x689e62*/
              aP1,
              &v22,
              (INIClass *)&stru_830620.__pad_579C[32940],
              (CCINIClass *)Buffer,
              v3);
      v17 = *v16; /*0x689e67*/
      v18 = v16[1]; /*0x689e69*/
      v3->Min = v17; /*0x689e6c*/
      v3->Max = v18; /*0x689e6e*/
      v14 = v15; /*0x689e77*/
      ++v3; /*0x689e79*/
    }
    while ( (int)v15 < this->numberStartingPoints ); /*0x689e7e*/
  }
  return 1; /*0x689e80*/
}


// ==== 0x00689E90  ScenarioClass::ReadMapINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::ReadMapINI(int this, CCINIClass *aP1)
{
  void ***v4; // eax
  RandomStruct *v5; // ebx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int BuildingTypeByName; // eax
  INIClass *v10; // eax
  double Double_Overwrite; // st7
  int v12; // eax
  void ***TechnoTypeList; // eax
  void **v14; // eax
  int v15; // eax
  int v16; // ecx
  int eax16; // eax
  void **v18; // edx
  CCINIClass *v17; // eax
  void ***v20; // ebx
  void ***v21; // ecx
  void **v22; // eax
  void ***v23; // ecx
  int v24; // eax
  void ***v25; // ecx
  int v26; // edx
  int v27; // eax
  void ***IntList; // eax
  void **v29; // eax
  int v30; // eax
  int v31; // ecx
  int eax35; // eax
  void **v33; // edx
  CCINIClass *v32; // eax
  char Bool_Overwrite; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  int Int_Overwrite; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  int TimeString; // eax
  CCINIClass *v53; // ecx
  int v54; // eax
  double v55; // st7
  int v56; // eax
  double v57; // st7
  double v58; // st7
  int v59; // eax
  double v60; // st7
  double v61; // st7
  int v62; // eax
  double v63; // st7
  double v64; // st7
  int v65; // eax
  double v66; // st7
  double v67; // st7
  int v68; // eax
  double v69; // st7
  double v70; // st7
  int v71; // eax
  double v72; // st7
  double v73; // st7
  int v74; // eax
  double v75; // st7
  double v76; // st7
  int v77; // eax
  double v78; // st7
  double v79; // st7
  int v80; // eax
  double v81; // st7
  double v82; // st7
  int v83; // eax
  double v84; // st7
  double v85; // st7
  int v86; // eax
  double v87; // st7
  double v88; // st7
  int v89; // eax
  double v90; // st7
  double v91; // st7
  int v92; // eax
  double v93; // st7
  double v94; // st7
  int v95; // eax
  double v96; // st7
  double v97; // st7
  int v98; // eax
  double v99; // st7
  double v100; // st7
  int v101; // eax
  double v102; // st7
  double v103; // st7
  int v104; // eax
  double v105; // st7
  double v106; // st7
  int v107; // eax
  double v108; // st7
  double v109; // st7
  int v110; // eax
  double v111; // st7
  double v112; // st7
  int v113; // eax
  int v114; // eax
  void **v116; // [esp-4h] [ebp-5Ch] BYREF
  _DWORD *var58; // [esp+0h] [ebp-58h]
  RandomStruct *v115; // [esp+4h] [ebp-54h]
  int v119; // [esp+8h] [ebp-50h]
  INIClass *v117; // [esp+Ch] [ebp-4Ch]
  INIClass *aP3[2]; // [esp+10h] [ebp-48h]
  void ***v122; // [esp+24h] [ebp-34h]
  RandomStruct v123; // [esp+28h] [ebp-30h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-28h] BYREF
  char Destination[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  void *Block; // [esp+40h] [ebp-18h]
  char v127; // [esp+49h] [ebp-Fh]

  INIClass::ResetSection(aP1);
  GameMode::ReadFlagsFromINI((int *)this, aP1);
  *(_DWORD *)(this + 4396) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32948],
                               *(INIClass **)(this + 4396));
  *(_DWORD *)(this + 4400) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32932],
                               *(INIClass **)(this + 4400));
  *(_DWORD *)(this + 4404) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_82BBD0.sectionHead[1],
                               *(INIClass **)(this + 4404));
  *(_DWORD *)(this + 4408) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               &g_INI_Key_Height,
                               *(INIClass **)(this + 4408));
  *(_DWORD *)(this + 4412) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32908],
                               *(INIClass **)(this + 4412));
  *(_DWORD *)(this + 4580) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32884],
                               *(INIClass **)(this + 4580));
  v4 = 0;
  if ( *(int *)(this + 4412) > 0 )
  {
    v5 = (RandomStruct *)(this + 4416);
    do
    {
      v122 = (void ***)((char *)v4 + 1);
      sprintf(Buffer, &stru_830620.__pad_579C[32872], (char *)v4 + 1);
      v6 = INIClass::ReadPoint2D_Overwrite(
             aP1,
             &v123,
             (INIClass *)&stru_830620.__pad_579C[32940],
             (CCINIClass *)Buffer,
             v5);
      v7 = *v6;
      v8 = v6[1];
      v5->Min = v7;
      v5->Max = v8;
      v4 = v122;
      ++v5;
    }
    while ( (int)v122 < *(_DWORD *)(this + 4412) );
  }
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (unsigned __int8 *)&stru_830620.__pad_579C[33760],
    (INIClass *)(this + 4),
    (INIClass *)(this + 4),
    260);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (unsigned __int8 *)&stru_830620.__pad_579C[33744],
    (INIClass *)(this + 264),
    (INIClass *)(this + 264),
    260);
  *(_DWORD *)(this + 5172) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&g_INI_Key_Intro,
                               *(_DWORD *)(this + 5172));
  *(_DWORD *)(this + 5176) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[31468],
                               *(_DWORD *)(this + 5176));
  *(_DWORD *)(this + 5180) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33740],
                               *(_DWORD *)(this + 5180));
  *(_DWORD *)(this + 5184) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33732],
                               *(_DWORD *)(this + 5184));
  *(_DWORD *)(this + 5188) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_817244.INIClass_field_2C,
                               *(_DWORD *)(this + 5188));
  *(_DWORD *)(this + 5192) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33720],
                               *(_DWORD *)(this + 5192));
  *(_DWORD *)(this + 5196) = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33704],
                               *(_DWORD *)(this + 5196));
  *(_BYTE *)(this + 13500) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33688],
                               *(_BYTE *)(this + 13500));
  *(_BYTE *)(this + 13485) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33672],
                               *(_BYTE *)(this + 13485));
  *(_BYTE *)(this + 13484) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33660],
                               *(_BYTE *)(this + 13484));
  BuildingTypeByName = Scenario::FindBuildingTypeByName(
                         (unsigned __int8 ***)aP1,
                         (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                         (unsigned __int8 *)g_INI_Key_Theme,
                         *(CCINIClass **)(this + 7280));
  aP3[1] = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33644];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *(_DWORD *)(this + 7280) = BuildingTypeByName;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[656] = INIClass::ReadInt_Overwrite(
                                                   (int)aP1,
                                                   (unsigned __int8 *)v117,
                                                   (CCINIClass *)aP3[0],
                                                   aP3[1]);
  v10 = *(INIClass **)(this + 7288);
  aP3[1] = *(INIClass **)(this + 7292);
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP1,
                       (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                       (unsigned __int8 *)&stru_830620.__pad_579C[33628],
                       v10);
  *(double *)(this + 7288) = Double_Overwrite;
  if ( Double_Overwrite >= 1.0 )
    Double_Overwrite = 1.0;
  *(double *)(this + 7288) = Double_Overwrite;
  *(_DWORD *)(this + 7296) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33612],
                               *(INIClass **)(this + 7296));
  *(_BYTE *)(this + 13486) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33600],
                               *(_BYTE *)(this + 13486));
  *(_BYTE *)(this + 13487) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33588],
                               *(_BYTE *)(this + 13487));
  *(_BYTE *)(this + 13488) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33572],
                               *(_BYTE *)(this + 13488));
  *(_BYTE *)(this + 13489) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33560],
                               *(_BYTE *)(this + 13489));
  *(_BYTE *)(this + 13477) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33548],
                               *(_BYTE *)(this + 13477));
  *(_BYTE *)(this + 13490) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33536],
                               *(_BYTE *)(this + 13490));
  *(_BYTE *)(this + 13492) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33512],
                               *(_BYTE *)(this + 13492));
  *(_DWORD *)(this + 7300) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33504],
                               *(INIClass **)(this + 7300));
  *(_DWORD *)(this + 13520) = INIClass::ReadInt_Overwrite(
                                (int)aP1,
                                (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                (CCINIClass *)&stru_830620.__pad_579C[33484],
                                *(INIClass **)(this + 13520));
  var58 = 0;
  v115 = 0;
  LOWORD(v119) = 1;
  v116 = &vt_VectorClass_TechnoTypeClass;
  if ( &v116 != (void ***)(this + 13524) )
  {
    TypeList_TechnoType::ddtor((int)&v116);
    v115 = *(RandomStruct **)(this + 13532);
    if ( v115 )
    {
      var58 = (_DWORD *)__2_YAPAXI_Z(4 * (_DWORD)v115);
      if ( var58 )
      {
        v12 = 0;
        for ( BYTE1(v119) = 1; v12 < (int)v115; ++v12 )
          var58[v12] = *(_DWORD *)(*(_DWORD *)(this + 13528) + 4 * v12);
      }
    }
    else
    {
      var58 = 0;
      BYTE1(v119) = 0;
    }
  }
  TechnoTypeList = (void ***)INIClass::ReadTechnoTypeList(
                               (unsigned __int8 ***)aP1,
                               (CCINIClass *)Destination,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33468],
                               &vt_TypeList_TechnoTypeClass,
                               var58,
                               (int)v115,
                               v119,
                               *(_DWORD *)(this + 13540),
                               *(_DWORD *)(this + 13544),
                               (int)aP3[1]->__pad_0);
  v122 = TechnoTypeList;
  if ( (void ***)(this + 13524) != TechnoTypeList )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 13524) + 12))(this + 13524);
    v14 = v122[2];
    *(_DWORD *)(this + 13532) = v14;
    if ( v14 )
    {
      v15 = __2_YAPAXI_Z(4 * (_DWORD)v14);
      *(_DWORD *)(this + 13528) = v15;
      if ( v15 )
      {
        v16 = *(_DWORD *)(this + 13532);
        eax16 = 0;
        *(_BYTE *)(this + 13537) = 1;
        if ( v16 > 0 )
        {
          do
          {
            ++eax16;
            *(_DWORD *)(*(_DWORD *)(this + 13528) + 4 * eax16 - 4) = v122[1][eax16 - 1];
          }
          while ( eax16 < *(_DWORD *)(this + 13532) );
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 13528) = 0;
      *(_BYTE *)(this + 13537) = 0;
    }
    TechnoTypeList = v122;
  }
  *(_DWORD *)(this + 13540) = TechnoTypeList[4];
  *(_DWORD *)(this + 13544) = TechnoTypeList[5];
  v18 = TechnoTypeList[6];
  v17 = (CCINIClass *)Block;
  *(_DWORD *)(this + 13548) = v18;
  *(_DWORD *)Destination = &vt_VectorClass_TechnoTypeClass;
  if ( v17 && v127 )
    __3_YAXPAX_Z(v17);
  v20 = (void ***)(this + 13552);
  v21 = &v116;
  v122 = &v116;
  var58 = 0;
  v115 = 0;
  LOWORD(v119) = 1;
  v116 = &vt_VectorClass_int;
  if ( &v116 != (void ***)(this + 13552) )
  {
    VectorClass::Destroy((int)&v116);
    v22 = *(void ***)(this + 13560);
    v23 = v122;
    v122[2] = v22;
    if ( v22 )
    {
      v24 = __2_YAPAXI_Z(4 * (_DWORD)v22);
      v25 = v122;
      v122[1] = (void **)v24;
      if ( v24 )
      {
        v26 = (int)v25[2];
        v27 = 0;
        *((_BYTE *)v25 + 13) = 1;
        if ( v26 > 0 )
        {
          do
          {
            v122[1][v27] = *(void **)(*(_DWORD *)(this + 13556) + 4 * v27);
            ++v27;
          }
          while ( v27 < (int)v122[2] );
        }
      }
    }
    else
    {
      v23[1] = 0;
      *((_BYTE *)v23 + 13) = 0;
    }
    v21 = v122;
  }
  v21[4] = *(void ***)(this + 13568);
  v21[5] = *(void ***)(this + 13572);
  *v21 = &vt_TypeList_int;
  IntList = (void ***)INIClass::ReadIntList(
                        (unsigned __int8 ***)aP1,
                        (int)Destination,
                        (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                        (unsigned __int8 *)&stru_830620.__pad_579C[33444],
                        v116,
                        var58,
                        (int)v115,
                        v119,
                        (int)v117,
                        (int)aP3[0]->__pad_0,
                        (int)aP3[1]->__pad_0);
  v122 = IntList;
  if ( v20 != IntList )
  {
    ((void (__thiscall *)(int))(*v20)[3])(this + 13552);
    v29 = v122[2];
    *(_DWORD *)(this + 13560) = v29;
    if ( v29 )
    {
      v30 = __2_YAPAXI_Z(4 * (_DWORD)v29);
      *(_DWORD *)(this + 13556) = v30;
      if ( v30 )
      {
        v31 = *(_DWORD *)(this + 13560);
        eax35 = 0;
        *(_BYTE *)(this + 13565) = 1;
        if ( v31 > 0 )
        {
          do
          {
            ++eax35;
            *(_DWORD *)(*(_DWORD *)(this + 13556) + 4 * eax35 - 4) = v122[1][eax35 - 1];
          }
          while ( eax35 < *(_DWORD *)(this + 13560) );
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 13556) = 0;
      *(_BYTE *)(this + 13565) = 0;
    }
    IntList = v122;
  }
  *(_DWORD *)(this + 13568) = IntList[4];
  *(_DWORD *)(this + 13572) = IntList[5];
  v33 = IntList[6];
  v32 = (CCINIClass *)Block;
  *(_DWORD *)(this + 13576) = v33;
  *(_DWORD *)Destination = &vt_VectorClass_int;
  if ( v32 && v127 )
    __3_YAXPAX_Z(v32);
  *(_BYTE *)(this + 13478) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33420],
                               *(_BYTE *)(this + 13478));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP1,
                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                     (CCINIClass *)&stru_830620.__pad_579C[33400],
                     *(_BYTE *)(this + 13479));
  LOBYTE(aP3[1]) = *(_BYTE *)(this + 13480);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33380];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *(_BYTE *)(this + 13479) = Bool_Overwrite;
  *(_BYTE *)(this + 13480) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)v117,
                               (CCINIClass *)aP3[0],
                               (char)aP3[1]);
  v36 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33352],
          *(_BYTE *)(this + 13491));
  v37 = *(_BYTE *)(this + 13476);
  *(_BYTE *)(this + 13491) = v36;
  v38 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33340],
          v37);
  aP3[1] = *(INIClass **)(this + 524);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33328];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *(_BYTE *)(this + 13476) = v38;
  *(_DWORD *)(this + 524) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], aP3[1]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP1,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.__pad_579C[33316],
                    *(INIClass **)(this + 528));
  LOBYTE(aP3[1]) = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33308];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *(_DWORD *)(this + 528) = Int_Overwrite;
  INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], (char)aP3[1]);
  v40 = *(_DWORD *)(this + 13540) - *(_DWORD *)(this + 13568);
  v122 = 0;
  if ( v40 > 0 )
  {
    do
    {
      v41 = *(_DWORD *)(this + 13560);
      if ( *(_DWORD *)(this + 13568) < v41
        || (*(_BYTE *)(this + 13565) || !v41)
        && (v42 = *(_DWORD *)(this + 13572), v42 > 0)
        && ((unsigned __int8 (__thiscall *)(int, int, _DWORD))(*v20)[2])(this + 13552, v41 + v42, 0) )
      {
        v43 = *(_DWORD *)(this + 13568);
        v44 = *(_DWORD *)(this + 13556);
        *(_DWORD *)(this + 13568) = v43 + 1;
        *(_DWORD *)(v44 + 4 * v43) = -1;
      }
      v45 = *(_DWORD *)(this + 13540) - *(_DWORD *)(this + 13568);
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v45 );
  }
  v46 = *(_DWORD *)(this + 13568);
  v122 = 0;
  if ( v46 > 0 )
  {
    do
    {
      v47 = *(_DWORD *)(this + 13588);
      if ( *(_DWORD *)(this + 13596) < v47
        || (*(_BYTE *)(this + 13593) || !v47)
        && (v48 = *(_DWORD *)(this + 13600), v48 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 13580) + 8))(
             this + 13580,
             v47 + v48,
             0) )
      {
        v49 = *(_DWORD *)(this + 13596);
        v50 = *(_DWORD *)(this + 13584);
        *(_DWORD *)(this + 13596) = v49 + 1;
        *(_DWORD *)(v50 + 4 * v49) = 0;
      }
      v51 = *(_DWORD *)(this + 13568);
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v51 );
  }
  ScenarioClass::ReadLocalVariables((char *)this, aP1);
  Event::Dispatch();
  TimeString = INIClass::ReadTimeString(
                 (int)aP1,
                 (unsigned __int8 *)&stru_830620.__pad_579C[33288],
                 (unsigned __int8 *)&stru_830620.__pad_579C[33296],
                 *(CCINIClass **)(this + 13732));
  v53 = *(CCINIClass **)(this + 13736);
  *(_DWORD *)(this + 13732) = TimeString;
  v54 = INIClass::ReadTimeString(
          (int)aP1,
          (unsigned __int8 *)&stru_830620.__pad_579C[33288],
          (unsigned __int8 *)&stru_830620.__pad_579C[33272],
          v53);
  aP3[1] = *(INIClass **)(this + 13740);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33260];
  v117 = (INIClass *)&stru_830620.__pad_579C[33288];
  *(_DWORD *)(this + 13736) = v54;
  *(_DWORD *)(this + 13740) = INIClass::ReadTimeString(
                                (int)aP1,
                                (unsigned __int8 *)v117,
                                (unsigned __int8 *)aP3[0],
                                (CCINIClass *)aP3[1]);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33224],
    (INIClass *)&stru_830620.__pad_579C[33240],
    (INIClass *)(this + 13744),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33184],
    (INIClass *)&stru_830620.__pad_579C[33200],
    (INIClass *)(this + 13775),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33148],
    (INIClass *)&stru_830620.__pad_579C[33164],
    (INIClass *)(this + 13806),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33108],
    (INIClass *)&stru_830620.__pad_579C[33124],
    (INIClass *)(this + 13837),
    31);
  *(double *)aP3 = (double)*(int *)(this + 13608) * 0.01;
  v55 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&g_INI_Key_Lighting.headNode[2],
          aP3[0]);
  v56 = Math::RoundToInt(v55 * 100.0 + 0.01);
  v57 = (double)*(int *)(this + 13620);
  *(_DWORD *)(this + 13608) = v56;
  *(_DWORD *)(this + 13612) = v56;
  *(_DWORD *)(this + 13616) = v56;
  *(double *)aP3 = v57 * 0.01;
  v58 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)MEMORY[0x820538],
          aP3[0]);
  v59 = Math::RoundToInt(v58 * 100.0 + 0.01);
  v60 = (double)*(int *)(this + 13624);
  *(_DWORD *)(this + 13620) = v59;
  *(double *)aP3 = v60 * 0.01;
  v61 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)MEMORY[0x82053C],
          aP3[0]);
  v62 = Math::RoundToInt(v61 * 100.0 + 0.01);
  v63 = (double)*(int *)(this + 13628);
  *(_DWORD *)(this + 13624) = v62;
  *(double *)aP3 = v63 * 0.01;
  v64 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Blue,
          aP3[0]);
  v65 = Math::RoundToInt(v64 * 100.0 + 0.01);
  v66 = (double)*(int *)(this + 13632);
  *(_DWORD *)(this + 13628) = v65;
  *(double *)aP3 = v66 * 0.001;
  v67 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Ground,
          aP3[0]);
  v68 = Math::RoundToInt(v67 * 1000.0 + 0.01);
  v69 = (double)*(int *)(this + 13636);
  *(_DWORD *)(this + 13632) = v68;
  *(double *)aP3 = v69 * 0.001;
  v70 = INIClass::ReadDouble_Overwrite((int)aP1, (INIClass *)&g_INI_Key_Lighting, (unsigned __int8 *)&aLevel, aP3[0]);
  v71 = Math::RoundToInt(v70 * 1000.0 + 0.01);
  v72 = (double)*(int *)(this + 13640);
  *(_DWORD *)(this + 13636) = v71;
  *(double *)aP3 = v72 * 0.01;
  v73 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonAmbient,
          aP3[0]);
  v74 = Math::RoundToInt(v73 * 100.0 + 0.01);
  v75 = (double)*(int *)(this + 13644);
  *(_DWORD *)(this + 13640) = v74;
  *(double *)aP3 = v75 * 0.01;
  v76 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonRed,
          aP3[0]);
  v77 = Math::RoundToInt(v76 * 100.0 + 0.01);
  v78 = (double)*(int *)(this + 13648);
  *(_DWORD *)(this + 13644) = v77;
  *(double *)aP3 = v78 * 0.01;
  v79 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGreen,
          aP3[0]);
  v80 = Math::RoundToInt(v79 * 100.0 + 0.01);
  v81 = (double)*(int *)(this + 13652);
  *(_DWORD *)(this + 13648) = v80;
  *(double *)aP3 = v81 * 0.01;
  v82 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonBlue,
          aP3[0]);
  v83 = Math::RoundToInt(v82 * 100.0 + 0.01);
  v84 = (double)*(int *)(this + 13656);
  *(_DWORD *)(this + 13652) = v83;
  *(double *)aP3 = v84 * 0.001;
  v85 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGround,
          aP3[0]);
  v86 = Math::RoundToInt(v85 * 1000.0 + 0.01);
  v87 = (double)*(int *)(this + 13660);
  *(_DWORD *)(this + 13656) = v86;
  *(double *)aP3 = v87 * 0.001;
  v88 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonLevel,
          aP3[0]);
  v89 = Math::RoundToInt(v88 * 1000.0 + 0.01);
  v90 = (double)*(int *)(this + 13688);
  *(_DWORD *)(this + 13660) = v89;
  *(double *)aP3 = v90;
  v91 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33084],
          (INIClass *)LODWORD(v90));
  v92 = Math::RoundToInt(v91);
  v93 = (double)*(int *)(this + 13692);
  *(_DWORD *)(this + 13688) = v92;
  *(double *)aP3 = v93 * 0.01;
  v94 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33064],
          aP3[0]);
  v95 = Math::RoundToInt(v94 * 100.0 + 0.01);
  v96 = (double)*(int *)(this + 13696);
  *(_DWORD *)(this + 13692) = v95;
  *(double *)aP3 = v96 * 0.01;
  v97 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33048],
          aP3[0]);
  v98 = Math::RoundToInt(v97 * 100.0 + 0.01);
  v99 = (double)*(int *)(this + 13700);
  *(_DWORD *)(this + 13696) = v98;
  *(double *)aP3 = v99 * 0.01;
  v100 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33032],
           aP3[0]);
  v101 = Math::RoundToInt(v100 * 100.0 + 0.01);
  v102 = (double)*(int *)(this + 13704);
  *(_DWORD *)(this + 13700) = v101;
  *(double *)aP3 = v102 * 0.01;
  v103 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33016],
           aP3[0]);
  v104 = Math::RoundToInt(v103 * 100.0 + 0.01);
  v105 = (double)*(int *)(this + 13708);
  *(_DWORD *)(this + 13704) = v104;
  *(double *)aP3 = v105 * 0.001;
  v106 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33000],
           aP3[0]);
  v107 = Math::RoundToInt(v106 * 1000.0 + 0.01);
  v108 = (double)*(int *)(this + 13712);
  *(_DWORD *)(this + 13708) = v107;
  *(double *)aP3 = v108 * 0.001;
  v109 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[32984],
           aP3[0]);
  v110 = Math::RoundToInt(v109 * 1000.0 + 0.01);
  v111 = (double)*(int *)(this + 13716);
  *(_DWORD *)(this + 13712) = v110;
  *(double *)aP3 = v111 * 0.001;
  v112 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[32956],
           aP3[0]);
  v113 = Math::RoundToInt(v112 * 1000.0 + 0.01);
  aP3[1] = (INIClass *)55;
  *(_DWORD *)(this + 13716) = v113;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] )
  {
    AssignSessionHouses();
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)aP1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      20);
    v114 = HouseClass::FindByName(Destination);
    if ( v114 == -1 )
      v114 = 0;
    HouseClass_Player = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v114];
    *(_DWORD *)(this + 7284) = *(_DWORD *)(HouseClass_Player->field_34 + 184);
  }
  aP3[1] = (INIClass *)58;
  HouseClass_Player->__pad_1D8[20] = 1;
  HouseClass_Player->__pad_1D8[21] = 1;
  *(_DWORD *)&HouseClass_Player->__pad_566C[136] = 0;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8D63C].__pad_14B0[639] )
    TheatreClass::InitView();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 60);
  Event::Dispatch();
  return 1;
}


// ==== 0x0068AD70  ScenarioClass::SaveToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveToINI(int this, char *a1, ScenarioClass *aP2)
{
  int v4; // esi
  int i; // edi
  int v6; // eax
  int *v7; // eax
  int v8; // edx
  CCINIClass *v9; // edi
  INIClass *v10; // edx
  int v11; // eax
  char *waypoints; // ecx
  INIClass *v13; // edi
  INIClass *v14; // esi
  void *v15; // edi
  int v16; // eax
  int *v17; // eax
  INIClass *v18; // eax
  INIClass *v19; // edx
  INIClass *v20; // ecx
  INIClass *v21; // eax
  INIClass *v22; // eax
  INIClass *v23; // edx
  INIClass *v24; // ecx
  INIClass *v25; // edx
  INIClass *v26; // ecx
  INIClass *v27; // edx
  INIClass *v28; // ecx
  INIClass *v29; // eax
  INIClass *v30; // edx
  INIClass *v31; // ecx
  int v32; // esi
  _BYTE *v33; // edi
  int v35; // [esp+20h] [ebp-E8h]
  INIClass *v36; // [esp+20h] [ebp-E8h]
  CCINIClass *v37; // [esp+24h] [ebp-E4h] BYREF
  int v38; // [esp+28h] [ebp-E0h] BYREF
  int v39; // [esp+2Ch] [ebp-DCh] BYREF
  CCINIClass aP3; // [esp+30h] [ebp-D8h] BYREF
  INIClass v41[2]; // [esp+88h] [ebp-80h] BYREF

  INIClass::ClearSection((int)a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], 0);
  INIClass::ClearSection(
    (int)a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (AbstractClass *)&stru_830620.__pad_579C[33308]);
  if ( strlen((const char *)MEMORY[0xA8B230]->briefingCsf) )
    INIClass::SetString(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (INIClass *)&stru_830620.__pad_579C[14684],
      (INIClass *)MEMORY[0xA8B230]->briefingCsf);
  if ( strlen(MEMORY[0xA8B230]->uiName) )
    INIClass::SetString(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &MEMORY[0x81784C],
      (INIClass *)MEMORY[0xA8B230]->uiName);
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  v4 = 10000;
  *(_DWORD *)aP3.__pad_0 = 10000;
  v37 = 0;
  v35 = 0;
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)(i + 36), 0) )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 72))(i);
      v7 = (int *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)i + 72))(
                    i,
                    &aP3.sectionCount,
                    *(_DWORD *)(v6 + 4));
      IsoCoord::ToScreenOffset(*v7, (int)&aP3.headNode[1], &v39, &v38);
      v8 = v38 / 30;
      if ( v39 / 60 < v4 )
        v4 = v39 / 60;
      if ( v39 / 60 > (int)v37 )
        v37 = (CCINIClass *)(v39 / 60);
      if ( v8 < *(int *)aP3.__pad_0 )
        *(_DWORD *)aP3.__pad_0 = v38 / 30;
      if ( v8 > v35 )
        v35 = v38 / 30;
    }
  }
  INIClass::SetInt(
    a1,
    (INIClass *)&stru_830620.__pad_579C[32940],
    (CCINIClass *)&stru_830620.__pad_579C[32948],
    (INIClass *)v4,
    0);
  v9 = *(CCINIClass **)aP3.__pad_0;
  INIClass::SetInt(
    a1,
    (INIClass *)&stru_830620.__pad_579C[32940],
    (CCINIClass *)&stru_830620.__pad_579C[32932],
    *(INIClass **)aP3.__pad_0,
    0);
  INIClass::SetInt(
    a1,
    (INIClass *)&stru_830620.__pad_579C[32940],
    (CCINIClass *)&stru_82BBD0.sectionHead[1],
    (INIClass *)((char *)v37 - v4),
    0);
  INIClass::SetInt(a1, (INIClass *)&stru_830620.__pad_579C[32940], &g_INI_Key_Height, (INIClass *)(v35 - (_DWORD)v9), 0);
  v10 = 0;
  v11 = 0;
  waypoints = MEMORY[0xA8B230]->waypoints;
  do
  {
    if ( v11 >= 0 && *(_DWORD *)waypoints != dword_B05458 )
      v10 = (INIClass *)((char *)v10 + 1);
    ++v11;
    waypoints += 4;
  }
  while ( v11 < 8 );
  v36 = v10;
  INIClass::SetInt(a1, (INIClass *)&stru_830620.__pad_579C[32940], (CCINIClass *)&stru_830620.__pad_579C[32908], v10, 0);
  INIClass::SetInt(
    a1,
    (INIClass *)&stru_830620.__pad_579C[32940],
    (CCINIClass *)&stru_830620.__pad_579C[32884],
    *(INIClass **)(this + 4580),
    0);
  v13 = 0;
  do
  {
    v14 = (INIClass *)&v13->__pad_0[1];
    sprintf((char *const)&aP3.sectionHead[1], &stru_830620.__pad_579C[32872], &v13->__pad_0[1]);
    if ( (int)v13 >= (int)v36 )
    {
      aP3.headNode[1] = 0;
      aP3.headNode[2] = 0;
      INIEntry::Write2Integers(
        a1,
        (unsigned __int8 *)&stru_830620.__pad_579C[32940],
        (char *)&aP3.sectionHead[1],
        (CCINIClass *)&aP3.headNode[1]);
    }
    else
    {
      v38 = *(_DWORD *)&MEMORY[0xA8B230]->waypoints[4 * (_DWORD)v13];
      v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v38);
      v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15);
      v17 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v15 + 72))(
                     v15,
                     &aP3.__pad_20[8],
                     *(_DWORD *)(v16 + 4));
      IsoCoord::ToScreenOffset(*v17, (int)aP3.__pad_20, &v39, (int *)&v37);
      *(_DWORD *)aP3.__pad_0 = v39 / 60;
      aP3.headNode[0] = (int)v37 / 30;
      INIEntry::Write2Integers(a1, (unsigned __int8 *)&stru_830620.__pad_579C[32940], (char *)&aP3.sectionHead[1], &aP3);
    }
    v13 = v14;
  }
  while ( (int)v14 < 8 );
  ScenarioClass::RevealMapForHouse((_DWORD *)this, (CCINIClass *)a1);
  INIClass::SetString(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (INIClass *)&stru_830620.__pad_579C[33760],
    (INIClass *)(this + 4));
  INIClass::SetString(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (INIClass *)&stru_830620.__pad_579C[33744],
    (INIClass *)(this + 264));
  INIClass::SetWideAsHex(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&MEMORY[0x81784C].headNode[1],
    (CCINIClass *)(this + 4960));
  INIClass::SetInt(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&stru_830620.__pad_579C[33644],
    (INIClass *)4,
    0);
  INIClass::SetInt(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&stru_830620.__pad_579C[33612],
    (INIClass *)(*(_DWORD *)(this + 7296) / 100),
    0);
  LOBYTE(v18) = *(_BYTE *)(this + 13484);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33660], v18);
  LOBYTE(v19) = *(_BYTE *)(this + 13486);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33600], v19);
  LOBYTE(v20) = *(_BYTE *)(this + 13487);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33588], v20);
  LOBYTE(v21) = *(_BYTE *)(this + 13488);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33572], v21);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[32416], (INIClass *)1);
  LOBYTE(v22) = *(_BYTE *)(this + 13492);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33512], v22);
  LOBYTE(v23) = *(_BYTE *)(this + 13489);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33560], v23);
  LOBYTE(v24) = *(_BYTE *)(this + 13477);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33548], v24);
  INIClass::SetInt(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&stru_830620.__pad_579C[33504],
    *(INIClass **)(this + 7300),
    0);
  ScenarioClass::SaveTypeNameListToINI(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    &stru_830620.__pad_579C[33468],
    this + 13524);
  ScenarioClass::SaveIntListToINI(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    &stru_830620.__pad_579C[33444],
    (CCINIClass *)(this + 13552));
  ScenarioClass::loadMapData(
    a1,
    (CCINIClass *)&g_INI_Key_Lighting.sectionHead[1],
    g_INI_Key_Theme,
    *(_DWORD *)(this + 7280));
  if ( !(_BYTE)aP2 )
  {
    strcpy((char *)&aP3.unknown38, (const char *)&HouseClass_Player->field_15FF4);
    INIClass::SetString(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (INIClass *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&aP3.unknown38);
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      g_INI_Key_Intro.__pad_0,
      *(CCINIClass **)(this + 5172));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[31468],
      *(CCINIClass **)(this + 5176));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[33740],
      *(CCINIClass **)(this + 5180));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[33732],
      *(CCINIClass **)(this + 5184));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (char *)&stru_817244.INIClass_field_2C,
      *(CCINIClass **)(this + 5188));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[33720],
      *(CCINIClass **)(this + 5192));
    INIClass::SetStringByIndex(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[33704],
      *(CCINIClass **)(this + 5196));
    INIClass::SetDouble(
      a1,
      (CCINIClass *)&g_INI_Key_Lighting.sectionHead[1],
      &stru_830620.__pad_579C[33628],
      *(double *)(this + 7288));
    LOBYTE(v25) = *(_BYTE *)(this + 13485);
    INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33672], v25);
    LOBYTE(v26) = *(_BYTE *)(this + 13490);
    INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33536], v26);
    INIClass::SetInt(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (CCINIClass *)&stru_830620.__pad_579C[33484],
      *(INIClass **)(this + 13520),
      0);
    INIClass::SetInt(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (CCINIClass *)&stru_830620.__pad_579C[33328],
      *(INIClass **)(this + 524),
      0);
    INIClass::SetInt(
      a1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (CCINIClass *)&stru_830620.__pad_579C[33316],
      *(INIClass **)(this + 528),
      0);
  }
  INIClass::SetInt(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&stru_830620.__pad_579C[33688],
    (INIClass *)*(unsigned __int8 *)(this + 13500),
    0);
  LOBYTE(v27) = *(_BYTE *)(this + 13478);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33420], v27);
  LOBYTE(v28) = *(_BYTE *)(this + 13479);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33400], v28);
  LOBYTE(v29) = *(_BYTE *)(this + 13480);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33380], v29);
  LOBYTE(v30) = *(_BYTE *)(this + 13491);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33352], v30);
  LOBYTE(v31) = *(_BYTE *)(this + 13476);
  INIClass::SetBool(a1, (INIClass *)&g_INI_Key_Lighting.sectionHead[1], &stru_830620.__pad_579C[33340], v31);
  INIClass::SetInt(
    a1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (CCINIClass *)&stru_830620.__pad_579C[32428],
    *(INIClass **)(this + 13724),
    0);
  INIClass::ClearSection((int)a1, (INIClass *)&stru_830620.__pad_579C[31336], 0);
  v32 = 0;
  v33 = (_BYTE *)(this + 9354);
  do
  {
    if ( *v33 )
    {
      wsprintfA((LPSTR)&aP3.headNode[1], MEMORY[0x817F6C], v32);
      wsprintfA(v41[0].__pad_0, &stru_830620.__pad_579C[32864], v33, v33[40] != 0);
      INIClass::SetString(a1, (INIClass *)&stru_830620.__pad_579C[31336], (INIClass *)&aP3.headNode[1], v41);
    }
    ++v32;
    v33 += 41;
  }
  while ( v32 < 100 );
  INIClass::SaveTimeField(
    a1,
    (unsigned __int8 *)&stru_830620.__pad_579C[33288],
    &stru_830620.__pad_579C[33296],
    *(CCINIClass **)(this + 13732));
  INIClass::SaveTimeField(
    a1,
    (unsigned __int8 *)&stru_830620.__pad_579C[33288],
    &stru_830620.__pad_579C[33272],
    *(CCINIClass **)(this + 13736));
  INIClass::SaveTimeField(
    a1,
    (unsigned __int8 *)&stru_830620.__pad_579C[33288],
    &stru_830620.__pad_579C[33260],
    *(CCINIClass **)(this + 13740));
  INIClass::SetString(
    a1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (INIClass *)&stru_830620.__pad_579C[33224],
    (INIClass *)(this + 13744));
  INIClass::SetString(
    a1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (INIClass *)&stru_830620.__pad_579C[33184],
    (INIClass *)(this + 13775));
  INIClass::SetString(
    a1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (INIClass *)&stru_830620.__pad_579C[33148],
    (INIClass *)(this + 13806));
  INIClass::SetString(
    a1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (INIClass *)&stru_830620.__pad_579C[33108],
    (INIClass *)(this + 13837));
  INIClass::ClearSection((int)a1, (INIClass *)&g_INI_Key_Lighting, 0);
  INIClass::SetDouble(
    a1,
    &g_INI_Key_Lighting,
    (char *)&g_INI_Key_Lighting.headNode[2],
    (double)*(int *)(this + 13608) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, MEMORY[0x820538], (double)*(int *)(this + 13620) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, MEMORY[0x82053C], (double)*(int *)(this + 13624) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_Blue, (double)*(int *)(this + 13628) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_Ground, (double)*(int *)(this + 13632) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, aLevel[0].__pad_0, (double)*(int *)(this + 13636) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonAmbient, (double)*(int *)(this + 13640) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonRed, (double)*(int *)(this + 13644) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonGreen, (double)*(int *)(this + 13648) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonBlue, (double)*(int *)(this + 13652) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonGround, (double)*(int *)(this + 13656) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, g_INI_Key_IonLevel, (double)*(int *)(this + 13660) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[33064], (double)*(int *)(this + 13692) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[33048], (double)*(int *)(this + 13696) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[33032], (double)*(int *)(this + 13700) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[33016], (double)*(int *)(this + 13704) * 0.01);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[33000], (double)*(int *)(this + 13708) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[32984], (double)*(int *)(this + 13712) * 0.001);
  INIClass::SetDouble(a1, &g_INI_Key_Lighting, &stru_830620.__pad_579C[32956], (double)*(int *)(this + 13716) * 0.001);
  return 1;
}


// ==== 0x0068B8A0  ObjectClass::method_68B8A0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_68B8A0(void *this)
{
  DWORD v1; // eax
  unsigned int v2; // ecx
  char v4; // [esp+3h] [ebp-15h] BYREF
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v8; // [esp+10h] [ebp-8h] BYREF

  v5 = (int)this; /*0x68b8a3*/
  v6 = 0; /*0x68b8b3*/
  GetVersionString(&v7, &v4, 0, 0); /*0x68b8bb*/
  if ( v7 > 5 ) /*0x68b8c5*/
    v5 = Math::RoundToInt((double)v5 * 0.8); /*0x68b8d6*/
  v1 = sub_5CAF70((LONG *)&v8); /*0x68b8de*/
  v2 = v8; /*0x68b8e3*/
  if ( v1 || (_DWORD)v8 ) /*0x68b8ed*/
  {
    v8 = v1; /*0x68b8ff*/
    v6 = Math::RoundToInt(((double)v2 * 4294967296.0 + (double)v1) * 0.000001); /*0x68b922*/
  }
  return Math::RoundToInt((double)v5 * 200.0 / (double)v6); /*0x68b939*/
}


// ==== 0x0068B940  Power::ComputeHousePowerChecksum  this=ScenarioClass  sig=csp ====
int __thiscall ComputeHousePowerChecksum(int this, unsigned int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  int v23; // edx

  Checksum::AddString(a2, (unsigned __int8 *)(this + 5050)); /*0x68b952*/
  Power::TimerProcess(*(_DWORD *)(this + 5172)); /*0x68b960*/
  Power::TimerProcess(*(_DWORD *)(this + 5176)); /*0x68b96e*/
  Power::TimerProcess(*(_DWORD *)(this + 5180)); /*0x68b97c*/
  Power::TimerProcess(*(_DWORD *)(this + 5184)); /*0x68b98a*/
  Power::TimerProcess(*(_DWORD *)(this + 5188)); /*0x68b998*/
  Power::TimerProcess(*(_DWORD *)(this + 5192)); /*0x68b9a6*/
  Power::TimerProcess(*(_DWORD *)(this + 5196)); /*0x68b9b4*/
  Power::TimerProcess(*(_DWORD *)(this + 7284)); /*0x68b9c2*/
  Power::TimerProcess(*(_DWORD *)(this + 7300)); /*0x68b9d0*/
  Power::TimerProcess(*(_DWORD *)(this + 7280)); /*0x68b9de*/
  Checksummer::Add_double(*(_DWORD *)(this + 7288), *(_DWORD *)(this + 7292)); /*0x68b9f3*/
  LOBYTE(v3) = *(_BYTE *)(this + 13500); /*0x68b9f8*/
  Power::FlagProcess((int *)a2, v3); /*0x68ba01*/
  LOBYTE(v4) = *(_BYTE *)(this + 13485); /*0x68ba06*/
  Power::FlagProcess((int *)a2, v4); /*0x68ba0f*/
  Power::TimerProcess(*(_DWORD *)(this + 7296) / 100); /*0x68ba2e*/
  Power::TimerProcess(*(_DWORD *)(this + 13472)); /*0x68ba3c*/
  LOBYTE(v5) = *(_BYTE *)(this + 13484); /*0x68ba41*/
  Power::FlagProcess((int *)a2, v5); /*0x68ba4a*/
  Power::TimerProcess(*(_DWORD *)(this + 13516)); /*0x68ba58*/
  LOBYTE(v6) = *(_BYTE *)(this + 13486); /*0x68ba5d*/
  Power::FlagProcess((int *)a2, v6); /*0x68ba66*/
  LOBYTE(v7) = *(_BYTE *)(this + 13487); /*0x68ba6b*/
  v8 = Power::FlagProcess((int *)a2, v7); /*0x68ba74*/
  LOBYTE(v8) = *(_BYTE *)(this + 13488); /*0x68ba79*/
  Power::FlagProcess((int *)a2, v8); /*0x68ba82*/
  LOBYTE(v9) = *(_BYTE *)(this + 13490); /*0x68ba87*/
  Power::FlagProcess((int *)a2, v9); /*0x68ba90*/
  LOBYTE(v10) = *(_BYTE *)(this + 13492); /*0x68ba95*/
  v11 = Power::FlagProcess((int *)a2, v10); /*0x68ba9e*/
  LOBYTE(v11) = *(_BYTE *)(this + 13489); /*0x68baa3*/
  Power::FlagProcess((int *)a2, v11); /*0x68baac*/
  Power::TimerProcess(*(_DWORD *)(this + 7300)); /*0x68baba*/
  Power::TimerProcess(*(_DWORD *)(this + 13520)); /*0x68bac8*/
  v12 = *(_DWORD *)(this + 4584); /*0x68bacd*/
  v13 = *(_DWORD *)(this + 4592); /*0x68bad3*/
  if ( v12 != -1 ) /*0x68badc*/
  {
    if ( (int)MEMORY[0xA8ED84] - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)MEMORY[0xA8ED84] - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *(_DWORD *)(this + 4632); /*0x68baf8*/
  v15 = *(_DWORD *)(this + 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *(_DWORD *)(this + 4644); /*0x68bb23*/
  v17 = *(_DWORD *)(this + 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)MEMORY[0xA8ED84] - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)MEMORY[0xA8ED84] - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *(_DWORD *)(this + 4656); /*0x68bb4e*/
  v19 = *(_DWORD *)(this + 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)MEMORY[0xA8ED84] - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)MEMORY[0xA8ED84] - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *(_DWORD *)(this + 4668); /*0x68bb79*/
  v21 = *(_DWORD *)(this + 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)MEMORY[0xA8ED84] - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)MEMORY[0xA8ED84] - v20; /*0x68bb96*/
  }
  Power::TimerProcess(v21); /*0x68bb9f*/
  v22 = *(_DWORD *)(this + 1564); /*0x68bbaa*/
  if ( *(_DWORD *)(this + 1556) != -1 ) /*0x68bbb3*/
    v22 += Timer::GetTicks() - *(_DWORD *)(this + 1556); /*0x68bbc6*/
  Power::TimerProcess(v22); /*0x68bbcb*/
  Power::TimerProcess(*(_DWORD *)(this + 1548)); /*0x68bbd9*/
  Power::TimerProcess(*(_DWORD *)(this + 1552)); /*0x68bbe7*/
  Power::TimerProcess(*(_DWORD *)(this + 4696)); /*0x68bbf5*/
  Power::TimerProcess(*(_DWORD *)(this + 13632)); /*0x68bc03*/
  Power::TimerProcess(*(_DWORD *)(this + 13636)); /*0x68bc11*/
  LOBYTE(v23) = *(_BYTE *)(this + 13476); /*0x68bc16*/
  Power::FlagProcess((int *)a2, v23); /*0x68bc1f*/
  Power::TimerProcess(*(_DWORD *)(this + 13640)); /*0x68bc2d*/
  Power::TimerProcess(*(_DWORD *)(this + 13644)); /*0x68bc3b*/
  Power::TimerProcess(*(_DWORD *)(this + 13648)); /*0x68bc49*/
  Power::TimerProcess(*(_DWORD *)(this + 13652)); /*0x68bc57*/
  Power::TimerProcess(*(_DWORD *)(this + 13656)); /*0x68bc65*/
  Power::TimerProcess(*(_DWORD *)(this + 13660)); /*0x68bc73*/
  Power::TimerProcess(*(_DWORD *)(this + 13608)); /*0x68bc81*/
  Power::TimerProcess(*(_DWORD *)(this + 13612)); /*0x68bc8f*/
  return Power::TimerProcess(*(_DWORD *)(this + 13616)); /*0x68bca2*/
}


// ==== 0x0068BCB0  AbstractClass::updateAITimer  this=ScenarioClass  sig=csp ====
int __thiscall sub_68BCB0(_DWORD *this)
{
  int result; // eax

  result = this->random + 1; /*0x68bcb6*/
  this->random = result; /*0x68bcb7*/
  return result; /*0x68bcbd*/
}


// ==== 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::Get_Waypoint_Location(char *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(this + 4 * a3 + 1586); /*0x68bccf*/
  return a2; /*0x68bcd1*/
}


// ==== 0x0068BCE0  ScenarioClass::GetCellFromArray  this=ScenarioClass  sig=csp ====
void *__thiscall ScenarioClass::GetCellFromArray(__int16 *this, ScenarioClass *aP1)
{
  return CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 2 * (_DWORD)aP1 + 793); /*0x68bcf6*/
}


// ==== 0x0068BD00  Cell::GetWorldCoords  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall Cell_GetWorldCoords(__int16 *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 2 * a3 + 793); /*0x68bd1b*/
  v4 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v9); /*0x68bd26*/
  v5 = *v4; /*0x68bd29*/
  v6 = v4[1]; /*0x68bd2b*/
  v7 = v4[2]; /*0x68bd2e*/
  if ( (v3[80] & 0x500) != 0 ) /*0x68bd3a*/
    v7 += MEMORY[0xB054BC]; /*0x68bd3c*/
  *a2 = v5; /*0x68bd48*/
  a2[1] = v6; /*0x68bd4a*/
  a2[2] = v7; /*0x68bd4e*/
  return a2; /*0x68bd4d*/
}


// ==== 0x0068BD60  ScenarioClass::ClearAllWaypoints  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::ClearAllWaypoints(char *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 1586; /*0x68bd60*/
  v2 = 702; /*0x68bd66*/
  do /*0x68bd77*/
  {
    *result++ = dword_B05458; /*0x68bd71*/
    --v2; /*0x68bd76*/
  }
  while ( v2 ); /*0x68bd77*/
  return result; /*0x68bd79*/
}


// ==== 0x0068BD80  ScenarioClass::Is_Waypoint_Valid  this=ScenarioClass  sig=csp ====
bool __thiscall ScenarioClass::Is_Waypoint_Valid(char *this, unsigned int a2)
{
  return a2 <= 0x2BD && *(_DWORD *)(this + 4 * a2 + 1586) != dword_B05458; /*0x68bdb3*/
}


// ==== 0x0068BDC0  ScenarioClass::ReadWaypoints  this=ScenarioClass  sig=csp ====
__int16 __thiscall ScenarioClass::ReadWaypoints(__int16 *this, CCINIClass *aP1)
{
  int v3; // esi
  __int16 *v4; // edi
  signed int Int_Overwrite; // eax
  signed int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  CHAR v10[20]; // [esp+10h] [ebp-14h] BYREF
  CCINIClass *aP1a; // [esp+28h] [ebp+4h]

  v3 = 0; /*0x68bdcb*/
  v4 = this + 793; /*0x68bdcd*/
  do /*0x68be7f*/
  {
    wsprintfA(v10, MEMORY[0x817F6C], v3); /*0x68bdde*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((int)aP1, g_INI_Key_Waypoints, (CCINIClass *)v10, 0); /*0x68bdf5*/
    v6 = Int_Overwrite; /*0x68bdfa*/
    if ( Int_Overwrite ) /*0x68bdfe*/
    {
      LOWORD(aP1a) = Int_Overwrite % 1000; /*0x68be19*/
      Int_Overwrite = (unsigned int)((unsigned __int64)(274877907LL * Int_Overwrite) >> 32) >> 31; /*0x68be25*/
      HIWORD(aP1a) = v6 / 1000; /*0x68be2a*/
      *(_DWORD *)v4 = aP1a; /*0x68be33*/
    }
    else
    {
      *(_DWORD *)v4 = dword_B05458; /*0x68be06*/
    }
    if ( v3 >= 0 ) /*0x68be3f*/
    {
      if ( *v4 != (_WORD)dword_B05458 || (LOWORD(Int_Overwrite) = v4[1], (_WORD)Int_Overwrite != HIWORD(dword_B05458)) ) /*0x68be58*/
      {
        v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v4); /*0x68be60*/
        v8 = v7[80]; /*0x68be65*/
        Int_Overwrite = (signed int)(v7 + 80); /*0x68be6b*/
        *(_DWORD *)Int_Overwrite = v8 | 4; /*0x68be73*/
      }
    }
    ++v3; /*0x68be75*/
    v4 += 2; /*0x68be76*/
  }
  while ( v3 < 702 ); /*0x68be7f*/
  return Int_Overwrite; /*0x68be85*/
}


// ==== 0x0068BE90  ScenarioClass::Write_Waypoints  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Write_Waypoints(__int16 *this, CCINIClass *aP1)
{
  char result; // al
  int v4; // edi
  __int16 *v5; // esi
  CHAR v6[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::ClearSection((int)aP1, (INIClass *)g_INI_Key_Waypoints, 0); /*0x68bea7*/
  v4 = 0; /*0x68beb2*/
  v5 = this + 793; /*0x68beb4*/
  do /*0x68bf16*/
  {
    if ( *(_DWORD *)v5 != dword_B05458 ) /*0x68bec4*/
    {
      wsprintfA(v6, MEMORY[0x817F6C], v4); /*0x68bede*/
      result = INIClass::SetInt(aP1->__pad_0, (INIClass *)g_INI_Key_Waypoints, (INIClass *)v6, *v5 + 1000 * v5[1], 0); /*0x68bf07*/
    }
    ++v4; /*0x68bf0c*/
    v5 += 2; /*0x68bf0d*/
  }
  while ( v4 < 702 ); /*0x68bf16*/
  return result; /*0x68bf18*/
}


// ==== 0x0068BF30  ScenarioClass::Set_Default_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Default_Waypoint(char *this, int a2)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = dword_B05458; /*0x68bf3a*/
  return a2; /*0x68bf41*/
}


// ==== 0x0068BF50  ScenarioClass::Set_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Waypoint(char *this, int a2, ScenarioClass *aP2)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = aP2; /*0x68bf58*/
  return (int)aP2->nextScenario; /*0x68bf5f*/
}


// ==== 0x0068C030  BuildingType::Init  this=ScenarioClass  sig=csp ====
int __thiscall sub_68C030(_DWORD *this, unsigned int a2)
{
  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *(this + a2 + 1120); /*0x68c03d*/
}


// ==== 0x0068C050  ObjectClass::Map_Setup  this=ObjectClass  sig=csp ====
void sub_68C050()
{
  int v0; // edi
  int WarRatio_high; // ecx
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int HelipadRatio; // edx
  int v10; // eax
  int v11; // edx
  int AirstripRatio_high; // ecx
  void **v13; // [esp+8h] [ebp-18h] BYREF
  void *Block; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  char v16; // [esp+15h] [ebp-Bh]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v0 = 0; /*0x68c059*/
  if ( unk_8B41F0 > 0 ) /*0x68c05d*/
  {
    WarRatio_high = HIDWORD(MEMORY[0x8871E0]->?); /*0x68c069*/
    if ( WarRatio_high > 0 && WarRatio_high >= unk_8B41F0 ) /*0x68c079*/
    {
      VectorClass::Construct(&v13, 0, 0); /*0x68c086*/
      v2 = 10; /*0x68c091*/
      v13 = &vt_DynamicVectorClass_int; /*0x68c096*/
      v18 = 10; /*0x68c09e*/
      v17 = 0; /*0x68c0a2*/
      v3 = 0; /*0x68c0ac*/
      if ( SHIDWORD(MEMORY[0x8871E0]->?) > 0 ) /*0x68c0b0*/
      {
        v4 = v15; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v17 < v4 ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v16 || !v4) && v2 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
LABEL_14:
          if ( ++v3 >= SHIDWORD(MEMORY[0x8871E0]->?) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v2 = v18; /*0x68c0b8*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v13[2])(&v13, v2 + v4, 0) ) /*0x68c0df*/
        {
LABEL_12:
          v5 = v17++; /*0x68c0e6*/
          *((_DWORD *)Block + v5) = v3; /*0x68c0f5*/
        }
        v4 = v15; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
LABEL_15:
      v6 = 0; /*0x68c10b*/
      if ( unk_8B41F0 > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v17 - 1); /*0x68c12f*/
          if ( v7 < v17 ) /*0x68c13a*/
          {
            v8 = v7; /*0x68c13d*/
            if ( v7 < --v17 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v8; /*0x68c14b*/
                *((_DWORD *)Block + v8 - 1) = *((_DWORD *)Block + v8); /*0x68c14f*/
              }
              while ( v8 < v17 ); /*0x68c159*/
            }
          }
          HelipadRatio = MEMORY[0x8871E0]->?; /*0x68c164*/
          if ( v7 + 1 <= HelipadRatio ) /*0x68c16c*/
            break; /*0x68c16c*/
          v10 = v7 - HelipadRatio; /*0x68c16e*/
          v11 = *(_DWORD *)MEMORY[0x8871E0]->?; /*0x68c170*/
          if ( v10 + 1 <= v11 ) /*0x68c17b*/
          {
            v0 = *(_DWORD *)(LODWORD(MEMORY[0x8871E0]->?) + 4 * v10); /*0x68c19a*/
          }
          else
          {
            v7 = v10 - v11; /*0x68c183*/
            if ( v7 + 1 <= MEMORY[0x8871E0]->? ) /*0x68c18a*/
            {
              AirstripRatio_high = *(_DWORD *)MEMORY[0x8871E0]->?; /*0x68c18c*/
LABEL_25:
              v0 = *(_DWORD *)(AirstripRatio_high + 4 * v7); /*0x68c1a5*/
            }
          }
          if ( v0 ) /*0x68c1aa*/
            *(_DWORD *)(*((_DWORD *)unk_8B41E4 + v6) + 1780) = v0; /*0x68c1b5*/
          if ( ++v6 >= unk_8B41F0 ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        AirstripRatio_high = HIDWORD(MEMORY[0x8871E0]->?); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
LABEL_29:
      v13 = &vt_VectorClass_int; /*0x68c1ca*/
      if ( Block ) /*0x68c1d9*/
      {
        if ( v16 ) /*0x68c1e1*/
          __3_YAXPAX_Z(Block); /*0x68c1e4*/
      }
    }
  }
}


// ==== 0x0068C200  TechnoTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_68C200(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x68c209*/
  this->Capacity = a2; /*0x68c210*/
  this->q030 = 1; /*0x68c213*/
  this->q034 = 0; /*0x68c217*/
  *this = &vt_VectorClass_TechnoTypeClass; /*0x68c21b*/
  if ( a2 ) /*0x68c221*/
  {
    if ( a3 ) /*0x68c229*/
    {
      this->Items = a3; /*0x68c22b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x68c23c*/
      this->q034 = 1; /*0x68c23f*/
    }
  }
  *this = &vt_DynamicVectorClass_TechnoTypeClass; /*0x68c243*/
  this->u32_14 = 10; /*0x68c249*/
  this->q010 = 0; /*0x68c250*/
  return this; /*0x68c259*/
}


// ==== 0x0068C260  ObjectClass::DynamicVector_PushBack  this=VectorClass  sig=csp ====
char __thiscall DynamicVector_PushBack(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)this->Capacity; /*0x68c263*/
  if ( this->q010 >= (int)v3 ) /*0x68c26b*/
  {
    if ( !this->q034 && v3 ) /*0x68c276*/
      return 0; /*0x68c276*/
    v4 = this->u32_14; /*0x68c278*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x68c288*/
      return 0; /*0x68c28f*/
  }
  v6 = this->q010; /*0x68c295*/
  v7 = (VectorClass *)this->Items; /*0x68c298*/
  this->q010 = v6 + 1; /*0x68c29e*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x68c2a8*/
  return 1; /*0x68c291*/
}


// ==== 0x0068C2B0  Multiplayer::CopyDataArray  this=Multiplayer  sig=csp ====
_DWORD *__thiscall Multiplayer::CopyDataArray(_DWORD *this, ObjectClass *aP1)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x68c2bf*/
  v3 = *(_DWORD *)&aP1->__pad_0[8]; /*0x68c2c2*/
  this->u32_8 = v3; /*0x68c2c7*/
  if ( !v3 ) /*0x68c2ca*/
  {
    this->u32_4 = 0; /*0x68c319*/
    this->u8_D = 0; /*0x68c320*/
    return this; /*0x68c324*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x68c2d4*/
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
  this->u32_4 = v4; /*0x68c2eb*/
  if ( !v4 ) /*0x68c2ee*/
    return this; /*0x68c2ee*/
  v5 = this->u32_8; /*0x68c2f0*/
  v6 = 0; /*0x68c2f3*/
  this->u8_D = 1; /*0x68c2f7*/
  if ( v5 <= 0 ) /*0x68c2fb*/
    return this; /*0x68c2fb*/
  do /*0x68c30f*/
  {
    *(_DWORD *)(this->u32_4 + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->__pad_0[4] + 4 * v6); /*0x68c306*/
    ++v6; /*0x68c30c*/
  }
  while ( v6 < this->u32_8 ); /*0x68c30f*/
  return this; /*0x68c313*/
}


// ==== 0x0068C330  sub_68C330  this=-  sig=ida-proto ====
int sub_68C330()
{
  MEMORY[0xB054D4] = 0; /*0x68c337*/
  MEMORY[0xB054D8] = 0; /*0x68c33c*/
  MEMORY[0xB054DC] = 1; /*0x68c341*/
  MEMORY[0xB054DD] = 0; /*0x68c348*/
  MEMORY[0xB054D0] = (int)&vt_DynamicVectorClass_ColorScheme; /*0x68c34d*/
  MEMORY[0xB054E4] = 10; /*0x68c357*/
  MEMORY[0xB054E0] = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}


// ==== 0x0068C370  sub_68C370  this=-  sig=ida-proto ====
void __cdecl sub_68C370()
{
  MEMORY[0xB054D0] = (int)&vt_VectorClass_ColorScheme; /*0x68c378*/
  if ( MEMORY[0xB054D4] && MEMORY[0xB054DD] ) /*0x68c38c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB054D4]); /*0x68c38f*/
    MEMORY[0xB054D4] = 0; /*0x68c397*/
  }
  MEMORY[0xB054DD] = 0; /*0x68c39d*/
  MEMORY[0xB054D8] = 0; /*0x68c3a3*/
}


// ==== 0x0068C3B0  FontClass::CreateGlyphColor  this=FontClass  sig=csp ====
int __fastcall FontClass::CreateGlyphColor(
        ObjectClass *aP0,
        const void *a1,
        ObjectClass *aP2,
        ObjectClass *aP3,
        int a5,
        ObjectClass *aP5,
        ObjectClass *aP6,
        int aP5a,
        int aP6a,
        int aP8)
{
  int v11; // ebx
  int v12; // edx
  int v13; // esi
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int v17; // eax
  __int16 v18; // cx
  char v19; // dl
  LightConvertClass *v20; // eax
  int v21; // eax
  int v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h] BYREF
  IUnknown *v25[2]; // [esp+18h] [ebp-20h]
  IUnknown *aP0a[2]; // [esp+20h] [ebp-18h]
  double v27; // [esp+28h] [ebp-10h]
  double v28; // [esp+30h] [ebp-8h]

  v11 = (unsigned __int8)aP0->__pad_0[0]; /*0x68c3bf*/
  v12 = (unsigned __int8)aP0->__pad_0[2]; /*0x68c3c8*/
  v24 = (unsigned __int8)aP0->__pad_0[1]; /*0x68c3d0*/
  v23 = v12; /*0x68c3d4*/
  Block::Copy(aP3, a1); /*0x68c3d8*/
  v13 = 0; /*0x68c3e1*/
  v25[0] = 0; /*0x68c3e3*/
  v27 = (double)v24; /*0x68c3e7*/
  v28 = (double)v23; /*0x68c3ef*/
  do /*0x68c4a7*/
  {
    v14 = (double)(int)v25[0]; /*0x68c3f3*/
    *(double *)v25 = v14 * 0.08144869842640204 + 0.3490658503988659; /*0x68c407*/
    *(double *)aP0a = v14 * 0.04654211338651545 + 0.8726646259971648; /*0x68c417*/
    if ( !v13 ) /*0x68c41b*/
    {
      v25[0] = (IUnknown *)1413754136; /*0x68c41d*/
      v25[1] = (IUnknown *)1070146043; /*0x68c425*/
    }
    v15 = Math::SinCos(aP0a[0]); /*0x68c437*/
    BYTE1(v23) = Math::RoundToInt(v15 * v27); /*0x68c449*/
    LOBYTE(v23) = v11; /*0x68c453*/
    v16 = Math::ArcTan2(v25[0]); /*0x68c457*/
    BYTE2(v23) = Math::RoundToInt(v16 * v28); /*0x68c46c*/
    v17 = Color::ConvertToRGB((unsigned __int8 *)&v23, (int)&v24); /*0x68c475*/
    v18 = *(_WORD *)v17; /*0x68c47a*/
    v19 = *(_BYTE *)(v17 + 2); /*0x68c47d*/
    v20 = (LightConvertClass *)((char *)aP3 + 2 * ((v13 + 16) % 256) + (v13 + 16) % 256); /*0x68c497*/
    v25[0] = (IUnknown *)++v13; /*0x68c49d*/
    *(_WORD *)v20->__pad_0 = v18; /*0x68c4a1*/
    v20->field_1[1] = v19; /*0x68c4a4*/
  }
  while ( v13 < 16 ); /*0x68c4a7*/
  v21 = __2_YAPAXI_Z(0x1B4u); /*0x68c4b2*/
  if ( v21 ) /*0x68c4bc*/
    return LightConvertClass::Constructor( /*0x68c4e2*/
             v21,
             (ConvertClass *)aP3,
             aP2,
             a5,
             aP6,
             (LightConvertClass *)aP5a,
             (ObjectClass *)aP6a,
             0,
             (LightConvertClass *)aP8,
             aP5);
  else
    return 0; /*0x68c4f2*/
}


// ==== 0x0068C710  FontClass::InitMetrics  this=AbstractClass  sig=csp ====
char *__thiscall FontClass::InitMetrics(
        char *this,
        char *Source,
        ObjectClass *aP2,
        ObjectClass *aP3,
        int a5,
        int a6,
        char a7)
{
  int v8; // ecx
  char *v9; // eax
  int v10; // eax

  v8 = 256; /*0x68c715*/
  v9 = this + 4; /*0x68c71f*/
  do /*0x68c72d*/
  {
    *v9 = 0; /*0x68c721*/
    v9[1] = 0; /*0x68c723*/
    v9[2] = 0; /*0x68c726*/
    v9 += 3; /*0x68c729*/
    --v8; /*0x68c72c*/
  }
  while ( v8 ); /*0x68c72d*/
  this->q304 = _strdup(Source); /*0x68c744*/
  this->q184 = *(_WORD *)aP2->__pad_0; /*0x68c752*/
  this->q30A = aP2->__pad_0[2]; /*0x68c75d*/
  this->q0C3 = 0; /*0x68c778*/
  this->q0C4 = a6; /*0x68c77e*/
  *((_DWORD *)this + 197) = 16; /*0x68c784*/
  *((_DWORD *)this + 198) = 15; /*0x68c78a*/
  *((_DWORD *)this + 199) = 25; /*0x68c794*/
  this->q0C8 = 24; /*0x68c79e*/
  this->q324 = 22; /*0x68c7a8*/
  this->q328 = 16; /*0x68c7b2*/
  *((_DWORD *)this + 203) = 19; /*0x68c7b8*/
  this->q0CC = 16; /*0x68c7c2*/
  this->q334 = 16; /*0x68c7c8*/
  this->q338 = 21; /*0x68c7d2*/
  this->q0C3 = FontClass::CreateGlyphColor( /*0x68c7ee*/
                              this + 776,
                              aP3,
                              a5,
                              this + 4,
                              *(int *)&MEMORY[0x87F8E4].__pad_5568[9404],
                              a6,
                              1000,
                              1000,
                              1000,
                              (int)&stru_830620.__pad_579C[33776]);
  if ( a7 ) /*0x68c7fb*/
  {
    if ( MEMORY[0xB054E0] < MEMORY[0xB054D8] /*0x68c830*/
      || (MEMORY[0xB054DD] || !MEMORY[0xB054D8])
      && MEMORY[0xB054E4] > 0
      && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xB054D0]->field_8)(
           &MEMORY[0xB054D0],
           MEMORY[0xB054D8] + MEMORY[0xB054E4],
           0) )
    {
      v10 = MEMORY[0xB054E0]++; /*0x68c83d*/
      *((_DWORD *)MEMORY[0xB054D4] + v10) = this; /*0x68c84c*/
    }
    *(_DWORD *)this = MEMORY[0xB054E0]; /*0x68c855*/
  }
  return this; /*0x68c859*/
}


// ==== 0x0068C860  ObjectClass::LoadTheaterClassMIX_Load  this=AbstractClass  sig=csp ====
int __thiscall LoadTheaterClassMIX_Load(int this, BlowStraw *aP1, int a3, int a4, int a5, int a6)
{
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int result; // eax

  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 780); /*0x68c863*/
  if ( v7 ) /*0x68c86b*/
  {
    (**v7)(v7, 1); /*0x68c871*/
    *(_DWORD *)(this + 780) = 0; /*0x68c873*/
  }
  result = FontClass::CreateGlyphColor( /*0x68c8b2*/
             (char *)(this + 776),
             aP1,
             a3,
             (void *)(this + 4),
             *(int *)&MEMORY[0x87F8E4].__pad_5568[9404],
             *(_DWORD *)(this + 784),
             a4,
             a5,
             a6,
             (int)&stru_830620.__pad_579C[33776]);
  *(_DWORD *)(this + 780) = result; /*0x68c8b7*/
  return result; /*0x68c8bd*/
}


// ==== 0x0068C8D0  ColorScheme::Destructor  this=ColorScheme  sig=csp ====
int __thiscall ColorScheme_Destructor(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 772) ) /*0x68c8d4*/
    free(*(void **)(this + 772)); /*0x68c8df*/
  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 780); /*0x68c8e7*/
  *(_DWORD *)(this + 772) = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  *(_DWORD *)(this + 780) = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB054D0] + 16))(&MEMORY[0xB054D0], &v4); /*0x68c91f*/
  if ( result != -1 && result < MEMORY[0xB054E0] && result < --MEMORY[0xB054E0] ) /*0x68c93b*/
  {
    do /*0x68c953*/
    {
      ++result; /*0x68c943*/
      *((_DWORD *)MEMORY[0xB054D4] + result - 1) = *((_DWORD *)MEMORY[0xB054D4] + result); /*0x68c947*/
    }
    while ( result < MEMORY[0xB054E0] ); /*0x68c953*/
  }
  return result; /*0x68c925*/
}


// ==== 0x0068C9C0  System_Read_68C9C0  this=INIClass  sig=csp ====
int __fastcall System_Read_68C9C0(BlowStraw *aP0, ObjectClass *a1, ObjectClass *aP3, int a4, int a5)
{
  int v6; // esi
  IUnknown *v7; // eax
  bool v8; // zf
  char *v9; // eax

  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( *(int *)stru_B05488.__pad_58 > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
LABEL_6:
    v9 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, aP0->__pad_0, a1, aP3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = (IUnknown *)stru_B05488.field_4C; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    v8 = _strcmpi(aP0, *(const void **)(*(&v7->field_0 + v6) + 772)) == 0; /*0x68c9f6*/
    v7 = (IUnknown *)stru_B05488.field_4C; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= *(int *)stru_B05488.__pad_58 ) /*0x68ca13*/
      goto LABEL_6; /*0x68ca13*/
  }
}


// ==== 0x0068CA50  FindBuildingAnimByName  this=char*  sig=csp ====
int __fastcall FindBuildingAnimByName(AbstractClass *aP0, int a2)
{
  int v2; // esi
  IUnknown *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68ca57*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(aP0, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0; /*0x68ca7a*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= *(int *)stru_B05488.__pad_58 ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *(_DWORD *)(stru_B05488.field_4C + 4 * v2); /*0x68caa3*/
}


// ==== 0x0068CAB0  Network_Assign  this=-  sig=csp ====
int __fastcall Network_Assign(void *a1, int a2)
{
  int v2; // esi
  IUnknown *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0; /*0x68cada*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x68cadc*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= *(int *)stru_B05488.__pad_58 ) /*0x68caf7*/
      return -1; /*0x68caf7*/
  }
  return v2; /*0x68caf9*/
}


// ==== 0x0068CB10  sub_68CB10  this=-  sig=ida-proto ====
int sub_68CB10()
{
  MEMORY[0xB054F8] = 0; /*0x68cb12*/
  MEMORY[0xB054FC] = 0; /*0x68cb17*/
  MEMORY[0xB05500] = 0; /*0x68cb1c*/
  MEMORY[0xB05504] = 0; /*0x68cb21*/
  return 0; /*0x68cb26*/
}


// ==== 0x0068CB30  sub_68CB30  this=-  sig=ida-proto ====
void sub_68CB30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68cb3c*/
  MEMORY[0xB05510] = Math::Sqrt(v0 + v0); /*0x68cb4e*/
}


// ==== 0x0068CB60  sub_68CB60  this=-  sig=ida-proto ====
void sub_68CB60()
{
  MEMORY[0xB05578] = MEMORY[0xB05510] / 60.0; /*0x68cb6c*/
}


// ==== 0x0068CB80  sub_68CB80  this=-  sig=ida-proto ====
void sub_68CB80()
{
  MEMORY[0xB05558] = 1.0 / MEMORY[0xB05578]; /*0x68cb8c*/
}


// ==== 0x0068CBA0  sub_68CBA0  this=-  sig=ida-proto ====
void sub_68CBA0()
{
  MEMORY[0xB05550] = 0.0174532925199433 * 45.0; /*0x68cbac*/
}


// ==== 0x0068CBC0  sub_68CBC0  this=-  sig=ida-proto ====
void sub_68CBC0()
{
  MEMORY[0xB05518] = 0.0174532925199433 * 60.0; /*0x68cbcc*/
}


// ==== 0x0068CBE0  sub_68CBE0  this=-  sig=ida-proto ====
void sub_68CBE0()
{
  MEMORY[0xB054E8] = 0.0174532925199433 * 90.0; /*0x68cbec*/
}


// ==== 0x0068CC00  sub_68CC00  this=-  sig=ida-proto ====
__int64 sub_68CC00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB054E8] - MEMORY[0xB05518]); /*0x68cc12*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05510] * 0.5); /*0x68cc26*/
  MEMORY[0xB05580] = result; /*0x68cc2b*/
  return result; /*0x68cc30*/
}


// ==== 0x0068CC40  sub_68CC40  this=-  sig=ida-proto ====
void sub_68CC40()
{
  MEMORY[0xB05520] = Math::ArcTan((double)MEMORY[0xB05580] * 0.00390625); /*0x68cc57*/
}


// ==== 0x0068CC70  sub_68CC70  this=-  sig=ida-proto ====
void sub_68CC70()
{
  MEMORY[0xB05548] = Math::ArcTan((double)(2 * MEMORY[0xB05580]) / MEMORY[0xB05510]); /*0x68cc92*/
}


// ==== 0x0068CCA0  sub_68CCA0  this=-  sig=ida-proto ====
__int64 sub_68CCA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05580]) + 0.5); /*0x68ccbb*/
  MEMORY[0xB05574] = result; /*0x68ccc0*/
  return result; /*0x68ccc6*/
}


// ==== 0x0068CCD0  sub_68CCD0  this=-  sig=ida-proto ====
int sub_68CCD0()
{
  MEMORY[0xB05508] = 0; /*0x68ccd2*/
  MEMORY[0xB0550A] = 0; /*0x68ccd8*/
  return 0; /*0x68ccde*/
}


// ==== 0x0068CCE0  sub_68CCE0  this=-  sig=ida-proto ====
int sub_68CCE0()
{
  MEMORY[0xB05538] = 0; /*0x68cce2*/
  MEMORY[0xB0553C] = 0; /*0x68cce7*/
  MEMORY[0xB05540] = 0; /*0x68ccec*/
  return 0; /*0x68ccf1*/
}


// ==== 0x0068CD00  sub_68CD00  this=-  sig=ida-proto ====
int sub_68CD00()
{
  MEMORY[0xB05570] = 0; /*0x68cd05*/
  MEMORY[0xB05568] = 128; /*0x68cd0f*/
  MEMORY[0xB0556C] = 128; /*0x68cd14*/
  return 128; /*0x68cd19*/
}


// ==== 0x0068CD20  ScoreScreen::Display  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::Display(int *this)
{
  Movie *v2; // eax
  CCINIClass *EntireFile; // ebx
  int v4; // edi
  char *v5; // ecx
  char v6; // al
  char v7; // dl
  char *v8; // eax
  _DWORD *v9; // eax
  char *v10; // edi
  IUnknown *v11; // eax
  char *v12; // eax
  int *v13; // edi
  int v14; // eax
  char **v15; // ebx
  int v16; // ecx
  int v17; // eax
  AbstractClass *v18; // eax
  int v19; // edx
  int v20; // eax
  AbstractClass *v21; // ebx
  int v22; // ecx
  int v23; // eax
  AbstractClass *v24; // eax
  int v25; // edx
  int v26; // eax
  AbstractClass *v27; // ebx
  int v28; // ecx
  int v29; // eax
  AbstractClass *v30; // eax
  int v31; // edx
  int v32; // eax
  AbstractClass *v33; // ebx
  int v34; // ecx
  int v35; // eax
  AbstractClass *v36; // eax
  int v37; // edx
  int v38; // eax
  AbstractClass *v39; // ebx
  int v40; // ecx
  int v41; // eax
  AbstractClass *v42; // eax
  int v43; // edx
  int v44; // eax
  AbstractClass *v45; // ebx
  int v46; // ecx
  int v47; // eax
  AbstractClass *v48; // eax
  int v49; // edx
  int v50; // eax
  AbstractClass *v51; // ebx
  int v52; // ecx
  int v53; // eax
  AbstractClass *v54; // eax
  int v55; // edx
  _DWORD *eax79; // eax
  ScoreFontClass *v56; // eax
  _DWORD *v58; // eax
  ScoreFontClass *v57; // eax
  AbstractClass **ebx85; // ebx
  int i; // edi
  _DWORD *v62; // eax
  ConvertClass *v60; // eax
  _DWORD *v64; // edi
  int v65; // esi
  int v66; // eax
  LONG left; // eax
  int j; // edi
  signed int k; // edi
  int v70; // edx
  ConvertClass *v71; // eax
  int v72; // ecx
  int v73; // ecx
  char *StringCSF; // eax
  int v75; // ecx
  char *v76; // esi
  int v77; // esi
  LONG v78; // edi
  int eax104; // eax
  char *edx104; // edx
  LONG v81; // eax
  AbstractClass *v79; // edx
  AbstractClass *v80; // edx
  int edi108; // edi
  int esi109; // esi
  int v86; // eax
  AbstractClass *v84; // edx
  AbstractClass *v85; // edx
  signed int m; // edi
  int v90; // edx
  ConvertClass *v91; // eax
  int v92; // edx
  int v93; // ecx
  char *v94; // eax
  int v95; // ecx
  char *v96; // esi
  int v97; // esi
  int v98; // edi
  int eax116; // eax
  char *edx116; // edx
  ConvertClass *v101; // eax
  AbstractClass *v99; // edx
  AbstractClass *v100; // edx
  int v104; // ecx
  int ecx120a; // ecx
  INIClass *v106; // eax
  unsigned int v107; // kr24_4
  ScoreAnimClass *v105; // edi
  int v109; // eax
  ConvertClass *v110; // edx
  signed int n; // edi
  int v112; // edx
  ConvertClass *v113; // eax
  int v114; // edx
  int v115; // ecx
  char *v116; // eax
  int v117; // ecx
  char *v118; // esi
  int v119; // esi
  int v120; // edi
  int eax128; // eax
  char *edx128; // edx
  ConvertClass *v123; // eax
  AbstractClass *v121; // edx
  AbstractClass *v122; // edx
  int v126; // edi
  _DWORD *v127; // esi
  int ii; // esi
  signed int jj; // edi
  int v130; // edx
  ConvertClass *v131; // eax
  int v132; // edx
  ConvertClass *v133; // eax
  int v134; // ecx
  int v135; // ecx
  char *v136; // eax
  int v137; // ecx
  char *v138; // esi
  int v139; // esi
  int v140; // edi
  int v141; // eax
  DWORD Ticks; // eax
  char *v143; // edx
  ConvertClass *eax142b; // eax
  int v145; // ecx
  int eax147; // eax
  AbstractClass *v144; // eax
  int v148; // edx
  AbstractClass *v146; // eax
  AbstractClass *v147; // edx
  char *v151; // eax
  int v152; // esi
  int v153; // esi
  int v154; // edi
  int v155; // eax
  DWORD v156; // eax
  char *v157; // edx
  ConvertClass *eax153b; // eax
  int v159; // ecx
  int v160; // eax
  AbstractClass *v158; // eax
  int v162; // edx
  int v163; // esi
  AbstractClass *v161; // edi
  int v165; // eax
  DWORD v166; // eax
  char *v167; // ecx
  ConvertClass *edx162; // edx
  int v169; // ecx
  int eax167; // eax
  AbstractClass *v168; // eax
  int v172; // edx
  AbstractClass *v170; // eax
  AbstractClass *v171; // edx
  char *v175; // eax
  int v176; // ecx
  int v177; // esi
  int v178; // edi
  int v179; // eax
  DWORD v180; // eax
  char *v181; // ecx
  ConvertClass *edx173; // edx
  int v183; // ecx
  int v184; // eax
  AbstractClass *v182; // eax
  int v186; // edx
  int v187; // esi
  int v188; // edi
  int v189; // eax
  DWORD v190; // eax
  char *v191; // ecx
  ConvertClass *edx182; // edx
  int v193; // ecx
  int eax187; // eax
  AbstractClass *v192; // eax
  int v196; // edx
  AbstractClass *v194; // eax
  AbstractClass *v195; // edx
  int kk; // esi
  signed int mm; // esi
  int v201; // edx
  ConvertClass *v202; // eax
  ConvertClass *v203; // edx
  ConvertClass *v204; // eax
  int v205; // ecx
  int v206; // ecx
  char *eax201; // eax
  int v208; // ecx
  char *v209; // edi
  TechnoTypeClass *v207; // edi
  ConvertClass *v211; // edx
  int eax202; // eax
  DWORD v213; // eax
  char *v214; // edx
  TechnoTypeClass *v212; // eax
  int v216; // ecx
  int v217; // eax
  AbstractClass *v215; // eax
  int v219; // edx
  int v220; // eax
  _BYTE *edi219; // edi
  int v222; // edx
  LONG v223; // ecx
  ScenarioClass *v221; // edx
  int v225; // eax
  int techLevel; // ecx
  IUnknown *v224; // edx
  int v228; // esi
  int v229; // edi
  char *v230; // eax
  DWORD v231; // eax
  ConvertClass *edx224; // edx
  int v233; // ecx
  int eax229; // eax
  AbstractClass *v232; // eax
  int v236; // edx
  INIClass *v234; // esi
  int v238; // edi
  char *v239; // eax
  DWORD v240; // eax
  char *edx234; // edx
  int v242; // ecx
  int eax239; // eax
  AbstractClass *v241; // eax
  int v245; // edx
  AbstractClass *v243; // edi
  LONG v247; // esi
  int v248; // ecx
  char *v249; // eax
  int v250; // ecx
  DWORD v251; // eax
  ConvertClass *edx243; // edx
  int v253; // ecx
  int eax248; // eax
  AbstractClass *v252; // eax
  int v256; // edx
  AbstractClass *v254; // eax
  AbstractClass *v255; // edx
  bool v259; // cc
  wchar_t *v260; // eax
  int ecx258; // ecx
  int v262; // edi
  __int64 v263; // rax
  TechnoTypeClass *v261; // esi
  ConvertClass *v265; // eax
  DWORD v266; // eax
  TechnoTypeClass *v264; // ecx
  ConvertClass *edx259; // edx
  int v269; // ecx
  int v270; // eax
  AbstractClass *v268; // eax
  int v272; // edx
  int nn; // edi
  CCINIClass *v271; // esi
  int i1; // esi
  void (__thiscall ***v276)(_DWORD, int); // ecx
  void (__thiscall ***v277)(_DWORD, int); // ecx
  void (__thiscall ***v278)(_DWORD, int); // ecx
  void (__thiscall ***v279)(_DWORD, int); // ecx
  void (__thiscall ***v280)(_DWORD, int); // ecx
  ConvertClass *v281; // eax
  int v282; // ebp
  DSurface *v284; // [esp+250h] [ebp-6C4h]
  int v285; // [esp+25Ch] [ebp-6B8h]
  char v286; // [esp+25Ch] [ebp-6B8h]
  CampaignScore *v287; // [esp+25Ch] [ebp-6B8h]
  int v288; // [esp+260h] [ebp-6B4h]
  char v289; // [esp+260h] [ebp-6B4h]
  char v290; // [esp+264h] [ebp-6B0h]
  ConvertClass *aP2; // [esp+26Ch] [ebp-6A8h] BYREF
  int v292; // [esp+270h] [ebp-6A4h]
  char *Buffer; // [esp+274h] [ebp-6A0h]
  int v294; // [esp+278h] [ebp-69Ch] BYREF
  int v295; // [esp+27Ch] [ebp-698h]
  int v296; // [esp+280h] [ebp-694h]
  int v297; // [esp+284h] [ebp-690h]
  ConvertClass *v298; // [esp+288h] [ebp-68Ch]
  ConvertClass *v299; // [esp+28Ch] [ebp-688h]
  ConvertClass *v300; // [esp+290h] [ebp-684h]
  struct tagRECT Rect; // [esp+294h] [ebp-680h] BYREF
  ConvertClass *aP4[2]; // [esp+2A4h] [ebp-670h] BYREF
  ConvertClass *aP4_8; // [esp+2ACh] [ebp-668h] BYREF
  int aP4_12; // [esp+2B0h] [ebp-664h]
  int aP4_16; // [esp+2B4h] [ebp-660h]
  int aP4_20; // [esp+2B8h] [ebp-65Ch]
  ScoreFontClass *aP4_24; // [esp+2BCh] [ebp-658h]
  _DWORD aP4_28[22]; // [esp+2C0h] [ebp-654h] BYREF
  _DWORD aP4_116[5]; // [esp+318h] [ebp-5FCh] BYREF
  ConvertClass *aP4_136; // [esp+32Ch] [ebp-5E8h] BYREF
  int aP4_140; // [esp+330h] [ebp-5E4h]
  int aP4_144; // [esp+334h] [ebp-5E0h]
  int aP4_148; // [esp+338h] [ebp-5DCh]
  _BYTE aP4_152[16]; // [esp+33Ch] [ebp-5D8h] BYREF
  char aP4_168[20]; // [esp+34Ch] [ebp-5C8h] BYREF
  wchar_t aP4_188[64]; // [esp+360h] [ebp-5B4h] BYREF
  _BYTE aP4_316[1044]; // [esp+3E0h] [ebp-534h] BYREF
  char v318; // [esp+7F4h] [ebp-120h] BYREF

  CCFileClass::Construct3((int)aP4_28);
  *this = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524])
         - 640)
        / 2;
  this->q004 = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524])
               - 400)
              / 2;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  Theme::Stop(&g_BuildingTypeClass_Count, 0);
  v2 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_SCORE);
  ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v2);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, stru_830620.__pad_10);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  EntireFile = (CCINIClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  v4 = 0;
  v5 = &EntireFile->__pad_0[2];
  do
  {
    v6 = 4 * *(v5 - 1);
    LOBYTE(Buffer) = 4 * *(v5 - 2);
    v7 = *v5;
    BYTE1(Buffer) = v6;
    v8 = &stru_87C374.__pad_579C[3 * (v4 % 256) + 17776];
    ++v4;
    v5 += 3;
    *(_WORD *)v8 = (_WORD)Buffer;
    v8[2] = 4 * v7;
  }
  while ( v4 < 256 );
  this->q018 = ((4 * LOBYTE(EntireFile[2].sectionCount)) >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
              | ((4 * BYTE1(EntireFile[2].sectionCount)) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
              | ((4 * BYTE2(EntireFile[2].sectionCount)) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
  __3_YAXPAX_Z(EntireFile);
  v9 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( v9 )
    aP4_24 = (ScoreFontClass *)ConvertClass::Construct(
                                 v9,
                                 (ConvertClass *)&stru_87C374.__pad_579C[17776],
                                 (int)&stru_87C374.__pad_579C[17776],
                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                 (ObjectClass *)1,
                                 0);
  else
    aP4_24 = 0;
  v10 = (char *)__2_YAPAXI_Z(0x24u);
  if ( v10 )
  {
    v284 = (DSurface *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]);
    v11 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524]);
    v12 = DSurface::Construct(v10, v11, v284, 0, 0);
  }
  else
  {
    v12 = 0;
  }
  this->q008 = (int)v12;
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0);
  ScoreScreen::DrawSHPBackground(
    &stru_830620.__pad_579C[34500],
    (IUnknown *)this->q008,
    (int)EntireFile,
    (int)this,
    (int)&stru_87C374.__pad_579C[17776],
    v285,
    v288);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34488]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  v300 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34476]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  v299 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  Event::Dispatch();
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34464]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  Rect.left = (LONG)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34452]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  aP2 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34440]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  v298 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34428]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  aP4_136 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  Event::Dispatch();
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34416]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  aP4_8 = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34404]);
  (*(void (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 1);
  aP4[0] = (ConvertClass *)CCFileClass::ReadEntireFile(aP4_28);
  CCFileClass::Reset(aP4_28);
  v13 = this + 13;
  (*(void (__thiscall **)(int *))(this->q00D + 12))(this + 13);
  v14 = __2_YAPAXI_Z(0xCu);
  v15 = (char **)v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = 0;
    *(_DWORD *)(v14 + 4) = 0;
    *(_BYTE *)(v14 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *v15 = _strdup((INIClass *)&stru_830620.__pad_579C[34396]);
  }
  else
  {
    v15 = 0;
  }
  v16 = this->q00F;
  if ( this->q011 < v16
    || (this->q104 || !v16)
    && (v17 = this->q012, v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v17 + v16, 0) )
  {
    v18 = (AbstractClass *)this->q011;
    v19 = this->q00E;
    this->q011 = (int)&v18->__pad_0[1];
    *(_DWORD *)(v19 + 4 * (_DWORD)v18) = v15;
  }
  v20 = __2_YAPAXI_Z(0xCu);
  v21 = (AbstractClass *)v20;
  if ( v20 )
  {
    *(_DWORD *)v20 = 0;
    *(_DWORD *)(v20 + 4) = 0;
    *(_BYTE *)(v20 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v21->__pad_0 = _strdup((INIClass *)&stru_830620.__pad_579C[34388]);
  }
  else
  {
    v21 = 0;
  }
  v22 = this->q00F;
  if ( this->q011 < v22
    || (this->q104 || !v22)
    && (v23 = this->q012, v23 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v23 + v22, 0) )
  {
    v24 = (AbstractClass *)this->q011;
    v25 = this->q00E;
    this->q011 = (int)&v24->__pad_0[1];
    *(_DWORD *)(v25 + 4 * (_DWORD)v24) = v21;
  }
  v26 = __2_YAPAXI_Z(0xCu);
  v27 = (AbstractClass *)v26;
  if ( v26 )
  {
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 4) = 0;
    *(_BYTE *)(v26 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v27->__pad_0 = _strdup((INIClass *)&stru_830620.__pad_579C[34380]);
  }
  else
  {
    v27 = 0;
  }
  v28 = this->q00F;
  if ( this->q011 < v28
    || (this->q104 || !v28)
    && (v29 = this->q012, v29 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v29 + v28, 0) )
  {
    v30 = (AbstractClass *)this->q011;
    v31 = this->q00E;
    this->q011 = (int)&v30->__pad_0[1];
    *(_DWORD *)(v31 + 4 * (_DWORD)v30) = v27;
  }
  v32 = __2_YAPAXI_Z(0xCu);
  v33 = (AbstractClass *)v32;
  if ( v32 )
  {
    *(_DWORD *)v32 = 0;
    *(_DWORD *)(v32 + 4) = 0;
    *(_BYTE *)(v32 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v33->__pad_0 = _strdup((INIClass *)&stru_830620.__pad_579C[34368]);
  }
  else
  {
    v33 = 0;
  }
  v34 = this->q00F;
  if ( this->q011 < v34
    || (this->q104 || !v34)
    && (v35 = this->q012, v35 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v35 + v34, 0) )
  {
    v36 = (AbstractClass *)this->q011;
    v37 = this->q00E;
    this->q011 = (int)&v36->__pad_0[1];
    *(_DWORD *)(v37 + 4 * (_DWORD)v36) = v33;
  }
  v38 = __2_YAPAXI_Z(0xCu);
  v39 = (AbstractClass *)v38;
  if ( v38 )
  {
    *(_DWORD *)v38 = 0;
    *(_DWORD *)(v38 + 4) = 0;
    *(_BYTE *)(v38 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v39->__pad_0 = _strdup((INIClass *)&stru_830620.__pad_579C[34356]);
  }
  else
  {
    v39 = 0;
  }
  v40 = this->q00F;
  if ( this->q011 < v40
    || (this->q104 || !v40)
    && (v41 = this->q012, v41 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v41 + v40, 0) )
  {
    v42 = (AbstractClass *)this->q011;
    v43 = this->q00E;
    this->q011 = (int)&v42->__pad_0[1];
    *(_DWORD *)(v43 + 4 * (_DWORD)v42) = v39;
  }
  v44 = __2_YAPAXI_Z(0xCu);
  v45 = (AbstractClass *)v44;
  if ( v44 )
  {
    *(_DWORD *)v44 = 0;
    *(_DWORD *)(v44 + 4) = 0;
    *(_BYTE *)(v44 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v45->__pad_0 = _strdup(&g_INI_Key_Type);
  }
  else
  {
    v45 = 0;
  }
  v46 = this->q00F;
  if ( this->q011 < v46
    || (this->q104 || !v46)
    && (v47 = this->q012, v47 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v47 + v46, 0) )
  {
    v48 = (AbstractClass *)this->q011;
    v49 = this->q00E;
    this->q011 = (int)&v48->__pad_0[1];
    *(_DWORD *)(v49 + 4 * (_DWORD)v48) = v45;
  }
  v50 = __2_YAPAXI_Z(0xCu);
  v51 = (AbstractClass *)v50;
  if ( v50 )
  {
    *(_DWORD *)v50 = 0;
    *(_DWORD *)(v50 + 4) = 0;
    *(_BYTE *)(v50 + 8) = 0;
    if ( Audio::IsSoundEnabled() )
      *(_DWORD *)v51->__pad_0 = _strdup((INIClass *)&stru_830620.__pad_579C[34348]);
  }
  else
  {
    v51 = 0;
  }
  v52 = this->q00F;
  if ( this->q011 < v52
    || (this->q104 || !v52)
    && (v53 = this->q012, v53 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(this + 13, v53 + v52, 0) )
  {
    v54 = (AbstractClass *)this->q011;
    v55 = this->q00E;
    this->q011 = (int)&v54->__pad_0[1];
    *(_DWORD *)(v55 + 4 * (_DWORD)v54) = v51;
  }
  eax79 = (_DWORD *)__2_YAPAXI_Z(0x18u);
  if ( eax79 )
    v56 = (ScoreFontClass *)ScoreScreen::LoadScoreFont(eax79, aP4_24);
  else
    v56 = 0;
  this->q00C = (int)v56;
  v58 = (_DWORD *)__2_YAPAXI_Z(0x18u);
  if ( v58 )
    v57 = (ScoreFontClass *)ScoreScreen::LoadCountryFlags(v58, (int)aP4_24);
  else
    v57 = 0;
  this->q004 = (int)v57;
  Event::Dispatch();
  ebx85 = (AbstractClass **)(this + 7);
  (*(void (__thiscall **)(int *))(this->q01C + 12))(this + 7);
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  if ( &stru_830620 != (IUnknown *)-56824 )
  {
    if ( Audio::IsSoundEnabled() )
    {
      for ( i = 0; i < this->q011; ++i )
      {
        if ( !_strcmpi(&stru_830620.__pad_579C[34396], **(const void ***)(this->q00E + 4 * i)) )
          break;
      }
    }
  }
  Movie::Play(0, 0, (CCINIClass *)1, 0, v286, v289, v290);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 4))(
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    this->q008,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 4))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    this->q008,
    0,
    1);
  v62 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( v62 )
    v60 = (ConvertClass *)ConvertClass::Construct(
                            v62,
                            (ConvertClass *)&stru_87C374.__pad_579C[17776],
                            (int)&stru_87C374.__pad_579C[17776],
                            *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                            (ObjectClass *)1,
                            0);
  else
    v60 = 0;
  this->q014 = (int)v60;
  v64 = (_DWORD *)__2_YAPAXI_Z(0x2Cu);
  if ( v64 )
  {
    v65 = this->q014;
    v66 = this->q004 + 6;
    v64[1] = *this + 7;
    v64[2] = v66;
    Timer::Init(v64 + 3, 0);
    left = Rect.left;
    v64[10] = v65;
    v64[6] = left;
    v64[7] = 0;
    v64[8] = 60;
    v64[9] = 3;
    *v64 = &ScoreTimeClass::`vftable';
    Rect.left = (LONG)v64;
  }
  else
  {
    Rect.left = 0;
  }
  VectorClass::PushBack2(this + 7, &Rect);
  if ( &stru_830620 != (IUnknown *)-56796 )
  {
    if ( Audio::IsSoundEnabled() )
    {
      for ( j = 0; j < this->q011; ++j )
      {
        if ( !_strcmpi(&stru_830620.__pad_579C[34368], **(const void ***)(this->q00E + 4 * j)) )
          break;
      }
    }
  }
  for ( k = 0; k < 10; ++k )
  {
    v70 = *this;
    Rect.top = this->q004 + 23;
    Rect.left = v70 + 480;
    v71 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                            *(_DWORD *)&stru_87C374.__pad_579C[22524],
                            aP4_152);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      aP2,
      k,
      (ConvertClass *)&Rect,
      v71,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    Screen::TransitionLoop((MPCooperative *)this, 4);
  }
  v72 = this->q004;
  v294 = *this + 480;
  v295 = v72 + 23;
  v73 = this->q008;
  v296 = 160;
  v297 = 120;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v73 + 8))(
    v73,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  StringCSF = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34288], 0, &stru_830620.__pad_579C[34312], 506);
  v75 = this->q00C;
  v76 = StringCSF;
  Buffer = StringCSF;
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v75 + 8))(v75, StringCSF);
  v77 = *this - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, v76) / 2 + 552;
  v78 = __2_YAPAXI_Z(0x2Cu);
  if ( v78 )
  {
    eax104 = this->q004;
    Rect.left = this->q00C;
    *(_DWORD *)(v78 + 4) = v77;
    *(_DWORD *)(v78 + 8) = eax104 + 13;
    Timer::Init((DWORD *)(v78 + 12), 0);
    edx104 = Buffer;
    *(_DWORD *)(v78 + 28) = 0;
    *(_DWORD *)(v78 + 32) = 0;
    *(_BYTE *)(v78 + 36) = 0;
    v81 = Rect.left;
    *(_DWORD *)(v78 + 24) = edx104;
    *(_DWORD *)(v78 + 40) = v81;
    *(_DWORD *)v78 = &vt_ScorePrintClass;
  }
  else
  {
    v78 = 0;
  }
  Rect.left = v78;
  VectorClass::PushBack2(this + 7, &Rect);
  v79 = *ebx85;
  aP2 = (ConvertClass *)v78;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v79->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v80 = *ebx85;
      aP2 = (ConvertClass *)v78;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v80->uniqueId)(this + 7, &aP2) != -1 );
  }
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  Rect.left = Render_Get((ScoreScreen *)HouseClass_Player.field_0);
  swprintf(aP4_188, (const size_t)&stru_830620.__pad_579C[34276], (const wchar_t *const)Rect.left, v287);
  edi108 = __2_YAPAXI_Z(0x2Cu);
  if ( edi108 )
  {
    esi109 = this->q004;
    v86 = this->q004 + 60;
    *(_DWORD *)(edi108 + 4) = *this + 520;
    *(_DWORD *)(edi108 + 8) = v86;
    Timer::Init((DWORD *)(edi108 + 12), 0);
    *(_DWORD *)(edi108 + 24) = aP4_188;
    *(_DWORD *)(edi108 + 28) = 0;
    *(_DWORD *)(edi108 + 32) = 0;
    *(_BYTE *)(edi108 + 36) = 0;
    *(_DWORD *)(edi108 + 40) = esi109;
    *(_DWORD *)edi108 = &vt_ScorePrintClass;
  }
  else
  {
    edi108 = 0;
  }
  aP2 = (ConvertClass *)edi108;
  VectorClass::PushBack2(this + 7, &aP2);
  v84 = *ebx85;
  aP2 = (ConvertClass *)edi108;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v84->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v85 = *ebx85;
      aP2 = (ConvertClass *)edi108;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v85->uniqueId)(this + 7, &aP2) != -1 );
  }
  for ( m = 0; m < 10; ++m )
  {
    v90 = this->q004;
    aP2 = (ConvertClass *)(*this + 481);
    v292 = v90 + 148;
    v91 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                            *(_DWORD *)&stru_87C374.__pad_579C[22524],
                            aP4_152);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      aP4[0],
      m,
      (ConvertClass *)&aP2,
      v91,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    Screen::TransitionLoop((MPCooperative *)this, 4);
  }
  v92 = *this;
  v93 = this->q008;
  v295 = this->q004 + 148;
  v294 = v92 + 481;
  v296 = 144;
  v297 = 86;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v93 + 8))(
    v93,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  v94 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34260], 0, &stru_830620.__pad_579C[34312], 543);
  v95 = this->q00C;
  v96 = v94;
  Buffer = v94;
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v95 + 8))(v95, v94);
  v97 = *this - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, v96) / 2 + 560;
  v98 = __2_YAPAXI_Z(0x2Cu);
  if ( v98 )
  {
    eax116 = this->q004;
    aP2 = (ConvertClass *)this->q00C;
    *(_DWORD *)(v98 + 4) = v97;
    *(_DWORD *)(v98 + 8) = eax116 + 193;
    Timer::Init((DWORD *)(v98 + 12), 0);
    edx116 = Buffer;
    *(_DWORD *)(v98 + 28) = 0;
    *(_DWORD *)(v98 + 32) = 0;
    *(_BYTE *)(v98 + 36) = 0;
    v101 = aP2;
    *(_DWORD *)(v98 + 24) = edx116;
    *(_DWORD *)(v98 + 40) = v101;
    *(_DWORD *)v98 = &vt_ScorePrintClass;
  }
  else
  {
    v98 = 0;
  }
  aP2 = (ConvertClass *)v98;
  VectorClass::PushBack2(this + 7, &aP2);
  v99 = *ebx85;
  aP2 = (ConvertClass *)v98;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v99->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v100 = *ebx85;
      aP2 = (ConvertClass *)v98;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v100->uniqueId)(this + 7, &aP2) != -1 );
  }
  v104 = *this;
  v295 = this->q004 + 148;
  v294 = v104 + 481;
  ecx120a = this->q008;
  v296 = 150;
  v297 = 120;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)ecx120a + 8))(
    ecx120a,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  v106 = (INIClass *)(*(int (__stdcall **)(int))(*(_DWORD *)(HouseClass_Player.field_0 + 36) + 24))(HouseClass_Player.field_0 + 36);
  sprintf(aP4_168, (ObjectClass *)&stru_817F40.fallRate, v106);
  v107 = strlen(aP4_168) + 1;
  v105 = (ScoreAnimClass *)__2_YAPAXI_Z(0x2Cu);
  if ( v105 )
  {
    v109 = this->q004;
    aP2 = (ConvertClass *)this->q00C;
    ScoreScreen::Constructor(v105, (ScoreAnimClass *)(590 - 12 * (v107 - 1) + *this), v109 + 214, (int)aP4_168);
    v110 = aP2;
    v105->ScoreAnimClass_field_0x1C = 0;
    *(_DWORD *)v105[1].__pad_0 = 0;
    LOBYTE(v105[1].ScoreAnimClass_field_0x04) = 0;
    v105[1].ScoreAnimClass_field_0x08 = (int)v110;
    *(_DWORD *)v105->__pad_0 = &vt_ScorePrintClass;
  }
  else
  {
    v105 = 0;
  }
  aP2 = (ConvertClass *)v105;
  VectorClass::PushBack2(this + 7, &aP2);
  while ( !ScoreScreen::Check(this, (char)v105) )
    Screen::TransitionLoop((MPCooperative *)this, 1);
  for ( n = 0; n < 10; ++n )
  {
    v112 = this->q004;
    aP2 = (ConvertClass *)(*this + 444);
    v292 = v112 + 273;
    v113 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                             *(_DWORD *)&stru_87C374.__pad_579C[22524],
                             aP4_152);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      v298,
      n,
      (ConvertClass *)&aP2,
      v113,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    Screen::TransitionLoop((MPCooperative *)this, 4);
  }
  v114 = *this;
  v115 = this->q008;
  v295 = this->q004 + 273;
  v294 = v114 + 444;
  v296 = 196;
  v297 = 118;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v115 + 8))(
    v115,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  v116 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34236], 0, &stru_830620.__pad_579C[34312], 571);
  v117 = this->q00C;
  v118 = v116;
  Buffer = v116;
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v117 + 8))(v117, v116);
  v119 = *this - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, v118) / 2 + 542;
  v120 = __2_YAPAXI_Z(0x2Cu);
  if ( v120 )
  {
    eax128 = this->q004;
    aP2 = (ConvertClass *)this->q00C;
    *(_DWORD *)(v120 + 4) = v119;
    *(_DWORD *)(v120 + 8) = eax128 + 366;
    Timer::Init((DWORD *)(v120 + 12), 0);
    edx128 = Buffer;
    *(_DWORD *)(v120 + 28) = 0;
    *(_DWORD *)(v120 + 32) = 0;
    *(_BYTE *)(v120 + 36) = 0;
    v123 = aP2;
    *(_DWORD *)(v120 + 24) = edx128;
    *(_DWORD *)(v120 + 40) = v123;
    *(_DWORD *)v120 = &vt_ScorePrintClass;
  }
  else
  {
    v120 = 0;
  }
  aP2 = (ConvertClass *)v120;
  VectorClass::PushBack2(this + 7, &aP2);
  v121 = *ebx85;
  aP2 = (ConvertClass *)v120;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v121->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v122 = *ebx85;
      aP2 = (ConvertClass *)v120;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v122->uniqueId)(this + 7, &aP2) != -1 );
  }
  v126 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564);
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556) != -1 )
  {
    v127 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556);
    v126 += Timer::GetTicks() - *v127;
  }
  ScoreScreen::DisplayTimeText((int)this, v126 / 60);
  if ( &stru_830620 != (IUnknown *)-56816 )
  {
    if ( Audio::IsSoundEnabled() )
    {
      for ( ii = 0; ii < this->q011; ++ii )
      {
        if ( !_strcmpi(&stru_830620.__pad_579C[34388], **(const void ***)(this->q00E + 4 * ii)) )
          break;
      }
    }
  }
  for ( jj = 0; jj < 10; ++jj )
  {
    v130 = this->q004;
    aP2 = (ConvertClass *)(*this + 186);
    v292 = v130 + 54;
    v131 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                             *(_DWORD *)&stru_87C374.__pad_579C[22524],
                             aP4_152);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      aP4_136,
      jj,
      (ConvertClass *)&aP2,
      v131,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    v132 = *this;
    aP4[1] = (ConvertClass *)(this->q004 + 254);
    aP4[0] = (ConvertClass *)(v132 + 186);
    v133 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                             *(_DWORD *)&stru_87C374.__pad_579C[22524],
                             aP4_168);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      aP4_8,
      jj,
      (ConvertClass *)aP4,
      v133,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    Screen::TransitionLoop((MPCooperative *)this, 4);
  }
  v134 = this->q004;
  v294 = *this + 186;
  v295 = v134 + 54;
  v135 = this->q008;
  v296 = 262;
  v297 = 326;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v135 + 8))(
    v135,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  v136 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34220], 0, &stru_830620.__pad_579C[34312], 601);
  v137 = this->q00C;
  v138 = v136;
  Buffer = v136;
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v137 + 8))(v137, v136);
  v139 = *this - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, v138) / 2 + 316;
  v140 = __2_YAPAXI_Z(0x2Cu);
  if ( v140 )
  {
    v141 = this->q004;
    aP4_8 = (ConvertClass *)this->q00C;
    *(_DWORD *)(v140 + 4) = v139;
    *(_DWORD *)(v140 + 8) = v141 + 300;
    Ticks = Timer::GetTicks();
    v143 = Buffer;
    *(_DWORD *)(v140 + 12) = Ticks;
    *(_DWORD *)(v140 + 20) = 0;
    *(_DWORD *)(v140 + 28) = 0;
    *(_DWORD *)(v140 + 32) = 0;
    *(_BYTE *)(v140 + 36) = 0;
    eax142b = aP4_8;
    *(_DWORD *)(v140 + 24) = v143;
    *(_DWORD *)(v140 + 40) = eax142b;
    *(_DWORD *)v140 = &vt_ScorePrintClass;
  }
  else
  {
    v140 = 0;
  }
  v145 = this->q024;
  if ( this->q00B < v145
    || (*((_BYTE *)this + 41) || !v145)
    && (eax147 = this->q00C, eax147 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v145 + eax147, 0) )
  {
    v144 = (AbstractClass *)this->q00B;
    v148 = this->q008;
    this->q00B = (int)&v144->__pad_0[1];
    *(_DWORD *)(v148 + 4 * (_DWORD)v144) = v140;
  }
  v146 = *ebx85;
  aP2 = (ConvertClass *)v140;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v146->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v147 = *ebx85;
      aP2 = (ConvertClass *)v140;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v147->uniqueId)(this + 7, &aP2) != -1 );
  }
  v151 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34204], 0, &stru_830620.__pad_579C[34312], 613);
  v152 = *this;
  Buffer = v151;
  v153 = v152 + 194;
  v154 = __2_YAPAXI_Z(0x2Cu);
  if ( v154 )
  {
    v155 = this->q004;
    aP4_8 = (ConvertClass *)this->q00C;
    *(_DWORD *)(v154 + 4) = v153;
    *(_DWORD *)(v154 + 8) = v155 + 247;
    v156 = Timer::GetTicks();
    v157 = Buffer;
    *(_DWORD *)(v154 + 12) = v156;
    *(_DWORD *)(v154 + 20) = 0;
    *(_DWORD *)(v154 + 28) = 0;
    *(_DWORD *)(v154 + 32) = 0;
    *(_BYTE *)(v154 + 36) = 0;
    eax153b = aP4_8;
    *(_DWORD *)(v154 + 24) = v157;
    *(_DWORD *)(v154 + 40) = eax153b;
    *(_DWORD *)v154 = &vt_ScorePrintClass;
  }
  else
  {
    v154 = 0;
  }
  v159 = this->q024;
  if ( this->q00B < v159
    || (*((_BYTE *)this + 41) || !v159)
    && (v160 = this->q00C, v160 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v159 + v160, 0) )
  {
    v158 = (AbstractClass *)this->q00B;
    v162 = this->q008;
    this->q00B = (int)&v158->__pad_0[1];
    *(_DWORD *)(v162 + 4 * (_DWORD)v158) = v154;
  }
  v163 = *this + 328;
  v161 = (AbstractClass *)__2_YAPAXI_Z(0x2Cu);
  if ( v161 )
  {
    aP4_8 = (ConvertClass *)this->q00C;
    v165 = this->q004 + 247;
    *(_DWORD *)&v161->__pad_0[4] = v163;
    *(_DWORD *)&v161->__pad_0[8] = v165;
    v166 = Timer::GetTicks();
    v167 = Buffer;
    edx162 = aP4_8;
    *(_DWORD *)&v161->__pad_0[12] = v166;
    v161->abstractFlags = 0;
    v161->nextArrayIndex = (int)v167;
    v161->referenceCount = 0;
    v161->NeedsSaveOrLink = 0;
    v161[1].__pad_0[0] = 0;
    *(_DWORD *)&v161[1].__pad_0[4] = edx162;
    *(_DWORD *)v161->__pad_0 = &vt_ScorePrintClass;
  }
  else
  {
    v161 = 0;
  }
  v169 = this->q024;
  if ( this->q00B < v169
    || (*((_BYTE *)this + 41) || !v169)
    && (eax167 = this->q00C, eax167 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v169 + eax167, 0) )
  {
    v168 = (AbstractClass *)this->q00B;
    v172 = this->q008;
    this->q00B = (int)&v168->__pad_0[1];
    *(_DWORD *)(v172 + 4 * (_DWORD)v168) = v161;
  }
  v170 = *ebx85;
  aP2 = (ConvertClass *)v161;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v170->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v171 = *ebx85;
      aP2 = (ConvertClass *)v161;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v171->uniqueId)(this + 7, &aP2) != -1 );
  }
  v175 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34192], 0, &stru_830620.__pad_579C[34312], 628);
  v176 = this->q00C;
  Buffer = v175;
  v177 = *this - (*(int (__thiscall **)(int, char *))(*(_DWORD *)v176 + 8))(v176, v175) / 2 + 290;
  v178 = __2_YAPAXI_Z(0x2Cu);
  if ( v178 )
  {
    aP4_8 = (ConvertClass *)this->q00C;
    v179 = this->q004 + 247;
    *(_DWORD *)(v178 + 4) = v177;
    *(_DWORD *)(v178 + 8) = v179;
    v180 = Timer::GetTicks();
    v181 = Buffer;
    edx173 = aP4_8;
    *(_DWORD *)(v178 + 12) = v180;
    *(_DWORD *)(v178 + 20) = 0;
    *(_DWORD *)(v178 + 24) = v181;
    *(_DWORD *)(v178 + 28) = 0;
    *(_DWORD *)(v178 + 32) = 0;
    *(_BYTE *)(v178 + 36) = 0;
    *(_DWORD *)(v178 + 40) = edx173;
    *(_DWORD *)v178 = &vt_ScorePrintClass;
  }
  else
  {
    v178 = 0;
  }
  v183 = this->q024;
  if ( this->q00B < v183
    || (*((_BYTE *)this + 41) || !v183)
    && (v184 = this->q00C, v184 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v183 + v184, 0) )
  {
    v182 = (AbstractClass *)this->q00B;
    v186 = this->q008;
    this->q00B = (int)&v182->__pad_0[1];
    *(_DWORD *)(v186 + 4 * (_DWORD)v182) = v178;
  }
  v187 = *this - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, Buffer) / 2 + 422;
  v188 = __2_YAPAXI_Z(0x2Cu);
  if ( v188 )
  {
    aP4_8 = (ConvertClass *)this->q00C;
    v189 = this->q004 + 247;
    *(_DWORD *)(v188 + 4) = v187;
    *(_DWORD *)(v188 + 8) = v189;
    v190 = Timer::GetTicks();
    v191 = Buffer;
    edx182 = aP4_8;
    *(_DWORD *)(v188 + 12) = v190;
    *(_DWORD *)(v188 + 20) = 0;
    *(_DWORD *)(v188 + 24) = v191;
    *(_DWORD *)(v188 + 28) = 0;
    *(_DWORD *)(v188 + 32) = 0;
    *(_BYTE *)(v188 + 36) = 0;
    *(_DWORD *)(v188 + 40) = edx182;
    *(_DWORD *)v188 = &vt_ScorePrintClass;
  }
  else
  {
    v188 = 0;
  }
  v193 = this->q024;
  if ( this->q00B < v193
    || (*((_BYTE *)this + 41) || !v193)
    && (eax187 = this->q00C, eax187 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v193 + eax187, 0) )
  {
    v192 = (AbstractClass *)this->q00B;
    v196 = this->q008;
    this->q00B = (int)&v192->__pad_0[1];
    *(_DWORD *)(v196 + 4 * (_DWORD)v192) = v188;
  }
  v194 = *ebx85;
  aP2 = (ConvertClass *)v188;
  if ( ((int (__thiscall *)(int *, ConvertClass **))v194->uniqueId)(this + 7, &aP2) != -1 )
  {
    do
    {
      Screen::TransitionLoop((MPCooperative *)this, 1);
      v195 = *ebx85;
      aP2 = (ConvertClass *)v188;
    }
    while ( ((int (__thiscall *)(int *, ConvertClass **))v195->uniqueId)(this + 7, &aP2) != -1 );
  }
  ScoreScreen::AccumulateScoreStats((ScoreScreen *)this);
  while ( stru_B05488.__pad_FC[0] )
    Screen::TransitionLoop((MPCooperative *)this, 1);
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  if ( &stru_830620 != (IUnknown *)-56808 )
  {
    if ( Audio::IsSoundEnabled() )
    {
      for ( kk = 0; kk < this->q011; ++kk )
      {
        if ( !_strcmpi(&stru_830620.__pad_579C[34380], **(const void ***)(this->q00E + 4 * kk)) )
          break;
      }
    }
  }
  for ( mm = 0; mm < 10; ++mm )
  {
    v201 = this->q004;
    aP4_8 = (ConvertClass *)*this;
    aP4_12 = v201 + 188;
    v202 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                             *(_DWORD *)&stru_87C374.__pad_579C[22524],
                             aP4_168);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      v300,
      mm,
      (ConvertClass *)&aP4_8,
      v202,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    v203 = (ConvertClass *)*this;
    aP4_140 = this->q004 + 388;
    aP4_136 = v203;
    v204 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))(
                             *(_DWORD *)&stru_87C374.__pad_579C[22524],
                             aP4_152);
    DrawToSurfaceSHP(
      *(int *)&stru_87C374.__pad_579C[22524],
      this->q014,
      v299,
      mm,
      (ConvertClass *)&aP4_136,
      v204,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    Screen::TransitionLoop((MPCooperative *)this, 4);
  }
  v205 = this->q004;
  v294 = *this;
  v295 = v205 + 188;
  v206 = this->q008;
  v296 = 182;
  v297 = 212;
  (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)v206 + 8))(
    v206,
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v294,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &v294,
    0,
    1);
  eax201 = (char *)GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34176], 0, &stru_830620.__pad_579C[34312], 669);
  v208 = this->q00C;
  v209 = eax201;
  Buffer = eax201;
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v208 + 8))(v208, eax201);
  v299 = (ConvertClass *)(*this
                        - (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->q00C + 8))(this->q00C, v209) / 2
                        + 84);
  v207 = (TechnoTypeClass *)__2_YAPAXI_Z(0x2Cu);
  if ( v207 )
  {
    v211 = (ConvertClass *)this->q00C;
    eax202 = this->q004 + 217;
    *(_DWORD *)&v207->vtable0[4] = v299;
    v300 = v211;
    *(_DWORD *)&v207->vtable0[8] = eax202;
    v213 = Timer::GetTicks();
    v214 = Buffer;
    *(_DWORD *)&v207->vtable0[12] = v213;
    v207->abstractFlags = 0;
    v207->referenceCount = 0;
    v207->NeedsSaveOrLink = 0;
    v207->BarrelVoxel[0] = 0;
    v212 = (TechnoTypeClass *)v300;
    v207->nextArrayIndex = (int)v214;
    *(_DWORD *)&v207->BarrelVoxel[4] = v212;
    *(_DWORD *)v207->vtable0 = &vt_ScorePrintClass;
  }
  else
  {
    v207 = 0;
  }
  v216 = this->q024;
  if ( this->q00B < v216
    || (*((_BYTE *)this + 41) || !v216)
    && (v217 = this->q00C, v217 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v216 + v217, 0) )
  {
    v215 = (AbstractClass *)this->q00B;
    v219 = this->q008;
    this->q00B = (int)&v215->__pad_0[1];
    *(_DWORD *)(v219 + 4 * (_DWORD)v215) = v207;
  }
  memset(aP4_316, 0, sizeof(aP4_316));
  CCFileClass::Reset(aP4_28);
  FileClass::SetFileName(aP4_28, (IUnknown *)&stru_830620.__pad_579C[34160]);
  if ( CCFileClass::Open(aP4_28, 0) == 1 )
  {
    CCFileClass::Read(aP4_28, (CampaignScore *)aP4_316, 1044);
    CCFileClass::Reset(aP4_28);
  }
  if ( *(int *)&aP4_316[1032] >= Rect.left )
    *(_DWORD *)&aP4_316[1032] = 0;
  v220 = 0;
  aP2 = 0;
  while ( Rect.left <= *(_DWORD *)&aP4_316[116 * mm + 104] )
  {
    if ( ++v220 >= 9 )
    {
      aP2 = (ConvertClass *)v220;
      goto LABEL_222;
    }
  }
  aP2 = (ConvertClass *)v220;
  if ( v220 < 8 )
  {
    edi219 = &aP4_316[928];
    v222 = 8 - v220;
    do
    {
      --v222;
      qmemcpy(edi219, edi219 - 116, 0x74u);
      edi219 -= 116;
    }
    while ( v222 );
  }
  v223 = Rect.left;
  v221 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060];
  v225 = 116 * (_DWORD)aP2;
  aP4_316[v225] = 0;
  *(_DWORD *)&aP4_316[v225 + 104] = v223;
  techLevel = v221->techLevel;
  v224 = (IUnknown *)HouseClass_Player.field_0;
  *(_DWORD *)&aP4_316[v225 + 108] = techLevel;
  *(_DWORD *)&aP4_316[v225 + 112] = *(_DWORD *)(v224->field_34 + 188);
LABEL_222:
  aP4[0] = 0;
  v298 = (ConvertClass *)&aP4_316[104];
  Buffer = &v318;
  do
  {
    v228 = __2_YAPAXI_Z(0x2Cu);
    if ( v228 )
    {
      v229 = this->q00C;
      v230 = &aP4[0]->__pad_6[this->q004 + 236];
      *(_DWORD *)(v228 + 4) = *this + 7;
      *(_DWORD *)(v228 + 8) = v230;
      v231 = Timer::GetTicks();
      edx224 = v298;
      *(_DWORD *)(v228 + 12) = v231;
      *(_DWORD *)(v228 + 20) = 0;
      *(_DWORD *)(v228 + 24) = (char *)edx224 - 104;
      *(_DWORD *)(v228 + 28) = 0;
      *(_DWORD *)(v228 + 32) = 0;
      *(_BYTE *)(v228 + 36) = 0;
      *(_DWORD *)(v228 + 40) = v229;
      *(_DWORD *)v228 = &vt_ScorePrintClass;
    }
    else
    {
      v228 = 0;
    }
    v233 = this->q024;
    if ( this->q00B < v233
      || (*((_BYTE *)this + 41) || !v233)
      && (eax229 = this->q00C, eax229 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, eax229 + v233, 0) )
    {
      v232 = (AbstractClass *)this->q00B;
      v236 = this->q008;
      this->q00B = (int)&v232->__pad_0[1];
      *(_DWORD *)(v236 + 4 * (_DWORD)v232) = v228;
    }
    if ( *(_DWORD *)v298->__pad_0 )
    {
      sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[34152], *(INIClass **)v298->__pad_0);
      v234 = (INIClass *)__2_YAPAXI_Z(0x2Cu);
      if ( v234 )
      {
        v238 = this->q00C;
        v239 = &aP4[0]->__pad_6[this->q004 + 236];
        v234->headNode[0] = *this + 109;
        v234->headNode[1] = (int)v239;
        v240 = Timer::GetTicks();
        edx234 = Buffer;
        v234->headNode[2] = v240;
        v234->sectionHead[1] = 0;
        v234->sectionHead[2] = (int)edx234;
        v234->sectionCount = 0;
        *(_DWORD *)v234->__pad_20 = 0;
        v234->__pad_20[4] = 0;
        *(_DWORD *)&v234->__pad_20[8] = v238;
        *(_DWORD *)v234->__pad_0 = &vt_ScorePrintClass;
      }
      else
      {
        v234 = 0;
      }
      v242 = this->q024;
      if ( this->q00B < v242
        || (*((_BYTE *)this + 41) || !v242)
        && (eax239 = this->q00C, eax239 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, eax239 + v242, 0) )
      {
        v241 = (AbstractClass *)this->q00B;
        v245 = this->q008;
        this->q00B = (int)&v241->__pad_0[1];
        *(_DWORD *)(v245 + 4 * (_DWORD)v241) = v234;
      }
      v243 = (AbstractClass *)(Buffer + 16);
      sprintf(Buffer + 16, (ObjectClass *)&stru_829150.customSound_controller[4], *(INIClass **)&v298->field_2[2]);
      v247 = __2_YAPAXI_Z(0x2Cu);
      if ( v247 )
      {
        v248 = this->q004;
        v299 = (ConvertClass *)this->q00C;
        v249 = &aP4[0]->__pad_6[v248 + 236];
        v250 = *this + 151;
        *(_DWORD *)(v247 + 8) = v249;
        *(_DWORD *)(v247 + 4) = v250;
        v251 = Timer::GetTicks();
        edx243 = v299;
        *(_DWORD *)(v247 + 12) = v251;
        *(_DWORD *)(v247 + 20) = 0;
        *(_DWORD *)(v247 + 24) = v243;
        *(_DWORD *)(v247 + 28) = 0;
        *(_DWORD *)(v247 + 32) = 0;
        *(_BYTE *)(v247 + 36) = 0;
        *(_DWORD *)(v247 + 40) = edx243;
        *(_DWORD *)v247 = &vt_ScorePrintClass;
      }
      else
      {
        v247 = 0;
      }
      v253 = this->q024;
      if ( this->q00B < v253
        || (*((_BYTE *)this + 41) || !v253)
        && (eax248 = this->q00C, eax248 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, eax248 + v253, 0) )
      {
        v252 = (AbstractClass *)this->q00B;
        v256 = this->q008;
        this->q00B = (int)&v252->__pad_0[1];
        *(_DWORD *)(v256 + 4 * (_DWORD)v252) = v247;
      }
      v254 = *ebx85;
      Rect.left = v247;
      if ( ((int (__thiscall *)(int *, struct tagRECT *))v254->uniqueId)(this + 7, &Rect) != -1 )
      {
        do
        {
          Screen::TransitionLoop((MPCooperative *)this, 1);
          v255 = *ebx85;
          Rect.left = v247;
        }
        while ( ((int (__thiscall *)(int *, struct tagRECT *))v255->uniqueId)(this + 7, &Rect) != -1 );
      }
    }
    Screen::TransitionLoop((MPCooperative *)this, 1);
    v259 = (int)&aP4[0]->__pad_6[10] < 144;
    Buffer += 32;
    v298 = (ConvertClass *)((char *)v298 + 116);
    aP4[0] = (ConvertClass *)((char *)aP4[0] + 16);
  }
  while ( v259 );
  while ( stru_B05488.__pad_FC[0] )
    Screen::TransitionLoop((MPCooperative *)this, 1);
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
  if ( (int)aP2 >= 9 )
  {
    v260 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[34132], 0, &stru_830620.__pad_579C[34312], 749);
    ecx258 = this->q00C;
    v300 = (ConvertClass *)v260;
    v262 = *this + (640 - (*(int (__thiscall **)(int, wchar_t *))(*(_DWORD *)ecx258 + 8))(ecx258, v260)) / 2;
    v263 = *(int *)(this->q00C + 8);
    v299 = (ConvertClass *)(this->q004 - (((int)v263 - HIDWORD(v263)) >> 1) + 357);
    v261 = (TechnoTypeClass *)__2_YAPAXI_Z(0x2Cu);
    if ( v261 )
    {
      v265 = v299;
      aP4_8 = (ConvertClass *)this->q00C;
      *(_DWORD *)&v261->vtable0[4] = v262;
      *(_DWORD *)&v261->vtable0[8] = v265;
      v266 = Timer::GetTicks();
      v264 = (TechnoTypeClass *)v300;
      edx259 = aP4_8;
      *(_DWORD *)&v261->vtable0[12] = v266;
      v261->abstractFlags = 0;
      v261->nextArrayIndex = (int)v264;
      v261->referenceCount = 0;
      v261->NeedsSaveOrLink = 0;
      v261->BarrelVoxel[0] = 0;
      *(_DWORD *)&v261->BarrelVoxel[4] = edx259;
      *(_DWORD *)v261->vtable0 = &vt_ScorePrintClass;
    }
    else
    {
      v261 = 0;
    }
    v269 = this->q024;
    if ( this->q00B < v269
      || (*((_BYTE *)this + 41) || !v269)
      && (v270 = this->q00C, v270 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))&(*ebx85)->__pad_0[8])(this + 7, v270 + v269, 0) )
    {
      v268 = (AbstractClass *)this->q00B;
      v272 = this->q008;
      this->q00B = (int)&v268->__pad_0[1];
      *(_DWORD *)(v272 + 4 * (_DWORD)v268) = v261;
    }
    CellClass::CreateInstance(this, 1);
  }
  else
  {
    RenderScoreTypeText(
      (int)this,
      (int)&aP4_316[116 * (_DWORD)aP2],
      *this + 7,
      (ScoreScreen *)(16 * (_DWORD)aP2 + this->q004 + 242));
  }
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  (*(void (__thiscall **)(_DWORD *, char *))(aP4_28[0] + 8))(aP4_28, &stru_830620.__pad_579C[34160]);
  if ( (*(int (__thiscall **)(_DWORD *, int))(aP4_28[0] + 28))(aP4_28, 2) )
  {
    FileClass::Write(aP4_28, (CCFileClass *)aP4_316, 0x414u);
    CCFileClass::Reset(aP4_28);
  }
  Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
  for ( nn = 0; nn < this->q011; ++nn )
  {
    v271 = *(CCINIClass **)(this->q00E + 4 * nn);
    if ( v271 )
    {
      if ( *(_DWORD *)v271->__pad_0 )
        free(*(void **)v271->__pad_0);
      __3_YAXPAX_Z(v271);
    }
  }
  (*(void (__thiscall **)(int *))(this->q00D + 12))(this + 13);
  for ( i1 = 0; i1 < this->q00B; ++i1 )
  {
    v276 = *(void (__thiscall ****)(_DWORD, int))(this->q008 + 4 * i1);
    if ( v276 )
      (**v276)(v276, 1);
  }
  (*(void (__thiscall **)(int *))&(*ebx85)->__pad_0[12])(this + 7);
  v277 = (void (__thiscall ***)(_DWORD, int))this->q014;
  if ( v277 )
  {
    (**v277)(v277, 1);
    this->q014 = 0;
  }
  v278 = (void (__thiscall ***)(_DWORD, int))this->q00C;
  if ( v278 )
  {
    (**v278)(v278, 1);
    this->q00C = 0;
  }
  v279 = (void (__thiscall ***)(_DWORD, int))this->q004;
  if ( v279 )
  {
    (**v279)(v279, 1);
    this->q004 = 0;
  }
  v280 = (void (__thiscall ***)(_DWORD, int))this->q008;
  if ( v280 )
  {
    (**v280)(v280, 1);
    this->q008 = 0;
  }
  if ( aP4_24 )
    (**(void (__thiscall ***)(ScoreFontClass *, int))aP4_24->__pad_0)(aP4_24, 1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))(
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    0);
  GetClientRect(g_hWnd, &Rect);
  ClientToScreen(g_hWnd, (LPPOINT)&Rect);
  v281 = (ConvertClass *)*this;
  v282 = this->q004;
  aP4_8 = v281;
  aP4_136 = (ConvertClass *)((char *)v281 + Rect.left);
  aP4_12 = v282;
  aP4_140 = Rect.top + v282;
  aP4_144 = 640;
  aP4_16 = 640;
  aP4_148 = 400;
  aP4_20 = 400;
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 60))(
      *(_DWORD *)&stru_87C374.__pad_579C[23344],
      *(_DWORD *)&stru_87C374.__pad_579C[22524],
      0);
  (*(void (__thiscall **)(_DWORD, ConvertClass **, _DWORD, ConvertClass **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22520]
                                                                                        + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22520],
    &aP4_136,
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    &aP4_8,
    0,
    1);
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 64))(
      *(_DWORD *)&stru_87C374.__pad_579C[23344],
      *(_DWORD *)&stru_87C374.__pad_579C[22524],
      0);
  Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)0xFFFFFFFF);
  aP4_28[0] = &vt_CCFileClass;
  aP4_116[3] = 0;
  Vector::Clear((int)aP4_116);
  aP4_28[0] = &off_7E1668;
  return BufferIOFileClass::Dtor(aP4_28);
}



// ==== 0x0068EC00  ScoreScreen::Check  this=ScoreScreen  sig=csp ====
bool __thiscall sub_68EC00(_DWORD *this, char a2)
{
  return (*(int (__thiscall **)(_DWORD *, char *))(this->q01C + 16))(this + 7, &a2) == -1; /*0x68ec14*/
}


// ==== 0x0068EC20  CellClass::CreateInstance  this=ScoreScreen  sig=csp ====
HWND __thiscall sub_68EC20(int *this, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  _BYTE v9[4]; // [esp+14h] [ebp-1FCh] BYREF
  _DWORD v10[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v11; // [esp+110h] [ebp-100h]
  _BYTE v12[252]; // [esp+114h] [ebp-FCh] BYREF

  v2 = MEMORY[0x887340]; /*0x68ec31*/
  v3 = 20; /*0x68ec3e*/
  if ( MEMORY[0x887338] != -1 ) /*0x68ec43*/
    v2 += Timer::GetTicks() - MEMORY[0x887338]; /*0x68ec55*/
  v4 = v2; /*0x68ec57*/
  while ( 1 ) /*0x68ec5f*/
  {
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x68ec5f*/
    if ( !v3 ) /*0x68ec66*/
      break; /*0x68ec66*/
LABEL_6:
    if ( MEMORY[0xA8B238][0] == 2 || MEMORY[0xA8B238][0] == 1 ) /*0x68ec89*/
    {
      v5 = MEMORY[0x887340]; /*0x68ec94*/
      if ( MEMORY[0x887338] != -1 ) /*0x68ec9c*/
        v5 += Timer::GetTicks() - MEMORY[0x887338]; /*0x68ecae*/
      if ( (unsigned int)(v5 - v4) > 0x28 ) /*0x68ecb5*/
      {
        memset(v10, 0, sizeof(v10)); /*0x68ecc2*/
        v11 = 0; /*0x68ecc4*/
        v10[0] = 106; /*0x68eccb*/
        *(_DWORD *)((char *)&v10[38] + 2) = CellClass::GetBridgeIndexThunk(&MEMORY[0xA8EA70]); /*0x68ecde*/
        LOBYTE(v10[6]) = MEMORY[0xA8DB30]; /*0x68ecf5*/
        Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v10, 250, 0); /*0x68ecf9*/
        v6 = MEMORY[0x887340]; /*0x68ed03*/
        if ( MEMORY[0x887338] != -1 ) /*0x68ed0b*/
          v6 += Timer::GetTicks() - MEMORY[0x887338]; /*0x68ed1d*/
        v4 = v6; /*0x68ed1f*/
      }
      ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v12, (int)v9); /*0x68ed33*/
      Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x68ed3d*/
    }
    Screen::TransitionLoop(this, 1); /*0x68ed48*/
    if ( !v3 ) /*0x68ed4f*/
      break; /*0x68ed4f*/
    --v3; /*0x68ed55*/
  }
  if ( !EventQueue::Process(MEMORY[0x87F770]) ) /*0x68ec6e*/
    goto LABEL_6; /*0x68ec76*/
  return Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x68ed66*/
}


// ==== 0x0068ED80  Render_Get  this=ScoreScreen  sig=csp ====
int __stdcall Render_Get(ScoreScreen *aP0)
{
  int v1; // ebp
  int v2; // ebx
  HouseClass *v4; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  ScoreScreen *v9; // [esp-4h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]
  #375 *other; // [esp+28h] [ebp+4h]
  float othera; // [esp+28h] [ebp+4h]

  v1 = 0; /*0x68ed8a*/
  v2 = 0; /*0x68ed8d*/
  v12 = 0; /*0x68ed96*/
  v10 = 0; /*0x68ed9a*/
  if ( (int)HouseClass_Count > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      v4 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v10]; /*0x68edad*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(aP0, (IUnknown *)v4) /*0x68edca*/
        && (unsigned __int8)HouseClass::IsAlliedWith(v4, (IUnknown *)aP0)
        || aP0 == (ScoreScreen *)v4 )
      {
        v5 = VectorClass::GetCount(v4->ownedInfantryTypes2) + v2; /*0x68eddd*/
        v6 = VectorClass::GetCount(v4->__pad_5564) + v5; /*0x68edea*/
        v7 = VectorClass::GetCount(&v4->__pad_5564[20]) + v6; /*0x68edf7*/
        v2 = VectorClass::GetCount(&v4->__pad_5564[40]) + v7; /*0x68ee0c*/
        v1 += v4->killedBuildingsOfHouses[0] + *(_DWORD *)v4->__pad_5488; /*0x68ee0e*/
      }
      ++v10; /*0x68ee1d*/
    }
    while ( v10 < (int)HouseClass_Count ); /*0x68ee21*/
    v12 = v2; /*0x68ee23*/
  }
  Debug::Log(); /*0x68ee34*/
  if ( v2 + v1 <= 0 ) /*0x68ee3e*/
    v11 = 0.0; /*0x68ee4e*/
  else
    v11 = (double)v12 / (double)(v2 + v1); /*0x68ee48*/
  Debug::Log(); /*0x68ee65*/
  (*(void (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24); /*0x68ee82*/
  Debug::Log(); /*0x68ee8b*/
  other = (#375 *)(aP0[18].ScoreScreen_field_0x10 + aP0[11].ScoreScreen_field_0x24); /*0x68eea3*/
  if ( (int)other <= 0 ) /*0x68eea7*/
    othera = 0.0; /*0x68eec1*/
  else
    othera = (double)(*(int (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24) /*0x68eebb*/
           / (double)(int)other;
  Debug::Log(); /*0x68eed8*/
  v9 = (ScoreScreen *)Math::RoundToInt((othera + v11) * 0.5 * 100.0); /*0x68eef8*/
  Debug::Log(); /*0x68eefe*/
  return (int)v9->__pad_0; /*0x68ef08*/
}


// ==== 0x0068EF20  ScoreScreen::AccumulateScoreStats  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::AccumulateScoreStats(ScoreScreen *this)
{
  ScoreScreen *v1; // esi
  AnimClass *v2; // ebx
  AnimClass *v3; // ebp
  AnimClass *v4; // eax
  AnimClass *v5; // edi
  HouseClass *v6; // esi
  AnimClass *v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]

  v1 = this; /*0x68ef26*/
  v2 = 0; /*0x68ef2f*/
  v3 = 0; /*0x68ef31*/
  v4 = 0; /*0x68ef33*/
  v5 = 0; /*0x68ef35*/
  v8 = 0; /*0x68ef3d*/
  v9 = 0; /*0x68ef41*/
  if ( (int)HouseClass_Count > 0 ) /*0x68ef45*/
  {
    do /*0x68eff3*/
    {
      v6 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v9]; /*0x68ef54*/
      Debug::Log(); /*0x68ef71*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, (IUnknown *)v6) /*0x68efa1*/
        && (unsigned __int8)HouseClass::IsAlliedWith(v6, HouseClass_Player)
        || HouseClass_Player == (IUnknown *)v6 )
      {
        v3 = (AnimClass *)((char *)v3 + v6->killedBuildingsOfHouses[0]); /*0x68efb3*/
        v8 = (AnimClass *)((char *)v8 + *(_DWORD *)v6->__pad_5488); /*0x68efb7*/
      }
      else
      {
        v5 = (AnimClass *)((char *)v5 + v6->killedBuildingsOfHouses[0]); /*0x68efc9*/
        v2 = (AnimClass *)((char *)v2 + *(_DWORD *)v6->__pad_5488); /*0x68efcb*/
      }
      Debug::Log(); /*0x68efda*/
      ++v9; /*0x68efef*/
    }
    while ( v9 < (int)HouseClass_Count ); /*0x68eff3*/
    v1 = this; /*0x68eff9*/
    v4 = v8; /*0x68effd*/
  }
  if ( *(_DWORD *)(HouseClass_Player->field_34 + 188) ) /*0x68f00f*/
  {
    Screen::TransitionRender((int *)v1->__pad_0, v2, v4, 227); /*0x68f03c*/
    return Screen::TransitionRender((int *)v1->__pad_0, v5, v3, 283); /*0x68f04a*/
  }
  else
  {
    Screen::TransitionRender((int *)v1->__pad_0, v4, v2, 227); /*0x68f01d*/
    return Screen::TransitionRender((int *)v1->__pad_0, v3, v5, 283); /*0x68f02b*/
  }
}


// ==== 0x0068F060  Screen::TransitionRender  this=Screen  sig=csp ====
int __thiscall Screen::TransitionRender(int *this, AnimClass *aP1, AnimClass *aP2, int a4)
{
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  CampaignScore *v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  CampaignScore *v22; // eax
  _DWORD *v23; // ecx
  CampaignScore *v24; // ebx
  int *v25; // ecx
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // ecx
  CampaignScore *v29; // ebx
  int *v30; // ecx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  AnimClass *v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebx
  int *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // ecx
  int v42; // ebx
  int *v43; // ecx
  int v44; // edx
  int v45; // eax
  int i; // ebx
  int v47; // edx
  wchar_t *v48; // edi
  int v49; // eax
  ObjectClass *v50; // ebx
  ObjectClass *v51; // ebx
  CampaignScore *v53; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v54; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v55; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v56; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v57; // [esp+B8h] [ebp-26Ch]
  int v58; // [esp+C8h] [ebp-25Ch] BYREF
  int v59; // [esp+CCh] [ebp-258h]
  wchar_t *v60; // [esp+D0h] [ebp-254h] BYREF
  int v61; // [esp+D4h] [ebp-250h]
  int var24C; // [esp+D8h] [ebp-24Ch]
  int v63; // [esp+DCh] [ebp-248h]
  int v64; // [esp+E0h] [ebp-244h]
  int v65; // [esp+E4h] [ebp-240h]
  int v66; // [esp+E8h] [ebp-23Ch]
  wchar_t *v62; // [esp+ECh] [ebp-238h]
  int v68; // [esp+F0h] [ebp-234h]
  wchar_t *v69; // [esp+F4h] [ebp-230h] BYREF
  int v70; // [esp+F8h] [ebp-22Ch]
  int v71; // [esp+FCh] [ebp-228h]
  int v72; // [esp+100h] [ebp-224h]
  int v73; // [esp+104h] [ebp-220h] BYREF
  CampaignScore *v74; // [esp+108h] [ebp-21Ch]
  int v75; // [esp+10Ch] [ebp-218h]
  int v76; // [esp+110h] [ebp-214h]
  int v77; // [esp+114h] [ebp-210h]
  int v78; // [esp+118h] [ebp-20Ch]
  AnimClass *v79; // [esp+11Ch] [ebp-208h]
  AnimClass *v80; // [esp+120h] [ebp-204h]
  wchar_t v81[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v83[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v84[64]; // [esp+2A4h] [ebp-80h] BYREF

  v5 = (int)aP2; /*0x68f07a*/
  v6 = *this + a4; /*0x68f085*/
  v7 = this->q001 + 244; /*0x68f08a*/
  v73 = 0; /*0x68f092*/
  v74 = 0; /*0x68f096*/
  v75 = 0; /*0x68f09a*/
  v76 = 0; /*0x68f09e*/
  v69 = 0; /*0x68f0a2*/
  v70 = 0; /*0x68f0a6*/
  v71 = 0; /*0x68f0aa*/
  v72 = 0; /*0x68f0ae*/
  if ( (int)aP1 > (int)aP2 ) /*0x68f0b2*/
    v5 = (int)aP1; /*0x68f0b4*/
  v65 = v5; /*0x68f0b8*/
  if ( !v5 ) /*0x68f0bc*/
  {
    v5 = 1; /*0x68f0be*/
    v65 = 1; /*0x68f0c3*/
  }
  v8 = 140 * (int)aP1 / v5; /*0x68f0e0*/
  v66 = v8; /*0x68f0eb*/
  v9 = 140 * (int)aP2 / v65; /*0x68f0f6*/
  v64 = v9; /*0x68f0ff*/
  if ( v65 < 20 ) /*0x68f103*/
  {
    v66 = 5 * (_DWORD)aP1; /*0x68f108*/
    v64 = 5 * (_DWORD)aP2; /*0x68f116*/
    v8 = 5 * (_DWORD)aP1; /*0x68f11a*/
    v9 = 5 * (_DWORD)aP2; /*0x68f11e*/
  }
  v65 = v8; /*0x68f124*/
  if ( v8 <= v9 ) /*0x68f128*/
    v65 = v9; /*0x68f12a*/
  if ( !v65 ) /*0x68f134*/
    v65 = 1; /*0x68f136*/
  v63 = v8; /*0x68f140*/
  v10 = v7 - v8; /*0x68f144*/
  v11 = this->q008; /*0x68f146*/
  v77 = v10; /*0x68f149*/
  v61 = v10; /*0x68f14d*/
  v60 = (wchar_t *)v6; /*0x68f15a*/
  var24C = 4; /*0x68f15e*/
  LOWORD(v58) = -18947; /*0x68f166*/
  BYTE2(v58) = 28; /*0x68f170*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v11 + 28))(v11, &v60, &v58, 25); /*0x68f17b*/
  v63 = v66; /*0x68f189*/
  v60 = (wchar_t *)(v6 + 4); /*0x68f18d*/
  v12 = this->q008; /*0x68f191*/
  v61 = v77; /*0x68f19b*/
  var24C = 7; /*0x68f19f*/
  LOWORD(v58) = -18947; /*0x68f1a7*/
  BYTE2(v58) = 28; /*0x68f1b1*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v12 + 28))(v12, &v60, &v58, 50); /*0x68f1bc*/
  v63 = v66; /*0x68f1ca*/
  v60 = (wchar_t *)(v6 + 11); /*0x68f1ce*/
  v13 = this->q008; /*0x68f1d2*/
  v61 = v77; /*0x68f1dc*/
  var24C = 4; /*0x68f1e0*/
  LOWORD(v58) = -18947; /*0x68f1e8*/
  BYTE2(v58) = 28; /*0x68f1f2*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v13 + 28))(v13, &v60, &v58, 25); /*0x68f1fd*/
  v62 = (wchar_t *)(v6 + 132); /*0x68f20a*/
  v60 = (wchar_t *)(v6 + 132); /*0x68f20e*/
  v63 = v64; /*0x68f214*/
  v14 = this->q008; /*0x68f21a*/
  v78 = v7 - v64; /*0x68f21d*/
  v61 = v7 - v64; /*0x68f221*/
  var24C = 4; /*0x68f22c*/
  LOWORD(v58) = 7418; /*0x68f234*/
  BYTE2(v58) = 28; /*0x68f23d*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v14 + 28))(v14, &v60, &v58, 25); /*0x68f248*/
  v60 = (wchar_t *)(v6 + 136); /*0x68f255*/
  v61 = v78; /*0x68f259*/
  var24C = 7; /*0x68f25d*/
  v15 = this->q008; /*0x68f269*/
  v63 = v64; /*0x68f26c*/
  LOWORD(v58) = 7418; /*0x68f277*/
  BYTE2(v58) = 28; /*0x68f280*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v15 + 28))(v15, &v60, &v58, 50); /*0x68f28b*/
  v63 = v64; /*0x68f29c*/
  v60 = (wchar_t *)(v6 + 143); /*0x68f2a0*/
  v16 = this->q008; /*0x68f2a4*/
  v61 = v78; /*0x68f2ae*/
  var24C = 4; /*0x68f2b2*/
  LOWORD(v58) = 7418; /*0x68f2ba*/
  BYTE2(v58) = 28; /*0x68f2c3*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v16 + 28))(v16, &v60, &v58, 25); /*0x68f2ce*/
  v17 = (CampaignScore *)aP1; /*0x68f2d8*/
  v18 = 1; /*0x68f2df*/
  v68 = 1; /*0x68f2e7*/
  v79 = aP2; /*0x68f2eb*/
  v80 = aP1; /*0x68f2ef*/
  v58 = v7 - 1; /*0x68f2f3*/
  while ( 1 ) /*0x68f2f7*/
  {
    v19 = v66; /*0x68f2f7*/
    v20 = v64; /*0x68f2fb*/
    if ( v66 > v64 ) /*0x68f301*/
      v20 = v66; /*0x68f303*/
    if ( v18 > v20 ) /*0x68f307*/
      break; /*0x68f307*/
    if ( v75 > 0 && v76 > 0 ) /*0x68f31b*/
    {
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 8))( /*0x68f33a*/
        *(_DWORD *)&stru_87C374.__pad_579C[22524],
        &v73,
        *(_DWORD *)&stru_87C374.__pad_579C[22528],
        &v73,
        0,
        1);
      v19 = v66; /*0x68f33d*/
      v18 = v68; /*0x68f341*/
    }
    if ( v18 > v19 ) /*0x68f347*/
    {
      v59 = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x68f414*/
      swprintf(v84, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v53); /*0x68f418*/
      v28 = (_DWORD *)this->q003; /*0x68f41d*/
      v29 = (CampaignScore *)(v7 - v28[2] - v66); /*0x68f430*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, CampaignScore *, int))(*v28 + 12))( /*0x68f443*/
        v28,
        v59,
        v84,
        v6,
        v29,
        2);
      v30 = (int *)this->q003; /*0x68f446*/
      v31 = *v30; /*0x68f44c*/
      v59 = v30[2]; /*0x68f44e*/
      v75 = (*(int (__thiscall **)(int *, wchar_t *))(v31 + 8))(v30, v84); /*0x68f45d*/
      v73 = v6; /*0x68f465*/
      v74 = v29; /*0x68f469*/
      v76 = v59; /*0x68f46d*/
    }
    else
    {
      v63 = v18; /*0x68f351*/
      v21 = this->q008; /*0x68f35e*/
      v61 = v58; /*0x68f361*/
      v60 = (wchar_t *)v6; /*0x68f36c*/
      var24C = 15; /*0x68f370*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x68f37f*/
                                                                               + 8))(
        *(_DWORD *)&stru_87C374.__pad_579C[22524],
        &v60,
        v21,
        &v60,
        0,
        1);
      v22 = (CampaignScore *)((int)v80 / v65); /*0x68f38d*/
      v59 = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x68f391*/
      if ( (int)v80 / v65 >= (int)v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v22, v53); /*0x68f3a9*/
      v23 = (_DWORD *)this->q003; /*0x68f3ae*/
      v24 = (CampaignScore *)(v58 - v23[2]); /*0x68f3c2*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, CampaignScore *, int))(*v23 + 12))( /*0x68f3d0*/
        v23,
        v59,
        Buffer,
        v6,
        v24,
        2);
      v25 = (int *)this->q003; /*0x68f3d3*/
      v26 = *v25; /*0x68f3d9*/
      v59 = v25[2]; /*0x68f3db*/
      v27 = (*(int (__thiscall **)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v73 = v6; /*0x68f3ee*/
      v74 = v24; /*0x68f3f2*/
      v75 = v27; /*0x68f3f6*/
      v76 = v59; /*0x68f3fa*/
    }
    if ( v71 > 0 && v72 > 0 ) /*0x68f47f*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, _DWORD, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x68f49d*/
                                                                                  + 8))(
        *(_DWORD *)&stru_87C374.__pad_579C[22524],
        &v69,
        *(_DWORD *)&stru_87C374.__pad_579C[22528],
        &v69,
        0,
        1);
    if ( v68 > v64 ) /*0x68f4aa*/
    {
      v59 = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x68f585*/
      swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v54); /*0x68f589*/
      v41 = (_DWORD *)this->q003; /*0x68f58e*/
      v42 = v7 - v41[2] - v64; /*0x68f5a3*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, wchar_t *, int, int))(*v41 + 12))(v41, v59, v81, v62, v42, 2); /*0x68f5b5*/
      v43 = (int *)this->q003; /*0x68f5b8*/
      v44 = *v43; /*0x68f5be*/
      v59 = v43[2]; /*0x68f5c0*/
      v45 = (*(int (__thiscall **)(int *, wchar_t *))(v44 + 8))(v43, v81); /*0x68f5c9*/
      v40 = v59; /*0x68f5d0*/
      v69 = v62; /*0x68f5d4*/
      v70 = v42; /*0x68f5d8*/
      v71 = v45; /*0x68f5dc*/
    }
    else
    {
      v32 = v58; /*0x68f4b4*/
      v63 = v68; /*0x68f4b8*/
      v33 = this->q008; /*0x68f4c5*/
      v60 = v62; /*0x68f4c8*/
      v61 = v58; /*0x68f4d3*/
      var24C = 15; /*0x68f4d7*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x68f4e6*/
                                                                               + 8))(
        *(_DWORD *)&stru_87C374.__pad_579C[22524],
        &v60,
        v33,
        &v60,
        0,
        1);
      v34 = (AnimClass *)((int)v79 / v65); /*0x68f4f4*/
      v59 = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x68f4f8*/
      if ( (int)v79 / v65 >= (int)aP2 ) /*0x68f505*/
        v34 = aP2; /*0x68f507*/
      swprintf(v83, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v34, v54); /*0x68f517*/
      v35 = (_DWORD *)this->q003; /*0x68f51c*/
      v36 = v32 - v35[2]; /*0x68f529*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, wchar_t *, int, int))(*v35 + 12))(v35, v59, v83, v62, v36, 2); /*0x68f53e*/
      v37 = (int *)this->q003; /*0x68f541*/
      v38 = *v37; /*0x68f547*/
      v59 = v37[2]; /*0x68f549*/
      v39 = (*(int (__thiscall **)(int *, wchar_t *))(v38 + 8))(v37, v83); /*0x68f555*/
      v40 = v59; /*0x68f55c*/
      v69 = v62; /*0x68f560*/
      v70 = v36; /*0x68f564*/
      v71 = v39; /*0x68f568*/
    }
    v72 = v40; /*0x68f5e5*/
    if ( &stru_830620 != (IUnknown *)-56784 ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q011; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(&stru_830620.__pad_579C[34356], **(const void ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop((MPCooperative *)this, 1); /*0x68f625*/
    v68 += 2; /*0x68f646*/
    v58 -= 2; /*0x68f651*/
    v80 = (AnimClass *)((char *)v80 + 2 * (_DWORD)aP1); /*0x68f660*/
    v17 = (CampaignScore *)aP1; /*0x68f664*/
    v18 = v68; /*0x68f66d*/
    v79 = (AnimClass *)((char *)v79 + 2 * (_DWORD)aP2); /*0x68f671*/
  }
  if ( v75 > 0 && v76 > 0 ) /*0x68f688*/
  {
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 8))( /*0x68f6a6*/
      *(_DWORD *)&stru_87C374.__pad_579C[22524],
      &v73,
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &v73,
      0,
      1);
    v19 = v66; /*0x68f6a9*/
  }
  v61 = v77; /*0x68f6b3*/
  v47 = this->q008; /*0x68f6be*/
  v63 = v19; /*0x68f6c1*/
  v60 = (wchar_t *)v6; /*0x68f6cc*/
  var24C = 15; /*0x68f6d0*/
  (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] /*0x68f6df*/
                                                                           + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v60,
    v47,
    &v60,
    0,
    1);
  v59 = *(_DWORD *)&stru_87C374.__pad_579C[22524]; /*0x68f6f2*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v53); /*0x68f6f6*/
  (*(void (__thiscall **)(_DWORD, int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f71f*/
    this->q003,
    v59,
    v81,
    v6,
    v7 - *(_DWORD *)(this->q003 + 8) - v66,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v81); /*0x68f72c*/
  v59 = *(_DWORD *)&stru_87C374.__pad_579C[22528]; /*0x68f740*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v55); /*0x68f744*/
  (*(void (__stdcall **)(int, wchar_t *, int, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f76c*/
    v59,
    v81,
    v6,
    v7 - *(_DWORD *)(this->q003 + 8) - v66,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v81); /*0x68f779*/
  if ( v71 > 0 && v72 > 0 ) /*0x68f78a*/
    (*(void (__thiscall **)(_DWORD, wchar_t **, _DWORD, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x68f7a9*/
                                                                                + 8))(
      *(_DWORD *)&stru_87C374.__pad_579C[22524],
      &v69,
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &v69,
      0,
      1);
  v48 = v62; /*0x68f7b4*/
  v61 = v78; /*0x68f7b8*/
  v49 = this->q008; /*0x68f7c5*/
  v63 = v64; /*0x68f7c8*/
  v60 = v62; /*0x68f7d3*/
  var24C = 15; /*0x68f7d7*/
  (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] /*0x68f7e6*/
                                                                           + 8))(
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    &v60,
    v49,
    &v60,
    0,
    1);
  v50 = *(ObjectClass **)&stru_87C374.__pad_579C[22524]; /*0x68f7f0*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v56); /*0x68f801*/
  (*(void (__thiscall **)(_DWORD, ObjectClass *, wchar_t *, wchar_t *, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f821*/
    this->q003,
    v50,
    v81,
    v48,
    v7 - *(_DWORD *)(this->q003 + 8) - v64,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v81); /*0x68f82e*/
  v51 = *(ObjectClass **)&stru_87C374.__pad_579C[22528]; /*0x68f838*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v57); /*0x68f849*/
  (*(void (__stdcall **)(ObjectClass *, wchar_t *, wchar_t *, int, int))(*(_DWORD *)this->q003 + 12))( /*0x68f86b*/
    v51,
    v81,
    v48,
    v7 - *(_DWORD *)(this->q003 + 8) - v64,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(*(_DWORD *)this->q003 + 8))(this->q003, v81); /*0x68f878*/
  return Screen::TransitionLoop((MPCooperative *)this, 20); /*0x68f884*/
}


// ==== 0x0068F8A0  ObjectClass::method_68F8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_68F8A0(int this)
{
  int v2; // eax
  unsigned int v3; // kr04_4
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  _DWORD *v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x68f8b3*/
  sprintf(Buffer, MEMORY[0x817F6C], v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    v5 = *(_DWORD *)(this + 12); /*0x68f8f8*/
    v6 = *(_DWORD *)(this + 4) + 214; /*0x68f8fd*/
    v4[1] = 590 - 12 * (v3 - 1) + *(_DWORD *)this; /*0x68f902*/
    v4[2] = v6; /*0x68f908*/
    v4[3] = Timer::GetTicks(); /*0x68f910*/
    v4[5] = 0; /*0x68f915*/
    v4[10] = v5; /*0x68f91c*/
    v4[6] = Buffer; /*0x68f91f*/
    v4[7] = 0; /*0x68f922*/
    v4[8] = 0; /*0x68f925*/
    *((_BYTE *)v4 + 36) = 0; /*0x68f928*/
    *v4 = &vt_ScorePrintClass; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  v7 = *(_DWORD *)(this + 36); /*0x68f936*/
  v8 = (int *)(this + 28); /*0x68f93c*/
  if ( *(_DWORD *)(this + 44) < v7 /*0x68f95e*/
    || (*(_BYTE *)(this + 41) || !v7)
    && (v9 = *(_DWORD *)(this + 48), v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*v8 + 8))(this + 28, v7 + v9, 0) )
  {
    v10 = *(_DWORD *)(this + 44); /*0x68f965*/
    v11 = *(_DWORD *)(this + 32); /*0x68f968*/
    *(_DWORD *)(this + 44) = v10 + 1; /*0x68f96e*/
    *(_DWORD *)(v11 + 4 * v10) = v4; /*0x68f971*/
  }
  v12 = *v8; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int, _DWORD **))(v12 + 16))(this + 28, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int, _DWORD **))(v14 + 16))(this + 28, &v15) )
  {
    Screen::TransitionLoop((int *)this, 1); /*0x68f98d*/
    v14 = *v8; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}


// ==== 0x0068F9B0  ScoreScreen::DisplayTimeText  this=ScoreScreen  sig=csp ====
int __thiscall sub_68F9B0(int this, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  _DWORD *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // edx
  wchar_t Buffer[20]; // [esp+Ch] [ebp-28h] BYREF

  v3 = a2; /*0x68f9bb*/
  if ( a2 / 0xE10 > 0x63 ) /*0x68f9c9*/
    v3 = 359999; /*0x68f9cb*/
  swprintf( /*0x68fa12*/
    Buffer,
    (const size_t)MEMORY[0x83E584],
    (const wchar_t *const)(v3 / 0xE10),
    v3 % 0xE10 / 0x3C,
    v3 % 0xE10 % 0x3C);
  v4 = *(_DWORD *)this /*0x68fa33*/
     - (*(int (__thiscall **)(_DWORD, wchar_t *))(**(_DWORD **)(this + 16) + 8))(*(_DWORD *)(this + 16), Buffer) / 2
     + 542;
  v5 = __2_YAPAXI_Z(0x2Cu); /*0x68fa3e*/
  if ( v5 ) /*0x68fa45*/
  {
    v6 = *(_DWORD *)(this + 16); /*0x68fa4b*/
    v7 = *(_DWORD *)(this + 4) + 322; /*0x68fa4e*/
    v5[1] = v4; /*0x68fa56*/
    v5[2] = v7; /*0x68fa59*/
    v5[3] = Timer::GetTicks(); /*0x68fa61*/
    v5[5] = 0; /*0x68fa66*/
    v5[10] = v6; /*0x68fa6d*/
    v5[6] = Buffer; /*0x68fa70*/
    v5[7] = 0; /*0x68fa73*/
    v5[8] = 0; /*0x68fa76*/
    *((_BYTE *)v5 + 36) = 0; /*0x68fa79*/
    *v5 = &vt_ScorePrintClass; /*0x68fa7c*/
  }
  else
  {
    v5 = 0; /*0x68fa85*/
  }
  v8 = *(_DWORD *)(this + 36); /*0x68fa87*/
  v9 = (int *)(this + 28); /*0x68fa8d*/
  if ( *(_DWORD *)(this + 44) < v8 /*0x68faaf*/
    || (*(_BYTE *)(this + 41) || !v8)
    && (v10 = *(_DWORD *)(this + 48), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*v9 + 8))(this + 28, v8 + v10, 0) )
  {
    v11 = *(_DWORD *)(this + 44); /*0x68fab6*/
    v12 = *(_DWORD *)(this + 32); /*0x68fab9*/
    *(_DWORD *)(this + 44) = v11 + 1; /*0x68fabf*/
    *(_DWORD *)(v12 + 4 * v11) = v5; /*0x68fac2*/
  }
  v13 = *v9; /*0x68fac5*/
  a2 = (unsigned int)v5; /*0x68face*/
  for ( result = (*(int (__thiscall **)(int, unsigned int *))(v13 + 16))(this + 28, &a2); /*0x68fad8*/
        result != -1;
        result = (*(int (__thiscall **)(int, unsigned int *))(v15 + 16))(this + 28, &a2) )
  {
    Screen::TransitionLoop((int *)this, 1); /*0x68fade*/
    v15 = *v9; /*0x68fae3*/
    a2 = (unsigned int)v5; /*0x68faec*/
  }
  return result; /*0x68faf8*/
}


// ==== 0x0068FB10  ObjectClass::method_68FB10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_68FB10(
        _DWORD *this,
        _DWORD *a2,
        int a3,
        size_t BufferCount,
        wchar_t *Format,
        wchar_t *a6,
        int a7,
        int a8)
{
  wchar_t *v8; // eax
  _DWORD *v10; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  CampaignScore *v16; // [esp+8h] [ebp-8Ch]
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8, v16); /*0x68fb3d*/
  v10 = (_DWORD *)this->vtable4; /*0x68fb42*/
  v11 = a8 - v10[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = (_DWORD *)this->vtable4; /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/
}


// ==== 0x0068FBB0  ObjectClass::RenderScoreTypeText  this=ScoreScreen  sig=csp ====
int __thiscall RenderScoreTypeText(int this, int a2, int a3, ScoreScreen *aP3)
{
  int v4; // ebp
  int i; // edi
  int v7; // ecx
  int j; // edi
  int v9; // ecx
  CCINIClass *v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int m; // edi
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  _BYTE *v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  _DWORD *v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int k; // edi
  int result; // eax
  int v33; // [esp+38h] [ebp-3Ch]
  int v34; // [esp+3Ch] [ebp-38h]
  int v35; // [esp+40h] [ebp-34h]
  _DWORD v36[4]; // [esp+44h] [ebp-30h] BYREF
  _DWORD v37[4]; // [esp+54h] [ebp-20h] BYREF
  _DWORD v38[4]; // [esp+64h] [ebp-10h] BYREF

  v4 = a3; /*0x68fbb5*/
  v34 = 0; /*0x68fbbf*/
  v33 = 0; /*0x68fbc3*/
  do /*0x68ffc4*/
  {
    if ( MEMORY[0xA8D63C].__pad_14B0[660] != 1 ) /*0x68fbce*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x68fbd7*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * i); /*0x68fbdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x68fbe1*/
      }
      while ( !MEMORY[0xA8D63C].__pad_14B0[660] ) /*0x68fbf3*/
      {
        Sleep(0x1F4u); /*0x68fbfa*/
        MessageLoop(); /*0x68fc00*/
      }
      for ( j = 0; j < *(_DWORD *)(this + 44); ++j ) /*0x68fc15*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * j); /*0x68fc1a*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68fc1f*/
      }
    }
    if ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x68fc30*/
    {
      LOWORD(v10) = EventQueue::Read(MEMORY[0x87F770]); /*0x68fc44*/
      v11 = (unsigned __int8)Event_Process(MEMORY[0x87F770], v10); /*0x68fc57*/
      v34 = v11; /*0x68fc5d*/
      Event::Dispatch(); /*0x68fc61*/
      v12 = a3 + 90; /*0x68fc6a*/
      if ( v4 >= a3 + 90 && EventQueue::Process(MEMORY[0x87F770]) ) /*0x68fc7b*/
      {
        do /*0x68fc96*/
          EventQueue::Read(MEMORY[0x87F770]); /*0x68fc8b*/
        while ( EventQueue::Process(MEMORY[0x87F770]) ); /*0x68fc96*/
      }
      if ( v11 != 8 ) /*0x68fca3*/
      {
        if ( v11 < 32 ) /*0x68fdfe*/
          goto LABEL_46; /*0x68fdfe*/
        v13 = a2; /*0x68fe0f*/
        goto LABEL_27; /*0x68fe0f*/
      }
      v13 = a2; /*0x68fcb2*/
      if ( v4 >= a3 + 84 ) /*0x68fcb6*/
      {
        LOBYTE(v12) = *(_BYTE *)(v33 + a2); /*0x68fcb8*/
        if ( (_BYTE)v12 ) /*0x68fcbd*/
        {
          if ( (_BYTE)v12 != 32 ) /*0x68fcc1*/
          {
            LOWORD(v12) = (char)v12; /*0x68fcc6*/
            v36[2] = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) /*0x68fcd5*/
                   + 1;
            v14 = *(_DWORD *)(this + 8); /*0x68fce3*/
            v36[1] = &aP3->__pad_0[1]; /*0x68fce6*/
            v36[0] = v4; /*0x68fcf1*/
            v36[3] = 16; /*0x68fcf5*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, int, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] /*0x68fd04*/
                                                                                 + 8))(
              *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
              v36,
              v14,
              v36,
              0,
              1);
            (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] /*0x68fd21*/
                                                                                    + 8))(
              *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
              v36,
              *(_DWORD *)(this + 8),
              v36,
              0,
              1);
            v34 = 32; /*0x68fd24*/
LABEL_27:
            v18 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v34); /*0x68fe13*/
            v19 = *(_DWORD **)(this + 12); /*0x68fe20*/
            v20 = v18 + 1; /*0x68fe27*/
            if ( v4 + v19[1] <= a3 + 90 ) /*0x68fe2f*/
            {
              if ( v4 + v20 >= a3 + 84 ) /*0x68fe40*/
              {
                HIWORD(v21) = HIWORD(v33); /*0x68fe42*/
                LOWORD(v21) = *(char *)(v33 + v13); /*0x68fe48*/
                v38[2] = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 4))(v19, v21) + 1; /*0x68fe56*/
                v22 = *(_DWORD *)(this + 8); /*0x68fe64*/
                v38[1] = &aP3->__pad_0[1]; /*0x68fe67*/
                v38[0] = v4; /*0x68fe72*/
                v38[3] = 16; /*0x68fe76*/
                (*(void (__thiscall **)(_DWORD, _DWORD *, int, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] /*0x68fe85*/
                                                                                     + 8))(
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
                  v38,
                  v22,
                  v38,
                  0,
                  1);
                (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] /*0x68fea2*/
                                                                                        + 8))(
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                  v38,
                  *(_DWORD *)(this + 8),
                  v38,
                  0,
                  1);
              }
              v23 = (_BYTE *)(v33 + v13); /*0x68feb1*/
              *v23 = v34; /*0x68feb4*/
              v23[1] = 0; /*0x68feb6*/
              v24 = (_DWORD *)__2_YAPAXI_Z(0x2Cu); /*0x68febb*/
              v25 = v24; /*0x68fec0*/
              if ( v24 ) /*0x68fec7*/
              {
                v35 = *(_DWORD *)(this + 12); /*0x68fed0*/
                v24[1] = v4; /*0x68fed7*/
                v24[2] = aP3; /*0x68feda*/
                v24[3] = Timer::GetTicks(); /*0x68fee2*/
                v25[5] = 0; /*0x68fee7*/
                v25[7] = 0; /*0x68feea*/
                v25[8] = 0; /*0x68feed*/
                *((_BYTE *)v25 + 36) = 0; /*0x68fef0*/
                v25[6] = v23; /*0x68fef7*/
                v25[10] = v35; /*0x68fefa*/
                *v25 = &vt_ScorePrintClass; /*0x68fefd*/
                v26 = v25; /*0x68ff03*/
              }
              else
              {
                v26 = 0; /*0x68ff07*/
              }
              v27 = *(_DWORD *)(this + 36); /*0x68ff09*/
              if ( *(_DWORD *)(this + 44) < v27 /*0x68ff31*/
                || (*(_BYTE *)(this + 41) || !v27)
                && (v28 = *(_DWORD *)(this + 48), v28 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 28) + 8))(
                     this + 28,
                     v27 + v28,
                     0) )
              {
                v29 = *(_DWORD *)(this + 44); /*0x68ff38*/
                v30 = *(_DWORD *)(this + 32); /*0x68ff3b*/
                *(_DWORD *)(this + 44) = v29 + 1; /*0x68ff41*/
                *(_DWORD *)(v30 + 4 * v29) = v26; /*0x68ff44*/
              }
              if ( g_INI_Key_Type ) /*0x68ff4e*/
              {
                if ( Audio::IsSoundEnabled() ) /*0x68ff50*/
                {
                  for ( k = 0; k < *(_DWORD *)(this + 68); ++k ) /*0x68ff60*/
                  {
                    if ( !_strcmpi(g_INI_Key_Type, **(char ***)(*(_DWORD *)(this + 56) + 4 * k)) ) /*0x68ff70*/
                      break; /*0x68ff7a*/
                  }
                }
              }
              if ( v4 < a3 + 87 ) /*0x68ff8d*/
              {
                ++v33; /*0x68ff9e*/
                v4 += (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v34) /*0x68ffa5*/
                    + 1;
              }
            }
            goto LABEL_46; /*0x68ffa5*/
          }
        }
      }
      if ( v33 ) /*0x68fd33*/
      {
        LOBYTE(v12) = *(_BYTE *)(v33 + a2 - 1); /*0x68fd39*/
        --v33; /*0x68fd43*/
        LOWORD(v12) = (char)v12; /*0x68fd47*/
        v15 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) + 1; /*0x68fd53*/
        v4 -= v15; /*0x68fd54*/
        v37[2] = v15; /*0x68fd56*/
        v16 = *(_DWORD *)(this + 8); /*0x68fd64*/
        v37[1] = &aP3->__pad_0[1]; /*0x68fd67*/
        v37[0] = v4; /*0x68fd72*/
        v37[3] = 16; /*0x68fd76*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, int, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] /*0x68fd85*/
                                                                             + 8))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
          v37,
          v16,
          v37,
          0,
          1);
        (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] /*0x68fda2*/
                                                                                + 8))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
          v37,
          *(_DWORD *)(this + 8),
          v37,
          0,
          1);
        *(_BYTE *)(v33 + a2) = 0; /*0x68fdaa*/
        if ( &stru_830620 != (IUnknown *)-56776 ) /*0x68fdb0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x68fdb6*/
          {
            for ( m = 0; m < *(_DWORD *)(this + 68); ++m ) /*0x68fdca*/
            {
              if ( !_strcmpi(&stru_830620.__pad_579C[34348], **(char ***)(*(_DWORD *)(this + 56) + 4 * m)) ) /*0x68fdde*/
                break; /*0x68fde8*/
            }
          }
        }
      }
    }
LABEL_46:
    Render_Render_68FFE0((_DWORD *)this, v4, aP3); /*0x68ffa9*/
    result = Screen::TransitionLoop((MPCooperative *)this, 1); /*0x68ffba*/
  }
  while ( v34 != 13 ); /*0x68ffc4*/
  return result; /*0x68ffca*/
}


// ==== 0x0068FFE0  ObjectClass::Render_Render_68FFE0  this=ScoreScreen  sig=csp ====
signed int __thiscall Render_Render_68FFE0(_DWORD *this, int a2, ScoreScreen *aP2)
{
  signed int result; // eax
  int v5; // esi
  int v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h]
  _DWORD v8[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  char *v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+30h] [ebp-10h] BYREF
  char *v12; // [esp+34h] [ebp-Ch]
  int v13; // [esp+38h] [ebp-8h]
  int v14; // [esp+3Ch] [ebp-4h]

  if ( (MEMORY[0xB054F0] & 1) == 0 ) /*0x68ffef*/
  {
    MEMORY[0xB054F0] |= 1u; /*0x68fffb*/
    MEMORY[0xB05528] = Timer::GetTicks(); /*0x69000b*/
    MEMORY[0xB05530] = 0; /*0x690010*/
    atexit(nullsub_227); /*0x69001a*/
  }
  if ( a2 != MEMORY[0xB05588] ) /*0x690034*/
  {
    v11 = MEMORY[0xB05588]; /*0x69004c*/
    v12 = (char *)&aP2->ScoreScreen_field_0x0C + 2; /*0x690050*/
    v13 = 11; /*0x690054*/
    v14 = 1; /*0x69005c*/
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] /*0x69006b*/
                                                                      + 8))(
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
      &v11,
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &v11,
      0,
      1);
    MEMORY[0xB05588] = a2; /*0x69006e*/
  }
  if ( MEMORY[0xB05560] ) /*0x69007b*/
  {
    v8[0] = a2 + 10; /*0x690086*/
    v7 = this->q018; /*0x69008d*/
    v8[1] = (char *)&aP2->ScoreScreen_field_0x0C + 2; /*0x690093*/
    v9 = a2; /*0x690097*/
    v10 = (char *)&aP2->ScoreScreen_field_0x0C + 2; /*0x69009b*/
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 48))( /*0x6900a6*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
      &v9,
      v8,
      v7);
  }
  else
  {
    v6 = this->q008; /*0x6900bd*/
    v11 = a2; /*0x6900be*/
    v12 = (char *)&aP2->ScoreScreen_field_0x0C + 2; /*0x6900c2*/
    v13 = 11; /*0x6900c6*/
    v14 = 1; /*0x6900ce*/
    (*(void (__thiscall **)(_DWORD, int *, int, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 8))( /*0x6900dd*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
      &v11,
      v6,
      &v11,
      0,
      1);
  }
  result = MEMORY[0xB05528]; /*0x6900e0*/
  v5 = MEMORY[0xB05530]; /*0x6900e5*/
  if ( MEMORY[0xB05528] == -1 ) /*0x6900ee*/
  {
LABEL_11:
    if ( v5 ) /*0x690108*/
      return result; /*0x690108*/
    goto LABEL_12; /*0x690108*/
  }
  result = Timer::GetTicks() - MEMORY[0xB05528]; /*0x6900fa*/
  if ( result < v5 ) /*0x690102*/
  {
    v5 -= result; /*0x690104*/
    goto LABEL_11; /*0x690104*/
  }
LABEL_12:
  MEMORY[0xB05560] ^= 1u; /*0x69010a*/
  result = Timer::GetTicks(); /*0x69011b*/
  MEMORY[0xB05528] = result; /*0x690129*/
  MEMORY[0xB0552C] = (int)v10; /*0x69012e*/
  MEMORY[0xB05530] = 5; /*0x690134*/
  return result; /*0x69013a*/
}

