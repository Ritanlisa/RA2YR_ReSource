// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00680070  SaveGame_Start_680070  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006800F0  SaveGame_Start_6800F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680170  SaveGame_Start_680170  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006801F0  SaveGame_Start_6801F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680270  SaveGame_Start_680270  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006802F0  SaveGame_Start_6802F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680370  SaveGame_Start_680370  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006803F0  SaveGame_Start_6803F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680470  SaveGame_Start_680470  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006804F0  SaveGame_Start_6804F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680570  SaveGame_Start_680570  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006805F0  SaveGame_Start_6805F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680670  SaveGame_Start_680670  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006806F0  SaveGame_Start_6806F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680770  SaveGame_Start_680770  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006807F0  SaveGame_Start_6807F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680870  SaveGame_Start_680870  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006808F0  SaveGame_Start_6808F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680970  SaveGame_Start_680970  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006809F0  SaveGame_Start_6809F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680A70  SaveGame_Start_680A70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680AF0  SaveGame_Start_680AF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680B70  SaveGame_Start_680B70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680BF0  SaveGame_Start_680BF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680C70  SaveGame_Start_680C70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680CF0  SaveGame_Start_680CF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680D70  SaveGame_Start_680D70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680DF0  SaveGame_Start_680DF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680E70  SaveGame_Start_680E70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00680EF0  SaveGame_Start_680EF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00681070  sub_681070  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_681070::sub_681070()
{
{
    return this->M4;
}
}

// ==== BACKFILL 0x00681090  ReadPointerFromECX3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_681090::ReadPointerFromECX3()
{
{
    return *(int *)this;
}
}

// ==== BACKFILL 0x006810C0  ?raw_name_type_info__QBEPBDXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{
{
    return (char *)(this) + 8;
}
}

// ==== BACKFILL 0x00681100  LoadOptions::GetData  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char * LoadOptions::GetData()
{
{
    return this + 264;
}
}

// ==== BACKFILL 0x00681120  LoadOptions::GetFlag98  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag98() const {
return this->q188;
}

// ==== BACKFILL 0x00681140  LoadOptions::GetFlag99  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag99() const {
return this->q18C;
}

// ==== BACKFILL 0x00681180  sub_681180  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_681180::sub_681180()
{
{
    return this + 400;
}
}

// ==== BACKFILL 0x006811B0  sub_6811B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_6811B0::sub_6811B0()
{
{
    return this + 660;
}
}

// ==== BACKFILL 0x006811F0  sub_6811F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_6811F0::sub_6811F0()
{
{
    return this + 724;
}
}

// ==== BACKFILL 0x00681220  sub_681220  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_681220::sub_681220(unsigned int * a2)
{
{
    *a2 = this->M984;
    *((int*)(a2) + 1) = this->M988;
    return a2;
}
}

// ==== BACKFILL 0x00681260  sub_681260  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_681260::sub_681260(unsigned int * a2)
{
{
    *a2 = this->M992;
    *((int*)(a2) + 1) = this->M996;
    return a2;
}
}

// ==== BACKFILL 0x006812A0  sub_6812A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6812A0::sub_6812A0(unsigned int * a2)
{
{
    *a2 = this->M1000;
    *((int*)(a2) + 1) = this->M1004;
    return a2;
}
}

// ==== BACKFILL 0x006812D0  LoadOptions::GetFlag252  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
uint32_t LoadOptions::GetFlag252() const {
return this->q3F0;
}

// ==== BACKFILL 0x006822F0  Map_Read_6822F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
{
    LPSTR v3;
    int v4;
    int v6[2];
    short v7[4];
    LPCWCH lpWideCharStr;
    v3 = lpMultiByteStr;
    lpMultiByteStr = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, LPSTR *))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &lpMultiByteStr);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !lpMultiByteStr )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(LPSTR, int, int *, short *))(*(int *)(lpMultiByteStr) + 12))( lpMultiByteStr, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 31 )
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, v3, 128, 0, 0);
    if ( lpMultiByteStr )
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    }
    else if ( lpMultiByteStr )
    {
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    return v4;
    }
  }
    else if ( lpMultiByteStr )
  {
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    return v4;
  }
    return v4;
}
}

// ==== BACKFILL 0x006823D0  Map_Read_6823D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6823D0(int a1, int a2, wchar_t * Destination)
{
{
    wchar_t *v3;
    int v4;
    int v6[2];
    short v7[4];
    wchar_t *Source;
    v3 = Destination;
    Destination = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, wchar_t **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &Destination);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !Destination )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(wchar_t *, int, int *, short *))(*(int *)(Destination) + 12))(Destination, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 31 )
    wcsncpy(v3, Source, 0x80u);
    if ( Destination )
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    }
    else if ( Destination )
    {
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    return v4;
    }
  }
    else if ( Destination )
  {
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    return v4;
  }
    return v4;
}
}

