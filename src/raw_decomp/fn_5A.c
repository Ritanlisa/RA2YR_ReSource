// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005A0090  MapClass::SetObstruction  this=MapResourceClass  sig=csp ====
MapClass *__stdcall MapClass::SetObstruction(__int16 *a0, MapClass *aP1)
{
  MapClass *result; // eax

  if ( g_MapTileArray ) /*0x5a0098*/
  {
    result = (MapClass *)(80 * (*a0 + unk_89C2DC * a0[1])); /*0x5a00b5*/
    *(_DWORD *)((char *)g_MapTileArray + (_DWORD)result + 56) = aP1; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}


// ==== 0x005A00C0  MapClass::GetTileDataField14  this=MapResourceClass  sig=csp ====
int __stdcall MapClass::GetTileDataField14(MapResourceClass *aP0)
{
  if ( g_MapTileArray ) /*0x5a00c8*/
    return *((_DWORD *)g_MapTileArray /*0x5a00ea*/
           + 20 * *(__int16 *)aP0->__tail_0
           + 20 * unk_89C2DC * *(__int16 *)&aP0->__tail_0[2]
           + 14);
  else
    return -1; /*0x5a00ca*/
}


// ==== 0x005A0160  TiberiumClass::Spread  this=MapResourceClass  sig=csp ====
char __stdcall TiberiumClass_Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // ecx
  char v11; // dl
  _WORD *v12; // eax
  _WORD *v13; // edx
  __int16 v14; // cx
  int v15; // eax
  int v16; // edx
  char *v17; // esi
  int v18; // edi
  bool v19; // bl
  int *v20; // eax
  int *v21; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // edx
  _DWORD *v28; // [esp+10h] [ebp-1Ch]
  _DWORD *v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h] BYREF
  int v31; // [esp+1Ch] [ebp-10h]
  int v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v28 = (_DWORD *)RandomMap::CellListAlloc(a1); /*0x5a0171*/
  for ( i = 0; i < a2; ++i ) /*0x5a0181*/
  {
    v8 = __2_YAPAXI_Z(0x18u); /*0x5a0189*/
    v9 = v8; /*0x5a018e*/
    if ( v8 ) /*0x5a0195*/
    {
      VectorClass::CellConstructor(v8, 0, 0); /*0x5a019b*/
      *v9 = &vt_DynamicVectorClass_Cell; /*0x5a01a0*/
      v9[5] = 10; /*0x5a01a6*/
      v9[4] = 0; /*0x5a01ad*/
      v29 = v9; /*0x5a01b0*/
    }
    else
    {
      v29 = 0; /*0x5a01b6*/
    }
    v10 = v28; /*0x5a01ba*/
    v31 = 0; /*0x5a01be*/
    v29[5] = 3 * v28[4]; /*0x5a01cc*/
    if ( (int)v28[4] > 0 ) /*0x5a01d4*/
    {
      while ( 2 ) /*0x5a01da*/
      {
        v11 = 0; /*0x5a01da*/
        v33 = 0; /*0x5a01dc*/
        while ( 1 ) /*0x5a01f3*/
        {
          v12 = (_WORD *)(v10[1] + 4 * v31); /*0x5a01f3*/
          v13 = (_WORD *)(4 * (v11 & 7) + 9041544); /*0x5a01fe*/
          v14 = *v13 + *v12; /*0x5a0205*/
          LOWORD(v13) = v12[1] + v13[1]; /*0x5a020c*/
          LOWORD(v32) = v14; /*0x5a0210*/
          HIWORD(v32) = (_WORD)v13; /*0x5a0215*/
          v30 = v32; /*0x5a021e*/
          v15 = (__int16)v13; /*0x5a0225*/
          v16 = (__int16)v13 + v14; /*0x5a0228*/
          if ( v16 > g_MapCellHeight_Value /*0x5a0285*/
            && v14 - v15 < g_MapCellHeight_Value
            && v15 - v14 < g_MapCellHeight_Value
            && v16 <= g_MapCellCount
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)g_MapTileArray + 80 * v14 + 80 * unk_89C2DC * v15; /*0x5a02a4*/
            v18 = *((_DWORD *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x5a02c6*/
            v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              v22 = v29[2]; /*0x5a02ff*/
              if ( v29[4] < v22 /*0x5a0324*/
                || (*((_BYTE *)v29 + 13) || !v22)
                && (v23 = v29[5], v23 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v29 + 8))(v29, v22 + v23, 0) )
              {
                v24 = v29[4]; /*0x5a032b*/
                v25 = v29[1]; /*0x5a032e*/
                v29[4] = v24 + 1; /*0x5a0334*/
                *(_DWORD *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((_DWORD *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
            }
            else if ( v18 != a1 ) /*0x5a02f3*/
            {
              if ( v28 ) /*0x5a03e4*/
                (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03ea*/
              if ( v29 ) /*0x5a03f2*/
                (*(void (__thiscall **)(_DWORD *, int))*v29)(v29, 1); /*0x5a03f8*/
              return 0; /*0x5a03fd*/
            }
          }
          v11 = ++v33; /*0x5a0375*/
          if ( v33 >= 8 ) /*0x5a037d*/
            break; /*0x5a037d*/
          v10 = v28; /*0x5a01e2*/
        }
        v10 = v28; /*0x5a0383*/
        v26 = v28[4]; /*0x5a038c*/
        if ( ++v31 < v26 ) /*0x5a0395*/
          continue; /*0x5a0395*/
        break;
      }
    }
    if ( v10 ) /*0x5a039f*/
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x5a03a5*/
    v28 = v29; /*0x5a03af*/
  }
  if ( v28 ) /*0x5a03ca*/
    (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03d0*/
  return 1; /*0x5a03d2*/
}


// ==== 0x005A0410  MapClass::GrowLayer  this=MapResourceClass  sig=csp ====
char __thiscall MapClass_GrowLayer(_BYTE *this, int a2, int a3, int a4)
{
  _BYTE *v4; // ebx
  int v5; // esi
  _DWORD *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  char *v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int m; // eax
  _DWORD *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  _BYTE *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (_DWORD *)RandomMap::CellListAlloc(a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a044e*/
    {
      v35 = *(_DWORD *)(i + 36); /*0x5a0453*/
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v35 + 20 * unk_89C2DC * SHIWORD(v35) + 15) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = v6[4] - 1; j >= 0; v10[283] = v4[780] ) /*0x5a0499*/
      {
        v9 = *(_DWORD *)(v6[1] + 4 * j); /*0x5a04a6*/
        v31 = v9; /*0x5a04a9*/
        if ( g_MapTileArray ) /*0x5a04ad*/
          *((_DWORD *)g_MapTileArray + 20 * (__int16)v9 + 20 * unk_89C2DC * SHIWORD(v31) + 14) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v31); /*0x5a04d8*/
        *((_DWORD *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = __2_YAPAXI_Z(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          *v12 = &vt_DynamicVectorClass_Cell; /*0x5a0520*/
          v12[5] = 10; /*0x5a0526*/
          v12[4] = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[5] = v6[4]; /*0x5a0539*/
        v14 = v6[4] - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
          v15 = g_MapCellHeight_Value; /*0x5a054a*/
          do /*0x5a0650*/
          {
            v16 = *(_DWORD *)(v6[1] + 4 * v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = HIWORD(v32) + HIWORD(MEMORY[0x89F688][v18]); /*0x5a057b*/
              LOWORD(v33) = v32 + LOWORD(MEMORY[0x89F688][v18]); /*0x5a0580*/
              HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (__int16)v33; /*0x5a0590*/
              if ( v21 > v15 && (__int16)v33 - v20 < v15 && v20 - (__int16)v33 < v15 && v21 <= g_MapCellCount ) /*0x5a05b9*/
              {
                v22 = (char *)g_MapTileArray + 80 * (__int16)v33 + 80 * unk_89C2DC * v20; /*0x5a05d4*/
                if ( *((_DWORD *)v22 + 14) == a2 ) /*0x5a05d9*/
                {
                  if ( *((_DWORD *)v22 + 15) != v30 + 1 ) /*0x5a05e7*/
                  {
                    v23 = v13[2]; /*0x5a05e9*/
                    if ( v13[4] < v23 /*0x5a060e*/
                      || (*((_BYTE *)v13 + 13) || !v23)
                      && (v24 = v13[5], v24 > 0)
                      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v13 + 8))(v13, v23 + v24, 0) )
                    {
                      v25 = v13[4]; /*0x5a0615*/
                      v26 = v13[1]; /*0x5a0618*/
                      v13[4] = v25 + 1; /*0x5a061e*/
                      *(_DWORD *)(v26 + 4 * v25) = v33; /*0x5a0625*/
                    }
                    *((_DWORD *)v22 + 15) = v30 + 1; /*0x5a0628*/
                    v15 = g_MapCellHeight_Value; /*0x5a062b*/
                  }
                  v6 = v29; /*0x5a0631*/
                }
              }
              v17 = k + 1; /*0x5a0639*/
            }
            v14 = --v35; /*0x5a064b*/
          }
          while ( v35 >= 0 ); /*0x5a0650*/
        }
        if ( v6 ) /*0x5a065a*/
          (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x5a0663*/
        v29 = v13; /*0x5a0665*/
        v6 = v13; /*0x5a0669*/
        v4 = v36; /*0x5a066b*/
      }
      ++v30; /*0x5a067a*/
    }
    while ( v30 < a3 ); /*0x5a067e*/
    v5 = a3; /*0x5a0684*/
  }
  if ( v6 ) /*0x5a0688*/
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a06ae*/
      *((_DWORD *)g_MapTileArray /*0x5a06d8*/
      + 20 * (__int16)*(_DWORD *)(m + 36)
      + 20 * unk_89C2DC * (__int16)HIWORD(*(_DWORD *)(m + 36))
      + 15) = 0;
  }
  return 1; /*0x5a06e5*/
}


// ==== 0x005A0700  RandomMap::CellListAlloc  this=MapResourceClass  sig=csp ====
_DWORD *__thiscall RandomMap_CellListAlloc(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // ecx
  _DWORD *v6; // ebp
  int v7; // edi
  __int16 v8; // dx
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  __int16 v12; // ax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  bool v21; // zf
  _DWORD *v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-4h]

  v3 = __2_YAPAXI_Z(0x18u); /*0x5a070a*/
  v4 = v3; /*0x5a070f*/
  if ( v3 ) /*0x5a0718*/
  {
    VectorClass::CellConstructor(v3, 0, 0); /*0x5a071e*/
    *v4 = &vt_DynamicVectorClass_Cell; /*0x5a0723*/
    v4[5] = 10; /*0x5a0729*/
    v4[4] = 0; /*0x5a0730*/
  }
  else
  {
    v4 = 0; /*0x5a0735*/
  }
  v23 = v4; /*0x5a073d*/
  v4[5] = this->q060 * this->q061; /*0x5a0748*/
  v5 = unk_89C2DC; /*0x5a074b*/
  if ( unk_89C2DC * unk_89C2DC <= 0 ) /*0x5a0758*/
    return v4; /*0x5a08c1*/
  v6 = g_MapTileArray; /*0x5a075f*/
  v24 = 0; /*0x5a0765*/
  v25 = unk_89C2DC * unk_89C2DC; /*0x5a0769*/
  while ( 2 )
  {
    v7 = v6[v24]; /*0x5a0775*/
    v8 = HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    v9 = v6 ? v6[20 * (__int16)v7 + 14 + 20 * v5 * SHIWORD(v7)] : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      v11 = v10 & 7; /*0x5a07c9*/
      v12 = LOWORD(MEMORY[0x89F688][v11]) + v7; /*0x5a07cc*/
      LOWORD(v11) = v8 + HIWORD(MEMORY[0x89F688][v11]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (__int16)v11; /*0x5a07e5*/
      v15 = v13 + (__int16)v11; /*0x5a07e8*/
      if ( v15 <= g_MapCellHeight_Value ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MapCellHeight_Value && v14 - v13 < g_MapCellHeight_Value && v15 <= g_MapCellCount ) /*0x5a080f*/
        break; /*0x5a080f*/
      v4 = v23; /*0x5a0849*/
      v6 = g_MapTileArray; /*0x5a084d*/
LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MapTileArray; /*0x5a0811*/
    if ( g_MapTileArray ) /*0x5a0819*/
      v16 = *((_DWORD *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    v17 = v23[2]; /*0x5a0859*/
    if ( v23[4] < v17 ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( *((_BYTE *)v23 + 13) || !v17 ) /*0x5a086c*/
    {
      v18 = v23[5]; /*0x5a086e*/
      if ( v18 > 0 ) /*0x5a0873*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v23 + 8))(v23, v17 + v18, 0) ) /*0x5a087e*/
        {
LABEL_31:
          v19 = v23[4]; /*0x5a0885*/
          v20 = v23[1]; /*0x5a0888*/
          v23[4] = v19 + 1; /*0x5a088e*/
          *(_DWORD *)(v20 + 4 * v19) = v7; /*0x5a0891*/
        }
        v6 = g_MapTileArray; /*0x5a0894*/
      }
    }
LABEL_33:
    v21 = v25 == 1; /*0x5a089a*/
    v24 += 20; /*0x5a08a6*/
    --v25; /*0x5a08aa*/
    if ( !v21 ) /*0x5a08ae*/
    {
      v5 = unk_89C2DC; /*0x5a076f*/
      continue; /*0x5a076f*/
    }
    return v4; /*0x5a08b5*/
  }
}


// ==== 0x005A08D0  RandomMap::SpreadArea  this=MapResourceClass  sig=csp ====
char __thiscall RandomMap::SpreadArea(
        _DWORD *this,
        MouseClass *aP1,
        float a3,
        MapResourceClass *aP3,
        __int16 *a4,
        char a6)
{
  int v7; // eax
  int v8; // esi
  MapResourceClass *v9; // eax
  AbstractClass *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  MapResourceClass *v15; // ebx
  int i; // eax
  MouseClass *v17; // eax
  int v18; // ecx
  MapResourceClass *v19; // edi
  MouseClass *v20; // edx
  int v21; // ecx
  int v22; // eax
  MapResourceClass v23; // edx
  MapResourceClass *v24; // ebx
  int v25; // ecx
  double v26; // st7
  double v27; // st7
  char v29; // c0
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // ecx
  long double v36; // st7
  unsigned int v37; // eax
  __int16 *v38; // ecx
  int v39; // eax
  __int16 *v40; // edi
  char *v41; // edi
  _DWORD *v42; // eax
  char v43; // al
  int v44; // eax
  _DWORD *v45; // edi
  char *v46; // eax
  MapResourceClass v47; // ecx
  _DWORD *v48; // eax
  MapResourceClass *v49; // ebx
  __int16 v50; // ax
  MapResourceClass *v51; // edi
  int v52; // ecx
  double v53; // st7
  double v54; // st7
  char v56; // c0
  int v57; // eax
  int v58; // edx
  MapResourceClass *v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // edi
  unsigned int v62; // edx
  int v63; // edi
  int v64; // ebx
  unsigned int v65; // ecx
  int v66; // eax
  double v67; // st7
  __int16 *v68; // ecx
  bool v69; // zf
  int v70; // eax
  __int16 *v71; // edi
  int v72; // eax
  __int16 *v73; // edi
  __int16 *v74; // ecx
  int v75; // eax
  int v76; // ecx
  MouseClass **v77; // eax
  int v78; // eax
  __int16 *v79; // edi
  char v81; // [esp+1Bh] [ebp-49h]
  _WORD *v82; // [esp+1Ch] [ebp-48h]
  __int16 *v83; // [esp+1Ch] [ebp-48h]
  MouseClass *v84; // [esp+20h] [ebp-44h] BYREF
  int v85; // [esp+24h] [ebp-40h]
  int v86; // [esp+28h] [ebp-3Ch]
  MapResourceClass *Block; // [esp+2Ch] [ebp-38h]
  int v88; // [esp+30h] [ebp-34h]
  MapResourceClass *v89; // [esp+34h] [ebp-30h]
  int v90; // [esp+38h] [ebp-2Ch]
  double v91; // [esp+3Ch] [ebp-28h]
  __int64 v92; // [esp+44h] [ebp-20h]
  double v93; // [esp+4Ch] [ebp-18h] BYREF
  double v94; // [esp+54h] [ebp-10h]
  __int64 v95; // [esp+5Ch] [ebp-8h]

  v7 = this->q060; /*0x5a08de*/
  v89 = (MapResourceClass *)this; /*0x5a08e4*/
  v8 = 2 * this->q061 * v7; /*0x5a08f4*/
  if ( v8 <= 100 ) /*0x5a08f6*/
    v8 = 100; /*0x5a08f8*/
  v9 = (MapResourceClass *)__2_YAPAXI_Z(8 * v8); /*0x5a0905*/
  if ( v9 ) /*0x5a0911*/
  {
    Block = v9; /*0x5a0914*/
    LODWORD(v92) = v8 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v10 = (AbstractClass *)__2_YAPAXI_Z(0x14u); /*0x5a0929*/
  if ( v10 ) /*0x5a0930*/
  {
    v11 = 2 * this->q061 * this->q060; /*0x5a093f*/
    if ( v11 <= 100 ) /*0x5a0944*/
      v11 = 100; /*0x5a0946*/
    *(_DWORD *)&v10->__pad_0[12] = 0; /*0x5a0952*/
    v10->uniqueId = -1; /*0x5a0956*/
    *(_DWORD *)v10->__pad_0 = 0; /*0x5a095d*/
    *(_DWORD *)&v10->__pad_0[4] = v11; /*0x5a095f*/
    v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x5a0962*/
    v13 = *(_DWORD *)&v10->__pad_0[4]; /*0x5a0967*/
    *(_DWORD *)&v10->__pad_0[8] = v12; /*0x5a096a*/
    v14 = 0; /*0x5a0970*/
    if ( v13 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v14; /*0x5a0979*/
        *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v14 - 4) = 0; /*0x5a097a*/
      }
      while ( v14 <= *(_DWORD *)&v10->__pad_0[4] ); /*0x5a0983*/
    }
  }
  else
  {
    v10 = 0; /*0x5a0987*/
  }
  v15 = aP3; /*0x5a0989*/
  v85 = 0; /*0x5a098c*/
  v81 = 1; /*0x5a0990*/
  v94 = 0.0; /*0x5a0995*/
  if ( *aP3 ) /*0x5a099d*/
  {
    v94 = 0.0; /*0x5a09b0*/
  }
  else if ( *(_DWORD *)&aP3[2] != 512 ) /*0x5a09c5*/
  {
    v94 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( aP3[1] ) /*0x5a09d7*/
  {
    v94 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( *(_DWORD *)&aP3[3] != 512 ) /*0x5a09f1*/
  {
    v94 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a0a19*/
  {
    v90 = *(_DWORD *)(i + 36); /*0x5a0a1e*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v90 + 20 * unk_89C2DC * SHIWORD(v90) + 15) = 0; /*0x5a0a43*/
  }
  v17 = (MouseClass *)RandomMap::CellListAlloc(v89, (int)aP1); /*0x5a0a58*/
  v18 = (int)v17->field_10; /*0x5a0a5d*/
  v84 = v17; /*0x5a0a60*/
  v82 = (_WORD *)v18; /*0x5a0a66*/
  v86 = 0; /*0x5a0a6a*/
  if ( v18 > 0 ) /*0x5a0a6e*/
  {
    v19 = Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v20 = (MouseClass *)*v15; /*0x5a0a83*/
      v88 = *((_DWORD *)v84->field_4 + v86); /*0x5a0a88*/
      v21 = SHIWORD(v88); /*0x5a0a8c*/
      v22 = (__int16)v88; /*0x5a0a91*/
      if ( (__int16)v88 >= (int)v20 ) /*0x5a0a96*/
      {
        if ( (__int16)v88 >= (int)v20 + *(_DWORD *)&v15[2] ) /*0x5a0aa3*/
          goto LABEL_48; /*0x5a0aa3*/
        v15 = aP3; /*0x5a0aa9*/
        v23 = aP3[1]; /*0x5a0aac*/
        if ( SHIWORD(v88) >= *(int *)&v23 ) /*0x5a0ab1*/
          break; /*0x5a0ab1*/
      }
LABEL_49:
      if ( ++v86 >= (int)v82 ) /*0x5a0c28*/
      {
        v17 = v84; /*0x5a0c2e*/
        goto LABEL_51; /*0x5a0c2e*/
      }
    }
    if ( SHIWORD(v88) < *(_DWORD *)&v23 + *(_DWORD *)&aP3[3] ) /*0x5a0abe*/
    {
      *v19 = (MapResourceClass)v88; /*0x5a0ac8*/
      v24 = (MapResourceClass *)(v22 - *a4); /*0x5a0ad2*/
      v25 = v21 - a4[1]; /*0x5a0ad8*/
      v89 = v24; /*0x5a0ada*/
      v90 = v25; /*0x5a0ae0*/
      if ( v24 ) /*0x5a0ae4*/
      {
        v26 = Math::ArcTan(-((double)v90 / (double)(int)v89)); /*0x5a0afa*/
        if ( (int)v24 < 0 ) /*0x5a0b04*/
          v26 = v26 + 3.141592653589793; /*0x5a0b06*/
      }
      else
      {
        v26 = 1.570796326794897; /*0x5a0be9*/
      }
      v27 = fabs(v26 - v94); /*0x5a0b10*/
      v93 = v27; /*0x5a0b18*/
      if ( !v29 ) /*0x5a0b21*/
      {
        do /*0x5a0b34*/
          v27 = v27 - 6.283185307179586; /*0x5a0b23*/
        while ( v27 >= 6.283185307179586 ); /*0x5a0b34*/
        v93 = v27; /*0x5a0b36*/
      }
      if ( v27 > 3.141592653589793 ) /*0x5a0b45*/
        v93 = 6.283185307179586 - v27; /*0x5a0b4f*/
      v92 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0b5f*/
      v30 = (unsigned int)v19; /*0x5a0b73*/
      v19 += 2; /*0x5a0b76*/
      ++v85; /*0x5a0b91*/
      v90 = v30; /*0x5a0b95*/
      v89 = v19; /*0x5a0b99*/
      *(float *)&v19[-1] = v93 * 1.5 + (double)v92 * 2.328306437080797e-10 * 2.0; /*0x5a0b9f*/
      v31 = *(_DWORD *)v10->__pad_0 + 1; /*0x5a0ba7*/
      LODWORD(v91) = *(_DWORD *)(v30 + 4); /*0x5a0ba8*/
      v32 = v31 >> 1; /*0x5a0bb1*/
      if ( v31 < *(_DWORD *)&v10->__pad_0[4] ) /*0x5a0bb5*/
      {
        if ( v31 <= 1 ) /*0x5a0bba*/
        {
          v15 = aP3; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            v33 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0bbc*/
            v34 = *(_DWORD *)(v33 + 4 * v32); /*0x5a0bbf*/
            if ( *(float *)(v34 + 4) <= (double)*(float *)&v91 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(_DWORD *)(v33 + 4 * v31) = v34; /*0x5a0bd0*/
            v31 = v32; /*0x5a0bd3*/
            v32 >>= 1; /*0x5a0bd5*/
          }
          while ( v31 > 1 ); /*0x5a0bda*/
          v15 = aP3; /*0x5a0bdc*/
          v30 = v90; /*0x5a0bdf*/
          v19 = v89; /*0x5a0be3*/
        }
        *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v31) = v30; /*0x5a0bfa*/
        v35 = *(_DWORD *)&v10->__pad_0[12]; /*0x5a0bff*/
        ++*(_DWORD *)v10->__pad_0; /*0x5a0c05*/
        if ( v30 > v35 ) /*0x5a0c07*/
          *(_DWORD *)&v10->__pad_0[12] = v30; /*0x5a0c09*/
        if ( v30 < v10->uniqueId ) /*0x5a0c0f*/
          v10->uniqueId = v30; /*0x5a0c11*/
        goto LABEL_49; /*0x5a0c14*/
      }
    }
LABEL_48:
    v15 = aP3; /*0x5a0c16*/
    goto LABEL_49; /*0x5a0c16*/
  }
LABEL_51:
  if ( v17 ) /*0x5a0c36*/
    (*(void (__thiscall **)(MouseClass *, int))v17->field_0)(v17, 1); /*0x5a0c3e*/
  v36 = __FYL2X__((double)(int)v82, 0.6931471805599453094); /*0x5a0c46*/
  if ( v36 < 1.0 ) /*0x5a0c55*/
    v36 = 1.0; /*0x5a0c59*/
  v86 = Math::RoundToInt(1.0 / (1.0 / v36 * a3) * 0.5); /*0x5a0c79*/
  *(double *)&v95 = (double)(unsigned int)(v86 / 2 + 1); /*0x5a0c95*/
  do /*0x5a0cc0*/
  {
    *(_QWORD *)&v93 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0ca3*/
    v37 = Math::RoundToInt((double)*(__int64 *)&v93 * *(double *)&v95 * 2.328306437080797e-10); /*0x5a0cb9*/
  }
  while ( v37 > v86 / 2 ); /*0x5a0cc0*/
  v86 += v37; /*0x5a0cc8*/
  if ( *(_DWORD *)v10->__pad_0 ) /*0x5a0ccc*/
  {
    v39 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0cda*/
    v40 = *(__int16 **)(v39 + 4); /*0x5a0ce2*/
    *(_DWORD *)(v39 + 4) = *(_DWORD *)(v39 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a0ce5*/
    *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a0ced*/
    Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a0cf7*/
    v83 = v40; /*0x5a0cfc*/
    v38 = v40; /*0x5a0d00*/
  }
  else
  {
    v38 = 0; /*0x5a0cd2*/
    v83 = 0; /*0x5a0cd4*/
  }
  v88 = 0; /*0x5a0d06*/
  if ( v86 <= 0 ) /*0x5a0d0c*/
    goto LABEL_113; /*0x5a0d0c*/
  while ( v81 && v38 ) /*0x5a0d26*/
  {
    v41 = (char *)g_MapTileArray + 80 * *v38 + 80 * unk_89C2DC * v38[1]; /*0x5a0d48*/
    if ( !*((_DWORD *)v41 + 14) ) /*0x5a0d4a*/
    {
      v42 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v38); /*0x5a0d57*/
      if ( Cell::IsEmpty(v42) ) /*0x5a0d5e*/
      {
        v41[75] = 1; /*0x5a0d6a*/
        *((_DWORD *)v41 + 14) = aP1; /*0x5a0d6e*/
      }
      v38 = v83; /*0x5a0d71*/
    }
    v43 = 0; /*0x5a0d7d*/
    v90 = 0; /*0x5a0d82*/
    v89 = &Block[2 * v85]; /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      LODWORD(v91) = CellStruct::Add(v38, (IUnknown *)&v93, (IUnknown *)(4 * (v43 & 7) + 9041544))->field_0; /*0x5a0dad*/
      v84 = (MouseClass *)LODWORD(v91); /*0x5a0db1*/
      v44 = SWORD1(v91) + SLOWORD(v91); /*0x5a0dbd*/
      if ( v44 <= g_MapCellHeight_Value /*0x5a0de6*/
        || SLOWORD(v91) - SWORD1(v91) >= g_MapCellHeight_Value
        || SWORD1(v91) - SLOWORD(v91) >= g_MapCellHeight_Value
        || v44 > g_MapCellCount )
      {
        goto LABEL_108; /*0x5a0de6*/
      }
      v45 = g_MapTileArray; /*0x5a0dec*/
      if ( !g_MapTileArray ) /*0x5a0df4*/
        goto LABEL_105; /*0x5a0df4*/
      v46 = (char *)g_MapTileArray + 80 * SLOWORD(v91) + 80 * unk_89C2DC * SWORD1(v91); /*0x5a0e0b*/
      if ( !*((_DWORD *)v46 + 14) && *((MouseClass **)v46 + 15) != aP1 && SLOWORD(v91) >= *(int *)aP3 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v91) < *(_DWORD *)aP3 + *(_DWORD *)&aP3[2] ) /*0x5a0e3a*/
        {
          v47 = aP3[1]; /*0x5a0e40*/
          if ( SWORD1(v91) >= *(int *)&v47 && SWORD1(v91) < *(_DWORD *)&v47 + *(_DWORD *)&aP3[3] ) /*0x5a0e52*/
          {
            v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v84); /*0x5a0e62*/
            if ( Cell::IsEmpty(v48) ) /*0x5a0e69*/
            {
              v49 = v89; /*0x5a0e76*/
              v50 = (__int16)v84; /*0x5a0e7a*/
              *v89 = (MapResourceClass)v84; /*0x5a0e81*/
              v52 = SHIWORD(v84) - a4[1]; /*0x5a0e94*/
              v89 = (MapResourceClass *)(v50 - *a4); /*0x5a0e98*/
              v51 = v89; /*0x5a0e92*/
              LODWORD(v91) = v52; /*0x5a0e9c*/
              if ( v89 ) /*0x5a0ea0*/
              {
                v53 = Math::ArcTan(-((double)SLODWORD(v91) / (double)(int)v89)); /*0x5a0eb6*/
                if ( (int)v51 < 0 ) /*0x5a0ec0*/
                  v53 = v53 + 3.141592653589793; /*0x5a0ec2*/
              }
              else
              {
                v53 = 1.570796326794897; /*0x5a0fe5*/
              }
              v54 = fabs(v53 - v94); /*0x5a0ecc*/
              v91 = v54; /*0x5a0ed4*/
              if ( !v56 ) /*0x5a0edd*/
              {
                do /*0x5a0ef0*/
                  v54 = v54 - 6.283185307179586; /*0x5a0edf*/
                while ( v54 >= 6.283185307179586 ); /*0x5a0ef0*/
                v91 = v54; /*0x5a0ef2*/
              }
              if ( v54 > 3.141592653589793 ) /*0x5a0f01*/
                v91 = 6.283185307179586 - v54; /*0x5a0f0b*/
              v95 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0f1b*/
              v57 = SHIWORD(v84); /*0x5a0f2b*/
              v58 = (__int16)v84; /*0x5a0f48*/
              *(float *)&v49[1] = v91 * 1.5 + (double)v95 * 2.328306437080797e-10 * 2.0; /*0x5a0f4f*/
              *((_DWORD *)g_MapTileArray + 20 * v58 + 20 * unk_89C2DC * v57 + 15) = aP1; /*0x5a0f6a*/
              v59 = v49; /*0x5a0f73*/
              ++v85; /*0x5a0f75*/
              v60 = *(_DWORD *)v10->__pad_0 + 1; /*0x5a0f81*/
              LODWORD(v92) = v49[1]; /*0x5a0f82*/
              v61 = *(_DWORD *)&v10->__pad_0[4]; /*0x5a0f86*/
              v62 = v60 >> 1; /*0x5a0f8b*/
              LODWORD(v91) = v49; /*0x5a0f8f*/
              v89 = v49 + 2; /*0x5a0f93*/
              if ( v60 < v61 ) /*0x5a0f97*/
              {
                if ( v60 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v63 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0fa2*/
                    v64 = *(_DWORD *)(v63 + 4 * v62); /*0x5a0fa5*/
                    if ( *(float *)(v64 + 4) <= (double)*(float *)&v92 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(_DWORD *)(v63 + 4 * v60) = v64; /*0x5a0fb6*/
                    v60 = v62; /*0x5a0fb9*/
                    v62 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v60 > 1 ); /*0x5a0fc0*/
                  v59 = (MapResourceClass *)LODWORD(v91); /*0x5a0fc2*/
                }
                *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v60) = v59; /*0x5a0fc9*/
                v65 = *(_DWORD *)&v10->__pad_0[12]; /*0x5a0fce*/
                ++*(_DWORD *)v10->__pad_0; /*0x5a0fd4*/
                if ( (unsigned int)v59 > v65 ) /*0x5a0fd6*/
                  *(_DWORD *)&v10->__pad_0[12] = v59; /*0x5a0fd8*/
                if ( (unsigned int)v59 < v10->uniqueId ) /*0x5a0fde*/
                  v10->uniqueId = (int)v59; /*0x5a0fe0*/
              }
              goto LABEL_108; /*0x5a0fe3*/
            }
          }
        }
        v45 = g_MapTileArray; /*0x5a0ff0*/
      }
      if ( v45 ) /*0x5a0ff8*/
      {
        v66 = v45[20 * (__int16)v84 + 14 + 20 * unk_89C2DC * SHIWORD(v84)]; /*0x5a1013*/
        if ( !v66 ) /*0x5a1019*/
          goto LABEL_108; /*0x5a1019*/
      }
      else
      {
LABEL_105:
        v66 = -1; /*0x5a101d*/
      }
      if ( (MouseClass *)v66 != aP1 ) /*0x5a1023*/
        v81 = 0; /*0x5a1025*/
LABEL_108:
      v43 = v90 + 2; /*0x5a102e*/
      v90 += 2; /*0x5a1034*/
      if ( v90 >= 8 ) /*0x5a1038*/
        break; /*0x5a1038*/
      v38 = v83; /*0x5a0d8c*/
    }
    ++v88; /*0x5a1043*/
    v67 = Random::Gaussian((double *)&g_TileSystemInit); /*0x5a104c*/
    v68 = *(__int16 **)v10->__pad_0; /*0x5a1057*/
    v69 = *(_DWORD *)v10->__pad_0 == 0; /*0x5a1059*/
    v94 = v67 * 0.7853981633974483 + v94; /*0x5a105f*/
    if ( v69 ) /*0x5a1063*/
    {
      v83 = v68; /*0x5a1065*/
    }
    else
    {
      v70 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a106b*/
      v71 = *(__int16 **)(v70 + 4); /*0x5a1073*/
      *(_DWORD *)(v70 + 4) = *(_DWORD *)(v70 + 4 * (_DWORD)v68); /*0x5a1076*/
      *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a107e*/
      Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a108c*/
      v83 = v71; /*0x5a1091*/
    }
    if ( v88 < v86 ) /*0x5a109f*/
    {
      v38 = v83; /*0x5a0d14*/
      continue; /*0x5a0d14*/
    }
    break;
  }
LABEL_113:
  if ( a6 ) /*0x5a10aa*/
  {
    if ( *(_DWORD *)v10->__pad_0 ) /*0x5a10b0*/
    {
      v72 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a10ba*/
      v73 = *(__int16 **)(v72 + 4); /*0x5a10c2*/
      *(_DWORD *)(v72 + 4) = *(_DWORD *)(v72 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a10c5*/
      *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a10cd*/
      Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a10db*/
      v74 = v73; /*0x5a10e2*/
      if ( v73 ) /*0x5a10e4*/
      {
        while ( v81 ) /*0x5a10ef*/
        {
          if ( g_MapTileArray ) /*0x5a10f9*/
          {
            v75 = 80 * (*v74 + unk_89C2DC * v74[1]); /*0x5a110e*/
            v76 = *(_DWORD *)((char *)g_MapTileArray + v75 + 56); /*0x5a1111*/
            v77 = (MouseClass **)((char *)g_MapTileArray + v75 + 56); /*0x5a1115*/
            if ( !v76 ) /*0x5a111b*/
            {
              *v77 = aP1; /*0x5a111d*/
              goto LABEL_123; /*0x5a111f*/
            }
          }
          else
          {
            v76 = -1; /*0x5a1121*/
          }
          if ( (MouseClass *)v76 != aP1 ) /*0x5a1126*/
            v81 = 0; /*0x5a1128*/
LABEL_123:
          if ( !*(_DWORD *)v10->__pad_0 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v78 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a1133*/
          v79 = *(__int16 **)(v78 + 4); /*0x5a113b*/
          *(_DWORD *)(v78 + 4) = *(_DWORD *)(v78 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a113e*/
          *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a1148*/
          Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a1154*/
          v74 = v79; /*0x5a115b*/
          if ( !v79 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  __3_YAXPAX_Z(Block); /*0x5a115f*/
  if ( v10 ) /*0x5a116e*/
    Scalar::Dtor((void **)v10, 1); /*0x5a1174*/
  return v81; /*0x5a117d*/
}


// ==== 0x005A1190  sub_5A1190  this=-  sig=csp ====
double __stdcall sub_5A1190(__int16 *a1, __int16 *a2, double a3)
{
  int v3; // esi
  double v4; // st7
  double v5; // st7
  char v7; // c0
  double v9; // [esp+20h] [ebp+Ch]

  v3 = *a2 - *a1; /*0x5a11aa*/
  if ( v3 ) /*0x5a11b8*/
  {
    v4 = Math::ArcTan(-((double)(a2[1] - a1[1]) / (double)v3)); /*0x5a11ce*/
    if ( v3 < 0 ) /*0x5a11d8*/
      v4 = v4 + 3.141592653589793; /*0x5a11da*/
  }
  else
  {
    v4 = 1.570796326794897; /*0x5a1262*/
  }
  v5 = fabs(v4 - a3); /*0x5a11e5*/
  v9 = v5; /*0x5a11ed*/
  if ( !v7 ) /*0x5a11f6*/
  {
    do /*0x5a1209*/
      v5 = v5 - 6.283185307179586; /*0x5a11f8*/
    while ( v5 >= 6.283185307179586 ); /*0x5a1209*/
    v9 = v5; /*0x5a120b*/
  }
  if ( v5 > 3.141592653589793 ) /*0x5a121a*/
    v9 = 6.283185307179586 - v5; /*0x5a1224*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.0 + 1.5 * v9; /*0x5a125c*/
}


// ==== 0x005A1350  SelectTerrainTileVariant  this=-  sig=csp ====
int __stdcall Terrain_SelectTileVariant(int a1)
{
  int v1; // eax
  unsigned int v2; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v20; // [esp+4h] [ebp-8h]
  __int64 v21; // [esp+4h] [ebp-8h]
  __int64 v22; // [esp+4h] [ebp-8h]
  __int64 v23; // [esp+4h] [ebp-8h]
  __int64 v24; // [esp+4h] [ebp-8h]
  __int64 v25; // [esp+4h] [ebp-8h]
  __int64 v26; // [esp+4h] [ebp-8h]
  __int64 v27; // [esp+4h] [ebp-8h]
  __int64 v28; // [esp+4h] [ebp-8h]
  __int64 v29; // [esp+4h] [ebp-8h]
  __int64 v30; // [esp+4h] [ebp-8h]
  __int64 v31; // [esp+4h] [ebp-8h]
  __int64 v32; // [esp+4h] [ebp-8h]
  __int64 v33; // [esp+4h] [ebp-8h]
  __int64 v34; // [esp+4h] [ebp-8h]

  v1 = a1 - unk_AA1020; /*0x5a135e*/
  switch ( a1 - unk_AA1020 ) /*0x5a1374*/
  {
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
        v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a137d*/
        v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
      }
      while ( v2 > 2 ); /*0x5a13a7*/
      return unk_AA1020 + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
        v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13bd*/
        v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
      }
      while ( v4 > 1 ); /*0x5a13e1*/
      return unk_AA1020 + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
        v22 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13f8*/
        v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
      }
      while ( v5 > 1 ); /*0x5a141c*/
      return unk_AA1020 + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
        v23 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1432*/
        v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
      }
      while ( v6 > 2 ); /*0x5a145c*/
      return unk_AA1020 + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
        v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1472*/
        v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
      }
      while ( v7 > 1 ); /*0x5a1496*/
      return unk_AA1020 + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
        v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14ad*/
        v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
      }
      while ( v8 > 1 ); /*0x5a14d1*/
      return unk_AA1020 + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
        v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14e7*/
        v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
      }
      while ( v9 > 2 ); /*0x5a1511*/
      return unk_AA1020 + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
        v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1527*/
        v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
      }
      while ( v10 > 1 ); /*0x5a154b*/
      return unk_AA1020 + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
        v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1562*/
        v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
      }
      while ( v11 > 1 ); /*0x5a1586*/
      return unk_AA1020 + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
        v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a159c*/
        v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
      }
      while ( v12 > 2 ); /*0x5a15c6*/
      return unk_AA1020 + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
        v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a15dc*/
        v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
      }
      while ( v13 > 1 ); /*0x5a1600*/
      return unk_AA1020 + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
        v31 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1617*/
        v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
      }
      while ( v14 > 1 ); /*0x5a163b*/
      return unk_AA1020 + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
        v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1651*/
        v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
      }
      while ( v15 > 2 ); /*0x5a167b*/
      return unk_AA1020 + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
        v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1691*/
        v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
      }
      while ( v16 > 1 ); /*0x5a16b5*/
      return unk_AA1020 + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
        v34 = (unsigned int)Random::State(&g_Randomizer); /*0x5a16cc*/
        v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
      }
      while ( v17 > 1 ); /*0x5a16f0*/
      return unk_AA1020 + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return unk_AA1020 + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return unk_AA1020 + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      v18 = 2; /*0x5a172c*/
      v19 = 1; /*0x5a1731*/
      goto LABEL_37; /*0x5a1736*/
    case 35: /*0x5a1374*/
      return unk_AA1020 + 2 * Range_RandomInt(0, 1u) + 34; /*0x5a1754*/
    case 36: /*0x5a1374*/
      v18 = 1; /*0x5a1757*/
      v19 = 0; /*0x5a175c*/
LABEL_37:
      v1 = Range_RandomInt(v19, v18) + 34; /*0x5a175e*/
      return unk_AA1020 + v1; /*0x5a1763*/
    default:
      return unk_AA1020 + v1;
  }
}


// ==== 0x005A17F0  MapClass::FindPassableNeighbor  this=RandomMap  sig=ida-proto ====
int sub_5A17F0()
{
  int result; // eax
  int i; // edi
  int v2; // eax
  _WORD *NeighbourContent; // esi
  _WORD *v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  __int16 v8; // dx
  __int16 v9; // si
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // edi
  __int16 v14; // dx
  __int16 v15; // si
  int v16; // ecx
  int v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+14h] [ebp-Ch] BYREF
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(_DWORD *)(i + 56); /*0x5a1819*/
    if ( v2 >= unk_AA1020 && v2 < unk_AA1020 + 40 ) /*0x5a182f*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x5a1842*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x5a184c*/
      if ( *(_DWORD *)(i + 56) == *((_DWORD *)NeighbourContent + 14) /*0x5a1867*/
        && *(_BYTE *)(i + 282) > *((_BYTE *)NeighbourContent + 282) )
      {
        v5 = SelectTerrainTileVariant(*(_DWORD *)(i + 56)); /*0x5a1872*/
        v6 = *(_DWORD *)(i + 56); /*0x5a1877*/
        v20 = v5; /*0x5a187a*/
        if ( v5 != v6 ) /*0x5a1880*/
        {
          v7 = *(_DWORD *)(*((_DWORD *)MEMORY[0xA8ED2C] + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((unsigned __int8 *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((unsigned __int8 *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( g_MapTileArray ) /*0x5a18d6*/
            v10 = *((_DWORD *)g_MapTileArray + 20 * v8 + 20 * unk_89C2DC * v9 + 14); /*0x5a18f2*/
          else
            v10 = -1; /*0x5a18d8*/
          PlaceMapSeedClassBuildings(v20, &v19, v10, -1); /*0x5a1901*/
        }
      }
      if ( *(_DWORD *)(i + 56) == *((_DWORD *)v4 + 14) && *(_BYTE *)(i + 282) > *((_BYTE *)v4 + 282) ) /*0x5a1922*/
      {
        v11 = SelectTerrainTileVariant(*(_DWORD *)(i + 56)); /*0x5a192d*/
        v12 = *(_DWORD *)(i + 56); /*0x5a1932*/
        if ( v11 != v12 ) /*0x5a1939*/
        {
          v13 = *(_DWORD *)(*((_DWORD *)MEMORY[0xA8ED2C] + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((unsigned __int8 *)v4 + 282) % v13; /*0x5a1969*/
          LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((unsigned __int8 *)v4 + 282) / v13; /*0x5a1977*/
          HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( g_MapTileArray ) /*0x5a1989*/
            v16 = *((_DWORD *)g_MapTileArray + 20 * v14 + 20 * unk_89C2DC * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}


// ==== 0x005A19E0  ProcessRandomMapCellAdjacency  this=RandomMap  sig=ida-proto ====
int ProcessRandomMapCellAdjacency()
{
  int result; // eax
  int i; // esi
  void *v2; // ebx
  __int16 *v3; // ebp
  __int16 *v4; // edi
  int AdjacencyFlags; // eax
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  void *NeighbourContent; // [esp+4h] [ebp-18h]
  void *v14; // [esp+8h] [ebp-14h]
  __int64 v15; // [esp+Ch] [ebp-10h]
  __int64 v16; // [esp+14h] [ebp-8h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a19e9*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a19f3*/
  for ( i = result; result; i = result )
  {
    NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 5u); /*0x5a1a12*/
    v14 = Cell::GetNeighbourContent((_DWORD *)i, 1u); /*0x5a1a1f*/
    v2 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x5a1a2c*/
    v3 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x5a1a37*/
    v4 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 6u); /*0x5a1a44*/
    AdjacencyFlags = Cell::GetAdjacencyFlags(i); /*0x5a1a46*/
    if ( AdjacencyFlags == 131 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 131 || !Cell::IsEmpty(v3) ) /*0x5a1a6e*/
        goto LABEL_32; /*0x5a1a6e*/
      do /*0x5a1aa3*/
      {
        v15 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1a85*/
        v6 = Math::RoundToInt((double)v15 * 4.656612874161595e-10); /*0x5a1a9b*/
      }
      while ( v6 > 1 ); /*0x5a1aa3*/
      if ( v6 ) /*0x5a1aa7*/
        goto LABEL_32; /*0x5a1aa7*/
      *((_BYTE *)v3 + 283) -= 4; /*0x5a1ab6*/
      v7 = g_MapTileArray; /*0x5a1abc*/
      v8 = g_MapTileArray
         ? *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !g_MapTileArray ) /*0x5a1aea*/
        goto LABEL_32; /*0x5a1aea*/
      v9 = v3[18]; /*0x5a1af4*/
      v10 = unk_89C2DC * v3[19]; /*0x5a1af8*/
    }
    else if ( AdjacencyFlags == 56 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !Cell::IsEmpty(v4) ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        v16 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1b36*/
        v11 = Math::RoundToInt((double)v16 * 4.656612874161595e-10); /*0x5a1b4c*/
      }
      while ( v11 > 1 ); /*0x5a1b54*/
      if ( v11 ) /*0x5a1b58*/
        goto LABEL_32; /*0x5a1b58*/
      *((_BYTE *)v4 + 283) -= 4; /*0x5a1b67*/
      v7 = g_MapTileArray; /*0x5a1b6d*/
      v8 = g_MapTileArray
         ? *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !g_MapTileArray ) /*0x5a1b9b*/
        goto LABEL_32; /*0x5a1b9b*/
      v9 = v4[18]; /*0x5a1ba5*/
      v10 = unk_89C2DC * v4[19]; /*0x5a1ba9*/
    }
    else
    {
      if ( AdjacencyFlags != 224 /*0x5a1bea*/
        || Cell::GetAdjacencyFlags((int)NeighbourContent) != 224
        || Cell::GetAdjacencyFlags((int)v14) != 224
        || !Cell::IsEmpty((_DWORD *)i) )
      {
        goto LABEL_32; /*0x5a1bea*/
      }
      *(_BYTE *)(i + 283) += 4; /*0x5a1bfc*/
      v7 = g_MapTileArray; /*0x5a1c02*/
      v8 = g_MapTileArray ? *((_DWORD *)g_MapTileArray + 20 * v4[18] + 20 * unk_89C2DC * v4[19] + 14) : -1;
      if ( !g_MapTileArray ) /*0x5a1c30*/
        goto LABEL_32; /*0x5a1c30*/
      v12 = *(__int16 *)(i + 38); /*0x5a1c32*/
      v9 = *(__int16 *)(i + 36); /*0x5a1c36*/
      v10 = unk_89C2DC * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
LABEL_32:
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a1c49*/
  }
  return result; /*0x5a1c60*/
}


// ==== 0x005A1C70  ObjectClass::method_5A1C70  this=ObjectClass  sig=csp ====
int __thiscall sub_5A1C70(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  int *v7; // edi
  int j; // edi
  int v9; // esi
  int v10; // eax
  bool v11; // al
  int result; // eax
  int v13; // esi
  int v14; // edi
  void *v15; // eax
  int v16; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+Ch] [ebp-4h]

  v17 = this; /*0x5a1c7c*/
  if ( g_MapTileArray ) /*0x5a1c80*/
  {
    v1 = unk_89C2DC * unk_89C2DC; /*0x5a1c88*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1c8d*/
    {
      v2 = 0; /*0x5a1c8f*/
      do /*0x5a1cac*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v2 + 56) = -1; /*0x5a1c9a*/
        *(_DWORD *)((char *)g_MapTileArray + v2 + 60) = -1; /*0x5a1ca4*/
        v2 += 80; /*0x5a1ca8*/
        --v1; /*0x5a1cab*/
      }
      while ( v1 ); /*0x5a1cac*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x5a1cb8*/
  {
    v4 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5a1ce5*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1cef*/
  {
    v5 = 0; /*0x5a1cf1*/
    v6 = unk_89C2DC * unk_89C2DC; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      v16 = *(_DWORD *)((char *)g_MapTileArray + v5); /*0x5a1d08*/
      v7 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a1d11*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v5 + 56) == -1 /*0x5a1d3b*/
        && (*(_WORD *)((char *)g_MapTileArray + v5) || *(_WORD *)((char *)g_MapTileArray + v5 + 2))
        && (Cell::IsGroundTypeRange(v7) || Cell::IsShore(v7)) )
      {
        RandomMap::GenerateTerrain((int)v7); /*0x5a1d46*/
      }
      v5 += 80; /*0x5a1d4b*/
      --v6; /*0x5a1d4e*/
    }
    while ( v6 ); /*0x5a1d4f*/
  }
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x5a1d5a*/
  {
    v9 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x5a1d67*/
    if ( *(_BYTE *)(v9 + 20) ) /*0x5a1d6a*/
    {
      v10 = v17[15]; /*0x5a1d75*/
      v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *((_DWORD **)g_RandomMap_TerrainState + j),
        (*(_DWORD *)(v9 + 12) > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain((_DWORD *)v9); /*0x5a1daa*/
    }
  }
  result = unk_89C2DC * unk_89C2DC; /*0x5a1dbf*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1dc4*/
  {
    v13 = 0; /*0x5a1dc6*/
    v14 = unk_89C2DC * unk_89C2DC; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = (int)g_MapTileArray + v13; /*0x5a1dd0*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v13 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x5a1de2*/
      {
        v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)((char *)g_MapTileArray + v13)); /*0x5a1def*/
        result = RandomMap::GenerateTerrain((int)v15); /*0x5a1df6*/
        if ( result ) /*0x5a1dfd*/
          *(_BYTE *)(result + 26) = 0; /*0x5a1dff*/
      }
      v13 += 80; /*0x5a1e03*/
      --v14; /*0x5a1e06*/
    }
    while ( v14 ); /*0x5a1e07*/
  }
  return result; /*0x5a1e09*/
}


// ==== 0x005A1E50  Map_Check  this=-  sig=csp ====
char __fastcall sub_5A1E50(__int16 *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  __int16 v7; // si
  __int16 v8; // bx
  __int16 v9; // si
  int v10; // edi
  int v11; // eax
  int v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-18h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  __int16 v19; // [esp+28h] [ebp-8h]
  __int16 v20; // [esp+2Ah] [ebp-6h]

  v19 = *a1; /*0x5a1e5e*/
  v20 = a1[2]; /*0x5a1e63*/
  v4 = *((_DWORD *)a1 + 3); /*0x5a1e68*/
  v5 = 0; /*0x5a1e6c*/
  v13 = 0; /*0x5a1e73*/
  v15 = 0; /*0x5a1e77*/
  v18 = v4; /*0x5a1e7b*/
  if ( v4 <= 0 ) /*0x5a1e7f*/
    return 0; /*0x5a1f41*/
  v6 = *((_DWORD *)a1 + 2); /*0x5a1e85*/
  v17 = v6; /*0x5a1e88*/
  while ( 1 ) /*0x5a1e8c*/
  {
    v7 = 0; /*0x5a1e8c*/
    v14 = 0; /*0x5a1e90*/
    if ( v6 > 0 ) /*0x5a1e94*/
      break; /*0x5a1e94*/
LABEL_16:
    v15 = ++v5; /*0x5a1f37*/
    if ( v5 >= v4 ) /*0x5a1f3b*/
      return 0; /*0x5a1f3b*/
  }
  v8 = v20 + v5; /*0x5a1e9e*/
  while ( 1 )
  {
    v9 = v19 + v7; /*0x5a1ea5*/
    v10 = v9 + v8; /*0x5a1eb3*/
    if ( v10 > g_MapCellHeight_Value
      && v9 - v8 < g_MapCellHeight_Value
      && v8 - v9 < g_MapCellHeight_Value
      && v10 <= g_MapCellCount )
    {
      v11 = g_MapTileArray ? *((_DWORD *)g_MapTileArray + 20 * v9 + 20 * unk_89C2DC * v8 + 14) : -1;
      if ( v11 == a2 && ++v13 >= a4 ) /*0x5a1f15*/
        return 1; /*0x5a1f41*/
    }
    v6 = v17; /*0x5a1f1b*/
    v7 = ++v14; /*0x5a1f1f*/
    if ( v14 >= v17 ) /*0x5a1f26*/
    {
      v4 = v18; /*0x5a1f2c*/
      v5 = v15; /*0x5a1f30*/
      goto LABEL_16; /*0x5a1f30*/
    }
  }
}


// ==== 0x005A1F60  SmallFunc_5A1F60  this=-  sig=ida-proto ====
char sub_5A1F60()
{
  char v0; // bl
  int i; // eax

  v0 = 1; /*0x5a1f68*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x5a1f6a*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a1f74*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a1f85*/
  {
    if ( !v0 ) /*0x5a1f89*/
      break; /*0x5a1f89*/
    v0 = Cliff::ProcessTransitions(i, -1); /*0x5a1f9d*/
  }
  return v0; /*0x5a1faa*/
}


// ==== 0x005A1FB0  ObjectClass::SpreadMapSeedTerrainFromWaypoints  this=RandomMap  sig=csp ====
char __thiscall MapSeed_SpreadTerrainFromWaypoints(int *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // edi
  float *v4; // ebp
  int *v5; // eax
  int *v6; // esi
  void *v7; // eax
  int v8; // ecx
  int v9; // eax
  int i; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // eax
  __int16 *v21; // edi
  _WORD *v22; // ecx
  char v23; // al
  float *v24; // edi
  int v25; // edx
  _DWORD *v26; // eax
  __int16 v27; // ax
  int v28; // ecx
  int v29; // edx
  double v30; // st7
  int v31; // eax
  unsigned int v32; // ebp
  float v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // ebx
  unsigned int v37; // eax
  int v38; // eax
  int v40; // [esp+1Ch] [ebp-3Ch] BYREF
  int v41; // [esp+20h] [ebp-38h]
  int v42; // [esp+24h] [ebp-34h]
  __int16 *v43; // [esp+28h] [ebp-30h]
  int v44; // [esp+2Ch] [ebp-2Ch]
  int v45; // [esp+30h] [ebp-28h]
  float *v46; // [esp+34h] [ebp-24h]
  int v47; // [esp+38h] [ebp-20h]
  float v48; // [esp+3Ch] [ebp-1Ch]
  int v49; // [esp+40h] [ebp-18h]
  int v50; // [esp+44h] [ebp-14h]
  float v51; // [esp+48h] [ebp-10h]
  int *v52; // [esp+4Ch] [ebp-Ch]
  char v53[4]; // [esp+50h] [ebp-8h] BYREF
  int v54; // [esp+54h] [ebp-4h] BYREF

  v1 = this->RandomMap_field_0x14; /*0x5a1fb9*/
  v2 = 0; /*0x5a1fbe*/
  v52 = this; /*0x5a1fc4*/
  if ( v1 > 0 ) /*0x5a1fc8*/
  {
    do /*0x5a238f*/
    {
      v3 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(v53, v2); /*0x5a1fdf*/
      v44 = v3; /*0x5a1fe6*/
      v4 = (float *)__2_YAPAXI_Z(0x1900u); /*0x5a1fef*/
      v46 = v4; /*0x5a1ff3*/
      v5 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a1ff7*/
      v6 = v5; /*0x5a1ffc*/
      if ( v5 ) /*0x5a2003*/
      {
        v5[3] = 0; /*0x5a200a*/
        v5[4] = -1; /*0x5a2011*/
        *v5 = 0; /*0x5a2018*/
        v5[1] = 800; /*0x5a201e*/
        v7 = __2_YAPAXI_Z(0xC84u); /*0x5a2025*/
        v8 = v6[1]; /*0x5a202a*/
        v6[2] = (int)v7; /*0x5a202d*/
        v9 = 0; /*0x5a2033*/
        if ( v8 >= 0 ) /*0x5a2037*/
        {
          do /*0x5a204a*/
          {
            ++v9; /*0x5a203c*/
            *(_DWORD *)(v6[2] + 4 * v9 - 4) = 0; /*0x5a203d*/
          }
          while ( v9 <= v6[1] ); /*0x5a204a*/
        }
      }
      else
      {
        v6 = 0; /*0x5a204e*/
      }
      LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a2055*/
      for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a2066*/
      {
        v47 = *(_DWORD *)(i + 36); /*0x5a206b*/
        *((_DWORD *)g_MapTileArray + 20 * (__int16)v47 + 20 * unk_89C2DC * SHIWORD(v47) + 15) = 0; /*0x5a208c*/
      }
      v11 = v2 + 1; /*0x5a20a6*/
      v12 = 0; /*0x5a20a7*/
      v13 = *v6 < 0; /*0x5a20a9*/
      v42 = 0; /*0x5a20ab*/
      v47 = v11; /*0x5a20af*/
      if ( !v13 ) /*0x5a20b3*/
      {
        do /*0x5a20c1*/
        {
          ++v12; /*0x5a20b8*/
          *(_DWORD *)(v6[2] + 4 * v12 - 4) = 0; /*0x5a20b9*/
        }
        while ( v12 <= *v6 ); /*0x5a20c1*/
      }
      v14 = SHIWORD(v44); /*0x5a20c3*/
      *v6 = 0; /*0x5a20c8*/
      *(_DWORD *)v4 = v3; /*0x5a20ca*/
      v4[1] = 0.0; /*0x5a20cd*/
      v50 = (__int16)v3; /*0x5a20dc*/
      v41 = 1; /*0x5a20e6*/
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v3 + 20 * unk_89C2DC * v14 + 15) = v11; /*0x5a20f4*/
      v15 = *v6 + 1; /*0x5a20fd*/
      v48 = v4[1]; /*0x5a2100*/
      v16 = v15 >> 1; /*0x5a2107*/
      if ( v15 < v6[1] ) /*0x5a210b*/
      {
        for ( ; v15 > 1; v16 >>= 1 ) /*0x5a2110*/
        {
          v17 = v6[2]; /*0x5a2112*/
          v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a2115*/
          if ( *(float *)(v18 + 4) <= (double)v48 ) /*0x5a2124*/
            break; /*0x5a2124*/
          *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a2126*/
          v15 = v16; /*0x5a2129*/
        }
        *(_DWORD *)(v6[2] + 4 * v15) = v4; /*0x5a2135*/
        v19 = v6[3]; /*0x5a213a*/
        ++*v6; /*0x5a2140*/
        if ( (unsigned int)v4 > v19 ) /*0x5a2142*/
          v6[3] = (int)v4; /*0x5a2144*/
        if ( (unsigned int)v4 < v6[4] ) /*0x5a214a*/
          v6[4] = (int)v4; /*0x5a214c*/
      }
      if ( *v6 ) /*0x5a214f*/
      {
        v20 = v6[2]; /*0x5a2159*/
        v21 = *(__int16 **)(v20 + 4); /*0x5a2161*/
        *(_DWORD *)(v20 + 4) = *(_DWORD *)(v20 + 4 * *v6); /*0x5a2164*/
        *(_DWORD *)(v6[2] + 4 * (*v6)--) = 0; /*0x5a216e*/
        Heap::SiftDown(v6, 1); /*0x5a217a*/
        v43 = v21; /*0x5a2181*/
        if ( v21 ) /*0x5a2185*/
        {
          do /*0x5a2368*/
          {
            if ( v42 >= 400 ) /*0x5a2193*/
              break; /*0x5a2193*/
            v22 = v43; /*0x5a2199*/
            *((_BYTE *)g_MapTileArray + 80 * *v43 + 80 * unk_89C2DC * v43[1] + 69) = 1; /*0x5a21b9*/
            v23 = 0; /*0x5a21c2*/
            v45 = 0; /*0x5a21c4*/
            v24 = &v4[2 * v41]; /*0x5a21c8*/
            while ( 1 ) /*0x5a21ef*/
            {
              v49 = *CellStruct::Add(v22, &v54, (_WORD *)(4 * (v23 & 7) + 9041544)); /*0x5a21ef*/
              v40 = v49; /*0x5a21f3*/
              v25 = SHIWORD(v49) + (__int16)v49; /*0x5a21ff*/
              if ( v25 > g_MapCellHeight_Value /*0x5a2243*/
                && (__int16)v49 - SHIWORD(v49) < g_MapCellHeight_Value
                && SHIWORD(v49) - (__int16)v49 < g_MapCellHeight_Value
                && v25 <= g_MapCellCount
                && !*((_DWORD *)g_MapTileArray + 20 * (__int16)v49 + 20 * unk_89C2DC * SHIWORD(v49) + 15) )
              {
                v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x5a2259*/
                if ( Cell::IsEmpty(v26) ) /*0x5a2260*/
                {
                  v27 = v40; /*0x5a226d*/
                  v28 = v50; /*0x5a2271*/
                  v29 = SHIWORD(v44); /*0x5a2275*/
                  *(_DWORD *)v24 = v40; /*0x5a227a*/
                  v49 = (v27 - v28) * (v27 - v28) + (SHIWORD(v40) - v29) * (SHIWORD(v40) - v29); /*0x5a2297*/
                  v30 = Math::Sqrt((double)v49); /*0x5a22a2*/
                  v31 = SHIWORD(v40); /*0x5a22a7*/
                  v24[1] = v30; /*0x5a22ac*/
                  v32 = (unsigned int)v24; /*0x5a22c7*/
                  v24 += 2; /*0x5a22d2*/
                  *((_DWORD *)g_MapTileArray + 20 * (__int16)v40 + 20 * unk_89C2DC * v31 + 15) = v47; /*0x5a22d5*/
                  v33 = *(float *)(v32 + 4); /*0x5a22df*/
                  v34 = *v6 + 1; /*0x5a22e3*/
                  ++v41; /*0x5a22e4*/
                  v51 = v33; /*0x5a22ea*/
                  v35 = v34 >> 1; /*0x5a22f1*/
                  if ( v34 < v6[1] ) /*0x5a22f5*/
                  {
                    for ( ; v34 > 1; v35 >>= 1 ) /*0x5a22fa*/
                    {
                      v36 = v6[2]; /*0x5a22fc*/
                      if ( *(float *)(*(_DWORD *)(v36 + 4 * v35) + 4) <= (double)v51 ) /*0x5a230e*/
                        break; /*0x5a230e*/
                      *(_DWORD *)(v36 + 4 * v34) = *(_DWORD *)(v36 + 4 * v35); /*0x5a2313*/
                      v34 = v35; /*0x5a2316*/
                    }
                    *(_DWORD *)(v6[2] + 4 * v34) = v32; /*0x5a2322*/
                    v37 = v6[3]; /*0x5a2327*/
                    ++*v6; /*0x5a232d*/
                    if ( v32 > v37 ) /*0x5a232f*/
                      v6[3] = v32; /*0x5a2331*/
                    if ( v32 < v6[4] ) /*0x5a2337*/
                      v6[4] = v32; /*0x5a2339*/
                  }
                }
              }
              v23 = ++v45; /*0x5a2340*/
              if ( v45 >= 8 ) /*0x5a2348*/
                break; /*0x5a2348*/
              v22 = v43; /*0x5a21ce*/
            }
            ++v42; /*0x5a2355*/
            v38 = PriorityQueue::Pop(v6); /*0x5a2359*/
            v4 = v46; /*0x5a235e*/
            v43 = (__int16 *)v38; /*0x5a2362*/
          }
          while ( v38 ); /*0x5a2368*/
        }
      }
      __3_YAXPAX_Z(v4); /*0x5a236f*/
      if ( v6 ) /*0x5a2379*/
        Scalar::Dtor((void **)v6, 1); /*0x5a237f*/
      v2 = v47; /*0x5a2388*/
    }
    while ( v47 < v52[20] ); /*0x5a238f*/
  }
  return 1; /*0x5a2395*/
}


// ==== 0x005A23A0  RandomMap::PlaceRandomMapTiberium  this=RandomMap  sig=csp ====
int __thiscall RandomMapClass::PlaceTiberium(int *this)
{
  int *v1; // esi
  __int16 v2; // bx
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int *v6; // edi
  __int16 v7; // bp
  int v8; // esi
  int v9; // ecx
  __int16 v10; // bx
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // ebp
  int v16; // eax
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int *Waypoint_Location; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // eax
  double v31; // st7
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  double *v35; // edx
  _DWORD *v36; // ecx
  int v37; // esi
  int v38; // ebp
  int v39; // eax
  int v40; // esi
  int v41; // ebp
  __int16 *v42; // eax
  int v43; // [esp-4h] [ebp-9Ch]
  bool v44; // [esp+1Fh] [ebp-79h]
  int v45; // [esp+20h] [ebp-78h]
  int *v46; // [esp+24h] [ebp-74h]
  int v47; // [esp+28h] [ebp-70h]
  int v48; // [esp+28h] [ebp-70h]
  double v49; // [esp+28h] [ebp-70h]
  int v50; // [esp+34h] [ebp-64h]
  int v51; // [esp+34h] [ebp-64h]
  char v52; // [esp+38h] [ebp-60h]
  int v53; // [esp+3Ch] [ebp-5Ch]
  double v54; // [esp+40h] [ebp-58h]
  int v55; // [esp+40h] [ebp-58h]
  double v56; // [esp+40h] [ebp-58h]
  char v57[4]; // [esp+4Ch] [ebp-4Ch] BYREF
  char v58[4]; // [esp+50h] [ebp-48h] BYREF
  char v59[4]; // [esp+54h] [ebp-44h] BYREF
  double v60; // [esp+58h] [ebp-40h]
  double v61; // [esp+60h] [ebp-38h]
  double v62; // [esp+68h] [ebp-30h]
  __int64 v63; // [esp+70h] [ebp-28h]
  __int64 v64; // [esp+78h] [ebp-20h]
  void **v65; // [esp+80h] [ebp-18h] BYREF
  void *Block; // [esp+84h] [ebp-14h]
  int v67; // [esp+88h] [ebp-10h]
  char v68; // [esp+8Dh] [ebp-Bh]
  int v69; // [esp+90h] [ebp-8h]
  int v70; // [esp+94h] [ebp-4h]

  v1 = this; /*0x5a23af*/
  v2 = 0; /*0x5a23b1*/
  v3 = this->RandomMap_field_0x3C; /*0x5a23b4*/
  v4 = this->RandomMap_field_0x10; /*0x5a23b7*/
  v46 = v1; /*0x5a23bd*/
  v45 = 0; /*0x5a23c1*/
  switch ( v3 ) /*0x5a23c7*/
  {
    case 0: /*0x5a23c7*/
      v44 = v4 == 3; /*0x5a23d1*/
      break; /*0x5a23d6*/
    case 1: /*0x5a23c7*/
    case 3: /*0x5a23c7*/
    case 4: /*0x5a23c7*/
      v44 = v4 != 3; /*0x5a23db*/
      break; /*0x5a23e0*/
    case 2: /*0x5a23c7*/
      v44 = 1; /*0x5a23e2*/
      break; /*0x5a23e7*/
    default:
      v44 = 0; /*0x5a23e9*/
      break; /*0x5a23e9*/
  }
  result = 0; /*0x5a23f4*/
  v53 = 0; /*0x5a23f8*/
  if ( g_RandomMap_TileData > 0 ) /*0x5a23fc*/
  {
    while ( 1 ) /*0x5a240c*/
    {
      v6 = (int *)*((_DWORD *)g_RandomMap_TerrainState + result); /*0x5a240c*/
      if ( *v6 ) /*0x5a240f*/
      {
        v50 = -1; /*0x5a241b*/
        if ( v44 ) /*0x5a2425*/
        {
          v7 = 0; /*0x5a242e*/
          if ( v6[8] <= 0 ) /*0x5a2433*/
          {
            v12 = v6[14] - 1; /*0x5a2484*/
            v63 = (unsigned int)v6[14]; /*0x5a2488*/
            v54 = (double)v63; /*0x5a2490*/
            do /*0x5a24bb*/
            {
              v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a249e*/
              v11 = Math::RoundToInt((double)v64 * v54 * 2.328306437080797e-10); /*0x5a24b4*/
            }
            while ( v11 > v12 ); /*0x5a24bb*/
            v47 = *(_DWORD *)(v6[11] + 4 * v11); /*0x5a24c3*/
            LOWORD(v11) = HIWORD(v47); /*0x5a24c7*/
            v10 = v47; /*0x5a24cc*/
          }
          else
          {
            v8 = 0; /*0x5a2435*/
            do /*0x5a2467*/
            {
              LODWORD(v60) = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(v57, v8 + v45); /*0x5a2455*/
              v7 += WORD1(v60); /*0x5a2459*/
              v2 += LOWORD(v60); /*0x5a245e*/
              ++v8; /*0x5a2464*/
            }
            while ( v8 < v6[8] ); /*0x5a2467*/
            v9 = v6[8]; /*0x5a2469*/
            v10 = v2 / v9; /*0x5a2472*/
            v11 = v7 / v9; /*0x5a2479*/
          }
          v13 = *v6; /*0x5a24cf*/
          v14 = 0; /*0x5a24d1*/
          v48 = 500000; /*0x5a24d3*/
          if ( *(int *)(*v6 + 16) > 0 ) /*0x5a24e0*/
          {
            v15 = (__int16)v11; /*0x5a24e5*/
            do /*0x5a2546*/
            {
              v16 = *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v14); /*0x5a24ee*/
              v17 = Math::Sqrt((double)(((__int16)v16 - v10) * ((__int16)v16 - v10) /*0x5a2518*/
                                      + (SHIWORD(v16) - v15) * (SHIWORD(v16) - v15)));
              if ( v17 < (double)v48 ) /*0x5a252d*/
              {
                v48 = Math::RoundToInt(v17); /*0x5a2534*/
                v50 = v14; /*0x5a2538*/
              }
              v13 = *v6; /*0x5a2540*/
              ++v14; /*0x5a2542*/
            }
            while ( v14 < *(_DWORD *)(*v6 + 16) ); /*0x5a2546*/
          }
          v1 = v46; /*0x5a2548*/
        }
        Math::RoundToInt((double)v1[21] * 0.01 * (double)(v1[176] - v1[175]) + (double)v1[175]); /*0x5a2575*/
        v18 = (double)v6[8]; /*0x5a257a*/
        if ( v18 < 0.5 ) /*0x5a258e*/
          v18 = 0.5; /*0x5a2592*/
        v19 = Math::RoundToInt(v18); /*0x5a259e*/
        v20 = *(_DWORD *)(*v6 + 16); /*0x5a25a7*/
        if ( v20 && v19 ) /*0x5a25b4*/
        {
          v21 = 0; /*0x5a25bd*/
          v22 = 0; /*0x5a25bf*/
          v55 = v19 / v20; /*0x5a25c3*/
          if ( v20 > 0 ) /*0x5a25c7*/
          {
            do /*0x5a2638*/
            {
              do /*0x5a25f9*/
              {
                do /*0x5a25e8*/
                  v49 = Random::Gaussian((double *)&g_TileSystemInit) * 50.0; /*0x5a25d9*/
                while ( v49 < -100.0 ); /*0x5a25e8*/
              }
              while ( v49 > 100.0 ); /*0x5a25f9*/
              v23 = Math::RoundToInt((double)v55 + v49); /*0x5a2603*/
              if ( v23 >= 0 ) /*0x5a260a*/
                Terrain::PlaceTiberiumTrees((__int16 *)(*(_DWORD *)(*v6 + 4) + 4 * v22), v23, v22 + v45 + 1, v22 == v50); /*0x5a262d*/
              ++v22; /*0x5a2634*/
            }
            while ( v22 < *(_DWORD *)(*v6 + 16) ); /*0x5a2638*/
          }
          RandomMap::Constructor_1(0, 0); /*0x5a2643*/
          v65 = &vt_DynamicVectorClass_double; /*0x5a2648*/
          v70 = 10; /*0x5a2650*/
          v69 = 0; /*0x5a265b*/
          v51 = 0; /*0x5a2667*/
          if ( v6[8] > 0 ) /*0x5a266b*/
          {
            do /*0x5a2779*/
            {
              v62 = 0.0; /*0x5a2679*/
              Waypoint_Location = (int *)ScenarioClass::Get_Waypoint_Location(v58, v21 + v45); /*0x5a2694*/
              v25 = *v6; /*0x5a2699*/
              v26 = *Waypoint_Location; /*0x5a269b*/
              v27 = 0; /*0x5a269d*/
              if ( *(int *)(*v6 + 16) > 0 ) /*0x5a26a8*/
              {
                v28 = SHIWORD(v26); /*0x5a26aa*/
                v29 = (__int16)v26; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  v30 = *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * v27); /*0x5a26b8*/
                  v31 = Math::Sqrt((double)(((__int16)v30 - v29) * ((__int16)v30 - v29) /*0x5a26e2*/
                                          + (SHIWORD(v30) - v28) * (SHIWORD(v30) - v28)));
                  v25 = *v6; /*0x5a26e7*/
                  v32 = *(_DWORD *)(*v6 + 16); /*0x5a26f0*/
                  ++v27; /*0x5a26f3*/
                  v62 = v31 + v62; /*0x5a26f6*/
                }
                while ( v27 < v32 ); /*0x5a26fa*/
                v21 = v51; /*0x5a26fc*/
              }
              v56 = v62 / (double)*(int *)(*v6 + 16); /*0x5a2719*/
              if ( v69 < v67 /*0x5a274c*/
                || (v68 || !v67)
                && v70 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v65[2])(&v65, v70 + v67, 0) )
              {
                v33 = v69++; /*0x5a275e*/
                *((double *)Block + v33) = v56; /*0x5a276c*/
              }
              v51 = ++v21; /*0x5a2775*/
            }
            while ( v21 < v6[8] ); /*0x5a2779*/
          }
          v34 = v6[8]; /*0x5a277f*/
          v35 = (double *)Block; /*0x5a2782*/
          v61 = 9999999.0; /*0x5a2788*/
          if ( v34 > 0 ) /*0x5a2798*/
          {
            v36 = Block; /*0x5a279a*/
            v37 = v34; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              if ( *(double *)v36 < v61 ) /*0x5a27a9*/
              {
                v38 = v36[1]; /*0x5a27ad*/
                LODWORD(v61) = *v36; /*0x5a27b0*/
                HIDWORD(v61) = v38; /*0x5a27b4*/
              }
              v36 += 2; /*0x5a27b8*/
              --v37; /*0x5a27bb*/
            }
            while ( v37 ); /*0x5a27bc*/
          }
          v52 = 0; /*0x5a27da*/
          if ( v46[16] == 3 ) /*0x5a27c6*/
          {
            v39 = v46[15]; /*0x5a27c8*/
            if ( v39 == 1 || v39 == 3 || v39 == 4 ) /*0x5a27d8*/
              v52 = 1; /*0x5a27c6*/
          }
          v40 = 0; /*0x5a27e6*/
          if ( v34 > 0 ) /*0x5a27ea*/
          {
            v41 = v45; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              v43 = Math::RoundToInt((v35[v40] - v61) * 15.0) + 500; /*0x5a2816*/
              v42 = (__int16 *)ScenarioClass::Get_Waypoint_Location(v59, v41); /*0x5a281d*/
              Terrain::PlaceTiberiumTrees(v42, v43, v41 + 1, v52); /*0x5a2827*/
              v35 = (double *)Block; /*0x5a282f*/
              ++v40; /*0x5a2833*/
              ++v41; /*0x5a2834*/
            }
            while ( v40 < v6[8] ); /*0x5a2837*/
          }
          v45 += v6[8]; /*0x5a2846*/
          v65 = &vt_VectorClass_double; /*0x5a284a*/
          if ( v35 ) /*0x5a2852*/
          {
            if ( v68 ) /*0x5a285d*/
            {
              __3_YAXPAX_Z(v35); /*0x5a2860*/
              Block = 0; /*0x5a2868*/
            }
          }
          v67 = 0; /*0x5a286c*/
          v1 = v46; /*0x5a2873*/
          v68 = 0; /*0x5a2877*/
        }
      }
      result = ++v53; /*0x5a2889*/
      if ( v53 >= g_RandomMap_TileData ) /*0x5a2890*/
        break; /*0x5a2890*/
      v2 = 0; /*0x5a2404*/
    }
  }
  return result; /*0x5a2896*/
}


// ==== 0x005A28C0  Terrain::PlaceTiberiumTrees  this=Terrain  sig=csp ====
void __stdcall Terrain::PlaceTiberiumTrees(ScenarioClass *aP0, int a2, int a3, char a4)
{
  __int16 *v4; // ebx
  int v5; // edi
  void *v6; // eax
  int v7; // eax
  AbstractClass *v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // sf
  int i; // eax
  int j; // eax
  Random *v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // eax
  TerrainClass *v23; // ebx
  int v24; // edx
  _DWORD *v25; // ecx
  int v26; // eax
  int k; // eax
  unsigned int v28; // eax
  TerrainClass *v29; // edi
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int8 v32; // al
  float *v33; // edi
  int v34; // ecx
  __int16 v35; // ax
  Random *v36; // ebx
  _DWORD *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  unsigned int v41; // ebx
  float v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  TerrainClass *v47; // edi
  char v48; // [esp+1Bh] [ebp-6Dh]
  TerrainClass *v49; // [esp+1Ch] [ebp-6Ch]
  _DWORD *v50; // [esp+20h] [ebp-68h] BYREF
  void *Block; // [esp+24h] [ebp-64h]
  int v52; // [esp+28h] [ebp-60h] BYREF
  int v53; // [esp+2Ch] [ebp-5Ch]
  int v54; // [esp+30h] [ebp-58h]
  Random *v55; // [esp+34h] [ebp-54h]
  int v56; // [esp+38h] [ebp-50h]
  _DWORD *v57; // [esp+3Ch] [ebp-4Ch]
  Random *v58; // [esp+40h] [ebp-48h]
  int Random_field_0x04; // [esp+44h] [ebp-44h]
  int v60; // [esp+48h] [ebp-40h]
  float v61; // [esp+4Ch] [ebp-3Ch]
  double v62; // [esp+50h] [ebp-38h]
  __int64 v63; // [esp+5Ch] [ebp-2Ch]
  __int64 v64; // [esp+64h] [ebp-24h]
  __int64 v65; // [esp+6Ch] [ebp-1Ch]
  char Buffer[20]; // [esp+74h] [ebp-14h] BYREF

  v4 = 0; /*0x5a28cf*/
  v53 = 0; /*0x5a28d4*/
  v5 = 10 * a2; /*0x5a28d8*/
  v6 = (void *)__2_YAPAXI_Z(80 * a2); /*0x5a28e2*/
  if ( v6 ) /*0x5a28ec*/
  {
    Block = v6; /*0x5a28f1*/
    LODWORD(v62) = v5 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  v7 = __2_YAPAXI_Z(0x14u); /*0x5a2901*/
  v8 = (AbstractClass *)v7; /*0x5a2906*/
  if ( v7 ) /*0x5a290d*/
  {
    *(_DWORD *)(v7 + 12) = 0; /*0x5a2916*/
    *(_DWORD *)(v7 + 16) = -1; /*0x5a291a*/
    *(_DWORD *)v7 = 0; /*0x5a2921*/
    *(_DWORD *)(v7 + 4) = v5; /*0x5a2923*/
    v9 = __2_YAPAXI_Z(40 * a2 + 4); /*0x5a2926*/
    v10 = *(_DWORD *)&v8->__pad_0[4]; /*0x5a292b*/
    *(_DWORD *)&v8->__pad_0[8] = v9; /*0x5a292e*/
    v11 = 0; /*0x5a2934*/
    if ( v10 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v11; /*0x5a293d*/
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v11 - 4) = 0; /*0x5a293e*/
      }
      while ( v11 <= *(_DWORD *)&v8->__pad_0[4] ); /*0x5a2947*/
    }
  }
  else
  {
    v8 = 0; /*0x5a294b*/
  }
  v48 = 0; /*0x5a2957*/
  v52 = aP0->nextScenario[0]; /*0x5a295e*/
  v12 = 0; /*0x5a2965*/
  v54 = 0; /*0x5a296a*/
  v60 = a4 != 0 ? 27 : 102;
  v13 = *(int *)v8->__pad_0 < 0; /*0x5a2974*/
  v55 = 0; /*0x5a2976*/
  if ( !v13 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v12; /*0x5a297f*/
      *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v12 - 4) = 0; /*0x5a2980*/
    }
    while ( v12 <= *(_DWORD *)v8->__pad_0 ); /*0x5a2988*/
  }
  *(_DWORD *)v8->__pad_0 = 0; /*0x5a298d*/
  v49 = 0; /*0x5a2991*/
  if ( a2 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( (int)v55 < 10 ) /*0x5a29a6*/
  {
    if ( v4 ) /*0x5a29b0*/
    {
      v16 = (Random *)Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *(_DWORD *)v8->__pad_0; *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *(_DWORD *)v8->__pad_0 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset(&stru_87C374.__pad_14B0[8132]); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x5a29e4*/
            j;
            j = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
      {
        v58 = *(Random **)(j + 36); /*0x5a29e9*/
        *((_DWORD *)g_MapTileArray + 20 * (__int16)v58 + 20 * unk_89C2DC * SHIWORD(v58) + 15) = 0; /*0x5a2a0a*/
      }
      v16 = (Random *)Block; /*0x5a2a1f*/
      v53 = 1; /*0x5a2a25*/
      *(_DWORD *)Block = aP0->nextScenario[0]; /*0x5a2a2f*/
      v16->Random_field_0x04 = 0; /*0x5a2a31*/
      *((_DWORD *)g_MapTileArray /*0x5a2a56*/
      + 20 * SLOWORD(aP0->nextScenario[0])
      + 20 * unk_89C2DC * SHIWORD(aP0->nextScenario[0])
      + 15) = a3;
      v17 = *(_DWORD *)v8->__pad_0 + 1; /*0x5a2a5f*/
      Random_field_0x04 = v16->Random_field_0x04; /*0x5a2a62*/
      v18 = v17 >> 1; /*0x5a2a69*/
      if ( v17 < *(_DWORD *)&v8->__pad_0[4] ) /*0x5a2a6d*/
      {
        if ( v17 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            v19 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2a74*/
            v20 = *(_DWORD *)(v19 + 4 * v18); /*0x5a2a77*/
            if ( *(float *)(v20 + 4) <= (double)*(float *)&Random_field_0x04 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(_DWORD *)(v19 + 4 * v17) = v20; /*0x5a2a88*/
            v17 = v18; /*0x5a2a8b*/
            v18 >>= 1; /*0x5a2a8d*/
          }
          while ( v17 > 1 ); /*0x5a2a92*/
          v16 = (Random *)Block; /*0x5a2a94*/
        }
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v17) = v16; /*0x5a2a9b*/
        v21 = *(_DWORD *)&v8->__pad_0[12]; /*0x5a2aa0*/
        ++*(_DWORD *)v8->__pad_0; /*0x5a2aa6*/
        if ( (unsigned int)v16 > v21 ) /*0x5a2aa8*/
          *(_DWORD *)&v8->__pad_0[12] = v16; /*0x5a2aaa*/
        if ( (unsigned int)v16 < v8->uniqueId ) /*0x5a2ab0*/
          v8->uniqueId = (int)v16; /*0x5a2ab2*/
      }
      if ( *(_DWORD *)v8->__pad_0 ) /*0x5a2ab5*/
      {
        v22 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2ac1*/
        v23 = *(TerrainClass **)(v22 + 4); /*0x5a2ac9*/
        *(_DWORD *)(v22 + 4) = *(_DWORD *)(v22 + 4 * *(_DWORD *)v8->__pad_0); /*0x5a2acc*/
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * (*(_DWORD *)v8->__pad_0)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown((int *)v8->__pad_0, 1); /*0x5a2ae2*/
        v49 = v23; /*0x5a2ae7*/
      }
      else
      {
        v49 = 0; /*0x5a2abb*/
      }
      v4 = (__int16 *)v49; /*0x5a2af2*/
      v24 = aP0->nextScenario[0]; /*0x5a2af7*/
      v48 = 0; /*0x5a2af9*/
      v55 = (Random *)((char *)v55 + 1); /*0x5a2afe*/
      v52 = v24; /*0x5a2b02*/
    }
    v25 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v4); /*0x5a2b17*/
    v26 = *v4 + unk_89C2DC * v4[1]; /*0x5a2b27*/
    v50 = v25; /*0x5a2b2f*/
    if ( *((_BYTE *)g_MapTileArray + 80 * v26 + 69) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v48 ) /*0x5a2b4a*/
    {
      v48 = 1; /*0x5a2b52*/
      v52 = *(_DWORD *)v4; /*0x5a2b57*/
      for ( k = 0; k <= *(_DWORD *)v8->__pad_0; *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *(_DWORD *)v8->__pad_0 = 0; /*0x5a2b78*/
      v53 = 0; /*0x5a2b80*/
      if ( !a4 ) /*0x5a2b88*/
      {
        do /*0x5a2bbc*/
        {
          v63 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2b98*/
          v28 = Math::RoundToInt((double)v63 * 6.984919311242392e-10 + 1.0); /*0x5a2bb4*/
        }
        while ( v28 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, &stru_82C090, (INIClass *)((int)v28 % 10)); /*0x5a2bd1*/
        v29 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a2be0*/
        if ( v29 ) /*0x5a2be7*/
        {
          v30 = Terrain::LookupByName(Buffer); /*0x5a2bed*/
          TerrainClass::Construct( /*0x5a2c05*/
            (void **)v29,
            *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v30),
            (TerrainClass *)&v52);
        }
        v16 = (Random *)Block; /*0x5a2c0a*/
        v25 = v50; /*0x5a2c0e*/
      }
    }
    if ( v25[17] == -1 ) /*0x5a2c16*/
    {
      do /*0x5a2c40*/
      {
        v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2c22*/
        v31 = Math::RoundToInt((double)v64 * 0.000000002793967724496957); /*0x5a2c38*/
      }
      while ( v31 > 0xB ); /*0x5a2c40*/
      v50[17] = v60 + v31; /*0x5a2c4c*/
      goto LABEL_48; /*0x5a2c4f*/
    }
    v32 = *((_BYTE *)v25 + 286); /*0x5a2c51*/
    if ( v32 < 0xBu ) /*0x5a2c59*/
    {
      *((_BYTE *)v25 + 286) = v32 + 1; /*0x5a2c5d*/
LABEL_48:
      ++v54; /*0x5a2c63*/
    }
LABEL_49:
    v56 = 0; /*0x5a2c67*/
    v33 = (float *)&v16->__pad_0[8 * v53]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      v34 = v56 & 7; /*0x5a2c7c*/
      v35 = v4[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v34 + 162]; /*0x5a2c95*/
      LOWORD(v57) = *v4 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v34 + 160]; /*0x5a2c99*/
      HIWORD(v57) = v35; /*0x5a2ca2*/
      v50 = v57; /*0x5a2cab*/
      if ( !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v50, (TechnoClass *)1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v36 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v50); /*0x5a2cd1*/
      v58 = v36; /*0x5a2cd5*/
      if ( Cell::IsEmpty(v36) ) /*0x5a2cd9*/
      {
        if ( v36[4].Random_field_0x04 == -1 ) /*0x5a2cea*/
        {
          v37 = v50; /*0x5a2cf8*/
          if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v50 + 20 * unk_89C2DC * SHIWORD(v50) + 15) != a3 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v36 = v58; /*0x5a2d16*/
        }
        if ( BYTE2(v36[17].Random_field_0x0C) < 0xBu && BuildingClass::FindByCellHash(v36) != -1 ) /*0x5a2d31*/
        {
          v37 = v50; /*0x5a2d37*/
LABEL_58:
          v38 = SHIWORD(v50); /*0x5a2d3b*/
          *(_DWORD *)v33 = v37; /*0x5a2d40*/
          v58 = (Random *)(((__int16)v52 - (__int16)v37) * ((__int16)v52 - (__int16)v37) /*0x5a2d62*/
                         + (SHIWORD(v52) - v38) * (SHIWORD(v52) - v38));
          v62 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v58)); /*0x5a2d72*/
          v65 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2d83*/
          v39 = SHIWORD(v50); /*0x5a2d93*/
          v40 = (__int16)v50; /*0x5a2d9e*/
          v41 = (unsigned int)v33; /*0x5a2da9*/
          v33 += 2; /*0x5a2dab*/
          v58 = (Random *)v41; /*0x5a2dae*/
          *(v33 - 1) = (double)v65 * 5.0 * 2.328306437080797e-10 + v62; /*0x5a2db6*/
          *((_DWORD *)g_MapTileArray + 20 * v40 + 20 * unk_89C2DC * v39 + 15) = a3; /*0x5a2dd1*/
          v42 = *(float *)(v41 + 4); /*0x5a2dd9*/
          ++v53; /*0x5a2ddd*/
          v43 = *(_DWORD *)v8->__pad_0 + 1; /*0x5a2de3*/
          v61 = v42; /*0x5a2de4*/
          v44 = v43 >> 1; /*0x5a2ded*/
          if ( v43 < *(_DWORD *)&v8->__pad_0[4] ) /*0x5a2df1*/
          {
            for ( ; v43 > 1; v44 >>= 1 ) /*0x5a2df6*/
            {
              LODWORD(v62) = *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v44); /*0x5a2dfe*/
              if ( *(float *)(LODWORD(v62) + 4) <= (double)v61 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v43) = LODWORD(v62); /*0x5a2e17*/
              v41 = (unsigned int)v58; /*0x5a2e1a*/
              v43 = v44; /*0x5a2e1e*/
            }
            *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v43) = v41; /*0x5a2e2a*/
            v45 = *(_DWORD *)&v8->__pad_0[12]; /*0x5a2e2f*/
            ++*(_DWORD *)v8->__pad_0; /*0x5a2e35*/
            if ( v41 > v45 ) /*0x5a2e37*/
              *(_DWORD *)&v8->__pad_0[12] = v41; /*0x5a2e39*/
            if ( v41 < v8->uniqueId ) /*0x5a2e3f*/
              v8->uniqueId = v41; /*0x5a2e41*/
          }
        }
      }
      v4 = (__int16 *)v49; /*0x5a2e44*/
LABEL_67:
      ++v56; /*0x5a2e48*/
    }
    while ( v56 < 8 ); /*0x5a2e54*/
    if ( *(_DWORD *)v8->__pad_0 ) /*0x5a2e5a*/
    {
      v46 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2e66*/
      v47 = *(TerrainClass **)(v46 + 4); /*0x5a2e6e*/
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v46 + 4 * *(_DWORD *)v8->__pad_0); /*0x5a2e71*/
      *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * (*(_DWORD *)v8->__pad_0)--) = 0; /*0x5a2e79*/
      Heap::SiftDown((int *)v8->__pad_0, 1); /*0x5a2e87*/
      v49 = v47; /*0x5a2e8c*/
    }
    else
    {
      v49 = 0; /*0x5a2e60*/
    }
    if ( v54 < a2 ) /*0x5a2e99*/
    {
      v4 = (__int16 *)v49; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
LABEL_72:
  __3_YAXPAX_Z(Block); /*0x5a2e9f*/
  if ( v8 ) /*0x5a2eae*/
  {
    __3_YAXPAX_Z(*(void **)&v8->__pad_0[8]); /*0x5a2eb4*/
    __3_YAXPAX_Z(v8); /*0x5a2eba*/
  }
}


// ==== 0x005A2ED0  sub_5A2ED0  this=-  sig=csp ====
double __stdcall sub_5A2ED0(__int16 *a1, __int16 *a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a2eec*/
  v3 = a1[1] - a2[1]; /*0x5a2eee*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a2f0d*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a2f3f*/
}


// ==== 0x005A2F50  ObjectClass::SmoothTerrainMap  this=ObjectClass  sig=csp ====
void __thiscall Map_SmoothTerrain(int *this)
{
  double v1; // st7
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  char *v5; // esi
  __int16 v6; // cx
  __int16 v7; // ax
  int v8; // ebp
  int v9; // edx
  double *v10; // eax
  int v11; // ecx
  int v12; // edi
  double *v13; // eax
  double v14; // st7
  double v15; // st7
  double v16; // st7
  bool v17; // zf
  double *v18; // esi
  double v20; // st7
  char v21; // c0
  double v22; // st7
  __int16 v23; // [esp+8h] [ebp-78h]
  double v24; // [esp+8h] [ebp-78h]
  double v25; // [esp+8h] [ebp-78h]
  int v26; // [esp+14h] [ebp-6Ch]
  int v27; // [esp+18h] [ebp-68h]
  int v28; // [esp+1Ch] [ebp-64h]
  int v29; // [esp+20h] [ebp-60h]
  double v30; // [esp+28h] [ebp-58h]
  double v31; // [esp+30h] [ebp-50h]
  double v32; // [esp+38h] [ebp-48h]
  double v33; // [esp+38h] [ebp-48h]
  double v34; // [esp+40h] [ebp-40h]
  double v35; // [esp+48h] [ebp-38h]
  double v36; // [esp+50h] [ebp-30h]
  double v37; // [esp+58h] [ebp-28h]
  double v38; // [esp+60h] [ebp-20h]
  double v39; // [esp+68h] [ebp-18h]
  double v40; // [esp+68h] [ebp-18h]
  double v41; // [esp+68h] [ebp-18h]
  double v42; // [esp+70h] [ebp-10h]
  double v43; // [esp+78h] [ebp-8h]

  v1 = (double)this->q011; /*0x5a2f59*/
  v2 = unk_89C2DC * unk_89C2DC; /*0x5a2f67*/
  v37 = v1 * 0.0001 + 0.1; /*0x5a2f76*/
  v28 = unk_89C2DC * unk_89C2DC; /*0x5a2f84*/
  v35 = v1 * 0.0025; /*0x5a2f88*/
  v43 = v1 * 0.005; /*0x5a2f92*/
  if ( v35 >= 0.025 ) /*0x5a2fa8*/
  {
    v3 = 0; /*0x5a2fae*/
    if ( v2 > 0 ) /*0x5a2fb2*/
    {
      v4 = 0; /*0x5a2fb8*/
      v27 = unk_89C2DC * unk_89C2DC; /*0x5a2fba*/
      v26 = 0; /*0x5a2fbe*/
      do /*0x5a3383*/
      {
        v5 = (char *)g_MapTileArray + v4; /*0x5a2fc7*/
        v29 = *(_DWORD *)v5; /*0x5a2fcb*/
        if ( *(_DWORD *)v5 ) /*0x5a2fc9*/
        {
          v6 = *(_DWORD *)v5 - 1; /*0x5a2fe1*/
          v23 = HIWORD(v29) - 1; /*0x5a2fe3*/
          *((_DWORD *)v5 + 4) = 0; /*0x5a2fe7*/
          v7 = HIWORD(v29) - 1; /*0x5a2fed*/
          *((_DWORD *)v5 + 5) = 0; /*0x5a2ff0*/
          v8 = (__int16)(HIWORD(v29) - 1) + v6; /*0x5a2ff9*/
          v34 = 0.0; /*0x5a2ffc*/
          v30 = 0.0; /*0x5a300e*/
          if ( v8 > g_MapCellHeight_Value /*0x5a3034*/
            && v6 - v7 < g_MapCellHeight_Value
            && v7 - v6 < g_MapCellHeight_Value
            && v8 <= g_MapCellCount )
          {
            v34 = *((double *)g_MapTileArray + 10 * v6 + 10 * unk_89C2DC * v23 + 1); /*0x5a3057*/
          }
          v9 = SHIWORD(v29) + v6; /*0x5a3063*/
          if ( v9 <= g_MapCellHeight_Value /*0x5a3080*/
            || v6 - SHIWORD(v29) >= g_MapCellHeight_Value
            || SHIWORD(v29) - v6 >= g_MapCellHeight_Value
            || v9 > g_MapCellCount )
          {
            *((_DWORD *)v5 + 2) = *((_DWORD *)v5 + 2); /*0x5a30c2*/
            v11 = *((_DWORD *)v5 + 3); /*0x5a30c5*/
            *((_DWORD *)v5 + 4) = LODWORD(v35); /*0x5a30cc*/
            *((_DWORD *)v5 + 3) = v11; /*0x5a30cf*/
            *((_DWORD *)v5 + 5) = HIDWORD(v35); /*0x5a30d2*/
          }
          else
          {
            v10 = (double *)((char *)g_MapTileArray + 80 * v6 + 80 * unk_89C2DC * SHIWORD(v29)); /*0x5a309a*/
            *((double *)v5 + 1) = *((double *)v5 + 1) + v10[1]; /*0x5a309f*/
            *((_DWORD *)v5 + 4) = *((_DWORD *)v10 + 4); /*0x5a30a5*/
            *((_DWORD *)v5 + 5) = *((_DWORD *)v10 + 5); /*0x5a30ab*/
            v30 = v10[1] - v34; /*0x5a30b5*/
          }
          v12 = v23 + (__int16)v29; /*0x5a30e5*/
          if ( v12 <= g_MapCellHeight_Value /*0x5a3102*/
            || (__int16)v29 - v23 >= g_MapCellHeight_Value
            || v23 - (__int16)v29 >= g_MapCellHeight_Value
            || v12 > g_MapCellCount )
          {
            v14 = v35 + *((double *)v5 + 2); /*0x5a3145*/
            *((_DWORD *)v5 + 2) = *((_DWORD *)v5 + 2); /*0x5a3148*/
            *((_DWORD *)v5 + 3) = *((_DWORD *)v5 + 3); /*0x5a314e*/
            *((double *)v5 + 2) = v14; /*0x5a3151*/
          }
          else
          {
            v13 = (double *)((char *)g_MapTileArray + 80 * (__int16)v29 + 80 * unk_89C2DC * v23); /*0x5a3119*/
            *((double *)v5 + 1) = v13[1] + *((double *)v5 + 1); /*0x5a3121*/
            *((double *)v5 + 2) = v13[2] + *((double *)v5 + 2); /*0x5a312a*/
            v30 = v13[1] - v34 + v30; /*0x5a3138*/
          }
          v15 = *((double *)v5 + 1) * 0.5; /*0x5a3157*/
          *((double *)v5 + 1) = v15; /*0x5a315d*/
          *((double *)v5 + 2) = *((double *)v5 + 2) * 0.5; /*0x5a3169*/
          if ( v30 <= 0.0 ) /*0x5a317b*/
          {
            if ( v30 < 0.0 ) /*0x5a319e*/
              v30 = -v37; /*0x5a31a6*/
          }
          else
          {
            v30 = v37; /*0x5a3185*/
          }
          if ( v5[69] ) /*0x5a31aa*/
          {
            if ( v15 <= 0.0 ) /*0x5a31bc*/
              v15 = 0.0; /*0x5a31c0*/
            *((double *)v5 + 1) = v15; /*0x5a31c6*/
            *((_DWORD *)v5 + 4) = 1202590843; /*0x5a31c9*/
            *((_DWORD *)v5 + 5) = 1063549665; /*0x5a31d0*/
          }
          v32 = -*((double *)v5 + 2); /*0x5a31e0*/
          v38 = 0.0; /*0x5a31fd*/
          v36 = 0.025; /*0x5a320d*/
          v24 = v43 - *((double *)v5 + 2); /*0x5a3211*/
          if ( -0.025 > v24 || v32 > 0.025 ) /*0x5a3237*/
          {
            v36 = (v24 - v32) * 0.5; /*0x5a3247*/
            v38 = v36 - *((double *)v5 + 2); /*0x5a324f*/
          }
          do /*0x5a3281*/
          {
            do /*0x5a3272*/
              v39 = Random::Gaussian((double *)&g_TileSystemInit) * v36 + v38; /*0x5a3265*/
            while ( v39 < v32 ); /*0x5a3272*/
          }
          while ( v39 > v24 ); /*0x5a3281*/
          v40 = v39 + *((double *)v5 + 2); /*0x5a328a*/
          *((double *)v5 + 2) = v40; /*0x5a328e*/
          v25 = -2.0 - *((double *)v5 + 1); /*0x5a329a*/
          v33 = 2.0 - *((double *)v5 + 1); /*0x5a32a7*/
          if ( v30 >= v25 ) /*0x5a32b8*/
          {
            if ( v30 <= v33 ) /*0x5a32cd*/
              v16 = v30; /*0x5a32d5*/
            else
              v16 = v33; /*0x5a32cf*/
          }
          else
          {
            v16 = v25; /*0x5a32ba*/
          }
          v42 = v16; /*0x5a32e1*/
          v31 = v40; /*0x5a32e5*/
          if ( v16 - v40 > v33 || v40 + v16 < v25 ) /*0x5a330f*/
          {
            v31 = (v33 - v25) * 0.5; /*0x5a3323*/
            v42 = v31 + v25; /*0x5a332b*/
          }
          do /*0x5a335d*/
          {
            do /*0x5a334e*/
              v41 = Random::Gaussian((double *)&g_TileSystemInit) * v31 + v42; /*0x5a3341*/
            while ( v41 < v25 ); /*0x5a334e*/
          }
          while ( v41 > v33 ); /*0x5a335d*/
          v2 = v28; /*0x5a3366*/
          v3 = 0; /*0x5a336a*/
          *((double *)v5 + 1) = v41 + *((double *)v5 + 1); /*0x5a336c*/
        }
        v4 = v26 + 80; /*0x5a3377*/
        v17 = v27 == 1; /*0x5a337a*/
        v26 += 80; /*0x5a337b*/
        --v27; /*0x5a337f*/
      }
      while ( !v17 ); /*0x5a3383*/
      if ( v2 > 0 ) /*0x5a338b*/
      {
        while ( 1 ) /*0x5a339c*/
        {
          v18 = (double *)((char *)g_MapTileArray + v3 + 8); /*0x5a339c*/
          v20 = *v18; /*0x5a33a0*/
          if ( v21 ) /*0x5a33a7*/
            break; /*0x5a33a7*/
          if ( v20 > 0.0 ) /*0x5a33c9*/
          {
            v22 = (double)(int)Math::RoundToInt(*v18 + 0.5); /*0x5a33dc*/
            goto LABEL_52; /*0x5a33dc*/
          }
LABEL_53:
          v3 += 80; /*0x5a33e2*/
          if ( !--v2 ) /*0x5a33e6*/
            return; /*0x5a33e6*/
        }
        v22 = (double)(int)Math::RoundToInt(v20 - 0.5); /*0x5a33b8*/
LABEL_52:
        *v18 = v22; /*0x5a33e0*/
        goto LABEL_53; /*0x5a33e0*/
      }
    }
  }
}


// ==== 0x005A33F0  ObjectClass::GenerateTerrainHeightMapInternal  this=ObjectClass  sig=csp ====
int GenerateTerrainHeightMapInternal()
{
  int result; // eax
  int *i; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // esi
  int j; // ebp
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // [esp+4h] [ebp-Ch] BYREF
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a33f9*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3403*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x5a340c*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      v2 = g_MapCellHeight_Value; /*0x5a3424*/
      v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        v4 = v3 & 7; /*0x5a3431*/
        v16 = i[9]; /*0x5a3434*/
        v5 = LOWORD(MEMORY[0x89F688][v4]) + v16; /*0x5a3438*/
        LOWORD(v4) = HIWORD(MEMORY[0x89F688][v4]); /*0x5a3447*/
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = HIWORD(v16) + v4; /*0x5a3455*/
        v16 = v17; /*0x5a345e*/
        v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= g_MapCellCount ) /*0x5a3483*/
        {
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a348f*/
          if ( Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            v8 = 80 * ((__int16)v16 + unk_89C2DC * SHIWORD(v16)); /*0x5a34cb*/
            *(_DWORD *)((char *)g_MapTileArray + v8 + 8) = 0; /*0x5a34ce*/
            *(_DWORD *)((char *)g_MapTileArray + v8 + 12) = 1071644672; /*0x5a34dc*/
            *((_BYTE *)g_MapTileArray + 80 * (__int16)v16 + 80 * unk_89C2DC * SHIWORD(v16) + 69) = 1; /*0x5a3503*/
            goto LABEL_24; /*0x5a3508*/
          }
          v2 = g_MapCellHeight_Value; /*0x5a349f*/
        }
        if ( ++v3 >= 8 ) /*0x5a34a9*/
          goto LABEL_24; /*0x5a34a9*/
      }
    }
    if ( CellLand::IsBuildable((int)i) ) /*0x5a350f*/
    {
      v9 = g_MapCellHeight_Value; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        v11 = j & 7; /*0x5a3529*/
        v16 = i[9]; /*0x5a352c*/
        v12 = HIWORD(v16) + HIWORD(MEMORY[0x89F688][v11]); /*0x5a3543*/
        LOWORD(v18) = v16 + LOWORD(MEMORY[0x89F688][v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        v16 = v18; /*0x5a3559*/
        v13 = v12; /*0x5a3560*/
        v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= g_MapCellCount ) /*0x5a357e*/
        {
          v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a358a*/
          if ( Cell::IsEmpty(v15) ) /*0x5a3591*/
          {
            *((_BYTE *)g_MapTileArray + 80 * (__int16)v16 + 80 * unk_89C2DC * SHIWORD(v16) + 69) = 1; /*0x5a35ca*/
            break; /*0x5a35ca*/
          }
          v9 = g_MapCellHeight_Value; /*0x5a359a*/
        }
      }
    }
LABEL_24:
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/
}


// ==== 0x005A35F0  ObjectClass::GenerateTerrainHeightMap  this=ObjectClass  sig=csp ====
int __thiscall GenerateTerrainHeightMap(int *this)
{
  int v2; // esi
  __int16 *v3; // esi
  char *v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  bool v10; // zf
  int v11; // esi
  int BitLCW; // edi
  int result; // eax
  char v14; // al
  char v15; // bl
  int v16; // ebp
  _WORD *v17; // esi
  int v18; // eax
  __int16 v19; // cx
  _WORD *v20; // esi
  int v21; // ebp
  __int16 v22; // dx
  _BYTE *v23; // eax
  char v24; // dl
  char v25; // [esp+13h] [ebp-35h]
  int v26; // [esp+14h] [ebp-34h]
  int v27; // [esp+14h] [ebp-34h]
  int v28; // [esp+18h] [ebp-30h]
  int v29; // [esp+18h] [ebp-30h]
  int v30; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+1Ch] [ebp-2Ch]
  double v32; // [esp+20h] [ebp-28h] BYREF
  _DWORD v33[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v34[4]; // [esp+38h] [ebp-10h]

  GenerateTerrainHeightMapInternal(); /*0x5a35f9*/
  SmoothTerrainMap(this); /*0x5a3600*/
  InitSlaveManagerGrid(); /*0x5a3605*/
  if ( unk_89C2DC * unk_89C2DC > 0 )
  {
    v2 = 0; /*0x5a361a*/
    v28 = unk_89C2DC * unk_89C2DC; /*0x5a361c*/
    v26 = 0; /*0x5a3620*/
    do
    {
      v3 = (__int16 *)((char *)g_MapTileArray + v2); /*0x5a3629*/
      if ( *v3 || v3[1] )
      {
        v4 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v3); /*0x5a3643*/
        v32 = (double)v4[283] + *((double *)v3 + 1); /*0x5a3659*/
        v30 = Map_Get_6B4100(v4); /*0x5a3662*/
        v5 = Math::RoundToInt(v32 - (double)v30); /*0x5a3673*/
        v6 = abs32(v5); /*0x5a3678*/
        v7 = v5 >= 0 ? 1 : -1;
        if ( v6 > 0 ) /*0x5a368a*/
        {
          v8 = v6; /*0x5a368c*/
          do /*0x5a36a5*/
          {
            v9 = Map_Helper_6B4240(v4, v7); /*0x5a3692*/
            ComputeTerrainFlowField(*(_DWORD *)v3, v9); /*0x5a369f*/
            --v8; /*0x5a36a4*/
          }
          while ( v8 ); /*0x5a36a5*/
        }
      }
      v2 = v26 + 80; /*0x5a36af*/
      v10 = v28 == 1; /*0x5a36b2*/
      v26 += 80; /*0x5a36b3*/
      --v28; /*0x5a36b7*/
    }
    while ( !v10 );
  }
  ProcessSlaveManagerTerrain(); /*0x5a36c1*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a36cb*/
  v11 = 0; /*0x5a36da*/
  BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a36dc*/
  v33[0] = 0; /*0x5a36f1*/
  result = 65537; /*0x5a370d*/
  v33[1] = 1; /*0x5a3711*/
  v33[2] = 65537; /*0x5a3725*/
  v33[3] = 0x10000; /*0x5a3729*/
  v34[0] = 11; /*0x5a372d*/
  v34[1] = 12; /*0x5a3735*/
  v34[2] = 9; /*0x5a373d*/
  v34[3] = 10; /*0x5a3745*/
  if ( BitLCW ) /*0x5a374d*/
  {
    while ( 1 ) /*0x5a375a*/
    {
      v14 = *(_BYTE *)(BitLCW + 284); /*0x5a375a*/
      v15 = 0; /*0x5a3760*/
      v25 = 1; /*0x5a3764*/
      if ( v14 == 5 ) /*0x5a3769*/
        break; /*0x5a3769*/
      if ( v14 == 11 ) /*0x5a37c9*/
      {
        v15 = 1; /*0x5a37cf*/
        do /*0x5a3823*/
        {
          v19 = HIWORD(v33[v11]); /*0x5a37d4*/
          LODWORD(v32) = *(_DWORD *)(BitLCW + 36); /*0x5a37d9*/
          LOWORD(v27) = LOWORD(v33[v11]) + LOWORD(v32); /*0x5a37e7*/
          HIWORD(v27) = WORD1(v32) + v19; /*0x5a37f0*/
          LODWORD(v32) = v27; /*0x5a37ff*/
          if ( *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 284) != v34[v11] ) /*0x5a3816*/
            v25 = 0; /*0x5a3818*/
          ++v11; /*0x5a381d*/
        }
        while ( v11 < 4 ); /*0x5a3823*/
        goto LABEL_21; /*0x5a3823*/
      }
LABEL_24:
      result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3893*/
      BitLCW = result; /*0x5a389d*/
      v11 = 0; /*0x5a389f*/
      if ( !result ) /*0x5a38a3*/
        return result; /*0x5a38a3*/
    }
    v16 = 0; /*0x5a376b*/
    v17 = v33; /*0x5a376d*/
    do /*0x5a37c3*/
    {
      v18 = *(_DWORD *)(BitLCW + 36); /*0x5a3771*/
      LOWORD(v29) = v18 + *v17; /*0x5a3787*/
      HIWORD(v29) = HIWORD(v18) + v17[1]; /*0x5a3790*/
      LODWORD(v32) = v29; /*0x5a379f*/
      if ( *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 284) != v16 + 5 ) /*0x5a37b5*/
        v25 = 0; /*0x5a37b7*/
      ++v16; /*0x5a37bc*/
      v17 += 2; /*0x5a37bd*/
    }
    while ( v16 < 4 ); /*0x5a37c3*/
LABEL_21:
    if ( v25 ) /*0x5a382b*/
    {
      v20 = v33; /*0x5a382d*/
      v21 = 4; /*0x5a3831*/
      do /*0x5a3891*/
      {
        v22 = v20[1]; /*0x5a3839*/
        LODWORD(v32) = *(_DWORD *)(BitLCW + 36); /*0x5a383d*/
        LOWORD(v31) = *v20 + LOWORD(v32); /*0x5a384d*/
        HIWORD(v31) = WORD1(v32) + v22; /*0x5a3853*/
        LODWORD(v32) = v31; /*0x5a3861*/
        v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32); /*0x5a3865*/
        v24 = v23[283]; /*0x5a386a*/
        v20 += 2; /*0x5a3870*/
        --v21; /*0x5a3875*/
        *((_DWORD *)v23 + 14) = 0xFFFF; /*0x5a3876*/
        v23[282] = 0; /*0x5a387d*/
        v23[284] = 0; /*0x5a3884*/
        v23[283] = v15 + v24; /*0x5a388b*/
      }
      while ( v21 ); /*0x5a3891*/
    }
    goto LABEL_24; /*0x5a3891*/
  }
  return result; /*0x5a38a9*/
}


// ==== 0x005A38C0  CellClass::Reset  this=CellClass  sig=csp ====
int __thiscall sub_5A38C0(int *this)
{
  int result; // eax
  int *v3; // ebx
  char *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int j; // [esp+14h] [ebp-Ch]
  double i; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a38d4*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a38de*/
  v3 = (int *)result; /*0x5a38e6*/
  for ( i = (double)this->q017 * 0.01; result; v3 = (int *)result ) /*0x5a38f4*/
  {
    v4 = (char *)g_MapTileArray + 80 * (__int16)v3[9] + 80 * unk_89C2DC * (__int16)HIWORD(v3[9]); /*0x5a3920*/
    if ( CellClass::IsTerrainType(v3) ) /*0x5a3922*/
    {
      v5 = v3[9]; /*0x5a392f*/
      v6 = (__int16)v5 - 2; /*0x5a3938*/
      for ( j = v6; v6 < (__int16)v5 + 3; j = v6 ) /*0x5a3944*/
      {
        v7 = SHIWORD(v5) - 2; /*0x5a3957*/
        if ( v7 < SHIWORD(v5) + 3 ) /*0x5a3964*/
        {
          v8 = (__int16)v6; /*0x5a3966*/
          do /*0x5a39d7*/
          {
            v9 = (__int16)v7 + v8; /*0x5a3972*/
            if ( v9 > g_MapCellHeight_Value /*0x5a3997*/
              && v8 - (__int16)v7 < g_MapCellHeight_Value
              && (__int16)v7 - v8 < g_MapCellHeight_Value
              && v9 <= g_MapCellCount )
            {
              *((_DWORD *)v4 + 10) = 1202590843; /*0x5a39a4*/
              *((_DWORD *)v4 + 11) = 1064598241; /*0x5a39a7*/
              *((_DWORD *)v4 + 8) = 0; /*0x5a39b6*/
              *((_DWORD *)v4 + 9) = 0; /*0x5a39b9*/
              *((double *)v4 + 3) = 0.02 * i * 10.0; /*0x5a39c2*/
            }
            ++v7; /*0x5a39c8*/
          }
          while ( v7 < (__int16)HIWORD(v3[9]) + 3 ); /*0x5a39d7*/
          v6 = j; /*0x5a39d9*/
        }
        v5 = v3[9]; /*0x5a39dd*/
        ++v6; /*0x5a39e0*/
      }
    }
    else if ( *((double *)v4 + 5) == 0.0 ) /*0x5a3a03*/
    {
      *((_DWORD *)v4 + 10) = 1202590843; /*0x5a3a10*/
      *((_DWORD *)v4 + 11) = 1064598241; /*0x5a3a13*/
      *((double *)v4 + 3) = 0.02 * i; /*0x5a3a20*/
      *((_DWORD *)v4 + 8) = 1202590843; /*0x5a3a2f*/
      *((_DWORD *)v4 + 9) = 1064598241; /*0x5a3a32*/
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3a3a*/
  }
  return result; /*0x5a3a49*/
}


// ==== 0x005A3AE0  RandomMap::PlaceResources  this=RandomMap  sig=csp ====
int __thiscall RandomMap_PlaceResources(int *this)
{
  int *v1; // esi
  int i; // eax
  int Bit; // edi
  double *v4; // ebp
  int v5; // esi
  int j; // eax
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // esi
  _WORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  void *v13; // eax
  int v14; // eax
  bool v15; // cc
  unsigned int v16; // esi
  unsigned int v17; // eax
  signed int v18; // ebp
  int result; // eax
  unsigned int v20; // edi
  unsigned int v21; // esi
  _WORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // [esp-Ch] [ebp-74h]
  int v29; // [esp-Ch] [ebp-74h]
  int v30; // [esp-Ch] [ebp-74h]
  int v31; // [esp-Ch] [ebp-74h]
  double v32; // [esp-8h] [ebp-70h]
  int v33; // [esp+14h] [ebp-54h]
  int v34; // [esp+14h] [ebp-54h]
  int v35; // [esp+14h] [ebp-54h]
  signed int v37; // [esp+18h] [ebp-50h]
  int v38; // [esp+1Ch] [ebp-4Ch] BYREF
  double v39; // [esp+20h] [ebp-48h]
  int v40; // [esp+2Ch] [ebp-3Ch] BYREF
  double v41; // [esp+30h] [ebp-38h] BYREF
  double v42; // [esp+38h] [ebp-30h] BYREF
  double v43; // [esp+40h] [ebp-28h]
  double v44; // [esp+48h] [ebp-20h]
  __int64 v45; // [esp+50h] [ebp-18h]
  __int64 v46; // [esp+58h] [ebp-10h]
  __int64 v47; // [esp+60h] [ebp-8h]

  v1 = this; /*0x5a3aec*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a3b0b*/
  {
    LODWORD(v39) = *(_DWORD *)(i + 36); /*0x5a3b10*/
    *((_DWORD *)g_MapTileArray + 20 * SLOWORD(v39) + 20 * unk_89C2DC * SWORD1(v39) + 15) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a3b47*/
  Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b62*/
    v38 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3b82*/
  }
  while ( (unsigned int)v38 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b92*/
    v33 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3bb2*/
  }
  while ( (unsigned int)v33 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3bc2*/
    v40 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3be2*/
  }
  while ( (unsigned int)v40 > 0x28 ); /*0x5a3be6*/
  if ( Bit ) /*0x5a3bea*/
  {
    do /*0x5a3f0a*/
    {
      LODWORD(v39) = *(_DWORD *)(Bit + 36); /*0x5a3bf9*/
      v4 = (double *)((char *)g_MapTileArray + 80 * SLOWORD(v39) + 80 * unk_89C2DC * SWORD1(v39)); /*0x5a3c16*/
      if ( Cell::IsEmpty((_DWORD *)Bit) /*0x5a3c47*/
        && !*(_BYTE *)(Bit + 284)
        && *(_DWORD *)(Bit + 68) == -1
        && !*(_DWORD *)(Bit + 228)
        && !*((_BYTE *)v4 + 69) )
      {
        LODWORD(v39) = *(_DWORD *)(Bit + 36); /*0x5a3c58*/
        v5 = SLOWORD(v39) + (SWORD1(v39) << 9); /*0x5a3c67*/
        v45 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3c6e*/
        if ( (double)v45 * 2.328306437080797e-10 >= v4[3] ) /*0x5a3c88*/
        {
          v46 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3d49*/
          if ( (double)v46 * 2.328306437080797e-10 >= v4[5] ) /*0x5a3d63*/
          {
            v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3e25*/
            if ( (double)v47 * 2.328306437080797e-10 < v4[4] ) /*0x5a3e3f*/
            {
              v44 = 20.0; /*0x5a3e49*/
              v42 = (double)v40; /*0x5a3e59*/
              if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3e89*/
              {
                v44 = 38.0; /*0x5a3e8b*/
                v42 = 42.0; /*0x5a3e9b*/
              }
              do /*0x5a3edd*/
              {
                do /*0x5a3ecc*/
                  v39 = Random::Gaussian((double *)&g_TileSystemInit) * v44 + v42; /*0x5a3ebd*/
                while ( v39 < 4.0 ); /*0x5a3ecc*/
              }
              while ( v39 > 80.0 ); /*0x5a3edd*/
              v30 = Math::RoundToInt(v39); /*0x5a3ef0*/
              FloodFillPathfinding(Bit, unk_AA0E18, v30, v5, 0); /*0x5a3ef7*/
            }
          }
          else
          {
            v43 = 20.0; /*0x5a3d6d*/
            v42 = (double)v33; /*0x5a3d7d*/
            if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3dad*/
            {
              v43 = 38.0; /*0x5a3daf*/
              v42 = 42.0; /*0x5a3dbf*/
            }
            do /*0x5a3e01*/
            {
              do /*0x5a3df0*/
                v39 = Random::Gaussian((double *)&g_TileSystemInit) * v43 + v42; /*0x5a3de1*/
              while ( v39 < 4.0 ); /*0x5a3df0*/
            }
            while ( v39 > 80.0 ); /*0x5a3e01*/
            v29 = Math::RoundToInt(v39); /*0x5a3e14*/
            FloodFillPathfinding(Bit, dword_ABB104, v29, v5, 0); /*0x5a3e16*/
          }
        }
        else
        {
          v41 = 20.0; /*0x5a3c92*/
          v42 = (double)v38; /*0x5a3ca2*/
          if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3cd2*/
          {
            v41 = 38.0; /*0x5a3cd4*/
            v42 = 42.0; /*0x5a3ce4*/
          }
          do /*0x5a3d26*/
          {
            do /*0x5a3d15*/
              v39 = Random::Gaussian((double *)&g_TileSystemInit) * v41 + v42; /*0x5a3d06*/
            while ( v39 < 4.0 ); /*0x5a3d15*/
          }
          while ( v39 > 80.0 ); /*0x5a3d26*/
          v28 = Math::RoundToInt(v39); /*0x5a3d33*/
          FloodFillPathfinding(Bit, dword_ABC2B8, v28, v5, 0); /*0x5a3d3a*/
        }
      }
      Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3f06*/
    }
    while ( Bit ); /*0x5a3f0a*/
    v1 = this; /*0x5a3f10*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a3f19*/
  for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a3f2a*/
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  LODWORD(v39) = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a3f68*/
  v34 = 0; /*0x5a3f6c*/
  if ( SLODWORD(v39) > 0 ) /*0x5a3f70*/
  {
    do /*0x5a40bd*/
    {
      if ( v34 >= 100 ) /*0x5a3f7b*/
        break; /*0x5a3f7b*/
      v7 = 0; /*0x5a3f81*/
      do /*0x5a3fe9*/
      {
        v8 = unk_89C2DC * unk_89C2DC - 1; /*0x5a3f8b*/
        do /*0x5a3fb3*/
        {
          v9 = Range_RandomInt(0, v8); /*0x5a3f9d*/
          v10 = CellStruct::Set(&v41, 0, 0); /*0x5a3f9f*/
        }
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v9, v10) ); /*0x5a3fb3*/
        ++v7; /*0x5a3fc8*/
        v38 = *((_DWORD *)g_MapTileArray + 20 * v9); /*0x5a3fd2*/
        if ( v7 > 200 ) /*0x5a3fd6*/
        {
          v12 = *(_DWORD *)CellStruct::Set(&v42, 0, 0); /*0x5a3fff*/
          goto LABEL_48; /*0x5a4001*/
        }
        v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v38); /*0x5a3fe2*/
      }
      while ( !Cell::IsEmpty(v11) ); /*0x5a3fe9*/
      v12 = v38; /*0x5a4003*/
LABEL_48:
      v40 = v12; /*0x5a4007*/
      do /*0x5a4041*/
      {
        do /*0x5a4030*/
          v44 = Random::Gaussian((double *)&g_TileSystemInit) * 0.1 + 0.2; /*0x5a4021*/
        while ( v44 < 0.05 ); /*0x5a4030*/
      }
      while ( v44 > 0.4 ); /*0x5a4041*/
      do /*0x5a4079*/
      {
        do /*0x5a4068*/
          v43 = Random::Gaussian((double *)&g_TileSystemInit) * 10.0 + 25.0; /*0x5a4059*/
        while ( v43 < 10.0 ); /*0x5a4068*/
      }
      while ( v43 > 35.0 ); /*0x5a4079*/
      v32 = v44; /*0x5a4088*/
      v31 = Math::RoundToInt(v43); /*0x5a4092*/
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x5a4099*/
      v14 = ScatterTerrainTrees((int)v13, v31, v32); /*0x5a40a3*/
      v15 = LODWORD(v39) - v14 <= 0; /*0x5a40b3*/
      LODWORD(v39) -= v14; /*0x5a40b5*/
      ++v34; /*0x5a40b9*/
    }
    while ( !v15 ); /*0x5a40bd*/
  }
  v16 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
  v47 = v16 + 1; /*0x5a40e4*/
  *(double *)&v46 = (double)v47; /*0x5a40ec*/
  do /*0x5a4119*/
  {
    v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5a40fa*/
    v17 = Math::RoundToInt((double)v47 * *(double *)&v46 * 2.328306437080797e-10); /*0x5a4110*/
    v18 = v17; /*0x5a4115*/
  }
  while ( v17 > v16 ); /*0x5a4119*/
  result = 5 * v17; /*0x5a411b*/
  v37 = 0; /*0x5a411f*/
  v35 = 0; /*0x5a4125*/
  if ( 5 * v18 > 0 ) /*0x5a4129*/
  {
    while ( 1 ) /*0x5a412f*/
    {
      if ( v37 >= v18 ) /*0x5a4133*/
        return result; /*0x5a4133*/
      v20 = unk_89C2DC * unk_89C2DC - 1; /*0x5a4141*/
      do /*0x5a419c*/
      {
        v47 = v20 + 1; /*0x5a414b*/
        v43 = (double)v47; /*0x5a4153*/
        do /*0x5a4180*/
        {
          v46 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4161*/
          v21 = Math::RoundToInt((double)v46 * v43 * 2.328306437080797e-10); /*0x5a417c*/
        }
        while ( v21 > v20 ); /*0x5a4180*/
        v22 = CellStruct::Set(&v42, 0, 0); /*0x5a4188*/
      }
      while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v21, v22) ); /*0x5a419c*/
      v40 = *((_DWORD *)g_MapTileArray + 20 * v21); /*0x5a41be*/
      v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x5a41c2*/
      v24 = (int)v23; /*0x5a41c7*/
      if ( v23[17] == -1 ) /*0x5a41cd*/
        break; /*0x5a41cd*/
LABEL_72:
      result = ++v35; /*0x5a4262*/
      if ( v35 >= 5 * v18 ) /*0x5a4271*/
        return result; /*0x5a4271*/
    }
    if ( (unsigned __int8)RandomMap::Check(v23) ) /*0x5a41d5*/
    {
      do /*0x5a4202*/
      {
        v45 = (unsigned int)Random::State(&g_Randomizer); /*0x5a41e8*/
        v25 = Math::RoundToInt((double)v45 * 0.000000001164153218540399); /*0x5a41fa*/
      }
      while ( v25 > 4 ); /*0x5a4202*/
      v26 = v25 + 168; /*0x5a4204*/
    }
    else
    {
      if ( !Cell::IsEmpty((_DWORD *)v24) && !Cell::IsShore((int *)v24) ) /*0x5a421f*/
        goto LABEL_71; /*0x5a421f*/
      do /*0x5a4245*/
      {
        *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a422b*/
        v27 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000001164153218540399); /*0x5a423d*/
      }
      while ( v27 > 4 ); /*0x5a4245*/
      v26 = v27 + 173; /*0x5a4247*/
    }
    *(_DWORD *)(v24 + 68) = v26; /*0x5a424c*/
LABEL_71:
    *(_BYTE *)(v24 + 286) = 0; /*0x5a424f*/
    House::AnnounceUpgrade(v24, -1); /*0x5a4259*/
    ++v37; /*0x5a425e*/
    goto LABEL_72; /*0x5a425e*/
  }
  return result; /*0x5a4277*/
}


// ==== 0x005A4280  RandomMap::GenerateRandomMapTerrain  this=RandomMap  sig=csp ====
int __thiscall GenerateRandomMapTerrain(int *this)
{
  int *v1; // edi
  int i; // eax
  int BitLCW; // esi
  double *v4; // ebp
  int v5; // eax
  int j; // eax
  int result; // eax
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // esi
  _WORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  void *v14; // eax
  bool v15; // cc
  int v16; // [esp-Ch] [ebp-5Ch]
  double v17; // [esp-8h] [ebp-58h]
  int v19; // [esp+18h] [ebp-38h]
  int v20; // [esp+20h] [ebp-30h] BYREF
  int v21; // [esp+24h] [ebp-2Ch]
  int v22; // [esp+28h] [ebp-28h] BYREF
  __int16 v23; // [esp+2Ch] [ebp-24h] BYREF
  double v24; // [esp+30h] [ebp-20h]
  double v25; // [esp+38h] [ebp-18h]
  __int64 v26; // [esp+40h] [ebp-10h]
  __int64 v27; // [esp+48h] [ebp-8h]

  v1 = this; /*0x5a428d*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a42ab*/
  {
    v21 = *(_DWORD *)(i + 36); /*0x5a42b0*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v21 + 20 * unk_89C2DC * SHIWORD(v21) + 15) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a42e7*/
  BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a42f6*/
  if ( BitLCW ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v21 = *(_DWORD *)(BitLCW + 36); /*0x5a4309*/
      v4 = (double *)((char *)g_MapTileArray + 80 * (__int16)v21 + 80 * unk_89C2DC * SHIWORD(v21)); /*0x5a4326*/
      if ( Cell::IsEmpty((_DWORD *)BitLCW) && !*(_BYTE *)(BitLCW + 284) && !*((_BYTE *)v4 + 69) ) /*0x5a4341*/
      {
        v21 = *(_DWORD *)(BitLCW + 36); /*0x5a4352*/
        *(_QWORD *)&v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4368*/
        if ( (double)*(__int64 *)&v25 * 2.328306437080797e-10 < v4[5] ) /*0x5a4382*/
        {
          do /*0x5a43ba*/
          {
            do /*0x5a43a9*/
              v24 = Random::Gaussian((double *)&g_TileSystemInit) * 15.0 + 20.0; /*0x5a439a*/
            while ( v24 < 4.0 ); /*0x5a43a9*/
          }
          while ( v24 > 60.0 ); /*0x5a43ba*/
          v5 = Math::RoundToInt(v24); /*0x5a43c2*/
          FloodFillPathfinding(BitLCW, dword_ABC2B8, v5, (__int16)v21 + (SHIWORD(v21) << 9), 0); /*0x5a43d3*/
        }
      }
      BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a43e2*/
    }
    while ( BitLCW ); /*0x5a43e6*/
    v1 = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a43f5*/
  for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a4406*/
    CellClass::DetermineTileType(j); /*0x5a440a*/
  result = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a443d*/
  v21 = result; /*0x5a4444*/
  v19 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
    do /*0x5a45cf*/
    {
      if ( v19 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      v8 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
        v9 = unk_89C2DC * unk_89C2DC - 1; /*0x5a4467*/
        do /*0x5a44c2*/
        {
          v26 = v9 + 1; /*0x5a4471*/
          v25 = (double)v26; /*0x5a4479*/
          do /*0x5a44a6*/
          {
            v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4487*/
            v10 = Math::RoundToInt((double)v27 * v25 * 2.328306437080797e-10); /*0x5a44a2*/
          }
          while ( v10 > v9 ); /*0x5a44a6*/
          v11 = CellStruct::Set(&v23, 0, 0); /*0x5a44ae*/
        }
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v10, v11) ); /*0x5a44c2*/
        ++v8; /*0x5a44d6*/
        v20 = *((_DWORD *)g_MapTileArray + 20 * v10); /*0x5a44e0*/
        if ( v8 > 200 ) /*0x5a44e4*/
        {
          v13 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x5a44f0*/
      }
      while ( !Cell::IsEmpty(v12) ); /*0x5a44f7*/
      v13 = v20; /*0x5a4515*/
LABEL_27:
      v22 = v13; /*0x5a4519*/
      do /*0x5a4553*/
      {
        do /*0x5a4542*/
          v24 = Random::Gaussian((double *)&g_TileSystemInit) * 0.1 + 0.2; /*0x5a4533*/
        while ( v24 < 0.05 ); /*0x5a4542*/
      }
      while ( v24 > 0.4 ); /*0x5a4553*/
      do /*0x5a458b*/
      {
        do /*0x5a457a*/
          v25 = Random::Gaussian((double *)&g_TileSystemInit) * 10.0 + 25.0; /*0x5a456b*/
        while ( v25 < 10.0 ); /*0x5a457a*/
      }
      while ( v25 > 35.0 ); /*0x5a458b*/
      v17 = v24; /*0x5a459a*/
      v16 = Math::RoundToInt(v25); /*0x5a45a4*/
      v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v22); /*0x5a45ab*/
      result = ScatterTerrainTrees((int)v14, v16, v17); /*0x5a45b5*/
      v15 = v21 - result <= 0; /*0x5a45c5*/
      v21 -= result; /*0x5a45c7*/
      ++v19; /*0x5a45cb*/
    }
    while ( !v15 ); /*0x5a45cf*/
  }
  return result; /*0x5a45d5*/
}


// ==== 0x005A45E0  ScatterTerrainTrees  this=-  sig=csp ====
int __stdcall ScatterTerrainTrees(IUnknown *aP0, int a2, double a3)
{
  int v3; // edi
  AbstractClass *v4; // eax
  AbstractClass *v5; // ebx
  int v6; // eax
  AbstractClass *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int i; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  __int16 *v17; // eax
  int v18; // eax
  __int16 *v19; // edi
  Random *v20; // ebx
  unsigned int v21; // eax
  TerrainClass *v22; // edi
  int v23; // eax
  char v24; // al
  int v25; // eax
  __int16 v26; // dx
  int v27; // ecx
  int v28; // eax
  char *v29; // edi
  TerrainClass **v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  unsigned int v33; // edx
  int v34; // ebx
  unsigned int v35; // eax
  int v36; // eax
  __int16 *v37; // edi
  __int16 *v39; // [esp+18h] [ebp-58h]
  AbstractClass *v40; // [esp+1Ch] [ebp-54h]
  int v41; // [esp+20h] [ebp-50h]
  int v42; // [esp+24h] [ebp-4Ch]
  TerrainClass *v43; // [esp+2Ch] [ebp-44h]
  TerrainClass **v44; // [esp+30h] [ebp-40h]
  double v45; // [esp+30h] [ebp-40h]
  float v46; // [esp+38h] [ebp-38h]
  int v47; // [esp+38h] [ebp-38h]
  int Random_field_0x04; // [esp+3Ch] [ebp-34h] BYREF
  float v49; // [esp+40h] [ebp-30h]
  __int64 v50; // [esp+44h] [ebp-2Ch]
  __int64 v51; // [esp+4Ch] [ebp-24h]
  __int64 v52; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  v3 = 25 * a2; /*0x5a45f2*/
  v4 = (AbstractClass *)__2_YAPAXI_Z(200 * a2); /*0x5a4601*/
  if ( v4 ) /*0x5a460b*/
  {
    v5 = v4; /*0x5a4610*/
    LODWORD(v49) = v3 - 1; /*0x5a4612*/
    v40 = v4; /*0x5a4616*/
  }
  else
  {
    v40 = 0; /*0x5a461c*/
    v5 = 0; /*0x5a4624*/
  }
  v6 = __2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v7 = (AbstractClass *)v6; /*0x5a462f*/
  if ( v6 ) /*0x5a4636*/
  {
    *(_DWORD *)(v6 + 12) = 0; /*0x5a463f*/
    *(_DWORD *)(v6 + 16) = -1; /*0x5a4647*/
    *(_DWORD *)v6 = 0; /*0x5a464e*/
    *(_DWORD *)(v6 + 4) = v3; /*0x5a4654*/
    v8 = __2_YAPAXI_Z(100 * a2 + 4); /*0x5a4657*/
    v9 = *(_DWORD *)&v7->__pad_0[4]; /*0x5a465c*/
    *(_DWORD *)&v7->__pad_0[8] = v8; /*0x5a465f*/
    v10 = 0; /*0x5a4665*/
    if ( v9 >= 0 ) /*0x5a4669*/
    {
      do /*0x5a467c*/
      {
        ++v10; /*0x5a466e*/
        *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v10 - 4) = 0; /*0x5a466f*/
      }
      while ( v10 <= *(_DWORD *)&v7->__pad_0[4] ); /*0x5a467c*/
    }
  }
  else
  {
    v7 = 0; /*0x5a4680*/
  }
  for ( i = 0; i <= *(_DWORD *)v7->__pad_0; *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * i - 4) = 0 ) /*0x5a4688*/
    ++i; /*0x5a468d*/
  *(_DWORD *)v7->__pad_0 = 0; /*0x5a469f*/
  v41 = 1; /*0x5a46a5*/
  *(_DWORD *)v5->__pad_0 = aP0->field_24; /*0x5a46b0*/
  *(_DWORD *)&v5->__pad_0[4] = 0; /*0x5a46b2*/
  *((_BYTE *)g_MapTileArray + 80 * (__int16)aP0->field_24 + 80 * unk_89C2DC * (__int16)HIWORD(aP0->field_24) + 71) = 1; /*0x5a46dc*/
  v12 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a46e6*/
  v46 = *(float *)&v5->__pad_0[4]; /*0x5a46e9*/
  v13 = v12 >> 1; /*0x5a46f0*/
  if ( v12 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a46f4*/
  {
    if ( v12 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        v14 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a46fb*/
        v15 = *(_DWORD *)(v14 + 4 * v13); /*0x5a46fe*/
        if ( *(float *)(v15 + 4) <= (double)v46 ) /*0x5a470d*/
          break; /*0x5a470d*/
        *(_DWORD *)(v14 + 4 * v12) = v15; /*0x5a470f*/
        v12 = v13; /*0x5a4712*/
        v13 >>= 1; /*0x5a4714*/
      }
      while ( v12 > 1 ); /*0x5a4719*/
      v5 = v40; /*0x5a471b*/
      v3 = 25 * a2; /*0x5a471f*/
    }
    *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v12) = v5; /*0x5a4726*/
    v16 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a472b*/
    ++*(_DWORD *)v7->__pad_0; /*0x5a4731*/
    if ( (unsigned int)v5 > v16 ) /*0x5a4733*/
      *(_DWORD *)&v7->__pad_0[12] = v5; /*0x5a4735*/
    if ( (unsigned int)v5 < v7->uniqueId ) /*0x5a473b*/
      v7->uniqueId = (int)v5; /*0x5a473d*/
  }
  if ( *(_DWORD *)v7->__pad_0 ) /*0x5a4740*/
  {
    v18 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a474e*/
    v19 = *(__int16 **)(v18 + 4); /*0x5a4756*/
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 4 * *(_DWORD *)v7->__pad_0); /*0x5a4759*/
    *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * (*(_DWORD *)v7->__pad_0)--) = 0; /*0x5a4761*/
    Heap::SiftDown((int *)v7->__pad_0, 1); /*0x5a476f*/
    v39 = v19; /*0x5a4774*/
    v3 = 25 * a2; /*0x5a4778*/
    v17 = v39; /*0x5a477c*/
  }
  else
  {
    v17 = 0; /*0x5a4746*/
    v39 = 0; /*0x5a4748*/
  }
  v42 = 0; /*0x5a4783*/
  if ( a2 > 0 ) /*0x5a478d*/
  {
    while ( v17 && v41 < v3 ) /*0x5a479f*/
    {
      v20 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v17); /*0x5a47ba*/
      if ( Cell::IsEmpty(v20) /*0x5a47ec*/
        && !v20[14].Random_field_0x04
        && v20[4].Random_field_0x04 == -1
        && v20[14].Random_field_0x0C != 3 )
      {
        v50 = (unsigned int)Random::State(&g_Randomizer); /*0x5a47fc*/
        if ( (double)v50 * 2.328306437080797e-10 < a3 ) /*0x5a4816*/
        {
          do /*0x5a4848*/
          {
            v51 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4826*/
            v21 = Math::RoundToInt((double)v51 * 0.000000005820766092701993 + 1.0); /*0x5a483e*/
          }
          while ( v21 > 0x19 ); /*0x5a4848*/
          sprintf(Buffer, (ObjectClass *)&stru_82C090.__pad_0[12], (INIClass *)((int)v21 / 10)); /*0x5a486f*/
          v22 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
          if ( v22 ) /*0x5a4885*/
          {
            Random_field_0x04 = v20[2].Random_field_0x04; /*0x5a488e*/
            v23 = Terrain::LookupByName(Buffer); /*0x5a4892*/
            TerrainClass::Construct( /*0x5a48aa*/
              (void **)v22,
              *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v23),
              (TerrainClass *)&Random_field_0x04);
          }
          ++v42; /*0x5a48af*/
        }
      }
      v24 = 0; /*0x5a48bb*/
      v47 = 0; /*0x5a48c0*/
      v44 = (TerrainClass **)((char *)v40 + 8 * v41); /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        v25 = v24 & 7; /*0x5a48cc*/
        v26 = v39[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v25 + 162]; /*0x5a48de*/
        LOWORD(v25) = *v39 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v25 + 160]; /*0x5a48e5*/
        HIWORD(v43) = v26; /*0x5a48ee*/
        v27 = (__int16)v25; /*0x5a48f3*/
        LOWORD(v43) = v25; /*0x5a48f9*/
        v28 = v26 + (__int16)v25; /*0x5a48fe*/
        if ( v28 > g_MapCellHeight_Value /*0x5a492d*/
          && v27 - v26 < g_MapCellHeight_Value
          && v26 - v27 < g_MapCellHeight_Value
          && v28 <= g_MapCellCount )
        {
          v29 = (char *)g_MapTileArray + 80 * v27 + 80 * unk_89C2DC * v26; /*0x5a494a*/
          if ( !v29[71] && !v29[69] && v41 < 25 * a2 ) /*0x5a496c*/
          {
            v30 = v44; /*0x5a4972*/
            *v44 = v43; /*0x5a497d*/
            v45 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(((__int16)aP0->field_24 - v27) /*0x5a49b1*/
                                                                           * ((__int16)aP0->field_24 - v27)
                                                                           + ((__int16)HIWORD(aP0->field_24) - v26)
                                                                           * ((__int16)HIWORD(aP0->field_24) - v26))));
            v52 = (unsigned int)Random::State(&g_Randomizer); /*0x5a49c2*/
            ++v41; /*0x5a49dd*/
            *((float *)v30 + 1) = (double)v52 * 5.0 * 2.328306437080797e-10 + v45; /*0x5a49eb*/
            v29[71] = 1; /*0x5a49ee*/
            v31 = (unsigned int)v30; /*0x5a49f4*/
            v32 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a49f9*/
            v44 = v30 + 2; /*0x5a49fa*/
            v49 = *((float *)v30 + 1); /*0x5a4a03*/
            v33 = v32 >> 1; /*0x5a4a0a*/
            if ( v32 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a4a0e*/
            {
              for ( ; v32 > 1; v33 >>= 1 ) /*0x5a4a13*/
              {
                v34 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a15*/
                if ( *(float *)(*(_DWORD *)(v34 + 4 * v33) + 4) <= (double)v49 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(_DWORD *)(v34 + 4 * v32) = *(_DWORD *)(v34 + 4 * v33); /*0x5a4a2c*/
                v32 = v33; /*0x5a4a2f*/
              }
              *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v32) = v31; /*0x5a4a3b*/
              v35 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a4a40*/
              ++*(_DWORD *)v7->__pad_0; /*0x5a4a46*/
              if ( v31 > v35 ) /*0x5a4a48*/
                *(_DWORD *)&v7->__pad_0[12] = v31; /*0x5a4a4a*/
              if ( v31 < v7->uniqueId ) /*0x5a4a50*/
                v7->uniqueId = v31; /*0x5a4a52*/
            }
          }
        }
        v24 = ++v47; /*0x5a4a59*/
      }
      while ( v47 < 8 ); /*0x5a4a61*/
      if ( *(_DWORD *)v7->__pad_0 ) /*0x5a4a67*/
      {
        v36 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a73*/
        v37 = *(__int16 **)(v36 + 4); /*0x5a4a7b*/
        *(_DWORD *)(v36 + 4) = *(_DWORD *)(v36 + 4 * *(_DWORD *)v7->__pad_0); /*0x5a4a7e*/
        *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * (*(_DWORD *)v7->__pad_0)--) = 0; /*0x5a4a86*/
        Heap::SiftDown((int *)v7->__pad_0, 1); /*0x5a4a94*/
        v39 = v37; /*0x5a4a99*/
      }
      else
      {
        v39 = 0; /*0x5a4a6d*/
      }
      v5 = v40; /*0x5a4aa4*/
      if ( v42 >= a2 ) /*0x5a4aaa*/
        break; /*0x5a4aaa*/
      v3 = 25 * a2; /*0x5a4795*/
      v17 = v39; /*0x5a4799*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5a4ab1*/
  if ( v7 ) /*0x5a4abb*/
    Scalar::Dtor((void **)v7, 1); /*0x5a4ac1*/
  return v42; /*0x5a4aca*/
}


// ==== 0x005A4AE0  sub_5A4AE0  this=-  sig=csp ====
double __stdcall sub_5A4AE0(__int16 *a1, __int16 *a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a4afc*/
  v3 = a1[1] - a2[1]; /*0x5a4afe*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4b1d*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a4b4f*/
}


// ==== 0x005A4B60  FloodFillPathfinding  this=-  sig=csp ====
void __stdcall FloodFillPathfinding(Random *aP0, int a2, CellClass *aP2, int a4, char a5)
{
  int v5; // edi
  AbstractClass *v6; // eax
  AbstractClass *v7; // ebx
  int v8; // eax
  AbstractClass *v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  bool v14; // sf
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // eax
  __int16 *v20; // eax
  int v21; // eax
  AbstractClass *v22; // edi
  _DWORD *v23; // eax
  Random *v24; // edx
  char v25; // al
  float *v26; // edi
  Random *v27; // ebx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  unsigned int v31; // ebx
  float v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // edi
  AbstractClass *v38; // eax
  int v39; // [esp+14h] [ebp-34h] BYREF
  AbstractClass *v40; // [esp+18h] [ebp-30h]
  AbstractClass *v41; // [esp+1Ch] [ebp-2Ch]
  Random *v42; // [esp+20h] [ebp-28h]
  Random *v43; // [esp+24h] [ebp-24h]
  int Random_field_0x04; // [esp+28h] [ebp-20h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  double v46; // [esp+30h] [ebp-18h]
  float v47; // [esp+38h] [ebp-10h]
  int v48; // [esp+3Ch] [ebp-Ch] BYREF
  __int64 v49; // [esp+40h] [ebp-8h]

  v5 = 10 * (_DWORD)aP2; /*0x5a4b72*/
  v6 = (AbstractClass *)__2_YAPAXI_Z(80 * (_DWORD)aP2); /*0x5a4b7c*/
  if ( v6 ) /*0x5a4b86*/
  {
    v7 = v6; /*0x5a4b8b*/
    LODWORD(v47) = v5 - 1; /*0x5a4b8d*/
    v41 = v6; /*0x5a4b91*/
  }
  else
  {
    v41 = 0; /*0x5a4b97*/
    v7 = 0; /*0x5a4b9f*/
  }
  v8 = __2_YAPAXI_Z(0x14u); /*0x5a4ba5*/
  v9 = (AbstractClass *)v8; /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    *(_DWORD *)(v8 + 12) = 0; /*0x5a4bb5*/
    *(_DWORD *)v8 = 0; /*0x5a4bb8*/
    *(_DWORD *)(v8 + 16) = -1; /*0x5a4bc1*/
    *(_DWORD *)(v8 + 4) = v5; /*0x5a4bc9*/
    v10 = __2_YAPAXI_Z(40 * (_DWORD)aP2 + 4); /*0x5a4bcc*/
    v11 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4bd1*/
    *(_DWORD *)&v9->__pad_0[8] = v10; /*0x5a4bd4*/
    v12 = 0; /*0x5a4bda*/
    if ( v11 >= 0 ) /*0x5a4bde*/
    {
      do /*0x5a4bf1*/
      {
        ++v12; /*0x5a4be3*/
        *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v12 - 4) = 0; /*0x5a4be4*/
      }
      while ( v12 <= *(_DWORD *)&v9->__pad_0[4] ); /*0x5a4bf1*/
    }
  }
  else
  {
    v9 = 0; /*0x5a4bf7*/
  }
  v13 = 0; /*0x5a4bfb*/
  v14 = *(int *)v9->__pad_0 < 0; /*0x5a4bfd*/
  v45 = 0; /*0x5a4bff*/
  if ( !v14 ) /*0x5a4c03*/
  {
    do /*0x5a4c11*/
    {
      ++v13; /*0x5a4c08*/
      *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v13 - 4) = 0; /*0x5a4c09*/
    }
    while ( v13 <= *(_DWORD *)v9->__pad_0 ); /*0x5a4c11*/
  }
  *(_DWORD *)v9->__pad_0 = 0; /*0x5a4c16*/
  v42 = (Random *)1; /*0x5a4c18*/
  *(_DWORD *)v7->__pad_0 = aP0[2].Random_field_0x04; /*0x5a4c23*/
  *(_DWORD *)&v7->__pad_0[4] = 0; /*0x5a4c25*/
  Random_field_0x04 = aP0[2].Random_field_0x04; /*0x5a4c2b*/
  *((_DWORD *)g_MapTileArray + 20 * (__int16)Random_field_0x04 + 20 * unk_89C2DC * SHIWORD(Random_field_0x04) + 15) = a4; /*0x5a4c4f*/
  v15 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4c58*/
  Random_field_0x04 = *(int *)&v7->__pad_0[4]; /*0x5a4c5b*/
  v16 = v15 >> 1; /*0x5a4c62*/
  if ( v15 < *(_DWORD *)&v9->__pad_0[4] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        v17 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4c6d*/
        v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a4c70*/
        if ( *(float *)(v18 + 4) <= (double)*(float *)&Random_field_0x04 ) /*0x5a4c7f*/
          break; /*0x5a4c7f*/
        *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a4c81*/
        v15 = v16; /*0x5a4c84*/
        v16 >>= 1; /*0x5a4c86*/
      }
      while ( v15 > 1 ); /*0x5a4c8b*/
      v7 = v41; /*0x5a4c8d*/
    }
    *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v15) = v7; /*0x5a4c94*/
    v19 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4c99*/
    ++*(_DWORD *)v9->__pad_0; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      *(_DWORD *)&v9->__pad_0[12] = v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9->uniqueId ) /*0x5a4ca9*/
      v9->uniqueId = (int)v7; /*0x5a4cab*/
  }
  if ( *(_DWORD *)v9->__pad_0 ) /*0x5a4cae*/
  {
    v21 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4cbc*/
    v22 = *(AbstractClass **)(v21 + 4); /*0x5a4cc4*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *(_DWORD *)v9->__pad_0); /*0x5a4cc7*/
    *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * (*(_DWORD *)v9->__pad_0)--) = 0; /*0x5a4ccf*/
    Heap::SiftDown((int *)v9->__pad_0, 1); /*0x5a4cdd*/
    v40 = v22; /*0x5a4ce2*/
    v20 = (__int16 *)v22; /*0x5a4ce6*/
  }
  else
  {
    v20 = 0; /*0x5a4cb4*/
    v40 = 0; /*0x5a4cb6*/
  }
  if ( (int)aP2 > 0 ) /*0x5a4ced*/
  {
    while ( v20 ) /*0x5a4cfb*/
    {
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v20); /*0x5a4d07*/
      v24 = v42; /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      v25 = 0; /*0x5a4d16*/
      *(float *)&Random_field_0x04 = 0.0; /*0x5a4d18*/
      v26 = (float *)&v7->__pad_0[8 * (_DWORD)v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        v39 = CellStruct::Add(v40, (IUnknown *)&v48, (IUnknown *)(4 * (v25 & 7) + 9041544))->field_0; /*0x5a4d44*/
        v43 = (Random *)(SHIWORD(v39) + (__int16)v39); /*0x5a4d55*/
        if ( (int)v43 > g_MapCellHeight_Value /*0x5a4d81*/
          && (__int16)v39 - SHIWORD(v39) < g_MapCellHeight_Value
          && SHIWORD(v39) - (__int16)v39 < g_MapCellHeight_Value
          && (int)v43 <= g_MapCellCount )
        {
          v27 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v39); /*0x5a4d96*/
          v43 = v27; /*0x5a4d9a*/
          if ( Cell::IsEmpty(v27) /*0x5a4dbf*/
            || a5 && (CellClass::InBounds((int *)v27->__pad_0) || CellClass::InMapDataRange((int *)v27->__pad_0)) )
          {
            v28 = SHIWORD(v39); /*0x5a4dcc*/
            LODWORD(v46) = (__int16)v39; /*0x5a4de4*/
            if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v39 + 20 * unk_89C2DC * SHIWORD(v39) + 15) != a4 /*0x5a4e1a*/
              && !LOBYTE(v43[17].Random_field_0x0C)
              && v43[4].Random_field_0x04 == -1
              && !v43[14].Random_field_0x04 )
            {
              *(_DWORD *)v26 = v39; /*0x5a4e2f*/
              v43 = (Random *)aP0[2].Random_field_0x04; /*0x5a4e3b*/
              LODWORD(v46) = ((__int16)v43 - LODWORD(v46)) * ((__int16)v43 - LODWORD(v46)) /*0x5a4e57*/
                           + (SHIWORD(v43) - v28) * (SHIWORD(v43) - v28);
              v46 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(v46))); /*0x5a4e67*/
              v49 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4e78*/
              v29 = SHIWORD(v39); /*0x5a4e88*/
              v30 = (__int16)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((_DWORD *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * v29 + 15) = a4; /*0x5a4eba*/
              v31 = (unsigned int)v26; /*0x5a4ec3*/
              v42 = (Random *)((char *)v42 + 1); /*0x5a4ec5*/
              v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              v33 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              v34 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4ed6*/
              v35 = v33 >> 1; /*0x5a4edb*/
              v43 = (Random *)v31; /*0x5a4edf*/
              if ( v33 < v34 ) /*0x5a4ee3*/
              {
                for ( ; v33 > 1; v35 >>= 1 ) /*0x5a4ee8*/
                {
                  LODWORD(v46) = *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v35); /*0x5a4ef0*/
                  if ( *(float *)(LODWORD(v46) + 4) <= (double)v47 ) /*0x5a4f00*/
                    break; /*0x5a4f00*/
                  *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v33) = LODWORD(v46); /*0x5a4f09*/
                  v31 = (unsigned int)v43; /*0x5a4f0c*/
                  v33 = v35; /*0x5a4f10*/
                }
                *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v33) = v31; /*0x5a4f1c*/
                v36 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4f21*/
                ++*(_DWORD *)v9->__pad_0; /*0x5a4f27*/
                if ( v31 > v36 ) /*0x5a4f29*/
                  *(_DWORD *)&v9->__pad_0[12] = v31; /*0x5a4f2b*/
                if ( v31 < v9->uniqueId ) /*0x5a4f31*/
                  v9->uniqueId = v31; /*0x5a4f33*/
              }
            }
          }
        }
        v25 = ++Random_field_0x04; /*0x5a4f3a*/
      }
      while ( Random_field_0x04 < 8 ); /*0x5a4f42*/
      v37 = ++v45; /*0x5a4f4e*/
      v38 = (AbstractClass *)PriorityQueue::Pop((int *)v9->__pad_0); /*0x5a4f53*/
      v7 = v41; /*0x5a4f58*/
      v40 = v38; /*0x5a4f5c*/
      if ( v37 >= (int)aP2 ) /*0x5a4f63*/
        break; /*0x5a4f63*/
      v20 = (__int16 *)v40; /*0x5a4cf5*/
    }
  }
  __3_YAXPAX_Z(v7); /*0x5a4f6a*/
  if ( v9 ) /*0x5a4f74*/
  {
    __3_YAXPAX_Z(*(void **)&v9->__pad_0[8]); /*0x5a4f7a*/
    __3_YAXPAX_Z(v9); /*0x5a4f80*/
  }
}


// ==== 0x005A4FA0  sub_5A4FA0  this=-  sig=csp ====
double __stdcall sub_5A4FA0(__int16 *a1, __int16 *a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a4fbc*/
  v3 = a1[1] - a2[1]; /*0x5a4fbe*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4fdd*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a500f*/
}


// ==== 0x005A5360  Pathfinding::ExpandNode  this=Pathfinding  sig=csp ====
_DWORD *__stdcall Pathfinding_ExpandNode(__int16 *a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int *v5; // eax
  int *v6; // esi
  void *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  bool v11; // sf
  int i; // eax
  __int16 *v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  int v18; // ebp
  unsigned int v19; // eax
  _WORD *v20; // ebp
  int v21; // eax
  _WORD *v22; // edi
  _DWORD *v23; // eax
  _DWORD *v24; // edi
  bool v25; // cc
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  float v30; // ebp
  int v31; // edx
  _DWORD *v32; // edi
  int v33; // ecx
  int v34; // edx
  char *v35; // eax
  __int16 *v36; // eax
  int v37; // edi
  __int64 v38; // rax
  int v39; // eax
  int v40; // ecx
  double v41; // st6
  float v42; // ebx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // edx
  int v46; // edi
  int v47; // ebp
  unsigned int v48; // eax
  int v49; // eax
  _WORD *v50; // edi
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ebp
  int v55; // ebp
  char v56; // bl
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int k; // ecx
  int v63; // eax
  int v64; // ecx
  unsigned int v65; // esi
  unsigned int v66; // eax
  int v67; // eax
  int m; // ebp
  int n; // esi
  int j; // esi
  _DWORD *v72; // eax
  int v73; // [esp+10h] [ebp-50h] BYREF
  _WORD *v74; // [esp+14h] [ebp-4Ch]
  int v75; // [esp+18h] [ebp-48h]
  int v76; // [esp+1Ch] [ebp-44h]
  __int64 v77; // [esp+20h] [ebp-40h]
  __int64 v78; // [esp+28h] [ebp-38h]
  _DWORD *v79; // [esp+30h] [ebp-30h]
  int v80; // [esp+34h] [ebp-2Ch] BYREF
  double v81[2]; // [esp+38h] [ebp-28h] BYREF
  __int64 v82; // [esp+48h] [ebp-18h] BYREF
  __int64 v83; // [esp+50h] [ebp-10h]

  v2 = 10 * a2; /*0x5a536e*/
  v3 = __2_YAPAXI_Z(80 * a2); /*0x5a5378*/
  if ( v3 ) /*0x5a5384*/
  {
    v4 = v3; /*0x5a5389*/
    LODWORD(v81[0]) = v2 - 1; /*0x5a538b*/
  }
  else
  {
    v4 = 0; /*0x5a5391*/
  }
  v79 = v4; /*0x5a5395*/
  v5 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a5399*/
  v6 = v5; /*0x5a539e*/
  if ( v5 ) /*0x5a53a5*/
  {
    v5[3] = 0; /*0x5a53ae*/
    v5[4] = -1; /*0x5a53b2*/
    *v5 = 0; /*0x5a53b9*/
    v5[1] = v2; /*0x5a53bb*/
    v7 = __2_YAPAXI_Z(4 * v2 + 4); /*0x5a53be*/
    v8 = v6[1]; /*0x5a53c3*/
    v6[2] = (int)v7; /*0x5a53c6*/
    v9 = 0; /*0x5a53cc*/
    if ( v8 >= 0 ) /*0x5a53d0*/
    {
      do /*0x5a53df*/
      {
        ++v9; /*0x5a53d5*/
        *(_DWORD *)(v6[2] + 4 * v9 - 4) = 0; /*0x5a53d6*/
      }
      while ( v9 <= v6[1] ); /*0x5a53df*/
    }
  }
  else
  {
    v6 = 0; /*0x5a53e3*/
  }
  v10 = 0; /*0x5a53e7*/
  v11 = *v6 < 0; /*0x5a53e9*/
  v75 = 0; /*0x5a53eb*/
  if ( !v11 ) /*0x5a53ef*/
  {
    do /*0x5a53fd*/
    {
      ++v10; /*0x5a53f4*/
      *(_DWORD *)(v6[2] + 4 * v10 - 4) = 0; /*0x5a53f5*/
    }
    while ( v10 <= *v6 ); /*0x5a53fd*/
  }
  *v6 = 0; /*0x5a5404*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a5417*/
  {
    v80 = *(int *)(i + 36); /*0x5a541c*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v80 + 20 * unk_89C2DC * SHIWORD(v80) + 15) = 0; /*0x5a5441*/
  }
  v13 = a1; /*0x5a544e*/
  *v4 = *(_DWORD *)a1; /*0x5a5454*/
  v4[1] = 0; /*0x5a5456*/
  v14 = 5 * (*v13 + unk_89C2DC * v13[1]); /*0x5a546f*/
  v76 = 1; /*0x5a547a*/
  *((_DWORD *)g_MapTileArray + 4 * v14 + 15) = 1; /*0x5a547e*/
  v15 = *v6 + 1; /*0x5a5487*/
  v80 = v4[1]; /*0x5a548a*/
  v16 = v15 >> 1; /*0x5a5491*/
  if ( v15 < v6[1] ) /*0x5a5495*/
  {
    for ( ; v15 > 1; v16 >>= 1 ) /*0x5a5499*/
    {
      v17 = v6[2]; /*0x5a549b*/
      v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a549e*/
      if ( *(float *)(v18 + 4) <= (double)*(float *)&v80 ) /*0x5a54ad*/
        break; /*0x5a54ad*/
      *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a54af*/
      v15 = v16; /*0x5a54b2*/
    }
    *(_DWORD *)(v6[2] + 4 * v15) = v4; /*0x5a54c0*/
    v19 = v6[3]; /*0x5a54c5*/
    ++*v6; /*0x5a54cb*/
    if ( (unsigned int)v4 > v19 ) /*0x5a54cd*/
      v6[3] = (int)v4; /*0x5a54cf*/
    if ( (unsigned int)v4 < v6[4] ) /*0x5a54d5*/
      v6[4] = (int)v4; /*0x5a54d7*/
  }
  if ( *v6 ) /*0x5a54da*/
  {
    v21 = v6[2]; /*0x5a54e4*/
    v22 = *(_WORD **)(v21 + 4); /*0x5a54ec*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *v6); /*0x5a54ef*/
    *(_DWORD *)(v6[2] + 4 * (*v6)--) = 0; /*0x5a54f7*/
    Heap::SiftDown(v6, 1); /*0x5a5505*/
    v20 = v22; /*0x5a550a*/
  }
  else
  {
    v20 = 0; /*0x5a54e0*/
  }
  v74 = v20; /*0x5a550e*/
  v23 = __2_YAPAXI_Z(0x18u); /*0x5a5512*/
  v24 = v23; /*0x5a5517*/
  if ( v23 ) /*0x5a551e*/
  {
    VectorClass::CellConstructor(v23, 0, 0); /*0x5a5526*/
    *v24 = &vt_DynamicVectorClass_Cell; /*0x5a552b*/
    v24[5] = 10; /*0x5a5531*/
    v24[4] = 0; /*0x5a5538*/
  }
  else
  {
    v24 = 0; /*0x5a5541*/
  }
  LODWORD(v78) = v24; /*0x5a5547*/
  v25 = a2 <= 0; /*0x5a554b*/
  v24[5] = a2 + 2; /*0x5a5550*/
  if ( !v25 ) /*0x5a5553*/
  {
    while ( v20 ) /*0x5a5565*/
    {
      *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v20) + 14) = dword_ABC2B0; /*0x5a557c*/
      v26 = v24[2]; /*0x5a557f*/
      if ( v24[4] < v26 /*0x5a55a2*/
        || (*((_BYTE *)v24 + 13) || !v26)
        && (v27 = v24[5], v27 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v24 + 8))(v24, v26 + v27, 0) )
      {
        v28 = v24[4]; /*0x5a55a9*/
        v29 = v24[1]; /*0x5a55ac*/
        v24[4] = v28 + 1; /*0x5a55b2*/
        *(_DWORD *)(v29 + 4 * v28) = *(_DWORD *)v20; /*0x5a55b8*/
      }
      LODWORD(v77) = 0; /*0x5a55bf*/
      LODWORD(v30) = &v4[2 * v76]; /*0x5a55c7*/
      do /*0x5a5789*/
      {
        v80 = *CellStruct::Add(v74, &v82, (_WORD *)(4 * (v77 & 7) + 9041544)); /*0x5a55ef*/
        v73 = v80; /*0x5a55f3*/
        v31 = SHIWORD(v80) + (__int16)v80; /*0x5a55ff*/
        if ( v31 > g_MapCellHeight_Value /*0x5a5626*/
          && (__int16)v80 - SHIWORD(v80) < g_MapCellHeight_Value
          && SHIWORD(v80) - (__int16)v80 < g_MapCellHeight_Value
          && v31 <= g_MapCellCount )
        {
          v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73); /*0x5a563b*/
          if ( Cell::IsEmpty(v32) && v32[17] == -1 ) /*0x5a5650*/
          {
            v33 = SHIWORD(v73); /*0x5a5656*/
            v34 = (__int16)v73; /*0x5a5667*/
            v35 = (char *)g_MapTileArray + 80 * (__int16)v73 + 80 * SHIWORD(v73) * unk_89C2DC; /*0x5a5678*/
            if ( *((_DWORD *)v35 + 15) != 1 && !v35[69] ) /*0x5a5684*/
            {
              v36 = a1; /*0x5a568f*/
              *(_DWORD *)LODWORD(v30) = v73; /*0x5a5693*/
              v37 = *v36 - v34; /*0x5a569f*/
              v38 = v36[1] - v33; /*0x5a56a1*/
              *(float *)&v80 = COERCE_FLOAT(abs32(v37)); /*0x5a56b1*/
              if ( v80 <= (int)((HIDWORD(v38) ^ v38) - HIDWORD(v38)) ) /*0x5a56b5*/
                v80 = (HIDWORD(v38) ^ v38) - HIDWORD(v38); /*0x5a56b7*/
              v83 = (unsigned int)Random::State(&g_Randomizer); /*0x5a56c5*/
              v39 = SHIWORD(v73); /*0x5a56d5*/
              v40 = (__int16)v73; /*0x5a56e0*/
              v41 = (double)v80; /*0x5a56eb*/
              v42 = v30; /*0x5a56ef*/
              LODWORD(v30) += 8; /*0x5a56f1*/
              *(float *)&v80 = v30; /*0x5a56f4*/
              *(float *)(LODWORD(v30) - 4) = (double)v83 * 3.0 * 2.328306437080797e-10 + v41; /*0x5a56fa*/
              *((_DWORD *)g_MapTileArray + 20 * v40 + 20 * unk_89C2DC * v39 + 15) = 1; /*0x5a5711*/
              v43 = *(_DWORD *)(LODWORD(v42) + 4); /*0x5a571f*/
              v44 = *v6 + 1; /*0x5a5723*/
              ++v76; /*0x5a5724*/
              LODWORD(v81[0]) = v43; /*0x5a572a*/
              v45 = v44 >> 1; /*0x5a5731*/
              if ( v44 < v6[1] ) /*0x5a5735*/
              {
                if ( v44 > 1 ) /*0x5a573a*/
                {
                  do /*0x5a575a*/
                  {
                    v46 = v6[2]; /*0x5a573c*/
                    v47 = *(_DWORD *)(v46 + 4 * v45); /*0x5a573f*/
                    if ( *(float *)(v47 + 4) <= (double)*(float *)v81 ) /*0x5a574e*/
                      break; /*0x5a574e*/
                    *(_DWORD *)(v46 + 4 * v44) = v47; /*0x5a5750*/
                    v44 = v45; /*0x5a5753*/
                    v45 >>= 1; /*0x5a5755*/
                  }
                  while ( v44 > 1 ); /*0x5a575a*/
                  v30 = *(float *)&v80; /*0x5a575c*/
                }
                *(float *)(v6[2] + 4 * v44) = v42; /*0x5a5763*/
                v48 = v6[3]; /*0x5a5768*/
                ++*v6; /*0x5a576e*/
                if ( LODWORD(v42) > v48 ) /*0x5a5770*/
                  *((float *)v6 + 3) = v42; /*0x5a5772*/
                if ( LODWORD(v42) < v6[4] ) /*0x5a5778*/
                  *((float *)v6 + 4) = v42; /*0x5a577a*/
              }
            }
          }
        }
        LODWORD(v77) = v77 + 1; /*0x5a5785*/
      }
      while ( (int)v77 < 8 ); /*0x5a5789*/
      ++v75; /*0x5a5794*/
      if ( *v6 ) /*0x5a5798*/
      {
        v49 = v6[2]; /*0x5a57a4*/
        v50 = *(_WORD **)(v49 + 4); /*0x5a57ac*/
        *(_DWORD *)(v49 + 4) = *(_DWORD *)(v49 + 4 * *v6); /*0x5a57af*/
        *(_DWORD *)(v6[2] + 4 * (*v6)--) = 0; /*0x5a57b7*/
        Heap::SiftDown(v6, 1); /*0x5a57c5*/
        v74 = v50; /*0x5a57ca*/
      }
      else
      {
        v74 = 0; /*0x5a579e*/
      }
      v24 = (_DWORD *)v78; /*0x5a57d6*/
      if ( v75 >= a2 ) /*0x5a57dc*/
      {
        v4 = v79; /*0x5a57e2*/
        break; /*0x5a57e2*/
      }
      v20 = v74; /*0x5a555b*/
      v4 = v79; /*0x5a555f*/
    }
  }
  __3_YAXPAX_Z(v4); /*0x5a57e6*/
  if ( v6 ) /*0x5a57f1*/
  {
    __3_YAXPAX_Z((void *)v6[2]); /*0x5a57f7*/
    __3_YAXPAX_Z(v6); /*0x5a57fd*/
  }
  v51 = globalHelper_0A7640(v81, v24); /*0x5a580b*/
  v83 = *(_QWORD *)v51; /*0x5a5812*/
  v52 = *(_DWORD *)(v51 + 8); /*0x5a5821*/
  v53 = *(_DWORD *)(v51 + 12); /*0x5a5827*/
  if ( v75 <= 100 || (v54 = v24[4], a2 = v52 * v53, a1 = (__int16 *)v54, (double)v54 * 1.6 <= (double)(v52 * v53)) ) /*0x5a5853*/
  {
    for ( j = v24[4] - 1; j >= 0; v72[14] = 0xFFFF ) /*0x5a5aa3*/
      v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(v24[1] + 4 * j--)); /*0x5a5ab6*/
    if ( v24 ) /*0x5a5ac3*/
      (*(void (__thiscall **)(_DWORD *, int))*v24)(v24, 1); /*0x5a5acb*/
    return 0; /*0x5a5ad0*/
  }
  else
  {
    v55 = v54 - 1; /*0x5a5859*/
    v56 = 0; /*0x5a585a*/
    if ( v55 >= 0 ) /*0x5a585e*/
    {
      while ( 1 ) /*0x5a5868*/
      {
        v57 = v24[1]; /*0x5a5868*/
        a2 = 0; /*0x5a586b*/
        a1 = *(__int16 **)(v57 + 4 * v55); /*0x5a5872*/
        do /*0x5a5910*/
        {
          LODWORD(v81[0]) = *CellStruct::Add(&a1, &v82, (_WORD *)(4 * (v56 & 7) + 9041544)); /*0x5a5897*/
          v80 = SLODWORD(v81[0]); /*0x5a589b*/
          v58 = SWORD1(v81[0]) + SLOWORD(v81[0]); /*0x5a58a7*/
          if ( v58 > g_MapCellHeight_Value /*0x5a58dd*/
            && SLOWORD(v81[0]) - SWORD1(v81[0]) < g_MapCellHeight_Value
            && SWORD1(v81[0]) - SLOWORD(v81[0]) < g_MapCellHeight_Value
            && v58 <= g_MapCellCount
            && *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v80) + 14) != dword_ABC2B0 )
          {
            v59 = v24[4]; /*0x5a58df*/
            if ( v55 < v59 ) /*0x5a58e4*/
            {
              v60 = v59 - 1; /*0x5a58e6*/
              v61 = v55; /*0x5a58e9*/
              for ( v24[4] = v60; v61 < v24[4]; *(_DWORD *)(v24[1] + 4 * v61 - 4) = *(_DWORD *)(v24[1] + 4 * v61) ) /*0x5a58f0*/
                ++v61; /*0x5a58f5*/
            }
          }
          v56 = ++a2; /*0x5a5908*/
        }
        while ( a2 < 8 ); /*0x5a5910*/
        if ( --v55 < 0 ) /*0x5a5917*/
          break; /*0x5a5917*/
        v56 = 0; /*0x5a5866*/
      }
    }
    for ( k = 0; k < v24[4]; *((_BYTE *)g_MapTileArray + v63 + 69) = 1 ) /*0x5a5926*/
    {
      v63 = 80 * (*(__int16 *)(v24[1] + 4 * k) + unk_89C2DC * *(__int16 *)(v24[1] + 4 * k + 2)); /*0x5a5948*/
      ++k; /*0x5a594b*/
    }
    v64 = v24[4]; /*0x5a5958*/
    if ( v64 / 3 > 0 ) /*0x5a596b*/
    {
      v80 = v64 / 3; /*0x5a5971*/
      do /*0x5a5a8d*/
      {
        v65 = v24[4] - 1; /*0x5a597c*/
        v83 = (unsigned int)v24[4]; /*0x5a5980*/
        v81[0] = (double)v83; /*0x5a5988*/
        do /*0x5a59b3*/
        {
          v78 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5996*/
          v66 = Math::RoundToInt((double)v78 * v81[0] * 2.328306437080797e-10); /*0x5a59ac*/
        }
        while ( v66 > v65 ); /*0x5a59b3*/
        LODWORD(v82) = *(_DWORD *)(v24[1] + 4 * v66); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x5a59c9*/
          v67 = Math::RoundToInt((double)v77 * 0.000000001629814505956558); /*0x5a59db*/
          v79 = (_DWORD *)v67; /*0x5a59e3*/
        }
        while ( (unsigned int)v67 > 6 ); /*0x5a59e7*/
        LOBYTE(a2) = 1; /*0x5a59ec*/
        if ( v67 <= 3 ) /*0x5a59f1*/
          goto LABEL_98; /*0x5a59f1*/
        for ( m = 0; m < 2; ++m ) /*0x5a59f3*/
        {
          for ( n = 0; n < 2; ++n ) /*0x5a59f5*/
          {
            LOWORD(a1) = m + v82; /*0x5a5a04*/
            HIWORD(a1) = WORD1(v82) + n; /*0x5a5a09*/
            LODWORD(v81[0]) = a1; /*0x5a5a21*/
            if ( !*((_BYTE *)g_MapTileArray + 80 * (__int16)(m + v82) + 80 * unk_89C2DC * (__int16)(WORD1(v82) + n) + 69) /*0x5a5a51*/
              || *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v81) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a2) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( (_BYTE)a2 ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings((int)v79 + unk_AA10A4, &v82, -1, -1); /*0x5a5a7f*/
        --v80; /*0x5a5a89*/
      }
      while ( *(float *)&v80 != 0.0 ); /*0x5a5a8d*/
    }
    return v24; /*0x5a5a93*/
  }
}


// ==== 0x005A5AE0  sub_5A5AE0  this=-  sig=csp ====
double __stdcall sub_5A5AE0(__int16 *a1, __int16 *a2)
{
  signed int v2; // ecx
  __int64 v3; // rax
  int v5; // [esp+10h] [ebp+4h]

  v2 = abs32(a1[1] - a2[1]); /*0x5a5b06*/
  v3 = *a1 - *a2; /*0x5a5b08*/
  v5 = (HIDWORD(v3) ^ v3) - HIDWORD(v3); /*0x5a5b0f*/
  if ( v5 <= v2 ) /*0x5a5b13*/
    v5 = v2; /*0x5a5b15*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 3.0 * 2.328306437080797e-10 + (double)v5; /*0x5a5b45*/
}


// ==== 0x005A5B50  MapSeedClass::PlaceBuildingClusters  this=MapSeedClass  sig=csp ====
__int16 __thiscall MapSeedClass::PlaceBuildingClusters(void *this, MapSeedClass *aP1)
{
  MapSeedClass **v2; // eax
  MapSeedClass *v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 uniqueId; // cx
  int i; // esi
  unsigned int v12; // eax
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // eax
  int uniqueId_high; // ebx
  VectorClass *NeighbourContent; // esi
  unsigned int v18; // eax
  __int16 a1[4]; // [esp+10h] [ebp-118h] BYREF
  char v21; // [esp+1Ah] [ebp-10Eh]
  char v22; // [esp+1Bh] [ebp-10Dh]
  ObjectClass v23; // [esp+1Ch] [ebp-10Ch] BYREF
  int v24; // [esp+C8h] [ebp-60h]
  int v25; // [esp+CCh] [ebp-5Ch]
  int v26; // [esp+D0h] [ebp-58h]
  _DWORD v27[4]; // [esp+D4h] [ebp-54h] BYREF
  _DWORD v28[4]; // [esp+E4h] [ebp-44h] BYREF
  _DWORD v29[4]; // [esp+F4h] [ebp-34h] BYREF
  int v30[4]; // [esp+104h] [ebp-24h] BYREF
  _DWORD v31[4]; // [esp+114h] [ebp-14h] BYREF
  char v32[4]; // [esp+124h] [ebp-4h] BYREF

  v23.owningHouseIndex = (int)this; /*0x5a5b6a*/
  v2 = (MapSeedClass **)globalHelper_0A7640(&v23.spawnStatus, aP1); /*0x5a5b6e*/
  v3 = *v2; /*0x5a5b73*/
  v23.ambientSoundController[0] = (int)*v2; /*0x5a5b75*/
  v4 = (int)v2[1]; /*0x5a5b79*/
  v23.ambientSoundController[1] = v4; /*0x5a5b7c*/
  v23.ambientSoundController[2] = (int)v2[2]; /*0x5a5b83*/
  v5 = (int)v2[3]; /*0x5a5b87*/
  v23.ambientSoundController[3] = v5; /*0x5a5b8d*/
  if ( v5 > 5 ) /*0x5a5b91*/
  {
    v6 = v5 - 2; /*0x5a5b9a*/
    *(_WORD *)&v23.__pad_0[6] = v4 + 2; /*0x5a5b9d*/
    *(_WORD *)&v23.__pad_0[4] = (_WORD)v3; /*0x5a5ba9*/
    if ( v5 - 2 > 3 ) /*0x5a5bae*/
    {
      do /*0x5a5de6*/
      {
        *(_DWORD *)&v23.__pad_0[12] = *FindClearPlacementCell( /*0x5a5bd8*/
                                         &v23,
                                         (MapSeedClass *)&v23.__pad_0[4],
                                         (MapSeedClass *)v23.ambientSoundController,
                                         2);
        v7 = *globalHelper_0A7070( /*0x5a5bf0*/
                (MapSeedClass *)&v23.objectTypeFlags,
                (__int16 *)&v23.__pad_0[12],
                (MapSeedClass *)v23.ambientSoundController,
                2);
        v23.uniqueId = v7; /*0x5a5bf7*/
        if ( v7 /*0x5a5c28*/
          && (*(_WORD *)&v23.__pad_0[4] || *(_WORD *)&v23.__pad_0[6])
          && (__int16)v7 - *(__int16 *)&v23.__pad_0[4] >= 6 )
        {
          v23.customSound = *(__int16 *)&v23.__pad_0[14]; /*0x5a5c3b*/
          v23.customSound_controller[4] = *(__int16 *)&v23.__pad_0[12] - 4; /*0x5a5c4c*/
          *(_DWORD *)&v23.bombVisible = 4; /*0x5a5c53*/
          v23.health = 3; /*0x5a5c5e*/
          if ( !IsAreaClearMap((MapClass *)&v23.customSound_controller[4], 0, 0) ) /*0x5a5c65*/
            goto LABEL_11; /*0x5a5c65*/
          do /*0x5a5c92*/
          {
            *(_QWORD *)a1 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5c78*/
            v8 = Math::RoundToInt((double)*(__int64 *)a1 * 4.656612874161595e-10); /*0x5a5c8a*/
          }
          while ( v8 > 1 ); /*0x5a5c92*/
          if ( v8 ) /*0x5a5c96*/
          {
            HIWORD(v23.referenceCount) = *(_WORD *)&v23.__pad_0[14]; /*0x5a5ca4*/
            LOWORD(v23.referenceCount) = *(_WORD *)&v23.__pad_0[12] - 3; /*0x5a5cae*/
            v23.abstractFlags = v23.referenceCount; /*0x5a5cb9*/
            PlaceMapSeedClassBuildings( /*0x5a5cc6*/
              (ObjectClass *)((char *)&g_CellTileTypeCache->headNode[1] + 1),
              (ObjectClass *)&v23.abstractFlags,
              -1,
              -1);
          }
          else
          {
LABEL_11:
            PlaceMapSeedClassBuildings( /*0x5a5cd9*/
              (ObjectClass *)&dword_ABBEC4->__pad_0[2],
              (ObjectClass *)&v23.__pad_0[12],
              -1,
              -1);
          }
          v9 = *(_WORD *)&v23.__pad_0[12]; /*0x5a5cde*/
          uniqueId = v23.uniqueId; /*0x5a5ce2*/
          for ( i = 0; i < SLOWORD(v23.uniqueId) - *(__int16 *)&v23.__pad_0[12] - 1; ++i ) /*0x5a5cf3*/
          {
            LOWORD(v23.NeedsSaveOrLink) = i + 1; /*0x5a5cfa*/
            LOWORD(v23.nextArrayIndex) = v9 + i + 1; /*0x5a5d0a*/
            HIWORD(v23.nextArrayIndex) = *(_WORD *)&v23.__pad_0[14]; /*0x5a5d0f*/
            v23.abstractFlags = v23.nextArrayIndex; /*0x5a5d1a*/
            PlaceMapSeedClassBuildings((ObjectClass *)g_CellTileTypeCache, (ObjectClass *)&v23.abstractFlags, -1, -1); /*0x5a5d28*/
            v9 = *(_WORD *)&v23.__pad_0[12]; /*0x5a5d2d*/
            uniqueId = v23.uniqueId; /*0x5a5d31*/
          }
          v23.customSound_controller[1] = SHIWORD(v23.uniqueId); /*0x5a5d4b*/
          v23.customSound_controller[0] = uniqueId; /*0x5a5d56*/
          v23.customSound_controller[2] = 4; /*0x5a5d5a*/
          v23.customSound_controller[3] = 3; /*0x5a5d62*/
          if ( !IsAreaClearMap((MapClass *)v23.customSound_controller, 0, 0) ) /*0x5a5d6a*/
            goto LABEL_18; /*0x5a5d6a*/
          do /*0x5a5da0*/
          {
            *(_QWORD *)&v23.estimatedHealth = (unsigned int)Random::State(&g_Randomizer); /*0x5a5d7d*/
            v12 = Math::RoundToInt((double)*(__int64 *)&v23.estimatedHealth * 4.656612874161595e-10); /*0x5a5d98*/
          }
          while ( v12 > 1 ); /*0x5a5da0*/
          if ( v12 ) /*0x5a5da4*/
            PlaceMapSeedClassBuildings( /*0x5a5db6*/
              (ObjectClass *)((char *)&g_CellTileTypeCache->headNode[1] + 2),
              (ObjectClass *)&v23.uniqueId,
              -1,
              -1);
          else
LABEL_18:
            PlaceMapSeedClassBuildings((ObjectClass *)dword_ABBEC4, (ObjectClass *)&v23.uniqueId, -1, -1); /*0x5a5dc6*/
          v6 -= 10; /*0x5a5dcb*/
          *(_WORD *)&v23.__pad_0[6] += 10; /*0x5a5dce*/
        }
        else
        {
          *(_WORD *)&v23.__pad_0[6] += 2; /*0x5a5ddb*/
          v6 -= 2; /*0x5a5de1*/
        }
      }
      while ( v6 > 3 ); /*0x5a5de6*/
      LOWORD(v3) = v23.ambientSoundController[0]; /*0x5a5dec*/
      LOWORD(v4) = v23.ambientSoundController[1]; /*0x5a5df0*/
      v5 = v23.ambientSoundController[3]; /*0x5a5df4*/
    }
  }
  if ( v23.ambientSoundController[2] > 8 ) /*0x5a5e0a*/
  {
    v13 = v5 - 5; /*0x5a5e10*/
    *(_DWORD *)&v23.__pad_0[12] = v5 - 5; /*0x5a5e18*/
    *(_WORD *)&v23.__pad_0[4] = (_WORD)v3 + 5; /*0x5a5e1c*/
    *(_WORD *)&v23.__pad_0[6] = v4; /*0x5a5e21*/
    while ( v13 > 3 ) /*0x5a5e26*/
    {
      *(_DWORD *)a1 = *FindClearPlacementCell( /*0x5a5e4d*/
                         v32,
                         (MapSeedClass *)&v23.__pad_0[4],
                         (MapSeedClass *)v23.ambientSoundController,
                         4);
      v5 = *globalHelper_0A7070((MapSeedClass *)&v23.estimatedHealth, a1, (MapSeedClass *)v23.ambientSoundController, 4); /*0x5a5e68*/
      v23.uniqueId = v5; /*0x5a5e6a*/
      if ( v5 /*0x5a5ea1*/
        && ((LOWORD(v5) = *(_WORD *)&v23.__pad_0[6], *(_WORD *)&v23.__pad_0[4]) || *(_WORD *)&v23.__pad_0[6])
        && (LOWORD(v5) = *(_WORD *)&v23.__pad_0[6], SHIWORD(v5) - *(__int16 *)&v23.__pad_0[6] >= 6) )
      {
        LOWORD(v5) = a1[1]; /*0x5a5ea7*/
        v22 = 0; /*0x5a5eac*/
        v14 = 1; /*0x5a5eb4*/
        v21 = 0; /*0x5a5eb6*/
        v23.__pad_0[11] = 0; /*0x5a5ebb*/
        if ( a1[1] < SHIWORD(v5) ) /*0x5a5ec0*/
        {
          while ( 1 ) /*0x5a5ec6*/
          {
            if ( v22 ) /*0x5a5ed1*/
            {
              v27[0] = a1[0]; /*0x5a607e*/
              v27[1] = (__int16)v5; /*0x5a6085*/
              v27[2] = 3; /*0x5a609b*/
              v27[3] = 1; /*0x5a60a2*/
              if ( IsAreaClearMap((MapClass *)v27, 0, 0) ) /*0x5a60a9*/
              {
                PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a60c6*/
                if ( v21 ) /*0x5a60d1*/
                {
                  if ( v23.__pad_0[11] ) /*0x5a60dd*/
                  {
                    HIWORD(v23.attachedBomb) = a1[1]; /*0x5a60e9*/
                    LOWORD(v23.attachedBomb) = a1[0] + 1; /*0x5a60ee*/
                    *(_DWORD *)v23.__pad_0 = v23.attachedBomb; /*0x5a6108*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 5), &v23, -1, -1); /*0x5a610c*/
                    v23.__pad_0[11] = 0; /*0x5a6111*/
                  }
                  else
                  {
                    HIWORD(v23.ambientSoundController[4]) = a1[1]; /*0x5a6125*/
                    LOWORD(v23.ambientSoundController[4]) = a1[0] + 1; /*0x5a612f*/
                    *(_DWORD *)v23.__pad_0 = v23.ambientSoundController[4]; /*0x5a613a*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 4), &v23, -1, -1); /*0x5a6147*/
                  }
                }
              }
              else
              {
                *(_DWORD *)&v23.isInLogic = a1[0]; /*0x5a615f*/
                v23.location[0] = a1[1]; /*0x5a6168*/
                v23.location[1] = 3; /*0x5a616f*/
                v23.location[2] = 4; /*0x5a6176*/
                if ( v21 ) /*0x5a6181*/
                {
                  LOWORD(v23.attachedTag) = a1[0] + 1; /*0x5a618d*/
                  HIWORD(v23.attachedTag) = a1[1] - 1; /*0x5a6197*/
                  *(_DWORD *)v23.__pad_0 = v23.attachedTag; /*0x5a61a0*/
                  PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 3), &v23, -1, -1); /*0x5a61af*/
                  v21 = 0; /*0x5a61b4*/
                }
                if ( MapSeedClass::ValidateRectBounds((int *)&v23.isInLogic) ) /*0x5a61c0*/
                {
                  uniqueId_high = SHIWORD(v23.uniqueId); /*0x5a61cd*/
                  if ( SHIWORD(v23.uniqueId) - a1[1] < 4 ) /*0x5a61de*/
                  {
                    LOWORD(v5) = PlaceMapSeedClassBuildings( /*0x5a63e7*/
                                   (ObjectClass *)((char *)g_CellTileTypeCache->headNode + 3),
                                   (ObjectClass *)a1,
                                   -1,
                                   -1);
                    goto LABEL_73; /*0x5a63ec*/
                  }
                  v23.lineTrailer = (void *)a1[0]; /*0x5a61e9*/
                  v24 = a1[1] + 3; /*0x5a61fd*/
                  v25 = 3; /*0x5a6204*/
                  v26 = 2; /*0x5a620b*/
                  if ( IsAreaClearMap((MapClass *)&v23.lineTrailer, 0, 0) && uniqueId_high - a1[1] > 5 ) /*0x5a6229*/
                  {
                    v21 = 1; /*0x5a622b*/
                    v23.__pad_0[11] = 1; /*0x5a6230*/
                  }
                  PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[3], (ObjectClass *)a1, -1, -1); /*0x5a6246*/
                  v29[0] = a1[0] - 1; /*0x5a6257*/
                  v29[1] = a1[1]; /*0x5a6267*/
                  v29[2] = 1; /*0x5a626e*/
                  v29[3] = 3; /*0x5a6275*/
                  if ( IsAreaClearMap((MapClass *)v29, 1, 0) ) /*0x5a627c*/
                  {
                    HIWORD(v23.nextObject) = a1[1]; /*0x5a628f*/
                    LOWORD(v23.nextObject) = a1[0] - 1; /*0x5a6294*/
                    *(_DWORD *)v23.__pad_0 = v23.nextObject; /*0x5a62ae*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 12), &v23, -1, -1); /*0x5a62b2*/
                  }
                  v31[0] = a1[0] + 3; /*0x5a62c4*/
                  v31[1] = a1[1]; /*0x5a62d4*/
                  v31[2] = 1; /*0x5a62db*/
                  v31[3] = 3; /*0x5a62e2*/
                  if ( IsAreaClearMap((MapClass *)v31, 1, 0) ) /*0x5a62e9*/
                  {
                    HIWORD(v23.fallRate) = a1[1]; /*0x5a62fe*/
                    LOWORD(v23.fallRate) = a1[0] + 3; /*0x5a6303*/
                    *(_DWORD *)v23.__pad_0 = v23.fallRate; /*0x5a631d*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 12), &v23, -1, -1); /*0x5a6321*/
                  }
                  a1[1] += 2; /*0x5a6326*/
                }
                else
                {
                  v23.objectTypeFlags = *(_DWORD *)a1 - 0x10000; /*0x5a6340*/
                  *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 0x10000; /*0x5a634e*/
                  PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[3], &v23, -1, -1); /*0x5a635d*/
                  LOWORD(v23.NeedsSaveOrLink) = a1[0] + 1; /*0x5a636e*/
                  HIWORD(v23.NeedsSaveOrLink) = a1[1] - 2; /*0x5a6377*/
                  *(_DWORD *)v23.__pad_0 = v23.NeedsSaveOrLink; /*0x5a6386*/
                  NeighbourContent = (VectorClass *)CellCoord::To_CellObj( /*0x5a638f*/
                                                      &stru_87C374.__pad_14B0[8132],
                                                      (__int16 *)v23.__pad_0);
                  if ( Value::InRange((int *)NeighbourContent) && Value::InRange((int *)NeighbourContent) ) /*0x5a639e*/
                  {
                    do /*0x5a63c4*/
                    {
                      NeighbourContent[3].Capacity = (int)&g_CellTileTypeCache->__pad_0[1]; /*0x5a63b1*/
                      BYTE2(NeighbourContent[17].Capacity) = 1; /*0x5a63b4*/
                      NeighbourContent = (VectorClass *)Cell::GetNeighbourContent(NeighbourContent, 0); /*0x5a63c0*/
                    }
                    while ( Value::InRange((int *)NeighbourContent) ); /*0x5a63c4*/
                  }
                  v22 = 0; /*0x5a63cd*/
                }
              }
              goto LABEL_38; /*0x5a6116*/
            }
            v23.lastLayer = 2; /*0x5a5ede*/
            v30[2] = 3; /*0x5a5ee7*/
            *(_DWORD *)&v23.isAliveFlag = 3; /*0x5a5eee*/
            v23.parachute = (void *)a1[0]; /*0x5a5f0a*/
            *(_DWORD *)&v23.onBridge = (__int16)v5; /*0x5a5f11*/
            v30[0] = a1[0]; /*0x5a5f18*/
            v30[1] = (__int16)v5 - 3; /*0x5a5f1f*/
            v30[3] = 4; /*0x5a5f26*/
            if ( SHIWORD(v23.uniqueId) - (__int16)v5 < 2 ) /*0x5a5f2d*/
              goto LABEL_73; /*0x5a5f2d*/
            if ( !v14 ) /*0x5a5f35*/
              goto LABEL_79; /*0x5a5f35*/
            v28[0] = a1[0]; /*0x5a5f3b*/
            v28[1] = (__int16)v5 - 3; /*0x5a5f42*/
            v28[2] = 3; /*0x5a5f53*/
            v28[3] = 4; /*0x5a5f5e*/
            if ( !IsAreaClearMap((MapClass *)v28, 0, 0) ) /*0x5a5f65*/
              goto LABEL_79; /*0x5a5f65*/
            do /*0x5a5f96*/
            {
              *(_QWORD *)v23.customSound_controller = (unsigned int)Random::State(&g_Randomizer); /*0x5a5f7c*/
              v15 = Math::RoundToInt((double)*(__int64 *)v23.customSound_controller * 4.656612874161595e-10); /*0x5a5f8e*/
            }
            while ( v15 > 1 ); /*0x5a5f96*/
            if ( v15 ) /*0x5a5f9a*/
            {
              v23.nextArrayIndex = *(_DWORD *)a1 - 196608; /*0x5a5fb3*/
              *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 196608; /*0x5a5fbe*/
              PlaceMapSeedClassBuildings((ObjectClass *)((char *)&g_CellTileTypeCache->headNode[2] + 1), &v23, -1, -1); /*0x5a5fcb*/
            }
            else
            {
LABEL_79:
              if ( MapSeedClass::ValidateRectBounds(v30) ) /*0x5a5fff*/
              {
                v23.referenceCount = *(_DWORD *)a1 - 196608; /*0x5a6019*/
                *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 196608; /*0x5a6027*/
                PlaceMapSeedClassBuildings((ObjectClass *)((char *)g_CellTileTypeCache->headNode + 1), &v23, -1, -1); /*0x5a6036*/
                PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a604a*/
              }
              else
              {
                if ( !IsAreaClearMap((MapClass *)&v23.parachute, 0, 0) ) /*0x5a6060*/
                  goto LABEL_38; /*0x5a6060*/
                PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a6076*/
              }
            }
            v22 = 1; /*0x5a5fd0*/
LABEL_38:
            v14 = 0; /*0x5a5fda*/
            LOWORD(v5) = ++a1[1]; /*0x5a5fe1*/
            if ( a1[1] >= SHIWORD(v23.uniqueId) ) /*0x5a5fed*/
            {
              if ( v21 ) /*0x5a63f7*/
              {
                LOWORD(v23.abstractFlags) = a1[0] + 1; /*0x5a6403*/
                HIWORD(v23.abstractFlags) = a1[1] - 1; /*0x5a640e*/
                *(_DWORD *)v23.__pad_0 = v23.abstractFlags; /*0x5a6422*/
                PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 3), &v23, -1, -1); /*0x5a6426*/
              }
              break; /*0x5a6426*/
            }
          }
        }
        v23.spawnStatus = a1[0]; /*0x5a642b*/
        v23.visibilityFlags = a1[1]; /*0x5a6446*/
        *(_DWORD *)&v23.needsRedraw = 3; /*0x5a644d*/
        *(_DWORD *)&v23.hasParachute = 4; /*0x5a6454*/
        if ( !IsAreaClearMap((MapClass *)&v23.spawnStatus, 0, 0) ) /*0x5a645f*/
          goto LABEL_72; /*0x5a645f*/
        do /*0x5a648f*/
        {
          *(_QWORD *)&v23.customSound_controller[4] = (unsigned int)Random::State(&g_Randomizer); /*0x5a6472*/
          v18 = Math::RoundToInt((double)*(__int64 *)&v23.customSound_controller[4] * 4.656612874161595e-10); /*0x5a6487*/
        }
        while ( v18 > 1 ); /*0x5a648f*/
        if ( v18 ) /*0x5a6493*/
          LOWORD(v5) = PlaceMapSeedClassBuildings( /*0x5a64a6*/
                         (ObjectClass *)&g_CellTileTypeCache->headNode[2],
                         (ObjectClass *)a1,
                         -1,
                         -1);
        else
LABEL_72:
          LOWORD(v5) = PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[3], (ObjectClass *)a1, -1, -1); /*0x5a64bd*/
LABEL_73:
        v13 = *(_DWORD *)&v23.__pad_0[12] - 10; /*0x5a64c9*/
        *(_WORD *)&v23.__pad_0[4] += 10; /*0x5a64d4*/
        *(_DWORD *)&v23.__pad_0[12] -= 10; /*0x5a64da*/
      }
      else
      {
        *(_WORD *)&v23.__pad_0[4] += 2; /*0x5a64e0*/
        v13 -= 2; /*0x5a64e6*/
        *(_DWORD *)&v23.__pad_0[12] = v13; /*0x5a64e9*/
      }
    }
  }
  return v5; /*0x5a64f5*/
}


// ==== 0x005A6510  ScatterMapSeedBuildings2  this=-  sig=csp ====
void __stdcall MapSeed_PlaceBuildingsScatter2(int a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // st7
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  char **v9; // esi
  int v10; // eax
  void *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // eax
  int IndexByName; // esi
  void *v15; // eax
  int v16; // ebp
  unsigned int v17; // esi
  unsigned int v18; // eax
  int v19; // ebx
  _WORD *v20; // edi
  int *v21; // esi
  int v22; // edx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // [esp+18h] [ebp-6Eh]
  char v27; // [esp+19h] [ebp-6Dh]
  int v28; // [esp+1Ah] [ebp-6Ch]
  int v29; // [esp+1Eh] [ebp-68h]
  int v30; // [esp+22h] [ebp-64h]
  int v31; // [esp+26h] [ebp-60h]
  int v32; // [esp+2Eh] [ebp-58h]
  int v33; // [esp+32h] [ebp-54h]
  int Owner; // [esp+36h] [ebp-50h]
  double v35[2]; // [esp+3Ah] [ebp-4Ch] BYREF
  __int64 v36; // [esp+4Ah] [ebp-3Ch]
  __int64 v37; // [esp+52h] [ebp-34h]
  __int64 v38; // [esp+5Ah] [ebp-2Ch]
  _DWORD v39[3]; // [esp+62h] [ebp-24h] BYREF
  void **v40; // [esp+6Eh] [ebp-18h] BYREF
  void *Block; // [esp+72h] [ebp-14h]
  int v42; // [esp+76h] [ebp-10h]
  char v43; // [esp+7Bh] [ebp-Bh]
  int v44; // [esp+7Eh] [ebp-8h]
  int v45; // [esp+82h] [ebp-4h]

  v1 = a1; /*0x5a6514*/
  v2 = *(_DWORD *)(a1 + 16) / 10; /*0x5a6534*/
  v3 = *(_DWORD *)(a1 + 16) / 20; /*0x5a6542*/
  *(_QWORD *)&v35[0] = v2 - v3 + 1; /*0x5a6549*/
  *(double *)&v4 = (double)*(__int64 *)&v35[0]; /*0x5a6551*/
  LODWORD(v35[0]) = v3; /*0x5a6555*/
  v38 = v4; /*0x5a655d*/
  *(double *)&v37 = (double)*(__int64 *)&v35[0]; /*0x5a6565*/
  do /*0x5a6594*/
  {
    *(_QWORD *)&v35[0] = (unsigned int)Random::State(&g_Randomizer); /*0x5a6573*/
    v5 = Math::RoundToInt((double)*(__int64 *)&v35[0] * *(double *)&v38 * 2.328306437080797e-10 + *(double *)&v37); /*0x5a658d*/
  }
  while ( v5 > v2 ); /*0x5a6594*/
  v6 = v5 >> 1; /*0x5a6598*/
  v33 = v5 >> 1; /*0x5a65a0*/
  v29 = 0; /*0x5a65a4*/
  v30 = 0; /*0x5a65a8*/
  StringVector::Construct(&v40, 0, 0); /*0x5a65ac*/
  v7 = v42; /*0x5a65b1*/
  v8 = 10; /*0x5a65b5*/
  v40 = &vt_DynamicVectorClass_char; /*0x5a65ba*/
  v45 = 10; /*0x5a65c2*/
  v44 = 0; /*0x5a65c6*/
  v9 = off_82B138; /*0x5a65ca*/
  while ( 1 ) /*0x5a65d5*/
  {
    if ( v44 < v7 ) /*0x5a65d9*/
      goto LABEL_10; /*0x5a65d9*/
    if ( (v43 || !v7) && v8 > 0 ) /*0x5a65e9*/
    {
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v8 + v7, 0) ) /*0x5a65f7*/
      {
LABEL_10:
        v10 = v44++; /*0x5a65fe*/
        *((_DWORD *)Block + v10) = *v9; /*0x5a660f*/
      }
      v7 = v42; /*0x5a6612*/
    }
    if ( (int)++v9 >= (int)&off_82B180 ) /*0x5a661f*/
      break; /*0x5a661f*/
    v8 = v45; /*0x5a65d1*/
  }
  v11 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a6626*/
  Owner = HouseClass::FindOwner(v11); /*0x5a6634*/
  if ( v6 > 0 )
  {
    while ( v29 < 2 * v6 && v44 > 1 )
    {
      v12 = v44 - 1; /*0x5a6661*/
      *(_QWORD *)&v35[1] = (unsigned int)v44; /*0x5a6669*/
      v35[0] = (double)(unsigned int)v44; /*0x5a6671*/
      do /*0x5a66a0*/
      {
        v36 = (unsigned int)Random::State(&g_Randomizer); /*0x5a667f*/
        v13 = Math::RoundToInt((double)v36 * v35[0] * 2.328306437080797e-10); /*0x5a6695*/
        v32 = v13; /*0x5a669c*/
      }
      while ( v13 > v12 ); /*0x5a66a0*/
      IndexByName = BuildingTypeClass::FindIndexByName(*((void **)Block + v13)); /*0x5a66b5*/
      v15 = __2_YAPAXI_Z(0x720u); /*0x5a66b7*/
      v16 = v15 ? BuildingClass::Construct((int)v15, *((_DWORD *)g_TriggerTypeCount + IndexByName), Owner) : 0;
      v28 = 0; /*0x5a66db*/
      v27 = 0; /*0x5a66df*/
      while ( v28 < 60 ) /*0x5a6701*/
      {
        v17 = *(_DWORD *)(v1 + 16) - 1; /*0x5a670e*/
        v37 = *(unsigned int *)(v1 + 16); /*0x5a6712*/
        v35[0] = (double)v37; /*0x5a671a*/
        do /*0x5a6745*/
        {
          v38 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6728*/
          v18 = Math::RoundToInt((double)v38 * v35[0] * 2.328306437080797e-10); /*0x5a673e*/
        }
        while ( v18 > v17 ); /*0x5a6745*/
        v19 = *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * v18); /*0x5a674c*/
        v20 = (_WORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v16 + 1312) + 144))( /*0x5a6761*/
                         *(_DWORD *)(v16 + 1312),
                         1);
        v26 = 1; /*0x5a6763*/
        while ( *v20 != 0x7FFF || v20[1] != 0x7FFF ) /*0x5a6775*/
        {
          LOWORD(v31) = v19 + *v20; /*0x5a6781*/
          HIWORD(v31) = HIWORD(v19) + v20[1]; /*0x5a6790*/
          LODWORD(v35[0]) = v31; /*0x5a6799*/
          v21 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v35); /*0x5a67a7*/
          if ( !CellClass::InBounds(v21) && !CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21[57]
            || v21[59] == 3
            || !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)v21, 1) )
          {
            v26 = 0; /*0x5a67e3*/
          }
          v20 += 2; /*0x5a67ec*/
          if ( !v26 ) /*0x5a67f1*/
            goto LABEL_44; /*0x5a67f1*/
        }
        v22 = *(_DWORD *)v16; /*0x5a6810*/
        v39[2] = 0; /*0x5a681d*/
        v39[0] = ((__int16)v19 << 8) + 128; /*0x5a6828*/
        v39[1] = (SHIWORD(v19) << 8) + 128; /*0x5a6836*/
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(v22 + 216))(v16, v39, 0) ) /*0x5a683d*/
        {
          v23 = *(_DWORD *)v16; /*0x5a684d*/
          v24 = *(_DWORD *)(*(_DWORD *)(v16 + 1312) + 160); /*0x5a6852*/
          *(_DWORD *)(v16 + 108) = v24; /*0x5a685a*/
          *(_DWORD *)(v16 + 112) = v24; /*0x5a685d*/
          (*(void (__thiscall **)(int, int))(v23 + 292))(v16, 2); /*0x5a6860*/
          v25 = v32; /*0x5a686a*/
          v27 = 1; /*0x5a6872*/
          ++v30; /*0x5a6877*/
          if ( v32 > 17 && v32 < v44 && v32 < --v44 ) /*0x5a688c*/
          {
            do /*0x5a68a0*/
            {
              ++v25; /*0x5a6892*/
              *((_DWORD *)Block + v25 - 1) = *((_DWORD *)Block + v25); /*0x5a6896*/
            }
            while ( v25 < v44 ); /*0x5a68a0*/
          }
        }
LABEL_44:
        ++v28; /*0x5a68a2*/
        if ( v27 ) /*0x5a68b1*/
        {
          v1 = a1; /*0x5a68b7*/
          goto LABEL_48; /*0x5a68c0*/
        }
        v1 = a1; /*0x5a66f3*/
      }
      if ( v16 ) /*0x5a68cc*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 32))(v16, 1); /*0x5a68d5*/
LABEL_48:
      ++v29; /*0x5a68e1*/
      if ( v30 >= v33 ) /*0x5a68eb*/
        break; /*0x5a68eb*/
      v6 = v33; /*0x5a6640*/
    }
  }
  v40 = &vt_VectorClass_char; /*0x5a68f5*/
  if ( Block ) /*0x5a6903*/
  {
    if ( v43 ) /*0x5a690b*/
      __3_YAXPAX_Z(Block); /*0x5a690e*/
  }
}


// ==== 0x005A6920  PlaceRandomNeutralUnits  this=-  sig=csp ====
int __stdcall PlaceRandomNeutralUnits(int a1)
{
  void *v1; // eax
  IUnknown *Owner; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByName; // eax
  _DWORD *v8; // esi
  void *v9; // edi
  int Index; // eax
  int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  char v17; // [esp+13h] [ebp-4Dh]
  int v18; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+18h] [ebp-48h]
  int v20; // [esp+1Ch] [ebp-44h]
  __int64 v21; // [esp+20h] [ebp-40h]
  IUnknown *v22; // [esp+28h] [ebp-38h]
  __int64 v23; // [esp+2Ch] [ebp-34h]
  __int64 v24; // [esp+34h] [ebp-2Ch]
  __int64 v25; // [esp+3Ch] [ebp-24h]
  __int64 v26; // [esp+44h] [ebp-1Ch]
  double v27; // [esp+4Ch] [ebp-14h]
  _DWORD v28[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a694a*/
    result = Math::RoundToInt((double)v21 * 0.000000001164153218540399 + 1.0); /*0x5a6962*/
    v20 = result; /*0x5a696a*/
  }
  while ( (unsigned int)result > 5 ); /*0x5a696e*/
  v19 = 0; /*0x5a6972*/
  LODWORD(v21) = 0; /*0x5a6976*/
  if ( result > 0 ) /*0x5a697a*/
  {
    while ( 1 ) /*0x5a698e*/
    {
      result = 2 * v20; /*0x5a698e*/
      if ( v19 >= 2 * v20 ) /*0x5a6992*/
        return result; /*0x5a6992*/
      do /*0x5a69be*/
      {
        v23 = (unsigned int)Random::State(&g_Randomizer); /*0x5a69a2*/
        v4 = Math::RoundToInt((double)v23 * 0.000000001629814505956558); /*0x5a69b4*/
        v5 = v4; /*0x5a69b9*/
      }
      while ( (unsigned int)v4 > 6 ); /*0x5a69be*/
      if ( v4 > 2 ) /*0x5a69c3*/
      {
        v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a6a04*/
        if ( !v9 ) /*0x5a6a0b*/
        {
LABEL_13:
          v8 = 0; /*0x5a6a2f*/
          goto LABEL_14; /*0x5a6a2f*/
        }
        Index = BuildingTypeClass::FindIndex(*(&off_82B180 + v5)); /*0x5a6a14*/
        v8 = (_DWORD *)UnitClass::Construct((int)v9, *((_DWORD *)g_UnitTypeCount2 + Index), Owner); /*0x5a6a2b*/
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (_DWORD *)InfantryClass::Construct((int)v6, *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByName), Owner); /*0x5a69f6*/
      }
LABEL_14:
      v11 = 0; /*0x5a6a31*/
      v17 = 0; /*0x5a6a33*/
      while ( v11 < 60 ) /*0x5a6a3a*/
      {
        v12 = *(_DWORD *)(a1 + 16) - 1; /*0x5a6a4b*/
        v24 = *(unsigned int *)(a1 + 16); /*0x5a6a4f*/
        v27 = (double)v24; /*0x5a6a57*/
        do /*0x5a6a82*/
        {
          v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18) + 57) )
        {
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6ad0*/
            v14 = Math::RoundToInt((double)v26 * 0.000000001862645149664638); /*0x5a6ae2*/
          }
          while ( v14 > 7 ); /*0x5a6aea*/
          v28[0] = ((__int16)v18 << 8) + 128; /*0x5a6b0c*/
          v15 = *v8; /*0x5a6b10*/
          v28[1] = (SHIWORD(v18) << 8) + 128; /*0x5a6b16*/
          v28[2] = 0; /*0x5a6b1d*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v15 + 216))(v8, v28, 32 * v14) ) /*0x5a6b21*/
          {
            v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a6b35*/
            v8[27] = v16; /*0x5a6b3d*/
            v8[28] = v16; /*0x5a6b40*/
            (*(void (__thiscall **)(_DWORD *, int))(*v8 + 292))(v8, 2); /*0x5a6b47*/
            v17 = 1; /*0x5a6b51*/
            LODWORD(v21) = v21 + 1; /*0x5a6b57*/
          }
        }
        ++v11; /*0x5a6b5f*/
        if ( v17 ) /*0x5a6b62*/
          goto LABEL_27; /*0x5a6b62*/
      }
      if ( v8 ) /*0x5a6b72*/
        (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x5a6b7a*/
LABEL_27:
      result = v20; /*0x5a6b7d*/
      ++v19; /*0x5a6b8c*/
      if ( (int)v21 >= v20 ) /*0x5a6b90*/
        return result; /*0x5a6b90*/
      Owner = v22; /*0x5a6982*/
    }
  }
  return result; /*0x5a6b96*/
}


// ==== 0x005A6BA0  ObjectClass::method_5A6BA0  this=ObjectClass  sig=csp ====
char __thiscall sub_5A6BA0(__int16 *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  void *v8; // eax
  __int16 v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v1 = this->vtable2; /*0x5a6ba3*/
  v2 = *this; /*0x5a6ba7*/
  v3 = v2 + 7; /*0x5a6bae*/
  v4 = v2 - 7; /*0x5a6bb1*/
  v5 = v1 - 7; /*0x5a6bb6*/
  v11 = v2 + 7; /*0x5a6bb9*/
  v6 = v1 + 7; /*0x5a6bbd*/
  if ( __OFSUB__(v2 - 7, v2 + 7) ) /*0x5a6bc0*/
    return 1; /*0x5a6bfa*/
  while ( 1 ) /*0x5a6bc4*/
  {
    v7 = v5; /*0x5a6bc4*/
    if ( v5 < v6 ) /*0x5a6bc6*/
      break; /*0x5a6bc6*/
LABEL_6:
    if ( ++v4 >= v3 ) /*0x5a6bf8*/
      return 1; /*0x5a6bf8*/
  }
  while ( 1 ) /*0x5a6bd2*/
  {
    v10[0] = v4; /*0x5a6bd2*/
    v10[1] = v7; /*0x5a6bd7*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v10); /*0x5a6bdc*/
    if ( CellLand::IsBuildable((int)v8) ) /*0x5a6be3*/
      return 0; /*0x5a6bfa*/
    if ( ++v7 >= v6 ) /*0x5a6bef*/
    {
      v3 = v11; /*0x5a6bf1*/
      goto LABEL_6; /*0x5a6bf1*/
    }
  }
}


// ==== 0x005A6C10  PlaceMapSeedClassBuildings  this=-  sig=csp ====
int __fastcall PlaceMapSeedClassBuildings(ObjectClass *aP0, ObjectClass *aP1, int a3, int a4)
{
  _DWORD *v4; // ebp
  int result; // eax
  int v6; // ebx
  int v7; // esi
  int i; // edi
  __int16 v9; // cx
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  ObjectClass *v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]

  v19 = aP1; /*0x5a6c1a*/
  v4 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * (_DWORD)aP0); /*0x5a6c1e*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a6c26*/
  v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = v4[186]; /*0x5a6c38*/
    v6 = 0; /*0x5a6c3e*/
    v17 = 0; /*0x5a6c42*/
    if ( result > 0 ) /*0x5a6c46*/
    {
      v7 = g_MapCellHeight_Value; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = *(_WORD *)&v19->__pad_0[2] + v6; /*0x5a6c6e*/
          LOWORD(v18) = i + *(_WORD *)v19->__pad_0; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          v16 = v18; /*0x5a6c83*/
          v10 = v9; /*0x5a6c8a*/
          v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > g_MapCellCount ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16); /*0x5a6cc4*/
              v6 = v17; /*0x5a6ccf*/
              v13 = i + v17 * v4[185]; /*0x5a6cda*/
              v14 = *(_DWORD *)(v20 + 4 * v13 + 16); /*0x5a6cdc*/
              if ( v14 ) /*0x5a6ce2*/
              {
                v15 = v4[165]; /*0x5a6ce4*/
                v12[282] = v13; /*0x5a6cea*/
                *((_DWORD *)v12 + 14) = v15; /*0x5a6cf4*/
                if ( a4 != -1 ) /*0x5a6cfa*/
                  v12[283] = a4 + *(_BYTE *)(v14 + 40) - 4; /*0x5a6d04*/
                v12[284] = *(_BYTE *)(v14 + 42); /*0x5a6d0d*/
                if ( g_MapTileArray ) /*0x5a6d1b*/
                  *((_DWORD *)g_MapTileArray + 20 * (__int16)v16 + 20 * unk_89C2DC * SHIWORD(v16) + 14) = a3; /*0x5a6d3a*/
              }
              v7 = g_MapCellHeight_Value; /*0x5a6d3e*/
            }
          }
        }
        result = v4[186]; /*0x5a6d59*/
        v17 = ++v6; /*0x5a6d62*/
      }
      while ( v6 < result ); /*0x5a6d66*/
    }
  }
  return result; /*0x5a6d6e*/
}


// ==== 0x005A6D80  FindClearPlacementCell  this=MapSeedClass  sig=csp ====
_DWORD *__stdcall FindClearPlacementCell(_DWORD *a0, MapSeedClass *aP1, MapSeedClass *aP2, int a4)
{
  MapSeedClass *v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  __int16 v11; // ax
  int v12; // eax
  MapSeedClass *v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _WORD *v18; // esi
  __int16 v19; // cx
  MapSeedClass *v20; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  char v24[8]; // [esp+20h] [ebp-18h]
  double v25; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  MapSeedClass *aP1a; // [esp+40h] [ebp+8h]
  MapSeedClass *aP2a; // [esp+44h] [ebp+Ch]
  MapSeedClass *aP2b; // [esp+44h] [ebp+Ch]
  int v31; // [esp+48h] [ebp+10h]

  v4 = *(MapSeedClass **)aP1->__pad_0; /*0x5a6d8d*/
  v5 = 0; /*0x5a6d91*/
  v24[0] = a4 == 4; /*0x5a6d96*/
  v20 = v4; /*0x5a6da0*/
  v23 = 0; /*0x5a6da4*/
  v21 = 0; /*0x5a6da8*/
  v22 = 0; /*0x5a6dac*/
  v25 = 0.0; /*0x5a6dbe*/
  if ( a4 == 2 ) /*0x5a6db0*/
  {
    v6 = 1; /*0x5a6dc6*/
    v7 = 3; /*0x5a6dc8*/
    v23 = -3; /*0x5a6dca*/
    v22 = 6; /*0x5a6dd2*/
  }
  else
  {
    v6 = 3; /*0x5a6df0*/
    v7 = 1; /*0x5a6df2*/
    v5 = -3; /*0x5a6df4*/
    v21 = 6; /*0x5a6df9*/
  }
  while ( 1 ) /*0x5a6e05*/
  {
    if ( (__int16)v20 >= *(_DWORD *)aP2->__pad_0 + aP2->MapSeedClass_field_0x08 /*0x5a6e24*/
      || SHIWORD(v20) >= aP2->MapSeedClass_field_0x04 + aP2->MapSeedClass_field_0x0C )
    {
      *a0 = 0; /*0x5a6e90*/
      return a0; /*0x5a6e96*/
    }
    if ( *((CCINIClass **)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(aP2a) = (_WORD)v20 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 160]; /*0x5a6e65*/
    HIWORD(aP2a) = HIWORD(v20) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 162]; /*0x5a6e6a*/
    v20 = aP2a; /*0x5a6e73*/
  }
  v11 = (__int16)v20; /*0x5a6e99*/
  while ( 1 ) /*0x5a6e9d*/
  {
    if ( v11 >= *(_DWORD *)aP2->__pad_0 + aP2->MapSeedClass_field_0x08 /*0x5a6ebc*/
      || SHIWORD(v20) >= aP2->MapSeedClass_field_0x04 + aP2->MapSeedClass_field_0x0C )
    {
      *a0 = 0; /*0x5a6f4c*/
      return a0; /*0x5a6f52*/
    }
    LODWORD(v25) = v5 + v11; /*0x5a6ec0*/
    HIDWORD(v25) = v23 + SHIWORD(v20); /*0x5a6ece*/
    v26 = v6 + v21; /*0x5a6edc*/
    v27 = v7 + v22; /*0x5a6ee4*/
    if ( IsAreaClearMap((MapClass *)&v25, v24[0], v24[0]) ) /*0x5a6eed*/
      break; /*0x5a6eed*/
    v12 = a4 & 7; /*0x5a6efa*/
    HIWORD(aP2b) = HIWORD(v20) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v12 + 162]; /*0x5a6f23*/
    v11 = (_WORD)v20 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v12 + 160]; /*0x5a6f28*/
    LOWORD(aP2b) = v11; /*0x5a6f1e*/
    v20 = aP2b; /*0x5a6f2c*/
  }
  v13 = v20; /*0x5a6f67*/
  v14 = (__int16)v20 - *(__int16 *)aP1->__pad_0; /*0x5a6f6e*/
  if ( SHIWORD(v20) - *(__int16 *)&aP1->__pad_0[2] > v14 ) /*0x5a6f72*/
    v14 = SHIWORD(v20) - *(__int16 *)&aP1->__pad_0[2]; /*0x5a6f74*/
  if ( v14 > 0 ) /*0x5a6f78*/
  {
    *(_QWORD *)v24 = (unsigned int)(v14 + 1); /*0x5a6f89*/
    v25 = (double)*(__int64 *)v24; /*0x5a6f91*/
    do /*0x5a6fc0*/
    {
      *(_QWORD *)v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6f9f*/
      v15 = Math::RoundToInt((double)*(__int64 *)v24 * v25 * 2.328306437080797e-10); /*0x5a6fb9*/
    }
    while ( v15 > (unsigned int)v14 ); /*0x5a6fc0*/
    aP1a = (MapSeedClass *)v15; /*0x5a6fc4*/
    if ( v15 > 0 ) /*0x5a6fc8*/
    {
      v16 = v21 + v6; /*0x5a6fe0*/
      v17 = v22 + v7; /*0x5a6fe2*/
      v18 = (_WORD *)(4 * (((_BYTE)a4 - 4) & 7) + 9041544); /*0x5a6fe4*/
      v19 = (__int16)v20; /*0x5a6feb*/
      while ( 1 ) /*0x5a7000*/
      {
        LOWORD(v31) = v19 + *v18; /*0x5a7000*/
        HIWORD(v31) = HIWORD(v20) + v18[1]; /*0x5a700b*/
        LODWORD(v25) = v5 + (__int16)v31; /*0x5a7018*/
        HIDWORD(v25) = v23 + SHIWORD(v31); /*0x5a7022*/
        v26 = v16; /*0x5a7026*/
        v27 = v17; /*0x5a702a*/
        if ( !IsAreaClearMap((MapClass *)&v25, 0, 0) ) /*0x5a702e*/
          break; /*0x5a702e*/
        v19 = v31; /*0x5a703b*/
        v20 = (MapSeedClass *)v31; /*0x5a7040*/
        aP1a = (MapSeedClass *)((char *)aP1a - 1); /*0x5a7046*/
        if ( (int)aP1a <= 0 ) /*0x5a704a*/
        {
          *a0 = v31; /*0x5a7053*/
          return a0; /*0x5a7059*/
        }
      }
    }
    v13 = v20; /*0x5a705c*/
  }
  *a0 = v13; /*0x5a7067*/
  return a0; /*0x5a6e7b*/
}


// ==== 0x005A7070  globalHelper_0A7070  this=MapSeedClass  sig=csp ====
_DWORD *__stdcall globalHelper_0A7070(MapSeedClass *aP0, __int16 *a1, MapSeedClass *aP2, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int16 *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // si
  int v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch]
  MapClass *v19; // [esp+1Ch] [ebp-28h]
  __int64 v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-18h]
  __int16 v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+38h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-8h]
  char *v26; // [esp+40h] [ebp-4h]
  int v27; // [esp+54h] [ebp+10h]
  int v28; // [esp+54h] [ebp+10h]

  v4 = *(_DWORD *)a1; /*0x5a7080*/
  v21 = *(_DWORD *)a1; /*0x5a708e*/
  v16 = 0; /*0x5a7092*/
  v17 = 0; /*0x5a7096*/
  v18 = 0; /*0x5a709a*/
  v19 = 0; /*0x5a709e*/
  if ( a4 == 2 ) /*0x5a70a2*/
  {
    v5 = 1; /*0x5a70a6*/
    v6 = 3; /*0x5a70ab*/
    v23 = 0; /*0x5a70b0*/
    v24 = 0; /*0x5a70b4*/
    v17 = -3; /*0x5a70b8*/
    v19 = (MapClass *)6; /*0x5a70c0*/
  }
  else
  {
    v5 = 3; /*0x5a70cc*/
    v6 = 1; /*0x5a70d1*/
    v23 = 0; /*0x5a70d6*/
    v24 = 0; /*0x5a70da*/
    v16 = -3; /*0x5a70de*/
    v18 = 6; /*0x5a70e6*/
  }
  while ( (__int16)v4 < aP2->MapSeedClass_field_0x08 + *(_DWORD *)aP2->__pad_0 + 1 ) /*0x5a70f2*/
  {
    if ( SHIWORD(v21) >= aP2->MapSeedClass_field_0x0C + aP2->MapSeedClass_field_0x04 + 1 ) /*0x5a7117*/
      break; /*0x5a7117*/
    v23 = v16 + (__int16)v4; /*0x5a711f*/
    v24 = v17 + SHIWORD(v21); /*0x5a712d*/
    v25 = v5 + v18; /*0x5a713b*/
    v26 = (char *)v19 + v6; /*0x5a7143*/
    if ( !IsAreaClearMap((MapClass *)&v23, a4 == 4, a4 == 4) ) /*0x5a714c*/
      break; /*0x5a714c*/
    v7 = a4 & 7; /*0x5a7159*/
    LOWORD(v4) = v4 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 160]; /*0x5a7185*/
    HIWORD(v21) += *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 162]; /*0x5a7189*/
  }
  v8 = ((_BYTE)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = HIWORD(v21) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v8 + 162]; /*0x5a71c1*/
  LOWORD(v27) = v4 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v8 + 160]; /*0x5a71c6*/
  v10 = v27; /*0x5a71cb*/
  v11 = (__int16)v27 - *a1; /*0x5a71d7*/
  v22 = HIWORD(v27); /*0x5a71db*/
  if ( v11 <= SHIWORD(v27) - a1[1] ) /*0x5a71df*/
    v11 = SHIWORD(v27) - a1[1]; /*0x5a71e1*/
  if ( v11 > 6 ) /*0x5a71e6*/
  {
    do /*0x5a720e*/
    {
      v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a71f4*/
      v12 = Math::RoundToInt((double)v20 * 9.31322574832319e-10); /*0x5a7206*/
    }
    while ( (unsigned int)v12 > 3 ); /*0x5a720e*/
    if ( v12 > 0 ) /*0x5a7212*/
    {
      v13 = *v9; /*0x5a7214*/
      v14 = v9[1]; /*0x5a7217*/
      do /*0x5a7237*/
      {
        LOWORD(v28) = v13 + v10; /*0x5a721e*/
        --v12; /*0x5a7229*/
        HIWORD(v28) = v14 + v22; /*0x5a722a*/
        v10 = v28; /*0x5a722f*/
        v22 += v14; /*0x5a7233*/
      }
      while ( v12 ); /*0x5a7237*/
    }
  }
  *(_DWORD *)aP0->__pad_0 = v10; /*0x5a723d*/
  return aP0->__pad_0; /*0x5a723f*/
}


// ==== 0x005A7250  IsAreaClearMap  this=-  sig=csp ====
char __fastcall IsAreaClearMap(MapClass *aP0, char a2, char a3)
{
  int v4; // eax
  int v5; // esi
  void *v6; // edx
  int v7; // edi
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int *v12; // esi
  void *v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  char *v17; // [esp+1Ch] [ebp-4h]

  v4 = aP0->field_0; /*0x5a7262*/
  v5 = (__int16)aP0->field_0; /*0x5a7268*/
  v15 = aP0->field_4; /*0x5a726f*/
  v16 = (__int16)v15 + v5; /*0x5a7278*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a727c*/
    return 0; /*0x5a727c*/
  if ( v5 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a7288*/
    return 0; /*0x5a7288*/
  if ( (__int16)v15 - v5 >= g_MapCellHeight_Value ) /*0x5a7292*/
    return 0; /*0x5a7292*/
  if ( v16 > g_MapCellCount ) /*0x5a72a4*/
    return 0; /*0x5a72a4*/
  v6 = aP0->field_8; /*0x5a72aa*/
  v7 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a72b1*/
  v16 = (__int16)v15 + v7; /*0x5a72bc*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a72c0*/
    return 0; /*0x5a72c0*/
  if ( v7 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a72cc*/
    return 0; /*0x5a72cc*/
  if ( (__int16)v15 - v7 >= g_MapCellHeight_Value ) /*0x5a72d6*/
    return 0; /*0x5a72d6*/
  if ( v16 > g_MapCellCount ) /*0x5a72e8*/
    return 0; /*0x5a72e8*/
  v17 = (char *)aP0->field_C + (unsigned int)v15 - 1; /*0x5a72f9*/
  v16 = (__int16)v17 + (__int16)v4; /*0x5a7308*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a730c*/
    return 0; /*0x5a730c*/
  if ( (__int16)v4 - (__int16)v17 >= g_MapCellHeight_Value ) /*0x5a7318*/
    return 0; /*0x5a7318*/
  if ( (__int16)v17 - (__int16)v4 >= g_MapCellHeight_Value ) /*0x5a7322*/
    return 0; /*0x5a7322*/
  if ( v16 > g_MapCellCount ) /*0x5a7334*/
    return 0; /*0x5a7334*/
  v8 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a733e*/
  v9 = (__int16)v17; /*0x5a7341*/
  v17 = (char *)((__int16)v17 + v8); /*0x5a734b*/
  if ( (int)v17 <= g_MapCellHeight_Value /*0x5a7377*/
    || v8 - v9 >= g_MapCellHeight_Value
    || v9 - v8 >= g_MapCellHeight_Value
    || (int)v17 > g_MapCellCount )
  {
    return 0; /*0x5a742a*/
  }
  v10 = (int)v15; /*0x5a7384*/
  if ( (int)v15 < (int)((int)v15 + (unsigned int)aP0->field_C) ) /*0x5a738a*/
  {
    do /*0x5a7418*/
    {
      v11 = v4; /*0x5a7390*/
      if ( v4 < (int)v6 + v4 ) /*0x5a7397*/
      {
        do /*0x5a73a3*/
        {
          LOWORD(v15) = v11; /*0x5a73a3*/
          HIWORD(v15) = v10; /*0x5a73a8*/
          v12 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v15); /*0x5a73b2*/
          if ( sub_4866D0(v12) ) /*0x5a73b6*/
          {
            if ( !a2 ) /*0x5a73c5*/
              return 0; /*0x5a73c5*/
          }
          else if ( sub_4866F0(v12) ) /*0x5a73cb*/
          {
            if ( !a3 ) /*0x5a73da*/
              return 0; /*0x5a73da*/
          }
          else if ( !Cell::IsEmpty(v12) && !CellClass::InMapDataRange(v12) && !CellClass::InBounds(v12) ) /*0x5a73fd*/
          {
            return 0; /*0x5a73fd*/
          }
          v6 = aP0->field_8; /*0x5a73ff*/
          v4 = aP0->field_0; /*0x5a7402*/
          ++v11; /*0x5a7405*/
        }
        while ( v11 < (int)v6 + aP0->field_0 ); /*0x5a73a3*/
      }
      ++v10; /*0x5a740d*/
    }
    while ( v10 < (int)((int)aP0->field_C + (unsigned int)aP0->field_4) ); /*0x5a7418*/
  }
  return 1; /*0x5a741e*/
}


// ==== 0x005A7440  IsMapClassAreaUniform  this=-  sig=csp ====
char __fastcall MapClass_IsAreaUniform(int *a1, char a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  char *v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebp
  char *v11; // esi
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v3 = *a1; /*0x5a7452*/
  v4 = a1[1]; /*0x5a7454*/
  v5 = (__int16)*a1; /*0x5a7457*/
  v14 = (__int16)v4 + v5; /*0x5a7462*/
  if ( v14 > g_MapCellHeight_Value /*0x5a748e*/
    && v5 - (__int16)v4 < g_MapCellHeight_Value
    && (__int16)v4 - v5 < g_MapCellHeight_Value
    && v14 <= g_MapCellCount )
  {
    v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (__int16)v4 + (__int16)v15; /*0x5a74aa*/
    if ( v14 > g_MapCellHeight_Value /*0x5a74d6*/
      && (__int16)v15 - (__int16)v4 < g_MapCellHeight_Value
      && (__int16)v4 - (__int16)v15 < g_MapCellHeight_Value
      && v14 <= g_MapCellCount )
    {
      v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (__int16)v16 + (__int16)v3; /*0x5a74f2*/
      if ( v14 > g_MapCellHeight_Value /*0x5a751e*/
        && (__int16)v3 - (__int16)v16 < g_MapCellHeight_Value
        && (__int16)v16 - (__int16)v3 < g_MapCellHeight_Value
        && v14 <= g_MapCellCount )
      {
        v6 = (__int16)v16; /*0x5a7529*/
        v16 = (__int16)v16 + (__int16)v15; /*0x5a7533*/
        if ( v16 > g_MapCellHeight_Value /*0x5a755f*/
          && (__int16)v15 - v6 < g_MapCellHeight_Value
          && v6 - (__int16)v15 < g_MapCellHeight_Value
          && v16 <= g_MapCellCount )
        {
          LOWORD(v14) = v3; /*0x5a756f*/
          HIWORD(v14) = v4; /*0x5a7574*/
          v7 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x5a7579*/
          v8 = a1[1]; /*0x5a757e*/
          v9 = v8 + a1[3]; /*0x5a758b*/
          v16 = v7[283]; /*0x5a758d*/
          if ( v8 >= v9 ) /*0x5a7593*/
            return 1; /*0x5a7635*/
          while ( 1 ) /*0x5a7599*/
          {
            v10 = *a1; /*0x5a7599*/
            if ( *a1 < *a1 + a1[2] ) /*0x5a75a2*/
              break; /*0x5a75a2*/
LABEL_28:
            if ( ++v8 >= a1[3] + a1[1] ) /*0x5a7626*/
              return 1; /*0x5a7626*/
          }
          while ( 1 ) /*0x5a75a8*/
          {
            LOWORD(v14) = v10; /*0x5a75a8*/
            HIWORD(v14) = v8; /*0x5a75b3*/
            v11 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x5a75bd*/
            if ( v11[283] != v16 ) /*0x5a75cc*/
              break; /*0x5a75cc*/
            if ( (unsigned __int8)sub_4866D0(v11) || (unsigned __int8)sub_4866F0(v11) ) /*0x5a75db*/
            {
              if ( !a2 ) /*0x5a760d*/
                return 0; /*0x5a760d*/
            }
            else if ( !Cell::IsEmpty(v11) /*0x5a7603*/
                   && !(unsigned __int8)CellClass::InMapDataRange(v11)
                   && !(unsigned __int8)CellClass::InBounds(v11) )
            {
              return 0; /*0x5a7603*/
            }
            if ( ++v10 >= *a1 + a1[2] ) /*0x5a7619*/
              goto LABEL_28; /*0x5a7619*/
          }
        }
      }
    }
  }
  return 0; /*0x5a762c*/
}


// ==== 0x005A7640  globalHelper_0A7640  this=-  sig=csp ====
_DWORD *__fastcall globalHelper_0A7640(_DWORD *a0, MapSeedClass *aP1)
{
  __int16 v2; // ax
  __int16 v3; // di
  __int16 v4; // bp
  int v5; // esi
  __int16 v6; // bx
  bool v7; // zf
  int *v9; // [esp+10h] [ebp-Ch]
  int MapSeedClass_field_0x10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = 0; /*0x5a7643*/
  v3 = 999; /*0x5a764d*/
  v4 = 0; /*0x5a7651*/
  v5 = aP1->MapSeedClass_field_0x10 - 1; /*0x5a7654*/
  v6 = 999; /*0x5a7655*/
  if ( v5 >= 0 ) /*0x5a7658*/
  {
    v9 = (int *)(aP1->MapSeedClass_field_0x04 + 4 * v5); /*0x5a7661*/
    MapSeedClass_field_0x10 = aP1->MapSeedClass_field_0x10; /*0x5a7665*/
    do /*0x5a76ac*/
    {
      v11 = *v9; /*0x5a7672*/
      if ( (__int16)*v9 < v3 ) /*0x5a7676*/
        v3 = *v9; /*0x5a7678*/
      if ( SHIWORD(v11) < v6 ) /*0x5a7683*/
        v6 = HIWORD(*v9); /*0x5a7685*/
      if ( (__int16)*v9 > v2 ) /*0x5a768b*/
        v2 = *v9; /*0x5a768d*/
      if ( SHIWORD(v11) > v4 ) /*0x5a7693*/
        v4 = HIWORD(*v9); /*0x5a7695*/
      v7 = MapSeedClass_field_0x10 == 1; /*0x5a76a3*/
      --v9; /*0x5a76a4*/
      --MapSeedClass_field_0x10; /*0x5a76a8*/
    }
    while ( !v7 ); /*0x5a76ac*/
  }
  *a0 = v3; /*0x5a76bb*/
  a0[1] = v6; /*0x5a76c1*/
  a0[2] = v2 - v3 + 1; /*0x5a76c8*/
  a0[3] = v4 - v6 + 1; /*0x5a76cb*/
  return a0; /*0x5a76c7*/
}


// ==== 0x005A76E0  MapSeedClass::ValidateRectBounds  this=MapSeedClass  sig=csp ====
char __thiscall sub_5A76E0(int *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // esi
  int *v6; // eax
  int v7; // edx
  int v8; // esi
  __int16 v9; // dx
  int *v10; // edi
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v2 = *this; /*0x5a76ee*/
  v3 = this->MapSeedClass_field_0x04; /*0x5a76f0*/
  v12 = (__int16)v3 + (__int16)v2; /*0x5a76fe*/
  if ( v12 > g_MapCellHeight_Value /*0x5a772a*/
    && (__int16)v2 - (__int16)v3 < g_MapCellHeight_Value
    && (__int16)v3 - (__int16)v2 < g_MapCellHeight_Value
    && v12 <= g_MapCellCount )
  {
    v13 = this->MapSeedClass_field_0x08 + v2 - 1; /*0x5a7737*/
    v12 = (__int16)v3 + (__int16)v13; /*0x5a7746*/
    if ( v12 > g_MapCellHeight_Value /*0x5a7772*/
      && (__int16)v13 - (__int16)v3 < g_MapCellHeight_Value
      && (__int16)v3 - (__int16)v13 < g_MapCellHeight_Value
      && v12 <= g_MapCellCount )
    {
      v14 = this->MapSeedClass_field_0x0C + v3 - 1; /*0x5a7782*/
      v12 = (__int16)v14 + (__int16)v2; /*0x5a778e*/
      if ( v12 > g_MapCellHeight_Value /*0x5a77ba*/
        && (__int16)v2 - (__int16)v14 < g_MapCellHeight_Value
        && (__int16)v14 - (__int16)v2 < g_MapCellHeight_Value
        && v12 <= g_MapCellCount )
      {
        v4 = (__int16)v14; /*0x5a77c5*/
        v14 = (__int16)v14 + (__int16)v13; /*0x5a77cf*/
        if ( v14 > g_MapCellHeight_Value /*0x5a77fa*/
          && (__int16)v13 - v4 < g_MapCellHeight_Value
          && v4 - (__int16)v13 < g_MapCellHeight_Value
          && v14 <= g_MapCellCount )
        {
          if ( __OFSUB__(v3, v3 + 3) ) /*0x5a7805*/
          {
LABEL_24:
            v8 = *this; /*0x5a785b*/
            if ( *this >= *this + 3 ) /*0x5a7862*/
              return 1; /*0x5a78b9*/
            while ( 1 ) /*0x5a786b*/
            {
              v9 = this->MapSeedClass_field_0x04 + 3; /*0x5a786b*/
              LOWORD(v12) = v8; /*0x5a7874*/
              HIWORD(v12) = v9; /*0x5a7879*/
              v10 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7883*/
              if ( !CellClass::InBounds(v10) && !Cell::IsEmpty(v10) && !CellClass::InMapDataRange(v10) ) /*0x5a789d*/
                break; /*0x5a789d*/
              if ( ++v8 >= *this + 3 ) /*0x5a78ae*/
                return 1; /*0x5a78ae*/
            }
          }
          else
          {
            while ( 1 ) /*0x5a7807*/
            {
              v5 = v2; /*0x5a7807*/
              if ( !__OFSUB__(v2, v2 + 3) ) /*0x5a780e*/
                break; /*0x5a780e*/
LABEL_23:
              if ( ++v3 >= this->MapSeedClass_field_0x04 + 3 ) /*0x5a7859*/
                goto LABEL_24; /*0x5a7859*/
            }
            while ( 1 ) /*0x5a7814*/
            {
              LOWORD(v12) = v5; /*0x5a7814*/
              HIWORD(v12) = v3; /*0x5a781f*/
              v6 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7824*/
              v7 = v6[14]; /*0x5a7829*/
              if ( (v7 < g_CellTileTypeCache || v7 > g_CellTileTypeCache + 1) && !Value::InRange(v6) ) /*0x5a783d*/
                break; /*0x5a783d*/
              v2 = *this; /*0x5a7846*/
              if ( ++v5 >= *this + 3 ) /*0x5a784e*/
                goto LABEL_23; /*0x5a784e*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x5a78b0*/
}


// ==== 0x005A78D0  PlaceMapSeedBuildingsStrategic  this=-  sig=csp ====
unsigned int __stdcall PlaceMapSeedBuildingsStrategic(int a1)
{
  int v1; // edi
  int v2; // ecx
  unsigned int result; // eax
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // edi
  char v10; // bl
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  int v20; // esi
  int v21; // [esp+10h] [ebp-94h]
  double v22; // [esp+14h] [ebp-90h]
  int *v23; // [esp+14h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-88h] BYREF
  int v25; // [esp+20h] [ebp-84h]
  int v26; // [esp+24h] [ebp-80h]
  int v27; // [esp+28h] [ebp-7Ch]
  _WORD v28[2]; // [esp+2Ch] [ebp-78h] BYREF
  int v29; // [esp+30h] [ebp-74h]
  int v30; // [esp+34h] [ebp-70h]
  int v31; // [esp+38h] [ebp-6Ch]
  __int64 v32; // [esp+3Ch] [ebp-68h]
  __int64 v33; // [esp+44h] [ebp-60h]
  __int64 v34; // [esp+4Ch] [ebp-58h]
  int v35; // [esp+54h] [ebp-50h]
  int v36; // [esp+58h] [ebp-4Ch]
  int v37; // [esp+5Ch] [ebp-48h]
  _DWORD v38[17]; // [esp+60h] [ebp-44h] BYREF

  v37 = 6; /*0x5a78e3*/
  v38[0] = 4; /*0x5a78e7*/
  v1 = a1; /*0x5a78f3*/
  v38[4] = 6; /*0x5a78fa*/
  v38[8] = 4; /*0x5a7902*/
  v38[3] = 4; /*0x5a7910*/
  v38[7] = 4; /*0x5a7914*/
  v38[11] = 4; /*0x5a7918*/
  v35 = 0; /*0x5a791f*/
  v36 = 0; /*0x5a7923*/
  v38[1] = 0; /*0x5a7927*/
  v38[2] = 0; /*0x5a792b*/
  v38[5] = 0; /*0x5a792f*/
  v38[6] = 0; /*0x5a7933*/
  v38[9] = 0; /*0x5a7937*/
  v38[10] = 0; /*0x5a793e*/
  v38[13] = 0; /*0x5a7947*/
  v38[14] = 0; /*0x5a794e*/
  v2 = *(_DWORD *)(a1 + 16); /*0x5a7955*/
  v38[15] = 2; /*0x5a795d*/
  v38[12] = 2; /*0x5a796b*/
  result = (unsigned int)((unsigned __int64)(1374389535LL * v2) >> 32) >> 31; /*0x5a7972*/
  v4 = v2 / 50; /*0x5a797c*/
  v38[16] = 4; /*0x5a797e*/
  v30 = v2 / 50; /*0x5a7987*/
  v21 = 0; /*0x5a798f*/
  v5 = 10 * (v2 / 50); /*0x5a7993*/
  v29 = 0; /*0x5a7997*/
  v31 = v5; /*0x5a799b*/
  if ( v5 > 0 ) /*0x5a799f*/
  {
    while ( v21 < v4 ) /*0x5a79b2*/
    {
      v6 = *(_DWORD *)(v1 + 16) - 1; /*0x5a79c3*/
      v34 = *(unsigned int *)(v1 + 16); /*0x5a79c7*/
      v22 = (double)v34; /*0x5a79cf*/
      do /*0x5a79fe*/
      {
        v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a79dd*/
        v7 = Math::RoundToInt((double)v33 * v22 * 2.328306437080797e-10); /*0x5a79f7*/
      }
      while ( v7 > v6 ); /*0x5a79fe*/
      v8 = *(_DWORD *)(v1 + 4); /*0x5a7a00*/
      v9 = 0; /*0x5a7a03*/
      v10 = 0; /*0x5a7a05*/
      v11 = *(_DWORD *)(v8 + 4 * v7); /*0x5a7a07*/
      v12 = SHIWORD(v11); /*0x5a7a0e*/
      v24 = (__int16)v11; /*0x5a7a16*/
      v26 = 0; /*0x5a7a1c*/
      v27 = 0; /*0x5a7a20*/
      v13 = v38; /*0x5a7a24*/
      v25 = v12; /*0x5a7a28*/
      v23 = v38; /*0x5a7a2c*/
      while ( v9 < 5 ) /*0x5a7a39*/
      {
        v14 = *(v13 - 1); /*0x5a7a3b*/
        v15 = *v13; /*0x5a7a3e*/
        v26 = v14; /*0x5a7a44*/
        v27 = v15; /*0x5a7a48*/
        if ( (unsigned __int8)CellClass::ProcessUpdate(&v24) ) /*0x5a7a4c*/
          v10 = 1; /*0x5a7a55*/
        ++v9; /*0x5a7a5b*/
        v23 += 4; /*0x5a7a61*/
        if ( v10 ) /*0x5a7a65*/
        {
          do /*0x5a7a99*/
          {
            v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a7a7b*/
            v16 = Math::RoundToInt((double)v32 * 0.000000001396983862248478); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          v17 = 0; /*0x5a7aa1*/
          v18 = v16 + unk_AA10A4 + 8; /*0x5a7aa3*/
          if ( v27 / 2 > 0 ) /*0x5a7ab2*/
          {
            v19 = v26; /*0x5a7ab4*/
            do /*0x5a7b08*/
            {
              v20 = 0; /*0x5a7aba*/
              if ( v19 / 2 > 0 ) /*0x5a7ac3*/
              {
                do /*0x5a7afa*/
                {
                  v28[1] = v25 + 2 * v17; /*0x5a7ad7*/
                  v28[0] = v24 + 2 * v20; /*0x5a7ae2*/
                  PlaceMapSeedClassBuildings(v18, v28, -1, -1); /*0x5a7ae7*/
                  v19 = v26; /*0x5a7aec*/
                  ++v20; /*0x5a7af0*/
                }
                while ( v20 < v26 / 2 ); /*0x5a7afa*/
              }
              ++v17; /*0x5a7b00*/
            }
            while ( v17 < v27 / 2 ); /*0x5a7b08*/
            v5 = v31; /*0x5a7b0a*/
          }
          v4 = v30; /*0x5a7b12*/
          ++v21; /*0x5a7b17*/
          break; /*0x5a7b17*/
        }
        v13 = v23; /*0x5a7a32*/
      }
      result = ++v29; /*0x5a7b1f*/
      if ( v29 >= v5 ) /*0x5a7b26*/
        break; /*0x5a7b26*/
      v1 = a1; /*0x5a79a7*/
    }
  }
  return result; /*0x5a7b2c*/
}


// ==== 0x005A7B40  CellClass::ProcessUpdate  this=CellClass  sig=csp ====
char __thiscall sub_5A7B40(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  int *v11; // esi
  int v12; // ebx
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v2 = *this; /*0x5a7b4f*/
  v3 = this->foggedObjects; /*0x5a7b52*/
  v4 = (__int16)*this; /*0x5a7b55*/
  v14 = v3; /*0x5a7b5b*/
  v15 = (__int16)v3 + v4; /*0x5a7b64*/
  if ( v15 > g_MapCellHeight_Value /*0x5a7b90*/
    && v4 - (__int16)v3 < g_MapCellHeight_Value
    && (__int16)v3 - v4 < g_MapCellHeight_Value
    && v15 <= g_MapCellCount )
  {
    v5 = this->bridgeOwnerCell; /*0x5a7b96*/
    v6 = (__int16)(v5 + v2 - 1); /*0x5a7b9d*/
    v15 = (__int16)v3 + v6; /*0x5a7ba8*/
    if ( v15 > g_MapCellHeight_Value /*0x5a7bd4*/
      && v6 - (__int16)v3 < g_MapCellHeight_Value
      && (__int16)v3 - v6 < g_MapCellHeight_Value
      && v15 <= g_MapCellCount )
    {
      v16 = this->unknown30 + v3 - 1; /*0x5a7be5*/
      v15 = (__int16)v16 + (__int16)v2; /*0x5a7bf4*/
      if ( v15 > g_MapCellHeight_Value /*0x5a7c20*/
        && (__int16)v2 - (__int16)v16 < g_MapCellHeight_Value
        && (__int16)v16 - (__int16)v2 < g_MapCellHeight_Value
        && v15 <= g_MapCellCount )
      {
        v7 = (__int16)(v5 + v2 - 1); /*0x5a7c2a*/
        v8 = (__int16)v16; /*0x5a7c2d*/
        v16 = (__int16)v16 + v7; /*0x5a7c37*/
        if ( v16 > g_MapCellHeight_Value /*0x5a7c63*/
          && v7 - v8 < g_MapCellHeight_Value
          && v8 - v7 < g_MapCellHeight_Value
          && v16 <= g_MapCellCount )
        {
          v9 = v3; /*0x5a7c69*/
          if ( v3 >= v3 + this->unknown30 ) /*0x5a7c78*/
            return 1; /*0x5a7cf2*/
          while ( 1 ) /*0x5a7c7a*/
          {
            v10 = v2; /*0x5a7c7a*/
            if ( v2 < v5 + v2 ) /*0x5a7c81*/
              break; /*0x5a7c81*/
LABEL_24:
            v14 = ++v9; /*0x5a7ce3*/
            if ( v9 >= this->unknown30 + this->foggedObjects ) /*0x5a7ce7*/
              return 1; /*0x5a7ce7*/
          }
          while ( 1 ) /*0x5a7c87*/
          {
            HIWORD(v15) = v9; /*0x5a7c87*/
            LOWORD(v15) = v10; /*0x5a7c92*/
            v11 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x5a7c9c*/
            v12 = v11[14]; /*0x5a7ca0*/
            if ( !CellClass::InBounds(v11) && (v12 < unk_AA10A4 || v12 > unk_AA10A4 + 7) ) /*0x5a7cba*/
              break; /*0x5a7cba*/
            if ( v11[57] ) /*0x5a7cbc*/
              break; /*0x5a7cbc*/
            v5 = this->bridgeOwnerCell; /*0x5a7cc6*/
            v2 = *this; /*0x5a7cc9*/
            ++v10; /*0x5a7ccc*/
            v9 = v14; /*0x5a7cd2*/
            if ( v10 >= v5 + *this ) /*0x5a7cd6*/
              goto LABEL_24; /*0x5a7cd6*/
          }
        }
      }
    }
  }
  return 0; /*0x5a7ce9*/
}


// ==== 0x005A7D00  Map_Helper_5A7D00  this=-  sig=csp ====
char __fastcall sub_5A7D00(int a1, _WORD *a2, char a3, char a4)
{
  _DWORD *v4; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  __int16 v10; // cx
  int v11; // eax
  int v12; // ecx
  int *v13; // edi
  int v14; // esi
  _DWORD *v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h] BYREF
  int v18; // [esp+18h] [ebp-Ch]
  _WORD *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + a1); /*0x5a7d0b*/
  v6 = *v4; /*0x5a7d13*/
  v19 = a2; /*0x5a7d15*/
  v16 = v4; /*0x5a7d19*/
  v20 = (*(int (__thiscall **)(_DWORD *))(v6 + 156))(v4); /*0x5a7d25*/
  if ( v20 ) /*0x5a7d29*/
  {
    v7 = 0; /*0x5a7d35*/
    if ( (int)v4[186] > 0 ) /*0x5a7d39*/
    {
      v8 = g_MapCellHeight_Value; /*0x5a7d3f*/
      while ( 1 ) /*0x5a7d49*/
      {
        v9 = 0; /*0x5a7d49*/
        if ( (int)v16[185] > 0 ) /*0x5a7d53*/
          break; /*0x5a7d53*/
LABEL_17:
        if ( ++v7 >= v16[186] ) /*0x5a7e55*/
          return 1; /*0x5a7e64*/
      }
      while ( 1 ) /*0x5a7d5f*/
      {
        v10 = a2[1] + v7; /*0x5a7d5f*/
        LOWORD(v18) = v9 + *a2; /*0x5a7d66*/
        HIWORD(v18) = v10; /*0x5a7d6b*/
        v17 = v18; /*0x5a7d74*/
        v11 = v10; /*0x5a7d7b*/
        v12 = v10 + (__int16)v18; /*0x5a7d7e*/
        if ( v12 <= v8 || (__int16)v18 - v11 >= v8 || v11 - (__int16)v18 >= v8 || v12 > g_MapCellCount ) /*0x5a7da5*/
        {
          if ( a4 ) /*0x5a7e6d*/
            return 0; /*0x5a7e6d*/
        }
        else
        {
          v13 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x5a7dba*/
          v14 = *(_DWORD *)(v20 + 4 * (v9 + v7 * v16[185]) + 16); /*0x5a7dcf*/
          if ( v14 /*0x5a7e27*/
            && (!Cell::IsEmpty(v13) && !sub_4863A0(v13)
             || *((unsigned __int8 *)v13 + 284) != *(char *)(v14 + 42)
             || a3 && *((_BYTE *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SHIWORD(v17) + 70)) )
          {
            return 0; /*0x5a7e7a*/
          }
          v8 = g_MapCellHeight_Value; /*0x5a7e2f*/
        }
        a2 = v19; /*0x5a7e39*/
        if ( ++v9 >= v16[185] ) /*0x5a7e44*/
          goto LABEL_17; /*0x5a7e44*/
      }
    }
  }
  return 1; /*0x5a7e5b*/
}


// ==== 0x005A7E90  Object_Helper_5A7E90  this=-  sig=csp ====
int __fastcall sub_5A7E90(int a1, _WORD *a2)
{
  _DWORD *v2; // ebx
  int result; // eax
  int v4; // ebp
  int v5; // edi
  int i; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-14h]
  _DWORD *v10; // [esp+Ch] [ebp-10h]
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 156))(v2); /*0x5a7ea9*/
  v13 = result; /*0x5a7eb1*/
  if ( result ) /*0x5a7eb5*/
  {
    result = v2[186]; /*0x5a7ebb*/
    v4 = 0; /*0x5a7ec1*/
    if ( result > 0 ) /*0x5a7ec5*/
    {
      v5 = g_MapCellHeight_Value; /*0x5a7ecd*/
      do /*0x5a7f85*/
      {
        for ( i = 0; i < v2[185]; ++i ) /*0x5a7edd*/
        {
          LOWORD(v9) = i + *a2; /*0x5a7ef4*/
          HIWORD(v9) = a2[1] + v4; /*0x5a7ef9*/
          v12 = v9; /*0x5a7f02*/
          v7 = SHIWORD(v9) + (__int16)v9; /*0x5a7f0c*/
          if ( v7 > v5 ) /*0x5a7f11*/
          {
            if ( (__int16)v9 - SHIWORD(v9) >= v5 || SHIWORD(v9) - (__int16)v9 >= v5 || v7 > g_MapCellCount ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(_DWORD *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((_BYTE *)v8 + 282) = 0; /*0x5a7f5a*/
              }
              v5 = g_MapCellHeight_Value; /*0x5a7f61*/
            }
          }
        }
        result = v2[186]; /*0x5a7f7c*/
        ++v4; /*0x5a7f82*/
      }
      while ( v4 < result ); /*0x5a7f85*/
    }
  }
  return result; /*0x5a7f8d*/
}


// ==== 0x005A7FA0  DrawIsoTile  this=-  sig=csp ====
int __fastcall IsoTile_Draw(int a1, _WORD *a2, char a3)
{
  _WORD *v3; // esi
  _DWORD *v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // edi
  int i; // ebx
  __int16 v9; // dx
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // [esp+8h] [ebp-10h]
  _DWORD *v14; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x5a7faa*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + a1); /*0x5a7fac*/
  v14 = v4; /*0x5a7fb5*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a7fbb*/
  v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      v6 = g_MapCellHeight_Value; /*0x5a7fe3*/
      while ( 1 ) /*0x5a7fef*/
      {
        v7 = v4[185]; /*0x5a7fef*/
        for ( i = 0; i < v7; v7 = v14[185] ) /*0x5a7ff9*/
        {
          v9 = v3[1] + result; /*0x5a8005*/
          v10 = (__int16)(i + *v3); /*0x5a800c*/
          v11 = v9; /*0x5a800f*/
          v12 = v9 + v10; /*0x5a8012*/
          if ( v12 > v6 ) /*0x5a8017*/
          {
            if ( v10 - v11 >= v6 || v11 - v10 >= v6 || v12 > g_MapCellCount ) /*0x5a802f*/
            {
              result = v13; /*0x5a806a*/
            }
            else
            {
              result = v13; /*0x5a8031*/
              if ( *(_DWORD *)(v16 + 4 * (i + v13 * v7) + 16) ) /*0x5a803e*/
              {
                *((_BYTE *)g_MapTileArray + 80 * v10 + 80 * unk_89C2DC * v11 + 70) = a3; /*0x5a805e*/
                v6 = g_MapCellHeight_Value; /*0x5a8062*/
              }
            }
          }
          v3 = a2; /*0x5a8072*/
          ++i; /*0x5a8076*/
        }
        v13 = ++result; /*0x5a808a*/
        if ( result >= v14[186] ) /*0x5a8094*/
          break; /*0x5a8094*/
        v4 = v14; /*0x5a7feb*/
      }
    }
  }
  return result; /*0x5a809c*/
}


// ==== 0x005A80B0  RandomMap::PlaceMapSeedBuildings  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceMapSeedBuildings(int *this)
{
  int v1; // edx
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  int *v8; // eax
  int v9; // edi
  int result; // eax
  int v11; // esi
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // esi
  _WORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int *v18; // esi
  int v19; // [esp+10h] [ebp-4Ch] BYREF
  int v20; // [esp+14h] [ebp-48h]
  int v21; // [esp+18h] [ebp-44h]
  int v22; // [esp+1Ch] [ebp-40h]
  int v23; // [esp+20h] [ebp-3Ch] BYREF
  double v24; // [esp+24h] [ebp-38h]
  int v25; // [esp+2Ch] [ebp-30h]
  int v26; // [esp+30h] [ebp-2Ch]
  int *v27; // [esp+34h] [ebp-28h]
  __int16 v28; // [esp+38h] [ebp-24h] BYREF
  __int64 v29; // [esp+3Ch] [ebp-20h]
  __int64 v30; // [esp+44h] [ebp-18h]
  int v31[4]; // [esp+4Ch] [ebp-10h] BYREF

  v1 = dword_ABC1D4; /*0x5a80b3*/
  v27 = this; /*0x5a80c1*/
  v3 = 0; /*0x5a80c5*/
  v4 = &dword_ABE378; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    v5 = v1 + v3++; /*0x5a80cc*/
    *v4 = v5; /*0x5a80d0*/
    v4 += 3; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&dword_ABE834 ); /*0x5a80da*/
  v6 = dword_ABBEC0; /*0x5a80dc*/
  v7 = 0; /*0x5a80e2*/
  v8 = &dword_ABE834; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    v9 = v6 + v7++; /*0x5a80e9*/
    *v8 = v9; /*0x5a80ed*/
    v8 += 3; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)dword_ABE894 ); /*0x5a80f7*/
  v26 = Math::RoundToInt((double)this->RandomMap_field_0x18 + 0.49 + (double)this->RandomMap_field_0x18 + 0.49); /*0x5a8109*/
  v25 = 0; /*0x5a810d*/
  v21 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v26; /*0x5a8115*/
    if ( v21 >= v26 ) /*0x5a811f*/
      break; /*0x5a811f*/
    v19 = 0; /*0x5a8125*/
    v20 = 0; /*0x5a812f*/
LABEL_8:
    v11 = unk_89C2DC; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
      v12 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
        v13 = v11 * v11 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          v29 = v13 + 1; /*0x5a814a*/
          v24 = (double)v29; /*0x5a8152*/
          do /*0x5a817f*/
          {
            v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8160*/
            v14 = Math::RoundToInt((double)v30 * v24 * 2.328306437080797e-10); /*0x5a817b*/
          }
          while ( v14 > v13 ); /*0x5a817f*/
          v15 = CellStruct::Set(&v28, 0, 0); /*0x5a8187*/
        }
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v14, v15) ); /*0x5a819b*/
        ++v12; /*0x5a81af*/
        v23 = *((_DWORD *)g_MapTileArray + 20 * v14); /*0x5a81b9*/
        if ( v12 > 200 ) /*0x5a81bd*/
        {
          v22 = 0; /*0x5a81e4*/
          v17 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x5a81c9*/
        if ( Cell::IsEmpty(v16) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v11 = unk_89C2DC; /*0x5a81d9*/
      }
      v17 = v23; /*0x5a81f4*/
LABEL_19:
      LODWORD(v24) = v17; /*0x5a81fc*/
      v19 = v17; /*0x5a8201*/
      if ( ++v20 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v11 = unk_89C2DC; /*0x5a8213*/
      if ( !*((_BYTE *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SWORD1(v24) + 69) ) /*0x5a822f*/
      {
        v31[0] = (__int16)v17 - 4; /*0x5a823f*/
        v31[1] = SWORD1(v24) - 4; /*0x5a8243*/
        v31[2] = 8; /*0x5a8253*/
        v31[3] = 8; /*0x5a8257*/
        if ( !IsAreaClearMap(v31, 0, 0) || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v19, 1) ) /*0x5a8274*/
          goto LABEL_8; /*0x5a827b*/
        break; /*0x5a827b*/
      }
    }
    if ( v20 != 20 ) /*0x5a8286*/
    {
      v18 = v27; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings(&v19) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v18, (__int16 *)&v19); /*0x5a82a3*/
        PlaceNeutralCreeps(&v19); /*0x5a82af*/
        ++v21; /*0x5a82b4*/
      }
    }
    result = ++v25; /*0x5a82bc*/
  }
  while ( v25 < 10 ); /*0x5a82c4*/
  return result; /*0x5a82ca*/
}


// ==== 0x005A82E0  ObjectClass::ScatterMapSeedBuildings  this=ObjectClass  sig=csp ====
void __thiscall MapSeed_PlaceBuildingsScatter(_DWORD *this, __int16 *a2)
{
  __int16 *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char **v7; // esi
  int v8; // eax
  void *v9; // eax
  int Owner; // eax
  int v11; // ebp
  unsigned int v12; // eax
  int IndexByName; // esi
  void *v14; // eax
  _DWORD *v15; // ebp
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int16 v18; // bx
  __int16 v19; // di
  int *v20; // ecx
  __int16 v21; // bx
  int v22; // edx
  _WORD *v23; // ebp
  __int16 v24; // dx
  _DWORD *v25; // esi
  int v26; // edx
  signed int v27; // eax
  char v28; // [esp+14h] [ebp-8Eh]
  char v29; // [esp+15h] [ebp-8Dh]
  _DWORD *v30; // [esp+16h] [ebp-8Ch]
  unsigned int v31; // [esp+1Ah] [ebp-88h]
  int v32; // [esp+1Eh] [ebp-84h]
  int v33; // [esp+22h] [ebp-80h]
  void **v34; // [esp+26h] [ebp-7Ch] BYREF
  void *Block; // [esp+2Ah] [ebp-78h]
  int v36; // [esp+2Eh] [ebp-74h]
  char v37; // [esp+33h] [ebp-6Fh]
  signed int v38; // [esp+36h] [ebp-6Ch]
  int v39; // [esp+3Ah] [ebp-68h]
  signed int v40; // [esp+3Eh] [ebp-64h]
  double v41; // [esp+42h] [ebp-60h]
  int v42; // [esp+4Ah] [ebp-58h]
  int v43; // [esp+4Eh] [ebp-54h]
  int v44; // [esp+52h] [ebp-50h]
  __int16 v45; // [esp+56h] [ebp-4Ch]
  __int16 v46; // [esp+58h] [ebp-4Ah]
  __int64 v47; // [esp+5Ah] [ebp-48h]
  double v48; // [esp+62h] [ebp-40h] BYREF
  int v49; // [esp+6Ah] [ebp-38h]
  __int64 v50; // [esp+6Eh] [ebp-34h]
  __int64 v51; // [esp+76h] [ebp-2Ch]
  __int64 v52; // [esp+7Eh] [ebp-24h]
  __int64 v53; // [esp+86h] [ebp-1Ch]
  __int64 v54; // [esp+8Eh] [ebp-14h]
  _DWORD v55[3]; // [esp+96h] [ebp-Ch] BYREF

  do /*0x5a831e*/
  {
    v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5a82f6*/
    v43 = Math::RoundToInt((double)v47 * 0.000000001164153218540399 + 8.0); /*0x5a831a*/
  }
  while ( (unsigned int)v43 > 0xC ); /*0x5a831e*/
  v3 = a2; /*0x5a8320*/
  v33 = 0; /*0x5a832f*/
  v32 = 0; /*0x5a8333*/
  LODWORD(v47) = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2) + 283); /*0x5a8343*/
  v4 = this->attachedBomb; /*0x5a8347*/
  v42 = 0; /*0x5a834c*/
  v31 = 35; /*0x5a8350*/
  if ( !v4 ) /*0x5a8358*/
    v42 = 15; /*0x5a835a*/
  StringVector::Construct(&v34, 0, 0); /*0x5a8368*/
  v5 = v36; /*0x5a836d*/
  v6 = 10; /*0x5a8371*/
  v34 = &vt_DynamicVectorClass_char; /*0x5a8376*/
  v39 = 10; /*0x5a837e*/
  v38 = 0; /*0x5a8382*/
  v7 = off_82B1B0; /*0x5a8386*/
  while ( 1 ) /*0x5a8391*/
  {
    if ( v38 < v5 ) /*0x5a8395*/
      goto LABEL_11; /*0x5a8395*/
    if ( (v37 || !v5) && v6 > 0 ) /*0x5a83a5*/
    {
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v34[2])(&v34, v6 + v5, 0) ) /*0x5a83b3*/
      {
LABEL_11:
        v8 = v38++; /*0x5a83ba*/
        *((_DWORD *)Block + v8) = *v7; /*0x5a83cb*/
      }
      v5 = v36; /*0x5a83ce*/
    }
    if ( (int)++v7 >= (int)&off_82B240 ) /*0x5a83db*/
      break; /*0x5a83db*/
    v6 = v39; /*0x5a838d*/
  }
  v9 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a83e2*/
  Owner = HouseClass::FindOwner(v9); /*0x5a83e9*/
  v11 = v43; /*0x5a83ee*/
  v49 = Owner; /*0x5a83f2*/
  if ( v43 > 0 ) /*0x5a83f8*/
  {
    do /*0x5a86e5*/
    {
      if ( v33 >= 2 * v11 ) /*0x5a8408*/
        break; /*0x5a8408*/
      v53 = (unsigned int)v42; /*0x5a8421*/
      v52 = v31 - v42 + 1; /*0x5a8430*/
      v48 = (double)v52; /*0x5a8438*/
      v41 = (double)(unsigned int)v42; /*0x5a8443*/
      do /*0x5a8476*/
      {
        v50 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8451*/
        v12 = Math::RoundToInt((double)v50 * v48 * 2.328306437080797e-10 + v41); /*0x5a846b*/
        v40 = v12; /*0x5a8472*/
      }
      while ( v12 > v31 ); /*0x5a8476*/
      IndexByName = BuildingTypeClass::FindIndexByName(*((void **)Block + v12)); /*0x5a8484*/
      if ( IndexByName != -1 ) /*0x5a8489*/
      {
        v14 = __2_YAPAXI_Z(0x720u); /*0x5a8494*/
        if ( v14 ) /*0x5a849e*/
        {
          v15 = (_DWORD *)BuildingClass::Construct((int)v14, *((_DWORD *)g_TriggerTypeCount + IndexByName), v49); /*0x5a84b6*/
          LODWORD(v41) = 0; /*0x5a84b8*/
          v30 = v15; /*0x5a84bc*/
        }
        else
        {
          v30 = 0; /*0x5a84c7*/
          v15 = 0; /*0x5a84cb*/
          LODWORD(v41) = 0; /*0x5a84cd*/
        }
        v28 = 0; /*0x5a84c0*/
        while ( SLODWORD(v41) < 60 ) /*0x5a84e3*/
        {
          do /*0x5a8518*/
          {
            v54 = (unsigned int)Random::State(&g_Randomizer); /*0x5a84f3*/
            v16 = Math::RoundToInt((double)v54 * 0.000000003492459655621196); /*0x5a8513*/
          }
          while ( v16 > 0xE ); /*0x5a8518*/
          do /*0x5a853e*/
          {
            v51 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8524*/
            v17 = Math::RoundToInt((double)v51 * 0.000000003492459655621196); /*0x5a8536*/
          }
          while ( v17 > 0xE ); /*0x5a853e*/
          v18 = *v3; /*0x5a8540*/
          v19 = v16 - 7 + v3[1]; /*0x5a854d*/
          v20 = (int *)v15[328]; /*0x5a8550*/
          v21 = v17 - 7 + v18; /*0x5a8556*/
          v22 = *v20; /*0x5a855b*/
          v45 = v21; /*0x5a855d*/
          v46 = v19; /*0x5a8562*/
          v23 = (_WORD *)(*(int (__thiscall **)(int *, int))(v22 + 144))(v20, 1); /*0x5a856d*/
          v29 = 1; /*0x5a856f*/
          while ( *v23 != 0x7FFF || v23[1] != 0x7FFF ) /*0x5a8582*/
          {
            v24 = v19 + v23[1]; /*0x5a8592*/
            LOWORD(v44) = v45 + *v23; /*0x5a8599*/
            HIWORD(v44) = v24; /*0x5a859e*/
            LODWORD(v48) = v44; /*0x5a85ad*/
            v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x5a85b6*/
            if ( v25[57] /*0x5a85eb*/
              || !Cell::IsEmpty(v25)
              || *((char *)v25 + 283) != (_DWORD)v47
              || v25[59] == 3
              || !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)v25, 1) )
            {
              v29 = 0; /*0x5a85f4*/
            }
            v23 += 2; /*0x5a85fd*/
            if ( !v29 ) /*0x5a8602*/
              goto LABEL_43; /*0x5a8602*/
          }
          v55[1] = (v19 << 8) + 128; /*0x5a8630*/
          v55[0] = (v21 << 8) + 128; /*0x5a863b*/
          v26 = *v30; /*0x5a8649*/
          v55[2] = 0; /*0x5a864e*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v26 + 216))(v30, v55, 0) ) /*0x5a8659*/
          {
            v27 = v40; /*0x5a866b*/
            v28 = 1; /*0x5a8672*/
            ++v32; /*0x5a8677*/
            if ( v40 < v38 && v40 < --v38 ) /*0x5a8684*/
            {
              do /*0x5a8698*/
              {
                ++v27; /*0x5a868a*/
                *((_DWORD *)Block + v27 - 1) = *((_DWORD *)Block + v27); /*0x5a868e*/
              }
              while ( v27 < v38 ); /*0x5a8698*/
            }
            --v31; /*0x5a869a*/
          }
LABEL_43:
          v3 = a2; /*0x5a869e*/
          ++LODWORD(v41); /*0x5a86b0*/
          if ( v28 ) /*0x5a86b4*/
            goto LABEL_47; /*0x5a86b4*/
          v15 = v30; /*0x5a84d8*/
        }
        if ( v15 ) /*0x5a86c8*/
          (*(void (__thiscall **)(_DWORD *, int))(*v15 + 32))(v15, 1); /*0x5a86d1*/
LABEL_47:
        v11 = v43; /*0x5a86d4*/
        ++v33; /*0x5a86dd*/
      }
    }
    while ( v32 < v11 ); /*0x5a86e5*/
  }
  v34 = &vt_VectorClass_char; /*0x5a86f4*/
  if ( Block ) /*0x5a86fd*/
  {
    if ( v37 ) /*0x5a8705*/
      __3_YAXPAX_Z(Block); /*0x5a8708*/
  }
}


// ==== 0x005A8720  PlaceNeutralCreeps  this=-  sig=csp ====
int __stdcall PlaceNeutralCreeps(_WORD *a1)
{
  void *v1; // eax
  IUnknown *OwnerHouseClass; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByNameFactory; // eax
  _DWORD *v8; // esi
  void *v9; // edi
  int IndexBuildingTypeClass; // eax
  int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int16 v14; // cx
  __int16 v15; // di
  __int16 v16; // ax
  unsigned int v17; // eax
  int v18; // edx
  int v19; // eax
  char v20; // [esp+13h] [ebp-49h]
  int v21; // [esp+14h] [ebp-48h] BYREF
  int v22; // [esp+18h] [ebp-44h]
  int v23; // [esp+1Ch] [ebp-40h]
  int v24; // [esp+20h] [ebp-3Ch]
  __int64 v25; // [esp+24h] [ebp-38h]
  IUnknown *v26; // [esp+2Ch] [ebp-30h]
  __int64 v27; // [esp+30h] [ebp-2Ch]
  __int64 v28; // [esp+38h] [ebp-24h]
  __int64 v29; // [esp+40h] [ebp-1Ch]
  __int64 v30; // [esp+48h] [ebp-14h]
  _DWORD v31[3]; // [esp+50h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a874a*/
    result = Math::RoundToInt((double)v25 * 9.31322574832319e-10 + 1.0); /*0x5a8762*/
    v23 = result; /*0x5a876a*/
  }
  while ( (unsigned int)result > 4 ); /*0x5a876e*/
  v22 = 0; /*0x5a8772*/
  v24 = 0; /*0x5a8776*/
  if ( result > 0 ) /*0x5a877a*/
  {
    while ( 1 ) /*0x5a878e*/
    {
      result = 2 * v23; /*0x5a878e*/
      if ( v22 >= 2 * v23 ) /*0x5a8792*/
        return result; /*0x5a8792*/
      do /*0x5a87be*/
      {
        v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a87a2*/
        v4 = Math::RoundToInt((double)v27 * 0.000000001396983862248478); /*0x5a87b4*/
        v5 = v4; /*0x5a87b9*/
      }
      while ( (unsigned int)v4 > 5 ); /*0x5a87be*/
      if ( v4 > 2 ) /*0x5a87c3*/
      {
        v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a8804*/
        if ( !v9 ) /*0x5a880b*/
        {
LABEL_13:
          v8 = 0; /*0x5a882f*/
          goto LABEL_14; /*0x5a882f*/
        }
        IndexBuildingTypeClass = BuildingTypeClass::FindIndex(*(&off_82B240 + v5)); /*0x5a8814*/
        v8 = (_DWORD *)UnitClass::Construct( /*0x5a882b*/
                         (int)v9,
                         *((_DWORD *)g_UnitTypeCount2 + IndexBuildingTypeClass),
                         OwnerHouseClass);
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a87cf*/
        if ( !v6 ) /*0x5a87d6*/
          goto LABEL_13; /*0x5a87d6*/
        ExitCellByNameFactory = Factory::FindExitCellByName(*(&off_82B240 + v5)); /*0x5a87df*/
        v8 = (_DWORD *)InfantryClass::Construct( /*0x5a87f6*/
                         (int)v6,
                         *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      v11 = 0; /*0x5a8831*/
      v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
        do /*0x5a8866*/
        {
          v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a884a*/
          v12 = Math::RoundToInt((double)v28 * 0.000000003958120943037356); /*0x5a8861*/
        }
        while ( v12 > 0x10 ); /*0x5a8866*/
        do /*0x5a888c*/
        {
          v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8872*/
          v13 = Math::RoundToInt((double)v29 * 0.000000003958120943037356); /*0x5a8884*/
        }
        while ( v13 > 0x10 ); /*0x5a888c*/
        v14 = v12 - 8; /*0x5a8892*/
        v15 = v13 - 8 + *a1; /*0x5a889d*/
        v16 = v14 + a1[1]; /*0x5a88a4*/
        LOWORD(v25) = v15; /*0x5a88a7*/
        WORD1(v25) = v16; /*0x5a88ac*/
        v21 = v25; /*0x5a88b9*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21) + 57) )
        {
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a88f5*/
            v17 = Math::RoundToInt((double)v30 * 0.000000001862645149664638); /*0x5a8907*/
          }
          while ( v17 > 7 ); /*0x5a890f*/
          v31[1] = (SHIWORD(v21) << 8) + 128; /*0x5a8931*/
          v18 = *v8; /*0x5a8935*/
          v31[0] = ((__int16)v21 << 8) + 128; /*0x5a893b*/
          v31[2] = 0; /*0x5a8942*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v18 + 216))(v8, v31, 32 * v17) ) /*0x5a8946*/
          {
            v19 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a895a*/
            v8[27] = v19; /*0x5a8962*/
            v8[28] = v19; /*0x5a8965*/
            (*(void (__thiscall **)(_DWORD *, int))(*v8 + 292))(v8, 2); /*0x5a896c*/
            v20 = 1; /*0x5a8976*/
            ++v24; /*0x5a897c*/
          }
        }
        ++v11; /*0x5a8984*/
        if ( v20 ) /*0x5a8987*/
          goto LABEL_27; /*0x5a8987*/
      }
      if ( v8 ) /*0x5a8997*/
        (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x5a899f*/
LABEL_27:
      result = v23; /*0x5a89a2*/
      ++v22; /*0x5a89b1*/
      if ( v24 >= v23 ) /*0x5a89b5*/
        return result; /*0x5a89b5*/
      OwnerHouseClass = v26; /*0x5a8782*/
    }
  }
  return result; /*0x5a89bb*/
}


// ==== 0x005A89D0  ScheduleMapSeedBuildings  this=-  sig=csp ====
bool __stdcall MapSeed_ScheduleBuildings(int *a1)
{
  int v1; // ebx
  _DWORD *v2; // esi
  int v3; // edi
  unsigned int v4; // edi
  int v5; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // esi
  _DWORD *v18; // ebp
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  bool v24; // cc
  char *v25; // edi
  int v26; // edx
  __int16 v27; // ax
  char *v28; // ebx
  int v29; // eax
  int v30; // ebp
  char *v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  bool v37; // zf
  char v38; // [esp+13h] [ebp-6055h]
  _DWORD v39[5]; // [esp+14h] [ebp-6054h] BYREF
  void *Block; // [esp+28h] [ebp-6040h]
  int v41; // [esp+2Ch] [ebp-603Ch]
  int v42; // [esp+30h] [ebp-6038h]
  int v43; // [esp+34h] [ebp-6034h] BYREF
  int v44; // [esp+38h] [ebp-6030h]
  int v45; // [esp+3Ch] [ebp-602Ch]
  int v46; // [esp+40h] [ebp-6028h]
  _DWORD *v47; // [esp+44h] [ebp-6024h]
  __int64 v48; // [esp+48h] [ebp-6020h] BYREF
  int v49; // [esp+50h] [ebp-6018h]
  int v50; // [esp+54h] [ebp-6014h]
  __int16 v51; // [esp+58h] [ebp-6010h] BYREF
  int v52; // [esp+5Ch] [ebp-600Ch]
  int v53; // [esp+60h] [ebp-6008h]
  int v54; // [esp+64h] [ebp-6004h]
  _DWORD v55[6144]; // [esp+68h] [ebp-6000h] BYREF

  v1 = 0; /*0x5a89dd*/
  v52 = 0; /*0x5a89e0*/
  v2 = v55; /*0x5a89e4*/
  v3 = 1024; /*0x5a89e8*/
  do /*0x5a89f8*/
  {
    Object_Helper_5A99B0(v2); /*0x5a89ef*/
    v2 += 5; /*0x5a89f4*/
    --v3; /*0x5a89f7*/
  }
  while ( v3 ); /*0x5a89f8*/
  v52 = 0; /*0x5a89fa*/
  v53 = 0; /*0x5a89fe*/
  v54 = 0; /*0x5a8a02*/
  v42 = 0; /*0x5a8a06*/
  do /*0x5a8a30*/
  {
    v48 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8a14*/
    v4 = Math::RoundToInt((double)v48 * 0.000000002561137080788877); /*0x5a8a2b*/
  }
  while ( v4 > 0xA ); /*0x5a8a30*/
  while ( 1 ) /*0x5a8a52*/
  {
    v5 = dword_ABAD20 + (int)(v4 + v1) % 11; /*0x5a8a52*/
    if ( (unsigned __int8)Map_Helper_5A7D00(0, 0) ) /*0x5a8a56*/
      break; /*0x5a8a56*/
    if ( ++v1 >= 11 ) /*0x5a8a63*/
      return 0; /*0x5a8a63*/
  }
  v7 = *a1; /*0x5a8a74*/
  v39[0] = v5; /*0x5a8a77*/
  v39[1] = v7; /*0x5a8a7b*/
  v39[3] = v7; /*0x5a8a7f*/
  v39[2] = 0xFFFF; /*0x5a8a87*/
  v39[4] = -1; /*0x5a8a94*/
  qmemcpy(&v55[5 * v54], v39, 0x14u); /*0x5a8ab2*/
  v55[v54 + 5120] = timeGetTime(); /*0x5a8abe*/
  v54 = ((_WORD)v54 + 1) & 0x3FF; /*0x5a8ad5*/
  v8 = ++v52; /*0x5a8ad4*/
  if ( !v52 ) /*0x5a8adf*/
    return 0; /*0x5a8adf*/
  while ( v8 < 1020 ) /*0x5a8ae6*/
  {
    v38 = 1; /*0x5a8af0*/
    v9 = v55[5 * v53]; /*0x5a8af8*/
    v10 = &v55[5 * v53]; /*0x5a8afc*/
    v39[0] = v9; /*0x5a8b00*/
    v39[1] = v10[1]; /*0x5a8b0d*/
    v11 = v10[2]; /*0x5a8b11*/
    v39[2] = v11; /*0x5a8b14*/
    v39[3] = v10[3]; /*0x5a8b1b*/
    v39[4] = v10[4]; /*0x5a8b22*/
    v12 = 0; /*0x5a8b29*/
    v41 = 0; /*0x5a8b2d*/
    Block = 0; /*0x5a8b31*/
    if ( v9 == 0xFFFF ) /*0x5a8b35*/
      goto LABEL_48; /*0x5a8b35*/
    if ( v11 != 0xFFFF ) /*0x5a8b41*/
    {
      DrawIsoTile(v11, &v39[3], 0); /*0x5a8b4a*/
      v9 = v39[0]; /*0x5a8b4f*/
    }
    PlaceMapSeedClassBuildings(v9, &v39[1], -1, -1); /*0x5a8b5b*/
    v9 = v39[0]; /*0x5a8b60*/
    if ( v39[0] < dword_ABC1D4 || v39[0] >= dword_ABC1D4 + 101 ) /*0x5a8b73*/
    {
      if ( v39[0] < dword_ABBEC0 || v39[0] >= dword_ABBEC0 + 8 ) /*0x5a8b8a*/
        v13 = 0; /*0x5a8b95*/
      else
        v13 = v39[0] - dword_ABBEC0 + 101; /*0x5a8b90*/
    }
    else
    {
      v13 = v39[0] - dword_ABC1D4; /*0x5a8b77*/
    }
    v14 = 3 * v13; /*0x5a8b97*/
    v15 = dword_ABE370[3 * v13]; /*0x5a8b9a*/
    v16 = (_DWORD *)(4 * v14 + 11264880); /*0x5a8ba4*/
    v47 = v16; /*0x5a8bab*/
    if ( v15 > 1 ) /*0x5a8baf*/
    {
      v17 = v15 - (v39[4] != -1); /*0x5a8bc3*/
      v18 = __2_YAPAXI_Z(20 * v17); /*0x5a8bd1*/
      if ( v18 ) /*0x5a8bd8*/
      {
        v19 = v17 - 1; /*0x5a8bde*/
        if ( v17 - 1 >= 0 ) /*0x5a8be3*/
        {
          v20 = v18 + 2; /*0x5a8be5*/
          v21 = v19 + 1; /*0x5a8be8*/
          do /*0x5a8c27*/
          {
            *(v20 - 2) = 0xFFFF; /*0x5a8bf3*/
            *(v20 - 1) = *(_DWORD *)CellStruct::Set(&v51, 0, 0); /*0x5a8c09*/
            *v20 = 0xFFFF; /*0x5a8c0c*/
            v22 = *(_DWORD *)CellStruct::Set(&v48, 0, 0); /*0x5a8c17*/
            v20[2] = -1; /*0x5a8c19*/
            v20[1] = v22; /*0x5a8c20*/
            v20 += 5; /*0x5a8c23*/
            --v21; /*0x5a8c26*/
          }
          while ( v21 ); /*0x5a8c27*/
          v12 = v41; /*0x5a8c29*/
        }
        v23 = 0; /*0x5a8c2f*/
        v24 = *v16 <= 0; /*0x5a8c31*/
        Block = v18; /*0x5a8c33*/
        v44 = 0; /*0x5a8c37*/
        if ( !v24 ) /*0x5a8c3b*/
        {
          v25 = (char *)(v18 + 1); /*0x5a8c41*/
          while ( 1 ) /*0x5a8c44*/
          {
            if ( v23 != v39[4] ) /*0x5a8c48*/
            {
              v26 = v16[1]; /*0x5a8c4e*/
              v49 = *(_DWORD *)(v26 + 8 * v23); /*0x5a8c62*/
              v50 = *(_DWORD *)(v26 + 8 * v23 + 4); /*0x5a8c6b*/
              v27 = HIWORD(MEMORY[0x89F688][v50 & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v39[1]) + v49 + LOWORD(MEMORY[0x89F688][v50 & 7]); /*0x5a8c94*/
              HIWORD(v45) = HIWORD(v39[1]) + HIWORD(v49) + v27; /*0x5a8ca0*/
              v46 = v45; /*0x5a8cae*/
              v43 = 0; /*0x5a8cbb*/
              if ( !(unsigned __int8)PlaceRandomTerrainFeatures(1, v25 + 4, v25 + 8, &v43) ) /*0x5a8cca*/
              {
                v9 = v39[0]; /*0x5a8dc0*/
                v12 = v41; /*0x5a8dc4*/
                v38 = 0; /*0x5a8dc8*/
                goto LABEL_34; /*0x5a8dcd*/
              }
              if ( (unsigned __int8)PlaceRandomTerrainFeatures(4, v25 - 4, v25, v25 + 12) ) /*0x5a8ce1*/
                DrawIsoTile(*((_DWORD *)v25 - 1), v25, 1); /*0x5a8d80*/
              else
                *((_DWORD *)v25 + 3) = v43; /*0x5a8cf2*/
              DrawIsoTile(*((_DWORD *)v25 + 1), (_WORD *)v25 + 4, 1); /*0x5a8d8b*/
              v16 = v47; /*0x5a8d94*/
              v23 = v44; /*0x5a8d98*/
              ++v41; /*0x5a8d9d*/
              v25 += 20; /*0x5a8da1*/
            }
            v24 = ++v23 < *v16; /*0x5a8da7*/
            v44 = v23; /*0x5a8da9*/
            if ( !v24 ) /*0x5a8dad*/
            {
              v9 = v39[0]; /*0x5a8db3*/
              v12 = v41; /*0x5a8db7*/
              goto LABEL_34; /*0x5a8dbb*/
            }
          }
        }
      }
      else
      {
        Block = 0; /*0x5a8cfa*/
      }
      v9 = v39[0]; /*0x5a8d02*/
    }
LABEL_34:
    if ( !v38 ) /*0x5a8d0c*/
    {
      v11 = v39[2]; /*0x5a8dd2*/
LABEL_48:
      if ( v9 != 0xFFFF ) /*0x5a8ddc*/
      {
        Object_Helper_5A7E90(v9, &v39[1]); /*0x5a8de2*/
        if ( v12 > 0 ) /*0x5a8de9*/
        {
          v31 = (char *)Block + 8; /*0x5a8def*/
          do /*0x5a8e1f*/
          {
            v32 = *((_DWORD *)v31 - 2); /*0x5a8df2*/
            if ( v32 != 0xFFFF ) /*0x5a8dfb*/
              DrawIsoTile(v32, (_WORD *)v31 - 2, 0); /*0x5a8e02*/
            if ( *(_DWORD *)v31 != 0xFFFF ) /*0x5a8e0f*/
              DrawIsoTile(*(_DWORD *)v31, (_WORD *)v31 + 2, 0); /*0x5a8e16*/
            v31 += 20; /*0x5a8e1b*/
            --v12; /*0x5a8e1e*/
          }
          while ( v12 ); /*0x5a8e1f*/
        }
        v11 = v39[2]; /*0x5a8e21*/
      }
      if ( v11 != 0xFFFF ) /*0x5a8e2b*/
        PlaceMapSeedClassBuildings(v11, &v39[3], -1, -1); /*0x5a8e37*/
LABEL_59:
      if ( Block ) /*0x5a8e42*/
        __3_YAXPAX_Z(Block); /*0x5a8e45*/
      goto LABEL_61; /*0x5a8e45*/
    }
    v28 = (char *)Block; /*0x5a8d12*/
    if ( Block ) /*0x5a8d18*/
    {
      if ( v12 > 0 ) /*0x5a8d20*/
      {
        v29 = v54; /*0x5a8d26*/
        v30 = v12; /*0x5a8d2a*/
        do /*0x5a8d72*/
        {
          if ( v52 < 1024 ) /*0x5a8d34*/
          {
            qmemcpy(&v55[5 * v29], v28, 0x14u); /*0x5a8d44*/
            v55[v54 + 5120] = timeGetTime(); /*0x5a8d50*/
            v29 = ((_WORD)v54 + 1) & 0x3FF; /*0x5a8d60*/
            v54 = v29; /*0x5a8d66*/
            ++v52; /*0x5a8d6a*/
          }
          v28 += 20; /*0x5a8d6e*/
          --v30; /*0x5a8d71*/
        }
        while ( v30 ); /*0x5a8d72*/
      }
      goto LABEL_59; /*0x5a8d72*/
    }
LABEL_61:
    v8 = v52; /*0x5a8e4d*/
    if ( v52 ) /*0x5a8e53*/
    {
      v8 = v52 - 1; /*0x5a8e60*/
      v53 = ((_WORD)v53 + 1) & 0x3FF; /*0x5a8e61*/
      --v52; /*0x5a8e65*/
    }
    ++v42; /*0x5a8e70*/
    if ( !v8 ) /*0x5a8e74*/
      return v42 > 1; /*0x5a8e74*/
  }
  v33 = v53; /*0x5a8e80*/
  do /*0x5a8edd*/
  {
    v34 = 5 * v33; /*0x5a8e84*/
    v35 = v55[v34]; /*0x5a8e8b*/
    v36 = &v55[v34]; /*0x5a8e8f*/
    v39[0] = v35; /*0x5a8e93*/
    v39[1] = v36[1]; /*0x5a8e9a*/
    v39[2] = v36[2]; /*0x5a8ea1*/
    v39[3] = v36[3]; /*0x5a8ea8*/
    v39[4] = v36[4]; /*0x5a8eb3*/
    PlaceMapSeedClassBuildings(v39[2], &v39[3], -1, -1); /*0x5a8eb7*/
    if ( !v52 ) /*0x5a8ec2*/
      break; /*0x5a8ec2*/
    v33 = ((_WORD)v53 + 1) & 0x3FF; /*0x5a8ecf*/
    v37 = v52 == 1; /*0x5a8ed4*/
    v53 = v33; /*0x5a8ed5*/
    --v52; /*0x5a8ed9*/
  }
  while ( !v37 ); /*0x5a8edd*/
  return v42 > 1; /*0x5a8ee4*/
}


// ==== 0x005A8F00  PlaceRandomTerrainFeatures  this=-  sig=csp ====
char __fastcall PlaceRandomTerrainFeatures(int a1, _WORD *a2, int a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // esi
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-60h]
  unsigned int v20; // [esp+14h] [ebp-5Ch]
  int v22; // [esp+24h] [ebp-4Ch]
  double v23; // [esp+24h] [ebp-4Ch]
  double v25; // [esp+30h] [ebp-40h]
  int v26; // [esp+30h] [ebp-40h]
  double v27; // [esp+38h] [ebp-38h]
  __int64 v28; // [esp+50h] [ebp-20h]
  __int64 v29; // [esp+60h] [ebp-10h]
  int v30; // [esp+68h] [ebp-8h]
  int v31; // [esp+74h] [ebp+4h]

  v6 = 1; /*0x5a8f0b*/
  v19 = 1; /*0x5a8f1a*/
  v22 = 1; /*0x5a8f1e*/
  if ( a3 <= 1 ) /*0x5a8f22*/
    goto LABEL_8; /*0x5a8f22*/
  v27 = 0.5; /*0x5a8f2c*/
  v25 = 2.0; /*0x5a8f3c*/
  v23 = (double)a3; /*0x5a8f4c*/
  if ( v23 < 1.5 ) /*0x5a8f5f*/
  {
    v27 = (v23 - 2.0) * 0.5; /*0x5a8f71*/
    v25 = v27 + 2.0; /*0x5a8f7b*/
  }
  do /*0x5a8fab*/
  {
    do /*0x5a8fa0*/
      v7 = Random::Gaussian((double *)&g_TileSystemInit) * v27 + v25; /*0x5a8f91*/
    while ( v7 < 2.0 ); /*0x5a8fa0*/
  }
  while ( v7 > v23 ); /*0x5a8fab*/
  v19 = Math::RoundToInt(v7); /*0x5a8fb2*/
  v22 = v19; /*0x5a8fb6*/
  while ( 1 ) /*0x5a8fba*/
  {
    v6 = v19; /*0x5a8fba*/
LABEL_8:
    v8 = v6 + 4 * a1; /*0x5a8fc5*/
    v9 = (int)(&off_82B5B0)[v8]; /*0x5a8fd1*/
    v26 = dword_82B530[v8]; /*0x5a8fd7*/
    if ( v6 == 2 ) /*0x5a8fdb*/
    {
      v10 = 0; /*0x5a8fe7*/
      if ( (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 < 0.7 ) /*0x5a9006*/
      {
        do /*0x5a904b*/
        {
          v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a9028*/
          v11 = Math::RoundToInt((double)v28 * (double)(unsigned int)(v9 - 7) * 2.328306437080797e-10 + 7.0); /*0x5a9044*/
        }
        while ( v11 > v9 - 1 ); /*0x5a904b*/
        goto LABEL_14; /*0x5a904b*/
      }
    }
    else
    {
      v10 = 0; /*0x5a904f*/
    }
    do /*0x5a908e*/
    {
      v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a9071*/
      v11 = Math::RoundToInt((double)v29 * (double)(unsigned int)v9 * 2.328306437080797e-10); /*0x5a9087*/
    }
    while ( v11 > v9 - 1 ); /*0x5a908e*/
LABEL_14:
    v20 = v11; /*0x5a9092*/
    if ( v9 > 0 ) /*0x5a9096*/
      break; /*0x5a9096*/
LABEL_22:
    v17 = (v6 + 1) % (a3 + 1); /*0x5a912c*/
    v19 = v17; /*0x5a913b*/
    if ( !v17 ) /*0x5a913f*/
    {
      v19 = 1; /*0x5a9141*/
      v17 = 1; /*0x5a9149*/
    }
    if ( v17 == v22 ) /*0x5a9151*/
    {
      *a4 = 0xFFFF; /*0x5a91bd*/
      *a5 = 0; /*0x5a91cb*/
      *a6 = -1; /*0x5a91ce*/
      return 0; /*0x5a91d5*/
    }
  }
  while ( 1 ) /*0x5a90a0*/
  {
    v12 = 0; /*0x5a90a0*/
    v13 = *(_DWORD *)(v26 + 4 * ((int)(v10 + v20) % v9)); /*0x5a90ac*/
    v14 = 12 * v13 + 11264880; /*0x5a90b2*/
    v15 = dword_ABE370[3 * v13]; /*0x5a90b9*/
    if ( v15 > 0 ) /*0x5a90c2*/
    {
      v16 = (_DWORD *)(dword_ABE374[3 * v13] + 4); /*0x5a90c7*/
      do /*0x5a90d8*/
      {
        if ( *v16 == a1 ) /*0x5a90d0*/
          break; /*0x5a90d0*/
        ++v12; /*0x5a90d2*/
        v16 += 2; /*0x5a90d3*/
      }
      while ( v12 < v15 ); /*0x5a90d8*/
    }
    if ( (unsigned __int8)Map_Helper_5A7D00(1, 1) ) /*0x5a9114*/
      break; /*0x5a9114*/
    if ( ++v10 >= v9 ) /*0x5a9120*/
    {
      v6 = v19; /*0x5a9126*/
      goto LABEL_22; /*0x5a9126*/
    }
  }
  v30 = *(_DWORD *)(*(_DWORD *)(v14 + 4) + 8 * v12); /*0x5a9165*/
  LOWORD(v31) = *a2 - v30; /*0x5a9179*/
  HIWORD(v31) = a2[1] - HIWORD(v30); /*0x5a917e*/
  *a5 = v31; /*0x5a9187*/
  *a4 = *(_DWORD *)(v14 + 8); /*0x5a9197*/
  *a6 = v12; /*0x5a919a*/
  return 1; /*0x5a9199*/
}


// ==== 0x005A95B0  ObjectClass::PlaceRandomAIBuildings  this=RandomMap  sig=csp ====
CCINIClass *__thiscall PlaceRandomAIBuildings(_DWORD *this)
{
  CCINIClass *result; // eax
  int v2; // ecx
  CCINIClass *v3; // edi
  int i; // esi
  void *v5; // eax
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // eax
  AbstractClass *v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  _WORD *v13; // eax
  _DWORD *v14; // eax
  CCINIClass *v15; // eax
  int v16; // ebp
  Random *v17; // edi
  char v18; // bl
  __int16 v19; // dx
  Random *v20; // esi
  int v21; // eax
  char v22; // [esp+13h] [ebp-4Dh]
  CCINIClass *v23; // [esp+14h] [ebp-4Ch] BYREF
  Random *v24; // [esp+18h] [ebp-48h]
  int v25; // [esp+1Ch] [ebp-44h]
  CCINIClass *v26; // [esp+20h] [ebp-40h] BYREF
  CCINIClass *v27; // [esp+24h] [ebp-3Ch]
  CCINIClass *v28; // [esp+28h] [ebp-38h]
  AbstractClass *aP2; // [esp+2Ch] [ebp-34h]
  double v30; // [esp+30h] [ebp-30h] BYREF
  rc_ptr_base v31; // [esp+38h] [ebp-28h] BYREF
  rc_ptr_base v32[2]; // [esp+3Ch] [ebp-24h] BYREF
  __int64 v33; // [esp+44h] [ebp-1Ch]
  __int64 v34; // [esp+4Ch] [ebp-14h]
  _DWORD v35[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( this->RandomMap_field_0x3C == 2 ) /*0x5a95bd*/
  {
    do /*0x5a95e7*/
    {
      *(_QWORD *)&v32[0].vfptr = (unsigned int)Random::State(&g_Randomizer); /*0x5a95c9*/
      result = (CCINIClass *)Math::RoundToInt((double)*(__int64 *)&v32[0].vfptr * 6.984919311242392e-10); /*0x5a95df*/
    }
    while ( (unsigned int)result > 2 ); /*0x5a95e7*/
    if ( (int)result > 0 ) /*0x5a95eb*/
    {
      v2 = g_RandomMap_TileData; /*0x5a95f1*/
      v3 = result; /*0x5a95f7*/
      result = g_RandomMap_TerrainState; /*0x5a95f9*/
      do /*0x5a9626*/
      {
        for ( i = 0; i < v2; ++i ) /*0x5a9602*/
        {
          if ( *(int *)(*(_DWORD *)&result->__pad_0[4 * i] + 32) > 0 ) /*0x5a960c*/
          {
            PlaceNeutralBuilding(*(_DWORD **)&result->__pad_0[4 * i]); /*0x5a9610*/
            v2 = g_RandomMap_TileData; /*0x5a9615*/
            result = g_RandomMap_TerrainState; /*0x5a961b*/
          }
        }
        v3 = (CCINIClass *)((char *)v3 - 1); /*0x5a9625*/
      }
      while ( v3 ); /*0x5a9626*/
    }
  }
  else
  {
    v5 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a9635*/
    aP2 = (AbstractClass *)HouseClass::FindOwner(v5); /*0x5a9641*/
    do /*0x5a966d*/
    {
      *(_QWORD *)&v32[0].vfptr = (unsigned int)Random::State(&g_Randomizer); /*0x5a964f*/
      result = (CCINIClass *)Math::RoundToInt((double)*(__int64 *)&v32[0].vfptr * 0.000000001164153218540399); /*0x5a9665*/
    }
    while ( (unsigned int)result > 4 ); /*0x5a966d*/
    v6 = 0; /*0x5a966f*/
    if ( (int)result > 0 ) /*0x5a9673*/
    {
      v28 = result; /*0x5a9679*/
      do /*0x5a9908*/
      {
        v22 = 0; /*0x5a9682*/
        v25 = 0; /*0x5a9687*/
        v7 = __2_YAPAXI_Z(0x720u); /*0x5a9690*/
        if ( v7 ) /*0x5a9697*/
        {
          v8 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2796) - 1; /*0x5a96a8*/
          v33 = *(unsigned int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2796); /*0x5a96ac*/
          v30 = (double)v33; /*0x5a96b4*/
          do /*0x5a96df*/
          {
            v34 = (unsigned int)Random::State(&g_Randomizer); /*0x5a96c2*/
            v9 = Math::RoundToInt((double)v34 * v30 * 2.328306437080797e-10); /*0x5a96d8*/
          }
          while ( v9 > v8 ); /*0x5a96df*/
          v10 = (AbstractClass *)BuildingClass::Construct( /*0x5a96fd*/
                                   v7,
                                   *(AbstractClass **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2784)
                                                     + 4 * v9),
                                   aP2);
          v24 = (Random *)v10; /*0x5a96ff*/
        }
        else
        {
          v24 = 0; /*0x5a9705*/
          v10 = 0; /*0x5a9709*/
        }
        while ( v25 < 100 ) /*0x5a9718*/
        {
          do /*0x5a9786*/
          {
            v11 = unk_89C2DC * unk_89C2DC - 1; /*0x5a9726*/
            do /*0x5a9750*/
            {
              v12 = Range_RandomInt(0, v11); /*0x5a973a*/
              v13 = CellStruct::Set(&v31, 0, 0); /*0x5a973c*/
            }
            while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v12, v13) ); /*0x5a9750*/
            ++v6; /*0x5a9765*/
            v26 = (CCINIClass *)*((_DWORD *)g_MapTileArray + 20 * v12); /*0x5a976f*/
            if ( v6 > 200 ) /*0x5a9773*/
            {
              v15 = *(CCINIClass **)CellStruct::Set(v32, 0, 0); /*0x5a979e*/
              goto LABEL_29; /*0x5a97a0*/
            }
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x5a977f*/
          }
          while ( !Cell::IsEmpty(v14) ); /*0x5a9786*/
          v15 = v26; /*0x5a97a2*/
LABEL_29:
          v23 = v15; /*0x5a97a6*/
          v16 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 283); /*0x5a97c1*/
          v17 = (Random *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v10[36].uniqueId + 144))(v10[36].uniqueId, 1); /*0x5a97d0*/
          v18 = 1; /*0x5a97d2*/
          while ( *(_WORD *)v17->__pad_0 != 0x7FFF || *(_WORD *)&v17->__pad_0[2] != 0x7FFF ) /*0x5a97e1*/
          {
            v19 = HIWORD(v23) + *(_WORD *)&v17->__pad_0[2]; /*0x5a97ef*/
            LOWORD(v27) = (_WORD)v23 + *(_WORD *)v17->__pad_0; /*0x5a97fa*/
            HIWORD(v27) = v19; /*0x5a97ff*/
            LODWORD(v30) = v27; /*0x5a980e*/
            v20 = (Random *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x5a9817*/
            if ( v20[14].Random_field_0x04 /*0x5a986f*/
              || !Cell::IsEmpty(v20)
              || SHIBYTE(v20[17].Random_field_0x08) != v16
              || v20[14].Random_field_0x0C == 3
              || !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)v20, 1)
              || *((_BYTE *)g_MapTileArray
                 + 80 * SLOWORD(v20[2].Random_field_0x04)
                 + 80 * unk_89C2DC * SHIWORD(v20[2].Random_field_0x04)
                 + 69) )
            {
              v18 = 0; /*0x5a9877*/
            }
            v17 = (Random *)((char *)v17 + 4); /*0x5a9879*/
            if ( !v18 ) /*0x5a987e*/
              goto LABEL_43; /*0x5a987e*/
          }
          v35[0] = ((__int16)v23 << 8) + 128; /*0x5a98a1*/
          v35[2] = 0; /*0x5a98af*/
          v21 = *(_DWORD *)v24->__pad_0; /*0x5a98b7*/
          v35[1] = (SHIWORD(v23) << 8) + 128; /*0x5a98b9*/
          if ( (*(unsigned __int8 (__thiscall **)(Random *, _DWORD *, _DWORD))(v21 + 216))(v24, v35, 0) ) /*0x5a98c2*/
            v22 = 1; /*0x5a98cc*/
LABEL_43:
          ++v25; /*0x5a98d1*/
          if ( v22 ) /*0x5a98e0*/
          {
            v6 = 0; /*0x5a98e6*/
            goto LABEL_47; /*0x5a98e8*/
          }
          v10 = (AbstractClass *)v24; /*0x5a970d*/
          v6 = 0; /*0x5a9711*/
        }
        if ( v10 ) /*0x5a98f4*/
          (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v10->__pad_0 + 32))(v10, 1); /*0x5a98fc*/
LABEL_47:
        result = (CCINIClass *)((char *)v28 - 1); /*0x5a98ff*/
        v28 = (CCINIClass *)((char *)v28 - 1); /*0x5a9904*/
      }
      while ( v28 ); /*0x5a9908*/
    }
  }
  return result; /*0x5a9628*/
}


// ==== 0x005A9920  ObjectClass::method_5A9920  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_5A9920(_DWORD *this, _DWORD *a1, ObjectClass *aP2)
{
  *this = *a1; /*0x5a992c*/
  this->vtable2 = aP2; /*0x5a992e*/
  return (ObjectClass *)this; /*0x5a9931*/
}


// ==== 0x005A9940  Cell::Clear  this=Cell  sig=csp ====
Cell *__thiscall Cell::Clear(_WORD *this)
{
  *this = 0; /*0x5a9942*/
  this->Cell_field_0x4 = 0; /*0x5a9947*/
  this->Cell_field_0x4 = -1; /*0x5a994d*/
  return (Cell *)this; /*0x5a9954*/
}


// ==== 0x005A9960  ObjectClass::method_5A9960  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_5A9960(_DWORD *this, _DWORD *a1)
{
  *this = *a1; /*0x5a9968*/
  this->vtable2 = a1[1]; /*0x5a996d*/
  return (ObjectClass *)this; /*0x5a9970*/
}


// ==== 0x005A9980  ObjectClass::method_5A9980  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A9980(_DWORD *this, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6)
{
  *this = a2; /*0x5a998a*/
  this->vtable2 = *a3; /*0x5a9992*/
  this->vtable3 = a4; /*0x5a9999*/
  this->vtable4 = *a5; /*0x5a99a2*/
  this->uniqueId = a6; /*0x5a99a5*/
  return this; /*0x5a99a8*/
}


// ==== 0x005A99B0  ObjectClass::Object_Helper_5A99B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A99B0(_DWORD *this)
{
  *this = 0xFFFF; /*0x5a99d1*/
  this->vtable2 = 0; /*0x5a99d7*/
  this->vtable3 = 0xFFFF; /*0x5a99da*/
  this->vtable4 = 0; /*0x5a99e1*/
  this->uniqueId = -1; /*0x5a99e4*/
  return this; /*0x5a99ec*/
}


// ==== 0x005A99F0  ObjectClass::method_5A99F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A99F0(_DWORD *this, _DWORD *a2)
{
  *this = *a2; /*0x5a99f8*/
  this->vtable2 = a2[1]; /*0x5a99fd*/
  this->vtable3 = a2[2]; /*0x5a9a03*/
  this->vtable4 = a2[3]; /*0x5a9a09*/
  this->uniqueId = a2[4]; /*0x5a9a0f*/
  return this; /*0x5a9a12*/
}


// ==== 0x005A9A20  ListNode::Alloc  this=ListNode  sig=csp ====
_DWORD *__thiscall ListNode::Alloc(_DWORD *this, rc_ptr_base *aP1)
{
  int v3; // eax

  this->q002 = 0; /*0x5a9a25*/
  *this = 1; /*0x5a9a2c*/
  v3 = __2_YAPAXI_Z(8u); /*0x5a9a32*/
  if ( v3 ) /*0x5a9a3c*/
  {
    *(_WORD *)v3 = 0; /*0x5a9a3e*/
    *(_WORD *)(v3 + 2) = 0; /*0x5a9a43*/
    *(_DWORD *)(v3 + 4) = -1; /*0x5a9a49*/
  }
  else
  {
    v3 = 0; /*0x5a9a52*/
  }
  this->q004 = v3; /*0x5a9a58*/
  *(rc_ptr_base *)v3 = (rc_ptr_base)aP1->vfptr; /*0x5a9a5d*/
  *(rc_ptr_base *)(v3 + 4) = aP1[1]; /*0x5a9a62*/
  return this; /*0x5a9a67*/
}


// ==== 0x005A9A70  WaypointPath::Constructor  this=WaypointPath  sig=csp ====
_DWORD *__thiscall WaypointPath::Constructor(_DWORD *this, rc_ptr_base *aP1, rc_ptr_base *aP2)
{
  rc_ptr_base *v4; // eax
  rc_ptr_base *v5; // ecx
  int v6; // edx
  rc_ptr_base *v7; // edx

  this->q002 = 0; /*0x5a9a78*/
  *this = 2; /*0x5a9a7b*/
  v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u); /*0x5a9a81*/
  if ( v4 ) /*0x5a9a8b*/
  {
    v5 = v4 + 1; /*0x5a9a8d*/
    v6 = 2; /*0x5a9a90*/
    do /*0x5a9aa7*/
    {
      LOWORD(v5[-1].vfptr) = 0; /*0x5a9a95*/
      HIWORD(v5[-1].vfptr) = 0; /*0x5a9a99*/
      v5->vfptr = (void *)-1; /*0x5a9a9d*/
      v5 += 2; /*0x5a9aa3*/
      --v6; /*0x5a9aa6*/
    }
    while ( v6 ); /*0x5a9aa7*/
  }
  else
  {
    v4 = 0; /*0x5a9aab*/
  }
  this->q004 = v4; /*0x5a9ab1*/
  v4->vfptr = aP1->vfptr; /*0x5a9ab7*/
  v4[1].vfptr = aP1[1].vfptr; /*0x5a9abc*/
  v7 = (rc_ptr_base *)this->q004; /*0x5a9ac3*/
  v7[2].vfptr = aP2->vfptr; /*0x5a9ac8*/
  v7[3].vfptr = aP2[1].vfptr; /*0x5a9ace*/
  return this; /*0x5a9ab4*/
}


// ==== 0x005A9BF0  ObjectClass::??0_ReaderWriterLock_details_Concurrency__QAE_XZ  this=ObjectClass  sig=csp ====
Concurrency::details::_ReaderWriterLock *__thiscall __0_ReaderWriterLock_details_Concurrency__QAE_XZ(
        Concurrency::details::_ReaderWriterLock *this)
{
  *(_DWORD *)this = 0; /*0x5a9bf2*/
  this->vtable2 = 0; /*0x5a9bf8*/
  return this; /*0x5a9bff*/
}


// ==== 0x005A9C20  sub_5A9C20  this=-  sig=ida-proto ====
int sub_5A9C20()
{
  InitializePathData(); /*0x5a9c20*/
  return atexit(sub_5AC190); /*0x5a9c30*/
}


// ==== 0x005A9C40  ObjectClass::InitializePathData  this=ObjectClass  sig=csp ====
_DWORD *InitializePathData()
{
  int v0; // eax
  int v1; // ebp
  int v2; // eax
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  rc_ptr_base *v6; // eax
  rc_ptr_base *v7; // eax
  rc_ptr_base *v8; // eax
  rc_ptr_base *v9; // eax
  rc_ptr_base *v10; // eax
  rc_ptr_base *v11; // eax
  rc_ptr_base *v12; // eax
  rc_ptr_base *v13; // eax
  rc_ptr_base *v14; // eax
  rc_ptr_base *v15; // eax
  rc_ptr_base *v16; // eax
  rc_ptr_base *v17; // eax
  rc_ptr_base *v18; // eax
  rc_ptr_base *v19; // eax
  rc_ptr_base *v20; // eax
  rc_ptr_base *v21; // eax
  rc_ptr_base *v22; // eax
  rc_ptr_base *v23; // eax
  rc_ptr_base *v24; // eax
  rc_ptr_base *v25; // eax
  rc_ptr_base *v26; // eax
  rc_ptr_base *v27; // eax
  rc_ptr_base *v28; // eax
  rc_ptr_base *v29; // eax
  rc_ptr_base *v30; // eax
  rc_ptr_base *v31; // eax
  rc_ptr_base *v32; // eax
  rc_ptr_base *v33; // eax
  rc_ptr_base *v34; // eax
  rc_ptr_base *v35; // eax
  rc_ptr_base *v36; // eax
  rc_ptr_base *v37; // eax
  rc_ptr_base *v38; // eax
  rc_ptr_base *v39; // eax
  rc_ptr_base *v40; // eax
  rc_ptr_base *v41; // eax
  rc_ptr_base *v42; // eax
  rc_ptr_base *v43; // eax
  rc_ptr_base *v44; // eax
  rc_ptr_base *v45; // eax
  rc_ptr_base *v46; // eax
  rc_ptr_base *v47; // eax
  rc_ptr_base *v48; // eax
  rc_ptr_base *v49; // eax
  rc_ptr_base *v50; // eax
  rc_ptr_base *v51; // eax
  void *v52; // eax
  TechnoTypeClass *vfptr; // eax
  void *v54; // eax
  TechnoTypeClass *v55; // eax
  void *v56; // eax
  TechnoTypeClass *v57; // eax
  void *v58; // eax
  TechnoTypeClass *v59; // eax
  void *v60; // eax
  TechnoTypeClass *v61; // eax
  rc_ptr_base *v62; // eax
  void *v63; // eax
  TechnoTypeClass *v64; // eax
  rc_ptr_base *v65; // eax
  void *v66; // eax
  TechnoTypeClass *v67; // eax
  rc_ptr_base *v68; // eax
  void *v69; // eax
  TechnoTypeClass *v70; // eax
  void *v71; // eax
  TechnoTypeClass *v72; // eax
  rc_ptr_base *v73; // eax
  void *v74; // eax
  TechnoTypeClass *v75; // eax
  void *v76; // eax
  TechnoTypeClass *v77; // eax
  void *v78; // eax
  TechnoTypeClass *v79; // eax
  void *v80; // eax
  TechnoTypeClass *v81; // eax
  void *v82; // eax
  TechnoTypeClass *v83; // eax
  void *v84; // eax
  TechnoTypeClass *v85; // eax
  void *v86; // eax
  TechnoTypeClass *v87; // eax
  void *v88; // eax
  TechnoTypeClass *v89; // eax
  void *v90; // eax
  rc_ptr_base *v91; // eax
  void *v92; // eax
  rc_ptr_base *v93; // eax
  void *v94; // eax
  rc_ptr_base *v95; // eax
  void *v96; // eax
  rc_ptr_base *v97; // eax
  void *v98; // eax
  rc_ptr_base *v99; // eax
  void *v100; // eax
  rc_ptr_base *v101; // eax
  void *v102; // eax
  TechnoTypeClass *v103; // eax
  void *v104; // eax
  TechnoTypeClass *v105; // eax
  void *v106; // eax
  TechnoTypeClass *v107; // eax
  void *v108; // eax
  TechnoTypeClass *v109; // eax
  void *v110; // eax
  TechnoTypeClass *v111; // eax
  void *v112; // eax
  rc_ptr_base *v113; // eax
  rc_ptr_base *v114; // eax
  rc_ptr_base *v115; // ecx
  rc_ptr_base *v116; // edx
  rc_ptr_base *v118; // [esp+14h] [ebp-20h] BYREF
  int v119; // [esp+18h] [ebp-1Ch]
  rc_ptr_base *v120; // [esp+1Ch] [ebp-18h] BYREF
  int v121; // [esp+20h] [ebp-14h]
  rc_ptr_base aP2; // [esp+24h] [ebp-10h] BYREF
  int v123; // [esp+28h] [ebp-Ch]
  rc_ptr_base aP1; // [esp+2Ch] [ebp-8h] BYREF
  int v125; // [esp+30h] [ebp-4h]

  v118 = (rc_ptr_base *)2;
  dword_ABE378 = 0;
  dword_ABE370[0] = 2;
  v0 = __2_YAPAXI_Z(0x10u);
  v1 = v0;
  if ( v0 )
  {
    Array::ForEach(v0, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v2 = v1;
  }
  else
  {
    v2 = 0;
  }
  dword_ABE374 = (TechnoTypeClass *)v2;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)&dword_ABE374->vtable0[8] = v118;
  *(_DWORD *)&dword_ABE374->vtable0[12] = 1;
  v118 = 0;
  dword_ABE384 = 0;
  dword_ABE37C = 2;
  v3 = __2_YAPAXI_Z(0x10u);
  v4 = v3;
  if ( v3 )
  {
    Array::ForEach(v3, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  dword_ABE380 = (TechnoTypeClass *)v5;
  *(_DWORD *)v5 = v118;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)&dword_ABE380->vtable0[8] = 1;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE380->vtable0[12] = 2;
  HIWORD(v120) = 1;
  dword_ABE390 = 0;
  dword_ABE388 = 2;
  v6 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v118 = v6;
  if ( v6 )
  {
    Array::ForEach((int)v6, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v7 = v118;
  }
  else
  {
    v7 = 0;
  }
  dword_ABE38C = (TechnoTypeClass *)v7;
  v7->vfptr = 0;
  v7[1].vfptr = 0;
  *(_DWORD *)&dword_ABE38C->vtable0[8] = v120;
  *(_DWORD *)&dword_ABE38C->vtable0[12] = 3;
  v118 = 0;
  dword_ABE39C = 0;
  dword_ABE394 = 2;
  v8 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v8;
  if ( v8 )
  {
    Array::ForEach((int)v8, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v9 = v120;
  }
  else
  {
    v9 = 0;
  }
  dword_ABE398 = (TechnoTypeClass *)v9;
  v9->vfptr = v118;
  v9[1].vfptr = 0;
  *(_DWORD *)&dword_ABE398->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE398->vtable0[12] = 5;
  v118 = 0;
  dword_ABE3A8 = 0;
  dword_ABE3A0 = 2;
  v10 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v10;
  if ( v10 )
  {
    Array::ForEach((int)v10, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v11 = v120;
  }
  else
  {
    v11 = 0;
  }
  dword_ABE3A4 = (TechnoTypeClass *)v11;
  v11->vfptr = v118;
  v11[1].vfptr = 0;
  *(_DWORD *)&dword_ABE3A4->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3A4->vtable0[12] = 6;
  v118 = (rc_ptr_base *)1;
  dword_ABE3B4 = 0;
  dword_ABE3AC = 2;
  v12 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v12;
  if ( v12 )
  {
    Array::ForEach((int)v12, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v13 = v120;
  }
  else
  {
    v13 = 0;
  }
  dword_ABE3B0 = (TechnoTypeClass *)v13;
  v13->vfptr = v118;
  v13[1].vfptr = 0;
  *(_DWORD *)&dword_ABE3B0->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3B0->vtable0[12] = 7;
  v118 = (rc_ptr_base *)1;
  dword_ABE3C0 = 0;
  dword_ABE3B8 = 2;
  v14 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v14;
  if ( v14 )
  {
    Array::ForEach((int)v14, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v15 = v120;
  }
  else
  {
    v15 = 0;
  }
  dword_ABE3BC = (TechnoTypeClass *)v15;
  v15->vfptr = v118;
  v15[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3BC->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3BC->vtable0[12] = 2;
  v118 = (rc_ptr_base *)1;
  dword_ABE3CC = 0;
  dword_ABE3C4 = 2;
  v16 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v16;
  if ( v16 )
  {
    Array::ForEach((int)v16, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v17 = v120;
  }
  else
  {
    v17 = 0;
  }
  dword_ABE3C8 = (TechnoTypeClass *)v17;
  v17->vfptr = v118;
  v17[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3C8->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3C8->vtable0[12] = 3;
  v118 = (rc_ptr_base *)1;
  dword_ABE3D8 = 0;
  dword_ABE3D0 = 2;
  v18 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v18;
  if ( v18 )
  {
    Array::ForEach((int)v18, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v19 = v120;
  }
  else
  {
    v19 = 0;
  }
  dword_ABE3D4 = (TechnoTypeClass *)v19;
  v19->vfptr = v118;
  v19[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3D4->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE3D4->vtable0[12] = 4;
  v118 = (rc_ptr_base *)1;
  dword_ABE3E4 = 0;
  dword_ABE3DC = 2;
  v20 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v20;
  if ( v20 )
  {
    Array::ForEach((int)v20, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v21 = v120;
  }
  else
  {
    v21 = 0;
  }
  dword_ABE3E0 = (TechnoTypeClass *)v21;
  v21->vfptr = v118;
  v21[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3E0->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3E0->vtable0[12] = 6;
  v118 = (rc_ptr_base *)2;
  dword_ABE3F0 = 0;
  dword_ABE3E8 = 2;
  v22 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v22;
  if ( v22 )
  {
    Array::ForEach((int)v22, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v23 = v120;
  }
  else
  {
    v23 = 0;
  }
  dword_ABE3EC = (TechnoTypeClass *)v23;
  v23->vfptr = v118;
  v23[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3EC->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3EC->vtable0[12] = 7;
  v118 = (rc_ptr_base *)2;
  dword_ABE3FC = 0;
  dword_ABE3F4 = 2;
  v24 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v24;
  if ( v24 )
  {
    Array::ForEach((int)v24, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v25 = v120;
  }
  else
  {
    v25 = 0;
  }
  dword_ABE3F8 = (TechnoTypeClass *)v25;
  v25->vfptr = v118;
  v25[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3F8->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3F8->vtable0[12] = 0;
  v118 = (rc_ptr_base *)1;
  dword_ABE408 = 0;
  dword_ABE400 = 2;
  v26 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v26;
  if ( v26 )
  {
    Array::ForEach((int)v26, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v27 = v120;
  }
  else
  {
    v27 = 0;
  }
  dword_ABE404 = (TechnoTypeClass *)v27;
  v27->vfptr = v118;
  v27[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE404->vtable0[8] = 131073;
  *(_DWORD *)&dword_ABE404->vtable0[12] = 3;
  v118 = (rc_ptr_base *)1;
  dword_ABE414 = 0;
  dword_ABE40C = 2;
  v28 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v28;
  if ( v28 )
  {
    Array::ForEach((int)v28, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v29 = v120;
  }
  else
  {
    v29 = 0;
  }
  dword_ABE410 = (TechnoTypeClass *)v29;
  v29->vfptr = v118;
  v29[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE410->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE410->vtable0[12] = 4;
  v118 = (rc_ptr_base *)1;
  dword_ABE420 = 0;
  dword_ABE418 = 2;
  v30 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v30;
  if ( v30 )
  {
    Array::ForEach((int)v30, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v31 = v120;
  }
  else
  {
    v31 = 0;
  }
  dword_ABE41C = (TechnoTypeClass *)v31;
  v31->vfptr = v118;
  v31[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE41C->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE41C->vtable0[12] = 5;
  v118 = (rc_ptr_base *)1;
  dword_ABE42C = 0;
  dword_ABE424 = 2;
  v32 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v32;
  if ( v32 )
  {
    Array::ForEach((int)v32, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v33 = v120;
  }
  else
  {
    v33 = 0;
  }
  dword_ABE428 = (TechnoTypeClass *)v33;
  v33->vfptr = v118;
  v33[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE428->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE428->vtable0[12] = 7;
  v118 = (rc_ptr_base *)65538;
  dword_ABE438 = 0;
  dword_ABE430 = 2;
  v34 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v34;
  if ( v34 )
  {
    Array::ForEach((int)v34, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v35 = v120;
  }
  else
  {
    v35 = 0;
  }
  dword_ABE434 = (TechnoTypeClass *)v35;
  v35->vfptr = v118;
  v35[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE434->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE434->vtable0[12] = 4;
  v118 = (rc_ptr_base *)65537;
  dword_ABE444 = 0;
  dword_ABE43C = 2;
  v36 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v36;
  if ( v36 )
  {
    Array::ForEach((int)v36, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v37 = v120;
  }
  else
  {
    v37 = 0;
  }
  dword_ABE440 = (TechnoTypeClass *)v37;
  v37->vfptr = v118;
  v37[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE440->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE440->vtable0[12] = 5;
  v118 = (rc_ptr_base *)65537;
  dword_ABE450 = 0;
  dword_ABE448 = 2;
  v38 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v38;
  if ( v38 )
  {
    Array::ForEach((int)v38, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v39 = v120;
  }
  else
  {
    v39 = 0;
  }
  dword_ABE44C = (TechnoTypeClass *)v39;
  v39->vfptr = v118;
  v39[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE44C->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE44C->vtable0[12] = 6;
  v118 = (rc_ptr_base *)65537;
  dword_ABE45C = 0;
  dword_ABE454 = 2;
  v40 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v40;
  if ( v40 )
  {
    Array::ForEach((int)v40, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v41 = v120;
  }
  else
  {
    v41 = 0;
  }
  dword_ABE458 = (TechnoTypeClass *)v41;
  v41->vfptr = v118;
  v41[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE458->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE458->vtable0[12] = 5;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE468 = 0;
  dword_ABE460 = 2;
  v42 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v42;
  if ( v42 )
  {
    Array::ForEach((int)v42, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v43 = v120;
  }
  else
  {
    v43 = 0;
  }
  dword_ABE464 = (TechnoTypeClass *)v43;
  v43->vfptr = v118;
  v43[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE464->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE464->vtable0[12] = 6;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE474 = 0;
  dword_ABE46C = 2;
  v44 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v44;
  if ( v44 )
  {
    Array::ForEach((int)v44, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v45 = v120;
  }
  else
  {
    v45 = 0;
  }
  dword_ABE470 = (TechnoTypeClass *)v45;
  v45->vfptr = v118;
  v45[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE470->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE470->vtable0[12] = 7;
  v118 = (rc_ptr_base *)65537;
  dword_ABE480 = 0;
  dword_ABE478 = 2;
  v46 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v46;
  if ( v46 )
  {
    Array::ForEach((int)v46, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v47 = v120;
  }
  else
  {
    v47 = 0;
  }
  dword_ABE47C = (TechnoTypeClass *)v47;
  v47->vfptr = v118;
  v47[1].vfptr = (void *)5;
  *(_DWORD *)&dword_ABE47C->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE47C->vtable0[12] = 7;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE48C = 0;
  dword_ABE484 = 2;
  v48 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v48;
  if ( v48 )
  {
    Array::ForEach((int)v48, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v49 = v120;
  }
  else
  {
    v49 = 0;
  }
  dword_ABE488 = (TechnoTypeClass *)v49;
  v49->vfptr = v118;
  v49[1].vfptr = (void *)6;
  *(_DWORD *)&dword_ABE488->vtable0[8] = 65537;
  LOWORD(aP2.vfptr) = 0;
  *(_DWORD *)&dword_ABE488->vtable0[12] = 7;
  HIWORD(aP2.vfptr) = 1;
  v118 = 0;
  dword_ABE498 = 0;
  dword_ABE490 = 3;
  v50 = (rc_ptr_base *)__2_YAPAXI_Z(0x18u);
  v120 = v50;
  if ( v50 )
  {
    Array::ForEach((int)v50, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v51 = v120;
  }
  else
  {
    v51 = 0;
  }
  dword_ABE494 = (TechnoTypeClass *)v51;
  v51->vfptr = v118;
  v51[1].vfptr = 0;
  *(_DWORD *)&dword_ABE494->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE494->vtable0[12] = 2;
  dword_ABE494->uniqueId = (int)aP2.vfptr;
  LOWORD(v118) = 0;
  dword_ABE494->abstractFlags = 4;
  HIWORD(v118) = 1;
  v120 = (rc_ptr_base *)1;
  dword_ABE4A4 = 0;
  dword_ABE49C = 3;
  v52 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v52;
  if ( v52 )
  {
    Array::ForEach((int)v52, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    vfptr = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    vfptr = 0;
  }
  dword_ABE4A0 = vfptr;
  *(_DWORD *)vfptr->vtable0 = v120;
  *(_DWORD *)&vfptr->vtable0[4] = 2;
  *(_DWORD *)&dword_ABE4A0->vtable0[8] = v118;
  LOWORD(v118) = 0;
  *(_DWORD *)&dword_ABE4A0->vtable0[12] = 4;
  dword_ABE4A0->uniqueId = 0;
  dword_ABE4A0->abstractFlags = 6;
  HIWORD(v118) = 1;
  v120 = 0;
  dword_ABE4B0 = 0;
  dword_ABE4A8 = 3;
  v54 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v54;
  if ( v54 )
  {
    Array::ForEach((int)v54, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v55 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v55 = 0;
  }
  dword_ABE4AC = v55;
  *(_DWORD *)v55->vtable0 = v120;
  *(_DWORD *)&v55->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4AC->vtable0[8] = v118;
  LOWORD(v118) = 1;
  *(_DWORD *)&dword_ABE4AC->vtable0[12] = 4;
  dword_ABE4AC->uniqueId = 0;
  dword_ABE4AC->abstractFlags = 6;
  HIWORD(v118) = 0;
  v120 = 0;
  dword_ABE4BC = 0;
  dword_ABE4B4 = 3;
  v56 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v56;
  if ( v56 )
  {
    Array::ForEach((int)v56, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v57 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v57 = 0;
  }
  dword_ABE4B8 = v57;
  *(_DWORD *)v57->vtable0 = v120;
  *(_DWORD *)&v57->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4B8->vtable0[8] = v118;
  LOWORD(aP1.vfptr) = 0;
  *(_DWORD *)&dword_ABE4B8->vtable0[12] = 2;
  HIWORD(aP1.vfptr) = 0;
  dword_ABE4B8->uniqueId = 0;
  dword_ABE4B8->abstractFlags = 6;
  v118 = (rc_ptr_base *)1;
  v120 = 0;
  dword_ABE4C8 = 0;
  dword_ABE4C0 = 4;
  v58 = (void *)__2_YAPAXI_Z(0x20u);
  aP2.vfptr = v58;
  if ( v58 )
  {
    Array::ForEach((int)v58, 8, 4, (int (__thiscall *)(int))Cell::Clear);
    v59 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v59 = 0;
  }
  dword_ABE4C4 = v59;
  *(_DWORD *)v59->vtable0 = v120;
  *(_DWORD *)&v59->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4C4->vtable0[8] = v118;
  LOWORD(v118) = 1;
  *(_DWORD *)&dword_ABE4C4->vtable0[12] = 2;
  HIWORD(v118) = 1;
  dword_ABE4C4->uniqueId = 0x10000;
  LOWORD(v120) = 2;
  dword_ABE4C4->abstractFlags = 4;
  HIWORD(v120) = 2;
  dword_ABE4C4->nextArrayIndex = (int)aP1.vfptr;
  LOWORD(aP2.vfptr) = 2;
  dword_ABE4C4->referenceCount = 6;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE4D4 = 0;
  dword_ABE4CC = 3;
  v60 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v60;
  if ( v60 )
  {
    Array::ForEach((int)v60, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v61 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v61 = 0;
  }
  dword_ABE4D0 = v61;
  *(rc_ptr_base *)v61->vtable0 = aP2;
  *(_DWORD *)&v61->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE4D0->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE4D0->vtable0[12] = 3;
  v62 = v118;
  LOWORD(v118) = 2;
  dword_ABE4D0->uniqueId = (int)v62;
  HIWORD(v118) = 2;
  dword_ABE4D0->abstractFlags = 5;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)65537;
  dword_ABE4E0 = 0;
  dword_ABE4D8 = 3;
  v63 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v63;
  if ( v63 )
  {
    Array::ForEach((int)v63, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v64 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v64 = 0;
  }
  dword_ABE4DC = v64;
  *(rc_ptr_base *)v64->vtable0 = aP2;
  *(_DWORD *)&v64->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE4DC->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE4DC->vtable0[12] = 5;
  v65 = v118;
  LOWORD(v118) = 1;
  dword_ABE4DC->uniqueId = (int)v65;
  HIWORD(v118) = 1;
  dword_ABE4DC->abstractFlags = 3;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)2;
  dword_ABE4EC = 0;
  dword_ABE4E4 = 3;
  v66 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v66;
  if ( v66 )
  {
    Array::ForEach((int)v66, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v67 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v67 = 0;
  }
  dword_ABE4E8 = v67;
  *(rc_ptr_base *)v67->vtable0 = aP2;
  *(_DWORD *)&v67->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE4E8->vtable0[8] = v120;
  LOWORD(v120) = 2;
  *(_DWORD *)&dword_ABE4E8->vtable0[12] = 7;
  v68 = v118;
  LOWORD(v118) = 2;
  dword_ABE4E8->uniqueId = (int)v68;
  HIWORD(v118) = 2;
  dword_ABE4E8->abstractFlags = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)65537;
  dword_ABE4F8 = 0;
  dword_ABE4F0 = 3;
  v69 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v69;
  if ( v69 )
  {
    Array::ForEach((int)v69, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v70 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v70 = 0;
  }
  dword_ABE4F4 = v70;
  *(rc_ptr_base *)v70->vtable0 = aP2;
  *(_DWORD *)&v70->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE4F4->vtable0[8] = v120;
  *(_DWORD *)&dword_ABE4F4->vtable0[12] = 1;
  dword_ABE4F4->uniqueId = (int)v118;
  LOWORD(v118) = 2;
  dword_ABE4F4->abstractFlags = 3;
  HIWORD(v118) = 0;
  v120 = (rc_ptr_base *)65537;
  aP2.vfptr = (void *)65537;
  dword_ABE504 = 0;
  dword_ABE4FC = 4;
  v71 = (void *)__2_YAPAXI_Z(0x20u);
  aP1.vfptr = v71;
  if ( v71 )
  {
    Array::ForEach((int)v71, 8, 4, (int (__thiscall *)(int))Cell::Clear);
    v72 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v72 = 0;
  }
  dword_ABE500 = v72;
  *(rc_ptr_base *)v72->vtable0 = aP2;
  *(_DWORD *)&v72->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE500->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE500->vtable0[12] = 5;
  v73 = v118;
  LOWORD(v118) = 0;
  dword_ABE500->uniqueId = (int)v73;
  HIWORD(v118) = 2;
  dword_ABE500->abstractFlags = 1;
  HIWORD(v120) = 2;
  dword_ABE500->nextArrayIndex = 131074;
  LOWORD(aP2.vfptr) = 3;
  dword_ABE500->referenceCount = 3;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE510 = 0;
  dword_ABE508 = 3;
  v74 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v74;
  if ( v74 )
  {
    Array::ForEach((int)v74, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v75 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v75 = 0;
  }
  dword_ABE50C = v75;
  *(rc_ptr_base *)v75->vtable0 = aP2;
  *(_DWORD *)&v75->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE50C->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE50C->vtable0[12] = 2;
  HIWORD(v120) = 2;
  dword_ABE50C->uniqueId = (int)v118;
  LOWORD(aP2.vfptr) = 3;
  dword_ABE50C->abstractFlags = 6;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE51C = 0;
  dword_ABE514 = 2;
  v76 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v76;
  if ( v76 )
  {
    Array::ForEach((int)v76, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v77 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v77 = 0;
  }
  dword_ABE518 = v77;
  *(rc_ptr_base *)v77->vtable0 = aP2;
  *(_DWORD *)&v77->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE518->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE518->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE528 = 0;
  dword_ABE520 = 2;
  v78 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v78;
  if ( v78 )
  {
    Array::ForEach((int)v78, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v79 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v79 = 0;
  }
  dword_ABE524 = v79;
  *(rc_ptr_base *)v79->vtable0 = aP2;
  *(_DWORD *)&v79->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE524->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE524->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE534 = 0;
  dword_ABE52C = 2;
  v80 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v80;
  if ( v80 )
  {
    Array::ForEach((int)v80, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v81 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v81 = 0;
  }
  dword_ABE530 = v81;
  *(rc_ptr_base *)v81->vtable0 = aP2;
  *(_DWORD *)&v81->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE530->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE530->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE540 = 0;
  dword_ABE538 = 2;
  v82 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v82;
  if ( v82 )
  {
    Array::ForEach((int)v82, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v83 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v83 = 0;
  }
  dword_ABE53C = v83;
  *(rc_ptr_base *)v83->vtable0 = aP2;
  *(_DWORD *)&v83->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE53C->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE53C->vtable0[12] = 5;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)2;
  dword_ABE54C = 0;
  dword_ABE544 = 2;
  v84 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v84;
  if ( v84 )
  {
    Array::ForEach((int)v84, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v85 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v85 = 0;
  }
  dword_ABE548 = v85;
  *(rc_ptr_base *)v85->vtable0 = aP2;
  *(_DWORD *)&v85->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE548->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE548->vtable0[12] = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)1;
  dword_ABE558 = 0;
  dword_ABE550 = 2;
  v86 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v86;
  if ( v86 )
  {
    Array::ForEach((int)v86, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v87 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v87 = 0;
  }
  dword_ABE554 = v87;
  *(rc_ptr_base *)v87->vtable0 = aP2;
  *(_DWORD *)&v87->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE554->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE554->vtable0[12] = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)1;
  dword_ABE564 = 0;
  dword_ABE55C = 2;
  v88 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v88;
  if ( v88 )
  {
    Array::ForEach((int)v88, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v89 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v89 = 0;
  }
  dword_ABE560 = v89;
  *(rc_ptr_base *)v89->vtable0 = aP2;
  *(_DWORD *)&v89->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE560->vtable0[8] = v120;
  LOWORD(aP2.vfptr) = 1;
  *(_DWORD *)&dword_ABE560->vtable0[12] = 5;
  HIWORD(aP2.vfptr) = 2;
  dword_ABE570 = 0;
  dword_ABE568 = (IUnknown *)1;
  v90 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v90;
  if ( v90 )
  {
    Array::ForEach((int)v90, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v91 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v91 = 0;
  }
  dword_ABE56C = (int)v91;
  v91->vfptr = aP2.vfptr;
  v91[1].vfptr = (void *)5;
  aP2.vfptr = (void *)65537;
  dword_ABE57C = 0;
  dword_ABE574 = (IUnknown *)1;
  v92 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v92;
  if ( v92 )
  {
    Array::ForEach((int)v92, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v93 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v93 = 0;
  }
  dword_ABE578 = (int)v93;
  v93->vfptr = aP2.vfptr;
  v93[1].vfptr = (void *)5;
  aP2.vfptr = (void *)65537;
  dword_ABE588 = 0;
  dword_ABE580 = (IUnknown *)1;
  v94 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v94;
  if ( v94 )
  {
    Array::ForEach((int)v94, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v95 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v95 = 0;
  }
  dword_ABE584 = (int)v95;
  v95->vfptr = aP2.vfptr;
  v95[1].vfptr = (void *)5;
  aP2.vfptr = (void *)3;
  dword_ABE594 = 0;
  dword_ABE58C = (IUnknown *)1;
  v96 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v96;
  if ( v96 )
  {
    Array::ForEach((int)v96, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v97 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v97 = 0;
  }
  dword_ABE590 = (int)v97;
  v97->vfptr = aP2.vfptr;
  v97[1].vfptr = (void *)1;
  aP2.vfptr = (void *)2;
  dword_ABE5A0 = 0;
  dword_ABE598 = (IUnknown *)1;
  v98 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v98;
  if ( v98 )
  {
    Array::ForEach((int)v98, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v99 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v99 = 0;
  }
  dword_ABE59C = (int)v99;
  v99->vfptr = aP2.vfptr;
  v99[1].vfptr = (void *)1;
  aP2.vfptr = (void *)2;
  dword_ABE5AC = 0;
  dword_ABE5A4 = (IUnknown *)1;
  v100 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v100;
  if ( v100 )
  {
    Array::ForEach((int)v100, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v101 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v101 = 0;
  }
  dword_ABE5A8 = (int)v101;
  v101->vfptr = aP2.vfptr;
  v101[1].vfptr = (void *)1;
  v120 = (rc_ptr_base *)65537;
  aP2.vfptr = (void *)4;
  dword_ABE5B8 = 0;
  dword_ABE5B0 = 2;
  v102 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v102;
  if ( v102 )
  {
    Array::ForEach((int)v102, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v103 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v103 = 0;
  }
  dword_ABE5B4 = v103;
  *(rc_ptr_base *)v103->vtable0 = aP2;
  *(_DWORD *)&v103->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE5B4->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE5B4->vtable0[12] = 5;
  HIWORD(v120) = 3;
  v119 = 5;
  aP2.vfptr = (void *)2;
  dword_ABE5C4 = 0;
  dword_ABE5BC = 2;
  v104 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v104;
  if ( v104 )
  {
    Array::ForEach((int)v104, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v105 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v105 = 0;
  }
  dword_ABE5C0 = v105;
  *(rc_ptr_base *)v105->vtable0 = aP2;
  *(_DWORD *)&v105->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE5C0->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5C0->vtable0[12] = v119;
  dword_ABE5C8 = 0;
  dword_ABE5CC = 0;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5DC = 0;
  dword_ABE5D4 = 2;
  v106 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v106;
  if ( v106 )
  {
    Array::ForEach((int)v106, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v107 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v107 = 0;
  }
  dword_ABE5D8 = v107;
  *(rc_ptr_base *)v107->vtable0 = aP2;
  *(_DWORD *)&v107->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5D8->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5D8->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5E8 = 0;
  dword_ABE5E0 = 2;
  v108 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v108;
  if ( v108 )
  {
    Array::ForEach((int)v108, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v109 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v109 = 0;
  }
  dword_ABE5E4 = v109;
  *(rc_ptr_base *)v109->vtable0 = aP2;
  *(_DWORD *)&v109->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5E4->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5E4->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5F4 = 0;
  dword_ABE5EC = 2;
  v110 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v110;
  if ( v110 )
  {
    Array::ForEach((int)v110, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v111 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v111 = 0;
  }
  dword_ABE5F0 = v111;
  *(rc_ptr_base *)v111->vtable0 = aP2;
  *(_DWORD *)&v111->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5F0->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5F0->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE600 = 0;
  dword_ABE5F8 = 2;
  v112 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v112;
  if ( v112 )
  {
    Array::ForEach((int)v112, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v113 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v113 = 0;
  }
  dword_ABE5FC = (int)v113;
  v113->vfptr = aP2.vfptr;
  v113[1].vfptr = (void *)6;
  LOWORD(aP1.vfptr) = 2;
  *(_DWORD *)(dword_ABE5FC + 8) = v120;
  HIWORD(aP1.vfptr) = 0;
  *(_DWORD *)(dword_ABE5FC + 12) = 2;
  v114 = (rc_ptr_base *)aP1.vfptr;
  aP1.vfptr = 0;
  aP2.vfptr = v114;
  v123 = 2;
  v125 = 6;
  WaypointPath::Constructor(dword_ABE604, &aP1, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE610, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE61C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v115 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  v118 = v115;
  WaypointPath::Constructor(dword_ABE628, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 6;
  ListNode::Alloc(dword_ABE634, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 6;
  ListNode::Alloc(dword_ABE640, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 1);
  v123 = 6;
  ListNode::Alloc(dword_ABE64C, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 2, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE658, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE664, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE670, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 1);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE67C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 1);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE688, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE694 = 0;
  dword_ABE698 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6A0, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6AC, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v116 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v120 = v116;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6B8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6C4, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 2, 2);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6D0, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 1);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6DC, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 1);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6E8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE6F4, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE700, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE70C, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 3, 3);
  v123 = 3;
  ListNode::Alloc(dword_ABE718, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 2);
  v123 = 3;
  ListNode::Alloc(dword_ABE724, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 2, 2);
  v123 = 3;
  ListNode::Alloc(dword_ABE730, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 4, 2);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE73C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 2, 4);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE748, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE754 = 0;
  dword_ABE758 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE760, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE76C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE778, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE784, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 2);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE790, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 1);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE79C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE7A8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE7B4, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 3);
  v123 = 4;
  ListNode::Alloc(dword_ABE7C0, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 2);
  v123 = 4;
  ListNode::Alloc(dword_ABE7CC, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 2);
  v123 = 4;
  ListNode::Alloc(dword_ABE7D8, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7E4, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7F0, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7FC, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE808, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE814, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE820 = 0;
  dword_ABE824 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE82C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE838, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE844, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE850, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE85C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE868, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE874, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  return WaypointPath::Constructor(dword_ABE880, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
}



// ==== 0x005AC190  sub_5AC190  this=-  sig=ida-proto ====
void __cdecl sub_5AC190()
{
  _DWORD *v0; // esi
  int v1; // edi
  void *v2; // eax

  v0 = &g_Randomizer; /*0x5ac192*/
  v1 = 109; /*0x5ac197*/
  do /*0x5ac1b2*/
  {
    v2 = (void *)*(v0 - 3); /*0x5ac19c*/
    v0 -= 3; /*0x5ac19f*/
    __3_YAXPAX_Z(v2); /*0x5ac1a3*/
    --v1; /*0x5ac1ab*/
    *v0 = 0; /*0x5ac1ac*/
  }
  while ( v1 ); /*0x5ac1b2*/
}


// ==== 0x005AC230  MapSeed::IsCellInBounds  this=MapSeed  sig=csp ====
bool __thiscall sub_5AC230(__int16 *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *this; /*0x5ac230*/
  v2 = this->MapSeed_field_0x04; /*0x5ac233*/
  return v2 + v1 > g_MapCellHeight_Value /*0x5ac25f*/
      && v1 - v2 < g_MapCellHeight_Value
      && v2 - v1 < g_MapCellHeight_Value
      && v2 + v1 <= g_MapCellCount;
}


// ==== 0x005AC270  MapSeedClass::QueryInterface  this=MapSeedClass  sig=csp ====
MapSeedClass *__thiscall MapSeedClass::QueryInterface(_DWORD *Block, char a2)
{
  LoadOptions::Cleanup(Block); /*0x5ac273*/
  if ( (a2 & 1) != 0 ) /*0x5ac27d*/
    __3_YAXPAX_Z(Block); /*0x5ac280*/
  return (MapSeedClass *)Block; /*0x5ac28a*/
}


// ==== 0x005AC290  RandomMap::Constructor_VectorClass_Cell_  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_VectorClass_Cell_(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax
  void *v5; // eax
  _DWORD *v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (void (__thiscall ***)(_DWORD, int))*Block; /*0x5ac294*/
  if ( v3 ) /*0x5ac298*/
  {
    (**v3)(v3, 1); /*0x5ac29e*/
    *Block = 0; /*0x5ac2a0*/
  }
  v7 = Block; /*0x5ac2b6*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v7); /*0x5ac2ba*/
  if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData ) /*0x5ac2d5*/
  {
    do /*0x5ac2ed*/
    {
      ++v4; /*0x5ac2dd*/
      *((_DWORD *)g_RandomMap_TerrainState + v4 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v4); /*0x5ac2e1*/
    }
    while ( v4 < g_RandomMap_TileData ); /*0x5ac2ed*/
  }
  v5 = (void *)*(Block + 11); /*0x5ac2ef*/
  *(Block + 10) = &vt_VectorClass_Cell; /*0x5ac2f2*/
  if ( v5 && *((_BYTE *)Block + 53) ) /*0x5ac2fd*/
  {
    __3_YAXPAX_Z(v5); /*0x5ac305*/
    *(Block + 11) = 0; /*0x5ac30d*/
  }
  *((_BYTE *)Block + 53) = 0; /*0x5ac318*/
  *(Block + 12) = 0; /*0x5ac31e*/
  if ( (a2 & 1) != 0 ) /*0x5ac325*/
    __3_YAXPAX_Z(Block); /*0x5ac328*/
  return Block; /*0x5ac332*/
}


// ==== 0x005AC340  Scalar::Dtor  this=AbstractClass  sig=csp ====
void **__thiscall Scalar::Dtor(void **Block, char a2)
{
  __3_YAXPAX_Z(*(Block + 2)); /*0x5ac347*/
  if ( (a2 & 1) != 0 ) /*0x5ac355*/
    __3_YAXPAX_Z(Block); /*0x5ac358*/
  return Block; /*0x5ac362*/
}


// ==== 0x005AC370  Coord::Compare2D  this=Coord  sig=csp ====
BOOL __thiscall Coord_Compare2D(_WORD *this, _WORD *a2)
{
  return *this != *a2 || this->q004 != a2[1]; /*0x5ac388*/
}


// ==== 0x005AC3A0  VectorClass_ptr_MapRegionClass::Destroy  this=VectorClass_ptr_MapRegionClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::sub_5AC3A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac3a6*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac3a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac3b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac3b6*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac3be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac3c1*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac3c4*/
}


// ==== 0x005AC3D0  VectorClass_ptr_MapRegionClass::GetItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::sub_5AC3D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac3d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5ac3e5*/
  else
    return 0; /*0x5ac3d7*/
}


// ==== 0x005AC3F0  _VectorClass_PAVMapRegionClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5ac3fa*/
}


// ==== 0x005AC400  TypeList::BuildingTypeConstructor  this=TypeList  sig=csp ====
CCINIClass *__thiscall TypeList::BuildingTypeConstructor(_DWORD *this)
{
  this->Items = 0; /*0x5ac404*/
  this->Capacity = 0; /*0x5ac407*/
  this->IsInitialized = 1; /*0x5ac40a*/
  this->IsAllocated = 0; /*0x5ac40e*/
  this->CapacityIncrement = 10; /*0x5ac411*/
  this->Count = 0; /*0x5ac418*/
  *this = &vt_TypeList_BuildingTypeClass_const; /*0x5ac41b*/
  return (CCINIClass *)this; /*0x5ac421*/
}


// ==== 0x005AC430  DynamicVector::Copy  this=WeaponStruct  sig=csp ====
_DWORD *__thiscall DynamicVector::Copy(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5ac43e*/
  v3 = aP1->Capacity; /*0x5ac441*/
  *(this + 2) = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    this->FLH = 0; /*0x5ac496*/
    *((_BYTE *)this + 13) = 0; /*0x5ac49d*/
LABEL_8:
    this->BarrelLength = aP1[1].vtable0; /*0x5ac4a1*/
    this->BarrelThickness = aP1[1].Items; /*0x5ac4aa*/
    return this; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  this->FLH = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  v5 = *(this + 2); /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  *((_BYTE *)this + 13) = 1; /*0x5ac469*/
  if ( v5 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(this->FLH + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < *(this + 2) ); /*0x5ac481*/
  this->BarrelLength = aP1[1].vtable0; /*0x5ac486*/
  this->BarrelThickness = aP1[1].Items; /*0x5ac48c*/
  return this; /*0x5ac491*/
}


// ==== 0x005AC4C0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MapSeedClass_18_::sub_5AC4C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac4c6*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac4c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac4d6*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac4de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac4e1*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac4e4*/
}


// ==== 0x005AC4F0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapSeedClass_18_::sub_5AC4F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac4f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/
}


// ==== 0x005AC510  _VectorClass_PAU_WIN32_FIND_DATAA::GetCell  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass_18_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5ac51a*/
}


// ==== 0x005AC520  _DynamicVectorClass_V_TRect_H::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSEngine::sub_5AC520(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac526*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac529*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac530*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac536*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac53e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac541*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac544*/
}


// ==== 0x005AC550  _DynamicVectorClass_V_TRect_H::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSEngine::sub_5AC550(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac550*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}


// ==== 0x005AC570  _VectorClass_V_TRect_H::Shutdown  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSEngine::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(this->Items + 16 * a3); /*0x5ac57d*/
  *a2 = *v3; /*0x5ac587*/
  a2[1] = v3[1]; /*0x5ac58c*/
  a2[2] = v3[2]; /*0x5ac592*/
  a2[3] = v3[3]; /*0x5ac599*/
  return a2; /*0x5ac595*/
}


// ==== 0x005AC5A0  ?$DynamicVectorClass@PAVCellClass@@::checkCellBounds  this=DynamicVector  sig=csp ====
void __thiscall MapClass::sub_5AC5A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac5a6*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac5a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac5b6*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac5be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac5c1*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac5c4*/
}


// ==== 0x005AC5D0  ?$DynamicVectorClass@PAVCellClass@@::validateCellCoord  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapClass::sub_5AC5D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac5d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5ac5e5*/
  else
    return 0; /*0x5ac5d7*/
}


// ==== 0x005AC5F0  _DynamicVectorClass_N::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_N::sub_5AC5F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac5f6*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac5f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac600*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac606*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac60e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac611*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac614*/
}


// ==== 0x005AC620  _DynamicVectorClass_N::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_N::sub_5AC620(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac620*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5ac635*/
  else
    return 0; /*0x5ac627*/
}


// ==== 0x005AC640  _VectorClass_N::Clear  this=VectorClass  sig=csp ====
double __thiscall VectorClass_N::_vt06(_DWORD *this, int a2)
{
  return *(double *)(this->Items + 8 * a2); /*0x5ac64a*/
}


// ==== 0x005AC650  _TypeList_PBVBuildingTypeClass::Add  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_BuildingType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ac653*/
  *Block = &vt_VectorClass_BuildingTypeClass_const; /*0x5ac656*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    *(Block + 1) = 0; /*0x5ac670*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ac67b*/
  *(Block + 2) = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(Block); /*0x5ac68b*/
  return (TypeList *)Block; /*0x5ac695*/
}


// ==== 0x005AC6A0  _VectorClass_PAVMapRegionClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5ac6a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5ac6ad*/
  {
    v3 = 0; /*0x5ac6af*/
    if ( v2 <= 0 ) /*0x5ac6b3*/
      return 1; /*0x5ac6d3*/
    v4 = (_DWORD *)this->Items; /*0x5ac6b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5ac6bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5ac6c4*/
    {
      ++v3; /*0x5ac6c6*/
      ++v4; /*0x5ac6c7*/
      if ( v3 >= v2 ) /*0x5ac6cc*/
        return 1; /*0x5ac6cc*/
    }
  }
  return 0; /*0x5ac6ce*/
}


// ==== 0x005AC6E0  _VectorClass_PAVMapRegionClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5ac6ec*/
  {
    this->IsInitialized = 0; /*0x5ac6f6*/
    if ( a3 ) /*0x5ac6fc*/
      v4 = a3; /*0x5ac712*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5ac70e*/
    this->IsInitialized = 1; /*0x5ac716*/
    if ( v4 ) /*0x5ac71a*/
    {
      if ( this->Items ) /*0x5ac725*/
      {
        v6 = this->Capacity; /*0x5ac72c*/
        if ( a2 < v6 ) /*0x5ac731*/
          v6 = a2; /*0x5ac733*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5ac739*/
          ++i; /*0x5ac73e*/
        if ( this->IsAllocated ) /*0x5ac74b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ac756*/
          this->Items = 0; /*0x5ac75e*/
        }
      }
      this->Items = v4; /*0x5ac767*/
      this->Capacity = a2; /*0x5ac76f*/
      this->IsAllocated = a3 == 0; /*0x5ac772*/
      return 1; /*0x5ac778*/
    }
    else
    {
      return 0; /*0x5ac71f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ac782*/
    return 1; /*0x5ac788*/
  }
}


// ==== 0x005AC790  _VectorClass_PAVMapRegionClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5ac79d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5ac7a3*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac7ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac7ae*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac7b1*/
}


// ==== 0x005AC7C0  _VectorClass_PAVMapRegionClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5ac7c0*/
    return 0; /*0x5ac7c8*/
  v3 = *(_DWORD *)(this + 8); /*0x5ac7ce*/
  result = 0; /*0x5ac7d1*/
  if ( v3 <= 0 ) /*0x5ac7d5*/
    return -1; /*0x5ac7ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5ac7db*/
  {
    if ( ++result >= v3 ) /*0x5ac7ea*/
      return -1; /*0x5ac7ea*/
  }
  return result; /*0x5ac7ca*/
}


// ==== 0x005AC800  _VectorClass_PAVMapRegionClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac800*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5ac815*/
  else
    return 0; /*0x5ac807*/
}


// ==== 0x005AC820  VectorClass_ptr_MapRegionClass::SetCapacity  this=VectorClass_ptr_MapRegionClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::sub_5AC820(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ac82c*/
  {
    this->IsInitialized = 0; /*0x5ac832*/
    if ( a3 ) /*0x5ac838*/
      v4 = a3; /*0x5ac84e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5ac84a*/
    this->IsInitialized = 1; /*0x5ac852*/
    if ( !v4 ) /*0x5ac856*/
      return 0; /*0x5ac8ca*/
    if ( this->Items ) /*0x5ac858*/
    {
      v5 = this->Capacity; /*0x5ac85f*/
      if ( a2 < v5 ) /*0x5ac864*/
        v5 = a2; /*0x5ac866*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5ac86c*/
        ++i; /*0x5ac871*/
      if ( this->IsAllocated ) /*0x5ac87e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ac889*/
        this->Items = 0; /*0x5ac891*/
      }
    }
    this->Items = v4; /*0x5ac89a*/
    this->Capacity = a2; /*0x5ac8a2*/
    this->IsAllocated = a3 == 0; /*0x5ac8a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ac8ae*/
  }
  v7 = this->Capacity; /*0x5ac8b1*/
  if ( v7 < this->Items ) /*0x5ac8b9*/
    this->Items = v7; /*0x5ac8bb*/
  return 1; /*0x5ac8be*/
}


// ==== 0x005AC8D0  VectorClass_ptr_MapRegionClass::FindItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::sub_5AC8D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5ac8d0*/
  result = 0; /*0x5ac8d3*/
  if ( v2 <= 0 ) /*0x5ac8d8*/
    return -1; /*0x5ac8ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5ac8de*/
  {
    if ( ++result >= v2 ) /*0x5ac8ed*/
      return -1; /*0x5ac8ed*/
  }
  return result; /*0x5ac8f2*/
}


// ==== 0x005AC900  DynamicVectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_BuildingType_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5ac909*/
  this->Capacity = a2; /*0x5ac910*/
  this->q030 = 1; /*0x5ac913*/
  this->__pad_034 = 0; /*0x5ac917*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x5ac91b*/
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
      this->Items = a3; /*0x5ac92b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ac93c*/
      this->__pad_034 = 1; /*0x5ac93f*/
    }
  }
  *this = &vt_DynamicVectorClass_BuildingTypeClass_const; /*0x5ac943*/
  this->q005 = 10; /*0x5ac949*/
  this->q010 = 0; /*0x5ac950*/
  return this; /*0x5ac959*/
}


// ==== 0x005AC960  PriorityQueue::Pop  this=AbstractClass  sig=csp ====
int __thiscall PriorityQueue_Pop(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int v10; // [esp+0h] [ebp-4h]

  if ( !*this ) /*0x5ac961*/
    return 0; /*0x5ac96a*/
  v2 = this->vtable3; /*0x5ac96b*/
  v3 = 1; /*0x5ac970*/
  v4 = *(_DWORD *)(v2 + 4); /*0x5ac978*/
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v2 + 4 * *this); /*0x5ac97b*/
  v10 = v4; /*0x5ac983*/
  *(_DWORD *)(this->vtable3 + 4 * *this) = 0; /*0x5ac987*/
  v5 = *this - 1; /*0x5ac991*/
  *this = v5; /*0x5ac993*/
  if ( v5 < 2 /*0x5ac9b5*/
    || (v6 = 2, *(float *)(*(_DWORD *)(this->vtable3 + 4) + 4) <= (double)*(float *)(*(_DWORD *)(this->vtable3 + 8) + 4)) )
  {
    v6 = 1; /*0x5ac9b7*/
  }
  if ( v5 >= 3 /*0x5ac9d7*/
    && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 12) + 4) )
  {
    v6 = 3; /*0x5ac9d9*/
    do /*0x5aca45*/
    {
LABEL_10:
      v7 = this->vtable3; /*0x5ac9e7*/
      v8 = 2 * v6 + 1; /*0x5ac9ea*/
      v9 = *(_DWORD *)(v7 + 4 * v3); /*0x5ac9f1*/
      *(_DWORD *)(v7 + 4 * v3) = *(_DWORD *)(v7 + 4 * v6); /*0x5ac9f4*/
      v3 = v6; /*0x5ac9fa*/
      *(_DWORD *)(this->vtable3 + 4 * v6) = v9; /*0x5ac9fc*/
      if ( 2 * v6 <= *this /*0x5aca21*/
        && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 8 * v6) + 4) )
      {
        v6 *= 2; /*0x5aca23*/
      }
      if ( v8 <= *this /*0x5aca3f*/
        && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 4 * v8) + 4) )
      {
        v6 = v8; /*0x5aca41*/
      }
    }
    while ( v6 != v3 ); /*0x5aca45*/
    return v10; /*0x5aca45*/
  }
  if ( v6 != 1 ) /*0x5ac9e3*/
    goto LABEL_10; /*0x5ac9e3*/
  return v10; /*0x5ac96a*/
}


// ==== 0x005ACA60  _VectorClass_PAU_WIN32_FIND_DATAA::AddRef  this=VectorClass  sig=csp ====
char __thiscall MapSeedClass_18_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5aca62*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( v2 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = (_DWORD *)this->Items; /*0x5aca75*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5aca7b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5aca84*/
    {
      ++v3; /*0x5aca86*/
      ++v4; /*0x5aca87*/
      if ( v3 >= v2 ) /*0x5aca8c*/
        return 1; /*0x5aca8c*/
    }
  }
  return 0; /*0x5aca8e*/
}


// ==== 0x005ACAA0  _VectorClass_PAU_WIN32_FIND_DATAA::Release  this=VectorClass  sig=csp ====
char __thiscall MapSeedClass_18_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    this->IsInitialized = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5acace*/
    this->IsInitialized = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( this->Items ) /*0x5acae5*/
      {
        v6 = this->Capacity; /*0x5acaec*/
        if ( a2 < v6 ) /*0x5acaf1*/
          v6 = a2; /*0x5acaf3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( this->IsAllocated ) /*0x5acb0b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acb16*/
          this->Items = 0; /*0x5acb1e*/
        }
      }
      this->Items = v4; /*0x5acb27*/
      this->Capacity = a2; /*0x5acb2f*/
      this->IsAllocated = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }
}


// ==== 0x005ACB50  _VectorClass_PAU_WIN32_FIND_DATAA::ddtor  this=VectorClass  sig=csp ====
void __thiscall MapSeedClass_18_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5acb5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5acb63*/
    *(_DWORD *)(this + 4) = 0; /*0x5acb6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5acb6e*/
  *(_DWORD *)(this + 8) = 0; /*0x5acb71*/
}


// ==== 0x005ACB80  _VectorClass_PAU_WIN32_FIND_DATAA::GenerateSeed  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass_18_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  v3 = *(_DWORD *)(this + 8); /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( v3 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= v3 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/
}


// ==== 0x005ACBC0  _VectorClass_PAU_WIN32_FIND_DATAA::Generate  this=VectorClass  sig=csp ====
unsigned int __thiscall MapSeedClass_18_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5acbc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/
}


// ==== 0x005ACBE0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MapSeedClass_18_::sub_5ACBE0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    this->IsInitialized = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5acc0a*/
    this->IsInitialized = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( this->Items ) /*0x5acc18*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5acc1f*/
      if ( a2 < v5 ) /*0x5acc24*/
        v5 = a2; /*0x5acc26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( this->IsAllocated ) /*0x5acc3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acc49*/
        this->Items = 0; /*0x5acc51*/
      }
    }
    this->Items = v4; /*0x5acc5a*/
    this->DynamicVector_field_0x8 = a2; /*0x5acc62*/
    this->IsAllocated = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5acc6e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5acc71*/
  if ( v7 < this->Items ) /*0x5acc79*/
    this->Items = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/
}


// ==== 0x005ACC90  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MapSeedClass_18_::sub_5ACC90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( v2 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= v2 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/
}


// ==== 0x005ACCC0  _VectorClass_V_TRect_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSEngine::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x5acccb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( v2 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5accd8*/
    v5 = (_DWORD *)this->Items; /*0x5accdb*/
    v6 = (_DWORD *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (_DWORD)v5; /*0x5acce1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= v2 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}


// ==== 0x005ACD30  _VectorClass_V_TRect_H::Release  this=VectorClass  sig=csp ====
char __thiscall MSEngine::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    this->IsInitialized = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    this->IsInitialized = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( this->Items ) /*0x5acd8b*/
      {
        v9 = this->Capacity; /*0x5acd92*/
        if ( a2 < v9 ) /*0x5acd97*/
          v9 = a2; /*0x5acd99*/
        if ( v9 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + this->Items); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --v9; /*0x5acdac*/
            *(_DWORD *)v11 = *v12; /*0x5acdaf*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( v9 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( this->IsAllocated ) /*0x5acdcd*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acdd8*/
          this->Items = 0; /*0x5acde0*/
        }
      }
      this->Items = v7; /*0x5acde9*/
      this->Capacity = v3; /*0x5acdf1*/
      this->IsAllocated = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }
}


// ==== 0x005ACE20  _VectorClass_V_TRect_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSEngine::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5ace2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5ace33*/
    *(_DWORD *)(this + 4) = 0; /*0x5ace3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ace3e*/
  *(_DWORD *)(this + 8) = 0; /*0x5ace41*/
}


// ==== 0x005ACE50  _VectorClass_V_TRect_H::Init  this=VectorClass  sig=csp ====
int __thiscall MSEngine::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  v3 = *(_DWORD *)(this + 8); /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( v3 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= v3 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}


// ==== 0x005ACEB0  _VectorClass_V_TRect_H::Run  this=VectorClass  sig=csp ====
unsigned int __thiscall MSEngine::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}


// ==== 0x005ACED0  _DynamicVectorClass_V_TRect_H::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSEngine::sub_5ACED0(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    this->IsInitialized = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    this->IsInitialized = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( this->Items ) /*0x5acf25*/
    {
      v8 = this->DynamicVector_field_0x8; /*0x5acf2c*/
      if ( a2 < v8 ) /*0x5acf31*/
        v8 = a2; /*0x5acf33*/
      if ( v8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + this->Items); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --v8; /*0x5acf46*/
          *(_DWORD *)v10 = *v11; /*0x5acf49*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( v8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( this->IsAllocated ) /*0x5acf67*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acf72*/
        this->Items = 0; /*0x5acf7a*/
      }
    }
    this->Items = v7; /*0x5acf83*/
    this->DynamicVector_field_0x8 = v3; /*0x5acf8b*/
    this->IsAllocated = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5acf97*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x5acf9a*/
  if ( v12 < this->Items ) /*0x5acfa2*/
    this->Items = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
}


// ==== 0x005ACFC0  _DynamicVectorClass_V_TRect_H::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSEngine::sub_5ACFC0(int *this, _DWORD *a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( v2 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= v2 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}


// ==== 0x005AD010  _DynamicVectorClass_PAVCellClass::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall MapClass::sub_5AD010(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ad01c*/
  {
    this->IsInitialized = 0; /*0x5ad022*/
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5ad03a*/
    this->IsInitialized = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( this->Items ) /*0x5ad048*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( this->IsAllocated ) /*0x5ad06e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ad079*/
        this->Items = 0; /*0x5ad081*/
      }
    }
    this->Items = v4; /*0x5ad08a*/
    this->DynamicVector_field_0x8 = a2; /*0x5ad092*/
    this->IsAllocated = a3 == 0; /*0x5ad095*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ad09e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5ad0a1*/
  if ( v7 < this->Items ) /*0x5ad0a9*/
    this->Items = v7; /*0x5ad0ab*/
  return 1; /*0x5ad0ae*/
}


// ==== 0x005AD0C0  ?$DynamicVectorClass@PAVCellClass@@::updatePathfindingGrid  this=DynamicVector  sig=csp ====
int __thiscall MapClass::sub_5AD0C0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5ad0c0*/
  result = 0; /*0x5ad0c3*/
  if ( v2 <= 0 ) /*0x5ad0c8*/
    return -1; /*0x5ad0df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5ad0ce*/
  {
    if ( ++result >= v2 ) /*0x5ad0dd*/
      return -1; /*0x5ad0dd*/
  }
  return result; /*0x5ad0e2*/
}


// ==== 0x005AD0F0  _VectorClass_N::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_N::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  double *v4; // edx
  int v5; // ecx

  v2 = this->Capacity; /*0x5ad0f6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5ad0fc*/
  {
    v3 = 0; /*0x5ad0fe*/
    if ( v2 <= 0 ) /*0x5ad102*/
      return 1; /*0x5ad124*/
    v4 = *(double **)(a2 + 4); /*0x5ad104*/
    v5 = this->Items - (_DWORD)v4; /*0x5ad10a*/
    while ( *(double *)((char *)v4 + v5) == *v4 ) /*0x5ad116*/
    {
      ++v3; /*0x5ad118*/
      ++v4; /*0x5ad119*/
      if ( v3 >= v2 ) /*0x5ad11e*/
        return 1; /*0x5ad11e*/
    }
  }
  return 0; /*0x5ad120*/
}


// ==== 0x005AD130  _VectorClass_N::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_N::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  v3 = a2; /*0x5ad131*/
  if ( a2 ) /*0x5ad13b*/
  {
    v5 = a3; /*0x5ad141*/
    this->IsInitialized = 0; /*0x5ad145*/
    if ( !a3 ) /*0x5ad14b*/
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5ad15d*/
    this->IsInitialized = 1; /*0x5ad161*/
    if ( v5 ) /*0x5ad165*/
    {
      if ( this->Items ) /*0x5ad16f*/
      {
        v7 = this->Capacity; /*0x5ad176*/
        if ( a2 < v7 ) /*0x5ad17b*/
          v7 = a2; /*0x5ad17d*/
        v8 = 0; /*0x5ad17f*/
        if ( v7 > 0 ) /*0x5ad183*/
        {
          do /*0x5ad19b*/
          {
            v9 = this->Items; /*0x5ad185*/
            ++v8; /*0x5ad188*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5ad18f*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5ad197*/
          }
          while ( v8 < v7 ); /*0x5ad19b*/
          v3 = a2; /*0x5ad19d*/
        }
        if ( this->IsAllocated ) /*0x5ad1a1*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ad1ac*/
          this->Items = 0; /*0x5ad1b4*/
        }
      }
      this->Items = v5; /*0x5ad1c6*/
      this->Capacity = v3; /*0x5ad1c9*/
      this->IsAllocated = a3 == 0; /*0x5ad1cc*/
      return 1; /*0x5ad1d1*/
    }
    else
    {
      return 0; /*0x5ad169*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ad1db*/
    return 1; /*0x5ad1e0*/
  }
}


// ==== 0x005AD1F0  _VectorClass_N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_N::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5ad1fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5ad203*/
    *(_DWORD *)(this + 4) = 0; /*0x5ad20b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ad20e*/
  *(_DWORD *)(this + 8) = 0; /*0x5ad211*/
}


// ==== 0x005AD220  _VectorClass_N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_N::_vt04(int this, double *a2)
{
  int v3; // esi
  int v4; // edx
  double *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5ad220*/
    return 0; /*0x5ad22a*/
  v3 = *(_DWORD *)(this + 8); /*0x5ad230*/
  v4 = 0; /*0x5ad233*/
  if ( v3 <= 0 ) /*0x5ad237*/
    return -1; /*0x5ad253*/
  for ( i = *(double **)(this + 4); *i != *a2; ++i ) /*0x5ad239*/
  {
    if ( ++v4 >= v3 ) /*0x5ad251*/
      return -1; /*0x5ad251*/
  }
  return v4; /*0x5ad229*/
}


// ==== 0x005AD270  _VectorClass_N::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_N::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ad270*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5ad285*/
  else
    return 0; /*0x5ad277*/
}


// ==== 0x005AD290  _DynamicVectorClass_N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_N::sub_5AD290(void *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  v3 = a2; /*0x5ad291*/
  if ( a2 ) /*0x5ad29b*/
  {
    v5 = a3; /*0x5ad2a1*/
    this->IsInitialized = 0; /*0x5ad2a5*/
    if ( !a3 ) /*0x5ad2ab*/
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5ad2bd*/
    this->IsInitialized = 1; /*0x5ad2c1*/
    if ( !v5 ) /*0x5ad2c5*/
      return 0; /*0x5ad347*/
    if ( this->Items ) /*0x5ad2c7*/
    {
      v6 = this->DynamicVector_field_0x8; /*0x5ad2ce*/
      if ( a2 < v6 ) /*0x5ad2d3*/
        v6 = a2; /*0x5ad2d5*/
      v7 = 0; /*0x5ad2d7*/
      if ( v6 > 0 ) /*0x5ad2db*/
      {
        do /*0x5ad2f3*/
        {
          v8 = this->Items; /*0x5ad2dd*/
          ++v7; /*0x5ad2e0*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x5ad2e7*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x5ad2ef*/
        }
        while ( v7 < v6 ); /*0x5ad2f3*/
        v3 = a2; /*0x5ad2f5*/
      }
      if ( this->IsAllocated ) /*0x5ad2f9*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ad304*/
        this->Items = 0; /*0x5ad30c*/
      }
    }
    this->Items = v5; /*0x5ad31e*/
    this->DynamicVector_field_0x8 = v3; /*0x5ad321*/
    this->IsAllocated = a3 == 0; /*0x5ad324*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5ad32d*/
  }
  v9 = this->DynamicVector_field_0x8; /*0x5ad330*/
  if ( v9 < this->Items ) /*0x5ad338*/
    this->Items = v9; /*0x5ad33a*/
  return 1; /*0x5ad33d*/
}


// ==== 0x005AD350  _DynamicVectorClass_N::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_N::sub_5AD350(_DWORD *this, double *a2)
{
  int v2; // esi
  int v3; // edx
  double *i; // ecx

  v2 = this->DynamicVector_field_0x10; /*0x5ad351*/
  v3 = 0; /*0x5ad354*/
  if ( v2 <= 0 ) /*0x5ad359*/
    return -1; /*0x5ad375*/
  for ( i = (double *)this->Items; *i != *a2; ++i ) /*0x5ad35b*/
  {
    if ( ++v3 >= v2 ) /*0x5ad373*/
      return -1; /*0x5ad373*/
  }
  return v3; /*0x5ad375*/
}


// ==== 0x005AD390  _VectorClass_PAVMapRegionClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MapRegionClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad393*/
  *Block = &vt_VectorClass_MapRegionClass; /*0x5ad396*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad3a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad3a8*/
    *(Block + 1) = 0; /*0x5ad3b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad3bb*/
  *(Block + 2) = 0; /*0x5ad3c1*/
  if ( (a2 & 1) != 0 ) /*0x5ad3c8*/
    __3_YAXPAX_Z(Block); /*0x5ad3cb*/
  return (VectorClass *)Block; /*0x5ad3d5*/
}


// ==== 0x005AD3E0  VectorClass_ptr_MapRegionClass::loc_5AD3E0  this=VectorClass_ptr_MapRegionClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_MapRegionClass::loc_5AD3E0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad3e3*/
  *Block = &vt_VectorClass_MapRegionClass; /*0x5ad3e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad3f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad3f8*/
    *(Block + 1) = 0; /*0x5ad400*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad40b*/
  *(Block + 2) = 0; /*0x5ad411*/
  if ( (a2 & 1) != 0 ) /*0x5ad418*/
    __3_YAXPAX_Z(Block); /*0x5ad41b*/
  return Block; /*0x5ad425*/
}


// ==== 0x005AD430  _VectorClass_PAU_WIN32_FIND_DATAA::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall MapSeedClass_18_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad433*/
  *Block = &vt_VectorClass_WIN32_FIND_DATAA; /*0x5ad436*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad440*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad448*/
    *(Block + 1) = 0; /*0x5ad450*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad45b*/
  *(Block + 2) = 0; /*0x5ad461*/
  if ( (a2 & 1) != 0 ) /*0x5ad468*/
    __3_YAXPAX_Z(Block); /*0x5ad46b*/
  return (VectorClass *)Block; /*0x5ad475*/
}


// ==== 0x005AD480  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::Constructor_VectorClass__WIN32_FIND_DATAA___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MapSeedClass_18_::Constructor_VectorClass__WIN32_FIND_DATAA___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad483*/
  *Block = &vt_VectorClass_WIN32_FIND_DATAA; /*0x5ad486*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad490*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad498*/
    *(Block + 1) = 0; /*0x5ad4a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad4ab*/
  *(Block + 2) = 0; /*0x5ad4b1*/
  if ( (a2 & 1) != 0 ) /*0x5ad4b8*/
    __3_YAXPAX_Z(Block); /*0x5ad4bb*/
  return (DynamicVector *)Block; /*0x5ad4c5*/
}


// ==== 0x005AD4D0  _VectorClass_V_TRect_H::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall MSEngine::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad4d3*/
  *Block = &vt_VectorClass_TRect_int; /*0x5ad4d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad4e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad4e8*/
    *(Block + 1) = 0; /*0x5ad4f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad4fb*/
  *(Block + 2) = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    __3_YAXPAX_Z(Block); /*0x5ad50b*/
  return (VectorClass *)Block; /*0x5ad515*/
}


// ==== 0x005AD520  _DynamicVectorClass_V_TRect_H::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSEngine::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad523*/
  *Block = &vt_VectorClass_TRect_int; /*0x5ad526*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad530*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad538*/
    *(Block + 1) = 0; /*0x5ad540*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad54b*/
  *(Block + 2) = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    __3_YAXPAX_Z(Block); /*0x5ad55b*/
  return (DynamicVector *)Block; /*0x5ad565*/
}


// ==== 0x005AD570  _DynamicVectorClass_PAVCellClass::Destruct  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CellClassVector::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad573*/
  *Block = &vt_VectorClass_CellClass; /*0x5ad576*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad580*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad588*/
    *(Block + 1) = 0; /*0x5ad590*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad59b*/
  *(Block + 2) = 0; /*0x5ad5a1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5a8*/
    __3_YAXPAX_Z(Block); /*0x5ad5ab*/
  return (DynamicVector *)Block; /*0x5ad5b5*/
}


// ==== 0x005AD5C0  _VectorClass_N::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_N::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad5c3*/
  *Block = &vt_VectorClass_double; /*0x5ad5c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad5d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad5d8*/
    *(Block + 1) = 0; /*0x5ad5e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad5eb*/
  *(Block + 2) = 0; /*0x5ad5f1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5f8*/
    __3_YAXPAX_Z(Block); /*0x5ad5fb*/
  return (VectorClass *)Block; /*0x5ad605*/
}


// ==== 0x005AD610  _DynamicVectorClass_N::Constructor_VectorClass_double_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_N::Constructor_VectorClass_double_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad613*/
  *Block = &vt_VectorClass_double; /*0x5ad616*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad620*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad628*/
    *(Block + 1) = 0; /*0x5ad630*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad63b*/
  *(Block + 2) = 0; /*0x5ad641*/
  if ( (a2 & 1) != 0 ) /*0x5ad648*/
    __3_YAXPAX_Z(Block); /*0x5ad64b*/
  return (DynamicVector *)Block; /*0x5ad655*/
}


// ==== 0x005AD660  TypeList::BuildingTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::BuildingTypeCopy(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x5ad66d*/
  this->Capacity = 0; /*0x5ad670*/
  this->q030 = 1; /*0x5ad673*/
  this->__pad_034 = 0; /*0x5ad677*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x5ad67a*/
  if ( this != (_DWORD *)aP1 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((int)this); /*0x5ad682*/
    v3 = aP1->Capacity; /*0x5ad688*/
    this->Capacity = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x5ad696*/
      this->Items = v4; /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        v5 = this->Capacity; /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        this->__pad_034 = 1; /*0x5ad6ac*/
        if ( v5 > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < this->Capacity ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5ad6c8*/
      this->__pad_034 = 0; /*0x5ad6cb*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x5ad6d1*/
  this->q005 = aP1[1].Items; /*0x5ad6d7*/
  *this = &vt_TypeList_BuildingTypeClass_const; /*0x5ad6da*/
  return this; /*0x5ad6e2*/
}


// ==== 0x005AD6F0  StringVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall StringVector_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5ad6fb*/
  this->Capacity = a2; /*0x5ad6fe*/
  this->q030 = 1; /*0x5ad701*/
  this->__pad_034 = 0; /*0x5ad705*/
  *this = &vt_VectorClass_char; /*0x5ad708*/
  if ( a2 ) /*0x5ad70e*/
  {
    if ( a3 ) /*0x5ad716*/
    {
      this->Items = a3; /*0x5ad718*/
      return this; /*0x5ad71e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ad72d*/
    this->__pad_034 = 1; /*0x5ad730*/
  }
  return this; /*0x5ad71d*/
}


// ==== 0x005AD740  TileSystem::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TileSystem::Constructor(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  this->Items = 0; /*0x5ad74b*/
  this->Capacity = aP1; /*0x5ad74e*/
  this->q030 = 1; /*0x5ad751*/
  this->__pad_034 = 0; /*0x5ad755*/
  *this = &vt_VectorClass_MapRegionClass; /*0x5ad758*/
  if ( aP1 ) /*0x5ad75e*/
  {
    if ( aP2 ) /*0x5ad766*/
    {
      this->Items = aP2; /*0x5ad768*/
      return this; /*0x5ad76e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x5ad77d*/
    this->__pad_034 = 1; /*0x5ad780*/
  }
  return this; /*0x5ad76d*/
}


// ==== 0x005AD790  Vector4::EraseAt  this=DynamicVector  sig=csp ====
char __thiscall Vector4_EraseAt(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x5ad790*/
  v3 = a2; /*0x5ad793*/
  if ( a2 >= v2 ) /*0x5ad799*/
    return 0; /*0x5ad7bc*/
  v4 = v2 - 1; /*0x5ad79b*/
  this->DynamicVector_field_0x10 = v4; /*0x5ad79e*/
  if ( a2 < v4 ) /*0x5ad7a1*/
  {
    do /*0x5ad7b4*/
    {
      ++v3; /*0x5ad7a7*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x5ad7ab*/
    }
    while ( v3 < this->DynamicVector_field_0x10 ); /*0x5ad7b4*/
  }
  return 1; /*0x5ad7b9*/
}


// ==== 0x005AD7D0  DynamicVector::Add_Alt3  this=TypeList  sig=csp ====
char __thiscall DynamicVector::Add_Alt3(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x5ad7d3*/
  if ( this->Count >= v3 ) /*0x5ad7db*/
  {
    if ( !this->IsAllocated && v3 ) /*0x5ad7e6*/
      return 0; /*0x5ad7e6*/
    v4 = this->CapacityIncrement; /*0x5ad7e8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5ad7f8*/
      return 0; /*0x5ad7ff*/
  }
  v6 = this->Count; /*0x5ad805*/
  v7 = this->Items; /*0x5ad808*/
  this->Count = v6 + 1; /*0x5ad80e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x5ad818*/
  return 1; /*0x5ad801*/
}


// ==== 0x005AD820  RandomMap::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5AD820(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5ad82b*/
  this->Capacity = a2; /*0x5ad82e*/
  this->q030 = 1; /*0x5ad831*/
  this->__pad_034 = 0; /*0x5ad835*/
  *this = &vt_VectorClass_CellClass; /*0x5ad838*/
  if ( a2 ) /*0x5ad83e*/
  {
    if ( a3 ) /*0x5ad846*/
    {
      this->Items = a3; /*0x5ad848*/
      return this; /*0x5ad84e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ad85d*/
    this->__pad_034 = 1; /*0x5ad860*/
  }
  return this; /*0x5ad84d*/
}


// ==== 0x005AD870  Heap::SiftDown  this=AbstractClass  sig=csp ====
void __thiscall Heap_SiftDown(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // edi

  v2 = a2; /*0x5ad875*/
  v3 = 2 * a2; /*0x5ad87a*/
  v4 = 2 * a2 + 1; /*0x5ad87d*/
  if ( 2 * a2 > *this /*0x5ad89b*/
    || *(float *)(*(_DWORD *)(this->vtable3 + 4 * a2) + 4) <= (double)*(float *)(*(_DWORD *)(this->vtable3 + 8 * a2) + 4) )
  {
    v3 = a2; /*0x5ad89d*/
  }
  if ( v4 <= *this /*0x5ad8b9*/
    && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 4 * v4) + 4) )
  {
    v3 = 2 * a2 + 1; /*0x5ad8bb*/
  }
  if ( v3 != a2 ) /*0x5ad8bf*/
  {
    do /*0x5ad91f*/
    {
      v5 = this->vtable3; /*0x5ad8c1*/
      v6 = 2 * v3 + 1; /*0x5ad8c4*/
      v7 = *(_DWORD *)(v5 + 4 * v2); /*0x5ad8cb*/
      *(_DWORD *)(v5 + 4 * v2) = *(_DWORD *)(v5 + 4 * v3); /*0x5ad8ce*/
      v2 = v3; /*0x5ad8d4*/
      *(_DWORD *)(this->vtable3 + 4 * v3) = v7; /*0x5ad8d6*/
      if ( 2 * v3 <= *this /*0x5ad8fb*/
        && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 8 * v3) + 4) )
      {
        v3 *= 2; /*0x5ad8fd*/
      }
      if ( v6 <= *this /*0x5ad919*/
        && *(float *)(*(_DWORD *)(this->vtable3 + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(this->vtable3 + 4 * v6) + 4) )
      {
        v3 = v6; /*0x5ad91b*/
      }
    }
    while ( v3 != v2 ); /*0x5ad91f*/
  }
}


// ==== 0x005AD930  ObjectClass::Map_Helper_5AD930  this=ObjectClass  sig=csp ====
char __thiscall sub_5AD930(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x5ad93c*/
    return 0; /*0x5ad93c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x5ad950*/
  if ( !v3 ) /*0x5ad957*/
    return 0; /*0x5ad9b0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x5ad965*/
  {
    v5 = 8 * i; /*0x5ad969*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x5ad972*/
    *(_DWORD *)&v3[v5] = *v6; /*0x5ad977*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x5ad98b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x5ad996*/
  *(_DWORD *)this = v3; /*0x5ad998*/
  *(_DWORD *)(this + 8) = v7; /*0x5ad99a*/
  *(_DWORD *)(this + 16) = 0; /*0x5ad99d*/
  return 1; /*0x5ad9a4*/
}


// ==== 0x005AD9C0  sub_5AD9C0  this=-  sig=ida-proto ====
int __cdecl sub_5AD9C0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x5ad9d0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x005AD9F0  VectorClass::Map_Cleanup  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5AD9F0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5ad9fb*/
  this->Capacity = a2; /*0x5ad9fe*/
  this->q030 = 1; /*0x5ada01*/
  this->__pad_034 = 0; /*0x5ada05*/
  *this = &vt_VectorClass_WIN32_FIND_DATAA; /*0x5ada08*/
  if ( a2 ) /*0x5ada0e*/
  {
    if ( a3 ) /*0x5ada16*/
    {
      this->Items = a3; /*0x5ada18*/
      return this; /*0x5ada1e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ada2d*/
    this->__pad_034 = 1; /*0x5ada30*/
  }
  return this; /*0x5ada1d*/
}


// ==== 0x005ADA40  RandomMap::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5ADA40(_DWORD *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x5ada4a*/
  this->Capacity = a2; /*0x5ada51*/
  this->q030 = 1; /*0x5ada54*/
  this->__pad_034 = 0; /*0x5ada58*/
  *this = &vt_VectorClass_TRect_int; /*0x5ada5c*/
  if ( a2 ) /*0x5ada62*/
  {
    if ( a3 ) /*0x5ada6a*/
    {
      this->Items = a3; /*0x5ada6d*/
      return this; /*0x5ada78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x5ada81*/
    if ( v5 ) /*0x5ada8b*/
    {
      this->Items = v5; /*0x5ada8e*/
      this->__pad_034 = 1; /*0x5ada95*/
      return this; /*0x5ada9d*/
    }
    this->__pad_034 = 1; /*0x5adaa2*/
    this->Items = 0; /*0x5adaa6*/
  }
  return this; /*0x5ada76*/
}


// ==== 0x005ADAB0  RandomMap::Constructor_1  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5ADAB0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5adabb*/
  this->Capacity = a2; /*0x5adabe*/
  this->q030 = 1; /*0x5adac1*/
  this->__pad_034 = 0; /*0x5adac5*/
  *this = &vt_VectorClass_double; /*0x5adac8*/
  if ( a2 ) /*0x5adace*/
  {
    if ( a3 ) /*0x5adad6*/
    {
      this->Items = a3; /*0x5adad8*/
      return this; /*0x5adade*/
    }
    this->Items = __2_YAPAXI_Z(8 * a2); /*0x5adaed*/
    this->__pad_034 = 1; /*0x5adaf0*/
  }
  return this; /*0x5adadd*/
}


// ==== 0x005ADB00  sub_5ADB00  this=-  sig=ida-proto ====
int sub_5ADB00()
{
  dword_ABED60 = 0; /*0x5adb02*/
  dword_ABED64 = 0; /*0x5adb07*/
  dword_ABED68 = 0; /*0x5adb0c*/
  dword_ABED6C = 0; /*0x5adb11*/
  return 0; /*0x5adb16*/
}


// ==== 0x005ADB20  sub_5ADB20  this=-  sig=ida-proto ====
void sub_5ADB20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5adb2c*/
  dbl_ABED78 = Math::Sqrt(v0 + v0); /*0x5adb3e*/
}


// ==== 0x005ADB50  sub_5ADB50  this=-  sig=ida-proto ====
void sub_5ADB50()
{
  dbl_ABEDC8 = dbl_ABED78 / 60.0; /*0x5adb5c*/
}


// ==== 0x005ADB70  sub_5ADB70  this=-  sig=ida-proto ====
void sub_5ADB70()
{
  dbl_ABEDB0 = 1.0 / dbl_ABEDC8; /*0x5adb7c*/
}


// ==== 0x005ADB90  sub_5ADB90  this=-  sig=ida-proto ====
void sub_5ADB90()
{
  dbl_ABEDA8 = 0.0174532925199433 * 45.0; /*0x5adb9c*/
}


// ==== 0x005ADBB0  sub_5ADBB0  this=-  sig=ida-proto ====
void sub_5ADBB0()
{
  dbl_ABED80 = 0.0174532925199433 * 60.0; /*0x5adbbc*/
}


// ==== 0x005ADBD0  sub_5ADBD0  this=-  sig=ida-proto ====
void sub_5ADBD0()
{
  dbl_ABED58 = 0.0174532925199433 * 90.0; /*0x5adbdc*/
}


// ==== 0x005ADBF0  sub_5ADBF0  this=-  sig=ida-proto ====
__int64 sub_5ADBF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABED58 - dbl_ABED80); /*0x5adc02*/
  result = Math::RoundToInt(v0 * dbl_ABED78 * 0.5); /*0x5adc16*/
  dword_ABEDD0 = result; /*0x5adc1b*/
  return result; /*0x5adc20*/
}


// ==== 0x005ADC30  sub_5ADC30  this=-  sig=ida-proto ====
void sub_5ADC30()
{
  dbl_ABED88 = Math::ArcTan((double)dword_ABEDD0 * 0.00390625); /*0x5adc47*/
}


// ==== 0x005ADC60  sub_5ADC60  this=-  sig=ida-proto ====
void sub_5ADC60()
{
  dbl_ABEDA0 = Math::ArcTan((double)(2 * dword_ABEDD0) / dbl_ABED78); /*0x5adc82*/
}


// ==== 0x005ADC90  sub_5ADC90  this=-  sig=ida-proto ====
__int64 sub_5ADC90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEDD0) + 0.5); /*0x5adcab*/
  dword_ABEDC4 = result; /*0x5adcb0*/
  return result; /*0x5adcb6*/
}


// ==== 0x005ADCC0  sub_5ADCC0  this=-  sig=ida-proto ====
int sub_5ADCC0()
{
  word_ABED70 = 0; /*0x5adcc2*/
  word_ABED72 = 0; /*0x5adcc8*/
  return 0; /*0x5adcce*/
}


// ==== 0x005ADCD0  sub_5ADCD0  this=-  sig=ida-proto ====
int sub_5ADCD0()
{
  dword_ABED90 = 0; /*0x5adcd2*/
  dword_ABED94 = 0; /*0x5adcd7*/
  dword_ABED98 = 0; /*0x5adcdc*/
  return 0; /*0x5adce1*/
}


// ==== 0x005ADCF0  sub_5ADCF0  this=-  sig=ida-proto ====
int sub_5ADCF0()
{
  dword_ABEDC0 = 0; /*0x5adcf5*/
  dword_ABEDB8 = 128; /*0x5adcff*/
  dword_ABEDBC = 128; /*0x5add04*/
  return 128; /*0x5add09*/
}


// ==== 0x005ADD10  ObjectClass::Map_Delete  this=ObjectClass  sig=csp ====
int __thiscall Map_Delete(int this)
{
  bool v3; // bl
  wchar_t *v4; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]
  int v7; // [esp+0h] [ebp-E8h]
  _DWORD v8[20]; // [esp+Ch] [ebp-DCh] BYREF
  char v9[120]; // [esp+5Ch] [ebp-8Ch] BYREF
  int v10[5]; // [esp+D4h] [ebp-14h] BYREF

  MSEngine::Construct(v8); /*0x5add1e*/
  Map_Delete_5CEDD0(v9); /*0x5add27*/
  unknown_libname_73(v10); /*0x5add33*/
  v10[1] = Timer::GetTicks(); /*0x5add48*/
  v10[3] = 0; /*0x5add50*/
  v8[0] = &vt_MapSelect; /*0x5add5b*/
  v3 = ScenarioClass::Load(v8, (ObjectClass *)this) == 0; /*0x5add71*/
  DeleteAndZero((int)v10); /*0x5add74*/
  MSEngine::Destructor((int)v9); /*0x5add7d*/
  MSEngine::Destruct(v8); /*0x5add86*/
  if ( v3 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82C090.onBridge, 134); /*0x5addba*/
    v4 = GetStringCSF((wchar_t *)&stru_82C090.spawnStatus, 0, &stru_82C090.onBridge, 134); /*0x5addc5*/
    Dialog::ShowMessageBox((int)v4, StringCSF, 0, 0, 0, v7); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen((const char *)(this + 4700)) != 0 ? this + 4700 : 0;
  }
}


// ==== 0x005ADE20  Map_Delete_5ADE20  this=-  sig=csp ====
const char *__fastcall Map_Delete_5ADE20(ObjectClass *a1, const char *a2)
{
  bool v5; // bl
  wchar_t *v6; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-FCh]
  int v9; // [esp+0h] [ebp-ECh]
  int v10; // [esp+Ch] [ebp-E0h] BYREF
  _DWORD v11[20]; // [esp+10h] [ebp-DCh] BYREF
  char v12[120]; // [esp+60h] [ebp-8Ch] BYREF
  int v13[5]; // [esp+D8h] [ebp-14h] BYREF

  String::Assign((char **)&v10, a2); /*0x5ade32*/
  MSEngine::Construct(v11); /*0x5ade3b*/
  Map_Delete_5CEDD0(v12); /*0x5ade44*/
  unknown_libname_73(v13); /*0x5ade50*/
  v13[1] = Timer::GetTicks(); /*0x5ade61*/
  v13[3] = 0; /*0x5ade72*/
  v11[0] = &vt_MapSelect; /*0x5ade7d*/
  v5 = !SessionClass::LoadGameSession(v11, a1, (CellStruct *)&v10); /*0x5ade93*/
  DeleteAndZero((int)v13); /*0x5ade96*/
  MSEngine::Destructor((int)v12); /*0x5ade9f*/
  MSEngine::Destruct(v11); /*0x5adea8*/
  DeleteAndZero((int)&v10); /*0x5adeb1*/
  if ( !v5 ) /*0x5adeb8*/
    return a2; /*0x5adf0b*/
  v10 = (int)&stru_82083C; /*0x5aded1*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82C090.onBridge, 152); /*0x5adee5*/
  v6 = GetStringCSF((wchar_t *)&stru_82C090.spawnStatus, 0, &stru_82C090.onBridge, 152); /*0x5adef0*/
  Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v9); /*0x5adefa*/
  return 0; /*0x5adf01*/
}


// ==== 0x005ADF20  SessionClass::LoadGameSession  this=SessionClass  sig=csp ====
bool __thiscall SessionClass::LoadGameSession(_DWORD *this, ObjectClass *aP1, CellStruct *aP2)
{
  int v4; // esi
  char *v6; // edi
  bool v7; // bl
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  ObjectClass *v11; // esi
  ObjectClass *v12; // eax
  void *v13; // [esp+10h] [ebp-8h] BYREF
  void *v14; // [esp+14h] [ebp-4h] BYREF

  if ( !aP1 || String::Equals_Alt((const char **)aP2, 0) ) /*0x5adf37*/
    return 0; /*0x5adf3e*/
  v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] /*0x5adf5b*/
                 + 4 * *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + aP1[42].ambientSoundController[0]) + 188));
  if ( !v4 ) /*0x5adf60*/
  {
    Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  Debug::Log(); /*0x5adf84*/
  String::Assign((char **)&v14, (const char *)(v4 + 36)); /*0x5adf91*/
  v6 = (char *)(this + 20); /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection(v6, (char **)&v14) == 0; /*0x5adfab*/
  DeleteAndZero(&v14); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check(v6, *(_WORD *)&aP1[79].onBridge)) == 0 ) /*0x5adfea*/
  {
    SessionClass::Destruct(v6); /*0x5adfb9*/
    Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName(aP1->__pad_0, (ObjectClass *)&MEMORY[0x87F8E4].__pad_5568[20760]); /*0x5ae013*/
  v9 = 0; /*0x5ae01b*/
  if ( *(int *)(v8 + 100) <= 0 ) /*0x5ae01f*/
    goto LABEL_17; /*0x5ae01f*/
  while ( 1 ) /*0x5ae025*/
  {
    v10 = *(_DWORD *)(v8 + 88); /*0x5ae025*/
    if ( *(_DWORD *)(v10 + 4 * v9) ) /*0x5ae028*/
      break; /*0x5ae028*/
LABEL_14:
    if ( ++v9 >= *(_DWORD *)(v8 + 100) ) /*0x5ae094*/
      goto LABEL_17; /*0x5ae094*/
  }
  v11 = (ObjectClass *)StringTable::Find((MapSelect *)v6, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((char **)&v14, (const char **)&v11->__pad_0[4]); /*0x5ae041*/
  String::ToLower((const char **)&v14); /*0x5ae04a*/
  String::AssignFromPtr((char **)&v13, (const char **)aP2); /*0x5ae058*/
  String::ToLower((const char **)&v13); /*0x5ae061*/
  if ( !v11 || !String::Compare((const char **)&v14, (const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero(&v13); /*0x5ae080*/
    DeleteAndZero(&v14); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = (ObjectClass *)String::GetOrEmpty_Alt((char **)&v11->__pad_0[4]); /*0x5ae09b*/
  ScenarioClass::SetFileName(aP1->__pad_0, v12); /*0x5ae0a7*/
  *(_WORD *)&aP1[79].onBridge = Network_Load(v6, v11); /*0x5ae0b8*/
  DeleteAndZero(&v13); /*0x5ae0bf*/
  DeleteAndZero(&v14); /*0x5ae0c8*/
LABEL_17:
  SessionClass::Destruct(v6); /*0x5ae0cd*/
  return strlen((const char *)&aP1[27].attachedBomb) != 0; /*0x5adf6f*/
}


// ==== 0x005AE100  ScenarioClass::Load  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Load(_DWORD *this, ObjectClass *aP1)
{
  ObjectClass *v2; // ebx
  char result; // al
  Movie *v5; // esi
  Movie *v6; // eax
  ObjectClass *v7; // esi
  ObjectClass *v8; // esi
  ObjectClass *v9; // eax
  char *v10; // [esp+8h] [ebp-4h] BYREF

  v2 = aP1; /*0x5ae102*/
  result = CampaignClass::LoadMovieDisplay((int)this, (int)aP1); /*0x5ae10a*/
  if ( result ) /*0x5ae111*/
  {
    LOBYTE(stru_ABCDFC.Handle) = 0; /*0x5ae126*/
    String::Assign((char **)&aP1, (const char *)&v2[27].attachedBomb); /*0x5ae12d*/
    v5 = (Movie *)CampaignClass::DeleteAndZero((MapSelect *)this + 20, (MSFont *)&aP1); /*0x5ae145*/
    DeleteAndZero((void **)&aP1); /*0x5ae147*/
    Debug::Log(); /*0x5ae154*/
    if ( String::NotEquals((const char **)&v5->field_8, 0) ) /*0x5ae161*/
    {
      v6 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, aLoading); /*0x5ae178*/
      ThemeClass::Play(&g_BuildingTypeClass_Count, v6); /*0x5ae183*/
      v7 = (ObjectClass *)String::GetOrEmpty_Alt(**(char ****)&v5->__pad_48[16]); /*0x5ae192*/
      if ( v7 ) /*0x5ae196*/
      {
        Debug::Log(); /*0x5ae19e*/
        String::Assign(&v10, v7->__pad_0); /*0x5ae1ab*/
        v8 = (ObjectClass *)StringTable::Find((MapSelect *)this + 20, (const char **)&v10); /*0x5ae1c0*/
        DeleteAndZero((void **)&v10); /*0x5ae1c2*/
        String::AssignFromPtr((char **)&aP1, (const char **)&v8->__pad_0[4]); /*0x5ae1cf*/
        if ( String::Length((const char **)&aP1) ) /*0x5ae1d8*/
        {
          v9 = (ObjectClass *)String::GetOrEmpty((char **)&aP1); /*0x5ae1e5*/
          ScenarioClass::SetFileName(v2->__pad_0, v9); /*0x5ae1ed*/
          *(_WORD *)&v2[79].onBridge = Network_Load(this + 20, v8); /*0x5ae1fa*/
        }
        DeleteAndZero((void **)&aP1); /*0x5ae205*/
      }
    }
    CampaignClass::ReleaseSubobjectsAndDestruct(this); /*0x5ae20c*/
    return 1; /*0x5ae214*/
  }
  return result; /*0x5ae113*/
}


// ==== 0x005AE220  CampaignClass::LoadMovieDisplay  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::LoadMovieDisplay(int this, int a2)
{
  int v2; // ebp
  bool v4; // zf
  int v6; // edi
  bool v7; // bl
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  DWORD Ticks; // eax
  int v13; // [esp+14h] [ebp-8h]

  v2 = a2; /*0x5ae227*/
  v4 = a2 == 0; /*0x5ae22e*/
  *(_DWORD *)(this + 172) = 0; /*0x5ae231*/
  *(_DWORD *)(this + 176) = 0; /*0x5ae237*/
  *(_DWORD *)(this + 180) = 0; /*0x5ae23d*/
  if ( v4
    || (v6 = *((_DWORD *)MEMORY[0x8B4124]
             + *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v2 + 7284)) + 188))) == 0 )
  {
    Debug::Log(); /*0x5ae24a*/
    return 0; /*0x5ae252*/
  }
  else
  {
    Debug::Log(); /*0x5ae2a2*/
    String::Assign((char **)&a2, (const char *)(v6 + 36)); /*0x5ae2af*/
    v7 = SessionClass::LoadMapSelection((_DWORD *)(this + 80), (char **)&a2) == 0; /*0x5ae2c9*/
    DeleteAndZero((void **)&a2); /*0x5ae2cc*/
    if ( v7 )
    {
      SessionClass::Destruct((_DWORD *)(this + 80)); /*0x5ae2d7*/
      Debug::Log(); /*0x5ae2e1*/
      return 0; /*0x5ae2e9*/
    }
    else
    {
      String::Assign((char **)&a2, (const char *)(v2 + 4700)); /*0x5ae300*/
      v8 = CampaignClass::DeleteAndZero(&a2); /*0x5ae315*/
      DeleteAndZero((void **)&a2); /*0x5ae317*/
      if ( v8
        && (!__2_YAPAXI_Z(0x20u) ? (v9 = 0) : (v9 = CampaignClass::Constructor_1(1)), (*(_DWORD *)(this + 180) = v9) != 0) )
      {
        *(_DWORD *)(this + 72) = ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]) /*0x5ae381*/
                                - 640)
                               / 2;
        v10 = ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]) - 400) / 2; /*0x5ae3a3*/
        *(_DWORD *)(this + 76) = v10; /*0x5ae3a5*/
        *(_DWORD *)(this + 184) = *(_DWORD *)(this + 104); /*0x5ae3ac*/
        *(_DWORD *)(this + 188) = *(_DWORD *)(this + 108); /*0x5ae3b1*/
        *(_DWORD *)(this + 192) = *(_DWORD *)(this + 112); /*0x5ae3b7*/
        *(_DWORD *)(this + 196) = *(_DWORD *)(this + 116); /*0x5ae3bd*/
        *(_DWORD *)(this + 184) += *(_DWORD *)(this + 72); /*0x5ae3c7*/
        v11 = 0; /*0x5ae3d1*/
        *(_DWORD *)(this + 188) += v10; /*0x5ae3d3*/
        do /*0x5ae413*/
        {
          WideString::AssignFromPtr((wchar_t **)&a2, (const wchar_t **)(v8 + 16)); /*0x5ae3e1*/
          WrapWideStringText((const wchar_t **)&a2, *(int **)(this + 180), *(_DWORD *)(this + 192)); /*0x5ae3f7*/
          v8 = CampaignClass::Check(++v11); /*0x5ae40a*/
          DeleteAndZero::Alt((void **)&a2); /*0x5ae40c*/
        }
        while ( v8 ); /*0x5ae413*/
        String::Assign_Alt((void **)(this + 200), 0); /*0x5ae41c*/
        Ticks = Timer::GetTicks(); /*0x5ae425*/
        *(_DWORD *)(this + 216) = -1; /*0x5ae430*/
        *(_DWORD *)(this + 204) = Ticks; /*0x5ae43d*/
        *(_DWORD *)(this + 208) = v13; /*0x5ae445*/
        *(_DWORD *)(this + 212) = 0; /*0x5ae44b*/
        return 1; /*0x5ae448*/
      }
      else
      {
        Debug::Log(); /*0x5ae351*/
        CampaignClass::ReleaseSubobjectsAndDestruct(this); /*0x5ae35b*/
        return 0; /*0x5ae363*/
      }
    }
  }
}


// ==== 0x005AE460  CampaignClass::ReleaseSubobjectsAndDestruct  this=CampaignClass  sig=csp ====
int __thiscall sub_5AE460(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))this->q0B4; /*0x5ae463*/
  if ( v2 ) /*0x5ae46b*/
  {
    (**v2)(v2, 1); /*0x5ae471*/
    this->q0B4 = 0; /*0x5ae473*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->q0B0; /*0x5ae47d*/
  if ( v3 ) /*0x5ae485*/
  {
    (**v3)(v3, 1); /*0x5ae48b*/
    this->q0B0 = 0; /*0x5ae48d*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->q0AC; /*0x5ae497*/
  if ( v4 ) /*0x5ae49f*/
  {
    (**v4)(v4, 1); /*0x5ae4a5*/
    this->q0AC = 0; /*0x5ae4a7*/
  }
  return SessionClass::Destruct(this + 20); /*0x5ae4b9*/
}


// ==== 0x005AE4C0  MapSelect::CheckStringNotEmpty  this=MapSelect  sig=csp ====
char __thiscall MSEngine_Destru::CheckStringNotEmpty(MapSelect *this)
{
  char result; // al

  result = String::NotEquals((const char **)this + 50, 0); /*0x5ae4cb*/
  if ( result ) /*0x5ae4d2*/
  {
    if ( *((_DWORD *)this + 51) != -1 ) /*0x5ae4db*/
      return Timer::GetTicks(); /*0x5ae4e3*/
  }
  return result; /*0x5ae4e8*/
}


// ==== 0x005AE4F0  sub_5AE4F0  this=-  sig=csp ====
int __stdcall sub_5AE4F0(int a1)
{
  return 0; /*0x5ae4f2*/
}


// ==== 0x005AE500  ObjectClass::method_5AE500  this=ObjectClass  sig=csp ====
char __thiscall sub_5AE500(_DWORD *this, const char **a2)
{
  const char **v3; // eax

  LOBYTE(v3) = String::NotEquals(a2, 0); /*0x5ae50c*/
  if ( (_BYTE)v3 ) /*0x5ae513*/
  {
    v3 = sub_5CF840(this + 20, a2); /*0x5ae519*/
    if ( v3 ) /*0x5ae520*/
      LOBYTE(v3) = nullsub_24(v3); /*0x5ae524*/
  }
  return (char)v3; /*0x5ae529*/
}


// ==== 0x005AE530  ObjectClass::method_5AE530  this=ObjectClass  sig=csp ====
DWORD __thiscall sub_5AE530(char **this, ObjectClass *aP1, ObjectClass *aP2)
{
  ObjectClass *v3; // esi
  DWORD result; // eax
  int v5; // [esp+8h] [ebp-8h]

  v3 = (ObjectClass *)this; /*0x5ae538*/
  String::Reassign(this + 50, (AbstractClass *)aP1); /*0x5ae541*/
  result = Timer::GetTicks(); /*0x5ae54a*/
  v3 = (ObjectClass *)((char *)v3 + 204); /*0x5ae557*/
  *(_DWORD *)v3->__pad_0 = result; /*0x5ae55d*/
  *(_DWORD *)&v3->__pad_0[4] = v5; /*0x5ae55f*/
  *(_DWORD *)&v3->__pad_0[8] = aP2; /*0x5ae562*/
  return result; /*0x5ae565*/
}


// ==== 0x005AE570  nullsub_170  this=-  sig=csp ====
void __stdcall nullsub_170(int a1)
{
  ; /*0x5ae570*/
}


// ==== 0x005AE580  nullsub_171  this=-  sig=csp ====
void __stdcall nullsub_171(int a1)
{
  ; /*0x5ae580*/
}


// ==== 0x005AE590  MSEngine::StubReturnFalse  this=MSEngine  sig=csp ====
void __stdcall MSEngine_Destru::StubReturnFalse(int a1)
{
  ; /*0x5ae590*/
}


// ==== 0x005AE5A0  MapSelect::DestroyComposite  this=MapSelect  sig=csp ====
void **__thiscall MSEngine_Destru::DestroyComposite(MapSelect *this, char a2)
{
  DeleteAndZero((void **)this + 50); /*0x5ae5a9*/
  MSEngine::Destructor((int)(this + 20)); /*0x5ae5b1*/
  MSEngine::Destruct(this); /*0x5ae5b8*/
  if ( (a2 & 1) != 0 ) /*0x5ae5c2*/
    __3_YAXPAX_Z(this); /*0x5ae5c5*/
  return &this->vfptr; /*0x5ae5cf*/
}


// ==== 0x005AE5E0  Matrix::Copy12Float  this=Matrix  sig=csp ====
_DWORD *__thiscall Matrix_Copy12Float(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx
  int v4; // edi

  result = this; /*0x5ae5e5*/
  v3 = this; /*0x5ae5e8*/
  v4 = 12; /*0x5ae5ec*/
  do /*0x5ae5fa*/
  {
    *v3 = *(_DWORD *)((char *)v3 + a2 - (_DWORD)this); /*0x5ae5f4*/
    ++v3; /*0x5ae5f6*/
    --v4; /*0x5ae5f9*/
  }
  while ( v4 ); /*0x5ae5fa*/
  return result; /*0x5ae5fc*/
}


// ==== 0x005AE610  Transform::Copy  this=Transform  sig=csp ====
void *__thiscall Transform_Copy(void *this, const void *a2)
{
  qmemcpy(this, a2, 0x30u); /*0x5ae61f*/
  return this; /*0x5ae621*/
}


// ==== 0x005AE6F0  Matrix3D::Constructor  this=Matrix3D  sig=csp ====
ObjectClass *__thiscall Matrix3D::Constructor(float *this, AbstractClass *a2, AbstractClass *aP1)
{
  AbstractClass *v5; // [esp+0h] [ebp-8h]

  *(this + 1) = 0.0; /*0x5ae6fa*/
  *(this + 2) = 0.0; /*0x5ae6fd*/
  *(this + 3) = 0.0; /*0x5ae700*/
  *(this + 4) = 0.0; /*0x5ae703*/
  *(this + 6) = 0.0; /*0x5ae706*/
  *(this + 7) = 0.0; /*0x5ae709*/
  *(this + 8) = 0.0; /*0x5ae70c*/
  *(this + 9) = 0.0; /*0x5ae70f*/
  *(this + 11) = 0.0; /*0x5ae712*/
  *this = 1.0; /*0x5ae719*/
  *(this + 5) = 1.0; /*0x5ae71b*/
  *(this + 10) = 1.0; /*0x5ae71e*/
  Matrix2D::Rotate(this, a2); /*0x5ae724*/
  Matrix3x3::RotateX(this, aP1); /*0x5ae730*/
  *(float *)&v5 = -*(float *)&a2; /*0x5ae73e*/
  Matrix2D::Rotate(this, v5); /*0x5ae741*/
  return (ObjectClass *)this; /*0x5ae748*/
}


// ==== 0x005AE750  Math::BuildRotationMatrix  this=RecoilData  sig=csp ====
float *__thiscall Math_BuildRotationMatrix(float *this, float *a2, float a3)
{
  double v3; // kr00_8
  double v5; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st5
  double v12; // st5
  double v13; // st4
  double v14; // st7
  float v16; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x5ae762*/
  v16 = Math::ArcTan2(a3); /*0x5ae76f*/
  v5 = Math::SinCos(v3); /*0x5ae775*/
  v7 = *a2 * *a2; /*0x5ae787*/
  *this = (1.0 - v7) * v16 + v7; /*0x5ae797*/
  v8 = 1.0 - v16; /*0x5ae7a1*/
  *(this + 1) = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  v10 = v5 * a2[1]; /*0x5ae7bf*/
  *(this + 3) = 0.0; /*0x5ae7c2*/
  *(this + 2) = v9 + v10; /*0x5ae7c7*/
  *(this + 4) = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  *(this + 5) = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  v13 = v5 * *a2; /*0x5ae7ff*/
  *(this + 7) = 0.0; /*0x5ae801*/
  *(this + 6) = v12 - v13; /*0x5ae806*/
  *(this + 8) = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(this + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(this + 11) = 0.0; /*0x5ae83f*/
  *(this + 10) = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return this; /*0x5ae851*/
}


// ==== 0x005AE860  Matrix3x4::Identity  this=ObjectClass  sig=csp ====
int __thiscall Matrix3x4_Identity(_DWORD *this)
{
  *this = 1065353216; /*0x5ae867*/
  this->vtable2 = 0; /*0x5ae869*/
  this->vtable3 = 0; /*0x5ae86c*/
  this->vtable4 = 0; /*0x5ae86f*/
  this->uniqueId = 0; /*0x5ae872*/
  this->abstractFlags = 1065353216; /*0x5ae875*/
  this->nextArrayIndex = 0; /*0x5ae878*/
  this->referenceCount = 0; /*0x5ae87b*/
  this->NeedsSaveOrLink = 0; /*0x5ae87e*/
  this->objectTypeFlags = 0; /*0x5ae881*/
  this->owningHouseIndex = 1065353216; /*0x5ae884*/
  this->fallRate = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}


// ==== 0x005AE890  Vector::MatrixMulVectorMath  this=Vector  sig=csp ====
void __thiscall Math_MatrixMulVector(float *this, float a2, float a3, float a4)
{
  this->IsInitialized = a3 * this->Vector_field_0x4 + a4 * this->Vector_field_0x8 + a2 * *this + this->IsInitialized; /*0x5ae8ab*/
  this->q007 = a2 * this->Vector_field_0x4 + a3 * this->CapacityIncrement + a4 * this->q006 + this->q007; /*0x5ae8ca*/
  this->q00B = a2 * this->Vector_field_0x8 + a3 * this->q009 + a4 * this->q00A + this->q00B; /*0x5ae8e9*/
}


// ==== 0x005AE8F0  Matrix3x3::Multiply  this=Matrix3x3  sig=csp ====
float *__thiscall Matrix3x3_Multiply(float *this, float *a2)
{
  float *result; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]

  result = a2; /*0x5ae8f1*/
  v3 = *a2; /*0x5ae8f5*/
  v10 = v3 * *this + this->Matrix3x3_field_0x0C; /*0x5ae8fe*/
  this->Matrix3x3_field_0x0C = v10; /*0x5ae902*/
  v8 = v3 * this->Matrix3x3_field_0x04 + this->q007; /*0x5ae90d*/
  this->q007 = v8; /*0x5ae911*/
  v4 = v3 * this->Matrix3x3_field_0x08 + this->q00B; /*0x5ae917*/
  this->q00B = v4; /*0x5ae91a*/
  v5 = result[1]; /*0x5ae91d*/
  v11 = v5 * this->Matrix3x3_field_0x04 + v10; /*0x5ae929*/
  this->Matrix3x3_field_0x0C = v11; /*0x5ae92d*/
  v9 = v5 * this->q005 + v8; /*0x5ae939*/
  this->q007 = v9; /*0x5ae93d*/
  v6 = v4 + v5 * this->q009; /*0x5ae943*/
  this->q00B = v6; /*0x5ae945*/
  v7 = result[2]; /*0x5ae948*/
  this->Matrix3x3_field_0x0C = v7 * this->Matrix3x3_field_0x08 + v11; /*0x5ae954*/
  this->q007 = v7 * this->q006 + v9; /*0x5ae960*/
  this->q00B = v7 * this->q00A + v6; /*0x5ae968*/
  return result; /*0x5ae96e*/
}


// ==== 0x005AE980  Matrix3x4::Translate  this=Matrix3x4  sig=csp ====
void __thiscall Matrix3x4::Translate(float *this, ParticleSystemClass *aP1)
{
  this->q00C = *(float *)&aP1 * *this + this->q00C; /*0x5ae989*/
  this->q01C = *(float *)&aP1 * this->q004 + this->q01C; /*0x5ae996*/
  this->q02C = *(float *)&aP1 * this->q008 + this->q02C; /*0x5ae9a3*/
}


// ==== 0x005AE9B0  Matrix3x3::ApplyCol0  this=Matrix3x3  sig=csp ====
void __thiscall Matrix3x3::ApplyCol0(float *this, AbstractClass *aP1)
{
  this->Matrix3x3_field_0x0C = *(float *)&aP1 * this->Matrix3x3_field_0x04 + this->Matrix3x3_field_0x0C; /*0x5ae9ba*/
  this->q007 = *(float *)&aP1 * this->q005 + this->q007; /*0x5ae9c7*/
  this->q00B = *(float *)&aP1 * this->q009 + this->q00B; /*0x5ae9d4*/
}


// ==== 0x005AE9E0  Matrix3x3::ApplyCol1  this=Matrix3x3  sig=csp ====
void __thiscall Matrix3x3::ApplyCol1(float *this, AbstractClass *aP1)
{
  this->Matrix3x3_field_0x0C = *(float *)&aP1 * this->Matrix3x3_field_0x08 + this->Matrix3x3_field_0x0C; /*0x5ae9ea*/
  this->q007 = *(float *)&aP1 * this->q006 + this->q007; /*0x5ae9f7*/
  this->q00B = *(float *)&aP1 * this->q00A + this->q00B; /*0x5aea04*/
}


// ==== 0x005AEA10  TacticalMap::MultiplyByScalar  this=ObjectClass  sig=csp ====
void __thiscall TacticalMap::MultiplyByScalar(float *this, ObjectClass *aP1)
{
  *this = *(float *)&aP1 * *this; /*0x5aea16*/
  this->vtable2 = *(float *)&aP1 * this->vtable2; /*0x5aea1f*/
  this->vtable3 = *(float *)&aP1 * this->vtable3; /*0x5aea29*/
  this->vtable2 = *(float *)&aP1 * this->vtable2; /*0x5aea33*/
  this->abstractFlags = *(float *)&aP1 * this->abstractFlags; /*0x5aea3d*/
  this->objectTypeFlags = *(float *)&aP1 * this->objectTypeFlags; /*0x5aea47*/
  this->vtable3 = *(float *)&aP1 * this->vtable3; /*0x5aea51*/
  this->nextArrayIndex = *(float *)&aP1 * this->nextArrayIndex; /*0x5aea5b*/
  this->owningHouseIndex = *(float *)&aP1 * this->owningHouseIndex; /*0x5aea65*/
}


// ==== 0x005AEAD0  BuildingClass::processBaseExpansion  this=BuildingClass  sig=csp ====
void __thiscall sub_5AEAD0(float *this, float a2)
{
  *this = a2 * *this; /*0x5aead6*/
  this->vtable2 = a2 * this->vtable2; /*0x5aeadf*/
  this->vtable3 = a2 * this->vtable3; /*0x5aeae9*/
}


// ==== 0x005AEAF0  BuildingClass::updateFoundation  this=BuildingClass  sig=csp ====
void __thiscall sub_5AEAF0(float *this, float a2)
{
  this->vtable2 = a2 * this->vtable2; /*0x5aeaf7*/
  this->abstractFlags = a2 * this->abstractFlags; /*0x5aeb01*/
  this->objectTypeFlags = a2 * this->objectTypeFlags; /*0x5aeb0b*/
}


// ==== 0x005AEB20  BuildingClass::recalcAdjacency  this=BuildingClass  sig=csp ====
void __thiscall sub_5AEB20(float *this, float a2)
{
  this->vtable3 = a2 * this->vtable3; /*0x5aeb27*/
  this->nextArrayIndex = a2 * this->nextArrayIndex; /*0x5aeb31*/
  this->owningHouseIndex = a2 * this->owningHouseIndex; /*0x5aeb3b*/
}


// ==== 0x005AEC40  ObjectClass::method_5AEC40  this=ObjectClass  sig=csp ====
int __thiscall sub_5AEC40(int this, float a2)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st4
  int result; // eax
  float v8; // [esp+0h] [ebp-24h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+28h] [ebp+4h]

  v2 = a2; /*0x5aec52*/
  v14 = Math::SinCos(a2); /*0x5aec5f*/
  v4 = Math::ArcTan2(v2); /*0x5aec65*/
  v10 = *(float *)(this + 20); /*0x5aec74*/
  v5 = -v14; /*0x5aec7b*/
  v8 = *(float *)(this + 32); /*0x5aec7d*/
  v11 = *(float *)(this + 24); /*0x5aec8e*/
  v6 = *(float *)(this + 16); /*0x5aec92*/
  v9 = *(float *)(this + 36); /*0x5aec9e*/
  v13 = *(float *)(this + 28); /*0x5aeca2*/
  result = *(int *)(this + 40); /*0x5aeca6*/
  v12 = *(float *)(this + 44); /*0x5aecb2*/
  *(float *)(this + 16) = v8 * v5 + v6 * v4; /*0x5aecb9*/
  *(float *)(this + 20) = v9 * v5 + v10 * v4; /*0x5aecca*/
  *(float *)(this + 24) = *(float *)&result * v5 + v11 * v4; /*0x5aecdb*/
  *(float *)(this + 28) = v12 * v5 + v13 * v4; /*0x5aecec*/
  *(float *)(this + 32) = v8 * v4 + v6 * v14; /*0x5aed01*/
  *(float *)(this + 36) = v9 * v4 + v10 * v14; /*0x5aed14*/
  *(float *)(this + 40) = *(float *)&result * v4 + v11 * v14; /*0x5aed27*/
  *(float *)(this + 44) = v12 * v4 + v13 * v14; /*0x5aed3b*/
  return result; /*0x5aed42*/
}


// ==== 0x005AED50  ObjectClass::method_5AED50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AED50(float *this, float a2)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  int result; // eax
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+20h] [ebp+4h]

  v2 = a2; /*0x5aed62*/
  v14 = Math::SinCos(a2); /*0x5aed6f*/
  v4 = Math::ArcTan2(v2); /*0x5aed75*/
  v5 = -v14; /*0x5aed7e*/
  v6 = *this; /*0x5aed80*/
  v7 = this->vtable3; /*0x5aed82*/
  v9 = this->vtable2; /*0x5aed95*/
  result = *((int *)this + 9); /*0x5aed99*/
  v10 = this->vtable3; /*0x5aeda0*/
  v11 = this->owningHouseIndex; /*0x5aedac*/
  v12 = this->vtable4; /*0x5aedb0*/
  *this = v7 * v14 + v6 * v4; /*0x5aedb4*/
  v13 = this->fallRate; /*0x5aedca*/
  this->vtable2 = *(float *)&result * v14 + v9 * v4; /*0x5aedd0*/
  this->vtable3 = v11 * v14 + v10 * v4; /*0x5aede3*/
  this->vtable4 = v13 * v14 + v12 * v4; /*0x5aedf6*/
  this->vtable3 = v6 * v5 + v7 * v4; /*0x5aee03*/
  this->objectTypeFlags = v9 * v5 + *(float *)&result * v4; /*0x5aee14*/
  this->owningHouseIndex = v10 * v5 + v11 * v4; /*0x5aee25*/
  this->fallRate = v12 * v5 + v13 * v4; /*0x5aee36*/
  return result; /*0x5aee40*/
}


// ==== 0x005AEE50  ObjectClass::method_5AEE50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AEE50(float *this, float a2)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st4
  int result; // eax
  float v8; // [esp+0h] [ebp-24h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+28h] [ebp+4h]

  v2 = a2; /*0x5aee62*/
  v14 = Math::SinCos(a2); /*0x5aee6f*/
  v4 = Math::ArcTan2(v2); /*0x5aee75*/
  v10 = this->vtable2; /*0x5aee83*/
  v5 = -v14; /*0x5aee8a*/
  v8 = this->vtable2; /*0x5aee8c*/
  v11 = this->vtable3; /*0x5aee9d*/
  v6 = *this; /*0x5aeea1*/
  v9 = this->abstractFlags; /*0x5aeead*/
  v13 = this->vtable4; /*0x5aeeb1*/
  result = *((int *)this + 6); /*0x5aeeb5*/
  v12 = this->referenceCount; /*0x5aeec1*/
  *this = v8 * v5 + v6 * v4; /*0x5aeec8*/
  this->vtable2 = v9 * v5 + v10 * v4; /*0x5aeed8*/
  this->vtable3 = *(float *)&result * v5 + v11 * v4; /*0x5aeee9*/
  this->vtable4 = v12 * v5 + v13 * v4; /*0x5aeefa*/
  this->vtable2 = v8 * v4 + v6 * v14; /*0x5aef0f*/
  this->abstractFlags = v9 * v4 + v10 * v14; /*0x5aef22*/
  this->nextArrayIndex = *(float *)&result * v4 + v11 * v14; /*0x5aef35*/
  this->referenceCount = v12 * v4 + v13 * v14; /*0x5aef49*/
  return result; /*0x5aef50*/
}


// ==== 0x005AEF60  Matrix3x3::RotateX  this=ObjectClass  sig=csp ====
void __thiscall Matrix3x3::RotateX(float *this, AbstractClass *aP1)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st6
  double v8; // st5
  double v9; // st6
  double v10; // st5
  float aP1a; // [esp+Ch] [ebp+4h]

  v2 = *(float *)&aP1; /*0x5aef72*/
  aP1a = Math::SinCos(*(float *)&aP1); /*0x5aef7f*/
  v4 = Math::ArcTan2(v2); /*0x5aef85*/
  v5 = this->vtable2; /*0x5aef8a*/
  v6 = this->vtable3; /*0x5aef8d*/
  this->vtable2 = v5 * v4 + v6 * aP1a; /*0x5aefa0*/
  this->vtable3 = v6 * v4 - v5 * aP1a; /*0x5aefad*/
  v7 = this->abstractFlags; /*0x5aefb0*/
  v8 = this->nextArrayIndex; /*0x5aefb3*/
  this->abstractFlags = v7 * v4 + v8 * aP1a; /*0x5aefc2*/
  this->nextArrayIndex = v8 * v4 - v7 * aP1a; /*0x5aefcf*/
  v9 = this->objectTypeFlags; /*0x5aefd2*/
  v10 = this->owningHouseIndex; /*0x5aefd5*/
  this->objectTypeFlags = v9 * v4 + v10 * aP1a; /*0x5aefe4*/
  this->owningHouseIndex = v10 * v4 - v9 * aP1a; /*0x5aeff1*/
}


// ==== 0x005AF000  ObjectClass::method_5AF000  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF000(float *this, ObjectClass *aP1, ObjectClass *aP2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = this->vtable2; /*0x5af000*/
  v4 = this->vtable3; /*0x5af003*/
  this->vtable2 = v4 * *(float *)&aP1 + v3 * *(float *)&aP2; /*0x5af014*/
  this->vtable3 = v4 * *(float *)&aP2 - v3 * *(float *)&aP1; /*0x5af023*/
  v5 = this->abstractFlags; /*0x5af026*/
  v6 = this->nextArrayIndex; /*0x5af029*/
  this->abstractFlags = v6 * *(float *)&aP1 + v5 * *(float *)&aP2; /*0x5af03a*/
  this->nextArrayIndex = v6 * *(float *)&aP2 - v5 * *(float *)&aP1; /*0x5af049*/
  v7 = this->objectTypeFlags; /*0x5af04c*/
  v8 = this->owningHouseIndex; /*0x5af04f*/
  this->objectTypeFlags = v8 * *(float *)&aP1 + v7 * *(float *)&aP2; /*0x5af060*/
  this->owningHouseIndex = v8 * *(float *)&aP2 - v7 * *(float *)&aP1; /*0x5af06f*/
}


// ==== 0x005AF080  Matrix3D::RotateZ  this=RecoilData  sig=csp ====
void __thiscall Matrix3D::RotateZ(float *this, AbstractClass *aP1)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st6
  double v8; // st5
  double v9; // st6
  double v10; // st5
  float aP1a; // [esp+Ch] [ebp+4h]

  v2 = *(float *)&aP1; /*0x5af092*/
  aP1a = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64(*(float *)&aP1)); /*0x5af09f*/
  v4 = Math::ArcTan2((IUnknown *)LODWORD(v2)); /*0x5af0a5*/
  v5 = *this; /*0x5af0aa*/
  v6 = *(this + 2); /*0x5af0ac*/
  *this = v5 * v4 - v6 * aP1a; /*0x5af0bf*/
  *(this + 2) = v6 * v4 + v5 * aP1a; /*0x5af0cb*/
  v7 = *(this + 4); /*0x5af0ce*/
  v8 = *(this + 6); /*0x5af0d1*/
  *(this + 4) = v7 * v4 - v8 * aP1a; /*0x5af0e0*/
  *(this + 6) = v8 * v4 + v7 * aP1a; /*0x5af0ed*/
  v9 = *(this + 8); /*0x5af0f0*/
  v10 = *(this + 10); /*0x5af0f3*/
  *(this + 8) = v9 * v4 - v10 * aP1a; /*0x5af102*/
  *(this + 10) = v10 * v4 + v9 * aP1a; /*0x5af10f*/
}


// ==== 0x005AF120  ObjectClass::method_5AF120  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF120(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = *this; /*0x5af120*/
  v4 = this->vtable3; /*0x5af122*/
  *this = v3 * a3 - v4 * a2; /*0x5af133*/
  this->vtable3 = v3 * a2 + v4 * a3; /*0x5af143*/
  v5 = this->vtable2; /*0x5af146*/
  v6 = this->nextArrayIndex; /*0x5af149*/
  this->vtable2 = v5 * a3 - v6 * a2; /*0x5af15a*/
  this->nextArrayIndex = v5 * a2 + v6 * a3; /*0x5af16b*/
  v7 = this->vtable3; /*0x5af16e*/
  v8 = this->owningHouseIndex; /*0x5af171*/
  this->vtable3 = v7 * a3 - v8 * a2; /*0x5af182*/
  this->owningHouseIndex = v7 * a2 + v8 * a3; /*0x5af193*/
}


// ==== 0x005AF1A0  Matrix2D::Rotate  this=ObjectClass  sig=csp ====
void __thiscall Matrix2D::Rotate(float *this, AbstractClass *aP1)
{
  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st6
  double v8; // st5
  double v9; // st6
  double v10; // st5
  float aP1a; // [esp+Ch] [ebp+4h]

  v2 = *(float *)&aP1; /*0x5af1b2*/
  aP1a = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64(*(float *)&aP1)); /*0x5af1bf*/
  v4 = Math::SinCos((IUnknown *)LODWORD(v2)); /*0x5af1c5*/
  v5 = *this; /*0x5af1ca*/
  v6 = this->vtable2; /*0x5af1cc*/
  *this = v6 * v4 + v5 * aP1a; /*0x5af1df*/
  this->vtable2 = v6 * aP1a - v5 * v4; /*0x5af1eb*/
  v7 = this->vtable2; /*0x5af1ee*/
  v8 = this->abstractFlags; /*0x5af1f1*/
  this->vtable2 = v8 * v4 + v7 * aP1a; /*0x5af200*/
  this->abstractFlags = v8 * aP1a - v7 * v4; /*0x5af20d*/
  v9 = this->vtable3; /*0x5af210*/
  v10 = this->objectTypeFlags; /*0x5af213*/
  this->vtable3 = v10 * v4 + v9 * aP1a; /*0x5af222*/
  this->objectTypeFlags = v10 * aP1a - v9 * v4; /*0x5af22f*/
}


// ==== 0x005AF2C0  ObjectClass::method_5AF2C0  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF2C0(IUnknown *this)
{
  _DWORD v2[3]; // [esp+0h] [ebp-24h] BYREF
  float v3[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x5af2ce*/
  return *TransformMatrix3x4Point((AbstractClass *)v3, this, (IUnknown *)v2); /*0x5af303*/
}


// ==== 0x005AF310  ObjectClass::method_5AF310  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF310(IUnknown *this)
{
  float *v1; // eax
  _DWORD v3[4]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af31e*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3); /*0x5af336*/
  *(float *)&v3[3] = *v1; /*0x5af33d*/
  return v1[1]; /*0x5af353*/
}


// ==== 0x005AF360  ObjectClass::method_5AF360  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF360(IUnknown *this)
{
  float *v1; // eax
  _DWORD v3[5]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af36e*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3); /*0x5af386*/
  *(float *)&v3[3] = *v1; /*0x5af38d*/
  *(float *)&v3[4] = v1[1]; /*0x5af394*/
  return v1[2]; /*0x5af3a3*/
}


// ==== 0x005AF3B0  ObjectClass::method_5AF3B0  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF3B0(IUnknown *this)
{
  float *v1; // eax
  __int128 aP0; // [esp+0h] [ebp-34h]
  _DWORD v4[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v5[3]; // [esp+28h] [ebp-Ch] BYREF

  v4[0] = 0; /*0x5af3be*/
  v4[1] = 1065353216; /*0x5af3c6*/
  v4[2] = 0; /*0x5af3ce*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4); /*0x5af3d6*/
  *((double *)&aP0 + 1) = v1[1]; /*0x5af3f5*/
  *(double *)&aP0 = v1[2]; /*0x5af401*/
  return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x5af40c*/
}


// ==== 0x005AF410  TechnoClass::CalcFacingFromMatrix  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::CalcFacingFromMatrix(IUnknown *this)
{
  float *v1; // eax
  __int128 aP0; // [esp+0h] [ebp-34h]
  _DWORD v4[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v5[3]; // [esp+28h] [ebp-Ch] BYREF

  v4[0] = 0; /*0x5af41e*/
  v4[1] = 0; /*0x5af426*/
  v4[2] = 1065353216; /*0x5af42e*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4); /*0x5af436*/
  *((double *)&aP0 + 1) = v1[2]; /*0x5af459*/
  *(double *)&aP0 = *v1; /*0x5af461*/
  return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x5af46c*/
}


// ==== 0x005AF470  ObjectClass::method_5AF470  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF470(IUnknown *this)
{
  float *v1; // eax
  __int128 aP0; // [esp+0h] [ebp-34h]
  _DWORD v4[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v5[3]; // [esp+28h] [ebp-Ch] BYREF

  v4[0] = 1065353216; /*0x5af47e*/
  v4[1] = 0; /*0x5af486*/
  v4[2] = 0; /*0x5af48e*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4); /*0x5af496*/
  *((double *)&aP0 + 1) = *v1; /*0x5af4ae*/
  *(double *)&aP0 = v1[1]; /*0x5af4c1*/
  return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x5af4cc*/
}


// ==== 0x005AF4D0  Matrix3x3::TransformPoint  this=Matrix3x3  sig=csp ====
float *__thiscall Matrix3x3::TransformPoint(float *this, IUnknown *aP1, float *a2)
{
  double v3; // st7
  double v4; // st6
  int varC; // [esp+0h] [ebp-Ch]
  IUnknown *v6; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  *(float *)&varC = this->Matrix3x3_field_0x04 * a2[1] + this->Matrix3x3_field_0x08 * a2[2] + *a2 * *this; /*0x5af4eb*/
  *(float *)&v6 = this->q005 * a2[1] + this->Matrix3x3_field_0x04 * *a2 + this->q006 * a2[2]; /*0x5af508*/
  v3 = this->q009 * a2[1] + this->Matrix3x3_field_0x08 * *a2; /*0x5af517*/
  v4 = this->q00A * a2[2]; /*0x5af51c*/
  aP1->field_0 = varC; /*0x5af527*/
  *(float *)&v8 = v3 + v4; /*0x5af52d*/
  aP1->field_4 = (int)v6; /*0x5af531*/
  aP1->field_8 = v8; /*0x5af538*/
  return (float *)&aP1->field_0; /*0x5af53b*/
}


// ==== 0x005AF550  ObjectClass::method_5AF550  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF550(int this, float *a2, float *a3, AbstractClass *a4)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float aP1; // [esp+0h] [ebp-28h]
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+10h] [ebp-18h]
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+14h] [ebp-14h]
  float v16; // [esp+14h] [ebp-14h]
  float aP2a; // [esp+18h] [ebp-10h]
  float aP2; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+2Ch] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+4h]
  int v25; // [esp+30h] [ebp+8h]

  v12 = *a3 - *a2; /*0x5af566*/
  *(float *)&v25 = a3[1] - a2[1]; /*0x5af570*/
  v7 = a3[2] - a2[2]; /*0x5af577*/
  v14 = v7; /*0x5af57a*/
  v19 = v7 * v14; /*0x5af582*/
  aP2a = v12 * v12; /*0x5af58e*/
  v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(*(float *)&v25 * *(float *)&v25 + aP2a + v19)); /*0x5af5aa*/
  v8 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(aP2a + v19)); /*0x5af5b9*/
  if ( v23 == 0.0 ) /*0x5af5d0*/
  {
    v21 = 0.0; /*0x5af5ea*/
    aP2 = 1.0; /*0x5af5f2*/
  }
  else
  {
    v21 = *(float *)&v25 / v23; /*0x5af5da*/
    aP2 = v8 / v23; /*0x5af5e4*/
  }
  if ( v8 == 0.0 ) /*0x5af605*/
  {
    v20 = 0.0; /*0x5af621*/
    v24 = 1.0; /*0x5af629*/
  }
  else
  {
    v20 = v12 / v8; /*0x5af60d*/
    v24 = v14 / v8; /*0x5af617*/
  }
  *(_DWORD *)this = 1065353216; /*0x5af638*/
  *(_DWORD *)(this + 4) = 0; /*0x5af63a*/
  *(_DWORD *)(this + 8) = 0; /*0x5af63d*/
  *(_DWORD *)(this + 12) = 0; /*0x5af640*/
  *(_DWORD *)(this + 16) = 0; /*0x5af643*/
  *(_DWORD *)(this + 20) = 1065353216; /*0x5af646*/
  *(_DWORD *)(this + 24) = 0; /*0x5af649*/
  *(_DWORD *)(this + 28) = 0; /*0x5af64c*/
  *(_DWORD *)(this + 32) = 0; /*0x5af64f*/
  *(_DWORD *)(this + 36) = 0; /*0x5af652*/
  *(_DWORD *)(this + 40) = 1065353216; /*0x5af655*/
  *(_DWORD *)(this + 44) = 0; /*0x5af658*/
  v9 = *a2; /*0x5af65b*/
  *(float *)(this + 12) = *a2; /*0x5af669*/
  *(float *)(this + 28) = 0.0; /*0x5af677*/
  *(float *)(this + 44) = 0.0; /*0x5af67a*/
  v10 = v9 + 0.0; /*0x5af680*/
  v15 = a2[1]; /*0x5af684*/
  *(float *)(this + 12) = v10; /*0x5af68d*/
  v16 = v15 + *(float *)(this + 28); /*0x5af697*/
  *(float *)(this + 28) = v16; /*0x5af69b*/
  v13 = (float)0.0 + 0.0; /*0x5af6ae*/
  *(float *)(this + 44) = v13; /*0x5af6b2*/
  v22 = a2[2]; /*0x5af6be*/
  *(float *)(this + 12) = v10 + 0.0; /*0x5af6c4*/
  *(float *)(this + 28) = v16 + 0.0; /*0x5af6d1*/
  *(float *)(this + 44) = v13 + v22; /*0x5af6dc*/
  sub_5AF120((float *)this, v20, v24); /*0x5af6df*/
  aP1 = -v21; /*0x5af6f0*/
  sub_5AF000((float *)this, (ObjectClass *)LODWORD(aP1), (ObjectClass *)LODWORD(aP2)); /*0x5af6f5*/
  Matrix2D::Rotate((float *)this, a4); /*0x5af701*/
}


// ==== 0x005AF980  MultiplyMatrix3x4  this=-  sig=csp ====
float *__fastcall MultiplyMatrix3x4(ObjectClass *aP0, float *a1, float *a2)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  float v11; // esi
  float v12; // [esp+8h] [ebp-68h]
  float v13; // [esp+Ch] [ebp-64h]
  float v14; // [esp+10h] [ebp-60h]
  float v15; // [esp+14h] [ebp-5Ch]
  float v16; // [esp+18h] [ebp-58h]
  float v17; // [esp+1Ch] [ebp-54h]
  float v18; // [esp+20h] [ebp-50h]
  float v19; // [esp+24h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22; // [esp+30h] [ebp-40h]
  float v23; // [esp+34h] [ebp-3Ch]
  float v24; // [esp+3Ch] [ebp-34h]
  float v25[12]; // [esp+40h] [ebp-30h] BYREF
  float a2a; // [esp+74h] [ebp+4h]

  result = (float *)aP0; /*0x5af983*/
  v14 = a1[4]; /*0x5af98a*/
  v13 = a1[5]; /*0x5af991*/
  v4 = *a1; /*0x5af998*/
  v12 = a1[6]; /*0x5af99a*/
  v5 = a1[1]; /*0x5af9a1*/
  v6 = a1[2]; /*0x5af9a4*/
  v17 = a1[8]; /*0x5af9a7*/
  v16 = a1[9]; /*0x5af9ae*/
  v15 = a1[10]; /*0x5af9b5*/
  v8 = *a2; /*0x5af9bd*/
  v9 = a2[4]; /*0x5af9bf*/
  v10 = a2[8]; /*0x5af9c2*/
  v19 = a2[1]; /*0x5af9d0*/
  v22 = a2[2]; /*0x5af9dd*/
  v24 = a2[3]; /*0x5af9e4*/
  v18 = a2[5]; /*0x5af9ed*/
  v21 = a2[6]; /*0x5af9f4*/
  v11 = a2[7]; /*0x5af9f8*/
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  a2a = a2[9]; /*0x5afa12*/
  v20 = a2[10]; /*0x5afa1c*/
  v23 = a2[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = a2a * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = a2a * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = a2a * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a1[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a1[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a1[11]; /*0x5afb6e*/
  qmemcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}


// ==== 0x005AFB80  TransformMatrix3x4Point  this=AbstractClass  sig=csp ====
float *__fastcall TransformMatrix3x4Point(AbstractClass *aP0, IUnknown *aP1, IUnknown *aP2)
{
  double v4; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = *(float *)&aP1->field_8 * *(float *)&aP2->field_8 /*0x5afba1*/
     + *(float *)&aP1->field_4 * *(float *)&aP2->field_4
     + *(float *)&aP1->field_0 * *(float *)&aP2->field_0
     + *(float *)&aP1->field_C;
  v6 = *(float *)aP1->__pad_10 * *(float *)&aP2->field_0 /*0x5afbbd*/
     + *(float *)&aP1->__pad_10[8] * *(float *)&aP2->field_8
     + *(float *)&aP1->__pad_10[4] * *(float *)&aP2->field_4
     + *(float *)&aP1->field_1C;
  v4 = *(float *)&aP1->field_20 * *(float *)&aP2->field_0 /*0x5afbd7*/
     + *(float *)aP1->__pad_28 * *(float *)&aP2->field_8
     + *(float *)&aP1->field_24 * *(float *)&aP2->field_4
     + *(float *)&aP1->__pad_28[4];
  *(float *)aP0->__pad_0 = v5; /*0x5afbde*/
  v7 = v4; /*0x5afbe4*/
  *(float *)&aP0->__pad_0[4] = v6; /*0x5afbe8*/
  *(float *)&aP0->__pad_0[8] = v7; /*0x5afbef*/
  return (float *)aP0->__pad_0; /*0x5afbf2*/
}


// ==== 0x005AFC20  InvertMatrix3x3Signs  this=-  sig=csp ====
float *__fastcall Matrix3x3_InvertSigns(float *a1, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  float v7[12]; // [esp+8h] [ebp-30h] BYREF

  v7[0] = *a2; /*0x5afc29*/
  v3 = v7[0] * a2[3]; /*0x5afc34*/
  v7[1] = a2[4]; /*0x5afc37*/
  v7[2] = a2[8]; /*0x5afc3e*/
  v4 = v7[2] * a2[11]; /*0x5afc49*/
  v7[4] = a2[1]; /*0x5afc4c*/
  v7[5] = a2[5]; /*0x5afc53*/
  v5 = v3 + v4; /*0x5afc5a*/
  v6 = v7[1] * a2[7]; /*0x5afc60*/
  v7[6] = a2[9]; /*0x5afc63*/
  v7[8] = a2[2]; /*0x5afc6a*/
  v7[9] = a2[6]; /*0x5afc73*/
  v7[10] = a2[10]; /*0x5afc7a*/
  v7[3] = -(v5 + v6); /*0x5afc85*/
  v7[7] = -(v7[4] * a2[3] + v7[6] * a2[11] + v7[5] * a2[7]); /*0x5afcaa*/
  v7[11] = -(v7[8] * a2[3] + v7[10] * a2[11] + v7[9] * a2[7]); /*0x5afcc9*/
  qmemcpy(a1, v7, 0x30u); /*0x5afccd*/
  return a1; /*0x5afccf*/
}


// ==== 0x005AFCE0  sub_5AFCE0  this=-  sig=ida-proto ====
void sub_5AFCE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5afcec*/
  dbl_ABEDF8 = Math::Sqrt(v0 + v0); /*0x5afcfe*/
}


// ==== 0x005AFD10  sub_5AFD10  this=-  sig=ida-proto ====
void sub_5AFD10()
{
  MEMORY[0xABEE48] = dbl_ABEDF8 / 60.0; /*0x5afd1c*/
}


// ==== 0x005AFD30  sub_5AFD30  this=-  sig=ida-proto ====
void sub_5AFD30()
{
  MEMORY[0xABEE30] = 1.0 / MEMORY[0xABEE48]; /*0x5afd3c*/
}


// ==== 0x005AFD50  sub_5AFD50  this=-  sig=ida-proto ====
void sub_5AFD50()
{
  MEMORY[0xABEE28] = 0.0174532925199433 * 45.0; /*0x5afd5c*/
}


// ==== 0x005AFD70  sub_5AFD70  this=-  sig=ida-proto ====
void sub_5AFD70()
{
  dbl_ABEE00 = 0.0174532925199433 * 60.0; /*0x5afd7c*/
}


// ==== 0x005AFD90  sub_5AFD90  this=-  sig=ida-proto ====
void sub_5AFD90()
{
  dbl_ABEDD8 = 0.0174532925199433 * 90.0; /*0x5afd9c*/
}


// ==== 0x005AFDB0  sub_5AFDB0  this=-  sig=ida-proto ====
__int64 sub_5AFDB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEDD8 - dbl_ABEE00); /*0x5afdc2*/
  result = Math::RoundToInt(v0 * dbl_ABEDF8 * 0.5); /*0x5afdd6*/
  MEMORY[0xABEE50] = result; /*0x5afddb*/
  return result; /*0x5afde0*/
}


// ==== 0x005AFDF0  sub_5AFDF0  this=-  sig=ida-proto ====
void sub_5AFDF0()
{
  dbl_ABEE08 = Math::ArcTan((double)MEMORY[0xABEE50] * 0.00390625); /*0x5afe07*/
}


// ==== 0x005AFE20  sub_5AFE20  this=-  sig=ida-proto ====
void sub_5AFE20()
{
  MEMORY[0xABEE20] = Math::ArcTan((double)(2 * MEMORY[0xABEE50]) / dbl_ABEDF8); /*0x5afe42*/
}


// ==== 0x005AFE50  sub_5AFE50  this=-  sig=ida-proto ====
__int64 sub_5AFE50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEE50]) + 0.5); /*0x5afe6b*/
  MEMORY[0xABEE44] = result; /*0x5afe70*/
  return result; /*0x5afe76*/
}


// ==== 0x005AFE80  sub_5AFE80  this=-  sig=ida-proto ====
int sub_5AFE80()
{
  word_ABEDF0 = 0; /*0x5afe82*/
  word_ABEDF2 = 0; /*0x5afe88*/
  return 0; /*0x5afe8e*/
}


// ==== 0x005AFE90  sub_5AFE90  this=-  sig=ida-proto ====
int sub_5AFE90()
{
  g_MatrixTransformState = 0; /*0x5afe92*/
  MEMORY[0xABEE14] = 0; /*0x5afe97*/
  MEMORY[0xABEE18] = 0; /*0x5afe9c*/
  return 0; /*0x5afea1*/
}


// ==== 0x005AFEB0  sub_5AFEB0  this=-  sig=ida-proto ====
int sub_5AFEB0()
{
  MEMORY[0xABEE40] = 0; /*0x5afeb5*/
  MEMORY[0xABEE38] = 128; /*0x5afebf*/
  MEMORY[0xABEE3C] = 128; /*0x5afec4*/
  return 128; /*0x5afec9*/
}


// ==== 0x005AFED0  sub_5AFED0  this=-  sig=ida-proto ====
int sub_5AFED0()
{
  dword_ABEDE0 = 0; /*0x5afed2*/
  dword_ABEDE4 = 0; /*0x5afed7*/
  dword_ABEDE8 = 0; /*0x5afedc*/
  dword_ABEDEC = 0; /*0x5afee1*/
  return 0; /*0x5afee6*/
}


// ==== 0x005AFEF0  MechLocomotionClass::SmallFunc_5AFEF0  this=MechLocomotionClass  sig=csp ====
int __thiscall sub_5AFEF0(int this)
{
  int v2; // eax

  LocomotionClass::Init((_DWORD *)this); /*0x5afef3*/
  *(_DWORD *)(this + 24) = g_MatrixTransformState; /*0x5aff01*/
  *(_DWORD *)(this + 28) = MEMORY[0xABEE14]; /*0x5aff0a*/
  *(_DWORD *)(this + 32) = MEMORY[0xABEE18]; /*0x5aff16*/
  *(_DWORD *)(this + 36) = g_MatrixTransformState; /*0x5aff1e*/
  *(_DWORD *)(this + 40) = MEMORY[0xABEE14]; /*0x5aff26*/
  v2 = MEMORY[0xABEE18]; /*0x5aff29*/
  *(_BYTE *)(this + 48) = 0; /*0x5aff2e*/
  *(_DWORD *)this = &MechLocomotionClass::`vftable'; /*0x5aff32*/
  *(_DWORD *)(this + 44) = v2; /*0x5aff38*/
  *(_DWORD *)(this + 4) = &vt_MechLocomotionClass; /*0x5aff3b*/
  return this; /*0x5aff44*/
}


// ==== 0x005AFF50  MechLocomotionClass::method_5AFF50  this=MechLocomotionClass  sig=csp ====
void __thiscall sub_5AFF50(_DWORD *this)
{
  *this = &MechLocomotionClass::`vftable'; /*0x5aff50*/
  this->Powered = &vt_MechLocomotionClass; /*0x5aff56*/
  LocomotionClass::Construct(this); /*0x5aff5d*/
}


// ==== 0x005AFF70  JumpjetLocomotionClass::SmallStub_5AFF70  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_5AFF70(int a1)
{
  return *(_BYTE *)(a1 + 44); /*0x5aff77*/
}


// ==== 0x005AFF80  JumpjetLocomotionClass::GetMovementCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_5AFF80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x5aff89*/
  {
    result = a2; /*0x5aff90*/
    v3 = a1[6]; /*0x5aff97*/
    v4 = a1[7]; /*0x5aff9a*/
    v5 = a2; /*0x5aff9d*/
    *a2 = a1[5]; /*0x5aff9f*/
  }
  else
  {
    result = a2; /*0x5affac*/
    v3 = MEMORY[0xABEE14]; /*0x5affb6*/
    v4 = MEMORY[0xABEE18]; /*0x5affbc*/
    v5 = a2; /*0x5affc2*/
    *a2 = g_MatrixTransformState; /*0x5affc4*/
  }
  v5[1] = v3; /*0x5affa1*/
  v5[2] = v4; /*0x5affa4*/
  return result; /*0x5affa7*/
}


// ==== 0x005AFFE0  JumpjetLocomotionClass::GetRenderCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_5AFFE0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( a1[8] == g_MatrixTransformState && a1[9] == MEMORY[0xABEE14] && a1[10] == MEMORY[0xABEE18] ) /*0x5b000b*/
  {
    v5 = a1[2]; /*0x5b002b*/
    v6 = v5 + 156; /*0x5b0034*/
    v7 = *(_DWORD *)(v5 + 156); /*0x5b0036*/
    v8 = *(_DWORD *)(v5 + 160); /*0x5b0038*/
    v9 = *(_DWORD *)(v6 + 8); /*0x5b003b*/
    *a2 = v7; /*0x5b0044*/
    a2[1] = v8; /*0x5b0046*/
    a2[2] = v9; /*0x5b0049*/
    return a2; /*0x5b003e*/
  }
  else
  {
    v2 = a1[9]; /*0x5b0014*/
    v3 = a1[10]; /*0x5b0017*/
    *a2 = a1[8]; /*0x5b001c*/
    a2[1] = v2; /*0x5b001e*/
    a2[2] = v3; /*0x5b0021*/
    return a2; /*0x5b0024*/
  }
}

