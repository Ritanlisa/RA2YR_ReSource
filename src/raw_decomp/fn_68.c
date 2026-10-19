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

  lpVtbl = pStm->__pad_0; /*0x680083*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6800d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680103*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680156*/
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

  lpVtbl = pStm->__pad_0; /*0x680183*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6801d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680203*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680256*/
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

  lpVtbl = pStm->__pad_0; /*0x680283*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6802d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680303*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680356*/
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

  lpVtbl = pStm->__pad_0; /*0x680383*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6803d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680403*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680456*/
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

  lpVtbl = pStm->__pad_0; /*0x680483*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6804d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680503*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680556*/
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

  lpVtbl = pStm->__pad_0; /*0x680583*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6805d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680603*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680656*/
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

  lpVtbl = pStm->__pad_0; /*0x680683*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6806d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680703*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680756*/
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

  lpVtbl = pStm->__pad_0; /*0x680783*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6807d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680803*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680856*/
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

  lpVtbl = pStm->__pad_0; /*0x680883*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6808d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680903*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680956*/
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

  lpVtbl = pStm->__pad_0; /*0x680983*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6809d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680a03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680a56*/
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

  lpVtbl = pStm->__pad_0; /*0x680a83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680ad6*/
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

  lpVtbl = pStm->__pad_0; /*0x680b03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680b56*/
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

  lpVtbl = pStm->__pad_0; /*0x680b83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680bd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680c03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680c56*/
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

  lpVtbl = pStm->__pad_0; /*0x680c83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680cd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680d03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680d56*/
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

  lpVtbl = pStm->__pad_0; /*0x680d83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680dd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680e03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680e56*/
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

  lpVtbl = pStm->__pad_0; /*0x680e83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680ed6*/
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

  lpVtbl = pStm->__pad_0; /*0x680f03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680f56*/
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
int __thiscall Game::validateScenario(Game *this, _DWORD *a2)
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
      if ( *(_DWORD *)this->__pad_0 ) /*0x680fac*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x680fba*/
      *(_DWORD *)this->__pad_0 = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x680f93*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x680f9c*/
      *(_DWORD *)this->__pad_0 = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x680fc7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x680fc7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x680fcd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }
}



// ==== 0x00680FF0  GameState::Reset  this=GameState  sig=csp ====
_DWORD *__thiscall GameState::Reset(GameState *this)
{
  *this = 0; /*0x680ff4*/
  *((_DWORD *)this + 1) = 0; /*0x680ff6*/
  *((_DWORD *)this + 98) = -1; /*0x680ff9*/
  *((_DWORD *)this + 99) = 0; /*0x681003*/
  *((_DWORD *)this + 252) = 0; /*0x681009*/
  *((_WORD *)this + 4) = 0; /*0x68100f*/
  *((_WORD *)this + 132) = 0; /*0x681013*/
  *((_BYTE *)this + 400) = 0; /*0x68101a*/
  *((_BYTE *)this + 660) = 0; /*0x681020*/
  *((_BYTE *)this + 724) = 0; /*0x681026*/
  *((_DWORD *)this + 246) = 0; /*0x68102c*/
  *((_DWORD *)this + 247) = 0; /*0x681032*/
  *((_DWORD *)this + 248) = 0; /*0x681038*/
  *((_DWORD *)this + 249) = 0; /*0x68103e*/
  *((_DWORD *)this + 250) = 0; /*0x681044*/
  *((_DWORD *)this + 251) = 0; /*0x68104a*/
  return this; /*0x681050*/
}



// ==== 0x00681060  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save(ObjectClass *this, int a2)
{
  this->? = (void *)a2; /*0x681064*/
  return a2; /*0x681067*/
}



// ==== 0x00681070  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_681070(ObjectClass *this)
{
  return (int)this->?; /*0x681073*/
}



// ==== 0x00681080  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681080(ObjectClass *this, int a2)
{
  this->AbstractClass = (void *)a2; /*0x681084*/
  return a2; /*0x681086*/
}



// ==== 0x00681090  ObjectClass::ReadPointerFromECX3  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX3(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x681092*/
}



// ==== 0x006810A0  ObjectClass::Map_Save_6810A0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall Map_Save_6810A0(ObjectClass *this, wchar_t *Source)
{
  this->isSelected = 0; /*0x6810a4*/
  return wcsncpy((wchar_t *)&this->?, Source, 0x7Fu); /*0x6810bc*/
}



// ==== 0x006810C0  ObjectClass::?raw_name_type_info__QBEPBDXZ  this=ObjectClass  sig=csp ====
const char *__thiscall _raw_name_type_info__QBEPBDXZ(type_info *this)
{
  return (char *)this + 8; /*0x6810c3*/
}



// ==== 0x006810D0  ObjectClass::Map_Save_6810D0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall Map_Save_6810D0(ObjectClass *this, wchar_t *Source)
{
  *((_WORD *)this + 195) = 0; /*0x6810d4*/
  return wcsncpy((wchar_t *)this + 132, Source, 0x3Fu); /*0x6810ef*/
}



// ==== 0x00681100  LoadOptions::GetData  this=LoadOptions  sig=csp ====
char *__thiscall sub_681100(char *this)
{
  return this + 264; /*0x681106*/
}



// ==== 0x00681110  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681110(ObjectClass *this, int a2)
{
  this->u32_62 = a2; /*0x681114*/
  return a2; /*0x68111a*/
}



// ==== 0x00681120  LoadOptions::GetFlag98  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag98(LoadOptions *this)
{
  return *((_DWORD *)this + 98); /*0x681126*/
}



// ==== 0x00681130  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681130(ObjectClass *this, int a2)
{
  this->u32_63 = a2; /*0x681134*/
  return a2; /*0x68113a*/
}



// ==== 0x00681140  LoadOptions::GetFlag99  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag99(LoadOptions *this)
{
  return *((_DWORD *)this + 99); /*0x681146*/
}



// ==== 0x00681180  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_681180(ObjectClass *this)
{
  return (char *)this + 400; /*0x681186*/
}



// ==== 0x006811B0  ObjectClass::method_6811B0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811B0(TechnoClass *this)
{
  return (char *)&this->airstrike; /*0x6811b6*/
}



// ==== 0x006811C0  ObjectClass::Map_Save_6811C0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811C0(char *this, char *Source)
{
  *(this + 983) = 0; /*0x6811c4*/
  return strncpy(this + 724, Source, 0x103u); /*0x6811e0*/
}



// ==== 0x006811F0  ObjectClass::method_6811F0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811F0(TechnoClass *this)
{
  return (char *)&this->spawnOwner; /*0x6811f6*/
}



// ==== 0x00681200  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681200(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[0] = *a2; /*0x681206*/
  result = a2[1]; /*0x68120c*/
  this->turretRecoil[1] = result; /*0x68120f*/
  return result; /*0x681215*/
}



// ==== 0x00681220  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681220(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[0]; /*0x68122a*/
  a2[1] = this->turretRecoil[1]; /*0x681232*/
  return a2; /*0x681235*/
}



// ==== 0x00681240  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681240(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[2] = *a2; /*0x681246*/
  result = a2[1]; /*0x68124c*/
  this->turretRecoil[3] = result; /*0x68124f*/
  return result; /*0x681255*/
}



// ==== 0x00681260  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681260(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[2]; /*0x68126a*/
  a2[1] = this->turretRecoil[3]; /*0x681272*/
  return a2; /*0x681275*/
}



// ==== 0x00681280  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681280(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[4] = *a2; /*0x681286*/
  result = a2[1]; /*0x68128c*/
  this->turretRecoil[5] = result; /*0x68128f*/
  return result; /*0x681295*/
}



// ==== 0x006812A0  ObjectClass::method_6812A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6812A0(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[4]; /*0x6812aa*/
  a2[1] = this->turretRecoil[5]; /*0x6812b2*/
  return a2; /*0x6812b5*/
}



// ==== 0x006812C0  ObjectClass::Map_Save_6812C0  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_6812C0(TechnoClass *this, int a2)
{
  this->turretRecoil[6] = a2; /*0x6812c4*/
  return a2; /*0x6812ca*/
}



// ==== 0x006812D0  LoadOptions::GetFlag252  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag252(LoadOptions *this)
{
  return *((_DWORD *)this + 252); /*0x6812d6*/
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
_UNKNOWN **__thiscall ScenarioClass::LookupMethod(ScenarioClass *this)
{
  int v1; // edx
  ScenarioClass **v2; // eax

  v1 = 0; /*0x683000*/
  v2 = (ScenarioClass **)&unk_83D658; /*0x683002*/
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
int __thiscall COMObject::ValidatePtr(COMObject *this)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x683033*/
    WinAPI::Wrapper(-2147467261); /*0x68303d*/
  return *(_DWORD *)this->__pad_0; /*0x683044*/
}



// ==== 0x00683050  ObjectClass::Map_Read  this=ObjectClass  sig=csp ====
int __thiscall Map_Read_683050(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x683050*/
  if ( this->AbstractClass ) /*0x683050*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683059*/
  return result; /*0x68305c*/
}



// ==== 0x00683060  ObjectClass::ReleaseCOM  this=ObjectClass  sig=csp ====
int __thiscall ReleaseCOM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x683060*/
  if ( this->AbstractClass ) /*0x683060*/
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
int __thiscall ScenarioClass::Constructor(ScenarioClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  char *waypoints; // eax
  int v7; // ecx
  int v8; // esi
  char *v9; // edi
  int v10; // esi
  _BYTE *v11; // edi

  SeedInitRNG((ObjectClass *)&this->random[1], 0); /*0x6832cf*/
  this->elapsedTimer[1] = Timer::GetTicks(); /*0x6832e5*/
  this->pauseTimer[0] = 0; /*0x6832eb*/
  this->pauseTimer[1] = Timer::GetTicks(); /*0x6832f6*/
  *(_DWORD *)this->__pad_628 = 0; /*0x6832fc*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683302*/
  this->missionTimer[2] = 0; /*0x683307*/
  this->missionTimer[0] = v2; /*0x68330d*/
  LOBYTE(this->missionTimer_text[0]) = 0; /*0x683313*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683319*/
  this->shroudRegrowTimer[2] = 0; /*0x68331f*/
  this->shroudRegrowTimer[0] = v3; /*0x683325*/
  this->fogTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683331*/
  this->fogTimer[2] = 0; /*0x683337*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x68333d*/
  this->iceTimer[2] = 0; /*0x683342*/
  this->iceTimer[0] = v4; /*0x683348*/
  this->ScenarioClass_field_timer_123c[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683354*/
  this->ScenarioClass_field_timer_123c[2] = 0; /*0x68335a*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683360*/
  this->ambientTimer[2] = 0; /*0x683366*/
  this->ambientTimer[0] = v5; /*0x68336c*/
  this->ScenarioClass_field_timer_34C0[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683381*/
  this->ScenarioClass_field_timer_34C0[2] = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((TypeList *)this->allowableUnits, 0, 0); /*0x68338d*/
  this->dropshipUnitCounts = 0; /*0x683397*/
  this->dropshipCountsCount = 10; /*0x68339a*/
  this->allowableUnits[0] = (int)&TypeList<TechnoTypeClass *>::`vftable'; /*0x68339d*/
  VectorClass::Construct((VectorClass *)&this->ambientCurrent, 0, 0); /*0x6833ad*/
  this->ground = 10; /*0x6833b2*/
  this->blue = 0; /*0x6833b5*/
  this->ambientCurrent = (int)&TypeList<int>::`vftable'; /*0x6833b8*/
  VectorClass::Construct((VectorClass *)&this->ionAmbient, 0, 0); /*0x6833c8*/
  this->ionLevel = 10; /*0x6833cf*/
  this->ionGround = 0; /*0x6833d2*/
  this->ionAmbient = (int)&TypeList<int>::`vftable'; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  this->__pad_3566[50] = 0; /*0x6833e2*/
  this->isRandom = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  this->techLevel = 1; /*0x6833f3*/
  this->campaignIndex = -1; /*0x6833fd*/
  LOBYTE(this->nextScenario[1]) = 0; /*0x683407*/
  LOBYTE(this->altNextScenario[1]) = 0; /*0x68340a*/
  waypoints = this->waypoints; /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *(_DWORD *)waypoints = dword_B05458; /*0x683421*/
    waypoints += 4; /*0x683423*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)this->name, &g_TypeClass_DefaultString); /*0x683435*/
  wcscpy((wchar_t *)this->uiNameLoaded, &g_TypeClass_DefaultString); /*0x683446*/
  strcpy((char *)this->fileName, &g_INI_DefaultBuffer); /*0x683475*/
  strcpy((char *)this->briefingCsf, &g_INI_DefaultBuffer); /*0x68349d*/
  strcpy(this->uiName, &g_INI_DefaultBuffer); /*0x6834bf*/
  wcscpy((wchar_t *)this->briefing, &g_TypeClass_DefaultString); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = &this->globalVariables[40]; /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      this->variablesChanged = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((HouseClass *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (char *)&this->localVariables[9] + 2; /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      this->variablesChanged = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll((TriggerActionQueue *)v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(int *)((char *)&this->localVariables[1024] + 2) = 0; /*0x683534*/
  *(int *)((char *)this->view1 + 2) = 0; /*0x68353c*/
  *(int *)((char *)this->view2 + 2) = 0; /*0x683543*/
  *(int *)((char *)this->view3 + 2) = 0; /*0x683549*/
  return (int)this->nextScenario; /*0x683533*/
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
wchar_t *__thiscall ScenarioClass::InitTimer(ScenarioClass *this)
{
  int *v2; // edi
  int Ticks; // eax
  int v4; // ecx
  int v5; // eax
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v14; // [esp+10h] [ebp-30h]
  int v15; // [esp+18h] [ebp-28h]
  char Destination[32]; // [esp+20h] [ebp-20h] BYREF

  this->altHomeCell = 699; /*0x683622*/
  this->uniqueId = 699; /*0x683628*/
  this->random[0] = 1000000; /*0x683633*/
  this->difficulty2 = 1; /*0x68363d*/
  this->elapsedTimer[0] = 1; /*0x683643*/
  v2 = &this->elapsedTimer[1]; /*0x683652*/
  this->elapsedTimer[1] = Timer::GetTicks(); /*0x68365f*/
  this->elapsedTimer[2] = v15; /*0x683661*/
  this->pauseTimer[0] = 0; /*0x683664*/
  if ( this->elapsedTimer[1] != -1 ) /*0x68366b*/
  {
    Ticks = Timer::GetTicks(); /*0x683670*/
    v4 = this->pauseTimer[0]; /*0x683677*/
    v5 = Ticks - *v2; /*0x68367a*/
    *v2 = -1; /*0x68367c*/
    this->pauseTimer[0] = v5 + v4; /*0x683680*/
  }
  v6 = &this->pauseTimer[1]; /*0x683690*/
  this->pauseTimer[1] = Timer::GetTicks(); /*0x683698*/
  this->pauseTimer[2] = v15; /*0x68369a*/
  *(_DWORD *)this->__pad_628 = 0; /*0x68369d*/
  if ( this->pauseTimer[1] != -1 ) /*0x6836a4*/
  {
    v14 = *(_DWORD *)this->__pad_628; /*0x6836a9*/
    v7 = Timer::GetTicks() - *v6; /*0x6836b7*/
    if ( v7 >= v14 ) /*0x6836bf*/
      v8 = 0; /*0x6836c5*/
    else
      v8 = v14 - v7; /*0x6836c1*/
    *(_DWORD *)this->__pad_628 = v8; /*0x6836c7*/
    *v6 = -1; /*0x6836ca*/
  }
  this->ScenarioClass_field_62C = 0; /*0x6836d2*/
  this->unknown630[0] = 0; /*0x6836d8*/
  this->missionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6836e6*/
  this->missionTimer[1] = v15; /*0x6836ec*/
  this->missionTimer[2] = 0; /*0x6836ef*/
  v9 = this->missionTimer[0]; /*0x6836f2*/
  if ( v9 != -1 ) /*0x6836f6*/
  {
    v10 = this->missionTimer[2]; /*0x6836fe*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x683705*/
      v11 = 0; /*0x68370b*/
    else
      v11 = v10 - (*(_DWORD *)&stru_A8EB00.?[416] - v9); /*0x683707*/
    this->missionTimer[2] = v11; /*0x68370d*/
    this->missionTimer[0] = -1; /*0x683710*/
  }
  this->missionTimer_text_csf = &g_TypeClass_DefaultString; /*0x683717*/
  if ( &g_INI_DefaultBuffer ) /*0x683723*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x683737*/
    Destination[31] = 0; /*0x68373f*/
  }
  else
  {
    Destination[0] = 0; /*0x683725*/
  }
  if ( Destination != (char *)this->missionTimer_text ) /*0x68374f*/
    qmemcpy(this->missionTimer_text, Destination, sizeof(this->missionTimer_text)); /*0x68375a*/
  this->shroudRegrowTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683770*/
  this->shroudRegrowTimer[1] = v15; /*0x683776*/
  this->shroudRegrowTimer[2] = 0; /*0x683779*/
  this->fogTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683785*/
  this->fogTimer[1] = v15; /*0x683787*/
  this->fogTimer[2] = 0; /*0x68378e*/
  this->iceTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x68379c*/
  this->iceTimer[1] = v15; /*0x6837a2*/
  this->iceTimer[2] = 0; /*0x6837a9*/
  this->ScenarioClass_field_timer_123c[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6837b7*/
  this->ScenarioClass_field_timer_123c[1] = v15; /*0x6837bd*/
  this->ScenarioClass_field_timer_123c[2] = 0; /*0x6837c4*/
  this->ambientTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6837d2*/
  this->ambientTimer[1] = v15; /*0x6837d8*/
  this->ambientTimer[2] = 0; /*0x6837df*/
  this->theater = -1; /*0x6837e2*/
  this->intro = (void *)-1; /*0x6837e8*/
  this->brief = (void *)-1; /*0x6837ee*/
  this->win = (void *)-1; /*0x6837f4*/
  this->lose = (void *)-1; /*0x6837fa*/
  this->action = (void *)-1; /*0x683800*/
  this->postScore = (void *)-1; /*0x683806*/
  this->preMapSelect = (void *)-1; /*0x68380c*/
  this->themeIndex = -1; /*0x683812*/
  this->humanPlayerHouseTypeIndex = 0; /*0x683818*/
  this->carryOverMoney[0] = 0; /*0x68381e*/
  this->carryOverMoney[1] = 0; /*0x683824*/
  this->carryOverCap = 0; /*0x68382a*/
  this->percent = 0; /*0x683830*/
  this->ScenarioClass_field_34A0 = 0; /*0x683836*/
  this->freeRadar = 0; /*0x68383c*/
  this->trainCrate = 0; /*0x683842*/
  this->storedTiberium_growth_enabled = 1; /*0x683848*/
  this->veinGrowthEnabled = 1; /*0x68384f*/
  this->iceGrowthEnabled = 1; /*0x683856*/
  this->bridgeDestroyed = 0; /*0x68385d*/
  this->variablesChanged = 0; /*0x683863*/
  this->ambientChanged = 0; /*0x683869*/
  this->endOfGame = 0; /*0x68386f*/
  this->timerInherit = 0; /*0x683875*/
  this->skipScore = 0; /*0x68387b*/
  this->oneTimeOnly = 0; /*0x683881*/
  this->skipMapSelect = 0; /*0x683887*/
  this->truckCrate = 0; /*0x68388d*/
  this->fillSilos = 0; /*0x683893*/
  this->ignoreGlobalAiTriggers = 0; /*0x683899*/
  this->playerSideIndex = 0; /*0x68389f*/
  this->multiplayerOnly = 0; /*0x6838a5*/
  this->pickedUpAnyCrate = 0; /*0x6838ab*/
  this->ScenarioClass_field_timer_34C0[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6838bc*/
  this->ScenarioClass_field_timer_34C0[1] = v15; /*0x6838c7*/
  this->ScenarioClass_field_timer_34C0[2] = 0; /*0x6838ca*/
  this->startingDropships = 0; /*0x6838cd*/
  this->nukeRed = 100; /*0x6838d3*/
  this->nukeGreen = 100; /*0x6838d9*/
  this->nukeBlue = 100; /*0x6838df*/
  this->nukeGround = 100; /*0x6838e5*/
  this->nukeLevel = 100; /*0x6838eb*/
  this->nukeAmbientChangeRate = 100; /*0x6838f1*/
  this->dominatorAmbient = 50; /*0x6838f7*/
  this->dominatorRed = 8; /*0x683901*/
  this->dominatorGreen = 87; /*0x68390b*/
  *(_DWORD *)&this->__pad_3566[10] = 100; /*0x68391a*/
  *(_DWORD *)&this->__pad_3566[14] = 100; /*0x683920*/
  this->dominatorBlue = 30; /*0x68392b*/
  this->dominatorGround = 40; /*0x683931*/
  *(_DWORD *)&this->__pad_3566[18] = 1; /*0x68393b*/
  *(_DWORD *)&this->__pad_3566[46] = 1; /*0x683941*/
  this->storedTiberium_death_to_visceroid = 1; /*0x683947*/
  this->dominatorLevel = 75; /*0x68394d*/
  this->dominatorAmbientChangeRate = 0; /*0x683961*/
  this->unknown3598 = 0; /*0x683967*/
  this->initTime = 200; /*0x68396d*/
  *(_DWORD *)this->stage = 175; /*0x683977*/
  *(_DWORD *)&this->__pad_3566[2] = 150; /*0x683981*/
  *(_DWORD *)&this->__pad_3566[6] = 125; /*0x683987*/
  *(_DWORD *)&this->__pad_3566[22] = 150; /*0x683991*/
  *(_DWORD *)&this->__pad_3566[26] = 85; /*0x683997*/
  *(_DWORD *)&this->__pad_3566[30] = 20; /*0x6839a1*/
  *(_DWORD *)&this->__pad_3566[34] = 30; /*0x6839ab*/
  *(_DWORD *)&this->__pad_3566[38] = 0; /*0x6839b1*/
  *(_DWORD *)&this->__pad_3566[42] = 0; /*0x6839b7*/
  *(_DWORD *)&this->__pad_3566[54] = 10000; /*0x6839bd*/
  *(_WORD *)&this->__pad_3566[58] = 0; /*0x6839c7*/
  this->ScenarioClass_field_35A2 = 0; /*0x6839ce*/
  this->parTimeEasy = 3600; /*0x6839d4*/
  this->parTimeMedium = 3600; /*0x6839da*/
  this->parTimeDifficult = 3600; /*0x6839e0*/
  this->underParTitle[0] = 0; /*0x6839e6*/
  this->underParMessage[0] = 0; /*0x6839ec*/
  this->overParTitle[0] = 0; /*0x6839f2*/
  this->overParMessage[0] = 0; /*0x6839f8*/
  this->lsLoadMessage[0] = 0; /*0x6839fe*/
  this->lsBrief[0] = 0; /*0x683a04*/
  this->ls640BriefLocX = 0; /*0x683a0a*/
  this->ls640BriefLocY = 0; /*0x683a10*/
  this->ls800BriefLocX = 0; /*0x683a16*/
  this->ls800BriefLocY = 0; /*0x683a1c*/
  LOBYTE(this->ls640BkgdName[0]) = 0; /*0x683a22*/
  LOBYTE(this->ls800BkgdName[0]) = 0; /*0x683a28*/
  LOBYTE(this->ls800BkgdPal[0]) = 0; /*0x683a2e*/
  this->teamsPresent = 0; /*0x683a3a*/
  this->numCoopHumanStartSpots = 4; /*0x683a40*/
  (*(void (__thiscall **)(int *))(this->allowableUnits[0] + 12))(this->allowableUnits); /*0x683a4c*/
  (*(void (__thiscall **)(int *))(this->ambientCurrent + 12))(&this->ambientCurrent); /*0x683a5b*/
  (*(void (__thiscall **)(int *))(this->ionAmbient + 12))(&this->ionAmbient); /*0x683a6a*/
  result = *(wchar_t **)&dword_A8B238; /*0x683a6d*/
  if ( *(_DWORD *)&dword_A8B238 == 5 ) /*0x683a79*/
  {
    StringCSF = GetStringCSF(aGuiSkirmishgam, 0, g_Str_File_Scenario_CPP, 522); /*0x683a8c*/
    return wcscpy((wchar_t *)&dword_A8B230[137].referenceCount, StringCSF); /*0x683a9f*/
  }
  return result; /*0x683a72*/
}



// ==== 0x00683AB0  ScenarioClass::LoadScenarioAndStart  this=AbstractClass  sig=csp ====
char __userpurge ScenarioClass::LoadScenarioAndStart@<al>(char *Source@<ecx>, char a2@<dl>, double a3@<st0>, int a4)
{
  char *v4; // ebp
  int uniqueId; // eax
  int Field; // ecx
  GameOption *v7; // esi
  int v8; // eax
  int v9; // edi
  int Bool; // esi
  int v11; // eax
  int referenceCount; // eax
  _DWORD *p_vtable2; // esi
  LoadScreen *v15; // [esp+0h] [ebp-FCh]
  int v16; // [esp+4h] [ebp-F8h]
  int *v17; // [esp+8h] [ebp-F4h]
  CCINIClass v19; // [esp+1Ch] [ebp-E0h] BYREF
  CCFileClass v20; // [esp+74h] [ebp-88h] BYREF
  int v21[3]; // [esp+CCh] [ebp-30h] BYREF
  int v22; // [esp+D8h] [ebp-24h]
  CHAR v23[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v4 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source)) && a4 != -1 ) /*0x683ade*/
  {
    if ( stru_A8EB00.?[377] == 1 ) /*0x683ae7*/
      v4 = &stru_A83D50.__pad_C8[48]; /*0x683ae9*/
    else
      v4 = (char *)(*((_DWORD *)dword_A83CFC + a4) + 156); /*0x683af8*/
  }
  dword_A8B230[375].uniqueId = a4; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)&dword_A8B230[130].abstractFlags, v4); /*0x683b47*/
  _strupr((char *)&dword_A8B230[130].abstractFlags); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x683b73*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x683b7b*/
    if ( uniqueId == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( *(_DWORD *)&stru_A8B250.__pad_0[4] != -1 ) /*0x683b9f*/
  {
    v7 = *(GameOption **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x683ba7*/
    v8 = Game::CheckForGameCD((Game *)0x3C); /*0x683baf*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists((ScenarioClass *)v7, v8) ) /*0x683bb7*/
    {
      Field = GameOption::GetField(v7); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v9 = ++dword_A8DAB4; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --dword_A8DAB4; /*0x683c03*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683c11*/
  v19.?[0] = 0; /*0x683c18*/
  v19.?[1] = 0; /*0x683c1c*/
  GenericList::Constructor((GenericList *)&v19.?[2]); /*0x683c20*/
  v19.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x683c29*/
  memset(&v19.?[8], 0, 13); /*0x683c32*/
  memset(&v19.?, 0, 9); /*0x683c42*/
  *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x683c4e*/
  CCFileClass::Construct(&v20, v4); /*0x683c56*/
  if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) ) /*0x683c67*/
  {
    Bool = INIClass::GetBool( /*0x683c85*/
             (INIClass *)&v19,
             (unsigned __int8 *)&stru_82BA00.?,
             (unsigned __int8 *)g_INI_Key_Intro,
             -1);
    if ( Bool != -1 /*0x683ca5*/
      || (Bool = INIClass::GetBool(
                   (INIClass *)&v19,
                   (unsigned __int8 *)&stru_82BA00.?,
                   (unsigned __int8 *)g_INI_Key_Brief,
                   -1),
          Bool != -1) )
    {
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v4, v9, 1, 1, 1); /*0x683cbd*/
    }
  }
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x683cc9*/
  v22 = 0; /*0x683cd1*/
  Vector::Clear((int)v21); /*0x683cd8*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v11 = StringList::Find((StringList *)&unk_A83D10, &stru_82BA00.?); /*0x683d0f*/
  ThemeClass::Play((ThemeClass *)&unk_A83D10, v11); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v4, a3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  referenceCount = dword_A8B230[143].referenceCount; /*0x683d5e*/
  if ( referenceCount != -1 ) /*0x683d67*/
    wsprintfA(v23, "%s.VQA", *(const char **)(g_MissionQueueFrame.localVariables[580] + 4 * referenceCount)); /*0x683d80*/
  if ( dword_A8B230[375].abstractFlags > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(v15); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper((int)dword_A8B230[144].ptr_4, (int)v4, v9, 1, 1, 1); /*0x683db6*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[33] /*0x683dd6*/
    || *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[34] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((AudioOptionsClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x683e02*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present((int)g_DSurface_Hidden, 0, (int)v4, v9, 0, (int)v15, v16, v17); /*0x683e1c*/
  if ( dword_A8B230[43].ptr_8 == (void *)-1 ) /*0x683e35*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683e26*/
    *p_vtable2 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( dword_A8B230[202].ptr_8 == (void *)-1 ) /*0x683e50*/
    Theme::Stop((Theme *)&unk_A83D10, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&unk_A83D10, (int)dword_A8B230[202].ptr_8); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  stru_A8EB00.?[376] = 1; /*0x683e75*/
  byte_A8E378 = 1; /*0x683e7f*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683e8f*/
  return 1; /*0x683d4a*/
}



// ==== 0x00683EB0  ScenarioClass::CleanupTemporary  this=ScenarioClass  sig=csp ====
int ScenarioClass::CleanupTemporary(ScenarioClass *this)
{
  AsyncIO *v1; // ecx
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax

  sub_406F00(); /*0x683eb1*/
  dword_83D834 = sub_4072B0(g_MixerState); /*0x683ecc*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x683ed1*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x683ee2*/
  {
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v1 = (AsyncIO *)dword_A8B230; /*0x683f18*/
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683f27*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v4 = (char *)p_vtable2[2]; /*0x683f3d*/
      v5 = Ticks - (_DWORD)*p_vtable2; /*0x683f40*/
      *p_vtable2 = (void *)-1; /*0x683f42*/
      v1 = (AsyncIO *)&v4[v5]; /*0x683f48*/
      p_vtable2[2] = v1; /*0x683f4a*/
    }
  }
  LOBYTE(v1) = 1; /*0x683f4d*/
  AsyncIO::Read(v1); /*0x683f4f*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x683f5d*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], 0); /*0x683f61*/
  Mouse::ReleaseCapture((ScrollClass *)&stru_87F5F0.__pad_58[416]); /*0x683f6b*/
  Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683f86*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x683f90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x683f9a*/
  return (*(int (__thiscall **)(void *, ScenarioClass *))(*(_DWORD *)stru_887598.lineTrailer + 16))(
           stru_887598.lineTrailer,
           this);
}



// ==== 0x00683FB0  ObjectClass::PostFrameCleanup  this=ObjectClass  sig=csp ====
int PostFrameCleanup(TechnoClass *this)
{
  int *p_vtable2; // esi
  AsyncIO *v2; // ecx

  MouseClass::GetPosition((MouseClass *)&dword_87F7E8); /*0x683fb7*/
  if ( dword_A8B230[43].ptr_8 == -1 ) /*0x683fd0*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683fc1*/
    *p_vtable2 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( dword_A8B230[43].ptr_8 != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( dword_887368 ) /*0x68401d*/
    Tooltip::Enable(dword_887368, byte_A8EB80); /*0x684026*/
  EndBufferMixer(&g_MixerState->ptr_0, dword_83D834); /*0x684037*/
  LOBYTE(v2) = 0; /*0x68403c*/
  dword_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v2); /*0x684048*/
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
    v3 = (char *)dword_A8B230 + 1568; /*0x68407c*/
    *((_DWORD *)dword_A8B230 + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = dword_A8B230; /*0x68409c*/
    if ( *((_BYTE *)dword_A8B230 + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)dword_A8B230 + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)dword_A8B230 + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !dword_A8B238[0] || dword_A8B238[0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)dword_A8B230 + 1556; /*0x6840e2*/
      if ( *((_DWORD *)dword_A8B230 + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    byte_B054CC = *((_BYTE *)dword_A8B230 + 13730); /*0x68411b*/
    if ( !byte_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&dword_87F7E8); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x684143*/
      *((_BYTE *)dword_A8B230 + 13730) = 1; /*0x68414c*/
      byte_A8ED9C = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)dword_87F770); /*0x684160*/
      dword_B07784 = 0; /*0x684165*/
    }
  }
  result = dword_A8B230; /*0x68416f*/
  ++*((_DWORD *)dword_A8B230 + 395); /*0x684174*/
  return result; /*0x68417a*/
}



// ==== 0x00684180  ScenarioClass::ProcessIntroTimer  this=ScenarioClass  sig=csp ====
_BYTE *ScenarioClass::ProcessIntroTimer(ScenarioClass *this)
{
  _BYTE *result; // eax

  result = dword_A8B230[43].NeedsSaveOrLink; /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    dword_A8B230[43].NeedsSaveOrLink = result - 1; /*0x684195*/
    result = dword_A8B230; /*0x68419b*/
    if ( !dword_A8B230[43].NeedsSaveOrLink ) /*0x6841a0*/
    {
      if ( !byte_B054CC ) /*0x6841b6*/
      {
        if ( BYTE2(dword_A8B230[381].ptr_C) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x6841c9*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6841d8*/
          result = dword_A8B230; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        stru_A8EB00.?[440] = 0; /*0x6841fc*/
        Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x684203*/
        result = dword_A8B230; /*0x684208*/
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
int Scenario::ClearScreen(Scenario *this)
{
  int result; // eax

  Mouse::ReleaseCapture((ScrollClass *)&stru_87F5F0.__pad_58[416]); /*0x684245*/
  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x684252*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x684261*/
  BYTE2(dword_A8B230[381].ptr_C) = 1; /*0x68426c*/
  stru_A8EB00.?[440] = 1; /*0x684278*/
  result = Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68427d*/
  dword_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/
}



// ==== 0x00684290  ObjectClass::UpdateMouse  this=ObjectClass  sig=csp ====
int UpdateMouse(ObjectClass *this)
{
  int result; // eax

  if ( BYTE2(dword_A8B230[381].ptr_C) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6842b5*/
    while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ); /*0x6842c0*/
  }
  BYTE2(dword_A8B230[381].ptr_C) = 0; /*0x6842cc*/
  stru_A8EB00.?[440] = 0; /*0x6842d9*/
  result = Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6842e0*/
  dword_B07784 = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}



// ==== 0x006842F0  ToggleDisplayMode  this=-  sig=ida-proto ====
char __fastcall DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = dword_A8EB84; /*0x6842f4*/
    if ( dword_886FB8 != dword_A8EB84 || dword_886FBC != dword_A8EB88 ) /*0x68430f*/
    {
      Debug::Log("Toggle display mode to %d x %d\n", dword_A8EB84, dword_A8EB88); /*0x684318*/
      return ChangeVideoMode(dword_A8EB84, dword_A8EB88); /*0x68432c*/
    }
  }
  else
  {
    result = dword_886FB8; /*0x684331*/
    if ( dword_886FB8 != dword_A8EB8C ) /*0x68433e*/
    {
      result = dword_A8EB90; /*0x684346*/
      if ( dword_886FBC != dword_A8EB90 ) /*0x68434d*/
      {
        Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x684354*/
        return ChangeVideoMode(dword_A8EB8C, dword_A8EB90); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}



// ==== 0x00684370  ObjectClass::WaitForMultiplayerLoadSync  this=ObjectClass  sig=csp ====
char WaitForMultiplayerLoadSync(ObjectClass *this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v11; // edi
  int v12; // edi
  __int64 v13; // [esp+10h] [ebp-40h]
  __int64 v14; // [esp+18h] [ebp-38h]
  int v15; // [esp+20h] [ebp-30h]
  int v16; // [esp+28h] [ebp-28h]
  int Ticks; // [esp+2Ch] [ebp-24h]
  int v18; // [esp+34h] [ebp-1Ch]

  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  Ticks = Timer::GetTicks(); /*0x6843b5*/
  v18 = 300; /*0x6843b9*/
  v15 = Timer::GetTicks(); /*0x6843cb*/
  v16 = 3600; /*0x6843d3*/
  Progress::GetAverage((Progress *)&stru_AC4B30.__pad_EC[828]); /*0x6843e0*/
  __asm { fstp [esp+50h+var_40] } /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v1 = 1; /*0x6843fe*/
    if ( *(_DWORD *)&dword_A8B238 == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v2 = v16; /*0x684422*/
    if ( v15 != -1 ) /*0x68442b*/
    {
      v3 = Timer::GetTicks() - v15; /*0x684436*/
      if ( v3 >= v16 ) /*0x68443c*/
        break; /*0x68443c*/
      v2 = v16 - v3; /*0x684442*/
    }
    if ( v2 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    Progress::GetAverage((Progress *)&stru_AC4B30.__pad_EC[828]); /*0x684451*/
    __asm /*0x684456*/
    {
      fcom ds:dbl_7F0E70
      fst [esp+50h+var_38]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 )
    {
      __asm { fstp st } /*0x6845ed*/
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    __asm /*0x68446b*/
    {
      fcomp [esp+50h+var_40]
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x684474*/
    {
      v15 = Timer::GetTicks(); /*0x684490*/
      v16 = 7200; /*0x684498*/
      v13 = v14; /*0x6844a4*/
    }
    v6 = v18; /*0x6844b0*/
    if ( Ticks != -1 ) /*0x6844b6*/
    {
      v7 = Timer::GetTicks() - Ticks; /*0x6844c1*/
      if ( v7 >= v18 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v18 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
LABEL_18:
      Ticks = Timer::GetTicks(); /*0x6844d3*/
      v18 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x68453f*/
  {
    Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], v1); /*0x68454b*/
    __asm /*0x684550*/
    {
      fcomp ds:dbl_7F0E68
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x68455b*/
    {
      v11 = (char *)dword_A8DA78[i]; /*0x684562*/
      ToWideStringChar(v11); /*0x684567*/
      ToWideStringChar(v11); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v12 = *(_DWORD *)(dword_A8DA78[i] + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v12, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)&dword_A8B238, *((#375 **)stru_A80220.? + v12)) ) /*0x6845aa*/
      {
        dword_A8E2AC = -1; /*0x6845bf*/
        memset(word_A8E258, 0, 0x28u); /*0x6845c9*/
        word_A8E258[20] = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v1; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}



// ==== 0x00684620  Scenario::LoadWithProgress  this=Scenario  sig=csp ====
char __usercall Scenario::LoadWithProgress@<al>(const char *this@<ecx>, double a2@<st0>)
{
  char v2; // al
  wchar_t *v3; // edi
  wchar_t *StringCSF; // eax
  Scenario *Instance; // esi
  int v6; // eax
  int uniqueId; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  _WORD *v12; // edi
  int v13; // eax
  char v14; // bl
  ScenarioClass *v15; // ecx
  int *v16; // eax
  char Sync; // bl
  int i; // esi
  int j; // esi
  wchar_t *v23; // [esp-10h] [ebp-258h]
  char v24; // [esp-8h] [ebp-250h]
  const wchar_t *v25; // [esp-4h] [ebp-24Ch]
  int _72B380; // [esp-4h] [ebp-24Ch]
  ObjectClass *v27; // [esp+0h] [ebp-248h]
  ObjectClass *v28; // [esp+0h] [ebp-248h]
  LoadProgressMgr *v29; // [esp+10h] [ebp-238h]
  int v30[2]; // [esp+14h] [ebp-234h] BYREF
  const wchar_t *v31; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v33; // [esp+30h] [ebp-218h]
  int v34; // [esp+34h] [ebp-214h]
  int v35; // [esp+38h] [ebp-210h]
  int v36; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v38[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, this); /*0x684653*/
  dword_A8ED84 = 0; /*0x68466b*/
  LOBYTE(dword_A8B230[381].ptr_4) = 1; /*0x684675*/
  ++dword_A8E7AC; /*0x684685*/
  if ( _strcmpi(&Source[strlen(Source) - 4], aSed) ) /*0x684694*/
    BYTE1(dword_A8B230[375].ptr_0) = 0; /*0x6846be*/
  else
    BYTE1(dword_A8B230[375].ptr_0) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v29 = 0; /*0x6846d4*/
  if ( !byte_A8ED6B ) /*0x6846d8*/
  {
    v2 = 1; /*0x6846eb*/
    if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x6846f2*/
      v2 = dword_A8DA84; /*0x6846f4*/
    ProgressAnim::Init((int)&dword_AC4F58, 0, 1079574528, v2, 0); /*0x684706*/
    v3 = 0; /*0x684710*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && *(_DWORD *)dword_B779C4 ) /*0x68471c*/
    {
      v25 = dword_B779D4; /*0x684729*/
      StringCSF = GetStringCSF(aTxtGameId, 0, g_Str_File_Scenario_CPP, 1199); /*0x684736*/
      swprintf(v38, (const size_t)StringCSF, v25); /*0x684744*/
      v3 = v38; /*0x68474c*/
    }
    Instance = (Scenario *)LoadProgressMgr::GetInstance(); /*0x684758*/
    v29 = (LoadProgressMgr *)Instance; /*0x68475c*/
    Scenario::ComputeDisplayPosition(Instance); /*0x684760*/
    Function::Method_643E80((Function *)&dword_AC4F58, (int)Instance); /*0x68476b*/
    v6 = 0; /*0x68477c*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x684780*/
    {
      v8 = *(_DWORD *)(*dword_A8DA78 + 75); /*0x6847a4*/
      if ( v8 == -3 ) /*0x6847aa*/
        v8 = 0; /*0x6847ac*/
      v6 = *(_DWORD *)(*((_DWORD *)dword_A83C9C + v8) + 188); /*0x6847b7*/
    }
    else
    {
      uniqueId = dword_A8B230[375].uniqueId; /*0x684782*/
      if ( uniqueId != -1 ) /*0x68478b*/
        v6 = *(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 152); /*0x684795*/
    }
    dword_A8B230[374].NeedsSaveOrLink = v6; /*0x6847c3*/
    Scenario::SetDword32((Scenario *)&dword_AC4F58, v6); /*0x6847c9*/
    LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v27); /*0x6847d5*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x6847e1*/
    {
      SHPClass::Load((int)&dword_AC4F58, g_Str_File_PROGBARM_SHP, 0, 0); /*0x684800*/
    }
    else
    {
      _72B380 = Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((int)&dword_AC4F58, aSpldbrShp, 0, _72B380); /*0x6847f0*/
    }
    v24 = *(_DWORD *)&dword_A8B238 != 0; /*0x684819*/
    v9 = Scenario::ComputeDialogPos(Instance, v30); /*0x68481e*/
    TextRenderer::MeasureBuilding((int *)dword_AC4F58.__pad_0, *v9, v9[1], (int)v3, v24, v24); /*0x68482f*/
    v10 = Map_Load(); /*0x684836*/
    Scenario::SetDword30((Scenario *)&dword_AC4F58, v10); /*0x684841*/
    if ( dword_887628 ) /*0x68484d*/
    {
      if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8DA84 > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(_DWORD *))(*dword_887628 + 48))(dword_887628); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v33 = 0; /*0x6848a3*/
        v34 = 0; /*0x6848b0*/
        v35 = 0; /*0x6848b6*/
        v36 = 0; /*0x6848be*/
        v11 = 1; /*0x6848c2*/
        if ( dword_A8DA84 > 1 ) /*0x6848c4*/
        {
          v12 = &dword_A8E2B2 + 2; /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress((Network *)(dword_A8DA78[v11] + 40), &v31, (int)v30); /*0x6848e5*/
            sprintf(Buffer, "%d.%d.%d.%d", LOBYTE(v30[0]), BYTE1(v30[0]), BYTE2(v30[0]), HIBYTE(v30[0])); /*0x68491f*/
            v13 = Debug::Log(); /*0x68492e*/
            LOWORD(v13) = *v12; /*0x684933*/
            (*(void (__thiscall **)(_DWORD *, char *, int))(*dword_887628 + 44))(dword_887628, Buffer, v13); /*0x684947*/
            ++v11; /*0x68494f*/
            ++v12; /*0x684950*/
          }
          while ( v11 < dword_A8DA84 ); /*0x684955*/
        }
      }
    }
  }
  if ( BYTE1(dword_A8B230[375].ptr_0) ) /*0x684961*/
  {
    v14 = Scenario::LoadOrReloadOptions((Scenario *)byte_ABDFD8, (int)Source); /*0x68497a*/
    if ( v14 ) /*0x68497e*/
    {
      RandomMap::Generate((RandomMap *)byte_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v15) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v15); /*0x684990*/
    }
    strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x6849b8*/
  }
  else
  {
    v14 = ScenarioClass::Construct(Source, a2); /*0x6849ce*/
  }
  if ( !dword_8871E0->__pad_13BC[242] ) /*0x6849d6*/
    MapClass::ClearShroud((MapClass *)&dword_87F7E8, 0); /*0x6849e7*/
  if ( v14 )
  {
    MessageListClass::Init( /*0x684ac9*/
      &unk_A8BC60,
      DSurface_ViewBounds.field_0 + 3,
      dword_886FA4,
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      dword_886FA8 - 6);
    PostLoadInitScenario(v27); /*0x684ace*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 99); /*0x684ae8*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x684af3*/
      {
        if ( byte_A8DBA0 ) /*0x684afc*/
          Process::WaitForExit((Process *)&unk_B052D0, 0x3A98u, 1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
    byte_A8B8C1 = 0; /*0x684b30*/
    byte_A8B8C2 = 0; /*0x684b37*/
    Sync = WaitForMultiplayerLoadSync(v28); /*0x684b43*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances((ObjectClass *)&dword_A8B238); /*0x684b53*/
    --dword_A8E7AC; /*0x684b66*/
    if ( !byte_A8ED6B ) /*0x684b6c*/
    {
      if ( Sync ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684b7c*/
        __asm /*0x684b81*/
        {
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x684b8c*/
        {
          do /*0x684bd2*/
          {
            for ( i = 0; i < dword_A8DA84; ++i ) /*0x684b97*/
              Network::UpdateLatencyDisplay((int)&dword_AC4F58, i, 100.0, NAN); /*0x684bae*/
            Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684bc2*/
            __asm /*0x684bc7*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x684bd2*/
        }
      }
    }
    LOBYTE(dword_A8B230[381].ptr_4) = 0; /*0x684bde*/
    Scenario::SetByte96((Scenario *)&dword_AC4F58); /*0x684be5*/
    if ( v29 ) /*0x684bf0*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v29); /*0x684c00*/
    }
    for ( j = dword_A80238 - 1; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*((Scenario **)&dword_A8022C->ptr_0 + j)); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v31 = asc_82083C; /*0x684a31*/
    v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a45*/
    v16 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a50*/
    Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v27); /*0x684a5a*/
    --dword_A8E7AC; /*0x684a6b*/
    LOBYTE(dword_A8B230[381].ptr_4) = 0; /*0x684a71*/
    if ( v29 ) /*0x684a7d*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}



// ==== 0x00684C30  ObjectClass::PostLoadInitScenario  this=ObjectClass  sig=csp ====
int __usercall PostLoadInitScenario@<eax>(ObjectClass *this)
{
  int v1; // edi
  int i; // esi
  int nextArrayIndex; // eax
  void *v4; // eax
  int v5; // eax
  int j; // ebx
  TeamClass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  ParticleSystemClass *v11; // eax
  int v12; // edi
  int Owner; // eax
  int v14; // ecx
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edi
  TagClass *v20; // esi
  int v21; // eax
  int v22; // eax
  HouseClass *v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int m; // eax
  int *v28; // esi
  int v29; // eax
  Building *n; // esi
  AnimClass *v31; // edi
  int *v32; // eax
  int result; // eax
  Voxel *v34; // [esp+14h] [ebp-1Ch]
  int k; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch] BYREF
  int v37; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++dword_A8E7AC; /*0x684c3f*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * i) + 1248))(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * i)); /*0x684c58*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x684c6f*/
  if ( !stru_A8EB00.?[391] ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar((TabClass *)1, v1, (int)v34); /*0x684c88*/
    if ( !*(_DWORD *)&dword_A8B238 ) /*0x684c94*/
    {
      if ( stru_8A38E0 ) /*0x684ca7*/
        nextArrayIndex = dword_A8B230[14].nextArrayIndex; /*0x684ca9*/
      else
        nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x684cb1*/
      v4 = *(void **)((char *)&dword_A8B230[44].ptr_0 + 4 * nextArrayIndex + 2); /*0x684cb7*/
      *(void **)((char *)&dword_A8B230[374].ptr_0 + 2) = v4; /*0x684cbe*/
      *(void **)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(void **)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x684cd4*/
      *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x684ce9*/
      *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x684d03*/
      v36 = ((__int16)v4 << 8) + 128; /*0x684d09*/
      v37 = (SHIWORD(v4) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v36); /*0x684d3e*/
      TacticalClass::SetPositionThunk((RadarClass *)&v36); /*0x684d42*/
    }
  }
  v5 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    v7 = (TeamClass *)*((_DWORD *)dword_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags((Debug *)v7) & 4) != 0 ) /*0x684d68*/
    {
      v8 = TeamClass::FindOrCreate(v7); /*0x684d77*/
      if ( FootClass_Array.?[0] < FootClass_Array.?[6] /*0x684da9*/
        || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
        && FootClass_Array.?[1] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
             &FootClass_Array.?[4],
             FootClass_Array.?[6] + FootClass_Array.?[1],
             0) )
      {
        v9 = FootClass_Array.?[0]++; /*0x684db6*/
        *(_DWORD *)(FootClass_Array.?[5] + 4 * v9) = v8; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 0x10) != 0 ) /*0x684dd1*/
    {
      v10 = TeamClass::FindOrCreate(v7); /*0x684de0*/
      if ( (int)FootClass_Array.? < (int)FootClass_Array.? /*0x684e13*/
        || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
        && FootClass_Array.?[0] > 0
        && ((unsigned __int8 (__thiscall *)(ParticleSystemClass **, char *, _DWORD))FootClass_Array.?->?)(
             &FootClass_Array.?,
             (char *)FootClass_Array.? + FootClass_Array.?[0],
             0) )
      {
        v11 = FootClass_Array.?++; /*0x684e20*/
        *((_DWORD *)&FootClass_Array.?->ObjectClass + (_DWORD)v11) = v10; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 8) != 0 ) /*0x684e3b*/
    {
      v12 = TeamClass::FindOrCreate(v7); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v14 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        v15 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v14 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v14)
          && (v16 = *(_DWORD *)(Owner + 76), v16 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v15 + 8))(v15, v14 + v16, 0) )
        {
          v17 = v15[4]; /*0x684e93*/
          v18 = v15[1]; /*0x684e96*/
          v15[4] = v17 + 1; /*0x684e9c*/
          *(_DWORD *)(v18 + 4 * v17) = v12; /*0x684e9f*/
        }
      }
    }
    v5 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  v19 = 0; /*0x684eb6*/
  --dword_A8E7AC; /*0x684ebb*/
  if ( v5 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v20 = (TagClass *)*((_DWORD *)dword_B0E784 + v19); /*0x684ec8*/
      if ( TagClass::HasValidHouse(v20) ) /*0x684ecd*/
      {
        v21 = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(v20[2].defaultCoords[0] + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v21 + 636); /*0x684eed*/
      }
      ++v19; /*0x684ef8*/
    }
    while ( v19 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( BYTE2(dword_A8B230[374].nextArrayIndex) ) /*0x684f02*/
  {
    v22 = 0; /*0x684f12*/
    for ( k = 0; v22 < stru_A80220.?; k = v22 ) /*0x684f1a*/
    {
      v23 = (HouseClass *)*((_DWORD *)stru_A80220.? + v22); /*0x684f23*/
      if ( v23 ) /*0x684f28*/
      {
        v24 = (*(int (__stdcall **)(int *))(v23->arrayIndex + 24))(&v23->arrayIndex); /*0x684f34*/
        v25 = *(_DWORD *)g_BuildingLoadQueue_Array.?[2]; /*0x684f3b*/
        if ( v24 > *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.?[2] + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int *))(v23->arrayIndex + 28))(&v23->arrayIndex) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(v23, 1.0, 0); /*0x684f58*/
            v26 = *(_DWORD *)(v25 + 184); /*0x684f5d*/
            v24 -= v26; /*0x684f63*/
            __asm { fstp st } /*0x684f67*/
          }
          while ( v24 > v26 ); /*0x684f69*/
        }
        v22 = k; /*0x684f6b*/
      }
      ++v22; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(v34); /*0x684f8e*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x684fa9*/
        m;
        m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  }
  MapClass::ProcessRegion((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x684fc7*/
  Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x684fd1*/
  MapClass::BuildSubzones((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x684fdb*/
  MarkCliffEdgePassability((int)&stru_87F5F0.__pad_58[416]); /*0x684fe5*/
  if ( !*(_DWORD *)&stru_A8EB00.?[404] ) /*0x684ff0*/
  {
    v28 = (int *)__2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v28 ) /*0x685003*/
    {
      v36 = 2688; /*0x68500f*/
      v37 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v29 = WarheadTypeClass::applyDamage(aGascloudsys); /*0x68501b*/
      *(_DWORD *)&stru_A8EB00.?[404] = ParticleSystemClass::Constructor( /*0x685040*/
                                         v28,
                                         *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v29),
                                         &v36,
                                         0,
                                         0,
                                         &dword_B05488,
                                         0);
    }
    else
    {
      *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x685047*/
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6256) ) /*0x685052*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x685063*/
    for ( n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x685076*/
          n;
          n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range( /*0x68509e*/
                (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                0,
                *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6252) - 1) )
        {
          v31 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v31 ) /*0x6850b8*/
          {
            v32 = (int *)(*(int (__thiscall **)(Building *, int *))(*(_DWORD *)n->__pad_0 + 72))(n, &v36); /*0x6850cd*/
            AnimClass::ctor( /*0x6850e0*/
              v31,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6256),
              v32,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x6850fd*/
  Map_Init(*(ObjectClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 8)); /*0x68510b*/
  return result; /*0x685110*/
}



// ==== 0x00685120  ObjectClass::Game_Load  this=ObjectClass  sig=csp ====
int Game_Load(ObjectClass *this)
{
  int v1; // ecx
  TechnoClass *v3; // [esp+0h] [ebp-4h]

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(dword_A8B230[130].uniqueId); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685147*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685158*/
  RadarClass::InitializeHashTable((RadarClass *)&dword_87F7E8); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)dword_A8ED84 - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v1 = 0; /*0x68518f*/
    else
      v1 = dword_B0EA88 - ((_DWORD)dword_A8ED84 - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v1; /*0x685191*/
  }
  dword_B0EA80 = (int)dword_A8ED84; /*0x6851a1*/
  CellClass::setOverlayType((CellClass *)&unk_87E8B8, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(v3); /*0x6851b1*/
  MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}



// ==== 0x006851F0  ObjectClass::ResetScenario  this=ObjectClass  sig=csp ====
int __usercall ResetScenario@<eax>(ObjectClass *a1@<edi>)
{
  int i; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  HouseClass *v7; // edi
  int j; // esi
  AbstractClass *v9; // eax
  Tactical *v10; // eax
  IPersistStream *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int result; // eax
  ObjectClass *v16; // [esp+0h] [ebp-8h]
  ObjectClass *v17; // [esp+0h] [ebp-8h]
  ObjectClass *v18; // [esp+0h] [ebp-8h]

  dword_A8B230[14].referenceCount = 1000000; /*0x6851fc*/
  LOBYTE(dword_A8B230[14].NeedsSaveOrLink) = 1; /*0x68520c*/
  dword_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  dword_A83D4C = 0; /*0x685231*/
  ScenarioClass::InitTimer((ScenarioClass *)dword_A8B230); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = dword_A8E978 - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)dword_A8E96C + i) + 4) + 12))(*((_DWORD *)dword_A8E96C + i) + 4) == 18 /*0x68526c*/
      && i < dword_A8E978 )
    {
      v2 = i; /*0x68526f*/
      if ( i < --dword_A8E978 ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v2; /*0x685281*/
          *((_DWORD *)dword_A8E96C + v2 - 1) = *((_DWORD *)dword_A8E96C + v2); /*0x685285*/
        }
        while ( v2 < dword_A8E978 ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v3 = 0; /*0x6852a1*/
  if ( *(int *)&stru_A8EB00.?[340] > 0 ) /*0x6852a5*/
  {
    v4 = dword_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v3); /*0x6852b2*/
      if ( dword_A8E978 < v4 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !byte_A8E975 && v4 || dword_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E968 + 8))( /*0x6852e4*/
             &dword_A8E968,
             v4 + dword_A8E97C,
             0) )
      {
LABEL_14:
        v6 = dword_A8E978++; /*0x6852f1*/
        *((_DWORD *)dword_A8E96C + v6) = v5; /*0x685300*/
      }
      v4 = dword_A8E970; /*0x685303*/
LABEL_16:
      ++v3; /*0x685308*/
    }
    while ( v3 < *(int *)&stru_A8EB00.?[340] ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x685313*/
  *(_DWORD *)&stru_87F5F0.__pad_58[512] = 0; /*0x685322*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[500] && stru_87F5F0.__pad_58[509] ) /*0x685332*/
  {
    __3_YAXPAX_Z(*(void **)&stru_87F5F0.__pad_58[500]); /*0x685335*/
    *(_DWORD *)&stru_87F5F0.__pad_58[500] = 0; /*0x68533d*/
  }
  stru_87F5F0.__pad_58[509] = 0; /*0x685343*/
  *(_DWORD *)&stru_87F5F0.__pad_58[504] = 0; /*0x685349*/
  Map_Reset_6E5570(a1); /*0x68534f*/
  v7 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v9 = dword_A8B230; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)&dword_A8B230[204].ptr_0 + j) ) /*0x685365*/
    {
      *((_BYTE *)&dword_A8B230[204].ptr_0 + j) = 0; /*0x68536e*/
      BYTE2(v9[374].uniqueId) = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v7); /*0x68537e*/
    }
    v7 = (HouseClass *)((char *)v7 + 1); /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))( /*0x68539e*/
      g_TacticalClass_Instance,
      1);
  v10 = (Tactical *)__2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v10 ) /*0x6853b0*/
    v11 = (IPersistStream *)TacticalMap::Construct(v10); /*0x6853b4*/
  else
    v11 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v11; /*0x6853bf*/
  Map_Setup_6DA980(); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( dword_A8E370 ) /*0x6853d6*/
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
  FootClass_Array.?[0] = 0; /*0x685443*/
  if ( FootClass_Array.?[5] && BYTE1(FootClass_Array.?[7]) ) /*0x685453*/
  {
    __3_YAXPAX_Z((void *)FootClass_Array.?[5]); /*0x685456*/
    FootClass_Array.?[5] = 0; /*0x68545e*/
  }
  BYTE1(FootClass_Array.?[7]) = 0; /*0x685469*/
  FootClass_Array.?[6] = 0; /*0x685471*/
  FootClass_Array.? = 0; /*0x685477*/
  if ( FootClass_Array.? && BYTE1(FootClass_Array.?) ) /*0x685485*/
  {
    __3_YAXPAX_Z(FootClass_Array.?); /*0x685488*/
    FootClass_Array.? = 0; /*0x685490*/
  }
  BYTE1(FootClass_Array.?) = 0; /*0x68549b*/
  FootClass_Array.? = 0; /*0x6854a1*/
  dword_A8B230[381].uniqueId = 3600; /*0x6854a7*/
  dword_A8B230[381].abstractFlags = dword_A8B230[381].uniqueId; /*0x6854bc*/
  dword_A8B230[381].nextArrayIndex = dword_A8B230[381].uniqueId; /*0x6854cd*/
  LOBYTE(dword_A8B230[381].referenceCount) = 0; /*0x6854d8*/
  HIBYTE(dword_A8B230[382].abstractFlags) = 0; /*0x6854e4*/
  BYTE2(dword_A8B230[383].uniqueId) = 0; /*0x6854f0*/
  BYTE1(dword_A8B230[384].ptr_C) = 0; /*0x6854fb*/
  Map_Reset_5549A0(v16); /*0x685501*/
  Map_Reset(v17); /*0x685506*/
  sub_4C5470(v18); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&stru_87F5D8); /*0x685524*/
  LoadGame::CleanupArray((LoadGame *)&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots((LoadGame *)&g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[652] = 0; /*0x68554f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[656] = 0; /*0x685554*/
  *(_DWORD *)&stru_87F5F0.__pad_58[660] = 0; /*0x68555a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[664] = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick((MouseClass *)&stru_87F5F0.__pad_58[416]); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&stru_87F5F0.__pad_58[304] + 12))(&stru_87F5F0.__pad_58[304]); /*0x685590*/
  Debug::Log(); /*0x685598*/
  *(_DWORD *)&stru_A8EB00.?[228] = 0; /*0x6855a7*/
  if ( *(_DWORD *)&stru_A8EB00.?[216] && stru_A8EB00.?[225] ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(*(void **)&stru_A8EB00.?[216]); /*0x6855b8*/
    *(_DWORD *)&stru_A8EB00.?[216] = 0; /*0x6855c0*/
  }
  stru_A8EB00.?[225] = 0; /*0x6855cb*/
  *(_DWORD *)&stru_A8EB00.?[220] = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v12 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x6855e4*/
  v13 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v12++ = dword_B05458; /*0x6855f4*/
    --v13; /*0x6855f9*/
  }
  while ( v13 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( *(_DWORD *)&stru_A8EB00.?[404] ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(*(ScenarioClass **)&stru_A8EB00.?[404]); /*0x685618*/
    if ( *(_DWORD *)&stru_A8EB00.?[404] ) /*0x685625*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_A8EB00.?[404] + 32))(*(_DWORD *)&stru_A8EB00.?[404], 1); /*0x68562b*/
    *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x68562e*/
  }
  LOBYTE(dword_A8B230[14].NeedsSaveOrLink) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  dword_A8B230[14].referenceCount = 1000000; /*0x685659*/
  return result; /*0x685657*/
}



// ==== 0x00685670  Scenario::EndGameFlow  this=Scenario  sig=csp ====
__int16 __usercall Scenario::EndGameFlow@<ax>(Scenario *this)
{
  char v1; // bl
  AsyncIO *v2; // edi
  double v3; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v12; // ecx
  char v13; // al
  __int16 result; // ax
  void *ptr_8; // ecx
  void *ptr_C; // ecx
  AbstractClass *v17; // ecx
  int uniqueId; // ecx
  IPXInterfaceClass *v19; // eax
  int v20; // ebp
  int i; // eax
  int v22; // edx
  int v23; // ecx
  LPARAM v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CreditsPower *v28; // [esp-8h] [ebp-94h]
  ObjectClass *v29; // [esp+8h] [ebp-84h] BYREF
  _DWORD v30[8]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v31[8]; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD v32[8]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v33[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(v29); /*0x68568d*/
    Map_Get_55CF10(v29); /*0x685692*/
  }
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x68569f*/
  stru_A8EB00.?[376] = 0; /*0x6856a5*/
  byte_A8E378 = 0; /*0x6856ac*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    v6 = (char *)p_vtable2[2]; /*0x6856c7*/
    v7 = Ticks - (_DWORD)*p_vtable2; /*0x6856ca*/
    *p_vtable2 = (void *)-1; /*0x6856cc*/
    p_vtable2[2] = &v6[v7]; /*0x6856d0*/
  }
  AsyncIO::Shutdown(v2); /*0x6856d3*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6856e8*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6856f3*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x68570c*/
  Audio::GetFlag((Audio *)g_MixerState); /*0x685715*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685720*/
  v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68572a*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685732*/
    v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685744*/
  v9 = v8 + 300; /*0x685746*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68574c*/
  {
    v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68575a*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685762*/
      v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685774*/
    if ( v9 <= v8 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x6857ca*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x6857d1*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6857e5*/
  }
  v10 = *(_DWORD *)&dword_A8B238; /*0x6857ea*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  v1 = 0; /*0x685802*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685807*/
  {
    v12 = dword_A8B23C; /*0x6858c6*/
LABEL_36:
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x6858ce*/
    if ( v12 ) /*0x6858d7*/
      (*((void (__thiscall **)(ObjectClass *, int))v12->AbstractClass + 41))(v12, 1); /*0x6858dd*/
    byte_A8E9A0 = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685817*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x68581d*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, StringCSF); /*0x685839*/
    v10 = *(_DWORD *)&dword_A8B238; /*0x68583e*/
  }
  v8 = 0; /*0x685849*/
  if ( !dword_A8B23C ) /*0x68584d*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((unsigned __int8 (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x68585a*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68586c*/
LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)&v29 + 3)); /*0x685884*/
    Map_Load_5C9720(0, -1, 3); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
LABEL_29:
  v12 = dword_A8B23C; /*0x685890*/
  if ( dword_A8B23C ) /*0x685898*/
  {
    v13 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x68589c*/
    v12 = dword_A8B23C; /*0x6858a2*/
    v1 = v13; /*0x6858a8*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x6858b8*/
    dword_A8D588 = 3; /*0x6858ba*/
  if ( !v1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*((void (__thiscall **)(ObjectClass *))v12->AbstractClass + 43))(v12); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[143].NeedsSaveOrLink, -1, 3, 1, 1, 1); /*0x685915*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685940*/
  if ( !BYTE2(dword_A8B230[374].abstractFlags) ) /*0x68594b*/
  {
    __0Iostream_init_QAE_XZ_5((Iostream_init *)((char *)&v29 + 3)); /*0x685959*/
    Map_Load_6C8E80(v1, -1, 3); /*0x685960*/
  }
  ptr_8 = dword_A8B230[144].ptr_8; /*0x68596b*/
  if ( ptr_8 != (void *)-1 ) /*0x685973*/
    Movie::PlayWrapper((int)ptr_8, -1, 3, 1, 1, 1); /*0x68597d*/
  ptr_C = dword_A8B230[144].ptr_C; /*0x685987*/
  if ( ptr_C != (void *)-1 ) /*0x68598f*/
    Movie::PlayWrapper((int)ptr_C, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !CopyProtection::CheckProtectedData() || (v17 = dword_A8B230, HIBYTE(dword_A8B230[374].abstractFlags)) ) /*0x6859b1*/
  {
    byte_A8E9A0 = 0; /*0x685b33*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685b49*/
  }
  if ( LOBYTE(dword_A8B230[374].abstractFlags) ) /*0x6859bf*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x6859c9*/
    if ( uniqueId != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(v28, 3, v8); /*0x6859ee*/
    byte_A8E9A0 = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a0f*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 || !dword_A8B23C ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) ) /*0x685a2b*/
  {
    v17 = dword_A8B230; /*0x685a32*/
LABEL_58:
    if ( LOBYTE(v17[374].nextArrayIndex) ) /*0x685a38*/
    {
      if ( BYTE1(v17[205].ptr_4) ) /*0x685a42*/
        Map_Delete_5ADE20((int)v17, (const char *)&v17[7].ptr_C); /*0x685a52*/
      else
        Map_Delete_5ADE20((int)v17, (const char *)&v17->ptr_4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a6b*/
      Map_Delete((ObjectClass *)dword_A8B230); /*0x685a74*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685a81*/
    }
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685a84*/
LABEL_64:
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a8f*/
  Scenario::CopyLocalScenarioData((Scenario *)&stru_8A38E0); /*0x685a9f*/
  ++dword_A8B230[130].ptr_C; /*0x685ab0*/
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x685ada*/
    && dword_A8B23C
    && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x685af5*/
      if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x685b00*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x685b06*/
      *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685b0d*/
      v19 = (IPXInterfaceClass *)__2_YAPAXI_Z(0x3F310u); /*0x685b13*/
      if ( v19 ) /*0x685b1d*/
        *(_DWORD *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v19); /*0x685b26*/
      else
        *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685b4a*/
    }
    WinsockInterface::Init(*(WinsockInterface **)&stru_887598.isAliveFlag); /*0x685b56*/
    v20 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x685b69*/
    qmemcpy(v33, dword_A8DA90, sizeof(v33)); /*0x685b6f*/
    qmemcpy(v31, &stru_A8B250.__pad_0[108], sizeof(v31)); /*0x685b7f*/
    qmemcpy(v30, &stru_A8B250.__pad_0[76], sizeof(v30)); /*0x685b8f*/
    qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x685b9f*/
    LOBYTE(result) = InitNetworkGameState(); /*0x685ba1*/
    if ( !(_BYTE)result ) /*0x685ba8*/
    {
      if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x685bb2*/
      {
        result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)( /*0x685bb8*/
                   *(_DWORD *)&stru_887598.isAliveFlag,
                   1);
        *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685bba*/
      }
      byte_A8E9A0 = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    *(_DWORD *)&stru_A8B250.__pad_0[36] = v20; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v22 = v30[i]; /*0x685be2*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x685be6*/
      v23 = v31[i]; /*0x685bec*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 76] = v22; /*0x685bf0*/
      v24 = v33[i]; /*0x685bf6*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 108] = v23; /*0x685bfa*/
      dword_A8DA90[i] = v24; /*0x685c00*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685c14*/
  }
  byte_A8E9A0 = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !byte_A8E9A0 ) /*0x685c28*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685c32*/
  while ( !ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
             (char *)&dword_A8B230[130].abstractFlags,
             1,
             v3,
             dword_A8B230[375].uniqueId) )
    ; /*0x685c5d*/
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x685c9d*/
    && dword_A8B23C
    && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x685cad*/
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x685ccc*/
        v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685cdf*/
      else
        v25 = 15; /*0x685cce*/
      Network::SetConnectionParams(&unk_A8E9C0, v25, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d05*/
        v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d18*/
      else
        v26 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(&unk_A8E9C0, v26, -1, 600); /*0x685d27*/
    }
    else if ( *(_DWORD *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d4c*/
        v27 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d5f*/
      else
        v27 = 60; /*0x685d4e*/
      Network::SetConnectionParams(&unk_A8E9C0, v27, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x685d7a*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x685d87*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x685d90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}



// ==== 0x00685DC0  Scenario::EndGame  this=Scenario  sig=csp ====
char __usercall Scenario::EndGame@<al>(Scenario *this)
{
  AsyncIO *v1; // edi
  double v2; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // eax
  char v11; // bl
  wchar_t *StringCSF; // eax
  ObjectClass *v13; // ecx
  char v14; // al
  int v15; // eax
  int *v16; // eax
  wchar_t *v17; // eax
  IPXInterfaceClass *v18; // eax
  int v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  wchar_t *v28; // [esp-1Ah] [ebp-A8h]
  wchar_t *v29; // [esp-16h] [ebp-A4h]
  int v30; // [esp-Ah] [ebp-98h]
  ObjectClass *v31[2]; // [esp+6h] [ebp-88h] BYREF
  _DWORD v32[8]; // [esp+Eh] [ebp-80h] BYREF
  _DWORD v33[8]; // [esp+2Eh] [ebp-60h] BYREF
  _DWORD v34[8]; // [esp+4Eh] [ebp-40h] BYREF
  _DWORD v35[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x685ddb*/
  {
    RunNetworkGameLoop(v31[0]); /*0x685ddd*/
    Map_Get_55CF10(v31[0]); /*0x685de2*/
  }
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x685def*/
  stru_A8EB00.?[376] = 0; /*0x685df5*/
  byte_A8E378 = 0; /*0x685dfc*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    v5 = (char *)p_vtable2[2]; /*0x685e17*/
    v6 = Ticks - (_DWORD)*p_vtable2; /*0x685e1a*/
    *p_vtable2 = (void *)-1; /*0x685e1c*/
    p_vtable2[2] = &v5[v6]; /*0x685e20*/
  }
  AsyncIO::Shutdown(v1); /*0x685e23*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x685e38*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x685e43*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685e5c*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x685e7b*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x685e96*/
  }
  Audio::GetFlag((Audio *)g_MixerState); /*0x685ea1*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685eac*/
  v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x685eb6*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685ebe*/
    v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685ed0*/
  v8 = v7 + 300; /*0x685ed2*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x685ed8*/
  {
    v9 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x685ee6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685eee*/
      v9 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685f00*/
    if ( v8 <= v9 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x685f35*/
  v10 = *(_DWORD *)&dword_A8B238; /*0x685f3a*/
  v11 = 0; /*0x685f41*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685f52*/
  {
    v13 = dword_A8B23C; /*0x686014*/
LABEL_36:
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68601a*/
    if ( v13 ) /*0x686023*/
      (*((void (__thiscall **)(ObjectClass *, _DWORD))v13->AbstractClass + 41))(v13, 0); /*0x686028*/
    byte_A8E9A0 = 0; /*0x686035*/
    LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68603c*/
    return v15; /*0x68604b*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685f62*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x685f68*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2492); /*0x685f7b*/
    ChatMessageWOL(1, StringCSF); /*0x685f84*/
    v10 = *(_DWORD *)&dword_A8B238; /*0x685f89*/
  }
  if ( !dword_A8B23C ) /*0x685f96*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((unsigned __int8 (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x685fa4*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fb6*/
LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)v31 + 3)); /*0x685fce*/
    Map_Load_5C9720(0, -1, v8); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
LABEL_29:
  v13 = dword_A8B23C; /*0x685fda*/
  if ( dword_A8B23C ) /*0x685fe2*/
  {
    v14 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x685fe6*/
    v13 = dword_A8B23C; /*0x685fec*/
    v11 = v14; /*0x685ff2*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x686002*/
    dword_A8D588 = 3; /*0x686004*/
  if ( !v11 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*((void (__thiscall **)(ObjectClass *))v13->AbstractClass + 43))(v13); /*0x68604e*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68605b*/
LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[144].ptr_0, -1, v8, 1, 1, 1); /*0x686060*/
  LOBYTE(v15) = Screen::Capture(1, 0, v11, -1); /*0x68607c*/
  if ( *(_DWORD *)&dword_A8B238 /*0x6860ec*/
    || (dword_A8D5F8 & 2) != 0
    || (v31[1] = (ObjectClass *)asc_82083C,
        v29 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_Scenario_CPP, 2559),
        v28 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_Scenario_CPP, 2559),
        v16 = (int *)GetStringCSF(aTxtToReplay, 0, g_Str_File_Scenario_CPP, 2559),
        (v15 = Dialog::ShowMessageBox(v16, v28, v29, 0, 0, v30)) != 0) )
  {
    if ( !v11 ) /*0x6860f0*/
    {
      byte_A8E9A0 = 0; /*0x6863c3*/
      return v15; /*0x6863c3*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6860fd*/
  {
    v17 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Scenario_CPP, 2566); /*0x686110*/
    ChatMessageWOL(1, v17); /*0x686119*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x686141*/
    || !dword_A8B23C
    || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x68615d*/
    if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x686168*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x68616e*/
    *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686175*/
    v18 = (IPXInterfaceClass *)__2_YAPAXI_Z(0x3F310u); /*0x68617b*/
    if ( v18 ) /*0x686185*/
      *(_DWORD *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v18); /*0x68618e*/
    else
      *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686195*/
  }
  WinsockInterface::Init(*(WinsockInterface **)&stru_887598.isAliveFlag); /*0x6861a1*/
  v19 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x6861b4*/
  qmemcpy(v35, dword_A8DA90, sizeof(v35)); /*0x6861ba*/
  qmemcpy(v33, &stru_A8B250.__pad_0[108], sizeof(v33)); /*0x6861ca*/
  qmemcpy(v34, &stru_A8B250.__pad_0[76], sizeof(v34)); /*0x6861da*/
  qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x6861ea*/
  LOBYTE(v15) = InitNetworkGameState(); /*0x6861ec*/
  if ( (_BYTE)v15 ) /*0x6861f3*/
  {
    *(_DWORD *)&stru_A8B250.__pad_0[36] = v19; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v21 = v34[i]; /*0x686246*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x68624a*/
      v22 = v33[i]; /*0x686250*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 76] = v21; /*0x686254*/
      v23 = v35[i]; /*0x68625a*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 108] = v22; /*0x68625e*/
      dword_A8DA90[i] = v23; /*0x686264*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x686278*/
LABEL_65:
    ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 0, v2, dword_A8B230[375].uniqueId); /*0x686282*/
    if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x6862be*/
      && dword_A8B23C
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
    {
      SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x6862ce*/
      if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x6862ed*/
          v24 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686300*/
        else
          v24 = 15; /*0x6862ef*/
        Network::SetConnectionParams(&unk_A8E9C0, v24, -1, 600, 1); /*0x686311*/
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x686326*/
          v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686339*/
        else
          v25 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(&unk_A8E9C0, v25, -1, 600); /*0x686348*/
      }
      else if ( *(_DWORD *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x68636c*/
          v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x68637f*/
        else
          v26 = 60; /*0x68636e*/
        Network::SetConnectionParams(&unk_A8E9C0, v26, -1, 600, 1); /*0x686390*/
      }
    }
    GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x68639a*/
    if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6863a7*/
      Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x6863af*/
    LOBYTE(v15) = TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x6861fd*/
  {
    LOBYTE(v15) = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)( /*0x686203*/
                    *(_DWORD *)&stru_887598.isAliveFlag,
                    1);
    *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686205*/
  }
  byte_A8E9A0 = 0; /*0x68620f*/
LABEL_60:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x68621d*/
    LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68622a*/
  return v15; /*0x686045*/
}



// ==== 0x006863E0  GameFrameCheck_Check  this=-  sig=ida-proto ====
int __usercall GameFrameCheck_Check@<eax>(AsyncIO *a1@<esi>, double a2@<st0>)
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v10; // [esp+0h] [ebp-18h]

  MouseClass::LoadCursors(); /*0x6863e3*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x686404*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x68641f*/
  }
  stru_A8EB00.?[376] = 0; /*0x68642a*/
  byte_A8E378 = 0; /*0x686433*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x68643a*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], 0); /*0x68643e*/
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x686450*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x686459*/
  {
    Ticks = Timer::GetTicks(); /*0x68645e*/
    v4 = (char *)p_vtable2[2]; /*0x686465*/
    v5 = Ticks - (_DWORD)*p_vtable2; /*0x686468*/
    *p_vtable2 = (void *)-1; /*0x68646a*/
    p_vtable2[2] = &v4[v5]; /*0x686472*/
  }
  AsyncIO::Shutdown(a1); /*0x686475*/
  Timer::GetTicks(); /*0x68647e*/
  v10 = Timer::GetTicks(); /*0x68649d*/
  Theme::Stop((Theme *)&unk_A83D10, 1); /*0x6864b4*/
  AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6864d8*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 0, a2, dword_A8B230[375].uniqueId); /*0x6864fc*/
  GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v6 = 60; /*0x68650f*/
    if ( v10 != -1 ) /*0x686516*/
    {
      v7 = Timer::GetTicks() - v10; /*0x686521*/
      if ( v7 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v6 = 60 - v7; /*0x686529*/
    }
    if ( v6 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x686536*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x68654a*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x686553*/
  return TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x686562*/
}



// ==== 0x00686570  ObjectClass::GameFrameCheck_Check  this=ObjectClass  sig=csp ====
char GameFrameCheck_Check_686570(ObjectClass *this)
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // esi
  char result; // al
  AsyncIO *v9; // [esp+0h] [ebp-8h]

  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x686579*/
  stru_A8EB00.?[376] = 0; /*0x68657f*/
  byte_A8E378 = 0; /*0x686585*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x68658e*/
  {
    Ticks = Timer::GetTicks(); /*0x686593*/
    v3 = (char *)p_vtable2[2]; /*0x68659a*/
    v4 = Ticks - (_DWORD)*p_vtable2; /*0x68659d*/
    *p_vtable2 = (void *)-1; /*0x68659f*/
    p_vtable2[2] = &v3[v4]; /*0x6865a7*/
  }
  dword_A8B230[130].ptr_C = (void *)1; /*0x6865b0*/
  AsyncIO::Shutdown(v9); /*0x6865ba*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6865c5*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6865d9*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6865e4*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6865ee*/
  Theme::Stop((Theme *)&unk_A83D10, 1); /*0x6865fa*/
  Audio::GetFlag((Audio *)g_MixerState); /*0x686605*/
  VoxClass::FindAndPlay(&stru_83DB34, -1); /*0x686616*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x686621*/
  v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68662b*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x686634*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x686646*/
  v6 = v5 + 300; /*0x686649*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68664f*/
  {
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68665d*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x686666*/
      v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x686678*/
    if ( v6 <= v7 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6866ad*/
  result = DSurface_ViewBounds.__pad_8[16]; /*0x6866b2*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] ) /*0x6866c0*/
  {
    result = stru_A8EB00.ObjectTypeClass[36]; /*0x6866c8*/
    if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6866ea*/
    }
  }
  byte_A8E9A0 = 0; /*0x6866ef*/
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
char __usercall ScenarioClass::Construct@<al>(char *Source@<ecx>, double a2@<st0>)
{
  char result; // al
  char Map; // bl
  CCINIClass v5; // [esp+10h] [ebp-C4h] BYREF
  CCFileClass v6; // [esp+68h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+C0h] [ebp-14h] BYREF
  int v8; // [esp+CCh] [ebp-8h]

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x686765*/
    v5.?[0] = 0; /*0x68676b*/
    v5.?[1] = 0; /*0x68676f*/
    GenericList::Constructor((GenericList *)&v5.?[2]); /*0x686773*/
    v5.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x68677c*/
    Node::Init((Node *)&v5.?[8]); /*0x686784*/
    v5.? = 0; /*0x68678d*/
    v5.ownsFile = 0; /*0x686792*/
    *(_DWORD *)v5.INIClass = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(&v6, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(&v5, (int)&v6, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x686836*/
      Map = ScenarioClass::LoadMap(0, (bool *)v5.INIClass, a2); /*0x686851*/
      *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x686853*/
      v8 = 0; /*0x68685b*/
      Vector::Clear((int)v7); /*0x686862*/
      *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x686873*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x6867db*/
      v8 = 0; /*0x6867e3*/
      Vector::Clear((int)v7); /*0x6867ea*/
      *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}



// ==== 0x00686890  ScenarioClass::SetupAlliances  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SetupAlliances(ScenarioClass *this)
{
  TechnoClass *v1; // esi
  int i; // esi
  HouseClass *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  HouseClass *v8; // eax
  int *Owner; // ebp
  int j; // esi
  HouseClass *v11; // edx
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int *v18; // ecx
  int result; // eax
  TechnoClass *v20; // [esp-8h] [ebp-1Ch]
  ObjectClass *v21; // [esp+4h] [ebp-10h]
  int v22; // [esp+Ch] [ebp-8h]

  v20 = v1; /*0x6868b2*/
  if ( *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 < *(_DWORD *)&dword_8871E0->__pad_13BC[276] && !byte_A8ED6B ) /*0x6868bc*/
  {
    for ( i = 0; i < dword_A80238; ++i ) /*0x6868c7*/
    {
      v4 = (HouseClass *)*(&dword_A8022C->ptr_0 + i); /*0x6868ce*/
      if ( !v4->currentPlayer[0] && !*(_BYTE *)(v4->relatedTagsCapacity + 422) && *(int *)&stru_A8B250.__pad_0[36] < 1 ) /*0x6868ef*/
        HouseClass::SDDTORAllAndTriggers(v4); /*0x6868f1*/
    }
  }
  Event::Dispatch(); /*0x686900*/
  if ( !byte_A8ED6B ) /*0x68690c*/
  {
    v5 = dword_A8E7AC; /*0x686914*/
    dword_A8E7AC = 0; /*0x68691c*/
    if ( dword_A8B23C ) /*0x686926*/
    {
      (*(void (__thiscall **)(ObjectClass *, ScenarioClass *))(dword_A8B23C->ptr_0 + 132))(dword_A8B23C, this); /*0x68692b*/
      ComputeMultiEngineerAdjustment((TechnoClass *)dword_A8B23C); /*0x686937*/
    }
    else
    {
      GenerateScenarioUnits((char)this); /*0x686940*/
    }
    dword_A8E7AC = v5; /*0x686945*/
  }
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 93); /*0x686952*/
  Event::Dispatch(); /*0x686957*/
  if ( stru_A8B250.__pad_0[17] ) /*0x686963*/
  {
    v6 = *(_DWORD *)&dword_8871E0->__pad_13BC[180]; /*0x686971*/
    if ( v6 <= dword_A8B54C ) /*0x686979*/
      v6 = dword_A8B54C; /*0x68697b*/
    if ( v6 >= *(_DWORD *)&dword_8871E0->__pad_13BC[184] ) /*0x686985*/
      v6 = *(_DWORD *)&dword_8871E0->__pad_13BC[184]; /*0x686987*/
    if ( v6 > 0 ) /*0x68698b*/
    {
      v7 = v6; /*0x68698d*/
      do /*0x68699a*/
      {
        CrateClass::FindPlacement((CrateClass *)&dword_87F7E8); /*0x686994*/
        --v7; /*0x686999*/
      }
      while ( v7 ); /*0x68699a*/
    }
  }
  Event::Dispatch(); /*0x68699c*/
  GetHouseData(v20); /*0x6869a6*/
  v8 = (HouseClass *)SuperWeaponTypeClass::FindByName(&g_INI_Key_Special); /*0x6869b0*/
  Owner = (int *)HouseClass::FindOwner(v8); /*0x6869bc*/
  for ( j = 0; j < dword_A80238; ++j ) /*0x6869c7*/
  {
    *(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 22388) = *(&dword_A8022C->ptr_0 + j); /*0x6869db*/
    v11 = dword_A8022C; /*0x6869e1*/
    v12 = *(&dword_A8022C->ptr_0 + j); /*0x6869e7*/
    if ( !*(_BYTE *)(v12 + 492) && !*(_BYTE *)(*(_DWORD *)(v12 + 52) + 422) ) /*0x6869fb*/
    {
      v13 = (_DWORD *)(v12 + 22080); /*0x686a12*/
      v14 = *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_FFC[380] + 4 * *(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 388)); /*0x686a23*/
      *v13 = dword_A8ED84; /*0x686a26*/
      v13[1] = v22; /*0x686a28*/
      v13[2] = v14; /*0x686a2b*/
      v21 = (ObjectClass *)(*(int (__stdcall **)(int))(*(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 36) + 24))(*(&dword_A8022C->ptr_0 + j) + 36); /*0x686a4b*/
      v15 = *(&dword_A8022C->ptr_0 + j); /*0x686a4f*/
      LOWORD(v16) = Math::RoundToInt( /*0x686a6b*/
                      (double)*(int *)(*(_DWORD *)&dword_8871E0->__pad_FFC[780] + 4 * *(_DWORD *)(v15 + 388))
                    * 0.01
                    * (double)(int)v21);
      HouseClass::AddPower((HouseClass *)v15, v16); /*0x686a73*/
      v11 = dword_A8022C; /*0x686a78*/
    }
    v17 = *(_DWORD *)(*(&v11->ptr_0 + j) + 52); /*0x686a81*/
    if ( *(_BYTE *)(v17 + 422) ) /*0x686a84*/
      *(_BYTE *)(v17 + 423) = 0; /*0x686a8e*/
    else
      *(_BYTE *)(v17 + 423) = 1; /*0x686a97*/
    v18 = (int *)*(&dword_A8022C->ptr_0 + j); /*0x686aa4*/
    if ( v18 != Owner ) /*0x686aa9*/
    {
      HouseClass::HandleAlliance(v18, (int)Owner, 0); /*0x686aae*/
      HouseClass::HandleAlliance(Owner, *(&dword_A8022C->ptr_0 + j), 0); /*0x686ac1*/
    }
  }
  if ( dword_A8B23C ) /*0x686ae0*/
  {
    (*(void (__thiscall **)(ObjectClass *, ObjectClass *))(dword_A8B23C->ptr_0 + 136))(dword_A8B23C, v21); /*0x686ae4*/
    (*(void (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 140))(dword_A8B23C); /*0x686af2*/
  }
  Map_Setup(v21); /*0x686afe*/
  *(_DWORD *)byte_A8D108 = 16843009; /*0x686b08*/
  dword_A8D10C = 16843009; /*0x686b0e*/
  return result; /*0x686b14*/
}



// ==== 0x00686B20  ScenarioClass::LoadMap  this=ScenarioClass  sig=csp ====
char __usercall ScenarioClass::LoadMap@<al>(
        char a1@<dl>,
        ScenarioClass *a2@<ecx>,
        double a3@<st0>,
        ObjectClass *a4@<edi>)
{
  ScenarioClass *v4; // ebp
  int v5; // ecx
  int v6; // eax
  int ptr_0; // ecx
  int v8; // eax
  char Bool_Overwrite; // al
  unsigned int v10; // edx
  char *v11; // edi
  char *v12; // edi
  unsigned int v13; // ecx
  int Section; // eax
  int v15; // eax
  unsigned int v16; // kr08_4
  wchar_t *StringCSF; // eax
  int v18; // eax
  unsigned int v19; // kr0C_4
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int i; // eax
  AbstractClass *v32; // ecx
  int v33; // eax
  int j; // esi
  int *v35; // eax
  int *v36; // eax
  LoadingScreen *Instance; // eax
  Tactical *v38; // eax
  IPersistStream *v39; // eax
  INIClass *v40; // ebp
  int KeyCount; // ebx
  int k; //... [30673 chars total]



// ==== 0x00687CE0  SaveScenarioToINI  this=-  sig=csp ====
char *__usercall SaveScenarioToINI@<eax>(char *Source@<ecx>, char a2@<dl>, int a3@<edi>)
{
  _DWORD *v4; // eax
  char v5; // al
  ObjectClass *v7; // [esp+0h] [ebp-FCh]
  char v8; // [esp+Bh] [ebp-F1h]
  ObjectClass v10; // [esp+10h] [ebp-ECh] BYREF
  int v11[3]; // [esp+C4h] [ebp-38h] BYREF
  int v12; // [esp+D0h] [ebp-2Ch]
  RawFileClass v13; // [esp+D8h] [ebp-24h] BYREF

  v10.ptr_8 = 0; /*0x687cf4*/
  v10.ptr_C = 0; /*0x687cf8*/
  GenericList::Constructor((GenericList *)&v10.uniqueId); /*0x687cfc*/
  v10.uniqueId = (int)&List<INIClass::INISection *>::`vftable'; /*0x687d05*/
  Node::Init((MixFileClass *)&v10.fallRate); /*0x687d0d*/
  v10.ambientSoundController[1] = 0; /*0x687d17*/
  LOBYTE(v10.ambientSoundController[2]) = 0; /*0x687d1d*/
  v10.ptr_4 = (int)&CCINIClass_Vtable; /*0x687d21*/
  if ( byte_A8ED6B ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d34*/
    v5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 20))(v4, 0); /*0x687d3e*/
    v10.customSound_controller[3] = (int)&CCFileClass::`vftable'; /*0x687d48*/
    v8 = v5; /*0x687d50*/
    v12 = 0; /*0x687d54*/
    Vector::Clear((int)v11); /*0x687d5b*/
    v10.customSound_controller[3] = (int)&off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10.customSound_controller[3]); /*0x687d6c*/
    if ( v8 ) /*0x687d75*/
    {
      CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d7c*/
      CCINIClass::Load((CCINIClass *)&v10.ptr_4, (int)&v10.customSound_controller[3], 1, 0); /*0x687d8d*/
      v10.customSound_controller[3] = (int)&CCFileClass::`vftable'; /*0x687d99*/
      v12 = 0; /*0x687da1*/
      Vector::Clear((int)v11); /*0x687da8*/
      v10.customSound_controller[3] = (int)&off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10.customSound_controller[3]); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)dword_A8B230, (char *)&v10.ptr_4, a2); /*0x687dce*/
  if ( a2 ) /*0x687dd7*/
  {
    if ( dword_ABE154 && *(_DWORD *)dword_ABE154 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((MiniMap *)dword_ABE154, (char *)&v10.ptr_4); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v10); /*0x687df7*/
      MiniMap::Render((MiniMap *)&v10); /*0x687e00*/
      MiniMap::SavePreviewToINI((MiniMap *)&v10, (char *)&v10.ptr_4); /*0x687e0e*/
      ComPtr::Dtor((ComPtr *)&v10); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses((char *)&v10.ptr_4); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI((MapClass *)&dword_87F7E8, (char *)&v10.ptr_4); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim((char *)&v10.ptr_4); /*0x687e3a*/
  ReadFootINI((char *)&v10.ptr_4); /*0x687e43*/
  SaveInfantryToINI(v7, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI((char *)&v10.ptr_4); /*0x687e55*/
  sub_44FE60((char *)&v10.ptr_4); /*0x687e5e*/
  OverlayClass::WriteINI((char *)&v10.ptr_4); /*0x687e67*/
  UnitTypeClass::ReadINIEntry((char *)&v10.ptr_4); /*0x687e70*/
  InfantryClass::SetMission((char *)&v10.ptr_4); /*0x687e79*/
  if ( !a2 || byte_A8ED6B ) /*0x687e8a*/
  {
    nullsub_34(); /*0x687e92*/
    ScriptTypeClass::ReadINI((INIClass *)&v10.ptr_4, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData((INIClass *)&v10.ptr_4, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList((INIClass *)&v10.ptr_4, 0); /*0x687eb3*/
  }
  ReadAudioEventINI((INIClass *)&v10.ptr_4); /*0x687ebc*/
  SaveTriggerTagsToINI((INIClass *)&v10.ptr_4); /*0x687ec5*/
  RawFileClass::Construct((BufferIOFileClass *)&v13, (int)Source); /*0x687ed2*/
  INIClass::WriteDigest((CCINIClass *)&v10.ptr_4, (int)&v13, 1); /*0x687ee5*/
  RawFileClass::Dtor((BufferIOFileClass *)&v13); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v10.ptr_4); /*0x687eff*/
}



// ==== 0x00687F10  ObjectClass::AssignSessionHouses  this=ObjectClass  sig=csp ====
char AssignSessionHouses(ObjectClass *this)
{
  int DeleteAndZero_field_0x08; // edi
  int v2; // esi
  int *v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebx
  int *v8; // eax
  int v9; // ebp
  char *v10; // eax
  int v11; // eax
  int *v12; // ebx
  int v13; // edi
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ebp
  LPARAM v17; // edx
  int v18; // eax
  wchar_t *StringCSF; // eax
  int v20; // eax
  int *v21; // esi
  int v22; // eax
  int v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // esi
  int v28; // [esp+8h] [ebp-4Ch]
  DeleteAndZero v29; // [esp+Ch] [ebp-48h] BYREF
  int v30; // [esp+18h] [ebp-3Ch]
  _DWORD v31[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v33; // [esp+38h] [ebp-1Ch]
  char v34[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v35; // [esp+50h] [ebp-4h]

  DeleteAndZero_field_0x08 = dword_A8DA84; /*0x687f15*/
  v2 = 0; /*0x687f1b*/
  for ( v29.DeleteAndZero_field_0x08 = dword_A8DA84; v2 < DeleteAndZero_field_0x08; ++v2 ) /*0x687f23*/
  {
    v3 = (int *)dword_A8DA78[v2]; /*0x687f2a*/
    if ( *(int *)((char *)v3 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v3, 0); /*0x687f35*/
  }
  v31[0] = 0; /*0x687f42*/
  v31[1] = 0; /*0x687f49*/
  HouseClass_Observer = 0; /*0x687f4d*/
  if ( DeleteAndZero_field_0x08 > 0 ) /*0x687f53*/
  {
    v30 = DeleteAndZero_field_0x08; /*0x687f59*/
    do /*0x688146*/
    {
      v4 = -1; /*0x687f63*/
      v28 = -1; /*0x687f66*/
      v5 = 0; /*0x687f6e*/
      v6 = dword_A8DA78; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((_BYTE *)v31 + v5) && (v4 == -1 || *(_DWORD *)(*v6 + 83) < v4) ) /*0x687f84*/
        {
          v28 = v5; /*0x687f88*/
          v4 = *(_DWORD *)(*v6 + 83); /*0x687f8c*/
        }
        ++v5; /*0x687f8f*/
        ++v6; /*0x687f90*/
      }
      while ( v5 < DeleteAndZero_field_0x08 ); /*0x687f95*/
      v7 = dword_A8DA78[v28]; /*0x687fa0*/
      *((_BYTE *)v31 + v28) = 1; /*0x687fa3*/
      v8 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v8 ) /*0x687fb2*/
        v9 = HouseClass::Construct(v8, *((_DWORD *)dword_A83C9C + *(_DWORD *)(v7 + 75))); /*0x687fc8*/
      else
        v9 = 0; /*0x687fcc*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x687fd5*/
      {
        WideString::Assign((wchar_t **)&v29, (wchar_t *)v7); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29.DeleteAndZero_field_0x04, (const wchar_t **)&v29); /*0x687fe9*/
        DeleteAndZero::Alt(&v29); /*0x687ff2*/
        v10 = String::GetOrEmpty((String *)&v29.DeleteAndZero_field_0x04); /*0x687ffb*/
        if ( v10 ) /*0x688002*/
        {
          strncpy(Destination, v10, 0x14u); /*0x688012*/
          v33 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v9 + 90100) ) /*0x68802b*/
        {
          qmemcpy((void *)(v9 + 90100), Destination, 0x14u); /*0x688038*/
          *(_BYTE *)(v9 + 90120) = v33; /*0x68803a*/
          DeleteAndZero_field_0x08 = v29.DeleteAndZero_field_0x08; /*0x68803b*/
        }
        DeleteAndZero((ObjectClass *)&v29.DeleteAndZero_field_0x04); /*0x688043*/
      }
      else
      {
        if ( aHumanPlayer ) /*0x688051*/
        {
          strncpy(v34, aHumanPlayer, 0x14u); /*0x688065*/
          v35 = 0; /*0x68806d*/
        }
        else
        {
          v34[0] = (unsigned __int8)aHumanPlayer; /*0x688053*/
        }
        if ( v34 != (char *)(v9 + 90100) ) /*0x68807e*/
        {
          qmemcpy((void *)(v9 + 90100), v34, 0x14u); /*0x68808b*/
          *(_BYTE *)(v9 + 90120) = v35; /*0x68808d*/
          DeleteAndZero_field_0x08 = v29.DeleteAndZero_field_0x08; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v9 + 90154), (const wchar_t *)v7, 0x15u); /*0x68809c*/
      *(_WORD *)(v9 + 90194) = 0; /*0x6880a4*/
      *(_BYTE *)(v9 + 492) = 1; /*0x6880ad*/
      sub_4FCE00((ObjectClass *)v9, *(_DWORD *)(v7 + 83), *(_DWORD *)(v7 + 75), *(int *)&stru_A8B250.__pad_0[12]); /*0x6880c4*/
      *(_DWORD *)(v9 + 90196) = SessionClass::GetPlayerColorScheme(*(_DWORD *)(v7 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v9); /*0x6880df*/
      ComputeSessionColorVector((ObjectClass *)v9); /*0x6880e6*/
      *(_DWORD *)(v9 + 90200) = SessionClass::GetOption((int *)v7); /*0x6880f2*/
      *(_DWORD *)(v9 + 90204) = *(_DWORD *)(v7 + 99); /*0x688101*/
      if ( !v28 ) /*0x688107*/
      {
        dword_A83D4C = (Object *)v9; /*0x688109*/
        *(_BYTE *)(v9 + 493) = 1; /*0x68810f*/
      }
      if ( *(_DWORD *)(v7 + 107) == -1 ) /*0x68811a*/
        HouseClass_Observer = v9; /*0x68811c*/
      *(_DWORD *)(v9 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower((int *)v9, 1); /*0x688132*/
      *(_DWORD *)(v7 + 111) = *(_DWORD *)(v9 + 48); /*0x68813a*/
      --v30; /*0x688142*/
    }
    while ( v30 ); /*0x688146*/
  }
  v11 = 0; /*0x688152*/
  v30 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x688154*/
  v12 = (int *)&stru_A8B250.__pad_0[76]; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v11 < v30 ) /*0x688161*/
    {
      v13 = *v12; /*0x688167*/
      if ( *v12 != -1 && v13 != -3 ) /*0x688175*/
      {
        v14 = v12[8]; /*0x68817b*/
        v29.DeleteAndZero_field_0x08 = v11 + 1; /*0x688184*/
        v15 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v15 ) /*0x688192*/
          v16 = HouseClass::Construct(v15, *((_DWORD *)dword_A83C9C + v13)); /*0x6881a5*/
        else
          v16 = 0; /*0x6881a9*/
        v17 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v16 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v16 + 468) = v17; /*0x6881b8*/
        sub_4FCE00((ObjectClass *)v16, v14, v13, *(int *)&stru_A8B250.__pad_0[12]); /*0x6881c8*/
        *(_DWORD *)(v16 + 90196) = SessionClass::GetPlayerColorScheme(v14); /*0x6881da*/
        HouseClass::GetColor((char *)v16); /*0x6881e0*/
        ComputeSessionColorVector((ObjectClass *)v16); /*0x6881e7*/
        *(_DWORD *)(v16 + 90200) = v12[16]; /*0x6881ef*/
        v18 = v12[24]; /*0x6881f5*/
        *(_DWORD *)(v16 + 90204) = v18; /*0x6881fb*/
        if ( v18 != -1 ) /*0x688201*/
          LOBYTE(dword_A8B230[127].ptr_4) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v34, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v35 = 0; /*0x688233*/
        }
        else
        {
          v34[0] = (unsigned __int8)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v34 != (char *)(v16 + 90100) ) /*0x688244*/
        {
          qmemcpy((void *)(v16 + 90100), v34, 0x14u); /*0x68824f*/
          *(_BYTE *)(v16 + 90120) = v35; /*0x688251*/
        }
        StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Scenario_CPP, 4032); /*0x688263*/
        wcscpy((wchar_t *)(v16 + 90154), StringCSF); /*0x688270*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x68827f*/
          *(_DWORD *)(v16 + 588) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5172); /*0x68828d*/
        v20 = *(v12 - 8); /*0x688299*/
        if ( dword_A8DA84 > 1 && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6115) && v20 > 0 ) /*0x6882b3*/
          --v20; /*0x6882b5*/
        HouseClass::SetCombatPower((int *)v16, v20); /*0x6882b9*/
        v11 = v29.DeleteAndZero_field_0x08; /*0x6882be*/
      }
    }
    ++v12; /*0x6882c2*/
  }
  while ( (int)v12 < (int)&stru_A8B250.__pad_0[108] ); /*0x6882cb*/
  v21 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v21 ) /*0x6882e4*/
  {
    v22 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x6882eb*/
    v23 = HouseClass::Construct(v21, *((_DWORD *)dword_A83C9C + v22)); /*0x688303*/
  }
  else
  {
    v23 = 0; /*0x688307*/
  }
  *(_DWORD *)(v23 + 90196) = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68831a*/
  HouseClass::GetColor((char *)v23); /*0x688320*/
  v24 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v24 ) /*0x688336*/
  {
    v25 = SuperWeaponTypeClass::FindByName(&g_INI_Key_Special); /*0x68833d*/
    v26 = HouseClass::Construct(v24, *((_DWORD *)dword_A83C9C + v25)); /*0x688356*/
  }
  else
  {
    v26 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v26 + 90196) = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68836d*/
  return HouseClass::GetColor((char *)v26); /*0x688378*/
}



// ==== 0x00688380  Multiplayer::FindStartPositions  this=VectorClass  sig=csp ====
_DWORD *__thiscall Multiplayer::FindStartPositions(Multiplayer *this)
{
  int v1; // esi
  Multiplayer *v2; // edi
  AbstractClass *v3; // edx
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebp
  _DWORD *v8; // ecx
  int v9; // edi
  signed int v10; // ebp
  unsigned int i; // esi
  int v12; // edi
  int v13; // eax
  __int16 v14; // si
  int v15; // eax
  void *Items; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  int v20; // [esp+14h] [ebp-2Ch]
  Multiplayer *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  VectorClass v25; // [esp+28h] [ebp-18h] BYREF
  int v26; // [esp+38h] [ebp-8h]
  int v27; // [esp+3Ch] [ebp-4h]

  v1 = 0; /*0x688387*/
  v2 = this; /*0x688389*/
  v21 = this; /*0x688391*/
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = dword_A8B230; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x6883a5*/
  v27 = 10; /*0x6883ad*/
  v26 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  v6 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x6883b7*/
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
  if ( dword_A8DA84 > 0 ) /*0x6883f4*/
  {
    v8 = dword_A8DA78; /*0x6883f6*/
    v9 = dword_A8DA84; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(_DWORD *)(*v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      ++v8; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v27; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( v1 <= *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7 ) /*0x688421*/
  {
    v20 = *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7; /*0x68842b*/
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = v1; /*0x688423*/
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < v10; ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(void **)((char *)&v3[44].ptr_0 + 4 * i + 2) == (void *)dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(int *)((char *)&v3[44].ptr_0 + 4 * i + 2); /*0x688478*/
    if ( v26 < v25.Capacity ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v25.IsAllocated && v25.Capacity || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v25.ptr_0 + 2))(&v25, v4 + v25.Capacity, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v26++; /*0x6884ab*/
      *((_DWORD *)v25.Items + v13) = v12; /*0x6884b6*/
    }
    v3 = dword_A8B230; /*0x6884b9*/
LABEL_24:
    v23 = *(int *)((char *)&v3[44].ptr_0 + 4 * i + 2); /*0x6884bf*/
    Debug::Log(); /*0x6884d9*/
    v4 = v27; /*0x6884de*/
    v3 = dword_A8B230; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( v10 - v26 > 0 ) /*0x688502*/
  {
    Debug::Log(); /*0x68850d*/
    if ( v26 < v10 ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[720] - 10); /*0x688551*/
        LOWORD(v22) = *(_WORD *)&stru_87F5F0.__pad_58[708] /*0x688573*/
                    + Random::Range(
                        (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                        10,
                        *(_DWORD *)&stru_87F5F0.__pad_58[716] - 10);
        HIWORD(v22) = v14 + *(_WORD *)&stru_87F5F0.__pad_58[712] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (Type *)&stru_87F5F0.__pad_58[416],
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
          if ( v26 < v25.Capacity /*0x688603*/
            || (v25.IsAllocated || !v25.Capacity)
            && v27 > 0
            && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v25.ptr_0 + 2))(
                 &v25,
                 v27 + v25.Capacity,
                 0) )
          {
            v15 = v26++; /*0x688612*/
            *((_DWORD *)v25.Items + v15) = v19; /*0x68861d*/
          }
          Debug::Log(); /*0x688631*/
        }
      }
      while ( v26 < v20 ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  *(_DWORD *)&v2[4] = 0; /*0x688651*/
  *(_DWORD *)&v2[8] = 0; /*0x688654*/
  v2[13] = 0; /*0x688657*/
  v2[12] = (Multiplayer)1; /*0x68865f*/
  *(_DWORD *)v2 = &VectorClass<Cell>::`vftable'; /*0x688663*/
  Multiplayer::CopyDataArray(v2, &v25); /*0x688669*/
  *(_DWORD *)v2 = &DynamicVectorClass<Cell>::`vftable'; /*0x68866e*/
  v25.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x688674*/
  Items = v25.Items; /*0x68867c*/
  v17 = v27; /*0x688684*/
  *(_DWORD *)&v2[16] = v26; /*0x688688*/
  *(_DWORD *)&v2[20] = v17; /*0x68868d*/
  if ( Items && v25.IsAllocated ) /*0x688698*/
    __3_YAXPAX_Z(Items); /*0x68869b*/
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
  ppv = (LPVOID)MEMORY[0xA8B270]; /*0x6886de*/
  v65 = 10; /*0x6886e9*/
  v64 = 0; /*0x6886f1*/
  if ( MEMORY[0xA8B258] ) /*0x6886f9*/
    ppv = (char *)ppv - 1; /*0x6886fb*/
  qmemcpy(v54, (char *)dword_A8B230 + 536, sizeof(v54)); /*0x68871d*/
  Debug::Log(); /*0x688724*/
  Debug::Log(); /*0x68873a*/
  v1 = 0; /*0x68874a*/
  v2 = 0; /*0x68874c*/
  for ( i = 0; i < dword_A83CF0; ++i ) /*0x688752*/
  {
    v4 = (_BYTE *)*((_DWORD *)dword_A83CE4 + i); /*0x68875a*/
    if ( v4[1749] ) /*0x68875d*/
    {
      v5 = 0; /*0x68876d*/
      v6 = dword_8871E0->AutocreateTime[1]; /*0x68876f*/
      if ( v6 <= 0 ) /*0x688777*/
      {
LABEL_9:
        v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 172))(v4); /*0x68878b*/
        ++v2; /*0x688795*/
      }
      else
      {
        v7 = (_DWORD *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x688779*/
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
  for ( j = 0; j < dword_A8E358; ++j ) /*0x6887a9*/
  {
    v9 = (_BYTE *)*((_DWORD *)dword_A8E34C + j); /*0x6887b1*/
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
  if ( dword_A80238 > 0 ) /*0x68881f*/
  {
LABEL_16:
    v12 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v11]; /*0x688825*/
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
    if ( dword_A83CF0 <= 0 ) /*0x6888a9*/
      goto LABEL_35; /*0x6888a9*/
    v16 = v69; /*0x6888af*/
    while ( 1 ) /*0x6888b9*/
    {
      v17 = *((_DWORD *)dword_A83CE4 + v14); /*0x6888b9*/
      if ( *(_BYTE *)(v17 + 1749) /*0x6888e2*/
        && *(_DWORD *)(v17 + 1588) <= *((_DWORD *)ppv + 117)
        && (v15 & *(_DWORD *)(v17 + 1740)) != 0 )
      {
        v18 = 0; /*0x6888ea*/
        v19 = dword_8871E0->AutocreateTime[1]; /*0x6888ec*/
        if ( v19 > 0 ) /*0x6888f4*/
        {
          v20 = (_DWORD *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x6888f6*/
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
      if ( ++v14 >= dword_A83CF0 ) /*0x688956*/
      {
        v10 = 0; /*0x68895c*/
LABEL_35:
        if ( dword_A8E358 > 0 ) /*0x688964*/
        {
          v22 = v75; /*0x68896a*/
          do /*0x688974*/
          {
            v23 = *((_DWORD *)dword_A8E34C + v10); /*0x688974*/
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
          while ( v10 < dword_A8E358 ); /*0x688974*/
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
          v25 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v84 - 1); /*0x688a08*/
          *((_BYTE *)v85 + v25) = 1; /*0x688a0d*/
          v59 = 1; /*0x688a19*/
          v26 = *((_DWORD *)v81 + v25); /*0x688a21*/
          v58 = v26; /*0x688a24*/
        }
        HouseClass::SetMapSeed(ppv, v26); /*0x688b25*/
        if ( MEMORY[0xA8B258] ) /*0x688b31*/
        {
          v39 = __2_YAPAXI_Z(0x8E8u); /*0x688b41*/
          v40 = ppv; /*0x688b51*/
          if ( v39 ) /*0x688b4a*/
          {
            v54[252] = ppv; /*0x688b5a*/
            v41 = BuildingClass::FindBySWType(ppv, (int)&dword_8871E0->SovietSurvivorDivisor[1]); /*0x688b5e*/
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
              if ( (*(_BYTE *)dword_A8B230 & 0x10) != 0 ) /*0x688bfb*/
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
                v49 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v77 - 1); /*0x688ca2*/
                v47 = *((_DWORD *)v74 + v49); /*0x688cab*/
              }
            }
            else
            {
              v48 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v71 - 1); /*0x688c7d*/
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
              if ( (*(_DWORD *)dword_A8B230 & 0x200) != 0 ) /*0x688d68*/
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
        if ( v11 >= dword_A80238 ) /*0x688e42*/
          break; /*0x688e42*/
        goto LABEL_16; /*0x688e42*/
      }
    }
  }
  v54[252] = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 0xFFFF); /*0x688e48*/
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
int __fastcall FindInfantryDeployPosition(int *a1, __int16 *a2, int a3)
{
  __int16 *v3; // esi
  Object *v5; // eax
  int ClosestObjectCell; // eax
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
  __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  int v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  Object *v25; // eax
  int v26; // eax
  int v27; // eax
  __int16 v28[2]; // [esp+10h] [ebp-5Ch] BYREF
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
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, &v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
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
    v29 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = *v3; /*0x689006*/
      v14 = v3[1]; /*0x689009*/
      v15 = *(_DWORD *)&stru_87F5F0.__pad_58[708]; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(_DWORD *)&stru_87F5F0.__pad_58[712]; /*0x689017*/
      v32 = *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1; /*0x689025*/
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
      if ( v13 > *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1 ) /*0x689087*/
        v13 = *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1; /*0x689089*/
      if ( v13 < *(int *)&stru_87F5F0.__pad_58[708] ) /*0x68908d*/
        LOWORD(v13) = *(_WORD *)&stru_87F5F0.__pad_58[708]; /*0x68908f*/
      if ( v14 > v32 ) /*0x689097*/
        v14 = v32; /*0x689099*/
      if ( v14 < *(int *)&stru_87F5F0.__pad_58[712] ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)&stru_87F5F0.__pad_58[712]; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      *(_DWORD *)v28 = v31; /*0x6890b4*/
      if ( v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1; /*0x6890d0*/
        v39 = *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1; /*0x6890e5*/
        v32 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6890fe*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x68910a*/
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
        v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x68913d*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x689156*/
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
        *(_DWORD *)v28 = v33; /*0x689188*/
      }
      if ( v18 == *v3 && v28[1] == v3[1] ) /*0x6891a4*/
        v36 = 1; /*0x6891a6*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v28, 1) ) /*0x6891ba*/
      {
        if ( !v36 ) /*0x6891cf*/
        {
          v42 = 0; /*0x6891e6*/
          v43 = 0; /*0x6891ea*/
          v25 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x6891ee*/
          v26 = Object::FindClosestObjectCell(v25, &v42, 0, 0); /*0x6891f5*/
          if ( !v26 /*0x689218*/
            || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
            && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
          {
            Coord::Subtract((Coord *)v45, (v28[0] << 8) + 128, (v28[1] << 8) + 128, 0); /*0x68923d*/
            v27 = Cell::GetGroundHeight(v45); /*0x68924c*/
            Coord::Subtract((Coord *)v46, (v28[0] << 8) + 128, (v28[1] << 8) + 128, v27); /*0x689274*/
            if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
              return 1; /*0x68928b*/
          }
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
char __thiscall ScenarioClass::SaveLoad_Prefix(ScenarioClass *this, int *dropshipUnitCounts)
{
  int *v3; // ebx
  int Ticks; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // esi
  int v8; // eax
  int i; // ebp
  int v10; // eax
  int j; // ebp
  int v12; // eax
  int k; // ebp
  int v14; // eax
  bool v16; // [esp+71h] [ebp-1h]

  v3 = &this->elapsedTimer[1]; /*0x68931c*/
  Debug::Log(); /*0x689339*/
  v16 = *v3 == -1; /*0x68934b*/
  if ( *v3 != -1 ) /*0x68934f*/
  {
    Ticks = Timer::GetTicks(); /*0x68935b*/
    v5 = this->pauseTimer[0]; /*0x689362*/
    v6 = Ticks - *v3; /*0x689365*/
    *v3 = -1; /*0x689367*/
    this->pauseTimer[0] = v6 + v5; /*0x68936f*/
  }
  v7 = dropshipUnitCounts; /*0x689372*/
  (*(void (__stdcall **)(int *, ScenarioClass *, int, _DWORD))(*dropshipUnitCounts + 16))( /*0x689381*/
    dropshipUnitCounts,
    this,
    14144,
    0);
  v8 = *v7; /*0x68938a*/
  dropshipUnitCounts = (int *)this->dropshipUnitCounts; /*0x689396*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x68939a*/
  for ( i = 0; i < (int)dropshipUnitCounts; ++i ) /*0x6893a5*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->allowableUnitsCount + 4 * i, 4, 0); /*0x6893b8*/
  v10 = *v7; /*0x6893ca*/
  dropshipUnitCounts = (int *)this->blue; /*0x6893d6*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x6893da*/
  for ( j = 0; j < (int)dropshipUnitCounts; ++j ) /*0x6893e5*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->ambientTarget + 4 * j, 4, 0); /*0x6893f8*/
  v12 = *v7; /*0x68940a*/
  dropshipUnitCounts = (int *)this->ionGround; /*0x689416*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x68941a*/
  for ( k = 0; k < (int)dropshipUnitCounts; ++k ) /*0x689425*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->ionRed + 4 * k, 4, 0); /*0x689438*/
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
char __thiscall ScenarioClass::SetGlobalToByID(ScenarioClass *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x32 ) /*0x68967a*/
    return 0; /*0x6896b2*/
  v3 = this->globalVariables[40 * a2 + 40 + a2]; /*0x689684*/
  if ( v3 != a3 ) /*0x689698*/
  {
    this->globalVariables[40 * a2 + 40 + a2] = a3; /*0x68969a*/
    this->variablesChanged = 1; /*0x68969e*/
    HouseClass::UpdateAllTypes((HouseClass *)a2); /*0x6896a5*/
  }
  return v3; /*0x6896ae*/
}



// ==== 0x006896C0  ScenarioClass::SetCountryFlag  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetCountryFlag(ScenarioClass *this, const char *a2, char a3)
{
  int v3; // edi
  char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x6896c4*/
  for ( i = this->globalVariables; strcmp(a2, i); i += 41 ) /*0x6896c6*/
  {
    if ( ++v3 >= 50 ) /*0x689706*/
      return 1; /*0x689706*/
  }
  if ( v3 == -1 ) /*0x689714*/
    return 1; /*0x68970e*/
  if ( (unsigned int)v3 >= 0x32 ) /*0x689719*/
    return 0; /*0x689753*/
  v6 = this->globalVariables[40 * v3 + 40 + v3]; /*0x689721*/
  if ( v6 != a3 ) /*0x689735*/
  {
    this->globalVariables[40 * v3 + 40 + v3] = a3; /*0x689737*/
    this->variablesChanged = 1; /*0x689739*/
    HouseClass::UpdateAllTypes((HouseClass *)v3); /*0x689742*/
  }
  return v6; /*0x689708*/
}



// ==== 0x00689760  ScenarioClass::GetGlobalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetGlobalStateByID(ScenarioClass *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 > 0x31 ) /*0x689766*/
    return 0; /*0x689784*/
  *a3 = this->globalVariables[40 * a2 + 40 + a2]; /*0x68977d*/
  return 1; /*0x689781*/
}



// ==== 0x00689790  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689790(ObjectClass *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = (char *)this + 7304; strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *((_BYTE *)this + 40 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}



// ==== 0x00689820  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_689820(ObjectClass *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = (char *)this + 7304; strcmp(a2, i); i += 41 ) /*0x68982a*/
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
char __thiscall ScenarioClass::SetLocalToByID(ScenarioClass *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x64 ) /*0x68991a*/
    return 0; /*0x689952*/
  v3 = *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2); /*0x689924*/
  if ( v3 != a3 ) /*0x689938*/
  {
    *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2) = a3; /*0x68993a*/
    this->variablesChanged = 1; /*0x68993e*/
    TriggerActionQueue::ProcessAll((TriggerActionQueue *)a2); /*0x689945*/
  }
  return v3; /*0x68994e*/
}



// ==== 0x00689960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689960(ObjectClass *this, const char *a2, char a3)
{
  TriggerActionQueue *v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == (TriggerActionQueue *)-1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( (unsigned int)v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = (char)v3[40 * (_DWORD)v3 + 9394 + (_DWORD)this]; /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    v3[40 * (_DWORD)v3 + 9394 + (_DWORD)this] = (TriggerActionQueue)a3; /*0x6899d7*/
    *((_BYTE *)this + 13482) = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll(v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}



// ==== 0x00689A00  ScenarioClass::GetLocalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetLocalStateByID(ScenarioClass *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 >= 0x64 ) /*0x689a06*/
    return 0; /*0x689a24*/
  *a3 = *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2); /*0x689a1d*/
  return 1; /*0x689a21*/
}



// ==== 0x00689A30  ObjectClass::method_689A30  this=ObjectClass  sig=csp ====
char __thiscall sub_689A30(ObjectClass *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *((_BYTE *)this + 40 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}



// ==== 0x00689AC0  ObjectClass::method_689AC0  this=ObjectClass  sig=csp ====
int __thiscall sub_689AC0(ObjectClass *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}



// ==== 0x00689B20  ScenarioClass::ReadLocalVariables  this=ScenarioClass  sig=csp ====
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
    strcpy((char *)(v7 + 9354), strtok(String, Str)); /*0x689bff*/
    v8 = strtok(0, Str); /*0x689c0a*/
    if ( v8 ) /*0x689c14*/
      *(_BYTE *)(v7 + 9394) = atoi(v8) != 0; /*0x689c24*/
    if ( ++v11 >= KeyCount ) /*0x689c39*/
      break; /*0x689c39*/
    v2 = this; /*0x689b8c*/
  }
  return 1; /*0x689c41*/
}



// ==== 0x00689C60  ScenarioClass::ReadWaypoint  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::ReadWaypoint(ScenarioClass *this, char *a2)
{
  int v3; // edi
  char *pad_248A; // esi
  CHAR v6[12]; // [esp+10h] [ebp-8Ch] BYREF
  CHAR Source[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int *)a2, (int)g_INI_Key_VariableNames, 0); /*0x689c7d*/
  v3 = 0; /*0x689c88*/
  pad_248A = this->__pad_248A; /*0x689c8a*/
  do /*0x689cdb*/
  {
    if ( *pad_248A ) /*0x689c90*/
    {
      wsprintfA(v6, "%d", v3); /*0x689ca0*/
      wsprintfA(Source, "%s,%d", pad_248A, pad_248A[40] != 0); /*0x689cb8*/
      INIClass::SetString(a2, g_INI_Key_VariableNames, v6, Source); /*0x689ccf*/
    }
    ++v3; /*0x689cd4*/
    pad_248A += 41; /*0x689cd5*/
  }
  while ( v3 < 100 ); /*0x689cdb*/
  return 1; /*0x689cdd*/
}



// ==== 0x00689D30  PreviewClass::RenderMapPreview  this=PreviewClass  sig=csp ====
char __thiscall PreviewClass::RenderMapPreview(PreviewClass *this, _DWORD *a2)
{
  PreviewClass *v3; // edi
  PreviewClass *v4; // eax
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

  v3 = this + 552; /*0x689d40*/
  *((_DWORD *)this + 1099) = -1; /*0x689d46*/
  *((_DWORD *)this + 1100) = -1; /*0x689d4c*/
  *((_DWORD *)this + 1101) = -1; /*0x689d52*/
  *((_DWORD *)this + 1102) = -1; /*0x689d58*/
  *((_DWORD *)this + 1103) = -1; /*0x689d5e*/
  v4 = this + 552; /*0x689d64*/
  v5 = 8; /*0x689d66*/
  do /*0x689d74*/
  {
    *(_DWORD *)v4->__pad_0 = 0; /*0x689d6b*/
    v4->PreviewClass_field_0x04 = 0; /*0x689d6d*/
    ++v4; /*0x689d70*/
    --v5; /*0x689d73*/
  }
  while ( v5 ); /*0x689d74*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x689d8d*/
                    (bool *)a2,
                    g_INI_Key_Header,
                    (unsigned __int8 *)g_INI_Key_StartX,
                    *((_DWORD *)this + 1099));
  v7 = *((_DWORD *)this + 1100); /*0x689d92*/
  *((_DWORD *)this + 1099) = Int_Overwrite; /*0x689d98*/
  v8 = INIClass::ReadInt_Overwrite((bool *)a2, g_INI_Key_Header, (unsigned __int8 *)g_INI_Key_StartY, v7); /*0x689dab*/
  v20 = *((_DWORD *)this + 1101); /*0x689db8*/
  *((_DWORD *)this + 1100) = v8; /*0x689dc3*/
  *((_DWORD *)this + 1101) = INIClass::ReadInt_Overwrite( /*0x689dce*/
                               (bool *)a2,
                               g_INI_Key_Header,
                               (unsigned __int8 *)&stru_82BA00.?[151],
                               v20);
  v9 = INIClass::ReadInt_Overwrite( /*0x689de7*/
         (bool *)a2,
         g_INI_Key_Header,
         (unsigned __int8 *)g_INI_Key_Height,
         *((_DWORD *)this + 1102));
  v10 = *((_DWORD *)this + 1103); /*0x689dec*/
  *((_DWORD *)this + 1102) = v9; /*0x689df2*/
  v11 = INIClass::ReadInt_Overwrite( /*0x689e05*/
          (bool *)a2,
          g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumberStartingPoints,
          v10);
  v21 = *((_DWORD *)this + 1145); /*0x689e12*/
  *((_DWORD *)this + 1103) = v11; /*0x689e1d*/
  v12 = INIClass::ReadInt_Overwrite( /*0x689e23*/
          (bool *)a2,
          g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumCoopHumanStartSpots,
          v21);
  v13 = *((_DWORD *)this + 1103); /*0x689e28*/
  *((_DWORD *)this + 1145) = v12; /*0x689e2e*/
  v14 = 0; /*0x689e34*/
  if ( v13 > 0 ) /*0x689e38*/
  {
    do /*0x689e7e*/
    {
      v15 = v14 + 1; /*0x689e3a*/
      sprintf(Buffer, "Waypoint%d", v14 + 1); /*0x689e48*/
      v16 = INIClass::ReadPoint2D_Overwrite((INIClass *)a2, &v22, g_INI_Key_Header, (int)Buffer, v3); /*0x689e62*/
      v17 = *v16; /*0x689e67*/
      v18 = v16[1]; /*0x689e69*/
      *(_DWORD *)v3->__pad_0 = v17; /*0x689e6c*/
      v3->PreviewClass_field_0x04 = v18; /*0x689e6e*/
      v14 = v15; /*0x689e77*/
      ++v3; /*0x689e79*/
    }
    while ( v15 < *((_DWORD *)this + 1103) ); /*0x689e7e*/
  }
  return 1; /*0x689e80*/
}



// ==== 0x00689E90  ScenarioClass::ReadMapINI  this=ScenarioClass  sig=csp ====
char __userpurge ScenarioClass::ReadMapINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  _VectorClass_PAVTechnoTypeClass *v4; // eax
  int *v5; // ebx
  int *Point2D_Overwrite; // eax
  int v7; // ecx
  int v8; // eax
  int BuildingTypeByName; // eax
  int v13; // eax
  _VectorClass_PAVTechnoTypeClass *TechnoTypeList; // eax
  int m_8; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  void *v20; // eax
  _VectorClass_PAVTechnoTypeClass *v21; // ebx
  _VectorClass_PAVTechnoTypeClass *v22; // ecx
  int v23; // eax
  _VectorClass_PAVTechnoTypeClass *v24; // ecx
  int v25; // eax
  _VectorClass_PAVTechnoTypeClass *v26; // ecx
  int v27; // edx
  int v28; // eax
  _VectorClass_PAVTechnoTypeClass *IntList; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  void *v35; // eax
  char Bool_Overwrite; // al
  char v37; // al
  char v38; // cl
  char v39; // al
  int Int_Overwrite; // eax
  int v41; // ... [36518 chars total]



// ==== 0x0068AD70  ScenarioClass::SaveToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveToINI(int this, char *a2, char a3)
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
  __int16 v24[2]; // [esp+28h] [ebp-E0h] BYREF
  int v25; // [esp+2Ch] [ebp-DCh] BYREF
  int v26[2]; // [esp+30h] [ebp-D8h] BYREF
  _DWORD v27[3]; // [esp+38h] [ebp-D0h] BYREF
  char Buffer[8]; // [esp+44h] [ebp-C4h] BYREF
  _BYTE v29[4]; // [esp+4Ch] [ebp-BCh] BYREF
  _BYTE v30[8]; // [esp+50h] [ebp-B8h] BYREF
  char v31[16]; // [esp+58h] [ebp-B0h] BYREF
  char Source[32]; // [esp+68h] [ebp-A0h] BYREF
  CHAR v33[128]; // [esp+88h] [ebp-80h] BYREF

  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, 0); /*0x68ad8d*/
  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, aCivevac); /*0x68ada0*/
  if ( strlen((const char *)&dword_A8B230[201].ptr_C) ) /*0x68adb8*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Briefing, (char *)&dword_A8B230[201].ptr_C); /*0x68adcd*/
  if ( strlen((const char *)&dword_A8B230[140].ptr_8 + 2) ) /*0x68ade5*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_UIName, (char *)&dword_A8B230[140].ptr_8 + 2); /*0x68adfb*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x68ae05*/
  v4 = 10000; /*0x68ae0a*/
  v26[0] = 10000; /*0x68ae16*/
  v23 = 0; /*0x68ae1a*/
  v21 = 0; /*0x68ae1e*/
  for ( i = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x68ae2b*/
        i;
        i = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], i + 18, 0) ) /*0x68ae3c*/
    {
      v6 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)i + 72))(i); /*0x68ae5c*/
      v7 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *, _DWORD))(*(_DWORD *)i + 72))(i, v29, *(_DWORD *)(v6 + 4)); /*0x68ae6c*/
      IsoCoord::ToScreenOffset(*v7, (int)v27, &v25, (int *)v24); /*0x68ae78*/
      v8 = *(_DWORD *)v24 / 30; /*0x68aeab*/
      if ( v25 / 60 < v4 ) /*0x68aeaf*/
        v4 = v25 / 60; /*0x68aeb1*/
      if ( v25 / 60 > v23 ) /*0x68aeb7*/
        v23 = v25 / 60; /*0x68aeb9*/
      if ( v8 < v26[0] ) /*0x68aec1*/
        v26[0] = *(_DWORD *)v24 / 30; /*0x68aec3*/
      if ( v8 > v21 ) /*0x68aecb*/
        v21 = *(_DWORD *)v24 / 30; /*0x68aecd*/
    }
  }
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_StartX, v4, 0); /*0x68aef4*/
  v9 = v26[0]; /*0x68aef9*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_StartY, v26[0], 0); /*0x68af0c*/
  INIClass::SetInt(a2, g_INI_Key_Header, &stru_82BA00.?[151], v23 - v4, 0); /*0x68af26*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_Height, v21 - v9, 0); /*0x68af40*/
  v10 = 0; /*0x68af58*/
  v11 = 0; /*0x68af5a*/
  v12 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x68af60*/
  do /*0x68af84*/
  {
    if ( v11 >= 0 && *v12 != dword_B05458 ) /*0x68af74*/
      ++v10; /*0x68af7c*/
    ++v11; /*0x68af7d*/
    ++v12; /*0x68af7e*/
  }
  while ( v11 < 8 ); /*0x68af84*/
  v22 = v10; /*0x68af95*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_NumberStartingPoints, v10, 0); /*0x68af99*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_NumCoopHumanStartSpots, *(_DWORD *)(this + 4580), 0); /*0x68afb3*/
  v13 = 0; /*0x68afb8*/
  do /*0x68b09b*/
  {
    v14 = v13 + 1; /*0x68afba*/
    sprintf(Buffer, "Waypoint%d", v13 + 1); /*0x68afc8*/
    if ( v13 >= v22 ) /*0x68afd6*/
    {
      v27[0] = 0; /*0x68b081*/
      v27[1] = 0; /*0x68b085*/
      INIEntry::Write2Integers(a2, g_INI_Key_Header, Buffer, v27); /*0x68b091*/
    }
    else
    {
      *(_DWORD *)v24 = *(void **)((char *)&dword_A8B230[44].ptr_0 + 4 * v13 + 2); /*0x68aff3*/
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x68b000*/
      v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15); /*0x68b011*/
      v17 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v15 + 72))(v15, v31, *(_DWORD *)(v16 + 4)); /*0x68b021*/
      IsoCoord::ToScreenOffset(*v17, (int)v30, &v25, &v23); /*0x68b02d*/
      v26[0] = v25 / 60; /*0x68b061*/
      v26[1] = v23 / 30; /*0x68b06a*/
      INIEntry::Write2Integers(a2, g_INI_Key_Header, Buffer, v26); /*0x68b074*/
    }
    v13 = v14; /*0x68b096*/
  }
  while ( v14 < 8 ); /*0x68b09b*/
  ScenarioClass::RevealMapForHouse((ScenarioClass *)this, a2); /*0x68b0a4*/
  INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, aNextscenario, (char *)(this + 4)); /*0x68b0bb*/
  INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, aAltnextscenari, (char *)(this + 264)); /*0x68b0d4*/
  INIClass::SetWideAsHex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Name, (wchar_t *)(this + 4960)); /*0x68b0ee*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aNewiniformat, 4, 0); /*0x68b104*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aCarryovercap, *(_DWORD *)(this + 7296) / 100, 0); /*0x68b131*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aEndofgame, *(_BYTE *)(this + 13484)); /*0x68b14b*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aSkipscore, *(_BYTE *)(this + 13486)); /*0x68b164*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aOnetimeonly, *(_BYTE *)(this + 13487)); /*0x68b17e*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aSkipmapselect, *(_BYTE *)(this + 13488)); /*0x68b198*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Official, 1); /*0x68b1ad*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aIgnoreglobalai, *(_BYTE *)(this + 13492)); /*0x68b1c7*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTruckcrate, *(_BYTE *)(this + 13489)); /*0x68b1e0*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTraincrate, *(_BYTE *)(this + 13477)); /*0x68b1fa*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aPercent, *(_DWORD *)(this + 7300), 0); /*0x68b216*/
  ScenarioClass::SaveTypeNameListToINI(a2, (unsigned __int8 *)&stru_82BA00.?, aAllowableunits, this + 13524); /*0x68b22f*/
  ScenarioClass::SaveIntListToINI(a2, (unsigned __int8 *)&stru_82BA00.?, aAllowableunitm, this + 13552); /*0x68b249*/
  ScenarioClass::loadMapData(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Theme, *(_DWORD *)(this + 7280)); /*0x68b263*/
  if ( !a3 ) /*0x68b271*/
  {
    strcpy(Source, (const char *)&dword_A83D4C[134].Object_field_0x34); /*0x68b2a1*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, Source); /*0x68b2b7*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Intro, *(_DWORD *)(this + 5172)); /*0x68b2d1*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Brief, *(_DWORD *)(this + 5176)); /*0x68b2ea*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, off_83E188, *(_DWORD *)(this + 5180)); /*0x68b304*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Lose, *(_DWORD *)(this + 5184)); /*0x68b31e*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Action, *(_DWORD *)(this + 5188)); /*0x68b337*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, aPostscore, *(_DWORD *)(this + 5192)); /*0x68b351*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, aPremapselect, *(_DWORD *)(this + 5196)); /*0x68b36b*/
    INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aCarryovermoney, *(double *)(this + 7288)); /*0x68b38c*/
    INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTimerinherit, *(_BYTE *)(this + 13485)); /*0x68b3a5*/
    INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aFillsilos, *(_BYTE *)(this + 13490)); /*0x68b3bf*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aStartingdropsh, *(_DWORD *)(this + 13520), 0); /*0x68b3db*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aHomecell, *(_DWORD *)(this + 524), 0); /*0x68b3f6*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aAlthomecell, *(_DWORD *)(this + 528), 0); /*0x68b412*/
  }
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aMultiplayeronl, *(unsigned __int8 *)(this + 13500), 0); /*0x68b430*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTiberiumgrowth, *(_BYTE *)(this + 13478)); /*0x68b449*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aVeingrowthenab, *(_BYTE *)(this + 13479)); /*0x68b463*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aIcegrowthenabl, *(_BYTE *)(this + 13480)); /*0x68b47d*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTiberiumdeatht, *(_BYTE *)(this + 13491)); /*0x68b496*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aFreeradar, *(_BYTE *)(this + 13476)); /*0x68b4b0*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aInittime, *(_DWORD *)(this + 13724), 0); /*0x68b4cc*/
  INIClass::ClearSection((int *)a2, (int)g_INI_Key_VariableNames, 0); /*0x68b4dc*/
  v18 = 0; /*0x68b4e1*/
  v19 = this + 9354; /*0x68b4e3*/
  do /*0x68b540*/
  {
    if ( *(_BYTE *)v19 ) /*0x68b4e9*/
    {
      wsprintfA((LPSTR)v27, "%d", v18); /*0x68b4f9*/
      wsprintfA(v33, "%s,%d", (const char *)v19, *(_BYTE *)(v19 + 40) != 0); /*0x68b518*/
      INIClass::SetString(a2, g_INI_Key_VariableNames, (char *)v27, v33); /*0x68b534*/
    }
    ++v18; /*0x68b539*/
    v19 += 41; /*0x68b53a*/
  }
  while ( v18 < 100 ); /*0x68b540*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimeeasy, *(_DWORD *)(this + 13732)); /*0x68b555*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimemedium, *(_DWORD *)(this + 13736)); /*0x68b56d*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimehard, *(_DWORD *)(this + 13740)); /*0x68b585*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aUnderpartitle, (char *)(this + 13744)); /*0x68b59d*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aUnderparmessag, (char *)(this + 13775)); /*0x68b5b5*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aOverpartitle, (char *)(this + 13806)); /*0x68b5cd*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aOverparmessage, (char *)(this + 13837)); /*0x68b5e5*/
  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, 0); /*0x68b5f3*/
  INIClass::SetDouble( /*0x68b616*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13608) * 0.01);
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, &stru_820320.?[5], (double)*(int *)(this + 13620) * 0.01); /*0x68b639*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, &stru_820320.?[9], (double)*(int *)(this + 13624) * 0.01); /*0x68b65c*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Blue, (double)*(int *)(this + 13628) * 0.01); /*0x68b67f*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Ground, (double)*(int *)(this + 13632) * 0.001); /*0x68b6a2*/
  INIClass::SetDouble( /*0x68b6c5*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_81AF8C.?[17],
    (double)*(int *)(this + 13636) * 0.001);
  INIClass::SetDouble( /*0x68b6e8*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13640) * 0.01);
  INIClass::SetDouble( /*0x68b70b*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13644) * 0.01);
  INIClass::SetDouble( /*0x68b72e*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13648) * 0.01);
  INIClass::SetDouble( /*0x68b751*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13652) * 0.01);
  INIClass::SetDouble( /*0x68b774*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13656) * 0.001);
  INIClass::SetDouble( /*0x68b797*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?[6],
    (double)*(int *)(this + 13660) * 0.001);
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorambie, (double)*(int *)(this + 13692) * 0.01); /*0x68b7ba*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorred, (double)*(int *)(this + 13696) * 0.01); /*0x68b7dd*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorgreen, (double)*(int *)(this + 13700) * 0.01); /*0x68b800*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorblue, (double)*(int *)(this + 13704) * 0.01); /*0x68b823*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorgroun, (double)*(int *)(this + 13708) * 0.001); /*0x68b846*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorlevel, (double)*(int *)(this + 13712) * 0.001); /*0x68b869*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorambie_0, (double)*(int *)(this + 13716) * 0.001); /*0x68b88c*/
  return 1; /*0x68b891*/
}



// ==== 0x0068B8A0  ObjectClass::method_68B8A0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_68B8A0(ObjectClass *this)
{
  ObjectClass *v1; // eax
  DWORD v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int64 result; // rax
  int v6; // kr00_4
  char v7; // [esp+3h] [ebp-15h] BYREF
  ObjectClass *v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v11; // [esp+10h] [ebp-8h] BYREF

  v8 = this; /*0x68b8a3*/
  v9 = 0; /*0x68b8b3*/
  GetVersionString(&v10, &v7, 0, 0); /*0x68b8bb*/
  if ( v10 > 5 ) /*0x68b8c5*/
  {
    LOWORD(v1) = Math::RoundToInt((double)(int)v8 * 0.8); /*0x68b8d1*/
    v8 = v1; /*0x68b8d6*/
  }
  v2 = sub_5CAF70((ObjectClass *)&v11); /*0x68b8de*/
  v3 = v11; /*0x68b8e3*/
  if ( v2 || (_DWORD)v11 ) /*0x68b8ed*/
  {
    v11 = v2; /*0x68b8ff*/
    LOWORD(v4) = Math::RoundToInt(((double)v3 * 4294967296.0 + (double)v2) * 0.000001); /*0x68b91d*/
    v9 = v4; /*0x68b922*/
  }
  v6 = Math::RoundToInt((double)(int)v8 * 200.0 / (double)v9); /*0x68b934*/
  WORD2(result) = HIWORD(v6); /*0x68b934*/
  LOWORD(result) = v6; /*0x68b934*/
  return result; /*0x68b939*/
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
    if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)dword_A8ED84 - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *(_DWORD *)(this + 4632); /*0x68baf8*/
  v15 = *(_DWORD *)(this + 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)dword_A8ED84 - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *(_DWORD *)(this + 4644); /*0x68bb23*/
  v17 = *(_DWORD *)(this + 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)dword_A8ED84 - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)dword_A8ED84 - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *(_DWORD *)(this + 4656); /*0x68bb4e*/
  v19 = *(_DWORD *)(this + 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)dword_A8ED84 - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)dword_A8ED84 - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *(_DWORD *)(this + 4668); /*0x68bb79*/
  v21 = *(_DWORD *)(this + 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)dword_A8ED84 - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)dword_A8ED84 - v20; /*0x68bb96*/
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



// ==== 0x0068BCB0  AbstractClass::updateAITimer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::updateAITimer(AbstractClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 133) + 1; /*0x68bcb6*/
  *((_DWORD *)this + 133) = result; /*0x68bcb7*/
  return result; /*0x68bcbd*/
}



// ==== 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::Get_Waypoint_Location(char *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(this + 4 * a3 + 1586); /*0x68bccf*/
  return a2; /*0x68bcd1*/
}



// ==== 0x0068BCE0  ScenarioClass::GetCellFromArray  this=ScenarioClass  sig=csp ====
void *__thiscall ScenarioClass::GetCellFromArray(ScenarioClass *this, int a2)
{
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->waypoints[4 * a2]); /*0x68bcf6*/
}



// ==== 0x0068BD00  Cell::GetWorldCoords  this=Cell  sig=csp ====
_DWORD *__thiscall Cell::GetWorldCoords(Cell *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 2 * a3 + 793); /*0x68bd1b*/
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
int __thiscall ScenarioClass::Is_Waypoint_Valid(char *this, unsigned int a2)
{
  int result; // eax

  result = a2; /*0x68bd80*/
  LOBYTE(result) = a2 <= 0x2BD /*0x68bdb6*/
                && (*((_WORD *)this + 2 * a2 + 793) != (_WORD)dword_B05458
                 || (LOWORD(result) = *((_WORD *)this + 2 * a2 + 794), (_WORD)result != HIWORD(dword_B05458)));
  return result; /*0x68bdb3*/
}



// ==== 0x0068BDC0  ScenarioClass::ReadWaypoints  this=ScenarioClass  sig=csp ====
__int16 __thiscall ScenarioClass::ReadWaypoints(ScenarioClass *this, int a2)
{
  int v3; // esi
  __int16 *waypoints; // edi
  signed int Int_Overwrite; // eax
  signed int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  CHAR v10[20]; // [esp+10h] [ebp-14h] BYREF
  bool *v11; // [esp+28h] [ebp+4h]

  v3 = 0; /*0x68bdcb*/
  waypoints = (__int16 *)this->waypoints; /*0x68bdcd*/
  do /*0x68be7f*/
  {
    wsprintfA(v10, "%d", v3); /*0x68bdde*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, g_INI_Key_Waypoints, (unsigned __int8 *)v10, 0); /*0x68bdf5*/
    v6 = Int_Overwrite; /*0x68bdfa*/
    if ( Int_Overwrite ) /*0x68bdfe*/
    {
      LOWORD(v11) = Int_Overwrite % 1000; /*0x68be19*/
      Int_Overwrite = (unsigned int)((unsigned __int64)(274877907LL * Int_Overwrite) >> 32) >> 31; /*0x68be25*/
      HIWORD(v11) = v6 / 1000; /*0x68be2a*/
      *(_DWORD *)waypoints = v11; /*0x68be33*/
    }
    else
    {
      *(_DWORD *)waypoints = dword_B05458; /*0x68be06*/
    }
    if ( v3 >= 0 ) /*0x68be3f*/
    {
      if ( *waypoints != (_WORD)dword_B05458 /*0x68be58*/
        || (LOWORD(Int_Overwrite) = waypoints[1], (_WORD)Int_Overwrite != HIWORD(dword_B05458)) )
      {
        v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], waypoints); /*0x68be60*/
        v8 = v7[80]; /*0x68be65*/
        Int_Overwrite = (signed int)(v7 + 80); /*0x68be6b*/
        *(_DWORD *)Int_Overwrite = v8 | 4; /*0x68be73*/
      }
    }
    ++v3; /*0x68be75*/
    waypoints += 2; /*0x68be76*/
  }
  while ( v3 < 702 ); /*0x68be7f*/
  return Int_Overwrite; /*0x68be85*/
}



// ==== 0x0068BE90  ScenarioClass::Write_Waypoints  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Write_Waypoints(ScenarioClass *this, char *a2)
{
  char result; // al
  int v4; // edi
  char *waypoints; // esi
  CHAR v6[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::ClearSection((int *)a2, (int)g_INI_Key_Waypoints, 0); /*0x68bea7*/
  v4 = 0; /*0x68beb2*/
  waypoints = this->waypoints; /*0x68beb4*/
  do /*0x68bf16*/
  {
    if ( *(_DWORD *)waypoints != dword_B05458 ) /*0x68bec4*/
    {
      wsprintfA(v6, "%d", v4); /*0x68bede*/
      result = INIClass::SetInt( /*0x68bf07*/
                 a2,
                 g_INI_Key_Waypoints,
                 v6,
                 *(__int16 *)waypoints + 1000 * *((__int16 *)waypoints + 1),
                 0);
    }
    ++v4; /*0x68bf0c*/
    waypoints += 4; /*0x68bf0d*/
  }
  while ( v4 < 702 ); /*0x68bf16*/
  return result; /*0x68bf18*/
}



// ==== 0x0068BF30  ScenarioClass::Set_Default_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Default_Waypoint(ScenarioClass *this, int a2)
{
  *(_DWORD *)&this->waypoints[4 * a2] = dword_B05458; /*0x68bf3a*/
  return a2; /*0x68bf41*/
}



// ==== 0x0068BF50  ScenarioClass::Set_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Waypoint(char *this, int a2, int a3)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = a3; /*0x68bf58*/
  return a3; /*0x68bf5f*/
}



// ==== 0x0068C030  BuildingType::Init  this=ScenarioClass  sig=csp ====
int __thiscall BuildingType::Init(BuildingType *this, unsigned int a2)
{
  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *((_DWORD *)this + a2 + 1120); /*0x68c03d*/
}



// ==== 0x0068C050  ObjectClass::Map_Setup  this=ObjectClass  sig=csp ====
void Map_Setup(ObjectClass *this)
{
  int v1; // edi
  int v2; // ecx
  int v3; // ecx
  int v4; // esi
  int Capacity; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  VectorClass v14; // [esp+8h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x68c059*/
  if ( *(int *)&FootClass_Array.? > 0 ) /*0x68c05d*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412); /*0x68c069*/
    if ( v2 > 0 && v2 >= *(int *)&FootClass_Array.? ) /*0x68c079*/
    {
      VectorClass::Construct(&v14, 0, 0); /*0x68c086*/
      v3 = 10; /*0x68c091*/
      v14.ptr_0 = &DynamicVectorClass<int>::`vftable'; /*0x68c096*/
      v16 = 10; /*0x68c09e*/
      v15 = 0; /*0x68c0a2*/
      v4 = 0; /*0x68c0ac*/
      if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412) > 0 ) /*0x68c0b0*/
      {
        Capacity = v14.Capacity; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v15 < Capacity ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v14.IsAllocated || !Capacity) && v3 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
LABEL_14:
          if ( ++v4 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v3 = v16; /*0x68c0b8*/
        }
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v14.ptr_0 + 2))(&v14, v3 + Capacity, 0) ) /*0x68c0df*/
        {
LABEL_12:
          v6 = v15++; /*0x68c0e6*/
          *((_DWORD *)v14.Items + v6) = v4; /*0x68c0f5*/
        }
        Capacity = v14.Capacity; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
LABEL_15:
      v7 = 0; /*0x68c10b*/
      if ( *(int *)&FootClass_Array.? > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v15 - 1); /*0x68c12f*/
          if ( v8 < v15 ) /*0x68c13a*/
          {
            v9 = v8; /*0x68c13d*/
            if ( v8 < --v15 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v9; /*0x68c14b*/
                *((_DWORD *)v14.Items + v9 - 1) = *((_DWORD *)v14.Items + v9); /*0x68c14f*/
              }
              while ( v9 < v15 ); /*0x68c159*/
            }
          }
          v10 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3344); /*0x68c164*/
          if ( v8 + 1 <= v10 ) /*0x68c16c*/
            break; /*0x68c16c*/
          v11 = v8 - v10; /*0x68c16e*/
          v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3372); /*0x68c170*/
          if ( v11 + 1 <= v12 ) /*0x68c17b*/
          {
            v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3360) + 4 * v11); /*0x68c19a*/
          }
          else
          {
            v8 = v11 - v12; /*0x68c183*/
            if ( v8 + 1 <= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3400) ) /*0x68c18a*/
            {
              v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3388); /*0x68c18c*/
LABEL_25:
              v1 = *(_DWORD *)(v13 + 4 * v8); /*0x68c1a5*/
            }
          }
          if ( v1 ) /*0x68c1aa*/
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * v7) + 1780) = v1; /*0x68c1b5*/
          if ( ++v7 >= *(int *)&FootClass_Array.? ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3332); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
LABEL_29:
      v14.ptr_0 = &VectorClass<int>::`vftable'; /*0x68c1ca*/
      if ( v14.Items ) /*0x68c1d9*/
      {
        if ( v14.IsAllocated ) /*0x68c1e1*/
          __3_YAXPAX_Z(v14.Items); /*0x68c1e4*/
      }
    }
  }
}



// ==== 0x0068C200  TechnoTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TechnoTypeVector::Construct(TechnoTypeVector *this, int a2, int a3)
{
  this->TechnoTypeVector_field_0x04 = 0; /*0x68c209*/
  this->Capacity = a2; /*0x68c210*/
  this->IsInitialized = 1; /*0x68c213*/
  this->IsAllocated = 0; /*0x68c217*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x68c21b*/
  if ( a2 ) /*0x68c221*/
  {
    if ( a3 ) /*0x68c229*/
    {
      this->TechnoTypeVector_field_0x04 = a3; /*0x68c22b*/
    }
    else
    {
      this->TechnoTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x68c23c*/
      this->IsAllocated = 1; /*0x68c23f*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<TechnoTypeClass *>::`vftable'; /*0x68c243*/
  *((_DWORD *)this + 5) = 10; /*0x68c249*/
  this->Items = 0; /*0x68c250*/
  return this->__pad_0; /*0x68c259*/
}



// ==== 0x0068C260  ObjectClass::DynamicVector_PushBack  this=ObjectClass  sig=csp ====
char __thiscall DynamicVector_PushBack(ObjectClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x68c263*/
  if ( this->? >= (int)ptr_8 ) /*0x68c26b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x68c276*/
      return 0; /*0x68c276*/
    abstractFlags = this->?; /*0x68c278*/
    if ( abstractFlags <= 0 /*0x68c288*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x68c28f*/
    }
  }
  uniqueId = this->?; /*0x68c295*/
  ptr_4 = this->?; /*0x68c298*/
  this->? = uniqueId + 1; /*0x68c29e*/
  ptr_4[uniqueId] = *a2; /*0x68c2a8*/
  return 1; /*0x68c291*/
}



// ==== 0x0068C2B0  Multiplayer::CopyDataArray  this=Multiplayer  sig=csp ====
_DWORD *__thiscall Multiplayer::CopyDataArray(Multiplayer *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Multiplayer *)a2 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (__thiscall **)(Multiplayer *))(this->u8_C)(this); /*0x68c2bf*/
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
  dword_B054D4 = 0; /*0x68c337*/
  dword_B054D8 = 0; /*0x68c33c*/
  byte_B054DC = 1; /*0x68c341*/
  byte_B054DD = 0; /*0x68c348*/
  stru_B054D0 = (int)&DynamicVectorClass<ColorScheme *>::`vftable'; /*0x68c34d*/
  dword_B054E4 = 10; /*0x68c357*/
  dword_B054E0 = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}



// ==== 0x0068C370  sub_68C370  this=-  sig=ida-proto ====
void __cdecl sub_68C370()
{
  stru_B054D0 = (int)&VectorClass<ColorScheme *>::`vftable'; /*0x68c378*/
  if ( dword_B054D4 && byte_B054DD ) /*0x68c38c*/
  {
    __3_YAXPAX_Z(dword_B054D4); /*0x68c38f*/
    dword_B054D4 = 0; /*0x68c397*/
  }
  byte_B054DD = 0; /*0x68c39d*/
  dword_B054D8 = 0; /*0x68c3a3*/
}



// ==== 0x0068C3B0  FontClass::CreateGlyphColor  this=FontClass  sig=csp ====
int __userpurge FontClass::CreateGlyphColor@<eax>(
        char *a1@<ecx>,
        const void *a2@<edx>,
        double a3@<st0>,
        int a4,
        Block *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char v12; // bl
  int v13; // edx
  int v14; // esi
  int v15; // eax
  __int16 v16; // cx
  char v17; // dl
  char *v18; // eax
  int v19; // eax
  Color v21; // [esp+10h] [ebp-28h] BYREF
  int v22; // [esp+14h] [ebp-24h] BYREF
  double v23; // [esp+18h] [ebp-20h]
  double v24; // [esp+20h] [ebp-18h]

  v12 = *a1; /*0x68c3bf*/
  v13 = (unsigned __int8)a1[2]; /*0x68c3c8*/
  v22 = (unsigned __int8)a1[1]; /*0x68c3d0*/
  v21.Color_field_00 = v13; /*0x68c3d4*/
  Block::Copy(a5, a2); /*0x68c3d8*/
  __asm { fild [esp+38h+var_24] } /*0x68c3dd*/
  v14 = 0; /*0x68c3e1*/
  LODWORD(v23) = 0; /*0x68c3e3*/
  __asm /*0x68c3e7*/
  {
    fstp [esp+38h+var_10]
    fild [esp+38h+var_28.Color_field_00]
    fstp [esp+38h+var_8]
  }
  do /*0x68c4a7*/
  {
    __asm { fild dword ptr [esp+38h+var_20] } /*0x68c3f3*/
    __asm
    {
      fld st
      fmul ds:dbl_7F0E98
      fadd ds:dbl_7F0E90
      fstp [esp+38h+var_20]
      fmul ds:dbl_7F0E88
      fadd ds:dbl_7F0E80
      fstp [esp+38h+var_18]
    }
    if ( !v14 ) /*0x68c41b*/
      v23 = 0.1963495408493621; /*0x68c41d*/
    Math::SinCos(v24); /*0x68c437*/
    __asm { fmul [esp+40h+var_10] } /*0x68c43c*/
    BYTE1(v21.Color_field_00) = Math::RoundToInt(a3); /*0x68c449*/
    LOBYTE(v21.Color_field_00) = v12; /*0x68c453*/
    Math::ArcTan2(v23); /*0x68c457*/
    __asm { fmul [esp+48h+var_8] } /*0x68c45c*/
    BYTE2(v21.Color_field_00) = Math::RoundToInt(a3); /*0x68c46c*/
    v15 = Color::ConvertToRGB(&v21, (int)&v22); /*0x68c475*/
    v16 = *(_WORD *)v15; /*0x68c47a*/
    v17 = *(_BYTE *)(v15 + 2); /*0x68c47d*/
    v18 = (char *)a5 + 2 * ((v14 + 16) % 256) + (v14 + 16) % 256; /*0x68c497*/
    LODWORD(v23) = ++v14; /*0x68c49d*/
    *(_WORD *)v18 = v16; /*0x68c4a1*/
    v18[2] = v17; /*0x68c4a4*/
  }
  while ( v14 < 16 ); /*0x68c4a7*/
  v19 = __2_YAPAXI_Z(0x1B4u); /*0x68c4b2*/
  if ( v19 ) /*0x68c4bc*/
    return LightConvertClass::Constructor(v19, (int)a5, a4, a6, a8, a9, a10, 0, a11, a7); /*0x68c4e2*/
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
  *((_DWORD *)this + 193) = _strdup(Source); /*0x68c744*/
  *((_WORD *)this + 388) = *(_WORD *)a3; /*0x68c752*/
  *(this + 778) = *(_BYTE *)(a3 + 2); /*0x68c75d*/
  *((_DWORD *)this + 195) = 0; /*0x68c778*/
  *((_DWORD *)this + 196) = a6; /*0x68c77e*/
  *((_DWORD *)this + 197) = 16; /*0x68c784*/
  *((_DWORD *)this + 198) = 15; /*0x68c78a*/
  *((_DWORD *)this + 199) = 25; /*0x68c794*/
  *((_DWORD *)this + 200) = 24; /*0x68c79e*/
  *((_DWORD *)this + 201) = 22; /*0x68c7a8*/
  *((_DWORD *)this + 202) = 16; /*0x68c7b2*/
  *((_DWORD *)this + 203) = 19; /*0x68c7b8*/
  *((_DWORD *)this + 204) = 16; /*0x68c7c2*/
  *((_DWORD *)this + 205) = 16; /*0x68c7c8*/
  *((_DWORD *)this + 206) = 21; /*0x68c7d2*/
  *((_DWORD *)this + 195) = FontClass::CreateGlyphColor( /*0x68c7ee*/
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
    if ( dword_B054E0 < dword_B054D8 /*0x68c830*/
      || (byte_B054DD || !dword_B054D8)
      && dword_B054E4 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B054D0 + 8))(
           &stru_B054D0,
           dword_B054D8 + dword_B054E4,
           0) )
    {
      v10 = dword_B054E0++; /*0x68c83d*/
      *((_DWORD *)dword_B054D4 + v10) = this; /*0x68c84c*/
    }
    *(_DWORD *)this = dword_B054E0; /*0x68c855*/
  }
  return this; /*0x68c859*/
}



// ==== 0x0068C860  ObjectClass::LoadTheaterClassMIX_Load  this=ObjectClass  sig=csp ====
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
int __thiscall ColorScheme::Destructor(ColorScheme *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  ColorScheme *v4; // [esp+4h] [ebp-4h] BYREF

  if ( this->data[193] ) /*0x68c8d4*/
    free((void *)this->data[193]); /*0x68c8df*/
  v2 = (void (__thiscall ***)(_DWORD, int))this->data[195]; /*0x68c8e7*/
  this->data[193] = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  this->data[195] = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (__thiscall **)(_VectorClass_PAVColorScheme *, ColorScheme **))(*(_DWORD *)stru_B054D0.__pad_0 + 16))( /*0x68c91f*/
             &stru_B054D0,
             &v4);
  if ( result != -1 && result < *(int *)stru_B054D0.__tail_10 ) /*0x68c930*/
  {
    --*(_DWORD *)stru_B054D0.__tail_10; /*0x68c935*/
    for ( ; /*0x68c93b*/
          result < *(int *)stru_B054D0.__tail_10;
          *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                                                                                   + 4 * result) )
    {
      ++result; /*0x68c943*/
    }
  }
  return result; /*0x68c925*/
}



// ==== 0x0068C9C0  System_Read_68C9C0  this=char*  sig=csp ====
int __fastcall sub_68C9C0(char *Source, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  char *v9; // eax

  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( dword_B054E0 > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
LABEL_6:
    v9 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, Source, a2, a3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = dword_B054D4; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    v8 = _strcmpi(Source, *(const void **)(v7[v6] + 772)) == 0; /*0x68c9f6*/
    v7 = dword_B054D4; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= dword_B054E0 ) /*0x68ca13*/
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
  if ( dword_B054E0 <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = dword_B054D4; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68ca7a*/
    v5 = dword_B054D4; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= dword_B054E0 ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *((_DWORD *)dword_B054D4 + v2); /*0x68caa3*/
}



// ==== 0x0068CAB0  Network_Assign  this=-  sig=csp ====
int __fastcall sub_68CAB0(void *a1, int a2)
{
  int v2; // esi
  _DWORD *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( dword_B054E0 <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = dword_B054D4; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68cada*/
    v5 = dword_B054D4; /*0x68cadc*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= dword_B054E0 ) /*0x68caf7*/
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
int __thiscall ScoreScreen::Display(ScoreScreen *this)
{
  int v2; // eax
  unsigned __int8 *v3; // ebx
  int v4; // edi
  char *v5; // ecx
  char v6; // al
  char v7; // dl
  char *v8; // eax
  ConvertClass *v9; // eax
  char *v10; // edi
  int v11; // eax
  char *v12; // eax
  int i; // edi
  int v14; // eax
  char **v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  char **v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  char **v27; // ebx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // eax
  char **v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38; // eax
  char **v39; // ebx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // eax
  char **v45; // ebx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  char **v51; // ebx
 ... [65410 chars total]



// ==== 0x0068EC00  ScoreScreen::Check  this=ScoreScreen  sig=csp ====
bool __thiscall ScoreScreen::Check(ScoreScreen *this, char a2)
{
  return (*(int (__thiscall **)(int *, char *))(this->ScoreScreen_field_0x1C + 16))(&this->ScoreScreen_field_0x1C, &a2) == -1; /*0x68ec14*/
}



// ==== 0x0068EC20  CellClass::CreateInstance  this=CellClass  sig=csp ====
int __thiscall CellClass::CreateInstance(CellClass *this, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v9; // [esp+14h] [ebp-1FCh] BYREF
  int v10[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v11; // [esp+110h] [ebp-100h]
  int v12[63]; // [esp+114h] [ebp-FCh] BYREF

  v2 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ec31*/
  v3 = 20; /*0x68ec3e*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ec43*/
    v2 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ec55*/
  v4 = v2; /*0x68ec57*/
  while ( 1 ) /*0x68ec5f*/
  {
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68ec5f*/
    if ( !v3 ) /*0x68ec66*/
      break; /*0x68ec66*/
LABEL_6:
    if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x68ec89*/
    {
      v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ec94*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ec9c*/
        v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ecae*/
      if ( (unsigned int)(v5 - v4) > 0x28 ) /*0x68ecb5*/
      {
        memset(v10, 0, sizeof(v10)); /*0x68ecc2*/
        v11 = 0; /*0x68ecc4*/
        v10[0] = 106; /*0x68eccb*/
        *(int *)((char *)&v10[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x68ecde*/
        LOBYTE(v10[6]) = dword_A8DB30; /*0x68ecf5*/
        Stream::WriteBlock((int *)&unk_A8EA70, (int)v10, 250, 0); /*0x68ecf9*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ed03*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ed0b*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ed1d*/
        v4 = v6; /*0x68ed1f*/
      }
      ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v12, (int)&v9); /*0x68ed33*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x68ed3d*/
    }
    Screen::TransitionLoop((Screen *)this, 1); /*0x68ed48*/
    if ( !v3 ) /*0x68ed4f*/
      break; /*0x68ed4f*/
    --v3; /*0x68ed55*/
  }
  if ( !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68ec6e*/
    goto LABEL_6; /*0x68ec76*/
  return Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68ed66*/
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
  if ( dword_A80238 > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      v4 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v10]; /*0x68edad*/
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
    while ( v10 < dword_A80238 ); /*0x68ee21*/
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
int __thiscall ScoreScreen::AccumulateScoreStats(ScoreScreen *this)
{
  ScoreScreen *v1; // esi
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
  if ( stru_A80220.? > 0 ) /*0x68ef45*/
  {
    do /*0x68eff3*/
    {
      v6 = *((_DWORD *)stru_A80220.? + v9); /*0x68ef54*/
      Debug::Log(); /*0x68ef71*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)v6) /*0x68efa1*/
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)dword_A83D4C)
        || dword_A83D4C == (Object *)v6 )
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
    while ( v9 < stru_A80220.? ); /*0x68eff3*/
    v1 = this; /*0x68eff9*/
    v4 = v8; /*0x68effd*/
  }
  if ( *((_DWORD *)dword_A83D4C->Object_field_0x34 + 47) ) /*0x68f00f*/
  {
    Screen::TransitionRender((Screen *)v1, v2, v4, 227); /*0x68f03c*/
    return Screen::TransitionRender((Screen *)v1, v5, v3, 283); /*0x68f04a*/
  }
  else
  {
    Screen::TransitionRender((Screen *)v1, v4, v2, 227); /*0x68f01d*/
    return Screen::TransitionRender((Screen *)v1, v3, v5, 283); /*0x68f02b*/
  }
}



// ==== 0x0068F060  Screen::TransitionRender  this=Screen  sig=csp ====
int __thiscall Screen::TransitionRender(Screen *this, wchar_t *Format, wchar_t *a3, int a4)
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
  const wchar_t *v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebx
  int *v37; // ecx
  int v38; // edx
  int v39; // eax
  ObjectClass *v40; // edx
  _DWORD *v41; // ecx
  int v42; // ebx
  int *v43; // ecx
  int v44; // edx
  int v45; // eax
  int i; // ebx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  ObjectClass *v50; // ebx
  DSurface *v51; // ebx
  int v53; // [esp+C8h] [ebp-25Ch] BYREF
  ObjectClass *v54; // [esp+CCh] [ebp-258h]
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
  wchar_t *v74; // [esp+11Ch] [ebp-208h]
  wchar_t *v75; // [esp+120h] [ebp-204h]
  wchar_t v76[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v78[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v79[64]; // [esp+2A4h] [ebp-80h] BYREF

  v5 = (int)a3; /*0x68f07a*/
  v6 = *(_DWORD *)this + a4; /*0x68f085*/
  v7 = this->u32_4 + 244; /*0x68f08a*/
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
  v74 = a3; /*0x68f2eb*/
  v75 = Format; /*0x68f2ef*/
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
      (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f33a*/
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
      swprintf(v79, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f418*/
      v28 = (_DWORD *)this->u32_C; /*0x68f41d*/
      v29 = v7 - v28[2] - v61; /*0x68f430*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v28 + 12))(v28, v54, v79, v6, v29, 2); /*0x68f443*/
      v30 = (int *)this->u32_C; /*0x68f446*/
      v31 = *v30; /*0x68f44c*/
      v54 = (ObjectClass *)v30[2]; /*0x68f44e*/
      v70 = (*(int (__thiscall **)(int *, wchar_t *))(v31 + 8))(v30, v79); /*0x68f45d*/
      v68 = v6; /*0x68f465*/
      v69 = v29; /*0x68f469*/
      v71 = (int)v54; /*0x68f46d*/
    }
    else
    {
      v58 = v18; /*0x68f351*/
      v21 = this->q008; /*0x68f35e*/
      v56 = v53; /*0x68f361*/
      v55 = v6; /*0x68f36c*/
      v57 = 15; /*0x68f370*/
      (*((void (__thiscall **)(ObjectClass *, int *, int, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f37f*/
        g_DSurface_Hidden,
        &v55,
        v21,
        &v55,
        0,
        1);
      v22 = (int)v75 / v60; /*0x68f38d*/
      v54 = g_DSurface_Hidden; /*0x68f391*/
      if ( (int)v75 / v60 >= v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v22); /*0x68f3a9*/
      v23 = (_DWORD *)this->u32_C; /*0x68f3ae*/
      v24 = v53 - v23[2]; /*0x68f3c2*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v23 + 12))( /*0x68f3d0*/
        v23,
        v54,
        Buffer,
        v6,
        v24,
        2);
      v25 = (int *)this->u32_C; /*0x68f3d3*/
      v26 = *v25; /*0x68f3d9*/
      v54 = (ObjectClass *)v25[2]; /*0x68f3db*/
      v27 = (*(int (__thiscall **)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v68 = v6; /*0x68f3ee*/
      v69 = v24; /*0x68f3f2*/
      v70 = v27; /*0x68f3f6*/
      v71 = (int)v54; /*0x68f3fa*/
    }
    if ( v66 > 0 && v67 > 0 ) /*0x68f47f*/
      (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f49d*/
        g_DSurface_Hidden,
        &v64,
        DSurface_Alternate,
        &v64,
        0,
        1);
    if ( v63 > v59 ) /*0x68f4aa*/
    {
      v54 = g_DSurface_Hidden; /*0x68f585*/
      swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f589*/
      v41 = (_DWORD *)this->u32_C; /*0x68f58e*/
      v42 = v7 - v41[2] - v59; /*0x68f5a3*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v41 + 12))( /*0x68f5b5*/
        v41,
        v54,
        v76,
        v62,
        v42,
        2);
      v43 = (int *)this->u32_C; /*0x68f5b8*/
      v44 = *v43; /*0x68f5be*/
      v54 = (ObjectClass *)v43[2]; /*0x68f5c0*/
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
      (*((void (__thiscall **)(ObjectClass *, int *, int, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f4e6*/
        g_DSurface_Hidden,
        &v55,
        v33,
        &v55,
        0,
        1);
      v34 = (const wchar_t *)((int)v74 / v60); /*0x68f4f4*/
      v54 = g_DSurface_Hidden; /*0x68f4f8*/
      if ( (int)v74 / v60 >= (int)a3 ) /*0x68f505*/
        v34 = a3; /*0x68f507*/
      swprintf(v78, (const size_t)g_Str_Fmt_PctD, v34); /*0x68f517*/
      v35 = (_DWORD *)this->u32_C; /*0x68f51c*/
      v36 = v32 - v35[2]; /*0x68f529*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v35 + 12))( /*0x68f53e*/
        v35,
        v54,
        v78,
        v62,
        v36,
        2);
      v37 = (int *)this->u32_C; /*0x68f541*/
      v38 = *v37; /*0x68f547*/
      v54 = (ObjectClass *)v37[2]; /*0x68f549*/
      v39 = (*(int (__thiscall **)(int *, wchar_t *))(v38 + 8))(v37, v78); /*0x68f555*/
      v40 = v54; /*0x68f55c*/
      v64 = v62; /*0x68f560*/
      v65 = v36; /*0x68f564*/
      v66 = v39; /*0x68f568*/
    }
    v67 = (int)v40; /*0x68f5e5*/
    if ( g_INI_Key_BarGraph ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q011; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(g_INI_Key_BarGraph, **(char ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop(this, 1); /*0x68f625*/
    v63 += 2; /*0x68f646*/
    v53 -= 2; /*0x68f651*/
    v75 += (int)Format; /*0x68f660*/
    v17 = (int)Format; /*0x68f664*/
    v18 = v63; /*0x68f66d*/
    v74 += (int)a3; /*0x68f671*/
  }
  if ( v70 > 0 && v71 > 0 ) /*0x68f688*/
  {
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f6a6*/
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
  (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f6df*/
    DSurface_Alternate,
    &v55,
    v47,
    &v55,
    0,
    1);
  v54 = g_DSurface_Hidden; /*0x68f6f2*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f6f6*/
  (*(void (__thiscall **)(_DWORD, ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f71f*/
    this->u32_C,
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->u32_C + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f72c*/
  v54 = (ObjectClass *)DSurface_Alternate; /*0x68f740*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f744*/
  (*(void (__stdcall **)(ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f76c*/
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->u32_C + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f779*/
  if ( v66 > 0 && v67 > 0 ) /*0x68f78a*/
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f7a9*/
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
  (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f7e6*/
    DSurface_Alternate,
    &v55,
    v49,
    &v55,
    0,
    1);
  v50 = g_DSurface_Hidden; /*0x68f7f0*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f801*/
  (*(void (__thiscall **)(_DWORD, ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f821*/
    this->u32_C,
    v50,
    v76,
    v48,
    v7 - *(_DWORD *)(this->u32_C + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f82e*/
  v51 = DSurface_Alternate; /*0x68f838*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f849*/
  (*(void (__stdcall **)(DSurface *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f86b*/
    v51,
    v76,
    v48,
    v7 - *(_DWORD *)(this->u32_C + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f878*/
  return Screen::TransitionLoop(this, 20); /*0x68f884*/
}



// ==== 0x0068F8A0  ObjectClass::method_68F8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_68F8A0(ObjectClass *this)
{
  int v2; // eax
  unsigned int v3; // kr04_4
  int v4; // esi
  void *ptr_C; // ebx
  char *v6; // eax
  int occupant; // ecx
  int *p_referenceCount; // edi
  ObjectClass *nextObject; // eax
  int fallRate; // eax
  _DWORD *NeedsSaveOrLink; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  int v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x68f8b3*/
  sprintf(Buffer, "%d", v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    ptr_C = this->?; /*0x68f8f8*/
    v6 = (char *)this->? + 214; /*0x68f8fd*/
    *(_DWORD *)(v4 + 4) = (char *)this->AbstractClass + 590 - 12 * (v3 - 1); /*0x68f902*/
    *(_DWORD *)(v4 + 8) = v6; /*0x68f908*/
    *(_DWORD *)(v4 + 12) = Timer::GetTicks(); /*0x68f910*/
    *(_DWORD *)(v4 + 20) = 0; /*0x68f915*/
    *(_DWORD *)(v4 + 40) = ptr_C; /*0x68f91c*/
    *(_DWORD *)(v4 + 24) = Buffer; /*0x68f91f*/
    *(_DWORD *)(v4 + 28) = 0; /*0x68f922*/
    *(_DWORD *)(v4 + 32) = 0; /*0x68f925*/
    *(_BYTE *)(v4 + 36) = 0; /*0x68f928*/
    *(_DWORD *)v4 = &ScorePrintClass::`vftable'; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  occupant = this->occupant; /*0x68f936*/
  p_referenceCount = &this->?; /*0x68f93c*/
  if ( this->fallRate < occupant /*0x68f95e*/
    || (BYTE1(this->owningHouseIndex) || !occupant)
    && (nextObject = this->nextObject, (int)nextObject > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_referenceCount + 8))(
         &this->?,
         (int)nextObject + occupant,
         0) )
  {
    fallRate = this->fallRate; /*0x68f965*/
    NeedsSaveOrLink = this->?; /*0x68f968*/
    this->fallRate = fallRate + 1; /*0x68f96e*/
    NeedsSaveOrLink[fallRate] = v4; /*0x68f971*/
  }
  v12 = *p_referenceCount; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int *, int *))(v12 + 16))(&this->?, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int *, int *))(v14 + 16))(&this->?, &v15) )
  {
    Screen::TransitionLoop((Screen *)this, 1); /*0x68f98d*/
    v14 = *p_referenceCount; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}



// ==== 0x0068F9B0  ScoreScreen::DisplayTimeText  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::DisplayTimeText(int this, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // esi
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
    *(_DWORD *)(v5 + 4) = v4; /*0x68fa56*/
    *(_DWORD *)(v5 + 8) = v7; /*0x68fa59*/
    *(_DWORD *)(v5 + 12) = Timer::GetTicks(); /*0x68fa61*/
    *(_DWORD *)(v5 + 20) = 0; /*0x68fa66*/
    *(_DWORD *)(v5 + 40) = v6; /*0x68fa6d*/
    *(_DWORD *)(v5 + 24) = Buffer; /*0x68fa70*/
    *(_DWORD *)(v5 + 28) = 0; /*0x68fa73*/
    *(_DWORD *)(v5 + 32) = 0; /*0x68fa76*/
    *(_BYTE *)(v5 + 36) = 0; /*0x68fa79*/
    *(_DWORD *)v5 = &ScorePrintClass::`vftable'; /*0x68fa7c*/
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
  a2 = v5; /*0x68face*/
  for ( result = (*(int (__thiscall **)(int, unsigned int *))(v13 + 16))(this + 28, &a2); /*0x68fad8*/
        result != -1;
        result = (*(int (__thiscall **)(int, unsigned int *))(v15 + 16))(this + 28, &a2) )
  {
    Screen::TransitionLoop((Screen *)this, 1); /*0x68fade*/
    v15 = *v9; /*0x68fae3*/
    a2 = v5; /*0x68faec*/
  }
  return result; /*0x68faf8*/
}



// ==== 0x0068FB10  ObjectClass::method_68FB10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_68FB10(
        ObjectClass *this,
        _DWORD *a2,
        int a3,
        size_t BufferCount,
        wchar_t *Format,
        const wchar_t *a6,
        int a7,
        int a8)
{
  const wchar_t *v8; // eax
  _DWORD *ptr_C; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8); /*0x68fb3d*/
  ptr_C = this->?; /*0x68fb42*/
  v11 = a8 - ptr_C[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*ptr_C + 12))(ptr_C, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = this->?; /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/
}



// ==== 0x0068FBB0  ObjectClass::RenderScoreTypeText  this=ScoreScreen  sig=csp ====
int __thiscall RenderScoreTypeText(int this, int a2, int a3, int a4)
{
  int v4; // ebp
  int i; // edi
  int v7; // ecx
  int j; // edi
  int v9; // ecx
  __int16 v10; // ax
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
    if ( stru_A8EB00.?[412] != 1 ) /*0x68fbce*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x68fbd7*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * i); /*0x68fbdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x68fbe1*/
      }
      while ( !stru_A8EB00.?[412] ) /*0x68fbf3*/
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
    if ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68fc30*/
    {
      v10 = EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x68fc44*/
      v11 = (unsigned __int8)Event_Process(*(ObjectClass **)&stru_87F5F0.__pad_58[296], v10); /*0x68fc57*/
      v34 = v11; /*0x68fc5d*/
      Event::Dispatch(); /*0x68fc61*/
      v12 = a3 + 90; /*0x68fc6a*/
      if ( v4 >= a3 + 90 && EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68fc7b*/
      {
        do /*0x68fc96*/
          EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x68fc8b*/
        while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x68fc96*/
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
            (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fd04*/
             + 2))(
              g_DSurface_Hidden,
              v36,
              v14,
              v36,
              0,
              1);
            (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fd21*/
             + 2))(
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
                (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fe85*/
                 + 2))(
                  g_DSurface_Hidden,
                  v38,
                  v22,
                  v38,
                  0,
                  1);
                (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fea2*/
                 + 2))(
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
              v24 = (_DWORD *)__2_YAPAXI_Z(0x2Cu); /*0x68febb*/
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
        v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) + 1; /*0x68fd53*/
        v4 -= v16; /*0x68fd54*/
        v37[2] = v16; /*0x68fd56*/
        v17 = *(_DWORD *)(this + 8); /*0x68fd64*/
        v37[1] = a4 + 1; /*0x68fd67*/
        v37[0] = v4; /*0x68fd72*/
        v37[3] = 16; /*0x68fd76*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fd85*/
         + 2))(
          g_DSurface_Hidden,
          v37,
          v17,
          v37,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fda2*/
         + 2))(
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
              if ( !_strcmpi(g_INI_Key_Back, **(char ***)(*(_DWORD *)(this + 56) + 4 * m)) ) /*0x68fdde*/
                break; /*0x68fde8*/
            }
          }
        }
      }
    }
LABEL_46:
    Render_Render_68FFE0((ObjectClass *)this, v4, a4); /*0x68ffa9*/
    result = Screen::TransitionLoop((Screen *)this, 1); /*0x68ffba*/
  }
  while ( v34 != 13 ); /*0x68ffc4*/
  return result; /*0x68ffca*/
}



// ==== 0x0068FFE0  ObjectClass::Render_Render_68FFE0  this=ObjectClass  sig=csp ====
signed int __thiscall Render_Render_68FFE0(ObjectClass *this, int a2, int a3)
{
  signed int result; // eax
  signed int v5; // esi
  void *ptr_8; // [esp+0h] [ebp-40h]
  int nextArrayIndex; // [esp+Ch] [ebp-34h]
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
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x69006b*/
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
    nextArrayIndex = this->?; /*0x69008d*/
    v8[1] = a3 + 14; /*0x690093*/
    v9 = a2; /*0x690097*/
    v10 = a3 + 14; /*0x69009b*/
    (*((void (__thiscall **)(ObjectClass *, int *, _DWORD *, int))g_DSurface_Hidden->AbstractClass + 12))( /*0x6900a6*/
      g_DSurface_Hidden,
      &v9,
      v8,
      nextArrayIndex);
  }
  else
  {
    ptr_8 = this->?; /*0x6900bd*/
    v11 = a2; /*0x6900be*/
    v12 = a3 + 14; /*0x6900c2*/
    v13 = 11; /*0x6900c6*/
    v14 = 1; /*0x6900ce*/
    (*((void (__thiscall **)(ObjectClass *, int *, void *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x6900dd*/
      g_DSurface_Hidden,
      &v11,
      ptr_8,
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
HRESULT __fastcall sub_680070(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680083*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6800d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680103*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680156*/
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

  lpVtbl = pStm->__pad_0; /*0x680183*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6801d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680203*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680256*/
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

  lpVtbl = pStm->__pad_0; /*0x680283*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6802d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680303*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680356*/
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

  lpVtbl = pStm->__pad_0; /*0x680383*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6803d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680403*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680456*/
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

  lpVtbl = pStm->__pad_0; /*0x680483*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6804d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680503*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680556*/
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

  lpVtbl = pStm->__pad_0; /*0x680583*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6805d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680603*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680656*/
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

  lpVtbl = pStm->__pad_0; /*0x680683*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6806d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680703*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680756*/
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

  lpVtbl = pStm->__pad_0; /*0x680783*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6807d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680803*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680856*/
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

  lpVtbl = pStm->__pad_0; /*0x680883*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6808d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680903*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680956*/
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

  lpVtbl = pStm->__pad_0; /*0x680983*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x6809d6*/
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

  lpVtbl = pStm->__pad_0; /*0x680a03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680a56*/
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

  lpVtbl = pStm->__pad_0; /*0x680a83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680ad6*/
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

  lpVtbl = pStm->__pad_0; /*0x680b03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680b56*/
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

  lpVtbl = pStm->__pad_0; /*0x680b83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680bd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680c03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680c56*/
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

  lpVtbl = pStm->__pad_0; /*0x680c83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680cd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680d03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680d56*/
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

  lpVtbl = pStm->__pad_0; /*0x680d83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680dd6*/
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

  lpVtbl = pStm->__pad_0; /*0x680e03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680e56*/
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

  lpVtbl = pStm->__pad_0; /*0x680e83*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680ed6*/
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

  lpVtbl = pStm->__pad_0; /*0x680f03*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680f56*/
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
int __thiscall Game::validateScenario(Game *this, _DWORD *a2)
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
      if ( *(_DWORD *)this->__pad_0 ) /*0x680fac*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x680fba*/
      *(_DWORD *)this->__pad_0 = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x680f93*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x680f9c*/
      *(_DWORD *)this->__pad_0 = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x680fc7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x680fc7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x680fcd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }
}



// ==== 0x00680FF0  GameState::Reset  this=GameState  sig=csp ====
_DWORD *__thiscall GameState::Reset(GameState *this)
{
  *this = 0; /*0x680ff4*/
  *((_DWORD *)this + 1) = 0; /*0x680ff6*/
  *((_DWORD *)this + 98) = -1; /*0x680ff9*/
  *((_DWORD *)this + 99) = 0; /*0x681003*/
  *((_DWORD *)this + 252) = 0; /*0x681009*/
  *((_WORD *)this + 4) = 0; /*0x68100f*/
  *((_WORD *)this + 132) = 0; /*0x681013*/
  *((_BYTE *)this + 400) = 0; /*0x68101a*/
  *((_BYTE *)this + 660) = 0; /*0x681020*/
  *((_BYTE *)this + 724) = 0; /*0x681026*/
  *((_DWORD *)this + 246) = 0; /*0x68102c*/
  *((_DWORD *)this + 247) = 0; /*0x681032*/
  *((_DWORD *)this + 248) = 0; /*0x681038*/
  *((_DWORD *)this + 249) = 0; /*0x68103e*/
  *((_DWORD *)this + 250) = 0; /*0x681044*/
  *((_DWORD *)this + 251) = 0; /*0x68104a*/
  return this; /*0x681050*/
}



// ==== 0x00681060  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save(ObjectClass *this, int a2)
{
  this->? = (void *)a2; /*0x681064*/
  return a2; /*0x681067*/
}



// ==== 0x00681070  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_681070(ObjectClass *this)
{
  return (int)this->?; /*0x681073*/
}



// ==== 0x00681080  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681080(ObjectClass *this, int a2)
{
  this->AbstractClass = (void *)a2; /*0x681084*/
  return a2; /*0x681086*/
}



// ==== 0x00681090  ObjectClass::ReadPointerFromECX3  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX3(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x681092*/
}



// ==== 0x006810A0  ObjectClass::Map_Save_6810A0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall Map_Save_6810A0(ObjectClass *this, wchar_t *Source)
{
  this->isSelected = 0; /*0x6810a4*/
  return wcsncpy((wchar_t *)&this->?, Source, 0x7Fu); /*0x6810bc*/
}



// ==== 0x006810C0  ObjectClass::?raw_name_type_info__QBEPBDXZ  this=ObjectClass  sig=csp ====
const char *__thiscall _raw_name_type_info__QBEPBDXZ(type_info *this)
{
  return (char *)this + 8; /*0x6810c3*/
}



// ==== 0x006810D0  ObjectClass::Map_Save_6810D0  this=ObjectClass  sig=csp ====
wchar_t *__thiscall Map_Save_6810D0(ObjectClass *this, wchar_t *Source)
{
  *((_WORD *)this + 195) = 0; /*0x6810d4*/
  return wcsncpy((wchar_t *)this + 132, Source, 0x3Fu); /*0x6810ef*/
}



// ==== 0x00681100  LoadOptions::GetData  this=LoadOptions  sig=csp ====
char *__thiscall sub_681100(char *this)
{
  return this + 264; /*0x681106*/
}



// ==== 0x00681110  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681110(ObjectClass *this, int a2)
{
  this->u32_62 = a2; /*0x681114*/
  return a2; /*0x68111a*/
}



// ==== 0x00681120  LoadOptions::GetFlag98  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag98(LoadOptions *this)
{
  return *((_DWORD *)this + 98); /*0x681126*/
}



// ==== 0x00681130  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681130(ObjectClass *this, int a2)
{
  this->u32_63 = a2; /*0x681134*/
  return a2; /*0x68113a*/
}



// ==== 0x00681140  LoadOptions::GetFlag99  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag99(LoadOptions *this)
{
  return *((_DWORD *)this + 99); /*0x681146*/
}



// ==== 0x00681180  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_681180(ObjectClass *this)
{
  return (char *)this + 400; /*0x681186*/
}



// ==== 0x006811B0  ObjectClass::method_6811B0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811B0(TechnoClass *this)
{
  return (char *)&this->airstrike; /*0x6811b6*/
}



// ==== 0x006811C0  ObjectClass::Map_Save_6811C0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811C0(char *this, char *Source)
{
  *(this + 983) = 0; /*0x6811c4*/
  return strncpy(this + 724, Source, 0x103u); /*0x6811e0*/
}



// ==== 0x006811F0  ObjectClass::method_6811F0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6811F0(TechnoClass *this)
{
  return (char *)&this->spawnOwner; /*0x6811f6*/
}



// ==== 0x00681200  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681200(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[0] = *a2; /*0x681206*/
  result = a2[1]; /*0x68120c*/
  this->turretRecoil[1] = result; /*0x68120f*/
  return result; /*0x681215*/
}



// ==== 0x00681220  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681220(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[0]; /*0x68122a*/
  a2[1] = this->turretRecoil[1]; /*0x681232*/
  return a2; /*0x681235*/
}



// ==== 0x00681240  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681240(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[2] = *a2; /*0x681246*/
  result = a2[1]; /*0x68124c*/
  this->turretRecoil[3] = result; /*0x68124f*/
  return result; /*0x681255*/
}



// ==== 0x00681260  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_681260(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[2]; /*0x68126a*/
  a2[1] = this->turretRecoil[3]; /*0x681272*/
  return a2; /*0x681275*/
}



// ==== 0x00681280  ObjectClass::Map_Save  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_681280(TechnoClass *this, _DWORD *a2)
{
  int result; // eax

  this->turretRecoil[4] = *a2; /*0x681286*/
  result = a2[1]; /*0x68128c*/
  this->turretRecoil[5] = result; /*0x68128f*/
  return result; /*0x681295*/
}



// ==== 0x006812A0  ObjectClass::method_6812A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6812A0(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->turretRecoil[4]; /*0x6812aa*/
  a2[1] = this->turretRecoil[5]; /*0x6812b2*/
  return a2; /*0x6812b5*/
}



// ==== 0x006812C0  ObjectClass::Map_Save_6812C0  this=ObjectClass  sig=csp ====
int __thiscall Map_Save_6812C0(TechnoClass *this, int a2)
{
  this->turretRecoil[6] = a2; /*0x6812c4*/
  return a2; /*0x6812ca*/
}



// ==== 0x006812D0  LoadOptions::GetFlag252  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::GetFlag252(LoadOptions *this)
{
  return *((_DWORD *)this + 252); /*0x6812d6*/
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
_UNKNOWN **__thiscall ScenarioClass::LookupMethod(ScenarioClass *this)
{
  int v1; // edx
  ScenarioClass **v2; // eax

  v1 = 0; /*0x683000*/
  v2 = (ScenarioClass **)&unk_83D658; /*0x683002*/
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
int __thiscall COMObject::ValidatePtr(COMObject *this)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x683033*/
    WinAPI::Wrapper(-2147467261); /*0x68303d*/
  return *(_DWORD *)this->__pad_0; /*0x683044*/
}



// ==== 0x00683050  ObjectClass::Map_Read  this=ObjectClass  sig=csp ====
int __thiscall Map_Read_683050(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x683050*/
  if ( this->AbstractClass ) /*0x683050*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x683059*/
  return result; /*0x68305c*/
}



// ==== 0x00683060  ObjectClass::ReleaseCOM  this=ObjectClass  sig=csp ====
int __thiscall ReleaseCOM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x683060*/
  if ( this->AbstractClass ) /*0x683060*/
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
int __thiscall ScenarioClass::Constructor(ScenarioClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  char *waypoints; // eax
  int v7; // ecx
  int v8; // esi
  char *v9; // edi
  int v10; // esi
  _BYTE *v11; // edi

  SeedInitRNG((ObjectClass *)&this->random[1], 0); /*0x6832cf*/
  this->elapsedTimer[1] = Timer::GetTicks(); /*0x6832e5*/
  this->pauseTimer[0] = 0; /*0x6832eb*/
  this->pauseTimer[1] = Timer::GetTicks(); /*0x6832f6*/
  *(_DWORD *)this->__pad_628 = 0; /*0x6832fc*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683302*/
  this->missionTimer[2] = 0; /*0x683307*/
  this->missionTimer[0] = v2; /*0x68330d*/
  LOBYTE(this->missionTimer_text[0]) = 0; /*0x683313*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683319*/
  this->shroudRegrowTimer[2] = 0; /*0x68331f*/
  this->shroudRegrowTimer[0] = v3; /*0x683325*/
  this->fogTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683331*/
  this->fogTimer[2] = 0; /*0x683337*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x68333d*/
  this->iceTimer[2] = 0; /*0x683342*/
  this->iceTimer[0] = v4; /*0x683348*/
  this->ScenarioClass_field_timer_123c[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683354*/
  this->ScenarioClass_field_timer_123c[2] = 0; /*0x68335a*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683360*/
  this->ambientTimer[2] = 0; /*0x683366*/
  this->ambientTimer[0] = v5; /*0x68336c*/
  this->ScenarioClass_field_timer_34C0[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683381*/
  this->ScenarioClass_field_timer_34C0[2] = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((TypeList *)this->allowableUnits, 0, 0); /*0x68338d*/
  this->dropshipUnitCounts = 0; /*0x683397*/
  this->dropshipCountsCount = 10; /*0x68339a*/
  this->allowableUnits[0] = (int)&TypeList<TechnoTypeClass *>::`vftable'; /*0x68339d*/
  VectorClass::Construct((VectorClass *)&this->ambientCurrent, 0, 0); /*0x6833ad*/
  this->ground = 10; /*0x6833b2*/
  this->blue = 0; /*0x6833b5*/
  this->ambientCurrent = (int)&TypeList<int>::`vftable'; /*0x6833b8*/
  VectorClass::Construct((VectorClass *)&this->ionAmbient, 0, 0); /*0x6833c8*/
  this->ionLevel = 10; /*0x6833cf*/
  this->ionGround = 0; /*0x6833d2*/
  this->ionAmbient = (int)&TypeList<int>::`vftable'; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  this->__pad_3566[50] = 0; /*0x6833e2*/
  this->isRandom = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  this->techLevel = 1; /*0x6833f3*/
  this->campaignIndex = -1; /*0x6833fd*/
  LOBYTE(this->nextScenario[1]) = 0; /*0x683407*/
  LOBYTE(this->altNextScenario[1]) = 0; /*0x68340a*/
  waypoints = this->waypoints; /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *(_DWORD *)waypoints = dword_B05458; /*0x683421*/
    waypoints += 4; /*0x683423*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)this->name, &g_TypeClass_DefaultString); /*0x683435*/
  wcscpy((wchar_t *)this->uiNameLoaded, &g_TypeClass_DefaultString); /*0x683446*/
  strcpy((char *)this->fileName, &g_INI_DefaultBuffer); /*0x683475*/
  strcpy((char *)this->briefingCsf, &g_INI_DefaultBuffer); /*0x68349d*/
  strcpy(this->uiName, &g_INI_DefaultBuffer); /*0x6834bf*/
  wcscpy((wchar_t *)this->briefing, &g_TypeClass_DefaultString); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = &this->globalVariables[40]; /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      this->variablesChanged = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((HouseClass *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (char *)&this->localVariables[9] + 2; /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      this->variablesChanged = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll((TriggerActionQueue *)v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(int *)((char *)&this->localVariables[1024] + 2) = 0; /*0x683534*/
  *(int *)((char *)this->view1 + 2) = 0; /*0x68353c*/
  *(int *)((char *)this->view2 + 2) = 0; /*0x683543*/
  *(int *)((char *)this->view3 + 2) = 0; /*0x683549*/
  return (int)this->nextScenario; /*0x683533*/
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
wchar_t *__thiscall ScenarioClass::InitTimer(ScenarioClass *this)
{
  int *v2; // edi
  int Ticks; // eax
  int v4; // ecx
  int v5; // eax
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v14; // [esp+10h] [ebp-30h]
  int v15; // [esp+18h] [ebp-28h]
  char Destination[32]; // [esp+20h] [ebp-20h] BYREF

  this->altHomeCell = 699; /*0x683622*/
  this->uniqueId = 699; /*0x683628*/
  this->random[0] = 1000000; /*0x683633*/
  this->difficulty2 = 1; /*0x68363d*/
  this->elapsedTimer[0] = 1; /*0x683643*/
  v2 = &this->elapsedTimer[1]; /*0x683652*/
  this->elapsedTimer[1] = Timer::GetTicks(); /*0x68365f*/
  this->elapsedTimer[2] = v15; /*0x683661*/
  this->pauseTimer[0] = 0; /*0x683664*/
  if ( this->elapsedTimer[1] != -1 ) /*0x68366b*/
  {
    Ticks = Timer::GetTicks(); /*0x683670*/
    v4 = this->pauseTimer[0]; /*0x683677*/
    v5 = Ticks - *v2; /*0x68367a*/
    *v2 = -1; /*0x68367c*/
    this->pauseTimer[0] = v5 + v4; /*0x683680*/
  }
  v6 = &this->pauseTimer[1]; /*0x683690*/
  this->pauseTimer[1] = Timer::GetTicks(); /*0x683698*/
  this->pauseTimer[2] = v15; /*0x68369a*/
  *(_DWORD *)this->__pad_628 = 0; /*0x68369d*/
  if ( this->pauseTimer[1] != -1 ) /*0x6836a4*/
  {
    v14 = *(_DWORD *)this->__pad_628; /*0x6836a9*/
    v7 = Timer::GetTicks() - *v6; /*0x6836b7*/
    if ( v7 >= v14 ) /*0x6836bf*/
      v8 = 0; /*0x6836c5*/
    else
      v8 = v14 - v7; /*0x6836c1*/
    *(_DWORD *)this->__pad_628 = v8; /*0x6836c7*/
    *v6 = -1; /*0x6836ca*/
  }
  this->ScenarioClass_field_62C = 0; /*0x6836d2*/
  this->unknown630[0] = 0; /*0x6836d8*/
  this->missionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6836e6*/
  this->missionTimer[1] = v15; /*0x6836ec*/
  this->missionTimer[2] = 0; /*0x6836ef*/
  v9 = this->missionTimer[0]; /*0x6836f2*/
  if ( v9 != -1 ) /*0x6836f6*/
  {
    v10 = this->missionTimer[2]; /*0x6836fe*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x683705*/
      v11 = 0; /*0x68370b*/
    else
      v11 = v10 - (*(_DWORD *)&stru_A8EB00.?[416] - v9); /*0x683707*/
    this->missionTimer[2] = v11; /*0x68370d*/
    this->missionTimer[0] = -1; /*0x683710*/
  }
  this->missionTimer_text_csf = &g_TypeClass_DefaultString; /*0x683717*/
  if ( &g_INI_DefaultBuffer ) /*0x683723*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x683737*/
    Destination[31] = 0; /*0x68373f*/
  }
  else
  {
    Destination[0] = 0; /*0x683725*/
  }
  if ( Destination != (char *)this->missionTimer_text ) /*0x68374f*/
    qmemcpy(this->missionTimer_text, Destination, sizeof(this->missionTimer_text)); /*0x68375a*/
  this->shroudRegrowTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683770*/
  this->shroudRegrowTimer[1] = v15; /*0x683776*/
  this->shroudRegrowTimer[2] = 0; /*0x683779*/
  this->fogTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x683785*/
  this->fogTimer[1] = v15; /*0x683787*/
  this->fogTimer[2] = 0; /*0x68378e*/
  this->iceTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x68379c*/
  this->iceTimer[1] = v15; /*0x6837a2*/
  this->iceTimer[2] = 0; /*0x6837a9*/
  this->ScenarioClass_field_timer_123c[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6837b7*/
  this->ScenarioClass_field_timer_123c[1] = v15; /*0x6837bd*/
  this->ScenarioClass_field_timer_123c[2] = 0; /*0x6837c4*/
  this->ambientTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6837d2*/
  this->ambientTimer[1] = v15; /*0x6837d8*/
  this->ambientTimer[2] = 0; /*0x6837df*/
  this->theater = -1; /*0x6837e2*/
  this->intro = (void *)-1; /*0x6837e8*/
  this->brief = (void *)-1; /*0x6837ee*/
  this->win = (void *)-1; /*0x6837f4*/
  this->lose = (void *)-1; /*0x6837fa*/
  this->action = (void *)-1; /*0x683800*/
  this->postScore = (void *)-1; /*0x683806*/
  this->preMapSelect = (void *)-1; /*0x68380c*/
  this->themeIndex = -1; /*0x683812*/
  this->humanPlayerHouseTypeIndex = 0; /*0x683818*/
  this->carryOverMoney[0] = 0; /*0x68381e*/
  this->carryOverMoney[1] = 0; /*0x683824*/
  this->carryOverCap = 0; /*0x68382a*/
  this->percent = 0; /*0x683830*/
  this->ScenarioClass_field_34A0 = 0; /*0x683836*/
  this->freeRadar = 0; /*0x68383c*/
  this->trainCrate = 0; /*0x683842*/
  this->storedTiberium_growth_enabled = 1; /*0x683848*/
  this->veinGrowthEnabled = 1; /*0x68384f*/
  this->iceGrowthEnabled = 1; /*0x683856*/
  this->bridgeDestroyed = 0; /*0x68385d*/
  this->variablesChanged = 0; /*0x683863*/
  this->ambientChanged = 0; /*0x683869*/
  this->endOfGame = 0; /*0x68386f*/
  this->timerInherit = 0; /*0x683875*/
  this->skipScore = 0; /*0x68387b*/
  this->oneTimeOnly = 0; /*0x683881*/
  this->skipMapSelect = 0; /*0x683887*/
  this->truckCrate = 0; /*0x68388d*/
  this->fillSilos = 0; /*0x683893*/
  this->ignoreGlobalAiTriggers = 0; /*0x683899*/
  this->playerSideIndex = 0; /*0x68389f*/
  this->multiplayerOnly = 0; /*0x6838a5*/
  this->pickedUpAnyCrate = 0; /*0x6838ab*/
  this->ScenarioClass_field_timer_34C0[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6838bc*/
  this->ScenarioClass_field_timer_34C0[1] = v15; /*0x6838c7*/
  this->ScenarioClass_field_timer_34C0[2] = 0; /*0x6838ca*/
  this->startingDropships = 0; /*0x6838cd*/
  this->nukeRed = 100; /*0x6838d3*/
  this->nukeGreen = 100; /*0x6838d9*/
  this->nukeBlue = 100; /*0x6838df*/
  this->nukeGround = 100; /*0x6838e5*/
  this->nukeLevel = 100; /*0x6838eb*/
  this->nukeAmbientChangeRate = 100; /*0x6838f1*/
  this->dominatorAmbient = 50; /*0x6838f7*/
  this->dominatorRed = 8; /*0x683901*/
  this->dominatorGreen = 87; /*0x68390b*/
  *(_DWORD *)&this->__pad_3566[10] = 100; /*0x68391a*/
  *(_DWORD *)&this->__pad_3566[14] = 100; /*0x683920*/
  this->dominatorBlue = 30; /*0x68392b*/
  this->dominatorGround = 40; /*0x683931*/
  *(_DWORD *)&this->__pad_3566[18] = 1; /*0x68393b*/
  *(_DWORD *)&this->__pad_3566[46] = 1; /*0x683941*/
  this->storedTiberium_death_to_visceroid = 1; /*0x683947*/
  this->dominatorLevel = 75; /*0x68394d*/
  this->dominatorAmbientChangeRate = 0; /*0x683961*/
  this->unknown3598 = 0; /*0x683967*/
  this->initTime = 200; /*0x68396d*/
  *(_DWORD *)this->stage = 175; /*0x683977*/
  *(_DWORD *)&this->__pad_3566[2] = 150; /*0x683981*/
  *(_DWORD *)&this->__pad_3566[6] = 125; /*0x683987*/
  *(_DWORD *)&this->__pad_3566[22] = 150; /*0x683991*/
  *(_DWORD *)&this->__pad_3566[26] = 85; /*0x683997*/
  *(_DWORD *)&this->__pad_3566[30] = 20; /*0x6839a1*/
  *(_DWORD *)&this->__pad_3566[34] = 30; /*0x6839ab*/
  *(_DWORD *)&this->__pad_3566[38] = 0; /*0x6839b1*/
  *(_DWORD *)&this->__pad_3566[42] = 0; /*0x6839b7*/
  *(_DWORD *)&this->__pad_3566[54] = 10000; /*0x6839bd*/
  *(_WORD *)&this->__pad_3566[58] = 0; /*0x6839c7*/
  this->ScenarioClass_field_35A2 = 0; /*0x6839ce*/
  this->parTimeEasy = 3600; /*0x6839d4*/
  this->parTimeMedium = 3600; /*0x6839da*/
  this->parTimeDifficult = 3600; /*0x6839e0*/
  this->underParTitle[0] = 0; /*0x6839e6*/
  this->underParMessage[0] = 0; /*0x6839ec*/
  this->overParTitle[0] = 0; /*0x6839f2*/
  this->overParMessage[0] = 0; /*0x6839f8*/
  this->lsLoadMessage[0] = 0; /*0x6839fe*/
  this->lsBrief[0] = 0; /*0x683a04*/
  this->ls640BriefLocX = 0; /*0x683a0a*/
  this->ls640BriefLocY = 0; /*0x683a10*/
  this->ls800BriefLocX = 0; /*0x683a16*/
  this->ls800BriefLocY = 0; /*0x683a1c*/
  LOBYTE(this->ls640BkgdName[0]) = 0; /*0x683a22*/
  LOBYTE(this->ls800BkgdName[0]) = 0; /*0x683a28*/
  LOBYTE(this->ls800BkgdPal[0]) = 0; /*0x683a2e*/
  this->teamsPresent = 0; /*0x683a3a*/
  this->numCoopHumanStartSpots = 4; /*0x683a40*/
  (*(void (__thiscall **)(int *))(this->allowableUnits[0] + 12))(this->allowableUnits); /*0x683a4c*/
  (*(void (__thiscall **)(int *))(this->ambientCurrent + 12))(&this->ambientCurrent); /*0x683a5b*/
  (*(void (__thiscall **)(int *))(this->ionAmbient + 12))(&this->ionAmbient); /*0x683a6a*/
  result = *(wchar_t **)&dword_A8B238; /*0x683a6d*/
  if ( *(_DWORD *)&dword_A8B238 == 5 ) /*0x683a79*/
  {
    StringCSF = GetStringCSF(aGuiSkirmishgam, 0, g_Str_File_Scenario_CPP, 522); /*0x683a8c*/
    return wcscpy((wchar_t *)&dword_A8B230[137].referenceCount, StringCSF); /*0x683a9f*/
  }
  return result; /*0x683a72*/
}



// ==== 0x00683AB0  ScenarioClass::LoadScenarioAndStart  this=AbstractClass  sig=csp ====
char __userpurge ScenarioClass::LoadScenarioAndStart@<al>(char *Source@<ecx>, char a2@<dl>, double a3@<st0>, int a4)
{
  char *v4; // ebp
  int uniqueId; // eax
  int Field; // ecx
  GameOption *v7; // esi
  int v8; // eax
  int v9; // edi
  int Bool; // esi
  int v11; // eax
  int referenceCount; // eax
  _DWORD *p_vtable2; // esi
  LoadScreen *v15; // [esp+0h] [ebp-FCh]
  int v16; // [esp+4h] [ebp-F8h]
  int *v17; // [esp+8h] [ebp-F4h]
  CCINIClass v19; // [esp+1Ch] [ebp-E0h] BYREF
  CCFileClass v20; // [esp+74h] [ebp-88h] BYREF
  int v21[3]; // [esp+CCh] [ebp-30h] BYREF
  int v22; // [esp+D8h] [ebp-24h]
  CHAR v23[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v4 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source)) && a4 != -1 ) /*0x683ade*/
  {
    if ( stru_A8EB00.?[377] == 1 ) /*0x683ae7*/
      v4 = &stru_A83D50.__pad_C8[48]; /*0x683ae9*/
    else
      v4 = (char *)(*((_DWORD *)dword_A83CFC + a4) + 156); /*0x683af8*/
  }
  dword_A8B230[375].uniqueId = a4; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)&dword_A8B230[130].abstractFlags, v4); /*0x683b47*/
  _strupr((char *)&dword_A8B230[130].abstractFlags); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x683b73*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x683b7b*/
    if ( uniqueId == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( *(_DWORD *)&stru_A8B250.__pad_0[4] != -1 ) /*0x683b9f*/
  {
    v7 = *(GameOption **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x683ba7*/
    v8 = Game::CheckForGameCD((Game *)0x3C); /*0x683baf*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists((ScenarioClass *)v7, v8) ) /*0x683bb7*/
    {
      Field = GameOption::GetField(v7); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v9 = ++dword_A8DAB4; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --dword_A8DAB4; /*0x683c03*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683c11*/
  v19.?[0] = 0; /*0x683c18*/
  v19.?[1] = 0; /*0x683c1c*/
  GenericList::Constructor((GenericList *)&v19.?[2]); /*0x683c20*/
  v19.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x683c29*/
  memset(&v19.?[8], 0, 13); /*0x683c32*/
  memset(&v19.?, 0, 9); /*0x683c42*/
  *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x683c4e*/
  CCFileClass::Construct(&v20, v4); /*0x683c56*/
  if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) ) /*0x683c67*/
  {
    Bool = INIClass::GetBool( /*0x683c85*/
             (INIClass *)&v19,
             (unsigned __int8 *)&stru_82BA00.?,
             (unsigned __int8 *)g_INI_Key_Intro,
             -1);
    if ( Bool != -1 /*0x683ca5*/
      || (Bool = INIClass::GetBool(
                   (INIClass *)&v19,
                   (unsigned __int8 *)&stru_82BA00.?,
                   (unsigned __int8 *)g_INI_Key_Brief,
                   -1),
          Bool != -1) )
    {
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v4, v9, 1, 1, 1); /*0x683cbd*/
    }
  }
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x683cc9*/
  v22 = 0; /*0x683cd1*/
  Vector::Clear((int)v21); /*0x683cd8*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v11 = StringList::Find((StringList *)&unk_A83D10, &stru_82BA00.?); /*0x683d0f*/
  ThemeClass::Play((ThemeClass *)&unk_A83D10, v11); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v4, a3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  referenceCount = dword_A8B230[143].referenceCount; /*0x683d5e*/
  if ( referenceCount != -1 ) /*0x683d67*/
    wsprintfA(v23, "%s.VQA", *(const char **)(g_MissionQueueFrame.localVariables[580] + 4 * referenceCount)); /*0x683d80*/
  if ( dword_A8B230[375].abstractFlags > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(v15); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper((int)dword_A8B230[144].ptr_4, (int)v4, v9, 1, 1, 1); /*0x683db6*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[33] /*0x683dd6*/
    || *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[34] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((AudioOptionsClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x683e02*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present((int)g_DSurface_Hidden, 0, (int)v4, v9, 0, (int)v15, v16, v17); /*0x683e1c*/
  if ( dword_A8B230[43].ptr_8 == (void *)-1 ) /*0x683e35*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683e26*/
    *p_vtable2 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( dword_A8B230[202].ptr_8 == (void *)-1 ) /*0x683e50*/
    Theme::Stop((Theme *)&unk_A83D10, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&unk_A83D10, (int)dword_A8B230[202].ptr_8); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  stru_A8EB00.?[376] = 1; /*0x683e75*/
  byte_A8E378 = 1; /*0x683e7f*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683e8f*/
  return 1; /*0x683d4a*/
}



// ==== 0x00683EB0  ScenarioClass::CleanupTemporary  this=ScenarioClass  sig=csp ====
int ScenarioClass::CleanupTemporary(ScenarioClass *this)
{
  AsyncIO *v1; // ecx
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax

  sub_406F00(); /*0x683eb1*/
  dword_83D834 = sub_4072B0(g_MixerState); /*0x683ecc*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x683ed1*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x683ee2*/
  {
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v1 = (AsyncIO *)dword_A8B230; /*0x683f18*/
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683f27*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v4 = (char *)p_vtable2[2]; /*0x683f3d*/
      v5 = Ticks - (_DWORD)*p_vtable2; /*0x683f40*/
      *p_vtable2 = (void *)-1; /*0x683f42*/
      v1 = (AsyncIO *)&v4[v5]; /*0x683f48*/
      p_vtable2[2] = v1; /*0x683f4a*/
    }
  }
  LOBYTE(v1) = 1; /*0x683f4d*/
  AsyncIO::Read(v1); /*0x683f4f*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x683f5d*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], 0); /*0x683f61*/
  Mouse::ReleaseCapture((ScrollClass *)&stru_87F5F0.__pad_58[416]); /*0x683f6b*/
  Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683f86*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x683f90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x683f9a*/
  return (*(int (__thiscall **)(void *, ScenarioClass *))(*(_DWORD *)stru_887598.lineTrailer + 16))(
           stru_887598.lineTrailer,
           this);
}



// ==== 0x00683FB0  ObjectClass::PostFrameCleanup  this=ObjectClass  sig=csp ====
int PostFrameCleanup(TechnoClass *this)
{
  int *p_vtable2; // esi
  AsyncIO *v2; // ecx

  MouseClass::GetPosition((MouseClass *)&dword_87F7E8); /*0x683fb7*/
  if ( dword_A8B230[43].ptr_8 == -1 ) /*0x683fd0*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x683fc1*/
    *p_vtable2 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( dword_A8B230[43].ptr_8 != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( dword_887368 ) /*0x68401d*/
    Tooltip::Enable(dword_887368, byte_A8EB80); /*0x684026*/
  EndBufferMixer(&g_MixerState->ptr_0, dword_83D834); /*0x684037*/
  LOBYTE(v2) = 0; /*0x68403c*/
  dword_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v2); /*0x684048*/
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
    v3 = (char *)dword_A8B230 + 1568; /*0x68407c*/
    *((_DWORD *)dword_A8B230 + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = dword_A8B230; /*0x68409c*/
    if ( *((_BYTE *)dword_A8B230 + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)dword_A8B230 + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)dword_A8B230 + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !dword_A8B238[0] || dword_A8B238[0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)dword_A8B230 + 1556; /*0x6840e2*/
      if ( *((_DWORD *)dword_A8B230 + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    byte_B054CC = *((_BYTE *)dword_A8B230 + 13730); /*0x68411b*/
    if ( !byte_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&dword_87F7E8); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x684143*/
      *((_BYTE *)dword_A8B230 + 13730) = 1; /*0x68414c*/
      byte_A8ED9C = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)dword_87F770); /*0x684160*/
      dword_B07784 = 0; /*0x684165*/
    }
  }
  result = dword_A8B230; /*0x68416f*/
  ++*((_DWORD *)dword_A8B230 + 395); /*0x684174*/
  return result; /*0x68417a*/
}



// ==== 0x00684180  ScenarioClass::ProcessIntroTimer  this=ScenarioClass  sig=csp ====
_BYTE *ScenarioClass::ProcessIntroTimer(ScenarioClass *this)
{
  _BYTE *result; // eax

  result = dword_A8B230[43].NeedsSaveOrLink; /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    dword_A8B230[43].NeedsSaveOrLink = result - 1; /*0x684195*/
    result = dword_A8B230; /*0x68419b*/
    if ( !dword_A8B230[43].NeedsSaveOrLink ) /*0x6841a0*/
    {
      if ( !byte_B054CC ) /*0x6841b6*/
      {
        if ( BYTE2(dword_A8B230[381].ptr_C) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x6841c9*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6841d8*/
          result = dword_A8B230; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        stru_A8EB00.?[440] = 0; /*0x6841fc*/
        Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x684203*/
        result = dword_A8B230; /*0x684208*/
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
int Scenario::ClearScreen(Scenario *this)
{
  int result; // eax

  Mouse::ReleaseCapture((ScrollClass *)&stru_87F5F0.__pad_58[416]); /*0x684245*/
  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x684252*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x684261*/
  BYTE2(dword_A8B230[381].ptr_C) = 1; /*0x68426c*/
  stru_A8EB00.?[440] = 1; /*0x684278*/
  result = Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68427d*/
  dword_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/
}



// ==== 0x00684290  ObjectClass::UpdateMouse  this=ObjectClass  sig=csp ====
int UpdateMouse(ObjectClass *this)
{
  int result; // eax

  if ( BYTE2(dword_A8B230[381].ptr_C) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6842b5*/
    while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ); /*0x6842c0*/
  }
  BYTE2(dword_A8B230[381].ptr_C) = 0; /*0x6842cc*/
  stru_A8EB00.?[440] = 0; /*0x6842d9*/
  result = Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6842e0*/
  dword_B07784 = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}



// ==== 0x006842F0  ToggleDisplayMode  this=-  sig=ida-proto ====
char __fastcall DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = dword_A8EB84; /*0x6842f4*/
    if ( dword_886FB8 != dword_A8EB84 || dword_886FBC != dword_A8EB88 ) /*0x68430f*/
    {
      Debug::Log("Toggle display mode to %d x %d\n", dword_A8EB84, dword_A8EB88); /*0x684318*/
      return ChangeVideoMode(dword_A8EB84, dword_A8EB88); /*0x68432c*/
    }
  }
  else
  {
    result = dword_886FB8; /*0x684331*/
    if ( dword_886FB8 != dword_A8EB8C ) /*0x68433e*/
    {
      result = dword_A8EB90; /*0x684346*/
      if ( dword_886FBC != dword_A8EB90 ) /*0x68434d*/
      {
        Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x684354*/
        return ChangeVideoMode(dword_A8EB8C, dword_A8EB90); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}



// ==== 0x00684370  ObjectClass::WaitForMultiplayerLoadSync  this=ObjectClass  sig=csp ====
char WaitForMultiplayerLoadSync(ObjectClass *this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v11; // edi
  int v12; // edi
  __int64 v13; // [esp+10h] [ebp-40h]
  __int64 v14; // [esp+18h] [ebp-38h]
  int v15; // [esp+20h] [ebp-30h]
  int v16; // [esp+28h] [ebp-28h]
  int Ticks; // [esp+2Ch] [ebp-24h]
  int v18; // [esp+34h] [ebp-1Ch]

  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  Ticks = Timer::GetTicks(); /*0x6843b5*/
  v18 = 300; /*0x6843b9*/
  v15 = Timer::GetTicks(); /*0x6843cb*/
  v16 = 3600; /*0x6843d3*/
  Progress::GetAverage((Progress *)&stru_AC4B30.__pad_EC[828]); /*0x6843e0*/
  __asm { fstp [esp+50h+var_40] } /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v1 = 1; /*0x6843fe*/
    if ( *(_DWORD *)&dword_A8B238 == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v2 = v16; /*0x684422*/
    if ( v15 != -1 ) /*0x68442b*/
    {
      v3 = Timer::GetTicks() - v15; /*0x684436*/
      if ( v3 >= v16 ) /*0x68443c*/
        break; /*0x68443c*/
      v2 = v16 - v3; /*0x684442*/
    }
    if ( v2 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    Progress::GetAverage((Progress *)&stru_AC4B30.__pad_EC[828]); /*0x684451*/
    __asm /*0x684456*/
    {
      fcom ds:dbl_7F0E70
      fst [esp+50h+var_38]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 )
    {
      __asm { fstp st } /*0x6845ed*/
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    __asm /*0x68446b*/
    {
      fcomp [esp+50h+var_40]
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x684474*/
    {
      v15 = Timer::GetTicks(); /*0x684490*/
      v16 = 7200; /*0x684498*/
      v13 = v14; /*0x6844a4*/
    }
    v6 = v18; /*0x6844b0*/
    if ( Ticks != -1 ) /*0x6844b6*/
    {
      v7 = Timer::GetTicks() - Ticks; /*0x6844c1*/
      if ( v7 >= v18 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v18 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
LABEL_18:
      Ticks = Timer::GetTicks(); /*0x6844d3*/
      v18 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x68453f*/
  {
    Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], v1); /*0x68454b*/
    __asm /*0x684550*/
    {
      fcomp ds:dbl_7F0E68
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x68455b*/
    {
      v11 = (char *)dword_A8DA78[i]; /*0x684562*/
      ToWideStringChar(v11); /*0x684567*/
      ToWideStringChar(v11); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v12 = *(_DWORD *)(dword_A8DA78[i] + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v12, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)&dword_A8B238, *((#375 **)stru_A80220.? + v12)) ) /*0x6845aa*/
      {
        dword_A8E2AC = -1; /*0x6845bf*/
        memset(word_A8E258, 0, 0x28u); /*0x6845c9*/
        word_A8E258[20] = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v1; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}



// ==== 0x00684620  Scenario::LoadWithProgress  this=Scenario  sig=csp ====
char __usercall Scenario::LoadWithProgress@<al>(const char *this@<ecx>, double a2@<st0>)
{
  char v2; // al
  wchar_t *v3; // edi
  wchar_t *StringCSF; // eax
  Scenario *Instance; // esi
  int v6; // eax
  int uniqueId; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  _WORD *v12; // edi
  int v13; // eax
  char v14; // bl
  ScenarioClass *v15; // ecx
  int *v16; // eax
  char Sync; // bl
  int i; // esi
  int j; // esi
  wchar_t *v23; // [esp-10h] [ebp-258h]
  char v24; // [esp-8h] [ebp-250h]
  const wchar_t *v25; // [esp-4h] [ebp-24Ch]
  int _72B380; // [esp-4h] [ebp-24Ch]
  ObjectClass *v27; // [esp+0h] [ebp-248h]
  ObjectClass *v28; // [esp+0h] [ebp-248h]
  LoadProgressMgr *v29; // [esp+10h] [ebp-238h]
  int v30[2]; // [esp+14h] [ebp-234h] BYREF
  const wchar_t *v31; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v33; // [esp+30h] [ebp-218h]
  int v34; // [esp+34h] [ebp-214h]
  int v35; // [esp+38h] [ebp-210h]
  int v36; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v38[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, this); /*0x684653*/
  dword_A8ED84 = 0; /*0x68466b*/
  LOBYTE(dword_A8B230[381].ptr_4) = 1; /*0x684675*/
  ++dword_A8E7AC; /*0x684685*/
  if ( _strcmpi(&Source[strlen(Source) - 4], aSed) ) /*0x684694*/
    BYTE1(dword_A8B230[375].ptr_0) = 0; /*0x6846be*/
  else
    BYTE1(dword_A8B230[375].ptr_0) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v29 = 0; /*0x6846d4*/
  if ( !byte_A8ED6B ) /*0x6846d8*/
  {
    v2 = 1; /*0x6846eb*/
    if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x6846f2*/
      v2 = dword_A8DA84; /*0x6846f4*/
    ProgressAnim::Init((int)&dword_AC4F58, 0, 1079574528, v2, 0); /*0x684706*/
    v3 = 0; /*0x684710*/
    if ( *(_DWORD *)&dword_A8B238 == 4 && *(_DWORD *)dword_B779C4 ) /*0x68471c*/
    {
      v25 = dword_B779D4; /*0x684729*/
      StringCSF = GetStringCSF(aTxtGameId, 0, g_Str_File_Scenario_CPP, 1199); /*0x684736*/
      swprintf(v38, (const size_t)StringCSF, v25); /*0x684744*/
      v3 = v38; /*0x68474c*/
    }
    Instance = (Scenario *)LoadProgressMgr::GetInstance(); /*0x684758*/
    v29 = (LoadProgressMgr *)Instance; /*0x68475c*/
    Scenario::ComputeDisplayPosition(Instance); /*0x684760*/
    Function::Method_643E80((Function *)&dword_AC4F58, (int)Instance); /*0x68476b*/
    v6 = 0; /*0x68477c*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x684780*/
    {
      v8 = *(_DWORD *)(*dword_A8DA78 + 75); /*0x6847a4*/
      if ( v8 == -3 ) /*0x6847aa*/
        v8 = 0; /*0x6847ac*/
      v6 = *(_DWORD *)(*((_DWORD *)dword_A83C9C + v8) + 188); /*0x6847b7*/
    }
    else
    {
      uniqueId = dword_A8B230[375].uniqueId; /*0x684782*/
      if ( uniqueId != -1 ) /*0x68478b*/
        v6 = *(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 152); /*0x684795*/
    }
    dword_A8B230[374].NeedsSaveOrLink = v6; /*0x6847c3*/
    Scenario::SetDword32((Scenario *)&dword_AC4F58, v6); /*0x6847c9*/
    LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v27); /*0x6847d5*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x6847e1*/
    {
      SHPClass::Load((int)&dword_AC4F58, g_Str_File_PROGBARM_SHP, 0, 0); /*0x684800*/
    }
    else
    {
      _72B380 = Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((int)&dword_AC4F58, aSpldbrShp, 0, _72B380); /*0x6847f0*/
    }
    v24 = *(_DWORD *)&dword_A8B238 != 0; /*0x684819*/
    v9 = Scenario::ComputeDialogPos(Instance, v30); /*0x68481e*/
    TextRenderer::MeasureBuilding((int *)dword_AC4F58.__pad_0, *v9, v9[1], (int)v3, v24, v24); /*0x68482f*/
    v10 = Map_Load(); /*0x684836*/
    Scenario::SetDword30((Scenario *)&dword_AC4F58, v10); /*0x684841*/
    if ( dword_887628 ) /*0x68484d*/
    {
      if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8DA84 > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(_DWORD *))(*dword_887628 + 48))(dword_887628); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v33 = 0; /*0x6848a3*/
        v34 = 0; /*0x6848b0*/
        v35 = 0; /*0x6848b6*/
        v36 = 0; /*0x6848be*/
        v11 = 1; /*0x6848c2*/
        if ( dword_A8DA84 > 1 ) /*0x6848c4*/
        {
          v12 = &dword_A8E2B2 + 2; /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress((Network *)(dword_A8DA78[v11] + 40), &v31, (int)v30); /*0x6848e5*/
            sprintf(Buffer, "%d.%d.%d.%d", LOBYTE(v30[0]), BYTE1(v30[0]), BYTE2(v30[0]), HIBYTE(v30[0])); /*0x68491f*/
            v13 = Debug::Log(); /*0x68492e*/
            LOWORD(v13) = *v12; /*0x684933*/
            (*(void (__thiscall **)(_DWORD *, char *, int))(*dword_887628 + 44))(dword_887628, Buffer, v13); /*0x684947*/
            ++v11; /*0x68494f*/
            ++v12; /*0x684950*/
          }
          while ( v11 < dword_A8DA84 ); /*0x684955*/
        }
      }
    }
  }
  if ( BYTE1(dword_A8B230[375].ptr_0) ) /*0x684961*/
  {
    v14 = Scenario::LoadOrReloadOptions((Scenario *)byte_ABDFD8, (int)Source); /*0x68497a*/
    if ( v14 ) /*0x68497e*/
    {
      RandomMap::Generate((RandomMap *)byte_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v15) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v15); /*0x684990*/
    }
    strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x6849b8*/
  }
  else
  {
    v14 = ScenarioClass::Construct(Source, a2); /*0x6849ce*/
  }
  if ( !dword_8871E0->__pad_13BC[242] ) /*0x6849d6*/
    MapClass::ClearShroud((MapClass *)&dword_87F7E8, 0); /*0x6849e7*/
  if ( v14 )
  {
    MessageListClass::Init( /*0x684ac9*/
      &unk_A8BC60,
      DSurface_ViewBounds.field_0 + 3,
      dword_886FA4,
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      dword_886FA8 - 6);
    PostLoadInitScenario(v27); /*0x684ace*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 99); /*0x684ae8*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x684af3*/
      {
        if ( byte_A8DBA0 ) /*0x684afc*/
          Process::WaitForExit((Process *)&unk_B052D0, 0x3A98u, 1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].ptr_0) != 0 ? 200 : 100);
    byte_A8B8C1 = 0; /*0x684b30*/
    byte_A8B8C2 = 0; /*0x684b37*/
    Sync = WaitForMultiplayerLoadSync(v28); /*0x684b43*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances((ObjectClass *)&dword_A8B238); /*0x684b53*/
    --dword_A8E7AC; /*0x684b66*/
    if ( !byte_A8ED6B ) /*0x684b6c*/
    {
      if ( Sync ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684b7c*/
        __asm /*0x684b81*/
        {
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x684b8c*/
        {
          do /*0x684bd2*/
          {
            for ( i = 0; i < dword_A8DA84; ++i ) /*0x684b97*/
              Network::UpdateLatencyDisplay((int)&dword_AC4F58, i, 100.0, NAN); /*0x684bae*/
            Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684bc2*/
            __asm /*0x684bc7*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x684bd2*/
        }
      }
    }
    LOBYTE(dword_A8B230[381].ptr_4) = 0; /*0x684bde*/
    Scenario::SetByte96((Scenario *)&dword_AC4F58); /*0x684be5*/
    if ( v29 ) /*0x684bf0*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v29); /*0x684c00*/
    }
    for ( j = dword_A80238 - 1; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*((Scenario **)&dword_A8022C->ptr_0 + j)); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v31 = asc_82083C; /*0x684a31*/
    v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a45*/
    v16 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a50*/
    Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v27); /*0x684a5a*/
    --dword_A8E7AC; /*0x684a6b*/
    LOBYTE(dword_A8B230[381].ptr_4) = 0; /*0x684a71*/
    if ( v29 ) /*0x684a7d*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}



// ==== 0x00684C30  ObjectClass::PostLoadInitScenario  this=ObjectClass  sig=csp ====
int __usercall PostLoadInitScenario@<eax>(ObjectClass *this)
{
  int v1; // edi
  int i; // esi
  int nextArrayIndex; // eax
  void *v4; // eax
  int v5; // eax
  int j; // ebx
  TeamClass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  ParticleSystemClass *v11; // eax
  int v12; // edi
  int Owner; // eax
  int v14; // ecx
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edi
  TagClass *v20; // esi
  int v21; // eax
  int v22; // eax
  HouseClass *v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int m; // eax
  int *v28; // esi
  int v29; // eax
  Building *n; // esi
  AnimClass *v31; // edi
  int *v32; // eax
  int result; // eax
  Voxel *v34; // [esp+14h] [ebp-1Ch]
  int k; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch] BYREF
  int v37; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++dword_A8E7AC; /*0x684c3f*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * i) + 1248))(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * i)); /*0x684c58*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x684c6f*/
  if ( !stru_A8EB00.?[391] ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar((TabClass *)1, v1, (int)v34); /*0x684c88*/
    if ( !*(_DWORD *)&dword_A8B238 ) /*0x684c94*/
    {
      if ( stru_8A38E0 ) /*0x684ca7*/
        nextArrayIndex = dword_A8B230[14].nextArrayIndex; /*0x684ca9*/
      else
        nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x684cb1*/
      v4 = *(void **)((char *)&dword_A8B230[44].ptr_0 + 4 * nextArrayIndex + 2); /*0x684cb7*/
      *(void **)((char *)&dword_A8B230[374].ptr_0 + 2) = v4; /*0x684cbe*/
      *(void **)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(void **)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x684cd4*/
      *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x684ce9*/
      *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x684d03*/
      v36 = ((__int16)v4 << 8) + 128; /*0x684d09*/
      v37 = (SHIWORD(v4) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v36); /*0x684d3e*/
      TacticalClass::SetPositionThunk((RadarClass *)&v36); /*0x684d42*/
    }
  }
  v5 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    v7 = (TeamClass *)*((_DWORD *)dword_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags((Debug *)v7) & 4) != 0 ) /*0x684d68*/
    {
      v8 = TeamClass::FindOrCreate(v7); /*0x684d77*/
      if ( FootClass_Array.?[0] < FootClass_Array.?[6] /*0x684da9*/
        || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
        && FootClass_Array.?[1] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
             &FootClass_Array.?[4],
             FootClass_Array.?[6] + FootClass_Array.?[1],
             0) )
      {
        v9 = FootClass_Array.?[0]++; /*0x684db6*/
        *(_DWORD *)(FootClass_Array.?[5] + 4 * v9) = v8; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 0x10) != 0 ) /*0x684dd1*/
    {
      v10 = TeamClass::FindOrCreate(v7); /*0x684de0*/
      if ( (int)FootClass_Array.? < (int)FootClass_Array.? /*0x684e13*/
        || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
        && FootClass_Array.?[0] > 0
        && ((unsigned __int8 (__thiscall *)(ParticleSystemClass **, char *, _DWORD))FootClass_Array.?->?)(
             &FootClass_Array.?,
             (char *)FootClass_Array.? + FootClass_Array.?[0],
             0) )
      {
        v11 = FootClass_Array.?++; /*0x684e20*/
        *((_DWORD *)&FootClass_Array.?->ObjectClass + (_DWORD)v11) = v10; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 8) != 0 ) /*0x684e3b*/
    {
      v12 = TeamClass::FindOrCreate(v7); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v14 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        v15 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v14 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v14)
          && (v16 = *(_DWORD *)(Owner + 76), v16 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v15 + 8))(v15, v14 + v16, 0) )
        {
          v17 = v15[4]; /*0x684e93*/
          v18 = v15[1]; /*0x684e96*/
          v15[4] = v17 + 1; /*0x684e9c*/
          *(_DWORD *)(v18 + 4 * v17) = v12; /*0x684e9f*/
        }
      }
    }
    v5 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  v19 = 0; /*0x684eb6*/
  --dword_A8E7AC; /*0x684ebb*/
  if ( v5 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v20 = (TagClass *)*((_DWORD *)dword_B0E784 + v19); /*0x684ec8*/
      if ( TagClass::HasValidHouse(v20) ) /*0x684ecd*/
      {
        v21 = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(v20[2].defaultCoords[0] + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v21 + 636); /*0x684eed*/
      }
      ++v19; /*0x684ef8*/
    }
    while ( v19 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( BYTE2(dword_A8B230[374].nextArrayIndex) ) /*0x684f02*/
  {
    v22 = 0; /*0x684f12*/
    for ( k = 0; v22 < stru_A80220.?; k = v22 ) /*0x684f1a*/
    {
      v23 = (HouseClass *)*((_DWORD *)stru_A80220.? + v22); /*0x684f23*/
      if ( v23 ) /*0x684f28*/
      {
        v24 = (*(int (__stdcall **)(int *))(v23->arrayIndex + 24))(&v23->arrayIndex); /*0x684f34*/
        v25 = *(_DWORD *)g_BuildingLoadQueue_Array.?[2]; /*0x684f3b*/
        if ( v24 > *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.?[2] + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int *))(v23->arrayIndex + 28))(&v23->arrayIndex) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(v23, 1.0, 0); /*0x684f58*/
            v26 = *(_DWORD *)(v25 + 184); /*0x684f5d*/
            v24 -= v26; /*0x684f63*/
            __asm { fstp st } /*0x684f67*/
          }
          while ( v24 > v26 ); /*0x684f69*/
        }
        v22 = k; /*0x684f6b*/
      }
      ++v22; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(v34); /*0x684f8e*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x684fa9*/
        m;
        m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  }
  MapClass::ProcessRegion((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x684fc7*/
  Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x684fd1*/
  MapClass::BuildSubzones((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x684fdb*/
  MarkCliffEdgePassability((int)&stru_87F5F0.__pad_58[416]); /*0x684fe5*/
  if ( !*(_DWORD *)&stru_A8EB00.?[404] ) /*0x684ff0*/
  {
    v28 = (int *)__2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v28 ) /*0x685003*/
    {
      v36 = 2688; /*0x68500f*/
      v37 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v29 = WarheadTypeClass::applyDamage(aGascloudsys); /*0x68501b*/
      *(_DWORD *)&stru_A8EB00.?[404] = ParticleSystemClass::Constructor( /*0x685040*/
                                         v28,
                                         *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v29),
                                         &v36,
                                         0,
                                         0,
                                         &dword_B05488,
                                         0);
    }
    else
    {
      *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x685047*/
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6256) ) /*0x685052*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x685063*/
    for ( n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x685076*/
          n;
          n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range( /*0x68509e*/
                (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                0,
                *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6252) - 1) )
        {
          v31 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v31 ) /*0x6850b8*/
          {
            v32 = (int *)(*(int (__thiscall **)(Building *, int *))(*(_DWORD *)n->__pad_0 + 72))(n, &v36); /*0x6850cd*/
            AnimClass::ctor( /*0x6850e0*/
              v31,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6256),
              v32,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x6850fd*/
  Map_Init(*(ObjectClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 8)); /*0x68510b*/
  return result; /*0x685110*/
}



// ==== 0x00685120  ObjectClass::Game_Load  this=ObjectClass  sig=csp ====
int Game_Load(ObjectClass *this)
{
  int v1; // ecx
  TechnoClass *v3; // [esp+0h] [ebp-4h]

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(dword_A8B230[130].uniqueId); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685147*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685158*/
  RadarClass::InitializeHashTable((RadarClass *)&dword_87F7E8); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)dword_A8ED84 - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v1 = 0; /*0x68518f*/
    else
      v1 = dword_B0EA88 - ((_DWORD)dword_A8ED84 - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v1; /*0x685191*/
  }
  dword_B0EA80 = (int)dword_A8ED84; /*0x6851a1*/
  CellClass::setOverlayType((CellClass *)&unk_87E8B8, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(v3); /*0x6851b1*/
  MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}



// ==== 0x006851F0  ObjectClass::ResetScenario  this=ObjectClass  sig=csp ====
int __usercall ResetScenario@<eax>(ObjectClass *a1@<edi>)
{
  int i; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  HouseClass *v7; // edi
  int j; // esi
  AbstractClass *v9; // eax
  Tactical *v10; // eax
  IPersistStream *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int result; // eax
  ObjectClass *v16; // [esp+0h] [ebp-8h]
  ObjectClass *v17; // [esp+0h] [ebp-8h]
  ObjectClass *v18; // [esp+0h] [ebp-8h]

  dword_A8B230[14].referenceCount = 1000000; /*0x6851fc*/
  LOBYTE(dword_A8B230[14].NeedsSaveOrLink) = 1; /*0x68520c*/
  dword_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  dword_A83D4C = 0; /*0x685231*/
  ScenarioClass::InitTimer((ScenarioClass *)dword_A8B230); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = dword_A8E978 - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)dword_A8E96C + i) + 4) + 12))(*((_DWORD *)dword_A8E96C + i) + 4) == 18 /*0x68526c*/
      && i < dword_A8E978 )
    {
      v2 = i; /*0x68526f*/
      if ( i < --dword_A8E978 ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v2; /*0x685281*/
          *((_DWORD *)dword_A8E96C + v2 - 1) = *((_DWORD *)dword_A8E96C + v2); /*0x685285*/
        }
        while ( v2 < dword_A8E978 ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v3 = 0; /*0x6852a1*/
  if ( *(int *)&stru_A8EB00.?[340] > 0 ) /*0x6852a5*/
  {
    v4 = dword_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v3); /*0x6852b2*/
      if ( dword_A8E978 < v4 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !byte_A8E975 && v4 || dword_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E968 + 8))( /*0x6852e4*/
             &dword_A8E968,
             v4 + dword_A8E97C,
             0) )
      {
LABEL_14:
        v6 = dword_A8E978++; /*0x6852f1*/
        *((_DWORD *)dword_A8E96C + v6) = v5; /*0x685300*/
      }
      v4 = dword_A8E970; /*0x685303*/
LABEL_16:
      ++v3; /*0x685308*/
    }
    while ( v3 < *(int *)&stru_A8EB00.?[340] ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x685313*/
  *(_DWORD *)&stru_87F5F0.__pad_58[512] = 0; /*0x685322*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[500] && stru_87F5F0.__pad_58[509] ) /*0x685332*/
  {
    __3_YAXPAX_Z(*(void **)&stru_87F5F0.__pad_58[500]); /*0x685335*/
    *(_DWORD *)&stru_87F5F0.__pad_58[500] = 0; /*0x68533d*/
  }
  stru_87F5F0.__pad_58[509] = 0; /*0x685343*/
  *(_DWORD *)&stru_87F5F0.__pad_58[504] = 0; /*0x685349*/
  Map_Reset_6E5570(a1); /*0x68534f*/
  v7 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v9 = dword_A8B230; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)&dword_A8B230[204].ptr_0 + j) ) /*0x685365*/
    {
      *((_BYTE *)&dword_A8B230[204].ptr_0 + j) = 0; /*0x68536e*/
      BYTE2(v9[374].uniqueId) = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v7); /*0x68537e*/
    }
    v7 = (HouseClass *)((char *)v7 + 1); /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))( /*0x68539e*/
      g_TacticalClass_Instance,
      1);
  v10 = (Tactical *)__2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v10 ) /*0x6853b0*/
    v11 = (IPersistStream *)TacticalMap::Construct(v10); /*0x6853b4*/
  else
    v11 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v11; /*0x6853bf*/
  Map_Setup_6DA980(); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( dword_A8E370 ) /*0x6853d6*/
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
  FootClass_Array.?[0] = 0; /*0x685443*/
  if ( FootClass_Array.?[5] && BYTE1(FootClass_Array.?[7]) ) /*0x685453*/
  {
    __3_YAXPAX_Z((void *)FootClass_Array.?[5]); /*0x685456*/
    FootClass_Array.?[5] = 0; /*0x68545e*/
  }
  BYTE1(FootClass_Array.?[7]) = 0; /*0x685469*/
  FootClass_Array.?[6] = 0; /*0x685471*/
  FootClass_Array.? = 0; /*0x685477*/
  if ( FootClass_Array.? && BYTE1(FootClass_Array.?) ) /*0x685485*/
  {
    __3_YAXPAX_Z(FootClass_Array.?); /*0x685488*/
    FootClass_Array.? = 0; /*0x685490*/
  }
  BYTE1(FootClass_Array.?) = 0; /*0x68549b*/
  FootClass_Array.? = 0; /*0x6854a1*/
  dword_A8B230[381].uniqueId = 3600; /*0x6854a7*/
  dword_A8B230[381].abstractFlags = dword_A8B230[381].uniqueId; /*0x6854bc*/
  dword_A8B230[381].nextArrayIndex = dword_A8B230[381].uniqueId; /*0x6854cd*/
  LOBYTE(dword_A8B230[381].referenceCount) = 0; /*0x6854d8*/
  HIBYTE(dword_A8B230[382].abstractFlags) = 0; /*0x6854e4*/
  BYTE2(dword_A8B230[383].uniqueId) = 0; /*0x6854f0*/
  BYTE1(dword_A8B230[384].ptr_C) = 0; /*0x6854fb*/
  Map_Reset_5549A0(v16); /*0x685501*/
  Map_Reset(v17); /*0x685506*/
  sub_4C5470(v18); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&stru_87F5D8); /*0x685524*/
  LoadGame::CleanupArray((LoadGame *)&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots((LoadGame *)&g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[652] = 0; /*0x68554f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[656] = 0; /*0x685554*/
  *(_DWORD *)&stru_87F5F0.__pad_58[660] = 0; /*0x68555a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[664] = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick((MouseClass *)&stru_87F5F0.__pad_58[416]); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&stru_87F5F0.__pad_58[304] + 12))(&stru_87F5F0.__pad_58[304]); /*0x685590*/
  Debug::Log(); /*0x685598*/
  *(_DWORD *)&stru_A8EB00.?[228] = 0; /*0x6855a7*/
  if ( *(_DWORD *)&stru_A8EB00.?[216] && stru_A8EB00.?[225] ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(*(void **)&stru_A8EB00.?[216]); /*0x6855b8*/
    *(_DWORD *)&stru_A8EB00.?[216] = 0; /*0x6855c0*/
  }
  stru_A8EB00.?[225] = 0; /*0x6855cb*/
  *(_DWORD *)&stru_A8EB00.?[220] = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v12 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x6855e4*/
  v13 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v12++ = dword_B05458; /*0x6855f4*/
    --v13; /*0x6855f9*/
  }
  while ( v13 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( *(_DWORD *)&stru_A8EB00.?[404] ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(*(ScenarioClass **)&stru_A8EB00.?[404]); /*0x685618*/
    if ( *(_DWORD *)&stru_A8EB00.?[404] ) /*0x685625*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_A8EB00.?[404] + 32))(*(_DWORD *)&stru_A8EB00.?[404], 1); /*0x68562b*/
    *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x68562e*/
  }
  LOBYTE(dword_A8B230[14].NeedsSaveOrLink) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  dword_A8B230[14].referenceCount = 1000000; /*0x685659*/
  return result; /*0x685657*/
}



// ==== 0x00685670  Scenario::EndGameFlow  this=Scenario  sig=csp ====
__int16 __usercall Scenario::EndGameFlow@<ax>(Scenario *this)
{
  char v1; // bl
  AsyncIO *v2; // edi
  double v3; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v12; // ecx
  char v13; // al
  __int16 result; // ax
  void *ptr_8; // ecx
  void *ptr_C; // ecx
  AbstractClass *v17; // ecx
  int uniqueId; // ecx
  IPXInterfaceClass *v19; // eax
  int v20; // ebp
  int i; // eax
  int v22; // edx
  int v23; // ecx
  LPARAM v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CreditsPower *v28; // [esp-8h] [ebp-94h]
  ObjectClass *v29; // [esp+8h] [ebp-84h] BYREF
  _DWORD v30[8]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v31[8]; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD v32[8]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v33[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(v29); /*0x68568d*/
    Map_Get_55CF10(v29); /*0x685692*/
  }
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x68569f*/
  stru_A8EB00.?[376] = 0; /*0x6856a5*/
  byte_A8E378 = 0; /*0x6856ac*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    v6 = (char *)p_vtable2[2]; /*0x6856c7*/
    v7 = Ticks - (_DWORD)*p_vtable2; /*0x6856ca*/
    *p_vtable2 = (void *)-1; /*0x6856cc*/
    p_vtable2[2] = &v6[v7]; /*0x6856d0*/
  }
  AsyncIO::Shutdown(v2); /*0x6856d3*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6856e8*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6856f3*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x68570c*/
  Audio::GetFlag((Audio *)g_MixerState); /*0x685715*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685720*/
  v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68572a*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685732*/
    v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685744*/
  v9 = v8 + 300; /*0x685746*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68574c*/
  {
    v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68575a*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685762*/
      v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685774*/
    if ( v9 <= v8 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x6857ca*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x6857d1*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6857e5*/
  }
  v10 = *(_DWORD *)&dword_A8B238; /*0x6857ea*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  v1 = 0; /*0x685802*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685807*/
  {
    v12 = dword_A8B23C; /*0x6858c6*/
LABEL_36:
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x6858ce*/
    if ( v12 ) /*0x6858d7*/
      (*((void (__thiscall **)(ObjectClass *, int))v12->AbstractClass + 41))(v12, 1); /*0x6858dd*/
    byte_A8E9A0 = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685817*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x68581d*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, StringCSF); /*0x685839*/
    v10 = *(_DWORD *)&dword_A8B238; /*0x68583e*/
  }
  v8 = 0; /*0x685849*/
  if ( !dword_A8B23C ) /*0x68584d*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((unsigned __int8 (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x68585a*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68586c*/
LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)&v29 + 3)); /*0x685884*/
    Map_Load_5C9720(0, -1, 3); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
LABEL_29:
  v12 = dword_A8B23C; /*0x685890*/
  if ( dword_A8B23C ) /*0x685898*/
  {
    v13 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x68589c*/
    v12 = dword_A8B23C; /*0x6858a2*/
    v1 = v13; /*0x6858a8*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x6858b8*/
    dword_A8D588 = 3; /*0x6858ba*/
  if ( !v1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*((void (__thiscall **)(ObjectClass *))v12->AbstractClass + 43))(v12); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[143].NeedsSaveOrLink, -1, 3, 1, 1, 1); /*0x685915*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685940*/
  if ( !BYTE2(dword_A8B230[374].abstractFlags) ) /*0x68594b*/
  {
    __0Iostream_init_QAE_XZ_5((Iostream_init *)((char *)&v29 + 3)); /*0x685959*/
    Map_Load_6C8E80(v1, -1, 3); /*0x685960*/
  }
  ptr_8 = dword_A8B230[144].ptr_8; /*0x68596b*/
  if ( ptr_8 != (void *)-1 ) /*0x685973*/
    Movie::PlayWrapper((int)ptr_8, -1, 3, 1, 1, 1); /*0x68597d*/
  ptr_C = dword_A8B230[144].ptr_C; /*0x685987*/
  if ( ptr_C != (void *)-1 ) /*0x68598f*/
    Movie::PlayWrapper((int)ptr_C, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !CopyProtection::CheckProtectedData() || (v17 = dword_A8B230, HIBYTE(dword_A8B230[374].abstractFlags)) ) /*0x6859b1*/
  {
    byte_A8E9A0 = 0; /*0x685b33*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685b49*/
  }
  if ( LOBYTE(dword_A8B230[374].abstractFlags) ) /*0x6859bf*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x6859c9*/
    if ( uniqueId != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(_DWORD *)(*((_DWORD *)dword_A83CFC + uniqueId) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(v28, 3, v8); /*0x6859ee*/
    byte_A8E9A0 = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a0f*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 || !dword_A8B23C ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) ) /*0x685a2b*/
  {
    v17 = dword_A8B230; /*0x685a32*/
LABEL_58:
    if ( LOBYTE(v17[374].nextArrayIndex) ) /*0x685a38*/
    {
      if ( BYTE1(v17[205].ptr_4) ) /*0x685a42*/
        Map_Delete_5ADE20((int)v17, (const char *)&v17[7].ptr_C); /*0x685a52*/
      else
        Map_Delete_5ADE20((int)v17, (const char *)&v17->ptr_4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a6b*/
      Map_Delete((ObjectClass *)dword_A8B230); /*0x685a74*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685a81*/
    }
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685a84*/
LABEL_64:
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a8f*/
  Scenario::CopyLocalScenarioData((Scenario *)&stru_8A38E0); /*0x685a9f*/
  ++dword_A8B230[130].ptr_C; /*0x685ab0*/
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x685ada*/
    && dword_A8B23C
    && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x685af5*/
      if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x685b00*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x685b06*/
      *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685b0d*/
      v19 = (IPXInterfaceClass *)__2_YAPAXI_Z(0x3F310u); /*0x685b13*/
      if ( v19 ) /*0x685b1d*/
        *(_DWORD *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v19); /*0x685b26*/
      else
        *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685b4a*/
    }
    WinsockInterface::Init(*(WinsockInterface **)&stru_887598.isAliveFlag); /*0x685b56*/
    v20 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x685b69*/
    qmemcpy(v33, dword_A8DA90, sizeof(v33)); /*0x685b6f*/
    qmemcpy(v31, &stru_A8B250.__pad_0[108], sizeof(v31)); /*0x685b7f*/
    qmemcpy(v30, &stru_A8B250.__pad_0[76], sizeof(v30)); /*0x685b8f*/
    qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x685b9f*/
    LOBYTE(result) = InitNetworkGameState(); /*0x685ba1*/
    if ( !(_BYTE)result ) /*0x685ba8*/
    {
      if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x685bb2*/
      {
        result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)( /*0x685bb8*/
                   *(_DWORD *)&stru_887598.isAliveFlag,
                   1);
        *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x685bba*/
      }
      byte_A8E9A0 = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    *(_DWORD *)&stru_A8B250.__pad_0[36] = v20; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v22 = v30[i]; /*0x685be2*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x685be6*/
      v23 = v31[i]; /*0x685bec*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 76] = v22; /*0x685bf0*/
      v24 = v33[i]; /*0x685bf6*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 108] = v23; /*0x685bfa*/
      dword_A8DA90[i] = v24; /*0x685c00*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685c14*/
  }
  byte_A8E9A0 = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !byte_A8E9A0 ) /*0x685c28*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685c32*/
  while ( !ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
             (char *)&dword_A8B230[130].abstractFlags,
             1,
             v3,
             dword_A8B230[375].uniqueId) )
    ; /*0x685c5d*/
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x685c9d*/
    && dword_A8B23C
    && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x685cad*/
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x685ccc*/
        v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685cdf*/
      else
        v25 = 15; /*0x685cce*/
      Network::SetConnectionParams(&unk_A8E9C0, v25, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d05*/
        v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d18*/
      else
        v26 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(&unk_A8E9C0, v26, -1, 600); /*0x685d27*/
    }
    else if ( *(_DWORD *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d4c*/
        v27 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d5f*/
      else
        v27 = 60; /*0x685d4e*/
      Network::SetConnectionParams(&unk_A8E9C0, v27, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x685d7a*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x685d87*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x685d90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}



// ==== 0x00685DC0  Scenario::EndGame  this=Scenario  sig=csp ====
char __usercall Scenario::EndGame@<al>(Scenario *this)
{
  AsyncIO *v1; // edi
  double v2; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // eax
  char v11; // bl
  wchar_t *StringCSF; // eax
  ObjectClass *v13; // ecx
  char v14; // al
  int v15; // eax
  int *v16; // eax
  wchar_t *v17; // eax
  IPXInterfaceClass *v18; // eax
  int v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  wchar_t *v28; // [esp-1Ah] [ebp-A8h]
  wchar_t *v29; // [esp-16h] [ebp-A4h]
  int v30; // [esp-Ah] [ebp-98h]
  ObjectClass *v31[2]; // [esp+6h] [ebp-88h] BYREF
  _DWORD v32[8]; // [esp+Eh] [ebp-80h] BYREF
  _DWORD v33[8]; // [esp+2Eh] [ebp-60h] BYREF
  _DWORD v34[8]; // [esp+4Eh] [ebp-40h] BYREF
  _DWORD v35[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x685ddb*/
  {
    RunNetworkGameLoop(v31[0]); /*0x685ddd*/
    Map_Get_55CF10(v31[0]); /*0x685de2*/
  }
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x685def*/
  stru_A8EB00.?[376] = 0; /*0x685df5*/
  byte_A8E378 = 0; /*0x685dfc*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    v5 = (char *)p_vtable2[2]; /*0x685e17*/
    v6 = Ticks - (_DWORD)*p_vtable2; /*0x685e1a*/
    *p_vtable2 = (void *)-1; /*0x685e1c*/
    p_vtable2[2] = &v5[v6]; /*0x685e20*/
  }
  AsyncIO::Shutdown(v1); /*0x685e23*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x685e38*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x685e43*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685e5c*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x685e7b*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x685e96*/
  }
  Audio::GetFlag((Audio *)g_MixerState); /*0x685ea1*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685eac*/
  v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x685eb6*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685ebe*/
    v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685ed0*/
  v8 = v7 + 300; /*0x685ed2*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x685ed8*/
  {
    v9 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x685ee6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x685eee*/
      v9 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x685f00*/
    if ( v8 <= v9 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x685f35*/
  v10 = *(_DWORD *)&dword_A8B238; /*0x685f3a*/
  v11 = 0; /*0x685f41*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685f52*/
  {
    v13 = dword_A8B23C; /*0x686014*/
LABEL_36:
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68601a*/
    if ( v13 ) /*0x686023*/
      (*((void (__thiscall **)(ObjectClass *, _DWORD))v13->AbstractClass + 41))(v13, 0); /*0x686028*/
    byte_A8E9A0 = 0; /*0x686035*/
    LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68603c*/
    return v15; /*0x68604b*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685f62*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x685f68*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2492); /*0x685f7b*/
    ChatMessageWOL(1, StringCSF); /*0x685f84*/
    v10 = *(_DWORD *)&dword_A8B238; /*0x685f89*/
  }
  if ( !dword_A8B23C ) /*0x685f96*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((unsigned __int8 (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x685fa4*/
  {
    LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fb6*/
LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)v31 + 3)); /*0x685fce*/
    Map_Load_5C9720(0, -1, v8); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
LABEL_29:
  v13 = dword_A8B23C; /*0x685fda*/
  if ( dword_A8B23C ) /*0x685fe2*/
  {
    v14 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x685fe6*/
    v13 = dword_A8B23C; /*0x685fec*/
    v11 = v14; /*0x685ff2*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x686002*/
    dword_A8D588 = 3; /*0x686004*/
  if ( !v11 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*((void (__thiscall **)(ObjectClass *))v13->AbstractClass + 43))(v13); /*0x68604e*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68605b*/
LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[144].ptr_0, -1, v8, 1, 1, 1); /*0x686060*/
  LOBYTE(v15) = Screen::Capture(1, 0, v11, -1); /*0x68607c*/
  if ( *(_DWORD *)&dword_A8B238 /*0x6860ec*/
    || (dword_A8D5F8 & 2) != 0
    || (v31[1] = (ObjectClass *)asc_82083C,
        v29 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_Scenario_CPP, 2559),
        v28 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_Scenario_CPP, 2559),
        v16 = (int *)GetStringCSF(aTxtToReplay, 0, g_Str_File_Scenario_CPP, 2559),
        (v15 = Dialog::ShowMessageBox(v16, v28, v29, 0, 0, v30)) != 0) )
  {
    if ( !v11 ) /*0x6860f0*/
    {
      byte_A8E9A0 = 0; /*0x6863c3*/
      return v15; /*0x6863c3*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6860fd*/
  {
    v17 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Scenario_CPP, 2566); /*0x686110*/
    ChatMessageWOL(1, v17); /*0x686119*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x686141*/
    || !dword_A8B23C
    || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x68615d*/
    if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x686168*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x68616e*/
    *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686175*/
    v18 = (IPXInterfaceClass *)__2_YAPAXI_Z(0x3F310u); /*0x68617b*/
    if ( v18 ) /*0x686185*/
      *(_DWORD *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v18); /*0x68618e*/
    else
      *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686195*/
  }
  WinsockInterface::Init(*(WinsockInterface **)&stru_887598.isAliveFlag); /*0x6861a1*/
  v19 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x6861b4*/
  qmemcpy(v35, dword_A8DA90, sizeof(v35)); /*0x6861ba*/
  qmemcpy(v33, &stru_A8B250.__pad_0[108], sizeof(v33)); /*0x6861ca*/
  qmemcpy(v34, &stru_A8B250.__pad_0[76], sizeof(v34)); /*0x6861da*/
  qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x6861ea*/
  LOBYTE(v15) = InitNetworkGameState(); /*0x6861ec*/
  if ( (_BYTE)v15 ) /*0x6861f3*/
  {
    *(_DWORD *)&stru_A8B250.__pad_0[36] = v19; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v21 = v34[i]; /*0x686246*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x68624a*/
      v22 = v33[i]; /*0x686250*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 76] = v21; /*0x686254*/
      v23 = v35[i]; /*0x68625a*/
      *(_DWORD *)&stru_A8B250.__pad_0[i * 4 + 108] = v22; /*0x68625e*/
      dword_A8DA90[i] = v23; /*0x686264*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x686278*/
LABEL_65:
    ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 0, v2, dword_A8B230[375].uniqueId); /*0x686282*/
    if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x6862be*/
      && dword_A8B23C
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
    {
      SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x6862ce*/
      if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x6862ed*/
          v24 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686300*/
        else
          v24 = 15; /*0x6862ef*/
        Network::SetConnectionParams(&unk_A8E9C0, v24, -1, 600, 1); /*0x686311*/
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x686326*/
          v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686339*/
        else
          v25 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(&unk_A8E9C0, v25, -1, 600); /*0x686348*/
      }
      else if ( *(_DWORD *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x68636c*/
          v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x68637f*/
        else
          v26 = 60; /*0x68636e*/
        Network::SetConnectionParams(&unk_A8E9C0, v26, -1, 600, 1); /*0x686390*/
      }
    }
    GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x68639a*/
    if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6863a7*/
      Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x6863af*/
    LOBYTE(v15) = TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x6861fd*/
  {
    LOBYTE(v15) = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)( /*0x686203*/
                    *(_DWORD *)&stru_887598.isAliveFlag,
                    1);
    *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x686205*/
  }
  byte_A8E9A0 = 0; /*0x68620f*/
LABEL_60:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x68621d*/
    LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68622a*/
  return v15; /*0x686045*/
}



// ==== 0x006863E0  GameFrameCheck_Check  this=-  sig=ida-proto ====
int __usercall GameFrameCheck_Check@<eax>(AsyncIO *a1@<esi>, double a2@<st0>)
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v10; // [esp+0h] [ebp-18h]

  MouseClass::LoadCursors(); /*0x6863e3*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x686404*/
    && *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x68641f*/
  }
  stru_A8EB00.?[376] = 0; /*0x68642a*/
  byte_A8E378 = 0; /*0x686433*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x68643a*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], 0); /*0x68643e*/
  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x686450*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x686459*/
  {
    Ticks = Timer::GetTicks(); /*0x68645e*/
    v4 = (char *)p_vtable2[2]; /*0x686465*/
    v5 = Ticks - (_DWORD)*p_vtable2; /*0x686468*/
    *p_vtable2 = (void *)-1; /*0x68646a*/
    p_vtable2[2] = &v4[v5]; /*0x686472*/
  }
  AsyncIO::Shutdown(a1); /*0x686475*/
  Timer::GetTicks(); /*0x68647e*/
  v10 = Timer::GetTicks(); /*0x68649d*/
  Theme::Stop((Theme *)&unk_A83D10, 1); /*0x6864b4*/
  AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6864d8*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 0, a2, dword_A8B230[375].uniqueId); /*0x6864fc*/
  GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v6 = 60; /*0x68650f*/
    if ( v10 != -1 ) /*0x686516*/
    {
      v7 = Timer::GetTicks() - v10; /*0x686521*/
      if ( v7 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v6 = 60 - v7; /*0x686529*/
    }
    if ( v6 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x686536*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x68654a*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x686553*/
  return TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x686562*/
}



// ==== 0x00686570  ObjectClass::GameFrameCheck_Check  this=ObjectClass  sig=csp ====
char GameFrameCheck_Check_686570(ObjectClass *this)
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // esi
  char result; // al
  AsyncIO *v9; // [esp+0h] [ebp-8h]

  p_vtable2 = &dword_A8B230[43].ptr_8; /*0x686579*/
  stru_A8EB00.?[376] = 0; /*0x68657f*/
  byte_A8E378 = 0; /*0x686585*/
  if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x68658e*/
  {
    Ticks = Timer::GetTicks(); /*0x686593*/
    v3 = (char *)p_vtable2[2]; /*0x68659a*/
    v4 = Ticks - (_DWORD)*p_vtable2; /*0x68659d*/
    *p_vtable2 = (void *)-1; /*0x68659f*/
    p_vtable2[2] = &v3[v4]; /*0x6865a7*/
  }
  dword_A8B230[130].ptr_C = (void *)1; /*0x6865b0*/
  AsyncIO::Shutdown(v9); /*0x6865ba*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6865c5*/
  (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6865d9*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6865e4*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6865ee*/
  Theme::Stop((Theme *)&unk_A83D10, 1); /*0x6865fa*/
  Audio::GetFlag((Audio *)g_MixerState); /*0x686605*/
  VoxClass::FindAndPlay(&stru_83DB34, -1); /*0x686616*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x686621*/
  v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68662b*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x686634*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x686646*/
  v6 = v5 + 300; /*0x686649*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68664f*/
  {
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68665d*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x686666*/
      v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x686678*/
    if ( v6 <= v7 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6866ad*/
  result = DSurface_ViewBounds.__pad_8[16]; /*0x6866b2*/
  if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] ) /*0x6866c0*/
  {
    result = stru_A8EB00.ObjectTypeClass[36]; /*0x6866c8*/
    if ( *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6866ea*/
    }
  }
  byte_A8E9A0 = 0; /*0x6866ef*/
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
char __usercall ScenarioClass::Construct@<al>(char *Source@<ecx>, double a2@<st0>)
{
  char result; // al
  char Map; // bl
  CCINIClass v5; // [esp+10h] [ebp-C4h] BYREF
  CCFileClass v6; // [esp+68h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+C0h] [ebp-14h] BYREF
  int v8; // [esp+CCh] [ebp-8h]

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x686765*/
    v5.?[0] = 0; /*0x68676b*/
    v5.?[1] = 0; /*0x68676f*/
    GenericList::Constructor((GenericList *)&v5.?[2]); /*0x686773*/
    v5.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x68677c*/
    Node::Init((Node *)&v5.?[8]); /*0x686784*/
    v5.? = 0; /*0x68678d*/
    v5.ownsFile = 0; /*0x686792*/
    *(_DWORD *)v5.INIClass = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(&v6, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(&v5, (int)&v6, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x686836*/
      Map = ScenarioClass::LoadMap(0, (bool *)v5.INIClass, a2); /*0x686851*/
      *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x686853*/
      v8 = 0; /*0x68685b*/
      Vector::Clear((int)v7); /*0x686862*/
      *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x686873*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x6867db*/
      v8 = 0; /*0x6867e3*/
      Vector::Clear((int)v7); /*0x6867ea*/
      *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}



// ==== 0x00686890  ScenarioClass::SetupAlliances  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::SetupAlliances(ScenarioClass *this)
{
  TechnoClass *v1; // esi
  int i; // esi
  HouseClass *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  HouseClass *v8; // eax
  int *Owner; // ebp
  int j; // esi
  HouseClass *v11; // edx
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int *v18; // ecx
  int result; // eax
  TechnoClass *v20; // [esp-8h] [ebp-1Ch]
  ObjectClass *v21; // [esp+4h] [ebp-10h]
  int v22; // [esp+Ch] [ebp-8h]

  v20 = v1; /*0x6868b2*/
  if ( *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 < *(_DWORD *)&dword_8871E0->__pad_13BC[276] && !byte_A8ED6B ) /*0x6868bc*/
  {
    for ( i = 0; i < dword_A80238; ++i ) /*0x6868c7*/
    {
      v4 = (HouseClass *)*(&dword_A8022C->ptr_0 + i); /*0x6868ce*/
      if ( !v4->currentPlayer[0] && !*(_BYTE *)(v4->relatedTagsCapacity + 422) && *(int *)&stru_A8B250.__pad_0[36] < 1 ) /*0x6868ef*/
        HouseClass::SDDTORAllAndTriggers(v4); /*0x6868f1*/
    }
  }
  Event::Dispatch(); /*0x686900*/
  if ( !byte_A8ED6B ) /*0x68690c*/
  {
    v5 = dword_A8E7AC; /*0x686914*/
    dword_A8E7AC = 0; /*0x68691c*/
    if ( dword_A8B23C ) /*0x686926*/
    {
      (*(void (__thiscall **)(ObjectClass *, ScenarioClass *))(dword_A8B23C->ptr_0 + 132))(dword_A8B23C, this); /*0x68692b*/
      ComputeMultiEngineerAdjustment((TechnoClass *)dword_A8B23C); /*0x686937*/
    }
    else
    {
      GenerateScenarioUnits((char)this); /*0x686940*/
    }
    dword_A8E7AC = v5; /*0x686945*/
  }
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 93); /*0x686952*/
  Event::Dispatch(); /*0x686957*/
  if ( stru_A8B250.__pad_0[17] ) /*0x686963*/
  {
    v6 = *(_DWORD *)&dword_8871E0->__pad_13BC[180]; /*0x686971*/
    if ( v6 <= dword_A8B54C ) /*0x686979*/
      v6 = dword_A8B54C; /*0x68697b*/
    if ( v6 >= *(_DWORD *)&dword_8871E0->__pad_13BC[184] ) /*0x686985*/
      v6 = *(_DWORD *)&dword_8871E0->__pad_13BC[184]; /*0x686987*/
    if ( v6 > 0 ) /*0x68698b*/
    {
      v7 = v6; /*0x68698d*/
      do /*0x68699a*/
      {
        CrateClass::FindPlacement((CrateClass *)&dword_87F7E8); /*0x686994*/
        --v7; /*0x686999*/
      }
      while ( v7 ); /*0x68699a*/
    }
  }
  Event::Dispatch(); /*0x68699c*/
  GetHouseData(v20); /*0x6869a6*/
  v8 = (HouseClass *)SuperWeaponTypeClass::FindByName(&g_INI_Key_Special); /*0x6869b0*/
  Owner = (int *)HouseClass::FindOwner(v8); /*0x6869bc*/
  for ( j = 0; j < dword_A80238; ++j ) /*0x6869c7*/
  {
    *(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 22388) = *(&dword_A8022C->ptr_0 + j); /*0x6869db*/
    v11 = dword_A8022C; /*0x6869e1*/
    v12 = *(&dword_A8022C->ptr_0 + j); /*0x6869e7*/
    if ( !*(_BYTE *)(v12 + 492) && !*(_BYTE *)(*(_DWORD *)(v12 + 52) + 422) ) /*0x6869fb*/
    {
      v13 = (_DWORD *)(v12 + 22080); /*0x686a12*/
      v14 = *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_FFC[380] + 4 * *(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 388)); /*0x686a23*/
      *v13 = dword_A8ED84; /*0x686a26*/
      v13[1] = v22; /*0x686a28*/
      v13[2] = v14; /*0x686a2b*/
      v21 = (ObjectClass *)(*(int (__stdcall **)(int))(*(_DWORD *)(*(&dword_A8022C->ptr_0 + j) + 36) + 24))(*(&dword_A8022C->ptr_0 + j) + 36); /*0x686a4b*/
      v15 = *(&dword_A8022C->ptr_0 + j); /*0x686a4f*/
      LOWORD(v16) = Math::RoundToInt( /*0x686a6b*/
                      (double)*(int *)(*(_DWORD *)&dword_8871E0->__pad_FFC[780] + 4 * *(_DWORD *)(v15 + 388))
                    * 0.01
                    * (double)(int)v21);
      HouseClass::AddPower((HouseClass *)v15, v16); /*0x686a73*/
      v11 = dword_A8022C; /*0x686a78*/
    }
    v17 = *(_DWORD *)(*(&v11->ptr_0 + j) + 52); /*0x686a81*/
    if ( *(_BYTE *)(v17 + 422) ) /*0x686a84*/
      *(_BYTE *)(v17 + 423) = 0; /*0x686a8e*/
    else
      *(_BYTE *)(v17 + 423) = 1; /*0x686a97*/
    v18 = (int *)*(&dword_A8022C->ptr_0 + j); /*0x686aa4*/
    if ( v18 != Owner ) /*0x686aa9*/
    {
      HouseClass::HandleAlliance(v18, (int)Owner, 0); /*0x686aae*/
      HouseClass::HandleAlliance(Owner, *(&dword_A8022C->ptr_0 + j), 0); /*0x686ac1*/
    }
  }
  if ( dword_A8B23C ) /*0x686ae0*/
  {
    (*(void (__thiscall **)(ObjectClass *, ObjectClass *))(dword_A8B23C->ptr_0 + 136))(dword_A8B23C, v21); /*0x686ae4*/
    (*(void (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 140))(dword_A8B23C); /*0x686af2*/
  }
  Map_Setup(v21); /*0x686afe*/
  *(_DWORD *)byte_A8D108 = 16843009; /*0x686b08*/
  dword_A8D10C = 16843009; /*0x686b0e*/
  return result; /*0x686b14*/
}



// ==== 0x00686B20  ScenarioClass::LoadMap  this=ScenarioClass  sig=csp ====
char __usercall ScenarioClass::LoadMap@<al>(
        char a1@<dl>,
        ScenarioClass *a2@<ecx>,
        double a3@<st0>,
        ObjectClass *a4@<edi>)
{
  ScenarioClass *v4; // ebp
  int v5; // ecx
  int v6; // eax
  int ptr_0; // ecx
  int v8; // eax
  char Bool_Overwrite; // al
  unsigned int v10; // edx
  char *v11; // edi
  char *v12; // edi
  unsigned int v13; // ecx
  int Section; // eax
  int v15; // eax
  unsigned int v16; // kr08_4
  wchar_t *StringCSF; // eax
  int v18; // eax
  unsigned int v19; // kr0C_4
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int i; // eax
  AbstractClass *v32; // ecx
  int v33; // eax
  int j; // esi
  int *v35; // eax
  int *v36; // eax
  LoadingScreen *Instance; // eax
  Tactical *v38; // eax
  IPersistStream *v39; // eax
  INIClass *v40; // ebp
  int KeyCount; // ebx
  int k; //... [30673 chars total]



// ==== 0x00687CE0  SaveScenarioToINI  this=-  sig=csp ====
char *__usercall SaveScenarioToINI@<eax>(char *Source@<ecx>, char a2@<dl>, int a3@<edi>)
{
  _DWORD *v4; // eax
  char v5; // al
  ObjectClass *v7; // [esp+0h] [ebp-FCh]
  char v8; // [esp+Bh] [ebp-F1h]
  ObjectClass v10; // [esp+10h] [ebp-ECh] BYREF
  int v11[3]; // [esp+C4h] [ebp-38h] BYREF
  int v12; // [esp+D0h] [ebp-2Ch]
  RawFileClass v13; // [esp+D8h] [ebp-24h] BYREF

  v10.ptr_8 = 0; /*0x687cf4*/
  v10.ptr_C = 0; /*0x687cf8*/
  GenericList::Constructor((GenericList *)&v10.uniqueId); /*0x687cfc*/
  v10.uniqueId = (int)&List<INIClass::INISection *>::`vftable'; /*0x687d05*/
  Node::Init((MixFileClass *)&v10.fallRate); /*0x687d0d*/
  v10.ambientSoundController[1] = 0; /*0x687d17*/
  LOBYTE(v10.ambientSoundController[2]) = 0; /*0x687d1d*/
  v10.ptr_4 = (int)&CCINIClass_Vtable; /*0x687d21*/
  if ( byte_A8ED6B ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d34*/
    v5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 20))(v4, 0); /*0x687d3e*/
    v10.customSound_controller[3] = (int)&CCFileClass::`vftable'; /*0x687d48*/
    v8 = v5; /*0x687d50*/
    v12 = 0; /*0x687d54*/
    Vector::Clear((int)v11); /*0x687d5b*/
    v10.customSound_controller[3] = (int)&off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10.customSound_controller[3]); /*0x687d6c*/
    if ( v8 ) /*0x687d75*/
    {
      CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d7c*/
      CCINIClass::Load((CCINIClass *)&v10.ptr_4, (int)&v10.customSound_controller[3], 1, 0); /*0x687d8d*/
      v10.customSound_controller[3] = (int)&CCFileClass::`vftable'; /*0x687d99*/
      v12 = 0; /*0x687da1*/
      Vector::Clear((int)v11); /*0x687da8*/
      v10.customSound_controller[3] = (int)&off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10.customSound_controller[3]); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)dword_A8B230, (char *)&v10.ptr_4, a2); /*0x687dce*/
  if ( a2 ) /*0x687dd7*/
  {
    if ( dword_ABE154 && *(_DWORD *)dword_ABE154 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((MiniMap *)dword_ABE154, (char *)&v10.ptr_4); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v10); /*0x687df7*/
      MiniMap::Render((MiniMap *)&v10); /*0x687e00*/
      MiniMap::SavePreviewToINI((MiniMap *)&v10, (char *)&v10.ptr_4); /*0x687e0e*/
      ComPtr::Dtor((ComPtr *)&v10); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses((char *)&v10.ptr_4); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI((MapClass *)&dword_87F7E8, (char *)&v10.ptr_4); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim((char *)&v10.ptr_4); /*0x687e3a*/
  ReadFootINI((char *)&v10.ptr_4); /*0x687e43*/
  SaveInfantryToINI(v7, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI((char *)&v10.ptr_4); /*0x687e55*/
  sub_44FE60((char *)&v10.ptr_4); /*0x687e5e*/
  OverlayClass::WriteINI((char *)&v10.ptr_4); /*0x687e67*/
  UnitTypeClass::ReadINIEntry((char *)&v10.ptr_4); /*0x687e70*/
  InfantryClass::SetMission((char *)&v10.ptr_4); /*0x687e79*/
  if ( !a2 || byte_A8ED6B ) /*0x687e8a*/
  {
    nullsub_34(); /*0x687e92*/
    ScriptTypeClass::ReadINI((INIClass *)&v10.ptr_4, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData((INIClass *)&v10.ptr_4, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList((INIClass *)&v10.ptr_4, 0); /*0x687eb3*/
  }
  ReadAudioEventINI((INIClass *)&v10.ptr_4); /*0x687ebc*/
  SaveTriggerTagsToINI((INIClass *)&v10.ptr_4); /*0x687ec5*/
  RawFileClass::Construct((BufferIOFileClass *)&v13, (int)Source); /*0x687ed2*/
  INIClass::WriteDigest((CCINIClass *)&v10.ptr_4, (int)&v13, 1); /*0x687ee5*/
  RawFileClass::Dtor((BufferIOFileClass *)&v13); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v10.ptr_4); /*0x687eff*/
}



// ==== 0x00687F10  ObjectClass::AssignSessionHouses  this=ObjectClass  sig=csp ====
char AssignSessionHouses(ObjectClass *this)
{
  int DeleteAndZero_field_0x08; // edi
  int v2; // esi
  int *v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebx
  int *v8; // eax
  int v9; // ebp
  char *v10; // eax
  int v11; // eax
  int *v12; // ebx
  int v13; // edi
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ebp
  LPARAM v17; // edx
  int v18; // eax
  wchar_t *StringCSF; // eax
  int v20; // eax
  int *v21; // esi
  int v22; // eax
  int v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // esi
  int v28; // [esp+8h] [ebp-4Ch]
  DeleteAndZero v29; // [esp+Ch] [ebp-48h] BYREF
  int v30; // [esp+18h] [ebp-3Ch]
  _DWORD v31[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v33; // [esp+38h] [ebp-1Ch]
  char v34[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v35; // [esp+50h] [ebp-4h]

  DeleteAndZero_field_0x08 = dword_A8DA84; /*0x687f15*/
  v2 = 0; /*0x687f1b*/
  for ( v29.DeleteAndZero_field_0x08 = dword_A8DA84; v2 < DeleteAndZero_field_0x08; ++v2 ) /*0x687f23*/
  {
    v3 = (int *)dword_A8DA78[v2]; /*0x687f2a*/
    if ( *(int *)((char *)v3 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v3, 0); /*0x687f35*/
  }
  v31[0] = 0; /*0x687f42*/
  v31[1] = 0; /*0x687f49*/
  HouseClass_Observer = 0; /*0x687f4d*/
  if ( DeleteAndZero_field_0x08 > 0 ) /*0x687f53*/
  {
    v30 = DeleteAndZero_field_0x08; /*0x687f59*/
    do /*0x688146*/
    {
      v4 = -1; /*0x687f63*/
      v28 = -1; /*0x687f66*/
      v5 = 0; /*0x687f6e*/
      v6 = dword_A8DA78; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((_BYTE *)v31 + v5) && (v4 == -1 || *(_DWORD *)(*v6 + 83) < v4) ) /*0x687f84*/
        {
          v28 = v5; /*0x687f88*/
          v4 = *(_DWORD *)(*v6 + 83); /*0x687f8c*/
        }
        ++v5; /*0x687f8f*/
        ++v6; /*0x687f90*/
      }
      while ( v5 < DeleteAndZero_field_0x08 ); /*0x687f95*/
      v7 = dword_A8DA78[v28]; /*0x687fa0*/
      *((_BYTE *)v31 + v28) = 1; /*0x687fa3*/
      v8 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v8 ) /*0x687fb2*/
        v9 = HouseClass::Construct(v8, *((_DWORD *)dword_A83C9C + *(_DWORD *)(v7 + 75))); /*0x687fc8*/
      else
        v9 = 0; /*0x687fcc*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x687fd5*/
      {
        WideString::Assign((wchar_t **)&v29, (wchar_t *)v7); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29.DeleteAndZero_field_0x04, (const wchar_t **)&v29); /*0x687fe9*/
        DeleteAndZero::Alt(&v29); /*0x687ff2*/
        v10 = String::GetOrEmpty((String *)&v29.DeleteAndZero_field_0x04); /*0x687ffb*/
        if ( v10 ) /*0x688002*/
        {
          strncpy(Destination, v10, 0x14u); /*0x688012*/
          v33 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v9 + 90100) ) /*0x68802b*/
        {
          qmemcpy((void *)(v9 + 90100), Destination, 0x14u); /*0x688038*/
          *(_BYTE *)(v9 + 90120) = v33; /*0x68803a*/
          DeleteAndZero_field_0x08 = v29.DeleteAndZero_field_0x08; /*0x68803b*/
        }
        DeleteAndZero((ObjectClass *)&v29.DeleteAndZero_field_0x04); /*0x688043*/
      }
      else
      {
        if ( aHumanPlayer ) /*0x688051*/
        {
          strncpy(v34, aHumanPlayer, 0x14u); /*0x688065*/
          v35 = 0; /*0x68806d*/
        }
        else
        {
          v34[0] = (unsigned __int8)aHumanPlayer; /*0x688053*/
        }
        if ( v34 != (char *)(v9 + 90100) ) /*0x68807e*/
        {
          qmemcpy((void *)(v9 + 90100), v34, 0x14u); /*0x68808b*/
          *(_BYTE *)(v9 + 90120) = v35; /*0x68808d*/
          DeleteAndZero_field_0x08 = v29.DeleteAndZero_field_0x08; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v9 + 90154), (const wchar_t *)v7, 0x15u); /*0x68809c*/
      *(_WORD *)(v9 + 90194) = 0; /*0x6880a4*/
      *(_BYTE *)(v9 + 492) = 1; /*0x6880ad*/
      sub_4FCE00((ObjectClass *)v9, *(_DWORD *)(v7 + 83), *(_DWORD *)(v7 + 75), *(int *)&stru_A8B250.__pad_0[12]); /*0x6880c4*/
      *(_DWORD *)(v9 + 90196) = SessionClass::GetPlayerColorScheme(*(_DWORD *)(v7 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v9); /*0x6880df*/
      ComputeSessionColorVector((ObjectClass *)v9); /*0x6880e6*/
      *(_DWORD *)(v9 + 90200) = SessionClass::GetOption((int *)v7); /*0x6880f2*/
      *(_DWORD *)(v9 + 90204) = *(_DWORD *)(v7 + 99); /*0x688101*/
      if ( !v28 ) /*0x688107*/
      {
        dword_A83D4C = (Object *)v9; /*0x688109*/
        *(_BYTE *)(v9 + 493) = 1; /*0x68810f*/
      }
      if ( *(_DWORD *)(v7 + 107) == -1 ) /*0x68811a*/
        HouseClass_Observer = v9; /*0x68811c*/
      *(_DWORD *)(v9 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower((int *)v9, 1); /*0x688132*/
      *(_DWORD *)(v7 + 111) = *(_DWORD *)(v9 + 48); /*0x68813a*/
      --v30; /*0x688142*/
    }
    while ( v30 ); /*0x688146*/
  }
  v11 = 0; /*0x688152*/
  v30 = *(_DWORD *)&stru_A8B250.__pad_0[36]; /*0x688154*/
  v12 = (int *)&stru_A8B250.__pad_0[76]; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v11 < v30 ) /*0x688161*/
    {
      v13 = *v12; /*0x688167*/
      if ( *v12 != -1 && v13 != -3 ) /*0x688175*/
      {
        v14 = v12[8]; /*0x68817b*/
        v29.DeleteAndZero_field_0x08 = v11 + 1; /*0x688184*/
        v15 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v15 ) /*0x688192*/
          v16 = HouseClass::Construct(v15, *((_DWORD *)dword_A83C9C + v13)); /*0x6881a5*/
        else
          v16 = 0; /*0x6881a9*/
        v17 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v16 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v16 + 468) = v17; /*0x6881b8*/
        sub_4FCE00((ObjectClass *)v16, v14, v13, *(int *)&stru_A8B250.__pad_0[12]); /*0x6881c8*/
        *(_DWORD *)(v16 + 90196) = SessionClass::GetPlayerColorScheme(v14); /*0x6881da*/
        HouseClass::GetColor((char *)v16); /*0x6881e0*/
        ComputeSessionColorVector((ObjectClass *)v16); /*0x6881e7*/
        *(_DWORD *)(v16 + 90200) = v12[16]; /*0x6881ef*/
        v18 = v12[24]; /*0x6881f5*/
        *(_DWORD *)(v16 + 90204) = v18; /*0x6881fb*/
        if ( v18 != -1 ) /*0x688201*/
          LOBYTE(dword_A8B230[127].ptr_4) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v34, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v35 = 0; /*0x688233*/
        }
        else
        {
          v34[0] = (unsigned __int8)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v34 != (char *)(v16 + 90100) ) /*0x688244*/
        {
          qmemcpy((void *)(v16 + 90100), v34, 0x14u); /*0x68824f*/
          *(_BYTE *)(v16 + 90120) = v35; /*0x688251*/
        }
        StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Scenario_CPP, 4032); /*0x688263*/
        wcscpy((wchar_t *)(v16 + 90154), StringCSF); /*0x688270*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x68827f*/
          *(_DWORD *)(v16 + 588) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5172); /*0x68828d*/
        v20 = *(v12 - 8); /*0x688299*/
        if ( dword_A8DA84 > 1 && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6115) && v20 > 0 ) /*0x6882b3*/
          --v20; /*0x6882b5*/
        HouseClass::SetCombatPower((int *)v16, v20); /*0x6882b9*/
        v11 = v29.DeleteAndZero_field_0x08; /*0x6882be*/
      }
    }
    ++v12; /*0x6882c2*/
  }
  while ( (int)v12 < (int)&stru_A8B250.__pad_0[108] ); /*0x6882cb*/
  v21 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v21 ) /*0x6882e4*/
  {
    v22 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x6882eb*/
    v23 = HouseClass::Construct(v21, *((_DWORD *)dword_A83C9C + v22)); /*0x688303*/
  }
  else
  {
    v23 = 0; /*0x688307*/
  }
  *(_DWORD *)(v23 + 90196) = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68831a*/
  HouseClass::GetColor((char *)v23); /*0x688320*/
  v24 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v24 ) /*0x688336*/
  {
    v25 = SuperWeaponTypeClass::FindByName(&g_INI_Key_Special); /*0x68833d*/
    v26 = HouseClass::Construct(v24, *((_DWORD *)dword_A83C9C + v25)); /*0x688356*/
  }
  else
  {
    v26 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v26 + 90196) = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68836d*/
  return HouseClass::GetColor((char *)v26); /*0x688378*/
}



// ==== 0x00688380  Multiplayer::FindStartPositions  this=VectorClass  sig=csp ====
_DWORD *__thiscall Multiplayer::FindStartPositions(Multiplayer *this)
{
  int v1; // esi
  Multiplayer *v2; // edi
  AbstractClass *v3; // edx
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebp
  _DWORD *v8; // ecx
  int v9; // edi
  signed int v10; // ebp
  unsigned int i; // esi
  int v12; // edi
  int v13; // eax
  __int16 v14; // si
  int v15; // eax
  void *Items; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  int v20; // [esp+14h] [ebp-2Ch]
  Multiplayer *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  VectorClass v25; // [esp+28h] [ebp-18h] BYREF
  int v26; // [esp+38h] [ebp-8h]
  int v27; // [esp+3Ch] [ebp-4h]

  v1 = 0; /*0x688387*/
  v2 = this; /*0x688389*/
  v21 = this; /*0x688391*/
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = dword_A8B230; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x6883a5*/
  v27 = 10; /*0x6883ad*/
  v26 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  v6 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x6883b7*/
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
  if ( dword_A8DA84 > 0 ) /*0x6883f4*/
  {
    v8 = dword_A8DA78; /*0x6883f6*/
    v9 = dword_A8DA84; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(_DWORD *)(*v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      ++v8; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v27; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( v1 <= *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7 ) /*0x688421*/
  {
    v20 = *(_DWORD *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7; /*0x68842b*/
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = v1; /*0x688423*/
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < v10; ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(void **)((char *)&v3[44].ptr_0 + 4 * i + 2) == (void *)dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(int *)((char *)&v3[44].ptr_0 + 4 * i + 2); /*0x688478*/
    if ( v26 < v25.Capacity ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v25.IsAllocated && v25.Capacity || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v25.ptr_0 + 2))(&v25, v4 + v25.Capacity, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v26++; /*0x6884ab*/
      *((_DWORD *)v25.Items + v13) = v12; /*0x6884b6*/
    }
    v3 = dword_A8B230; /*0x6884b9*/
LABEL_24:
    v23 = *(int *)((char *)&v3[44].ptr_0 + 4 * i + 2); /*0x6884bf*/
    Debug::Log(); /*0x6884d9*/
    v4 = v27; /*0x6884de*/
    v3 = dword_A8B230; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( v10 - v26 > 0 ) /*0x688502*/
  {
    Debug::Log(); /*0x68850d*/
    if ( v26 < v10 ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)&stru_87F5F0.__pad_58[720] - 10); /*0x688551*/
        LOWORD(v22) = *(_WORD *)&stru_87F5F0.__pad_58[708] /*0x688573*/
                    + Random::Range(
                        (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                        10,
                        *(_DWORD *)&stru_87F5F0.__pad_58[716] - 10);
        HIWORD(v22) = v14 + *(_WORD *)&stru_87F5F0.__pad_58[712] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (Type *)&stru_87F5F0.__pad_58[416],
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
          if ( v26 < v25.Capacity /*0x688603*/
            || (v25.IsAllocated || !v25.Capacity)
            && v27 > 0
            && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v25.ptr_0 + 2))(
                 &v25,
                 v27 + v25.Capacity,
                 0) )
          {
            v15 = v26++; /*0x688612*/
            *((_DWORD *)v25.Items + v15) = v19; /*0x68861d*/
          }
          Debug::Log(); /*0x688631*/
        }
      }
      while ( v26 < v20 ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  *(_DWORD *)&v2[4] = 0; /*0x688651*/
  *(_DWORD *)&v2[8] = 0; /*0x688654*/
  v2[13] = 0; /*0x688657*/
  v2[12] = (Multiplayer)1; /*0x68865f*/
  *(_DWORD *)v2 = &VectorClass<Cell>::`vftable'; /*0x688663*/
  Multiplayer::CopyDataArray(v2, &v25); /*0x688669*/
  *(_DWORD *)v2 = &DynamicVectorClass<Cell>::`vftable'; /*0x68866e*/
  v25.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x688674*/
  Items = v25.Items; /*0x68867c*/
  v17 = v27; /*0x688684*/
  *(_DWORD *)&v2[16] = v26; /*0x688688*/
  *(_DWORD *)&v2[20] = v17; /*0x68868d*/
  if ( Items && v25.IsAllocated ) /*0x688698*/
    __3_YAXPAX_Z(Items); /*0x68869b*/
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
  ppv = (LPVOID)MEMORY[0xA8B270]; /*0x6886de*/
  v65 = 10; /*0x6886e9*/
  v64 = 0; /*0x6886f1*/
  if ( MEMORY[0xA8B258] ) /*0x6886f9*/
    ppv = (char *)ppv - 1; /*0x6886fb*/
  qmemcpy(v54, (char *)dword_A8B230 + 536, sizeof(v54)); /*0x68871d*/
  Debug::Log(); /*0x688724*/
  Debug::Log(); /*0x68873a*/
  v1 = 0; /*0x68874a*/
  v2 = 0; /*0x68874c*/
  for ( i = 0; i < dword_A83CF0; ++i ) /*0x688752*/
  {
    v4 = (_BYTE *)*((_DWORD *)dword_A83CE4 + i); /*0x68875a*/
    if ( v4[1749] ) /*0x68875d*/
    {
      v5 = 0; /*0x68876d*/
      v6 = dword_8871E0->AutocreateTime[1]; /*0x68876f*/
      if ( v6 <= 0 ) /*0x688777*/
      {
LABEL_9:
        v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 172))(v4); /*0x68878b*/
        ++v2; /*0x688795*/
      }
      else
      {
        v7 = (_DWORD *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x688779*/
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
  for ( j = 0; j < dword_A8E358; ++j ) /*0x6887a9*/
  {
    v9 = (_BYTE *)*((_DWORD *)dword_A8E34C + j); /*0x6887b1*/
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
  if ( dword_A80238 > 0 ) /*0x68881f*/
  {
LABEL_16:
    v12 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v11]; /*0x688825*/
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
    if ( dword_A83CF0 <= 0 ) /*0x6888a9*/
      goto LABEL_35; /*0x6888a9*/
    v16 = v69; /*0x6888af*/
    while ( 1 ) /*0x6888b9*/
    {
      v17 = *((_DWORD *)dword_A83CE4 + v14); /*0x6888b9*/
      if ( *(_BYTE *)(v17 + 1749) /*0x6888e2*/
        && *(_DWORD *)(v17 + 1588) <= *((_DWORD *)ppv + 117)
        && (v15 & *(_DWORD *)(v17 + 1740)) != 0 )
      {
        v18 = 0; /*0x6888ea*/
        v19 = dword_8871E0->AutocreateTime[1]; /*0x6888ec*/
        if ( v19 > 0 ) /*0x6888f4*/
        {
          v20 = (_DWORD *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x6888f6*/
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
      if ( ++v14 >= dword_A83CF0 ) /*0x688956*/
      {
        v10 = 0; /*0x68895c*/
LABEL_35:
        if ( dword_A8E358 > 0 ) /*0x688964*/
        {
          v22 = v75; /*0x68896a*/
          do /*0x688974*/
          {
            v23 = *((_DWORD *)dword_A8E34C + v10); /*0x688974*/
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
          while ( v10 < dword_A8E358 ); /*0x688974*/
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
          v25 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v84 - 1); /*0x688a08*/
          *((_BYTE *)v85 + v25) = 1; /*0x688a0d*/
          v59 = 1; /*0x688a19*/
          v26 = *((_DWORD *)v81 + v25); /*0x688a21*/
          v58 = v26; /*0x688a24*/
        }
        HouseClass::SetMapSeed(ppv, v26); /*0x688b25*/
        if ( MEMORY[0xA8B258] ) /*0x688b31*/
        {
          v39 = __2_YAPAXI_Z(0x8E8u); /*0x688b41*/
          v40 = ppv; /*0x688b51*/
          if ( v39 ) /*0x688b4a*/
          {
            v54[252] = ppv; /*0x688b5a*/
            v41 = BuildingClass::FindBySWType(ppv, (int)&dword_8871E0->SovietSurvivorDivisor[1]); /*0x688b5e*/
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
              if ( (*(_BYTE *)dword_A8B230 & 0x10) != 0 ) /*0x688bfb*/
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
                v49 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v77 - 1); /*0x688ca2*/
                v47 = *((_DWORD *)v74 + v49); /*0x688cab*/
              }
            }
            else
            {
              v48 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v71 - 1); /*0x688c7d*/
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
              if ( (*(_DWORD *)dword_A8B230 & 0x200) != 0 ) /*0x688d68*/
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
        if ( v11 >= dword_A80238 ) /*0x688e42*/
          break; /*0x688e42*/
        goto LABEL_16; /*0x688e42*/
      }
    }
  }
  v54[252] = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 0xFFFF); /*0x688e48*/
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
int __fastcall FindInfantryDeployPosition(int *a1, __int16 *a2, int a3)
{
  __int16 *v3; // esi
  Object *v5; // eax
  int ClosestObjectCell; // eax
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
  __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  int v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  Object *v25; // eax
  int v26; // eax
  int v27; // eax
  __int16 v28[2]; // [esp+10h] [ebp-5Ch] BYREF
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
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, &v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
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
    v29 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = *v3; /*0x689006*/
      v14 = v3[1]; /*0x689009*/
      v15 = *(_DWORD *)&stru_87F5F0.__pad_58[708]; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(_DWORD *)&stru_87F5F0.__pad_58[712]; /*0x689017*/
      v32 = *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1; /*0x689025*/
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
      if ( v13 > *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1 ) /*0x689087*/
        v13 = *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1; /*0x689089*/
      if ( v13 < *(int *)&stru_87F5F0.__pad_58[708] ) /*0x68908d*/
        LOWORD(v13) = *(_WORD *)&stru_87F5F0.__pad_58[708]; /*0x68908f*/
      if ( v14 > v32 ) /*0x689097*/
        v14 = v32; /*0x689099*/
      if ( v14 < *(int *)&stru_87F5F0.__pad_58[712] ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)&stru_87F5F0.__pad_58[712]; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      *(_DWORD *)v28 = v31; /*0x6890b4*/
      if ( v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] - 1; /*0x6890d0*/
        v39 = *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] - 1; /*0x6890e5*/
        v32 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6890fe*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x68910a*/
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
        v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x68913d*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x689156*/
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
        *(_DWORD *)v28 = v33; /*0x689188*/
      }
      if ( v18 == *v3 && v28[1] == v3[1] ) /*0x6891a4*/
        v36 = 1; /*0x6891a6*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v28, 1) ) /*0x6891ba*/
      {
        if ( !v36 ) /*0x6891cf*/
        {
          v42 = 0; /*0x6891e6*/
          v43 = 0; /*0x6891ea*/
          v25 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x6891ee*/
          v26 = Object::FindClosestObjectCell(v25, &v42, 0, 0); /*0x6891f5*/
          if ( !v26 /*0x689218*/
            || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
            && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
          {
            Coord::Subtract((Coord *)v45, (v28[0] << 8) + 128, (v28[1] << 8) + 128, 0); /*0x68923d*/
            v27 = Cell::GetGroundHeight(v45); /*0x68924c*/
            Coord::Subtract((Coord *)v46, (v28[0] << 8) + 128, (v28[1] << 8) + 128, v27); /*0x689274*/
            if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
              return 1; /*0x68928b*/
          }
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
char __thiscall ScenarioClass::SaveLoad_Prefix(ScenarioClass *this, int *dropshipUnitCounts)
{
  int *v3; // ebx
  int Ticks; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // esi
  int v8; // eax
  int i; // ebp
  int v10; // eax
  int j; // ebp
  int v12; // eax
  int k; // ebp
  int v14; // eax
  bool v16; // [esp+71h] [ebp-1h]

  v3 = &this->elapsedTimer[1]; /*0x68931c*/
  Debug::Log(); /*0x689339*/
  v16 = *v3 == -1; /*0x68934b*/
  if ( *v3 != -1 ) /*0x68934f*/
  {
    Ticks = Timer::GetTicks(); /*0x68935b*/
    v5 = this->pauseTimer[0]; /*0x689362*/
    v6 = Ticks - *v3; /*0x689365*/
    *v3 = -1; /*0x689367*/
    this->pauseTimer[0] = v6 + v5; /*0x68936f*/
  }
  v7 = dropshipUnitCounts; /*0x689372*/
  (*(void (__stdcall **)(int *, ScenarioClass *, int, _DWORD))(*dropshipUnitCounts + 16))( /*0x689381*/
    dropshipUnitCounts,
    this,
    14144,
    0);
  v8 = *v7; /*0x68938a*/
  dropshipUnitCounts = (int *)this->dropshipUnitCounts; /*0x689396*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x68939a*/
  for ( i = 0; i < (int)dropshipUnitCounts; ++i ) /*0x6893a5*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->allowableUnitsCount + 4 * i, 4, 0); /*0x6893b8*/
  v10 = *v7; /*0x6893ca*/
  dropshipUnitCounts = (int *)this->blue; /*0x6893d6*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x6893da*/
  for ( j = 0; j < (int)dropshipUnitCounts; ++j ) /*0x6893e5*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->ambientTarget + 4 * j, 4, 0); /*0x6893f8*/
  v12 = *v7; /*0x68940a*/
  dropshipUnitCounts = (int *)this->ionGround; /*0x689416*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v7, &dropshipUnitCounts, 4, 0); /*0x68941a*/
  for ( k = 0; k < (int)dropshipUnitCounts; ++k ) /*0x689425*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, this->ionRed + 4 * k, 4, 0); /*0x689438*/
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
char __thiscall ScenarioClass::SetGlobalToByID(ScenarioClass *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x32 ) /*0x68967a*/
    return 0; /*0x6896b2*/
  v3 = this->globalVariables[40 * a2 + 40 + a2]; /*0x689684*/
  if ( v3 != a3 ) /*0x689698*/
  {
    this->globalVariables[40 * a2 + 40 + a2] = a3; /*0x68969a*/
    this->variablesChanged = 1; /*0x68969e*/
    HouseClass::UpdateAllTypes((HouseClass *)a2); /*0x6896a5*/
  }
  return v3; /*0x6896ae*/
}



// ==== 0x006896C0  ScenarioClass::SetCountryFlag  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SetCountryFlag(ScenarioClass *this, const char *a2, char a3)
{
  int v3; // edi
  char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x6896c4*/
  for ( i = this->globalVariables; strcmp(a2, i); i += 41 ) /*0x6896c6*/
  {
    if ( ++v3 >= 50 ) /*0x689706*/
      return 1; /*0x689706*/
  }
  if ( v3 == -1 ) /*0x689714*/
    return 1; /*0x68970e*/
  if ( (unsigned int)v3 >= 0x32 ) /*0x689719*/
    return 0; /*0x689753*/
  v6 = this->globalVariables[40 * v3 + 40 + v3]; /*0x689721*/
  if ( v6 != a3 ) /*0x689735*/
  {
    this->globalVariables[40 * v3 + 40 + v3] = a3; /*0x689737*/
    this->variablesChanged = 1; /*0x689739*/
    HouseClass::UpdateAllTypes((HouseClass *)v3); /*0x689742*/
  }
  return v6; /*0x689708*/
}



// ==== 0x00689760  ScenarioClass::GetGlobalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetGlobalStateByID(ScenarioClass *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 > 0x31 ) /*0x689766*/
    return 0; /*0x689784*/
  *a3 = this->globalVariables[40 * a2 + 40 + a2]; /*0x68977d*/
  return 1; /*0x689781*/
}



// ==== 0x00689790  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689790(ObjectClass *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = (char *)this + 7304; strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *((_BYTE *)this + 40 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}



// ==== 0x00689820  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_689820(ObjectClass *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = (char *)this + 7304; strcmp(a2, i); i += 41 ) /*0x68982a*/
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
char __thiscall ScenarioClass::SetLocalToByID(ScenarioClass *this, unsigned int a2, char a3)
{
  char v3; // bl

  if ( a2 >= 0x64 ) /*0x68991a*/
    return 0; /*0x689952*/
  v3 = *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2); /*0x689924*/
  if ( v3 != a3 ) /*0x689938*/
  {
    *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2) = a3; /*0x68993a*/
    this->variablesChanged = 1; /*0x68993e*/
    TriggerActionQueue::ProcessAll((TriggerActionQueue *)a2); /*0x689945*/
  }
  return v3; /*0x68994e*/
}



// ==== 0x00689960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_689960(ObjectClass *this, const char *a2, char a3)
{
  TriggerActionQueue *v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == (TriggerActionQueue *)-1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( (unsigned int)v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = (char)v3[40 * (_DWORD)v3 + 9394 + (_DWORD)this]; /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    v3[40 * (_DWORD)v3 + 9394 + (_DWORD)this] = (TriggerActionQueue)a3; /*0x6899d7*/
    *((_BYTE *)this + 13482) = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll(v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}



// ==== 0x00689A00  ScenarioClass::GetLocalStateByID  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::GetLocalStateByID(ScenarioClass *this, unsigned int a2, _BYTE *a3)
{
  if ( a2 >= 0x64 ) /*0x689a06*/
    return 0; /*0x689a24*/
  *a3 = *((_BYTE *)&this->localVariables[10 * a2 + 9] + a2 + 2); /*0x689a1d*/
  return 1; /*0x689a21*/
}



// ==== 0x00689A30  ObjectClass::method_689A30  this=ObjectClass  sig=csp ====
char __thiscall sub_689A30(ObjectClass *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *((_BYTE *)this + 40 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}



// ==== 0x00689AC0  ObjectClass::method_689AC0  this=ObjectClass  sig=csp ====
int __thiscall sub_689AC0(ObjectClass *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = (char *)this + 9354; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}



// ==== 0x00689B20  ScenarioClass::ReadLocalVariables  this=ScenarioClass  sig=csp ====
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
    strcpy((char *)(v7 + 9354), strtok(String, Str)); /*0x689bff*/
    v8 = strtok(0, Str); /*0x689c0a*/
    if ( v8 ) /*0x689c14*/
      *(_BYTE *)(v7 + 9394) = atoi(v8) != 0; /*0x689c24*/
    if ( ++v11 >= KeyCount ) /*0x689c39*/
      break; /*0x689c39*/
    v2 = this; /*0x689b8c*/
  }
  return 1; /*0x689c41*/
}



// ==== 0x00689C60  ScenarioClass::ReadWaypoint  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::ReadWaypoint(ScenarioClass *this, char *a2)
{
  int v3; // edi
  char *pad_248A; // esi
  CHAR v6[12]; // [esp+10h] [ebp-8Ch] BYREF
  CHAR Source[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int *)a2, (int)g_INI_Key_VariableNames, 0); /*0x689c7d*/
  v3 = 0; /*0x689c88*/
  pad_248A = this->__pad_248A; /*0x689c8a*/
  do /*0x689cdb*/
  {
    if ( *pad_248A ) /*0x689c90*/
    {
      wsprintfA(v6, "%d", v3); /*0x689ca0*/
      wsprintfA(Source, "%s,%d", pad_248A, pad_248A[40] != 0); /*0x689cb8*/
      INIClass::SetString(a2, g_INI_Key_VariableNames, v6, Source); /*0x689ccf*/
    }
    ++v3; /*0x689cd4*/
    pad_248A += 41; /*0x689cd5*/
  }
  while ( v3 < 100 ); /*0x689cdb*/
  return 1; /*0x689cdd*/
}



// ==== 0x00689D30  PreviewClass::RenderMapPreview  this=PreviewClass  sig=csp ====
char __thiscall PreviewClass::RenderMapPreview(PreviewClass *this, _DWORD *a2)
{
  PreviewClass *v3; // edi
  PreviewClass *v4; // eax
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

  v3 = this + 552; /*0x689d40*/
  *((_DWORD *)this + 1099) = -1; /*0x689d46*/
  *((_DWORD *)this + 1100) = -1; /*0x689d4c*/
  *((_DWORD *)this + 1101) = -1; /*0x689d52*/
  *((_DWORD *)this + 1102) = -1; /*0x689d58*/
  *((_DWORD *)this + 1103) = -1; /*0x689d5e*/
  v4 = this + 552; /*0x689d64*/
  v5 = 8; /*0x689d66*/
  do /*0x689d74*/
  {
    *(_DWORD *)v4->__pad_0 = 0; /*0x689d6b*/
    v4->PreviewClass_field_0x04 = 0; /*0x689d6d*/
    ++v4; /*0x689d70*/
    --v5; /*0x689d73*/
  }
  while ( v5 ); /*0x689d74*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x689d8d*/
                    (bool *)a2,
                    g_INI_Key_Header,
                    (unsigned __int8 *)g_INI_Key_StartX,
                    *((_DWORD *)this + 1099));
  v7 = *((_DWORD *)this + 1100); /*0x689d92*/
  *((_DWORD *)this + 1099) = Int_Overwrite; /*0x689d98*/
  v8 = INIClass::ReadInt_Overwrite((bool *)a2, g_INI_Key_Header, (unsigned __int8 *)g_INI_Key_StartY, v7); /*0x689dab*/
  v20 = *((_DWORD *)this + 1101); /*0x689db8*/
  *((_DWORD *)this + 1100) = v8; /*0x689dc3*/
  *((_DWORD *)this + 1101) = INIClass::ReadInt_Overwrite( /*0x689dce*/
                               (bool *)a2,
                               g_INI_Key_Header,
                               (unsigned __int8 *)&stru_82BA00.?[151],
                               v20);
  v9 = INIClass::ReadInt_Overwrite( /*0x689de7*/
         (bool *)a2,
         g_INI_Key_Header,
         (unsigned __int8 *)g_INI_Key_Height,
         *((_DWORD *)this + 1102));
  v10 = *((_DWORD *)this + 1103); /*0x689dec*/
  *((_DWORD *)this + 1102) = v9; /*0x689df2*/
  v11 = INIClass::ReadInt_Overwrite( /*0x689e05*/
          (bool *)a2,
          g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumberStartingPoints,
          v10);
  v21 = *((_DWORD *)this + 1145); /*0x689e12*/
  *((_DWORD *)this + 1103) = v11; /*0x689e1d*/
  v12 = INIClass::ReadInt_Overwrite( /*0x689e23*/
          (bool *)a2,
          g_INI_Key_Header,
          (unsigned __int8 *)g_INI_Key_NumCoopHumanStartSpots,
          v21);
  v13 = *((_DWORD *)this + 1103); /*0x689e28*/
  *((_DWORD *)this + 1145) = v12; /*0x689e2e*/
  v14 = 0; /*0x689e34*/
  if ( v13 > 0 ) /*0x689e38*/
  {
    do /*0x689e7e*/
    {
      v15 = v14 + 1; /*0x689e3a*/
      sprintf(Buffer, "Waypoint%d", v14 + 1); /*0x689e48*/
      v16 = INIClass::ReadPoint2D_Overwrite((INIClass *)a2, &v22, g_INI_Key_Header, (int)Buffer, v3); /*0x689e62*/
      v17 = *v16; /*0x689e67*/
      v18 = v16[1]; /*0x689e69*/
      *(_DWORD *)v3->__pad_0 = v17; /*0x689e6c*/
      v3->PreviewClass_field_0x04 = v18; /*0x689e6e*/
      v14 = v15; /*0x689e77*/
      ++v3; /*0x689e79*/
    }
    while ( v15 < *((_DWORD *)this + 1103) ); /*0x689e7e*/
  }
  return 1; /*0x689e80*/
}



// ==== 0x00689E90  ScenarioClass::ReadMapINI  this=ScenarioClass  sig=csp ====
char __userpurge ScenarioClass::ReadMapINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  _VectorClass_PAVTechnoTypeClass *v4; // eax
  int *v5; // ebx
  int *Point2D_Overwrite; // eax
  int v7; // ecx
  int v8; // eax
  int BuildingTypeByName; // eax
  int v13; // eax
  _VectorClass_PAVTechnoTypeClass *TechnoTypeList; // eax
  int m_8; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  void *v20; // eax
  _VectorClass_PAVTechnoTypeClass *v21; // ebx
  _VectorClass_PAVTechnoTypeClass *v22; // ecx
  int v23; // eax
  _VectorClass_PAVTechnoTypeClass *v24; // ecx
  int v25; // eax
  _VectorClass_PAVTechnoTypeClass *v26; // ecx
  int v27; // edx
  int v28; // eax
  _VectorClass_PAVTechnoTypeClass *IntList; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  void *v35; // eax
  char Bool_Overwrite; // al
  char v37; // al
  char v38; // cl
  char v39; // al
  int Int_Overwrite; // eax
  int v41; // ... [36518 chars total]



// ==== 0x0068AD70  ScenarioClass::SaveToINI  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::SaveToINI(int this, char *a2, char a3)
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
  __int16 v24[2]; // [esp+28h] [ebp-E0h] BYREF
  int v25; // [esp+2Ch] [ebp-DCh] BYREF
  int v26[2]; // [esp+30h] [ebp-D8h] BYREF
  _DWORD v27[3]; // [esp+38h] [ebp-D0h] BYREF
  char Buffer[8]; // [esp+44h] [ebp-C4h] BYREF
  _BYTE v29[4]; // [esp+4Ch] [ebp-BCh] BYREF
  _BYTE v30[8]; // [esp+50h] [ebp-B8h] BYREF
  char v31[16]; // [esp+58h] [ebp-B0h] BYREF
  char Source[32]; // [esp+68h] [ebp-A0h] BYREF
  CHAR v33[128]; // [esp+88h] [ebp-80h] BYREF

  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, 0); /*0x68ad8d*/
  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, aCivevac); /*0x68ada0*/
  if ( strlen((const char *)&dword_A8B230[201].ptr_C) ) /*0x68adb8*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Briefing, (char *)&dword_A8B230[201].ptr_C); /*0x68adcd*/
  if ( strlen((const char *)&dword_A8B230[140].ptr_8 + 2) ) /*0x68ade5*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_UIName, (char *)&dword_A8B230[140].ptr_8 + 2); /*0x68adfb*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x68ae05*/
  v4 = 10000; /*0x68ae0a*/
  v26[0] = 10000; /*0x68ae16*/
  v23 = 0; /*0x68ae1a*/
  v21 = 0; /*0x68ae1e*/
  for ( i = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x68ae2b*/
        i;
        i = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], i + 18, 0) ) /*0x68ae3c*/
    {
      v6 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)i + 72))(i); /*0x68ae5c*/
      v7 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *, _DWORD))(*(_DWORD *)i + 72))(i, v29, *(_DWORD *)(v6 + 4)); /*0x68ae6c*/
      IsoCoord::ToScreenOffset(*v7, (int)v27, &v25, (int *)v24); /*0x68ae78*/
      v8 = *(_DWORD *)v24 / 30; /*0x68aeab*/
      if ( v25 / 60 < v4 ) /*0x68aeaf*/
        v4 = v25 / 60; /*0x68aeb1*/
      if ( v25 / 60 > v23 ) /*0x68aeb7*/
        v23 = v25 / 60; /*0x68aeb9*/
      if ( v8 < v26[0] ) /*0x68aec1*/
        v26[0] = *(_DWORD *)v24 / 30; /*0x68aec3*/
      if ( v8 > v21 ) /*0x68aecb*/
        v21 = *(_DWORD *)v24 / 30; /*0x68aecd*/
    }
  }
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_StartX, v4, 0); /*0x68aef4*/
  v9 = v26[0]; /*0x68aef9*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_StartY, v26[0], 0); /*0x68af0c*/
  INIClass::SetInt(a2, g_INI_Key_Header, &stru_82BA00.?[151], v23 - v4, 0); /*0x68af26*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_Height, v21 - v9, 0); /*0x68af40*/
  v10 = 0; /*0x68af58*/
  v11 = 0; /*0x68af5a*/
  v12 = (void **)((char *)&dword_A8B230[44].ptr_0 + 2); /*0x68af60*/
  do /*0x68af84*/
  {
    if ( v11 >= 0 && *v12 != dword_B05458 ) /*0x68af74*/
      ++v10; /*0x68af7c*/
    ++v11; /*0x68af7d*/
    ++v12; /*0x68af7e*/
  }
  while ( v11 < 8 ); /*0x68af84*/
  v22 = v10; /*0x68af95*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_NumberStartingPoints, v10, 0); /*0x68af99*/
  INIClass::SetInt(a2, g_INI_Key_Header, g_INI_Key_NumCoopHumanStartSpots, *(_DWORD *)(this + 4580), 0); /*0x68afb3*/
  v13 = 0; /*0x68afb8*/
  do /*0x68b09b*/
  {
    v14 = v13 + 1; /*0x68afba*/
    sprintf(Buffer, "Waypoint%d", v13 + 1); /*0x68afc8*/
    if ( v13 >= v22 ) /*0x68afd6*/
    {
      v27[0] = 0; /*0x68b081*/
      v27[1] = 0; /*0x68b085*/
      INIEntry::Write2Integers(a2, g_INI_Key_Header, Buffer, v27); /*0x68b091*/
    }
    else
    {
      *(_DWORD *)v24 = *(void **)((char *)&dword_A8B230[44].ptr_0 + 4 * v13 + 2); /*0x68aff3*/
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x68b000*/
      v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15); /*0x68b011*/
      v17 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v15 + 72))(v15, v31, *(_DWORD *)(v16 + 4)); /*0x68b021*/
      IsoCoord::ToScreenOffset(*v17, (int)v30, &v25, &v23); /*0x68b02d*/
      v26[0] = v25 / 60; /*0x68b061*/
      v26[1] = v23 / 30; /*0x68b06a*/
      INIEntry::Write2Integers(a2, g_INI_Key_Header, Buffer, v26); /*0x68b074*/
    }
    v13 = v14; /*0x68b096*/
  }
  while ( v14 < 8 ); /*0x68b09b*/
  ScenarioClass::RevealMapForHouse((ScenarioClass *)this, a2); /*0x68b0a4*/
  INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, aNextscenario, (char *)(this + 4)); /*0x68b0bb*/
  INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, aAltnextscenari, (char *)(this + 264)); /*0x68b0d4*/
  INIClass::SetWideAsHex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Name, (wchar_t *)(this + 4960)); /*0x68b0ee*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aNewiniformat, 4, 0); /*0x68b104*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aCarryovercap, *(_DWORD *)(this + 7296) / 100, 0); /*0x68b131*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aEndofgame, *(_BYTE *)(this + 13484)); /*0x68b14b*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aSkipscore, *(_BYTE *)(this + 13486)); /*0x68b164*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aOnetimeonly, *(_BYTE *)(this + 13487)); /*0x68b17e*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aSkipmapselect, *(_BYTE *)(this + 13488)); /*0x68b198*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Official, 1); /*0x68b1ad*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aIgnoreglobalai, *(_BYTE *)(this + 13492)); /*0x68b1c7*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTruckcrate, *(_BYTE *)(this + 13489)); /*0x68b1e0*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTraincrate, *(_BYTE *)(this + 13477)); /*0x68b1fa*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aPercent, *(_DWORD *)(this + 7300), 0); /*0x68b216*/
  ScenarioClass::SaveTypeNameListToINI(a2, (unsigned __int8 *)&stru_82BA00.?, aAllowableunits, this + 13524); /*0x68b22f*/
  ScenarioClass::SaveIntListToINI(a2, (unsigned __int8 *)&stru_82BA00.?, aAllowableunitm, this + 13552); /*0x68b249*/
  ScenarioClass::loadMapData(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Theme, *(_DWORD *)(this + 7280)); /*0x68b263*/
  if ( !a3 ) /*0x68b271*/
  {
    strcpy(Source, (const char *)&dword_A83D4C[134].Object_field_0x34); /*0x68b2a1*/
    INIClass::SetString(a2, (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, Source); /*0x68b2b7*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Intro, *(_DWORD *)(this + 5172)); /*0x68b2d1*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Brief, *(_DWORD *)(this + 5176)); /*0x68b2ea*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, off_83E188, *(_DWORD *)(this + 5180)); /*0x68b304*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Lose, *(_DWORD *)(this + 5184)); /*0x68b31e*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Action, *(_DWORD *)(this + 5188)); /*0x68b337*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, aPostscore, *(_DWORD *)(this + 5192)); /*0x68b351*/
    INIClass::SetStringByIndex(a2, (unsigned __int8 *)&stru_82BA00.?, aPremapselect, *(_DWORD *)(this + 5196)); /*0x68b36b*/
    INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aCarryovermoney, *(double *)(this + 7288)); /*0x68b38c*/
    INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTimerinherit, *(_BYTE *)(this + 13485)); /*0x68b3a5*/
    INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aFillsilos, *(_BYTE *)(this + 13490)); /*0x68b3bf*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aStartingdropsh, *(_DWORD *)(this + 13520), 0); /*0x68b3db*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aHomecell, *(_DWORD *)(this + 524), 0); /*0x68b3f6*/
    INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aAlthomecell, *(_DWORD *)(this + 528), 0); /*0x68b412*/
  }
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aMultiplayeronl, *(unsigned __int8 *)(this + 13500), 0); /*0x68b430*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTiberiumgrowth, *(_BYTE *)(this + 13478)); /*0x68b449*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aVeingrowthenab, *(_BYTE *)(this + 13479)); /*0x68b463*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aIcegrowthenabl, *(_BYTE *)(this + 13480)); /*0x68b47d*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aTiberiumdeatht, *(_BYTE *)(this + 13491)); /*0x68b496*/
  INIClass::SetBool(a2, (unsigned __int8 *)&stru_82BA00.?, aFreeradar, *(_BYTE *)(this + 13476)); /*0x68b4b0*/
  INIClass::SetInt(a2, (unsigned __int8 *)&stru_82BA00.?, aInittime, *(_DWORD *)(this + 13724), 0); /*0x68b4cc*/
  INIClass::ClearSection((int *)a2, (int)g_INI_Key_VariableNames, 0); /*0x68b4dc*/
  v18 = 0; /*0x68b4e1*/
  v19 = this + 9354; /*0x68b4e3*/
  do /*0x68b540*/
  {
    if ( *(_BYTE *)v19 ) /*0x68b4e9*/
    {
      wsprintfA((LPSTR)v27, "%d", v18); /*0x68b4f9*/
      wsprintfA(v33, "%s,%d", (const char *)v19, *(_BYTE *)(v19 + 40) != 0); /*0x68b518*/
      INIClass::SetString(a2, g_INI_Key_VariableNames, (char *)v27, v33); /*0x68b534*/
    }
    ++v18; /*0x68b539*/
    v19 += 41; /*0x68b53a*/
  }
  while ( v18 < 100 ); /*0x68b540*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimeeasy, *(_DWORD *)(this + 13732)); /*0x68b555*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimemedium, *(_DWORD *)(this + 13736)); /*0x68b56d*/
  INIClass::SaveTimeField(a2, g_INI_Key_Ranking, aPartimehard, *(_DWORD *)(this + 13740)); /*0x68b585*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aUnderpartitle, (char *)(this + 13744)); /*0x68b59d*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aUnderparmessag, (char *)(this + 13775)); /*0x68b5b5*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aOverpartitle, (char *)(this + 13806)); /*0x68b5cd*/
  INIClass::SetString(a2, g_INI_Key_Ranking, aOverparmessage, (char *)(this + 13837)); /*0x68b5e5*/
  INIClass::ClearSection((int *)a2, (int)&stru_82BA00.?, 0); /*0x68b5f3*/
  INIClass::SetDouble( /*0x68b616*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13608) * 0.01);
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, &stru_820320.?[5], (double)*(int *)(this + 13620) * 0.01); /*0x68b639*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, &stru_820320.?[9], (double)*(int *)(this + 13624) * 0.01); /*0x68b65c*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Blue, (double)*(int *)(this + 13628) * 0.01); /*0x68b67f*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, g_INI_Key_Ground, (double)*(int *)(this + 13632) * 0.001); /*0x68b6a2*/
  INIClass::SetDouble( /*0x68b6c5*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_81AF8C.?[17],
    (double)*(int *)(this + 13636) * 0.001);
  INIClass::SetDouble( /*0x68b6e8*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13640) * 0.01);
  INIClass::SetDouble( /*0x68b70b*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13644) * 0.01);
  INIClass::SetDouble( /*0x68b72e*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13648) * 0.01);
  INIClass::SetDouble( /*0x68b751*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13652) * 0.01);
  INIClass::SetDouble( /*0x68b774*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?,
    (double)*(int *)(this + 13656) * 0.001);
  INIClass::SetDouble( /*0x68b797*/
    a2,
    (unsigned __int8 *)&stru_82BA00.?,
    (char *)&stru_82BA00.?[6],
    (double)*(int *)(this + 13660) * 0.001);
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorambie, (double)*(int *)(this + 13692) * 0.01); /*0x68b7ba*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorred, (double)*(int *)(this + 13696) * 0.01); /*0x68b7dd*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorgreen, (double)*(int *)(this + 13700) * 0.01); /*0x68b800*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorblue, (double)*(int *)(this + 13704) * 0.01); /*0x68b823*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorgroun, (double)*(int *)(this + 13708) * 0.001); /*0x68b846*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorlevel, (double)*(int *)(this + 13712) * 0.001); /*0x68b869*/
  INIClass::SetDouble(a2, (unsigned __int8 *)&stru_82BA00.?, aDominatorambie_0, (double)*(int *)(this + 13716) * 0.001); /*0x68b88c*/
  return 1; /*0x68b891*/
}



// ==== 0x0068B8A0  ObjectClass::method_68B8A0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_68B8A0(ObjectClass *this)
{
  ObjectClass *v1; // eax
  DWORD v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int64 result; // rax
  int v6; // kr00_4
  char v7; // [esp+3h] [ebp-15h] BYREF
  ObjectClass *v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v11; // [esp+10h] [ebp-8h] BYREF

  v8 = this; /*0x68b8a3*/
  v9 = 0; /*0x68b8b3*/
  GetVersionString(&v10, &v7, 0, 0); /*0x68b8bb*/
  if ( v10 > 5 ) /*0x68b8c5*/
  {
    LOWORD(v1) = Math::RoundToInt((double)(int)v8 * 0.8); /*0x68b8d1*/
    v8 = v1; /*0x68b8d6*/
  }
  v2 = sub_5CAF70((ObjectClass *)&v11); /*0x68b8de*/
  v3 = v11; /*0x68b8e3*/
  if ( v2 || (_DWORD)v11 ) /*0x68b8ed*/
  {
    v11 = v2; /*0x68b8ff*/
    LOWORD(v4) = Math::RoundToInt(((double)v3 * 4294967296.0 + (double)v2) * 0.000001); /*0x68b91d*/
    v9 = v4; /*0x68b922*/
  }
  v6 = Math::RoundToInt((double)(int)v8 * 200.0 / (double)v9); /*0x68b934*/
  WORD2(result) = HIWORD(v6); /*0x68b934*/
  LOWORD(result) = v6; /*0x68b934*/
  return result; /*0x68b939*/
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
    if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)dword_A8ED84 - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *(_DWORD *)(this + 4632); /*0x68baf8*/
  v15 = *(_DWORD *)(this + 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)dword_A8ED84 - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *(_DWORD *)(this + 4644); /*0x68bb23*/
  v17 = *(_DWORD *)(this + 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)dword_A8ED84 - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)dword_A8ED84 - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *(_DWORD *)(this + 4656); /*0x68bb4e*/
  v19 = *(_DWORD *)(this + 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)dword_A8ED84 - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)dword_A8ED84 - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *(_DWORD *)(this + 4668); /*0x68bb79*/
  v21 = *(_DWORD *)(this + 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)dword_A8ED84 - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)dword_A8ED84 - v20; /*0x68bb96*/
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



// ==== 0x0068BCB0  AbstractClass::updateAITimer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::updateAITimer(AbstractClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 133) + 1; /*0x68bcb6*/
  *((_DWORD *)this + 133) = result; /*0x68bcb7*/
  return result; /*0x68bcbd*/
}



// ==== 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::Get_Waypoint_Location(char *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(this + 4 * a3 + 1586); /*0x68bccf*/
  return a2; /*0x68bcd1*/
}



// ==== 0x0068BCE0  ScenarioClass::GetCellFromArray  this=ScenarioClass  sig=csp ====
void *__thiscall ScenarioClass::GetCellFromArray(ScenarioClass *this, int a2)
{
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->waypoints[4 * a2]); /*0x68bcf6*/
}



// ==== 0x0068BD00  Cell::GetWorldCoords  this=Cell  sig=csp ====
_DWORD *__thiscall Cell::GetWorldCoords(Cell *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 2 * a3 + 793); /*0x68bd1b*/
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
int __thiscall ScenarioClass::Is_Waypoint_Valid(char *this, unsigned int a2)
{
  int result; // eax

  result = a2; /*0x68bd80*/
  LOBYTE(result) = a2 <= 0x2BD /*0x68bdb6*/
                && (*((_WORD *)this + 2 * a2 + 793) != (_WORD)dword_B05458
                 || (LOWORD(result) = *((_WORD *)this + 2 * a2 + 794), (_WORD)result != HIWORD(dword_B05458)));
  return result; /*0x68bdb3*/
}



// ==== 0x0068BDC0  ScenarioClass::ReadWaypoints  this=ScenarioClass  sig=csp ====
__int16 __thiscall ScenarioClass::ReadWaypoints(ScenarioClass *this, int a2)
{
  int v3; // esi
  __int16 *waypoints; // edi
  signed int Int_Overwrite; // eax
  signed int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  CHAR v10[20]; // [esp+10h] [ebp-14h] BYREF
  bool *v11; // [esp+28h] [ebp+4h]

  v3 = 0; /*0x68bdcb*/
  waypoints = (__int16 *)this->waypoints; /*0x68bdcd*/
  do /*0x68be7f*/
  {
    wsprintfA(v10, "%d", v3); /*0x68bdde*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, g_INI_Key_Waypoints, (unsigned __int8 *)v10, 0); /*0x68bdf5*/
    v6 = Int_Overwrite; /*0x68bdfa*/
    if ( Int_Overwrite ) /*0x68bdfe*/
    {
      LOWORD(v11) = Int_Overwrite % 1000; /*0x68be19*/
      Int_Overwrite = (unsigned int)((unsigned __int64)(274877907LL * Int_Overwrite) >> 32) >> 31; /*0x68be25*/
      HIWORD(v11) = v6 / 1000; /*0x68be2a*/
      *(_DWORD *)waypoints = v11; /*0x68be33*/
    }
    else
    {
      *(_DWORD *)waypoints = dword_B05458; /*0x68be06*/
    }
    if ( v3 >= 0 ) /*0x68be3f*/
    {
      if ( *waypoints != (_WORD)dword_B05458 /*0x68be58*/
        || (LOWORD(Int_Overwrite) = waypoints[1], (_WORD)Int_Overwrite != HIWORD(dword_B05458)) )
      {
        v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], waypoints); /*0x68be60*/
        v8 = v7[80]; /*0x68be65*/
        Int_Overwrite = (signed int)(v7 + 80); /*0x68be6b*/
        *(_DWORD *)Int_Overwrite = v8 | 4; /*0x68be73*/
      }
    }
    ++v3; /*0x68be75*/
    waypoints += 2; /*0x68be76*/
  }
  while ( v3 < 702 ); /*0x68be7f*/
  return Int_Overwrite; /*0x68be85*/
}



// ==== 0x0068BE90  ScenarioClass::Write_Waypoints  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Write_Waypoints(ScenarioClass *this, char *a2)
{
  char result; // al
  int v4; // edi
  char *waypoints; // esi
  CHAR v6[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::ClearSection((int *)a2, (int)g_INI_Key_Waypoints, 0); /*0x68bea7*/
  v4 = 0; /*0x68beb2*/
  waypoints = this->waypoints; /*0x68beb4*/
  do /*0x68bf16*/
  {
    if ( *(_DWORD *)waypoints != dword_B05458 ) /*0x68bec4*/
    {
      wsprintfA(v6, "%d", v4); /*0x68bede*/
      result = INIClass::SetInt( /*0x68bf07*/
                 a2,
                 g_INI_Key_Waypoints,
                 v6,
                 *(__int16 *)waypoints + 1000 * *((__int16 *)waypoints + 1),
                 0);
    }
    ++v4; /*0x68bf0c*/
    waypoints += 4; /*0x68bf0d*/
  }
  while ( v4 < 702 ); /*0x68bf16*/
  return result; /*0x68bf18*/
}



// ==== 0x0068BF30  ScenarioClass::Set_Default_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Default_Waypoint(ScenarioClass *this, int a2)
{
  *(_DWORD *)&this->waypoints[4 * a2] = dword_B05458; /*0x68bf3a*/
  return a2; /*0x68bf41*/
}



// ==== 0x0068BF50  ScenarioClass::Set_Waypoint  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::Set_Waypoint(char *this, int a2, int a3)
{
  *(_DWORD *)(this + 4 * a2 + 1586) = a3; /*0x68bf58*/
  return a3; /*0x68bf5f*/
}



// ==== 0x0068C030  BuildingType::Init  this=ScenarioClass  sig=csp ====
int __thiscall BuildingType::Init(BuildingType *this, unsigned int a2)
{
  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *((_DWORD *)this + a2 + 1120); /*0x68c03d*/
}



// ==== 0x0068C050  ObjectClass::Map_Setup  this=ObjectClass  sig=csp ====
void Map_Setup(ObjectClass *this)
{
  int v1; // edi
  int v2; // ecx
  int v3; // ecx
  int v4; // esi
  int Capacity; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  VectorClass v14; // [esp+8h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x68c059*/
  if ( *(int *)&FootClass_Array.? > 0 ) /*0x68c05d*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412); /*0x68c069*/
    if ( v2 > 0 && v2 >= *(int *)&FootClass_Array.? ) /*0x68c079*/
    {
      VectorClass::Construct(&v14, 0, 0); /*0x68c086*/
      v3 = 10; /*0x68c091*/
      v14.ptr_0 = &DynamicVectorClass<int>::`vftable'; /*0x68c096*/
      v16 = 10; /*0x68c09e*/
      v15 = 0; /*0x68c0a2*/
      v4 = 0; /*0x68c0ac*/
      if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412) > 0 ) /*0x68c0b0*/
      {
        Capacity = v14.Capacity; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v15 < Capacity ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v14.IsAllocated || !Capacity) && v3 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
LABEL_14:
          if ( ++v4 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3412) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v3 = v16; /*0x68c0b8*/
        }
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v14.ptr_0 + 2))(&v14, v3 + Capacity, 0) ) /*0x68c0df*/
        {
LABEL_12:
          v6 = v15++; /*0x68c0e6*/
          *((_DWORD *)v14.Items + v6) = v4; /*0x68c0f5*/
        }
        Capacity = v14.Capacity; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
LABEL_15:
      v7 = 0; /*0x68c10b*/
      if ( *(int *)&FootClass_Array.? > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v15 - 1); /*0x68c12f*/
          if ( v8 < v15 ) /*0x68c13a*/
          {
            v9 = v8; /*0x68c13d*/
            if ( v8 < --v15 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v9; /*0x68c14b*/
                *((_DWORD *)v14.Items + v9 - 1) = *((_DWORD *)v14.Items + v9); /*0x68c14f*/
              }
              while ( v9 < v15 ); /*0x68c159*/
            }
          }
          v10 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3344); /*0x68c164*/
          if ( v8 + 1 <= v10 ) /*0x68c16c*/
            break; /*0x68c16c*/
          v11 = v8 - v10; /*0x68c16e*/
          v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3372); /*0x68c170*/
          if ( v11 + 1 <= v12 ) /*0x68c17b*/
          {
            v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3360) + 4 * v11); /*0x68c19a*/
          }
          else
          {
            v8 = v11 - v12; /*0x68c183*/
            if ( v8 + 1 <= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3400) ) /*0x68c18a*/
            {
              v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3388); /*0x68c18c*/
LABEL_25:
              v1 = *(_DWORD *)(v13 + 4 * v8); /*0x68c1a5*/
            }
          }
          if ( v1 ) /*0x68c1aa*/
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * v7) + 1780) = v1; /*0x68c1b5*/
          if ( ++v7 >= *(int *)&FootClass_Array.? ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3332); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
LABEL_29:
      v14.ptr_0 = &VectorClass<int>::`vftable'; /*0x68c1ca*/
      if ( v14.Items ) /*0x68c1d9*/
      {
        if ( v14.IsAllocated ) /*0x68c1e1*/
          __3_YAXPAX_Z(v14.Items); /*0x68c1e4*/
      }
    }
  }
}



// ==== 0x0068C200  TechnoTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TechnoTypeVector::Construct(TechnoTypeVector *this, int a2, int a3)
{
  this->TechnoTypeVector_field_0x04 = 0; /*0x68c209*/
  this->Capacity = a2; /*0x68c210*/
  this->IsInitialized = 1; /*0x68c213*/
  this->IsAllocated = 0; /*0x68c217*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x68c21b*/
  if ( a2 ) /*0x68c221*/
  {
    if ( a3 ) /*0x68c229*/
    {
      this->TechnoTypeVector_field_0x04 = a3; /*0x68c22b*/
    }
    else
    {
      this->TechnoTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x68c23c*/
      this->IsAllocated = 1; /*0x68c23f*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<TechnoTypeClass *>::`vftable'; /*0x68c243*/
  *((_DWORD *)this + 5) = 10; /*0x68c249*/
  this->Items = 0; /*0x68c250*/
  return this->__pad_0; /*0x68c259*/
}



// ==== 0x0068C260  ObjectClass::DynamicVector_PushBack  this=ObjectClass  sig=csp ====
char __thiscall DynamicVector_PushBack(ObjectClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x68c263*/
  if ( this->? >= (int)ptr_8 ) /*0x68c26b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x68c276*/
      return 0; /*0x68c276*/
    abstractFlags = this->?; /*0x68c278*/
    if ( abstractFlags <= 0 /*0x68c288*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x68c28f*/
    }
  }
  uniqueId = this->?; /*0x68c295*/
  ptr_4 = this->?; /*0x68c298*/
  this->? = uniqueId + 1; /*0x68c29e*/
  ptr_4[uniqueId] = *a2; /*0x68c2a8*/
  return 1; /*0x68c291*/
}



// ==== 0x0068C2B0  Multiplayer::CopyDataArray  this=Multiplayer  sig=csp ====
_DWORD *__thiscall Multiplayer::CopyDataArray(Multiplayer *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Multiplayer *)a2 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (__thiscall **)(Multiplayer *))(this->u8_C)(this); /*0x68c2bf*/
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
  dword_B054D4 = 0; /*0x68c337*/
  dword_B054D8 = 0; /*0x68c33c*/
  byte_B054DC = 1; /*0x68c341*/
  byte_B054DD = 0; /*0x68c348*/
  stru_B054D0 = (int)&DynamicVectorClass<ColorScheme *>::`vftable'; /*0x68c34d*/
  dword_B054E4 = 10; /*0x68c357*/
  dword_B054E0 = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}



// ==== 0x0068C370  sub_68C370  this=-  sig=ida-proto ====
void __cdecl sub_68C370()
{
  stru_B054D0 = (int)&VectorClass<ColorScheme *>::`vftable'; /*0x68c378*/
  if ( dword_B054D4 && byte_B054DD ) /*0x68c38c*/
  {
    __3_YAXPAX_Z(dword_B054D4); /*0x68c38f*/
    dword_B054D4 = 0; /*0x68c397*/
  }
  byte_B054DD = 0; /*0x68c39d*/
  dword_B054D8 = 0; /*0x68c3a3*/
}



// ==== 0x0068C3B0  FontClass::CreateGlyphColor  this=FontClass  sig=csp ====
int __userpurge FontClass::CreateGlyphColor@<eax>(
        char *a1@<ecx>,
        const void *a2@<edx>,
        double a3@<st0>,
        int a4,
        Block *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char v12; // bl
  int v13; // edx
  int v14; // esi
  int v15; // eax
  __int16 v16; // cx
  char v17; // dl
  char *v18; // eax
  int v19; // eax
  Color v21; // [esp+10h] [ebp-28h] BYREF
  int v22; // [esp+14h] [ebp-24h] BYREF
  double v23; // [esp+18h] [ebp-20h]
  double v24; // [esp+20h] [ebp-18h]

  v12 = *a1; /*0x68c3bf*/
  v13 = (unsigned __int8)a1[2]; /*0x68c3c8*/
  v22 = (unsigned __int8)a1[1]; /*0x68c3d0*/
  v21.Color_field_00 = v13; /*0x68c3d4*/
  Block::Copy(a5, a2); /*0x68c3d8*/
  __asm { fild [esp+38h+var_24] } /*0x68c3dd*/
  v14 = 0; /*0x68c3e1*/
  LODWORD(v23) = 0; /*0x68c3e3*/
  __asm /*0x68c3e7*/
  {
    fstp [esp+38h+var_10]
    fild [esp+38h+var_28.Color_field_00]
    fstp [esp+38h+var_8]
  }
  do /*0x68c4a7*/
  {
    __asm { fild dword ptr [esp+38h+var_20] } /*0x68c3f3*/
    __asm
    {
      fld st
      fmul ds:dbl_7F0E98
      fadd ds:dbl_7F0E90
      fstp [esp+38h+var_20]
      fmul ds:dbl_7F0E88
      fadd ds:dbl_7F0E80
      fstp [esp+38h+var_18]
    }
    if ( !v14 ) /*0x68c41b*/
      v23 = 0.1963495408493621; /*0x68c41d*/
    Math::SinCos(v24); /*0x68c437*/
    __asm { fmul [esp+40h+var_10] } /*0x68c43c*/
    BYTE1(v21.Color_field_00) = Math::RoundToInt(a3); /*0x68c449*/
    LOBYTE(v21.Color_field_00) = v12; /*0x68c453*/
    Math::ArcTan2(v23); /*0x68c457*/
    __asm { fmul [esp+48h+var_8] } /*0x68c45c*/
    BYTE2(v21.Color_field_00) = Math::RoundToInt(a3); /*0x68c46c*/
    v15 = Color::ConvertToRGB(&v21, (int)&v22); /*0x68c475*/
    v16 = *(_WORD *)v15; /*0x68c47a*/
    v17 = *(_BYTE *)(v15 + 2); /*0x68c47d*/
    v18 = (char *)a5 + 2 * ((v14 + 16) % 256) + (v14 + 16) % 256; /*0x68c497*/
    LODWORD(v23) = ++v14; /*0x68c49d*/
    *(_WORD *)v18 = v16; /*0x68c4a1*/
    v18[2] = v17; /*0x68c4a4*/
  }
  while ( v14 < 16 ); /*0x68c4a7*/
  v19 = __2_YAPAXI_Z(0x1B4u); /*0x68c4b2*/
  if ( v19 ) /*0x68c4bc*/
    return LightConvertClass::Constructor(v19, (int)a5, a4, a6, a8, a9, a10, 0, a11, a7); /*0x68c4e2*/
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
  *((_DWORD *)this + 193) = _strdup(Source); /*0x68c744*/
  *((_WORD *)this + 388) = *(_WORD *)a3; /*0x68c752*/
  *(this + 778) = *(_BYTE *)(a3 + 2); /*0x68c75d*/
  *((_DWORD *)this + 195) = 0; /*0x68c778*/
  *((_DWORD *)this + 196) = a6; /*0x68c77e*/
  *((_DWORD *)this + 197) = 16; /*0x68c784*/
  *((_DWORD *)this + 198) = 15; /*0x68c78a*/
  *((_DWORD *)this + 199) = 25; /*0x68c794*/
  *((_DWORD *)this + 200) = 24; /*0x68c79e*/
  *((_DWORD *)this + 201) = 22; /*0x68c7a8*/
  *((_DWORD *)this + 202) = 16; /*0x68c7b2*/
  *((_DWORD *)this + 203) = 19; /*0x68c7b8*/
  *((_DWORD *)this + 204) = 16; /*0x68c7c2*/
  *((_DWORD *)this + 205) = 16; /*0x68c7c8*/
  *((_DWORD *)this + 206) = 21; /*0x68c7d2*/
  *((_DWORD *)this + 195) = FontClass::CreateGlyphColor( /*0x68c7ee*/
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
    if ( dword_B054E0 < dword_B054D8 /*0x68c830*/
      || (byte_B054DD || !dword_B054D8)
      && dword_B054E4 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B054D0 + 8))(
           &stru_B054D0,
           dword_B054D8 + dword_B054E4,
           0) )
    {
      v10 = dword_B054E0++; /*0x68c83d*/
      *((_DWORD *)dword_B054D4 + v10) = this; /*0x68c84c*/
    }
    *(_DWORD *)this = dword_B054E0; /*0x68c855*/
  }
  return this; /*0x68c859*/
}



// ==== 0x0068C860  ObjectClass::LoadTheaterClassMIX_Load  this=ObjectClass  sig=csp ====
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
int __thiscall ColorScheme::Destructor(ColorScheme *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  ColorScheme *v4; // [esp+4h] [ebp-4h] BYREF

  if ( this->data[193] ) /*0x68c8d4*/
    free((void *)this->data[193]); /*0x68c8df*/
  v2 = (void (__thiscall ***)(_DWORD, int))this->data[195]; /*0x68c8e7*/
  this->data[193] = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  this->data[195] = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (__thiscall **)(_VectorClass_PAVColorScheme *, ColorScheme **))(*(_DWORD *)stru_B054D0.__pad_0 + 16))( /*0x68c91f*/
             &stru_B054D0,
             &v4);
  if ( result != -1 && result < *(int *)stru_B054D0.__tail_10 ) /*0x68c930*/
  {
    --*(_DWORD *)stru_B054D0.__tail_10; /*0x68c935*/
    for ( ; /*0x68c93b*/
          result < *(int *)stru_B054D0.__tail_10;
          *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                                                                                   + 4 * result) )
    {
      ++result; /*0x68c943*/
    }
  }
  return result; /*0x68c925*/
}



// ==== 0x0068C9C0  System_Read_68C9C0  this=char*  sig=csp ====
int __fastcall sub_68C9C0(char *Source, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  char *v9; // eax

  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( dword_B054E0 > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
LABEL_6:
    v9 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, Source, a2, a3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = dword_B054D4; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    v8 = _strcmpi(Source, *(const void **)(v7[v6] + 772)) == 0; /*0x68c9f6*/
    v7 = dword_B054D4; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= dword_B054E0 ) /*0x68ca13*/
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
  if ( dword_B054E0 <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = dword_B054D4; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68ca7a*/
    v5 = dword_B054D4; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= dword_B054E0 ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *((_DWORD *)dword_B054D4 + v2); /*0x68caa3*/
}



// ==== 0x0068CAB0  Network_Assign  this=-  sig=csp ====
int __fastcall sub_68CAB0(void *a1, int a2)
{
  int v2; // esi
  _DWORD *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( dword_B054E0 <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = dword_B054D4; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68cada*/
    v5 = dword_B054D4; /*0x68cadc*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)dword_B054D4 + v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= dword_B054E0 ) /*0x68caf7*/
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
int __thiscall ScoreScreen::Display(ScoreScreen *this)
{
  int v2; // eax
  unsigned __int8 *v3; // ebx
  int v4; // edi
  char *v5; // ecx
  char v6; // al
  char v7; // dl
  char *v8; // eax
  ConvertClass *v9; // eax
  char *v10; // edi
  int v11; // eax
  char *v12; // eax
  int i; // edi
  int v14; // eax
  char **v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  char **v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  char **v27; // ebx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // eax
  char **v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38; // eax
  char **v39; // ebx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // eax
  char **v45; // ebx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  char **v51; // ebx
 ... [65410 chars total]



// ==== 0x0068EC00  ScoreScreen::Check  this=ScoreScreen  sig=csp ====
bool __thiscall ScoreScreen::Check(ScoreScreen *this, char a2)
{
  return (*(int (__thiscall **)(int *, char *))(this->ScoreScreen_field_0x1C + 16))(&this->ScoreScreen_field_0x1C, &a2) == -1; /*0x68ec14*/
}



// ==== 0x0068EC20  CellClass::CreateInstance  this=CellClass  sig=csp ====
int __thiscall CellClass::CreateInstance(CellClass *this, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v9; // [esp+14h] [ebp-1FCh] BYREF
  int v10[62]; // [esp+18h] [ebp-1F8h] BYREF
  __int16 v11; // [esp+110h] [ebp-100h]
  int v12[63]; // [esp+114h] [ebp-FCh] BYREF

  v2 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ec31*/
  v3 = 20; /*0x68ec3e*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ec43*/
    v2 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ec55*/
  v4 = v2; /*0x68ec57*/
  while ( 1 ) /*0x68ec5f*/
  {
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68ec5f*/
    if ( !v3 ) /*0x68ec66*/
      break; /*0x68ec66*/
LABEL_6:
    if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x68ec89*/
    {
      v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ec94*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ec9c*/
        v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ecae*/
      if ( (unsigned int)(v5 - v4) > 0x28 ) /*0x68ecb5*/
      {
        memset(v10, 0, sizeof(v10)); /*0x68ecc2*/
        v11 = 0; /*0x68ecc4*/
        v10[0] = 106; /*0x68eccb*/
        *(int *)((char *)&v10[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x68ecde*/
        LOBYTE(v10[6]) = dword_A8DB30; /*0x68ecf5*/
        Stream::WriteBlock((int *)&unk_A8EA70, (int)v10, 250, 0); /*0x68ecf9*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x68ed03*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x68ed0b*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x68ed1d*/
        v4 = v6; /*0x68ed1f*/
      }
      ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v12, (int)&v9); /*0x68ed33*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x68ed3d*/
    }
    Screen::TransitionLoop((Screen *)this, 1); /*0x68ed48*/
    if ( !v3 ) /*0x68ed4f*/
      break; /*0x68ed4f*/
    --v3; /*0x68ed55*/
  }
  if ( !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68ec6e*/
    goto LABEL_6; /*0x68ec76*/
  return Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68ed66*/
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
  if ( dword_A80238 > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      v4 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v10]; /*0x68edad*/
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
    while ( v10 < dword_A80238 ); /*0x68ee21*/
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
int __thiscall ScoreScreen::AccumulateScoreStats(ScoreScreen *this)
{
  ScoreScreen *v1; // esi
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
  if ( stru_A80220.? > 0 ) /*0x68ef45*/
  {
    do /*0x68eff3*/
    {
      v6 = *((_DWORD *)stru_A80220.? + v9); /*0x68ef54*/
      Debug::Log(); /*0x68ef71*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)v6) /*0x68efa1*/
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)dword_A83D4C)
        || dword_A83D4C == (Object *)v6 )
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
    while ( v9 < stru_A80220.? ); /*0x68eff3*/
    v1 = this; /*0x68eff9*/
    v4 = v8; /*0x68effd*/
  }
  if ( *((_DWORD *)dword_A83D4C->Object_field_0x34 + 47) ) /*0x68f00f*/
  {
    Screen::TransitionRender((Screen *)v1, v2, v4, 227); /*0x68f03c*/
    return Screen::TransitionRender((Screen *)v1, v5, v3, 283); /*0x68f04a*/
  }
  else
  {
    Screen::TransitionRender((Screen *)v1, v4, v2, 227); /*0x68f01d*/
    return Screen::TransitionRender((Screen *)v1, v3, v5, 283); /*0x68f02b*/
  }
}



// ==== 0x0068F060  Screen::TransitionRender  this=Screen  sig=csp ====
int __thiscall Screen::TransitionRender(Screen *this, wchar_t *Format, wchar_t *a3, int a4)
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
  const wchar_t *v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebx
  int *v37; // ecx
  int v38; // edx
  int v39; // eax
  ObjectClass *v40; // edx
  _DWORD *v41; // ecx
  int v42; // ebx
  int *v43; // ecx
  int v44; // edx
  int v45; // eax
  int i; // ebx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  ObjectClass *v50; // ebx
  DSurface *v51; // ebx
  int v53; // [esp+C8h] [ebp-25Ch] BYREF
  ObjectClass *v54; // [esp+CCh] [ebp-258h]
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
  wchar_t *v74; // [esp+11Ch] [ebp-208h]
  wchar_t *v75; // [esp+120h] [ebp-204h]
  wchar_t v76[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v78[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v79[64]; // [esp+2A4h] [ebp-80h] BYREF

  v5 = (int)a3; /*0x68f07a*/
  v6 = *(_DWORD *)this + a4; /*0x68f085*/
  v7 = this->u32_4 + 244; /*0x68f08a*/
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
  v74 = a3; /*0x68f2eb*/
  v75 = Format; /*0x68f2ef*/
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
      (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f33a*/
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
      swprintf(v79, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f418*/
      v28 = (_DWORD *)this->u32_C; /*0x68f41d*/
      v29 = v7 - v28[2] - v61; /*0x68f430*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v28 + 12))(v28, v54, v79, v6, v29, 2); /*0x68f443*/
      v30 = (int *)this->u32_C; /*0x68f446*/
      v31 = *v30; /*0x68f44c*/
      v54 = (ObjectClass *)v30[2]; /*0x68f44e*/
      v70 = (*(int (__thiscall **)(int *, wchar_t *))(v31 + 8))(v30, v79); /*0x68f45d*/
      v68 = v6; /*0x68f465*/
      v69 = v29; /*0x68f469*/
      v71 = (int)v54; /*0x68f46d*/
    }
    else
    {
      v58 = v18; /*0x68f351*/
      v21 = this->q008; /*0x68f35e*/
      v56 = v53; /*0x68f361*/
      v55 = v6; /*0x68f36c*/
      v57 = 15; /*0x68f370*/
      (*((void (__thiscall **)(ObjectClass *, int *, int, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f37f*/
        g_DSurface_Hidden,
        &v55,
        v21,
        &v55,
        0,
        1);
      v22 = (int)v75 / v60; /*0x68f38d*/
      v54 = g_DSurface_Hidden; /*0x68f391*/
      if ( (int)v75 / v60 >= v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v22); /*0x68f3a9*/
      v23 = (_DWORD *)this->u32_C; /*0x68f3ae*/
      v24 = v53 - v23[2]; /*0x68f3c2*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v23 + 12))( /*0x68f3d0*/
        v23,
        v54,
        Buffer,
        v6,
        v24,
        2);
      v25 = (int *)this->u32_C; /*0x68f3d3*/
      v26 = *v25; /*0x68f3d9*/
      v54 = (ObjectClass *)v25[2]; /*0x68f3db*/
      v27 = (*(int (__thiscall **)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v68 = v6; /*0x68f3ee*/
      v69 = v24; /*0x68f3f2*/
      v70 = v27; /*0x68f3f6*/
      v71 = (int)v54; /*0x68f3fa*/
    }
    if ( v66 > 0 && v67 > 0 ) /*0x68f47f*/
      (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f49d*/
        g_DSurface_Hidden,
        &v64,
        DSurface_Alternate,
        &v64,
        0,
        1);
    if ( v63 > v59 ) /*0x68f4aa*/
    {
      v54 = g_DSurface_Hidden; /*0x68f585*/
      swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f589*/
      v41 = (_DWORD *)this->u32_C; /*0x68f58e*/
      v42 = v7 - v41[2] - v59; /*0x68f5a3*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v41 + 12))( /*0x68f5b5*/
        v41,
        v54,
        v76,
        v62,
        v42,
        2);
      v43 = (int *)this->u32_C; /*0x68f5b8*/
      v44 = *v43; /*0x68f5be*/
      v54 = (ObjectClass *)v43[2]; /*0x68f5c0*/
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
      (*((void (__thiscall **)(ObjectClass *, int *, int, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f4e6*/
        g_DSurface_Hidden,
        &v55,
        v33,
        &v55,
        0,
        1);
      v34 = (const wchar_t *)((int)v74 / v60); /*0x68f4f4*/
      v54 = g_DSurface_Hidden; /*0x68f4f8*/
      if ( (int)v74 / v60 >= (int)a3 ) /*0x68f505*/
        v34 = a3; /*0x68f507*/
      swprintf(v78, (const size_t)g_Str_Fmt_PctD, v34); /*0x68f517*/
      v35 = (_DWORD *)this->u32_C; /*0x68f51c*/
      v36 = v32 - v35[2]; /*0x68f529*/
      (*(void (__thiscall **)(_DWORD *, ObjectClass *, wchar_t *, int, int, int))(*v35 + 12))( /*0x68f53e*/
        v35,
        v54,
        v78,
        v62,
        v36,
        2);
      v37 = (int *)this->u32_C; /*0x68f541*/
      v38 = *v37; /*0x68f547*/
      v54 = (ObjectClass *)v37[2]; /*0x68f549*/
      v39 = (*(int (__thiscall **)(int *, wchar_t *))(v38 + 8))(v37, v78); /*0x68f555*/
      v40 = v54; /*0x68f55c*/
      v64 = v62; /*0x68f560*/
      v65 = v36; /*0x68f564*/
      v66 = v39; /*0x68f568*/
    }
    v67 = (int)v40; /*0x68f5e5*/
    if ( g_INI_Key_BarGraph ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q011; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(g_INI_Key_BarGraph, **(char ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop(this, 1); /*0x68f625*/
    v63 += 2; /*0x68f646*/
    v53 -= 2; /*0x68f651*/
    v75 += (int)Format; /*0x68f660*/
    v17 = (int)Format; /*0x68f664*/
    v18 = v63; /*0x68f66d*/
    v74 += (int)a3; /*0x68f671*/
  }
  if ( v70 > 0 && v71 > 0 ) /*0x68f688*/
  {
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f6a6*/
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
  (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f6df*/
    DSurface_Alternate,
    &v55,
    v47,
    &v55,
    0,
    1);
  v54 = g_DSurface_Hidden; /*0x68f6f2*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f6f6*/
  (*(void (__thiscall **)(_DWORD, ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f71f*/
    this->u32_C,
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->u32_C + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f72c*/
  v54 = (ObjectClass *)DSurface_Alternate; /*0x68f740*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f744*/
  (*(void (__stdcall **)(ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f76c*/
    v54,
    v76,
    v6,
    v7 - *(_DWORD *)(this->u32_C + 8) - v61,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f779*/
  if ( v66 > 0 && v67 > 0 ) /*0x68f78a*/
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f7a9*/
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
  (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f7e6*/
    DSurface_Alternate,
    &v55,
    v49,
    &v55,
    0,
    1);
  v50 = g_DSurface_Hidden; /*0x68f7f0*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f801*/
  (*(void (__thiscall **)(_DWORD, ObjectClass *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f821*/
    this->u32_C,
    v50,
    v76,
    v48,
    v7 - *(_DWORD *)(this->u32_C + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f82e*/
  v51 = DSurface_Alternate; /*0x68f838*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, a3); /*0x68f849*/
  (*(void (__stdcall **)(DSurface *, wchar_t *, int, int, int))(**((_DWORD **)this + 3) + 12))( /*0x68f86b*/
    v51,
    v76,
    v48,
    v7 - *(_DWORD *)(this->u32_C + 8) - v59,
    2);
  (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)this + 3) + 8))(this->u32_C, v76); /*0x68f878*/
  return Screen::TransitionLoop(this, 20); /*0x68f884*/
}



// ==== 0x0068F8A0  ObjectClass::method_68F8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_68F8A0(ObjectClass *this)
{
  int v2; // eax
  unsigned int v3; // kr04_4
  int v4; // esi
  void *ptr_C; // ebx
  char *v6; // eax
  int occupant; // ecx
  int *p_referenceCount; // edi
  ObjectClass *nextObject; // eax
  int fallRate; // eax
  _DWORD *NeedsSaveOrLink; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  int v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x68f8b3*/
  sprintf(Buffer, "%d", v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    ptr_C = this->?; /*0x68f8f8*/
    v6 = (char *)this->? + 214; /*0x68f8fd*/
    *(_DWORD *)(v4 + 4) = (char *)this->AbstractClass + 590 - 12 * (v3 - 1); /*0x68f902*/
    *(_DWORD *)(v4 + 8) = v6; /*0x68f908*/
    *(_DWORD *)(v4 + 12) = Timer::GetTicks(); /*0x68f910*/
    *(_DWORD *)(v4 + 20) = 0; /*0x68f915*/
    *(_DWORD *)(v4 + 40) = ptr_C; /*0x68f91c*/
    *(_DWORD *)(v4 + 24) = Buffer; /*0x68f91f*/
    *(_DWORD *)(v4 + 28) = 0; /*0x68f922*/
    *(_DWORD *)(v4 + 32) = 0; /*0x68f925*/
    *(_BYTE *)(v4 + 36) = 0; /*0x68f928*/
    *(_DWORD *)v4 = &ScorePrintClass::`vftable'; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  occupant = this->occupant; /*0x68f936*/
  p_referenceCount = &this->?; /*0x68f93c*/
  if ( this->fallRate < occupant /*0x68f95e*/
    || (BYTE1(this->owningHouseIndex) || !occupant)
    && (nextObject = this->nextObject, (int)nextObject > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_referenceCount + 8))(
         &this->?,
         (int)nextObject + occupant,
         0) )
  {
    fallRate = this->fallRate; /*0x68f965*/
    NeedsSaveOrLink = this->?; /*0x68f968*/
    this->fallRate = fallRate + 1; /*0x68f96e*/
    NeedsSaveOrLink[fallRate] = v4; /*0x68f971*/
  }
  v12 = *p_referenceCount; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int *, int *))(v12 + 16))(&this->?, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int *, int *))(v14 + 16))(&this->?, &v15) )
  {
    Screen::TransitionLoop((Screen *)this, 1); /*0x68f98d*/
    v14 = *p_referenceCount; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}



// ==== 0x0068F9B0  ScoreScreen::DisplayTimeText  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::DisplayTimeText(int this, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // esi
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
    *(_DWORD *)(v5 + 4) = v4; /*0x68fa56*/
    *(_DWORD *)(v5 + 8) = v7; /*0x68fa59*/
    *(_DWORD *)(v5 + 12) = Timer::GetTicks(); /*0x68fa61*/
    *(_DWORD *)(v5 + 20) = 0; /*0x68fa66*/
    *(_DWORD *)(v5 + 40) = v6; /*0x68fa6d*/
    *(_DWORD *)(v5 + 24) = Buffer; /*0x68fa70*/
    *(_DWORD *)(v5 + 28) = 0; /*0x68fa73*/
    *(_DWORD *)(v5 + 32) = 0; /*0x68fa76*/
    *(_BYTE *)(v5 + 36) = 0; /*0x68fa79*/
    *(_DWORD *)v5 = &ScorePrintClass::`vftable'; /*0x68fa7c*/
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
  a2 = v5; /*0x68face*/
  for ( result = (*(int (__thiscall **)(int, unsigned int *))(v13 + 16))(this + 28, &a2); /*0x68fad8*/
        result != -1;
        result = (*(int (__thiscall **)(int, unsigned int *))(v15 + 16))(this + 28, &a2) )
  {
    Screen::TransitionLoop((Screen *)this, 1); /*0x68fade*/
    v15 = *v9; /*0x68fae3*/
    a2 = v5; /*0x68faec*/
  }
  return result; /*0x68faf8*/
}



// ==== 0x0068FB10  ObjectClass::method_68FB10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_68FB10(
        ObjectClass *this,
        _DWORD *a2,
        int a3,
        size_t BufferCount,
        wchar_t *Format,
        const wchar_t *a6,
        int a7,
        int a8)
{
  const wchar_t *v8; // eax
  _DWORD *ptr_C; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8); /*0x68fb3d*/
  ptr_C = this->?; /*0x68fb42*/
  v11 = a8 - ptr_C[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*ptr_C + 12))(ptr_C, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = this->?; /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/
}



// ==== 0x0068FBB0  ObjectClass::RenderScoreTypeText  this=ScoreScreen  sig=csp ====
int __thiscall RenderScoreTypeText(int this, int a2, int a3, int a4)
{
  int v4; // ebp
  int i; // edi
  int v7; // ecx
  int j; // edi
  int v9; // ecx
  __int16 v10; // ax
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
    if ( stru_A8EB00.?[412] != 1 ) /*0x68fbce*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x68fbd7*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * i); /*0x68fbdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x68fbe1*/
      }
      while ( !stru_A8EB00.?[412] ) /*0x68fbf3*/
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
    if ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68fc30*/
    {
      v10 = EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x68fc44*/
      v11 = (unsigned __int8)Event_Process(*(ObjectClass **)&stru_87F5F0.__pad_58[296], v10); /*0x68fc57*/
      v34 = v11; /*0x68fc5d*/
      Event::Dispatch(); /*0x68fc61*/
      v12 = a3 + 90; /*0x68fc6a*/
      if ( v4 >= a3 + 90 && EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x68fc7b*/
      {
        do /*0x68fc96*/
          EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x68fc8b*/
        while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x68fc96*/
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
            (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fd04*/
             + 2))(
              g_DSurface_Hidden,
              v36,
              v14,
              v36,
              0,
              1);
            (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fd21*/
             + 2))(
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
                (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fe85*/
                 + 2))(
                  g_DSurface_Hidden,
                  v38,
                  v22,
                  v38,
                  0,
                  1);
                (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fea2*/
                 + 2))(
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
              v24 = (_DWORD *)__2_YAPAXI_Z(0x2Cu); /*0x68febb*/
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
        v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 4))(*(_DWORD *)(this + 12), v12) + 1; /*0x68fd53*/
        v4 -= v16; /*0x68fd54*/
        v37[2] = v16; /*0x68fd56*/
        v17 = *(_DWORD *)(this + 8); /*0x68fd64*/
        v37[1] = a4 + 1; /*0x68fd67*/
        v37[0] = v4; /*0x68fd72*/
        v37[3] = 16; /*0x68fd76*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x68fd85*/
         + 2))(
          g_DSurface_Hidden,
          v37,
          v17,
          v37,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x68fda2*/
         + 2))(
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
              if ( !_strcmpi(g_INI_Key_Back, **(char ***)(*(_DWORD *)(this + 56) + 4 * m)) ) /*0x68fdde*/
                break; /*0x68fde8*/
            }
          }
        }
      }
    }
LABEL_46:
    Render_Render_68FFE0((ObjectClass *)this, v4, a4); /*0x68ffa9*/
    result = Screen::TransitionLoop((Screen *)this, 1); /*0x68ffba*/
  }
  while ( v34 != 13 ); /*0x68ffc4*/
  return result; /*0x68ffca*/
}



// ==== 0x0068FFE0  ObjectClass::Render_Render_68FFE0  this=ObjectClass  sig=csp ====
signed int __thiscall Render_Render_68FFE0(ObjectClass *this, int a2, int a3)
{
  signed int result; // eax
  signed int v5; // esi
  void *ptr_8; // [esp+0h] [ebp-40h]
  int nextArrayIndex; // [esp+Ch] [ebp-34h]
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
    (*((void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x69006b*/
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
    nextArrayIndex = this->?; /*0x69008d*/
    v8[1] = a3 + 14; /*0x690093*/
    v9 = a2; /*0x690097*/
    v10 = a3 + 14; /*0x69009b*/
    (*((void (__thiscall **)(ObjectClass *, int *, _DWORD *, int))g_DSurface_Hidden->AbstractClass + 12))( /*0x6900a6*/
      g_DSurface_Hidden,
      &v9,
      v8,
      nextArrayIndex);
  }
  else
  {
    ptr_8 = this->?; /*0x6900bd*/
    v11 = a2; /*0x6900be*/
    v12 = a3 + 14; /*0x6900c2*/
    v13 = 11; /*0x6900c6*/
    v14 = 1; /*0x6900ce*/
    (*((void (__thiscall **)(ObjectClass *, int *, void *, int *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x6900dd*/
      g_DSurface_Hidden,
      &v11,
      ptr_8,
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