// ==== BACKFILL 0x00682570  PropertyReadScenarioCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    int v6[2];
    short v7[4];
    int v8;
    v3 = a3;
    a3 = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, int **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &a3);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !a3 )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(int *, int, int *, short *))(*a3 + 12))(a3, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 3 )
    *v3 = v8;
    if ( a3 )
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    }
    else if ( a3 )
    {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
    }
  }
    else if ( a3 )
  {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
  }
    return v4;
}
}

// ==== BACKFILL 0x00682D30  ReadBufferCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    int v6;
    int v7[2];
    short v8[4];
    int v9;
    int v10;
    v3 = a3;
    a3 = 0;
    *v3 = 0;
    v3[1] = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, int **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &a3);
    if ( v4 >= 0 )
  {
    v7[0] = 1;
    v7[1] = a2;
    if ( !a3 )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(int *, int, int *, short *))(*a3 + 12))(a3, 1, v7, v8);
    if ( v4 >= 0 )
    {
    if ( v8[0] == 64 )
      {
    v6 = v10;
    *v3 = v9;
    v3[1] = v6;
      }
    if ( a3 )
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    }
    else if ( a3 )
    {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
    }
  }
    else if ( a3 )
  {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
  }
    return v4;
}
}

// ==== BACKFILL 0x00683000  ScenarioClass::LookupMethod  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::LookupMethod() {
{
    int v1;
    void **v2;
    v1 = 0;
    v2 = (void **)&DataGlobal_83D658;
    while ( *v2 != this )
  {
    v2 += 2;
    ++v1;
    if ( (int)v2 >= (int)g_INI_Key_GameType )
    return 0;
  }
    return (&DataGlobal_83D65C)[2 * v1];
}
} }

// ==== BACKFILL 0x00683030  COMObject::ValidatePtr  cls=COMObject  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int COMObject::ValidatePtr() {
{
    if ( !*(int *)this )
    WinAPI::Wrapper(-2147467261);
    return *(int *)this;
}
} }

// ==== BACKFILL 0x00683560  ScenarioClass::ReadINIEntry  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ReadINIEntry(int a1) {
{
      SeedInitRNG((_DWORD *)(this + 536), 0);
      this->q620 = Timer::GetTicks();
      this->q628 = 0;
      TechnoTypeVector::Construct((_DWORD *)(this + 13524), 0, 0);
      this->allowableUnits = &vt_TypeList_TechnoTypeClass;
      DynamicVectorClass::Construct((_DWORD *)(this + 13552), 0, 0);
      this->ambientCurrent = &vt_TypeList_int;
      DynamicVectorClass::Construct((_DWORD *)(this + 13580), 0, 0);
      this->ionAmbient = &vt_TypeList_int;
      if ( this->missionTimer_text )
        this->missionTimer_text_csf = GetStringCSF((wchar_t *)(this + 4600), 0, &stru_830620[53784], 344);
      else
        this->missionTimer_text_csf = &DataGlobal_87F8E4[32336];
      return this;
}
} }

// ==== BACKFILL 0x00683610  ScenarioClass::InitTimer  cls=ScenarioClass  sig=csp  renamed_refs=13  residual=- ====
namespace gamemd { void* ScenarioClass::InitTimer() {
{
      int Ticks;
      int v3;
      _DWORD *v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      _DWORD *v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      #72 *result; // eax
      #72 *StringCSF; // eax
      int v23;
      _DWORD v24[2];
      char Destination[32];

