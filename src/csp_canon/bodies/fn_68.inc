// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00680070  SaveGame_Start_680070  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680083*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680089*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68009e*/
        pPStm = 0; /*0x6800a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6800d6*/
        if ( result < 0 ) /*0x6800db*/
          break; /*0x6800db*/
        if ( ++v6 >= v9 ) /*0x6800e4*/
          return 0; /*0x6800e4*/
      }
    }
  }
  return result; /*0x6800e8*/
}

// ==== BACKFILL 0x006800F0  SaveGame_Start_6800F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680103*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680109*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68011e*/
        pPStm = 0; /*0x680121*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680156*/
        if ( result < 0 ) /*0x68015b*/
          break; /*0x68015b*/
        if ( ++v6 >= v9 ) /*0x680164*/
          return 0; /*0x680164*/
      }
    }
  }
  return result; /*0x680168*/
}

// ==== BACKFILL 0x00680170  SaveGame_Start_680170  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680183*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680189*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68019e*/
        pPStm = 0; /*0x6801a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6801d6*/
        if ( result < 0 ) /*0x6801db*/
          break; /*0x6801db*/
        if ( ++v6 >= v9 ) /*0x6801e4*/
          return 0; /*0x6801e4*/
      }
    }
  }
  return result; /*0x6801e8*/
}

// ==== BACKFILL 0x006801F0  SaveGame_Start_6801F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680203*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680209*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68021e*/
        pPStm = 0; /*0x680221*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680256*/
        if ( result < 0 ) /*0x68025b*/
          break; /*0x68025b*/
        if ( ++v6 >= v9 ) /*0x680264*/
          return 0; /*0x680264*/
      }
    }
  }
  return result; /*0x680268*/
}

// ==== BACKFILL 0x00680270  SaveGame_Start_680270  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680283*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680289*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68029e*/
        pPStm = 0; /*0x6802a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6802d6*/
        if ( result < 0 ) /*0x6802db*/
          break; /*0x6802db*/
        if ( ++v6 >= v9 ) /*0x6802e4*/
          return 0; /*0x6802e4*/
      }
    }
  }
  return result; /*0x6802e8*/
}

// ==== BACKFILL 0x006802F0  SaveGame_Start_6802F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680303*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680309*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68031e*/
        pPStm = 0; /*0x680321*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680356*/
        if ( result < 0 ) /*0x68035b*/
          break; /*0x68035b*/
        if ( ++v6 >= v9 ) /*0x680364*/
          return 0; /*0x680364*/
      }
    }
  }
  return result; /*0x680368*/
}

// ==== BACKFILL 0x00680370  SaveGame_Start_680370  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680383*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680389*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68039e*/
        pPStm = 0; /*0x6803a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6803d6*/
        if ( result < 0 ) /*0x6803db*/
          break; /*0x6803db*/
        if ( ++v6 >= v9 ) /*0x6803e4*/
          return 0; /*0x6803e4*/
      }
    }
  }
  return result; /*0x6803e8*/
}

// ==== BACKFILL 0x006803F0  SaveGame_Start_6803F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680403*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680409*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68041e*/
        pPStm = 0; /*0x680421*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680456*/
        if ( result < 0 ) /*0x68045b*/
          break; /*0x68045b*/
        if ( ++v6 >= v9 ) /*0x680464*/
          return 0; /*0x680464*/
      }
    }
  }
  return result; /*0x680468*/
}

// ==== BACKFILL 0x00680470  SaveGame_Start_680470  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680483*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680489*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68049e*/
        pPStm = 0; /*0x6804a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6804d6*/
        if ( result < 0 ) /*0x6804db*/
          break; /*0x6804db*/
        if ( ++v6 >= v9 ) /*0x6804e4*/
          return 0; /*0x6804e4*/
      }
    }
  }
  return result; /*0x6804e8*/
}

// ==== BACKFILL 0x006804F0  SaveGame_Start_6804F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680503*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680509*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68051e*/
        pPStm = 0; /*0x680521*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680556*/
        if ( result < 0 ) /*0x68055b*/
          break; /*0x68055b*/
        if ( ++v6 >= v9 ) /*0x680564*/
          return 0; /*0x680564*/
      }
    }
  }
  return result; /*0x680568*/
}

