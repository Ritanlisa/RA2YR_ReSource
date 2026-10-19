// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005A0090  MapClass::SetObstruction  this=MapClass  sig=csp ====
int __stdcall MapClass_SetObstruction(__int16 *a1, int a2)
{
  int result; // eax

  if ( dword_ABED10 ) /*0x5a0098*/
  {
    result = 80 * (*a1 + g_MapCellWidth * a1[1]); /*0x5a00b5*/
    *(_DWORD *)((char *)dword_ABED10 + result + 56) = a2; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}



// ==== 0x005A00C0  MapClass::GetTileDataField14  this=MapClass  sig=csp ====
int __stdcall MapClass::GetTileDataField14(__int16 *a1)
{
  if ( dword_ABED10 ) /*0x5a00c8*/
    return *((_DWORD *)dword_ABED10 + 20 * *a1 + 20 * g_MapCellWidth * a1[1] + 14); /*0x5a00ea*/
  else
    return -1; /*0x5a00ca*/
}



// ==== 0x005A0160  TiberiumClass::Spread  this=TiberiumClass  sig=csp ====
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
      *v9 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a01a0*/
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
          if ( v16 > dword_ABED04 /*0x5a0285*/
            && v14 - v15 < dword_ABED04
            && v15 - v14 < dword_ABED04
            && v16 <= dword_ABED08
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)dword_ABED10 + 80 * v14 + 80 * g_MapCellWidth * v15; /*0x5a02a4*/
            v18 = *((_DWORD *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30); /*0x5a02c6*/
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
                *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
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



// ==== 0x005A0410  MapClass::GrowLayer  this=MapClass  sig=csp ====
char __thiscall MapClass::GrowLayer(MapClass *this, int a2, int a3, int a4)
{
  MapClass *v4; // ebx
  int v5; // esi
  VectorClass *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  VectorClass *v11; // eax
  VectorClass *v12; // esi
  VectorClass *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int Capacity; // ecx
  int v24; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  int m; // eax
  VectorClass *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  __int16 v31[2]; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  MapClass *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (VectorClass *)RandomMap::CellListAlloc((RandomMap *)this, a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a044e*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v35 = *(_DWORD *)(i + 36); /*0x5a0453*/
      *(_DWORD *)(80 * ((__int16)v35 + g_MapCellWidth * SHIWORD(v35)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = (int)v6[1].vtable0 - 1; j >= 0; v10[283] = v4->__pad_30C[0] ) /*0x5a0499*/
      {
        v9 = *((_DWORD *)v6->Items + j); /*0x5a04a6*/
        *(_DWORD *)v31 = v9; /*0x5a04a9*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a04ad*/
          *(_DWORD *)(80 * ((__int16)v9 + g_MapCellWidth * v31[1]) + g_MissionQueueFrame.localVariables[163] + 56) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x5a04d8*/
        *((_DWORD *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          v12->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a0520*/
          v12[1].Items = (void *)10; /*0x5a0526*/
          v12[1].vtable0 = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[1].Items = v6[1].vtable0; /*0x5a0539*/
        v14 = (int)v6[1].vtable0 - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
          v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a054a*/
          do /*0x5a0650*/
          {
            v16 = *((_DWORD *)v6->Items + v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = HIWORD(v32) + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a057b*/
              LOWORD(v33) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a0580*/
              HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (__int16)v33; /*0x5a0590*/
              if ( v21 > v15 /*0x5a05b9*/
                && (__int16)v33 - v20 < v15
                && v20 - (__int16)v33 < v15
                && v21 <= g_MissionQueueFrame.localVariables[161] )
              {
                v22 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v33 + g_MapCellWidth * v20); /*0x5a05d4*/
                if ( *(_DWORD *)(v22 + 56) == a2 ) /*0x5a05d9*/
                {
                  if ( *(_DWORD *)(v22 + 60) != v30 + 1 ) /*0x5a05e7*/
                  {
                    Capacity = v13->Capacity; /*0x5a05e9*/
                    if ( (int)v13[1].vtable0 < Capacity /*0x5a060e*/
                      || (v13->IsAllocated || !Capacity)
                      && (v24 = (int)v13[1].Items, v24 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v13->vtable0 + 2))(
                           v13,
                           Capacity + v24,
                           0) )
                    {
                      vtable0 = v13[1].vtable0; /*0x5a0615*/
                      Items = v13->Items; /*0x5a0618*/
                      v13[1].vtable0 = (char *)vtable0 + 1; /*0x5a061e*/
                      Items[(_DWORD)vtable0] = v33; /*0x5a0625*/
                    }
                    *(_DWORD *)(v22 + 60) = v30 + 1; /*0x5a0628*/
                    v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a062b*/
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
          (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0663*/
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
    (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a06ae*/
          m;
          m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      *(_DWORD *)(80 * ((__int16)*(_DWORD *)(m + 36) + g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(m + 36))) /*0x5a06d8*/
                + g_MissionQueueFrame.localVariables[163]
                + 60) = 0;
    }
  }
  return 1; /*0x5a06e5*/
}



// ==== 0x005A0700  RandomMap::CellListAlloc  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::CellListAlloc(RandomMap *this, int a2)
{
  VectorClass *v3; // eax
  VectorClass *v4; // ebx
  int v5; // ecx
  int v6; // ebp
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
  int Capacity; // ecx
  int Items; // eax
  void *vtable0; // eax
  _DWORD *v20; // edx
  bool v21; // zf
  VectorClass *v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-4h]

  v3 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a070a*/
  v4 = v3; /*0x5a070f*/
  if ( v3 ) /*0x5a0718*/
  {
    VectorClass::CellConstructor(v3, 0, 0); /*0x5a071e*/
    v4->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a0723*/
    v4[1].Items = (void *)10; /*0x5a0729*/
    v4[1].vtable0 = 0; /*0x5a0730*/
  }
  else
  {
    v4 = 0; /*0x5a0735*/
  }
  v23 = v4; /*0x5a073d*/
  v4[1].Items = (void *)(*(_DWORD *)&this->__pad_4C[308] * *(_DWORD *)&this->__pad_4C[312]); /*0x5a0748*/
  v5 = g_MapCellWidth; /*0x5a074b*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x5a0758*/
    return &v4->vtable0; /*0x5a08c1*/
  v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a075f*/
  v24 = 0; /*0x5a0765*/
  v25 = g_MapCellWidth * g_MapCellWidth; /*0x5a0769*/
  while ( 2 )
  {
    v7 = *(_DWORD *)(v24 + v6); /*0x5a0775*/
    v8 = HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    v9 = v6 ? *(_DWORD *)(80 * ((__int16)v7 + v5 * SHIWORD(v7)) + v6 + 56) : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      v11 = v10 & 7; /*0x5a07c9*/
      v12 = LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]) + v7; /*0x5a07cc*/
      LOWORD(v11) = v8 + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (__int16)v11; /*0x5a07e5*/
      v15 = v13 + (__int16)v11; /*0x5a07e8*/
      if ( v15 <= g_MissionQueueFrame.localVariables[160] ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MissionQueueFrame.localVariables[160] /*0x5a080f*/
        && v14 - v13 < g_MissionQueueFrame.localVariables[160]
        && v15 <= g_MissionQueueFrame.localVariables[161] )
      {
        break; /*0x5a080f*/
      }
      v4 = v23; /*0x5a0849*/
      v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a084d*/
LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0811*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a0819*/
      v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    Capacity = v23->Capacity; /*0x5a0859*/
    if ( (int)v23[1].vtable0 < Capacity ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( v23->IsAllocated || !Capacity ) /*0x5a086c*/
    {
      Items = (int)v23[1].Items; /*0x5a086e*/
      if ( Items > 0 ) /*0x5a0873*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v23->vtable0 + 2))( /*0x5a087e*/
               v23,
               Capacity + Items,
               0) )
        {
LABEL_31:
          vtable0 = v23[1].vtable0; /*0x5a0885*/
          v20 = v23->Items; /*0x5a0888*/
          v23[1].vtable0 = (char *)vtable0 + 1; /*0x5a088e*/
          v20[(_DWORD)vtable0] = v7; /*0x5a0891*/
        }
        v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0894*/
      }
    }
LABEL_33:
    v21 = v25 == 1; /*0x5a089a*/
    v24 += 80; /*0x5a08a6*/
    --v25; /*0x5a08aa*/
    if ( !v21 ) /*0x5a08ae*/
    {
      v5 = g_MapCellWidth; /*0x5a076f*/
      continue; /*0x5a076f*/
    }
    return &v4->vtable0; /*0x5a08b5*/
  }
}



// ==== 0x005A08D0  RandomMap::SpreadArea  this=RandomMap  sig=csp ====
char __thiscall RandomMap::SpreadArea(RandomMap *this, int a2, float a3, int *a4, __int16 *a5, char a6)
{
  double v6; // st7
  int v8; // eax
  int v9; // esi
  void *v10; // eax
  Heap *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int i; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  RandomMap *v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  RandomMap *v25; // ebx
  int v26; // ecx
  RandomMap *v30; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  Heap v34; // edi
  Heap v37; // ecx
  int v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // eax
  __int16 *v42; // ecx
  Heap v43; // eax
  CellStruct *v44; // edi
  int v45; // edi
  Cell *v46; // eax
  char v47; // al
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  Cell *v52; // eax
  RandomMap *v53; // ebx
  __int16 v54; // ax
  RandomMap *v55; // edi
  int v56; // ecx
  int v60; // eax
  int v61; // edx
  RandomMap *v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // edi
  unsigned int v66; // edx
  Heap v67; // edi
  Heap v70; // ecx
  int v71; // eax
  Heap v72; // ecx
  bool v73; // zf
  Heap v74; // eax
  CellStruct *v75; // edi
  Heap v76; // eax
  __int16 *v77; // edi
  __int16 *v78; // ecx
  int v79; // eax
  int v80; // ecx
  int *v81; // eax
  Heap v82; // eax
  __int16 *v83; // edi
  double v85; // [esp+4h] [ebp-60h]
  double v86; // [esp+4h] [ebp-60h]
  char v87; // [esp+1Bh] [ebp-49h]
  CellStruct *v88; // [esp+1Ch] [ebp-48h]
  CellStruct *v89; // [esp+1Ch] [ebp-48h]
  __int16 v90[2]; // [esp+20h] [ebp-44h] BYREF
  int v91; // [esp+24h] [ebp-40h]
  int v92; // [esp+28h] [ebp-3Ch]
  void *Block; // [esp+2Ch] [ebp-38h]
  int v94; // [esp+30h] [ebp-34h]
  RandomMap *p_RandomMap_field_0x8; // [esp+34h] [ebp-30h]
  int v96; // [esp+38h] [ebp-2Ch]
  double v97; // [esp+3Ch] [ebp-28h]
  __int64 v98; // [esp+44h] [ebp-20h]
  double v99; // [esp+4Ch] [ebp-18h] BYREF
  double v100; // [esp+54h] [ebp-10h]
  double v101; // [esp+5Ch] [ebp-8h]

  v8 = *(_DWORD *)&this->__pad_4C[308]; /*0x5a08de*/
  p_RandomMap_field_0x8 = this; /*0x5a08e4*/
  v9 = 2 * *(_DWORD *)&this->__pad_4C[312] * v8; /*0x5a08f4*/
  if ( v9 <= 100 ) /*0x5a08f6*/
    v9 = 100; /*0x5a08f8*/
  v10 = (void *)__2_YAPAXI_Z(8 * v9); /*0x5a0905*/
  if ( v10 ) /*0x5a0911*/
  {
    Block = v10; /*0x5a0914*/
    LODWORD(v98) = v9 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v11 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a0929*/
  if ( v11 ) /*0x5a0930*/
  {
    v12 = 2 * *(_DWORD *)&this->__pad_4C[312] * *(_DWORD *)&this->__pad_4C[308]; /*0x5a093f*/
    if ( v12 <= 100 ) /*0x5a0944*/
      v12 = 100; /*0x5a0946*/
    v11[3] = 0; /*0x5a0952*/
    v11[4] = (Heap)-1; /*0x5a0956*/
    *v11 = 0; /*0x5a095d*/
    v11[1] = (Heap)v12; /*0x5a095f*/
    v13 = __2_YAPAXI_Z(4 * v12 + 4); /*0x5a0962*/
    v14 = (int)v11[1]; /*0x5a0967*/
    v11[2] = (Heap)v13; /*0x5a096a*/
    v15 = 0; /*0x5a0970*/
    if ( v14 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v15; /*0x5a0979*/
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v15 - 4) = 0; /*0x5a097a*/
      }
      while ( v15 <= *(_DWORD *)&v11[1] ); /*0x5a0983*/
    }
  }
  else
  {
    v11 = 0; /*0x5a0987*/
  }
  v16 = a4; /*0x5a0989*/
  v91 = 0; /*0x5a098c*/
  v87 = 1; /*0x5a0990*/
  v100 = 0.0; /*0x5a0995*/
  if ( *a4 ) /*0x5a099d*/
  {
    v100 = 0.0; /*0x5a09b0*/
  }
  else if ( a4[2] != 512 ) /*0x5a09c5*/
  {
    v100 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( a4[1] ) /*0x5a09d7*/
  {
    v100 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( a4[3] != 512 ) /*0x5a09f1*/
  {
    v100 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a19*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v96 = *(_DWORD *)(i + 36); /*0x5a0a1e*/
    *(_DWORD *)(80 * ((__int16)v96 + g_MapCellWidth * SHIWORD(v96)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0a43*/
  }
  v18 = RandomMap::CellListAlloc(p_RandomMap_field_0x8, a2); /*0x5a0a58*/
  v19 = v18[4]; /*0x5a0a5d*/
  *(_DWORD *)v90 = v18; /*0x5a0a60*/
  v88 = (CellStruct *)v19; /*0x5a0a66*/
  v92 = 0; /*0x5a0a6a*/
  if ( v19 > 0 ) /*0x5a0a6e*/
  {
    v20 = (RandomMap *)Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v21 = *v16; /*0x5a0a83*/
      v94 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v90 + 4) + 4 * v92); /*0x5a0a88*/
      v22 = SHIWORD(v94); /*0x5a0a8c*/
      v23 = (__int16)v94; /*0x5a0a91*/
      if ( (__int16)v94 >= v21 ) /*0x5a0a96*/
      {
        if ( (__int16)v94 >= v21 + v16[2] ) /*0x5a0aa3*/
          goto LABEL_48; /*0x5a0aa3*/
        v16 = a4; /*0x5a0aa9*/
        v24 = a4[1]; /*0x5a0aac*/
        if ( SHIWORD(v94) >= v24 ) /*0x5a0ab1*/
          break; /*0x5a0ab1*/
      }
LABEL_49:
      if ( ++v92 >= (int)v88 ) /*0x5a0c28*/
      {
        v18 = *(_DWORD **)v90; /*0x5a0c2e*/
        goto LABEL_51; /*0x5a0c2e*/
      }
    }
    if ( SHIWORD(v94) < v24 + a4[3] ) /*0x5a0abe*/
    {
      *(_DWORD *)v20->__pad_0 = v94; /*0x5a0ac8*/
      v25 = (RandomMap *)(v23 - *a5); /*0x5a0ad2*/
      v26 = v22 - a5[1]; /*0x5a0ad8*/
      p_RandomMap_field_0x8 = v25; /*0x5a0ada*/
      v96 = v26; /*0x5a0ae0*/
      if ( v25 ) /*0x5a0ae4*/
      {
        __asm { fild dword ptr [esp+58h+var_2C] } /*0x5a0aea*/
        __asm
        {
          fidiv [esp+60h+var_30]
          fchs
          fstp [esp+60h+var_60]; double
        }
        Math::ArcTan(v85); /*0x5a0afa*/
        if ( (int)v25 < 0 ) /*0x5a0b04*/
          __asm { fadd ds:dbl_7E44D0 } /*0x5a0b06*/
      }
      else
      {
        __asm { fld ds:dbl_7E2820 } /*0x5a0be9*/
      }
      __asm /*0x5a0b0c*/
      {
        fsub [esp+58h+var_10]
        fabs
        fcom ds:dbl_7E3CC0
        fst qword ptr [esp+58h+var_18]
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x5a0b21*/
      {
        do /*0x5a0b34*/
        {
          __asm /*0x5a0b23*/
          {
            fsub ds:dbl_7E3CC0
            fcom ds:dbl_7E3CC0
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) == 0 ); /*0x5a0b34*/
        __asm { fst qword ptr [esp+58h+var_18] } /*0x5a0b36*/
      }
      __asm /*0x5a0b3a*/
      {
        fcom ds:dbl_7E44D0
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a0b45*/
      {
        __asm /*0x5a0b47*/
        {
          fld ds:dbl_7E3CC0
          fsub st, st(1)
          fstp qword ptr [esp+58h+var_18]
        }
      }
      __asm { fstp st } /*0x5a0b58*/
      v98 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0b5f*/
      __asm { fild [esp+58h+var_20] } /*0x5a0b6b*/
      v30 = v20; /*0x5a0b73*/
      v20 = (RandomMap *)((char *)v20 + 8); /*0x5a0b76*/
      __asm /*0x5a0b79*/
      {
        fmul ds:dbl_7ED898
        fld qword ptr [esp+58h+var_18]
        fmul ds:dbl_7ED798
        fxch st(1)
        fmul ds:dbl_7ED790
      }
      ++v91; /*0x5a0b91*/
      v96 = (int)v30; /*0x5a0b95*/
      p_RandomMap_field_0x8 = v20; /*0x5a0b99*/
      __asm /*0x5a0b9d*/
      {
        faddp st(1), st
        fstp dword ptr [edi-4]
      }
      *(float *)&v20[-1].RandomMap_field_0x20C = _ET1; /*0x5a0b9f*/
      v32 = *(_DWORD *)v11 + 1; /*0x5a0ba7*/
      LODWORD(v97) = *(_DWORD *)&v30->RandomMap_field_0x2[2]; /*0x5a0ba8*/
      v33 = v32 >> 1; /*0x5a0bb1*/
      if ( v32 < *(_DWORD *)&v11[1] ) /*0x5a0bb5*/
      {
        if ( v32 <= 1 ) /*0x5a0bba*/
        {
          v16 = a4; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            v34 = v11[2]; /*0x5a0bbc*/
            _EBX = *(_DWORD *)(*(_DWORD *)&v34 + 4 * v33); /*0x5a0bbf*/
            __asm /*0x5a0bc2*/
            {
              fld dword ptr [ebx+4]
              fcomp dword ptr [esp+58h+var_2C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(_DWORD *)(*(_DWORD *)&v34 + 4 * v32) = _EBX; /*0x5a0bd0*/
            v32 = v33; /*0x5a0bd3*/
            v33 >>= 1; /*0x5a0bd5*/
          }
          while ( v32 > 1 ); /*0x5a0bda*/
          v16 = a4; /*0x5a0bdc*/
          v30 = (RandomMap *)v96; /*0x5a0bdf*/
          v20 = p_RandomMap_field_0x8; /*0x5a0be3*/
        }
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v32) = v30; /*0x5a0bfa*/
        v37 = v11[3]; /*0x5a0bff*/
        ++*(_DWORD *)v11; /*0x5a0c05*/
        if ( (unsigned int)v30 > *(_DWORD *)&v37 ) /*0x5a0c07*/
          v11[3] = (Heap)v30; /*0x5a0c09*/
        if ( (unsigned int)v30 < *(_DWORD *)&v11[4] ) /*0x5a0c0f*/
          v11[4] = (Heap)v30; /*0x5a0c11*/
        goto LABEL_49; /*0x5a0c14*/
      }
    }
LABEL_48:
    v16 = a4; /*0x5a0c16*/
    goto LABEL_49; /*0x5a0c16*/
  }
LABEL_51:
  if ( v18 ) /*0x5a0c36*/
    (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5a0c3e*/
  __asm /*0x5a0c40*/
  {
    fldln2
    fild [esp+58h+var_48]
    fyl2x
    fld ds:dbl_7E1718
    fcomp st(1)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x5a0c55*/
  {
    __asm /*0x5a0c57*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm /*0x5a0c5f*/
  {
    fdivr ds:dbl_7E1718
    fmul [ebp+arg_4]
    fdivr ds:flt_7E2AC8
    fmul ds:flt_7E5168
  }
  LOWORD(v39) = Math::RoundToInt(v6); /*0x5a0c74*/
  v92 = v39; /*0x5a0c79*/
  v40 = v39 / 2; /*0x5a0c82*/
  *(_QWORD *)&v99 = (unsigned int)(v39 / 2 + 1); /*0x5a0c8d*/
  __asm /*0x5a0c91*/
  {
    fild qword ptr [esp+58h+var_18]
    fstp [esp+58h+var_8]
  }
  do /*0x5a0cc0*/
  {
    *(_QWORD *)&v99 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0ca3*/
    __asm /*0x5a0cab*/
    {
      fild qword ptr [esp+58h+var_18]
      fmul [esp+58h+var_8]
      fmul ds:dbl_7ED898
    }
    LOWORD(v41) = Math::RoundToInt(v6); /*0x5a0cb9*/
  }
  while ( v41 > v40 ); /*0x5a0cc0*/
  v92 += v41; /*0x5a0cc8*/
  if ( *v11 ) /*0x5a0ccc*/
  {
    v43 = v11[2]; /*0x5a0cda*/
    v44 = *(CellStruct **)(*(_DWORD *)&v43 + 4); /*0x5a0ce2*/
    *(_DWORD *)(*(_DWORD *)&v43 + 4) = *(_DWORD *)(*(_DWORD *)&v43 + 4 * *(_DWORD *)v11); /*0x5a0ce5*/
    *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a0ced*/
    Heap::SiftDown(v11, 1); /*0x5a0cf7*/
    v89 = v44; /*0x5a0cfc*/
    v42 = (__int16 *)v44; /*0x5a0d00*/
  }
  else
  {
    v42 = 0; /*0x5a0cd2*/
    v89 = 0; /*0x5a0cd4*/
  }
  v94 = 0; /*0x5a0d06*/
  if ( v92 <= 0 ) /*0x5a0d0c*/
    goto LABEL_113; /*0x5a0d0c*/
  while ( v87 && v42 ) /*0x5a0d26*/
  {
    v45 = g_MissionQueueFrame.localVariables[163] + 80 * (*v42 + g_MapCellWidth * v42[1]); /*0x5a0d48*/
    if ( !*(_DWORD *)(v45 + 56) ) /*0x5a0d4a*/
    {
      v46 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x5a0d57*/
      if ( (unsigned __int8)Cell::IsEmpty(v46) ) /*0x5a0d5e*/
      {
        *(_BYTE *)(v45 + 75) = 1; /*0x5a0d6a*/
        *(_DWORD *)(v45 + 56) = a2; /*0x5a0d6e*/
      }
      v42 = (__int16 *)v89; /*0x5a0d71*/
    }
    v47 = 0; /*0x5a0d7d*/
    v96 = 0; /*0x5a0d82*/
    p_RandomMap_field_0x8 = (RandomMap *)((char *)Block + 8 * v91); /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      LODWORD(v97) = *CellStruct::Add((CellStruct *)v42, &v99, (_WORD *)(4 * (v47 & 7) + 9041544)); /*0x5a0dad*/
      *(_DWORD *)v90 = LODWORD(v97); /*0x5a0db1*/
      v48 = SWORD1(v97) + SLOWORD(v97); /*0x5a0dbd*/
      if ( v48 <= g_MissionQueueFrame.localVariables[160] /*0x5a0de6*/
        || SLOWORD(v97) - SWORD1(v97) >= g_MissionQueueFrame.localVariables[160]
        || SWORD1(v97) - SLOWORD(v97) >= g_MissionQueueFrame.localVariables[160]
        || v48 > g_MissionQueueFrame.localVariables[161] )
      {
        goto LABEL_108; /*0x5a0de6*/
      }
      v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0dec*/
      if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5a0df4*/
        goto LABEL_105; /*0x5a0df4*/
      v50 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v97) + g_MapCellWidth * SWORD1(v97)); /*0x5a0e0b*/
      if ( !*(_DWORD *)(v50 + 56) && *(_DWORD *)(v50 + 60) != a2 && SLOWORD(v97) >= *a4 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v97) < *a4 + a4[2] ) /*0x5a0e3a*/
        {
          v51 = a4[1]; /*0x5a0e40*/
          if ( SWORD1(v97) >= v51 && SWORD1(v97) < v51 + a4[3] ) /*0x5a0e52*/
          {
            v52 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v90); /*0x5a0e62*/
            if ( (unsigned __int8)Cell::IsEmpty(v52) ) /*0x5a0e69*/
            {
              v53 = p_RandomMap_field_0x8; /*0x5a0e76*/
              v54 = v90[0]; /*0x5a0e7a*/
              *(_DWORD *)p_RandomMap_field_0x8->__pad_0 = *(_DWORD *)v90; /*0x5a0e81*/
              v56 = v90[1] - a5[1]; /*0x5a0e94*/
              p_RandomMap_field_0x8 = (RandomMap *)(v54 - *a5); /*0x5a0e98*/
              v55 = p_RandomMap_field_0x8; /*0x5a0e92*/
              LODWORD(v97) = v56; /*0x5a0e9c*/
              if ( p_RandomMap_field_0x8 ) /*0x5a0ea0*/
              {
                __asm { fild dword ptr [esp+58h+var_2C+4] } /*0x5a0ea6*/
                __asm
                {
                  fidiv [esp+60h+var_30]
                  fchs
                  fstp [esp+60h+var_60]; double
                }
                Math::ArcTan(v86); /*0x5a0eb6*/
                if ( (int)v55 < 0 ) /*0x5a0ec0*/
                  __asm { fadd ds:dbl_7E44D0 } /*0x5a0ec2*/
              }
              else
              {
                __asm { fld ds:dbl_7E2820 } /*0x5a0fe5*/
              }
              __asm /*0x5a0ec8*/
              {
                fsub [esp+58h+var_10]
                fabs
                fcom ds:dbl_7E3CC0
                fst [esp+58h+var_2C+4]
                fnstsw ax
              }
              if ( (_AX & 0x100) == 0 ) /*0x5a0edd*/
              {
                do /*0x5a0ef0*/
                {
                  __asm /*0x5a0edf*/
                  {
                    fsub ds:dbl_7E3CC0
                    fcom ds:dbl_7E3CC0
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x100) == 0 ); /*0x5a0ef0*/
                __asm { fst [esp+58h+var_2C+4] } /*0x5a0ef2*/
              }
              __asm /*0x5a0ef6*/
              {
                fcom ds:dbl_7E44D0
                fnstsw ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x5a0f01*/
              {
                __asm /*0x5a0f03*/
                {
                  fld ds:dbl_7E3CC0
                  fsub st, st(1)
                  fstp [esp+58h+var_2C+4]
                }
              }
              __asm { fstp st } /*0x5a0f14*/
              *(_QWORD *)&v101 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0f1b*/
              __asm { fild [esp+58h+var_8] } /*0x5a0f27*/
              v60 = v90[1]; /*0x5a0f2b*/
              __asm /*0x5a0f30*/
              {
                fmul ds:dbl_7ED898
                fld [esp+58h+var_2C+4]
                fmul ds:dbl_7ED798
                fxch st(1)
                fmul ds:dbl_7ED790
              }
              v61 = v90[0]; /*0x5a0f48*/
              __asm /*0x5a0f4d*/
              {
                faddp st(1), st
                fstp dword ptr [ebx+4]
              }
              *(float *)&v53->RandomMap_field_0x2[2] = _ET1; /*0x5a0f4f*/
              *(_DWORD *)(80 * (v61 + g_MapCellWidth * v60) + g_MissionQueueFrame.localVariables[163] + 60) = a2; /*0x5a0f6a*/
              v63 = v53; /*0x5a0f73*/
              ++v91; /*0x5a0f75*/
              v64 = *(_DWORD *)v11 + 1; /*0x5a0f81*/
              LODWORD(v98) = *(_DWORD *)&v53->RandomMap_field_0x2[2]; /*0x5a0f82*/
              v65 = (unsigned int)v11[1]; /*0x5a0f86*/
              v66 = v64 >> 1; /*0x5a0f8b*/
              LODWORD(v97) = v53; /*0x5a0f8f*/
              p_RandomMap_field_0x8 = (RandomMap *)&v53->RandomMap_field_0x8; /*0x5a0f93*/
              if ( v64 < v65 ) /*0x5a0f97*/
              {
                if ( v64 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v67 = v11[2]; /*0x5a0fa2*/
                    _EBX = *(_DWORD *)(*(_DWORD *)&v67 + 4 * v66); /*0x5a0fa5*/
                    __asm /*0x5a0fa8*/
                    {
                      fld dword ptr [ebx+4]
                      fcomp dword ptr [esp+58h+var_20]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(_DWORD *)(*(_DWORD *)&v67 + 4 * v64) = _EBX; /*0x5a0fb6*/
                    v64 = v66; /*0x5a0fb9*/
                    v66 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v64 > 1 ); /*0x5a0fc0*/
                  v63 = (RandomMap *)LODWORD(v97); /*0x5a0fc2*/
                }
                *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v64) = v63; /*0x5a0fc9*/
                v70 = v11[3]; /*0x5a0fce*/
                ++*(_DWORD *)v11; /*0x5a0fd4*/
                if ( (unsigned int)v63 > *(_DWORD *)&v70 ) /*0x5a0fd6*/
                  v11[3] = (Heap)v63; /*0x5a0fd8*/
                if ( (unsigned int)v63 < *(_DWORD *)&v11[4] ) /*0x5a0fde*/
                  v11[4] = (Heap)v63; /*0x5a0fe0*/
              }
              goto LABEL_108; /*0x5a0fe3*/
            }
          }
        }
        v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0ff0*/
      }
      if ( v49 ) /*0x5a0ff8*/
      {
        v71 = *(_DWORD *)(80 * (v90[0] + g_MapCellWidth * v90[1]) + v49 + 56); /*0x5a1013*/
        if ( !v71 ) /*0x5a1019*/
          goto LABEL_108; /*0x5a1019*/
      }
      else
      {
LABEL_105:
        v71 = -1; /*0x5a101d*/
      }
      if ( v71 != a2 ) /*0x5a1023*/
        v87 = 0; /*0x5a1025*/
LABEL_108:
      v47 = v96 + 2; /*0x5a102e*/
      v96 += 2; /*0x5a1034*/
      if ( v96 >= 8 ) /*0x5a1038*/
        break; /*0x5a1038*/
      v42 = (__int16 *)v89; /*0x5a0d8c*/
    }
    ++v94; /*0x5a1043*/
    Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a104c*/
    __asm { fmul ds:dbl_7E3D88 } /*0x5a1051*/
    v72 = *v11; /*0x5a1057*/
    v73 = *v11 == 0; /*0x5a1059*/
    __asm /*0x5a105b*/
    {
      fadd [esp+58h+var_10]
      fstp [esp+58h+var_10]
    }
    if ( v73 ) /*0x5a1063*/
    {
      v89 = (CellStruct *)v72; /*0x5a1065*/
    }
    else
    {
      v74 = v11[2]; /*0x5a106b*/
      v75 = *(CellStruct **)(*(_DWORD *)&v74 + 4); /*0x5a1073*/
      *(_DWORD *)(*(_DWORD *)&v74 + 4) = *(_DWORD *)(*(_DWORD *)&v74 + 4 * *(_DWORD *)&v72); /*0x5a1076*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a107e*/
      Heap::SiftDown(v11, 1); /*0x5a108c*/
      v89 = v75; /*0x5a1091*/
    }
    if ( v94 < v92 ) /*0x5a109f*/
    {
      v42 = (__int16 *)v89; /*0x5a0d14*/
      continue; /*0x5a0d14*/
    }
    break;
  }
LABEL_113:
  if ( a6 ) /*0x5a10aa*/
  {
    if ( *v11 ) /*0x5a10b0*/
    {
      v76 = v11[2]; /*0x5a10ba*/
      v77 = *(__int16 **)(*(_DWORD *)&v76 + 4); /*0x5a10c2*/
      *(_DWORD *)(*(_DWORD *)&v76 + 4) = *(_DWORD *)(*(_DWORD *)&v76 + 4 * *(_DWORD *)v11); /*0x5a10c5*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a10cd*/
      Heap::SiftDown(v11, 1); /*0x5a10db*/
      v78 = v77; /*0x5a10e2*/
      if ( v77 ) /*0x5a10e4*/
      {
        while ( v87 ) /*0x5a10ef*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a10f9*/
          {
            v79 = 80 * (*v78 + g_MapCellWidth * v78[1]); /*0x5a110e*/
            v80 = *(_DWORD *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1111*/
            v81 = (int *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1115*/
            if ( !v80 ) /*0x5a111b*/
            {
              *v81 = a2; /*0x5a111d*/
              goto LABEL_123; /*0x5a111f*/
            }
          }
          else
          {
            v80 = -1; /*0x5a1121*/
          }
          if ( v80 != a2 ) /*0x5a1126*/
            v87 = 0; /*0x5a1128*/
LABEL_123:
          if ( !*(_DWORD *)v11 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v82 = v11[2]; /*0x5a1133*/
          v83 = *(__int16 **)(*(_DWORD *)&v82 + 4); /*0x5a113b*/
          *(_DWORD *)(*(_DWORD *)&v82 + 4) = *(_DWORD *)(*(_DWORD *)&v82 + 4 * *(_DWORD *)v11); /*0x5a113e*/
          *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a1148*/
          Heap::SiftDown(v11, 1); /*0x5a1154*/
          v78 = v83; /*0x5a115b*/
          if ( !v83 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  __3_YAXPAX_Z(Block); /*0x5a115f*/
  if ( v11 ) /*0x5a116e*/
    Scalar::Dtor((Scalar *)v11, 1); /*0x5a1174*/
  return v87; /*0x5a117d*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.0 + 1.5 * v9; /*0x5a125c*/
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

  v1 = a1 - g_TerrainBuildConfig; /*0x5a135e*/
  switch ( a1 - g_TerrainBuildConfig ) /*0x5a1374*/
  {
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
        v20 = (unsigned int)Random::State(&unk_ABE890); /*0x5a137d*/
        v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
      }
      while ( v2 > 2 ); /*0x5a13a7*/
      return g_TerrainBuildConfig + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
        v21 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13bd*/
        v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
      }
      while ( v4 > 1 ); /*0x5a13e1*/
      return g_TerrainBuildConfig + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
        v22 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13f8*/
        v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
      }
      while ( v5 > 1 ); /*0x5a141c*/
      return g_TerrainBuildConfig + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
        v23 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1432*/
        v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
      }
      while ( v6 > 2 ); /*0x5a145c*/
      return g_TerrainBuildConfig + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
        v24 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1472*/
        v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
      }
      while ( v7 > 1 ); /*0x5a1496*/
      return g_TerrainBuildConfig + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
        v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14ad*/
        v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
      }
      while ( v8 > 1 ); /*0x5a14d1*/
      return g_TerrainBuildConfig + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
        v26 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14e7*/
        v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
      }
      while ( v9 > 2 ); /*0x5a1511*/
      return g_TerrainBuildConfig + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
        v27 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1527*/
        v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
      }
      while ( v10 > 1 ); /*0x5a154b*/
      return g_TerrainBuildConfig + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
        v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1562*/
        v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
      }
      while ( v11 > 1 ); /*0x5a1586*/
      return g_TerrainBuildConfig + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
        v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a159c*/
        v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
      }
      while ( v12 > 2 ); /*0x5a15c6*/
      return g_TerrainBuildConfig + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
        v30 = (unsigned int)Random::State(&unk_ABE890); /*0x5a15dc*/
        v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
      }
      while ( v13 > 1 ); /*0x5a1600*/
      return g_TerrainBuildConfig + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
        v31 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1617*/
        v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
      }
      while ( v14 > 1 ); /*0x5a163b*/
      return g_TerrainBuildConfig + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
        v32 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1651*/
        v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
      }
      while ( v15 > 2 ); /*0x5a167b*/
      return g_TerrainBuildConfig + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
        v33 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1691*/
        v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
      }
      while ( v16 > 1 ); /*0x5a16b5*/
      return g_TerrainBuildConfig + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
        v34 = (unsigned int)Random::State(&unk_ABE890); /*0x5a16cc*/
        v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
      }
      while ( v17 > 1 ); /*0x5a16f0*/
      return g_TerrainBuildConfig + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return g_TerrainBuildConfig + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return g_TerrainBuildConfig + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      v18 = 2; /*0x5a172c*/
      v19 = 1; /*0x5a1731*/
      goto LABEL_37; /*0x5a1736*/
    case 35: /*0x5a1374*/
      return g_TerrainBuildConfig + 2 * Range_RandomInt(0, 1u) + 34; /*0x5a1754*/
    case 36: /*0x5a1374*/
      v18 = 1; /*0x5a1757*/
      v19 = 0; /*0x5a175c*/
LABEL_37:
      v1 = Range_RandomInt(v19, v18) + 34; /*0x5a175e*/
      return g_TerrainBuildConfig + v1; /*0x5a1763*/
    default:
      return g_TerrainBuildConfig + v1;
  }
}



// ==== 0x005A17F0  MapClass::FindPassableNeighbor  this=MapClass  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(_DWORD *)(i + 56); /*0x5a1819*/
    if ( v2 >= g_TerrainBuildConfig && v2 < g_TerrainBuildConfig + 40 ) /*0x5a182f*/
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
          v7 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((unsigned __int8 *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((unsigned __int8 *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( dword_ABED10 ) /*0x5a18d6*/
            v10 = *((_DWORD *)dword_ABED10 + 20 * v8 + 20 * g_MapCellWidth * v9 + 14); /*0x5a18f2*/
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
          v13 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((unsigned __int8 *)v4 + 282) % v13; /*0x5a1969*/
          LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((unsigned __int8 *)v4 + 282) / v13; /*0x5a1977*/
          HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( dword_ABED10 ) /*0x5a1989*/
            v16 = *((_DWORD *)dword_ABED10 + 20 * v14 + 20 * g_MapCellWidth * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}



// ==== 0x005A19E0  ProcessRandomMapCellAdjacency  this=-  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a19e9*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a19f3*/
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
        v15 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1a85*/
        v6 = Math::RoundToInt((double)v15 * 4.656612874161595e-10); /*0x5a1a9b*/
      }
      while ( v6 > 1 ); /*0x5a1aa3*/
      if ( v6 ) /*0x5a1aa7*/
        goto LABEL_32; /*0x5a1aa7*/
      *((_BYTE *)v3 + 283) -= 4; /*0x5a1ab6*/
      v7 = dword_ABED10; /*0x5a1abc*/
      v8 = dword_ABED10
         ? *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !dword_ABED10 ) /*0x5a1aea*/
        goto LABEL_32; /*0x5a1aea*/
      v9 = v3[18]; /*0x5a1af4*/
      v10 = g_MapCellWidth * v3[19]; /*0x5a1af8*/
    }
    else if ( AdjacencyFlags == 56 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !Cell::IsEmpty(v4) ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        v16 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1b36*/
        v11 = Math::RoundToInt((double)v16 * 4.656612874161595e-10); /*0x5a1b4c*/
      }
      while ( v11 > 1 ); /*0x5a1b54*/
      if ( v11 ) /*0x5a1b58*/
        goto LABEL_32; /*0x5a1b58*/
      *((_BYTE *)v4 + 283) -= 4; /*0x5a1b67*/
      v7 = dword_ABED10; /*0x5a1b6d*/
      v8 = dword_ABED10
         ? *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !dword_ABED10 ) /*0x5a1b9b*/
        goto LABEL_32; /*0x5a1b9b*/
      v9 = v4[18]; /*0x5a1ba5*/
      v10 = g_MapCellWidth * v4[19]; /*0x5a1ba9*/
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
      v7 = dword_ABED10; /*0x5a1c02*/
      v8 = dword_ABED10 ? *((_DWORD *)dword_ABED10 + 20 * v4[18] + 20 * g_MapCellWidth * v4[19] + 14) : -1;
      if ( !dword_ABED10 ) /*0x5a1c30*/
        goto LABEL_32; /*0x5a1c30*/
      v12 = *(__int16 *)(i + 38); /*0x5a1c32*/
      v9 = *(__int16 *)(i + 36); /*0x5a1c36*/
      v10 = g_MapCellWidth * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
LABEL_32:
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1c49*/
  }
  return result; /*0x5a1c60*/
}



// ==== 0x005A1C70  ObjectClass::method_5A1C70  this=ObjectClass  sig=csp ====
int __thiscall sub_5A1C70(ObjectClass *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  RandomMap *v7; // edi
  int j; // edi
  int v9; // esi
  int v10; // eax
  bool v11; // al
  int result; // eax
  int v13; // esi
  int v14; // edi
  RandomMap *v15; // eax
  __int16 v16[2]; // [esp+8h] [ebp-8h] BYREF
  ObjectClass *v17; // [esp+Ch] [ebp-4h]

  v17 = this; /*0x5a1c7c*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a1c80*/
  {
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x5a1c88*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1c8d*/
    {
      v2 = 0; /*0x5a1c8f*/
      do /*0x5a1cac*/
      {
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x5a1c9a*/
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x5a1ca4*/
        v2 += 80; /*0x5a1ca8*/
        --v1; /*0x5a1cab*/
      }
      while ( v1 ); /*0x5a1cac*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x5a1cb8*/
  {
    v4 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x5a1ce5*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1cef*/
  {
    v5 = 0; /*0x5a1cf1*/
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      *(_DWORD *)v16 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x5a1d08*/
      v7 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x5a1d11*/
      if ( *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x5a1d3b*/
        && (*(_WORD *)(v5 + g_MissionQueueFrame.localVariables[163])
         || *(_WORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 2))
        && ((unsigned __int8)Cell::IsGroundTypeRange((Cell *)v7) || (unsigned __int8)Cell::IsShore((Cell *)v7)) )
      {
        RandomMap::GenerateTerrain(v7); /*0x5a1d46*/
      }
      v5 += 80; /*0x5a1d4b*/
      --v6; /*0x5a1d4e*/
    }
    while ( v6 ); /*0x5a1d4f*/
  }
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x5a1d5a*/
  {
    v9 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x5a1d67*/
    if ( *(_BYTE *)(v9 + 20) ) /*0x5a1d6a*/
    {
      v10 = v17->ambientSoundController[0]; /*0x5a1d75*/
      v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * j),
        (*(_DWORD *)(v9 + 12) > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain((RandomMap *)v9); /*0x5a1daa*/
    }
  }
  result = g_MapCellWidth * g_MapCellWidth; /*0x5a1dbf*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1dc4*/
  {
    v13 = 0; /*0x5a1dc6*/
    v14 = g_MapCellWidth * g_MapCellWidth; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = v13 + g_MissionQueueFrame.localVariables[163]; /*0x5a1dd0*/
      if ( *(_DWORD *)(v13 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x5a1de2*/
        && (*(_WORD *)result || *(_WORD *)(result + 2)) )
      {
        v15 = (RandomMap *)CellCoord::To_CellObj( /*0x5a1def*/
                             (CellCoord *)&stru_87F5F0.__pad_58[416],
                             (__int16 *)(v13 + g_MissionQueueFrame.localVariables[163]));
        result = (int)RandomMap::GenerateTerrain(v15); /*0x5a1df6*/
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
    if ( v10 > dword_ABED04 && v9 - v8 < dword_ABED04 && v8 - v9 < dword_ABED04 && v10 <= dword_ABED08 )
    {
      v11 = dword_ABED10 ? *((_DWORD *)dword_ABED10 + 20 * v9 + 20 * g_MapCellWidth * v8 + 14) : -1;
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
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x5a1f6a*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a1f74*/
  for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a1f85*/
  {
    if ( !v0 ) /*0x5a1f89*/
      break; /*0x5a1f89*/
    v0 = Cliff::ProcessTransitions(i, -1); /*0x5a1f9d*/
  }
  return v0; /*0x5a1faa*/
}



// ==== 0x005A1FB0  ObjectClass::SpreadMapSeedTerrainFromWaypoints  this=ObjectClass  sig=csp ====
char __thiscall SpreadMapSeedTerrainFromWaypoints(ObjectClass *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // ebp
  Heap *v5; // eax
  Heap *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int i; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  Heap v17; // edi
  unsigned int v20; // eax
  Heap v21; // eax
  CellStruct *v22; // edi
  CellStruct *v23; // ecx
  char v24; // al
  float *v25; // edi
  int v26; // edx
  Cell *v27; // eax
  __int16 v28; // ax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  Heap v33; // ebp
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  Heap v37; // ebx
  Heap v39; // eax
  CellStruct *v40; // eax
  double v42; // [esp+0h] [ebp-58h]
  __int16 v43[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v44; // [esp+20h] [ebp-38h]
  int v45; // [esp+24h] [ebp-34h]
  CellStruct *v46; // [esp+28h] [ebp-30h]
  int v47; // [esp+2Ch] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-28h]
  _DWORD *v49; // [esp+34h] [ebp-24h]
  int v50; // [esp+38h] [ebp-20h]
  int v51; // [esp+3Ch] [ebp-1Ch]
  int v52; // [esp+40h] [ebp-18h]
  int v53; // [esp+44h] [ebp-14h]
  int v54; // [esp+48h] [ebp-10h]
  ObjectClass *v55; // [esp+4Ch] [ebp-Ch]
  char v56[4]; // [esp+50h] [ebp-8h] BYREF
  int v57; // [esp+54h] [ebp-4h] BYREF

  v1 = this->customSound_controller[0]; /*0x5a1fb9*/
  v2 = 0; /*0x5a1fbe*/
  v55 = this; /*0x5a1fc4*/
  if ( v1 > 0 ) /*0x5a1fc8*/
  {
    do /*0x5a238f*/
    {
      v3 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v56, v2); /*0x5a1fdf*/
      v47 = v3; /*0x5a1fe6*/
      v4 = (_DWORD *)__2_YAPAXI_Z(0x1900u); /*0x5a1fef*/
      v49 = v4; /*0x5a1ff3*/
      v5 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a1ff7*/
      v6 = v5; /*0x5a1ffc*/
      if ( v5 ) /*0x5a2003*/
      {
        v5[3] = 0; /*0x5a200a*/
        v5[4] = (Heap)-1; /*0x5a2011*/
        *v5 = 0; /*0x5a2018*/
        v5[1] = (Heap)800; /*0x5a201e*/
        v7 = __2_YAPAXI_Z(0xC84u); /*0x5a2025*/
        v8 = (int)v6[1]; /*0x5a202a*/
        v6[2] = (Heap)v7; /*0x5a202d*/
        v9 = 0; /*0x5a2033*/
        if ( v8 >= 0 ) /*0x5a2037*/
        {
          do /*0x5a204a*/
          {
            ++v9; /*0x5a203c*/
            *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v9 - 4) = 0; /*0x5a203d*/
          }
          while ( v9 <= *(_DWORD *)&v6[1] ); /*0x5a204a*/
        }
      }
      else
      {
        v6 = 0; /*0x5a204e*/
      }
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a2055*/
      for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a2066*/
            i;
            i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        v50 = *(_DWORD *)(i + 36); /*0x5a206b*/
        *(_DWORD *)(80 * ((__int16)v50 + g_MapCellWidth * SHIWORD(v50)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a208c*/
      }
      v11 = v2 + 1; /*0x5a20a6*/
      v12 = 0; /*0x5a20a7*/
      v13 = *(_DWORD *)v6 < 0; /*0x5a20a9*/
      v45 = 0; /*0x5a20ab*/
      v50 = v11; /*0x5a20af*/
      if ( !v13 ) /*0x5a20b3*/
      {
        do /*0x5a20c1*/
        {
          ++v12; /*0x5a20b8*/
          *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v12 - 4) = 0; /*0x5a20b9*/
        }
        while ( v12 <= *(_DWORD *)v6 ); /*0x5a20c1*/
      }
      v14 = SHIWORD(v47); /*0x5a20c3*/
      *v6 = 0; /*0x5a20c8*/
      *v4 = v3; /*0x5a20ca*/
      v4[1] = 0; /*0x5a20cd*/
      v53 = (__int16)v3; /*0x5a20dc*/
      v44 = 1; /*0x5a20e6*/
      *(_DWORD *)(80 * ((__int16)v3 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 60) = v11; /*0x5a20f4*/
      v15 = *(_DWORD *)v6 + 1; /*0x5a20fd*/
      v51 = v4[1]; /*0x5a2100*/
      v16 = v15 >> 1; /*0x5a2107*/
      if ( v15 < *(_DWORD *)&v6[1] ) /*0x5a210b*/
      {
        for ( ; v15 > 1; v16 >>= 1 ) /*0x5a2110*/
        {
          v17 = v6[2]; /*0x5a2112*/
          _EBX = *(_DWORD *)(*(_DWORD *)&v17 + 4 * v16); /*0x5a2115*/
          __asm /*0x5a2118*/
          {
            fld dword ptr [ebx+4]
            fcomp [esp+50h+var_1C]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5a2124*/
            break; /*0x5a2124*/
          *(_DWORD *)(*(_DWORD *)&v17 + 4 * v15) = _EBX; /*0x5a2126*/
          v15 = v16; /*0x5a2129*/
        }
        *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v15) = v4; /*0x5a2135*/
        v20 = (unsigned int)v6[3]; /*0x5a213a*/
        ++*(_DWORD *)v6; /*0x5a2140*/
        if ( (unsigned int)v4 > v20 ) /*0x5a2142*/
          v6[3] = (Heap)v4; /*0x5a2144*/
        if ( (unsigned int)v4 < *(_DWORD *)&v6[4] ) /*0x5a214a*/
          v6[4] = (Heap)v4; /*0x5a214c*/
      }
      if ( *v6 ) /*0x5a214f*/
      {
        v21 = v6[2]; /*0x5a2159*/
        v22 = *(CellStruct **)(*(_DWORD *)&v21 + 4); /*0x5a2161*/
        *(_DWORD *)(*(_DWORD *)&v21 + 4) = *(_DWORD *)(*(_DWORD *)&v21 + 4 * *(_DWORD *)v6); /*0x5a2164*/
        *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * (*(_DWORD *)v6)--) = 0; /*0x5a216e*/
        Heap::SiftDown(v6, 1); /*0x5a217a*/
        v46 = v22; /*0x5a2181*/
        if ( v22 ) /*0x5a2185*/
        {
          do /*0x5a2368*/
          {
            if ( v45 >= 400 ) /*0x5a2193*/
              break; /*0x5a2193*/
            v23 = v46; /*0x5a2199*/
            *(_BYTE *)(80 * (SLOWORD(v46->field_0) + g_MapCellWidth * SHIWORD(v46->field_0)) /*0x5a21b9*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 69) = 1;
            v24 = 0; /*0x5a21c2*/
            v48 = 0; /*0x5a21c4*/
            v25 = (float *)&v4[2 * v44]; /*0x5a21c8*/
            while ( 1 ) /*0x5a21ef*/
            {
              v52 = *CellStruct::Add(v23, &v57, (_WORD *)(4 * (v24 & 7) + 9041544)); /*0x5a21ef*/
              *(_DWORD *)v43 = v52; /*0x5a21f3*/
              v26 = SHIWORD(v52) + (__int16)v52; /*0x5a21ff*/
              if ( v26 > g_MissionQueueFrame.localVariables[160] /*0x5a2243*/
                && (__int16)v52 - SHIWORD(v52) < g_MissionQueueFrame.localVariables[160]
                && SHIWORD(v52) - (__int16)v52 < g_MissionQueueFrame.localVariables[160]
                && v26 <= g_MissionQueueFrame.localVariables[161]
                && !*(_DWORD *)(80 * ((__int16)v52 + g_MapCellWidth * SHIWORD(v52))
                              + g_MissionQueueFrame.localVariables[163]
                              + 60) )
              {
                v27 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x5a2259*/
                if ( (unsigned __int8)Cell::IsEmpty(v27) ) /*0x5a2260*/
                {
                  v28 = v43[0]; /*0x5a226d*/
                  v29 = v53; /*0x5a2271*/
                  v30 = SHIWORD(v47); /*0x5a2275*/
                  *v25 = *(float *)v43; /*0x5a227a*/
                  v52 = (v28 - v29) * (v28 - v29) + (v43[1] - v30) * (v43[1] - v30); /*0x5a2297*/
                  __asm /*0x5a229b*/
                  {
                    fild [esp+58h+var_18]
                    fstp [esp+58h+var_58]; double
                  }
                  Math::Sqrt(v42); /*0x5a22a2*/
                  v31 = v43[1]; /*0x5a22a7*/
                  __asm { fstp dword ptr [edi+4] } /*0x5a22ac*/
                  v25[1] = _ET1; /*0x5a22ac*/
                  v33 = (Heap)v25; /*0x5a22c7*/
                  v25 += 2; /*0x5a22d2*/
                  *(_DWORD *)(80 * (v43[0] + g_MapCellWidth * v31) + g_MissionQueueFrame.localVariables[163] + 60) = v50; /*0x5a22d5*/
                  v34 = *(_DWORD *)(*(_DWORD *)&v33 + 4); /*0x5a22df*/
                  v35 = *(_DWORD *)v6 + 1; /*0x5a22e3*/
                  ++v44; /*0x5a22e4*/
                  v54 = v34; /*0x5a22ea*/
                  v36 = v35 >> 1; /*0x5a22f1*/
                  if ( v35 < *(_DWORD *)&v6[1] ) /*0x5a22f5*/
                  {
                    for ( ; v35 > 1; v36 >>= 1 ) /*0x5a22fa*/
                    {
                      v37 = v6[2]; /*0x5a22fc*/
                      _EAX = *(_DWORD *)(*(_DWORD *)&v37 + 4 * v36); /*0x5a22ff*/
                      __asm /*0x5a2302*/
                      {
                        fld dword ptr [eax+4]
                        fcomp [esp+50h+var_10]
                        fnstsw ax
                      }
                      if ( (_EAX & 0x4100) != 0 ) /*0x5a230e*/
                        break; /*0x5a230e*/
                      *(_DWORD *)(*(_DWORD *)&v37 + 4 * v35) = *(_DWORD *)(*(_DWORD *)&v37 + 4 * v36); /*0x5a2313*/
                      v35 = v36; /*0x5a2316*/
                    }
                    *(Heap *)(*(_DWORD *)&v6[2] + 4 * v35) = v33; /*0x5a2322*/
                    v39 = v6[3]; /*0x5a2327*/
                    ++*(_DWORD *)v6; /*0x5a232d*/
                    if ( *(_DWORD *)&v33 > *(unsigned int *)&v39 ) /*0x5a232f*/
                      v6[3] = v33; /*0x5a2331*/
                    if ( *(unsigned int *)&v33 < *(_DWORD *)&v6[4] ) /*0x5a2337*/
                      v6[4] = v33; /*0x5a2339*/
                  }
                }
              }
              v24 = ++v48; /*0x5a2340*/
              if ( v48 >= 8 ) /*0x5a2348*/
                break; /*0x5a2348*/
              v23 = v46; /*0x5a21ce*/
            }
            ++v45; /*0x5a2355*/
            v40 = (CellStruct *)PriorityQueue::Pop((PriorityQueue *)v6); /*0x5a2359*/
            v4 = v49; /*0x5a235e*/
            v46 = v40; /*0x5a2362*/
          }
          while ( v40 ); /*0x5a2368*/
        }
      }
      __3_YAXPAX_Z(v4); /*0x5a236f*/
      if ( v6 ) /*0x5a2379*/
        Scalar::Dtor((Scalar *)v6, 1); /*0x5a237f*/
      v2 = v50; /*0x5a2388*/
    }
    while ( v50 < v55->customSound_controller[0] ); /*0x5a238f*/
  }
  return 1; /*0x5a2395*/
}



// ==== 0x005A23A0  RandomMap::PlaceRandomMapTiberium  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceRandomMapTiberium(RandomMap *this)
{
  double v1; // st7
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  __int16 v8; // bp
  int v9; // esi
  int v10; // ecx
  __int16 v11; // bx
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  int v15; // esi
  int v16; // ebp
  int v17; // eax
  int v19; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // ebx
  int v24; // esi
  int v27; // eax
  int *Waypoint_Location; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  int v32; // ebx
  int v33; // ebp
  int v34; // eax
  int v35; // eax
  int v37; // eax
  double *v38; // ecx
  int v40; // ebx
  int v43; // esi
  int v45; // ebp
  int v46; // eax
  int v48; // ebp
  int v49; // eax
  __int16 *v50; // eax
  int v51; // [esp-4h] [ebp-9Ch]
  double v52; // [esp+0h] [ebp-98h]
  double v53; // [esp+0h] [ebp-98h]
  bool v54; // [esp+1Fh] [ebp-79h]
  int v55; // [esp+20h] [ebp-78h]
  RandomMap *v56; // [esp+24h] [ebp-74h]
  int v57; // [esp+28h] [ebp-70h]
  int v58; // [esp+28h] [ebp-70h]
  int v59; // [esp+28h] [ebp-70h]
  int v61; // [esp+34h] [ebp-64h]
  int v62; // [esp+34h] [ebp-64h]
  char v63; // [esp+38h] [ebp-60h]
  int v64; // [esp+3Ch] [ebp-5Ch]
  int v66; // [esp+40h] [ebp-58h]
  int v67; // [esp+40h] [ebp-58h]
  int v68; // [esp+40h] [ebp-58h]
  int v69; // [esp+40h] [ebp-58h]
  int v70; // [esp+40h] [ebp-58h]
  char v72[4]; // [esp+4Ch] [ebp-4Ch] BYREF
  char v73[4]; // [esp+50h] [ebp-48h] BYREF
  char v74[4]; // [esp+54h] [ebp-44h] BYREF
  double v75; // [esp+58h] [ebp-40h]
  double v76; // [esp+60h] [ebp-38h]
  double v77; // [esp+68h] [ebp-30h]
  __int64 v78; // [esp+70h] [ebp-28h]
  __int64 v79; // [esp+78h] [ebp-20h]
  void **v80; // [esp+80h] [ebp-18h] BYREF
  void *Block; // [esp+84h] [ebp-14h]
  int v82; // [esp+88h] [ebp-10h]
  char v83; // [esp+8Dh] [ebp-Bh]
  int v84; // [esp+90h] [ebp-8h]
  int v85; // [esp+94h] [ebp-4h]

  _ESI = this; /*0x5a23af*/
  v3 = 0; /*0x5a23b1*/
  v4 = this->RandomMap_field_0x3C[0]; /*0x5a23b4*/
  v5 = this->RandomMap_field_0x40[0]; /*0x5a23b7*/
  v56 = _ESI; /*0x5a23bd*/
  v55 = 0; /*0x5a23c1*/
  switch ( v4 ) /*0x5a23c7*/
  {
    case 0: /*0x5a23c7*/
      v54 = v5 == 3; /*0x5a23d1*/
      break; /*0x5a23d6*/
    case 1: /*0x5a23c7*/
    case 3: /*0x5a23c7*/
    case 4: /*0x5a23c7*/
      v54 = v5 != 3; /*0x5a23db*/
      break; /*0x5a23e0*/
    case 2: /*0x5a23c7*/
      v54 = 1; /*0x5a23e2*/
      break; /*0x5a23e7*/
    default:
      v54 = 0; /*0x5a23e9*/
      break; /*0x5a23e9*/
  }
  result = 0; /*0x5a23f4*/
  v64 = 0; /*0x5a23f8*/
  if ( g_MissionQueueFrame.briefing[342] > 0 ) /*0x5a23fc*/
  {
    while ( 1 ) /*0x5a240c*/
    {
      _EDI = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * result); /*0x5a240c*/
      if ( *_EDI ) /*0x5a240f*/
      {
        v61 = -1; /*0x5a241b*/
        if ( v54 ) /*0x5a2425*/
        {
          v8 = 0; /*0x5a242e*/
          if ( (int)_EDI[8] <= 0 ) /*0x5a2433*/
          {
            v13 = _EDI[14] - 1; /*0x5a2484*/
            v78 = (unsigned int)_EDI[14]; /*0x5a2488*/
            __asm /*0x5a248c*/
            {
              fild [esp+90h+var_28]
              fstp qword ptr [esp+90h+var_58]
            }
            do /*0x5a24bb*/
            {
              v79 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a249e*/
              __asm /*0x5a24a6*/
              {
                fild [esp+90h+var_20]
                fmul qword ptr [esp+90h+var_58]
                fmul ds:dbl_7ED898
              }
              LOWORD(v12) = Math::RoundToInt(v1); /*0x5a24b4*/
            }
            while ( v12 > v13 ); /*0x5a24bb*/
            v57 = *(_DWORD *)(_EDI[11] + 4 * v12); /*0x5a24c3*/
            LOWORD(v12) = HIWORD(v57); /*0x5a24c7*/
            v11 = v57; /*0x5a24cc*/
          }
          else
          {
            v9 = 0; /*0x5a2435*/
            do /*0x5a2467*/
            {
              LODWORD(v75) = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v72, v9 + v55); /*0x5a2455*/
              v8 += WORD1(v75); /*0x5a2459*/
              v3 += LOWORD(v75); /*0x5a245e*/
              ++v9; /*0x5a2464*/
            }
            while ( v9 < _EDI[8] ); /*0x5a2467*/
            v10 = _EDI[8]; /*0x5a2469*/
            v11 = v3 / v10; /*0x5a2472*/
            v12 = v8 / v10; /*0x5a2479*/
          }
          v14 = *_EDI; /*0x5a24cf*/
          v15 = 0; /*0x5a24d1*/
          v58 = 500000; /*0x5a24d3*/
          if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a24e0*/
          {
            v16 = (__int16)v12; /*0x5a24e5*/
            do /*0x5a2546*/
            {
              v17 = *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * v15); /*0x5a24ee*/
              v66 = ((__int16)v17 - v11) * ((__int16)v17 - v11) + (SHIWORD(v17) - v16) * (SHIWORD(v17) - v16); /*0x5a250d*/
              __asm /*0x5a2511*/
              {
                fild [esp+98h+var_58]
                fstp [esp+98h+var_98]; double
              }
              Math::Sqrt(v52); /*0x5a2518*/
              __asm /*0x5a251d*/
              {
                fild dword ptr [esp+98h+var_70]
                fld st(1)
              }
              __asm
              {
                fcompp
                fnstsw ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x5a252d*/
              {
                LOWORD(v19) = Math::RoundToInt(v1); /*0x5a252f*/
                v58 = v19; /*0x5a2534*/
                v61 = v15; /*0x5a2538*/
              }
              else
              {
                __asm { fstp st } /*0x5a253e*/
              }
              v14 = *_EDI; /*0x5a2540*/
              ++v15; /*0x5a2542*/
            }
            while ( v15 < *(_DWORD *)(*_EDI + 16) ); /*0x5a2546*/
          }
          _ESI = v56; /*0x5a2548*/
        }
        __asm { fild dword ptr [esi+54h] } /*0x5a2558*/
        v59 = *(_DWORD *)&_ESI[1].__pad_4C[96]; /*0x5a255d*/
        v67 = *(_DWORD *)&_ESI[1].__pad_4C[100] - v59; /*0x5a2561*/
        __asm /*0x5a2565*/
        {
          fmul ds:dbl_7E3808
          fild [esp+90h+var_58]
          fmulp st(1), st
          fiadd dword ptr [esp+90h+var_70]
        }
        LOWORD(_EAX) = Math::RoundToInt(v1); /*0x5a2575*/
        __asm /*0x5a257a*/
        {
          fild dword ptr [edi+20h]
          fld ds:dbl_7E1738
        }
        v68 = _EAX; /*0x5a2583*/
        __asm /*0x5a2587*/
        {
          fcomp st(1)
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x5a258e*/
        {
          __asm /*0x5a2590*/
          {
            fstp st
            fld ds:dbl_7E1738
          }
        }
        __asm /*0x5a2598*/
        {
          fild [esp+90h+var_58]
          fmul st, st(1)
        }
        LOWORD(v21) = Math::RoundToInt(v1); /*0x5a259e*/
        __asm { fstp st } /*0x5a25a5*/
        v22 = *(_DWORD *)(*_EDI + 16); /*0x5a25a7*/
        if ( v22 && v21 ) /*0x5a25b4*/
        {
          v23 = 0; /*0x5a25bd*/
          v24 = 0; /*0x5a25bf*/
          v69 = v21 / v22; /*0x5a25c3*/
          if ( v22 > 0 ) /*0x5a25c7*/
          {
            do /*0x5a2638*/
            {
              do /*0x5a25f9*/
              {
                do /*0x5a25e8*/
                {
                  Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a25ce*/
                  __asm /*0x5a25d3*/
                  {
                    fmul ds:dbl_7E4F50
                    fst [esp+90h+var_70]
                    fcomp ds:dbl_7EDA88
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x100) != 0 ); /*0x5a25e8*/
                __asm /*0x5a25ea*/
                {
                  fld [esp+90h+var_70]
                  fcomp ds:dbl_7E2AC0
                  fnstsw ax
                }
              }
              while ( (_AX & 0x4100) == 0 ); /*0x5a25f9*/
              __asm /*0x5a25fb*/
              {
                fild [esp+90h+var_58]
                fadd [esp+90h+var_70]
              }
              LOWORD(v27) = Math::RoundToInt(v1); /*0x5a2603*/
              if ( v27 >= 0 ) /*0x5a260a*/
                Terrain::PlaceTiberiumTrees( /*0x5a262d*/
                  (__int16 *)(*(_DWORD *)(*_EDI + 4) + 4 * v24),
                  v27,
                  v24 + v55 + 1,
                  v24 == v61);
              ++v24; /*0x5a2634*/
            }
            while ( v24 < *(_DWORD *)(*_EDI + 16) ); /*0x5a2638*/
          }
          RandomMap::Constructor_1((RandomMap *)&v80, 0, 0); /*0x5a2643*/
          v80 = &DynamicVectorClass<double>::`vftable'; /*0x5a2648*/
          v85 = 10; /*0x5a2650*/
          v84 = 0; /*0x5a265b*/
          v62 = 0; /*0x5a2667*/
          if ( (int)_EDI[8] > 0 ) /*0x5a266b*/
          {
            do /*0x5a2779*/
            {
              v77 = 0.0; /*0x5a2679*/
              Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v73, v23 + v55); /*0x5a2694*/
              v29 = *_EDI; /*0x5a2699*/
              v30 = *Waypoint_Location; /*0x5a269b*/
              v31 = 0; /*0x5a269d*/
              if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a26a8*/
              {
                v32 = SHIWORD(v30); /*0x5a26aa*/
                v33 = (__int16)v30; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  v34 = *(_DWORD *)(*(_DWORD *)(v29 + 4) + 4 * v31); /*0x5a26b8*/
                  v70 = ((__int16)v34 - v33) * ((__int16)v34 - v33) + (SHIWORD(v34) - v32) * (SHIWORD(v34) - v32); /*0x5a26d7*/
                  __asm /*0x5a26db*/
                  {
                    fild [esp+98h+var_58]
                    fstp [esp+98h+var_98]; double
                  }
                  Math::Sqrt(v53); /*0x5a26e2*/
                  v29 = *_EDI; /*0x5a26e7*/
                  __asm { fadd [esp+90h+var_30] } /*0x5a26ec*/
                  v35 = *(_DWORD *)(*_EDI + 16); /*0x5a26f0*/
                  ++v31; /*0x5a26f3*/
                  __asm { fstp [esp+90h+var_30] } /*0x5a26f6*/
                }
                while ( v31 < v35 ); /*0x5a26fa*/
                v23 = v62; /*0x5a26fc*/
              }
              _EDX = *_EDI; /*0x5a2700*/
              __asm { fild dword ptr [edx+10h] } /*0x5a2710*/
              __asm
              {
                fdivr [esp+90h+var_30]
                fstp qword ptr [esp+90h+var_58]
              }
              if ( v84 < v82 /*0x5a274c*/
                || (v83 || !v82)
                && v85 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v80[2])(&v80, v85 + v82, 0) )
              {
                __asm { fld qword ptr [esp+90h+var_58] } /*0x5a275a*/
                v37 = v84++; /*0x5a275e*/
                v38 = (double *)Block; /*0x5a2768*/
                __asm { fstp qword ptr [ecx+eax*8] } /*0x5a276c*/
                v38[v37] = _RT1; /*0x5a276c*/
              }
              v62 = ++v23; /*0x5a2775*/
            }
            while ( v23 < _EDI[8] ); /*0x5a2779*/
          }
          v40 = _EDI[8]; /*0x5a277f*/
          _EDX = Block; /*0x5a2782*/
          v76 = 9999999.0; /*0x5a2788*/
          if ( v40 > 0 ) /*0x5a2798*/
          {
            _ECX = Block; /*0x5a279a*/
            v43 = v40; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              __asm /*0x5a279e*/
              {
                fld qword ptr [ecx]
                fcomp [esp+90h+var_38]
                fnstsw ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x5a27a9*/
              {
                v45 = _ECX[1]; /*0x5a27ad*/
                LODWORD(v76) = *_ECX; /*0x5a27b0*/
                HIDWORD(v76) = v45; /*0x5a27b4*/
              }
              _ECX += 2; /*0x5a27b8*/
              --v43; /*0x5a27bb*/
            }
            while ( v43 ); /*0x5a27bc*/
          }
          v63 = 0; /*0x5a27da*/
          if ( v56->RandomMap_field_0x40[0] == 3 ) /*0x5a27c6*/
          {
            v46 = v56->RandomMap_field_0x3C[0]; /*0x5a27c8*/
            if ( v46 == 1 || v46 == 3 || v46 == 4 ) /*0x5a27d8*/
              v63 = 1; /*0x5a27c6*/
          }
          _ESI = 0; /*0x5a27e6*/
          if ( v40 > 0 ) /*0x5a27ea*/
          {
            v48 = v55; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              __asm /*0x5a27f4*/
              {
                fld qword ptr [edx+esi*8]
                fsub [esp+90h+var_38]
                fmul ds:dbl_7ED7B0
              }
              LOWORD(v49) = Math::RoundToInt(v1); /*0x5a2801*/
              v51 = v49 + 500; /*0x5a2816*/
              v50 = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v74, v48); /*0x5a281d*/
              Terrain::PlaceTiberiumTrees(v50, v51, v48 + 1, v63); /*0x5a2827*/
              _EDX = Block; /*0x5a282f*/
              ++_ESI; /*0x5a2833*/
              ++v48; /*0x5a2834*/
            }
            while ( _ESI < _EDI[8] ); /*0x5a2837*/
          }
          v55 += _EDI[8]; /*0x5a2846*/
          v80 = &VectorClass<double>::`vftable'; /*0x5a284a*/
          if ( _EDX ) /*0x5a2852*/
          {
            if ( v83 ) /*0x5a285d*/
            {
              __3_YAXPAX_Z(_EDX); /*0x5a2860*/
              Block = 0; /*0x5a2868*/
            }
          }
          v82 = 0; /*0x5a286c*/
          _ESI = v56; /*0x5a2873*/
          v83 = 0; /*0x5a2877*/
        }
      }
      result = ++v64; /*0x5a2889*/
      if ( v64 >= g_MissionQueueFrame.briefing[342] ) /*0x5a2890*/
        break; /*0x5a2890*/
      v3 = 0; /*0x5a2404*/
    }
  }
  return result; /*0x5a2896*/
}



// ==== 0x005A28C0  Terrain::PlaceTiberiumTrees  this=Terrain  sig=csp ====
void __stdcall Tiberium_PlaceTreeAtCell(__int16 *a1, int a2, int a3, char a4)
{
  __int16 *v4; // ebx
  int v5; // edi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // sf
  int i; // eax
  int j; // eax
  char *v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // eax
  __int16 *v23; // ebx
  int v24; // edx
  _DWORD *v25; // ecx
  int v26; // eax
  int k; // eax
  unsigned int v28; // eax
  void **v29; // edi
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int8 v32; // al
  float *v33; // edi
  int v34; // ecx
  __int16 v35; // ax
  _DWORD *v36; // ebx
  _DWORD *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  float *v41; // ebx
  float v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  __int16 *v47; // edi
  char v48; // [esp+1Bh] [ebp-6Dh]
  __int16 *v49; // [esp+1Ch] [ebp-6Ch]
  _DWORD *v50; // [esp+20h] [ebp-68h] BYREF
  void *Block; // [esp+24h] [ebp-64h]
  int v52; // [esp+28h] [ebp-60h] BYREF
  int v53; // [esp+2Ch] [ebp-5Ch]
  int v54; // [esp+30h] [ebp-58h]
  int v55; // [esp+34h] [ebp-54h]
  int v56; // [esp+38h] [ebp-50h]
  _DWORD *v57; // [esp+3Ch] [ebp-4Ch]
  int v58; // [esp+40h] [ebp-48h]
  float v59; // [esp+44h] [ebp-44h]
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
  v6 = __2_YAPAXI_Z(80 * a2); /*0x5a28e2*/
  if ( v6 ) /*0x5a28ec*/
  {
    Block = v6; /*0x5a28f1*/
    LODWORD(v62) = v5 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a2901*/
  v8 = v7; /*0x5a2906*/
  if ( v7 ) /*0x5a290d*/
  {
    v7[3] = 0; /*0x5a2916*/
    v7[4] = -1; /*0x5a291a*/
    *v7 = 0; /*0x5a2921*/
    v7[1] = v5; /*0x5a2923*/
    v9 = __2_YAPAXI_Z(40 * a2 + 4); /*0x5a2926*/
    v10 = v8[1]; /*0x5a292b*/
    v8[2] = (int)v9; /*0x5a292e*/
    v11 = 0; /*0x5a2934*/
    if ( v10 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v11; /*0x5a293d*/
        *(_DWORD *)(v8[2] + 4 * v11 - 4) = 0; /*0x5a293e*/
      }
      while ( v11 <= v8[1] ); /*0x5a2947*/
    }
  }
  else
  {
    v8 = 0; /*0x5a294b*/
  }
  v48 = 0; /*0x5a2957*/
  v52 = *(_DWORD *)a1; /*0x5a295e*/
  v12 = 0; /*0x5a2965*/
  v54 = 0; /*0x5a296a*/
  v60 = a4 != 0 ? 27 : 102;
  v13 = *v8 < 0; /*0x5a2974*/
  v55 = 0; /*0x5a2976*/
  if ( !v13 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v12; /*0x5a297f*/
      *(_DWORD *)(v8[2] + 4 * v12 - 4) = 0; /*0x5a2980*/
    }
    while ( v12 <= *v8 ); /*0x5a2988*/
  }
  *v8 = 0; /*0x5a298d*/
  v49 = 0; /*0x5a2991*/
  if ( a2 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( v55 < 10 ) /*0x5a29a6*/
  {
    if ( v4 ) /*0x5a29b0*/
    {
      v16 = (char *)Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *v8; *(_DWORD *)(v8[2] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *v8 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext(&dword_87F7E8); j; j = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a29e4*/
      {
        v58 = *(_DWORD *)(j + 36); /*0x5a29e9*/
        *((_DWORD *)dword_ABED10 + 20 * (__int16)v58 + 20 * g_MapCellWidth * SHIWORD(v58) + 15) = 0; /*0x5a2a0a*/
      }
      v16 = (char *)Block; /*0x5a2a1f*/
      v53 = 1; /*0x5a2a25*/
      *(_DWORD *)Block = *(_DWORD *)a1; /*0x5a2a2f*/
      *((_DWORD *)v16 + 1) = 0; /*0x5a2a31*/
      *((_DWORD *)dword_ABED10 + 20 * *a1 + 20 * g_MapCellWidth * a1[1] + 15) = a3; /*0x5a2a56*/
      v17 = *v8 + 1; /*0x5a2a5f*/
      v59 = *((float *)v16 + 1); /*0x5a2a62*/
      v18 = v17 >> 1; /*0x5a2a69*/
      if ( v17 < v8[1] ) /*0x5a2a6d*/
      {
        if ( v17 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            v19 = v8[2]; /*0x5a2a74*/
            v20 = *(_DWORD *)(v19 + 4 * v18); /*0x5a2a77*/
            if ( *(float *)(v20 + 4) <= (double)v59 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(_DWORD *)(v19 + 4 * v17) = v20; /*0x5a2a88*/
            v17 = v18; /*0x5a2a8b*/
            v18 >>= 1; /*0x5a2a8d*/
          }
          while ( v17 > 1 ); /*0x5a2a92*/
          v16 = (char *)Block; /*0x5a2a94*/
        }
        *(_DWORD *)(v8[2] + 4 * v17) = v16; /*0x5a2a9b*/
        v21 = v8[3]; /*0x5a2aa0*/
        ++*v8; /*0x5a2aa6*/
        if ( (unsigned int)v16 > v21 ) /*0x5a2aa8*/
          v8[3] = (int)v16; /*0x5a2aaa*/
        if ( (unsigned int)v16 < v8[4] ) /*0x5a2ab0*/
          v8[4] = (int)v16; /*0x5a2ab2*/
      }
      if ( *v8 ) /*0x5a2ab5*/
      {
        v22 = v8[2]; /*0x5a2ac1*/
        v23 = *(__int16 **)(v22 + 4); /*0x5a2ac9*/
        *(_DWORD *)(v22 + 4) = *(_DWORD *)(v22 + 4 * *v8); /*0x5a2acc*/
        *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown(v8, 1); /*0x5a2ae2*/
        v49 = v23; /*0x5a2ae7*/
      }
      else
      {
        v49 = 0; /*0x5a2abb*/
      }
      v4 = v49; /*0x5a2af2*/
      v24 = *(_DWORD *)a1; /*0x5a2af7*/
      v48 = 0; /*0x5a2af9*/
      ++v55; /*0x5a2afe*/
      v52 = v24; /*0x5a2b02*/
    }
    v25 = CellCoord::To_CellObj(&dword_87F7E8, v4); /*0x5a2b17*/
    v26 = *v4 + g_MapCellWidth * v4[1]; /*0x5a2b27*/
    v50 = v25; /*0x5a2b2f*/
    if ( *((_BYTE *)dword_ABED10 + 80 * v26 + 69) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v48 ) /*0x5a2b4a*/
    {
      v48 = 1; /*0x5a2b52*/
      v52 = *(_DWORD *)v4; /*0x5a2b57*/
      for ( k = 0; k <= *v8; *(_DWORD *)(v8[2] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *v8 = 0; /*0x5a2b78*/
      v53 = 0; /*0x5a2b80*/
      if ( !a4 ) /*0x5a2b88*/
      {
        do /*0x5a2bbc*/
        {
          v63 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2b98*/
          v28 = Math::RoundToInt((double)v63 * 6.984919311242392e-10 + 1.0); /*0x5a2bb4*/
        }
        while ( v28 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, "TIBTRE0%d", (int)v28 % 10); /*0x5a2bd1*/
        v29 = (void **)__2_YAPAXI_Z(0xE0u); /*0x5a2be0*/
        if ( v29 ) /*0x5a2be7*/
        {
          v30 = Terrain::LookupByName(Buffer); /*0x5a2bed*/
          TerrainClass::Construct(v29, *((void **)dword_A8E31C + v30), (__int16 *)&v52); /*0x5a2c05*/
        }
        v16 = (char *)Block; /*0x5a2c0a*/
        v25 = v50; /*0x5a2c0e*/
      }
    }
    if ( v25[17] == -1 ) /*0x5a2c16*/
    {
      do /*0x5a2c40*/
      {
        v64 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2c22*/
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
    v33 = (float *)&v16[8 * v53]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      v34 = v56 & 7; /*0x5a2c7c*/
      v35 = v4[1] + HIWORD(dword_89F688[v34]); /*0x5a2c95*/
      LOWORD(v57) = *v4 + LOWORD(dword_89F688[v34]); /*0x5a2c99*/
      HIWORD(v57) = v35; /*0x5a2ca2*/
      v50 = v57; /*0x5a2cab*/
      if ( !LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v50, 1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v36 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x5a2cd1*/
      v58 = (int)v36; /*0x5a2cd5*/
      if ( Cell::IsEmpty(v36) ) /*0x5a2cd9*/
      {
        if ( v36[17] == -1 ) /*0x5a2cea*/
        {
          v37 = v50; /*0x5a2cf8*/
          if ( *((_DWORD *)dword_ABED10 + 20 * (__int16)v50 + 20 * g_MapCellWidth * SHIWORD(v50) + 15) != a3 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v36 = (_DWORD *)v58; /*0x5a2d16*/
        }
        if ( *((_BYTE *)v36 + 286) < 0xBu && BuildingClass::FindByCellHash(v36) != -1 ) /*0x5a2d31*/
        {
          v37 = v50; /*0x5a2d37*/
LABEL_58:
          v38 = SHIWORD(v50); /*0x5a2d3b*/
          *(_DWORD *)v33 = v37; /*0x5a2d40*/
          v58 = ((__int16)v52 - (__int16)v37) * ((__int16)v52 - (__int16)v37) /*0x5a2d62*/
              + (SHIWORD(v52) - v38) * (SHIWORD(v52) - v38);
          v62 = Math::Sqrt((double)v58); /*0x5a2d72*/
          v65 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2d83*/
          v39 = SHIWORD(v50); /*0x5a2d93*/
          v40 = (__int16)v50; /*0x5a2d9e*/
          v41 = v33; /*0x5a2da9*/
          v33 += 2; /*0x5a2dab*/
          v58 = (int)v41; /*0x5a2dae*/
          *(v33 - 1) = (double)v65 * 5.0 * 2.328306437080797e-10 + v62; /*0x5a2db6*/
          *((_DWORD *)dword_ABED10 + 20 * v40 + 20 * g_MapCellWidth * v39 + 15) = a3; /*0x5a2dd1*/
          v42 = v41[1]; /*0x5a2dd9*/
          ++v53; /*0x5a2ddd*/
          v43 = *v8 + 1; /*0x5a2de3*/
          v61 = v42; /*0x5a2de4*/
          v44 = v43 >> 1; /*0x5a2ded*/
          if ( v43 < v8[1] ) /*0x5a2df1*/
          {
            for ( ; v43 > 1; v44 >>= 1 ) /*0x5a2df6*/
            {
              LODWORD(v62) = *(_DWORD *)(v8[2] + 4 * v44); /*0x5a2dfe*/
              if ( *(float *)(LODWORD(v62) + 4) <= (double)v61 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(_DWORD *)(v8[2] + 4 * v43) = LODWORD(v62); /*0x5a2e17*/
              v41 = (float *)v58; /*0x5a2e1a*/
              v43 = v44; /*0x5a2e1e*/
            }
            *(_DWORD *)(v8[2] + 4 * v43) = v41; /*0x5a2e2a*/
            v45 = v8[3]; /*0x5a2e2f*/
            ++*v8; /*0x5a2e35*/
            if ( (unsigned int)v41 > v45 ) /*0x5a2e37*/
              v8[3] = (int)v41; /*0x5a2e39*/
            if ( (unsigned int)v41 < v8[4] ) /*0x5a2e3f*/
              v8[4] = (int)v41; /*0x5a2e41*/
          }
        }
      }
      v4 = v49; /*0x5a2e44*/
LABEL_67:
      ++v56; /*0x5a2e48*/
    }
    while ( v56 < 8 ); /*0x5a2e54*/
    if ( *v8 ) /*0x5a2e5a*/
    {
      v46 = v8[2]; /*0x5a2e66*/
      v47 = *(__int16 **)(v46 + 4); /*0x5a2e6e*/
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v46 + 4 * *v8); /*0x5a2e71*/
      *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2e79*/
      Heap::SiftDown(v8, 1); /*0x5a2e87*/
      v49 = v47; /*0x5a2e8c*/
    }
    else
    {
      v49 = 0; /*0x5a2e60*/
    }
    if ( v54 < a2 ) /*0x5a2e99*/
    {
      v4 = v49; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
LABEL_72:
  __3_YAXPAX_Z(Block); /*0x5a2e9f*/
  if ( v8 ) /*0x5a2eae*/
  {
    __3_YAXPAX_Z((void *)v8[2]); /*0x5a2eb4*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a2f3f*/
}



// ==== 0x005A2F50  ObjectClass::SmoothTerrainMap  this=ObjectClass  sig=csp ====
void __thiscall SmoothTerrainMap(ObjectClass *this)
{
  double v1; // st7
  int v2; // ebx
  int v5; // esi
  __int16 v7; // cx
  __int16 v8; // ax
  int v9; // ebp
  int v12; // edx
  int v15; // ecx
  int v16; // edi
  bool v39; // zf
  int v42; // eax
  int v44; // eax
  __int16 v46; // [esp+8h] [ebp-78h]
  int v49; // [esp+14h] [ebp-6Ch]
  int v50; // [esp+18h] [ebp-68h]
  int v51; // [esp+1Ch] [ebp-64h]
  int v52; // [esp+1Ch] [ebp-64h]
  int v53; // [esp+1Ch] [ebp-64h]
  int v54; // [esp+20h] [ebp-60h]
  double v55; // [esp+28h] [ebp-58h]
  __int64 v56; // [esp+30h] [ebp-50h]
  double v59; // [esp+40h] [ebp-40h]
  __int64 v60; // [esp+48h] [ebp-38h]
  double v61; // [esp+50h] [ebp-30h]
  double v62; // [esp+58h] [ebp-28h]
  double v63; // [esp+60h] [ebp-20h]
  __int64 v65; // [esp+68h] [ebp-18h]

  __asm { fild dword ptr [ecx+44h] } /*0x5a2f59*/
  __asm { fld st }
  v2 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f67*/
  __asm /*0x5a2f6a*/
  {
    fmul ds:dbl_7EDAA8
    fadd ds:dbl_7E3860
    fstp [esp+80h+var_28]
    fld st
    fmul ds:dbl_7EDAA0
  }
  v51 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f84*/
  __asm /*0x5a2f88*/
  {
    fstp [esp+88h+var_38]
    fmul ds:dbl_7E44E8
    fstp [esp+88h+var_8]
    fld [esp+88h+var_38]
    fcomp ds:dbl_7ED7C8
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x5a2fa8*/
    return; /*0x5a2fa8*/
  _EDI = 0; /*0x5a2fae*/
  if ( v2 <= 0 ) /*0x5a2fb2*/
    return; /*0x5a2fb2*/
  v5 = 0; /*0x5a2fb8*/
  v50 = g_MapCellWidth * g_MapCellWidth; /*0x5a2fba*/
  v49 = 0; /*0x5a2fbe*/
  do /*0x5a3383*/
  {
    _ESI = (double *)(g_MissionQueueFrame.localVariables[163] + v5); /*0x5a2fc7*/
    v54 = *(_DWORD *)_ESI; /*0x5a2fcb*/
    if ( !*(_DWORD *)_ESI ) /*0x5a2fd6*/
      goto LABEL_49; /*0x5a2fd6*/
    v7 = *(_DWORD *)_ESI - 1; /*0x5a2fe1*/
    v46 = HIWORD(v54) - 1; /*0x5a2fe3*/
    *((_DWORD *)_ESI + 4) = 0; /*0x5a2fe7*/
    v8 = HIWORD(v54) - 1; /*0x5a2fed*/
    *((_DWORD *)_ESI + 5) = 0; /*0x5a2ff0*/
    v9 = (__int16)(HIWORD(v54) - 1) + v7; /*0x5a2ff9*/
    v59 = 0.0; /*0x5a2ffc*/
    v55 = 0.0; /*0x5a300e*/
    if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x5a3034*/
      && v7 - v8 < g_MissionQueueFrame.localVariables[160]
      && v8 - v7 < g_MissionQueueFrame.localVariables[160]
      && v9 <= g_MissionQueueFrame.localVariables[161] )
    {
      _EDX = g_MissionQueueFrame.localVariables[163]; /*0x5a3047*/
      _EAX = 80 * (v7 + g_MapCellWidth * v46); /*0x5a3050*/
      __asm /*0x5a3053*/
      {
        fld qword ptr [eax+edx+8]
        fstp [esp+88h+var_40]
      }
    }
    v12 = SHIWORD(v54) + v7; /*0x5a3063*/
    if ( v12 <= g_MissionQueueFrame.localVariables[160] /*0x5a3080*/
      || v7 - SHIWORD(v54) >= g_MissionQueueFrame.localVariables[160]
      || SHIWORD(v54) - v7 >= g_MissionQueueFrame.localVariables[160]
      || v12 > g_MissionQueueFrame.localVariables[161] )
    {
      *((_DWORD *)_ESI + 2) = *((_DWORD *)_ESI + 2); /*0x5a30c2*/
      v15 = *((_DWORD *)_ESI + 3); /*0x5a30c5*/
      *((_DWORD *)_ESI + 4) = v60; /*0x5a30cc*/
      *((_DWORD *)_ESI + 3) = v15; /*0x5a30cf*/
      *((_DWORD *)_ESI + 5) = HIDWORD(v60); /*0x5a30d2*/
    }
    else
    {
      __asm { fld qword ptr [esi+8] } /*0x5a3089*/
      _EAX = g_MissionQueueFrame.localVariables[163] + 80 * (v7 + g_MapCellWidth * SHIWORD(v54)); /*0x5a309a*/
      __asm /*0x5a309c*/
      {
        fadd qword ptr [eax+8]
        fstp qword ptr [esi+8]
      }
      _ESI[1] = _RT1; /*0x5a309f*/
      *((_DWORD *)_ESI + 4) = *(_DWORD *)(_EAX + 16); /*0x5a30a5*/
      *((_DWORD *)_ESI + 5) = *(_DWORD *)(_EAX + 20); /*0x5a30ab*/
      __asm /*0x5a30ae*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fstp [esp+88h+var_58]
      }
    }
    v16 = v46 + (__int16)v54; /*0x5a30e5*/
    if ( v16 <= g_MissionQueueFrame.localVariables[160] /*0x5a3102*/
      || (__int16)v54 - v46 >= g_MissionQueueFrame.localVariables[160]
      || v46 - (__int16)v54 >= g_MissionQueueFrame.localVariables[160]
      || v16 > g_MissionQueueFrame.localVariables[161] )
    {
      __asm { fld [esp+88h+var_38] } /*0x5a313e*/
      __asm { fadd qword ptr [esi+10h] }
      *((_DWORD *)_ESI + 2) = *((_DWORD *)_ESI + 2); /*0x5a3148*/
      *((_DWORD *)_ESI + 3) = *((_DWORD *)_ESI + 3); /*0x5a314e*/
      __asm { fstp qword ptr [esi+10h] } /*0x5a3151*/
      _ESI[2] = _RT1; /*0x5a3151*/
    }
    else
    {
      _EAX = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v54 + g_MapCellWidth * v46); /*0x5a3119*/
      __asm /*0x5a311b*/
      {
        fld qword ptr [eax+8]
        fadd qword ptr [esi+8]
        fstp qword ptr [esi+8]
      }
      _ESI[1] = _RT1; /*0x5a3121*/
      __asm /*0x5a3124*/
      {
        fld qword ptr [eax+10h]
        fadd qword ptr [esi+10h]
        fstp qword ptr [esi+10h]
      }
      _ESI[2] = _RT1; /*0x5a312a*/
      __asm /*0x5a312d*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fadd [esp+88h+var_58]
        fstp [esp+88h+var_58]
      }
    }
    __asm /*0x5a3154*/
    {
      fld qword ptr [esi+8]
      fmul ds:dbl_7E1738
      fst qword ptr [esi+8]
    }
    _ESI[1] = _RT1; /*0x5a315d*/
    __asm /*0x5a3160*/
    {
      fld qword ptr [esi+10h]
      fmul ds:dbl_7E1738
      fstp qword ptr [esi+10h]
    }
    _ESI[2] = _RT1; /*0x5a3169*/
    __asm /*0x5a316c*/
    {
      fld [esp+88h+var_58]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5a317b*/
    {
      __asm /*0x5a318f*/
      {
        fld [esp+88h+var_58]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a319e*/
      {
        __asm /*0x5a31a0*/
        {
          fld [esp+88h+var_28]
          fchs
          fstp [esp+88h+var_58]
        }
      }
    }
    else
    {
      v55 = v62; /*0x5a3185*/
    }
    if ( *((_BYTE *)_ESI + 69) ) /*0x5a31aa*/
    {
      __asm /*0x5a31b1*/
      {
        fcom ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a31bc*/
      {
        __asm /*0x5a31be*/
        {
          fstp st
          fld ds:dbl_7E2800
        }
      }
      __asm { fstp qword ptr [esi+8] } /*0x5a31c6*/
      _ESI[1] = _RT1; /*0x5a31c6*/
      *((_DWORD *)_ESI + 4) = 1202590843; /*0x5a31c9*/
      *((_DWORD *)_ESI + 5) = 1063549665; /*0x5a31d0*/
    }
    else
    {
      __asm { fstp st } /*0x5a31d9*/
    }
    __asm /*0x5a31db*/
    {
      fld qword ptr [esi+10h]
      fchs
      fstp [esp+88h+var_48]
      fld [esp+88h+var_8]
      fsub qword ptr [esi+10h]
    }
    v63 = 0.0; /*0x5a31fd*/
    v61 = 0.025; /*0x5a320d*/
    __asm /*0x5a3211*/
    {
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7ED7C8
      fchs
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a3226*/
      goto LABEL_33; /*0x5a3226*/
    __asm /*0x5a3228*/
    {
      fld ds:dbl_7ED7C8
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a3237*/
    {
LABEL_33:
      __asm /*0x5a3239*/
      {
        fld qword ptr [esp+88h+var_78]
        fsub [esp+88h+var_48]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_30]
        fadd [esp+88h+var_48]
        fstp [esp+88h+var_20]
      }
    }
    do /*0x5a3281*/
    {
      do /*0x5a3272*/
      {
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3258*/
        __asm /*0x5a325d*/
        {
          fmul [esp+88h+var_30]
          fadd [esp+88h+var_20]
          fst [esp+88h+var_18]
          fcomp [esp+88h+var_48]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a3272*/
      __asm /*0x5a3274*/
      {
        fld [esp+88h+var_18]
        fcomp qword ptr [esp+88h+var_78]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a3281*/
    __asm /*0x5a3283*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+10h]
      fst [esp+88h+var_18]
      fstp qword ptr [esi+10h]
    }
    _ESI[2] = _RT1; /*0x5a328e*/
    __asm /*0x5a3291*/
    {
      fld ds:dbl_7EDA98
      fsub qword ptr [esi+8]
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7E1708
      fsub qword ptr [esi+8]
      fstp [esp+88h+var_48]
      fld [esp+88h+var_58]
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a32b8*/
    {
      __asm { fld qword ptr [esp+88h+var_78] } /*0x5a32ba*/
    }
    else
    {
      __asm /*0x5a32c0*/
      {
        fld [esp+88h+var_58]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a32cd*/
        __asm { fld [esp+88h+var_58] } /*0x5a32d5*/
      else
        __asm { fld [esp+88h+var_48] } /*0x5a32cf*/
    }
    __asm { fst [esp+88h+var_10] } /*0x5a32e1*/
    v56 = v65; /*0x5a32e5*/
    __asm /*0x5a32ed*/
    {
      fld st
      fsub [esp+88h+var_50]
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a32fc*/
    {
      __asm { fstp st } /*0x5a3313*/
LABEL_45:
      __asm /*0x5a3315*/
      {
        fld [esp+88h+var_48]
        fsub qword ptr [esp+88h+var_78]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_50]
        fadd qword ptr [esp+88h+var_78]
        fstp [esp+88h+var_10]
      }
      goto LABEL_46; /*0x5a332b*/
    }
    __asm /*0x5a32fe*/
    {
      fld [esp+88h+var_50]
      fadd st, st(1)
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x100) != 0 ) /*0x5a330f*/
      goto LABEL_45; /*0x5a330f*/
    do /*0x5a335d*/
    {
      do /*0x5a334e*/
      {
LABEL_46:
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a332f*/
        __asm /*0x5a3339*/
        {
          fmul [esp+88h+var_50]
          fadd [esp+88h+var_10]
          fst [esp+88h+var_18]
          fcomp qword ptr [esp+88h+var_78]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a334e*/
      __asm /*0x5a3350*/
      {
        fld [esp+88h+var_18]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a335d*/
    __asm /*0x5a335f*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+8]
    }
    v2 = v51; /*0x5a3366*/
    _EDI = 0; /*0x5a336a*/
    __asm { fstp qword ptr [esi+8] } /*0x5a336c*/
    _ESI[1] = _RT1; /*0x5a336c*/
LABEL_49:
    v5 = v49 + 80; /*0x5a336f*/
    v39 = v50 == 1; /*0x5a337a*/
    v49 += 80; /*0x5a337b*/
    --v50; /*0x5a337f*/
  }
  while ( !v39 ); /*0x5a3383*/
  if ( v2 > 0 ) /*0x5a338b*/
  {
    while ( 1 ) /*0x5a338d*/
    {
      _EAX = g_MissionQueueFrame.localVariables[163]; /*0x5a338d*/
      __asm /*0x5a3392*/
      {
        fld qword ptr [edi+eax+8]
        fcomp ds:dbl_7E2800
      }
      _ESI = (double *)(_EDI + g_MissionQueueFrame.localVariables[163] + 8); /*0x5a339c*/
      __asm /*0x5a33a0*/
      {
        fld qword ptr [esi]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x5a33a7*/
        break; /*0x5a33a7*/
      __asm /*0x5a33be*/
      {
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a33c9*/
      {
        __asm /*0x5a33cb*/
        {
          fld qword ptr [esi]
          fadd ds:dbl_7E1738
        }
        LOWORD(v44) = Math::RoundToInt(v1); /*0x5a33d3*/
        v53 = v44; /*0x5a33d8*/
        __asm { fild [esp+88h+var_64] } /*0x5a33dc*/
        goto LABEL_55; /*0x5a33dc*/
      }
LABEL_56:
      _EDI += 80; /*0x5a33e2*/
      if ( !--v2 ) /*0x5a33e6*/
        return; /*0x5a33e6*/
    }
    __asm { fsub ds:dbl_7E1738 } /*0x5a33a9*/
    LOWORD(v42) = Math::RoundToInt(v1); /*0x5a33af*/
    v52 = v42; /*0x5a33b4*/
    __asm { fild [esp+88h+var_64] } /*0x5a33b8*/
LABEL_55:
    __asm { fstp qword ptr [esi] } /*0x5a33e0*/
    *_ESI = _RT1; /*0x5a33e0*/
    goto LABEL_56; /*0x5a33e0*/
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a33f9*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a3403*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x5a340c*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      v2 = dword_ABED04; /*0x5a3424*/
      v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        v4 = v3 & 7; /*0x5a3431*/
        v16 = i[9]; /*0x5a3434*/
        v5 = LOWORD(dword_89F688[v4]) + v16; /*0x5a3438*/
        LOWORD(v4) = HIWORD(dword_89F688[v4]); /*0x5a3447*/
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = HIWORD(v16) + v4; /*0x5a3455*/
        v16 = v17; /*0x5a345e*/
        v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= dword_ABED08 ) /*0x5a3483*/
        {
          v7 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a348f*/
          if ( Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            v8 = 80 * ((__int16)v16 + g_MapCellWidth * SHIWORD(v16)); /*0x5a34cb*/
            *(_DWORD *)((char *)dword_ABED10 + v8 + 8) = 0; /*0x5a34ce*/
            *(_DWORD *)((char *)dword_ABED10 + v8 + 12) = 1071644672; /*0x5a34dc*/
            *((_BYTE *)dword_ABED10 + 80 * (__int16)v16 + 80 * g_MapCellWidth * SHIWORD(v16) + 69) = 1; /*0x5a3503*/
            goto LABEL_24; /*0x5a3508*/
          }
          v2 = dword_ABED04; /*0x5a349f*/
        }
        if ( ++v3 >= 8 ) /*0x5a34a9*/
          goto LABEL_24; /*0x5a34a9*/
      }
    }
    if ( CellLand::IsBuildable((int)i) ) /*0x5a350f*/
    {
      v9 = dword_ABED04; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        v11 = j & 7; /*0x5a3529*/
        v16 = i[9]; /*0x5a352c*/
        v12 = HIWORD(v16) + HIWORD(dword_89F688[v11]); /*0x5a3543*/
        LOWORD(v18) = v16 + LOWORD(dword_89F688[v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        v16 = v18; /*0x5a3559*/
        v13 = v12; /*0x5a3560*/
        v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= dword_ABED08 ) /*0x5a357e*/
        {
          v15 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a358a*/
          if ( Cell::IsEmpty(v15) ) /*0x5a3591*/
          {
            *((_BYTE *)dword_ABED10 + 80 * (__int16)v16 + 80 * g_MapCellWidth * SHIWORD(v16) + 69) = 1; /*0x5a35ca*/
            break; /*0x5a35ca*/
          }
          v9 = dword_ABED04; /*0x5a359a*/
        }
      }
    }
LABEL_24:
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/
}



// ==== 0x005A35F0  ObjectClass::GenerateTerrainHeightMap  this=ObjectClass  sig=csp ====
int __thiscall GenerateTerrainHeightMap(ObjectClass *this)
{
  int v2; // esi
  int v3; // esi
  ObjectClass *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // esi
  int v13; // edi
  int result; // eax
  char v15; // al
  char v16; // bl
  int v17; // ebp
  _WORD *v18; // esi
  int v19; // eax
  __int16 v20; // cx
  _WORD *v21; // esi
  int v22; // ebp
  __int16 v23; // dx
  _BYTE *v24; // eax
  char v25; // dl
  ObjectClass *v26; // [esp+0h] [ebp-48h]
  ObjectClass *v27; // [esp+0h] [ebp-48h]
  char v28; // [esp+13h] [ebp-35h]
  int v29; // [esp+14h] [ebp-34h]
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  int v32; // [esp+18h] [ebp-30h]
  int _6B4100; // [esp+1Ch] [ebp-2Ch]
  int v34; // [esp+1Ch] [ebp-2Ch]
  __int16 v35[4]; // [esp+20h] [ebp-28h] BYREF
  _DWORD v36[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v37[4]; // [esp+38h] [ebp-10h]

  GenerateTerrainHeightMapInternal(); /*0x5a35f9*/
  SmoothTerrainMap(this); /*0x5a3600*/
  InitSlaveManagerGrid(v26); /*0x5a3605*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v2 = 0; /*0x5a361a*/
    v31 = g_MapCellWidth * g_MapCellWidth; /*0x5a361c*/
    v29 = 0; /*0x5a3620*/
    do
    {
      v3 = g_MissionQueueFrame.localVariables[163] + v2; /*0x5a3629*/
      if ( *(_WORD *)v3 || *(_WORD *)(v3 + 2) )
      {
        v4 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v3); /*0x5a3643*/
        *(double *)v35 = (double)SHIBYTE(v4[1].health) + *(double *)(v3 + 8); /*0x5a3659*/
        _6B4100 = Map_Get_6B4100(v4); /*0x5a3662*/
        LOWORD(v5) = Math::RoundToInt(*(double *)v35 - (double)_6B4100); /*0x5a366e*/
        v6 = v5; /*0x5a3673*/
        v7 = abs32(v5); /*0x5a3678*/
        v8 = v6 >= 0 ? 1 : -1;
        if ( v7 > 0 ) /*0x5a368a*/
        {
          v9 = v7; /*0x5a368c*/
          do /*0x5a36a5*/
          {
            v10 = Map_Helper_6B4240((int)v4, v8); /*0x5a3692*/
            ComputeTerrainFlowField(v8, 0, *(_DWORD *)v3, v10); /*0x5a369f*/
            --v9; /*0x5a36a4*/
          }
          while ( v9 ); /*0x5a36a5*/
        }
      }
      v2 = v29 + 80; /*0x5a36af*/
      v11 = v31 == 1; /*0x5a36b2*/
      v29 += 80; /*0x5a36b3*/
      --v31; /*0x5a36b7*/
    }
    while ( !v11 );
  }
  ProcessSlaveManagerTerrain(v27); /*0x5a36c1*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a36cb*/
  v12 = 0; /*0x5a36da*/
  v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a36dc*/
  v36[0] = 0; /*0x5a36f1*/
  result = 65537; /*0x5a370d*/
  v36[1] = 1; /*0x5a3711*/
  v36[2] = 65537; /*0x5a3725*/
  v36[3] = 0x10000; /*0x5a3729*/
  v37[0] = 11; /*0x5a372d*/
  v37[1] = 12; /*0x5a3735*/
  v37[2] = 9; /*0x5a373d*/
  v37[3] = 10; /*0x5a3745*/
  if ( v13 ) /*0x5a374d*/
  {
    while ( 1 ) /*0x5a375a*/
    {
      v15 = *(_BYTE *)(v13 + 284); /*0x5a375a*/
      v16 = 0; /*0x5a3760*/
      v28 = 1; /*0x5a3764*/
      if ( v15 == 5 ) /*0x5a3769*/
        break; /*0x5a3769*/
      if ( v15 == 11 ) /*0x5a37c9*/
      {
        v16 = 1; /*0x5a37cf*/
        do /*0x5a3823*/
        {
          v20 = HIWORD(v36[v12]); /*0x5a37d4*/
          *(_DWORD *)v35 = *(_DWORD *)(v13 + 36); /*0x5a37d9*/
          LOWORD(v30) = LOWORD(v36[v12]) + v35[0]; /*0x5a37e7*/
          HIWORD(v30) = v35[1] + v20; /*0x5a37f0*/
          *(_DWORD *)v35 = v30; /*0x5a37ff*/
          if ( *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35) + 284) != v37[v12] ) /*0x5a3816*/
            v28 = 0; /*0x5a3818*/
          ++v12; /*0x5a381d*/
        }
        while ( v12 < 4 ); /*0x5a3823*/
        goto LABEL_21; /*0x5a3823*/
      }
LABEL_24:
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3893*/
      v13 = result; /*0x5a389d*/
      v12 = 0; /*0x5a389f*/
      if ( !result ) /*0x5a38a3*/
        return result; /*0x5a38a3*/
    }
    v17 = 0; /*0x5a376b*/
    v18 = v36; /*0x5a376d*/
    do /*0x5a37c3*/
    {
      v19 = *(_DWORD *)(v13 + 36); /*0x5a3771*/
      LOWORD(v32) = v19 + *v18; /*0x5a3787*/
      HIWORD(v32) = HIWORD(v19) + v18[1]; /*0x5a3790*/
      *(_DWORD *)v35 = v32; /*0x5a379f*/
      if ( *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35) + 284) != v17 + 5 ) /*0x5a37b5*/
        v28 = 0; /*0x5a37b7*/
      ++v17; /*0x5a37bc*/
      v18 += 2; /*0x5a37bd*/
    }
    while ( v17 < 4 ); /*0x5a37c3*/
LABEL_21:
    if ( v28 ) /*0x5a382b*/
    {
      v21 = v36; /*0x5a382d*/
      v22 = 4; /*0x5a3831*/
      do /*0x5a3891*/
      {
        v23 = v21[1]; /*0x5a3839*/
        *(_DWORD *)v35 = *(_DWORD *)(v13 + 36); /*0x5a383d*/
        LOWORD(v34) = *v21 + v35[0]; /*0x5a384d*/
        HIWORD(v34) = v35[1] + v23; /*0x5a3853*/
        *(_DWORD *)v35 = v34; /*0x5a3861*/
        v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35); /*0x5a3865*/
        v25 = v24[283]; /*0x5a386a*/
        v21 += 2; /*0x5a3870*/
        --v22; /*0x5a3875*/
        *((_DWORD *)v24 + 14) = 0xFFFF; /*0x5a3876*/
        v24[282] = 0; /*0x5a387d*/
        v24[284] = 0; /*0x5a3884*/
        v24[283] = v16 + v25; /*0x5a388b*/
      }
      while ( v22 ); /*0x5a3891*/
    }
    goto LABEL_24; /*0x5a3891*/
  }
  return result; /*0x5a38a9*/
}



// ==== 0x005A38C0  CellClass::Reset  this=CellClass  sig=csp ====
int __thiscall CellClass::Reset(CellClass *this)
{
  int result; // eax
  CellClass *v3; // ebx
  int v4; // esi
  int smudgeTypeIndex; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int j; // [esp+14h] [ebp-Ch]
  double i; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a38d4*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a38de*/
  v3 = (CellClass *)result; /*0x5a38e6*/
  for ( i = (double)this->CellClass_field_5C * 0.01; result; v3 = (CellClass *)result ) /*0x5a38f4*/
  {
    v4 = g_MissionQueueFrame.localVariables[163] /*0x5a3920*/
       + 80 * ((__int16)v3->smudgeTypeIndex + g_MapCellWidth * (__int16)HIWORD(v3->smudgeTypeIndex));
    if ( (unsigned __int8)CellClass::IsTerrainType(v3) ) /*0x5a3922*/
    {
      smudgeTypeIndex = v3->smudgeTypeIndex; /*0x5a392f*/
      v6 = (__int16)smudgeTypeIndex - 2; /*0x5a3938*/
      for ( j = v6; v6 < (__int16)smudgeTypeIndex + 3; j = v6 ) /*0x5a3944*/
      {
        v7 = SHIWORD(smudgeTypeIndex) - 2; /*0x5a3957*/
        if ( v7 < SHIWORD(smudgeTypeIndex) + 3 ) /*0x5a3964*/
        {
          v8 = (__int16)v6; /*0x5a3966*/
          do /*0x5a39d7*/
          {
            v9 = (__int16)v7 + v8; /*0x5a3972*/
            if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x5a3997*/
              && v8 - (__int16)v7 < g_MissionQueueFrame.localVariables[160]
              && (__int16)v7 - v8 < g_MissionQueueFrame.localVariables[160]
              && v9 <= g_MissionQueueFrame.localVariables[161] )
            {
              *(_DWORD *)(v4 + 40) = 1202590843; /*0x5a39a4*/
              *(_DWORD *)(v4 + 44) = 1064598241; /*0x5a39a7*/
              *(_DWORD *)(v4 + 32) = 0; /*0x5a39b6*/
              *(_DWORD *)(v4 + 36) = 0; /*0x5a39b9*/
              *(double *)(v4 + 24) = 0.02 * i * 10.0; /*0x5a39c2*/
            }
            ++v7; /*0x5a39c8*/
          }
          while ( v7 < (__int16)HIWORD(v3->smudgeTypeIndex) + 3 ); /*0x5a39d7*/
          v6 = j; /*0x5a39d9*/
        }
        smudgeTypeIndex = v3->smudgeTypeIndex; /*0x5a39dd*/
        ++v6; /*0x5a39e0*/
      }
    }
    else if ( *(double *)(v4 + 40) == 0.0 ) /*0x5a3a03*/
    {
      *(_DWORD *)(v4 + 40) = 1202590843; /*0x5a3a10*/
      *(_DWORD *)(v4 + 44) = 1064598241; /*0x5a3a13*/
      *(double *)(v4 + 24) = 0.02 * i; /*0x5a3a20*/
      *(_DWORD *)(v4 + 32) = 1202590843; /*0x5a3a2f*/
      *(_DWORD *)(v4 + 36) = 1064598241; /*0x5a3a32*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3a3a*/
  }
  return result; /*0x5a3a49*/
}



// ==== 0x005A3AE0  RandomMap::PlaceResources  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceResources(RandomMap *this)
{
  double v1; // st7
  int i; // eax
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v9; // esi
  int v15; // eax
  int v21; // eax
  int v27; // eax
  CellClass *j; // eax
  int v29; // eax
  int v30; // ebp
  unsigned int v31; // edi
  int v32; // esi
  _WORD *v33; // eax
  Cell *v34; // eax
  int v35; // eax
  int v40; // eax
  void *v41; // eax
  int v42; // eax
  bool v43; // cc
  unsigned int v44; // esi
  unsigned int v45; // eax
  signed int v46; // ebp
  int result; // eax
  unsigned int v48; // edi
  unsigned int v49; // eax
  unsigned int v50; // esi
  _WORD *v51; // eax
  RandomMap *v52; // eax
  int v53; // esi
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  int v57; // [esp-10h] [ebp-78h]
  int v58; // [esp-Ch] [ebp-74h]
  int v59; // [esp-Ch] [ebp-74h]
  int v60; // [esp-8h] [ebp-70h]
  double v61; // [esp-8h] [ebp-70h]
  unsigned int v62; // [esp+14h] [ebp-54h]
  int v63; // [esp+14h] [ebp-54h]
  int v64; // [esp+14h] [ebp-54h]
  signed int v66; // [esp+18h] [ebp-50h]
  __int16 v67[2]; // [esp+1Ch] [ebp-4Ch] BYREF
  double v68; // [esp+20h] [ebp-48h]
  __int16 v69[2]; // [esp+2Ch] [ebp-3Ch] BYREF
  double v70; // [esp+30h] [ebp-38h] BYREF
  double v71; // [esp+38h] [ebp-30h] BYREF
  double v72; // [esp+40h] [ebp-28h]
  double v73; // [esp+48h] [ebp-20h]
  __int64 v74; // [esp+50h] [ebp-18h]
  double v75; // [esp+58h] [ebp-10h]
  __int64 v76; // [esp+60h] [ebp-8h]

  _ESI = this; /*0x5a3aec*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b0b*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v68) = *(_DWORD *)(i + 36); /*0x5a3b10*/
    *(_DWORD *)(80 * (SLOWORD(v68) + g_MapCellWidth * SWORD1(v68)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b47*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b62*/
    __asm /*0x5a3b6a*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v5) = Math::RoundToInt(v1); /*0x5a3b7a*/
    *(_DWORD *)v67 = v5; /*0x5a3b82*/
  }
  while ( v5 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b92*/
    __asm /*0x5a3b9a*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v6) = Math::RoundToInt(v1); /*0x5a3baa*/
    v62 = v6; /*0x5a3bb2*/
  }
  while ( v6 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3bc2*/
    __asm /*0x5a3bca*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v7) = Math::RoundToInt(v1); /*0x5a3bda*/
    *(_DWORD *)v69 = v7; /*0x5a3be2*/
  }
  while ( v7 > 0x28 ); /*0x5a3be6*/
  if ( v4 ) /*0x5a3bea*/
  {
    while ( 1 ) /*0x5a3bf9*/
    {
      LODWORD(v68) = *(_DWORD *)(v4 + 36); /*0x5a3bf9*/
      _EBP = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v68) + g_MapCellWidth * SWORD1(v68)); /*0x5a3c16*/
      if ( !(unsigned __int8)Cell::IsEmpty((Cell *)v4) /*0x5a3c47*/
        || *(_BYTE *)(v4 + 284)
        || *(_DWORD *)(v4 + 68) != -1
        || *(_DWORD *)(v4 + 228)
        || *(_BYTE *)(_EBP + 69) )
      {
        goto LABEL_35; /*0x5a3c4a*/
      }
      LODWORD(v68) = *(_DWORD *)(v4 + 36); /*0x5a3c58*/
      v9 = SLOWORD(v68) + (SWORD1(v68) << 9); /*0x5a3c67*/
      v74 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3c6e*/
      __asm /*0x5a3c76*/
      {
        fild [esp+68h+var_18]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+18h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3c88*/
        break; /*0x5a3c88*/
      *(_QWORD *)&v75 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3d49*/
      __asm /*0x5a3d51*/
      {
        fild [esp+68h+var_10]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+28h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3d63*/
      {
        __asm { fild [esp+68h+var_54] } /*0x5a3d69*/
        v72 = 20.0; /*0x5a3d6d*/
        __asm /*0x5a3d7d*/
        {
          fstp [esp+68h+var_30]
          fld [esp+68h+var_30]
          fsub ds:dbl_7E44C8
          fcomp ds:dbl_7EDAC8
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x5a3d96*/
          goto LABEL_23; /*0x5a3d96*/
        __asm /*0x5a3d98*/
        {
          fld [esp+68h+var_30]
          fadd ds:dbl_7E44C8
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3dad*/
        {
LABEL_23:
          v72 = 38.0; /*0x5a3daf*/
          v71 = 42.0; /*0x5a3dbf*/
        }
        do /*0x5a3e01*/
        {
          do /*0x5a3df0*/
          {
            Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3dd4*/
            __asm /*0x5a3dd9*/
            {
              fmul [esp+68h+var_28]
              fadd [esp+68h+var_30]
              fst [esp+68h+var_48]
              fcomp ds:dbl_7E3CC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a3df0*/
          __asm /*0x5a3df2*/
          {
            fld [esp+68h+var_48]
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a3e01*/
        __asm { fld [esp+68h+var_48] } /*0x5a3e03*/
        v60 = v9; /*0x5a3e08*/
        LOWORD(v21) = Math::RoundToInt(v1); /*0x5a3e09*/
        v58 = v21; /*0x5a3e14*/
        v57 = dword_ABB104; /*0x5a3e15*/
        goto LABEL_34; /*0x5a3e16*/
      }
      v76 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3e25*/
      __asm /*0x5a3e2d*/
      {
        fild [esp+68h+var_8]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+20h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3e3f*/
      {
        __asm { fild dword ptr [esp+68h+var_3C] } /*0x5a3e45*/
        v73 = 20.0; /*0x5a3e49*/
        __asm /*0x5a3e59*/
        {
          fstp [esp+68h+var_30]
          fld [esp+68h+var_30]
          fsub ds:dbl_7E44C8
          fcomp ds:dbl_7EDAC8
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x5a3e72*/
          goto LABEL_30; /*0x5a3e72*/
        __asm /*0x5a3e74*/
        {
          fld [esp+68h+var_30]
          fadd ds:dbl_7E44C8
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3e89*/
        {
LABEL_30:
          v73 = 38.0; /*0x5a3e8b*/
          v71 = 42.0; /*0x5a3e9b*/
        }
        do /*0x5a3edd*/
        {
          do /*0x5a3ecc*/
          {
            Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3eb0*/
            __asm /*0x5a3eb5*/
            {
              fmul [esp+68h+var_20]
              fadd [esp+68h+var_30]
              fst [esp+68h+var_48]
              fcomp ds:dbl_7E3CC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a3ecc*/
          __asm /*0x5a3ece*/
          {
            fld [esp+68h+var_48]
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a3edd*/
        __asm { fld [esp+68h+var_48] } /*0x5a3edf*/
        v60 = v9; /*0x5a3ee4*/
        LOWORD(v27) = Math::RoundToInt(v1); /*0x5a3ee5*/
        v58 = v27; /*0x5a3ef0*/
        v57 = dword_AA0E18; /*0x5a3ef1*/
        goto LABEL_34; /*0x5a3ef1*/
      }
LABEL_35:
      v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3efc*/
      if ( !v4 ) /*0x5a3f0a*/
      {
        _ESI = this; /*0x5a3f10*/
        goto LABEL_37; /*0x5a3f10*/
      }
    }
    __asm { fild dword ptr [esp+68h+var_4C] } /*0x5a3c8e*/
    v70 = 20.0; /*0x5a3c92*/
    __asm /*0x5a3ca2*/
    {
      fstp [esp+68h+var_30]
      fld [esp+68h+var_30]
      fsub ds:dbl_7E44C8
      fcomp ds:dbl_7EDAC8
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a3cbb*/
      goto LABEL_16; /*0x5a3cbb*/
    __asm /*0x5a3cbd*/
    {
      fld [esp+68h+var_30]
      fadd ds:dbl_7E44C8
      fcomp ds:dbl_7E3CC8
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a3cd2*/
    {
LABEL_16:
      v70 = 38.0; /*0x5a3cd4*/
      v71 = 42.0; /*0x5a3ce4*/
    }
    do /*0x5a3d26*/
    {
      do /*0x5a3d15*/
      {
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3cf9*/
        __asm /*0x5a3cfe*/
        {
          fmul [esp+68h+var_38]
          fadd [esp+68h+var_30]
          fst [esp+68h+var_48]
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a3d15*/
      __asm /*0x5a3d17*/
      {
        fld [esp+68h+var_48]
        fcomp ds:dbl_7EDAC8
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a3d26*/
    __asm { fld [esp+68h+var_48] } /*0x5a3d28*/
    v60 = v9; /*0x5a3d2d*/
    LOWORD(v15) = Math::RoundToInt(v1); /*0x5a3d2e*/
    v58 = v15; /*0x5a3d33*/
    v57 = dword_ABC2B8; /*0x5a3d39*/
LABEL_34:
    FloodFillPathfinding(v4, v57, v58, v60, 0); /*0x5a3ef2*/
    goto LABEL_35; /*0x5a3ef7*/
  }
LABEL_37:
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3f14*/
  for ( j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3f2a*/
        j;
        j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  }
  __asm /*0x5a3f41*/
  {
    fild dword ptr [esi+64h]
    fmul ds:dbl_7E3860
    fadd ds:dbl_7EDAC0
    fild dword ptr [esi+5Ch]
    fmul ds:dbl_7E3808
    fmulp st(1), st
    fimul dword ptr [esi+2FCh]
  }
  LOWORD(v29) = Math::RoundToInt(v1); /*0x5a3f61*/
  LODWORD(v68) = v29; /*0x5a3f68*/
  v63 = 0; /*0x5a3f6c*/
  if ( v29 > 0 ) /*0x5a3f70*/
  {
    do /*0x5a40bd*/
    {
      if ( v63 >= 100 ) /*0x5a3f7b*/
        break; /*0x5a3f7b*/
      v30 = 0; /*0x5a3f81*/
      do /*0x5a3fe9*/
      {
        v31 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a3f8b*/
        do /*0x5a3fb3*/
        {
          v32 = Range_RandomInt(0, v31); /*0x5a3f9d*/
          v33 = CellStruct::Set((CellStruct *)&v70, 0, 0); /*0x5a3f9f*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a3fb3*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v32),
                                   v33) );
        ++v30; /*0x5a3fc8*/
        *(_DWORD *)v67 = *(_DWORD *)(80 * v32 + g_MissionQueueFrame.localVariables[163]); /*0x5a3fd2*/
        if ( v30 > 200 ) /*0x5a3fd6*/
        {
          v35 = *(_DWORD *)CellStruct::Set((CellStruct *)&v71, 0, 0); /*0x5a3fff*/
          goto LABEL_49; /*0x5a4001*/
        }
        v34 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x5a3fe2*/
      }
      while ( !(unsigned __int8)Cell::IsEmpty(v34) ); /*0x5a3fe9*/
      v35 = *(_DWORD *)v67; /*0x5a4003*/
LABEL_49:
      *(_DWORD *)v69 = v35; /*0x5a4007*/
      do /*0x5a4041*/
      {
        do /*0x5a4030*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4010*/
          __asm /*0x5a4015*/
          {
            fmul ds:dbl_7E3860
            fadd ds:dbl_7E3548
            fst [esp+68h+var_20]
            fcomp ds:dbl_7E8AE8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4030*/
        __asm /*0x5a4032*/
        {
          fld [esp+68h+var_20]
          fcomp ds:dbl_7E3550
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4041*/
      do /*0x5a4079*/
      {
        do /*0x5a4068*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4048*/
          __asm /*0x5a404d*/
          {
            fmul ds:dbl_7E44A8
            fadd ds:dbl_7EDAB8
            fst [esp+68h+var_28]
            fcomp ds:dbl_7E44A8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4068*/
        __asm /*0x5a406a*/
        {
          fld [esp+68h+var_28]
          fcomp ds:dbl_7EDA10
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4079*/
      __asm { fld [esp+68h+var_28] } /*0x5a4083*/
      v61 = v73; /*0x5a4088*/
      LOWORD(v40) = Math::RoundToInt(v1); /*0x5a4089*/
      v59 = v40; /*0x5a4092*/
      v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69); /*0x5a4099*/
      v42 = ScatterTerrainTrees((int)v41, v59, v61); /*0x5a40a3*/
      v43 = LODWORD(v68) - v42 <= 0; /*0x5a40b3*/
      LODWORD(v68) -= v42; /*0x5a40b5*/
      ++v63; /*0x5a40b9*/
    }
    while ( !v43 ); /*0x5a40bd*/
  }
  v44 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
  v76 = v44 + 1; /*0x5a40e4*/
  __asm /*0x5a40e8*/
  {
    fild [esp+68h+var_8]
    fstp [esp+68h+var_10]
  }
  do /*0x5a4119*/
  {
    v76 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a40fa*/
    __asm /*0x5a4102*/
    {
      fild [esp+68h+var_8]
      fmul [esp+68h+var_10]
      fmul ds:dbl_7ED898
    }
    LOWORD(v45) = Math::RoundToInt(v1); /*0x5a4110*/
    v46 = v45; /*0x5a4115*/
  }
  while ( v45 > v44 ); /*0x5a4119*/
  result = 5 * v45; /*0x5a411b*/
  v66 = 0; /*0x5a411f*/
  v64 = 0; /*0x5a4125*/
  if ( 5 * v46 > 0 ) /*0x5a4129*/
  {
    while ( 1 ) /*0x5a412f*/
    {
      if ( v66 >= v46 ) /*0x5a4133*/
        return result; /*0x5a4133*/
      v48 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4141*/
      do /*0x5a419c*/
      {
        v76 = v48 + 1; /*0x5a414b*/
        __asm /*0x5a414f*/
        {
          fild [esp+68h+var_8]
          fstp [esp+68h+var_28]
        }
        do /*0x5a4180*/
        {
          *(_QWORD *)&v75 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4161*/
          __asm /*0x5a4169*/
          {
            fild [esp+68h+var_10]
            fmul [esp+68h+var_28]
            fmul ds:dbl_7ED898
          }
          LOWORD(v49) = Math::RoundToInt(v1); /*0x5a4177*/
          v50 = v49; /*0x5a417c*/
        }
        while ( v49 > v48 ); /*0x5a4180*/
        v51 = CellStruct::Set((CellStruct *)&v71, 0, 0); /*0x5a4188*/
      }
      while ( (unsigned __int8)CellStruct::Equals( /*0x5a419c*/
                                 (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v50),
                                 v51) );
      *(_DWORD *)v69 = *(_DWORD *)(80 * v50 + g_MissionQueueFrame.localVariables[163]); /*0x5a41be*/
      v52 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69); /*0x5a41c2*/
      v53 = (int)v52; /*0x5a41c7*/
      if ( *(_DWORD *)v52->__pad_44 == -1 ) /*0x5a41cd*/
        break; /*0x5a41cd*/
LABEL_73:
      result = ++v64; /*0x5a4262*/
      if ( v64 >= 5 * v46 ) /*0x5a4271*/
        return result; /*0x5a4271*/
    }
    if ( RandomMap::Check(v52) ) /*0x5a41d5*/
    {
      do /*0x5a4202*/
      {
        v74 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a41e8*/
        __asm /*0x5a41f0*/
        {
          fild [esp+68h+var_18]
          fmul ds:dbl_7EDAB0
        }
        LOWORD(v54) = Math::RoundToInt(v1); /*0x5a41fa*/
      }
      while ( v54 > 4 ); /*0x5a4202*/
      v55 = v54 + 168; /*0x5a4204*/
    }
    else
    {
      if ( !(unsigned __int8)Cell::IsEmpty((Cell *)v53) && !(unsigned __int8)Cell::IsShore((Cell *)v53) ) /*0x5a421f*/
        goto LABEL_72; /*0x5a421f*/
      do /*0x5a4245*/
      {
        *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a422b*/
        __asm /*0x5a4233*/
        {
          fild [esp+68h+var_20]
          fmul ds:dbl_7EDAB0
        }
        LOWORD(v56) = Math::RoundToInt(v1); /*0x5a423d*/
      }
      while ( v56 > 4 ); /*0x5a4245*/
      v55 = v56 + 173; /*0x5a4247*/
    }
    *(_DWORD *)(v53 + 68) = v55; /*0x5a424c*/
LABEL_72:
    *(_BYTE *)(v53 + 286) = 0; /*0x5a424f*/
    House::AnnounceUpgrade(v53, -1); /*0x5a4259*/
    ++v66; /*0x5a425e*/
    goto LABEL_73; /*0x5a425e*/
  }
  return result; /*0x5a4277*/
}



// ==== 0x005A4280  RandomMap::GenerateRandomMapTerrain  this=RandomMap  sig=csp ====
int __thiscall RandomMap::GenerateRandomMapTerrain(RandomMap *this)
{
  double v1; // st7
  int i; // eax
  int v4; // esi
  int v9; // eax
  CellClass *j; // eax
  int result; // eax
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // esi
  _WORD *v16; // eax
  Cell *v17; // eax
  int v18; // eax
  int v23; // eax
  void *v24; // eax
  bool v25; // cc
  int v26; // [esp-Ch] [ebp-5Ch]
  double v27; // [esp-8h] [ebp-58h]
  int v29; // [esp+18h] [ebp-38h]
  __int16 v30[2]; // [esp+20h] [ebp-30h] BYREF
  int v31; // [esp+24h] [ebp-2Ch]
  __int16 v32[2]; // [esp+28h] [ebp-28h] BYREF
  __int16 v33; // [esp+2Ch] [ebp-24h] BYREF
  double v34; // [esp+30h] [ebp-20h]
  double v35; // [esp+38h] [ebp-18h]
  __int64 v36; // [esp+40h] [ebp-10h]
  __int64 v37; // [esp+48h] [ebp-8h]

  _EDI = this; /*0x5a428d*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42ab*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v31 = *(_DWORD *)(i + 36); /*0x5a42b0*/
    *(_DWORD *)(80 * ((__int16)v31 + g_MapCellWidth * SHIWORD(v31)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42e7*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42f6*/
  if ( v4 ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v31 = *(_DWORD *)(v4 + 36); /*0x5a4309*/
      _EBP = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v31 + g_MapCellWidth * SHIWORD(v31)); /*0x5a4326*/
      if ( (unsigned __int8)Cell::IsEmpty((Cell *)v4) ) /*0x5a4328*/
      {
        if ( !*(_BYTE *)(v4 + 284) && !*(_BYTE *)(_EBP + 69) ) /*0x5a4341*/
        {
          v31 = *(_DWORD *)(v4 + 36); /*0x5a4352*/
          *(_QWORD *)&v35 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4368*/
          __asm /*0x5a4370*/
          {
            fild [esp+50h+var_18]
            fmul ds:dbl_7ED898
            fcomp qword ptr [ebp+28h]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a4382*/
          {
            do /*0x5a43ba*/
            {
              do /*0x5a43a9*/
              {
                Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4389*/
                __asm /*0x5a438e*/
                {
                  fmul ds:dbl_7ECE60
                  fadd ds:dbl_7E44C8
                  fst [esp+50h+var_20]
                  fcomp ds:dbl_7E3CC8
                  fnstsw ax
                }
              }
              while ( (_AX & 0x100) != 0 ); /*0x5a43a9*/
              __asm /*0x5a43ab*/
              {
                fld [esp+50h+var_20]
                fcomp ds:dbl_7E1728
                fnstsw ax
              }
            }
            while ( (_AX & 0x4100) == 0 ); /*0x5a43ba*/
            __asm { fld [esp+50h+var_20] } /*0x5a43bc*/
            LOWORD(v9) = Math::RoundToInt(v1); /*0x5a43c2*/
            FloodFillPathfinding(v4, dword_ABC2B8, v9, (__int16)v31 + (SHIWORD(v31) << 9), 0); /*0x5a43d3*/
          }
        }
      }
      v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43e2*/
    }
    while ( v4 ); /*0x5a43e6*/
    _EDI = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43f5*/
  for ( j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4406*/
        j;
        j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    CellClass::DetermineTileType(j); /*0x5a440a*/
  }
  __asm /*0x5a441d*/
  {
    fild dword ptr [edi+64h]
    fmul ds:dbl_7E3860
    fadd ds:dbl_7EDAC0
    fild dword ptr [edi+5Ch]
    fmul ds:dbl_7E3808
    fmulp st(1), st
    fimul dword ptr [edi+2FCh]
  }
  LOWORD(result) = Math::RoundToInt(v1); /*0x5a443d*/
  v31 = result; /*0x5a4444*/
  v29 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
    do /*0x5a45cf*/
    {
      if ( v29 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      v12 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
        v13 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4467*/
        do /*0x5a44c2*/
        {
          v36 = v13 + 1; /*0x5a4471*/
          __asm /*0x5a4475*/
          {
            fild [esp+50h+var_10]
            fstp [esp+50h+var_18]
          }
          do /*0x5a44a6*/
          {
            v37 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4487*/
            __asm /*0x5a448f*/
            {
              fild [esp+50h+var_8]
              fmul [esp+50h+var_18]
              fmul ds:dbl_7ED898
            }
            LOWORD(v14) = Math::RoundToInt(v1); /*0x5a449d*/
            v15 = v14; /*0x5a44a2*/
          }
          while ( v14 > v13 ); /*0x5a44a6*/
          v16 = CellStruct::Set((CellStruct *)&v33, 0, 0); /*0x5a44ae*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a44c2*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v15),
                                   v16) );
        ++v12; /*0x5a44d6*/
        *(_DWORD *)v30 = *(_DWORD *)(80 * v15 + g_MissionQueueFrame.localVariables[163]); /*0x5a44e0*/
        if ( v12 > 200 ) /*0x5a44e4*/
        {
          v18 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x5a44f0*/
      }
      while ( !(unsigned __int8)Cell::IsEmpty(v17) ); /*0x5a44f7*/
      v18 = *(_DWORD *)v30; /*0x5a4515*/
LABEL_27:
      *(_DWORD *)v32 = v18; /*0x5a4519*/
      do /*0x5a4553*/
      {
        do /*0x5a4542*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4522*/
          __asm /*0x5a4527*/
          {
            fmul ds:dbl_7E3860
            fadd ds:dbl_7E3548
            fst [esp+50h+var_20]
            fcomp ds:dbl_7E8AE8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4542*/
        __asm /*0x5a4544*/
        {
          fld [esp+50h+var_20]
          fcomp ds:dbl_7E3550
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4553*/
      do /*0x5a458b*/
      {
        do /*0x5a457a*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a455a*/
          __asm /*0x5a455f*/
          {
            fmul ds:dbl_7E44A8
            fadd ds:dbl_7EDAB8
            fst [esp+50h+var_18]
            fcomp ds:dbl_7E44A8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a457a*/
        __asm /*0x5a457c*/
        {
          fld [esp+50h+var_18]
          fcomp ds:dbl_7EDA10
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a458b*/
      __asm { fld [esp+50h+var_18] } /*0x5a4595*/
      v27 = v34; /*0x5a459a*/
      LOWORD(v23) = Math::RoundToInt(v1); /*0x5a459b*/
      v26 = v23; /*0x5a45a4*/
      v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x5a45ab*/
      result = ScatterTerrainTrees((int)v24, v26, v27); /*0x5a45b5*/
      v25 = v31 - result <= 0; /*0x5a45c5*/
      v31 -= result; /*0x5a45c7*/
      ++v29; /*0x5a45cb*/
    }
    while ( !v25 ); /*0x5a45cf*/
  }
  return result; /*0x5a45d5*/
}



// ==== 0x005A45E0  ScatterTerrainTrees  this=-  sig=csp ====
int __stdcall ScatterTerrainTrees(int a1, int a2, double a3)
{
  int v3; // edi
  float *v4; // eax
  float *v5; // ebx
  int *v6; // eax
  int *v7; // esi
  void *v8; // eax
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
  _DWORD *v20; // ebx
  signed int v21; // eax
  void **v22; // edi
  int v23; // eax
  char v24; // al
  int v25; // eax
  __int16 v26; // dx
  int v27; // ecx
  int v28; // eax
  char *v29; // edi
  float *v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  unsigned int v33; // edx
  int v34; // ebx
  unsigned int v35; // eax
  int v36; // eax
  __int16 *v37; // edi
  __int16 *v39; // [esp+18h] [ebp-58h]
  float *v40; // [esp+1Ch] [ebp-54h]
  int v41; // [esp+20h] [ebp-50h]
  int v42; // [esp+24h] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-44h]
  float *v44; // [esp+30h] [ebp-40h]
  double v45; // [esp+30h] [ebp-40h]
  float v46; // [esp+38h] [ebp-38h]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h] BYREF
  float v49; // [esp+40h] [ebp-30h]
  __int64 v50; // [esp+44h] [ebp-2Ch]
  __int64 v51; // [esp+4Ch] [ebp-24h]
  __int64 v52; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  v3 = 25 * a2; /*0x5a45f2*/
  v4 = (float *)__2_YAPAXI_Z(200 * a2); /*0x5a4601*/
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
  v6 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v7 = v6; /*0x5a462f*/
  if ( v6 ) /*0x5a4636*/
  {
    v6[3] = 0; /*0x5a463f*/
    v6[4] = -1; /*0x5a4647*/
    *v6 = 0; /*0x5a464e*/
    v6[1] = v3; /*0x5a4654*/
    v8 = __2_YAPAXI_Z(100 * a2 + 4); /*0x5a4657*/
    v9 = v7[1]; /*0x5a465c*/
    v7[2] = (int)v8; /*0x5a465f*/
    v10 = 0; /*0x5a4665*/
    if ( v9 >= 0 ) /*0x5a4669*/
    {
      do /*0x5a467c*/
      {
        ++v10; /*0x5a466e*/
        *(_DWORD *)(v7[2] + 4 * v10 - 4) = 0; /*0x5a466f*/
      }
      while ( v10 <= v7[1] ); /*0x5a467c*/
    }
  }
  else
  {
    v7 = 0; /*0x5a4680*/
  }
  for ( i = 0; i <= *v7; *(_DWORD *)(v7[2] + 4 * i - 4) = 0 ) /*0x5a4688*/
    ++i; /*0x5a468d*/
  *v7 = 0; /*0x5a469f*/
  v41 = 1; /*0x5a46a5*/
  *v5 = *(float *)(a1 + 36); /*0x5a46b0*/
  v5[1] = 0.0; /*0x5a46b2*/
  *((_BYTE *)dword_ABED10 /*0x5a46dc*/
  + 80 * (__int16)*(_DWORD *)(a1 + 36)
  + 80 * g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(a1 + 36))
  + 71) = 1;
  v12 = *v7 + 1; /*0x5a46e6*/
  v46 = v5[1]; /*0x5a46e9*/
  v13 = v12 >> 1; /*0x5a46f0*/
  if ( v12 < v7[1] ) /*0x5a46f4*/
  {
    if ( v12 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        v14 = v7[2]; /*0x5a46fb*/
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
    *(_DWORD *)(v7[2] + 4 * v12) = v5; /*0x5a4726*/
    v16 = v7[3]; /*0x5a472b*/
    ++*v7; /*0x5a4731*/
    if ( (unsigned int)v5 > v16 ) /*0x5a4733*/
      v7[3] = (int)v5; /*0x5a4735*/
    if ( (unsigned int)v5 < v7[4] ) /*0x5a473b*/
      v7[4] = (int)v5; /*0x5a473d*/
  }
  if ( *v7 ) /*0x5a4740*/
  {
    v18 = v7[2]; /*0x5a474e*/
    v19 = *(__int16 **)(v18 + 4); /*0x5a4756*/
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 4 * *v7); /*0x5a4759*/
    *(_DWORD *)(v7[2] + 4 * (*v7)--) = 0; /*0x5a4761*/
    Heap::SiftDown(v7, 1); /*0x5a476f*/
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
      v20 = CellCoord::To_CellObj(&dword_87F7E8, v17); /*0x5a47ba*/
      if ( Cell::IsEmpty(v20) && !v20[57] && v20[17] == -1 && v20[59] != 3 ) /*0x5a47ec*/
      {
        v50 = (unsigned int)Random::State(&unk_ABE890); /*0x5a47fc*/
        if ( (double)v50 * 2.328306437080797e-10 < a3 ) /*0x5a4816*/
        {
          do /*0x5a4848*/
          {
            v51 = (unsigned int)Random::State(&unk_ABE890); /*0x5a4826*/
            v21 = Math::RoundToInt((double)v51 * 0.000000005820766092701993 + 1.0); /*0x5a483e*/
          }
          while ( (unsigned int)v21 > 0x19 ); /*0x5a4848*/
          sprintf(Buffer, "TREE%d%d", v21 / 10, v21 % 10); /*0x5a486f*/
          v22 = (void **)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
          if ( v22 ) /*0x5a4885*/
          {
            v48 = v20[9]; /*0x5a488e*/
            v23 = Terrain::LookupByName(Buffer); /*0x5a4892*/
            TerrainClass::Construct(v22, *((void **)dword_A8E31C + v23), (__int16 *)&v48); /*0x5a48aa*/
          }
          ++v42; /*0x5a48af*/
        }
      }
      v24 = 0; /*0x5a48bb*/
      v47 = 0; /*0x5a48c0*/
      v44 = &v40[2 * v41]; /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        v25 = v24 & 7; /*0x5a48cc*/
        v26 = v39[1] + HIWORD(dword_89F688[v25]); /*0x5a48de*/
        LOWORD(v25) = *v39 + LOWORD(dword_89F688[v25]); /*0x5a48e5*/
        HIWORD(v43) = v26; /*0x5a48ee*/
        v27 = (__int16)v25; /*0x5a48f3*/
        LOWORD(v43) = v25; /*0x5a48f9*/
        v28 = v26 + (__int16)v25; /*0x5a48fe*/
        if ( v28 > dword_ABED04 && v27 - v26 < dword_ABED04 && v26 - v27 < dword_ABED04 && v28 <= dword_ABED08 ) /*0x5a492d*/
        {
          v29 = (char *)dword_ABED10 + 80 * v27 + 80 * g_MapCellWidth * v26; /*0x5a494a*/
          if ( !v29[71] && !v29[69] && v41 < 25 * a2 ) /*0x5a496c*/
          {
            v30 = v44; /*0x5a4972*/
            *(_DWORD *)v44 = v43; /*0x5a497d*/
            v45 = Math::Sqrt((double)(((__int16)*(_DWORD *)(a1 + 36) - v27) * ((__int16)*(_DWORD *)(a1 + 36) - v27) /*0x5a49b1*/
                                    + ((__int16)HIWORD(*(_DWORD *)(a1 + 36)) - v26)
                                    * ((__int16)HIWORD(*(_DWORD *)(a1 + 36)) - v26)));
            v52 = (unsigned int)Random::State(&unk_ABE890); /*0x5a49c2*/
            ++v41; /*0x5a49dd*/
            v30[1] = (double)v52 * 5.0 * 2.328306437080797e-10 + v45; /*0x5a49eb*/
            v29[71] = 1; /*0x5a49ee*/
            v31 = (unsigned int)v30; /*0x5a49f4*/
            v32 = *v7 + 1; /*0x5a49f9*/
            v44 = v30 + 2; /*0x5a49fa*/
            v49 = v30[1]; /*0x5a4a03*/
            v33 = v32 >> 1; /*0x5a4a0a*/
            if ( v32 < v7[1] ) /*0x5a4a0e*/
            {
              for ( ; v32 > 1; v33 >>= 1 ) /*0x5a4a13*/
              {
                v34 = v7[2]; /*0x5a4a15*/
                if ( *(float *)(*(_DWORD *)(v34 + 4 * v33) + 4) <= (double)v49 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(_DWORD *)(v34 + 4 * v32) = *(_DWORD *)(v34 + 4 * v33); /*0x5a4a2c*/
                v32 = v33; /*0x5a4a2f*/
              }
              *(_DWORD *)(v7[2] + 4 * v32) = v31; /*0x5a4a3b*/
              v35 = v7[3]; /*0x5a4a40*/
              ++*v7; /*0x5a4a46*/
              if ( v31 > v35 ) /*0x5a4a48*/
                v7[3] = v31; /*0x5a4a4a*/
              if ( v31 < v7[4] ) /*0x5a4a50*/
                v7[4] = v31; /*0x5a4a52*/
            }
          }
        }
        v24 = ++v47; /*0x5a4a59*/
      }
      while ( v47 < 8 ); /*0x5a4a61*/
      if ( *v7 ) /*0x5a4a67*/
      {
        v36 = v7[2]; /*0x5a4a73*/
        v37 = *(__int16 **)(v36 + 4); /*0x5a4a7b*/
        *(_DWORD *)(v36 + 4) = *(_DWORD *)(v36 + 4 * *v7); /*0x5a4a7e*/
        *(_DWORD *)(v7[2] + 4 * (*v7)--) = 0; /*0x5a4a86*/
        Heap::SiftDown(v7, 1); /*0x5a4a94*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a4b4f*/
}



// ==== 0x005A4B60  FloodFillPathfinding  this=-  sig=csp ====
void __stdcall Pathfinding_FloodFill(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // edi
  float *v6; // eax
  float *v7; // ebx
  int *v8; // eax
  int *v9; // esi
  void *v10; // eax
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
  __int16 *v22; // edi
  _DWORD *v23; // eax
  int v24; // edx
  char v25; // al
  float *v26; // edi
  int *v27; // ebx
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
  __int16 *v38; // eax
  int v39; // [esp+14h] [ebp-34h] BYREF
  __int16 *v40; // [esp+18h] [ebp-30h]
  float *v41; // [esp+1Ch] [ebp-2Ch]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  float v44; // [esp+28h] [ebp-20h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  double v46; // [esp+30h] [ebp-18h]
  float v47; // [esp+38h] [ebp-10h]
  int v48; // [esp+3Ch] [ebp-Ch] BYREF
  __int64 v49; // [esp+40h] [ebp-8h]

  v5 = 10 * a3; /*0x5a4b72*/
  v6 = (float *)__2_YAPAXI_Z(80 * a3); /*0x5a4b7c*/
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
  v8 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a4ba5*/
  v9 = v8; /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    v8[3] = 0; /*0x5a4bb5*/
    *v8 = 0; /*0x5a4bb8*/
    v8[4] = -1; /*0x5a4bc1*/
    v8[1] = v5; /*0x5a4bc9*/
    v10 = __2_YAPAXI_Z(40 * a3 + 4); /*0x5a4bcc*/
    v11 = v9[1]; /*0x5a4bd1*/
    v9[2] = (int)v10; /*0x5a4bd4*/
    v12 = 0; /*0x5a4bda*/
    if ( v11 >= 0 ) /*0x5a4bde*/
    {
      do /*0x5a4bf1*/
      {
        ++v12; /*0x5a4be3*/
        *(_DWORD *)(v9[2] + 4 * v12 - 4) = 0; /*0x5a4be4*/
      }
      while ( v12 <= v9[1] ); /*0x5a4bf1*/
    }
  }
  else
  {
    v9 = 0; /*0x5a4bf7*/
  }
  v13 = 0; /*0x5a4bfb*/
  v14 = *v9 < 0; /*0x5a4bfd*/
  v45 = 0; /*0x5a4bff*/
  if ( !v14 ) /*0x5a4c03*/
  {
    do /*0x5a4c11*/
    {
      ++v13; /*0x5a4c08*/
      *(_DWORD *)(v9[2] + 4 * v13 - 4) = 0; /*0x5a4c09*/
    }
    while ( v13 <= *v9 ); /*0x5a4c11*/
  }
  *v9 = 0; /*0x5a4c16*/
  v42 = 1; /*0x5a4c18*/
  *v7 = *(float *)(a1 + 36); /*0x5a4c23*/
  v7[1] = 0.0; /*0x5a4c25*/
  v44 = *(float *)(a1 + 36); /*0x5a4c2b*/
  *((_DWORD *)dword_ABED10 + 20 * SLOWORD(v44) + 20 * g_MapCellWidth * SHIWORD(v44) + 15) = a4; /*0x5a4c4f*/
  v15 = *v9 + 1; /*0x5a4c58*/
  v44 = v7[1]; /*0x5a4c5b*/
  v16 = v15 >> 1; /*0x5a4c62*/
  if ( v15 < v9[1] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        v17 = v9[2]; /*0x5a4c6d*/
        v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a4c70*/
        if ( *(float *)(v18 + 4) <= (double)v44 ) /*0x5a4c7f*/
          break; /*0x5a4c7f*/
        *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a4c81*/
        v15 = v16; /*0x5a4c84*/
        v16 >>= 1; /*0x5a4c86*/
      }
      while ( v15 > 1 ); /*0x5a4c8b*/
      v7 = v41; /*0x5a4c8d*/
    }
    *(_DWORD *)(v9[2] + 4 * v15) = v7; /*0x5a4c94*/
    v19 = v9[3]; /*0x5a4c99*/
    ++*v9; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      v9[3] = (int)v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9[4] ) /*0x5a4ca9*/
      v9[4] = (int)v7; /*0x5a4cab*/
  }
  if ( *v9 ) /*0x5a4cae*/
  {
    v21 = v9[2]; /*0x5a4cbc*/
    v22 = *(__int16 **)(v21 + 4); /*0x5a4cc4*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *v9); /*0x5a4cc7*/
    *(_DWORD *)(v9[2] + 4 * (*v9)--) = 0; /*0x5a4ccf*/
    Heap::SiftDown(v9, 1); /*0x5a4cdd*/
    v40 = v22; /*0x5a4ce2*/
    v20 = v22; /*0x5a4ce6*/
  }
  else
  {
    v20 = 0; /*0x5a4cb4*/
    v40 = 0; /*0x5a4cb6*/
  }
  if ( a3 > 0 ) /*0x5a4ced*/
  {
    while ( v20 ) /*0x5a4cfb*/
    {
      v23 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x5a4d07*/
      v24 = v42; /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      v25 = 0; /*0x5a4d16*/
      v44 = 0.0; /*0x5a4d18*/
      v26 = &v7[2 * v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        v39 = *CellStruct::Add(v40, &v48, (_WORD *)(4 * (v25 & 7) + 9041544)); /*0x5a4d44*/
        v43 = SHIWORD(v39) + (__int16)v39; /*0x5a4d55*/
        if ( v43 > dword_ABED04 /*0x5a4d81*/
          && (__int16)v39 - SHIWORD(v39) < dword_ABED04
          && SHIWORD(v39) - (__int16)v39 < dword_ABED04
          && v43 <= dword_ABED08 )
        {
          v27 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v39); /*0x5a4d96*/
          v43 = (int)v27; /*0x5a4d9a*/
          if ( Cell::IsEmpty(v27) || a5 && (CellClass::InBounds(v27) || CellClass::InMapDataRange(v27)) ) /*0x5a4dbf*/
          {
            v28 = SHIWORD(v39); /*0x5a4dcc*/
            LODWORD(v46) = (__int16)v39; /*0x5a4de4*/
            if ( *((_DWORD *)dword_ABED10 + 20 * (__int16)v39 + 20 * g_MapCellWidth * SHIWORD(v39) + 15) != a4 /*0x5a4e1a*/
              && !*(_BYTE *)(v43 + 284)
              && *(_DWORD *)(v43 + 68) == -1
              && !*(_DWORD *)(v43 + 228) )
            {
              *(_DWORD *)v26 = v39; /*0x5a4e2f*/
              v43 = *(_DWORD *)(a1 + 36); /*0x5a4e3b*/
              LODWORD(v46) = ((__int16)v43 - LODWORD(v46)) * ((__int16)v43 - LODWORD(v46)) /*0x5a4e57*/
                           + (SHIWORD(v43) - v28) * (SHIWORD(v43) - v28);
              v46 = Math::Sqrt((double)SLODWORD(v46)); /*0x5a4e67*/
              v49 = (unsigned int)Random::State(&unk_ABE890); /*0x5a4e78*/
              v29 = SHIWORD(v39); /*0x5a4e88*/
              v30 = (__int16)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((_DWORD *)dword_ABED10 + 20 * v30 + 20 * g_MapCellWidth * v29 + 15) = a4; /*0x5a4eba*/
              v31 = (unsigned int)v26; /*0x5a4ec3*/
              ++v42; /*0x5a4ec5*/
              v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              v33 = *v9 + 1; /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              v34 = v9[1]; /*0x5a4ed6*/
              v35 = v33 >> 1; /*0x5a4edb*/
              v43 = v31; /*0x5a4edf*/
              if ( v33 < v34 ) /*0x5a4ee3*/
              {
                for ( ; v33 > 1; v35 >>= 1 ) /*0x5a4ee8*/
                {
                  LODWORD(v46) = *(_DWORD *)(v9[2] + 4 * v35); /*0x5a4ef0*/
                  if ( *(float *)(LODWORD(v46) + 4) <= (double)v47 ) /*0x5a4f00*/
                    break; /*0x5a4f00*/
                  *(_DWORD *)(v9[2] + 4 * v33) = LODWORD(v46); /*0x5a4f09*/
                  v31 = v43; /*0x5a4f0c*/
                  v33 = v35; /*0x5a4f10*/
                }
                *(_DWORD *)(v9[2] + 4 * v33) = v31; /*0x5a4f1c*/
                v36 = v9[3]; /*0x5a4f21*/
                ++*v9; /*0x5a4f27*/
                if ( v31 > v36 ) /*0x5a4f29*/
                  v9[3] = v31; /*0x5a4f2b*/
                if ( v31 < v9[4] ) /*0x5a4f31*/
                  v9[4] = v31; /*0x5a4f33*/
              }
            }
          }
        }
        v25 = LOBYTE(v44) + 1; /*0x5a4f3a*/
        ++LODWORD(v44); /*0x5a4f3e*/
      }
      while ( SLODWORD(v44) < 8 ); /*0x5a4f42*/
      v37 = ++v45; /*0x5a4f4e*/
      v38 = (__int16 *)PriorityQueue::Pop(v9); /*0x5a4f53*/
      v7 = v41; /*0x5a4f58*/
      v40 = v38; /*0x5a4f5c*/
      if ( v37 >= a3 ) /*0x5a4f63*/
        break; /*0x5a4f63*/
      v20 = v40; /*0x5a4cf5*/
    }
  }
  __3_YAXPAX_Z(v7); /*0x5a4f6a*/
  if ( v9 ) /*0x5a4f74*/
  {
    __3_YAXPAX_Z((void *)v9[2]); /*0x5a4f7a*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a500f*/
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
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a5417*/
  {
    v80 = *(int *)(i + 36); /*0x5a541c*/
    *((_DWORD *)dword_ABED10 + 20 * (__int16)v80 + 20 * g_MapCellWidth * SHIWORD(v80) + 15) = 0; /*0x5a5441*/
  }
  v13 = a1; /*0x5a544e*/
  *v4 = *(_DWORD *)a1; /*0x5a5454*/
  v4[1] = 0; /*0x5a5456*/
  v14 = 5 * (*v13 + g_MapCellWidth * v13[1]); /*0x5a546f*/
  v76 = 1; /*0x5a547a*/
  *((_DWORD *)dword_ABED10 + 4 * v14 + 15) = 1; /*0x5a547e*/
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
    *v24 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a552b*/
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
      *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v20) + 14) = dword_ABC2B0; /*0x5a557c*/
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
        if ( v31 > dword_ABED04 /*0x5a5626*/
          && (__int16)v80 - SHIWORD(v80) < dword_ABED04
          && SHIWORD(v80) - (__int16)v80 < dword_ABED04
          && v31 <= dword_ABED08 )
        {
          v32 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73); /*0x5a563b*/
          if ( Cell::IsEmpty(v32) && v32[17] == -1 ) /*0x5a5650*/
          {
            v33 = SHIWORD(v73); /*0x5a5656*/
            v34 = (__int16)v73; /*0x5a5667*/
            v35 = (char *)dword_ABED10 + 80 * (__int16)v73 + 80 * SHIWORD(v73) * g_MapCellWidth; /*0x5a5678*/
            if ( *((_DWORD *)v35 + 15) != 1 && !v35[69] ) /*0x5a5684*/
            {
              v36 = a1; /*0x5a568f*/
              *(_DWORD *)LODWORD(v30) = v73; /*0x5a5693*/
              v37 = *v36 - v34; /*0x5a569f*/
              v38 = v36[1] - v33; /*0x5a56a1*/
              *(float *)&v80 = COERCE_FLOAT(abs32(v37)); /*0x5a56b1*/
              if ( v80 <= (int)((HIDWORD(v38) ^ v38) - HIDWORD(v38)) ) /*0x5a56b5*/
                v80 = (HIDWORD(v38) ^ v38) - HIDWORD(v38); /*0x5a56b7*/
              v83 = (unsigned int)Random::State(&unk_ABE890); /*0x5a56c5*/
              v39 = SHIWORD(v73); /*0x5a56d5*/
              v40 = (__int16)v73; /*0x5a56e0*/
              v41 = (double)v80; /*0x5a56eb*/
              v42 = v30; /*0x5a56ef*/
              LODWORD(v30) += 8; /*0x5a56f1*/
              *(float *)&v80 = v30; /*0x5a56f4*/
              *(float *)(LODWORD(v30) - 4) = (double)v83 * 3.0 * 2.328306437080797e-10 + v41; /*0x5a56fa*/
              *((_DWORD *)dword_ABED10 + 20 * v40 + 20 * g_MapCellWidth * v39 + 15) = 1; /*0x5a5711*/
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
      v72 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(v24[1] + 4 * j--)); /*0x5a5ab6*/
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
          if ( v58 > dword_ABED04 /*0x5a58dd*/
            && SLOWORD(v81[0]) - SWORD1(v81[0]) < dword_ABED04
            && SWORD1(v81[0]) - SLOWORD(v81[0]) < dword_ABED04
            && v58 <= dword_ABED08
            && *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v80) + 14) != dword_ABC2B0 )
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
    for ( k = 0; k < v24[4]; *((_BYTE *)dword_ABED10 + v63 + 69) = 1 ) /*0x5a5926*/
    {
      v63 = 80 * (*(__int16 *)(v24[1] + 4 * k) + g_MapCellWidth * *(__int16 *)(v24[1] + 4 * k + 2)); /*0x5a5948*/
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
          v78 = (unsigned int)Random::State(&unk_ABE890); /*0x5a5996*/
          v66 = Math::RoundToInt((double)v78 * v81[0] * 2.328306437080797e-10); /*0x5a59ac*/
        }
        while ( v66 > v65 ); /*0x5a59b3*/
        LODWORD(v82) = *(_DWORD *)(v24[1] + 4 * v66); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v77 = (unsigned int)Random::State(&unk_ABE890); /*0x5a59c9*/
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
            if ( !*((_BYTE *)dword_ABED10 /*0x5a5a51*/
                  + 80 * (__int16)(m + v82)
                  + 80 * g_MapCellWidth * (__int16)(WORD1(v82) + n)
                  + 69)
              || *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v81) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a2) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( (_BYTE)a2 ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings((int)v79 + dword_AA10A4, &v82, -1, -1); /*0x5a5a7f*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 3.0 * 2.328306437080797e-10 + (double)v5; /*0x5a5b45*/
}



// ==== 0x005A5B50  MapSeedClass::PlaceBuildingClusters  this=MapSeedClass  sig=csp ====
__int16 __thiscall MapSeedClass::PlaceBuildingClusters(MapSeedClass *this, int a2)
{
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int i; // esi
  unsigned int v12; // eax
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // eax
  int v16; // ebx
  Cell *NeighbourContent; // esi
  unsigned int v18; // eax
  __int64 v20; // [esp+10h] [ebp-118h] BYREF
  char v21; // [esp+1Ah] [ebp-10Eh]
  char v22; // [esp+1Bh] [ebp-10Dh]
  __int16 v23[2]; // [esp+1Ch] [ebp-10Ch] BYREF
  __int16 v24; // [esp+20h] [ebp-108h] BYREF
  __int16 v25; // [esp+22h] [ebp-106h]
  char v26; // [esp+27h] [ebp-101h]
  int v27; // [esp+28h] [ebp-100h] BYREF
  int v28; // [esp+2Ch] [ebp-FCh] BYREF
  int v29; // [esp+30h] [ebp-F8h] BYREF
  int v30; // [esp+34h] [ebp-F4h]
  int v31; // [esp+38h] [ebp-F0h]
  int v32; // [esp+3Ch] [ebp-ECh]
  _DWORD v33[2]; // [esp+40h] [ebp-E8h] BYREF
  int v34; // [esp+48h] [ebp-E0h]
  int v35; // [esp+4Ch] [ebp-DCh]
  int v36; // [esp+50h] [ebp-D8h]
  int v37; // [esp+54h] [ebp-D4h]
  int v38; // [esp+58h] [ebp-D0h] BYREF
  int v39; // [esp+5Ch] [ebp-CCh]
  int v40; // [esp+60h] [ebp-C8h]
  int v41; // [esp+64h] [ebp-C4h]
  int v42; // [esp+68h] [ebp-C0h]
  int v43[2]; // [esp+6Ch] [ebp-BCh] BYREF
  int v44; // [esp+74h] [ebp-B4h]
  int v45; // [esp+78h] [ebp-B0h]
  int v46[2]; // [esp+7Ch] [ebp-ACh] BYREF
  int v47; // [esp+84h] [ebp-A4h]
  int v48; // [esp+88h] [ebp-A0h]
  __int64 v49; // [esp+8Ch] [ebp-9Ch] BYREF
  int v50[4]; // [esp+94h] [ebp-94h] BYREF
  int v51[4]; // [esp+A4h] [ebp-84h] BYREF
  MapSeedClass v52; // [esp+B4h] [ebp-74h] BYREF
  int v53[4]; // [esp+E4h] [ebp-44h] BYREF
  int v54[4]; // [esp+F4h] [ebp-34h] BYREF
  _DWORD v55[4]; // [esp+104h] [ebp-24h] BYREF
  int v56[4]; // [esp+114h] [ebp-14h] BYREF
  char v57[4]; // [esp+124h] [ebp-4h] BYREF

  v33[1] = this; /*0x5a5b6a*/
  v2 = globalHelper_0A7640(v50, a2); /*0x5a5b6e*/
  v3 = *v2; /*0x5a5b73*/
  v38 = *v2; /*0x5a5b75*/
  v4 = v2[1]; /*0x5a5b79*/
  v39 = v4; /*0x5a5b7c*/
  v40 = v2[2]; /*0x5a5b83*/
  v5 = v2[3]; /*0x5a5b87*/
  v41 = v5; /*0x5a5b8d*/
  if ( v5 > 5 ) /*0x5a5b91*/
  {
    v6 = v5 - 2; /*0x5a5b9a*/
    v25 = v4 + 2; /*0x5a5b9d*/
    v24 = v3; /*0x5a5ba9*/
    if ( v5 - 2 > 3 ) /*0x5a5bae*/
    {
      do /*0x5a5de6*/
      {
        v27 = *FindClearPlacementCell(v23, &v24, &v38, 2); /*0x5a5bd8*/
        v7 = *globalHelper_0A7070(v33, (__int16 *)&v27, &v38, 2); /*0x5a5bf0*/
        v28 = v7; /*0x5a5bf7*/
        if ( v7 && (v24 || v25) && (__int16)v7 - v24 >= 6 ) /*0x5a5c28*/
        {
          v46[1] = SHIWORD(v27); /*0x5a5c3b*/
          v46[0] = (__int16)v27 - 4; /*0x5a5c4c*/
          v47 = 4; /*0x5a5c53*/
          v48 = 3; /*0x5a5c5e*/
          if ( !(unsigned __int8)IsAreaClearMap(v46, 0, 0) ) /*0x5a5c65*/
            goto LABEL_11; /*0x5a5c65*/
          do /*0x5a5c92*/
          {
            v20 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5c78*/
            LOWORD(v8) = Math::RoundToInt((double)v20 * 4.656612874161595e-10); /*0x5a5c8a*/
          }
          while ( v8 > 1 ); /*0x5a5c92*/
          if ( v8 ) /*0x5a5c96*/
          {
            HIWORD(v31) = HIWORD(v27); /*0x5a5ca4*/
            LOWORD(v31) = v27 - 3; /*0x5a5cae*/
            v29 = v31; /*0x5a5cb9*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, &v29, -1, -1); /*0x5a5cc6*/
          }
          else
          {
LABEL_11:
            PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, &v27, -1, -1); /*0x5a5cd9*/
          }
          v9 = v27; /*0x5a5cde*/
          v10 = v28; /*0x5a5ce2*/
          for ( i = 0; i < (__int16)v28 - (__int16)v27 - 1; ++i ) /*0x5a5cf3*/
          {
            LOWORD(v32) = i + 1; /*0x5a5cfa*/
            LOWORD(v30) = v9 + i + 1; /*0x5a5d0a*/
            HIWORD(v30) = HIWORD(v27); /*0x5a5d0f*/
            v29 = v30; /*0x5a5d1a*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache, &v29, -1, -1); /*0x5a5d28*/
            v9 = v27; /*0x5a5d2d*/
            v10 = v28; /*0x5a5d31*/
          }
          v43[1] = SHIWORD(v28); /*0x5a5d4b*/
          v43[0] = v10; /*0x5a5d56*/
          v44 = 4; /*0x5a5d5a*/
          v45 = 3; /*0x5a5d62*/
          if ( !(unsigned __int8)IsAreaClearMap(v43, 0, 0) ) /*0x5a5d6a*/
            goto LABEL_18; /*0x5a5d6a*/
          do /*0x5a5da0*/
          {
            v49 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5d7d*/
            LOWORD(v12) = Math::RoundToInt((double)v49 * 4.656612874161595e-10); /*0x5a5d98*/
          }
          while ( v12 > 1 ); /*0x5a5da0*/
          if ( v12 ) /*0x5a5da4*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, &v28, -1, -1); /*0x5a5db6*/
          else
LABEL_18:
            PlaceMapSeedClassBuildings(dword_ABBEC4, &v28, -1, -1); /*0x5a5dc6*/
          v6 -= 10; /*0x5a5dcb*/
          v25 += 10; /*0x5a5dce*/
        }
        else
        {
          v25 += 2; /*0x5a5ddb*/
          v6 -= 2; /*0x5a5de1*/
        }
      }
      while ( v6 > 3 ); /*0x5a5de6*/
      LOWORD(v3) = v38; /*0x5a5dec*/
      LOWORD(v4) = v39; /*0x5a5df0*/
      v5 = v41; /*0x5a5df4*/
    }
  }
  if ( v40 > 8 ) /*0x5a5e0a*/
  {
    v13 = v5 - 5; /*0x5a5e10*/
    v27 = v5 - 5; /*0x5a5e18*/
    v24 = v3 + 5; /*0x5a5e1c*/
    v25 = v4; /*0x5a5e21*/
    while ( v13 > 3 ) /*0x5a5e26*/
    {
      LODWORD(v20) = *FindClearPlacementCell(v57, &v24, &v38, 4); /*0x5a5e4d*/
      v5 = *globalHelper_0A7070(&v49, (__int16 *)&v20, &v38, 4); /*0x5a5e68*/
      v28 = v5; /*0x5a5e6a*/
      if ( v5 && ((LOWORD(v5) = v25, v24) || v25) && (LOWORD(v5) = v25, SHIWORD(v5) - v25 >= 6) ) /*0x5a5ea1*/
      {
        LOWORD(v5) = WORD1(v20); /*0x5a5ea7*/
        v22 = 0; /*0x5a5eac*/
        v14 = 1; /*0x5a5eb4*/
        v21 = 0; /*0x5a5eb6*/
        v26 = 0; /*0x5a5ebb*/
        if ( SWORD1(v20) < SHIWORD(v5) ) /*0x5a5ec0*/
        {
          while ( 1 ) /*0x5a5ec6*/
          {
            if ( v22 ) /*0x5a5ed1*/
            {
              v52.MapSeedClass_field_0x20 = (__int16)v20; /*0x5a607e*/
              v52.MapSeedClass_field_0x24 = (__int16)v5; /*0x5a6085*/
              v52.MapSeedClass_field_0x28 = 3; /*0x5a609b*/
              v52.MapSeedClass_field_0x2C = 1; /*0x5a60a2*/
              if ( (unsigned __int8)IsAreaClearMap(&v52.MapSeedClass_field_0x20, 0, 0) ) /*0x5a60a9*/
              {
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a60c6*/
                if ( v21 ) /*0x5a60d1*/
                {
                  if ( v26 ) /*0x5a60dd*/
                  {
                    HIWORD(v37) = WORD1(v20); /*0x5a60e9*/
                    LOWORD(v37) = v20 + 1; /*0x5a60ee*/
                    *(_DWORD *)v23 = v37; /*0x5a6108*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 5, v23, -1, -1); /*0x5a610c*/
                    v26 = 0; /*0x5a6111*/
                  }
                  else
                  {
                    HIWORD(v42) = WORD1(v20); /*0x5a6125*/
                    LOWORD(v42) = v20 + 1; /*0x5a612f*/
                    *(_DWORD *)v23 = v42; /*0x5a613a*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 4, v23, -1, -1); /*0x5a6147*/
                  }
                }
              }
              else
              {
                *(_DWORD *)v52.__pad_0 = (__int16)v20; /*0x5a615f*/
                v52.MapSeedClass_field_0x04 = SWORD1(v20); /*0x5a6168*/
                v52.MapSeedClass_field_0x08 = 3; /*0x5a616f*/
                v52.MapSeedClass_field_0x0C = 4; /*0x5a6176*/
                if ( v21 ) /*0x5a6181*/
                {
                  LOWORD(v36) = v20 + 1; /*0x5a618d*/
                  HIWORD(v36) = WORD1(v20) - 1; /*0x5a6197*/
                  *(_DWORD *)v23 = v36; /*0x5a61a0*/
                  PlaceMapSeedClassBuildings(dword_AA0E20 + 3, v23, -1, -1); /*0x5a61af*/
                  v21 = 0; /*0x5a61b4*/
                }
                if ( MapSeedClass::ValidateRectBounds(&v52) ) /*0x5a61c0*/
                {
                  v16 = SHIWORD(v28); /*0x5a61cd*/
                  if ( SHIWORD(v28) - SWORD1(v20) < 4 ) /*0x5a61de*/
                  {
                    LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 7, &v20, -1, -1); /*0x5a63e7*/
                    goto LABEL_73; /*0x5a63ec*/
                  }
                  v52.MapSeedClass_field_0x10 = (__int16)v20; /*0x5a61e9*/
                  v52.MapSeedClass_field_0x14 = SWORD1(v20) + 3; /*0x5a61fd*/
                  v52.MapSeedClass_field_0x18 = 3; /*0x5a6204*/
                  v52.MapSeedClass_field_0x1C = 2; /*0x5a620b*/
                  if ( (unsigned __int8)IsAreaClearMap(&v52.MapSeedClass_field_0x10, 0, 0) && v16 - SWORD1(v20) > 5 ) /*0x5a6229*/
                  {
                    v21 = 1; /*0x5a622b*/
                    v26 = 1; /*0x5a6230*/
                  }
                  PlaceMapSeedClassBuildings(g_CellTileTypeCache + 3, &v20, -1, -1); /*0x5a6246*/
                  v54[0] = (__int16)v20 - 1; /*0x5a6257*/
                  v54[1] = SWORD1(v20); /*0x5a6267*/
                  v54[2] = 1; /*0x5a626e*/
                  v54[3] = 3; /*0x5a6275*/
                  if ( (unsigned __int8)IsAreaClearMap(v54, 1, 0) ) /*0x5a627c*/
                  {
                    HIWORD(v35) = WORD1(v20); /*0x5a628f*/
                    LOWORD(v35) = v20 - 1; /*0x5a6294*/
                    *(_DWORD *)v23 = v35; /*0x5a62ae*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, v23, -1, -1); /*0x5a62b2*/
                  }
                  v56[0] = (__int16)v20 + 3; /*0x5a62c4*/
                  v56[1] = SWORD1(v20); /*0x5a62d4*/
                  v56[2] = 1; /*0x5a62db*/
                  v56[3] = 3; /*0x5a62e2*/
                  if ( (unsigned __int8)IsAreaClearMap(v56, 1, 0) ) /*0x5a62e9*/
                  {
                    HIWORD(v34) = WORD1(v20); /*0x5a62fe*/
                    LOWORD(v34) = v20 + 3; /*0x5a6303*/
                    *(_DWORD *)v23 = v34; /*0x5a631d*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, v23, -1, -1); /*0x5a6321*/
                  }
                  WORD1(v20) += 2; /*0x5a6326*/
                }
                else
                {
                  v33[0] = v20 - 0x10000; /*0x5a6340*/
                  *(_DWORD *)v23 = v20 - 0x10000; /*0x5a634e*/
                  PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, v23, -1, -1); /*0x5a635d*/
                  LOWORD(v32) = v20 + 1; /*0x5a636e*/
                  HIWORD(v32) = WORD1(v20) - 2; /*0x5a6377*/
                  *(_DWORD *)v23 = v32; /*0x5a6386*/
                  NeighbourContent = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x5a638f*/
                  if ( Value::InRange((Value *)NeighbourContent) && Value::InRange((Value *)NeighbourContent) ) /*0x5a639e*/
                  {
                    do /*0x5a63c4*/
                    {
                      NeighbourContent->Cell_field_0x38 = g_CellTileTypeCache + 1; /*0x5a63b1*/
                      NeighbourContent->__pad_FC[30] = 1; /*0x5a63b4*/
                      NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 0); /*0x5a63c0*/
                    }
                    while ( Value::InRange((Value *)NeighbourContent) ); /*0x5a63c4*/
                  }
                  v22 = 0; /*0x5a63cd*/
                }
              }
              goto LABEL_38; /*0x5a6116*/
            }
            v51[3] = 2; /*0x5a5ede*/
            v55[2] = 3; /*0x5a5ee7*/
            v51[2] = 3; /*0x5a5eee*/
            v51[0] = (__int16)v20; /*0x5a5f0a*/
            v51[1] = (__int16)v5; /*0x5a5f11*/
            v55[0] = (__int16)v20; /*0x5a5f18*/
            v55[1] = (__int16)v5 - 3; /*0x5a5f1f*/
            v55[3] = 4; /*0x5a5f26*/
            if ( SHIWORD(v28) - (__int16)v5 < 2 ) /*0x5a5f2d*/
              goto LABEL_73; /*0x5a5f2d*/
            if ( !v14 ) /*0x5a5f35*/
              goto LABEL_79; /*0x5a5f35*/
            v53[0] = (__int16)v20; /*0x5a5f3b*/
            v53[1] = (__int16)v5 - 3; /*0x5a5f42*/
            v53[2] = 3; /*0x5a5f53*/
            v53[3] = 4; /*0x5a5f5e*/
            if ( !(unsigned __int8)IsAreaClearMap(v53, 0, 0) ) /*0x5a5f65*/
              goto LABEL_79; /*0x5a5f65*/
            do /*0x5a5f96*/
            {
              *(_QWORD *)v43 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5f7c*/
              LOWORD(v15) = Math::RoundToInt((double)*(__int64 *)v43 * 4.656612874161595e-10); /*0x5a5f8e*/
            }
            while ( v15 > 1 ); /*0x5a5f96*/
            if ( v15 ) /*0x5a5f9a*/
            {
              v30 = v20 - 196608; /*0x5a5fb3*/
              *(_DWORD *)v23 = v20 - 196608; /*0x5a5fbe*/
              PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v23, -1, -1); /*0x5a5fcb*/
            }
            else
            {
LABEL_79:
              if ( MapSeedClass::ValidateRectBounds((MapSeedClass *)v55) ) /*0x5a5fff*/
              {
                v31 = v20 - 196608; /*0x5a6019*/
                *(_DWORD *)v23 = v20 - 196608; /*0x5a6027*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 5, v23, -1, -1); /*0x5a6036*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a604a*/
              }
              else
              {
                if ( !(unsigned __int8)IsAreaClearMap(v51, 0, 0) ) /*0x5a6060*/
                  goto LABEL_38; /*0x5a6060*/
                PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, &v20, -1, -1); /*0x5a6076*/
              }
            }
            v22 = 1; /*0x5a5fd0*/
LABEL_38:
            v14 = 0; /*0x5a5fda*/
            LOWORD(v5) = ++WORD1(v20); /*0x5a5fe1*/
            if ( SWORD1(v20) >= SHIWORD(v28) ) /*0x5a5fed*/
            {
              if ( v21 ) /*0x5a63f7*/
              {
                LOWORD(v29) = v20 + 1; /*0x5a6403*/
                HIWORD(v29) = WORD1(v20) - 1; /*0x5a640e*/
                *(_DWORD *)v23 = v29; /*0x5a6422*/
                PlaceMapSeedClassBuildings(dword_AA0E20 + 3, v23, -1, -1); /*0x5a6426*/
              }
              break; /*0x5a6426*/
            }
          }
        }
        v50[0] = (__int16)v20; /*0x5a642b*/
        v50[1] = SWORD1(v20); /*0x5a6446*/
        v50[2] = 3; /*0x5a644d*/
        v50[3] = 4; /*0x5a6454*/
        if ( !(unsigned __int8)IsAreaClearMap(v50, 0, 0) ) /*0x5a645f*/
          goto LABEL_72; /*0x5a645f*/
        do /*0x5a648f*/
        {
          *(_QWORD *)v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a6472*/
          LOWORD(v18) = Math::RoundToInt((double)*(__int64 *)v46 * 4.656612874161595e-10); /*0x5a6487*/
        }
        while ( v18 > 1 ); /*0x5a648f*/
        if ( v18 ) /*0x5a6493*/
          LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, &v20, -1, -1); /*0x5a64a6*/
        else
LABEL_72:
          LOWORD(v5) = PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, &v20, -1, -1); /*0x5a64bd*/
LABEL_73:
        v13 = v27 - 10; /*0x5a64c9*/
        v24 += 10; /*0x5a64d4*/
        v27 -= 10; /*0x5a64da*/
      }
      else
      {
        v24 += 2; /*0x5a64e0*/
        v13 -= 2; /*0x5a64e6*/
        v27 = v13; /*0x5a64e9*/
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
    *(_QWORD *)&v35[0] = (unsigned int)Random::State(&unk_ABE890); /*0x5a6573*/
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
  v40 = &DynamicVectorClass<char *>::`vftable'; /*0x5a65ba*/
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
  v11 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a6626*/
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
        v36 = (unsigned int)Random::State(&unk_ABE890); /*0x5a667f*/
        v13 = Math::RoundToInt((double)v36 * v35[0] * 2.328306437080797e-10); /*0x5a6695*/
        v32 = v13; /*0x5a669c*/
      }
      while ( v13 > v12 ); /*0x5a66a0*/
      IndexByName = BuildingTypeClass::FindIndexByName(*((void **)Block + v13)); /*0x5a66b5*/
      v15 = __2_YAPAXI_Z(0x720u); /*0x5a66b7*/
      v16 = v15 ? BuildingClass::Construct((int)v15, *((_DWORD *)dword_A83C6C + IndexByName), Owner) : 0;
      v28 = 0; /*0x5a66db*/
      v27 = 0; /*0x5a66df*/
      while ( v28 < 60 ) /*0x5a6701*/
      {
        v17 = *(_DWORD *)(v1 + 16) - 1; /*0x5a670e*/
        v37 = *(unsigned int *)(v1 + 16); /*0x5a6712*/
        v35[0] = (double)v37; /*0x5a671a*/
        do /*0x5a6745*/
        {
          v38 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6728*/
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
          v21 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v35); /*0x5a67a7*/
          if ( !CellClass::InBounds(v21) && !CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21[57]
            || v21[59] == 3
            || !Type::CheckAmbiguity(&dword_87F7E8, (int)v21, 1) )
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
  v40 = &VectorClass<char *>::`vftable'; /*0x5a68f5*/
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

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&unk_ABE890); /*0x5a694a*/
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
        v23 = (unsigned int)Random::State(&unk_ABE890); /*0x5a69a2*/
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
        v8 = (_DWORD *)UnitClass::Construct((int)v9, *((_DWORD *)dword_A83CE4 + Index), Owner); /*0x5a6a2b*/
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (_DWORD *)InfantryClass::Construct((int)v6, *((_DWORD *)dword_A8E34C + ExitCellByName), Owner); /*0x5a69f6*/
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
          v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v18) + 57) )
        {
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6ad0*/
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
char __thiscall sub_5A6BA0(ObjectClass *this)
{
  int vtable0_high; // eax
  int vtable0_low; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  CellLand *v8; // eax
  __int16 v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  vtable0_high = SHIWORD(this->AbstractClass); /*0x5a6ba3*/
  vtable0_low = SLOWORD(this->AbstractClass); /*0x5a6ba7*/
  v3 = vtable0_low + 7; /*0x5a6bae*/
  v4 = vtable0_low - 7; /*0x5a6bb1*/
  v5 = vtable0_high - 7; /*0x5a6bb6*/
  v11 = vtable0_low + 7; /*0x5a6bb9*/
  v6 = vtable0_high + 7; /*0x5a6bbd*/
  if ( __OFSUB__(vtable0_low - 7, vtable0_low + 7) ) /*0x5a6bc0*/
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
    v8 = (CellLand *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x5a6bdc*/
    if ( (unsigned __int8)CellLand::IsBuildable(v8) ) /*0x5a6be3*/
      return 0; /*0x5a6bfa*/
    if ( ++v7 >= v6 ) /*0x5a6bef*/
    {
      v3 = v11; /*0x5a6bf1*/
      goto LABEL_6; /*0x5a6bf1*/
    }
  }
}



// ==== 0x005A6C10  PlaceMapSeedClassBuildings  this=MapSeed  sig=csp ====
int __fastcall MapSeedClass_PlaceBuildings(int a1, _WORD *a2, int a3, int a4)
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
  _WORD *v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]

  v19 = a2; /*0x5a6c1a*/
  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a6c1e*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a6c26*/
  v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = v4[186]; /*0x5a6c38*/
    v6 = 0; /*0x5a6c3e*/
    v17 = 0; /*0x5a6c42*/
    if ( result > 0 ) /*0x5a6c46*/
    {
      v7 = dword_ABED04; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = v19[1] + v6; /*0x5a6c6e*/
          LOWORD(v18) = i + *v19; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          v16 = v18; /*0x5a6c83*/
          v10 = v9; /*0x5a6c8a*/
          v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > dword_ABED08 ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a6cc4*/
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
                if ( dword_ABED10 ) /*0x5a6d1b*/
                  *((_DWORD *)dword_ABED10 + 20 * (__int16)v16 + 20 * g_MapCellWidth * SHIWORD(v16) + 14) = a3; /*0x5a6d3a*/
              }
              v7 = dword_ABED04; /*0x5a6d3e*/
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
_DWORD *__stdcall FindClearPlacementCell(_DWORD *a1, __int16 *a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  __int16 v11; // ax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _WORD *v18; // esi
  __int16 v19; // cx
  int v20; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  __int64 v24; // [esp+20h] [ebp-18h]
  double v25; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  int v28; // [esp+40h] [ebp+8h]
  int v29; // [esp+44h] [ebp+Ch]
  int v30; // [esp+44h] [ebp+Ch]
  int v31; // [esp+48h] [ebp+10h]

  v4 = *(_DWORD *)a2; /*0x5a6d8d*/
  v5 = 0; /*0x5a6d91*/
  LOBYTE(v24) = a4 == 4; /*0x5a6d96*/
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
    if ( (__int16)v20 >= *a3 + a3[2] || SHIWORD(v20) >= a3[1] + a3[3] ) /*0x5a6e24*/
    {
      *a1 = 0; /*0x5a6e90*/
      return a1; /*0x5a6e96*/
    }
    if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(v29) = v20 + LOWORD(dword_89F688[v9]); /*0x5a6e65*/
    HIWORD(v29) = HIWORD(v20) + HIWORD(dword_89F688[v9]); /*0x5a6e6a*/
    v20 = v29; /*0x5a6e73*/
  }
  v11 = v20; /*0x5a6e99*/
  while ( 1 ) /*0x5a6e9d*/
  {
    if ( v11 >= *a3 + a3[2] || SHIWORD(v20) >= a3[1] + a3[3] ) /*0x5a6ebc*/
    {
      *a1 = 0; /*0x5a6f4c*/
      return a1; /*0x5a6f52*/
    }
    LODWORD(v25) = v5 + v11; /*0x5a6ec0*/
    HIDWORD(v25) = v23 + SHIWORD(v20); /*0x5a6ece*/
    v26 = v6 + v21; /*0x5a6edc*/
    v27 = v7 + v22; /*0x5a6ee4*/
    if ( IsAreaClearMap((int *)&v25, v24, v24) ) /*0x5a6eed*/
      break; /*0x5a6eed*/
    v12 = a4 & 7; /*0x5a6efa*/
    HIWORD(v30) = HIWORD(v20) + HIWORD(dword_89F688[v12]); /*0x5a6f23*/
    v11 = v20 + LOWORD(dword_89F688[v12]); /*0x5a6f28*/
    LOWORD(v30) = v11; /*0x5a6f1e*/
    v20 = v30; /*0x5a6f2c*/
  }
  v13 = v20; /*0x5a6f67*/
  v14 = (__int16)v20 - *a2; /*0x5a6f6e*/
  if ( SHIWORD(v20) - a2[1] > v14 ) /*0x5a6f72*/
    v14 = SHIWORD(v20) - a2[1]; /*0x5a6f74*/
  if ( v14 > 0 ) /*0x5a6f78*/
  {
    v24 = (unsigned int)(v14 + 1); /*0x5a6f89*/
    v25 = (double)v24; /*0x5a6f91*/
    do /*0x5a6fc0*/
    {
      v24 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6f9f*/
      v15 = Math::RoundToInt((double)v24 * v25 * 2.328306437080797e-10); /*0x5a6fb9*/
    }
    while ( v15 > (unsigned int)v14 ); /*0x5a6fc0*/
    v28 = v15; /*0x5a6fc4*/
    if ( v15 > 0 ) /*0x5a6fc8*/
    {
      v16 = v21 + v6; /*0x5a6fe0*/
      v17 = v22 + v7; /*0x5a6fe2*/
      v18 = (_WORD *)(4 * (((_BYTE)a4 - 4) & 7) + 9041544); /*0x5a6fe4*/
      v19 = v20; /*0x5a6feb*/
      while ( 1 ) /*0x5a7000*/
      {
        LOWORD(v31) = v19 + *v18; /*0x5a7000*/
        HIWORD(v31) = HIWORD(v20) + v18[1]; /*0x5a700b*/
        LODWORD(v25) = v5 + (__int16)v31; /*0x5a7018*/
        HIDWORD(v25) = v23 + SHIWORD(v31); /*0x5a7022*/
        v26 = v16; /*0x5a7026*/
        v27 = v17; /*0x5a702a*/
        if ( !IsAreaClearMap((int *)&v25, 0, 0) ) /*0x5a702e*/
          break; /*0x5a702e*/
        v19 = v31; /*0x5a703b*/
        v20 = v31; /*0x5a7040*/
        if ( --v28 <= 0 ) /*0x5a704a*/
        {
          *a1 = v31; /*0x5a7053*/
          return a1; /*0x5a7059*/
        }
      }
    }
    v13 = v20; /*0x5a705c*/
  }
  *a1 = v13; /*0x5a7067*/
  return a1; /*0x5a6e7b*/
}



// ==== 0x005A7070  globalHelper_0A7070  this=MapSeedClass  sig=csp ====
_DWORD *__stdcall sub_5A7070(_DWORD *a1, __int16 *a2, _DWORD *a3, int a4)
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
  int v19; // [esp+1Ch] [ebp-28h]
  __int64 v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-18h]
  __int16 v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+38h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-8h]
  int v26; // [esp+40h] [ebp-4h]
  int v27; // [esp+54h] [ebp+10h]
  int v28; // [esp+54h] [ebp+10h]

  v4 = *(_DWORD *)a2; /*0x5a7080*/
  v21 = *(_DWORD *)a2; /*0x5a708e*/
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
    v19 = 6; /*0x5a70c0*/
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
  while ( (__int16)v4 < a3[2] + *a3 + 1 ) /*0x5a70f2*/
  {
    if ( SHIWORD(v21) >= a3[3] + a3[1] + 1 ) /*0x5a7117*/
      break; /*0x5a7117*/
    v23 = v16 + (__int16)v4; /*0x5a711f*/
    v24 = v17 + SHIWORD(v21); /*0x5a712d*/
    v25 = v5 + v18; /*0x5a713b*/
    v26 = v6 + v19; /*0x5a7143*/
    if ( !IsAreaClearMap(&v23, a4 == 4, a4 == 4) ) /*0x5a714c*/
      break; /*0x5a714c*/
    v7 = a4 & 7; /*0x5a7159*/
    LOWORD(v4) = v4 + LOWORD(dword_89F688[v7]); /*0x5a7185*/
    HIWORD(v21) += HIWORD(dword_89F688[v7]); /*0x5a7189*/
  }
  v8 = ((_BYTE)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = HIWORD(v21) + HIWORD(dword_89F688[v8]); /*0x5a71c1*/
  LOWORD(v27) = v4 + LOWORD(dword_89F688[v8]); /*0x5a71c6*/
  v10 = v27; /*0x5a71cb*/
  v11 = (__int16)v27 - *a2; /*0x5a71d7*/
  v22 = HIWORD(v27); /*0x5a71db*/
  if ( v11 <= SHIWORD(v27) - a2[1] ) /*0x5a71df*/
    v11 = SHIWORD(v27) - a2[1]; /*0x5a71e1*/
  if ( v11 > 6 ) /*0x5a71e6*/
  {
    do /*0x5a720e*/
    {
      v20 = (unsigned int)Random::State(&unk_ABE890); /*0x5a71f4*/
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
  *a1 = v10; /*0x5a723d*/
  return a1; /*0x5a723f*/
}



// ==== 0x005A7250  IsAreaClearMap  this=-  sig=csp ====
int __fastcall IsAreaClearMap(int *a1, char a2, char a3)
{
  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int *v12; // esi
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  result = *a1; /*0x5a7262*/
  v5 = (__int16)*a1; /*0x5a7268*/
  v14 = a1[1]; /*0x5a726f*/
  v15 = (__int16)v14 + v5; /*0x5a7278*/
  if ( v15 <= dword_ABED04 ) /*0x5a727c*/
    goto LABEL_31; /*0x5a727c*/
  if ( v5 - (__int16)v14 >= dword_ABED04 ) /*0x5a7288*/
    goto LABEL_31; /*0x5a7288*/
  if ( (__int16)v14 - v5 >= dword_ABED04 ) /*0x5a7292*/
    goto LABEL_31; /*0x5a7292*/
  if ( v15 > dword_ABED08 ) /*0x5a72a4*/
    goto LABEL_31; /*0x5a72a4*/
  v6 = a1[2]; /*0x5a72aa*/
  v7 = (__int16)(result + v6 - 1); /*0x5a72b1*/
  v15 = (__int16)v14 + v7; /*0x5a72bc*/
  if ( v15 <= dword_ABED04 /*0x5a7377*/
    || v7 - (__int16)v14 >= dword_ABED04
    || (__int16)v14 - v7 >= dword_ABED04
    || v15 > dword_ABED08
    || (v16 = a1[3] + v14 - 1, v15 = (__int16)v16 + (__int16)result, v15 <= dword_ABED04)
    || (__int16)result - (__int16)v16 >= dword_ABED04
    || (__int16)v16 - (__int16)result >= dword_ABED04
    || v15 > dword_ABED08
    || (v8 = (__int16)(result + v6 - 1), v9 = (__int16)v16, v16 = (__int16)v16 + v8, v16 <= dword_ABED04)
    || v8 - v9 >= dword_ABED04
    || v9 - v8 >= dword_ABED04
    || v16 > dword_ABED08 )
  {
LABEL_31:
    LOBYTE(result) = 0; /*0x5a742a*/
  }
  else
  {
    v10 = v14; /*0x5a7384*/
    if ( v14 < v14 + a1[3] ) /*0x5a738a*/
    {
      do /*0x5a7418*/
      {
        v11 = result; /*0x5a7390*/
        if ( result < v6 + result ) /*0x5a7397*/
        {
          do /*0x5a73a3*/
          {
            LOWORD(v14) = v11; /*0x5a73a3*/
            HIWORD(v14) = v10; /*0x5a73a8*/
            v12 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a73b2*/
            if ( sub_4866D0(v12) ) /*0x5a73b6*/
            {
              if ( !a2 ) /*0x5a73c5*/
                goto LABEL_31; /*0x5a73c5*/
            }
            else if ( sub_4866F0(v12) ) /*0x5a73cb*/
            {
              if ( !a3 ) /*0x5a73da*/
                goto LABEL_31; /*0x5a73da*/
            }
            else if ( !(unsigned __int8)Cell::IsEmpty(v12) && !(unsigned __int8)CellClass::InMapDataRange(v12) ) /*0x5a73eb*/
            {
              result = CellClass::InBounds(v12); /*0x5a73f6*/
              if ( !(_BYTE)result ) /*0x5a73fd*/
                goto LABEL_31; /*0x5a73fd*/
            }
            v6 = a1[2]; /*0x5a73ff*/
            result = *a1; /*0x5a7402*/
            ++v11; /*0x5a7405*/
          }
          while ( v11 < v6 + *a1 ); /*0x5a73a3*/
        }
        ++v10; /*0x5a740d*/
      }
      while ( v10 < a1[3] + a1[1] ); /*0x5a7418*/
    }
    LOBYTE(result) = 1; /*0x5a7421*/
  }
  return result; /*0x5a741e*/
}



// ==== 0x005A7440  IsMapClassAreaUniform  this=RandomMap  sig=csp ====
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
  if ( v14 > dword_ABED04 && v5 - (__int16)v4 < dword_ABED04 && (__int16)v4 - v5 < dword_ABED04 && v14 <= dword_ABED08 ) /*0x5a748e*/
  {
    v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (__int16)v4 + (__int16)v15; /*0x5a74aa*/
    if ( v14 > dword_ABED04 /*0x5a74d6*/
      && (__int16)v15 - (__int16)v4 < dword_ABED04
      && (__int16)v4 - (__int16)v15 < dword_ABED04
      && v14 <= dword_ABED08 )
    {
      v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (__int16)v16 + (__int16)v3; /*0x5a74f2*/
      if ( v14 > dword_ABED04 /*0x5a751e*/
        && (__int16)v3 - (__int16)v16 < dword_ABED04
        && (__int16)v16 - (__int16)v3 < dword_ABED04
        && v14 <= dword_ABED08 )
      {
        v6 = (__int16)v16; /*0x5a7529*/
        v16 = (__int16)v16 + (__int16)v15; /*0x5a7533*/
        if ( v16 > dword_ABED04 /*0x5a755f*/
          && (__int16)v15 - v6 < dword_ABED04
          && v6 - (__int16)v15 < dword_ABED04
          && v16 <= dword_ABED08 )
        {
          LOWORD(v14) = v3; /*0x5a756f*/
          HIWORD(v14) = v4; /*0x5a7574*/
          v7 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a7579*/
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
            v11 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a75bd*/
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
_DWORD *__fastcall sub_5A7640(_DWORD *a1, int a2)
{
  __int16 v2; // ax
  __int16 v3; // di
  __int16 v4; // bp
  int v5; // esi
  __int16 v6; // bx
  bool v7; // zf
  int *v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = 0; /*0x5a7643*/
  v3 = 999; /*0x5a764d*/
  v4 = 0; /*0x5a7651*/
  v5 = *(_DWORD *)(a2 + 16) - 1; /*0x5a7654*/
  v6 = 999; /*0x5a7655*/
  if ( v5 >= 0 ) /*0x5a7658*/
  {
    v9 = (int *)(*(_DWORD *)(a2 + 4) + 4 * v5); /*0x5a7661*/
    v10 = *(_DWORD *)(a2 + 16); /*0x5a7665*/
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
      v7 = v10 == 1; /*0x5a76a3*/
      --v9; /*0x5a76a4*/
      --v10; /*0x5a76a8*/
    }
    while ( !v7 ); /*0x5a76ac*/
  }
  *a1 = v3; /*0x5a76bb*/
  a1[1] = v6; /*0x5a76c1*/
  a1[2] = v2 - v3 + 1; /*0x5a76c8*/
  a1[3] = v4 - v6 + 1; /*0x5a76cb*/
  return a1; /*0x5a76c7*/
}



// ==== 0x005A76E0  MapSeedClass::ValidateRectBounds  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::ValidateRectBounds(MapSeedClass *this)
{
  int v2; // ecx
  int MapSeedClass_field_0x04; // edi
  int v4; // edx
  int v5; // esi
  Value *v6; // eax
  int Value_field_00; // edx
  int v8; // esi
  __int16 v9; // dx
  CellClass *v10; // edi
  __int16 v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x5a76ee*/
  MapSeedClass_field_0x04 = this->MapSeedClass_field_0x04; /*0x5a76f0*/
  *(_DWORD *)v12 = (__int16)MapSeedClass_field_0x04 + (__int16)v2; /*0x5a76fe*/
  if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a772a*/
    && (__int16)v2 - (__int16)MapSeedClass_field_0x04 < g_MissionQueueFrame.localVariables[160]
    && (__int16)MapSeedClass_field_0x04 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
    && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
  {
    v13 = this->MapSeedClass_field_0x08 + v2 - 1; /*0x5a7737*/
    *(_DWORD *)v12 = (__int16)MapSeedClass_field_0x04 + (__int16)v13; /*0x5a7746*/
    if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a7772*/
      && (__int16)v13 - (__int16)MapSeedClass_field_0x04 < g_MissionQueueFrame.localVariables[160]
      && (__int16)MapSeedClass_field_0x04 - (__int16)v13 < g_MissionQueueFrame.localVariables[160]
      && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
    {
      v14 = this->MapSeedClass_field_0x0C + MapSeedClass_field_0x04 - 1; /*0x5a7782*/
      *(_DWORD *)v12 = (__int16)v14 + (__int16)v2; /*0x5a778e*/
      if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a77ba*/
        && (__int16)v2 - (__int16)v14 < g_MissionQueueFrame.localVariables[160]
        && (__int16)v14 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
        && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
      {
        v4 = (__int16)v14; /*0x5a77c5*/
        v14 = (__int16)v14 + (__int16)v13; /*0x5a77cf*/
        if ( v14 > g_MissionQueueFrame.localVariables[160] /*0x5a77fa*/
          && (__int16)v13 - v4 < g_MissionQueueFrame.localVariables[160]
          && v4 - (__int16)v13 < g_MissionQueueFrame.localVariables[160]
          && v14 <= g_MissionQueueFrame.localVariables[161] )
        {
          if ( __OFSUB__(MapSeedClass_field_0x04, MapSeedClass_field_0x04 + 3) ) /*0x5a7805*/
          {
LABEL_24:
            v8 = *(_DWORD *)this->__pad_0; /*0x5a785b*/
            if ( *(_DWORD *)this->__pad_0 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a7862*/
              return 1; /*0x5a78b9*/
            while ( 1 ) /*0x5a786b*/
            {
              v9 = this->MapSeedClass_field_0x04 + 3; /*0x5a786b*/
              v12[0] = v8; /*0x5a7874*/
              v12[1] = v9; /*0x5a7879*/
              v10 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x5a7883*/
              if ( !(unsigned __int8)CellClass::InBounds(v10) /*0x5a789d*/
                && !(unsigned __int8)Cell::IsEmpty((Cell *)v10)
                && !(unsigned __int8)CellClass::InMapDataRange(v10) )
              {
                break; /*0x5a789d*/
              }
              if ( ++v8 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a78ae*/
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
              if ( ++MapSeedClass_field_0x04 >= this->MapSeedClass_field_0x04 + 3 ) /*0x5a7859*/
                goto LABEL_24; /*0x5a7859*/
            }
            while ( 1 ) /*0x5a7814*/
            {
              v12[0] = v5; /*0x5a7814*/
              v12[1] = MapSeedClass_field_0x04; /*0x5a781f*/
              v6 = (Value *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x5a7824*/
              Value_field_00 = v6[14].Value_field_00; /*0x5a7829*/
              if ( (Value_field_00 < g_CellTileTypeCache || Value_field_00 > g_CellTileTypeCache + 1) /*0x5a783d*/
                && !Value::InRange(v6) )
              {
                break; /*0x5a783d*/
              }
              v2 = *(_DWORD *)this->__pad_0; /*0x5a7846*/
              if ( ++v5 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a784e*/
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
        v33 = (unsigned int)Random::State(&unk_ABE890); /*0x5a79dd*/
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
            v32 = (unsigned int)Random::State(&unk_ABE890); /*0x5a7a7b*/
            v16 = Math::RoundToInt((double)v32 * 0.000000001396983862248478); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          v17 = 0; /*0x5a7aa1*/
          v18 = v16 + dword_AA10A4 + 8; /*0x5a7aa3*/
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
char __thiscall CellClass::ProcessUpdate(CellClass *this)
{
  int v2; // eax
  char *foggedObjects; // ebx
  int v4; // esi
  CellClass *bridgeOwnerCell; // edx
  int v6; // edi
  int v7; // edi
  int v8; // esi
  char *v9; // ecx
  int v10; // edi
  void *v11; // esi
  int v12; // ebx
  char *v14; // [esp+10h] [ebp-Ch]
  __int16 v15[2]; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v2 = this->mapCoords[0]; /*0x5a7b4f*/
  foggedObjects = (char *)this->foggedObjects; /*0x5a7b52*/
  v4 = (__int16)this->mapCoords[0]; /*0x5a7b55*/
  v14 = foggedObjects; /*0x5a7b5b*/
  *(_DWORD *)v15 = (__int16)foggedObjects + v4; /*0x5a7b64*/
  if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7b90*/
    && v4 - (__int16)foggedObjects < g_MissionQueueFrame.localVariables[160]
    && (__int16)foggedObjects - v4 < g_MissionQueueFrame.localVariables[160]
    && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
  {
    bridgeOwnerCell = this->bridgeOwnerCell; /*0x5a7b96*/
    v6 = (__int16)((_WORD)bridgeOwnerCell + v2 - 1); /*0x5a7b9d*/
    *(_DWORD *)v15 = (__int16)foggedObjects + v6; /*0x5a7ba8*/
    if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7bd4*/
      && v6 - (__int16)foggedObjects < g_MissionQueueFrame.localVariables[160]
      && (__int16)foggedObjects - v6 < g_MissionQueueFrame.localVariables[160]
      && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
    {
      v16 = (int)&foggedObjects[this->unknown30 - 1]; /*0x5a7be5*/
      *(_DWORD *)v15 = (__int16)v16 + (__int16)v2; /*0x5a7bf4*/
      if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7c20*/
        && (__int16)v2 - (__int16)v16 < g_MissionQueueFrame.localVariables[160]
        && (__int16)v16 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
        && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
      {
        v7 = (__int16)((_WORD)bridgeOwnerCell + v2 - 1); /*0x5a7c2a*/
        v8 = (__int16)v16; /*0x5a7c2d*/
        v16 = (__int16)v16 + v7; /*0x5a7c37*/
        if ( v16 > g_MissionQueueFrame.localVariables[160] /*0x5a7c63*/
          && v7 - v8 < g_MissionQueueFrame.localVariables[160]
          && v8 - v7 < g_MissionQueueFrame.localVariables[160]
          && v16 <= g_MissionQueueFrame.localVariables[161] )
        {
          v9 = foggedObjects; /*0x5a7c69*/
          if ( (int)foggedObjects >= (int)&foggedObjects[this->unknown30] ) /*0x5a7c78*/
            return 1; /*0x5a7cf2*/
          while ( 1 ) /*0x5a7c7a*/
          {
            v10 = v2; /*0x5a7c7a*/
            if ( v2 < (int)bridgeOwnerCell->mapCoords + v2 ) /*0x5a7c81*/
              break; /*0x5a7c81*/
LABEL_24:
            v14 = ++v9; /*0x5a7ce3*/
            if ( (int)v9 >= (int)this->foggedObjects + this->unknown30 ) /*0x5a7ce7*/
              return 1; /*0x5a7ce7*/
          }
          while ( 1 ) /*0x5a7c87*/
          {
            v15[1] = (__int16)v9; /*0x5a7c87*/
            v15[0] = v10; /*0x5a7c92*/
            v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x5a7c9c*/
            v12 = *((_DWORD *)v11 + 14); /*0x5a7ca0*/
            if ( !(unsigned __int8)CellClass::InBounds((CellClass *)v11) /*0x5a7cba*/
              && (v12 < dword_AA10A4 || v12 > dword_AA10A4 + 7) )
            {
              break; /*0x5a7cba*/
            }
            if ( *((_DWORD *)v11 + 57) ) /*0x5a7cbc*/
              break; /*0x5a7cbc*/
            bridgeOwnerCell = this->bridgeOwnerCell; /*0x5a7cc6*/
            v2 = this->mapCoords[0]; /*0x5a7cc9*/
            ++v10; /*0x5a7ccc*/
            v9 = v14; /*0x5a7cd2*/
            if ( v10 >= (int)bridgeOwnerCell->mapCoords + this->mapCoords[0] ) /*0x5a7cd6*/
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

  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7d0b*/
  v6 = *v4; /*0x5a7d13*/
  v19 = a2; /*0x5a7d15*/
  v16 = v4; /*0x5a7d19*/
  v20 = (*(int (__thiscall **)(_DWORD *))(v6 + 156))(v4); /*0x5a7d25*/
  if ( v20 ) /*0x5a7d29*/
  {
    v7 = 0; /*0x5a7d35*/
    if ( (int)v4[186] > 0 ) /*0x5a7d39*/
    {
      v8 = dword_ABED04; /*0x5a7d3f*/
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
        if ( v12 <= v8 || (__int16)v18 - v11 >= v8 || v11 - (__int16)v18 >= v8 || v12 > dword_ABED08 ) /*0x5a7da5*/
        {
          if ( a4 ) /*0x5a7e6d*/
            return 0; /*0x5a7e6d*/
        }
        else
        {
          v13 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v17); /*0x5a7dba*/
          v14 = *(_DWORD *)(v20 + 4 * (v9 + v7 * v16[185]) + 16); /*0x5a7dcf*/
          if ( v14 /*0x5a7e27*/
            && (!Cell::IsEmpty(v13) && !sub_4863A0(v13)
             || *((unsigned __int8 *)v13 + 284) != *(char *)(v14 + 42)
             || a3 && *((_BYTE *)dword_ABED10 + 80 * (__int16)v17 + 80 * g_MapCellWidth * SHIWORD(v17) + 70)) )
          {
            return 0; /*0x5a7e7a*/
          }
          v8 = dword_ABED04; /*0x5a7e2f*/
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

  v2 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 156))(v2); /*0x5a7ea9*/
  v13 = result; /*0x5a7eb1*/
  if ( result ) /*0x5a7eb5*/
  {
    result = v2[186]; /*0x5a7ebb*/
    v4 = 0; /*0x5a7ec1*/
    if ( result > 0 ) /*0x5a7ec5*/
    {
      v5 = dword_ABED04; /*0x5a7ecd*/
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
            if ( (__int16)v9 - SHIWORD(v9) >= v5 || SHIWORD(v9) - (__int16)v9 >= v5 || v7 > dword_ABED08 ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(_DWORD *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((_BYTE *)v8 + 282) = 0; /*0x5a7f5a*/
              }
              v5 = dword_ABED04; /*0x5a7f61*/
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
  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7fac*/
  v14 = v4; /*0x5a7fb5*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a7fbb*/
  v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      v6 = dword_ABED04; /*0x5a7fe3*/
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
            if ( v10 - v11 >= v6 || v11 - v10 >= v6 || v12 > dword_ABED08 ) /*0x5a802f*/
            {
              result = v13; /*0x5a806a*/
            }
            else
            {
              result = v13; /*0x5a8031*/
              if ( *(_DWORD *)(v16 + 4 * (i + v13 * v7) + 16) ) /*0x5a803e*/
              {
                *((_BYTE *)dword_ABED10 + 80 * v10 + 80 * g_MapCellWidth * v11 + 70) = a3; /*0x5a805e*/
                v6 = dword_ABED04; /*0x5a8062*/
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
int __thiscall RandomMap::PlaceMapSeedBuildings(RandomMap *this)
{
  int v1; // edx
  int v3; // ecx
  char *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  char *v8; // eax
  int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // esi
  _WORD *v17; // eax
  Cell *v18; // eax
  int v19; // eax
  ObjectClass *v20; // esi
  __int16 v21[2]; // [esp+10h] [ebp-4Ch] BYREF
  int v22; // [esp+14h] [ebp-48h]
  int v23; // [esp+18h] [ebp-44h]
  int v24; // [esp+1Ch] [ebp-40h]
  __int16 v25[2]; // [esp+20h] [ebp-3Ch] BYREF
  double v26; // [esp+24h] [ebp-38h]
  int v27; // [esp+2Ch] [ebp-30h]
  int v28; // [esp+30h] [ebp-2Ch]
  ObjectClass *v29; // [esp+34h] [ebp-28h]
  __int16 v30; // [esp+38h] [ebp-24h] BYREF
  __int64 v31; // [esp+3Ch] [ebp-20h]
  __int64 v32; // [esp+44h] [ebp-18h]
  int v33[4]; // [esp+4Ch] [ebp-10h] BYREF

  v1 = dword_ABC1D4; /*0x5a80b3*/
  v29 = (ObjectClass *)this; /*0x5a80c1*/
  v3 = 0; /*0x5a80c5*/
  v4 = &g_MissionQueueFrame.globalVariables[248]; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    v5 = v1 + v3++; /*0x5a80cc*/
    *(_DWORD *)v4 = v5; /*0x5a80d0*/
    v4 += 12; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&g_MissionQueueFrame.globalVariables[1460] ); /*0x5a80da*/
  v6 = dword_ABBEC0; /*0x5a80dc*/
  v7 = 0; /*0x5a80e2*/
  v8 = &g_MissionQueueFrame.globalVariables[1460]; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    v9 = v6 + v7++; /*0x5a80e9*/
    *(_DWORD *)v8 = v9; /*0x5a80ed*/
    v8 += 12; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)&g_MissionQueueFrame.globalVariables[1556] ); /*0x5a80f7*/
  LOWORD(v10) = Math::RoundToInt((double)*(int *)&this->__pad_4C[20] + 0.49 + (double)*(int *)&this->__pad_4C[20] + 0.49); /*0x5a8104*/
  v28 = v10; /*0x5a8109*/
  v27 = 0; /*0x5a810d*/
  v23 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v28; /*0x5a8115*/
    if ( v23 >= v28 ) /*0x5a811f*/
      break; /*0x5a811f*/
    v21[0] = 0; /*0x5a8125*/
    v21[1] = 0; /*0x5a812a*/
    v22 = 0; /*0x5a812f*/
LABEL_8:
    v12 = g_MapCellWidth; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
      v13 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
        v14 = v12 * v12 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          v31 = v14 + 1; /*0x5a814a*/
          v26 = (double)v31; /*0x5a8152*/
          do /*0x5a817f*/
          {
            v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8160*/
            LOWORD(v15) = Math::RoundToInt((double)v32 * v26 * 2.328306437080797e-10); /*0x5a8176*/
            v16 = v15; /*0x5a817b*/
          }
          while ( v15 > v14 ); /*0x5a817f*/
          v17 = CellStruct::Set((CellStruct *)&v30, 0, 0); /*0x5a8187*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a819b*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v16),
                                   v17) );
        ++v13; /*0x5a81af*/
        *(_DWORD *)v25 = *(_DWORD *)(80 * v16 + g_MissionQueueFrame.localVariables[163]); /*0x5a81b9*/
        if ( v13 > 200 ) /*0x5a81bd*/
        {
          v24 = 0; /*0x5a81e4*/
          v19 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x5a81c9*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v12 = g_MapCellWidth; /*0x5a81d9*/
      }
      v19 = *(_DWORD *)v25; /*0x5a81f4*/
LABEL_19:
      LODWORD(v26) = v19; /*0x5a81fc*/
      *(_DWORD *)v21 = v19; /*0x5a8201*/
      if ( ++v22 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v12 = g_MapCellWidth; /*0x5a8213*/
      if ( !*(_BYTE *)(80 * ((__int16)v19 + g_MapCellWidth * SWORD1(v26)) + g_MissionQueueFrame.localVariables[163] + 69) ) /*0x5a822f*/
      {
        v33[0] = (__int16)v19 - 4; /*0x5a823f*/
        v33[1] = SWORD1(v26) - 4; /*0x5a8243*/
        v33[2] = 8; /*0x5a8253*/
        v33[3] = 8; /*0x5a8257*/
        if ( !(unsigned __int8)IsAreaClearMap(v33, 0, 0) /*0x5a8274*/
          || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v21, 1) )
        {
          goto LABEL_8; /*0x5a827b*/
        }
        break; /*0x5a827b*/
      }
    }
    if ( v22 != 20 ) /*0x5a8286*/
    {
      v20 = v29; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings((int *)v21) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v20, v21); /*0x5a82a3*/
        PlaceNeutralCreeps(v21); /*0x5a82af*/
        ++v23; /*0x5a82b4*/
      }
    }
    result = ++v27; /*0x5a82bc*/
  }
  while ( v27 < 10 ); /*0x5a82c4*/
  return result; /*0x5a82ca*/
}



// ==== 0x005A82E0  ObjectClass::ScatterMapSeedBuildings  this=ObjectClass  sig=csp ====
void __thiscall ScatterMapSeedBuildings(ObjectClass *this, __int16 *a2)
{
  unsigned int v3; // eax
  __int16 *v4; // edi
  BombClass *attachedBomb; // eax
  int StringVector_field_0x08; // eax
  int StringVector_field_0x14; // ecx
  char **v8; // esi
  int v9; // eax
  HouseClass *v10; // eax
  int Owner; // eax
  int v12; // ebp
  unsigned int v13; // eax
  int IndexByName; // esi
  int v15; // eax
  _DWORD *v16; // ebp
  unsigned int v17; // eax
  __int16 v18; // si
  unsigned int v19; // eax
  __int16 v20; // bx
  __int16 v21; // di
  int *v22; // ecx
  __int16 v23; // bx
  int v24; // edx
  _WORD *v25; // ebp
  __int16 v26; // dx
  Cell *v27; // esi
  int v28; // edx
  int StringVector_field_0x18; // eax
  char v30; // [esp+14h] [ebp-8Eh]
  char v31; // [esp+15h] [ebp-8Dh]
  _DWORD *v32; // [esp+16h] [ebp-8Ch]
  unsigned int v33; // [esp+1Ah] [ebp-88h]
  int v34; // [esp+1Eh] [ebp-84h]
  int v35; // [esp+22h] [ebp-80h]
  StringVector v36; // [esp+26h] [ebp-7Ch] BYREF
  double v37; // [esp+42h] [ebp-60h]
  int v38; // [esp+4Ah] [ebp-58h]
  int v39; // [esp+4Eh] [ebp-54h]
  int v40; // [esp+52h] [ebp-50h]
  __int16 v41; // [esp+56h] [ebp-4Ch]
  __int16 v42; // [esp+58h] [ebp-4Ah]
  __int64 v43; // [esp+5Ah] [ebp-48h]
  double v44; // [esp+62h] [ebp-40h] BYREF
  int v45; // [esp+6Ah] [ebp-38h]
  __int64 v46; // [esp+6Eh] [ebp-34h]
  __int64 v47; // [esp+76h] [ebp-2Ch]
  __int64 v48; // [esp+7Eh] [ebp-24h]
  __int64 v49; // [esp+86h] [ebp-1Ch]
  __int64 v50; // [esp+8Eh] [ebp-14h]
  _DWORD v51[3]; // [esp+96h] [ebp-Ch] BYREF

  do /*0x5a831e*/
  {
    v43 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a82f6*/
    LOWORD(v3) = Math::RoundToInt((double)v43 * 0.000000001164153218540399 + 8.0); /*0x5a8312*/
    v39 = v3; /*0x5a831a*/
  }
  while ( v3 > 0xC ); /*0x5a831e*/
  v4 = a2; /*0x5a8320*/
  v35 = 0; /*0x5a832f*/
  v34 = 0; /*0x5a8333*/
  LODWORD(v43) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 283); /*0x5a8343*/
  attachedBomb = this->attachedBomb; /*0x5a8347*/
  v38 = 0; /*0x5a834c*/
  v33 = 35; /*0x5a8350*/
  if ( !attachedBomb ) /*0x5a8358*/
    v38 = 15; /*0x5a835a*/
  StringVector::Construct(&v36, 0, 0); /*0x5a8368*/
  StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a836d*/
  StringVector_field_0x14 = 10; /*0x5a8371*/
  *(_DWORD *)v36.__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x5a8376*/
  v36.StringVector_field_0x14 = 10; /*0x5a837e*/
  v36.StringVector_field_0x10 = 0; /*0x5a8382*/
  v8 = off_82B1B0; /*0x5a8386*/
  while ( 1 ) /*0x5a8391*/
  {
    if ( v36.StringVector_field_0x10 < StringVector_field_0x08 ) /*0x5a8395*/
      goto LABEL_11; /*0x5a8395*/
    if ( (BYTE1(v36.StringVector_field_0x0C) || !StringVector_field_0x08) && StringVector_field_0x14 > 0 ) /*0x5a83a5*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(StringVector *, int, _DWORD))(*(_DWORD *)v36.__pad_0 + 8))( /*0x5a83b3*/
             &v36,
             StringVector_field_0x14 + StringVector_field_0x08,
             0) )
      {
LABEL_11:
        v9 = v36.StringVector_field_0x10++; /*0x5a83ba*/
        *(_DWORD *)(v36.StringVector_field_0x04 + 4 * v9) = *v8; /*0x5a83cb*/
      }
      StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a83ce*/
    }
    if ( (int)++v8 >= (int)&off_82B240 ) /*0x5a83db*/
      break; /*0x5a83db*/
    StringVector_field_0x14 = v36.StringVector_field_0x14; /*0x5a838d*/
  }
  v10 = (HouseClass *)SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x5a83e2*/
  Owner = HouseClass::FindOwner(v10); /*0x5a83e9*/
  v12 = v39; /*0x5a83ee*/
  v45 = Owner; /*0x5a83f2*/
  if ( v39 > 0 ) /*0x5a83f8*/
  {
    do /*0x5a86e5*/
    {
      if ( v35 >= 2 * v12 ) /*0x5a8408*/
        break; /*0x5a8408*/
      v49 = (unsigned int)v38; /*0x5a8421*/
      v48 = v33 - v38 + 1; /*0x5a8430*/
      v44 = (double)v48; /*0x5a8438*/
      v37 = (double)(unsigned int)v38; /*0x5a8443*/
      do /*0x5a8476*/
      {
        v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8451*/
        LOWORD(v13) = Math::RoundToInt((double)v46 * v44 * 2.328306437080797e-10 + v37); /*0x5a846b*/
        v36.StringVector_field_0x18 = v13; /*0x5a8472*/
      }
      while ( v13 > v33 ); /*0x5a8476*/
      IndexByName = BuildingTypeClass::FindIndexByName(*(BuildingTypeClass **)(v36.StringVector_field_0x04 + 4 * v13)); /*0x5a8484*/
      if ( IndexByName != -1 ) /*0x5a8489*/
      {
        v15 = __2_YAPAXI_Z(0x720u); /*0x5a8494*/
        if ( v15 ) /*0x5a849e*/
        {
          v16 = (_DWORD *)BuildingClass::Construct(v15, *((_DWORD *)dword_A83C6C + IndexByName), v45); /*0x5a84b6*/
          LODWORD(v37) = 0; /*0x5a84b8*/
          v32 = v16; /*0x5a84bc*/
        }
        else
        {
          v32 = 0; /*0x5a84c7*/
          v16 = 0; /*0x5a84cb*/
          LODWORD(v37) = 0; /*0x5a84cd*/
        }
        v30 = 0; /*0x5a84c0*/
        while ( SLODWORD(v37) < 60 ) /*0x5a84e3*/
        {
          do /*0x5a8518*/
          {
            v50 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a84f3*/
            LOWORD(v17) = Math::RoundToInt((double)v50 * 0.000000003492459655621196); /*0x5a850e*/
            v18 = v17; /*0x5a8513*/
          }
          while ( v17 > 0xE ); /*0x5a8518*/
          do /*0x5a853e*/
          {
            v47 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8524*/
            LOWORD(v19) = Math::RoundToInt((double)v47 * 0.000000003492459655621196); /*0x5a8536*/
          }
          while ( v19 > 0xE ); /*0x5a853e*/
          v20 = *v4; /*0x5a8540*/
          v21 = v18 - 7 + v4[1]; /*0x5a854d*/
          v22 = (int *)v16[328]; /*0x5a8550*/
          v23 = v19 - 7 + v20; /*0x5a8556*/
          v24 = *v22; /*0x5a855b*/
          v41 = v23; /*0x5a855d*/
          v42 = v21; /*0x5a8562*/
          v25 = (_WORD *)(*(int (__thiscall **)(int *, int))(v24 + 144))(v22, 1); /*0x5a856d*/
          v31 = 1; /*0x5a856f*/
          while ( *v25 != 0x7FFF || v25[1] != 0x7FFF ) /*0x5a8582*/
          {
            v26 = v21 + v25[1]; /*0x5a8592*/
            LOWORD(v40) = v41 + *v25; /*0x5a8599*/
            HIWORD(v40) = v26; /*0x5a859e*/
            LODWORD(v44) = v40; /*0x5a85ad*/
            v27 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v44); /*0x5a85b6*/
            if ( v27->Cell_field_0xE4 /*0x5a85eb*/
              || !(unsigned __int8)Cell::IsEmpty(v27)
              || v27->Cell_field_0x11B[0] != (_DWORD)v43
              || *(_DWORD *)&v27->__pad_E8[4] == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)v27, 1) )
            {
              v31 = 0; /*0x5a85f4*/
            }
            v25 += 2; /*0x5a85fd*/
            if ( !v31 ) /*0x5a8602*/
              goto LABEL_43; /*0x5a8602*/
          }
          v51[1] = (v21 << 8) + 128; /*0x5a8630*/
          v51[0] = (v23 << 8) + 128; /*0x5a863b*/
          v28 = *v32; /*0x5a8649*/
          v51[2] = 0; /*0x5a864e*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v28 + 216))(v32, v51, 0) ) /*0x5a8659*/
          {
            StringVector_field_0x18 = v36.StringVector_field_0x18; /*0x5a866b*/
            v30 = 1; /*0x5a8672*/
            ++v34; /*0x5a8677*/
            if ( v36.StringVector_field_0x18 < v36.StringVector_field_0x10 /*0x5a8684*/
              && v36.StringVector_field_0x18 < --v36.StringVector_field_0x10 )
            {
              do /*0x5a8698*/
              {
                ++StringVector_field_0x18; /*0x5a868a*/
                *(_DWORD *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18 - 4) = *(_DWORD *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18); /*0x5a868e*/
              }
              while ( StringVector_field_0x18 < v36.StringVector_field_0x10 ); /*0x5a8698*/
            }
            --v33; /*0x5a869a*/
          }
LABEL_43:
          v4 = a2; /*0x5a869e*/
          ++LODWORD(v37); /*0x5a86b0*/
          if ( v30 ) /*0x5a86b4*/
            goto LABEL_47; /*0x5a86b4*/
          v16 = v32; /*0x5a84d8*/
        }
        if ( v16 ) /*0x5a86c8*/
          (*(void (__thiscall **)(_DWORD *, int))(*v16 + 32))(v16, 1); /*0x5a86d1*/
LABEL_47:
        v12 = v39; /*0x5a86d4*/
        ++v35; /*0x5a86dd*/
      }
    }
    while ( v34 < v12 ); /*0x5a86e5*/
  }
  *(_DWORD *)v36.__pad_0 = &VectorClass<char *>::`vftable'; /*0x5a86f4*/
  if ( v36.StringVector_field_0x04 ) /*0x5a86fd*/
  {
    if ( BYTE1(v36.StringVector_field_0x0C) ) /*0x5a8705*/
      __3_YAXPAX_Z((void *)v36.StringVector_field_0x04); /*0x5a8708*/
  }
}



// ==== 0x005A8720  PlaceNeutralCreeps  this=ObjectClass  sig=csp ====
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

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a874a*/
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
        v27 = (unsigned int)Random::State(&unk_ABE890); /*0x5a87a2*/
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
                         *((_DWORD *)dword_A83CE4 + IndexBuildingTypeClass),
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
                         *((_DWORD *)dword_A8E34C + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      v11 = 0; /*0x5a8831*/
      v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
        do /*0x5a8866*/
        {
          v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a884a*/
          v12 = Math::RoundToInt((double)v28 * 0.000000003958120943037356); /*0x5a8861*/
        }
        while ( v12 > 0x10 ); /*0x5a8866*/
        do /*0x5a888c*/
        {
          v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a8872*/
          v13 = Math::RoundToInt((double)v29 * 0.000000003958120943037356); /*0x5a8884*/
        }
        while ( v13 > 0x10 ); /*0x5a888c*/
        v14 = v12 - 8; /*0x5a8892*/
        v15 = v13 - 8 + *a1; /*0x5a889d*/
        v16 = v14 + a1[1]; /*0x5a88a4*/
        LOWORD(v25) = v15; /*0x5a88a7*/
        WORD1(v25) = v16; /*0x5a88ac*/
        v21 = v25; /*0x5a88b9*/
        if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v21) + 57) )
        {
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&unk_ABE890); /*0x5a88f5*/
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



// ==== 0x005A89D0  ScheduleMapSeedBuildings  this=ObjectClass  sig=csp ====
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
    v48 = (unsigned int)Random::State(&unk_ABE890); /*0x5a8a14*/
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
              v27 = HIWORD(dword_89F688[v50 & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v39[1]) + v49 + LOWORD(dword_89F688[v50 & 7]); /*0x5a8c94*/
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
      v7 = Random::Gaussian((double *)&byte_ABDFB8) * v27 + v25; /*0x5a8f91*/
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
      if ( (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 < 0.7 ) /*0x5a9006*/
      {
        do /*0x5a904b*/
        {
          v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a9028*/
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
      v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a9071*/
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



// ==== 0x005A95B0  ObjectClass::PlaceRandomAIBuildings  this=ObjectClass  sig=csp ====
_DWORD *__thiscall PlaceRandomAIBuildings(ObjectClass *this)
{
  _DWORD *result; // eax
  int v2; // ecx
  _DWORD *v3; // edi
  int i; // esi
  HouseClass *v5; // eax
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // eax
  _DWORD **v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  _WORD *v13; // eax
  Cell *v14; // eax
  int v15; // eax
  int v16; // ebp
  _WORD *v17; // edi
  char v18; // bl
  __int16 v19; // dx
  Cell *v20; // esi
  _DWORD *v21; // eax
  char v22; // [esp+13h] [ebp-4Dh]
  __int16 v23[2]; // [esp+14h] [ebp-4Ch] BYREF
  _DWORD *v24; // [esp+18h] [ebp-48h]
  int v25; // [esp+1Ch] [ebp-44h]
  __int16 v26[2]; // [esp+20h] [ebp-40h] BYREF
  int v27; // [esp+24h] [ebp-3Ch]
  _DWORD *v28; // [esp+28h] [ebp-38h]
  int Owner; // [esp+2Ch] [ebp-34h]
  __int16 v30[4]; // [esp+30h] [ebp-30h] BYREF
  __int16 v31; // [esp+38h] [ebp-28h] BYREF
  __int64 v32; // [esp+3Ch] [ebp-24h] BYREF
  __int64 v33; // [esp+44h] [ebp-1Ch]
  __int64 v34; // [esp+4Ch] [ebp-14h]
  _DWORD v35[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( this->ambientSoundController[0] == 2 ) /*0x5a95bd*/
  {
    do /*0x5a95e7*/
    {
      v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a95c9*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 6.984919311242392e-10); /*0x5a95df*/
    }
    while ( (unsigned int)result > 2 ); /*0x5a95e7*/
    if ( (int)result > 0 ) /*0x5a95eb*/
    {
      v2 = g_MissionQueueFrame.briefing[342]; /*0x5a95f1*/
      v3 = result; /*0x5a95f7*/
      result = (_DWORD *)g_MissionQueueFrame.briefing[339]; /*0x5a95f9*/
      do /*0x5a9626*/
      {
        for ( i = 0; i < v2; ++i ) /*0x5a9602*/
        {
          if ( *(int *)(result[i] + 32) > 0 ) /*0x5a960c*/
          {
            PlaceNeutralBuilding((ObjectClass *)result[i]); /*0x5a9610*/
            v2 = g_MissionQueueFrame.briefing[342]; /*0x5a9615*/
            result = (_DWORD *)g_MissionQueueFrame.briefing[339]; /*0x5a961b*/
          }
        }
        v3 = (_DWORD *)((char *)v3 - 1); /*0x5a9625*/
      }
      while ( v3 ); /*0x5a9626*/
    }
  }
  else
  {
    v5 = (HouseClass *)SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x5a9635*/
    Owner = HouseClass::FindOwner(v5); /*0x5a9641*/
    do /*0x5a966d*/
    {
      v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a964f*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 0.000000001164153218540399); /*0x5a9665*/
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
          v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2796) - 1; /*0x5a96a8*/
          v33 = *(unsigned int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2796); /*0x5a96ac*/
          *(double *)v30 = (double)v33; /*0x5a96b4*/
          do /*0x5a96df*/
          {
            v34 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a96c2*/
            LOWORD(v9) = Math::RoundToInt((double)v34 * *(double *)v30 * 2.328306437080797e-10); /*0x5a96d8*/
          }
          while ( v9 > v8 ); /*0x5a96df*/
          v10 = (_DWORD **)BuildingClass::Construct( /*0x5a96fd*/
                             v7,
                             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2784) + 4 * v9),
                             Owner);
          v24 = v10; /*0x5a96ff*/
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
            v11 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a9726*/
            do /*0x5a9750*/
            {
              v12 = Range_RandomInt(0, v11); /*0x5a973a*/
              v13 = CellStruct::Set((CellStruct *)&v31, 0, 0); /*0x5a973c*/
            }
            while ( (unsigned __int8)CellStruct::Equals( /*0x5a9750*/
                                       (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v12),
                                       v13) );
            ++v6; /*0x5a9765*/
            *(_DWORD *)v26 = *(_DWORD *)(80 * v12 + g_MissionQueueFrame.localVariables[163]); /*0x5a976f*/
            if ( v6 > 200 ) /*0x5a9773*/
            {
              v15 = *(_DWORD *)CellStruct::Set((CellStruct *)&v32, 0, 0); /*0x5a979e*/
              goto LABEL_29; /*0x5a97a0*/
            }
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x5a977f*/
          }
          while ( !(unsigned __int8)Cell::IsEmpty(v14) ); /*0x5a9786*/
          v15 = *(_DWORD *)v26; /*0x5a97a2*/
LABEL_29:
          *(_DWORD *)v23 = v15; /*0x5a97a6*/
          v16 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x5a97c1*/
          v17 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int))(*v10[328] + 144))(v10[328], 1); /*0x5a97d0*/
          v18 = 1; /*0x5a97d2*/
          while ( *v17 != 0x7FFF || v17[1] != 0x7FFF ) /*0x5a97e1*/
          {
            v19 = v23[1] + v17[1]; /*0x5a97ef*/
            LOWORD(v27) = v23[0] + *v17; /*0x5a97fa*/
            HIWORD(v27) = v19; /*0x5a97ff*/
            *(_DWORD *)v30 = v27; /*0x5a980e*/
            v20 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x5a9817*/
            if ( v20->Cell_field_0xE4 /*0x5a986f*/
              || !(unsigned __int8)Cell::IsEmpty(v20)
              || v20->Cell_field_0x11B[0] != v16
              || *(_DWORD *)&v20->__pad_E8[4] == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)v20, 1)
              || *(_BYTE *)(80 * (*(__int16 *)&v20->__pad_1C[8] + g_MapCellWidth * *(__int16 *)&v20->__pad_1C[10])
                          + g_MissionQueueFrame.localVariables[163]
                          + 69) )
            {
              v18 = 0; /*0x5a9877*/
            }
            v17 += 2; /*0x5a9879*/
            if ( !v18 ) /*0x5a987e*/
              goto LABEL_43; /*0x5a987e*/
          }
          v35[0] = (v23[0] << 8) + 128; /*0x5a98a1*/
          v35[2] = 0; /*0x5a98af*/
          v21 = (_DWORD *)*v24; /*0x5a98b7*/
          v35[1] = (v23[1] << 8) + 128; /*0x5a98b9*/
          if ( ((unsigned __int8 (__thiscall *)(_DWORD *, _DWORD *, _DWORD))v21[54])(v24, v35, 0) ) /*0x5a98c2*/
            v22 = 1; /*0x5a98cc*/
LABEL_43:
          ++v25; /*0x5a98d1*/
          if ( v22 ) /*0x5a98e0*/
          {
            v6 = 0; /*0x5a98e6*/
            goto LABEL_47; /*0x5a98e8*/
          }
          v10 = (_DWORD **)v24; /*0x5a970d*/
          v6 = 0; /*0x5a9711*/
        }
        if ( v10 ) /*0x5a98f4*/
          ((void (__thiscall *)(_DWORD **, int))(*v10)[8])(v10, 1); /*0x5a98fc*/
LABEL_47:
        result = (_DWORD *)((char *)v28 - 1); /*0x5a98ff*/
        v28 = (_DWORD *)((char *)v28 - 1); /*0x5a9904*/
      }
      while ( v28 ); /*0x5a9908*/
    }
  }
  return result; /*0x5a9628*/
}



// ==== 0x005A9920  ObjectClass::method_5A9920  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A9920(ObjectClass *this, _DWORD *a2, int a3)
{
  this->AbstractClass = (void *)*a2; /*0x5a992c*/
  this->? = (void *)a3; /*0x5a992e*/
  return &this->AbstractClass; /*0x5a9931*/
}



// ==== 0x005A9940  Cell::Clear  this=Cell  sig=csp ====
_WORD *__thiscall Cell::Clear(Cell *this)
{
  this->Cell_field_0x0 = 0; /*0x5a9942*/
  this->Cell_field_0x4 = (void *)-1; /*0x5a994d*/
  return this; /*0x5a9954*/
}



// ==== 0x005A9960  ObjectClass::method_5A9960  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A9960(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x5a9968*/
  this->? = (void *)a2[1]; /*0x5a996d*/
  return &this->AbstractClass; /*0x5a9970*/
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
_DWORD *__thiscall Object_Helper_5A99B0(ObjectClass *this)
{
  this->AbstractClass = (void *)0xFFFF; /*0x5a99d1*/
  this->? = 0; /*0x5a99d7*/
  this->? = (void *)0xFFFF; /*0x5a99da*/
  this->? = 0; /*0x5a99e1*/
  this->? = -1; /*0x5a99e4*/
  return &this->AbstractClass; /*0x5a99ec*/
}



// ==== 0x005A99F0  ObjectClass::method_5A99F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A99F0(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x5a99f8*/
  this->? = (void *)a2[1]; /*0x5a99fd*/
  this->? = (void *)a2[2]; /*0x5a9a03*/
  this->? = (void *)a2[3]; /*0x5a9a09*/
  this->? = a2[4]; /*0x5a9a0f*/
  return &this->AbstractClass; /*0x5a9a12*/
}



// ==== 0x005A9A20  ListNode::Alloc  this=ListNode  sig=csp ====
_DWORD *__thiscall ListNode::Alloc(ListNode *this, _DWORD *a2)
{
  int v3; // eax

  *((_DWORD *)this + 2) = 0; /*0x5a9a25*/
  *this = (ListNode)1; /*0x5a9a2c*/
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
  *((_DWORD *)this + 1) = v3; /*0x5a9a58*/
  *(_DWORD *)v3 = *a2; /*0x5a9a5d*/
  *(_DWORD *)(v3 + 4) = a2[1]; /*0x5a9a62*/
  return this; /*0x5a9a67*/
}



// ==== 0x005A9A70  WaypointPath::Constructor  this=WaypointPath  sig=csp ====
_DWORD *__thiscall WaypointPath::Constructor(WaypointPath *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // edx

  *((_DWORD *)this + 2) = 0; /*0x5a9a78*/
  *this = (WaypointPath)2; /*0x5a9a7b*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x5a9a81*/
  if ( v4 ) /*0x5a9a8b*/
  {
    v5 = v4 + 1; /*0x5a9a8d*/
    v6 = 2; /*0x5a9a90*/
    do /*0x5a9aa7*/
    {
      *((_WORD *)v5 - 2) = 0; /*0x5a9a95*/
      *((_WORD *)v5 - 1) = 0; /*0x5a9a99*/
      *v5 = -1; /*0x5a9a9d*/
      v5 += 2; /*0x5a9aa3*/
      --v6; /*0x5a9aa6*/
    }
    while ( v6 ); /*0x5a9aa7*/
  }
  else
  {
    v4 = 0; /*0x5a9aab*/
  }
  *((_DWORD *)this + 1) = v4; /*0x5a9ab1*/
  *v4 = *a2; /*0x5a9ab7*/
  v4[1] = a2[1]; /*0x5a9abc*/
  v7 = *((_DWORD *)this + 1); /*0x5a9ac3*/
  *(_DWORD *)(v7 + 8) = *a3; /*0x5a9ac8*/
  *(_DWORD *)(v7 + 12) = a3[1]; /*0x5a9ace*/
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
_DWORD *InitializePathData(ObjectClass *this)
{
  int *v1; // eax
  int *v2; // ebp
  int *v3; // eax
  int *v4; // eax
  int *v5; // ebp
  int *v6; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int *v27; // eax
  int *v28; // eax
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  int *v32; // eax
  int *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int *v43; // eax
  int *v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int *v49; // eax
  int *v50; // eax
  int *v... [61871 chars total]



// ==== 0x005AC190  sub_5AC190  this=-  sig=ida-proto ====
void __cdecl sub_5AC190()
{
  _DWORD *v0; // esi
  int v1; // edi
  void *v2; // eax

  v0 = &unk_ABE890; /*0x5ac192*/
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
int __thiscall MapSeed::IsCellInBounds(MapSeed *this)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = *(__int16 *)this->__pad_0; /*0x5ac230*/
  result = *(__int16 *)&this->__pad_0[2]; /*0x5ac233*/
  v3 = result + v1; /*0x5ac23e*/
  LOBYTE(result) = result + v1 > g_MissionQueueFrame.localVariables[160] /*0x5ac261*/
                && v1 - result < g_MissionQueueFrame.localVariables[160]
                && (result -= v1, result < g_MissionQueueFrame.localVariables[160])
                && v3 <= g_MissionQueueFrame.localVariables[161];
  return result; /*0x5ac25f*/
}



// ==== 0x005AC270  MapSeedClass::QueryInterface  this=MapSeedClass  sig=csp ====
_DWORD *__thiscall MapSeedClass::QueryInterface(MapSeedClass *this, char a2)
{
  LoadOptions::Cleanup((LoadOptions *)this); /*0x5ac273*/
  if ( (a2 & 1) != 0 ) /*0x5ac27d*/
    __3_YAXPAX_Z(this); /*0x5ac280*/
  return this->__pad_0; /*0x5ac28a*/
}



// ==== 0x005AC290  RandomMap::Constructor_VectorClass_Cell_  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_VectorClass_Cell_(RandomMap *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax
  void *v5; // eax
  RandomMap *v7; // [esp+4h] [ebp-4h] BYREF

  v3 = *(void (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x5ac294*/
  if ( v3 ) /*0x5ac298*/
  {
    (**v3)(v3, 1); /*0x5ac29e*/
    *(_DWORD *)this->__pad_0 = 0; /*0x5ac2a0*/
  }
  v7 = this; /*0x5ac2b6*/
  v4 = (*(int (__thiscall **)(int *, RandomMap **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x5ac2ba*/
         &g_MissionQueueFrame.briefing[338],
         &v7);
  if ( v4 != -1 && v4 < g_MissionQueueFrame.briefing[342] ) /*0x5ac2ca*/
  {
    --g_MissionQueueFrame.briefing[342]; /*0x5ac2cf*/
    for ( ; /*0x5ac2d5*/
          v4 < g_MissionQueueFrame.briefing[342];
          *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v4 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                  + 4 * v4) )
    {
      ++v4; /*0x5ac2dd*/
    }
  }
  v5 = (void *)this->RandomMap_field_0x2C[0]; /*0x5ac2ef*/
  this->RandomMap_field_0x28[0] = (int)&VectorClass<Cell>::`vftable'; /*0x5ac2f2*/
  if ( v5 && BYTE1(this->RandomMap_field_0x34[0]) ) /*0x5ac2fd*/
  {
    __3_YAXPAX_Z(v5); /*0x5ac305*/
    this->RandomMap_field_0x2C[0] = 0; /*0x5ac30d*/
  }
  BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x5ac318*/
  this->RandomMap_field_0x30 = 0; /*0x5ac31e*/
  if ( (a2 & 1) != 0 ) /*0x5ac325*/
    __3_YAXPAX_Z(this); /*0x5ac328*/
  return this->__pad_0; /*0x5ac332*/
}



// ==== 0x005AC340  Scalar::Dtor  this=Scalar  sig=csp ====
void **__thiscall Scalar::Dtor(Scalar *this, char a2)
{
  __3_YAXPAX_Z(*((void **)this + 2)); /*0x5ac347*/
  if ( (a2 & 1) != 0 ) /*0x5ac355*/
    __3_YAXPAX_Z(this); /*0x5ac358*/
  return (void **)this; /*0x5ac362*/
}



// ==== 0x005AC370  Coord::Compare2D  this=Coord  sig=csp ====
int __thiscall Coord::Compare2D(Coord *this, _WORD *a2)
{
  return *(_WORD *)this->__pad_0 != *a2 || *(_WORD *)this->Coord_field_0x2 != a2[1]; /*0x5ac388*/
}



// ==== 0x005AC3A0  VectorClass_ptr_MapRegionClass::Destroy  this=VectorClass_ptr_MapRegionClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::Destroy(VectorClass_ptr_MapRegionClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x5ac3a6*/
  this->Count = 0; /*0x5ac3a9*/
  if ( Items && this->IsAllocated ) /*0x5ac3b0*/
  {
    __3_YAXPAX_Z(Items); /*0x5ac3b6*/
    this->Items = 0; /*0x5ac3be*/
  }
  this->IsAllocated = 0; /*0x5ac3c1*/
  this->Capacity = 0; /*0x5ac3c4*/
}



// ==== 0x005AC3D0  VectorClass_ptr_MapRegionClass::GetItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::GetItemIndex(VectorClass_ptr_MapRegionClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x5ac3d0*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x5ac3e5*/
  else
    return 0; /*0x5ac3d7*/
}



// ==== 0x005AC3F0  _VectorClass_PAVMapRegionClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::Get(_VectorClass_PAVMapRegionClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5ac3fa*/
}



// ==== 0x005AC400  TypeList::BuildingTypeConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::BuildingTypeConstructor(TypeList *this)
{
  this->? = 0; /*0x5ac404*/
  this->? = 0; /*0x5ac407*/
  this->? = 1; /*0x5ac40a*/
  this->? = 0; /*0x5ac40e*/
  this->? = 10; /*0x5ac411*/
  this->? = 0; /*0x5ac418*/
  this->DynamicVectorClass = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ac41b*/
  return &this->DynamicVectorClass; /*0x5ac421*/
}



// ==== 0x005AC430  DynamicVector::Copy  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVector::Copy(DynamicVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int DynamicVector_field_0x8; // ecx
  int v6; // eax

  if ( this == (DynamicVector *)a2 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(DynamicVector *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac43e*/
  v3 = a2[2]; /*0x5ac441*/
  this->DynamicVector_field_0x8 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x5ac496*/
    this->__pad_C[1] = 0; /*0x5ac49d*/
LABEL_8:
    this->DynamicVector_field_0x10 = (void *)a2[4]; /*0x5ac4a1*/
    *(_DWORD *)this->__pad_14 = a2[5]; /*0x5ac4aa*/
    return this->__pad_0; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  this->__pad_C[1] = 1; /*0x5ac469*/
  if ( DynamicVector_field_0x8 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < this->DynamicVector_field_0x8 ); /*0x5ac481*/
  this->DynamicVector_field_0x10 = (void *)a2[4]; /*0x5ac486*/
  *(_DWORD *)this->__pad_14 = a2[5]; /*0x5ac48c*/
  return this->__pad_0; /*0x5ac491*/
}



// ==== 0x005AC4C0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MapSeedClass_18::ClearBuffer(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac4c6*/
  this->m_10 = 0; /*0x5ac4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac4d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac4de*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac4e1*/
  this->m_8 = 0; /*0x5ac4e4*/
}



// ==== 0x005AC4F0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapSeedClass_18::PointerToIndex(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac4f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/
}



// ==== 0x005AC510  _VectorClass_PAU_WIN32_FIND_DATAA::GetCell  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass_18::GetCell(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5ac51a*/
}



// ==== 0x005AC520  _DynamicVectorClass_V_TRect_H::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSEngine::ClearBuffer(_DynamicVectorClass_V_TRect_H *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac526*/
  this->m_10 = 0; /*0x5ac529*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac530*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac536*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac53e*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac541*/
  this->m_8 = 0; /*0x5ac544*/
}



// ==== 0x005AC550  _DynamicVectorClass_V_TRect_H::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSEngine::PointerToIndex(_DynamicVectorClass_V_TRect_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac550*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}



// ==== 0x005AC570  _VectorClass_V_TRect_H::Shutdown  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSEngine::Shutdown(_VectorClass_V_TRect_H *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 16 * a3); /*0x5ac57d*/
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
void __thiscall VectorClass_N::Destroy(_DynamicVectorClass_N *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac5f6*/
  this->m_10 = 0; /*0x5ac5f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac600*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac606*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac60e*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac611*/
  this->m_8 = 0; /*0x5ac614*/
}



// ==== 0x005AC620  _DynamicVectorClass_N::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_N::GetItemIndex(_DynamicVectorClass_N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac620*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5ac635*/
  else
    return 0; /*0x5ac627*/
}



// ==== 0x005AC640  _VectorClass_N::Clear  this=VectorClass  sig=csp ====
double __thiscall VectorClass_N::Clear(_VectorClass_N *this, int a2)
{
  return *(double *)(*(_DWORD *)&this->m_1[3] + 8 * a2); /*0x5ac64a*/
}



// ==== 0x005AC650  _TypeList_PBVBuildingTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_BuildingType::Add(_TypeList_PBVBuildingTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5ac653*/
  *(_DWORD *)this = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac656*/
  if ( v3 && this->IsAllocated ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    this->Items = 0; /*0x5ac670*/
  }
  this->IsAllocated = 0; /*0x5ac67b*/
  this->Capacity = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(this); /*0x5ac68b*/
  return this; /*0x5ac695*/
}



// ==== 0x005AC6A0  _VectorClass_PAVMapRegionClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::Add(_VectorClass_PAVMapRegionClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5ac6a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5ac6ad*/
  {
    v3 = 0; /*0x5ac6af*/
    if ( m_8 <= 0 ) /*0x5ac6b3*/
      return 1; /*0x5ac6d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5ac6b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5ac6bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5ac6c4*/
    {
      ++v3; /*0x5ac6c6*/
      ++v4; /*0x5ac6c7*/
      if ( v3 >= m_8 ) /*0x5ac6cc*/
        return 1; /*0x5ac6cc*/
    }
  }
  return 0; /*0x5ac6ce*/
}



// ==== 0x005AC6E0  _VectorClass_PAVMapRegionClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::Release(_VectorClass_PAVMapRegionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5ac6ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5ac6f6*/
    if ( a3 ) /*0x5ac6fc*/
      v4 = a3; /*0x5ac712*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ac70e*/
    LOBYTE(this->m_C) = 1; /*0x5ac716*/
    if ( v4 ) /*0x5ac71a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5ac725*/
      {
        m_8 = this->m_8; /*0x5ac72c*/
        if ( a2 < m_8 ) /*0x5ac731*/
          m_8 = a2; /*0x5ac733*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5ac739*/
          ++i; /*0x5ac73e*/
        if ( BYTE1(this->m_C) ) /*0x5ac74b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ac756*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5ac75e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5ac767*/
      this->m_8 = a2; /*0x5ac76f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5ac772*/
      return 1; /*0x5ac778*/
    }
    else
    {
      return 0; /*0x5ac71f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapRegionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac782*/
    return 1; /*0x5ac788*/
  }
}



// ==== 0x005AC790  _VectorClass_PAVMapRegionClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::Remove(_VectorClass_PAVMapRegionClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ac79d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ac7a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac7ab*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac7ae*/
  this->m_8 = 0; /*0x5ac7b1*/
}



// ==== 0x005AC7C0  _VectorClass_PAVMapRegionClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::GetSize(_VectorClass_PAVMapRegionClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ac7c0*/
    return 0; /*0x5ac7c8*/
  m_8 = this->m_8; /*0x5ac7ce*/
  result = 0; /*0x5ac7d1*/
  if ( m_8 <= 0 ) /*0x5ac7d5*/
    return -1; /*0x5ac7ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ac7db*/
  {
    if ( ++result >= m_8 ) /*0x5ac7ea*/
      return -1; /*0x5ac7ea*/
  }
  return result; /*0x5ac7ca*/
}



// ==== 0x005AC800  _VectorClass_PAVMapRegionClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::GetCapacity(_VectorClass_PAVMapRegionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac800*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5ac815*/
  else
    return 0; /*0x5ac807*/
}



// ==== 0x005AC820  VectorClass_ptr_MapRegionClass::SetCapacity  this=VectorClass_ptr_MapRegionClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::SetCapacity(VectorClass_ptr_MapRegionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x5ac82c*/
  {
    this->IsInitialized = 0; /*0x5ac832*/
    if ( a3 ) /*0x5ac838*/
      v4 = a3; /*0x5ac84e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ac84a*/
    this->IsInitialized = 1; /*0x5ac852*/
    if ( !v4 ) /*0x5ac856*/
      return 0; /*0x5ac8ca*/
    if ( this->Items ) /*0x5ac858*/
    {
      Capacity = this->Capacity; /*0x5ac85f*/
      if ( a2 < (int)Capacity ) /*0x5ac864*/
        Capacity = (void *)a2; /*0x5ac866*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x5ac86c*/
        ++i; /*0x5ac871*/
      if ( this->IsAllocated ) /*0x5ac87e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x5ac889*/
        this->Items = 0; /*0x5ac891*/
      }
    }
    this->Items = v4; /*0x5ac89a*/
    this->Capacity = (void *)a2; /*0x5ac8a2*/
    this->IsAllocated = a3 == 0; /*0x5ac8a5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_MapRegionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac8ae*/
  }
  v7 = this->Capacity; /*0x5ac8b1*/
  if ( (int)v7 < (int)this->Count ) /*0x5ac8b9*/
    this->Count = v7; /*0x5ac8bb*/
  return 1; /*0x5ac8be*/
}



// ==== 0x005AC8D0  VectorClass_ptr_MapRegionClass::FindItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::FindItemIndex(VectorClass_ptr_MapRegionClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x5ac8d0*/
  result = 0; /*0x5ac8d3*/
  if ( (int)Count <= 0 ) /*0x5ac8d8*/
    return -1; /*0x5ac8ef*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x5ac8de*/
  {
    if ( ++result >= (int)Count ) /*0x5ac8ed*/
      return -1; /*0x5ac8ed*/
  }
  return result; /*0x5ac8f2*/
}



// ==== 0x005AC900  DynamicVectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::BuildingTypeConstructor(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x5ac909*/
  *(_DWORD *)&this->?[3] = a2; /*0x5ac910*/
  LOBYTE(this->?) = 1; /*0x5ac913*/
  BYTE1(this->?) = 0; /*0x5ac917*/
  *(_DWORD *)this->VectorClass = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac91b*/
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x5ac92b*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x5ac93c*/
      BYTE1(this->?) = 1; /*0x5ac93f*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac943*/
  this->CapacityIncrement = 10; /*0x5ac949*/
  this->Count = 0; /*0x5ac950*/
  return this->VectorClass; /*0x5ac959*/
}



// ==== 0x005AC960  PriorityQueue::Pop  this=PriorityQueue  sig=csp ====
int __thiscall PriorityQueue::Pop(PriorityQueue *this)
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

  if ( !*(_DWORD *)this->__pad_0 ) /*0x5ac961*/
    return 0; /*0x5ac96a*/
  v2 = *((_DWORD *)this + 2); /*0x5ac96b*/
  v3 = 1; /*0x5ac970*/
  v4 = *(_DWORD *)(v2 + 4); /*0x5ac978*/
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v2 + 4 * *(_DWORD *)this->__pad_0); /*0x5ac97b*/
  v10 = v4; /*0x5ac983*/
  *(_DWORD *)(*((_DWORD *)this + 2) + 4 * *(_DWORD *)this->__pad_0) = 0; /*0x5ac987*/
  v5 = *(_DWORD *)this->__pad_0 - 1; /*0x5ac991*/
  *(_DWORD *)this->__pad_0 = v5; /*0x5ac993*/
  if ( v5 < 2 /*0x5ac9b5*/
    || (v6 = 2,
        *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4) + 4) <= (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                               + 8)
                                                                                   + 4)) )
  {
    v6 = 1; /*0x5ac9b7*/
  }
  if ( v5 >= 3 /*0x5ac9d7*/
    && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                                  + 12)
                                                                                      + 4) )
  {
    v6 = 3; /*0x5ac9d9*/
    do /*0x5aca45*/
    {
LABEL_10:
      v7 = *((_DWORD *)this + 2); /*0x5ac9e7*/
      v8 = 2 * v6 + 1; /*0x5ac9ea*/
      v9 = *(_DWORD *)(v7 + 4 * v3); /*0x5ac9f1*/
      *(_DWORD *)(v7 + 4 * v3) = *(_DWORD *)(v7 + 4 * v6); /*0x5ac9f4*/
      v3 = v6; /*0x5ac9fa*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) = v9; /*0x5ac9fc*/
      if ( 2 * v6 <= *(_DWORD *)this->__pad_0 /*0x5aca21*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * v6)
                                                                                          + 4) )
      {
        v6 *= 2; /*0x5aca23*/
      }
      if ( v8 <= *(_DWORD *)this->__pad_0 /*0x5aca3f*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v8)
                                                                                          + 4) )
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
char __thiscall MapSeedClass_18::AddRef(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5aca62*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( m_8 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5aca75*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5aca7b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5aca84*/
    {
      ++v3; /*0x5aca86*/
      ++v4; /*0x5aca87*/
      if ( v3 >= m_8 ) /*0x5aca8c*/
        return 1; /*0x5aca8c*/
    }
  }
  return 0; /*0x5aca8e*/
}



// ==== 0x005ACAA0  _VectorClass_PAU_WIN32_FIND_DATAA::Release  this=VectorClass  sig=csp ====
char __thiscall MapSeedClass_18::Release(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5acace*/
    LOBYTE(this->m_C) = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5acae5*/
      {
        m_8 = this->m_8; /*0x5acaec*/
        if ( a2 < m_8 ) /*0x5acaf1*/
          m_8 = a2; /*0x5acaf3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( BYTE1(this->m_C) ) /*0x5acb0b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb16*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5acb1e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5acb27*/
      this->m_8 = a2; /*0x5acb2f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAU_WIN32_FIND_DATAA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }
}



// ==== 0x005ACB50  _VectorClass_PAU_WIN32_FIND_DATAA::ddtor  this=VectorClass  sig=csp ====
void __thiscall MapSeedClass_18::ddtor(_VectorClass_PAU_WIN32_FIND_DATAA *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5acb5d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb63*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5acb6b*/
  }
  BYTE1(this->m_C) = 0; /*0x5acb6e*/
  this->m_8 = 0; /*0x5acb71*/
}



// ==== 0x005ACB80  _VectorClass_PAU_WIN32_FIND_DATAA::GenerateSeed  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass::GenerateSeed(_VectorClass_PAU_WIN32_FIND_DATAA *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  m_8 = this->m_8; /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( m_8 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= m_8 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/
}



// ==== 0x005ACBC0  _VectorClass_PAU_WIN32_FIND_DATAA::Generate  this=VectorClass  sig=csp ====
unsigned int __thiscall MapSeedClass_18::Generate(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5acbc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/
}



// ==== 0x005ACBE0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MapSeedClass_18::SetCapacity(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5acc0a*/
    LOBYTE(this->m_C) = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5acc18*/
    {
      m_8 = this->m_8; /*0x5acc1f*/
      if ( a2 < m_8 ) /*0x5acc24*/
        m_8 = a2; /*0x5acc26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( BYTE1(this->m_C) ) /*0x5acc3e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acc49*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5acc51*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5acc5a*/
    this->m_8 = a2; /*0x5acc62*/
    BYTE1(this->m_C) = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acc6e*/
  }
  v7 = this->m_8; /*0x5acc71*/
  if ( v7 < this->m_10 ) /*0x5acc79*/
    this->m_10 = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/
}



// ==== 0x005ACC90  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MapSeedClass_18::FindItem(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( m_10 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= m_10 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/
}



// ==== 0x005ACCC0  _VectorClass_V_TRect_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSEngine::AddRef(_VectorClass_V_TRect_H *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5acccb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( m_8 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5accd8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5accdb*/
    v6 = (_DWORD *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (_DWORD)v5; /*0x5acce1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= m_8 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}



// ==== 0x005ACD30  _VectorClass_V_TRect_H::Release  this=VectorClass  sig=csp ====
char __thiscall MSEngine::Release(_VectorClass_V_TRect_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    LOBYTE(this->m_C) = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = (char *)v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5acd8b*/
      {
        m_8 = this->m_8; /*0x5acd92*/
        if ( a2 < m_8 ) /*0x5acd97*/
          m_8 = a2; /*0x5acd99*/
        if ( m_8 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --m_8; /*0x5acdac*/
            *(_DWORD *)v11 = *v12; /*0x5acdaf*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( m_8 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5acdcd*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acdd8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5acde0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x5acde9*/
      this->m_8 = v3; /*0x5acdf1*/
      BYTE1(this->m_C) = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_TRect_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }
}



// ==== 0x005ACE20  _VectorClass_V_TRect_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSEngine::ddtor(_VectorClass_V_TRect_H *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ace2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ace33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ace3b*/
  }
  BYTE1(this->m_C) = 0; /*0x5ace3e*/
  this->m_8 = 0; /*0x5ace41*/
}



// ==== 0x005ACE50  _VectorClass_V_TRect_H::Init  this=VectorClass  sig=csp ====
int __thiscall MSEngine::Init(_VectorClass_V_TRect_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // esi
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  m_8 = this->m_8; /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( m_8 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= m_8 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}



// ==== 0x005ACEB0  _VectorClass_V_TRect_H::Run  this=VectorClass  sig=csp ====
unsigned int __thiscall MSEngine::Run(_VectorClass_V_TRect_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}



// ==== 0x005ACED0  _DynamicVectorClass_V_TRect_H::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSEngine::SetCapacity(_DynamicVectorClass_V_TRect_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    LOBYTE(this->m_C) = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = (char *)v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5acf25*/
    {
      m_8 = this->m_8; /*0x5acf2c*/
      if ( a2 < m_8 ) /*0x5acf31*/
        m_8 = a2; /*0x5acf33*/
      if ( m_8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + *(_DWORD *)&this->m_1[3]); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --m_8; /*0x5acf46*/
          *(_DWORD *)v10 = *v11; /*0x5acf49*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( m_8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( BYTE1(this->m_C) ) /*0x5acf67*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acf72*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5acf7a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v7; /*0x5acf83*/
    this->m_8 = v3; /*0x5acf8b*/
    BYTE1(this->m_C) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_TRect_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acf97*/
  }
  v12 = this->m_8; /*0x5acf9a*/
  if ( v12 < this->m_10 ) /*0x5acfa2*/
    this->m_10 = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
}



// ==== 0x005ACFC0  _DynamicVectorClass_V_TRect_H::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSEngine::FindItem(_DynamicVectorClass_V_TRect_H *this, _DWORD *a2)
{
  int m_10; // esi
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( m_10 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= m_10 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}



// ==== 0x005AD010  _DynamicVectorClass_PAVCellClass::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Ptr::ResizeAndCopy(_DynamicVectorClass_PAVCellClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ad01c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5ad022*/
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ad03a*/
    LOBYTE(this->m_C) = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad048*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( BYTE1(this->m_C) ) /*0x5ad06e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad079*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5ad081*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5ad08a*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5ad092*/
    BYTE1(this->m_C) = a3 == 0; /*0x5ad095*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVCellClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad09e*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad0a1*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5ad0a9*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5ad0ab*/
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
char __thiscall VectorClass_N::AddRef(_VectorClass_N *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  double *v4; // edx
  int v5; // ecx

  m_8 = this->m_8; /*0x5ad0f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5ad0fc*/
  {
    v3 = 0; /*0x5ad0fe*/
    if ( m_8 <= 0 ) /*0x5ad102*/
      return 1; /*0x5ad124*/
    v4 = *(double **)(a2 + 4); /*0x5ad104*/
    v5 = *(_DWORD *)&this->m_1[3] - (_DWORD)v4; /*0x5ad10a*/
    while ( *(double *)((char *)v4 + v5) == *v4 ) /*0x5ad116*/
    {
      ++v3; /*0x5ad118*/
      ++v4; /*0x5ad119*/
      if ( v3 >= m_8 ) /*0x5ad11e*/
        return 1; /*0x5ad11e*/
    }
  }
  return 0; /*0x5ad120*/
}



// ==== 0x005AD130  _VectorClass_N::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_N::Release(_VectorClass_N *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  v3 = a2; /*0x5ad131*/
  if ( a2 ) /*0x5ad13b*/
  {
    v5 = a3; /*0x5ad141*/
    LOBYTE(this->m_C) = 0; /*0x5ad145*/
    if ( !a3 ) /*0x5ad14b*/
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x5ad15d*/
    LOBYTE(this->m_C) = 1; /*0x5ad161*/
    if ( v5 ) /*0x5ad165*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad16f*/
      {
        m_8 = this->m_8; /*0x5ad176*/
        if ( a2 < m_8 ) /*0x5ad17b*/
          m_8 = a2; /*0x5ad17d*/
        v8 = 0; /*0x5ad17f*/
        if ( m_8 > 0 ) /*0x5ad183*/
        {
          do /*0x5ad19b*/
          {
            v9 = *(_DWORD *)&this->m_1[3]; /*0x5ad185*/
            ++v8; /*0x5ad188*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5ad18f*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5ad197*/
          }
          while ( v8 < m_8 ); /*0x5ad19b*/
          v3 = a2; /*0x5ad19d*/
        }
        if ( BYTE1(this->m_C) ) /*0x5ad1a1*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad1ac*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5ad1b4*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x5ad1c6*/
      this->m_8 = v3; /*0x5ad1c9*/
      BYTE1(this->m_C) = a3 == 0; /*0x5ad1cc*/
      return 1; /*0x5ad1d1*/
    }
    else
    {
      return 0; /*0x5ad169*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad1db*/
    return 1; /*0x5ad1e0*/
  }
}



// ==== 0x005AD1F0  _VectorClass_N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_N::ddtor(_VectorClass_N *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ad1fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad203*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad20b*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad20e*/
  this->m_8 = 0; /*0x5ad211*/
}



// ==== 0x005AD220  _VectorClass_N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_N::GetSize(_VectorClass_N *this, double *a2)
{
  int m_8; // esi
  int v4; // edx
  double *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ad220*/
    return 0; /*0x5ad22a*/
  m_8 = this->m_8; /*0x5ad230*/
  v4 = 0; /*0x5ad233*/
  if ( m_8 <= 0 ) /*0x5ad237*/
    return -1; /*0x5ad253*/
  for ( i = *(double **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ad239*/
  {
    if ( ++v4 >= m_8 ) /*0x5ad251*/
      return -1; /*0x5ad251*/
  }
  return v4; /*0x5ad229*/
}



// ==== 0x005AD270  _VectorClass_N::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_N::GetCapacity(_VectorClass_N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ad270*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5ad285*/
  else
    return 0; /*0x5ad277*/
}



// ==== 0x005AD290  _DynamicVectorClass_N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_N::SetCapacity(_DynamicVectorClass_N *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  v3 = a2; /*0x5ad291*/
  if ( a2 ) /*0x5ad29b*/
  {
    v5 = a3; /*0x5ad2a1*/
    LOBYTE(this->m_C) = 0; /*0x5ad2a5*/
    if ( !a3 ) /*0x5ad2ab*/
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x5ad2bd*/
    LOBYTE(this->m_C) = 1; /*0x5ad2c1*/
    if ( !v5 ) /*0x5ad2c5*/
      return 0; /*0x5ad347*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad2c7*/
    {
      m_8 = this->m_8; /*0x5ad2ce*/
      if ( a2 < m_8 ) /*0x5ad2d3*/
        m_8 = a2; /*0x5ad2d5*/
      v7 = 0; /*0x5ad2d7*/
      if ( m_8 > 0 ) /*0x5ad2db*/
      {
        do /*0x5ad2f3*/
        {
          v8 = *(_DWORD *)&this->m_1[3]; /*0x5ad2dd*/
          ++v7; /*0x5ad2e0*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x5ad2e7*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x5ad2ef*/
        }
        while ( v7 < m_8 ); /*0x5ad2f3*/
        v3 = a2; /*0x5ad2f5*/
      }
      if ( BYTE1(this->m_C) ) /*0x5ad2f9*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad304*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5ad30c*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x5ad31e*/
    this->m_8 = v3; /*0x5ad321*/
    BYTE1(this->m_C) = a3 == 0; /*0x5ad324*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad32d*/
  }
  v9 = this->m_8; /*0x5ad330*/
  if ( v9 < this->m_10 ) /*0x5ad338*/
    this->m_10 = v9; /*0x5ad33a*/
  return 1; /*0x5ad33d*/
}



// ==== 0x005AD350  _DynamicVectorClass_N::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_N::FindItemIndex(_DynamicVectorClass_N *this, double *a2)
{
  int m_10; // esi
  int v3; // edx
  double *i; // ecx

  m_10 = this->m_10; /*0x5ad351*/
  v3 = 0; /*0x5ad354*/
  if ( m_10 <= 0 ) /*0x5ad359*/
    return -1; /*0x5ad375*/
  for ( i = *(double **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ad35b*/
  {
    if ( ++v3 >= m_10 ) /*0x5ad373*/
      return -1; /*0x5ad373*/
  }
  return v3; /*0x5ad375*/
}



// ==== 0x005AD390  _VectorClass_PAVMapRegionClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MapRegionClass::QueryInterface(_VectorClass_PAVMapRegionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad393*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x5ad396*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad3a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad3a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad3b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad3bb*/
  this->m_8 = 0; /*0x5ad3c1*/
  if ( (a2 & 1) != 0 ) /*0x5ad3c8*/
    __3_YAXPAX_Z(this); /*0x5ad3cb*/
  return this->__pad_0; /*0x5ad3d5*/
}



// ==== 0x005AD430  _VectorClass_PAU_WIN32_FIND_DATAA::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MapSeedClass_18::QueryInterface(_VectorClass_PAU_WIN32_FIND_DATAA *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad433*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad436*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad440*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad448*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad450*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad45b*/
  this->m_8 = 0; /*0x5ad461*/
  if ( (a2 & 1) != 0 ) /*0x5ad468*/
    __3_YAXPAX_Z(this); /*0x5ad46b*/
  return this->__pad_0; /*0x5ad475*/
}



// ==== 0x005AD480  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::Constructor_VectorClass__WIN32_FIND_DATAA___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapSeedClass_18::Constructor_VectorClass__WIN32_FIND_DATAA___(
        _DynamicVectorClass_PAU_WIN32_FIND_DATAA *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad483*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad486*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad490*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad498*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad4a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad4ab*/
  this->m_8 = 0; /*0x5ad4b1*/
  if ( (a2 & 1) != 0 ) /*0x5ad4b8*/
    __3_YAXPAX_Z(this); /*0x5ad4bb*/
  return this->__pad_0; /*0x5ad4c5*/
}



// ==== 0x005AD4D0  _VectorClass_V_TRect_H::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSEngine::QueryInterface(_VectorClass_V_TRect_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad4d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ad4d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad4e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad4e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad4f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad4fb*/
  this->m_8 = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    __3_YAXPAX_Z(this); /*0x5ad50b*/
  return this->__pad_0; /*0x5ad515*/
}



// ==== 0x005AD520  _DynamicVectorClass_V_TRect_H::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSEngine::Constructor(_DynamicVectorClass_V_TRect_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad523*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ad526*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad530*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad538*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad540*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad54b*/
  this->m_8 = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    __3_YAXPAX_Z(this); /*0x5ad55b*/
  return this->__pad_0; /*0x5ad565*/
}



// ==== 0x005AD570  _DynamicVectorClass_PAVCellClass::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CellClassVector::Destruct(_DynamicVectorClass_PAVCellClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad573*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CellClass *>::`vftable'; /*0x5ad576*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad580*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad588*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad590*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad59b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5ad5a1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5a8*/
    __3_YAXPAX_Z(this); /*0x5ad5ab*/
  return this->__pad_0; /*0x5ad5b5*/
}



// ==== 0x005AD5C0  _VectorClass_N::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_N::QueryInterface(_VectorClass_N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad5c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5ad5c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad5d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad5d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad5e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad5eb*/
  this->m_8 = 0; /*0x5ad5f1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5f8*/
    __3_YAXPAX_Z(this); /*0x5ad5fb*/
  return this->__pad_0; /*0x5ad605*/
}



// ==== 0x005AD610  _DynamicVectorClass_N::Constructor_VectorClass_double_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_N::Constructor_VectorClass_double_(_DynamicVectorClass_N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad613*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5ad616*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad620*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad628*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad630*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad63b*/
  this->m_8 = 0; /*0x5ad641*/
  if ( (a2 & 1) != 0 ) /*0x5ad648*/
    __3_YAXPAX_Z(this); /*0x5ad64b*/
  return this->__pad_0; /*0x5ad655*/
}



// ==== 0x005AD660  TypeList::BuildingTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::BuildingTypeCopy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x5ad66d*/
  this->? = 0; /*0x5ad670*/
  this->? = 1; /*0x5ad673*/
  this->? = 0; /*0x5ad677*/
  this->DynamicVectorClass = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ad67a*/
  if ( this != (TypeList *)a2 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)this); /*0x5ad682*/
    v3 = a2[2]; /*0x5ad688*/
    this->? = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x5ad696*/
      this->? = v4; /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        Capacity = this->?; /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        this->? = 1; /*0x5ad6ac*/
        if ( Capacity > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < this->? ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5ad6c8*/
      this->? = 0; /*0x5ad6cb*/
    }
  }
  this->? = a2[4]; /*0x5ad6d1*/
  this->? = a2[5]; /*0x5ad6d7*/
  this->DynamicVectorClass = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ad6da*/
  return &this->DynamicVectorClass; /*0x5ad6e2*/
}



// ==== 0x005AD6F0  StringVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall StringVector::Construct(StringVector *this, int a2, int a3)
{
  this->StringVector_field_0x04 = 0; /*0x5ad6fb*/
  this->StringVector_field_0x08 = a2; /*0x5ad6fe*/
  LOBYTE(this->StringVector_field_0x0C) = 1; /*0x5ad701*/
  BYTE1(this->StringVector_field_0x0C) = 0; /*0x5ad705*/
  *(_DWORD *)this->__pad_0 = &VectorClass<char *>::`vftable'; /*0x5ad708*/
  if ( a2 ) /*0x5ad70e*/
  {
    if ( a3 ) /*0x5ad716*/
    {
      this->StringVector_field_0x04 = a3; /*0x5ad718*/
      return this->__pad_0; /*0x5ad71e*/
    }
    this->StringVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5ad72d*/
    BYTE1(this->StringVector_field_0x0C) = 1; /*0x5ad730*/
  }
  return this->__pad_0; /*0x5ad71d*/
}



// ==== 0x005AD740  TileSystem::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TileSystem::Constructor(TileSystem *this, int a2, int a3)
{
  this->TileSystem_field_0x04 = 0; /*0x5ad74b*/
  this->TileSystem_field_0x08 = a2; /*0x5ad74e*/
  LOBYTE(this->TileSystem_field_0x0C) = 1; /*0x5ad751*/
  BYTE1(this->TileSystem_field_0x0C) = 0; /*0x5ad755*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x5ad758*/
  if ( a2 ) /*0x5ad75e*/
  {
    if ( a3 ) /*0x5ad766*/
    {
      this->TileSystem_field_0x04 = a3; /*0x5ad768*/
      return this->__pad_0; /*0x5ad76e*/
    }
    this->TileSystem_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5ad77d*/
    BYTE1(this->TileSystem_field_0x0C) = 1; /*0x5ad780*/
  }
  return this->__pad_0; /*0x5ad76d*/
}



// ==== 0x005AD790  Vector4::EraseAt  this=Vector4  sig=csp ====
char __thiscall Vector4::EraseAt(Vector4 *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q004; /*0x5ad790*/
  v3 = a2; /*0x5ad793*/
  if ( a2 >= v2 ) /*0x5ad799*/
    return 0; /*0x5ad7bc*/
  v4 = v2 - 1; /*0x5ad79b*/
  this->q004 = v4; /*0x5ad79e*/
  if ( a2 < v4 ) /*0x5ad7a1*/
  {
    do /*0x5ad7b4*/
    {
      ++v3; /*0x5ad7a7*/
      *(_DWORD *)(this->Vector4_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->Vector4_field_0x04 + 4 * v3); /*0x5ad7ab*/
    }
    while ( v3 < this->q004 ); /*0x5ad7b4*/
  }
  return 1; /*0x5ad7b9*/
}



// ==== 0x005AD7D0  DynamicVector::Add_Alt3  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt3(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ad7d3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5ad805*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5ad808*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5ad80e*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x5ad818*/
    LOBYTE(result) = 1; /*0x5ad81b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5ad7ff*/
  }
  return result; /*0x5ad801*/
}



// ==== 0x005AD820  RandomMap::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor(RandomMap *this, int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ad82b*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ad82e*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ad831*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ad835*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CellClass *>::`vftable'; /*0x5ad838*/
  if ( a2 ) /*0x5ad83e*/
  {
    if ( a3 ) /*0x5ad846*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ad848*/
      return this->__pad_0; /*0x5ad84e*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = __2_YAPAXI_Z(4 * a2); /*0x5ad85d*/
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ad860*/
  }
  return this->__pad_0; /*0x5ad84d*/
}



// ==== 0x005AD870  Heap::SiftDown  this=Heap  sig=csp ====
void __thiscall Heap::SiftDown(Heap *this, int a2)
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
  if ( 2 * a2 > *(_DWORD *)this /*0x5ad89b*/
    || *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * a2) + 4) <= (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * a2)
                                                                                       + 4) )
  {
    v3 = a2; /*0x5ad89d*/
  }
  if ( v4 <= *(_DWORD *)this /*0x5ad8b9*/
    && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                                  + 4 * v4)
                                                                                      + 4) )
  {
    v3 = 2 * a2 + 1; /*0x5ad8bb*/
  }
  if ( v3 != a2 ) /*0x5ad8bf*/
  {
    do /*0x5ad91f*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5ad8c1*/
      v6 = 2 * v3 + 1; /*0x5ad8c4*/
      v7 = *(_DWORD *)(v5 + 4 * v2); /*0x5ad8cb*/
      *(_DWORD *)(v5 + 4 * v2) = *(_DWORD *)(v5 + 4 * v3); /*0x5ad8ce*/
      v2 = v3; /*0x5ad8d4*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) = v7; /*0x5ad8d6*/
      if ( 2 * v3 <= *(_DWORD *)this /*0x5ad8fb*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * v3)
                                                                                          + 4) )
      {
        v3 *= 2; /*0x5ad8fd*/
      }
      if ( v6 <= *(_DWORD *)this /*0x5ad919*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6)
                                                                                          + 4) )
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
_DWORD *__thiscall Map_Cleanup(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x5ad9fb*/
  this->Capacity = a2; /*0x5ad9fe*/
  this->IsInitialized = 1; /*0x5ada01*/
  this->IsAllocated = 0; /*0x5ada05*/
  this->vtable0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ada08*/
  if ( a2 ) /*0x5ada0e*/
  {
    if ( a3 ) /*0x5ada16*/
    {
      this->Items = (void *)a3; /*0x5ada18*/
      return &this->vtable0; /*0x5ada1e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5ada2d*/
    this->IsAllocated = 1; /*0x5ada30*/
  }
  return &this->vtable0; /*0x5ada1d*/
}



// ==== 0x005ADA40  RandomMap::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_0(RandomMap *this, int a2, int a3)
{
  int v5; // eax

  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ada4a*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ada51*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ada54*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ada58*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ada5c*/
  if ( a2 ) /*0x5ada62*/
  {
    if ( a3 ) /*0x5ada6a*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ada6d*/
      return this->__pad_0; /*0x5ada78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x5ada81*/
    if ( v5 ) /*0x5ada8b*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = v5; /*0x5ada8e*/
      BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ada95*/
      return this->__pad_0; /*0x5ada9d*/
    }
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaa2*/
    *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adaa6*/
  }
  return this->__pad_0; /*0x5ada76*/
}



// ==== 0x005ADAB0  RandomMap::Constructor_1  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_1(RandomMap *this, int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adabb*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5adabe*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5adac1*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5adac5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5adac8*/
  if ( a2 ) /*0x5adace*/
  {
    if ( a3 ) /*0x5adad6*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5adad8*/
      return this->__pad_0; /*0x5adade*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = __2_YAPAXI_Z(8 * a2); /*0x5adaed*/
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaf0*/
  }
  return this->__pad_0; /*0x5adadd*/
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
int __thiscall Map_Delete(ObjectClass *this)
{
  bool v2; // bl
  int *v3; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]
  int v6; // [esp+0h] [ebp-E8h]
  MSEngine v7; // [esp+Ch] [ebp-DCh] BYREF
  DynamicVector v8[2]; // [esp+5Ch] [ebp-8Ch] BYREF
  void *v9[5]; // [esp+D4h] [ebp-14h] BYREF

  MSEngine::Construct(&v7); /*0x5add1e*/
  Map_Delete_5CEDD0(v8); /*0x5add27*/
  unknown_libname_73(v9); /*0x5add33*/
  v9[1] = (void *)Timer::GetTicks(); /*0x5add48*/
  v9[3] = 0; /*0x5add50*/
  *(_DWORD *)v7.__pad_0 = &MapSelect::`vftable'; /*0x5add5b*/
  v2 = ScenarioClass::Load((ScenarioClass *)&v7, (int)this) == 0; /*0x5add71*/
  DeleteAndZero((ObjectClass *)v9); /*0x5add74*/
  MSEngine::Destructor((MSEngine *)v8); /*0x5add7d*/
  MSEngine::Destruct(&v7); /*0x5add86*/
  if ( v2 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?, 134); /*0x5addba*/
    v3 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?, 134); /*0x5addc5*/
    Dialog::ShowMessageBox(v3, StringCSF, 0, 0, 0, v6); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen((const char *)this + 4700) != 0 ? (unsigned int)this + 4700 : 0;
  }
}



// ==== 0x005ADE20  Map_Delete_5ADE20  this=-  sig=csp ====
const char *__fastcall Map_Delete_5ADE20(int a1, const char *a2)
{
  bool v4; // bl
  int *v5; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-FCh]
  int v8; // [esp+0h] [ebp-ECh]
  ObjectClass v9; // [esp+Ch] [ebp-E0h] BYREF
  void *v10[5]; // [esp+D8h] [ebp-14h] BYREF

  String::Assign((String *)&v9, a2); /*0x5ade32*/
  MSEngine::Construct((MSEngine *)&v9.?); /*0x5ade3b*/
  Map_Delete_5CEDD0((DynamicVector *)&v9.customSound_controller[1]); /*0x5ade44*/
  unknown_libname_73(v10); /*0x5ade50*/
  v10[1] = (void *)Timer::GetTicks(); /*0x5ade61*/
  v10[3] = 0; /*0x5ade72*/
  v9.? = &MapSelect::`vftable'; /*0x5ade7d*/
  v4 = !SessionClass::LoadGameSession((SessionClass *)&v9.?, a1, (const char **)&v9); /*0x5ade93*/
  DeleteAndZero((ObjectClass *)v10); /*0x5ade96*/
  MSEngine::Destructor((MSEngine *)&v9.customSound_controller[1]); /*0x5ade9f*/
  MSEngine::Destruct((MSEngine *)&v9.?); /*0x5adea8*/
  DeleteAndZero(&v9); /*0x5adeb1*/
  if ( !v4 ) /*0x5adeb8*/
    return a2; /*0x5adf0b*/
  v9.AbstractClass = (void *)asc_82083C; /*0x5aded1*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?, 152); /*0x5adee5*/
  v5 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?, 152); /*0x5adef0*/
  Dialog::ShowMessageBox(v5, StringCSF, 0, 0, 0, v8); /*0x5adefa*/
  return 0; /*0x5adf01*/
}



// ==== 0x005ADF20  SessionClass::LoadGameSession  this=SessionClass  sig=csp ====
bool __thiscall SessionClass::LoadGameSession(SessionClass *this, int a2, const char **a3)
{
  int v4; // esi
  char *pad_50; // edi
  bool v7; // bl
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  char *v12; // eax
  String v13; // [esp+10h] [ebp-8h] BYREF

  if ( !a2 || (unsigned __int8)String::Equals_Alt((String *)a3, 0) ) /*0x5adf37*/
    return 0; /*0x5adf3e*/
  v4 = *(_DWORD *)(FootClass_Array.?[0] + 4 * *(_DWORD *)(*((_DWORD *)dword_A83C9C + *(_DWORD *)(a2 + 7284)) + 188)); /*0x5adf5b*/
  if ( !v4 ) /*0x5adf60*/
  {
    Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  Debug::Log(); /*0x5adf84*/
  String::Assign((String *)&v13.m_3[1], (const char *)(v4 + 36)); /*0x5adf91*/
  pad_50 = this->__pad_50; /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection((SessionClass *)pad_50, (char **)&v13.m_3[1]) == 0; /*0x5adfab*/
  DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check((CampaignClass *)pad_50, *(_WORD *)(a2 + 13728))) == 0 ) /*0x5adfea*/
  {
    SessionClass::Destruct((SessionClass *)pad_50); /*0x5adfb9*/
    Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName((char *)a2, &g_INI_DefaultBuffer); /*0x5ae013*/
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
  v11 = StringTable::Find((StringTable *)pad_50, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((String *)&v13.m_3[1], (const char **)(v11 + 4)); /*0x5ae041*/
  String::ToLower((String *)&v13.m_3[1]); /*0x5ae04a*/
  String::AssignFromPtr(&v13, a3); /*0x5ae058*/
  String::ToLower(&v13); /*0x5ae061*/
  if ( !v11 || !(unsigned __int8)String::Compare((String *)&v13.m_3[1], (const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero((ObjectClass *)&v13); /*0x5ae080*/
    DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = String::GetOrEmpty_Alt((String *)(v11 + 4)); /*0x5ae09b*/
  ScenarioClass::SetFileName((char *)a2, v12); /*0x5ae0a7*/
  *(_WORD *)(a2 + 13728) = Network_Load((ObjectClass *)pad_50, v11); /*0x5ae0b8*/
  DeleteAndZero((ObjectClass *)&v13); /*0x5ae0bf*/
  DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5ae0c8*/
LABEL_17:
  SessionClass::Destruct((SessionClass *)pad_50); /*0x5ae0cd*/
  return strlen((const char *)(a2 + 4700)) != 0; /*0x5adf6f*/
}



// ==== 0x005AE100  ScenarioClass::Load  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Load(ScenarioClass *this, int a2)
{
  int v2; // ebx
  char result; // al
  int v5; // esi
  int v6; // eax
  char *v7; // esi
  int v8; // esi
  char *v9; // eax
  char *v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x5ae102*/
  result = CampaignClass::LoadMovieDisplay((int)this, a2); /*0x5ae10a*/
  if ( result ) /*0x5ae111*/
  {
    g_MissionQueueFrame.waypoints[478] = 0; /*0x5ae126*/
    String::Assign((String *)&a2, (const char *)(v2 + 4700)); /*0x5ae12d*/
    v5 = CampaignClass::DeleteAndZero((CampaignClass *)&this->nextScenario[20], (const char **)&a2); /*0x5ae145*/
    DeleteAndZero((ObjectClass *)&a2); /*0x5ae147*/
    Debug::Log(); /*0x5ae154*/
    if ( (unsigned __int8)String::NotEquals((String *)(v5 + 8), 0) ) /*0x5ae161*/
    {
      v6 = StringList::Find((StringList *)&unk_A83D10, &stru_82BA00.?); /*0x5ae178*/
      ThemeClass::Play((ThemeClass *)&unk_A83D10, v6); /*0x5ae183*/
      v7 = String::GetOrEmpty_Alt(**(String ***)(v5 + 88)); /*0x5ae192*/
      if ( v7 ) /*0x5ae196*/
      {
        Debug::Log(); /*0x5ae19e*/
        String::Assign((String *)&v10, v7); /*0x5ae1ab*/
        v8 = StringTable::Find((StringTable *)&this->nextScenario[20], (const char **)&v10); /*0x5ae1c0*/
        DeleteAndZero((ObjectClass *)&v10); /*0x5ae1c2*/
        String::AssignFromPtr((String *)&a2, (const char **)(v8 + 4)); /*0x5ae1cf*/
        if ( String::Length((String *)&a2) ) /*0x5ae1d8*/
        {
          v9 = String::GetOrEmpty((String *)&a2); /*0x5ae1e5*/
          ScenarioClass::SetFileName((char *)v2, v9); /*0x5ae1ed*/
          *(_WORD *)(v2 + 13728) = Network_Load((ObjectClass *)&this->nextScenario[20], v8); /*0x5ae1fa*/
        }
        DeleteAndZero((ObjectClass *)&a2); /*0x5ae205*/
      }
    }
    CampaignClass::ReleaseSubobjectsAndDestruct((CampaignClass *)this); /*0x5ae20c*/
    return 1; /*0x5ae214*/
  }
  return result; /*0x5ae113*/
}



// ==== 0x005AE220  CampaignClass::LoadMovieDisplay  this=CampaignClass  sig=csp ====
char __userpurge CampaignClass::LoadMovieDisplay@<al>(int this@<ecx>, ObjectClass a2)
{
  const char *vtable0; // ebp
  bool v4; // zf
  int v6; // edi
  bool v7; // bl
  int v8; // edi
  CampaignClass *v9; // eax
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // ebx
  int Ticks; // eax
  int v14; // [esp+14h] [ebp-8h]

  vtable0 = (const char *)a2.AbstractClass; /*0x5ae227*/
  v4 = a2.AbstractClass == 0; /*0x5ae22e*/
  *(_DWORD *)(this + 172) = 0; /*0x5ae231*/
  *(_DWORD *)(this + 176) = 0; /*0x5ae237*/
  *(_DWORD *)(this + 180) = 0; /*0x5ae23d*/
  if ( v4
    || (v6 = *(_DWORD *)(FootClass_Array.?[0]
                       + 4 * *(_DWORD *)(*((_DWORD *)dword_A83C9C + *((_DWORD *)vtable0 + 1821)) + 188))) == 0 )
  {
    Debug::Log(); /*0x5ae24a*/
    return 0; /*0x5ae252*/
  }
  else
  {
    Debug::Log(); /*0x5ae2a2*/
    String::Assign((String *)&a2, (const char *)(v6 + 36)); /*0x5ae2af*/
    v7 = SessionClass::LoadMapSelection((SessionClass *)(this + 80), (char **)&a2) == 0; /*0x5ae2c9*/
    DeleteAndZero(&a2); /*0x5ae2cc*/
    if ( v7 )
    {
      SessionClass::Destruct((SessionClass *)(this + 80)); /*0x5ae2d7*/
      Debug::Log(); /*0x5ae2e1*/
      return 0; /*0x5ae2e9*/
    }
    else
    {
      String::Assign((String *)&a2, vtable0 + 4700); /*0x5ae300*/
      v8 = CampaignClass::DeleteAndZero((CampaignClass *)(this + 80), (const char **)&a2); /*0x5ae315*/
      DeleteAndZero(&a2); /*0x5ae317*/
      if ( v8
        && ((v9 = (CampaignClass *)__2_YAPAXI_Z(0x20u)) == 0 ? (v10 = 0) : (v10 = CampaignClass::Constructor_1(v9, 1)),
            (*(_DWORD *)(this + 180) = v10) != 0) )
      {
        *(_DWORD *)(this + 72) = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden) /*0x5ae381*/
                                - 640)
                               / 2;
        v11 = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden) - 400) /*0x5ae3a3*/
            / 2;
        *(_DWORD *)(this + 76) = v11; /*0x5ae3a5*/
        *(_DWORD *)(this + 184) = *(_DWORD *)(this + 104); /*0x5ae3ac*/
        *(_DWORD *)(this + 188) = *(_DWORD *)(this + 108); /*0x5ae3b1*/
        *(_DWORD *)(this + 192) = *(_DWORD *)(this + 112); /*0x5ae3b7*/
        *(_DWORD *)(this + 196) = *(_DWORD *)(this + 116); /*0x5ae3bd*/
        *(_DWORD *)(this + 184) += *(_DWORD *)(this + 72); /*0x5ae3c7*/
        v12 = 0; /*0x5ae3d1*/
        *(_DWORD *)(this + 188) += v11; /*0x5ae3d3*/
        do /*0x5ae413*/
        {
          WideString::AssignFromPtr((wchar_t **)&a2, (const wchar_t **)(v8 + 16)); /*0x5ae3e1*/
          WrapWideStringText((const wchar_t **)&a2, *(int **)(this + 180), *(_DWORD *)(this + 192)); /*0x5ae3f7*/
          v8 = CampaignClass::Check((CampaignClass *)(this + 80), ++v12); /*0x5ae40a*/
          DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x5ae40c*/
        }
        while ( v8 ); /*0x5ae413*/
        String::Assign_Alt((String *)(this + 200), 0); /*0x5ae41c*/
        Ticks = Timer::GetTicks(); /*0x5ae425*/
        *(_DWORD *)(this + 216) = -1; /*0x5ae430*/
        *(_DWORD *)(this + 204) = Ticks; /*0x5ae43d*/
        *(_DWORD *)(this + 208) = v14; /*0x5ae445*/
        *(_DWORD *)(this + 212) = 0; /*0x5ae44b*/
        return 1; /*0x5ae448*/
      }
      else
      {
        Debug::Log(); /*0x5ae351*/
        CampaignClass::ReleaseSubobjectsAndDestruct((CampaignClass *)this); /*0x5ae35b*/
        return 0; /*0x5ae363*/
      }
    }
  }
}



// ==== 0x005AE460  CampaignClass::ReleaseSubobjectsAndDestruct  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::ReleaseSubobjectsAndDestruct(CampaignClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))this->scenario[35]; /*0x5ae463*/
  if ( v2 ) /*0x5ae46b*/
  {
    (**v2)(v2, 1); /*0x5ae471*/
    this->scenario[35] = 0; /*0x5ae473*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->scenario[34]; /*0x5ae47d*/
  if ( v3 ) /*0x5ae485*/
  {
    (**v3)(v3, 1); /*0x5ae48b*/
    this->scenario[34] = 0; /*0x5ae48d*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->scenario[33]; /*0x5ae497*/
  if ( v4 ) /*0x5ae49f*/
  {
    (**v4)(v4, 1); /*0x5ae4a5*/
    this->scenario[33] = 0; /*0x5ae4a7*/
  }
  return SessionClass::Destruct((SessionClass *)&this->scenario[10]); /*0x5ae4b9*/
}



// ==== 0x005AE4C0  MapSelect::CheckStringNotEmpty  this=MapSelect  sig=csp ====
char __thiscall MSEngine_Destru::CheckStringNotEmpty(MapSelect *this)
{
  char result; // al

  result = String::NotEquals((String *)&this->m_C8, 0); /*0x5ae4cb*/
  if ( result ) /*0x5ae4d2*/
  {
    if ( this->m_CC != -1 ) /*0x5ae4db*/
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
const char **__thiscall sub_5AE500(ObjectClass *this, char **a2)
{
  const char **result; // eax
  ObjectClass *v4; // [esp+0h] [ebp-8h]

  result = (const char **)String::NotEquals((String *)a2, 0); /*0x5ae50c*/
  if ( (_BYTE)result ) /*0x5ae513*/
  {
    result = sub_5CF840((ObjectClass *)this->customSound_controller, (const char **)a2); /*0x5ae519*/
    if ( result ) /*0x5ae520*/
      return (const char **)nullsub_24(v4); /*0x5ae524*/
  }
  return result; /*0x5ae529*/
}



// ==== 0x005AE530  ObjectClass::method_5AE530  this=ObjectClass  sig=csp ====
DWORD __thiscall sub_5AE530(ObjectClass *this, const char **a2, int a3)
{
  ObjectClass *v3; // esi
  DWORD result; // eax
  void *v5; // [esp+8h] [ebp-8h]

  v3 = this; /*0x5ae538*/
  String::Reassign((String *)this + 25, a2); /*0x5ae541*/
  result = Timer::GetTicks(); /*0x5ae54a*/
  v3 = (ObjectClass *)((char *)v3 + 204); /*0x5ae557*/
  v3->AbstractClass = (void *)result; /*0x5ae55d*/
  v3->? = v5; /*0x5ae55f*/
  v3->? = (void *)a3; /*0x5ae562*/
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
void __stdcall MSEngine_Destru::StubReturnFalse(MSEngine *this)
{
  ; /*0x5ae590*/
}



// ==== 0x005AE5A0  MapSelect::DestroyComposite  this=MapSelect  sig=csp ====
void **__thiscall MSEngine_Destru::DestroyComposite(MapSelect *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->m_C8); /*0x5ae5a9*/
  MSEngine::Destructor((MSEngine *)&this->__pad_0[80]); /*0x5ae5b1*/
  MSEngine::Destruct((MSEngine *)this); /*0x5ae5b8*/
  if ( (a2 & 1) != 0 ) /*0x5ae5c2*/
    __3_YAXPAX_Z(this); /*0x5ae5c5*/
  return (void **)this; /*0x5ae5cf*/
}



// ==== 0x005AE5E0  Matrix::Copy12Float  this=Matrix  sig=csp ====
_DWORD *__thiscall Matrix::Copy12Float(Matrix *this, int a2)
{
  _DWORD *result; // eax
  Matrix *v3; // edx
  int v4; // edi

  result = this->__pad_0; /*0x5ae5e5*/
  v3 = this; /*0x5ae5e8*/
  v4 = 12; /*0x5ae5ec*/
  do /*0x5ae5fa*/
  {
    *(_DWORD *)v3->__pad_0 = *(_DWORD *)&v3->__pad_0[a2 - (_DWORD)this]; /*0x5ae5f4*/
    v3 = (Matrix *)((char *)v3 + 4); /*0x5ae5f6*/
    --v4; /*0x5ae5f9*/
  }
  while ( v4 ); /*0x5ae5fa*/
  return result; /*0x5ae5fc*/
}



// ==== 0x005AE610  Transform::Copy  this=Transform  sig=csp ====
void *__thiscall Transform::Copy(Transform *this, const void *a2)
{
  qmemcpy(this, a2, 0x30u); /*0x5ae61f*/
  return this; /*0x5ae621*/
}



// ==== 0x005AE6F0  Matrix3D::Constructor  this=Matrix3D  sig=csp ====
int *__thiscall Matrix3D::Constructor(Matrix3D *this, float a2, float a3)
{
  float v5; // [esp+0h] [ebp-8h]

  *(_DWORD *)&this->m_1[3] = 0; /*0x5ae6fa*/
  *(_DWORD *)&this->m_5[3] = 0; /*0x5ae6fd*/
  *(_DWORD *)&this->m_9[3] = 0; /*0x5ae700*/
  this->q004 = 0; /*0x5ae703*/
  this->q018 = 0; /*0x5ae706*/
  this->q01C = 0; /*0x5ae709*/
  this->q008 = 0; /*0x5ae70c*/
  this->q024 = 0; /*0x5ae70f*/
  this->q02C = 0; /*0x5ae712*/
  *(_DWORD *)this->__pad_0 = 1065353216; /*0x5ae719*/
  this->q014 = 1065353216; /*0x5ae71b*/
  this->q028 = 1065353216; /*0x5ae71e*/
  Matrix2D::Rotate((int *)this->__pad_0, a2); /*0x5ae724*/
  Matrix3x3::RotateX((int *)this->__pad_0, a3); /*0x5ae730*/
  v5 = -a2; /*0x5ae73e*/
  Matrix2D::Rotate((int *)this->__pad_0, v5); /*0x5ae741*/
  return (int *)this->__pad_0; /*0x5ae748*/
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
  this->u32_4 = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  v10 = v5 * a2[1]; /*0x5ae7bf*/
  *(this + 3) = 0.0; /*0x5ae7c2*/
  this->u32_8 = v9 + v10; /*0x5ae7c7*/
  this->u32_4 = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  this->q050 = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  v13 = v5 * *a2; /*0x5ae7ff*/
  *(this + 7) = 0.0; /*0x5ae801*/
  this->u32_18 = v12 - v13; /*0x5ae806*/
  this->u32_8 = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(this + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(this + 11) = 0.0; /*0x5ae83f*/
  this->u32_28 = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return this; /*0x5ae851*/
}



// ==== 0x005AE860  Matrix3x4::Identity  this=Matrix3x4  sig=csp ====
int __thiscall Matrix3x4::Identity(Matrix3x4 *this)
{
  this->m_Data[0] = 1065353216; /*0x5ae867*/
  this->m_Data[1] = 0; /*0x5ae869*/
  this->m_Data[2] = 0; /*0x5ae86c*/
  this->m_Data[3] = 0; /*0x5ae86f*/
  this->m_Data[4] = 0; /*0x5ae872*/
  this->m_Data[5] = 1065353216; /*0x5ae875*/
  this->m_Data[6] = 0; /*0x5ae878*/
  this->m_Data[7] = 0; /*0x5ae87b*/
  this->m_Data[8] = 0; /*0x5ae87e*/
  this->m_Data[9] = 0; /*0x5ae881*/
  this->m_Data[10] = 1065353216; /*0x5ae884*/
  this->m_Data[11] = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}



// ==== 0x005AE890  Vector::MatrixMulVectorMath  this=Vector  sig=csp ====
int __thiscall Vector::MatrixMulVectorMath(int *this, float a2, float a3, float a4)
{
  int result; // eax

  *((float *)this + 3) = a3 * *((float *)this + 1) /*0x5ae8ab*/
                       + a4 * *((float *)this + 2)
                       + a2 * *(float *)this
                       + *((float *)this + 3);
  *((float *)this + 7) = a2 * *((float *)this + 4) /*0x5ae8ca*/
                       + a3 * *((float *)this + 5)
                       + a4 * *((float *)this + 6)
                       + *((float *)this + 7);
  *((float *)this + 11) = a2 * *((float *)this + 8) /*0x5ae8e9*/
                        + a3 * *((float *)this + 9)
                        + a4 * *((float *)this + 10)
                        + *((float *)this + 11);
  return result; /*0x5ae8ec*/
}



// ==== 0x005AE8F0  Matrix3x3::Multiply  this=Matrix3x3  sig=csp ====
int Matrix3x3::Multiply(int *this, float *a2)
{
  float *v2; // ecx
  int result; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float thisa; // [esp+8h] [ebp+4h]
  float thisb; // [esp+8h] [ebp+4h]

  result = (int)this; /*0x5ae8f1*/
  v4 = *(float *)this; /*0x5ae8f5*/
  thisa = v4 * *v2 + v2[3]; /*0x5ae8fe*/
  v2[3] = thisa; /*0x5ae902*/
  v9 = v4 * v2[4] + v2[7]; /*0x5ae90d*/
  v2[7] = v9; /*0x5ae911*/
  v5 = v4 * v2[8] + v2[11]; /*0x5ae917*/
  v2[11] = v5; /*0x5ae91a*/
  v6 = *(float *)(result + 4); /*0x5ae91d*/
  thisb = v6 * v2[1] + thisa; /*0x5ae929*/
  v2[3] = thisb; /*0x5ae92d*/
  v10 = v6 * v2[5] + v9; /*0x5ae939*/
  v2[7] = v10; /*0x5ae93d*/
  v7 = v5 + v6 * v2[9]; /*0x5ae943*/
  v2[11] = v7; /*0x5ae945*/
  v8 = *(float *)(result + 8); /*0x5ae948*/
  v2[3] = v8 * v2[2] + thisb; /*0x5ae954*/
  v2[7] = v8 * v2[6] + v10; /*0x5ae960*/
  v2[11] = v8 * v2[10] + v7; /*0x5ae968*/
  return result; /*0x5ae96e*/
}



// ==== 0x005AE980  Matrix3x4::Translate  this=Matrix3x4  sig=csp ====
int __thiscall Matrix3x4::Translate(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *(float *)this + *((float *)this + 3); /*0x5ae989*/
  *((float *)this + 7) = a2 * *((float *)this + 4) + *((float *)this + 7); /*0x5ae996*/
  *((float *)this + 11) = a2 * *((float *)this + 8) + *((float *)this + 11); /*0x5ae9a3*/
  return result; /*0x5ae9a6*/
}



// ==== 0x005AE9B0  Matrix3x3::ApplyCol0  this=Matrix3x3  sig=csp ====
int __thiscall Matrix3x3::ApplyCol0(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *((float *)this + 1) + *((float *)this + 3); /*0x5ae9ba*/
  *((float *)this + 7) = a2 * *((float *)this + 5) + *((float *)this + 7); /*0x5ae9c7*/
  *((float *)this + 11) = a2 * *((float *)this + 9) + *((float *)this + 11); /*0x5ae9d4*/
  return result; /*0x5ae9d7*/
}



// ==== 0x005AE9E0  Matrix3x3::ApplyCol1  this=Matrix3x3  sig=csp ====
int __thiscall Matrix3x3::ApplyCol1(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *((float *)this + 2) + *((float *)this + 3); /*0x5ae9ea*/
  *((float *)this + 7) = a2 * *((float *)this + 6) + *((float *)this + 7); /*0x5ae9f7*/
  *((float *)this + 11) = a2 * *((float *)this + 10) + *((float *)this + 11); /*0x5aea04*/
  return result; /*0x5aea07*/
}



// ==== 0x005AEA10  TacticalMap::MultiplyByScalar  this=ObjectClass  sig=csp ====
void __thiscall sub_5AEA10(float *this, float a2)
{
  *this = a2 * *this; /*0x5aea16*/
  this->vtable2 = a2 * this->vtable2; /*0x5aea1f*/
  this->vtable3 = a2 * this->vtable3; /*0x5aea29*/
  this->vtable2 = a2 * this->vtable2; /*0x5aea33*/
  this->abstractFlags = a2 * this->abstractFlags; /*0x5aea3d*/
  this->objectTypeFlags = a2 * this->objectTypeFlags; /*0x5aea47*/
  this->vtable3 = a2 * this->vtable3; /*0x5aea51*/
  this->nextArrayIndex = a2 * this->nextArrayIndex; /*0x5aea5b*/
  this->owningHouseIndex = a2 * this->owningHouseIndex; /*0x5aea65*/
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
int __thiscall sub_5AEC40(ObjectClass *this, float a2)
{
  int result; // eax
  void *NeedsSaveOrLink; // [esp+0h] [ebp-24h]
  int uniqueId; // [esp+4h] [ebp-20h]
  int occupant; // [esp+8h] [ebp-1Ch]
  int abstractFlags; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int nextArrayIndex; // [esp+14h] [ebp-10h]
  int fallRate; // [esp+18h] [ebp-Ch]
  double v19; // [esp+1Ch] [ebp-8h]

  __asm { fld [esp+24h+arg_0] } /*0x5aec43*/
  __asm { fstp [esp+2Ch+var_8] }
  Math::SinCos(v19); /*0x5aec5a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aec5f*/
  Math::ArcTan2(v19); /*0x5aec65*/
  __asm { fld [esp+40h+arg_0] } /*0x5aec70*/
  abstractFlags = this->?; /*0x5aec74*/
  __asm { fchs } /*0x5aec7b*/
  NeedsSaveOrLink = this->?; /*0x5aec7d*/
  __asm /*0x5aec84*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  uniqueId = this->?; /*0x5aec8a*/
  nextArrayIndex = this->?; /*0x5aec8e*/
  __asm { fld [esp+40h+var_20] } /*0x5aec92*/
  __asm { fmul st, st(3) }
  occupant = this->occupant; /*0x5aec9e*/
  LODWORD(v19) = this->?; /*0x5aeca2*/
  result = this->owningHouseIndex; /*0x5aeca6*/
  __asm { faddp st(1), st } /*0x5aecac*/
  v16 = result; /*0x5aecae*/
  fallRate = this->fallRate; /*0x5aecb2*/
  __asm { fstp dword ptr [esi+10h] } /*0x5aecb9*/
  this->? = _ET1; /*0x5aecb9*/
  __asm /*0x5aecbc*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->? = _ET1; /*0x5aecca*/
  __asm /*0x5aeccd*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->? = _ET1; /*0x5aecdb*/
  __asm /*0x5aecde*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+1Ch]
  }
  this->? = _ET1; /*0x5aecec*/
  __asm /*0x5aecef*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  this->? = _ET1; /*0x5aed01*/
  __asm /*0x5aed04*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  this->occupant = _ET1; /*0x5aed14*/
  __asm /*0x5aed17*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  this->owningHouseIndex = _ET1; /*0x5aed27*/
  __asm /*0x5aed2a*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+2Ch] }
  this->fallRate = _ET1; /*0x5aed3b*/
  __asm { fstp st } /*0x5aed40*/
  return result; /*0x5aed42*/
}



// ==== 0x005AED50  ObjectClass::method_5AED50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AED50(ObjectClass *this, float a2)
{
  int result; // eax
  void *vtable1; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-18h]
  void *vtable2; // [esp+8h] [ebp-14h]
  int owningHouseIndex; // [esp+Ch] [ebp-10h]
  void *vtable3; // [esp+10h] [ebp-Ch]
  double v17; // [esp+14h] [ebp-8h]

  __asm { fld [esp+1Ch+arg_0] } /*0x5aed53*/
  __asm { fstp [esp+24h+var_8] }
  _ESI = this; /*0x5aed66*/
  Math::SinCos(v17); /*0x5aed6a*/
  __asm { fstp [esp+30h+arg_0] } /*0x5aed6f*/
  Math::ArcTan2(v17); /*0x5aed75*/
  __asm /*0x5aed7a*/
  {
    fld [esp+38h+arg_0]
    fchs
    fld dword ptr [esi]
    fld dword ptr [esi+20h]
    fld st
    fmul [esp+38h+arg_0]
  }
  __asm
  {
    fld st(2)
    fmul st, st(5)
  }
  vtable1 = _ESI->?; /*0x5aed95*/
  result = _ESI->occupant; /*0x5aed99*/
  v13 = result; /*0x5aed9c*/
  vtable2 = _ESI->?; /*0x5aeda0*/
  __asm { faddp st(1), st } /*0x5aeda4*/
  owningHouseIndex = _ESI->owningHouseIndex; /*0x5aedac*/
  vtable3 = _ESI->?; /*0x5aedb0*/
  __asm { fstp dword ptr [esi] } /*0x5aedb4*/
  *(float *)&_ESI->AbstractClass = _ET1; /*0x5aedb4*/
  __asm /*0x5aedb6*/
  {
    fld [esp+38h+var_18]
    fmul [esp+38h+arg_0]
    fld [esp+38h+var_1C]
    fmul st, st(5)
  }
  LODWORD(v17) = _ESI->fallRate; /*0x5aedca*/
  __asm /*0x5aedce*/
  {
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aedd0*/
  __asm /*0x5aedd3*/
  {
    fld [esp+28h+var_10]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_14]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aede3*/
  __asm /*0x5aede6*/
  {
    fld dword ptr [esp+28h+var_8]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_C]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aedf6*/
  __asm /*0x5aedf9*/
  {
    fxch st(1)
    fmul st, st(2)
    fxch st(1)
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aee03*/
  __asm /*0x5aee06*/
  {
    fld [esp+28h+var_1C]
    fmul st, st(1)
    fld [esp+28h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  *(float *)&_ESI->occupant = _ET1; /*0x5aee14*/
  __asm /*0x5aee17*/
  {
    fld [esp+28h+var_14]
    fmul st, st(1)
    fld [esp+28h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  *(float *)&_ESI->owningHouseIndex = _ET1; /*0x5aee25*/
  __asm /*0x5aee28*/
  {
    fld [esp+28h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+28h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5aee36*/
  __asm { fstp st } /*0x5aee39*/
  __asm { fstp st }
  return result; /*0x5aee40*/
}



// ==== 0x005AEE50  ObjectClass::method_5AEE50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AEE50(ObjectClass *this, float a2)
{
  int result; // eax
  int uniqueId; // [esp+0h] [ebp-24h]
  void *vtable0; // [esp+4h] [ebp-20h]
  int abstractFlags; // [esp+8h] [ebp-1Ch]
  void *vtable1; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  void *vtable2; // [esp+14h] [ebp-10h]
  int referenceCount; // [esp+18h] [ebp-Ch]
  double v19; // [esp+1Ch] [ebp-8h]

  __asm { fld [esp+24h+arg_0] } /*0x5aee53*/
  __asm { fstp [esp+2Ch+var_8] }
  Math::SinCos(v19); /*0x5aee6a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aee6f*/
  Math::ArcTan2(v19); /*0x5aee75*/
  __asm { fld [esp+40h+arg_0] } /*0x5aee7f*/
  vtable1 = this->?; /*0x5aee83*/
  __asm { fchs } /*0x5aee8a*/
  uniqueId = this->?; /*0x5aee8c*/
  __asm /*0x5aee93*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  vtable0 = this->AbstractClass; /*0x5aee99*/
  vtable2 = this->?; /*0x5aee9d*/
  __asm { fld [esp+40h+var_20] } /*0x5aeea1*/
  __asm { fmul st, st(3) }
  abstractFlags = this->?; /*0x5aeead*/
  LODWORD(v19) = this->?; /*0x5aeeb1*/
  result = this->?; /*0x5aeeb5*/
  __asm { faddp st(1), st } /*0x5aeebb*/
  v16 = result; /*0x5aeebd*/
  referenceCount = this->?; /*0x5aeec1*/
  __asm { fstp dword ptr [esi] } /*0x5aeec8*/
  this->AbstractClass = _ET1; /*0x5aeec8*/
  __asm /*0x5aeeca*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  this->? = _ET1; /*0x5aeed8*/
  __asm /*0x5aeedb*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  this->? = _ET1; /*0x5aeee9*/
  __asm /*0x5aeeec*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  this->? = _ET1; /*0x5aeefa*/
  __asm /*0x5aeefd*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  this->? = _ET1; /*0x5aef0f*/
  __asm /*0x5aef12*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->? = _ET1; /*0x5aef22*/
  __asm /*0x5aef25*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->? = _ET1; /*0x5aef35*/
  __asm /*0x5aef38*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+1Ch] }
  this->? = _ET1; /*0x5aef49*/
  __asm { fstp st } /*0x5aef4e*/
  return result; /*0x5aef50*/
}



// ==== 0x005AEF60  Matrix3x3::RotateX  this=ObjectClass  sig=csp ====
int __thiscall Matrix3x3::RotateX(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5aef63*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5aef76*/
  Math::SinCos(v10); /*0x5aef7a*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5aef7f*/
  result = Math::ArcTan2(v10); /*0x5aef85*/
  __asm /*0x5aef8a*/
  {
    fld dword ptr [esi+4]
    fld dword ptr [esi+8]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+24h+arg_0]
  }
  __asm { faddp st(1), st }
  __asm { fstp dword ptr [esi+4] }
  _ESI[1] = _ET1; /*0x5aefa0*/
  __asm /*0x5aefa3*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+8]
  }
  _ESI[2] = _ET1; /*0x5aefad*/
  __asm /*0x5aefb0*/
  {
    fld dword ptr [esi+14h]
    fld dword ptr [esi+18h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  _ESI[5] = _ET1; /*0x5aefc2*/
  __asm /*0x5aefc5*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+18h]
  }
  _ESI[6] = _ET1; /*0x5aefcf*/
  __asm /*0x5aefd2*/
  {
    fld dword ptr [esi+24h]
    fld dword ptr [esi+28h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  _ESI[9] = _ET1; /*0x5aefe4*/
  __asm /*0x5aefe7*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+28h]
  }
  _ESI[10] = _ET1; /*0x5aeff1*/
  __asm { fstp st } /*0x5aeff6*/
  return result; /*0x5aeff8*/
}



// ==== 0x005AF000  ObjectClass::method_5AF000  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF000(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = this->vtable2; /*0x5af000*/
  v4 = this->vtable3; /*0x5af003*/
  this->vtable2 = v4 * a2 + v3 * a3; /*0x5af014*/
  this->vtable3 = v4 * a3 - v3 * a2; /*0x5af023*/
  v5 = this->abstractFlags; /*0x5af026*/
  v6 = this->nextArrayIndex; /*0x5af029*/
  this->abstractFlags = v6 * a2 + v5 * a3; /*0x5af03a*/
  this->nextArrayIndex = v6 * a3 - v5 * a2; /*0x5af049*/
  v7 = this->objectTypeFlags; /*0x5af04c*/
  v8 = this->owningHouseIndex; /*0x5af04f*/
  this->objectTypeFlags = v8 * a2 + v7 * a3; /*0x5af060*/
  this->owningHouseIndex = v8 * a3 - v7 * a2; /*0x5af06f*/
}



// ==== 0x005AF080  Matrix3D::RotateZ  this=RecoilData  sig=csp ====
int __thiscall Matrix3D::RotateZ(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5af083*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5af096*/
  Math::SinCos(v10); /*0x5af09a*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5af09f*/
  result = Math::ArcTan2(v10); /*0x5af0a5*/
  __asm /*0x5af0aa*/
  {
    fld dword ptr [esi]
    fld dword ptr [esi+8]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+24h+arg_0]
  }
  __asm { fsubp st(1), st }
  __asm { fstp dword ptr [esi] }
  *_ESI = _ET1; /*0x5af0bf*/
  __asm /*0x5af0c1*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  _ESI[2] = _ET1; /*0x5af0cb*/
  __asm /*0x5af0ce*/
  {
    fld dword ptr [esi+10h]
    fld dword ptr [esi+18h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+10h]
  }
  _ESI[4] = _ET1; /*0x5af0e0*/
  __asm /*0x5af0e3*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  _ESI[6] = _ET1; /*0x5af0ed*/
  __asm /*0x5af0f0*/
  {
    fld dword ptr [esi+20h]
    fld dword ptr [esi+28h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+20h]
  }
  _ESI[8] = _ET1; /*0x5af102*/
  __asm /*0x5af105*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  _ESI[10] = _ET1; /*0x5af10f*/
  __asm { fstp st } /*0x5af114*/
  return result; /*0x5af116*/
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



// ==== 0x005AF1A0  Matrix2D::Rotate  this=Matrix2D  sig=csp ====
int __thiscall Matrix2D::Rotate(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5af1a3*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5af1b6*/
  Math::ArcTan2(v10); /*0x5af1ba*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5af1bf*/
  result = Math::SinCos(v10); /*0x5af1c5*/
  __asm /*0x5af1ca*/
  {
    fld dword ptr [esi]
    fld dword ptr [esi+4]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+24h+arg_0]
  }
  __asm { faddp st(1), st }
  __asm { fstp dword ptr [esi] }
  *_ESI = _ET1; /*0x5af1df*/
  __asm /*0x5af1e1*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+4]
  }
  _ESI[1] = _ET1; /*0x5af1eb*/
  __asm /*0x5af1ee*/
  {
    fld dword ptr [esi+10h]
    fld dword ptr [esi+14h]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  _ESI[4] = _ET1; /*0x5af200*/
  __asm /*0x5af203*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+14h]
  }
  _ESI[5] = _ET1; /*0x5af20d*/
  __asm /*0x5af210*/
  {
    fld dword ptr [esi+20h]
    fld dword ptr [esi+24h]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  _ESI[8] = _ET1; /*0x5af222*/
  __asm /*0x5af225*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+24h]
  }
  _ESI[9] = _ET1; /*0x5af22f*/
  __asm { fstp st } /*0x5af234*/
  return result; /*0x5af236*/
}



// ==== 0x005AF2C0  ObjectClass::method_5AF2C0  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF2C0(ObjectClass *this)
{
  float v2[3]; // [esp+0h] [ebp-24h] BYREF
  float v3[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x5af2ce*/
  return *TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af303*/
}



// ==== 0x005AF310  ObjectClass::method_5AF310  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF310(ObjectClass *this)
{
  float *v1; // eax
  float v3[4]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af31e*/
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af336*/
  v3[3] = *v1; /*0x5af33d*/
  return v1[1]; /*0x5af353*/
}



// ==== 0x005AF360  ObjectClass::method_5AF360  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF360(ObjectClass *this)
{
  float *v1; // eax
  float v3[5]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af36e*/
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af386*/
  v3[3] = *v1; /*0x5af38d*/
  v3[4] = v1[1]; /*0x5af394*/
  return v1[2]; /*0x5af3a3*/
}



// ==== 0x005AF3B0  ObjectClass::method_5AF3B0  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF3B0(ObjectClass *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 0.0; /*0x5af3be*/
  v2[1] = 1.0; /*0x5af3c6*/
  v2[2] = 0.0; /*0x5af3ce*/
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af3d6*/
  Math::CalcAngle(v1[2], v1[1]); /*0x5af404*/
}



// ==== 0x005AF410  TechnoClass::CalcFacingFromMatrix  this=TechnoClass  sig=csp ====
void __thiscall sub_5AF410(float *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 0.0; /*0x5af41e*/
  v2[1] = 0.0; /*0x5af426*/
  v2[2] = 1.0; /*0x5af42e*/
  v1 = TransformMatrix3x4Point(v3, this, v2); /*0x5af436*/
  Math::CalcAngle(*v1, v1[2]); /*0x5af464*/
}



// ==== 0x005AF470  ObjectClass::method_5AF470  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF470(ObjectClass *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 1.0; /*0x5af47e*/
  v2[1] = 0.0; /*0x5af486*/
  v2[2] = 0.0; /*0x5af48e*/
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af496*/
  Math::CalcAngle(v1[1], *v1); /*0x5af4c4*/
}



// ==== 0x005AF4D0  Matrix3x3::TransformPoint  this=Matrix3x3  sig=csp ====
int Matrix3x3::TransformPoint(int *this, float *a2, float *a3)
{
  float *v3; // ecx
  double v4; // st7
  double v5; // st6
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v7 = v3[1] * a2[1] + v3[2] * a2[2] + *a2 * *v3; /*0x5af4eb*/
  v8 = v3[5] * a2[1] + v3[4] * *a2 + v3[6] * a2[2]; /*0x5af508*/
  v4 = v3[9] * a2[1] + v3[8] * *a2; /*0x5af517*/
  v5 = v3[10] * a2[2]; /*0x5af51c*/
  *(float *)this = v7; /*0x5af527*/
  v9 = v4 + v5; /*0x5af52d*/
  *((float *)this + 1) = v8; /*0x5af531*/
  *((float *)this + 2) = v9; /*0x5af538*/
  return (int)this; /*0x5af53b*/
}



// ==== 0x005AF550  ObjectClass::method_5AF550  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF550(ObjectClass *this, float *a2, float *a3, float a4)
{
  double v18; // [esp+0h] [ebp-28h]
  double v19; // [esp+0h] [ebp-28h]
  float v20; // [esp+0h] [ebp-28h]
  int v25; // [esp+14h] [ebp-14h]
  float v28; // [esp+18h] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-Ch]
  float v31; // [esp+20h] [ebp-8h]
  int v32; // [esp+24h] [ebp-4h]
  float v34; // [esp+2Ch] [ebp+4h]
  float *v36; // [esp+30h] [ebp+8h]
  float *v37; // [esp+30h] [ebp+8h]

  _EAX = a3; /*0x5af553*/
  _EDI = a2; /*0x5af559*/
  __asm /*0x5af55d*/
  {
    fld dword ptr [eax]
    fsub dword ptr [edi]
  }
  _ESI = this; /*0x5af564*/
  __asm /*0x5af566*/
  {
    fstp [esp+28h+var_18]
    fld dword ptr [eax+4]
    fsub dword ptr [edi+4]
    fstp [esp+28h+arg_4]
    fld dword ptr [eax+8]
    fsub dword ptr [edi+8]
    fst [esp+28h+var_14]
    fmul [esp+28h+var_14]
    fstp [esp+28h+var_C]
    fld [esp+28h+var_18]
    fmul [esp+28h+var_18]
    fstp [esp+28h+var_10]
    fld [esp+28h+arg_4]
    fmul [esp+28h+arg_4]
    fadd [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  Math::Sqrt(v18); /*0x5af5a5*/
  __asm /*0x5af5aa*/
  {
    fstp [esp+28h+arg_0]
    fld [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  Math::Sqrt(v19); /*0x5af5b9*/
  __asm /*0x5af5be*/
  {
    fld [esp+28h+arg_0]
    fcomp ds:flt_7E1748
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x5af5d0*/
  {
    v31 = 0.0; /*0x5af5ea*/
    v28 = 1.0; /*0x5af5f2*/
  }
  else
  {
    __asm /*0x5af5d2*/
    {
      fld [esp+20h+arg_4]
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_8]
      fld st
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_10]
    }
  }
  __asm /*0x5af5fa*/
  {
    fcom ds:flt_7E1748
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5af605*/
  {
    __asm { fstp st } /*0x5af61f*/
    v30 = 0.0; /*0x5af621*/
    v34 = 1.0; /*0x5af629*/
  }
  else
  {
    __asm /*0x5af607*/
    {
      fld [esp+20h+var_18]
      fdiv st, st(1)
      fstp [esp+20h+var_C]
      fld [esp+20h+var_14]
      fdiv st, st(1)
      fstp [esp+20h+arg_0]
      fstp st
    }
  }
  _ESI->AbstractClass = (void *)1065353216; /*0x5af638*/
  _ESI->? = 0; /*0x5af63a*/
  _ESI->? = 0; /*0x5af63d*/
  _ESI->? = 0; /*0x5af640*/
  _ESI->? = 0; /*0x5af643*/
  _ESI->? = 1065353216; /*0x5af646*/
  _ESI->? = 0; /*0x5af649*/
  _ESI->? = 0; /*0x5af64c*/
  _ESI->? = 0; /*0x5af64f*/
  _ESI->occupant = 0; /*0x5af652*/
  _ESI->owningHouseIndex = 1065353216; /*0x5af655*/
  _ESI->fallRate = 0; /*0x5af658*/
  __asm { fld dword ptr [edi] } /*0x5af65b*/
  v36 = 0; /*0x5af65d*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af669*/
  *(float *)&_ESI->? = _ET1; /*0x5af669*/
  __asm { fld ds:flt_7E1748 } /*0x5af66c*/
  __asm
  {
    fst [esp+24h+var_18]
    fst dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af677*/
  __asm { fstp dword ptr [esi+2Ch] } /*0x5af67a*/
  *(float *)&_ESI->fallRate = _ET1; /*0x5af67a*/
  __asm { fadd [esp+24h+arg_4] } /*0x5af680*/
  v25 = *((_DWORD *)_EDI + 1); /*0x5af684*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af68d*/
  *(float *)&_ESI->? = _ET1; /*0x5af68d*/
  __asm /*0x5af690*/
  {
    fld [esp+28h+var_14]
    fadd dword ptr [esi+1Ch]
    fst [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af69b*/
  __asm /*0x5af69e*/
  {
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_18]
  }
  v37 = 0; /*0x5af6a6*/
  __asm /*0x5af6ae*/
  {
    fst [esp+28h+var_18]
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5af6b2*/
  __asm { fld [esp+28h+arg_4] } /*0x5af6b5*/
  __asm { fadd st, st(1) }
  v32 = *((_DWORD *)_EDI + 2); /*0x5af6be*/
  __asm { fstp dword ptr [esi+0Ch] } /*0x5af6c4*/
  *(float *)&_ESI->? = _ET1; /*0x5af6c4*/
  __asm /*0x5af6c7*/
  {
    fstp st
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af6d1*/
  __asm /*0x5af6d4*/
  {
    fld [esp+28h+var_18]
    fadd [esp+28h+var_4]
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5af6dc*/
  sub_5AF120((float *)_ESI, v30, v34); /*0x5af6df*/
  __asm { fld [esp+20h+var_8] } /*0x5af6e8*/
  __asm
  {
    fchs
    fstp dword ptr [esp+28h+var_28]; float
  }
  sub_5AF000((float *)_ESI, v20, v28); /*0x5af6f5*/
  Matrix2D::Rotate((int *)_ESI, a4); /*0x5af701*/
}



// ==== 0x005AF980  MultiplyMatrix3x4  this=-  sig=csp ====
float *__fastcall Matrix3x4_Multiply(float *a1, float *a2, float *a3)
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
  float v26; // [esp+74h] [ebp+4h]

  result = a1; /*0x5af983*/
  v14 = a2[4]; /*0x5af98a*/
  v13 = a2[5]; /*0x5af991*/
  v4 = *a2; /*0x5af998*/
  v12 = a2[6]; /*0x5af99a*/
  v5 = a2[1]; /*0x5af9a1*/
  v6 = a2[2]; /*0x5af9a4*/
  v17 = a2[8]; /*0x5af9a7*/
  v16 = a2[9]; /*0x5af9ae*/
  v15 = a2[10]; /*0x5af9b5*/
  v8 = *a3; /*0x5af9bd*/
  v9 = a3[4]; /*0x5af9bf*/
  v10 = a3[8]; /*0x5af9c2*/
  v19 = a3[1]; /*0x5af9d0*/
  v22 = a3[2]; /*0x5af9dd*/
  v24 = a3[3]; /*0x5af9e4*/
  v18 = a3[5]; /*0x5af9ed*/
  v21 = a3[6]; /*0x5af9f4*/
  v11 = a3[7]; /*0x5af9f8*/
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  v26 = a3[9]; /*0x5afa12*/
  v20 = a3[10]; /*0x5afa1c*/
  v23 = a3[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = v26 * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = v26 * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = v26 * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a2[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a2[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a2[11]; /*0x5afb6e*/
  qmemcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}



// ==== 0x005AFB80  TransformMatrix3x4Point  this=-  sig=csp ====
float *__fastcall Matrix3x4_TransformPoint(float *a1, float *a2, float *a3)
{
  double v4; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = a2[2] * a3[2] + a2[1] * a3[1] + *a2 * *a3 + a2[3]; /*0x5afba1*/
  v6 = a2[4] * *a3 + a2[6] * a3[2] + a2[5] * a3[1] + a2[7]; /*0x5afbbd*/
  v4 = a2[8] * *a3 + a2[10] * a3[2] + a2[9] * a3[1] + a2[11]; /*0x5afbd7*/
  *a1 = v5; /*0x5afbde*/
  v7 = v4; /*0x5afbe4*/
  a1[1] = v6; /*0x5afbe8*/
  a1[2] = v7; /*0x5afbef*/
  return a1; /*0x5afbf2*/
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
  dbl_ABEE48 = dbl_ABEDF8 / 60.0; /*0x5afd1c*/
}



// ==== 0x005AFD30  sub_5AFD30  this=-  sig=ida-proto ====
void sub_5AFD30()
{
  dbl_ABEE30 = 1.0 / dbl_ABEE48; /*0x5afd3c*/
}



// ==== 0x005AFD50  sub_5AFD50  this=-  sig=ida-proto ====
void sub_5AFD50()
{
  dbl_ABEE28 = 0.0174532925199433 * 45.0; /*0x5afd5c*/
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
  dword_ABEE50 = result; /*0x5afddb*/
  return result; /*0x5afde0*/
}



// ==== 0x005AFDF0  sub_5AFDF0  this=-  sig=ida-proto ====
void sub_5AFDF0()
{
  dbl_ABEE08 = Math::ArcTan((double)dword_ABEE50 * 0.00390625); /*0x5afe07*/
}



// ==== 0x005AFE20  sub_5AFE20  this=-  sig=ida-proto ====
void sub_5AFE20()
{
  dbl_ABEE20 = Math::ArcTan((double)(2 * dword_ABEE50) / dbl_ABEDF8); /*0x5afe42*/
}



// ==== 0x005AFE50  sub_5AFE50  this=-  sig=ida-proto ====
__int64 sub_5AFE50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEE50) + 0.5); /*0x5afe6b*/
  dword_ABEE44 = result; /*0x5afe70*/
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
  dword_ABEE10 = 0; /*0x5afe92*/
  dword_ABEE14 = 0; /*0x5afe97*/
  dword_ABEE18 = 0; /*0x5afe9c*/
  return 0; /*0x5afea1*/
}



// ==== 0x005AFEB0  sub_5AFEB0  this=-  sig=ida-proto ====
int sub_5AFEB0()
{
  dword_ABEE40 = 0; /*0x5afeb5*/
  dword_ABEE38 = 128; /*0x5afebf*/
  dword_ABEE3C = 128; /*0x5afec4*/
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
int __thiscall SmallFunc_5AFEF0(MechLocomotionClass *this)
{
  int v2; // eax

  LocomotionClass::Init((LocomotionClass *)this); /*0x5afef3*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff01*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff0a*/
  this->MovingDestination[2] = g_MissionQueueFrame.localVariables[229]; /*0x5aff16*/
  this->HeadToCoord[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff1e*/
  this->HeadToCoord[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff26*/
  v2 = g_MissionQueueFrame.localVariables[229]; /*0x5aff29*/
  this->IsMoving = 0; /*0x5aff2e*/
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5aff32*/
  this->HeadToCoord[2] = v2; /*0x5aff38*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5aff3b*/
  return (int)this->LocomotionClass; /*0x5aff44*/
}



// ==== 0x005AFF50  MechLocomotionClass::method_5AFF50  this=MechLocomotionClass  sig=csp ====
void __thiscall sub_5AFF50(MechLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5aff50*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5aff56*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5aff5d*/
}



// ==== 0x005AFF70  JumpjetLocomotionClass::SmallStub_5AFF70  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_5AFF70(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Accel); /*0x5aff77*/
}



// ==== 0x005AFF80  JumpjetLocomotionClass::GetMovementCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // edx
  int Speed; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x5aff89*/
  {
    result = a2; /*0x5aff90*/
    TurnRate = this->TurnRate; /*0x5aff97*/
    Speed = this->Speed; /*0x5aff9a*/
    v5 = a2; /*0x5aff9d*/
    *a2 = this->?; /*0x5aff9f*/
  }
  else
  {
    result = a2; /*0x5affac*/
    TurnRate = g_MissionQueueFrame.localVariables[228]; /*0x5affb6*/
    Speed = g_MissionQueueFrame.localVariables[229]; /*0x5affbc*/
    v5 = a2; /*0x5affc2*/
    *a2 = g_MissionQueueFrame.localVariables[227]; /*0x5affc4*/
  }
  v5[1] = TurnRate; /*0x5affa1*/
  v5[2] = Speed; /*0x5affa4*/
  return result; /*0x5affa7*/
}



// ==== 0x005AFFE0  JumpjetLocomotionClass::GetRenderCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Climb) == g_MissionQueueFrame.localVariables[227] /*0x5b000b*/
    && LODWORD(this->Crash) == g_MissionQueueFrame.localVariables[228]
    && this->Height == g_MissionQueueFrame.localVariables[229] )
  {
    Owner = this->?; /*0x5b002b*/
    location = Owner->?; /*0x5b0034*/
    v7 = Owner->?[0]; /*0x5b0036*/
    v8 = Owner->?[1]; /*0x5b0038*/
    v9 = location[2]; /*0x5b003b*/
    *a2 = v7; /*0x5b0044*/
    a2[1] = v8; /*0x5b0046*/
    a2[2] = v9; /*0x5b0049*/
    return a2; /*0x5b003e*/
  }
  else
  {
    Crash = this->Crash; /*0x5b0014*/
    Height = this->Height; /*0x5b0017*/
    *a2 = LODWORD(this->Climb); /*0x5b001c*/
    *((float *)a2 + 1) = Crash; /*0x5b001e*/
    a2[2] = Height; /*0x5b0021*/
    return a2; /*0x5b0024*/
  }
}



// ==== 0x005A0090  MapClass::SetObstruction  this=MapClass  sig=csp ====
int __stdcall MapClass_SetObstruction(__int16 *a1, int a2)
{
  int result; // eax

  if ( dword_ABED10 ) /*0x5a0098*/
  {
    result = 80 * (*a1 + g_MapCellWidth * a1[1]); /*0x5a00b5*/
    *(_DWORD *)((char *)dword_ABED10 + result + 56) = a2; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}



// ==== 0x005A00C0  MapClass::GetTileDataField14  this=MapClass  sig=csp ====
int __stdcall MapClass::GetTileDataField14(__int16 *a1)
{
  if ( dword_ABED10 ) /*0x5a00c8*/
    return *((_DWORD *)dword_ABED10 + 20 * *a1 + 20 * g_MapCellWidth * a1[1] + 14); /*0x5a00ea*/
  else
    return -1; /*0x5a00ca*/
}



// ==== 0x005A0160  TiberiumClass::Spread  this=TiberiumClass  sig=csp ====
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
      *v9 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a01a0*/
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
          if ( v16 > dword_ABED04 /*0x5a0285*/
            && v14 - v15 < dword_ABED04
            && v15 - v14 < dword_ABED04
            && v16 <= dword_ABED08
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)dword_ABED10 + 80 * v14 + 80 * g_MapCellWidth * v15; /*0x5a02a4*/
            v18 = *((_DWORD *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30); /*0x5a02c6*/
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
                *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
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



// ==== 0x005A0410  MapClass::GrowLayer  this=MapClass  sig=csp ====
char __thiscall MapClass::GrowLayer(MapClass *this, int a2, int a3, int a4)
{
  MapClass *v4; // ebx
  int v5; // esi
  VectorClass *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  VectorClass *v11; // eax
  VectorClass *v12; // esi
  VectorClass *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int Capacity; // ecx
  int v24; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  int m; // eax
  VectorClass *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  __int16 v31[2]; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  MapClass *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (VectorClass *)RandomMap::CellListAlloc((RandomMap *)this, a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a044e*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v35 = *(_DWORD *)(i + 36); /*0x5a0453*/
      *(_DWORD *)(80 * ((__int16)v35 + g_MapCellWidth * SHIWORD(v35)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = (int)v6[1].vtable0 - 1; j >= 0; v10[283] = v4->__pad_30C[0] ) /*0x5a0499*/
      {
        v9 = *((_DWORD *)v6->Items + j); /*0x5a04a6*/
        *(_DWORD *)v31 = v9; /*0x5a04a9*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a04ad*/
          *(_DWORD *)(80 * ((__int16)v9 + g_MapCellWidth * v31[1]) + g_MissionQueueFrame.localVariables[163] + 56) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x5a04d8*/
        *((_DWORD *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          v12->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a0520*/
          v12[1].Items = (void *)10; /*0x5a0526*/
          v12[1].vtable0 = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[1].Items = v6[1].vtable0; /*0x5a0539*/
        v14 = (int)v6[1].vtable0 - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
          v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a054a*/
          do /*0x5a0650*/
          {
            v16 = *((_DWORD *)v6->Items + v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = HIWORD(v32) + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a057b*/
              LOWORD(v33) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a0580*/
              HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (__int16)v33; /*0x5a0590*/
              if ( v21 > v15 /*0x5a05b9*/
                && (__int16)v33 - v20 < v15
                && v20 - (__int16)v33 < v15
                && v21 <= g_MissionQueueFrame.localVariables[161] )
              {
                v22 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v33 + g_MapCellWidth * v20); /*0x5a05d4*/
                if ( *(_DWORD *)(v22 + 56) == a2 ) /*0x5a05d9*/
                {
                  if ( *(_DWORD *)(v22 + 60) != v30 + 1 ) /*0x5a05e7*/
                  {
                    Capacity = v13->Capacity; /*0x5a05e9*/
                    if ( (int)v13[1].vtable0 < Capacity /*0x5a060e*/
                      || (v13->IsAllocated || !Capacity)
                      && (v24 = (int)v13[1].Items, v24 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v13->vtable0 + 2))(
                           v13,
                           Capacity + v24,
                           0) )
                    {
                      vtable0 = v13[1].vtable0; /*0x5a0615*/
                      Items = v13->Items; /*0x5a0618*/
                      v13[1].vtable0 = (char *)vtable0 + 1; /*0x5a061e*/
                      Items[(_DWORD)vtable0] = v33; /*0x5a0625*/
                    }
                    *(_DWORD *)(v22 + 60) = v30 + 1; /*0x5a0628*/
                    v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a062b*/
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
          (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0663*/
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
    (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a06ae*/
          m;
          m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      *(_DWORD *)(80 * ((__int16)*(_DWORD *)(m + 36) + g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(m + 36))) /*0x5a06d8*/
                + g_MissionQueueFrame.localVariables[163]
                + 60) = 0;
    }
  }
  return 1; /*0x5a06e5*/
}



// ==== 0x005A0700  RandomMap::CellListAlloc  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::CellListAlloc(RandomMap *this, int a2)
{
  VectorClass *v3; // eax
  VectorClass *v4; // ebx
  int v5; // ecx
  int v6; // ebp
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
  int Capacity; // ecx
  int Items; // eax
  void *vtable0; // eax
  _DWORD *v20; // edx
  bool v21; // zf
  VectorClass *v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-4h]

  v3 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a070a*/
  v4 = v3; /*0x5a070f*/
  if ( v3 ) /*0x5a0718*/
  {
    VectorClass::CellConstructor(v3, 0, 0); /*0x5a071e*/
    v4->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a0723*/
    v4[1].Items = (void *)10; /*0x5a0729*/
    v4[1].vtable0 = 0; /*0x5a0730*/
  }
  else
  {
    v4 = 0; /*0x5a0735*/
  }
  v23 = v4; /*0x5a073d*/
  v4[1].Items = (void *)(*(_DWORD *)&this->__pad_4C[308] * *(_DWORD *)&this->__pad_4C[312]); /*0x5a0748*/
  v5 = g_MapCellWidth; /*0x5a074b*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x5a0758*/
    return &v4->vtable0; /*0x5a08c1*/
  v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a075f*/
  v24 = 0; /*0x5a0765*/
  v25 = g_MapCellWidth * g_MapCellWidth; /*0x5a0769*/
  while ( 2 )
  {
    v7 = *(_DWORD *)(v24 + v6); /*0x5a0775*/
    v8 = HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    v9 = v6 ? *(_DWORD *)(80 * ((__int16)v7 + v5 * SHIWORD(v7)) + v6 + 56) : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      v11 = v10 & 7; /*0x5a07c9*/
      v12 = LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]) + v7; /*0x5a07cc*/
      LOWORD(v11) = v8 + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (__int16)v11; /*0x5a07e5*/
      v15 = v13 + (__int16)v11; /*0x5a07e8*/
      if ( v15 <= g_MissionQueueFrame.localVariables[160] ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MissionQueueFrame.localVariables[160] /*0x5a080f*/
        && v14 - v13 < g_MissionQueueFrame.localVariables[160]
        && v15 <= g_MissionQueueFrame.localVariables[161] )
      {
        break; /*0x5a080f*/
      }
      v4 = v23; /*0x5a0849*/
      v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a084d*/
LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0811*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a0819*/
      v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    Capacity = v23->Capacity; /*0x5a0859*/
    if ( (int)v23[1].vtable0 < Capacity ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( v23->IsAllocated || !Capacity ) /*0x5a086c*/
    {
      Items = (int)v23[1].Items; /*0x5a086e*/
      if ( Items > 0 ) /*0x5a0873*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v23->vtable0 + 2))( /*0x5a087e*/
               v23,
               Capacity + Items,
               0) )
        {
LABEL_31:
          vtable0 = v23[1].vtable0; /*0x5a0885*/
          v20 = v23->Items; /*0x5a0888*/
          v23[1].vtable0 = (char *)vtable0 + 1; /*0x5a088e*/
          v20[(_DWORD)vtable0] = v7; /*0x5a0891*/
        }
        v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0894*/
      }
    }
LABEL_33:
    v21 = v25 == 1; /*0x5a089a*/
    v24 += 80; /*0x5a08a6*/
    --v25; /*0x5a08aa*/
    if ( !v21 ) /*0x5a08ae*/
    {
      v5 = g_MapCellWidth; /*0x5a076f*/
      continue; /*0x5a076f*/
    }
    return &v4->vtable0; /*0x5a08b5*/
  }
}



// ==== 0x005A08D0  RandomMap::SpreadArea  this=RandomMap  sig=csp ====
char __thiscall RandomMap::SpreadArea(RandomMap *this, int a2, float a3, int *a4, __int16 *a5, char a6)
{
  double v6; // st7
  int v8; // eax
  int v9; // esi
  void *v10; // eax
  Heap *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int i; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  RandomMap *v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  RandomMap *v25; // ebx
  int v26; // ecx
  RandomMap *v30; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  Heap v34; // edi
  Heap v37; // ecx
  int v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // eax
  __int16 *v42; // ecx
  Heap v43; // eax
  CellStruct *v44; // edi
  int v45; // edi
  Cell *v46; // eax
  char v47; // al
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  Cell *v52; // eax
  RandomMap *v53; // ebx
  __int16 v54; // ax
  RandomMap *v55; // edi
  int v56; // ecx
  int v60; // eax
  int v61; // edx
  RandomMap *v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // edi
  unsigned int v66; // edx
  Heap v67; // edi
  Heap v70; // ecx
  int v71; // eax
  Heap v72; // ecx
  bool v73; // zf
  Heap v74; // eax
  CellStruct *v75; // edi
  Heap v76; // eax
  __int16 *v77; // edi
  __int16 *v78; // ecx
  int v79; // eax
  int v80; // ecx
  int *v81; // eax
  Heap v82; // eax
  __int16 *v83; // edi
  double v85; // [esp+4h] [ebp-60h]
  double v86; // [esp+4h] [ebp-60h]
  char v87; // [esp+1Bh] [ebp-49h]
  CellStruct *v88; // [esp+1Ch] [ebp-48h]
  CellStruct *v89; // [esp+1Ch] [ebp-48h]
  __int16 v90[2]; // [esp+20h] [ebp-44h] BYREF
  int v91; // [esp+24h] [ebp-40h]
  int v92; // [esp+28h] [ebp-3Ch]
  void *Block; // [esp+2Ch] [ebp-38h]
  int v94; // [esp+30h] [ebp-34h]
  RandomMap *p_RandomMap_field_0x8; // [esp+34h] [ebp-30h]
  int v96; // [esp+38h] [ebp-2Ch]
  double v97; // [esp+3Ch] [ebp-28h]
  __int64 v98; // [esp+44h] [ebp-20h]
  double v99; // [esp+4Ch] [ebp-18h] BYREF
  double v100; // [esp+54h] [ebp-10h]
  double v101; // [esp+5Ch] [ebp-8h]

  v8 = *(_DWORD *)&this->__pad_4C[308]; /*0x5a08de*/
  p_RandomMap_field_0x8 = this; /*0x5a08e4*/
  v9 = 2 * *(_DWORD *)&this->__pad_4C[312] * v8; /*0x5a08f4*/
  if ( v9 <= 100 ) /*0x5a08f6*/
    v9 = 100; /*0x5a08f8*/
  v10 = (void *)__2_YAPAXI_Z(8 * v9); /*0x5a0905*/
  if ( v10 ) /*0x5a0911*/
  {
    Block = v10; /*0x5a0914*/
    LODWORD(v98) = v9 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v11 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a0929*/
  if ( v11 ) /*0x5a0930*/
  {
    v12 = 2 * *(_DWORD *)&this->__pad_4C[312] * *(_DWORD *)&this->__pad_4C[308]; /*0x5a093f*/
    if ( v12 <= 100 ) /*0x5a0944*/
      v12 = 100; /*0x5a0946*/
    v11[3] = 0; /*0x5a0952*/
    v11[4] = (Heap)-1; /*0x5a0956*/
    *v11 = 0; /*0x5a095d*/
    v11[1] = (Heap)v12; /*0x5a095f*/
    v13 = __2_YAPAXI_Z(4 * v12 + 4); /*0x5a0962*/
    v14 = (int)v11[1]; /*0x5a0967*/
    v11[2] = (Heap)v13; /*0x5a096a*/
    v15 = 0; /*0x5a0970*/
    if ( v14 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v15; /*0x5a0979*/
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v15 - 4) = 0; /*0x5a097a*/
      }
      while ( v15 <= *(_DWORD *)&v11[1] ); /*0x5a0983*/
    }
  }
  else
  {
    v11 = 0; /*0x5a0987*/
  }
  v16 = a4; /*0x5a0989*/
  v91 = 0; /*0x5a098c*/
  v87 = 1; /*0x5a0990*/
  v100 = 0.0; /*0x5a0995*/
  if ( *a4 ) /*0x5a099d*/
  {
    v100 = 0.0; /*0x5a09b0*/
  }
  else if ( a4[2] != 512 ) /*0x5a09c5*/
  {
    v100 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( a4[1] ) /*0x5a09d7*/
  {
    v100 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( a4[3] != 512 ) /*0x5a09f1*/
  {
    v100 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a19*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v96 = *(_DWORD *)(i + 36); /*0x5a0a1e*/
    *(_DWORD *)(80 * ((__int16)v96 + g_MapCellWidth * SHIWORD(v96)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0a43*/
  }
  v18 = RandomMap::CellListAlloc(p_RandomMap_field_0x8, a2); /*0x5a0a58*/
  v19 = v18[4]; /*0x5a0a5d*/
  *(_DWORD *)v90 = v18; /*0x5a0a60*/
  v88 = (CellStruct *)v19; /*0x5a0a66*/
  v92 = 0; /*0x5a0a6a*/
  if ( v19 > 0 ) /*0x5a0a6e*/
  {
    v20 = (RandomMap *)Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v21 = *v16; /*0x5a0a83*/
      v94 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v90 + 4) + 4 * v92); /*0x5a0a88*/
      v22 = SHIWORD(v94); /*0x5a0a8c*/
      v23 = (__int16)v94; /*0x5a0a91*/
      if ( (__int16)v94 >= v21 ) /*0x5a0a96*/
      {
        if ( (__int16)v94 >= v21 + v16[2] ) /*0x5a0aa3*/
          goto LABEL_48; /*0x5a0aa3*/
        v16 = a4; /*0x5a0aa9*/
        v24 = a4[1]; /*0x5a0aac*/
        if ( SHIWORD(v94) >= v24 ) /*0x5a0ab1*/
          break; /*0x5a0ab1*/
      }
LABEL_49:
      if ( ++v92 >= (int)v88 ) /*0x5a0c28*/
      {
        v18 = *(_DWORD **)v90; /*0x5a0c2e*/
        goto LABEL_51; /*0x5a0c2e*/
      }
    }
    if ( SHIWORD(v94) < v24 + a4[3] ) /*0x5a0abe*/
    {
      *(_DWORD *)v20->__pad_0 = v94; /*0x5a0ac8*/
      v25 = (RandomMap *)(v23 - *a5); /*0x5a0ad2*/
      v26 = v22 - a5[1]; /*0x5a0ad8*/
      p_RandomMap_field_0x8 = v25; /*0x5a0ada*/
      v96 = v26; /*0x5a0ae0*/
      if ( v25 ) /*0x5a0ae4*/
      {
        __asm { fild dword ptr [esp+58h+var_2C] } /*0x5a0aea*/
        __asm
        {
          fidiv [esp+60h+var_30]
          fchs
          fstp [esp+60h+var_60]; double
        }
        Math::ArcTan(v85); /*0x5a0afa*/
        if ( (int)v25 < 0 ) /*0x5a0b04*/
          __asm { fadd ds:dbl_7E44D0 } /*0x5a0b06*/
      }
      else
      {
        __asm { fld ds:dbl_7E2820 } /*0x5a0be9*/
      }
      __asm /*0x5a0b0c*/
      {
        fsub [esp+58h+var_10]
        fabs
        fcom ds:dbl_7E3CC0
        fst qword ptr [esp+58h+var_18]
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x5a0b21*/
      {
        do /*0x5a0b34*/
        {
          __asm /*0x5a0b23*/
          {
            fsub ds:dbl_7E3CC0
            fcom ds:dbl_7E3CC0
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) == 0 ); /*0x5a0b34*/
        __asm { fst qword ptr [esp+58h+var_18] } /*0x5a0b36*/
      }
      __asm /*0x5a0b3a*/
      {
        fcom ds:dbl_7E44D0
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a0b45*/
      {
        __asm /*0x5a0b47*/
        {
          fld ds:dbl_7E3CC0
          fsub st, st(1)
          fstp qword ptr [esp+58h+var_18]
        }
      }
      __asm { fstp st } /*0x5a0b58*/
      v98 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0b5f*/
      __asm { fild [esp+58h+var_20] } /*0x5a0b6b*/
      v30 = v20; /*0x5a0b73*/
      v20 = (RandomMap *)((char *)v20 + 8); /*0x5a0b76*/
      __asm /*0x5a0b79*/
      {
        fmul ds:dbl_7ED898
        fld qword ptr [esp+58h+var_18]
        fmul ds:dbl_7ED798
        fxch st(1)
        fmul ds:dbl_7ED790
      }
      ++v91; /*0x5a0b91*/
      v96 = (int)v30; /*0x5a0b95*/
      p_RandomMap_field_0x8 = v20; /*0x5a0b99*/
      __asm /*0x5a0b9d*/
      {
        faddp st(1), st
        fstp dword ptr [edi-4]
      }
      *(float *)&v20[-1].RandomMap_field_0x20C = _ET1; /*0x5a0b9f*/
      v32 = *(_DWORD *)v11 + 1; /*0x5a0ba7*/
      LODWORD(v97) = *(_DWORD *)&v30->RandomMap_field_0x2[2]; /*0x5a0ba8*/
      v33 = v32 >> 1; /*0x5a0bb1*/
      if ( v32 < *(_DWORD *)&v11[1] ) /*0x5a0bb5*/
      {
        if ( v32 <= 1 ) /*0x5a0bba*/
        {
          v16 = a4; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            v34 = v11[2]; /*0x5a0bbc*/
            _EBX = *(_DWORD *)(*(_DWORD *)&v34 + 4 * v33); /*0x5a0bbf*/
            __asm /*0x5a0bc2*/
            {
              fld dword ptr [ebx+4]
              fcomp dword ptr [esp+58h+var_2C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(_DWORD *)(*(_DWORD *)&v34 + 4 * v32) = _EBX; /*0x5a0bd0*/
            v32 = v33; /*0x5a0bd3*/
            v33 >>= 1; /*0x5a0bd5*/
          }
          while ( v32 > 1 ); /*0x5a0bda*/
          v16 = a4; /*0x5a0bdc*/
          v30 = (RandomMap *)v96; /*0x5a0bdf*/
          v20 = p_RandomMap_field_0x8; /*0x5a0be3*/
        }
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v32) = v30; /*0x5a0bfa*/
        v37 = v11[3]; /*0x5a0bff*/
        ++*(_DWORD *)v11; /*0x5a0c05*/
        if ( (unsigned int)v30 > *(_DWORD *)&v37 ) /*0x5a0c07*/
          v11[3] = (Heap)v30; /*0x5a0c09*/
        if ( (unsigned int)v30 < *(_DWORD *)&v11[4] ) /*0x5a0c0f*/
          v11[4] = (Heap)v30; /*0x5a0c11*/
        goto LABEL_49; /*0x5a0c14*/
      }
    }
LABEL_48:
    v16 = a4; /*0x5a0c16*/
    goto LABEL_49; /*0x5a0c16*/
  }
LABEL_51:
  if ( v18 ) /*0x5a0c36*/
    (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5a0c3e*/
  __asm /*0x5a0c40*/
  {
    fldln2
    fild [esp+58h+var_48]
    fyl2x
    fld ds:dbl_7E1718
    fcomp st(1)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x5a0c55*/
  {
    __asm /*0x5a0c57*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm /*0x5a0c5f*/
  {
    fdivr ds:dbl_7E1718
    fmul [ebp+arg_4]
    fdivr ds:flt_7E2AC8
    fmul ds:flt_7E5168
  }
  LOWORD(v39) = Math::RoundToInt(v6); /*0x5a0c74*/
  v92 = v39; /*0x5a0c79*/
  v40 = v39 / 2; /*0x5a0c82*/
  *(_QWORD *)&v99 = (unsigned int)(v39 / 2 + 1); /*0x5a0c8d*/
  __asm /*0x5a0c91*/
  {
    fild qword ptr [esp+58h+var_18]
    fstp [esp+58h+var_8]
  }
  do /*0x5a0cc0*/
  {
    *(_QWORD *)&v99 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0ca3*/
    __asm /*0x5a0cab*/
    {
      fild qword ptr [esp+58h+var_18]
      fmul [esp+58h+var_8]
      fmul ds:dbl_7ED898
    }
    LOWORD(v41) = Math::RoundToInt(v6); /*0x5a0cb9*/
  }
  while ( v41 > v40 ); /*0x5a0cc0*/
  v92 += v41; /*0x5a0cc8*/
  if ( *v11 ) /*0x5a0ccc*/
  {
    v43 = v11[2]; /*0x5a0cda*/
    v44 = *(CellStruct **)(*(_DWORD *)&v43 + 4); /*0x5a0ce2*/
    *(_DWORD *)(*(_DWORD *)&v43 + 4) = *(_DWORD *)(*(_DWORD *)&v43 + 4 * *(_DWORD *)v11); /*0x5a0ce5*/
    *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a0ced*/
    Heap::SiftDown(v11, 1); /*0x5a0cf7*/
    v89 = v44; /*0x5a0cfc*/
    v42 = (__int16 *)v44; /*0x5a0d00*/
  }
  else
  {
    v42 = 0; /*0x5a0cd2*/
    v89 = 0; /*0x5a0cd4*/
  }
  v94 = 0; /*0x5a0d06*/
  if ( v92 <= 0 ) /*0x5a0d0c*/
    goto LABEL_113; /*0x5a0d0c*/
  while ( v87 && v42 ) /*0x5a0d26*/
  {
    v45 = g_MissionQueueFrame.localVariables[163] + 80 * (*v42 + g_MapCellWidth * v42[1]); /*0x5a0d48*/
    if ( !*(_DWORD *)(v45 + 56) ) /*0x5a0d4a*/
    {
      v46 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x5a0d57*/
      if ( (unsigned __int8)Cell::IsEmpty(v46) ) /*0x5a0d5e*/
      {
        *(_BYTE *)(v45 + 75) = 1; /*0x5a0d6a*/
        *(_DWORD *)(v45 + 56) = a2; /*0x5a0d6e*/
      }
      v42 = (__int16 *)v89; /*0x5a0d71*/
    }
    v47 = 0; /*0x5a0d7d*/
    v96 = 0; /*0x5a0d82*/
    p_RandomMap_field_0x8 = (RandomMap *)((char *)Block + 8 * v91); /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      LODWORD(v97) = *CellStruct::Add((CellStruct *)v42, &v99, (_WORD *)(4 * (v47 & 7) + 9041544)); /*0x5a0dad*/
      *(_DWORD *)v90 = LODWORD(v97); /*0x5a0db1*/
      v48 = SWORD1(v97) + SLOWORD(v97); /*0x5a0dbd*/
      if ( v48 <= g_MissionQueueFrame.localVariables[160] /*0x5a0de6*/
        || SLOWORD(v97) - SWORD1(v97) >= g_MissionQueueFrame.localVariables[160]
        || SWORD1(v97) - SLOWORD(v97) >= g_MissionQueueFrame.localVariables[160]
        || v48 > g_MissionQueueFrame.localVariables[161] )
      {
        goto LABEL_108; /*0x5a0de6*/
      }
      v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0dec*/
      if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5a0df4*/
        goto LABEL_105; /*0x5a0df4*/
      v50 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v97) + g_MapCellWidth * SWORD1(v97)); /*0x5a0e0b*/
      if ( !*(_DWORD *)(v50 + 56) && *(_DWORD *)(v50 + 60) != a2 && SLOWORD(v97) >= *a4 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v97) < *a4 + a4[2] ) /*0x5a0e3a*/
        {
          v51 = a4[1]; /*0x5a0e40*/
          if ( SWORD1(v97) >= v51 && SWORD1(v97) < v51 + a4[3] ) /*0x5a0e52*/
          {
            v52 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v90); /*0x5a0e62*/
            if ( (unsigned __int8)Cell::IsEmpty(v52) ) /*0x5a0e69*/
            {
              v53 = p_RandomMap_field_0x8; /*0x5a0e76*/
              v54 = v90[0]; /*0x5a0e7a*/
              *(_DWORD *)p_RandomMap_field_0x8->__pad_0 = *(_DWORD *)v90; /*0x5a0e81*/
              v56 = v90[1] - a5[1]; /*0x5a0e94*/
              p_RandomMap_field_0x8 = (RandomMap *)(v54 - *a5); /*0x5a0e98*/
              v55 = p_RandomMap_field_0x8; /*0x5a0e92*/
              LODWORD(v97) = v56; /*0x5a0e9c*/
              if ( p_RandomMap_field_0x8 ) /*0x5a0ea0*/
              {
                __asm { fild dword ptr [esp+58h+var_2C+4] } /*0x5a0ea6*/
                __asm
                {
                  fidiv [esp+60h+var_30]
                  fchs
                  fstp [esp+60h+var_60]; double
                }
                Math::ArcTan(v86); /*0x5a0eb6*/
                if ( (int)v55 < 0 ) /*0x5a0ec0*/
                  __asm { fadd ds:dbl_7E44D0 } /*0x5a0ec2*/
              }
              else
              {
                __asm { fld ds:dbl_7E2820 } /*0x5a0fe5*/
              }
              __asm /*0x5a0ec8*/
              {
                fsub [esp+58h+var_10]
                fabs
                fcom ds:dbl_7E3CC0
                fst [esp+58h+var_2C+4]
                fnstsw ax
              }
              if ( (_AX & 0x100) == 0 ) /*0x5a0edd*/
              {
                do /*0x5a0ef0*/
                {
                  __asm /*0x5a0edf*/
                  {
                    fsub ds:dbl_7E3CC0
                    fcom ds:dbl_7E3CC0
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x100) == 0 ); /*0x5a0ef0*/
                __asm { fst [esp+58h+var_2C+4] } /*0x5a0ef2*/
              }
              __asm /*0x5a0ef6*/
              {
                fcom ds:dbl_7E44D0
                fnstsw ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x5a0f01*/
              {
                __asm /*0x5a0f03*/
                {
                  fld ds:dbl_7E3CC0
                  fsub st, st(1)
                  fstp [esp+58h+var_2C+4]
                }
              }
              __asm { fstp st } /*0x5a0f14*/
              *(_QWORD *)&v101 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0f1b*/
              __asm { fild [esp+58h+var_8] } /*0x5a0f27*/
              v60 = v90[1]; /*0x5a0f2b*/
              __asm /*0x5a0f30*/
              {
                fmul ds:dbl_7ED898
                fld [esp+58h+var_2C+4]
                fmul ds:dbl_7ED798
                fxch st(1)
                fmul ds:dbl_7ED790
              }
              v61 = v90[0]; /*0x5a0f48*/
              __asm /*0x5a0f4d*/
              {
                faddp st(1), st
                fstp dword ptr [ebx+4]
              }
              *(float *)&v53->RandomMap_field_0x2[2] = _ET1; /*0x5a0f4f*/
              *(_DWORD *)(80 * (v61 + g_MapCellWidth * v60) + g_MissionQueueFrame.localVariables[163] + 60) = a2; /*0x5a0f6a*/
              v63 = v53; /*0x5a0f73*/
              ++v91; /*0x5a0f75*/
              v64 = *(_DWORD *)v11 + 1; /*0x5a0f81*/
              LODWORD(v98) = *(_DWORD *)&v53->RandomMap_field_0x2[2]; /*0x5a0f82*/
              v65 = (unsigned int)v11[1]; /*0x5a0f86*/
              v66 = v64 >> 1; /*0x5a0f8b*/
              LODWORD(v97) = v53; /*0x5a0f8f*/
              p_RandomMap_field_0x8 = (RandomMap *)&v53->RandomMap_field_0x8; /*0x5a0f93*/
              if ( v64 < v65 ) /*0x5a0f97*/
              {
                if ( v64 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v67 = v11[2]; /*0x5a0fa2*/
                    _EBX = *(_DWORD *)(*(_DWORD *)&v67 + 4 * v66); /*0x5a0fa5*/
                    __asm /*0x5a0fa8*/
                    {
                      fld dword ptr [ebx+4]
                      fcomp dword ptr [esp+58h+var_20]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(_DWORD *)(*(_DWORD *)&v67 + 4 * v64) = _EBX; /*0x5a0fb6*/
                    v64 = v66; /*0x5a0fb9*/
                    v66 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v64 > 1 ); /*0x5a0fc0*/
                  v63 = (RandomMap *)LODWORD(v97); /*0x5a0fc2*/
                }
                *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v64) = v63; /*0x5a0fc9*/
                v70 = v11[3]; /*0x5a0fce*/
                ++*(_DWORD *)v11; /*0x5a0fd4*/
                if ( (unsigned int)v63 > *(_DWORD *)&v70 ) /*0x5a0fd6*/
                  v11[3] = (Heap)v63; /*0x5a0fd8*/
                if ( (unsigned int)v63 < *(_DWORD *)&v11[4] ) /*0x5a0fde*/
                  v11[4] = (Heap)v63; /*0x5a0fe0*/
              }
              goto LABEL_108; /*0x5a0fe3*/
            }
          }
        }
        v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0ff0*/
      }
      if ( v49 ) /*0x5a0ff8*/
      {
        v71 = *(_DWORD *)(80 * (v90[0] + g_MapCellWidth * v90[1]) + v49 + 56); /*0x5a1013*/
        if ( !v71 ) /*0x5a1019*/
          goto LABEL_108; /*0x5a1019*/
      }
      else
      {
LABEL_105:
        v71 = -1; /*0x5a101d*/
      }
      if ( v71 != a2 ) /*0x5a1023*/
        v87 = 0; /*0x5a1025*/
LABEL_108:
      v47 = v96 + 2; /*0x5a102e*/
      v96 += 2; /*0x5a1034*/
      if ( v96 >= 8 ) /*0x5a1038*/
        break; /*0x5a1038*/
      v42 = (__int16 *)v89; /*0x5a0d8c*/
    }
    ++v94; /*0x5a1043*/
    Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a104c*/
    __asm { fmul ds:dbl_7E3D88 } /*0x5a1051*/
    v72 = *v11; /*0x5a1057*/
    v73 = *v11 == 0; /*0x5a1059*/
    __asm /*0x5a105b*/
    {
      fadd [esp+58h+var_10]
      fstp [esp+58h+var_10]
    }
    if ( v73 ) /*0x5a1063*/
    {
      v89 = (CellStruct *)v72; /*0x5a1065*/
    }
    else
    {
      v74 = v11[2]; /*0x5a106b*/
      v75 = *(CellStruct **)(*(_DWORD *)&v74 + 4); /*0x5a1073*/
      *(_DWORD *)(*(_DWORD *)&v74 + 4) = *(_DWORD *)(*(_DWORD *)&v74 + 4 * *(_DWORD *)&v72); /*0x5a1076*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a107e*/
      Heap::SiftDown(v11, 1); /*0x5a108c*/
      v89 = v75; /*0x5a1091*/
    }
    if ( v94 < v92 ) /*0x5a109f*/
    {
      v42 = (__int16 *)v89; /*0x5a0d14*/
      continue; /*0x5a0d14*/
    }
    break;
  }
LABEL_113:
  if ( a6 ) /*0x5a10aa*/
  {
    if ( *v11 ) /*0x5a10b0*/
    {
      v76 = v11[2]; /*0x5a10ba*/
      v77 = *(__int16 **)(*(_DWORD *)&v76 + 4); /*0x5a10c2*/
      *(_DWORD *)(*(_DWORD *)&v76 + 4) = *(_DWORD *)(*(_DWORD *)&v76 + 4 * *(_DWORD *)v11); /*0x5a10c5*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a10cd*/
      Heap::SiftDown(v11, 1); /*0x5a10db*/
      v78 = v77; /*0x5a10e2*/
      if ( v77 ) /*0x5a10e4*/
      {
        while ( v87 ) /*0x5a10ef*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a10f9*/
          {
            v79 = 80 * (*v78 + g_MapCellWidth * v78[1]); /*0x5a110e*/
            v80 = *(_DWORD *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1111*/
            v81 = (int *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1115*/
            if ( !v80 ) /*0x5a111b*/
            {
              *v81 = a2; /*0x5a111d*/
              goto LABEL_123; /*0x5a111f*/
            }
          }
          else
          {
            v80 = -1; /*0x5a1121*/
          }
          if ( v80 != a2 ) /*0x5a1126*/
            v87 = 0; /*0x5a1128*/
LABEL_123:
          if ( !*(_DWORD *)v11 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v82 = v11[2]; /*0x5a1133*/
          v83 = *(__int16 **)(*(_DWORD *)&v82 + 4); /*0x5a113b*/
          *(_DWORD *)(*(_DWORD *)&v82 + 4) = *(_DWORD *)(*(_DWORD *)&v82 + 4 * *(_DWORD *)v11); /*0x5a113e*/
          *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a1148*/
          Heap::SiftDown(v11, 1); /*0x5a1154*/
          v78 = v83; /*0x5a115b*/
          if ( !v83 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  __3_YAXPAX_Z(Block); /*0x5a115f*/
  if ( v11 ) /*0x5a116e*/
    Scalar::Dtor((Scalar *)v11, 1); /*0x5a1174*/
  return v87; /*0x5a117d*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.0 + 1.5 * v9; /*0x5a125c*/
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

  v1 = a1 - g_TerrainBuildConfig; /*0x5a135e*/
  switch ( a1 - g_TerrainBuildConfig ) /*0x5a1374*/
  {
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
        v20 = (unsigned int)Random::State(&unk_ABE890); /*0x5a137d*/
        v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
      }
      while ( v2 > 2 ); /*0x5a13a7*/
      return g_TerrainBuildConfig + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
        v21 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13bd*/
        v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
      }
      while ( v4 > 1 ); /*0x5a13e1*/
      return g_TerrainBuildConfig + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
        v22 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13f8*/
        v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
      }
      while ( v5 > 1 ); /*0x5a141c*/
      return g_TerrainBuildConfig + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
        v23 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1432*/
        v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
      }
      while ( v6 > 2 ); /*0x5a145c*/
      return g_TerrainBuildConfig + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
        v24 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1472*/
        v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
      }
      while ( v7 > 1 ); /*0x5a1496*/
      return g_TerrainBuildConfig + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
        v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14ad*/
        v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
      }
      while ( v8 > 1 ); /*0x5a14d1*/
      return g_TerrainBuildConfig + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
        v26 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14e7*/
        v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
      }
      while ( v9 > 2 ); /*0x5a1511*/
      return g_TerrainBuildConfig + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
        v27 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1527*/
        v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
      }
      while ( v10 > 1 ); /*0x5a154b*/
      return g_TerrainBuildConfig + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
        v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1562*/
        v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
      }
      while ( v11 > 1 ); /*0x5a1586*/
      return g_TerrainBuildConfig + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
        v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a159c*/
        v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
      }
      while ( v12 > 2 ); /*0x5a15c6*/
      return g_TerrainBuildConfig + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
        v30 = (unsigned int)Random::State(&unk_ABE890); /*0x5a15dc*/
        v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
      }
      while ( v13 > 1 ); /*0x5a1600*/
      return g_TerrainBuildConfig + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
        v31 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1617*/
        v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
      }
      while ( v14 > 1 ); /*0x5a163b*/
      return g_TerrainBuildConfig + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
        v32 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1651*/
        v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
      }
      while ( v15 > 2 ); /*0x5a167b*/
      return g_TerrainBuildConfig + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
        v33 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1691*/
        v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
      }
      while ( v16 > 1 ); /*0x5a16b5*/
      return g_TerrainBuildConfig + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
        v34 = (unsigned int)Random::State(&unk_ABE890); /*0x5a16cc*/
        v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
      }
      while ( v17 > 1 ); /*0x5a16f0*/
      return g_TerrainBuildConfig + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return g_TerrainBuildConfig + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return g_TerrainBuildConfig + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      v18 = 2; /*0x5a172c*/
      v19 = 1; /*0x5a1731*/
      goto LABEL_37; /*0x5a1736*/
    case 35: /*0x5a1374*/
      return g_TerrainBuildConfig + 2 * Range_RandomInt(0, 1u) + 34; /*0x5a1754*/
    case 36: /*0x5a1374*/
      v18 = 1; /*0x5a1757*/
      v19 = 0; /*0x5a175c*/
LABEL_37:
      v1 = Range_RandomInt(v19, v18) + 34; /*0x5a175e*/
      return g_TerrainBuildConfig + v1; /*0x5a1763*/
    default:
      return g_TerrainBuildConfig + v1;
  }
}



// ==== 0x005A17F0  MapClass::FindPassableNeighbor  this=MapClass  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(_DWORD *)(i + 56); /*0x5a1819*/
    if ( v2 >= g_TerrainBuildConfig && v2 < g_TerrainBuildConfig + 40 ) /*0x5a182f*/
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
          v7 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((unsigned __int8 *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((unsigned __int8 *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( dword_ABED10 ) /*0x5a18d6*/
            v10 = *((_DWORD *)dword_ABED10 + 20 * v8 + 20 * g_MapCellWidth * v9 + 14); /*0x5a18f2*/
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
          v13 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((unsigned __int8 *)v4 + 282) % v13; /*0x5a1969*/
          LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((unsigned __int8 *)v4 + 282) / v13; /*0x5a1977*/
          HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( dword_ABED10 ) /*0x5a1989*/
            v16 = *((_DWORD *)dword_ABED10 + 20 * v14 + 20 * g_MapCellWidth * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}



// ==== 0x005A19E0  ProcessRandomMapCellAdjacency  this=-  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a19e9*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a19f3*/
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
        v15 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1a85*/
        v6 = Math::RoundToInt((double)v15 * 4.656612874161595e-10); /*0x5a1a9b*/
      }
      while ( v6 > 1 ); /*0x5a1aa3*/
      if ( v6 ) /*0x5a1aa7*/
        goto LABEL_32; /*0x5a1aa7*/
      *((_BYTE *)v3 + 283) -= 4; /*0x5a1ab6*/
      v7 = dword_ABED10; /*0x5a1abc*/
      v8 = dword_ABED10
         ? *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !dword_ABED10 ) /*0x5a1aea*/
        goto LABEL_32; /*0x5a1aea*/
      v9 = v3[18]; /*0x5a1af4*/
      v10 = g_MapCellWidth * v3[19]; /*0x5a1af8*/
    }
    else if ( AdjacencyFlags == 56 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !Cell::IsEmpty(v4) ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        v16 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1b36*/
        v11 = Math::RoundToInt((double)v16 * 4.656612874161595e-10); /*0x5a1b4c*/
      }
      while ( v11 > 1 ); /*0x5a1b54*/
      if ( v11 ) /*0x5a1b58*/
        goto LABEL_32; /*0x5a1b58*/
      *((_BYTE *)v4 + 283) -= 4; /*0x5a1b67*/
      v7 = dword_ABED10; /*0x5a1b6d*/
      v8 = dword_ABED10
         ? *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !dword_ABED10 ) /*0x5a1b9b*/
        goto LABEL_32; /*0x5a1b9b*/
      v9 = v4[18]; /*0x5a1ba5*/
      v10 = g_MapCellWidth * v4[19]; /*0x5a1ba9*/
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
      v7 = dword_ABED10; /*0x5a1c02*/
      v8 = dword_ABED10 ? *((_DWORD *)dword_ABED10 + 20 * v4[18] + 20 * g_MapCellWidth * v4[19] + 14) : -1;
      if ( !dword_ABED10 ) /*0x5a1c30*/
        goto LABEL_32; /*0x5a1c30*/
      v12 = *(__int16 *)(i + 38); /*0x5a1c32*/
      v9 = *(__int16 *)(i + 36); /*0x5a1c36*/
      v10 = g_MapCellWidth * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
LABEL_32:
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1c49*/
  }
  return result; /*0x5a1c60*/
}



// ==== 0x005A1C70  ObjectClass::method_5A1C70  this=ObjectClass  sig=csp ====
int __thiscall sub_5A1C70(ObjectClass *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  RandomMap *v7; // edi
  int j; // edi
  int v9; // esi
  int v10; // eax
  bool v11; // al
  int result; // eax
  int v13; // esi
  int v14; // edi
  RandomMap *v15; // eax
  __int16 v16[2]; // [esp+8h] [ebp-8h] BYREF
  ObjectClass *v17; // [esp+Ch] [ebp-4h]

  v17 = this; /*0x5a1c7c*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a1c80*/
  {
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x5a1c88*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1c8d*/
    {
      v2 = 0; /*0x5a1c8f*/
      do /*0x5a1cac*/
      {
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x5a1c9a*/
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x5a1ca4*/
        v2 += 80; /*0x5a1ca8*/
        --v1; /*0x5a1cab*/
      }
      while ( v1 ); /*0x5a1cac*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x5a1cb8*/
  {
    v4 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x5a1ce5*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1cef*/
  {
    v5 = 0; /*0x5a1cf1*/
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      *(_DWORD *)v16 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x5a1d08*/
      v7 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x5a1d11*/
      if ( *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x5a1d3b*/
        && (*(_WORD *)(v5 + g_MissionQueueFrame.localVariables[163])
         || *(_WORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 2))
        && ((unsigned __int8)Cell::IsGroundTypeRange((Cell *)v7) || (unsigned __int8)Cell::IsShore((Cell *)v7)) )
      {
        RandomMap::GenerateTerrain(v7); /*0x5a1d46*/
      }
      v5 += 80; /*0x5a1d4b*/
      --v6; /*0x5a1d4e*/
    }
    while ( v6 ); /*0x5a1d4f*/
  }
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x5a1d5a*/
  {
    v9 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x5a1d67*/
    if ( *(_BYTE *)(v9 + 20) ) /*0x5a1d6a*/
    {
      v10 = v17->ambientSoundController[0]; /*0x5a1d75*/
      v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * j),
        (*(_DWORD *)(v9 + 12) > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain((RandomMap *)v9); /*0x5a1daa*/
    }
  }
  result = g_MapCellWidth * g_MapCellWidth; /*0x5a1dbf*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1dc4*/
  {
    v13 = 0; /*0x5a1dc6*/
    v14 = g_MapCellWidth * g_MapCellWidth; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = v13 + g_MissionQueueFrame.localVariables[163]; /*0x5a1dd0*/
      if ( *(_DWORD *)(v13 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x5a1de2*/
        && (*(_WORD *)result || *(_WORD *)(result + 2)) )
      {
        v15 = (RandomMap *)CellCoord::To_CellObj( /*0x5a1def*/
                             (CellCoord *)&stru_87F5F0.__pad_58[416],
                             (__int16 *)(v13 + g_MissionQueueFrame.localVariables[163]));
        result = (int)RandomMap::GenerateTerrain(v15); /*0x5a1df6*/
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
    if ( v10 > dword_ABED04 && v9 - v8 < dword_ABED04 && v8 - v9 < dword_ABED04 && v10 <= dword_ABED08 )
    {
      v11 = dword_ABED10 ? *((_DWORD *)dword_ABED10 + 20 * v9 + 20 * g_MapCellWidth * v8 + 14) : -1;
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
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x5a1f6a*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a1f74*/
  for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a1f85*/
  {
    if ( !v0 ) /*0x5a1f89*/
      break; /*0x5a1f89*/
    v0 = Cliff::ProcessTransitions(i, -1); /*0x5a1f9d*/
  }
  return v0; /*0x5a1faa*/
}



// ==== 0x005A1FB0  ObjectClass::SpreadMapSeedTerrainFromWaypoints  this=ObjectClass  sig=csp ====
char __thiscall SpreadMapSeedTerrainFromWaypoints(ObjectClass *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // ebp
  Heap *v5; // eax
  Heap *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int i; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  Heap v17; // edi
  unsigned int v20; // eax
  Heap v21; // eax
  CellStruct *v22; // edi
  CellStruct *v23; // ecx
  char v24; // al
  float *v25; // edi
  int v26; // edx
  Cell *v27; // eax
  __int16 v28; // ax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  Heap v33; // ebp
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  Heap v37; // ebx
  Heap v39; // eax
  CellStruct *v40; // eax
  double v42; // [esp+0h] [ebp-58h]
  __int16 v43[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v44; // [esp+20h] [ebp-38h]
  int v45; // [esp+24h] [ebp-34h]
  CellStruct *v46; // [esp+28h] [ebp-30h]
  int v47; // [esp+2Ch] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-28h]
  _DWORD *v49; // [esp+34h] [ebp-24h]
  int v50; // [esp+38h] [ebp-20h]
  int v51; // [esp+3Ch] [ebp-1Ch]
  int v52; // [esp+40h] [ebp-18h]
  int v53; // [esp+44h] [ebp-14h]
  int v54; // [esp+48h] [ebp-10h]
  ObjectClass *v55; // [esp+4Ch] [ebp-Ch]
  char v56[4]; // [esp+50h] [ebp-8h] BYREF
  int v57; // [esp+54h] [ebp-4h] BYREF

  v1 = this->customSound_controller[0]; /*0x5a1fb9*/
  v2 = 0; /*0x5a1fbe*/
  v55 = this; /*0x5a1fc4*/
  if ( v1 > 0 ) /*0x5a1fc8*/
  {
    do /*0x5a238f*/
    {
      v3 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v56, v2); /*0x5a1fdf*/
      v47 = v3; /*0x5a1fe6*/
      v4 = (_DWORD *)__2_YAPAXI_Z(0x1900u); /*0x5a1fef*/
      v49 = v4; /*0x5a1ff3*/
      v5 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a1ff7*/
      v6 = v5; /*0x5a1ffc*/
      if ( v5 ) /*0x5a2003*/
      {
        v5[3] = 0; /*0x5a200a*/
        v5[4] = (Heap)-1; /*0x5a2011*/
        *v5 = 0; /*0x5a2018*/
        v5[1] = (Heap)800; /*0x5a201e*/
        v7 = __2_YAPAXI_Z(0xC84u); /*0x5a2025*/
        v8 = (int)v6[1]; /*0x5a202a*/
        v6[2] = (Heap)v7; /*0x5a202d*/
        v9 = 0; /*0x5a2033*/
        if ( v8 >= 0 ) /*0x5a2037*/
        {
          do /*0x5a204a*/
          {
            ++v9; /*0x5a203c*/
            *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v9 - 4) = 0; /*0x5a203d*/
          }
          while ( v9 <= *(_DWORD *)&v6[1] ); /*0x5a204a*/
        }
      }
      else
      {
        v6 = 0; /*0x5a204e*/
      }
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a2055*/
      for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a2066*/
            i;
            i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        v50 = *(_DWORD *)(i + 36); /*0x5a206b*/
        *(_DWORD *)(80 * ((__int16)v50 + g_MapCellWidth * SHIWORD(v50)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a208c*/
      }
      v11 = v2 + 1; /*0x5a20a6*/
      v12 = 0; /*0x5a20a7*/
      v13 = *(_DWORD *)v6 < 0; /*0x5a20a9*/
      v45 = 0; /*0x5a20ab*/
      v50 = v11; /*0x5a20af*/
      if ( !v13 ) /*0x5a20b3*/
      {
        do /*0x5a20c1*/
        {
          ++v12; /*0x5a20b8*/
          *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v12 - 4) = 0; /*0x5a20b9*/
        }
        while ( v12 <= *(_DWORD *)v6 ); /*0x5a20c1*/
      }
      v14 = SHIWORD(v47); /*0x5a20c3*/
      *v6 = 0; /*0x5a20c8*/
      *v4 = v3; /*0x5a20ca*/
      v4[1] = 0; /*0x5a20cd*/
      v53 = (__int16)v3; /*0x5a20dc*/
      v44 = 1; /*0x5a20e6*/
      *(_DWORD *)(80 * ((__int16)v3 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 60) = v11; /*0x5a20f4*/
      v15 = *(_DWORD *)v6 + 1; /*0x5a20fd*/
      v51 = v4[1]; /*0x5a2100*/
      v16 = v15 >> 1; /*0x5a2107*/
      if ( v15 < *(_DWORD *)&v6[1] ) /*0x5a210b*/
      {
        for ( ; v15 > 1; v16 >>= 1 ) /*0x5a2110*/
        {
          v17 = v6[2]; /*0x5a2112*/
          _EBX = *(_DWORD *)(*(_DWORD *)&v17 + 4 * v16); /*0x5a2115*/
          __asm /*0x5a2118*/
          {
            fld dword ptr [ebx+4]
            fcomp [esp+50h+var_1C]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5a2124*/
            break; /*0x5a2124*/
          *(_DWORD *)(*(_DWORD *)&v17 + 4 * v15) = _EBX; /*0x5a2126*/
          v15 = v16; /*0x5a2129*/
        }
        *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * v15) = v4; /*0x5a2135*/
        v20 = (unsigned int)v6[3]; /*0x5a213a*/
        ++*(_DWORD *)v6; /*0x5a2140*/
        if ( (unsigned int)v4 > v20 ) /*0x5a2142*/
          v6[3] = (Heap)v4; /*0x5a2144*/
        if ( (unsigned int)v4 < *(_DWORD *)&v6[4] ) /*0x5a214a*/
          v6[4] = (Heap)v4; /*0x5a214c*/
      }
      if ( *v6 ) /*0x5a214f*/
      {
        v21 = v6[2]; /*0x5a2159*/
        v22 = *(CellStruct **)(*(_DWORD *)&v21 + 4); /*0x5a2161*/
        *(_DWORD *)(*(_DWORD *)&v21 + 4) = *(_DWORD *)(*(_DWORD *)&v21 + 4 * *(_DWORD *)v6); /*0x5a2164*/
        *(_DWORD *)(*(_DWORD *)&v6[2] + 4 * (*(_DWORD *)v6)--) = 0; /*0x5a216e*/
        Heap::SiftDown(v6, 1); /*0x5a217a*/
        v46 = v22; /*0x5a2181*/
        if ( v22 ) /*0x5a2185*/
        {
          do /*0x5a2368*/
          {
            if ( v45 >= 400 ) /*0x5a2193*/
              break; /*0x5a2193*/
            v23 = v46; /*0x5a2199*/
            *(_BYTE *)(80 * (SLOWORD(v46->field_0) + g_MapCellWidth * SHIWORD(v46->field_0)) /*0x5a21b9*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 69) = 1;
            v24 = 0; /*0x5a21c2*/
            v48 = 0; /*0x5a21c4*/
            v25 = (float *)&v4[2 * v44]; /*0x5a21c8*/
            while ( 1 ) /*0x5a21ef*/
            {
              v52 = *CellStruct::Add(v23, &v57, (_WORD *)(4 * (v24 & 7) + 9041544)); /*0x5a21ef*/
              *(_DWORD *)v43 = v52; /*0x5a21f3*/
              v26 = SHIWORD(v52) + (__int16)v52; /*0x5a21ff*/
              if ( v26 > g_MissionQueueFrame.localVariables[160] /*0x5a2243*/
                && (__int16)v52 - SHIWORD(v52) < g_MissionQueueFrame.localVariables[160]
                && SHIWORD(v52) - (__int16)v52 < g_MissionQueueFrame.localVariables[160]
                && v26 <= g_MissionQueueFrame.localVariables[161]
                && !*(_DWORD *)(80 * ((__int16)v52 + g_MapCellWidth * SHIWORD(v52))
                              + g_MissionQueueFrame.localVariables[163]
                              + 60) )
              {
                v27 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x5a2259*/
                if ( (unsigned __int8)Cell::IsEmpty(v27) ) /*0x5a2260*/
                {
                  v28 = v43[0]; /*0x5a226d*/
                  v29 = v53; /*0x5a2271*/
                  v30 = SHIWORD(v47); /*0x5a2275*/
                  *v25 = *(float *)v43; /*0x5a227a*/
                  v52 = (v28 - v29) * (v28 - v29) + (v43[1] - v30) * (v43[1] - v30); /*0x5a2297*/
                  __asm /*0x5a229b*/
                  {
                    fild [esp+58h+var_18]
                    fstp [esp+58h+var_58]; double
                  }
                  Math::Sqrt(v42); /*0x5a22a2*/
                  v31 = v43[1]; /*0x5a22a7*/
                  __asm { fstp dword ptr [edi+4] } /*0x5a22ac*/
                  v25[1] = _ET1; /*0x5a22ac*/
                  v33 = (Heap)v25; /*0x5a22c7*/
                  v25 += 2; /*0x5a22d2*/
                  *(_DWORD *)(80 * (v43[0] + g_MapCellWidth * v31) + g_MissionQueueFrame.localVariables[163] + 60) = v50; /*0x5a22d5*/
                  v34 = *(_DWORD *)(*(_DWORD *)&v33 + 4); /*0x5a22df*/
                  v35 = *(_DWORD *)v6 + 1; /*0x5a22e3*/
                  ++v44; /*0x5a22e4*/
                  v54 = v34; /*0x5a22ea*/
                  v36 = v35 >> 1; /*0x5a22f1*/
                  if ( v35 < *(_DWORD *)&v6[1] ) /*0x5a22f5*/
                  {
                    for ( ; v35 > 1; v36 >>= 1 ) /*0x5a22fa*/
                    {
                      v37 = v6[2]; /*0x5a22fc*/
                      _EAX = *(_DWORD *)(*(_DWORD *)&v37 + 4 * v36); /*0x5a22ff*/
                      __asm /*0x5a2302*/
                      {
                        fld dword ptr [eax+4]
                        fcomp [esp+50h+var_10]
                        fnstsw ax
                      }
                      if ( (_EAX & 0x4100) != 0 ) /*0x5a230e*/
                        break; /*0x5a230e*/
                      *(_DWORD *)(*(_DWORD *)&v37 + 4 * v35) = *(_DWORD *)(*(_DWORD *)&v37 + 4 * v36); /*0x5a2313*/
                      v35 = v36; /*0x5a2316*/
                    }
                    *(Heap *)(*(_DWORD *)&v6[2] + 4 * v35) = v33; /*0x5a2322*/
                    v39 = v6[3]; /*0x5a2327*/
                    ++*(_DWORD *)v6; /*0x5a232d*/
                    if ( *(_DWORD *)&v33 > *(unsigned int *)&v39 ) /*0x5a232f*/
                      v6[3] = v33; /*0x5a2331*/
                    if ( *(unsigned int *)&v33 < *(_DWORD *)&v6[4] ) /*0x5a2337*/
                      v6[4] = v33; /*0x5a2339*/
                  }
                }
              }
              v24 = ++v48; /*0x5a2340*/
              if ( v48 >= 8 ) /*0x5a2348*/
                break; /*0x5a2348*/
              v23 = v46; /*0x5a21ce*/
            }
            ++v45; /*0x5a2355*/
            v40 = (CellStruct *)PriorityQueue::Pop((PriorityQueue *)v6); /*0x5a2359*/
            v4 = v49; /*0x5a235e*/
            v46 = v40; /*0x5a2362*/
          }
          while ( v40 ); /*0x5a2368*/
        }
      }
      __3_YAXPAX_Z(v4); /*0x5a236f*/
      if ( v6 ) /*0x5a2379*/
        Scalar::Dtor((Scalar *)v6, 1); /*0x5a237f*/
      v2 = v50; /*0x5a2388*/
    }
    while ( v50 < v55->customSound_controller[0] ); /*0x5a238f*/
  }
  return 1; /*0x5a2395*/
}



// ==== 0x005A23A0  RandomMap::PlaceRandomMapTiberium  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceRandomMapTiberium(RandomMap *this)
{
  double v1; // st7
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  __int16 v8; // bp
  int v9; // esi
  int v10; // ecx
  __int16 v11; // bx
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  int v15; // esi
  int v16; // ebp
  int v17; // eax
  int v19; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // ebx
  int v24; // esi
  int v27; // eax
  int *Waypoint_Location; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  int v32; // ebx
  int v33; // ebp
  int v34; // eax
  int v35; // eax
  int v37; // eax
  double *v38; // ecx
  int v40; // ebx
  int v43; // esi
  int v45; // ebp
  int v46; // eax
  int v48; // ebp
  int v49; // eax
  __int16 *v50; // eax
  int v51; // [esp-4h] [ebp-9Ch]
  double v52; // [esp+0h] [ebp-98h]
  double v53; // [esp+0h] [ebp-98h]
  bool v54; // [esp+1Fh] [ebp-79h]
  int v55; // [esp+20h] [ebp-78h]
  RandomMap *v56; // [esp+24h] [ebp-74h]
  int v57; // [esp+28h] [ebp-70h]
  int v58; // [esp+28h] [ebp-70h]
  int v59; // [esp+28h] [ebp-70h]
  int v61; // [esp+34h] [ebp-64h]
  int v62; // [esp+34h] [ebp-64h]
  char v63; // [esp+38h] [ebp-60h]
  int v64; // [esp+3Ch] [ebp-5Ch]
  int v66; // [esp+40h] [ebp-58h]
  int v67; // [esp+40h] [ebp-58h]
  int v68; // [esp+40h] [ebp-58h]
  int v69; // [esp+40h] [ebp-58h]
  int v70; // [esp+40h] [ebp-58h]
  char v72[4]; // [esp+4Ch] [ebp-4Ch] BYREF
  char v73[4]; // [esp+50h] [ebp-48h] BYREF
  char v74[4]; // [esp+54h] [ebp-44h] BYREF
  double v75; // [esp+58h] [ebp-40h]
  double v76; // [esp+60h] [ebp-38h]
  double v77; // [esp+68h] [ebp-30h]
  __int64 v78; // [esp+70h] [ebp-28h]
  __int64 v79; // [esp+78h] [ebp-20h]
  void **v80; // [esp+80h] [ebp-18h] BYREF
  void *Block; // [esp+84h] [ebp-14h]
  int v82; // [esp+88h] [ebp-10h]
  char v83; // [esp+8Dh] [ebp-Bh]
  int v84; // [esp+90h] [ebp-8h]
  int v85; // [esp+94h] [ebp-4h]

  _ESI = this; /*0x5a23af*/
  v3 = 0; /*0x5a23b1*/
  v4 = this->RandomMap_field_0x3C[0]; /*0x5a23b4*/
  v5 = this->RandomMap_field_0x40[0]; /*0x5a23b7*/
  v56 = _ESI; /*0x5a23bd*/
  v55 = 0; /*0x5a23c1*/
  switch ( v4 ) /*0x5a23c7*/
  {
    case 0: /*0x5a23c7*/
      v54 = v5 == 3; /*0x5a23d1*/
      break; /*0x5a23d6*/
    case 1: /*0x5a23c7*/
    case 3: /*0x5a23c7*/
    case 4: /*0x5a23c7*/
      v54 = v5 != 3; /*0x5a23db*/
      break; /*0x5a23e0*/
    case 2: /*0x5a23c7*/
      v54 = 1; /*0x5a23e2*/
      break; /*0x5a23e7*/
    default:
      v54 = 0; /*0x5a23e9*/
      break; /*0x5a23e9*/
  }
  result = 0; /*0x5a23f4*/
  v64 = 0; /*0x5a23f8*/
  if ( g_MissionQueueFrame.briefing[342] > 0 ) /*0x5a23fc*/
  {
    while ( 1 ) /*0x5a240c*/
    {
      _EDI = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * result); /*0x5a240c*/
      if ( *_EDI ) /*0x5a240f*/
      {
        v61 = -1; /*0x5a241b*/
        if ( v54 ) /*0x5a2425*/
        {
          v8 = 0; /*0x5a242e*/
          if ( (int)_EDI[8] <= 0 ) /*0x5a2433*/
          {
            v13 = _EDI[14] - 1; /*0x5a2484*/
            v78 = (unsigned int)_EDI[14]; /*0x5a2488*/
            __asm /*0x5a248c*/
            {
              fild [esp+90h+var_28]
              fstp qword ptr [esp+90h+var_58]
            }
            do /*0x5a24bb*/
            {
              v79 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a249e*/
              __asm /*0x5a24a6*/
              {
                fild [esp+90h+var_20]
                fmul qword ptr [esp+90h+var_58]
                fmul ds:dbl_7ED898
              }
              LOWORD(v12) = Math::RoundToInt(v1); /*0x5a24b4*/
            }
            while ( v12 > v13 ); /*0x5a24bb*/
            v57 = *(_DWORD *)(_EDI[11] + 4 * v12); /*0x5a24c3*/
            LOWORD(v12) = HIWORD(v57); /*0x5a24c7*/
            v11 = v57; /*0x5a24cc*/
          }
          else
          {
            v9 = 0; /*0x5a2435*/
            do /*0x5a2467*/
            {
              LODWORD(v75) = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v72, v9 + v55); /*0x5a2455*/
              v8 += WORD1(v75); /*0x5a2459*/
              v3 += LOWORD(v75); /*0x5a245e*/
              ++v9; /*0x5a2464*/
            }
            while ( v9 < _EDI[8] ); /*0x5a2467*/
            v10 = _EDI[8]; /*0x5a2469*/
            v11 = v3 / v10; /*0x5a2472*/
            v12 = v8 / v10; /*0x5a2479*/
          }
          v14 = *_EDI; /*0x5a24cf*/
          v15 = 0; /*0x5a24d1*/
          v58 = 500000; /*0x5a24d3*/
          if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a24e0*/
          {
            v16 = (__int16)v12; /*0x5a24e5*/
            do /*0x5a2546*/
            {
              v17 = *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * v15); /*0x5a24ee*/
              v66 = ((__int16)v17 - v11) * ((__int16)v17 - v11) + (SHIWORD(v17) - v16) * (SHIWORD(v17) - v16); /*0x5a250d*/
              __asm /*0x5a2511*/
              {
                fild [esp+98h+var_58]
                fstp [esp+98h+var_98]; double
              }
              Math::Sqrt(v52); /*0x5a2518*/
              __asm /*0x5a251d*/
              {
                fild dword ptr [esp+98h+var_70]
                fld st(1)
              }
              __asm
              {
                fcompp
                fnstsw ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x5a252d*/
              {
                LOWORD(v19) = Math::RoundToInt(v1); /*0x5a252f*/
                v58 = v19; /*0x5a2534*/
                v61 = v15; /*0x5a2538*/
              }
              else
              {
                __asm { fstp st } /*0x5a253e*/
              }
              v14 = *_EDI; /*0x5a2540*/
              ++v15; /*0x5a2542*/
            }
            while ( v15 < *(_DWORD *)(*_EDI + 16) ); /*0x5a2546*/
          }
          _ESI = v56; /*0x5a2548*/
        }
        __asm { fild dword ptr [esi+54h] } /*0x5a2558*/
        v59 = *(_DWORD *)&_ESI[1].__pad_4C[96]; /*0x5a255d*/
        v67 = *(_DWORD *)&_ESI[1].__pad_4C[100] - v59; /*0x5a2561*/
        __asm /*0x5a2565*/
        {
          fmul ds:dbl_7E3808
          fild [esp+90h+var_58]
          fmulp st(1), st
          fiadd dword ptr [esp+90h+var_70]
        }
        LOWORD(_EAX) = Math::RoundToInt(v1); /*0x5a2575*/
        __asm /*0x5a257a*/
        {
          fild dword ptr [edi+20h]
          fld ds:dbl_7E1738
        }
        v68 = _EAX; /*0x5a2583*/
        __asm /*0x5a2587*/
        {
          fcomp st(1)
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x5a258e*/
        {
          __asm /*0x5a2590*/
          {
            fstp st
            fld ds:dbl_7E1738
          }
        }
        __asm /*0x5a2598*/
        {
          fild [esp+90h+var_58]
          fmul st, st(1)
        }
        LOWORD(v21) = Math::RoundToInt(v1); /*0x5a259e*/
        __asm { fstp st } /*0x5a25a5*/
        v22 = *(_DWORD *)(*_EDI + 16); /*0x5a25a7*/
        if ( v22 && v21 ) /*0x5a25b4*/
        {
          v23 = 0; /*0x5a25bd*/
          v24 = 0; /*0x5a25bf*/
          v69 = v21 / v22; /*0x5a25c3*/
          if ( v22 > 0 ) /*0x5a25c7*/
          {
            do /*0x5a2638*/
            {
              do /*0x5a25f9*/
              {
                do /*0x5a25e8*/
                {
                  Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a25ce*/
                  __asm /*0x5a25d3*/
                  {
                    fmul ds:dbl_7E4F50
                    fst [esp+90h+var_70]
                    fcomp ds:dbl_7EDA88
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x100) != 0 ); /*0x5a25e8*/
                __asm /*0x5a25ea*/
                {
                  fld [esp+90h+var_70]
                  fcomp ds:dbl_7E2AC0
                  fnstsw ax
                }
              }
              while ( (_AX & 0x4100) == 0 ); /*0x5a25f9*/
              __asm /*0x5a25fb*/
              {
                fild [esp+90h+var_58]
                fadd [esp+90h+var_70]
              }
              LOWORD(v27) = Math::RoundToInt(v1); /*0x5a2603*/
              if ( v27 >= 0 ) /*0x5a260a*/
                Terrain::PlaceTiberiumTrees( /*0x5a262d*/
                  (__int16 *)(*(_DWORD *)(*_EDI + 4) + 4 * v24),
                  v27,
                  v24 + v55 + 1,
                  v24 == v61);
              ++v24; /*0x5a2634*/
            }
            while ( v24 < *(_DWORD *)(*_EDI + 16) ); /*0x5a2638*/
          }
          RandomMap::Constructor_1((RandomMap *)&v80, 0, 0); /*0x5a2643*/
          v80 = &DynamicVectorClass<double>::`vftable'; /*0x5a2648*/
          v85 = 10; /*0x5a2650*/
          v84 = 0; /*0x5a265b*/
          v62 = 0; /*0x5a2667*/
          if ( (int)_EDI[8] > 0 ) /*0x5a266b*/
          {
            do /*0x5a2779*/
            {
              v77 = 0.0; /*0x5a2679*/
              Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v73, v23 + v55); /*0x5a2694*/
              v29 = *_EDI; /*0x5a2699*/
              v30 = *Waypoint_Location; /*0x5a269b*/
              v31 = 0; /*0x5a269d*/
              if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a26a8*/
              {
                v32 = SHIWORD(v30); /*0x5a26aa*/
                v33 = (__int16)v30; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  v34 = *(_DWORD *)(*(_DWORD *)(v29 + 4) + 4 * v31); /*0x5a26b8*/
                  v70 = ((__int16)v34 - v33) * ((__int16)v34 - v33) + (SHIWORD(v34) - v32) * (SHIWORD(v34) - v32); /*0x5a26d7*/
                  __asm /*0x5a26db*/
                  {
                    fild [esp+98h+var_58]
                    fstp [esp+98h+var_98]; double
                  }
                  Math::Sqrt(v53); /*0x5a26e2*/
                  v29 = *_EDI; /*0x5a26e7*/
                  __asm { fadd [esp+90h+var_30] } /*0x5a26ec*/
                  v35 = *(_DWORD *)(*_EDI + 16); /*0x5a26f0*/
                  ++v31; /*0x5a26f3*/
                  __asm { fstp [esp+90h+var_30] } /*0x5a26f6*/
                }
                while ( v31 < v35 ); /*0x5a26fa*/
                v23 = v62; /*0x5a26fc*/
              }
              _EDX = *_EDI; /*0x5a2700*/
              __asm { fild dword ptr [edx+10h] } /*0x5a2710*/
              __asm
              {
                fdivr [esp+90h+var_30]
                fstp qword ptr [esp+90h+var_58]
              }
              if ( v84 < v82 /*0x5a274c*/
                || (v83 || !v82)
                && v85 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v80[2])(&v80, v85 + v82, 0) )
              {
                __asm { fld qword ptr [esp+90h+var_58] } /*0x5a275a*/
                v37 = v84++; /*0x5a275e*/
                v38 = (double *)Block; /*0x5a2768*/
                __asm { fstp qword ptr [ecx+eax*8] } /*0x5a276c*/
                v38[v37] = _RT1; /*0x5a276c*/
              }
              v62 = ++v23; /*0x5a2775*/
            }
            while ( v23 < _EDI[8] ); /*0x5a2779*/
          }
          v40 = _EDI[8]; /*0x5a277f*/
          _EDX = Block; /*0x5a2782*/
          v76 = 9999999.0; /*0x5a2788*/
          if ( v40 > 0 ) /*0x5a2798*/
          {
            _ECX = Block; /*0x5a279a*/
            v43 = v40; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              __asm /*0x5a279e*/
              {
                fld qword ptr [ecx]
                fcomp [esp+90h+var_38]
                fnstsw ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x5a27a9*/
              {
                v45 = _ECX[1]; /*0x5a27ad*/
                LODWORD(v76) = *_ECX; /*0x5a27b0*/
                HIDWORD(v76) = v45; /*0x5a27b4*/
              }
              _ECX += 2; /*0x5a27b8*/
              --v43; /*0x5a27bb*/
            }
            while ( v43 ); /*0x5a27bc*/
          }
          v63 = 0; /*0x5a27da*/
          if ( v56->RandomMap_field_0x40[0] == 3 ) /*0x5a27c6*/
          {
            v46 = v56->RandomMap_field_0x3C[0]; /*0x5a27c8*/
            if ( v46 == 1 || v46 == 3 || v46 == 4 ) /*0x5a27d8*/
              v63 = 1; /*0x5a27c6*/
          }
          _ESI = 0; /*0x5a27e6*/
          if ( v40 > 0 ) /*0x5a27ea*/
          {
            v48 = v55; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              __asm /*0x5a27f4*/
              {
                fld qword ptr [edx+esi*8]
                fsub [esp+90h+var_38]
                fmul ds:dbl_7ED7B0
              }
              LOWORD(v49) = Math::RoundToInt(v1); /*0x5a2801*/
              v51 = v49 + 500; /*0x5a2816*/
              v50 = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v74, v48); /*0x5a281d*/
              Terrain::PlaceTiberiumTrees(v50, v51, v48 + 1, v63); /*0x5a2827*/
              _EDX = Block; /*0x5a282f*/
              ++_ESI; /*0x5a2833*/
              ++v48; /*0x5a2834*/
            }
            while ( _ESI < _EDI[8] ); /*0x5a2837*/
          }
          v55 += _EDI[8]; /*0x5a2846*/
          v80 = &VectorClass<double>::`vftable'; /*0x5a284a*/
          if ( _EDX ) /*0x5a2852*/
          {
            if ( v83 ) /*0x5a285d*/
            {
              __3_YAXPAX_Z(_EDX); /*0x5a2860*/
              Block = 0; /*0x5a2868*/
            }
          }
          v82 = 0; /*0x5a286c*/
          _ESI = v56; /*0x5a2873*/
          v83 = 0; /*0x5a2877*/
        }
      }
      result = ++v64; /*0x5a2889*/
      if ( v64 >= g_MissionQueueFrame.briefing[342] ) /*0x5a2890*/
        break; /*0x5a2890*/
      v3 = 0; /*0x5a2404*/
    }
  }
  return result; /*0x5a2896*/
}



// ==== 0x005A28C0  Terrain::PlaceTiberiumTrees  this=Terrain  sig=csp ====
void __stdcall Tiberium_PlaceTreeAtCell(__int16 *a1, int a2, int a3, char a4)
{
  __int16 *v4; // ebx
  int v5; // edi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // sf
  int i; // eax
  int j; // eax
  char *v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // eax
  __int16 *v23; // ebx
  int v24; // edx
  _DWORD *v25; // ecx
  int v26; // eax
  int k; // eax
  unsigned int v28; // eax
  void **v29; // edi
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int8 v32; // al
  float *v33; // edi
  int v34; // ecx
  __int16 v35; // ax
  _DWORD *v36; // ebx
  _DWORD *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  float *v41; // ebx
  float v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  __int16 *v47; // edi
  char v48; // [esp+1Bh] [ebp-6Dh]
  __int16 *v49; // [esp+1Ch] [ebp-6Ch]
  _DWORD *v50; // [esp+20h] [ebp-68h] BYREF
  void *Block; // [esp+24h] [ebp-64h]
  int v52; // [esp+28h] [ebp-60h] BYREF
  int v53; // [esp+2Ch] [ebp-5Ch]
  int v54; // [esp+30h] [ebp-58h]
  int v55; // [esp+34h] [ebp-54h]
  int v56; // [esp+38h] [ebp-50h]
  _DWORD *v57; // [esp+3Ch] [ebp-4Ch]
  int v58; // [esp+40h] [ebp-48h]
  float v59; // [esp+44h] [ebp-44h]
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
  v6 = __2_YAPAXI_Z(80 * a2); /*0x5a28e2*/
  if ( v6 ) /*0x5a28ec*/
  {
    Block = v6; /*0x5a28f1*/
    LODWORD(v62) = v5 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a2901*/
  v8 = v7; /*0x5a2906*/
  if ( v7 ) /*0x5a290d*/
  {
    v7[3] = 0; /*0x5a2916*/
    v7[4] = -1; /*0x5a291a*/
    *v7 = 0; /*0x5a2921*/
    v7[1] = v5; /*0x5a2923*/
    v9 = __2_YAPAXI_Z(40 * a2 + 4); /*0x5a2926*/
    v10 = v8[1]; /*0x5a292b*/
    v8[2] = (int)v9; /*0x5a292e*/
    v11 = 0; /*0x5a2934*/
    if ( v10 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v11; /*0x5a293d*/
        *(_DWORD *)(v8[2] + 4 * v11 - 4) = 0; /*0x5a293e*/
      }
      while ( v11 <= v8[1] ); /*0x5a2947*/
    }
  }
  else
  {
    v8 = 0; /*0x5a294b*/
  }
  v48 = 0; /*0x5a2957*/
  v52 = *(_DWORD *)a1; /*0x5a295e*/
  v12 = 0; /*0x5a2965*/
  v54 = 0; /*0x5a296a*/
  v60 = a4 != 0 ? 27 : 102;
  v13 = *v8 < 0; /*0x5a2974*/
  v55 = 0; /*0x5a2976*/
  if ( !v13 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v12; /*0x5a297f*/
      *(_DWORD *)(v8[2] + 4 * v12 - 4) = 0; /*0x5a2980*/
    }
    while ( v12 <= *v8 ); /*0x5a2988*/
  }
  *v8 = 0; /*0x5a298d*/
  v49 = 0; /*0x5a2991*/
  if ( a2 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( v55 < 10 ) /*0x5a29a6*/
  {
    if ( v4 ) /*0x5a29b0*/
    {
      v16 = (char *)Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *v8; *(_DWORD *)(v8[2] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *v8 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext(&dword_87F7E8); j; j = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a29e4*/
      {
        v58 = *(_DWORD *)(j + 36); /*0x5a29e9*/
        *((_DWORD *)dword_ABED10 + 20 * (__int16)v58 + 20 * g_MapCellWidth * SHIWORD(v58) + 15) = 0; /*0x5a2a0a*/
      }
      v16 = (char *)Block; /*0x5a2a1f*/
      v53 = 1; /*0x5a2a25*/
      *(_DWORD *)Block = *(_DWORD *)a1; /*0x5a2a2f*/
      *((_DWORD *)v16 + 1) = 0; /*0x5a2a31*/
      *((_DWORD *)dword_ABED10 + 20 * *a1 + 20 * g_MapCellWidth * a1[1] + 15) = a3; /*0x5a2a56*/
      v17 = *v8 + 1; /*0x5a2a5f*/
      v59 = *((float *)v16 + 1); /*0x5a2a62*/
      v18 = v17 >> 1; /*0x5a2a69*/
      if ( v17 < v8[1] ) /*0x5a2a6d*/
      {
        if ( v17 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            v19 = v8[2]; /*0x5a2a74*/
            v20 = *(_DWORD *)(v19 + 4 * v18); /*0x5a2a77*/
            if ( *(float *)(v20 + 4) <= (double)v59 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(_DWORD *)(v19 + 4 * v17) = v20; /*0x5a2a88*/
            v17 = v18; /*0x5a2a8b*/
            v18 >>= 1; /*0x5a2a8d*/
          }
          while ( v17 > 1 ); /*0x5a2a92*/
          v16 = (char *)Block; /*0x5a2a94*/
        }
        *(_DWORD *)(v8[2] + 4 * v17) = v16; /*0x5a2a9b*/
        v21 = v8[3]; /*0x5a2aa0*/
        ++*v8; /*0x5a2aa6*/
        if ( (unsigned int)v16 > v21 ) /*0x5a2aa8*/
          v8[3] = (int)v16; /*0x5a2aaa*/
        if ( (unsigned int)v16 < v8[4] ) /*0x5a2ab0*/
          v8[4] = (int)v16; /*0x5a2ab2*/
      }
      if ( *v8 ) /*0x5a2ab5*/
      {
        v22 = v8[2]; /*0x5a2ac1*/
        v23 = *(__int16 **)(v22 + 4); /*0x5a2ac9*/
        *(_DWORD *)(v22 + 4) = *(_DWORD *)(v22 + 4 * *v8); /*0x5a2acc*/
        *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown(v8, 1); /*0x5a2ae2*/
        v49 = v23; /*0x5a2ae7*/
      }
      else
      {
        v49 = 0; /*0x5a2abb*/
      }
      v4 = v49; /*0x5a2af2*/
      v24 = *(_DWORD *)a1; /*0x5a2af7*/
      v48 = 0; /*0x5a2af9*/
      ++v55; /*0x5a2afe*/
      v52 = v24; /*0x5a2b02*/
    }
    v25 = CellCoord::To_CellObj(&dword_87F7E8, v4); /*0x5a2b17*/
    v26 = *v4 + g_MapCellWidth * v4[1]; /*0x5a2b27*/
    v50 = v25; /*0x5a2b2f*/
    if ( *((_BYTE *)dword_ABED10 + 80 * v26 + 69) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v48 ) /*0x5a2b4a*/
    {
      v48 = 1; /*0x5a2b52*/
      v52 = *(_DWORD *)v4; /*0x5a2b57*/
      for ( k = 0; k <= *v8; *(_DWORD *)(v8[2] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *v8 = 0; /*0x5a2b78*/
      v53 = 0; /*0x5a2b80*/
      if ( !a4 ) /*0x5a2b88*/
      {
        do /*0x5a2bbc*/
        {
          v63 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2b98*/
          v28 = Math::RoundToInt((double)v63 * 6.984919311242392e-10 + 1.0); /*0x5a2bb4*/
        }
        while ( v28 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, "TIBTRE0%d", (int)v28 % 10); /*0x5a2bd1*/
        v29 = (void **)__2_YAPAXI_Z(0xE0u); /*0x5a2be0*/
        if ( v29 ) /*0x5a2be7*/
        {
          v30 = Terrain::LookupByName(Buffer); /*0x5a2bed*/
          TerrainClass::Construct(v29, *((void **)dword_A8E31C + v30), (__int16 *)&v52); /*0x5a2c05*/
        }
        v16 = (char *)Block; /*0x5a2c0a*/
        v25 = v50; /*0x5a2c0e*/
      }
    }
    if ( v25[17] == -1 ) /*0x5a2c16*/
    {
      do /*0x5a2c40*/
      {
        v64 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2c22*/
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
    v33 = (float *)&v16[8 * v53]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      v34 = v56 & 7; /*0x5a2c7c*/
      v35 = v4[1] + HIWORD(dword_89F688[v34]); /*0x5a2c95*/
      LOWORD(v57) = *v4 + LOWORD(dword_89F688[v34]); /*0x5a2c99*/
      HIWORD(v57) = v35; /*0x5a2ca2*/
      v50 = v57; /*0x5a2cab*/
      if ( !LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v50, 1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v36 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x5a2cd1*/
      v58 = (int)v36; /*0x5a2cd5*/
      if ( Cell::IsEmpty(v36) ) /*0x5a2cd9*/
      {
        if ( v36[17] == -1 ) /*0x5a2cea*/
        {
          v37 = v50; /*0x5a2cf8*/
          if ( *((_DWORD *)dword_ABED10 + 20 * (__int16)v50 + 20 * g_MapCellWidth * SHIWORD(v50) + 15) != a3 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v36 = (_DWORD *)v58; /*0x5a2d16*/
        }
        if ( *((_BYTE *)v36 + 286) < 0xBu && BuildingClass::FindByCellHash(v36) != -1 ) /*0x5a2d31*/
        {
          v37 = v50; /*0x5a2d37*/
LABEL_58:
          v38 = SHIWORD(v50); /*0x5a2d3b*/
          *(_DWORD *)v33 = v37; /*0x5a2d40*/
          v58 = ((__int16)v52 - (__int16)v37) * ((__int16)v52 - (__int16)v37) /*0x5a2d62*/
              + (SHIWORD(v52) - v38) * (SHIWORD(v52) - v38);
          v62 = Math::Sqrt((double)v58); /*0x5a2d72*/
          v65 = (unsigned int)Random::State(&unk_ABE890); /*0x5a2d83*/
          v39 = SHIWORD(v50); /*0x5a2d93*/
          v40 = (__int16)v50; /*0x5a2d9e*/
          v41 = v33; /*0x5a2da9*/
          v33 += 2; /*0x5a2dab*/
          v58 = (int)v41; /*0x5a2dae*/
          *(v33 - 1) = (double)v65 * 5.0 * 2.328306437080797e-10 + v62; /*0x5a2db6*/
          *((_DWORD *)dword_ABED10 + 20 * v40 + 20 * g_MapCellWidth * v39 + 15) = a3; /*0x5a2dd1*/
          v42 = v41[1]; /*0x5a2dd9*/
          ++v53; /*0x5a2ddd*/
          v43 = *v8 + 1; /*0x5a2de3*/
          v61 = v42; /*0x5a2de4*/
          v44 = v43 >> 1; /*0x5a2ded*/
          if ( v43 < v8[1] ) /*0x5a2df1*/
          {
            for ( ; v43 > 1; v44 >>= 1 ) /*0x5a2df6*/
            {
              LODWORD(v62) = *(_DWORD *)(v8[2] + 4 * v44); /*0x5a2dfe*/
              if ( *(float *)(LODWORD(v62) + 4) <= (double)v61 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(_DWORD *)(v8[2] + 4 * v43) = LODWORD(v62); /*0x5a2e17*/
              v41 = (float *)v58; /*0x5a2e1a*/
              v43 = v44; /*0x5a2e1e*/
            }
            *(_DWORD *)(v8[2] + 4 * v43) = v41; /*0x5a2e2a*/
            v45 = v8[3]; /*0x5a2e2f*/
            ++*v8; /*0x5a2e35*/
            if ( (unsigned int)v41 > v45 ) /*0x5a2e37*/
              v8[3] = (int)v41; /*0x5a2e39*/
            if ( (unsigned int)v41 < v8[4] ) /*0x5a2e3f*/
              v8[4] = (int)v41; /*0x5a2e41*/
          }
        }
      }
      v4 = v49; /*0x5a2e44*/
LABEL_67:
      ++v56; /*0x5a2e48*/
    }
    while ( v56 < 8 ); /*0x5a2e54*/
    if ( *v8 ) /*0x5a2e5a*/
    {
      v46 = v8[2]; /*0x5a2e66*/
      v47 = *(__int16 **)(v46 + 4); /*0x5a2e6e*/
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v46 + 4 * *v8); /*0x5a2e71*/
      *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2e79*/
      Heap::SiftDown(v8, 1); /*0x5a2e87*/
      v49 = v47; /*0x5a2e8c*/
    }
    else
    {
      v49 = 0; /*0x5a2e60*/
    }
    if ( v54 < a2 ) /*0x5a2e99*/
    {
      v4 = v49; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
LABEL_72:
  __3_YAXPAX_Z(Block); /*0x5a2e9f*/
  if ( v8 ) /*0x5a2eae*/
  {
    __3_YAXPAX_Z((void *)v8[2]); /*0x5a2eb4*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a2f3f*/
}



// ==== 0x005A2F50  ObjectClass::SmoothTerrainMap  this=ObjectClass  sig=csp ====
void __thiscall SmoothTerrainMap(ObjectClass *this)
{
  double v1; // st7
  int v2; // ebx
  int v5; // esi
  __int16 v7; // cx
  __int16 v8; // ax
  int v9; // ebp
  int v12; // edx
  int v15; // ecx
  int v16; // edi
  bool v39; // zf
  int v42; // eax
  int v44; // eax
  __int16 v46; // [esp+8h] [ebp-78h]
  int v49; // [esp+14h] [ebp-6Ch]
  int v50; // [esp+18h] [ebp-68h]
  int v51; // [esp+1Ch] [ebp-64h]
  int v52; // [esp+1Ch] [ebp-64h]
  int v53; // [esp+1Ch] [ebp-64h]
  int v54; // [esp+20h] [ebp-60h]
  double v55; // [esp+28h] [ebp-58h]
  __int64 v56; // [esp+30h] [ebp-50h]
  double v59; // [esp+40h] [ebp-40h]
  __int64 v60; // [esp+48h] [ebp-38h]
  double v61; // [esp+50h] [ebp-30h]
  double v62; // [esp+58h] [ebp-28h]
  double v63; // [esp+60h] [ebp-20h]
  __int64 v65; // [esp+68h] [ebp-18h]

  __asm { fild dword ptr [ecx+44h] } /*0x5a2f59*/
  __asm { fld st }
  v2 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f67*/
  __asm /*0x5a2f6a*/
  {
    fmul ds:dbl_7EDAA8
    fadd ds:dbl_7E3860
    fstp [esp+80h+var_28]
    fld st
    fmul ds:dbl_7EDAA0
  }
  v51 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f84*/
  __asm /*0x5a2f88*/
  {
    fstp [esp+88h+var_38]
    fmul ds:dbl_7E44E8
    fstp [esp+88h+var_8]
    fld [esp+88h+var_38]
    fcomp ds:dbl_7ED7C8
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x5a2fa8*/
    return; /*0x5a2fa8*/
  _EDI = 0; /*0x5a2fae*/
  if ( v2 <= 0 ) /*0x5a2fb2*/
    return; /*0x5a2fb2*/
  v5 = 0; /*0x5a2fb8*/
  v50 = g_MapCellWidth * g_MapCellWidth; /*0x5a2fba*/
  v49 = 0; /*0x5a2fbe*/
  do /*0x5a3383*/
  {
    _ESI = (double *)(g_MissionQueueFrame.localVariables[163] + v5); /*0x5a2fc7*/
    v54 = *(_DWORD *)_ESI; /*0x5a2fcb*/
    if ( !*(_DWORD *)_ESI ) /*0x5a2fd6*/
      goto LABEL_49; /*0x5a2fd6*/
    v7 = *(_DWORD *)_ESI - 1; /*0x5a2fe1*/
    v46 = HIWORD(v54) - 1; /*0x5a2fe3*/
    *((_DWORD *)_ESI + 4) = 0; /*0x5a2fe7*/
    v8 = HIWORD(v54) - 1; /*0x5a2fed*/
    *((_DWORD *)_ESI + 5) = 0; /*0x5a2ff0*/
    v9 = (__int16)(HIWORD(v54) - 1) + v7; /*0x5a2ff9*/
    v59 = 0.0; /*0x5a2ffc*/
    v55 = 0.0; /*0x5a300e*/
    if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x5a3034*/
      && v7 - v8 < g_MissionQueueFrame.localVariables[160]
      && v8 - v7 < g_MissionQueueFrame.localVariables[160]
      && v9 <= g_MissionQueueFrame.localVariables[161] )
    {
      _EDX = g_MissionQueueFrame.localVariables[163]; /*0x5a3047*/
      _EAX = 80 * (v7 + g_MapCellWidth * v46); /*0x5a3050*/
      __asm /*0x5a3053*/
      {
        fld qword ptr [eax+edx+8]
        fstp [esp+88h+var_40]
      }
    }
    v12 = SHIWORD(v54) + v7; /*0x5a3063*/
    if ( v12 <= g_MissionQueueFrame.localVariables[160] /*0x5a3080*/
      || v7 - SHIWORD(v54) >= g_MissionQueueFrame.localVariables[160]
      || SHIWORD(v54) - v7 >= g_MissionQueueFrame.localVariables[160]
      || v12 > g_MissionQueueFrame.localVariables[161] )
    {
      *((_DWORD *)_ESI + 2) = *((_DWORD *)_ESI + 2); /*0x5a30c2*/
      v15 = *((_DWORD *)_ESI + 3); /*0x5a30c5*/
      *((_DWORD *)_ESI + 4) = v60; /*0x5a30cc*/
      *((_DWORD *)_ESI + 3) = v15; /*0x5a30cf*/
      *((_DWORD *)_ESI + 5) = HIDWORD(v60); /*0x5a30d2*/
    }
    else
    {
      __asm { fld qword ptr [esi+8] } /*0x5a3089*/
      _EAX = g_MissionQueueFrame.localVariables[163] + 80 * (v7 + g_MapCellWidth * SHIWORD(v54)); /*0x5a309a*/
      __asm /*0x5a309c*/
      {
        fadd qword ptr [eax+8]
        fstp qword ptr [esi+8]
      }
      _ESI[1] = _RT1; /*0x5a309f*/
      *((_DWORD *)_ESI + 4) = *(_DWORD *)(_EAX + 16); /*0x5a30a5*/
      *((_DWORD *)_ESI + 5) = *(_DWORD *)(_EAX + 20); /*0x5a30ab*/
      __asm /*0x5a30ae*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fstp [esp+88h+var_58]
      }
    }
    v16 = v46 + (__int16)v54; /*0x5a30e5*/
    if ( v16 <= g_MissionQueueFrame.localVariables[160] /*0x5a3102*/
      || (__int16)v54 - v46 >= g_MissionQueueFrame.localVariables[160]
      || v46 - (__int16)v54 >= g_MissionQueueFrame.localVariables[160]
      || v16 > g_MissionQueueFrame.localVariables[161] )
    {
      __asm { fld [esp+88h+var_38] } /*0x5a313e*/
      __asm { fadd qword ptr [esi+10h] }
      *((_DWORD *)_ESI + 2) = *((_DWORD *)_ESI + 2); /*0x5a3148*/
      *((_DWORD *)_ESI + 3) = *((_DWORD *)_ESI + 3); /*0x5a314e*/
      __asm { fstp qword ptr [esi+10h] } /*0x5a3151*/
      _ESI[2] = _RT1; /*0x5a3151*/
    }
    else
    {
      _EAX = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v54 + g_MapCellWidth * v46); /*0x5a3119*/
      __asm /*0x5a311b*/
      {
        fld qword ptr [eax+8]
        fadd qword ptr [esi+8]
        fstp qword ptr [esi+8]
      }
      _ESI[1] = _RT1; /*0x5a3121*/
      __asm /*0x5a3124*/
      {
        fld qword ptr [eax+10h]
        fadd qword ptr [esi+10h]
        fstp qword ptr [esi+10h]
      }
      _ESI[2] = _RT1; /*0x5a312a*/
      __asm /*0x5a312d*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fadd [esp+88h+var_58]
        fstp [esp+88h+var_58]
      }
    }
    __asm /*0x5a3154*/
    {
      fld qword ptr [esi+8]
      fmul ds:dbl_7E1738
      fst qword ptr [esi+8]
    }
    _ESI[1] = _RT1; /*0x5a315d*/
    __asm /*0x5a3160*/
    {
      fld qword ptr [esi+10h]
      fmul ds:dbl_7E1738
      fstp qword ptr [esi+10h]
    }
    _ESI[2] = _RT1; /*0x5a3169*/
    __asm /*0x5a316c*/
    {
      fld [esp+88h+var_58]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5a317b*/
    {
      __asm /*0x5a318f*/
      {
        fld [esp+88h+var_58]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a319e*/
      {
        __asm /*0x5a31a0*/
        {
          fld [esp+88h+var_28]
          fchs
          fstp [esp+88h+var_58]
        }
      }
    }
    else
    {
      v55 = v62; /*0x5a3185*/
    }
    if ( *((_BYTE *)_ESI + 69) ) /*0x5a31aa*/
    {
      __asm /*0x5a31b1*/
      {
        fcom ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a31bc*/
      {
        __asm /*0x5a31be*/
        {
          fstp st
          fld ds:dbl_7E2800
        }
      }
      __asm { fstp qword ptr [esi+8] } /*0x5a31c6*/
      _ESI[1] = _RT1; /*0x5a31c6*/
      *((_DWORD *)_ESI + 4) = 1202590843; /*0x5a31c9*/
      *((_DWORD *)_ESI + 5) = 1063549665; /*0x5a31d0*/
    }
    else
    {
      __asm { fstp st } /*0x5a31d9*/
    }
    __asm /*0x5a31db*/
    {
      fld qword ptr [esi+10h]
      fchs
      fstp [esp+88h+var_48]
      fld [esp+88h+var_8]
      fsub qword ptr [esi+10h]
    }
    v63 = 0.0; /*0x5a31fd*/
    v61 = 0.025; /*0x5a320d*/
    __asm /*0x5a3211*/
    {
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7ED7C8
      fchs
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a3226*/
      goto LABEL_33; /*0x5a3226*/
    __asm /*0x5a3228*/
    {
      fld ds:dbl_7ED7C8
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a3237*/
    {
LABEL_33:
      __asm /*0x5a3239*/
      {
        fld qword ptr [esp+88h+var_78]
        fsub [esp+88h+var_48]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_30]
        fadd [esp+88h+var_48]
        fstp [esp+88h+var_20]
      }
    }
    do /*0x5a3281*/
    {
      do /*0x5a3272*/
      {
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3258*/
        __asm /*0x5a325d*/
        {
          fmul [esp+88h+var_30]
          fadd [esp+88h+var_20]
          fst [esp+88h+var_18]
          fcomp [esp+88h+var_48]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a3272*/
      __asm /*0x5a3274*/
      {
        fld [esp+88h+var_18]
        fcomp qword ptr [esp+88h+var_78]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a3281*/
    __asm /*0x5a3283*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+10h]
      fst [esp+88h+var_18]
      fstp qword ptr [esi+10h]
    }
    _ESI[2] = _RT1; /*0x5a328e*/
    __asm /*0x5a3291*/
    {
      fld ds:dbl_7EDA98
      fsub qword ptr [esi+8]
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7E1708
      fsub qword ptr [esi+8]
      fstp [esp+88h+var_48]
      fld [esp+88h+var_58]
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a32b8*/
    {
      __asm { fld qword ptr [esp+88h+var_78] } /*0x5a32ba*/
    }
    else
    {
      __asm /*0x5a32c0*/
      {
        fld [esp+88h+var_58]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a32cd*/
        __asm { fld [esp+88h+var_58] } /*0x5a32d5*/
      else
        __asm { fld [esp+88h+var_48] } /*0x5a32cf*/
    }
    __asm { fst [esp+88h+var_10] } /*0x5a32e1*/
    v56 = v65; /*0x5a32e5*/
    __asm /*0x5a32ed*/
    {
      fld st
      fsub [esp+88h+var_50]
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a32fc*/
    {
      __asm { fstp st } /*0x5a3313*/
LABEL_45:
      __asm /*0x5a3315*/
      {
        fld [esp+88h+var_48]
        fsub qword ptr [esp+88h+var_78]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_50]
        fadd qword ptr [esp+88h+var_78]
        fstp [esp+88h+var_10]
      }
      goto LABEL_46; /*0x5a332b*/
    }
    __asm /*0x5a32fe*/
    {
      fld [esp+88h+var_50]
      fadd st, st(1)
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x100) != 0 ) /*0x5a330f*/
      goto LABEL_45; /*0x5a330f*/
    do /*0x5a335d*/
    {
      do /*0x5a334e*/
      {
LABEL_46:
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a332f*/
        __asm /*0x5a3339*/
        {
          fmul [esp+88h+var_50]
          fadd [esp+88h+var_10]
          fst [esp+88h+var_18]
          fcomp qword ptr [esp+88h+var_78]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a334e*/
      __asm /*0x5a3350*/
      {
        fld [esp+88h+var_18]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a335d*/
    __asm /*0x5a335f*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+8]
    }
    v2 = v51; /*0x5a3366*/
    _EDI = 0; /*0x5a336a*/
    __asm { fstp qword ptr [esi+8] } /*0x5a336c*/
    _ESI[1] = _RT1; /*0x5a336c*/
LABEL_49:
    v5 = v49 + 80; /*0x5a336f*/
    v39 = v50 == 1; /*0x5a337a*/
    v49 += 80; /*0x5a337b*/
    --v50; /*0x5a337f*/
  }
  while ( !v39 ); /*0x5a3383*/
  if ( v2 > 0 ) /*0x5a338b*/
  {
    while ( 1 ) /*0x5a338d*/
    {
      _EAX = g_MissionQueueFrame.localVariables[163]; /*0x5a338d*/
      __asm /*0x5a3392*/
      {
        fld qword ptr [edi+eax+8]
        fcomp ds:dbl_7E2800
      }
      _ESI = (double *)(_EDI + g_MissionQueueFrame.localVariables[163] + 8); /*0x5a339c*/
      __asm /*0x5a33a0*/
      {
        fld qword ptr [esi]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x5a33a7*/
        break; /*0x5a33a7*/
      __asm /*0x5a33be*/
      {
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a33c9*/
      {
        __asm /*0x5a33cb*/
        {
          fld qword ptr [esi]
          fadd ds:dbl_7E1738
        }
        LOWORD(v44) = Math::RoundToInt(v1); /*0x5a33d3*/
        v53 = v44; /*0x5a33d8*/
        __asm { fild [esp+88h+var_64] } /*0x5a33dc*/
        goto LABEL_55; /*0x5a33dc*/
      }
LABEL_56:
      _EDI += 80; /*0x5a33e2*/
      if ( !--v2 ) /*0x5a33e6*/
        return; /*0x5a33e6*/
    }
    __asm { fsub ds:dbl_7E1738 } /*0x5a33a9*/
    LOWORD(v42) = Math::RoundToInt(v1); /*0x5a33af*/
    v52 = v42; /*0x5a33b4*/
    __asm { fild [esp+88h+var_64] } /*0x5a33b8*/
LABEL_55:
    __asm { fstp qword ptr [esi] } /*0x5a33e0*/
    *_ESI = _RT1; /*0x5a33e0*/
    goto LABEL_56; /*0x5a33e0*/
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a33f9*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a3403*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x5a340c*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      v2 = dword_ABED04; /*0x5a3424*/
      v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        v4 = v3 & 7; /*0x5a3431*/
        v16 = i[9]; /*0x5a3434*/
        v5 = LOWORD(dword_89F688[v4]) + v16; /*0x5a3438*/
        LOWORD(v4) = HIWORD(dword_89F688[v4]); /*0x5a3447*/
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = HIWORD(v16) + v4; /*0x5a3455*/
        v16 = v17; /*0x5a345e*/
        v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= dword_ABED08 ) /*0x5a3483*/
        {
          v7 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a348f*/
          if ( Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            v8 = 80 * ((__int16)v16 + g_MapCellWidth * SHIWORD(v16)); /*0x5a34cb*/
            *(_DWORD *)((char *)dword_ABED10 + v8 + 8) = 0; /*0x5a34ce*/
            *(_DWORD *)((char *)dword_ABED10 + v8 + 12) = 1071644672; /*0x5a34dc*/
            *((_BYTE *)dword_ABED10 + 80 * (__int16)v16 + 80 * g_MapCellWidth * SHIWORD(v16) + 69) = 1; /*0x5a3503*/
            goto LABEL_24; /*0x5a3508*/
          }
          v2 = dword_ABED04; /*0x5a349f*/
        }
        if ( ++v3 >= 8 ) /*0x5a34a9*/
          goto LABEL_24; /*0x5a34a9*/
      }
    }
    if ( CellLand::IsBuildable((int)i) ) /*0x5a350f*/
    {
      v9 = dword_ABED04; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        v11 = j & 7; /*0x5a3529*/
        v16 = i[9]; /*0x5a352c*/
        v12 = HIWORD(v16) + HIWORD(dword_89F688[v11]); /*0x5a3543*/
        LOWORD(v18) = v16 + LOWORD(dword_89F688[v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        v16 = v18; /*0x5a3559*/
        v13 = v12; /*0x5a3560*/
        v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= dword_ABED08 ) /*0x5a357e*/
        {
          v15 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a358a*/
          if ( Cell::IsEmpty(v15) ) /*0x5a3591*/
          {
            *((_BYTE *)dword_ABED10 + 80 * (__int16)v16 + 80 * g_MapCellWidth * SHIWORD(v16) + 69) = 1; /*0x5a35ca*/
            break; /*0x5a35ca*/
          }
          v9 = dword_ABED04; /*0x5a359a*/
        }
      }
    }
LABEL_24:
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/
}



// ==== 0x005A35F0  ObjectClass::GenerateTerrainHeightMap  this=ObjectClass  sig=csp ====
int __thiscall GenerateTerrainHeightMap(ObjectClass *this)
{
  int v2; // esi
  int v3; // esi
  ObjectClass *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // esi
  int v13; // edi
  int result; // eax
  char v15; // al
  char v16; // bl
  int v17; // ebp
  _WORD *v18; // esi
  int v19; // eax
  __int16 v20; // cx
  _WORD *v21; // esi
  int v22; // ebp
  __int16 v23; // dx
  _BYTE *v24; // eax
  char v25; // dl
  ObjectClass *v26; // [esp+0h] [ebp-48h]
  ObjectClass *v27; // [esp+0h] [ebp-48h]
  char v28; // [esp+13h] [ebp-35h]
  int v29; // [esp+14h] [ebp-34h]
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  int v32; // [esp+18h] [ebp-30h]
  int _6B4100; // [esp+1Ch] [ebp-2Ch]
  int v34; // [esp+1Ch] [ebp-2Ch]
  __int16 v35[4]; // [esp+20h] [ebp-28h] BYREF
  _DWORD v36[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v37[4]; // [esp+38h] [ebp-10h]

  GenerateTerrainHeightMapInternal(); /*0x5a35f9*/
  SmoothTerrainMap(this); /*0x5a3600*/
  InitSlaveManagerGrid(v26); /*0x5a3605*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v2 = 0; /*0x5a361a*/
    v31 = g_MapCellWidth * g_MapCellWidth; /*0x5a361c*/
    v29 = 0; /*0x5a3620*/
    do
    {
      v3 = g_MissionQueueFrame.localVariables[163] + v2; /*0x5a3629*/
      if ( *(_WORD *)v3 || *(_WORD *)(v3 + 2) )
      {
        v4 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v3); /*0x5a3643*/
        *(double *)v35 = (double)SHIBYTE(v4[1].health) + *(double *)(v3 + 8); /*0x5a3659*/
        _6B4100 = Map_Get_6B4100(v4); /*0x5a3662*/
        LOWORD(v5) = Math::RoundToInt(*(double *)v35 - (double)_6B4100); /*0x5a366e*/
        v6 = v5; /*0x5a3673*/
        v7 = abs32(v5); /*0x5a3678*/
        v8 = v6 >= 0 ? 1 : -1;
        if ( v7 > 0 ) /*0x5a368a*/
        {
          v9 = v7; /*0x5a368c*/
          do /*0x5a36a5*/
          {
            v10 = Map_Helper_6B4240((int)v4, v8); /*0x5a3692*/
            ComputeTerrainFlowField(v8, 0, *(_DWORD *)v3, v10); /*0x5a369f*/
            --v9; /*0x5a36a4*/
          }
          while ( v9 ); /*0x5a36a5*/
        }
      }
      v2 = v29 + 80; /*0x5a36af*/
      v11 = v31 == 1; /*0x5a36b2*/
      v29 += 80; /*0x5a36b3*/
      --v31; /*0x5a36b7*/
    }
    while ( !v11 );
  }
  ProcessSlaveManagerTerrain(v27); /*0x5a36c1*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a36cb*/
  v12 = 0; /*0x5a36da*/
  v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a36dc*/
  v36[0] = 0; /*0x5a36f1*/
  result = 65537; /*0x5a370d*/
  v36[1] = 1; /*0x5a3711*/
  v36[2] = 65537; /*0x5a3725*/
  v36[3] = 0x10000; /*0x5a3729*/
  v37[0] = 11; /*0x5a372d*/
  v37[1] = 12; /*0x5a3735*/
  v37[2] = 9; /*0x5a373d*/
  v37[3] = 10; /*0x5a3745*/
  if ( v13 ) /*0x5a374d*/
  {
    while ( 1 ) /*0x5a375a*/
    {
      v15 = *(_BYTE *)(v13 + 284); /*0x5a375a*/
      v16 = 0; /*0x5a3760*/
      v28 = 1; /*0x5a3764*/
      if ( v15 == 5 ) /*0x5a3769*/
        break; /*0x5a3769*/
      if ( v15 == 11 ) /*0x5a37c9*/
      {
        v16 = 1; /*0x5a37cf*/
        do /*0x5a3823*/
        {
          v20 = HIWORD(v36[v12]); /*0x5a37d4*/
          *(_DWORD *)v35 = *(_DWORD *)(v13 + 36); /*0x5a37d9*/
          LOWORD(v30) = LOWORD(v36[v12]) + v35[0]; /*0x5a37e7*/
          HIWORD(v30) = v35[1] + v20; /*0x5a37f0*/
          *(_DWORD *)v35 = v30; /*0x5a37ff*/
          if ( *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35) + 284) != v37[v12] ) /*0x5a3816*/
            v28 = 0; /*0x5a3818*/
          ++v12; /*0x5a381d*/
        }
        while ( v12 < 4 ); /*0x5a3823*/
        goto LABEL_21; /*0x5a3823*/
      }
LABEL_24:
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3893*/
      v13 = result; /*0x5a389d*/
      v12 = 0; /*0x5a389f*/
      if ( !result ) /*0x5a38a3*/
        return result; /*0x5a38a3*/
    }
    v17 = 0; /*0x5a376b*/
    v18 = v36; /*0x5a376d*/
    do /*0x5a37c3*/
    {
      v19 = *(_DWORD *)(v13 + 36); /*0x5a3771*/
      LOWORD(v32) = v19 + *v18; /*0x5a3787*/
      HIWORD(v32) = HIWORD(v19) + v18[1]; /*0x5a3790*/
      *(_DWORD *)v35 = v32; /*0x5a379f*/
      if ( *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35) + 284) != v17 + 5 ) /*0x5a37b5*/
        v28 = 0; /*0x5a37b7*/
      ++v17; /*0x5a37bc*/
      v18 += 2; /*0x5a37bd*/
    }
    while ( v17 < 4 ); /*0x5a37c3*/
LABEL_21:
    if ( v28 ) /*0x5a382b*/
    {
      v21 = v36; /*0x5a382d*/
      v22 = 4; /*0x5a3831*/
      do /*0x5a3891*/
      {
        v23 = v21[1]; /*0x5a3839*/
        *(_DWORD *)v35 = *(_DWORD *)(v13 + 36); /*0x5a383d*/
        LOWORD(v34) = *v21 + v35[0]; /*0x5a384d*/
        HIWORD(v34) = v35[1] + v23; /*0x5a3853*/
        *(_DWORD *)v35 = v34; /*0x5a3861*/
        v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v35); /*0x5a3865*/
        v25 = v24[283]; /*0x5a386a*/
        v21 += 2; /*0x5a3870*/
        --v22; /*0x5a3875*/
        *((_DWORD *)v24 + 14) = 0xFFFF; /*0x5a3876*/
        v24[282] = 0; /*0x5a387d*/
        v24[284] = 0; /*0x5a3884*/
        v24[283] = v16 + v25; /*0x5a388b*/
      }
      while ( v22 ); /*0x5a3891*/
    }
    goto LABEL_24; /*0x5a3891*/
  }
  return result; /*0x5a38a9*/
}



// ==== 0x005A38C0  CellClass::Reset  this=CellClass  sig=csp ====
int __thiscall CellClass::Reset(CellClass *this)
{
  int result; // eax
  CellClass *v3; // ebx
  int v4; // esi
  int smudgeTypeIndex; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int j; // [esp+14h] [ebp-Ch]
  double i; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a38d4*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a38de*/
  v3 = (CellClass *)result; /*0x5a38e6*/
  for ( i = (double)this->CellClass_field_5C * 0.01; result; v3 = (CellClass *)result ) /*0x5a38f4*/
  {
    v4 = g_MissionQueueFrame.localVariables[163] /*0x5a3920*/
       + 80 * ((__int16)v3->smudgeTypeIndex + g_MapCellWidth * (__int16)HIWORD(v3->smudgeTypeIndex));
    if ( (unsigned __int8)CellClass::IsTerrainType(v3) ) /*0x5a3922*/
    {
      smudgeTypeIndex = v3->smudgeTypeIndex; /*0x5a392f*/
      v6 = (__int16)smudgeTypeIndex - 2; /*0x5a3938*/
      for ( j = v6; v6 < (__int16)smudgeTypeIndex + 3; j = v6 ) /*0x5a3944*/
      {
        v7 = SHIWORD(smudgeTypeIndex) - 2; /*0x5a3957*/
        if ( v7 < SHIWORD(smudgeTypeIndex) + 3 ) /*0x5a3964*/
        {
          v8 = (__int16)v6; /*0x5a3966*/
          do /*0x5a39d7*/
          {
            v9 = (__int16)v7 + v8; /*0x5a3972*/
            if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x5a3997*/
              && v8 - (__int16)v7 < g_MissionQueueFrame.localVariables[160]
              && (__int16)v7 - v8 < g_MissionQueueFrame.localVariables[160]
              && v9 <= g_MissionQueueFrame.localVariables[161] )
            {
              *(_DWORD *)(v4 + 40) = 1202590843; /*0x5a39a4*/
              *(_DWORD *)(v4 + 44) = 1064598241; /*0x5a39a7*/
              *(_DWORD *)(v4 + 32) = 0; /*0x5a39b6*/
              *(_DWORD *)(v4 + 36) = 0; /*0x5a39b9*/
              *(double *)(v4 + 24) = 0.02 * i * 10.0; /*0x5a39c2*/
            }
            ++v7; /*0x5a39c8*/
          }
          while ( v7 < (__int16)HIWORD(v3->smudgeTypeIndex) + 3 ); /*0x5a39d7*/
          v6 = j; /*0x5a39d9*/
        }
        smudgeTypeIndex = v3->smudgeTypeIndex; /*0x5a39dd*/
        ++v6; /*0x5a39e0*/
      }
    }
    else if ( *(double *)(v4 + 40) == 0.0 ) /*0x5a3a03*/
    {
      *(_DWORD *)(v4 + 40) = 1202590843; /*0x5a3a10*/
      *(_DWORD *)(v4 + 44) = 1064598241; /*0x5a3a13*/
      *(double *)(v4 + 24) = 0.02 * i; /*0x5a3a20*/
      *(_DWORD *)(v4 + 32) = 1202590843; /*0x5a3a2f*/
      *(_DWORD *)(v4 + 36) = 1064598241; /*0x5a3a32*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3a3a*/
  }
  return result; /*0x5a3a49*/
}



// ==== 0x005A3AE0  RandomMap::PlaceResources  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceResources(RandomMap *this)
{
  double v1; // st7
  int i; // eax
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v9; // esi
  int v15; // eax
  int v21; // eax
  int v27; // eax
  CellClass *j; // eax
  int v29; // eax
  int v30; // ebp
  unsigned int v31; // edi
  int v32; // esi
  _WORD *v33; // eax
  Cell *v34; // eax
  int v35; // eax
  int v40; // eax
  void *v41; // eax
  int v42; // eax
  bool v43; // cc
  unsigned int v44; // esi
  unsigned int v45; // eax
  signed int v46; // ebp
  int result; // eax
  unsigned int v48; // edi
  unsigned int v49; // eax
  unsigned int v50; // esi
  _WORD *v51; // eax
  RandomMap *v52; // eax
  int v53; // esi
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  int v57; // [esp-10h] [ebp-78h]
  int v58; // [esp-Ch] [ebp-74h]
  int v59; // [esp-Ch] [ebp-74h]
  int v60; // [esp-8h] [ebp-70h]
  double v61; // [esp-8h] [ebp-70h]
  unsigned int v62; // [esp+14h] [ebp-54h]
  int v63; // [esp+14h] [ebp-54h]
  int v64; // [esp+14h] [ebp-54h]
  signed int v66; // [esp+18h] [ebp-50h]
  __int16 v67[2]; // [esp+1Ch] [ebp-4Ch] BYREF
  double v68; // [esp+20h] [ebp-48h]
  __int16 v69[2]; // [esp+2Ch] [ebp-3Ch] BYREF
  double v70; // [esp+30h] [ebp-38h] BYREF
  double v71; // [esp+38h] [ebp-30h] BYREF
  double v72; // [esp+40h] [ebp-28h]
  double v73; // [esp+48h] [ebp-20h]
  __int64 v74; // [esp+50h] [ebp-18h]
  double v75; // [esp+58h] [ebp-10h]
  __int64 v76; // [esp+60h] [ebp-8h]

  _ESI = this; /*0x5a3aec*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b0b*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v68) = *(_DWORD *)(i + 36); /*0x5a3b10*/
    *(_DWORD *)(80 * (SLOWORD(v68) + g_MapCellWidth * SWORD1(v68)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b47*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b62*/
    __asm /*0x5a3b6a*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v5) = Math::RoundToInt(v1); /*0x5a3b7a*/
    *(_DWORD *)v67 = v5; /*0x5a3b82*/
  }
  while ( v5 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b92*/
    __asm /*0x5a3b9a*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v6) = Math::RoundToInt(v1); /*0x5a3baa*/
    v62 = v6; /*0x5a3bb2*/
  }
  while ( v6 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3bc2*/
    __asm /*0x5a3bca*/
    {
      fild [esp+68h+var_20]
      fmul ds:dbl_7EDAD0
      fadd ds:dbl_7E44C8
    }
    LOWORD(v7) = Math::RoundToInt(v1); /*0x5a3bda*/
    *(_DWORD *)v69 = v7; /*0x5a3be2*/
  }
  while ( v7 > 0x28 ); /*0x5a3be6*/
  if ( v4 ) /*0x5a3bea*/
  {
    while ( 1 ) /*0x5a3bf9*/
    {
      LODWORD(v68) = *(_DWORD *)(v4 + 36); /*0x5a3bf9*/
      _EBP = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v68) + g_MapCellWidth * SWORD1(v68)); /*0x5a3c16*/
      if ( !(unsigned __int8)Cell::IsEmpty((Cell *)v4) /*0x5a3c47*/
        || *(_BYTE *)(v4 + 284)
        || *(_DWORD *)(v4 + 68) != -1
        || *(_DWORD *)(v4 + 228)
        || *(_BYTE *)(_EBP + 69) )
      {
        goto LABEL_35; /*0x5a3c4a*/
      }
      LODWORD(v68) = *(_DWORD *)(v4 + 36); /*0x5a3c58*/
      v9 = SLOWORD(v68) + (SWORD1(v68) << 9); /*0x5a3c67*/
      v74 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3c6e*/
      __asm /*0x5a3c76*/
      {
        fild [esp+68h+var_18]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+18h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3c88*/
        break; /*0x5a3c88*/
      *(_QWORD *)&v75 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3d49*/
      __asm /*0x5a3d51*/
      {
        fild [esp+68h+var_10]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+28h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3d63*/
      {
        __asm { fild [esp+68h+var_54] } /*0x5a3d69*/
        v72 = 20.0; /*0x5a3d6d*/
        __asm /*0x5a3d7d*/
        {
          fstp [esp+68h+var_30]
          fld [esp+68h+var_30]
          fsub ds:dbl_7E44C8
          fcomp ds:dbl_7EDAC8
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x5a3d96*/
          goto LABEL_23; /*0x5a3d96*/
        __asm /*0x5a3d98*/
        {
          fld [esp+68h+var_30]
          fadd ds:dbl_7E44C8
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3dad*/
        {
LABEL_23:
          v72 = 38.0; /*0x5a3daf*/
          v71 = 42.0; /*0x5a3dbf*/
        }
        do /*0x5a3e01*/
        {
          do /*0x5a3df0*/
          {
            Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3dd4*/
            __asm /*0x5a3dd9*/
            {
              fmul [esp+68h+var_28]
              fadd [esp+68h+var_30]
              fst [esp+68h+var_48]
              fcomp ds:dbl_7E3CC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a3df0*/
          __asm /*0x5a3df2*/
          {
            fld [esp+68h+var_48]
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a3e01*/
        __asm { fld [esp+68h+var_48] } /*0x5a3e03*/
        v60 = v9; /*0x5a3e08*/
        LOWORD(v21) = Math::RoundToInt(v1); /*0x5a3e09*/
        v58 = v21; /*0x5a3e14*/
        v57 = dword_ABB104; /*0x5a3e15*/
        goto LABEL_34; /*0x5a3e16*/
      }
      v76 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3e25*/
      __asm /*0x5a3e2d*/
      {
        fild [esp+68h+var_8]
        fmul ds:dbl_7ED898
        fcomp qword ptr [ebp+20h]
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3e3f*/
      {
        __asm { fild dword ptr [esp+68h+var_3C] } /*0x5a3e45*/
        v73 = 20.0; /*0x5a3e49*/
        __asm /*0x5a3e59*/
        {
          fstp [esp+68h+var_30]
          fld [esp+68h+var_30]
          fsub ds:dbl_7E44C8
          fcomp ds:dbl_7EDAC8
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x5a3e72*/
          goto LABEL_30; /*0x5a3e72*/
        __asm /*0x5a3e74*/
        {
          fld [esp+68h+var_30]
          fadd ds:dbl_7E44C8
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3e89*/
        {
LABEL_30:
          v73 = 38.0; /*0x5a3e8b*/
          v71 = 42.0; /*0x5a3e9b*/
        }
        do /*0x5a3edd*/
        {
          do /*0x5a3ecc*/
          {
            Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3eb0*/
            __asm /*0x5a3eb5*/
            {
              fmul [esp+68h+var_20]
              fadd [esp+68h+var_30]
              fst [esp+68h+var_48]
              fcomp ds:dbl_7E3CC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a3ecc*/
          __asm /*0x5a3ece*/
          {
            fld [esp+68h+var_48]
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a3edd*/
        __asm { fld [esp+68h+var_48] } /*0x5a3edf*/
        v60 = v9; /*0x5a3ee4*/
        LOWORD(v27) = Math::RoundToInt(v1); /*0x5a3ee5*/
        v58 = v27; /*0x5a3ef0*/
        v57 = dword_AA0E18; /*0x5a3ef1*/
        goto LABEL_34; /*0x5a3ef1*/
      }
LABEL_35:
      v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3efc*/
      if ( !v4 ) /*0x5a3f0a*/
      {
        _ESI = this; /*0x5a3f10*/
        goto LABEL_37; /*0x5a3f10*/
      }
    }
    __asm { fild dword ptr [esp+68h+var_4C] } /*0x5a3c8e*/
    v70 = 20.0; /*0x5a3c92*/
    __asm /*0x5a3ca2*/
    {
      fstp [esp+68h+var_30]
      fld [esp+68h+var_30]
      fsub ds:dbl_7E44C8
      fcomp ds:dbl_7EDAC8
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a3cbb*/
      goto LABEL_16; /*0x5a3cbb*/
    __asm /*0x5a3cbd*/
    {
      fld [esp+68h+var_30]
      fadd ds:dbl_7E44C8
      fcomp ds:dbl_7E3CC8
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a3cd2*/
    {
LABEL_16:
      v70 = 38.0; /*0x5a3cd4*/
      v71 = 42.0; /*0x5a3ce4*/
    }
    do /*0x5a3d26*/
    {
      do /*0x5a3d15*/
      {
        Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a3cf9*/
        __asm /*0x5a3cfe*/
        {
          fmul [esp+68h+var_38]
          fadd [esp+68h+var_30]
          fst [esp+68h+var_48]
          fcomp ds:dbl_7E3CC8
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a3d15*/
      __asm /*0x5a3d17*/
      {
        fld [esp+68h+var_48]
        fcomp ds:dbl_7EDAC8
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a3d26*/
    __asm { fld [esp+68h+var_48] } /*0x5a3d28*/
    v60 = v9; /*0x5a3d2d*/
    LOWORD(v15) = Math::RoundToInt(v1); /*0x5a3d2e*/
    v58 = v15; /*0x5a3d33*/
    v57 = dword_ABC2B8; /*0x5a3d39*/
LABEL_34:
    FloodFillPathfinding(v4, v57, v58, v60, 0); /*0x5a3ef2*/
    goto LABEL_35; /*0x5a3ef7*/
  }
LABEL_37:
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3f14*/
  for ( j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a3f2a*/
        j;
        j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  }
  __asm /*0x5a3f41*/
  {
    fild dword ptr [esi+64h]
    fmul ds:dbl_7E3860
    fadd ds:dbl_7EDAC0
    fild dword ptr [esi+5Ch]
    fmul ds:dbl_7E3808
    fmulp st(1), st
    fimul dword ptr [esi+2FCh]
  }
  LOWORD(v29) = Math::RoundToInt(v1); /*0x5a3f61*/
  LODWORD(v68) = v29; /*0x5a3f68*/
  v63 = 0; /*0x5a3f6c*/
  if ( v29 > 0 ) /*0x5a3f70*/
  {
    do /*0x5a40bd*/
    {
      if ( v63 >= 100 ) /*0x5a3f7b*/
        break; /*0x5a3f7b*/
      v30 = 0; /*0x5a3f81*/
      do /*0x5a3fe9*/
      {
        v31 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a3f8b*/
        do /*0x5a3fb3*/
        {
          v32 = Range_RandomInt(0, v31); /*0x5a3f9d*/
          v33 = CellStruct::Set((CellStruct *)&v70, 0, 0); /*0x5a3f9f*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a3fb3*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v32),
                                   v33) );
        ++v30; /*0x5a3fc8*/
        *(_DWORD *)v67 = *(_DWORD *)(80 * v32 + g_MissionQueueFrame.localVariables[163]); /*0x5a3fd2*/
        if ( v30 > 200 ) /*0x5a3fd6*/
        {
          v35 = *(_DWORD *)CellStruct::Set((CellStruct *)&v71, 0, 0); /*0x5a3fff*/
          goto LABEL_49; /*0x5a4001*/
        }
        v34 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x5a3fe2*/
      }
      while ( !(unsigned __int8)Cell::IsEmpty(v34) ); /*0x5a3fe9*/
      v35 = *(_DWORD *)v67; /*0x5a4003*/
LABEL_49:
      *(_DWORD *)v69 = v35; /*0x5a4007*/
      do /*0x5a4041*/
      {
        do /*0x5a4030*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4010*/
          __asm /*0x5a4015*/
          {
            fmul ds:dbl_7E3860
            fadd ds:dbl_7E3548
            fst [esp+68h+var_20]
            fcomp ds:dbl_7E8AE8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4030*/
        __asm /*0x5a4032*/
        {
          fld [esp+68h+var_20]
          fcomp ds:dbl_7E3550
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4041*/
      do /*0x5a4079*/
      {
        do /*0x5a4068*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4048*/
          __asm /*0x5a404d*/
          {
            fmul ds:dbl_7E44A8
            fadd ds:dbl_7EDAB8
            fst [esp+68h+var_28]
            fcomp ds:dbl_7E44A8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4068*/
        __asm /*0x5a406a*/
        {
          fld [esp+68h+var_28]
          fcomp ds:dbl_7EDA10
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4079*/
      __asm { fld [esp+68h+var_28] } /*0x5a4083*/
      v61 = v73; /*0x5a4088*/
      LOWORD(v40) = Math::RoundToInt(v1); /*0x5a4089*/
      v59 = v40; /*0x5a4092*/
      v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69); /*0x5a4099*/
      v42 = ScatterTerrainTrees((int)v41, v59, v61); /*0x5a40a3*/
      v43 = LODWORD(v68) - v42 <= 0; /*0x5a40b3*/
      LODWORD(v68) -= v42; /*0x5a40b5*/
      ++v63; /*0x5a40b9*/
    }
    while ( !v43 ); /*0x5a40bd*/
  }
  v44 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
  v76 = v44 + 1; /*0x5a40e4*/
  __asm /*0x5a40e8*/
  {
    fild [esp+68h+var_8]
    fstp [esp+68h+var_10]
  }
  do /*0x5a4119*/
  {
    v76 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a40fa*/
    __asm /*0x5a4102*/
    {
      fild [esp+68h+var_8]
      fmul [esp+68h+var_10]
      fmul ds:dbl_7ED898
    }
    LOWORD(v45) = Math::RoundToInt(v1); /*0x5a4110*/
    v46 = v45; /*0x5a4115*/
  }
  while ( v45 > v44 ); /*0x5a4119*/
  result = 5 * v45; /*0x5a411b*/
  v66 = 0; /*0x5a411f*/
  v64 = 0; /*0x5a4125*/
  if ( 5 * v46 > 0 ) /*0x5a4129*/
  {
    while ( 1 ) /*0x5a412f*/
    {
      if ( v66 >= v46 ) /*0x5a4133*/
        return result; /*0x5a4133*/
      v48 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4141*/
      do /*0x5a419c*/
      {
        v76 = v48 + 1; /*0x5a414b*/
        __asm /*0x5a414f*/
        {
          fild [esp+68h+var_8]
          fstp [esp+68h+var_28]
        }
        do /*0x5a4180*/
        {
          *(_QWORD *)&v75 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4161*/
          __asm /*0x5a4169*/
          {
            fild [esp+68h+var_10]
            fmul [esp+68h+var_28]
            fmul ds:dbl_7ED898
          }
          LOWORD(v49) = Math::RoundToInt(v1); /*0x5a4177*/
          v50 = v49; /*0x5a417c*/
        }
        while ( v49 > v48 ); /*0x5a4180*/
        v51 = CellStruct::Set((CellStruct *)&v71, 0, 0); /*0x5a4188*/
      }
      while ( (unsigned __int8)CellStruct::Equals( /*0x5a419c*/
                                 (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v50),
                                 v51) );
      *(_DWORD *)v69 = *(_DWORD *)(80 * v50 + g_MissionQueueFrame.localVariables[163]); /*0x5a41be*/
      v52 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69); /*0x5a41c2*/
      v53 = (int)v52; /*0x5a41c7*/
      if ( *(_DWORD *)v52->__pad_44 == -1 ) /*0x5a41cd*/
        break; /*0x5a41cd*/
LABEL_73:
      result = ++v64; /*0x5a4262*/
      if ( v64 >= 5 * v46 ) /*0x5a4271*/
        return result; /*0x5a4271*/
    }
    if ( RandomMap::Check(v52) ) /*0x5a41d5*/
    {
      do /*0x5a4202*/
      {
        v74 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a41e8*/
        __asm /*0x5a41f0*/
        {
          fild [esp+68h+var_18]
          fmul ds:dbl_7EDAB0
        }
        LOWORD(v54) = Math::RoundToInt(v1); /*0x5a41fa*/
      }
      while ( v54 > 4 ); /*0x5a4202*/
      v55 = v54 + 168; /*0x5a4204*/
    }
    else
    {
      if ( !(unsigned __int8)Cell::IsEmpty((Cell *)v53) && !(unsigned __int8)Cell::IsShore((Cell *)v53) ) /*0x5a421f*/
        goto LABEL_72; /*0x5a421f*/
      do /*0x5a4245*/
      {
        *(_QWORD *)&v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a422b*/
        __asm /*0x5a4233*/
        {
          fild [esp+68h+var_20]
          fmul ds:dbl_7EDAB0
        }
        LOWORD(v56) = Math::RoundToInt(v1); /*0x5a423d*/
      }
      while ( v56 > 4 ); /*0x5a4245*/
      v55 = v56 + 173; /*0x5a4247*/
    }
    *(_DWORD *)(v53 + 68) = v55; /*0x5a424c*/
LABEL_72:
    *(_BYTE *)(v53 + 286) = 0; /*0x5a424f*/
    House::AnnounceUpgrade(v53, -1); /*0x5a4259*/
    ++v66; /*0x5a425e*/
    goto LABEL_73; /*0x5a425e*/
  }
  return result; /*0x5a4277*/
}



// ==== 0x005A4280  RandomMap::GenerateRandomMapTerrain  this=RandomMap  sig=csp ====
int __thiscall RandomMap::GenerateRandomMapTerrain(RandomMap *this)
{
  double v1; // st7
  int i; // eax
  int v4; // esi
  int v9; // eax
  CellClass *j; // eax
  int result; // eax
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // esi
  _WORD *v16; // eax
  Cell *v17; // eax
  int v18; // eax
  int v23; // eax
  void *v24; // eax
  bool v25; // cc
  int v26; // [esp-Ch] [ebp-5Ch]
  double v27; // [esp-8h] [ebp-58h]
  int v29; // [esp+18h] [ebp-38h]
  __int16 v30[2]; // [esp+20h] [ebp-30h] BYREF
  int v31; // [esp+24h] [ebp-2Ch]
  __int16 v32[2]; // [esp+28h] [ebp-28h] BYREF
  __int16 v33; // [esp+2Ch] [ebp-24h] BYREF
  double v34; // [esp+30h] [ebp-20h]
  double v35; // [esp+38h] [ebp-18h]
  __int64 v36; // [esp+40h] [ebp-10h]
  __int64 v37; // [esp+48h] [ebp-8h]

  _EDI = this; /*0x5a428d*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42ab*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v31 = *(_DWORD *)(i + 36); /*0x5a42b0*/
    *(_DWORD *)(80 * ((__int16)v31 + g_MapCellWidth * SHIWORD(v31)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42e7*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42f6*/
  if ( v4 ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v31 = *(_DWORD *)(v4 + 36); /*0x5a4309*/
      _EBP = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v31 + g_MapCellWidth * SHIWORD(v31)); /*0x5a4326*/
      if ( (unsigned __int8)Cell::IsEmpty((Cell *)v4) ) /*0x5a4328*/
      {
        if ( !*(_BYTE *)(v4 + 284) && !*(_BYTE *)(_EBP + 69) ) /*0x5a4341*/
        {
          v31 = *(_DWORD *)(v4 + 36); /*0x5a4352*/
          *(_QWORD *)&v35 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4368*/
          __asm /*0x5a4370*/
          {
            fild [esp+50h+var_18]
            fmul ds:dbl_7ED898
            fcomp qword ptr [ebp+28h]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a4382*/
          {
            do /*0x5a43ba*/
            {
              do /*0x5a43a9*/
              {
                Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4389*/
                __asm /*0x5a438e*/
                {
                  fmul ds:dbl_7ECE60
                  fadd ds:dbl_7E44C8
                  fst [esp+50h+var_20]
                  fcomp ds:dbl_7E3CC8
                  fnstsw ax
                }
              }
              while ( (_AX & 0x100) != 0 ); /*0x5a43a9*/
              __asm /*0x5a43ab*/
              {
                fld [esp+50h+var_20]
                fcomp ds:dbl_7E1728
                fnstsw ax
              }
            }
            while ( (_AX & 0x4100) == 0 ); /*0x5a43ba*/
            __asm { fld [esp+50h+var_20] } /*0x5a43bc*/
            LOWORD(v9) = Math::RoundToInt(v1); /*0x5a43c2*/
            FloodFillPathfinding(v4, dword_ABC2B8, v9, (__int16)v31 + (SHIWORD(v31) << 9), 0); /*0x5a43d3*/
          }
        }
      }
      v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43e2*/
    }
    while ( v4 ); /*0x5a43e6*/
    _EDI = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43f5*/
  for ( j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4406*/
        j;
        j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    CellClass::DetermineTileType(j); /*0x5a440a*/
  }
  __asm /*0x5a441d*/
  {
    fild dword ptr [edi+64h]
    fmul ds:dbl_7E3860
    fadd ds:dbl_7EDAC0
    fild dword ptr [edi+5Ch]
    fmul ds:dbl_7E3808
    fmulp st(1), st
    fimul dword ptr [edi+2FCh]
  }
  LOWORD(result) = Math::RoundToInt(v1); /*0x5a443d*/
  v31 = result; /*0x5a4444*/
  v29 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
    do /*0x5a45cf*/
    {
      if ( v29 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      v12 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
        v13 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4467*/
        do /*0x5a44c2*/
        {
          v36 = v13 + 1; /*0x5a4471*/
          __asm /*0x5a4475*/
          {
            fild [esp+50h+var_10]
            fstp [esp+50h+var_18]
          }
          do /*0x5a44a6*/
          {
            v37 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4487*/
            __asm /*0x5a448f*/
            {
              fild [esp+50h+var_8]
              fmul [esp+50h+var_18]
              fmul ds:dbl_7ED898
            }
            LOWORD(v14) = Math::RoundToInt(v1); /*0x5a449d*/
            v15 = v14; /*0x5a44a2*/
          }
          while ( v14 > v13 ); /*0x5a44a6*/
          v16 = CellStruct::Set((CellStruct *)&v33, 0, 0); /*0x5a44ae*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a44c2*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v15),
                                   v16) );
        ++v12; /*0x5a44d6*/
        *(_DWORD *)v30 = *(_DWORD *)(80 * v15 + g_MissionQueueFrame.localVariables[163]); /*0x5a44e0*/
        if ( v12 > 200 ) /*0x5a44e4*/
        {
          v18 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x5a44f0*/
      }
      while ( !(unsigned __int8)Cell::IsEmpty(v17) ); /*0x5a44f7*/
      v18 = *(_DWORD *)v30; /*0x5a4515*/
LABEL_27:
      *(_DWORD *)v32 = v18; /*0x5a4519*/
      do /*0x5a4553*/
      {
        do /*0x5a4542*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4522*/
          __asm /*0x5a4527*/
          {
            fmul ds:dbl_7E3860
            fadd ds:dbl_7E3548
            fst [esp+50h+var_20]
            fcomp ds:dbl_7E8AE8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4542*/
        __asm /*0x5a4544*/
        {
          fld [esp+50h+var_20]
          fcomp ds:dbl_7E3550
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4553*/
      do /*0x5a458b*/
      {
        do /*0x5a457a*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a455a*/
          __asm /*0x5a455f*/
          {
            fmul ds:dbl_7E44A8
            fadd ds:dbl_7EDAB8
            fst [esp+50h+var_18]
            fcomp ds:dbl_7E44A8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a457a*/
        __asm /*0x5a457c*/
        {
          fld [esp+50h+var_18]
          fcomp ds:dbl_7EDA10
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a458b*/
      __asm { fld [esp+50h+var_18] } /*0x5a4595*/
      v27 = v34; /*0x5a459a*/
      LOWORD(v23) = Math::RoundToInt(v1); /*0x5a459b*/
      v26 = v23; /*0x5a45a4*/
      v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x5a45ab*/
      result = ScatterTerrainTrees((int)v24, v26, v27); /*0x5a45b5*/
      v25 = v31 - result <= 0; /*0x5a45c5*/
      v31 -= result; /*0x5a45c7*/
      ++v29; /*0x5a45cb*/
    }
    while ( !v25 ); /*0x5a45cf*/
  }
  return result; /*0x5a45d5*/
}



// ==== 0x005A45E0  ScatterTerrainTrees  this=-  sig=csp ====
int __stdcall ScatterTerrainTrees(int a1, int a2, double a3)
{
  int v3; // edi
  float *v4; // eax
  float *v5; // ebx
  int *v6; // eax
  int *v7; // esi
  void *v8; // eax
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
  _DWORD *v20; // ebx
  signed int v21; // eax
  void **v22; // edi
  int v23; // eax
  char v24; // al
  int v25; // eax
  __int16 v26; // dx
  int v27; // ecx
  int v28; // eax
  char *v29; // edi
  float *v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  unsigned int v33; // edx
  int v34; // ebx
  unsigned int v35; // eax
  int v36; // eax
  __int16 *v37; // edi
  __int16 *v39; // [esp+18h] [ebp-58h]
  float *v40; // [esp+1Ch] [ebp-54h]
  int v41; // [esp+20h] [ebp-50h]
  int v42; // [esp+24h] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-44h]
  float *v44; // [esp+30h] [ebp-40h]
  double v45; // [esp+30h] [ebp-40h]
  float v46; // [esp+38h] [ebp-38h]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h] BYREF
  float v49; // [esp+40h] [ebp-30h]
  __int64 v50; // [esp+44h] [ebp-2Ch]
  __int64 v51; // [esp+4Ch] [ebp-24h]
  __int64 v52; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  v3 = 25 * a2; /*0x5a45f2*/
  v4 = (float *)__2_YAPAXI_Z(200 * a2); /*0x5a4601*/
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
  v6 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v7 = v6; /*0x5a462f*/
  if ( v6 ) /*0x5a4636*/
  {
    v6[3] = 0; /*0x5a463f*/
    v6[4] = -1; /*0x5a4647*/
    *v6 = 0; /*0x5a464e*/
    v6[1] = v3; /*0x5a4654*/
    v8 = __2_YAPAXI_Z(100 * a2 + 4); /*0x5a4657*/
    v9 = v7[1]; /*0x5a465c*/
    v7[2] = (int)v8; /*0x5a465f*/
    v10 = 0; /*0x5a4665*/
    if ( v9 >= 0 ) /*0x5a4669*/
    {
      do /*0x5a467c*/
      {
        ++v10; /*0x5a466e*/
        *(_DWORD *)(v7[2] + 4 * v10 - 4) = 0; /*0x5a466f*/
      }
      while ( v10 <= v7[1] ); /*0x5a467c*/
    }
  }
  else
  {
    v7 = 0; /*0x5a4680*/
  }
  for ( i = 0; i <= *v7; *(_DWORD *)(v7[2] + 4 * i - 4) = 0 ) /*0x5a4688*/
    ++i; /*0x5a468d*/
  *v7 = 0; /*0x5a469f*/
  v41 = 1; /*0x5a46a5*/
  *v5 = *(float *)(a1 + 36); /*0x5a46b0*/
  v5[1] = 0.0; /*0x5a46b2*/
  *((_BYTE *)dword_ABED10 /*0x5a46dc*/
  + 80 * (__int16)*(_DWORD *)(a1 + 36)
  + 80 * g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(a1 + 36))
  + 71) = 1;
  v12 = *v7 + 1; /*0x5a46e6*/
  v46 = v5[1]; /*0x5a46e9*/
  v13 = v12 >> 1; /*0x5a46f0*/
  if ( v12 < v7[1] ) /*0x5a46f4*/
  {
    if ( v12 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        v14 = v7[2]; /*0x5a46fb*/
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
    *(_DWORD *)(v7[2] + 4 * v12) = v5; /*0x5a4726*/
    v16 = v7[3]; /*0x5a472b*/
    ++*v7; /*0x5a4731*/
    if ( (unsigned int)v5 > v16 ) /*0x5a4733*/
      v7[3] = (int)v5; /*0x5a4735*/
    if ( (unsigned int)v5 < v7[4] ) /*0x5a473b*/
      v7[4] = (int)v5; /*0x5a473d*/
  }
  if ( *v7 ) /*0x5a4740*/
  {
    v18 = v7[2]; /*0x5a474e*/
    v19 = *(__int16 **)(v18 + 4); /*0x5a4756*/
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 4 * *v7); /*0x5a4759*/
    *(_DWORD *)(v7[2] + 4 * (*v7)--) = 0; /*0x5a4761*/
    Heap::SiftDown(v7, 1); /*0x5a476f*/
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
      v20 = CellCoord::To_CellObj(&dword_87F7E8, v17); /*0x5a47ba*/
      if ( Cell::IsEmpty(v20) && !v20[57] && v20[17] == -1 && v20[59] != 3 ) /*0x5a47ec*/
      {
        v50 = (unsigned int)Random::State(&unk_ABE890); /*0x5a47fc*/
        if ( (double)v50 * 2.328306437080797e-10 < a3 ) /*0x5a4816*/
        {
          do /*0x5a4848*/
          {
            v51 = (unsigned int)Random::State(&unk_ABE890); /*0x5a4826*/
            v21 = Math::RoundToInt((double)v51 * 0.000000005820766092701993 + 1.0); /*0x5a483e*/
          }
          while ( (unsigned int)v21 > 0x19 ); /*0x5a4848*/
          sprintf(Buffer, "TREE%d%d", v21 / 10, v21 % 10); /*0x5a486f*/
          v22 = (void **)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
          if ( v22 ) /*0x5a4885*/
          {
            v48 = v20[9]; /*0x5a488e*/
            v23 = Terrain::LookupByName(Buffer); /*0x5a4892*/
            TerrainClass::Construct(v22, *((void **)dword_A8E31C + v23), (__int16 *)&v48); /*0x5a48aa*/
          }
          ++v42; /*0x5a48af*/
        }
      }
      v24 = 0; /*0x5a48bb*/
      v47 = 0; /*0x5a48c0*/
      v44 = &v40[2 * v41]; /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        v25 = v24 & 7; /*0x5a48cc*/
        v26 = v39[1] + HIWORD(dword_89F688[v25]); /*0x5a48de*/
        LOWORD(v25) = *v39 + LOWORD(dword_89F688[v25]); /*0x5a48e5*/
        HIWORD(v43) = v26; /*0x5a48ee*/
        v27 = (__int16)v25; /*0x5a48f3*/
        LOWORD(v43) = v25; /*0x5a48f9*/
        v28 = v26 + (__int16)v25; /*0x5a48fe*/
        if ( v28 > dword_ABED04 && v27 - v26 < dword_ABED04 && v26 - v27 < dword_ABED04 && v28 <= dword_ABED08 ) /*0x5a492d*/
        {
          v29 = (char *)dword_ABED10 + 80 * v27 + 80 * g_MapCellWidth * v26; /*0x5a494a*/
          if ( !v29[71] && !v29[69] && v41 < 25 * a2 ) /*0x5a496c*/
          {
            v30 = v44; /*0x5a4972*/
            *(_DWORD *)v44 = v43; /*0x5a497d*/
            v45 = Math::Sqrt((double)(((__int16)*(_DWORD *)(a1 + 36) - v27) * ((__int16)*(_DWORD *)(a1 + 36) - v27) /*0x5a49b1*/
                                    + ((__int16)HIWORD(*(_DWORD *)(a1 + 36)) - v26)
                                    * ((__int16)HIWORD(*(_DWORD *)(a1 + 36)) - v26)));
            v52 = (unsigned int)Random::State(&unk_ABE890); /*0x5a49c2*/
            ++v41; /*0x5a49dd*/
            v30[1] = (double)v52 * 5.0 * 2.328306437080797e-10 + v45; /*0x5a49eb*/
            v29[71] = 1; /*0x5a49ee*/
            v31 = (unsigned int)v30; /*0x5a49f4*/
            v32 = *v7 + 1; /*0x5a49f9*/
            v44 = v30 + 2; /*0x5a49fa*/
            v49 = v30[1]; /*0x5a4a03*/
            v33 = v32 >> 1; /*0x5a4a0a*/
            if ( v32 < v7[1] ) /*0x5a4a0e*/
            {
              for ( ; v32 > 1; v33 >>= 1 ) /*0x5a4a13*/
              {
                v34 = v7[2]; /*0x5a4a15*/
                if ( *(float *)(*(_DWORD *)(v34 + 4 * v33) + 4) <= (double)v49 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(_DWORD *)(v34 + 4 * v32) = *(_DWORD *)(v34 + 4 * v33); /*0x5a4a2c*/
                v32 = v33; /*0x5a4a2f*/
              }
              *(_DWORD *)(v7[2] + 4 * v32) = v31; /*0x5a4a3b*/
              v35 = v7[3]; /*0x5a4a40*/
              ++*v7; /*0x5a4a46*/
              if ( v31 > v35 ) /*0x5a4a48*/
                v7[3] = v31; /*0x5a4a4a*/
              if ( v31 < v7[4] ) /*0x5a4a50*/
                v7[4] = v31; /*0x5a4a52*/
            }
          }
        }
        v24 = ++v47; /*0x5a4a59*/
      }
      while ( v47 < 8 ); /*0x5a4a61*/
      if ( *v7 ) /*0x5a4a67*/
      {
        v36 = v7[2]; /*0x5a4a73*/
        v37 = *(__int16 **)(v36 + 4); /*0x5a4a7b*/
        *(_DWORD *)(v36 + 4) = *(_DWORD *)(v36 + 4 * *v7); /*0x5a4a7e*/
        *(_DWORD *)(v7[2] + 4 * (*v7)--) = 0; /*0x5a4a86*/
        Heap::SiftDown(v7, 1); /*0x5a4a94*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a4b4f*/
}



// ==== 0x005A4B60  FloodFillPathfinding  this=-  sig=csp ====
void __stdcall Pathfinding_FloodFill(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // edi
  float *v6; // eax
  float *v7; // ebx
  int *v8; // eax
  int *v9; // esi
  void *v10; // eax
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
  __int16 *v22; // edi
  _DWORD *v23; // eax
  int v24; // edx
  char v25; // al
  float *v26; // edi
  int *v27; // ebx
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
  __int16 *v38; // eax
  int v39; // [esp+14h] [ebp-34h] BYREF
  __int16 *v40; // [esp+18h] [ebp-30h]
  float *v41; // [esp+1Ch] [ebp-2Ch]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  float v44; // [esp+28h] [ebp-20h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  double v46; // [esp+30h] [ebp-18h]
  float v47; // [esp+38h] [ebp-10h]
  int v48; // [esp+3Ch] [ebp-Ch] BYREF
  __int64 v49; // [esp+40h] [ebp-8h]

  v5 = 10 * a3; /*0x5a4b72*/
  v6 = (float *)__2_YAPAXI_Z(80 * a3); /*0x5a4b7c*/
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
  v8 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a4ba5*/
  v9 = v8; /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    v8[3] = 0; /*0x5a4bb5*/
    *v8 = 0; /*0x5a4bb8*/
    v8[4] = -1; /*0x5a4bc1*/
    v8[1] = v5; /*0x5a4bc9*/
    v10 = __2_YAPAXI_Z(40 * a3 + 4); /*0x5a4bcc*/
    v11 = v9[1]; /*0x5a4bd1*/
    v9[2] = (int)v10; /*0x5a4bd4*/
    v12 = 0; /*0x5a4bda*/
    if ( v11 >= 0 ) /*0x5a4bde*/
    {
      do /*0x5a4bf1*/
      {
        ++v12; /*0x5a4be3*/
        *(_DWORD *)(v9[2] + 4 * v12 - 4) = 0; /*0x5a4be4*/
      }
      while ( v12 <= v9[1] ); /*0x5a4bf1*/
    }
  }
  else
  {
    v9 = 0; /*0x5a4bf7*/
  }
  v13 = 0; /*0x5a4bfb*/
  v14 = *v9 < 0; /*0x5a4bfd*/
  v45 = 0; /*0x5a4bff*/
  if ( !v14 ) /*0x5a4c03*/
  {
    do /*0x5a4c11*/
    {
      ++v13; /*0x5a4c08*/
      *(_DWORD *)(v9[2] + 4 * v13 - 4) = 0; /*0x5a4c09*/
    }
    while ( v13 <= *v9 ); /*0x5a4c11*/
  }
  *v9 = 0; /*0x5a4c16*/
  v42 = 1; /*0x5a4c18*/
  *v7 = *(float *)(a1 + 36); /*0x5a4c23*/
  v7[1] = 0.0; /*0x5a4c25*/
  v44 = *(float *)(a1 + 36); /*0x5a4c2b*/
  *((_DWORD *)dword_ABED10 + 20 * SLOWORD(v44) + 20 * g_MapCellWidth * SHIWORD(v44) + 15) = a4; /*0x5a4c4f*/
  v15 = *v9 + 1; /*0x5a4c58*/
  v44 = v7[1]; /*0x5a4c5b*/
  v16 = v15 >> 1; /*0x5a4c62*/
  if ( v15 < v9[1] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        v17 = v9[2]; /*0x5a4c6d*/
        v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a4c70*/
        if ( *(float *)(v18 + 4) <= (double)v44 ) /*0x5a4c7f*/
          break; /*0x5a4c7f*/
        *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a4c81*/
        v15 = v16; /*0x5a4c84*/
        v16 >>= 1; /*0x5a4c86*/
      }
      while ( v15 > 1 ); /*0x5a4c8b*/
      v7 = v41; /*0x5a4c8d*/
    }
    *(_DWORD *)(v9[2] + 4 * v15) = v7; /*0x5a4c94*/
    v19 = v9[3]; /*0x5a4c99*/
    ++*v9; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      v9[3] = (int)v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9[4] ) /*0x5a4ca9*/
      v9[4] = (int)v7; /*0x5a4cab*/
  }
  if ( *v9 ) /*0x5a4cae*/
  {
    v21 = v9[2]; /*0x5a4cbc*/
    v22 = *(__int16 **)(v21 + 4); /*0x5a4cc4*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *v9); /*0x5a4cc7*/
    *(_DWORD *)(v9[2] + 4 * (*v9)--) = 0; /*0x5a4ccf*/
    Heap::SiftDown(v9, 1); /*0x5a4cdd*/
    v40 = v22; /*0x5a4ce2*/
    v20 = v22; /*0x5a4ce6*/
  }
  else
  {
    v20 = 0; /*0x5a4cb4*/
    v40 = 0; /*0x5a4cb6*/
  }
  if ( a3 > 0 ) /*0x5a4ced*/
  {
    while ( v20 ) /*0x5a4cfb*/
    {
      v23 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x5a4d07*/
      v24 = v42; /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      v25 = 0; /*0x5a4d16*/
      v44 = 0.0; /*0x5a4d18*/
      v26 = &v7[2 * v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        v39 = *CellStruct::Add(v40, &v48, (_WORD *)(4 * (v25 & 7) + 9041544)); /*0x5a4d44*/
        v43 = SHIWORD(v39) + (__int16)v39; /*0x5a4d55*/
        if ( v43 > dword_ABED04 /*0x5a4d81*/
          && (__int16)v39 - SHIWORD(v39) < dword_ABED04
          && SHIWORD(v39) - (__int16)v39 < dword_ABED04
          && v43 <= dword_ABED08 )
        {
          v27 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v39); /*0x5a4d96*/
          v43 = (int)v27; /*0x5a4d9a*/
          if ( Cell::IsEmpty(v27) || a5 && (CellClass::InBounds(v27) || CellClass::InMapDataRange(v27)) ) /*0x5a4dbf*/
          {
            v28 = SHIWORD(v39); /*0x5a4dcc*/
            LODWORD(v46) = (__int16)v39; /*0x5a4de4*/
            if ( *((_DWORD *)dword_ABED10 + 20 * (__int16)v39 + 20 * g_MapCellWidth * SHIWORD(v39) + 15) != a4 /*0x5a4e1a*/
              && !*(_BYTE *)(v43 + 284)
              && *(_DWORD *)(v43 + 68) == -1
              && !*(_DWORD *)(v43 + 228) )
            {
              *(_DWORD *)v26 = v39; /*0x5a4e2f*/
              v43 = *(_DWORD *)(a1 + 36); /*0x5a4e3b*/
              LODWORD(v46) = ((__int16)v43 - LODWORD(v46)) * ((__int16)v43 - LODWORD(v46)) /*0x5a4e57*/
                           + (SHIWORD(v43) - v28) * (SHIWORD(v43) - v28);
              v46 = Math::Sqrt((double)SLODWORD(v46)); /*0x5a4e67*/
              v49 = (unsigned int)Random::State(&unk_ABE890); /*0x5a4e78*/
              v29 = SHIWORD(v39); /*0x5a4e88*/
              v30 = (__int16)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((_DWORD *)dword_ABED10 + 20 * v30 + 20 * g_MapCellWidth * v29 + 15) = a4; /*0x5a4eba*/
              v31 = (unsigned int)v26; /*0x5a4ec3*/
              ++v42; /*0x5a4ec5*/
              v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              v33 = *v9 + 1; /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              v34 = v9[1]; /*0x5a4ed6*/
              v35 = v33 >> 1; /*0x5a4edb*/
              v43 = v31; /*0x5a4edf*/
              if ( v33 < v34 ) /*0x5a4ee3*/
              {
                for ( ; v33 > 1; v35 >>= 1 ) /*0x5a4ee8*/
                {
                  LODWORD(v46) = *(_DWORD *)(v9[2] + 4 * v35); /*0x5a4ef0*/
                  if ( *(float *)(LODWORD(v46) + 4) <= (double)v47 ) /*0x5a4f00*/
                    break; /*0x5a4f00*/
                  *(_DWORD *)(v9[2] + 4 * v33) = LODWORD(v46); /*0x5a4f09*/
                  v31 = v43; /*0x5a4f0c*/
                  v33 = v35; /*0x5a4f10*/
                }
                *(_DWORD *)(v9[2] + 4 * v33) = v31; /*0x5a4f1c*/
                v36 = v9[3]; /*0x5a4f21*/
                ++*v9; /*0x5a4f27*/
                if ( v31 > v36 ) /*0x5a4f29*/
                  v9[3] = v31; /*0x5a4f2b*/
                if ( v31 < v9[4] ) /*0x5a4f31*/
                  v9[4] = v31; /*0x5a4f33*/
              }
            }
          }
        }
        v25 = LOBYTE(v44) + 1; /*0x5a4f3a*/
        ++LODWORD(v44); /*0x5a4f3e*/
      }
      while ( SLODWORD(v44) < 8 ); /*0x5a4f42*/
      v37 = ++v45; /*0x5a4f4e*/
      v38 = (__int16 *)PriorityQueue::Pop(v9); /*0x5a4f53*/
      v7 = v41; /*0x5a4f58*/
      v40 = v38; /*0x5a4f5c*/
      if ( v37 >= a3 ) /*0x5a4f63*/
        break; /*0x5a4f63*/
      v20 = v40; /*0x5a4cf5*/
    }
  }
  __3_YAXPAX_Z(v7); /*0x5a4f6a*/
  if ( v9 ) /*0x5a4f74*/
  {
    __3_YAXPAX_Z((void *)v9[2]); /*0x5a4f7a*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a500f*/
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
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a5417*/
  {
    v80 = *(int *)(i + 36); /*0x5a541c*/
    *((_DWORD *)dword_ABED10 + 20 * (__int16)v80 + 20 * g_MapCellWidth * SHIWORD(v80) + 15) = 0; /*0x5a5441*/
  }
  v13 = a1; /*0x5a544e*/
  *v4 = *(_DWORD *)a1; /*0x5a5454*/
  v4[1] = 0; /*0x5a5456*/
  v14 = 5 * (*v13 + g_MapCellWidth * v13[1]); /*0x5a546f*/
  v76 = 1; /*0x5a547a*/
  *((_DWORD *)dword_ABED10 + 4 * v14 + 15) = 1; /*0x5a547e*/
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
    *v24 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a552b*/
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
      *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v20) + 14) = dword_ABC2B0; /*0x5a557c*/
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
        if ( v31 > dword_ABED04 /*0x5a5626*/
          && (__int16)v80 - SHIWORD(v80) < dword_ABED04
          && SHIWORD(v80) - (__int16)v80 < dword_ABED04
          && v31 <= dword_ABED08 )
        {
          v32 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73); /*0x5a563b*/
          if ( Cell::IsEmpty(v32) && v32[17] == -1 ) /*0x5a5650*/
          {
            v33 = SHIWORD(v73); /*0x5a5656*/
            v34 = (__int16)v73; /*0x5a5667*/
            v35 = (char *)dword_ABED10 + 80 * (__int16)v73 + 80 * SHIWORD(v73) * g_MapCellWidth; /*0x5a5678*/
            if ( *((_DWORD *)v35 + 15) != 1 && !v35[69] ) /*0x5a5684*/
            {
              v36 = a1; /*0x5a568f*/
              *(_DWORD *)LODWORD(v30) = v73; /*0x5a5693*/
              v37 = *v36 - v34; /*0x5a569f*/
              v38 = v36[1] - v33; /*0x5a56a1*/
              *(float *)&v80 = COERCE_FLOAT(abs32(v37)); /*0x5a56b1*/
              if ( v80 <= (int)((HIDWORD(v38) ^ v38) - HIDWORD(v38)) ) /*0x5a56b5*/
                v80 = (HIDWORD(v38) ^ v38) - HIDWORD(v38); /*0x5a56b7*/
              v83 = (unsigned int)Random::State(&unk_ABE890); /*0x5a56c5*/
              v39 = SHIWORD(v73); /*0x5a56d5*/
              v40 = (__int16)v73; /*0x5a56e0*/
              v41 = (double)v80; /*0x5a56eb*/
              v42 = v30; /*0x5a56ef*/
              LODWORD(v30) += 8; /*0x5a56f1*/
              *(float *)&v80 = v30; /*0x5a56f4*/
              *(float *)(LODWORD(v30) - 4) = (double)v83 * 3.0 * 2.328306437080797e-10 + v41; /*0x5a56fa*/
              *((_DWORD *)dword_ABED10 + 20 * v40 + 20 * g_MapCellWidth * v39 + 15) = 1; /*0x5a5711*/
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
      v72 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(v24[1] + 4 * j--)); /*0x5a5ab6*/
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
          if ( v58 > dword_ABED04 /*0x5a58dd*/
            && SLOWORD(v81[0]) - SWORD1(v81[0]) < dword_ABED04
            && SWORD1(v81[0]) - SLOWORD(v81[0]) < dword_ABED04
            && v58 <= dword_ABED08
            && *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v80) + 14) != dword_ABC2B0 )
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
    for ( k = 0; k < v24[4]; *((_BYTE *)dword_ABED10 + v63 + 69) = 1 ) /*0x5a5926*/
    {
      v63 = 80 * (*(__int16 *)(v24[1] + 4 * k) + g_MapCellWidth * *(__int16 *)(v24[1] + 4 * k + 2)); /*0x5a5948*/
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
          v78 = (unsigned int)Random::State(&unk_ABE890); /*0x5a5996*/
          v66 = Math::RoundToInt((double)v78 * v81[0] * 2.328306437080797e-10); /*0x5a59ac*/
        }
        while ( v66 > v65 ); /*0x5a59b3*/
        LODWORD(v82) = *(_DWORD *)(v24[1] + 4 * v66); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v77 = (unsigned int)Random::State(&unk_ABE890); /*0x5a59c9*/
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
            if ( !*((_BYTE *)dword_ABED10 /*0x5a5a51*/
                  + 80 * (__int16)(m + v82)
                  + 80 * g_MapCellWidth * (__int16)(WORD1(v82) + n)
                  + 69)
              || *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v81) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a2) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( (_BYTE)a2 ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings((int)v79 + dword_AA10A4, &v82, -1, -1); /*0x5a5a7f*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 3.0 * 2.328306437080797e-10 + (double)v5; /*0x5a5b45*/
}



// ==== 0x005A5B50  MapSeedClass::PlaceBuildingClusters  this=MapSeedClass  sig=csp ====
__int16 __thiscall MapSeedClass::PlaceBuildingClusters(MapSeedClass *this, int a2)
{
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int i; // esi
  unsigned int v12; // eax
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // eax
  int v16; // ebx
  Cell *NeighbourContent; // esi
  unsigned int v18; // eax
  __int64 v20; // [esp+10h] [ebp-118h] BYREF
  char v21; // [esp+1Ah] [ebp-10Eh]
  char v22; // [esp+1Bh] [ebp-10Dh]
  __int16 v23[2]; // [esp+1Ch] [ebp-10Ch] BYREF
  __int16 v24; // [esp+20h] [ebp-108h] BYREF
  __int16 v25; // [esp+22h] [ebp-106h]
  char v26; // [esp+27h] [ebp-101h]
  int v27; // [esp+28h] [ebp-100h] BYREF
  int v28; // [esp+2Ch] [ebp-FCh] BYREF
  int v29; // [esp+30h] [ebp-F8h] BYREF
  int v30; // [esp+34h] [ebp-F4h]
  int v31; // [esp+38h] [ebp-F0h]
  int v32; // [esp+3Ch] [ebp-ECh]
  _DWORD v33[2]; // [esp+40h] [ebp-E8h] BYREF
  int v34; // [esp+48h] [ebp-E0h]
  int v35; // [esp+4Ch] [ebp-DCh]
  int v36; // [esp+50h] [ebp-D8h]
  int v37; // [esp+54h] [ebp-D4h]
  int v38; // [esp+58h] [ebp-D0h] BYREF
  int v39; // [esp+5Ch] [ebp-CCh]
  int v40; // [esp+60h] [ebp-C8h]
  int v41; // [esp+64h] [ebp-C4h]
  int v42; // [esp+68h] [ebp-C0h]
  int v43[2]; // [esp+6Ch] [ebp-BCh] BYREF
  int v44; // [esp+74h] [ebp-B4h]
  int v45; // [esp+78h] [ebp-B0h]
  int v46[2]; // [esp+7Ch] [ebp-ACh] BYREF
  int v47; // [esp+84h] [ebp-A4h]
  int v48; // [esp+88h] [ebp-A0h]
  __int64 v49; // [esp+8Ch] [ebp-9Ch] BYREF
  int v50[4]; // [esp+94h] [ebp-94h] BYREF
  int v51[4]; // [esp+A4h] [ebp-84h] BYREF
  MapSeedClass v52; // [esp+B4h] [ebp-74h] BYREF
  int v53[4]; // [esp+E4h] [ebp-44h] BYREF
  int v54[4]; // [esp+F4h] [ebp-34h] BYREF
  _DWORD v55[4]; // [esp+104h] [ebp-24h] BYREF
  int v56[4]; // [esp+114h] [ebp-14h] BYREF
  char v57[4]; // [esp+124h] [ebp-4h] BYREF

  v33[1] = this; /*0x5a5b6a*/
  v2 = globalHelper_0A7640(v50, a2); /*0x5a5b6e*/
  v3 = *v2; /*0x5a5b73*/
  v38 = *v2; /*0x5a5b75*/
  v4 = v2[1]; /*0x5a5b79*/
  v39 = v4; /*0x5a5b7c*/
  v40 = v2[2]; /*0x5a5b83*/
  v5 = v2[3]; /*0x5a5b87*/
  v41 = v5; /*0x5a5b8d*/
  if ( v5 > 5 ) /*0x5a5b91*/
  {
    v6 = v5 - 2; /*0x5a5b9a*/
    v25 = v4 + 2; /*0x5a5b9d*/
    v24 = v3; /*0x5a5ba9*/
    if ( v5 - 2 > 3 ) /*0x5a5bae*/
    {
      do /*0x5a5de6*/
      {
        v27 = *FindClearPlacementCell(v23, &v24, &v38, 2); /*0x5a5bd8*/
        v7 = *globalHelper_0A7070(v33, (__int16 *)&v27, &v38, 2); /*0x5a5bf0*/
        v28 = v7; /*0x5a5bf7*/
        if ( v7 && (v24 || v25) && (__int16)v7 - v24 >= 6 ) /*0x5a5c28*/
        {
          v46[1] = SHIWORD(v27); /*0x5a5c3b*/
          v46[0] = (__int16)v27 - 4; /*0x5a5c4c*/
          v47 = 4; /*0x5a5c53*/
          v48 = 3; /*0x5a5c5e*/
          if ( !(unsigned __int8)IsAreaClearMap(v46, 0, 0) ) /*0x5a5c65*/
            goto LABEL_11; /*0x5a5c65*/
          do /*0x5a5c92*/
          {
            v20 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5c78*/
            LOWORD(v8) = Math::RoundToInt((double)v20 * 4.656612874161595e-10); /*0x5a5c8a*/
          }
          while ( v8 > 1 ); /*0x5a5c92*/
          if ( v8 ) /*0x5a5c96*/
          {
            HIWORD(v31) = HIWORD(v27); /*0x5a5ca4*/
            LOWORD(v31) = v27 - 3; /*0x5a5cae*/
            v29 = v31; /*0x5a5cb9*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, &v29, -1, -1); /*0x5a5cc6*/
          }
          else
          {
LABEL_11:
            PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, &v27, -1, -1); /*0x5a5cd9*/
          }
          v9 = v27; /*0x5a5cde*/
          v10 = v28; /*0x5a5ce2*/
          for ( i = 0; i < (__int16)v28 - (__int16)v27 - 1; ++i ) /*0x5a5cf3*/
          {
            LOWORD(v32) = i + 1; /*0x5a5cfa*/
            LOWORD(v30) = v9 + i + 1; /*0x5a5d0a*/
            HIWORD(v30) = HIWORD(v27); /*0x5a5d0f*/
            v29 = v30; /*0x5a5d1a*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache, &v29, -1, -1); /*0x5a5d28*/
            v9 = v27; /*0x5a5d2d*/
            v10 = v28; /*0x5a5d31*/
          }
          v43[1] = SHIWORD(v28); /*0x5a5d4b*/
          v43[0] = v10; /*0x5a5d56*/
          v44 = 4; /*0x5a5d5a*/
          v45 = 3; /*0x5a5d62*/
          if ( !(unsigned __int8)IsAreaClearMap(v43, 0, 0) ) /*0x5a5d6a*/
            goto LABEL_18; /*0x5a5d6a*/
          do /*0x5a5da0*/
          {
            v49 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5d7d*/
            LOWORD(v12) = Math::RoundToInt((double)v49 * 4.656612874161595e-10); /*0x5a5d98*/
          }
          while ( v12 > 1 ); /*0x5a5da0*/
          if ( v12 ) /*0x5a5da4*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, &v28, -1, -1); /*0x5a5db6*/
          else
LABEL_18:
            PlaceMapSeedClassBuildings(dword_ABBEC4, &v28, -1, -1); /*0x5a5dc6*/
          v6 -= 10; /*0x5a5dcb*/
          v25 += 10; /*0x5a5dce*/
        }
        else
        {
          v25 += 2; /*0x5a5ddb*/
          v6 -= 2; /*0x5a5de1*/
        }
      }
      while ( v6 > 3 ); /*0x5a5de6*/
      LOWORD(v3) = v38; /*0x5a5dec*/
      LOWORD(v4) = v39; /*0x5a5df0*/
      v5 = v41; /*0x5a5df4*/
    }
  }
  if ( v40 > 8 ) /*0x5a5e0a*/
  {
    v13 = v5 - 5; /*0x5a5e10*/
    v27 = v5 - 5; /*0x5a5e18*/
    v24 = v3 + 5; /*0x5a5e1c*/
    v25 = v4; /*0x5a5e21*/
    while ( v13 > 3 ) /*0x5a5e26*/
    {
      LODWORD(v20) = *FindClearPlacementCell(v57, &v24, &v38, 4); /*0x5a5e4d*/
      v5 = *globalHelper_0A7070(&v49, (__int16 *)&v20, &v38, 4); /*0x5a5e68*/
      v28 = v5; /*0x5a5e6a*/
      if ( v5 && ((LOWORD(v5) = v25, v24) || v25) && (LOWORD(v5) = v25, SHIWORD(v5) - v25 >= 6) ) /*0x5a5ea1*/
      {
        LOWORD(v5) = WORD1(v20); /*0x5a5ea7*/
        v22 = 0; /*0x5a5eac*/
        v14 = 1; /*0x5a5eb4*/
        v21 = 0; /*0x5a5eb6*/
        v26 = 0; /*0x5a5ebb*/
        if ( SWORD1(v20) < SHIWORD(v5) ) /*0x5a5ec0*/
        {
          while ( 1 ) /*0x5a5ec6*/
          {
            if ( v22 ) /*0x5a5ed1*/
            {
              v52.MapSeedClass_field_0x20 = (__int16)v20; /*0x5a607e*/
              v52.MapSeedClass_field_0x24 = (__int16)v5; /*0x5a6085*/
              v52.MapSeedClass_field_0x28 = 3; /*0x5a609b*/
              v52.MapSeedClass_field_0x2C = 1; /*0x5a60a2*/
              if ( (unsigned __int8)IsAreaClearMap(&v52.MapSeedClass_field_0x20, 0, 0) ) /*0x5a60a9*/
              {
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a60c6*/
                if ( v21 ) /*0x5a60d1*/
                {
                  if ( v26 ) /*0x5a60dd*/
                  {
                    HIWORD(v37) = WORD1(v20); /*0x5a60e9*/
                    LOWORD(v37) = v20 + 1; /*0x5a60ee*/
                    *(_DWORD *)v23 = v37; /*0x5a6108*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 5, v23, -1, -1); /*0x5a610c*/
                    v26 = 0; /*0x5a6111*/
                  }
                  else
                  {
                    HIWORD(v42) = WORD1(v20); /*0x5a6125*/
                    LOWORD(v42) = v20 + 1; /*0x5a612f*/
                    *(_DWORD *)v23 = v42; /*0x5a613a*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 4, v23, -1, -1); /*0x5a6147*/
                  }
                }
              }
              else
              {
                *(_DWORD *)v52.__pad_0 = (__int16)v20; /*0x5a615f*/
                v52.MapSeedClass_field_0x04 = SWORD1(v20); /*0x5a6168*/
                v52.MapSeedClass_field_0x08 = 3; /*0x5a616f*/
                v52.MapSeedClass_field_0x0C = 4; /*0x5a6176*/
                if ( v21 ) /*0x5a6181*/
                {
                  LOWORD(v36) = v20 + 1; /*0x5a618d*/
                  HIWORD(v36) = WORD1(v20) - 1; /*0x5a6197*/
                  *(_DWORD *)v23 = v36; /*0x5a61a0*/
                  PlaceMapSeedClassBuildings(dword_AA0E20 + 3, v23, -1, -1); /*0x5a61af*/
                  v21 = 0; /*0x5a61b4*/
                }
                if ( MapSeedClass::ValidateRectBounds(&v52) ) /*0x5a61c0*/
                {
                  v16 = SHIWORD(v28); /*0x5a61cd*/
                  if ( SHIWORD(v28) - SWORD1(v20) < 4 ) /*0x5a61de*/
                  {
                    LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 7, &v20, -1, -1); /*0x5a63e7*/
                    goto LABEL_73; /*0x5a63ec*/
                  }
                  v52.MapSeedClass_field_0x10 = (__int16)v20; /*0x5a61e9*/
                  v52.MapSeedClass_field_0x14 = SWORD1(v20) + 3; /*0x5a61fd*/
                  v52.MapSeedClass_field_0x18 = 3; /*0x5a6204*/
                  v52.MapSeedClass_field_0x1C = 2; /*0x5a620b*/
                  if ( (unsigned __int8)IsAreaClearMap(&v52.MapSeedClass_field_0x10, 0, 0) && v16 - SWORD1(v20) > 5 ) /*0x5a6229*/
                  {
                    v21 = 1; /*0x5a622b*/
                    v26 = 1; /*0x5a6230*/
                  }
                  PlaceMapSeedClassBuildings(g_CellTileTypeCache + 3, &v20, -1, -1); /*0x5a6246*/
                  v54[0] = (__int16)v20 - 1; /*0x5a6257*/
                  v54[1] = SWORD1(v20); /*0x5a6267*/
                  v54[2] = 1; /*0x5a626e*/
                  v54[3] = 3; /*0x5a6275*/
                  if ( (unsigned __int8)IsAreaClearMap(v54, 1, 0) ) /*0x5a627c*/
                  {
                    HIWORD(v35) = WORD1(v20); /*0x5a628f*/
                    LOWORD(v35) = v20 - 1; /*0x5a6294*/
                    *(_DWORD *)v23 = v35; /*0x5a62ae*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, v23, -1, -1); /*0x5a62b2*/
                  }
                  v56[0] = (__int16)v20 + 3; /*0x5a62c4*/
                  v56[1] = SWORD1(v20); /*0x5a62d4*/
                  v56[2] = 1; /*0x5a62db*/
                  v56[3] = 3; /*0x5a62e2*/
                  if ( (unsigned __int8)IsAreaClearMap(v56, 1, 0) ) /*0x5a62e9*/
                  {
                    HIWORD(v34) = WORD1(v20); /*0x5a62fe*/
                    LOWORD(v34) = v20 + 3; /*0x5a6303*/
                    *(_DWORD *)v23 = v34; /*0x5a631d*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, v23, -1, -1); /*0x5a6321*/
                  }
                  WORD1(v20) += 2; /*0x5a6326*/
                }
                else
                {
                  v33[0] = v20 - 0x10000; /*0x5a6340*/
                  *(_DWORD *)v23 = v20 - 0x10000; /*0x5a634e*/
                  PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, v23, -1, -1); /*0x5a635d*/
                  LOWORD(v32) = v20 + 1; /*0x5a636e*/
                  HIWORD(v32) = WORD1(v20) - 2; /*0x5a6377*/
                  *(_DWORD *)v23 = v32; /*0x5a6386*/
                  NeighbourContent = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x5a638f*/
                  if ( Value::InRange((Value *)NeighbourContent) && Value::InRange((Value *)NeighbourContent) ) /*0x5a639e*/
                  {
                    do /*0x5a63c4*/
                    {
                      NeighbourContent->Cell_field_0x38 = g_CellTileTypeCache + 1; /*0x5a63b1*/
                      NeighbourContent->__pad_FC[30] = 1; /*0x5a63b4*/
                      NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 0); /*0x5a63c0*/
                    }
                    while ( Value::InRange((Value *)NeighbourContent) ); /*0x5a63c4*/
                  }
                  v22 = 0; /*0x5a63cd*/
                }
              }
              goto LABEL_38; /*0x5a6116*/
            }
            v51[3] = 2; /*0x5a5ede*/
            v55[2] = 3; /*0x5a5ee7*/
            v51[2] = 3; /*0x5a5eee*/
            v51[0] = (__int16)v20; /*0x5a5f0a*/
            v51[1] = (__int16)v5; /*0x5a5f11*/
            v55[0] = (__int16)v20; /*0x5a5f18*/
            v55[1] = (__int16)v5 - 3; /*0x5a5f1f*/
            v55[3] = 4; /*0x5a5f26*/
            if ( SHIWORD(v28) - (__int16)v5 < 2 ) /*0x5a5f2d*/
              goto LABEL_73; /*0x5a5f2d*/
            if ( !v14 ) /*0x5a5f35*/
              goto LABEL_79; /*0x5a5f35*/
            v53[0] = (__int16)v20; /*0x5a5f3b*/
            v53[1] = (__int16)v5 - 3; /*0x5a5f42*/
            v53[2] = 3; /*0x5a5f53*/
            v53[3] = 4; /*0x5a5f5e*/
            if ( !(unsigned __int8)IsAreaClearMap(v53, 0, 0) ) /*0x5a5f65*/
              goto LABEL_79; /*0x5a5f65*/
            do /*0x5a5f96*/
            {
              *(_QWORD *)v43 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a5f7c*/
              LOWORD(v15) = Math::RoundToInt((double)*(__int64 *)v43 * 4.656612874161595e-10); /*0x5a5f8e*/
            }
            while ( v15 > 1 ); /*0x5a5f96*/
            if ( v15 ) /*0x5a5f9a*/
            {
              v30 = v20 - 196608; /*0x5a5fb3*/
              *(_DWORD *)v23 = v20 - 196608; /*0x5a5fbe*/
              PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v23, -1, -1); /*0x5a5fcb*/
            }
            else
            {
LABEL_79:
              if ( MapSeedClass::ValidateRectBounds((MapSeedClass *)v55) ) /*0x5a5fff*/
              {
                v31 = v20 - 196608; /*0x5a6019*/
                *(_DWORD *)v23 = v20 - 196608; /*0x5a6027*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 5, v23, -1, -1); /*0x5a6036*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a604a*/
              }
              else
              {
                if ( !(unsigned __int8)IsAreaClearMap(v51, 0, 0) ) /*0x5a6060*/
                  goto LABEL_38; /*0x5a6060*/
                PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, &v20, -1, -1); /*0x5a6076*/
              }
            }
            v22 = 1; /*0x5a5fd0*/
LABEL_38:
            v14 = 0; /*0x5a5fda*/
            LOWORD(v5) = ++WORD1(v20); /*0x5a5fe1*/
            if ( SWORD1(v20) >= SHIWORD(v28) ) /*0x5a5fed*/
            {
              if ( v21 ) /*0x5a63f7*/
              {
                LOWORD(v29) = v20 + 1; /*0x5a6403*/
                HIWORD(v29) = WORD1(v20) - 1; /*0x5a640e*/
                *(_DWORD *)v23 = v29; /*0x5a6422*/
                PlaceMapSeedClassBuildings(dword_AA0E20 + 3, v23, -1, -1); /*0x5a6426*/
              }
              break; /*0x5a6426*/
            }
          }
        }
        v50[0] = (__int16)v20; /*0x5a642b*/
        v50[1] = SWORD1(v20); /*0x5a6446*/
        v50[2] = 3; /*0x5a644d*/
        v50[3] = 4; /*0x5a6454*/
        if ( !(unsigned __int8)IsAreaClearMap(v50, 0, 0) ) /*0x5a645f*/
          goto LABEL_72; /*0x5a645f*/
        do /*0x5a648f*/
        {
          *(_QWORD *)v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a6472*/
          LOWORD(v18) = Math::RoundToInt((double)*(__int64 *)v46 * 4.656612874161595e-10); /*0x5a6487*/
        }
        while ( v18 > 1 ); /*0x5a648f*/
        if ( v18 ) /*0x5a6493*/
          LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, &v20, -1, -1); /*0x5a64a6*/
        else
LABEL_72:
          LOWORD(v5) = PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, &v20, -1, -1); /*0x5a64bd*/
LABEL_73:
        v13 = v27 - 10; /*0x5a64c9*/
        v24 += 10; /*0x5a64d4*/
        v27 -= 10; /*0x5a64da*/
      }
      else
      {
        v24 += 2; /*0x5a64e0*/
        v13 -= 2; /*0x5a64e6*/
        v27 = v13; /*0x5a64e9*/
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
    *(_QWORD *)&v35[0] = (unsigned int)Random::State(&unk_ABE890); /*0x5a6573*/
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
  v40 = &DynamicVectorClass<char *>::`vftable'; /*0x5a65ba*/
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
  v11 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a6626*/
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
        v36 = (unsigned int)Random::State(&unk_ABE890); /*0x5a667f*/
        v13 = Math::RoundToInt((double)v36 * v35[0] * 2.328306437080797e-10); /*0x5a6695*/
        v32 = v13; /*0x5a669c*/
      }
      while ( v13 > v12 ); /*0x5a66a0*/
      IndexByName = BuildingTypeClass::FindIndexByName(*((void **)Block + v13)); /*0x5a66b5*/
      v15 = __2_YAPAXI_Z(0x720u); /*0x5a66b7*/
      v16 = v15 ? BuildingClass::Construct((int)v15, *((_DWORD *)dword_A83C6C + IndexByName), Owner) : 0;
      v28 = 0; /*0x5a66db*/
      v27 = 0; /*0x5a66df*/
      while ( v28 < 60 ) /*0x5a6701*/
      {
        v17 = *(_DWORD *)(v1 + 16) - 1; /*0x5a670e*/
        v37 = *(unsigned int *)(v1 + 16); /*0x5a6712*/
        v35[0] = (double)v37; /*0x5a671a*/
        do /*0x5a6745*/
        {
          v38 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6728*/
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
          v21 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v35); /*0x5a67a7*/
          if ( !CellClass::InBounds(v21) && !CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21[57]
            || v21[59] == 3
            || !Type::CheckAmbiguity(&dword_87F7E8, (int)v21, 1) )
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
  v40 = &VectorClass<char *>::`vftable'; /*0x5a68f5*/
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

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&unk_ABE890); /*0x5a694a*/
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
        v23 = (unsigned int)Random::State(&unk_ABE890); /*0x5a69a2*/
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
        v8 = (_DWORD *)UnitClass::Construct((int)v9, *((_DWORD *)dword_A83CE4 + Index), Owner); /*0x5a6a2b*/
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (_DWORD *)InfantryClass::Construct((int)v6, *((_DWORD *)dword_A8E34C + ExitCellByName), Owner); /*0x5a69f6*/
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
          v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v18) + 57) )
        {
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6ad0*/
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
char __thiscall sub_5A6BA0(ObjectClass *this)
{
  int vtable0_high; // eax
  int vtable0_low; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  CellLand *v8; // eax
  __int16 v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  vtable0_high = SHIWORD(this->AbstractClass); /*0x5a6ba3*/
  vtable0_low = SLOWORD(this->AbstractClass); /*0x5a6ba7*/
  v3 = vtable0_low + 7; /*0x5a6bae*/
  v4 = vtable0_low - 7; /*0x5a6bb1*/
  v5 = vtable0_high - 7; /*0x5a6bb6*/
  v11 = vtable0_low + 7; /*0x5a6bb9*/
  v6 = vtable0_high + 7; /*0x5a6bbd*/
  if ( __OFSUB__(vtable0_low - 7, vtable0_low + 7) ) /*0x5a6bc0*/
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
    v8 = (CellLand *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x5a6bdc*/
    if ( (unsigned __int8)CellLand::IsBuildable(v8) ) /*0x5a6be3*/
      return 0; /*0x5a6bfa*/
    if ( ++v7 >= v6 ) /*0x5a6bef*/
    {
      v3 = v11; /*0x5a6bf1*/
      goto LABEL_6; /*0x5a6bf1*/
    }
  }
}



// ==== 0x005A6C10  PlaceMapSeedClassBuildings  this=MapSeed  sig=csp ====
int __fastcall MapSeedClass_PlaceBuildings(int a1, _WORD *a2, int a3, int a4)
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
  _WORD *v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]

  v19 = a2; /*0x5a6c1a*/
  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a6c1e*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a6c26*/
  v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = v4[186]; /*0x5a6c38*/
    v6 = 0; /*0x5a6c3e*/
    v17 = 0; /*0x5a6c42*/
    if ( result > 0 ) /*0x5a6c46*/
    {
      v7 = dword_ABED04; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = v19[1] + v6; /*0x5a6c6e*/
          LOWORD(v18) = i + *v19; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          v16 = v18; /*0x5a6c83*/
          v10 = v9; /*0x5a6c8a*/
          v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > dword_ABED08 ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x5a6cc4*/
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
                if ( dword_ABED10 ) /*0x5a6d1b*/
                  *((_DWORD *)dword_ABED10 + 20 * (__int16)v16 + 20 * g_MapCellWidth * SHIWORD(v16) + 14) = a3; /*0x5a6d3a*/
              }
              v7 = dword_ABED04; /*0x5a6d3e*/
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
_DWORD *__stdcall FindClearPlacementCell(_DWORD *a1, __int16 *a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  __int16 v11; // ax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _WORD *v18; // esi
  __int16 v19; // cx
  int v20; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  __int64 v24; // [esp+20h] [ebp-18h]
  double v25; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  int v28; // [esp+40h] [ebp+8h]
  int v29; // [esp+44h] [ebp+Ch]
  int v30; // [esp+44h] [ebp+Ch]
  int v31; // [esp+48h] [ebp+10h]

  v4 = *(_DWORD *)a2; /*0x5a6d8d*/
  v5 = 0; /*0x5a6d91*/
  LOBYTE(v24) = a4 == 4; /*0x5a6d96*/
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
    if ( (__int16)v20 >= *a3 + a3[2] || SHIWORD(v20) >= a3[1] + a3[3] ) /*0x5a6e24*/
    {
      *a1 = 0; /*0x5a6e90*/
      return a1; /*0x5a6e96*/
    }
    if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(v29) = v20 + LOWORD(dword_89F688[v9]); /*0x5a6e65*/
    HIWORD(v29) = HIWORD(v20) + HIWORD(dword_89F688[v9]); /*0x5a6e6a*/
    v20 = v29; /*0x5a6e73*/
  }
  v11 = v20; /*0x5a6e99*/
  while ( 1 ) /*0x5a6e9d*/
  {
    if ( v11 >= *a3 + a3[2] || SHIWORD(v20) >= a3[1] + a3[3] ) /*0x5a6ebc*/
    {
      *a1 = 0; /*0x5a6f4c*/
      return a1; /*0x5a6f52*/
    }
    LODWORD(v25) = v5 + v11; /*0x5a6ec0*/
    HIDWORD(v25) = v23 + SHIWORD(v20); /*0x5a6ece*/
    v26 = v6 + v21; /*0x5a6edc*/
    v27 = v7 + v22; /*0x5a6ee4*/
    if ( IsAreaClearMap((int *)&v25, v24, v24) ) /*0x5a6eed*/
      break; /*0x5a6eed*/
    v12 = a4 & 7; /*0x5a6efa*/
    HIWORD(v30) = HIWORD(v20) + HIWORD(dword_89F688[v12]); /*0x5a6f23*/
    v11 = v20 + LOWORD(dword_89F688[v12]); /*0x5a6f28*/
    LOWORD(v30) = v11; /*0x5a6f1e*/
    v20 = v30; /*0x5a6f2c*/
  }
  v13 = v20; /*0x5a6f67*/
  v14 = (__int16)v20 - *a2; /*0x5a6f6e*/
  if ( SHIWORD(v20) - a2[1] > v14 ) /*0x5a6f72*/
    v14 = SHIWORD(v20) - a2[1]; /*0x5a6f74*/
  if ( v14 > 0 ) /*0x5a6f78*/
  {
    v24 = (unsigned int)(v14 + 1); /*0x5a6f89*/
    v25 = (double)v24; /*0x5a6f91*/
    do /*0x5a6fc0*/
    {
      v24 = (unsigned int)Random::State(&unk_ABE890); /*0x5a6f9f*/
      v15 = Math::RoundToInt((double)v24 * v25 * 2.328306437080797e-10); /*0x5a6fb9*/
    }
    while ( v15 > (unsigned int)v14 ); /*0x5a6fc0*/
    v28 = v15; /*0x5a6fc4*/
    if ( v15 > 0 ) /*0x5a6fc8*/
    {
      v16 = v21 + v6; /*0x5a6fe0*/
      v17 = v22 + v7; /*0x5a6fe2*/
      v18 = (_WORD *)(4 * (((_BYTE)a4 - 4) & 7) + 9041544); /*0x5a6fe4*/
      v19 = v20; /*0x5a6feb*/
      while ( 1 ) /*0x5a7000*/
      {
        LOWORD(v31) = v19 + *v18; /*0x5a7000*/
        HIWORD(v31) = HIWORD(v20) + v18[1]; /*0x5a700b*/
        LODWORD(v25) = v5 + (__int16)v31; /*0x5a7018*/
        HIDWORD(v25) = v23 + SHIWORD(v31); /*0x5a7022*/
        v26 = v16; /*0x5a7026*/
        v27 = v17; /*0x5a702a*/
        if ( !IsAreaClearMap((int *)&v25, 0, 0) ) /*0x5a702e*/
          break; /*0x5a702e*/
        v19 = v31; /*0x5a703b*/
        v20 = v31; /*0x5a7040*/
        if ( --v28 <= 0 ) /*0x5a704a*/
        {
          *a1 = v31; /*0x5a7053*/
          return a1; /*0x5a7059*/
        }
      }
    }
    v13 = v20; /*0x5a705c*/
  }
  *a1 = v13; /*0x5a7067*/
  return a1; /*0x5a6e7b*/
}



// ==== 0x005A7070  globalHelper_0A7070  this=MapSeedClass  sig=csp ====
_DWORD *__stdcall sub_5A7070(_DWORD *a1, __int16 *a2, _DWORD *a3, int a4)
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
  int v19; // [esp+1Ch] [ebp-28h]
  __int64 v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-18h]
  __int16 v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+38h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-8h]
  int v26; // [esp+40h] [ebp-4h]
  int v27; // [esp+54h] [ebp+10h]
  int v28; // [esp+54h] [ebp+10h]

  v4 = *(_DWORD *)a2; /*0x5a7080*/
  v21 = *(_DWORD *)a2; /*0x5a708e*/
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
    v19 = 6; /*0x5a70c0*/
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
  while ( (__int16)v4 < a3[2] + *a3 + 1 ) /*0x5a70f2*/
  {
    if ( SHIWORD(v21) >= a3[3] + a3[1] + 1 ) /*0x5a7117*/
      break; /*0x5a7117*/
    v23 = v16 + (__int16)v4; /*0x5a711f*/
    v24 = v17 + SHIWORD(v21); /*0x5a712d*/
    v25 = v5 + v18; /*0x5a713b*/
    v26 = v6 + v19; /*0x5a7143*/
    if ( !IsAreaClearMap(&v23, a4 == 4, a4 == 4) ) /*0x5a714c*/
      break; /*0x5a714c*/
    v7 = a4 & 7; /*0x5a7159*/
    LOWORD(v4) = v4 + LOWORD(dword_89F688[v7]); /*0x5a7185*/
    HIWORD(v21) += HIWORD(dword_89F688[v7]); /*0x5a7189*/
  }
  v8 = ((_BYTE)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = HIWORD(v21) + HIWORD(dword_89F688[v8]); /*0x5a71c1*/
  LOWORD(v27) = v4 + LOWORD(dword_89F688[v8]); /*0x5a71c6*/
  v10 = v27; /*0x5a71cb*/
  v11 = (__int16)v27 - *a2; /*0x5a71d7*/
  v22 = HIWORD(v27); /*0x5a71db*/
  if ( v11 <= SHIWORD(v27) - a2[1] ) /*0x5a71df*/
    v11 = SHIWORD(v27) - a2[1]; /*0x5a71e1*/
  if ( v11 > 6 ) /*0x5a71e6*/
  {
    do /*0x5a720e*/
    {
      v20 = (unsigned int)Random::State(&unk_ABE890); /*0x5a71f4*/
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
  *a1 = v10; /*0x5a723d*/
  return a1; /*0x5a723f*/
}



// ==== 0x005A7250  IsAreaClearMap  this=-  sig=csp ====
int __fastcall IsAreaClearMap(int *a1, char a2, char a3)
{
  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int *v12; // esi
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  result = *a1; /*0x5a7262*/
  v5 = (__int16)*a1; /*0x5a7268*/
  v14 = a1[1]; /*0x5a726f*/
  v15 = (__int16)v14 + v5; /*0x5a7278*/
  if ( v15 <= dword_ABED04 ) /*0x5a727c*/
    goto LABEL_31; /*0x5a727c*/
  if ( v5 - (__int16)v14 >= dword_ABED04 ) /*0x5a7288*/
    goto LABEL_31; /*0x5a7288*/
  if ( (__int16)v14 - v5 >= dword_ABED04 ) /*0x5a7292*/
    goto LABEL_31; /*0x5a7292*/
  if ( v15 > dword_ABED08 ) /*0x5a72a4*/
    goto LABEL_31; /*0x5a72a4*/
  v6 = a1[2]; /*0x5a72aa*/
  v7 = (__int16)(result + v6 - 1); /*0x5a72b1*/
  v15 = (__int16)v14 + v7; /*0x5a72bc*/
  if ( v15 <= dword_ABED04 /*0x5a7377*/
    || v7 - (__int16)v14 >= dword_ABED04
    || (__int16)v14 - v7 >= dword_ABED04
    || v15 > dword_ABED08
    || (v16 = a1[3] + v14 - 1, v15 = (__int16)v16 + (__int16)result, v15 <= dword_ABED04)
    || (__int16)result - (__int16)v16 >= dword_ABED04
    || (__int16)v16 - (__int16)result >= dword_ABED04
    || v15 > dword_ABED08
    || (v8 = (__int16)(result + v6 - 1), v9 = (__int16)v16, v16 = (__int16)v16 + v8, v16 <= dword_ABED04)
    || v8 - v9 >= dword_ABED04
    || v9 - v8 >= dword_ABED04
    || v16 > dword_ABED08 )
  {
LABEL_31:
    LOBYTE(result) = 0; /*0x5a742a*/
  }
  else
  {
    v10 = v14; /*0x5a7384*/
    if ( v14 < v14 + a1[3] ) /*0x5a738a*/
    {
      do /*0x5a7418*/
      {
        v11 = result; /*0x5a7390*/
        if ( result < v6 + result ) /*0x5a7397*/
        {
          do /*0x5a73a3*/
          {
            LOWORD(v14) = v11; /*0x5a73a3*/
            HIWORD(v14) = v10; /*0x5a73a8*/
            v12 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a73b2*/
            if ( sub_4866D0(v12) ) /*0x5a73b6*/
            {
              if ( !a2 ) /*0x5a73c5*/
                goto LABEL_31; /*0x5a73c5*/
            }
            else if ( sub_4866F0(v12) ) /*0x5a73cb*/
            {
              if ( !a3 ) /*0x5a73da*/
                goto LABEL_31; /*0x5a73da*/
            }
            else if ( !(unsigned __int8)Cell::IsEmpty(v12) && !(unsigned __int8)CellClass::InMapDataRange(v12) ) /*0x5a73eb*/
            {
              result = CellClass::InBounds(v12); /*0x5a73f6*/
              if ( !(_BYTE)result ) /*0x5a73fd*/
                goto LABEL_31; /*0x5a73fd*/
            }
            v6 = a1[2]; /*0x5a73ff*/
            result = *a1; /*0x5a7402*/
            ++v11; /*0x5a7405*/
          }
          while ( v11 < v6 + *a1 ); /*0x5a73a3*/
        }
        ++v10; /*0x5a740d*/
      }
      while ( v10 < a1[3] + a1[1] ); /*0x5a7418*/
    }
    LOBYTE(result) = 1; /*0x5a7421*/
  }
  return result; /*0x5a741e*/
}



// ==== 0x005A7440  IsMapClassAreaUniform  this=RandomMap  sig=csp ====
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
  if ( v14 > dword_ABED04 && v5 - (__int16)v4 < dword_ABED04 && (__int16)v4 - v5 < dword_ABED04 && v14 <= dword_ABED08 ) /*0x5a748e*/
  {
    v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (__int16)v4 + (__int16)v15; /*0x5a74aa*/
    if ( v14 > dword_ABED04 /*0x5a74d6*/
      && (__int16)v15 - (__int16)v4 < dword_ABED04
      && (__int16)v4 - (__int16)v15 < dword_ABED04
      && v14 <= dword_ABED08 )
    {
      v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (__int16)v16 + (__int16)v3; /*0x5a74f2*/
      if ( v14 > dword_ABED04 /*0x5a751e*/
        && (__int16)v3 - (__int16)v16 < dword_ABED04
        && (__int16)v16 - (__int16)v3 < dword_ABED04
        && v14 <= dword_ABED08 )
      {
        v6 = (__int16)v16; /*0x5a7529*/
        v16 = (__int16)v16 + (__int16)v15; /*0x5a7533*/
        if ( v16 > dword_ABED04 /*0x5a755f*/
          && (__int16)v15 - v6 < dword_ABED04
          && v6 - (__int16)v15 < dword_ABED04
          && v16 <= dword_ABED08 )
        {
          LOWORD(v14) = v3; /*0x5a756f*/
          HIWORD(v14) = v4; /*0x5a7574*/
          v7 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a7579*/
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
            v11 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x5a75bd*/
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
_DWORD *__fastcall sub_5A7640(_DWORD *a1, int a2)
{
  __int16 v2; // ax
  __int16 v3; // di
  __int16 v4; // bp
  int v5; // esi
  __int16 v6; // bx
  bool v7; // zf
  int *v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = 0; /*0x5a7643*/
  v3 = 999; /*0x5a764d*/
  v4 = 0; /*0x5a7651*/
  v5 = *(_DWORD *)(a2 + 16) - 1; /*0x5a7654*/
  v6 = 999; /*0x5a7655*/
  if ( v5 >= 0 ) /*0x5a7658*/
  {
    v9 = (int *)(*(_DWORD *)(a2 + 4) + 4 * v5); /*0x5a7661*/
    v10 = *(_DWORD *)(a2 + 16); /*0x5a7665*/
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
      v7 = v10 == 1; /*0x5a76a3*/
      --v9; /*0x5a76a4*/
      --v10; /*0x5a76a8*/
    }
    while ( !v7 ); /*0x5a76ac*/
  }
  *a1 = v3; /*0x5a76bb*/
  a1[1] = v6; /*0x5a76c1*/
  a1[2] = v2 - v3 + 1; /*0x5a76c8*/
  a1[3] = v4 - v6 + 1; /*0x5a76cb*/
  return a1; /*0x5a76c7*/
}



// ==== 0x005A76E0  MapSeedClass::ValidateRectBounds  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::ValidateRectBounds(MapSeedClass *this)
{
  int v2; // ecx
  int MapSeedClass_field_0x04; // edi
  int v4; // edx
  int v5; // esi
  Value *v6; // eax
  int Value_field_00; // edx
  int v8; // esi
  __int16 v9; // dx
  CellClass *v10; // edi
  __int16 v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x5a76ee*/
  MapSeedClass_field_0x04 = this->MapSeedClass_field_0x04; /*0x5a76f0*/
  *(_DWORD *)v12 = (__int16)MapSeedClass_field_0x04 + (__int16)v2; /*0x5a76fe*/
  if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a772a*/
    && (__int16)v2 - (__int16)MapSeedClass_field_0x04 < g_MissionQueueFrame.localVariables[160]
    && (__int16)MapSeedClass_field_0x04 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
    && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
  {
    v13 = this->MapSeedClass_field_0x08 + v2 - 1; /*0x5a7737*/
    *(_DWORD *)v12 = (__int16)MapSeedClass_field_0x04 + (__int16)v13; /*0x5a7746*/
    if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a7772*/
      && (__int16)v13 - (__int16)MapSeedClass_field_0x04 < g_MissionQueueFrame.localVariables[160]
      && (__int16)MapSeedClass_field_0x04 - (__int16)v13 < g_MissionQueueFrame.localVariables[160]
      && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
    {
      v14 = this->MapSeedClass_field_0x0C + MapSeedClass_field_0x04 - 1; /*0x5a7782*/
      *(_DWORD *)v12 = (__int16)v14 + (__int16)v2; /*0x5a778e*/
      if ( *(int *)v12 > g_MissionQueueFrame.localVariables[160] /*0x5a77ba*/
        && (__int16)v2 - (__int16)v14 < g_MissionQueueFrame.localVariables[160]
        && (__int16)v14 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
        && *(int *)v12 <= g_MissionQueueFrame.localVariables[161] )
      {
        v4 = (__int16)v14; /*0x5a77c5*/
        v14 = (__int16)v14 + (__int16)v13; /*0x5a77cf*/
        if ( v14 > g_MissionQueueFrame.localVariables[160] /*0x5a77fa*/
          && (__int16)v13 - v4 < g_MissionQueueFrame.localVariables[160]
          && v4 - (__int16)v13 < g_MissionQueueFrame.localVariables[160]
          && v14 <= g_MissionQueueFrame.localVariables[161] )
        {
          if ( __OFSUB__(MapSeedClass_field_0x04, MapSeedClass_field_0x04 + 3) ) /*0x5a7805*/
          {
LABEL_24:
            v8 = *(_DWORD *)this->__pad_0; /*0x5a785b*/
            if ( *(_DWORD *)this->__pad_0 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a7862*/
              return 1; /*0x5a78b9*/
            while ( 1 ) /*0x5a786b*/
            {
              v9 = this->MapSeedClass_field_0x04 + 3; /*0x5a786b*/
              v12[0] = v8; /*0x5a7874*/
              v12[1] = v9; /*0x5a7879*/
              v10 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x5a7883*/
              if ( !(unsigned __int8)CellClass::InBounds(v10) /*0x5a789d*/
                && !(unsigned __int8)Cell::IsEmpty((Cell *)v10)
                && !(unsigned __int8)CellClass::InMapDataRange(v10) )
              {
                break; /*0x5a789d*/
              }
              if ( ++v8 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a78ae*/
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
              if ( ++MapSeedClass_field_0x04 >= this->MapSeedClass_field_0x04 + 3 ) /*0x5a7859*/
                goto LABEL_24; /*0x5a7859*/
            }
            while ( 1 ) /*0x5a7814*/
            {
              v12[0] = v5; /*0x5a7814*/
              v12[1] = MapSeedClass_field_0x04; /*0x5a781f*/
              v6 = (Value *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x5a7824*/
              Value_field_00 = v6[14].Value_field_00; /*0x5a7829*/
              if ( (Value_field_00 < g_CellTileTypeCache || Value_field_00 > g_CellTileTypeCache + 1) /*0x5a783d*/
                && !Value::InRange(v6) )
              {
                break; /*0x5a783d*/
              }
              v2 = *(_DWORD *)this->__pad_0; /*0x5a7846*/
              if ( ++v5 >= *(_DWORD *)this->__pad_0 + 3 ) /*0x5a784e*/
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
        v33 = (unsigned int)Random::State(&unk_ABE890); /*0x5a79dd*/
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
            v32 = (unsigned int)Random::State(&unk_ABE890); /*0x5a7a7b*/
            v16 = Math::RoundToInt((double)v32 * 0.000000001396983862248478); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          v17 = 0; /*0x5a7aa1*/
          v18 = v16 + dword_AA10A4 + 8; /*0x5a7aa3*/
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
char __thiscall CellClass::ProcessUpdate(CellClass *this)
{
  int v2; // eax
  char *foggedObjects; // ebx
  int v4; // esi
  CellClass *bridgeOwnerCell; // edx
  int v6; // edi
  int v7; // edi
  int v8; // esi
  char *v9; // ecx
  int v10; // edi
  void *v11; // esi
  int v12; // ebx
  char *v14; // [esp+10h] [ebp-Ch]
  __int16 v15[2]; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v2 = this->mapCoords[0]; /*0x5a7b4f*/
  foggedObjects = (char *)this->foggedObjects; /*0x5a7b52*/
  v4 = (__int16)this->mapCoords[0]; /*0x5a7b55*/
  v14 = foggedObjects; /*0x5a7b5b*/
  *(_DWORD *)v15 = (__int16)foggedObjects + v4; /*0x5a7b64*/
  if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7b90*/
    && v4 - (__int16)foggedObjects < g_MissionQueueFrame.localVariables[160]
    && (__int16)foggedObjects - v4 < g_MissionQueueFrame.localVariables[160]
    && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
  {
    bridgeOwnerCell = this->bridgeOwnerCell; /*0x5a7b96*/
    v6 = (__int16)((_WORD)bridgeOwnerCell + v2 - 1); /*0x5a7b9d*/
    *(_DWORD *)v15 = (__int16)foggedObjects + v6; /*0x5a7ba8*/
    if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7bd4*/
      && v6 - (__int16)foggedObjects < g_MissionQueueFrame.localVariables[160]
      && (__int16)foggedObjects - v6 < g_MissionQueueFrame.localVariables[160]
      && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
    {
      v16 = (int)&foggedObjects[this->unknown30 - 1]; /*0x5a7be5*/
      *(_DWORD *)v15 = (__int16)v16 + (__int16)v2; /*0x5a7bf4*/
      if ( *(int *)v15 > g_MissionQueueFrame.localVariables[160] /*0x5a7c20*/
        && (__int16)v2 - (__int16)v16 < g_MissionQueueFrame.localVariables[160]
        && (__int16)v16 - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
        && *(int *)v15 <= g_MissionQueueFrame.localVariables[161] )
      {
        v7 = (__int16)((_WORD)bridgeOwnerCell + v2 - 1); /*0x5a7c2a*/
        v8 = (__int16)v16; /*0x5a7c2d*/
        v16 = (__int16)v16 + v7; /*0x5a7c37*/
        if ( v16 > g_MissionQueueFrame.localVariables[160] /*0x5a7c63*/
          && v7 - v8 < g_MissionQueueFrame.localVariables[160]
          && v8 - v7 < g_MissionQueueFrame.localVariables[160]
          && v16 <= g_MissionQueueFrame.localVariables[161] )
        {
          v9 = foggedObjects; /*0x5a7c69*/
          if ( (int)foggedObjects >= (int)&foggedObjects[this->unknown30] ) /*0x5a7c78*/
            return 1; /*0x5a7cf2*/
          while ( 1 ) /*0x5a7c7a*/
          {
            v10 = v2; /*0x5a7c7a*/
            if ( v2 < (int)bridgeOwnerCell->mapCoords + v2 ) /*0x5a7c81*/
              break; /*0x5a7c81*/
LABEL_24:
            v14 = ++v9; /*0x5a7ce3*/
            if ( (int)v9 >= (int)this->foggedObjects + this->unknown30 ) /*0x5a7ce7*/
              return 1; /*0x5a7ce7*/
          }
          while ( 1 ) /*0x5a7c87*/
          {
            v15[1] = (__int16)v9; /*0x5a7c87*/
            v15[0] = v10; /*0x5a7c92*/
            v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x5a7c9c*/
            v12 = *((_DWORD *)v11 + 14); /*0x5a7ca0*/
            if ( !(unsigned __int8)CellClass::InBounds((CellClass *)v11) /*0x5a7cba*/
              && (v12 < dword_AA10A4 || v12 > dword_AA10A4 + 7) )
            {
              break; /*0x5a7cba*/
            }
            if ( *((_DWORD *)v11 + 57) ) /*0x5a7cbc*/
              break; /*0x5a7cbc*/
            bridgeOwnerCell = this->bridgeOwnerCell; /*0x5a7cc6*/
            v2 = this->mapCoords[0]; /*0x5a7cc9*/
            ++v10; /*0x5a7ccc*/
            v9 = v14; /*0x5a7cd2*/
            if ( v10 >= (int)bridgeOwnerCell->mapCoords + this->mapCoords[0] ) /*0x5a7cd6*/
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

  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7d0b*/
  v6 = *v4; /*0x5a7d13*/
  v19 = a2; /*0x5a7d15*/
  v16 = v4; /*0x5a7d19*/
  v20 = (*(int (__thiscall **)(_DWORD *))(v6 + 156))(v4); /*0x5a7d25*/
  if ( v20 ) /*0x5a7d29*/
  {
    v7 = 0; /*0x5a7d35*/
    if ( (int)v4[186] > 0 ) /*0x5a7d39*/
    {
      v8 = dword_ABED04; /*0x5a7d3f*/
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
        if ( v12 <= v8 || (__int16)v18 - v11 >= v8 || v11 - (__int16)v18 >= v8 || v12 > dword_ABED08 ) /*0x5a7da5*/
        {
          if ( a4 ) /*0x5a7e6d*/
            return 0; /*0x5a7e6d*/
        }
        else
        {
          v13 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v17); /*0x5a7dba*/
          v14 = *(_DWORD *)(v20 + 4 * (v9 + v7 * v16[185]) + 16); /*0x5a7dcf*/
          if ( v14 /*0x5a7e27*/
            && (!Cell::IsEmpty(v13) && !sub_4863A0(v13)
             || *((unsigned __int8 *)v13 + 284) != *(char *)(v14 + 42)
             || a3 && *((_BYTE *)dword_ABED10 + 80 * (__int16)v17 + 80 * g_MapCellWidth * SHIWORD(v17) + 70)) )
          {
            return 0; /*0x5a7e7a*/
          }
          v8 = dword_ABED04; /*0x5a7e2f*/
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

  v2 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 156))(v2); /*0x5a7ea9*/
  v13 = result; /*0x5a7eb1*/
  if ( result ) /*0x5a7eb5*/
  {
    result = v2[186]; /*0x5a7ebb*/
    v4 = 0; /*0x5a7ec1*/
    if ( result > 0 ) /*0x5a7ec5*/
    {
      v5 = dword_ABED04; /*0x5a7ecd*/
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
            if ( (__int16)v9 - SHIWORD(v9) >= v5 || SHIWORD(v9) - (__int16)v9 >= v5 || v7 > dword_ABED08 ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(_DWORD *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((_BYTE *)v8 + 282) = 0; /*0x5a7f5a*/
              }
              v5 = dword_ABED04; /*0x5a7f61*/
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
  v4 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7fac*/
  v14 = v4; /*0x5a7fb5*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a7fbb*/
  v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      v6 = dword_ABED04; /*0x5a7fe3*/
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
            if ( v10 - v11 >= v6 || v11 - v10 >= v6 || v12 > dword_ABED08 ) /*0x5a802f*/
            {
              result = v13; /*0x5a806a*/
            }
            else
            {
              result = v13; /*0x5a8031*/
              if ( *(_DWORD *)(v16 + 4 * (i + v13 * v7) + 16) ) /*0x5a803e*/
              {
                *((_BYTE *)dword_ABED10 + 80 * v10 + 80 * g_MapCellWidth * v11 + 70) = a3; /*0x5a805e*/
                v6 = dword_ABED04; /*0x5a8062*/
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
int __thiscall RandomMap::PlaceMapSeedBuildings(RandomMap *this)
{
  int v1; // edx
  int v3; // ecx
  char *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  char *v8; // eax
  int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // esi
  _WORD *v17; // eax
  Cell *v18; // eax
  int v19; // eax
  ObjectClass *v20; // esi
  __int16 v21[2]; // [esp+10h] [ebp-4Ch] BYREF
  int v22; // [esp+14h] [ebp-48h]
  int v23; // [esp+18h] [ebp-44h]
  int v24; // [esp+1Ch] [ebp-40h]
  __int16 v25[2]; // [esp+20h] [ebp-3Ch] BYREF
  double v26; // [esp+24h] [ebp-38h]
  int v27; // [esp+2Ch] [ebp-30h]
  int v28; // [esp+30h] [ebp-2Ch]
  ObjectClass *v29; // [esp+34h] [ebp-28h]
  __int16 v30; // [esp+38h] [ebp-24h] BYREF
  __int64 v31; // [esp+3Ch] [ebp-20h]
  __int64 v32; // [esp+44h] [ebp-18h]
  int v33[4]; // [esp+4Ch] [ebp-10h] BYREF

  v1 = dword_ABC1D4; /*0x5a80b3*/
  v29 = (ObjectClass *)this; /*0x5a80c1*/
  v3 = 0; /*0x5a80c5*/
  v4 = &g_MissionQueueFrame.globalVariables[248]; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    v5 = v1 + v3++; /*0x5a80cc*/
    *(_DWORD *)v4 = v5; /*0x5a80d0*/
    v4 += 12; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&g_MissionQueueFrame.globalVariables[1460] ); /*0x5a80da*/
  v6 = dword_ABBEC0; /*0x5a80dc*/
  v7 = 0; /*0x5a80e2*/
  v8 = &g_MissionQueueFrame.globalVariables[1460]; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    v9 = v6 + v7++; /*0x5a80e9*/
    *(_DWORD *)v8 = v9; /*0x5a80ed*/
    v8 += 12; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)&g_MissionQueueFrame.globalVariables[1556] ); /*0x5a80f7*/
  LOWORD(v10) = Math::RoundToInt((double)*(int *)&this->__pad_4C[20] + 0.49 + (double)*(int *)&this->__pad_4C[20] + 0.49); /*0x5a8104*/
  v28 = v10; /*0x5a8109*/
  v27 = 0; /*0x5a810d*/
  v23 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v28; /*0x5a8115*/
    if ( v23 >= v28 ) /*0x5a811f*/
      break; /*0x5a811f*/
    v21[0] = 0; /*0x5a8125*/
    v21[1] = 0; /*0x5a812a*/
    v22 = 0; /*0x5a812f*/
LABEL_8:
    v12 = g_MapCellWidth; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
      v13 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
        v14 = v12 * v12 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          v31 = v14 + 1; /*0x5a814a*/
          v26 = (double)v31; /*0x5a8152*/
          do /*0x5a817f*/
          {
            v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8160*/
            LOWORD(v15) = Math::RoundToInt((double)v32 * v26 * 2.328306437080797e-10); /*0x5a8176*/
            v16 = v15; /*0x5a817b*/
          }
          while ( v15 > v14 ); /*0x5a817f*/
          v17 = CellStruct::Set((CellStruct *)&v30, 0, 0); /*0x5a8187*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a819b*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v16),
                                   v17) );
        ++v13; /*0x5a81af*/
        *(_DWORD *)v25 = *(_DWORD *)(80 * v16 + g_MissionQueueFrame.localVariables[163]); /*0x5a81b9*/
        if ( v13 > 200 ) /*0x5a81bd*/
        {
          v24 = 0; /*0x5a81e4*/
          v19 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x5a81c9*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v12 = g_MapCellWidth; /*0x5a81d9*/
      }
      v19 = *(_DWORD *)v25; /*0x5a81f4*/
LABEL_19:
      LODWORD(v26) = v19; /*0x5a81fc*/
      *(_DWORD *)v21 = v19; /*0x5a8201*/
      if ( ++v22 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v12 = g_MapCellWidth; /*0x5a8213*/
      if ( !*(_BYTE *)(80 * ((__int16)v19 + g_MapCellWidth * SWORD1(v26)) + g_MissionQueueFrame.localVariables[163] + 69) ) /*0x5a822f*/
      {
        v33[0] = (__int16)v19 - 4; /*0x5a823f*/
        v33[1] = SWORD1(v26) - 4; /*0x5a8243*/
        v33[2] = 8; /*0x5a8253*/
        v33[3] = 8; /*0x5a8257*/
        if ( !(unsigned __int8)IsAreaClearMap(v33, 0, 0) /*0x5a8274*/
          || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v21, 1) )
        {
          goto LABEL_8; /*0x5a827b*/
        }
        break; /*0x5a827b*/
      }
    }
    if ( v22 != 20 ) /*0x5a8286*/
    {
      v20 = v29; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings((int *)v21) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v20, v21); /*0x5a82a3*/
        PlaceNeutralCreeps(v21); /*0x5a82af*/
        ++v23; /*0x5a82b4*/
      }
    }
    result = ++v27; /*0x5a82bc*/
  }
  while ( v27 < 10 ); /*0x5a82c4*/
  return result; /*0x5a82ca*/
}



// ==== 0x005A82E0  ObjectClass::ScatterMapSeedBuildings  this=ObjectClass  sig=csp ====
void __thiscall ScatterMapSeedBuildings(ObjectClass *this, __int16 *a2)
{
  unsigned int v3; // eax
  __int16 *v4; // edi
  BombClass *attachedBomb; // eax
  int StringVector_field_0x08; // eax
  int StringVector_field_0x14; // ecx
  char **v8; // esi
  int v9; // eax
  HouseClass *v10; // eax
  int Owner; // eax
  int v12; // ebp
  unsigned int v13; // eax
  int IndexByName; // esi
  int v15; // eax
  _DWORD *v16; // ebp
  unsigned int v17; // eax
  __int16 v18; // si
  unsigned int v19; // eax
  __int16 v20; // bx
  __int16 v21; // di
  int *v22; // ecx
  __int16 v23; // bx
  int v24; // edx
  _WORD *v25; // ebp
  __int16 v26; // dx
  Cell *v27; // esi
  int v28; // edx
  int StringVector_field_0x18; // eax
  char v30; // [esp+14h] [ebp-8Eh]
  char v31; // [esp+15h] [ebp-8Dh]
  _DWORD *v32; // [esp+16h] [ebp-8Ch]
  unsigned int v33; // [esp+1Ah] [ebp-88h]
  int v34; // [esp+1Eh] [ebp-84h]
  int v35; // [esp+22h] [ebp-80h]
  StringVector v36; // [esp+26h] [ebp-7Ch] BYREF
  double v37; // [esp+42h] [ebp-60h]
  int v38; // [esp+4Ah] [ebp-58h]
  int v39; // [esp+4Eh] [ebp-54h]
  int v40; // [esp+52h] [ebp-50h]
  __int16 v41; // [esp+56h] [ebp-4Ch]
  __int16 v42; // [esp+58h] [ebp-4Ah]
  __int64 v43; // [esp+5Ah] [ebp-48h]
  double v44; // [esp+62h] [ebp-40h] BYREF
  int v45; // [esp+6Ah] [ebp-38h]
  __int64 v46; // [esp+6Eh] [ebp-34h]
  __int64 v47; // [esp+76h] [ebp-2Ch]
  __int64 v48; // [esp+7Eh] [ebp-24h]
  __int64 v49; // [esp+86h] [ebp-1Ch]
  __int64 v50; // [esp+8Eh] [ebp-14h]
  _DWORD v51[3]; // [esp+96h] [ebp-Ch] BYREF

  do /*0x5a831e*/
  {
    v43 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a82f6*/
    LOWORD(v3) = Math::RoundToInt((double)v43 * 0.000000001164153218540399 + 8.0); /*0x5a8312*/
    v39 = v3; /*0x5a831a*/
  }
  while ( v3 > 0xC ); /*0x5a831e*/
  v4 = a2; /*0x5a8320*/
  v35 = 0; /*0x5a832f*/
  v34 = 0; /*0x5a8333*/
  LODWORD(v43) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 283); /*0x5a8343*/
  attachedBomb = this->attachedBomb; /*0x5a8347*/
  v38 = 0; /*0x5a834c*/
  v33 = 35; /*0x5a8350*/
  if ( !attachedBomb ) /*0x5a8358*/
    v38 = 15; /*0x5a835a*/
  StringVector::Construct(&v36, 0, 0); /*0x5a8368*/
  StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a836d*/
  StringVector_field_0x14 = 10; /*0x5a8371*/
  *(_DWORD *)v36.__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x5a8376*/
  v36.StringVector_field_0x14 = 10; /*0x5a837e*/
  v36.StringVector_field_0x10 = 0; /*0x5a8382*/
  v8 = off_82B1B0; /*0x5a8386*/
  while ( 1 ) /*0x5a8391*/
  {
    if ( v36.StringVector_field_0x10 < StringVector_field_0x08 ) /*0x5a8395*/
      goto LABEL_11; /*0x5a8395*/
    if ( (BYTE1(v36.StringVector_field_0x0C) || !StringVector_field_0x08) && StringVector_field_0x14 > 0 ) /*0x5a83a5*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(StringVector *, int, _DWORD))(*(_DWORD *)v36.__pad_0 + 8))( /*0x5a83b3*/
             &v36,
             StringVector_field_0x14 + StringVector_field_0x08,
             0) )
      {
LABEL_11:
        v9 = v36.StringVector_field_0x10++; /*0x5a83ba*/
        *(_DWORD *)(v36.StringVector_field_0x04 + 4 * v9) = *v8; /*0x5a83cb*/
      }
      StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a83ce*/
    }
    if ( (int)++v8 >= (int)&off_82B240 ) /*0x5a83db*/
      break; /*0x5a83db*/
    StringVector_field_0x14 = v36.StringVector_field_0x14; /*0x5a838d*/
  }
  v10 = (HouseClass *)SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x5a83e2*/
  Owner = HouseClass::FindOwner(v10); /*0x5a83e9*/
  v12 = v39; /*0x5a83ee*/
  v45 = Owner; /*0x5a83f2*/
  if ( v39 > 0 ) /*0x5a83f8*/
  {
    do /*0x5a86e5*/
    {
      if ( v35 >= 2 * v12 ) /*0x5a8408*/
        break; /*0x5a8408*/
      v49 = (unsigned int)v38; /*0x5a8421*/
      v48 = v33 - v38 + 1; /*0x5a8430*/
      v44 = (double)v48; /*0x5a8438*/
      v37 = (double)(unsigned int)v38; /*0x5a8443*/
      do /*0x5a8476*/
      {
        v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8451*/
        LOWORD(v13) = Math::RoundToInt((double)v46 * v44 * 2.328306437080797e-10 + v37); /*0x5a846b*/
        v36.StringVector_field_0x18 = v13; /*0x5a8472*/
      }
      while ( v13 > v33 ); /*0x5a8476*/
      IndexByName = BuildingTypeClass::FindIndexByName(*(BuildingTypeClass **)(v36.StringVector_field_0x04 + 4 * v13)); /*0x5a8484*/
      if ( IndexByName != -1 ) /*0x5a8489*/
      {
        v15 = __2_YAPAXI_Z(0x720u); /*0x5a8494*/
        if ( v15 ) /*0x5a849e*/
        {
          v16 = (_DWORD *)BuildingClass::Construct(v15, *((_DWORD *)dword_A83C6C + IndexByName), v45); /*0x5a84b6*/
          LODWORD(v37) = 0; /*0x5a84b8*/
          v32 = v16; /*0x5a84bc*/
        }
        else
        {
          v32 = 0; /*0x5a84c7*/
          v16 = 0; /*0x5a84cb*/
          LODWORD(v37) = 0; /*0x5a84cd*/
        }
        v30 = 0; /*0x5a84c0*/
        while ( SLODWORD(v37) < 60 ) /*0x5a84e3*/
        {
          do /*0x5a8518*/
          {
            v50 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a84f3*/
            LOWORD(v17) = Math::RoundToInt((double)v50 * 0.000000003492459655621196); /*0x5a850e*/
            v18 = v17; /*0x5a8513*/
          }
          while ( v17 > 0xE ); /*0x5a8518*/
          do /*0x5a853e*/
          {
            v47 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8524*/
            LOWORD(v19) = Math::RoundToInt((double)v47 * 0.000000003492459655621196); /*0x5a8536*/
          }
          while ( v19 > 0xE ); /*0x5a853e*/
          v20 = *v4; /*0x5a8540*/
          v21 = v18 - 7 + v4[1]; /*0x5a854d*/
          v22 = (int *)v16[328]; /*0x5a8550*/
          v23 = v19 - 7 + v20; /*0x5a8556*/
          v24 = *v22; /*0x5a855b*/
          v41 = v23; /*0x5a855d*/
          v42 = v21; /*0x5a8562*/
          v25 = (_WORD *)(*(int (__thiscall **)(int *, int))(v24 + 144))(v22, 1); /*0x5a856d*/
          v31 = 1; /*0x5a856f*/
          while ( *v25 != 0x7FFF || v25[1] != 0x7FFF ) /*0x5a8582*/
          {
            v26 = v21 + v25[1]; /*0x5a8592*/
            LOWORD(v40) = v41 + *v25; /*0x5a8599*/
            HIWORD(v40) = v26; /*0x5a859e*/
            LODWORD(v44) = v40; /*0x5a85ad*/
            v27 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v44); /*0x5a85b6*/
            if ( v27->Cell_field_0xE4 /*0x5a85eb*/
              || !(unsigned __int8)Cell::IsEmpty(v27)
              || v27->Cell_field_0x11B[0] != (_DWORD)v43
              || *(_DWORD *)&v27->__pad_E8[4] == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)v27, 1) )
            {
              v31 = 0; /*0x5a85f4*/
            }
            v25 += 2; /*0x5a85fd*/
            if ( !v31 ) /*0x5a8602*/
              goto LABEL_43; /*0x5a8602*/
          }
          v51[1] = (v21 << 8) + 128; /*0x5a8630*/
          v51[0] = (v23 << 8) + 128; /*0x5a863b*/
          v28 = *v32; /*0x5a8649*/
          v51[2] = 0; /*0x5a864e*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v28 + 216))(v32, v51, 0) ) /*0x5a8659*/
          {
            StringVector_field_0x18 = v36.StringVector_field_0x18; /*0x5a866b*/
            v30 = 1; /*0x5a8672*/
            ++v34; /*0x5a8677*/
            if ( v36.StringVector_field_0x18 < v36.StringVector_field_0x10 /*0x5a8684*/
              && v36.StringVector_field_0x18 < --v36.StringVector_field_0x10 )
            {
              do /*0x5a8698*/
              {
                ++StringVector_field_0x18; /*0x5a868a*/
                *(_DWORD *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18 - 4) = *(_DWORD *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18); /*0x5a868e*/
              }
              while ( StringVector_field_0x18 < v36.StringVector_field_0x10 ); /*0x5a8698*/
            }
            --v33; /*0x5a869a*/
          }
LABEL_43:
          v4 = a2; /*0x5a869e*/
          ++LODWORD(v37); /*0x5a86b0*/
          if ( v30 ) /*0x5a86b4*/
            goto LABEL_47; /*0x5a86b4*/
          v16 = v32; /*0x5a84d8*/
        }
        if ( v16 ) /*0x5a86c8*/
          (*(void (__thiscall **)(_DWORD *, int))(*v16 + 32))(v16, 1); /*0x5a86d1*/
LABEL_47:
        v12 = v39; /*0x5a86d4*/
        ++v35; /*0x5a86dd*/
      }
    }
    while ( v34 < v12 ); /*0x5a86e5*/
  }
  *(_DWORD *)v36.__pad_0 = &VectorClass<char *>::`vftable'; /*0x5a86f4*/
  if ( v36.StringVector_field_0x04 ) /*0x5a86fd*/
  {
    if ( BYTE1(v36.StringVector_field_0x0C) ) /*0x5a8705*/
      __3_YAXPAX_Z((void *)v36.StringVector_field_0x04); /*0x5a8708*/
  }
}



// ==== 0x005A8720  PlaceNeutralCreeps  this=ObjectClass  sig=csp ====
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

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a874a*/
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
        v27 = (unsigned int)Random::State(&unk_ABE890); /*0x5a87a2*/
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
                         *((_DWORD *)dword_A83CE4 + IndexBuildingTypeClass),
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
                         *((_DWORD *)dword_A8E34C + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      v11 = 0; /*0x5a8831*/
      v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
        do /*0x5a8866*/
        {
          v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a884a*/
          v12 = Math::RoundToInt((double)v28 * 0.000000003958120943037356); /*0x5a8861*/
        }
        while ( v12 > 0x10 ); /*0x5a8866*/
        do /*0x5a888c*/
        {
          v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a8872*/
          v13 = Math::RoundToInt((double)v29 * 0.000000003958120943037356); /*0x5a8884*/
        }
        while ( v13 > 0x10 ); /*0x5a888c*/
        v14 = v12 - 8; /*0x5a8892*/
        v15 = v13 - 8 + *a1; /*0x5a889d*/
        v16 = v14 + a1[1]; /*0x5a88a4*/
        LOWORD(v25) = v15; /*0x5a88a7*/
        WORD1(v25) = v16; /*0x5a88ac*/
        v21 = v25; /*0x5a88b9*/
        if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v21) + 57) )
        {
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&unk_ABE890); /*0x5a88f5*/
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



// ==== 0x005A89D0  ScheduleMapSeedBuildings  this=ObjectClass  sig=csp ====
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
    v48 = (unsigned int)Random::State(&unk_ABE890); /*0x5a8a14*/
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
              v27 = HIWORD(dword_89F688[v50 & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v39[1]) + v49 + LOWORD(dword_89F688[v50 & 7]); /*0x5a8c94*/
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
      v7 = Random::Gaussian((double *)&byte_ABDFB8) * v27 + v25; /*0x5a8f91*/
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
      if ( (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 < 0.7 ) /*0x5a9006*/
      {
        do /*0x5a904b*/
        {
          v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a9028*/
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
      v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a9071*/
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



// ==== 0x005A95B0  ObjectClass::PlaceRandomAIBuildings  this=ObjectClass  sig=csp ====
_DWORD *__thiscall PlaceRandomAIBuildings(ObjectClass *this)
{
  _DWORD *result; // eax
  int v2; // ecx
  _DWORD *v3; // edi
  int i; // esi
  HouseClass *v5; // eax
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // eax
  _DWORD **v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  _WORD *v13; // eax
  Cell *v14; // eax
  int v15; // eax
  int v16; // ebp
  _WORD *v17; // edi
  char v18; // bl
  __int16 v19; // dx
  Cell *v20; // esi
  _DWORD *v21; // eax
  char v22; // [esp+13h] [ebp-4Dh]
  __int16 v23[2]; // [esp+14h] [ebp-4Ch] BYREF
  _DWORD *v24; // [esp+18h] [ebp-48h]
  int v25; // [esp+1Ch] [ebp-44h]
  __int16 v26[2]; // [esp+20h] [ebp-40h] BYREF
  int v27; // [esp+24h] [ebp-3Ch]
  _DWORD *v28; // [esp+28h] [ebp-38h]
  int Owner; // [esp+2Ch] [ebp-34h]
  __int16 v30[4]; // [esp+30h] [ebp-30h] BYREF
  __int16 v31; // [esp+38h] [ebp-28h] BYREF
  __int64 v32; // [esp+3Ch] [ebp-24h] BYREF
  __int64 v33; // [esp+44h] [ebp-1Ch]
  __int64 v34; // [esp+4Ch] [ebp-14h]
  _DWORD v35[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( this->ambientSoundController[0] == 2 ) /*0x5a95bd*/
  {
    do /*0x5a95e7*/
    {
      v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a95c9*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 6.984919311242392e-10); /*0x5a95df*/
    }
    while ( (unsigned int)result > 2 ); /*0x5a95e7*/
    if ( (int)result > 0 ) /*0x5a95eb*/
    {
      v2 = g_MissionQueueFrame.briefing[342]; /*0x5a95f1*/
      v3 = result; /*0x5a95f7*/
      result = (_DWORD *)g_MissionQueueFrame.briefing[339]; /*0x5a95f9*/
      do /*0x5a9626*/
      {
        for ( i = 0; i < v2; ++i ) /*0x5a9602*/
        {
          if ( *(int *)(result[i] + 32) > 0 ) /*0x5a960c*/
          {
            PlaceNeutralBuilding((ObjectClass *)result[i]); /*0x5a9610*/
            v2 = g_MissionQueueFrame.briefing[342]; /*0x5a9615*/
            result = (_DWORD *)g_MissionQueueFrame.briefing[339]; /*0x5a961b*/
          }
        }
        v3 = (_DWORD *)((char *)v3 - 1); /*0x5a9625*/
      }
      while ( v3 ); /*0x5a9626*/
    }
  }
  else
  {
    v5 = (HouseClass *)SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.?); /*0x5a9635*/
    Owner = HouseClass::FindOwner(v5); /*0x5a9641*/
    do /*0x5a966d*/
    {
      v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a964f*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 0.000000001164153218540399); /*0x5a9665*/
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
          v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2796) - 1; /*0x5a96a8*/
          v33 = *(unsigned int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2796); /*0x5a96ac*/
          *(double *)v30 = (double)v33; /*0x5a96b4*/
          do /*0x5a96df*/
          {
            v34 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a96c2*/
            LOWORD(v9) = Math::RoundToInt((double)v34 * *(double *)v30 * 2.328306437080797e-10); /*0x5a96d8*/
          }
          while ( v9 > v8 ); /*0x5a96df*/
          v10 = (_DWORD **)BuildingClass::Construct( /*0x5a96fd*/
                             v7,
                             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2784) + 4 * v9),
                             Owner);
          v24 = v10; /*0x5a96ff*/
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
            v11 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a9726*/
            do /*0x5a9750*/
            {
              v12 = Range_RandomInt(0, v11); /*0x5a973a*/
              v13 = CellStruct::Set((CellStruct *)&v31, 0, 0); /*0x5a973c*/
            }
            while ( (unsigned __int8)CellStruct::Equals( /*0x5a9750*/
                                       (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v12),
                                       v13) );
            ++v6; /*0x5a9765*/
            *(_DWORD *)v26 = *(_DWORD *)(80 * v12 + g_MissionQueueFrame.localVariables[163]); /*0x5a976f*/
            if ( v6 > 200 ) /*0x5a9773*/
            {
              v15 = *(_DWORD *)CellStruct::Set((CellStruct *)&v32, 0, 0); /*0x5a979e*/
              goto LABEL_29; /*0x5a97a0*/
            }
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x5a977f*/
          }
          while ( !(unsigned __int8)Cell::IsEmpty(v14) ); /*0x5a9786*/
          v15 = *(_DWORD *)v26; /*0x5a97a2*/
LABEL_29:
          *(_DWORD *)v23 = v15; /*0x5a97a6*/
          v16 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x5a97c1*/
          v17 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int))(*v10[328] + 144))(v10[328], 1); /*0x5a97d0*/
          v18 = 1; /*0x5a97d2*/
          while ( *v17 != 0x7FFF || v17[1] != 0x7FFF ) /*0x5a97e1*/
          {
            v19 = v23[1] + v17[1]; /*0x5a97ef*/
            LOWORD(v27) = v23[0] + *v17; /*0x5a97fa*/
            HIWORD(v27) = v19; /*0x5a97ff*/
            *(_DWORD *)v30 = v27; /*0x5a980e*/
            v20 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x5a9817*/
            if ( v20->Cell_field_0xE4 /*0x5a986f*/
              || !(unsigned __int8)Cell::IsEmpty(v20)
              || v20->Cell_field_0x11B[0] != v16
              || *(_DWORD *)&v20->__pad_E8[4] == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)v20, 1)
              || *(_BYTE *)(80 * (*(__int16 *)&v20->__pad_1C[8] + g_MapCellWidth * *(__int16 *)&v20->__pad_1C[10])
                          + g_MissionQueueFrame.localVariables[163]
                          + 69) )
            {
              v18 = 0; /*0x5a9877*/
            }
            v17 += 2; /*0x5a9879*/
            if ( !v18 ) /*0x5a987e*/
              goto LABEL_43; /*0x5a987e*/
          }
          v35[0] = (v23[0] << 8) + 128; /*0x5a98a1*/
          v35[2] = 0; /*0x5a98af*/
          v21 = (_DWORD *)*v24; /*0x5a98b7*/
          v35[1] = (v23[1] << 8) + 128; /*0x5a98b9*/
          if ( ((unsigned __int8 (__thiscall *)(_DWORD *, _DWORD *, _DWORD))v21[54])(v24, v35, 0) ) /*0x5a98c2*/
            v22 = 1; /*0x5a98cc*/
LABEL_43:
          ++v25; /*0x5a98d1*/
          if ( v22 ) /*0x5a98e0*/
          {
            v6 = 0; /*0x5a98e6*/
            goto LABEL_47; /*0x5a98e8*/
          }
          v10 = (_DWORD **)v24; /*0x5a970d*/
          v6 = 0; /*0x5a9711*/
        }
        if ( v10 ) /*0x5a98f4*/
          ((void (__thiscall *)(_DWORD **, int))(*v10)[8])(v10, 1); /*0x5a98fc*/
LABEL_47:
        result = (_DWORD *)((char *)v28 - 1); /*0x5a98ff*/
        v28 = (_DWORD *)((char *)v28 - 1); /*0x5a9904*/
      }
      while ( v28 ); /*0x5a9908*/
    }
  }
  return result; /*0x5a9628*/
}



// ==== 0x005A9920  ObjectClass::method_5A9920  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A9920(ObjectClass *this, _DWORD *a2, int a3)
{
  this->AbstractClass = (void *)*a2; /*0x5a992c*/
  this->? = (void *)a3; /*0x5a992e*/
  return &this->AbstractClass; /*0x5a9931*/
}



// ==== 0x005A9940  Cell::Clear  this=Cell  sig=csp ====
_WORD *__thiscall Cell::Clear(Cell *this)
{
  this->Cell_field_0x0 = 0; /*0x5a9942*/
  this->Cell_field_0x4 = (void *)-1; /*0x5a994d*/
  return this; /*0x5a9954*/
}



// ==== 0x005A9960  ObjectClass::method_5A9960  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A9960(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x5a9968*/
  this->? = (void *)a2[1]; /*0x5a996d*/
  return &this->AbstractClass; /*0x5a9970*/
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
_DWORD *__thiscall Object_Helper_5A99B0(ObjectClass *this)
{
  this->AbstractClass = (void *)0xFFFF; /*0x5a99d1*/
  this->? = 0; /*0x5a99d7*/
  this->? = (void *)0xFFFF; /*0x5a99da*/
  this->? = 0; /*0x5a99e1*/
  this->? = -1; /*0x5a99e4*/
  return &this->AbstractClass; /*0x5a99ec*/
}



// ==== 0x005A99F0  ObjectClass::method_5A99F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5A99F0(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x5a99f8*/
  this->? = (void *)a2[1]; /*0x5a99fd*/
  this->? = (void *)a2[2]; /*0x5a9a03*/
  this->? = (void *)a2[3]; /*0x5a9a09*/
  this->? = a2[4]; /*0x5a9a0f*/
  return &this->AbstractClass; /*0x5a9a12*/
}



// ==== 0x005A9A20  ListNode::Alloc  this=ListNode  sig=csp ====
_DWORD *__thiscall ListNode::Alloc(ListNode *this, _DWORD *a2)
{
  int v3; // eax

  *((_DWORD *)this + 2) = 0; /*0x5a9a25*/
  *this = (ListNode)1; /*0x5a9a2c*/
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
  *((_DWORD *)this + 1) = v3; /*0x5a9a58*/
  *(_DWORD *)v3 = *a2; /*0x5a9a5d*/
  *(_DWORD *)(v3 + 4) = a2[1]; /*0x5a9a62*/
  return this; /*0x5a9a67*/
}



// ==== 0x005A9A70  WaypointPath::Constructor  this=WaypointPath  sig=csp ====
_DWORD *__thiscall WaypointPath::Constructor(WaypointPath *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // edx

  *((_DWORD *)this + 2) = 0; /*0x5a9a78*/
  *this = (WaypointPath)2; /*0x5a9a7b*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x5a9a81*/
  if ( v4 ) /*0x5a9a8b*/
  {
    v5 = v4 + 1; /*0x5a9a8d*/
    v6 = 2; /*0x5a9a90*/
    do /*0x5a9aa7*/
    {
      *((_WORD *)v5 - 2) = 0; /*0x5a9a95*/
      *((_WORD *)v5 - 1) = 0; /*0x5a9a99*/
      *v5 = -1; /*0x5a9a9d*/
      v5 += 2; /*0x5a9aa3*/
      --v6; /*0x5a9aa6*/
    }
    while ( v6 ); /*0x5a9aa7*/
  }
  else
  {
    v4 = 0; /*0x5a9aab*/
  }
  *((_DWORD *)this + 1) = v4; /*0x5a9ab1*/
  *v4 = *a2; /*0x5a9ab7*/
  v4[1] = a2[1]; /*0x5a9abc*/
  v7 = *((_DWORD *)this + 1); /*0x5a9ac3*/
  *(_DWORD *)(v7 + 8) = *a3; /*0x5a9ac8*/
  *(_DWORD *)(v7 + 12) = a3[1]; /*0x5a9ace*/
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
_DWORD *InitializePathData(ObjectClass *this)
{
  int *v1; // eax
  int *v2; // ebp
  int *v3; // eax
  int *v4; // eax
  int *v5; // ebp
  int *v6; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int *v27; // eax
  int *v28; // eax
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  int *v32; // eax
  int *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int *v43; // eax
  int *v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int *v49; // eax
  int *v50; // eax
  int *v... [61871 chars total]



// ==== 0x005AC190  sub_5AC190  this=-  sig=ida-proto ====
void __cdecl sub_5AC190()
{
  _DWORD *v0; // esi
  int v1; // edi
  void *v2; // eax

  v0 = &unk_ABE890; /*0x5ac192*/
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
int __thiscall MapSeed::IsCellInBounds(MapSeed *this)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = *(__int16 *)this->__pad_0; /*0x5ac230*/
  result = *(__int16 *)&this->__pad_0[2]; /*0x5ac233*/
  v3 = result + v1; /*0x5ac23e*/
  LOBYTE(result) = result + v1 > g_MissionQueueFrame.localVariables[160] /*0x5ac261*/
                && v1 - result < g_MissionQueueFrame.localVariables[160]
                && (result -= v1, result < g_MissionQueueFrame.localVariables[160])
                && v3 <= g_MissionQueueFrame.localVariables[161];
  return result; /*0x5ac25f*/
}



// ==== 0x005AC270  MapSeedClass::QueryInterface  this=MapSeedClass  sig=csp ====
_DWORD *__thiscall MapSeedClass::QueryInterface(MapSeedClass *this, char a2)
{
  LoadOptions::Cleanup((LoadOptions *)this); /*0x5ac273*/
  if ( (a2 & 1) != 0 ) /*0x5ac27d*/
    __3_YAXPAX_Z(this); /*0x5ac280*/
  return this->__pad_0; /*0x5ac28a*/
}



// ==== 0x005AC290  RandomMap::Constructor_VectorClass_Cell_  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_VectorClass_Cell_(RandomMap *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax
  void *v5; // eax
  RandomMap *v7; // [esp+4h] [ebp-4h] BYREF

  v3 = *(void (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x5ac294*/
  if ( v3 ) /*0x5ac298*/
  {
    (**v3)(v3, 1); /*0x5ac29e*/
    *(_DWORD *)this->__pad_0 = 0; /*0x5ac2a0*/
  }
  v7 = this; /*0x5ac2b6*/
  v4 = (*(int (__thiscall **)(int *, RandomMap **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x5ac2ba*/
         &g_MissionQueueFrame.briefing[338],
         &v7);
  if ( v4 != -1 && v4 < g_MissionQueueFrame.briefing[342] ) /*0x5ac2ca*/
  {
    --g_MissionQueueFrame.briefing[342]; /*0x5ac2cf*/
    for ( ; /*0x5ac2d5*/
          v4 < g_MissionQueueFrame.briefing[342];
          *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v4 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                  + 4 * v4) )
    {
      ++v4; /*0x5ac2dd*/
    }
  }
  v5 = (void *)this->RandomMap_field_0x2C[0]; /*0x5ac2ef*/
  this->RandomMap_field_0x28[0] = (int)&VectorClass<Cell>::`vftable'; /*0x5ac2f2*/
  if ( v5 && BYTE1(this->RandomMap_field_0x34[0]) ) /*0x5ac2fd*/
  {
    __3_YAXPAX_Z(v5); /*0x5ac305*/
    this->RandomMap_field_0x2C[0] = 0; /*0x5ac30d*/
  }
  BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x5ac318*/
  this->RandomMap_field_0x30 = 0; /*0x5ac31e*/
  if ( (a2 & 1) != 0 ) /*0x5ac325*/
    __3_YAXPAX_Z(this); /*0x5ac328*/
  return this->__pad_0; /*0x5ac332*/
}



// ==== 0x005AC340  Scalar::Dtor  this=Scalar  sig=csp ====
void **__thiscall Scalar::Dtor(Scalar *this, char a2)
{
  __3_YAXPAX_Z(*((void **)this + 2)); /*0x5ac347*/
  if ( (a2 & 1) != 0 ) /*0x5ac355*/
    __3_YAXPAX_Z(this); /*0x5ac358*/
  return (void **)this; /*0x5ac362*/
}



// ==== 0x005AC370  Coord::Compare2D  this=Coord  sig=csp ====
int __thiscall Coord::Compare2D(Coord *this, _WORD *a2)
{
  return *(_WORD *)this->__pad_0 != *a2 || *(_WORD *)this->Coord_field_0x2 != a2[1]; /*0x5ac388*/
}



// ==== 0x005AC3A0  VectorClass_ptr_MapRegionClass::Destroy  this=VectorClass_ptr_MapRegionClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::Destroy(VectorClass_ptr_MapRegionClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x5ac3a6*/
  this->Count = 0; /*0x5ac3a9*/
  if ( Items && this->IsAllocated ) /*0x5ac3b0*/
  {
    __3_YAXPAX_Z(Items); /*0x5ac3b6*/
    this->Items = 0; /*0x5ac3be*/
  }
  this->IsAllocated = 0; /*0x5ac3c1*/
  this->Capacity = 0; /*0x5ac3c4*/
}



// ==== 0x005AC3D0  VectorClass_ptr_MapRegionClass::GetItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::GetItemIndex(VectorClass_ptr_MapRegionClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x5ac3d0*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x5ac3e5*/
  else
    return 0; /*0x5ac3d7*/
}



// ==== 0x005AC3F0  _VectorClass_PAVMapRegionClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::Get(_VectorClass_PAVMapRegionClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5ac3fa*/
}



// ==== 0x005AC400  TypeList::BuildingTypeConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::BuildingTypeConstructor(TypeList *this)
{
  this->? = 0; /*0x5ac404*/
  this->? = 0; /*0x5ac407*/
  this->? = 1; /*0x5ac40a*/
  this->? = 0; /*0x5ac40e*/
  this->? = 10; /*0x5ac411*/
  this->? = 0; /*0x5ac418*/
  this->DynamicVectorClass = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ac41b*/
  return &this->DynamicVectorClass; /*0x5ac421*/
}



// ==== 0x005AC430  DynamicVector::Copy  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVector::Copy(DynamicVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int DynamicVector_field_0x8; // ecx
  int v6; // eax

  if ( this == (DynamicVector *)a2 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(DynamicVector *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac43e*/
  v3 = a2[2]; /*0x5ac441*/
  this->DynamicVector_field_0x8 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x5ac496*/
    this->__pad_C[1] = 0; /*0x5ac49d*/
LABEL_8:
    this->DynamicVector_field_0x10 = (void *)a2[4]; /*0x5ac4a1*/
    *(_DWORD *)this->__pad_14 = a2[5]; /*0x5ac4aa*/
    return this->__pad_0; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  this->__pad_C[1] = 1; /*0x5ac469*/
  if ( DynamicVector_field_0x8 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < this->DynamicVector_field_0x8 ); /*0x5ac481*/
  this->DynamicVector_field_0x10 = (void *)a2[4]; /*0x5ac486*/
  *(_DWORD *)this->__pad_14 = a2[5]; /*0x5ac48c*/
  return this->__pad_0; /*0x5ac491*/
}



// ==== 0x005AC4C0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MapSeedClass_18::ClearBuffer(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac4c6*/
  this->m_10 = 0; /*0x5ac4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac4d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac4de*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac4e1*/
  this->m_8 = 0; /*0x5ac4e4*/
}



// ==== 0x005AC4F0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapSeedClass_18::PointerToIndex(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac4f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/
}



// ==== 0x005AC510  _VectorClass_PAU_WIN32_FIND_DATAA::GetCell  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass_18::GetCell(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5ac51a*/
}



// ==== 0x005AC520  _DynamicVectorClass_V_TRect_H::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSEngine::ClearBuffer(_DynamicVectorClass_V_TRect_H *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac526*/
  this->m_10 = 0; /*0x5ac529*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac530*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac536*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac53e*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac541*/
  this->m_8 = 0; /*0x5ac544*/
}



// ==== 0x005AC550  _DynamicVectorClass_V_TRect_H::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSEngine::PointerToIndex(_DynamicVectorClass_V_TRect_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac550*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}



// ==== 0x005AC570  _VectorClass_V_TRect_H::Shutdown  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSEngine::Shutdown(_VectorClass_V_TRect_H *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 16 * a3); /*0x5ac57d*/
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
void __thiscall VectorClass_N::Destroy(_DynamicVectorClass_N *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac5f6*/
  this->m_10 = 0; /*0x5ac5f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac600*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac606*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac60e*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac611*/
  this->m_8 = 0; /*0x5ac614*/
}



// ==== 0x005AC620  _DynamicVectorClass_N::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_N::GetItemIndex(_DynamicVectorClass_N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac620*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5ac635*/
  else
    return 0; /*0x5ac627*/
}



// ==== 0x005AC640  _VectorClass_N::Clear  this=VectorClass  sig=csp ====
double __thiscall VectorClass_N::Clear(_VectorClass_N *this, int a2)
{
  return *(double *)(*(_DWORD *)&this->m_1[3] + 8 * a2); /*0x5ac64a*/
}



// ==== 0x005AC650  _TypeList_PBVBuildingTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_BuildingType::Add(_TypeList_PBVBuildingTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5ac653*/
  *(_DWORD *)this = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac656*/
  if ( v3 && this->IsAllocated ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    this->Items = 0; /*0x5ac670*/
  }
  this->IsAllocated = 0; /*0x5ac67b*/
  this->Capacity = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(this); /*0x5ac68b*/
  return this; /*0x5ac695*/
}



// ==== 0x005AC6A0  _VectorClass_PAVMapRegionClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::Add(_VectorClass_PAVMapRegionClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5ac6a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5ac6ad*/
  {
    v3 = 0; /*0x5ac6af*/
    if ( m_8 <= 0 ) /*0x5ac6b3*/
      return 1; /*0x5ac6d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5ac6b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5ac6bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5ac6c4*/
    {
      ++v3; /*0x5ac6c6*/
      ++v4; /*0x5ac6c7*/
      if ( v3 >= m_8 ) /*0x5ac6cc*/
        return 1; /*0x5ac6cc*/
    }
  }
  return 0; /*0x5ac6ce*/
}



// ==== 0x005AC6E0  _VectorClass_PAVMapRegionClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::Release(_VectorClass_PAVMapRegionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5ac6ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5ac6f6*/
    if ( a3 ) /*0x5ac6fc*/
      v4 = a3; /*0x5ac712*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ac70e*/
    LOBYTE(this->m_C) = 1; /*0x5ac716*/
    if ( v4 ) /*0x5ac71a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5ac725*/
      {
        m_8 = this->m_8; /*0x5ac72c*/
        if ( a2 < m_8 ) /*0x5ac731*/
          m_8 = a2; /*0x5ac733*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5ac739*/
          ++i; /*0x5ac73e*/
        if ( BYTE1(this->m_C) ) /*0x5ac74b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ac756*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5ac75e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5ac767*/
      this->m_8 = a2; /*0x5ac76f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5ac772*/
      return 1; /*0x5ac778*/
    }
    else
    {
      return 0; /*0x5ac71f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapRegionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac782*/
    return 1; /*0x5ac788*/
  }
}



// ==== 0x005AC790  _VectorClass_PAVMapRegionClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapRegionClass::Remove(_VectorClass_PAVMapRegionClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ac79d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ac7a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ac7ab*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac7ae*/
  this->m_8 = 0; /*0x5ac7b1*/
}



// ==== 0x005AC7C0  _VectorClass_PAVMapRegionClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::GetSize(_VectorClass_PAVMapRegionClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ac7c0*/
    return 0; /*0x5ac7c8*/
  m_8 = this->m_8; /*0x5ac7ce*/
  result = 0; /*0x5ac7d1*/
  if ( m_8 <= 0 ) /*0x5ac7d5*/
    return -1; /*0x5ac7ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ac7db*/
  {
    if ( ++result >= m_8 ) /*0x5ac7ea*/
      return -1; /*0x5ac7ea*/
  }
  return result; /*0x5ac7ca*/
}



// ==== 0x005AC800  _VectorClass_PAVMapRegionClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapRegionClass::GetCapacity(_VectorClass_PAVMapRegionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ac800*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5ac815*/
  else
    return 0; /*0x5ac807*/
}



// ==== 0x005AC820  VectorClass_ptr_MapRegionClass::SetCapacity  this=VectorClass_ptr_MapRegionClass  sig=csp ====
char __thiscall VectorClass_ptr_MapRegionClass::SetCapacity(VectorClass_ptr_MapRegionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x5ac82c*/
  {
    this->IsInitialized = 0; /*0x5ac832*/
    if ( a3 ) /*0x5ac838*/
      v4 = a3; /*0x5ac84e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ac84a*/
    this->IsInitialized = 1; /*0x5ac852*/
    if ( !v4 ) /*0x5ac856*/
      return 0; /*0x5ac8ca*/
    if ( this->Items ) /*0x5ac858*/
    {
      Capacity = this->Capacity; /*0x5ac85f*/
      if ( a2 < (int)Capacity ) /*0x5ac864*/
        Capacity = (void *)a2; /*0x5ac866*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x5ac86c*/
        ++i; /*0x5ac871*/
      if ( this->IsAllocated ) /*0x5ac87e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x5ac889*/
        this->Items = 0; /*0x5ac891*/
      }
    }
    this->Items = v4; /*0x5ac89a*/
    this->Capacity = (void *)a2; /*0x5ac8a2*/
    this->IsAllocated = a3 == 0; /*0x5ac8a5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_MapRegionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ac8ae*/
  }
  v7 = this->Capacity; /*0x5ac8b1*/
  if ( (int)v7 < (int)this->Count ) /*0x5ac8b9*/
    this->Count = v7; /*0x5ac8bb*/
  return 1; /*0x5ac8be*/
}



// ==== 0x005AC8D0  VectorClass_ptr_MapRegionClass::FindItemIndex  this=VectorClass_ptr_MapRegionClass  sig=csp ====
int __thiscall VectorClass_ptr_MapRegionClass::FindItemIndex(VectorClass_ptr_MapRegionClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x5ac8d0*/
  result = 0; /*0x5ac8d3*/
  if ( (int)Count <= 0 ) /*0x5ac8d8*/
    return -1; /*0x5ac8ef*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x5ac8de*/
  {
    if ( ++result >= (int)Count ) /*0x5ac8ed*/
      return -1; /*0x5ac8ed*/
  }
  return result; /*0x5ac8f2*/
}



// ==== 0x005AC900  DynamicVectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::BuildingTypeConstructor(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x5ac909*/
  *(_DWORD *)&this->?[3] = a2; /*0x5ac910*/
  LOBYTE(this->?) = 1; /*0x5ac913*/
  BYTE1(this->?) = 0; /*0x5ac917*/
  *(_DWORD *)this->VectorClass = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac91b*/
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x5ac92b*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x5ac93c*/
      BYTE1(this->?) = 1; /*0x5ac93f*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac943*/
  this->CapacityIncrement = 10; /*0x5ac949*/
  this->Count = 0; /*0x5ac950*/
  return this->VectorClass; /*0x5ac959*/
}



// ==== 0x005AC960  PriorityQueue::Pop  this=PriorityQueue  sig=csp ====
int __thiscall PriorityQueue::Pop(PriorityQueue *this)
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

  if ( !*(_DWORD *)this->__pad_0 ) /*0x5ac961*/
    return 0; /*0x5ac96a*/
  v2 = *((_DWORD *)this + 2); /*0x5ac96b*/
  v3 = 1; /*0x5ac970*/
  v4 = *(_DWORD *)(v2 + 4); /*0x5ac978*/
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v2 + 4 * *(_DWORD *)this->__pad_0); /*0x5ac97b*/
  v10 = v4; /*0x5ac983*/
  *(_DWORD *)(*((_DWORD *)this + 2) + 4 * *(_DWORD *)this->__pad_0) = 0; /*0x5ac987*/
  v5 = *(_DWORD *)this->__pad_0 - 1; /*0x5ac991*/
  *(_DWORD *)this->__pad_0 = v5; /*0x5ac993*/
  if ( v5 < 2 /*0x5ac9b5*/
    || (v6 = 2,
        *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4) + 4) <= (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                               + 8)
                                                                                   + 4)) )
  {
    v6 = 1; /*0x5ac9b7*/
  }
  if ( v5 >= 3 /*0x5ac9d7*/
    && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                                  + 12)
                                                                                      + 4) )
  {
    v6 = 3; /*0x5ac9d9*/
    do /*0x5aca45*/
    {
LABEL_10:
      v7 = *((_DWORD *)this + 2); /*0x5ac9e7*/
      v8 = 2 * v6 + 1; /*0x5ac9ea*/
      v9 = *(_DWORD *)(v7 + 4 * v3); /*0x5ac9f1*/
      *(_DWORD *)(v7 + 4 * v3) = *(_DWORD *)(v7 + 4 * v6); /*0x5ac9f4*/
      v3 = v6; /*0x5ac9fa*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) = v9; /*0x5ac9fc*/
      if ( 2 * v6 <= *(_DWORD *)this->__pad_0 /*0x5aca21*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * v6)
                                                                                          + 4) )
      {
        v6 *= 2; /*0x5aca23*/
      }
      if ( v8 <= *(_DWORD *)this->__pad_0 /*0x5aca3f*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v8)
                                                                                          + 4) )
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
char __thiscall MapSeedClass_18::AddRef(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5aca62*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( m_8 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5aca75*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5aca7b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5aca84*/
    {
      ++v3; /*0x5aca86*/
      ++v4; /*0x5aca87*/
      if ( v3 >= m_8 ) /*0x5aca8c*/
        return 1; /*0x5aca8c*/
    }
  }
  return 0; /*0x5aca8e*/
}



// ==== 0x005ACAA0  _VectorClass_PAU_WIN32_FIND_DATAA::Release  this=VectorClass  sig=csp ====
char __thiscall MapSeedClass_18::Release(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5acace*/
    LOBYTE(this->m_C) = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5acae5*/
      {
        m_8 = this->m_8; /*0x5acaec*/
        if ( a2 < m_8 ) /*0x5acaf1*/
          m_8 = a2; /*0x5acaf3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( BYTE1(this->m_C) ) /*0x5acb0b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb16*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5acb1e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5acb27*/
      this->m_8 = a2; /*0x5acb2f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAU_WIN32_FIND_DATAA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }
}



// ==== 0x005ACB50  _VectorClass_PAU_WIN32_FIND_DATAA::ddtor  this=VectorClass  sig=csp ====
void __thiscall MapSeedClass_18::ddtor(_VectorClass_PAU_WIN32_FIND_DATAA *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5acb5d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb63*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5acb6b*/
  }
  BYTE1(this->m_C) = 0; /*0x5acb6e*/
  this->m_8 = 0; /*0x5acb71*/
}



// ==== 0x005ACB80  _VectorClass_PAU_WIN32_FIND_DATAA::GenerateSeed  this=VectorClass  sig=csp ====
int __thiscall MapSeedClass::GenerateSeed(_VectorClass_PAU_WIN32_FIND_DATAA *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  m_8 = this->m_8; /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( m_8 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= m_8 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/
}



// ==== 0x005ACBC0  _VectorClass_PAU_WIN32_FIND_DATAA::Generate  this=VectorClass  sig=csp ====
unsigned int __thiscall MapSeedClass_18::Generate(_VectorClass_PAU_WIN32_FIND_DATAA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5acbc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/
}



// ==== 0x005ACBE0  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MapSeedClass_18::SetCapacity(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5acc0a*/
    LOBYTE(this->m_C) = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5acc18*/
    {
      m_8 = this->m_8; /*0x5acc1f*/
      if ( a2 < m_8 ) /*0x5acc24*/
        m_8 = a2; /*0x5acc26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( BYTE1(this->m_C) ) /*0x5acc3e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acc49*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5acc51*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5acc5a*/
    this->m_8 = a2; /*0x5acc62*/
    BYTE1(this->m_C) = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acc6e*/
  }
  v7 = this->m_8; /*0x5acc71*/
  if ( v7 < this->m_10 ) /*0x5acc79*/
    this->m_10 = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/
}



// ==== 0x005ACC90  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MapSeedClass_18::FindItem(_DynamicVectorClass_PAU_WIN32_FIND_DATAA *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( m_10 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= m_10 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/
}



// ==== 0x005ACCC0  _VectorClass_V_TRect_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSEngine::AddRef(_VectorClass_V_TRect_H *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5acccb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( m_8 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5accd8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5accdb*/
    v6 = (_DWORD *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (_DWORD)v5; /*0x5acce1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= m_8 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}



// ==== 0x005ACD30  _VectorClass_V_TRect_H::Release  this=VectorClass  sig=csp ====
char __thiscall MSEngine::Release(_VectorClass_V_TRect_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    LOBYTE(this->m_C) = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = (char *)v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5acd8b*/
      {
        m_8 = this->m_8; /*0x5acd92*/
        if ( a2 < m_8 ) /*0x5acd97*/
          m_8 = a2; /*0x5acd99*/
        if ( m_8 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --m_8; /*0x5acdac*/
            *(_DWORD *)v11 = *v12; /*0x5acdaf*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( m_8 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5acdcd*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acdd8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5acde0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x5acde9*/
      this->m_8 = v3; /*0x5acdf1*/
      BYTE1(this->m_C) = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_TRect_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }
}



// ==== 0x005ACE20  _VectorClass_V_TRect_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSEngine::ddtor(_VectorClass_V_TRect_H *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ace2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ace33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ace3b*/
  }
  BYTE1(this->m_C) = 0; /*0x5ace3e*/
  this->m_8 = 0; /*0x5ace41*/
}



// ==== 0x005ACE50  _VectorClass_V_TRect_H::Init  this=VectorClass  sig=csp ====
int __thiscall MSEngine::Init(_VectorClass_V_TRect_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // esi
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  m_8 = this->m_8; /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( m_8 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= m_8 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}



// ==== 0x005ACEB0  _VectorClass_V_TRect_H::Run  this=VectorClass  sig=csp ====
unsigned int __thiscall MSEngine::Run(_VectorClass_V_TRect_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}



// ==== 0x005ACED0  _DynamicVectorClass_V_TRect_H::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSEngine::SetCapacity(_DynamicVectorClass_V_TRect_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    LOBYTE(this->m_C) = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = (char *)v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5acf25*/
    {
      m_8 = this->m_8; /*0x5acf2c*/
      if ( a2 < m_8 ) /*0x5acf31*/
        m_8 = a2; /*0x5acf33*/
      if ( m_8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + *(_DWORD *)&this->m_1[3]); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --m_8; /*0x5acf46*/
          *(_DWORD *)v10 = *v11; /*0x5acf49*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( m_8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( BYTE1(this->m_C) ) /*0x5acf67*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acf72*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5acf7a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v7; /*0x5acf83*/
    this->m_8 = v3; /*0x5acf8b*/
    BYTE1(this->m_C) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_TRect_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5acf97*/
  }
  v12 = this->m_8; /*0x5acf9a*/
  if ( v12 < this->m_10 ) /*0x5acfa2*/
    this->m_10 = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
}



// ==== 0x005ACFC0  _DynamicVectorClass_V_TRect_H::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSEngine::FindItem(_DynamicVectorClass_V_TRect_H *this, _DWORD *a2)
{
  int m_10; // esi
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( m_10 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= m_10 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}



// ==== 0x005AD010  _DynamicVectorClass_PAVCellClass::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Ptr::ResizeAndCopy(_DynamicVectorClass_PAVCellClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ad01c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5ad022*/
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5ad03a*/
    LOBYTE(this->m_C) = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad048*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( BYTE1(this->m_C) ) /*0x5ad06e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad079*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5ad081*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5ad08a*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5ad092*/
    BYTE1(this->m_C) = a3 == 0; /*0x5ad095*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVCellClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad09e*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad0a1*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5ad0a9*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5ad0ab*/
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
char __thiscall VectorClass_N::AddRef(_VectorClass_N *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  double *v4; // edx
  int v5; // ecx

  m_8 = this->m_8; /*0x5ad0f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5ad0fc*/
  {
    v3 = 0; /*0x5ad0fe*/
    if ( m_8 <= 0 ) /*0x5ad102*/
      return 1; /*0x5ad124*/
    v4 = *(double **)(a2 + 4); /*0x5ad104*/
    v5 = *(_DWORD *)&this->m_1[3] - (_DWORD)v4; /*0x5ad10a*/
    while ( *(double *)((char *)v4 + v5) == *v4 ) /*0x5ad116*/
    {
      ++v3; /*0x5ad118*/
      ++v4; /*0x5ad119*/
      if ( v3 >= m_8 ) /*0x5ad11e*/
        return 1; /*0x5ad11e*/
    }
  }
  return 0; /*0x5ad120*/
}



// ==== 0x005AD130  _VectorClass_N::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_N::Release(_VectorClass_N *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  v3 = a2; /*0x5ad131*/
  if ( a2 ) /*0x5ad13b*/
  {
    v5 = a3; /*0x5ad141*/
    LOBYTE(this->m_C) = 0; /*0x5ad145*/
    if ( !a3 ) /*0x5ad14b*/
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x5ad15d*/
    LOBYTE(this->m_C) = 1; /*0x5ad161*/
    if ( v5 ) /*0x5ad165*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad16f*/
      {
        m_8 = this->m_8; /*0x5ad176*/
        if ( a2 < m_8 ) /*0x5ad17b*/
          m_8 = a2; /*0x5ad17d*/
        v8 = 0; /*0x5ad17f*/
        if ( m_8 > 0 ) /*0x5ad183*/
        {
          do /*0x5ad19b*/
          {
            v9 = *(_DWORD *)&this->m_1[3]; /*0x5ad185*/
            ++v8; /*0x5ad188*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5ad18f*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5ad197*/
          }
          while ( v8 < m_8 ); /*0x5ad19b*/
          v3 = a2; /*0x5ad19d*/
        }
        if ( BYTE1(this->m_C) ) /*0x5ad1a1*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad1ac*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5ad1b4*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x5ad1c6*/
      this->m_8 = v3; /*0x5ad1c9*/
      BYTE1(this->m_C) = a3 == 0; /*0x5ad1cc*/
      return 1; /*0x5ad1d1*/
    }
    else
    {
      return 0; /*0x5ad169*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad1db*/
    return 1; /*0x5ad1e0*/
  }
}



// ==== 0x005AD1F0  _VectorClass_N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_N::ddtor(_VectorClass_N *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5ad1fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad203*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad20b*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad20e*/
  this->m_8 = 0; /*0x5ad211*/
}



// ==== 0x005AD220  _VectorClass_N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_N::GetSize(_VectorClass_N *this, double *a2)
{
  int m_8; // esi
  int v4; // edx
  double *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5ad220*/
    return 0; /*0x5ad22a*/
  m_8 = this->m_8; /*0x5ad230*/
  v4 = 0; /*0x5ad233*/
  if ( m_8 <= 0 ) /*0x5ad237*/
    return -1; /*0x5ad253*/
  for ( i = *(double **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ad239*/
  {
    if ( ++v4 >= m_8 ) /*0x5ad251*/
      return -1; /*0x5ad251*/
  }
  return v4; /*0x5ad229*/
}



// ==== 0x005AD270  _VectorClass_N::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_N::GetCapacity(_VectorClass_N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5ad270*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5ad285*/
  else
    return 0; /*0x5ad277*/
}



// ==== 0x005AD290  _DynamicVectorClass_N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_N::SetCapacity(_DynamicVectorClass_N *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  v3 = a2; /*0x5ad291*/
  if ( a2 ) /*0x5ad29b*/
  {
    v5 = a3; /*0x5ad2a1*/
    LOBYTE(this->m_C) = 0; /*0x5ad2a5*/
    if ( !a3 ) /*0x5ad2ab*/
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x5ad2bd*/
    LOBYTE(this->m_C) = 1; /*0x5ad2c1*/
    if ( !v5 ) /*0x5ad2c5*/
      return 0; /*0x5ad347*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad2c7*/
    {
      m_8 = this->m_8; /*0x5ad2ce*/
      if ( a2 < m_8 ) /*0x5ad2d3*/
        m_8 = a2; /*0x5ad2d5*/
      v7 = 0; /*0x5ad2d7*/
      if ( m_8 > 0 ) /*0x5ad2db*/
      {
        do /*0x5ad2f3*/
        {
          v8 = *(_DWORD *)&this->m_1[3]; /*0x5ad2dd*/
          ++v7; /*0x5ad2e0*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x5ad2e7*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x5ad2ef*/
        }
        while ( v7 < m_8 ); /*0x5ad2f3*/
        v3 = a2; /*0x5ad2f5*/
      }
      if ( BYTE1(this->m_C) ) /*0x5ad2f9*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5ad304*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5ad30c*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x5ad31e*/
    this->m_8 = v3; /*0x5ad321*/
    BYTE1(this->m_C) = a3 == 0; /*0x5ad324*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad32d*/
  }
  v9 = this->m_8; /*0x5ad330*/
  if ( v9 < this->m_10 ) /*0x5ad338*/
    this->m_10 = v9; /*0x5ad33a*/
  return 1; /*0x5ad33d*/
}



// ==== 0x005AD350  _DynamicVectorClass_N::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_N::FindItemIndex(_DynamicVectorClass_N *this, double *a2)
{
  int m_10; // esi
  int v3; // edx
  double *i; // ecx

  m_10 = this->m_10; /*0x5ad351*/
  v3 = 0; /*0x5ad354*/
  if ( m_10 <= 0 ) /*0x5ad359*/
    return -1; /*0x5ad375*/
  for ( i = *(double **)&this->m_1[3]; *i != *a2; ++i ) /*0x5ad35b*/
  {
    if ( ++v3 >= m_10 ) /*0x5ad373*/
      return -1; /*0x5ad373*/
  }
  return v3; /*0x5ad375*/
}



// ==== 0x005AD390  _VectorClass_PAVMapRegionClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MapRegionClass::QueryInterface(_VectorClass_PAVMapRegionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad393*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x5ad396*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad3a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad3a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad3b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad3bb*/
  this->m_8 = 0; /*0x5ad3c1*/
  if ( (a2 & 1) != 0 ) /*0x5ad3c8*/
    __3_YAXPAX_Z(this); /*0x5ad3cb*/
  return this->__pad_0; /*0x5ad3d5*/
}



// ==== 0x005AD3E0  VectorClass_ptr_MapRegionClass::loc_5AD3E0  this=VectorClass_ptr_MapRegionClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_MapRegionClass::loc_5AD3E0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad3e3*/
  *Block = &g_ptr_7ED878; /*0x5ad3e6*/
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
_DWORD *__thiscall MapSeedClass_18::QueryInterface(_VectorClass_PAU_WIN32_FIND_DATAA *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad433*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad436*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad440*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad448*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad450*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad45b*/
  this->m_8 = 0; /*0x5ad461*/
  if ( (a2 & 1) != 0 ) /*0x5ad468*/
    __3_YAXPAX_Z(this); /*0x5ad46b*/
  return this->__pad_0; /*0x5ad475*/
}



// ==== 0x005AD480  _DynamicVectorClass_PAU_WIN32_FIND_DATAA::Constructor_VectorClass__WIN32_FIND_DATAA___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapSeedClass_18::Constructor_VectorClass__WIN32_FIND_DATAA___(
        _DynamicVectorClass_PAU_WIN32_FIND_DATAA *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad483*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad486*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad490*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad498*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad4a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad4ab*/
  this->m_8 = 0; /*0x5ad4b1*/
  if ( (a2 & 1) != 0 ) /*0x5ad4b8*/
    __3_YAXPAX_Z(this); /*0x5ad4bb*/
  return this->__pad_0; /*0x5ad4c5*/
}



// ==== 0x005AD4D0  _VectorClass_V_TRect_H::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSEngine::QueryInterface(_VectorClass_V_TRect_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad4d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ad4d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad4e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad4e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad4f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad4fb*/
  this->m_8 = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    __3_YAXPAX_Z(this); /*0x5ad50b*/
  return this->__pad_0; /*0x5ad515*/
}



// ==== 0x005AD520  _DynamicVectorClass_V_TRect_H::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSEngine::Constructor(_DynamicVectorClass_V_TRect_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad523*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ad526*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad530*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad538*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad540*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad54b*/
  this->m_8 = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    __3_YAXPAX_Z(this); /*0x5ad55b*/
  return this->__pad_0; /*0x5ad565*/
}



// ==== 0x005AD570  _DynamicVectorClass_PAVCellClass::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CellClassVector::Destruct(_DynamicVectorClass_PAVCellClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad573*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CellClass *>::`vftable'; /*0x5ad576*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad580*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad588*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad590*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad59b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5ad5a1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5a8*/
    __3_YAXPAX_Z(this); /*0x5ad5ab*/
  return this->__pad_0; /*0x5ad5b5*/
}



// ==== 0x005AD5C0  _VectorClass_N::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_N::QueryInterface(_VectorClass_N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad5c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5ad5c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad5d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad5d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad5e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad5eb*/
  this->m_8 = 0; /*0x5ad5f1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5f8*/
    __3_YAXPAX_Z(this); /*0x5ad5fb*/
  return this->__pad_0; /*0x5ad605*/
}



// ==== 0x005AD610  _DynamicVectorClass_N::Constructor_VectorClass_double_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_N::Constructor_VectorClass_double_(_DynamicVectorClass_N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5ad613*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5ad616*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5ad620*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad628*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5ad630*/
  }
  BYTE1(this->m_C) = 0; /*0x5ad63b*/
  this->m_8 = 0; /*0x5ad641*/
  if ( (a2 & 1) != 0 ) /*0x5ad648*/
    __3_YAXPAX_Z(this); /*0x5ad64b*/
  return this->__pad_0; /*0x5ad655*/
}



// ==== 0x005AD660  TypeList::BuildingTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::BuildingTypeCopy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x5ad66d*/
  this->? = 0; /*0x5ad670*/
  this->? = 1; /*0x5ad673*/
  this->? = 0; /*0x5ad677*/
  this->DynamicVectorClass = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ad67a*/
  if ( this != (TypeList *)a2 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)this); /*0x5ad682*/
    v3 = a2[2]; /*0x5ad688*/
    this->? = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x5ad696*/
      this->? = v4; /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        Capacity = this->?; /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        this->? = 1; /*0x5ad6ac*/
        if ( Capacity > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < this->? ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5ad6c8*/
      this->? = 0; /*0x5ad6cb*/
    }
  }
  this->? = a2[4]; /*0x5ad6d1*/
  this->? = a2[5]; /*0x5ad6d7*/
  this->DynamicVectorClass = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ad6da*/
  return &this->DynamicVectorClass; /*0x5ad6e2*/
}



// ==== 0x005AD6F0  StringVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall StringVector::Construct(StringVector *this, int a2, int a3)
{
  this->StringVector_field_0x04 = 0; /*0x5ad6fb*/
  this->StringVector_field_0x08 = a2; /*0x5ad6fe*/
  LOBYTE(this->StringVector_field_0x0C) = 1; /*0x5ad701*/
  BYTE1(this->StringVector_field_0x0C) = 0; /*0x5ad705*/
  *(_DWORD *)this->__pad_0 = &VectorClass<char *>::`vftable'; /*0x5ad708*/
  if ( a2 ) /*0x5ad70e*/
  {
    if ( a3 ) /*0x5ad716*/
    {
      this->StringVector_field_0x04 = a3; /*0x5ad718*/
      return this->__pad_0; /*0x5ad71e*/
    }
    this->StringVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5ad72d*/
    BYTE1(this->StringVector_field_0x0C) = 1; /*0x5ad730*/
  }
  return this->__pad_0; /*0x5ad71d*/
}



// ==== 0x005AD740  TileSystem::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TileSystem::Constructor(TileSystem *this, int a2, int a3)
{
  this->TileSystem_field_0x04 = 0; /*0x5ad74b*/
  this->TileSystem_field_0x08 = a2; /*0x5ad74e*/
  LOBYTE(this->TileSystem_field_0x0C) = 1; /*0x5ad751*/
  BYTE1(this->TileSystem_field_0x0C) = 0; /*0x5ad755*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x5ad758*/
  if ( a2 ) /*0x5ad75e*/
  {
    if ( a3 ) /*0x5ad766*/
    {
      this->TileSystem_field_0x04 = a3; /*0x5ad768*/
      return this->__pad_0; /*0x5ad76e*/
    }
    this->TileSystem_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5ad77d*/
    BYTE1(this->TileSystem_field_0x0C) = 1; /*0x5ad780*/
  }
  return this->__pad_0; /*0x5ad76d*/
}



// ==== 0x005AD790  Vector4::EraseAt  this=Vector4  sig=csp ====
char __thiscall Vector4::EraseAt(Vector4 *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q004; /*0x5ad790*/
  v3 = a2; /*0x5ad793*/
  if ( a2 >= v2 ) /*0x5ad799*/
    return 0; /*0x5ad7bc*/
  v4 = v2 - 1; /*0x5ad79b*/
  this->q004 = v4; /*0x5ad79e*/
  if ( a2 < v4 ) /*0x5ad7a1*/
  {
    do /*0x5ad7b4*/
    {
      ++v3; /*0x5ad7a7*/
      *(_DWORD *)(this->Vector4_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->Vector4_field_0x04 + 4 * v3); /*0x5ad7ab*/
    }
    while ( v3 < this->q004 ); /*0x5ad7b4*/
  }
  return 1; /*0x5ad7b9*/
}



// ==== 0x005AD7D0  DynamicVector::Add_Alt3  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt3(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ad7d3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5ad805*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5ad808*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5ad80e*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x5ad818*/
    LOBYTE(result) = 1; /*0x5ad81b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5ad7ff*/
  }
  return result; /*0x5ad801*/
}



// ==== 0x005AD820  RandomMap::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor(RandomMap *this, int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ad82b*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ad82e*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ad831*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ad835*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CellClass *>::`vftable'; /*0x5ad838*/
  if ( a2 ) /*0x5ad83e*/
  {
    if ( a3 ) /*0x5ad846*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ad848*/
      return this->__pad_0; /*0x5ad84e*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = __2_YAPAXI_Z(4 * a2); /*0x5ad85d*/
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ad860*/
  }
  return this->__pad_0; /*0x5ad84d*/
}



// ==== 0x005AD870  Heap::SiftDown  this=Heap  sig=csp ====
void __thiscall Heap::SiftDown(Heap *this, int a2)
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
  if ( 2 * a2 > *(_DWORD *)this /*0x5ad89b*/
    || *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * a2) + 4) <= (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * a2)
                                                                                       + 4) )
  {
    v3 = a2; /*0x5ad89d*/
  }
  if ( v4 <= *(_DWORD *)this /*0x5ad8b9*/
    && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2)
                                                                                                  + 4 * v4)
                                                                                      + 4) )
  {
    v3 = 2 * a2 + 1; /*0x5ad8bb*/
  }
  if ( v3 != a2 ) /*0x5ad8bf*/
  {
    do /*0x5ad91f*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5ad8c1*/
      v6 = 2 * v3 + 1; /*0x5ad8c4*/
      v7 = *(_DWORD *)(v5 + 4 * v2); /*0x5ad8cb*/
      *(_DWORD *)(v5 + 4 * v2) = *(_DWORD *)(v5 + 4 * v3); /*0x5ad8ce*/
      v2 = v3; /*0x5ad8d4*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) = v7; /*0x5ad8d6*/
      if ( 2 * v3 <= *(_DWORD *)this /*0x5ad8fb*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8 * v3)
                                                                                          + 4) )
      {
        v3 *= 2; /*0x5ad8fd*/
      }
      if ( v6 <= *(_DWORD *)this /*0x5ad919*/
        && *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3) + 4) > (double)*(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v6)
                                                                                          + 4) )
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
_DWORD *__thiscall Map_Cleanup(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x5ad9fb*/
  this->Capacity = a2; /*0x5ad9fe*/
  this->IsInitialized = 1; /*0x5ada01*/
  this->IsAllocated = 0; /*0x5ada05*/
  this->vtable0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ada08*/
  if ( a2 ) /*0x5ada0e*/
  {
    if ( a3 ) /*0x5ada16*/
    {
      this->Items = (void *)a3; /*0x5ada18*/
      return &this->vtable0; /*0x5ada1e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5ada2d*/
    this->IsAllocated = 1; /*0x5ada30*/
  }
  return &this->vtable0; /*0x5ada1d*/
}



// ==== 0x005ADA40  RandomMap::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_0(RandomMap *this, int a2, int a3)
{
  int v5; // eax

  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ada4a*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ada51*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ada54*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ada58*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x5ada5c*/
  if ( a2 ) /*0x5ada62*/
  {
    if ( a3 ) /*0x5ada6a*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ada6d*/
      return this->__pad_0; /*0x5ada78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x5ada81*/
    if ( v5 ) /*0x5ada8b*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = v5; /*0x5ada8e*/
      BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ada95*/
      return this->__pad_0; /*0x5ada9d*/
    }
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaa2*/
    *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adaa6*/
  }
  return this->__pad_0; /*0x5ada76*/
}



// ==== 0x005ADAB0  RandomMap::Constructor_1  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Constructor_1(RandomMap *this, int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adabb*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5adabe*/
  LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5adac1*/
  BYTE1(this->RandomMap_field_0xC) = 0; /*0x5adac5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<double>::`vftable'; /*0x5adac8*/
  if ( a2 ) /*0x5adace*/
  {
    if ( a3 ) /*0x5adad6*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5adad8*/
      return this->__pad_0; /*0x5adade*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = __2_YAPAXI_Z(8 * a2); /*0x5adaed*/
    BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaf0*/
  }
  return this->__pad_0; /*0x5adadd*/
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
int __thiscall Map_Delete(ObjectClass *this)
{
  bool v2; // bl
  int *v3; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]
  int v6; // [esp+0h] [ebp-E8h]
  MSEngine v7; // [esp+Ch] [ebp-DCh] BYREF
  DynamicVector v8[2]; // [esp+5Ch] [ebp-8Ch] BYREF
  void *v9[5]; // [esp+D4h] [ebp-14h] BYREF

  MSEngine::Construct(&v7); /*0x5add1e*/
  Map_Delete_5CEDD0(v8); /*0x5add27*/
  unknown_libname_73(v9); /*0x5add33*/
  v9[1] = (void *)Timer::GetTicks(); /*0x5add48*/
  v9[3] = 0; /*0x5add50*/
  *(_DWORD *)v7.__pad_0 = &MapSelect::`vftable'; /*0x5add5b*/
  v2 = ScenarioClass::Load((ScenarioClass *)&v7, (int)this) == 0; /*0x5add71*/
  DeleteAndZero((ObjectClass *)v9); /*0x5add74*/
  MSEngine::Destructor((MSEngine *)v8); /*0x5add7d*/
  MSEngine::Destruct(&v7); /*0x5add86*/
  if ( v2 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?, 134); /*0x5addba*/
    v3 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?, 134); /*0x5addc5*/
    Dialog::ShowMessageBox(v3, StringCSF, 0, 0, 0, v6); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen((const char *)this + 4700) != 0 ? (unsigned int)this + 4700 : 0;
  }
}



// ==== 0x005ADE20  Map_Delete_5ADE20  this=-  sig=csp ====
const char *__fastcall Map_Delete_5ADE20(int a1, const char *a2)
{
  bool v4; // bl
  int *v5; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-FCh]
  int v8; // [esp+0h] [ebp-ECh]
  ObjectClass v9; // [esp+Ch] [ebp-E0h] BYREF
  void *v10[5]; // [esp+D8h] [ebp-14h] BYREF

  String::Assign((String *)&v9, a2); /*0x5ade32*/
  MSEngine::Construct((MSEngine *)&v9.?); /*0x5ade3b*/
  Map_Delete_5CEDD0((DynamicVector *)&v9.customSound_controller[1]); /*0x5ade44*/
  unknown_libname_73(v10); /*0x5ade50*/
  v10[1] = (void *)Timer::GetTicks(); /*0x5ade61*/
  v10[3] = 0; /*0x5ade72*/
  v9.? = &MapSelect::`vftable'; /*0x5ade7d*/
  v4 = !SessionClass::LoadGameSession((SessionClass *)&v9.?, a1, (const char **)&v9); /*0x5ade93*/
  DeleteAndZero((ObjectClass *)v10); /*0x5ade96*/
  MSEngine::Destructor((MSEngine *)&v9.customSound_controller[1]); /*0x5ade9f*/
  MSEngine::Destruct((MSEngine *)&v9.?); /*0x5adea8*/
  DeleteAndZero(&v9); /*0x5adeb1*/
  if ( !v4 ) /*0x5adeb8*/
    return a2; /*0x5adf0b*/
  v9.AbstractClass = (void *)asc_82083C; /*0x5aded1*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?, 152); /*0x5adee5*/
  v5 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?, 152); /*0x5adef0*/
  Dialog::ShowMessageBox(v5, StringCSF, 0, 0, 0, v8); /*0x5adefa*/
  return 0; /*0x5adf01*/
}



// ==== 0x005ADF20  SessionClass::LoadGameSession  this=SessionClass  sig=csp ====
bool __thiscall SessionClass::LoadGameSession(SessionClass *this, int a2, const char **a3)
{
  int v4; // esi
  char *pad_50; // edi
  bool v7; // bl
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  char *v12; // eax
  String v13; // [esp+10h] [ebp-8h] BYREF

  if ( !a2 || (unsigned __int8)String::Equals_Alt((String *)a3, 0) ) /*0x5adf37*/
    return 0; /*0x5adf3e*/
  v4 = *(_DWORD *)(FootClass_Array.?[0] + 4 * *(_DWORD *)(*((_DWORD *)dword_A83C9C + *(_DWORD *)(a2 + 7284)) + 188)); /*0x5adf5b*/
  if ( !v4 ) /*0x5adf60*/
  {
    Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  Debug::Log(); /*0x5adf84*/
  String::Assign((String *)&v13.m_3[1], (const char *)(v4 + 36)); /*0x5adf91*/
  pad_50 = this->__pad_50; /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection((SessionClass *)pad_50, (char **)&v13.m_3[1]) == 0; /*0x5adfab*/
  DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check((CampaignClass *)pad_50, *(_WORD *)(a2 + 13728))) == 0 ) /*0x5adfea*/
  {
    SessionClass::Destruct((SessionClass *)pad_50); /*0x5adfb9*/
    Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName((char *)a2, &g_INI_DefaultBuffer); /*0x5ae013*/
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
  v11 = StringTable::Find((StringTable *)pad_50, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((String *)&v13.m_3[1], (const char **)(v11 + 4)); /*0x5ae041*/
  String::ToLower((String *)&v13.m_3[1]); /*0x5ae04a*/
  String::AssignFromPtr(&v13, a3); /*0x5ae058*/
  String::ToLower(&v13); /*0x5ae061*/
  if ( !v11 || !(unsigned __int8)String::Compare((String *)&v13.m_3[1], (const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero((ObjectClass *)&v13); /*0x5ae080*/
    DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = String::GetOrEmpty_Alt((String *)(v11 + 4)); /*0x5ae09b*/
  ScenarioClass::SetFileName((char *)a2, v12); /*0x5ae0a7*/
  *(_WORD *)(a2 + 13728) = Network_Load((ObjectClass *)pad_50, v11); /*0x5ae0b8*/
  DeleteAndZero((ObjectClass *)&v13); /*0x5ae0bf*/
  DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x5ae0c8*/
LABEL_17:
  SessionClass::Destruct((SessionClass *)pad_50); /*0x5ae0cd*/
  return strlen((const char *)(a2 + 4700)) != 0; /*0x5adf6f*/
}



// ==== 0x005AE100  ScenarioClass::Load  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Load(ScenarioClass *this, int a2)
{
  int v2; // ebx
  char result; // al
  int v5; // esi
  int v6; // eax
  char *v7; // esi
  int v8; // esi
  char *v9; // eax
  char *v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x5ae102*/
  result = CampaignClass::LoadMovieDisplay((int)this, a2); /*0x5ae10a*/
  if ( result ) /*0x5ae111*/
  {
    g_MissionQueueFrame.waypoints[478] = 0; /*0x5ae126*/
    String::Assign((String *)&a2, (const char *)(v2 + 4700)); /*0x5ae12d*/
    v5 = CampaignClass::DeleteAndZero((CampaignClass *)&this->nextScenario[20], (const char **)&a2); /*0x5ae145*/
    DeleteAndZero((ObjectClass *)&a2); /*0x5ae147*/
    Debug::Log(); /*0x5ae154*/
    if ( (unsigned __int8)String::NotEquals((String *)(v5 + 8), 0) ) /*0x5ae161*/
    {
      v6 = StringList::Find((StringList *)&unk_A83D10, &stru_82BA00.?); /*0x5ae178*/
      ThemeClass::Play((ThemeClass *)&unk_A83D10, v6); /*0x5ae183*/
      v7 = String::GetOrEmpty_Alt(**(String ***)(v5 + 88)); /*0x5ae192*/
      if ( v7 ) /*0x5ae196*/
      {
        Debug::Log(); /*0x5ae19e*/
        String::Assign((String *)&v10, v7); /*0x5ae1ab*/
        v8 = StringTable::Find((StringTable *)&this->nextScenario[20], (const char **)&v10); /*0x5ae1c0*/
        DeleteAndZero((ObjectClass *)&v10); /*0x5ae1c2*/
        String::AssignFromPtr((String *)&a2, (const char **)(v8 + 4)); /*0x5ae1cf*/
        if ( String::Length((String *)&a2) ) /*0x5ae1d8*/
        {
          v9 = String::GetOrEmpty((String *)&a2); /*0x5ae1e5*/
          ScenarioClass::SetFileName((char *)v2, v9); /*0x5ae1ed*/
          *(_WORD *)(v2 + 13728) = Network_Load((ObjectClass *)&this->nextScenario[20], v8); /*0x5ae1fa*/
        }
        DeleteAndZero((ObjectClass *)&a2); /*0x5ae205*/
      }
    }
    CampaignClass::ReleaseSubobjectsAndDestruct((CampaignClass *)this); /*0x5ae20c*/
    return 1; /*0x5ae214*/
  }
  return result; /*0x5ae113*/
}



// ==== 0x005AE220  CampaignClass::LoadMovieDisplay  this=CampaignClass  sig=csp ====
char __userpurge CampaignClass::LoadMovieDisplay@<al>(int this@<ecx>, ObjectClass a2)
{
  const char *vtable0; // ebp
  bool v4; // zf
  int v6; // edi
  bool v7; // bl
  int v8; // edi
  CampaignClass *v9; // eax
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // ebx
  int Ticks; // eax
  int v14; // [esp+14h] [ebp-8h]

  vtable0 = (const char *)a2.AbstractClass; /*0x5ae227*/
  v4 = a2.AbstractClass == 0; /*0x5ae22e*/
  *(_DWORD *)(this + 172) = 0; /*0x5ae231*/
  *(_DWORD *)(this + 176) = 0; /*0x5ae237*/
  *(_DWORD *)(this + 180) = 0; /*0x5ae23d*/
  if ( v4
    || (v6 = *(_DWORD *)(FootClass_Array.?[0]
                       + 4 * *(_DWORD *)(*((_DWORD *)dword_A83C9C + *((_DWORD *)vtable0 + 1821)) + 188))) == 0 )
  {
    Debug::Log(); /*0x5ae24a*/
    return 0; /*0x5ae252*/
  }
  else
  {
    Debug::Log(); /*0x5ae2a2*/
    String::Assign((String *)&a2, (const char *)(v6 + 36)); /*0x5ae2af*/
    v7 = SessionClass::LoadMapSelection((SessionClass *)(this + 80), (char **)&a2) == 0; /*0x5ae2c9*/
    DeleteAndZero(&a2); /*0x5ae2cc*/
    if ( v7 )
    {
      SessionClass::Destruct((SessionClass *)(this + 80)); /*0x5ae2d7*/
      Debug::Log(); /*0x5ae2e1*/
      return 0; /*0x5ae2e9*/
    }
    else
    {
      String::Assign((String *)&a2, vtable0 + 4700); /*0x5ae300*/
      v8 = CampaignClass::DeleteAndZero((CampaignClass *)(this + 80), (const char **)&a2); /*0x5ae315*/
      DeleteAndZero(&a2); /*0x5ae317*/
      if ( v8
        && ((v9 = (CampaignClass *)__2_YAPAXI_Z(0x20u)) == 0 ? (v10 = 0) : (v10 = CampaignClass::Constructor_1(v9, 1)),
            (*(_DWORD *)(this + 180) = v10) != 0) )
      {
        *(_DWORD *)(this + 72) = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden) /*0x5ae381*/
                                - 640)
                               / 2;
        v11 = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden) - 400) /*0x5ae3a3*/
            / 2;
        *(_DWORD *)(this + 76) = v11; /*0x5ae3a5*/
        *(_DWORD *)(this + 184) = *(_DWORD *)(this + 104); /*0x5ae3ac*/
        *(_DWORD *)(this + 188) = *(_DWORD *)(this + 108); /*0x5ae3b1*/
        *(_DWORD *)(this + 192) = *(_DWORD *)(this + 112); /*0x5ae3b7*/
        *(_DWORD *)(this + 196) = *(_DWORD *)(this + 116); /*0x5ae3bd*/
        *(_DWORD *)(this + 184) += *(_DWORD *)(this + 72); /*0x5ae3c7*/
        v12 = 0; /*0x5ae3d1*/
        *(_DWORD *)(this + 188) += v11; /*0x5ae3d3*/
        do /*0x5ae413*/
        {
          WideString::AssignFromPtr((wchar_t **)&a2, (const wchar_t **)(v8 + 16)); /*0x5ae3e1*/
          WrapWideStringText((const wchar_t **)&a2, *(int **)(this + 180), *(_DWORD *)(this + 192)); /*0x5ae3f7*/
          v8 = CampaignClass::Check((CampaignClass *)(this + 80), ++v12); /*0x5ae40a*/
          DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x5ae40c*/
        }
        while ( v8 ); /*0x5ae413*/
        String::Assign_Alt((String *)(this + 200), 0); /*0x5ae41c*/
        Ticks = Timer::GetTicks(); /*0x5ae425*/
        *(_DWORD *)(this + 216) = -1; /*0x5ae430*/
        *(_DWORD *)(this + 204) = Ticks; /*0x5ae43d*/
        *(_DWORD *)(this + 208) = v14; /*0x5ae445*/
        *(_DWORD *)(this + 212) = 0; /*0x5ae44b*/
        return 1; /*0x5ae448*/
      }
      else
      {
        Debug::Log(); /*0x5ae351*/
        CampaignClass::ReleaseSubobjectsAndDestruct((CampaignClass *)this); /*0x5ae35b*/
        return 0; /*0x5ae363*/
      }
    }
  }
}



// ==== 0x005AE460  CampaignClass::ReleaseSubobjectsAndDestruct  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::ReleaseSubobjectsAndDestruct(CampaignClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))this->scenario[35]; /*0x5ae463*/
  if ( v2 ) /*0x5ae46b*/
  {
    (**v2)(v2, 1); /*0x5ae471*/
    this->scenario[35] = 0; /*0x5ae473*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->scenario[34]; /*0x5ae47d*/
  if ( v3 ) /*0x5ae485*/
  {
    (**v3)(v3, 1); /*0x5ae48b*/
    this->scenario[34] = 0; /*0x5ae48d*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->scenario[33]; /*0x5ae497*/
  if ( v4 ) /*0x5ae49f*/
  {
    (**v4)(v4, 1); /*0x5ae4a5*/
    this->scenario[33] = 0; /*0x5ae4a7*/
  }
  return SessionClass::Destruct((SessionClass *)&this->scenario[10]); /*0x5ae4b9*/
}



// ==== 0x005AE4C0  MapSelect::CheckStringNotEmpty  this=MapSelect  sig=csp ====
char __thiscall MSEngine_Destru::CheckStringNotEmpty(MapSelect *this)
{
  char result; // al

  result = String::NotEquals((String *)&this->m_C8, 0); /*0x5ae4cb*/
  if ( result ) /*0x5ae4d2*/
  {
    if ( this->m_CC != -1 ) /*0x5ae4db*/
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
const char **__thiscall sub_5AE500(ObjectClass *this, char **a2)
{
  const char **result; // eax
  ObjectClass *v4; // [esp+0h] [ebp-8h]

  result = (const char **)String::NotEquals((String *)a2, 0); /*0x5ae50c*/
  if ( (_BYTE)result ) /*0x5ae513*/
  {
    result = sub_5CF840((ObjectClass *)this->customSound_controller, (const char **)a2); /*0x5ae519*/
    if ( result ) /*0x5ae520*/
      return (const char **)nullsub_24(v4); /*0x5ae524*/
  }
  return result; /*0x5ae529*/
}



// ==== 0x005AE530  ObjectClass::method_5AE530  this=ObjectClass  sig=csp ====
DWORD __thiscall sub_5AE530(ObjectClass *this, const char **a2, int a3)
{
  ObjectClass *v3; // esi
  DWORD result; // eax
  void *v5; // [esp+8h] [ebp-8h]

  v3 = this; /*0x5ae538*/
  String::Reassign((String *)this + 25, a2); /*0x5ae541*/
  result = Timer::GetTicks(); /*0x5ae54a*/
  v3 = (ObjectClass *)((char *)v3 + 204); /*0x5ae557*/
  v3->AbstractClass = (void *)result; /*0x5ae55d*/
  v3->? = v5; /*0x5ae55f*/
  v3->? = (void *)a3; /*0x5ae562*/
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
void __stdcall MSEngine_Destru::StubReturnFalse(MSEngine *this)
{
  ; /*0x5ae590*/
}



// ==== 0x005AE5A0  MapSelect::DestroyComposite  this=MapSelect  sig=csp ====
void **__thiscall MSEngine_Destru::DestroyComposite(MapSelect *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->m_C8); /*0x5ae5a9*/
  MSEngine::Destructor((MSEngine *)&this->__pad_0[80]); /*0x5ae5b1*/
  MSEngine::Destruct((MSEngine *)this); /*0x5ae5b8*/
  if ( (a2 & 1) != 0 ) /*0x5ae5c2*/
    __3_YAXPAX_Z(this); /*0x5ae5c5*/
  return (void **)this; /*0x5ae5cf*/
}



// ==== 0x005AE5E0  Matrix::Copy12Float  this=Matrix  sig=csp ====
_DWORD *__thiscall Matrix::Copy12Float(Matrix *this, int a2)
{
  _DWORD *result; // eax
  Matrix *v3; // edx
  int v4; // edi

  result = this->__pad_0; /*0x5ae5e5*/
  v3 = this; /*0x5ae5e8*/
  v4 = 12; /*0x5ae5ec*/
  do /*0x5ae5fa*/
  {
    *(_DWORD *)v3->__pad_0 = *(_DWORD *)&v3->__pad_0[a2 - (_DWORD)this]; /*0x5ae5f4*/
    v3 = (Matrix *)((char *)v3 + 4); /*0x5ae5f6*/
    --v4; /*0x5ae5f9*/
  }
  while ( v4 ); /*0x5ae5fa*/
  return result; /*0x5ae5fc*/
}



// ==== 0x005AE610  Transform::Copy  this=Transform  sig=csp ====
void *__thiscall Transform::Copy(Transform *this, const void *a2)
{
  qmemcpy(this, a2, 0x30u); /*0x5ae61f*/
  return this; /*0x5ae621*/
}



// ==== 0x005AE6F0  Matrix3D::Constructor  this=Matrix3D  sig=csp ====
int *__thiscall Matrix3D::Constructor(Matrix3D *this, float a2, float a3)
{
  float v5; // [esp+0h] [ebp-8h]

  *(_DWORD *)&this->m_1[3] = 0; /*0x5ae6fa*/
  *(_DWORD *)&this->m_5[3] = 0; /*0x5ae6fd*/
  *(_DWORD *)&this->m_9[3] = 0; /*0x5ae700*/
  this->q004 = 0; /*0x5ae703*/
  this->q018 = 0; /*0x5ae706*/
  this->q01C = 0; /*0x5ae709*/
  this->q008 = 0; /*0x5ae70c*/
  this->q024 = 0; /*0x5ae70f*/
  this->q02C = 0; /*0x5ae712*/
  *(_DWORD *)this->__pad_0 = 1065353216; /*0x5ae719*/
  this->q014 = 1065353216; /*0x5ae71b*/
  this->q028 = 1065353216; /*0x5ae71e*/
  Matrix2D::Rotate((int *)this->__pad_0, a2); /*0x5ae724*/
  Matrix3x3::RotateX((int *)this->__pad_0, a3); /*0x5ae730*/
  v5 = -a2; /*0x5ae73e*/
  Matrix2D::Rotate((int *)this->__pad_0, v5); /*0x5ae741*/
  return (int *)this->__pad_0; /*0x5ae748*/
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
  this->u32_4 = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  v10 = v5 * a2[1]; /*0x5ae7bf*/
  *(this + 3) = 0.0; /*0x5ae7c2*/
  this->u32_8 = v9 + v10; /*0x5ae7c7*/
  this->u32_4 = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  this->q050 = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  v13 = v5 * *a2; /*0x5ae7ff*/
  *(this + 7) = 0.0; /*0x5ae801*/
  this->u32_18 = v12 - v13; /*0x5ae806*/
  this->u32_8 = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(this + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(this + 11) = 0.0; /*0x5ae83f*/
  this->u32_28 = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return this; /*0x5ae851*/
}



// ==== 0x005AE860  Matrix3x4::Identity  this=Matrix3x4  sig=csp ====
int __thiscall Matrix3x4::Identity(Matrix3x4 *this)
{
  this->m_Data[0] = 1065353216; /*0x5ae867*/
  this->m_Data[1] = 0; /*0x5ae869*/
  this->m_Data[2] = 0; /*0x5ae86c*/
  this->m_Data[3] = 0; /*0x5ae86f*/
  this->m_Data[4] = 0; /*0x5ae872*/
  this->m_Data[5] = 1065353216; /*0x5ae875*/
  this->m_Data[6] = 0; /*0x5ae878*/
  this->m_Data[7] = 0; /*0x5ae87b*/
  this->m_Data[8] = 0; /*0x5ae87e*/
  this->m_Data[9] = 0; /*0x5ae881*/
  this->m_Data[10] = 1065353216; /*0x5ae884*/
  this->m_Data[11] = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}



// ==== 0x005AE890  Vector::MatrixMulVectorMath  this=Vector  sig=csp ====
int __thiscall Vector::MatrixMulVectorMath(int *this, float a2, float a3, float a4)
{
  int result; // eax

  *((float *)this + 3) = a3 * *((float *)this + 1) /*0x5ae8ab*/
                       + a4 * *((float *)this + 2)
                       + a2 * *(float *)this
                       + *((float *)this + 3);
  *((float *)this + 7) = a2 * *((float *)this + 4) /*0x5ae8ca*/
                       + a3 * *((float *)this + 5)
                       + a4 * *((float *)this + 6)
                       + *((float *)this + 7);
  *((float *)this + 11) = a2 * *((float *)this + 8) /*0x5ae8e9*/
                        + a3 * *((float *)this + 9)
                        + a4 * *((float *)this + 10)
                        + *((float *)this + 11);
  return result; /*0x5ae8ec*/
}



// ==== 0x005AE8F0  Matrix3x3::Multiply  this=Matrix3x3  sig=csp ====
int Matrix3x3::Multiply(int *this, float *a2)
{
  float *v2; // ecx
  int result; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float thisa; // [esp+8h] [ebp+4h]
  float thisb; // [esp+8h] [ebp+4h]

  result = (int)this; /*0x5ae8f1*/
  v4 = *(float *)this; /*0x5ae8f5*/
  thisa = v4 * *v2 + v2[3]; /*0x5ae8fe*/
  v2[3] = thisa; /*0x5ae902*/
  v9 = v4 * v2[4] + v2[7]; /*0x5ae90d*/
  v2[7] = v9; /*0x5ae911*/
  v5 = v4 * v2[8] + v2[11]; /*0x5ae917*/
  v2[11] = v5; /*0x5ae91a*/
  v6 = *(float *)(result + 4); /*0x5ae91d*/
  thisb = v6 * v2[1] + thisa; /*0x5ae929*/
  v2[3] = thisb; /*0x5ae92d*/
  v10 = v6 * v2[5] + v9; /*0x5ae939*/
  v2[7] = v10; /*0x5ae93d*/
  v7 = v5 + v6 * v2[9]; /*0x5ae943*/
  v2[11] = v7; /*0x5ae945*/
  v8 = *(float *)(result + 8); /*0x5ae948*/
  v2[3] = v8 * v2[2] + thisb; /*0x5ae954*/
  v2[7] = v8 * v2[6] + v10; /*0x5ae960*/
  v2[11] = v8 * v2[10] + v7; /*0x5ae968*/
  return result; /*0x5ae96e*/
}



// ==== 0x005AE980  Matrix3x4::Translate  this=Matrix3x4  sig=csp ====
int __thiscall Matrix3x4::Translate(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *(float *)this + *((float *)this + 3); /*0x5ae989*/
  *((float *)this + 7) = a2 * *((float *)this + 4) + *((float *)this + 7); /*0x5ae996*/
  *((float *)this + 11) = a2 * *((float *)this + 8) + *((float *)this + 11); /*0x5ae9a3*/
  return result; /*0x5ae9a6*/
}



// ==== 0x005AE9B0  Matrix3x3::ApplyCol0  this=Matrix3x3  sig=csp ====
int __thiscall Matrix3x3::ApplyCol0(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *((float *)this + 1) + *((float *)this + 3); /*0x5ae9ba*/
  *((float *)this + 7) = a2 * *((float *)this + 5) + *((float *)this + 7); /*0x5ae9c7*/
  *((float *)this + 11) = a2 * *((float *)this + 9) + *((float *)this + 11); /*0x5ae9d4*/
  return result; /*0x5ae9d7*/
}



// ==== 0x005AE9E0  Matrix3x3::ApplyCol1  this=Matrix3x3  sig=csp ====
int __thiscall Matrix3x3::ApplyCol1(int *this, float a2)
{
  int result; // eax

  *((float *)this + 3) = a2 * *((float *)this + 2) + *((float *)this + 3); /*0x5ae9ea*/
  *((float *)this + 7) = a2 * *((float *)this + 6) + *((float *)this + 7); /*0x5ae9f7*/
  *((float *)this + 11) = a2 * *((float *)this + 10) + *((float *)this + 11); /*0x5aea04*/
  return result; /*0x5aea07*/
}



// ==== 0x005AEA10  TacticalMap::MultiplyByScalar  this=ObjectClass  sig=csp ====
void __thiscall sub_5AEA10(float *this, float a2)
{
  *this = a2 * *this; /*0x5aea16*/
  this->vtable2 = a2 * this->vtable2; /*0x5aea1f*/
  this->vtable3 = a2 * this->vtable3; /*0x5aea29*/
  this->vtable2 = a2 * this->vtable2; /*0x5aea33*/
  this->abstractFlags = a2 * this->abstractFlags; /*0x5aea3d*/
  this->objectTypeFlags = a2 * this->objectTypeFlags; /*0x5aea47*/
  this->vtable3 = a2 * this->vtable3; /*0x5aea51*/
  this->nextArrayIndex = a2 * this->nextArrayIndex; /*0x5aea5b*/
  this->owningHouseIndex = a2 * this->owningHouseIndex; /*0x5aea65*/
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
int __thiscall sub_5AEC40(ObjectClass *this, float a2)
{
  int result; // eax
  void *NeedsSaveOrLink; // [esp+0h] [ebp-24h]
  int uniqueId; // [esp+4h] [ebp-20h]
  int occupant; // [esp+8h] [ebp-1Ch]
  int abstractFlags; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int nextArrayIndex; // [esp+14h] [ebp-10h]
  int fallRate; // [esp+18h] [ebp-Ch]
  double v19; // [esp+1Ch] [ebp-8h]

  __asm { fld [esp+24h+arg_0] } /*0x5aec43*/
  __asm { fstp [esp+2Ch+var_8] }
  Math::SinCos(v19); /*0x5aec5a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aec5f*/
  Math::ArcTan2(v19); /*0x5aec65*/
  __asm { fld [esp+40h+arg_0] } /*0x5aec70*/
  abstractFlags = this->?; /*0x5aec74*/
  __asm { fchs } /*0x5aec7b*/
  NeedsSaveOrLink = this->?; /*0x5aec7d*/
  __asm /*0x5aec84*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  uniqueId = this->?; /*0x5aec8a*/
  nextArrayIndex = this->?; /*0x5aec8e*/
  __asm { fld [esp+40h+var_20] } /*0x5aec92*/
  __asm { fmul st, st(3) }
  occupant = this->occupant; /*0x5aec9e*/
  LODWORD(v19) = this->?; /*0x5aeca2*/
  result = this->owningHouseIndex; /*0x5aeca6*/
  __asm { faddp st(1), st } /*0x5aecac*/
  v16 = result; /*0x5aecae*/
  fallRate = this->fallRate; /*0x5aecb2*/
  __asm { fstp dword ptr [esi+10h] } /*0x5aecb9*/
  this->? = _ET1; /*0x5aecb9*/
  __asm /*0x5aecbc*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->? = _ET1; /*0x5aecca*/
  __asm /*0x5aeccd*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->? = _ET1; /*0x5aecdb*/
  __asm /*0x5aecde*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+1Ch]
  }
  this->? = _ET1; /*0x5aecec*/
  __asm /*0x5aecef*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  this->? = _ET1; /*0x5aed01*/
  __asm /*0x5aed04*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  this->occupant = _ET1; /*0x5aed14*/
  __asm /*0x5aed17*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  this->owningHouseIndex = _ET1; /*0x5aed27*/
  __asm /*0x5aed2a*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+2Ch] }
  this->fallRate = _ET1; /*0x5aed3b*/
  __asm { fstp st } /*0x5aed40*/
  return result; /*0x5aed42*/
}



// ==== 0x005AED50  ObjectClass::method_5AED50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AED50(ObjectClass *this, float a2)
{
  int result; // eax
  void *vtable1; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-18h]
  void *vtable2; // [esp+8h] [ebp-14h]
  int owningHouseIndex; // [esp+Ch] [ebp-10h]
  void *vtable3; // [esp+10h] [ebp-Ch]
  double v17; // [esp+14h] [ebp-8h]

  __asm { fld [esp+1Ch+arg_0] } /*0x5aed53*/
  __asm { fstp [esp+24h+var_8] }
  _ESI = this; /*0x5aed66*/
  Math::SinCos(v17); /*0x5aed6a*/
  __asm { fstp [esp+30h+arg_0] } /*0x5aed6f*/
  Math::ArcTan2(v17); /*0x5aed75*/
  __asm /*0x5aed7a*/
  {
    fld [esp+38h+arg_0]
    fchs
    fld dword ptr [esi]
    fld dword ptr [esi+20h]
    fld st
    fmul [esp+38h+arg_0]
  }
  __asm
  {
    fld st(2)
    fmul st, st(5)
  }
  vtable1 = _ESI->?; /*0x5aed95*/
  result = _ESI->occupant; /*0x5aed99*/
  v13 = result; /*0x5aed9c*/
  vtable2 = _ESI->?; /*0x5aeda0*/
  __asm { faddp st(1), st } /*0x5aeda4*/
  owningHouseIndex = _ESI->owningHouseIndex; /*0x5aedac*/
  vtable3 = _ESI->?; /*0x5aedb0*/
  __asm { fstp dword ptr [esi] } /*0x5aedb4*/
  *(float *)&_ESI->AbstractClass = _ET1; /*0x5aedb4*/
  __asm /*0x5aedb6*/
  {
    fld [esp+38h+var_18]
    fmul [esp+38h+arg_0]
    fld [esp+38h+var_1C]
    fmul st, st(5)
  }
  LODWORD(v17) = _ESI->fallRate; /*0x5aedca*/
  __asm /*0x5aedce*/
  {
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aedd0*/
  __asm /*0x5aedd3*/
  {
    fld [esp+28h+var_10]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_14]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aede3*/
  __asm /*0x5aede6*/
  {
    fld dword ptr [esp+28h+var_8]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_C]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aedf6*/
  __asm /*0x5aedf9*/
  {
    fxch st(1)
    fmul st, st(2)
    fxch st(1)
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  *(float *)&_ESI->? = _ET1; /*0x5aee03*/
  __asm /*0x5aee06*/
  {
    fld [esp+28h+var_1C]
    fmul st, st(1)
    fld [esp+28h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  *(float *)&_ESI->occupant = _ET1; /*0x5aee14*/
  __asm /*0x5aee17*/
  {
    fld [esp+28h+var_14]
    fmul st, st(1)
    fld [esp+28h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  *(float *)&_ESI->owningHouseIndex = _ET1; /*0x5aee25*/
  __asm /*0x5aee28*/
  {
    fld [esp+28h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+28h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5aee36*/
  __asm { fstp st } /*0x5aee39*/
  __asm { fstp st }
  return result; /*0x5aee40*/
}



// ==== 0x005AEE50  ObjectClass::method_5AEE50  this=ObjectClass  sig=csp ====
int __thiscall sub_5AEE50(ObjectClass *this, float a2)
{
  int result; // eax
  int uniqueId; // [esp+0h] [ebp-24h]
  void *vtable0; // [esp+4h] [ebp-20h]
  int abstractFlags; // [esp+8h] [ebp-1Ch]
  void *vtable1; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  void *vtable2; // [esp+14h] [ebp-10h]
  int referenceCount; // [esp+18h] [ebp-Ch]
  double v19; // [esp+1Ch] [ebp-8h]

  __asm { fld [esp+24h+arg_0] } /*0x5aee53*/
  __asm { fstp [esp+2Ch+var_8] }
  Math::SinCos(v19); /*0x5aee6a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aee6f*/
  Math::ArcTan2(v19); /*0x5aee75*/
  __asm { fld [esp+40h+arg_0] } /*0x5aee7f*/
  vtable1 = this->?; /*0x5aee83*/
  __asm { fchs } /*0x5aee8a*/
  uniqueId = this->?; /*0x5aee8c*/
  __asm /*0x5aee93*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  vtable0 = this->AbstractClass; /*0x5aee99*/
  vtable2 = this->?; /*0x5aee9d*/
  __asm { fld [esp+40h+var_20] } /*0x5aeea1*/
  __asm { fmul st, st(3) }
  abstractFlags = this->?; /*0x5aeead*/
  LODWORD(v19) = this->?; /*0x5aeeb1*/
  result = this->?; /*0x5aeeb5*/
  __asm { faddp st(1), st } /*0x5aeebb*/
  v16 = result; /*0x5aeebd*/
  referenceCount = this->?; /*0x5aeec1*/
  __asm { fstp dword ptr [esi] } /*0x5aeec8*/
  this->AbstractClass = _ET1; /*0x5aeec8*/
  __asm /*0x5aeeca*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  this->? = _ET1; /*0x5aeed8*/
  __asm /*0x5aeedb*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  this->? = _ET1; /*0x5aeee9*/
  __asm /*0x5aeeec*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  this->? = _ET1; /*0x5aeefa*/
  __asm /*0x5aeefd*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  this->? = _ET1; /*0x5aef0f*/
  __asm /*0x5aef12*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->? = _ET1; /*0x5aef22*/
  __asm /*0x5aef25*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->? = _ET1; /*0x5aef35*/
  __asm /*0x5aef38*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+1Ch] }
  this->? = _ET1; /*0x5aef49*/
  __asm { fstp st } /*0x5aef4e*/
  return result; /*0x5aef50*/
}



// ==== 0x005AEF60  Matrix3x3::RotateX  this=ObjectClass  sig=csp ====
int __thiscall Matrix3x3::RotateX(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5aef63*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5aef76*/
  Math::SinCos(v10); /*0x5aef7a*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5aef7f*/
  result = Math::ArcTan2(v10); /*0x5aef85*/
  __asm /*0x5aef8a*/
  {
    fld dword ptr [esi+4]
    fld dword ptr [esi+8]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+24h+arg_0]
  }
  __asm { faddp st(1), st }
  __asm { fstp dword ptr [esi+4] }
  _ESI[1] = _ET1; /*0x5aefa0*/
  __asm /*0x5aefa3*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+8]
  }
  _ESI[2] = _ET1; /*0x5aefad*/
  __asm /*0x5aefb0*/
  {
    fld dword ptr [esi+14h]
    fld dword ptr [esi+18h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  _ESI[5] = _ET1; /*0x5aefc2*/
  __asm /*0x5aefc5*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+18h]
  }
  _ESI[6] = _ET1; /*0x5aefcf*/
  __asm /*0x5aefd2*/
  {
    fld dword ptr [esi+24h]
    fld dword ptr [esi+28h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  _ESI[9] = _ET1; /*0x5aefe4*/
  __asm /*0x5aefe7*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+28h]
  }
  _ESI[10] = _ET1; /*0x5aeff1*/
  __asm { fstp st } /*0x5aeff6*/
  return result; /*0x5aeff8*/
}



// ==== 0x005AF000  ObjectClass::method_5AF000  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF000(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = this->vtable2; /*0x5af000*/
  v4 = this->vtable3; /*0x5af003*/
  this->vtable2 = v4 * a2 + v3 * a3; /*0x5af014*/
  this->vtable3 = v4 * a3 - v3 * a2; /*0x5af023*/
  v5 = this->abstractFlags; /*0x5af026*/
  v6 = this->nextArrayIndex; /*0x5af029*/
  this->abstractFlags = v6 * a2 + v5 * a3; /*0x5af03a*/
  this->nextArrayIndex = v6 * a3 - v5 * a2; /*0x5af049*/
  v7 = this->objectTypeFlags; /*0x5af04c*/
  v8 = this->owningHouseIndex; /*0x5af04f*/
  this->objectTypeFlags = v8 * a2 + v7 * a3; /*0x5af060*/
  this->owningHouseIndex = v8 * a3 - v7 * a2; /*0x5af06f*/
}



// ==== 0x005AF080  Matrix3D::RotateZ  this=RecoilData  sig=csp ====
int __thiscall Matrix3D::RotateZ(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5af083*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5af096*/
  Math::SinCos(v10); /*0x5af09a*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5af09f*/
  result = Math::ArcTan2(v10); /*0x5af0a5*/
  __asm /*0x5af0aa*/
  {
    fld dword ptr [esi]
    fld dword ptr [esi+8]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+24h+arg_0]
  }
  __asm { fsubp st(1), st }
  __asm { fstp dword ptr [esi] }
  *_ESI = _ET1; /*0x5af0bf*/
  __asm /*0x5af0c1*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  _ESI[2] = _ET1; /*0x5af0cb*/
  __asm /*0x5af0ce*/
  {
    fld dword ptr [esi+10h]
    fld dword ptr [esi+18h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+10h]
  }
  _ESI[4] = _ET1; /*0x5af0e0*/
  __asm /*0x5af0e3*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  _ESI[6] = _ET1; /*0x5af0ed*/
  __asm /*0x5af0f0*/
  {
    fld dword ptr [esi+20h]
    fld dword ptr [esi+28h]
    fld st(1)
    fmul st, st(3)
    fld st(1)
    fmul [esp+10h+arg_0]
    fsubp st(1), st
    fstp dword ptr [esi+20h]
  }
  _ESI[8] = _ET1; /*0x5af102*/
  __asm /*0x5af105*/
  {
    fmul st, st(2)
    fxch st(1)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  _ESI[10] = _ET1; /*0x5af10f*/
  __asm { fstp st } /*0x5af114*/
  return result; /*0x5af116*/
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



// ==== 0x005AF1A0  Matrix2D::Rotate  this=Matrix2D  sig=csp ====
int __thiscall Matrix2D::Rotate(int *this, float a2)
{
  int result; // eax
  double v10; // [esp+0h] [ebp-8h]

  __asm { fld [esp+8+arg_0] } /*0x5af1a3*/
  __asm { fstp [esp+10h+var_8] }
  _ESI = (float *)this; /*0x5af1b6*/
  Math::ArcTan2(v10); /*0x5af1ba*/
  __asm { fstp [esp+1Ch+arg_0] } /*0x5af1bf*/
  result = Math::SinCos(v10); /*0x5af1c5*/
  __asm /*0x5af1ca*/
  {
    fld dword ptr [esi]
    fld dword ptr [esi+4]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+24h+arg_0]
  }
  __asm { faddp st(1), st }
  __asm { fstp dword ptr [esi] }
  *_ESI = _ET1; /*0x5af1df*/
  __asm /*0x5af1e1*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+4]
  }
  _ESI[1] = _ET1; /*0x5af1eb*/
  __asm /*0x5af1ee*/
  {
    fld dword ptr [esi+10h]
    fld dword ptr [esi+14h]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  _ESI[4] = _ET1; /*0x5af200*/
  __asm /*0x5af203*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+14h]
  }
  _ESI[5] = _ET1; /*0x5af20d*/
  __asm /*0x5af210*/
  {
    fld dword ptr [esi+20h]
    fld dword ptr [esi+24h]
    fld st
    fmul st, st(3)
    fld st(2)
    fmul [esp+10h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  _ESI[8] = _ET1; /*0x5af222*/
  __asm /*0x5af225*/
  {
    fmul [esp+10h+arg_0]
    fxch st(1)
    fmul st, st(2)
    fsubp st(1), st
    fstp dword ptr [esi+24h]
  }
  _ESI[9] = _ET1; /*0x5af22f*/
  __asm { fstp st } /*0x5af234*/
  return result; /*0x5af236*/
}



// ==== 0x005AF2C0  ObjectClass::method_5AF2C0  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF2C0(ObjectClass *this)
{
  float v2[3]; // [esp+0h] [ebp-24h] BYREF
  float v3[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x5af2ce*/
  return *TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af303*/
}



// ==== 0x005AF310  ObjectClass::method_5AF310  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF310(ObjectClass *this)
{
  float *v1; // eax
  float v3[4]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af31e*/
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af336*/
  v3[3] = *v1; /*0x5af33d*/
  return v1[1]; /*0x5af353*/
}



// ==== 0x005AF360  ObjectClass::method_5AF360  this=ObjectClass  sig=csp ====
double __thiscall sub_5AF360(ObjectClass *this)
{
  float *v1; // eax
  float v3[5]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af36e*/
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af386*/
  v3[3] = *v1; /*0x5af38d*/
  v3[4] = v1[1]; /*0x5af394*/
  return v1[2]; /*0x5af3a3*/
}



// ==== 0x005AF3B0  ObjectClass::method_5AF3B0  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF3B0(ObjectClass *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 0.0; /*0x5af3be*/
  v2[1] = 1.0; /*0x5af3c6*/
  v2[2] = 0.0; /*0x5af3ce*/
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af3d6*/
  Math::CalcAngle(v1[2], v1[1]); /*0x5af404*/
}



// ==== 0x005AF410  TechnoClass::CalcFacingFromMatrix  this=TechnoClass  sig=csp ====
void __thiscall sub_5AF410(float *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 0.0; /*0x5af41e*/
  v2[1] = 0.0; /*0x5af426*/
  v2[2] = 1.0; /*0x5af42e*/
  v1 = TransformMatrix3x4Point(v3, this, v2); /*0x5af436*/
  Math::CalcAngle(*v1, v1[2]); /*0x5af464*/
}



// ==== 0x005AF470  ObjectClass::method_5AF470  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF470(ObjectClass *this)
{
  float *v1; // eax
  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF

  v2[0] = 1.0; /*0x5af47e*/
  v2[1] = 0.0; /*0x5af486*/
  v2[2] = 0.0; /*0x5af48e*/
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af496*/
  Math::CalcAngle(v1[1], *v1); /*0x5af4c4*/
}



// ==== 0x005AF4D0  Matrix3x3::TransformPoint  this=Matrix3x3  sig=csp ====
int Matrix3x3::TransformPoint(int *this, float *a2, float *a3)
{
  float *v3; // ecx
  double v4; // st7
  double v5; // st6
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v7 = v3[1] * a2[1] + v3[2] * a2[2] + *a2 * *v3; /*0x5af4eb*/
  v8 = v3[5] * a2[1] + v3[4] * *a2 + v3[6] * a2[2]; /*0x5af508*/
  v4 = v3[9] * a2[1] + v3[8] * *a2; /*0x5af517*/
  v5 = v3[10] * a2[2]; /*0x5af51c*/
  *(float *)this = v7; /*0x5af527*/
  v9 = v4 + v5; /*0x5af52d*/
  *((float *)this + 1) = v8; /*0x5af531*/
  *((float *)this + 2) = v9; /*0x5af538*/
  return (int)this; /*0x5af53b*/
}



// ==== 0x005AF550  ObjectClass::method_5AF550  this=ObjectClass  sig=csp ====
void __thiscall sub_5AF550(ObjectClass *this, float *a2, float *a3, float a4)
{
  double v18; // [esp+0h] [ebp-28h]
  double v19; // [esp+0h] [ebp-28h]
  float v20; // [esp+0h] [ebp-28h]
  int v25; // [esp+14h] [ebp-14h]
  float v28; // [esp+18h] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-Ch]
  float v31; // [esp+20h] [ebp-8h]
  int v32; // [esp+24h] [ebp-4h]
  float v34; // [esp+2Ch] [ebp+4h]
  float *v36; // [esp+30h] [ebp+8h]
  float *v37; // [esp+30h] [ebp+8h]

  _EAX = a3; /*0x5af553*/
  _EDI = a2; /*0x5af559*/
  __asm /*0x5af55d*/
  {
    fld dword ptr [eax]
    fsub dword ptr [edi]
  }
  _ESI = this; /*0x5af564*/
  __asm /*0x5af566*/
  {
    fstp [esp+28h+var_18]
    fld dword ptr [eax+4]
    fsub dword ptr [edi+4]
    fstp [esp+28h+arg_4]
    fld dword ptr [eax+8]
    fsub dword ptr [edi+8]
    fst [esp+28h+var_14]
    fmul [esp+28h+var_14]
    fstp [esp+28h+var_C]
    fld [esp+28h+var_18]
    fmul [esp+28h+var_18]
    fstp [esp+28h+var_10]
    fld [esp+28h+arg_4]
    fmul [esp+28h+arg_4]
    fadd [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  Math::Sqrt(v18); /*0x5af5a5*/
  __asm /*0x5af5aa*/
  {
    fstp [esp+28h+arg_0]
    fld [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  Math::Sqrt(v19); /*0x5af5b9*/
  __asm /*0x5af5be*/
  {
    fld [esp+28h+arg_0]
    fcomp ds:flt_7E1748
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x5af5d0*/
  {
    v31 = 0.0; /*0x5af5ea*/
    v28 = 1.0; /*0x5af5f2*/
  }
  else
  {
    __asm /*0x5af5d2*/
    {
      fld [esp+20h+arg_4]
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_8]
      fld st
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_10]
    }
  }
  __asm /*0x5af5fa*/
  {
    fcom ds:flt_7E1748
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5af605*/
  {
    __asm { fstp st } /*0x5af61f*/
    v30 = 0.0; /*0x5af621*/
    v34 = 1.0; /*0x5af629*/
  }
  else
  {
    __asm /*0x5af607*/
    {
      fld [esp+20h+var_18]
      fdiv st, st(1)
      fstp [esp+20h+var_C]
      fld [esp+20h+var_14]
      fdiv st, st(1)
      fstp [esp+20h+arg_0]
      fstp st
    }
  }
  _ESI->AbstractClass = (void *)1065353216; /*0x5af638*/
  _ESI->? = 0; /*0x5af63a*/
  _ESI->? = 0; /*0x5af63d*/
  _ESI->? = 0; /*0x5af640*/
  _ESI->? = 0; /*0x5af643*/
  _ESI->? = 1065353216; /*0x5af646*/
  _ESI->? = 0; /*0x5af649*/
  _ESI->? = 0; /*0x5af64c*/
  _ESI->? = 0; /*0x5af64f*/
  _ESI->occupant = 0; /*0x5af652*/
  _ESI->owningHouseIndex = 1065353216; /*0x5af655*/
  _ESI->fallRate = 0; /*0x5af658*/
  __asm { fld dword ptr [edi] } /*0x5af65b*/
  v36 = 0; /*0x5af65d*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af669*/
  *(float *)&_ESI->? = _ET1; /*0x5af669*/
  __asm { fld ds:flt_7E1748 } /*0x5af66c*/
  __asm
  {
    fst [esp+24h+var_18]
    fst dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af677*/
  __asm { fstp dword ptr [esi+2Ch] } /*0x5af67a*/
  *(float *)&_ESI->fallRate = _ET1; /*0x5af67a*/
  __asm { fadd [esp+24h+arg_4] } /*0x5af680*/
  v25 = *((_DWORD *)_EDI + 1); /*0x5af684*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af68d*/
  *(float *)&_ESI->? = _ET1; /*0x5af68d*/
  __asm /*0x5af690*/
  {
    fld [esp+28h+var_14]
    fadd dword ptr [esi+1Ch]
    fst [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af69b*/
  __asm /*0x5af69e*/
  {
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_18]
  }
  v37 = 0; /*0x5af6a6*/
  __asm /*0x5af6ae*/
  {
    fst [esp+28h+var_18]
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5af6b2*/
  __asm { fld [esp+28h+arg_4] } /*0x5af6b5*/
  __asm { fadd st, st(1) }
  v32 = *((_DWORD *)_EDI + 2); /*0x5af6be*/
  __asm { fstp dword ptr [esi+0Ch] } /*0x5af6c4*/
  *(float *)&_ESI->? = _ET1; /*0x5af6c4*/
  __asm /*0x5af6c7*/
  {
    fstp st
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&_ESI->? = _ET1; /*0x5af6d1*/
  __asm /*0x5af6d4*/
  {
    fld [esp+28h+var_18]
    fadd [esp+28h+var_4]
    fstp dword ptr [esi+2Ch]
  }
  *(float *)&_ESI->fallRate = _ET1; /*0x5af6dc*/
  sub_5AF120((float *)_ESI, v30, v34); /*0x5af6df*/
  __asm { fld [esp+20h+var_8] } /*0x5af6e8*/
  __asm
  {
    fchs
    fstp dword ptr [esp+28h+var_28]; float
  }
  sub_5AF000((float *)_ESI, v20, v28); /*0x5af6f5*/
  Matrix2D::Rotate((int *)_ESI, a4); /*0x5af701*/
}



// ==== 0x005AF980  MultiplyMatrix3x4  this=-  sig=csp ====
float *__fastcall Matrix3x4_Multiply(float *a1, float *a2, float *a3)
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
  float v26; // [esp+74h] [ebp+4h]

  result = a1; /*0x5af983*/
  v14 = a2[4]; /*0x5af98a*/
  v13 = a2[5]; /*0x5af991*/
  v4 = *a2; /*0x5af998*/
  v12 = a2[6]; /*0x5af99a*/
  v5 = a2[1]; /*0x5af9a1*/
  v6 = a2[2]; /*0x5af9a4*/
  v17 = a2[8]; /*0x5af9a7*/
  v16 = a2[9]; /*0x5af9ae*/
  v15 = a2[10]; /*0x5af9b5*/
  v8 = *a3; /*0x5af9bd*/
  v9 = a3[4]; /*0x5af9bf*/
  v10 = a3[8]; /*0x5af9c2*/
  v19 = a3[1]; /*0x5af9d0*/
  v22 = a3[2]; /*0x5af9dd*/
  v24 = a3[3]; /*0x5af9e4*/
  v18 = a3[5]; /*0x5af9ed*/
  v21 = a3[6]; /*0x5af9f4*/
  v11 = a3[7]; /*0x5af9f8*/
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  v26 = a3[9]; /*0x5afa12*/
  v20 = a3[10]; /*0x5afa1c*/
  v23 = a3[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = v26 * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = v26 * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = v26 * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a2[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a2[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a2[11]; /*0x5afb6e*/
  qmemcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}



// ==== 0x005AFB80  TransformMatrix3x4Point  this=-  sig=csp ====
float *__fastcall Matrix3x4_TransformPoint(float *a1, float *a2, float *a3)
{
  double v4; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = a2[2] * a3[2] + a2[1] * a3[1] + *a2 * *a3 + a2[3]; /*0x5afba1*/
  v6 = a2[4] * *a3 + a2[6] * a3[2] + a2[5] * a3[1] + a2[7]; /*0x5afbbd*/
  v4 = a2[8] * *a3 + a2[10] * a3[2] + a2[9] * a3[1] + a2[11]; /*0x5afbd7*/
  *a1 = v5; /*0x5afbde*/
  v7 = v4; /*0x5afbe4*/
  a1[1] = v6; /*0x5afbe8*/
  a1[2] = v7; /*0x5afbef*/
  return a1; /*0x5afbf2*/
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
  dbl_ABEE48 = dbl_ABEDF8 / 60.0; /*0x5afd1c*/
}



// ==== 0x005AFD30  sub_5AFD30  this=-  sig=ida-proto ====
void sub_5AFD30()
{
  dbl_ABEE30 = 1.0 / dbl_ABEE48; /*0x5afd3c*/
}



// ==== 0x005AFD50  sub_5AFD50  this=-  sig=ida-proto ====
void sub_5AFD50()
{
  dbl_ABEE28 = 0.0174532925199433 * 45.0; /*0x5afd5c*/
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
  dword_ABEE50 = result; /*0x5afddb*/
  return result; /*0x5afde0*/
}



// ==== 0x005AFDF0  sub_5AFDF0  this=-  sig=ida-proto ====
void sub_5AFDF0()
{
  dbl_ABEE08 = Math::ArcTan((double)dword_ABEE50 * 0.00390625); /*0x5afe07*/
}



// ==== 0x005AFE20  sub_5AFE20  this=-  sig=ida-proto ====
void sub_5AFE20()
{
  dbl_ABEE20 = Math::ArcTan((double)(2 * dword_ABEE50) / dbl_ABEDF8); /*0x5afe42*/
}



// ==== 0x005AFE50  sub_5AFE50  this=-  sig=ida-proto ====
__int64 sub_5AFE50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEE50) + 0.5); /*0x5afe6b*/
  dword_ABEE44 = result; /*0x5afe70*/
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
  dword_ABEE10 = 0; /*0x5afe92*/
  dword_ABEE14 = 0; /*0x5afe97*/
  dword_ABEE18 = 0; /*0x5afe9c*/
  return 0; /*0x5afea1*/
}



// ==== 0x005AFEB0  sub_5AFEB0  this=-  sig=ida-proto ====
int sub_5AFEB0()
{
  dword_ABEE40 = 0; /*0x5afeb5*/
  dword_ABEE38 = 128; /*0x5afebf*/
  dword_ABEE3C = 128; /*0x5afec4*/
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
int __thiscall SmallFunc_5AFEF0(MechLocomotionClass *this)
{
  int v2; // eax

  LocomotionClass::Init((LocomotionClass *)this); /*0x5afef3*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff01*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff0a*/
  this->MovingDestination[2] = g_MissionQueueFrame.localVariables[229]; /*0x5aff16*/
  this->HeadToCoord[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff1e*/
  this->HeadToCoord[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff26*/
  v2 = g_MissionQueueFrame.localVariables[229]; /*0x5aff29*/
  this->IsMoving = 0; /*0x5aff2e*/
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5aff32*/
  this->HeadToCoord[2] = v2; /*0x5aff38*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5aff3b*/
  return (int)this->LocomotionClass; /*0x5aff44*/
}



// ==== 0x005AFF50  MechLocomotionClass::method_5AFF50  this=MechLocomotionClass  sig=csp ====
void __thiscall sub_5AFF50(MechLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5aff50*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5aff56*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5aff5d*/
}



// ==== 0x005AFF70  JumpjetLocomotionClass::SmallStub_5AFF70  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_5AFF70(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Accel); /*0x5aff77*/
}



// ==== 0x005AFF80  JumpjetLocomotionClass::GetMovementCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // edx
  int Speed; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x5aff89*/
  {
    result = a2; /*0x5aff90*/
    TurnRate = this->TurnRate; /*0x5aff97*/
    Speed = this->Speed; /*0x5aff9a*/
    v5 = a2; /*0x5aff9d*/
    *a2 = this->?; /*0x5aff9f*/
  }
  else
  {
    result = a2; /*0x5affac*/
    TurnRate = g_MissionQueueFrame.localVariables[228]; /*0x5affb6*/
    Speed = g_MissionQueueFrame.localVariables[229]; /*0x5affbc*/
    v5 = a2; /*0x5affc2*/
    *a2 = g_MissionQueueFrame.localVariables[227]; /*0x5affc4*/
  }
  v5[1] = TurnRate; /*0x5affa1*/
  v5[2] = Speed; /*0x5affa4*/
  return result; /*0x5affa7*/
}



// ==== 0x005AFFE0  JumpjetLocomotionClass::GetRenderCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Climb) == g_MissionQueueFrame.localVariables[227] /*0x5b000b*/
    && LODWORD(this->Crash) == g_MissionQueueFrame.localVariables[228]
    && this->Height == g_MissionQueueFrame.localVariables[229] )
  {
    Owner = this->?; /*0x5b002b*/
    location = Owner->?; /*0x5b0034*/
    v7 = Owner->?[0]; /*0x5b0036*/
    v8 = Owner->?[1]; /*0x5b0038*/
    v9 = location[2]; /*0x5b003b*/
    *a2 = v7; /*0x5b0044*/
    a2[1] = v8; /*0x5b0046*/
    a2[2] = v9; /*0x5b0049*/
    return a2; /*0x5b003e*/
  }
  else
  {
    Crash = this->Crash; /*0x5b0014*/
    Height = this->Height; /*0x5b0017*/
    *a2 = LODWORD(this->Climb); /*0x5b001c*/
    *((float *)a2 + 1) = Crash; /*0x5b001e*/
    a2[2] = Height; /*0x5b0021*/
    return a2; /*0x5b0024*/
  }
}