      this->altHomeCell = 699;
      this->uniqueId = 699;
      this->random = 1000000;
      this->difficulty2 = 1;
      this->elapsedTimer = 1;
      Ticks = Timer::GetTicks(v24);
      v3 = v24[0];
      v4 = (_DWORD *)(this + 1556);
      this->q614 = Ticks;
      this->q618 = v3;
      this->pauseTimer = 0;
      if ( this->q614 != -1 )
      {
        v5 = Timer::GetTicks(this + 1560);
        v6 = this->pauseTimer;
        v7 = v5 - *v4;
        *v4 = -1;
        this->pauseTimer = v7 + v6;
      }
      v8 = Timer::GetTicks(v24);
      v9 = v24[0];
      v10 = (_DWORD *)(this + 1568);
      this->q620 = v8;
      this->q624 = v9;
      this->q628 = 0;
      if ( this->q620 != -1 )
      {
        v23 = this->q628;
        v11 = Timer::GetTicks(this + 1572) - *v10;
        if ( v11 >= v23 )
          v12 = 0;
        else
          v12 = v23 - v11;
        this->q628 = v12;
        *v10 = -1;
      }
      this->ScenarioClass_field_62C = 0;
      this->unknown630 = 0;
      this->missionTimer = dword_A8ED54[12];
      this->q11EC = v24[0];
      this->q11F0 = 0;
      v13 = this->missionTimer;
      if ( v13 != -1 )
      {
        v14 = this->q11F0;
        if ( dword_A8ED54[12] - v13 >= v14 )
          v15 = 0;
        else
          v15 = v14 - (dword_A8ED54[12] - v13);
        this->q11F0 = v15;
        this->missionTimer = -1;
      }
      this->missionTimer_text_csf = &DataGlobal_87F7E8[8147];
      if ( DataGlobal_87F7E8 == (_DWORD *)-42876 )
      {
        Destination[0] = 0;
      }
      else
      {
        strncpy(Destination, (const char *)&DataGlobal_87F7E8[10719], 31);
        Destination[31] = 0;
      }
      if ( Destination != (char *)(this + 4600) )
        qmemcpy((void *)(this + 4600), Destination, 0x20u);
      this->shroudRegrowTimer = dword_A8ED54[12];
      this->q121C = v24[0];
      this->q1220 = 0;
      v16 = v24[0];
      this->fogTimer = dword_A8ED54[12];
      this->q1228 = v16;
      v17 = v24[0];
      this->q122C = 0;
      this->iceTimer = dword_A8ED54[12];
      this->q1234 = v17;
      v18 = v24[0];
      this->q1238 = 0;
      this->ScenarioClass_field_timer_123c = dword_A8ED54[12];
      this->q1240 = v18;
      v19 = v24[0];
      this->q1244 = 0;
      this->ambientTimer = dword_A8ED54[12];
      this->q124C = v19;
      v20 = v24[0];
      this->q1250 = 0;
      this->theater = -1;
      this->intro = -1;
      this->brief = -1;
      this->win = -1;
      this->lose = -1;
      this->action = -1;
      this->postScore = -1;
      this->preMapSelect = -1;
      this->themeIndex = -1;
      this->humanPlayerHouseTypeIndex = 0;
      this->carryOverMoney = 0;
      this->q1C7C = 0;
      this->carryOverCap = 0;
      this->percent = 0;
      this->ScenarioClass_field_34A0 = 0;
      this->freeRadar = 0;
      this->trainCrate = 0;
      this->storedTiberium_growth_enabled = 1;
      this->veinGrowthEnabled = 1;
      this->iceGrowthEnabled = 1;
      this->bridgeDestroyed = 0;
      this->variablesChanged = 0;
      this->ambientChanged = 0;
      this->endOfGame = 0;
      this->timerInherit = 0;
      this->skipScore = 0;
      this->oneTimeOnly = 0;
      this->skipMapSelect = 0;
      this->truckCrate = 0;
      this->fillSilos = 0;
      this->ignoreGlobalAiTriggers = 0;
      this->playerSideIndex = 0;
      this->multiplayerOnly = 0;
      this->pickedUpAnyCrate = 0;
      this->ScenarioClass_field_timer_34C0 = dword_A8ED54[12];
      this->q34C4 = v20;
      this->q34C8 = 0;
      this->startingDropships = 0;
      this->nukeRed = 100;
      this->nukeGreen = 100;
      this->nukeBlue = 100;
      this->nukeGround = 100;
      this->nukeLevel = 100;
      this->nukeAmbientChangeRate = 100;
      this->dominatorAmbient = 50;
      this->dominatorRed = 8;
      this->dominatorGreen = 87;
      this->q3570 = 100;
      this->q3574 = 100;
      this->dominatorBlue = 30;
      this->dominatorGround = 40;
      this->q3578 = 1;
      this->q3594 = 1;
      this->storedTiberium_death_to_visceroid = 1;
      this->dominatorLevel = 75;
      this->dominatorAmbientChangeRate = 0;
      this->unknown3598 = 0;
      this->initTime = 200;
      this->stage = 175;
      this->q3568 = 150;
      this->q356C = 125;
      this->q357C = 150;
      this->q3580 = 85;
      this->q3584 = 20;
      this->q3588 = 30;
      this->q358C = 0;
      this->q3590 = 0;
      this->q359C = 10000;
      this->q35A0 = 0;
      this->ScenarioClass_field_35A2 = 0;
      this->parTimeEasy = 3600;
      this->parTimeMedium = 3600;
      this->parTimeDifficult = 3600;
      this->underParTitle = 0;
      this->underParMessage = 0;
      this->overParTitle = 0;
      this->overParMessage = 0;
      this->lsLoadMessage = 0;
      this->lsBrief = 0;
      this->ls640BriefLocX = 0;
      this->ls640BriefLocY = 0;
      this->ls800BriefLocX = 0;
      this->ls800BriefLocY = 0;
      this->ls640BkgdName = 0;
      this->ls800BkgdName = 0;
      this->ls800BkgdPal = 0;
      this->teamsPresent = 0;
      this->numCoopHumanStartSpots = 4;
      (*(void (__thiscall **)(int))(this->allowableUnits + 12))(this + 13524);
      (*(void (__thiscall **)(int))(this->ambientCurrent + 12))(this + 13552);
      (*(void (__thiscall **)(int))(this->ionAmbient + 12))(this + 13580);
      result = (#72 *)DataGlobal_87F7E8[536212];
      if ( DataGlobal_87F7E8[536212] == 5 )
      {
        StringCSF = GetStringCSF((#72 *)aGuiSkirmishgam, 0, g_Str_File_Scenario_CPP, 522);
        return wcscpy((#72 *)(DataGlobal_87F7E8[536210] + 4960), StringCSF);
      }
      return result;
}
} }

// ==== BACKFILL 0x00686700  ScenarioClass::SetFileName  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::SetFileName(void* a1) {
{
      ObjectClass *result;

      result = aP1;
      if ( aP1 )
      {
        result = (ObjectClass *)strncpy(this + 4700, aP1->__pad_0, 0x104u);
        this->q135F = 0;
      }
      return result->__pad_0;
}
} }

// ==== BACKFILL 0x00689310  ScenarioClass::SaveLoad_Prefix  cls=ScenarioClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int ScenarioClass::SaveLoad_Prefix(int * a2) {
{
      DWORD *v3;
      DWORD Ticks;
      int v5;
      DWORD v6;
      int *v7;
      int v8;
      int i;
      int v10;
      int j;
      int v12;
      int k;
      DWORD v14;
      bool v16;

      v3 = this + 389;
      Debug::Log();
      v16 = *v3 == -1;
      if ( *v3 != -1 )
      {
        Ticks = Timer::GetTicks();
        v5 = this->pauseTimer;
        v6 = Ticks - *v3;
        *v3 = -1;
        this->pauseTimer = v6 + v5;
      }
      v7 = a2;
      (*(void (__stdcall **)(int *, DWORD *, int, _DWORD))(*a2 + 16))(a2, this, 14144, 0);
      v8 = *v7;
      a2 = (int *)this->dropshipUnitCounts;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v7, &a2, 4, 0);
      for ( i = 0; i < (int)a2; ++i )
        (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->allowableUnitsCount + 4 * i, 4, 0);
      v10 = *v7;
      a2 = (int *)this->blue;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v7, &a2, 4, 0);
      for ( j = 0; j < (int)a2; ++j )
        (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ambientTarget + 4 * j, 4, 0);
      v12 = *v7;
      a2 = (int *)this->ionGround;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v7, &a2, 4, 0);
      for ( k = 0; k < (int)a2; ++k )
        (*(void (__stdcall **)(int *, DWORD, int, _DWORD))(*v7 + 16))(v7, this->ionRed + 4 * k, 4, 0);
      LOBYTE(v14) = v16;
      if ( !v16 && *v3 == -1 )
      {
        v14 = Timer::GetTicks();
        *v3 = v14;
      }
      return v14;
}
} }