// ==== BACKFILL 0x00680570  SaveGame_Start_680570  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680583*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680589*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68059e*/
        pPStm = 0; /*0x6805a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6805d6*/
        if ( result < 0 ) /*0x6805db*/
          break; /*0x6805db*/
        if ( ++v6 >= v9 ) /*0x6805e4*/
          return 0; /*0x6805e4*/
      }
    }
  }
  return result; /*0x6805e8*/
}

// ==== BACKFILL 0x006805F0  SaveGame_Start_6805F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680603*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680609*/
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
        v7 = *(unsigned int *)(a2 + 4); /*0x68061e*/
        pPStm = 0; /*0x680621*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680656*/
        if ( result < 0 ) /*0x68065b*/
          break; /*0x68065b*/
        if ( ++v6 >= v9 ) /*0x680664*/
          return 0; /*0x680664*/
      }
    }
  }
  return result; /*0x680668*/
}

// ==== BACKFILL 0x00680670  SaveGame_Start_680670  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680670)
}

// ==== BACKFILL 0x006806F0  SaveGame_Start_6806F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6806F0)
}

// ==== BACKFILL 0x00680770  SaveGame_Start_680770  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680770)
}

// ==== BACKFILL 0x006807F0  SaveGame_Start_6807F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6807F0)
}

// ==== BACKFILL 0x00680870  SaveGame_Start_680870  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680870)
}

// ==== BACKFILL 0x006808F0  SaveGame_Start_6808F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6808F0)
}

// ==== BACKFILL 0x00680970  SaveGame_Start_680970  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680970)
}

// ==== BACKFILL 0x006809F0  SaveGame_Start_6809F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6809F0)
}

// ==== BACKFILL 0x00680A70  SaveGame_Start_680A70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680A70)
}

// ==== BACKFILL 0x00680AF0  SaveGame_Start_680AF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680AF0)
}

// ==== BACKFILL 0x00680B70  SaveGame_Start_680B70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680B70)
}

// ==== BACKFILL 0x00680BF0  SaveGame_Start_680BF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680BF0)
}

// ==== BACKFILL 0x00680C70  SaveGame_Start_680C70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680C70)
}

// ==== BACKFILL 0x00680CF0  SaveGame_Start_680CF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680CF0)
}

// ==== BACKFILL 0x00680D70  SaveGame_Start_680D70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680D70)
}

// ==== BACKFILL 0x00680DF0  SaveGame_Start_680DF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680DF0)
}

// ==== BACKFILL 0x00680E70  SaveGame_Start_680E70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680E70)
}

// ==== BACKFILL 0x00680EF0  SaveGame_Start_680EF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680EF0)
}

// ==== BACKFILL 0x00681070  sub_681070  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_681070::sub_681070()
{

  return (int)((unsigned int *)this)[0]; /*0x681073*/

}

// ==== BACKFILL 0x00681090  ReadPointerFromECX3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ReadPointerFromECX3()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00681090.json)
}

// ==== BACKFILL 0x006810A0  Map_Save_6810A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6810A0::Map_Save_6810A0(void* Source) {

  *((unsigned short *)this + 131) = 0; /*0x6810a4*/
  return wcsncpy((wchar_t *)&((unsigned int *)this)[0], Source, 0x7Fu); /*0x6810bc*/

}

// ==== BACKFILL 0x006810C0  ?raw_name_type_info__QBEPBDXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{

  return (char *)this + 8; /*0x6810c3*/

}

// ==== BACKFILL 0x006810D0  Map_Save_6810D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6810D0::Map_Save_6810D0(void* Source) {

  *((unsigned short *)this + 195) = 0; /*0x6810d4*/
  return wcsncpy((wchar_t *)this + 132, Source, 0x3Fu); /*0x6810ef*/

}

// ==== BACKFILL 0x00681100  LoadOptions::GetData  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char * LoadOptions::GetData(void *a1)
{

  return (char *)((unsigned char *)this + 264); /*0x681106*/

}

// ==== BACKFILL 0x00681120  LoadOptions::GetFlag98  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag98() const
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x681120)
}

// ==== BACKFILL 0x00681140  LoadOptions::GetFlag99  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag99() const
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x681140)
}

// ==== BACKFILL 0x00681180  sub_681180  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_681180::sub_681180()
{

  return (char *)this + 400; /*0x681186*/

}

