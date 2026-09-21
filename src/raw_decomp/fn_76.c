// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00760190  Voxel::BlendColor  this=WaveClass  sig=csp ====
int __thiscall Voxel::BlendColor(_DWORD *this, int a2, WaveClass *aP2, int arg8, _WORD *a4)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned __int16 v7; // dx
  int v8; // kr00_4
  int v9; // edi
  int v10; // eax
  int result; // eax

  v5 = *(__int16 *)&g_AsyncMovieState.__pad_220[2 * this->Cells /*0x7601d9*/
                                              + 96
                                              + 2
                                              * *(unsigned __int16 *)&g_AsyncMovieState.__pad_71C[600 * arg8
                                                                                                + 920
                                                                                                + 2
                                                                                                * abs32(a2 - this->WaveClass_field_178 - (_DWORD)aP2)]];
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a4[*(this + v6 + 130)]; /*0x7601fb*/
  v8 = *(_DWORD *)&g_AsyncMovieState.__pad_71C[4 * v6 + 836]; /*0x760256*/
  v9 = (((unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) /*0x76027d*/
       * (v8
        / 2)) >> 8)
     + (unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 /*0x76028b*/
             * (unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668])) >> 6)
     + (unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) <= 255 )
    v10 = (char)((v8 /*0x76028d*/
                * (unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668])) >> 6)
        + (unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]; /*0x7602ba*/
  *a4 = ((int)(unsigned __int8)((unsigned __int8)(v7 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672]) /*0x7602d0*/
      | result
      | (v9 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
  return result; /*0x7602d3*/
}


// ==== 0x007602E0  Surface::RenderToSurfaceVoxel  this=WaveClass  sig=csp ====
void __thiscall Surface::RenderToSurfaceVoxel(int this, _DWORD *a2, int *a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  CCINIClass *v16; // ecx
  char *v17; // eax
  char *v18; // eax
  int v19; // ecx
  unsigned __int16 *v20; // ebx
  _WORD *v21; // edi
  __int64 v22; // rax
  int v23; // ebp
  int v24; // eax
  int m; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  char *v31; // eax
  int v32; // edi
  MouseClass *v33; // ecx
  int v34; // ebx
  int v35; // eax
  TacticalMap *v36; // ecx
  _WORD *v37; // edi
  unsigned int SamplePosition; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  char *v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  MouseClass *v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  WaveClass *aP2; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  char *v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  _WORD *a4; // [esp+18h] [ebp-2Ch]
  _WORD *a4a; // [esp+18h] [ebp-2Ch]
  _WORD *a4d; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *a4b; // [esp+18h] [ebp-2Ch]
  _WORD *a4c; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  int v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  int v72; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  MouseClass *aP1; // [esp+3Ch] [ebp-8h]
  int aP1a; // [esp+3Ch] [ebp-8h]
  MouseClass *aP1b; // [esp+3Ch] [ebp-8h]
  MouseClass *v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  char *v88; // [esp+48h] [ebp+4h]
  CCINIClass *v89; // [esp+4Ch] [ebp+8h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x7602f8*/
  v74 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 92))( /*0x760309*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          0,
          0);
  if ( v74 ) /*0x76030d*/
  {
    v4 = a3; /*0x760313*/
    v5 = a3[1]; /*0x760319*/
    v78 = v5 + a3[3] - 3; /*0x760329*/
    v77 = v5 + 3; /*0x76032f*/
    v79 = *a3 + 3; /*0x760340*/
    v69 = *a3 + a3[2] - 3; /*0x760348*/
    v6 = a2[1] - *(_DWORD *)(this + 208); /*0x760359*/
    aP2 = (WaveClass *)(*a2 - *(_DWORD *)(this + 204)); /*0x760367*/
    v76 = v6; /*0x76036b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x76036f*/
    if ( *(_DWORD *)(this + 424) ) /*0x760374*/
    {
      v7 = *(_DWORD *)(this + 416); /*0x760398*/
      v8 = v6 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + *(_DWORD *)(this + 420); /*0x76039e*/
      v61 = v8; /*0x7603a0*/
      v9 = v7 + v8 - 1; /*0x7603a4*/
      if ( v9 >= a3[3] + a3[1] ) /*0x7603aa*/
      {
        a4 = (_WORD *)(a3[3] + a3[1]); /*0x7603b2*/
        v9 = (int)a4; /*0x7603b6*/
      }
      else
      {
        a4 = (_WORD *)(v7 + v8 - 1); /*0x7603ac*/
      }
      Voxel::loadSectionData((_DWORD *)this); /*0x7603ba*/
      v10 = *(_DWORD *)(this + 460); /*0x7603bf*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x7603d1*/
      {
        a4d = (_WORD *)Audio::GetSamplePosition( /*0x7606be*/
                         *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
                         0,
                         (MouseClass *)(v8 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]));
        v35 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x7606c4*/
        HIWORD(v36) = *(_WORD *)&MEMORY[0x87F8E4].__pad_5568[10234]; /*0x7606c7*/
        v81 = v9 - v8; /*0x7606d8*/
        v72 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 40); /*0x7606e0*/
        if ( (unsigned int)&a4d[v35 + v72 * (v9 - v8 + 1)] >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] /*0x7606f6*/
                                                                        + 28) )
        {
          LOWORD(v36) = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 36) - v9; /*0x76085b*/
          v46 = v9; /*0x76085e*/
          v56 = v9; /*0x760862*/
          v47 = (char *)v36 - v58 - 2; /*0x760866*/
          v88 = v47; /*0x76086b*/
          if ( v9 >= v8 ) /*0x76086f*/
          {
            v73 = 8 * v81; /*0x76087c*/
            do /*0x760999*/
            {
              v48 = v4[1]; /*0x760880*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760897*/
              {
                v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x7608b0*/
                v50 = (int)&aP2->__pad_0[v49[1]]; /*0x7608ba*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x7608be*/
                  v50 = *v4 + v4[2] - 2; /*0x7608c0*/
                v60 = (int)&aP2->__pad_0[*v49]; /*0x7608cf*/
                if ( v60 <= *v4 + 2 ) /*0x7608d3*/
                  v60 = *v4 + 2; /*0x7608d5*/
                a4c = (_WORD *)(v74 /*0x760904*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]) >> 1)));
                v51 = (MouseClass *)(v56 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x760910*/
                aP1b = (MouseClass *)v50; /*0x760914*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --a4c ) /*0x760925*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&MEMORY[0x87F8E4].__pad_5568[10232], aP1b, v51) > (unsigned __int16)v88 ) /*0x760940*/
                    Voxel::BlendColor((_DWORD *)this, v50, aP2, i, a4c); /*0x760950*/
                  --v50; /*0x76095e*/
                  aP1b = (MouseClass *)((char *)aP1b - 1); /*0x76095f*/
                }
                v47 = v88; /*0x760972*/
                v8 = v61; /*0x760976*/
                v4 = a3; /*0x76097a*/
                v46 = v56; /*0x76097e*/
              }
              ++v47; /*0x760986*/
              --v46; /*0x760987*/
              v88 = v47; /*0x76098d*/
              v56 = v46; /*0x760991*/
              v73 -= 8; /*0x760995*/
            }
            while ( v46 >= v8 ); /*0x760999*/
          }
        }
        else
        {
          aP1a = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]) >> 1; /*0x760709*/
          v37 = (_WORD *)(v74 + 2 * v9 * aP1a); /*0x76071a*/
          v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x760728*/
          v87 = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 36) - v9 - v58 - 2; /*0x760740*/
          SamplePosition = Audio::GetSamplePosition( /*0x760753*/
                             *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
                             0,
                             (MouseClass *)(v9 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]));
          v39 = v9; /*0x760755*/
          v55 = v9; /*0x760759*/
          if ( v9 >= v8 ) /*0x76075d*/
          {
            while ( 1 ) /*0x760769*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x760777*/
              {
                v40 = (int)&aP2->__pad_0[v90[1]]; /*0x760790*/
                if ( v40 >= v69 ) /*0x760792*/
                  v40 = v69; /*0x760794*/
                v59 = &aP2->__pad_0[*v90]; /*0x7607a6*/
                if ( (int)v59 <= v79 ) /*0x7607aa*/
                  v59 = (char *)v79; /*0x7607ac*/
                v41 = &v37[v40]; /*0x7607b8*/
                v42 = (unsigned __int16 *)(2 * v40 + SamplePosition); /*0x7607ba*/
                a4b = v42; /*0x7607c6*/
                v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x7607ca*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= (int)v59; a4b = v42 ) /*0x7607d7*/
                {
                  if ( *v42 > v87 ) /*0x7607e1*/
                  {
                    Voxel::BlendColor((_DWORD *)this, v40, aP2, j, v41); /*0x7607ed*/
                    v42 = a4b; /*0x7607f2*/
                  }
                  --v42; /*0x7607fa*/
                  --v41; /*0x7607fd*/
                  --v40; /*0x760800*/
                }
                v8 = v61; /*0x760809*/
                v39 = v55; /*0x76080d*/
                v45 = 2 * v40; /*0x760811*/
                SamplePosition = (unsigned int)&v42[v45 / 0xFFFFFFFE]; /*0x760813*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x760815*/
              }
              --v39; /*0x760836*/
              v37 -= aP1a; /*0x760839*/
              ++v87; /*0x76083c*/
              v90 -= 2; /*0x760840*/
              v55 = v39; /*0x760844*/
              if ( v39 < v8 ) /*0x760848*/
                break; /*0x760848*/
              SamplePosition -= 2 * v72; /*0x760765*/
            }
          }
        }
      }
      else
      {
        v86 = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 36) - v58 - v8 - 2; /*0x7603f4*/
        v11 = Audio::GetSamplePosition( /*0x760406*/
                *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
                0,
                (MouseClass *)(v8 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]));
        v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x76040a*/
        v70 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 40); /*0x760418*/
        if ( v11 + 2 * (v12 + v70 * (v9 - v61 + 1)) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x760437*/
        {
          v27 = v61; /*0x760557*/
          v54 = v61; /*0x76055d*/
          if ( v61 <= v9 ) /*0x760561*/
          {
            v71 = 0; /*0x760567*/
            do /*0x760694*/
            {
              v28 = v4[1]; /*0x76056f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x760586*/
              {
                v29 = (_DWORD *)(*(_DWORD *)(this + 424) + v71); /*0x760599*/
                v30 = *v4; /*0x76059b*/
                v63 = (int)&aP2->__pad_0[v29[1]]; /*0x7605b4*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x7605b8*/
                  v63 = *v4 + v4[2] - 2; /*0x7605ba*/
                v31 = &aP2->__pad_0[*v29]; /*0x7605c4*/
                v32 = v30 + 2; /*0x7605c6*/
                if ( (int)v31 > v30 + 2 ) /*0x7605cb*/
                  v32 = (int)v31; /*0x7605cd*/
                aP1 = (MouseClass *)v32; /*0x7605e5*/
                a4a = (_WORD *)(v74 /*0x7605f3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]) >> 1)));
                v33 = (MouseClass *)(v27 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x7605fd*/
                v85 = (MouseClass *)(v27 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x760607*/
                v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x760616*/
                if ( v32 <= v63 ) /*0x76061a*/
                {
                  while ( 1 ) /*0x760622*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&MEMORY[0x87F8E4].__pad_5568[10232], aP1, v33) > v86 ) /*0x76063b*/
                      Voxel::BlendColor((_DWORD *)this, v32, aP2, v34, a4a); /*0x76064b*/
                    ++v32; /*0x760659*/
                    aP1 = (MouseClass *)((char *)aP1 + 1); /*0x76065a*/
                    ++a4a; /*0x760667*/
                    if ( v32 > v63 ) /*0x76066b*/
                      break; /*0x76066b*/
                    v33 = v85; /*0x76061e*/
                  }
                }
                v27 = v54; /*0x76066d*/
                v4 = a3; /*0x760671*/
              }
              ++v27; /*0x760682*/
              --v86; /*0x760688*/
              v54 = v27; /*0x76068c*/
              v71 += 8; /*0x760690*/
            }
            while ( v27 <= v9 ); /*0x760694*/
          }
        }
        else
        {
          v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]) >> 1; /*0x760448*/
          v80 = v13; /*0x760455*/
          v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x760459*/
          v15 = v61; /*0x76045c*/
          v16 = *(CCINIClass **)(this + 424); /*0x760460*/
          v89 = v16; /*0x760468*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x760470*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x760484*/
            {
              v17 = &aP2->__pad_0[v16->headNode[0]]; /*0x760491*/
              if ( (int)v17 >= v69 ) /*0x760497*/
                v17 = (char *)v69; /*0x760499*/
              v62 = (int)v17; /*0x76049f*/
              v18 = &aP2->__pad_0[*(_DWORD *)v16->__pad_0]; /*0x7604a3*/
              v19 = v79; /*0x7604a6*/
              if ( (int)v18 > v79 ) /*0x7604ac*/
                v19 = (int)v18; /*0x7604ae*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x7604b7*/
              v21 = &v14[v19]; /*0x7604b9*/
              v22 = v15 - v76 - *(_DWORD *)(this + 208); /*0x7604cb*/
              v23 = v22; /*0x7604cc*/
              v24 = v19; /*0x7604ce*/
              v75 = v19; /*0x7604d2*/
              for ( m = (HIDWORD(v22) ^ v23) - HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x7604de*/
              {
                if ( *v20 > v86 ) /*0x7604e8*/
                {
                  Voxel::BlendColor((_DWORD *)this, v24, aP2, m, v21); /*0x7604f4*/
                  v24 = v75; /*0x7604f9*/
                }
                ++v20; /*0x760501*/
                ++v21; /*0x760504*/
                ++v24; /*0x760507*/
              }
              v9 = (int)a4; /*0x760510*/
              v15 = k; /*0x760514*/
              v26 = 2 * v24; /*0x760518*/
              v11 = (unsigned int)&v20[v26 / 0xFFFFFFFE]; /*0x76051a*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x76051c*/
              v13 = v80; /*0x76051e*/
            }
            v14 += v13; /*0x760526*/
            v11 += 2 * v70; /*0x760529*/
            --v86; /*0x760536*/
            v16 = (CCINIClass *)&v89->headNode[1]; /*0x76053e*/
            ++v15; /*0x760541*/
            v89 = (CCINIClass *)((char *)v89 + 8); /*0x760544*/
          }
        }
      }
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 96))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x7609a7*/
    if ( *(_DWORD *)(this + 424) ) /*0x7609aa*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x7609b7*/
      *(_DWORD *)(this + 424) = 0; /*0x7609bf*/
    }
  }
}


// ==== 0x007609E0  Voxel::FaceDraw  this=WaveClass  sig=csp ====
void __thiscall Voxel::FaceDraw(_DWORD *this, _DWORD *a1, WaveClass *aP2)
{
  WaveClass *v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // ebp
  unsigned int SamplePosition; // edi
  int v8; // eax
  int v9; // ecx
  _WORD *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  _WORD *v14; // edi
  _WORD *v15; // ebp
  int v16; // esi
  int v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  bool v21; // zf
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // edx
  MouseClass *v26; // esi
  int v27; // eax
  int v28; // eax
  MouseClass *v29; // ebp
  _WORD *v30; // edi
  int LaserIntensity; // eax
  int v32; // edx
  int v33; // eax
  int i; // [esp+8h] [ebp-40h]
  int v35; // [esp+8h] [ebp-40h]
  WaveClass *v36; // [esp+Ch] [ebp-3Ch]
  _WORD *v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  int v39; // [esp+14h] [ebp-34h]
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  __int16 v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+1Ch] [ebp-2Ch]
  int v45; // [esp+1Ch] [ebp-2Ch]
  int v47; // [esp+24h] [ebp-24h]
  int v48; // [esp+28h] [ebp-20h]
  int v49; // [esp+2Ch] [ebp-1Ch]
  int v50; // [esp+30h] [ebp-18h]
  int v51; // [esp+34h] [ebp-14h]
  MouseClass *aP1; // [esp+38h] [ebp-10h]
  MouseClass *aP1a; // [esp+38h] [ebp-10h]
  MouseClass *v54; // [esp+3Ch] [ebp-Ch]
  _DWORD *a1a; // [esp+4Ch] [ebp+4h]
  WaveClass *aP2a; // [esp+50h] [ebp+8h]

  v3 = (WaveClass *)this; /*0x7609e9*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[140] == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(this->WaveClass_field_168); /*0x760a0a*/
    v39 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 92))( /*0x760a1b*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      v47 = *(_DWORD *)&aP2->__pad_0[4]; /*0x760a3d*/
      v48 = *(_DWORD *)&aP2->__pad_0[12] + v47; /*0x760a45*/
      v50 = *(_DWORD *)aP2->__pad_0; /*0x760a4c*/
      v49 = *(_DWORD *)aP2->__pad_0 + *(_DWORD *)&aP2->__pad_0[8]; /*0x760a56*/
      v4 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + a1[1] - v3->WaveClass_field_D0; /*0x760a69*/
      v41 = *a1 - v3->WaveClass_field_CC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->WaveClass_field_148, &v3->WaveClass_field_1A0); /*0x760a7b*/
      if ( v3->WaveClass_field_1A8 ) /*0x760a80*/
      {
        v5 = v4 + v3->WaveClass_field_1A4; /*0x760aa0*/
        v36 = (WaveClass *)(v3->WaveClass_field_1A0 + v5 - 1); /*0x760aaa*/
        if ( (int)v36 >= *(_DWORD *)&aP2->__pad_0[12] + *(_DWORD *)&aP2->__pad_0[4] ) /*0x760aae*/
          v36 = (WaveClass *)(*(_DWORD *)&aP2->__pad_0[12] + *(_DWORD *)&aP2->__pad_0[4]); /*0x760ab0*/
        LOWORD(v4) = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 36) - v42; /*0x760aca*/
        v6 = v4 - v5 - 2; /*0x760ad3*/
        a1a = (_DWORD *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
                           0,
                           (MouseClass *)(v5 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]));
        v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x760ae9*/
        aP1 = *(MouseClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 40); /*0x760aff*/
        if ( SamplePosition + 2 * (v8 + (_DWORD)aP1 * (_DWORD)&v36->__pad_0[-v5 + 1]) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x760b13*/
        {
          v22 = v5; /*0x760d15*/
          v35 = v5; /*0x760d19*/
          if ( v5 <= (int)v36 ) /*0x760d1d*/
          {
            v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              v23 = *(_DWORD *)&aP2->__pad_0[4]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + *(_DWORD *)&aP2->__pad_0[12] - 2 ) /*0x760d46*/
              {
                v24 = (_DWORD *)(v3->WaveClass_field_1A8 + v38); /*0x760d5a*/
                v25 = *(_DWORD *)aP2->__pad_0; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= *(_DWORD *)&aP2->__pad_0[8] + *(_DWORD *)aP2->__pad_0 - 2 ) /*0x760d70*/
                  v44 = *(_DWORD *)&aP2->__pad_0[8] + *(_DWORD *)aP2->__pad_0 - 2; /*0x760d72*/
                v26 = (MouseClass *)(v25 + 2); /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = (MouseClass *)v27; /*0x760d81*/
                v28 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x760d8b*/
                v29 = (MouseClass *)(v35 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x760da3*/
                aP1a = v26; /*0x760da5*/
                v30 = (_WORD *)(v39 + 2 * ((_DWORD)v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = (MouseClass *)(v35 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x760db2*/
                if ( (int)v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - (_DWORD)v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&MEMORY[0x87F8E4].__pad_5568[10232], aP1a, v29) > (unsigned __int16)a1a ) /*0x760ddc*/
                    {
                      LaserIntensity = v3->LaserIntensity; /*0x760deb*/
                      v32 = (unsigned __int8)((unsigned __int8)(*v30 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) /*0x760e5b*/
                          + (char)(LaserIntensity >> 2);
                      v33 = (unsigned __int8)((unsigned __int8)(*v30 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) /*0x760e64*/
                          + ((96 * LaserIntensity) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = (WaveClass *)this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x760ec8*/
                           | ((int)(unsigned __int8)((unsigned __int8)(*v30 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                           | (v32 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    aP1a = (MouseClass *)((char *)aP1a + 1); /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = (int)a1a; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              a1a = (_DWORD *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= (int)v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 116))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]) >> 1; /*0x760b2a*/
          v51 = v9; /*0x760b2e*/
          v10 = (_WORD *)(v39 + 2 * v5 * v9); /*0x760b35*/
          aP2a = (WaveClass *)v3->WaveClass_field_1A8; /*0x760b42*/
          v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= (int)v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              v12 = v49; /*0x760b76*/
              if ( *(_DWORD *)&aP2a->__pad_0[4] + v41 < v49 ) /*0x760b7c*/
                v12 = *(_DWORD *)&aP2a->__pad_0[4] + v41; /*0x760b7e*/
              v13 = v41 + *(_DWORD *)aP2a->__pad_0; /*0x760b86*/
              if ( v13 <= v50 ) /*0x760b8e*/
                v13 = v50; /*0x760b90*/
              v14 = (_WORD *)(2 * v13 + SamplePosition); /*0x760b95*/
              v15 = &v10[v13]; /*0x760b97*/
              v37 = v14; /*0x760b9b*/
              v16 = v13; /*0x760b9f*/
              if ( v13 <= v12 ) /*0x760ba1*/
              {
                v40 = v12 - v13 + 1; /*0x760baa*/
                v43 = v12 + 1; /*0x760bb0*/
                do /*0x760cc2*/
                {
                  if ( *v14 > (unsigned __int16)a1a ) /*0x760bbc*/
                  {
                    v17 = v3->LaserIntensity; /*0x760bcb*/
                    v18 = (unsigned __int8)((unsigned __int8)(*v15 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (unsigned __int8)((unsigned __int8)(*v15 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = (WaveClass *)this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x760cab*/
                         | ((int)(unsigned __int8)((unsigned __int8)(*v15 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                         | (v18 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
                  }
                  ++v14; /*0x760cb3*/
                  ++v15; /*0x760cb6*/
                  v21 = v40 == 1; /*0x760cb9*/
                  v37 = v14; /*0x760cba*/
                  --v40; /*0x760cbe*/
                }
                while ( !v21 ); /*0x760cc2*/
                v16 = v43; /*0x760cc8*/
              }
              SamplePosition = (unsigned int)&v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v51; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            SamplePosition += 2 * (_DWORD)aP1; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            aP2a = (WaveClass *)((char *)aP2a + 8); /*0x760cf4*/
            LOWORD(a1a) = (_WORD)a1a - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 96))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x760f1c*/
      if ( v3->WaveClass_field_1A8 ) /*0x760f1f*/
      {
        __3_YAXPAX_Z((void *)v3->WaveClass_field_1A8); /*0x760f2c*/
        v3->WaveClass_field_1A8 = 0; /*0x760f34*/
      }
    }
  }
}


// ==== 0x00760F50  WaveClass::Update  this=WaveClass  sig=csp ====
int __thiscall WaveClass::Update(#374 *this)
{
  int result; // eax
  int v3; // eax
  int i; // edi
  ObjectClass *Coords; // eax
  int v6; // eax
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = this->WaveClass_field_D8; /*0x760f56*/
  switch ( result ) /*0x760f65*/
  {
    case 0: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760fa0*/
      for ( i = 0; i < this->WaveClass_field_12C; ++i ) /*0x760faf*/
      {
        Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)(this->q1F4 + 4 * i), v7); /*0x760fbf*/
        WaveClass::DamageArea((int *)this, Coords); /*0x760fc7*/
      }
      v6 = this->WaveClass_field_F8 - 1; /*0x760fde*/
      this->WaveClass_field_F8 = v6; /*0x760fdf*/
      if ( v6 >= 0 ) /*0x760fe5*/
        goto LABEL_3; /*0x760fe5*/
      result = (*(int (__thiscall **)(#374 *))(this->WaveClass_field_1A4)(this); /*0x760feb*/
      break; /*0x760ff5*/
    case 1: /*0x760f65*/
    case 2: /*0x760f65*/
      result = this->WaveClass_field_120 - 6; /*0x760fff*/
      this->WaveClass_field_120 = result; /*0x761001*/
      if ( result < 32 ) /*0x76100a*/
        goto LABEL_9; /*0x76100a*/
      break; /*0x76100a*/
    case 3: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760f6e*/
      v3 = this->WaveClass_field_F8 - 1; /*0x760f79*/
      this->WaveClass_field_F8 = v3; /*0x760f7a*/
      if ( v3 < 0 ) /*0x760f80*/
LABEL_9:
        result = (*(int (__thiscall **)(#374 *))(this->WaveClass_field_1A4)(this); /*0x76100c*/
      else
LABEL_3:
        result = ObjectClass::DetectCloaked(this); /*0x760f91*/
      break; /*0x760f9c*/
    default:
      return result;
  }
  return result; /*0x760f8c*/
}


// ==== 0x00761030  AnimClass::ProcessFrame  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessFrame(#374 *this)
{
  int i; // edi
  ObjectClass *Coords; // eax
  int v4; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < this->q080; ++i ) /*0x761046*/
  {
    Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)(*((_DWORD *)this + 125) + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((int *)this, Coords); /*0x76105e*/
  }
  v4 = this->q04C - 1; /*0x761074*/
  this->q04C = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked(this); /*0x76108f*/
  else
    return (*(int (__thiscall **)(#374 *))(this->TintColor)(this); /*0x761081*/
}


// ==== 0x007610F0  Voxel::FaceBlit  this=ObjectClass  sig=csp ====
void __thiscall Voxel::FaceBlit(int this)
{
  int *v2; // ebp
  int v3; // eax
  double v4; // st7
  double v5; // st7
  IUnknown *v6; // eax
  MouseClass *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // kr38_4
  int v11; // ebx
  MouseClass *v12; // eax
  int v13; // edx
  _WORD *v14; // eax
  unsigned int v15; // edx
  MouseClass *v16; // eax
  double v17; // st7
  IUnknown *v18; // eax
  int *v19; // eax
  MouseClass *v20; // eax
  int v21; // edx
  double v22; // st7
  IUnknown *v23; // eax
  int *v24; // eax
  int *v25; // eax
  _WORD *v26; // eax
  MouseClass *v27; // [esp-8h] [ebp-80h]
  MouseClass *v28; // [esp-8h] [ebp-80h]
  MouseClass *v29; // [esp-8h] [ebp-80h]
  int v30; // [esp-4h] [ebp-7Ch]
  int v31; // [esp-4h] [ebp-7Ch]
  int v32; // [esp-4h] [ebp-7Ch]
  MouseClass *v33; // [esp+10h] [ebp-68h] BYREF
  int v34; // [esp+14h] [ebp-64h] BYREF
  MouseClass *v35; // [esp+18h] [ebp-60h] BYREF
  MouseClass *v36; // [esp+1Ch] [ebp-5Ch] BYREF
  rc_ptr_base v37; // [esp+20h] [ebp-58h] BYREF
  rc_ptr_base v38; // [esp+24h] [ebp-54h] BYREF
  rc_ptr_base v39; // [esp+28h] [ebp-50h] BYREF
  rc_ptr_base v40; // [esp+2Ch] [ebp-4Ch] BYREF
  rc_ptr_base v41; // [esp+30h] [ebp-48h] BYREF
  char v42[4]; // [esp+34h] [ebp-44h] BYREF
  char v43[4]; // [esp+38h] [ebp-40h] BYREF
  char v44[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  int v46; // [esp+48h] [ebp-30h] BYREF
  int v47; // [esp+4Ch] [ebp-2Ch]
  int v48; // [esp+50h] [ebp-28h]
  _DWORD v49[3]; // [esp+54h] [ebp-24h] BYREF
  _DWORD v50[3]; // [esp+60h] [ebp-18h] BYREF
  _DWORD v51[3]; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = (int *)(this + 496); /*0x761105*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 496) + 12))(this + 496); /*0x76110d*/
  if ( *(_BYTE *)(this + 300) ) /*0x761110*/
  {
    v3 = *(_DWORD *)(this + 180); /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    LOWORD(v35) = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *(double *)(this + 312); /*0x761158*/
    HIWORD(v35) = *(_DWORD *)(this + 184) / 256; /*0x761167*/
    v33 = v35; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        v5 = i; /*0x76117f*/
        v30 = Math::RoundToInt(i); /*0x7611a8*/
        v27 = (MouseClass *)Math::RoundToInt(v5); /*0x7611c0*/
        v6 = (IUnknown *)Math::RoundToInt(v5); /*0x7611cd*/
        v7 = (MouseClass *)Coord3D::Set(&v46, v6, v27, v30); /*0x7611e0*/
        v8 = v7->field_0; /*0x7611e2*/
        v9 = (int)v7->field_4; /*0x7611e4*/
        v49[2] = v7->field_8; /*0x7611ea*/
        v10 = v9; /*0x7611f7*/
        v11 = v8 / 256; /*0x76120d*/
        v36 = *(MouseClass **)CellStruct::Set(&v38, v8 / 256, v9 / 256); /*0x76121e*/
        if ( v33 != v36 ) /*0x761222*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v37, v11, v10 / 256); /*0x761247*/
          v12 = (MouseClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x76124b*/
          v13 = *v2; /*0x761250*/
          v35 = v12; /*0x761253*/
          if ( (*(int (__thiscall **)(int *, MouseClass **))(v13 + 16))(v2, &v35) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, &v35); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)(this + 312) >= i ); /*0x76129b*/
    }
  }
  else
  {
    v33 = *(MouseClass **)CellStruct::Set(&v38, *(_DWORD *)(this + 252) / 256, *(_DWORD *)(this + 256) / 256); /*0x7612e0*/
    v35 = *(MouseClass **)CellStruct::Set(&v38, *(_DWORD *)(this + 264) / 256, *(_DWORD *)(this + 268) / 256); /*0x761312*/
    v14 = CellStruct::Set(&v38, *(_DWORD *)(this + 192) / 256, *(_DWORD *)(this + 196) / 256); /*0x76133c*/
    v15 = *(_DWORD *)(this + 320); /*0x761349*/
    v34 = *(_DWORD *)v14; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*(_DWORD *)(this + 324), v15)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)(this + 312) >= i;
          i = i + 0.050000001 )
    {
      v48 = *(_DWORD *)&g_AsyncMovieState.__pad_524[324]; /*0x761392*/
      v16 = *(MouseClass **)(this + 460); /*0x761396*/
      v46 = *(_DWORD *)&g_AsyncMovieState.__pad_524[316]; /*0x76139c*/
      v47 = *(_DWORD *)&g_AsyncMovieState.__pad_524[320]; /*0x7613a2*/
      if ( (int)v16 < 4 ) /*0x7613a6*/
      {
        v17 = i; /*0x7613ac*/
        v31 = Math::RoundToInt(i); /*0x7613d5*/
        v28 = (MouseClass *)Math::RoundToInt(v17); /*0x7613ed*/
        v18 = (IUnknown *)Math::RoundToInt(v17); /*0x7613fa*/
        v19 = Coord3D::Set(v49, v18, v28, v31); /*0x761408*/
        v46 = *v19; /*0x761411*/
        v47 = v19[1]; /*0x761418*/
        v48 = v19[2]; /*0x76141f*/
        v37.vfptr = *(void **)CellStruct::Set(&v39, v46 / 256, v47 / 256); /*0x76144f*/
        if ( v33 != v37.vfptr ) /*0x761453*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v40, v46 / 256, v47 / 256); /*0x761498*/
          v20 = (MouseClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x76149c*/
          v21 = *v2; /*0x7614a1*/
          v36 = v20; /*0x7614a4*/
          if ( (*(int (__thiscall **)(int *, MouseClass **))(v21 + 16))(v2, &v36) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v36); /*0x7614be*/
        }
      }
      v22 = i; /*0x7614c3*/
      *(float *)&v37.vfptr = i; /*0x7614c7*/
      v32 = Math::RoundToInt(i); /*0x7614f0*/
      v29 = (MouseClass *)Math::RoundToInt(v22); /*0x761508*/
      v23 = (IUnknown *)Math::RoundToInt(v22); /*0x761515*/
      v24 = Coord3D::Set(v50, v23, v29, v32); /*0x761523*/
      v46 = *v24; /*0x76152c*/
      v47 = v24[1]; /*0x761533*/
      v48 = v24[2]; /*0x76153a*/
      v38.vfptr = *(void **)CellStruct::Set(&v41, v46 / 256, v47 / 256); /*0x76156e*/
      if ( Coord::Compare2D(&v34, &v38) ) /*0x761572*/
      {
        v34 = *Coord::ToCell(&v46, (IUnknown *)v42); /*0x761592*/
        Voxel::renderSection((_DWORD *)this, (ObjectClass *)&v34); /*0x761596*/
      }
      if ( *(int *)(this + 460) >= 4 ) /*0x7615a1*/
      {
        v25 = Color::RGBFromFloat(v51, (IUnknown *)(this + 264), *(float *)&v37.vfptr); /*0x7615b3*/
        v46 = *v25; /*0x7615ba*/
        v47 = v25[1]; /*0x7615c6*/
        v48 = v25[2]; /*0x7615d1*/
        v26 = Coord::ToCell(&v46, (IUnknown *)v43); /*0x7615d5*/
        if ( Coord::Compare2D(&v35, v26) ) /*0x7615df*/
        {
          v35 = (MouseClass *)*Coord::ToCell(&v46, (IUnknown *)v44); /*0x7615ff*/
          Voxel::renderSection((_DWORD *)this, (ObjectClass *)&v35); /*0x761603*/
        }
      }
    }
  }
}


// ==== 0x00761640  Voxel::SectionProject  this=ObjectClass  sig=csp ====
int __thiscall Voxel_Section_Project(_DWORD *this, int *a2, int a3)
{
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // esi
  int v10; // ebx
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  int v17; // edx
  int v18; // eax
  double v19; // st5
  double v20; // st6
  double v21; // st6
  double v22; // st6
  double v23; // st5
  double v24; // st7
  double v25; // st7
  double v26; // st6
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  double v31; // st7
  int v32; // esi
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  double v38; // st7
  int v39; // esi
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // eax
  int result; // eax
  float v45; // [esp+8h] [ebp-CCh]
  int v46; // [esp+18h] [ebp-BCh]
  float v47; // [esp+18h] [ebp-BCh]
  int v48; // [esp+1Ch] [ebp-B8h]
  float v49; // [esp+1Ch] [ebp-B8h]
  int v50; // [esp+1Ch] [ebp-B8h]
  int v51; // [esp+1Ch] [ebp-B8h]
  int v52; // [esp+1Ch] [ebp-B8h]
  int v53; // [esp+1Ch] [ebp-B8h]
  int v54; // [esp+24h] [ebp-B0h]
  double v55; // [esp+24h] [ebp-B0h]
  double v56; // [esp+24h] [ebp-B0h]
  float v57; // [esp+30h] [ebp-A4h]
  int v58; // [esp+34h] [ebp-A0h] BYREF
  int v59; // [esp+38h] [ebp-9Ch]
  int v60; // [esp+3Ch] [ebp-98h]
  int v61; // [esp+40h] [ebp-94h] BYREF
  int v62; // [esp+44h] [ebp-90h]
  int v63; // [esp+48h] [ebp-8Ch]
  float v64; // [esp+4Ch] [ebp-88h] BYREF
  float v65; // [esp+50h] [ebp-84h]
  float v66; // [esp+54h] [ebp-80h]
  float v67; // [esp+58h] [ebp-7Ch] BYREF
  float v68; // [esp+5Ch] [ebp-78h]
  float v69; // [esp+60h] [ebp-74h]
  float v70; // [esp+64h] [ebp-70h] BYREF
  float v71; // [esp+68h] [ebp-6Ch]
  float v72; // [esp+6Ch] [ebp-68h]
  float v73; // [esp+70h] [ebp-64h] BYREF
  float v74; // [esp+74h] [ebp-60h]
  float v75; // [esp+78h] [ebp-5Ch]
  int v76; // [esp+7Ch] [ebp-58h]
  float v77; // [esp+80h] [ebp-54h]
  float v78; // [esp+84h] [ebp-50h]
  float v79; // [esp+88h] [ebp-4Ch]
  float v80; // [esp+8Ch] [ebp-48h]
  float v81; // [esp+90h] [ebp-44h]
  float v82; // [esp+94h] [ebp-40h]
  float v83; // [esp+98h] [ebp-3Ch]
  float v84; // [esp+9Ch] [ebp-38h]
  float v85; // [esp+A0h] [ebp-34h]
  char v86[48]; // [esp+A4h] [ebp-30h] BYREF

  if ( (MEMORY[0xB45DA0] & 1) == 0 ) /*0x76165b*/
  {
    MEMORY[0xB45DA0] |= 1u; /*0x76167d*/
    MEMORY[0xB45DA8][0] = -1041235968; /*0x76168f*/
    MEMORY[0xB45DAC] = -1027080192; /*0x7616a0*/
    MEMORY[0xB45DB0] = 0; /*0x7616b2*/
    MEMORY[0xB45DB4] = -1041235968; /*0x7616c4*/
    MEMORY[0xB45DB8] = 1120403456; /*0x7616d5*/
    MEMORY[0xB45DBC] = 0; /*0x7616e7*/
    MEMORY[0xB45DC0] = 1106247680; /*0x7616f9*/
    MEMORY[0xB45DC4] = -1027080192; /*0x76170a*/
    MEMORY[0xB45DC8] = 0; /*0x76171c*/
    MEMORY[0xB45DCC] = 1106247680; /*0x76172e*/
    MEMORY[0xB45DD0] = 1120403456; /*0x76173f*/
    MEMORY[0xB45DD4] = 0; /*0x761751*/
    MEMORY[0xB45DD8] = -1039663104; /*0x761763*/
    MEMORY[0xB45DDC] = -1037041664; /*0x761774*/
    MEMORY[0xB45DE0] = 0; /*0x761786*/
    MEMORY[0xB45DE4] = -1039663104; /*0x761798*/
    MEMORY[0xB45DE8] = 1110441984; /*0x7617a9*/
    MEMORY[0xB45DEC] = 0; /*0x7617bb*/
    MEMORY[0xB45DF0] = 1107820544; /*0x7617cd*/
    MEMORY[0xB45DF4] = -1037041664; /*0x7617de*/
    MEMORY[0xB45DF8] = 0; /*0x7617f0*/
    MEMORY[0xB45DFC] = 1107820544; /*0x761802*/
    MEMORY[0xB45E00] = 1110441984; /*0x761813*/
    MEMORY[0xB45E04] = 0; /*0x761825*/
    MEMORY[0xB45E08] = -1042808832; /*0x761833*/
    MEMORY[0xB45E0C] = -1039663104; /*0x76183c*/
    MEMORY[0xB45E10] = 0; /*0x761842*/
    MEMORY[0xB45E14] = -1042808832; /*0x76186c*/
    MEMORY[0xB45E18] = 1107820544; /*0x761871*/
    MEMORY[0xB45E1C] = 0; /*0x761877*/
    MEMORY[0xB45E20] = 1104674816; /*0x7618a1*/
    MEMORY[0xB45E24] = -1039663104; /*0x7618a6*/
    MEMORY[0xB45E28] = 0; /*0x7618ac*/
    MEMORY[0xB45E2C] = 1104674816; /*0x7618d6*/
    MEMORY[0xB45E30] = 1107820544; /*0x7618db*/
    MEMORY[0xB45E34] = 0; /*0x7618e1*/
    MEMORY[0xB45E38] = -1041235968; /*0x76190b*/
    MEMORY[0xB45E3C] = -1035468800; /*0x761910*/
    MEMORY[0xB45E40] = 0; /*0x761916*/
    MEMORY[0xB45E44] = -1041235968; /*0x761940*/
    MEMORY[0xB45E48] = 1112014848; /*0x761945*/
    MEMORY[0xB45E4C] = 0; /*0x76194b*/
    MEMORY[0xB45E50] = 1106247680; /*0x761975*/
    MEMORY[0xB45E54] = -1035468800; /*0x76197a*/
    MEMORY[0xB45E58] = 0; /*0x761980*/
    MEMORY[0xB45E5C] = 1106247680; /*0x7619af*/
    MEMORY[0xB45E60] = 1112014848; /*0x7619b4*/
    MEMORY[0xB45E64] = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  v4 = this->q0B0; /*0x7619cb*/
  v5 = flt_7F6BB4[v4]; /*0x7619d6*/
  v58 = *a2; /*0x7619dd*/
  v6 = a2[2]; /*0x7619f6*/
  v59 = a2[1]; /*0x7619f9*/
  v60 = v6; /*0x7619fd*/
  v46 = Math::RoundToInt(v5); /*0x761a13*/
  v76 = *(_DWORD *)(a3 + 4); /*0x761a17*/
  v48 = Math::RoundToInt(v5); /*0x761a2e*/
  v7 = Math::RoundToInt(v5); /*0x761a47*/
  v61 = v46; /*0x761a5a*/
  v62 = v48; /*0x761a5e*/
  v63 = v7; /*0x761a62*/
  if ( !v4 ) /*0x761a66*/
    v63 = v7 + 50; /*0x761a6b*/
  if ( v4 == 3 ) /*0x761a72*/
    v63 += 50; /*0x761a74*/
  v8 = flt_7F6BB4[v4]; /*0x761a79*/
  v9 = Math::RoundToInt(v8); /*0x761a9f*/
  v10 = Math::RoundToInt(v8); /*0x761ab4*/
  v58 = v9; /*0x761ac9*/
  v60 = Math::RoundToInt(v8); /*0x761acf*/
  v59 = v10; /*0x761ad9*/
  v11 = Math::Sqrt((double)(v10 - v62) * (double)(v10 - v62) + (double)(v9 - v61) * (double)(v9 - v61)); /*0x761b09*/
  v54 = Math::RoundToInt(v11); /*0x761b1a*/
  this->q0B4 = v9; /*0x761b27*/
  this->q0B8 = v59; /*0x761b2d*/
  this->q0BC = v60; /*0x761b34*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 436))(this, this + 45); /*0x761b3b*/
  v12 = v61; /*0x761b41*/
  v13 = v62; /*0x761b45*/
  this->__pad_148 = 6; /*0x761b55*/
  this->q0C0 = v12; /*0x761b60*/
  v14 = v63; /*0x761b62*/
  this->q0C4 = v13; /*0x761b66*/
  *(this + 83) = this + 84; /*0x761b6f*/
  this->q0C8 = v14; /*0x761b75*/
  Coord::To_Screen(&v58, this + 51); /*0x761b83*/
  Coord::To_Screen(&v61, this + 53); /*0x761b9a*/
  v15 = *(this + 83); /*0x761b9f*/
  v16 = (double)v54; /*0x761ba7*/
  *(_DWORD *)(v15 + 8) = this->q0D4; /*0x761bab*/
  *(_DWORD *)(v15 + 12) = this->q0D8; /*0x761bb1*/
  v17 = *(this + 83); /*0x761bb4*/
  *(_DWORD *)(v17 + 32) = this->q0CC; /*0x761bbc*/
  *(_DWORD *)(v17 + 36) = this->q0D0; /*0x761bc4*/
  v18 = 48 * this->q0B0; /*0x761bd2*/
  v77 = v16 + *(float *)&MEMORY[0xB45DA8][v18 / 4u]; /*0x761bdb*/
  v78 = *(float *)(v18 + 11820460); /*0x761be9*/
  v19 = *(float *)(v18 + 11820464); /*0x761bed*/
  v73 = v77; /*0x761bf7*/
  v79 = v19; /*0x761bfb*/
  v74 = v78; /*0x761c03*/
  v75 = v79; /*0x761c07*/
  v80 = v16 + *(float *)(v18 + 11820468); /*0x761c11*/
  v81 = *(float *)(v18 + 11820472); /*0x761c25*/
  v20 = *(float *)(v18 + 11820476); /*0x761c2c*/
  v64 = v80; /*0x761c39*/
  v82 = v20; /*0x761c3d*/
  v65 = v81; /*0x761c4b*/
  v66 = v82; /*0x761c4f*/
  v83 = *(float *)(v18 + 11820480); /*0x761c59*/
  v84 = *(float *)(v18 + 11820484); /*0x761c6d*/
  v21 = *(float *)(v18 + 11820488); /*0x761c74*/
  v67 = v83; /*0x761c81*/
  v85 = v21; /*0x761c85*/
  v68 = v84; /*0x761c93*/
  v69 = v85; /*0x761c97*/
  v49 = *(float *)(v18 + 11820496); /*0x761cab*/
  v70 = *(float *)(v18 + 11820492); /*0x761cc5*/
  v71 = v49; /*0x761cc9*/
  v22 = (double)(v63 - v60); /*0x761ce7*/
  v23 = (double)v60; /*0x761ceb*/
  v75 = v77 * v22 / v16 + v23; /*0x761d0c*/
  v66 = v80 * v22 / v16 + v23; /*0x761d1d*/
  v69 = v83 * v22 / v16 + v23; /*0x761d2e*/
  v72 = v70 * v22 / v16 + v23; /*0x761d3c*/
  v24 = (double)(v61 - v58); /*0x761d46*/
  v47 = v24; /*0x761d4a*/
  v55 = v24; /*0x761d58*/
  v25 = Math::Sqrt((double)(v62 - v59) * (double)(v62 - v59) + v47 * v47); /*0x761d71*/
  v26 = v55; /*0x761d76*/
  if ( v25 < v55 ) /*0x761d86*/
    v26 = v25; /*0x761d8a*/
  if ( -v26 > v25 ) /*0x761d97*/
    v26 = -v25; /*0x761d9d*/
  Math::ArcTan2_Table(v26 / v25); /*0x761da9*/
  v56 = v25; /*0x761db6*/
  if ( v59 > v62 ) /*0x761dbf*/
    v56 = -v25; /*0x761dc7*/
  Matrix3x4::Identity(v86); /*0x761dd2*/
  v45 = v56; /*0x761de3*/
  Matrix2D::Rotate(v45); /*0x761de6*/
  v27 = (float *)TransformMatrix3x4Point(&v73); /*0x761dfb*/
  v73 = *v27; /*0x761e02*/
  v74 = v27[1]; /*0x761e09*/
  v75 = v27[2]; /*0x761e18*/
  v28 = (float *)TransformMatrix3x4Point(&v64); /*0x761e24*/
  v64 = *v28; /*0x761e2b*/
  v65 = v28[1]; /*0x761e37*/
  v66 = v28[2]; /*0x761e49*/
  v29 = (float *)TransformMatrix3x4Point(&v67); /*0x761e4d*/
  v67 = *v29; /*0x761e54*/
  v68 = v29[1]; /*0x761e5b*/
  v69 = v29[2]; /*0x761e6a*/
  v30 = (float *)TransformMatrix3x4Point(&v70); /*0x761e76*/
  v31 = (double)v58; /*0x761e7b*/
  v70 = *v30; /*0x761e81*/
  v71 = v30[1]; /*0x761e8e*/
  v72 = v30[2]; /*0x761e95*/
  v32 = Math::RoundToInt(v31); /*0x761ea2*/
  v57 = (float)v59; /*0x761ea4*/
  v50 = Math::RoundToInt(v31); /*0x761eb5*/
  v33 = Math::RoundToInt(v31); /*0x761eb9*/
  this->q0FC = v32; /*0x761ed0*/
  this->q100 = v50; /*0x761ed2*/
  this->q104 = v33; /*0x761ed5*/
  v34 = Math::RoundToInt(v31); /*0x761ee5*/
  v51 = Math::RoundToInt(v31); /*0x761ef0*/
  v35 = Math::RoundToInt(v31); /*0x761ef4*/
  this->q108 = v34; /*0x761eff*/
  this->q10C = v51; /*0x761f0f*/
  this->q110 = v35; /*0x761f12*/
  v36 = Math::RoundToInt(v31); /*0x761f22*/
  v52 = Math::RoundToInt(v31); /*0x761f2d*/
  v37 = Math::RoundToInt(v31); /*0x761f31*/
  v38 = v31 + v70; /*0x761f40*/
  this->q114 = v36; /*0x761f44*/
  this->q118 = v52; /*0x761f46*/
  this->q11C = v37; /*0x761f49*/
  v39 = Math::RoundToInt(v38); /*0x761f59*/
  v53 = Math::RoundToInt(v57 + v71); /*0x761f64*/
  v40 = Math::RoundToInt(v72); /*0x761f68*/
  this->q120 = v39; /*0x761f77*/
  this->q124 = v53; /*0x761f85*/
  this->q128 = v40; /*0x761f88*/
  Coord::To_Screen(this + 63, this + 55); /*0x761f91*/
  Coord::To_Screen(this + 66, this + 57); /*0x761faa*/
  Coord::To_Screen(this + 69, this + 59); /*0x761fc3*/
  Coord::To_Screen(this + 72, this + 61); /*0x761fdc*/
  v41 = (_DWORD *)*(this + 83); /*0x761fe1*/
  *v41 = this->q0DC; /*0x761fe9*/
  v41[1] = this->q0E0; /*0x761fee*/
  v42 = *(this + 83); /*0x761ff1*/
  *(_DWORD *)(v42 + 16) = this->q0E4; /*0x761ff9*/
  *(_DWORD *)(v42 + 20) = this->q0E8; /*0x761fff*/
  v43 = *(this + 83); /*0x762002*/
  *(_DWORD *)(v43 + 24) = this->q0F4; /*0x76200e*/
  *(_DWORD *)(v43 + 28) = this->q0F8; /*0x762017*/
  result = *(this + 83); /*0x76201a*/
  *(_DWORD *)(result + 40) = this->q0EC; /*0x762026*/
  *(_DWORD *)(result + 44) = this->q0F0; /*0x762034*/
  qmemcpy(this + 118, (const void *)(this->q1D4 + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/
}


// ==== 0x00762060  nullsub_46  this=-  sig=ida-proto ====
void __cdecl nullsub_46()
{
  ; /*0x762060*/
}


// ==== 0x00762070  Voxel::LightRender  this=ObjectClass  sig=csp ====
int __thiscall Voxel::LightRender(_DWORD *this, AbstractClass **a2, int a3)
{
  int v4; // esi
  double v5; // st7
  AbstractClass *v6; // eax
  float v7; // eax
  AbstractClass *v8; // edx
  int v9; // eax
  double st7_7a; // st7
  double st6_7a; // st6
  double v12; // st7
  AbstractClass *v10; // ecx
  AbstractClass *v11; // edx
  AbstractClass *v15; // ecx
  double v16; // st7
  int v17; // eax
  double v18; // st6
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  double v26; // st7
  double v27; // st6
  float *v28; // eax
  AbstractClass **eax13b; // eax
  float *v30; // eax
  AbstractClass **eax13d; // eax
  double v32; // st7
  AbstractClass *v29; // esi
  int v34; // eax
  float v35; // edx
  AbstractClass *v31; // esi
  int v37; // eax
  AbstractClass *v33; // esi
  int v39; // eax
  float v40; // edx
  double v41; // st7
  AbstractClass *v36; // esi
  int v43; // eax
  float v44; // edx
  _DWORD *v45; // eax
  int v46; // eax
  int v47; // eax
  int result; // eax
  float v49; // [esp+8h] [ebp-CCh]
  float v50; // [esp+18h] [ebp-BCh] BYREF
  float v51; // [esp+1Ch] [ebp-B8h]
  float v52; // [esp+20h] [ebp-B4h]
  double v53; // [esp+24h] [ebp-B0h]
  AbstractClass *v55; // [esp+30h] [ebp-A4h]
  AbstractClass *a1; // [esp+34h] [ebp-A0h] BYREF
  AbstractClass *v57; // [esp+38h] [ebp-9Ch]
  AbstractClass *v58; // [esp+3Ch] [ebp-98h]
  AbstractClass *var94; // [esp+40h] [ebp-94h] BYREF
  AbstractClass *v59; // [esp+44h] [ebp-90h]
  AbstractClass *v61; // [esp+48h] [ebp-8Ch]
  AbstractClass *v62; // [esp+4Ch] [ebp-88h]
  AbstractClass *v63; // [esp+50h] [ebp-84h] BYREF
  AbstractClass *v64; // [esp+54h] [ebp-80h]
  AbstractClass *v65; // [esp+58h] [ebp-7Ch]
  AbstractClass *v66; // [esp+5Ch] [ebp-78h] BYREF
  AbstractClass *v67; // [esp+60h] [ebp-74h]
  AbstractClass *v68; // [esp+64h] [ebp-70h]
  float var6C; // [esp+68h] [ebp-6Ch] BYREF
  AbstractClass *v70; // [esp+6Ch] [ebp-68h]
  AbstractClass *v71; // [esp+70h] [ebp-64h]
  float var60; // [esp+74h] [ebp-60h] BYREF
  AbstractClass *v73; // [esp+78h] [ebp-5Ch]
  float var58; // [esp+7Ch] [ebp-58h]
  float v74; // [esp+80h] [ebp-54h]
  AbstractClass *v75; // [esp+84h] [ebp-50h]
  float v76; // [esp+88h] [ebp-4Ch]
  float v77; // [esp+8Ch] [ebp-48h]
  AbstractClass *v78; // [esp+90h] [ebp-44h]
  float v79; // [esp+94h] [ebp-40h]
  float v80; // [esp+98h] [ebp-3Ch]
  AbstractClass *v82; // [esp+9Ch] [ebp-38h]
  float var34; // [esp+A0h] [ebp-34h]
  char v83[48]; // [esp+A4h] [ebp-30h] BYREF

  if ( (g_AsyncMovieState.__pad_188[24] & 1) == 0 ) /*0x76208b*/
  {
    g_AsyncMovieState.__pad_188[24] |= 1u; /*0x7620ad*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[16] = -1041235968; /*0x7620bf*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[20] = -1027080192; /*0x7620d0*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[24] = 0; /*0x7620e2*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[28] = -1041235968; /*0x7620f4*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[32] = 1120403456; /*0x762105*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[36] = 0; /*0x762117*/
    *(_DWORD *)&g_AsyncMovieState.__pad_A8[40] = 1106247680; /*0x762129*/
    g_AsyncMovieState.field_D4 = -1027080192; /*0x76213a*/
    *(_DWORD *)g_AsyncMovieState.__pad_D8 = 0; /*0x76214c*/
    *(_DWORD *)&g_AsyncMovieState.__pad_D8[4] = 1106247680; /*0x76215e*/
    *(_DWORD *)&g_AsyncMovieState.__pad_D8[8] = 1120403456; /*0x76216f*/
    g_AsyncMovieState.field_E4 = 0; /*0x762181*/
    g_AsyncMovieState.field_E8 = -1039663104; /*0x762193*/
    *(_DWORD *)g_AsyncMovieState.__pad_EC = -1037041664; /*0x7621a4*/
    *(_DWORD *)&g_AsyncMovieState.__pad_EC[4] = 0; /*0x7621b6*/
    *(_DWORD *)&g_AsyncMovieState.__pad_EC[8] = -1039663104; /*0x7621c8*/
    g_AsyncMovieState.field_F8 = 1110441984; /*0x7621d9*/
    *(_DWORD *)g_AsyncMovieState.__pad_FC = 0; /*0x7621eb*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[4] = 1107820544; /*0x7621fd*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[8] = -1037041664; /*0x76220e*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[12] = 0; /*0x762220*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[16] = 1107820544; /*0x762232*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[20] = 1110441984; /*0x762243*/
    *(_DWORD *)&g_AsyncMovieState.__pad_FC[24] = 0; /*0x762255*/
    g_AsyncMovieState.field_118 = -1042808832; /*0x762263*/
    *(_DWORD *)g_AsyncMovieState.__pad_11C = -1039663104; /*0x76226c*/
    *(_DWORD *)&g_AsyncMovieState.__pad_11C[4] = 0; /*0x762272*/
    *(_DWORD *)&g_AsyncMovieState.__pad_11C[8] = -1042808832; /*0x76229c*/
    *(_DWORD *)&g_AsyncMovieState.__pad_11C[12] = 1107820544; /*0x7622a1*/
    *(_DWORD *)&g_AsyncMovieState.__pad_11C[16] = 0; /*0x7622a7*/
    g_AsyncMovieState.field_130 = 1104674816; /*0x7622d1*/
    *(_DWORD *)g_AsyncMovieState.__pad_134 = -1039663104; /*0x7622d6*/
    *(_DWORD *)&g_AsyncMovieState.__pad_134[4] = 0; /*0x7622dc*/
    *(_DWORD *)&g_AsyncMovieState.__pad_134[8] = 1104674816; /*0x762306*/
    g_AsyncMovieState.field_140 = 1107820544; /*0x76230b*/
    *(_DWORD *)g_AsyncMovieState.__pad_144 = 0; /*0x762311*/
    *(_DWORD *)&g_AsyncMovieState.__pad_144[4] = 0; /*0x76233b*/
    *(_DWORD *)&g_AsyncMovieState.__pad_144[8] = -1035468800; /*0x762340*/
    g_AsyncMovieState.field_150 = 0; /*0x762346*/
    *(_DWORD *)g_AsyncMovieState.__pad_154 = 0; /*0x762370*/
    g_AsyncMovieState.field_158 = 1112014848; /*0x762375*/
    g_AsyncMovieState.field_15C = 0; /*0x76237b*/
    g_AsyncMovieState.field_160 = 0; /*0x7623a5*/
    *(_DWORD *)g_AsyncMovieState.__pad_164 = -1035468800; /*0x7623aa*/
    *(_DWORD *)&g_AsyncMovieState.__pad_164[4] = 0; /*0x7623b0*/
    v50 = 0.0; /*0x7623b6*/
    v51 = 50.0; /*0x7623c2*/
    v52 = 0.0; /*0x7623ce*/
    *(_DWORD *)&g_AsyncMovieState.__pad_164[8] = 0; /*0x7623df*/
    *(_DWORD *)&g_AsyncMovieState.__pad_164[12] = 1112014848; /*0x7623e4*/
    *(_DWORD *)&g_AsyncMovieState.__pad_164[16] = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  v4 = this->q0B0; /*0x7623fb*/
  v5 = flt_7F6BB4[v4]; /*0x762406*/
  a1 = *a2; /*0x76240d*/
  v55 = *(AbstractClass **)a3; /*0x76241b*/
  v6 = a2[2]; /*0x762426*/
  v57 = a2[1]; /*0x762429*/
  v58 = v6; /*0x76242d*/
  LODWORD(v7) = Math::RoundToInt(v5); /*0x76243b*/
  v8 = *(AbstractClass **)(a3 + 4); /*0x762440*/
  v50 = v7; /*0x762443*/
  v62 = v8; /*0x762447*/
  LODWORD(v51) = Math::RoundToInt(v5); /*0x76245e*/
  LODWORD(v53) = *(_DWORD *)(a3 + 8); /*0x762465*/
  v9 = Math::RoundToInt(v5); /*0x762477*/
  var94 = (AbstractClass *)LODWORD(v50); /*0x76248a*/
  v59 = (AbstractClass *)LODWORD(v51); /*0x76248e*/
  v61 = (AbstractClass *)v9; /*0x762492*/
  if ( !v4 ) /*0x762496*/
    v61 = (AbstractClass *)(v9 + 50); /*0x76249b*/
  if ( v4 == 3 ) /*0x7624a2*/
    v61 = (AbstractClass *)((char *)v61 + 50); /*0x7624a4*/
  st7_7a = flt_7F6BB4[v4]; /*0x7624a9*/
  a1 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x7624fd*/
  v57 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x762507*/
  v58 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x76251c*/
  *(float *)&v62 = Math::Sqrt( /*0x76255a*/
                     (double)((char *)v57 - (char *)v59) * (double)((char *)v57 - (char *)v59)
                   + (double)((char *)a1 - (char *)var94) * (double)((char *)a1 - (char *)var94));
  LODWORD(v53) = (char *)v58 - (char *)v61; /*0x762570*/
  v51 = (float)((char *)v57 - (char *)v59); /*0x762574*/
  st6_7a = (double)((char *)v58 - (char *)v61); /*0x762578*/
  v52 = st6_7a; /*0x76257c*/
  v12 = Math::Sqrt(v51 * v51 + st6_7a * st6_7a + (double)((char *)a1 - (char *)var94) /*0x76259d*/
                                               * (double)((char *)a1 - (char *)var94));
  v55 = (AbstractClass *)Math::RoundToInt(v12); /*0x7625ae*/
  this->q0B4 = a1; /*0x7625bb*/
  this->q0B8 = v57; /*0x7625c1*/
  this->q0BC = v58; /*0x7625c8*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 436))(this, this + 45); /*0x7625cf*/
  v10 = var94; /*0x7625d5*/
  v11 = v59; /*0x7625d9*/
  this->__pad_148 = 4; /*0x7625e3*/
  this->q0C0 = v10; /*0x7625ed*/
  v15 = v61; /*0x7625ef*/
  this->q0C4 = v11; /*0x7625f3*/
  *(this + 83) = this + 96; /*0x7625fc*/
  this->q0C8 = v15; /*0x762602*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &a1, (IUnknown *)(this + 51)); /*0x762617*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &var94, (IUnknown *)(this + 53)); /*0x76262e*/
  LODWORD(v53) = Math::RoundToInt(*(float *)&v62); /*0x76263c*/
  v16 = (double)SLODWORD(v53); /*0x762646*/
  v17 = 48 * this->q0B0; /*0x76264d*/
  v77 = v16 + *(float *)&g_AsyncMovieState.__pad_A8[v17 + 16]; /*0x762658*/
  v78 = *(AbstractClass **)(v17 + 11820196); /*0x76266c*/
  v18 = *(float *)(v17 + 11820200); /*0x762673*/
  var6C = v77; /*0x762680*/
  v79 = v18; /*0x762684*/
  v70 = v78; /*0x762692*/
  v71 = (AbstractClass *)LODWORD(v79); /*0x762696*/
  v74 = v16 + *(float *)(v17 + 11820204); /*0x7626a0*/
  v75 = *(AbstractClass **)(v17 + 11820208); /*0x7626ae*/
  v19 = *(float *)(v17 + 11820212); /*0x7626b2*/
  v63 = (AbstractClass *)LODWORD(v74); /*0x7626bc*/
  v76 = v19; /*0x7626c0*/
  v64 = v75; /*0x7626c8*/
  v65 = (AbstractClass *)LODWORD(v76); /*0x7626cc*/
  v80 = *(float *)(v17 + 11820216); /*0x7626d6*/
  v82 = *(AbstractClass **)(v17 + 11820220); /*0x7626ee*/
  v20 = *(float *)(v17 + 11820224); /*0x7626f5*/
  var60 = v80; /*0x762702*/
  var34 = v20; /*0x762706*/
  v73 = v82; /*0x762714*/
  var58 = var34; /*0x762718*/
  v50 = *(float *)(v17 + 11820228); /*0x762726*/
  v51 = *(float *)(v17 + 11820232); /*0x762734*/
  v21 = *(float *)(v17 + 11820236); /*0x762738*/
  v66 = (AbstractClass *)LODWORD(v50); /*0x76273e*/
  v52 = v21; /*0x76274c*/
  v22 = (double)((char *)v61 - (char *)v58); /*0x762758*/
  v23 = (double)(int)v55; /*0x76275c*/
  v24 = (double)(int)v58; /*0x762760*/
  v67 = (AbstractClass *)LODWORD(v51); /*0x762779*/
  *(float *)&v71 = v77 * v22 / v23 + v24; /*0x762790*/
  *(float *)&v65 = v74 * v22 / v23 + v24; /*0x76279e*/
  var58 = v80 * v22 / v23 + v24; /*0x7627af*/
  *(float *)&v68 = v50 * v22 / v23 + v24; /*0x7627bd*/
  v25 = (double)((char *)var94 - (char *)a1); /*0x7627c7*/
  v50 = v25; /*0x7627cb*/
  v53 = v25; /*0x7627d9*/
  v26 = Math::Sqrt((double)((char *)v59 - (char *)v57) * (double)((char *)v59 - (char *)v57) + v50 * v50); /*0x7627f2*/
  v27 = v53; /*0x7627f7*/
  if ( v26 < v53 ) /*0x762807*/
    v27 = v26; /*0x76280b*/
  if ( -v27 > v26 ) /*0x762818*/
    v27 = -v26; /*0x76281e*/
  v53 = Math::ArcTan2_Table(v27 / v26); /*0x762837*/
  if ( (int)v57 > (int)v59 ) /*0x762840*/
    v53 = -v53; /*0x762848*/
  Matrix3x4::Identity(v83); /*0x762853*/
  v49 = v53; /*0x762864*/
  Matrix2D::Rotate((float *)v83, v49); /*0x762867*/
  v28 = TransformMatrix3x4Point(&v50, (float *)v83, &var6C); /*0x76287c*/
  var6C = *v28; /*0x762883*/
  v70 = (AbstractClass *)*((_DWORD *)v28 + 1); /*0x76288f*/
  v71 = (AbstractClass *)*((_DWORD *)v28 + 2); /*0x7628a1*/
  eax13b = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v63); /*0x7628a5*/
  v63 = *eax13b; /*0x7628ac*/
  v64 = eax13b[1]; /*0x7628b3*/
  v65 = eax13b[2]; /*0x7628c2*/
  v30 = TransformMatrix3x4Point(&v50, (float *)v83, &var60); /*0x7628ce*/
  var60 = *v30; /*0x7628d5*/
  v73 = (AbstractClass *)*((_DWORD *)v30 + 1); /*0x7628e1*/
  var58 = v30[2]; /*0x7628f3*/
  eax13d = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v66); /*0x7628f7*/
  v32 = (double)(int)a1; /*0x7628fc*/
  v66 = *eax13d; /*0x762902*/
  v67 = eax13d[1]; /*0x76290f*/
  v68 = eax13d[2]; /*0x762916*/
  v29 = (AbstractClass *)Math::RoundToInt(v32); /*0x762923*/
  *(float *)&v55 = (float)(int)v57; /*0x762925*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762936*/
  v34 = Math::RoundToInt(v32); /*0x76293a*/
  v35 = v51; /*0x76293f*/
  this->q0FC = v29; /*0x762951*/
  *((float *)this + 64) = v35; /*0x762953*/
  this->q104 = v34; /*0x762956*/
  v31 = (AbstractClass *)Math::RoundToInt(v32); /*0x762966*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762971*/
  v37 = Math::RoundToInt(v32); /*0x762975*/
  this->q108 = v31; /*0x762980*/
  *((float *)this + 67) = v51; /*0x762990*/
  this->q110 = v37; /*0x762993*/
  v33 = (AbstractClass *)Math::RoundToInt(v32); /*0x7629a3*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x7629ae*/
  v39 = Math::RoundToInt(v32); /*0x7629b2*/
  v40 = v51; /*0x7629b7*/
  v41 = v32 + *(float *)&v66; /*0x7629c1*/
  this->q114 = v33; /*0x7629c5*/
  *((float *)this + 70) = v40; /*0x7629c7*/
  this->q11C = v39; /*0x7629ca*/
  v36 = (AbstractClass *)Math::RoundToInt(v41); /*0x7629da*/
  LODWORD(v51) = Math::RoundToInt(*(float *)&v55 + *(float *)&v67); /*0x7629e5*/
  v43 = Math::RoundToInt(*(float *)&v68); /*0x7629e9*/
  v44 = v51; /*0x7629ee*/
  this->q120 = v36; /*0x7629f8*/
  *((float *)this + 73) = v44; /*0x762a06*/
  this->q128 = v43; /*0x762a09*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], this + 63, (IUnknown *)(this + 55)); /*0x762a12*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], this + 66, (IUnknown *)(this + 57)); /*0x762a2b*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], this + 69, (IUnknown *)(this + 59)); /*0x762a44*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], this + 72, (IUnknown *)(this + 61)); /*0x762a5d*/
  v45 = (_DWORD *)*(this + 83); /*0x762a62*/
  *v45 = this->q0DC; /*0x762a6a*/
  v45[1] = this->q0E0; /*0x762a6f*/
  v46 = *(this + 83); /*0x762a72*/
  *(_DWORD *)(v46 + 8) = this->q0E4; /*0x762a7a*/
  *(_DWORD *)(v46 + 12) = this->q0E8; /*0x762a80*/
  v47 = *(this + 83); /*0x762a83*/
  *(_DWORD *)(v47 + 16) = this->q0F4; /*0x762a8f*/
  *(_DWORD *)(v47 + 20) = this->q0F8; /*0x762a98*/
  result = *(this + 83); /*0x762a9b*/
  *(_DWORD *)(result + 24) = this->q0EC; /*0x762aa7*/
  *(_DWORD *)(result + 28) = this->q0F0; /*0x762ab5*/
  qmemcpy(this + 118, (const void *)(this->q1D4 + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/
}


// ==== 0x00762AE0  nullsub_47  this=-  sig=ida-proto ====
void __cdecl nullsub_47()
{
  ; /*0x762ae0*/
}


// ==== 0x00762AF0  Voxel::TransformMatrix  this=ObjectClass  sig=csp ====
int __thiscall Voxel_Transform_Matrix(int this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // ebp
  double v12; // st7
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  int *v16; // eax
  int v17; // edi
  int v18; // eax
  int *v19; // eax
  int v20; // edi
  int v21; // eax
  int *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int v26; // edi
  int v27; // eax
  _DWORD *v28; // ecx
  double v29; // st7
  int v30; // edi
  int v31; // eax
  int v32; // edx
  double v33; // st7
  char v35; // c0
  int v37; // edi
  int v38; // eax
  int v39; // ecx
  double v40; // st7
  int v41; // edi
  int v42; // eax
  int v43; // edx
  double v44; // st7
  double v45; // st7
  int v46; // edi
  int v47; // eax
  _DWORD *v48; // ecx
  double v49; // st7
  int v50; // edi
  int v51; // eax
  int v52; // edx
  double v53; // st7
  int v54; // edi
  int v55; // eax
  int v56; // ecx
  double v57; // st7
  char v59; // c0
  int v60; // edi
  int v61; // eax
  int v62; // ecx
  double v63; // st7
  int v64; // edi
  int v65; // eax
  int v66; // edx
  double v67; // st7
  int v68; // edi
  int v69; // eax
  int v70; // ecx
  int v71; // [esp+20h] [ebp-1Ch] BYREF
  int v72; // [esp+24h] [ebp-18h]
  int v73; // [esp+28h] [ebp-14h]
  int v74; // [esp+2Ch] [ebp-10h]
  _BYTE v75[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)(this + 312) - *(double *)(this + 320) > 0.1 && !*(_DWORD *)(this + 176) ) /*0x762b18*/
    *(_BYTE *)(this + 301) = 1; /*0x762b22*/
  if ( *(_DWORD *)(this + 304) == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) && *(_DWORD *)(this + 176) == 3 ) /*0x762b49*/
  {
    v2 = *(_DWORD *)(this + 308); /*0x762b4b*/
    *(_DWORD *)(this + 304) = 64; /*0x762b51*/
    *(_DWORD *)(this + 308) = v2 + 1; /*0x762b5c*/
  }
  v3 = *(_DWORD *)(this + 172); /*0x762b62*/
  if ( !v3 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v4 = *(_DWORD *)(this + 468); /*0x762b70*/
  if ( !v4 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  if ( *(_DWORD *)(this + 304) == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( *(_DWORD *)(v4 + 692) != v3 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762bae*/
  {
    v5 = v4 + 156; /*0x762bc0*/
    v6 = *(_DWORD *)(v4 + 156); /*0x762bc4*/
    v7 = *(_DWORD *)(v5 + 4); /*0x762bc6*/
    v8 = *(_DWORD *)(v5 + 8); /*0x762bc9*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 172) + 88))( /*0x762bd1*/
                     *(_DWORD *)(this + 172),
                     v75);
    v10 = v8 - v9[2]; /*0x762bdb*/
    v72 = v6 - *v9; /*0x762bdd*/
    v11 = v7 - v9[1]; /*0x762be4*/
    v74 = v10; /*0x762be6*/
    v73 = v11; /*0x762bea*/
    v12 = Math::Sqrt((double)v72 * (double)v72 + (double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x762c16*/
    v71 = Math::RoundToInt(v12); /*0x762c23*/
    if ( MEMORY[0xB45D80] * 6.0 < (double)v71 ) /*0x762c3e*/
    {
LABEL_13:
      *(_BYTE *)(this + 300) = 0; /*0x762c40*/
      *(_BYTE *)(this + 301) = 1; /*0x762c47*/
    }
  }
  if ( *(_BYTE *)(this + 300) ) /*0x762c4e*/
  {
    if ( *(_DWORD *)(this + 176) != 3 ) /*0x762c69*/
      goto LABEL_21; /*0x762c69*/
    v13 = *(_DWORD *)(this + 172); /*0x762c6f*/
    if ( v13 && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 1 ) /*0x762c81*/
    {
      v14 = *(_DWORD *)(this + 172); /*0x762c97*/
      v15 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 468) + 176))( /*0x762ca9*/
              *(_DWORD *)(this + 468),
              v75,
              0,
              0,
              0);
      v16 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v14 + 88))(v14, &v71, v15); /*0x762cb9*/
      Voxel::LightRender((_DWORD *)this, v16, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( *(_DWORD *)(this + 176) == 3 ) /*0x762ccf*/
    {
      v17 = *(_DWORD *)(this + 468); /*0x762cd7*/
      v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762ce8*/
      v19 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v17 + 176))( /*0x762d05*/
                     v17,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v18);
      Voxel::LightRender((_DWORD *)this, v19, (int)v75); /*0x762d0e*/
    }
    else
    {
LABEL_21:
      v20 = *(_DWORD *)(this + 468); /*0x762d1b*/
      v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762d2c*/
      v22 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v20 + 176))( /*0x762d49*/
                     v20,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v21);
      Voxel::SectionProject((_DWORD *)this, v22, (int)v75); /*0x762d52*/
    }
  }
LABEL_22:
  v23 = *(double *)(this + 312); /*0x762d57*/
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762d6c*/
  {
    if ( v23 < 1.0 && *(_BYTE *)(this + 300) ) /*0x762f69*/
    {
      v44 = *(double *)(this + 312) + 0.050000001; /*0x762f7d*/
      *(double *)(this + 312) = v44; /*0x762f83*/
      if ( v44 > 0.98 ) /*0x762f94*/
      {
        *(_DWORD *)(this + 312) = 0; /*0x762f96*/
        *(_DWORD *)(this + 316) = 1072693248; /*0x762fa0*/
      }
      v45 = *(double *)(this + 312); /*0x762faa*/
      v46 = Math::RoundToInt(v45); /*0x762fd5*/
      v47 = Math::RoundToInt(v45); /*0x762fe3*/
      v48 = *(_DWORD **)(this + 332); /*0x762fe8*/
      *v48 = v46; /*0x762ff0*/
      v48[1] = v47; /*0x762ff4*/
      v49 = *(double *)(this + 312); /*0x762ff7*/
      v50 = Math::RoundToInt(v49); /*0x763022*/
      v51 = Math::RoundToInt(v49); /*0x763030*/
      v52 = *(_DWORD *)(this + 332); /*0x763035*/
      *(_DWORD *)(v52 + 8) = v50; /*0x76303d*/
      *(_DWORD *)(v52 + 12) = v51; /*0x763042*/
      v53 = *(double *)(this + 312); /*0x763045*/
      v54 = Math::RoundToInt(v53); /*0x763070*/
      v55 = Math::RoundToInt(v53); /*0x76307e*/
      v56 = *(_DWORD *)(this + 332); /*0x763083*/
      *(_DWORD *)(v56 + 16) = v54; /*0x76308b*/
      *(_DWORD *)(v56 + 20) = v55; /*0x763090*/
    }
    if ( *(_BYTE *)(this + 301) && 0.050000001 * 0.5 + *(double *)(this + 312) >= *(double *)(this + 320) ) /*0x7630be*/
    {
      v57 = *(double *)(this + 320) + 0.050000001; /*0x7630ca*/
      *(double *)(this + 320) = v57; /*0x7630d6*/
      if ( !v59 ) /*0x7630e1*/
        return (*(int (__thiscall **)(int))(this->q0F8)(this); /*0x7630e1*/
      v60 = Math::RoundToInt(v57); /*0x76311c*/
      v61 = Math::RoundToInt(v57); /*0x76312a*/
      v62 = *(_DWORD *)(this + 332); /*0x76312f*/
      *(_DWORD *)(v62 + 24) = v60; /*0x763137*/
      *(_DWORD *)(v62 + 28) = v61; /*0x76313c*/
      v63 = *(double *)(this + 320); /*0x76313f*/
      v64 = Math::RoundToInt(v63); /*0x76316a*/
      v65 = Math::RoundToInt(v63); /*0x763178*/
      v66 = *(_DWORD *)(this + 332); /*0x76317d*/
      *(_DWORD *)(v66 + 32) = v64; /*0x763185*/
      *(_DWORD *)(v66 + 36) = v65; /*0x76318a*/
      v67 = *(double *)(this + 320); /*0x76318d*/
      v68 = Math::RoundToInt(v67); /*0x7631b8*/
      v69 = Math::RoundToInt(v67); /*0x7631c6*/
      v70 = *(_DWORD *)(this + 332); /*0x7631cb*/
      *(_DWORD *)(v70 + 40) = v68; /*0x7631d3*/
      *(_DWORD *)(v70 + 44) = v69; /*0x7631d8*/
    }
    return Voxel::FaceBlit(this); /*0x7631d8*/
  }
  if ( v23 < 1.0 && *(_BYTE *)(this + 300) ) /*0x762d7b*/
  {
    v24 = *(double *)(this + 312) + 0.050000001; /*0x762d8f*/
    *(double *)(this + 312) = v24; /*0x762d95*/
    if ( v24 > 0.98 ) /*0x762da6*/
    {
      *(_DWORD *)(this + 312) = 0; /*0x762da8*/
      *(_DWORD *)(this + 316) = 1072693248; /*0x762db2*/
    }
    v25 = *(double *)(this + 312); /*0x762dbc*/
    v26 = Math::RoundToInt(v25); /*0x762de7*/
    v27 = Math::RoundToInt(v25); /*0x762df5*/
    v28 = *(_DWORD **)(this + 332); /*0x762dfa*/
    *v28 = v26; /*0x762e02*/
    v28[1] = v27; /*0x762e06*/
    v29 = *(double *)(this + 312); /*0x762e09*/
    v30 = Math::RoundToInt(v29); /*0x762e34*/
    v31 = Math::RoundToInt(v29); /*0x762e42*/
    v32 = *(_DWORD *)(this + 332); /*0x762e47*/
    *(_DWORD *)(v32 + 8) = v30; /*0x762e4f*/
    *(_DWORD *)(v32 + 12) = v31; /*0x762e54*/
  }
  if ( !*(_BYTE *)(this + 301) || 0.050000001 * 0.5 + *(double *)(this + 312) < *(double *)(this + 320) ) /*0x762e82*/
    return Voxel::FaceBlit(this); /*0x7631dd*/
  v33 = *(double *)(this + 320) + 0.050000001; /*0x762e8e*/
  *(double *)(this + 320) = v33; /*0x762e9a*/
  if ( !v35 ) /*0x762ea5*/
    return (*(int (__thiscall **)(int))(this->q0F8)(this); /*0x762eba*/
  v37 = Math::RoundToInt(v33); /*0x762ee0*/
  v38 = Math::RoundToInt(v33); /*0x762eee*/
  v39 = *(_DWORD *)(this + 332); /*0x762ef3*/
  *(_DWORD *)(v39 + 16) = v37; /*0x762efb*/
  *(_DWORD *)(v39 + 20) = v38; /*0x762f00*/
  v40 = *(double *)(this + 320); /*0x762f03*/
  v41 = Math::RoundToInt(v40); /*0x762f2e*/
  v42 = Math::RoundToInt(v40); /*0x762f3c*/
  v43 = *(_DWORD *)(this + 332); /*0x762f41*/
  *(_DWORD *)(v43 + 24) = v41; /*0x762f4b*/
  *(_DWORD *)(v43 + 28) = v42; /*0x762f50*/
  return Voxel::FaceBlit(this); /*0x762eb3*/
}


// ==== 0x007631F0  WaveClass::GetTypeIdentifier  this=WaveClass  sig=csp ====
int WaveClass::_vt11()
{
  return 43; /*0x7631f5*/
}


// ==== 0x00763200  WaveClass::ddtor  this=WaveClass  sig=csp ====
WaveClass *__thiscall WaveClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &WaveClass::`vftable'; /*0x763206*/
  *(Block + 1) = &WaveClass::`vftable'; /*0x76320c*/
  *(Block + 2) = &vt_WaveClass; /*0x763213*/
  *(Block + 3) = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x763221*/
  v6 = Block; /*0x763236*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EC38] + 16))(&MEMORY[0xA8EC38], &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8EC48] && v3 < --MEMORY[0xA8EC48] ) /*0x763255*/
  {
    do /*0x76326d*/
    {
      ++v3; /*0x76325d*/
      *((_DWORD *)MEMORY[0xA8EC3C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8EC3C] + v3); /*0x763261*/
    }
    while ( v3 < MEMORY[0xA8EC48] ); /*0x76326d*/
  }
  (*((void (__thiscall **)(void **))*(Block + 124) + 3))(Block + 124); /*0x76327e*/
  v4 = *(Block + 125); /*0x763281*/
  *(Block + 124) = &vt_VectorClass_CellClass; /*0x763284*/
  if ( v4 && *((_BYTE *)Block + 509) ) /*0x76328e*/
  {
    OperatorDelete(v4); /*0x763296*/
    *(Block + 125) = 0; /*0x76329e*/
  }
  *((_BYTE *)Block + 509) = 0; /*0x7632a7*/
  *(Block + 126) = 0; /*0x7632ab*/
  ObjectClass::Dtor(Block); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    OperatorDelete(Block); /*0x7632c1*/
  return (WaveClass *)Block; /*0x7632cb*/
}


// ==== 0x007632D0  WaveClass::Constructor_7632D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_7632D0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x7632d9*/
  this->Capacity = a2; /*0x7632e0*/
  this->q030 = 1; /*0x7632e3*/
  this->__pad_034 = 0; /*0x7632e7*/
  *this = &vt_VectorClass_CellClass; /*0x7632eb*/
  if ( a2 ) /*0x7632f1*/
  {
    if ( a3 ) /*0x7632f9*/
    {
      this->Items = a3; /*0x7632fb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x76330c*/
      this->__pad_034 = 1; /*0x76330f*/
    }
  }
  *this = &vt_DynamicVectorClass_CellClass; /*0x763313*/
  this->__pad_014 = 10; /*0x763319*/
  this->q010 = 0; /*0x763320*/
  return this; /*0x763329*/
}


// ==== 0x00763330  Voxel::freeSectionMemory  this=Voxel  sig=csp ====
char __thiscall sub_763330(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Voxel_field_0x8; /*0x763333*/
  if ( this->Voxel_field_0x10 >= v3 ) /*0x76333b*/
  {
    if ( !this->__pad_0D0 && v3 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = this->Voxel_field_0x14; /*0x763348*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x763358*/
      return 0; /*0x76335f*/
  }
  v6 = this->Voxel_field_0x10; /*0x763365*/
  v7 = this->Voxel_field_0x4; /*0x763368*/
  this->Voxel_field_0x10 = v6 + 1; /*0x76336e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x763378*/
  return 1; /*0x763361*/
}


// ==== 0x00763380  sub_763380  this=-  sig=ida-proto ====
void sub_763380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76338c*/
  dbl_B725F0 = Math::Sqrt(v0 + v0); /*0x76339e*/
}


// ==== 0x007633B0  sub_7633B0  this=-  sig=ida-proto ====
void sub_7633B0()
{
  dbl_B72660 = dbl_B725F0 / 60.0; /*0x7633bc*/
}


// ==== 0x007633D0  sub_7633D0  this=-  sig=ida-proto ====
void sub_7633D0()
{
  dbl_B72640 = 1.0 / dbl_B72660; /*0x7633dc*/
}


// ==== 0x007633F0  sub_7633F0  this=-  sig=ida-proto ====
void sub_7633F0()
{
  dbl_B72638 = 0.0174532925199433 * 45.0; /*0x7633fc*/
}


// ==== 0x00763410  sub_763410  this=-  sig=ida-proto ====
void sub_763410()
{
  dbl_B725F8 = 0.0174532925199433 * 60.0; /*0x76341c*/
}


// ==== 0x00763430  sub_763430  this=-  sig=ida-proto ====
void sub_763430()
{
  dbl_B725D0 = 0.0174532925199433 * 90.0; /*0x76343c*/
}


// ==== 0x00763450  sub_763450  this=-  sig=ida-proto ====
__int64 sub_763450()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B725D0 - dbl_B725F8); /*0x763462*/
  result = Math::RoundToInt(v0 * dbl_B725F0 * 0.5); /*0x763476*/
  dword_B72668 = result; /*0x76347b*/
  return result; /*0x763480*/
}


// ==== 0x00763490  sub_763490  this=-  sig=ida-proto ====
void sub_763490()
{
  dbl_B72600 = Math::ArcTan((double)dword_B72668 * 0.00390625); /*0x7634a7*/
}


// ==== 0x007634C0  sub_7634C0  this=-  sig=ida-proto ====
void sub_7634C0()
{
  dbl_B72630 = Math::ArcTan((double)(2 * dword_B72668) / dbl_B725F0); /*0x7634e2*/
}


// ==== 0x007634F0  sub_7634F0  this=-  sig=ida-proto ====
__int64 sub_7634F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72668) + 0.5); /*0x76350b*/
  dword_B72658 = result; /*0x763510*/
  return result; /*0x763516*/
}


// ==== 0x00763520  sub_763520  this=-  sig=ida-proto ====
int sub_763520()
{
  word_B725E8 = 0; /*0x763522*/
  word_B725EA = 0; /*0x763528*/
  return 0; /*0x76352e*/
}


// ==== 0x00763530  sub_763530  this=-  sig=ida-proto ====
int sub_763530()
{
  dword_B72620 = 0; /*0x763532*/
  dword_B72624 = 0; /*0x763537*/
  dword_B72628 = 0; /*0x76353c*/
  return 0; /*0x763541*/
}


// ==== 0x00763550  sub_763550  this=-  sig=ida-proto ====
int sub_763550()
{
  dword_B72650 = 0; /*0x763555*/
  dword_B72648 = 128; /*0x76355f*/
  dword_B7264C = 128; /*0x763564*/
  return 128; /*0x763569*/
}


// ==== 0x00763570  sub_763570  this=-  sig=ida-proto ====
int sub_763570()
{
  dword_B725D8 = 0; /*0x763572*/
  dword_B725DC = 0; /*0x763577*/
  dword_B725E0 = 0; /*0x76357c*/
  dword_B725E4 = 0; /*0x763581*/
  return 0; /*0x763586*/
}


// ==== 0x00763590  sub_763590  this=-  sig=ida-proto ====
int sub_763590()
{
  dword_B7260C = 0; /*0x763597*/
  dword_B72610 = 0; /*0x76359c*/
  byte_B72614 = 1; /*0x7635a1*/
  byte_B72615 = 0; /*0x7635a8*/
  dword_B72608 = (int)&vt_DynamicVectorClass_WaypointPathClass; /*0x7635ad*/
  dword_B7261C = 10; /*0x7635b7*/
  dword_B72618 = 0; /*0x7635c1*/
  return atexit(sub_7635D0); /*0x7635cc*/
}


// ==== 0x007635D0  sub_7635D0  this=-  sig=ida-proto ====
void __cdecl sub_7635D0()
{
  dword_B72608 = (int)&vt_VectorClass_WaypointPathClass; /*0x7635d8*/
  if ( dword_B7260C && byte_B72615 ) /*0x7635ec*/
  {
    __3_YAXPAX_Z(dword_B7260C); /*0x7635ef*/
    dword_B7260C = 0; /*0x7635f7*/
  }
  byte_B72615 = 0; /*0x7635fd*/
  dword_B72610 = 0; /*0x763603*/
}


// ==== 0x00763610  Waypoint::To_String  this=Waypoint  sig=csp ====
CHAR *__fastcall Waypoint::To_String(CCINIClass *aP0)
{
  if ( aP0 == (CCINIClass *)-1 ) /*0x763613*/
  {
    byte_B72654 = 0; /*0x763615*/
    return &byte_B72654; /*0x76361c*/
  }
  else
  {
    if ( (int)aP0 >= 26 ) /*0x763625*/
      wsprintfA(&byte_B72654, "%c%c", (int)aP0 / 26 + 64, (int)aP0 % 26 + 65); /*0x763671*/
    else
      wsprintfA(&byte_B72654, "%c", aP0->__pad_41); /*0x763635*/
    return &byte_B72654; /*0x76363e*/
  }
}


// ==== 0x00763690  String::To_Waypoint  this=ObjectClass  sig=csp ====
int __thiscall String::To_Waypoint(char *this)
{
  int v2; // esi

  v2 = -1; /*0x763694*/
  if ( isalpha(*this) && (v2 = toupper(*this) - 65, isalpha(this->vtable2)) ) /*0x7636ba*/
    return toupper(this->vtable2) + 26 * v2 - 39; /*0x7636db*/
  else
    return v2; /*0x7636e0*/
}


// ==== 0x007636F0  ObjectClass::unknown_libname_36  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_36(_DWORD *this)
{
  *this = 0; /*0x7636f4*/
  this->vtable2 = 0; /*0x7636f6*/
  this->vtable3 = 0; /*0x7636f9*/
  return this; /*0x7636fc*/
}


// ==== 0x00763700  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_763700(_DWORD *this, _DWORD *a2)
{
  *this = *a2; /*0x76370b*/
  this->vtable2 = a2[1]; /*0x763710*/
  this->vtable3 = a2[2]; /*0x763717*/
  return this; /*0x763713*/
}


// ==== 0x00763720  ObjectClass::nullsub_84  this=ObjectClass  sig=csp ====
void nullsub_84()
{
  ; /*0x763720*/
}


// ==== 0x00763730  WaypointPathClass::Init  this=WaypointPathClass  sig=csp ====
int __thiscall sub_763730(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  *(_DWORD *)(this + 36) = -1; /*0x76373a*/
  *(_DWORD *)(this + 44) = 0; /*0x763741*/
  *(_DWORD *)(this + 48) = 0; /*0x763744*/
  *(_BYTE *)(this + 52) = 1; /*0x763747*/
  *(_BYTE *)(this + 53) = 0; /*0x76374b*/
  *(_DWORD *)(this + 40) = &vt_DynamicVectorClass_WaypointClass; /*0x76374e*/
  *(_DWORD *)(this + 60) = 10; /*0x763755*/
  *(_DWORD *)(this + 56) = 0; /*0x76375c*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x76375f*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x763765*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x76376c*/
  *(_DWORD *)(this + 12) = &vt_WaypointPathClass; /*0x763773*/
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    v2 = dword_B72618++; /*0x7637b9*/
    *((_DWORD *)dword_B7260C + v2) = this; /*0x7637c8*/
  }
  return this; /*0x7637cd*/
}


// ==== 0x00763810  WaypointPathClass::Construct  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::Construct(int this, WaypointClass *aP1)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  *(_DWORD *)(this + 36) = -1; /*0x76381e*/
  *(_DWORD *)(this + 44) = 0; /*0x763825*/
  *(_DWORD *)(this + 48) = 0; /*0x763828*/
  *(_BYTE *)(this + 52) = 1; /*0x76382b*/
  *(_BYTE *)(this + 53) = 0; /*0x76382f*/
  *(_DWORD *)(this + 40) = &vt_DynamicVectorClass_WaypointClass; /*0x763832*/
  *(_DWORD *)(this + 60) = 10; /*0x763839*/
  *(_DWORD *)(this + 56) = 0; /*0x763840*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
  *(_DWORD *)(this + 12) = &vt_WaypointPathClass; /*0x763859*/
  if ( (unsigned int)aP1 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_B72608->field_8)(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = dword_B72618++; /*0x7638a7*/
    *(_DWORD *)&dword_B7260C->__pad_0[4 * v3] = this; /*0x7638b6*/
  }
  return this; /*0x7638bb*/
}


// ==== 0x00763980  Array::GetElement  this=IUnknown  sig=csp ====
int __thiscall Array::GetElement(_DWORD *this, CampaignScore *aP1)
{
  if ( (int)aP1 < 0 || (int)aP1 >= this->q038 ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return this->q02C + 12 * (_DWORD)aP1; /*0x763993*/
}


// ==== 0x007639A0  ObjectClass::WaypointClass_Find  this=ObjectClass  sig=csp ====
char __thiscall sub_7639A0(_DWORD *this, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int *v13; // ecx

  v2 = a2[2]; /*0x7639c2*/
  v3 = ((__int16)(a2[1] / 256) << 8) + 128; /*0x7639e0*/
  v4 = ((__int16)(*a2 / 256) << 8) + 128; /*0x7639ee*/
  if ( this->objectTypeFlags == -1 ) /*0x7639f4*/
  {
    v5 = this->attachedBomb; /*0x7639f6*/
    v6 = this + 10; /*0x7639f9*/
    v7 = this->nextObject; /*0x7639fc*/
    if ( v5 < v7 /*0x763a1e*/
      || (*((_BYTE *)v6 + 13) || !v7)
      && (v8 = v6[5], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v7 + v8, 0) )
    {
      v9 = v6[4]; /*0x763a25*/
      v10 = v9 + 1; /*0x763a28*/
      v11 = 3 * v9; /*0x763a2b*/
      v12 = v6[1]; /*0x763a2e*/
      v6[4] = v10; /*0x763a31*/
      v13 = (int *)(v12 + 4 * v11); /*0x763a34*/
      *v13 = v4; /*0x763a37*/
      v13[1] = v3; /*0x763a3a*/
      v13[2] = v2; /*0x763a3d*/
    }
  }
  return 1; /*0x763a40*/
}


// ==== 0x00763A50  Waypoint::FindCell  this=Waypoint  sig=csp ====
char __thiscall Waypoint_FindCell(int *this, _DWORD *a2)
{
  int v3; // ecx
  _DWORD *i; // edi
  int v6; // [esp+10h] [ebp-8h]
  int *v7; // [esp+14h] [ebp-4h]

  v3 = 0; /*0x763a59*/
  v7 = this; /*0x763a5b*/
  v6 = this->q038; /*0x763a64*/
  if ( v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = (_DWORD *)*(this + 11); /*0x763a6e*/
        (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  v7[9] = v3; /*0x763ad0*/
  return 1; /*0x763acd*/
}


// ==== 0x00763BA0  VectorClass::GetAtChecked  this=IUnknown  sig=csp ====
int __thiscall VectorClass::GetAtChecked(int *this, IUnknown *aP1)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int *, IUnknown *))(this->q028 + 20))(this + 10, aP1) + 1; /*0x763bb4*/
  if ( this->q024 != -1 && v3 == this->q038 ) /*0x763bbd*/
    v3 = this->q024; /*0x763bbf*/
  if ( v3 < 0 || v3 >= this->q038 ) /*0x763bc8*/
    return 0; /*0x763bd7*/
  else
    return this->q02C + 12 * v3; /*0x763bd1*/
}


// ==== 0x00763C00  WaypointPathClass::PowerDrainUpdate  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x763c09*/
  Power::TimerProcess(*(_DWORD *)(this + 36)); /*0x763c14*/
  return Power::TimerProcess(*(_DWORD *)(this + 56)); /*0x763c24*/
}


// ==== 0x00763C30  WaypointPathClass::ddtor  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = -1252326136; /*0x763c60*/
  return 0; /*0x763c3d*/
}


// ==== 0x00763C70  WaypointPathClass::LoadState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::_vt05(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int result; // eax
  _DWORD *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v2 = a1; /*0x763c76*/
  v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[10] = &vt_DynamicVectorClass_WaypointClass; /*0x763ca0*/
      *v2 = &WaypointPathClass::`vftable'; /*0x763ca7*/
      v2[1] = &WaypointPathClass::`vftable'; /*0x763cad*/
      v2[2] = &WaypointPathClass::`vftable'; /*0x763cb4*/
      v2[3] = &vt_WaypointPathClass; /*0x763cbb*/
    }
    result = (*(int (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a1, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      v5 = v2 + 10; /*0x763cd8*/
      if ( v5 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(v5, 0, 0); /*0x763ce3*/
        *v5 = &vt_DynamicVectorClass_WaypointClass; /*0x763ce8*/
        v5[5] = 10; /*0x763cee*/
        v5[4] = 0; /*0x763cf5*/
      }
      v6 = 0; /*0x763cfc*/
      if ( (int)a1 <= 0 ) /*0x763d00*/
      {
        return 0; /*0x763d78*/
      }
      else
      {
        while ( 1 ) /*0x763d02*/
        {
          v7 = *(_DWORD *)v3; /*0x763d02*/
          v15 = 0; /*0x763d0d*/
          v16 = 0; /*0x763d11*/
          v17 = 0; /*0x763d15*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 12))(v3, &v15, 12, 0); /*0x763d19*/
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          v8 = v5[2]; /*0x763d20*/
          if ( v5[4] < v8 /*0x763d42*/
            || (*((_BYTE *)v5 + 13) || !v8)
            && (v9 = v5[5], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v8 + v9, 0) )
          {
            v10 = v5[4]; /*0x763d49*/
            v11 = v10 + 1; /*0x763d4c*/
            v12 = 3 * v10; /*0x763d4f*/
            v13 = v5[1]; /*0x763d52*/
            v5[4] = v11; /*0x763d55*/
            v14 = (_DWORD *)(v13 + 4 * v12); /*0x763d58*/
            *v14 = v15; /*0x763d5f*/
            v14[1] = v16; /*0x763d65*/
            v14[2] = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)a1 ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return result; /*0x763d7a*/
}


// ==== 0x00763D90  WaypointPathClass::SaveState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a1; /*0x763daf*/
    aP2 = *(_DWORD *)&aP0->BarrelVoxel[20]; /*0x763dbb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x763dbf*/
    if ( result >= 0 ) /*0x763dc4*/
    {
      v5 = 0; /*0x763dca*/
      if ( aP2 <= 0 ) /*0x763dce*/
      {
        return 0; /*0x763df4*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x763dd0*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))( /*0x763de1*/
                     a1,
                     *(_DWORD *)&aP0->BarrelVoxel[8] + i,
                     12,
                     0);
          if ( result < 0 ) /*0x763de6*/
            break; /*0x763de6*/
          if ( ++v5 >= aP2 ) /*0x763df2*/
            return 0; /*0x763df2*/
        }
      }
    }
  }
  return result; /*0x763df6*/
}


// ==== 0x00763E00  WaypointPathClass::StubReturn64  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::_vt12()
{
  return 64; /*0x763e05*/
}


// ==== 0x00763E10  WaypointPathClass::StubReturn51  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::_vt11()
{
  return 51; /*0x763e15*/
}


// ==== 0x00763E20  WaypointPathClass::ProcessEvent  this=WaypointPathClass  sig=csp ====
WaypointPathClass *__thiscall WaypointPathClass::ProcessEvent(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &WaypointPathClass::`vftable'; /*0x763e26*/
  *(Block + 1) = &WaypointPathClass::`vftable'; /*0x763e2c*/
  *(Block + 2) = &WaypointPathClass::`vftable'; /*0x763e33*/
  *(Block + 3) = &vt_WaypointPathClass; /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x763e41*/
  v6 = Block; /*0x763e56*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((_DWORD *)dword_B7260C + v3 - 1) = *((_DWORD *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = (int)*(Block + 11); /*0x763e8f*/
  *(Block + 10) = &vt_VectorClass_WaypointClass; /*0x763e92*/
  if ( v4 && *((_BYTE *)Block + 53) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    *(Block + 11) = 0; /*0x763eb8*/
  }
  *((_BYTE *)Block + 53) = 0; /*0x763ec1*/
  *(Block + 12) = 0; /*0x763ec5*/
  AbstractClass::DTOR(Block); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(Block); /*0x763ed9*/
  return (WaypointPathClass *)Block; /*0x763ee3*/
}


// ==== 0x00763EF0  ?$DynamicVectorClass@VWaypointClass@@::checkSuperWeaponStatus  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_763EF0(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x763ef6*/
  *(_DWORD *)(this + 16) = 0; /*0x763ef9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x763f00*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x763f11*/
    *(_DWORD *)(this + 4) = 0; /*0x763f19*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x763f1c*/
  *(_DWORD *)(this + 8) = 0; /*0x763f1f*/
}


// ==== 0x00763F30  ?$DynamicVectorClass@VWaypointClass@@::updateSuperWeaponTimer  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_763F30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x763f30*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x763f4e*/
  else
    return 0; /*0x763f37*/
}


// ==== 0x00763F60  _VectorClass_VWaypointClass::fireSuperWeapon  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_763F60(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 12 * a3); /*0x763f6b*/
  *a2 = *v3; /*0x763f76*/
  a2[1] = v3[1]; /*0x763f7b*/
  a2[2] = v3[2]; /*0x763f82*/
  return a2; /*0x763f7e*/
}


// ==== 0x00763F90  _DynamicVectorClass_PAVWaypointPathClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::sub_763F90(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x763f96*/
  *(_DWORD *)(this + 16) = 0; /*0x763f99*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x763fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x763fa6*/
    *(_DWORD *)(this + 4) = 0; /*0x763fae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x763fb1*/
  *(_DWORD *)(this + 8) = 0; /*0x763fb4*/
}


// ==== 0x00763FC0  _DynamicVectorClass_PAVWaypointPathClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::sub_763FC0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x763fc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x763fd5*/
  else
    return 0; /*0x763fc7*/
}


// ==== 0x00763FE0  _VectorClass_PAVWaypointPathClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x763fea*/
}


// ==== 0x00763FF0  ?$DynamicVectorClass@VWaypointClass@@::checkSWTarget  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AbstractClass::checkSWTarget(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x763ff3*/
  *Block = &vt_VectorClass_WaypointClass; /*0x763ff6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764000*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764013*/
    *(Block + 1) = 0; /*0x76401b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764026*/
  *(Block + 2) = 0; /*0x76402c*/
  if ( (a2 & 1) != 0 ) /*0x764033*/
    __3_YAXPAX_Z(Block); /*0x764036*/
  return (DynamicVector *)Block; /*0x764040*/
}


// ==== 0x00764050  ?$VectorClass@VWaypointClass@@::getSWChargeState  this=VectorClass  sig=csp ====
VectorClass *__thiscall AbstractClass::getSWChargeState(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x764053*/
  *Block = &vt_VectorClass_WaypointClass; /*0x764056*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764060*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764073*/
    *(Block + 1) = 0; /*0x76407b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764086*/
  *(Block + 2) = 0; /*0x76408c*/
  if ( (a2 & 1) != 0 ) /*0x764093*/
    __3_YAXPAX_Z(Block); /*0x764096*/
  return (VectorClass *)Block; /*0x7640a0*/
}


// ==== 0x007640B0  _VectorClass_VWaypointClass::setSWCharge  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::sub_7640B0(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x7640bb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7640c0*/
  {
    v3 = 0; /*0x7640c2*/
    if ( v2 <= 0 ) /*0x7640c6*/
      return 1; /*0x764100*/
    v4 = *(_DWORD *)(a2 + 4); /*0x7640c8*/
    v5 = (_DWORD *)this->Items; /*0x7640cb*/
    v6 = (_DWORD *)(v4 + 8); /*0x7640ce*/
    v7 = v4 - (_DWORD)v5; /*0x7640d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x7640ed*/
    {
      ++v3; /*0x7640ef*/
      v6 += 3; /*0x7640f0*/
      v5 += 3; /*0x7640f3*/
      if ( v3 >= v2 ) /*0x7640f8*/
        return 1; /*0x7640f8*/
    }
  }
  return 0; /*0x7640fa*/
}


// ==== 0x00764110  ?$VectorClass@VWaypointClass@@::resetSWCharge  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::sub_764110(void *this, int a2, int *a3)
{
  int v3; // ebp
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // ebx
  int v16; // eax

  v3 = a2; /*0x764112*/
  if ( a2 ) /*0x76411e*/
  {
    this->IsInitialized = 0; /*0x764128*/
    if ( a3 ) /*0x76412d*/
    {
      v6 = a3 + 1; /*0x76416d*/
      *a3 = a2; /*0x764170*/
      v9 = a3 + 1; /*0x764174*/
      if ( a2 - 1 >= 0 ) /*0x764176*/
      {
        v10 = a2; /*0x764178*/
        do /*0x764185*/
        {
          *v9 = 0; /*0x764179*/
          v9[1] = 0; /*0x76417b*/
          v9[2] = 0; /*0x76417e*/
          v9 += 3; /*0x764181*/
          --v10; /*0x764184*/
        }
        while ( v10 ); /*0x764185*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x76413b*/
      if ( v5 ) /*0x764145*/
      {
        v6 = v5 + 1; /*0x76414a*/
        *v5 = a2; /*0x76414d*/
        v7 = v5 + 1; /*0x764151*/
        if ( a2 - 1 >= 0 ) /*0x764153*/
        {
          v8 = a2; /*0x764155*/
          do /*0x764162*/
          {
            *v7 = 0; /*0x764156*/
            v7[1] = 0; /*0x764158*/
            v7[2] = 0; /*0x76415b*/
            v7 += 3; /*0x76415e*/
            --v8; /*0x764161*/
          }
          while ( v8 ); /*0x764162*/
        }
      }
      else
      {
        v6 = 0; /*0x764166*/
      }
    }
    this->IsInitialized = 1; /*0x764189*/
    if ( v6 ) /*0x76418d*/
    {
      if ( this->Items ) /*0x764198*/
      {
        v12 = this->Capacity; /*0x76419d*/
        if ( a2 < v12 ) /*0x7641a2*/
          v12 = a2; /*0x7641a4*/
        if ( v12 > 0 ) /*0x7641a8*/
        {
          v13 = 0; /*0x7641aa*/
          do /*0x7641ca*/
          {
            v14 = (_DWORD *)(this->Items + v13 * 4); /*0x7641b1*/
            v15 = &v6[v13]; /*0x7641b3*/
            v13 += 3; /*0x7641b6*/
            --v12; /*0x7641b9*/
            *v15 = *v14; /*0x7641bc*/
            v15[1] = v14[1]; /*0x7641c1*/
            v15[2] = v14[2]; /*0x7641c7*/
          }
          while ( v12 ); /*0x7641ca*/
          v3 = a2; /*0x7641cc*/
        }
        if ( this->IsAllocated ) /*0x7641d2*/
        {
          v16 = this->Items; /*0x7641d7*/
          if ( v16 ) /*0x7641dc*/
            __3_YAXPAX_Z((void *)(v16 - 4)); /*0x7641e6*/
          this->Items = 0; /*0x7641ee*/
        }
      }
      this->Items = v6; /*0x7641f9*/
      this->Capacity = v3; /*0x7641ff*/
      this->IsAllocated = a3 == 0; /*0x764202*/
      return 1; /*0x764208*/
    }
    else
    {
      return 0; /*0x764192*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x764212*/
    return 1; /*0x764218*/
  }
}


// ==== 0x00764220  ?$VectorClass@VWaypointClass@@::processSpecialAbility  this=VectorClass  sig=csp ====
void __thiscall AbstractClass::sub_764220(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x764226*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x76422d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x76423e*/
    *(_DWORD *)(this + 4) = 0; /*0x764246*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x764249*/
  *(_DWORD *)(this + 8) = 0; /*0x76424c*/
}


// ==== 0x00764260  ?$VectorClass@VWaypointClass@@::checkSpecialCooldown  this=VectorClass  sig=csp ====
int __thiscall AbstractClass::sub_764260(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x764260*/
    return 0; /*0x76426e*/
  v3 = *(_DWORD *)(this + 8); /*0x764274*/
  result = 0; /*0x764277*/
  if ( v3 <= 0 ) /*0x76427b*/
    return -1; /*0x7642a6*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x764281*/
  {
    if ( ++result >= v3 ) /*0x7642a4*/
      return -1; /*0x7642a4*/
  }
  return result; /*0x76426b*/
}


// ==== 0x007642B0  ?$VectorClass@VWaypointClass@@::updateSpecialTimer  this=VectorClass  sig=csp ====
unsigned int __thiscall AbstractClass::sub_7642B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7642b0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x7642ce*/
  else
    return 0; /*0x7642b7*/
}


// ==== 0x007642E0  ?$DynamicVectorClass@VWaypointClass@@::AllocateCoordArray  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_7642E0(void *this, int a2, int *a3)
{
  int v3; // ebx
  int *v5; // ebp
  int *v6; // eax
  _DWORD *v7; // edi
  int v8; // ebp
  _DWORD *v9; // edi
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v18; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x7642e2*/
  if ( a2 ) /*0x7642ed*/
  {
    v5 = a3; /*0x7642f3*/
    this->IsInitialized = 0; /*0x7642f7*/
    if ( a3 ) /*0x7642fd*/
    {
      *a3 = a2; /*0x76434d*/
      v9 = a3 + 1; /*0x764352*/
      if ( a2 - 1 >= 0 ) /*0x764355*/
      {
        v10 = a2; /*0x764357*/
        do /*0x76436b*/
        {
          Coord::Subtract(v9, 0, 0, 0); /*0x764362*/
          v9 += 3; /*0x764367*/
          --v10; /*0x76436a*/
        }
        while ( v10 ); /*0x76436b*/
        v5 = a3; /*0x76436d*/
      }
      v7 = v5 + 1; /*0x764371*/
    }
    else
    {
      v6 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x76430a*/
      if ( v6 ) /*0x764314*/
      {
        *v6 = a2; /*0x764316*/
        v7 = v6 + 1; /*0x764318*/
        v18 = v6 + 1; /*0x76431e*/
        if ( a2 - 1 >= 0 ) /*0x764324*/
        {
          v8 = a2; /*0x764326*/
          do /*0x76433a*/
          {
            Coord3D::Set(v7, 0, 0, 0); /*0x764331*/
            v7 += 3; /*0x764336*/
            --v8; /*0x764339*/
          }
          while ( v8 ); /*0x76433a*/
          v7 = v18; /*0x76433c*/
          v5 = 0; /*0x764340*/
        }
      }
      else
      {
        v7 = 0; /*0x764346*/
      }
    }
    this->IsInitialized = 1; /*0x764376*/
    if ( !v7 ) /*0x76437a*/
      return 0; /*0x76440b*/
    if ( this->Items ) /*0x764380*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x764387*/
      if ( a2 < v11 ) /*0x76438c*/
        v11 = a2; /*0x76438e*/
      if ( v11 > 0 ) /*0x764392*/
      {
        v12 = 0; /*0x764394*/
        do /*0x7643b2*/
        {
          v13 = &v7[v12]; /*0x764399*/
          v14 = (_DWORD *)(v12 * 4 + this->Items); /*0x76439c*/
          v12 += 3; /*0x76439e*/
          --v11; /*0x7643a1*/
          *v13 = *v14; /*0x7643a4*/
          v13[1] = v14[1]; /*0x7643a9*/
          v13[2] = v14[2]; /*0x7643af*/
        }
        while ( v11 ); /*0x7643b2*/
        v3 = a2; /*0x7643b4*/
        v5 = a3; /*0x7643b8*/
      }
      if ( this->IsAllocated ) /*0x7643bc*/
      {
        v15 = (_DWORD *)this->Items; /*0x7643c3*/
        if ( v15 ) /*0x7643c8*/
          AbstractClass::processCleanup(v15, 3); /*0x7643cc*/
        this->Items = 0; /*0x7643d1*/
      }
    }
    this->Items = v7; /*0x7643da*/
    this->DynamicVector_field_0x8 = v3; /*0x7643e2*/
    this->IsAllocated = v5 == 0; /*0x7643e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x7643ee*/
  }
  v16 = this->DynamicVector_field_0x8; /*0x7643f1*/
  if ( v16 < this->Items ) /*0x7643f9*/
    this->Items = v16; /*0x7643fb*/
  return 1; /*0x7643fe*/
}


// ==== 0x00764420  ?$DynamicVectorClass@VWaypointClass@@::processSpecialEffect  this=DynamicVector  sig=csp ====
int __thiscall AbstractClass::sub_764420(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x764420*/
  result = 0; /*0x764425*/
  if ( v2 <= 0 ) /*0x76442b*/
    return -1; /*0x764456*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x764431*/
  {
    if ( ++result >= v2 ) /*0x764454*/
      return -1; /*0x764454*/
  }
  return result; /*0x764459*/
}


// ==== 0x00764460  _VectorClass_PAVWaypointPathClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x764462*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x76446d*/
  {
    v3 = 0; /*0x76446f*/
    if ( v2 <= 0 ) /*0x764473*/
      return 1; /*0x764493*/
    v4 = (_DWORD *)this->Items; /*0x764475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76447b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x764484*/
    {
      ++v3; /*0x764486*/
      ++v4; /*0x764487*/
      if ( v3 >= v2 ) /*0x76448c*/
        return 1; /*0x76448c*/
    }
  }
  return 0; /*0x76448e*/
}


// ==== 0x007644A0  _VectorClass_PAVWaypointPathClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x7644ac*/
  {
    this->IsInitialized = 0; /*0x7644b6*/
    if ( a3 ) /*0x7644bc*/
      v4 = a3; /*0x7644d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7644ce*/
    this->IsInitialized = 1; /*0x7644d6*/
    if ( v4 ) /*0x7644da*/
    {
      if ( this->Items ) /*0x7644e5*/
      {
        v6 = this->Capacity; /*0x7644ec*/
        if ( a2 < v6 ) /*0x7644f1*/
          v6 = a2; /*0x7644f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x7644f9*/
          ++i; /*0x7644fe*/
        if ( this->IsAllocated ) /*0x76450b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x764516*/
          this->Items = 0; /*0x76451e*/
        }
      }
      this->Items = v4; /*0x764527*/
      this->Capacity = a2; /*0x76452f*/
      this->IsAllocated = a3 == 0; /*0x764532*/
      return 1; /*0x764538*/
    }
    else
    {
      return 0; /*0x7644df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x764542*/
    return 1; /*0x764548*/
  }
}


// ==== 0x00764550  _VectorClass_PAVWaypointPathClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x76455d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x764563*/
    *(_DWORD *)(this + 4) = 0; /*0x76456b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76456e*/
  *(_DWORD *)(this + 8) = 0; /*0x764571*/
}


// ==== 0x00764580  _VectorClass_PAVWaypointPathClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x764580*/
    return 0; /*0x764588*/
  v3 = *(_DWORD *)(this + 8); /*0x76458e*/
  result = 0; /*0x764591*/
  if ( v3 <= 0 ) /*0x764595*/
    return -1; /*0x7645ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x76459b*/
  {
    if ( ++result >= v3 ) /*0x7645aa*/
      return -1; /*0x7645aa*/
  }
  return result; /*0x76458a*/
}


// ==== 0x007645C0  _VectorClass_PAVWaypointPathClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7645c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7645d5*/
  else
    return 0; /*0x7645c7*/
}


// ==== 0x007645E0  _DynamicVectorClass_PAVWaypointPathClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::sub_7645E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7645ec*/
  {
    this->IsInitialized = 0; /*0x7645f2*/
    if ( a3 ) /*0x7645f8*/
      v4 = a3; /*0x76460e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x76460a*/
    this->IsInitialized = 1; /*0x764612*/
    if ( !v4 ) /*0x764616*/
      return 0; /*0x76468a*/
    if ( this->Items ) /*0x764618*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x76461f*/
      if ( a2 < v5 ) /*0x764624*/
        v5 = a2; /*0x764626*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x76462c*/
        ++i; /*0x764631*/
      if ( this->IsAllocated ) /*0x76463e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x764649*/
        this->Items = 0; /*0x764651*/
      }
    }
    this->Items = v4; /*0x76465a*/
    this->DynamicVector_field_0x8 = a2; /*0x764662*/
    this->IsAllocated = a3 == 0; /*0x764665*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x76466e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x764671*/
  if ( v7 < this->Items ) /*0x764679*/
    this->Items = v7; /*0x76467b*/
  return 1; /*0x76467e*/
}


// ==== 0x00764690  _DynamicVectorClass_PAVWaypointPathClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::sub_764690(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x764690*/
  result = 0; /*0x764693*/
  if ( v2 <= 0 ) /*0x764698*/
    return -1; /*0x7646af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x76469e*/
  {
    if ( ++result >= v2 ) /*0x7646ad*/
      return -1; /*0x7646ad*/
  }
  return result; /*0x7646b2*/
}


// ==== 0x007646C0  _VectorClass_PAVWaypointPathClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_WaypointPathClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7646c3*/
  *Block = &vt_VectorClass_WaypointPathClass; /*0x7646c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x7646d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7646d8*/
    *(Block + 1) = 0; /*0x7646e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x7646eb*/
  *(Block + 2) = 0; /*0x7646f1*/
  if ( (a2 & 1) != 0 ) /*0x7646f8*/
    __3_YAXPAX_Z(Block); /*0x7646fb*/
  return (VectorClass *)Block; /*0x764705*/
}


// ==== 0x00764710  _DynamicVectorClass_PAVWaypointPathClass::Constructor_VectorClass_WaypointPathClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x764713*/
  *Block = &vt_VectorClass_WaypointPathClass; /*0x764716*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764720*/
  {
    __3_YAXPAX_Z(v3); /*0x764728*/
    *(Block + 1) = 0; /*0x764730*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76473b*/
  *(Block + 2) = 0; /*0x764741*/
  if ( (a2 & 1) != 0 ) /*0x764748*/
    __3_YAXPAX_Z(Block); /*0x76474b*/
  return (DynamicVector *)Block; /*0x764755*/
}


// ==== 0x00764760  WaypointPathClass::computePath  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_764760(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x76476d*/
  this->Capacity = a2; /*0x764770*/
  this->q030 = 1; /*0x764773*/
  this->__pad_034 = 0; /*0x764777*/
  *this = &vt_VectorClass_WaypointClass; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return this; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = __2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = v7 + 1; /*0x7647cc*/
      *v7 = a2; /*0x7647cf*/
      v9 = v7 + 1; /*0x7647d3*/
      if ( a2 - 1 >= 0 ) /*0x7647d5*/
      {
        v10 = a2; /*0x7647d7*/
        do /*0x7647e4*/
        {
          *v9 = 0; /*0x7647d8*/
          v9[1] = 0; /*0x7647da*/
          v9[2] = 0; /*0x7647dd*/
          v9 += 3; /*0x7647e0*/
          --v10; /*0x7647e3*/
        }
        while ( v10 ); /*0x7647e4*/
        this->Items = v8; /*0x7647e6*/
        this->__pad_034 = 1; /*0x7647e9*/
        return this; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    this->Items = v8; /*0x7647f7*/
    this->__pad_034 = 1; /*0x7647fa*/
    return this; /*0x7647fe*/
  }
  *a3 = a2; /*0x764790*/
  v4 = a3 + 1; /*0x764794*/
  if ( a2 - 1 >= 0 ) /*0x764796*/
  {
    v5 = a2; /*0x764798*/
    do /*0x7647a5*/
    {
      *v4 = 0; /*0x764799*/
      v4[1] = 0; /*0x76479b*/
      v4[2] = 0; /*0x76479e*/
      v4 += 3; /*0x7647a1*/
      --v5; /*0x7647a4*/
    }
    while ( v5 ); /*0x7647a5*/
  }
  this->Items = a3 + 1; /*0x7647a7*/
  return this; /*0x7647ac*/
}


// ==== 0x00764810  sub_764810  this=-  sig=ida-proto ====
int sub_764810()
{
  dword_B72678 = 0; /*0x764812*/
  dword_B7267C = 0; /*0x764817*/
  dword_B72680 = 0; /*0x76481c*/
  dword_B72684 = 0; /*0x764821*/
  return 0; /*0x764826*/
}


// ==== 0x00764830  sub_764830  this=-  sig=ida-proto ====
void sub_764830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76483c*/
  dbl_B72690 = Math::Sqrt(v0 + v0); /*0x76484e*/
}


// ==== 0x00764860  sub_764860  this=-  sig=ida-proto ====
void sub_764860()
{
  dbl_B726E0 = dbl_B72690 / 60.0; /*0x76486c*/
}


// ==== 0x00764880  sub_764880  this=-  sig=ida-proto ====
void sub_764880()
{
  dbl_B726C8 = 1.0 / dbl_B726E0; /*0x76488c*/
}


// ==== 0x007648A0  sub_7648A0  this=-  sig=ida-proto ====
void sub_7648A0()
{
  dbl_B726C0 = 0.0174532925199433 * 45.0; /*0x7648ac*/
}


// ==== 0x007648C0  sub_7648C0  this=-  sig=ida-proto ====
void sub_7648C0()
{
  dbl_B72698 = 0.0174532925199433 * 60.0; /*0x7648cc*/
}


// ==== 0x007648E0  sub_7648E0  this=-  sig=ida-proto ====
void sub_7648E0()
{
  dbl_B72670 = 0.0174532925199433 * 90.0; /*0x7648ec*/
}


// ==== 0x00764900  sub_764900  this=-  sig=ida-proto ====
__int64 sub_764900()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72670 - dbl_B72698); /*0x764912*/
  result = Math::RoundToInt(v0 * dbl_B72690 * 0.5); /*0x764926*/
  dword_B726E8 = result; /*0x76492b*/
  return result; /*0x764930*/
}


// ==== 0x00764940  sub_764940  this=-  sig=ida-proto ====
void sub_764940()
{
  dbl_B726A0 = Math::ArcTan((double)dword_B726E8 * 0.00390625); /*0x764957*/
}


// ==== 0x00764970  sub_764970  this=-  sig=ida-proto ====
void sub_764970()
{
  dbl_B726B8 = Math::ArcTan((double)(2 * dword_B726E8) / dbl_B72690); /*0x764992*/
}


// ==== 0x007649A0  sub_7649A0  this=-  sig=ida-proto ====
__int64 sub_7649A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B726E8) + 0.5); /*0x7649bb*/
  dword_B726DC = result; /*0x7649c0*/
  return result; /*0x7649c6*/
}


// ==== 0x007649D0  sub_7649D0  this=-  sig=ida-proto ====
int sub_7649D0()
{
  word_B72688 = 0; /*0x7649d2*/
  word_B7268A = 0; /*0x7649d8*/
  return 0; /*0x7649de*/
}


// ==== 0x007649E0  sub_7649E0  this=-  sig=ida-proto ====
int sub_7649E0()
{
  dword_B726A8 = 0; /*0x7649e2*/
  dword_B726AC = 0; /*0x7649e7*/
  dword_B726B0 = 0; /*0x7649ec*/
  return 0; /*0x7649f1*/
}


// ==== 0x00764A00  sub_764A00  this=-  sig=ida-proto ====
int sub_764A00()
{
  dword_B726D8 = 0; /*0x764a05*/
  dword_B726D0 = 128; /*0x764a0f*/
  dword_B726D4 = 128; /*0x764a14*/
  return 128; /*0x764a19*/
}


// ==== 0x00764A20  ObjectClass::method_764A20  this=ObjectClass  sig=csp ====
GenericNode *__thiscall sub_764A20(ObjectClass *this)
{
  GenericNode *Int; // esi
  ReferenceCounted aP2; // [esp+8h] [ebp-9Ch] BYREF
  void *v5[4]; // [esp+Ch] [ebp-98h] BYREF
  _DWORD v6[3]; // [esp+1Ch] [ebp-88h] BYREF
  _DWORD v7[6]; // [esp+28h] [ebp-7Ch] BYREF
  char v8; // [esp+40h] [ebp-64h]
  int v9; // [esp+44h] [ebp-60h]
  int v10; // [esp+48h] [ebp-5Ch]
  _DWORD v11[22]; // [esp+4Ch] [ebp-58h] BYREF

  BufferIOFile::Constructor(v11, aWdthistIni_0); /*0x764a33*/
  if ( File::IsReady(v11, 0) ) /*0x764a3f*/
  {
    v5[1] = 0; /*0x764a50*/
    v5[2] = 0; /*0x764a54*/
    GenericNode::Constructor(v6); /*0x764a58*/
    GenericNode::Constructor(v7); /*0x764a61*/
    LinkedList::Prepend(v6, (int)v7); /*0x764a77*/
    v5[3] = &vt_List_INIClass_INISection; /*0x764a80*/
    memset(&v7[3], 0, 12); /*0x764a8e*/
    v8 = 0; /*0x764a9a*/
    v9 = 0; /*0x764a9e*/
    v10 = 0; /*0x764aa2*/
    v5[0] = &vt_INIClass; /*0x764aa6*/
    FileStraw::Open(v5, (int)v11, 0); /*0x764aae*/
    CCFileClass::Close(v11); /*0x764ab7*/
    String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x764ac5*/
    Int = (GenericNode *)INIClass::ReadInt(v5, this, &aP2, (INIClass *)0xFFFFFFFF); /*0x764adf*/
    DeleteAndZero((int)&aP2); /*0x764ae1*/
    HashTable::DestroyHashTableINIClass(v5); /*0x764aea*/
    v11[0] = &off_7E1668; /*0x764af3*/
    BufferIOFileClass::Dtor(v11); /*0x764afb*/
    return Int; /*0x764b00*/
  }
  else
  {
    v11[0] = &off_7E1668; /*0x764b0f*/
    BufferIOFileClass::Dtor(v11); /*0x764b17*/
    return (GenericNode *)-1; /*0x764b1c*/
  }
}


// ==== 0x00764B30  rc_ptr::Audio_Create  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall Audio_Create(rc_ptr_base *a1, const char **a2, int a3)
{
  char *v6; // eax
  ReferenceCounted *v7; // edi

  if ( *(_DWORD *)(a3 + 4) ) /*0x764b37*/
  {
    v6 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x764b57*/
    if ( v6 ) /*0x764b61*/
      v7 = (ReferenceCounted *)CampaignConstructorWDT(v6, a2, a3); /*0x764b6c*/
    else
      v7 = 0; /*0x764b70*/
    ComPtr::Constructor(a1); /*0x764b74*/
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x764b7b*/
    ComPtr::Set(a1, (int)v7); /*0x764b82*/
    return (rc_ptr *)a1; /*0x764b87*/
  }
  else
  {
    ComPtr::Constructor(a1); /*0x764b42*/
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x764b47*/
    return (rc_ptr *)a1; /*0x764b4d*/
  }
}


// ==== 0x00764B90  ReferenceCounted::CampaignConstructorWDT  this=ReferenceCounted  sig=csp ====
char *__thiscall WDT_Campaign_Constructor(char *this, const char **a2, int a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  int OwnerHouse; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  int Int; // ebp
  _DWORD *v18; // ebp
  char **v19; // eax
  int v20; // eax
  int v22; // [esp-4h] [ebp-D4h]
  char **RegionString; // [esp-4h] [ebp-D4h]
  unsigned int v24; // [esp+10h] [ebp-C0h] BYREF
  void *v25[2]; // [esp+14h] [ebp-BCh] BYREF
  _DWORD v26[2]; // [esp+1Ch] [ebp-B4h] BYREF
  _DWORD v27[2]; // [esp+24h] [ebp-ACh] BYREF
  _DWORD v28[2]; // [esp+2Ch] [ebp-A4h] BYREF
  void *v29[3]; // [esp+34h] [ebp-9Ch] BYREF
  _DWORD v30[10]; // [esp+40h] [ebp-90h] BYREF
  int v31; // [esp+68h] [ebp-68h]
  int v32; // [esp+6Ch] [ebp-64h]
  int v33; // [esp+70h] [ebp-60h]
  _DWORD v34[22]; // [esp+74h] [ebp-5Ch] BYREF
  int v35; // [esp+CCh] [ebp-4h]

  v4 = this + 8; /*0x764b9e*/
  v35 = 0; /*0x764ba1*/
  this->q004 = 0; /*0x764baa*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x764bad*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x764bb3*/
  *v4 = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x764bbf*/
  ComPtr::Set(v4, *(_DWORD *)(a3 + 4)); /*0x764bcb*/
  Team_Create_767B00(this + 16, *(_DWORD *)(a3 + 4) + 8); /*0x764bdb*/
  Team_Create_765C90(4, 0); /*0x764be9*/
  this->q018 = &vt_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x764bf7*/
  this->q02C = 10; /*0x764bfd*/
  this->q028 = 0; /*0x764c04*/
  this->q044 = 0; /*0x764c0b*/
  String::AssignFromPtr((char **)this + 18, a2); /*0x764c0e*/
  *(_DWORD *)this = &vt_WorldDominationTour_Campaign; /*0x764c18*/
  this->q034 = 0; /*0x764c1e*/
  this->__pad_038 = 0; /*0x764c20*/
  *((_DWORD *)this + 15) = 0; /*0x764c23*/
  this->q010 = 0; /*0x764c26*/
  v5 = *(_DWORD **)(a3 + 4); /*0x764c29*/
  if ( v5[3] ) /*0x764c2c*/
  {
    OwnerHouse = Conflict::GetOwnerHouse(v5); /*0x764c3a*/
    ActivateScreenWDT((int)v28, OwnerHouse); /*0x764c47*/
    v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 32); /*0x764c58*/
    v8 = v7 - 1; /*0x764c5a*/
    v24 = v7 - 1; /*0x764c5d*/
    if ( v7 ) /*0x764c61*/
    {
      do /*0x764d8a*/
      {
        if ( WDTClass::GetCellType((_DWORD *)v28[1], v8) == 1 ) /*0x764c74*/
        {
          if ( v8 >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 60) ) /*0x764c89*/
          {
            ComPtr::Constructor(v26); /*0x764c97*/
            v10 = v35; /*0x764c9c*/
            v26[0] = &vt_rc_ptr_WDTTerritory; /*0x764ca3*/
            LOBYTE(v10) = v35 | 1; /*0x764cab*/
            v9 = v26; /*0x764cad*/
            v35 = v10; /*0x764cb1*/
          }
          else
          {
            v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 48) + 8 * v8); /*0x764c8e*/
          }
          ComPtr::Constructor(v25); /*0x764cbc*/
          v25[0] = &vt_rc_ptr_WDTTerritory; /*0x764cc1*/
          ComPtr::Set(v25, v9[1]); /*0x764cd1*/
          if ( (v35 & 1) != 0 ) /*0x764cde*/
          {
            v11 = v35; /*0x764ce0*/
            LOBYTE(v11) = v35 & 0xFE; /*0x764ceb*/
            v26[0] = &vt_rc_ptr_WDTTerritory; /*0x764ced*/
            v35 = v11; /*0x764cf5*/
            ComPtr::Release(v26); /*0x764cfc*/
          }
          if ( v25[1] ) /*0x764d07*/
          {
            Team_Create_765F60(v27, v25); /*0x764d11*/
            v12 = this->q008; /*0x764d16*/
            if ( this->q028 < v12 /*0x764d3b*/
              || (*(this + 37) || !v12)
              && (v13 = this->q02C, v13 > 0)
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->q018 + 8))(
                   this + 24,
                   v12 + v13,
                   0) )
            {
              v14 = this->q028; /*0x764d42*/
              v22 = v27[1]; /*0x764d49*/
              this->q028 = v14 + 1; /*0x764d4d*/
              ComPtr::Set((_DWORD *)(this->q01C + 8 * v14), v22); /*0x764d56*/
            }
            v27[0] = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x764d5f*/
            ComPtr::Release(v27); /*0x764d67*/
          }
          v25[0] = &vt_rc_ptr_WDTTerritory; /*0x764d70*/
          ComPtr::Release(v25); /*0x764d78*/
          v8 = v24; /*0x764d7d*/
        }
        v15 = v8--; /*0x764d81*/
        v24 = v8; /*0x764d86*/
      }
      while ( v15 ); /*0x764d8a*/
    }
    v28[0] = &vt_rc_ptr_WorldDominationTour_State; /*0x764d94*/
    ComPtr::Release(v28); /*0x764d9c*/
  }
  BufferIOFile::Constructor(v34, aWdthistIni_0); /*0x764daa*/
  v16 = 0; /*0x764daf*/
  if ( File::IsReady(v34, 0) )
  {
    v29[1] = 0; /*0x764dc7*/
    v29[2] = 0; /*0x764dcb*/
    GenericList::Constructor(v30); /*0x764dcf*/
    v30[0] = &vt_List_INIClass_INISection; /*0x764dde*/
    memset(&v30[7], 0, 12); /*0x764de6*/
    LOBYTE(v31) = 0; /*0x764df2*/
    v32 = 0; /*0x764df7*/
    v33 = 0; /*0x764dfb*/
    v29[0] = &vt_INIClass; /*0x764dff*/
    FileStraw::Open(v29, (int)v34, 0); /*0x764e07*/
    CCFileClass::Close(v34); /*0x764e10*/
    String::Assign((char **)&v24, g_INI_Key_CampaignID); /*0x764e1e*/
    Int = INIClass::ReadInt((char **)this + 18, (char **)&v24, -1); /*0x764e3b*/
    DeleteAndZero((void **)&v24); /*0x764e3d*/
    this->__pad_00C = Int < 0 ? 0 : Int;
    if ( this->__pad_00C == WDTObject::GetSize(*(_DWORD **)(a3 + 4)) )
    {
      v18 = this + 52; /*0x764e60*/
      do
      {
        RegionString = GetRegionStringWOL((void *)v16); /*0x764e6a*/
        v19 = String::Assign((char **)v25, g_INI_Key_LastDay); /*0x764e79*/
        String::Concat((const char **)v19, (char **)&v24, RegionString); /*0x764e80*/
        DeleteAndZero(v25); /*0x764e89*/
        v20 = INIClass::ReadInt((char **)this + 18, (char **)&v24, 0); /*0x764e9d*/
        *v18 = v20 < 0 ? 0 : v20;
        DeleteAndZero((void **)&v24); /*0x764eb3*/
        ++v16; /*0x764eb8*/
        ++v18; /*0x764eb9*/
      }
      while ( v16 < 4 );
      String::Assign((char **)&v24, aPlayerfaction); /*0x764eca*/
      this->q044 = INIClass::ReadInt((char **)this + 18, (char **)&v24, this->q044); /*0x764ee9*/
      DeleteAndZero((void **)&v24); /*0x764eec*/
    }
    else
    {
      this->q034 = 0; /*0x764ef5*/
      this->__pad_038 = 0; /*0x764ef8*/
      *((_DWORD *)this + 15) = 0; /*0x764efb*/
      this->q010 = 0; /*0x764efe*/
    }
    HashTable::DestroyHashTableINIClass(v29); /*0x764f05*/
  }
  v34[0] = &off_7E1668; /*0x764f0e*/
  BufferIOFileClass::Dtor(v34); /*0x764f16*/
  return this; /*0x764f1d*/
}


// ==== 0x00764FA0  ObjectClass::Team_Start_764FA0  this=ObjectClass  sig=csp ====
bool __thiscall sub_764FA0(int this)
{
  return *(_DWORD *)(this + 48) != WDTObject::GetSize(*(_DWORD **)(this + 12)); /*0x764fb2*/
}


// ==== 0x00764FC0  ObjectClass::ConstructWDTSelection_Create  this=ObjectClass  sig=csp ====
bool __thiscall sub_764FC0(int this, int a2)
{
  return *(_DWORD *)(this + 48) != WDTObject::GetSize(*(_DWORD **)(this + 12)) /*0x764fd2*/
      || *(_DWORD *)(this + 4 * a2 + 52) != Conflict::GetOwnerHouse(*(_DWORD **)(this + 12));
}


// ==== 0x00764FF0  ObjectClass::method_764FF0  this=ObjectClass  sig=csp ====
int __thiscall sub_764FF0(_DWORD *this, ScoreScreen *aP1)
{
  return *(this + (_DWORD)aP1 + 13); /*0x764ff8*/
}


// ==== 0x00765000  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_765000(int this, ScoreScreen *aP1)
{
  char **v3; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-10Ch]
  ObjectClass aP2; // [esp+10h] [ebp-F8h] BYREF

  *(_DWORD *)(this + 48) = WDTObject::GetSize(*(_DWORD **)(this + 12)); /*0x76501b*/
  *(_DWORD *)(this + 4 * (_DWORD)aP1 + 52) = Conflict::GetOwnerHouse(*(_DWORD **)(this + 12)); /*0x76502c*/
  *(_DWORD *)&aP2.__pad_0[12] = 0; /*0x765030*/
  aP2.uniqueId = 0; /*0x765034*/
  GenericNode::Constructor(&aP2.nextArrayIndex); /*0x765038*/
  GenericNode::Constructor(&aP2.objectTypeFlags); /*0x765041*/
  LinkedList::Prepend(&aP2.nextArrayIndex, (int)&aP2.objectTypeFlags); /*0x765057*/
  aP2.abstractFlags = (int)&vt_List_INIClass_INISection; /*0x765060*/
  memset(&aP2.nextObject, 0, 13); /*0x765068*/
  aP2.ambientSoundController[1] = 0; /*0x765078*/
  aP2.ambientSoundController[2] = 0; /*0x76507c*/
  *(_DWORD *)&aP2.__pad_0[8] = &vt_INIClass; /*0x765080*/
  BufferIOFile::Init(&aP2.ambientSoundController[3]); /*0x765088*/
  CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765098*/
  if ( !File::IsReady(&aP2.ambientSoundController[3], 0) ) /*0x7650a2*/
  {
    FileClass::Close(&aP2.ambientSoundController[3]); /*0x7650af*/
    CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x7650b8*/
    CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x7650c8*/
  }
  FileStraw::Open(&aP2.__pad_0[8], (int)&aP2.ambientSoundController[3], 0); /*0x7650d7*/
  CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x7650e0*/
  aP2.ambientSoundController[3] = (int)&off_7E1668; /*0x7650e9*/
  BufferIOFileClass::Dtor(&aP2.ambientSoundController[3]); /*0x7650f1*/
  RegionStringWOL = (char **)GetRegionStringWOL(aP1); /*0x765101*/
  v3 = String::Assign((char **)&aP2, g_INI_Key_LastDay); /*0x76510c*/
  String::Concat((const char **)v3, (char **)&aP2.__pad_0[4], RegionStringWOL); /*0x765113*/
  DeleteAndZero((void **)&aP2); /*0x76511c*/
  String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x76512a*/
  INIClass::SetIntFormat(&aP2.__pad_0[8], (char **)(this + 72), &aP2, *(_DWORD *)(this + 48), 0); /*0x765141*/
  DeleteAndZero((void **)&aP2); /*0x76514a*/
  INIClass::SetIntFormat( /*0x76515f*/
    &aP2.__pad_0[8],
    (char **)(this + 72),
    (ObjectClass *)&aP2.__pad_0[4],
    *(_DWORD *)(this + 4 * (_DWORD)aP1 + 52),
    0);
  BufferIOFile::Init(&aP2.location[1]); /*0x76516b*/
  CCFileClass::Reopen(&aP2.location[1], g_Str_File_WDTHist_ini, (CDFileClass *)2); /*0x76517e*/
  INIClass::SaveToPipe(&aP2.__pad_0[8], (int)&aP2.location[1]); /*0x76518f*/
  aP2.location[1] = (int)&off_7E1668; /*0x76519b*/
  BufferIOFileClass::Dtor(&aP2.location[1]); /*0x7651a6*/
  DeleteAndZero((void **)&aP2.__pad_0[4]); /*0x7651af*/
  return HashTable::DestroyHashTableINIClass((void **)&aP2.__pad_0[8]); /*0x7651bd*/
}


// ==== 0x007651D0  ObjectClass::method_7651D0  this=ObjectClass  sig=csp ====
char *__thiscall sub_7651D0(char **this)
{
  char **v2; // edi
  int i; // esi
  char **v4; // eax
  ObjectClass *RegionStringWOL; // [esp-4h] [ebp-108h]
  ObjectClass aP2; // [esp+Ch] [ebp-F8h] BYREF

  *(_DWORD *)&aP2.__pad_0[12] = 0; /*0x7651e1*/
  aP2.uniqueId = 0; /*0x7651e5*/
  GenericNode::Constructor(&aP2.nextArrayIndex); /*0x7651e9*/
  GenericNode::Constructor(&aP2.objectTypeFlags); /*0x7651f2*/
  LinkedList::Prepend(&aP2.nextArrayIndex, (int)&aP2.objectTypeFlags); /*0x765208*/
  aP2.abstractFlags = (int)&vt_List_INIClass_INISection; /*0x765211*/
  memset(&aP2.nextObject, 0, 13); /*0x765219*/
  aP2.ambientSoundController[1] = 0; /*0x765229*/
  aP2.ambientSoundController[2] = 0; /*0x76522d*/
  *(_DWORD *)&aP2.__pad_0[8] = &vt_INIClass; /*0x765231*/
  BufferIOFile::Init(&aP2.ambientSoundController[3]); /*0x765239*/
  CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765249*/
  if ( !File::IsReady(&aP2.ambientSoundController[3], 0) ) /*0x765253*/
  {
    FileClass::Close(&aP2.ambientSoundController[3]); /*0x765260*/
    CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x765269*/
    CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765279*/
  }
  FileStraw::Open(&aP2.__pad_0[8], (int)&aP2.ambientSoundController[3], 0); /*0x765288*/
  CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x765291*/
  aP2.ambientSoundController[3] = (int)&off_7E1668; /*0x76529a*/
  BufferIOFileClass::Dtor(&aP2.ambientSoundController[3]); /*0x7652a2*/
  String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x7652b0*/
  v2 = this + 18; /*0x7652ba*/
  INIClass::SetIntFormat(&aP2.__pad_0[8], this + 18, &aP2, 0, 0); /*0x7652c4*/
  DeleteAndZero((void **)&aP2); /*0x7652cd*/
  for ( i = 0; i < 4; ++i ) /*0x7652d2*/
  {
    RegionStringWOL = (ObjectClass *)GetRegionStringWOL((void *)i); /*0x7652db*/
    v4 = String::Assign((char **)&aP2.__pad_0[4], g_INI_Key_LastDay); /*0x7652ea*/
    String::Concat((const char **)v4, (char **)&aP2, (char **)RegionStringWOL); /*0x7652f1*/
    DeleteAndZero((void **)&aP2.__pad_0[4]); /*0x7652fa*/
    INIClass::SetIntFormat(&aP2.__pad_0[8], v2, &aP2, 0, 0); /*0x76530b*/
    DeleteAndZero((void **)&aP2); /*0x765314*/
  }
  BufferIOFile::Init(&aP2.location[1]); /*0x765326*/
  CCFileClass::Reopen(&aP2.location[1], g_Str_File_WDTHist_ini, (CDFileClass *)2); /*0x765339*/
  INIClass::SaveToPipe(&aP2.__pad_0[8], (int)&aP2.location[1]); /*0x76534a*/
  aP2.location[1] = (int)&off_7E1668; /*0x765356*/
  BufferIOFileClass::Dtor(&aP2.location[1]); /*0x765361*/
  return HashTable::DestroyHashTableINIClass((void **)&aP2.__pad_0[8]); /*0x76536f*/
}


// ==== 0x00765380  ObjectClass::FindWDTTerritoryClass_Find  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall sub_765380(char *this, _DWORD *a2, int a3)
{
  int v4; // edx
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  char *v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v6 = this + 24; /*0x765387*/
  v7 = 0; /*0x76538f*/
  v5 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765397*/
  if ( Campaign_WorldDominationTour_24::AddRef(&v5) ) /*0x76539f*/
  {
    do /*0x7653db*/
    {
      if ( FindWDTTerritoryClass_Find_Find(*(_DWORD **)(*((_DWORD *)v6 + 1) + 8 * v7 + 4)) == a3 ) /*0x7653c6*/
        break; /*0x7653c6*/
      ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x7653d0*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v5[1])(&v5) ); /*0x7653db*/
  }
  v4 = v7; /*0x7653ea*/
  a2[1] = v6; /*0x7653ef*/
  a2[2] = v4; /*0x7653f2*/
  *a2 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x7653f5*/
  return a2; /*0x7653ee*/
}


// ==== 0x00765410  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char *__thiscall Team_Start_765410(int this, INIClass *aP1)
{
  INIClass *result; // eax
  ObjectClass *v4; // [esp+4h] [ebp-F4h] BYREF
  void *aP2_4[4]; // [esp+8h] [ebp-F0h] BYREF
  _DWORD aP2_20[3]; // [esp+18h] [ebp-E0h] BYREF
  _DWORD aP2_32[6]; // [esp+24h] [ebp-D4h] BYREF
  char aP2_56; // [esp+3Ch] [ebp-BCh]
  int aP2_60; // [esp+40h] [ebp-B8h]
  int aP2_64; // [esp+44h] [ebp-B4h]
  _DWORD aP2_68[22]; // [esp+48h] [ebp-B0h] BYREF
  _DWORD aP2_156[22]; // [esp+A0h] [ebp-58h] BYREF

  result = aP1; /*0x765410*/
  if ( *(INIClass **)(this + 68) != aP1 ) /*0x765420*/
  {
    *(_DWORD *)(this + 68) = aP1; /*0x76542d*/
    aP2_4[1] = 0; /*0x765430*/
    aP2_4[2] = 0; /*0x765434*/
    GenericNode::Constructor(aP2_20); /*0x765438*/
    GenericNode::Constructor(aP2_32); /*0x765441*/
    LinkedList::Prepend(aP2_20, (int)aP2_32); /*0x765457*/
    aP2_4[3] = &vt_List_INIClass_INISection; /*0x765460*/
    memset(&aP2_32[3], 0, 12); /*0x765468*/
    aP2_56 = 0; /*0x765474*/
    aP2_60 = 0; /*0x765478*/
    aP2_64 = 0; /*0x76547c*/
    aP2_4[0] = &vt_INIClass; /*0x765480*/
    BufferIOFile::Init(aP2_68); /*0x765488*/
    CCFileClass::Reopen(aP2_68, g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765498*/
    if ( !File::IsReady(aP2_68, 0) ) /*0x7654a2*/
    {
      FileClass::Close(aP2_68); /*0x7654af*/
      CCFileClass::Close(aP2_68); /*0x7654b8*/
      CCFileClass::Reopen(aP2_68, g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x7654c8*/
    }
    FileStraw::Open(aP2_4, (int)aP2_68, 0); /*0x7654d7*/
    CCFileClass::Close(aP2_68); /*0x7654e0*/
    aP2_68[0] = &off_7E1668; /*0x7654e9*/
    BufferIOFileClass::Dtor(aP2_68); /*0x7654f1*/
    String::Assign((char **)&v4, aPlayerfaction); /*0x7654ff*/
    INIClass::SetIntFormat((char *)aP2_4, (char **)(this + 72), (ObjectClass *)&v4, *(_DWORD *)(this + 68), 0); /*0x765516*/
    DeleteAndZero((void **)&v4); /*0x76551f*/
    BufferIOFile::Init(aP2_156); /*0x76552b*/
    CCFileClass::Reopen(aP2_156, g_Str_File_WDTHist_ini, (CDFileClass *)2); /*0x76553e*/
    INIClass::SaveToPipe(aP2_4, (int)aP2_156); /*0x76554f*/
    aP2_156[0] = &off_7E1668; /*0x76555b*/
    BufferIOFileClass::Dtor(aP2_156); /*0x765566*/
    return HashTable::DestroyHashTableINIClass(aP2_4); /*0x76556f*/
  }
  return result->__pad_0; /*0x765575*/
}


// ==== 0x00765580  sub_765580  this=-  sig=csp ====
int __stdcall sub_765580(_DWORD *a1)
{
  _DWORD v2[22]; // [esp+0h] [ebp-58h] BYREF

  BufferIOFile::Init(v2); /*0x765587*/
  CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1); /*0x765597*/
  if ( !File::IsReady(v2, 0) ) /*0x7655a2*/
  {
    FileClass::Close(v2); /*0x7655af*/
    CCFileClass::Close(v2); /*0x7655b8*/
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1); /*0x7655c8*/
  }
  FileStraw::Open(a1, (int)v2, 0); /*0x7655d8*/
  CCFileClass::Close(v2); /*0x7655e1*/
  v2[0] = &off_7E1668; /*0x7655ea*/
  return BufferIOFileClass::Dtor(v2); /*0x7655f7*/
}


// ==== 0x00765600  Campaign_WorldDominationTour::QueryInterface  this=Campaign@WorldDominationTour  sig=csp ====
void **__thiscall Campaign_WorldDominationTour::QueryInterface(void **Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *Block = &vt_WorldDominationTour_Campaign; /*0x765606*/
  DeleteAndZero(Block + 18); /*0x76560c*/
  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 7); /*0x765611*/
  *(Block + 6) = &vt_VectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765614*/
  if ( v3 && *((_BYTE *)Block + 37) ) /*0x76561f*/
  {
    (**v3)(v3, 3); /*0x76562e*/
    *(Block + 7) = 0; /*0x765630*/
  }
  *((_BYTE *)Block + 37) = 0; /*0x76563a*/
  *(Block + 8) = 0; /*0x76563e*/
  *(Block + 4) = &vt_rc_ptr_WorldDominationTour_History; /*0x765645*/
  ComPtr::Release(Block + 4); /*0x76564b*/
  *(Block + 2) = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x765653*/
  ComPtr::Release(Block + 2); /*0x765659*/
  ReferenceCounted::Constructor(Block); /*0x765660*/
  if ( (a2 & 1) != 0 ) /*0x76566a*/
    __3_YAXPAX_Z(Block); /*0x76566d*/
  return Block; /*0x765677*/
}


// ==== 0x00765680  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::queryProperty  this=DynamicVector  sig=csp ====
int __thiscall COMClass::sub_765680(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x765686*/
  *(_DWORD *)(this + 16) = 0; /*0x765689*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x765690*/
  {
    result = (**v2)(v2, 3); /*0x76569d*/
    *(_DWORD *)(this + 4) = 0; /*0x76569f*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7656a2*/
  *(_DWORD *)(this + 8) = 0; /*0x7656a5*/
  return result; /*0x7656a8*/
}


// ==== 0x007656B0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::setProperty  this=DynamicVector  sig=csp ====
unsigned int __thiscall COMClass::sub_7656B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7656b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x7656c5*/
  else
    return 0; /*0x7656b7*/
}


// ==== 0x007656D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edi

  v3 = this->Items + 8 * a3; /*0x7656dd*/
  ComPtr::Constructor(a2); /*0x7656e2*/
  *a2 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x7656e7*/
  ComPtr::Set(a2, *(_DWORD *)(v3 + 4)); /*0x7656f3*/
  return a2; /*0x7656fa*/
}


// ==== 0x00765700  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Campaign_WorldDominationTour_24_::_vt01(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 16); /*0x76570d*/
}


// ==== 0x00765710  Campaign_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall Campaign_WorldDominationTour_16_::Constructor(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x765713*/
  ComPtr::Release(Block); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    __3_YAXPAX_Z(Block); /*0x765726*/
  return (rc_ptr *)Block; /*0x765730*/
}


// ==== 0x00765740  Campaign_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall Campaign_WorldDominationTour_16_::Constructor_0(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_History; /*0x765743*/
  ComPtr::Release(Block); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    __3_YAXPAX_Z(Block); /*0x765756*/
  return (rc_ptr *)Block; /*0x765760*/
}


// ==== 0x00765770  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Constructor_1  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall Campaign_WorldDominationTour_16_::Constructor_1(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    __3_YAXPAX_Z(Block); /*0x765782*/
  return (VectorCursor *)Block; /*0x76578c*/
}


// ==== 0x00765790  COMClass::invokeMethod  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall COMClass::invokeMethod(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x765793*/
  ComPtr::Release(Block); /*0x765799*/
  if ( (a2 & 1) != 0 ) /*0x7657a3*/
    __3_YAXPAX_Z(Block); /*0x7657a6*/
  return (rc_ptr *)Block; /*0x7657b0*/
}


// ==== 0x007657C0  COMClass::getTypeInfo  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall COMClass::getTypeInfo(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_State; /*0x7657c3*/
  ComPtr::Release(Block); /*0x7657c9*/
  if ( (a2 & 1) != 0 ) /*0x7657d3*/
    __3_YAXPAX_Z(Block); /*0x7657d6*/
  return (rc_ptr *)Block; /*0x7657e0*/
}


// ==== 0x007657F0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = this->Capacity; /*0x7657f6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( v2 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (_DWORD *)(this->Items + 4); /*0x76580d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
    {
      ++v3; /*0x76581b*/
      v4 += 2; /*0x76581f*/
      if ( v3 >= v2 ) /*0x765824*/
        return 1; /*0x765824*/
    }
  }
  return 0; /*0x765826*/
}


// ==== 0x00765840  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16_::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  this->IsInitialized = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = a3 + 1; /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x7658bd*/
        v6 += 2; /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = a3 + 1; /*0x7658c9*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x765867*/
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*0x76589f*/
      goto LABEL_14; /*0x7658a1*/
    }
    *v5 = a2; /*0x765873*/
    v6 = v5 + 1; /*0x765875*/
    v13 = v5 + 1; /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x76588d*/
        v6 += 2; /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  this->IsInitialized = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( this->Items ) /*0x7658e1*/
  {
    if ( a2 >= this->Capacity ) /*0x7658ed*/
      v3 = this->Capacity; /*0x7658ef*/
    for ( i = 0; i < v3; ++i ) /*0x7658f5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x765902*/
    if ( this->IsAllocated ) /*0x76590c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      this->Items = 0; /*0x765920*/
    }
    v3 = a2; /*0x765927*/
  }
  this->Items = v8; /*0x765936*/
  this->Capacity = v3; /*0x765939*/
  this->IsAllocated = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
}


// ==== 0x00765960  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16_::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x765966*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *(_DWORD *)(this + 4) = 0; /*0x76597c*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76597f*/
  *(_DWORD *)(this + 8) = 0; /*0x765982*/
  return result; /*0x765985*/
}


// ==== 0x00765990  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16_::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x765990*/
    return 0; /*0x765998*/
  v3 = *(_DWORD *)(this + 8); /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( v3 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x7659ae*/
  {
    if ( ++result >= v3 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}


// ==== 0x007659D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Campaign_WorldDominationTour_16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7659d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}


// ==== 0x007659F0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::registerObject  this=DynamicVector  sig=csp ====
char __thiscall COMClass::sub_7659F0(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x7659f3*/
  if ( a2 ) /*0x7659fd*/
  {
    this->IsInitialized = 0; /*0x765a07*/
    if ( a3 ) /*0x765a0d*/
    {
      *a3 = a2; /*0x765a51*/
      v8 = a3 + 1; /*0x765a53*/
      if ( a2 - 1 >= 0 ) /*0x765a5f*/
      {
        v9 = a2; /*0x765a61*/
        do /*0x765a75*/
        {
          ComPtr::Constructor(v8); /*0x765a66*/
          *v8 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765a6b*/
          v8 += 2; /*0x765a71*/
          --v9; /*0x765a74*/
        }
        while ( v9 ); /*0x765a75*/
        v8 = a3 + 1; /*0x765a77*/
      }
      v6 = v8; /*0x765a7b*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x765a17*/
      if ( v5 ) /*0x765a21*/
      {
        *v5 = a2; /*0x765a23*/
        v6 = v5 + 1; /*0x765a25*/
        v7 = v5 + 1; /*0x765a2b*/
        if ( a2 - 1 >= 0 ) /*0x765a2f*/
        {
          v14 = a2; /*0x765a32*/
          do /*0x765a49*/
          {
            COMClass::releaseInterface(v7); /*0x765a38*/
            v7 += 2; /*0x765a41*/
            --v14; /*0x765a45*/
          }
          while ( v14 ); /*0x765a49*/
        }
      }
      else
      {
        v6 = 0; /*0x765a4d*/
      }
    }
    this->IsInitialized = 1; /*0x765a7f*/
    if ( !v6 ) /*0x765a83*/
      return 0; /*0x765b06*/
    if ( this->Items ) /*0x765a85*/
    {
      if ( a2 >= this->DynamicVector_field_0x8 ) /*0x765a91*/
        v3 = this->DynamicVector_field_0x8; /*0x765a93*/
      for ( i = 0; i < v3; ++i ) /*0x765a99*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x765aa6*/
      if ( this->IsAllocated ) /*0x765ab0*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x765ab7*/
        if ( v11 ) /*0x765abc*/
          (**v11)(v11, 3); /*0x765ac2*/
        this->Items = 0; /*0x765ac4*/
      }
      v3 = a2; /*0x765acb*/
    }
    this->Items = v6; /*0x765ada*/
    this->DynamicVector_field_0x8 = v3; /*0x765add*/
    this->IsAllocated = a3 == 0; /*0x765ae0*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x765ae9*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x765aec*/
  if ( v12 < this->Items ) /*0x765af4*/
    this->Items = v12; /*0x765af6*/
  return 1; /*0x765af9*/
}


// ==== 0x00765B10  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::unregisterObject  this=DynamicVector  sig=csp ====
int __thiscall COMClass::sub_765B10(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x765b10*/
  result = 0; /*0x765b13*/
  if ( v2 <= 0 ) /*0x765b18*/
    return -1; /*0x765b33*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x765b21*/
  {
    if ( ++result >= v2 ) /*0x765b31*/
      return -1; /*0x765b31*/
  }
  return result; /*0x765b36*/
}


// ==== 0x00765B40  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24_::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x765b42*/
  return this; /*0x765b45*/
}


// ==== 0x00765B50  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24_::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x765b52*/
  return this; /*0x765b55*/
}


// ==== 0x00765B60  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Campaign_WorldDominationTour_16_::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x765b63*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765b66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(Block + 1) = 0; /*0x765b81*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x765b8c*/
  *(Block + 2) = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    __3_YAXPAX_Z(Block); /*0x765b9c*/
  return (VectorClass *)Block; /*0x765ba6*/
}


// ==== 0x00765BB0  COMClass::createInstance  this=COMClass  sig=csp ====
rc_ptr_base *__thiscall COMClass::createInstance(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x765bbb*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x765bbd*/
    v4 = Block - 1; /*0x765bc1*/
    v5 = Block + 2 * v3; /*0x765bc4*/
    v6 = v3 - 1; /*0x765bc7*/
    if ( v6 >= 0 ) /*0x765bc8*/
    {
      v7 = v6 + 1; /*0x765bcb*/
      do /*0x765bdf*/
      {
        v5 -= 2; /*0x765bce*/
        v5->vfptr = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765bd3*/
        ComPtr::Release(v5); /*0x765bd9*/
        --v7; /*0x765bde*/
      }
      while ( v7 ); /*0x765bdf*/
    }
    if ( (a2 & 1) != 0 ) /*0x765be5*/
      __3_YAXPAX_Z(v4); /*0x765be8*/
    return v4; /*0x765bf0*/
  }
  else
  {
    Block->vfptr = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765bfa*/
    ComPtr::Release(Block); /*0x765c00*/
    if ( (a2 & 1) != 0 ) /*0x765c08*/
      __3_YAXPAX_Z(Block); /*0x765c0b*/
    return Block; /*0x765c13*/
  }
}


// ==== 0x00765C20  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::getInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall COMClass::getInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x765c23*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765c26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x765c30*/
  {
    (**v3)(v3, 3); /*0x765c3f*/
    *(Block + 1) = 0; /*0x765c41*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x765c4c*/
  *(Block + 2) = 0; /*0x765c52*/
  if ( (a2 & 1) != 0 ) /*0x765c59*/
    __3_YAXPAX_Z(Block); /*0x765c5c*/
  return (DynamicVector *)Block; /*0x765c66*/
}


// ==== 0x00765C70  COMClass::releaseInterface  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_765C70(_DWORD *this)
{
  ComPtr::Constructor(this); /*0x765c73*/
  *this = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765c78*/
  return this; /*0x765c80*/
}


// ==== 0x00765C90  ObjectClass::Team_Create_765C90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_765C90(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // edi

  v3 = a2; /*0x765c93*/
  this->vtable2 = 0; /*0x765c9c*/
  this->vtable3 = a2; /*0x765ca3*/
  this->nextObject = 1; /*0x765ca6*/
  this->attachedTag = 0; /*0x765caa*/
  *this = &vt_VectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x765cae*/
  if ( !a2 ) /*0x765cb5*/
    return this; /*0x765cb5*/
  if ( !a3 ) /*0x765cc1*/
  {
    v7 = __2_YAPAXI_Z(8 * a2 + 4); /*0x765cfb*/
    if ( v7 ) /*0x765d05*/
    {
      *v7 = a2; /*0x765d07*/
      v8 = v7 + 1; /*0x765d09*/
      v9 = v7 + 1; /*0x765d0f*/
      if ( a2 - 1 >= 0 ) /*0x765d13*/
      {
        do /*0x765d29*/
        {
          ComPtr::Constructor(v9); /*0x765d1a*/
          *v9 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765d1f*/
          v9 += 2; /*0x765d25*/
          --v3; /*0x765d28*/
        }
        while ( v3 ); /*0x765d29*/
        this->vtable2 = v8; /*0x765d2c*/
        this->attachedTag = 1; /*0x765d2f*/
        return this; /*0x765d38*/
      }
    }
    else
    {
      v8 = 0; /*0x765d3b*/
    }
    this->vtable2 = v8; /*0x765d3d*/
    this->attachedTag = 1; /*0x765d40*/
    return this; /*0x765d45*/
  }
  *a3 = a2; /*0x765cc3*/
  v5 = a3 + 1; /*0x765ccb*/
  if ( a2 - 1 >= 0 ) /*0x765ccf*/
  {
    do /*0x765ce5*/
    {
      ComPtr::Constructor(v5); /*0x765cd6*/
      *v5 = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765cdb*/
      v5 += 2; /*0x765ce1*/
      --v3; /*0x765ce4*/
    }
    while ( v3 ); /*0x765ce5*/
  }
  this->vtable2 = a3 + 1; /*0x765ce8*/
  return this; /*0x765ce7*/
}


// ==== 0x00765D50  sub_765D50  this=-  sig=ida-proto ====
int sub_765D50()
{
  dword_B726F8 = 0; /*0x765d52*/
  dword_B726FC = 0; /*0x765d57*/
  dword_B72700 = 0; /*0x765d5c*/
  dword_B72704 = 0; /*0x765d61*/
  return 0; /*0x765d66*/
}


// ==== 0x00765D70  sub_765D70  this=-  sig=ida-proto ====
void sub_765D70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x765d7c*/
  dbl_B72710 = Math::Sqrt(v0 + v0); /*0x765d8e*/
}


// ==== 0x00765DA0  sub_765DA0  this=-  sig=ida-proto ====
void sub_765DA0()
{
  dbl_B72780 = dbl_B72710 / 60.0; /*0x765dac*/
}


// ==== 0x00765DC0  sub_765DC0  this=-  sig=ida-proto ====
void sub_765DC0()
{
  dbl_B72748 = 1.0 / dbl_B72780; /*0x765dcc*/
}


// ==== 0x00765DE0  sub_765DE0  this=-  sig=ida-proto ====
void sub_765DE0()
{
  dbl_B72740 = 0.0174532925199433 * 45.0; /*0x765dec*/
}


// ==== 0x00765E00  sub_765E00  this=-  sig=ida-proto ====
void sub_765E00()
{
  dbl_B72718 = 0.0174532925199433 * 60.0; /*0x765e0c*/
}


// ==== 0x00765E20  sub_765E20  this=-  sig=ida-proto ====
void sub_765E20()
{
  dbl_B726F0 = 0.0174532925199433 * 90.0; /*0x765e2c*/
}


// ==== 0x00765E40  sub_765E40  this=-  sig=ida-proto ====
__int64 sub_765E40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B726F0 - dbl_B72718); /*0x765e52*/
  result = Math::RoundToInt(v0 * dbl_B72710 * 0.5); /*0x765e66*/
  dword_B72788 = result; /*0x765e6b*/
  return result; /*0x765e70*/
}


// ==== 0x00765E80  sub_765E80  this=-  sig=ida-proto ====
void sub_765E80()
{
  dbl_B72720 = Math::ArcTan((double)dword_B72788 * 0.00390625); /*0x765e97*/
}


// ==== 0x00765EB0  sub_765EB0  this=-  sig=ida-proto ====
void sub_765EB0()
{
  dbl_B72738 = Math::ArcTan((double)(2 * dword_B72788) / dbl_B72710); /*0x765ed2*/
}


// ==== 0x00765EE0  sub_765EE0  this=-  sig=ida-proto ====
__int64 sub_765EE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72788) + 0.5); /*0x765efb*/
  dword_B72778 = result; /*0x765f00*/
  return result; /*0x765f06*/
}


// ==== 0x00765F10  sub_765F10  this=-  sig=ida-proto ====
int sub_765F10()
{
  word_B72708 = 0; /*0x765f12*/
  word_B7270A = 0; /*0x765f18*/
  return 0; /*0x765f1e*/
}


// ==== 0x00765F20  sub_765F20  this=-  sig=ida-proto ====
int sub_765F20()
{
  dword_B72728 = 0; /*0x765f22*/
  dword_B7272C = 0; /*0x765f27*/
  dword_B72730 = 0; /*0x765f2c*/
  return 0; /*0x765f31*/
}


// ==== 0x00765F40  sub_765F40  this=-  sig=ida-proto ====
int sub_765F40()
{
  dword_B72758 = 0; /*0x765f45*/
  dword_B72750 = 128; /*0x765f4f*/
  dword_B72754 = 128; /*0x765f54*/
  return 128; /*0x765f59*/
}


// ==== 0x00765F60  Team_Create_765F60  this=-  sig=csp ====
rc_ptr_base *__fastcall Team_Create_765F60(rc_ptr_base *a1, int a2)
{
  rc_ptr_base *v4; // eax
  rc_ptr_base *v5; // esi
  rc_ptr_base *v6; // edi

  v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u); /*0x765f69*/
  v5 = v4; /*0x765f6e*/
  if ( v4 ) /*0x765f75*/
  {
    v6 = v4 + 2; /*0x765f78*/
    v4[1].vfptr = 0; /*0x765f7d*/
    v4->vfptr = &vt_ReferenceCounted; /*0x765f84*/
    ComPtr::Constructor(v4 + 2); /*0x765f8a*/
    v6->vfptr = &vt_rc_ptr_WDTTerritory; /*0x765f8f*/
    ComPtr::Set(v5 + 2, *(_DWORD *)(a2 + 4)); /*0x765f9b*/
    v5->vfptr = &vt_WorldDominationTour_Conflict; /*0x765fa0*/
  }
  else
  {
    v5 = 0; /*0x765fa9*/
  }
  ComPtr::Constructor(a1); /*0x765fad*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x765fb4*/
  ComPtr::Set(a1, (int)v5); /*0x765fbc*/
  return a1; /*0x765fc3*/
}


// ==== 0x00766060  ObjectClass::FindWDTTerritoryClass_Find_Find  this=ObjectClass  sig=csp ====
int __thiscall sub_766060(_DWORD *this)
{
  int v1; // eax

  v1 = this->vtable4; /*0x766060*/
  if ( v1 ) /*0x766065*/
    return *(_DWORD *)(v1 + 8); /*0x766067*/
  else
    return 0; /*0x76606b*/
}


// ==== 0x00766070  sub_766070  this=-  sig=ida-proto ====
int sub_766070()
{
  dword_B72764 = 0; /*0x766077*/
  dword_B72768 = 0; /*0x76607c*/
  byte_B7276C = 1; /*0x766081*/
  byte_B7276D = 0; /*0x766088*/
  dword_B72760 = (int)&vt_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x76608d*/
  dword_B72774 = 10; /*0x766097*/
  dword_B72770 = 0; /*0x7660a1*/
  return atexit(sub_7660B0); /*0x7660ac*/
}


// ==== 0x007660B0  sub_7660B0  this=-  sig=ida-proto ====
void __cdecl sub_7660B0()
{
  dword_B72760 = (int)&vt_VectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x7660b9*/
  if ( dword_B72764 && byte_B7276D ) /*0x7660cd*/
  {
    if ( dword_B72764 ) /*0x7660d1*/
      (**(void (__thiscall ***)(int, int))dword_B72764)(dword_B72764, 3); /*0x7660d7*/
    dword_B72764 = 0; /*0x7660d9*/
  }
  byte_B7276D = 0; /*0x7660df*/
  dword_B72768 = 0; /*0x7660e5*/
}


// ==== 0x007660F0  InitWDTGameOptions  this=-  sig=ida-proto ====
int WDT_InitGameOptions()
{
  char *v0; // ecx
  int v1; // esi
  int v2; // eax
  char *v3; // ecx
  char *v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  char *v7; // ecx
  char *v8; // ecx
  _DWORD *v9; // esi
  int v10; // eax
  char *v11; // ecx
  int v12; // esi
  int v13; // eax
  char *v14; // ecx
  char *v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  char *v18; // ecx
  char *v19; // ecx
  _DWORD *v20; // esi
  int v21; // eax
  char *v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char *v25; // [esp+18h] [ebp-20h] BYREF
  int v26; // [esp+1Ch] [ebp-1Ch]
  void **v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  _DWORD v29[2]; // [esp+30h] [ebp-8h] BYREF

  dword_B72770 = 0; /*0x7660fa*/
  Conflict_WorldDominationTour_12::ddtor(&dword_B72760); /*0x766104*/
  v26 = 0; /*0x766109*/
  v25 = v0; /*0x76610b*/
  String::Assign(&v25, aWdtTechlevel); /*0x766113*/
  v1 = System_Init_766880(sub_7667F0, (char)v25, v26); /*0x76612f*/
  ComPtr::Constructor(&v27); /*0x766131*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76613f*/
  ComPtr::Set(&v27, *(_DWORD *)(v1 + 4)); /*0x766147*/
  if ( dword_B72770 < dword_B72768 /*0x766183*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72768 + dword_B72774,
         0) )
  {
    v2 = dword_B72770++; /*0x766196*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v2), v28); /*0x7661a7*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7661b0*/
  ComPtr::Release(&v27); /*0x7661b4*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x7661bd*/
  ComPtr::Release(v29); /*0x7661c5*/
  v26 = 1; /*0x7661ca*/
  v25 = v3; /*0x7661cc*/
  String::Assign(&v25, aWdtBases); /*0x7661d4*/
  v24 = 0; /*0x7661d9*/
  v23 = v4; /*0x7661db*/
  String::Assign(&v23, aWdtNobases); /*0x7661e3*/
  v5 = ConstructorWDTFlagOption(v29, 16, v23, v24, v25, v26); /*0x7661fa*/
  ComPtr::Constructor(&v27); /*0x7661fc*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766201*/
  ComPtr::Set(&v27, v5[1]); /*0x76620d*/
  if ( dword_B72770 < dword_B72768 /*0x766249*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v6 = dword_B72770++; /*0x76625c*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v6), v28); /*0x76626d*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766276*/
  ComPtr::Release(&v27); /*0x76627a*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766283*/
  ComPtr::Release(v29); /*0x76628b*/
  v26 = 0; /*0x766290*/
  v25 = v7; /*0x766292*/
  String::Assign(&v25, aWdtShortgame); /*0x76629a*/
  v24 = 1; /*0x76629f*/
  v23 = v8; /*0x7662a1*/
  String::Assign(&v23, aWdtNotshortgam); /*0x7662a9*/
  v9 = ConstructorWDTFlagOption(v29, 1024, v23, v24, v25, v26); /*0x7662c0*/
  ComPtr::Constructor(&v27); /*0x7662c2*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7662c7*/
  ComPtr::Set(&v27, v9[1]); /*0x7662d3*/
  if ( dword_B72770 < dword_B72768 /*0x76630f*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v10 = dword_B72770++; /*0x766322*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v10), v28); /*0x766333*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76633c*/
  ComPtr::Release(&v27); /*0x766340*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766349*/
  ComPtr::Release(v29); /*0x766351*/
  v26 = 0; /*0x766356*/
  v25 = v11; /*0x766358*/
  String::Assign(&v25, aWdtUnitcount); /*0x766360*/
  v12 = System_Init_766880(sub_7667E0, (char)v25, v26); /*0x76637c*/
  ComPtr::Constructor(&v27); /*0x76637e*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766383*/
  ComPtr::Set(&v27, *(_DWORD *)(v12 + 4)); /*0x76638f*/
  if ( dword_B72770 < dword_B72768 /*0x7663cb*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v13 = dword_B72770++; /*0x7663de*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v13), v28); /*0x7663ef*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7663f8*/
  ComPtr::Release(&v27); /*0x7663fc*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x766405*/
  ComPtr::Release(v29); /*0x76640d*/
  v26 = 0; /*0x766412*/
  v25 = v14; /*0x766414*/
  String::Assign(&v25, aWdtRedeployabl); /*0x76641c*/
  v24 = 1; /*0x766421*/
  v23 = v15; /*0x766423*/
  String::Assign(&v23, aWdtNoredeploym); /*0x76642b*/
  v16 = ConstructorWDTFlagOption(v29, 32, v23, v24, v25, v26); /*0x766442*/
  ComPtr::Constructor(&v27); /*0x766444*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766449*/
  ComPtr::Set(&v27, v16[1]); /*0x766455*/
  if ( dword_B72770 < dword_B72768 /*0x766491*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v17 = dword_B72770++; /*0x7664a4*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v17), v28); /*0x7664b5*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7664be*/
  ComPtr::Release(&v27); /*0x7664c2*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x7664cb*/
  ComPtr::Release(v29); /*0x7664d3*/
  v26 = 1; /*0x7664d8*/
  v25 = v18; /*0x7664da*/
  String::Assign(&v25, aWdtCrates); /*0x7664e2*/
  v24 = 1; /*0x7664e7*/
  v23 = v19; /*0x7664e9*/
  String::Assign(&v23, aWdtNocrates); /*0x7664f1*/
  v20 = ConstructorWDTFlagOption(v29, 256, v23, v24, v25, v26); /*0x766508*/
  ComPtr::Constructor(&v27); /*0x76650a*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76650f*/
  ComPtr::Set(&v27, v20[1]); /*0x76651b*/
  System_Init_766EE0(&v27); /*0x76652a*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766533*/
  ComPtr::Release(&v27); /*0x766537*/
  System_Init_766900(v29); /*0x766540*/
  v21 = System_Init_7676F0(&v27, 201326592); /*0x76654e*/
  System_Init_766F70(v21); /*0x766558*/
  System_Init_766EE0(v29); /*0x766567*/
  System_Init_7668F0(v29); /*0x766570*/
  return System_Init_766910(&v27); /*0x76657e*/
}


// ==== 0x007665D0  ObjectClass::TerritorySelectWDT_Create  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_7665D0(char *this, wchar_t **a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  char *v5; // edi
  const wchar_t **v6; // eax
  int v7; // edi
  char *v8; // edi
  const wchar_t **v9; // eax
  void *v11; // [esp+20h] [ebp-20h] BYREF
  char *v12; // [esp+24h] [ebp-1Ch]
  void *v13; // [esp+28h] [ebp-18h] BYREF
  void **v14; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD *v15; // [esp+30h] [ebp-10h]
  void **v16; // [esp+34h] [ebp-Ch] BYREF
  int *v17; // [esp+38h] [ebp-8h]
  int v18; // [esp+3Ch] [ebp-4h]

  v2 = 0; /*0x7665db*/
  v12 = this; /*0x7665e0*/
  if ( !dword_B72770 ) /*0x7665e4*/
    InitWDTGameOptions(); /*0x7665e6*/
  v3 = 6; /*0x7665ef*/
  unknown_libname_74(&v11); /*0x7665f4*/
  v17 = &dword_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    v4 = v17[1] + 8 * v18; /*0x766634*/
    ComPtr::Constructor(&v14); /*0x766637*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76663c*/
    ComPtr::Set(&v14, *(_DWORD *)(v4 + 4)); /*0x766648*/
    if ( (v2 & v15[2]) == 0 ) /*0x766654*/
    {
      v5 = v12 + 8; /*0x76665c*/
      if ( !(*(int (__thiscall **)(_DWORD *, char *))(*v15 + 12))(v15, v12 + 8) ) /*0x766660*/
      {
        v6 = (const wchar_t **)(*(int (__thiscall **)(_DWORD *, void **, char *, void **))(*v15 + 16))( /*0x766678*/
                                 v15,
                                 &v13,
                                 v5,
                                 &v11);
        WideString::Reassign_Alt(&v11, v6); /*0x766680*/
        DeleteAndZero::Alt(&v13); /*0x766689*/
        --v3; /*0x766692*/
        v2 |= v15[2]; /*0x766693*/
      }
    }
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76669a*/
    ComPtr::Release(&v14); /*0x76669e*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x7666ab*/
  }
  while ( v3 ); /*0x7666b0*/
  v18 = 0; /*0x7666b8*/
  while ( v3 ) /*0x7666c0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x7666ce*/
      break; /*0x7666d3*/
    v7 = v17[1] + 8 * v18; /*0x7666e8*/
    ComPtr::Constructor(&v14); /*0x7666eb*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7666f0*/
    ComPtr::Set(&v14, *(_DWORD *)(v7 + 4)); /*0x7666fc*/
    if ( (v2 & v15[2]) == 0 ) /*0x766708*/
    {
      v8 = v12 + 8; /*0x766710*/
      if ( (*(int (__thiscall **)(_DWORD *, char *))(*v15 + 12))(v15, v12 + 8) != 2 ) /*0x76671a*/
      {
        v9 = (const wchar_t **)(*(int (__thiscall **)(_DWORD *, void **, char *, void **))(*v15 + 16))( /*0x76672d*/
                                 v15,
                                 &v13,
                                 v8,
                                 &v11);
        WideString::Reassign_Alt(&v11, v9); /*0x766735*/
        DeleteAndZero::Alt(&v13); /*0x76673e*/
        --v3; /*0x766747*/
        v2 |= v15[2]; /*0x766748*/
      }
    }
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76674f*/
    ComPtr::Release(&v14); /*0x766753*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x76677f*/
  DeleteAndZero::Alt(&v11); /*0x766787*/
  return a2; /*0x76678e*/
}


// ==== 0x007667A0  Conflict_WorldDominationTour::QueryInterface  this=Conflict@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour::QueryInterface(Conflict_WorldDominationTour *this, char a2)
{
  rc_ptr_base *v3; // ecx

  v3 = (rc_ptr_base *)(this + 2); /*0x7667a3*/
  this->vfptr = &vt_WorldDominationTour_Conflict; /*0x7667a6*/
  v3->vfptr = &vt_rc_ptr_WDTTerritory; /*0x7667ac*/
  ComPtr::Release(v3); /*0x7667b2*/
  ReferenceCounted::Constructor(this); /*0x7667b9*/
  if ( (a2 & 1) != 0 ) /*0x7667c3*/
    __3_YAXPAX_Z(this); /*0x7667c6*/
  return &this->vfptr; /*0x7667d0*/
}


// ==== 0x007667E0  ObjectClass::method_7667E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667E0(unsigned __int8 *this)
{
  return this->attachedBomb; /*0x7667e5*/
}


// ==== 0x007667F0  ObjectClass::method_7667F0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667F0(unsigned __int8 *this)
{
  return this->ambientSoundController; /*0x7667f5*/
}


// ==== 0x00766800  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ReleaseBuffer  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::sub_766800(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x766806*/
  *(_DWORD *)(this + 16) = 0; /*0x766809*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x766810*/
  {
    result = (**v2)(v2, 3); /*0x76681d*/
    *(_DWORD *)(this + 4) = 0; /*0x76681f*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x766822*/
  *(_DWORD *)(this + 8) = 0; /*0x766825*/
  return result; /*0x766828*/
}


// ==== 0x00766830  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12_::sub_766830(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x766830*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/
}


// ==== 0x00766850  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edi

  v3 = this->Items + 8 * a3; /*0x76685d*/
  ComPtr::Constructor(a2); /*0x766862*/
  *a2 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766867*/
  ComPtr::Set(a2, *(_DWORD *)(v3 + 4)); /*0x766873*/
  return a2; /*0x76687a*/
}


// ==== 0x00766880  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall System_Init_766880(rc_ptr_base *a1, int a2, int a3, void *a4, ObjectClass *aP4)
{
  char *v7; // ecx
  GameOption_WorldDominationTour *v8; // esi
  void *inited; // esi
  char *v11; // [esp-8h] [ebp-14h] BYREF
  ObjectClass *v12; // [esp-4h] [ebp-10h]

  v8 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x18u); /*0x76688e*/
  if ( v8 ) /*0x766895*/
  {
    v12 = aP4; /*0x76689f*/
    v11 = v7; /*0x7668a0*/
    String::AssignFromPtr(&v11, (const char **)&a4); /*0x7668a4*/
    inited = System_Init_766A10(v8, a2, a3, v11, v12); /*0x7668b6*/
  }
  else
  {
    inited = 0; /*0x7668ba*/
  }
  ComPtr::Constructor(a1); /*0x7668be*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x7668c5*/
  ComPtr::Set(a1, (int)inited); /*0x7668cc*/
  DeleteAndZero(&a4); /*0x7668d5*/
  return (rc_ptr *)a1; /*0x7668dc*/
}


// ==== 0x007668F0  rc_ptr::System_Init_7668F0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_7668F0(_DWORD *this)
{
  *this = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7668f0*/
  return ComPtr::Release(this);
}


// ==== 0x00766900  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_766900(_DWORD *this)
{
  *this = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766900*/
  return ComPtr::Release(this);
}


// ==== 0x00766910  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_766910(_DWORD *this)
{
  *this = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption; /*0x766910*/
  return ComPtr::Release(this);
}


// ==== 0x00766920  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Conflict_WorldDominationTour_26_::_vt01(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 16); /*0x76692d*/
}


// ==== 0x00766960  Conflict_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall Conflict_WorldDominationTour_12_::Constructor(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x766963*/
  ComPtr::Release(Block); /*0x766969*/
  if ( (a2 & 1) != 0 ) /*0x766973*/
    __3_YAXPAX_Z(Block); /*0x766976*/
  return (rc_ptr *)Block; /*0x766980*/
}


// ==== 0x00766990  Conflict_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall Conflict_WorldDominationTour_12_::Constructor_0(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766993*/
  ComPtr::Release(Block); /*0x766999*/
  if ( (a2 & 1) != 0 ) /*0x7669a3*/
    __3_YAXPAX_Z(Block); /*0x7669a6*/
  return (rc_ptr *)Block; /*0x7669b0*/
}


// ==== 0x007669C0  COMClass::connectPoint  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall COMClass::connectPoint(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption; /*0x7669c3*/
  ComPtr::Release(Block); /*0x7669c9*/
  if ( (a2 & 1) != 0 ) /*0x7669d3*/
    __3_YAXPAX_Z(Block); /*0x7669d6*/
  return (rc_ptr *)Block; /*0x7669e0*/
}


// ==== 0x007669F0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::disconnectPoint  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall COMClass::disconnectPoint(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    __3_YAXPAX_Z(Block); /*0x766a02*/
  return (VectorCursor *)Block; /*0x766a0c*/
}


// ==== 0x00766A10  GameOption@WorldDominationTour::System_Init_766A10  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall System_Init_766A10(GameOption_WorldDominationTour *this, int a2, int arg4, void *a3, ObjectClass *aP4)
{
  ObjectClass *v6; // ecx

  v6 = aP4; /*0x766a1b*/
  *((_DWORD *)this + 2) = a2; /*0x766a1f*/
  this->q00C = v6; /*0x766a26*/
  this->GameOption_WorldDominationTour_field_0x04 = 0; /*0x766a2d*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x766a34*/
  this->q010 = arg4; /*0x766a3a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a3); /*0x766a3d*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::ValueGameOption<unsigned char>::`vftable'; /*0x766a46*/
  DeleteAndZero(&a3); /*0x766a4c*/
  return this; /*0x766a53*/
}


// ==== 0x00766A60  GameOption_WorldDominationTour::QueryInterface  this=GameOption@WorldDominationTour  sig=csp ====
_DWORD *__thiscall GameOption_WorldDominationTour::QueryInterface(GameOption_WorldDominationTour *this, char a2)
{
  GameOption_WorldDominationTour::Constructor(this); /*0x766a63*/
  if ( (a2 & 1) != 0 ) /*0x766a6d*/
    __3_YAXPAX_Z(this); /*0x766a70*/
  return this->__pad_0; /*0x766a7a*/
}


// ==== 0x00766A80  _ValueGameOption_E_WorldDominationTour::enumConnections  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
int __thiscall COMClass::enumConnections(ValueGameOption_E_WorldDominationTour *this, int a2)
{
  bool v3; // zf
  int result; // eax

  v3 = Network_Connect_767310(a2) == 0; /*0x766a8d*/
  result = 2; /*0x766a8f*/
  if ( v3 ) /*0x766a94*/
    return *((_DWORD *)this + 3); /*0x766a96*/
  return result; /*0x766a99*/
}


// ==== 0x00766AA0  _ValueGameOption_E_WorldDominationTour::adviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
wchar_t **__thiscall COMClass::adviseConnection(
        ValueGameOption_E_WorldDominationTour *this,
        wchar_t **a1,
        GameSetup *aP2,
        const wchar_t **a3)
{
  int v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  CampaignScore *v8; // eax
  wchar_t **v9; // eax
  GameSetup *v11; // [esp-4h] [ebp-9Ch]
  CampaignScore *v12; // [esp+0h] [ebp-98h]
  wchar_t *Format; // [esp+4h] [ebp-94h] BYREF
  wchar_t *var90; // [esp+8h] [ebp-90h] BYREF
  CampaignScore *v14; // [esp+Ch] [ebp-8Ch] BYREF
  ObjectClass *v15; // [esp+10h] [ebp-88h] BYREF
  GameSetup aP0; // [esp+14h] [ebp-84h] BYREF

  v5 = (*((int (__thiscall **)(int))this + 4))(aP2->GameSetup_field_0x04); /*0x766ab0*/
  FromStringInt((IUnknown *)&Format, v5); /*0x766ab9*/
  v6 = String::GetOrEmpty_Alt((char **)this + 5); /*0x766acb*/
  StringCSF = GetStringCSF((wchar_t *)v6, 0, (CampaignScore *)aDRa2mdpostWdtg, 161); /*0x766ad4*/
  WideString::Assign(&var90, (CampaignScore *)StringCSF); /*0x766ade*/
  v11 = (GameSetup *)Format; /*0x766ae7*/
  v8 = WideString::GetOrEmpty(&var90); /*0x766aec*/
  swprintf((wchar_t *const)&aP0.GameSetup_field_0x04, (const size_t)v8, (const wchar_t *const)v11, v12); /*0x766af7*/
  if ( WideString::Length(a3) ) /*0x766b08*/
  {
    WideString::Assign((wchar_t **)&v14, (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x766b1a*/
    v9 = ConcatWString(&aP0, a3, (const wchar_t **)&v14); /*0x766b34*/
    WideString::AssignConcat((const wchar_t **)v9, (wchar_t **)&v15, (wchar_t *)&aP0.GameSetup_field_0x04); /*0x766b3b*/
    DeleteAndZero::Alt((void **)&v15); /*0x766b44*/
    DeleteAndZero::Alt((void **)&aP0); /*0x766b4d*/
    DeleteAndZero::Alt((void **)&v14); /*0x766b56*/
  }
  WideString::Assign(a1, (CampaignScore *)&aP0.GameSetup_field_0x04); /*0x766b69*/
  DeleteAndZero::Alt((void **)&var90); /*0x766b72*/
  DeleteAndZero((int)&Format); /*0x766b7b*/
  return a1; /*0x766b82*/
}


// ==== 0x00766B90  _ValueGameOption_E_WorldDominationTour::unadviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::unadviseConnection(ValueGameOption_E_WorldDominationTour *this, char a2)
{
  DeleteAndZero((void **)this + 5); /*0x766b96*/
  GameOption_WorldDominationTour::Constructor((GameOption_WorldDominationTour *)this); /*0x766b9d*/
  if ( (a2 & 1) != 0 ) /*0x766ba7*/
    __3_YAXPAX_Z(this); /*0x766baa*/
  return &this->vfptr; /*0x766bb4*/
}


// ==== 0x00766BC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = this->Capacity; /*0x766bc6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x766bcf*/
  {
    v3 = 0; /*0x766bd1*/
    if ( v2 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    v4 = (_DWORD *)(this->Items + 4); /*0x766bdd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= v2 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/
}


// ==== 0x00766C10  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12_::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x766c13*/
  if ( !a2 ) /*0x766c1d*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x766d1d*/
    return 1; /*0x766d23*/
  }
  this->IsInitialized = 0; /*0x766c27*/
  if ( a3 ) /*0x766c2d*/
  {
    *a3 = a2; /*0x766c73*/
    v6 = a3 + 1; /*0x766c75*/
    if ( a2 - 1 >= 0 ) /*0x766c81*/
    {
      v9 = a2; /*0x766c83*/
      do /*0x766c97*/
      {
        ComPtr::Constructor(v6); /*0x766c88*/
        *v6 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766c8d*/
        v6 += 2; /*0x766c93*/
        --v9; /*0x766c96*/
      }
      while ( v9 ); /*0x766c97*/
      v6 = a3 + 1; /*0x766c99*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x766c37*/
    if ( !v5 ) /*0x766c41*/
    {
      v8 = 0; /*0x766c6f*/
      goto LABEL_14; /*0x766c71*/
    }
    *v5 = a2; /*0x766c43*/
    v6 = v5 + 1; /*0x766c45*/
    v13 = v5 + 1; /*0x766c4b*/
    if ( a2 - 1 >= 0 ) /*0x766c51*/
    {
      v7 = a2; /*0x766c53*/
      do /*0x766c67*/
      {
        ComPtr::Constructor(v6); /*0x766c58*/
        *v6 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766c5d*/
        v6 += 2; /*0x766c63*/
        --v7; /*0x766c66*/
      }
      while ( v7 ); /*0x766c67*/
      v6 = v13; /*0x766c69*/
    }
  }
  v8 = v6; /*0x766c9d*/
LABEL_14:
  this->IsInitialized = 1; /*0x766c9f*/
  if ( !v8 ) /*0x766ca5*/
    return 0; /*0x766caa*/
  if ( this->Items ) /*0x766cb1*/
  {
    if ( a2 >= this->Capacity ) /*0x766cbd*/
      v3 = this->Capacity; /*0x766cbf*/
    for ( i = 0; i < v3; ++i ) /*0x766cc5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x766cd2*/
    if ( this->IsAllocated ) /*0x766cdc*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x766ce3*/
      if ( v12 ) /*0x766ce8*/
        (**v12)(v12, 3); /*0x766cee*/
      this->Items = 0; /*0x766cf0*/
    }
    v3 = a2; /*0x766cf7*/
  }
  this->Items = v8; /*0x766d06*/
  this->Capacity = v3; /*0x766d09*/
  this->IsAllocated = a3 == 0; /*0x766d0c*/
  return 1; /*0x766ca7*/
}


// ==== 0x00766D30  ?$VectorClass@V?$rc_ptr@VGameOption@WorldDominationTour@@@@::ddtor  this=VectorClass  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x766d36*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x766d3d*/
  {
    result = (**v2)(v2, 3); /*0x766d4a*/
    *(_DWORD *)(this + 4) = 0; /*0x766d4c*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x766d4f*/
  *(_DWORD *)(this + 8) = 0; /*0x766d52*/
  return result; /*0x766d55*/
}


// ==== 0x00766D60  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x766d60*/
    return 0; /*0x766d68*/
  v3 = *(_DWORD *)(this + 8); /*0x766d6e*/
  result = 0; /*0x766d71*/
  if ( v3 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= v3 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/
}


// ==== 0x00766DA0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x766da0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/
}


// ==== 0x00766DC0  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_1  this=DynamicVector  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12_::sub_766DC0(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x766dc3*/
  if ( a2 ) /*0x766dcd*/
  {
    this->IsInitialized = 0; /*0x766dd7*/
    if ( a3 ) /*0x766ddd*/
    {
      *a3 = a2; /*0x766e21*/
      v8 = a3 + 1; /*0x766e23*/
      if ( a2 - 1 >= 0 ) /*0x766e2f*/
      {
        v9 = a2; /*0x766e31*/
        do /*0x766e45*/
        {
          ComPtr::Constructor(v8); /*0x766e36*/
          *v8 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766e3b*/
          v8 += 2; /*0x766e41*/
          --v9; /*0x766e44*/
        }
        while ( v9 ); /*0x766e45*/
        v8 = a3 + 1; /*0x766e47*/
      }
      v6 = v8; /*0x766e4b*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x766de7*/
      if ( v5 ) /*0x766df1*/
      {
        *v5 = a2; /*0x766df3*/
        v6 = v5 + 1; /*0x766df5*/
        v7 = v5 + 1; /*0x766dfb*/
        if ( a2 - 1 >= 0 ) /*0x766dff*/
        {
          v14 = a2; /*0x766e02*/
          do /*0x766e19*/
          {
            Conflict_WorldDominationTour_12::Constructor_3(v7); /*0x766e08*/
            v7 += 2; /*0x766e11*/
            --v14; /*0x766e15*/
          }
          while ( v14 ); /*0x766e19*/
        }
      }
      else
      {
        v6 = 0; /*0x766e1d*/
      }
    }
    this->IsInitialized = 1; /*0x766e4f*/
    if ( !v6 ) /*0x766e53*/
      return 0; /*0x766ed6*/
    if ( this->Items ) /*0x766e55*/
    {
      if ( a2 >= this->DynamicVector_field_0x8 ) /*0x766e61*/
        v3 = this->DynamicVector_field_0x8; /*0x766e63*/
      for ( i = 0; i < v3; ++i ) /*0x766e69*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x766e76*/
      if ( this->IsAllocated ) /*0x766e80*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x766e87*/
        if ( v11 ) /*0x766e8c*/
          (**v11)(v11, 3); /*0x766e92*/
        this->Items = 0; /*0x766e94*/
      }
      v3 = a2; /*0x766e9b*/
    }
    this->Items = v6; /*0x766eaa*/
    this->DynamicVector_field_0x8 = v3; /*0x766ead*/
    this->IsAllocated = a3 == 0; /*0x766eb0*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x766eb9*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x766ebc*/
  if ( v12 < this->Items ) /*0x766ec4*/
    this->Items = v12; /*0x766ec6*/
  return 1; /*0x766ec9*/
}


// ==== 0x00766EE0  ObjectClass::System_Init_766EE0  this=DynamicVector  sig=csp ====
char __thiscall System_Init_766EE0(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax

  v3 = this->DynamicVector_field_0x8; /*0x766ee3*/
  if ( this->DynamicVector_field_0x10 >= v3 ) /*0x766eeb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x766ef6*/
      return 0; /*0x766ef6*/
    v4 = this->CapacityIncrement; /*0x766ef8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x766f08*/
      return 0; /*0x766f0f*/
  }
  v6 = this->DynamicVector_field_0x10; /*0x766f15*/
  this->DynamicVector_field_0x10 = v6 + 1; /*0x766f1f*/
  ComPtr::Set((rc_ptr_base *)(this->Items + 8 * v6), *(_DWORD *)&aP1->field_1[3]); /*0x766f2c*/
  return 1; /*0x766f11*/
}


// ==== 0x00766F40  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::IndexOf  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::sub_766F40(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x766f40*/
  result = 0; /*0x766f43*/
  if ( v2 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= v2 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/
}


// ==== 0x00766F70  rc_ptr::System_Init_766F70  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall System_Init_766F70(rc_ptr_base *this, int a2)
{
  ComPtr::Constructor(this); /*0x766f73*/
  this->vfptr = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766f7c*/
  ComPtr::Set(this, *(_DWORD *)(a2 + 4)); /*0x766f88*/
  return (rc_ptr *)this; /*0x766f8f*/
}


// ==== 0x00766FA0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26_::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x766fa2*/
  return this; /*0x766fa5*/
}


// ==== 0x00766FB0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26_::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x766fb2*/
  return this; /*0x766fb5*/
}


// ==== 0x00766FC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Conflict_WorldDominationTour_12_::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x766fc3*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x766fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x766fd0*/
  {
    (**v3)(v3, 3); /*0x766fdf*/
    *(Block + 1) = 0; /*0x766fe1*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x766fec*/
  *(Block + 2) = 0; /*0x766ff2*/
  if ( (a2 & 1) != 0 ) /*0x766ff9*/
    __3_YAXPAX_Z(Block); /*0x766ffc*/
  return (VectorClass *)Block; /*0x767006*/
}


// ==== 0x00767010  COMClass::lockServer  this=COMClass  sig=csp ====
rc_ptr_base *__thiscall COMClass::lockServer(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x76701d*/
    v4 = Block - 1; /*0x767021*/
    v5 = Block + 2 * v3; /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 -= 2; /*0x76702e*/
        v5->vfptr = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x767033*/
        ComPtr::Release(v5); /*0x767039*/
        --v7; /*0x76703e*/
      }
      while ( v7 ); /*0x76703f*/
    }
    if ( (a2 & 1) != 0 ) /*0x767045*/
      __3_YAXPAX_Z(v4); /*0x767048*/
    return v4; /*0x767050*/
  }
  else
  {
    Block->vfptr = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76705a*/
    ComPtr::Release(Block); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      __3_YAXPAX_Z(Block); /*0x76706b*/
    return Block; /*0x767073*/
  }
}


// ==== 0x00767080  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_2  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall Conflict_WorldDominationTour_12_::Constructor_2(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x767083*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x767086*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x767090*/
  {
    (**v3)(v3, 3); /*0x76709f*/
    *(Block + 1) = 0; /*0x7670a1*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x7670ac*/
  *(Block + 2) = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    __3_YAXPAX_Z(Block); /*0x7670bc*/
  return (DynamicVector *)Block; /*0x7670c6*/
}


// ==== 0x007670D0  Conflict_WorldDominationTour::Constructor_3  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_7670D0(_DWORD *this)
{
  ComPtr::Constructor(this); /*0x7670d3*/
  *this = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7670d8*/
  return this; /*0x7670e0*/
}


// ==== 0x007670F0  sub_7670F0  this=-  sig=ida-proto ====
int sub_7670F0()
{
  dword_B72798 = 0; /*0x7670f2*/
  dword_B7279C = 0; /*0x7670f7*/
  dword_B727A0 = 0; /*0x7670fc*/
  dword_B727A4 = 0; /*0x767101*/
  return 0; /*0x767106*/
}


// ==== 0x00767110  sub_767110  this=-  sig=ida-proto ====
void sub_767110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76711c*/
  dbl_B727B0 = Math::Sqrt(v0 + v0); /*0x76712e*/
}


// ==== 0x00767140  sub_767140  this=-  sig=ida-proto ====
void sub_767140()
{
  dbl_B72800 = dbl_B727B0 / 60.0; /*0x76714c*/
}


// ==== 0x00767160  sub_767160  this=-  sig=ida-proto ====
void sub_767160()
{
  dbl_B727E8 = 1.0 / dbl_B72800; /*0x76716c*/
}


// ==== 0x00767180  sub_767180  this=-  sig=ida-proto ====
void sub_767180()
{
  dbl_B727E0 = 0.0174532925199433 * 45.0; /*0x76718c*/
}


// ==== 0x007671A0  sub_7671A0  this=-  sig=ida-proto ====
void sub_7671A0()
{
  dbl_B727B8 = 0.0174532925199433 * 60.0; /*0x7671ac*/
}


// ==== 0x007671C0  sub_7671C0  this=-  sig=ida-proto ====
void sub_7671C0()
{
  dbl_B72790 = 0.0174532925199433 * 90.0; /*0x7671cc*/
}


// ==== 0x007671E0  sub_7671E0  this=-  sig=ida-proto ====
__int64 sub_7671E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72790 - dbl_B727B8); /*0x7671f2*/
  result = Math::RoundToInt(v0 * dbl_B727B0 * 0.5); /*0x767206*/
  dword_B72808 = result; /*0x76720b*/
  return result; /*0x767210*/
}


// ==== 0x00767220  sub_767220  this=-  sig=ida-proto ====
void sub_767220()
{
  dbl_B727C0 = Math::ArcTan((double)dword_B72808 * 0.00390625); /*0x767237*/
}


// ==== 0x00767250  sub_767250  this=-  sig=ida-proto ====
void sub_767250()
{
  dbl_B727D8 = Math::ArcTan((double)(2 * dword_B72808) / dbl_B727B0); /*0x767272*/
}


// ==== 0x00767280  sub_767280  this=-  sig=ida-proto ====
__int64 sub_767280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72808) + 0.5); /*0x76729b*/
  dword_B727FC = result; /*0x7672a0*/
  return result; /*0x7672a6*/
}


// ==== 0x007672B0  sub_7672B0  this=-  sig=ida-proto ====
int sub_7672B0()
{
  word_B727A8 = 0; /*0x7672b2*/
  word_B727AA = 0; /*0x7672b8*/
  return 0; /*0x7672be*/
}


// ==== 0x007672C0  sub_7672C0  this=-  sig=ida-proto ====
int sub_7672C0()
{
  dword_B727C8 = 0; /*0x7672c2*/
  dword_B727CC = 0; /*0x7672c7*/
  dword_B727D0 = 0; /*0x7672cc*/
  return 0; /*0x7672d1*/
}


// ==== 0x007672E0  sub_7672E0  this=-  sig=ida-proto ====
int sub_7672E0()
{
  dword_B727F8 = 0; /*0x7672e5*/
  dword_B727F0 = 128; /*0x7672ef*/
  dword_B727F4 = 128; /*0x7672f4*/
  return 128; /*0x7672f9*/
}


// ==== 0x00767300  GameOption_WorldDominationTour::Constructor  this=GameOption@WorldDominationTour  sig=csp ====
void __thiscall GameOption_WorldDominationTour::Constructor(GameOption_WorldDominationTour *this)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767300*/
  ReferenceCounted::Constructor(this); /*0x767306*/
}


// ==== 0x00767310  Network_Connect  this=-  sig=csp ====
char __stdcall sub_767310(int a1)
{
  return 0; /*0x767312*/
}


// ==== 0x00767320  ObjectClass::method  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_767320(const char **this, wchar_t **a2, int a3, const wchar_t **a4)
{
  int v5; // eax
  char **v6; // eax
  const wchar_t **v7; // esi
  char *v8; // eax
  wchar_t **v9; // eax
  char *v11; // eax
  wchar_t *v12; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-10h]
  void *v14; // [esp+4h] [ebp-4h] BYREF

  v5 = (*((int (__thiscall **)(const char **, int))*this + 5))(this, a3); /*0x76732d*/
  v6 = FromStringInt((char **)&v14, v5); /*0x767336*/
  ConcatStringAlloc((char **)&a3, this + 4, v6); /*0x767343*/
  DeleteAndZero(&v14); /*0x76734c*/
  v7 = a4; /*0x767351*/
  if ( WideString::Length(a4) ) /*0x767357*/
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)MEMORY[0x8423D8]); /*0x76736a*/
    v8 = String::GetOrEmpty((char **)&a3); /*0x76737a*/
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22); /*0x76738c*/
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4); /*0x767399*/
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF); /*0x7673a0*/
    DeleteAndZero::Alt(&v14); /*0x7673a9*/
    DeleteAndZero::Alt((void **)&a4); /*0x7673b2*/
  }
  else
  {
    v11 = String::GetOrEmpty((char **)&a3); /*0x7673d3*/
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25); /*0x7673dc*/
    WideString::Assign(a2, v12); /*0x7673e8*/
  }
  DeleteAndZero((void **)&a3); /*0x7673bb*/
  return a2; /*0x7673c3*/
}


// ==== 0x00767460  rc_ptr::ConstructorWDTFlagOption  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall ConstructorWDTFlagOption(rc_ptr_base *a1, int a2, void *a3, int a4, void *a5, ObjectClass *aP5)
{
  char *v8; // ecx
  GameOption_WorldDominationTour *v9; // esi
  char *v10; // ecx
  void *v11; // esi
  char *v13; // [esp-10h] [ebp-1Ch] BYREF
  int v14; // [esp-Ch] [ebp-18h]
  char *v15; // [esp-8h] [ebp-14h] BYREF
  ObjectClass *v16; // [esp-4h] [ebp-10h]

  v9 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x1Cu); /*0x76746e*/
  if ( v9 ) /*0x767475*/
  {
    v16 = aP5; /*0x76747f*/
    v15 = v8; /*0x767480*/
    String::AssignFromPtr(&v15, (const char **)&a5); /*0x767484*/
    v14 = a4; /*0x767491*/
    v13 = v10; /*0x767492*/
    String::AssignFromPtr(&v13, (const char **)&a3); /*0x767496*/
    v11 = ConstructorWDTFlagOption_Create(v9, a2, v13, v14, v15, v16); /*0x7674a3*/
  }
  else
  {
    v11 = 0; /*0x7674a7*/
  }
  ComPtr::Constructor(a1); /*0x7674ab*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x7674b2*/
  ComPtr::Set(a1, (int)v11); /*0x7674b9*/
  DeleteAndZero(&a3); /*0x7674c2*/
  DeleteAndZero(&a5); /*0x7674cb*/
  return (rc_ptr *)a1; /*0x7674d2*/
}


// ==== 0x007674E0  FlagGameOption_WorldDominationTour::unlockServer  this=FlagGameOption@WorldDominationTour  sig=csp ====
int __thiscall COMClass::unlockServer(FlagGameOption_WorldDominationTour *this, int a2)
{
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 4) + 56) & *(_DWORD *)&this->__pad_0[8]) != 0 ) /*0x7674ef*/
    return *(_DWORD *)&this->__pad_0[16]; /*0x7674f1*/
  else
    return *(_DWORD *)&this->__pad_0[12]; /*0x7674f7*/
}


// ==== 0x00767500  FlagGameOption_WorldDominationTour::coInitialize  this=FlagGameOption@WorldDominationTour  sig=csp ====
wchar_t **__thiscall COMClass::coInitialize(
        FlagGameOption_WorldDominationTour *this,
        wchar_t **a1,
        int arg4,
        const wchar_t **a3)
{
  int *v4; // eax
  GameSetup *v6; // edi
  char *v7; // eax
  wchar_t **v8; // eax
  char *v9; // eax
  wchar_t *v10; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-10h]
  FlagGameOption_WorldDominationTour *v12; // [esp+0h] [ebp-4h] BYREF

  v12 = this; /*0x767500*/
  v4 = (int *)&this->__pad_0[20]; /*0x767510*/
  if ( (*(_DWORD *)(*(_DWORD *)(arg4 + 4) + 56) & *(_DWORD *)&this->__pad_0[8]) == 0 ) /*0x767513*/
    v4 = &this->field_18; /*0x767515*/
  String::AssignFromPtr((char **)&arg4, (const char **)v4); /*0x76751f*/
  if ( String::Length((const char **)&arg4) ) /*0x767528*/
  {
    v6 = (GameSetup *)a3; /*0x767552*/
    if ( WideString::Length(a3) ) /*0x767558*/
    {
      WideString::Assign((wchar_t **)&a3, (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x76756a*/
      v7 = String::GetOrEmpty((char **)&arg4); /*0x76757a*/
      StringCSF = GetStringCSF((wchar_t *)v7, 0, g_Str_File_WDTGameOptions_cpp, 78); /*0x76758c*/
      v8 = ConcatWString((wchar_t **)&v12, (const wchar_t **)v6, (const wchar_t **)&a3); /*0x767599*/
      WideString::AssignConcat((const wchar_t **)v8, a1, StringCSF); /*0x7675a0*/
      DeleteAndZero::Alt((void **)&v12); /*0x7675a9*/
      DeleteAndZero::Alt((void **)&a3); /*0x7675b2*/
      DeleteAndZero((void **)&arg4); /*0x7675bb*/
    }
    else
    {
      v9 = String::GetOrEmpty((char **)&arg4); /*0x7675d3*/
      v10 = GetStringCSF((wchar_t *)v9, 0, g_Str_File_WDTGameOptions_cpp, 81); /*0x7675dc*/
      WideString::Assign(a1, (CampaignScore *)v10); /*0x7675e8*/
      DeleteAndZero((void **)&arg4); /*0x7675f1*/
    }
    return a1; /*0x7675c0*/
  }
  else
  {
    WideString::AssignFromPtr(a1, a3); /*0x76753c*/
    DeleteAndZero((void **)&arg4); /*0x767545*/
    return a1; /*0x76754a*/
  }
}


// ==== 0x00767600  sub_767600  this=-  sig=csp ====
int __stdcall sub_767600(int a1)
{
  return 0; /*0x767602*/
}


// ==== 0x007676F0  rc_ptr::System_Init_7676F0  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall System_Init_7676F0(rc_ptr_base *a1, int a2)
{
  _DWORD *v4; // eax
  int v5; // edi

  v4 = (_DWORD *)__2_YAPAXI_Z(0xCu); /*0x7676f8*/
  if ( v4 ) /*0x767702*/
  {
    v4[2] = a2; /*0x767704*/
    v4[1] = 0; /*0x767707*/
    *v4 = &vt_WorldDominationTour_MapSizeGameOption; /*0x76770e*/
    v5 = (int)v4; /*0x767714*/
  }
  else
  {
    v5 = 0; /*0x767718*/
  }
  ComPtr::Constructor(a1); /*0x76771c*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption; /*0x767723*/
  ComPtr::Set(a1, v5); /*0x76772a*/
  return (rc_ptr *)a1; /*0x767731*/
}


// ==== 0x00767740  MapSizeGameOption_WorldDominationTour::Read  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
wchar_t **__thiscall MapSizeGameOption_WorldDominationTour::Read(MapSizeGameOption_WorldDominationTour *this)
{
  GameSetup *v3; // edi
  wchar_t **v2; // eax
  wchar_t *v4; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  void *v6; // [esp+8h] [ebp-4h] BYREF
  wchar_t **v7; // [esp+10h] [ebp+4h]
  int v8; // [esp+14h] [ebp+8h]
  wchar_t *v9; // [esp+18h] [ebp+Ch] BYREF

  v3 = (GameSetup *)v9; /*0x767743*/
  if ( WideString::Length((const wchar_t **)v9) ) /*0x767749*/
  {
    WideString::Assign(&v9, (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x76775b*/
    StringCSF = GetStringCSF( /*0x767788*/
                  (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(v8 + 4) + 18)],
                  0,
                  g_Str_File_WDTGameOptions_cpp,
                  129);
    v2 = ConcatWString((wchar_t **)&v6, (const wchar_t **)v3, (const wchar_t **)&v9); /*0x767795*/
    WideString::AssignConcat((const wchar_t **)v2, v7, StringCSF); /*0x76779c*/
    DeleteAndZero::Alt(&v6); /*0x7677a5*/
    DeleteAndZero::Alt((void **)&v9); /*0x7677ae*/
  }
  else
  {
    v4 = GetStringCSF( /*0x7677da*/
           (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(v8 + 4) + 19)],
           0,
           g_Str_File_WDTGameOptions_cpp,
           131);
    WideString::Assign(v7, (CampaignScore *)v4); /*0x7677e6*/
  }
  return v7; /*0x7677b5*/
}


// ==== 0x00767800  MapSizeGameOption_WorldDominationTour::ddtor  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
int __thiscall MapSizeGameOption_WorldDominationTour::ddtor(MapSizeGameOption_WorldDominationTour *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return dword_848628[4 * *(unsigned __int8 *)(*(_DWORD *)(v2 + 4) + 18) /*0x76781b*/
                    + *(unsigned __int8 *)(*(_DWORD *)(v2 + 4) + 19)];
}


// ==== 0x00767820  GameOption@WorldDominationTour::ConstructorWDTFlagOption_Create  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall ConstructorWDTFlagOption_Create(
        GameOption_WorldDominationTour *this,
        int arg0,
        void *a2,
        int arg8,
        void *a4,
        ObjectClass *aP5)
{
  ObjectClass *v6; // edx
  ObjectClass *v8; // ecx

  v6 = aP5; /*0x767824*/
  v8 = (ObjectClass *)arg8; /*0x76782b*/
  *((_DWORD *)this + 2) = arg0; /*0x76782f*/
  this->q00C = v8; /*0x767836*/
  this->GameOption_WorldDominationTour_field_0x04 = 0; /*0x76783d*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767844*/
  this->q010 = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a2); /*0x76785a*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::FlagGameOption::`vftable'; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}


// ==== 0x00767880  FlagGameOption_WorldDominationTour::coUninitialize  this=FlagGameOption@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::coUninitialize(GameOption_WorldDominationTour *this, char a2)
{
  DeleteAndZero((void **)this + 6); /*0x767886*/
  DeleteAndZero((void **)this + 5); /*0x76788e*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767895*/
  ReferenceCounted::Constructor(this); /*0x76789b*/
  if ( (a2 & 1) != 0 ) /*0x7678a5*/
    __3_YAXPAX_Z(this); /*0x7678a8*/
  return (void **)this; /*0x7678b2*/
}


// ==== 0x007678C0  MapSizeGameOption_WorldDominationTour::QueryInterface  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
_DWORD *__thiscall MapSizeGameOption_WorldDominationTour::QueryInterface(GameOption_WorldDominationTour *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x7678c3*/
  ReferenceCounted::Constructor(this); /*0x7678c9*/
  if ( (a2 & 1) != 0 ) /*0x7678d3*/
    __3_YAXPAX_Z(this); /*0x7678d6*/
  return this->__pad_0; /*0x7678e0*/
}


// ==== 0x007678F0  sub_7678F0  this=-  sig=ida-proto ====
int sub_7678F0()
{
  dword_B72818 = 0; /*0x7678f2*/
  dword_B7281C = 0; /*0x7678f7*/
  dword_B72820 = 0; /*0x7678fc*/
  dword_B72824 = 0; /*0x767901*/
  return 0; /*0x767906*/
}


// ==== 0x00767910  sub_767910  this=-  sig=ida-proto ====
void sub_767910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76791c*/
  dbl_B72830 = Math::Sqrt(v0 + v0); /*0x76792e*/
}


// ==== 0x00767940  sub_767940  this=-  sig=ida-proto ====
void sub_767940()
{
  dbl_B72880 = dbl_B72830 / 60.0; /*0x76794c*/
}


// ==== 0x00767960  sub_767960  this=-  sig=ida-proto ====
void sub_767960()
{
  dbl_B72868 = 1.0 / dbl_B72880; /*0x76796c*/
}


// ==== 0x00767980  sub_767980  this=-  sig=ida-proto ====
void sub_767980()
{
  dbl_B72860 = 0.0174532925199433 * 45.0; /*0x76798c*/
}


// ==== 0x007679A0  sub_7679A0  this=-  sig=ida-proto ====
void sub_7679A0()
{
  dbl_B72838 = 0.0174532925199433 * 60.0; /*0x7679ac*/
}


// ==== 0x007679C0  sub_7679C0  this=-  sig=ida-proto ====
void sub_7679C0()
{
  dbl_B72810 = 0.0174532925199433 * 90.0; /*0x7679cc*/
}


// ==== 0x007679E0  sub_7679E0  this=-  sig=ida-proto ====
__int64 sub_7679E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72810 - dbl_B72838); /*0x7679f2*/
  result = Math::RoundToInt(v0 * dbl_B72830 * 0.5); /*0x767a06*/
  dword_B72888 = result; /*0x767a0b*/
  return result; /*0x767a10*/
}


// ==== 0x00767A20  sub_767A20  this=-  sig=ida-proto ====
void sub_767A20()
{
  dbl_B72840 = Math::ArcTan((double)dword_B72888 * 0.00390625); /*0x767a37*/
}


// ==== 0x00767A50  sub_767A50  this=-  sig=ida-proto ====
void sub_767A50()
{
  dbl_B72858 = Math::ArcTan((double)(2 * dword_B72888) / dbl_B72830); /*0x767a72*/
}


// ==== 0x00767A80  sub_767A80  this=-  sig=ida-proto ====
__int64 sub_767A80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72888) + 0.5); /*0x767a9b*/
  dword_B7287C = result; /*0x767aa0*/
  return result; /*0x767aa6*/
}


// ==== 0x00767AB0  sub_767AB0  this=-  sig=ida-proto ====
int sub_767AB0()
{
  word_B72828 = 0; /*0x767ab2*/
  word_B7282A = 0; /*0x767ab8*/
  return 0; /*0x767abe*/
}


// ==== 0x00767AC0  sub_767AC0  this=-  sig=ida-proto ====
int sub_767AC0()
{
  dword_B72848 = 0; /*0x767ac2*/
  dword_B7284C = 0; /*0x767ac7*/
  dword_B72850 = 0; /*0x767acc*/
  return 0; /*0x767ad1*/
}


// ==== 0x00767AE0  sub_767AE0  this=-  sig=ida-proto ====
int sub_767AE0()
{
  dword_B72878 = 0; /*0x767ae5*/
  dword_B72870 = 128; /*0x767aef*/
  dword_B72874 = 128; /*0x767af4*/
  return 128; /*0x767af9*/
}


// ==== 0x00767B00  Team_Create_767B00  this=-  sig=csp ====
rc_ptr_base *__fastcall Team_Create_767B00(rc_ptr_base *a1, int a2)
{
  rc_ptr_base *v4; // eax
  rc_ptr_base *v5; // esi
  rc_ptr_base *v6; // edi

  v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u); /*0x767b09*/
  v5 = v4; /*0x767b0e*/
  if ( v4 ) /*0x767b15*/
  {
    v6 = v4 + 2; /*0x767b18*/
    v4[1].vfptr = 0; /*0x767b1d*/
    v4->vfptr = &vt_ReferenceCounted; /*0x767b24*/
    ComPtr::Constructor(v4 + 2); /*0x767b2a*/
    v6->vfptr = &vt_rc_ptr_WDTState; /*0x767b2f*/
    ComPtr::Set(v5 + 2, *(_DWORD *)(a2 + 4)); /*0x767b3b*/
    v5->vfptr = &vt_WorldDominationTour_History; /*0x767b40*/
  }
  else
  {
    v5 = 0; /*0x767b49*/
  }
  ComPtr::Constructor(a1); /*0x767b4d*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_History; /*0x767b54*/
  ComPtr::Set(a1, (int)v5); /*0x767b5c*/
  return a1; /*0x767b63*/
}


// ==== 0x00767BB0  ActivateScreenWDT  this=rc_ptr_base  sig=csp ====
int __stdcall WDT_ActivateScreen(int a1, int a2)
{
  ActivateScreenWDT_Create(a2); /*0x767bbf*/
  return a1; /*0x767bc6*/
}


// ==== 0x00767C10  History_WorldDominationTour::QueryInterface  this=History@WorldDominationTour  sig=csp ====
_DWORD *__thiscall History_WorldDominationTour::QueryInterface(History_WorldDominationTour *this, char a2)
{
  rc_ptr_base *v3; // ecx

  v3 = (rc_ptr_base *)(this + 2); /*0x767c13*/
  this->vfptr = &vt_WorldDominationTour_History; /*0x767c16*/
  v3->vfptr = &vt_rc_ptr_WDTState; /*0x767c1c*/
  ComPtr::Release(v3); /*0x767c22*/
  ReferenceCounted::Constructor(this); /*0x767c29*/
  if ( (a2 & 1) != 0 ) /*0x767c33*/
    __3_YAXPAX_Z(this); /*0x767c36*/
  return &this->vfptr; /*0x767c40*/
}


// ==== 0x00767C50  COMClass::marshalInterface  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall COMClass::marshalInterface(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WDTState; /*0x767c53*/
  ComPtr::Release(Block); /*0x767c59*/
  if ( (a2 & 1) != 0 ) /*0x767c63*/
    __3_YAXPAX_Z(Block); /*0x767c66*/
  return (rc_ptr *)Block; /*0x767c70*/
}


// ==== 0x00767C80  sub_767C80  this=-  sig=ida-proto ====
int sub_767C80()
{
  dword_B72898 = 0; /*0x767c82*/
  dword_B7289C = 0; /*0x767c87*/
  dword_B728A0 = 0; /*0x767c8c*/
  dword_B728A4 = 0; /*0x767c91*/
  return 0; /*0x767c96*/
}


// ==== 0x00767CA0  sub_767CA0  this=-  sig=ida-proto ====
void sub_767CA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x767cac*/
  dbl_B728B0 = Math::Sqrt(v0 + v0); /*0x767cbe*/
}


// ==== 0x00767CD0  sub_767CD0  this=-  sig=ida-proto ====
void sub_767CD0()
{
  dbl_B72900 = dbl_B728B0 / 60.0; /*0x767cdc*/
}


// ==== 0x00767CF0  sub_767CF0  this=-  sig=ida-proto ====
void sub_767CF0()
{
  dbl_B728E8 = 1.0 / dbl_B72900; /*0x767cfc*/
}


// ==== 0x00767D10  sub_767D10  this=-  sig=ida-proto ====
void sub_767D10()
{
  dbl_B728E0 = 0.0174532925199433 * 45.0; /*0x767d1c*/
}


// ==== 0x00767D30  sub_767D30  this=-  sig=ida-proto ====
void sub_767D30()
{
  dbl_B728B8 = 0.0174532925199433 * 60.0; /*0x767d3c*/
}


// ==== 0x00767D50  sub_767D50  this=-  sig=ida-proto ====
void sub_767D50()
{
  dbl_B72890 = 0.0174532925199433 * 90.0; /*0x767d5c*/
}


// ==== 0x00767D70  sub_767D70  this=-  sig=ida-proto ====
__int64 sub_767D70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72890 - dbl_B728B8); /*0x767d82*/
  result = Math::RoundToInt(v0 * dbl_B728B0 * 0.5); /*0x767d96*/
  dword_B72908 = result; /*0x767d9b*/
  return result; /*0x767da0*/
}


// ==== 0x00767DB0  sub_767DB0  this=-  sig=ida-proto ====
void sub_767DB0()
{
  dbl_B728C0 = Math::ArcTan((double)dword_B72908 * 0.00390625); /*0x767dc7*/
}


// ==== 0x00767DE0  sub_767DE0  this=-  sig=ida-proto ====
void sub_767DE0()
{
  dbl_B728D8 = Math::ArcTan((double)(2 * dword_B72908) / dbl_B728B0); /*0x767e02*/
}


// ==== 0x00767E10  sub_767E10  this=-  sig=ida-proto ====
__int64 sub_767E10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72908) + 0.5); /*0x767e2b*/
  dword_B728FC = result; /*0x767e30*/
  return result; /*0x767e36*/
}


// ==== 0x00767E40  sub_767E40  this=-  sig=ida-proto ====
int sub_767E40()
{
  word_B728A8 = 0; /*0x767e42*/
  word_B728AA = 0; /*0x767e48*/
  return 0; /*0x767e4e*/
}


// ==== 0x00767E50  sub_767E50  this=-  sig=ida-proto ====
int sub_767E50()
{
  dword_B728C8 = 0; /*0x767e52*/
  dword_B728CC = 0; /*0x767e57*/
  dword_B728D0 = 0; /*0x767e5c*/
  return 0; /*0x767e61*/
}


// ==== 0x00767E70  sub_767E70  this=-  sig=ida-proto ====
int sub_767E70()
{
  dword_B728F8 = 0; /*0x767e75*/
  dword_B728F0 = 128; /*0x767e7f*/
  dword_B728F4 = 128; /*0x767e84*/
  return 128; /*0x767e89*/
}


// ==== 0x00767E90  MSFrameAnim::method_767E90  this=MSFrameAnim  sig=csp ====
_DWORD *__thiscall sub_767E90(_DWORD *this)
{
  this->MSFrameAnim_field_0x4 = 0; /*0x767e99*/
  this->MSFrameAnim_field_0x8 = 0; /*0x767e9c*/
  this->MSFrameAnim_field_0xC = 0; /*0x767e9f*/
  this->MSFrameAnim_field_0x10 = Timer::GetTicks(); /*0x767ea7*/
  this->MSFrameAnim_field_0x18 = 0; /*0x767eaa*/
  *this = &vt_MSFrameAnim; /*0x767ead*/
  return this; /*0x767eb5*/
}


// ==== 0x00767EC0  MSFrameAnim::method_767EC0  this=MSFrameAnim  sig=csp ====
void __thiscall sub_767EC0(_DWORD *this)
{
  *this = &vt_MSFrameAnim; /*0x767ec0*/
  VtableStub::5CB6C0(this); /*0x767ec6*/
}


// ==== 0x00767ED0  MSFrameAnim::Load  this=MSFrameAnim  sig=csp ====
char __stdcall MSFrameAnim::_vt04(int a1, int *a2)
{
  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen(a1, a2, 1); /*0x767ee3*/
  return 0; /*0x767eea*/
}


// ==== 0x00767EF0  MSFrameAnim::Draw  this=MSFrameAnim  sig=csp ====
void __stdcall MSFrameAnim::_vt05(int a1, int *a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  if ( byte_8487BD ) /*0x767efc*/
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x767f0d*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x767f0f*/
    if ( a2 ) /*0x767f1b*/
    {
      v4 = a2[1]; /*0x767f1f*/
      v7 = *a2; /*0x767f22*/
      v5 = a2[2]; /*0x767f26*/
      v6 = a2[3]; /*0x767f29*/
      v8 = v4; /*0x767f2c*/
      v10 = v6; /*0x767f30*/
      v9 = v5; /*0x767f3c*/
    }
    else
    {
      v7 = 0; /*0x767f55*/
      v8 = 0; /*0x767f5d*/
      v9 = v2; /*0x767f65*/
      v10 = v3; /*0x767f69*/
    }
    RenderScoreScreen(a1, &v7, 1); /*0x767f40*/
  }
}


// ==== 0x00767F80  MSFrameAnim::UpdateFrame  this=MSFrameAnim  sig=csp ====
_DWORD *__stdcall MSFrameAnim::_vt06(_DWORD *a1)
{
  *a1 = 0; /*0x767f8c*/
  a1[1] = 0; /*0x767f99*/
  a1[2] = 640; /*0x767f9c*/
  a1[3] = 480; /*0x767f9f*/
  return a1; /*0x767fa2*/
}


// ==== 0x00767FB0  rc_ptr::ConstructWDTSelection_Create_767FB0  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall ConstructWDTSelection_Create_767FB0(rc_ptr_base *a1, int a2, int a3, ReferenceCounted *aP3)
{
  void *v6; // eax
  ReferenceCounted *v7; // edi

  v6 = (void *)__2_YAPAXI_Z(0xD4u); /*0x767fbb*/
  if ( v6 ) /*0x767fc5*/
    v7 = (ReferenceCounted *)ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, aP3); /*0x767fd9*/
  else
    v7 = 0; /*0x767fdd*/
  ComPtr::Constructor(a1); /*0x767fe1*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_Map; /*0x767fe8*/
  ComPtr::Set(a1, (int)v7); /*0x767fef*/
  return (rc_ptr *)a1; /*0x767ff6*/
}


// ==== 0x00768000  ReferenceCounted::ConstructWDTSelection_Create_767FB0_Create  this=ReferenceCounted  sig=csp ====
void *__thiscall ConstructWDTSelection_Create_767FB0_Create(void *this, int a2, int a3, ReferenceCounted *aP3)
{
  this->__pad_00C = a3; /*0x768013*/
  this->q004 = 0; /*0x76801e*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x768021*/
  this->q008 = a2; /*0x768027*/
  this->q004 = aP3; /*0x76802a*/
  this->q014 = 0; /*0x76802d*/
  this->q018 = 0; /*0x768030*/
  this->q01C = 0; /*0x768033*/
  this->q008 = 0; /*0x768036*/
  this->q024 = 0; /*0x768039*/
  String::Assign((char **)this + 10, &stru_87C374.__pad_579C[33876]); /*0x76803c*/
  ConstructWDTSelection_Create_767FB0_Create_Create((_DWORD *)this + 11, 0, 0); /*0x768048*/
  this->q02C = &DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x768052*/
  this->q010 = 10; /*0x768058*/
  *((_DWORD *)this + 15) = 0; /*0x76805b*/
  this->q044 = 0; /*0x76805e*/
  this->q048 = 0; /*0x768061*/
  this->q064 = 0; /*0x768064*/
  this->__pad_068 = 0; /*0x768067*/
  this->q06C = 0; /*0x76806a*/
  this->q01C = 0; /*0x76806d*/
  this->__pad_074 = 0; /*0x768070*/
  this->q078 = 0; /*0x768073*/
  this->q030 = 0; /*0x768076*/
  this->q0C4 = 0; /*0x76807c*/
  this->__pad_0C8 = 1; /*0x768082*/
  *((_BYTE *)this + 201) = 0; /*0x768089*/
  *((_DWORD *)this + 47) = &DynamicVectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76808f*/
  this->q034 = 10; /*0x768099*/
  this->q0CC = 0; /*0x76809f*/
  *(_DWORD *)this = &WorldDominationTour::Map::`vftable'; /*0x7680a5*/
  return this; /*0x7680ad*/
}


// ==== 0x007680C0  WorldDomination::SetupTerritoryNodes  this=Map@WorldDominationTour  sig=csp ====
void __thiscall WorldDomination::SetupTerritoryNodes(Map_WorldDominationTour *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int i; // ebp
  SessionClass *v5; // edi
  void (__thiscall ***MPGameMode)(void *, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  CCINIClass *v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9); /*0x7680c6*/
  *this = (Map_WorldDominationTour)&WorldDominationTour::Map::`vftable'; /*0x7680c9*/
  if ( v2 ) /*0x7680d1*/
    (**v2)(v2, 1); /*0x7680d7*/
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7680d9*/
  if ( v3 ) /*0x7680de*/
    (**v3)(v3, 1); /*0x7680e4*/
  for ( i = 0; i < *((_DWORD *)this + 51); ++i ) /*0x7680f1*/
  {
    v5 = *(SessionClass **)(this->q0C0 + 4 * i); /*0x7680fa*/
    if ( v5 ) /*0x7680ff*/
    {
      MPGameMode = (void (__thiscall ***)(void *, int))v5->MPGameMode; /*0x768101*/
      if ( MPGameMode ) /*0x768106*/
        (**MPGameMode)(MPGameMode, 1); /*0x76810c*/
      DeleteAndZero((void **)v5); /*0x768110*/
      __3_YAXPAX_Z(v5); /*0x768116*/
    }
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x886FA0].__pad_2B8[184] + 24))( /*0x768133*/
    *(_DWORD *)&MEMORY[0x886FA0].__pad_2B8[184],
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x886FA0].__pad_2B8[180] + 24))( /*0x76813f*/
    *(_DWORD *)&MEMORY[0x886FA0].__pad_2B8[180],
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&MEMORY[0x886FA0].__pad_2B8[176] + 4))( /*0x768154*/
    *(_DWORD *)&MEMORY[0x886FA0].__pad_2B8[176],
    *(_DWORD *)&MEMORY[0x886FA0].__pad_2B8[180],
    0,
    1);
  v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 30); /*0x768157*/
  if ( v7 ) /*0x76815d*/
    (**v7)(v7, 1); /*0x768163*/
  v8 = (CCINIClass *)this->q0C0; /*0x768165*/
  *((_DWORD *)this + 47) = &vt_VectorClass_WorldDominationTour_Map_AnimationPalette; /*0x76816b*/
  if ( v8 && *((_BYTE *)this + 201) ) /*0x768179*/
  {
    __3_YAXPAX_Z(v8); /*0x768182*/
    this->q0C0 = 0; /*0x76818a*/
  }
  *((_BYTE *)this + 201) = 0; /*0x768190*/
  *((_DWORD *)this + 49) = 0; /*0x768196*/
  v9 = (void (__thiscall ***)(_DWORD, int))this->q0C0; /*0x76819c*/
  *((_DWORD *)this + 11) = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76819f*/
  if ( v9 && *((_BYTE *)this + 57) ) /*0x7681aa*/
  {
    (**v9)(v9, 3); /*0x7681b7*/
    this->q0C0 = 0; /*0x7681b9*/
  }
  *((_BYTE *)this + 57) = 0; /*0x7681bf*/
  *((_DWORD *)this + 13) = 0; /*0x7681c2*/
  DeleteAndZero((void **)this + 10); /*0x7681c5*/
  ReferenceCounted::Constructor(this); /*0x7681cc*/
}


// ==== 0x00768F50  ArtConfig::ParseLayoutEntry  this=HashTable  sig=csp ====
int __thiscall ArtConfig::ParseLayoutEntry(_DWORD *this, _DWORD *a1, ObjectClass *aP2, char **a3, int a5)
{
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  MSShapeAnim *v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  char *v17; // ebp
  CCFileClass *v18; // eax
  void *eax12; // eax
  MSShapeAnim *v19; // esi
  char *v22; // [esp+10h] [ebp-88h] BYREF
  char *a3a; // [esp+14h] [ebp-84h] BYREF
  char v24; // [esp+1Bh] [ebp-7Dh]
  int v25; // [esp+1Ch] [ebp-7Ch] BYREF
  int v26; // [esp+20h] [ebp-78h] BYREF
  int v27; // [esp+24h] [ebp-74h] BYREF
  int v28; // [esp+28h] [ebp-70h] BYREF
  _DWORD v29[22]; // [esp+2Ch] [ebp-6Ch] BYREF
  _BYTE v30[12]; // [esp+84h] [ebp-14h] BYREF
  int v31; // [esp+90h] [ebp-8h]

  unknown_libname_73(&v22); /*0x768f60*/
  String::Assign(&a3a, 0); /*0x768f6b*/
  v6 = (int)INIClass::ReadString((ObjectClass *)a1, aP2, (ObjectClass *)a3, (ReferenceCounted *)&a3a, (int)&v22) > 0; /*0x768f9c*/
  DeleteAndZero((void **)&a3a); /*0x768f9f*/
  if ( !v6 ) /*0x768fa6*/
    goto LABEL_17; /*0x768fa6*/
  unknown_libname_73(&v27); /*0x768fb0*/
  unknown_libname_73(&a3a); /*0x768fb9*/
  unknown_libname_73(&v28); /*0x768fc2*/
  unknown_libname_73(&v25); /*0x768fcb*/
  unknown_libname_73(&v26); /*0x768fd4*/
  v7 = String::Tokenize((const char **)&v22, 0, &MEMORY[0x817F70], (ObjectClass *)&v27); /*0x768fe9*/
  v8 = String::Tokenize((const char **)&v22, v7, &MEMORY[0x817F70], (ObjectClass *)&a3a); /*0x768ffd*/
  v9 = String::Tokenize((const char **)&v22, v8, &MEMORY[0x817F70], (ObjectClass *)&v28); /*0x769011*/
  v10 = String::Tokenize((const char **)&v22, v9, &MEMORY[0x817F70], (ObjectClass *)&v25); /*0x769025*/
  String::Tokenize((const char **)&v22, v10, &MEMORY[0x817F70], (ObjectClass *)&v26); /*0x769039*/
  if ( !String::NotEquals((const char **)&v28, 0) ) /*0x769044*/
    goto LABEL_16; /*0x769044*/
  __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3a); /*0x769055*/
  v12 = (MSShapeAnim *)(this->HashTable_field_0x44 + v11); /*0x769063*/
  __1_Timevec_std__QAE_XZ((std::_Timevec *)&v28); /*0x769065*/
  v14 = this->HashTable_field_0x48 + v13; /*0x76906f*/
  v15 = 5; /*0x769077*/
  if ( String::NotEquals((const char **)&v25, 0) && String::Length((const char **)&v25) ) /*0x769089*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v25); /*0x769096*/
    v15 = v16; /*0x76909b*/
  }
  if ( !String::NotEquals((const char **)&v26, 0) /*0x7690c9*/
    || !String::Length((const char **)&v26)
    || (v17 = ArtConfig::saveConfig((int)this, (ObjectClass *)&v26)) == 0 )
  {
    v17 = (char *)a5; /*0x7690cb*/
  }
  v18 = CCFileClass::Construct2(v29, (char **)&v27); /*0x7690db*/
  v24 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v18->__pad_0 + 20))(v18, 0); /*0x7690f0*/
  v29[0] = &vt_CCFileClass; /*0x7690f4*/
  v31 = 0; /*0x7690fc*/
  Vector::Clear((int)v30); /*0x769107*/
  v29[0] = &off_7E1668; /*0x769110*/
  BufferIOFileClass::Dtor(v29); /*0x769118*/
  if ( !v24 || !v17 ) /*0x769127*/
  {
LABEL_16:
    DeleteAndZero((void **)&v26); /*0x76919a*/
    DeleteAndZero((void **)&v25); /*0x7691a3*/
    DeleteAndZero((void **)&v28); /*0x7691ac*/
    DeleteAndZero((void **)&a3a); /*0x7691b5*/
    DeleteAndZero((void **)&v27); /*0x7691be*/
LABEL_17:
    DeleteAndZero((void **)&v22); /*0x7691c3*/
    return 0; /*0x7691cf*/
  }
  eax12 = (void *)__2_YAPAXI_Z(0x40u); /*0x76912b*/
  if ( eax12 ) /*0x769135*/
    v19 = (MSShapeAnim *)MSShapeAnim::Constructor(eax12, (char **)&v27, (int)v12, v14, (int)v17, v15, 1, 0); /*0x76914b*/
  else
    v19 = 0; /*0x76914f*/
  DeleteAndZero((void **)&v26); /*0x769155*/
  DeleteAndZero((void **)&v25); /*0x76915e*/
  DeleteAndZero((void **)&v28); /*0x769167*/
  DeleteAndZero((void **)&a3a); /*0x769170*/
  DeleteAndZero((void **)&v27); /*0x769179*/
  DeleteAndZero((void **)&v22); /*0x769182*/
  return (int)v19->__pad_0; /*0x769189*/
}


// ==== 0x007691E0  ArtConfig::saveConfig  this=HashTable  sig=csp ====
char *__thiscall ArtConfig::saveConfig(int this, ObjectClass *aP1)
{
  int v3; // esi
  char *v4; // ebp
  ObjectClass *v5; // eax
  ObjectClass *v6; // esi
  ObjectClass *v7; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v3 = 0; /*0x7691e9*/
  if ( *(int *)(this + 204) <= 0 ) /*0x7691f3*/
  {
LABEL_4:
    v4 = (char *)PaletteClass::Load((const char **)aP1); /*0x769213*/
    if ( v4 ) /*0x76921f*/
    {
      v5 = (ObjectClass *)__2_YAPAXI_Z(8u); /*0x769223*/
      v6 = v5; /*0x769228*/
      if ( v5 ) /*0x76922f*/
      {
        String::AssignFromPtr((char **)v5, (const char **)aP1); /*0x769234*/
        *(_DWORD *)&v6->__pad_0[4] = v4; /*0x769239*/
        v7 = v6; /*0x76923c*/
      }
      else
      {
        v7 = 0; /*0x769252*/
      }
      v9 = *(_DWORD *)(this + 196); /*0x769254*/
      if ( *(_DWORD *)(this + 204) < v9 /*0x769285*/
        || (*(_BYTE *)(this + 201) || !v9)
        && (v10 = *(_DWORD *)(this + 208), v10 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 188) + 8))(this + 188, v9 + v10, 0) )
      {
        v11 = *(_DWORD *)(this + 204); /*0x76928c*/
        v12 = *(_DWORD *)(this + 192); /*0x76928f*/
        *(_DWORD *)(this + 204) = v11 + 1; /*0x769295*/
        *(_DWORD *)(v12 + 4 * v11) = v7; /*0x769298*/
      }
    }
    return v4; /*0x76929b*/
  }
  else
  {
    while ( !String::Compare(*(const char ***)(*(_DWORD *)(this + 192) + 4 * v3), (const char **)aP1) ) /*0x769206*/
    {
      if ( ++v3 >= *(_DWORD *)(this + 204) ) /*0x769211*/
        goto LABEL_4; /*0x769211*/
    }
    return *(char **)(*(_DWORD *)(*(_DWORD *)(this + 192) + 4 * v3) + 4); /*0x76924c*/
  }
}


// ==== 0x007692F0  ObjectClass::ConstructWDTSelection_Create_76EEB0_Create  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0_Create(int *this, ObjectClass *aP1, _DWORD *a2)
{
  MSVQAnim *result; // eax
  int v5; // ecx

  result = (MSVQAnim *)this->nextArrayIndex; /*0x7692f3*/
  if ( result ) /*0x7692f8*/
  {
    TerritorySelectWDT_Delete(a2, 0, 1, 0); /*0x769304*/
    result = (MSVQAnim *)MSEngine::ProcessEvents(aP1, (MSVQAnim *)this->nextArrayIndex, 300000); /*0x769316*/
  }
  v5 = this->referenceCount; /*0x76931b*/
  if ( v5 ) /*0x769321*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1); /*0x769327*/
  return (int)result->__pad_0; /*0x76931e*/
}


// ==== 0x00769330  Surface::PixelToIndex  this=ObjectClass  sig=csp ====
int __thiscall Surface_PixelToIndex(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  v3 = *a2 - *(_DWORD *)(this + 68); /*0x769342*/
  v4 = a2[1] - *(_DWORD *)(this + 72); /*0x769347*/
  v6 = v3; /*0x769349*/
  v7 = v4; /*0x76934f*/
  if ( v3 < 0 /*0x76937a*/
    || v6 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 124))(*(_DWORD *)(this + 36))
    || v7 < 0
    || v7 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 128))(*(_DWORD *)(this + 36)) )
  {
    return -1; /*0x769390*/
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 36) + 40))(*(_DWORD *)(this + 36), &v6); /*0x769386*/
  }
}


// ==== 0x007693A0  WDTSurface::ToggleState  this=WDTSurface  sig=csp ====
char __thiscall WDTSurface::ToggleState(int this, ObjectClass *aP1, ObjectClass *aP2)
{
  char result; // al
  int v5; // eax

  result = (char)aP2; /*0x7693a0*/
  if ( *(_BYTE *)(this + 116) != (_BYTE)aP2 ) /*0x7693aa*/
  {
    *(_BYTE *)(this + 116) = (_BYTE)aP2; /*0x7693ae*/
    if ( (_BYTE)aP2 && *(_BYTE *)(this + 104) ) /*0x7693b3*/
      v5 = *(_DWORD *)(this + 112); /*0x7693ba*/
    else
      v5 = *(_DWORD *)(this + 108); /*0x7693bf*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v5); /*0x7693c6*/
    Team::ReleaseAll((int *)aP1->__pad_0, (ObjectClass *)(this + 84)); /*0x7693d5*/
    return DSurface::Flip2(); /*0x7693dc*/
  }
  return result; /*0x7693e1*/
}


// ==== 0x007693F0  WDTGame::ToggleTeamMode  this=CampaignScore  sig=csp ====
char __thiscall WDTGame::ToggleTeamMode(int this, ObjectClass *aP1, ObjectClass *aP2)
{
  char result; // al
  char v5; // cl
  int v6; // eax

  result = (char)aP2; /*0x7693f0*/
  if ( *(_BYTE *)(this + 104) != (_BYTE)aP2 ) /*0x7693fa*/
  {
    v5 = *(_BYTE *)(this + 116); /*0x7693fc*/
    *(_BYTE *)(this + 104) = (_BYTE)aP2; /*0x7693ff*/
    if ( v5 && (_BYTE)aP2 ) /*0x769408*/
      v6 = *(_DWORD *)(this + 112); /*0x76940a*/
    else
      v6 = *(_DWORD *)(this + 108); /*0x76940f*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v6); /*0x769416*/
    Team::ReleaseAll((int *)aP1->__pad_0, (ObjectClass *)(this + 84)); /*0x769425*/
    return DSurface::Flip2(); /*0x76942c*/
  }
  return result; /*0x769431*/
}


// ==== 0x00769440  WDTSurface::PointInRect  this=WDTSurface  sig=csp ====
BOOL __thiscall WDTSurface::PointInRect(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  BOOL result; // eax

  v2 = this->q054; /*0x769440*/
  result = 0; /*0x769475*/
  if ( *a2 >= v2 && *a2 < v2 + this->q05C ) /*0x769457*/
  {
    v3 = a2[1]; /*0x769459*/
    v4 = this->q058; /*0x76945c*/
    if ( v3 >= v4 && v3 < v4 + this->q060 ) /*0x76946a*/
      return 1; /*0x76944c*/
  }
  return result; /*0x769471*/
}


// ==== 0x00769480  ObjectClass::unknown_libname_37  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
ObjectClass *__thiscall unknown_libname_37(_DWORD *this)
{
  *this = 0; /*0x769484*/
  this->vtable2 = 0; /*0x769486*/
  this->vtable3 = 0; /*0x769489*/
  return (ObjectClass *)this; /*0x76948c*/
}


// ==== 0x00769490  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_769490(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = this; /*0x769490*/
  v3 = this->vtable2; /*0x76949d*/
  *this += *a2; /*0x7694a0*/
  v4 = this->vtable3 + 1; /*0x7694aa*/
  result[1] = a2[1] + v3; /*0x7694ab*/
  result[2] = v4; /*0x7694ae*/
  return result; /*0x7694b1*/
}


// ==== 0x007694C0  ObjectClass::Map_Load_7694C0  this=CampaignClass  sig=csp ====
int *__thiscall sub_7694C0(int *this, int *a2)
{
  int v2; // esi
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v2 = this->vtable3; /*0x7694c6*/
  if ( v2 <= 0 ) /*0x7694cb*/
  {
    v4 = 0; /*0x7694e6*/
    v5 = 0; /*0x7694ea*/
  }
  else
  {
    v4 = *this / v2; /*0x7694d2*/
    v5 = this->vtable2 / v2; /*0x7694e0*/
  }
  *a2 = v4; /*0x7694fc*/
  a2[1] = v5; /*0x7694fe*/
  return a2; /*0x7694fb*/
}


// ==== 0x00769550  LoadWDTMapAsset  this=-  sig=ida-proto ====
int __fastcall WDTMap_LoadAsset(const char **a1, int a2)
{
  _DWORD *v3; // ebp
  void *v4; // eax
  void *v5; // esi
  void *v6; // eax
  void *v7; // esi
  void **v8; // eax
  int v9; // edx
  unsigned int v10; // ebp
  int v11; // esi
  char *v12; // eax
  char *v13; // edi
  int v14; // ecx
  int v15; // eax
  char *v16; // ebx
  _DWORD *v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // edx
  char *v21; // eax
  char *v22; // edi
  int v23; // ecx
  int v24; // eax
  char *v25; // ebx
  _DWORD *v26; // edx
  void **v27; // eax
  int *v28; // ecx
  int v29; // ebp
  int v30; // eax
  int v31; // esi
  int v32; // esi
  int v33; // edi
  int v34; // esi
  bool v35; // cc
  int v36; // edi
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // edi
  int v42; // esi
  char **v43; // eax
  _DWORD *v44; // eax
  int v45; // ecx
  char **v46; // eax
  char **v47; // eax
  int v49; // [esp+10h] [ebp-158h] BYREF
  int v50; // [esp+14h] [ebp-154h]
  void **v51; // [esp+18h] [ebp-150h] BYREF
  void *v52; // [esp+1Ch] [ebp-14Ch]
  int v53; // [esp+20h] [ebp-148h]
  int v54; // [esp+24h] [ebp-144h]
  void **v55; // [esp+28h] [ebp-140h] BYREF
  void *Block; // [esp+2Ch] [ebp-13Ch]
  unsigned int v57; // [esp+30h] [ebp-138h]
  int v58; // [esp+34h] [ebp-134h]
  _DWORD *v59; // [esp+38h] [ebp-130h] BYREF
  void **v60; // [esp+3Ch] [ebp-12Ch] BYREF
  void ***v61; // [esp+40h] [ebp-128h]
  int v62; // [esp+44h] [ebp-124h]
  int v63; // [esp+48h] [ebp-120h] BYREF
  unsigned int v64; // [esp+4Ch] [ebp-11Ch] BYREF
  int v65; // [esp+50h] [ebp-118h] BYREF
  void **v66; // [esp+54h] [ebp-114h] BYREF
  void ***v67; // [esp+58h] [ebp-110h]
  void *v68; // [esp+5Ch] [ebp-10Ch]
  void *v69; // [esp+60h] [ebp-108h] BYREF
  _DWORD v70[2]; // [esp+64h] [ebp-104h] BYREF
  int v71; // [esp+6Ch] [ebp-FCh]
  int v72; // [esp+70h] [ebp-F8h]
  const char **v73; // [esp+74h] [ebp-F4h]
  void *v74[3]; // [esp+78h] [ebp-F0h] BYREF
  void **v75; // [esp+84h] [ebp-E4h] BYREF
  _DWORD v76[6]; // [esp+A0h] [ebp-C8h] BYREF
  _DWORD v77[22]; // [esp+B8h] [ebp-B0h] BYREF
  _DWORD v78[22]; // [esp+110h] [ebp-58h] BYREF

  v73 = a1; /*0x769558*/
  BufferIOFile::Init(v77); /*0x769567*/
  CCFileClass::Reopen(v77, MEMORY[0x848BE4], 1); /*0x76957a*/
  v74[1] = 0; /*0x769588*/
  v74[2] = 0; /*0x76958c*/
  GenericList::Constructor(&v75); /*0x769593*/
  v75 = &vt_List_INIClass_INISection; /*0x76959f*/
  Node::Init(v76); /*0x7695aa*/
  v76[5] = 0; /*0x7695bc*/
  v74[0] = &vt_INIClass; /*0x7695c3*/
  FileStraw::Open(v74, (int)v77, 0); /*0x7695ce*/
  CCFileClass::Close(v77); /*0x7695da*/
  sub_47AA00(a2); /*0x7695e7*/
  v3 = DecodeFrameSHP((int)v78, 0, 0, 0); /*0x7695fc*/
  v59 = v3; /*0x769600*/
  v63 = (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3); /*0x76960d*/
  v65 = (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3); /*0x76961e*/
  v52 = 0; /*0x769627*/
  v53 = 30; /*0x76962b*/
  LOWORD(v54) = 1; /*0x76962f*/
  v51 = &vt_VectorClass_TRect_int; /*0x769638*/
  v4 = __2_YAPAXI_Z(0x1E0u); /*0x769640*/
  v5 = v4; /*0x769645*/
  if ( v4 ) /*0x76964c*/
    Array::ForEach((int)v4, 16, 30, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769657*/
  else
    v5 = 0; /*0x76965e*/
  v52 = v5; /*0x769665*/
  BYTE1(v54) = 1; /*0x769669*/
  Block = 0; /*0x76966e*/
  v57 = 30; /*0x769672*/
  LOWORD(v58) = 1; /*0x769676*/
  v55 = &vt_VectorClass_WorldDominationTour_Centroid; /*0x76967f*/
  v6 = __2_YAPAXI_Z(0x168u); /*0x769687*/
  v7 = v6; /*0x76968c*/
  if ( v6 ) /*0x769693*/
    Array::ForEach((int)v6, 12, 30, (int (__thiscall *)(int))unknown_libname_37); /*0x76969e*/
  else
    v7 = 0; /*0x7696a5*/
  Block = v7; /*0x7696ab*/
  v61 = &v51; /*0x7696af*/
  BYTE1(v58) = 1; /*0x7696b7*/
  v62 = 0; /*0x7696bc*/
  v60 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x7696c0*/
  if ( (unsigned __int8)Map_WorldDominationTour_38::AddRef(&v60) ) /*0x7696c8*/
  {
    do /*0x769700*/
    {
      v8 = &v61[1][4 * v62]; /*0x7696e4*/
      *v8 = 0; /*0x7696e6*/
      v8[1] = 0; /*0x7696e8*/
      v8[2] = 0; /*0x7696eb*/
      v8[3] = 0; /*0x7696ee*/
      ((void (__thiscall *)(void ***))v60[2])(&v60); /*0x7696f5*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ); /*0x769700*/
  }
  v9 = 0; /*0x76970b*/
  v50 = 0; /*0x76970f*/
  if ( v63 > 0 ) /*0x769713*/
  {
    while ( 1 ) /*0x76971d*/
    {
      v49 = 0; /*0x76971d*/
      if ( v65 > 0 ) /*0x769723*/
        break; /*0x769723*/
LABEL_67:
      v50 = ++v9; /*0x769a2a*/
      if ( v9 >= v63 ) /*0x769a2e*/
        goto LABEL_68; /*0x769a2e*/
    }
    while ( 1 ) /*0x769736*/
    {
      v10 = (*(int (__thiscall **)(_DWORD *, int *))(*v3 + 40))(v3, &v49); /*0x769736*/
      v64 = v10; /*0x76973b*/
      if ( v10 <= 0x1D ) /*0x76973f*/
      {
        v11 = v10 + 1; /*0x769755*/
        if ( v57 < v10 + 1 ) /*0x76975a*/
        {
          LOBYTE(v58) = 0; /*0x76976b*/
          v12 = (char *)__2_YAPAXI_Z(12 * v11); /*0x769773*/
          v13 = v12; /*0x769778*/
          if ( v12 ) /*0x76977f*/
            Array::ForEach((int)v12, 12, v10 + 1, (int (__thiscall *)(int))unknown_libname_37); /*0x76978a*/
          else
            v13 = 0; /*0x769791*/
          LOBYTE(v58) = 1; /*0x769795*/
          if ( v13 ) /*0x76979a*/
          {
            if ( Block ) /*0x7697a0*/
            {
              v14 = v57; /*0x7697a2*/
              if ( v11 < (int)v57 ) /*0x7697a8*/
                v14 = v10 + 1; /*0x7697aa*/
              if ( v14 > 0 ) /*0x7697ae*/
              {
                v15 = 0; /*0x7697b0*/
                do /*0x7697cf*/
                {
                  v16 = &v13[v15]; /*0x7697b6*/
                  v17 = (char *)Block + v15; /*0x7697b9*/
                  v15 += 12; /*0x7697bb*/
                  --v14; /*0x7697be*/
                  *(_DWORD *)v16 = *v17; /*0x7697c1*/
                  *((_DWORD *)v16 + 1) = v17[1]; /*0x7697c6*/
                  *((_DWORD *)v16 + 2) = v17[2]; /*0x7697cc*/
                }
                while ( v14 ); /*0x7697cf*/
                v10 = v64; /*0x7697d1*/
              }
              if ( BYTE1(v58) ) /*0x7697db*/
                __3_YAXPAX_Z(Block); /*0x7697e2*/
            }
            Block = v13; /*0x7697ea*/
            v57 = v11; /*0x7697ee*/
            BYTE1(v58) = 1; /*0x7697f2*/
          }
        }
        v18 = (char *)Block + 12 * v10; /*0x769810*/
        v19 = v18[1]; /*0x769815*/
        v20 = v18[2]; /*0x76981a*/
        *v18 += v49; /*0x76981d*/
        v18[1] = v50 + v19; /*0x769826*/
        v18[2] = v20 + 1; /*0x769829*/
        if ( v53 < (unsigned int)v11 ) /*0x769832*/
        {
          v69 = (void *)v53; /*0x76983a*/
          if ( v11 ) /*0x76983e*/
          {
            LOBYTE(v54) = 0; /*0x769846*/
            v21 = (char *)__2_YAPAXI_Z(16 * v11); /*0x76984e*/
            v22 = v21; /*0x769853*/
            if ( v21 ) /*0x76985a*/
              Array::ForEach((int)v21, 16, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769865*/
            else
              v22 = 0; /*0x76986c*/
            LOBYTE(v54) = 1; /*0x769870*/
            if ( v22 ) /*0x769875*/
            {
              if ( v52 ) /*0x76987b*/
              {
                v23 = v53; /*0x76987d*/
                if ( v11 < v53 ) /*0x769883*/
                  v23 = v11; /*0x769885*/
                if ( v23 > 0 ) /*0x769889*/
                {
                  v24 = 0; /*0x76988b*/
                  do /*0x7698b0*/
                  {
                    v25 = &v22[v24]; /*0x769891*/
                    v26 = (char *)v52 + v24; /*0x769894*/
                    v24 += 16; /*0x769896*/
                    --v23; /*0x769899*/
                    *(_DWORD *)v25 = *v26; /*0x76989c*/
                    *((_DWORD *)v25 + 1) = v26[1]; /*0x7698a1*/
                    *((_DWORD *)v25 + 2) = v26[2]; /*0x7698a7*/
                    *((_DWORD *)v25 + 3) = v26[3]; /*0x7698ad*/
                  }
                  while ( v23 ); /*0x7698b0*/
                  v10 = v64; /*0x7698b2*/
                }
                if ( BYTE1(v54) ) /*0x7698bc*/
                  __3_YAXPAX_Z(v52); /*0x7698c3*/
              }
              v52 = v22; /*0x7698cb*/
              v53 = v11; /*0x7698cf*/
              BYTE1(v54) = 1; /*0x7698d3*/
            }
          }
          else
          {
            ((void (__thiscall *)(void ***))v51[3])(&v51); /*0x7698e2*/
          }
          v68 = v69; /*0x7698ed*/
          v67 = &v51; /*0x7698fa*/
          v66 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x7698fe*/
          if ( (unsigned __int8)Map_WorldDominationTour_38::AddRef(&v66) ) /*0x769902*/
          {
            do /*0x76993a*/
            {
              v27 = &v67[1][4 * (_DWORD)v68]; /*0x76991e*/
              *v27 = 0; /*0x769920*/
              v27[1] = 0; /*0x769922*/
              v27[2] = 0; /*0x769925*/
              v27[3] = 0; /*0x769928*/
              ((void (__thiscall *)(void ***))v66[2])(&v66); /*0x76992f*/
            }
            while ( ((unsigned __int8 (__thiscall *)(void ***))v66[1])(&v66) ); /*0x76993a*/
          }
          v66 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769941*/
        }
        v28 = (int *)((char *)v52 + 16 * v10); /*0x76994e*/
        v29 = v28[2]; /*0x769950*/
        if ( !v29 ) /*0x769955*/
          v28[3] = 0; /*0x769957*/
        v30 = v49; /*0x76995c*/
        v9 = v50; /*0x769960*/
        if ( v49 >= *v28 && v49 < v29 + *v28 ) /*0x76996c*/
        {
          v31 = v28[1]; /*0x76996e*/
          if ( v50 >= v31 && v50 < v31 + v28[3] ) /*0x76997c*/
            goto LABEL_66; /*0x76997c*/
        }
        v32 = 1; /*0x769982*/
        v33 = 1; /*0x769989*/
        if ( v29 > 0 && v28[3] > 0 ) /*0x769990*/
        {
          v34 = *v28; /*0x769994*/
          v35 = *v28 <= v49; /*0x769997*/
          v36 = v28[1]; /*0x769999*/
          v37 = v28[2]; /*0x76999c*/
          v71 = v37; /*0x76999f*/
          v72 = v28[3]; /*0x7699a6*/
          if ( !v35 ) /*0x7699aa*/
          {
            v37 += v34 - v49; /*0x7699ae*/
            v34 = v49; /*0x7699b0*/
            v71 = v37; /*0x7699b2*/
          }
          if ( v36 > v50 ) /*0x7699b8*/
          {
            v38 = v36 - v50 + v72; /*0x7699c0*/
            v36 = v50; /*0x7699c2*/
            v72 = v38; /*0x7699c4*/
          }
          if ( v34 + v37 < v49 + 1 ) /*0x7699cf*/
            v71 = v49 - v34 + 2; /*0x7699d6*/
          v39 = v72; /*0x7699da*/
          if ( v72 + v36 < v50 + 1 ) /*0x7699e6*/
            v39 = v50 - v36 + 2; /*0x7699ed*/
          v9 = v36; /*0x7699ef*/
          v30 = v34; /*0x7699f1*/
          v32 = v71; /*0x7699f3*/
          v33 = v39; /*0x7699f7*/
        }
        *v28 = v30; /*0x7699fb*/
        v28[1] = v9; /*0x7699fd*/
        v28[2] = v32; /*0x769a00*/
        v28[3] = v33; /*0x769a03*/
      }
      v9 = v50; /*0x769a06*/
      v30 = v49; /*0x769a0a*/
LABEL_66:
      v3 = v59; /*0x769a0e*/
      v49 = v30 + 1; /*0x769a19*/
      if ( v30 + 1 >= v65 ) /*0x769a1d*/
        goto LABEL_67; /*0x769a1d*/
    }
  }
LABEL_68:
  v40 = Map_Load_769D70(&v66, &v51); /*0x769a34*/
  Map_Load_769C20(v40); /*0x769a46*/
  v41 = 0; /*0x769a4f*/
  if ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ) /*0x769a55*/
  {
    v42 = 0; /*0x769a60*/
    do /*0x769b22*/
    {
      v43 = FormatStringInt((char **)&v69, v41, 2); /*0x769a6a*/
      ConcatStringAlloc((char **)&v59, v73, v43); /*0x769a78*/
      DeleteAndZero(&v69); /*0x769a81*/
      FromStringInt((char **)&v63, MEMORY[0x8A00A4]); /*0x769a90*/
      v44 = (_DWORD *)Map_Load_7694C0(&v66); /*0x769aa0*/
      v45 = v44[1]; /*0x769aa9*/
      v70[0] = *v44; /*0x769aac*/
      v70[1] = v45; /*0x769ab0*/
      v46 = String::Assign((char **)&v64, stru_848BDC); /*0x769acc*/
      v47 = String::Concat((const char **)v46, (char **)&v65, (char **)&v63); /*0x769ad3*/
      INIClass::GetInt(&v59, v47, v70); /*0x769ae2*/
      DeleteAndZero((void **)&v65); /*0x769aeb*/
      DeleteAndZero((void **)&v64); /*0x769af4*/
      ((void (__thiscall *)(void ***))v60[2])(&v60); /*0x769b01*/
      ++v41; /*0x769b08*/
      v42 += 12; /*0x769b09*/
      DeleteAndZero((void **)&v63); /*0x769b0c*/
      DeleteAndZero((void **)&v59); /*0x769b15*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ); /*0x769b22*/
  }
  CCFileClass::Reopen(v77, MEMORY[0x848BE4], 2); /*0x769b3b*/
  INIClass::SaveToPipe(v74, (int)v77); /*0x769b4c*/
  CCFileClass::Reopen(v77, aCodeWdtmapmdIn, 2); /*0x769b5f*/
  INIClass::SaveToPipe(v74, (int)v77); /*0x769b70*/
  v60 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769b79*/
  v55 = &vt_VectorClass_WorldDominationTour_Centroid; /*0x769b81*/
  Map_WorldDominationTour_43::ddtor(&v55); /*0x769b89*/
  v51 = &vt_VectorClass_TRect_int; /*0x769b92*/
  MSEngine::ddtor(&v51); /*0x769b9a*/
  BufferIOFileClass::Destruct(v78); /*0x769ba6*/
  HashTable::DestroyHashTableINIClass(v74); /*0x769baf*/
  return BufferIOFileClass::Destruct(v77); /*0x769bc0*/
}


// ==== 0x00769BD0  MSFrameAnim::QueryInterface  this=MSFrameAnim  sig=csp ====
MSFrameAnim *__thiscall MSFrameAnim::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_MSFrameAnim; /*0x769bd3*/
  VtableStub::5CB6C0(Block); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(Block); /*0x769be6*/
  return (MSFrameAnim *)Block; /*0x769bf0*/
}


// ==== 0x00769C00  Map_WorldDominationTour::QueryInterface  this=Map@WorldDominationTour  sig=csp ====
void *__thiscall Map_WorldDominationTour::QueryInterface(Map_WorldDominationTour *this, char a2)
{
  WorldDomination::SetupTerritoryNodes(this); /*0x769c03*/
  if ( (a2 & 1) != 0 ) /*0x769c0d*/
    __3_YAXPAX_Z(this); /*0x769c10*/
  return this; /*0x769c1a*/
}


// ==== 0x00769C20  ObjectClass::Map_Load_769C20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Map_Load_769C20(_DWORD *this, ObjectClass *aP1)
{
  this->vtable2 = *(_DWORD *)&aP1->__pad_0[4]; /*0x769c29*/
  this->vtable3 = *(_DWORD *)&aP1->__pad_0[8]; /*0x769c2f*/
  return this; /*0x769c32*/
}


// ==== 0x00769C40  ObjectClass::??0Iostream_init_QAE_XZ_9  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_9(Iostream_init *this)
{
  return this; /*0x769c42*/
}


// ==== 0x00769C50  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::initAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::sub_769C50(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x769c56*/
  *(_DWORD *)(this + 16) = 0; /*0x769c59*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x769c60*/
  {
    result = (**v2)(v2, 3); /*0x769c6d*/
    *(_DWORD *)(this + 4) = 0; /*0x769c6f*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x769c72*/
  *(_DWORD *)(this + 8) = 0; /*0x769c75*/
  return result; /*0x769c78*/
}


// ==== 0x00769C80  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::startAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::sub_769C80(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x769c80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x769c95*/
  else
    return 0; /*0x769c87*/
}


// ==== 0x00769CA0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edi

  v3 = this->Items + 8 * a3; /*0x769cad*/
  ComPtr::Constructor(a2); /*0x769cb2*/
  *a2 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x769cb7*/
  ComPtr::Set(a2, *(_DWORD *)(v3 + 4)); /*0x769cc3*/
  return a2; /*0x769cca*/
}


// ==== 0x00769CD0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::stopAnimation  this=DynamicVector  sig=csp ====
void __thiscall MSFrameAnim::sub_769CD0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x769cd6*/
  *(_DWORD *)(this + 16) = 0; /*0x769cd9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x769ce0*/
  {
    __3_YAXPAX_Z(v2); /*0x769ce6*/
    *(_DWORD *)(this + 4) = 0; /*0x769cee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x769cf1*/
  *(_DWORD *)(this + 8) = 0; /*0x769cf4*/
}


// ==== 0x00769D00  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::pauseAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::sub_769D00(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x769d00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x769d15*/
  else
    return 0; /*0x769d07*/
}


// ==== 0x00769D20  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x769d2a*/
}


// ==== 0x00769D30  _VectorClass_VCentroid_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_43_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 12 * a3); /*0x769d3b*/
  *a2 = *v3; /*0x769d46*/
  a2[1] = v3[1]; /*0x769d4b*/
  a2[2] = v3[2]; /*0x769d52*/
  return a2; /*0x769d4e*/
}


// ==== 0x00769D60  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Map_WorldDominationTour_38_::_vt01(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 8); /*0x769d6d*/
}


// ==== 0x00769D70  Map_Load_769D70  this=VectorCursor  sig=csp ====
_DWORD *__fastcall sub_769D70(_DWORD *a1, int a2)
{
  a1[1] = a2; /*0x769d72*/
  a1[2] = 0; /*0x769d75*/
  *a1 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769d7c*/
  return a1; /*0x769d82*/
}


// ==== 0x00769D90  MSFrameAnim::resumeAnimation  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall MSFrameAnim::resumeAnimation(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_WorldDominationTour_Map; /*0x769d93*/
  ComPtr::Release(Block); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(Block); /*0x769da6*/
  return (rc_ptr *)Block; /*0x769db0*/
}


// ==== 0x00769DC0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Constructor  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall Map_WorldDominationTour_20_::Constructor(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769dc9*/
  if ( (a2 & 1) != 0 ) /*0x769dcf*/
    __3_YAXPAX_Z(Block); /*0x769dd2*/
  return (VectorCursor *)Block; /*0x769ddc*/
}


// ==== 0x00769DE0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = this->Capacity; /*0x769de6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x769def*/
  {
    v3 = 0; /*0x769df1*/
    if ( v2 <= 0 ) /*0x769df5*/
      return 1; /*0x769e1b*/
    v4 = (_DWORD *)(this->Items + 4); /*0x769dfd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x769e00*/
    {
      ++v3; /*0x769e0b*/
      v4 += 2; /*0x769e0f*/
      if ( v3 >= v2 ) /*0x769e14*/
        return 1; /*0x769e14*/
    }
  }
  return 0; /*0x769e16*/
}


// ==== 0x00769E30  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20_::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x769e33*/
  if ( !a2 ) /*0x769e3d*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x769f3d*/
    return 1; /*0x769f43*/
  }
  this->IsInitialized = 0; /*0x769e47*/
  if ( a3 ) /*0x769e4d*/
  {
    *a3 = a2; /*0x769e93*/
    v6 = a3 + 1; /*0x769e95*/
    if ( a2 - 1 >= 0 ) /*0x769ea1*/
    {
      v9 = a2; /*0x769ea3*/
      do /*0x769eb7*/
      {
        ComPtr::Constructor(v6); /*0x769ea8*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x769ead*/
        v6 += 2; /*0x769eb3*/
        --v9; /*0x769eb6*/
      }
      while ( v9 ); /*0x769eb7*/
      v6 = a3 + 1; /*0x769eb9*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x769e57*/
    if ( !v5 ) /*0x769e61*/
    {
      v8 = 0; /*0x769e8f*/
      goto LABEL_14; /*0x769e91*/
    }
    *v5 = a2; /*0x769e63*/
    v6 = v5 + 1; /*0x769e65*/
    v13 = v5 + 1; /*0x769e6b*/
    if ( a2 - 1 >= 0 ) /*0x769e71*/
    {
      v7 = a2; /*0x769e73*/
      do /*0x769e87*/
      {
        ComPtr::Constructor(v6); /*0x769e78*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x769e7d*/
        v6 += 2; /*0x769e83*/
        --v7; /*0x769e86*/
      }
      while ( v7 ); /*0x769e87*/
      v6 = v13; /*0x769e89*/
    }
  }
  v8 = v6; /*0x769ebd*/
LABEL_14:
  this->IsInitialized = 1; /*0x769ebf*/
  if ( !v8 ) /*0x769ec5*/
    return 0; /*0x769eca*/
  if ( this->Items ) /*0x769ed1*/
  {
    if ( a2 >= this->Capacity ) /*0x769edd*/
      v3 = this->Capacity; /*0x769edf*/
    for ( i = 0; i < v3; ++i ) /*0x769ee5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x769ef2*/
    if ( this->IsAllocated ) /*0x769efc*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x769f03*/
      if ( v12 ) /*0x769f08*/
        (**v12)(v12, 3); /*0x769f0e*/
      this->Items = 0; /*0x769f10*/
    }
    v3 = a2; /*0x769f17*/
  }
  this->Items = v8; /*0x769f26*/
  this->Capacity = v3; /*0x769f29*/
  this->IsAllocated = a3 == 0; /*0x769f2c*/
  return 1; /*0x769ec7*/
}


// ==== 0x00769F50  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20_::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x769f56*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x769f5d*/
  {
    result = (**v2)(v2, 3); /*0x769f6a*/
    *(_DWORD *)(this + 4) = 0; /*0x769f6c*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x769f6f*/
  *(_DWORD *)(this + 8) = 0; /*0x769f72*/
  return result; /*0x769f75*/
}


// ==== 0x00769F80  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20_::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x769f80*/
    return 0; /*0x769f88*/
  v3 = *(_DWORD *)(this + 8); /*0x769f8e*/
  result = 0; /*0x769f91*/
  if ( v3 <= 0 ) /*0x769f95*/
    return -1; /*0x769fb0*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x769f9e*/
  {
    if ( ++result >= v3 ) /*0x769fae*/
      return -1; /*0x769fae*/
  }
  return result; /*0x769f8a*/
}


// ==== 0x00769FC0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_20_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x769fc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x769fd5*/
  else
    return 0; /*0x769fc7*/
}


// ==== 0x00769FE0  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setFrameRate  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::sub_769FE0(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
    this->IsInitialized = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      v8 = a3 + 1; /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ComPtr::Constructor(v8); /*0x76a056*/
          *v8 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a05b*/
          v8 += 2; /*0x76a061*/
          --v9; /*0x76a064*/
        }
        while ( v9 ); /*0x76a065*/
        v8 = a3 + 1; /*0x76a067*/
      }
      v6 = v8; /*0x76a06b*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = v5 + 1; /*0x76a015*/
        v7 = v5 + 1; /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          v14 = a2; /*0x76a022*/
          do /*0x76a039*/
          {
            MSFrameAnim::drawFrame(v7); /*0x76a028*/
            v7 += 2; /*0x76a031*/
            --v14; /*0x76a035*/
          }
          while ( v14 ); /*0x76a039*/
        }
      }
      else
      {
        v6 = 0; /*0x76a03d*/
      }
    }
    this->IsInitialized = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( this->Items ) /*0x76a075*/
    {
      if ( a2 >= this->DynamicVector_field_0x8 ) /*0x76a081*/
        v3 = this->DynamicVector_field_0x8; /*0x76a083*/
      for ( i = 0; i < v3; ++i ) /*0x76a089*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x76a096*/
      if ( this->IsAllocated ) /*0x76a0a0*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        this->Items = 0; /*0x76a0b4*/
      }
      v3 = a2; /*0x76a0bb*/
    }
    this->Items = v6; /*0x76a0ca*/
    this->DynamicVector_field_0x8 = v3; /*0x76a0cd*/
    this->IsAllocated = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x76a0d9*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x76a0dc*/
  if ( v12 < this->Items ) /*0x76a0e4*/
    this->Items = v12; /*0x76a0e6*/
  return 1; /*0x76a0e9*/
}


// ==== 0x0076A100  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::getCurrentFrame  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::sub_76A100(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x76a100*/
  result = 0; /*0x76a103*/
  if ( v2 <= 0 ) /*0x76a108*/
    return -1; /*0x76a123*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76a111*/
  {
    if ( ++result >= v2 ) /*0x76a121*/
      return -1; /*0x76a121*/
  }
  return result; /*0x76a126*/
}


// ==== 0x0076A130  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x76a132*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x76a13d*/
  {
    v3 = 0; /*0x76a13f*/
    if ( v2 <= 0 ) /*0x76a143*/
      return 1; /*0x76a163*/
    v4 = (_DWORD *)this->Items; /*0x76a145*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76a14b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x76a154*/
    {
      ++v3; /*0x76a156*/
      ++v4; /*0x76a157*/
      if ( v3 >= v2 ) /*0x76a15c*/
        return 1; /*0x76a15c*/
    }
  }
  return 0; /*0x76a15e*/
}


// ==== 0x0076A170  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x76a17c*/
  {
    this->IsInitialized = 0; /*0x76a186*/
    if ( a3 ) /*0x76a18c*/
      v4 = a3; /*0x76a1a2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x76a19e*/
    this->IsInitialized = 1; /*0x76a1a6*/
    if ( v4 ) /*0x76a1aa*/
    {
      if ( this->Items ) /*0x76a1b5*/
      {
        v6 = this->Capacity; /*0x76a1bc*/
        if ( a2 < v6 ) /*0x76a1c1*/
          v6 = a2; /*0x76a1c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x76a1c9*/
          ++i; /*0x76a1ce*/
        if ( this->IsAllocated ) /*0x76a1db*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x76a1e6*/
          this->Items = 0; /*0x76a1ee*/
        }
      }
      this->Items = v4; /*0x76a1f7*/
      this->Capacity = a2; /*0x76a1ff*/
      this->IsAllocated = a3 == 0; /*0x76a202*/
      return 1; /*0x76a208*/
    }
    else
    {
      return 0; /*0x76a1af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x76a212*/
    return 1; /*0x76a218*/
  }
}


// ==== 0x0076A220  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_28_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x76a22d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x76a233*/
    *(_DWORD *)(this + 4) = 0; /*0x76a23b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76a23e*/
  *(_DWORD *)(this + 8) = 0; /*0x76a241*/
}


// ==== 0x0076A250  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x76a250*/
    return 0; /*0x76a258*/
  v3 = *(_DWORD *)(this + 8); /*0x76a25e*/
  result = 0; /*0x76a261*/
  if ( v3 <= 0 ) /*0x76a265*/
    return -1; /*0x76a27c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x76a26b*/
  {
    if ( ++result >= v3 ) /*0x76a27a*/
      return -1; /*0x76a27a*/
  }
  return result; /*0x76a25a*/
}


// ==== 0x0076A290  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_28_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x76a290*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x76a2a5*/
  else
    return 0; /*0x76a297*/
}


// ==== 0x0076A2B0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::loopAnimation  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::sub_76A2B0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x76a2bc*/
  {
    this->IsInitialized = 0; /*0x76a2c2*/
    if ( a3 ) /*0x76a2c8*/
      v4 = a3; /*0x76a2de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x76a2da*/
    this->IsInitialized = 1; /*0x76a2e2*/
    if ( !v4 ) /*0x76a2e6*/
      return 0; /*0x76a35a*/
    if ( this->Items ) /*0x76a2e8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x76a2ef*/
      if ( a2 < v5 ) /*0x76a2f4*/
        v5 = a2; /*0x76a2f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x76a2fc*/
        ++i; /*0x76a301*/
      if ( this->IsAllocated ) /*0x76a30e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x76a319*/
        this->Items = 0; /*0x76a321*/
      }
    }
    this->Items = v4; /*0x76a32a*/
    this->DynamicVector_field_0x8 = a2; /*0x76a332*/
    this->IsAllocated = a3 == 0; /*0x76a335*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x76a33e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x76a341*/
  if ( v7 < this->Items ) /*0x76a349*/
    this->Items = v7; /*0x76a34b*/
  return 1; /*0x76a34e*/
}


// ==== 0x0076A360  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::resetAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::sub_76A360(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x76a360*/
  result = 0; /*0x76a363*/
  if ( v2 <= 0 ) /*0x76a368*/
    return -1; /*0x76a37f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x76a36e*/
  {
    if ( ++result >= v2 ) /*0x76a37d*/
      return -1; /*0x76a37d*/
  }
  return result; /*0x76a382*/
}


// ==== 0x0076A390  _VectorClass_VCentroid_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43_::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x76a39b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x76a3a0*/
  {
    v3 = 0; /*0x76a3a2*/
    if ( v2 <= 0 ) /*0x76a3a6*/
      return 1; /*0x76a3e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x76a3a8*/
    v5 = (_DWORD *)this->Items; /*0x76a3ab*/
    v6 = (_DWORD *)(v4 + 8); /*0x76a3ae*/
    v7 = v4 - (_DWORD)v5; /*0x76a3b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x76a3cd*/
    {
      ++v3; /*0x76a3cf*/
      v6 += 3; /*0x76a3d0*/
      v5 += 3; /*0x76a3d3*/
      if ( v3 >= v2 ) /*0x76a3d8*/
        return 1; /*0x76a3d8*/
    }
  }
  return 0; /*0x76a3da*/
}


// ==== 0x0076A3F0  _VectorClass_VCentroid_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43_::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x76a3f2*/
  if ( a2 ) /*0x76a3fe*/
  {
    v5 = a3; /*0x76a404*/
    this->IsInitialized = 0; /*0x76a408*/
    if ( a3 ) /*0x76a40d*/
    {
      if ( a2 - 1 >= 0 ) /*0x76a449*/
      {
        v9 = a3 + 8; /*0x76a44b*/
        v10 = a2; /*0x76a44e*/
        do /*0x76a45b*/
        {
          *(v9 - 2) = 0; /*0x76a44f*/
          *(v9 - 1) = 0; /*0x76a452*/
          *v9 = 0; /*0x76a455*/
          v9 += 3; /*0x76a457*/
          --v10; /*0x76a45a*/
        }
        while ( v10 ); /*0x76a45b*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x76a417*/
      if ( v6 ) /*0x76a421*/
      {
        if ( a2 - 1 >= 0 ) /*0x76a428*/
        {
          v7 = v6 + 8; /*0x76a42a*/
          v8 = a2; /*0x76a42d*/
          do /*0x76a43a*/
          {
            *(v7 - 2) = 0; /*0x76a42e*/
            *(v7 - 1) = 0; /*0x76a431*/
            *v7 = 0; /*0x76a434*/
            v7 += 3; /*0x76a436*/
            --v8; /*0x76a439*/
          }
          while ( v8 ); /*0x76a43a*/
        }
        v5 = v6; /*0x76a43c*/
      }
      else
      {
        v5 = 0; /*0x76a440*/
      }
    }
    this->IsInitialized = 1; /*0x76a45f*/
    if ( v5 ) /*0x76a463*/
    {
      if ( this->Items ) /*0x76a46e*/
      {
        v12 = this->Capacity; /*0x76a473*/
        if ( a2 < v12 ) /*0x76a478*/
          v12 = a2; /*0x76a47a*/
        if ( v12 > 0 ) /*0x76a47e*/
        {
          v13 = 0; /*0x76a480*/
          do /*0x76a4a0*/
          {
            v14 = (_DWORD *)(this->Items + v13); /*0x76a487*/
            v15 = &v5[v13]; /*0x76a489*/
            v13 += 12; /*0x76a48c*/
            --v12; /*0x76a48f*/
            *(_DWORD *)v15 = *v14; /*0x76a492*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x76a497*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x76a49d*/
          }
          while ( v12 ); /*0x76a4a0*/
          v3 = a2; /*0x76a4a2*/
        }
        if ( this->IsAllocated ) /*0x76a4a8*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x76a4b1*/
          this->Items = 0; /*0x76a4b9*/
        }
      }
      this->Items = v5; /*0x76a4c4*/
      this->Capacity = v3; /*0x76a4ca*/
      this->IsAllocated = a3 == 0; /*0x76a4cd*/
      return 1; /*0x76a4d3*/
    }
    else
    {
      return 0; /*0x76a468*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x76a4dd*/
    return 1; /*0x76a4e3*/
  }
}


// ==== 0x0076A4F0  _VectorClass_VCentroid_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_43_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x76a4fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x76a503*/
    *(_DWORD *)(this + 4) = 0; /*0x76a50b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76a50e*/
  *(_DWORD *)(this + 8) = 0; /*0x76a511*/
}


// ==== 0x0076A520  _VectorClass_VCentroid_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_43_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x76a520*/
    return 0; /*0x76a52e*/
  v3 = *(_DWORD *)(this + 8); /*0x76a534*/
  result = 0; /*0x76a537*/
  if ( v3 <= 0 ) /*0x76a53b*/
    return -1; /*0x76a566*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x76a541*/
  {
    if ( ++result >= v3 ) /*0x76a564*/
      return -1; /*0x76a564*/
  }
  return result; /*0x76a52b*/
}


// ==== 0x0076A570  _VectorClass_VCentroid_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_43_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x76a570*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x76a58e*/
  else
    return 0; /*0x76a577*/
}


// ==== 0x0076A5A0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38_::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x76a5a2*/
  return this; /*0x76a5a5*/
}


// ==== 0x0076A5B0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38_::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x76a5b2*/
  return this; /*0x76a5b5*/
}


// ==== 0x0076A5C0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Map_WorldDominationTour_20_::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x76a5c3*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76a5c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76a5d0*/
  {
    (**v3)(v3, 3); /*0x76a5df*/
    *(Block + 1) = 0; /*0x76a5e1*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76a5ec*/
  *(Block + 2) = 0; /*0x76a5f2*/
  if ( (a2 & 1) != 0 ) /*0x76a5f9*/
    __3_YAXPAX_Z(Block); /*0x76a5fc*/
  return (VectorClass *)Block; /*0x76a606*/
}


// ==== 0x0076A610  Map_WorldDominationTour::Constructor_0  this=Map_WorldDominationTour  sig=csp ====
rc_ptr_base *__thiscall Map_WorldDominationTour_20_::Constructor_0(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76a61b*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x76a61d*/
    v4 = Block - 1; /*0x76a621*/
    v5 = Block + 2 * v3; /*0x76a624*/
    v6 = v3 - 1; /*0x76a627*/
    if ( v6 >= 0 ) /*0x76a628*/
    {
      v7 = v6 + 1; /*0x76a62b*/
      do /*0x76a63f*/
      {
        v5 -= 2; /*0x76a62e*/
        v5->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a633*/
        ComPtr::Release(v5); /*0x76a639*/
        --v7; /*0x76a63e*/
      }
      while ( v7 ); /*0x76a63f*/
    }
    if ( (a2 & 1) != 0 ) /*0x76a645*/
      __3_YAXPAX_Z(v4); /*0x76a648*/
    return v4; /*0x76a650*/
  }
  else
  {
    Block->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a65a*/
    ComPtr::Release(Block); /*0x76a660*/
    if ( (a2 & 1) != 0 ) /*0x76a668*/
      __3_YAXPAX_Z(Block); /*0x76a66b*/
    return Block; /*0x76a673*/
  }
}


// ==== 0x0076A680  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setPosition  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSFrameAnim::setPosition(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x76a683*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76a686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76a690*/
  {
    (**v3)(v3, 3); /*0x76a69f*/
    *(Block + 1) = 0; /*0x76a6a1*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76a6ac*/
  *(Block + 2) = 0; /*0x76a6b2*/
  if ( (a2 & 1) != 0 ) /*0x76a6b9*/
    __3_YAXPAX_Z(Block); /*0x76a6bc*/
  return (DynamicVector *)Block; /*0x76a6c6*/
}


// ==== 0x0076A6D0  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Map_WorldDominationTour_28_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x76a6d3*/
  *Block = &vt_VectorClass_WorldDominationTour_Map_AnimationPalette; /*0x76a6d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76a6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x76a6e8*/
    *(Block + 1) = 0; /*0x76a6f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76a6fb*/
  *(Block + 2) = 0; /*0x76a701*/
  if ( (a2 & 1) != 0 ) /*0x76a708*/
    __3_YAXPAX_Z(Block); /*0x76a70b*/
  return (VectorClass *)Block; /*0x76a715*/
}


// ==== 0x0076A720  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::setScale  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSFrameAnim::setScale(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x76a723*/
  *Block = &vt_VectorClass_WorldDominationTour_Map_AnimationPalette; /*0x76a726*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76a730*/
  {
    __3_YAXPAX_Z(v3); /*0x76a738*/
    *(Block + 1) = 0; /*0x76a740*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76a74b*/
  *(Block + 2) = 0; /*0x76a751*/
  if ( (a2 & 1) != 0 ) /*0x76a758*/
    __3_YAXPAX_Z(Block); /*0x76a75b*/
  return (DynamicVector *)Block; /*0x76a765*/
}


// ==== 0x0076A770  _VectorClass_VCentroid_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Map_WorldDominationTour_43_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x76a773*/
  *Block = &vt_VectorClass_WorldDominationTour_Centroid; /*0x76a776*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76a780*/
  {
    __3_YAXPAX_Z(v3); /*0x76a788*/
    *(Block + 1) = 0; /*0x76a790*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76a79b*/
  *(Block + 2) = 0; /*0x76a7a1*/
  if ( (a2 & 1) != 0 ) /*0x76a7a8*/
    __3_YAXPAX_Z(Block); /*0x76a7ab*/
  return (VectorClass *)Block; /*0x76a7b5*/
}


// ==== 0x0076A7C0  MSFrameAnim::drawFrame  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_76A7C0(_DWORD *this)
{
  ComPtr::Constructor(this); /*0x76a7c3*/
  *this = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a7c8*/
  return this; /*0x76a7d0*/
}


// ==== 0x0076A7E0  ObjectClass::ConstructWDTSelection_Create_767FB0_Create_Create  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_767FB0_Create_Create(_DWORD *this, HashTable *aP1, HashTable *aP2)
{
  HashTable *v3; // esi
  rc_ptr_base *v5; // edi
  rc_ptr_base *v7; // eax
  rc_ptr_base *v8; // ebx
  rc_ptr_base *v9; // edi

  v3 = aP1; /*0x76a7e3*/
  this->vtable2 = 0; /*0x76a7ec*/
  this->vtable3 = aP1; /*0x76a7f3*/
  this->nextObject = 1; /*0x76a7f6*/
  this->attachedTag = 0; /*0x76a7fa*/
  *this = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76a7fe*/
  if ( !aP1 ) /*0x76a805*/
    return this; /*0x76a805*/
  if ( !aP2 ) /*0x76a811*/
  {
    v7 = (rc_ptr_base *)__2_YAPAXI_Z(8 * (_DWORD)aP1 + 4); /*0x76a84b*/
    if ( v7 ) /*0x76a855*/
    {
      v7->vfptr = aP1; /*0x76a857*/
      v8 = v7 + 1; /*0x76a859*/
      v9 = v7 + 1; /*0x76a85f*/
      if ( (int)&aP1[-1].HashTable_field_0x50 + 3 >= 0 ) /*0x76a863*/
      {
        do /*0x76a879*/
        {
          ComPtr::Constructor(v9); /*0x76a86a*/
          v9->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a86f*/
          v9 += 2; /*0x76a875*/
          v3 = (HashTable *)((char *)v3 - 1); /*0x76a878*/
        }
        while ( v3 ); /*0x76a879*/
        this->vtable2 = v8; /*0x76a87c*/
        this->attachedTag = 1; /*0x76a87f*/
        return this; /*0x76a888*/
      }
    }
    else
    {
      v8 = 0; /*0x76a88b*/
    }
    this->vtable2 = v8; /*0x76a88d*/
    this->attachedTag = 1; /*0x76a890*/
    return this; /*0x76a895*/
  }
  *(_DWORD *)aP2->__pad_0 = aP1; /*0x76a813*/
  v5 = (rc_ptr_base *)&aP2->HashTable_field_0x04; /*0x76a81b*/
  if ( (int)&aP1[-1].HashTable_field_0x50 + 3 >= 0 ) /*0x76a81f*/
  {
    do /*0x76a835*/
    {
      ComPtr::Constructor(v5); /*0x76a826*/
      v5->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a82b*/
      v5 += 2; /*0x76a831*/
      v3 = (HashTable *)((char *)v3 - 1); /*0x76a834*/
    }
    while ( v3 ); /*0x76a835*/
  }
  this->vtable2 = &aP2->HashTable_field_0x04; /*0x76a838*/
  return this; /*0x76a837*/
}


// ==== 0x0076A8A0  sub_76A8A0  this=-  sig=ida-proto ====
void sub_76A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76a8ac*/
  dbl_B72930 = Math::Sqrt(v0 + v0); /*0x76a8be*/
}


// ==== 0x0076A8D0  sub_76A8D0  this=-  sig=ida-proto ====
void sub_76A8D0()
{
  dbl_B72980 = dbl_B72930 / 60.0; /*0x76a8dc*/
}


// ==== 0x0076A8F0  sub_76A8F0  this=-  sig=ida-proto ====
void sub_76A8F0()
{
  dbl_B72968 = 1.0 / dbl_B72980; /*0x76a8fc*/
}


// ==== 0x0076A910  sub_76A910  this=-  sig=ida-proto ====
void sub_76A910()
{
  dbl_B72960 = 0.0174532925199433 * 45.0; /*0x76a91c*/
}


// ==== 0x0076A930  sub_76A930  this=-  sig=ida-proto ====
void sub_76A930()
{
  dbl_B72938 = 0.0174532925199433 * 60.0; /*0x76a93c*/
}


// ==== 0x0076A950  sub_76A950  this=-  sig=ida-proto ====
void sub_76A950()
{
  dbl_B72910 = 0.0174532925199433 * 90.0; /*0x76a95c*/
}


// ==== 0x0076A970  sub_76A970  this=-  sig=ida-proto ====
__int64 sub_76A970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72910 - dbl_B72938); /*0x76a982*/
  result = Math::RoundToInt(v0 * dbl_B72930 * 0.5); /*0x76a996*/
  dword_B72988 = result; /*0x76a99b*/
  return result; /*0x76a9a0*/
}


// ==== 0x0076A9B0  sub_76A9B0  this=-  sig=ida-proto ====
void sub_76A9B0()
{
  dbl_B72940 = Math::ArcTan((double)dword_B72988 * 0.00390625); /*0x76a9c7*/
}


// ==== 0x0076A9E0  sub_76A9E0  this=-  sig=ida-proto ====
void sub_76A9E0()
{
  dbl_B72958 = Math::ArcTan((double)(2 * dword_B72988) / dbl_B72930); /*0x76aa02*/
}


// ==== 0x0076AA10  sub_76AA10  this=-  sig=ida-proto ====
__int64 sub_76AA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72988) + 0.5); /*0x76aa2b*/
  dword_B7297C = result; /*0x76aa30*/
  return result; /*0x76aa36*/
}


// ==== 0x0076AA40  sub_76AA40  this=-  sig=ida-proto ====
int sub_76AA40()
{
  word_B72928 = 0; /*0x76aa42*/
  word_B7292A = 0; /*0x76aa48*/
  return 0; /*0x76aa4e*/
}


// ==== 0x0076AA50  sub_76AA50  this=-  sig=ida-proto ====
int sub_76AA50()
{
  dword_B72948 = 0; /*0x76aa52*/
  dword_B7294C = 0; /*0x76aa57*/
  dword_B72950 = 0; /*0x76aa5c*/
  return 0; /*0x76aa61*/
}


// ==== 0x0076AA70  sub_76AA70  this=-  sig=ida-proto ====
int sub_76AA70()
{
  dword_B72978 = 0; /*0x76aa75*/
  dword_B72970 = 128; /*0x76aa7f*/
  dword_B72974 = 128; /*0x76aa84*/
  return 128; /*0x76aa89*/
}


// ==== 0x0076AA90  sub_76AA90  this=-  sig=ida-proto ====
int sub_76AA90()
{
  dword_B72918 = 0; /*0x76aa92*/
  dword_B7291C = 0; /*0x76aa97*/
  dword_B72920 = 0; /*0x76aa9c*/
  dword_B72924 = 0; /*0x76aaa1*/
  return 0; /*0x76aaa6*/
}


// ==== 0x0076AAF0  ObjectClass::ParseWDTTerritories_Parse  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76AAF0(_DWORD *this)
{
  this->vtable2 = 0; /*0x76aaf7*/
  *this = &off_7F7220; /*0x76aafa*/
  this->vtable3 = 0; /*0x76ab00*/
  this->attachedBomb = 10; /*0x76ab03*/
  this->ambientSoundController = 10; /*0x76ab06*/
  this->NeedsSaveOrLink = 10000; /*0x76ab09*/
  this->nextArrayIndex = 0; /*0x76ab0f*/
  this->isOnMap = 0; /*0x76ab13*/
  this->spawnStatus = 0; /*0x76ab16*/
  this->visibilityFlags = 0; /*0x76ab19*/
  this->parachute = 0; /*0x76ab1e*/
  this->lastLayer = 0; /*0x76ab21*/
  this->q0A0 = 0; /*0x76ab24*/
  this->q0B8 = 0; /*0x76ab27*/
  this->q0C4 = 0; /*0x76ab2a*/
  this->q0D0 = 0; /*0x76ab2d*/
  this->needsRedraw = 100; /*0x76ab35*/
  this->onBridge = 100; /*0x76ab38*/
  this->isInLogic = 100; /*0x76ab3b*/
  this->q0A4 = 100; /*0x76ab3e*/
  this->q0B0 = 100; /*0x76ab41*/
  this->q0BC = 100; /*0x76ab44*/
  this->q0C8 = 100; /*0x76ab47*/
  this->q0D4 = 100; /*0x76ab4a*/
  this->q048 = 1; /*0x76ab4d*/
  this->q04C = 1; /*0x76ab51*/
  this->customSound_controller = 2; /*0x76ab55*/
  this->estimatedHealth = 1; /*0x76ab59*/
  this->hasParachute = 50; /*0x76ab5d*/
  this->isAliveFlag = 50; /*0x76ab60*/
  this->location = 50; /*0x76ab63*/
  this->lineTrailer = 50; /*0x76ab66*/
  this->q0AC = 1; /*0x76ab69*/
  this->q0B4 = 50; /*0x76ab6d*/
  this->q0C0 = 50; /*0x76ab70*/
  this->q0CC = 50; /*0x76ab73*/
  this->q0D8 = 50; /*0x76ab76*/
  this->attachedBomb = -1; /*0x76ab79*/
  this->ambientSoundController = -1; /*0x76ab7c*/
  return this; /*0x76ab7f*/
}


// ==== 0x0076AB90  WDTTerritory::method_76AB90  this=WDTTerritory  sig=csp ====
void __thiscall sub_76AB90(WDTTerritory *this)
{
  this->vfptr = &off_7F7220; /*0x76ab90*/
  ReferenceCounted::Constructor(this); /*0x76ab96*/
}


// ==== 0x0076ABA0  rc_ptr::Audio_Set  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall Audio_Set(rc_ptr_base *a1, void *a2)
{
  char *v4; // eax
  WDTState *WDT; // edi

  v4 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x76aba8*/
  if ( v4 ) /*0x76abb2*/
    WDT = (WDTState *)File::LoadWDT(v4, a2); /*0x76abbc*/
  else
    WDT = 0; /*0x76abc0*/
  ComPtr::Constructor(a1); /*0x76abc4*/
  a1->vfptr = &vt_rc_ptr_WDTState; /*0x76abcb*/
  ComPtr::Set(a1, (int)WDT); /*0x76abd2*/
  return (rc_ptr *)a1; /*0x76abd9*/
}


// ==== 0x0076ABE0  WDTState::method_76ABE0  this=WDTState  sig=csp ====
_DWORD *__thiscall sub_76ABE0(_DWORD *this)
{
  char *v2; // esi
  int v3; // edx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  bool v5; // zf
  void **v7; // [esp+Ch] [ebp-18h] BYREF
  void (__thiscall ***v8)(_DWORD, int); // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  char v11; // [esp+19h] [ebp-Bh]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = (char *)(this + 11); /*0x76abef*/
  this->WDTState_field_0x04 = 0; /*0x76abf2*/
  v13 = 10; /*0x76abf7*/
  this->__pad_040 = 10; /*0x76abfb*/
  this->__pad_038 = 1; /*0x76ac02*/
  v10 = 1; /*0x76ac05*/
  this->q030 = 0; /*0x76ac09*/
  this->q034 = 0; /*0x76ac0c*/
  *((_BYTE *)this + 57) = 0; /*0x76ac0f*/
  this->__pad_02C = &vt_DynamicVectorClass_rc_ptr_WDTTerritory; /*0x76ac12*/
  this->q03C = 0; /*0x76ac18*/
  *this = &vt_WDTState; /*0x76ac1e*/
  this->__pad_014 = 0; /*0x76ac24*/
  this->q018 = 0; /*0x76ac27*/
  this->q020 = 0; /*0x76ac2a*/
  this->q024 = 0; /*0x76ac2d*/
  this->q028 = 1000000; /*0x76ac30*/
  v8 = 0; /*0x76ac37*/
  v9 = 0; /*0x76ac3b*/
  v11 = 0; /*0x76ac3f*/
  v7 = &vt_DynamicVectorClass_rc_ptr_WDTTerritory; /*0x76ac43*/
  v12 = 0; /*0x76ac4b*/
  sub_76B7B0(this + 11, &v7); /*0x76ac4f*/
  v3 = v13; /*0x76ac58*/
  *((_DWORD *)v2 + 4) = v12; /*0x76ac5c*/
  v4 = v8; /*0x76ac5f*/
  v5 = v8 == 0; /*0x76ac63*/
  *((_DWORD *)v2 + 5) = v3; /*0x76ac65*/
  v7 = &vt_VectorClass_rc_ptr_WDTTerritory; /*0x76ac68*/
  if ( !v5 && v11 ) /*0x76ac76*/
    (**v4)(v4, 3); /*0x76ac7c*/
  this->q044 = 0; /*0x76ac7e*/
  return this; /*0x76ac83*/
}


// ==== 0x0076AC90  File::LoadWDT  this=WDTState  sig=csp ====
WDTState *__thiscall File::LoadWDT(char *this, ObjectClass *aP1)
{
  u_short *v3; // eax
  u_short *PaletteData; // ebp
  char *v5; // edi
  int v6; // eax
  int eax12; // eax
  IUnknown *v7; // ecx
  int eax12a; // eax
  IUnknown *v9; // edx
  CCINIClass *v10; // edi
  IUnknown *v12; // [esp+10h] [ebp-1Ch] BYREF
  IUnknown *v13; // [esp+14h] [ebp-18h] BYREF
  IUnknown *Size; // [esp+18h] [ebp-14h] BYREF
  IUnknown *v15; // [esp+1Ch] [ebp-10h] BYREF
  size_t v17; // [esp+20h] [ebp-Ch] BYREF
  IUnknown *Block; // [esp+24h] [ebp-8h]
  int v19; // [esp+28h] [ebp-4h] BYREF
  WDTState *aP1a; // [esp+30h] [ebp+4h]

  this->WDTState_field_0x04 = 0; /*0x76ac9b*/
  this->q00C = 0; /*0x76ac9e*/
  this->q034 = 0; /*0x76aca1*/
  this->__pad_038 = 1; /*0x76aca4*/
  *(this + 57) = 0; /*0x76aca8*/
  this->__pad_02C = &vt_DynamicVectorClass_rc_ptr_WDTTerritory; /*0x76acab*/
  this->q010 = 10; /*0x76acb2*/
  this->q03C = 0; /*0x76acb9*/
  *(_DWORD *)this = &vt_WDTState; /*0x76acbe*/
  v3 = (u_short *)__2_YAPAXI_Z(0xCu); /*0x76acc4*/
  if ( v3 ) /*0x76acce*/
    PaletteData = File::LoadPaletteData(v3, aP1); /*0x76acdc*/
  else
    PaletteData = 0; /*0x76ace0*/
  v5 = this + 28; /*0x76ace6*/
  v12 = 0; /*0x76acf2*/
  v13 = 0; /*0x76acf6*/
  Size = 0; /*0x76acfa*/
  v15 = 0; /*0x76acfe*/
  v17 = 0; /*0x76ad02*/
  v19 = 0; /*0x76ad06*/
  this->q008 = 0; /*0x76ad0a*/
  this->q00C = 0; /*0x76ad0d*/
  this->WDTState_field_0x04 = 0; /*0x76ad10*/
  this->__pad_014 = 0; /*0x76ad13*/
  this->q018 = 0; /*0x76ad16*/
  this->__pad_01C = 0; /*0x76ad19*/
  this->q008 = 0; /*0x76ad1b*/
  this->q024 = 0; /*0x76ad1e*/
  this->q028 = 0; /*0x76ad21*/
  this->q044 = 0; /*0x76ad24*/
  if ( HashTable::FindChunk(PaletteData, aNack, 0, (CCINIClass *)&v19) ) /*0x76ad27*/
  {
    if ( PaletteData ) /*0x76ad32*/
    {
LABEL_25:
      ResultNode::CleanupList(PaletteData); /*0x76afa4*/
      __3_YAXPAX_Z(PaletteData); /*0x76afac*/
    }
  }
  else
  {
    if ( HashTable::FindString(PaletteData, aTotk, (IUnknown *)(this + 28)) ) /*0x76ad45*/
    {
      v6 = *(_DWORD *)v5; /*0x76ad4e*/
      *(this + 72) = 1; /*0x76ad50*/
      *(_DWORD *)v5 = ++v6; /*0x76ad55*/
      this->q024 = v6; /*0x76ad59*/
    }
    else
    {
      *(this + 72) = 0; /*0x76ad69*/
      HashTable::FindString(PaletteData, aCrtk, (IUnknown *)(this + 36)); /*0x76ad6c*/
      ++this->q024; /*0x76ad7d*/
      HashTable::FindString(PaletteData, aCyln, (IUnknown *)(this + 28)); /*0x76ad80*/
      ++*(_DWORD *)v5; /*0x76ad85*/
    }
    HashTable::FindChunk(PaletteData, aWurl, 0, (CCINIClass *)&v17); /*0x76ad94*/
    HashTable::FindChunk(PaletteData, aSdsc, 0, (CCINIClass *)&Size); /*0x76ada6*/
    HashTable::FindChunk(PaletteData, aLdsc, 0, (CCINIClass *)&v15); /*0x76adb8*/
    if ( !*(this + 72) ) /*0x76adbd*/
      HashTable::FindChunk(PaletteData, aMpvc, 0, (CCINIClass *)&v12); /*0x76adcf*/
    HashTable::FindChunk(PaletteData, aHsvc, 0, (CCINIClass *)&v13); /*0x76ade1*/
    this->q008 = __2_YAPAXI_Z((size_t)Size); /*0x76adf0*/
    eax12 = __2_YAPAXI_Z((size_t)v15); /*0x76adf8*/
    v7 = (IUnknown *)v17; /*0x76adfd*/
    this->q00C = eax12; /*0x76ae01*/
    eax12a = __2_YAPAXI_Z((size_t)v7); /*0x76ae05*/
    v9 = v13; /*0x76ae0a*/
    this->WDTState_field_0x04 = eax12a; /*0x76ae0e*/
    Block = (IUnknown *)__2_YAPAXI_Z((size_t)v9); /*0x76ae17*/
    aP1a = 0; /*0x76ae23*/
    if ( !*(this + 72) ) /*0x76ae1b*/
    {
      aP1a = (WDTState *)__2_YAPAXI_Z((size_t)v12); /*0x76ae40*/
      memset(aP1a, 0, (unsigned int)v12); /*0x76ae47*/
    }
    memset(*((void **)this + 2), 0, (unsigned int)Size); /*0x76ae5e*/
    memset(*((void **)this + 3), 0, (unsigned int)v15); /*0x76ae75*/
    memset(*((void **)this + 4), 0, v17); /*0x76ae8c*/
    memset(Block, 0, (unsigned int)v13); /*0x76aea4*/
    File::FindByPrefix(PaletteData, aCmid, this + 20); /*0x76aeb8*/
    HashTable::FindString(PaletteData, aCyid, (IUnknown *)(this + 24)); /*0x76aec8*/
    if ( *(this + 72) ) /*0x76aecd*/
      this->q028 = 0; /*0x76aed2*/
    else
      HashTable::FindString(PaletteData, aTicc, (IUnknown *)(this + 40)); /*0x76aee2*/
    HashTable::FindChunk(PaletteData, aSdsc, *((void **)this + 2), (CCINIClass *)&Size); /*0x76aef7*/
    HashTable::FindChunk(PaletteData, aLdsc, *((void **)this + 3), (CCINIClass *)&v15); /*0x76af0c*/
    HashTable::FindChunk(PaletteData, aWurl, *((void **)this + 4), (CCINIClass *)&v17); /*0x76af21*/
    if ( !*(this + 72) ) /*0x76af26*/
      HashTable::FindChunk(PaletteData, aMpvc, aP1a, (CCINIClass *)&v12); /*0x76af3c*/
    v10 = (CCINIClass *)Block; /*0x76af41*/
    HashTable::FindChunk(PaletteData, aHsvc, Block, (CCINIClass *)&v13); /*0x76af52*/
    if ( *(this + 72) ) /*0x76af57*/
      this->q008 = 30; /*0x76af6f*/
    else
      ParseWDTTerritories((int)this, aP1a, (int)v12); /*0x76af68*/
    File::LoadWDTDecompress((size_t *)this, v10, (int)v13); /*0x76af7e*/
    __3_YAXPAX_Z(v10); /*0x76af84*/
    if ( !*(this + 72) ) /*0x76af89*/
      __3_YAXPAX_Z(aP1a); /*0x76af98*/
    if ( PaletteData ) /*0x76afa2*/
      goto LABEL_25; /*0x76afa2*/
  }
  return (WDTState *)this; /*0x76afb6*/
}


// ==== 0x0076AFC0  WDTState::Constructor_WDTState  this=WDTState  sig=csp ====
void __thiscall sub_76AFC0(int this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx

  v2 = *(_DWORD *)(this + 44); /*0x76afc4*/
  v3 = this + 44; /*0x76afc7*/
  *(_DWORD *)this = &vt_WDTState; /*0x76afcc*/
  (*(void (__thiscall **)(int))(v2 + 12))(this + 44); /*0x76afd2*/
  if ( *(_DWORD *)(this + 12) ) /*0x76afd5*/
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x76afdd*/
  if ( *(_DWORD *)(this + 8) ) /*0x76afe5*/
    __3_YAXPAX_Z(*(void **)(this + 8)); /*0x76afed*/
  if ( *(_DWORD *)(this + 16) ) /*0x76aff5*/
    __3_YAXPAX_Z(*(void **)(this + 16)); /*0x76affd*/
  if ( *(_DWORD *)(this + 68) ) /*0x76b005*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 36); ++i ) /*0x76b014*/
    {
      v5 = *(_DWORD *)(this + 68); /*0x76b016*/
      if ( *(_DWORD *)(v5 + 4 * i) ) /*0x76b019*/
        __3_YAXPAX_Z(*(void **)(v5 + 4 * i)); /*0x76b021*/
    }
    __3_YAXPAX_Z(*(void **)(this + 68)); /*0x76b035*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))(v3 + 4); /*0x76b03e*/
  *(_DWORD *)v3 = &vt_VectorClass_rc_ptr_WDTTerritory; /*0x76b041*/
  if ( v6 && *(_BYTE *)(v3 + 13) ) /*0x76b04c*/
  {
    (**v6)(v6, 3); /*0x76b05b*/
    *(_DWORD *)(v3 + 4) = 0; /*0x76b05d*/
  }
  *(_BYTE *)(v3 + 13) = 0; /*0x76b066*/
  *(_DWORD *)(v3 + 8) = 0; /*0x76b06a*/
  ReferenceCounted::Constructor((_DWORD *)this); /*0x76b071*/
}


// ==== 0x0076B080  ComStreamClass::initStream  this=ComStreamClass  sig=csp ====
bool __thiscall sub_76B080(_DWORD *this)
{
  return this->q044 != 0; /*0x76b088*/
}


// ==== 0x0076B090  ComStreamClass::closeStream  this=ComStreamClass  sig=csp ====
char __thiscall sub_76B090(_BYTE *this)
{
  return this->q048; /*0x76b093*/
}


// ==== 0x0076B0A0  File::LoadWDTDecompress  this=WDTState  sig=csp ====
char __thiscall File::LoadWDTDecompress(size_t *this, CCINIClass *aP1, int a3)
{
  int v4; // eax
  size_t i; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  bool v12; // zf
  unsigned __int8 v13; // dl
  char v14; // dl
  int v15; // edx
  int v16; // [esp+Ch] [ebp+8h]

  v4 = this->q024; /*0x76b0a7*/
  if ( 4 * a3 < v4 * this->q008 ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  this->q044 = __2_YAPAXI_Z(4 * v4); /*0x76b0c7*/
  for ( i = 0; i < this->q024; ++i ) /*0x76b0ca*/
    *(_DWORD *)(this->q044 + 4 * i) = __2_YAPAXI_Z(this->q008); /*0x76b0e5*/
  v7 = 0; /*0x76b0f3*/
  v8 = 0; /*0x76b0f5*/
  v9 = 0; /*0x76b0f7*/
  v16 = 0; /*0x76b0fb*/
  if ( this->q024 ) /*0x76b0f0*/
  {
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( this->q008 ) /*0x76b107*/
        break; /*0x76b107*/
LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( ++v9 >= this->q024 ) /*0x76b16d*/
        return 1; /*0x76b16d*/
    }
    while ( 1 ) /*0x76b110*/
    {
      if ( !v8 ) /*0x76b113*/
      {
        v15 = (unsigned __int8)aP1->__pad_0[v7]; /*0x76b130*/
        goto LABEL_14; /*0x76b130*/
      }
      v11 = v8 - 1; /*0x76b115*/
      if ( !v11 ) /*0x76b116*/
        break; /*0x76b116*/
      v12 = v11 == 1; /*0x76b118*/
      v13 = aP1->__pad_0[v7]; /*0x76b119*/
      if ( v12 ) /*0x76b11c*/
      {
        LOBYTE(v15) = v13 >> 4; /*0x76b123*/
LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
LABEL_15:
      *(_BYTE *)(*(_DWORD *)(this->q044 + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( ++v10 >= this->q008 ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    LOBYTE(v15) = (unsigned __int8)aP1->__pad_0[v7] >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return 1; /*0x76b0b9*/
}


// ==== 0x0076B180  ObjectClass::ParseWDTTerritories  this=WDTState  sig=csp ====
char __thiscall ParseWDTTerritories(int this, WDTState *aP1, int a3)
{
  int v3; // eax
  int v5; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  __int16 v9; // cx
  int v10; // esi
  char v11; // dl
  __int16 v12; // ax
  unsigned int v13; // eax
  char v14; // dl
  char v15; // dl
  int v16; // ecx
  int v17; // esi
  char v18; // al
  int v19; // esi
  char v20; // al
  int v21; // esi
  char v22; // al
  int v23; // esi
  char v24; // al
  int v25; // esi
  char v26; // al
  int v27; // esi
  char v28; // al
  int v29; // esi
  char v30; // al
  int v31; // esi
  char v32; // al
  int v33; // esi
  char v34; // al
  int v35; // esi
  char v36; // al
  int v37; // esi
  char v38; // al
  int v39; // esi
  char v40; // al
  int v41; // esi
  char v42; // al
  int v43; // esi
  char v44; // al
  int v45; // esi
  char v46; // al
  int v47; // esi
  char v48; // al
  int v49; // esi
  char v50; // al
  int v51; // esi
  char v52; // al
  int v53; // esi
  char v54; // al
  int v55; // esi
  char v56; // al
  int v57; // esi
  char v58; // al
  int v59; // esi
  char v60; // al
  int v61; // esi
  char v62; // al
  int v63; // esi
  char v64; // al
  int v65; // esi
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  int v69; // ebx
  int v70; // eax
  int v71; // ecx
  int v72; // edx
  int v73; // edx
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  WDTState *v78; // [esp-4h] [ebp-1Ch]
  rc_ptr_base v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  *(_DWORD *)(this + 32) = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = (_DWORD *)__2_YAPAXI_Z(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(&v79, (int)v8); /*0x76b1da*/
      LOBYTE(v9) = 0; /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(_DWORD *)(v80 + 8) = *(_DWORD *)(this + 32); /*0x76b1e9*/
      HIBYTE(v9) = aP1->__pad_0[v10 - 1]; /*0x76b1ec*/
      *(_WORD *)(v80 + 12) = v9; /*0x76b1f4*/
      *(_WORD *)(v80 + 12) += (unsigned __int8)aP1->__pad_0[v10]; /*0x76b201*/
      v11 = aP1->__pad_0[v10 + 1]; /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(_BYTE *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      LOBYTE(v12) = 0; /*0x76b21c*/
      LOBYTE(v9) = aP1->__pad_0[v10++] + 0x80; /*0x76b21e*/
      *(_BYTE *)(v80 + 15) = v9; /*0x76b222*/
      HIBYTE(v12) = aP1->__pad_0[v10++]; /*0x76b229*/
      *(_WORD *)(v80 + 16) = v12; /*0x76b22d*/
      *(_WORD *)(v80 + 16) += (unsigned __int8)aP1->__pad_0[v10]; /*0x76b23a*/
      v13 = (unsigned __int8)aP1->__pad_0[++v10] - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(_BYTE *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(_BYTE *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = aP1->__pad_0[v10++] + 0x80; /*0x76b269*/
      *(_BYTE *)(v80 + 30) = v14; /*0x76b26d*/
      LOBYTE(v9) = aP1->__pad_0[v10++] + 0x80; /*0x76b277*/
      *(_BYTE *)(v80 + 18) = v9; /*0x76b27b*/
      LOBYTE(v13) = aP1->__pad_0[v10++] + 0x80; /*0x76b285*/
      *(_BYTE *)(v80 + 19) = v13; /*0x76b288*/
      v15 = aP1->__pad_0[v10++] + 0x80; /*0x76b294*/
      *(_BYTE *)(v80 + 20) = v15; /*0x76b298*/
      v16 = (unsigned __int8)aP1->__pad_0[v10] - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(_DWORD *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( aP1->__pad_0[v17] <= 0x7Fu ) /*0x76b2b1*/
        v18 = aP1->__pad_0[v17]; /*0x76b2bf*/
      else
        v18 = aP1->__pad_0[v17] + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(_BYTE *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( aP1->__pad_0[v19] <= 0x7Fu ) /*0x76b2d1*/
        v20 = aP1->__pad_0[v19]; /*0x76b2df*/
      else
        v20 = aP1->__pad_0[v19] + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(_BYTE *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( aP1->__pad_0[v21] <= 0x7Fu ) /*0x76b2f1*/
        v22 = aP1->__pad_0[v21]; /*0x76b2ff*/
      else
        v22 = aP1->__pad_0[v21] + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(_BYTE *)(v80 + 33) = v22; /*0x76b309*/
      if ( aP1->__pad_0[v23] <= 0x7Fu ) /*0x76b311*/
        v24 = aP1->__pad_0[v23]; /*0x76b31f*/
      else
        v24 = aP1->__pad_0[v23] + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(_BYTE *)(v80 + 34) = v24; /*0x76b329*/
      if ( aP1->__pad_0[v25] <= 0x7Fu ) /*0x76b331*/
        v26 = aP1->__pad_0[v25]; /*0x76b33f*/
      else
        v26 = aP1->__pad_0[v25] + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(_BYTE *)(v80 + 35) = v26; /*0x76b349*/
      if ( aP1->__pad_0[v27] <= 0x7Fu ) /*0x76b351*/
        v28 = aP1->__pad_0[v27]; /*0x76b35f*/
      else
        v28 = aP1->__pad_0[v27] + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(_BYTE *)(v80 + 36) = v28; /*0x76b369*/
      if ( aP1->__pad_0[v29] <= 0x7Fu ) /*0x76b371*/
        v30 = aP1->__pad_0[v29]; /*0x76b37f*/
      else
        v30 = aP1->__pad_0[v29] + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(_BYTE *)(v80 + 37) = v30; /*0x76b389*/
      if ( aP1->__pad_0[v31] <= 0x7Fu ) /*0x76b391*/
        v32 = aP1->__pad_0[v31]; /*0x76b39f*/
      else
        v32 = aP1->__pad_0[v31] + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(_BYTE *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( aP1->__pad_0[v33] <= 0x7Fu ) /*0x76b3b1*/
        v34 = aP1->__pad_0[v33]; /*0x76b3bf*/
      else
        v34 = aP1->__pad_0[v33] + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(_BYTE *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( aP1->__pad_0[v35] <= 0x7Fu ) /*0x76b3d1*/
        v36 = aP1->__pad_0[v35]; /*0x76b3df*/
      else
        v36 = aP1->__pad_0[v35] + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(_BYTE *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( aP1->__pad_0[v37] <= 0x7Fu ) /*0x76b3f1*/
        v38 = aP1->__pad_0[v37]; /*0x76b3ff*/
      else
        v38 = aP1->__pad_0[v37] + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(_BYTE *)(v80 + 44) = v38; /*0x76b409*/
      if ( aP1->__pad_0[v39] <= 0x7Fu ) /*0x76b411*/
        v40 = aP1->__pad_0[v39]; /*0x76b41f*/
      else
        v40 = aP1->__pad_0[v39] + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(_BYTE *)(v80 + 45) = v40; /*0x76b429*/
      if ( aP1->__pad_0[v41] <= 0x7Fu ) /*0x76b431*/
        v42 = aP1->__pad_0[v41]; /*0x76b43f*/
      else
        v42 = aP1->__pad_0[v41] + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(_BYTE *)(v80 + 46) = v42; /*0x76b449*/
      if ( aP1->__pad_0[v43] <= 0x7Fu ) /*0x76b451*/
        v44 = aP1->__pad_0[v43]; /*0x76b45f*/
      else
        v44 = aP1->__pad_0[v43] + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(_BYTE *)(v80 + 47) = v44; /*0x76b469*/
      if ( aP1->__pad_0[v45] <= 0x7Fu ) /*0x76b471*/
        v46 = aP1->__pad_0[v45]; /*0x76b47f*/
      else
        v46 = aP1->__pad_0[v45] + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(_BYTE *)(v80 + 48) = v46; /*0x76b489*/
      if ( aP1->__pad_0[v47] <= 0x7Fu ) /*0x76b491*/
        v48 = aP1->__pad_0[v47]; /*0x76b49f*/
      else
        v48 = aP1->__pad_0[v47] + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(_BYTE *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( aP1->__pad_0[v49] <= 0x7Fu ) /*0x76b4b1*/
        v50 = aP1->__pad_0[v49]; /*0x76b4bf*/
      else
        v50 = aP1->__pad_0[v49] + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(_BYTE *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( aP1->__pad_0[v51] <= 0x7Fu ) /*0x76b4d1*/
        v52 = aP1->__pad_0[v51]; /*0x76b4df*/
      else
        v52 = aP1->__pad_0[v51] + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(_BYTE *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( aP1->__pad_0[v53] <= 0x7Fu ) /*0x76b4f1*/
        v54 = aP1->__pad_0[v53]; /*0x76b4ff*/
      else
        v54 = aP1->__pad_0[v53] + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(_BYTE *)(v80 + 49) = v54; /*0x76b509*/
      if ( aP1->__pad_0[v55] <= 0x7Fu ) /*0x76b511*/
        v56 = aP1->__pad_0[v55]; /*0x76b51f*/
      else
        v56 = aP1->__pad_0[v55] + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(_BYTE *)(v80 + 50) = v56; /*0x76b529*/
      if ( aP1->__pad_0[v57] <= 0x7Fu ) /*0x76b531*/
        v58 = aP1->__pad_0[v57]; /*0x76b53f*/
      else
        v58 = aP1->__pad_0[v57] + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(_BYTE *)(v80 + 51) = v58; /*0x76b549*/
      if ( aP1->__pad_0[v59] <= 0x7Fu ) /*0x76b551*/
        v60 = aP1->__pad_0[v59]; /*0x76b55f*/
      else
        v60 = aP1->__pad_0[v59] + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(_BYTE *)(v80 + 52) = v60; /*0x76b569*/
      if ( aP1->__pad_0[v61] <= 0x7Fu ) /*0x76b571*/
        v62 = aP1->__pad_0[v61]; /*0x76b57f*/
      else
        v62 = aP1->__pad_0[v61] + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(_BYTE *)(v80 + 53) = v62; /*0x76b589*/
      if ( aP1->__pad_0[v63] <= 0x7Fu ) /*0x76b591*/
        v64 = aP1->__pad_0[v63]; /*0x76b59f*/
      else
        v64 = aP1->__pad_0[v63] + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(_BYTE *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = (unsigned __int8)aP1->__pad_0[v65++] << 24; /*0x76b5b7*/
      *(_DWORD *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = ((unsigned __int8)aP1->__pad_0[v65++] << 16) + *(_DWORD *)(v80 + 60); /*0x76b5cb*/
      *(_DWORD *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = ((unsigned __int8)aP1->__pad_0[v65++] << 8) + *(_DWORD *)(v80 + 60); /*0x76b5e0*/
      *(_DWORD *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = (unsigned __int8)aP1->__pad_0[v65++] + *(_DWORD *)(v80 + 60); /*0x76b5f2*/
      *(_DWORD *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = (unsigned __int8)aP1->__pad_0[v65++] << 24; /*0x76b603*/
      *(_DWORD *)(v80 + 56) = v70; /*0x76b607*/
      v71 = ((unsigned __int8)aP1->__pad_0[v65++] << 16) + *(_DWORD *)(v80 + 56); /*0x76b617*/
      *(_DWORD *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = ((unsigned __int8)aP1->__pad_0[v65++] << 8) + *(_DWORD *)(v80 + 56); /*0x76b62c*/
      *(_DWORD *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = (unsigned __int8)aP1->__pad_0[v65]; /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(_DWORD *)(v80 + 56) += v73; /*0x76b641*/
      v74 = *(_DWORD *)(this + 52); /*0x76b644*/
      if ( *(_DWORD *)(this + 60) < v74 /*0x76b66c*/
        || (*(_BYTE *)(this + 57) || !v74)
        && (v75 = *(_DWORD *)(this + 64), v75 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 44) + 8))(this + 44, v75 + v74, 0) )
      {
        v76 = *(_DWORD *)(this + 60); /*0x76b673*/
        v78 = (WDTState *)v80; /*0x76b67a*/
        *(_DWORD *)(this + 60) = v76 + 1; /*0x76b67e*/
        ComPtr::Set((rc_ptr_base *)(*(_DWORD *)(this + 48) + 8 * v76), (int)v78); /*0x76b687*/
      }
      v77 = *(_DWORD *)(this + 32); /*0x76b68c*/
      v79.vfptr = &vt_rc_ptr_WDTTerritory; /*0x76b68f*/
      *(_DWORD *)(this + 32) = v77 + 1; /*0x76b698*/
      ComPtr::Release(&v79); /*0x76b69f*/
      if ( v5 >= a3 ) /*0x76b6a8*/
        return 1; /*0x76b6b1*/
      v3 = a3; /*0x76b1b1*/
    }
  }
  return 0; /*0x76b197*/
}


// ==== 0x0076B6C0    this=MapSizeGameOption@WorldDominationTour  sig=? ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::loc_76B6C0(MapSizeGameOption_WorldDominationTour *this, char a2)
{
  this->vfptr = &off_7F7220; /*0x76b6c3*/
  ReferenceCounted::Constructor(this); /*0x76b6c9*/
  if ( (a2 & 1) != 0 ) /*0x76b6d3*/
    __3_YAXPAX_Z(this); /*0x76b6d6*/
  return &this->vfptr; /*0x76b6e0*/
}


// ==== 0x0076B6F0  WDTState::QueryInterface  this=WDTState  sig=csp ====
WDTState *__thiscall WDTState::QueryInterface(void *Block, char a2)
{
  WDTState::Constructor_WDTState((int)Block); /*0x76b6f3*/
  if ( (a2 & 1) != 0 ) /*0x76b6fd*/
    __3_YAXPAX_Z(Block); /*0x76b700*/
  return (WDTState *)Block; /*0x76b70a*/
}


// ==== 0x0076B710  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4_::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x76b716*/
  *(_DWORD *)(this + 16) = 0; /*0x76b719*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    *(_DWORD *)(this + 4) = 0; /*0x76b72f*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76b732*/
  *(_DWORD *)(this + 8) = 0; /*0x76b735*/
  return result; /*0x76b738*/
}


// ==== 0x0076B740  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall WDTState_4_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x76b740*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/
}


// ==== 0x0076B760  _VectorClass_V_rc_ptr_VWDTTerritory::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edi

  v3 = this->Items + 8 * a3; /*0x76b76d*/
  ComPtr::Constructor(a2); /*0x76b772*/
  *a2 = &vt_rc_ptr_WDTTerritory; /*0x76b777*/
  ComPtr::Set(a2, *(_DWORD *)(v3 + 4)); /*0x76b783*/
  return a2; /*0x76b78a*/
}


// ==== 0x0076B790  rc_ptr::ParseWDTTerritories_Parse_76B790  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall ParseWDTTerritories_Parse_76B790(rc_ptr_base *this, int a2)
{
  ComPtr::Constructor(this); /*0x76b793*/
  this->vfptr = &vt_rc_ptr_WDTTerritory; /*0x76b79f*/
  ComPtr::Set(this, a2); /*0x76b7a5*/
  return (rc_ptr *)this; /*0x76b7ac*/
}


// ==== 0x0076B7B0  ObjectClass::method_76B7B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76B7B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi

  v2 = a2; /*0x76b7b1*/
  if ( this == a2 ) /*0x76b7bc*/
    return this; /*0x76b7bc*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x76b7c4*/
  v4 = a2[2]; /*0x76b7c7*/
  this->vtable3 = v4; /*0x76b7cc*/
  if ( !v4 ) /*0x76b7cf*/
  {
    this->vtable2 = 0; /*0x76b855*/
    this->attachedTag = 0; /*0x76b85c*/
    return this; /*0x76b860*/
  }
  v5 = __2_YAPAXI_Z(8 * v4 + 4); /*0x76b7dd*/
  if ( v5 ) /*0x76b7e7*/
  {
    *v5 = v4; /*0x76b7e9*/
    v6 = v5 + 1; /*0x76b7eb*/
    v7 = v5 + 1; /*0x76b7f1*/
    if ( v4 - 1 >= 0 ) /*0x76b7f5*/
    {
      do /*0x76b80b*/
      {
        ComPtr::Constructor(v7); /*0x76b7fc*/
        *v7 = &vt_rc_ptr_WDTTerritory; /*0x76b801*/
        v7 += 2; /*0x76b807*/
        --v4; /*0x76b80a*/
      }
      while ( v4 ); /*0x76b80b*/
    }
    v8 = v6; /*0x76b80d*/
    v2 = a2; /*0x76b80f*/
  }
  else
  {
    v8 = 0; /*0x76b815*/
  }
  this->vtable2 = v8; /*0x76b819*/
  if ( !v8 ) /*0x76b81c*/
    return this; /*0x76b81c*/
  v9 = this->vtable3; /*0x76b81e*/
  v10 = 0; /*0x76b821*/
  this->attachedTag = 1; /*0x76b825*/
  if ( v9 <= 0 ) /*0x76b829*/
    return this; /*0x76b829*/
  do /*0x76b84a*/
  {
    ComPtr::Set((_DWORD *)(this->vtable2 + 8 * v10), *(_DWORD *)(v2[1] + 8 * v10 + 4)); /*0x76b83f*/
    ++v10; /*0x76b847*/
  }
  while ( v10 < this->vtable3 ); /*0x76b84a*/
  return this; /*0x76b84e*/
}


// ==== 0x0076B870  _VectorClass_V_rc_ptr_VWDTTerritory::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v2 = this->Capacity; /*0x76b876*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x76b87f*/
  {
    v3 = 0; /*0x76b881*/
    if ( v2 <= 0 ) /*0x76b885*/
      return 1; /*0x76b8ab*/
    v4 = (_DWORD *)(this->Items + 4); /*0x76b88d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x76b890*/
    {
      ++v3; /*0x76b89b*/
      v4 += 2; /*0x76b89f*/
      if ( v3 >= v2 ) /*0x76b8a4*/
        return 1; /*0x76b8a4*/
    }
  }
  return 0; /*0x76b8a6*/
}


// ==== 0x0076B8C0  _VectorClass_V_rc_ptr_VWDTTerritory::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x76b8c3*/
  if ( !a2 ) /*0x76b8cd*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x76b9cd*/
    return 1; /*0x76b9d3*/
  }
  this->IsInitialized = 0; /*0x76b8d7*/
  if ( a3 ) /*0x76b8dd*/
  {
    *a3 = a2; /*0x76b923*/
    v6 = a3 + 1; /*0x76b925*/
    if ( a2 - 1 >= 0 ) /*0x76b931*/
    {
      v9 = a2; /*0x76b933*/
      do /*0x76b947*/
      {
        ComPtr::Constructor(v6); /*0x76b938*/
        *v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b93d*/
        v6 += 2; /*0x76b943*/
        --v9; /*0x76b946*/
      }
      while ( v9 ); /*0x76b947*/
      v6 = a3 + 1; /*0x76b949*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76b8e7*/
    if ( !v5 ) /*0x76b8f1*/
    {
      v8 = 0; /*0x76b91f*/
      goto LABEL_14; /*0x76b921*/
    }
    *v5 = a2; /*0x76b8f3*/
    v6 = v5 + 1; /*0x76b8f5*/
    v13 = v5 + 1; /*0x76b8fb*/
    if ( a2 - 1 >= 0 ) /*0x76b901*/
    {
      v7 = a2; /*0x76b903*/
      do /*0x76b917*/
      {
        ComPtr::Constructor(v6); /*0x76b908*/
        *v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b90d*/
        v6 += 2; /*0x76b913*/
        --v7; /*0x76b916*/
      }
      while ( v7 ); /*0x76b917*/
      v6 = v13; /*0x76b919*/
    }
  }
  v8 = v6; /*0x76b94d*/
LABEL_14:
  this->IsInitialized = 1; /*0x76b94f*/
  if ( !v8 ) /*0x76b955*/
    return 0; /*0x76b95a*/
  if ( this->Items ) /*0x76b961*/
  {
    if ( a2 >= this->Capacity ) /*0x76b96d*/
      v3 = this->Capacity; /*0x76b96f*/
    for ( i = 0; i < v3; ++i ) /*0x76b975*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x76b982*/
    if ( this->IsAllocated ) /*0x76b98c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x76b993*/
      if ( v12 ) /*0x76b998*/
        (**v12)(v12, 3); /*0x76b99e*/
      this->Items = 0; /*0x76b9a0*/
    }
    v3 = a2; /*0x76b9a7*/
  }
  this->Items = v8; /*0x76b9b6*/
  this->Capacity = v3; /*0x76b9b9*/
  this->IsAllocated = a3 == 0; /*0x76b9bc*/
  return 1; /*0x76b957*/
}


// ==== 0x0076B9E0  _VectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::_vt03(int this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x76b9e6*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x76b9ed*/
  {
    result = (**v2)(v2, 3); /*0x76b9fa*/
    *(_DWORD *)(this + 4) = 0; /*0x76b9fc*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x76b9ff*/
  *(_DWORD *)(this + 8) = 0; /*0x76ba02*/
  return result; /*0x76ba05*/
}


// ==== 0x0076BA10  _VectorClass_V_rc_ptr_VWDTTerritory::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x76ba10*/
    return 0; /*0x76ba18*/
  v3 = *(_DWORD *)(this + 8); /*0x76ba1e*/
  result = 0; /*0x76ba21*/
  if ( v3 <= 0 ) /*0x76ba25*/
    return -1; /*0x76ba40*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76ba2e*/
  {
    if ( ++result >= v3 ) /*0x76ba3e*/
      return -1; /*0x76ba3e*/
  }
  return result; /*0x76ba1a*/
}


// ==== 0x0076BA50  _VectorClass_V_rc_ptr_VWDTTerritory::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_rc_ptr_WDTTerritory::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x76ba50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x76ba65*/
  else
    return 0; /*0x76ba57*/
}


// ==== 0x0076BA70  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Release  this=DynamicVector  sig=csp ====
char __thiscall WDTState_4_::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    this->IsInitialized = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = a3 + 1; /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ComPtr::Constructor(v8); /*0x76bae6*/
          *v8 = &vt_rc_ptr_WDTTerritory; /*0x76baeb*/
          v8 += 2; /*0x76baf1*/
          --v9; /*0x76baf4*/
        }
        while ( v9 ); /*0x76baf5*/
        v8 = a3 + 1; /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76ba97*/
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = v5 + 1; /*0x76baa5*/
        v7 = v5 + 1; /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          v14 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            WDTState_4::Constructor(v7); /*0x76bab8*/
            v7 += 2; /*0x76bac1*/
            --v14; /*0x76bac5*/
          }
          while ( v14 ); /*0x76bac9*/
        }
      }
      else
      {
        v6 = 0; /*0x76bacd*/
      }
    }
    this->IsInitialized = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( this->Items ) /*0x76bb05*/
    {
      if ( a2 >= this->DynamicVector_field_0x8 ) /*0x76bb11*/
        v3 = this->DynamicVector_field_0x8; /*0x76bb13*/
      for ( i = 0; i < v3; ++i ) /*0x76bb19*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x76bb26*/
      if ( this->IsAllocated ) /*0x76bb30*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        this->Items = 0; /*0x76bb44*/
      }
      v3 = a2; /*0x76bb4b*/
    }
    this->Items = v6; /*0x76bb5a*/
    this->DynamicVector_field_0x8 = v3; /*0x76bb5d*/
    this->IsAllocated = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x76bb69*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x76bb6c*/
  if ( v12 < this->Items ) /*0x76bb74*/
    this->Items = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/
}


// ==== 0x0076BB90  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Read  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4_::_vt04(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( v2 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= v2 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/
}


// ==== 0x0076BBC0  _VectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_rc_ptr_WDTTerritory::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x76bbc3*/
  *Block = &vt_VectorClass_rc_ptr_WDTTerritory; /*0x76bbc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76bbd0*/
  {
    (**v3)(v3, 3); /*0x76bbdf*/
    *(Block + 1) = 0; /*0x76bbe1*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76bbec*/
  *(Block + 2) = 0; /*0x76bbf2*/
  if ( (a2 & 1) != 0 ) /*0x76bbf9*/
    __3_YAXPAX_Z(Block); /*0x76bbfc*/
  return (VectorClass *)Block; /*0x76bc06*/
}


// ==== 0x0076BC10  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall WDTState_4_::QueryInterface(_DWORD *Block, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x76bc13*/
  *Block = &vt_VectorClass_rc_ptr_WDTTerritory; /*0x76bc16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    *(Block + 1) = 0; /*0x76bc31*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x76bc3c*/
  *(Block + 2) = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    __3_YAXPAX_Z(Block); /*0x76bc4c*/
  return (DynamicVector *)Block; /*0x76bc56*/
}


// ==== 0x0076BC60  WDTState::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_76BC60(_DWORD *this)
{
  ComPtr::Constructor(this); /*0x76bc63*/
  *this = &vt_rc_ptr_WDTTerritory; /*0x76bc68*/
  return this; /*0x76bc70*/
}


// ==== 0x0076BC80  sub_76BC80  this=-  sig=ida-proto ====
int sub_76BC80()
{
  dword_B72998 = 0; /*0x76bc82*/
  dword_B7299C = 0; /*0x76bc87*/
  dword_B729A0 = 0; /*0x76bc8c*/
  dword_B729A4 = 0; /*0x76bc91*/
  return 0; /*0x76bc96*/
}


// ==== 0x0076BCA0  sub_76BCA0  this=-  sig=ida-proto ====
void sub_76BCA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76bcac*/
  dbl_B729B0 = Math::Sqrt(v0 + v0); /*0x76bcbe*/
}


// ==== 0x0076BCD0  sub_76BCD0  this=-  sig=ida-proto ====
void sub_76BCD0()
{
  dbl_B72A00 = dbl_B729B0 / 60.0; /*0x76bcdc*/
}


// ==== 0x0076BCF0  sub_76BCF0  this=-  sig=ida-proto ====
void sub_76BCF0()
{
  dbl_B729E8 = 1.0 / dbl_B72A00; /*0x76bcfc*/
}


// ==== 0x0076BD10  sub_76BD10  this=-  sig=ida-proto ====
void sub_76BD10()
{
  dbl_B729E0 = 0.0174532925199433 * 45.0; /*0x76bd1c*/
}


// ==== 0x0076BD30  sub_76BD30  this=-  sig=ida-proto ====
void sub_76BD30()
{
  dbl_B729B8 = 0.0174532925199433 * 60.0; /*0x76bd3c*/
}


// ==== 0x0076BD50  sub_76BD50  this=-  sig=ida-proto ====
void sub_76BD50()
{
  dbl_B72990 = 0.0174532925199433 * 90.0; /*0x76bd5c*/
}


// ==== 0x0076BD70  sub_76BD70  this=-  sig=ida-proto ====
__int64 sub_76BD70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72990 - dbl_B729B8); /*0x76bd82*/
  result = Math::RoundToInt(v0 * dbl_B729B0 * 0.5); /*0x76bd96*/
  dword_B72A08 = result; /*0x76bd9b*/
  return result; /*0x76bda0*/
}


// ==== 0x0076BDB0  sub_76BDB0  this=-  sig=ida-proto ====
void sub_76BDB0()
{
  dbl_B729C0 = Math::ArcTan((double)dword_B72A08 * 0.00390625); /*0x76bdc7*/
}


// ==== 0x0076BDE0  sub_76BDE0  this=-  sig=ida-proto ====
void sub_76BDE0()
{
  dbl_B729D8 = Math::ArcTan((double)(2 * dword_B72A08) / dbl_B729B0); /*0x76be02*/
}


// ==== 0x0076BE10  sub_76BE10  this=-  sig=ida-proto ====
__int64 sub_76BE10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72A08) + 0.5); /*0x76be2b*/
  dword_B729FC = result; /*0x76be30*/
  return result; /*0x76be36*/
}


// ==== 0x0076BE40  sub_76BE40  this=-  sig=ida-proto ====
int sub_76BE40()
{
  word_B729A8 = 0; /*0x76be42*/
  word_B729AA = 0; /*0x76be48*/
  return 0; /*0x76be4e*/
}


// ==== 0x0076BE50  sub_76BE50  this=-  sig=ida-proto ====
int sub_76BE50()
{
  dword_B729C8 = 0; /*0x76be52*/
  dword_B729CC = 0; /*0x76be57*/
  dword_B729D0 = 0; /*0x76be5c*/
  return 0; /*0x76be61*/
}


// ==== 0x0076BE70  sub_76BE70  this=-  sig=ida-proto ====
int sub_76BE70()
{
  dword_B729F8 = 0; /*0x76be75*/
  dword_B729F0 = 128; /*0x76be7f*/
  dword_B729F4 = 128; /*0x76be84*/
  return 128; /*0x76be89*/
}


// ==== 0x0076BE90  rc_ptr::Audio_Create_76BE90  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall Audio_Create_76BE90(rc_ptr_base *a1, int a2)
{
  char *v4; // eax
  ReferenceCounted *v5; // edi

  v4 = (char *)__2_YAPAXI_Z(0x18u); /*0x76be98*/
  if ( v4 ) /*0x76bea2*/
    v5 = (ReferenceCounted *)Audio_Create_76BF00(v4, a2); /*0x76beac*/
  else
    v5 = 0; /*0x76beb0*/
  ComPtr::Constructor(a1); /*0x76beb4*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x76bebb*/
  ComPtr::Set(a1, (int)v5); /*0x76bec2*/
  return (rc_ptr *)a1; /*0x76bec9*/
}


// ==== 0x0076BF00  ReferenceCounted::Audio_Create_76BF00  this=ReferenceCounted  sig=csp ====
char *__thiscall sub_76BF00(char *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  wchar_t *v5; // ecx
  wchar_t *StringCSF; // eax
  int v7; // eax
  wchar_t *v8; // ecx
  wchar_t *v9; // eax

  v3 = this + 8; /*0x76bf05*/
  this->q004 = 0; /*0x76bf08*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x76bf11*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x76bf17*/
  *v3 = &vt_rc_ptr_WDTState; /*0x76bf20*/
  ComPtr::Set(v3, *(_DWORD *)(a2 + 4)); /*0x76bf2c*/
  v4 = *(_DWORD *)(a2 + 4); /*0x76bf31*/
  if ( v4 ) /*0x76bf3d*/
    v5 = *(wchar_t **)(v4 + 8); /*0x76bf3f*/
  else
    v5 = aWdtDefaultshor; /*0x76bf48*/
  StringCSF = GetStringCSF(v5, 0, aDRa2mdpostWdtp, 20); /*0x76bf4d*/
  WideString::Assign((wchar_t **)this + 4, StringCSF); /*0x76bf56*/
  v7 = *(_DWORD *)(a2 + 4); /*0x76bf5b*/
  if ( v7 ) /*0x76bf67*/
    v8 = *(wchar_t **)(v7 + 12); /*0x76bf69*/
  else
    v8 = aWdtDefaultlong; /*0x76bf72*/
  v9 = GetStringCSF(v8, 0, aDRa2mdpostWdtp, 21); /*0x76bf77*/
  WideString::Assign((wchar_t **)this + 5, v9); /*0x76bf80*/
  *(_DWORD *)this = &WorldDominationTour::CampaignProperties::`vftable'; /*0x76bf85*/
  return this; /*0x76bf8d*/
}


// ==== 0x0076BFA0  WDTObject::GetSize  this=WDTObject  sig=csp ====
int __thiscall WDTObject_GetSize(_DWORD *this)
{
  int v1; // eax

  v1 = this->q00C; /*0x76bfa0*/
  if ( v1 ) /*0x76bfa5*/
    return *(_DWORD *)(v1 + 24); /*0x76bfa7*/
  else
    return 0; /*0x76bfab*/
}


// ==== 0x0076BFB0  ConstructWDTSelection_Create_76BFB0  this=ObjectClass  sig=csp ====
int sub_76BFB0()
{
  return 1; /*0x76bfb5*/
}


// ==== 0x0076BFC0  ObjectClass::ConstructWDTSelection_Create_76BFC0  this=MSFont  sig=csp ====
int __thiscall sub_76BFC0(_DWORD *this)
{
  int v1; // eax

  v1 = this->MSFont_field_0x0C; /*0x76bfc0*/
  if ( v1 ) /*0x76bfc5*/
    return *(unsigned __int8 *)(v1 + 20); /*0x76bfcc*/
  else
    return 1; /*0x76bfcf*/
}


// ==== 0x0076BFE0  Conflict::GetOwnerHouse  this=rc_ptr  sig=csp ====
int __thiscall Conflict_GetOwnerHouse(_DWORD *this)
{
  int v1; // eax

  v1 = this->q00C; /*0x76bfe0*/
  if ( v1 ) /*0x76bfe5*/
    return *(_DWORD *)(v1 + 36) - 1; /*0x76bfea*/
  else
    return 0; /*0x76bfec*/
}


// ==== 0x0076C030  CampaignProperties_WorldDominationTour::QueryInterface  this=CampaignProperties@WorldDominationTour  sig=csp ====
void **__thiscall CampaignProperties_WorldDominationTour::QueryInterface(void **Block, char a2)
{
  *Block = &WorldDominationTour::CampaignProperties::`vftable'; /*0x76c036*/
  DeleteAndZero::Alt(Block + 5); /*0x76c03c*/
  DeleteAndZero::Alt(Block + 4); /*0x76c044*/
  *(Block + 2) = &vt_rc_ptr_WDTState; /*0x76c04c*/
  ComPtr::Release(Block + 2); /*0x76c052*/
  ReferenceCounted::Constructor(Block); /*0x76c059*/
  if ( (a2 & 1) != 0 ) /*0x76c063*/
    __3_YAXPAX_Z(Block); /*0x76c066*/
  return Block; /*0x76c070*/
}


// ==== 0x0076C080  sub_76C080  this=-  sig=ida-proto ====
int sub_76C080()
{
  dword_B72A18 = 0; /*0x76c082*/
  dword_B72A1C = 0; /*0x76c087*/
  dword_B72A20 = 0; /*0x76c08c*/
  dword_B72A24 = 0; /*0x76c091*/
  return 0; /*0x76c096*/
}


// ==== 0x0076C0A0  sub_76C0A0  this=-  sig=ida-proto ====
void sub_76C0A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76c0ac*/
  dbl_B72A30 = Math::Sqrt(v0 + v0); /*0x76c0be*/
}


// ==== 0x0076C0D0  sub_76C0D0  this=-  sig=ida-proto ====
void sub_76C0D0()
{
  dbl_B72A80 = dbl_B72A30 / 60.0; /*0x76c0dc*/
}


// ==== 0x0076C0F0  sub_76C0F0  this=-  sig=ida-proto ====
void sub_76C0F0()
{
  dbl_B72A68 = 1.0 / dbl_B72A80; /*0x76c0fc*/
}


// ==== 0x0076C110  sub_76C110  this=-  sig=ida-proto ====
void sub_76C110()
{
  dbl_B72A60 = 0.0174532925199433 * 45.0; /*0x76c11c*/
}


// ==== 0x0076C130  sub_76C130  this=-  sig=ida-proto ====
void sub_76C130()
{
  dbl_B72A38 = 0.0174532925199433 * 60.0; /*0x76c13c*/
}


// ==== 0x0076C150  sub_76C150  this=-  sig=ida-proto ====
void sub_76C150()
{
  dbl_B72A10 = 0.0174532925199433 * 90.0; /*0x76c15c*/
}


// ==== 0x0076C170  sub_76C170  this=-  sig=ida-proto ====
__int64 sub_76C170()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72A10 - dbl_B72A38); /*0x76c182*/
  result = Math::RoundToInt(v0 * dbl_B72A30 * 0.5); /*0x76c196*/
  dword_B72A88 = result; /*0x76c19b*/
  return result; /*0x76c1a0*/
}


// ==== 0x0076C1B0  sub_76C1B0  this=-  sig=ida-proto ====
void sub_76C1B0()
{
  dbl_B72A40 = Math::ArcTan((double)dword_B72A88 * 0.00390625); /*0x76c1c7*/
}


// ==== 0x0076C1E0  sub_76C1E0  this=-  sig=ida-proto ====
void sub_76C1E0()
{
  dbl_B72A58 = Math::ArcTan((double)(2 * dword_B72A88) / dbl_B72A30); /*0x76c202*/
}


// ==== 0x0076C210  sub_76C210  this=-  sig=ida-proto ====
__int64 sub_76C210()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72A88) + 0.5); /*0x76c22b*/
  dword_B72A7C = result; /*0x76c230*/
  return result; /*0x76c236*/
}


// ==== 0x0076C240  sub_76C240  this=-  sig=ida-proto ====
int sub_76C240()
{
  word_B72A28 = 0; /*0x76c242*/
  word_B72A2A = 0; /*0x76c248*/
  return 0; /*0x76c24e*/
}


// ==== 0x0076C250  sub_76C250  this=-  sig=ida-proto ====
int sub_76C250()
{
  dword_B72A48 = 0; /*0x76c252*/
  dword_B72A4C = 0; /*0x76c257*/
  dword_B72A50 = 0; /*0x76c25c*/
  return 0; /*0x76c261*/
}


// ==== 0x0076C270  sub_76C270  this=-  sig=ida-proto ====
int sub_76C270()
{
  dword_B72A78 = 0; /*0x76c275*/
  dword_B72A70 = 128; /*0x76c27f*/
  dword_B72A74 = 128; /*0x76c284*/
  return 128; /*0x76c289*/
}


// ==== 0x0076C290  ObjectClass::ConstructWDTSelection  this=Selection@WorldDominationTour  sig=csp ====
int __thiscall ConstructWDTSelection(Selection_WorldDominationTour *this, int arg0, int arg4)
{
  int v4; // eax
  int _76BFC0; // eax
  _BYTE *v6; // eax
  MSFont *v5; // eax
  MSAnim *_771800; // eax
  int _76BFB0; // eax
  char **v10; // eax
  int v11; // ebp
  int v12; // eax
  wchar_t *StringCSF; // eax
  void *v14; // eax
  MSAnim *v13; // edi
  wchar_t *eax7a; // eax
  void *v17; // eax
  MSAnim *v16; // edi
  int v20; // [esp-4h] [ebp-D8h]
  char *a1; // [esp+10h] [ebp-C4h] BYREF
  char *a3; // [esp+14h] [ebp-C0h] BYREF
  char *a2; // [esp+18h] [ebp-BCh] BYREF
  wchar_t *v24; // [esp+1Ch] [ebp-B8h] BYREF
  wchar_t *v25; // [esp+20h] [ebp-B4h] BYREF
  void *v26; // [esp+24h] [ebp-B0h] BYREF
  ObjectClass v27; // [esp+28h] [ebp-ACh] BYREF

  MSEngine::Construct(this); /*0x76c29c*/
  ComPtr::Constructor((rc_ptr_base *)&this->field_48); /*0x76c2a6*/
  this->field_48 = (int)&vt_rc_ptr_WorldDominationTour_Campaign; /*0x76c2b2*/
  ComPtr::Set((rc_ptr_base *)&this->field_48, *(_DWORD *)(arg0 + 4)); /*0x76c2be*/
  ComPtr::Constructor((rc_ptr_base *)&this->field_50); /*0x76c2c8*/
  this->field_50 = (int)&vt_rc_ptr_WorldDominationTour_Conflict; /*0x76c2cd*/
  WinsockInterface::ProcessPacket(&this->__pad_54[4], *(_DWORD *)(*(_DWORD *)(arg0 + 4) + 68)); /*0x76c2dd*/
  this->__pad_440[4] = 0; /*0x76c2e7*/
  *(_DWORD *)&this->__pad_440[8] = -1; /*0x76c2ed*/
  *(_DWORD *)&this->__pad_440[12] = -1; /*0x76c2f3*/
  *(_DWORD *)&this->__pad_440[16] = Conflict::GetOwnerHouse(*(_DWORD **)(*(_DWORD *)(arg0 + 4) + 12)); /*0x76c30e*/
  *(_DWORD *)&this->__pad_440[20] = -1; /*0x76c314*/
  v4 = *(_DWORD *)(arg0 + 4); /*0x76c31a*/
  v20 = *(_DWORD *)(v4 + 68); /*0x76c323*/
  _76BFC0 = ConstructWDTSelection_Create_76BFC0(*(_DWORD **)(v4 + 12)); /*0x76c327*/
  ConstructWDTSelection_Create_767FB0((rc_ptr_base *)&this->__pad_440[24], _76BFC0, arg4, v20); /*0x76c334*/
  *(_DWORD *)&this->__pad_440[32] = -1; /*0x76c339*/
  ComPtr::Constructor((rc_ptr_base *)&this->field_464); /*0x76c347*/
  this->field_464 = (int)&vt_rc_ptr_WorldDominationTour_Territory; /*0x76c34c*/
  this->field_46C = 0; /*0x76c355*/
  this->field_470 = 0; /*0x76c35b*/
  this->field_474 = 0; /*0x76c361*/
  this->field_478 = 32; /*0x76c367*/
  *(_DWORD *)this->__pad_47C = 0; /*0x76c371*/
  *(_DWORD *)&this->__pad_47C[4] = 0; /*0x76c377*/
  v6 = (_BYTE *)__2_YAPAXI_Z(0x20u); /*0x76c37d*/
  if ( v6 ) /*0x76c387*/
    v5 = (MSFont *)CampaignClass::Constructor_1(v6, 0); /*0x76c38c*/
  else
    v5 = 0; /*0x76c393*/
  *(_DWORD *)&this->__pad_47C[8] = v5; /*0x76c39b*/
  ConstructWDTSelection_Create_76F500(&this->__pad_47C[12]); /*0x76c3a1*/
  String::Assign((char **)&this->__pad_47C[20], 0); /*0x76c3ad*/
  ConstructWDTSelection_Create_76F210(&this->field_494, 0, 0); /*0x76c3bc*/
  this->field_494 = (int)&DynamicVectorClass<MSSfxEntry *>::`vftable'; /*0x76c3c1*/
  *(_DWORD *)&this->__pad_498[16] = 10; /*0x76c3c8*/
  *(_DWORD *)&this->__pad_498[12] = 0; /*0x76c3cf*/
  this->field_0 = (int)&WorldDominationTour::Selection::`vftable'; /*0x76c3d2*/
  this->field_4AC = (unsigned __int16)Property::Set( /*0x76c448*/
                                        aP0,
                                        (AbstractClass *)((*((unsigned __int8 *)&(&g_MatrixTransformState)[227] + 4) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
                                                        | (*((unsigned __int8 *)&(&g_MatrixTransformState)[227] + 5) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                                                        | (*((unsigned __int8 *)&(&g_MatrixTransformState)[227] + 6) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])));
  _771800 = (MSAnim *)ConstructWDTSelection_Create_771800(&this->__pad_54[4]); /*0x76c44e*/
  PriorityQueue::Add(this, _771800); /*0x76c456*/
  CCFileClass::Construct(&v27.ambientSoundController[1], aWdtmapmdIni); /*0x76c464*/
  *(_DWORD *)&v27.__pad_0[4] = 0; /*0x76c46d*/
  *(_DWORD *)&v27.__pad_0[8] = 0; /*0x76c471*/
  GenericList::Constructor(&v27.__pad_0[12]); /*0x76c475*/
  *(_DWORD *)&v27.__pad_0[12] = &vt_List_INIClass_INISection; /*0x76c484*/
  memset(&v27.owningHouseIndex, 0, 13); /*0x76c48c*/
  v27.attachedBomb = 0; /*0x76c49c*/
  v27.ambientSoundController[0] = 0; /*0x76c4a0*/
  *(_DWORD *)v27.__pad_0 = &vt_INIClass; /*0x76c4a4*/
  FileStraw::Open(&v27, (int)&v27.ambientSoundController[1], 0); /*0x76c4ac*/
  String::Assign(&a1, aVoiceovers); /*0x76c4ba*/
  ConstructWDTSelection_Create_76C970(this, &v27, (Selection_WorldDominationTour *)&a1); /*0x76c4cb*/
  DeleteAndZero((void **)&a1); /*0x76c4d4*/
  String::Assign(&a1, aSounds_0); /*0x76c4e2*/
  ConstructWDTSelection_Create_76CA60(this, (Selection_WorldDominationTour *)&v27, &a1); /*0x76c4f3*/
  DeleteAndZero((void **)&a1); /*0x76c4fc*/
  unknown_libname_73(&a2); /*0x76c505*/
  String::Assign(&a3, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x76c513*/
  String::Assign(&a1, aLayouts); /*0x76c521*/
  _76BFB0 = ConstructWDTSelection_Create_76BFB0(); /*0x76c53b*/
  v10 = FromStringInt((char **)&v26, _76BFB0); /*0x76c546*/
  INIClass::ReadString(&v27, (ObjectClass *)&a1, (ObjectClass *)v10, (ReferenceCounted *)&a3, (int)&a2); /*0x76c555*/
  DeleteAndZero(&v26); /*0x76c55e*/
  DeleteAndZero((void **)&a1); /*0x76c567*/
  DeleteAndZero((void **)&a3); /*0x76c570*/
  ConstructWDTSelection_Create_76CBF0(this, (Selection_WorldDominationTour *)&v27, (ObjectClass *)&a2); /*0x76c581*/
  v11 = *(_DWORD *)&this->__pad_440[28]; /*0x76c590*/
  LOBYTE(v12) = ConstructWDTSelection_Create(*(_DWORD *)(arg0 + 4), arg4); /*0x76c599*/
  ArtConfig::ReadLayout(v11, (int)&v27, this, v12); /*0x76c5a7*/
  StringCSF = GetStringCSF(aGuiPlaywdt, 0, g_Str_File_WDTSel_cpp, 157); /*0x76c5bd*/
  WideString::Assign(&v25, (CampaignScore *)StringCSF); /*0x76c5c7*/
  v14 = (void *)__2_YAPAXI_Z(0x34u); /*0x76c5ce*/
  if ( v14 ) /*0x76c5d8*/
    v13 = (MSAnim *)MSBitPrintAnim::Construct( /*0x76c5f5*/
                      v14,
                      (const wchar_t **)&v25,
                      (MSAnim *)(*(_DWORD *)&this->__pad_440[28] + 156),
                      (MPCooperative *)1);
  else
    v13 = 0; /*0x76c5f9*/
  ScoreClass::SetState(v13, 1); /*0x76c5ff*/
  PriorityQueue::Add(this, v13); /*0x76c607*/
  eax7a = GetStringCSF(aTxtBack, 0, g_Str_File_WDTSel_cpp, 164); /*0x76c61d*/
  WideString::Assign(&v24, (CampaignScore *)eax7a); /*0x76c627*/
  v17 = (void *)__2_YAPAXI_Z(0x34u); /*0x76c62e*/
  if ( v17 ) /*0x76c638*/
    v16 = (MSAnim *)MSBitPrintAnim::Construct( /*0x76c655*/
                      v17,
                      (const wchar_t **)&v24,
                      (MSAnim *)(*(_DWORD *)&this->__pad_440[28] + 172),
                      (MPCooperative *)1);
  else
    v16 = 0; /*0x76c659*/
  ScoreClass::SetState(v16, 1); /*0x76c65f*/
  PriorityQueue::Add(this, v16); /*0x76c667*/
  ConstructWDTSelection_Create_76EEB0((int)this); /*0x76c66e*/
  DeleteAndZero::Alt((void **)&v24); /*0x76c677*/
  DeleteAndZero::Alt((void **)&v25); /*0x76c680*/
  DeleteAndZero((void **)&a2); /*0x76c689*/
  HashTable::DestroyHashTableINIClass((void **)&v27); /*0x76c692*/
  v27.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x76c69e*/
  v27.location[2] = 0; /*0x76c6a6*/
  Vector::Clear((int)&v27.isInLogic); /*0x76c6ad*/
  v27.ambientSoundController[1] = (int)&off_7E1668; /*0x76c6b6*/
  BufferIOFileClass::Dtor(&v27.ambientSoundController[1]); /*0x76c6be*/
  return (int)this; /*0x76c6c5*/
}


// ==== 0x0076C6E0  Selection@WorldDominationTour::SelectionInitializeWOL  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall SelectionInitializeWOL(Selection_WorldDominationTour *this)
{
  _DWORD *v2; // eax
  MSShapeAnim *v3; // eax
  _DWORD *v4; // eax
  MSShapeAnim *v5; // eax
  AbstractClass *i; // eax
  int ecx12; // ecx
  CCINIClass *v7; // edi
  int (__thiscall ***ecx15)(_DWORD, int); // ecx
  SessionClass *v9; // edi
  SessionClass *v10; // edi
  int (__thiscall ***v12)(_DWORD, int); // ecx
  void **v13; // [esp+10h] [ebp-18h] BYREF
  int *v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  this->field_0 = (int)&WorldDominationTour::Selection::`vftable'; /*0x76c6e9*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x76c6f7*/
  Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)0xFFFFFFFD); /*0x76c701*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 24))( /*0x76c710*/
    *(_DWORD *)&stru_87C374.__pad_579C[22528],
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x76c71d*/
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    0);
  while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 40))(*(_DWORD *)&stru_87C374.__pad_579C[23344]) < 0 ) /*0x76c72d*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x76c737*/
  ComPtr::Set((rc_ptr_base *)&this->field_464, 0); /*0x76c753*/
  VectorCursor::Construct(&v16, *(_DWORD *)&this->__pad_440[28] + 44, 0); /*0x76c768*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v16 + 4))(&v16) ) /*0x76c775*/
  {
    v2 = (_DWORD *)FileClass::SetState((_DWORD *)(*(_DWORD *)(v17 + 4) + 8 * v18)); /*0x76c78a*/
    v3 = (MSShapeAnim *)WDTObject::GetAndClearFlag(v2); /*0x76c791*/
    if ( v3 ) /*0x76c798*/
      Session::RemoveTeam(this, v3); /*0x76c79d*/
    (*(void (__thiscall **)(int *))(v16 + 8))(&v16); /*0x76c7aa*/
  }
  VectorCursor::Construct(&v16, *(_DWORD *)&this->__pad_440[28] + 44, 0); /*0x76c7cc*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v16 + 4))(&v16) ) /*0x76c7d9*/
  {
    v4 = (_DWORD *)FileClass::SetState((_DWORD *)(*(_DWORD *)(v17 + 4) + 8 * v18)); /*0x76c7ee*/
    v5 = (MSShapeAnim *)WDTObject::GetAndClearFlag(v4); /*0x76c7f5*/
    if ( v5 ) /*0x76c7fc*/
      Session::RemoveTeam(this, v5); /*0x76c801*/
    (*(void (__thiscall **)(int *))(v16 + 8))(&v16); /*0x76c80e*/
  }
  v14 = &this->field_494; /*0x76c82a*/
  v15 = 0; /*0x76c82e*/
  v13 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76c836*/
  for ( i = (AbstractClass *)Vector::HasCapacity(&v13); /*0x76c846*/
        (_BYTE)i;
        i = (AbstractClass *)((int (__thiscall *)(void ***))v13[1])(&v13) )
  {
    ecx12 = v14[1]; /*0x76c850*/
    v7 = *(CCINIClass **)(ecx12 + 4 * v15); /*0x76c853*/
    if ( v7 ) /*0x76c858*/
    {
      j_DeleteAndZero(*(void ***)(ecx12 + 4 * v15)); /*0x76c85c*/
      __3_YAXPAX_Z(v7); /*0x76c862*/
    }
    ((void (__thiscall *)(void ***))v13[2])(&v13); /*0x76c872*/
  }
  ecx15 = (int (__thiscall ***)(_DWORD, int))this->field_46C; /*0x76c884*/
  if ( ecx15 ) /*0x76c88c*/
    i = (AbstractClass *)(**ecx15)(ecx15, 1); /*0x76c892*/
  v9 = (SessionClass *)this->field_470; /*0x76c894*/
  if ( v9 ) /*0x76c89c*/
  {
    DeleteAndZero(this->field_470); /*0x76c8a0*/
    __3_YAXPAX_Z(v9); /*0x76c8a6*/
  }
  v10 = (SessionClass *)this->field_474; /*0x76c8ae*/
  if ( v10 ) /*0x76c8b6*/
  {
    DeleteAndZero(this->field_474); /*0x76c8ba*/
    __3_YAXPAX_Z(v10); /*0x76c8c0*/
  }
  v12 = *(int (__thiscall ****)(_DWORD, int))&this->__pad_47C[8]; /*0x76c8c8*/
  if ( v12 ) /*0x76c8d0*/
    i = (AbstractClass *)(**v12)(v12, 1); /*0x76c8d6*/
  LOWORD(i) = this->field_4AC; /*0x76c8d8*/
  Property::Set(aP0, i); /*0x76c8e6*/
  this->field_494 = (int)&vt_VectorClass_MSSfxEntry; /*0x76c8ed*/
  VectorClass_ptr_MSSfxEntry::Remove((int)&this->field_494); /*0x76c8f3*/
  DeleteAndZero((int)&this->__pad_47C[20]); /*0x76c8fe*/
  *(_DWORD *)&this->__pad_47C[12] = &vt_rc_ptr_WorldDominationTour_State; /*0x76c909*/
  ComPtr::Release((rc_ptr_base *)&this->__pad_47C[12]); /*0x76c90f*/
  this->field_464 = (int)&vt_rc_ptr_WorldDominationTour_Territory; /*0x76c916*/
  ComPtr::Release((rc_ptr_base *)&this->field_464); /*0x76c91d*/
  *(_DWORD *)&this->__pad_440[24] = &vt_rc_ptr_WorldDominationTour_Map; /*0x76c928*/
  ComPtr::Release((rc_ptr_base *)&this->__pad_440[24]); /*0x76c92e*/
  System_Init_770430((int)&this->__pad_54[4]); /*0x76c936*/
  this->field_50 = (int)&vt_rc_ptr_WorldDominationTour_Conflict; /*0x76c93e*/
  ComPtr::Release((rc_ptr_base *)&this->field_50); /*0x76c944*/
  this->field_48 = (int)&vt_rc_ptr_WorldDominationTour_Campaign; /*0x76c94c*/
  ComPtr::Release((rc_ptr_base *)&this->field_48); /*0x76c952*/
  MSEngine::Destruct(this); /*0x76c959*/
}


// ==== 0x0076C970  ObjectClass::ConstructWDTSelection_Create_76C970  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76C970(
        Selection_WorldDominationTour *this,
        _DWORD *a1,
        Selection_WorldDominationTour *aP2)
{
  ObjectClass *v3; // edi

  v3 = (ObjectClass *)aP2; /*0x76c977*/
  Animation::LoadSidebarAnimations((ObjectClass *)&this->__pad_54[4], a1, (ObjectClass *)aP2); /*0x76c982*/
  String::Assign((char **)&aP2, aWinningthresho); /*0x76c990*/
  *(_DWORD *)&this->__pad_54[992] = INIClass::ReadInt( /*0x76c9ad*/
                                      a1,
                                      (char **)v3,
                                      (char **)&aP2,
                                      *(INIClass **)&this->__pad_54[992]);
  DeleteAndZero((void **)&aP2); /*0x76c9b3*/
  String::Assign((char **)&aP2, aMegawinningthr); /*0x76c9c1*/
  this->field_43C = INIClass::ReadInt(a1, (char **)v3, (char **)&aP2, (INIClass *)this->field_43C); /*0x76c9de*/
  DeleteAndZero((void **)&aP2); /*0x76c9e4*/
  String::Assign((char **)&aP2, aLosingthreshol); /*0x76c9f2*/
  this->field_438 = INIClass::ReadInt(a1, (char **)v3, (char **)&aP2, (INIClass *)this->field_438); /*0x76ca0f*/
  DeleteAndZero((void **)&aP2); /*0x76ca15*/
  String::Assign((char **)&aP2, aMegalosingthre); /*0x76ca23*/
  *(_DWORD *)this->__pad_440 = INIClass::ReadInt(a1, (char **)v3, (char **)&aP2, *(INIClass **)this->__pad_440); /*0x76ca40*/
  DeleteAndZero((void **)&aP2); /*0x76ca46*/
}


// ==== 0x0076CA60  ObjectClass::ConstructWDTSelection_Create_76CA60  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CA60(
        Selection_WorldDominationTour *this,
        Selection_WorldDominationTour *aP1,
        char **a2)
{
  char **v3; // esi
  char **v4; // ebp
  ObjectClass *v5; // edi
  int Key; // eax
  ObjectClass *v7; // ecx
  bool v8; // bl
  int v9; // eax
  ObjectClass *v10; // edi
  char *v11; // ecx
  char *v12; // eax
  char *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // [esp+10h] [ebp-14h] BYREF
  char *a3; // [esp+14h] [ebp-10h] BYREF
  ObjectClass *v19; // [esp+18h] [ebp-Ch]
  ObjectClass *v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = (char **)this; /*0x76ca66*/
  v20 = (ObjectClass *)this; /*0x76ca6d*/
  unknown_libname_73(&v17); /*0x76ca71*/
  v4 = a2; /*0x76ca76*/
  v5 = (ObjectClass *)aP1; /*0x76ca7a*/
  Key = INIClass::FindKey((char *)aP1, (AbstractClass *)a2); /*0x76ca81*/
  v7 = 0; /*0x76ca86*/
  v21 = Key; /*0x76ca88*/
  v19 = 0; /*0x76ca8e*/
  if ( Key > 0 ) /*0x76ca92*/
  {
    while ( 1 ) /*0x76caab*/
    {
      INIClass::GetStringByIndexEx(v5, (ObjectClass *)&a2, (ObjectClass *)v4, v7); /*0x76caab*/
      if ( String::NotEquals((const char **)&a2, 0) ) /*0x76cab6*/
      {
        String::Assign(&a3, 0); /*0x76cac9*/
        v8 = (int)INIClass::ReadString(v5, (ObjectClass *)v4, (ObjectClass *)&a2, (ReferenceCounted *)&a3, (int)&v17) > 0; /*0x76caeb*/
        DeleteAndZero((void **)&a3); /*0x76caee*/
        if ( v8 ) /*0x76caf5*/
        {
          if ( String::Equals_Alt((const char **)&a2, g_INI_Key_Theme) ) /*0x76cb04*/
          {
            String::Reassign(v3 + 292, (AbstractClass *)&v17); /*0x76cbcf*/
            DeleteAndZero((void **)&a2); /*0x76cbd8*/
            break; /*0x76cbd8*/
          }
          v9 = __2_YAPAXI_Z(0x10u); /*0x76cb13*/
          if ( v9 ) /*0x76cb1d*/
            v10 = (ObjectClass *)Audio::ParseVolume(v9, (const char **)&a2, (ObjectClass *)&v17); /*0x76cb30*/
          else
            v10 = 0; /*0x76cb34*/
          if ( String::Equals_Alt((const char **)v10, 0) ) /*0x76cb3a*/
          {
            if ( v10 ) /*0x76cb45*/
            {
              j_DeleteAndZero((void **)v10); /*0x76cb49*/
              __3_YAXPAX_Z(v10); /*0x76cb4f*/
            }
          }
          else if ( v10 ) /*0x76cb5b*/
          {
            v11 = v3[295]; /*0x76cb5d*/
            v12 = v3[297]; /*0x76cb63*/
            v13 = (char *)(v3 + 293); /*0x76cb69*/
            if ( (int)v12 < (int)v11 /*0x76cb8e*/
              || (v13[13] || !v11)
              && (v14 = *((_DWORD *)v13 + 5), v14 > 0)
              && (*(unsigned __int8 (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)v13 + 8))(v13, &v11[v14], 0) )
            {
              v15 = *((_DWORD *)v13 + 4); /*0x76cb95*/
              v16 = *((_DWORD *)v13 + 1); /*0x76cb98*/
              *((_DWORD *)v13 + 4) = v15 + 1; /*0x76cb9e*/
              *(_DWORD *)(v16 + 4 * v15) = v10; /*0x76cba1*/
            }
          }
        }
      }
      DeleteAndZero((void **)&a2); /*0x76cba8*/
      v7 = (ObjectClass *)&v19->__pad_0[1]; /*0x76cbb5*/
      v19 = (ObjectClass *)((char *)v19 + 1); /*0x76cbb8*/
      if ( (int)v19 >= v21 ) /*0x76cbbc*/
        break; /*0x76cbbc*/
      v5 = (ObjectClass *)aP1; /*0x76ca9a*/
      v3 = (char **)v20; /*0x76ca9e*/
    }
  }
  DeleteAndZero((void **)&v17); /*0x76cbdd*/
}


// ==== 0x0076CBF0  ObjectClass::ConstructWDTSelection_Create_76CBF0  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CBF0(
        Selection_WorldDominationTour *this,
        Selection_WorldDominationTour *aP1,
        ObjectClass *aP2)
{
  Selection_WorldDominationTour *v4; // eax
  char **v5; // eax
  ObjectClass *v6; // edi
  ObjectClass *v7; // ebp
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  int v14; // eax
  char **v15; // eax
  ObjectClass *v16; // [esp+10h] [ebp-10h] BYREF
  void *v17; // [esp+14h] [ebp-Ch] BYREF
  char *a3; // [esp+18h] [ebp-8h] BYREF
  ObjectClass *v19; // [esp+1Ch] [ebp-4h] BYREF

  unknown_libname_73(&v16); /*0x76cbfd*/
  v4 = StaticString::Factory(*(void **)(*(_DWORD *)this->__pad_4C + 68)); /*0x76cc08*/
  String::AssignFromPtr((char **)&v17, (const char **)v4); /*0x76cc12*/
  String::Assign(&a3, 0); /*0x76cc1d*/
  v5 = String::Concat2((const char **)&v17, (char **)&v19, aZoomingtarget); /*0x76cc3a*/
  v6 = aP2; /*0x76cc3f*/
  v7 = (ObjectClass *)aP1; /*0x76cc43*/
  v8 = (int)INIClass::ReadString((ObjectClass *)aP1, aP2, (ObjectClass *)v5, (ReferenceCounted *)&a3, (int)&v16) > 0; /*0x76cc56*/
  DeleteAndZero((void **)&v19); /*0x76cc59*/
  DeleteAndZero((void **)&a3); /*0x76cc62*/
  if ( v8 ) /*0x76cc69*/
  {
    v9 = __2_YAPAXI_Z(0x10u); /*0x76cc6d*/
    if ( v9 ) /*0x76cc77*/
      v10 = String::SplitComma(v9, (ObjectClass *)&v16); /*0x76cc80*/
    else
      v10 = 0; /*0x76cc87*/
    this->field_470 = v10; /*0x76cc89*/
  }
  String::Assign((char **)&aP2, 0); /*0x76cc95*/
  v11 = String::Concat2((const char **)&v17, (char **)&aP1, aTargetpalette); /*0x76ccb2*/
  INIClass::ReadString(v7, v6, (ObjectClass *)v11, (ReferenceCounted *)&aP2, (int)&v16); /*0x76ccbb*/
  DeleteAndZero((void **)&aP1); /*0x76ccc4*/
  DeleteAndZero((void **)&aP2); /*0x76cccd*/
  this->field_46C = (int)PaletteClass::Load((const char **)&v16); /*0x76cce1*/
  String::Assign((char **)&aP2, 0); /*0x76cce7*/
  v12 = String::Concat2((const char **)&v17, (char **)&aP1, &stru_830620.__pad_579C[37424]); /*0x76cd04*/
  INIClass::ReadString(v7, v6, (ObjectClass *)v12, (ReferenceCounted *)&aP2, (int)&v16); /*0x76cd0d*/
  DeleteAndZero((void **)&aP1); /*0x76cd16*/
  DeleteAndZero((void **)&aP2); /*0x76cd1f*/
  v13 = __2_YAPAXI_Z(0x10u); /*0x76cd26*/
  if ( v13 ) /*0x76cd30*/
    v14 = String::SplitComma(v13, (ObjectClass *)&v16); /*0x76cd39*/
  else
    v14 = 0; /*0x76cd40*/
  this->field_474 = v14; /*0x76cd42*/
  v15 = String::Concat2((const char **)&v17, (char **)&aP2, aTargetdividing); /*0x76cd58*/
  this->field_478 = INIClass::ReadInt(v7, (char **)v6, v15, (INIClass *)0x20); /*0x76cd6a*/
  DeleteAndZero((void **)&aP2); /*0x76cd70*/
  DeleteAndZero(&v17); /*0x76cd79*/
  DeleteAndZero((void **)&v16); /*0x76cd82*/
}


// ==== 0x0076CDA0  ObjectClass::ShowWDTTerritorySelection  this=ObjectClass  sig=csp ====
rc_ptr *__thiscall ShowWDTTerritorySelection(ObjectClass *this, _DWORD *a2)
{
  int v3; // eax
  int State; // eax
  wchar_t *StringCSF; // eax
  char v6; // bl
  CreateGameDialogControl *ecx1; // ecx
  ObjectClass *v7; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  wchar_t *v15; // eax
  int v16; // eax
  int v17; // eax
  ObjectClass *v18; // eax
  char v19; // bl
  ObjectClass *v20; // eax
  int v22; // [esp-4h] [ebp-50h]
  char v23; // [esp+13h] [ebp-39h] BYREF
  wchar_t *v24; // [esp+14h] [ebp-38h] BYREF
  wchar_t *v25; // [esp+18h] [ebp-34h] BYREF
  void *v26; // [esp+1Ch] [ebp-30h] BYREF
  void *v27; // [esp+20h] [ebp-2Ch] BYREF
  rc_ptr_base v28; // [esp+24h] [ebp-28h] BYREF
  ObjectClass *v29; // [esp+28h] [ebp-24h]
  rc_ptr_base v30; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v31[2]; // [esp+34h] [ebp-18h] BYREF
  void **v32; // [esp+3Ch] [ebp-10h] BYREF
  int *v33; // [esp+40h] [ebp-Ch]
  int v34; // [esp+44h] [ebp-8h]
  int v35; // [esp+48h] [ebp-4h]

  v3 = this->ambientSoundController[4]; /*0x76cdab*/
  v35 = 0; /*0x76cdae*/
  State = FileClass::GetState((_DWORD *)(v3 + 8)); /*0x76cdb9*/
  ScoreText::ShowAlt((int *)this->__pad_0, (CampaignScore *)(State + 20), 0); /*0x76cdc4*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76cdda*/
  WideString::Assign(&v24, (CampaignScore *)StringCSF); /*0x76cde4*/
  ScoreText::Show((int *)this->__pad_0, (ObjectClass *)&v24); /*0x76cdf0*/
  DeleteAndZero::Alt((void **)&v24); /*0x76cdf9*/
  v6 = 0; /*0x76ce04*/
  v23 = 0; /*0x76ce06*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x76ce0a*/
  while ( 1 ) /*0x76ce0f*/
  {
    Game::ProcessIdle(ecx1); /*0x76ce0f*/
    DDraw::HandleSuspend(this); /*0x76ce16*/
    v7 = (ObjectClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 48))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x76ce2c*/
    v28.vfptr = (void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x76ce39*/
    v29 = v7; /*0x76ce3d*/
    if ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x76ce41*/
    {
      v9 = (unsigned __int16)EventQueue::Read(MEMORY[0x87F770]); /*0x76ce5a*/
      if ( v9 == 1 ) /*0x76ce62*/
      {
        WDTGame::ProcessTerritorySelection((int *)this->__pad_0, &v28, (ObjectClass *)&v23); /*0x76ce70*/
      }
      else if ( v9 == 2049 ) /*0x76ce7f*/
      {
        WDTSurface::ToggleState(this->__pad_45C, this, 0); /*0x76ce8e*/
        if ( WDTSurface::PointInRect(*((_DWORD **)this + 279), &v28) ) /*0x76ce9e*/
        {
          String::Assign((char **)&v24, aCanceled); /*0x76ceb4*/
          if ( String::NotEquals((const char **)&v24, 0) ) /*0x76cebf*/
          {
            v33 = (int *)((char *)this + 1172); /*0x76ced7*/
            v34 = 0; /*0x76cedf*/
            v32 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76cee7*/
            if ( Vector::HasCapacity(&v32) ) /*0x76ceeb*/
            {
              do /*0x76cf24*/
              {
                if ( !String::Compare((const char **)&v24, *(const char ***)(v33[1] + 4 * v34)) ) /*0x76cf08*/
                  break; /*0x76cf0f*/
                ((void (__thiscall *)(void ***))v32[2])(&v32); /*0x76cf19*/
              }
              while ( ((unsigned __int8 (__thiscall *)(void ***))v32[1])(&v32) ); /*0x76cf24*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***))v32[1])(&v32) ) /*0x76cf33*/
              nullsub_24(); /*0x76cf48*/
            v32 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76cf4d*/
          }
          DeleteAndZero((void **)&v24); /*0x76cf55*/
          v6 = 1; /*0x76cf5a*/
        }
      }
    }
    else
    {
      v10 = (int)v29; /*0x76cf6d*/
      if ( v28.vfptr != (void *)*((_DWORD *)this + 274) || v29 != *((ObjectClass **)this + 275) ) /*0x76cf79*/
      {
        *((rc_ptr_base *)this + 274) = v28; /*0x76cf85*/
        *((_DWORD *)this + 275) = v10; /*0x76cf8f*/
        v11 = WDTSurface::PointInRect(*((_DWORD **)this + 279), &v28) + 1; /*0x76cfa5*/
        v12 = *((_DWORD *)this + 277); /*0x76cfa7*/
        if ( v12 != v11 ) /*0x76cfaf*/
        {
          v13 = v12 - 1; /*0x76cfb5*/
          if ( v13 ) /*0x76cfb6*/
          {
            if ( v13 == 1 && *(_BYTE *)(Count::Get((_DWORD *)this + 278) + 104) ) /*0x76cfc6*/
            {
              v14 = Count::Get((_DWORD *)this + 278); /*0x76cfd6*/
              WDTGame::ToggleTeamMode(v14, this, 0); /*0x76cfdd*/
              v15 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 916); /*0x76cff3*/
              WideString::Assign(&v25, (CampaignScore *)v15); /*0x76cffd*/
              ScoreText::Show((int *)this->__pad_0, (ObjectClass *)&v25); /*0x76d009*/
              DeleteAndZero::Alt((void **)&v25); /*0x76d012*/
            }
          }
          else
          {
            String::Assign((char **)&v26, aMapleave); /*0x76d022*/
            MSSfxClass::FindByName(this->__pad_0, (ObjectClass *)&v26); /*0x76d02e*/
            DeleteAndZero(&v26); /*0x76d037*/
            this->q118 = -1; /*0x76d040*/
            MSFrameAnim::drawFrame(&v30); /*0x76d04a*/
            TerritorySelectWDT((int *)this->__pad_0, (ObjectClass *)&v30); /*0x76d056*/
            v30.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d05f*/
            ComPtr::Release(&v30); /*0x76d067*/
          }
        }
        if ( v11 == 1 ) /*0x76d06f*/
        {
          if ( *((_DWORD *)this + 277) != 1 ) /*0x76d091*/
          {
            String::Assign((char **)&v27, aMapenter); /*0x76d09c*/
            MSSfxClass::FindByName(this->__pad_0, (ObjectClass *)&v27); /*0x76d0a8*/
            DeleteAndZero(&v27); /*0x76d0b1*/
          }
          v16 = Count::Get((_DWORD *)this + 278); /*0x76d0bd*/
          v17 = Surface::PixelToIndex(v16, &v28); /*0x76d0c4*/
          if ( v17 != this->q118 ) /*0x76d0cf*/
          {
            v22 = v17; /*0x76d0d5*/
            this->q118 = v17; /*0x76d0d9*/
            Count::Get((_DWORD *)this + 278); /*0x76d0df*/
            v18 = (ObjectClass *)ComPtr::DestroyWrapper((int)v31, v22); /*0x76d0e6*/
            TerritorySelectWDT((int *)this->__pad_0, v18); /*0x76d0ee*/
            ComPtr::Territory_Dtor(v31); /*0x76d0f7*/
          }
        }
        else if ( v11 == 2 && *((_DWORD *)this + 277) != 2 ) /*0x76d07f*/
        {
          ShowWDTTerritorySelection_Show((int *)this->__pad_0); /*0x76d083*/
        }
        *((_DWORD *)this + 277) = v11; /*0x76d0fc*/
      }
    }
    GameClass::FrameLoop((int *)this->__pad_0, 1); /*0x76d106*/
    if ( v6 ) /*0x76d111*/
      break; /*0x76d111*/
    if ( v23 ) /*0x76d115*/
    {
      v19 = v35; /*0x76d11b*/
      v20 = (ObjectClass *)((char *)this + 1124); /*0x76d11f*/
      goto LABEL_38; /*0x76d125*/
    }
  }
  if ( v23 ) /*0x76d129*/
  {
    v19 = v35; /*0x76d12b*/
    v20 = (ObjectClass *)((char *)this + 1124); /*0x76d12f*/
  }
  else
  {
    ComPtr::Constructor(&v28); /*0x76d13b*/
    v28.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d140*/
    v19 = 1; /*0x76d148*/
    v20 = (ObjectClass *)&v28; /*0x76d14d*/
  }
LABEL_38:
  WDTGame::Constructor(a2, v20); /*0x76d151*/
  if ( (v19 & 1) != 0 ) /*0x76d160*/
  {
    v28.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d166*/
    ComPtr::Release(&v28); /*0x76d16e*/
  }
  return (rc_ptr *)a2; /*0x76d175*/
}


// ==== 0x0076D180  WDTGame::ProcessTerritorySelection  this=ObjectClass  sig=csp ====
void __thiscall WDTGame::ProcessTerritorySelection(int *this, _DWORD *a1, ObjectClass *aP2)
{
  _DWORD *v3; // ebx
  int v5; // ecx
  wchar_t *StringCSF; // eax
  int v7; // eax
  int v8; // eax
  ObjectClass *v9; // eax
  ObjectClass *v10; // eax
  bool v11; // bl
  int v12; // [esp-8h] [ebp-30h]
  _DWORD v13[2]; // [esp+8h] [ebp-20h] BYREF
  _DWORD v14[2]; // [esp+10h] [ebp-18h] BYREF
  void **v15; // [esp+18h] [ebp-10h] BYREF
  int *v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v3 = a1; /*0x76d184*/
  v18 = 0; /*0x76d18c*/
  if ( WDTSurface::PointInRect((_DWORD *)this->__pad_45C, a1) ) /*0x76d19a*/
  {
    WDTSurface::ToggleState(this->__pad_45C, (ObjectClass *)this, (ObjectClass *)1); /*0x76d1bd*/
    v5 = this->__pad_45C; /*0x76d1c2*/
    if ( !*(_BYTE *)(v5 + 104) ) /*0x76d1c8*/
    {
      WDTGame::ToggleTeamMode(v5, (ObjectClass *)this, (ObjectClass *)1); /*0x76d1d6*/
      String::Assign((char **)&aP2, aMousecancel); /*0x76d1e4*/
      MSSfxClass::FindByName((char *)this, (ObjectClass *)&aP2); /*0x76d1f0*/
      DeleteAndZero((void **)&aP2); /*0x76d1f9*/
      StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76d20f*/
      WideString::Assign((wchar_t **)&aP2, (CampaignScore *)StringCSF); /*0x76d219*/
      ScoreText::Show(this, (ObjectClass *)&aP2); /*0x76d225*/
      DeleteAndZero::Alt((void **)&aP2); /*0x76d22e*/
    }
  }
  else
  {
    WDTSurface::ToggleState(this->__pad_45C, (ObjectClass *)this, 0); /*0x76d245*/
    v7 = Count::Get(this + 278); /*0x76d253*/
    v8 = Surface::PixelToIndex(v7, v3); /*0x76d25a*/
    if ( v8 != this->q118 ) /*0x76d265*/
    {
      v12 = v8; /*0x76d26b*/
      this->q118 = v8; /*0x76d26f*/
      Count::Get(this + 278); /*0x76d275*/
      v9 = (ObjectClass *)ComPtr::DestroyWrapper((int)v14, v12); /*0x76d27c*/
      TerritorySelectWDT(this, v9); /*0x76d284*/
      ComPtr::Territory_Dtor(v14); /*0x76d28d*/
    }
    v10 = (ObjectClass *)ComPtr::DestroyWrapper((int)&v15, this->q118); /*0x76d2a4*/
    WDTGame::Constructor(v13, v10); /*0x76d2ae*/
    ComPtr::Territory_Dtor(&v15); /*0x76d2b7*/
    v11 = TerritorySelectWDT(this, (ObjectClass *)v13); /*0x76d2cc*/
    ComPtr::Territory_Dtor(v13); /*0x76d2ce*/
    aP2->__pad_0[0] = v11; /*0x76d2da*/
    if ( v11 ) /*0x76d2dc*/
    {
      String::Assign((char **)&a1, aConflictselect); /*0x76d2eb*/
      if ( String::NotEquals((const char **)&a1, 0) ) /*0x76d2f6*/
      {
        v16 = this + 293; /*0x76d30d*/
        v17 = 0; /*0x76d311*/
        v15 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76d319*/
        if ( Vector::HasCapacity(&v15) ) /*0x76d321*/
        {
          do /*0x76d35a*/
          {
            if ( !String::Compare((const char **)&a1, *(const char ***)(v16[1] + 4 * v17)) ) /*0x76d33e*/
              break; /*0x76d345*/
            ((void (__thiscall *)(void ***))v15[2])(&v15); /*0x76d34f*/
          }
          while ( ((unsigned __int8 (__thiscall *)(void ***))v15[1])(&v15) ); /*0x76d35a*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***))v15[1])(&v15) ) /*0x76d369*/
          nullsub_24(); /*0x76d37e*/
      }
      DeleteAndZero((void **)&a1); /*0x76d387*/
    }
  }
}


// ==== 0x0076D3A0  ObjectClass::method_76D3A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_76D3A0(int *this, _DWORD *a2)
{
  int v3; // eax
  ObjectClass *v4; // eax
  bool v5; // bl
  rc_ptr_base v7; // [esp+8h] [ebp-14h] BYREF
  rc_ptr_base v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v10 = 0; /*0x76d3ac*/
  v3 = Surface::PixelToIndex(this->__pad_45C, a2); /*0x76d3ba*/
  if ( v3 != this->q118 ) /*0x76d3c5*/
  {
    this->q118 = v3; /*0x76d3cb*/
    v4 = (ObjectClass *)ComPtr::DestroyWrapper((int)&v8, v3); /*0x76d3d9*/
    TerritorySelectWDT(this, v4); /*0x76d3e1*/
    ComPtr::Territory_Dtor(&v8); /*0x76d3ea*/
  }
  FindTerritoryWOL(&v8, this->__pad_45C + 44, this->q118); /*0x76d403*/
  ComPtr::Constructor(&v7); /*0x76d40c*/
  v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d415*/
  ComPtr::Set(&v7, v9); /*0x76d422*/
  v8.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d42b*/
  ComPtr::Release(&v8); /*0x76d433*/
  v5 = TerritorySelectWDT(this, (ObjectClass *)&v7); /*0x76d448*/
  v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d44a*/
  ComPtr::Release(&v7); /*0x76d452*/
  return v5; /*0x76d459*/
}


// ==== 0x0076D470  ObjectClass::method_76D470  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76D470(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  rc_ptr_base v4; // [esp+4h] [ebp-8h] BYREF

  result = (_DWORD *)Surface::PixelToIndex(this->__pad_45C, a2); /*0x76d481*/
  if ( result != (_DWORD *)this->q118 ) /*0x76d48c*/
  {
    this->q118 = (int)result; /*0x76d48e*/
    FindTerritoryWOL(&v4, this->__pad_45C + 44, (int)result); /*0x76d4a2*/
    TerritorySelectWDT(this, (ObjectClass *)&v4); /*0x76d4ae*/
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76d4b7*/
    return ComPtr::Release(&v4); /*0x76d4bf*/
  }
  return result; /*0x76d4c4*/
}


// ==== 0x0076D4D0  Trigger::ProcessMapEvents  this=ObjectClass  sig=csp ====
void __userpurge Trigger::ProcessMapEvents(int this@<ecx>, int *a2@<ebp>, int a3@<edi>, int a4, char a5, char a6)
{
  ObjectClass *v5; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  MSShapeAnim *v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  int CellType; // ebp
  int v14; // edi
  BOOL ecx13; // ecx
  int v16; // ecx
  MSShapeAnim *v15; // edi
  int ebp18; // ebp
  void *v19; // eax
  MSShapeAnim *v17; // eax
  void *v21; // eax
  MSShapeAnim *v18; // edi
  int v23; // eax
  void (__thiscall ***v24)(_DWORD, int); // ecx
  int v25; // [esp+0h] [ebp-14Ch]
  int *v26; // [esp+4h] [ebp-148h]
  int v27; // [esp+8h] [ebp-144h]
  void **v28; // [esp+10h] [ebp-13Ch] BYREF
  int v29; // [esp+14h] [ebp-138h]
  int v30; // [esp+18h] [ebp-134h]
  void **v31; // [esp+1Ch] [ebp-130h] BYREF
  int v32; // [esp+20h] [ebp-12Ch]
  int var128; // [esp+24h] [ebp-128h]
  void **v34; // [esp+28h] [ebp-124h] BYREF
  void ***v35; // [esp+2Ch] [ebp-120h]
  int v36; // [esp+30h] [ebp-11Ch]
  int v37; // [esp+34h] [ebp-118h] BYREF
  void **v38; // [esp+38h] [ebp-114h] BYREF
  void ***var110; // [esp+3Ch] [ebp-110h]
  ObjectClass *v33; // [esp+40h] [ebp-10Ch]
  void **v41; // [esp+44h] [ebp-108h] BYREF
  void *Block; // [esp+48h] [ebp-104h]
  int v43; // [esp+4Ch] [ebp-100h]
  int v44; // [esp+50h] [ebp-FCh]
  int v45; // [esp+54h] [ebp-F8h]
  ObjectClass *v39; // [esp+58h] [ebp-F4h]
  void **v47; // [esp+5Ch] [ebp-F0h] BYREF
  void *v48; // [esp+60h] [ebp-ECh]
  int v49; // [esp+64h] [ebp-E8h]
  char v50; // [esp+69h] [ebp-E3h]
  MSShapeAnim *v51; // [esp+6Ch] [ebp-E0h]
  int v52; // [esp+70h] [ebp-DCh]
  _DWORD v53[22]; // [esp+74h] [ebp-D8h] BYREF
  _BYTE v54[12]; // [esp+CCh] [ebp-80h] BYREF
  int v55; // [esp+D8h] [ebp-74h]
  _DWORD v56[22]; // [esp+E0h] [ebp-6Ch] BYREF
  _BYTE v57[12]; // [esp+138h] [ebp-14h] BYREF
  int v58; // [esp+144h] [ebp-8h]

  v5 = 0; /*0x76d4da*/
  v8 = Count::Get((_DWORD *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v28, v8 + 44, 0); /*0x76d4f0*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d4fd*/
  {
    v9 = (_DWORD *)FileClass::SetState((_DWORD *)(*(_DWORD *)(v29 + 4) + 8 * v30)); /*0x76d512*/
    v10 = (MSShapeAnim *)WDTObject::GetAndClearFlag(v9); /*0x76d519*/
    if ( v10 ) /*0x76d520*/
      Session::RemoveTeam((_DWORD *)this, v10); /*0x76d525*/
    ((void (__thiscall *)(void ***))v28[2])(&v28); /*0x76d532*/
  }
  v26 = a2; /*0x76d544*/
  v25 = a3; /*0x76d545*/
  Trigger::checkCondition(&v47, 0, 0); /*0x76d54c*/
  v47 = &vt_DynamicVectorClass_MSAnim; /*0x76d561*/
  v52 = 10; /*0x76d565*/
  v51 = 0; /*0x76d569*/
  Trigger::checkCondition(&v41, 0, 0); /*0x76d56d*/
  v11 = *(_DWORD *)(this + 1116); /*0x76d572*/
  v41 = &vt_DynamicVectorClass_MSAnim; /*0x76d57c*/
  v39 = (ObjectClass *)10; /*0x76d585*/
  v45 = 0; /*0x76d589*/
  VectorCursor::Construct(&v31, v11 + 44, 0); /*0x76d58d*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v31[1])(&v31) )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(_DWORD **)(this + 1164), v12); /*0x76d5cd*/
    v14 = WDTClass::GetCellType(*(_DWORD **)(a4 + 4), v12); /*0x76d5d7*/
    if ( v14 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((_DWORD *)this); /*0x76d5df*/
      while ( EventQueue::Process(*(_DWORD **)&stru_87C374.__pad_14B0[8012]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(_DWORD **)&stru_87C374.__pad_14B0[8012]) == 27 ) /*0x76d603*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d605*/
      }
      ecx13 = !*(_BYTE *)(this + 1092) || a6; /*0x76d635*/
      Map_Process_76FD40(v14, (ObjectClass *)this, ecx13, v25, v26, v27); /*0x76d64f*/
    }
    if ( a5 && v14 == 1 )
    {
      v16 = *(_DWORD *)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4); /*0x76d67a*/
      v15 = (MSShapeAnim *)(*(_DWORD *)(v16 + 16) + *(_DWORD *)(*(_DWORD *)(this + 1116) + 68)); /*0x76d695*/
      ebp18 = *(_DWORD *)(*(_DWORD *)(this + 1116) + 72) + *(_DWORD *)(v16 + 20); /*0x76d69a*/
      if ( *(_DWORD *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2(v53, *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( CCFileClass::Open(v53, 0) ) /*0x76d6b3*/
        {
          v19 = (void *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v19 ) /*0x76d6c8*/
            v5 = (ObjectClass *)Trigger::initTrigger( /*0x76d6ec*/
                                  v19,
                                  *(MSShapeAnim **)(this + 1136),
                                  v15,
                                  ebp18,
                                  *(_DWORD *)(this + 1132),
                                  3,
                                  512,
                                  (MSShapeAnim *)(this + 24));
          if ( (int)v51 < v49 /*0x76d71b*/
            || (v50 || !v49)
            && v52 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v47[2])(&v47, v52 + v49, 0) )
          {
            v17 = v51; /*0x76d726*/
            v51 = (MSShapeAnim *)((char *)v51 + 1); /*0x76d729*/
            *((_DWORD *)v48 + (_DWORD)v17) = v5; /*0x76d731*/
          }
          v5 = 0; /*0x76d734*/
        }
        v53[0] = &vt_CCFileClass; /*0x76d73d*/
        v55 = 0; /*0x76d745*/
        Vector::Clear((int)v54); /*0x76d74c*/
        v53[0] = &off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor(v53); /*0x76d75d*/
      }
      CCFileClass::Construct2(v56, *(char ***)(this + 1140)); /*0x76d770*/
      if ( CCFileClass::Open(v56, 0) )
      {
        v21 = (void *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
        v18 = v21
            ? (MSShapeAnim *)MSShapeAnim::Constructor(
                               v21,
                               *(MSShapeAnim **)(this + 1140),
                               v15,
                               ebp18,
                               *(MSShapeAnim **)(this + 1132),
                               5,
                               (MSShapeAnim *)1,
                               (MSShapeAnim *)0x200)
            : 0;
        MSAnim::SetField(v18, *(_DWORD *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v18, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL(v18, 0); /*0x76d7d8*/
        Trigger::executeActions(*(_DWORD **)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4), (int)v18); /*0x76d7f0*/
        if ( v45 < v43 /*0x76d821*/
          || (BYTE1(v44) || !v43)
          && (int)v39 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v41[2])(&v41, &v39->__pad_0[v43], 0) )
        {
          v23 = v45++; /*0x76d82c*/
          *((_DWORD *)Block + v23) = v18; /*0x76d837*/
        }
      }
      v56[0] = &vt_CCFileClass; /*0x76d841*/
      v58 = 0; /*0x76d84c*/
      Vector::Clear((int)v57); /*0x76d853*/
      BufferIOFileClass::Destruct(v56); /*0x76d85f*/
    }
    ((void (__thiscall *)(void ***))v31[2])(&v31); /*0x76d86c*/
  }
  v35 = &v47; /*0x76d88b*/
  v36 = 0; /*0x76d897*/
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d89b*/
  var110 = &v41; /*0x76d89f*/
  v33 = 0; /*0x76d8a3*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v38) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((_DWORD *)this); /*0x76d8c0*/
      while ( EventQueue::Process(*(_DWORD **)&stru_87C374.__pad_14B0[8012]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(_DWORD **)&stru_87C374.__pad_14B0[8012]) == 27 ) /*0x76d8e4*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***))v34[1])(&v34) ) /*0x76d905*/
      {
        if ( *(_BYTE *)(this + 1092) ) /*0x76d910*/
        {
          v24 = (void (__thiscall ***)(_DWORD, int))v35[1][v36]; /*0x76d925*/
          if ( v24 ) /*0x76d92a*/
            (**v24)(v24, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((char **)&v37, aTargetzoom); /*0x76d944*/
          if ( String::NotEquals((const char **)&v37, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger(&v28, this + 1172, 0); /*0x76d963*/
            while ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d970*/
            {
              if ( !String::Compare((const char **)&v37, *(const char ***)(*(_DWORD *)(v29 + 4) + 4 * v30)) ) /*0x76d98a*/
                break; /*0x76d991*/
              ((void (__thiscall *)(void ***))v28[2])(&v28); /*0x76d99b*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d9b5*/
              nullsub_24(); /*0x76d9ca*/
            v28 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76d9cf*/
          }
          DeleteAndZero((int)&v37); /*0x76d9d7*/
          PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)v35[1][v36]); /*0x76d9ed*/
          MSEngine::ProcessEvents((_DWORD *)this, (MSVQAnim *)v35[1][v36], 300000); /*0x76da08*/
        }
        ((void (__thiscall *)(void ***))v34[2])(&v34); /*0x76da15*/
      }
      PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)var110[1][(_DWORD)v33]); /*0x76da29*/
      ((void (__thiscall *)(void ***))v38[2])(&v38); /*0x76da36*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v38[1])(&v38) ); /*0x76da41*/
  }
  ComPtr::Set((rc_ptr_base *)(this + 1160), *(_DWORD *)(a4 + 4)); /*0x76da5d*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da66*/
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da6a*/
  v31 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76da76*/
  v41 = &vt_VectorClass_MSAnim; /*0x76da7e*/
  if ( Block && BYTE1(v44) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z(Block); /*0x76da8e*/
    Block = 0; /*0x76da96*/
  }
  v47 = &vt_VectorClass_MSAnim; /*0x76da9e*/
  v43 = 0; /*0x76daa2*/
  BYTE1(v44) = 0; /*0x76daa9*/
  if ( v48 ) /*0x76daaf*/
  {
    if ( v50 ) /*0x76dab7*/
      __3_YAXPAX_Z(v48); /*0x76daba*/
  }
}


// ==== 0x0076DAD0  ObjectClass::TerritorySelectWDT  this=ObjectClass  sig=csp ====
bool __thiscall TerritorySelectWDT(int *this, ObjectClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // bl
  _DWORD *v6; // edi
  int State; // eax
  wchar_t *StringCSF; // eax
  unsigned int CellType; // edi
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  wchar_t *eax14; // eax
  ObjectClass *v14; // ecx
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  int v20; // edi
  wchar_t **v21; // eax
  _DWORD *v22; // edi
  int v23; // ebp
  wchar_t *v24; // eax
  wchar_t **v25; // eax
  wchar_t *v26; // [esp-4h] [ebp-3Ch]
  CampaignScore v27; // [esp+10h] [ebp-28h] BYREF
  int v28; // [esp+34h] [ebp-4h]

  v3 = this->q054; /*0x76dae0*/
  v4 = this->__pad_468; /*0x76dae3*/
  v5 = v3 != 0; /*0x76daeb*/
  if ( *(_DWORD *)&aP1->__pad_0[4] != v4 ) /*0x76daf0*/
  {
    if ( v4 ) /*0x76daf8*/
    {
      if ( v3 ) /*0x76dafc*/
        ComPtr::Set((rc_ptr_base *)this + 20, 0); /*0x76db03*/
      TerritorySelectWDT_Process((_DWORD *)this->__pad_468, 0, (ObjectClass *)this); /*0x76db11*/
      v6 = *(_DWORD **)(this->__pad_468 + 44); /*0x76db1c*/
      if ( v6 ) /*0x76db21*/
      {
        MSAnim::SetField(v6, this->q11E - 1); /*0x76db2d*/
        MSAnim::GetField(v6, 0); /*0x76db36*/
        TerritoryUpdateDisplayWOL(v6, 0); /*0x76db3f*/
      }
    }
    ComPtr::Set((rc_ptr_base *)this + 281, *(_DWORD *)&aP1->__pad_0[4]); /*0x76db54*/
    if ( !this->__pad_468 ) /*0x76db59*/
    {
      State = FileClass::GetState((_DWORD *)(this->q04C + 8)); /*0x76db6b*/
      ScoreText::ShowAlt(this, (CampaignScore *)(State + 20), 0); /*0x76db76*/
      StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76db8c*/
      WideString::Assign((wchar_t **)&aP1, (CampaignScore *)StringCSF); /*0x76db96*/
      ScoreText::Show(this, (ObjectClass *)&aP1); /*0x76dba2*/
      DeleteAndZero::Alt((void **)&aP1); /*0x76dbab*/
      TerritorySelectWDT_Delete(this + 22, 1, 0, 30); /*0x76dbb9*/
      return v5; /*0x76dbc7*/
    }
    v5 = 0; /*0x76dbce*/
    unknown_libname_74(&v27); /*0x76dbd0*/
    unknown_libname_74(&v27.CampaignScore_field_0x08); /*0x76dbd9*/
    CellType = WDTClass::GetCellType((_DWORD *)*(this + 291), *(_DWORD *)(this->__pad_468 + 8)); /*0x76dbf0*/
    v11 = 2; /*0x76dbf2*/
    if ( CellType >= 2 ) /*0x76dbfa*/
      v11 = *(_DWORD *)(this->q04C + 68) != CellType; /*0x76dc0b*/
    ScoreScreen::RemoveItem((int)(this + 22), 3, v11, 0, 0, 30); /*0x76dc19*/
    v12 = CellType - 1; /*0x76dc1e*/
    if ( v12 ) /*0x76dc1f*/
    {
      v13 = v12 - 1; /*0x76dc25*/
      if ( v13 ) /*0x76dc26*/
      {
        if ( v13 == 1 ) /*0x76dc29*/
        {
          v16 = GetStringCSF(aWdtSovietheldt, 0, g_Str_File_WDTSel_cpp, 689); /*0x76dc71*/
          WideString::Assign((wchar_t **)&v27.CampaignScore_field_0x10, (CampaignScore *)v16); /*0x76dc7b*/
          ScoreText::Show(this, (ObjectClass *)&v27.CampaignScore_field_0x10); /*0x76dc87*/
          v14 = (ObjectClass *)&v27.CampaignScore_field_0x10; /*0x76dc8c*/
        }
        else
        {
          eax14 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 697); /*0x76dc3c*/
          WideString::Assign((wchar_t **)&v27.CampaignScore_field_0x0C, (CampaignScore *)eax14); /*0x76dc46*/
          ScoreText::Show(this, (ObjectClass *)&v27.CampaignScore_field_0x0C); /*0x76dc52*/
          v14 = (ObjectClass *)&v27.CampaignScore_field_0x0C; /*0x76dc57*/
        }
      }
      else
      {
        v17 = GetStringCSF(aWdtAlliedheldt, 0, g_Str_File_WDTSel_cpp, 685); /*0x76dca3*/
        WideString::Assign((wchar_t **)&v27.CampaignScore_field_0x14, (CampaignScore *)v17); /*0x76dcad*/
        ScoreText::Show(this, (ObjectClass *)&v27.CampaignScore_field_0x14); /*0x76dcb9*/
        v14 = (ObjectClass *)&v27.CampaignScore_field_0x14; /*0x76dcbe*/
      }
    }
    else
    {
      v18 = GetStringCSF(aWdtTerritoryse_0, 0, g_Str_File_WDTSel_cpp, 693); /*0x76dcd5*/
      WideString::Assign((wchar_t **)&v27.CampaignScore_field_0x18, (CampaignScore *)v18); /*0x76dcdf*/
      ScoreText::Show(this, (ObjectClass *)&v27.CampaignScore_field_0x18); /*0x76dceb*/
      v14 = (ObjectClass *)&v27.CampaignScore_field_0x18; /*0x76dcf0*/
    }
    DeleteAndZero::Alt((void **)v14); /*0x76dcf4*/
    TerritorySelectWDT_Process((_DWORD *)this->__pad_468, 1, (ObjectClass *)this); /*0x76dcff*/
    if ( Conflict::GetOwnerHouse(*(_DWORD **)(this->q04C + 12)) == this->q114 ) /*0x76dd18*/
    {
      v19 = this->q04C + 24; /*0x76dd25*/
      v28 = 0; /*0x76dd28*/
      v27.CampaignScore_field_0x20 = v19; /*0x76dd30*/
      v27.CampaignScore_field_0x1C = (int)&vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x76dd34*/
      if ( Campaign_WorldDominationTour_24::AddRef(&v27.CampaignScore_field_0x1C) ) /*0x76dd3c*/
      {
        do /*0x76dd7b*/
        {
          v20 = *(_DWORD *)(this->__pad_468 + 8); /*0x76dd54*/
          if ( FindWDTTerritoryClass_Find_Find(*(_DWORD **)(*(_DWORD *)(v27.CampaignScore_field_0x20 + 4) + 8 * v28 + 4)) == v20 ) /*0x76dd66*/
            break; /*0x76dd66*/
          (*(void (__thiscall **)(int *))(v27.CampaignScore_field_0x1C + 8))(&v27.CampaignScore_field_0x1C); /*0x76dd70*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(int *))(v27.CampaignScore_field_0x1C + 4))(&v27.CampaignScore_field_0x1C) ); /*0x76dd7b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v27.CampaignScore_field_0x1C + 4))(&v27.CampaignScore_field_0x1C) ) /*0x76dd8a*/
      {
        v5 = 1; /*0x76dd9d*/
        ComPtr::Set((rc_ptr_base *)this + 20, *(_DWORD *)(*(_DWORD *)(v27.CampaignScore_field_0x20 + 4) + 8 * v28 + 4)); /*0x76ddaa*/
        v21 = TerritorySelectWDT_Create( /*0x76ddc7*/
                *(char **)(*(_DWORD *)(v27.CampaignScore_field_0x20 + 4) + 8 * v28 + 4),
                (wchar_t **)&v27.CampaignScore_field_0x18);
        WideString::Reassign_Alt((void **)&v27, (const wchar_t **)v21); /*0x76ddd1*/
        DeleteAndZero::Alt((void **)&v27.CampaignScore_field_0x18); /*0x76ddda*/
        WideString::Reassign_Alt((void **)&v27.CampaignScore_field_0x08, (const wchar_t **)&v27); /*0x76dde8*/
        v22 = *(_DWORD **)(*(_DWORD *)&aP1->__pad_0[4] + 44); /*0x76ddf4*/
        if ( v22 ) /*0x76ddf9*/
        {
          MSAnim::SetField(v22, 0xFFFFFFFF); /*0x76ddff*/
          MSAnim::GetField(v22, this->q11E); /*0x76de0d*/
          TerritoryUpdateDisplayWOL(v22, this->q11E); /*0x76de1b*/
        }
      }
    }
    v23 = this->__pad_468; /*0x76de20*/
    v26 = GetStringCSF(aWdtTerritorysu, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de3d*/
    v24 = GetStringCSF(aWdtTerritorypr, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de54*/
    v25 = FormatWideStringPrefix((wchar_t **)&aP1, v24, (wchar_t **)(v23 + 12)); /*0x76de5f*/
    WideString::AssignConcat((const wchar_t **)v25, (wchar_t **)&v27.CampaignScore_field_0x04, v26); /*0x76de66*/
    DeleteAndZero::Alt((void **)&aP1); /*0x76de6f*/
    if ( WideString::Length((const wchar_t **)&v27.CampaignScore_field_0x08) ) /*0x76de78*/
      WideString::Append((wchar_t **)&v27.CampaignScore_field_0x04, &v27); /*0x76de8a*/
    ScoreText::ShowAlt(this, (CampaignScore *)&v27.CampaignScore_field_0x04, 0); /*0x76de98*/
    DeleteAndZero::Alt((void **)&v27.CampaignScore_field_0x04); /*0x76dea1*/
    DeleteAndZero::Alt((void **)&v27.CampaignScore_field_0x08); /*0x76deaa*/
    DeleteAndZero::Alt((void **)&v27); /*0x76deb3*/
  }
  return v5; /*0x76dbbe*/
}


// ==== 0x0076DED0  ObjectClass::method_76DED0  this=ObjectClass  sig=csp ====
int __thiscall sub_76DED0(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  MSShapeAnim *v4; // eax
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = 0; /*0x76deda*/
  v2 = this->__pad_45C; /*0x76dee2*/
  v5 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76dee8*/
  v6 = v2 + 44; /*0x76def3*/
  for ( result = VectorCursor::HasNext(&v5); (_BYTE)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) ) /*0x76deff*/
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(_DWORD **)(*(_DWORD *)(v6 + 4) + 8 * v7 + 4)); /*0x76df13*/
    if ( v4 ) /*0x76df1a*/
      Session::RemoveTeam(this, v4); /*0x76df1f*/
    ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x76df2c*/
  }
  return result; /*0x76df3e*/
}


// ==== 0x0076DF50  ObjectClass::method_76DF50  this=ObjectClass  sig=csp ====
int __thiscall sub_76DF50(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  MSShapeAnim *v4; // eax
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = 0; /*0x76df5a*/
  v2 = this->__pad_45C; /*0x76df62*/
  v5 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76df68*/
  v6 = v2 + 44; /*0x76df73*/
  for ( result = VectorCursor::HasNext(&v5); (_BYTE)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) ) /*0x76df7f*/
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(_DWORD **)(*(_DWORD *)(v6 + 4) + 8 * v7 + 4)); /*0x76df93*/
    if ( v4 ) /*0x76df9a*/
      Session::RemoveTeam(this, v4); /*0x76df9f*/
    ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x76dfac*/
  }
  return result; /*0x76dfbe*/
}


// ==== 0x0076DFD0  ObjectClass::method_76DFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_76DFD0(char *this)
{
  void *v2; // [esp+4h] [ebp-10h] BYREF
  void **v3; // [esp+8h] [ebp-Ch] BYREF
  char *v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  String::Assign((char **)&v2, aMapenter); /*0x76dfdf*/
  if ( String::NotEquals((const char **)&v2, 0) ) /*0x76dfea*/
  {
    v4 = this + 1172; /*0x76e001*/
    v5 = 0; /*0x76e005*/
    v3 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76e00d*/
    if ( Vector::HasCapacity(&v3) ) /*0x76e015*/
    {
      do /*0x76e04e*/
      {
        if ( !String::Compare((const char **)&v2, *(const char ***)(*((_DWORD *)v4 + 1) + 4 * v5)) ) /*0x76e032*/
          break; /*0x76e039*/
        ((void (__thiscall *)(void ***))v3[2])(&v3); /*0x76e043*/
      }
      while ( ((unsigned __int8 (__thiscall *)(void ***))v3[1])(&v3) ); /*0x76e04e*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***))v3[1])(&v3) ) /*0x76e05d*/
      nullsub_24(*(_DWORD *)(*((_DWORD *)v4 + 1) + 4 * v5)); /*0x76e072*/
  }
  DeleteAndZero(&v2); /*0x76e07b*/
}


// ==== 0x0076E090  ObjectClass::method_76E090  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76E090(int *this)
{
  ObjectClass *v3; // [esp+4h] [ebp-18h] BYREF
  rc_ptr_base v4; // [esp+8h] [ebp-14h] BYREF
  void **v5; // [esp+10h] [ebp-Ch] BYREF
  int *v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  String::Assign((char **)&v3, aMapleave); /*0x76e09f*/
  if ( String::NotEquals((const char **)&v3, 0) ) /*0x76e0aa*/
  {
    v6 = this + 293; /*0x76e0c1*/
    v7 = 0; /*0x76e0c5*/
    v5 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76e0cd*/
    if ( Vector::HasCapacity(&v5) ) /*0x76e0d5*/
    {
      do /*0x76e10e*/
      {
        if ( !String::Compare((const char **)&v3, *(const char ***)(v6[1] + 4 * v7)) ) /*0x76e0f2*/
          break; /*0x76e0f9*/
        ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x76e103*/
      }
      while ( ((unsigned __int8 (__thiscall *)(void ***))v5[1])(&v5) ); /*0x76e10e*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***))v5[1])(&v5) ) /*0x76e11d*/
      nullsub_24(); /*0x76e132*/
  }
  DeleteAndZero((void **)&v3); /*0x76e13b*/
  this->q118 = -1; /*0x76e144*/
  ComPtr::Constructor(&v4); /*0x76e14e*/
  v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76e15a*/
  TerritorySelectWDT(this, (ObjectClass *)&v4); /*0x76e162*/
  v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76e16b*/
  return ComPtr::Release(&v4); /*0x76e178*/
}


// ==== 0x0076E180  ObjectClass::ShowWDTTerritorySelection_Show  this=ObjectClass  sig=csp ====
void __thiscall ShowWDTTerritorySelection_Show(ObjectClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v4; // [esp+4h] [ebp-10h] BYREF
  ObjectClass *v5; // [esp+8h] [ebp-Ch] BYREF
  int *v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v2 = this->__pad_45C; /*0x76e186*/
  if ( !*(_BYTE *)(v2 + 104) ) /*0x76e18c*/
  {
    WDTGame::ToggleTeamMode(v2, this, (ObjectClass *)1); /*0x76e19c*/
    String::Assign((char **)&v4, aMousecancel); /*0x76e1aa*/
    if ( String::NotEquals((const char **)&v4, 0) ) /*0x76e1b5*/
    {
      v7 = 0; /*0x76e1c8*/
      v6 = (int *)((char *)this + 1172); /*0x76e1d0*/
      v5 = (ObjectClass *)&vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76e1d8*/
      if ( Vector::HasCapacity(&v5) ) /*0x76e1e0*/
      {
        do /*0x76e219*/
        {
          if ( !String::Compare((const char **)&v4, *(const char ***)(v6[1] + 4 * v7)) ) /*0x76e1fd*/
            break; /*0x76e204*/
          (*(void (__thiscall **)(ObjectClass **))&v5->__pad_0[8])(&v5); /*0x76e20e*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(ObjectClass **))&v5->__pad_0[4])(&v5) ); /*0x76e219*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(ObjectClass **))&v5->__pad_0[4])(&v5) ) /*0x76e228*/
        nullsub_24(); /*0x76e23d*/
    }
    DeleteAndZero((void **)&v4); /*0x76e246*/
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76e25c*/
    WideString::Assign((wchar_t **)&v4, (CampaignScore *)StringCSF); /*0x76e266*/
    ScoreText::Show((int *)this->__pad_0, (ObjectClass *)&v4); /*0x76e272*/
    DeleteAndZero::Alt((void **)&v4); /*0x76e27b*/
  }
}


// ==== 0x0076E2F0  ObjectClass::Team_Start_76E2F0  this=ObjectClass  sig=csp ====
char *__userpurge Team_Start_76E2F0@<eax>(int this@<ecx>, ScoreScreen aP1)
{
  int OwnerHouse; // eax
  ScoreScreen *v4; // ebp
  ObjectClass *v5; // ecx
  int v6; // edi
  int v7; // eax
  int started; // eax
  int v9; // eax
  char vfptr; // [esp-4h] [ebp-18h]
  rc_ptr_base v12; // [esp+Ch] [ebp-8h] BYREF

  WideString::Assign((wchar_t **)&v12, 0); /*0x76e2fe*/
  ScoreText::ShowAlt((int *)this, (CampaignScore *)&v12, 0); /*0x76e30c*/
  DeleteAndZero::Alt(&v12.vfptr); /*0x76e315*/
  OwnerHouse = Conflict::GetOwnerHouse(*(_DWORD **)(*(_DWORD *)(this + 76) + 12)); /*0x76e323*/
  v4 = *(ScoreScreen **)aP1.__pad_0; /*0x76e328*/
  v5 = *(ObjectClass **)(this + 76); /*0x76e32c*/
  v6 = OwnerHouse; /*0x76e330*/
  LOBYTE(v12.vfptr) = 1; /*0x76e332*/
  v7 = sub_764FF0(v5, *(ScoreScreen **)aP1.__pad_0); /*0x76e337*/
  if ( v6 - v7 > 8 ) /*0x76e343*/
    v7 = v6 - 8; /*0x76e345*/
  if ( v7 == v6 ) /*0x76e34a*/
  {
    aP1.__pad_0[0] = 0; /*0x76e368*/
    started = Team_Start_76E430((int *)this, v6, &aP1); /*0x76e36d*/
    ScoreScreen::RemoveItem(this + 88, 2, started, *(ObjectClass **)aP1.__pad_0, 1, 0); /*0x76e381*/
  }
  else
  {
    LOBYTE(v12.vfptr) = !Team_Start_76E8B0((int *)this, v7, v6); /*0x76e35a*/
  }
  WideString::Assign((wchar_t **)&aP1, 0); /*0x76e38c*/
  ScoreText::ShowAlt((int *)this, (CampaignScore *)&aP1, 0); /*0x76e39a*/
  DeleteAndZero::Alt((void **)&aP1); /*0x76e3a3*/
  DDraw::HandleSuspend((_DWORD *)this); /*0x76e3aa*/
  while ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x76e3b5*/
  {
    if ( EventQueue::Read(MEMORY[0x87F770]) == 27 ) /*0x76e3ce*/
      *(_BYTE *)(this + 1092) = 1; /*0x76e3d0*/
  }
  vfptr = (char)v12.vfptr; /*0x76e3f1*/
  v9 = ActivateScreenWDT((int)&v12, v6); /*0x76e3ff*/
  Trigger::ProcessMapEvents(this, v9, 1, vfptr); /*0x76e407*/
  v12.vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76e410*/
  ComPtr::Release(&v12); /*0x76e418*/
  return sub_765000(*(_DWORD *)(this + 76), v4); /*0x76e426*/
}


// ==== 0x0076E430  ObjectClass::Team_Start_76E430  this=ObjectClass  sig=csp ====
int __thiscall Team_Start_76E430(int *this, int a2, ScoreScreen *aP2)
{
  int v4; // eax
  int v5; // ecx
  int v7; // ecx
  rc_ptr_base v8; // [esp+4h] [ebp-8h] BYREF
  _DWORD *v9; // [esp+8h] [ebp-4h]

  ActivateScreenWDT((int)&v8, a2); /*0x76e449*/
  if ( !v9 ) /*0x76e454*/
    goto LABEL_6; /*0x76e454*/
  v4 = WDTClass::CountCellType(v9, *(_DWORD *)(this->q04C + 68)); /*0x76e45d*/
  if ( v4 <= *(this + 270) ) /*0x76e468*/
  {
    v5 = this->q110; /*0x76e46a*/
    v8.vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76e476*/
    aP2->__pad_0[0] = v4 <= v5; /*0x76e481*/
    ComPtr::Release(&v8); /*0x76e487*/
    return 1; /*0x76e495*/
  }
  if ( v4 >= *(this + 269) ) /*0x76e49e*/
  {
    v7 = *(this + 271); /*0x76e4a0*/
    v8.vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76e4a6*/
    aP2->__pad_0[0] = v4 >= v7; /*0x76e4b7*/
    ComPtr::Release(&v8); /*0x76e4bd*/
    return 0; /*0x76e4c2*/
  }
  else
  {
LABEL_6:
    v8.vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76e4d3*/
    aP2->__pad_0[0] = 0; /*0x76e4db*/
    ComPtr::Release(&v8); /*0x76e4de*/
    return 2; /*0x76e4e3*/
  }
}


// ==== 0x0076E4F0  WDTGame::ReviewHistory  this=ObjectClass  sig=csp ====
char __userpurge WDTGame::ReviewHistory@<al>(int this@<ecx>, CampaignScore aP1)
{
  int v2; // edi
  char v3; // bl
  wchar_t *StringCSF; // eax
  int v6; // ebp
  wchar_t *v7; // eax
  wchar_t **v8; // eax
  wchar_t **v9; // eax
  wchar_t **v10; // eax
  int v11; // eax
  int v12; // edi
  wchar_t **v15; // [esp-Ch] [ebp-40h]
  wchar_t **v16; // [esp-4h] [ebp-38h]
  const wchar_t *v17; // [esp+10h] [ebp-24h]
  char v18; // [esp+14h] [ebp-20h]
  wchar_t *v19; // [esp+18h] [ebp-1Ch] BYREF
  wchar_t *a1; // [esp+1Ch] [ebp-18h] BYREF
  wchar_t *v21; // [esp+20h] [ebp-14h] BYREF
  wchar_t *v22; // [esp+24h] [ebp-10h] BYREF
  void *v23; // [esp+28h] [ebp-Ch] BYREF
  rc_ptr_base v24; // [esp+2Ch] [ebp-8h] BYREF

  v2 = *(_DWORD *)aP1.__pad_0; /*0x76e4fb*/
  v3 = 1; /*0x76e4ff*/
  v18 = 1; /*0x76e505*/
  v17 = 0; /*0x76e509*/
  if ( *(int *)aP1.__pad_0 <= aP1.CampaignScore_field_0x04 )
  {
    while ( 1 )
    {
      DDraw::HandleSuspend((_DWORD *)this); /*0x76e519*/
      while ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x76e524*/
      {
        if ( EventQueue::Read(MEMORY[0x87F770]) == 27 ) /*0x76e53d*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e53f*/
      }
      if ( *(_BYTE *)(this + 1092) ) /*0x76e556*/
        break; /*0x76e556*/
      StringCSF = GetStringCSF(aWdtReviewinghi, 0, g_Str_File_WDTSel_cpp, 995); /*0x76e575*/
      WideString::Assign((wchar_t **)&aP1, (CampaignScore *)StringCSF); /*0x76e57f*/
      WideString::Append2((wchar_t **)&aP1, (CampaignScore *)asc_830174); /*0x76e58d*/
      if ( v3 ) /*0x76e594*/
        v17 = WideString::Length((const wchar_t **)&aP1); /*0x76e59f*/
      v6 = v2 + 1; /*0x76e5a3*/
      v16 = WDTGame_Helper((wchar_t **)&v23, (const wchar_t *)(v2 + 1), (wchar_t *)2); /*0x76e5b3*/
      v15 = WideString::Assign(&v22, &stru_82083C); /*0x76e5cb*/
      v7 = GetStringCSF(aWdtReviewinghi_0, 0, g_Str_File_WDTSel_cpp, 1003); /*0x76e5de*/
      v8 = WideString::Assign(&v21, (CampaignScore *)v7); /*0x76e5e8*/
      v9 = WideString::ConcatAlloc((const wchar_t **)v8, &a1, (ObjectClass *)v15); /*0x76e5ef*/
      v10 = WideString::ConcatAlloc((const wchar_t **)v9, &v19, (ObjectClass *)v16); /*0x76e5f6*/
      WideString::Append((wchar_t **)&aP1, (CampaignScore *)v10); /*0x76e600*/
      DeleteAndZero::Alt((void **)&v19); /*0x76e609*/
      DeleteAndZero::Alt((void **)&a1); /*0x76e612*/
      DeleteAndZero::Alt((void **)&v21); /*0x76e61b*/
      DeleteAndZero::Alt((void **)&v22); /*0x76e624*/
      DeleteAndZero::Alt(&v23); /*0x76e62d*/
      ScoreText::ShowAlt((int *)this, &aP1, v3 == 0 ? (unsigned int)v17 : 0);
      v11 = ActivateScreenWDT((int)&v24, v2); /*0x76e663*/
      Trigger::ProcessMapEvents(this, v11, 0, v18); /*0x76e66b*/
      v24.vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76e674*/
      ComPtr::Release(&v24); /*0x76e67c*/
      v3 = 0; /*0x76e687*/
      v18 = 0; /*0x76e691*/
      MSEngine::ProcessEvents((_DWORD *)this, *(MSVQAnim **)(this + 1148), 300000); /*0x76e695*/
      v12 = 5; /*0x76e6a0*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e69a*/
        goto LABEL_19; /*0x76e69a*/
      do /*0x76e704*/
      {
        if ( !v12-- ) /*0x76e6ad*/
          break; /*0x76e6b2*/
        GameClass::FrameLoop((int *)this, 5); /*0x76e6b8*/
        DDraw::HandleSuspend((_DWORD *)this); /*0x76e6bf*/
        while ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x76e6ca*/
        {
          if ( EventQueue::Read(MEMORY[0x87F770]) == 27 ) /*0x76e6e3*/
            *(_BYTE *)(this + 1092) = 1; /*0x76e6e5*/
        }
      }
      while ( !*(_BYTE *)(this + 1092) ); /*0x76e704*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e706*/
      {
LABEL_19:
        DeleteAndZero::Alt((void **)&aP1); /*0x76e737*/
        return v3; /*0x76e737*/
      }
      DeleteAndZero::Alt((void **)&aP1); /*0x76e714*/
      v2 = v6; /*0x76e71d*/
      if ( v6 > aP1.CampaignScore_field_0x04 ) /*0x76e721*/
        return 0; /*0x76e730*/
    }
  }
  return v3; /*0x76e727*/
}


// ==== 0x0076E750  ObjectClass::Team_Start_76E750  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Start_76E750(int this, ScoreScreen *aP1)
{
  int OwnerHouse; // ebx
  int v4; // ebp
  int v5; // eax
  ObjectClass *ecx6; // ecx
  ScoreScreen *v6; // edi
  CampaignScore v9; // [esp-8h] [ebp-24h] BYREF

  WideString::Assign((wchar_t **)&v9.CampaignScore_field_0x18, (CampaignScore *)&MEMORY[0x87F8E4].__pad_5568[10472]); /*0x76e762*/
  ScoreText::ShowAlt((int *)this, (CampaignScore *)&v9.CampaignScore_field_0x18, 0); /*0x76e770*/
  DeleteAndZero::Alt((void **)&v9.CampaignScore_field_0x18); /*0x76e779*/
  OwnerHouse = Conflict::GetOwnerHouse(*(_DWORD **)(*(_DWORD *)(this + 76) + 12)); /*0x76e794*/
  v4 = sub_764FF0(*(_DWORD **)(this + 76), aP1); /*0x76e79b*/
  if ( OwnerHouse - v4 > 8 ) /*0x76e7a4*/
    v4 = OwnerHouse - 8; /*0x76e7a6*/
  ActivateScreenWDT((int)&v9.CampaignScore_field_0x1C, v4); /*0x76e7b8*/
  if ( v9.CampaignScore_field_0x20 ) /*0x76e7c3*/
  {
    v5 = WDTClass::CountCellType((_DWORD *)v9.CampaignScore_field_0x20, *(_DWORD *)(*(_DWORD *)(this + 76) + 68)); /*0x76e7d0*/
    if ( v5 < *(_DWORD *)(this + 1084) ) /*0x76e7db*/
    {
      ecx6 = *(ObjectClass **)(this + 1088); /*0x76e7ef*/
      v9.CampaignScore_field_0x04 = 0; /*0x76e7f5*/
      v6 = (ScoreScreen *)(this + 88); /*0x76e7f9*/
      *(_DWORD *)v9.__pad_0 = 1; /*0x76e7fc*/
      if ( v5 > (int)ecx6 ) /*0x76e7fe*/
      {
        ScoreScreen::RemoveItem((int)v6, 0, 2, (ObjectClass *)1, v9.__pad_0[0], v9.CampaignScore_field_0x04); /*0x76e812*/
      }
      else
      {
        LOBYTE(ecx6) = v5 <= 0; /*0x76e802*/
        ScoreScreen::RemoveItem((int)v6, 0, 1, ecx6, v9.__pad_0[0], v9.CampaignScore_field_0x04); /*0x76e808*/
      }
    }
    else
    {
      LOBYTE(v5) = v5 >= 30; /*0x76e7e2*/
      ScoreScreen::RemoveItem(this + 88, 0, 0, (ObjectClass *)v5, 1, 0); /*0x76e7ed*/
    }
    v9.CampaignScore_field_0x04 = OwnerHouse; /*0x76e817*/
    *(_DWORD *)v9.__pad_0 = v4; /*0x76e818*/
    WDTGame::ReviewHistory(this, v9); /*0x76e81b*/
    while ( (unsigned __int8)j_Audio_IsPlaying() ) /*0x76e822*/
    {
      if ( *(_BYTE *)(this + 1092) ) /*0x76e82b*/
        break; /*0x76e833*/
      GameClass::FrameLoop((int *)this, 5); /*0x76e839*/
      DDraw::HandleSuspend((_DWORD *)this); /*0x76e840*/
      while ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x76e84b*/
      {
        if ( EventQueue::Read(MEMORY[0x87F770]) == 27 ) /*0x76e864*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e866*/
      }
    }
  }
  v9.CampaignScore_field_0x1C = (int)&vt_rc_ptr_WorldDominationTour_State; /*0x76e88c*/
  return ComPtr::Release((rc_ptr_base *)&v9.CampaignScore_field_0x1C); /*0x76e899*/
}


// ==== 0x0076E8B0  ObjectClass::Team_Start_76E8B0  this=ObjectClass  sig=csp ====
bool __userpurge Team_Start_76E8B0@<al>(int *this@<ecx>, ScoreScreen aP2)
{
  int v2; // ebx
  int v4; // eax
  int ScoreScreen_field_0x04; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  char v10; // al
  bool v11; // bl
  CampaignScore v13; // [esp-8h] [ebp-28h] BYREF
  _DWORD *v14; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)aP2.__pad_0; /*0x76e8b4*/
  ActivateScreenWDT((int)&v13.CampaignScore_field_0x20, *(int *)aP2.__pad_0); /*0x76e8cc*/
  v4 = WDTClass::CountCellType(v14, *(_DWORD *)(this->q04C + 68)); /*0x76e8dc*/
  ScoreScreen_field_0x04 = aP2.ScoreScreen_field_0x04; /*0x76e8e1*/
  v6 = v4; /*0x76e8e5*/
  ActivateScreenWDT((int)&v13.CampaignScore_field_0x18, aP2.ScoreScreen_field_0x04); /*0x76e8f6*/
  v7 = WDTClass::CountCellType((_DWORD *)v13.CampaignScore_field_0x1C, *(_DWORD *)(this->q04C + 68)); /*0x76e906*/
  v8 = v7 - v6; /*0x76e90d*/
  if ( v7 - v6 < -1 ) /*0x76e912*/
  {
    v9 = 1; /*0x76e917*/
    if ( v8 < -3 || v7 <= this->q110 ) /*0x76e924*/
    {
      aP2.__pad_0[0] = 1; /*0x76e926*/
      goto LABEL_12; /*0x76e92b*/
    }
LABEL_11:
    aP2.__pad_0[0] = 0; /*0x76e971*/
    goto LABEL_12; /*0x76e971*/
  }
  if ( v8 > 1 ) /*0x76e930*/
  {
    v9 = 0; /*0x76e932*/
    if ( v8 > 3 || v7 >= *(this + 271) ) /*0x76e93f*/
    {
      aP2.__pad_0[0] = 1; /*0x76e941*/
      goto LABEL_12; /*0x76e946*/
    }
    goto LABEL_11; /*0x76e93f*/
  }
  v9 = 2; /*0x76e950*/
  aP2.__pad_0[0] = 0; /*0x76e955*/
  if ( Team_Start_76E430(this, ScoreScreen_field_0x04, &aP2) != 1 ) /*0x76e962*/
    goto LABEL_11; /*0x76e962*/
  v10 = aP2.__pad_0[0]; /*0x76e964*/
  aP2.__pad_0[0] = 1; /*0x76e968*/
  if ( !v10 ) /*0x76e96f*/
    goto LABEL_11; /*0x76e96f*/
LABEL_12:
  ScoreScreen::RemoveItem((int)(this + 22), 1, v9, *(ObjectClass **)aP2.__pad_0, 1, 0); /*0x76e976*/
  v13.CampaignScore_field_0x04 = ScoreScreen_field_0x04; /*0x76e98a*/
  *(_DWORD *)v13.__pad_0 = v2; /*0x76e98b*/
  v11 = WDTGame::ReviewHistory((int)this, v13) == 0; /*0x76e99e*/
  v13.CampaignScore_field_0x18 = (int)&vt_rc_ptr_WorldDominationTour_State; /*0x76e9a1*/
  ComPtr::Release((rc_ptr_base *)&v13.CampaignScore_field_0x18); /*0x76e9a5*/
  v13.CampaignScore_field_0x20 = (int)&vt_rc_ptr_WorldDominationTour_State; /*0x76e9ae*/
  ComPtr::Release((rc_ptr_base *)&v13.CampaignScore_field_0x20); /*0x76e9b2*/
  return v11; /*0x76e9b7*/
}


// ==== 0x0076EA20  ScoreText::ShowAlt  this=ObjectClass  sig=csp ====
void __thiscall ScoreText::ShowAlt(int *this, CampaignScore *aP1, int a3)
{
  GameSetup *v4; // edi
  void *eax4; // eax
  MSAnim *v5; // eax

  if ( this->q47C ) /*0x76ea24*/
  {
    Session::RemoveTeam(this, (int (__thiscall ***)(_DWORD, int))this->q47C); /*0x76ea2f*/
    (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 8))( /*0x76ea5a*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
      this->__pad_45C + 124,
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      this->__pad_45C + 124,
      0,
      1);
    Surface::CopyRect(this, (ObjectClass *)(this->__pad_45C + 124)); /*0x76ea69*/
    this->q47C = 0; /*0x76ea6e*/
  }
  v4 = (GameSetup *)aP1; /*0x76ea78*/
  if ( WideString::Length((const wchar_t **)aP1) ) /*0x76ea7e*/
  {
    WideString::AssignFromPtr((wchar_t **)&aP1, (const wchar_t **)v4); /*0x76ea8c*/
    eax4 = (void *)__2_YAPAXI_Z(0x34u); /*0x76ea93*/
    if ( eax4 ) /*0x76ea9d*/
      v5 = (MSAnim *)MSBitPrintAnim::Construct( /*0x76eab2*/
                       eax4,
                       (const wchar_t **)&aP1,
                       (MSAnim *)(this->__pad_45C + 124),
                       (MPCooperative *)1);
    else
      v5 = 0; /*0x76eab9*/
    this->q47C = (int)v5; /*0x76eabf*/
    ScoreClass::SetState(v5, 1); /*0x76eac5*/
    PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)this->q47C); /*0x76ead3*/
    DeleteAndZero::Alt((void **)&aP1); /*0x76eadc*/
  }
}


// ==== 0x0076EAF0  ScoreText::Show  this=ObjectClass  sig=csp ====
void __thiscall ScoreText::Show(int *this, ObjectClass *aP1)
{
  MSAnim *v3; // eax
  int v4; // edx
  MSShapeAnim *v5; // eax
  GameSetup *v6; // edi
  void *eax4; // eax
  MSAnim *v7; // eax
  MSAnim aP2; // [esp+14h] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v3 = (MSAnim *)(this->__pad_45C + 140); /*0x76eafd*/
  aP2 = *v3; /*0x76eb04*/
  v4 = *(_DWORD *)v3[1].__pad_0; /*0x76eb16*/
  v5 = (MSShapeAnim *)this->q120; /*0x76eb19*/
  v10 = v4; /*0x76eb21*/
  if ( v5 ) /*0x76eb25*/
  {
    Session::RemoveTeam(this, v5); /*0x76eb2a*/
    (*(void (__thiscall **)(_DWORD, MSAnim *, _DWORD, MSAnim *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x76eb4c*/
                                                                            + 8))(
      *(_DWORD *)&stru_87C374.__pad_579C[22524],
      &aP2,
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &aP2,
      0,
      1);
    Surface::CopyRect(this, (ObjectClass *)&aP2); /*0x76eb56*/
    this->q120 = 0; /*0x76eb5b*/
  }
  v6 = (GameSetup *)aP1; /*0x76eb65*/
  if ( WideString::Length((const wchar_t **)aP1) ) /*0x76eb6b*/
  {
    WideString::AssignFromPtr((wchar_t **)&aP1, (const wchar_t **)v6); /*0x76eb79*/
    eax4 = (void *)__2_YAPAXI_Z(0x34u); /*0x76eb80*/
    if ( eax4 ) /*0x76eb8a*/
      v7 = (MSAnim *)MSBitPrintAnim::Construct(eax4, (const wchar_t **)&aP1, &aP2, 0); /*0x76eb9a*/
    else
      v7 = 0; /*0x76eba1*/
    this->q120 = (int)v7; /*0x76eba7*/
    ScoreClass::SetState(v7, 1); /*0x76ebad*/
    PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)this->q120); /*0x76ebbb*/
    DeleteAndZero::Alt((void **)&aP1); /*0x76ebc4*/
  }
}


// ==== 0x0076EBE0  MSSfxClass::FindByName  this=ObjectClass  sig=csp ====
char __thiscall MSSfxClass::FindByName(char *this, ObjectClass *aP1)
{
  char result; // al
  void **v4; // [esp+8h] [ebp-Ch] BYREF
  char *v5; // [esp+Ch] [ebp-8h]
  ObjectClass *v6; // [esp+10h] [ebp-4h]

  result = String::NotEquals((const char **)aP1, 0); /*0x76ebef*/
  if ( result ) /*0x76ebf6*/
  {
    v5 = this + 1172; /*0x76ec02*/
    v6 = 0; /*0x76ec06*/
    v4 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76ec0e*/
    if ( Vector::HasCapacity(&v4) ) /*0x76ec16*/
    {
      do /*0x76ec4d*/
      {
        if ( !String::Compare((const char **)aP1, *(const char ***)(*((_DWORD *)v5 + 1) + 4 * (_DWORD)v6)) ) /*0x76ec31*/
          break; /*0x76ec38*/
        ((void (__thiscall *)(void ***))v4[2])(&v4); /*0x76ec42*/
      }
      while ( ((unsigned __int8 (__thiscall *)(void ***))v4[1])(&v4) ); /*0x76ec4d*/
    }
    result = ((int (__thiscall *)(void ***))v4[1])(&v4); /*0x76ec5c*/
    if ( result ) /*0x76ec61*/
      nullsub_24(); /*0x76ec71*/
  }
  return result; /*0x76ec76*/
}


// ==== 0x0076ECD0  Team_Start_76ECD0  this=-  sig=ida-proto ====
void __fastcall Team_Start_76ECD0(int a1, ScoreScreen *a2)
{
  Selection_WorldDominationTour v4; // [esp+8h] [ebp-4B0h] BYREF

  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x76ece2*/
  ConstructWDTSelection(&v4, a1, (int)a2); /*0x76eced*/
  Team_Start_76E750((int)&v4, a2); /*0x76ecf7*/
  SelectionInitializeWOL(&v4); /*0x76ed00*/
}


// ==== 0x0076ED10  Team_Start_76ED10  this=-  sig=ida-proto ====
bool __usercall Team_Start_76ED10@<al>(int a1@<ecx>, int a2@<edx>, int a3@<ebx>)
{
  int State; // eax
  wchar_t *StringCSF; // eax
  bool v7; // bl
  int v8; // edx
  bool v9; // al
  ScoreScreen v10[2]; // [esp-8h] [ebp-4CCh] BYREF
  int v11; // [esp+60h] [ebp-464h]

  if ( !*(_DWORD *)(a1 + 4) ) /*0x76ed10*/
    return 0; /*0x76ed20*/
  v10[0].ScoreScreen_field_0x04 = a3; /*0x76ed2a*/
  ConstructWDTSelection((Selection_WorldDominationTour *)&v10[0].ScoreScreen_field_0x1C, a1, a2); /*0x76ed31*/
  State = FileClass::GetState((_DWORD *)(v11 + 8)); /*0x76ed3f*/
  ScoreText::ShowAlt(&v10[0].ScoreScreen_field_0x1C, (CampaignScore *)(State + 20), 0); /*0x76ed4c*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76ed62*/
  WideString::Assign((wchar_t **)&v10[0].ScoreScreen_field_0x0C, (CampaignScore *)StringCSF); /*0x76ed6c*/
  ScoreText::Show(&v10[0].ScoreScreen_field_0x1C, (ObjectClass *)&v10[0].ScoreScreen_field_0x0C); /*0x76ed7a*/
  DeleteAndZero::Alt((void **)&v10[0].ScoreScreen_field_0x0C); /*0x76ed83*/
  *(_DWORD *)v10[0].__pad_0 = a2; /*0x76ed8c*/
  Team_Start_76E2F0((int)&v10[0].ScoreScreen_field_0x1C, v10[0]); /*0x76ed8d*/
  ShowWDTTerritorySelection((ObjectClass *)&v10[0].ScoreScreen_field_0x1C, &v10[0].ScoreScreen_field_0x14); /*0x76ed9b*/
  v7 = v10[0].ScoreScreen_field_0x18 != 0; /*0x76eda6*/
  if ( v10[0].ScoreScreen_field_0x18 ) /*0x76edab*/
  {
    MEMORY[0xA8B240] = *(INIClass **)(v10[0].ScoreScreen_field_0x18 + 8); /*0x76edba*/
    FindWDTTerritoryClass(&v10[0].ScoreScreen_field_0x0C, (int)MEMORY[0xA8B240]); /*0x76edbf*/
    if ( v10[0].ScoreScreen_field_0x10 ) /*0x76edca*/
    {
      MEMORY[0xA8B270] = *(unsigned __int8 *)(v10[0].ScoreScreen_field_0x10 + 14); /*0x76edd7*/
      g_RulesInitConfig = (ObjectClass *)*(unsigned __int8 *)(v10[0].ScoreScreen_field_0x10 + 15); /*0x76ede2*/
      MEMORY[0xA8B25C] = *(unsigned __int16 *)(v10[0].ScoreScreen_field_0x10 + 16); /*0x76edec*/
      v8 = *(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) >> 2; /*0x76edf5*/
      LOBYTE(MEMORY[0xA8B31D]) = 0; /*0x76edfd*/
      LOBYTE(MEMORY[0xA8B31C]) = v8 & 1; /*0x76ee06*/
      LOBYTE(MEMORY[0xA8B258]) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x10) != 0; /*0x76ee14*/
      LOBYTE(v8) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x20) != 0; /*0x76ee20*/
      LOBYTE(MEMORY[0xA8B31F]) = 0; /*0x76ee22*/
      LOBYTE(MEMORY[0xA8B320]) = v8; /*0x76ee29*/
      LOBYTE(MEMORY[0xA8B260]) = 1; /*0x76ee2f*/
      LOBYTE(MEMORY[0xA8B261]) = BYTE1(*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56)) & 1; /*0x76ee3d*/
      LOBYTE(MEMORY[0xA8B262]) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x400) != 0; /*0x76ee4b*/
      v9 = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x200) != 0; /*0x76ee57*/
      LOBYTE(MEMORY[0xA8B264]) = 0; /*0x76ee59*/
      LOBYTE(MEMORY[0xA8B263]) = v9; /*0x76ee60*/
      MEMORY[0xA8B274] = 0; /*0x76ee65*/
      MEMORY[0xA8B278] = (IUnknown *)1; /*0x76ee6f*/
    }
    else
    {
      v7 = 0; /*0x76ee77*/
    }
    v10[0].ScoreScreen_field_0x0C = (int)&vt_rc_ptr_WDTTerritory; /*0x76ee7d*/
    ComPtr::Release((rc_ptr_base *)&v10[0].ScoreScreen_field_0x0C); /*0x76ee85*/
  }
  v10[0].ScoreScreen_field_0x14 = (int)&vt_rc_ptr_WorldDominationTour_Territory; /*0x76ee8e*/
  ComPtr::Release((rc_ptr_base *)&v10[0].ScoreScreen_field_0x14); /*0x76ee96*/
  SelectionInitializeWOL((Selection_WorldDominationTour *)&v10[0].ScoreScreen_field_0x1C); /*0x76ee9f*/
  return v7; /*0x76ed22*/
}


// ==== 0x0076EEB0  ObjectClass::ConstructWDTSelection_Create_76EEB0  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0(int this)
{
  ObjectClass *v2; // edi
  char *v3; // eax
  Movie *v4; // eax
  int result; // eax

  v2 = (ObjectClass *)(this + 1168); /*0x76eeb6*/
  MEMORY[0xA8D63C].__pad_14B0[688] = 0; /*0x76eebc*/
  if ( String::NotEquals((const char **)(this + 1168), 0) ) /*0x76eec5*/
  {
    v3 = String::GetOrEmpty((char **)v2); /*0x76eed0*/
    v4 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, v3); /*0x76eedb*/
    ThemeClass::Play(&g_BuildingTypeClass_Count, v4); /*0x76eee6*/
    byte_A83D20 = 1; /*0x76eeeb*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 12))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x76eefa*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 24))( /*0x76ef07*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 24))( /*0x76ef14*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404] + 4))( /*0x76ef29*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404],
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
    0,
    1);
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x76ef32*/
  ConstructWDTSelection_Create_76EEB0_Create(*(int **)(this + 1116), (ObjectClass *)this, (_DWORD *)(this + 88)); /*0x76ef42*/
  for ( result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 40))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x76ef56*/
        result < 0;
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 40))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 16))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x76ef60*/
  }
  return result; /*0x76ef52*/
}


// ==== 0x0076EFE0  Selection_WorldDominationTour::QueryInterface  this=Selection@WorldDominationTour  sig=csp ====
void *__thiscall WOL::QueryInterface(Selection_WorldDominationTour *this, char a2)
{
  SelectionInitializeWOL(this); /*0x76efe3*/
  if ( (a2 & 1) != 0 ) /*0x76efed*/
    __3_YAXPAX_Z(this); /*0x76eff0*/
  return this; /*0x76effa*/
}


// ==== 0x0076F000  ComPtr::DestroyWrapper  this=ObjectClass  sig=csp ====
int __stdcall ComPtr::DestroyWrapper(int aP0, ObjectClass *aP1)
{
  int v2; // ecx

  FindTerritoryWOL((ObjectClass *)aP0, v2 + 44, (int)aP1); /*0x76f00f*/
  return aP0; /*0x76f016*/
}


// ==== 0x0076F020  FileClass::GetState  this=FileClass  sig=csp ====
int __thiscall FileClass::GetState(_DWORD *this)
{
  return this->q004; /*0x76f023*/
}


// ==== 0x0076F030  WDTGame::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall WDTGame::Constructor(_DWORD *this, ObjectClass *aP1)
{
  ComPtr::Constructor((rc_ptr_base *)this); /*0x76f033*/
  *this = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76f03c*/
  ComPtr::Set((rc_ptr_base *)this, *(_DWORD *)&aP1->__pad_0[4]); /*0x76f048*/
  return this; /*0x76f04f*/
}


// ==== 0x0076F060  ComPtr::Territory_Dtor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ComPtr_Territory_Dtor(_DWORD *this)
{
  *this = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76f060*/
  return ComPtr::Release(this);
}


// ==== 0x0076F070  FileClass::SetState  this=FileClass  sig=csp ====
int __thiscall FileClass::SetState(_DWORD *this)
{
  return this->q004; /*0x76f073*/
}


// ==== 0x0076F080  Count::Get  this=ObjectClass  sig=csp ====
int __thiscall Count_Get(_DWORD *this)
{
  return this->vtable2; /*0x76f083*/
}


// ==== 0x0076F090  Trigger::processTrigger  this=VectorCursor  sig=csp ====
_DWORD *__thiscall sub_76F090(_DWORD *this, int a2, int a3)
{
  this->VectorCursor_field_0x04 = a2; /*0x76f09a*/
  this->VectorCursor_field_0x08 = a3; /*0x76f09d*/
  *this = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76f0a0*/
  return this; /*0x76f0a6*/
}


// ==== 0x0076F0B0  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::HasCapacity  this=VectorCursor  sig=csp ====
BOOL __thiscall Vector_HasCapacity(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 16); /*0x76f0bd*/
}


// ==== 0x0076F0C0  VectorCursor::Construct  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::Construct(_DWORD *this, int a2, ObjectClass *aP2)
{
  this->VectorCursor_field_0x04 = a2; /*0x76f0ca*/
  this->VectorCursor_field_0x08 = aP2; /*0x76f0cd*/
  *this = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76f0d0*/
  return this; /*0x76f0d6*/
}


// ==== 0x0076F0E0  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::HasNext  this=VectorCursor  sig=csp ====
BOOL __thiscall VectorCursor_HasNext(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 16); /*0x76f0ed*/
}


// ==== 0x0076F0F0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall CampaignProperties_WorldDominationTour_22_::_vt01(_DWORD *this)
{
  return this->VectorCursor_field_0x08 < *(_DWORD *)(this->VectorCursor_field_0x04 + 16); /*0x76f0fd*/
}


// ==== 0x0076F100  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::initCursor  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall VectorCursor::initCursor(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76f109*/
  if ( (a2 & 1) != 0 ) /*0x76f10f*/
    __3_YAXPAX_Z(Block); /*0x76f112*/
  return (VectorCursor *)Block; /*0x76f11c*/
}


// ==== 0x0076F120  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::updateCursor  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall VectorCursor::updateCursor(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76f129*/
  if ( (a2 & 1) != 0 ) /*0x76f12f*/
    __3_YAXPAX_Z(Block); /*0x76f132*/
  return (VectorCursor *)Block; /*0x76f13c*/
}


// ==== 0x0076F140  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::drawCursor  this=VectorCursor  sig=csp ====
VectorCursor *__thiscall VectorCursor::drawCursor(_DWORD *Block, char a2)
{
  *Block = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76f149*/
  if ( (a2 & 1) != 0 ) /*0x76f14f*/
    __3_YAXPAX_Z(Block); /*0x76f152*/
  return (VectorCursor *)Block; /*0x76f15c*/
}


// ==== 0x0076F160  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x76f162*/
  return this; /*0x76f165*/
}


// ==== 0x0076F170  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x76f172*/
  return this; /*0x76f175*/
}


// ==== 0x0076F180  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x76f182*/
  return this; /*0x76f185*/
}


// ==== 0x0076F190  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x76f192*/
  return this; /*0x76f195*/
}


// ==== 0x0076F1A0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22_::_vt02(_DWORD *this)
{
  ++this->VectorCursor_field_0x08; /*0x76f1a2*/
  return this; /*0x76f1a5*/
}


// ==== 0x0076F1B0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22_::_vt03(_DWORD *this)
{
  --this->VectorCursor_field_0x08; /*0x76f1b2*/
  return this; /*0x76f1b5*/
}


// ==== 0x0076F1C0  Trigger::checkCondition  this=VectorClass  sig=csp ====
_DWORD *__thiscall Trigger::checkCondition(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  this->Items = 0; /*0x76f1cb*/
  this->Capacity = aP1; /*0x76f1ce*/
  this->q030 = 1; /*0x76f1d1*/
  this->__pad_034 = 0; /*0x76f1d5*/
  *this = &vt_VectorClass_MSAnim; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->Items = aP2; /*0x76f1e8*/
      return this; /*0x76f1ee*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x76f1fd*/
    this->__pad_034 = 1; /*0x76f200*/
  }
  return this; /*0x76f1ed*/
}


// ==== 0x0076F210  VectorClass::ConstructWDTSelection_Create_76F210  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_76F210(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x76f21b*/
  this->Capacity = a2; /*0x76f21e*/
  this->q030 = 1; /*0x76f221*/
  this->__pad_034 = 0; /*0x76f225*/
  *this = &vt_VectorClass_MSSfxEntry; /*0x76f228*/
  if ( a2 ) /*0x76f22e*/
  {
    if ( a3 ) /*0x76f236*/
    {
      this->Items = a3; /*0x76f238*/
      return this; /*0x76f23e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x76f24d*/
    this->__pad_034 = 1; /*0x76f250*/
  }
  return this; /*0x76f23d*/
}


// ==== 0x0076F260  sub_76F260  this=-  sig=ida-proto ====
int sub_76F260()
{
  dword_B72A98 = 0; /*0x76f262*/
  dword_B72A9C = 0; /*0x76f267*/
  dword_B72AA0 = 0; /*0x76f26c*/
  dword_B72AA4 = 0; /*0x76f271*/
  return 0; /*0x76f276*/
}


// ==== 0x0076F280  sub_76F280  this=-  sig=ida-proto ====
void sub_76F280()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76f28c*/
  dbl_B72AB0 = Math::Sqrt(v0 + v0); /*0x76f29e*/
}


// ==== 0x0076F2B0  sub_76F2B0  this=-  sig=ida-proto ====
void sub_76F2B0()
{
  dbl_B72B00 = dbl_B72AB0 / 60.0; /*0x76f2bc*/
}


// ==== 0x0076F2D0  sub_76F2D0  this=-  sig=ida-proto ====
void sub_76F2D0()
{
  dbl_B72AE8 = 1.0 / dbl_B72B00; /*0x76f2dc*/
}


// ==== 0x0076F2F0  sub_76F2F0  this=-  sig=ida-proto ====
void sub_76F2F0()
{
  dbl_B72AE0 = 0.0174532925199433 * 45.0; /*0x76f2fc*/
}


// ==== 0x0076F310  sub_76F310  this=-  sig=ida-proto ====
void sub_76F310()
{
  dbl_B72AB8 = 0.0174532925199433 * 60.0; /*0x76f31c*/
}


// ==== 0x0076F330  sub_76F330  this=-  sig=ida-proto ====
void sub_76F330()
{
  dbl_B72A90 = 0.0174532925199433 * 90.0; /*0x76f33c*/
}


// ==== 0x0076F350  sub_76F350  this=-  sig=ida-proto ====
__int64 sub_76F350()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72A90 - dbl_B72AB8); /*0x76f362*/
  result = Math::RoundToInt(v0 * dbl_B72AB0 * 0.5); /*0x76f376*/
  dword_B72B08 = result; /*0x76f37b*/
  return result; /*0x76f380*/
}


// ==== 0x0076F390  sub_76F390  this=-  sig=ida-proto ====
void sub_76F390()
{
  dbl_B72AC0 = Math::ArcTan((double)dword_B72B08 * 0.00390625); /*0x76f3a7*/
}


// ==== 0x0076F3C0  sub_76F3C0  this=-  sig=ida-proto ====
void sub_76F3C0()
{
  dbl_B72AD8 = Math::ArcTan((double)(2 * dword_B72B08) / dbl_B72AB0); /*0x76f3e2*/
}


// ==== 0x0076F3F0  sub_76F3F0  this=-  sig=ida-proto ====
__int64 sub_76F3F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72B08) + 0.5); /*0x76f40b*/
  dword_B72AFC = result; /*0x76f410*/
  return result; /*0x76f416*/
}


// ==== 0x0076F420  sub_76F420  this=-  sig=ida-proto ====
int sub_76F420()
{
  word_B72AA8 = 0; /*0x76f422*/
  word_B72AAA = 0; /*0x76f428*/
  return 0; /*0x76f42e*/
}


// ==== 0x0076F430  sub_76F430  this=-  sig=ida-proto ====
int sub_76F430()
{
  dword_B72AC8 = 0; /*0x76f432*/
  dword_B72ACC = 0; /*0x76f437*/
  dword_B72AD0 = 0; /*0x76f43c*/
  return 0; /*0x76f441*/
}


// ==== 0x0076F450  sub_76F450  this=-  sig=ida-proto ====
int sub_76F450()
{
  dword_B72AF8 = 0; /*0x76f455*/
  dword_B72AF0 = 128; /*0x76f45f*/
  dword_B72AF4 = 128; /*0x76f464*/
  return 128; /*0x76f469*/
}


// ==== 0x0076F470  ActivateScreenWDT_Create  this=-  sig=csp ====
rc_ptr_base *__fastcall ActivateScreenWDT_Create(rc_ptr_base *a1, int a2, unsigned int a3)
{
  rc_ptr_base *v5; // eax
  rc_ptr_base *v6; // esi
  rc_ptr_base *v7; // edi
  _DWORD *vfptr; // eax

  v5 = (rc_ptr_base *)__2_YAPAXI_Z(0x14u); /*0x76f479*/
  v6 = v5; /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = v5 + 2; /*0x76f488*/
    v5[1].vfptr = 0; /*0x76f48d*/
    v5->vfptr = &vt_ReferenceCounted; /*0x76f494*/
    ComPtr::Constructor(v5 + 2); /*0x76f49a*/
    v7->vfptr = &vt_rc_ptr_WDTState; /*0x76f49f*/
    ComPtr::Set(v6 + 2, *(_DWORD *)(a2 + 4)); /*0x76f4ab*/
    v6[4].vfptr = 0; /*0x76f4b0*/
    v6->vfptr = &vt_WorldDominationTour_State; /*0x76f4b7*/
    vfptr = v6[3].vfptr; /*0x76f4bd*/
    if ( vfptr && a3 < vfptr[9] ) /*0x76f4ce*/
      v6[4].vfptr = *(void **)(vfptr[17] + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76f4e6*/
  ComPtr::Set(a1, (int)v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}


// ==== 0x0076F500  rc_ptr::ConstructWDTSelection_Create_76F500  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall ConstructWDTSelection_Create_76F500(rc_ptr_base *this)
{
  rc_ptr_base *v2; // eax
  rc_ptr_base *v3; // esi
  rc_ptr_base *v4; // edi

  v2 = (rc_ptr_base *)__2_YAPAXI_Z(0x14u); /*0x76f506*/
  v3 = v2; /*0x76f50b*/
  if ( v2 ) /*0x76f512*/
  {
    v4 = v2 + 2; /*0x76f515*/
    v2[1].vfptr = 0; /*0x76f51a*/
    v2->vfptr = &vt_ReferenceCounted; /*0x76f521*/
    ComPtr::Constructor(v2 + 2); /*0x76f527*/
    v4->vfptr = &vt_rc_ptr_WDTState; /*0x76f52c*/
    v3[4].vfptr = 0; /*0x76f532*/
    v3->vfptr = &vt_WorldDominationTour_State; /*0x76f539*/
  }
  else
  {
    v3 = 0; /*0x76f542*/
  }
  ComPtr::Constructor(this); /*0x76f546*/
  this->vfptr = &vt_rc_ptr_WorldDominationTour_State; /*0x76f54d*/
  ComPtr::Set(this, (int)v3); /*0x76f554*/
  return (rc_ptr *)this; /*0x76f55b*/
}


// ==== 0x0076F600  WDTClass::GetCellType  this=ObjectClass  sig=csp ====
int __thiscall WDTClass_GetCellType(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( this->vtable4 ) /*0x76f600*/
  {
    v2 = this->uniqueId; /*0x76f607*/
    if ( v2 ) /*0x76f60c*/
    {
      if ( a2 < *(_DWORD *)(this->vtable4 + 32) ) /*0x76f61c*/
      {
        v3 = *(unsigned __int8 *)(v2 + a2); /*0x76f623*/
        if ( !v3 ) /*0x76f628*/
          return 1; /*0x76f645*/
        v4 = v3 - 1; /*0x76f62a*/
        if ( !v4 ) /*0x76f62b*/
          return 2; /*0x76f63d*/
        if ( v4 == 1 ) /*0x76f62e*/
          return 3; /*0x76f635*/
      }
    }
  }
  return 0; /*0x76f635*/
}


// ==== 0x0076F670  WDTClass::CountCellType  this=WDTClass  sig=csp ====
int __thiscall WDTClass_CountCellType(_DWORD *this, int a2)
{
  unsigned __int8 *v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx

  if ( !this->q00C ) /*0x76f670*/
    return 0; /*0x76f670*/
  v2 = (unsigned __int8 *)this->q010; /*0x76f677*/
  if ( !v2 ) /*0x76f67c*/
    return 0; /*0x76f6b6*/
  result = 0; /*0x76f682*/
  if ( *(_DWORD *)(this->q00C + 32) ) /*0x76f687*/
  {
    v4 = *(_DWORD *)(this->q00C + 32); /*0x76f693*/
    while ( 1 ) /*0x76f698*/
    {
      v5 = *v2++; /*0x76f698*/
      v6 = v5 - 1; /*0x76f69b*/
      if ( v6 ) /*0x76f69c*/
        break; /*0x76f69c*/
      if ( a2 == 2 ) /*0x76f6ab*/
        goto LABEL_10; /*0x76f6ab*/
LABEL_11:
      if ( !--v4 ) /*0x76f6af*/
        return result; /*0x76f6af*/
    }
    if ( v6 != 1 || a2 != 3 ) /*0x76f6a4*/
      goto LABEL_11; /*0x76f6a4*/
LABEL_10:
    ++result; /*0x76f6ad*/
    goto LABEL_11; /*0x76f6ad*/
  }
  return result; /*0x76f6b3*/
}


// ==== 0x0076F6C0  State_WorldDominationTour::QueryInterface  this=State@WorldDominationTour  sig=csp ====
_DWORD *__thiscall State_WorldDominationTour::QueryInterface(State_WorldDominationTour *this, char a2)
{
  rc_ptr_base *v3; // ecx

  v3 = (rc_ptr_base *)(this + 2); /*0x76f6c3*/
  this->vfptr = &vt_WorldDominationTour_State; /*0x76f6c6*/
  v3->vfptr = &vt_rc_ptr_WDTState; /*0x76f6cc*/
  ComPtr::Release(v3); /*0x76f6d2*/
  ReferenceCounted::Constructor(this); /*0x76f6d9*/
  if ( (a2 & 1) != 0 ) /*0x76f6e3*/
    __3_YAXPAX_Z(this); /*0x76f6e6*/
  return &this->vfptr; /*0x76f6f0*/
}


// ==== 0x0076F700  sub_76F700  this=-  sig=ida-proto ====
int sub_76F700()
{
  dword_B72B18 = 0; /*0x76f702*/
  dword_B72B1C = 0; /*0x76f707*/
  dword_B72B20 = 0; /*0x76f70c*/
  dword_B72B24 = 0; /*0x76f711*/
  return 0; /*0x76f716*/
}


// ==== 0x0076F720  sub_76F720  this=-  sig=ida-proto ====
void sub_76F720()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76f72c*/
  dbl_B72B30 = Math::Sqrt(v0 + v0); /*0x76f73e*/
}


// ==== 0x0076F750  sub_76F750  this=-  sig=ida-proto ====
void sub_76F750()
{
  dbl_B72B80 = dbl_B72B30 / 60.0; /*0x76f75c*/
}


// ==== 0x0076F770  sub_76F770  this=-  sig=ida-proto ====
void sub_76F770()
{
  dbl_B72B68 = 1.0 / dbl_B72B80; /*0x76f77c*/
}


// ==== 0x0076F790  sub_76F790  this=-  sig=ida-proto ====
void sub_76F790()
{
  dbl_B72B60 = 0.0174532925199433 * 45.0; /*0x76f79c*/
}


// ==== 0x0076F7B0  sub_76F7B0  this=-  sig=ida-proto ====
void sub_76F7B0()
{
  dbl_B72B38 = 0.0174532925199433 * 60.0; /*0x76f7bc*/
}


// ==== 0x0076F7D0  sub_76F7D0  this=-  sig=ida-proto ====
void sub_76F7D0()
{
  dbl_B72B10 = 0.0174532925199433 * 90.0; /*0x76f7dc*/
}


// ==== 0x0076F7F0  sub_76F7F0  this=-  sig=ida-proto ====
__int64 sub_76F7F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72B10 - dbl_B72B38); /*0x76f802*/
  result = Math::RoundToInt(v0 * dbl_B72B30 * 0.5); /*0x76f816*/
  dword_B72B88 = result; /*0x76f81b*/
  return result; /*0x76f820*/
}


// ==== 0x0076F830  sub_76F830  this=-  sig=ida-proto ====
void sub_76F830()
{
  dbl_B72B40 = Math::ArcTan((double)dword_B72B88 * 0.00390625); /*0x76f847*/
}


// ==== 0x0076F860  sub_76F860  this=-  sig=ida-proto ====
void sub_76F860()
{
  dbl_B72B58 = Math::ArcTan((double)(2 * dword_B72B88) / dbl_B72B30); /*0x76f882*/
}


// ==== 0x0076F890  sub_76F890  this=-  sig=ida-proto ====
__int64 sub_76F890()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72B88) + 0.5); /*0x76f8ab*/
  dword_B72B7C = result; /*0x76f8b0*/
  return result; /*0x76f8b6*/
}


// ==== 0x0076F8C0  sub_76F8C0  this=-  sig=ida-proto ====
int sub_76F8C0()
{
  word_B72B28 = 0; /*0x76f8c2*/
  word_B72B2A = 0; /*0x76f8c8*/
  return 0; /*0x76f8ce*/
}


// ==== 0x0076F8D0  sub_76F8D0  this=-  sig=ida-proto ====
int sub_76F8D0()
{
  dword_B72B48 = 0; /*0x76f8d2*/
  dword_B72B4C = 0; /*0x76f8d7*/
  dword_B72B50 = 0; /*0x76f8dc*/
  return 0; /*0x76f8e1*/
}


// ==== 0x0076F8F0  sub_76F8F0  this=-  sig=ida-proto ====
int sub_76F8F0()
{
  dword_B72B78 = 0; /*0x76f8f5*/
  dword_B72B70 = 128; /*0x76f8ff*/
  dword_B72B74 = 128; /*0x76f904*/
  return 128; /*0x76f909*/
}


// ==== 0x0076F910  rc_ptr::ArtConfig_Read  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall ArtConfig_Read(
        rc_ptr_base *a1,
        int edx0,
        _DWORD *a2,
        ReferenceCounted *Source,
        char **a4,
        ReferenceCounted *aP5)
{
  char *v8; // eax
  ReferenceCounted *v9; // edi

  v8 = (char *)__2_YAPAXI_Z(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = (ReferenceCounted *)WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, (const char **)a4, aP5); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor(a1); /*0x76f948*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76f94f*/
  ComPtr::Set(a1, (int)v9); /*0x76f956*/
  return (rc_ptr *)a1; /*0x76f95d*/
}


// ==== 0x0076F970  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
char *__thiscall WorldDominationTour::Territory::Constructor(
        char *this,
        int aP1,
        _DWORD *a2,
        ReferenceCounted *aP3,
        const char **a4,
        ReferenceCounted *aP5)
{
  MPCooperative *v6; // ebp
  CCINIClass *v8; // edi
  CCINIClass *v9; // ebx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char *v14; // eax
  wchar_t *StringCSF; // eax
  char **v16; // eax
  ObjectClass *v17; // ebp
  int *CoordPair; // eax
  int v19; // ecx
  SessionClass *v20; // eax
  char **v21; // eax
  int *v22; // eax
  int v23; // ecx
  SessionClass *v24; // eax
  int *v25; // eax
  int v26; // ecx
  SessionClass *v27; // eax
  int *v28; // eax
  int v29; // ecx
  SessionClass *v30; // eax
  int v32; // [esp+10h] [ebp-14h] BYREF
  int v33; // [esp+14h] [ebp-10h] BYREF
  int v34; // [esp+18h] [ebp-Ch] BYREF
  int v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = (MPCooperative *)aP1; /*0x76f975*/
  this->q004 = 0; /*0x76f982*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x76f985*/
  this->q008 = v6; /*0x76f98b*/
  unknown_libname_74((_DWORD *)this + 3); /*0x76f98e*/
  v8 = (CCINIClass *)(this + 16); /*0x76f993*/
  this->q004 = 0; /*0x76f999*/
  this->q014 = 0; /*0x76f99b*/
  v9 = (CCINIClass *)(this + 24); /*0x76f99e*/
  this->q018 = 0; /*0x76f9a1*/
  this->q01C = 0; /*0x76f9a7*/
  unknown_libname_73((_DWORD *)this + 8); /*0x76f9ae*/
  this->q024 = 0; /*0x76f9ba*/
  this->q028 = 0; /*0x76f9bd*/
  this->q02C = 0; /*0x76f9c0*/
  *(_DWORD *)this = &vt_WorldDominationTour_Territory; /*0x76f9d0*/
  v10 = FormatStringInt((INIClass *)v35, v6, (ObjectClass *)2); /*0x76f9d6*/
  v11 = ConcatStringAlloc((ObjectClass *)&v34, a4, v10); /*0x76f9e4*/
  v12 = String::Concat2((const char **)v11, (char **)&v33, &stru_849174.__pad_20[4]); /*0x76f9eb*/
  String::Reassign((char **)this + 8, (AbstractClass *)v12); /*0x76f9f4*/
  DeleteAndZero((int)&v33); /*0x76f9fd*/
  DeleteAndZero((int)&v34); /*0x76fa06*/
  DeleteAndZero((int)v35); /*0x76fa0f*/
  v13 = FormatStringInt((INIClass *)&a4, v6, (ObjectClass *)2); /*0x76fa1c*/
  ConcatStringAlloc((ObjectClass *)&v32, (const char **)aP5, v13); /*0x76fa2a*/
  DeleteAndZero((int)&a4); /*0x76fa33*/
  v14 = String::GetOrEmpty((char **)&v32); /*0x76fa43*/
  StringCSF = GetStringCSF((wchar_t *)v14, 0, (CampaignScore *)&stru_849174.headNode[1], 39); /*0x76fa4c*/
  WideString::Assign_Alt((void **)this + 3, StringCSF); /*0x76fa55*/
  FromStringInt((IUnknown *)&aP1, *(int *)&stru_89E138.__pad_14B0[2748]); /*0x76fa64*/
  v16 = ProcessStringAndCopy((AbstractClass *)&a4, &stru_848BDC, (char **)&aP1); /*0x76fa78*/
  v17 = (ObjectClass *)aP3; /*0x76fa7d*/
  CoordPair = INIClass::GetCoordPair(a2, (CCINIClass *)v35, (ObjectClass *)aP3, v16, (CCINIClass *)(this + 16)); /*0x76fa8c*/
  v19 = *CoordPair; /*0x76fa91*/
  v20 = (SessionClass *)CoordPair[1]; /*0x76fa93*/
  this->q004 = v19; /*0x76fa96*/
  this->q014 = v20; /*0x76fa9c*/
  DeleteAndZero((int)&a4); /*0x76fa9f*/
  v21 = ProcessStringAndCopy((AbstractClass *)&a4, &stru_849174, (char **)&aP1); /*0x76fab3*/
  v22 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, v21, (CCINIClass *)(this + 24)); /*0x76fac3*/
  v23 = *v22; /*0x76fac8*/
  v24 = (SessionClass *)v22[1]; /*0x76faca*/
  this->q018 = v23; /*0x76facd*/
  this->q01C = v24; /*0x76fad3*/
  DeleteAndZero((int)&a4); /*0x76fad6*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] > 800 ) /*0x76fae5*/
  {
    if ( !*(_DWORD *)v8->__pad_0 && !this->q014 ) /*0x76faf0*/
    {
      String::Assign((char **)&a4, aTarget800); /*0x76fb00*/
      v25 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, (char **)&a4, (CCINIClass *)(this + 16)); /*0x76fb15*/
      v26 = *v25; /*0x76fb1a*/
      v27 = (SessionClass *)v25[1]; /*0x76fb1c*/
      *(_DWORD *)v8->__pad_0 = v26; /*0x76fb1f*/
      this->q014 = v27; /*0x76fb25*/
      DeleteAndZero((int)&a4); /*0x76fb28*/
    }
    if ( !*(_DWORD *)v9->__pad_0 && !this->q01C ) /*0x76fb32*/
    {
      String::Assign((char **)&a4, aOrigin800); /*0x76fb42*/
      v28 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, (char **)&a4, (CCINIClass *)(this + 24)); /*0x76fb57*/
      v29 = *v28; /*0x76fb5c*/
      v30 = (SessionClass *)v28[1]; /*0x76fb5e*/
      *(_DWORD *)v9->__pad_0 = v29; /*0x76fb61*/
      this->q01C = v30; /*0x76fb67*/
      DeleteAndZero((int)&a4); /*0x76fb6a*/
    }
  }
  DeleteAndZero((int)&aP1); /*0x76fb73*/
  DeleteAndZero((int)&v32); /*0x76fb7c*/
  return this; /*0x76fb83*/
}


// ==== 0x0076FB90  ArtConfig::resetConfig  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::resetConfig(int this, _DWORD *a1, int a3, Selection_WorldDominationTour *aP3)
{
  ObjectClass *v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  MSShapeAnim *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (ObjectClass *)(this + 32); /*0x76fba8*/
  v6 = *(_DWORD *)aP3->__pad_4 + *(_DWORD *)(this + 28); /*0x76fbab*/
  v7 = aP3->field_0 + *(_DWORD *)(this + 24); /*0x76fbb2*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fbb4*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fbbf*/
  {
    v8 = (void *)__2_YAPAXI_Z(0x4Cu); /*0x76fbca*/
    if ( v8 ) /*0x76fbd4*/
      v9 = (MSShapeAnim *)MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (MSShapeAnim *)a1 + 3, 1, -1, 0); /*0x76fbf6*/
    else
      v9 = 0; /*0x76fbfd*/
    *(_DWORD *)(this + 36) = v9; /*0x76fbff*/
    (*(void (__thiscall **)(MSShapeAnim *, _DWORD))(*(_DWORD *)v9->__pad_0 + 4))(v9, 0); /*0x76fc08*/
    PriorityQueue::Add((Selection_WorldDominationTour *)a1, *(MSAnim **)(this + 36)); /*0x76fc16*/
  }
  v11[0] = &vt_CCFileClass; /*0x76fc1f*/
  v13 = 0; /*0x76fc27*/
  Vector::Clear((int)v12); /*0x76fc2f*/
  v11[0] = &off_7E1668; /*0x76fc38*/
  return BufferIOFileClass::Dtor(v11); /*0x76fc45*/
}


// ==== 0x0076FC50  ArtConfig::validateConfig  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::validateConfig(
        int this,
        Selection_WorldDominationTour *aP1,
        int a3,
        Selection_WorldDominationTour *aP3)
{
  ObjectClass *v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  MSShapeAnim *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (ObjectClass *)(this + 32); /*0x76fc68*/
  v6 = *(_DWORD *)aP3->__pad_4 + *(_DWORD *)(this + 28); /*0x76fc6b*/
  v7 = aP3->field_0 + *(_DWORD *)(this + 24); /*0x76fc72*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    v8 = (void *)__2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = (MSShapeAnim *)MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (MSShapeAnim *)&aP1->__pad_4[20], 1, 0, 0); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    *(_DWORD *)(this + 40) = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(MSShapeAnim *, _DWORD))(*(_DWORD *)v9->__pad_0 + 4))(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(aP1, *(MSAnim **)(this + 40)); /*0x76fcd6*/
  }
  v11[0] = &vt_CCFileClass; /*0x76fcdf*/
  v13 = 0; /*0x76fce7*/
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}


// ==== 0x0076FD40  ObjectClass::Map_Process_76FD40  this=ObjectClass  sig=csp ====
void Map_Process_76FD40(int a1, ObjectClass *aP1, int a3, int _54, int *a4, int a6)
{
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]
  int v21; // [esp+14h] [ebp-30h] BYREF
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  _DWORD v25[2]; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+2Ch] [ebp-18h]
  char v27[12]; // [esp+38h] [ebp-Ch] BYREF

  v7 = v6; /*0x76fd44*/
  v8 = *(_DWORD *)(v6 + 36); /*0x76fd46*/
  if ( v8 ) /*0x76fd4b*/
  {
    v9 = -1; /*0x76fd57*/
    switch ( a1 ) /*0x76fd5c*/
    {
      case 1: /*0x76fd5c*/
        v9 = 3; /*0x76fd72*/
        break;
      case 2: /*0x76fd5c*/
        v9 = 2; /*0x76fd6b*/
        break;
      case 3: /*0x76fd5c*/
        v9 = 1; /*0x76fd64*/
        break;
    }
    v10 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 24))(v8, v25); /*0x76fd7e*/
    v11 = *v10; /*0x76fd81*/
    v12 = v10[1]; /*0x76fd85*/
    v21 = v10[2]; /*0x76fd8b*/
    v22 = v10[3]; /*0x76fd92*/
    if ( v9 < 0 ) /*0x76fd96*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 36) + 4))(*(_DWORD *)(v7 + 36), 0); /*0x76fdbc*/
    }
    else
    {
      MSAnim::Reset(*(_DWORD **)(v7 + 36), v9); /*0x76fd9c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v7 + 36) + 4))(*(_DWORD *)(v7 + 36), 1); /*0x76fda8*/
      Map_Process_5CC690(*(_DWORD **)(v7 + 36)); /*0x76fdae*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(v7 + 36) + 24))(*(_DWORD *)(v7 + 36), v27); /*0x76fdcb*/
    v25[0] = *v13; /*0x76fdd2*/
    v25[1] = v13[1]; /*0x76fdd9*/
    if ( (int)v13[2] <= 0 || (int)v13[3] <= 0 ) /*0x76fde9*/
    {
      v18 = v19; /*0x76fe60*/
      v17 = v20; /*0x76fe64*/
      v14 = v11; /*0x76fe68*/
      v16 = v12; /*0x76fe6a*/
    }
    else if ( v19 <= 0 || v20 <= 0 ) /*0x76fdf9*/
    {
      v14 = *v13; /*0x76fe53*/
      v16 = v13[1]; /*0x76fe55*/
      v18 = v13[2]; /*0x76fe58*/
      v17 = v13[3]; /*0x76fe5b*/
    }
    else
    {
      v14 = *v13; /*0x76fdfb*/
      v15 = v13[2]; /*0x76fdfd*/
      v16 = v13[1]; /*0x76fe00*/
      v17 = v13[3]; /*0x76fe03*/
      v26 = v15; /*0x76fe08*/
      if ( v14 > v11 ) /*0x76fe0c*/
      {
        v15 += v14 - v11; /*0x76fe10*/
        v14 = v11; /*0x76fe12*/
        v26 = v15; /*0x76fe14*/
      }
      if ( v16 > v12 ) /*0x76fe1a*/
      {
        v17 += v16 - v12; /*0x76fe1e*/
        v16 = v12; /*0x76fe20*/
      }
      if ( v14 + v15 >= v11 + v19 ) /*0x76fe28*/
        v18 = v26; /*0x76fe36*/
      else
        v18 = v19 - v14 + v11 + 1; /*0x76fe30*/
      if ( v17 + v16 < v12 + v20 ) /*0x76fe45*/
        v17 = v12 - v16 + v20 + 1; /*0x76fe4d*/
    }
    v21 = v14; /*0x76fe6c*/
    v23 = v18; /*0x76fe70*/
    v22 = v16; /*0x76fe7f*/
    v24 = v17; /*0x76fe83*/
    Team::ReleaseAll((int *)aP1->__pad_0, (ObjectClass *)&v21); /*0x76fe87*/
    DSurface::Flip2(); /*0x76fe8e*/
    GameClass::FrameLoop((int *)aP1->__pad_0, 1); /*0x76fe97*/
  }
}


// ==== 0x0076FEB0  ObjectClass::TerritorySelectWDT_Process  this=ObjectClass  sig=csp ====
void __thiscall TerritorySelectWDT_Process(_DWORD *this, int a2, ObjectClass *aP2)
{
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD v6[4]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+18h] [ebp-10h] BYREF

  v4 = this->owningHouseIndex; /*0x76feb6*/
  if ( v4 ) /*0x76febb*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a2); /*0x76fec5*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->owningHouseIndex + 24))(this->owningHouseIndex, v7); /*0x76fed2*/
    v6[0] = *v5; /*0x76fedb*/
    v6[1] = v5[1]; /*0x76fee2*/
    v6[2] = v5[2]; /*0x76fee9*/
    v6[3] = v5[3]; /*0x76fef7*/
    Team::ReleaseAll((int *)aP2->__pad_0, (ObjectClass *)v6); /*0x76fefb*/
    DSurface::Flip2(); /*0x76ff02*/
    MSEngine::ProcessEvents(aP2, (MSVQAnim *)this->owningHouseIndex, 300000); /*0x76ff12*/
  }
}


// ==== 0x0076FF20  Trigger::executeActions  this=Trigger  sig=csp ====
int __thiscall sub_76FF20(_DWORD *this, int a2)
{
  this->Trigger_field_0x2C = a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}


// ==== 0x0076FF30  WDTObject::GetAndClearFlag  this=WDTObject  sig=csp ====
int __thiscall WDTObject_GetAndClearFlag(_DWORD *this)
{
  int result; // eax

  result = this->q02C; /*0x76ff30*/
  this->q02C = 0; /*0x76ff33*/
  return result; /*0x76ff3a*/
}


// ==== 0x0076FF40  rc_ptr::FindTerritoryWOL  this=rc_ptr  sig=csp ====
rc_ptr *__fastcall FindTerritoryWOL(ObjectClass *aP0, int a2, int a3)
{
  char v4; // bl
  rc_ptr_base *v5; // edi
  rc_ptr_base v7; // [esp+Ch] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+18h] [ebp-Ch]
  int v10; // [esp+1Ch] [ebp-8h]
  int v11; // [esp+20h] [ebp-4h]

  v4 = 0; /*0x76ff47*/
  v11 = 0; /*0x76ff4e*/
  v9 = a2; /*0x76ff52*/
  v10 = 0; /*0x76ff56*/
  v8 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76ff5a*/
  if ( VectorCursor::HasNext(&v8) ) /*0x76ff62*/
  {
    do /*0x76ff9a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 8 * v10 + 4) + 8) == a3 ) /*0x76ff85*/
        break; /*0x76ff85*/
      ((void (__thiscall *)(void ***))v8[2])(&v8); /*0x76ff8f*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v8[1])(&v8) ); /*0x76ff9a*/
  }
  if ( ((unsigned __int8 (__thiscall *)(void ***))v8[1])(&v8) ) /*0x76ffa9*/
  {
    v5 = (rc_ptr_base *)(*(_DWORD *)(v9 + 4) + 8 * v10); /*0x76ffbb*/
  }
  else
  {
    ComPtr::Constructor(&v7); /*0x76ffc4*/
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76ffc9*/
    v4 = 1; /*0x76ffd1*/
    v5 = &v7; /*0x76ffd6*/
  }
  ComPtr::Constructor((rc_ptr_base *)aP0); /*0x76ffdc*/
  *(_DWORD *)aP0->__pad_0 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76ffe1*/
  ComPtr::Set((rc_ptr_base *)aP0, (int)v5[1].vfptr); /*0x76ffed*/
  if ( (v4 & 1) != 0 ) /*0x76fff5*/
  {
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76fffb*/
    ComPtr::Release(&v7); /*0x770003*/
  }
  return (rc_ptr *)aP0; /*0x77000a*/
}