// ==== BACKFILL 0x006896C0  ScenarioClass::SetCountryFlag  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::SetCountryFlag(const char * a2, char a3) {
{
    unsigned int v3;
    const char *i;
    char v6;
    v3 = 0;
    for ( i = this + 7304; strcmp(a2, i); i += 41 )
  {
    if ( (int)++v3 >= 50 )
    return 1;
  }
    if ( v3 == -1 )
    return 1;
    if ( v3 >= 0x32 )
    return 0;
    v6 = *(this + 40 * v3 + v3 + 7344);
    if ( v6 != a3 )
  {
    *((char *)(this) + 40 * v3 + v3 + 7344) = a3;
    this->variablesChanged = 1;
    HouseClass::UpdateAllTypes((void *)v3);
  }
    return v6;
}
} }

// ==== BACKFILL 0x00689760  ScenarioClass::GetGlobalStateByID  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::GetGlobalStateByID(int a1, void* a2) {
{
    if ( a2 > 0x31 )
    return 0;
    LOBYTE(a2->nextScenario[0]) = *(this + 40 * a2 + a2 + 7344);
    return 1;
}
} }

// ==== BACKFILL 0x00689790  sub_689790  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_689790::sub_689790(const char * a2, unsigned char * a3)
{
{
    int v3;
    const char *i;
    v3 = 0;
    for ( i = this + 7304; strcmp(a2, i); i += 41 )
  {
    if ( ++v3 >= 50 )
    return 0;
  }
    if ( v3 < 0 )
    return 0;
    *a3 = *(this + 40 * v3 + v3 + 7344);
    return 1;
}
}