// ==== BACKFILL 0x006811B0  sub_6811B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_6811B0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006811B0.json)
}

// ==== BACKFILL 0x006811F0  sub_6811F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_6811F0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006811F0.json)
}

// ==== BACKFILL 0x00681220  sub_681220  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_681220(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00681220.json)
}

// ==== BACKFILL 0x00681260  sub_681260  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_681260(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00681260.json)
}

// ==== BACKFILL 0x006812A0  sub_6812A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_6812A0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006812A0.json)
}

// ==== BACKFILL 0x006812D0  LoadOptions::GetFlag252  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag252() const
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6812d0)
}

// ==== BACKFILL 0x006822F0  Map_Read_6822F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006822F0.json)
}

// ==== BACKFILL 0x006823D0  Map_Read_6823D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6823D0(int a1, int a2, wchar_t * Destination)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006823D0.json)
}

// ==== BACKFILL 0x00682570  PropertyReadScenarioCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00682570.json)
}

// ==== BACKFILL 0x00682D30  ReadBufferCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00682D30.json)
}

// ==== BACKFILL 0x00683000  ScenarioClass::LookupMethod  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::LookupMethod() {

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

// ==== BACKFILL 0x00683030  COMObject::ValidatePtr  cls=COMObject  sig=csp  renamed_refs=0  residual=- ====
int COMObject::ValidatePtr() {
  if ( !*(unsigned int *)this->__pad_0 ) /*0x683033*/
    WinAPI::Wrapper(-2147467261); /*0x68303d*/
  return *(unsigned int *)this->__pad_0; /*0x683044*/
}

// ==== BACKFILL 0x00683560  ScenarioClass::ReadINIEntry  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ReadINIEntry(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00683610  ScenarioClass::InitTimer  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::InitTimer() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 64 errs): wrong-universe gap2 body; truth func_0x683610.json */
}

// ==== BACKFILL 0x00686700  ScenarioClass::SetFileName  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::SetFileName(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00689310  ScenarioClass::SaveLoad_Prefix  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::SaveLoad_Prefix(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006896C0  ScenarioClass::SetCountryFlag  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::SetCountryFlag(void* a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00689760  ScenarioClass::GetGlobalStateByID  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::GetGlobalStateByID(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00689790  sub_689790  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_689790(const char * a2, unsigned char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00689790.json)
}

// ==== BACKFILL 0x00689820  sub_689820  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_689820(const char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00689820.json)
}

// ==== BACKFILL 0x00689880  ScenarioClass::ReadGlobalVariables  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ReadGlobalVariables(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00689960  sub_689960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_689960(const char * a2, char a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00689960.json)
}

// ==== BACKFILL 0x00689A00  ScenarioClass::GetLocalStateByID  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::GetLocalStateByID(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00689A30  sub_689A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_689A30(const char * a2, unsigned char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00689A30.json)
}

// ==== BACKFILL 0x00689AC0  sub_689AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_689AC0(const char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00689AC0.json)
}

// ==== BACKFILL 0x00689B20  ScenarioClass::ReadLocalVariables  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ReadLocalVariables(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0068B8A0  sub_68B8A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long sub_68B8A0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068B8A0.json)
}

// ==== BACKFILL 0x0068BCB0  AbstractClass::updateAITimer  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::updateAITimer() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x68bcb0.json */
}

// ==== BACKFILL 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ScenarioClass::Get_Waypoint_Location(unsigned int *a2, int a3) {
    *a2 = *(unsigned int *)((char *)this + 4 * a3 + 1586); /*0x68bccf G42.34 T11: byte-offset view (IDA ptr math)*/
    return a2; /*0x68bcd1*/
}

// ==== BACKFILL 0x0068BCE0  ScenarioClass::GetCellFromArray  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void * ScenarioClass::GetCellFromArray(int a2) {
    // G42.34 T11: cache 0x68BCE0 reads ((CellCoord *)&stru_87F5F0.__pad_58[416]) --
    // byte view 0x87F5F0 + 0x58 + 416 = 0x87F7E8 (dword_87F7E8 twin, ida_globals.h).
    // Tree CellCoord::To_CellObj is 0-arg virtual -> shadow carrier.
    return ((CellCoord_shadow_c *)&dword_87F7E8)->To_CellObj((int16_t *)&this->waypoints[4 * a2]); /*0x68bcf6*/
}