// ==== BACKFILL 0x00689820  sub_689820  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_689820::sub_689820(const char * a2)
{
{
    int v2;
    const char *i;
    v2 = 0;
    for ( i = this + 7304; strcmp(a2, i); i += 41 )
  {
    if ( ++v2 >= 50 )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00689880  ScenarioClass::ReadGlobalVariables  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ReadGlobalVariables(ScenarioClass * aP1) {
{
    int KeyCount;
    CCINIClass *v3;
    CCINIClass *StringByIndex;
    int v5;
    if ( INIClass::GetKeyCount((char *)aP1, (INIClass *)&DataGlobal_830620[53764]) >= 50 )
    KeyCount = 50;
    else
    KeyCount = INIClass::GetKeyCount((char *)aP1, (INIClass *)&DataGlobal_830620[53764]);
    v3 = 0;
    if ( KeyCount <= 0 )
    return 1;
    do
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex( (char *)aP1, (CCINIClass *)&DataGlobal_830620[53764], v3);
    v5 = atoi(StringByIndex->__pad_0);
    INIClass::GetString( (unsigned char ***)aP1, (INIClass *)&DataGlobal_830620[53764], (unsigned char *)StringByIndex, 0, (INIClass *)(this + 40 * v5 + v5 + 7304), 40);
    v3 = (CCINIClass *)((char *)(v3) + 1);
  }
    while ( (int)v3 < KeyCount );
    return 1;
}
} }

// ==== BACKFILL 0x00689960  sub_689960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_689960::sub_689960(const char * a2, char a3)
{
{
    unsigned int v3;
    const char *i;
    char v6;
    v3 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( (int)++v3 >= 100 )
    return 1;
  }
    if ( v3 == -1 )
    return 1;
    if ( v3 >= 0x64 )
    return 0;
    v6 = *(this + 40 * v3 + v3 + 9394);
    if ( v6 != a3 )
  {
    *((char *)(this) + 40 * v3 + v3 + 9394) = a3;
    this->M13482 = 1;
    TriggerActionQueue::ProcessAll((void *)v3);
  }
    return v6;
}
}

// ==== BACKFILL 0x00689A00  ScenarioClass::GetLocalStateByID  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::GetLocalStateByID(int a1, void* a2) {
{
    if ( (unsigned int)a1 >= 0x64 )
    return 0;
    LOBYTE(a2->nextScenario[0]) = *(this + 40 * (int)a1 + (int)a1 + 9394);
    return 1;
}
} }

// ==== BACKFILL 0x00689A30  sub_689A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_689A30::sub_689A30(const char * a2, unsigned char * a3)
{
{
    int v3;
    const char *i;
    v3 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( ++v3 >= 100 )
    return 0;
  }
    if ( v3 < 0 )
    return 0;
    *a3 = *(this + 40 * v3 + v3 + 9394);
    return 1;
}
}

// ==== BACKFILL 0x00689AC0  sub_689AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_689AC0::sub_689AC0(const char * a2)
{
{
    int v2;
    const char *i;
    v2 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( ++v2 >= 100 )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00689B20  ScenarioClass::ReadLocalVariables  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ReadLocalVariables(CCINIClass * aP1) {
{
      ScenarioClass *v2;
      char *v3;
      int v4;
      CCINIClass *StringByIndex;
      CCINIClass *v6;
      char *v7;
      char *v8;
      int KeyCount;
      CCINIClass *aP2;
      INIClass String[2];

      v2 = (ScenarioClass *)this;
      v3 = this + 9354;
      v4 = 100;
      do
      {
        *v3 = 0;
        v3 += 41;
        --v4;
      }
      while ( v4 );
      if ( INIClass::GetKeyCount(aP1->__pad_0, (INIClass *)&stru_830620[53764]) >= 100 )
        KeyCount = 100;
      else
        KeyCount = INIClass::GetKeyCount(aP1->__pad_0, (INIClass *)&stru_830620[53764]);
      aP2 = 0;
      if ( KeyCount <= 0 )
        return 1;
      while ( 1 )
      {
        StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(
                                        aP1->__pad_0,
                                        (CCINIClass *)&stru_830620[53764],
                                        aP2);
        v6 = (CCINIClass *)atoi(StringByIndex->__pad_0);
        INIClass::GetString(
          (unsigned __int8 ***)aP1,
          (INIClass *)&stru_830620[53764],
          (unsigned __int8 *)StringByIndex,
          0,
          String,
          128);
        v7 = (char *)v2 + 40 * (_DWORD)v6 + (_DWORD)v6;
        strcpy(v7 + 9354, strtok(String[0].__pad_0, Delimiter[0]));
        v8 = strtok(0, Delimiter[0]);
        if ( v8 )
          v7[9394] = atoi(v8) != 0;
        aP2 = (CCINIClass *)((char *)aP2 + 1);
        if ( (int)aP2 >= KeyCount )
          break;
        v2 = (ScenarioClass *)this;
      }
      return 1;
}
} }

// ==== BACKFILL 0x0068B8A0  sub_68B8A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long E4Recv_68B8A0::sub_68B8A0()
{
{
    DWORD v1;
    unsigned int v2;
    char v4;
    int v5;
    int v6;
    int v7;
    __int64 v8;
    v5 = (int)this;
    v6 = 0;
    GetVersionString(&v7, &v4, 0, 0);
    if ( v7 > 5 )
    v5 = Math::RoundToInt((double)v5 * 0.8);
    v1 = sub_5CAF70((LONG *)&v8);
    v2 = v8;
    if ( v1 || (int)v8 )
  {
    v8 = v1;
    v6 = Math::RoundToInt(((double)v2 * 4294967296.0 + (double)v1) * 0.000001);
  }
    return Math::RoundToInt((double)v5 * 200.0 / (double)v6);
}
}

// ==== BACKFILL 0x0068BCB0  AbstractClass::updateAITimer  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::updateAITimer() {
{
      int result;

      result = this->q214 + 1;
      this->q214 = result;
      return result;
}
} } }