// ==== BACKFILL 0x0068BD00  Cell::GetWorldCoords  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Cell::GetWorldCoords(unsigned int *a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = ida_cache)
}

// ==== BACKFILL 0x0068BD60  ScenarioClass::ClearAllWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::ClearAllWaypoints() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x68BD60.json */
}

// ==== BACKFILL 0x0068BD80  ScenarioClass::Is_Waypoint_Valid  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
bool ScenarioClass::Is_Waypoint_Valid(int a1) {
  return false;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0068BDC0  ScenarioClass::ReadWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ReadWaypoints(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0068BE90  ScenarioClass::Write_Waypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Write_Waypoints(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0068BF30  ScenarioClass::Set_Default_Waypoint  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Set_Default_Waypoint(int a2) {

  *(unsigned int *)&this->waypoints[4 * a2] = dword_B05458; /*0x68bf3a*/
  return a2; /*0x68bf41*/

}

// ==== BACKFILL 0x0068BF50  ScenarioClass::Set_Waypoint  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Set_Waypoint(int a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0068C030  BuildingType::Init  cls=BuildingType  sig=csp  renamed_refs=0  residual=- ====
int BuildingType::Init(unsigned int a2)
{

  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *((unsigned int *)this + a2 + 1120); /*0x68c03d*/

}

// ==== BACKFILL 0x0068C260  DynamicVector_PushBack  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_68C260::DynamicVector_PushBack(void* aP1) {

  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  unsigned int *ptr_4; // edx

  ptr_8 = ((unsigned int *)this)[0]; /*0x68c263*/
  if ( ((unsigned int *)this)[0] >= (int)ptr_8 ) /*0x68c26b*/
  {
    if ( !BYTE1(((unsigned int *)this)[0]) && ptr_8 ) /*0x68c276*/
      return 0; /*0x68c276*/
    abstractFlags = ((unsigned int *)this)[0]; /*0x68c278*/
    if ( abstractFlags <= 0 /*0x68c288*/
      || !(*((uint8_t (**)(ObjectClass *, int, unsigned int))this->ptr_4 + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x68c28f*/
    }
  }
  uniqueId = ((unsigned int *)this)[0]; /*0x68c295*/
  ptr_4 = ((unsigned int *)this)[0]; /*0x68c298*/
  ((unsigned int *)this)[0] = uniqueId + 1; /*0x68c29e*/
  ptr_4[uniqueId] = *aP1; /*0x68c2a8*/
  return 1; /*0x68c291*/

}

// ==== BACKFILL 0x0068C860  LoadTheaterClassMIX_Load  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_68C860::LoadTheaterClassMIX_Load(BlowStraw * aP1, int a3, int a4, int a5, int a6) {

  void (***v7)(unsigned int, int); // ecx
  int result; // eax

  v7 = *(void (****)(unsigned int, int))((char *)this + 780); /*0x68c863*/
  if ( v7 ) /*0x68c86b*/
  {
    (**v7)(v7, 1); /*0x68c871*/
    *((unsigned int *)this + 195) = 0; /*0x68c873*/
  }
  result = FontClass::CreateGlyphColor( /*0x68c8b2*/
             (char *)((char *)this + 776),
             aP1,
             a3,
             (void *)((char *)this + 4),
             g_DSurface_Primary,
             *((unsigned int *)this + 196),
             a4,
             a5,
             a6,
             (int)&unk_83E1AC);
  *((unsigned int *)this + 195) = result; /*0x68c8b7*/
  return result; /*0x68c8bd*/

}

// ==== BACKFILL 0x0068CA50  FindBuildingAnimByName  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068CA50.json)
}

// ==== BACKFILL 0x0068CAB0  Network_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Network_Assign(void * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068CAB0.json)
}

// ==== BACKFILL 0x0068ED80  Render_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Render_Get(ScoreScreen * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068ED80.json)
}

// ==== BACKFILL 0x0068F8A0  sub_68F8A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_68F8A0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068F8A0.json)
}

// ==== BACKFILL 0x0068FB10  sub_68FB10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_68FB10(unsigned int * a2, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)BufferCount; (void)Format; (void)a6; (void)a7; (void)a8; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068FB10.json)
}