// ==== BACKFILL 0x0068BCC0  ScenarioClass::Get_Waypoint_Location  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::Get_Waypoint_Location(void* a1, int a2) { return nullptr; } }

// ==== BACKFILL 0x0068BCE0  ScenarioClass::GetCellFromArray  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::GetCellFromArray(int a1) {
{
    return CellCoord::To_CellObj(&DataGlobal_87F7E8, this + 2 * (int)a1 + 793);
}
} }

// ==== BACKFILL 0x0068BD00  Cell::GetWorldCoords  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Cell::GetWorldCoords(unsigned int * a2, int a3)
{
{
    int *v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, this + 2 * a3 + 793);
    v4 = (int *)(*(int (__thiscall **)(int *, char *))(*v3 + 72))(v3, v9);
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    if ( (v3[80] & 0x500) != 0 )
    v7 += DataGlobal_B054BC;
    *a2 = v5;
    *((int*)(a2) + 1) = v6;
    *((int*)(a2) + 2) = v7;
    return a2;
}
}

// ==== BACKFILL 0x0068BD60  ScenarioClass::ClearAllWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::ClearAllWaypoints() {
{
    int *result;
    int v2;
    result = this + 1586;
    v2 = 702;
    do
  {
    *result++ = DataGlobal_B05458;
    --v2;
  }
    while ( v2 );
    return result;
}
} }

// ==== BACKFILL 0x0068BD80  ScenarioClass::Is_Waypoint_Valid  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool ScenarioClass::Is_Waypoint_Valid(unsigned int a2) {
{
    return a2 <= 0x2BD && *(int *)(this + 4 * a2 + 1586) != DataGlobal_B05458;
}
} }

// ==== BACKFILL 0x0068BDC0  ScenarioClass::ReadWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ReadWaypoints(int a1) {
{
    int v3;
    short *v4;
    signed int Int_Overwrite;
    signed int v6;
    int *v7;
    int v8;
    CHAR v10[20];
    CCINIClass *aP1a;
    v3 = 0;
    v4 = this + 793;
    do
  {
    wsprintfA(v10, g_Str_Trace__d, v3);
    Int_Overwrite = INIClass::ReadInt_Overwrite((int)a1, g_INI_Key_Waypoints, (CCINIClass *)v10, 0);
    v6 = Int_Overwrite;
    if ( Int_Overwrite )
    {
    LOWORD(aP1a) = Int_Overwrite % 1000;
    Int_Overwrite = (unsigned int)((unsigned __int64)(274877907LL * Int_Overwrite) >> 32) >> 31;
    HIWORD(aP1a) = v6 / 1000;
    *(int *)v4 = aP1a;
    }
    else
    {
    *(int *)v4 = DataGlobal_B05458;
    }
    if ( v3 >= 0 )
    {
    if ( *v4 != (short)DataGlobal_B05458 || (LOWORD(Int_Overwrite) = v4[1], (short)Int_Overwrite != HIWORD(DataGlobal_B05458)) )
      {
    v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v4);
    v8 = v7[80];
    Int_Overwrite = (signed int)(v7 + 80);
    *(int *)Int_Overwrite = v8 | 4;
      }
    }
    ++v3;
    v4 += 2;
  }
    while ( v3 < 702 );
    return Int_Overwrite;
}
} }

// ==== BACKFILL 0x0068BE90  ScenarioClass::Write_Waypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::Write_Waypoints(void* a1) {
{
    char result;
    int v4;
    short *v5;
    CHAR v6[32];
    result = INIClass::ClearSection((int)a1, (INIClass *)g_INI_Key_Waypoints, 0);
    v4 = 0;
    v5 = this + 793;
    do
  {
    if ( *(int *)v5 != DataGlobal_B05458 )
    {
    wsprintfA(v6, g_Str_Trace__d, v4);
    result = INIClass::SetInt(a1->__pad_0, (INIClass *)g_INI_Key_Waypoints, (INIClass *)v6, *v5 + 1000 * v5[1], 0);
    }
    ++v4;
    v5 += 2;
  }
    while ( v4 < 702 );
    return result;
}
} }

// ==== BACKFILL 0x0068BF30  ScenarioClass::Set_Default_Waypoint  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::Set_Default_Waypoint(int a2) {
{
    *(int *)(this + 4 * a2 + 1586) = DataGlobal_B05458;
    return a2;
}
} }

// ==== BACKFILL 0x0068BF50  ScenarioClass::Set_Waypoint  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::Set_Waypoint(int a1, int a2) {
    this->waypoints[a1].X = (short)(unsigned short)a2;
    this->waypoints[a1].Y = (short)((unsigned int)a2 >> 16);
    return a2;

/* ASM:
mov     edx, [esp+arg_0]
mov     eax, [esp+arg_4]
mov     [ecx+edx*4+632h], eax
retn    8
*/
} }

// ==== BACKFILL 0x0068C710  FontClass::InitMetrics  cls=FontClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* FontClass::InitMetrics(void* a1, int a2, int a3, int a4, int a5, int a6) {
{
      int v8;
      char *v9;
      int v10;

      v8 = 256;
      v9 = this + 4;
      do
      {
        *v9 = 0;
        v9[1] = 0;
        v9[2] = 0;
        v9 += 3;
        --v8;
      }
      while ( v8 );
      this->q304 = _strdup(Source);
      this->q308 = *(_WORD *)aP2->__pad_0;
      this->q30A = aP2->__pad_0[2];
      this->q30C = 0;
      this->q310 = a6;
      this->q314 = 16;
      this->q318 = 15;
      this->q31C = 25;
      this->q320 = 24;
      this->q324 = 22;
      this->q328 = 16;
      this->q32C = 19;
      this->q330 = 16;
      this->q334 = 16;
      this->q338 = 21;
      this->q30C = FontClass::CreateGlyphColor(
                                  this + 776,
                                  aP3,
                                  a5,
                                  this + 4,
                                  *(int *)&DataGlobal_87F8E4[31268],
                                  a6,
                                  1000,
                                  1000,
                                  1000,
                                  (int)&stru_830620[56204]);
      if ( a7 )
      {
        if ( g_AnimClass_SaveState < DataGlobal_B054D8
          || (DataGlobal_B054DD || !DataGlobal_B054D8)
          && DataGlobal_B054E4 > 0
          && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))ColorScheme_Array->field_8)(
               &ColorScheme_Array,
               DataGlobal_B054D8 + DataGlobal_B054E4,
               0) )
        {
          v10 = g_AnimClass_SaveState++;
          *((_DWORD *)BuildingTypeClass_AnimTable + v10) = this;
        }
        *(_DWORD *)this = g_AnimClass_SaveState;
      }
      return this;
}
} }

// ==== BACKFILL 0x0068CA50  FindBuildingAnimByName  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
{
    int v2;
    IUnknown *v5;
    bool v6;
    v2 = 0;
    if ( *(int *)DataGlobal_B05488[88] <= 0 )
    return 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    while ( 1 )
  {
    v6 = _strcmpi(aP0, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    if ( v6 && *(int *)(*(int *)(DataGlobal_B05488.field_4C + 4 * v2) + 784) == a2 )
    break;
    if ( ++v2 >= *(int *)DataGlobal_B05488[88] )
    return 0;
  }
    if ( v2 < 0 )
    return 0;
    else
    return *(int *)(DataGlobal_B05488.field_4C + 4 * v2);
}
}

// ==== BACKFILL 0x0068CAB0  Network_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Network_Assign(void * a1, int a2)
{
{
    int v2;
    IUnknown *v5;
    bool v6;
    v2 = 0;
    if ( *(int *)DataGlobal_B05488[88] <= 0 )
    return -1;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    while ( 1 )
  {
    v6 = _strcmpi(a1, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    if ( v6 && *(int *)(*(int *)(DataGlobal_B05488.field_4C + 4 * v2) + 784) == a2 )
    break;
    if ( ++v2 >= *(int *)DataGlobal_B05488[88] )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x0068ED80  Render_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Render_Get(ScoreScreen * aP0)
{
{
    int v1;
    int v2;
    HouseClass *v4;
    int v5;
    int v6;
    int v7;
    ScoreScreen *v9;
    int v10;
    float v11;
    int v12;
    #375 *other;
    float othera;
    v1 = 0;
    v2 = 0;
    v12 = 0;
    v10 = 0;
    if ( (int)HouseClass_Count > 0 )
  {
    do
    {
    v4 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v10];
    if ( (unsigned char)HouseClass::IsAlliedWith(aP0, (IUnknown *)v4) && (unsigned char)HouseClass::IsAlliedWith(v4, (IUnknown *)aP0) || aP0 == (ScoreScreen *)v4 )
      {
    v5 = VectorClass::GetCount(v4->ownedInfantryTypes2) + v2;
    v6 = VectorClass::GetCount(v4->__pad_5564) + v5;
    v7 = VectorClass::GetCount(&v4->__pad_5564[20]) + v6;
    v2 = VectorClass::GetCount(&v4->__pad_5564[40]) + v7;
    v1 += v4->killedBuildingsOfHouses[0] + *(int *)v4->__pad_5488;
      }
    ++v10;
    }
    while ( v10 < (int)HouseClass_Count );
    v12 = v2;
  }
    Debug::Log();
    if ( v2 + v1 <= 0 )
    v11 = 0.0;
    else
    v11 = (double)v12 / (double)(v2 + v1);
    Debug::Log();
    (*(void (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24);
    Debug::Log();
    other = (#375 *)(aP0[18].ScoreScreen_field_0x10 + aP0[11].ScoreScreen_field_0x24);
    if ( (int)other <= 0 )
    othera = 0.0;
    else
    othera = (double)(*(int (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24)
    / (double)(int)other;
    Debug::Log();
    v9 = (ScoreScreen *)Math::RoundToInt((othera + v11) * 0.5 * 100.0);
    Debug::Log();
    return (int)v9->__pad_0;
}
}

// ==== BACKFILL 0x0068F8A0  sub_68F8A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_68F8A0::sub_68F8A0()
{
{
    int v2;
    unsigned int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int result;
    int v14;
    int *v15;
    char Buffer[20];
    v2 = (*(int (__stdcall **)(char *))(*((int *)(HouseClass_Player) + 9) + 24))((char *)(HouseClass_Player) + 36);
    sprintf(Buffer, g_Str_Trace__d, v2);
    v3 = strlen(Buffer) + 1;
    v4 = __2_YAPAXI_Z(0x2Cu);
    if ( v4 )
  {
    v5 = this->M12;
    v6 = this->M4 + 214;
    v4[1] = 590 - 12 * (v3 - 1) + *(int *)this;
    v4[2] = v6;
    v4[3] = Timer::GetTicks();
    v4[5] = 0;
    v4[10] = v5;
    v4[6] = Buffer;
    v4[7] = 0;
    v4[8] = 0;
    *((char *)(v4) + 36) = 0;
    *v4 = &vt_ScorePrintClass;
  }
    else
  {
    v4 = 0;
  }
    v7 = this->M36;
    v8 = (int *)(this + 28);
    if ( this->M44 < v7 || ((unsigned char)this->M41 || !v7) && (v9 = this->M48, v9 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*v8 + 8))(this + 28, v7 + v9, 0) )
  {
    v10 = this->M44;
    v11 = this->M32;
    this->M44 = v10 + 1;
    *(int *)(v11 + 4 * v10) = v4;
  }
    v12 = *v8;
    v15 = v4;
    for ( result = (*(int (__thiscall **)(int, int **))(v12 + 16))(this + 28, &v15);
    result != -1;
    result = (*(int (__thiscall **)(int, int **))(v14 + 16))(this + 28, &v15) ) {
    Screen::TransitionLoop((int *)this, 1);
    v14 = *v8;
    v15 = v4;
  }
    return result;
}
}

// ==== BACKFILL 0x0068FB10  sub_68FB10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_68FB10::sub_68FB10(unsigned int * a2, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{
{
    wchar_t *v8;
    int *v10;
    int v11;
    int *v12;
    int v13;
    int v14;
    CampaignScore *v16;
    wchar_t Buffer[64];
    v8 = Format;
    if ( (int)Format >= (int)a6 )
    v8 = a6;
    swprintf(Buffer, BufferCount, v8, v16);
    v10 = (int *)this->M12;
    v11 = a8 - v10[2];
    (*(void (__thiscall **)(int *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2);
    v12 = (int *)this->M12;
    v13 = v12[2];
    v14 = (*(int (__thiscall **)(int *, wchar_t *))(*v12 + 8))(v12, Buffer);
    *a2 = a7;
    *((int*)(a2) + 1) = v11;
    *((int*)(a2) + 2) = v14;
    *((int*)(a2) + 3) = v13;
    return a2;
}
}
