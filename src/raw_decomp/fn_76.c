// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00760190  Voxel::BlendColor  this=Voxel  sig=csp ====
int __thiscall Voxel::BlendColor(Voxel *this, int a2, int a3, int a4, _WORD *a5)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned __int16 v7; // dx
  int v8; // kr00_4
  int v9; // edi
  int v10; // eax
  int result; // eax

  v5 = word_B45E68[(int)this->Voxel_field_0x130 /*0x7601d9*/
                 + (unsigned __int16)word_B4669C[300 * a4 + abs32(a2 - (unsigned int)this->Voxel_field_0xCC - a3)]];
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a5[*(_DWORD *)&this->__pad_134[4 * v6 + 212]]; /*0x7601fb*/
  v8 = dword_B46648[v6]; /*0x760256*/
  v9 = (((unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0) * (v8 / 2)) >> 8) /*0x76027d*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028b*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red) <= 255 )
    v10 = (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028d*/
        + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_BitMask_Red << g_BitShift_Blue; /*0x7602ba*/
  *a5 = ((int)(unsigned __int8)((unsigned __int8)(v7 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green) /*0x7602d0*/
      | result
      | (v9 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x7602d3*/
}



// ==== 0x007602E0  Surface::RenderToSurfaceVoxel  this=WaveClass  sig=csp ====
void __thiscall Surface::RenderToSurfaceVoxel(int this, _DWORD *a2, int *a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
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
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  char *v64; // [esp+18h] [ebp-2Ch]
  _WORD *v65; // [esp+18h] [ebp-2Ch]
  _WORD *SamplePosition; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *v67; // [esp+18h] [ebp-2Ch]
  _WORD *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  StreamClass *v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  StreamClass *m_Stream; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  int v82; // [esp+3Ch] [ebp-8h]
  int v83; // [esp+3Ch] [ebp-8h]
  int v84; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  _DWORD *v89; // [esp+4Ch] [ebp+8h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x7602f8*/
  v74 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x760309*/
          g_DSurface_Hidden_2,
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
    v57 = *a2 - *(_DWORD *)(this + 204); /*0x760367*/
    v76 = v6; /*0x76036b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x76036f*/
    if ( *(_DWORD *)(this + 424) ) /*0x760374*/
    {
      v7 = *(_DWORD *)(this + 416); /*0x760398*/
      v8 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)(this + 420) + v6; /*0x76039e*/
      v61 = (int)v8; /*0x7603a0*/
      v9 = (int)&v8[v7 - 1]; /*0x7603a4*/
      if ( v9 >= a3[3] + a3[1] ) /*0x7603aa*/
      {
        v64 = (char *)(a3[3] + a3[1]); /*0x7603b2*/
        v9 = (int)v64; /*0x7603b6*/
      }
      else
      {
        v64 = &v8[v7 - 1]; /*0x7603ac*/
      }
      Voxel::loadSectionData((Voxel *)this); /*0x7603ba*/
      v10 = *(_DWORD *)(this + 460); /*0x7603bf*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x7603d1*/
      {
        SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x7606be*/
                                    (int *)g_ZBufferDescriptor,
                                    0,
                                    v8 - (char *)DSurface_ViewBounds.field_4);
        v35 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x7606c4*/
        HIWORD(v36) = HIWORD(g_ZBufferDescriptor); /*0x7606c7*/
        v81 = v9 - (_DWORD)v8; /*0x7606d8*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x7606e0*/
        if ( (unsigned int)&SamplePosition[v35 + (_DWORD)m_Stream * (v9 - (_DWORD)v8 + 1)] >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x7606f6*/
        {
          LOWORD(v36) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9; /*0x76085b*/
          v46 = v9; /*0x76085e*/
          v56 = v9; /*0x760862*/
          v47 = v36 - v58 - 2; /*0x760866*/
          v88 = v47; /*0x76086b*/
          if ( v9 >= (int)v8 ) /*0x76086f*/
          {
            v73 = 8 * v81; /*0x76087c*/
            do /*0x760999*/
            {
              v48 = v4[1]; /*0x760880*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760897*/
              {
                v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x7608b0*/
                v50 = v49[1] + v57; /*0x7608ba*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x7608be*/
                  v50 = *v4 + v4[2] - 2; /*0x7608c0*/
                v60 = v57 + *v49; /*0x7608cf*/
                if ( v60 <= *v4 + 2 ) /*0x7608d3*/
                  v60 = *v4 + 2; /*0x7608d5*/
                v68 = (_WORD *)(v74 /*0x760904*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760910*/
                v84 = v50; /*0x760914*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --v68 ) /*0x760925*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v84, v51) > (unsigned __int16)v88 ) /*0x760940*/
                    Voxel::BlendColor((Voxel *)this, v50, v57, i, v68); /*0x760950*/
                  --v50; /*0x76095e*/
                  --v84; /*0x76095f*/
                }
                v47 = v88; /*0x760972*/
                v8 = (char *)v61; /*0x760976*/
                v4 = a3; /*0x76097a*/
                v46 = v56; /*0x76097e*/
              }
              ++v47; /*0x760986*/
              --v46; /*0x760987*/
              v88 = v47; /*0x76098d*/
              v56 = v46; /*0x760991*/
              v73 -= 8; /*0x760995*/
            }
            while ( v46 >= (int)v8 ); /*0x760999*/
          }
        }
        else
        {
          v83 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760709*/
          v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x76071a*/
          v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x760728*/
          v87 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9 - v58 - 2; /*0x760740*/
          v38 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v9 - (unsigned int)DSurface_ViewBounds.field_4); /*0x760753*/
          v39 = v9; /*0x760755*/
          v55 = v9; /*0x760759*/
          if ( v9 >= (int)v8 ) /*0x76075d*/
          {
            while ( 1 ) /*0x760769*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x760777*/
              {
                v40 = v57 + v90[1]; /*0x760790*/
                if ( v40 >= v69 ) /*0x760792*/
                  v40 = v69; /*0x760794*/
                v59 = v57 + *v90; /*0x7607a6*/
                if ( v59 <= v79 ) /*0x7607aa*/
                  v59 = v79; /*0x7607ac*/
                v41 = &v37[v40]; /*0x7607b8*/
                v42 = (unsigned __int16 *)(2 * v40 + v38); /*0x7607ba*/
                v67 = v42; /*0x7607c6*/
                v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x7607ca*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x7607d7*/
                {
                  if ( *v42 > v87 ) /*0x7607e1*/
                  {
                    Voxel::BlendColor((Voxel *)this, v40, v57, j, v41); /*0x7607ed*/
                    v42 = v67; /*0x7607f2*/
                  }
                  --v42; /*0x7607fa*/
                  --v41; /*0x7607fd*/
                  --v40; /*0x760800*/
                }
                v8 = (char *)v61; /*0x760809*/
                v39 = v55; /*0x76080d*/
                v45 = 2 * v40; /*0x760811*/
                v38 = (int)&v42[v45 / 0xFFFFFFFE]; /*0x760813*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x760815*/
              }
              --v39; /*0x760836*/
              v37 -= v83; /*0x760839*/
              ++v87; /*0x76083c*/
              v90 -= 2; /*0x760840*/
              v55 = v39; /*0x760844*/
              if ( v39 < (int)v8 ) /*0x760848*/
                break; /*0x760848*/
              v38 -= 2 * (_DWORD)m_Stream; /*0x760765*/
            }
          }
        }
      }
      else
      {
        v86 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v58 - (_WORD)v8 - 2; /*0x7603f4*/
        v11 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v8 - (char *)DSurface_ViewBounds.field_4); /*0x760406*/
        v12 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x76040a*/
        v70 = g_ZBufferDescriptor[2].m_Stream; /*0x760418*/
        if ( (unsigned int)(v11 + 2 * (v12 + (_DWORD)v70 * (v9 - v61 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x760437*/
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
                v63 = v57 + v29[1]; /*0x7605b4*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x7605b8*/
                  v63 = *v4 + v4[2] - 2; /*0x7605ba*/
                v31 = v57 + *v29; /*0x7605c4*/
                v32 = v30 + 2; /*0x7605c6*/
                if ( v31 > v30 + 2 ) /*0x7605cb*/
                  v32 = v31; /*0x7605cd*/
                v82 = v32; /*0x7605e5*/
                v65 = (_WORD *)(v74 /*0x7605f3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x7605fd*/
                v85 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760607*/
                v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x760616*/
                if ( v32 <= v63 ) /*0x76061a*/
                {
                  while ( 1 ) /*0x760622*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v82, v33) > v86 ) /*0x76063b*/
                      Voxel::BlendColor((Voxel *)this, v32, v57, v34, v65); /*0x76064b*/
                    ++v32; /*0x760659*/
                    ++v82; /*0x76065a*/
                    ++v65; /*0x760667*/
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
          v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760448*/
          v80 = v13; /*0x760455*/
          v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x760459*/
          v15 = v61; /*0x76045c*/
          v16 = *(_DWORD **)(this + 424); /*0x760460*/
          v89 = v16; /*0x760468*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x760470*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x760484*/
            {
              v17 = v57 + v16[1]; /*0x760491*/
              if ( v17 >= v69 ) /*0x760497*/
                v17 = v69; /*0x760499*/
              v62 = v17; /*0x76049f*/
              v18 = *v16 + v57; /*0x7604a3*/
              v19 = v79; /*0x7604a6*/
              if ( v18 > v79 ) /*0x7604ac*/
                v19 = v18; /*0x7604ae*/
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
                  Voxel::BlendColor((Voxel *)this, v24, v57, m, v21); /*0x7604f4*/
                  v24 = v75; /*0x7604f9*/
                }
                ++v20; /*0x760501*/
                ++v21; /*0x760504*/
                ++v24; /*0x760507*/
              }
              v9 = (int)v64; /*0x760510*/
              v15 = k; /*0x760514*/
              v26 = 2 * v24; /*0x760518*/
              v11 = (int)&v20[v26 / 0xFFFFFFFE]; /*0x76051a*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x76051c*/
              v13 = v80; /*0x76051e*/
            }
            v14 += v13; /*0x760526*/
            v11 += 2 * (_DWORD)v70; /*0x760529*/
            --v86; /*0x760536*/
            v16 = v89 + 2; /*0x76053e*/
            ++v15; /*0x760541*/
            v89 += 2; /*0x760544*/
          }
        }
      }
    }
    (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x7609a7*/
    if ( *(_DWORD *)(this + 424) ) /*0x7609aa*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x7609b7*/
      *(_DWORD *)(this + 424) = 0; /*0x7609bf*/
    }
  }
}



// ==== 0x007609E0  Voxel::FaceDraw  this=WaveClass  sig=csp ====
void __thiscall Voxel::FaceDraw(Voxel *this, _DWORD *a2, int *a3)
{
  Voxel *v3; // ebx
  char *v4; // ebp
  int v5; // esi
  int v6; // ebp
  int SamplePosition; // edi
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
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // ebp
  _WORD *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int i; // [esp+8h] [ebp-40h]
  int v35; // [esp+8h] [ebp-40h]
  int v36; // [esp+Ch] [ebp-3Ch]
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
  int pad_0; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-Ch]
  _DWORD *v55; // [esp+4Ch] [ebp+4h]
  int *v56; // [esp+50h] [ebp+8h]

  v3 = this; /*0x7609e9*/
  if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*(_DWORD *)&this->__pad_A0[28]); /*0x760a0a*/
    v39 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x760a1b*/
            g_DSurface_Hidden_2,
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      v47 = a3[1]; /*0x760a3d*/
      v48 = a3[3] + v47; /*0x760a45*/
      v50 = *a3; /*0x760a4c*/
      v49 = *a3 + a3[2]; /*0x760a56*/
      v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] - *(_DWORD *)v3->__pad_D0; /*0x760a69*/
      v41 = *a2 - (unsigned int)v3->Voxel_field_0xCC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->__pad_134[20], (int *)&v3->__pad_134[108]); /*0x760a7b*/
      if ( *(_DWORD *)&v3->__pad_134[116] ) /*0x760a80*/
      {
        v5 = (int)&v4[*(_DWORD *)&v3->__pad_134[112]]; /*0x760aa0*/
        v36 = *(_DWORD *)&v3->__pad_134[108] + v5 - 1; /*0x760aaa*/
        if ( v36 >= a3[3] + a3[1] ) /*0x760aae*/
          v36 = a3[3] + a3[1]; /*0x760ab0*/
        LOWORD(v4) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v42; /*0x760aca*/
        v6 = (int)&v4[-v5 - 2]; /*0x760ad3*/
        v55 = (_DWORD *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           (int *)g_ZBufferDescriptor,
                           0,
                           v5 - (unsigned int)DSurface_ViewBounds.field_4);
        v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x760ae9*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x760aff*/
        if ( (unsigned int)(SamplePosition + 2 * (v8 + pad_0 * (v36 - v5 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x760b13*/
        {
          v22 = v5; /*0x760d15*/
          v35 = v5; /*0x760d19*/
          if ( v5 <= v36 ) /*0x760d1d*/
          {
            v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              v23 = a3[1]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + a3[3] - 2 ) /*0x760d46*/
              {
                v24 = (_DWORD *)(*(_DWORD *)&v3->__pad_134[116] + v38); /*0x760d5a*/
                v25 = *a3; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= a3[2] + *a3 - 2 ) /*0x760d70*/
                  v44 = a3[2] + *a3 - 2; /*0x760d72*/
                v26 = v25 + 2; /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = v27; /*0x760d81*/
                v28 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2); /*0x760d8b*/
                v29 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760da3*/
                v53 = v26; /*0x760da5*/
                v30 = (_WORD *)(v39 + 2 * (v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760db2*/
                if ( v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v53, v29) > (unsigned __int16)v55 ) /*0x760ddc*/
                    {
                      v31 = *(_DWORD *)&v3->__pad_134[156]; /*0x760deb*/
                      v32 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760e5b*/
                          + (char)(v31 >> 2);
                      v33 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760e64*/
                          + ((96 * v31) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_BitMask_Red << g_BitShift_Blue) /*0x760ec8*/
                           | ((int)(unsigned __int8)((unsigned __int8)(*v30 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                           | (v32 >> g_BitShift_Green_0 << g_BitShift_Red);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    ++v53; /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = (int)v55; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              v55 = (_DWORD *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760b2a*/
          v51 = v9; /*0x760b2e*/
          v10 = (_WORD *)(v39 + 2 * v5 * v9); /*0x760b35*/
          v56 = *(int **)&v3->__pad_134[116]; /*0x760b42*/
          v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              v12 = v49; /*0x760b76*/
              if ( v56[1] + v41 < v49 ) /*0x760b7c*/
                v12 = v56[1] + v41; /*0x760b7e*/
              v13 = v41 + *v56; /*0x760b86*/
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
                  if ( *v14 > (unsigned __int16)v55 ) /*0x760bbc*/
                  {
                    v17 = *(_DWORD *)&v3->__pad_134[156]; /*0x760bcb*/
                    v18 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_BitMask_Red << g_BitShift_Blue) /*0x760cab*/
                         | ((int)(unsigned __int8)((unsigned __int8)(*v15 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                         | (v18 >> g_BitShift_Green_0 << g_BitShift_Red);
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
              SamplePosition = (int)&v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v51; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            SamplePosition += 2 * pad_0; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            v56 += 2; /*0x760cf4*/
            LOWORD(v55) = (_WORD)v55 - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x760f1c*/
      if ( *(_DWORD *)&v3->__pad_134[116] ) /*0x760f1f*/
      {
        __3_YAXPAX_Z(*(void **)&v3->__pad_134[116]); /*0x760f2c*/
        *(_DWORD *)&v3->__pad_134[116] = 0; /*0x760f34*/
      }
    }
  }
}



// ==== 0x00760F50  WaveClass::Update  this=WaveClass  sig=csp ====
int __thiscall WaveClass::Update(WaveClass *this)
{
  int result; // eax
  int v3; // eax
  int i; // edi
  int *Coords; // eax
  int v6; // eax
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = this->Type; /*0x760f56*/
  switch ( result ) /*0x760f65*/
  {
    case 0: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760fa0*/
      for ( i = 0; i < this->WaveClass_field_12C; ++i ) /*0x760faf*/
      {
        Coords = CellClass::GetCoords(*(CellClass **)(*((_DWORD *)this + 125) + 4 * i), v7); /*0x760fbf*/
        WaveClass::DamageArea(this, Coords); /*0x760fc7*/
      }
      v6 = this->WaveIntensity - 1; /*0x760fde*/
      this->WaveIntensity = v6; /*0x760fdf*/
      if ( v6 >= 0 ) /*0x760fe5*/
        goto LABEL_3; /*0x760fe5*/
      result = (*(int (__thiscall **)(WaveClass *))(this->vtable0 + 248))(this); /*0x760feb*/
      break; /*0x760ff5*/
    case 1: /*0x760f65*/
    case 2: /*0x760f65*/
      result = this->LaserIntensity - 6; /*0x760fff*/
      this->LaserIntensity = result; /*0x761001*/
      if ( result < 32 ) /*0x76100a*/
        goto LABEL_9; /*0x76100a*/
      break; /*0x76100a*/
    case 3: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760f6e*/
      v3 = this->WaveIntensity - 1; /*0x760f79*/
      this->WaveIntensity = v3; /*0x760f7a*/
      if ( v3 < 0 ) /*0x760f80*/
LABEL_9:
        result = (*(int (__thiscall **)(WaveClass *))(this->vtable0 + 248))(this); /*0x76100c*/
      else
LABEL_3:
        result = ObjectClass::DetectCloaked((UnitClass *)this); /*0x760f91*/
      break; /*0x760f9c*/
    default:
      return result;
  }
  return result; /*0x760f8c*/
}



// ==== 0x00761030  AnimClass::ProcessFrame  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessFrame(AnimClass *this)
{
  int i; // edi
  int *Coords; // eax
  int v4; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_1B8[72]; ++i ) /*0x761046*/
  {
    Coords = CellClass::GetCoords(*(CellClass **)(*(_DWORD *)&this->__pad_1B8[60] + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((WaveClass *)this, Coords); /*0x76105e*/
  }
  v4 = *(_DWORD *)&this->__pad_120[16] - 1; /*0x761074*/
  *(_DWORD *)&this->__pad_120[16] = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked((UnitClass *)this); /*0x76108f*/
  else
    return (*(int (__thiscall **)(AnimClass *))(this->AnimClass_field_0x0 + 248))(this); /*0x761081*/
}



// ==== 0x007610F0  Voxel::FaceBlit  this=ObjectClass  sig=csp ====
void __thiscall Voxel::FaceBlit(Voxel *this)
{
  Voxel *v2; // ebp
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // kr38_4
  int v13; // ebx
  void *v14; // eax
  int v15; // edx
  _WORD *v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // eax
  int v24; // edx
  double v25; // st7
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _WORD *v29; // eax
  int v30; // [esp-8h] [ebp-80h]
  int v31; // [esp-8h] [ebp-80h]
  int v32; // [esp-8h] [ebp-80h]
  int v33; // [esp-4h] [ebp-7Ch]
  int v34; // [esp-4h] [ebp-7Ch]
  int v35; // [esp-4h] [ebp-7Ch]
  __int16 v36[2]; // [esp+10h] [ebp-68h] BYREF
  __int16 v37[2]; // [esp+14h] [ebp-64h] BYREF
  __int16 v38[2]; // [esp+18h] [ebp-60h] BYREF
  void *v39; // [esp+1Ch] [ebp-5Ch] BYREF
  float v40; // [esp+20h] [ebp-58h] BYREF
  int v41; // [esp+24h] [ebp-54h] BYREF
  char v42; // [esp+28h] [ebp-50h] BYREF
  char v43; // [esp+2Ch] [ebp-4Ch] BYREF
  char v44; // [esp+30h] [ebp-48h] BYREF
  char v45[4]; // [esp+34h] [ebp-44h] BYREF
  char v46[4]; // [esp+38h] [ebp-40h] BYREF
  char v47[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  Coord3D v49; // [esp+48h] [ebp-30h] BYREF
  Coord3D v50; // [esp+54h] [ebp-24h] BYREF
  Coord3D v51; // [esp+60h] [ebp-18h] BYREF
  Color v52; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = (Voxel *)&this->__pad_134[188]; /*0x761105*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_134[188] + 12))(&this->__pad_134[188]); /*0x76110d*/
  if ( this->__pad_D0[92] ) /*0x761110*/
  {
    v3 = *(_DWORD *)&this->__pad_A0[20]; /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    v38[0] = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *(double *)&this->__pad_134[4]; /*0x761158*/
    v38[1] = *(_DWORD *)&this->__pad_A0[24] / 256; /*0x761167*/
    *(_DWORD *)v36 = *(_DWORD *)v38; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        v5 = i; /*0x76117f*/
        LOWORD(v6) = Math::RoundToInt(i); /*0x76119d*/
        v33 = v6; /*0x7611a8*/
        LOWORD(v7) = Math::RoundToInt(v5); /*0x7611b5*/
        v30 = v7; /*0x7611c0*/
        LOWORD(v8) = Math::RoundToInt(v5); /*0x7611cd*/
        v9 = Coord3D::Set(&v49, v8, v30, v33); /*0x7611e0*/
        v10 = *v9; /*0x7611e2*/
        v11 = v9[1]; /*0x7611e4*/
        v50.Coord3D_field_0x08 = v9[2]; /*0x7611ea*/
        v12 = v11; /*0x7611f7*/
        v13 = v10 / 256; /*0x76120d*/
        v39 = *(void **)CellStruct::Set((CellStruct *)&v41, v10 / 256, v11 / 256); /*0x76121e*/
        if ( *(void **)v36 != v39 ) /*0x761222*/
        {
          *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set((CellStruct *)&v40, v13, v12 / 256); /*0x761247*/
          v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x76124b*/
          v15 = *(_DWORD *)v2->__pad_0; /*0x761250*/
          *(_DWORD *)v38 = v14; /*0x761253*/
          if ( (*(int (__thiscall **)(Voxel *, __int16 *))(v15 + 16))(v2, v38) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, v38); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)&this->__pad_134[4] >= i ); /*0x76129b*/
    }
  }
  else
  {
    *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set( /*0x7612e0*/
                                  (CellStruct *)&v41,
                                  *(_DWORD *)&this->__pad_D0[44] / 256,
                                  *(_DWORD *)&this->__pad_D0[48] / 256);
    *(_DWORD *)v38 = *(_DWORD *)CellStruct::Set( /*0x761312*/
                                  (CellStruct *)&v41,
                                  *(_DWORD *)&this->__pad_D0[56] / 256,
                                  *(_DWORD *)&this->__pad_D0[60] / 256);
    v16 = CellStruct::Set( /*0x76133c*/
            (CellStruct *)&v41,
            *(_DWORD *)&this->__pad_A0[32] / 256,
            *(_DWORD *)&this->__pad_A0[36] / 256);
    v17 = *(_DWORD *)&this->__pad_134[12]; /*0x761349*/
    *(_DWORD *)v37 = *(_DWORD *)v16; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*(_DWORD *)&this->__pad_134[16], v17)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)&this->__pad_134[4] >= i;
          i = i + 0.050000001 )
    {
      v49.Coord3D_field_0x08 = dword_B46250; /*0x761392*/
      v18 = *(_DWORD *)&this->__pad_134[152]; /*0x761396*/
      *(_DWORD *)v49.__pad_0 = dword_B46248; /*0x76139c*/
      v49.Coord3D_field_0x04 = dword_B4624C; /*0x7613a2*/
      if ( v18 < 4 ) /*0x7613a6*/
      {
        v19 = i; /*0x7613ac*/
        LOWORD(v20) = Math::RoundToInt(i); /*0x7613ca*/
        v34 = v20; /*0x7613d5*/
        LOWORD(v21) = Math::RoundToInt(v19); /*0x7613e2*/
        v31 = v21; /*0x7613ed*/
        LOWORD(v22) = Math::RoundToInt(v19); /*0x7613fa*/
        v49 = *(Coord3D *)Coord3D::Set(&v50, v22, v31, v34); /*0x761411*/
        v40 = *(float *)CellStruct::Set((CellStruct *)&v42, *(_DWORD *)v49.__pad_0 / 256, v49.Coord3D_field_0x04 / 256); /*0x76144f*/
        if ( *(_DWORD *)v36 != LODWORD(v40) ) /*0x761453*/
        {
          *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set( /*0x761498*/
                                        (CellStruct *)&v43,
                                        *(_DWORD *)v49.__pad_0 / 256,
                                        v49.Coord3D_field_0x04 / 256);
          v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x76149c*/
          v24 = *(_DWORD *)v2->__pad_0; /*0x7614a1*/
          v39 = v23; /*0x7614a4*/
          if ( (*(int (__thiscall **)(Voxel *, void **))(v24 + 16))(v2, &v39) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v39); /*0x7614be*/
        }
      }
      v25 = i; /*0x7614c3*/
      v40 = i; /*0x7614c7*/
      LOWORD(v26) = Math::RoundToInt(i); /*0x7614e5*/
      v35 = v26; /*0x7614f0*/
      LOWORD(v27) = Math::RoundToInt(v25); /*0x7614fd*/
      v32 = v27; /*0x761508*/
      LOWORD(v28) = Math::RoundToInt(v25); /*0x761515*/
      v49 = *(Coord3D *)Coord3D::Set(&v51, v28, v32, v35); /*0x76152c*/
      v41 = *(_DWORD *)CellStruct::Set((CellStruct *)&v44, *(_DWORD *)v49.__pad_0 / 256, v49.Coord3D_field_0x04 / 256); /*0x76156e*/
      if ( (unsigned __int8)Coord::Compare2D((Coord *)v37, &v41) ) /*0x761572*/
      {
        *(_DWORD *)v37 = *Coord::ToCell((Coord *)&v49, v45); /*0x761592*/
        Voxel::renderSection(this, v37); /*0x761596*/
      }
      if ( *(int *)&this->__pad_134[152] >= 4 ) /*0x7615a1*/
      {
        v49 = *(Coord3D *)Color::RGBFromFloat(&v52, (int)&this->__pad_D0[56], v40); /*0x7615ba*/
        v29 = Coord::ToCell((Coord *)&v49, v46); /*0x7615d5*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)v38, v29) ) /*0x7615df*/
        {
          *(_DWORD *)v38 = *Coord::ToCell((Coord *)&v49, v47); /*0x7615ff*/
          Voxel::renderSection(this, v38); /*0x761603*/
        }
      }
    }
  }
}



// ==== 0x00761640  Voxel::SectionProject  this=Voxel  sig=csp ====
int __thiscall Voxel::SectionProject(Voxel *this, int *a2, int a3)
{
  double v3; // st7
  int v6; // eax
  float v7; // eax
  int v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  int v30; // esi
  float v31; // eax
  int v32; // eax
  float v33; // edx
  int v34; // eax
  int v35; // esi
  float v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // esi
  float v40; // eax
  int v41; // eax
  float v42; // edx
  int v43; // eax
  int v44; // esi
  float v45; // eax
  int v46; // eax
  float v47; // edx
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // eax
  int result; // eax
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h] BYREF
  float v68; // [esp+50h] [ebp-84h]
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch] BYREF
  float v71; // [esp+5Ch] [ebp-78h]
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h] BYREF
  float v74; // [esp+68h] [ebp-6Ch]
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h] BYREF
  float v77; // [esp+74h] [ebp-60h]
  float v78; // [esp+78h] [ebp-5Ch]
  int v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45DA0 & 1) == 0 ) /*0x76165b*/
  {
    byte_B45DA0 |= 1u; /*0x76167d*/
    dword_B45DA8[0] = -1041235968; /*0x76168f*/
    dword_B45DAC = -1027080192; /*0x7616a0*/
    dword_B45DB0 = 0; /*0x7616b2*/
    dword_B45DB4 = -1041235968; /*0x7616c4*/
    dword_B45DB8 = 1120403456; /*0x7616d5*/
    dword_B45DBC = 0; /*0x7616e7*/
    dword_B45DC0 = 1106247680; /*0x7616f9*/
    dword_B45DC4 = -1027080192; /*0x76170a*/
    dword_B45DC8 = 0; /*0x76171c*/
    dword_B45DCC = 1106247680; /*0x76172e*/
    dword_B45DD0 = 1120403456; /*0x76173f*/
    dword_B45DD4 = 0; /*0x761751*/
    dword_B45DD8 = -1039663104; /*0x761763*/
    dword_B45DDC = -1037041664; /*0x761774*/
    dword_B45DE0 = 0; /*0x761786*/
    dword_B45DE4 = -1039663104; /*0x761798*/
    dword_B45DE8 = 1110441984; /*0x7617a9*/
    dword_B45DEC = 0; /*0x7617bb*/
    dword_B45DF0 = 1107820544; /*0x7617cd*/
    dword_B45DF4 = -1037041664; /*0x7617de*/
    dword_B45DF8 = 0; /*0x7617f0*/
    dword_B45DFC = 1107820544; /*0x761802*/
    dword_B45E00 = 1110441984; /*0x761813*/
    dword_B45E04 = 0; /*0x761825*/
    dword_B45E08 = -1042808832; /*0x761833*/
    dword_B45E0C = -1039663104; /*0x76183c*/
    dword_B45E10 = 0; /*0x761842*/
    dword_B45E14 = -1042808832; /*0x76186c*/
    dword_B45E18 = 1107820544; /*0x761871*/
    dword_B45E1C = 0; /*0x761877*/
    dword_B45E20 = 1104674816; /*0x7618a1*/
    dword_B45E24 = -1039663104; /*0x7618a6*/
    dword_B45E28 = 0; /*0x7618ac*/
    dword_B45E2C = 1104674816; /*0x7618d6*/
    dword_B45E30 = 1107820544; /*0x7618db*/
    dword_B45E34 = 0; /*0x7618e1*/
    dword_B45E38 = -1041235968; /*0x76190b*/
    dword_B45E3C = -1035468800; /*0x761910*/
    dword_B45E40 = 0; /*0x761916*/
    dword_B45E44 = -1041235968; /*0x761940*/
    dword_B45E48 = 1112014848; /*0x761945*/
    dword_B45E4C = 0; /*0x76194b*/
    dword_B45E50 = 1106247680; /*0x761975*/
    dword_B45E54 = -1035468800; /*0x76197a*/
    dword_B45E58 = 0; /*0x761980*/
    v56 = 30.0; /*0x761986*/
    v57 = 50.0; /*0x761992*/
    v58 = 0.0; /*0x76199e*/
    dword_B45E5C = 1106247680; /*0x7619af*/
    dword_B45E60 = 1112014848; /*0x7619b4*/
    dword_B45E64 = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  _ESI = *(_DWORD *)&this->__pad_A0[16]; /*0x7619cb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x7619d6*/
  v61 = *a2; /*0x7619dd*/
  __asm /*0x7619e3*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x7619eb*/
  __asm { fild [esp+0C8h+var_A4] } /*0x7619f2*/
  v6 = a2[2]; /*0x7619f6*/
  v62 = a2[1]; /*0x7619f9*/
  v63 = v6; /*0x7619fd*/
  __asm /*0x761a01*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x761a0b*/
  v8 = *(_DWORD *)(a3 + 4); /*0x761a10*/
  v56 = v7; /*0x761a13*/
  v79 = v8; /*0x761a17*/
  __asm /*0x761a1b*/
  {
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x761a29*/
  v57 = v9; /*0x761a2e*/
  LODWORD(v59) = *(_DWORD *)(a3 + 8); /*0x761a35*/
  __asm /*0x761a39*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x761a47*/
  __asm { fstp st } /*0x761a54*/
  __asm { fstp st }
  v64 = v56; /*0x761a5a*/
  v65 = LODWORD(v57); /*0x761a5e*/
  v66 = v10; /*0x761a62*/
  if ( !_ESI ) /*0x761a66*/
    v66 = v10 + 50; /*0x761a6b*/
  if ( _ESI == 3 ) /*0x761a72*/
    v66 += 50; /*0x761a74*/
  __asm /*0x761a79*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x761a96*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761a9b*/
  v12 = v11; /*0x761a9f*/
  __asm /*0x761aa1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x761aab*/
  __asm { fild [esp+0C8h+var_98] } /*0x761ab0*/
  v14 = v13; /*0x761ab4*/
  __asm /*0x761ab6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x761ac0*/
  v61 = v12; /*0x761ac9*/
  __asm { fstp st } /*0x761acd*/
  v63 = v15; /*0x761acf*/
  v62 = v14; /*0x761ad9*/
  __asm { fstp st } /*0x761add*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x761adf*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ae5*/
  LODWORD(v59) = v14 - v65; /*0x761ae9*/
  __asm /*0x761af0*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x761b09*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x761b11*/
  LODWORD(v59) = v16; /*0x761b1a*/
  *(_DWORD *)&this->__pad_A0[20] = v12; /*0x761b27*/
  *(_DWORD *)&this->__pad_A0[24] = v62; /*0x761b2d*/
  *(_DWORD *)&this->__pad_A0[28] = v63; /*0x761b34*/
  (*(void (__thiscall **)(Voxel *, char *))(*(_DWORD *)this->__pad_0 + 436))(this, &this->__pad_A0[20]); /*0x761b3b*/
  v17 = v64; /*0x761b41*/
  v18 = v65; /*0x761b45*/
  *(_DWORD *)&this->__pad_134[20] = 6; /*0x761b55*/
  *(float *)&this->__pad_A0[32] = v17; /*0x761b60*/
  v19 = v66; /*0x761b62*/
  *(_DWORD *)&this->__pad_A0[36] = v18; /*0x761b66*/
  *(_DWORD *)&this->__pad_134[24] = &this->__pad_134[28]; /*0x761b6f*/
  *(_DWORD *)&this->__pad_A0[40] = v19; /*0x761b75*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, (int *)&this->Voxel_field_0xCC); /*0x761b83*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, (int *)&this->__pad_D0[4]); /*0x761b9a*/
  v20 = *(_DWORD *)&this->__pad_134[24]; /*0x761b9f*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ba7*/
  *(_DWORD *)(v20 + 8) = *(_DWORD *)&this->__pad_D0[4]; /*0x761bab*/
  *(_DWORD *)(v20 + 12) = *(_DWORD *)&this->__pad_D0[8]; /*0x761bb1*/
  v21 = *(_DWORD *)&this->__pad_134[24]; /*0x761bb4*/
  *(_DWORD *)(v21 + 32) = this->Voxel_field_0xCC; /*0x761bbc*/
  __asm { fld st } /*0x761bc2*/
  *(_DWORD *)(v21 + 36) = *(_DWORD *)this->__pad_D0; /*0x761bc4*/
  __asm { fld st } /*0x761bcd*/
  _EAX = 48 * *(_DWORD *)&this->__pad_A0[16]; /*0x761bd2*/
  __asm /*0x761bd5*/
  {
    fadd dword ptr [eax+0B45DA8h]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45DACh]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45DB0h]
  }
  v76 = v80; /*0x761bf7*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x761bfb*/
  v77 = v81; /*0x761c03*/
  v78 = v82; /*0x761c07*/
  __asm /*0x761c0b*/
  {
    fadd dword ptr [eax+0B45DB4h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45DB8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45DBCh]
  }
  v67 = v83; /*0x761c39*/
  __asm { fstp [esp+0C8h+var_40] } /*0x761c3d*/
  v68 = v84; /*0x761c4b*/
  v69 = v85; /*0x761c4f*/
  __asm /*0x761c53*/
  {
    fld dword ptr [eax+0B45DC0h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45DC4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45DC8h]
  }
  v70 = v86; /*0x761c81*/
  __asm { fstp [esp+0C8h+var_34] } /*0x761c85*/
  v71 = v87; /*0x761c93*/
  v72 = v88; /*0x761c97*/
  __asm /*0x761c9b*/
  {
    fld dword ptr [eax+0B45DCCh]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45DD0h]
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45DD4h]
  }
  __asm { fstp dword ptr [esp+0C8h+var_B4] }
  v73 = v56; /*0x761cc5*/
  v74 = v57; /*0x761cc9*/
  LODWORD(v59) = v66 - v63; /*0x761cdf*/
  __asm /*0x761ce7*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_54]
    fmul st, st(2)
  }
  __asm { fdiv st, st(3) }
  LODWORD(v59) = LODWORD(v64) - v61; /*0x761d03*/
  __asm /*0x761d0a*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_5C]
    fld [esp+0D0h+var_48]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_80]
    fld [esp+0D0h+var_3C]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_74]
    fld [esp+0D0h+var_BC]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_68]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x761d4e*/
  __asm /*0x761d52*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x761d71*/
  __asm /*0x761d76*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x761d86*/
  {
    __asm /*0x761d88*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x761d8c*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x761d97*/
  {
    __asm /*0x761d99*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x761d9f*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x761da9*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x761db6*/
  if ( v62 > v65 ) /*0x761dbf*/
  {
    __asm /*0x761dc1*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x761dd2*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x761dd7*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x761de6*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v76); /*0x761dfb*/
  v76 = *v25; /*0x761e02*/
  v77 = v25[1]; /*0x761e09*/
  v78 = v25[2]; /*0x761e18*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v67); /*0x761e24*/
  v67 = *v26; /*0x761e2b*/
  v68 = v26[1]; /*0x761e37*/
  v69 = v26[2]; /*0x761e49*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v70); /*0x761e4d*/
  v70 = *v27; /*0x761e54*/
  v71 = v27[1]; /*0x761e5b*/
  v72 = v27[2]; /*0x761e6a*/
  v28 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v73); /*0x761e76*/
  __asm { fild [esp+0C8h+var_A0] } /*0x761e7b*/
  v73 = *v28; /*0x761e81*/
  __asm /*0x761e88*/
  {
    fld st
    fadd [esp+0C8h+var_64]
  }
  v74 = v28[1]; /*0x761e8e*/
  v75 = v28[2]; /*0x761e95*/
  LOWORD(v29) = Math::RoundToInt(v3); /*0x761e99*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761e9e*/
  v30 = v29; /*0x761ea2*/
  __asm /*0x761ea4*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_60]
  }
  LOWORD(v31) = Math::RoundToInt(v3); /*0x761eac*/
  __asm { fld [esp+0C8h+var_5C] } /*0x761eb1*/
  v57 = v31; /*0x761eb5*/
  LOWORD(v32) = Math::RoundToInt(v3); /*0x761eb9*/
  v33 = v57; /*0x761ebe*/
  __asm /*0x761eca*/
  {
    fld st
    fadd [esp+0C8h+var_88]
  }
  *(_DWORD *)&this->__pad_D0[44] = v30; /*0x761ed0*/
  *(float *)&this->__pad_D0[48] = v33; /*0x761ed2*/
  *(_DWORD *)&this->__pad_D0[52] = v32; /*0x761ed5*/
  LOWORD(v34) = Math::RoundToInt(v3); /*0x761ed8*/
  __asm /*0x761edd*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_84]
  }
  v35 = v34; /*0x761ee5*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x761ee7*/
  __asm { fld [esp+0C8h+var_80] } /*0x761eec*/
  v57 = v36; /*0x761ef0*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x761ef4*/
  *(_DWORD *)&this->__pad_D0[56] = v35; /*0x761eff*/
  __asm /*0x761f09*/
  {
    fld st
    fadd [esp+0C8h+var_7C]
  }
  *(float *)&this->__pad_D0[60] = v57; /*0x761f0f*/
  *(_DWORD *)&this->__pad_D0[64] = v37; /*0x761f12*/
  LOWORD(v38) = Math::RoundToInt(v3); /*0x761f15*/
  __asm /*0x761f1a*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_78]
  }
  v39 = v38; /*0x761f22*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x761f24*/
  __asm { fld [esp+0C8h+var_74] } /*0x761f29*/
  v57 = v40; /*0x761f2d*/
  LOWORD(v41) = Math::RoundToInt(v3); /*0x761f31*/
  v42 = v57; /*0x761f36*/
  __asm { fadd [esp+0C8h+var_70] } /*0x761f40*/
  *(_DWORD *)&this->__pad_D0[68] = v39; /*0x761f44*/
  *(float *)&this->__pad_D0[72] = v42; /*0x761f46*/
  *(_DWORD *)&this->__pad_D0[76] = v41; /*0x761f49*/
  LOWORD(v43) = Math::RoundToInt(v3); /*0x761f4c*/
  __asm /*0x761f51*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_6C]
  }
  v44 = v43; /*0x761f59*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x761f5b*/
  __asm { fld [esp+0C8h+var_68] } /*0x761f60*/
  v57 = v45; /*0x761f64*/
  LOWORD(v46) = Math::RoundToInt(v3); /*0x761f68*/
  v47 = v57; /*0x761f6d*/
  *(_DWORD *)&this->__pad_D0[80] = v44; /*0x761f77*/
  *(float *)&this->__pad_D0[84] = v47; /*0x761f85*/
  *(_DWORD *)&this->__pad_D0[88] = v46; /*0x761f88*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[44], (int *)&this->__pad_D0[12]); /*0x761f91*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[56], (int *)&this->__pad_D0[20]); /*0x761faa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[68], (int *)&this->__pad_D0[28]); /*0x761fc3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[80], (int *)&this->__pad_D0[36]); /*0x761fdc*/
  v48 = *(_DWORD **)&this->__pad_134[24]; /*0x761fe1*/
  *v48 = *(_DWORD *)&this->__pad_D0[12]; /*0x761fe9*/
  v48[1] = *(_DWORD *)&this->__pad_D0[16]; /*0x761fee*/
  v49 = *(_DWORD *)&this->__pad_134[24]; /*0x761ff1*/
  *(_DWORD *)(v49 + 16) = *(_DWORD *)&this->__pad_D0[20]; /*0x761ff9*/
  *(_DWORD *)(v49 + 20) = *(_DWORD *)&this->__pad_D0[24]; /*0x761fff*/
  v50 = *(_DWORD *)&this->__pad_134[24]; /*0x762002*/
  *(_DWORD *)(v50 + 24) = *(_DWORD *)&this->__pad_D0[36]; /*0x76200e*/
  *(_DWORD *)(v50 + 28) = *(_DWORD *)&this->__pad_D0[40]; /*0x762017*/
  result = *(_DWORD *)&this->__pad_134[24]; /*0x76201a*/
  *(_DWORD *)(result + 40) = *(_DWORD *)&this->__pad_D0[28]; /*0x762026*/
  *(_DWORD *)(result + 44) = *(_DWORD *)&this->__pad_D0[32]; /*0x762034*/
  qmemcpy(&this->__pad_134[164], (const void *)(*(_DWORD *)&this->__pad_134[160] + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/
}



// ==== 0x00762060  nullsub_46  this=-  sig=ida-proto ====
void __cdecl nullsub_46()
{
  ; /*0x762060*/
}



// ==== 0x00762070  Voxel::LightRender  this=Voxel  sig=csp ====
int __thiscall Voxel::LightRender(Voxel *this, int *a2, int a3)
{
  double v3; // st7
  int v6; // eax
  float v7; // eax
  float v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // esi
  float v30; // eax
  int v31; // eax
  float v32; // edx
  int v33; // eax
  int v34; // esi
  float v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // esi
  float v39; // eax
  int v40; // eax
  float v41; // edx
  int v42; // eax
  int v43; // esi
  float v44; // eax
  int v45; // eax
  float v46; // edx
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // eax
  int result; // eax
  double v51; // [esp+4h] [ebp-D0h]
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h]
  float v68; // [esp+50h] [ebp-84h] BYREF
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch]
  float v71; // [esp+5Ch] [ebp-78h] BYREF
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h]
  float v74; // [esp+68h] [ebp-6Ch] BYREF
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h]
  float v77; // [esp+74h] [ebp-60h] BYREF
  float v78; // [esp+78h] [ebp-5Ch]
  float v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45D88 & 1) == 0 ) /*0x76208b*/
  {
    byte_B45D88 |= 1u; /*0x7620ad*/
    dword_B45CA0[0] = -1041235968; /*0x7620bf*/
    dword_B45CA4 = -1027080192; /*0x7620d0*/
    dword_B45CA8 = 0; /*0x7620e2*/
    dword_B45CAC = -1041235968; /*0x7620f4*/
    dword_B45CB0 = 1120403456; /*0x762105*/
    dword_B45CB4 = 0; /*0x762117*/
    dword_B45CB8 = 1106247680; /*0x762129*/
    dword_B45CBC = -1027080192; /*0x76213a*/
    dword_B45CC0 = 0; /*0x76214c*/
    dword_B45CC4 = 1106247680; /*0x76215e*/
    dword_B45CC8 = 1120403456; /*0x76216f*/
    dword_B45CCC = 0; /*0x762181*/
    dword_B45CD0 = -1039663104; /*0x762193*/
    dword_B45CD4 = -1037041664; /*0x7621a4*/
    dword_B45CD8 = 0; /*0x7621b6*/
    dword_B45CDC = -1039663104; /*0x7621c8*/
    dword_B45CE0 = 1110441984; /*0x7621d9*/
    dword_B45CE4 = 0; /*0x7621eb*/
    dword_B45CE8 = 1107820544; /*0x7621fd*/
    dword_B45CEC = -1037041664; /*0x76220e*/
    dword_B45CF0 = 0; /*0x762220*/
    dword_B45CF4 = 1107820544; /*0x762232*/
    dword_B45CF8 = 1110441984; /*0x762243*/
    dword_B45CFC = 0; /*0x762255*/
    dword_B45D00 = -1042808832; /*0x762263*/
    dword_B45D04 = -1039663104; /*0x76226c*/
    dword_B45D08 = 0; /*0x762272*/
    dword_B45D0C = -1042808832; /*0x76229c*/
    dword_B45D10 = 1107820544; /*0x7622a1*/
    dword_B45D14 = 0; /*0x7622a7*/
    dword_B45D18 = 1104674816; /*0x7622d1*/
    dword_B45D1C = -1039663104; /*0x7622d6*/
    dword_B45D20 = 0; /*0x7622dc*/
    dword_B45D24 = 1104674816; /*0x762306*/
    dword_B45D28 = 1107820544; /*0x76230b*/
    dword_B45D2C = 0; /*0x762311*/
    dword_B45D30 = 0; /*0x76233b*/
    dword_B45D34 = -1035468800; /*0x762340*/
    dword_B45D38 = 0; /*0x762346*/
    dword_B45D3C = 0; /*0x762370*/
    dword_B45D40 = 1112014848; /*0x762375*/
    dword_B45D44 = 0; /*0x76237b*/
    dword_B45D48 = 0; /*0x7623a5*/
    dword_B45D4C = -1035468800; /*0x7623aa*/
    dword_B45D50 = 0; /*0x7623b0*/
    v56 = 0.0; /*0x7623b6*/
    v57 = 50.0; /*0x7623c2*/
    v58 = 0.0; /*0x7623ce*/
    dword_B45D54 = 0; /*0x7623df*/
    dword_B45D58 = 1112014848; /*0x7623e4*/
    dword_B45D5C = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  _ESI = *(_DWORD *)&this->__pad_A0[16]; /*0x7623fb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x762406*/
  v61 = *a2; /*0x76240d*/
  __asm /*0x762413*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x76241b*/
  __asm { fild [esp+0C8h+var_A4] } /*0x762422*/
  v6 = a2[2]; /*0x762426*/
  v62 = a2[1]; /*0x762429*/
  v63 = v6; /*0x76242d*/
  __asm /*0x762431*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x76243b*/
  v8 = *(float *)(a3 + 4); /*0x762440*/
  v56 = v7; /*0x762443*/
  v67 = v8; /*0x762447*/
  __asm /*0x76244b*/
  {
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x762459*/
  v57 = v9; /*0x76245e*/
  LODWORD(v59) = *(_DWORD *)(a3 + 8); /*0x762465*/
  __asm /*0x762469*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x762477*/
  __asm { fstp st } /*0x762484*/
  __asm { fstp st }
  v64 = v56; /*0x76248a*/
  v65 = LODWORD(v57); /*0x76248e*/
  v66 = v10; /*0x762492*/
  if ( !_ESI ) /*0x762496*/
    v66 = v10 + 50; /*0x76249b*/
  if ( _ESI == 3 ) /*0x7624a2*/
    v66 += 50; /*0x7624a4*/
  __asm /*0x7624a9*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x7624c6*/
  __asm { fild [esp+0C8h+var_9C] } /*0x7624cb*/
  v12 = v11; /*0x7624cf*/
  __asm /*0x7624d1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x7624db*/
  __asm { fild [esp+0C8h+var_98] } /*0x7624e0*/
  v14 = v13; /*0x7624e4*/
  __asm /*0x7624e6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x7624f0*/
  v61 = v12; /*0x7624fd*/
  __asm /*0x762503*/
  {
    fstp st
    fstp st
  }
  v62 = v14; /*0x762507*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x76250b*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x76250f*/
  LODWORD(v59) = v14 - v65; /*0x762518*/
  v63 = v15; /*0x76251c*/
  __asm /*0x762520*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v51); /*0x762539*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x762556*/
  __asm /*0x76255a*/
  {
    fstp [esp+0D0h+var_88]
    fild dword ptr [esp+0D0h+var_B4+4]
  }
  LODWORD(v59) = v14 - v65; /*0x762562*/
  __asm { fild dword ptr [esp+0D0h+var_B4+4] } /*0x76256a*/
  LODWORD(v59) = v63 - v66; /*0x762570*/
  __asm /*0x762574*/
  {
    fstp [esp+0D0h+var_B8]
    fild dword ptr [esp+0D0h+var_B4+4]
    fst dword ptr [esp+0D0h+var_B4]
    fld [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x76259d*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x7625a5*/
  v60 = v16; /*0x7625ae*/
  *(_DWORD *)&this->__pad_A0[20] = v12; /*0x7625bb*/
  *(_DWORD *)&this->__pad_A0[24] = v62; /*0x7625c1*/
  *(_DWORD *)&this->__pad_A0[28] = v63; /*0x7625c8*/
  (*(void (__thiscall **)(Voxel *, char *))(*(_DWORD *)this->__pad_0 + 436))(this, &this->__pad_A0[20]); /*0x7625cf*/
  v17 = v64; /*0x7625d5*/
  v18 = v65; /*0x7625d9*/
  *(_DWORD *)&this->__pad_134[20] = 4; /*0x7625e3*/
  *(float *)&this->__pad_A0[32] = v17; /*0x7625ed*/
  v19 = v66; /*0x7625ef*/
  *(_DWORD *)&this->__pad_A0[36] = v18; /*0x7625f3*/
  *(_DWORD *)&this->__pad_134[24] = &this->__pad_134[76]; /*0x7625fc*/
  *(_DWORD *)&this->__pad_A0[40] = v19; /*0x762602*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, (int *)&this->Voxel_field_0xCC); /*0x762617*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, (int *)&this->__pad_D0[4]); /*0x76262e*/
  __asm { fld [esp+0C8h+var_88] } /*0x762633*/
  LOWORD(v20) = Math::RoundToInt(v3); /*0x762637*/
  LODWORD(v59) = v20; /*0x76263c*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x762646*/
  _EAX = 48 * *(_DWORD *)&this->__pad_A0[16]; /*0x76264d*/
  __asm /*0x762650*/
  {
    fld st
    fadd dword ptr [eax+0B45CA0h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45CA4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45CA8h]
  }
  v74 = v83; /*0x762680*/
  __asm { fstp [esp+0C8h+var_40] } /*0x762684*/
  v75 = v84; /*0x762692*/
  v76 = v85; /*0x762696*/
  __asm /*0x76269a*/
  {
    fadd dword ptr [eax+0B45CACh]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45CB0h]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45CB4h]
  }
  v68 = v80; /*0x7626bc*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x7626c0*/
  v69 = v81; /*0x7626c8*/
  v70 = v82; /*0x7626cc*/
  __asm /*0x7626d0*/
  {
    fld dword ptr [eax+0B45CB8h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45CBCh]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45CC0h]
  }
  v77 = v86; /*0x762702*/
  __asm { fstp [esp+0C8h+var_34] } /*0x762706*/
  v78 = v87; /*0x762714*/
  v79 = v88; /*0x762718*/
  __asm /*0x762720*/
  {
    fld dword ptr [eax+0B45CC4h]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45CC8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45CCCh]
  }
  v71 = v56; /*0x76273e*/
  __asm { fstp dword ptr [esp+0C8h+var_B4] } /*0x76274c*/
  LODWORD(v59) = v66 - v63; /*0x762750*/
  __asm /*0x762758*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_A4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_48]
    fmul st, st(3)
  }
  v72 = v57; /*0x762779*/
  __asm { fdiv st, st(2) } /*0x76277d*/
  LODWORD(v59) = LODWORD(v64) - v61; /*0x76278a*/
  __asm /*0x76278e*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_64]
    fld [esp+0D0h+var_54]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_7C]
    fld [esp+0D0h+var_3C]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_58]
    fld [esp+0D0h+var_BC]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_70]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x7627cf*/
  __asm /*0x7627d3*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x7627f2*/
  __asm /*0x7627f7*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x762807*/
  {
    __asm /*0x762809*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x76280d*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x762818*/
  {
    __asm /*0x76281a*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x762820*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x76282a*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x762837*/
  if ( v62 > v65 ) /*0x762840*/
  {
    __asm /*0x762842*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x762853*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x762858*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x762867*/
  v24 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v74); /*0x76287c*/
  v74 = *v24; /*0x762883*/
  v75 = v24[1]; /*0x76288f*/
  v76 = v24[2]; /*0x7628a1*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v68); /*0x7628a5*/
  v68 = *v25; /*0x7628ac*/
  v69 = v25[1]; /*0x7628b3*/
  v70 = v25[2]; /*0x7628c2*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v77); /*0x7628ce*/
  v77 = *v26; /*0x7628d5*/
  v78 = v26[1]; /*0x7628e1*/
  v79 = v26[2]; /*0x7628f3*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v71); /*0x7628f7*/
  __asm { fild [esp+0C8h+var_A0] } /*0x7628fc*/
  v71 = *v27; /*0x762902*/
  __asm /*0x762909*/
  {
    fld st
    fadd [esp+0C8h+var_6C]
  }
  v72 = v27[1]; /*0x76290f*/
  v73 = v27[2]; /*0x762916*/
  LOWORD(v28) = Math::RoundToInt(v3); /*0x76291a*/
  __asm { fild [esp+0C8h+var_9C] } /*0x76291f*/
  v29 = v28; /*0x762923*/
  __asm /*0x762925*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_68]
  }
  LOWORD(v30) = Math::RoundToInt(v3); /*0x76292d*/
  __asm { fld [esp+0C8h+var_64] } /*0x762932*/
  v57 = v30; /*0x762936*/
  LOWORD(v31) = Math::RoundToInt(v3); /*0x76293a*/
  v32 = v57; /*0x76293f*/
  __asm /*0x76294b*/
  {
    fld st
    fadd [esp+0C8h+var_84]
  }
  *(_DWORD *)&this->__pad_D0[44] = v29; /*0x762951*/
  *(float *)&this->__pad_D0[48] = v32; /*0x762953*/
  *(_DWORD *)&this->__pad_D0[52] = v31; /*0x762956*/
  LOWORD(v33) = Math::RoundToInt(v3); /*0x762959*/
  __asm /*0x76295e*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_80]
  }
  v34 = v33; /*0x762966*/
  LOWORD(v35) = Math::RoundToInt(v3); /*0x762968*/
  __asm { fld [esp+0C8h+var_7C] } /*0x76296d*/
  v57 = v35; /*0x762971*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x762975*/
  *(_DWORD *)&this->__pad_D0[56] = v34; /*0x762980*/
  __asm /*0x76298a*/
  {
    fld st
    fadd [esp+0C8h+var_60]
  }
  *(float *)&this->__pad_D0[60] = v57; /*0x762990*/
  *(_DWORD *)&this->__pad_D0[64] = v36; /*0x762993*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x762996*/
  __asm /*0x76299b*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_5C]
  }
  v38 = v37; /*0x7629a3*/
  LOWORD(v39) = Math::RoundToInt(v3); /*0x7629a5*/
  __asm { fld [esp+0C8h+var_58] } /*0x7629aa*/
  v57 = v39; /*0x7629ae*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x7629b2*/
  v41 = v57; /*0x7629b7*/
  __asm { fadd [esp+0C8h+var_78] } /*0x7629c1*/
  *(_DWORD *)&this->__pad_D0[68] = v38; /*0x7629c5*/
  *(float *)&this->__pad_D0[72] = v41; /*0x7629c7*/
  *(_DWORD *)&this->__pad_D0[76] = v40; /*0x7629ca*/
  LOWORD(v42) = Math::RoundToInt(v3); /*0x7629cd*/
  __asm /*0x7629d2*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_74]
  }
  v43 = v42; /*0x7629da*/
  LOWORD(v44) = Math::RoundToInt(v3); /*0x7629dc*/
  __asm { fld [esp+0C8h+var_70] } /*0x7629e1*/
  v57 = v44; /*0x7629e5*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x7629e9*/
  v46 = v57; /*0x7629ee*/
  *(_DWORD *)&this->__pad_D0[80] = v43; /*0x7629f8*/
  *(float *)&this->__pad_D0[84] = v46; /*0x762a06*/
  *(_DWORD *)&this->__pad_D0[88] = v45; /*0x762a09*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[44], (int *)&this->__pad_D0[12]); /*0x762a12*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[56], (int *)&this->__pad_D0[20]); /*0x762a2b*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[68], (int *)&this->__pad_D0[28]); /*0x762a44*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[80], (int *)&this->__pad_D0[36]); /*0x762a5d*/
  v47 = *(_DWORD **)&this->__pad_134[24]; /*0x762a62*/
  *v47 = *(_DWORD *)&this->__pad_D0[12]; /*0x762a6a*/
  v47[1] = *(_DWORD *)&this->__pad_D0[16]; /*0x762a6f*/
  v48 = *(_DWORD *)&this->__pad_134[24]; /*0x762a72*/
  *(_DWORD *)(v48 + 8) = *(_DWORD *)&this->__pad_D0[20]; /*0x762a7a*/
  *(_DWORD *)(v48 + 12) = *(_DWORD *)&this->__pad_D0[24]; /*0x762a80*/
  v49 = *(_DWORD *)&this->__pad_134[24]; /*0x762a83*/
  *(_DWORD *)(v49 + 16) = *(_DWORD *)&this->__pad_D0[36]; /*0x762a8f*/
  *(_DWORD *)(v49 + 20) = *(_DWORD *)&this->__pad_D0[40]; /*0x762a98*/
  result = *(_DWORD *)&this->__pad_134[24]; /*0x762a9b*/
  *(_DWORD *)(result + 24) = *(_DWORD *)&this->__pad_D0[28]; /*0x762aa7*/
  *(_DWORD *)(result + 28) = *(_DWORD *)&this->__pad_D0[32]; /*0x762ab5*/
  qmemcpy(&this->__pad_134[164], (const void *)(*(_DWORD *)&this->__pad_134[160] + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/
}



// ==== 0x00762AE0  nullsub_47  this=-  sig=ida-proto ====
void __cdecl nullsub_47()
{
  ; /*0x762ae0*/
}



// ==== 0x00762AF0  Voxel::TransformMatrix  this=WaveClass  sig=csp ====
void __thiscall Voxel::TransformMatrix(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // eax
  int *v21; // eax
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  double v25; // st7
  double v26; // st7
  int v27; // eax
  int v28; // edi
  int v29; // eax
  _DWORD *v30; // ecx
  double v31; // st7
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // edx
  double v36; // st7
  char v38; // c0
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  int v44; // eax
  int v45; // edi
  int v46; // eax
  int v47; // edx
  double v48; // st7
  double v49; // st7
  int v50; // eax
  int v51; // edi
  int v52; // eax
  _DWORD *v53; // ecx
  double v54; // st7
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // edx
  double v59; // st7
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // ecx
  double v64; // st7
  char v66; // c0
  int v67; // eax
  int v68; // edi
  int v69; // eax
  int v70; // ecx
  double v71; // st7
  int v72; // eax
  int v73; // edi
  int v74; // eax
  int v75; // edx
  double v76; // st7
  int v77; // eax
  int v78; // edi
  int v79; // eax
  int v80; // ecx
  int v81; // [esp+20h] [ebp-1Ch] BYREF
  int v82; // [esp+24h] [ebp-18h]
  int v83; // [esp+28h] [ebp-14h]
  int v84; // [esp+2Ch] [ebp-10h]
  int v85[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)(this + 312) - *(double *)(this + 320) > 0.1 && !*(_DWORD *)(this + 176) ) /*0x762b18*/
    *(_BYTE *)(this + 301) = 1; /*0x762b22*/
  LOWORD(v2) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b35*/
  if ( *(_DWORD *)(this + 304) == v2 && *(_DWORD *)(this + 176) == 3 ) /*0x762b49*/
  {
    v3 = *(_DWORD *)(this + 308); /*0x762b4b*/
    *(_DWORD *)(this + 304) = 64; /*0x762b51*/
    *(_DWORD *)(this + 308) = v3 + 1; /*0x762b5c*/
  }
  v4 = *(_DWORD *)(this + 172); /*0x762b62*/
  if ( !v4 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v5 = *(_DWORD *)(this + 468); /*0x762b70*/
  if ( !v5 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  LOWORD(v6) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b8a*/
  if ( *(_DWORD *)(this + 304) == v6 ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( *(_DWORD *)(v5 + 692) != v4 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762bae*/
  {
    v7 = v5 + 156; /*0x762bc0*/
    v8 = *(_DWORD *)(v5 + 156); /*0x762bc4*/
    v9 = *(_DWORD *)(v7 + 4); /*0x762bc6*/
    v10 = *(_DWORD *)(v7 + 8); /*0x762bc9*/
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 172) + 88))( /*0x762bd1*/
                      *(_DWORD *)(this + 172),
                      v85);
    v12 = v10 - v11[2]; /*0x762bdb*/
    v82 = v8 - *v11; /*0x762bdd*/
    v13 = v9 - v11[1]; /*0x762be4*/
    v84 = v12; /*0x762be6*/
    v83 = v13; /*0x762bea*/
    Math::Sqrt((double)v82 * (double)v82 + (double)v12 * (double)v12 + (double)v13 * (double)v13); /*0x762c16*/
    LOWORD(v14) = Math::RoundToInt(1.0 / 0.050000001); /*0x762c1e*/
    v81 = v14; /*0x762c23*/
    if ( dbl_B45D80 * 6.0 < (double)v14 ) /*0x762c3e*/
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
    v15 = *(_DWORD *)(this + 172); /*0x762c6f*/
    if ( v15 && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) == 1 ) /*0x762c81*/
    {
      v16 = *(_DWORD *)(this + 172); /*0x762c97*/
      v17 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 468) + 176))( /*0x762ca9*/
              *(_DWORD *)(this + 468),
              v85,
              0,
              0,
              0);
      v18 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v16 + 88))(v16, &v81, v17); /*0x762cb9*/
      Voxel::LightRender((Voxel *)this, v18, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( *(_DWORD *)(this + 176) == 3 ) /*0x762ccf*/
    {
      v19 = *(_DWORD *)(this + 468); /*0x762cd7*/
      v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762ce8*/
      v21 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v19 + 176))( /*0x762d05*/
                     v19,
                     &v81,
                     0,
                     0,
                     0,
                     0,
                     v20);
      Voxel::LightRender((Voxel *)this, v21, (int)v85); /*0x762d0e*/
    }
    else
    {
LABEL_21:
      v22 = *(_DWORD *)(this + 468); /*0x762d1b*/
      v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762d2c*/
      v24 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v22 + 176))( /*0x762d49*/
                     v22,
                     &v81,
                     0,
                     0,
                     0,
                     0,
                     v23);
      Voxel::SectionProject((Voxel *)this, v24, (int)v85); /*0x762d52*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762d6c*/
  {
    if ( *(double *)(this + 312) < 1.0 && *(_BYTE *)(this + 300) ) /*0x762f69*/
    {
      v48 = *(double *)(this + 312) + 0.050000001; /*0x762f7d*/
      *(double *)(this + 312) = v48; /*0x762f83*/
      if ( v48 > 0.98 ) /*0x762f94*/
      {
        *(_DWORD *)(this + 312) = 0; /*0x762f96*/
        *(_DWORD *)(this + 316) = 1072693248; /*0x762fa0*/
      }
      v49 = *(double *)(this + 312); /*0x762faa*/
      LOWORD(v50) = Math::RoundToInt(v49); /*0x762fca*/
      v51 = v50; /*0x762fd5*/
      LOWORD(v52) = Math::RoundToInt(v49); /*0x762fe3*/
      v53 = *(_DWORD **)(this + 332); /*0x762fe8*/
      *v53 = v51; /*0x762ff0*/
      v53[1] = v52; /*0x762ff4*/
      v54 = *(double *)(this + 312); /*0x762ff7*/
      LOWORD(v55) = Math::RoundToInt(v54); /*0x763017*/
      v56 = v55; /*0x763022*/
      LOWORD(v57) = Math::RoundToInt(v54); /*0x763030*/
      v58 = *(_DWORD *)(this + 332); /*0x763035*/
      *(_DWORD *)(v58 + 8) = v56; /*0x76303d*/
      *(_DWORD *)(v58 + 12) = v57; /*0x763042*/
      v59 = *(double *)(this + 312); /*0x763045*/
      LOWORD(v60) = Math::RoundToInt(v59); /*0x763065*/
      v61 = v60; /*0x763070*/
      LOWORD(v62) = Math::RoundToInt(v59); /*0x76307e*/
      v63 = *(_DWORD *)(this + 332); /*0x763083*/
      *(_DWORD *)(v63 + 16) = v61; /*0x76308b*/
      *(_DWORD *)(v63 + 20) = v62; /*0x763090*/
    }
    if ( *(_BYTE *)(this + 301) && 0.050000001 * 0.5 + *(double *)(this + 312) >= *(double *)(this + 320) ) /*0x7630be*/
    {
      v64 = *(double *)(this + 320) + 0.050000001; /*0x7630ca*/
      *(double *)(this + 320) = v64; /*0x7630d6*/
      if ( !v66 ) /*0x7630e1*/
        goto LABEL_31; /*0x7630e1*/
      LOWORD(v67) = Math::RoundToInt(v64); /*0x763111*/
      v68 = v67; /*0x76311c*/
      LOWORD(v69) = Math::RoundToInt(v64); /*0x76312a*/
      v70 = *(_DWORD *)(this + 332); /*0x76312f*/
      *(_DWORD *)(v70 + 24) = v68; /*0x763137*/
      *(_DWORD *)(v70 + 28) = v69; /*0x76313c*/
      v71 = *(double *)(this + 320); /*0x76313f*/
      LOWORD(v72) = Math::RoundToInt(v71); /*0x76315f*/
      v73 = v72; /*0x76316a*/
      LOWORD(v74) = Math::RoundToInt(v71); /*0x763178*/
      v75 = *(_DWORD *)(this + 332); /*0x76317d*/
      *(_DWORD *)(v75 + 32) = v73; /*0x763185*/
      *(_DWORD *)(v75 + 36) = v74; /*0x76318a*/
      v76 = *(double *)(this + 320); /*0x76318d*/
      LOWORD(v77) = Math::RoundToInt(v76); /*0x7631ad*/
      v78 = v77; /*0x7631b8*/
      LOWORD(v79) = Math::RoundToInt(v76); /*0x7631c6*/
      v80 = *(_DWORD *)(this + 332); /*0x7631cb*/
      *(_DWORD *)(v80 + 40) = v78; /*0x7631d3*/
      *(_DWORD *)(v80 + 44) = v79; /*0x7631d8*/
    }
    goto LABEL_42; /*0x7631d8*/
  }
  if ( *(double *)(this + 312) < 1.0 && *(_BYTE *)(this + 300) ) /*0x762d7b*/
  {
    v25 = *(double *)(this + 312) + 0.050000001; /*0x762d8f*/
    *(double *)(this + 312) = v25; /*0x762d95*/
    if ( v25 > 0.98 ) /*0x762da6*/
    {
      *(_DWORD *)(this + 312) = 0; /*0x762da8*/
      *(_DWORD *)(this + 316) = 1072693248; /*0x762db2*/
    }
    v26 = *(double *)(this + 312); /*0x762dbc*/
    LOWORD(v27) = Math::RoundToInt(v26); /*0x762ddc*/
    v28 = v27; /*0x762de7*/
    LOWORD(v29) = Math::RoundToInt(v26); /*0x762df5*/
    v30 = *(_DWORD **)(this + 332); /*0x762dfa*/
    *v30 = v28; /*0x762e02*/
    v30[1] = v29; /*0x762e06*/
    v31 = *(double *)(this + 312); /*0x762e09*/
    LOWORD(v32) = Math::RoundToInt(v31); /*0x762e29*/
    v33 = v32; /*0x762e34*/
    LOWORD(v34) = Math::RoundToInt(v31); /*0x762e42*/
    v35 = *(_DWORD *)(this + 332); /*0x762e47*/
    *(_DWORD *)(v35 + 8) = v33; /*0x762e4f*/
    *(_DWORD *)(v35 + 12) = v34; /*0x762e54*/
  }
  if ( !*(_BYTE *)(this + 301) || 0.050000001 * 0.5 + *(double *)(this + 312) < *(double *)(this + 320) ) /*0x762e82*/
  {
LABEL_42:
    Voxel::FaceBlit((Voxel *)this); /*0x7631db*/
    return; /*0x7631dd*/
  }
  v36 = *(double *)(this + 320) + 0.050000001; /*0x762e8e*/
  *(double *)(this + 320) = v36; /*0x762e9a*/
  if ( !v38 ) /*0x762ea5*/
  {
LABEL_31:
    (*(void (__thiscall **)(int))(this->WaveClass_field_1A4)(this); /*0x762ea7*/
    return; /*0x762eba*/
  }
  LOWORD(v39) = Math::RoundToInt(v36); /*0x762ed5*/
  v40 = v39; /*0x762ee0*/
  LOWORD(v41) = Math::RoundToInt(v36); /*0x762eee*/
  v42 = *(_DWORD *)(this + 332); /*0x762ef3*/
  *(_DWORD *)(v42 + 16) = v40; /*0x762efb*/
  *(_DWORD *)(v42 + 20) = v41; /*0x762f00*/
  v43 = *(double *)(this + 320); /*0x762f03*/
  LOWORD(v44) = Math::RoundToInt(v43); /*0x762f23*/
  v45 = v44; /*0x762f2e*/
  LOWORD(v46) = Math::RoundToInt(v43); /*0x762f3c*/
  v47 = *(_DWORD *)(this + 332); /*0x762f41*/
  *(_DWORD *)(v47 + 24) = v45; /*0x762f4b*/
  *(_DWORD *)(v47 + 28) = v46; /*0x762f50*/
  Voxel::FaceBlit((Voxel *)this); /*0x762f53*/
}



// ==== 0x007631F0  WaveClass::GetTypeIdentifier  this=WaveClass  sig=csp ====
int WaveClass::GetTypeIdentifier(WaveClass *this)
{
  return 43; /*0x7631f5*/
}



// ==== 0x00763200  WaveClass::ddtor  this=WaveClass  sig=csp ====
void **__thiscall WaveClass::ddtor(WaveClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  WaveClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &WaveClass::`vftable'; /*0x763206*/
  this->? = &WaveClass::`vftable'; /*0x76320c*/
  this->? = &WaveClass::`vftable'; /*0x763213*/
  this->? = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x763221*/
  v6 = this; /*0x763236*/
  v3 = (*(int (__thiscall **)(_BYTE *, WaveClass **))(*(_DWORD *)&stru_A8EB00.?[84] + 16))(&stru_A8EB00.?[84], &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[100] ) /*0x76324a*/
  {
    --*(_DWORD *)&stru_A8EB00.?[100]; /*0x76324f*/
    for ( ; /*0x763255*/
          v3 < *(int *)&stru_A8EB00.?[100];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v3) )
    {
      ++v3; /*0x76325d*/
    }
  }
  (*(void (__thiscall **)(char *))(this->WaveClass_field_128 + 12))((char *)this + 496); /*0x76327e*/
  v4 = (void *)*((_DWORD *)this + 125); /*0x763281*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x763284*/
  if ( v4 && *((_BYTE *)this + 509) ) /*0x76328e*/
  {
    __3_YAXPAX_Z(v4); /*0x763296*/
    *((_DWORD *)this + 125) = 0; /*0x76329e*/
  }
  *((_BYTE *)this + 509) = 0; /*0x7632a7*/
  *((_DWORD *)this + 126) = 0; /*0x7632ab*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    __3_YAXPAX_Z(this); /*0x7632c1*/
  return &this->ObjectClass; /*0x7632cb*/
}



// ==== 0x007632D0  WaveClass::Constructor_7632D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall WaveClass::Constructor_7632D0(WaveClass *this, int a2, int a3)
{
  this->? = 0; /*0x7632d9*/
  this->? = (void *)a2; /*0x7632e0*/
  LOBYTE(this->?) = 1; /*0x7632e3*/
  BYTE1(this->?) = 0; /*0x7632e7*/
  this->ObjectClass = &VectorClass<CellClass *>::`vftable'; /*0x7632eb*/
  if ( a2 ) /*0x7632f1*/
  {
    if ( a3 ) /*0x7632f9*/
    {
      this->? = (void *)a3; /*0x7632fb*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x76330c*/
      BYTE1(this->?) = 1; /*0x76330f*/
    }
  }
  this->ObjectClass = &DynamicVectorClass<CellClass *>::`vftable'; /*0x763313*/
  this->? = 10; /*0x763319*/
  this->? = 0; /*0x763320*/
  return &this->ObjectClass; /*0x763329*/
}



// ==== 0x00763330  Voxel::freeSectionMemory  this=Voxel  sig=csp ====
char __thiscall Voxel::freeSectionMemory(Voxel *this, _DWORD *a2)
{
  int Voxel_field_0x8; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  Voxel_field_0x8 = this->Voxel_field_0x8; /*0x763333*/
  if ( this->Voxel_field_0x10[0] >= Voxel_field_0x8 ) /*0x76333b*/
  {
    if ( !BYTE1(this->Voxel_field_0xC) && Voxel_field_0x8 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = this->Voxel_field_0x14[0]; /*0x763348*/
    if ( v4 <= 0 /*0x763358*/
      || !(*(unsigned __int8 (__thiscall **)(Voxel *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            Voxel_field_0x8 + v4,
            0) )
    {
      return 0; /*0x76335f*/
    }
  }
  v6 = this->Voxel_field_0x10[0]; /*0x763365*/
  v7 = this->Voxel_field_0x4[0]; /*0x763368*/
  this->Voxel_field_0x10[0] = v6 + 1; /*0x76336e*/
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
  dword_B72608 = (int)&DynamicVectorClass<WaypointPathClass *>::`vftable'; /*0x7635ad*/
  dword_B7261C = 10; /*0x7635b7*/
  dword_B72618 = 0; /*0x7635c1*/
  return atexit(sub_7635D0); /*0x7635cc*/
}



// ==== 0x007635D0  sub_7635D0  this=-  sig=ida-proto ====
void __cdecl sub_7635D0()
{
  dword_B72608 = (int)&VectorClass<WaypointPathClass *>::`vftable'; /*0x7635d8*/
  if ( dword_B7260C && byte_B72615 ) /*0x7635ec*/
  {
    __3_YAXPAX_Z(dword_B7260C); /*0x7635ef*/
    dword_B7260C = 0; /*0x7635f7*/
  }
  byte_B72615 = 0; /*0x7635fd*/
  dword_B72610 = 0; /*0x763603*/
}



// ==== 0x00763610  Waypoint::To_String  this=Waypoint  sig=csp ====
CHAR *__fastcall Waypoint::To_String(int a1)
{
  if ( a1 == -1 ) /*0x763613*/
  {
    byte_B72654 = 0; /*0x763615*/
    return &byte_B72654; /*0x76361c*/
  }
  else
  {
    if ( a1 >= 26 ) /*0x763625*/
      wsprintfA(&byte_B72654, "%c%c", a1 / 26 + 64, a1 % 26 + 65); /*0x763671*/
    else
      wsprintfA(&byte_B72654, "%c", a1 + 65); /*0x763635*/
    return &byte_B72654; /*0x76363e*/
  }
}



// ==== 0x00763690  String::To_Waypoint  this=AbstractClass  sig=csp ====
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
_DWORD *__thiscall unknown_libname_36(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x7636f4*/
  this->? = 0; /*0x7636f6*/
  this->? = 0; /*0x7636f9*/
  return &this->AbstractClass; /*0x7636fc*/
}



// ==== 0x00763700  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_763700(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x76370b*/
  this->? = (void *)a2[1]; /*0x763710*/
  this->? = (void *)a2[2]; /*0x763717*/
  return &this->AbstractClass; /*0x763713*/
}



// ==== 0x00763720  ObjectClass::nullsub_84  this=ObjectClass  sig=csp ====
void nullsub_84()
{
  ; /*0x763720*/
}



// ==== 0x00763730  WaypointPathClass::Init  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::Init(WaypointPathClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  this->waypoints[1] = 0; /*0x763741*/
  this->waypoints[2] = 0; /*0x763744*/
  LOBYTE(this->waypoints[3]) = 1; /*0x763747*/
  BYTE1(this->waypoints[3]) = 0; /*0x76374b*/
  this->waypoints[0] = (int)&DynamicVectorClass<WaypointClass>::`vftable'; /*0x76374e*/
  this->waypoints[5] = 10; /*0x763755*/
  this->waypoints[4] = 0; /*0x76375c*/
  this->AbstractClass = &WaypointPathClass::`vftable'; /*0x76375f*/
  this->? = &WaypointPathClass::`vftable'; /*0x763765*/
  this->? = &WaypointPathClass::`vftable'; /*0x76376c*/
  this->? = &WaypointPathClass::`vftable'; /*0x763773*/
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
  return (int)this; /*0x7637cd*/
}



// ==== 0x00763810  WaypointPathClass::Construct  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass_Constructor(int this, unsigned int a2)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  *(_DWORD *)(this + 36) = -1; /*0x76381e*/
  *(_DWORD *)(this + 44) = 0; /*0x763825*/
  *(_DWORD *)(this + 48) = 0; /*0x763828*/
  *(_BYTE *)(this + 52) = 1; /*0x76382b*/
  *(_BYTE *)(this + 53) = 0; /*0x76382f*/
  *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
  *(_DWORD *)(this + 60) = 10; /*0x763839*/
  *(_DWORD *)(this + 56) = 0; /*0x763840*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
  *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
  if ( a2 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = dword_B72618++; /*0x7638a7*/
    *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
  }
  return this; /*0x7638bb*/
}



// ==== 0x00763980  Array::GetElement  this=Array  sig=csp ====
int __thiscall Array::GetElement(Array *this, int a2)
{
  if ( a2 < 0 || a2 >= (int)this->Array_field_0x38 ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return (int)this->Array_field_0x2C + 12 * a2; /*0x763993*/
}



// ==== 0x007639A0  ObjectClass::WaypointClass_Find  this=ObjectClass  sig=csp ====
char __thiscall WaypointClass_Find(ObjectClass *this, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  BombClass *attachedBomb; // eax
  int *p_owningHouseIndex; // esi
  ObjectClass *nextObject; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int *v13; // ecx

  v2 = a2[2]; /*0x7639c2*/
  v3 = ((__int16)(a2[1] / 256) << 8) + 128; /*0x7639e0*/
  v4 = ((__int16)(*a2 / 256) << 8) + 128; /*0x7639ee*/
  if ( this->occupant == -1 ) /*0x7639f4*/
  {
    attachedBomb = this->attachedBomb; /*0x7639f6*/
    p_owningHouseIndex = &this->owningHouseIndex; /*0x7639f9*/
    nextObject = this->nextObject; /*0x7639fc*/
    if ( (int)attachedBomb < (int)nextObject /*0x763a1e*/
      || (*((_BYTE *)p_owningHouseIndex + 13) || !nextObject)
      && (v8 = p_owningHouseIndex[5], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_owningHouseIndex + 8))(
           p_owningHouseIndex,
           (int)nextObject + v8,
           0) )
    {
      v9 = p_owningHouseIndex[4]; /*0x763a25*/
      v10 = v9 + 1; /*0x763a28*/
      v11 = 3 * v9; /*0x763a2b*/
      v12 = p_owningHouseIndex[1]; /*0x763a2e*/
      p_owningHouseIndex[4] = v10; /*0x763a31*/
      v13 = (int *)(v12 + 4 * v11); /*0x763a34*/
      *v13 = v4; /*0x763a37*/
      v13[1] = v3; /*0x763a3a*/
      v13[2] = v2; /*0x763a3d*/
    }
  }
  return 1; /*0x763a40*/
}



// ==== 0x00763A50  Waypoint::FindCell  this=Waypoint  sig=csp ====
char __thiscall Waypoint::FindCell(Waypoint *this, _DWORD *a2)
{
  int v3; // ecx
  _DWORD *i; // edi
  void *v6; // [esp+10h] [ebp-8h]
  Waypoint *v7; // [esp+14h] [ebp-4h]

  v3 = 0; /*0x763a59*/
  v7 = this; /*0x763a5b*/
  v6 = this->field_38; /*0x763a64*/
  if ( (int)v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = *(_DWORD **)&this->__pad_0[44]; /*0x763a6e*/
        (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= (int)v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  *(_DWORD *)&v7->__pad_0[36] = v3; /*0x763ad0*/
  return 1; /*0x763acd*/
}



// ==== 0x00763BA0  VectorClass::GetAtChecked  this=VectorClass  sig=csp ====
int __thiscall VectorClass::GetAtChecked(VectorClass *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 10) + 20))((char *)this + 40, a2) + 1; /*0x763bb4*/
  if ( *((_DWORD *)this + 9) != -1 && v3 == this->tail_E ) /*0x763bbd*/
    v3 = *((_DWORD *)this + 9); /*0x763bbf*/
  if ( v3 < 0 || v3 >= this->tail_E ) /*0x763bc8*/
    return 0; /*0x763bd7*/
  else
    return *((_DWORD *)this + 11) + 12 * v3; /*0x763bd1*/
}



// ==== 0x00763C00  WaypointPathClass::PowerDrainUpdate  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::PowerDrainUpdate(WaypointPathClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x763c09*/
  Power::TimerProcess(this->idxArray); /*0x763c14*/
  return Power::TimerProcess(this->waypoints[4]); /*0x763c24*/
}



// ==== 0x00763C30  WaypointPathClass::ddtor  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::ddtor(WaypointPathClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = unk_7E985C; /*0x763c60*/
  return 0; /*0x763c3d*/
}



// ==== 0x00763C70  WaypointPathClass::LoadState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::LoadState(WaypointPathClass *this, int a2)
{
  AbstractClass *v2; // esi
  int v3; // edi
  int result; // eax
  WaypointPathClass *p_vtable1; // esi
  int v6; // ebp
  int v7; // eax
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  int v11; // ecx
  int v12; // edx
  char *vtable1; // eax
  char *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v2 = (AbstractClass *)this; /*0x763c76*/
  v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[1].vtable1 = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ca0*/
      v2->vtable0 = &WaypointPathClass::`vftable'; /*0x763ca7*/
      v2->vtable1 = &WaypointPathClass::`vftable'; /*0x763cad*/
      v2->vtable2 = &WaypointPathClass::`vftable'; /*0x763cb4*/
      v2->vtable3 = &WaypointPathClass::`vftable'; /*0x763cbb*/
    }
    result = (*(int (__stdcall **)(int, WaypointPathClass **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &this, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      p_vtable1 = (WaypointPathClass *)&v2[1].vtable1; /*0x763cd8*/
      if ( p_vtable1 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(p_vtable1, 0, 0); /*0x763ce3*/
        p_vtable1->AbstractClass = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ce8*/
        p_vtable1->? = 10; /*0x763cee*/
        p_vtable1->? = 0; /*0x763cf5*/
      }
      v6 = 0; /*0x763cfc*/
      if ( (int)this <= 0 ) /*0x763d00*/
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
          vtable2 = p_vtable1->?; /*0x763d20*/
          if ( p_vtable1->? < (int)vtable2 /*0x763d42*/
            || (BYTE1(p_vtable1->?) || !vtable2)
            && (abstractFlags = p_vtable1->?, abstractFlags > 0)
            && (*((unsigned __int8 (__thiscall **)(WaypointPathClass *, int, _DWORD))p_vtable1->AbstractClass + 2))(
                 p_vtable1,
                 (int)vtable2 + abstractFlags,
                 0) )
          {
            uniqueId = p_vtable1->?; /*0x763d49*/
            v11 = uniqueId + 1; /*0x763d4c*/
            v12 = 3 * uniqueId; /*0x763d4f*/
            vtable1 = (char *)p_vtable1->?; /*0x763d52*/
            p_vtable1->? = v11; /*0x763d55*/
            v14 = &vtable1[4 * v12]; /*0x763d58*/
            *(_DWORD *)v14 = v15; /*0x763d5f*/
            *((_DWORD *)v14 + 1) = v16; /*0x763d65*/
            *((_DWORD *)v14 + 2) = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)this ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return result; /*0x763d7a*/
}



// ==== 0x00763D90  WaypointPathClass::SaveState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::SaveState(WaypointPathClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a2; /*0x763daf*/
    a3 = this->waypoints[4]; /*0x763dbb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x763dbf*/
    if ( result >= 0 ) /*0x763dc4*/
    {
      v5 = 0; /*0x763dca*/
      if ( a3 <= 0 ) /*0x763dce*/
      {
        return 0; /*0x763df4*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x763dd0*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->waypoints[1] + i, 12, 0); /*0x763de1*/
          if ( result < 0 ) /*0x763de6*/
            break; /*0x763de6*/
          if ( ++v5 >= a3 ) /*0x763df2*/
            return 0; /*0x763df2*/
        }
      }
    }
  }
  return result; /*0x763df6*/
}



// ==== 0x00763E00  WaypointPathClass::StubReturn64  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::StubReturn64(WaypointPathClass *this)
{
  return 64; /*0x763e05*/
}



// ==== 0x00763E10  WaypointPathClass::StubReturn51  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::StubReturn51(WaypointPathClass *this)
{
  return 51; /*0x763e15*/
}



// ==== 0x00763E20  WaypointPathClass::ProcessEvent  this=WaypointPathClass  sig=csp ====
void **__thiscall WaypointPathClass::ProcessEvent(WaypointPathClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  WaypointPathClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &WaypointPathClass::`vftable'; /*0x763e26*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e2c*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e33*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x763e41*/
  v6 = this; /*0x763e56*/
  v3 = (*(int (__thiscall **)(int *, WaypointPathClass **))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((_DWORD *)dword_B7260C + v3 - 1) = *((_DWORD *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = this->waypoints[1]; /*0x763e8f*/
  this->waypoints[0] = (int)&VectorClass<WaypointClass>::`vftable'; /*0x763e92*/
  if ( v4 && BYTE1(this->waypoints[3]) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    this->waypoints[1] = 0; /*0x763eb8*/
  }
  BYTE1(this->waypoints[3]) = 0; /*0x763ec1*/
  this->waypoints[2] = 0; /*0x763ec5*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(this); /*0x763ed9*/
  return &this->AbstractClass; /*0x763ee3*/
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
_DWORD *__thiscall AbstractClass::fireSuperWeapon(_VectorClass_VWaypointClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x763f6b*/
  *a2 = *v3; /*0x763f76*/
  a2[1] = v3[1]; /*0x763f7b*/
  a2[2] = v3[2]; /*0x763f82*/
  return a2; /*0x763f7e*/
}



// ==== 0x00763F90  _DynamicVectorClass_PAVWaypointPathClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::Destroy(_DynamicVectorClass_PAVWaypointPathClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x763f96*/
  this->m_10 = 0; /*0x763f99*/
  if ( v2 && BYTE1(this->m_C) ) /*0x763fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x763fa6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x763fae*/
  }
  BYTE1(this->m_C) = 0; /*0x763fb1*/
  this->m_8 = 0; /*0x763fb4*/
}



// ==== 0x00763FC0  _DynamicVectorClass_PAVWaypointPathClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::GetItemIndex(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x763fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x763fd5*/
  else
    return 0; /*0x763fc7*/
}



// ==== 0x00763FE0  _VectorClass_PAVWaypointPathClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::Get(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x763fea*/
}



// ==== 0x00763FF0  ?$DynamicVectorClass@VWaypointClass@@::checkSWTarget  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_763FF0(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x763ff3*/
  *Block = &VectorClass<WaypointClass>::`vftable'; /*0x763ff6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764000*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764013*/
    *(Block + 1) = 0; /*0x76401b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764026*/
  *(Block + 2) = 0; /*0x76402c*/
  if ( (a2 & 1) != 0 ) /*0x764033*/
    __3_YAXPAX_Z(Block); /*0x764036*/
  return Block; /*0x764040*/
}



// ==== 0x00764050  ?$VectorClass@VWaypointClass@@::getSWChargeState  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_764050(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x764053*/
  *Block = &VectorClass<WaypointClass>::`vftable'; /*0x764056*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764060*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764073*/
    *(Block + 1) = 0; /*0x76407b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764086*/
  *(Block + 2) = 0; /*0x76408c*/
  if ( (a2 & 1) != 0 ) /*0x764093*/
    __3_YAXPAX_Z(Block); /*0x764096*/
  return Block; /*0x7640a0*/
}



// ==== 0x007640B0  _VectorClass_VWaypointClass::setSWCharge  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::setSWCharge(_VectorClass_VWaypointClass *this, int a2)
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
    v5 = *(_DWORD **)&this->m_1[3]; /*0x7640cb*/
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
      v11 = this->q008; /*0x764387*/
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
    this->q008 = v3; /*0x7643e2*/
    this->IsAllocated = v5 == 0; /*0x7643e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x7643ee*/
  }
  v16 = this->q008; /*0x7643f1*/
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
char __thiscall VectorClass_ptr_WaypointPathClass::Add(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x764462*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76446d*/
  {
    v3 = 0; /*0x76446f*/
    if ( m_8 <= 0 ) /*0x764473*/
      return 1; /*0x764493*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x764475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76447b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x764484*/
    {
      ++v3; /*0x764486*/
      ++v4; /*0x764487*/
      if ( v3 >= m_8 ) /*0x76448c*/
        return 1; /*0x76448c*/
    }
  }
  return 0; /*0x76448e*/
}



// ==== 0x007644A0  _VectorClass_PAVWaypointPathClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::Release(_VectorClass_PAVWaypointPathClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7644ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x7644b6*/
    if ( a3 ) /*0x7644bc*/
      v4 = a3; /*0x7644d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7644ce*/
    LOBYTE(this->m_C) = 1; /*0x7644d6*/
    if ( v4 ) /*0x7644da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7644e5*/
      {
        m_8 = this->m_8; /*0x7644ec*/
        if ( a2 < m_8 ) /*0x7644f1*/
          m_8 = a2; /*0x7644f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7644f9*/
          ++i; /*0x7644fe*/
        if ( BYTE1(this->m_C) ) /*0x76450b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764516*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76451e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x764527*/
      this->m_8 = a2; /*0x76452f*/
      BYTE1(this->m_C) = a3 == 0; /*0x764532*/
      return 1; /*0x764538*/
    }
    else
    {
      return 0; /*0x7644df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVWaypointPathClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x764542*/
    return 1; /*0x764548*/
  }
}



// ==== 0x00764550  _VectorClass_PAVWaypointPathClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::Remove(_VectorClass_PAVWaypointPathClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76455d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764563*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76456b*/
  }
  BYTE1(this->m_C) = 0; /*0x76456e*/
  this->m_8 = 0; /*0x764571*/
}



// ==== 0x00764580  _VectorClass_PAVWaypointPathClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::GetSize(_VectorClass_PAVWaypointPathClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x764580*/
    return 0; /*0x764588*/
  m_8 = this->m_8; /*0x76458e*/
  result = 0; /*0x764591*/
  if ( m_8 <= 0 ) /*0x764595*/
    return -1; /*0x7645ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76459b*/
  {
    if ( ++result >= m_8 ) /*0x7645aa*/
      return -1; /*0x7645aa*/
  }
  return result; /*0x76458a*/
}



// ==== 0x007645C0  _VectorClass_PAVWaypointPathClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::GetCapacity(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7645c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7645d5*/
  else
    return 0; /*0x7645c7*/
}



// ==== 0x007645E0  _DynamicVectorClass_PAVWaypointPathClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::SetCapacity(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7645ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x7645f2*/
    if ( a3 ) /*0x7645f8*/
      v4 = a3; /*0x76460e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76460a*/
    LOBYTE(this->m_C) = 1; /*0x764612*/
    if ( !v4 ) /*0x764616*/
      return 0; /*0x76468a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x764618*/
    {
      m_8 = this->m_8; /*0x76461f*/
      if ( a2 < m_8 ) /*0x764624*/
        m_8 = a2; /*0x764626*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76462c*/
        ++i; /*0x764631*/
      if ( BYTE1(this->m_C) ) /*0x76463e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764649*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x764651*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x76465a*/
    this->m_8 = a2; /*0x764662*/
    BYTE1(this->m_C) = a3 == 0; /*0x764665*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVWaypointPathClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76466e*/
  }
  v7 = this->m_8; /*0x764671*/
  if ( v7 < this->m_10 ) /*0x764679*/
    this->m_10 = v7; /*0x76467b*/
  return 1; /*0x76467e*/
}



// ==== 0x00764690  _DynamicVectorClass_PAVWaypointPathClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::FindItemIndex(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x764690*/
  result = 0; /*0x764693*/
  if ( m_10 <= 0 ) /*0x764698*/
    return -1; /*0x7646af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76469e*/
  {
    if ( ++result >= m_10 ) /*0x7646ad*/
      return -1; /*0x7646ad*/
  }
  return result; /*0x7646b2*/
}



// ==== 0x007646C0  _VectorClass_PAVWaypointPathClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WaypointPathClass::QueryInterface(_VectorClass_PAVWaypointPathClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7646c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WaypointPathClass *>::`vftable'; /*0x7646c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7646d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7646d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7646e0*/
  }
  BYTE1(this->m_C) = 0; /*0x7646eb*/
  this->m_8 = 0; /*0x7646f1*/
  if ( (a2 & 1) != 0 ) /*0x7646f8*/
    __3_YAXPAX_Z(this); /*0x7646fb*/
  return this->__pad_0; /*0x764705*/
}



// ==== 0x00764710  _DynamicVectorClass_PAVWaypointPathClass::Constructor_VectorClass_WaypointPathClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x764713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WaypointPathClass *>::`vftable'; /*0x764716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x764720*/
  {
    __3_YAXPAX_Z(v3); /*0x764728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x764730*/
  }
  BYTE1(this->m_C) = 0; /*0x76473b*/
  this->m_8 = 0; /*0x764741*/
  if ( (a2 & 1) != 0 ) /*0x764748*/
    __3_YAXPAX_Z(this); /*0x76474b*/
  return this->__pad_0; /*0x764755*/
}



// ==== 0x00764760  WaypointPathClass::computePath  this=VectorClass  sig=csp ====
_DWORD *__thiscall WaypointPathClass::computePath(WaypointPathClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->? = 0; /*0x76476d*/
  this->? = (void *)a2; /*0x764770*/
  LOBYTE(this->?) = 1; /*0x764773*/
  BYTE1(this->?) = 0; /*0x764777*/
  this->AbstractClass = &VectorClass<WaypointClass>::`vftable'; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return &this->AbstractClass; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
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
        this->? = v8; /*0x7647e6*/
        BYTE1(this->?) = 1; /*0x7647e9*/
        return &this->AbstractClass; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    this->? = v8; /*0x7647f7*/
    BYTE1(this->?) = 1; /*0x7647fa*/
    return &this->AbstractClass; /*0x7647fe*/
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
  this->? = a3 + 1; /*0x7647a7*/
  return &this->AbstractClass; /*0x7647ac*/
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
int __thiscall sub_764A20(ObjectClass *this)
{
  int Int; // esi
  String v4; // [esp+8h] [ebp-9Ch] BYREF
  int v5; // [esp+10h] [ebp-94h]
  int v6; // [esp+14h] [ebp-90h]
  void **v7; // [esp+18h] [ebp-8Ch]
  LinkedList v8; // [esp+1Ch] [ebp-88h] BYREF
  GenericNode v9; // [esp+28h] [ebp-7Ch] BYREF
  int v10; // [esp+34h] [ebp-70h]
  int v11; // [esp+38h] [ebp-6Ch]
  int v12; // [esp+3Ch] [ebp-68h]
  char v13; // [esp+40h] [ebp-64h]
  int v14; // [esp+44h] [ebp-60h]
  int v15; // [esp+48h] [ebp-5Ch]
  BufferIOFile v16; // [esp+4Ch] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v16, aWdthistIni_0); /*0x764a33*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v16, 0) ) /*0x764a3f*/
  {
    v5 = 0; /*0x764a50*/
    v6 = 0; /*0x764a54*/
    GenericNode::Constructor((GenericNode *)&v8); /*0x764a58*/
    GenericNode::Constructor(&v9); /*0x764a61*/
    LinkedList::Prepend(&v8, (int)&v9); /*0x764a77*/
    v7 = &List<INIClass::INISection *>::`vftable'; /*0x764a80*/
    v10 = 0; /*0x764a8e*/
    v11 = 0; /*0x764a92*/
    v12 = 0; /*0x764a96*/
    v13 = 0; /*0x764a9a*/
    v14 = 0; /*0x764a9e*/
    v15 = 0; /*0x764aa2*/
    *(_DWORD *)&v4.m_3[1] = &INIClass::`vftable'; /*0x764aa6*/
    FileStraw::Open((FileStraw *)&v4.m_3[1], (int)&v16, 0); /*0x764aae*/
    CCFileClass::Close((BufferIOFileClass *)&v16); /*0x764ab7*/
    String::Assign(&v4, g_INI_Key_CampaignID); /*0x764ac5*/
    Int = INIClass::ReadInt((bool *)&v4.m_3[1], (char **)this, (char **)&v4, -1); /*0x764adf*/
    DeleteAndZero((ObjectClass *)&v4); /*0x764ae1*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v4.m_3[1]); /*0x764aea*/
    *(_DWORD *)v16.__pad_0 = &off_7E1668; /*0x764af3*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764afb*/
    return Int; /*0x764b00*/
  }
  else
  {
    *(_DWORD *)v16.__pad_0 = &off_7E1668; /*0x764b0f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764b17*/
    return -1; /*0x764b1c*/
  }
}



// ==== 0x00764B30  rc_ptr::Audio_Create  this=rc_ptr  sig=csp ====
_DWORD *__fastcall Audio_Create(rc_ptr *this, const char **a2, int a3)
{
  char *v6; // eax
  char *v7; // edi

  if ( *(_DWORD *)(a3 + 4) ) /*0x764b37*/
  {
    v6 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x764b57*/
    if ( v6 ) /*0x764b61*/
      v7 = CampaignConstructorWDT(v6, a2, a3); /*0x764b6c*/
    else
      v7 = 0; /*0x764b70*/
    ComPtr::Constructor((ComPtr *)this); /*0x764b74*/
    *(_DWORD *)this = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x764b7b*/
    ComPtr::Set((ComPtr *)this, (int)v7); /*0x764b82*/
    return this; /*0x764b87*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)this); /*0x764b42*/
    *(_DWORD *)this = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x764b47*/
    return this; /*0x764b4d*/
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
  *((_DWORD *)this + 1) = 0; /*0x764baa*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x764bad*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x764bb3*/
  *v4 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x764bbf*/
  ComPtr::Set(v4, *(_DWORD *)(a3 + 4)); /*0x764bcb*/
  Team_Create_767B00(this + 16, *(_DWORD *)(a3 + 4) + 8); /*0x764bdb*/
  Team_Create_765C90(4, 0); /*0x764be9*/
  *((_DWORD *)this + 6) = &DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x764bf7*/
  *((_DWORD *)this + 11) = 10; /*0x764bfd*/
  *((_DWORD *)this + 10) = 0; /*0x764c04*/
  *((_DWORD *)this + 17) = 0; /*0x764c0b*/
  String::AssignFromPtr((char **)this + 18, a2); /*0x764c0e*/
  *(_DWORD *)this = &WorldDominationTour::Campaign::`vftable'; /*0x764c18*/
  *((_DWORD *)this + 13) = 0; /*0x764c1e*/
  *((_DWORD *)this + 14) = 0; /*0x764c20*/
  *((_DWORD *)this + 15) = 0; /*0x764c23*/
  *((_DWORD *)this + 16) = 0; /*0x764c26*/
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
            v26[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764ca3*/
            LOBYTE(v10) = v35 | 1; /*0x764cab*/
            v9 = v26; /*0x764cad*/
            v35 = v10; /*0x764cb1*/
          }
          else
          {
            v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 48) + 8 * v8); /*0x764c8e*/
          }
          ComPtr::Constructor(v25); /*0x764cbc*/
          v25[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764cc1*/
          ComPtr::Set(v25, v9[1]); /*0x764cd1*/
          if ( (v35 & 1) != 0 ) /*0x764cde*/
          {
            v11 = v35; /*0x764ce0*/
            LOBYTE(v11) = v35 & 0xFE; /*0x764ceb*/
            v26[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764ced*/
            v35 = v11; /*0x764cf5*/
            ComPtr::Release(v26); /*0x764cfc*/
          }
          if ( v25[1] ) /*0x764d07*/
          {
            Team_Create_765F60(v27, v25); /*0x764d11*/
            v12 = *((_DWORD *)this + 8); /*0x764d16*/
            if ( *((_DWORD *)this + 10) < v12 /*0x764d3b*/
              || (*(this + 37) || !v12)
              && (v13 = *((_DWORD *)this + 11), v13 > 0)
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 6) + 8))(
                   this + 24,
                   v12 + v13,
                   0) )
            {
              v14 = *((_DWORD *)this + 10); /*0x764d42*/
              v22 = v27[1]; /*0x764d49*/
              *((_DWORD *)this + 10) = v14 + 1; /*0x764d4d*/
              ComPtr::Set((_DWORD *)(*((_DWORD *)this + 7) + 8 * v14), v22); /*0x764d56*/
            }
            v27[0] = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x764d5f*/
            ComPtr::Release(v27); /*0x764d67*/
          }
          v25[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764d70*/
          ComPtr::Release(v25); /*0x764d78*/
          v8 = v24; /*0x764d7d*/
        }
        v15 = v8--; /*0x764d81*/
        v24 = v8; /*0x764d86*/
      }
      while ( v15 ); /*0x764d8a*/
    }
    v28[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x764d94*/
    ComPtr::Release(v28); /*0x764d9c*/
  }
  BufferIOFile::Constructor(v34, aWdthistIni_0); /*0x764daa*/
  v16 = 0; /*0x764daf*/
  if ( File::IsReady(v34, 0) )
  {
    v29[1] = 0; /*0x764dc7*/
    v29[2] = 0; /*0x764dcb*/
    GenericList::Constructor(v30); /*0x764dcf*/
    v30[0] = &List<INIClass::INISection *>::`vftable'; /*0x764dde*/
    memset(&v30[7], 0, 12); /*0x764de6*/
    LOBYTE(v31) = 0; /*0x764df2*/
    v32 = 0; /*0x764df7*/
    v33 = 0; /*0x764dfb*/
    v29[0] = &INIClass::`vftable'; /*0x764dff*/
    FileStraw::Open(v29, (int)v34, 0); /*0x764e07*/
    CCFileClass::Close(v34); /*0x764e10*/
    String::Assign((char **)&v24, g_INI_Key_CampaignID); /*0x764e1e*/
    Int = INIClass::ReadInt((char **)this + 18, (char **)&v24, -1); /*0x764e3b*/
    DeleteAndZero((void **)&v24); /*0x764e3d*/
    *((_DWORD *)this + 12) = Int < 0 ? 0 : Int;
    if ( *((_DWORD *)this + 12) == WDTObject::GetSize(*(_DWORD **)(a3 + 4)) )
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
      *((_DWORD *)this + 17) = INIClass::ReadInt((char **)this + 18, (char **)&v24, *((_DWORD *)this + 17)); /*0x764ee9*/
      DeleteAndZero((void **)&v24); /*0x764eec*/
    }
    else
    {
      *((_DWORD *)this + 13) = 0; /*0x764ef5*/
      *((_DWORD *)this + 14) = 0; /*0x764ef8*/
      *((_DWORD *)this + 15) = 0; /*0x764efb*/
      *((_DWORD *)this + 16) = 0; /*0x764efe*/
    }
    HashTable::DestroyHashTableINIClass(v29); /*0x764f05*/
  }
  v34[0] = &off_7E1668; /*0x764f0e*/
  BufferIOFileClass::Dtor(v34); /*0x764f16*/
  return this; /*0x764f1d*/
}



// ==== 0x00764FA0  ObjectClass::Team_Start_764FA0  this=ObjectClass  sig=csp ====
bool __thiscall Team_Start_764FA0(ObjectClass *this)
{
  return this->nextObject != (ObjectClass *)WDTObject::GetSize((WDTObject *)this->?); /*0x764fb2*/
}



// ==== 0x00764FC0  ObjectClass::ConstructWDTSelection_Create  this=ObjectClass  sig=csp ====
bool __thiscall sub_764FC0(int this, int a2)
{
  return *(_DWORD *)(this + 48) != WDTObject::GetSize(*(_DWORD **)(this + 12)) /*0x764fd2*/
      || *(_DWORD *)(this + 4 * a2 + 52) != Conflict::GetOwnerHouse(*(_DWORD **)(this + 12));
}



// ==== 0x00764FF0  ObjectClass::method_764FF0  this=ObjectClass  sig=csp ====
int __thiscall sub_764FF0(ObjectClass *this, int a2)
{
  return *((_DWORD *)&this->attachedTag + a2); /*0x764ff8*/
}



// ==== 0x00765000  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_765000(int this, void *a2)
{
  char **v3; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-10Ch]
  void *v6; // [esp+10h] [ebp-F8h] BYREF
  void *v7; // [esp+14h] [ebp-F4h] BYREF
  void *v8[4]; // [esp+18h] [ebp-F0h] BYREF
  _DWORD v9[3]; // [esp+28h] [ebp-E0h] BYREF
  _DWORD v10[6]; // [esp+34h] [ebp-D4h] BYREF
  char v11; // [esp+4Ch] [ebp-BCh]
  int v12; // [esp+50h] [ebp-B8h]
  int v13; // [esp+54h] [ebp-B4h]
  _DWORD v14[22]; // [esp+58h] [ebp-B0h] BYREF
  _DWORD v15[22]; // [esp+B0h] [ebp-58h] BYREF

  *(_DWORD *)(this + 48) = WDTObject::GetSize(*(_DWORD **)(this + 12)); /*0x76501b*/
  *(_DWORD *)(this + 4 * (_DWORD)a2 + 52) = Conflict::GetOwnerHouse(*(_DWORD **)(this + 12)); /*0x76502c*/
  v8[1] = 0; /*0x765030*/
  v8[2] = 0; /*0x765034*/
  GenericNode::Constructor(v9); /*0x765038*/
  GenericNode::Constructor(v10); /*0x765041*/
  LinkedList::Prepend(v9, (int)v10); /*0x765057*/
  v8[3] = &List<INIClass::INISection *>::`vftable'; /*0x765060*/
  memset(&v10[3], 0, 12); /*0x765068*/
  v11 = 0; /*0x765074*/
  v12 = 0; /*0x765078*/
  v13 = 0; /*0x76507c*/
  v8[0] = &INIClass::`vftable'; /*0x765080*/
  BufferIOFile::Init(v14); /*0x765088*/
  CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x765098*/
  if ( !File::IsReady(v14, 0) ) /*0x7650a2*/
  {
    FileClass::Close(v14); /*0x7650af*/
    CCFileClass::Close(v14); /*0x7650b8*/
    CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x7650c8*/
  }
  FileStraw::Open(v8, (int)v14, 0); /*0x7650d7*/
  CCFileClass::Close(v14); /*0x7650e0*/
  v14[0] = &off_7E1668; /*0x7650e9*/
  BufferIOFileClass::Dtor(v14); /*0x7650f1*/
  RegionStringWOL = GetRegionStringWOL(a2); /*0x765101*/
  v3 = String::Assign((char **)&v6, g_INI_Key_LastDay); /*0x76510c*/
  String::Concat((const char **)v3, (char **)&v7, RegionStringWOL); /*0x765113*/
  DeleteAndZero(&v6); /*0x76511c*/
  String::Assign((char **)&v6, g_INI_Key_CampaignID); /*0x76512a*/
  INIClass::SetIntFormat((char *)v8, (char **)(this + 72), (char **)&v6, *(_DWORD *)(this + 48), 0); /*0x765141*/
  DeleteAndZero(&v6); /*0x76514a*/
  INIClass::SetIntFormat((char *)v8, (char **)(this + 72), (char **)&v7, *(_DWORD *)(this + 4 * (_DWORD)a2 + 52), 0); /*0x76515f*/
  BufferIOFile::Init(v15); /*0x76516b*/
  CCFileClass::Reopen(v15, g_Str_File_WDTHist_ini, 2); /*0x76517e*/
  INIClass::SaveToPipe(v8, (int)v15); /*0x76518f*/
  v15[0] = &off_7E1668; /*0x76519b*/
  BufferIOFileClass::Dtor(v15); /*0x7651a6*/
  DeleteAndZero(&v7); /*0x7651af*/
  return HashTable::DestroyHashTableINIClass(v8); /*0x7651bd*/
}



// ==== 0x007651D0  ObjectClass::method_7651D0  this=ObjectClass  sig=csp ====
char *__thiscall sub_7651D0(ObjectClass *this)
{
  char **v2; // edi
  int i; // esi
  char **v4; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-108h]
  ObjectClass v7; // [esp+Ch] [ebp-F8h] BYREF

  v7.? = 0; /*0x7651e1*/
  v7.? = 0; /*0x7651e5*/
  GenericNode::Constructor((GenericNode *)&v7.?); /*0x7651e9*/
  GenericNode::Constructor((GenericNode *)&v7.occupant); /*0x7651f2*/
  LinkedList::Prepend((LinkedList *)&v7.?, (int)&v7.occupant); /*0x765208*/
  v7.? = (int)&List<INIClass::INISection *>::`vftable'; /*0x765211*/
  memset(&v7.nextObject, 0, 13); /*0x765219*/
  v7.ambientSoundController[1] = 0; /*0x765229*/
  v7.ambientSoundController[2] = 0; /*0x76522d*/
  v7.? = &INIClass::`vftable'; /*0x765231*/
  BufferIOFile::Init((BufferIOFile *)&v7.ambientSoundController[3]); /*0x765239*/
  CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765249*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v7.ambientSoundController[3], 0) ) /*0x765253*/
  {
    FileClass::Close((RawFileClass *)&v7.ambientSoundController[3]); /*0x765260*/
    CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765269*/
    CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765279*/
  }
  FileStraw::Open((FileStraw *)&v7.?, (int)&v7.ambientSoundController[3], 0); /*0x765288*/
  CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765291*/
  v7.ambientSoundController[3] = (int)&off_7E1668; /*0x76529a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x7652a2*/
  String::Assign((String *)&v7, g_INI_Key_CampaignID); /*0x7652b0*/
  v2 = (char **)&this->ambientSoundController[3]; /*0x7652ba*/
  INIClass::SetIntFormat((char *)&v7.?, (char **)&this->ambientSoundController[3], (char **)&v7, 0, 0); /*0x7652c4*/
  DeleteAndZero(&v7); /*0x7652cd*/
  for ( i = 0; i < 4; ++i ) /*0x7652d2*/
  {
    RegionStringWOL = GetRegionStringWOL((ObjectClass *)i); /*0x7652db*/
    v4 = String::Assign((String *)&v7.?, g_INI_Key_LastDay); /*0x7652ea*/
    String::Concat((String *)v4, (char **)&v7, RegionStringWOL); /*0x7652f1*/
    DeleteAndZero((ObjectClass *)&v7.?); /*0x7652fa*/
    INIClass::SetIntFormat((char *)&v7.?, v2, (char **)&v7, 0, 0); /*0x76530b*/
    DeleteAndZero(&v7); /*0x765314*/
  }
  BufferIOFile::Init((BufferIOFile *)&v7.location[1]); /*0x765326*/
  CCFileClass::Reopen((CDFileClass *)&v7.location[1], g_Str_File_WDTHist_ini, (CHAR *)2); /*0x765339*/
  INIClass::SaveToPipe((INIClass *)&v7.?, (int)&v7.location[1]); /*0x76534a*/
  v7.location[1] = (int)&off_7E1668; /*0x765356*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.location[1]); /*0x765361*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v7.?); /*0x76536f*/
}



// ==== 0x00765380  ObjectClass::FindWDTTerritoryClass_Find  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_765380(char *this, _DWORD *a2, int a3)
{
  int v4; // edx
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  char *v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v6 = this + 24; /*0x765387*/
  v7 = 0; /*0x76538f*/
  v5 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x765397*/
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
  *a2 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x7653f5*/
  return a2; /*0x7653ee*/
}



// ==== 0x00765410  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char *__thiscall sub_765410(int this, char *a2)
{
  char *result; // eax
  void *v4; // [esp+4h] [ebp-F4h] BYREF
  void *v5[4]; // [esp+8h] [ebp-F0h] BYREF
  _DWORD v6[3]; // [esp+18h] [ebp-E0h] BYREF
  _DWORD v7[6]; // [esp+24h] [ebp-D4h] BYREF
  char v8; // [esp+3Ch] [ebp-BCh]
  int v9; // [esp+40h] [ebp-B8h]
  int v10; // [esp+44h] [ebp-B4h]
  _DWORD v11[22]; // [esp+48h] [ebp-B0h] BYREF
  _DWORD v12[22]; // [esp+A0h] [ebp-58h] BYREF

  result = a2; /*0x765410*/
  if ( *(char **)(this + 68) != a2 ) /*0x765420*/
  {
    *(_DWORD *)(this + 68) = a2; /*0x76542d*/
    v5[1] = 0; /*0x765430*/
    v5[2] = 0; /*0x765434*/
    GenericNode::Constructor(v6); /*0x765438*/
    GenericNode::Constructor(v7); /*0x765441*/
    LinkedList::Prepend(v6, (int)v7); /*0x765457*/
    v5[3] = &List<INIClass::INISection *>::`vftable'; /*0x765460*/
    memset(&v7[3], 0, 12); /*0x765468*/
    v8 = 0; /*0x765474*/
    v9 = 0; /*0x765478*/
    v10 = 0; /*0x76547c*/
    v5[0] = &INIClass::`vftable'; /*0x765480*/
    BufferIOFile::Init(v11); /*0x765488*/
    CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x765498*/
    if ( !File::IsReady(v11, 0) ) /*0x7654a2*/
    {
      FileClass::Close(v11); /*0x7654af*/
      CCFileClass::Close(v11); /*0x7654b8*/
      CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x7654c8*/
    }
    FileStraw::Open(v5, (int)v11, 0); /*0x7654d7*/
    CCFileClass::Close(v11); /*0x7654e0*/
    v11[0] = &off_7E1668; /*0x7654e9*/
    BufferIOFileClass::Dtor(v11); /*0x7654f1*/
    String::Assign((char **)&v4, aPlayerfaction); /*0x7654ff*/
    INIClass::SetIntFormat((char *)v5, (char **)(this + 72), (char **)&v4, *(_DWORD *)(this + 68), 0); /*0x765516*/
    DeleteAndZero(&v4); /*0x76551f*/
    BufferIOFile::Init(v12); /*0x76552b*/
    CCFileClass::Reopen(v12, g_Str_File_WDTHist_ini, 2); /*0x76553e*/
    INIClass::SaveToPipe(v5, (int)v12); /*0x76554f*/
    v12[0] = &off_7E1668; /*0x76555b*/
    BufferIOFileClass::Dtor(v12); /*0x765566*/
    return HashTable::DestroyHashTableINIClass(v5); /*0x76556f*/
  }
  return result; /*0x765575*/
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
void **__thiscall Campaign_WorldDominationTour::QueryInterface(Campaign_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *this = (Campaign_WorldDominationTour)&WorldDominationTour::Campaign::`vftable'; /*0x765606*/
  DeleteAndZero((ObjectClass *)(this + 18)); /*0x76560c*/
  v3 = (void (__thiscall ***)(_DWORD, int))this->q01C; /*0x765611*/
  this->q018 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765614*/
  if ( v3 && this->q025 ) /*0x76561f*/
  {
    (**v3)(v3, 3); /*0x76562e*/
    this->q01C = 0; /*0x765630*/
  }
  this->q025 = 0; /*0x76563a*/
  this->q008 = 0; /*0x76563e*/
  this->q004 = &rc_ptr<WorldDominationTour::History>::`vftable'; /*0x765645*/
  ComPtr::Release((ComPtr *)(this + 4)); /*0x76564b*/
  this->q008 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x765653*/
  ComPtr::Release((ComPtr *)(this + 2)); /*0x765659*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x765660*/
  if ( (a2 & 1) != 0 ) /*0x76566a*/
    __3_YAXPAX_Z(this); /*0x76566d*/
  return (void **)this; /*0x765677*/
}



// ==== 0x00765680  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::queryProperty  this=DynamicVector  sig=csp ====
int __thiscall COMClass::queryProperty(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765686*/
  this->m_10 = 0; /*0x765689*/
  if ( v2 && BYTE1(this->m_C) ) /*0x765690*/
  {
    result = (**v2)(v2, 3); /*0x76569d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76569f*/
  }
  BYTE1(this->m_C) = 0; /*0x7656a2*/
  this->m_8 = 0; /*0x7656a5*/
  return result; /*0x7656a8*/
}



// ==== 0x007656B0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::setProperty  this=DynamicVector  sig=csp ====
unsigned int __thiscall COMClass::setProperty(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7656b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x7656c5*/
  else
    return 0; /*0x7656b7*/
}



// ==== 0x007656D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Seek(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x7656dd*/
  ComPtr::Constructor((ComPtr *)a2); /*0x7656e2*/
  *a2 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7656e7*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x7656f3*/
  return a2; /*0x7656fa*/
}



// ==== 0x00765700  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Campaign_WorldDominationTour_24::AddRef(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76570d*/
}



// ==== 0x00765710  Campaign_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor(Campaign_WorldDominationTour *this, char a2)
{
  *this = (Campaign_WorldDominationTour)&rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x765713*/
  ComPtr::Release((ComPtr *)this); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    __3_YAXPAX_Z(this); /*0x765726*/
  return this; /*0x765730*/
}



// ==== 0x00765740  Campaign_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor_0(Campaign_WorldDominationTour *this, char a2)
{
  *this = (Campaign_WorldDominationTour)&rc_ptr<WorldDominationTour::History>::`vftable'; /*0x765743*/
  ComPtr::Release((ComPtr *)this); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    __3_YAXPAX_Z(this); /*0x765756*/
  return this; /*0x765760*/
}



// ==== 0x00765770  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Constructor_1  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor_1(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    __3_YAXPAX_Z(this); /*0x765782*/
  return this->__pad_0; /*0x76578c*/
}



// ==== 0x00765790  COMClass::invokeMethod  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::invokeMethod(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x765793*/
  ComPtr::Release((ComPtr *)this); /*0x765799*/
  if ( (a2 & 1) != 0 ) /*0x7657a3*/
    __3_YAXPAX_Z(this); /*0x7657a6*/
  return this->__pad_0; /*0x7657b0*/
}



// ==== 0x007657C0  COMClass::getTypeInfo  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::getTypeInfo(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x7657c3*/
  ComPtr::Release((ComPtr *)this); /*0x7657c9*/
  if ( (a2 & 1) != 0 ) /*0x7657d3*/
    __3_YAXPAX_Z(this); /*0x7657d6*/
  return this->__pad_0; /*0x7657e0*/
}



// ==== 0x007657F0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16::AddRef(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x7657f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( m_8 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x76580d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
    {
      ++v3; /*0x76581b*/
      v4 += 2; /*0x76581f*/
      if ( v3 >= m_8 ) /*0x765824*/
        return 1; /*0x765824*/
    }
  }
  return 0; /*0x765826*/
}



// ==== 0x00765840  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16::Release(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  LOBYTE(this->m_C) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = (ComPtr *)(a3 + 1); /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7658bd*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = (ComPtr *)(a3 + 1); /*0x7658c9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765867*/
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*0x76589f*/
      goto LABEL_14; /*0x7658a1*/
    }
    *v5 = a2; /*0x765873*/
    v6 = (ComPtr *)(v5 + 1); /*0x765875*/
    v13 = (ComPtr *)(v5 + 1); /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76588d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x7658e1*/
  {
    if ( a2 >= this->m_8 ) /*0x7658ed*/
      m_8 = this->m_8; /*0x7658ef*/
    for ( i = 0; i < m_8; ++i ) /*0x7658f5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x765902*/
    if ( BYTE1(this->m_C) ) /*0x76590c*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x765920*/
    }
    m_8 = a2; /*0x765927*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x765936*/
  this->m_8 = m_8; /*0x765939*/
  BYTE1(this->m_C) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
}



// ==== 0x00765960  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16::ddtor(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765966*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76597c*/
  }
  BYTE1(this->m_C) = 0; /*0x76597f*/
  this->m_8 = 0; /*0x765982*/
  return result; /*0x765985*/
}



// ==== 0x00765990  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16::Read(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x765990*/
    return 0; /*0x765998*/
  m_8 = this->m_8; /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( m_8 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x7659ae*/
  {
    if ( ++result >= m_8 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}



// ==== 0x007659D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Campaign_WorldDominationTour_16::Write(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7659d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}



// ==== 0x007659F0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::registerObject  this=DynamicVector  sig=csp ====
char __thiscall COMClass::registerObject(
        _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  COMClass *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x7659f3*/
  if ( a2 ) /*0x7659fd*/
  {
    LOBYTE(this->m_C) = 0; /*0x765a07*/
    if ( a3 ) /*0x765a0d*/
    {
      *a3 = a2; /*0x765a51*/
      v8 = (ComPtr *)(a3 + 1); /*0x765a53*/
      if ( a2 - 1 >= 0 ) /*0x765a5f*/
      {
        v9 = a2; /*0x765a61*/
        do /*0x765a75*/
        {
          ComPtr::Constructor(v8); /*0x765a66*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765a6b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x765a71*/
          --v9; /*0x765a74*/
        }
        while ( v9 ); /*0x765a75*/
        v8 = (ComPtr *)(a3 + 1); /*0x765a77*/
      }
      v6 = v8; /*0x765a7b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765a17*/
      if ( v5 ) /*0x765a21*/
      {
        *v5 = a2; /*0x765a23*/
        v6 = (ComPtr *)(v5 + 1); /*0x765a25*/
        v7 = (COMClass *)(v5 + 1); /*0x765a2b*/
        if ( a2 - 1 >= 0 ) /*0x765a2f*/
        {
          v14 = a2; /*0x765a32*/
          do /*0x765a49*/
          {
            COMClass::releaseInterface(v7); /*0x765a38*/
            v7 = (COMClass *)((char *)v7 + 8); /*0x765a41*/
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
    LOBYTE(this->m_C) = 1; /*0x765a7f*/
    if ( !v6 ) /*0x765a83*/
      return 0; /*0x765b06*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x765a85*/
    {
      if ( a2 >= this->m_8 ) /*0x765a91*/
        m_8 = this->m_8; /*0x765a93*/
      for ( i = 0; i < m_8; ++i ) /*0x765a99*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x765aa6*/
      if ( BYTE1(this->m_C) ) /*0x765ab0*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765ab7*/
        if ( v11 ) /*0x765abc*/
          (**v11)(v11, 3); /*0x765ac2*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x765ac4*/
      }
      m_8 = a2; /*0x765acb*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x765ada*/
    this->m_8 = m_8; /*0x765add*/
    BYTE1(this->m_C) = a3 == 0; /*0x765ae0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x765ae9*/
  }
  v12 = this->m_8; /*0x765aec*/
  if ( v12 < this->m_10 ) /*0x765af4*/
    this->m_10 = v12; /*0x765af6*/
  return 1; /*0x765af9*/
}



// ==== 0x00765B10  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::unregisterObject  this=DynamicVector  sig=csp ====
int __thiscall COMClass::unregisterObject(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x765b10*/
  result = 0; /*0x765b13*/
  if ( m_10 <= 0 ) /*0x765b18*/
    return -1; /*0x765b33*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x765b21*/
  {
    if ( ++result >= m_10 ) /*0x765b31*/
      return -1; /*0x765b31*/
  }
  return result; /*0x765b36*/
}



// ==== 0x00765B40  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24::Release(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  ++this->q008; /*0x765b42*/
  return this->__pad_0; /*0x765b45*/
}



// ==== 0x00765B50  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24_::ddtor(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  --this->q008; /*0x765b52*/
  return this->__pad_0; /*0x765b55*/
}



// ==== 0x00765B60  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::QueryInterface(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765b63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765b66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x765b81*/
  }
  BYTE1(this->m_C) = 0; /*0x765b8c*/
  this->m_8 = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    __3_YAXPAX_Z(this); /*0x765b9c*/
  return this->__pad_0; /*0x765ba6*/
}



// ==== 0x00765BB0  COMClass::createInstance  this=COMClass  sig=csp ====
char *__thiscall COMClass::createInstance(COMClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x765bbb*/
  {
    v3 = *((_DWORD *)this - 1); /*0x765bbd*/
    v4 = (char *)this - 4; /*0x765bc1*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x765bc4*/
    v6 = v3 - 1; /*0x765bc7*/
    if ( v6 >= 0 ) /*0x765bc8*/
    {
      v7 = v6 + 1; /*0x765bcb*/
      do /*0x765bdf*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x765bce*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765bd3*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765bfa*/
    ComPtr::Release((ComPtr *)this); /*0x765c00*/
    if ( (a2 & 1) != 0 ) /*0x765c08*/
      __3_YAXPAX_Z(this); /*0x765c0b*/
    return this->__pad_0; /*0x765c13*/
  }
}



// ==== 0x00765C20  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::getInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall COMClass::getInterface(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765c23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765c26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x765c30*/
  {
    (**v3)(v3, 3); /*0x765c3f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x765c41*/
  }
  BYTE1(this->m_C) = 0; /*0x765c4c*/
  this->m_8 = 0; /*0x765c52*/
  if ( (a2 & 1) != 0 ) /*0x765c59*/
    __3_YAXPAX_Z(this); /*0x765c5c*/
  return this->__pad_0; /*0x765c66*/
}



// ==== 0x00765C70  COMClass::releaseInterface  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::releaseInterface(COMClass *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x765c73*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765c78*/
  return this->__pad_0; /*0x765c80*/
}



// ==== 0x00765C90  ObjectClass::Team_Create_765C90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Create_765C90(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = a2; /*0x765c93*/
  this->? = 0; /*0x765c9c*/
  this->? = (void *)a2; /*0x765ca3*/
  LOBYTE(this->?) = 1; /*0x765ca6*/
  BYTE1(this->?) = 0; /*0x765caa*/
  this->AbstractClass = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765cae*/
  if ( !a2 ) /*0x765cb5*/
    return &this->AbstractClass; /*0x765cb5*/
  if ( !a3 ) /*0x765cc1*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765cfb*/
    if ( v7 ) /*0x765d05*/
    {
      *v7 = a2; /*0x765d07*/
      v8 = v7 + 1; /*0x765d09*/
      v9 = (ComPtr *)(v7 + 1); /*0x765d0f*/
      if ( a2 - 1 >= 0 ) /*0x765d13*/
      {
        do /*0x765d29*/
        {
          ComPtr::Constructor(v9); /*0x765d1a*/
          *(_DWORD *)v9->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765d1f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x765d25*/
          --v3; /*0x765d28*/
        }
        while ( v3 ); /*0x765d29*/
        this->? = v8; /*0x765d2c*/
        BYTE1(this->?) = 1; /*0x765d2f*/
        return &this->AbstractClass; /*0x765d38*/
      }
    }
    else
    {
      v8 = 0; /*0x765d3b*/
    }
    this->? = v8; /*0x765d3d*/
    BYTE1(this->?) = 1; /*0x765d40*/
    return &this->AbstractClass; /*0x765d45*/
  }
  *a3 = a2; /*0x765cc3*/
  v5 = (ComPtr *)(a3 + 1); /*0x765ccb*/
  if ( a2 - 1 >= 0 ) /*0x765ccf*/
  {
    do /*0x765ce5*/
    {
      ComPtr::Constructor(v5); /*0x765cd6*/
      *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765cdb*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x765ce1*/
      --v3; /*0x765ce4*/
    }
    while ( v3 ); /*0x765ce5*/
  }
  this->? = a3 + 1; /*0x765ce8*/
  return &this->AbstractClass; /*0x765ce7*/
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
ComPtr *__fastcall Team_Create_765F60(ComPtr *a1, int a2)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x10u); /*0x765f69*/
  v5 = v4; /*0x765f6e*/
  if ( v4 ) /*0x765f75*/
  {
    v6 = (_DWORD *)(v4 + 8); /*0x765f78*/
    *(_DWORD *)(v4 + 4) = 0; /*0x765f7d*/
    *(_DWORD *)v4 = &ReferenceCounted::`vftable'; /*0x765f84*/
    ComPtr::Constructor((ComPtr *)(v4 + 8)); /*0x765f8a*/
    *v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x765f8f*/
    ComPtr::Set((ComPtr *)(v5 + 8), *(_DWORD *)(a2 + 4)); /*0x765f9b*/
    *(_DWORD *)v5 = &WorldDominationTour::Conflict::`vftable'; /*0x765fa0*/
  }
  else
  {
    v5 = 0; /*0x765fa9*/
  }
  ComPtr::Constructor(a1); /*0x765fad*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765fb4*/
  ComPtr::Set(a1, v5); /*0x765fbc*/
  return a1; /*0x765fc3*/
}



// ==== 0x00766060  ObjectClass::FindWDTTerritoryClass_Find_Find  this=ObjectClass  sig=csp ====
int __thiscall FindWDTTerritoryClass_Find_Find(ObjectClass *this)
{
  _DWORD *vtable3; // eax

  vtable3 = this->?; /*0x766060*/
  if ( vtable3 ) /*0x766065*/
    return vtable3[2]; /*0x766067*/
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
  stru_B72760 = (int)&DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x76608d*/
  dword_B72774 = 10; /*0x766097*/
  dword_B72770 = 0; /*0x7660a1*/
  return atexit(sub_7660B0); /*0x7660ac*/
}



// ==== 0x007660B0  sub_7660B0  this=-  sig=ida-proto ====
void __cdecl sub_7660B0()
{
  stru_B72760 = (int)&VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x7660b9*/
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
  Conflict_WorldDominationTour_12_::ddtor(&stru_B72760); /*0x766104*/
  v26 = 0; /*0x766109*/
  v25 = v0; /*0x76610b*/
  String::Assign(&v25, aWdtTechlevel); /*0x766113*/
  v1 = System_Init_766880(sub_7667F0, (char)v25, v26); /*0x76612f*/
  ComPtr::Constructor(&v27); /*0x766131*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76613f*/
  ComPtr::Set(&v27, *(_DWORD *)(v1 + 4)); /*0x766147*/
  if ( dword_B72770 < dword_B72768 /*0x766183*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72768 + dword_B72774,
         0) )
  {
    v2 = dword_B72770++; /*0x766196*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v2), v28); /*0x7661a7*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7661b0*/
  ComPtr::Release(&v27); /*0x7661b4*/
  v29[0] = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x7661bd*/
  ComPtr::Release(v29); /*0x7661c5*/
  v26 = 1; /*0x7661ca*/
  v25 = v3; /*0x7661cc*/
  String::Assign(&v25, aWdtBases); /*0x7661d4*/
  v24 = 0; /*0x7661d9*/
  v23 = v4; /*0x7661db*/
  String::Assign(&v23, aWdtNobases); /*0x7661e3*/
  v5 = ConstructorWDTFlagOption(v29, 16, v23, v24, v25, v26); /*0x7661fa*/
  ComPtr::Constructor(&v27); /*0x7661fc*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766201*/
  ComPtr::Set(&v27, v5[1]); /*0x76620d*/
  if ( dword_B72770 < dword_B72768 /*0x766249*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v6 = dword_B72770++; /*0x76625c*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v6), v28); /*0x76626d*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766276*/
  ComPtr::Release(&v27); /*0x76627a*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766283*/
  ComPtr::Release(v29); /*0x76628b*/
  v26 = 0; /*0x766290*/
  v25 = v7; /*0x766292*/
  String::Assign(&v25, aWdtShortgame); /*0x76629a*/
  v24 = 1; /*0x76629f*/
  v23 = v8; /*0x7662a1*/
  String::Assign(&v23, aWdtNotshortgam); /*0x7662a9*/
  v9 = ConstructorWDTFlagOption(v29, 1024, v23, v24, v25, v26); /*0x7662c0*/
  ComPtr::Constructor(&v27); /*0x7662c2*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7662c7*/
  ComPtr::Set(&v27, v9[1]); /*0x7662d3*/
  if ( dword_B72770 < dword_B72768 /*0x76630f*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v10 = dword_B72770++; /*0x766322*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v10), v28); /*0x766333*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76633c*/
  ComPtr::Release(&v27); /*0x766340*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766349*/
  ComPtr::Release(v29); /*0x766351*/
  v26 = 0; /*0x766356*/
  v25 = v11; /*0x766358*/
  String::Assign(&v25, aWdtUnitcount); /*0x766360*/
  v12 = System_Init_766880(sub_7667E0, (char)v25, v26); /*0x76637c*/
  ComPtr::Constructor(&v27); /*0x76637e*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766383*/
  ComPtr::Set(&v27, *(_DWORD *)(v12 + 4)); /*0x76638f*/
  if ( dword_B72770 < dword_B72768 /*0x7663cb*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v13 = dword_B72770++; /*0x7663de*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v13), v28); /*0x7663ef*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7663f8*/
  ComPtr::Release(&v27); /*0x7663fc*/
  v29[0] = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x766405*/
  ComPtr::Release(v29); /*0x76640d*/
  v26 = 0; /*0x766412*/
  v25 = v14; /*0x766414*/
  String::Assign(&v25, aWdtRedeployabl); /*0x76641c*/
  v24 = 1; /*0x766421*/
  v23 = v15; /*0x766423*/
  String::Assign(&v23, aWdtNoredeploym); /*0x76642b*/
  v16 = ConstructorWDTFlagOption(v29, 32, v23, v24, v25, v26); /*0x766442*/
  ComPtr::Constructor(&v27); /*0x766444*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766449*/
  ComPtr::Set(&v27, v16[1]); /*0x766455*/
  if ( dword_B72770 < dword_B72768 /*0x766491*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v17 = dword_B72770++; /*0x7664a4*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v17), v28); /*0x7664b5*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7664be*/
  ComPtr::Release(&v27); /*0x7664c2*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x7664cb*/
  ComPtr::Release(v29); /*0x7664d3*/
  v26 = 1; /*0x7664d8*/
  v25 = v18; /*0x7664da*/
  String::Assign(&v25, aWdtCrates); /*0x7664e2*/
  v24 = 1; /*0x7664e7*/
  v23 = v19; /*0x7664e9*/
  String::Assign(&v23, aWdtNocrates); /*0x7664f1*/
  v20 = ConstructorWDTFlagOption(v29, 256, v23, v24, v25, v26); /*0x766508*/
  ComPtr::Constructor(&v27); /*0x76650a*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76650f*/
  ComPtr::Set(&v27, v20[1]); /*0x76651b*/
  System_Init_766EE0(&v27); /*0x76652a*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766533*/
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
  v17 = &stru_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    v4 = v17[1] + 8 * v18; /*0x766634*/
    ComPtr::Constructor(&v14); /*0x766637*/
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76663c*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76669a*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7666f0*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76674f*/
    ComPtr::Release(&v14); /*0x766753*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x76677f*/
  DeleteAndZero::Alt(&v11); /*0x766787*/
  return a2; /*0x76678e*/
}



// ==== 0x007667A0  Conflict_WorldDominationTour::QueryInterface  this=Conflict@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour::QueryInterface(Conflict_WorldDominationTour *this, char a2)
{
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x7667a3*/
  *this = (Conflict_WorldDominationTour)&WorldDominationTour::Conflict::`vftable'; /*0x7667a6*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x7667ac*/
  ComPtr::Release(v3); /*0x7667b2*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7667b9*/
  if ( (a2 & 1) != 0 ) /*0x7667c3*/
    __3_YAXPAX_Z(this); /*0x7667c6*/
  return this; /*0x7667d0*/
}



// ==== 0x007667E0  ObjectClass::method_7667E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667E0(ObjectClass *this)
{
  return BYTE2(this->?); /*0x7667e5*/
}



// ==== 0x007667F0  ObjectClass::method_7667F0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667F0(ObjectClass *this)
{
  return HIBYTE(this->?); /*0x7667f5*/
}



// ==== 0x00766800  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ReleaseBuffer  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::ReleaseBuffer(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766806*/
  this->m_10 = 0; /*0x766809*/
  if ( v2 && BYTE1(this->m_C) ) /*0x766810*/
  {
    result = (**v2)(v2, 3); /*0x76681d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76681f*/
  }
  BYTE1(this->m_C) = 0; /*0x766822*/
  this->m_8 = 0; /*0x766825*/
  return result; /*0x766828*/
}



// ==== 0x00766830  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12::PointerToIndex(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x766830*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/
}



// ==== 0x00766850  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Seek(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x76685d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x766862*/
  *a2 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766867*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x766873*/
  return a2; /*0x76687a*/
}



// ==== 0x00766880  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__fastcall System_Init_766880(rc_ptr *this, int a2, int a3, void *a4, int a5)
{
  int v7; // ecx
  void *v8; // esi
  void *inited; // esi
  String v11; // [esp-8h] [ebp-14h] BYREF

  v8 = (void *)__2_YAPAXI_Z(0x18u); /*0x76688e*/
  if ( v8 ) /*0x766895*/
  {
    *(_DWORD *)&v11.m_3[1] = a5; /*0x76689f*/
    *(_DWORD *)v11.__pad_0 = v7; /*0x7668a0*/
    String::AssignFromPtr(&v11, (const char **)&a4); /*0x7668a4*/
    inited = System_Init_766A10(v8, a2, a3, *(void **)v11.__pad_0, *(int *)&v11.m_3[1]); /*0x7668b6*/
  }
  else
  {
    inited = 0; /*0x7668ba*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7668be*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x7668c5*/
  ComPtr::Set((ComPtr *)this, (int)inited); /*0x7668cc*/
  DeleteAndZero((ObjectClass *)&a4); /*0x7668d5*/
  return this; /*0x7668dc*/
}



// ==== 0x007668F0  rc_ptr::System_Init_7668F0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_7668F0(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7668f0*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766900  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766900(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766900*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766910  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766910(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x766910*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766920  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Conflict_WorldDominationTour_26::AddRef(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76692d*/
}



// ==== 0x00766960  Conflict_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor(Conflict_WorldDominationTour *this, char a2)
{
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x766963*/
  ComPtr::Release((ComPtr *)this); /*0x766969*/
  if ( (a2 & 1) != 0 ) /*0x766973*/
    __3_YAXPAX_Z(this); /*0x766976*/
  return this; /*0x766980*/
}



// ==== 0x00766990  Conflict_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_0(Conflict_WorldDominationTour *this, char a2)
{
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766993*/
  ComPtr::Release((ComPtr *)this); /*0x766999*/
  if ( (a2 & 1) != 0 ) /*0x7669a3*/
    __3_YAXPAX_Z(this); /*0x7669a6*/
  return this; /*0x7669b0*/
}



// ==== 0x007669C0  COMClass::connectPoint  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::connectPoint(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x7669c3*/
  ComPtr::Release((ComPtr *)this); /*0x7669c9*/
  if ( (a2 & 1) != 0 ) /*0x7669d3*/
    __3_YAXPAX_Z(this); /*0x7669d6*/
  return this->__pad_0; /*0x7669e0*/
}



// ==== 0x007669F0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::disconnectPoint  this=VectorCursor  sig=csp ====
_DWORD *__thiscall COMClass::disconnectPoint(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    __3_YAXPAX_Z(this); /*0x766a02*/
  return this->__pad_0; /*0x766a0c*/
}



// ==== 0x00766A10  GameOption@WorldDominationTour::System_Init_766A10  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall sub_766A10(void *this, int a2, int a3, void *a4, int a5)
{
  int v6; // ecx

  v6 = a5; /*0x766a1b*/
  this->q008 = a2; /*0x766a1f*/
  this->q00C = v6; /*0x766a26*/
  this->q004 = 0; /*0x766a2d*/
  *(_DWORD *)this = &WorldDominationTour::GameOption::`vftable'; /*0x766a34*/
  this->q004 = a3; /*0x766a3a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x766a3d*/
  *(_DWORD *)this = &WorldDominationTour::ValueGameOption<unsigned char>::`vftable'; /*0x766a46*/
  DeleteAndZero(&a4); /*0x766a4c*/
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
int __thiscall COMClass::enumConnections(_ValueGameOption_E_WorldDominationTour *this, int a2)
{
  bool v3; // zf
  int result; // eax

  v3 = Network_Connect_767310(a2) == 0; /*0x766a8d*/
  result = 2; /*0x766a8f*/
  if ( v3 ) /*0x766a94*/
    return *(_DWORD *)&this->__pad_7[5]; /*0x766a96*/
  return result; /*0x766a99*/
}



// ==== 0x00766AA0  _ValueGameOption_E_WorldDominationTour::adviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
wchar_t **__thiscall COMClass::adviseConnection(
        _ValueGameOption_E_WorldDominationTour *this,
        wchar_t **a2,
        int a3,
        const wchar_t **a4)
{
  int v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t **v9; // eax
  wchar_t *v11; // [esp-4h] [ebp-9Ch]
  wchar_t *Format; // [esp+4h] [ebp-94h] BYREF
  DeleteAndZero v13; // [esp+8h] [ebp-90h] BYREF
  DeleteAndZero v14[11]; // [esp+14h] [ebp-84h] BYREF

  v5 = ((int (__thiscall *)(_DWORD))this->m_10)(*(_DWORD *)(a3 + 4)); /*0x766ab0*/
  FromStringInt((char **)&Format, v5); /*0x766ab9*/
  v6 = String::GetOrEmpty_Alt((String *)&this->m_14); /*0x766acb*/
  StringCSF = GetStringCSF((wchar_t *)v6, 0, aDRa2mdpostWdtg, 161); /*0x766ad4*/
  WideString::Assign((wchar_t **)&v13, StringCSF); /*0x766ade*/
  v11 = Format; /*0x766ae7*/
  v8 = WideString::GetOrEmpty((wchar_t **)&v13); /*0x766aec*/
  swprintf((wchar_t *const)&v14[0].DeleteAndZero_field_0x04, (const size_t)v8, v11); /*0x766af7*/
  if ( WideString::Length(a4) ) /*0x766b08*/
  {
    WideString::Assign((wchar_t **)&v13.DeleteAndZero_field_0x04, (wchar_t *)L", "); /*0x766b1a*/
    v9 = ConcatWString((wchar_t **)v14, a4, (const wchar_t **)&v13.DeleteAndZero_field_0x04); /*0x766b34*/
    WideString::AssignConcat( /*0x766b3b*/
      (const wchar_t **)v9,
      (wchar_t **)&v13.DeleteAndZero_field_0x08,
      (wchar_t *)&v14[0].DeleteAndZero_field_0x04);
    DeleteAndZero::Alt((DeleteAndZero *)&v13.DeleteAndZero_field_0x08); /*0x766b44*/
    DeleteAndZero::Alt(v14); /*0x766b4d*/
    DeleteAndZero::Alt((DeleteAndZero *)&v13.DeleteAndZero_field_0x04); /*0x766b56*/
  }
  WideString::Assign(a2, (wchar_t *)&v14[0].DeleteAndZero_field_0x04); /*0x766b69*/
  DeleteAndZero::Alt(&v13); /*0x766b72*/
  DeleteAndZero((ObjectClass *)&Format); /*0x766b7b*/
  return a2; /*0x766b82*/
}



// ==== 0x00766B90  _ValueGameOption_E_WorldDominationTour::unadviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::unadviseConnection(_ValueGameOption_E_WorldDominationTour *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->m_14); /*0x766b96*/
  GameOption_WorldDominationTour::Constructor((GameOption_WorldDominationTour *)this); /*0x766b9d*/
  if ( (a2 & 1) != 0 ) /*0x766ba7*/
    __3_YAXPAX_Z(this); /*0x766baa*/
  return (void **)this; /*0x766bb4*/
}



// ==== 0x00766BC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::AddRef(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x766bc6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x766bcf*/
  {
    v3 = 0; /*0x766bd1*/
    if ( m_8 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x766bdd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= m_8 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/
}



// ==== 0x00766C10  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::Release(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766c13*/
  if ( !a2 ) /*0x766c1d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x766d1d*/
    return 1; /*0x766d23*/
  }
  LOBYTE(this->m_C) = 0; /*0x766c27*/
  if ( a3 ) /*0x766c2d*/
  {
    *a3 = a2; /*0x766c73*/
    v6 = (ComPtr *)(a3 + 1); /*0x766c75*/
    if ( a2 - 1 >= 0 ) /*0x766c81*/
    {
      v9 = a2; /*0x766c83*/
      do /*0x766c97*/
      {
        ComPtr::Constructor(v6); /*0x766c88*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766c8d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c93*/
        --v9; /*0x766c96*/
      }
      while ( v9 ); /*0x766c97*/
      v6 = (ComPtr *)(a3 + 1); /*0x766c99*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766c37*/
    if ( !v5 ) /*0x766c41*/
    {
      v8 = 0; /*0x766c6f*/
      goto LABEL_14; /*0x766c71*/
    }
    *v5 = a2; /*0x766c43*/
    v6 = (ComPtr *)(v5 + 1); /*0x766c45*/
    v13 = (ComPtr *)(v5 + 1); /*0x766c4b*/
    if ( a2 - 1 >= 0 ) /*0x766c51*/
    {
      v7 = a2; /*0x766c53*/
      do /*0x766c67*/
      {
        ComPtr::Constructor(v6); /*0x766c58*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766c5d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c63*/
        --v7; /*0x766c66*/
      }
      while ( v7 ); /*0x766c67*/
      v6 = v13; /*0x766c69*/
    }
  }
  v8 = v6; /*0x766c9d*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x766c9f*/
  if ( !v8 ) /*0x766ca5*/
    return 0; /*0x766caa*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x766cb1*/
  {
    if ( a2 >= this->m_8 ) /*0x766cbd*/
      m_8 = this->m_8; /*0x766cbf*/
    for ( i = 0; i < m_8; ++i ) /*0x766cc5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x766cd2*/
    if ( BYTE1(this->m_C) ) /*0x766cdc*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766ce3*/
      if ( v12 ) /*0x766ce8*/
        (**v12)(v12, 3); /*0x766cee*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x766cf0*/
    }
    m_8 = a2; /*0x766cf7*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x766d06*/
  this->m_8 = m_8; /*0x766d09*/
  BYTE1(this->m_C) = a3 == 0; /*0x766d0c*/
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
int __thiscall Conflict_WorldDominationTour_12::Read(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x766d60*/
    return 0; /*0x766d68*/
  m_8 = this->m_8; /*0x766d6e*/
  result = 0; /*0x766d71*/
  if ( m_8 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= m_8 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/
}



// ==== 0x00766DA0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12::Write(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x766da0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/
}



// ==== 0x00766DC0  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_1  this=DynamicVector  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::Constructor_1(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  Conflict_WorldDominationTour *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766dc3*/
  if ( a2 ) /*0x766dcd*/
  {
    LOBYTE(this->m_C) = 0; /*0x766dd7*/
    if ( a3 ) /*0x766ddd*/
    {
      *a3 = a2; /*0x766e21*/
      v8 = (ComPtr *)(a3 + 1); /*0x766e23*/
      if ( a2 - 1 >= 0 ) /*0x766e2f*/
      {
        v9 = a2; /*0x766e31*/
        do /*0x766e45*/
        {
          ComPtr::Constructor(v8); /*0x766e36*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766e3b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x766e41*/
          --v9; /*0x766e44*/
        }
        while ( v9 ); /*0x766e45*/
        v8 = (ComPtr *)(a3 + 1); /*0x766e47*/
      }
      v6 = v8; /*0x766e4b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766de7*/
      if ( v5 ) /*0x766df1*/
      {
        *v5 = a2; /*0x766df3*/
        v6 = (ComPtr *)(v5 + 1); /*0x766df5*/
        v7 = (Conflict_WorldDominationTour *)(v5 + 1); /*0x766dfb*/
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
    LOBYTE(this->m_C) = 1; /*0x766e4f*/
    if ( !v6 ) /*0x766e53*/
      return 0; /*0x766ed6*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x766e55*/
    {
      if ( a2 >= this->m_8 ) /*0x766e61*/
        m_8 = this->m_8; /*0x766e63*/
      for ( i = 0; i < m_8; ++i ) /*0x766e69*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x766e76*/
      if ( BYTE1(this->m_C) ) /*0x766e80*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766e87*/
        if ( v11 ) /*0x766e8c*/
          (**v11)(v11, 3); /*0x766e92*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x766e94*/
      }
      m_8 = a2; /*0x766e9b*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x766eaa*/
    this->m_8 = m_8; /*0x766ead*/
    BYTE1(this->m_C) = a3 == 0; /*0x766eb0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(_DWORD *)this->__pad_0 /*0x766eb9*/
                                                                                           + 12))(this);
  }
  v12 = this->m_8; /*0x766ebc*/
  if ( v12 < this->m_10 ) /*0x766ec4*/
    this->m_10 = v12; /*0x766ec6*/
  return 1; /*0x766ec9*/
}



// ==== 0x00766EE0  ObjectClass::System_Init_766EE0  this=ObjectClass  sig=csp ====
char __thiscall System_Init_766EE0(ObjectClass *this, int a2)
{
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax

  vtable2 = this->?; /*0x766ee3*/
  if ( this->? >= (int)vtable2 ) /*0x766eeb*/
  {
    if ( !BYTE1(this->?) && vtable2 ) /*0x766ef6*/
      return 0; /*0x766ef6*/
    abstractFlags = this->?; /*0x766ef8*/
    if ( abstractFlags <= 0 /*0x766f08*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)vtable2 + abstractFlags,
            0) )
    {
      return 0; /*0x766f0f*/
    }
  }
  uniqueId = this->?; /*0x766f15*/
  this->? = uniqueId + 1; /*0x766f1f*/
  ComPtr::Set((ComPtr *)((char *)this->? + 8 * uniqueId), *(_DWORD *)(a2 + 4)); /*0x766f2c*/
  return 1; /*0x766f11*/
}



// ==== 0x00766F40  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::IndexOf  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12::IndexOf(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x766f40*/
  result = 0; /*0x766f43*/
  if ( m_10 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= m_10 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/
}



// ==== 0x00766F70  rc_ptr::System_Init_766F70  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766F70(rc_ptr *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x766f73*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766f7c*/
  ComPtr::Set((ComPtr *)this, *(_DWORD *)(a2 + 4)); /*0x766f88*/
  return this; /*0x766f8f*/
}



// ==== 0x00766FA0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26::Release(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  ++this->q008; /*0x766fa2*/
  return this->__pad_0; /*0x766fa5*/
}



// ==== 0x00766FB0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26::ddtor(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  --this->q008; /*0x766fb2*/
  return this->__pad_0; /*0x766fb5*/
}



// ==== 0x00766FC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::QueryInterface(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766fc3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x766fc6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x766fd0*/
  {
    (**v3)(v3, 3); /*0x766fdf*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x766fe1*/
  }
  BYTE1(this->m_C) = 0; /*0x766fec*/
  this->m_8 = 0; /*0x766ff2*/
  if ( (a2 & 1) != 0 ) /*0x766ff9*/
    __3_YAXPAX_Z(this); /*0x766ffc*/
  return this->__pad_0; /*0x767006*/
}



// ==== 0x00767010  COMClass::lockServer  this=COMClass  sig=csp ====
char *__thiscall COMClass::lockServer(COMClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x76701d*/
    v4 = (char *)this - 4; /*0x767021*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76702e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x767033*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76705a*/
    ComPtr::Release((ComPtr *)this); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      __3_YAXPAX_Z(this); /*0x76706b*/
    return this->__pad_0; /*0x767073*/
  }
}



// ==== 0x00767080  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_2  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_2(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x767083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x767086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x767090*/
  {
    (**v3)(v3, 3); /*0x76709f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7670a1*/
  }
  BYTE1(this->m_C) = 0; /*0x7670ac*/
  this->m_8 = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    __3_YAXPAX_Z(this); /*0x7670bc*/
  return this->__pad_0; /*0x7670c6*/
}



// ==== 0x007670D0  Conflict_WorldDominationTour::Constructor_3  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_3(Conflict_WorldDominationTour *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x7670d3*/
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7670d8*/
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
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x767306*/
}



// ==== 0x00767310  Network_Connect  this=-  sig=csp ====
char __stdcall sub_767310(int a1)
{
  return 0; /*0x767312*/
}



// ==== 0x00767320  ObjectClass::method  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_767320(ObjectClass *this, wchar_t **a2, int a3, const wchar_t **a4)
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

  v5 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 5))(this, a3); /*0x76732d*/
  v6 = FromStringInt((char **)&v14, v5); /*0x767336*/
  ConcatStringAlloc((char **)&a3, (const char **)&this->?, v6); /*0x767343*/
  DeleteAndZero((ObjectClass *)&v14); /*0x76734c*/
  v7 = a4; /*0x767351*/
  if ( WideString::Length(a4) ) /*0x767357*/
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)L", "); /*0x76736a*/
    v8 = String::GetOrEmpty((String *)&a3); /*0x76737a*/
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22); /*0x76738c*/
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4); /*0x767399*/
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF); /*0x7673a0*/
    DeleteAndZero::Alt((DeleteAndZero *)&v14); /*0x7673a9*/
    DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7673b2*/
  }
  else
  {
    v11 = String::GetOrEmpty((String *)&a3); /*0x7673d3*/
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25); /*0x7673dc*/
    WideString::Assign(a2, v12); /*0x7673e8*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x7673bb*/
  return a2; /*0x7673c3*/
}



// ==== 0x00767460  rc_ptr::ConstructorWDTFlagOption  this=rc_ptr  sig=csp ====
_DWORD *__fastcall ConstructorWDTFlagOption(rc_ptr *this, int a2, void *a3, int a4, void *a5, int a6)
{
  int v8; // ecx
  void *v9; // esi
  int v10; // ecx
  void *v11; // esi
  String v13; // [esp-10h] [ebp-1Ch] BYREF
  String v14; // [esp-8h] [ebp-14h] BYREF

  v9 = (void *)__2_YAPAXI_Z(0x1Cu); /*0x76746e*/
  if ( v9 ) /*0x767475*/
  {
    *(_DWORD *)&v14.m_3[1] = a6; /*0x76747f*/
    *(_DWORD *)v14.__pad_0 = v8; /*0x767480*/
    String::AssignFromPtr(&v14, (const char **)&a5); /*0x767484*/
    *(_DWORD *)&v13.m_3[1] = a4; /*0x767491*/
    *(_DWORD *)v13.__pad_0 = v10; /*0x767492*/
    String::AssignFromPtr(&v13, (const char **)&a3); /*0x767496*/
    v11 = ConstructorWDTFlagOption_Create( /*0x7674a3*/
            v9,
            a2,
            *(void **)v13.__pad_0,
            *(int *)&v13.m_3[1],
            *(void **)v14.__pad_0,
            *(int *)&v14.m_3[1]);
  }
  else
  {
    v11 = 0; /*0x7674a7*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7674ab*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x7674b2*/
  ComPtr::Set((ComPtr *)this, (int)v11); /*0x7674b9*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7674c2*/
  DeleteAndZero((ObjectClass *)&a5); /*0x7674cb*/
  return this; /*0x7674d2*/
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
        wchar_t **a2,
        int a3,
        const wchar_t **a4)
{
  int *v4; // eax
  const wchar_t **v6; // edi
  char *v7; // eax
  wchar_t **v8; // eax
  char *v9; // eax
  wchar_t *v10; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-10h]
  void *v12; // [esp+0h] [ebp-4h] BYREF

  v12 = this; /*0x767500*/
  v4 = (int *)&this->__pad_0[20]; /*0x767510*/
  if ( (*(_DWORD *)(*(_DWORD *)(a3 + 4) + 56) & *(_DWORD *)&this->__pad_0[8]) == 0 ) /*0x767513*/
    v4 = &this->field_18; /*0x767515*/
  String::AssignFromPtr((String *)&a3, (const char **)v4); /*0x76751f*/
  if ( String::Length((String *)&a3) ) /*0x767528*/
  {
    v6 = a4; /*0x767552*/
    if ( WideString::Length(a4) ) /*0x767558*/
    {
      WideString::Assign((wchar_t **)&a4, (wchar_t *)L", "); /*0x76756a*/
      v7 = String::GetOrEmpty((String *)&a3); /*0x76757a*/
      StringCSF = GetStringCSF((wchar_t *)v7, 0, g_Str_File_WDTGameOptions_cpp, 78); /*0x76758c*/
      v8 = ConcatWString((wchar_t **)&v12, v6, (const wchar_t **)&a4); /*0x767599*/
      WideString::AssignConcat((const wchar_t **)v8, a2, StringCSF); /*0x7675a0*/
      DeleteAndZero::Alt((DeleteAndZero *)&v12); /*0x7675a9*/
      DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7675b2*/
      DeleteAndZero((ObjectClass *)&a3); /*0x7675bb*/
    }
    else
    {
      v9 = String::GetOrEmpty((String *)&a3); /*0x7675d3*/
      v10 = GetStringCSF((wchar_t *)v9, 0, g_Str_File_WDTGameOptions_cpp, 81); /*0x7675dc*/
      WideString::Assign(a2, v10); /*0x7675e8*/
      DeleteAndZero((ObjectClass *)&a3); /*0x7675f1*/
    }
    return a2; /*0x7675c0*/
  }
  else
  {
    WideString::AssignFromPtr(a2, a4); /*0x76753c*/
    DeleteAndZero((ObjectClass *)&a3); /*0x767545*/
    return a2; /*0x76754a*/
  }
}



// ==== 0x00767600  sub_767600  this=-  sig=csp ====
int __stdcall sub_767600(int a1)
{
  return 0; /*0x767602*/
}



// ==== 0x007676F0  rc_ptr::System_Init_7676F0  this=rc_ptr  sig=csp ====
_DWORD *__fastcall System_Init_7676F0(rc_ptr *this, int a2)
{
  _DWORD *v4; // eax
  int v5; // edi

  v4 = (_DWORD *)__2_YAPAXI_Z(0xCu); /*0x7676f8*/
  if ( v4 ) /*0x767702*/
  {
    v4[2] = a2; /*0x767704*/
    v4[1] = 0; /*0x767707*/
    *v4 = &WorldDominationTour::MapSizeGameOption::`vftable'; /*0x76770e*/
    v5 = (int)v4; /*0x767714*/
  }
  else
  {
    v5 = 0; /*0x767718*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76771c*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x767723*/
  ComPtr::Set((ComPtr *)this, v5); /*0x76772a*/
  return this; /*0x767731*/
}



// ==== 0x00767740  MapSizeGameOption_WorldDominationTour::Read  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
wchar_t **__stdcall MapSizeGameOption_WorldDominationTour::Read(
        MapSizeGameOption_WorldDominationTour *this,
        int a2,
        const wchar_t **a3)
{
  const wchar_t **v3; // edi
  wchar_t **v4; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  void *v8; // [esp+8h] [ebp-4h] BYREF

  v3 = a3; /*0x767743*/
  if ( WideString::Length(a3) ) /*0x767749*/
  {
    WideString::Assign((wchar_t **)&a3, (wchar_t *)L", "); /*0x76775b*/
    StringCSF = GetStringCSF( /*0x767788*/
                  (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(a2 + 4) + 18)],
                  0,
                  g_Str_File_WDTGameOptions_cpp,
                  129);
    v4 = ConcatWString((wchar_t **)&v8, v3, (const wchar_t **)&a3); /*0x767795*/
    WideString::AssignConcat((const wchar_t **)v4, (wchar_t **)this, StringCSF); /*0x76779c*/
    DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x7677a5*/
    DeleteAndZero::Alt((DeleteAndZero *)&a3); /*0x7677ae*/
  }
  else
  {
    v6 = GetStringCSF( /*0x7677da*/
           (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(a2 + 4) + 19)],
           0,
           g_Str_File_WDTGameOptions_cpp,
           131);
    WideString::Assign((wchar_t **)this, v6); /*0x7677e6*/
  }
  return (wchar_t **)this; /*0x7677b5*/
}



// ==== 0x00767800  MapSizeGameOption_WorldDominationTour::ddtor  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
int __stdcall MapSizeGameOption_WorldDominationTour::ddtor(MapSizeGameOption_WorldDominationTour *this)
{
  return dword_848628[4 * *(unsigned __int8 *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 18) /*0x76781b*/
                    + *(unsigned __int8 *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 19)];
}



// ==== 0x00767820  GameOption@WorldDominationTour::ConstructorWDTFlagOption_Create  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall sub_767820(void *this, int a2, void *a3, int a4, void *a5, int a6)
{
  int v6; // edx
  int v8; // ecx

  v6 = a6; /*0x767824*/
  v8 = a4; /*0x76782b*/
  this->q008 = a2; /*0x76782f*/
  this->q00C = v8; /*0x767836*/
  this->q004 = 0; /*0x76783d*/
  *(_DWORD *)this = &WorldDominationTour::GameOption::`vftable'; /*0x767844*/
  this->q004 = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a5); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a3); /*0x76785a*/
  *(_DWORD *)this = &WorldDominationTour::FlagGameOption::`vftable'; /*0x767863*/
  DeleteAndZero(&a3); /*0x767869*/
  DeleteAndZero(&a5); /*0x767872*/
  return this; /*0x767879*/
}



// ==== 0x00767880  FlagGameOption_WorldDominationTour::coUninitialize  this=FlagGameOption@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::coUninitialize(FlagGameOption_WorldDominationTour *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->field_18); /*0x767886*/
  DeleteAndZero((ObjectClass *)&this->__pad_0[20]); /*0x76788e*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767895*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76789b*/
  if ( (a2 & 1) != 0 ) /*0x7678a5*/
    __3_YAXPAX_Z(this); /*0x7678a8*/
  return (void **)this; /*0x7678b2*/
}



// ==== 0x007678C0  MapSizeGameOption_WorldDominationTour::QueryInterface  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
_DWORD *__thiscall MapSizeGameOption_WorldDominationTour::QueryInterface(
        MapSizeGameOption_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x7678c3*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7678c9*/
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



// ==== 0x00767B00  Team_Create_767B00  this=ReferenceCounted  sig=csp ====
ComPtr *__fastcall Team_Create_767B00(ComPtr *a1, int a2)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x10u); /*0x767b09*/
  v5 = v4; /*0x767b0e*/
  if ( v4 ) /*0x767b15*/
  {
    v6 = (_DWORD *)(v4 + 8); /*0x767b18*/
    *(_DWORD *)(v4 + 4) = 0; /*0x767b1d*/
    *(_DWORD *)v4 = &ReferenceCounted::`vftable'; /*0x767b24*/
    ComPtr::Constructor((ComPtr *)(v4 + 8)); /*0x767b2a*/
    *v6 = &rc_ptr<WDTState>::`vftable'; /*0x767b2f*/
    ComPtr::Set((ComPtr *)(v5 + 8), *(_DWORD *)(a2 + 4)); /*0x767b3b*/
    *(_DWORD *)v5 = &WorldDominationTour::History::`vftable'; /*0x767b40*/
  }
  else
  {
    v5 = 0; /*0x767b49*/
  }
  ComPtr::Constructor(a1); /*0x767b4d*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::History>::`vftable'; /*0x767b54*/
  ComPtr::Set(a1, v5); /*0x767b5c*/
  return a1; /*0x767b63*/
}



// ==== 0x00767BB0  ActivateScreenWDT  this=Conflict  sig=csp ====
int __stdcall WDT_ActivateScreen(int a1, int a2)
{
  ActivateScreenWDT_Create(a2); /*0x767bbf*/
  return a1; /*0x767bc6*/
}



// ==== 0x00767C10  History_WorldDominationTour::QueryInterface  this=History@WorldDominationTour  sig=csp ====
_DWORD *__thiscall History_WorldDominationTour::QueryInterface(History_WorldDominationTour *this, char a2)
{
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x767c13*/
  *this = (History_WorldDominationTour)&WorldDominationTour::History::`vftable'; /*0x767c16*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x767c1c*/
  ComPtr::Release(v3); /*0x767c22*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x767c29*/
  if ( (a2 & 1) != 0 ) /*0x767c33*/
    __3_YAXPAX_Z(this); /*0x767c36*/
  return this; /*0x767c40*/
}



// ==== 0x00767C50  COMClass::marshalInterface  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::marshalInterface(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x767c53*/
  ComPtr::Release((ComPtr *)this); /*0x767c59*/
  if ( (a2 & 1) != 0 ) /*0x767c63*/
    __3_YAXPAX_Z(this); /*0x767c66*/
  return this->__pad_0; /*0x767c70*/
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
_DWORD *__thiscall sub_767E90(MSFrameAnim *this)
{
  this->MSFrameAnim_field_0x4 = 0; /*0x767e99*/
  this->MSFrameAnim_field_0x8 = 0; /*0x767e9c*/
  LOBYTE(this->MSFrameAnim_field_0xC) = 0; /*0x767e9f*/
  this->MSFrameAnim_field_0x10 = (void *)Timer::GetTicks(); /*0x767ea7*/
  this->MSFrameAnim_field_0x18 = 0; /*0x767eaa*/
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x767ead*/
  return this->__pad_0; /*0x767eb5*/
}



// ==== 0x00767EC0  MSFrameAnim::method_767EC0  this=MSFrameAnim  sig=csp ====
void __thiscall sub_767EC0(MSFrameAnim *this)
{
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x767ec0*/
  VtableStub::5CB6C0(this); /*0x767ec6*/
}



// ==== 0x00767ED0  MSFrameAnim::Load  this=MSFrameAnim  sig=csp ====
char __stdcall MSFrameAnim::Load(MSFrameAnim *this, int *a2)
{
  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen((int *)this->__pad_0, a2, 1); /*0x767ee3*/
  return 0; /*0x767eea*/
}



// ==== 0x00767EF0  MSFrameAnim::Draw  this=MSFrameAnim  sig=csp ====
void __stdcall MSFrameAnim::Draw(MSFrameAnim *this, int *a2)
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
    v2 = (*(int (__thiscall **)(MSFrameAnim *))(*(_DWORD *)this->__pad_0 + 124))(this); /*0x767f0d*/
    v3 = (*(int (__thiscall **)(MSFrameAnim *))(*(_DWORD *)this->__pad_0 + 128))(this); /*0x767f0f*/
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
    RenderScoreScreen((int *)this->__pad_0, &v7, 1); /*0x767f40*/
  }
}



// ==== 0x00767F80  MSFrameAnim::UpdateFrame  this=MSFrameAnim  sig=csp ====
_DWORD *__stdcall MSFrameAnim::UpdateFrame(MSFrameAnim *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x767f8c*/
  this->MSFrameAnim_field_0x4 = 0; /*0x767f99*/
  this->MSFrameAnim_field_0x8 = (void *)640; /*0x767f9c*/
  this->MSFrameAnim_field_0xC = (void *)480; /*0x767f9f*/
  return this->__pad_0; /*0x767fa2*/
}



// ==== 0x00767FB0  rc_ptr::ConstructWDTSelection_Create_767FB0  this=rc_ptr  sig=csp ====
_DWORD *__fastcall ConstructWDTSelection_Create_767FB0(rc_ptr *this, int a2, int a3, int a4)
{
  ReferenceCounted *v6; // eax
  void *v7; // edi

  v6 = (ReferenceCounted *)__2_YAPAXI_Z(0xD4u); /*0x767fbb*/
  if ( v6 ) /*0x767fc5*/
    v7 = ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, a4); /*0x767fd9*/
  else
    v7 = 0; /*0x767fdd*/
  ComPtr::Constructor((ComPtr *)this); /*0x767fe1*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x767fe8*/
  ComPtr::Set((ComPtr *)this, (int)v7); /*0x767fef*/
  return this; /*0x767ff6*/
}



// ==== 0x00768000  ReferenceCounted::ConstructWDTSelection_Create_767FB0_Create  this=ReferenceCounted  sig=csp ====
void *__thiscall ConstructWDTSelection_Create_767FB0_Create(ReferenceCounted *this, int a2, int a3, int a4)
{
  *((_DWORD *)this + 3) = a3; /*0x768013*/
  *((_DWORD *)this + 1) = 0; /*0x76801e*/
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x768021*/
  *((_DWORD *)this + 2) = a2; /*0x768027*/
  *((_DWORD *)this + 4) = a4; /*0x76802a*/
  *((_DWORD *)this + 5) = 0; /*0x76802d*/
  *((_DWORD *)this + 6) = 0; /*0x768030*/
  *((_DWORD *)this + 7) = 0; /*0x768033*/
  *((_DWORD *)this + 8) = 0; /*0x768036*/
  *((_DWORD *)this + 9) = 0; /*0x768039*/
  String::Assign((String *)this + 5, &g_INI_DefaultBuffer); /*0x76803c*/
  ConstructWDTSelection_Create_767FB0_Create_Create((ObjectClass *)(this + 11), 0, 0); /*0x768048*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x768052*/
  *((_DWORD *)this + 16) = 10; /*0x768058*/
  *((_DWORD *)this + 15) = 0; /*0x76805b*/
  *((_DWORD *)this + 17) = 0; /*0x76805e*/
  *((_DWORD *)this + 18) = 0; /*0x768061*/
  *((_DWORD *)this + 25) = 0; /*0x768064*/
  *((_BYTE *)this + 104) = 0; /*0x768067*/
  *((_DWORD *)this + 27) = 0; /*0x76806a*/
  *((_DWORD *)this + 28) = 0; /*0x76806d*/
  *((_BYTE *)this + 116) = 0; /*0x768070*/
  *((_DWORD *)this + 30) = 0; /*0x768073*/
  *((_DWORD *)this + 48) = 0; /*0x768076*/
  *((_DWORD *)this + 49) = 0; /*0x76807c*/
  *((_BYTE *)this + 200) = 1; /*0x768082*/
  *((_BYTE *)this + 201) = 0; /*0x768089*/
  *((_DWORD *)this + 47) = &DynamicVectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76808f*/
  *((_DWORD *)this + 52) = 10; /*0x768099*/
  *((_DWORD *)this + 51) = 0; /*0x76809f*/
  *this = (ReferenceCounted)&WorldDominationTour::Map::`vftable'; /*0x7680a5*/
  return this; /*0x7680ad*/
}



// ==== 0x007680C0  WorldDomination::SetupTerritoryNodes  this=Map@WorldDominationTour  sig=csp ====
void __thiscall WorldDomination::SetupTerritoryNodes(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int i; // ebp
  ObjectClass *v5; // edi
  void (__thiscall ***vtable1)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void *v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx

  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 36); /*0x7680c6*/
  *(_DWORD *)this = &WorldDominationTour::Map::`vftable'; /*0x7680c9*/
  if ( v2 ) /*0x7680d1*/
    (**v2)(v2, 1); /*0x7680d7*/
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 20); /*0x7680d9*/
  if ( v3 ) /*0x7680de*/
    (**v3)(v3, 1); /*0x7680e4*/
  for ( i = 0; i < *(_DWORD *)(this + 204); ++i ) /*0x7680f1*/
  {
    v5 = *(ObjectClass **)(*(_DWORD *)(this + 192) + 4 * i); /*0x7680fa*/
    if ( v5 ) /*0x7680ff*/
    {
      vtable1 = (void (__thiscall ***)(_DWORD, int))v5->?; /*0x768101*/
      if ( vtable1 ) /*0x768106*/
        (**vtable1)(vtable1, 1); /*0x76810c*/
      DeleteAndZero(v5); /*0x768110*/
      __3_YAXPAX_Z(v5); /*0x768116*/
    }
  }
  (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x768133*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x76813f*/
  (*((void (__thiscall **)(DSurface *, ObjectClass *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 1))( /*0x768154*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 120); /*0x768157*/
  if ( v7 ) /*0x76815d*/
    (**v7)(v7, 1); /*0x768163*/
  v8 = *(void **)(this + 192); /*0x768165*/
  *(_DWORD *)(this + 188) = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76816b*/
  if ( v8 && *(_BYTE *)(this + 201) ) /*0x768179*/
  {
    __3_YAXPAX_Z(v8); /*0x768182*/
    *(_DWORD *)(this + 192) = 0; /*0x76818a*/
  }
  *(_BYTE *)(this + 201) = 0; /*0x768190*/
  *(_DWORD *)(this + 196) = 0; /*0x768196*/
  v9 = *(void (__thiscall ****)(_DWORD, int))(this + 48); /*0x76819c*/
  *(_DWORD *)(this + 44) = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76819f*/
  if ( v9 && *(_BYTE *)(this + 57) ) /*0x7681aa*/
  {
    (**v9)(v9, 3); /*0x7681b7*/
    *(_DWORD *)(this + 48) = 0; /*0x7681b9*/
  }
  *(_BYTE *)(this + 57) = 0; /*0x7681bf*/
  *(_DWORD *)(this + 52) = 0; /*0x7681c2*/
  DeleteAndZero((ObjectClass *)(this + 40)); /*0x7681c5*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7681cc*/
}



// ==== 0x007681E0  ArtConfig::ReadLayout  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::ReadLayout(int this, INIClass *a2, PriorityQueue *a3, int a4)
{
  char **v5; // eax
  char **v6; // eax
  char **v7; // eax
  char **v8; // eax
  bool v9; // bl
  ObjectClass **CoordPair; // eax
  ObjectClass *v11; // ecx
  TagClass *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  void **v22; // edi
  TagClass *attachedTag; // edx
  char *v24; // eax
  _DWORD *Rect; // eax
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // edx
  ArtConfig *v34; // eax
  PriorityQueue *v35; // ebx
  _DWORD *Config; // eax
  MSPCXAnim *v37; // eax
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // eax
  char *v41; // ecx
  MSPCXAnim *v42; // eax
  MSPCXAnim *v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // eax
  void *v46; // eax
  int *v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // ebx
  void (__thiscall ***v53)(_DWORD, int); // ecx
  MSOverlayAnim *v54; // eax
  void *v55; // eax
  char **v56; // eax
  bool v57; // bl
  int v58; // ebx
  int i; // ebx
  char **v60; // eax
  char **v61; // eax
  int v62; // eax
  int vtable1; // ebx
  char **v64; // eax
  char **v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int j; // ebp
  int k; // ebp
  int occupant; // [esp-4h] [ebp-D8h]
  ObjectClass v73; // [esp+10h] [ebp-C4h] BYREF
  char v74[12]; // [esp+C0h] [ebp-14h] BYREF
  int v75; // [esp+CCh] [ebp-8h]

  unknown_libname_73(&v73.attachedBomb); /*0x7681f0*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7681fe*/
  String::Assign((String *)&v73.?, aMaps); /*0x76820c*/
  v5 = FromStringInt((char **)&v73, *(_DWORD *)(this + 8)); /*0x768222*/
  INIClass::ReadString(a2, (char **)&v73.?, v5, (char **)&v73.?, (int)&v73.attachedBomb); /*0x768236*/
  DeleteAndZero(&v73); /*0x76823f*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768248*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768251*/
  unknown_libname_73(&v73.?); /*0x76825a*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768268*/
  v6 = StaticString::Factory(*(StaticString **)(this + 16)); /*0x76827a*/
  INIClass::ReadString(a2, (char **)&v73.attachedBomb, v6, (char **)&v73.?, (int)&v73.?); /*0x768287*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768290*/
  unknown_libname_73(&v73.?); /*0x768299*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7682a7*/
  v7 = FromStringInt((char **)&v73.?, (int)g_DisplayWidth); /*0x7682c0*/
  v8 = ProcessStringAndCopy((char **)&v73, aArt, v7); /*0x7682cf*/
  v9 = INIClass::ReadString(a2, (char **)&v73.?, v8, (char **)&v73.?, (int)&v73.?) > 0; /*0x7682e7*/
  DeleteAndZero(&v73); /*0x7682ea*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7682f3*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7682fc*/
  if ( (int)g_DisplayWidth > 800 && !v9 ) /*0x76830f*/
  {
    String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x76831a*/
    String::Assign((String *)&v73.?, aArt800); /*0x768328*/
    INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768343*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x76834c*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768355*/
  }
  v73.nextObject = (ObjectClass *)640; /*0x768363*/
  v73.attachedTag = (TagClass *)400; /*0x76836b*/
  String::Assign((String *)&v73.?, (const char *)g_Str_EVA_CannotDeployHere.Type); /*0x768373*/
  CoordPair = (ObjectClass **)INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, &v73.nextObject); /*0x76838e*/
  v11 = *CoordPair; /*0x768393*/
  v12 = (TagClass *)CoordPair[1]; /*0x768395*/
  v73.nextObject = v11; /*0x768398*/
  v73.attachedTag = v12; /*0x7683a0*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7683a4*/
  v73.ambientSoundController[3] = 0; /*0x7683b4*/
  v73.ambientSoundController[4] = 0; /*0x7683b8*/
  String::Assign((String *)&v73.?, aSidebarsize); /*0x7683bc*/
  v13 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, &v73.ambientSoundController[3]); /*0x7683d7*/
  v14 = *v13; /*0x7683dc*/
  v15 = v13[1]; /*0x7683de*/
  v73.ambientSoundController[3] = v14; /*0x7683e1*/
  v73.ambientSoundController[4] = v15; /*0x7683e9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7683ed*/
  v73.customSound_controller[0] = 0; /*0x7683fb*/
  v73.customSound_controller[1] = 0; /*0x7683ff*/
  String::Assign((String *)&v73.?, aHelpbarsize); /*0x768403*/
  v16 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, v73.customSound_controller); /*0x76841e*/
  v17 = *v16; /*0x768423*/
  v18 = v16[1]; /*0x768425*/
  v73.customSound_controller[0] = v17; /*0x768428*/
  v73.customSound_controller[1] = v18; /*0x768430*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768434*/
  v19 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x768441*/
  v20 = (signed int)(v19 - v73.customSound_controller[1] - (unsigned int)v73.attachedTag) / 2; /*0x768460*/
  v21 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x768462*/
  v22 = (void **)(this + 68); /*0x768471*/
  attachedTag = v73.attachedTag; /*0x768477*/
  *(_DWORD *)(this + 68) = (signed int)(v21 - v73.ambientSoundController[3] - (unsigned int)v73.nextObject) / 2; /*0x76847d*/
  *(_DWORD *)(this + 72) = v20; /*0x76847f*/
  v24 = (char *)attachedTag + *(_DWORD *)(this + 72); /*0x768487*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(this + 68); /*0x768489*/
  *(_DWORD *)(this + 80) = v24; /*0x768495*/
  String::Assign((String *)&v73.?, aTextrect); /*0x768498*/
  Rect = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 124)); /*0x7684b2*/
  *(_DWORD *)(this + 124) = *Rect; /*0x7684bb*/
  *(_DWORD *)(this + 128) = Rect[1]; /*0x7684c0*/
  *(_DWORD *)(this + 132) = Rect[2]; /*0x7684c6*/
  *(_DWORD *)(this + 136) = Rect[3]; /*0x7684cc*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7684d3*/
  v26 = *(_DWORD *)(this + 128); /*0x7684dc*/
  *(_DWORD *)(this + 124) += *(_DWORD *)(this + 68); /*0x7684e1*/
  *(_DWORD *)(this + 128) = *(_DWORD *)(this + 72) + v26; /*0x7684f1*/
  String::Assign((String *)&v73.?, aTooltiprect); /*0x7684f4*/
  v27 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 140)); /*0x768511*/
  *(_DWORD *)(this + 140) = *v27; /*0x76851a*/
  *(_DWORD *)(this + 144) = v27[1]; /*0x76851f*/
  *(_DWORD *)(this + 148) = v27[2]; /*0x768525*/
  *(_DWORD *)(this + 152) = v27[3]; /*0x76852b*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768532*/
  v28 = *(_DWORD *)(this + 144); /*0x76853b*/
  *(_DWORD *)(this + 140) += *(_DWORD *)(this + 68); /*0x768540*/
  *(_DWORD *)(this + 144) = *(_DWORD *)(this + 72) + v28; /*0x768550*/
  String::Assign((String *)&v73.?, aTitlerect); /*0x768553*/
  v29 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 156)); /*0x768570*/
  *(_DWORD *)(this + 156) = *v29; /*0x768579*/
  *(_DWORD *)(this + 160) = v29[1]; /*0x76857e*/
  *(_DWORD *)(this + 164) = v29[2]; /*0x768584*/
  *(_DWORD *)(this + 168) = v29[3]; /*0x76858a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768591*/
  v30 = *(_DWORD *)(this + 160); /*0x76859a*/
  *(_DWORD *)(this + 156) += *(_DWORD *)(this + 68); /*0x76859f*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(this + 72) + v30; /*0x7685af*/
  String::Assign((String *)&v73.?, aBacktextrect); /*0x7685b2*/
  v31 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 172)); /*0x7685cf*/
  *(_DWORD *)(this + 172) = *v31; /*0x7685d8*/
  *(_DWORD *)(this + 176) = v31[1]; /*0x7685dd*/
  *(_DWORD *)(this + 180) = v31[2]; /*0x7685e3*/
  *(_DWORD *)(this + 184) = v31[3]; /*0x7685e9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7685f0*/
  v32 = *(_DWORD *)(this + 176); /*0x7685f9*/
  *(_DWORD *)(this + 172) += *(_DWORD *)(this + 68); /*0x7685fe*/
  *(_DWORD *)(this + 176) = *(_DWORD *)(this + 72) + v32; /*0x768609*/
  unknown_libname_73(&v73.?); /*0x76860c*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x76861a*/
  String::Assign((String *)&v73.?, aOpening); /*0x768628*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768643*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x76864c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768655*/
  if ( String::Length((String *)&v73.?) ) /*0x76865e*/
  {
    v33 = *(_DWORD *)(this + 72); /*0x768669*/
    v73.? = *v22; /*0x768670*/
    v73.occupant = v33; /*0x76867a*/
    v73.owningHouseIndex = (int)v73.nextObject; /*0x76867e*/
    v73.fallRate = (int)v73.attachedTag; /*0x768682*/
    v34 = (ArtConfig *)__2_YAPAXI_Z(0x3Cu); /*0x768686*/
    v35 = a3; /*0x768692*/
    if ( v34 ) /*0x768690*/
    {
      Config = ArtConfig::loadConfig( /*0x7686b2*/
                 v34,
                 (char **)&v73.?,
                 (int)DSurface_Alternate,
                 (int)a3[3].__pad_0,
                 (int *)&v73.?,
                 0);
      *(_DWORD *)(this + 24) = Config; /*0x7686ba*/
      PriorityQueue::Add(a3, (int)Config); /*0x7686bd*/
    }
    else
    {
      *(_DWORD *)(this + 24) = 0; /*0x7686d0*/
      PriorityQueue::Add(a3, 0); /*0x7686d3*/
    }
  }
  else
  {
    v35 = a3; /*0x7686da*/
  }
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7686ea*/
  String::Assign((String *)&v73.?, aBackground); /*0x7686f8*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768713*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x76871c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768725*/
  v37 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x76872c*/
  if ( v37 ) /*0x768736*/
    v38 = MSPCXAnim::Construct(v37, (const char **)&v73.?, (int)v35[3].__pad_0, (_DWORD *)(this + 68), 1); /*0x768746*/
  else
    v38 = 0; /*0x76874d*/
  v39 = *(_DWORD *)(this + 24); /*0x76874f*/
  *(_DWORD *)(this + 28) = v38; /*0x768752*/
  if ( v39 && v38 ) /*0x76875b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v38 + 4))(v38, 0); /*0x768763*/
  PriorityQueue::Add(v35, *(_DWORD *)(this + 28)); /*0x76876c*/
  String::Assign((String *)&v73.?, 0); /*0x768777*/
  String::Assign((String *)&v73.?, aClickmap); /*0x768785*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x7687a0*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7687a9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7687b2*/
  CCFileClass::Construct2((CCFileClass *)&v73.customSound_controller[2], (char **)&v73.?); /*0x7687c0*/
  *(_DWORD *)(this + 36) = DecodeFrameSHP((int)&v73.customSound_controller[2], 0, 0, 0); /*0x7687d8*/
  CCFileClass::Reset((CCFileClass *)&v73.customSound_controller[2]); /*0x7687db*/
  v73.? = 0; /*0x7687e9*/
  String::Assign((String *)&v73, &g_INI_DefaultBuffer); /*0x7687f1*/
  String::Assign((String *)&v73.?, aSidebar); /*0x7687ff*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73, (int)&v73.?); /*0x76881a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768823*/
  DeleteAndZero(&v73); /*0x76882c*/
  if ( String::Length((String *)&v73.?) ) /*0x768835*/
  {
    v40 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x768846*/
    v41 = (char *)*v22 + (unsigned int)v73.nextObject; /*0x76885f*/
    v73.occupant = (v40 - v73.ambientSoundController[4]) / 2; /*0x768861*/
    v73.? = v41; /*0x768865*/
    v42 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x768869*/
    if ( v42 ) /*0x768873*/
      v73.? = (int)MSPCXAnim::Construct(v42, (const char **)&v73.?, (int)v35[3].__pad_0, &v73.?, 1); /*0x76888c*/
    else
      v73.? = 0; /*0x768892*/
  }
  PriorityQueue::Add(v35, v73.?); /*0x7688a1*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7688af*/
  String::Assign((String *)&v73, aHelpbar); /*0x7688bd*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x7688d8*/
  DeleteAndZero(&v73); /*0x7688e1*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7688ea*/
  if ( String::Length((String *)&v73.?) ) /*0x7688f3*/
  {
    v43 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x7688fe*/
    if ( v43 ) /*0x768908*/
      v44 = MSPCXAnim::Construct(v43, (const char **)&v73.?, (int)v35[3].__pad_0, (_DWORD *)(this + 76), 1); /*0x76891b*/
    else
      v44 = 0; /*0x768922*/
    *(_DWORD *)(this + 32) = v44; /*0x768924*/
  }
  PriorityQueue::Add(v35, *(_DWORD *)(this + 32)); /*0x76892d*/
  String::Assign((String *)&v73, aBackbuttonrect); /*0x76893b*/
  v45 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73, (int *)(this + 84)); /*0x768955*/
  *(_DWORD *)(this + 84) = *v45; /*0x76895e*/
  *(_DWORD *)(this + 88) = v45[1]; /*0x768963*/
  *(_DWORD *)(this + 92) = v45[2]; /*0x768969*/
  *(_DWORD *)(this + 96) = v45[3]; /*0x76896f*/
  DeleteAndZero(&v73); /*0x768976*/
  String::Assign((String *)&v73, aBackbuttonorig); /*0x768984*/
  v46 = *(void **)(this + 84); /*0x76898c*/
  v73.occupant = *(_DWORD *)(this + 88); /*0x76898e*/
  v73.? = v46; /*0x768996*/
  v47 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73, &v73.?); /*0x7689ac*/
  v48 = *v47; /*0x7689b1*/
  v49 = v47[1]; /*0x7689b3*/
  v73.ambientSoundController[1] = v48; /*0x7689ba*/
  v73.ambientSoundController[2] = v49; /*0x7689be*/
  DeleteAndZero(&v73); /*0x7689c2*/
  v50 = *(_DWORD *)(this + 88); /*0x7689cd*/
  *(_DWORD *)(this + 84) += *v22; /*0x7689d0*/
  v51 = v73.ambientSoundController[2]; /*0x7689d7*/
  *(_DWORD *)(this + 88) = *(_DWORD *)(this + 72) + v50; /*0x7689db*/
  v52 = (int)*v22 + v73.ambientSoundController[1]; /*0x7689e9*/
  v73.ambientSoundController[2] = *(_DWORD *)(this + 72) + v51; /*0x7689f4*/
  String::Assign((String *)&v73.?, aSdbtnanmPal); /*0x7689f8*/
  String::Assign((String *)&v73, aBackbuttonpale); /*0x768a06*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768a21*/
  DeleteAndZero(&v73); /*0x768a2a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768a33*/
  v53 = *(void (__thiscall ****)(_DWORD, int))(this + 120); /*0x768a38*/
  if ( v53 ) /*0x768a3d*/
    (**v53)(v53, 1); /*0x768a43*/
  *(_DWORD *)(this + 120) = PaletteClass::Load((PaletteClass *)&v73.?); /*0x768a57*/
  String::Assign((String *)&v73, aBackbuttonnorm); /*0x768a5a*/
  *(_DWORD *)(this + 108) = INIClass::ReadInt( /*0x768a78*/
                              (bool *)a2->__pad_0,
                              (char **)&v73.?,
                              (char **)&v73,
                              *(_DWORD *)(this + 108));
  DeleteAndZero(&v73); /*0x768a7b*/
  String::Assign((String *)&v73, aBackbuttondepr); /*0x768a89*/
  *(_DWORD *)(this + 112) = INIClass::ReadInt( /*0x768aa7*/
                              (bool *)a2->__pad_0,
                              (char **)&v73.?,
                              (char **)&v73,
                              *(_DWORD *)(this + 112));
  DeleteAndZero(&v73); /*0x768aaa*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768ab8*/
  String::Assign((String *)&v73, aBackbutton); /*0x768ac6*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768ae1*/
  DeleteAndZero(&v73); /*0x768aea*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768af3*/
  if ( String::Length((String *)&v73.?) ) /*0x768afc*/
  {
    v54 = (MSOverlayAnim *)__2_YAPAXI_Z(0x4Cu); /*0x768b07*/
    if ( v54 ) /*0x768b11*/
      v55 = MSOverlayAnim::Init( /*0x768b39*/
              v54,
              (char **)&v73.?,
              v52,
              v73.ambientSoundController[2],
              *(_DWORD *)(this + 120),
              0,
              (int)a3[3].__pad_0,
              1,
              *(_DWORD *)(this + 108),
              0);
    else
      v55 = 0; /*0x768b40*/
    *(_DWORD *)(this + 100) = v55; /*0x768b4a*/
    PriorityQueue::Add(a3, (int)v55); /*0x768b4d*/
  }
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768b5b*/
  String::Assign((String *)&v73, aBackbuttonhigh); /*0x768b69*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768b84*/
  DeleteAndZero(&v73); /*0x768b8d*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768b96*/
  String::Assign((String *)&v73.?, 0); /*0x768ba1*/
  String::Assign((String *)&v73, aOverlayprefix); /*0x768baf*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, this + 40); /*0x768bc9*/
  DeleteAndZero(&v73); /*0x768bd2*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768bdb*/
  String::Assign((String *)&v73.?, 0); /*0x768be6*/
  String::Assign((String *)&v73, aOverlaypalette); /*0x768bf4*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768c0f*/
  DeleteAndZero(&v73); /*0x768c18*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768c21*/
  *(_DWORD *)(this + 20) = PaletteClass::Load((PaletteClass *)&v73.?); /*0x768c42*/
  v56 = String::Assign((String *)&v73, aWdt_0); /*0x768c45*/
  String::Concat((String *)v56, (char **)v73.ambientSoundController, (char **)&v73.attachedBomb); /*0x768c4c*/
  DeleteAndZero(&v73); /*0x768c55*/
  String::Assign((String *)&v73, aNamekeyprefix); /*0x768c63*/
  INIClass::ReadString( /*0x768c7e*/
    a2,
    (char **)&v73.?,
    (char **)&v73,
    (char **)v73.ambientSoundController,
    (int)v73.ambientSoundController);
  DeleteAndZero(&v73); /*0x768c87*/
  v73.? = 0; /*0x768c92*/
  String::Assign((String *)&v73.?, 0); /*0x768c9a*/
  String::Assign((String *)&v73, aDefaultpalette); /*0x768ca8*/
  v57 = INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?) > 0; /*0x768cce*/
  DeleteAndZero(&v73); /*0x768cd1*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768cda*/
  if ( v57 ) /*0x768ce1*/
    v73.? = (int)ArtConfig::saveConfig(this, (const char **)&v73.?); /*0x768cef*/
  String::Assign((String *)&v73, aLogo); /*0x768cfc*/
  v58 = ArtConfig::ParseLayoutEntry((ArtConfig *)this, a2, (char **)&v73.?, (char **)&v73, v73.?); /*0x768d1c*/
  DeleteAndZero(&v73); /*0x768d1e*/
  if ( v58 ) /*0x768d25*/
    PriorityQueue::Add(a3, v58); /*0x768d2f*/
  for ( i = 0; i < 10; ++i ) /*0x768d34*/
  {
    v60 = FromStringInt((char **)&v73.?, i); /*0x768d3c*/
    v61 = ProcessStringAndCopy((char **)&v73, aAnimation, v60); /*0x768d4b*/
    String::Reassign((String *)&v73.?, (const char **)v61); /*0x768d55*/
    DeleteAndZero(&v73); /*0x768d5e*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768d67*/
    v62 = ArtConfig::ParseLayoutEntry((ArtConfig *)this, a2, (char **)&v73.?, (char **)&v73.?, v73.?); /*0x768d7e*/
    if ( v62 ) /*0x768d85*/
      PriorityQueue::Add(a3, v62); /*0x768d8f*/
  }
  vtable1 = 0; /*0x768d9a*/
  v73.? = 0; /*0x768d9c*/
  do /*0x768e87*/
  {
    String::Assign((String *)&v73, 0); /*0x768da6*/
    v64 = FormatStringInt((char **)&v73.ambientSoundController[1], vtable1, 2); /*0x768dbd*/
    v65 = ProcessStringAndCopy((char **)&v73.?, aTerritory, v64); /*0x768dcc*/
    HIBYTE(v73.?) = INIClass::ReadString(a2, (char **)&v73.?, v65, (char **)&v73, (int)&v73.?) > 0; /*0x768de4*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768de9*/
    DeleteAndZero((ObjectClass *)&v73.ambientSoundController[1]); /*0x768df2*/
    DeleteAndZero(&v73); /*0x768dfb*/
    if ( HIBYTE(v73.?) ) /*0x768e06*/
    {
      ArtConfig_Read( /*0x768e1d*/
        (rc_ptr *)&v73.?,
        vtable1,
        a2,
        (char *)&v73.?,
        (const char **)(this + 40),
        (const char **)v73.ambientSoundController);
      v66 = *(_DWORD *)(this + 52); /*0x768e22*/
      if ( *(_DWORD *)(this + 60) < v66 /*0x768e4a*/
        || (*(_BYTE *)(this + 57) || !v66)
        && (v67 = *(_DWORD *)(this + 64), v67 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 44) + 8))(this + 44, v67 + v66, 0) )
      {
        v68 = *(_DWORD *)(this + 60); /*0x768e51*/
        occupant = v73.occupant; /*0x768e58*/
        *(_DWORD *)(this + 60) = v68 + 1; /*0x768e5c*/
        ComPtr::Set((ComPtr *)(*(_DWORD *)(this + 48) + 8 * v68), occupant); /*0x768e65*/
      }
      v73.? = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x768e6e*/
      ComPtr::Release((ComPtr *)&v73.?); /*0x768e76*/
      vtable1 = (int)v73.?; /*0x768e7b*/
    }
    v73.? = (void *)++vtable1; /*0x768e83*/
  }
  while ( vtable1 < 100 ); /*0x768e87*/
  for ( j = 0; j < *(_DWORD *)(this + 60); ++j ) /*0x768e94*/
    ArtConfig::resetConfig( /*0x768ead*/
      *(_DWORD *)(*(_DWORD *)(this + 48) + 8 * j + 4),
      a3,
      *(_DWORD *)(this + 20),
      (_DWORD *)(this + 68));
  for ( k = 0; k < *(_DWORD *)(this + 60); ++k ) /*0x768ec1*/
    ArtConfig::validateConfig( /*0x768ed9*/
      *(_DWORD *)(*(_DWORD *)(this + 48) + 8 * k + 4),
      a3,
      *(_DWORD *)(this + 20),
      (_DWORD *)(this + 68));
  DeleteAndZero((ObjectClass *)v73.ambientSoundController); /*0x768eea*/
  v73.customSound_controller[2] = (int)&CCFileClass::`vftable'; /*0x768ef6*/
  v75 = 0; /*0x768efe*/
  Vector::Clear((int)v74); /*0x768f09*/
  v73.customSound_controller[2] = (int)&off_7E1668; /*0x768f12*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v73.customSound_controller[2]); /*0x768f1a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f23*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f2c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f35*/
  return DeleteAndZero((ObjectClass *)&v73.attachedBomb); /*0x768f43*/
}


// ==== 0x00768F50  ArtConfig::ParseLayoutEntry  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::ParseLayoutEntry(ArtConfig *this, _DWORD *a2, char **a3, char **a4, int a5)
{
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  char *v17; // ebp
  _DWORD *v18; // eax
  MSShapeAnim *v19; // eax
  void *v20; // esi
  String v22; // [esp+10h] [ebp-88h] BYREF
  char v23; // [esp+1Bh] [ebp-7Dh]
  String v24; // [esp+1Ch] [ebp-7Ch] BYREF
  char *v25; // [esp+24h] [ebp-74h] BYREF
  String v26; // [esp+28h] [ebp-70h] BYREF
  int v27[3]; // [esp+84h] [ebp-14h] BYREF
  int v28; // [esp+90h] [ebp-8h]

  unknown_libname_73(&v22); /*0x768f60*/
  String::Assign((String *)&v22.m_3[1], 0); /*0x768f6b*/
  v6 = INIClass::ReadString((INIClass *)a2, a3, a4, (char **)&v22.m_3[1], (int)&v22) > 0; /*0x768f9c*/
  DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x768f9f*/
  if ( !v6 ) /*0x768fa6*/
    goto LABEL_17; /*0x768fa6*/
  unknown_libname_73(&v25); /*0x768fb0*/
  unknown_libname_73(&v22.m_3[1]); /*0x768fb9*/
  unknown_libname_73(&v26); /*0x768fc2*/
  unknown_libname_73(&v24); /*0x768fcb*/
  unknown_libname_73(&v24.m_3[1]); /*0x768fd4*/
  v7 = String::Tokenize(&v22, 0, Str, (void **)&v25); /*0x768fe9*/
  v8 = String::Tokenize(&v22, v7, Str, (void **)&v22.m_3[1]); /*0x768ffd*/
  v9 = String::Tokenize(&v22, v8, Str, (void **)&v26); /*0x769011*/
  v10 = String::Tokenize(&v22, v9, Str, (void **)&v24); /*0x769025*/
  String::Tokenize(&v22, v10, Str, (void **)&v24.m_3[1]); /*0x769039*/
  if ( !(unsigned __int8)String::NotEquals(&v26, 0) ) /*0x769044*/
    goto LABEL_16; /*0x769044*/
  __1_Timevec_std__QAE_XZ((const char **)&v22.m_3[1]); /*0x769055*/
  v12 = *((_DWORD *)this + 17) + v11; /*0x769063*/
  __1_Timevec_std__QAE_XZ((const char **)&v26); /*0x769065*/
  v14 = *((_DWORD *)this + 18) + v13; /*0x76906f*/
  v15 = 5; /*0x769077*/
  if ( (unsigned __int8)String::NotEquals(&v24, 0) && String::Length(&v24) ) /*0x769089*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v24); /*0x769096*/
    v15 = v16; /*0x76909b*/
  }
  if ( !(unsigned __int8)String::NotEquals((String *)&v24.m_3[1], 0) /*0x7690c9*/
    || !String::Length((String *)&v24.m_3[1])
    || (v17 = ArtConfig::saveConfig((int)this, (const char **)&v24.m_3[1])) == 0 )
  {
    v17 = (char *)a5; /*0x7690cb*/
  }
  v18 = CCFileClass::Construct2((CCFileClass *)&v26.m_3[1], &v25); /*0x7690db*/
  v23 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v18 + 20))(v18, 0); /*0x7690f0*/
  *(_DWORD *)&v26.m_3[1] = &CCFileClass::`vftable'; /*0x7690f4*/
  v28 = 0; /*0x7690fc*/
  Vector::Clear((int)v27); /*0x769107*/
  *(_DWORD *)&v26.m_3[1] = &off_7E1668; /*0x769110*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v26.m_3[1]); /*0x769118*/
  if ( !v23 || !v17 ) /*0x769127*/
  {
LABEL_16:
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x76919a*/
    DeleteAndZero((ObjectClass *)&v24); /*0x7691a3*/
    DeleteAndZero((ObjectClass *)&v26); /*0x7691ac*/
    DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x7691b5*/
    DeleteAndZero((ObjectClass *)&v25); /*0x7691be*/
LABEL_17:
    DeleteAndZero((ObjectClass *)&v22); /*0x7691c3*/
    return 0; /*0x7691cf*/
  }
  v19 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76912b*/
  if ( v19 ) /*0x769135*/
    v20 = MSShapeAnim::Constructor(v19, &v25, v12, v14, (int)v17, v15, 1, 0); /*0x76914b*/
  else
    v20 = 0; /*0x76914f*/
  DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x769155*/
  DeleteAndZero((ObjectClass *)&v24); /*0x76915e*/
  DeleteAndZero((ObjectClass *)&v26); /*0x769167*/
  DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x769170*/
  DeleteAndZero((ObjectClass *)&v25); /*0x769179*/
  DeleteAndZero((ObjectClass *)&v22); /*0x769182*/
  return (int)v20; /*0x769189*/
}



// ==== 0x007691E0  ArtConfig::saveConfig  this=ArtConfig  sig=csp ====
char *__thiscall sub_7691E0(int this, const char **a2)
{
  int v3; // esi
  char *v4; // ebp
  char **v5; // eax
  char **v6; // esi
  char **v7; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v3 = 0; /*0x7691e9*/
  if ( *(int *)(this + 204) <= 0 ) /*0x7691f3*/
  {
LABEL_4:
    v4 = (char *)PaletteClass::Load(a2); /*0x769213*/
    if ( v4 ) /*0x76921f*/
    {
      v5 = (char **)__2_YAPAXI_Z(8u); /*0x769223*/
      v6 = v5; /*0x769228*/
      if ( v5 ) /*0x76922f*/
      {
        String::AssignFromPtr(v5, a2); /*0x769234*/
        v6[1] = v4; /*0x769239*/
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
    while ( !String::Compare(*(const char ***)(*(_DWORD *)(this + 192) + 4 * v3), a2) ) /*0x769206*/
    {
      if ( ++v3 >= *(_DWORD *)(this + 204) ) /*0x769211*/
        goto LABEL_4; /*0x769211*/
    }
    return *(char **)(*(_DWORD *)(*(_DWORD *)(this + 192) + 4 * v3) + 4); /*0x76924c*/
  }
}



// ==== 0x007692F0  ObjectClass::ConstructWDTSelection_Create_76EEB0_Create  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0_Create(ObjectClass *this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int referenceCount; // ecx

  result = this->?; /*0x7692f3*/
  if ( result ) /*0x7692f8*/
  {
    TerritorySelectWDT_Delete((ObjectClass *)a3, 0, 1, 0); /*0x769304*/
    result = MSEngine::ProcessEvents((MSEngine *)a2, this->?, 300000); /*0x769316*/
  }
  referenceCount = this->?; /*0x76931b*/
  if ( referenceCount ) /*0x769321*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)referenceCount + 4))(referenceCount, 1); /*0x769327*/
  return result; /*0x76931e*/
}



// ==== 0x00769330  Surface::PixelToIndex  this=ObjectClass  sig=csp ====
int __thiscall Surface::PixelToIndex(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  v3 = *a2 - this->q011; /*0x769342*/
  v4 = a2[1] - this->q048; /*0x769347*/
  v6 = v3; /*0x769349*/
  v7 = v4; /*0x76934f*/
  if ( v3 < 0 /*0x76937a*/
    || v6 >= (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->objectTypeFlags + 124))(this->objectTypeFlags)
    || v7 < 0
    || v7 >= (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->objectTypeFlags + 128))(this->objectTypeFlags) )
  {
    return -1; /*0x769390*/
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->objectTypeFlags + 40))(this->objectTypeFlags, &v6); /*0x769386*/
  }
}



// ==== 0x007693A0  WDTSurface::ToggleState  this=WDTSurface  sig=csp ====
int __thiscall WDTSurface::ToggleState(int this, int *a2, char a3)
{
  int result; // eax
  int v5; // eax

  LOBYTE(result) = a3; /*0x7693a0*/
  if ( *(_BYTE *)(this + 116) != a3 ) /*0x7693aa*/
  {
    *(_BYTE *)(this + 116) = a3; /*0x7693ae*/
    if ( a3 && *(_BYTE *)(this + 104) ) /*0x7693b3*/
      v5 = *(_DWORD *)(this + 112); /*0x7693ba*/
    else
      v5 = *(_DWORD *)(this + 108); /*0x7693bf*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v5); /*0x7693c6*/
    Team::ReleaseAll(a2, this + 84); /*0x7693d5*/
    return DSurface::Flip2(); /*0x7693dc*/
  }
  return result; /*0x7693e1*/
}



// ==== 0x007693F0  WDTGame::ToggleTeamMode  this=Player  sig=csp ====
int __thiscall WDTGame::ToggleTeamMode(int this, int *a2, char a3)
{
  int result; // eax
  char v5; // cl
  int v6; // eax

  LOBYTE(result) = a3; /*0x7693f0*/
  if ( *(_BYTE *)(this + 104) != a3 ) /*0x7693fa*/
  {
    v5 = *(_BYTE *)(this + 116); /*0x7693fc*/
    *(_BYTE *)(this + 104) = a3; /*0x7693ff*/
    if ( v5 && a3 ) /*0x769408*/
      v6 = *(_DWORD *)(this + 112); /*0x76940a*/
    else
      v6 = *(_DWORD *)(this + 108); /*0x76940f*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v6); /*0x769416*/
    Team::ReleaseAll(a2, this + 84); /*0x769425*/
    return DSurface::Flip2(); /*0x76942c*/
  }
  return result; /*0x769431*/
}



// ==== 0x00769440  WDTSurface::PointInRect  this=WDTSurface  sig=csp ====
int __thiscall WDTSurface::PointInRect(WDTSurface *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int result; // eax

  v2 = *((_DWORD *)this + 21); /*0x769440*/
  result = 0; /*0x769475*/
  if ( *a2 >= v2 && *a2 < v2 + *((_DWORD *)this + 23) ) /*0x769457*/
  {
    v3 = a2[1]; /*0x769459*/
    v4 = *((_DWORD *)this + 22); /*0x76945c*/
    if ( v3 >= v4 && v3 < v4 + *((_DWORD *)this + 24) ) /*0x76946a*/
      return 1; /*0x76944c*/
  }
  return result; /*0x769471*/
}



// ==== 0x00769480  ObjectClass::unknown_libname_37  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_37(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x769484*/
  this->? = 0; /*0x769486*/
  this->? = 0; /*0x769489*/
  return &this->AbstractClass; /*0x76948c*/
}



// ==== 0x00769490  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_769490(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  char *vtable1; // edx
  char *v4; // ecx

  result = &this->AbstractClass; /*0x769490*/
  vtable1 = (char *)this->?; /*0x76949d*/
  this->AbstractClass = (char *)this->AbstractClass + *a2; /*0x7694a0*/
  v4 = (char *)this->? + 1; /*0x7694aa*/
  result[1] = &vtable1[a2[1]]; /*0x7694ab*/
  result[2] = v4; /*0x7694ae*/
  return result; /*0x7694b1*/
}



// ==== 0x007694C0  ObjectClass::Map_Load_7694C0  this=ObjectClass  sig=csp ====
int *__thiscall Map_Load_7694C0(ObjectClass *this, int *a2)
{
  int vtable2; // esi
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  vtable2 = (int)this->?; /*0x7694c6*/
  if ( vtable2 <= 0 ) /*0x7694cb*/
  {
    v4 = 0; /*0x7694e6*/
    v5 = 0; /*0x7694ea*/
  }
  else
  {
    v4 = (int)this->AbstractClass / vtable2; /*0x7694d2*/
    v5 = (int)this->? / vtable2; /*0x7694e0*/
  }
  *a2 = v4; /*0x7694fc*/
  a2[1] = v5; /*0x7694fe*/
  return a2; /*0x7694fb*/
}



// ==== 0x00769550  LoadWDTMapAsset  this=-  sig=ida-proto ====
int __fastcall LoadWDTMapAsset(const char **a1, char **a2)
{
  void *vtable0; // ebp
  int *v4; // eax
  int *v5; // esi
  int *v6; // eax
  int *v7; // esi
  _DWORD *v8; // eax
  int v9; // edx
  unsigned int abstractFlags; // ebp
  int v11; // esi
  int *v12; // eax
  int *v13; // edi
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int *v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int m_8; // ecx
  int v24; // eax
  int *v25; // ebx
  int *v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  int v31; // esi
  int attachedTag; // esi
  int v33; // edi
  int v34; // esi
  bool v35; // cc
  int v36; // edi
  TagClass *v37; // ebx
  BombClass *v38; // ebp
  BombClass *attachedBomb; // ebx
  _DWORD *_769D70; // eax
  int v41; // edi
  int v42; // esi
  char **v43; // eax
  int *_7694C0; // eax
  ObjectClass *v45; // ecx
  char **v46; // eax
  char **v47; // eax
  int v49; // [esp+10h] [ebp-158h] BYREF
  int v50; // [esp+14h] [ebp-154h]
  _VectorClass_V_TRect_H v51; // [esp+18h] [ebp-150h] BYREF
  void *Block; // [esp+2Ch] [ebp-13Ch]
  unsigned int v53; // [esp+30h] [ebp-138h]
  int v54; // [esp+34h] [ebp-134h]
  ObjectClass v55; // [esp+38h] [ebp-130h] BYREF
  BufferIOFileClass v56; // [esp+110h] [ebp-58h] BYREF

  v55.ambientSoundController[0] = (int)a1; /*0x769558*/
  BufferIOFile::Init((BufferIOFile *)&v55.needsRedraw); /*0x769567*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)1); /*0x76957a*/
  v55.ambientSoundController[2] = 0; /*0x769588*/
  v55.ambientSoundController[3] = 0; /*0x76958c*/
  GenericList::Constructor((GenericList *)&v55.ambientSoundController[4]); /*0x769593*/
  v55.ambientSoundController[4] = (int)&List<INIClass::INISection *>::`vftable'; /*0x76959f*/
  Node::Init((Node *)&v55.bombVisible); /*0x7695aa*/
  v55.visibilityFlags = 0; /*0x7695bc*/
  v55.ambientSoundController[1] = (int)&INIClass::`vftable'; /*0x7695c3*/
  FileStraw::Open((FileStraw *)&v55.ambientSoundController[1], (int)&v55.needsRedraw, 0); /*0x7695ce*/
  CCFileClass::Close((BufferIOFileClass *)&v55.needsRedraw); /*0x7695da*/
  sub_47AA00((CDFileClass *)&v56, a2); /*0x7695e7*/
  vtable0 = DecodeFrameSHP((int)&v56, 0, 0, 0); /*0x7695fc*/
  v55.AbstractClass = vtable0; /*0x769600*/
  v55.? = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable0 + 128))(vtable0); /*0x76960d*/
  v55.? = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable0 + 124))(vtable0); /*0x76961e*/
  *(_DWORD *)&v51.m_1[3] = 0; /*0x769627*/
  v51.m_8 = 30; /*0x76962b*/
  LOWORD(v51.m_C) = 1; /*0x76962f*/
  *(_DWORD *)v51.__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x769638*/
  v4 = (int *)__2_YAPAXI_Z(0x1E0u); /*0x769640*/
  v5 = v4; /*0x769645*/
  if ( v4 ) /*0x76964c*/
    Array::ForEach(v4, 16, 30, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769657*/
  else
    v5 = 0; /*0x76965e*/
  *(_DWORD *)&v51.m_1[3] = v5; /*0x769665*/
  BYTE1(v51.m_C) = 1; /*0x769669*/
  Block = 0; /*0x76966e*/
  v53 = 30; /*0x769672*/
  LOWORD(v54) = 1; /*0x769676*/
  *(_DWORD *)v51.__tail_10 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x76967f*/
  v6 = (int *)__2_YAPAXI_Z(0x168u); /*0x769687*/
  v7 = v6; /*0x76968c*/
  if ( v6 ) /*0x769693*/
    Array::ForEach(v6, 12, 30, (int (__thiscall *)(int))unknown_libname_37); /*0x76969e*/
  else
    v7 = 0; /*0x7696a5*/
  Block = v7; /*0x7696ab*/
  v55.? = &v51; /*0x7696af*/
  BYTE1(v54) = 1; /*0x7696b7*/
  v55.? = 0; /*0x7696bc*/
  v55.? = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x7696c0*/
  if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x7696c8*/
  {
    do /*0x769700*/
    {
      v8 = (_DWORD *)(16 * (int)v55.? + *((_DWORD *)v55.? + 1)); /*0x7696e4*/
      *v8 = 0; /*0x7696e6*/
      v8[1] = 0; /*0x7696e8*/
      v8[2] = 0; /*0x7696eb*/
      v8[3] = 0; /*0x7696ee*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x7696f5*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769700*/
  }
  v9 = 0; /*0x76970b*/
  v50 = 0; /*0x76970f*/
  if ( v55.? > 0 ) /*0x769713*/
  {
    while ( 1 ) /*0x76971d*/
    {
      v49 = 0; /*0x76971d*/
      if ( v55.? > 0 ) /*0x769723*/
        break; /*0x769723*/
LABEL_67:
      v50 = ++v9; /*0x769a2a*/
      if ( v9 >= v55.? ) /*0x769a2e*/
        goto LABEL_68; /*0x769a2e*/
    }
    while ( 1 ) /*0x769736*/
    {
      abstractFlags = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)vtable0 + 40))(vtable0, &v49); /*0x769736*/
      v55.? = abstractFlags; /*0x76973b*/
      if ( abstractFlags <= 0x1D ) /*0x76973f*/
      {
        v11 = abstractFlags + 1; /*0x769755*/
        if ( v53 < abstractFlags + 1 ) /*0x76975a*/
        {
          LOBYTE(v54) = 0; /*0x76976b*/
          v12 = (int *)__2_YAPAXI_Z(12 * v11); /*0x769773*/
          v13 = v12; /*0x769778*/
          if ( v12 ) /*0x76977f*/
            Array::ForEach(v12, 12, abstractFlags + 1, (int (__thiscall *)(int))unknown_libname_37); /*0x76978a*/
          else
            v13 = 0; /*0x769791*/
          LOBYTE(v54) = 1; /*0x769795*/
          if ( v13 ) /*0x76979a*/
          {
            if ( Block ) /*0x7697a0*/
            {
              v14 = v53; /*0x7697a2*/
              if ( v11 < (int)v53 ) /*0x7697a8*/
                v14 = abstractFlags + 1; /*0x7697aa*/
              if ( v14 > 0 ) /*0x7697ae*/
              {
                v15 = 0; /*0x7697b0*/
                do /*0x7697cf*/
                {
                  v16 = &v13[v15]; /*0x7697b6*/
                  v17 = (int *)((char *)Block + v15 * 4); /*0x7697b9*/
                  v15 += 3; /*0x7697bb*/
                  --v14; /*0x7697be*/
                  *v16 = *v17; /*0x7697c1*/
                  v16[1] = v17[1]; /*0x7697c6*/
                  v16[2] = v17[2]; /*0x7697cc*/
                }
                while ( v14 ); /*0x7697cf*/
                abstractFlags = v55.?; /*0x7697d1*/
              }
              if ( BYTE1(v54) ) /*0x7697db*/
                __3_YAXPAX_Z(Block); /*0x7697e2*/
            }
            Block = v13; /*0x7697ea*/
            v53 = v11; /*0x7697ee*/
            BYTE1(v54) = 1; /*0x7697f2*/
          }
        }
        v18 = (char *)Block + 12 * abstractFlags; /*0x769810*/
        v19 = v18[1]; /*0x769815*/
        v20 = v18[2]; /*0x76981a*/
        *v18 += v49; /*0x76981d*/
        v18[1] = v50 + v19; /*0x769826*/
        v18[2] = v20 + 1; /*0x769829*/
        if ( v51.m_8 < (unsigned int)v11 ) /*0x769832*/
        {
          v55.owningHouseIndex = v51.m_8; /*0x76983a*/
          if ( v11 ) /*0x76983e*/
          {
            LOBYTE(v51.m_C) = 0; /*0x769846*/
            v21 = (int *)__2_YAPAXI_Z(16 * v11); /*0x76984e*/
            v22 = v21; /*0x769853*/
            if ( v21 ) /*0x76985a*/
              Array::ForEach(v21, 16, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769865*/
            else
              v22 = 0; /*0x76986c*/
            LOBYTE(v51.m_C) = 1; /*0x769870*/
            if ( v22 ) /*0x769875*/
            {
              if ( *(_DWORD *)&v51.m_1[3] ) /*0x76987b*/
              {
                m_8 = v51.m_8; /*0x76987d*/
                if ( v11 < v51.m_8 ) /*0x769883*/
                  m_8 = v11; /*0x769885*/
                if ( m_8 > 0 ) /*0x769889*/
                {
                  v24 = 0; /*0x76988b*/
                  do /*0x7698b0*/
                  {
                    v25 = &v22[v24]; /*0x769891*/
                    v26 = (int *)(v24 * 4 + *(_DWORD *)&v51.m_1[3]); /*0x769894*/
                    v24 += 4; /*0x769896*/
                    --m_8; /*0x769899*/
                    *v25 = *v26; /*0x76989c*/
                    v25[1] = v26[1]; /*0x7698a1*/
                    v25[2] = v26[2]; /*0x7698a7*/
                    v25[3] = v26[3]; /*0x7698ad*/
                  }
                  while ( m_8 ); /*0x7698b0*/
                  abstractFlags = v55.?; /*0x7698b2*/
                }
                if ( BYTE1(v51.m_C) ) /*0x7698bc*/
                  __3_YAXPAX_Z(*(void **)&v51.m_1[3]); /*0x7698c3*/
              }
              *(_DWORD *)&v51.m_1[3] = v22; /*0x7698cb*/
              v51.m_8 = v11; /*0x7698cf*/
              BYTE1(v51.m_C) = 1; /*0x7698d3*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_VectorClass_V_TRect_H *))(*(_DWORD *)v51.__pad_0 + 12))(&v51); /*0x7698e2*/
          }
          v55.occupant = v55.owningHouseIndex; /*0x7698ed*/
          v55.? = &v51; /*0x7698fa*/
          v55.? = (int)&VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x7698fe*/
          if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x769902*/
          {
            do /*0x76993a*/
            {
              v27 = (_DWORD *)(16 * v55.occupant + *((_DWORD *)v55.? + 1)); /*0x76991e*/
              *v27 = 0; /*0x769920*/
              v27[1] = 0; /*0x769922*/
              v27[2] = 0; /*0x769925*/
              v27[3] = 0; /*0x769928*/
              (*(void (__thiscall **)(int *))(v55.? + 8))(&v55.?); /*0x76992f*/
            }
            while ( (*(unsigned __int8 (__thiscall **)(int *))(v55.? + 4))(&v55.?) ); /*0x76993a*/
          }
          v55.? = (int)&VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769941*/
        }
        v28 = *(_DWORD *)&v51.m_1[3] + 16 * abstractFlags; /*0x76994e*/
        v29 = *(_DWORD *)(v28 + 8); /*0x769950*/
        if ( !v29 ) /*0x769955*/
          *(_DWORD *)(v28 + 12) = 0; /*0x769957*/
        v30 = v49; /*0x76995c*/
        v9 = v50; /*0x769960*/
        if ( v49 >= *(_DWORD *)v28 && v49 < v29 + *(_DWORD *)v28 ) /*0x76996c*/
        {
          v31 = *(_DWORD *)(v28 + 4); /*0x76996e*/
          if ( v50 >= v31 && v50 < v31 + *(_DWORD *)(v28 + 12) ) /*0x76997c*/
            goto LABEL_66; /*0x76997c*/
        }
        attachedTag = 1; /*0x769982*/
        v33 = 1; /*0x769989*/
        if ( v29 > 0 && *(int *)(v28 + 12) > 0 ) /*0x769990*/
        {
          v34 = *(_DWORD *)v28; /*0x769994*/
          v35 = *(_DWORD *)v28 <= v49; /*0x769997*/
          v36 = *(_DWORD *)(v28 + 4); /*0x769999*/
          v37 = *(TagClass **)(v28 + 8); /*0x76999c*/
          v55.attachedTag = v37; /*0x76999f*/
          v55.attachedBomb = *(BombClass **)(v28 + 12); /*0x7699a6*/
          if ( !v35 ) /*0x7699aa*/
          {
            v37 = (TagClass *)((char *)v37 + v34 - v49); /*0x7699ae*/
            v34 = v49; /*0x7699b0*/
            v55.attachedTag = v37; /*0x7699b2*/
          }
          if ( v36 > v50 ) /*0x7699b8*/
          {
            v38 = (BombClass *)((char *)v55.attachedBomb + v36 - v50); /*0x7699c0*/
            v36 = v50; /*0x7699c2*/
            v55.attachedBomb = v38; /*0x7699c4*/
          }
          if ( (int)v37 + v34 < v49 + 1 ) /*0x7699cf*/
            v55.attachedTag = (TagClass *)(v49 - v34 + 2); /*0x7699d6*/
          attachedBomb = v55.attachedBomb; /*0x7699da*/
          if ( (int)v55.attachedBomb + v36 < v50 + 1 ) /*0x7699e6*/
            attachedBomb = (BombClass *)(v50 - v36 + 2); /*0x7699ed*/
          v9 = v36; /*0x7699ef*/
          v30 = v34; /*0x7699f1*/
          attachedTag = (int)v55.attachedTag; /*0x7699f3*/
          v33 = (int)attachedBomb; /*0x7699f7*/
        }
        *(_DWORD *)v28 = v30; /*0x7699fb*/
        *(_DWORD *)(v28 + 4) = v9; /*0x7699fd*/
        *(_DWORD *)(v28 + 8) = attachedTag; /*0x769a00*/
        *(_DWORD *)(v28 + 12) = v33; /*0x769a03*/
      }
      v9 = v50; /*0x769a06*/
      v30 = v49; /*0x769a0a*/
LABEL_66:
      vtable0 = v55.AbstractClass; /*0x769a0e*/
      v49 = v30 + 1; /*0x769a19*/
      if ( v30 + 1 >= v55.? ) /*0x769a1d*/
        goto LABEL_67; /*0x769a1d*/
    }
  }
LABEL_68:
  _769D70 = Map_Load_769D70(&v55.?, (int)&v51); /*0x769a34*/
  Map_Load_769C20((ObjectClass *)&v55.?, (int)_769D70); /*0x769a46*/
  v41 = 0; /*0x769a4f*/
  if ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ) /*0x769a55*/
  {
    v42 = 0; /*0x769a60*/
    do /*0x769b22*/
    {
      v43 = FormatStringInt((char **)&v55.owningHouseIndex, v41, 2); /*0x769a6a*/
      ConcatStringAlloc((char **)&v55, (const char **)v55.ambientSoundController[0], v43); /*0x769a78*/
      DeleteAndZero((ObjectClass *)&v55.owningHouseIndex); /*0x769a81*/
      FromStringInt((char **)&v55.?, (int)g_DisplayWidth); /*0x769a90*/
      _7694C0 = Map_Load_7694C0((ObjectClass *)((char *)Block + v42), &v55.?); /*0x769aa0*/
      v45 = (ObjectClass *)_7694C0[1]; /*0x769aa9*/
      v55.fallRate = *_7694C0; /*0x769aac*/
      v55.nextObject = v45; /*0x769ab0*/
      v46 = String::Assign((String *)&v55.?, aTarget_0); /*0x769acc*/
      v47 = String::Concat((String *)v46, (char **)&v55.?, (char **)&v55.?); /*0x769ad3*/
      INIClass::GetInt((char *)&v55.ambientSoundController[1], (char **)&v55, v47, &v55.fallRate); /*0x769ae2*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769aeb*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769af4*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x769b01*/
      ++v41; /*0x769b08*/
      v42 += 12; /*0x769b09*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769b0c*/
      DeleteAndZero(&v55); /*0x769b15*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769b22*/
  }
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)2); /*0x769b3b*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b4c*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aCodeWdtmapmdIn, (CHAR *)2); /*0x769b5f*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b70*/
  v55.? = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769b79*/
  *(_DWORD *)v51.__tail_10 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x769b81*/
  Map_WorldDominationTour_43::ddtor((int)v51.__tail_10); /*0x769b89*/
  *(_DWORD *)v51.__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x769b92*/
  MSEngine::ddtor(&v51); /*0x769b9a*/
  BufferIOFileClass::Destruct(&v56); /*0x769ba6*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v55.ambientSoundController[1]); /*0x769baf*/
  return BufferIOFileClass::Destruct((BufferIOFileClass *)&v55.needsRedraw); /*0x769bc0*/
}



// ==== 0x00769BD0  MSFrameAnim::QueryInterface  this=MSFrameAnim  sig=csp ====
_DWORD *__thiscall MSFrameAnim::QueryInterface(MSFrameAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x769bd3*/
  VtableStub::5CB6C0(this); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(this); /*0x769be6*/
  return this->__pad_0; /*0x769bf0*/
}



// ==== 0x00769C00  Map_WorldDominationTour::QueryInterface  this=Map@WorldDominationTour  sig=csp ====
void *__thiscall Map_WorldDominationTour::QueryInterface(Map_WorldDominationTour *this, char a2)
{
  WorldDomination::SetupTerritoryNodes((int)this); /*0x769c03*/
  if ( (a2 & 1) != 0 ) /*0x769c0d*/
    __3_YAXPAX_Z(this); /*0x769c10*/
  return this; /*0x769c1a*/
}



// ==== 0x00769C20  ObjectClass::Map_Load_769C20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Map_Load_769C20(ObjectClass *this, int a2)
{
  this->? = *(void **)(a2 + 4); /*0x769c29*/
  this->? = *(void **)(a2 + 8); /*0x769c2f*/
  return &this->AbstractClass; /*0x769c32*/
}



// ==== 0x00769C40  ObjectClass::??0Iostream_init_QAE_XZ_9  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_9(Iostream_init *this)
{
  return this; /*0x769c42*/
}



// ==== 0x00769C50  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::initAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::initAnimation(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769c56*/
  this->m_10 = 0; /*0x769c59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769c60*/
  {
    result = (**v2)(v2, 3); /*0x769c6d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769c6f*/
  }
  BYTE1(this->m_C) = 0; /*0x769c72*/
  this->m_8 = 0; /*0x769c75*/
  return result; /*0x769c78*/
}



// ==== 0x00769C80  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::startAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::startAnimation(
        _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769c80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x769c95*/
  else
    return 0; /*0x769c87*/
}



// ==== 0x00769CA0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::Seek(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x769cad*/
  ComPtr::Constructor((ComPtr *)a2); /*0x769cb2*/
  *a2 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769cb7*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x769cc3*/
  return a2; /*0x769cca*/
}



// ==== 0x00769CD0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::stopAnimation  this=DynamicVector  sig=csp ====
void __thiscall MSFrameAnim::stopAnimation(_DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x769cd6*/
  this->m_10 = 0; /*0x769cd9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769ce0*/
  {
    __3_YAXPAX_Z(v2); /*0x769ce6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769cee*/
  }
  BYTE1(this->m_C) = 0; /*0x769cf1*/
  this->m_8 = 0; /*0x769cf4*/
}



// ==== 0x00769D00  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::pauseAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::pauseAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769d00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x769d15*/
  else
    return 0; /*0x769d07*/
}



// ==== 0x00769D20  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28::Seek(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x769d2a*/
}



// ==== 0x00769D30  _VectorClass_VCentroid_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_43::Seek(
        _VectorClass_VCentroid_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x769d3b*/
  *a2 = *v3; /*0x769d46*/
  a2[1] = v3[1]; /*0x769d4b*/
  a2[2] = v3[2]; /*0x769d52*/
  return a2; /*0x769d4e*/
}



// ==== 0x00769D60  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Map_WorldDominationTour_38::AddRef(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8); /*0x769d6d*/
}



// ==== 0x00769D70  Map_Load_769D70  this=VectorCursor  sig=csp ====
_DWORD *__fastcall sub_769D70(_DWORD *a1, int a2)
{
  a1[1] = a2; /*0x769d72*/
  a1[2] = 0; /*0x769d75*/
  *a1 = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769d7c*/
  return a1; /*0x769d82*/
}



// ==== 0x00769D90  MSFrameAnim::resumeAnimation  this=rc_ptr  sig=csp ====
_DWORD *__thiscall MSFrameAnim::resumeAnimation(MSFrameAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x769d93*/
  ComPtr::Release((ComPtr *)this); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(this); /*0x769da6*/
  return this->__pad_0; /*0x769db0*/
}



// ==== 0x00769DC0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Constructor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::Constructor(
        _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769dc9*/
  if ( (a2 & 1) != 0 ) /*0x769dcf*/
    __3_YAXPAX_Z(this); /*0x769dd2*/
  return this->__pad_0; /*0x769ddc*/
}



// ==== 0x00769DE0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20::AddRef(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x769de6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x769def*/
  {
    v3 = 0; /*0x769df1*/
    if ( m_8 <= 0 ) /*0x769df5*/
      return 1; /*0x769e1b*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x769dfd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x769e00*/
    {
      ++v3; /*0x769e0b*/
      v4 += 2; /*0x769e0f*/
      if ( v3 >= m_8 ) /*0x769e14*/
        return 1; /*0x769e14*/
    }
  }
  return 0; /*0x769e16*/
}



// ==== 0x00769E30  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20::Release(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769e33*/
  if ( !a2 ) /*0x769e3d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x769f3d*/
    return 1; /*0x769f43*/
  }
  LOBYTE(this->m_C) = 0; /*0x769e47*/
  if ( a3 ) /*0x769e4d*/
  {
    *a3 = a2; /*0x769e93*/
    v6 = (ComPtr *)(a3 + 1); /*0x769e95*/
    if ( a2 - 1 >= 0 ) /*0x769ea1*/
    {
      v9 = a2; /*0x769ea3*/
      do /*0x769eb7*/
      {
        ComPtr::Constructor(v6); /*0x769ea8*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769ead*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769eb3*/
        --v9; /*0x769eb6*/
      }
      while ( v9 ); /*0x769eb7*/
      v6 = (ComPtr *)(a3 + 1); /*0x769eb9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x769e57*/
    if ( !v5 ) /*0x769e61*/
    {
      v8 = 0; /*0x769e8f*/
      goto LABEL_14; /*0x769e91*/
    }
    *v5 = a2; /*0x769e63*/
    v6 = (ComPtr *)(v5 + 1); /*0x769e65*/
    v13 = (ComPtr *)(v5 + 1); /*0x769e6b*/
    if ( a2 - 1 >= 0 ) /*0x769e71*/
    {
      v7 = a2; /*0x769e73*/
      do /*0x769e87*/
      {
        ComPtr::Constructor(v6); /*0x769e78*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769e7d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769e83*/
        --v7; /*0x769e86*/
      }
      while ( v7 ); /*0x769e87*/
      v6 = v13; /*0x769e89*/
    }
  }
  v8 = v6; /*0x769ebd*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x769ebf*/
  if ( !v8 ) /*0x769ec5*/
    return 0; /*0x769eca*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x769ed1*/
  {
    if ( a2 >= this->m_8 ) /*0x769edd*/
      m_8 = this->m_8; /*0x769edf*/
    for ( i = 0; i < m_8; ++i ) /*0x769ee5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x769ef2*/
    if ( BYTE1(this->m_C) ) /*0x769efc*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769f03*/
      if ( v12 ) /*0x769f08*/
        (**v12)(v12, 3); /*0x769f0e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x769f10*/
    }
    m_8 = a2; /*0x769f17*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x769f26*/
  this->m_8 = m_8; /*0x769f29*/
  BYTE1(this->m_C) = a3 == 0; /*0x769f2c*/
  return 1; /*0x769ec7*/
}



// ==== 0x00769F50  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20::ddtor(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769f56*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769f5d*/
  {
    result = (**v2)(v2, 3); /*0x769f6a*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769f6c*/
  }
  BYTE1(this->m_C) = 0; /*0x769f6f*/
  this->m_8 = 0; /*0x769f72*/
  return result; /*0x769f75*/
}



// ==== 0x00769F80  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20::Read(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x769f80*/
    return 0; /*0x769f88*/
  m_8 = this->m_8; /*0x769f8e*/
  result = 0; /*0x769f91*/
  if ( m_8 <= 0 ) /*0x769f95*/
    return -1; /*0x769fb0*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x769f9e*/
  {
    if ( ++result >= m_8 ) /*0x769fae*/
      return -1; /*0x769fae*/
  }
  return result; /*0x769f8a*/
}



// ==== 0x00769FC0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_20::Write(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x769fd5*/
  else
    return 0; /*0x769fc7*/
}



// ==== 0x00769FE0  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setFrameRate  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::setFrameRate(
        _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  MSFrameAnim *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
    LOBYTE(this->m_C) = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      v8 = (ComPtr *)(a3 + 1); /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ComPtr::Constructor(v8); /*0x76a056*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a05b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76a061*/
          --v9; /*0x76a064*/
        }
        while ( v9 ); /*0x76a065*/
        v8 = (ComPtr *)(a3 + 1); /*0x76a067*/
      }
      v6 = v8; /*0x76a06b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = (ComPtr *)(v5 + 1); /*0x76a015*/
        v7 = (MSFrameAnim *)(v5 + 1); /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          v14 = a2; /*0x76a022*/
          do /*0x76a039*/
          {
            MSFrameAnim::drawFrame(v7); /*0x76a028*/
            v7 = (MSFrameAnim *)((char *)v7 + 8); /*0x76a031*/
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
    LOBYTE(this->m_C) = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76a075*/
    {
      if ( a2 >= this->m_8 ) /*0x76a081*/
        m_8 = this->m_8; /*0x76a083*/
      for ( i = 0; i < m_8; ++i ) /*0x76a089*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76a096*/
      if ( BYTE1(this->m_C) ) /*0x76a0a0*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76a0b4*/
      }
      m_8 = a2; /*0x76a0bb*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x76a0ca*/
    this->m_8 = m_8; /*0x76a0cd*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a0d9*/
  }
  v12 = this->m_8; /*0x76a0dc*/
  if ( v12 < this->m_10 ) /*0x76a0e4*/
    this->m_10 = v12; /*0x76a0e6*/
  return 1; /*0x76a0e9*/
}



// ==== 0x0076A100  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::getCurrentFrame  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::getCurrentFrame(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76a100*/
  result = 0; /*0x76a103*/
  if ( m_10 <= 0 ) /*0x76a108*/
    return -1; /*0x76a123*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76a111*/
  {
    if ( ++result >= m_10 ) /*0x76a121*/
      return -1; /*0x76a121*/
  }
  return result; /*0x76a126*/
}



// ==== 0x0076A130  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28::AddRef(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x76a132*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76a13d*/
  {
    v3 = 0; /*0x76a13f*/
    if ( m_8 <= 0 ) /*0x76a143*/
      return 1; /*0x76a163*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x76a145*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76a14b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x76a154*/
    {
      ++v3; /*0x76a156*/
      ++v4; /*0x76a157*/
      if ( v3 >= m_8 ) /*0x76a15c*/
        return 1; /*0x76a15c*/
    }
  }
  return 0; /*0x76a15e*/
}



// ==== 0x0076A170  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28::Release(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x76a17c*/
  {
    LOBYTE(this->m_C) = 0; /*0x76a186*/
    if ( a3 ) /*0x76a18c*/
      v4 = a3; /*0x76a1a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76a19e*/
    LOBYTE(this->m_C) = 1; /*0x76a1a6*/
    if ( v4 ) /*0x76a1aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x76a1b5*/
      {
        m_8 = this->m_8; /*0x76a1bc*/
        if ( a2 < m_8 ) /*0x76a1c1*/
          m_8 = a2; /*0x76a1c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76a1c9*/
          ++i; /*0x76a1ce*/
        if ( BYTE1(this->m_C) ) /*0x76a1db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a1e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76a1ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x76a1f7*/
      this->m_8 = a2; /*0x76a1ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x76a202*/
      return 1; /*0x76a208*/
    }
    else
    {
      return 0; /*0x76a1af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a212*/
    return 1; /*0x76a218*/
  }
}



// ==== 0x0076A220  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_28::ddtor(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76a22d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a233*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a23b*/
  }
  BYTE1(this->m_C) = 0; /*0x76a23e*/
  this->m_8 = 0; /*0x76a241*/
}



// ==== 0x0076A250  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28::Read(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76a250*/
    return 0; /*0x76a258*/
  m_8 = this->m_8; /*0x76a25e*/
  result = 0; /*0x76a261*/
  if ( m_8 <= 0 ) /*0x76a265*/
    return -1; /*0x76a27c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76a26b*/
  {
    if ( ++result >= m_8 ) /*0x76a27a*/
      return -1; /*0x76a27a*/
  }
  return result; /*0x76a25a*/
}



// ==== 0x0076A290  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_28::Write(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76a290*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x76a2a5*/
  else
    return 0; /*0x76a297*/
}



// ==== 0x0076A2B0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::loopAnimation  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::loopAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x76a2bc*/
  {
    LOBYTE(this->m_C) = 0; /*0x76a2c2*/
    if ( a3 ) /*0x76a2c8*/
      v4 = a3; /*0x76a2de*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76a2da*/
    LOBYTE(this->m_C) = 1; /*0x76a2e2*/
    if ( !v4 ) /*0x76a2e6*/
      return 0; /*0x76a35a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76a2e8*/
    {
      m_8 = this->m_8; /*0x76a2ef*/
      if ( a2 < m_8 ) /*0x76a2f4*/
        m_8 = a2; /*0x76a2f6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76a2fc*/
        ++i; /*0x76a301*/
      if ( BYTE1(this->m_C) ) /*0x76a30e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a319*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76a321*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x76a32a*/
    this->m_8 = a2; /*0x76a332*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a335*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *))(*(_DWORD *)this->__pad_0 /*0x76a33e*/
                                                                                              + 12))(this);
  }
  v7 = this->m_8; /*0x76a341*/
  if ( v7 < this->m_10 ) /*0x76a349*/
    this->m_10 = v7; /*0x76a34b*/
  return 1; /*0x76a34e*/
}



// ==== 0x0076A360  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::resetAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::resetAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76a360*/
  result = 0; /*0x76a363*/
  if ( m_10 <= 0 ) /*0x76a368*/
    return -1; /*0x76a37f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76a36e*/
  {
    if ( ++result >= m_10 ) /*0x76a37d*/
      return -1; /*0x76a37d*/
  }
  return result; /*0x76a382*/
}



// ==== 0x0076A390  _VectorClass_VCentroid_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43::AddRef(_VectorClass_VCentroid_WorldDominationTour *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x76a39b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76a3a0*/
  {
    v3 = 0; /*0x76a3a2*/
    if ( m_8 <= 0 ) /*0x76a3a6*/
      return 1; /*0x76a3e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x76a3a8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x76a3ab*/
    v6 = (_DWORD *)(v4 + 8); /*0x76a3ae*/
    v7 = v4 - (_DWORD)v5; /*0x76a3b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x76a3cd*/
    {
      ++v3; /*0x76a3cf*/
      v6 += 3; /*0x76a3d0*/
      v5 += 3; /*0x76a3d3*/
      if ( v3 >= m_8 ) /*0x76a3d8*/
        return 1; /*0x76a3d8*/
    }
  }
  return 0; /*0x76a3da*/
}



// ==== 0x0076A3F0  _VectorClass_VCentroid_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43::Release(_VectorClass_VCentroid_WorldDominationTour *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x76a3f2*/
  if ( a2 ) /*0x76a3fe*/
  {
    v5 = a3; /*0x76a404*/
    LOBYTE(this->m_C) = 0; /*0x76a408*/
    if ( a3 ) /*0x76a40d*/
    {
      if ( a2 - 1 >= 0 ) /*0x76a449*/
      {
        v9 = a3 + 8; /*0x76a44b*/
        v10 = a2; /*0x76a44e*/
        do /*0x76a45b*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x76a44f*/
          *((_DWORD *)v9 - 1) = 0; /*0x76a452*/
          *(_DWORD *)v9 = 0; /*0x76a455*/
          v9 += 12; /*0x76a457*/
          --v10; /*0x76a45a*/
        }
        while ( v10 ); /*0x76a45b*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(12 * a2); /*0x76a417*/
      if ( v6 ) /*0x76a421*/
      {
        if ( a2 - 1 >= 0 ) /*0x76a428*/
        {
          v7 = (_DWORD *)(v6 + 8); /*0x76a42a*/
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
        v5 = (char *)v6; /*0x76a43c*/
      }
      else
      {
        v5 = 0; /*0x76a440*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x76a45f*/
    if ( v5 ) /*0x76a463*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x76a46e*/
      {
        m_8 = this->m_8; /*0x76a473*/
        if ( a2 < m_8 ) /*0x76a478*/
          m_8 = a2; /*0x76a47a*/
        if ( m_8 > 0 ) /*0x76a47e*/
        {
          v13 = 0; /*0x76a480*/
          do /*0x76a4a0*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x76a487*/
            v15 = &v5[v13]; /*0x76a489*/
            v13 += 12; /*0x76a48c*/
            --m_8; /*0x76a48f*/
            *(_DWORD *)v15 = *v14; /*0x76a492*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x76a497*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x76a49d*/
          }
          while ( m_8 ); /*0x76a4a0*/
          v3 = a2; /*0x76a4a2*/
        }
        if ( BYTE1(this->m_C) ) /*0x76a4a8*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a4b1*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76a4b9*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x76a4c4*/
      this->m_8 = v3; /*0x76a4ca*/
      BYTE1(this->m_C) = a3 == 0; /*0x76a4cd*/
      return 1; /*0x76a4d3*/
    }
    else
    {
      return 0; /*0x76a468*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VCentroid_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a4dd*/
    return 1; /*0x76a4e3*/
  }
}



// ==== 0x0076A4F0  _VectorClass_VCentroid_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_43::ddtor(_VectorClass_VCentroid_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76a4fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a503*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a50b*/
  }
  BYTE1(this->m_C) = 0; /*0x76a50e*/
  this->m_8 = 0; /*0x76a511*/
}



// ==== 0x0076A520  _VectorClass_VCentroid_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_43::Read(_VectorClass_VCentroid_WorldDominationTour *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76a520*/
    return 0; /*0x76a52e*/
  m_8 = this->m_8; /*0x76a534*/
  result = 0; /*0x76a537*/
  if ( m_8 <= 0 ) /*0x76a53b*/
    return -1; /*0x76a566*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x76a541*/
  {
    if ( ++result >= m_8 ) /*0x76a564*/
      return -1; /*0x76a564*/
  }
  return result; /*0x76a52b*/
}



// ==== 0x0076A570  _VectorClass_VCentroid_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_43::Write(_VectorClass_VCentroid_WorldDominationTour *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76a570*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x76a58e*/
  else
    return 0; /*0x76a577*/
}



// ==== 0x0076A5A0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38::Release(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  ++this->q008; /*0x76a5a2*/
  return this->__pad_0; /*0x76a5a5*/
}



// ==== 0x0076A5B0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38::ddtor(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  --this->q008; /*0x76a5b2*/
  return this->__pad_0; /*0x76a5b5*/
}



// ==== 0x0076A5C0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::QueryInterface(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a5c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a5c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a5d0*/
  {
    (**v3)(v3, 3); /*0x76a5df*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a5e1*/
  }
  BYTE1(this->m_C) = 0; /*0x76a5ec*/
  this->m_8 = 0; /*0x76a5f2*/
  if ( (a2 & 1) != 0 ) /*0x76a5f9*/
    __3_YAXPAX_Z(this); /*0x76a5fc*/
  return this->__pad_0; /*0x76a606*/
}



// ==== 0x0076A610  Map_WorldDominationTour::Constructor_0  this=Map_WorldDominationTour  sig=csp ====
ComPtr *__thiscall Map_WorldDominationTour_20::Constructor_0(Map_WorldDominationTour *this, char a2)
{
  int v3; // eax
  ComPtr *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76a61b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x76a61d*/
    v4 = (ComPtr *)(this - 1); /*0x76a621*/
    v5 = (ComPtr *)(this + 2 * v3); /*0x76a624*/
    v6 = v3 - 1; /*0x76a627*/
    if ( v6 >= 0 ) /*0x76a628*/
    {
      v7 = v6 + 1; /*0x76a62b*/
      do /*0x76a63f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76a62e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a633*/
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
    *this = (Map_WorldDominationTour)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a65a*/
    ComPtr::Release((ComPtr *)this); /*0x76a660*/
    if ( (a2 & 1) != 0 ) /*0x76a668*/
      __3_YAXPAX_Z(this); /*0x76a66b*/
    return (ComPtr *)this; /*0x76a673*/
  }
}



// ==== 0x0076A680  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setPosition  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFrameAnim::setPosition(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a690*/
  {
    (**v3)(v3, 3); /*0x76a69f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a6a1*/
  }
  BYTE1(this->m_C) = 0; /*0x76a6ac*/
  this->m_8 = 0; /*0x76a6b2*/
  if ( (a2 & 1) != 0 ) /*0x76a6b9*/
    __3_YAXPAX_Z(this); /*0x76a6bc*/
  return this->__pad_0; /*0x76a6c6*/
}



// ==== 0x0076A6D0  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_28::QueryInterface(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a6d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76a6d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x76a6e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a6f0*/
  }
  BYTE1(this->m_C) = 0; /*0x76a6fb*/
  this->m_8 = 0; /*0x76a701*/
  if ( (a2 & 1) != 0 ) /*0x76a708*/
    __3_YAXPAX_Z(this); /*0x76a70b*/
  return this->__pad_0; /*0x76a715*/
}



// ==== 0x0076A720  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::setScale  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFrameAnim::setScale(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a723*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76a726*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a730*/
  {
    __3_YAXPAX_Z(v3); /*0x76a738*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a740*/
  }
  BYTE1(this->m_C) = 0; /*0x76a74b*/
  this->m_8 = 0; /*0x76a751*/
  if ( (a2 & 1) != 0 ) /*0x76a758*/
    __3_YAXPAX_Z(this); /*0x76a75b*/
  return this->__pad_0; /*0x76a765*/
}



// ==== 0x0076A770  _VectorClass_VCentroid_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_43::QueryInterface(
        _VectorClass_VCentroid_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a773*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x76a776*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a780*/
  {
    __3_YAXPAX_Z(v3); /*0x76a788*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a790*/
  }
  BYTE1(this->m_C) = 0; /*0x76a79b*/
  this->m_8 = 0; /*0x76a7a1*/
  if ( (a2 & 1) != 0 ) /*0x76a7a8*/
    __3_YAXPAX_Z(this); /*0x76a7ab*/
  return this->__pad_0; /*0x76a7b5*/
}



// ==== 0x0076A7C0  MSFrameAnim::drawFrame  this=rc_ptr  sig=csp ====
_DWORD *__thiscall MSFrameAnim::drawFrame(MSFrameAnim *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76a7c3*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a7c8*/
  return this->__pad_0; /*0x76a7d0*/
}



// ==== 0x0076A7E0  ObjectClass::ConstructWDTSelection_Create_767FB0_Create_Create  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_767FB0_Create_Create(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = a2; /*0x76a7e3*/
  this->? = 0; /*0x76a7ec*/
  this->? = (void *)a2; /*0x76a7f3*/
  LOBYTE(this->?) = 1; /*0x76a7f6*/
  BYTE1(this->?) = 0; /*0x76a7fa*/
  this->AbstractClass = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a7fe*/
  if ( !a2 ) /*0x76a805*/
    return &this->AbstractClass; /*0x76a805*/
  if ( !a3 ) /*0x76a811*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76a84b*/
    if ( v7 ) /*0x76a855*/
    {
      *v7 = a2; /*0x76a857*/
      v8 = v7 + 1; /*0x76a859*/
      v9 = (ComPtr *)(v7 + 1); /*0x76a85f*/
      if ( a2 - 1 >= 0 ) /*0x76a863*/
      {
        do /*0x76a879*/
        {
          ComPtr::Constructor(v9); /*0x76a86a*/
          *(_DWORD *)v9->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a86f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x76a875*/
          --v3; /*0x76a878*/
        }
        while ( v3 ); /*0x76a879*/
        this->? = v8; /*0x76a87c*/
        BYTE1(this->?) = 1; /*0x76a87f*/
        return &this->AbstractClass; /*0x76a888*/
      }
    }
    else
    {
      v8 = 0; /*0x76a88b*/
    }
    this->? = v8; /*0x76a88d*/
    BYTE1(this->?) = 1; /*0x76a890*/
    return &this->AbstractClass; /*0x76a895*/
  }
  *a3 = a2; /*0x76a813*/
  v5 = (ComPtr *)(a3 + 1); /*0x76a81b*/
  if ( a2 - 1 >= 0 ) /*0x76a81f*/
  {
    do /*0x76a835*/
    {
      ComPtr::Constructor(v5); /*0x76a826*/
      *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a82b*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x76a831*/
      --v3; /*0x76a834*/
    }
    while ( v3 ); /*0x76a835*/
  }
  this->? = a3 + 1; /*0x76a838*/
  return &this->AbstractClass; /*0x76a837*/
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
_DWORD *__thiscall ParseWDTTerritories_Parse(ObjectClass *this)
{
  this->? = 0; /*0x76aaf7*/
  this->AbstractClass = &off_7F7220; /*0x76aafa*/
  this->? = 0; /*0x76ab00*/
  BYTE2(this->?) = 10; /*0x76ab03*/
  HIBYTE(this->?) = 10; /*0x76ab06*/
  LOWORD(this->?) = 10000; /*0x76ab09*/
  LOWORD(this->?) = 0; /*0x76ab0f*/
  BYTE1(this->?) = 0; /*0x76ab13*/
  BYTE2(this->?) = 0; /*0x76ab16*/
  HIBYTE(this->?) = 0; /*0x76ab19*/
  BYTE2(this->?) = 0; /*0x76ab1e*/
  BYTE1(this->occupant) = 0; /*0x76ab21*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x76ab24*/
  BYTE2(this->fallRate) = 0; /*0x76ab27*/
  BYTE1(this->nextObject) = 0; /*0x76ab2a*/
  LOBYTE(this->attachedTag) = 0; /*0x76ab2d*/
  LOBYTE(this->?) = 100; /*0x76ab35*/
  HIBYTE(this->?) = 100; /*0x76ab38*/
  BYTE2(this->occupant) = 100; /*0x76ab3b*/
  BYTE1(this->owningHouseIndex) = 100; /*0x76ab3e*/
  LOBYTE(this->fallRate) = 100; /*0x76ab41*/
  HIBYTE(this->fallRate) = 100; /*0x76ab44*/
  BYTE2(this->nextObject) = 100; /*0x76ab47*/
  BYTE1(this->attachedTag) = 100; /*0x76ab4a*/
  BYTE2(this->?) = 1; /*0x76ab4d*/
  HIBYTE(this->?) = 1; /*0x76ab51*/
  LOBYTE(this->?) = 2; /*0x76ab55*/
  LOBYTE(this->?) = 1; /*0x76ab59*/
  BYTE1(this->?) = 50; /*0x76ab5d*/
  LOBYTE(this->occupant) = 50; /*0x76ab60*/
  HIBYTE(this->occupant) = 50; /*0x76ab63*/
  BYTE2(this->owningHouseIndex) = 50; /*0x76ab66*/
  HIBYTE(this->owningHouseIndex) = 1; /*0x76ab69*/
  BYTE1(this->fallRate) = 50; /*0x76ab6d*/
  LOBYTE(this->nextObject) = 50; /*0x76ab70*/
  HIBYTE(this->nextObject) = 50; /*0x76ab73*/
  BYTE2(this->attachedTag) = 50; /*0x76ab76*/
  this->attachedBomb = (BombClass *)-1; /*0x76ab79*/
  this->ambientSoundController[0] = -1; /*0x76ab7c*/
  return &this->AbstractClass; /*0x76ab7f*/
}



// ==== 0x0076AB90  WDTTerritory::method_76AB90  this=WDTTerritory  sig=csp ====
void __thiscall sub_76AB90(WDTTerritory *this)
{
  this->m_0 = (int)&off_7F7220; /*0x76ab90*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76ab96*/
}



// ==== 0x0076ABA0  rc_ptr::Audio_Set  this=rc_ptr  sig=csp ====
_DWORD *__fastcall Audio_Set(rc_ptr *this, void *a2)
{
  char *v4; // eax
  char *WDT; // edi

  v4 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x76aba8*/
  if ( v4 ) /*0x76abb2*/
    WDT = File::LoadWDT(v4, a2); /*0x76abbc*/
  else
    WDT = 0; /*0x76abc0*/
  ComPtr::Constructor((ComPtr *)this); /*0x76abc4*/
  *(_DWORD *)this = &rc_ptr<WDTState>::`vftable'; /*0x76abcb*/
  ComPtr::Set((ComPtr *)this, (int)WDT); /*0x76abd2*/
  return this; /*0x76abd9*/
}



// ==== 0x0076ABE0  WDTState::method_76ABE0  this=WDTState  sig=csp ====
_DWORD *__thiscall sub_76ABE0(WDTState *this)
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

  v2 = (char *)this + 44; /*0x76abef*/
  this->WDTState_field_0x04 = 0; /*0x76abf2*/
  v13 = 10; /*0x76abf7*/
  this->q004 = 10; /*0x76abfb*/
  *((_BYTE *)this + 56) = 1; /*0x76ac02*/
  v10 = 1; /*0x76ac05*/
  *((_DWORD *)this + 12) = 0; /*0x76ac09*/
  *((_DWORD *)this + 13) = 0; /*0x76ac0c*/
  *((_BYTE *)this + 57) = 0; /*0x76ac0f*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac12*/
  *((_DWORD *)this + 15) = 0; /*0x76ac18*/
  *(_DWORD *)this->__pad_0 = &WDTState::`vftable'; /*0x76ac1e*/
  *((_BYTE *)this + 20) = 0; /*0x76ac24*/
  *((_DWORD *)this + 6) = 0; /*0x76ac27*/
  *((_DWORD *)this + 8) = 0; /*0x76ac2a*/
  *((_DWORD *)this + 9) = 0; /*0x76ac2d*/
  *((_DWORD *)this + 10) = 1000000; /*0x76ac30*/
  v8 = 0; /*0x76ac37*/
  v9 = 0; /*0x76ac3b*/
  v11 = 0; /*0x76ac3f*/
  v7 = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac43*/
  v12 = 0; /*0x76ac4b*/
  sub_76B7B0((ObjectClass *)((char *)this + 44), &v7); /*0x76ac4f*/
  v3 = v13; /*0x76ac58*/
  *((_DWORD *)v2 + 4) = v12; /*0x76ac5c*/
  v4 = v8; /*0x76ac5f*/
  v5 = v8 == 0; /*0x76ac63*/
  *((_DWORD *)v2 + 5) = v3; /*0x76ac65*/
  v7 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac68*/
  if ( !v5 && v11 ) /*0x76ac76*/
    (**v4)(v4, 3); /*0x76ac7c*/
  *((_DWORD *)this + 17) = 0; /*0x76ac7e*/
  return this->__pad_0; /*0x76ac83*/
}



// ==== 0x0076AC90  File::LoadWDT  this=WDTState  sig=csp ====
char *__thiscall File::LoadWDT(char *this, u_short *a2)
{
  File *v3; // eax
  u_short *PaletteData; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // eax
  size_t v8; // ecx
  int v9; // eax
  size_t v10; // edx
  void *v11; // edi
  size_t v13; // [esp+10h] [ebp-1Ch] BYREF
  size_t v14; // [esp+14h] [ebp-18h] BYREF
  size_t Size; // [esp+18h] [ebp-14h] BYREF
  size_t v16; // [esp+1Ch] [ebp-10h] BYREF
  size_t v17; // [esp+20h] [ebp-Ch] BYREF
  void *Block; // [esp+24h] [ebp-8h]
  unsigned int v19; // [esp+28h] [ebp-4h] BYREF
  u_short *v20; // [esp+30h] [ebp+4h]

  this->q004 = 0; /*0x76ac9b*/
  *((_DWORD *)this + 12) = 0; /*0x76ac9e*/
  *((_DWORD *)this + 13) = 0; /*0x76aca1*/
  *(this + 56) = 1; /*0x76aca4*/
  *(this + 57) = 0; /*0x76aca8*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76acab*/
  this->q004 = 10; /*0x76acb2*/
  *((_DWORD *)this + 15) = 0; /*0x76acb9*/
  *(_DWORD *)this = &WDTState::`vftable'; /*0x76acbe*/
  v3 = (File *)__2_YAPAXI_Z(0xCu); /*0x76acc4*/
  if ( v3 ) /*0x76acce*/
    PaletteData = File::LoadPaletteData(v3, a2); /*0x76acdc*/
  else
    PaletteData = 0; /*0x76ace0*/
  v5 = this + 28; /*0x76ace6*/
  v13 = 0; /*0x76acf2*/
  v14 = 0; /*0x76acf6*/
  Size = 0; /*0x76acfa*/
  v16 = 0; /*0x76acfe*/
  v17 = 0; /*0x76ad02*/
  v19 = 0; /*0x76ad06*/
  *((_DWORD *)this + 2) = 0; /*0x76ad0a*/
  *((_DWORD *)this + 3) = 0; /*0x76ad0d*/
  this->q004 = 0; /*0x76ad10*/
  *(this + 20) = 0; /*0x76ad13*/
  *((_DWORD *)this + 6) = 0; /*0x76ad16*/
  *((_DWORD *)this + 7) = 0; /*0x76ad19*/
  *((_DWORD *)this + 8) = 0; /*0x76ad1b*/
  *((_DWORD *)this + 9) = 0; /*0x76ad1e*/
  *((_DWORD *)this + 10) = 0; /*0x76ad21*/
  *((_DWORD *)this + 17) = 0; /*0x76ad24*/
  if ( (unsigned __int8)HashTable::FindChunk((HashTable *)PaletteData, aNack, 0, &v19) ) /*0x76ad27*/
  {
    if ( PaletteData ) /*0x76ad32*/
    {
LABEL_25:
      ResultNode::CleanupList((ResultNode *)PaletteData); /*0x76afa4*/
      __3_YAXPAX_Z(PaletteData); /*0x76afac*/
    }
  }
  else
  {
    if ( (unsigned __int8)HashTable::FindString((HashTable *)PaletteData, aTotk, (_DWORD *)this + 7) ) /*0x76ad45*/
    {
      v6 = *(_DWORD *)v5; /*0x76ad4e*/
      *(this + 72) = 1; /*0x76ad50*/
      *(_DWORD *)v5 = ++v6; /*0x76ad55*/
      *((_DWORD *)this + 9) = v6; /*0x76ad59*/
    }
    else
    {
      *(this + 72) = 0; /*0x76ad69*/
      HashTable::FindString((HashTable *)PaletteData, aCrtk, (_DWORD *)this + 9); /*0x76ad6c*/
      ++*((_DWORD *)this + 9); /*0x76ad7d*/
      HashTable::FindString((HashTable *)PaletteData, aCyln, (_DWORD *)this + 7); /*0x76ad80*/
      ++*(_DWORD *)v5; /*0x76ad85*/
    }
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, 0, &v17); /*0x76ad94*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, 0, &Size); /*0x76ada6*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, 0, &v16); /*0x76adb8*/
    if ( !*(this + 72) ) /*0x76adbd*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, 0, &v13); /*0x76adcf*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, 0, &v14); /*0x76ade1*/
    *((_DWORD *)this + 2) = __2_YAPAXI_Z(Size); /*0x76adf0*/
    v7 = __2_YAPAXI_Z(v16); /*0x76adf8*/
    v8 = v17; /*0x76adfd*/
    *((_DWORD *)this + 3) = v7; /*0x76ae01*/
    v9 = __2_YAPAXI_Z(v8); /*0x76ae05*/
    v10 = v14; /*0x76ae0a*/
    this->q004 = v9; /*0x76ae0e*/
    Block = (void *)__2_YAPAXI_Z(v10); /*0x76ae17*/
    v20 = 0; /*0x76ae23*/
    if ( !*(this + 72) ) /*0x76ae1b*/
    {
      v20 = (u_short *)__2_YAPAXI_Z(v13); /*0x76ae40*/
      memset(v20, 0, v13); /*0x76ae47*/
    }
    memset(*((void **)this + 2), 0, Size); /*0x76ae5e*/
    memset(*((void **)this + 3), 0, v16); /*0x76ae75*/
    memset(*((void **)this + 4), 0, v17); /*0x76ae8c*/
    memset(Block, 0, v14); /*0x76aea4*/
    File::FindByPrefix((File *)PaletteData, aCmid, this + 20); /*0x76aeb8*/
    HashTable::FindString((HashTable *)PaletteData, aCyid, (_DWORD *)this + 6); /*0x76aec8*/
    if ( *(this + 72) ) /*0x76aecd*/
      *((_DWORD *)this + 10) = 0; /*0x76aed2*/
    else
      HashTable::FindString((HashTable *)PaletteData, aTicc, (_DWORD *)this + 10); /*0x76aee2*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, *((void **)this + 2), &Size); /*0x76aef7*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, *((void **)this + 3), &v16); /*0x76af0c*/
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, *((void **)this + 4), &v17); /*0x76af21*/
    if ( !*(this + 72) ) /*0x76af26*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, v20, &v13); /*0x76af3c*/
    v11 = Block; /*0x76af41*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, Block, &v14); /*0x76af52*/
    if ( *(this + 72) ) /*0x76af57*/
      *((_DWORD *)this + 8) = 30; /*0x76af6f*/
    else
      ParseWDTTerritories((int)this, (int)v20, v13); /*0x76af68*/
    File::LoadWDTDecompress((File *)this, (int)v11, v14); /*0x76af7e*/
    __3_YAXPAX_Z(v11); /*0x76af84*/
    if ( !*(this + 72) ) /*0x76af89*/
      __3_YAXPAX_Z(v20); /*0x76af98*/
    if ( PaletteData ) /*0x76afa2*/
      goto LABEL_25; /*0x76afa2*/
  }
  return this; /*0x76afb6*/
}



// ==== 0x0076AFC0  WDTState::Constructor_WDTState  this=WDTState  sig=csp ====
void __thiscall WDTState::Constructor_WDTState(ReferenceCounted *this)
{
  int v2; // eax
  ReferenceCounted *v3; // ebp
  int i; // edi
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 11); /*0x76afc4*/
  v3 = this + 11; /*0x76afc7*/
  *this = (ReferenceCounted)&WDTState::`vftable'; /*0x76afcc*/
  (*(void (__thiscall **)(ReferenceCounted *))(v2 + 12))(this + 11); /*0x76afd2*/
  if ( *((_DWORD *)this + 3) ) /*0x76afd5*/
    __3_YAXPAX_Z(*((void **)this + 3)); /*0x76afdd*/
  if ( *((_DWORD *)this + 2) ) /*0x76afe5*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x76afed*/
  if ( this->q004 ) /*0x76aff5*/
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x76affd*/
  if ( *((_DWORD *)this + 17) ) /*0x76b005*/
  {
    for ( i = 0; i < *((_DWORD *)this + 9); ++i ) /*0x76b014*/
    {
      v5 = *((_DWORD *)this + 17); /*0x76b016*/
      if ( *(_DWORD *)(v5 + 4 * i) ) /*0x76b019*/
        __3_YAXPAX_Z(*(void **)(v5 + 4 * i)); /*0x76b021*/
    }
    __3_YAXPAX_Z(*((void **)this + 17)); /*0x76b035*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))v3[1]; /*0x76b03e*/
  *v3 = (ReferenceCounted)&VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76b041*/
  if ( v6 && v3[3].__tail_0[1] ) /*0x76b04c*/
  {
    (**v6)(v6, 3); /*0x76b05b*/
    v3[1] = 0; /*0x76b05d*/
  }
  v3[3].__tail_0[1] = 0; /*0x76b066*/
  v3[2] = 0; /*0x76b06a*/
  ReferenceCounted::Constructor(this); /*0x76b071*/
}



// ==== 0x0076B080  ComStreamClass::initStream  this=ComStreamClass  sig=csp ====
bool __thiscall ComStreamClass::initStream(ComStreamClass *this)
{
  return *((_DWORD *)this + 17) != 0; /*0x76b088*/
}



// ==== 0x0076B090  ComStreamClass::closeStream  this=ComStreamClass  sig=csp ====
char __thiscall ComStreamClass::closeStream(ComStreamClass *this)
{
  return *((_BYTE *)this + 72); /*0x76b093*/
}



// ==== 0x0076B0A0  File::LoadWDTDecompress  this=File  sig=csp ====
char __thiscall File::LoadWDTDecompress(File *this, int a2, int a3)
{
  int v4; // eax
  unsigned int i; // edi
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

  v4 = *(_DWORD *)&this->__pad_6[30]; /*0x76b0a7*/
  if ( 4 * a3 < (unsigned int)(v4 * *(_DWORD *)&this->__pad_6[26]) ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  *((_DWORD *)this + 17) = __2_YAPAXI_Z(4 * v4); /*0x76b0c7*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_6[30]; ++i ) /*0x76b0ca*/
    *(_DWORD *)(*((_DWORD *)this + 17) + 4 * i) = __2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[26]); /*0x76b0e5*/
  v7 = 0; /*0x76b0f3*/
  v8 = 0; /*0x76b0f5*/
  v9 = 0; /*0x76b0f7*/
  v16 = 0; /*0x76b0fb*/
  if ( *(_DWORD *)&this->__pad_6[30] ) /*0x76b0f0*/
  {
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( *(_DWORD *)&this->__pad_6[26] ) /*0x76b107*/
        break; /*0x76b107*/
LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( (unsigned int)++v9 >= *(_DWORD *)&this->__pad_6[30] ) /*0x76b16d*/
        return 1; /*0x76b16d*/
    }
    while ( 1 ) /*0x76b110*/
    {
      if ( !v8 ) /*0x76b113*/
      {
        v15 = *(unsigned __int8 *)(v7 + a2); /*0x76b130*/
        goto LABEL_14; /*0x76b130*/
      }
      v11 = v8 - 1; /*0x76b115*/
      if ( !v11 ) /*0x76b116*/
        break; /*0x76b116*/
      v12 = v11 == 1; /*0x76b118*/
      v13 = *(_BYTE *)(v7 + a2); /*0x76b119*/
      if ( v12 ) /*0x76b11c*/
      {
        LOBYTE(v15) = v13 >> 4; /*0x76b123*/
LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
LABEL_15:
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 17) + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( (unsigned int)++v10 >= *(_DWORD *)&this->__pad_6[26] ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    LOBYTE(v15) = *(_BYTE *)(v7 + a2) >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return 1; /*0x76b0b9*/
}



// ==== 0x0076B180  ObjectClass::ParseWDTTerritories  this=WDTState  sig=csp ====
char __thiscall WDTClass::ParseTerritories(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // esi
  void *v7; // eax
  int v8; // eax
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
  int v78; // [esp-4h] [ebp-1Ch]
  void **v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  *(_DWORD *)(this + 32) = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = __2_YAPAXI_Z(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(v8); /*0x76b1da*/
      LOBYTE(v9) = 0; /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(_DWORD *)(v80 + 8) = *(_DWORD *)(this + 32); /*0x76b1e9*/
      HIBYTE(v9) = *(_BYTE *)(v10 + a2 - 1); /*0x76b1ec*/
      *(_WORD *)(v80 + 12) = v9; /*0x76b1f4*/
      *(_WORD *)(v80 + 12) += *(unsigned __int8 *)(v10 + a2); /*0x76b201*/
      v11 = *(_BYTE *)(v10 + a2 + 1); /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(_BYTE *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      LOBYTE(v12) = 0; /*0x76b21c*/
      LOBYTE(v9) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b21e*/
      ++v10; /*0x76b221*/
      *(_BYTE *)(v80 + 15) = v9; /*0x76b222*/
      HIBYTE(v12) = *(_BYTE *)(v10 + a2); /*0x76b229*/
      ++v10; /*0x76b22c*/
      *(_WORD *)(v80 + 16) = v12; /*0x76b22d*/
      *(_WORD *)(v80 + 16) += *(unsigned __int8 *)(v10 + a2); /*0x76b23a*/
      v13 = *(unsigned __int8 *)(++v10 + a2) - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(_BYTE *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(_BYTE *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b269*/
      ++v10; /*0x76b26c*/
      *(_BYTE *)(v80 + 30) = v14; /*0x76b26d*/
      LOBYTE(v9) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b277*/
      ++v10; /*0x76b27a*/
      *(_BYTE *)(v80 + 18) = v9; /*0x76b27b*/
      LOBYTE(v13) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b285*/
      ++v10; /*0x76b287*/
      *(_BYTE *)(v80 + 19) = v13; /*0x76b288*/
      v15 = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b294*/
      ++v10; /*0x76b297*/
      *(_BYTE *)(v80 + 20) = v15; /*0x76b298*/
      v16 = *(unsigned __int8 *)(v10 + a2) - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(_DWORD *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( *(_BYTE *)(v17 + a2) <= 0x7Fu ) /*0x76b2b1*/
        v18 = *(_BYTE *)(v17 + a2); /*0x76b2bf*/
      else
        v18 = *(_BYTE *)(v17 + a2) + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(_BYTE *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( *(_BYTE *)(v19 + a2) <= 0x7Fu ) /*0x76b2d1*/
        v20 = *(_BYTE *)(v19 + a2); /*0x76b2df*/
      else
        v20 = *(_BYTE *)(v19 + a2) + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(_BYTE *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( *(_BYTE *)(v21 + a2) <= 0x7Fu ) /*0x76b2f1*/
        v22 = *(_BYTE *)(v21 + a2); /*0x76b2ff*/
      else
        v22 = *(_BYTE *)(v21 + a2) + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(_BYTE *)(v80 + 33) = v22; /*0x76b309*/
      if ( *(_BYTE *)(v23 + a2) <= 0x7Fu ) /*0x76b311*/
        v24 = *(_BYTE *)(v23 + a2); /*0x76b31f*/
      else
        v24 = *(_BYTE *)(v23 + a2) + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(_BYTE *)(v80 + 34) = v24; /*0x76b329*/
      if ( *(_BYTE *)(v25 + a2) <= 0x7Fu ) /*0x76b331*/
        v26 = *(_BYTE *)(v25 + a2); /*0x76b33f*/
      else
        v26 = *(_BYTE *)(v25 + a2) + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(_BYTE *)(v80 + 35) = v26; /*0x76b349*/
      if ( *(_BYTE *)(v27 + a2) <= 0x7Fu ) /*0x76b351*/
        v28 = *(_BYTE *)(v27 + a2); /*0x76b35f*/
      else
        v28 = *(_BYTE *)(v27 + a2) + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(_BYTE *)(v80 + 36) = v28; /*0x76b369*/
      if ( *(_BYTE *)(v29 + a2) <= 0x7Fu ) /*0x76b371*/
        v30 = *(_BYTE *)(v29 + a2); /*0x76b37f*/
      else
        v30 = *(_BYTE *)(v29 + a2) + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(_BYTE *)(v80 + 37) = v30; /*0x76b389*/
      if ( *(_BYTE *)(v31 + a2) <= 0x7Fu ) /*0x76b391*/
        v32 = *(_BYTE *)(v31 + a2); /*0x76b39f*/
      else
        v32 = *(_BYTE *)(v31 + a2) + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(_BYTE *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( *(_BYTE *)(v33 + a2) <= 0x7Fu ) /*0x76b3b1*/
        v34 = *(_BYTE *)(v33 + a2); /*0x76b3bf*/
      else
        v34 = *(_BYTE *)(v33 + a2) + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(_BYTE *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( *(_BYTE *)(v35 + a2) <= 0x7Fu ) /*0x76b3d1*/
        v36 = *(_BYTE *)(v35 + a2); /*0x76b3df*/
      else
        v36 = *(_BYTE *)(v35 + a2) + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(_BYTE *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( *(_BYTE *)(v37 + a2) <= 0x7Fu ) /*0x76b3f1*/
        v38 = *(_BYTE *)(v37 + a2); /*0x76b3ff*/
      else
        v38 = *(_BYTE *)(v37 + a2) + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(_BYTE *)(v80 + 44) = v38; /*0x76b409*/
      if ( *(_BYTE *)(v39 + a2) <= 0x7Fu ) /*0x76b411*/
        v40 = *(_BYTE *)(v39 + a2); /*0x76b41f*/
      else
        v40 = *(_BYTE *)(v39 + a2) + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(_BYTE *)(v80 + 45) = v40; /*0x76b429*/
      if ( *(_BYTE *)(v41 + a2) <= 0x7Fu ) /*0x76b431*/
        v42 = *(_BYTE *)(v41 + a2); /*0x76b43f*/
      else
        v42 = *(_BYTE *)(v41 + a2) + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(_BYTE *)(v80 + 46) = v42; /*0x76b449*/
      if ( *(_BYTE *)(v43 + a2) <= 0x7Fu ) /*0x76b451*/
        v44 = *(_BYTE *)(v43 + a2); /*0x76b45f*/
      else
        v44 = *(_BYTE *)(v43 + a2) + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(_BYTE *)(v80 + 47) = v44; /*0x76b469*/
      if ( *(_BYTE *)(v45 + a2) <= 0x7Fu ) /*0x76b471*/
        v46 = *(_BYTE *)(v45 + a2); /*0x76b47f*/
      else
        v46 = *(_BYTE *)(v45 + a2) + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(_BYTE *)(v80 + 48) = v46; /*0x76b489*/
      if ( *(_BYTE *)(v47 + a2) <= 0x7Fu ) /*0x76b491*/
        v48 = *(_BYTE *)(v47 + a2); /*0x76b49f*/
      else
        v48 = *(_BYTE *)(v47 + a2) + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(_BYTE *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( *(_BYTE *)(v49 + a2) <= 0x7Fu ) /*0x76b4b1*/
        v50 = *(_BYTE *)(v49 + a2); /*0x76b4bf*/
      else
        v50 = *(_BYTE *)(v49 + a2) + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(_BYTE *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( *(_BYTE *)(v51 + a2) <= 0x7Fu ) /*0x76b4d1*/
        v52 = *(_BYTE *)(v51 + a2); /*0x76b4df*/
      else
        v52 = *(_BYTE *)(v51 + a2) + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(_BYTE *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( *(_BYTE *)(v53 + a2) <= 0x7Fu ) /*0x76b4f1*/
        v54 = *(_BYTE *)(v53 + a2); /*0x76b4ff*/
      else
        v54 = *(_BYTE *)(v53 + a2) + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(_BYTE *)(v80 + 49) = v54; /*0x76b509*/
      if ( *(_BYTE *)(v55 + a2) <= 0x7Fu ) /*0x76b511*/
        v56 = *(_BYTE *)(v55 + a2); /*0x76b51f*/
      else
        v56 = *(_BYTE *)(v55 + a2) + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(_BYTE *)(v80 + 50) = v56; /*0x76b529*/
      if ( *(_BYTE *)(v57 + a2) <= 0x7Fu ) /*0x76b531*/
        v58 = *(_BYTE *)(v57 + a2); /*0x76b53f*/
      else
        v58 = *(_BYTE *)(v57 + a2) + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(_BYTE *)(v80 + 51) = v58; /*0x76b549*/
      if ( *(_BYTE *)(v59 + a2) <= 0x7Fu ) /*0x76b551*/
        v60 = *(_BYTE *)(v59 + a2); /*0x76b55f*/
      else
        v60 = *(_BYTE *)(v59 + a2) + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(_BYTE *)(v80 + 52) = v60; /*0x76b569*/
      if ( *(_BYTE *)(v61 + a2) <= 0x7Fu ) /*0x76b571*/
        v62 = *(_BYTE *)(v61 + a2); /*0x76b57f*/
      else
        v62 = *(_BYTE *)(v61 + a2) + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(_BYTE *)(v80 + 53) = v62; /*0x76b589*/
      if ( *(_BYTE *)(v63 + a2) <= 0x7Fu ) /*0x76b591*/
        v64 = *(_BYTE *)(v63 + a2); /*0x76b59f*/
      else
        v64 = *(_BYTE *)(v63 + a2) + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(_BYTE *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b5b7*/
      ++v65; /*0x76b5ba*/
      *(_DWORD *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(_DWORD *)(v80 + 60); /*0x76b5cb*/
      ++v65; /*0x76b5cd*/
      *(_DWORD *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(_DWORD *)(v80 + 60); /*0x76b5e0*/
      ++v65; /*0x76b5e2*/
      *(_DWORD *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = *(unsigned __int8 *)(v65 + a2) + *(_DWORD *)(v80 + 60); /*0x76b5f2*/
      ++v65; /*0x76b5f4*/
      *(_DWORD *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b603*/
      ++v65; /*0x76b606*/
      *(_DWORD *)(v80 + 56) = v70; /*0x76b607*/
      v71 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(_DWORD *)(v80 + 56); /*0x76b617*/
      ++v65; /*0x76b619*/
      *(_DWORD *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(_DWORD *)(v80 + 56); /*0x76b62c*/
      ++v65; /*0x76b62e*/
      *(_DWORD *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = *(unsigned __int8 *)(v65 + a2); /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(_DWORD *)(v80 + 56) += v73; /*0x76b641*/
      v74 = *(_DWORD *)(this + 52); /*0x76b644*/
      if ( *(_DWORD *)(this + 60) < v74 /*0x76b66c*/
        || (*(_BYTE *)(this + 57) || !v74)
        && (v75 = *(_DWORD *)(this + 64), v75 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 44) + 8))(this + 44, v75 + v74, 0) )
      {
        v76 = *(_DWORD *)(this + 60); /*0x76b673*/
        v78 = v80; /*0x76b67a*/
        *(_DWORD *)(this + 60) = v76 + 1; /*0x76b67e*/
        ComPtr::Set((_DWORD *)(*(_DWORD *)(this + 48) + 8 * v76), v78); /*0x76b687*/
      }
      v77 = *(_DWORD *)(this + 32); /*0x76b68c*/
      v79 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b68f*/
      *(_DWORD *)(this + 32) = v77 + 1; /*0x76b698*/
      ComPtr::Release(&v79); /*0x76b69f*/
      if ( v5 >= a3 ) /*0x76b6a8*/
        return 1; /*0x76b6b1*/
      v3 = a3; /*0x76b1b1*/
    }
  }
  return 0; /*0x76b197*/
}



// ==== 0x0076B6F0  WDTState::QueryInterface  this=WDTState  sig=csp ====
void *__thiscall WDTState::QueryInterface(WDTState *this, char a2)
{
  WDTState::Constructor_WDTState((ReferenceCounted *)this); /*0x76b6f3*/
  if ( (a2 & 1) != 0 ) /*0x76b6fd*/
    __3_YAXPAX_Z(this); /*0x76b700*/
  return this; /*0x76b70a*/
}



// ==== 0x0076B710  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4::ddtor(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b716*/
  this->m_10 = 0; /*0x76b719*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76b72f*/
  }
  BYTE1(this->m_C) = 0; /*0x76b732*/
  this->m_8 = 0; /*0x76b735*/
  return result; /*0x76b738*/
}



// ==== 0x0076B740  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall WDTState_4::Write(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76b740*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/
}



// ==== 0x0076B760  _VectorClass_V_rc_ptr_VWDTTerritory::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::Clear(
        _VectorClass_V_rc_ptr_VWDTTerritory *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x76b76d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x76b772*/
  *a2 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b777*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x76b783*/
  return a2; /*0x76b78a*/
}



// ==== 0x0076B790  rc_ptr::ParseWDTTerritories_Parse_76B790  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ParseWDTTerritories_Parse_76B790(rc_ptr *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76b793*/
  *(_DWORD *)this = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b79f*/
  ComPtr::Set((ComPtr *)this, a2); /*0x76b7a5*/
  return this; /*0x76b7ac*/
}



// ==== 0x0076B7B0  ObjectClass::method_76B7B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76B7B0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  ComPtr *v7; // edi
  void *v8; // eax
  void *vtable2; // eax
  int v10; // edi

  v2 = a2; /*0x76b7b1*/
  if ( this == (ObjectClass *)a2 ) /*0x76b7bc*/
    return &this->AbstractClass; /*0x76b7bc*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x76b7c4*/
  v4 = a2[2]; /*0x76b7c7*/
  this->? = (void *)v4; /*0x76b7cc*/
  if ( !v4 ) /*0x76b7cf*/
  {
    this->? = 0; /*0x76b855*/
    BYTE1(this->?) = 0; /*0x76b85c*/
    return &this->AbstractClass; /*0x76b860*/
  }
  v5 = (int *)__2_YAPAXI_Z(8 * v4 + 4); /*0x76b7dd*/
  if ( v5 ) /*0x76b7e7*/
  {
    *v5 = v4; /*0x76b7e9*/
    v6 = v5 + 1; /*0x76b7eb*/
    v7 = (ComPtr *)(v5 + 1); /*0x76b7f1*/
    if ( v4 - 1 >= 0 ) /*0x76b7f5*/
    {
      do /*0x76b80b*/
      {
        ComPtr::Constructor(v7); /*0x76b7fc*/
        *(_DWORD *)v7->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b801*/
        v7 = (ComPtr *)((char *)v7 + 8); /*0x76b807*/
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
  this->? = v8; /*0x76b819*/
  if ( !v8 ) /*0x76b81c*/
    return &this->AbstractClass; /*0x76b81c*/
  vtable2 = this->?; /*0x76b81e*/
  v10 = 0; /*0x76b821*/
  BYTE1(this->?) = 1; /*0x76b825*/
  if ( (int)vtable2 <= 0 ) /*0x76b829*/
    return &this->AbstractClass; /*0x76b829*/
  do /*0x76b84a*/
  {
    ComPtr::Set((ComPtr *)((char *)this->? + 8 * v10), *(_DWORD *)(v2[1] + 8 * v10 + 4)); /*0x76b83f*/
    ++v10; /*0x76b847*/
  }
  while ( v10 < (int)this->? ); /*0x76b84a*/
  return &this->AbstractClass; /*0x76b84e*/
}



// ==== 0x0076B870  _VectorClass_V_rc_ptr_VWDTTerritory::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::AddRef(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x76b876*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76b87f*/
  {
    v3 = 0; /*0x76b881*/
    if ( m_8 <= 0 ) /*0x76b885*/
      return 1; /*0x76b8ab*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x76b88d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x76b890*/
    {
      ++v3; /*0x76b89b*/
      v4 += 2; /*0x76b89f*/
      if ( v3 >= m_8 ) /*0x76b8a4*/
        return 1; /*0x76b8a4*/
    }
  }
  return 0; /*0x76b8a6*/
}



// ==== 0x0076B8C0  _VectorClass_V_rc_ptr_VWDTTerritory::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::Release(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76b8c3*/
  if ( !a2 ) /*0x76b8cd*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VWDTTerritory *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76b9cd*/
    return 1; /*0x76b9d3*/
  }
  LOBYTE(this->m_C) = 0; /*0x76b8d7*/
  if ( a3 ) /*0x76b8dd*/
  {
    *a3 = a2; /*0x76b923*/
    v6 = (ComPtr *)(a3 + 1); /*0x76b925*/
    if ( a2 - 1 >= 0 ) /*0x76b931*/
    {
      v9 = a2; /*0x76b933*/
      do /*0x76b947*/
      {
        ComPtr::Constructor(v6); /*0x76b938*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b93d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b943*/
        --v9; /*0x76b946*/
      }
      while ( v9 ); /*0x76b947*/
      v6 = (ComPtr *)(a3 + 1); /*0x76b949*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76b8e7*/
    if ( !v5 ) /*0x76b8f1*/
    {
      v8 = 0; /*0x76b91f*/
      goto LABEL_14; /*0x76b921*/
    }
    *v5 = a2; /*0x76b8f3*/
    v6 = (ComPtr *)(v5 + 1); /*0x76b8f5*/
    v13 = (ComPtr *)(v5 + 1); /*0x76b8fb*/
    if ( a2 - 1 >= 0 ) /*0x76b901*/
    {
      v7 = a2; /*0x76b903*/
      do /*0x76b917*/
      {
        ComPtr::Constructor(v6); /*0x76b908*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b90d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b913*/
        --v7; /*0x76b916*/
      }
      while ( v7 ); /*0x76b917*/
      v6 = v13; /*0x76b919*/
    }
  }
  v8 = v6; /*0x76b94d*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x76b94f*/
  if ( !v8 ) /*0x76b955*/
    return 0; /*0x76b95a*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x76b961*/
  {
    if ( a2 >= this->m_8 ) /*0x76b96d*/
      m_8 = this->m_8; /*0x76b96f*/
    for ( i = 0; i < m_8; ++i ) /*0x76b975*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76b982*/
    if ( BYTE1(this->m_C) ) /*0x76b98c*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b993*/
      if ( v12 ) /*0x76b998*/
        (**v12)(v12, 3); /*0x76b99e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x76b9a0*/
    }
    m_8 = a2; /*0x76b9a7*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x76b9b6*/
  this->m_8 = m_8; /*0x76b9b9*/
  BYTE1(this->m_C) = a3 == 0; /*0x76b9bc*/
  return 1; /*0x76b957*/
}



// ==== 0x0076B9E0  _VectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::ddtor(_VectorClass_V_rc_ptr_VWDTTerritory *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b9e6*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76b9ed*/
  {
    result = (**v2)(v2, 3); /*0x76b9fa*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76b9fc*/
  }
  BYTE1(this->m_C) = 0; /*0x76b9ff*/
  this->m_8 = 0; /*0x76ba02*/
  return result; /*0x76ba05*/
}



// ==== 0x0076BA10  _VectorClass_V_rc_ptr_VWDTTerritory::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::GetSize(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76ba10*/
    return 0; /*0x76ba18*/
  m_8 = this->m_8; /*0x76ba1e*/
  result = 0; /*0x76ba21*/
  if ( m_8 <= 0 ) /*0x76ba25*/
    return -1; /*0x76ba40*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76ba2e*/
  {
    if ( ++result >= m_8 ) /*0x76ba3e*/
      return -1; /*0x76ba3e*/
  }
  return result; /*0x76ba1a*/
}



// ==== 0x0076BA50  _VectorClass_V_rc_ptr_VWDTTerritory::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_rc_ptr_WDTTerritory::GetCapacity(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76ba50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x76ba65*/
  else
    return 0; /*0x76ba57*/
}



// ==== 0x0076BA70  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Release  this=DynamicVector  sig=csp ====
char __thiscall WDTState_4::Release(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  WDTState *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    LOBYTE(this->m_C) = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = (ComPtr *)(a3 + 1); /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ComPtr::Constructor(v8); /*0x76bae6*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76baeb*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76baf1*/
          --v9; /*0x76baf4*/
        }
        while ( v9 ); /*0x76baf5*/
        v8 = (ComPtr *)(a3 + 1); /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76ba97*/
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = (ComPtr *)(v5 + 1); /*0x76baa5*/
        v7 = (WDTState *)(v5 + 1); /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          v14 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            WDTState_4::Constructor(v7++); /*0x76bab8*/
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
    LOBYTE(this->m_C) = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76bb05*/
    {
      if ( a2 >= this->m_8 ) /*0x76bb11*/
        m_8 = this->m_8; /*0x76bb13*/
      for ( i = 0; i < m_8; ++i ) /*0x76bb19*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76bb26*/
      if ( BYTE1(this->m_C) ) /*0x76bb30*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76bb44*/
      }
      m_8 = a2; /*0x76bb4b*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x76bb5a*/
    this->m_8 = m_8; /*0x76bb5d*/
    BYTE1(this->m_C) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76bb69*/
  }
  v12 = this->m_8; /*0x76bb6c*/
  if ( v12 < this->m_10 ) /*0x76bb74*/
    this->m_10 = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/
}



// ==== 0x0076BB90  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Read  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4::Read(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( m_10 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= m_10 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/
}



// ==== 0x0076BBC0  _VectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::QueryInterface(_VectorClass_V_rc_ptr_VWDTTerritory *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bbc3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76bbc6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76bbd0*/
  {
    (**v3)(v3, 3); /*0x76bbdf*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76bbe1*/
  }
  BYTE1(this->m_C) = 0; /*0x76bbec*/
  this->m_8 = 0; /*0x76bbf2*/
  if ( (a2 & 1) != 0 ) /*0x76bbf9*/
    __3_YAXPAX_Z(this); /*0x76bbfc*/
  return this->__pad_0; /*0x76bc06*/
}



// ==== 0x0076BC10  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall WDTState_4::QueryInterface(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bc13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76bc16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76bc31*/
  }
  BYTE1(this->m_C) = 0; /*0x76bc3c*/
  this->m_8 = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    __3_YAXPAX_Z(this); /*0x76bc4c*/
  return this->__pad_0; /*0x76bc56*/
}



// ==== 0x0076BC60  WDTState::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall WDTState_4::Constructor(WDTState *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76bc63*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76bc68*/
  return this->__pad_0; /*0x76bc70*/
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
_DWORD *__fastcall Audio_Create_76BE90(rc_ptr *this, int a2)
{
  char *v4; // eax
  char *_76BF00; // edi

  v4 = (char *)__2_YAPAXI_Z(0x18u); /*0x76be98*/
  if ( v4 ) /*0x76bea2*/
    _76BF00 = Audio_Create_76BF00(v4, a2); /*0x76beac*/
  else
    _76BF00 = 0; /*0x76beb0*/
  ComPtr::Constructor((ComPtr *)this); /*0x76beb4*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x76bebb*/
  ComPtr::Set((ComPtr *)this, (int)_76BF00); /*0x76bec2*/
  return this; /*0x76bec9*/
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
  *((_DWORD *)this + 1) = 0; /*0x76bf08*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x76bf11*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x76bf17*/
  *v3 = &rc_ptr<WDTState>::`vftable'; /*0x76bf20*/
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
int __thiscall WDTObject::GetSize(WDTObject *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 3); /*0x76bfa0*/
  if ( v1 ) /*0x76bfa5*/
    return *(_DWORD *)(v1 + 24); /*0x76bfa7*/
  else
    return 0; /*0x76bfab*/
}



// ==== 0x0076BFB0  ConstructWDTSelection_Create_76BFB0  this=-  sig=csp ====
int sub_76BFB0()
{
  return 1; /*0x76bfb5*/
}



// ==== 0x0076BFC0  ObjectClass::ConstructWDTSelection_Create_76BFC0  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76BFC0(ObjectClass *this)
{
  unsigned __int8 *vtable3; // eax

  vtable3 = (unsigned __int8 *)this->?; /*0x76bfc0*/
  if ( vtable3 ) /*0x76bfc5*/
    return vtable3[20]; /*0x76bfcc*/
  else
    return 1; /*0x76bfcf*/
}



// ==== 0x0076BFE0  Conflict::GetOwnerHouse  this=Conflict  sig=csp ====
int __thiscall Conflict::GetOwnerHouse(Conflict *this)
{
  int Outcome; // eax

  Outcome = this->Outcome; /*0x76bfe0*/
  if ( Outcome ) /*0x76bfe5*/
    return *(_DWORD *)(Outcome + 36) - 1; /*0x76bfea*/
  else
    return 0; /*0x76bfec*/
}



// ==== 0x0076C030  CampaignProperties_WorldDominationTour::QueryInterface  this=CampaignProperties@WorldDominationTour  sig=csp ====
void **__thiscall CampaignProperties_WorldDominationTour::QueryInterface(
        CampaignProperties_WorldDominationTour *this,
        char a2)
{
  *this = (CampaignProperties_WorldDominationTour)&WorldDominationTour::CampaignProperties::`vftable'; /*0x76c036*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 5)); /*0x76c03c*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 4)); /*0x76c044*/
  this->q008 = &rc_ptr<WDTState>::`vftable'; /*0x76c04c*/
  ComPtr::Release((ComPtr *)(this + 2)); /*0x76c052*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76c059*/
  if ( (a2 & 1) != 0 ) /*0x76c063*/
    __3_YAXPAX_Z(this); /*0x76c066*/
  return (void **)this; /*0x76c070*/
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
int __thiscall ConstructWDTSelection(int this, int a2, int a3)
{
  int v4; // eax
  int _76BFC0; // eax
  CampaignClass *v6; // eax
  _BYTE *v7; // eax
  _DWORD *_771800; // eax
  int _76BFB0; // eax
  char **v10; // eax
  int v11; // ebp
  int v12; // eax
  wchar_t *StringCSF; // eax
  MSBitPrintAnim *v14; // eax
  ScoreClass *v15; // edi
  wchar_t *v16; // eax
  MSBitPrintAnim *v17; // eax
  ScoreClass *v18; // edi
  int v20; // [esp-4h] [ebp-D8h]
  ObjectClass v21; // [esp+10h] [ebp-C4h] BYREF
  int v22[3]; // [esp+C0h] [ebp-14h] BYREF
  int v23; // [esp+CCh] [ebp-8h]

  MSEngine::Construct((MSEngine *)this); /*0x76c29c*/
  ComPtr::Constructor((ComPtr *)(this + 72)); /*0x76c2a6*/
  *(_DWORD *)(this + 72) = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x76c2b2*/
  ComPtr::Set((ComPtr *)(this + 72), *(_DWORD *)(a2 + 4)); /*0x76c2be*/
  ComPtr::Constructor((ComPtr *)(this + 80)); /*0x76c2c8*/
  *(_DWORD *)(this + 80) = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76c2cd*/
  WinsockInterface::ProcessPacket((char *)(this + 88), *(_DWORD *)(*(_DWORD *)(a2 + 4) + 68)); /*0x76c2dd*/
  *(_BYTE *)(this + 1092) = 0; /*0x76c2e7*/
  *(_DWORD *)(this + 1096) = -1; /*0x76c2ed*/
  *(_DWORD *)(this + 1100) = -1; /*0x76c2f3*/
  *(_DWORD *)(this + 1104) = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(a2 + 4) + 12)); /*0x76c30e*/
  *(_DWORD *)(this + 1108) = -1; /*0x76c314*/
  v4 = *(_DWORD *)(a2 + 4); /*0x76c31a*/
  v20 = *(_DWORD *)(v4 + 68); /*0x76c323*/
  _76BFC0 = ConstructWDTSelection_Create_76BFC0(*(ObjectClass **)(v4 + 12)); /*0x76c327*/
  ConstructWDTSelection_Create_767FB0((rc_ptr *)(this + 1112), _76BFC0, a3, v20); /*0x76c334*/
  *(_DWORD *)(this + 1120) = -1; /*0x76c339*/
  ComPtr::Constructor((ComPtr *)(this + 1124)); /*0x76c347*/
  *(_DWORD *)(this + 1124) = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76c34c*/
  *(_DWORD *)(this + 1132) = 0; /*0x76c355*/
  *(_DWORD *)(this + 1136) = 0; /*0x76c35b*/
  *(_DWORD *)(this + 1140) = 0; /*0x76c361*/
  *(_DWORD *)(this + 1144) = 32; /*0x76c367*/
  *(_DWORD *)(this + 1148) = 0; /*0x76c371*/
  *(_DWORD *)(this + 1152) = 0; /*0x76c377*/
  v6 = (CampaignClass *)__2_YAPAXI_Z(0x20u); /*0x76c37d*/
  if ( v6 ) /*0x76c387*/
    v7 = CampaignClass::Constructor_1(v6, 0); /*0x76c38c*/
  else
    v7 = 0; /*0x76c393*/
  *(_DWORD *)(this + 1156) = v7; /*0x76c39b*/
  ConstructWDTSelection_Create_76F500((rc_ptr *)(this + 1160)); /*0x76c3a1*/
  String::Assign((String *)(this + 1168), 0); /*0x76c3ad*/
  ConstructWDTSelection_Create_76F210((VectorClass *)(this + 1172), 0, 0); /*0x76c3bc*/
  *(_DWORD *)(this + 1172) = &DynamicVectorClass<MSSfxEntry *>::`vftable'; /*0x76c3c1*/
  *(_DWORD *)(this + 1192) = 10; /*0x76c3c8*/
  *(_DWORD *)(this + 1188) = 0; /*0x76c3cf*/
  *(_DWORD *)this = &WorldDominationTour::Selection::`vftable'; /*0x76c3d2*/
  *(_DWORD *)(this + 1196) = (unsigned __int16)Property::Set( /*0x76c448*/
                                                 (Property *)g_FogOfWarState,
                                                 ((unsigned __int8)dword_AC18A4 >> g_BitShift_Green_0 << g_BitShift_Red)
                                               | (BYTE1(dword_AC18A4) >> g_BitMask_Blue << g_BitMask_Green)
                                               | (BYTE2(dword_AC18A4) >> g_BitMask_Red << g_BitShift_Blue));
  _771800 = ConstructWDTSelection_Create_771800((ObjectClass *)(this + 88)); /*0x76c44e*/
  PriorityQueue::Add((PriorityQueue *)this, (int)_771800); /*0x76c456*/
  CCFileClass::Construct((CCFileClass *)&v21.customSound_controller[2], aWdtmapmdIni); /*0x76c464*/
  v21.referenceCount = 0; /*0x76c46d*/
  v21.NeedsSaveOrLink = 0; /*0x76c471*/
  GenericList::Constructor((GenericList *)&v21.occupant); /*0x76c475*/
  v21.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x76c484*/
  memset(&v21.ambientSoundController[1], 0, 13); /*0x76c48c*/
  v21.customSound_controller[0] = 0; /*0x76c49c*/
  v21.customSound_controller[1] = 0; /*0x76c4a0*/
  v21.nextArrayIndex = (int)&INIClass::`vftable'; /*0x76c4a4*/
  FileStraw::Open((FileStraw *)&v21.nextArrayIndex, (int)&v21.customSound_controller[2], 0); /*0x76c4ac*/
  String::Assign((String *)&v21, aVoiceovers); /*0x76c4ba*/
  ConstructWDTSelection_Create_76C970(this, &v21.nextArrayIndex, (int)&v21); /*0x76c4cb*/
  DeleteAndZero(&v21); /*0x76c4d4*/
  String::Assign((String *)&v21, aSounds_0); /*0x76c4e2*/
  ConstructWDTSelection_Create_76CA60((TechnoClass *)this, (char *)&v21.nextArrayIndex, (char **)&v21); /*0x76c4f3*/
  DeleteAndZero(&v21); /*0x76c4fc*/
  unknown_libname_73(&v21.vtable2); /*0x76c505*/
  String::Assign((String *)&v21.vtable1, &g_INI_DefaultBuffer); /*0x76c513*/
  String::Assign((String *)&v21, aLayouts); /*0x76c521*/
  _76BFB0 = ConstructWDTSelection_Create_76BFB0(); /*0x76c53b*/
  v10 = FromStringInt((char **)&v21.abstractFlags, _76BFB0); /*0x76c546*/
  INIClass::ReadString((INIClass *)&v21.nextArrayIndex, (char **)&v21, v10, (char **)&v21.vtable1, (int)&v21.vtable2); /*0x76c555*/
  DeleteAndZero((ObjectClass *)&v21.abstractFlags); /*0x76c55e*/
  DeleteAndZero(&v21); /*0x76c567*/
  DeleteAndZero((ObjectClass *)&v21.vtable1); /*0x76c570*/
  ConstructWDTSelection_Create_76CBF0((TechnoClass *)this, &v21.nextArrayIndex, (char **)&v21.vtable2); /*0x76c581*/
  v11 = *(_DWORD *)(this + 1116); /*0x76c590*/
  LOBYTE(v12) = ConstructWDTSelection_Create(*(_DWORD *)(a2 + 4), a3); /*0x76c599*/
  ArtConfig::ReadLayout(v11, (INIClass *)&v21.nextArrayIndex, (PriorityQueue *)this, v12); /*0x76c5a7*/
  StringCSF = GetStringCSF(aGuiPlaywdt, 0, g_Str_File_WDTSel_cpp, 157); /*0x76c5bd*/
  WideString::Assign((WideString *)&v21.uniqueId, StringCSF); /*0x76c5c7*/
  v14 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c5ce*/
  if ( v14 ) /*0x76c5d8*/
    v15 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c5f5*/
                          v14,
                          (const wchar_t **)&v21.uniqueId,
                          (_DWORD *)(*(_DWORD *)(this + 1116) + 156),
                          1);
  else
    v15 = 0; /*0x76c5f9*/
  ScoreClass::SetState(v15, 1); /*0x76c5ff*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v15); /*0x76c607*/
  v16 = GetStringCSF(aTxtBack, 0, g_Str_File_WDTSel_cpp, 164); /*0x76c61d*/
  WideString::Assign((WideString *)&v21.vtable3, v16); /*0x76c627*/
  v17 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c62e*/
  if ( v17 ) /*0x76c638*/
    v18 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c655*/
                          v17,
                          (const wchar_t **)&v21.vtable3,
                          (_DWORD *)(*(_DWORD *)(this + 1116) + 172),
                          1);
  else
    v18 = 0; /*0x76c659*/
  ScoreClass::SetState(v18, 1); /*0x76c65f*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v18); /*0x76c667*/
  ConstructWDTSelection_Create_76EEB0((TechnoClass *)this); /*0x76c66e*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.vtable3); /*0x76c677*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.uniqueId); /*0x76c680*/
  DeleteAndZero((ObjectClass *)&v21.vtable2); /*0x76c689*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v21.nextArrayIndex); /*0x76c692*/
  v21.customSound_controller[2] = (int)&CCFileClass::`vftable'; /*0x76c69e*/
  v23 = 0; /*0x76c6a6*/
  Vector::Clear((int)v22); /*0x76c6ad*/
  v21.customSound_controller[2] = (int)&off_7E1668; /*0x76c6b6*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v21.customSound_controller[2]); /*0x76c6be*/
  return this; /*0x76c6c5*/
}



// ==== 0x0076C6E0  Selection@WorldDominationTour::SelectionInitializeWOL  this=Selection@WorldDominationTour  sig=csp ====
int __thiscall SelectionInitializeWOL(int this)
{
  WDTObject *v2; // eax
  int (__thiscall ***v3)(_DWORD, int); // eax
  WDTObject *v4; // eax
  int (__thiscall ***v5)(_DWORD, int); // eax
  int v6; // ecx
  void *v7; // edi
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void *v9; // edi
  void *v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v13; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &WorldDominationTour::Selection::`vftable'; /*0x76c6e9*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x76c6f7*/
  Theme::QueueSong((int)&unk_A83D10, -3); /*0x76c701*/
  (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x76c710*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x76c71d*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x76c72d*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x76c737*/
  ComPtr::Set((ComPtr *)(this + 1124), 0); /*0x76c753*/
  VectorCursor::Construct((VectorCursor *)&v15, *(_DWORD *)(this + 1116) + 44, 0); /*0x76c768*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v15 + 4))(&v15) ) /*0x76c775*/
  {
    v2 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v16 + 4) + 8 * v17)); /*0x76c78a*/
    v3 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v2); /*0x76c791*/
    if ( v3 ) /*0x76c798*/
      Session::RemoveTeam((Session *)this, v3); /*0x76c79d*/
    (*(void (__thiscall **)(int *))(v15 + 8))(&v15); /*0x76c7aa*/
  }
  VectorCursor::Construct((VectorCursor *)&v15, *(_DWORD *)(this + 1116) + 44, 0); /*0x76c7cc*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v15 + 4))(&v15) ) /*0x76c7d9*/
  {
    v4 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v16 + 4) + 8 * v17)); /*0x76c7ee*/
    v5 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v4); /*0x76c7f5*/
    if ( v5 ) /*0x76c7fc*/
      Session::RemoveTeam((Session *)this, v5); /*0x76c801*/
    (*(void (__thiscall **)(int *))(v15 + 8))(&v15); /*0x76c80e*/
  }
  *(_DWORD *)&v13.m_1[3] = this + 1172; /*0x76c82a*/
  v14 = 0; /*0x76c82e*/
  *(_DWORD *)v13.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76c836*/
  if ( Vector::HasCapacity(&v13) ) /*0x76c83e*/
  {
    do /*0x76c87d*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)&v13.m_1[3] + 4); /*0x76c850*/
      v7 = *(void **)(v6 + 4 * v14); /*0x76c853*/
      if ( v7 ) /*0x76c858*/
      {
        j_DeleteAndZero(*(ObjectClass **)(v6 + 4 * v14)); /*0x76c85c*/
        __3_YAXPAX_Z(v7); /*0x76c862*/
      }
      (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v13.__pad_0 /*0x76c872*/
                                                                                               + 8))(&v13);
    }
    while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v13.__pad_0 + 4))(&v13) ); /*0x76c87d*/
  }
  v8 = *(void (__thiscall ****)(_DWORD, int))(this + 1132); /*0x76c884*/
  if ( v8 ) /*0x76c88c*/
    (**v8)(v8, 1); /*0x76c892*/
  v9 = *(void **)(this + 1136); /*0x76c894*/
  if ( v9 ) /*0x76c89c*/
  {
    DeleteAndZero(*(ObjectClass **)(this + 1136)); /*0x76c8a0*/
    __3_YAXPAX_Z(v9); /*0x76c8a6*/
  }
  v10 = *(void **)(this + 1140); /*0x76c8ae*/
  if ( v10 ) /*0x76c8b6*/
  {
    DeleteAndZero(*(ObjectClass **)(this + 1140)); /*0x76c8ba*/
    __3_YAXPAX_Z(v10); /*0x76c8c0*/
  }
  v11 = *(void (__thiscall ****)(_DWORD, int))(this + 1156); /*0x76c8c8*/
  if ( v11 ) /*0x76c8d0*/
    (**v11)(v11, 1); /*0x76c8d6*/
  Property::Set((Property *)g_FogOfWarState, *(_WORD *)(this + 1196)); /*0x76c8e6*/
  *(_DWORD *)(this + 1172) = &VectorClass<MSSfxEntry *>::`vftable'; /*0x76c8ed*/
  VectorClass_ptr_MSSfxEntry::Remove((_VectorClass_PAVMSSfxEntry *)(this + 1172)); /*0x76c8f3*/
  DeleteAndZero((ObjectClass *)(this + 1168)); /*0x76c8fe*/
  *(_DWORD *)(this + 1160) = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76c909*/
  ComPtr::Release((ComPtr *)(this + 1160)); /*0x76c90f*/
  *(_DWORD *)(this + 1124) = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76c916*/
  ComPtr::Release((ComPtr *)(this + 1124)); /*0x76c91d*/
  *(_DWORD *)(this + 1112) = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x76c928*/
  ComPtr::Release((ComPtr *)(this + 1112)); /*0x76c92e*/
  System_Init_770430((ObjectClass *)(this + 88)); /*0x76c936*/
  *(_DWORD *)(this + 80) = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76c93e*/
  ComPtr::Release((ComPtr *)(this + 80)); /*0x76c944*/
  *(_DWORD *)(this + 72) = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x76c94c*/
  ComPtr::Release((ComPtr *)(this + 72)); /*0x76c952*/
  return MSEngine::Destruct((MSEngine *)this); /*0x76c95e*/
}



// ==== 0x0076C970  ObjectClass::ConstructWDTSelection_Create_76C970  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall sub_76C970(int this, _DWORD *a2, int a3)
{
  char **v3; // edi

  v3 = (char **)a3; /*0x76c977*/
  Animation::LoadSidebarAnimations((void **)(this + 88), a2, a3); /*0x76c982*/
  String::Assign((char **)&a3, aWinningthresho); /*0x76c990*/
  *(_DWORD *)(this + 1076) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1076)); /*0x76c9ad*/
  DeleteAndZero((void **)&a3); /*0x76c9b3*/
  String::Assign((char **)&a3, aMegawinningthr); /*0x76c9c1*/
  *(_DWORD *)(this + 1084) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1084)); /*0x76c9de*/
  DeleteAndZero((void **)&a3); /*0x76c9e4*/
  String::Assign((char **)&a3, aLosingthreshol); /*0x76c9f2*/
  *(_DWORD *)(this + 1080) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1080)); /*0x76ca0f*/
  DeleteAndZero((void **)&a3); /*0x76ca15*/
  String::Assign((char **)&a3, aMegalosingthre); /*0x76ca23*/
  *(_DWORD *)(this + 1088) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1088)); /*0x76ca40*/
  DeleteAndZero((void **)&a3); /*0x76ca46*/
}



// ==== 0x0076CA60  ObjectClass::ConstructWDTSelection_Create_76CA60  this=ObjectClass  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CA60(TechnoClass *this, char *a2, char **a3)
{
  TechnoClass *v3; // esi
  char **v4; // ebp
  INIClass *v5; // edi
  int Key; // eax
  int v7; // ecx
  bool v8; // bl
  int v9; // eax
  ObjectClass *v10; // edi
  int isTurretRotateSoundPlaying; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // [esp+10h] [ebp-14h] BYREF
  String v18; // [esp+14h] [ebp-10h] BYREF
  TechnoClass *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v3 = this; /*0x76ca66*/
  v19 = this; /*0x76ca6d*/
  unknown_libname_73(&v17); /*0x76ca71*/
  v4 = a3; /*0x76ca76*/
  v5 = (INIClass *)a2; /*0x76ca7a*/
  Key = INIClass::FindKey(a2, a3); /*0x76ca81*/
  v7 = 0; /*0x76ca86*/
  v20 = Key; /*0x76ca88*/
  *(_DWORD *)&v18.m_3[1] = 0; /*0x76ca8e*/
  if ( Key > 0 ) /*0x76ca92*/
  {
    while ( 1 ) /*0x76caab*/
    {
      INIClass::GetStringByIndexEx(v5, (char **)&a3, v4, v7); /*0x76caab*/
      if ( (unsigned __int8)String::NotEquals((String *)&a3, 0) ) /*0x76cab6*/
      {
        String::Assign(&v18, 0); /*0x76cac9*/
        v8 = INIClass::ReadString(v5, v4, (char **)&a3, (char **)&v18, (int)&v17) > 0; /*0x76caeb*/
        DeleteAndZero((ObjectClass *)&v18); /*0x76caee*/
        if ( v8 ) /*0x76caf5*/
        {
          if ( (unsigned __int8)String::Equals_Alt((String *)&a3, g_INI_Key_Theme) ) /*0x76cb04*/
          {
            String::Reassign((String *)&v3->turretRotateSoundController[2], (const char **)&v17); /*0x76cbcf*/
            DeleteAndZero((ObjectClass *)&a3); /*0x76cbd8*/
            break; /*0x76cbd8*/
          }
          v9 = __2_YAPAXI_Z(0x10u); /*0x76cb13*/
          if ( v9 ) /*0x76cb1d*/
            v10 = (ObjectClass *)Audio::ParseVolume(v9, (const char **)&a3, (String *)&v17); /*0x76cb30*/
          else
            v10 = 0; /*0x76cb34*/
          if ( (unsigned __int8)String::Equals_Alt((String *)v10, 0) ) /*0x76cb3a*/
          {
            if ( v10 ) /*0x76cb45*/
            {
              j_DeleteAndZero(v10); /*0x76cb49*/
              __3_YAXPAX_Z(v10); /*0x76cb4f*/
            }
          }
          else if ( v10 ) /*0x76cb5b*/
          {
            isTurretRotateSoundPlaying = v3->isTurretRotateSoundPlaying; /*0x76cb5d*/
            v12 = v3->gattlingSoundController[0]; /*0x76cb63*/
            v13 = &v3->turretRotateSoundController[3]; /*0x76cb69*/
            if ( v12 < isTurretRotateSoundPlaying /*0x76cb8e*/
              || (*((_BYTE *)v13 + 13) || !isTurretRotateSoundPlaying)
              && (v14 = v13[5], v14 > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(
                   v13,
                   isTurretRotateSoundPlaying + v14,
                   0) )
            {
              v15 = v13[4]; /*0x76cb95*/
              v16 = v13[1]; /*0x76cb98*/
              v13[4] = v15 + 1; /*0x76cb9e*/
              *(_DWORD *)(v16 + 4 * v15) = v10; /*0x76cba1*/
            }
          }
        }
      }
      DeleteAndZero((ObjectClass *)&a3); /*0x76cba8*/
      v7 = ++*(_DWORD *)&v18.m_3[1]; /*0x76cbb5*/
      if ( *(int *)&v18.m_3[1] >= v20 ) /*0x76cbbc*/
        break; /*0x76cbbc*/
      v5 = (INIClass *)a2; /*0x76ca9a*/
      v3 = v19; /*0x76ca9e*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x76cbdd*/
}



// ==== 0x0076CBF0  ObjectClass::ConstructWDTSelection_Create_76CBF0  this=ObjectClass  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CBF0(TechnoClass *this, _DWORD *a2, char **a3)
{
  char **v4; // eax
  char **v5; // eax
  char **v6; // edi
  INIClass *v7; // ebp
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  int v14; // eax
  char **v15; // eax
  PaletteClass v16; // [esp+10h] [ebp-10h] BYREF
  String v17; // [esp+14h] [ebp-Ch] BYREF
  char *v18; // [esp+1Ch] [ebp-4h] BYREF

  unknown_libname_73(&v16); /*0x76cbfd*/
  v4 = StaticString::Factory(*(StaticString **)(this->ambientSoundController[4] + 68)); /*0x76cc08*/
  String::AssignFromPtr(&v17, (const char **)v4); /*0x76cc12*/
  String::Assign((String *)&v17.m_3[1], 0); /*0x76cc1d*/
  v5 = String::Concat2(&v17, &v18, aZoomingtarget); /*0x76cc3a*/
  v6 = a3; /*0x76cc3f*/
  v7 = (INIClass *)a2; /*0x76cc43*/
  v8 = INIClass::ReadString((INIClass *)a2, a3, v5, (char **)&v17.m_3[1], (int)&v16) > 0; /*0x76cc56*/
  DeleteAndZero((ObjectClass *)&v18); /*0x76cc59*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x76cc62*/
  if ( v8 ) /*0x76cc69*/
  {
    v9 = __2_YAPAXI_Z(0x10u); /*0x76cc6d*/
    if ( v9 ) /*0x76cc77*/
      v10 = String::SplitComma(v9, (String *)&v16); /*0x76cc80*/
    else
      v10 = 0; /*0x76cc87*/
    this->attackedTargets[0] = v10; /*0x76cc89*/
  }
  String::Assign((String *)&a3, 0); /*0x76cc95*/
  v11 = String::Concat2(&v17, (char **)&a2, aTargetpalette); /*0x76ccb2*/
  INIClass::ReadString(v7, v6, v11, (char **)&a3, (int)&v16); /*0x76ccbb*/
  DeleteAndZero((ObjectClass *)&a2); /*0x76ccc4*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cccd*/
  this->currentTargets[5] = (int)PaletteClass::Load(&v16); /*0x76cce1*/
  String::Assign((String *)&a3, 0); /*0x76cce7*/
  v12 = String::Concat2(&v17, (char **)&a2, aTarget); /*0x76cd04*/
  INIClass::ReadString(v7, v6, v12, (char **)&a3, (int)&v16); /*0x76cd0d*/
  DeleteAndZero((ObjectClass *)&a2); /*0x76cd16*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cd1f*/
  v13 = __2_YAPAXI_Z(0x10u); /*0x76cd26*/
  if ( v13 ) /*0x76cd30*/
    v14 = String::SplitComma(v13, (String *)&v16); /*0x76cd39*/
  else
    v14 = 0; /*0x76cd40*/
  this->attackedTargets[1] = v14; /*0x76cd42*/
  v15 = String::Concat2(&v17, (char **)&a3, aTargetdividing); /*0x76cd58*/
  this->attackedTargets[2] = INIClass::ReadInt((bool *)v7->__pad_0, (String *)v6, (String *)v15, 32); /*0x76cd6a*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cd70*/
  DeleteAndZero((ObjectClass *)&v17); /*0x76cd79*/
  DeleteAndZero((ObjectClass *)&v16); /*0x76cd82*/
}



// ==== 0x0076CDA0  ObjectClass::ShowWDTTerritorySelection  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ShowWDTTerritorySelection(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int State; // eax
  wchar_t *StringCSF; // eax
  char v6; // bl
  CreateGameDialogControl *v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  wchar_t *v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // bl
  int *v20; // eax
  int v22; // [esp-4h] [ebp-50h]
  ObjectClass *v23; // [esp+0h] [ebp-4Ch]
  bool v24; // [esp+13h] [ebp-39h] BYREF
  DeleteAndZero v25; // [esp+14h] [ebp-38h] BYREF
  String v26; // [esp+20h] [ebp-2Ch] BYREF
  int v27; // [esp+28h] [ebp-24h]
  _BYTE v28[32]; // [esp+2Ch] [ebp-20h] BYREF

  v3 = this->ambientSoundController[4]; /*0x76cdab*/
  *(_DWORD *)&v28[28] = 0; /*0x76cdae*/
  State = FileClass::GetState((RawFileClass *)(v3 + 8)); /*0x76cdb9*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)(State + 20), 0); /*0x76cdc4*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76cdda*/
  WideString::Assign((WideString *)&v25, StringCSF); /*0x76cde4*/
  ScoreText::Show((ScoreText *)this, (const wchar_t **)&v25); /*0x76cdf0*/
  DeleteAndZero::Alt(&v25); /*0x76cdf9*/
  v6 = 0; /*0x76ce04*/
  v24 = 0; /*0x76ce06*/
  Timer::PumpMessages((Timer *)dword_87F770); /*0x76ce0a*/
  while ( 1 ) /*0x76ce0f*/
  {
    Game::ProcessIdle(v7); /*0x76ce0f*/
    DDraw::HandleSuspend((DDraw *)this); /*0x76ce16*/
    v8 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x76ce2c*/
    *(_DWORD *)&v26.m_3[1] = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x76ce39*/
    v27 = v8; /*0x76ce3d*/
    if ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x76ce41*/
    {
      v9 = (unsigned __int16)EventQueue::Read((EventQueue *)dword_87F770); /*0x76ce5a*/
      if ( v9 == 1 ) /*0x76ce62*/
      {
        WDTGame::ProcessTerritorySelection((WDTGame *)this, &v26.m_3[1], &v24); /*0x76ce70*/
      }
      else if ( v9 == 2049 ) /*0x76ce7f*/
      {
        WDTSurface::ToggleState(this->currentTargets[1], &this->vtable0, 0); /*0x76ce8e*/
        if ( (unsigned __int8)WDTSurface::PointInRect((WDTSurface *)this->currentTargets[1], &v26.m_3[1]) ) /*0x76ce9e*/
        {
          String::Assign((String *)&v25, aCanceled); /*0x76ceb4*/
          if ( (unsigned __int8)String::NotEquals((String *)&v25, 0) ) /*0x76cebf*/
          {
            *(_DWORD *)&v28[20] = &this->turretRotateSoundController[3]; /*0x76ced7*/
            *(_DWORD *)&v28[24] = 0; /*0x76cedf*/
            *(_DWORD *)&v28[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76cee7*/
            if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v28[16]) ) /*0x76ceeb*/
            {
              do /*0x76cf24*/
              {
                if ( !(unsigned __int8)String::Compare( /*0x76cf08*/
                                         (String *)&v25,
                                         *(const char ***)(*(_DWORD *)(*(_DWORD *)&v28[20] + 4) + 4
                                                                                                * *(_DWORD *)&v28[24])) )
                  break; /*0x76cf0f*/
                (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 8))(&v28[16]); /*0x76cf19*/
              }
              while ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 4))(&v28[16]) ); /*0x76cf24*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 4))(&v28[16]) ) /*0x76cf33*/
              nullsub_24(v23); /*0x76cf48*/
            *(_DWORD *)&v28[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76cf4d*/
          }
          DeleteAndZero((ObjectClass *)&v25); /*0x76cf55*/
          v6 = 1; /*0x76cf5a*/
        }
      }
    }
    else
    {
      v10 = v27; /*0x76cf6d*/
      if ( *(_DWORD *)&v26.m_3[1] != this->currentTargetThreatValues[2] || v27 != this->currentTargetThreatValues[3] ) /*0x76cf79*/
      {
        this->currentTargetThreatValues[2] = *(_DWORD *)&v26.m_3[1]; /*0x76cf85*/
        this->currentTargetThreatValues[3] = v10; /*0x76cf8f*/
        v11 = ((unsigned __int8)WDTSurface::PointInRect((WDTSurface *)this->currentTargets[1], &v26.m_3[1]) != 0) + 1; /*0x76cfa5*/
        v12 = this->currentTargetThreatValues[5]; /*0x76cfa7*/
        if ( v12 != v11 ) /*0x76cfaf*/
        {
          v13 = v12 - 1; /*0x76cfb5*/
          if ( v13 ) /*0x76cfb6*/
          {
            if ( v13 == 1 && *(_BYTE *)(Count::Get((Count *)this->currentTargets) + 104) ) /*0x76cfc6*/
            {
              v14 = Count::Get((Count *)this->currentTargets); /*0x76cfd6*/
              WDTGame::ToggleTeamMode(v14, &this->vtable0, 0); /*0x76cfdd*/
              v15 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 916); /*0x76cff3*/
              WideString::Assign((WideString *)&v25.DeleteAndZero_field_0x04, v15); /*0x76cffd*/
              ScoreText::Show((ScoreText *)this, (const wchar_t **)&v25.DeleteAndZero_field_0x04); /*0x76d009*/
              DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x04); /*0x76d012*/
            }
          }
          else
          {
            String::Assign((String *)&v25.DeleteAndZero_field_0x08, aMapleave); /*0x76d022*/
            MSSfxClass::FindByName((char *)this, (const char **)&v25.DeleteAndZero_field_0x08); /*0x76d02e*/
            DeleteAndZero((ObjectClass *)&v25.DeleteAndZero_field_0x08); /*0x76d037*/
            this->currentTargets[2] = -1; /*0x76d040*/
            MSFrameAnim::drawFrame((MSFrameAnim *)v28); /*0x76d04a*/
            TerritorySelectWDT(this, (int)v28); /*0x76d056*/
            *(_DWORD *)v28 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d05f*/
            ComPtr::Release((ComPtr *)v28); /*0x76d067*/
          }
        }
        if ( v11 == 1 ) /*0x76d06f*/
        {
          if ( this->currentTargetThreatValues[5] != 1 ) /*0x76d091*/
          {
            String::Assign(&v26, aMapenter); /*0x76d09c*/
            MSSfxClass::FindByName((char *)this, (const char **)&v26); /*0x76d0a8*/
            DeleteAndZero((ObjectClass *)&v26); /*0x76d0b1*/
          }
          v16 = (int *)Count::Get((Count *)this->currentTargets); /*0x76d0bd*/
          v17 = Surface::PixelToIndex(v16, &v26.m_3[1]); /*0x76d0c4*/
          if ( v17 != this->currentTargets[2] ) /*0x76d0cf*/
          {
            v22 = v17; /*0x76d0d5*/
            this->currentTargets[2] = v17; /*0x76d0d9*/
            Count::Get((Count *)this->currentTargets); /*0x76d0df*/
            v18 = ComPtr::DestroyWrapper((int)&v28[8], v22); /*0x76d0e6*/
            TerritorySelectWDT(this, v18); /*0x76d0ee*/
            ComPtr::Territory_Dtor((ComPtr *)&v28[8]); /*0x76d0f7*/
          }
        }
        else if ( v11 == 2 && this->currentTargetThreatValues[5] != 2 ) /*0x76d07f*/
        {
          ShowWDTTerritorySelection_Show(this); /*0x76d083*/
        }
        this->currentTargetThreatValues[5] = v11; /*0x76d0fc*/
      }
    }
    GameClass::FrameLoop((GameClass *)this, 1); /*0x76d106*/
    if ( v6 ) /*0x76d111*/
      break; /*0x76d111*/
    if ( v24 ) /*0x76d115*/
    {
      v19 = v28[28]; /*0x76d11b*/
      v20 = &this->currentTargets[3]; /*0x76d11f*/
      goto LABEL_38; /*0x76d125*/
    }
  }
  if ( v24 ) /*0x76d129*/
  {
    v19 = v28[28]; /*0x76d12b*/
    v20 = &this->currentTargets[3]; /*0x76d12f*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)&v26.m_3[1]); /*0x76d13b*/
    *(_DWORD *)&v26.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d140*/
    v19 = 1; /*0x76d148*/
    v20 = (int *)&v26.m_3[1]; /*0x76d14d*/
  }
LABEL_38:
  WDTGame::Constructor((WDTGame *)a2, (int)v20); /*0x76d151*/
  if ( (v19 & 1) != 0 ) /*0x76d160*/
  {
    *(_DWORD *)&v26.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d166*/
    ComPtr::Release((ComPtr *)&v26.m_3[1]); /*0x76d16e*/
  }
  return a2; /*0x76d175*/
}



// ==== 0x0076D180  WDTGame::ProcessTerritorySelection  this=WDTGame  sig=csp ====
void __thiscall WDTGame::ProcessTerritorySelection(WDTGame *this, char *a2, bool *a3)
{
  char *v3; // ebx
  int v5; // ecx
  wchar_t *StringCSF; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  int v12; // [esp-8h] [ebp-30h]
  ObjectClass *v13; // [esp+0h] [ebp-28h]
  _BYTE v14[32]; // [esp+8h] [ebp-20h] BYREF

  v3 = a2; /*0x76d184*/
  *(_DWORD *)&v14[28] = 0; /*0x76d18c*/
  if ( (unsigned __int8)WDTSurface::PointInRect(*((WDTSurface **)this + 279), a2) ) /*0x76d19a*/
  {
    WDTSurface::ToggleState(*((_DWORD *)this + 279), (int *)this->__pad_0, 1); /*0x76d1bd*/
    v5 = *((_DWORD *)this + 279); /*0x76d1c2*/
    if ( !*(_BYTE *)(v5 + 104) ) /*0x76d1c8*/
    {
      WDTGame::ToggleTeamMode(v5, (int *)this->__pad_0, 1); /*0x76d1d6*/
      String::Assign((String *)&a3, aMousecancel); /*0x76d1e4*/
      MSSfxClass::FindByName(this->__pad_0, (const char **)&a3); /*0x76d1f0*/
      DeleteAndZero((ObjectClass *)&a3); /*0x76d1f9*/
      StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76d20f*/
      WideString::Assign((WideString *)&a3, StringCSF); /*0x76d219*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&a3); /*0x76d225*/
      DeleteAndZero::Alt((DeleteAndZero *)&a3); /*0x76d22e*/
    }
  }
  else
  {
    WDTSurface::ToggleState(*((_DWORD *)this + 279), (int *)this->__pad_0, 0); /*0x76d245*/
    v7 = (int *)Count::Get((Count *)this + 278); /*0x76d253*/
    v8 = Surface::PixelToIndex(v7, v3); /*0x76d25a*/
    if ( v8 != *((_DWORD *)this + 280) ) /*0x76d265*/
    {
      v12 = v8; /*0x76d26b*/
      *((_DWORD *)this + 280) = v8; /*0x76d26f*/
      Count::Get((Count *)this + 278); /*0x76d275*/
      v9 = ComPtr::DestroyWrapper((int)&v14[8], v12); /*0x76d27c*/
      TerritorySelectWDT((TechnoClass *)this, v9); /*0x76d284*/
      ComPtr::Territory_Dtor((ComPtr *)&v14[8]); /*0x76d28d*/
    }
    v10 = ComPtr::DestroyWrapper((int)&v14[16], *((_DWORD *)this + 280)); /*0x76d2a4*/
    WDTGame::Constructor((WDTGame *)v14, v10); /*0x76d2ae*/
    ComPtr::Territory_Dtor((ComPtr *)&v14[16]); /*0x76d2b7*/
    v11 = TerritorySelectWDT((TechnoClass *)this, (int)v14); /*0x76d2cc*/
    ComPtr::Territory_Dtor((ComPtr *)v14); /*0x76d2ce*/
    *a3 = v11; /*0x76d2da*/
    if ( v11 ) /*0x76d2dc*/
    {
      String::Assign((String *)&a2, aConflictselect); /*0x76d2eb*/
      if ( (unsigned __int8)String::NotEquals((String *)&a2, 0) ) /*0x76d2f6*/
      {
        *(_DWORD *)&v14[20] = (char *)this + 1172; /*0x76d30d*/
        *(_DWORD *)&v14[24] = 0; /*0x76d311*/
        *(_DWORD *)&v14[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76d319*/
        if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v14[16]) ) /*0x76d321*/
        {
          do /*0x76d35a*/
          {
            if ( !(unsigned __int8)String::Compare( /*0x76d33e*/
                                     (String *)&a2,
                                     *(const char ***)(*(_DWORD *)(*(_DWORD *)&v14[20] + 4) + 4 * *(_DWORD *)&v14[24])) )
              break; /*0x76d345*/
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 8))(&v14[16]); /*0x76d34f*/
          }
          while ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 4))(&v14[16]) ); /*0x76d35a*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 4))(&v14[16]) ) /*0x76d369*/
          nullsub_24(v13); /*0x76d37e*/
      }
      DeleteAndZero((ObjectClass *)&a2); /*0x76d387*/
    }
  }
}



// ==== 0x0076D3A0  ObjectClass::method_76D3A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_76D3A0(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  int v7[2]; // [esp+8h] [ebp-14h] BYREF
  rc_ptr v8[4]; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v10 = 0; /*0x76d3ac*/
  v3 = Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d3ba*/
  if ( v3 != this->currentTargets[2] ) /*0x76d3c5*/
  {
    this->currentTargets[2] = v3; /*0x76d3cb*/
    v4 = ComPtr::DestroyWrapper((int)v8, v3); /*0x76d3d9*/
    TerritorySelectWDT(this, v4); /*0x76d3e1*/
    ComPtr::Territory_Dtor((ComPtr *)v8); /*0x76d3ea*/
  }
  FindTerritoryWOL(v8, this->currentTargets[1] + 44, this->currentTargets[2]); /*0x76d403*/
  ComPtr::Constructor((ComPtr *)v7); /*0x76d40c*/
  v7[0] = (int)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d415*/
  ComPtr::Set((ComPtr *)v7, v9); /*0x76d422*/
  *(_DWORD *)v8 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d42b*/
  ComPtr::Release((ComPtr *)v8); /*0x76d433*/
  v5 = TerritorySelectWDT(this, (int)v7); /*0x76d448*/
  v7[0] = (int)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d44a*/
  ComPtr::Release((ComPtr *)v7); /*0x76d452*/
  return v5; /*0x76d459*/
}



// ==== 0x0076D470  ObjectClass::method_76D470  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76D470(TechnoClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  rc_ptr v4[4]; // [esp+4h] [ebp-8h] BYREF

  result = (_DWORD *)Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d481*/
  if ( result != (_DWORD *)this->currentTargets[2] ) /*0x76d48c*/
  {
    this->currentTargets[2] = (int)result; /*0x76d48e*/
    FindTerritoryWOL(v4, this->currentTargets[1] + 44, (int)result); /*0x76d4a2*/
    TerritorySelectWDT(this, (int)v4); /*0x76d4ae*/
    *(_DWORD *)v4 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d4b7*/
    return ComPtr::Release((ComPtr *)v4); /*0x76d4bf*/
  }
  return result; /*0x76d4c4*/
}



// ==== 0x0076D4D0  Trigger::ProcessMapEvents  this=ObjectClass  sig=csp ====
void __userpurge Trigger::ProcessMapEvents(int this@<ecx>, ObjectClass *a2@<edi>, int a3, char a4, char a5)
{
  void *inited; // ebx
  int v7; // eax
  WDTObject *v8; // eax
  int (__thiscall ***v9)(_DWORD, int); // eax
  int v10; // ecx
  unsigned int v11; // edi
  int CellType; // ebp
  int v13; // edi
  BOOL v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  Trigger *v18; // eax
  BombClass *v19; // eax
  MSShapeAnim *v20; // eax
  MSAnim *v21; // edi
  void *v22; // eax
  void (__thiscall ***v23)(_DWORD, int); // ecx
  ObjectClass *v24; // [esp+0h] [ebp-14Ch]
  VectorCursor v25; // [esp+10h] [ebp-13Ch] BYREF
  int *p_owningHouseIndex; // [esp+2Ch] [ebp-120h]
  int v27; // [esp+30h] [ebp-11Ch]
  ObjectClass v28; // [esp+34h] [ebp-118h] BYREF
  CCFileClass v29; // [esp+E0h] [ebp-6Ch] BYREF
  int v30[3]; // [esp+138h] [ebp-14h] BYREF
  int v31; // [esp+144h] [ebp-8h]

  inited = 0; /*0x76d4da*/
  v7 = Count::Get((Count *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v25, v7 + 44, 0); /*0x76d4f0*/
  while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d4fd*/
  {
    v8 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v25.VectorCursor_field_0x04 + 4) /*0x76d512*/
                                                      + 8 * v25.VectorCursor_field_0x08));
    v9 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v8); /*0x76d519*/
    if ( v9 ) /*0x76d520*/
      Session::RemoveTeam((Session *)this, v9); /*0x76d525*/
    (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 8))(&v25); /*0x76d532*/
  }
  v24 = a2; /*0x76d545*/
  Trigger::checkCondition((Trigger *)&v28.owningHouseIndex, 0, 0); /*0x76d54c*/
  v28.owningHouseIndex = (int)&DynamicVectorClass<MSAnim *>::`vftable'; /*0x76d561*/
  v28.ambientSoundController[0] = 10; /*0x76d565*/
  v28.attachedBomb = 0; /*0x76d569*/
  Trigger::checkCondition((Trigger *)&v28.?, 0, 0); /*0x76d56d*/
  v10 = *(_DWORD *)(this + 1116); /*0x76d572*/
  v28.? = (int)&DynamicVectorClass<MSAnim *>::`vftable'; /*0x76d57c*/
  v28.occupant = 10; /*0x76d585*/
  v28.? = 0; /*0x76d589*/
  VectorCursor::Construct((VectorCursor *)&v25.VectorCursor_field_0x0C, v10 + 44, 0); /*0x76d58d*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v25.VectorCursor_field_0x0C + 4))(&v25.VectorCursor_field_0x0C) )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(WDTClass **)(this + 1164), v11); /*0x76d5cd*/
    v13 = WDTClass::GetCellType(*(WDTClass **)(a3 + 4), v11); /*0x76d5d7*/
    if ( v13 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d5df*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d603*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d605*/
      }
      v14 = !*(_BYTE *)(this + 1092) || a5; /*0x76d635*/
      Map_Process_76FD40( /*0x76d64f*/
        *(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
        CellType,
        v13,
        v13,
        (int *)this,
        v14);
    }
    if ( a4 && v13 == 1 )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4); /*0x76d67a*/
      v16 = *(_DWORD *)(v15 + 16) + *(_DWORD *)(*(_DWORD *)(this + 1116) + 68); /*0x76d695*/
      v17 = *(_DWORD *)(*(_DWORD *)(this + 1116) + 72) + *(_DWORD *)(v15 + 20); /*0x76d69a*/
      if ( *(_DWORD *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2((CCFileClass *)&v28.ambientSoundController[1], *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v28.ambientSoundController[1], 0) ) /*0x76d6b3*/
        {
          v18 = (Trigger *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v18 ) /*0x76d6c8*/
            inited = Trigger::initTrigger( /*0x76d6ec*/
                       v18,
                       *(char ***)(this + 1136),
                       v16,
                       v17,
                       *(_DWORD *)(this + 1132),
                       3,
                       512,
                       this + 24);
          if ( (int)v28.attachedBomb < (int)v28.nextObject /*0x76d71b*/
            || (BYTE1(v28.attachedTag) || !v28.nextObject)
            && v28.ambientSoundController[0] > 0
            && (*(unsigned __int8 (__thiscall **)(int *, char *, _DWORD))(v28.owningHouseIndex + 8))(
                 &v28.owningHouseIndex,
                 (char *)v28.nextObject + v28.ambientSoundController[0],
                 0) )
          {
            v19 = v28.attachedBomb++; /*0x76d726*/
            *(_DWORD *)(v28.fallRate + 4 * (_DWORD)v19) = inited; /*0x76d731*/
          }
          inited = 0; /*0x76d734*/
        }
        v28.ambientSoundController[1] = (int)&CCFileClass::`vftable'; /*0x76d73d*/
        v28.location[2] = 0; /*0x76d745*/
        Vector::Clear((int)&v28.isInLogic); /*0x76d74c*/
        v28.ambientSoundController[1] = (int)&off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v28.ambientSoundController[1]); /*0x76d75d*/
      }
      CCFileClass::Construct2(&v29, *(char ***)(this + 1140)); /*0x76d770*/
      if ( (unsigned __int8)CCFileClass::Open(&v29, 0) )
      {
        v20 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
        v21 = v20
            ? (MSAnim *)MSShapeAnim::Constructor(
                          v20,
                          *(char ***)(this + 1140),
                          v16,
                          v17,
                          *(_DWORD *)(this + 1132),
                          5,
                          1,
                          512)
            : 0;
        MSAnim::SetField(v21, *(_DWORD *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v21, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v21, 0); /*0x76d7d8*/
        Trigger::executeActions( /*0x76d7f0*/
          *(Trigger **)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
          (int)v21);
        if ( (int)v28.? < v28.? /*0x76d821*/
          || (BYTE1(v28.?) || !v28.?)
          && v28.occupant > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v28.? + 8))(&v28.?, v28.occupant + v28.?, 0) )
        {
          v22 = v28.?++; /*0x76d82c*/
          *(_DWORD *)(v28.? + 4 * (_DWORD)v22) = v21; /*0x76d837*/
        }
      }
      *(_DWORD *)v29.CDFileClass = &CCFileClass::`vftable'; /*0x76d841*/
      v31 = 0; /*0x76d84c*/
      Vector::Clear((int)v30); /*0x76d853*/
      BufferIOFileClass::Destruct((BufferIOFileClass *)&v29); /*0x76d85f*/
    }
    (*(void (__thiscall **)(int *))(v25.VectorCursor_field_0x0C + 8))(&v25.VectorCursor_field_0x0C); /*0x76d86c*/
  }
  p_owningHouseIndex = &v28.owningHouseIndex; /*0x76d88b*/
  v27 = 0; /*0x76d897*/
  v25.VectorCursor_field_0x18 = (int)&VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76d89b*/
  v28.? = &v28.?; /*0x76d89f*/
  v28.? = 0; /*0x76d8a3*/
  v28.? = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v28.?) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d8c0*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d8e4*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v25.VectorCursor_field_0x18 + 4))(&v25.VectorCursor_field_0x18) ) /*0x76d905*/
      {
        if ( *(_BYTE *)(this + 1092) ) /*0x76d910*/
        {
          v23 = *(void (__thiscall ****)(_DWORD, int))(p_owningHouseIndex[1] + 4 * v27); /*0x76d925*/
          if ( v23 ) /*0x76d92a*/
            (**v23)(v23, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((String *)&v28, aTargetzoom); /*0x76d944*/
          if ( (unsigned __int8)String::NotEquals((String *)&v28, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger((Trigger *)&v25, this + 1172, 0); /*0x76d963*/
            while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d970*/
            {
              if ( !(unsigned __int8)String::Compare( /*0x76d98a*/
                                       (String *)&v28,
                                       *(const char ***)(*(_DWORD *)(v25.VectorCursor_field_0x04 + 4)
                                                       + 4 * v25.VectorCursor_field_0x08)) )
                break; /*0x76d991*/
              (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 8))(&v25); /*0x76d99b*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d9b5*/
              nullsub_24(v24); /*0x76d9ca*/
            *(_DWORD *)v25.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76d9cf*/
          }
          DeleteAndZero(&v28); /*0x76d9d7*/
          PriorityQueue::Add((PriorityQueue *)this, *(_DWORD *)(p_owningHouseIndex[1] + 4 * v27)); /*0x76d9ed*/
          MSEngine::ProcessEvents((MSEngine *)this, *(_DWORD *)(p_owningHouseIndex[1] + 4 * v27), 300000); /*0x76da08*/
        }
        (*(void (__thiscall **)(int *))(v25.VectorCursor_field_0x18 + 8))(&v25.VectorCursor_field_0x18); /*0x76da15*/
      }
      PriorityQueue::Add((PriorityQueue *)this, *(_DWORD *)(*((_DWORD *)v28.? + 1) + 4 * (int)v28.?)); /*0x76da29*/
      (*((void (__thiscall **)(void **))v28.? + 2))(&v28.?); /*0x76da36*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v28.? + 1))(&v28.?) ); /*0x76da41*/
  }
  ComPtr::Set((ComPtr *)(this + 1160), *(_DWORD *)(a3 + 4)); /*0x76da5d*/
  v28.? = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76da66*/
  v25.VectorCursor_field_0x18 = (int)&VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76da6a*/
  v25.VectorCursor_field_0x0C = (int)&VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76da76*/
  v28.? = (int)&VectorClass<MSAnim *>::`vftable'; /*0x76da7e*/
  if ( v28.? && BYTE1(v28.?) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z((void *)v28.?); /*0x76da8e*/
    v28.? = 0; /*0x76da96*/
  }
  v28.owningHouseIndex = (int)&VectorClass<MSAnim *>::`vftable'; /*0x76da9e*/
  v28.? = 0; /*0x76daa2*/
  BYTE1(v28.?) = 0; /*0x76daa9*/
  if ( v28.fallRate ) /*0x76daaf*/
  {
    if ( BYTE1(v28.attachedTag) ) /*0x76dab7*/
      __3_YAXPAX_Z((void *)v28.fallRate); /*0x76daba*/
  }
}



// ==== 0x0076DAD0  ObjectClass::TerritorySelectWDT  this=ObjectClass  sig=csp ====
bool __thiscall TerritorySelectWDT(TechnoClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // bl
  MSAnim *v6; // edi
  int State; // eax
  wchar_t *StringCSF; // eax
  unsigned int CellType; // edi
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  wchar_t *v14; // eax
  DeleteAndZero *v15; // ecx
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  int v20; // edi
  wchar_t **v21; // eax
  MSAnim *v22; // edi
  int v23; // ebp
  wchar_t *v24; // eax
  wchar_t **v25; // eax
  wchar_t *v26; // [esp-4h] [ebp-3Ch]
  DeleteAndZero v27; // [esp+10h] [ebp-28h] BYREF
  WideString v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  WideString v29[4]; // [esp+20h] [ebp-18h] BYREF
  WideString v30[4]; // [esp+24h] [ebp-14h] BYREF
  DeleteAndZero v31; // [esp+28h] [ebp-10h] BYREF
  int v32; // [esp+34h] [ebp-4h]

  v3 = this->customSound_controller[1]; /*0x76dae0*/
  v4 = this->currentTargets[4]; /*0x76dae3*/
  v5 = v3 != 0; /*0x76daeb*/
  if ( *(_DWORD *)(a2 + 4) != v4 ) /*0x76daf0*/
  {
    if ( v4 ) /*0x76daf8*/
    {
      if ( v3 ) /*0x76dafc*/
        ComPtr::Set((ComPtr *)this->customSound_controller, 0); /*0x76db03*/
      TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 0, &this->vtable0); /*0x76db11*/
      v6 = *(MSAnim **)(this->currentTargets[4] + 44); /*0x76db1c*/
      if ( v6 ) /*0x76db21*/
      {
        MSAnim::SetField(v6, this->attackedTargets[2] - 1); /*0x76db2d*/
        MSAnim::GetField(v6, 0); /*0x76db36*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v6, 0); /*0x76db3f*/
      }
    }
    ComPtr::Set((ComPtr *)&this->currentTargets[3], *(_DWORD *)(a2 + 4)); /*0x76db54*/
    if ( !this->currentTargets[4] ) /*0x76db59*/
    {
      State = FileClass::GetState((RawFileClass *)(this->ambientSoundController[4] + 8)); /*0x76db6b*/
      ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)(State + 20), 0); /*0x76db76*/
      StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76db8c*/
      WideString::Assign((WideString *)&a2, StringCSF); /*0x76db96*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&a2); /*0x76dba2*/
      DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76dbab*/
      TerritorySelectWDT_Delete((TechnoClass *)&this->customSound_controller[2], 1, 0, 30); /*0x76dbb9*/
      return v5; /*0x76dbc7*/
    }
    v5 = 0; /*0x76dbce*/
    unknown_libname_74(&v27); /*0x76dbd0*/
    unknown_libname_74(&v27.DeleteAndZero_field_0x08); /*0x76dbd9*/
    CellType = WDTClass::GetCellType( /*0x76dbf0*/
                 (WDTClass *)this->turretRotateSoundController[1],
                 *(_DWORD *)(this->currentTargets[4] + 8));
    v11 = 2; /*0x76dbf2*/
    if ( CellType >= 2 ) /*0x76dbfa*/
      v11 = *(_DWORD *)(this->ambientSoundController[4] + 68) != CellType; /*0x76dc0b*/
    ScoreScreen::RemoveItem((ScoreScreen *)&this->customSound_controller[2], 3, v11, 0, 0, 30); /*0x76dc19*/
    v12 = CellType - 1; /*0x76dc1e*/
    if ( v12 ) /*0x76dc1f*/
    {
      v13 = v12 - 1; /*0x76dc25*/
      if ( v13 ) /*0x76dc26*/
      {
        if ( v13 == 1 ) /*0x76dc29*/
        {
          v16 = GetStringCSF(aWdtSovietheldt, 0, g_Str_File_WDTSel_cpp, 689); /*0x76dc71*/
          WideString::Assign(v29, v16); /*0x76dc7b*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v29); /*0x76dc87*/
          v15 = (DeleteAndZero *)v29; /*0x76dc8c*/
        }
        else
        {
          v14 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 697); /*0x76dc3c*/
          WideString::Assign(v28, v14); /*0x76dc46*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v28); /*0x76dc52*/
          v15 = (DeleteAndZero *)v28; /*0x76dc57*/
        }
      }
      else
      {
        v17 = GetStringCSF(aWdtAlliedheldt, 0, g_Str_File_WDTSel_cpp, 685); /*0x76dca3*/
        WideString::Assign(v30, v17); /*0x76dcad*/
        ScoreText::Show((ScoreText *)this, (const wchar_t **)v30); /*0x76dcb9*/
        v15 = (DeleteAndZero *)v30; /*0x76dcbe*/
      }
    }
    else
    {
      v18 = GetStringCSF(aWdtTerritoryse_0, 0, g_Str_File_WDTSel_cpp, 693); /*0x76dcd5*/
      WideString::Assign((WideString *)&v31, v18); /*0x76dcdf*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&v31); /*0x76dceb*/
      v15 = &v31; /*0x76dcf0*/
    }
    DeleteAndZero::Alt(v15); /*0x76dcf4*/
    TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 1, &this->vtable0); /*0x76dcff*/
    if ( Conflict::GetOwnerHouse(*(Conflict **)(this->ambientSoundController[4] + 12)) == this->currentTargetThreatValues[4] ) /*0x76dd18*/
    {
      v19 = this->ambientSoundController[4] + 24; /*0x76dd25*/
      v32 = 0; /*0x76dd28*/
      v31.DeleteAndZero_field_0x08 = v19; /*0x76dd30*/
      v31.DeleteAndZero_field_0x04 = (int)&VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x76dd34*/
      if ( Campaign_WorldDominationTour_24::AddRef((_VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *)&v31.DeleteAndZero_field_0x04) ) /*0x76dd3c*/
      {
        do /*0x76dd7b*/
        {
          v20 = *(_DWORD *)(this->currentTargets[4] + 8); /*0x76dd54*/
          if ( FindWDTTerritoryClass_Find_Find(*(ObjectClass **)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) /*0x76dd66*/
                                                               + 8 * v32
                                                               + 4)) == v20 )
            break; /*0x76dd66*/
          (*(void (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 8))(&v31.DeleteAndZero_field_0x04); /*0x76dd70*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ); /*0x76dd7b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ) /*0x76dd8a*/
      {
        v5 = 1; /*0x76dd9d*/
        ComPtr::Set( /*0x76ddaa*/
          (ComPtr *)this->customSound_controller,
          *(_DWORD *)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4));
        v21 = TerritorySelectWDT_Create( /*0x76ddc7*/
                *(char **)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4),
                (wchar_t **)&v31);
        WideString::Reassign_Alt((WideString *)&v27, (const wchar_t **)v21); /*0x76ddd1*/
        DeleteAndZero::Alt(&v31); /*0x76ddda*/
        WideString::Reassign_Alt((WideString *)&v27.DeleteAndZero_field_0x08, (const wchar_t **)&v27); /*0x76dde8*/
        v22 = *(MSAnim **)(*(_DWORD *)(a2 + 4) + 44); /*0x76ddf4*/
        if ( v22 ) /*0x76ddf9*/
        {
          MSAnim::SetField(v22, 0xFFFFFFFF); /*0x76ddff*/
          MSAnim::GetField(v22, this->attackedTargets[2]); /*0x76de0d*/
          TerritoryUpdateDisplayWOL((ObjectClass *)v22, this->attackedTargets[2]); /*0x76de1b*/
        }
      }
    }
    v23 = this->currentTargets[4]; /*0x76de20*/
    v26 = GetStringCSF(aWdtTerritorysu, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de3d*/
    v24 = GetStringCSF(aWdtTerritorypr, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de54*/
    v25 = FormatWideStringPrefix((wchar_t **)&a2, v24, (wchar_t **)(v23 + 12)); /*0x76de5f*/
    WideString::AssignConcat((WideString *)v25, (wchar_t **)&v27.DeleteAndZero_field_0x04, v26); /*0x76de66*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76de6f*/
    if ( WideString::Length((WideString *)&v27.DeleteAndZero_field_0x08) ) /*0x76de78*/
      WideString::Append((WideString *)&v27.DeleteAndZero_field_0x04, (const wchar_t **)&v27); /*0x76de8a*/
    ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v27.DeleteAndZero_field_0x04, 0); /*0x76de98*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x04); /*0x76dea1*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x08); /*0x76deaa*/
    DeleteAndZero::Alt(&v27); /*0x76deb3*/
  }
  return v5; /*0x76dbbe*/
}



// ==== 0x0076DED0  ObjectClass::method_76DED0  this=ObjectClass  sig=csp ====
int __thiscall sub_76DED0(TechnoClass *this)
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76deda*/
  v2 = this->currentTargets[1]; /*0x76dee2*/
  *(_DWORD *)v5.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76dee8*/
  *(_DWORD *)&v5.m_1[3] = v2 + 44; /*0x76def3*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76deff*/
        (_BYTE)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] /*0x76df13*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df1a*/
      Session::RemoveTeam((Session *)this, v4); /*0x76df1f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 8))(&v5); /*0x76df2c*/
  }
  return result; /*0x76df3e*/
}



// ==== 0x0076DF50  ObjectClass::method_76DF50  this=ObjectClass  sig=csp ====
int __thiscall sub_76DF50(TechnoClass *this)
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76df5a*/
  v2 = this->currentTargets[1]; /*0x76df62*/
  *(_DWORD *)v5.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76df68*/
  *(_DWORD *)&v5.m_1[3] = v2 + 44; /*0x76df73*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76df7f*/
        (_BYTE)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] /*0x76df93*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df9a*/
      Session::RemoveTeam((Session *)this, v4); /*0x76df9f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 8))(&v5); /*0x76dfac*/
  }
  return result; /*0x76dfbe*/
}



// ==== 0x0076DFD0  ObjectClass::method_76DFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_76DFD0(ObjectClass *this)
{
  ObjectClass *v2; // [esp+0h] [ebp-14h]
  String v3; // [esp+4h] [ebp-10h] BYREF
  char *v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  String::Assign(&v3, aMapenter); /*0x76dfdf*/
  if ( (unsigned __int8)String::NotEquals(&v3, 0) ) /*0x76dfea*/
  {
    v4 = (char *)this + 1172; /*0x76e001*/
    v5 = 0; /*0x76e005*/
    *(_DWORD *)&v3.m_3[1] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e00d*/
    if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v3.m_3[1]) ) /*0x76e015*/
    {
      do /*0x76e04e*/
      {
        if ( !(unsigned __int8)String::Compare(&v3, *(const char ***)(*((_DWORD *)v4 + 1) + 4 * v5)) ) /*0x76e032*/
          break; /*0x76e039*/
        (*(void (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 8))(&v3.m_3[1]); /*0x76e043*/
      }
      while ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 4))(&v3.m_3[1]) ); /*0x76e04e*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 4))(&v3.m_3[1]) ) /*0x76e05d*/
      nullsub_24(v2); /*0x76e072*/
  }
  DeleteAndZero((ObjectClass *)&v3); /*0x76e07b*/
}



// ==== 0x0076E090  ObjectClass::method_76E090  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76E090(TechnoClass *this)
{
  ObjectClass *v3; // [esp+0h] [ebp-1Ch]
  String v4; // [esp+4h] [ebp-18h] BYREF
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v5; // [esp+10h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-4h]

  String::Assign(&v4, aMapleave); /*0x76e09f*/
  if ( (unsigned __int8)String::NotEquals(&v4, 0) ) /*0x76e0aa*/
  {
    *(_DWORD *)&v5.m_1[3] = &this->turretRotateSoundController[3]; /*0x76e0c1*/
    v6 = 0; /*0x76e0c5*/
    *(_DWORD *)v5.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e0cd*/
    if ( Vector::HasCapacity(&v5) ) /*0x76e0d5*/
    {
      do /*0x76e10e*/
      {
        if ( !(unsigned __int8)String::Compare(&v4, *(const char ***)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] + 4) + 4 * v6)) ) /*0x76e0f2*/
          break; /*0x76e0f9*/
        (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 /*0x76e103*/
                                                                                                 + 8))(&v5);
      }
      while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ); /*0x76e10e*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ) /*0x76e11d*/
      nullsub_24(v3); /*0x76e132*/
  }
  DeleteAndZero((ObjectClass *)&v4); /*0x76e13b*/
  this->currentTargets[2] = -1; /*0x76e144*/
  ComPtr::Constructor((ComPtr *)&v4.m_3[1]); /*0x76e14e*/
  *(_DWORD *)&v4.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76e15a*/
  TerritorySelectWDT(this, (int)&v4.m_3[1]); /*0x76e162*/
  *(_DWORD *)&v4.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76e16b*/
  return ComPtr::Release((ComPtr *)&v4.m_3[1]); /*0x76e178*/
}



// ==== 0x0076E180  ObjectClass::ShowWDTTerritorySelection_Show  this=ObjectClass  sig=csp ====
void __thiscall ShowWDTTerritorySelection_Show(TechnoClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v4; // [esp+0h] [ebp-14h]
  DeleteAndZero v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v2 = this->currentTargets[1]; /*0x76e186*/
  if ( !*(_BYTE *)(v2 + 104) ) /*0x76e18c*/
  {
    WDTGame::ToggleTeamMode(v2, &this->vtable0, 1); /*0x76e19c*/
    String::Assign((String *)&v5, aMousecancel); /*0x76e1aa*/
    if ( (unsigned __int8)String::NotEquals((String *)&v5, 0) ) /*0x76e1b5*/
    {
      v6 = 0; /*0x76e1c8*/
      v5.DeleteAndZero_field_0x08 = (int)&this->turretRotateSoundController[3]; /*0x76e1d0*/
      v5.DeleteAndZero_field_0x04 = (int)&VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e1d8*/
      if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v5.DeleteAndZero_field_0x04) ) /*0x76e1e0*/
      {
        do /*0x76e219*/
        {
          if ( !(unsigned __int8)String::Compare( /*0x76e1fd*/
                                   (String *)&v5,
                                   *(const char ***)(*(_DWORD *)(v5.DeleteAndZero_field_0x08 + 4) + 4 * v6)) )
            break; /*0x76e204*/
          (*(void (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 8))(&v5.DeleteAndZero_field_0x04); /*0x76e20e*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ); /*0x76e219*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ) /*0x76e228*/
        nullsub_24(v4); /*0x76e23d*/
    }
    DeleteAndZero((ObjectClass *)&v5); /*0x76e246*/
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76e25c*/
    WideString::Assign((WideString *)&v5, StringCSF); /*0x76e266*/
    ScoreText::Show((ScoreText *)this, (const wchar_t **)&v5); /*0x76e272*/
    DeleteAndZero::Alt(&v5); /*0x76e27b*/
  }
}



// ==== 0x0076E2F0  ObjectClass::Team_Start_76E2F0  this=ObjectClass  sig=csp ====
char *__userpurge Team_Start_76E2F0@<eax>(int this@<ecx>, DeleteAndZero a2)
{
  int OwnerHouse; // eax
  void *v4; // ebp
  ObjectClass *v5; // ecx
  ObjectClass *v6; // edi
  int v7; // eax
  int started; // eax
  int v9; // eax
  char v11; // [esp-4h] [ebp-18h]
  WideString v12[8]; // [esp+Ch] [ebp-8h] BYREF

  WideString::Assign(v12, 0); /*0x76e2fe*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)v12, 0); /*0x76e30c*/
  DeleteAndZero::Alt((DeleteAndZero *)v12); /*0x76e315*/
  OwnerHouse = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(this + 76) + 12)); /*0x76e323*/
  v4 = *(void **)a2.__pad_0; /*0x76e328*/
  v5 = *(ObjectClass **)(this + 76); /*0x76e32c*/
  v6 = (ObjectClass *)OwnerHouse; /*0x76e330*/
  v12[0] = (WideString)1; /*0x76e332*/
  v7 = sub_764FF0(v5, *(int *)a2.__pad_0); /*0x76e337*/
  if ( (int)v6 - v7 > 8 ) /*0x76e343*/
    v7 = (int)&v6[-1].location[2]; /*0x76e345*/
  if ( (ObjectClass *)v7 == v6 ) /*0x76e34a*/
  {
    a2.__pad_0[0] = 0; /*0x76e368*/
    started = Team_Start_76E430((TechnoClass *)this, (int)v6, (bool *)a2.__pad_0); /*0x76e36d*/
    ScoreScreen::RemoveItem((ScoreScreen *)(this + 88), 2, started, a2.__pad_0[0], 1, 0); /*0x76e381*/
  }
  else
  {
    v12[0] = (WideString)!Team_Start_76E8B0((TechnoClass *)this, v7, (int)v6); /*0x76e35a*/
  }
  WideString::Assign((WideString *)&a2, 0); /*0x76e38c*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&a2, 0); /*0x76e39a*/
  DeleteAndZero::Alt(&a2); /*0x76e3a3*/
  DDraw::HandleSuspend((DDraw *)this); /*0x76e3aa*/
  while ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x76e3b5*/
  {
    if ( EventQueue::Read((EventQueue *)dword_87F770) == 27 ) /*0x76e3ce*/
      *(_BYTE *)(this + 1092) = 1; /*0x76e3d0*/
  }
  v11 = (char)v12[0]; /*0x76e3f1*/
  v9 = ActivateScreenWDT((int)v12, (int)v6); /*0x76e3ff*/
  Trigger::ProcessMapEvents(this, v6, v9, 1, v11); /*0x76e407*/
  *(_DWORD *)v12 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e410*/
  ComPtr::Release((ComPtr *)v12); /*0x76e418*/
  return sub_765000(*(_DWORD *)(this + 76), v4); /*0x76e426*/
}



// ==== 0x0076E430  ObjectClass::Team_Start_76E430  this=ObjectClass  sig=csp ====
int __thiscall Team_Start_76E430(TechnoClass *this, int a2, bool *a3)
{
  int v4; // eax
  int v5; // ecx
  int grindingAnimHandle; // ecx
  void **v8; // [esp+4h] [ebp-8h] BYREF
  WDTClass *v9; // [esp+8h] [ebp-4h]

  ActivateScreenWDT((int)&v8, a2); /*0x76e449*/
  if ( !v9 ) /*0x76e454*/
    goto LABEL_6; /*0x76e454*/
  v4 = WDTClass::CountCellType(v9, *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e45d*/
  if ( v4 <= *(_DWORD *)this->isCountedAsOwned_special ) /*0x76e468*/
  {
    v5 = this->currentTargetThreatValues[0]; /*0x76e46a*/
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e476*/
    *a3 = v4 <= v5; /*0x76e481*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e487*/
    return 1; /*0x76e495*/
  }
  if ( v4 >= this->previousTeam ) /*0x76e49e*/
  {
    grindingAnimHandle = this->grindingAnimHandle; /*0x76e4a0*/
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e4a6*/
    *a3 = v4 >= grindingAnimHandle; /*0x76e4b7*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e4bd*/
    return 0; /*0x76e4c2*/
  }
  else
  {
LABEL_6:
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e4d3*/
    *a3 = 0; /*0x76e4db*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e4de*/
    return 2; /*0x76e4e3*/
  }
}



// ==== 0x0076E4F0  WDTGame::ReviewHistory  this=ObjectClass  sig=csp ====
char __userpurge WDTGame::ReviewHistory@<al>(int this@<ecx>, DeleteAndZero a2)
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
  DeleteAndZero v19; // [esp+18h] [ebp-1Ch] BYREF
  DeleteAndZero v20; // [esp+24h] [ebp-10h] BYREF

  v2 = *(_DWORD *)a2.__pad_0; /*0x76e4fb*/
  v3 = 1; /*0x76e4ff*/
  v18 = 1; /*0x76e505*/
  v17 = 0; /*0x76e509*/
  if ( *(int *)a2.__pad_0 <= a2.DeleteAndZero_field_0x04 )
  {
    while ( 1 )
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76e519*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e524*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e53d*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e53f*/
      }
      if ( *(_BYTE *)(this + 1092) ) /*0x76e556*/
        break; /*0x76e556*/
      StringCSF = GetStringCSF(aWdtReviewinghi, 0, g_Str_File_WDTSel_cpp, 995); /*0x76e575*/
      WideString::Assign((wchar_t **)&a2, StringCSF); /*0x76e57f*/
      WideString::Append2((wchar_t **)&a2, asc_830174); /*0x76e58d*/
      if ( v3 ) /*0x76e594*/
        v17 = WideString::Length((const wchar_t **)&a2); /*0x76e59f*/
      v6 = v2 + 1; /*0x76e5a3*/
      v16 = WDTGame_Helper((wchar_t **)&v20.DeleteAndZero_field_0x04, (const wchar_t *)(v2 + 1), (wchar_t *)2); /*0x76e5b3*/
      v15 = WideString::Assign((wchar_t **)&v20, (wchar_t *)asc_82083C); /*0x76e5cb*/
      v7 = GetStringCSF(aWdtReviewinghi_0, 0, g_Str_File_WDTSel_cpp, 1003); /*0x76e5de*/
      v8 = WideString::Assign((wchar_t **)&v19.DeleteAndZero_field_0x08, v7); /*0x76e5e8*/
      v9 = WideString::ConcatAlloc( /*0x76e5ef*/
             (const wchar_t **)v8,
             (wchar_t **)&v19.DeleteAndZero_field_0x04,
             (const wchar_t **)v15);
      v10 = WideString::ConcatAlloc((const wchar_t **)v9, (wchar_t **)&v19, (const wchar_t **)v16); /*0x76e5f6*/
      WideString::Append((wchar_t **)&a2, (const wchar_t **)v10); /*0x76e600*/
      DeleteAndZero::Alt(&v19); /*0x76e609*/
      DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x04); /*0x76e612*/
      DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x08); /*0x76e61b*/
      DeleteAndZero::Alt(&v20); /*0x76e624*/
      DeleteAndZero::Alt((DeleteAndZero *)&v20.DeleteAndZero_field_0x04); /*0x76e62d*/
      ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&a2, v3 == 0 ? (unsigned int)v17 : 0);
      v11 = ActivateScreenWDT((int)&v20.DeleteAndZero_field_0x08, v2); /*0x76e663*/
      Trigger::ProcessMapEvents(this, (ObjectClass *)v2, v11, 0, v18); /*0x76e66b*/
      v20.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e674*/
      ComPtr::Release((ComPtr *)&v20.DeleteAndZero_field_0x08); /*0x76e67c*/
      v3 = 0; /*0x76e687*/
      v18 = 0; /*0x76e691*/
      MSEngine::ProcessEvents((MSEngine *)this, *(_DWORD *)(this + 1148), 300000); /*0x76e695*/
      v12 = 5; /*0x76e6a0*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e69a*/
        goto LABEL_19; /*0x76e69a*/
      do /*0x76e704*/
      {
        if ( !v12-- ) /*0x76e6ad*/
          break; /*0x76e6b2*/
        GameClass::FrameLoop((GameClass *)this, 5); /*0x76e6b8*/
        DDraw::HandleSuspend((DDraw *)this); /*0x76e6bf*/
        while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e6ca*/
        {
          if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e6e3*/
            *(_BYTE *)(this + 1092) = 1; /*0x76e6e5*/
        }
      }
      while ( !*(_BYTE *)(this + 1092) ); /*0x76e704*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e706*/
      {
LABEL_19:
        DeleteAndZero::Alt(&a2); /*0x76e737*/
        return v3; /*0x76e737*/
      }
      DeleteAndZero::Alt(&a2); /*0x76e714*/
      v2 = v6; /*0x76e71d*/
      if ( v6 > a2.DeleteAndZero_field_0x04 ) /*0x76e721*/
        return 0; /*0x76e730*/
    }
  }
  return v3; /*0x76e727*/
}



// ==== 0x0076E750  ObjectClass::Team_Start_76E750  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Start_76E750(int this, int a2)
{
  int OwnerHouse; // ebx
  int v4; // ebp
  int v5; // eax
  ScoreScreen *v6; // edi
  DeleteAndZero v8; // [esp-8h] [ebp-24h]
  DeleteAndZero v9; // [esp+10h] [ebp-Ch] BYREF

  WideString::Assign((wchar_t **)&v9, &g_TypeClass_DefaultString); /*0x76e762*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v9, 0); /*0x76e770*/
  DeleteAndZero::Alt(&v9); /*0x76e779*/
  OwnerHouse = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(this + 76) + 12)); /*0x76e794*/
  v4 = sub_764FF0(*(ObjectClass **)(this + 76), a2); /*0x76e79b*/
  if ( OwnerHouse - v4 > 8 ) /*0x76e7a4*/
    v4 = OwnerHouse - 8; /*0x76e7a6*/
  ActivateScreenWDT((int)&v9.DeleteAndZero_field_0x04, v4); /*0x76e7b8*/
  if ( v9.DeleteAndZero_field_0x08 ) /*0x76e7c3*/
  {
    v5 = WDTClass::CountCellType((WDTClass *)v9.DeleteAndZero_field_0x08, *(_DWORD *)(*(_DWORD *)(this + 76) + 68)); /*0x76e7d0*/
    if ( v5 < *(_DWORD *)(this + 1084) ) /*0x76e7db*/
    {
      v6 = (ScoreScreen *)(this + 88); /*0x76e7f9*/
      if ( v5 > *(_DWORD *)(this + 1088) ) /*0x76e7fe*/
        ScoreScreen::RemoveItem(v6, 0, 2, 1, 1, 0); /*0x76e812*/
      else
        ScoreScreen::RemoveItem(v6, 0, 1, v5 <= 0, 1, 0); /*0x76e808*/
    }
    else
    {
      ScoreScreen::RemoveItem((ScoreScreen *)(this + 88), 0, 0, v5 >= 30, 1, 0); /*0x76e7ed*/
    }
    v8.DeleteAndZero_field_0x04 = OwnerHouse; /*0x76e817*/
    *(_DWORD *)v8.__pad_0 = v4; /*0x76e818*/
    WDTGame::ReviewHistory(this, v8); /*0x76e81b*/
    while ( (unsigned __int8)j_Audio_IsPlaying() ) /*0x76e822*/
    {
      if ( *(_BYTE *)(this + 1092) ) /*0x76e82b*/
        break; /*0x76e833*/
      GameClass::FrameLoop((GameClass *)this, 5); /*0x76e839*/
      DDraw::HandleSuspend((DDraw *)this); /*0x76e840*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e84b*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e864*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e866*/
      }
    }
  }
  v9.DeleteAndZero_field_0x04 = (int)&rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e88c*/
  return ComPtr::Release((ComPtr *)&v9.DeleteAndZero_field_0x04); /*0x76e899*/
}



// ==== 0x0076E8B0  ObjectClass::Team_Start_76E8B0  this=ObjectClass  sig=csp ====
bool __thiscall Team_Start_76E8B0(TechnoClass *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  char v11; // al
  bool v12; // bl
  DeleteAndZero v14; // [esp-8h] [ebp-28h]
  _DWORD v15[2]; // [esp+10h] [ebp-10h] BYREF
  _DWORD v16[2]; // [esp+18h] [ebp-8h] BYREF

  v3 = a2; /*0x76e8b4*/
  ActivateScreenWDT((int)v16, a2); /*0x76e8cc*/
  v5 = WDTClass::CountCellType((WDTClass *)v16[1], *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e8dc*/
  v6 = a3; /*0x76e8e1*/
  v7 = v5; /*0x76e8e5*/
  ActivateScreenWDT((int)v15, a3); /*0x76e8f6*/
  v8 = WDTClass::CountCellType((WDTClass *)v15[1], *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e906*/
  v9 = v8 - v7; /*0x76e90d*/
  if ( v8 - v7 < -1 ) /*0x76e912*/
  {
    v10 = 1; /*0x76e917*/
    if ( v9 < -3 || v8 <= this->currentTargetThreatValues[0] ) /*0x76e924*/
    {
      LOBYTE(a2) = 1; /*0x76e926*/
      goto LABEL_12; /*0x76e92b*/
    }
LABEL_11:
    LOBYTE(a2) = 0; /*0x76e971*/
    goto LABEL_12; /*0x76e971*/
  }
  if ( v9 > 1 ) /*0x76e930*/
  {
    v10 = 0; /*0x76e932*/
    if ( v9 > 3 || v8 >= this->grindingAnimHandle ) /*0x76e93f*/
    {
      LOBYTE(a2) = 1; /*0x76e941*/
      goto LABEL_12; /*0x76e946*/
    }
    goto LABEL_11; /*0x76e93f*/
  }
  v10 = 2; /*0x76e950*/
  LOBYTE(a2) = 0; /*0x76e955*/
  if ( Team_Start_76E430(this, v6, (bool *)&a2) != 1 ) /*0x76e962*/
    goto LABEL_11; /*0x76e962*/
  v11 = a2; /*0x76e964*/
  LOBYTE(a2) = 1; /*0x76e968*/
  if ( !v11 ) /*0x76e96f*/
    goto LABEL_11; /*0x76e96f*/
LABEL_12:
  ScoreScreen::RemoveItem((ScoreScreen *)&this->customSound_controller[2], 1, v10, a2, 1, 0); /*0x76e976*/
  v14.DeleteAndZero_field_0x04 = v6; /*0x76e98a*/
  *(_DWORD *)v14.__pad_0 = v3; /*0x76e98b*/
  v12 = WDTGame::ReviewHistory((int)this, v14) == 0; /*0x76e99e*/
  v15[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e9a1*/
  ComPtr::Release((ComPtr *)v15); /*0x76e9a5*/
  v16[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e9ae*/
  ComPtr::Release((ComPtr *)v16); /*0x76e9b2*/
  return v12; /*0x76e9b7*/
}



// ==== 0x0076EA20  ScoreText::ShowAlt  this=ScoreText  sig=csp ====
void __thiscall ScoreText::ShowAlt(ScoreText *this, const wchar_t **a2, int a3)
{
  const wchar_t **v4; // edi
  MSBitPrintAnim *v5; // eax
  ScoreClass *v6; // eax

  if ( *((_DWORD *)this + 287) ) /*0x76ea24*/
  {
    Session::RemoveTeam((Session *)this, *((int (__thiscall ****)(_DWORD, int))this + 287)); /*0x76ea2f*/
    (*(void (__thiscall **)(ObjectClass *, int, DSurface *, int, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x76ea5a*/
      g_DSurface_Hidden,
      *((_DWORD *)this + 279) + 124,
      DSurface_Alternate,
      *((_DWORD *)this + 279) + 124,
      0,
      1);
    Surface::CopyRect((XSurface *)this, (int *)(*((_DWORD *)this + 279) + 124)); /*0x76ea69*/
    *((_DWORD *)this + 287) = 0; /*0x76ea6e*/
  }
  v4 = a2; /*0x76ea78*/
  if ( WideString::Length((WideString *)a2) ) /*0x76ea7e*/
  {
    WideString::AssignFromPtr((WideString *)&a2, v4); /*0x76ea8c*/
    v5 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76ea93*/
    if ( v5 ) /*0x76ea9d*/
      v6 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76eab2*/
                           v5,
                           (const wchar_t **)&a2,
                           (_DWORD *)(*((_DWORD *)this + 279) + 124),
                           1);
    else
      v6 = 0; /*0x76eab9*/
    *((_DWORD *)this + 287) = v6; /*0x76eabf*/
    ScoreClass::SetState(v6, 1); /*0x76eac5*/
    PriorityQueue::Add((PriorityQueue *)this, *((_DWORD *)this + 287)); /*0x76ead3*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76eadc*/
  }
}



// ==== 0x0076EAF0  ScoreText::Show  this=ScoreText  sig=csp ====
void __thiscall ScoreText::Show(ScoreText *this, const wchar_t **a2)
{
  int *v3; // eax
  int v4; // edx
  int (__thiscall ***v5)(_DWORD, int); // eax
  const wchar_t **v6; // edi
  MSBitPrintAnim *v7; // eax
  ScoreClass *v8; // eax
  int v9[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = (int *)(*((_DWORD *)this + 279) + 140); /*0x76eafd*/
  v9[0] = *v3; /*0x76eb04*/
  v9[1] = v3[1]; /*0x76eb0b*/
  v9[2] = v3[2]; /*0x76eb12*/
  v4 = v3[3]; /*0x76eb16*/
  v5 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 288); /*0x76eb19*/
  v9[3] = v4; /*0x76eb21*/
  if ( v5 ) /*0x76eb25*/
  {
    Session::RemoveTeam((Session *)this, v5); /*0x76eb2a*/
    (*(void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x76eb4c*/
      g_DSurface_Hidden,
      v9,
      DSurface_Alternate,
      v9,
      0,
      1);
    Surface::CopyRect((XSurface *)this, v9); /*0x76eb56*/
    *((_DWORD *)this + 288) = 0; /*0x76eb5b*/
  }
  v6 = a2; /*0x76eb65*/
  if ( WideString::Length((WideString *)a2) ) /*0x76eb6b*/
  {
    WideString::AssignFromPtr((WideString *)&a2, v6); /*0x76eb79*/
    v7 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76eb80*/
    if ( v7 ) /*0x76eb8a*/
      v8 = (ScoreClass *)MSBitPrintAnim::Construct(v7, (const wchar_t **)&a2, v9, 0); /*0x76eb9a*/
    else
      v8 = 0; /*0x76eba1*/
    *((_DWORD *)this + 288) = v8; /*0x76eba7*/
    ScoreClass::SetState(v8, 1); /*0x76ebad*/
    PriorityQueue::Add((PriorityQueue *)this, *((_DWORD *)this + 288)); /*0x76ebbb*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76ebc4*/
  }
}



// ==== 0x0076EBE0  MSSfxClass::FindByName  this=ObjectClass  sig=csp ====
int __thiscall MSSfxClass::FindByName(char *this, const char **a2)
{
  int result; // eax
  ObjectClass *v4; // [esp+0h] [ebp-14h]
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h]

  result = String::NotEquals((String *)a2, 0); /*0x76ebef*/
  if ( (_BYTE)result ) /*0x76ebf6*/
  {
    *(_DWORD *)&v5.m_1[3] = this + 1172; /*0x76ec02*/
    v6 = 0; /*0x76ec06*/
    *(_DWORD *)v5.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76ec0e*/
    if ( Vector::HasCapacity(&v5) ) /*0x76ec16*/
    {
      do /*0x76ec4d*/
      {
        if ( !(unsigned __int8)String::Compare( /*0x76ec31*/
                                 (String *)a2,
                                 *(const char ***)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] + 4) + 4 * v6)) )
          break; /*0x76ec38*/
        (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 /*0x76ec42*/
                                                                                                 + 8))(&v5);
      }
      while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ); /*0x76ec4d*/
    }
    result = (*(int (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5); /*0x76ec5c*/
    if ( (_BYTE)result ) /*0x76ec61*/
      return nullsub_24(v4); /*0x76ec71*/
  }
  return result; /*0x76ec76*/
}



// ==== 0x0076ECD0  Team_Start_76ECD0  this=-  sig=ida-proto ====
void __fastcall sub_76ECD0(int a1, int a2)
{
  _BYTE v4[1200]; // [esp+8h] [ebp-4B0h] BYREF

  Timer::PumpMessages((HWND *)dword_87F770); /*0x76ece2*/
  ConstructWDTSelection((int)v4, a1, a2); /*0x76eced*/
  Team_Start_76E750((int)v4, a2); /*0x76ecf7*/
  SelectionInitializeWOL((int)v4); /*0x76ed00*/
}



// ==== 0x0076ED10  Team_Start_76ED10  this=-  sig=ida-proto ====
bool __fastcall sub_76ED10(int a1, int a2)
{
  int State; // eax
  wchar_t *StringCSF; // eax
  bool v6; // bl
  int v7; // edx
  bool v8; // al
  void **v9; // [esp+4h] [ebp-4C0h] BYREF
  int v10; // [esp+8h] [ebp-4BCh]
  void **v11; // [esp+Ch] [ebp-4B8h] BYREF
  int v12; // [esp+10h] [ebp-4B4h]
  int v13[300]; // [esp+14h] [ebp-4B0h] BYREF

  if ( !*(_DWORD *)(a1 + 4) ) /*0x76ed10*/
    return 0; /*0x76ed20*/
  ConstructWDTSelection((int)v13, a1, a2); /*0x76ed31*/
  State = FileClass::GetState((_DWORD *)(v13[19] + 8)); /*0x76ed3f*/
  ScoreText::ShowAlt(v13, (const wchar_t **)(State + 20), 0); /*0x76ed4c*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76ed62*/
  WideString::Assign((wchar_t **)&v9, StringCSF); /*0x76ed6c*/
  ScoreText::Show(v13, (const wchar_t **)&v9); /*0x76ed7a*/
  DeleteAndZero::Alt((void **)&v9); /*0x76ed83*/
  Team_Start_76E2F0((int)v13, a2); /*0x76ed8d*/
  ShowWDTTerritorySelection(v13, (int)&v11); /*0x76ed9b*/
  v6 = v12 != 0; /*0x76eda6*/
  if ( v12 ) /*0x76edab*/
  {
    *(_DWORD *)dword_A8B240 = *(_DWORD *)(v12 + 8); /*0x76edba*/
    FindWDTTerritoryClass(&v9, *(int *)dword_A8B240); /*0x76edbf*/
    if ( v10 ) /*0x76edca*/
    {
      MEMORY[0xA8B270] = *(unsigned __int8 *)(v10 + 14); /*0x76edd7*/
      g_RulesInitConfig = *(unsigned __int8 *)(v10 + 15); /*0x76ede2*/
      MEMORY[0xA8B25C] = *(unsigned __int16 *)(v10 + 16); /*0x76edec*/
      v7 = *(_DWORD *)(v10 + 56) >> 2; /*0x76edf5*/
      byte_A8B31D = 0; /*0x76edfd*/
      byte_A8B31C = v7 & 1; /*0x76ee06*/
      MEMORY[0xA8B258] = (*(_DWORD *)(v10 + 56) & 0x10) != 0; /*0x76ee14*/
      LOBYTE(v7) = (*(_DWORD *)(v10 + 56) & 0x20) != 0; /*0x76ee20*/
      byte_A8B31F = 0; /*0x76ee22*/
      LOBYTE(dword_A8B320) = v7; /*0x76ee29*/
      MEMORY[0xA8B260] = 1; /*0x76ee2f*/
      MEMORY[0xA8B261] = BYTE1(*(_DWORD *)(v10 + 56)) & 1; /*0x76ee3d*/
      MEMORY[0xA8B262] = (*(_DWORD *)(v10 + 56) & 0x400) != 0; /*0x76ee4b*/
      v8 = (*(_DWORD *)(v10 + 56) & 0x200) != 0; /*0x76ee57*/
      LOBYTE(MEMORY[0xA8B264]) = 0; /*0x76ee59*/
      MEMORY[0xA8B263] = v8; /*0x76ee60*/
      MEMORY[0xA8B274] = 0; /*0x76ee65*/
      MEMORY[0xA8B278] = 1; /*0x76ee6f*/
    }
    else
    {
      v6 = 0; /*0x76ee77*/
    }
    v9 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76ee7d*/
    ComPtr::Release(&v9); /*0x76ee85*/
  }
  v11 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ee8e*/
  ComPtr::Release(&v11); /*0x76ee96*/
  SelectionInitializeWOL((int)v13); /*0x76ee9f*/
  return v6; /*0x76ed22*/
}



// ==== 0x0076EEB0  ObjectClass::ConstructWDTSelection_Create_76EEB0  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0(TechnoClass *this)
{
  String *v2; // edi
  char *v3; // eax
  int v4; // eax
  int result; // eax

  v2 = (String *)&this->turretRotateSoundController[2]; /*0x76eeb6*/
  byte_A8ED9C = 0; /*0x76eebc*/
  if ( (unsigned __int8)String::NotEquals((String *)&this->turretRotateSoundController[2], 0) ) /*0x76eec5*/
  {
    v3 = String::GetOrEmpty(v2); /*0x76eed0*/
    v4 = StringList::Find((StringList *)&unk_A83D10, v3); /*0x76eedb*/
    ThemeClass::Play((ThemeClass *)&unk_A83D10, v4); /*0x76eee6*/
    byte_A83D20 = 1; /*0x76eeeb*/
  }
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x76eefa*/
  (*(void (__thiscall **)(DSurface *, _DWORD))(DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate, 0); /*0x76ef07*/
  (*(void (__thiscall **)(ObjectClass *, _DWORD))(g_DSurface_Hidden->vtable0 + 24))(g_DSurface_Hidden, 0); /*0x76ef14*/
  (*(void (__thiscall **)(DSurface *, ObjectClass *, _DWORD, int))(g_DSurface_Primary->DSurface_field_0x0 + 4))( /*0x76ef29*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  Timer::PumpMessages((Timer *)dword_87F770); /*0x76ef32*/
  ConstructWDTSelection_Create_76EEB0_Create( /*0x76ef42*/
    (ObjectClass *)this->currentTargets[1],
    this,
    &this->customSound_controller[2]);
  for ( result = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640); /*0x76ef56*/
        result < 0;
        result = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) )
  {
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x76ef60*/
  }
  return result; /*0x76ef52*/
}



// ==== 0x0076EFE0  Selection_WorldDominationTour::QueryInterface  this=Selection@WorldDominationTour  sig=csp ====
void *__thiscall WOL::QueryInterface(Selection_WorldDominationTour *this, char a2)
{
  SelectionInitializeWOL((int)this); /*0x76efe3*/
  if ( (a2 & 1) != 0 ) /*0x76efed*/
    __3_YAXPAX_Z(this); /*0x76eff0*/
  return this; /*0x76effa*/
}



// ==== 0x0076F000  ComPtr::DestroyWrapper  this=ObjectClass  sig=csp ====
int __stdcall ComPtr_DestroyWrapper(int a1, int a2)
{
  FindTerritoryWOL(a2); /*0x76f00f*/
  return a1; /*0x76f016*/
}



// ==== 0x0076F020  FileClass::GetState  this=FileClass  sig=csp ====
int __thiscall FileClass::GetState(RawFileClass *this)
{
  return this->FilePointer; /*0x76f023*/
}



// ==== 0x0076F030  WDTGame::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall WDTGame::Constructor(WDTGame *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76f033*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f03c*/
  ComPtr::Set((ComPtr *)this, *(_DWORD *)(a2 + 4)); /*0x76f048*/
  return this->__pad_0; /*0x76f04f*/
}



// ==== 0x0076F060  ComPtr::Territory_Dtor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ComPtr::Territory_Dtor(ComPtr *this)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f060*/
  return ComPtr::Release(this);
}



// ==== 0x0076F070  FileClass::SetState  this=FileClass  sig=csp ====
int __thiscall FileClass::SetState(RawFileClass *this)
{
  return this->FilePointer; /*0x76f073*/
}



// ==== 0x0076F080  Count::Get  this=Count  sig=csp ====
int __thiscall Count::Get(Count *this)
{
  return *((_DWORD *)this + 1); /*0x76f083*/
}



// ==== 0x0076F090  Trigger::processTrigger  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Trigger::processTrigger(Trigger *this, int a2, int a3)
{
  this->Trigger_field_0x4 = (MSAnim *)a2; /*0x76f09a*/
  *(_DWORD *)this->__pad_8 = a3; /*0x76f09d*/
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76f0a0*/
  return this->__pad_0; /*0x76f0a6*/
}



// ==== 0x0076F0B0  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::HasCapacity  this=VectorCursor  sig=csp ====
BOOL __thiscall Vector::HasCapacity(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0bd*/
}



// ==== 0x0076F0C0  VectorCursor::Construct  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::Construct(VectorCursor *this, int a2, int a3)
{
  this->VectorCursor_field_0x04 = a2; /*0x76f0ca*/
  this->VectorCursor_field_0x08 = a3; /*0x76f0cd*/
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76f0d0*/
  return this->__pad_0; /*0x76f0d6*/
}



// ==== 0x0076F0E0  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::HasNext  this=VectorCursor  sig=csp ====
BOOL __thiscall VectorCursor::HasNext(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0ed*/
}



// ==== 0x0076F0F0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall CampaignProperties_WorldDominationTour_22::AddRef(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0fd*/
}



// ==== 0x0076F100  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::initCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::initCursor(
        _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76f109*/
  if ( (a2 & 1) != 0 ) /*0x76f10f*/
    __3_YAXPAX_Z(this); /*0x76f112*/
  return this->__pad_0; /*0x76f11c*/
}



// ==== 0x0076F120  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::updateCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::updateCursor(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76f129*/
  if ( (a2 & 1) != 0 ) /*0x76f12f*/
    __3_YAXPAX_Z(this); /*0x76f132*/
  return this->__pad_0; /*0x76f13c*/
}



// ==== 0x0076F140  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::drawCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::drawCursor(_VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76f149*/
  if ( (a2 & 1) != 0 ) /*0x76f14f*/
    __3_YAXPAX_Z(this); /*0x76f152*/
  return this->__pad_0; /*0x76f15c*/
}



// ==== 0x0076F160  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::Release(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  ++this->q008; /*0x76f162*/
  return this->__pad_0; /*0x76f165*/
}



// ==== 0x0076F170  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::ddtor(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  --this->q008; /*0x76f172*/
  return this->__pad_0; /*0x76f175*/
}



// ==== 0x0076F180  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::Release(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  ++this->q008; /*0x76f182*/
  return this->__pad_0; /*0x76f185*/
}



// ==== 0x0076F190  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::ddtor(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  --this->q008; /*0x76f192*/
  return this->__pad_0; /*0x76f195*/
}



// ==== 0x0076F1A0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::Release(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  ++this->q008; /*0x76f1a2*/
  return this->__pad_0; /*0x76f1a5*/
}



// ==== 0x0076F1B0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::ddtor(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  --this->q008; /*0x76f1b2*/
  return this->__pad_0; /*0x76f1b5*/
}



// ==== 0x0076F1C0  Trigger::checkCondition  this=VectorClass  sig=csp ====
_DWORD *__thiscall Trigger::checkCondition(Trigger *this, int a2, int a3)
{
  this->Trigger_field_0x4 = 0; /*0x76f1cb*/
  *(_DWORD *)this->__pad_8 = a2; /*0x76f1ce*/
  this->__pad_8[4] = 1; /*0x76f1d1*/
  this->__pad_8[5] = 0; /*0x76f1d5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x76f1d8*/
  if ( a2 ) /*0x76f1de*/
  {
    if ( a3 ) /*0x76f1e6*/
    {
      this->Trigger_field_0x4 = (MSAnim *)a3; /*0x76f1e8*/
      return this->__pad_0; /*0x76f1ee*/
    }
    this->Trigger_field_0x4 = (MSAnim *)__2_YAPAXI_Z(4 * a2); /*0x76f1fd*/
    this->__pad_8[5] = 1; /*0x76f200*/
  }
  return this->__pad_0; /*0x76f1ed*/
}



// ==== 0x0076F210  VectorClass::ConstructWDTSelection_Create_76F210  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_76F210(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x76f21b*/
  this->Capacity = a2; /*0x76f21e*/
  this->IsInitialized = 1; /*0x76f221*/
  this->IsAllocated = 0; /*0x76f225*/
  this->vtable0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x76f228*/
  if ( a2 ) /*0x76f22e*/
  {
    if ( a3 ) /*0x76f236*/
    {
      this->Items = (void *)a3; /*0x76f238*/
      return &this->vtable0; /*0x76f23e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x76f24d*/
    this->IsAllocated = 1; /*0x76f250*/
  }
  return &this->vtable0; /*0x76f23d*/
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
ComPtr *__fastcall ActivateScreenWDT_Create(ComPtr *a1, int a2, unsigned int a3)
{
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax

  v5 = __2_YAPAXI_Z(0x14u); /*0x76f479*/
  v6 = v5; /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = (_DWORD *)(v5 + 8); /*0x76f488*/
    *(_DWORD *)(v5 + 4) = 0; /*0x76f48d*/
    *(_DWORD *)v5 = &ReferenceCounted::`vftable'; /*0x76f494*/
    ComPtr::Constructor((ComPtr *)(v5 + 8)); /*0x76f49a*/
    *v7 = &rc_ptr<WDTState>::`vftable'; /*0x76f49f*/
    ComPtr::Set((ComPtr *)(v6 + 8), *(_DWORD *)(a2 + 4)); /*0x76f4ab*/
    *(_DWORD *)(v6 + 16) = 0; /*0x76f4b0*/
    *(_DWORD *)v6 = &WorldDominationTour::State::`vftable'; /*0x76f4b7*/
    v8 = *(_DWORD *)(v6 + 12); /*0x76f4bd*/
    if ( v8 && a3 < *(_DWORD *)(v8 + 36) ) /*0x76f4ce*/
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(_DWORD *)(v8 + 68) + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76f4e6*/
  ComPtr::Set(a1, v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}



// ==== 0x0076F500  rc_ptr::ConstructWDTSelection_Create_76F500  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_76F500(rc_ptr *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v2 = __2_YAPAXI_Z(0x14u); /*0x76f506*/
  v3 = (_DWORD *)v2; /*0x76f50b*/
  if ( v2 ) /*0x76f512*/
  {
    v4 = (_DWORD *)(v2 + 8); /*0x76f515*/
    *(_DWORD *)(v2 + 4) = 0; /*0x76f51a*/
    *(_DWORD *)v2 = &ReferenceCounted::`vftable'; /*0x76f521*/
    ComPtr::Constructor((ComPtr *)(v2 + 8)); /*0x76f527*/
    *v4 = &rc_ptr<WDTState>::`vftable'; /*0x76f52c*/
    v3[4] = 0; /*0x76f532*/
    *v3 = &WorldDominationTour::State::`vftable'; /*0x76f539*/
  }
  else
  {
    v3 = 0; /*0x76f542*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76f546*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76f54d*/
  ComPtr::Set((ComPtr *)this, (int)v3); /*0x76f554*/
  return this; /*0x76f55b*/
}



// ==== 0x0076F600  WDTClass::GetCellType  this=WDTClass  sig=csp ====
int __thiscall WDTClass::GetCellType(WDTClass *this, unsigned int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *((_DWORD *)this + 3) ) /*0x76f600*/
  {
    v2 = this->q004; /*0x76f607*/
    if ( v2 ) /*0x76f60c*/
    {
      if ( a2 < *(_DWORD *)(*((_DWORD *)this + 3) + 32) ) /*0x76f61c*/
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
int __thiscall WDTClass::CountCellType(WDTClass *this, int a2)
{
  unsigned __int8 *v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx

  if ( !*((_DWORD *)this + 3) ) /*0x76f670*/
    return 0; /*0x76f670*/
  v2 = (unsigned __int8 *)this->q004; /*0x76f677*/
  if ( !v2 ) /*0x76f67c*/
    return 0; /*0x76f6b6*/
  result = 0; /*0x76f682*/
  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 32) ) /*0x76f687*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 3) + 32); /*0x76f693*/
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
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x76f6c3*/
  *this = (State_WorldDominationTour)&WorldDominationTour::State::`vftable'; /*0x76f6c6*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x76f6cc*/
  ComPtr::Release(v3); /*0x76f6d2*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76f6d9*/
  if ( (a2 & 1) != 0 ) /*0x76f6e3*/
    __3_YAXPAX_Z(this); /*0x76f6e6*/
  return this; /*0x76f6f0*/
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
_DWORD *__fastcall ArtConfig_Read(rc_ptr *this, int a2, _DWORD *a3, char *Source, const char **a5, const char **a6)
{
  char *v8; // eax
  char *v9; // edi

  v8 = (char *)__2_YAPAXI_Z(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = WorldDominationTour::Territory::Constructor(v8, a2, a3, Source, a5, a6); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor((ComPtr *)this); /*0x76f948*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f94f*/
  ComPtr::Set((ComPtr *)this, (int)v9); /*0x76f956*/
  return this; /*0x76f95d*/
}



// ==== 0x0076F970  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
char *__thiscall WorldDominationTour::Territory::Constructor(
        char *this,
        int a2,
        _DWORD *a3,
        char *Source,
        const char **a5,
        const char **a6)
{
  int v6; // ebp
  _DWORD *v8; // edi
  _DWORD *v9; // ebx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char *v14; // eax
  wchar_t *StringCSF; // eax
  char **v16; // eax
  char *v17; // ebp
  int *CoordPair; // eax
  int v19; // ecx
  int v20; // eax
  char **v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int *v28; // eax
  int v29; // ecx
  int v30; // eax
  void *v32; // [esp+10h] [ebp-14h] BYREF
  void *v33; // [esp+14h] [ebp-10h] BYREF
  void *v34; // [esp+18h] [ebp-Ch] BYREF
  int v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = a2; /*0x76f975*/
  *((_DWORD *)this + 1) = 0; /*0x76f982*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x76f985*/
  *((_DWORD *)this + 2) = v6; /*0x76f98b*/
  unknown_libname_74(this + 12); /*0x76f98e*/
  v8 = this + 16; /*0x76f993*/
  *((_DWORD *)this + 4) = 0; /*0x76f999*/
  *((_DWORD *)this + 5) = 0; /*0x76f99b*/
  v9 = this + 24; /*0x76f99e*/
  *((_DWORD *)this + 6) = 0; /*0x76f9a1*/
  *((_DWORD *)this + 7) = 0; /*0x76f9a7*/
  unknown_libname_73(this + 32); /*0x76f9ae*/
  *((_DWORD *)this + 9) = 0; /*0x76f9ba*/
  *((_DWORD *)this + 10) = 0; /*0x76f9bd*/
  *((_DWORD *)this + 11) = 0; /*0x76f9c0*/
  *(_DWORD *)this = &WorldDominationTour::Territory::`vftable'; /*0x76f9d0*/
  v10 = FormatStringInt((char **)v35, v6, 2); /*0x76f9d6*/
  v11 = ConcatStringAlloc((char **)&v34, a5, v10); /*0x76f9e4*/
  v12 = String::Concat2((const char **)v11, (char **)&v33, aShp_0); /*0x76f9eb*/
  String::Reassign((char **)this + 8, (const char **)v12); /*0x76f9f4*/
  DeleteAndZero(&v33); /*0x76f9fd*/
  DeleteAndZero(&v34); /*0x76fa06*/
  DeleteAndZero((void **)v35); /*0x76fa0f*/
  v13 = FormatStringInt((char **)&a5, v6, 2); /*0x76fa1c*/
  ConcatStringAlloc((char **)&v32, a6, v13); /*0x76fa2a*/
  DeleteAndZero((void **)&a5); /*0x76fa33*/
  v14 = String::GetOrEmpty((char **)&v32); /*0x76fa43*/
  StringCSF = GetStringCSF((wchar_t *)v14, 0, aDRa2mdpostWdtt, 39); /*0x76fa4c*/
  WideString::Assign_Alt((void **)this + 3, StringCSF); /*0x76fa55*/
  FromStringInt((char **)&a2, g_DisplayWidth); /*0x76fa64*/
  v16 = ProcessStringAndCopy((char **)&a5, aTarget_0, (char **)&a2); /*0x76fa78*/
  v17 = Source; /*0x76fa7d*/
  CoordPair = INIClass::GetCoordPair(a3, v35, Source, v16, (_DWORD *)this + 4); /*0x76fa8c*/
  v19 = *CoordPair; /*0x76fa91*/
  v20 = CoordPair[1]; /*0x76fa93*/
  *((_DWORD *)this + 4) = v19; /*0x76fa96*/
  *((_DWORD *)this + 5) = v20; /*0x76fa9c*/
  DeleteAndZero((void **)&a5); /*0x76fa9f*/
  v21 = ProcessStringAndCopy((char **)&a5, aOrigin_0, (char **)&a2); /*0x76fab3*/
  v22 = INIClass::GetCoordPair(a3, v35, v17, v21, (_DWORD *)this + 6); /*0x76fac3*/
  v23 = *v22; /*0x76fac8*/
  v24 = v22[1]; /*0x76faca*/
  *((_DWORD *)this + 6) = v23; /*0x76facd*/
  *((_DWORD *)this + 7) = v24; /*0x76fad3*/
  DeleteAndZero((void **)&a5); /*0x76fad6*/
  if ( g_DisplayWidth > 800 ) /*0x76fae5*/
  {
    if ( !*v8 && !*((_DWORD *)this + 5) ) /*0x76faf0*/
    {
      String::Assign((char **)&a5, aTarget800); /*0x76fb00*/
      v25 = INIClass::GetCoordPair(a3, v35, v17, (char **)&a5, (_DWORD *)this + 4); /*0x76fb15*/
      v26 = *v25; /*0x76fb1a*/
      v27 = v25[1]; /*0x76fb1c*/
      *v8 = v26; /*0x76fb1f*/
      *((_DWORD *)this + 5) = v27; /*0x76fb25*/
      DeleteAndZero((void **)&a5); /*0x76fb28*/
    }
    if ( !*v9 && !*((_DWORD *)this + 7) ) /*0x76fb32*/
    {
      String::Assign((char **)&a5, aOrigin800); /*0x76fb42*/
      v28 = INIClass::GetCoordPair(a3, v35, v17, (char **)&a5, (_DWORD *)this + 6); /*0x76fb57*/
      v29 = *v28; /*0x76fb5c*/
      v30 = v28[1]; /*0x76fb5e*/
      *v9 = v29; /*0x76fb61*/
      *((_DWORD *)this + 7) = v30; /*0x76fb67*/
      DeleteAndZero((void **)&a5); /*0x76fb6a*/
    }
  }
  DeleteAndZero((void **)&a2); /*0x76fb73*/
  DeleteAndZero(&v32); /*0x76fb7c*/
  return this; /*0x76fb83*/
}



// ==== 0x0076FB90  ArtConfig::resetConfig  this=ArtConfig  sig=csp ====
int __thiscall sub_76FB90(int this, _DWORD *a2, int a3, _DWORD *a4)
{
  char **v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  void *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (char **)(this + 32); /*0x76fba8*/
  v6 = a4[1] + *(_DWORD *)(this + 28); /*0x76fbab*/
  v7 = *a4 + *(_DWORD *)(this + 24); /*0x76fbb2*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fbb4*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fbbf*/
  {
    v8 = __2_YAPAXI_Z(0x4Cu); /*0x76fbca*/
    if ( v8 ) /*0x76fbd4*/
      v9 = MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(a2 + 6), 1, -1, 0); /*0x76fbf6*/
    else
      v9 = 0; /*0x76fbfd*/
    *(_DWORD *)(this + 36) = v9; /*0x76fbff*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v9 + 4))(v9, 0); /*0x76fc08*/
    PriorityQueue::Add(a2, *(_DWORD *)(this + 36)); /*0x76fc16*/
  }
  v11[0] = &CCFileClass::`vftable'; /*0x76fc1f*/
  v13 = 0; /*0x76fc27*/
  Vector::Clear((int)v12); /*0x76fc2f*/
  v11[0] = &off_7E1668; /*0x76fc38*/
  return BufferIOFileClass::Dtor(v11); /*0x76fc45*/
}



// ==== 0x0076FC50  ArtConfig::validateConfig  this=ArtConfig  sig=csp ====
int __thiscall sub_76FC50(int this, _DWORD *a2, int a3, _DWORD *a4)
{
  char **v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  void *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (char **)(this + 32); /*0x76fc68*/
  v6 = a4[1] + *(_DWORD *)(this + 28); /*0x76fc6b*/
  v7 = *a4 + *(_DWORD *)(this + 24); /*0x76fc72*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    v8 = __2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(a2 + 6), 1, 0, 0); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    *(_DWORD *)(this + 40) = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v9 + 4))(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(a2, *(_DWORD *)(this + 40)); /*0x76fcd6*/
  }
  v11[0] = &CCFileClass::`vftable'; /*0x76fcdf*/
  v13 = 0; /*0x76fce7*/
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}



// ==== 0x0076FD40  ObjectClass::Map_Process_76FD40  this=ObjectClass  sig=csp ====
void __userpurge sub_76FD40(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int *a5, int a6)
{
  int v7; // ecx
  int v8; // ebp
  int *v9; // eax
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]
  int v21; // [esp+14h] [ebp-30h] BYREF
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  _DWORD v25[2]; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+2Ch] [ebp-18h]
  char v27[12]; // [esp+38h] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(a1 + 36); /*0x76fd46*/
  if ( v7 ) /*0x76fd4b*/
  {
    v8 = -1; /*0x76fd57*/
    switch ( a4 ) /*0x76fd5c*/
    {
      case 1: /*0x76fd5c*/
        v8 = 3; /*0x76fd72*/
        break;
      case 2: /*0x76fd5c*/
        v8 = 2; /*0x76fd6b*/
        break;
      case 3: /*0x76fd5c*/
        v8 = 1; /*0x76fd64*/
        break;
    }
    v9 = (int *)(*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v7 + 24))(v7, v25, a3, a2); /*0x76fd7e*/
    v10 = *v9; /*0x76fd81*/
    v11 = v9[1]; /*0x76fd85*/
    v21 = v9[2]; /*0x76fd8b*/
    v22 = v9[3]; /*0x76fd92*/
    if ( v8 < 0 ) /*0x76fd96*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 4))(*(_DWORD *)(a1 + 36), 0); /*0x76fdbc*/
    }
    else
    {
      MSAnim::Reset(*(_DWORD **)(a1 + 36), v8); /*0x76fd9c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 36) + 4))(*(_DWORD *)(a1 + 36), 1); /*0x76fda8*/
      Map_Process_5CC690(*(_DWORD **)(a1 + 36)); /*0x76fdae*/
    }
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a1 + 36) + 24))(*(_DWORD *)(a1 + 36), v27); /*0x76fdcb*/
    v25[0] = *v12; /*0x76fdd2*/
    v25[1] = v12[1]; /*0x76fdd9*/
    if ( (int)v12[2] <= 0 || (int)v12[3] <= 0 ) /*0x76fde9*/
    {
      v17 = v19; /*0x76fe60*/
      v16 = v20; /*0x76fe64*/
      v13 = v10; /*0x76fe68*/
      v15 = v11; /*0x76fe6a*/
    }
    else if ( v19 <= 0 || v20 <= 0 ) /*0x76fdf9*/
    {
      v13 = *v12; /*0x76fe53*/
      v15 = v12[1]; /*0x76fe55*/
      v17 = v12[2]; /*0x76fe58*/
      v16 = v12[3]; /*0x76fe5b*/
    }
    else
    {
      v13 = *v12; /*0x76fdfb*/
      v14 = v12[2]; /*0x76fdfd*/
      v15 = v12[1]; /*0x76fe00*/
      v16 = v12[3]; /*0x76fe03*/
      v26 = v14; /*0x76fe08*/
      if ( v13 > v10 ) /*0x76fe0c*/
      {
        v14 += v13 - v10; /*0x76fe10*/
        v13 = v10; /*0x76fe12*/
        v26 = v14; /*0x76fe14*/
      }
      if ( v15 > v11 ) /*0x76fe1a*/
      {
        v16 += v15 - v11; /*0x76fe1e*/
        v15 = v11; /*0x76fe20*/
      }
      if ( v13 + v14 >= v10 + v19 ) /*0x76fe28*/
        v17 = v26; /*0x76fe36*/
      else
        v17 = v19 - v13 + v10 + 1; /*0x76fe30*/
      if ( v16 + v15 < v11 + v20 ) /*0x76fe45*/
        v16 = v11 - v15 + v20 + 1; /*0x76fe4d*/
    }
    v21 = v13; /*0x76fe6c*/
    v23 = v17; /*0x76fe70*/
    v22 = v15; /*0x76fe7f*/
    v24 = v16; /*0x76fe83*/
    Team::ReleaseAll(a5, (int)&v21); /*0x76fe87*/
    DSurface::Flip2(); /*0x76fe8e*/
    GameClass::FrameLoop(a5, 1); /*0x76fe97*/
  }
}



// ==== 0x0076FEB0  ObjectClass::TerritorySelectWDT_Process  this=ObjectClass  sig=csp ====
void __thiscall TerritorySelectWDT_Process(ObjectClass *this, int a2, int *a3)
{
  int owningHouseIndex; // ecx
  int *v5; // eax
  int v6[4]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+18h] [ebp-10h] BYREF

  owningHouseIndex = this->owningHouseIndex; /*0x76feb6*/
  if ( owningHouseIndex ) /*0x76febb*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)owningHouseIndex + 4))(owningHouseIndex, a2); /*0x76fec5*/
    v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->owningHouseIndex + 24))( /*0x76fed2*/
                  this->owningHouseIndex,
                  v7);
    v6[0] = *v5; /*0x76fedb*/
    v6[1] = v5[1]; /*0x76fee2*/
    v6[2] = v5[2]; /*0x76fee9*/
    v6[3] = v5[3]; /*0x76fef7*/
    Team::ReleaseAll((Team *)a3, (int)v6); /*0x76fefb*/
    DSurface::Flip2(); /*0x76ff02*/
    MSEngine::ProcessEvents((MSEngine *)a3, this->owningHouseIndex, 300000); /*0x76ff12*/
  }
}



// ==== 0x0076FF20  Trigger::executeActions  this=Trigger  sig=csp ====
int __thiscall Trigger::executeActions(Trigger *this, int a2)
{
  this->Trigger_field_0x2C = (void *)a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}



// ==== 0x0076FF30  WDTObject::GetAndClearFlag  this=WDTObject  sig=csp ====
int __thiscall WDTObject::GetAndClearFlag(WDTObject *this)
{
  int result; // eax

  result = *((_DWORD *)this + 11); /*0x76ff30*/
  *((_DWORD *)this + 11) = 0; /*0x76ff33*/
  return result; /*0x76ff3a*/
}



// ==== 0x0076FF40  rc_ptr::FindTerritoryWOL  this=rc_ptr  sig=csp ====
_DWORD *__fastcall FindTerritoryWOL(rc_ptr *this, int a2, int a3)
{
  char v4; // bl
  _DWORD *v5; // edi
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v8; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v4 = 0; /*0x76ff47*/
  v10 = 0; /*0x76ff4e*/
  *(_DWORD *)&v8.m_1[3] = a2; /*0x76ff52*/
  v9 = 0; /*0x76ff56*/
  *(_DWORD *)v8.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76ff5a*/
  if ( VectorCursor::HasNext(&v8) ) /*0x76ff62*/
  {
    do /*0x76ff9a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v8.m_1[3] + 4) + 8 * v9 + 4) + 8) == a3 ) /*0x76ff85*/
        break; /*0x76ff85*/
      (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 8))(&v8); /*0x76ff8f*/
    }
    while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 4))(&v8) ); /*0x76ff9a*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 4))(&v8) ) /*0x76ffa9*/
  {
    v5 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&v8.m_1[3] + 4) + 8 * v9); /*0x76ffbb*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v7); /*0x76ffc4*/
    v7[0] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ffc9*/
    v4 = 1; /*0x76ffd1*/
    v5 = v7; /*0x76ffd6*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76ffdc*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ffe1*/
  ComPtr::Set((ComPtr *)this, v5[1]); /*0x76ffed*/
  if ( (v4 & 1) != 0 ) /*0x76fff5*/
  {
    v7[0] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76fffb*/
    ComPtr::Release((ComPtr *)v7); /*0x770003*/
  }
  return this; /*0x77000a*/
}



// ==== 0x00760190  Voxel::BlendColor  this=Voxel  sig=csp ====
int __thiscall Voxel::BlendColor(Voxel *this, int a2, int a3, int a4, _WORD *a5)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned __int16 v7; // dx
  int v8; // kr00_4
  int v9; // edi
  int v10; // eax
  int result; // eax

  v5 = word_B45E68[(int)this->Voxel_field_0x130 /*0x7601d9*/
                 + (unsigned __int16)word_B4669C[300 * a4 + abs32(a2 - (unsigned int)this->Voxel_field_0xCC - a3)]];
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a5[*(_DWORD *)&this->__pad_134[4 * v6 + 212]]; /*0x7601fb*/
  v8 = dword_B46648[v6]; /*0x760256*/
  v9 = (((unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0) * (v8 / 2)) >> 8) /*0x76027d*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028b*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red) <= 255 )
    v10 = (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028d*/
        + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_BitMask_Red << g_BitShift_Blue; /*0x7602ba*/
  *a5 = ((int)(unsigned __int8)((unsigned __int8)(v7 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green) /*0x7602d0*/
      | result
      | (v9 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x7602d3*/
}



// ==== 0x007602E0  Surface::RenderToSurfaceVoxel  this=WaveClass  sig=csp ====
void __thiscall Surface::RenderToSurfaceVoxel(int this, _DWORD *a2, int *a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
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
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  char *v64; // [esp+18h] [ebp-2Ch]
  _WORD *v65; // [esp+18h] [ebp-2Ch]
  _WORD *SamplePosition; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *v67; // [esp+18h] [ebp-2Ch]
  _WORD *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  StreamClass *v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  StreamClass *m_Stream; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  int v82; // [esp+3Ch] [ebp-8h]
  int v83; // [esp+3Ch] [ebp-8h]
  int v84; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  _DWORD *v89; // [esp+4Ch] [ebp+8h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x7602f8*/
  v74 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x760309*/
          g_DSurface_Hidden_2,
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
    v57 = *a2 - *(_DWORD *)(this + 204); /*0x760367*/
    v76 = v6; /*0x76036b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x76036f*/
    if ( *(_DWORD *)(this + 424) ) /*0x760374*/
    {
      v7 = *(_DWORD *)(this + 416); /*0x760398*/
      v8 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)(this + 420) + v6; /*0x76039e*/
      v61 = (int)v8; /*0x7603a0*/
      v9 = (int)&v8[v7 - 1]; /*0x7603a4*/
      if ( v9 >= a3[3] + a3[1] ) /*0x7603aa*/
      {
        v64 = (char *)(a3[3] + a3[1]); /*0x7603b2*/
        v9 = (int)v64; /*0x7603b6*/
      }
      else
      {
        v64 = &v8[v7 - 1]; /*0x7603ac*/
      }
      Voxel::loadSectionData((Voxel *)this); /*0x7603ba*/
      v10 = *(_DWORD *)(this + 460); /*0x7603bf*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x7603d1*/
      {
        SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x7606be*/
                                    (int *)g_ZBufferDescriptor,
                                    0,
                                    v8 - (char *)DSurface_ViewBounds.field_4);
        v35 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x7606c4*/
        HIWORD(v36) = HIWORD(g_ZBufferDescriptor); /*0x7606c7*/
        v81 = v9 - (_DWORD)v8; /*0x7606d8*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x7606e0*/
        if ( (unsigned int)&SamplePosition[v35 + (_DWORD)m_Stream * (v9 - (_DWORD)v8 + 1)] >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x7606f6*/
        {
          LOWORD(v36) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9; /*0x76085b*/
          v46 = v9; /*0x76085e*/
          v56 = v9; /*0x760862*/
          v47 = v36 - v58 - 2; /*0x760866*/
          v88 = v47; /*0x76086b*/
          if ( v9 >= (int)v8 ) /*0x76086f*/
          {
            v73 = 8 * v81; /*0x76087c*/
            do /*0x760999*/
            {
              v48 = v4[1]; /*0x760880*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760897*/
              {
                v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x7608b0*/
                v50 = v49[1] + v57; /*0x7608ba*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x7608be*/
                  v50 = *v4 + v4[2] - 2; /*0x7608c0*/
                v60 = v57 + *v49; /*0x7608cf*/
                if ( v60 <= *v4 + 2 ) /*0x7608d3*/
                  v60 = *v4 + 2; /*0x7608d5*/
                v68 = (_WORD *)(v74 /*0x760904*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760910*/
                v84 = v50; /*0x760914*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --v68 ) /*0x760925*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v84, v51) > (unsigned __int16)v88 ) /*0x760940*/
                    Voxel::BlendColor((Voxel *)this, v50, v57, i, v68); /*0x760950*/
                  --v50; /*0x76095e*/
                  --v84; /*0x76095f*/
                }
                v47 = v88; /*0x760972*/
                v8 = (char *)v61; /*0x760976*/
                v4 = a3; /*0x76097a*/
                v46 = v56; /*0x76097e*/
              }
              ++v47; /*0x760986*/
              --v46; /*0x760987*/
              v88 = v47; /*0x76098d*/
              v56 = v46; /*0x760991*/
              v73 -= 8; /*0x760995*/
            }
            while ( v46 >= (int)v8 ); /*0x760999*/
          }
        }
        else
        {
          v83 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760709*/
          v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x76071a*/
          v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x760728*/
          v87 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9 - v58 - 2; /*0x760740*/
          v38 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v9 - (unsigned int)DSurface_ViewBounds.field_4); /*0x760753*/
          v39 = v9; /*0x760755*/
          v55 = v9; /*0x760759*/
          if ( v9 >= (int)v8 ) /*0x76075d*/
          {
            while ( 1 ) /*0x760769*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x760777*/
              {
                v40 = v57 + v90[1]; /*0x760790*/
                if ( v40 >= v69 ) /*0x760792*/
                  v40 = v69; /*0x760794*/
                v59 = v57 + *v90; /*0x7607a6*/
                if ( v59 <= v79 ) /*0x7607aa*/
                  v59 = v79; /*0x7607ac*/
                v41 = &v37[v40]; /*0x7607b8*/
                v42 = (unsigned __int16 *)(2 * v40 + v38); /*0x7607ba*/
                v67 = v42; /*0x7607c6*/
                v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x7607ca*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x7607d7*/
                {
                  if ( *v42 > v87 ) /*0x7607e1*/
                  {
                    Voxel::BlendColor((Voxel *)this, v40, v57, j, v41); /*0x7607ed*/
                    v42 = v67; /*0x7607f2*/
                  }
                  --v42; /*0x7607fa*/
                  --v41; /*0x7607fd*/
                  --v40; /*0x760800*/
                }
                v8 = (char *)v61; /*0x760809*/
                v39 = v55; /*0x76080d*/
                v45 = 2 * v40; /*0x760811*/
                v38 = (int)&v42[v45 / 0xFFFFFFFE]; /*0x760813*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x760815*/
              }
              --v39; /*0x760836*/
              v37 -= v83; /*0x760839*/
              ++v87; /*0x76083c*/
              v90 -= 2; /*0x760840*/
              v55 = v39; /*0x760844*/
              if ( v39 < (int)v8 ) /*0x760848*/
                break; /*0x760848*/
              v38 -= 2 * (_DWORD)m_Stream; /*0x760765*/
            }
          }
        }
      }
      else
      {
        v86 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v58 - (_WORD)v8 - 2; /*0x7603f4*/
        v11 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v8 - (char *)DSurface_ViewBounds.field_4); /*0x760406*/
        v12 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x76040a*/
        v70 = g_ZBufferDescriptor[2].m_Stream; /*0x760418*/
        if ( (unsigned int)(v11 + 2 * (v12 + (_DWORD)v70 * (v9 - v61 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x760437*/
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
                v63 = v57 + v29[1]; /*0x7605b4*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x7605b8*/
                  v63 = *v4 + v4[2] - 2; /*0x7605ba*/
                v31 = v57 + *v29; /*0x7605c4*/
                v32 = v30 + 2; /*0x7605c6*/
                if ( v31 > v30 + 2 ) /*0x7605cb*/
                  v32 = v31; /*0x7605cd*/
                v82 = v32; /*0x7605e5*/
                v65 = (_WORD *)(v74 /*0x7605f3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x7605fd*/
                v85 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760607*/
                v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x760616*/
                if ( v32 <= v63 ) /*0x76061a*/
                {
                  while ( 1 ) /*0x760622*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v82, v33) > v86 ) /*0x76063b*/
                      Voxel::BlendColor((Voxel *)this, v32, v57, v34, v65); /*0x76064b*/
                    ++v32; /*0x760659*/
                    ++v82; /*0x76065a*/
                    ++v65; /*0x760667*/
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
          v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760448*/
          v80 = v13; /*0x760455*/
          v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x760459*/
          v15 = v61; /*0x76045c*/
          v16 = *(_DWORD **)(this + 424); /*0x760460*/
          v89 = v16; /*0x760468*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x760470*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x760484*/
            {
              v17 = v57 + v16[1]; /*0x760491*/
              if ( v17 >= v69 ) /*0x760497*/
                v17 = v69; /*0x760499*/
              v62 = v17; /*0x76049f*/
              v18 = *v16 + v57; /*0x7604a3*/
              v19 = v79; /*0x7604a6*/
              if ( v18 > v79 ) /*0x7604ac*/
                v19 = v18; /*0x7604ae*/
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
                  Voxel::BlendColor((Voxel *)this, v24, v57, m, v21); /*0x7604f4*/
                  v24 = v75; /*0x7604f9*/
                }
                ++v20; /*0x760501*/
                ++v21; /*0x760504*/
                ++v24; /*0x760507*/
              }
              v9 = (int)v64; /*0x760510*/
              v15 = k; /*0x760514*/
              v26 = 2 * v24; /*0x760518*/
              v11 = (int)&v20[v26 / 0xFFFFFFFE]; /*0x76051a*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x76051c*/
              v13 = v80; /*0x76051e*/
            }
            v14 += v13; /*0x760526*/
            v11 += 2 * (_DWORD)v70; /*0x760529*/
            --v86; /*0x760536*/
            v16 = v89 + 2; /*0x76053e*/
            ++v15; /*0x760541*/
            v89 += 2; /*0x760544*/
          }
        }
      }
    }
    (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x7609a7*/
    if ( *(_DWORD *)(this + 424) ) /*0x7609aa*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x7609b7*/
      *(_DWORD *)(this + 424) = 0; /*0x7609bf*/
    }
  }
}



// ==== 0x007609E0  Voxel::FaceDraw  this=WaveClass  sig=csp ====
void __thiscall Voxel::FaceDraw(Voxel *this, _DWORD *a2, int *a3)
{
  Voxel *v3; // ebx
  char *v4; // ebp
  int v5; // esi
  int v6; // ebp
  int SamplePosition; // edi
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
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // ebp
  _WORD *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int i; // [esp+8h] [ebp-40h]
  int v35; // [esp+8h] [ebp-40h]
  int v36; // [esp+Ch] [ebp-3Ch]
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
  int pad_0; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-Ch]
  _DWORD *v55; // [esp+4Ch] [ebp+4h]
  int *v56; // [esp+50h] [ebp+8h]

  v3 = this; /*0x7609e9*/
  if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*(_DWORD *)&this->__pad_A0[28]); /*0x760a0a*/
    v39 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x760a1b*/
            g_DSurface_Hidden_2,
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      v47 = a3[1]; /*0x760a3d*/
      v48 = a3[3] + v47; /*0x760a45*/
      v50 = *a3; /*0x760a4c*/
      v49 = *a3 + a3[2]; /*0x760a56*/
      v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] - *(_DWORD *)v3->__pad_D0; /*0x760a69*/
      v41 = *a2 - (unsigned int)v3->Voxel_field_0xCC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->__pad_134[20], (int *)&v3->__pad_134[108]); /*0x760a7b*/
      if ( *(_DWORD *)&v3->__pad_134[116] ) /*0x760a80*/
      {
        v5 = (int)&v4[*(_DWORD *)&v3->__pad_134[112]]; /*0x760aa0*/
        v36 = *(_DWORD *)&v3->__pad_134[108] + v5 - 1; /*0x760aaa*/
        if ( v36 >= a3[3] + a3[1] ) /*0x760aae*/
          v36 = a3[3] + a3[1]; /*0x760ab0*/
        LOWORD(v4) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v42; /*0x760aca*/
        v6 = (int)&v4[-v5 - 2]; /*0x760ad3*/
        v55 = (_DWORD *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           (int *)g_ZBufferDescriptor,
                           0,
                           v5 - (unsigned int)DSurface_ViewBounds.field_4);
        v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x760ae9*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x760aff*/
        if ( (unsigned int)(SamplePosition + 2 * (v8 + pad_0 * (v36 - v5 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x760b13*/
        {
          v22 = v5; /*0x760d15*/
          v35 = v5; /*0x760d19*/
          if ( v5 <= v36 ) /*0x760d1d*/
          {
            v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              v23 = a3[1]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + a3[3] - 2 ) /*0x760d46*/
              {
                v24 = (_DWORD *)(*(_DWORD *)&v3->__pad_134[116] + v38); /*0x760d5a*/
                v25 = *a3; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= a3[2] + *a3 - 2 ) /*0x760d70*/
                  v44 = a3[2] + *a3 - 2; /*0x760d72*/
                v26 = v25 + 2; /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = v27; /*0x760d81*/
                v28 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2); /*0x760d8b*/
                v29 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760da3*/
                v53 = v26; /*0x760da5*/
                v30 = (_WORD *)(v39 + 2 * (v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760db2*/
                if ( v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v53, v29) > (unsigned __int16)v55 ) /*0x760ddc*/
                    {
                      v31 = *(_DWORD *)&v3->__pad_134[156]; /*0x760deb*/
                      v32 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760e5b*/
                          + (char)(v31 >> 2);
                      v33 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760e64*/
                          + ((96 * v31) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_BitMask_Red << g_BitShift_Blue) /*0x760ec8*/
                           | ((int)(unsigned __int8)((unsigned __int8)(*v30 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                           | (v32 >> g_BitShift_Green_0 << g_BitShift_Red);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    ++v53; /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = (int)v55; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              v55 = (_DWORD *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760b2a*/
          v51 = v9; /*0x760b2e*/
          v10 = (_WORD *)(v39 + 2 * v5 * v9); /*0x760b35*/
          v56 = *(int **)&v3->__pad_134[116]; /*0x760b42*/
          v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              v12 = v49; /*0x760b76*/
              if ( v56[1] + v41 < v49 ) /*0x760b7c*/
                v12 = v56[1] + v41; /*0x760b7e*/
              v13 = v41 + *v56; /*0x760b86*/
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
                  if ( *v14 > (unsigned __int16)v55 ) /*0x760bbc*/
                  {
                    v17 = *(_DWORD *)&v3->__pad_134[156]; /*0x760bcb*/
                    v18 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_BitMask_Red << g_BitShift_Blue) /*0x760cab*/
                         | ((int)(unsigned __int8)((unsigned __int8)(*v15 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                         | (v18 >> g_BitShift_Green_0 << g_BitShift_Red);
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
              SamplePosition = (int)&v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v51; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            SamplePosition += 2 * pad_0; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            v56 += 2; /*0x760cf4*/
            LOWORD(v55) = (_WORD)v55 - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x760f1c*/
      if ( *(_DWORD *)&v3->__pad_134[116] ) /*0x760f1f*/
      {
        __3_YAXPAX_Z(*(void **)&v3->__pad_134[116]); /*0x760f2c*/
        *(_DWORD *)&v3->__pad_134[116] = 0; /*0x760f34*/
      }
    }
  }
}



// ==== 0x00760F50  WaveClass::Update  this=WaveClass  sig=csp ====
int __thiscall WaveClass::Update(WaveClass *this)
{
  int result; // eax
  int v3; // eax
  int i; // edi
  int *Coords; // eax
  int v6; // eax
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = this->Type; /*0x760f56*/
  switch ( result ) /*0x760f65*/
  {
    case 0: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760fa0*/
      for ( i = 0; i < this->WaveClass_field_12C; ++i ) /*0x760faf*/
      {
        Coords = CellClass::GetCoords(*(CellClass **)(*((_DWORD *)this + 125) + 4 * i), v7); /*0x760fbf*/
        WaveClass::DamageArea(this, Coords); /*0x760fc7*/
      }
      v6 = this->WaveIntensity - 1; /*0x760fde*/
      this->WaveIntensity = v6; /*0x760fdf*/
      if ( v6 >= 0 ) /*0x760fe5*/
        goto LABEL_3; /*0x760fe5*/
      result = (*(int (__thiscall **)(WaveClass *))(this->vtable0 + 248))(this); /*0x760feb*/
      break; /*0x760ff5*/
    case 1: /*0x760f65*/
    case 2: /*0x760f65*/
      result = this->LaserIntensity - 6; /*0x760fff*/
      this->LaserIntensity = result; /*0x761001*/
      if ( result < 32 ) /*0x76100a*/
        goto LABEL_9; /*0x76100a*/
      break; /*0x76100a*/
    case 3: /*0x760f65*/
      Voxel::TransformMatrix((int)this); /*0x760f6e*/
      v3 = this->WaveIntensity - 1; /*0x760f79*/
      this->WaveIntensity = v3; /*0x760f7a*/
      if ( v3 < 0 ) /*0x760f80*/
LABEL_9:
        result = (*(int (__thiscall **)(WaveClass *))(this->vtable0 + 248))(this); /*0x76100c*/
      else
LABEL_3:
        result = ObjectClass::DetectCloaked((UnitClass *)this); /*0x760f91*/
      break; /*0x760f9c*/
    default:
      return result;
  }
  return result; /*0x760f8c*/
}



// ==== 0x00761030  AnimClass::ProcessFrame  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessFrame(AnimClass *this)
{
  int i; // edi
  int *Coords; // eax
  int v4; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_1B8[72]; ++i ) /*0x761046*/
  {
    Coords = CellClass::GetCoords(*(CellClass **)(*(_DWORD *)&this->__pad_1B8[60] + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((WaveClass *)this, Coords); /*0x76105e*/
  }
  v4 = *(_DWORD *)&this->__pad_120[16] - 1; /*0x761074*/
  *(_DWORD *)&this->__pad_120[16] = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked((UnitClass *)this); /*0x76108f*/
  else
    return (*(int (__thiscall **)(AnimClass *))(this->AnimClass_field_0x0 + 248))(this); /*0x761081*/
}



// ==== 0x007610F0  Voxel::FaceBlit  this=ObjectClass  sig=csp ====
void __thiscall Voxel::FaceBlit(Voxel *this)
{
  Voxel *v2; // ebp
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // kr38_4
  int v13; // ebx
  void *v14; // eax
  int v15; // edx
  _WORD *v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // eax
  int v24; // edx
  double v25; // st7
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _WORD *v29; // eax
  int v30; // [esp-8h] [ebp-80h]
  int v31; // [esp-8h] [ebp-80h]
  int v32; // [esp-8h] [ebp-80h]
  int v33; // [esp-4h] [ebp-7Ch]
  int v34; // [esp-4h] [ebp-7Ch]
  int v35; // [esp-4h] [ebp-7Ch]
  __int16 v36[2]; // [esp+10h] [ebp-68h] BYREF
  __int16 v37[2]; // [esp+14h] [ebp-64h] BYREF
  __int16 v38[2]; // [esp+18h] [ebp-60h] BYREF
  void *v39; // [esp+1Ch] [ebp-5Ch] BYREF
  float v40; // [esp+20h] [ebp-58h] BYREF
  int v41; // [esp+24h] [ebp-54h] BYREF
  char v42; // [esp+28h] [ebp-50h] BYREF
  char v43; // [esp+2Ch] [ebp-4Ch] BYREF
  char v44; // [esp+30h] [ebp-48h] BYREF
  char v45[4]; // [esp+34h] [ebp-44h] BYREF
  char v46[4]; // [esp+38h] [ebp-40h] BYREF
  char v47[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  Coord3D v49; // [esp+48h] [ebp-30h] BYREF
  Coord3D v50; // [esp+54h] [ebp-24h] BYREF
  Coord3D v51; // [esp+60h] [ebp-18h] BYREF
  Color v52; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = (Voxel *)&this->__pad_134[188]; /*0x761105*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_134[188] + 12))(&this->__pad_134[188]); /*0x76110d*/
  if ( this->__pad_D0[92] ) /*0x761110*/
  {
    v3 = *(_DWORD *)&this->__pad_A0[20]; /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    v38[0] = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *(double *)&this->__pad_134[4]; /*0x761158*/
    v38[1] = *(_DWORD *)&this->__pad_A0[24] / 256; /*0x761167*/
    *(_DWORD *)v36 = *(_DWORD *)v38; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        v5 = i; /*0x76117f*/
        LOWORD(v6) = Math::RoundToInt(i); /*0x76119d*/
        v33 = v6; /*0x7611a8*/
        LOWORD(v7) = Math::RoundToInt(v5); /*0x7611b5*/
        v30 = v7; /*0x7611c0*/
        LOWORD(v8) = Math::RoundToInt(v5); /*0x7611cd*/
        v9 = Coord3D::Set(&v49, v8, v30, v33); /*0x7611e0*/
        v10 = *v9; /*0x7611e2*/
        v11 = v9[1]; /*0x7611e4*/
        v50.Coord3D_field_0x08 = v9[2]; /*0x7611ea*/
        v12 = v11; /*0x7611f7*/
        v13 = v10 / 256; /*0x76120d*/
        v39 = *(void **)CellStruct::Set((CellStruct *)&v41, v10 / 256, v11 / 256); /*0x76121e*/
        if ( *(void **)v36 != v39 ) /*0x761222*/
        {
          *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set((CellStruct *)&v40, v13, v12 / 256); /*0x761247*/
          v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x76124b*/
          v15 = *(_DWORD *)v2->__pad_0; /*0x761250*/
          *(_DWORD *)v38 = v14; /*0x761253*/
          if ( (*(int (__thiscall **)(Voxel *, __int16 *))(v15 + 16))(v2, v38) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, v38); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)&this->__pad_134[4] >= i ); /*0x76129b*/
    }
  }
  else
  {
    *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set( /*0x7612e0*/
                                  (CellStruct *)&v41,
                                  *(_DWORD *)&this->__pad_D0[44] / 256,
                                  *(_DWORD *)&this->__pad_D0[48] / 256);
    *(_DWORD *)v38 = *(_DWORD *)CellStruct::Set( /*0x761312*/
                                  (CellStruct *)&v41,
                                  *(_DWORD *)&this->__pad_D0[56] / 256,
                                  *(_DWORD *)&this->__pad_D0[60] / 256);
    v16 = CellStruct::Set( /*0x76133c*/
            (CellStruct *)&v41,
            *(_DWORD *)&this->__pad_A0[32] / 256,
            *(_DWORD *)&this->__pad_A0[36] / 256);
    v17 = *(_DWORD *)&this->__pad_134[12]; /*0x761349*/
    *(_DWORD *)v37 = *(_DWORD *)v16; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*(_DWORD *)&this->__pad_134[16], v17)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)&this->__pad_134[4] >= i;
          i = i + 0.050000001 )
    {
      v49.Coord3D_field_0x08 = dword_B46250; /*0x761392*/
      v18 = *(_DWORD *)&this->__pad_134[152]; /*0x761396*/
      *(_DWORD *)v49.__pad_0 = dword_B46248; /*0x76139c*/
      v49.Coord3D_field_0x04 = dword_B4624C; /*0x7613a2*/
      if ( v18 < 4 ) /*0x7613a6*/
      {
        v19 = i; /*0x7613ac*/
        LOWORD(v20) = Math::RoundToInt(i); /*0x7613ca*/
        v34 = v20; /*0x7613d5*/
        LOWORD(v21) = Math::RoundToInt(v19); /*0x7613e2*/
        v31 = v21; /*0x7613ed*/
        LOWORD(v22) = Math::RoundToInt(v19); /*0x7613fa*/
        v49 = *(Coord3D *)Coord3D::Set(&v50, v22, v31, v34); /*0x761411*/
        v40 = *(float *)CellStruct::Set((CellStruct *)&v42, *(_DWORD *)v49.__pad_0 / 256, v49.Coord3D_field_0x04 / 256); /*0x76144f*/
        if ( *(_DWORD *)v36 != LODWORD(v40) ) /*0x761453*/
        {
          *(_DWORD *)v36 = *(_DWORD *)CellStruct::Set( /*0x761498*/
                                        (CellStruct *)&v43,
                                        *(_DWORD *)v49.__pad_0 / 256,
                                        v49.Coord3D_field_0x04 / 256);
          v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x76149c*/
          v24 = *(_DWORD *)v2->__pad_0; /*0x7614a1*/
          v39 = v23; /*0x7614a4*/
          if ( (*(int (__thiscall **)(Voxel *, void **))(v24 + 16))(v2, &v39) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v39); /*0x7614be*/
        }
      }
      v25 = i; /*0x7614c3*/
      v40 = i; /*0x7614c7*/
      LOWORD(v26) = Math::RoundToInt(i); /*0x7614e5*/
      v35 = v26; /*0x7614f0*/
      LOWORD(v27) = Math::RoundToInt(v25); /*0x7614fd*/
      v32 = v27; /*0x761508*/
      LOWORD(v28) = Math::RoundToInt(v25); /*0x761515*/
      v49 = *(Coord3D *)Coord3D::Set(&v51, v28, v32, v35); /*0x76152c*/
      v41 = *(_DWORD *)CellStruct::Set((CellStruct *)&v44, *(_DWORD *)v49.__pad_0 / 256, v49.Coord3D_field_0x04 / 256); /*0x76156e*/
      if ( (unsigned __int8)Coord::Compare2D((Coord *)v37, &v41) ) /*0x761572*/
      {
        *(_DWORD *)v37 = *Coord::ToCell((Coord *)&v49, v45); /*0x761592*/
        Voxel::renderSection(this, v37); /*0x761596*/
      }
      if ( *(int *)&this->__pad_134[152] >= 4 ) /*0x7615a1*/
      {
        v49 = *(Coord3D *)Color::RGBFromFloat(&v52, (int)&this->__pad_D0[56], v40); /*0x7615ba*/
        v29 = Coord::ToCell((Coord *)&v49, v46); /*0x7615d5*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)v38, v29) ) /*0x7615df*/
        {
          *(_DWORD *)v38 = *Coord::ToCell((Coord *)&v49, v47); /*0x7615ff*/
          Voxel::renderSection(this, v38); /*0x761603*/
        }
      }
    }
  }
}



// ==== 0x00761640  Voxel::SectionProject  this=Voxel  sig=csp ====
int __thiscall Voxel::SectionProject(Voxel *this, int *a2, int a3)
{
  double v3; // st7
  int v6; // eax
  float v7; // eax
  int v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  int v30; // esi
  float v31; // eax
  int v32; // eax
  float v33; // edx
  int v34; // eax
  int v35; // esi
  float v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // esi
  float v40; // eax
  int v41; // eax
  float v42; // edx
  int v43; // eax
  int v44; // esi
  float v45; // eax
  int v46; // eax
  float v47; // edx
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // eax
  int result; // eax
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h] BYREF
  float v68; // [esp+50h] [ebp-84h]
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch] BYREF
  float v71; // [esp+5Ch] [ebp-78h]
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h] BYREF
  float v74; // [esp+68h] [ebp-6Ch]
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h] BYREF
  float v77; // [esp+74h] [ebp-60h]
  float v78; // [esp+78h] [ebp-5Ch]
  int v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45DA0 & 1) == 0 ) /*0x76165b*/
  {
    byte_B45DA0 |= 1u; /*0x76167d*/
    dword_B45DA8[0] = -1041235968; /*0x76168f*/
    dword_B45DAC = -1027080192; /*0x7616a0*/
    dword_B45DB0 = 0; /*0x7616b2*/
    dword_B45DB4 = -1041235968; /*0x7616c4*/
    dword_B45DB8 = 1120403456; /*0x7616d5*/
    dword_B45DBC = 0; /*0x7616e7*/
    dword_B45DC0 = 1106247680; /*0x7616f9*/
    dword_B45DC4 = -1027080192; /*0x76170a*/
    dword_B45DC8 = 0; /*0x76171c*/
    dword_B45DCC = 1106247680; /*0x76172e*/
    dword_B45DD0 = 1120403456; /*0x76173f*/
    dword_B45DD4 = 0; /*0x761751*/
    dword_B45DD8 = -1039663104; /*0x761763*/
    dword_B45DDC = -1037041664; /*0x761774*/
    dword_B45DE0 = 0; /*0x761786*/
    dword_B45DE4 = -1039663104; /*0x761798*/
    dword_B45DE8 = 1110441984; /*0x7617a9*/
    dword_B45DEC = 0; /*0x7617bb*/
    dword_B45DF0 = 1107820544; /*0x7617cd*/
    dword_B45DF4 = -1037041664; /*0x7617de*/
    dword_B45DF8 = 0; /*0x7617f0*/
    dword_B45DFC = 1107820544; /*0x761802*/
    dword_B45E00 = 1110441984; /*0x761813*/
    dword_B45E04 = 0; /*0x761825*/
    dword_B45E08 = -1042808832; /*0x761833*/
    dword_B45E0C = -1039663104; /*0x76183c*/
    dword_B45E10 = 0; /*0x761842*/
    dword_B45E14 = -1042808832; /*0x76186c*/
    dword_B45E18 = 1107820544; /*0x761871*/
    dword_B45E1C = 0; /*0x761877*/
    dword_B45E20 = 1104674816; /*0x7618a1*/
    dword_B45E24 = -1039663104; /*0x7618a6*/
    dword_B45E28 = 0; /*0x7618ac*/
    dword_B45E2C = 1104674816; /*0x7618d6*/
    dword_B45E30 = 1107820544; /*0x7618db*/
    dword_B45E34 = 0; /*0x7618e1*/
    dword_B45E38 = -1041235968; /*0x76190b*/
    dword_B45E3C = -1035468800; /*0x761910*/
    dword_B45E40 = 0; /*0x761916*/
    dword_B45E44 = -1041235968; /*0x761940*/
    dword_B45E48 = 1112014848; /*0x761945*/
    dword_B45E4C = 0; /*0x76194b*/
    dword_B45E50 = 1106247680; /*0x761975*/
    dword_B45E54 = -1035468800; /*0x76197a*/
    dword_B45E58 = 0; /*0x761980*/
    v56 = 30.0; /*0x761986*/
    v57 = 50.0; /*0x761992*/
    v58 = 0.0; /*0x76199e*/
    dword_B45E5C = 1106247680; /*0x7619af*/
    dword_B45E60 = 1112014848; /*0x7619b4*/
    dword_B45E64 = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  _ESI = *(_DWORD *)&this->__pad_A0[16]; /*0x7619cb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x7619d6*/
  v61 = *a2; /*0x7619dd*/
  __asm /*0x7619e3*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x7619eb*/
  __asm { fild [esp+0C8h+var_A4] } /*0x7619f2*/
  v6 = a2[2]; /*0x7619f6*/
  v62 = a2[1]; /*0x7619f9*/
  v63 = v6; /*0x7619fd*/
  __asm /*0x761a01*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x761a0b*/
  v8 = *(_DWORD *)(a3 + 4); /*0x761a10*/
  v56 = v7; /*0x761a13*/
  v79 = v8; /*0x761a17*/
  __asm /*0x761a1b*/
  {
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x761a29*/
  v57 = v9; /*0x761a2e*/
  LODWORD(v59) = *(_DWORD *)(a3 + 8); /*0x761a35*/
  __asm /*0x761a39*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x761a47*/
  __asm { fstp st } /*0x761a54*/
  __asm { fstp st }
  v64 = v56; /*0x761a5a*/
  v65 = LODWORD(v57); /*0x761a5e*/
  v66 = v10; /*0x761a62*/
  if ( !_ESI ) /*0x761a66*/
    v66 = v10 + 50; /*0x761a6b*/
  if ( _ESI == 3 ) /*0x761a72*/
    v66 += 50; /*0x761a74*/
  __asm /*0x761a79*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x761a96*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761a9b*/
  v12 = v11; /*0x761a9f*/
  __asm /*0x761aa1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x761aab*/
  __asm { fild [esp+0C8h+var_98] } /*0x761ab0*/
  v14 = v13; /*0x761ab4*/
  __asm /*0x761ab6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x761ac0*/
  v61 = v12; /*0x761ac9*/
  __asm { fstp st } /*0x761acd*/
  v63 = v15; /*0x761acf*/
  v62 = v14; /*0x761ad9*/
  __asm { fstp st } /*0x761add*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x761adf*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ae5*/
  LODWORD(v59) = v14 - v65; /*0x761ae9*/
  __asm /*0x761af0*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x761b09*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x761b11*/
  LODWORD(v59) = v16; /*0x761b1a*/
  *(_DWORD *)&this->__pad_A0[20] = v12; /*0x761b27*/
  *(_DWORD *)&this->__pad_A0[24] = v62; /*0x761b2d*/
  *(_DWORD *)&this->__pad_A0[28] = v63; /*0x761b34*/
  (*(void (__thiscall **)(Voxel *, char *))(*(_DWORD *)this->__pad_0 + 436))(this, &this->__pad_A0[20]); /*0x761b3b*/
  v17 = v64; /*0x761b41*/
  v18 = v65; /*0x761b45*/
  *(_DWORD *)&this->__pad_134[20] = 6; /*0x761b55*/
  *(float *)&this->__pad_A0[32] = v17; /*0x761b60*/
  v19 = v66; /*0x761b62*/
  *(_DWORD *)&this->__pad_A0[36] = v18; /*0x761b66*/
  *(_DWORD *)&this->__pad_134[24] = &this->__pad_134[28]; /*0x761b6f*/
  *(_DWORD *)&this->__pad_A0[40] = v19; /*0x761b75*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, (int *)&this->Voxel_field_0xCC); /*0x761b83*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, (int *)&this->__pad_D0[4]); /*0x761b9a*/
  v20 = *(_DWORD *)&this->__pad_134[24]; /*0x761b9f*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ba7*/
  *(_DWORD *)(v20 + 8) = *(_DWORD *)&this->__pad_D0[4]; /*0x761bab*/
  *(_DWORD *)(v20 + 12) = *(_DWORD *)&this->__pad_D0[8]; /*0x761bb1*/
  v21 = *(_DWORD *)&this->__pad_134[24]; /*0x761bb4*/
  *(_DWORD *)(v21 + 32) = this->Voxel_field_0xCC; /*0x761bbc*/
  __asm { fld st } /*0x761bc2*/
  *(_DWORD *)(v21 + 36) = *(_DWORD *)this->__pad_D0; /*0x761bc4*/
  __asm { fld st } /*0x761bcd*/
  _EAX = 48 * *(_DWORD *)&this->__pad_A0[16]; /*0x761bd2*/
  __asm /*0x761bd5*/
  {
    fadd dword ptr [eax+0B45DA8h]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45DACh]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45DB0h]
  }
  v76 = v80; /*0x761bf7*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x761bfb*/
  v77 = v81; /*0x761c03*/
  v78 = v82; /*0x761c07*/
  __asm /*0x761c0b*/
  {
    fadd dword ptr [eax+0B45DB4h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45DB8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45DBCh]
  }
  v67 = v83; /*0x761c39*/
  __asm { fstp [esp+0C8h+var_40] } /*0x761c3d*/
  v68 = v84; /*0x761c4b*/
  v69 = v85; /*0x761c4f*/
  __asm /*0x761c53*/
  {
    fld dword ptr [eax+0B45DC0h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45DC4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45DC8h]
  }
  v70 = v86; /*0x761c81*/
  __asm { fstp [esp+0C8h+var_34] } /*0x761c85*/
  v71 = v87; /*0x761c93*/
  v72 = v88; /*0x761c97*/
  __asm /*0x761c9b*/
  {
    fld dword ptr [eax+0B45DCCh]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45DD0h]
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45DD4h]
  }
  __asm { fstp dword ptr [esp+0C8h+var_B4] }
  v73 = v56; /*0x761cc5*/
  v74 = v57; /*0x761cc9*/
  LODWORD(v59) = v66 - v63; /*0x761cdf*/
  __asm /*0x761ce7*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_54]
    fmul st, st(2)
  }
  __asm { fdiv st, st(3) }
  LODWORD(v59) = LODWORD(v64) - v61; /*0x761d03*/
  __asm /*0x761d0a*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_5C]
    fld [esp+0D0h+var_48]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_80]
    fld [esp+0D0h+var_3C]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_74]
    fld [esp+0D0h+var_BC]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_68]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x761d4e*/
  __asm /*0x761d52*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x761d71*/
  __asm /*0x761d76*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x761d86*/
  {
    __asm /*0x761d88*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x761d8c*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x761d97*/
  {
    __asm /*0x761d99*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x761d9f*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x761da9*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x761db6*/
  if ( v62 > v65 ) /*0x761dbf*/
  {
    __asm /*0x761dc1*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x761dd2*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x761dd7*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x761de6*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v76); /*0x761dfb*/
  v76 = *v25; /*0x761e02*/
  v77 = v25[1]; /*0x761e09*/
  v78 = v25[2]; /*0x761e18*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v67); /*0x761e24*/
  v67 = *v26; /*0x761e2b*/
  v68 = v26[1]; /*0x761e37*/
  v69 = v26[2]; /*0x761e49*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v70); /*0x761e4d*/
  v70 = *v27; /*0x761e54*/
  v71 = v27[1]; /*0x761e5b*/
  v72 = v27[2]; /*0x761e6a*/
  v28 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v73); /*0x761e76*/
  __asm { fild [esp+0C8h+var_A0] } /*0x761e7b*/
  v73 = *v28; /*0x761e81*/
  __asm /*0x761e88*/
  {
    fld st
    fadd [esp+0C8h+var_64]
  }
  v74 = v28[1]; /*0x761e8e*/
  v75 = v28[2]; /*0x761e95*/
  LOWORD(v29) = Math::RoundToInt(v3); /*0x761e99*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761e9e*/
  v30 = v29; /*0x761ea2*/
  __asm /*0x761ea4*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_60]
  }
  LOWORD(v31) = Math::RoundToInt(v3); /*0x761eac*/
  __asm { fld [esp+0C8h+var_5C] } /*0x761eb1*/
  v57 = v31; /*0x761eb5*/
  LOWORD(v32) = Math::RoundToInt(v3); /*0x761eb9*/
  v33 = v57; /*0x761ebe*/
  __asm /*0x761eca*/
  {
    fld st
    fadd [esp+0C8h+var_88]
  }
  *(_DWORD *)&this->__pad_D0[44] = v30; /*0x761ed0*/
  *(float *)&this->__pad_D0[48] = v33; /*0x761ed2*/
  *(_DWORD *)&this->__pad_D0[52] = v32; /*0x761ed5*/
  LOWORD(v34) = Math::RoundToInt(v3); /*0x761ed8*/
  __asm /*0x761edd*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_84]
  }
  v35 = v34; /*0x761ee5*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x761ee7*/
  __asm { fld [esp+0C8h+var_80] } /*0x761eec*/
  v57 = v36; /*0x761ef0*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x761ef4*/
  *(_DWORD *)&this->__pad_D0[56] = v35; /*0x761eff*/
  __asm /*0x761f09*/
  {
    fld st
    fadd [esp+0C8h+var_7C]
  }
  *(float *)&this->__pad_D0[60] = v57; /*0x761f0f*/
  *(_DWORD *)&this->__pad_D0[64] = v37; /*0x761f12*/
  LOWORD(v38) = Math::RoundToInt(v3); /*0x761f15*/
  __asm /*0x761f1a*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_78]
  }
  v39 = v38; /*0x761f22*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x761f24*/
  __asm { fld [esp+0C8h+var_74] } /*0x761f29*/
  v57 = v40; /*0x761f2d*/
  LOWORD(v41) = Math::RoundToInt(v3); /*0x761f31*/
  v42 = v57; /*0x761f36*/
  __asm { fadd [esp+0C8h+var_70] } /*0x761f40*/
  *(_DWORD *)&this->__pad_D0[68] = v39; /*0x761f44*/
  *(float *)&this->__pad_D0[72] = v42; /*0x761f46*/
  *(_DWORD *)&this->__pad_D0[76] = v41; /*0x761f49*/
  LOWORD(v43) = Math::RoundToInt(v3); /*0x761f4c*/
  __asm /*0x761f51*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_6C]
  }
  v44 = v43; /*0x761f59*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x761f5b*/
  __asm { fld [esp+0C8h+var_68] } /*0x761f60*/
  v57 = v45; /*0x761f64*/
  LOWORD(v46) = Math::RoundToInt(v3); /*0x761f68*/
  v47 = v57; /*0x761f6d*/
  *(_DWORD *)&this->__pad_D0[80] = v44; /*0x761f77*/
  *(float *)&this->__pad_D0[84] = v47; /*0x761f85*/
  *(_DWORD *)&this->__pad_D0[88] = v46; /*0x761f88*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[44], (int *)&this->__pad_D0[12]); /*0x761f91*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[56], (int *)&this->__pad_D0[20]); /*0x761faa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[68], (int *)&this->__pad_D0[28]); /*0x761fc3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[80], (int *)&this->__pad_D0[36]); /*0x761fdc*/
  v48 = *(_DWORD **)&this->__pad_134[24]; /*0x761fe1*/
  *v48 = *(_DWORD *)&this->__pad_D0[12]; /*0x761fe9*/
  v48[1] = *(_DWORD *)&this->__pad_D0[16]; /*0x761fee*/
  v49 = *(_DWORD *)&this->__pad_134[24]; /*0x761ff1*/
  *(_DWORD *)(v49 + 16) = *(_DWORD *)&this->__pad_D0[20]; /*0x761ff9*/
  *(_DWORD *)(v49 + 20) = *(_DWORD *)&this->__pad_D0[24]; /*0x761fff*/
  v50 = *(_DWORD *)&this->__pad_134[24]; /*0x762002*/
  *(_DWORD *)(v50 + 24) = *(_DWORD *)&this->__pad_D0[36]; /*0x76200e*/
  *(_DWORD *)(v50 + 28) = *(_DWORD *)&this->__pad_D0[40]; /*0x762017*/
  result = *(_DWORD *)&this->__pad_134[24]; /*0x76201a*/
  *(_DWORD *)(result + 40) = *(_DWORD *)&this->__pad_D0[28]; /*0x762026*/
  *(_DWORD *)(result + 44) = *(_DWORD *)&this->__pad_D0[32]; /*0x762034*/
  qmemcpy(&this->__pad_134[164], (const void *)(*(_DWORD *)&this->__pad_134[160] + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/
}



// ==== 0x00762060  nullsub_46  this=-  sig=ida-proto ====
void __cdecl nullsub_46()
{
  ; /*0x762060*/
}



// ==== 0x00762070  Voxel::LightRender  this=Voxel  sig=csp ====
int __thiscall Voxel::LightRender(Voxel *this, int *a2, int a3)
{
  double v3; // st7
  int v6; // eax
  float v7; // eax
  float v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // esi
  float v30; // eax
  int v31; // eax
  float v32; // edx
  int v33; // eax
  int v34; // esi
  float v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // esi
  float v39; // eax
  int v40; // eax
  float v41; // edx
  int v42; // eax
  int v43; // esi
  float v44; // eax
  int v45; // eax
  float v46; // edx
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // eax
  int result; // eax
  double v51; // [esp+4h] [ebp-D0h]
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h]
  float v68; // [esp+50h] [ebp-84h] BYREF
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch]
  float v71; // [esp+5Ch] [ebp-78h] BYREF
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h]
  float v74; // [esp+68h] [ebp-6Ch] BYREF
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h]
  float v77; // [esp+74h] [ebp-60h] BYREF
  float v78; // [esp+78h] [ebp-5Ch]
  float v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45D88 & 1) == 0 ) /*0x76208b*/
  {
    byte_B45D88 |= 1u; /*0x7620ad*/
    dword_B45CA0[0] = -1041235968; /*0x7620bf*/
    dword_B45CA4 = -1027080192; /*0x7620d0*/
    dword_B45CA8 = 0; /*0x7620e2*/
    dword_B45CAC = -1041235968; /*0x7620f4*/
    dword_B45CB0 = 1120403456; /*0x762105*/
    dword_B45CB4 = 0; /*0x762117*/
    dword_B45CB8 = 1106247680; /*0x762129*/
    dword_B45CBC = -1027080192; /*0x76213a*/
    dword_B45CC0 = 0; /*0x76214c*/
    dword_B45CC4 = 1106247680; /*0x76215e*/
    dword_B45CC8 = 1120403456; /*0x76216f*/
    dword_B45CCC = 0; /*0x762181*/
    dword_B45CD0 = -1039663104; /*0x762193*/
    dword_B45CD4 = -1037041664; /*0x7621a4*/
    dword_B45CD8 = 0; /*0x7621b6*/
    dword_B45CDC = -1039663104; /*0x7621c8*/
    dword_B45CE0 = 1110441984; /*0x7621d9*/
    dword_B45CE4 = 0; /*0x7621eb*/
    dword_B45CE8 = 1107820544; /*0x7621fd*/
    dword_B45CEC = -1037041664; /*0x76220e*/
    dword_B45CF0 = 0; /*0x762220*/
    dword_B45CF4 = 1107820544; /*0x762232*/
    dword_B45CF8 = 1110441984; /*0x762243*/
    dword_B45CFC = 0; /*0x762255*/
    dword_B45D00 = -1042808832; /*0x762263*/
    dword_B45D04 = -1039663104; /*0x76226c*/
    dword_B45D08 = 0; /*0x762272*/
    dword_B45D0C = -1042808832; /*0x76229c*/
    dword_B45D10 = 1107820544; /*0x7622a1*/
    dword_B45D14 = 0; /*0x7622a7*/
    dword_B45D18 = 1104674816; /*0x7622d1*/
    dword_B45D1C = -1039663104; /*0x7622d6*/
    dword_B45D20 = 0; /*0x7622dc*/
    dword_B45D24 = 1104674816; /*0x762306*/
    dword_B45D28 = 1107820544; /*0x76230b*/
    dword_B45D2C = 0; /*0x762311*/
    dword_B45D30 = 0; /*0x76233b*/
    dword_B45D34 = -1035468800; /*0x762340*/
    dword_B45D38 = 0; /*0x762346*/
    dword_B45D3C = 0; /*0x762370*/
    dword_B45D40 = 1112014848; /*0x762375*/
    dword_B45D44 = 0; /*0x76237b*/
    dword_B45D48 = 0; /*0x7623a5*/
    dword_B45D4C = -1035468800; /*0x7623aa*/
    dword_B45D50 = 0; /*0x7623b0*/
    v56 = 0.0; /*0x7623b6*/
    v57 = 50.0; /*0x7623c2*/
    v58 = 0.0; /*0x7623ce*/
    dword_B45D54 = 0; /*0x7623df*/
    dword_B45D58 = 1112014848; /*0x7623e4*/
    dword_B45D5C = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  _ESI = *(_DWORD *)&this->__pad_A0[16]; /*0x7623fb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x762406*/
  v61 = *a2; /*0x76240d*/
  __asm /*0x762413*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x76241b*/
  __asm { fild [esp+0C8h+var_A4] } /*0x762422*/
  v6 = a2[2]; /*0x762426*/
  v62 = a2[1]; /*0x762429*/
  v63 = v6; /*0x76242d*/
  __asm /*0x762431*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x76243b*/
  v8 = *(float *)(a3 + 4); /*0x762440*/
  v56 = v7; /*0x762443*/
  v67 = v8; /*0x762447*/
  __asm /*0x76244b*/
  {
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x762459*/
  v57 = v9; /*0x76245e*/
  LODWORD(v59) = *(_DWORD *)(a3 + 8); /*0x762465*/
  __asm /*0x762469*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x762477*/
  __asm { fstp st } /*0x762484*/
  __asm { fstp st }
  v64 = v56; /*0x76248a*/
  v65 = LODWORD(v57); /*0x76248e*/
  v66 = v10; /*0x762492*/
  if ( !_ESI ) /*0x762496*/
    v66 = v10 + 50; /*0x76249b*/
  if ( _ESI == 3 ) /*0x7624a2*/
    v66 += 50; /*0x7624a4*/
  __asm /*0x7624a9*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x7624c6*/
  __asm { fild [esp+0C8h+var_9C] } /*0x7624cb*/
  v12 = v11; /*0x7624cf*/
  __asm /*0x7624d1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x7624db*/
  __asm { fild [esp+0C8h+var_98] } /*0x7624e0*/
  v14 = v13; /*0x7624e4*/
  __asm /*0x7624e6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x7624f0*/
  v61 = v12; /*0x7624fd*/
  __asm /*0x762503*/
  {
    fstp st
    fstp st
  }
  v62 = v14; /*0x762507*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x76250b*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x76250f*/
  LODWORD(v59) = v14 - v65; /*0x762518*/
  v63 = v15; /*0x76251c*/
  __asm /*0x762520*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v51); /*0x762539*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x762556*/
  __asm /*0x76255a*/
  {
    fstp [esp+0D0h+var_88]
    fild dword ptr [esp+0D0h+var_B4+4]
  }
  LODWORD(v59) = v14 - v65; /*0x762562*/
  __asm { fild dword ptr [esp+0D0h+var_B4+4] } /*0x76256a*/
  LODWORD(v59) = v63 - v66; /*0x762570*/
  __asm /*0x762574*/
  {
    fstp [esp+0D0h+var_B8]
    fild dword ptr [esp+0D0h+var_B4+4]
    fst dword ptr [esp+0D0h+var_B4]
    fld [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x76259d*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x7625a5*/
  v60 = v16; /*0x7625ae*/
  *(_DWORD *)&this->__pad_A0[20] = v12; /*0x7625bb*/
  *(_DWORD *)&this->__pad_A0[24] = v62; /*0x7625c1*/
  *(_DWORD *)&this->__pad_A0[28] = v63; /*0x7625c8*/
  (*(void (__thiscall **)(Voxel *, char *))(*(_DWORD *)this->__pad_0 + 436))(this, &this->__pad_A0[20]); /*0x7625cf*/
  v17 = v64; /*0x7625d5*/
  v18 = v65; /*0x7625d9*/
  *(_DWORD *)&this->__pad_134[20] = 4; /*0x7625e3*/
  *(float *)&this->__pad_A0[32] = v17; /*0x7625ed*/
  v19 = v66; /*0x7625ef*/
  *(_DWORD *)&this->__pad_A0[36] = v18; /*0x7625f3*/
  *(_DWORD *)&this->__pad_134[24] = &this->__pad_134[76]; /*0x7625fc*/
  *(_DWORD *)&this->__pad_A0[40] = v19; /*0x762602*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, (int *)&this->Voxel_field_0xCC); /*0x762617*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, (int *)&this->__pad_D0[4]); /*0x76262e*/
  __asm { fld [esp+0C8h+var_88] } /*0x762633*/
  LOWORD(v20) = Math::RoundToInt(v3); /*0x762637*/
  LODWORD(v59) = v20; /*0x76263c*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x762646*/
  _EAX = 48 * *(_DWORD *)&this->__pad_A0[16]; /*0x76264d*/
  __asm /*0x762650*/
  {
    fld st
    fadd dword ptr [eax+0B45CA0h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45CA4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45CA8h]
  }
  v74 = v83; /*0x762680*/
  __asm { fstp [esp+0C8h+var_40] } /*0x762684*/
  v75 = v84; /*0x762692*/
  v76 = v85; /*0x762696*/
  __asm /*0x76269a*/
  {
    fadd dword ptr [eax+0B45CACh]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45CB0h]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45CB4h]
  }
  v68 = v80; /*0x7626bc*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x7626c0*/
  v69 = v81; /*0x7626c8*/
  v70 = v82; /*0x7626cc*/
  __asm /*0x7626d0*/
  {
    fld dword ptr [eax+0B45CB8h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45CBCh]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45CC0h]
  }
  v77 = v86; /*0x762702*/
  __asm { fstp [esp+0C8h+var_34] } /*0x762706*/
  v78 = v87; /*0x762714*/
  v79 = v88; /*0x762718*/
  __asm /*0x762720*/
  {
    fld dword ptr [eax+0B45CC4h]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45CC8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45CCCh]
  }
  v71 = v56; /*0x76273e*/
  __asm { fstp dword ptr [esp+0C8h+var_B4] } /*0x76274c*/
  LODWORD(v59) = v66 - v63; /*0x762750*/
  __asm /*0x762758*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_A4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_48]
    fmul st, st(3)
  }
  v72 = v57; /*0x762779*/
  __asm { fdiv st, st(2) } /*0x76277d*/
  LODWORD(v59) = LODWORD(v64) - v61; /*0x76278a*/
  __asm /*0x76278e*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_64]
    fld [esp+0D0h+var_54]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_7C]
    fld [esp+0D0h+var_3C]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_58]
    fld [esp+0D0h+var_BC]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_70]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x7627cf*/
  __asm /*0x7627d3*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x7627f2*/
  __asm /*0x7627f7*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x762807*/
  {
    __asm /*0x762809*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x76280d*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x762818*/
  {
    __asm /*0x76281a*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x762820*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x76282a*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x762837*/
  if ( v62 > v65 ) /*0x762840*/
  {
    __asm /*0x762842*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x762853*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x762858*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x762867*/
  v24 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v74); /*0x76287c*/
  v74 = *v24; /*0x762883*/
  v75 = v24[1]; /*0x76288f*/
  v76 = v24[2]; /*0x7628a1*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v68); /*0x7628a5*/
  v68 = *v25; /*0x7628ac*/
  v69 = v25[1]; /*0x7628b3*/
  v70 = v25[2]; /*0x7628c2*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v77); /*0x7628ce*/
  v77 = *v26; /*0x7628d5*/
  v78 = v26[1]; /*0x7628e1*/
  v79 = v26[2]; /*0x7628f3*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v71); /*0x7628f7*/
  __asm { fild [esp+0C8h+var_A0] } /*0x7628fc*/
  v71 = *v27; /*0x762902*/
  __asm /*0x762909*/
  {
    fld st
    fadd [esp+0C8h+var_6C]
  }
  v72 = v27[1]; /*0x76290f*/
  v73 = v27[2]; /*0x762916*/
  LOWORD(v28) = Math::RoundToInt(v3); /*0x76291a*/
  __asm { fild [esp+0C8h+var_9C] } /*0x76291f*/
  v29 = v28; /*0x762923*/
  __asm /*0x762925*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_68]
  }
  LOWORD(v30) = Math::RoundToInt(v3); /*0x76292d*/
  __asm { fld [esp+0C8h+var_64] } /*0x762932*/
  v57 = v30; /*0x762936*/
  LOWORD(v31) = Math::RoundToInt(v3); /*0x76293a*/
  v32 = v57; /*0x76293f*/
  __asm /*0x76294b*/
  {
    fld st
    fadd [esp+0C8h+var_84]
  }
  *(_DWORD *)&this->__pad_D0[44] = v29; /*0x762951*/
  *(float *)&this->__pad_D0[48] = v32; /*0x762953*/
  *(_DWORD *)&this->__pad_D0[52] = v31; /*0x762956*/
  LOWORD(v33) = Math::RoundToInt(v3); /*0x762959*/
  __asm /*0x76295e*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_80]
  }
  v34 = v33; /*0x762966*/
  LOWORD(v35) = Math::RoundToInt(v3); /*0x762968*/
  __asm { fld [esp+0C8h+var_7C] } /*0x76296d*/
  v57 = v35; /*0x762971*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x762975*/
  *(_DWORD *)&this->__pad_D0[56] = v34; /*0x762980*/
  __asm /*0x76298a*/
  {
    fld st
    fadd [esp+0C8h+var_60]
  }
  *(float *)&this->__pad_D0[60] = v57; /*0x762990*/
  *(_DWORD *)&this->__pad_D0[64] = v36; /*0x762993*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x762996*/
  __asm /*0x76299b*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_5C]
  }
  v38 = v37; /*0x7629a3*/
  LOWORD(v39) = Math::RoundToInt(v3); /*0x7629a5*/
  __asm { fld [esp+0C8h+var_58] } /*0x7629aa*/
  v57 = v39; /*0x7629ae*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x7629b2*/
  v41 = v57; /*0x7629b7*/
  __asm { fadd [esp+0C8h+var_78] } /*0x7629c1*/
  *(_DWORD *)&this->__pad_D0[68] = v38; /*0x7629c5*/
  *(float *)&this->__pad_D0[72] = v41; /*0x7629c7*/
  *(_DWORD *)&this->__pad_D0[76] = v40; /*0x7629ca*/
  LOWORD(v42) = Math::RoundToInt(v3); /*0x7629cd*/
  __asm /*0x7629d2*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_74]
  }
  v43 = v42; /*0x7629da*/
  LOWORD(v44) = Math::RoundToInt(v3); /*0x7629dc*/
  __asm { fld [esp+0C8h+var_70] } /*0x7629e1*/
  v57 = v44; /*0x7629e5*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x7629e9*/
  v46 = v57; /*0x7629ee*/
  *(_DWORD *)&this->__pad_D0[80] = v43; /*0x7629f8*/
  *(float *)&this->__pad_D0[84] = v46; /*0x762a06*/
  *(_DWORD *)&this->__pad_D0[88] = v45; /*0x762a09*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[44], (int *)&this->__pad_D0[12]); /*0x762a12*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[56], (int *)&this->__pad_D0[20]); /*0x762a2b*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[68], (int *)&this->__pad_D0[28]); /*0x762a44*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_D0[80], (int *)&this->__pad_D0[36]); /*0x762a5d*/
  v47 = *(_DWORD **)&this->__pad_134[24]; /*0x762a62*/
  *v47 = *(_DWORD *)&this->__pad_D0[12]; /*0x762a6a*/
  v47[1] = *(_DWORD *)&this->__pad_D0[16]; /*0x762a6f*/
  v48 = *(_DWORD *)&this->__pad_134[24]; /*0x762a72*/
  *(_DWORD *)(v48 + 8) = *(_DWORD *)&this->__pad_D0[20]; /*0x762a7a*/
  *(_DWORD *)(v48 + 12) = *(_DWORD *)&this->__pad_D0[24]; /*0x762a80*/
  v49 = *(_DWORD *)&this->__pad_134[24]; /*0x762a83*/
  *(_DWORD *)(v49 + 16) = *(_DWORD *)&this->__pad_D0[36]; /*0x762a8f*/
  *(_DWORD *)(v49 + 20) = *(_DWORD *)&this->__pad_D0[40]; /*0x762a98*/
  result = *(_DWORD *)&this->__pad_134[24]; /*0x762a9b*/
  *(_DWORD *)(result + 24) = *(_DWORD *)&this->__pad_D0[28]; /*0x762aa7*/
  *(_DWORD *)(result + 28) = *(_DWORD *)&this->__pad_D0[32]; /*0x762ab5*/
  qmemcpy(&this->__pad_134[164], (const void *)(*(_DWORD *)&this->__pad_134[160] + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/
}



// ==== 0x00762AE0  nullsub_47  this=-  sig=ida-proto ====
void __cdecl nullsub_47()
{
  ; /*0x762ae0*/
}



// ==== 0x00762AF0  Voxel::TransformMatrix  this=WaveClass  sig=csp ====
void __thiscall Voxel::TransformMatrix(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // eax
  int *v21; // eax
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  double v25; // st7
  double v26; // st7
  int v27; // eax
  int v28; // edi
  int v29; // eax
  _DWORD *v30; // ecx
  double v31; // st7
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // edx
  double v36; // st7
  char v38; // c0
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  int v44; // eax
  int v45; // edi
  int v46; // eax
  int v47; // edx
  double v48; // st7
  double v49; // st7
  int v50; // eax
  int v51; // edi
  int v52; // eax
  _DWORD *v53; // ecx
  double v54; // st7
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // edx
  double v59; // st7
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // ecx
  double v64; // st7
  char v66; // c0
  int v67; // eax
  int v68; // edi
  int v69; // eax
  int v70; // ecx
  double v71; // st7
  int v72; // eax
  int v73; // edi
  int v74; // eax
  int v75; // edx
  double v76; // st7
  int v77; // eax
  int v78; // edi
  int v79; // eax
  int v80; // ecx
  int v81; // [esp+20h] [ebp-1Ch] BYREF
  int v82; // [esp+24h] [ebp-18h]
  int v83; // [esp+28h] [ebp-14h]
  int v84; // [esp+2Ch] [ebp-10h]
  int v85[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)(this + 312) - *(double *)(this + 320) > 0.1 && !*(_DWORD *)(this + 176) ) /*0x762b18*/
    *(_BYTE *)(this + 301) = 1; /*0x762b22*/
  LOWORD(v2) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b35*/
  if ( *(_DWORD *)(this + 304) == v2 && *(_DWORD *)(this + 176) == 3 ) /*0x762b49*/
  {
    v3 = *(_DWORD *)(this + 308); /*0x762b4b*/
    *(_DWORD *)(this + 304) = 64; /*0x762b51*/
    *(_DWORD *)(this + 308) = v3 + 1; /*0x762b5c*/
  }
  v4 = *(_DWORD *)(this + 172); /*0x762b62*/
  if ( !v4 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v5 = *(_DWORD *)(this + 468); /*0x762b70*/
  if ( !v5 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  LOWORD(v6) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b8a*/
  if ( *(_DWORD *)(this + 304) == v6 ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( *(_DWORD *)(v5 + 692) != v4 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762bae*/
  {
    v7 = v5 + 156; /*0x762bc0*/
    v8 = *(_DWORD *)(v5 + 156); /*0x762bc4*/
    v9 = *(_DWORD *)(v7 + 4); /*0x762bc6*/
    v10 = *(_DWORD *)(v7 + 8); /*0x762bc9*/
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 172) + 88))( /*0x762bd1*/
                      *(_DWORD *)(this + 172),
                      v85);
    v12 = v10 - v11[2]; /*0x762bdb*/
    v82 = v8 - *v11; /*0x762bdd*/
    v13 = v9 - v11[1]; /*0x762be4*/
    v84 = v12; /*0x762be6*/
    v83 = v13; /*0x762bea*/
    Math::Sqrt((double)v82 * (double)v82 + (double)v12 * (double)v12 + (double)v13 * (double)v13); /*0x762c16*/
    LOWORD(v14) = Math::RoundToInt(1.0 / 0.050000001); /*0x762c1e*/
    v81 = v14; /*0x762c23*/
    if ( dbl_B45D80 * 6.0 < (double)v14 ) /*0x762c3e*/
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
    v15 = *(_DWORD *)(this + 172); /*0x762c6f*/
    if ( v15 && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) == 1 ) /*0x762c81*/
    {
      v16 = *(_DWORD *)(this + 172); /*0x762c97*/
      v17 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 468) + 176))( /*0x762ca9*/
              *(_DWORD *)(this + 468),
              v85,
              0,
              0,
              0);
      v18 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v16 + 88))(v16, &v81, v17); /*0x762cb9*/
      Voxel::LightRender((Voxel *)this, v18, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( *(_DWORD *)(this + 176) == 3 ) /*0x762ccf*/
    {
      v19 = *(_DWORD *)(this + 468); /*0x762cd7*/
      v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762ce8*/
      v21 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v19 + 176))( /*0x762d05*/
                     v19,
                     &v81,
                     0,
                     0,
                     0,
                     0,
                     v20);
      Voxel::LightRender((Voxel *)this, v21, (int)v85); /*0x762d0e*/
    }
    else
    {
LABEL_21:
      v22 = *(_DWORD *)(this + 468); /*0x762d1b*/
      v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762d2c*/
      v24 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v22 + 176))( /*0x762d49*/
                     v22,
                     &v81,
                     0,
                     0,
                     0,
                     0,
                     v23);
      Voxel::SectionProject((Voxel *)this, v24, (int)v85); /*0x762d52*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)(this + 176) != 3 ) /*0x762d6c*/
  {
    if ( *(double *)(this + 312) < 1.0 && *(_BYTE *)(this + 300) ) /*0x762f69*/
    {
      v48 = *(double *)(this + 312) + 0.050000001; /*0x762f7d*/
      *(double *)(this + 312) = v48; /*0x762f83*/
      if ( v48 > 0.98 ) /*0x762f94*/
      {
        *(_DWORD *)(this + 312) = 0; /*0x762f96*/
        *(_DWORD *)(this + 316) = 1072693248; /*0x762fa0*/
      }
      v49 = *(double *)(this + 312); /*0x762faa*/
      LOWORD(v50) = Math::RoundToInt(v49); /*0x762fca*/
      v51 = v50; /*0x762fd5*/
      LOWORD(v52) = Math::RoundToInt(v49); /*0x762fe3*/
      v53 = *(_DWORD **)(this + 332); /*0x762fe8*/
      *v53 = v51; /*0x762ff0*/
      v53[1] = v52; /*0x762ff4*/
      v54 = *(double *)(this + 312); /*0x762ff7*/
      LOWORD(v55) = Math::RoundToInt(v54); /*0x763017*/
      v56 = v55; /*0x763022*/
      LOWORD(v57) = Math::RoundToInt(v54); /*0x763030*/
      v58 = *(_DWORD *)(this + 332); /*0x763035*/
      *(_DWORD *)(v58 + 8) = v56; /*0x76303d*/
      *(_DWORD *)(v58 + 12) = v57; /*0x763042*/
      v59 = *(double *)(this + 312); /*0x763045*/
      LOWORD(v60) = Math::RoundToInt(v59); /*0x763065*/
      v61 = v60; /*0x763070*/
      LOWORD(v62) = Math::RoundToInt(v59); /*0x76307e*/
      v63 = *(_DWORD *)(this + 332); /*0x763083*/
      *(_DWORD *)(v63 + 16) = v61; /*0x76308b*/
      *(_DWORD *)(v63 + 20) = v62; /*0x763090*/
    }
    if ( *(_BYTE *)(this + 301) && 0.050000001 * 0.5 + *(double *)(this + 312) >= *(double *)(this + 320) ) /*0x7630be*/
    {
      v64 = *(double *)(this + 320) + 0.050000001; /*0x7630ca*/
      *(double *)(this + 320) = v64; /*0x7630d6*/
      if ( !v66 ) /*0x7630e1*/
        goto LABEL_31; /*0x7630e1*/
      LOWORD(v67) = Math::RoundToInt(v64); /*0x763111*/
      v68 = v67; /*0x76311c*/
      LOWORD(v69) = Math::RoundToInt(v64); /*0x76312a*/
      v70 = *(_DWORD *)(this + 332); /*0x76312f*/
      *(_DWORD *)(v70 + 24) = v68; /*0x763137*/
      *(_DWORD *)(v70 + 28) = v69; /*0x76313c*/
      v71 = *(double *)(this + 320); /*0x76313f*/
      LOWORD(v72) = Math::RoundToInt(v71); /*0x76315f*/
      v73 = v72; /*0x76316a*/
      LOWORD(v74) = Math::RoundToInt(v71); /*0x763178*/
      v75 = *(_DWORD *)(this + 332); /*0x76317d*/
      *(_DWORD *)(v75 + 32) = v73; /*0x763185*/
      *(_DWORD *)(v75 + 36) = v74; /*0x76318a*/
      v76 = *(double *)(this + 320); /*0x76318d*/
      LOWORD(v77) = Math::RoundToInt(v76); /*0x7631ad*/
      v78 = v77; /*0x7631b8*/
      LOWORD(v79) = Math::RoundToInt(v76); /*0x7631c6*/
      v80 = *(_DWORD *)(this + 332); /*0x7631cb*/
      *(_DWORD *)(v80 + 40) = v78; /*0x7631d3*/
      *(_DWORD *)(v80 + 44) = v79; /*0x7631d8*/
    }
    goto LABEL_42; /*0x7631d8*/
  }
  if ( *(double *)(this + 312) < 1.0 && *(_BYTE *)(this + 300) ) /*0x762d7b*/
  {
    v25 = *(double *)(this + 312) + 0.050000001; /*0x762d8f*/
    *(double *)(this + 312) = v25; /*0x762d95*/
    if ( v25 > 0.98 ) /*0x762da6*/
    {
      *(_DWORD *)(this + 312) = 0; /*0x762da8*/
      *(_DWORD *)(this + 316) = 1072693248; /*0x762db2*/
    }
    v26 = *(double *)(this + 312); /*0x762dbc*/
    LOWORD(v27) = Math::RoundToInt(v26); /*0x762ddc*/
    v28 = v27; /*0x762de7*/
    LOWORD(v29) = Math::RoundToInt(v26); /*0x762df5*/
    v30 = *(_DWORD **)(this + 332); /*0x762dfa*/
    *v30 = v28; /*0x762e02*/
    v30[1] = v29; /*0x762e06*/
    v31 = *(double *)(this + 312); /*0x762e09*/
    LOWORD(v32) = Math::RoundToInt(v31); /*0x762e29*/
    v33 = v32; /*0x762e34*/
    LOWORD(v34) = Math::RoundToInt(v31); /*0x762e42*/
    v35 = *(_DWORD *)(this + 332); /*0x762e47*/
    *(_DWORD *)(v35 + 8) = v33; /*0x762e4f*/
    *(_DWORD *)(v35 + 12) = v34; /*0x762e54*/
  }
  if ( !*(_BYTE *)(this + 301) || 0.050000001 * 0.5 + *(double *)(this + 312) < *(double *)(this + 320) ) /*0x762e82*/
  {
LABEL_42:
    Voxel::FaceBlit((Voxel *)this); /*0x7631db*/
    return; /*0x7631dd*/
  }
  v36 = *(double *)(this + 320) + 0.050000001; /*0x762e8e*/
  *(double *)(this + 320) = v36; /*0x762e9a*/
  if ( !v38 ) /*0x762ea5*/
  {
LABEL_31:
    (*(void (__thiscall **)(int))(this->WaveClass_field_1A4)(this); /*0x762ea7*/
    return; /*0x762eba*/
  }
  LOWORD(v39) = Math::RoundToInt(v36); /*0x762ed5*/
  v40 = v39; /*0x762ee0*/
  LOWORD(v41) = Math::RoundToInt(v36); /*0x762eee*/
  v42 = *(_DWORD *)(this + 332); /*0x762ef3*/
  *(_DWORD *)(v42 + 16) = v40; /*0x762efb*/
  *(_DWORD *)(v42 + 20) = v41; /*0x762f00*/
  v43 = *(double *)(this + 320); /*0x762f03*/
  LOWORD(v44) = Math::RoundToInt(v43); /*0x762f23*/
  v45 = v44; /*0x762f2e*/
  LOWORD(v46) = Math::RoundToInt(v43); /*0x762f3c*/
  v47 = *(_DWORD *)(this + 332); /*0x762f41*/
  *(_DWORD *)(v47 + 24) = v45; /*0x762f4b*/
  *(_DWORD *)(v47 + 28) = v46; /*0x762f50*/
  Voxel::FaceBlit((Voxel *)this); /*0x762f53*/
}



// ==== 0x007631F0  WaveClass::GetTypeIdentifier  this=WaveClass  sig=csp ====
int WaveClass::GetTypeIdentifier(WaveClass *this)
{
  return 43; /*0x7631f5*/
}



// ==== 0x00763200  WaveClass::ddtor  this=WaveClass  sig=csp ====
void **__thiscall WaveClass::ddtor(WaveClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  WaveClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &WaveClass::`vftable'; /*0x763206*/
  this->? = &WaveClass::`vftable'; /*0x76320c*/
  this->? = &WaveClass::`vftable'; /*0x763213*/
  this->? = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x763221*/
  v6 = this; /*0x763236*/
  v3 = (*(int (__thiscall **)(_BYTE *, WaveClass **))(*(_DWORD *)&stru_A8EB00.?[84] + 16))(&stru_A8EB00.?[84], &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[100] ) /*0x76324a*/
  {
    --*(_DWORD *)&stru_A8EB00.?[100]; /*0x76324f*/
    for ( ; /*0x763255*/
          v3 < *(int *)&stru_A8EB00.?[100];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v3) )
    {
      ++v3; /*0x76325d*/
    }
  }
  (*(void (__thiscall **)(char *))(this->WaveClass_field_128 + 12))((char *)this + 496); /*0x76327e*/
  v4 = (void *)*((_DWORD *)this + 125); /*0x763281*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x763284*/
  if ( v4 && *((_BYTE *)this + 509) ) /*0x76328e*/
  {
    __3_YAXPAX_Z(v4); /*0x763296*/
    *((_DWORD *)this + 125) = 0; /*0x76329e*/
  }
  *((_BYTE *)this + 509) = 0; /*0x7632a7*/
  *((_DWORD *)this + 126) = 0; /*0x7632ab*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    __3_YAXPAX_Z(this); /*0x7632c1*/
  return &this->ObjectClass; /*0x7632cb*/
}



// ==== 0x007632D0  WaveClass::Constructor_7632D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall WaveClass::Constructor_7632D0(WaveClass *this, int a2, int a3)
{
  this->? = 0; /*0x7632d9*/
  this->? = (void *)a2; /*0x7632e0*/
  LOBYTE(this->?) = 1; /*0x7632e3*/
  BYTE1(this->?) = 0; /*0x7632e7*/
  this->ObjectClass = &VectorClass<CellClass *>::`vftable'; /*0x7632eb*/
  if ( a2 ) /*0x7632f1*/
  {
    if ( a3 ) /*0x7632f9*/
    {
      this->? = (void *)a3; /*0x7632fb*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x76330c*/
      BYTE1(this->?) = 1; /*0x76330f*/
    }
  }
  this->ObjectClass = &DynamicVectorClass<CellClass *>::`vftable'; /*0x763313*/
  this->? = 10; /*0x763319*/
  this->? = 0; /*0x763320*/
  return &this->ObjectClass; /*0x763329*/
}



// ==== 0x00763330  Voxel::freeSectionMemory  this=Voxel  sig=csp ====
char __thiscall Voxel::freeSectionMemory(Voxel *this, _DWORD *a2)
{
  int Voxel_field_0x8; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  Voxel_field_0x8 = this->Voxel_field_0x8; /*0x763333*/
  if ( this->Voxel_field_0x10[0] >= Voxel_field_0x8 ) /*0x76333b*/
  {
    if ( !BYTE1(this->Voxel_field_0xC) && Voxel_field_0x8 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = this->Voxel_field_0x14[0]; /*0x763348*/
    if ( v4 <= 0 /*0x763358*/
      || !(*(unsigned __int8 (__thiscall **)(Voxel *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            Voxel_field_0x8 + v4,
            0) )
    {
      return 0; /*0x76335f*/
    }
  }
  v6 = this->Voxel_field_0x10[0]; /*0x763365*/
  v7 = this->Voxel_field_0x4[0]; /*0x763368*/
  this->Voxel_field_0x10[0] = v6 + 1; /*0x76336e*/
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
  dword_B72608 = (int)&DynamicVectorClass<WaypointPathClass *>::`vftable'; /*0x7635ad*/
  dword_B7261C = 10; /*0x7635b7*/
  dword_B72618 = 0; /*0x7635c1*/
  return atexit(sub_7635D0); /*0x7635cc*/
}



// ==== 0x007635D0  sub_7635D0  this=-  sig=ida-proto ====
void __cdecl sub_7635D0()
{
  dword_B72608 = (int)&VectorClass<WaypointPathClass *>::`vftable'; /*0x7635d8*/
  if ( dword_B7260C && byte_B72615 ) /*0x7635ec*/
  {
    __3_YAXPAX_Z(dword_B7260C); /*0x7635ef*/
    dword_B7260C = 0; /*0x7635f7*/
  }
  byte_B72615 = 0; /*0x7635fd*/
  dword_B72610 = 0; /*0x763603*/
}



// ==== 0x00763610  Waypoint::To_String  this=Waypoint  sig=csp ====
CHAR *__fastcall Waypoint::To_String(int a1)
{
  if ( a1 == -1 ) /*0x763613*/
  {
    byte_B72654 = 0; /*0x763615*/
    return &byte_B72654; /*0x76361c*/
  }
  else
  {
    if ( a1 >= 26 ) /*0x763625*/
      wsprintfA(&byte_B72654, "%c%c", a1 / 26 + 64, a1 % 26 + 65); /*0x763671*/
    else
      wsprintfA(&byte_B72654, "%c", a1 + 65); /*0x763635*/
    return &byte_B72654; /*0x76363e*/
  }
}



// ==== 0x00763690  String::To_Waypoint  this=AbstractClass  sig=csp ====
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
_DWORD *__thiscall unknown_libname_36(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x7636f4*/
  this->? = 0; /*0x7636f6*/
  this->? = 0; /*0x7636f9*/
  return &this->AbstractClass; /*0x7636fc*/
}



// ==== 0x00763700  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_763700(ObjectClass *this, _DWORD *a2)
{
  this->AbstractClass = (void *)*a2; /*0x76370b*/
  this->? = (void *)a2[1]; /*0x763710*/
  this->? = (void *)a2[2]; /*0x763717*/
  return &this->AbstractClass; /*0x763713*/
}



// ==== 0x00763720  ObjectClass::nullsub_84  this=ObjectClass  sig=csp ====
void nullsub_84()
{
  ; /*0x763720*/
}



// ==== 0x00763730  WaypointPathClass::Init  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::Init(WaypointPathClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  this->waypoints[1] = 0; /*0x763741*/
  this->waypoints[2] = 0; /*0x763744*/
  LOBYTE(this->waypoints[3]) = 1; /*0x763747*/
  BYTE1(this->waypoints[3]) = 0; /*0x76374b*/
  this->waypoints[0] = (int)&DynamicVectorClass<WaypointClass>::`vftable'; /*0x76374e*/
  this->waypoints[5] = 10; /*0x763755*/
  this->waypoints[4] = 0; /*0x76375c*/
  this->AbstractClass = &WaypointPathClass::`vftable'; /*0x76375f*/
  this->? = &WaypointPathClass::`vftable'; /*0x763765*/
  this->? = &WaypointPathClass::`vftable'; /*0x76376c*/
  this->? = &WaypointPathClass::`vftable'; /*0x763773*/
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
  return (int)this; /*0x7637cd*/
}



// ==== 0x00763810  WaypointPathClass::Construct  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass_Constructor(int this, unsigned int a2)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  *(_DWORD *)(this + 36) = -1; /*0x76381e*/
  *(_DWORD *)(this + 44) = 0; /*0x763825*/
  *(_DWORD *)(this + 48) = 0; /*0x763828*/
  *(_BYTE *)(this + 52) = 1; /*0x76382b*/
  *(_BYTE *)(this + 53) = 0; /*0x76382f*/
  *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
  *(_DWORD *)(this + 60) = 10; /*0x763839*/
  *(_DWORD *)(this + 56) = 0; /*0x763840*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
  *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
  if ( a2 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = dword_B72618++; /*0x7638a7*/
    *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
  }
  return this; /*0x7638bb*/
}



// ==== 0x00763980  Array::GetElement  this=Array  sig=csp ====
int __thiscall Array::GetElement(Array *this, int a2)
{
  if ( a2 < 0 || a2 >= (int)this->Array_field_0x38 ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return (int)this->Array_field_0x2C + 12 * a2; /*0x763993*/
}



// ==== 0x007639A0  ObjectClass::WaypointClass_Find  this=ObjectClass  sig=csp ====
char __thiscall WaypointClass_Find(ObjectClass *this, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  BombClass *attachedBomb; // eax
  int *p_owningHouseIndex; // esi
  ObjectClass *nextObject; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int *v13; // ecx

  v2 = a2[2]; /*0x7639c2*/
  v3 = ((__int16)(a2[1] / 256) << 8) + 128; /*0x7639e0*/
  v4 = ((__int16)(*a2 / 256) << 8) + 128; /*0x7639ee*/
  if ( this->occupant == -1 ) /*0x7639f4*/
  {
    attachedBomb = this->attachedBomb; /*0x7639f6*/
    p_owningHouseIndex = &this->owningHouseIndex; /*0x7639f9*/
    nextObject = this->nextObject; /*0x7639fc*/
    if ( (int)attachedBomb < (int)nextObject /*0x763a1e*/
      || (*((_BYTE *)p_owningHouseIndex + 13) || !nextObject)
      && (v8 = p_owningHouseIndex[5], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_owningHouseIndex + 8))(
           p_owningHouseIndex,
           (int)nextObject + v8,
           0) )
    {
      v9 = p_owningHouseIndex[4]; /*0x763a25*/
      v10 = v9 + 1; /*0x763a28*/
      v11 = 3 * v9; /*0x763a2b*/
      v12 = p_owningHouseIndex[1]; /*0x763a2e*/
      p_owningHouseIndex[4] = v10; /*0x763a31*/
      v13 = (int *)(v12 + 4 * v11); /*0x763a34*/
      *v13 = v4; /*0x763a37*/
      v13[1] = v3; /*0x763a3a*/
      v13[2] = v2; /*0x763a3d*/
    }
  }
  return 1; /*0x763a40*/
}



// ==== 0x00763A50  Waypoint::FindCell  this=Waypoint  sig=csp ====
char __thiscall Waypoint::FindCell(Waypoint *this, _DWORD *a2)
{
  int v3; // ecx
  _DWORD *i; // edi
  void *v6; // [esp+10h] [ebp-8h]
  Waypoint *v7; // [esp+14h] [ebp-4h]

  v3 = 0; /*0x763a59*/
  v7 = this; /*0x763a5b*/
  v6 = this->field_38; /*0x763a64*/
  if ( (int)v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = *(_DWORD **)&this->__pad_0[44]; /*0x763a6e*/
        (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= (int)v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  *(_DWORD *)&v7->__pad_0[36] = v3; /*0x763ad0*/
  return 1; /*0x763acd*/
}



// ==== 0x00763BA0  VectorClass::GetAtChecked  this=VectorClass  sig=csp ====
int __thiscall VectorClass::GetAtChecked(VectorClass *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 10) + 20))((char *)this + 40, a2) + 1; /*0x763bb4*/
  if ( *((_DWORD *)this + 9) != -1 && v3 == this->tail_E ) /*0x763bbd*/
    v3 = *((_DWORD *)this + 9); /*0x763bbf*/
  if ( v3 < 0 || v3 >= this->tail_E ) /*0x763bc8*/
    return 0; /*0x763bd7*/
  else
    return *((_DWORD *)this + 11) + 12 * v3; /*0x763bd1*/
}



// ==== 0x00763C00  WaypointPathClass::PowerDrainUpdate  this=WaypointPathClass  sig=csp ====
int __thiscall WaypointPathClass::PowerDrainUpdate(WaypointPathClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x763c09*/
  Power::TimerProcess(this->idxArray); /*0x763c14*/
  return Power::TimerProcess(this->waypoints[4]); /*0x763c24*/
}



// ==== 0x00763C30  WaypointPathClass::ddtor  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::ddtor(WaypointPathClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = unk_7E985C; /*0x763c60*/
  return 0; /*0x763c3d*/
}



// ==== 0x00763C70  WaypointPathClass::LoadState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::LoadState(WaypointPathClass *this, int a2)
{
  AbstractClass *v2; // esi
  int v3; // edi
  int result; // eax
  WaypointPathClass *p_vtable1; // esi
  int v6; // ebp
  int v7; // eax
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  int v11; // ecx
  int v12; // edx
  char *vtable1; // eax
  char *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v2 = (AbstractClass *)this; /*0x763c76*/
  v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[1].vtable1 = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ca0*/
      v2->vtable0 = &WaypointPathClass::`vftable'; /*0x763ca7*/
      v2->vtable1 = &WaypointPathClass::`vftable'; /*0x763cad*/
      v2->vtable2 = &WaypointPathClass::`vftable'; /*0x763cb4*/
      v2->vtable3 = &WaypointPathClass::`vftable'; /*0x763cbb*/
    }
    result = (*(int (__stdcall **)(int, WaypointPathClass **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &this, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      p_vtable1 = (WaypointPathClass *)&v2[1].vtable1; /*0x763cd8*/
      if ( p_vtable1 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(p_vtable1, 0, 0); /*0x763ce3*/
        p_vtable1->AbstractClass = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ce8*/
        p_vtable1->? = 10; /*0x763cee*/
        p_vtable1->? = 0; /*0x763cf5*/
      }
      v6 = 0; /*0x763cfc*/
      if ( (int)this <= 0 ) /*0x763d00*/
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
          vtable2 = p_vtable1->?; /*0x763d20*/
          if ( p_vtable1->? < (int)vtable2 /*0x763d42*/
            || (BYTE1(p_vtable1->?) || !vtable2)
            && (abstractFlags = p_vtable1->?, abstractFlags > 0)
            && (*((unsigned __int8 (__thiscall **)(WaypointPathClass *, int, _DWORD))p_vtable1->AbstractClass + 2))(
                 p_vtable1,
                 (int)vtable2 + abstractFlags,
                 0) )
          {
            uniqueId = p_vtable1->?; /*0x763d49*/
            v11 = uniqueId + 1; /*0x763d4c*/
            v12 = 3 * uniqueId; /*0x763d4f*/
            vtable1 = (char *)p_vtable1->?; /*0x763d52*/
            p_vtable1->? = v11; /*0x763d55*/
            v14 = &vtable1[4 * v12]; /*0x763d58*/
            *(_DWORD *)v14 = v15; /*0x763d5f*/
            *((_DWORD *)v14 + 1) = v16; /*0x763d65*/
            *((_DWORD *)v14 + 2) = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)this ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return result; /*0x763d7a*/
}



// ==== 0x00763D90  WaypointPathClass::SaveState  this=WaypointPathClass  sig=csp ====
int __stdcall WaypointPathClass::SaveState(WaypointPathClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a2; /*0x763daf*/
    a3 = this->waypoints[4]; /*0x763dbb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x763dbf*/
    if ( result >= 0 ) /*0x763dc4*/
    {
      v5 = 0; /*0x763dca*/
      if ( a3 <= 0 ) /*0x763dce*/
      {
        return 0; /*0x763df4*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x763dd0*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->waypoints[1] + i, 12, 0); /*0x763de1*/
          if ( result < 0 ) /*0x763de6*/
            break; /*0x763de6*/
          if ( ++v5 >= a3 ) /*0x763df2*/
            return 0; /*0x763df2*/
        }
      }
    }
  }
  return result; /*0x763df6*/
}



// ==== 0x00763E00  WaypointPathClass::StubReturn64  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::StubReturn64(WaypointPathClass *this)
{
  return 64; /*0x763e05*/
}



// ==== 0x00763E10  WaypointPathClass::StubReturn51  this=WaypointPathClass  sig=csp ====
int WaypointPathClass::StubReturn51(WaypointPathClass *this)
{
  return 51; /*0x763e15*/
}



// ==== 0x00763E20  WaypointPathClass::ProcessEvent  this=WaypointPathClass  sig=csp ====
void **__thiscall WaypointPathClass::ProcessEvent(WaypointPathClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  WaypointPathClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &WaypointPathClass::`vftable'; /*0x763e26*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e2c*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e33*/
  this->? = &WaypointPathClass::`vftable'; /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x763e41*/
  v6 = this; /*0x763e56*/
  v3 = (*(int (__thiscall **)(int *, WaypointPathClass **))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((_DWORD *)dword_B7260C + v3 - 1) = *((_DWORD *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = this->waypoints[1]; /*0x763e8f*/
  this->waypoints[0] = (int)&VectorClass<WaypointClass>::`vftable'; /*0x763e92*/
  if ( v4 && BYTE1(this->waypoints[3]) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    this->waypoints[1] = 0; /*0x763eb8*/
  }
  BYTE1(this->waypoints[3]) = 0; /*0x763ec1*/
  this->waypoints[2] = 0; /*0x763ec5*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(this); /*0x763ed9*/
  return &this->AbstractClass; /*0x763ee3*/
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
_DWORD *__thiscall AbstractClass::fireSuperWeapon(_VectorClass_VWaypointClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x763f6b*/
  *a2 = *v3; /*0x763f76*/
  a2[1] = v3[1]; /*0x763f7b*/
  a2[2] = v3[2]; /*0x763f82*/
  return a2; /*0x763f7e*/
}



// ==== 0x00763F90  _DynamicVectorClass_PAVWaypointPathClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::Destroy(_DynamicVectorClass_PAVWaypointPathClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x763f96*/
  this->m_10 = 0; /*0x763f99*/
  if ( v2 && BYTE1(this->m_C) ) /*0x763fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x763fa6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x763fae*/
  }
  BYTE1(this->m_C) = 0; /*0x763fb1*/
  this->m_8 = 0; /*0x763fb4*/
}



// ==== 0x00763FC0  _DynamicVectorClass_PAVWaypointPathClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::GetItemIndex(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x763fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x763fd5*/
  else
    return 0; /*0x763fc7*/
}



// ==== 0x00763FE0  _VectorClass_PAVWaypointPathClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::Get(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x763fea*/
}



// ==== 0x00763FF0  ?$DynamicVectorClass@VWaypointClass@@::checkSWTarget  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_763FF0(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x763ff3*/
  *Block = &VectorClass<WaypointClass>::`vftable'; /*0x763ff6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764000*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764013*/
    *(Block + 1) = 0; /*0x76401b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764026*/
  *(Block + 2) = 0; /*0x76402c*/
  if ( (a2 & 1) != 0 ) /*0x764033*/
    __3_YAXPAX_Z(Block); /*0x764036*/
  return Block; /*0x764040*/
}



// ==== 0x00764050  ?$VectorClass@VWaypointClass@@::getSWChargeState  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_764050(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x764053*/
  *Block = &VectorClass<WaypointClass>::`vftable'; /*0x764056*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x764060*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x764073*/
    *(Block + 1) = 0; /*0x76407b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x764086*/
  *(Block + 2) = 0; /*0x76408c*/
  if ( (a2 & 1) != 0 ) /*0x764093*/
    __3_YAXPAX_Z(Block); /*0x764096*/
  return Block; /*0x7640a0*/
}



// ==== 0x007640B0  _VectorClass_VWaypointClass::setSWCharge  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::setSWCharge(_VectorClass_VWaypointClass *this, int a2)
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
    v5 = *(_DWORD **)&this->m_1[3]; /*0x7640cb*/
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
      v11 = this->q008; /*0x764387*/
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
    this->q008 = v3; /*0x7643e2*/
    this->IsAllocated = v5 == 0; /*0x7643e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x7643ee*/
  }
  v16 = this->q008; /*0x7643f1*/
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
char __thiscall VectorClass_ptr_WaypointPathClass::Add(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x764462*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76446d*/
  {
    v3 = 0; /*0x76446f*/
    if ( m_8 <= 0 ) /*0x764473*/
      return 1; /*0x764493*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x764475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76447b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x764484*/
    {
      ++v3; /*0x764486*/
      ++v4; /*0x764487*/
      if ( v3 >= m_8 ) /*0x76448c*/
        return 1; /*0x76448c*/
    }
  }
  return 0; /*0x76448e*/
}



// ==== 0x007644A0  _VectorClass_PAVWaypointPathClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::Release(_VectorClass_PAVWaypointPathClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7644ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x7644b6*/
    if ( a3 ) /*0x7644bc*/
      v4 = a3; /*0x7644d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7644ce*/
    LOBYTE(this->m_C) = 1; /*0x7644d6*/
    if ( v4 ) /*0x7644da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7644e5*/
      {
        m_8 = this->m_8; /*0x7644ec*/
        if ( a2 < m_8 ) /*0x7644f1*/
          m_8 = a2; /*0x7644f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7644f9*/
          ++i; /*0x7644fe*/
        if ( BYTE1(this->m_C) ) /*0x76450b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764516*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76451e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x764527*/
      this->m_8 = a2; /*0x76452f*/
      BYTE1(this->m_C) = a3 == 0; /*0x764532*/
      return 1; /*0x764538*/
    }
    else
    {
      return 0; /*0x7644df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVWaypointPathClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x764542*/
    return 1; /*0x764548*/
  }
}



// ==== 0x00764550  _VectorClass_PAVWaypointPathClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WaypointPathClass::Remove(_VectorClass_PAVWaypointPathClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76455d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764563*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76456b*/
  }
  BYTE1(this->m_C) = 0; /*0x76456e*/
  this->m_8 = 0; /*0x764571*/
}



// ==== 0x00764580  _VectorClass_PAVWaypointPathClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::GetSize(_VectorClass_PAVWaypointPathClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x764580*/
    return 0; /*0x764588*/
  m_8 = this->m_8; /*0x76458e*/
  result = 0; /*0x764591*/
  if ( m_8 <= 0 ) /*0x764595*/
    return -1; /*0x7645ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76459b*/
  {
    if ( ++result >= m_8 ) /*0x7645aa*/
      return -1; /*0x7645aa*/
  }
  return result; /*0x76458a*/
}



// ==== 0x007645C0  _VectorClass_PAVWaypointPathClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaypointPathClass::GetCapacity(_VectorClass_PAVWaypointPathClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7645c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7645d5*/
  else
    return 0; /*0x7645c7*/
}



// ==== 0x007645E0  _DynamicVectorClass_PAVWaypointPathClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_WaypointPathClass::SetCapacity(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7645ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x7645f2*/
    if ( a3 ) /*0x7645f8*/
      v4 = a3; /*0x76460e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76460a*/
    LOBYTE(this->m_C) = 1; /*0x764612*/
    if ( !v4 ) /*0x764616*/
      return 0; /*0x76468a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x764618*/
    {
      m_8 = this->m_8; /*0x76461f*/
      if ( a2 < m_8 ) /*0x764624*/
        m_8 = a2; /*0x764626*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76462c*/
        ++i; /*0x764631*/
      if ( BYTE1(this->m_C) ) /*0x76463e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x764649*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x764651*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x76465a*/
    this->m_8 = a2; /*0x764662*/
    BYTE1(this->m_C) = a3 == 0; /*0x764665*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVWaypointPathClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76466e*/
  }
  v7 = this->m_8; /*0x764671*/
  if ( v7 < this->m_10 ) /*0x764679*/
    this->m_10 = v7; /*0x76467b*/
  return 1; /*0x76467e*/
}



// ==== 0x00764690  _DynamicVectorClass_PAVWaypointPathClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_WaypointPathClass::FindItemIndex(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x764690*/
  result = 0; /*0x764693*/
  if ( m_10 <= 0 ) /*0x764698*/
    return -1; /*0x7646af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76469e*/
  {
    if ( ++result >= m_10 ) /*0x7646ad*/
      return -1; /*0x7646ad*/
  }
  return result; /*0x7646b2*/
}



// ==== 0x007646C0  _VectorClass_PAVWaypointPathClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WaypointPathClass::QueryInterface(_VectorClass_PAVWaypointPathClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7646c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WaypointPathClass *>::`vftable'; /*0x7646c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7646d0*/
  {
    __3_YAXPAX_Z(v3); /*0x7646d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7646e0*/
  }
  BYTE1(this->m_C) = 0; /*0x7646eb*/
  this->m_8 = 0; /*0x7646f1*/
  if ( (a2 & 1) != 0 ) /*0x7646f8*/
    __3_YAXPAX_Z(this); /*0x7646fb*/
  return this->__pad_0; /*0x764705*/
}



// ==== 0x00764710  _DynamicVectorClass_PAVWaypointPathClass::Constructor_VectorClass_WaypointPathClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(
        _DynamicVectorClass_PAVWaypointPathClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x764713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WaypointPathClass *>::`vftable'; /*0x764716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x764720*/
  {
    __3_YAXPAX_Z(v3); /*0x764728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x764730*/
  }
  BYTE1(this->m_C) = 0; /*0x76473b*/
  this->m_8 = 0; /*0x764741*/
  if ( (a2 & 1) != 0 ) /*0x764748*/
    __3_YAXPAX_Z(this); /*0x76474b*/
  return this->__pad_0; /*0x764755*/
}



// ==== 0x00764760  WaypointPathClass::computePath  this=VectorClass  sig=csp ====
_DWORD *__thiscall WaypointPathClass::computePath(WaypointPathClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->? = 0; /*0x76476d*/
  this->? = (void *)a2; /*0x764770*/
  LOBYTE(this->?) = 1; /*0x764773*/
  BYTE1(this->?) = 0; /*0x764777*/
  this->AbstractClass = &VectorClass<WaypointClass>::`vftable'; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return &this->AbstractClass; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
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
        this->? = v8; /*0x7647e6*/
        BYTE1(this->?) = 1; /*0x7647e9*/
        return &this->AbstractClass; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    this->? = v8; /*0x7647f7*/
    BYTE1(this->?) = 1; /*0x7647fa*/
    return &this->AbstractClass; /*0x7647fe*/
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
  this->? = a3 + 1; /*0x7647a7*/
  return &this->AbstractClass; /*0x7647ac*/
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
int __thiscall sub_764A20(ObjectClass *this)
{
  int Int; // esi
  String v4; // [esp+8h] [ebp-9Ch] BYREF
  int v5; // [esp+10h] [ebp-94h]
  int v6; // [esp+14h] [ebp-90h]
  void **v7; // [esp+18h] [ebp-8Ch]
  LinkedList v8; // [esp+1Ch] [ebp-88h] BYREF
  GenericNode v9; // [esp+28h] [ebp-7Ch] BYREF
  int v10; // [esp+34h] [ebp-70h]
  int v11; // [esp+38h] [ebp-6Ch]
  int v12; // [esp+3Ch] [ebp-68h]
  char v13; // [esp+40h] [ebp-64h]
  int v14; // [esp+44h] [ebp-60h]
  int v15; // [esp+48h] [ebp-5Ch]
  BufferIOFile v16; // [esp+4Ch] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v16, aWdthistIni_0); /*0x764a33*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v16, 0) ) /*0x764a3f*/
  {
    v5 = 0; /*0x764a50*/
    v6 = 0; /*0x764a54*/
    GenericNode::Constructor((GenericNode *)&v8); /*0x764a58*/
    GenericNode::Constructor(&v9); /*0x764a61*/
    LinkedList::Prepend(&v8, (int)&v9); /*0x764a77*/
    v7 = &List<INIClass::INISection *>::`vftable'; /*0x764a80*/
    v10 = 0; /*0x764a8e*/
    v11 = 0; /*0x764a92*/
    v12 = 0; /*0x764a96*/
    v13 = 0; /*0x764a9a*/
    v14 = 0; /*0x764a9e*/
    v15 = 0; /*0x764aa2*/
    *(_DWORD *)&v4.m_3[1] = &INIClass::`vftable'; /*0x764aa6*/
    FileStraw::Open((FileStraw *)&v4.m_3[1], (int)&v16, 0); /*0x764aae*/
    CCFileClass::Close((BufferIOFileClass *)&v16); /*0x764ab7*/
    String::Assign(&v4, g_INI_Key_CampaignID); /*0x764ac5*/
    Int = INIClass::ReadInt((bool *)&v4.m_3[1], (char **)this, (char **)&v4, -1); /*0x764adf*/
    DeleteAndZero((ObjectClass *)&v4); /*0x764ae1*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v4.m_3[1]); /*0x764aea*/
    *(_DWORD *)v16.__pad_0 = &off_7E1668; /*0x764af3*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764afb*/
    return Int; /*0x764b00*/
  }
  else
  {
    *(_DWORD *)v16.__pad_0 = &off_7E1668; /*0x764b0f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764b17*/
    return -1; /*0x764b1c*/
  }
}



// ==== 0x00764B30  rc_ptr::Audio_Create  this=rc_ptr  sig=csp ====
_DWORD *__fastcall Audio_Create(rc_ptr *this, const char **a2, int a3)
{
  char *v6; // eax
  char *v7; // edi

  if ( *(_DWORD *)(a3 + 4) ) /*0x764b37*/
  {
    v6 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x764b57*/
    if ( v6 ) /*0x764b61*/
      v7 = CampaignConstructorWDT(v6, a2, a3); /*0x764b6c*/
    else
      v7 = 0; /*0x764b70*/
    ComPtr::Constructor((ComPtr *)this); /*0x764b74*/
    *(_DWORD *)this = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x764b7b*/
    ComPtr::Set((ComPtr *)this, (int)v7); /*0x764b82*/
    return this; /*0x764b87*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)this); /*0x764b42*/
    *(_DWORD *)this = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x764b47*/
    return this; /*0x764b4d*/
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
  *((_DWORD *)this + 1) = 0; /*0x764baa*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x764bad*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x764bb3*/
  *v4 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x764bbf*/
  ComPtr::Set(v4, *(_DWORD *)(a3 + 4)); /*0x764bcb*/
  Team_Create_767B00(this + 16, *(_DWORD *)(a3 + 4) + 8); /*0x764bdb*/
  Team_Create_765C90(4, 0); /*0x764be9*/
  *((_DWORD *)this + 6) = &DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x764bf7*/
  *((_DWORD *)this + 11) = 10; /*0x764bfd*/
  *((_DWORD *)this + 10) = 0; /*0x764c04*/
  *((_DWORD *)this + 17) = 0; /*0x764c0b*/
  String::AssignFromPtr((char **)this + 18, a2); /*0x764c0e*/
  *(_DWORD *)this = &WorldDominationTour::Campaign::`vftable'; /*0x764c18*/
  *((_DWORD *)this + 13) = 0; /*0x764c1e*/
  *((_DWORD *)this + 14) = 0; /*0x764c20*/
  *((_DWORD *)this + 15) = 0; /*0x764c23*/
  *((_DWORD *)this + 16) = 0; /*0x764c26*/
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
            v26[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764ca3*/
            LOBYTE(v10) = v35 | 1; /*0x764cab*/
            v9 = v26; /*0x764cad*/
            v35 = v10; /*0x764cb1*/
          }
          else
          {
            v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 48) + 8 * v8); /*0x764c8e*/
          }
          ComPtr::Constructor(v25); /*0x764cbc*/
          v25[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764cc1*/
          ComPtr::Set(v25, v9[1]); /*0x764cd1*/
          if ( (v35 & 1) != 0 ) /*0x764cde*/
          {
            v11 = v35; /*0x764ce0*/
            LOBYTE(v11) = v35 & 0xFE; /*0x764ceb*/
            v26[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764ced*/
            v35 = v11; /*0x764cf5*/
            ComPtr::Release(v26); /*0x764cfc*/
          }
          if ( v25[1] ) /*0x764d07*/
          {
            Team_Create_765F60(v27, v25); /*0x764d11*/
            v12 = *((_DWORD *)this + 8); /*0x764d16*/
            if ( *((_DWORD *)this + 10) < v12 /*0x764d3b*/
              || (*(this + 37) || !v12)
              && (v13 = *((_DWORD *)this + 11), v13 > 0)
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 6) + 8))(
                   this + 24,
                   v12 + v13,
                   0) )
            {
              v14 = *((_DWORD *)this + 10); /*0x764d42*/
              v22 = v27[1]; /*0x764d49*/
              *((_DWORD *)this + 10) = v14 + 1; /*0x764d4d*/
              ComPtr::Set((_DWORD *)(*((_DWORD *)this + 7) + 8 * v14), v22); /*0x764d56*/
            }
            v27[0] = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x764d5f*/
            ComPtr::Release(v27); /*0x764d67*/
          }
          v25[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x764d70*/
          ComPtr::Release(v25); /*0x764d78*/
          v8 = v24; /*0x764d7d*/
        }
        v15 = v8--; /*0x764d81*/
        v24 = v8; /*0x764d86*/
      }
      while ( v15 ); /*0x764d8a*/
    }
    v28[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x764d94*/
    ComPtr::Release(v28); /*0x764d9c*/
  }
  BufferIOFile::Constructor(v34, aWdthistIni_0); /*0x764daa*/
  v16 = 0; /*0x764daf*/
  if ( File::IsReady(v34, 0) )
  {
    v29[1] = 0; /*0x764dc7*/
    v29[2] = 0; /*0x764dcb*/
    GenericList::Constructor(v30); /*0x764dcf*/
    v30[0] = &List<INIClass::INISection *>::`vftable'; /*0x764dde*/
    memset(&v30[7], 0, 12); /*0x764de6*/
    LOBYTE(v31) = 0; /*0x764df2*/
    v32 = 0; /*0x764df7*/
    v33 = 0; /*0x764dfb*/
    v29[0] = &INIClass::`vftable'; /*0x764dff*/
    FileStraw::Open(v29, (int)v34, 0); /*0x764e07*/
    CCFileClass::Close(v34); /*0x764e10*/
    String::Assign((char **)&v24, g_INI_Key_CampaignID); /*0x764e1e*/
    Int = INIClass::ReadInt((char **)this + 18, (char **)&v24, -1); /*0x764e3b*/
    DeleteAndZero((void **)&v24); /*0x764e3d*/
    *((_DWORD *)this + 12) = Int < 0 ? 0 : Int;
    if ( *((_DWORD *)this + 12) == WDTObject::GetSize(*(_DWORD **)(a3 + 4)) )
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
      *((_DWORD *)this + 17) = INIClass::ReadInt((char **)this + 18, (char **)&v24, *((_DWORD *)this + 17)); /*0x764ee9*/
      DeleteAndZero((void **)&v24); /*0x764eec*/
    }
    else
    {
      *((_DWORD *)this + 13) = 0; /*0x764ef5*/
      *((_DWORD *)this + 14) = 0; /*0x764ef8*/
      *((_DWORD *)this + 15) = 0; /*0x764efb*/
      *((_DWORD *)this + 16) = 0; /*0x764efe*/
    }
    HashTable::DestroyHashTableINIClass(v29); /*0x764f05*/
  }
  v34[0] = &off_7E1668; /*0x764f0e*/
  BufferIOFileClass::Dtor(v34); /*0x764f16*/
  return this; /*0x764f1d*/
}



// ==== 0x00764FA0  ObjectClass::Team_Start_764FA0  this=ObjectClass  sig=csp ====
bool __thiscall Team_Start_764FA0(ObjectClass *this)
{
  return this->nextObject != (ObjectClass *)WDTObject::GetSize((WDTObject *)this->?); /*0x764fb2*/
}



// ==== 0x00764FC0  ObjectClass::ConstructWDTSelection_Create  this=ObjectClass  sig=csp ====
bool __thiscall sub_764FC0(int this, int a2)
{
  return *(_DWORD *)(this + 48) != WDTObject::GetSize(*(_DWORD **)(this + 12)) /*0x764fd2*/
      || *(_DWORD *)(this + 4 * a2 + 52) != Conflict::GetOwnerHouse(*(_DWORD **)(this + 12));
}



// ==== 0x00764FF0  ObjectClass::method_764FF0  this=ObjectClass  sig=csp ====
int __thiscall sub_764FF0(ObjectClass *this, int a2)
{
  return *((_DWORD *)&this->attachedTag + a2); /*0x764ff8*/
}



// ==== 0x00765000  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_765000(int this, void *a2)
{
  char **v3; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-10Ch]
  void *v6; // [esp+10h] [ebp-F8h] BYREF
  void *v7; // [esp+14h] [ebp-F4h] BYREF
  void *v8[4]; // [esp+18h] [ebp-F0h] BYREF
  _DWORD v9[3]; // [esp+28h] [ebp-E0h] BYREF
  _DWORD v10[6]; // [esp+34h] [ebp-D4h] BYREF
  char v11; // [esp+4Ch] [ebp-BCh]
  int v12; // [esp+50h] [ebp-B8h]
  int v13; // [esp+54h] [ebp-B4h]
  _DWORD v14[22]; // [esp+58h] [ebp-B0h] BYREF
  _DWORD v15[22]; // [esp+B0h] [ebp-58h] BYREF

  *(_DWORD *)(this + 48) = WDTObject::GetSize(*(_DWORD **)(this + 12)); /*0x76501b*/
  *(_DWORD *)(this + 4 * (_DWORD)a2 + 52) = Conflict::GetOwnerHouse(*(_DWORD **)(this + 12)); /*0x76502c*/
  v8[1] = 0; /*0x765030*/
  v8[2] = 0; /*0x765034*/
  GenericNode::Constructor(v9); /*0x765038*/
  GenericNode::Constructor(v10); /*0x765041*/
  LinkedList::Prepend(v9, (int)v10); /*0x765057*/
  v8[3] = &List<INIClass::INISection *>::`vftable'; /*0x765060*/
  memset(&v10[3], 0, 12); /*0x765068*/
  v11 = 0; /*0x765074*/
  v12 = 0; /*0x765078*/
  v13 = 0; /*0x76507c*/
  v8[0] = &INIClass::`vftable'; /*0x765080*/
  BufferIOFile::Init(v14); /*0x765088*/
  CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x765098*/
  if ( !File::IsReady(v14, 0) ) /*0x7650a2*/
  {
    FileClass::Close(v14); /*0x7650af*/
    CCFileClass::Close(v14); /*0x7650b8*/
    CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x7650c8*/
  }
  FileStraw::Open(v8, (int)v14, 0); /*0x7650d7*/
  CCFileClass::Close(v14); /*0x7650e0*/
  v14[0] = &off_7E1668; /*0x7650e9*/
  BufferIOFileClass::Dtor(v14); /*0x7650f1*/
  RegionStringWOL = GetRegionStringWOL(a2); /*0x765101*/
  v3 = String::Assign((char **)&v6, g_INI_Key_LastDay); /*0x76510c*/
  String::Concat((const char **)v3, (char **)&v7, RegionStringWOL); /*0x765113*/
  DeleteAndZero(&v6); /*0x76511c*/
  String::Assign((char **)&v6, g_INI_Key_CampaignID); /*0x76512a*/
  INIClass::SetIntFormat((char *)v8, (char **)(this + 72), (char **)&v6, *(_DWORD *)(this + 48), 0); /*0x765141*/
  DeleteAndZero(&v6); /*0x76514a*/
  INIClass::SetIntFormat((char *)v8, (char **)(this + 72), (char **)&v7, *(_DWORD *)(this + 4 * (_DWORD)a2 + 52), 0); /*0x76515f*/
  BufferIOFile::Init(v15); /*0x76516b*/
  CCFileClass::Reopen(v15, g_Str_File_WDTHist_ini, 2); /*0x76517e*/
  INIClass::SaveToPipe(v8, (int)v15); /*0x76518f*/
  v15[0] = &off_7E1668; /*0x76519b*/
  BufferIOFileClass::Dtor(v15); /*0x7651a6*/
  DeleteAndZero(&v7); /*0x7651af*/
  return HashTable::DestroyHashTableINIClass(v8); /*0x7651bd*/
}



// ==== 0x007651D0  ObjectClass::method_7651D0  this=ObjectClass  sig=csp ====
char *__thiscall sub_7651D0(ObjectClass *this)
{
  char **v2; // edi
  int i; // esi
  char **v4; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-108h]
  ObjectClass v7; // [esp+Ch] [ebp-F8h] BYREF

  v7.? = 0; /*0x7651e1*/
  v7.? = 0; /*0x7651e5*/
  GenericNode::Constructor((GenericNode *)&v7.?); /*0x7651e9*/
  GenericNode::Constructor((GenericNode *)&v7.occupant); /*0x7651f2*/
  LinkedList::Prepend((LinkedList *)&v7.?, (int)&v7.occupant); /*0x765208*/
  v7.? = (int)&List<INIClass::INISection *>::`vftable'; /*0x765211*/
  memset(&v7.nextObject, 0, 13); /*0x765219*/
  v7.ambientSoundController[1] = 0; /*0x765229*/
  v7.ambientSoundController[2] = 0; /*0x76522d*/
  v7.? = &INIClass::`vftable'; /*0x765231*/
  BufferIOFile::Init((BufferIOFile *)&v7.ambientSoundController[3]); /*0x765239*/
  CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765249*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v7.ambientSoundController[3], 0) ) /*0x765253*/
  {
    FileClass::Close((RawFileClass *)&v7.ambientSoundController[3]); /*0x765260*/
    CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765269*/
    CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765279*/
  }
  FileStraw::Open((FileStraw *)&v7.?, (int)&v7.ambientSoundController[3], 0); /*0x765288*/
  CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765291*/
  v7.ambientSoundController[3] = (int)&off_7E1668; /*0x76529a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x7652a2*/
  String::Assign((String *)&v7, g_INI_Key_CampaignID); /*0x7652b0*/
  v2 = (char **)&this->ambientSoundController[3]; /*0x7652ba*/
  INIClass::SetIntFormat((char *)&v7.?, (char **)&this->ambientSoundController[3], (char **)&v7, 0, 0); /*0x7652c4*/
  DeleteAndZero(&v7); /*0x7652cd*/
  for ( i = 0; i < 4; ++i ) /*0x7652d2*/
  {
    RegionStringWOL = GetRegionStringWOL((ObjectClass *)i); /*0x7652db*/
    v4 = String::Assign((String *)&v7.?, g_INI_Key_LastDay); /*0x7652ea*/
    String::Concat((String *)v4, (char **)&v7, RegionStringWOL); /*0x7652f1*/
    DeleteAndZero((ObjectClass *)&v7.?); /*0x7652fa*/
    INIClass::SetIntFormat((char *)&v7.?, v2, (char **)&v7, 0, 0); /*0x76530b*/
    DeleteAndZero(&v7); /*0x765314*/
  }
  BufferIOFile::Init((BufferIOFile *)&v7.location[1]); /*0x765326*/
  CCFileClass::Reopen((CDFileClass *)&v7.location[1], g_Str_File_WDTHist_ini, (CHAR *)2); /*0x765339*/
  INIClass::SaveToPipe((INIClass *)&v7.?, (int)&v7.location[1]); /*0x76534a*/
  v7.location[1] = (int)&off_7E1668; /*0x765356*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.location[1]); /*0x765361*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v7.?); /*0x76536f*/
}



// ==== 0x00765380  ObjectClass::FindWDTTerritoryClass_Find  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_765380(char *this, _DWORD *a2, int a3)
{
  int v4; // edx
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  char *v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v6 = this + 24; /*0x765387*/
  v7 = 0; /*0x76538f*/
  v5 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x765397*/
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
  *a2 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x7653f5*/
  return a2; /*0x7653ee*/
}



// ==== 0x00765410  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
char *__thiscall sub_765410(int this, char *a2)
{
  char *result; // eax
  void *v4; // [esp+4h] [ebp-F4h] BYREF
  void *v5[4]; // [esp+8h] [ebp-F0h] BYREF
  _DWORD v6[3]; // [esp+18h] [ebp-E0h] BYREF
  _DWORD v7[6]; // [esp+24h] [ebp-D4h] BYREF
  char v8; // [esp+3Ch] [ebp-BCh]
  int v9; // [esp+40h] [ebp-B8h]
  int v10; // [esp+44h] [ebp-B4h]
  _DWORD v11[22]; // [esp+48h] [ebp-B0h] BYREF
  _DWORD v12[22]; // [esp+A0h] [ebp-58h] BYREF

  result = a2; /*0x765410*/
  if ( *(char **)(this + 68) != a2 ) /*0x765420*/
  {
    *(_DWORD *)(this + 68) = a2; /*0x76542d*/
    v5[1] = 0; /*0x765430*/
    v5[2] = 0; /*0x765434*/
    GenericNode::Constructor(v6); /*0x765438*/
    GenericNode::Constructor(v7); /*0x765441*/
    LinkedList::Prepend(v6, (int)v7); /*0x765457*/
    v5[3] = &List<INIClass::INISection *>::`vftable'; /*0x765460*/
    memset(&v7[3], 0, 12); /*0x765468*/
    v8 = 0; /*0x765474*/
    v9 = 0; /*0x765478*/
    v10 = 0; /*0x76547c*/
    v5[0] = &INIClass::`vftable'; /*0x765480*/
    BufferIOFile::Init(v11); /*0x765488*/
    CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x765498*/
    if ( !File::IsReady(v11, 0) ) /*0x7654a2*/
    {
      FileClass::Close(v11); /*0x7654af*/
      CCFileClass::Close(v11); /*0x7654b8*/
      CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x7654c8*/
    }
    FileStraw::Open(v5, (int)v11, 0); /*0x7654d7*/
    CCFileClass::Close(v11); /*0x7654e0*/
    v11[0] = &off_7E1668; /*0x7654e9*/
    BufferIOFileClass::Dtor(v11); /*0x7654f1*/
    String::Assign((char **)&v4, aPlayerfaction); /*0x7654ff*/
    INIClass::SetIntFormat((char *)v5, (char **)(this + 72), (char **)&v4, *(_DWORD *)(this + 68), 0); /*0x765516*/
    DeleteAndZero(&v4); /*0x76551f*/
    BufferIOFile::Init(v12); /*0x76552b*/
    CCFileClass::Reopen(v12, g_Str_File_WDTHist_ini, 2); /*0x76553e*/
    INIClass::SaveToPipe(v5, (int)v12); /*0x76554f*/
    v12[0] = &off_7E1668; /*0x76555b*/
    BufferIOFileClass::Dtor(v12); /*0x765566*/
    return HashTable::DestroyHashTableINIClass(v5); /*0x76556f*/
  }
  return result; /*0x765575*/
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
void **__thiscall Campaign_WorldDominationTour::QueryInterface(Campaign_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *this = (Campaign_WorldDominationTour)&WorldDominationTour::Campaign::`vftable'; /*0x765606*/
  DeleteAndZero((ObjectClass *)(this + 18)); /*0x76560c*/
  v3 = (void (__thiscall ***)(_DWORD, int))this->q01C; /*0x765611*/
  this->q018 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765614*/
  if ( v3 && this->q025 ) /*0x76561f*/
  {
    (**v3)(v3, 3); /*0x76562e*/
    this->q01C = 0; /*0x765630*/
  }
  this->q025 = 0; /*0x76563a*/
  this->q008 = 0; /*0x76563e*/
  this->q004 = &rc_ptr<WorldDominationTour::History>::`vftable'; /*0x765645*/
  ComPtr::Release((ComPtr *)(this + 4)); /*0x76564b*/
  this->q008 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x765653*/
  ComPtr::Release((ComPtr *)(this + 2)); /*0x765659*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x765660*/
  if ( (a2 & 1) != 0 ) /*0x76566a*/
    __3_YAXPAX_Z(this); /*0x76566d*/
  return (void **)this; /*0x765677*/
}



// ==== 0x00765680  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::queryProperty  this=DynamicVector  sig=csp ====
int __thiscall COMClass::queryProperty(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765686*/
  this->m_10 = 0; /*0x765689*/
  if ( v2 && BYTE1(this->m_C) ) /*0x765690*/
  {
    result = (**v2)(v2, 3); /*0x76569d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76569f*/
  }
  BYTE1(this->m_C) = 0; /*0x7656a2*/
  this->m_8 = 0; /*0x7656a5*/
  return result; /*0x7656a8*/
}



// ==== 0x007656B0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::setProperty  this=DynamicVector  sig=csp ====
unsigned int __thiscall COMClass::setProperty(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7656b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x7656c5*/
  else
    return 0; /*0x7656b7*/
}



// ==== 0x007656D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Seek(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x7656dd*/
  ComPtr::Constructor((ComPtr *)a2); /*0x7656e2*/
  *a2 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7656e7*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x7656f3*/
  return a2; /*0x7656fa*/
}



// ==== 0x00765700  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Campaign_WorldDominationTour_24::AddRef(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76570d*/
}



// ==== 0x00765710  Campaign_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor(Campaign_WorldDominationTour *this, char a2)
{
  *this = (Campaign_WorldDominationTour)&rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x765713*/
  ComPtr::Release((ComPtr *)this); /*0x765719*/
  if ( (a2 & 1) != 0 ) /*0x765723*/
    __3_YAXPAX_Z(this); /*0x765726*/
  return this; /*0x765730*/
}



// ==== 0x00765740  Campaign_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor_0(Campaign_WorldDominationTour *this, char a2)
{
  *this = (Campaign_WorldDominationTour)&rc_ptr<WorldDominationTour::History>::`vftable'; /*0x765743*/
  ComPtr::Release((ComPtr *)this); /*0x765749*/
  if ( (a2 & 1) != 0 ) /*0x765753*/
    __3_YAXPAX_Z(this); /*0x765756*/
  return this; /*0x765760*/
}



// ==== 0x00765770  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Constructor_1  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::Constructor_1(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x765779*/
  if ( (a2 & 1) != 0 ) /*0x76577f*/
    __3_YAXPAX_Z(this); /*0x765782*/
  return this->__pad_0; /*0x76578c*/
}



// ==== 0x00765790  COMClass::invokeMethod  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::invokeMethod(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x765793*/
  ComPtr::Release((ComPtr *)this); /*0x765799*/
  if ( (a2 & 1) != 0 ) /*0x7657a3*/
    __3_YAXPAX_Z(this); /*0x7657a6*/
  return this->__pad_0; /*0x7657b0*/
}



// ==== 0x007657C0  COMClass::getTypeInfo  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::getTypeInfo(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x7657c3*/
  ComPtr::Release((ComPtr *)this); /*0x7657c9*/
  if ( (a2 & 1) != 0 ) /*0x7657d3*/
    __3_YAXPAX_Z(this); /*0x7657d6*/
  return this->__pad_0; /*0x7657e0*/
}



// ==== 0x007657F0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16::AddRef(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x7657f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7657ff*/
  {
    v3 = 0; /*0x765801*/
    if ( m_8 <= 0 ) /*0x765805*/
      return 1; /*0x76582b*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x76580d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x765810*/
    {
      ++v3; /*0x76581b*/
      v4 += 2; /*0x76581f*/
      if ( v3 >= m_8 ) /*0x765824*/
        return 1; /*0x765824*/
    }
  }
  return 0; /*0x765826*/
}



// ==== 0x00765840  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Campaign_WorldDominationTour_16::Release(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x765843*/
  if ( !a2 ) /*0x76584d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76594d*/
    return 1; /*0x765953*/
  }
  LOBYTE(this->m_C) = 0; /*0x765857*/
  if ( a3 ) /*0x76585d*/
  {
    *a3 = a2; /*0x7658a3*/
    v6 = (ComPtr *)(a3 + 1); /*0x7658a5*/
    if ( a2 - 1 >= 0 ) /*0x7658b1*/
    {
      v9 = a2; /*0x7658b3*/
      do /*0x7658c7*/
      {
        ComPtr::Constructor(v6); /*0x7658b8*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x7658bd*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x7658c3*/
        --v9; /*0x7658c6*/
      }
      while ( v9 ); /*0x7658c7*/
      v6 = (ComPtr *)(a3 + 1); /*0x7658c9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765867*/
    if ( !v5 ) /*0x765871*/
    {
      v8 = 0; /*0x76589f*/
      goto LABEL_14; /*0x7658a1*/
    }
    *v5 = a2; /*0x765873*/
    v6 = (ComPtr *)(v5 + 1); /*0x765875*/
    v13 = (ComPtr *)(v5 + 1); /*0x76587b*/
    if ( a2 - 1 >= 0 ) /*0x765881*/
    {
      v7 = a2; /*0x765883*/
      do /*0x765897*/
      {
        ComPtr::Constructor(v6); /*0x765888*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76588d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x765893*/
        --v7; /*0x765896*/
      }
      while ( v7 ); /*0x765897*/
      v6 = v13; /*0x765899*/
    }
  }
  v8 = v6; /*0x7658cd*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x7658cf*/
  if ( !v8 ) /*0x7658d5*/
    return 0; /*0x7658da*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x7658e1*/
  {
    if ( a2 >= this->m_8 ) /*0x7658ed*/
      m_8 = this->m_8; /*0x7658ef*/
    for ( i = 0; i < m_8; ++i ) /*0x7658f5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x765902*/
    if ( BYTE1(this->m_C) ) /*0x76590c*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765913*/
      if ( v12 ) /*0x765918*/
        (**v12)(v12, 3); /*0x76591e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x765920*/
    }
    m_8 = a2; /*0x765927*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x765936*/
  this->m_8 = m_8; /*0x765939*/
  BYTE1(this->m_C) = a3 == 0; /*0x76593c*/
  return 1; /*0x7658d7*/
}



// ==== 0x00765960  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16::ddtor(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765966*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76596d*/
  {
    result = (**v2)(v2, 3); /*0x76597a*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76597c*/
  }
  BYTE1(this->m_C) = 0; /*0x76597f*/
  this->m_8 = 0; /*0x765982*/
  return result; /*0x765985*/
}



// ==== 0x00765990  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Campaign_WorldDominationTour_16::Read(_VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x765990*/
    return 0; /*0x765998*/
  m_8 = this->m_8; /*0x76599e*/
  result = 0; /*0x7659a1*/
  if ( m_8 <= 0 ) /*0x7659a5*/
    return -1; /*0x7659c0*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x7659ae*/
  {
    if ( ++result >= m_8 ) /*0x7659be*/
      return -1; /*0x7659be*/
  }
  return result; /*0x76599a*/
}



// ==== 0x007659D0  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Campaign_WorldDominationTour_16::Write(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7659d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x7659e5*/
  else
    return 0; /*0x7659d7*/
}



// ==== 0x007659F0  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::registerObject  this=DynamicVector  sig=csp ====
char __thiscall COMClass::registerObject(
        _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  COMClass *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x7659f3*/
  if ( a2 ) /*0x7659fd*/
  {
    LOBYTE(this->m_C) = 0; /*0x765a07*/
    if ( a3 ) /*0x765a0d*/
    {
      *a3 = a2; /*0x765a51*/
      v8 = (ComPtr *)(a3 + 1); /*0x765a53*/
      if ( a2 - 1 >= 0 ) /*0x765a5f*/
      {
        v9 = a2; /*0x765a61*/
        do /*0x765a75*/
        {
          ComPtr::Constructor(v8); /*0x765a66*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765a6b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x765a71*/
          --v9; /*0x765a74*/
        }
        while ( v9 ); /*0x765a75*/
        v8 = (ComPtr *)(a3 + 1); /*0x765a77*/
      }
      v6 = v8; /*0x765a7b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765a17*/
      if ( v5 ) /*0x765a21*/
      {
        *v5 = a2; /*0x765a23*/
        v6 = (ComPtr *)(v5 + 1); /*0x765a25*/
        v7 = (COMClass *)(v5 + 1); /*0x765a2b*/
        if ( a2 - 1 >= 0 ) /*0x765a2f*/
        {
          v14 = a2; /*0x765a32*/
          do /*0x765a49*/
          {
            COMClass::releaseInterface(v7); /*0x765a38*/
            v7 = (COMClass *)((char *)v7 + 8); /*0x765a41*/
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
    LOBYTE(this->m_C) = 1; /*0x765a7f*/
    if ( !v6 ) /*0x765a83*/
      return 0; /*0x765b06*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x765a85*/
    {
      if ( a2 >= this->m_8 ) /*0x765a91*/
        m_8 = this->m_8; /*0x765a93*/
      for ( i = 0; i < m_8; ++i ) /*0x765a99*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x765aa6*/
      if ( BYTE1(this->m_C) ) /*0x765ab0*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765ab7*/
        if ( v11 ) /*0x765abc*/
          (**v11)(v11, 3); /*0x765ac2*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x765ac4*/
      }
      m_8 = a2; /*0x765acb*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x765ada*/
    this->m_8 = m_8; /*0x765add*/
    BYTE1(this->m_C) = a3 == 0; /*0x765ae0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x765ae9*/
  }
  v12 = this->m_8; /*0x765aec*/
  if ( v12 < this->m_10 ) /*0x765af4*/
    this->m_10 = v12; /*0x765af6*/
  return 1; /*0x765af9*/
}



// ==== 0x00765B10  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::unregisterObject  this=DynamicVector  sig=csp ====
int __thiscall COMClass::unregisterObject(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x765b10*/
  result = 0; /*0x765b13*/
  if ( m_10 <= 0 ) /*0x765b18*/
    return -1; /*0x765b33*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x765b21*/
  {
    if ( ++result >= m_10 ) /*0x765b31*/
      return -1; /*0x765b31*/
  }
  return result; /*0x765b36*/
}



// ==== 0x00765B40  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24::Release(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  ++this->q008; /*0x765b42*/
  return this->__pad_0; /*0x765b45*/
}



// ==== 0x00765B50  _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_24_::ddtor(
        _VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this)
{
  --this->q008; /*0x765b52*/
  return this->__pad_0; /*0x765b55*/
}



// ==== 0x00765B60  _VectorClass_V_rc_ptr_VConflict_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Campaign_WorldDominationTour_16::QueryInterface(
        _VectorClass_V_rc_ptr_VConflict_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765b63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765b66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x765b70*/
  {
    (**v3)(v3, 3); /*0x765b7f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x765b81*/
  }
  BYTE1(this->m_C) = 0; /*0x765b8c*/
  this->m_8 = 0; /*0x765b92*/
  if ( (a2 & 1) != 0 ) /*0x765b99*/
    __3_YAXPAX_Z(this); /*0x765b9c*/
  return this->__pad_0; /*0x765ba6*/
}



// ==== 0x00765BB0  COMClass::createInstance  this=COMClass  sig=csp ====
char *__thiscall COMClass::createInstance(COMClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x765bbb*/
  {
    v3 = *((_DWORD *)this - 1); /*0x765bbd*/
    v4 = (char *)this - 4; /*0x765bc1*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x765bc4*/
    v6 = v3 - 1; /*0x765bc7*/
    if ( v6 >= 0 ) /*0x765bc8*/
    {
      v7 = v6 + 1; /*0x765bcb*/
      do /*0x765bdf*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x765bce*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765bd3*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765bfa*/
    ComPtr::Release((ComPtr *)this); /*0x765c00*/
    if ( (a2 & 1) != 0 ) /*0x765c08*/
      __3_YAXPAX_Z(this); /*0x765c0b*/
    return this->__pad_0; /*0x765c13*/
  }
}



// ==== 0x00765C20  _DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour::getInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall COMClass::getInterface(_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x765c23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765c26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x765c30*/
  {
    (**v3)(v3, 3); /*0x765c3f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x765c41*/
  }
  BYTE1(this->m_C) = 0; /*0x765c4c*/
  this->m_8 = 0; /*0x765c52*/
  if ( (a2 & 1) != 0 ) /*0x765c59*/
    __3_YAXPAX_Z(this); /*0x765c5c*/
  return this->__pad_0; /*0x765c66*/
}



// ==== 0x00765C70  COMClass::releaseInterface  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::releaseInterface(COMClass *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x765c73*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765c78*/
  return this->__pad_0; /*0x765c80*/
}



// ==== 0x00765C90  ObjectClass::Team_Create_765C90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Create_765C90(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = a2; /*0x765c93*/
  this->? = 0; /*0x765c9c*/
  this->? = (void *)a2; /*0x765ca3*/
  LOBYTE(this->?) = 1; /*0x765ca6*/
  BYTE1(this->?) = 0; /*0x765caa*/
  this->AbstractClass = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable'; /*0x765cae*/
  if ( !a2 ) /*0x765cb5*/
    return &this->AbstractClass; /*0x765cb5*/
  if ( !a3 ) /*0x765cc1*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765cfb*/
    if ( v7 ) /*0x765d05*/
    {
      *v7 = a2; /*0x765d07*/
      v8 = v7 + 1; /*0x765d09*/
      v9 = (ComPtr *)(v7 + 1); /*0x765d0f*/
      if ( a2 - 1 >= 0 ) /*0x765d13*/
      {
        do /*0x765d29*/
        {
          ComPtr::Constructor(v9); /*0x765d1a*/
          *(_DWORD *)v9->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765d1f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x765d25*/
          --v3; /*0x765d28*/
        }
        while ( v3 ); /*0x765d29*/
        this->? = v8; /*0x765d2c*/
        BYTE1(this->?) = 1; /*0x765d2f*/
        return &this->AbstractClass; /*0x765d38*/
      }
    }
    else
    {
      v8 = 0; /*0x765d3b*/
    }
    this->? = v8; /*0x765d3d*/
    BYTE1(this->?) = 1; /*0x765d40*/
    return &this->AbstractClass; /*0x765d45*/
  }
  *a3 = a2; /*0x765cc3*/
  v5 = (ComPtr *)(a3 + 1); /*0x765ccb*/
  if ( a2 - 1 >= 0 ) /*0x765ccf*/
  {
    do /*0x765ce5*/
    {
      ComPtr::Constructor(v5); /*0x765cd6*/
      *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765cdb*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x765ce1*/
      --v3; /*0x765ce4*/
    }
    while ( v3 ); /*0x765ce5*/
  }
  this->? = a3 + 1; /*0x765ce8*/
  return &this->AbstractClass; /*0x765ce7*/
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
ComPtr *__fastcall Team_Create_765F60(ComPtr *a1, int a2)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x10u); /*0x765f69*/
  v5 = v4; /*0x765f6e*/
  if ( v4 ) /*0x765f75*/
  {
    v6 = (_DWORD *)(v4 + 8); /*0x765f78*/
    *(_DWORD *)(v4 + 4) = 0; /*0x765f7d*/
    *(_DWORD *)v4 = &ReferenceCounted::`vftable'; /*0x765f84*/
    ComPtr::Constructor((ComPtr *)(v4 + 8)); /*0x765f8a*/
    *v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x765f8f*/
    ComPtr::Set((ComPtr *)(v5 + 8), *(_DWORD *)(a2 + 4)); /*0x765f9b*/
    *(_DWORD *)v5 = &WorldDominationTour::Conflict::`vftable'; /*0x765fa0*/
  }
  else
  {
    v5 = 0; /*0x765fa9*/
  }
  ComPtr::Constructor(a1); /*0x765fad*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x765fb4*/
  ComPtr::Set(a1, v5); /*0x765fbc*/
  return a1; /*0x765fc3*/
}



// ==== 0x00766060  ObjectClass::FindWDTTerritoryClass_Find_Find  this=ObjectClass  sig=csp ====
int __thiscall FindWDTTerritoryClass_Find_Find(ObjectClass *this)
{
  _DWORD *vtable3; // eax

  vtable3 = this->?; /*0x766060*/
  if ( vtable3 ) /*0x766065*/
    return vtable3[2]; /*0x766067*/
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
  stru_B72760 = (int)&DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x76608d*/
  dword_B72774 = 10; /*0x766097*/
  dword_B72770 = 0; /*0x7660a1*/
  return atexit(sub_7660B0); /*0x7660ac*/
}



// ==== 0x007660B0  sub_7660B0  this=-  sig=ida-proto ====
void __cdecl sub_7660B0()
{
  stru_B72760 = (int)&VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x7660b9*/
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
  Conflict_WorldDominationTour_12_::ddtor(&stru_B72760); /*0x766104*/
  v26 = 0; /*0x766109*/
  v25 = v0; /*0x76610b*/
  String::Assign(&v25, aWdtTechlevel); /*0x766113*/
  v1 = System_Init_766880(sub_7667F0, (char)v25, v26); /*0x76612f*/
  ComPtr::Constructor(&v27); /*0x766131*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76613f*/
  ComPtr::Set(&v27, *(_DWORD *)(v1 + 4)); /*0x766147*/
  if ( dword_B72770 < dword_B72768 /*0x766183*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72768 + dword_B72774,
         0) )
  {
    v2 = dword_B72770++; /*0x766196*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v2), v28); /*0x7661a7*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7661b0*/
  ComPtr::Release(&v27); /*0x7661b4*/
  v29[0] = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x7661bd*/
  ComPtr::Release(v29); /*0x7661c5*/
  v26 = 1; /*0x7661ca*/
  v25 = v3; /*0x7661cc*/
  String::Assign(&v25, aWdtBases); /*0x7661d4*/
  v24 = 0; /*0x7661d9*/
  v23 = v4; /*0x7661db*/
  String::Assign(&v23, aWdtNobases); /*0x7661e3*/
  v5 = ConstructorWDTFlagOption(v29, 16, v23, v24, v25, v26); /*0x7661fa*/
  ComPtr::Constructor(&v27); /*0x7661fc*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766201*/
  ComPtr::Set(&v27, v5[1]); /*0x76620d*/
  if ( dword_B72770 < dword_B72768 /*0x766249*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v6 = dword_B72770++; /*0x76625c*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v6), v28); /*0x76626d*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766276*/
  ComPtr::Release(&v27); /*0x76627a*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766283*/
  ComPtr::Release(v29); /*0x76628b*/
  v26 = 0; /*0x766290*/
  v25 = v7; /*0x766292*/
  String::Assign(&v25, aWdtShortgame); /*0x76629a*/
  v24 = 1; /*0x76629f*/
  v23 = v8; /*0x7662a1*/
  String::Assign(&v23, aWdtNotshortgam); /*0x7662a9*/
  v9 = ConstructorWDTFlagOption(v29, 1024, v23, v24, v25, v26); /*0x7662c0*/
  ComPtr::Constructor(&v27); /*0x7662c2*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7662c7*/
  ComPtr::Set(&v27, v9[1]); /*0x7662d3*/
  if ( dword_B72770 < dword_B72768 /*0x76630f*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v10 = dword_B72770++; /*0x766322*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v10), v28); /*0x766333*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76633c*/
  ComPtr::Release(&v27); /*0x766340*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766349*/
  ComPtr::Release(v29); /*0x766351*/
  v26 = 0; /*0x766356*/
  v25 = v11; /*0x766358*/
  String::Assign(&v25, aWdtUnitcount); /*0x766360*/
  v12 = System_Init_766880(sub_7667E0, (char)v25, v26); /*0x76637c*/
  ComPtr::Constructor(&v27); /*0x76637e*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766383*/
  ComPtr::Set(&v27, *(_DWORD *)(v12 + 4)); /*0x76638f*/
  if ( dword_B72770 < dword_B72768 /*0x7663cb*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v13 = dword_B72770++; /*0x7663de*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v13), v28); /*0x7663ef*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7663f8*/
  ComPtr::Release(&v27); /*0x7663fc*/
  v29[0] = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x766405*/
  ComPtr::Release(v29); /*0x76640d*/
  v26 = 0; /*0x766412*/
  v25 = v14; /*0x766414*/
  String::Assign(&v25, aWdtRedeployabl); /*0x76641c*/
  v24 = 1; /*0x766421*/
  v23 = v15; /*0x766423*/
  String::Assign(&v23, aWdtNoredeploym); /*0x76642b*/
  v16 = ConstructorWDTFlagOption(v29, 32, v23, v24, v25, v26); /*0x766442*/
  ComPtr::Constructor(&v27); /*0x766444*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766449*/
  ComPtr::Set(&v27, v16[1]); /*0x766455*/
  if ( dword_B72770 < dword_B72768 /*0x766491*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v17 = dword_B72770++; /*0x7664a4*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v17), v28); /*0x7664b5*/
  }
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7664be*/
  ComPtr::Release(&v27); /*0x7664c2*/
  v29[0] = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x7664cb*/
  ComPtr::Release(v29); /*0x7664d3*/
  v26 = 1; /*0x7664d8*/
  v25 = v18; /*0x7664da*/
  String::Assign(&v25, aWdtCrates); /*0x7664e2*/
  v24 = 1; /*0x7664e7*/
  v23 = v19; /*0x7664e9*/
  String::Assign(&v23, aWdtNocrates); /*0x7664f1*/
  v20 = ConstructorWDTFlagOption(v29, 256, v23, v24, v25, v26); /*0x766508*/
  ComPtr::Constructor(&v27); /*0x76650a*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76650f*/
  ComPtr::Set(&v27, v20[1]); /*0x76651b*/
  System_Init_766EE0(&v27); /*0x76652a*/
  v27 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766533*/
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
  v17 = &stru_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    v4 = v17[1] + 8 * v18; /*0x766634*/
    ComPtr::Constructor(&v14); /*0x766637*/
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76663c*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76669a*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7666f0*/
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
    v14 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76674f*/
    ComPtr::Release(&v14); /*0x766753*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x76677f*/
  DeleteAndZero::Alt(&v11); /*0x766787*/
  return a2; /*0x76678e*/
}



// ==== 0x007667A0  Conflict_WorldDominationTour::QueryInterface  this=Conflict@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour::QueryInterface(Conflict_WorldDominationTour *this, char a2)
{
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x7667a3*/
  *this = (Conflict_WorldDominationTour)&WorldDominationTour::Conflict::`vftable'; /*0x7667a6*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x7667ac*/
  ComPtr::Release(v3); /*0x7667b2*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7667b9*/
  if ( (a2 & 1) != 0 ) /*0x7667c3*/
    __3_YAXPAX_Z(this); /*0x7667c6*/
  return this; /*0x7667d0*/
}



// ==== 0x007667E0  ObjectClass::method_7667E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667E0(ObjectClass *this)
{
  return BYTE2(this->?); /*0x7667e5*/
}



// ==== 0x007667F0  ObjectClass::method_7667F0  this=ObjectClass  sig=csp ====
int __thiscall sub_7667F0(ObjectClass *this)
{
  return HIBYTE(this->?); /*0x7667f5*/
}



// ==== 0x00766800  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ReleaseBuffer  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12_::ReleaseBuffer(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766806*/
  this->m_10 = 0; /*0x766809*/
  if ( v2 && BYTE1(this->m_C) ) /*0x766810*/
  {
    result = (**v2)(v2, 3); /*0x76681d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76681f*/
  }
  BYTE1(this->m_C) = 0; /*0x766822*/
  this->m_8 = 0; /*0x766825*/
  return result; /*0x766828*/
}



// ==== 0x00766830  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12::PointerToIndex(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x766830*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/
}



// ==== 0x00766850  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Seek(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x76685d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x766862*/
  *a2 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766867*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x766873*/
  return a2; /*0x76687a*/
}



// ==== 0x00766880  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__fastcall System_Init_766880(rc_ptr *this, int a2, int a3, void *a4, int a5)
{
  int v7; // ecx
  void *v8; // esi
  void *inited; // esi
  String v11; // [esp-8h] [ebp-14h] BYREF

  v8 = (void *)__2_YAPAXI_Z(0x18u); /*0x76688e*/
  if ( v8 ) /*0x766895*/
  {
    *(_DWORD *)&v11.m_3[1] = a5; /*0x76689f*/
    *(_DWORD *)v11.__pad_0 = v7; /*0x7668a0*/
    String::AssignFromPtr(&v11, (const char **)&a4); /*0x7668a4*/
    inited = System_Init_766A10(v8, a2, a3, *(void **)v11.__pad_0, *(int *)&v11.m_3[1]); /*0x7668b6*/
  }
  else
  {
    inited = 0; /*0x7668ba*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7668be*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x7668c5*/
  ComPtr::Set((ComPtr *)this, (int)inited); /*0x7668cc*/
  DeleteAndZero((ObjectClass *)&a4); /*0x7668d5*/
  return this; /*0x7668dc*/
}



// ==== 0x007668F0  rc_ptr::System_Init_7668F0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_7668F0(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7668f0*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766900  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766900(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766900*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766910  rc_ptr::System_Init  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766910(rc_ptr *this)
{
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x766910*/
  return ComPtr::Release((ComPtr *)this);
}



// ==== 0x00766920  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Conflict_WorldDominationTour_26::AddRef(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76692d*/
}



// ==== 0x00766960  Conflict_WorldDominationTour::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor(Conflict_WorldDominationTour *this, char a2)
{
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::ValueGameOption<unsigned char>>::`vftable'; /*0x766963*/
  ComPtr::Release((ComPtr *)this); /*0x766969*/
  if ( (a2 & 1) != 0 ) /*0x766973*/
    __3_YAXPAX_Z(this); /*0x766976*/
  return this; /*0x766980*/
}



// ==== 0x00766990  Conflict_WorldDominationTour::Constructor_0  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_0(Conflict_WorldDominationTour *this, char a2)
{
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x766993*/
  ComPtr::Release((ComPtr *)this); /*0x766999*/
  if ( (a2 & 1) != 0 ) /*0x7669a3*/
    __3_YAXPAX_Z(this); /*0x7669a6*/
  return this; /*0x7669b0*/
}



// ==== 0x007669C0  COMClass::connectPoint  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::connectPoint(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x7669c3*/
  ComPtr::Release((ComPtr *)this); /*0x7669c9*/
  if ( (a2 & 1) != 0 ) /*0x7669d3*/
    __3_YAXPAX_Z(this); /*0x7669d6*/
  return this->__pad_0; /*0x7669e0*/
}



// ==== 0x007669F0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::disconnectPoint  this=VectorCursor  sig=csp ====
_DWORD *__thiscall COMClass::disconnectPoint(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    __3_YAXPAX_Z(this); /*0x766a02*/
  return this->__pad_0; /*0x766a0c*/
}



// ==== 0x00766A10  GameOption@WorldDominationTour::System_Init_766A10  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall sub_766A10(void *this, int a2, int a3, void *a4, int a5)
{
  int v6; // ecx

  v6 = a5; /*0x766a1b*/
  this->q008 = a2; /*0x766a1f*/
  this->q00C = v6; /*0x766a26*/
  this->q004 = 0; /*0x766a2d*/
  *(_DWORD *)this = &WorldDominationTour::GameOption::`vftable'; /*0x766a34*/
  this->q004 = a3; /*0x766a3a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x766a3d*/
  *(_DWORD *)this = &WorldDominationTour::ValueGameOption<unsigned char>::`vftable'; /*0x766a46*/
  DeleteAndZero(&a4); /*0x766a4c*/
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
int __thiscall COMClass::enumConnections(_ValueGameOption_E_WorldDominationTour *this, int a2)
{
  bool v3; // zf
  int result; // eax

  v3 = Network_Connect_767310(a2) == 0; /*0x766a8d*/
  result = 2; /*0x766a8f*/
  if ( v3 ) /*0x766a94*/
    return *(_DWORD *)&this->__pad_7[5]; /*0x766a96*/
  return result; /*0x766a99*/
}



// ==== 0x00766AA0  _ValueGameOption_E_WorldDominationTour::adviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
wchar_t **__thiscall COMClass::adviseConnection(
        _ValueGameOption_E_WorldDominationTour *this,
        wchar_t **a2,
        int a3,
        const wchar_t **a4)
{
  int v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t **v9; // eax
  wchar_t *v11; // [esp-4h] [ebp-9Ch]
  wchar_t *Format; // [esp+4h] [ebp-94h] BYREF
  DeleteAndZero v13; // [esp+8h] [ebp-90h] BYREF
  DeleteAndZero v14[11]; // [esp+14h] [ebp-84h] BYREF

  v5 = ((int (__thiscall *)(_DWORD))this->m_10)(*(_DWORD *)(a3 + 4)); /*0x766ab0*/
  FromStringInt((char **)&Format, v5); /*0x766ab9*/
  v6 = String::GetOrEmpty_Alt((String *)&this->m_14); /*0x766acb*/
  StringCSF = GetStringCSF((wchar_t *)v6, 0, aDRa2mdpostWdtg, 161); /*0x766ad4*/
  WideString::Assign((wchar_t **)&v13, StringCSF); /*0x766ade*/
  v11 = Format; /*0x766ae7*/
  v8 = WideString::GetOrEmpty((wchar_t **)&v13); /*0x766aec*/
  swprintf((wchar_t *const)&v14[0].DeleteAndZero_field_0x04, (const size_t)v8, v11); /*0x766af7*/
  if ( WideString::Length(a4) ) /*0x766b08*/
  {
    WideString::Assign((wchar_t **)&v13.DeleteAndZero_field_0x04, (wchar_t *)L", "); /*0x766b1a*/
    v9 = ConcatWString((wchar_t **)v14, a4, (const wchar_t **)&v13.DeleteAndZero_field_0x04); /*0x766b34*/
    WideString::AssignConcat( /*0x766b3b*/
      (const wchar_t **)v9,
      (wchar_t **)&v13.DeleteAndZero_field_0x08,
      (wchar_t *)&v14[0].DeleteAndZero_field_0x04);
    DeleteAndZero::Alt((DeleteAndZero *)&v13.DeleteAndZero_field_0x08); /*0x766b44*/
    DeleteAndZero::Alt(v14); /*0x766b4d*/
    DeleteAndZero::Alt((DeleteAndZero *)&v13.DeleteAndZero_field_0x04); /*0x766b56*/
  }
  WideString::Assign(a2, (wchar_t *)&v14[0].DeleteAndZero_field_0x04); /*0x766b69*/
  DeleteAndZero::Alt(&v13); /*0x766b72*/
  DeleteAndZero((ObjectClass *)&Format); /*0x766b7b*/
  return a2; /*0x766b82*/
}



// ==== 0x00766B90  _ValueGameOption_E_WorldDominationTour::unadviseConnection  this=?$ValueGameOption@E@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::unadviseConnection(_ValueGameOption_E_WorldDominationTour *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->m_14); /*0x766b96*/
  GameOption_WorldDominationTour::Constructor((GameOption_WorldDominationTour *)this); /*0x766b9d*/
  if ( (a2 & 1) != 0 ) /*0x766ba7*/
    __3_YAXPAX_Z(this); /*0x766baa*/
  return (void **)this; /*0x766bb4*/
}



// ==== 0x00766BC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::AddRef(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x766bc6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x766bcf*/
  {
    v3 = 0; /*0x766bd1*/
    if ( m_8 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x766bdd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= m_8 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/
}



// ==== 0x00766C10  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::Release(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766c13*/
  if ( !a2 ) /*0x766c1d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x766d1d*/
    return 1; /*0x766d23*/
  }
  LOBYTE(this->m_C) = 0; /*0x766c27*/
  if ( a3 ) /*0x766c2d*/
  {
    *a3 = a2; /*0x766c73*/
    v6 = (ComPtr *)(a3 + 1); /*0x766c75*/
    if ( a2 - 1 >= 0 ) /*0x766c81*/
    {
      v9 = a2; /*0x766c83*/
      do /*0x766c97*/
      {
        ComPtr::Constructor(v6); /*0x766c88*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766c8d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c93*/
        --v9; /*0x766c96*/
      }
      while ( v9 ); /*0x766c97*/
      v6 = (ComPtr *)(a3 + 1); /*0x766c99*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766c37*/
    if ( !v5 ) /*0x766c41*/
    {
      v8 = 0; /*0x766c6f*/
      goto LABEL_14; /*0x766c71*/
    }
    *v5 = a2; /*0x766c43*/
    v6 = (ComPtr *)(v5 + 1); /*0x766c45*/
    v13 = (ComPtr *)(v5 + 1); /*0x766c4b*/
    if ( a2 - 1 >= 0 ) /*0x766c51*/
    {
      v7 = a2; /*0x766c53*/
      do /*0x766c67*/
      {
        ComPtr::Constructor(v6); /*0x766c58*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766c5d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c63*/
        --v7; /*0x766c66*/
      }
      while ( v7 ); /*0x766c67*/
      v6 = v13; /*0x766c69*/
    }
  }
  v8 = v6; /*0x766c9d*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x766c9f*/
  if ( !v8 ) /*0x766ca5*/
    return 0; /*0x766caa*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x766cb1*/
  {
    if ( a2 >= this->m_8 ) /*0x766cbd*/
      m_8 = this->m_8; /*0x766cbf*/
    for ( i = 0; i < m_8; ++i ) /*0x766cc5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x766cd2*/
    if ( BYTE1(this->m_C) ) /*0x766cdc*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766ce3*/
      if ( v12 ) /*0x766ce8*/
        (**v12)(v12, 3); /*0x766cee*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x766cf0*/
    }
    m_8 = a2; /*0x766cf7*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x766d06*/
  this->m_8 = m_8; /*0x766d09*/
  BYTE1(this->m_C) = a3 == 0; /*0x766d0c*/
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
int __thiscall Conflict_WorldDominationTour_12::Read(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x766d60*/
    return 0; /*0x766d68*/
  m_8 = this->m_8; /*0x766d6e*/
  result = 0; /*0x766d71*/
  if ( m_8 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= m_8 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/
}



// ==== 0x00766DA0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Conflict_WorldDominationTour_12::Write(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x766da0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/
}



// ==== 0x00766DC0  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_1  this=DynamicVector  sig=csp ====
char __thiscall Conflict_WorldDominationTour_12::Constructor_1(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  Conflict_WorldDominationTour *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766dc3*/
  if ( a2 ) /*0x766dcd*/
  {
    LOBYTE(this->m_C) = 0; /*0x766dd7*/
    if ( a3 ) /*0x766ddd*/
    {
      *a3 = a2; /*0x766e21*/
      v8 = (ComPtr *)(a3 + 1); /*0x766e23*/
      if ( a2 - 1 >= 0 ) /*0x766e2f*/
      {
        v9 = a2; /*0x766e31*/
        do /*0x766e45*/
        {
          ComPtr::Constructor(v8); /*0x766e36*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766e3b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x766e41*/
          --v9; /*0x766e44*/
        }
        while ( v9 ); /*0x766e45*/
        v8 = (ComPtr *)(a3 + 1); /*0x766e47*/
      }
      v6 = v8; /*0x766e4b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766de7*/
      if ( v5 ) /*0x766df1*/
      {
        *v5 = a2; /*0x766df3*/
        v6 = (ComPtr *)(v5 + 1); /*0x766df5*/
        v7 = (Conflict_WorldDominationTour *)(v5 + 1); /*0x766dfb*/
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
    LOBYTE(this->m_C) = 1; /*0x766e4f*/
    if ( !v6 ) /*0x766e53*/
      return 0; /*0x766ed6*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x766e55*/
    {
      if ( a2 >= this->m_8 ) /*0x766e61*/
        m_8 = this->m_8; /*0x766e63*/
      for ( i = 0; i < m_8; ++i ) /*0x766e69*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x766e76*/
      if ( BYTE1(this->m_C) ) /*0x766e80*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766e87*/
        if ( v11 ) /*0x766e8c*/
          (**v11)(v11, 3); /*0x766e92*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x766e94*/
      }
      m_8 = a2; /*0x766e9b*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x766eaa*/
    this->m_8 = m_8; /*0x766ead*/
    BYTE1(this->m_C) = a3 == 0; /*0x766eb0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(_DWORD *)this->__pad_0 /*0x766eb9*/
                                                                                           + 12))(this);
  }
  v12 = this->m_8; /*0x766ebc*/
  if ( v12 < this->m_10 ) /*0x766ec4*/
    this->m_10 = v12; /*0x766ec6*/
  return 1; /*0x766ec9*/
}



// ==== 0x00766EE0  ObjectClass::System_Init_766EE0  this=ObjectClass  sig=csp ====
char __thiscall System_Init_766EE0(ObjectClass *this, int a2)
{
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax

  vtable2 = this->?; /*0x766ee3*/
  if ( this->? >= (int)vtable2 ) /*0x766eeb*/
  {
    if ( !BYTE1(this->?) && vtable2 ) /*0x766ef6*/
      return 0; /*0x766ef6*/
    abstractFlags = this->?; /*0x766ef8*/
    if ( abstractFlags <= 0 /*0x766f08*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)vtable2 + abstractFlags,
            0) )
    {
      return 0; /*0x766f0f*/
    }
  }
  uniqueId = this->?; /*0x766f15*/
  this->? = uniqueId + 1; /*0x766f1f*/
  ComPtr::Set((ComPtr *)((char *)this->? + 8 * uniqueId), *(_DWORD *)(a2 + 4)); /*0x766f2c*/
  return 1; /*0x766f11*/
}



// ==== 0x00766F40  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::IndexOf  this=DynamicVector  sig=csp ====
int __thiscall Conflict_WorldDominationTour_12::IndexOf(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x766f40*/
  result = 0; /*0x766f43*/
  if ( m_10 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= m_10 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/
}



// ==== 0x00766F70  rc_ptr::System_Init_766F70  this=rc_ptr  sig=csp ====
_DWORD *__thiscall System_Init_766F70(rc_ptr *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x766f73*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x766f7c*/
  ComPtr::Set((ComPtr *)this, *(_DWORD *)(a2 + 4)); /*0x766f88*/
  return this; /*0x766f8f*/
}



// ==== 0x00766FA0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26::Release(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  ++this->q008; /*0x766fa2*/
  return this->__pad_0; /*0x766fa5*/
}



// ==== 0x00766FB0  _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_26::ddtor(
        _VectorCursor_V_rc_ptr_VGameOption_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this)
{
  --this->q008; /*0x766fb2*/
  return this->__pad_0; /*0x766fb5*/
}



// ==== 0x00766FC0  _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::QueryInterface(
        _VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x766fc3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x766fc6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x766fd0*/
  {
    (**v3)(v3, 3); /*0x766fdf*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x766fe1*/
  }
  BYTE1(this->m_C) = 0; /*0x766fec*/
  this->m_8 = 0; /*0x766ff2*/
  if ( (a2 & 1) != 0 ) /*0x766ff9*/
    __3_YAXPAX_Z(this); /*0x766ffc*/
  return this->__pad_0; /*0x767006*/
}



// ==== 0x00767010  COMClass::lockServer  this=COMClass  sig=csp ====
char *__thiscall COMClass::lockServer(COMClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x76701d*/
    v4 = (char *)this - 4; /*0x767021*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76702e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x767033*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76705a*/
    ComPtr::Release((ComPtr *)this); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      __3_YAXPAX_Z(this); /*0x76706b*/
    return this->__pad_0; /*0x767073*/
  }
}



// ==== 0x00767080  _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour::Constructor_2  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_2(
        _DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x767083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::GameOption>>::`vftable'; /*0x767086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x767090*/
  {
    (**v3)(v3, 3); /*0x76709f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7670a1*/
  }
  BYTE1(this->m_C) = 0; /*0x7670ac*/
  this->m_8 = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    __3_YAXPAX_Z(this); /*0x7670bc*/
  return this->__pad_0; /*0x7670c6*/
}



// ==== 0x007670D0  Conflict_WorldDominationTour::Constructor_3  this=rc_ptr  sig=csp ====
_DWORD *__thiscall Conflict_WorldDominationTour_12::Constructor_3(Conflict_WorldDominationTour *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x7670d3*/
  *this = (Conflict_WorldDominationTour)&rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x7670d8*/
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
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x767306*/
}



// ==== 0x00767310  Network_Connect  this=-  sig=csp ====
char __stdcall sub_767310(int a1)
{
  return 0; /*0x767312*/
}



// ==== 0x00767320  ObjectClass::method  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_767320(ObjectClass *this, wchar_t **a2, int a3, const wchar_t **a4)
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

  v5 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 5))(this, a3); /*0x76732d*/
  v6 = FromStringInt((char **)&v14, v5); /*0x767336*/
  ConcatStringAlloc((char **)&a3, (const char **)&this->?, v6); /*0x767343*/
  DeleteAndZero((ObjectClass *)&v14); /*0x76734c*/
  v7 = a4; /*0x767351*/
  if ( WideString::Length(a4) ) /*0x767357*/
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)L", "); /*0x76736a*/
    v8 = String::GetOrEmpty((String *)&a3); /*0x76737a*/
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22); /*0x76738c*/
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4); /*0x767399*/
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF); /*0x7673a0*/
    DeleteAndZero::Alt((DeleteAndZero *)&v14); /*0x7673a9*/
    DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7673b2*/
  }
  else
  {
    v11 = String::GetOrEmpty((String *)&a3); /*0x7673d3*/
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25); /*0x7673dc*/
    WideString::Assign(a2, v12); /*0x7673e8*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x7673bb*/
  return a2; /*0x7673c3*/
}



// ==== 0x00767460  rc_ptr::ConstructorWDTFlagOption  this=rc_ptr  sig=csp ====
_DWORD *__fastcall ConstructorWDTFlagOption(rc_ptr *this, int a2, void *a3, int a4, void *a5, int a6)
{
  int v8; // ecx
  void *v9; // esi
  int v10; // ecx
  void *v11; // esi
  String v13; // [esp-10h] [ebp-1Ch] BYREF
  String v14; // [esp-8h] [ebp-14h] BYREF

  v9 = (void *)__2_YAPAXI_Z(0x1Cu); /*0x76746e*/
  if ( v9 ) /*0x767475*/
  {
    *(_DWORD *)&v14.m_3[1] = a6; /*0x76747f*/
    *(_DWORD *)v14.__pad_0 = v8; /*0x767480*/
    String::AssignFromPtr(&v14, (const char **)&a5); /*0x767484*/
    *(_DWORD *)&v13.m_3[1] = a4; /*0x767491*/
    *(_DWORD *)v13.__pad_0 = v10; /*0x767492*/
    String::AssignFromPtr(&v13, (const char **)&a3); /*0x767496*/
    v11 = ConstructorWDTFlagOption_Create( /*0x7674a3*/
            v9,
            a2,
            *(void **)v13.__pad_0,
            *(int *)&v13.m_3[1],
            *(void **)v14.__pad_0,
            *(int *)&v14.m_3[1]);
  }
  else
  {
    v11 = 0; /*0x7674a7*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7674ab*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::FlagGameOption>::`vftable'; /*0x7674b2*/
  ComPtr::Set((ComPtr *)this, (int)v11); /*0x7674b9*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7674c2*/
  DeleteAndZero((ObjectClass *)&a5); /*0x7674cb*/
  return this; /*0x7674d2*/
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
        wchar_t **a2,
        int a3,
        const wchar_t **a4)
{
  int *v4; // eax
  const wchar_t **v6; // edi
  char *v7; // eax
  wchar_t **v8; // eax
  char *v9; // eax
  wchar_t *v10; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-10h]
  void *v12; // [esp+0h] [ebp-4h] BYREF

  v12 = this; /*0x767500*/
  v4 = (int *)&this->__pad_0[20]; /*0x767510*/
  if ( (*(_DWORD *)(*(_DWORD *)(a3 + 4) + 56) & *(_DWORD *)&this->__pad_0[8]) == 0 ) /*0x767513*/
    v4 = &this->field_18; /*0x767515*/
  String::AssignFromPtr((String *)&a3, (const char **)v4); /*0x76751f*/
  if ( String::Length((String *)&a3) ) /*0x767528*/
  {
    v6 = a4; /*0x767552*/
    if ( WideString::Length(a4) ) /*0x767558*/
    {
      WideString::Assign((wchar_t **)&a4, (wchar_t *)L", "); /*0x76756a*/
      v7 = String::GetOrEmpty((String *)&a3); /*0x76757a*/
      StringCSF = GetStringCSF((wchar_t *)v7, 0, g_Str_File_WDTGameOptions_cpp, 78); /*0x76758c*/
      v8 = ConcatWString((wchar_t **)&v12, v6, (const wchar_t **)&a4); /*0x767599*/
      WideString::AssignConcat((const wchar_t **)v8, a2, StringCSF); /*0x7675a0*/
      DeleteAndZero::Alt((DeleteAndZero *)&v12); /*0x7675a9*/
      DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7675b2*/
      DeleteAndZero((ObjectClass *)&a3); /*0x7675bb*/
    }
    else
    {
      v9 = String::GetOrEmpty((String *)&a3); /*0x7675d3*/
      v10 = GetStringCSF((wchar_t *)v9, 0, g_Str_File_WDTGameOptions_cpp, 81); /*0x7675dc*/
      WideString::Assign(a2, v10); /*0x7675e8*/
      DeleteAndZero((ObjectClass *)&a3); /*0x7675f1*/
    }
    return a2; /*0x7675c0*/
  }
  else
  {
    WideString::AssignFromPtr(a2, a4); /*0x76753c*/
    DeleteAndZero((ObjectClass *)&a3); /*0x767545*/
    return a2; /*0x76754a*/
  }
}



// ==== 0x00767600  sub_767600  this=-  sig=csp ====
int __stdcall sub_767600(int a1)
{
  return 0; /*0x767602*/
}



// ==== 0x007676F0  rc_ptr::System_Init_7676F0  this=rc_ptr  sig=csp ====
_DWORD *__fastcall System_Init_7676F0(rc_ptr *this, int a2)
{
  _DWORD *v4; // eax
  int v5; // edi

  v4 = (_DWORD *)__2_YAPAXI_Z(0xCu); /*0x7676f8*/
  if ( v4 ) /*0x767702*/
  {
    v4[2] = a2; /*0x767704*/
    v4[1] = 0; /*0x767707*/
    *v4 = &WorldDominationTour::MapSizeGameOption::`vftable'; /*0x76770e*/
    v5 = (int)v4; /*0x767714*/
  }
  else
  {
    v5 = 0; /*0x767718*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76771c*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::MapSizeGameOption>::`vftable'; /*0x767723*/
  ComPtr::Set((ComPtr *)this, v5); /*0x76772a*/
  return this; /*0x767731*/
}



// ==== 0x00767740  MapSizeGameOption_WorldDominationTour::Read  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
wchar_t **__stdcall MapSizeGameOption_WorldDominationTour::Read(
        MapSizeGameOption_WorldDominationTour *this,
        int a2,
        const wchar_t **a3)
{
  const wchar_t **v3; // edi
  wchar_t **v4; // eax
  wchar_t *v6; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  void *v8; // [esp+8h] [ebp-4h] BYREF

  v3 = a3; /*0x767743*/
  if ( WideString::Length(a3) ) /*0x767749*/
  {
    WideString::Assign((wchar_t **)&a3, (wchar_t *)L", "); /*0x76775b*/
    StringCSF = GetStringCSF( /*0x767788*/
                  (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(a2 + 4) + 18)],
                  0,
                  g_Str_File_WDTGameOptions_cpp,
                  129);
    v4 = ConcatWString((wchar_t **)&v8, v3, (const wchar_t **)&a3); /*0x767795*/
    WideString::AssignConcat((const wchar_t **)v4, (wchar_t **)this, StringCSF); /*0x76779c*/
    DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x7677a5*/
    DeleteAndZero::Alt((DeleteAndZero *)&a3); /*0x7677ae*/
  }
  else
  {
    v6 = GetStringCSF( /*0x7677da*/
           (&off_7F7088)[*(unsigned __int8 *)(*(_DWORD *)(a2 + 4) + 19)],
           0,
           g_Str_File_WDTGameOptions_cpp,
           131);
    WideString::Assign((wchar_t **)this, v6); /*0x7677e6*/
  }
  return (wchar_t **)this; /*0x7677b5*/
}



// ==== 0x00767800  MapSizeGameOption_WorldDominationTour::ddtor  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
int __stdcall MapSizeGameOption_WorldDominationTour::ddtor(MapSizeGameOption_WorldDominationTour *this)
{
  return dword_848628[4 * *(unsigned __int8 *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 18) /*0x76781b*/
                    + *(unsigned __int8 *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 19)];
}



// ==== 0x00767820  GameOption@WorldDominationTour::ConstructorWDTFlagOption_Create  this=GameOption@WorldDominationTour  sig=csp ====
void *__thiscall sub_767820(void *this, int a2, void *a3, int a4, void *a5, int a6)
{
  int v6; // edx
  int v8; // ecx

  v6 = a6; /*0x767824*/
  v8 = a4; /*0x76782b*/
  this->q008 = a2; /*0x76782f*/
  this->q00C = v8; /*0x767836*/
  this->q004 = 0; /*0x76783d*/
  *(_DWORD *)this = &WorldDominationTour::GameOption::`vftable'; /*0x767844*/
  this->q004 = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a5); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a3); /*0x76785a*/
  *(_DWORD *)this = &WorldDominationTour::FlagGameOption::`vftable'; /*0x767863*/
  DeleteAndZero(&a3); /*0x767869*/
  DeleteAndZero(&a5); /*0x767872*/
  return this; /*0x767879*/
}



// ==== 0x00767880  FlagGameOption_WorldDominationTour::coUninitialize  this=FlagGameOption@WorldDominationTour  sig=csp ====
void **__thiscall COMClass::coUninitialize(FlagGameOption_WorldDominationTour *this, char a2)
{
  DeleteAndZero((ObjectClass *)&this->field_18); /*0x767886*/
  DeleteAndZero((ObjectClass *)&this->__pad_0[20]); /*0x76788e*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767895*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76789b*/
  if ( (a2 & 1) != 0 ) /*0x7678a5*/
    __3_YAXPAX_Z(this); /*0x7678a8*/
  return (void **)this; /*0x7678b2*/
}



// ==== 0x007678C0  MapSizeGameOption_WorldDominationTour::QueryInterface  this=MapSizeGameOption@WorldDominationTour  sig=csp ====
_DWORD *__thiscall MapSizeGameOption_WorldDominationTour::QueryInterface(
        MapSizeGameOption_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x7678c3*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7678c9*/
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



// ==== 0x00767B00  Team_Create_767B00  this=ReferenceCounted  sig=csp ====
ComPtr *__fastcall Team_Create_767B00(ComPtr *a1, int a2)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x10u); /*0x767b09*/
  v5 = v4; /*0x767b0e*/
  if ( v4 ) /*0x767b15*/
  {
    v6 = (_DWORD *)(v4 + 8); /*0x767b18*/
    *(_DWORD *)(v4 + 4) = 0; /*0x767b1d*/
    *(_DWORD *)v4 = &ReferenceCounted::`vftable'; /*0x767b24*/
    ComPtr::Constructor((ComPtr *)(v4 + 8)); /*0x767b2a*/
    *v6 = &rc_ptr<WDTState>::`vftable'; /*0x767b2f*/
    ComPtr::Set((ComPtr *)(v5 + 8), *(_DWORD *)(a2 + 4)); /*0x767b3b*/
    *(_DWORD *)v5 = &WorldDominationTour::History::`vftable'; /*0x767b40*/
  }
  else
  {
    v5 = 0; /*0x767b49*/
  }
  ComPtr::Constructor(a1); /*0x767b4d*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::History>::`vftable'; /*0x767b54*/
  ComPtr::Set(a1, v5); /*0x767b5c*/
  return a1; /*0x767b63*/
}



// ==== 0x00767BB0  ActivateScreenWDT  this=Conflict  sig=csp ====
int __stdcall WDT_ActivateScreen(int a1, int a2)
{
  ActivateScreenWDT_Create(a2); /*0x767bbf*/
  return a1; /*0x767bc6*/
}



// ==== 0x00767C10  History_WorldDominationTour::QueryInterface  this=History@WorldDominationTour  sig=csp ====
_DWORD *__thiscall History_WorldDominationTour::QueryInterface(History_WorldDominationTour *this, char a2)
{
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x767c13*/
  *this = (History_WorldDominationTour)&WorldDominationTour::History::`vftable'; /*0x767c16*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x767c1c*/
  ComPtr::Release(v3); /*0x767c22*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x767c29*/
  if ( (a2 & 1) != 0 ) /*0x767c33*/
    __3_YAXPAX_Z(this); /*0x767c36*/
  return this; /*0x767c40*/
}



// ==== 0x00767C50  COMClass::marshalInterface  this=rc_ptr  sig=csp ====
_DWORD *__thiscall COMClass::marshalInterface(COMClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x767c53*/
  ComPtr::Release((ComPtr *)this); /*0x767c59*/
  if ( (a2 & 1) != 0 ) /*0x767c63*/
    __3_YAXPAX_Z(this); /*0x767c66*/
  return this->__pad_0; /*0x767c70*/
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
_DWORD *__thiscall sub_767E90(MSFrameAnim *this)
{
  this->MSFrameAnim_field_0x4 = 0; /*0x767e99*/
  this->MSFrameAnim_field_0x8 = 0; /*0x767e9c*/
  LOBYTE(this->MSFrameAnim_field_0xC) = 0; /*0x767e9f*/
  this->MSFrameAnim_field_0x10 = (void *)Timer::GetTicks(); /*0x767ea7*/
  this->MSFrameAnim_field_0x18 = 0; /*0x767eaa*/
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x767ead*/
  return this->__pad_0; /*0x767eb5*/
}



// ==== 0x00767EC0  MSFrameAnim::method_767EC0  this=MSFrameAnim  sig=csp ====
void __thiscall sub_767EC0(MSFrameAnim *this)
{
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x767ec0*/
  VtableStub::5CB6C0(this); /*0x767ec6*/
}



// ==== 0x00767ED0  MSFrameAnim::Load  this=MSFrameAnim  sig=csp ====
char __stdcall MSFrameAnim::Load(MSFrameAnim *this, int *a2)
{
  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen((int *)this->__pad_0, a2, 1); /*0x767ee3*/
  return 0; /*0x767eea*/
}



// ==== 0x00767EF0  MSFrameAnim::Draw  this=MSFrameAnim  sig=csp ====
void __stdcall MSFrameAnim::Draw(MSFrameAnim *this, int *a2)
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
    v2 = (*(int (__thiscall **)(MSFrameAnim *))(*(_DWORD *)this->__pad_0 + 124))(this); /*0x767f0d*/
    v3 = (*(int (__thiscall **)(MSFrameAnim *))(*(_DWORD *)this->__pad_0 + 128))(this); /*0x767f0f*/
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
    RenderScoreScreen((int *)this->__pad_0, &v7, 1); /*0x767f40*/
  }
}



// ==== 0x00767F80  MSFrameAnim::UpdateFrame  this=MSFrameAnim  sig=csp ====
_DWORD *__stdcall MSFrameAnim::UpdateFrame(MSFrameAnim *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x767f8c*/
  this->MSFrameAnim_field_0x4 = 0; /*0x767f99*/
  this->MSFrameAnim_field_0x8 = (void *)640; /*0x767f9c*/
  this->MSFrameAnim_field_0xC = (void *)480; /*0x767f9f*/
  return this->__pad_0; /*0x767fa2*/
}



// ==== 0x00767FB0  rc_ptr::ConstructWDTSelection_Create_767FB0  this=rc_ptr  sig=csp ====
_DWORD *__fastcall ConstructWDTSelection_Create_767FB0(rc_ptr *this, int a2, int a3, int a4)
{
  ReferenceCounted *v6; // eax
  void *v7; // edi

  v6 = (ReferenceCounted *)__2_YAPAXI_Z(0xD4u); /*0x767fbb*/
  if ( v6 ) /*0x767fc5*/
    v7 = ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, a4); /*0x767fd9*/
  else
    v7 = 0; /*0x767fdd*/
  ComPtr::Constructor((ComPtr *)this); /*0x767fe1*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x767fe8*/
  ComPtr::Set((ComPtr *)this, (int)v7); /*0x767fef*/
  return this; /*0x767ff6*/
}



// ==== 0x00768000  ReferenceCounted::ConstructWDTSelection_Create_767FB0_Create  this=ReferenceCounted  sig=csp ====
void *__thiscall ConstructWDTSelection_Create_767FB0_Create(ReferenceCounted *this, int a2, int a3, int a4)
{
  *((_DWORD *)this + 3) = a3; /*0x768013*/
  *((_DWORD *)this + 1) = 0; /*0x76801e*/
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x768021*/
  *((_DWORD *)this + 2) = a2; /*0x768027*/
  *((_DWORD *)this + 4) = a4; /*0x76802a*/
  *((_DWORD *)this + 5) = 0; /*0x76802d*/
  *((_DWORD *)this + 6) = 0; /*0x768030*/
  *((_DWORD *)this + 7) = 0; /*0x768033*/
  *((_DWORD *)this + 8) = 0; /*0x768036*/
  *((_DWORD *)this + 9) = 0; /*0x768039*/
  String::Assign((String *)this + 5, &g_INI_DefaultBuffer); /*0x76803c*/
  ConstructWDTSelection_Create_767FB0_Create_Create((ObjectClass *)(this + 11), 0, 0); /*0x768048*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x768052*/
  *((_DWORD *)this + 16) = 10; /*0x768058*/
  *((_DWORD *)this + 15) = 0; /*0x76805b*/
  *((_DWORD *)this + 17) = 0; /*0x76805e*/
  *((_DWORD *)this + 18) = 0; /*0x768061*/
  *((_DWORD *)this + 25) = 0; /*0x768064*/
  *((_BYTE *)this + 104) = 0; /*0x768067*/
  *((_DWORD *)this + 27) = 0; /*0x76806a*/
  *((_DWORD *)this + 28) = 0; /*0x76806d*/
  *((_BYTE *)this + 116) = 0; /*0x768070*/
  *((_DWORD *)this + 30) = 0; /*0x768073*/
  *((_DWORD *)this + 48) = 0; /*0x768076*/
  *((_DWORD *)this + 49) = 0; /*0x76807c*/
  *((_BYTE *)this + 200) = 1; /*0x768082*/
  *((_BYTE *)this + 201) = 0; /*0x768089*/
  *((_DWORD *)this + 47) = &DynamicVectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76808f*/
  *((_DWORD *)this + 52) = 10; /*0x768099*/
  *((_DWORD *)this + 51) = 0; /*0x76809f*/
  *this = (ReferenceCounted)&WorldDominationTour::Map::`vftable'; /*0x7680a5*/
  return this; /*0x7680ad*/
}



// ==== 0x007680C0  WorldDomination::SetupTerritoryNodes  this=Map@WorldDominationTour  sig=csp ====
void __thiscall WorldDomination::SetupTerritoryNodes(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int i; // ebp
  ObjectClass *v5; // edi
  void (__thiscall ***vtable1)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void *v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx

  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 36); /*0x7680c6*/
  *(_DWORD *)this = &WorldDominationTour::Map::`vftable'; /*0x7680c9*/
  if ( v2 ) /*0x7680d1*/
    (**v2)(v2, 1); /*0x7680d7*/
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 20); /*0x7680d9*/
  if ( v3 ) /*0x7680de*/
    (**v3)(v3, 1); /*0x7680e4*/
  for ( i = 0; i < *(_DWORD *)(this + 204); ++i ) /*0x7680f1*/
  {
    v5 = *(ObjectClass **)(*(_DWORD *)(this + 192) + 4 * i); /*0x7680fa*/
    if ( v5 ) /*0x7680ff*/
    {
      vtable1 = (void (__thiscall ***)(_DWORD, int))v5->?; /*0x768101*/
      if ( vtable1 ) /*0x768106*/
        (**vtable1)(vtable1, 1); /*0x76810c*/
      DeleteAndZero(v5); /*0x768110*/
      __3_YAXPAX_Z(v5); /*0x768116*/
    }
  }
  (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x768133*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x76813f*/
  (*((void (__thiscall **)(DSurface *, ObjectClass *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 1))( /*0x768154*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 120); /*0x768157*/
  if ( v7 ) /*0x76815d*/
    (**v7)(v7, 1); /*0x768163*/
  v8 = *(void **)(this + 192); /*0x768165*/
  *(_DWORD *)(this + 188) = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76816b*/
  if ( v8 && *(_BYTE *)(this + 201) ) /*0x768179*/
  {
    __3_YAXPAX_Z(v8); /*0x768182*/
    *(_DWORD *)(this + 192) = 0; /*0x76818a*/
  }
  *(_BYTE *)(this + 201) = 0; /*0x768190*/
  *(_DWORD *)(this + 196) = 0; /*0x768196*/
  v9 = *(void (__thiscall ****)(_DWORD, int))(this + 48); /*0x76819c*/
  *(_DWORD *)(this + 44) = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76819f*/
  if ( v9 && *(_BYTE *)(this + 57) ) /*0x7681aa*/
  {
    (**v9)(v9, 3); /*0x7681b7*/
    *(_DWORD *)(this + 48) = 0; /*0x7681b9*/
  }
  *(_BYTE *)(this + 57) = 0; /*0x7681bf*/
  *(_DWORD *)(this + 52) = 0; /*0x7681c2*/
  DeleteAndZero((ObjectClass *)(this + 40)); /*0x7681c5*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x7681cc*/
}



// ==== 0x007681E0  ArtConfig::ReadLayout  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::ReadLayout(int this, INIClass *a2, PriorityQueue *a3, int a4)
{
  char **v5; // eax
  char **v6; // eax
  char **v7; // eax
  char **v8; // eax
  bool v9; // bl
  ObjectClass **CoordPair; // eax
  ObjectClass *v11; // ecx
  TagClass *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  void **v22; // edi
  TagClass *attachedTag; // edx
  char *v24; // eax
  _DWORD *Rect; // eax
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // edx
  ArtConfig *v34; // eax
  PriorityQueue *v35; // ebx
  _DWORD *Config; // eax
  MSPCXAnim *v37; // eax
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // eax
  char *v41; // ecx
  MSPCXAnim *v42; // eax
  MSPCXAnim *v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // eax
  void *v46; // eax
  int *v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // ebx
  void (__thiscall ***v53)(_DWORD, int); // ecx
  MSOverlayAnim *v54; // eax
  void *v55; // eax
  char **v56; // eax
  bool v57; // bl
  int v58; // ebx
  int i; // ebx
  char **v60; // eax
  char **v61; // eax
  int v62; // eax
  int vtable1; // ebx
  char **v64; // eax
  char **v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int j; // ebp
  int k; // ebp
  int occupant; // [esp-4h] [ebp-D8h]
  ObjectClass v73; // [esp+10h] [ebp-C4h] BYREF
  char v74[12]; // [esp+C0h] [ebp-14h] BYREF
  int v75; // [esp+CCh] [ebp-8h]

  unknown_libname_73(&v73.attachedBomb); /*0x7681f0*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7681fe*/
  String::Assign((String *)&v73.?, aMaps); /*0x76820c*/
  v5 = FromStringInt((char **)&v73, *(_DWORD *)(this + 8)); /*0x768222*/
  INIClass::ReadString(a2, (char **)&v73.?, v5, (char **)&v73.?, (int)&v73.attachedBomb); /*0x768236*/
  DeleteAndZero(&v73); /*0x76823f*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768248*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768251*/
  unknown_libname_73(&v73.?); /*0x76825a*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768268*/
  v6 = StaticString::Factory(*(StaticString **)(this + 16)); /*0x76827a*/
  INIClass::ReadString(a2, (char **)&v73.attachedBomb, v6, (char **)&v73.?, (int)&v73.?); /*0x768287*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768290*/
  unknown_libname_73(&v73.?); /*0x768299*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7682a7*/
  v7 = FromStringInt((char **)&v73.?, (int)g_DisplayWidth); /*0x7682c0*/
  v8 = ProcessStringAndCopy((char **)&v73, aArt, v7); /*0x7682cf*/
  v9 = INIClass::ReadString(a2, (char **)&v73.?, v8, (char **)&v73.?, (int)&v73.?) > 0; /*0x7682e7*/
  DeleteAndZero(&v73); /*0x7682ea*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7682f3*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7682fc*/
  if ( (int)g_DisplayWidth > 800 && !v9 ) /*0x76830f*/
  {
    String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x76831a*/
    String::Assign((String *)&v73.?, aArt800); /*0x768328*/
    INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768343*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x76834c*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768355*/
  }
  v73.nextObject = (ObjectClass *)640; /*0x768363*/
  v73.attachedTag = (TagClass *)400; /*0x76836b*/
  String::Assign((String *)&v73.?, (const char *)g_Str_EVA_CannotDeployHere.Type); /*0x768373*/
  CoordPair = (ObjectClass **)INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, &v73.nextObject); /*0x76838e*/
  v11 = *CoordPair; /*0x768393*/
  v12 = (TagClass *)CoordPair[1]; /*0x768395*/
  v73.nextObject = v11; /*0x768398*/
  v73.attachedTag = v12; /*0x7683a0*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7683a4*/
  v73.ambientSoundController[3] = 0; /*0x7683b4*/
  v73.ambientSoundController[4] = 0; /*0x7683b8*/
  String::Assign((String *)&v73.?, aSidebarsize); /*0x7683bc*/
  v13 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, &v73.ambientSoundController[3]); /*0x7683d7*/
  v14 = *v13; /*0x7683dc*/
  v15 = v13[1]; /*0x7683de*/
  v73.ambientSoundController[3] = v14; /*0x7683e1*/
  v73.ambientSoundController[4] = v15; /*0x7683e9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7683ed*/
  v73.customSound_controller[0] = 0; /*0x7683fb*/
  v73.customSound_controller[1] = 0; /*0x7683ff*/
  String::Assign((String *)&v73.?, aHelpbarsize); /*0x768403*/
  v16 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73.?, v73.customSound_controller); /*0x76841e*/
  v17 = *v16; /*0x768423*/
  v18 = v16[1]; /*0x768425*/
  v73.customSound_controller[0] = v17; /*0x768428*/
  v73.customSound_controller[1] = v18; /*0x768430*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768434*/
  v19 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x768441*/
  v20 = (signed int)(v19 - v73.customSound_controller[1] - (unsigned int)v73.attachedTag) / 2; /*0x768460*/
  v21 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x768462*/
  v22 = (void **)(this + 68); /*0x768471*/
  attachedTag = v73.attachedTag; /*0x768477*/
  *(_DWORD *)(this + 68) = (signed int)(v21 - v73.ambientSoundController[3] - (unsigned int)v73.nextObject) / 2; /*0x76847d*/
  *(_DWORD *)(this + 72) = v20; /*0x76847f*/
  v24 = (char *)attachedTag + *(_DWORD *)(this + 72); /*0x768487*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(this + 68); /*0x768489*/
  *(_DWORD *)(this + 80) = v24; /*0x768495*/
  String::Assign((String *)&v73.?, aTextrect); /*0x768498*/
  Rect = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 124)); /*0x7684b2*/
  *(_DWORD *)(this + 124) = *Rect; /*0x7684bb*/
  *(_DWORD *)(this + 128) = Rect[1]; /*0x7684c0*/
  *(_DWORD *)(this + 132) = Rect[2]; /*0x7684c6*/
  *(_DWORD *)(this + 136) = Rect[3]; /*0x7684cc*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7684d3*/
  v26 = *(_DWORD *)(this + 128); /*0x7684dc*/
  *(_DWORD *)(this + 124) += *(_DWORD *)(this + 68); /*0x7684e1*/
  *(_DWORD *)(this + 128) = *(_DWORD *)(this + 72) + v26; /*0x7684f1*/
  String::Assign((String *)&v73.?, aTooltiprect); /*0x7684f4*/
  v27 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 140)); /*0x768511*/
  *(_DWORD *)(this + 140) = *v27; /*0x76851a*/
  *(_DWORD *)(this + 144) = v27[1]; /*0x76851f*/
  *(_DWORD *)(this + 148) = v27[2]; /*0x768525*/
  *(_DWORD *)(this + 152) = v27[3]; /*0x76852b*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768532*/
  v28 = *(_DWORD *)(this + 144); /*0x76853b*/
  *(_DWORD *)(this + 140) += *(_DWORD *)(this + 68); /*0x768540*/
  *(_DWORD *)(this + 144) = *(_DWORD *)(this + 72) + v28; /*0x768550*/
  String::Assign((String *)&v73.?, aTitlerect); /*0x768553*/
  v29 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 156)); /*0x768570*/
  *(_DWORD *)(this + 156) = *v29; /*0x768579*/
  *(_DWORD *)(this + 160) = v29[1]; /*0x76857e*/
  *(_DWORD *)(this + 164) = v29[2]; /*0x768584*/
  *(_DWORD *)(this + 168) = v29[3]; /*0x76858a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768591*/
  v30 = *(_DWORD *)(this + 160); /*0x76859a*/
  *(_DWORD *)(this + 156) += *(_DWORD *)(this + 68); /*0x76859f*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(this + 72) + v30; /*0x7685af*/
  String::Assign((String *)&v73.?, aBacktextrect); /*0x7685b2*/
  v31 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73.?, (int *)(this + 172)); /*0x7685cf*/
  *(_DWORD *)(this + 172) = *v31; /*0x7685d8*/
  *(_DWORD *)(this + 176) = v31[1]; /*0x7685dd*/
  *(_DWORD *)(this + 180) = v31[2]; /*0x7685e3*/
  *(_DWORD *)(this + 184) = v31[3]; /*0x7685e9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7685f0*/
  v32 = *(_DWORD *)(this + 176); /*0x7685f9*/
  *(_DWORD *)(this + 172) += *(_DWORD *)(this + 68); /*0x7685fe*/
  *(_DWORD *)(this + 176) = *(_DWORD *)(this + 72) + v32; /*0x768609*/
  unknown_libname_73(&v73.?); /*0x76860c*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x76861a*/
  String::Assign((String *)&v73.?, aOpening); /*0x768628*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768643*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x76864c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768655*/
  if ( String::Length((String *)&v73.?) ) /*0x76865e*/
  {
    v33 = *(_DWORD *)(this + 72); /*0x768669*/
    v73.? = *v22; /*0x768670*/
    v73.occupant = v33; /*0x76867a*/
    v73.owningHouseIndex = (int)v73.nextObject; /*0x76867e*/
    v73.fallRate = (int)v73.attachedTag; /*0x768682*/
    v34 = (ArtConfig *)__2_YAPAXI_Z(0x3Cu); /*0x768686*/
    v35 = a3; /*0x768692*/
    if ( v34 ) /*0x768690*/
    {
      Config = ArtConfig::loadConfig( /*0x7686b2*/
                 v34,
                 (char **)&v73.?,
                 (int)DSurface_Alternate,
                 (int)a3[3].__pad_0,
                 (int *)&v73.?,
                 0);
      *(_DWORD *)(this + 24) = Config; /*0x7686ba*/
      PriorityQueue::Add(a3, (int)Config); /*0x7686bd*/
    }
    else
    {
      *(_DWORD *)(this + 24) = 0; /*0x7686d0*/
      PriorityQueue::Add(a3, 0); /*0x7686d3*/
    }
  }
  else
  {
    v35 = a3; /*0x7686da*/
  }
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7686ea*/
  String::Assign((String *)&v73.?, aBackground); /*0x7686f8*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x768713*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x76871c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768725*/
  v37 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x76872c*/
  if ( v37 ) /*0x768736*/
    v38 = MSPCXAnim::Construct(v37, (const char **)&v73.?, (int)v35[3].__pad_0, (_DWORD *)(this + 68), 1); /*0x768746*/
  else
    v38 = 0; /*0x76874d*/
  v39 = *(_DWORD *)(this + 24); /*0x76874f*/
  *(_DWORD *)(this + 28) = v38; /*0x768752*/
  if ( v39 && v38 ) /*0x76875b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v38 + 4))(v38, 0); /*0x768763*/
  PriorityQueue::Add(v35, *(_DWORD *)(this + 28)); /*0x76876c*/
  String::Assign((String *)&v73.?, 0); /*0x768777*/
  String::Assign((String *)&v73.?, aClickmap); /*0x768785*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73.?, (int)&v73.?); /*0x7687a0*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7687a9*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7687b2*/
  CCFileClass::Construct2((CCFileClass *)&v73.customSound_controller[2], (char **)&v73.?); /*0x7687c0*/
  *(_DWORD *)(this + 36) = DecodeFrameSHP((int)&v73.customSound_controller[2], 0, 0, 0); /*0x7687d8*/
  CCFileClass::Reset((CCFileClass *)&v73.customSound_controller[2]); /*0x7687db*/
  v73.? = 0; /*0x7687e9*/
  String::Assign((String *)&v73, &g_INI_DefaultBuffer); /*0x7687f1*/
  String::Assign((String *)&v73.?, aSidebar); /*0x7687ff*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73.?, (char **)&v73, (int)&v73.?); /*0x76881a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768823*/
  DeleteAndZero(&v73); /*0x76882c*/
  if ( String::Length((String *)&v73.?) ) /*0x768835*/
  {
    v40 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x768846*/
    v41 = (char *)*v22 + (unsigned int)v73.nextObject; /*0x76885f*/
    v73.occupant = (v40 - v73.ambientSoundController[4]) / 2; /*0x768861*/
    v73.? = v41; /*0x768865*/
    v42 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x768869*/
    if ( v42 ) /*0x768873*/
      v73.? = (int)MSPCXAnim::Construct(v42, (const char **)&v73.?, (int)v35[3].__pad_0, &v73.?, 1); /*0x76888c*/
    else
      v73.? = 0; /*0x768892*/
  }
  PriorityQueue::Add(v35, v73.?); /*0x7688a1*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x7688af*/
  String::Assign((String *)&v73, aHelpbar); /*0x7688bd*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x7688d8*/
  DeleteAndZero(&v73); /*0x7688e1*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x7688ea*/
  if ( String::Length((String *)&v73.?) ) /*0x7688f3*/
  {
    v43 = (MSPCXAnim *)__2_YAPAXI_Z(0x3Cu); /*0x7688fe*/
    if ( v43 ) /*0x768908*/
      v44 = MSPCXAnim::Construct(v43, (const char **)&v73.?, (int)v35[3].__pad_0, (_DWORD *)(this + 76), 1); /*0x76891b*/
    else
      v44 = 0; /*0x768922*/
    *(_DWORD *)(this + 32) = v44; /*0x768924*/
  }
  PriorityQueue::Add(v35, *(_DWORD *)(this + 32)); /*0x76892d*/
  String::Assign((String *)&v73, aBackbuttonrect); /*0x76893b*/
  v45 = INIClass::GetRect(a2, &v73.?, (char **)&v73.?, (char **)&v73, (int *)(this + 84)); /*0x768955*/
  *(_DWORD *)(this + 84) = *v45; /*0x76895e*/
  *(_DWORD *)(this + 88) = v45[1]; /*0x768963*/
  *(_DWORD *)(this + 92) = v45[2]; /*0x768969*/
  *(_DWORD *)(this + 96) = v45[3]; /*0x76896f*/
  DeleteAndZero(&v73); /*0x768976*/
  String::Assign((String *)&v73, aBackbuttonorig); /*0x768984*/
  v46 = *(void **)(this + 84); /*0x76898c*/
  v73.occupant = *(_DWORD *)(this + 88); /*0x76898e*/
  v73.? = v46; /*0x768996*/
  v47 = INIClass::GetCoordPair(a2, &v73.?, (char *)&v73.?, (char **)&v73, &v73.?); /*0x7689ac*/
  v48 = *v47; /*0x7689b1*/
  v49 = v47[1]; /*0x7689b3*/
  v73.ambientSoundController[1] = v48; /*0x7689ba*/
  v73.ambientSoundController[2] = v49; /*0x7689be*/
  DeleteAndZero(&v73); /*0x7689c2*/
  v50 = *(_DWORD *)(this + 88); /*0x7689cd*/
  *(_DWORD *)(this + 84) += *v22; /*0x7689d0*/
  v51 = v73.ambientSoundController[2]; /*0x7689d7*/
  *(_DWORD *)(this + 88) = *(_DWORD *)(this + 72) + v50; /*0x7689db*/
  v52 = (int)*v22 + v73.ambientSoundController[1]; /*0x7689e9*/
  v73.ambientSoundController[2] = *(_DWORD *)(this + 72) + v51; /*0x7689f4*/
  String::Assign((String *)&v73.?, aSdbtnanmPal); /*0x7689f8*/
  String::Assign((String *)&v73, aBackbuttonpale); /*0x768a06*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768a21*/
  DeleteAndZero(&v73); /*0x768a2a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768a33*/
  v53 = *(void (__thiscall ****)(_DWORD, int))(this + 120); /*0x768a38*/
  if ( v53 ) /*0x768a3d*/
    (**v53)(v53, 1); /*0x768a43*/
  *(_DWORD *)(this + 120) = PaletteClass::Load((PaletteClass *)&v73.?); /*0x768a57*/
  String::Assign((String *)&v73, aBackbuttonnorm); /*0x768a5a*/
  *(_DWORD *)(this + 108) = INIClass::ReadInt( /*0x768a78*/
                              (bool *)a2->__pad_0,
                              (char **)&v73.?,
                              (char **)&v73,
                              *(_DWORD *)(this + 108));
  DeleteAndZero(&v73); /*0x768a7b*/
  String::Assign((String *)&v73, aBackbuttondepr); /*0x768a89*/
  *(_DWORD *)(this + 112) = INIClass::ReadInt( /*0x768aa7*/
                              (bool *)a2->__pad_0,
                              (char **)&v73.?,
                              (char **)&v73,
                              *(_DWORD *)(this + 112));
  DeleteAndZero(&v73); /*0x768aaa*/
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768ab8*/
  String::Assign((String *)&v73, aBackbutton); /*0x768ac6*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768ae1*/
  DeleteAndZero(&v73); /*0x768aea*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768af3*/
  if ( String::Length((String *)&v73.?) ) /*0x768afc*/
  {
    v54 = (MSOverlayAnim *)__2_YAPAXI_Z(0x4Cu); /*0x768b07*/
    if ( v54 ) /*0x768b11*/
      v55 = MSOverlayAnim::Init( /*0x768b39*/
              v54,
              (char **)&v73.?,
              v52,
              v73.ambientSoundController[2],
              *(_DWORD *)(this + 120),
              0,
              (int)a3[3].__pad_0,
              1,
              *(_DWORD *)(this + 108),
              0);
    else
      v55 = 0; /*0x768b40*/
    *(_DWORD *)(this + 100) = v55; /*0x768b4a*/
    PriorityQueue::Add(a3, (int)v55); /*0x768b4d*/
  }
  String::Assign((String *)&v73.?, &g_INI_DefaultBuffer); /*0x768b5b*/
  String::Assign((String *)&v73, aBackbuttonhigh); /*0x768b69*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768b84*/
  DeleteAndZero(&v73); /*0x768b8d*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768b96*/
  String::Assign((String *)&v73.?, 0); /*0x768ba1*/
  String::Assign((String *)&v73, aOverlayprefix); /*0x768baf*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, this + 40); /*0x768bc9*/
  DeleteAndZero(&v73); /*0x768bd2*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768bdb*/
  String::Assign((String *)&v73.?, 0); /*0x768be6*/
  String::Assign((String *)&v73, aOverlaypalette); /*0x768bf4*/
  INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?); /*0x768c0f*/
  DeleteAndZero(&v73); /*0x768c18*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768c21*/
  *(_DWORD *)(this + 20) = PaletteClass::Load((PaletteClass *)&v73.?); /*0x768c42*/
  v56 = String::Assign((String *)&v73, aWdt_0); /*0x768c45*/
  String::Concat((String *)v56, (char **)v73.ambientSoundController, (char **)&v73.attachedBomb); /*0x768c4c*/
  DeleteAndZero(&v73); /*0x768c55*/
  String::Assign((String *)&v73, aNamekeyprefix); /*0x768c63*/
  INIClass::ReadString( /*0x768c7e*/
    a2,
    (char **)&v73.?,
    (char **)&v73,
    (char **)v73.ambientSoundController,
    (int)v73.ambientSoundController);
  DeleteAndZero(&v73); /*0x768c87*/
  v73.? = 0; /*0x768c92*/
  String::Assign((String *)&v73.?, 0); /*0x768c9a*/
  String::Assign((String *)&v73, aDefaultpalette); /*0x768ca8*/
  v57 = INIClass::ReadString(a2, (char **)&v73.?, (char **)&v73, (char **)&v73.?, (int)&v73.?) > 0; /*0x768cce*/
  DeleteAndZero(&v73); /*0x768cd1*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768cda*/
  if ( v57 ) /*0x768ce1*/
    v73.? = (int)ArtConfig::saveConfig(this, (const char **)&v73.?); /*0x768cef*/
  String::Assign((String *)&v73, aLogo); /*0x768cfc*/
  v58 = ArtConfig::ParseLayoutEntry((ArtConfig *)this, a2, (char **)&v73.?, (char **)&v73, v73.?); /*0x768d1c*/
  DeleteAndZero(&v73); /*0x768d1e*/
  if ( v58 ) /*0x768d25*/
    PriorityQueue::Add(a3, v58); /*0x768d2f*/
  for ( i = 0; i < 10; ++i ) /*0x768d34*/
  {
    v60 = FromStringInt((char **)&v73.?, i); /*0x768d3c*/
    v61 = ProcessStringAndCopy((char **)&v73, aAnimation, v60); /*0x768d4b*/
    String::Reassign((String *)&v73.?, (const char **)v61); /*0x768d55*/
    DeleteAndZero(&v73); /*0x768d5e*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768d67*/
    v62 = ArtConfig::ParseLayoutEntry((ArtConfig *)this, a2, (char **)&v73.?, (char **)&v73.?, v73.?); /*0x768d7e*/
    if ( v62 ) /*0x768d85*/
      PriorityQueue::Add(a3, v62); /*0x768d8f*/
  }
  vtable1 = 0; /*0x768d9a*/
  v73.? = 0; /*0x768d9c*/
  do /*0x768e87*/
  {
    String::Assign((String *)&v73, 0); /*0x768da6*/
    v64 = FormatStringInt((char **)&v73.ambientSoundController[1], vtable1, 2); /*0x768dbd*/
    v65 = ProcessStringAndCopy((char **)&v73.?, aTerritory, v64); /*0x768dcc*/
    HIBYTE(v73.?) = INIClass::ReadString(a2, (char **)&v73.?, v65, (char **)&v73, (int)&v73.?) > 0; /*0x768de4*/
    DeleteAndZero((ObjectClass *)&v73.?); /*0x768de9*/
    DeleteAndZero((ObjectClass *)&v73.ambientSoundController[1]); /*0x768df2*/
    DeleteAndZero(&v73); /*0x768dfb*/
    if ( HIBYTE(v73.?) ) /*0x768e06*/
    {
      ArtConfig_Read( /*0x768e1d*/
        (rc_ptr *)&v73.?,
        vtable1,
        a2,
        (char *)&v73.?,
        (const char **)(this + 40),
        (const char **)v73.ambientSoundController);
      v66 = *(_DWORD *)(this + 52); /*0x768e22*/
      if ( *(_DWORD *)(this + 60) < v66 /*0x768e4a*/
        || (*(_BYTE *)(this + 57) || !v66)
        && (v67 = *(_DWORD *)(this + 64), v67 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 44) + 8))(this + 44, v67 + v66, 0) )
      {
        v68 = *(_DWORD *)(this + 60); /*0x768e51*/
        occupant = v73.occupant; /*0x768e58*/
        *(_DWORD *)(this + 60) = v68 + 1; /*0x768e5c*/
        ComPtr::Set((ComPtr *)(*(_DWORD *)(this + 48) + 8 * v68), occupant); /*0x768e65*/
      }
      v73.? = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x768e6e*/
      ComPtr::Release((ComPtr *)&v73.?); /*0x768e76*/
      vtable1 = (int)v73.?; /*0x768e7b*/
    }
    v73.? = (void *)++vtable1; /*0x768e83*/
  }
  while ( vtable1 < 100 ); /*0x768e87*/
  for ( j = 0; j < *(_DWORD *)(this + 60); ++j ) /*0x768e94*/
    ArtConfig::resetConfig( /*0x768ead*/
      *(_DWORD *)(*(_DWORD *)(this + 48) + 8 * j + 4),
      a3,
      *(_DWORD *)(this + 20),
      (_DWORD *)(this + 68));
  for ( k = 0; k < *(_DWORD *)(this + 60); ++k ) /*0x768ec1*/
    ArtConfig::validateConfig( /*0x768ed9*/
      *(_DWORD *)(*(_DWORD *)(this + 48) + 8 * k + 4),
      a3,
      *(_DWORD *)(this + 20),
      (_DWORD *)(this + 68));
  DeleteAndZero((ObjectClass *)v73.ambientSoundController); /*0x768eea*/
  v73.customSound_controller[2] = (int)&CCFileClass::`vftable'; /*0x768ef6*/
  v75 = 0; /*0x768efe*/
  Vector::Clear((int)v74); /*0x768f09*/
  v73.customSound_controller[2] = (int)&off_7E1668; /*0x768f12*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v73.customSound_controller[2]); /*0x768f1a*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f23*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f2c*/
  DeleteAndZero((ObjectClass *)&v73.?); /*0x768f35*/
  return DeleteAndZero((ObjectClass *)&v73.attachedBomb); /*0x768f43*/
}


// ==== 0x00768F50  ArtConfig::ParseLayoutEntry  this=ArtConfig  sig=csp ====
int __thiscall ArtConfig::ParseLayoutEntry(ArtConfig *this, _DWORD *a2, char **a3, char **a4, int a5)
{
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  char *v17; // ebp
  _DWORD *v18; // eax
  MSShapeAnim *v19; // eax
  void *v20; // esi
  String v22; // [esp+10h] [ebp-88h] BYREF
  char v23; // [esp+1Bh] [ebp-7Dh]
  String v24; // [esp+1Ch] [ebp-7Ch] BYREF
  char *v25; // [esp+24h] [ebp-74h] BYREF
  String v26; // [esp+28h] [ebp-70h] BYREF
  int v27[3]; // [esp+84h] [ebp-14h] BYREF
  int v28; // [esp+90h] [ebp-8h]

  unknown_libname_73(&v22); /*0x768f60*/
  String::Assign((String *)&v22.m_3[1], 0); /*0x768f6b*/
  v6 = INIClass::ReadString((INIClass *)a2, a3, a4, (char **)&v22.m_3[1], (int)&v22) > 0; /*0x768f9c*/
  DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x768f9f*/
  if ( !v6 ) /*0x768fa6*/
    goto LABEL_17; /*0x768fa6*/
  unknown_libname_73(&v25); /*0x768fb0*/
  unknown_libname_73(&v22.m_3[1]); /*0x768fb9*/
  unknown_libname_73(&v26); /*0x768fc2*/
  unknown_libname_73(&v24); /*0x768fcb*/
  unknown_libname_73(&v24.m_3[1]); /*0x768fd4*/
  v7 = String::Tokenize(&v22, 0, Str, (void **)&v25); /*0x768fe9*/
  v8 = String::Tokenize(&v22, v7, Str, (void **)&v22.m_3[1]); /*0x768ffd*/
  v9 = String::Tokenize(&v22, v8, Str, (void **)&v26); /*0x769011*/
  v10 = String::Tokenize(&v22, v9, Str, (void **)&v24); /*0x769025*/
  String::Tokenize(&v22, v10, Str, (void **)&v24.m_3[1]); /*0x769039*/
  if ( !(unsigned __int8)String::NotEquals(&v26, 0) ) /*0x769044*/
    goto LABEL_16; /*0x769044*/
  __1_Timevec_std__QAE_XZ((const char **)&v22.m_3[1]); /*0x769055*/
  v12 = *((_DWORD *)this + 17) + v11; /*0x769063*/
  __1_Timevec_std__QAE_XZ((const char **)&v26); /*0x769065*/
  v14 = *((_DWORD *)this + 18) + v13; /*0x76906f*/
  v15 = 5; /*0x769077*/
  if ( (unsigned __int8)String::NotEquals(&v24, 0) && String::Length(&v24) ) /*0x769089*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v24); /*0x769096*/
    v15 = v16; /*0x76909b*/
  }
  if ( !(unsigned __int8)String::NotEquals((String *)&v24.m_3[1], 0) /*0x7690c9*/
    || !String::Length((String *)&v24.m_3[1])
    || (v17 = ArtConfig::saveConfig((int)this, (const char **)&v24.m_3[1])) == 0 )
  {
    v17 = (char *)a5; /*0x7690cb*/
  }
  v18 = CCFileClass::Construct2((CCFileClass *)&v26.m_3[1], &v25); /*0x7690db*/
  v23 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v18 + 20))(v18, 0); /*0x7690f0*/
  *(_DWORD *)&v26.m_3[1] = &CCFileClass::`vftable'; /*0x7690f4*/
  v28 = 0; /*0x7690fc*/
  Vector::Clear((int)v27); /*0x769107*/
  *(_DWORD *)&v26.m_3[1] = &off_7E1668; /*0x769110*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v26.m_3[1]); /*0x769118*/
  if ( !v23 || !v17 ) /*0x769127*/
  {
LABEL_16:
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x76919a*/
    DeleteAndZero((ObjectClass *)&v24); /*0x7691a3*/
    DeleteAndZero((ObjectClass *)&v26); /*0x7691ac*/
    DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x7691b5*/
    DeleteAndZero((ObjectClass *)&v25); /*0x7691be*/
LABEL_17:
    DeleteAndZero((ObjectClass *)&v22); /*0x7691c3*/
    return 0; /*0x7691cf*/
  }
  v19 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76912b*/
  if ( v19 ) /*0x769135*/
    v20 = MSShapeAnim::Constructor(v19, &v25, v12, v14, (int)v17, v15, 1, 0); /*0x76914b*/
  else
    v20 = 0; /*0x76914f*/
  DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x769155*/
  DeleteAndZero((ObjectClass *)&v24); /*0x76915e*/
  DeleteAndZero((ObjectClass *)&v26); /*0x769167*/
  DeleteAndZero((ObjectClass *)&v22.m_3[1]); /*0x769170*/
  DeleteAndZero((ObjectClass *)&v25); /*0x769179*/
  DeleteAndZero((ObjectClass *)&v22); /*0x769182*/
  return (int)v20; /*0x769189*/
}



// ==== 0x007691E0  ArtConfig::saveConfig  this=ArtConfig  sig=csp ====
char *__thiscall sub_7691E0(int this, const char **a2)
{
  int v3; // esi
  char *v4; // ebp
  char **v5; // eax
  char **v6; // esi
  char **v7; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v3 = 0; /*0x7691e9*/
  if ( *(int *)(this + 204) <= 0 ) /*0x7691f3*/
  {
LABEL_4:
    v4 = (char *)PaletteClass::Load(a2); /*0x769213*/
    if ( v4 ) /*0x76921f*/
    {
      v5 = (char **)__2_YAPAXI_Z(8u); /*0x769223*/
      v6 = v5; /*0x769228*/
      if ( v5 ) /*0x76922f*/
      {
        String::AssignFromPtr(v5, a2); /*0x769234*/
        v6[1] = v4; /*0x769239*/
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
    while ( !String::Compare(*(const char ***)(*(_DWORD *)(this + 192) + 4 * v3), a2) ) /*0x769206*/
    {
      if ( ++v3 >= *(_DWORD *)(this + 204) ) /*0x769211*/
        goto LABEL_4; /*0x769211*/
    }
    return *(char **)(*(_DWORD *)(*(_DWORD *)(this + 192) + 4 * v3) + 4); /*0x76924c*/
  }
}



// ==== 0x007692F0  ObjectClass::ConstructWDTSelection_Create_76EEB0_Create  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0_Create(ObjectClass *this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int referenceCount; // ecx

  result = this->?; /*0x7692f3*/
  if ( result ) /*0x7692f8*/
  {
    TerritorySelectWDT_Delete((ObjectClass *)a3, 0, 1, 0); /*0x769304*/
    result = MSEngine::ProcessEvents((MSEngine *)a2, this->?, 300000); /*0x769316*/
  }
  referenceCount = this->?; /*0x76931b*/
  if ( referenceCount ) /*0x769321*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)referenceCount + 4))(referenceCount, 1); /*0x769327*/
  return result; /*0x76931e*/
}



// ==== 0x00769330  Surface::PixelToIndex  this=ObjectClass  sig=csp ====
int __thiscall Surface::PixelToIndex(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  v3 = *a2 - this->q011; /*0x769342*/
  v4 = a2[1] - this->q048; /*0x769347*/
  v6 = v3; /*0x769349*/
  v7 = v4; /*0x76934f*/
  if ( v3 < 0 /*0x76937a*/
    || v6 >= (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->objectTypeFlags + 124))(this->objectTypeFlags)
    || v7 < 0
    || v7 >= (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->objectTypeFlags + 128))(this->objectTypeFlags) )
  {
    return -1; /*0x769390*/
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->objectTypeFlags + 40))(this->objectTypeFlags, &v6); /*0x769386*/
  }
}



// ==== 0x007693A0  WDTSurface::ToggleState  this=WDTSurface  sig=csp ====
int __thiscall WDTSurface::ToggleState(int this, int *a2, char a3)
{
  int result; // eax
  int v5; // eax

  LOBYTE(result) = a3; /*0x7693a0*/
  if ( *(_BYTE *)(this + 116) != a3 ) /*0x7693aa*/
  {
    *(_BYTE *)(this + 116) = a3; /*0x7693ae*/
    if ( a3 && *(_BYTE *)(this + 104) ) /*0x7693b3*/
      v5 = *(_DWORD *)(this + 112); /*0x7693ba*/
    else
      v5 = *(_DWORD *)(this + 108); /*0x7693bf*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v5); /*0x7693c6*/
    Team::ReleaseAll(a2, this + 84); /*0x7693d5*/
    return DSurface::Flip2(); /*0x7693dc*/
  }
  return result; /*0x7693e1*/
}



// ==== 0x007693F0  WDTGame::ToggleTeamMode  this=Player  sig=csp ====
int __thiscall WDTGame::ToggleTeamMode(int this, int *a2, char a3)
{
  int result; // eax
  char v5; // cl
  int v6; // eax

  LOBYTE(result) = a3; /*0x7693f0*/
  if ( *(_BYTE *)(this + 104) != a3 ) /*0x7693fa*/
  {
    v5 = *(_BYTE *)(this + 116); /*0x7693fc*/
    *(_BYTE *)(this + 104) = a3; /*0x7693ff*/
    if ( v5 && a3 ) /*0x769408*/
      v6 = *(_DWORD *)(this + 112); /*0x76940a*/
    else
      v6 = *(_DWORD *)(this + 108); /*0x76940f*/
    MSAnim::Reset(*(_DWORD **)(this + 100), v6); /*0x769416*/
    Team::ReleaseAll(a2, this + 84); /*0x769425*/
    return DSurface::Flip2(); /*0x76942c*/
  }
  return result; /*0x769431*/
}



// ==== 0x00769440  WDTSurface::PointInRect  this=WDTSurface  sig=csp ====
int __thiscall WDTSurface::PointInRect(WDTSurface *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int result; // eax

  v2 = *((_DWORD *)this + 21); /*0x769440*/
  result = 0; /*0x769475*/
  if ( *a2 >= v2 && *a2 < v2 + *((_DWORD *)this + 23) ) /*0x769457*/
  {
    v3 = a2[1]; /*0x769459*/
    v4 = *((_DWORD *)this + 22); /*0x76945c*/
    if ( v3 >= v4 && v3 < v4 + *((_DWORD *)this + 24) ) /*0x76946a*/
      return 1; /*0x76944c*/
  }
  return result; /*0x769471*/
}



// ==== 0x00769480  ObjectClass::unknown_libname_37  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_37(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x769484*/
  this->? = 0; /*0x769486*/
  this->? = 0; /*0x769489*/
  return &this->AbstractClass; /*0x76948c*/
}



// ==== 0x00769490  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_769490(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  char *vtable1; // edx
  char *v4; // ecx

  result = &this->AbstractClass; /*0x769490*/
  vtable1 = (char *)this->?; /*0x76949d*/
  this->AbstractClass = (char *)this->AbstractClass + *a2; /*0x7694a0*/
  v4 = (char *)this->? + 1; /*0x7694aa*/
  result[1] = &vtable1[a2[1]]; /*0x7694ab*/
  result[2] = v4; /*0x7694ae*/
  return result; /*0x7694b1*/
}



// ==== 0x007694C0  ObjectClass::Map_Load_7694C0  this=ObjectClass  sig=csp ====
int *__thiscall Map_Load_7694C0(ObjectClass *this, int *a2)
{
  int vtable2; // esi
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  vtable2 = (int)this->?; /*0x7694c6*/
  if ( vtable2 <= 0 ) /*0x7694cb*/
  {
    v4 = 0; /*0x7694e6*/
    v5 = 0; /*0x7694ea*/
  }
  else
  {
    v4 = (int)this->AbstractClass / vtable2; /*0x7694d2*/
    v5 = (int)this->? / vtable2; /*0x7694e0*/
  }
  *a2 = v4; /*0x7694fc*/
  a2[1] = v5; /*0x7694fe*/
  return a2; /*0x7694fb*/
}



// ==== 0x00769550  LoadWDTMapAsset  this=-  sig=ida-proto ====
int __fastcall LoadWDTMapAsset(const char **a1, char **a2)
{
  void *vtable0; // ebp
  int *v4; // eax
  int *v5; // esi
  int *v6; // eax
  int *v7; // esi
  _DWORD *v8; // eax
  int v9; // edx
  unsigned int abstractFlags; // ebp
  int v11; // esi
  int *v12; // eax
  int *v13; // edi
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int *v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int m_8; // ecx
  int v24; // eax
  int *v25; // ebx
  int *v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  int v31; // esi
  int attachedTag; // esi
  int v33; // edi
  int v34; // esi
  bool v35; // cc
  int v36; // edi
  TagClass *v37; // ebx
  BombClass *v38; // ebp
  BombClass *attachedBomb; // ebx
  _DWORD *_769D70; // eax
  int v41; // edi
  int v42; // esi
  char **v43; // eax
  int *_7694C0; // eax
  ObjectClass *v45; // ecx
  char **v46; // eax
  char **v47; // eax
  int v49; // [esp+10h] [ebp-158h] BYREF
  int v50; // [esp+14h] [ebp-154h]
  _VectorClass_V_TRect_H v51; // [esp+18h] [ebp-150h] BYREF
  void *Block; // [esp+2Ch] [ebp-13Ch]
  unsigned int v53; // [esp+30h] [ebp-138h]
  int v54; // [esp+34h] [ebp-134h]
  ObjectClass v55; // [esp+38h] [ebp-130h] BYREF
  BufferIOFileClass v56; // [esp+110h] [ebp-58h] BYREF

  v55.ambientSoundController[0] = (int)a1; /*0x769558*/
  BufferIOFile::Init((BufferIOFile *)&v55.needsRedraw); /*0x769567*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)1); /*0x76957a*/
  v55.ambientSoundController[2] = 0; /*0x769588*/
  v55.ambientSoundController[3] = 0; /*0x76958c*/
  GenericList::Constructor((GenericList *)&v55.ambientSoundController[4]); /*0x769593*/
  v55.ambientSoundController[4] = (int)&List<INIClass::INISection *>::`vftable'; /*0x76959f*/
  Node::Init((Node *)&v55.bombVisible); /*0x7695aa*/
  v55.visibilityFlags = 0; /*0x7695bc*/
  v55.ambientSoundController[1] = (int)&INIClass::`vftable'; /*0x7695c3*/
  FileStraw::Open((FileStraw *)&v55.ambientSoundController[1], (int)&v55.needsRedraw, 0); /*0x7695ce*/
  CCFileClass::Close((BufferIOFileClass *)&v55.needsRedraw); /*0x7695da*/
  sub_47AA00((CDFileClass *)&v56, a2); /*0x7695e7*/
  vtable0 = DecodeFrameSHP((int)&v56, 0, 0, 0); /*0x7695fc*/
  v55.AbstractClass = vtable0; /*0x769600*/
  v55.? = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable0 + 128))(vtable0); /*0x76960d*/
  v55.? = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable0 + 124))(vtable0); /*0x76961e*/
  *(_DWORD *)&v51.m_1[3] = 0; /*0x769627*/
  v51.m_8 = 30; /*0x76962b*/
  LOWORD(v51.m_C) = 1; /*0x76962f*/
  *(_DWORD *)v51.__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x769638*/
  v4 = (int *)__2_YAPAXI_Z(0x1E0u); /*0x769640*/
  v5 = v4; /*0x769645*/
  if ( v4 ) /*0x76964c*/
    Array::ForEach(v4, 16, 30, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769657*/
  else
    v5 = 0; /*0x76965e*/
  *(_DWORD *)&v51.m_1[3] = v5; /*0x769665*/
  BYTE1(v51.m_C) = 1; /*0x769669*/
  Block = 0; /*0x76966e*/
  v53 = 30; /*0x769672*/
  LOWORD(v54) = 1; /*0x769676*/
  *(_DWORD *)v51.__tail_10 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x76967f*/
  v6 = (int *)__2_YAPAXI_Z(0x168u); /*0x769687*/
  v7 = v6; /*0x76968c*/
  if ( v6 ) /*0x769693*/
    Array::ForEach(v6, 12, 30, (int (__thiscall *)(int))unknown_libname_37); /*0x76969e*/
  else
    v7 = 0; /*0x7696a5*/
  Block = v7; /*0x7696ab*/
  v55.? = &v51; /*0x7696af*/
  BYTE1(v54) = 1; /*0x7696b7*/
  v55.? = 0; /*0x7696bc*/
  v55.? = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x7696c0*/
  if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x7696c8*/
  {
    do /*0x769700*/
    {
      v8 = (_DWORD *)(16 * (int)v55.? + *((_DWORD *)v55.? + 1)); /*0x7696e4*/
      *v8 = 0; /*0x7696e6*/
      v8[1] = 0; /*0x7696e8*/
      v8[2] = 0; /*0x7696eb*/
      v8[3] = 0; /*0x7696ee*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x7696f5*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769700*/
  }
  v9 = 0; /*0x76970b*/
  v50 = 0; /*0x76970f*/
  if ( v55.? > 0 ) /*0x769713*/
  {
    while ( 1 ) /*0x76971d*/
    {
      v49 = 0; /*0x76971d*/
      if ( v55.? > 0 ) /*0x769723*/
        break; /*0x769723*/
LABEL_67:
      v50 = ++v9; /*0x769a2a*/
      if ( v9 >= v55.? ) /*0x769a2e*/
        goto LABEL_68; /*0x769a2e*/
    }
    while ( 1 ) /*0x769736*/
    {
      abstractFlags = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)vtable0 + 40))(vtable0, &v49); /*0x769736*/
      v55.? = abstractFlags; /*0x76973b*/
      if ( abstractFlags <= 0x1D ) /*0x76973f*/
      {
        v11 = abstractFlags + 1; /*0x769755*/
        if ( v53 < abstractFlags + 1 ) /*0x76975a*/
        {
          LOBYTE(v54) = 0; /*0x76976b*/
          v12 = (int *)__2_YAPAXI_Z(12 * v11); /*0x769773*/
          v13 = v12; /*0x769778*/
          if ( v12 ) /*0x76977f*/
            Array::ForEach(v12, 12, abstractFlags + 1, (int (__thiscall *)(int))unknown_libname_37); /*0x76978a*/
          else
            v13 = 0; /*0x769791*/
          LOBYTE(v54) = 1; /*0x769795*/
          if ( v13 ) /*0x76979a*/
          {
            if ( Block ) /*0x7697a0*/
            {
              v14 = v53; /*0x7697a2*/
              if ( v11 < (int)v53 ) /*0x7697a8*/
                v14 = abstractFlags + 1; /*0x7697aa*/
              if ( v14 > 0 ) /*0x7697ae*/
              {
                v15 = 0; /*0x7697b0*/
                do /*0x7697cf*/
                {
                  v16 = &v13[v15]; /*0x7697b6*/
                  v17 = (int *)((char *)Block + v15 * 4); /*0x7697b9*/
                  v15 += 3; /*0x7697bb*/
                  --v14; /*0x7697be*/
                  *v16 = *v17; /*0x7697c1*/
                  v16[1] = v17[1]; /*0x7697c6*/
                  v16[2] = v17[2]; /*0x7697cc*/
                }
                while ( v14 ); /*0x7697cf*/
                abstractFlags = v55.?; /*0x7697d1*/
              }
              if ( BYTE1(v54) ) /*0x7697db*/
                __3_YAXPAX_Z(Block); /*0x7697e2*/
            }
            Block = v13; /*0x7697ea*/
            v53 = v11; /*0x7697ee*/
            BYTE1(v54) = 1; /*0x7697f2*/
          }
        }
        v18 = (char *)Block + 12 * abstractFlags; /*0x769810*/
        v19 = v18[1]; /*0x769815*/
        v20 = v18[2]; /*0x76981a*/
        *v18 += v49; /*0x76981d*/
        v18[1] = v50 + v19; /*0x769826*/
        v18[2] = v20 + 1; /*0x769829*/
        if ( v51.m_8 < (unsigned int)v11 ) /*0x769832*/
        {
          v55.owningHouseIndex = v51.m_8; /*0x76983a*/
          if ( v11 ) /*0x76983e*/
          {
            LOBYTE(v51.m_C) = 0; /*0x769846*/
            v21 = (int *)__2_YAPAXI_Z(16 * v11); /*0x76984e*/
            v22 = v21; /*0x769853*/
            if ( v21 ) /*0x76985a*/
              Array::ForEach(v21, 16, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769865*/
            else
              v22 = 0; /*0x76986c*/
            LOBYTE(v51.m_C) = 1; /*0x769870*/
            if ( v22 ) /*0x769875*/
            {
              if ( *(_DWORD *)&v51.m_1[3] ) /*0x76987b*/
              {
                m_8 = v51.m_8; /*0x76987d*/
                if ( v11 < v51.m_8 ) /*0x769883*/
                  m_8 = v11; /*0x769885*/
                if ( m_8 > 0 ) /*0x769889*/
                {
                  v24 = 0; /*0x76988b*/
                  do /*0x7698b0*/
                  {
                    v25 = &v22[v24]; /*0x769891*/
                    v26 = (int *)(v24 * 4 + *(_DWORD *)&v51.m_1[3]); /*0x769894*/
                    v24 += 4; /*0x769896*/
                    --m_8; /*0x769899*/
                    *v25 = *v26; /*0x76989c*/
                    v25[1] = v26[1]; /*0x7698a1*/
                    v25[2] = v26[2]; /*0x7698a7*/
                    v25[3] = v26[3]; /*0x7698ad*/
                  }
                  while ( m_8 ); /*0x7698b0*/
                  abstractFlags = v55.?; /*0x7698b2*/
                }
                if ( BYTE1(v51.m_C) ) /*0x7698bc*/
                  __3_YAXPAX_Z(*(void **)&v51.m_1[3]); /*0x7698c3*/
              }
              *(_DWORD *)&v51.m_1[3] = v22; /*0x7698cb*/
              v51.m_8 = v11; /*0x7698cf*/
              BYTE1(v51.m_C) = 1; /*0x7698d3*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_VectorClass_V_TRect_H *))(*(_DWORD *)v51.__pad_0 + 12))(&v51); /*0x7698e2*/
          }
          v55.occupant = v55.owningHouseIndex; /*0x7698ed*/
          v55.? = &v51; /*0x7698fa*/
          v55.? = (int)&VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x7698fe*/
          if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x769902*/
          {
            do /*0x76993a*/
            {
              v27 = (_DWORD *)(16 * v55.occupant + *((_DWORD *)v55.? + 1)); /*0x76991e*/
              *v27 = 0; /*0x769920*/
              v27[1] = 0; /*0x769922*/
              v27[2] = 0; /*0x769925*/
              v27[3] = 0; /*0x769928*/
              (*(void (__thiscall **)(int *))(v55.? + 8))(&v55.?); /*0x76992f*/
            }
            while ( (*(unsigned __int8 (__thiscall **)(int *))(v55.? + 4))(&v55.?) ); /*0x76993a*/
          }
          v55.? = (int)&VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769941*/
        }
        v28 = *(_DWORD *)&v51.m_1[3] + 16 * abstractFlags; /*0x76994e*/
        v29 = *(_DWORD *)(v28 + 8); /*0x769950*/
        if ( !v29 ) /*0x769955*/
          *(_DWORD *)(v28 + 12) = 0; /*0x769957*/
        v30 = v49; /*0x76995c*/
        v9 = v50; /*0x769960*/
        if ( v49 >= *(_DWORD *)v28 && v49 < v29 + *(_DWORD *)v28 ) /*0x76996c*/
        {
          v31 = *(_DWORD *)(v28 + 4); /*0x76996e*/
          if ( v50 >= v31 && v50 < v31 + *(_DWORD *)(v28 + 12) ) /*0x76997c*/
            goto LABEL_66; /*0x76997c*/
        }
        attachedTag = 1; /*0x769982*/
        v33 = 1; /*0x769989*/
        if ( v29 > 0 && *(int *)(v28 + 12) > 0 ) /*0x769990*/
        {
          v34 = *(_DWORD *)v28; /*0x769994*/
          v35 = *(_DWORD *)v28 <= v49; /*0x769997*/
          v36 = *(_DWORD *)(v28 + 4); /*0x769999*/
          v37 = *(TagClass **)(v28 + 8); /*0x76999c*/
          v55.attachedTag = v37; /*0x76999f*/
          v55.attachedBomb = *(BombClass **)(v28 + 12); /*0x7699a6*/
          if ( !v35 ) /*0x7699aa*/
          {
            v37 = (TagClass *)((char *)v37 + v34 - v49); /*0x7699ae*/
            v34 = v49; /*0x7699b0*/
            v55.attachedTag = v37; /*0x7699b2*/
          }
          if ( v36 > v50 ) /*0x7699b8*/
          {
            v38 = (BombClass *)((char *)v55.attachedBomb + v36 - v50); /*0x7699c0*/
            v36 = v50; /*0x7699c2*/
            v55.attachedBomb = v38; /*0x7699c4*/
          }
          if ( (int)v37 + v34 < v49 + 1 ) /*0x7699cf*/
            v55.attachedTag = (TagClass *)(v49 - v34 + 2); /*0x7699d6*/
          attachedBomb = v55.attachedBomb; /*0x7699da*/
          if ( (int)v55.attachedBomb + v36 < v50 + 1 ) /*0x7699e6*/
            attachedBomb = (BombClass *)(v50 - v36 + 2); /*0x7699ed*/
          v9 = v36; /*0x7699ef*/
          v30 = v34; /*0x7699f1*/
          attachedTag = (int)v55.attachedTag; /*0x7699f3*/
          v33 = (int)attachedBomb; /*0x7699f7*/
        }
        *(_DWORD *)v28 = v30; /*0x7699fb*/
        *(_DWORD *)(v28 + 4) = v9; /*0x7699fd*/
        *(_DWORD *)(v28 + 8) = attachedTag; /*0x769a00*/
        *(_DWORD *)(v28 + 12) = v33; /*0x769a03*/
      }
      v9 = v50; /*0x769a06*/
      v30 = v49; /*0x769a0a*/
LABEL_66:
      vtable0 = v55.AbstractClass; /*0x769a0e*/
      v49 = v30 + 1; /*0x769a19*/
      if ( v30 + 1 >= v55.? ) /*0x769a1d*/
        goto LABEL_67; /*0x769a1d*/
    }
  }
LABEL_68:
  _769D70 = Map_Load_769D70(&v55.?, (int)&v51); /*0x769a34*/
  Map_Load_769C20((ObjectClass *)&v55.?, (int)_769D70); /*0x769a46*/
  v41 = 0; /*0x769a4f*/
  if ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ) /*0x769a55*/
  {
    v42 = 0; /*0x769a60*/
    do /*0x769b22*/
    {
      v43 = FormatStringInt((char **)&v55.owningHouseIndex, v41, 2); /*0x769a6a*/
      ConcatStringAlloc((char **)&v55, (const char **)v55.ambientSoundController[0], v43); /*0x769a78*/
      DeleteAndZero((ObjectClass *)&v55.owningHouseIndex); /*0x769a81*/
      FromStringInt((char **)&v55.?, (int)g_DisplayWidth); /*0x769a90*/
      _7694C0 = Map_Load_7694C0((ObjectClass *)((char *)Block + v42), &v55.?); /*0x769aa0*/
      v45 = (ObjectClass *)_7694C0[1]; /*0x769aa9*/
      v55.fallRate = *_7694C0; /*0x769aac*/
      v55.nextObject = v45; /*0x769ab0*/
      v46 = String::Assign((String *)&v55.?, aTarget_0); /*0x769acc*/
      v47 = String::Concat((String *)v46, (char **)&v55.?, (char **)&v55.?); /*0x769ad3*/
      INIClass::GetInt((char *)&v55.ambientSoundController[1], (char **)&v55, v47, &v55.fallRate); /*0x769ae2*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769aeb*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769af4*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x769b01*/
      ++v41; /*0x769b08*/
      v42 += 12; /*0x769b09*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769b0c*/
      DeleteAndZero(&v55); /*0x769b15*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769b22*/
  }
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)2); /*0x769b3b*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b4c*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aCodeWdtmapmdIn, (CHAR *)2); /*0x769b5f*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b70*/
  v55.? = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769b79*/
  *(_DWORD *)v51.__tail_10 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x769b81*/
  Map_WorldDominationTour_43::ddtor((int)v51.__tail_10); /*0x769b89*/
  *(_DWORD *)v51.__pad_0 = &VectorClass<TRect<int>>::`vftable'; /*0x769b92*/
  MSEngine::ddtor(&v51); /*0x769b9a*/
  BufferIOFileClass::Destruct(&v56); /*0x769ba6*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v55.ambientSoundController[1]); /*0x769baf*/
  return BufferIOFileClass::Destruct((BufferIOFileClass *)&v55.needsRedraw); /*0x769bc0*/
}



// ==== 0x00769BD0  MSFrameAnim::QueryInterface  this=MSFrameAnim  sig=csp ====
_DWORD *__thiscall MSFrameAnim::QueryInterface(MSFrameAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &MSFrameAnim::`vftable'; /*0x769bd3*/
  VtableStub::5CB6C0(this); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(this); /*0x769be6*/
  return this->__pad_0; /*0x769bf0*/
}



// ==== 0x00769C00  Map_WorldDominationTour::QueryInterface  this=Map@WorldDominationTour  sig=csp ====
void *__thiscall Map_WorldDominationTour::QueryInterface(Map_WorldDominationTour *this, char a2)
{
  WorldDomination::SetupTerritoryNodes((int)this); /*0x769c03*/
  if ( (a2 & 1) != 0 ) /*0x769c0d*/
    __3_YAXPAX_Z(this); /*0x769c10*/
  return this; /*0x769c1a*/
}



// ==== 0x00769C20  ObjectClass::Map_Load_769C20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Map_Load_769C20(ObjectClass *this, int a2)
{
  this->? = *(void **)(a2 + 4); /*0x769c29*/
  this->? = *(void **)(a2 + 8); /*0x769c2f*/
  return &this->AbstractClass; /*0x769c32*/
}



// ==== 0x00769C40  ObjectClass::??0Iostream_init_QAE_XZ_9  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_9(Iostream_init *this)
{
  return this; /*0x769c42*/
}



// ==== 0x00769C50  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::initAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::initAnimation(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769c56*/
  this->m_10 = 0; /*0x769c59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769c60*/
  {
    result = (**v2)(v2, 3); /*0x769c6d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769c6f*/
  }
  BYTE1(this->m_C) = 0; /*0x769c72*/
  this->m_8 = 0; /*0x769c75*/
  return result; /*0x769c78*/
}



// ==== 0x00769C80  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::startAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::startAnimation(
        _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769c80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x769c95*/
  else
    return 0; /*0x769c87*/
}



// ==== 0x00769CA0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::Seek(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x769cad*/
  ComPtr::Constructor((ComPtr *)a2); /*0x769cb2*/
  *a2 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769cb7*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x769cc3*/
  return a2; /*0x769cca*/
}



// ==== 0x00769CD0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::stopAnimation  this=DynamicVector  sig=csp ====
void __thiscall MSFrameAnim::stopAnimation(_DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x769cd6*/
  this->m_10 = 0; /*0x769cd9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769ce0*/
  {
    __3_YAXPAX_Z(v2); /*0x769ce6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769cee*/
  }
  BYTE1(this->m_C) = 0; /*0x769cf1*/
  this->m_8 = 0; /*0x769cf4*/
}



// ==== 0x00769D00  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::pauseAnimation  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFrameAnim::pauseAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769d00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x769d15*/
  else
    return 0; /*0x769d07*/
}



// ==== 0x00769D20  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28::Seek(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x769d2a*/
}



// ==== 0x00769D30  _VectorClass_VCentroid_WorldDominationTour::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_43::Seek(
        _VectorClass_VCentroid_WorldDominationTour *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x769d3b*/
  *a2 = *v3; /*0x769d46*/
  a2[1] = v3[1]; /*0x769d4b*/
  a2[2] = v3[2]; /*0x769d52*/
  return a2; /*0x769d4e*/
}



// ==== 0x00769D60  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall Map_WorldDominationTour_38::AddRef(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8); /*0x769d6d*/
}



// ==== 0x00769D70  Map_Load_769D70  this=VectorCursor  sig=csp ====
_DWORD *__fastcall sub_769D70(_DWORD *a1, int a2)
{
  a1[1] = a2; /*0x769d72*/
  a1[2] = 0; /*0x769d75*/
  *a1 = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769d7c*/
  return a1; /*0x769d82*/
}



// ==== 0x00769D90  MSFrameAnim::resumeAnimation  this=rc_ptr  sig=csp ====
_DWORD *__thiscall MSFrameAnim::resumeAnimation(MSFrameAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x769d93*/
  ComPtr::Release((ComPtr *)this); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(this); /*0x769da6*/
  return this->__pad_0; /*0x769db0*/
}



// ==== 0x00769DC0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Constructor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::Constructor(
        _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<TRect<int>,VectorClass<TRect<int>>>::`vftable'; /*0x769dc9*/
  if ( (a2 & 1) != 0 ) /*0x769dcf*/
    __3_YAXPAX_Z(this); /*0x769dd2*/
  return this->__pad_0; /*0x769ddc*/
}



// ==== 0x00769DE0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20::AddRef(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x769de6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x769def*/
  {
    v3 = 0; /*0x769df1*/
    if ( m_8 <= 0 ) /*0x769df5*/
      return 1; /*0x769e1b*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x769dfd*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x769e00*/
    {
      ++v3; /*0x769e0b*/
      v4 += 2; /*0x769e0f*/
      if ( v3 >= m_8 ) /*0x769e14*/
        return 1; /*0x769e14*/
    }
  }
  return 0; /*0x769e16*/
}



// ==== 0x00769E30  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_20::Release(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769e33*/
  if ( !a2 ) /*0x769e3d*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x769f3d*/
    return 1; /*0x769f43*/
  }
  LOBYTE(this->m_C) = 0; /*0x769e47*/
  if ( a3 ) /*0x769e4d*/
  {
    *a3 = a2; /*0x769e93*/
    v6 = (ComPtr *)(a3 + 1); /*0x769e95*/
    if ( a2 - 1 >= 0 ) /*0x769ea1*/
    {
      v9 = a2; /*0x769ea3*/
      do /*0x769eb7*/
      {
        ComPtr::Constructor(v6); /*0x769ea8*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769ead*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769eb3*/
        --v9; /*0x769eb6*/
      }
      while ( v9 ); /*0x769eb7*/
      v6 = (ComPtr *)(a3 + 1); /*0x769eb9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x769e57*/
    if ( !v5 ) /*0x769e61*/
    {
      v8 = 0; /*0x769e8f*/
      goto LABEL_14; /*0x769e91*/
    }
    *v5 = a2; /*0x769e63*/
    v6 = (ComPtr *)(v5 + 1); /*0x769e65*/
    v13 = (ComPtr *)(v5 + 1); /*0x769e6b*/
    if ( a2 - 1 >= 0 ) /*0x769e71*/
    {
      v7 = a2; /*0x769e73*/
      do /*0x769e87*/
      {
        ComPtr::Constructor(v6); /*0x769e78*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x769e7d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769e83*/
        --v7; /*0x769e86*/
      }
      while ( v7 ); /*0x769e87*/
      v6 = v13; /*0x769e89*/
    }
  }
  v8 = v6; /*0x769ebd*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x769ebf*/
  if ( !v8 ) /*0x769ec5*/
    return 0; /*0x769eca*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x769ed1*/
  {
    if ( a2 >= this->m_8 ) /*0x769edd*/
      m_8 = this->m_8; /*0x769edf*/
    for ( i = 0; i < m_8; ++i ) /*0x769ee5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x769ef2*/
    if ( BYTE1(this->m_C) ) /*0x769efc*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769f03*/
      if ( v12 ) /*0x769f08*/
        (**v12)(v12, 3); /*0x769f0e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x769f10*/
    }
    m_8 = a2; /*0x769f17*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x769f26*/
  this->m_8 = m_8; /*0x769f29*/
  BYTE1(this->m_C) = a3 == 0; /*0x769f2c*/
  return 1; /*0x769ec7*/
}



// ==== 0x00769F50  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20::ddtor(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x769f56*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769f5d*/
  {
    result = (**v2)(v2, 3); /*0x769f6a*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x769f6c*/
  }
  BYTE1(this->m_C) = 0; /*0x769f6f*/
  this->m_8 = 0; /*0x769f72*/
  return result; /*0x769f75*/
}



// ==== 0x00769F80  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_20::Read(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x769f80*/
    return 0; /*0x769f88*/
  m_8 = this->m_8; /*0x769f8e*/
  result = 0; /*0x769f91*/
  if ( m_8 <= 0 ) /*0x769f95*/
    return -1; /*0x769fb0*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x769f9e*/
  {
    if ( ++result >= m_8 ) /*0x769fae*/
      return -1; /*0x769fae*/
  }
  return result; /*0x769f8a*/
}



// ==== 0x00769FC0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_20::Write(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x769fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x769fd5*/
  else
    return 0; /*0x769fc7*/
}



// ==== 0x00769FE0  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setFrameRate  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::setFrameRate(
        _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  MSFrameAnim *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
    LOBYTE(this->m_C) = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      v8 = (ComPtr *)(a3 + 1); /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ComPtr::Constructor(v8); /*0x76a056*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a05b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76a061*/
          --v9; /*0x76a064*/
        }
        while ( v9 ); /*0x76a065*/
        v8 = (ComPtr *)(a3 + 1); /*0x76a067*/
      }
      v6 = v8; /*0x76a06b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = (ComPtr *)(v5 + 1); /*0x76a015*/
        v7 = (MSFrameAnim *)(v5 + 1); /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          v14 = a2; /*0x76a022*/
          do /*0x76a039*/
          {
            MSFrameAnim::drawFrame(v7); /*0x76a028*/
            v7 = (MSFrameAnim *)((char *)v7 + 8); /*0x76a031*/
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
    LOBYTE(this->m_C) = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76a075*/
    {
      if ( a2 >= this->m_8 ) /*0x76a081*/
        m_8 = this->m_8; /*0x76a083*/
      for ( i = 0; i < m_8; ++i ) /*0x76a089*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76a096*/
      if ( BYTE1(this->m_C) ) /*0x76a0a0*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76a0b4*/
      }
      m_8 = a2; /*0x76a0bb*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x76a0ca*/
    this->m_8 = m_8; /*0x76a0cd*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a0d9*/
  }
  v12 = this->m_8; /*0x76a0dc*/
  if ( v12 < this->m_10 ) /*0x76a0e4*/
    this->m_10 = v12; /*0x76a0e6*/
  return 1; /*0x76a0e9*/
}



// ==== 0x0076A100  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::getCurrentFrame  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::getCurrentFrame(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76a100*/
  result = 0; /*0x76a103*/
  if ( m_10 <= 0 ) /*0x76a108*/
    return -1; /*0x76a123*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76a111*/
  {
    if ( ++result >= m_10 ) /*0x76a121*/
      return -1; /*0x76a121*/
  }
  return result; /*0x76a126*/
}



// ==== 0x0076A130  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28::AddRef(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x76a132*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76a13d*/
  {
    v3 = 0; /*0x76a13f*/
    if ( m_8 <= 0 ) /*0x76a143*/
      return 1; /*0x76a163*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x76a145*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x76a14b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x76a154*/
    {
      ++v3; /*0x76a156*/
      ++v4; /*0x76a157*/
      if ( v3 >= m_8 ) /*0x76a15c*/
        return 1; /*0x76a15c*/
    }
  }
  return 0; /*0x76a15e*/
}



// ==== 0x0076A170  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_28::Release(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x76a17c*/
  {
    LOBYTE(this->m_C) = 0; /*0x76a186*/
    if ( a3 ) /*0x76a18c*/
      v4 = a3; /*0x76a1a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76a19e*/
    LOBYTE(this->m_C) = 1; /*0x76a1a6*/
    if ( v4 ) /*0x76a1aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x76a1b5*/
      {
        m_8 = this->m_8; /*0x76a1bc*/
        if ( a2 < m_8 ) /*0x76a1c1*/
          m_8 = a2; /*0x76a1c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76a1c9*/
          ++i; /*0x76a1ce*/
        if ( BYTE1(this->m_C) ) /*0x76a1db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a1e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76a1ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x76a1f7*/
      this->m_8 = a2; /*0x76a1ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x76a202*/
      return 1; /*0x76a208*/
    }
    else
    {
      return 0; /*0x76a1af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a212*/
    return 1; /*0x76a218*/
  }
}



// ==== 0x0076A220  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_28::ddtor(_VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76a22d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a233*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a23b*/
  }
  BYTE1(this->m_C) = 0; /*0x76a23e*/
  this->m_8 = 0; /*0x76a241*/
}



// ==== 0x0076A250  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_28::Read(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76a250*/
    return 0; /*0x76a258*/
  m_8 = this->m_8; /*0x76a25e*/
  result = 0; /*0x76a261*/
  if ( m_8 <= 0 ) /*0x76a265*/
    return -1; /*0x76a27c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76a26b*/
  {
    if ( ++result >= m_8 ) /*0x76a27a*/
      return -1; /*0x76a27a*/
  }
  return result; /*0x76a25a*/
}



// ==== 0x0076A290  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_28::Write(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76a290*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x76a2a5*/
  else
    return 0; /*0x76a297*/
}



// ==== 0x0076A2B0  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::loopAnimation  this=DynamicVector  sig=csp ====
char __thiscall MSFrameAnim::loopAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x76a2bc*/
  {
    LOBYTE(this->m_C) = 0; /*0x76a2c2*/
    if ( a3 ) /*0x76a2c8*/
      v4 = a3; /*0x76a2de*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x76a2da*/
    LOBYTE(this->m_C) = 1; /*0x76a2e2*/
    if ( !v4 ) /*0x76a2e6*/
      return 0; /*0x76a35a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76a2e8*/
    {
      m_8 = this->m_8; /*0x76a2ef*/
      if ( a2 < m_8 ) /*0x76a2f4*/
        m_8 = a2; /*0x76a2f6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x76a2fc*/
        ++i; /*0x76a301*/
      if ( BYTE1(this->m_C) ) /*0x76a30e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a319*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76a321*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x76a32a*/
    this->m_8 = a2; /*0x76a332*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a335*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *))(*(_DWORD *)this->__pad_0 /*0x76a33e*/
                                                                                              + 12))(this);
  }
  v7 = this->m_8; /*0x76a341*/
  if ( v7 < this->m_10 ) /*0x76a349*/
    this->m_10 = v7; /*0x76a34b*/
  return 1; /*0x76a34e*/
}



// ==== 0x0076A360  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::resetAnimation  this=DynamicVector  sig=csp ====
int __thiscall MSFrameAnim::resetAnimation(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76a360*/
  result = 0; /*0x76a363*/
  if ( m_10 <= 0 ) /*0x76a368*/
    return -1; /*0x76a37f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x76a36e*/
  {
    if ( ++result >= m_10 ) /*0x76a37d*/
      return -1; /*0x76a37d*/
  }
  return result; /*0x76a382*/
}



// ==== 0x0076A390  _VectorClass_VCentroid_WorldDominationTour::AddRef  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43::AddRef(_VectorClass_VCentroid_WorldDominationTour *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x76a39b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76a3a0*/
  {
    v3 = 0; /*0x76a3a2*/
    if ( m_8 <= 0 ) /*0x76a3a6*/
      return 1; /*0x76a3e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x76a3a8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x76a3ab*/
    v6 = (_DWORD *)(v4 + 8); /*0x76a3ae*/
    v7 = v4 - (_DWORD)v5; /*0x76a3b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x76a3cd*/
    {
      ++v3; /*0x76a3cf*/
      v6 += 3; /*0x76a3d0*/
      v5 += 3; /*0x76a3d3*/
      if ( v3 >= m_8 ) /*0x76a3d8*/
        return 1; /*0x76a3d8*/
    }
  }
  return 0; /*0x76a3da*/
}



// ==== 0x0076A3F0  _VectorClass_VCentroid_WorldDominationTour::Release  this=VectorClass  sig=csp ====
char __thiscall Map_WorldDominationTour_43::Release(_VectorClass_VCentroid_WorldDominationTour *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x76a3f2*/
  if ( a2 ) /*0x76a3fe*/
  {
    v5 = a3; /*0x76a404*/
    LOBYTE(this->m_C) = 0; /*0x76a408*/
    if ( a3 ) /*0x76a40d*/
    {
      if ( a2 - 1 >= 0 ) /*0x76a449*/
      {
        v9 = a3 + 8; /*0x76a44b*/
        v10 = a2; /*0x76a44e*/
        do /*0x76a45b*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x76a44f*/
          *((_DWORD *)v9 - 1) = 0; /*0x76a452*/
          *(_DWORD *)v9 = 0; /*0x76a455*/
          v9 += 12; /*0x76a457*/
          --v10; /*0x76a45a*/
        }
        while ( v10 ); /*0x76a45b*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(12 * a2); /*0x76a417*/
      if ( v6 ) /*0x76a421*/
      {
        if ( a2 - 1 >= 0 ) /*0x76a428*/
        {
          v7 = (_DWORD *)(v6 + 8); /*0x76a42a*/
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
        v5 = (char *)v6; /*0x76a43c*/
      }
      else
      {
        v5 = 0; /*0x76a440*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x76a45f*/
    if ( v5 ) /*0x76a463*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x76a46e*/
      {
        m_8 = this->m_8; /*0x76a473*/
        if ( a2 < m_8 ) /*0x76a478*/
          m_8 = a2; /*0x76a47a*/
        if ( m_8 > 0 ) /*0x76a47e*/
        {
          v13 = 0; /*0x76a480*/
          do /*0x76a4a0*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x76a487*/
            v15 = &v5[v13]; /*0x76a489*/
            v13 += 12; /*0x76a48c*/
            --m_8; /*0x76a48f*/
            *(_DWORD *)v15 = *v14; /*0x76a492*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x76a497*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x76a49d*/
          }
          while ( m_8 ); /*0x76a4a0*/
          v3 = a2; /*0x76a4a2*/
        }
        if ( BYTE1(this->m_C) ) /*0x76a4a8*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a4b1*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x76a4b9*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x76a4c4*/
      this->m_8 = v3; /*0x76a4ca*/
      BYTE1(this->m_C) = a3 == 0; /*0x76a4cd*/
      return 1; /*0x76a4d3*/
    }
    else
    {
      return 0; /*0x76a468*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VCentroid_WorldDominationTour *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76a4dd*/
    return 1; /*0x76a4e3*/
  }
}



// ==== 0x0076A4F0  _VectorClass_VCentroid_WorldDominationTour::ddtor  this=VectorClass  sig=csp ====
void __thiscall Map_WorldDominationTour_43::ddtor(_VectorClass_VCentroid_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x76a4fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a503*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a50b*/
  }
  BYTE1(this->m_C) = 0; /*0x76a50e*/
  this->m_8 = 0; /*0x76a511*/
}



// ==== 0x0076A520  _VectorClass_VCentroid_WorldDominationTour::Read  this=VectorClass  sig=csp ====
int __thiscall Map_WorldDominationTour_43::Read(_VectorClass_VCentroid_WorldDominationTour *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76a520*/
    return 0; /*0x76a52e*/
  m_8 = this->m_8; /*0x76a534*/
  result = 0; /*0x76a537*/
  if ( m_8 <= 0 ) /*0x76a53b*/
    return -1; /*0x76a566*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x76a541*/
  {
    if ( ++result >= m_8 ) /*0x76a564*/
      return -1; /*0x76a564*/
  }
  return result; /*0x76a52b*/
}



// ==== 0x0076A570  _VectorClass_VCentroid_WorldDominationTour::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Map_WorldDominationTour_43::Write(_VectorClass_VCentroid_WorldDominationTour *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76a570*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x76a58e*/
  else
    return 0; /*0x76a577*/
}



// ==== 0x0076A5A0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38::Release(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  ++this->q008; /*0x76a5a2*/
  return this->__pad_0; /*0x76a5a5*/
}



// ==== 0x0076A5B0  _VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_38::ddtor(_VectorCursor_V_TRect_H_V_VectorClass_V_TRect_H *this)
{
  --this->q008; /*0x76a5b2*/
  return this->__pad_0; /*0x76a5b5*/
}



// ==== 0x0076A5C0  _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_20::QueryInterface(
        _VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a5c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a5c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a5d0*/
  {
    (**v3)(v3, 3); /*0x76a5df*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a5e1*/
  }
  BYTE1(this->m_C) = 0; /*0x76a5ec*/
  this->m_8 = 0; /*0x76a5f2*/
  if ( (a2 & 1) != 0 ) /*0x76a5f9*/
    __3_YAXPAX_Z(this); /*0x76a5fc*/
  return this->__pad_0; /*0x76a606*/
}



// ==== 0x0076A610  Map_WorldDominationTour::Constructor_0  this=Map_WorldDominationTour  sig=csp ====
ComPtr *__thiscall Map_WorldDominationTour_20::Constructor_0(Map_WorldDominationTour *this, char a2)
{
  int v3; // eax
  ComPtr *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76a61b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x76a61d*/
    v4 = (ComPtr *)(this - 1); /*0x76a621*/
    v5 = (ComPtr *)(this + 2 * v3); /*0x76a624*/
    v6 = v3 - 1; /*0x76a627*/
    if ( v6 >= 0 ) /*0x76a628*/
    {
      v7 = v6 + 1; /*0x76a62b*/
      do /*0x76a63f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76a62e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a633*/
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
    *this = (Map_WorldDominationTour)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a65a*/
    ComPtr::Release((ComPtr *)this); /*0x76a660*/
    if ( (a2 & 1) != 0 ) /*0x76a668*/
      __3_YAXPAX_Z(this); /*0x76a66b*/
    return (ComPtr *)this; /*0x76a673*/
  }
}



// ==== 0x0076A680  _DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::setPosition  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFrameAnim::setPosition(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76a683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a690*/
  {
    (**v3)(v3, 3); /*0x76a69f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a6a1*/
  }
  BYTE1(this->m_C) = 0; /*0x76a6ac*/
  this->m_8 = 0; /*0x76a6b2*/
  if ( (a2 & 1) != 0 ) /*0x76a6b9*/
    __3_YAXPAX_Z(this); /*0x76a6bc*/
  return this->__pad_0; /*0x76a6c6*/
}



// ==== 0x0076A6D0  _VectorClass_PAUAnimationPalette_Map_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_28::QueryInterface(
        _VectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a6d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76a6d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x76a6e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a6f0*/
  }
  BYTE1(this->m_C) = 0; /*0x76a6fb*/
  this->m_8 = 0; /*0x76a701*/
  if ( (a2 & 1) != 0 ) /*0x76a708*/
    __3_YAXPAX_Z(this); /*0x76a70b*/
  return this->__pad_0; /*0x76a715*/
}



// ==== 0x0076A720  _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour::setScale  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFrameAnim::setScale(
        _DynamicVectorClass_PAUAnimationPalette_Map_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a723*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76a726*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a730*/
  {
    __3_YAXPAX_Z(v3); /*0x76a738*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a740*/
  }
  BYTE1(this->m_C) = 0; /*0x76a74b*/
  this->m_8 = 0; /*0x76a751*/
  if ( (a2 & 1) != 0 ) /*0x76a758*/
    __3_YAXPAX_Z(this); /*0x76a75b*/
  return this->__pad_0; /*0x76a765*/
}



// ==== 0x0076A770  _VectorClass_VCentroid_WorldDominationTour::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Map_WorldDominationTour_43::QueryInterface(
        _VectorClass_VCentroid_WorldDominationTour *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a773*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WorldDominationTour::Centroid>::`vftable'; /*0x76a776*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76a780*/
  {
    __3_YAXPAX_Z(v3); /*0x76a788*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76a790*/
  }
  BYTE1(this->m_C) = 0; /*0x76a79b*/
  this->m_8 = 0; /*0x76a7a1*/
  if ( (a2 & 1) != 0 ) /*0x76a7a8*/
    __3_YAXPAX_Z(this); /*0x76a7ab*/
  return this->__pad_0; /*0x76a7b5*/
}



// ==== 0x0076A7C0  MSFrameAnim::drawFrame  this=rc_ptr  sig=csp ====
_DWORD *__thiscall MSFrameAnim::drawFrame(MSFrameAnim *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76a7c3*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a7c8*/
  return this->__pad_0; /*0x76a7d0*/
}



// ==== 0x0076A7E0  ObjectClass::ConstructWDTSelection_Create_767FB0_Create_Create  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_767FB0_Create_Create(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = a2; /*0x76a7e3*/
  this->? = 0; /*0x76a7ec*/
  this->? = (void *)a2; /*0x76a7f3*/
  LOBYTE(this->?) = 1; /*0x76a7f6*/
  BYTE1(this->?) = 0; /*0x76a7fa*/
  this->AbstractClass = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a7fe*/
  if ( !a2 ) /*0x76a805*/
    return &this->AbstractClass; /*0x76a805*/
  if ( !a3 ) /*0x76a811*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76a84b*/
    if ( v7 ) /*0x76a855*/
    {
      *v7 = a2; /*0x76a857*/
      v8 = v7 + 1; /*0x76a859*/
      v9 = (ComPtr *)(v7 + 1); /*0x76a85f*/
      if ( a2 - 1 >= 0 ) /*0x76a863*/
      {
        do /*0x76a879*/
        {
          ComPtr::Constructor(v9); /*0x76a86a*/
          *(_DWORD *)v9->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a86f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x76a875*/
          --v3; /*0x76a878*/
        }
        while ( v3 ); /*0x76a879*/
        this->? = v8; /*0x76a87c*/
        BYTE1(this->?) = 1; /*0x76a87f*/
        return &this->AbstractClass; /*0x76a888*/
      }
    }
    else
    {
      v8 = 0; /*0x76a88b*/
    }
    this->? = v8; /*0x76a88d*/
    BYTE1(this->?) = 1; /*0x76a890*/
    return &this->AbstractClass; /*0x76a895*/
  }
  *a3 = a2; /*0x76a813*/
  v5 = (ComPtr *)(a3 + 1); /*0x76a81b*/
  if ( a2 - 1 >= 0 ) /*0x76a81f*/
  {
    do /*0x76a835*/
    {
      ComPtr::Constructor(v5); /*0x76a826*/
      *(_DWORD *)v5->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a82b*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x76a831*/
      --v3; /*0x76a834*/
    }
    while ( v3 ); /*0x76a835*/
  }
  this->? = a3 + 1; /*0x76a838*/
  return &this->AbstractClass; /*0x76a837*/
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
_DWORD *__thiscall ParseWDTTerritories_Parse(ObjectClass *this)
{
  this->? = 0; /*0x76aaf7*/
  this->AbstractClass = &off_7F7220; /*0x76aafa*/
  this->? = 0; /*0x76ab00*/
  BYTE2(this->?) = 10; /*0x76ab03*/
  HIBYTE(this->?) = 10; /*0x76ab06*/
  LOWORD(this->?) = 10000; /*0x76ab09*/
  LOWORD(this->?) = 0; /*0x76ab0f*/
  BYTE1(this->?) = 0; /*0x76ab13*/
  BYTE2(this->?) = 0; /*0x76ab16*/
  HIBYTE(this->?) = 0; /*0x76ab19*/
  BYTE2(this->?) = 0; /*0x76ab1e*/
  BYTE1(this->occupant) = 0; /*0x76ab21*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x76ab24*/
  BYTE2(this->fallRate) = 0; /*0x76ab27*/
  BYTE1(this->nextObject) = 0; /*0x76ab2a*/
  LOBYTE(this->attachedTag) = 0; /*0x76ab2d*/
  LOBYTE(this->?) = 100; /*0x76ab35*/
  HIBYTE(this->?) = 100; /*0x76ab38*/
  BYTE2(this->occupant) = 100; /*0x76ab3b*/
  BYTE1(this->owningHouseIndex) = 100; /*0x76ab3e*/
  LOBYTE(this->fallRate) = 100; /*0x76ab41*/
  HIBYTE(this->fallRate) = 100; /*0x76ab44*/
  BYTE2(this->nextObject) = 100; /*0x76ab47*/
  BYTE1(this->attachedTag) = 100; /*0x76ab4a*/
  BYTE2(this->?) = 1; /*0x76ab4d*/
  HIBYTE(this->?) = 1; /*0x76ab51*/
  LOBYTE(this->?) = 2; /*0x76ab55*/
  LOBYTE(this->?) = 1; /*0x76ab59*/
  BYTE1(this->?) = 50; /*0x76ab5d*/
  LOBYTE(this->occupant) = 50; /*0x76ab60*/
  HIBYTE(this->occupant) = 50; /*0x76ab63*/
  BYTE2(this->owningHouseIndex) = 50; /*0x76ab66*/
  HIBYTE(this->owningHouseIndex) = 1; /*0x76ab69*/
  BYTE1(this->fallRate) = 50; /*0x76ab6d*/
  LOBYTE(this->nextObject) = 50; /*0x76ab70*/
  HIBYTE(this->nextObject) = 50; /*0x76ab73*/
  BYTE2(this->attachedTag) = 50; /*0x76ab76*/
  this->attachedBomb = (BombClass *)-1; /*0x76ab79*/
  this->ambientSoundController[0] = -1; /*0x76ab7c*/
  return &this->AbstractClass; /*0x76ab7f*/
}



// ==== 0x0076AB90  WDTTerritory::method_76AB90  this=WDTTerritory  sig=csp ====
void __thiscall sub_76AB90(WDTTerritory *this)
{
  this->m_0 = (int)&off_7F7220; /*0x76ab90*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76ab96*/
}



// ==== 0x0076ABA0  rc_ptr::Audio_Set  this=rc_ptr  sig=csp ====
_DWORD *__fastcall Audio_Set(rc_ptr *this, void *a2)
{
  char *v4; // eax
  char *WDT; // edi

  v4 = (char *)__2_YAPAXI_Z(0x4Cu); /*0x76aba8*/
  if ( v4 ) /*0x76abb2*/
    WDT = File::LoadWDT(v4, a2); /*0x76abbc*/
  else
    WDT = 0; /*0x76abc0*/
  ComPtr::Constructor((ComPtr *)this); /*0x76abc4*/
  *(_DWORD *)this = &rc_ptr<WDTState>::`vftable'; /*0x76abcb*/
  ComPtr::Set((ComPtr *)this, (int)WDT); /*0x76abd2*/
  return this; /*0x76abd9*/
}



// ==== 0x0076ABE0  WDTState::method_76ABE0  this=WDTState  sig=csp ====
_DWORD *__thiscall sub_76ABE0(WDTState *this)
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

  v2 = (char *)this + 44; /*0x76abef*/
  this->WDTState_field_0x04 = 0; /*0x76abf2*/
  v13 = 10; /*0x76abf7*/
  this->q004 = 10; /*0x76abfb*/
  *((_BYTE *)this + 56) = 1; /*0x76ac02*/
  v10 = 1; /*0x76ac05*/
  *((_DWORD *)this + 12) = 0; /*0x76ac09*/
  *((_DWORD *)this + 13) = 0; /*0x76ac0c*/
  *((_BYTE *)this + 57) = 0; /*0x76ac0f*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac12*/
  *((_DWORD *)this + 15) = 0; /*0x76ac18*/
  *(_DWORD *)this->__pad_0 = &WDTState::`vftable'; /*0x76ac1e*/
  *((_BYTE *)this + 20) = 0; /*0x76ac24*/
  *((_DWORD *)this + 6) = 0; /*0x76ac27*/
  *((_DWORD *)this + 8) = 0; /*0x76ac2a*/
  *((_DWORD *)this + 9) = 0; /*0x76ac2d*/
  *((_DWORD *)this + 10) = 1000000; /*0x76ac30*/
  v8 = 0; /*0x76ac37*/
  v9 = 0; /*0x76ac3b*/
  v11 = 0; /*0x76ac3f*/
  v7 = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac43*/
  v12 = 0; /*0x76ac4b*/
  sub_76B7B0((ObjectClass *)((char *)this + 44), &v7); /*0x76ac4f*/
  v3 = v13; /*0x76ac58*/
  *((_DWORD *)v2 + 4) = v12; /*0x76ac5c*/
  v4 = v8; /*0x76ac5f*/
  v5 = v8 == 0; /*0x76ac63*/
  *((_DWORD *)v2 + 5) = v3; /*0x76ac65*/
  v7 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76ac68*/
  if ( !v5 && v11 ) /*0x76ac76*/
    (**v4)(v4, 3); /*0x76ac7c*/
  *((_DWORD *)this + 17) = 0; /*0x76ac7e*/
  return this->__pad_0; /*0x76ac83*/
}



// ==== 0x0076AC90  File::LoadWDT  this=WDTState  sig=csp ====
char *__thiscall File::LoadWDT(char *this, u_short *a2)
{
  File *v3; // eax
  u_short *PaletteData; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // eax
  size_t v8; // ecx
  int v9; // eax
  size_t v10; // edx
  void *v11; // edi
  size_t v13; // [esp+10h] [ebp-1Ch] BYREF
  size_t v14; // [esp+14h] [ebp-18h] BYREF
  size_t Size; // [esp+18h] [ebp-14h] BYREF
  size_t v16; // [esp+1Ch] [ebp-10h] BYREF
  size_t v17; // [esp+20h] [ebp-Ch] BYREF
  void *Block; // [esp+24h] [ebp-8h]
  unsigned int v19; // [esp+28h] [ebp-4h] BYREF
  u_short *v20; // [esp+30h] [ebp+4h]

  this->q004 = 0; /*0x76ac9b*/
  *((_DWORD *)this + 12) = 0; /*0x76ac9e*/
  *((_DWORD *)this + 13) = 0; /*0x76aca1*/
  *(this + 56) = 1; /*0x76aca4*/
  *(this + 57) = 0; /*0x76aca8*/
  *((_DWORD *)this + 11) = &DynamicVectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76acab*/
  this->q004 = 10; /*0x76acb2*/
  *((_DWORD *)this + 15) = 0; /*0x76acb9*/
  *(_DWORD *)this = &WDTState::`vftable'; /*0x76acbe*/
  v3 = (File *)__2_YAPAXI_Z(0xCu); /*0x76acc4*/
  if ( v3 ) /*0x76acce*/
    PaletteData = File::LoadPaletteData(v3, a2); /*0x76acdc*/
  else
    PaletteData = 0; /*0x76ace0*/
  v5 = this + 28; /*0x76ace6*/
  v13 = 0; /*0x76acf2*/
  v14 = 0; /*0x76acf6*/
  Size = 0; /*0x76acfa*/
  v16 = 0; /*0x76acfe*/
  v17 = 0; /*0x76ad02*/
  v19 = 0; /*0x76ad06*/
  *((_DWORD *)this + 2) = 0; /*0x76ad0a*/
  *((_DWORD *)this + 3) = 0; /*0x76ad0d*/
  this->q004 = 0; /*0x76ad10*/
  *(this + 20) = 0; /*0x76ad13*/
  *((_DWORD *)this + 6) = 0; /*0x76ad16*/
  *((_DWORD *)this + 7) = 0; /*0x76ad19*/
  *((_DWORD *)this + 8) = 0; /*0x76ad1b*/
  *((_DWORD *)this + 9) = 0; /*0x76ad1e*/
  *((_DWORD *)this + 10) = 0; /*0x76ad21*/
  *((_DWORD *)this + 17) = 0; /*0x76ad24*/
  if ( (unsigned __int8)HashTable::FindChunk((HashTable *)PaletteData, aNack, 0, &v19) ) /*0x76ad27*/
  {
    if ( PaletteData ) /*0x76ad32*/
    {
LABEL_25:
      ResultNode::CleanupList((ResultNode *)PaletteData); /*0x76afa4*/
      __3_YAXPAX_Z(PaletteData); /*0x76afac*/
    }
  }
  else
  {
    if ( (unsigned __int8)HashTable::FindString((HashTable *)PaletteData, aTotk, (_DWORD *)this + 7) ) /*0x76ad45*/
    {
      v6 = *(_DWORD *)v5; /*0x76ad4e*/
      *(this + 72) = 1; /*0x76ad50*/
      *(_DWORD *)v5 = ++v6; /*0x76ad55*/
      *((_DWORD *)this + 9) = v6; /*0x76ad59*/
    }
    else
    {
      *(this + 72) = 0; /*0x76ad69*/
      HashTable::FindString((HashTable *)PaletteData, aCrtk, (_DWORD *)this + 9); /*0x76ad6c*/
      ++*((_DWORD *)this + 9); /*0x76ad7d*/
      HashTable::FindString((HashTable *)PaletteData, aCyln, (_DWORD *)this + 7); /*0x76ad80*/
      ++*(_DWORD *)v5; /*0x76ad85*/
    }
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, 0, &v17); /*0x76ad94*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, 0, &Size); /*0x76ada6*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, 0, &v16); /*0x76adb8*/
    if ( !*(this + 72) ) /*0x76adbd*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, 0, &v13); /*0x76adcf*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, 0, &v14); /*0x76ade1*/
    *((_DWORD *)this + 2) = __2_YAPAXI_Z(Size); /*0x76adf0*/
    v7 = __2_YAPAXI_Z(v16); /*0x76adf8*/
    v8 = v17; /*0x76adfd*/
    *((_DWORD *)this + 3) = v7; /*0x76ae01*/
    v9 = __2_YAPAXI_Z(v8); /*0x76ae05*/
    v10 = v14; /*0x76ae0a*/
    this->q004 = v9; /*0x76ae0e*/
    Block = (void *)__2_YAPAXI_Z(v10); /*0x76ae17*/
    v20 = 0; /*0x76ae23*/
    if ( !*(this + 72) ) /*0x76ae1b*/
    {
      v20 = (u_short *)__2_YAPAXI_Z(v13); /*0x76ae40*/
      memset(v20, 0, v13); /*0x76ae47*/
    }
    memset(*((void **)this + 2), 0, Size); /*0x76ae5e*/
    memset(*((void **)this + 3), 0, v16); /*0x76ae75*/
    memset(*((void **)this + 4), 0, v17); /*0x76ae8c*/
    memset(Block, 0, v14); /*0x76aea4*/
    File::FindByPrefix((File *)PaletteData, aCmid, this + 20); /*0x76aeb8*/
    HashTable::FindString((HashTable *)PaletteData, aCyid, (_DWORD *)this + 6); /*0x76aec8*/
    if ( *(this + 72) ) /*0x76aecd*/
      *((_DWORD *)this + 10) = 0; /*0x76aed2*/
    else
      HashTable::FindString((HashTable *)PaletteData, aTicc, (_DWORD *)this + 10); /*0x76aee2*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, *((void **)this + 2), &Size); /*0x76aef7*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, *((void **)this + 3), &v16); /*0x76af0c*/
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, *((void **)this + 4), &v17); /*0x76af21*/
    if ( !*(this + 72) ) /*0x76af26*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, v20, &v13); /*0x76af3c*/
    v11 = Block; /*0x76af41*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, Block, &v14); /*0x76af52*/
    if ( *(this + 72) ) /*0x76af57*/
      *((_DWORD *)this + 8) = 30; /*0x76af6f*/
    else
      ParseWDTTerritories((int)this, (int)v20, v13); /*0x76af68*/
    File::LoadWDTDecompress((File *)this, (int)v11, v14); /*0x76af7e*/
    __3_YAXPAX_Z(v11); /*0x76af84*/
    if ( !*(this + 72) ) /*0x76af89*/
      __3_YAXPAX_Z(v20); /*0x76af98*/
    if ( PaletteData ) /*0x76afa2*/
      goto LABEL_25; /*0x76afa2*/
  }
  return this; /*0x76afb6*/
}



// ==== 0x0076AFC0  WDTState::Constructor_WDTState  this=WDTState  sig=csp ====
void __thiscall WDTState::Constructor_WDTState(ReferenceCounted *this)
{
  int v2; // eax
  ReferenceCounted *v3; // ebp
  int i; // edi
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 11); /*0x76afc4*/
  v3 = this + 11; /*0x76afc7*/
  *this = (ReferenceCounted)&WDTState::`vftable'; /*0x76afcc*/
  (*(void (__thiscall **)(ReferenceCounted *))(v2 + 12))(this + 11); /*0x76afd2*/
  if ( *((_DWORD *)this + 3) ) /*0x76afd5*/
    __3_YAXPAX_Z(*((void **)this + 3)); /*0x76afdd*/
  if ( *((_DWORD *)this + 2) ) /*0x76afe5*/
    __3_YAXPAX_Z(*((void **)this + 2)); /*0x76afed*/
  if ( this->q004 ) /*0x76aff5*/
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x76affd*/
  if ( *((_DWORD *)this + 17) ) /*0x76b005*/
  {
    for ( i = 0; i < *((_DWORD *)this + 9); ++i ) /*0x76b014*/
    {
      v5 = *((_DWORD *)this + 17); /*0x76b016*/
      if ( *(_DWORD *)(v5 + 4 * i) ) /*0x76b019*/
        __3_YAXPAX_Z(*(void **)(v5 + 4 * i)); /*0x76b021*/
    }
    __3_YAXPAX_Z(*((void **)this + 17)); /*0x76b035*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))v3[1]; /*0x76b03e*/
  *v3 = (ReferenceCounted)&VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76b041*/
  if ( v6 && v3[3].__tail_0[1] ) /*0x76b04c*/
  {
    (**v6)(v6, 3); /*0x76b05b*/
    v3[1] = 0; /*0x76b05d*/
  }
  v3[3].__tail_0[1] = 0; /*0x76b066*/
  v3[2] = 0; /*0x76b06a*/
  ReferenceCounted::Constructor(this); /*0x76b071*/
}



// ==== 0x0076B080  ComStreamClass::initStream  this=ComStreamClass  sig=csp ====
bool __thiscall ComStreamClass::initStream(ComStreamClass *this)
{
  return *((_DWORD *)this + 17) != 0; /*0x76b088*/
}



// ==== 0x0076B090  ComStreamClass::closeStream  this=ComStreamClass  sig=csp ====
char __thiscall ComStreamClass::closeStream(ComStreamClass *this)
{
  return *((_BYTE *)this + 72); /*0x76b093*/
}



// ==== 0x0076B0A0  File::LoadWDTDecompress  this=File  sig=csp ====
char __thiscall File::LoadWDTDecompress(File *this, int a2, int a3)
{
  int v4; // eax
  unsigned int i; // edi
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

  v4 = *(_DWORD *)&this->__pad_6[30]; /*0x76b0a7*/
  if ( 4 * a3 < (unsigned int)(v4 * *(_DWORD *)&this->__pad_6[26]) ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  *((_DWORD *)this + 17) = __2_YAPAXI_Z(4 * v4); /*0x76b0c7*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_6[30]; ++i ) /*0x76b0ca*/
    *(_DWORD *)(*((_DWORD *)this + 17) + 4 * i) = __2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[26]); /*0x76b0e5*/
  v7 = 0; /*0x76b0f3*/
  v8 = 0; /*0x76b0f5*/
  v9 = 0; /*0x76b0f7*/
  v16 = 0; /*0x76b0fb*/
  if ( *(_DWORD *)&this->__pad_6[30] ) /*0x76b0f0*/
  {
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( *(_DWORD *)&this->__pad_6[26] ) /*0x76b107*/
        break; /*0x76b107*/
LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( (unsigned int)++v9 >= *(_DWORD *)&this->__pad_6[30] ) /*0x76b16d*/
        return 1; /*0x76b16d*/
    }
    while ( 1 ) /*0x76b110*/
    {
      if ( !v8 ) /*0x76b113*/
      {
        v15 = *(unsigned __int8 *)(v7 + a2); /*0x76b130*/
        goto LABEL_14; /*0x76b130*/
      }
      v11 = v8 - 1; /*0x76b115*/
      if ( !v11 ) /*0x76b116*/
        break; /*0x76b116*/
      v12 = v11 == 1; /*0x76b118*/
      v13 = *(_BYTE *)(v7 + a2); /*0x76b119*/
      if ( v12 ) /*0x76b11c*/
      {
        LOBYTE(v15) = v13 >> 4; /*0x76b123*/
LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
LABEL_15:
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 17) + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( (unsigned int)++v10 >= *(_DWORD *)&this->__pad_6[26] ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    LOBYTE(v15) = *(_BYTE *)(v7 + a2) >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return 1; /*0x76b0b9*/
}



// ==== 0x0076B180  ObjectClass::ParseWDTTerritories  this=WDTState  sig=csp ====
char __thiscall WDTClass::ParseTerritories(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // esi
  void *v7; // eax
  int v8; // eax
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
  int v78; // [esp-4h] [ebp-1Ch]
  void **v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  *(_DWORD *)(this + 32) = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = __2_YAPAXI_Z(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(v8); /*0x76b1da*/
      LOBYTE(v9) = 0; /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(_DWORD *)(v80 + 8) = *(_DWORD *)(this + 32); /*0x76b1e9*/
      HIBYTE(v9) = *(_BYTE *)(v10 + a2 - 1); /*0x76b1ec*/
      *(_WORD *)(v80 + 12) = v9; /*0x76b1f4*/
      *(_WORD *)(v80 + 12) += *(unsigned __int8 *)(v10 + a2); /*0x76b201*/
      v11 = *(_BYTE *)(v10 + a2 + 1); /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(_BYTE *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      LOBYTE(v12) = 0; /*0x76b21c*/
      LOBYTE(v9) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b21e*/
      ++v10; /*0x76b221*/
      *(_BYTE *)(v80 + 15) = v9; /*0x76b222*/
      HIBYTE(v12) = *(_BYTE *)(v10 + a2); /*0x76b229*/
      ++v10; /*0x76b22c*/
      *(_WORD *)(v80 + 16) = v12; /*0x76b22d*/
      *(_WORD *)(v80 + 16) += *(unsigned __int8 *)(v10 + a2); /*0x76b23a*/
      v13 = *(unsigned __int8 *)(++v10 + a2) - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(_BYTE *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(_BYTE *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b269*/
      ++v10; /*0x76b26c*/
      *(_BYTE *)(v80 + 30) = v14; /*0x76b26d*/
      LOBYTE(v9) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b277*/
      ++v10; /*0x76b27a*/
      *(_BYTE *)(v80 + 18) = v9; /*0x76b27b*/
      LOBYTE(v13) = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b285*/
      ++v10; /*0x76b287*/
      *(_BYTE *)(v80 + 19) = v13; /*0x76b288*/
      v15 = *(_BYTE *)(v10 + a2) + 0x80; /*0x76b294*/
      ++v10; /*0x76b297*/
      *(_BYTE *)(v80 + 20) = v15; /*0x76b298*/
      v16 = *(unsigned __int8 *)(v10 + a2) - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(_DWORD *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( *(_BYTE *)(v17 + a2) <= 0x7Fu ) /*0x76b2b1*/
        v18 = *(_BYTE *)(v17 + a2); /*0x76b2bf*/
      else
        v18 = *(_BYTE *)(v17 + a2) + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(_BYTE *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( *(_BYTE *)(v19 + a2) <= 0x7Fu ) /*0x76b2d1*/
        v20 = *(_BYTE *)(v19 + a2); /*0x76b2df*/
      else
        v20 = *(_BYTE *)(v19 + a2) + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(_BYTE *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( *(_BYTE *)(v21 + a2) <= 0x7Fu ) /*0x76b2f1*/
        v22 = *(_BYTE *)(v21 + a2); /*0x76b2ff*/
      else
        v22 = *(_BYTE *)(v21 + a2) + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(_BYTE *)(v80 + 33) = v22; /*0x76b309*/
      if ( *(_BYTE *)(v23 + a2) <= 0x7Fu ) /*0x76b311*/
        v24 = *(_BYTE *)(v23 + a2); /*0x76b31f*/
      else
        v24 = *(_BYTE *)(v23 + a2) + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(_BYTE *)(v80 + 34) = v24; /*0x76b329*/
      if ( *(_BYTE *)(v25 + a2) <= 0x7Fu ) /*0x76b331*/
        v26 = *(_BYTE *)(v25 + a2); /*0x76b33f*/
      else
        v26 = *(_BYTE *)(v25 + a2) + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(_BYTE *)(v80 + 35) = v26; /*0x76b349*/
      if ( *(_BYTE *)(v27 + a2) <= 0x7Fu ) /*0x76b351*/
        v28 = *(_BYTE *)(v27 + a2); /*0x76b35f*/
      else
        v28 = *(_BYTE *)(v27 + a2) + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(_BYTE *)(v80 + 36) = v28; /*0x76b369*/
      if ( *(_BYTE *)(v29 + a2) <= 0x7Fu ) /*0x76b371*/
        v30 = *(_BYTE *)(v29 + a2); /*0x76b37f*/
      else
        v30 = *(_BYTE *)(v29 + a2) + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(_BYTE *)(v80 + 37) = v30; /*0x76b389*/
      if ( *(_BYTE *)(v31 + a2) <= 0x7Fu ) /*0x76b391*/
        v32 = *(_BYTE *)(v31 + a2); /*0x76b39f*/
      else
        v32 = *(_BYTE *)(v31 + a2) + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(_BYTE *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( *(_BYTE *)(v33 + a2) <= 0x7Fu ) /*0x76b3b1*/
        v34 = *(_BYTE *)(v33 + a2); /*0x76b3bf*/
      else
        v34 = *(_BYTE *)(v33 + a2) + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(_BYTE *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( *(_BYTE *)(v35 + a2) <= 0x7Fu ) /*0x76b3d1*/
        v36 = *(_BYTE *)(v35 + a2); /*0x76b3df*/
      else
        v36 = *(_BYTE *)(v35 + a2) + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(_BYTE *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( *(_BYTE *)(v37 + a2) <= 0x7Fu ) /*0x76b3f1*/
        v38 = *(_BYTE *)(v37 + a2); /*0x76b3ff*/
      else
        v38 = *(_BYTE *)(v37 + a2) + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(_BYTE *)(v80 + 44) = v38; /*0x76b409*/
      if ( *(_BYTE *)(v39 + a2) <= 0x7Fu ) /*0x76b411*/
        v40 = *(_BYTE *)(v39 + a2); /*0x76b41f*/
      else
        v40 = *(_BYTE *)(v39 + a2) + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(_BYTE *)(v80 + 45) = v40; /*0x76b429*/
      if ( *(_BYTE *)(v41 + a2) <= 0x7Fu ) /*0x76b431*/
        v42 = *(_BYTE *)(v41 + a2); /*0x76b43f*/
      else
        v42 = *(_BYTE *)(v41 + a2) + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(_BYTE *)(v80 + 46) = v42; /*0x76b449*/
      if ( *(_BYTE *)(v43 + a2) <= 0x7Fu ) /*0x76b451*/
        v44 = *(_BYTE *)(v43 + a2); /*0x76b45f*/
      else
        v44 = *(_BYTE *)(v43 + a2) + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(_BYTE *)(v80 + 47) = v44; /*0x76b469*/
      if ( *(_BYTE *)(v45 + a2) <= 0x7Fu ) /*0x76b471*/
        v46 = *(_BYTE *)(v45 + a2); /*0x76b47f*/
      else
        v46 = *(_BYTE *)(v45 + a2) + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(_BYTE *)(v80 + 48) = v46; /*0x76b489*/
      if ( *(_BYTE *)(v47 + a2) <= 0x7Fu ) /*0x76b491*/
        v48 = *(_BYTE *)(v47 + a2); /*0x76b49f*/
      else
        v48 = *(_BYTE *)(v47 + a2) + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(_BYTE *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( *(_BYTE *)(v49 + a2) <= 0x7Fu ) /*0x76b4b1*/
        v50 = *(_BYTE *)(v49 + a2); /*0x76b4bf*/
      else
        v50 = *(_BYTE *)(v49 + a2) + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(_BYTE *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( *(_BYTE *)(v51 + a2) <= 0x7Fu ) /*0x76b4d1*/
        v52 = *(_BYTE *)(v51 + a2); /*0x76b4df*/
      else
        v52 = *(_BYTE *)(v51 + a2) + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(_BYTE *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( *(_BYTE *)(v53 + a2) <= 0x7Fu ) /*0x76b4f1*/
        v54 = *(_BYTE *)(v53 + a2); /*0x76b4ff*/
      else
        v54 = *(_BYTE *)(v53 + a2) + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(_BYTE *)(v80 + 49) = v54; /*0x76b509*/
      if ( *(_BYTE *)(v55 + a2) <= 0x7Fu ) /*0x76b511*/
        v56 = *(_BYTE *)(v55 + a2); /*0x76b51f*/
      else
        v56 = *(_BYTE *)(v55 + a2) + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(_BYTE *)(v80 + 50) = v56; /*0x76b529*/
      if ( *(_BYTE *)(v57 + a2) <= 0x7Fu ) /*0x76b531*/
        v58 = *(_BYTE *)(v57 + a2); /*0x76b53f*/
      else
        v58 = *(_BYTE *)(v57 + a2) + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(_BYTE *)(v80 + 51) = v58; /*0x76b549*/
      if ( *(_BYTE *)(v59 + a2) <= 0x7Fu ) /*0x76b551*/
        v60 = *(_BYTE *)(v59 + a2); /*0x76b55f*/
      else
        v60 = *(_BYTE *)(v59 + a2) + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(_BYTE *)(v80 + 52) = v60; /*0x76b569*/
      if ( *(_BYTE *)(v61 + a2) <= 0x7Fu ) /*0x76b571*/
        v62 = *(_BYTE *)(v61 + a2); /*0x76b57f*/
      else
        v62 = *(_BYTE *)(v61 + a2) + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(_BYTE *)(v80 + 53) = v62; /*0x76b589*/
      if ( *(_BYTE *)(v63 + a2) <= 0x7Fu ) /*0x76b591*/
        v64 = *(_BYTE *)(v63 + a2); /*0x76b59f*/
      else
        v64 = *(_BYTE *)(v63 + a2) + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(_BYTE *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b5b7*/
      ++v65; /*0x76b5ba*/
      *(_DWORD *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(_DWORD *)(v80 + 60); /*0x76b5cb*/
      ++v65; /*0x76b5cd*/
      *(_DWORD *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(_DWORD *)(v80 + 60); /*0x76b5e0*/
      ++v65; /*0x76b5e2*/
      *(_DWORD *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = *(unsigned __int8 *)(v65 + a2) + *(_DWORD *)(v80 + 60); /*0x76b5f2*/
      ++v65; /*0x76b5f4*/
      *(_DWORD *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b603*/
      ++v65; /*0x76b606*/
      *(_DWORD *)(v80 + 56) = v70; /*0x76b607*/
      v71 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(_DWORD *)(v80 + 56); /*0x76b617*/
      ++v65; /*0x76b619*/
      *(_DWORD *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(_DWORD *)(v80 + 56); /*0x76b62c*/
      ++v65; /*0x76b62e*/
      *(_DWORD *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = *(unsigned __int8 *)(v65 + a2); /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(_DWORD *)(v80 + 56) += v73; /*0x76b641*/
      v74 = *(_DWORD *)(this + 52); /*0x76b644*/
      if ( *(_DWORD *)(this + 60) < v74 /*0x76b66c*/
        || (*(_BYTE *)(this + 57) || !v74)
        && (v75 = *(_DWORD *)(this + 64), v75 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 44) + 8))(this + 44, v75 + v74, 0) )
      {
        v76 = *(_DWORD *)(this + 60); /*0x76b673*/
        v78 = v80; /*0x76b67a*/
        *(_DWORD *)(this + 60) = v76 + 1; /*0x76b67e*/
        ComPtr::Set((_DWORD *)(*(_DWORD *)(this + 48) + 8 * v76), v78); /*0x76b687*/
      }
      v77 = *(_DWORD *)(this + 32); /*0x76b68c*/
      v79 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b68f*/
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
void *__thiscall WDTState::QueryInterface(WDTState *this, char a2)
{
  WDTState::Constructor_WDTState((ReferenceCounted *)this); /*0x76b6f3*/
  if ( (a2 & 1) != 0 ) /*0x76b6fd*/
    __3_YAXPAX_Z(this); /*0x76b700*/
  return this; /*0x76b70a*/
}



// ==== 0x0076B710  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4::ddtor(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b716*/
  this->m_10 = 0; /*0x76b719*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76b72f*/
  }
  BYTE1(this->m_C) = 0; /*0x76b732*/
  this->m_8 = 0; /*0x76b735*/
  return result; /*0x76b738*/
}



// ==== 0x0076B740  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall WDTState_4::Write(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76b740*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/
}



// ==== 0x0076B760  _VectorClass_V_rc_ptr_VWDTTerritory::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::Clear(
        _VectorClass_V_rc_ptr_VWDTTerritory *this,
        _DWORD *a2,
        int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x76b76d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x76b772*/
  *a2 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b777*/
  ComPtr::Set((ComPtr *)a2, *(_DWORD *)(v3 + 4)); /*0x76b783*/
  return a2; /*0x76b78a*/
}



// ==== 0x0076B790  rc_ptr::ParseWDTTerritories_Parse_76B790  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ParseWDTTerritories_Parse_76B790(rc_ptr *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76b793*/
  *(_DWORD *)this = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b79f*/
  ComPtr::Set((ComPtr *)this, a2); /*0x76b7a5*/
  return this; /*0x76b7ac*/
}



// ==== 0x0076B7B0  ObjectClass::method_76B7B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76B7B0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  ComPtr *v7; // edi
  void *v8; // eax
  void *vtable2; // eax
  int v10; // edi

  v2 = a2; /*0x76b7b1*/
  if ( this == (ObjectClass *)a2 ) /*0x76b7bc*/
    return &this->AbstractClass; /*0x76b7bc*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x76b7c4*/
  v4 = a2[2]; /*0x76b7c7*/
  this->? = (void *)v4; /*0x76b7cc*/
  if ( !v4 ) /*0x76b7cf*/
  {
    this->? = 0; /*0x76b855*/
    BYTE1(this->?) = 0; /*0x76b85c*/
    return &this->AbstractClass; /*0x76b860*/
  }
  v5 = (int *)__2_YAPAXI_Z(8 * v4 + 4); /*0x76b7dd*/
  if ( v5 ) /*0x76b7e7*/
  {
    *v5 = v4; /*0x76b7e9*/
    v6 = v5 + 1; /*0x76b7eb*/
    v7 = (ComPtr *)(v5 + 1); /*0x76b7f1*/
    if ( v4 - 1 >= 0 ) /*0x76b7f5*/
    {
      do /*0x76b80b*/
      {
        ComPtr::Constructor(v7); /*0x76b7fc*/
        *(_DWORD *)v7->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b801*/
        v7 = (ComPtr *)((char *)v7 + 8); /*0x76b807*/
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
  this->? = v8; /*0x76b819*/
  if ( !v8 ) /*0x76b81c*/
    return &this->AbstractClass; /*0x76b81c*/
  vtable2 = this->?; /*0x76b81e*/
  v10 = 0; /*0x76b821*/
  BYTE1(this->?) = 1; /*0x76b825*/
  if ( (int)vtable2 <= 0 ) /*0x76b829*/
    return &this->AbstractClass; /*0x76b829*/
  do /*0x76b84a*/
  {
    ComPtr::Set((ComPtr *)((char *)this->? + 8 * v10), *(_DWORD *)(v2[1] + 8 * v10 + 4)); /*0x76b83f*/
    ++v10; /*0x76b847*/
  }
  while ( v10 < (int)this->? ); /*0x76b84a*/
  return &this->AbstractClass; /*0x76b84e*/
}



// ==== 0x0076B870  _VectorClass_V_rc_ptr_VWDTTerritory::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::AddRef(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x76b876*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76b87f*/
  {
    v3 = 0; /*0x76b881*/
    if ( m_8 <= 0 ) /*0x76b885*/
      return 1; /*0x76b8ab*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x76b88d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x76b890*/
    {
      ++v3; /*0x76b89b*/
      v4 += 2; /*0x76b89f*/
      if ( v3 >= m_8 ) /*0x76b8a4*/
        return 1; /*0x76b8a4*/
    }
  }
  return 0; /*0x76b8a6*/
}



// ==== 0x0076B8C0  _VectorClass_V_rc_ptr_VWDTTerritory::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_rc_ptr_WDTTerritory::Release(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76b8c3*/
  if ( !a2 ) /*0x76b8cd*/
  {
    (*(void (__thiscall **)(_VectorClass_V_rc_ptr_VWDTTerritory *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76b9cd*/
    return 1; /*0x76b9d3*/
  }
  LOBYTE(this->m_C) = 0; /*0x76b8d7*/
  if ( a3 ) /*0x76b8dd*/
  {
    *a3 = a2; /*0x76b923*/
    v6 = (ComPtr *)(a3 + 1); /*0x76b925*/
    if ( a2 - 1 >= 0 ) /*0x76b931*/
    {
      v9 = a2; /*0x76b933*/
      do /*0x76b947*/
      {
        ComPtr::Constructor(v6); /*0x76b938*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b93d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b943*/
        --v9; /*0x76b946*/
      }
      while ( v9 ); /*0x76b947*/
      v6 = (ComPtr *)(a3 + 1); /*0x76b949*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76b8e7*/
    if ( !v5 ) /*0x76b8f1*/
    {
      v8 = 0; /*0x76b91f*/
      goto LABEL_14; /*0x76b921*/
    }
    *v5 = a2; /*0x76b8f3*/
    v6 = (ComPtr *)(v5 + 1); /*0x76b8f5*/
    v13 = (ComPtr *)(v5 + 1); /*0x76b8fb*/
    if ( a2 - 1 >= 0 ) /*0x76b901*/
    {
      v7 = a2; /*0x76b903*/
      do /*0x76b917*/
      {
        ComPtr::Constructor(v6); /*0x76b908*/
        *(_DWORD *)v6->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76b90d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b913*/
        --v7; /*0x76b916*/
      }
      while ( v7 ); /*0x76b917*/
      v6 = v13; /*0x76b919*/
    }
  }
  v8 = v6; /*0x76b94d*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x76b94f*/
  if ( !v8 ) /*0x76b955*/
    return 0; /*0x76b95a*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x76b961*/
  {
    if ( a2 >= this->m_8 ) /*0x76b96d*/
      m_8 = this->m_8; /*0x76b96f*/
    for ( i = 0; i < m_8; ++i ) /*0x76b975*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76b982*/
    if ( BYTE1(this->m_C) ) /*0x76b98c*/
    {
      v12 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b993*/
      if ( v12 ) /*0x76b998*/
        (**v12)(v12, 3); /*0x76b99e*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x76b9a0*/
    }
    m_8 = a2; /*0x76b9a7*/
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x76b9b6*/
  this->m_8 = m_8; /*0x76b9b9*/
  BYTE1(this->m_C) = a3 == 0; /*0x76b9bc*/
  return 1; /*0x76b957*/
}



// ==== 0x0076B9E0  _VectorClass_V_rc_ptr_VWDTTerritory::ddtor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::ddtor(_VectorClass_V_rc_ptr_VWDTTerritory *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76b9e6*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76b9ed*/
  {
    result = (**v2)(v2, 3); /*0x76b9fa*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76b9fc*/
  }
  BYTE1(this->m_C) = 0; /*0x76b9ff*/
  this->m_8 = 0; /*0x76ba02*/
  return result; /*0x76ba05*/
}



// ==== 0x0076BA10  _VectorClass_V_rc_ptr_VWDTTerritory::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_rc_ptr_WDTTerritory::GetSize(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x76ba10*/
    return 0; /*0x76ba18*/
  m_8 = this->m_8; /*0x76ba1e*/
  result = 0; /*0x76ba21*/
  if ( m_8 <= 0 ) /*0x76ba25*/
    return -1; /*0x76ba40*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76ba2e*/
  {
    if ( ++result >= m_8 ) /*0x76ba3e*/
      return -1; /*0x76ba3e*/
  }
  return result; /*0x76ba1a*/
}



// ==== 0x0076BA50  _VectorClass_V_rc_ptr_VWDTTerritory::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_rc_ptr_WDTTerritory::GetCapacity(_VectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x76ba50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x76ba65*/
  else
    return 0; /*0x76ba57*/
}



// ==== 0x0076BA70  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Release  this=DynamicVector  sig=csp ====
char __thiscall WDTState_4::Release(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  WDTState *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    LOBYTE(this->m_C) = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = (ComPtr *)(a3 + 1); /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ComPtr::Constructor(v8); /*0x76bae6*/
          *(_DWORD *)v8->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76baeb*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76baf1*/
          --v9; /*0x76baf4*/
        }
        while ( v9 ); /*0x76baf5*/
        v8 = (ComPtr *)(a3 + 1); /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76ba97*/
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = (ComPtr *)(v5 + 1); /*0x76baa5*/
        v7 = (WDTState *)(v5 + 1); /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          v14 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            WDTState_4::Constructor(v7++); /*0x76bab8*/
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
    LOBYTE(this->m_C) = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x76bb05*/
    {
      if ( a2 >= this->m_8 ) /*0x76bb11*/
        m_8 = this->m_8; /*0x76bb13*/
      for ( i = 0; i < m_8; ++i ) /*0x76bb19*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * i + 4)); /*0x76bb26*/
      if ( BYTE1(this->m_C) ) /*0x76bb30*/
      {
        v11 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x76bb44*/
      }
      m_8 = a2; /*0x76bb4b*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x76bb5a*/
    this->m_8 = m_8; /*0x76bb5d*/
    BYTE1(this->m_C) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x76bb69*/
  }
  v12 = this->m_8; /*0x76bb6c*/
  if ( v12 < this->m_10 ) /*0x76bb74*/
    this->m_10 = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/
}



// ==== 0x0076BB90  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::Read  this=DynamicVector  sig=csp ====
int __thiscall WDTState_4::Read(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( m_10 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= m_10 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/
}



// ==== 0x0076BBC0  _VectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_rc_ptr_WDTTerritory::QueryInterface(_VectorClass_V_rc_ptr_VWDTTerritory *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bbc3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76bbc6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76bbd0*/
  {
    (**v3)(v3, 3); /*0x76bbdf*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76bbe1*/
  }
  BYTE1(this->m_C) = 0; /*0x76bbec*/
  this->m_8 = 0; /*0x76bbf2*/
  if ( (a2 & 1) != 0 ) /*0x76bbf9*/
    __3_YAXPAX_Z(this); /*0x76bbfc*/
  return this->__pad_0; /*0x76bc06*/
}



// ==== 0x0076BC10  _DynamicVectorClass_V_rc_ptr_VWDTTerritory::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall WDTState_4::QueryInterface(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = *(void (__thiscall ****)(_DWORD, int))&this->m_1[3]; /*0x76bc13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<rc_ptr<WDTTerritory>>::`vftable'; /*0x76bc16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x76bc31*/
  }
  BYTE1(this->m_C) = 0; /*0x76bc3c*/
  this->m_8 = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    __3_YAXPAX_Z(this); /*0x76bc4c*/
  return this->__pad_0; /*0x76bc56*/
}



// ==== 0x0076BC60  WDTState::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall WDTState_4::Constructor(WDTState *this)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76bc63*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76bc68*/
  return this->__pad_0; /*0x76bc70*/
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
_DWORD *__fastcall Audio_Create_76BE90(rc_ptr *this, int a2)
{
  char *v4; // eax
  char *_76BF00; // edi

  v4 = (char *)__2_YAPAXI_Z(0x18u); /*0x76be98*/
  if ( v4 ) /*0x76bea2*/
    _76BF00 = Audio_Create_76BF00(v4, a2); /*0x76beac*/
  else
    _76BF00 = 0; /*0x76beb0*/
  ComPtr::Constructor((ComPtr *)this); /*0x76beb4*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x76bebb*/
  ComPtr::Set((ComPtr *)this, (int)_76BF00); /*0x76bec2*/
  return this; /*0x76bec9*/
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
  *((_DWORD *)this + 1) = 0; /*0x76bf08*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x76bf11*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x76bf17*/
  *v3 = &rc_ptr<WDTState>::`vftable'; /*0x76bf20*/
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
int __thiscall WDTObject::GetSize(WDTObject *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 3); /*0x76bfa0*/
  if ( v1 ) /*0x76bfa5*/
    return *(_DWORD *)(v1 + 24); /*0x76bfa7*/
  else
    return 0; /*0x76bfab*/
}



// ==== 0x0076BFB0  ConstructWDTSelection_Create_76BFB0  this=-  sig=csp ====
int sub_76BFB0()
{
  return 1; /*0x76bfb5*/
}



// ==== 0x0076BFC0  ObjectClass::ConstructWDTSelection_Create_76BFC0  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76BFC0(ObjectClass *this)
{
  unsigned __int8 *vtable3; // eax

  vtable3 = (unsigned __int8 *)this->?; /*0x76bfc0*/
  if ( vtable3 ) /*0x76bfc5*/
    return vtable3[20]; /*0x76bfcc*/
  else
    return 1; /*0x76bfcf*/
}



// ==== 0x0076BFE0  Conflict::GetOwnerHouse  this=Conflict  sig=csp ====
int __thiscall Conflict::GetOwnerHouse(Conflict *this)
{
  int Outcome; // eax

  Outcome = this->Outcome; /*0x76bfe0*/
  if ( Outcome ) /*0x76bfe5*/
    return *(_DWORD *)(Outcome + 36) - 1; /*0x76bfea*/
  else
    return 0; /*0x76bfec*/
}



// ==== 0x0076C030  CampaignProperties_WorldDominationTour::QueryInterface  this=CampaignProperties@WorldDominationTour  sig=csp ====
void **__thiscall CampaignProperties_WorldDominationTour::QueryInterface(
        CampaignProperties_WorldDominationTour *this,
        char a2)
{
  *this = (CampaignProperties_WorldDominationTour)&WorldDominationTour::CampaignProperties::`vftable'; /*0x76c036*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 5)); /*0x76c03c*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 4)); /*0x76c044*/
  this->q008 = &rc_ptr<WDTState>::`vftable'; /*0x76c04c*/
  ComPtr::Release((ComPtr *)(this + 2)); /*0x76c052*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76c059*/
  if ( (a2 & 1) != 0 ) /*0x76c063*/
    __3_YAXPAX_Z(this); /*0x76c066*/
  return (void **)this; /*0x76c070*/
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
int __thiscall ConstructWDTSelection(int this, int a2, int a3)
{
  int v4; // eax
  int _76BFC0; // eax
  CampaignClass *v6; // eax
  _BYTE *v7; // eax
  _DWORD *_771800; // eax
  int _76BFB0; // eax
  char **v10; // eax
  int v11; // ebp
  int v12; // eax
  wchar_t *StringCSF; // eax
  MSBitPrintAnim *v14; // eax
  ScoreClass *v15; // edi
  wchar_t *v16; // eax
  MSBitPrintAnim *v17; // eax
  ScoreClass *v18; // edi
  int v20; // [esp-4h] [ebp-D8h]
  ObjectClass v21; // [esp+10h] [ebp-C4h] BYREF
  int v22[3]; // [esp+C0h] [ebp-14h] BYREF
  int v23; // [esp+CCh] [ebp-8h]

  MSEngine::Construct((MSEngine *)this); /*0x76c29c*/
  ComPtr::Constructor((ComPtr *)(this + 72)); /*0x76c2a6*/
  *(_DWORD *)(this + 72) = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x76c2b2*/
  ComPtr::Set((ComPtr *)(this + 72), *(_DWORD *)(a2 + 4)); /*0x76c2be*/
  ComPtr::Constructor((ComPtr *)(this + 80)); /*0x76c2c8*/
  *(_DWORD *)(this + 80) = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76c2cd*/
  WinsockInterface::ProcessPacket((char *)(this + 88), *(_DWORD *)(*(_DWORD *)(a2 + 4) + 68)); /*0x76c2dd*/
  *(_BYTE *)(this + 1092) = 0; /*0x76c2e7*/
  *(_DWORD *)(this + 1096) = -1; /*0x76c2ed*/
  *(_DWORD *)(this + 1100) = -1; /*0x76c2f3*/
  *(_DWORD *)(this + 1104) = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(a2 + 4) + 12)); /*0x76c30e*/
  *(_DWORD *)(this + 1108) = -1; /*0x76c314*/
  v4 = *(_DWORD *)(a2 + 4); /*0x76c31a*/
  v20 = *(_DWORD *)(v4 + 68); /*0x76c323*/
  _76BFC0 = ConstructWDTSelection_Create_76BFC0(*(ObjectClass **)(v4 + 12)); /*0x76c327*/
  ConstructWDTSelection_Create_767FB0((rc_ptr *)(this + 1112), _76BFC0, a3, v20); /*0x76c334*/
  *(_DWORD *)(this + 1120) = -1; /*0x76c339*/
  ComPtr::Constructor((ComPtr *)(this + 1124)); /*0x76c347*/
  *(_DWORD *)(this + 1124) = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76c34c*/
  *(_DWORD *)(this + 1132) = 0; /*0x76c355*/
  *(_DWORD *)(this + 1136) = 0; /*0x76c35b*/
  *(_DWORD *)(this + 1140) = 0; /*0x76c361*/
  *(_DWORD *)(this + 1144) = 32; /*0x76c367*/
  *(_DWORD *)(this + 1148) = 0; /*0x76c371*/
  *(_DWORD *)(this + 1152) = 0; /*0x76c377*/
  v6 = (CampaignClass *)__2_YAPAXI_Z(0x20u); /*0x76c37d*/
  if ( v6 ) /*0x76c387*/
    v7 = CampaignClass::Constructor_1(v6, 0); /*0x76c38c*/
  else
    v7 = 0; /*0x76c393*/
  *(_DWORD *)(this + 1156) = v7; /*0x76c39b*/
  ConstructWDTSelection_Create_76F500((rc_ptr *)(this + 1160)); /*0x76c3a1*/
  String::Assign((String *)(this + 1168), 0); /*0x76c3ad*/
  ConstructWDTSelection_Create_76F210((VectorClass *)(this + 1172), 0, 0); /*0x76c3bc*/
  *(_DWORD *)(this + 1172) = &DynamicVectorClass<MSSfxEntry *>::`vftable'; /*0x76c3c1*/
  *(_DWORD *)(this + 1192) = 10; /*0x76c3c8*/
  *(_DWORD *)(this + 1188) = 0; /*0x76c3cf*/
  *(_DWORD *)this = &WorldDominationTour::Selection::`vftable'; /*0x76c3d2*/
  *(_DWORD *)(this + 1196) = (unsigned __int16)Property::Set( /*0x76c448*/
                                                 (Property *)g_FogOfWarState,
                                                 ((unsigned __int8)dword_AC18A4 >> g_BitShift_Green_0 << g_BitShift_Red)
                                               | (BYTE1(dword_AC18A4) >> g_BitMask_Blue << g_BitMask_Green)
                                               | (BYTE2(dword_AC18A4) >> g_BitMask_Red << g_BitShift_Blue));
  _771800 = ConstructWDTSelection_Create_771800((ObjectClass *)(this + 88)); /*0x76c44e*/
  PriorityQueue::Add((PriorityQueue *)this, (int)_771800); /*0x76c456*/
  CCFileClass::Construct((CCFileClass *)&v21.customSound_controller[2], aWdtmapmdIni); /*0x76c464*/
  v21.referenceCount = 0; /*0x76c46d*/
  v21.NeedsSaveOrLink = 0; /*0x76c471*/
  GenericList::Constructor((GenericList *)&v21.occupant); /*0x76c475*/
  v21.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x76c484*/
  memset(&v21.ambientSoundController[1], 0, 13); /*0x76c48c*/
  v21.customSound_controller[0] = 0; /*0x76c49c*/
  v21.customSound_controller[1] = 0; /*0x76c4a0*/
  v21.nextArrayIndex = (int)&INIClass::`vftable'; /*0x76c4a4*/
  FileStraw::Open((FileStraw *)&v21.nextArrayIndex, (int)&v21.customSound_controller[2], 0); /*0x76c4ac*/
  String::Assign((String *)&v21, aVoiceovers); /*0x76c4ba*/
  ConstructWDTSelection_Create_76C970(this, &v21.nextArrayIndex, (int)&v21); /*0x76c4cb*/
  DeleteAndZero(&v21); /*0x76c4d4*/
  String::Assign((String *)&v21, aSounds_0); /*0x76c4e2*/
  ConstructWDTSelection_Create_76CA60((TechnoClass *)this, (char *)&v21.nextArrayIndex, (char **)&v21); /*0x76c4f3*/
  DeleteAndZero(&v21); /*0x76c4fc*/
  unknown_libname_73(&v21.vtable2); /*0x76c505*/
  String::Assign((String *)&v21.vtable1, &g_INI_DefaultBuffer); /*0x76c513*/
  String::Assign((String *)&v21, aLayouts); /*0x76c521*/
  _76BFB0 = ConstructWDTSelection_Create_76BFB0(); /*0x76c53b*/
  v10 = FromStringInt((char **)&v21.abstractFlags, _76BFB0); /*0x76c546*/
  INIClass::ReadString((INIClass *)&v21.nextArrayIndex, (char **)&v21, v10, (char **)&v21.vtable1, (int)&v21.vtable2); /*0x76c555*/
  DeleteAndZero((ObjectClass *)&v21.abstractFlags); /*0x76c55e*/
  DeleteAndZero(&v21); /*0x76c567*/
  DeleteAndZero((ObjectClass *)&v21.vtable1); /*0x76c570*/
  ConstructWDTSelection_Create_76CBF0((TechnoClass *)this, &v21.nextArrayIndex, (char **)&v21.vtable2); /*0x76c581*/
  v11 = *(_DWORD *)(this + 1116); /*0x76c590*/
  LOBYTE(v12) = ConstructWDTSelection_Create(*(_DWORD *)(a2 + 4), a3); /*0x76c599*/
  ArtConfig::ReadLayout(v11, (INIClass *)&v21.nextArrayIndex, (PriorityQueue *)this, v12); /*0x76c5a7*/
  StringCSF = GetStringCSF(aGuiPlaywdt, 0, g_Str_File_WDTSel_cpp, 157); /*0x76c5bd*/
  WideString::Assign((WideString *)&v21.uniqueId, StringCSF); /*0x76c5c7*/
  v14 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c5ce*/
  if ( v14 ) /*0x76c5d8*/
    v15 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c5f5*/
                          v14,
                          (const wchar_t **)&v21.uniqueId,
                          (_DWORD *)(*(_DWORD *)(this + 1116) + 156),
                          1);
  else
    v15 = 0; /*0x76c5f9*/
  ScoreClass::SetState(v15, 1); /*0x76c5ff*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v15); /*0x76c607*/
  v16 = GetStringCSF(aTxtBack, 0, g_Str_File_WDTSel_cpp, 164); /*0x76c61d*/
  WideString::Assign((WideString *)&v21.vtable3, v16); /*0x76c627*/
  v17 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c62e*/
  if ( v17 ) /*0x76c638*/
    v18 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c655*/
                          v17,
                          (const wchar_t **)&v21.vtable3,
                          (_DWORD *)(*(_DWORD *)(this + 1116) + 172),
                          1);
  else
    v18 = 0; /*0x76c659*/
  ScoreClass::SetState(v18, 1); /*0x76c65f*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v18); /*0x76c667*/
  ConstructWDTSelection_Create_76EEB0((TechnoClass *)this); /*0x76c66e*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.vtable3); /*0x76c677*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.uniqueId); /*0x76c680*/
  DeleteAndZero((ObjectClass *)&v21.vtable2); /*0x76c689*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v21.nextArrayIndex); /*0x76c692*/
  v21.customSound_controller[2] = (int)&CCFileClass::`vftable'; /*0x76c69e*/
  v23 = 0; /*0x76c6a6*/
  Vector::Clear((int)v22); /*0x76c6ad*/
  v21.customSound_controller[2] = (int)&off_7E1668; /*0x76c6b6*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v21.customSound_controller[2]); /*0x76c6be*/
  return this; /*0x76c6c5*/
}



// ==== 0x0076C6E0  Selection@WorldDominationTour::SelectionInitializeWOL  this=Selection@WorldDominationTour  sig=csp ====
int __thiscall SelectionInitializeWOL(int this)
{
  WDTObject *v2; // eax
  int (__thiscall ***v3)(_DWORD, int); // eax
  WDTObject *v4; // eax
  int (__thiscall ***v5)(_DWORD, int); // eax
  int v6; // ecx
  void *v7; // edi
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void *v9; // edi
  void *v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v13; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &WorldDominationTour::Selection::`vftable'; /*0x76c6e9*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x76c6f7*/
  Theme::QueueSong((int)&unk_A83D10, -3); /*0x76c701*/
  (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x76c710*/
  (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x76c71d*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x76c72d*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x76c737*/
  ComPtr::Set((ComPtr *)(this + 1124), 0); /*0x76c753*/
  VectorCursor::Construct((VectorCursor *)&v15, *(_DWORD *)(this + 1116) + 44, 0); /*0x76c768*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v15 + 4))(&v15) ) /*0x76c775*/
  {
    v2 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v16 + 4) + 8 * v17)); /*0x76c78a*/
    v3 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v2); /*0x76c791*/
    if ( v3 ) /*0x76c798*/
      Session::RemoveTeam((Session *)this, v3); /*0x76c79d*/
    (*(void (__thiscall **)(int *))(v15 + 8))(&v15); /*0x76c7aa*/
  }
  VectorCursor::Construct((VectorCursor *)&v15, *(_DWORD *)(this + 1116) + 44, 0); /*0x76c7cc*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v15 + 4))(&v15) ) /*0x76c7d9*/
  {
    v4 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v16 + 4) + 8 * v17)); /*0x76c7ee*/
    v5 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v4); /*0x76c7f5*/
    if ( v5 ) /*0x76c7fc*/
      Session::RemoveTeam((Session *)this, v5); /*0x76c801*/
    (*(void (__thiscall **)(int *))(v15 + 8))(&v15); /*0x76c80e*/
  }
  *(_DWORD *)&v13.m_1[3] = this + 1172; /*0x76c82a*/
  v14 = 0; /*0x76c82e*/
  *(_DWORD *)v13.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76c836*/
  if ( Vector::HasCapacity(&v13) ) /*0x76c83e*/
  {
    do /*0x76c87d*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)&v13.m_1[3] + 4); /*0x76c850*/
      v7 = *(void **)(v6 + 4 * v14); /*0x76c853*/
      if ( v7 ) /*0x76c858*/
      {
        j_DeleteAndZero(*(ObjectClass **)(v6 + 4 * v14)); /*0x76c85c*/
        __3_YAXPAX_Z(v7); /*0x76c862*/
      }
      (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v13.__pad_0 /*0x76c872*/
                                                                                               + 8))(&v13);
    }
    while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v13.__pad_0 + 4))(&v13) ); /*0x76c87d*/
  }
  v8 = *(void (__thiscall ****)(_DWORD, int))(this + 1132); /*0x76c884*/
  if ( v8 ) /*0x76c88c*/
    (**v8)(v8, 1); /*0x76c892*/
  v9 = *(void **)(this + 1136); /*0x76c894*/
  if ( v9 ) /*0x76c89c*/
  {
    DeleteAndZero(*(ObjectClass **)(this + 1136)); /*0x76c8a0*/
    __3_YAXPAX_Z(v9); /*0x76c8a6*/
  }
  v10 = *(void **)(this + 1140); /*0x76c8ae*/
  if ( v10 ) /*0x76c8b6*/
  {
    DeleteAndZero(*(ObjectClass **)(this + 1140)); /*0x76c8ba*/
    __3_YAXPAX_Z(v10); /*0x76c8c0*/
  }
  v11 = *(void (__thiscall ****)(_DWORD, int))(this + 1156); /*0x76c8c8*/
  if ( v11 ) /*0x76c8d0*/
    (**v11)(v11, 1); /*0x76c8d6*/
  Property::Set((Property *)g_FogOfWarState, *(_WORD *)(this + 1196)); /*0x76c8e6*/
  *(_DWORD *)(this + 1172) = &VectorClass<MSSfxEntry *>::`vftable'; /*0x76c8ed*/
  VectorClass_ptr_MSSfxEntry::Remove((_VectorClass_PAVMSSfxEntry *)(this + 1172)); /*0x76c8f3*/
  DeleteAndZero((ObjectClass *)(this + 1168)); /*0x76c8fe*/
  *(_DWORD *)(this + 1160) = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76c909*/
  ComPtr::Release((ComPtr *)(this + 1160)); /*0x76c90f*/
  *(_DWORD *)(this + 1124) = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76c916*/
  ComPtr::Release((ComPtr *)(this + 1124)); /*0x76c91d*/
  *(_DWORD *)(this + 1112) = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x76c928*/
  ComPtr::Release((ComPtr *)(this + 1112)); /*0x76c92e*/
  System_Init_770430((ObjectClass *)(this + 88)); /*0x76c936*/
  *(_DWORD *)(this + 80) = &rc_ptr<WorldDominationTour::Conflict>::`vftable'; /*0x76c93e*/
  ComPtr::Release((ComPtr *)(this + 80)); /*0x76c944*/
  *(_DWORD *)(this + 72) = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x76c94c*/
  ComPtr::Release((ComPtr *)(this + 72)); /*0x76c952*/
  return MSEngine::Destruct((MSEngine *)this); /*0x76c95e*/
}



// ==== 0x0076C970  ObjectClass::ConstructWDTSelection_Create_76C970  this=Selection@WorldDominationTour  sig=csp ====
void __thiscall sub_76C970(int this, _DWORD *a2, int a3)
{
  char **v3; // edi

  v3 = (char **)a3; /*0x76c977*/
  Animation::LoadSidebarAnimations((void **)(this + 88), a2, a3); /*0x76c982*/
  String::Assign((char **)&a3, aWinningthresho); /*0x76c990*/
  *(_DWORD *)(this + 1076) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1076)); /*0x76c9ad*/
  DeleteAndZero((void **)&a3); /*0x76c9b3*/
  String::Assign((char **)&a3, aMegawinningthr); /*0x76c9c1*/
  *(_DWORD *)(this + 1084) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1084)); /*0x76c9de*/
  DeleteAndZero((void **)&a3); /*0x76c9e4*/
  String::Assign((char **)&a3, aLosingthreshol); /*0x76c9f2*/
  *(_DWORD *)(this + 1080) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1080)); /*0x76ca0f*/
  DeleteAndZero((void **)&a3); /*0x76ca15*/
  String::Assign((char **)&a3, aMegalosingthre); /*0x76ca23*/
  *(_DWORD *)(this + 1088) = INIClass::ReadInt(v3, (char **)&a3, *(_DWORD *)(this + 1088)); /*0x76ca40*/
  DeleteAndZero((void **)&a3); /*0x76ca46*/
}



// ==== 0x0076CA60  ObjectClass::ConstructWDTSelection_Create_76CA60  this=ObjectClass  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CA60(TechnoClass *this, char *a2, char **a3)
{
  TechnoClass *v3; // esi
  char **v4; // ebp
  INIClass *v5; // edi
  int Key; // eax
  int v7; // ecx
  bool v8; // bl
  int v9; // eax
  ObjectClass *v10; // edi
  int isTurretRotateSoundPlaying; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // [esp+10h] [ebp-14h] BYREF
  String v18; // [esp+14h] [ebp-10h] BYREF
  TechnoClass *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v3 = this; /*0x76ca66*/
  v19 = this; /*0x76ca6d*/
  unknown_libname_73(&v17); /*0x76ca71*/
  v4 = a3; /*0x76ca76*/
  v5 = (INIClass *)a2; /*0x76ca7a*/
  Key = INIClass::FindKey(a2, a3); /*0x76ca81*/
  v7 = 0; /*0x76ca86*/
  v20 = Key; /*0x76ca88*/
  *(_DWORD *)&v18.m_3[1] = 0; /*0x76ca8e*/
  if ( Key > 0 ) /*0x76ca92*/
  {
    while ( 1 ) /*0x76caab*/
    {
      INIClass::GetStringByIndexEx(v5, (char **)&a3, v4, v7); /*0x76caab*/
      if ( (unsigned __int8)String::NotEquals((String *)&a3, 0) ) /*0x76cab6*/
      {
        String::Assign(&v18, 0); /*0x76cac9*/
        v8 = INIClass::ReadString(v5, v4, (char **)&a3, (char **)&v18, (int)&v17) > 0; /*0x76caeb*/
        DeleteAndZero((ObjectClass *)&v18); /*0x76caee*/
        if ( v8 ) /*0x76caf5*/
        {
          if ( (unsigned __int8)String::Equals_Alt((String *)&a3, g_INI_Key_Theme) ) /*0x76cb04*/
          {
            String::Reassign((String *)&v3->turretRotateSoundController[2], (const char **)&v17); /*0x76cbcf*/
            DeleteAndZero((ObjectClass *)&a3); /*0x76cbd8*/
            break; /*0x76cbd8*/
          }
          v9 = __2_YAPAXI_Z(0x10u); /*0x76cb13*/
          if ( v9 ) /*0x76cb1d*/
            v10 = (ObjectClass *)Audio::ParseVolume(v9, (const char **)&a3, (String *)&v17); /*0x76cb30*/
          else
            v10 = 0; /*0x76cb34*/
          if ( (unsigned __int8)String::Equals_Alt((String *)v10, 0) ) /*0x76cb3a*/
          {
            if ( v10 ) /*0x76cb45*/
            {
              j_DeleteAndZero(v10); /*0x76cb49*/
              __3_YAXPAX_Z(v10); /*0x76cb4f*/
            }
          }
          else if ( v10 ) /*0x76cb5b*/
          {
            isTurretRotateSoundPlaying = v3->isTurretRotateSoundPlaying; /*0x76cb5d*/
            v12 = v3->gattlingSoundController[0]; /*0x76cb63*/
            v13 = &v3->turretRotateSoundController[3]; /*0x76cb69*/
            if ( v12 < isTurretRotateSoundPlaying /*0x76cb8e*/
              || (*((_BYTE *)v13 + 13) || !isTurretRotateSoundPlaying)
              && (v14 = v13[5], v14 > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v13 + 8))(
                   v13,
                   isTurretRotateSoundPlaying + v14,
                   0) )
            {
              v15 = v13[4]; /*0x76cb95*/
              v16 = v13[1]; /*0x76cb98*/
              v13[4] = v15 + 1; /*0x76cb9e*/
              *(_DWORD *)(v16 + 4 * v15) = v10; /*0x76cba1*/
            }
          }
        }
      }
      DeleteAndZero((ObjectClass *)&a3); /*0x76cba8*/
      v7 = ++*(_DWORD *)&v18.m_3[1]; /*0x76cbb5*/
      if ( *(int *)&v18.m_3[1] >= v20 ) /*0x76cbbc*/
        break; /*0x76cbbc*/
      v5 = (INIClass *)a2; /*0x76ca9a*/
      v3 = v19; /*0x76ca9e*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x76cbdd*/
}



// ==== 0x0076CBF0  ObjectClass::ConstructWDTSelection_Create_76CBF0  this=ObjectClass  sig=csp ====
void __thiscall ConstructWDTSelection_Create_76CBF0(TechnoClass *this, _DWORD *a2, char **a3)
{
  char **v4; // eax
  char **v5; // eax
  char **v6; // edi
  INIClass *v7; // ebp
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  int v14; // eax
  char **v15; // eax
  PaletteClass v16; // [esp+10h] [ebp-10h] BYREF
  String v17; // [esp+14h] [ebp-Ch] BYREF
  char *v18; // [esp+1Ch] [ebp-4h] BYREF

  unknown_libname_73(&v16); /*0x76cbfd*/
  v4 = StaticString::Factory(*(StaticString **)(this->ambientSoundController[4] + 68)); /*0x76cc08*/
  String::AssignFromPtr(&v17, (const char **)v4); /*0x76cc12*/
  String::Assign((String *)&v17.m_3[1], 0); /*0x76cc1d*/
  v5 = String::Concat2(&v17, &v18, aZoomingtarget); /*0x76cc3a*/
  v6 = a3; /*0x76cc3f*/
  v7 = (INIClass *)a2; /*0x76cc43*/
  v8 = INIClass::ReadString((INIClass *)a2, a3, v5, (char **)&v17.m_3[1], (int)&v16) > 0; /*0x76cc56*/
  DeleteAndZero((ObjectClass *)&v18); /*0x76cc59*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x76cc62*/
  if ( v8 ) /*0x76cc69*/
  {
    v9 = __2_YAPAXI_Z(0x10u); /*0x76cc6d*/
    if ( v9 ) /*0x76cc77*/
      v10 = String::SplitComma(v9, (String *)&v16); /*0x76cc80*/
    else
      v10 = 0; /*0x76cc87*/
    this->attackedTargets[0] = v10; /*0x76cc89*/
  }
  String::Assign((String *)&a3, 0); /*0x76cc95*/
  v11 = String::Concat2(&v17, (char **)&a2, aTargetpalette); /*0x76ccb2*/
  INIClass::ReadString(v7, v6, v11, (char **)&a3, (int)&v16); /*0x76ccbb*/
  DeleteAndZero((ObjectClass *)&a2); /*0x76ccc4*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cccd*/
  this->currentTargets[5] = (int)PaletteClass::Load(&v16); /*0x76cce1*/
  String::Assign((String *)&a3, 0); /*0x76cce7*/
  v12 = String::Concat2(&v17, (char **)&a2, aTarget); /*0x76cd04*/
  INIClass::ReadString(v7, v6, v12, (char **)&a3, (int)&v16); /*0x76cd0d*/
  DeleteAndZero((ObjectClass *)&a2); /*0x76cd16*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cd1f*/
  v13 = __2_YAPAXI_Z(0x10u); /*0x76cd26*/
  if ( v13 ) /*0x76cd30*/
    v14 = String::SplitComma(v13, (String *)&v16); /*0x76cd39*/
  else
    v14 = 0; /*0x76cd40*/
  this->attackedTargets[1] = v14; /*0x76cd42*/
  v15 = String::Concat2(&v17, (char **)&a3, aTargetdividing); /*0x76cd58*/
  this->attackedTargets[2] = INIClass::ReadInt((bool *)v7->__pad_0, (String *)v6, (String *)v15, 32); /*0x76cd6a*/
  DeleteAndZero((ObjectClass *)&a3); /*0x76cd70*/
  DeleteAndZero((ObjectClass *)&v17); /*0x76cd79*/
  DeleteAndZero((ObjectClass *)&v16); /*0x76cd82*/
}



// ==== 0x0076CDA0  ObjectClass::ShowWDTTerritorySelection  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ShowWDTTerritorySelection(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int State; // eax
  wchar_t *StringCSF; // eax
  char v6; // bl
  CreateGameDialogControl *v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  wchar_t *v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // bl
  int *v20; // eax
  int v22; // [esp-4h] [ebp-50h]
  ObjectClass *v23; // [esp+0h] [ebp-4Ch]
  bool v24; // [esp+13h] [ebp-39h] BYREF
  DeleteAndZero v25; // [esp+14h] [ebp-38h] BYREF
  String v26; // [esp+20h] [ebp-2Ch] BYREF
  int v27; // [esp+28h] [ebp-24h]
  _BYTE v28[32]; // [esp+2Ch] [ebp-20h] BYREF

  v3 = this->ambientSoundController[4]; /*0x76cdab*/
  *(_DWORD *)&v28[28] = 0; /*0x76cdae*/
  State = FileClass::GetState((RawFileClass *)(v3 + 8)); /*0x76cdb9*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)(State + 20), 0); /*0x76cdc4*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76cdda*/
  WideString::Assign((WideString *)&v25, StringCSF); /*0x76cde4*/
  ScoreText::Show((ScoreText *)this, (const wchar_t **)&v25); /*0x76cdf0*/
  DeleteAndZero::Alt(&v25); /*0x76cdf9*/
  v6 = 0; /*0x76ce04*/
  v24 = 0; /*0x76ce06*/
  Timer::PumpMessages((Timer *)dword_87F770); /*0x76ce0a*/
  while ( 1 ) /*0x76ce0f*/
  {
    Game::ProcessIdle(v7); /*0x76ce0f*/
    DDraw::HandleSuspend((DDraw *)this); /*0x76ce16*/
    v8 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x76ce2c*/
    *(_DWORD *)&v26.m_3[1] = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x76ce39*/
    v27 = v8; /*0x76ce3d*/
    if ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x76ce41*/
    {
      v9 = (unsigned __int16)EventQueue::Read((EventQueue *)dword_87F770); /*0x76ce5a*/
      if ( v9 == 1 ) /*0x76ce62*/
      {
        WDTGame::ProcessTerritorySelection((WDTGame *)this, &v26.m_3[1], &v24); /*0x76ce70*/
      }
      else if ( v9 == 2049 ) /*0x76ce7f*/
      {
        WDTSurface::ToggleState(this->currentTargets[1], &this->vtable0, 0); /*0x76ce8e*/
        if ( (unsigned __int8)WDTSurface::PointInRect((WDTSurface *)this->currentTargets[1], &v26.m_3[1]) ) /*0x76ce9e*/
        {
          String::Assign((String *)&v25, aCanceled); /*0x76ceb4*/
          if ( (unsigned __int8)String::NotEquals((String *)&v25, 0) ) /*0x76cebf*/
          {
            *(_DWORD *)&v28[20] = &this->turretRotateSoundController[3]; /*0x76ced7*/
            *(_DWORD *)&v28[24] = 0; /*0x76cedf*/
            *(_DWORD *)&v28[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76cee7*/
            if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v28[16]) ) /*0x76ceeb*/
            {
              do /*0x76cf24*/
              {
                if ( !(unsigned __int8)String::Compare( /*0x76cf08*/
                                         (String *)&v25,
                                         *(const char ***)(*(_DWORD *)(*(_DWORD *)&v28[20] + 4) + 4
                                                                                                * *(_DWORD *)&v28[24])) )
                  break; /*0x76cf0f*/
                (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 8))(&v28[16]); /*0x76cf19*/
              }
              while ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 4))(&v28[16]) ); /*0x76cf24*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v28[16] + 4))(&v28[16]) ) /*0x76cf33*/
              nullsub_24(v23); /*0x76cf48*/
            *(_DWORD *)&v28[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76cf4d*/
          }
          DeleteAndZero((ObjectClass *)&v25); /*0x76cf55*/
          v6 = 1; /*0x76cf5a*/
        }
      }
    }
    else
    {
      v10 = v27; /*0x76cf6d*/
      if ( *(_DWORD *)&v26.m_3[1] != this->currentTargetThreatValues[2] || v27 != this->currentTargetThreatValues[3] ) /*0x76cf79*/
      {
        this->currentTargetThreatValues[2] = *(_DWORD *)&v26.m_3[1]; /*0x76cf85*/
        this->currentTargetThreatValues[3] = v10; /*0x76cf8f*/
        v11 = ((unsigned __int8)WDTSurface::PointInRect((WDTSurface *)this->currentTargets[1], &v26.m_3[1]) != 0) + 1; /*0x76cfa5*/
        v12 = this->currentTargetThreatValues[5]; /*0x76cfa7*/
        if ( v12 != v11 ) /*0x76cfaf*/
        {
          v13 = v12 - 1; /*0x76cfb5*/
          if ( v13 ) /*0x76cfb6*/
          {
            if ( v13 == 1 && *(_BYTE *)(Count::Get((Count *)this->currentTargets) + 104) ) /*0x76cfc6*/
            {
              v14 = Count::Get((Count *)this->currentTargets); /*0x76cfd6*/
              WDTGame::ToggleTeamMode(v14, &this->vtable0, 0); /*0x76cfdd*/
              v15 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 916); /*0x76cff3*/
              WideString::Assign((WideString *)&v25.DeleteAndZero_field_0x04, v15); /*0x76cffd*/
              ScoreText::Show((ScoreText *)this, (const wchar_t **)&v25.DeleteAndZero_field_0x04); /*0x76d009*/
              DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x04); /*0x76d012*/
            }
          }
          else
          {
            String::Assign((String *)&v25.DeleteAndZero_field_0x08, aMapleave); /*0x76d022*/
            MSSfxClass::FindByName((char *)this, (const char **)&v25.DeleteAndZero_field_0x08); /*0x76d02e*/
            DeleteAndZero((ObjectClass *)&v25.DeleteAndZero_field_0x08); /*0x76d037*/
            this->currentTargets[2] = -1; /*0x76d040*/
            MSFrameAnim::drawFrame((MSFrameAnim *)v28); /*0x76d04a*/
            TerritorySelectWDT(this, (int)v28); /*0x76d056*/
            *(_DWORD *)v28 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d05f*/
            ComPtr::Release((ComPtr *)v28); /*0x76d067*/
          }
        }
        if ( v11 == 1 ) /*0x76d06f*/
        {
          if ( this->currentTargetThreatValues[5] != 1 ) /*0x76d091*/
          {
            String::Assign(&v26, aMapenter); /*0x76d09c*/
            MSSfxClass::FindByName((char *)this, (const char **)&v26); /*0x76d0a8*/
            DeleteAndZero((ObjectClass *)&v26); /*0x76d0b1*/
          }
          v16 = (int *)Count::Get((Count *)this->currentTargets); /*0x76d0bd*/
          v17 = Surface::PixelToIndex(v16, &v26.m_3[1]); /*0x76d0c4*/
          if ( v17 != this->currentTargets[2] ) /*0x76d0cf*/
          {
            v22 = v17; /*0x76d0d5*/
            this->currentTargets[2] = v17; /*0x76d0d9*/
            Count::Get((Count *)this->currentTargets); /*0x76d0df*/
            v18 = ComPtr::DestroyWrapper((int)&v28[8], v22); /*0x76d0e6*/
            TerritorySelectWDT(this, v18); /*0x76d0ee*/
            ComPtr::Territory_Dtor((ComPtr *)&v28[8]); /*0x76d0f7*/
          }
        }
        else if ( v11 == 2 && this->currentTargetThreatValues[5] != 2 ) /*0x76d07f*/
        {
          ShowWDTTerritorySelection_Show(this); /*0x76d083*/
        }
        this->currentTargetThreatValues[5] = v11; /*0x76d0fc*/
      }
    }
    GameClass::FrameLoop((GameClass *)this, 1); /*0x76d106*/
    if ( v6 ) /*0x76d111*/
      break; /*0x76d111*/
    if ( v24 ) /*0x76d115*/
    {
      v19 = v28[28]; /*0x76d11b*/
      v20 = &this->currentTargets[3]; /*0x76d11f*/
      goto LABEL_38; /*0x76d125*/
    }
  }
  if ( v24 ) /*0x76d129*/
  {
    v19 = v28[28]; /*0x76d12b*/
    v20 = &this->currentTargets[3]; /*0x76d12f*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)&v26.m_3[1]); /*0x76d13b*/
    *(_DWORD *)&v26.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d140*/
    v19 = 1; /*0x76d148*/
    v20 = (int *)&v26.m_3[1]; /*0x76d14d*/
  }
LABEL_38:
  WDTGame::Constructor((WDTGame *)a2, (int)v20); /*0x76d151*/
  if ( (v19 & 1) != 0 ) /*0x76d160*/
  {
    *(_DWORD *)&v26.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d166*/
    ComPtr::Release((ComPtr *)&v26.m_3[1]); /*0x76d16e*/
  }
  return a2; /*0x76d175*/
}



// ==== 0x0076D180  WDTGame::ProcessTerritorySelection  this=WDTGame  sig=csp ====
void __thiscall WDTGame::ProcessTerritorySelection(WDTGame *this, char *a2, bool *a3)
{
  char *v3; // ebx
  int v5; // ecx
  wchar_t *StringCSF; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  int v12; // [esp-8h] [ebp-30h]
  ObjectClass *v13; // [esp+0h] [ebp-28h]
  _BYTE v14[32]; // [esp+8h] [ebp-20h] BYREF

  v3 = a2; /*0x76d184*/
  *(_DWORD *)&v14[28] = 0; /*0x76d18c*/
  if ( (unsigned __int8)WDTSurface::PointInRect(*((WDTSurface **)this + 279), a2) ) /*0x76d19a*/
  {
    WDTSurface::ToggleState(*((_DWORD *)this + 279), (int *)this->__pad_0, 1); /*0x76d1bd*/
    v5 = *((_DWORD *)this + 279); /*0x76d1c2*/
    if ( !*(_BYTE *)(v5 + 104) ) /*0x76d1c8*/
    {
      WDTGame::ToggleTeamMode(v5, (int *)this->__pad_0, 1); /*0x76d1d6*/
      String::Assign((String *)&a3, aMousecancel); /*0x76d1e4*/
      MSSfxClass::FindByName(this->__pad_0, (const char **)&a3); /*0x76d1f0*/
      DeleteAndZero((ObjectClass *)&a3); /*0x76d1f9*/
      StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76d20f*/
      WideString::Assign((WideString *)&a3, StringCSF); /*0x76d219*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&a3); /*0x76d225*/
      DeleteAndZero::Alt((DeleteAndZero *)&a3); /*0x76d22e*/
    }
  }
  else
  {
    WDTSurface::ToggleState(*((_DWORD *)this + 279), (int *)this->__pad_0, 0); /*0x76d245*/
    v7 = (int *)Count::Get((Count *)this + 278); /*0x76d253*/
    v8 = Surface::PixelToIndex(v7, v3); /*0x76d25a*/
    if ( v8 != *((_DWORD *)this + 280) ) /*0x76d265*/
    {
      v12 = v8; /*0x76d26b*/
      *((_DWORD *)this + 280) = v8; /*0x76d26f*/
      Count::Get((Count *)this + 278); /*0x76d275*/
      v9 = ComPtr::DestroyWrapper((int)&v14[8], v12); /*0x76d27c*/
      TerritorySelectWDT((TechnoClass *)this, v9); /*0x76d284*/
      ComPtr::Territory_Dtor((ComPtr *)&v14[8]); /*0x76d28d*/
    }
    v10 = ComPtr::DestroyWrapper((int)&v14[16], *((_DWORD *)this + 280)); /*0x76d2a4*/
    WDTGame::Constructor((WDTGame *)v14, v10); /*0x76d2ae*/
    ComPtr::Territory_Dtor((ComPtr *)&v14[16]); /*0x76d2b7*/
    v11 = TerritorySelectWDT((TechnoClass *)this, (int)v14); /*0x76d2cc*/
    ComPtr::Territory_Dtor((ComPtr *)v14); /*0x76d2ce*/
    *a3 = v11; /*0x76d2da*/
    if ( v11 ) /*0x76d2dc*/
    {
      String::Assign((String *)&a2, aConflictselect); /*0x76d2eb*/
      if ( (unsigned __int8)String::NotEquals((String *)&a2, 0) ) /*0x76d2f6*/
      {
        *(_DWORD *)&v14[20] = (char *)this + 1172; /*0x76d30d*/
        *(_DWORD *)&v14[24] = 0; /*0x76d311*/
        *(_DWORD *)&v14[16] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76d319*/
        if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v14[16]) ) /*0x76d321*/
        {
          do /*0x76d35a*/
          {
            if ( !(unsigned __int8)String::Compare( /*0x76d33e*/
                                     (String *)&a2,
                                     *(const char ***)(*(_DWORD *)(*(_DWORD *)&v14[20] + 4) + 4 * *(_DWORD *)&v14[24])) )
              break; /*0x76d345*/
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 8))(&v14[16]); /*0x76d34f*/
          }
          while ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 4))(&v14[16]) ); /*0x76d35a*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&v14[16] + 4))(&v14[16]) ) /*0x76d369*/
          nullsub_24(v13); /*0x76d37e*/
      }
      DeleteAndZero((ObjectClass *)&a2); /*0x76d387*/
    }
  }
}



// ==== 0x0076D3A0  ObjectClass::method_76D3A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_76D3A0(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  int v7[2]; // [esp+8h] [ebp-14h] BYREF
  rc_ptr v8[4]; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v10 = 0; /*0x76d3ac*/
  v3 = Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d3ba*/
  if ( v3 != this->currentTargets[2] ) /*0x76d3c5*/
  {
    this->currentTargets[2] = v3; /*0x76d3cb*/
    v4 = ComPtr::DestroyWrapper((int)v8, v3); /*0x76d3d9*/
    TerritorySelectWDT(this, v4); /*0x76d3e1*/
    ComPtr::Territory_Dtor((ComPtr *)v8); /*0x76d3ea*/
  }
  FindTerritoryWOL(v8, this->currentTargets[1] + 44, this->currentTargets[2]); /*0x76d403*/
  ComPtr::Constructor((ComPtr *)v7); /*0x76d40c*/
  v7[0] = (int)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d415*/
  ComPtr::Set((ComPtr *)v7, v9); /*0x76d422*/
  *(_DWORD *)v8 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d42b*/
  ComPtr::Release((ComPtr *)v8); /*0x76d433*/
  v5 = TerritorySelectWDT(this, (int)v7); /*0x76d448*/
  v7[0] = (int)&rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d44a*/
  ComPtr::Release((ComPtr *)v7); /*0x76d452*/
  return v5; /*0x76d459*/
}



// ==== 0x0076D470  ObjectClass::method_76D470  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76D470(TechnoClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  rc_ptr v4[4]; // [esp+4h] [ebp-8h] BYREF

  result = (_DWORD *)Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d481*/
  if ( result != (_DWORD *)this->currentTargets[2] ) /*0x76d48c*/
  {
    this->currentTargets[2] = (int)result; /*0x76d48e*/
    FindTerritoryWOL(v4, this->currentTargets[1] + 44, (int)result); /*0x76d4a2*/
    TerritorySelectWDT(this, (int)v4); /*0x76d4ae*/
    *(_DWORD *)v4 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76d4b7*/
    return ComPtr::Release((ComPtr *)v4); /*0x76d4bf*/
  }
  return result; /*0x76d4c4*/
}



// ==== 0x0076D4D0  Trigger::ProcessMapEvents  this=ObjectClass  sig=csp ====
void __userpurge Trigger::ProcessMapEvents(int this@<ecx>, ObjectClass *a2@<edi>, int a3, char a4, char a5)
{
  void *inited; // ebx
  int v7; // eax
  WDTObject *v8; // eax
  int (__thiscall ***v9)(_DWORD, int); // eax
  int v10; // ecx
  unsigned int v11; // edi
  int CellType; // ebp
  int v13; // edi
  BOOL v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  Trigger *v18; // eax
  BombClass *v19; // eax
  MSShapeAnim *v20; // eax
  MSAnim *v21; // edi
  void *v22; // eax
  void (__thiscall ***v23)(_DWORD, int); // ecx
  ObjectClass *v24; // [esp+0h] [ebp-14Ch]
  VectorCursor v25; // [esp+10h] [ebp-13Ch] BYREF
  int *p_owningHouseIndex; // [esp+2Ch] [ebp-120h]
  int v27; // [esp+30h] [ebp-11Ch]
  ObjectClass v28; // [esp+34h] [ebp-118h] BYREF
  CCFileClass v29; // [esp+E0h] [ebp-6Ch] BYREF
  int v30[3]; // [esp+138h] [ebp-14h] BYREF
  int v31; // [esp+144h] [ebp-8h]

  inited = 0; /*0x76d4da*/
  v7 = Count::Get((Count *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v25, v7 + 44, 0); /*0x76d4f0*/
  while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d4fd*/
  {
    v8 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v25.VectorCursor_field_0x04 + 4) /*0x76d512*/
                                                      + 8 * v25.VectorCursor_field_0x08));
    v9 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v8); /*0x76d519*/
    if ( v9 ) /*0x76d520*/
      Session::RemoveTeam((Session *)this, v9); /*0x76d525*/
    (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 8))(&v25); /*0x76d532*/
  }
  v24 = a2; /*0x76d545*/
  Trigger::checkCondition((Trigger *)&v28.owningHouseIndex, 0, 0); /*0x76d54c*/
  v28.owningHouseIndex = (int)&DynamicVectorClass<MSAnim *>::`vftable'; /*0x76d561*/
  v28.ambientSoundController[0] = 10; /*0x76d565*/
  v28.attachedBomb = 0; /*0x76d569*/
  Trigger::checkCondition((Trigger *)&v28.?, 0, 0); /*0x76d56d*/
  v10 = *(_DWORD *)(this + 1116); /*0x76d572*/
  v28.? = (int)&DynamicVectorClass<MSAnim *>::`vftable'; /*0x76d57c*/
  v28.occupant = 10; /*0x76d585*/
  v28.? = 0; /*0x76d589*/
  VectorCursor::Construct((VectorCursor *)&v25.VectorCursor_field_0x0C, v10 + 44, 0); /*0x76d58d*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v25.VectorCursor_field_0x0C + 4))(&v25.VectorCursor_field_0x0C) )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(WDTClass **)(this + 1164), v11); /*0x76d5cd*/
    v13 = WDTClass::GetCellType(*(WDTClass **)(a3 + 4), v11); /*0x76d5d7*/
    if ( v13 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d5df*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d603*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d605*/
      }
      v14 = !*(_BYTE *)(this + 1092) || a5; /*0x76d635*/
      Map_Process_76FD40( /*0x76d64f*/
        *(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
        CellType,
        v13,
        v13,
        (int *)this,
        v14);
    }
    if ( a4 && v13 == 1 )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4); /*0x76d67a*/
      v16 = *(_DWORD *)(v15 + 16) + *(_DWORD *)(*(_DWORD *)(this + 1116) + 68); /*0x76d695*/
      v17 = *(_DWORD *)(*(_DWORD *)(this + 1116) + 72) + *(_DWORD *)(v15 + 20); /*0x76d69a*/
      if ( *(_DWORD *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2((CCFileClass *)&v28.ambientSoundController[1], *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v28.ambientSoundController[1], 0) ) /*0x76d6b3*/
        {
          v18 = (Trigger *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v18 ) /*0x76d6c8*/
            inited = Trigger::initTrigger( /*0x76d6ec*/
                       v18,
                       *(char ***)(this + 1136),
                       v16,
                       v17,
                       *(_DWORD *)(this + 1132),
                       3,
                       512,
                       this + 24);
          if ( (int)v28.attachedBomb < (int)v28.nextObject /*0x76d71b*/
            || (BYTE1(v28.attachedTag) || !v28.nextObject)
            && v28.ambientSoundController[0] > 0
            && (*(unsigned __int8 (__thiscall **)(int *, char *, _DWORD))(v28.owningHouseIndex + 8))(
                 &v28.owningHouseIndex,
                 (char *)v28.nextObject + v28.ambientSoundController[0],
                 0) )
          {
            v19 = v28.attachedBomb++; /*0x76d726*/
            *(_DWORD *)(v28.fallRate + 4 * (_DWORD)v19) = inited; /*0x76d731*/
          }
          inited = 0; /*0x76d734*/
        }
        v28.ambientSoundController[1] = (int)&CCFileClass::`vftable'; /*0x76d73d*/
        v28.location[2] = 0; /*0x76d745*/
        Vector::Clear((int)&v28.isInLogic); /*0x76d74c*/
        v28.ambientSoundController[1] = (int)&off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v28.ambientSoundController[1]); /*0x76d75d*/
      }
      CCFileClass::Construct2(&v29, *(char ***)(this + 1140)); /*0x76d770*/
      if ( (unsigned __int8)CCFileClass::Open(&v29, 0) )
      {
        v20 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
        v21 = v20
            ? (MSAnim *)MSShapeAnim::Constructor(
                          v20,
                          *(char ***)(this + 1140),
                          v16,
                          v17,
                          *(_DWORD *)(this + 1132),
                          5,
                          1,
                          512)
            : 0;
        MSAnim::SetField(v21, *(_DWORD *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v21, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v21, 0); /*0x76d7d8*/
        Trigger::executeActions( /*0x76d7f0*/
          *(Trigger **)(*(_DWORD *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
          (int)v21);
        if ( (int)v28.? < v28.? /*0x76d821*/
          || (BYTE1(v28.?) || !v28.?)
          && v28.occupant > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v28.? + 8))(&v28.?, v28.occupant + v28.?, 0) )
        {
          v22 = v28.?++; /*0x76d82c*/
          *(_DWORD *)(v28.? + 4 * (_DWORD)v22) = v21; /*0x76d837*/
        }
      }
      *(_DWORD *)v29.CDFileClass = &CCFileClass::`vftable'; /*0x76d841*/
      v31 = 0; /*0x76d84c*/
      Vector::Clear((int)v30); /*0x76d853*/
      BufferIOFileClass::Destruct((BufferIOFileClass *)&v29); /*0x76d85f*/
    }
    (*(void (__thiscall **)(int *))(v25.VectorCursor_field_0x0C + 8))(&v25.VectorCursor_field_0x0C); /*0x76d86c*/
  }
  p_owningHouseIndex = &v28.owningHouseIndex; /*0x76d88b*/
  v27 = 0; /*0x76d897*/
  v25.VectorCursor_field_0x18 = (int)&VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76d89b*/
  v28.? = &v28.?; /*0x76d89f*/
  v28.? = 0; /*0x76d8a3*/
  v28.? = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v28.?) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d8c0*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d8e4*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v25.VectorCursor_field_0x18 + 4))(&v25.VectorCursor_field_0x18) ) /*0x76d905*/
      {
        if ( *(_BYTE *)(this + 1092) ) /*0x76d910*/
        {
          v23 = *(void (__thiscall ****)(_DWORD, int))(p_owningHouseIndex[1] + 4 * v27); /*0x76d925*/
          if ( v23 ) /*0x76d92a*/
            (**v23)(v23, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((String *)&v28, aTargetzoom); /*0x76d944*/
          if ( (unsigned __int8)String::NotEquals((String *)&v28, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger((Trigger *)&v25, this + 1172, 0); /*0x76d963*/
            while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d970*/
            {
              if ( !(unsigned __int8)String::Compare( /*0x76d98a*/
                                       (String *)&v28,
                                       *(const char ***)(*(_DWORD *)(v25.VectorCursor_field_0x04 + 4)
                                                       + 4 * v25.VectorCursor_field_0x08)) )
                break; /*0x76d991*/
              (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 8))(&v25); /*0x76d99b*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.__pad_0 + 4))(&v25) ) /*0x76d9b5*/
              nullsub_24(v24); /*0x76d9ca*/
            *(_DWORD *)v25.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76d9cf*/
          }
          DeleteAndZero(&v28); /*0x76d9d7*/
          PriorityQueue::Add((PriorityQueue *)this, *(_DWORD *)(p_owningHouseIndex[1] + 4 * v27)); /*0x76d9ed*/
          MSEngine::ProcessEvents((MSEngine *)this, *(_DWORD *)(p_owningHouseIndex[1] + 4 * v27), 300000); /*0x76da08*/
        }
        (*(void (__thiscall **)(int *))(v25.VectorCursor_field_0x18 + 8))(&v25.VectorCursor_field_0x18); /*0x76da15*/
      }
      PriorityQueue::Add((PriorityQueue *)this, *(_DWORD *)(*((_DWORD *)v28.? + 1) + 4 * (int)v28.?)); /*0x76da29*/
      (*((void (__thiscall **)(void **))v28.? + 2))(&v28.?); /*0x76da36*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v28.? + 1))(&v28.?) ); /*0x76da41*/
  }
  ComPtr::Set((ComPtr *)(this + 1160), *(_DWORD *)(a3 + 4)); /*0x76da5d*/
  v28.? = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76da66*/
  v25.VectorCursor_field_0x18 = (int)&VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76da6a*/
  v25.VectorCursor_field_0x0C = (int)&VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76da76*/
  v28.? = (int)&VectorClass<MSAnim *>::`vftable'; /*0x76da7e*/
  if ( v28.? && BYTE1(v28.?) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z((void *)v28.?); /*0x76da8e*/
    v28.? = 0; /*0x76da96*/
  }
  v28.owningHouseIndex = (int)&VectorClass<MSAnim *>::`vftable'; /*0x76da9e*/
  v28.? = 0; /*0x76daa2*/
  BYTE1(v28.?) = 0; /*0x76daa9*/
  if ( v28.fallRate ) /*0x76daaf*/
  {
    if ( BYTE1(v28.attachedTag) ) /*0x76dab7*/
      __3_YAXPAX_Z((void *)v28.fallRate); /*0x76daba*/
  }
}



// ==== 0x0076DAD0  ObjectClass::TerritorySelectWDT  this=ObjectClass  sig=csp ====
bool __thiscall TerritorySelectWDT(TechnoClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // bl
  MSAnim *v6; // edi
  int State; // eax
  wchar_t *StringCSF; // eax
  unsigned int CellType; // edi
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  wchar_t *v14; // eax
  DeleteAndZero *v15; // ecx
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  int v20; // edi
  wchar_t **v21; // eax
  MSAnim *v22; // edi
  int v23; // ebp
  wchar_t *v24; // eax
  wchar_t **v25; // eax
  wchar_t *v26; // [esp-4h] [ebp-3Ch]
  DeleteAndZero v27; // [esp+10h] [ebp-28h] BYREF
  WideString v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  WideString v29[4]; // [esp+20h] [ebp-18h] BYREF
  WideString v30[4]; // [esp+24h] [ebp-14h] BYREF
  DeleteAndZero v31; // [esp+28h] [ebp-10h] BYREF
  int v32; // [esp+34h] [ebp-4h]

  v3 = this->customSound_controller[1]; /*0x76dae0*/
  v4 = this->currentTargets[4]; /*0x76dae3*/
  v5 = v3 != 0; /*0x76daeb*/
  if ( *(_DWORD *)(a2 + 4) != v4 ) /*0x76daf0*/
  {
    if ( v4 ) /*0x76daf8*/
    {
      if ( v3 ) /*0x76dafc*/
        ComPtr::Set((ComPtr *)this->customSound_controller, 0); /*0x76db03*/
      TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 0, &this->vtable0); /*0x76db11*/
      v6 = *(MSAnim **)(this->currentTargets[4] + 44); /*0x76db1c*/
      if ( v6 ) /*0x76db21*/
      {
        MSAnim::SetField(v6, this->attackedTargets[2] - 1); /*0x76db2d*/
        MSAnim::GetField(v6, 0); /*0x76db36*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v6, 0); /*0x76db3f*/
      }
    }
    ComPtr::Set((ComPtr *)&this->currentTargets[3], *(_DWORD *)(a2 + 4)); /*0x76db54*/
    if ( !this->currentTargets[4] ) /*0x76db59*/
    {
      State = FileClass::GetState((RawFileClass *)(this->ambientSoundController[4] + 8)); /*0x76db6b*/
      ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)(State + 20), 0); /*0x76db76*/
      StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76db8c*/
      WideString::Assign((WideString *)&a2, StringCSF); /*0x76db96*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&a2); /*0x76dba2*/
      DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76dbab*/
      TerritorySelectWDT_Delete((TechnoClass *)&this->customSound_controller[2], 1, 0, 30); /*0x76dbb9*/
      return v5; /*0x76dbc7*/
    }
    v5 = 0; /*0x76dbce*/
    unknown_libname_74(&v27); /*0x76dbd0*/
    unknown_libname_74(&v27.DeleteAndZero_field_0x08); /*0x76dbd9*/
    CellType = WDTClass::GetCellType( /*0x76dbf0*/
                 (WDTClass *)this->turretRotateSoundController[1],
                 *(_DWORD *)(this->currentTargets[4] + 8));
    v11 = 2; /*0x76dbf2*/
    if ( CellType >= 2 ) /*0x76dbfa*/
      v11 = *(_DWORD *)(this->ambientSoundController[4] + 68) != CellType; /*0x76dc0b*/
    ScoreScreen::RemoveItem((ScoreScreen *)&this->customSound_controller[2], 3, v11, 0, 0, 30); /*0x76dc19*/
    v12 = CellType - 1; /*0x76dc1e*/
    if ( v12 ) /*0x76dc1f*/
    {
      v13 = v12 - 1; /*0x76dc25*/
      if ( v13 ) /*0x76dc26*/
      {
        if ( v13 == 1 ) /*0x76dc29*/
        {
          v16 = GetStringCSF(aWdtSovietheldt, 0, g_Str_File_WDTSel_cpp, 689); /*0x76dc71*/
          WideString::Assign(v29, v16); /*0x76dc7b*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v29); /*0x76dc87*/
          v15 = (DeleteAndZero *)v29; /*0x76dc8c*/
        }
        else
        {
          v14 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 697); /*0x76dc3c*/
          WideString::Assign(v28, v14); /*0x76dc46*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v28); /*0x76dc52*/
          v15 = (DeleteAndZero *)v28; /*0x76dc57*/
        }
      }
      else
      {
        v17 = GetStringCSF(aWdtAlliedheldt, 0, g_Str_File_WDTSel_cpp, 685); /*0x76dca3*/
        WideString::Assign(v30, v17); /*0x76dcad*/
        ScoreText::Show((ScoreText *)this, (const wchar_t **)v30); /*0x76dcb9*/
        v15 = (DeleteAndZero *)v30; /*0x76dcbe*/
      }
    }
    else
    {
      v18 = GetStringCSF(aWdtTerritoryse_0, 0, g_Str_File_WDTSel_cpp, 693); /*0x76dcd5*/
      WideString::Assign((WideString *)&v31, v18); /*0x76dcdf*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&v31); /*0x76dceb*/
      v15 = &v31; /*0x76dcf0*/
    }
    DeleteAndZero::Alt(v15); /*0x76dcf4*/
    TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 1, &this->vtable0); /*0x76dcff*/
    if ( Conflict::GetOwnerHouse(*(Conflict **)(this->ambientSoundController[4] + 12)) == this->currentTargetThreatValues[4] ) /*0x76dd18*/
    {
      v19 = this->ambientSoundController[4] + 24; /*0x76dd25*/
      v32 = 0; /*0x76dd28*/
      v31.DeleteAndZero_field_0x08 = v19; /*0x76dd30*/
      v31.DeleteAndZero_field_0x04 = (int)&VectorCursor<rc_ptr<WorldDominationTour::Conflict>,DynamicVectorClass<rc_ptr<WorldDominationTour::Conflict>>>::`vftable'; /*0x76dd34*/
      if ( Campaign_WorldDominationTour_24::AddRef((_VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *)&v31.DeleteAndZero_field_0x04) ) /*0x76dd3c*/
      {
        do /*0x76dd7b*/
        {
          v20 = *(_DWORD *)(this->currentTargets[4] + 8); /*0x76dd54*/
          if ( FindWDTTerritoryClass_Find_Find(*(ObjectClass **)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) /*0x76dd66*/
                                                               + 8 * v32
                                                               + 4)) == v20 )
            break; /*0x76dd66*/
          (*(void (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 8))(&v31.DeleteAndZero_field_0x04); /*0x76dd70*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ); /*0x76dd7b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ) /*0x76dd8a*/
      {
        v5 = 1; /*0x76dd9d*/
        ComPtr::Set( /*0x76ddaa*/
          (ComPtr *)this->customSound_controller,
          *(_DWORD *)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4));
        v21 = TerritorySelectWDT_Create( /*0x76ddc7*/
                *(char **)(*(_DWORD *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4),
                (wchar_t **)&v31);
        WideString::Reassign_Alt((WideString *)&v27, (const wchar_t **)v21); /*0x76ddd1*/
        DeleteAndZero::Alt(&v31); /*0x76ddda*/
        WideString::Reassign_Alt((WideString *)&v27.DeleteAndZero_field_0x08, (const wchar_t **)&v27); /*0x76dde8*/
        v22 = *(MSAnim **)(*(_DWORD *)(a2 + 4) + 44); /*0x76ddf4*/
        if ( v22 ) /*0x76ddf9*/
        {
          MSAnim::SetField(v22, 0xFFFFFFFF); /*0x76ddff*/
          MSAnim::GetField(v22, this->attackedTargets[2]); /*0x76de0d*/
          TerritoryUpdateDisplayWOL((ObjectClass *)v22, this->attackedTargets[2]); /*0x76de1b*/
        }
      }
    }
    v23 = this->currentTargets[4]; /*0x76de20*/
    v26 = GetStringCSF(aWdtTerritorysu, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de3d*/
    v24 = GetStringCSF(aWdtTerritorypr, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de54*/
    v25 = FormatWideStringPrefix((wchar_t **)&a2, v24, (wchar_t **)(v23 + 12)); /*0x76de5f*/
    WideString::AssignConcat((WideString *)v25, (wchar_t **)&v27.DeleteAndZero_field_0x04, v26); /*0x76de66*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76de6f*/
    if ( WideString::Length((WideString *)&v27.DeleteAndZero_field_0x08) ) /*0x76de78*/
      WideString::Append((WideString *)&v27.DeleteAndZero_field_0x04, (const wchar_t **)&v27); /*0x76de8a*/
    ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v27.DeleteAndZero_field_0x04, 0); /*0x76de98*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x04); /*0x76dea1*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x08); /*0x76deaa*/
    DeleteAndZero::Alt(&v27); /*0x76deb3*/
  }
  return v5; /*0x76dbbe*/
}



// ==== 0x0076DED0  ObjectClass::method_76DED0  this=ObjectClass  sig=csp ====
int __thiscall sub_76DED0(TechnoClass *this)
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76deda*/
  v2 = this->currentTargets[1]; /*0x76dee2*/
  *(_DWORD *)v5.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76dee8*/
  *(_DWORD *)&v5.m_1[3] = v2 + 44; /*0x76def3*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76deff*/
        (_BYTE)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] /*0x76df13*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df1a*/
      Session::RemoveTeam((Session *)this, v4); /*0x76df1f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 8))(&v5); /*0x76df2c*/
  }
  return result; /*0x76df3e*/
}



// ==== 0x0076DF50  ObjectClass::method_76DF50  this=ObjectClass  sig=csp ====
int __thiscall sub_76DF50(TechnoClass *this)
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76df5a*/
  v2 = this->currentTargets[1]; /*0x76df62*/
  *(_DWORD *)v5.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76df68*/
  *(_DWORD *)&v5.m_1[3] = v2 + 44; /*0x76df73*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76df7f*/
        (_BYTE)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] /*0x76df93*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df9a*/
      Session::RemoveTeam((Session *)this, v4); /*0x76df9f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v5.__pad_0 + 8))(&v5); /*0x76dfac*/
  }
  return result; /*0x76dfbe*/
}



// ==== 0x0076DFD0  ObjectClass::method_76DFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_76DFD0(ObjectClass *this)
{
  ObjectClass *v2; // [esp+0h] [ebp-14h]
  String v3; // [esp+4h] [ebp-10h] BYREF
  char *v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  String::Assign(&v3, aMapenter); /*0x76dfdf*/
  if ( (unsigned __int8)String::NotEquals(&v3, 0) ) /*0x76dfea*/
  {
    v4 = (char *)this + 1172; /*0x76e001*/
    v5 = 0; /*0x76e005*/
    *(_DWORD *)&v3.m_3[1] = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e00d*/
    if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v3.m_3[1]) ) /*0x76e015*/
    {
      do /*0x76e04e*/
      {
        if ( !(unsigned __int8)String::Compare(&v3, *(const char ***)(*((_DWORD *)v4 + 1) + 4 * v5)) ) /*0x76e032*/
          break; /*0x76e039*/
        (*(void (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 8))(&v3.m_3[1]); /*0x76e043*/
      }
      while ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 4))(&v3.m_3[1]) ); /*0x76e04e*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)&v3.m_3[1] + 4))(&v3.m_3[1]) ) /*0x76e05d*/
      nullsub_24(v2); /*0x76e072*/
  }
  DeleteAndZero((ObjectClass *)&v3); /*0x76e07b*/
}



// ==== 0x0076E090  ObjectClass::method_76E090  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_76E090(TechnoClass *this)
{
  ObjectClass *v3; // [esp+0h] [ebp-1Ch]
  String v4; // [esp+4h] [ebp-18h] BYREF
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v5; // [esp+10h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-4h]

  String::Assign(&v4, aMapleave); /*0x76e09f*/
  if ( (unsigned __int8)String::NotEquals(&v4, 0) ) /*0x76e0aa*/
  {
    *(_DWORD *)&v5.m_1[3] = &this->turretRotateSoundController[3]; /*0x76e0c1*/
    v6 = 0; /*0x76e0c5*/
    *(_DWORD *)v5.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e0cd*/
    if ( Vector::HasCapacity(&v5) ) /*0x76e0d5*/
    {
      do /*0x76e10e*/
      {
        if ( !(unsigned __int8)String::Compare(&v4, *(const char ***)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] + 4) + 4 * v6)) ) /*0x76e0f2*/
          break; /*0x76e0f9*/
        (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 /*0x76e103*/
                                                                                                 + 8))(&v5);
      }
      while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ); /*0x76e10e*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ) /*0x76e11d*/
      nullsub_24(v3); /*0x76e132*/
  }
  DeleteAndZero((ObjectClass *)&v4); /*0x76e13b*/
  this->currentTargets[2] = -1; /*0x76e144*/
  ComPtr::Constructor((ComPtr *)&v4.m_3[1]); /*0x76e14e*/
  *(_DWORD *)&v4.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76e15a*/
  TerritorySelectWDT(this, (int)&v4.m_3[1]); /*0x76e162*/
  *(_DWORD *)&v4.m_3[1] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76e16b*/
  return ComPtr::Release((ComPtr *)&v4.m_3[1]); /*0x76e178*/
}



// ==== 0x0076E180  ObjectClass::ShowWDTTerritorySelection_Show  this=ObjectClass  sig=csp ====
void __thiscall ShowWDTTerritorySelection_Show(TechnoClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v4; // [esp+0h] [ebp-14h]
  DeleteAndZero v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v2 = this->currentTargets[1]; /*0x76e186*/
  if ( !*(_BYTE *)(v2 + 104) ) /*0x76e18c*/
  {
    WDTGame::ToggleTeamMode(v2, &this->vtable0, 1); /*0x76e19c*/
    String::Assign((String *)&v5, aMousecancel); /*0x76e1aa*/
    if ( (unsigned __int8)String::NotEquals((String *)&v5, 0) ) /*0x76e1b5*/
    {
      v6 = 0; /*0x76e1c8*/
      v5.DeleteAndZero_field_0x08 = (int)&this->turretRotateSoundController[3]; /*0x76e1d0*/
      v5.DeleteAndZero_field_0x04 = (int)&VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76e1d8*/
      if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v5.DeleteAndZero_field_0x04) ) /*0x76e1e0*/
      {
        do /*0x76e219*/
        {
          if ( !(unsigned __int8)String::Compare( /*0x76e1fd*/
                                   (String *)&v5,
                                   *(const char ***)(*(_DWORD *)(v5.DeleteAndZero_field_0x08 + 4) + 4 * v6)) )
            break; /*0x76e204*/
          (*(void (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 8))(&v5.DeleteAndZero_field_0x04); /*0x76e20e*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ); /*0x76e219*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ) /*0x76e228*/
        nullsub_24(v4); /*0x76e23d*/
    }
    DeleteAndZero((ObjectClass *)&v5); /*0x76e246*/
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76e25c*/
    WideString::Assign((WideString *)&v5, StringCSF); /*0x76e266*/
    ScoreText::Show((ScoreText *)this, (const wchar_t **)&v5); /*0x76e272*/
    DeleteAndZero::Alt(&v5); /*0x76e27b*/
  }
}



// ==== 0x0076E2F0  ObjectClass::Team_Start_76E2F0  this=ObjectClass  sig=csp ====
char *__userpurge Team_Start_76E2F0@<eax>(int this@<ecx>, DeleteAndZero a2)
{
  int OwnerHouse; // eax
  void *v4; // ebp
  ObjectClass *v5; // ecx
  ObjectClass *v6; // edi
  int v7; // eax
  int started; // eax
  int v9; // eax
  char v11; // [esp-4h] [ebp-18h]
  WideString v12[8]; // [esp+Ch] [ebp-8h] BYREF

  WideString::Assign(v12, 0); /*0x76e2fe*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)v12, 0); /*0x76e30c*/
  DeleteAndZero::Alt((DeleteAndZero *)v12); /*0x76e315*/
  OwnerHouse = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(this + 76) + 12)); /*0x76e323*/
  v4 = *(void **)a2.__pad_0; /*0x76e328*/
  v5 = *(ObjectClass **)(this + 76); /*0x76e32c*/
  v6 = (ObjectClass *)OwnerHouse; /*0x76e330*/
  v12[0] = (WideString)1; /*0x76e332*/
  v7 = sub_764FF0(v5, *(int *)a2.__pad_0); /*0x76e337*/
  if ( (int)v6 - v7 > 8 ) /*0x76e343*/
    v7 = (int)&v6[-1].location[2]; /*0x76e345*/
  if ( (ObjectClass *)v7 == v6 ) /*0x76e34a*/
  {
    a2.__pad_0[0] = 0; /*0x76e368*/
    started = Team_Start_76E430((TechnoClass *)this, (int)v6, (bool *)a2.__pad_0); /*0x76e36d*/
    ScoreScreen::RemoveItem((ScoreScreen *)(this + 88), 2, started, a2.__pad_0[0], 1, 0); /*0x76e381*/
  }
  else
  {
    v12[0] = (WideString)!Team_Start_76E8B0((TechnoClass *)this, v7, (int)v6); /*0x76e35a*/
  }
  WideString::Assign((WideString *)&a2, 0); /*0x76e38c*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&a2, 0); /*0x76e39a*/
  DeleteAndZero::Alt(&a2); /*0x76e3a3*/
  DDraw::HandleSuspend((DDraw *)this); /*0x76e3aa*/
  while ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x76e3b5*/
  {
    if ( EventQueue::Read((EventQueue *)dword_87F770) == 27 ) /*0x76e3ce*/
      *(_BYTE *)(this + 1092) = 1; /*0x76e3d0*/
  }
  v11 = (char)v12[0]; /*0x76e3f1*/
  v9 = ActivateScreenWDT((int)v12, (int)v6); /*0x76e3ff*/
  Trigger::ProcessMapEvents(this, v6, v9, 1, v11); /*0x76e407*/
  *(_DWORD *)v12 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e410*/
  ComPtr::Release((ComPtr *)v12); /*0x76e418*/
  return sub_765000(*(_DWORD *)(this + 76), v4); /*0x76e426*/
}



// ==== 0x0076E430  ObjectClass::Team_Start_76E430  this=ObjectClass  sig=csp ====
int __thiscall Team_Start_76E430(TechnoClass *this, int a2, bool *a3)
{
  int v4; // eax
  int v5; // ecx
  int grindingAnimHandle; // ecx
  void **v8; // [esp+4h] [ebp-8h] BYREF
  WDTClass *v9; // [esp+8h] [ebp-4h]

  ActivateScreenWDT((int)&v8, a2); /*0x76e449*/
  if ( !v9 ) /*0x76e454*/
    goto LABEL_6; /*0x76e454*/
  v4 = WDTClass::CountCellType(v9, *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e45d*/
  if ( v4 <= *(_DWORD *)this->isCountedAsOwned_special ) /*0x76e468*/
  {
    v5 = this->currentTargetThreatValues[0]; /*0x76e46a*/
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e476*/
    *a3 = v4 <= v5; /*0x76e481*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e487*/
    return 1; /*0x76e495*/
  }
  if ( v4 >= this->previousTeam ) /*0x76e49e*/
  {
    grindingAnimHandle = this->grindingAnimHandle; /*0x76e4a0*/
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e4a6*/
    *a3 = v4 >= grindingAnimHandle; /*0x76e4b7*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e4bd*/
    return 0; /*0x76e4c2*/
  }
  else
  {
LABEL_6:
    v8 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e4d3*/
    *a3 = 0; /*0x76e4db*/
    ComPtr::Release((ComPtr *)&v8); /*0x76e4de*/
    return 2; /*0x76e4e3*/
  }
}



// ==== 0x0076E4F0  WDTGame::ReviewHistory  this=ObjectClass  sig=csp ====
char __userpurge WDTGame::ReviewHistory@<al>(int this@<ecx>, DeleteAndZero a2)
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
  DeleteAndZero v19; // [esp+18h] [ebp-1Ch] BYREF
  DeleteAndZero v20; // [esp+24h] [ebp-10h] BYREF

  v2 = *(_DWORD *)a2.__pad_0; /*0x76e4fb*/
  v3 = 1; /*0x76e4ff*/
  v18 = 1; /*0x76e505*/
  v17 = 0; /*0x76e509*/
  if ( *(int *)a2.__pad_0 <= a2.DeleteAndZero_field_0x04 )
  {
    while ( 1 )
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76e519*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e524*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e53d*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e53f*/
      }
      if ( *(_BYTE *)(this + 1092) ) /*0x76e556*/
        break; /*0x76e556*/
      StringCSF = GetStringCSF(aWdtReviewinghi, 0, g_Str_File_WDTSel_cpp, 995); /*0x76e575*/
      WideString::Assign((wchar_t **)&a2, StringCSF); /*0x76e57f*/
      WideString::Append2((wchar_t **)&a2, asc_830174); /*0x76e58d*/
      if ( v3 ) /*0x76e594*/
        v17 = WideString::Length((const wchar_t **)&a2); /*0x76e59f*/
      v6 = v2 + 1; /*0x76e5a3*/
      v16 = WDTGame_Helper((wchar_t **)&v20.DeleteAndZero_field_0x04, (const wchar_t *)(v2 + 1), (wchar_t *)2); /*0x76e5b3*/
      v15 = WideString::Assign((wchar_t **)&v20, (wchar_t *)asc_82083C); /*0x76e5cb*/
      v7 = GetStringCSF(aWdtReviewinghi_0, 0, g_Str_File_WDTSel_cpp, 1003); /*0x76e5de*/
      v8 = WideString::Assign((wchar_t **)&v19.DeleteAndZero_field_0x08, v7); /*0x76e5e8*/
      v9 = WideString::ConcatAlloc( /*0x76e5ef*/
             (const wchar_t **)v8,
             (wchar_t **)&v19.DeleteAndZero_field_0x04,
             (const wchar_t **)v15);
      v10 = WideString::ConcatAlloc((const wchar_t **)v9, (wchar_t **)&v19, (const wchar_t **)v16); /*0x76e5f6*/
      WideString::Append((wchar_t **)&a2, (const wchar_t **)v10); /*0x76e600*/
      DeleteAndZero::Alt(&v19); /*0x76e609*/
      DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x04); /*0x76e612*/
      DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x08); /*0x76e61b*/
      DeleteAndZero::Alt(&v20); /*0x76e624*/
      DeleteAndZero::Alt((DeleteAndZero *)&v20.DeleteAndZero_field_0x04); /*0x76e62d*/
      ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&a2, v3 == 0 ? (unsigned int)v17 : 0);
      v11 = ActivateScreenWDT((int)&v20.DeleteAndZero_field_0x08, v2); /*0x76e663*/
      Trigger::ProcessMapEvents(this, (ObjectClass *)v2, v11, 0, v18); /*0x76e66b*/
      v20.DeleteAndZero_field_0x08 = (int)&rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e674*/
      ComPtr::Release((ComPtr *)&v20.DeleteAndZero_field_0x08); /*0x76e67c*/
      v3 = 0; /*0x76e687*/
      v18 = 0; /*0x76e691*/
      MSEngine::ProcessEvents((MSEngine *)this, *(_DWORD *)(this + 1148), 300000); /*0x76e695*/
      v12 = 5; /*0x76e6a0*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e69a*/
        goto LABEL_19; /*0x76e69a*/
      do /*0x76e704*/
      {
        if ( !v12-- ) /*0x76e6ad*/
          break; /*0x76e6b2*/
        GameClass::FrameLoop((GameClass *)this, 5); /*0x76e6b8*/
        DDraw::HandleSuspend((DDraw *)this); /*0x76e6bf*/
        while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e6ca*/
        {
          if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e6e3*/
            *(_BYTE *)(this + 1092) = 1; /*0x76e6e5*/
        }
      }
      while ( !*(_BYTE *)(this + 1092) ); /*0x76e704*/
      if ( *(_BYTE *)(this + 1092) ) /*0x76e706*/
      {
LABEL_19:
        DeleteAndZero::Alt(&a2); /*0x76e737*/
        return v3; /*0x76e737*/
      }
      DeleteAndZero::Alt(&a2); /*0x76e714*/
      v2 = v6; /*0x76e71d*/
      if ( v6 > a2.DeleteAndZero_field_0x04 ) /*0x76e721*/
        return 0; /*0x76e730*/
    }
  }
  return v3; /*0x76e727*/
}



// ==== 0x0076E750  ObjectClass::Team_Start_76E750  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Start_76E750(int this, int a2)
{
  int OwnerHouse; // ebx
  int v4; // ebp
  int v5; // eax
  ScoreScreen *v6; // edi
  DeleteAndZero v8; // [esp-8h] [ebp-24h]
  DeleteAndZero v9; // [esp+10h] [ebp-Ch] BYREF

  WideString::Assign((wchar_t **)&v9, &g_TypeClass_DefaultString); /*0x76e762*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v9, 0); /*0x76e770*/
  DeleteAndZero::Alt(&v9); /*0x76e779*/
  OwnerHouse = Conflict::GetOwnerHouse(*(Conflict **)(*(_DWORD *)(this + 76) + 12)); /*0x76e794*/
  v4 = sub_764FF0(*(ObjectClass **)(this + 76), a2); /*0x76e79b*/
  if ( OwnerHouse - v4 > 8 ) /*0x76e7a4*/
    v4 = OwnerHouse - 8; /*0x76e7a6*/
  ActivateScreenWDT((int)&v9.DeleteAndZero_field_0x04, v4); /*0x76e7b8*/
  if ( v9.DeleteAndZero_field_0x08 ) /*0x76e7c3*/
  {
    v5 = WDTClass::CountCellType((WDTClass *)v9.DeleteAndZero_field_0x08, *(_DWORD *)(*(_DWORD *)(this + 76) + 68)); /*0x76e7d0*/
    if ( v5 < *(_DWORD *)(this + 1084) ) /*0x76e7db*/
    {
      v6 = (ScoreScreen *)(this + 88); /*0x76e7f9*/
      if ( v5 > *(_DWORD *)(this + 1088) ) /*0x76e7fe*/
        ScoreScreen::RemoveItem(v6, 0, 2, 1, 1, 0); /*0x76e812*/
      else
        ScoreScreen::RemoveItem(v6, 0, 1, v5 <= 0, 1, 0); /*0x76e808*/
    }
    else
    {
      ScoreScreen::RemoveItem((ScoreScreen *)(this + 88), 0, 0, v5 >= 30, 1, 0); /*0x76e7ed*/
    }
    v8.DeleteAndZero_field_0x04 = OwnerHouse; /*0x76e817*/
    *(_DWORD *)v8.__pad_0 = v4; /*0x76e818*/
    WDTGame::ReviewHistory(this, v8); /*0x76e81b*/
    while ( (unsigned __int8)j_Audio_IsPlaying() ) /*0x76e822*/
    {
      if ( *(_BYTE *)(this + 1092) ) /*0x76e82b*/
        break; /*0x76e833*/
      GameClass::FrameLoop((GameClass *)this, 5); /*0x76e839*/
      DDraw::HandleSuspend((DDraw *)this); /*0x76e840*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e84b*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e864*/
          *(_BYTE *)(this + 1092) = 1; /*0x76e866*/
      }
    }
  }
  v9.DeleteAndZero_field_0x04 = (int)&rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e88c*/
  return ComPtr::Release((ComPtr *)&v9.DeleteAndZero_field_0x04); /*0x76e899*/
}



// ==== 0x0076E8B0  ObjectClass::Team_Start_76E8B0  this=ObjectClass  sig=csp ====
bool __thiscall Team_Start_76E8B0(TechnoClass *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  char v11; // al
  bool v12; // bl
  DeleteAndZero v14; // [esp-8h] [ebp-28h]
  _DWORD v15[2]; // [esp+10h] [ebp-10h] BYREF
  _DWORD v16[2]; // [esp+18h] [ebp-8h] BYREF

  v3 = a2; /*0x76e8b4*/
  ActivateScreenWDT((int)v16, a2); /*0x76e8cc*/
  v5 = WDTClass::CountCellType((WDTClass *)v16[1], *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e8dc*/
  v6 = a3; /*0x76e8e1*/
  v7 = v5; /*0x76e8e5*/
  ActivateScreenWDT((int)v15, a3); /*0x76e8f6*/
  v8 = WDTClass::CountCellType((WDTClass *)v15[1], *(_DWORD *)(this->ambientSoundController[4] + 68)); /*0x76e906*/
  v9 = v8 - v7; /*0x76e90d*/
  if ( v8 - v7 < -1 ) /*0x76e912*/
  {
    v10 = 1; /*0x76e917*/
    if ( v9 < -3 || v8 <= this->currentTargetThreatValues[0] ) /*0x76e924*/
    {
      LOBYTE(a2) = 1; /*0x76e926*/
      goto LABEL_12; /*0x76e92b*/
    }
LABEL_11:
    LOBYTE(a2) = 0; /*0x76e971*/
    goto LABEL_12; /*0x76e971*/
  }
  if ( v9 > 1 ) /*0x76e930*/
  {
    v10 = 0; /*0x76e932*/
    if ( v9 > 3 || v8 >= this->grindingAnimHandle ) /*0x76e93f*/
    {
      LOBYTE(a2) = 1; /*0x76e941*/
      goto LABEL_12; /*0x76e946*/
    }
    goto LABEL_11; /*0x76e93f*/
  }
  v10 = 2; /*0x76e950*/
  LOBYTE(a2) = 0; /*0x76e955*/
  if ( Team_Start_76E430(this, v6, (bool *)&a2) != 1 ) /*0x76e962*/
    goto LABEL_11; /*0x76e962*/
  v11 = a2; /*0x76e964*/
  LOBYTE(a2) = 1; /*0x76e968*/
  if ( !v11 ) /*0x76e96f*/
    goto LABEL_11; /*0x76e96f*/
LABEL_12:
  ScoreScreen::RemoveItem((ScoreScreen *)&this->customSound_controller[2], 1, v10, a2, 1, 0); /*0x76e976*/
  v14.DeleteAndZero_field_0x04 = v6; /*0x76e98a*/
  *(_DWORD *)v14.__pad_0 = v3; /*0x76e98b*/
  v12 = WDTGame::ReviewHistory((int)this, v14) == 0; /*0x76e99e*/
  v15[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e9a1*/
  ComPtr::Release((ComPtr *)v15); /*0x76e9a5*/
  v16[0] = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76e9ae*/
  ComPtr::Release((ComPtr *)v16); /*0x76e9b2*/
  return v12; /*0x76e9b7*/
}



// ==== 0x0076EA20  ScoreText::ShowAlt  this=ScoreText  sig=csp ====
void __thiscall ScoreText::ShowAlt(ScoreText *this, const wchar_t **a2, int a3)
{
  const wchar_t **v4; // edi
  MSBitPrintAnim *v5; // eax
  ScoreClass *v6; // eax

  if ( *((_DWORD *)this + 287) ) /*0x76ea24*/
  {
    Session::RemoveTeam((Session *)this, *((int (__thiscall ****)(_DWORD, int))this + 287)); /*0x76ea2f*/
    (*(void (__thiscall **)(ObjectClass *, int, DSurface *, int, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x76ea5a*/
      g_DSurface_Hidden,
      *((_DWORD *)this + 279) + 124,
      DSurface_Alternate,
      *((_DWORD *)this + 279) + 124,
      0,
      1);
    Surface::CopyRect((XSurface *)this, (int *)(*((_DWORD *)this + 279) + 124)); /*0x76ea69*/
    *((_DWORD *)this + 287) = 0; /*0x76ea6e*/
  }
  v4 = a2; /*0x76ea78*/
  if ( WideString::Length((WideString *)a2) ) /*0x76ea7e*/
  {
    WideString::AssignFromPtr((WideString *)&a2, v4); /*0x76ea8c*/
    v5 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76ea93*/
    if ( v5 ) /*0x76ea9d*/
      v6 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76eab2*/
                           v5,
                           (const wchar_t **)&a2,
                           (_DWORD *)(*((_DWORD *)this + 279) + 124),
                           1);
    else
      v6 = 0; /*0x76eab9*/
    *((_DWORD *)this + 287) = v6; /*0x76eabf*/
    ScoreClass::SetState(v6, 1); /*0x76eac5*/
    PriorityQueue::Add((PriorityQueue *)this, *((_DWORD *)this + 287)); /*0x76ead3*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76eadc*/
  }
}



// ==== 0x0076EAF0  ScoreText::Show  this=ScoreText  sig=csp ====
void __thiscall ScoreText::Show(ScoreText *this, const wchar_t **a2)
{
  int *v3; // eax
  int v4; // edx
  int (__thiscall ***v5)(_DWORD, int); // eax
  const wchar_t **v6; // edi
  MSBitPrintAnim *v7; // eax
  ScoreClass *v8; // eax
  int v9[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = (int *)(*((_DWORD *)this + 279) + 140); /*0x76eafd*/
  v9[0] = *v3; /*0x76eb04*/
  v9[1] = v3[1]; /*0x76eb0b*/
  v9[2] = v3[2]; /*0x76eb12*/
  v4 = v3[3]; /*0x76eb16*/
  v5 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 288); /*0x76eb19*/
  v9[3] = v4; /*0x76eb21*/
  if ( v5 ) /*0x76eb25*/
  {
    Session::RemoveTeam((Session *)this, v5); /*0x76eb2a*/
    (*(void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x76eb4c*/
      g_DSurface_Hidden,
      v9,
      DSurface_Alternate,
      v9,
      0,
      1);
    Surface::CopyRect((XSurface *)this, v9); /*0x76eb56*/
    *((_DWORD *)this + 288) = 0; /*0x76eb5b*/
  }
  v6 = a2; /*0x76eb65*/
  if ( WideString::Length((WideString *)a2) ) /*0x76eb6b*/
  {
    WideString::AssignFromPtr((WideString *)&a2, v6); /*0x76eb79*/
    v7 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76eb80*/
    if ( v7 ) /*0x76eb8a*/
      v8 = (ScoreClass *)MSBitPrintAnim::Construct(v7, (const wchar_t **)&a2, v9, 0); /*0x76eb9a*/
    else
      v8 = 0; /*0x76eba1*/
    *((_DWORD *)this + 288) = v8; /*0x76eba7*/
    ScoreClass::SetState(v8, 1); /*0x76ebad*/
    PriorityQueue::Add((PriorityQueue *)this, *((_DWORD *)this + 288)); /*0x76ebbb*/
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x76ebc4*/
  }
}



// ==== 0x0076EBE0  MSSfxClass::FindByName  this=ObjectClass  sig=csp ====
int __thiscall MSSfxClass::FindByName(char *this, const char **a2)
{
  int result; // eax
  ObjectClass *v4; // [esp+0h] [ebp-14h]
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h]

  result = String::NotEquals((String *)a2, 0); /*0x76ebef*/
  if ( (_BYTE)result ) /*0x76ebf6*/
  {
    *(_DWORD *)&v5.m_1[3] = this + 1172; /*0x76ec02*/
    v6 = 0; /*0x76ec06*/
    *(_DWORD *)v5.__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76ec0e*/
    if ( Vector::HasCapacity(&v5) ) /*0x76ec16*/
    {
      do /*0x76ec4d*/
      {
        if ( !(unsigned __int8)String::Compare( /*0x76ec31*/
                                 (String *)a2,
                                 *(const char ***)(*(_DWORD *)(*(_DWORD *)&v5.m_1[3] + 4) + 4 * v6)) )
          break; /*0x76ec38*/
        (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 /*0x76ec42*/
                                                                                                 + 8))(&v5);
      }
      while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5) ); /*0x76ec4d*/
    }
    result = (*(int (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)v5.__pad_0 + 4))(&v5); /*0x76ec5c*/
    if ( (_BYTE)result ) /*0x76ec61*/
      return nullsub_24(v4); /*0x76ec71*/
  }
  return result; /*0x76ec76*/
}



// ==== 0x0076ECD0  Team_Start_76ECD0  this=-  sig=ida-proto ====
void __fastcall sub_76ECD0(int a1, int a2)
{
  _BYTE v4[1200]; // [esp+8h] [ebp-4B0h] BYREF

  Timer::PumpMessages((HWND *)dword_87F770); /*0x76ece2*/
  ConstructWDTSelection((int)v4, a1, a2); /*0x76eced*/
  Team_Start_76E750((int)v4, a2); /*0x76ecf7*/
  SelectionInitializeWOL((int)v4); /*0x76ed00*/
}



// ==== 0x0076ED10  Team_Start_76ED10  this=-  sig=ida-proto ====
bool __fastcall sub_76ED10(int a1, int a2)
{
  int State; // eax
  wchar_t *StringCSF; // eax
  bool v6; // bl
  int v7; // edx
  bool v8; // al
  void **v9; // [esp+4h] [ebp-4C0h] BYREF
  int v10; // [esp+8h] [ebp-4BCh]
  void **v11; // [esp+Ch] [ebp-4B8h] BYREF
  int v12; // [esp+10h] [ebp-4B4h]
  int v13[300]; // [esp+14h] [ebp-4B0h] BYREF

  if ( !*(_DWORD *)(a1 + 4) ) /*0x76ed10*/
    return 0; /*0x76ed20*/
  ConstructWDTSelection((int)v13, a1, a2); /*0x76ed31*/
  State = FileClass::GetState((_DWORD *)(v13[19] + 8)); /*0x76ed3f*/
  ScoreText::ShowAlt(v13, (const wchar_t **)(State + 20), 0); /*0x76ed4c*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76ed62*/
  WideString::Assign((wchar_t **)&v9, StringCSF); /*0x76ed6c*/
  ScoreText::Show(v13, (const wchar_t **)&v9); /*0x76ed7a*/
  DeleteAndZero::Alt((void **)&v9); /*0x76ed83*/
  Team_Start_76E2F0((int)v13, a2); /*0x76ed8d*/
  ShowWDTTerritorySelection(v13, (int)&v11); /*0x76ed9b*/
  v6 = v12 != 0; /*0x76eda6*/
  if ( v12 ) /*0x76edab*/
  {
    *(_DWORD *)dword_A8B240 = *(_DWORD *)(v12 + 8); /*0x76edba*/
    FindWDTTerritoryClass(&v9, *(int *)dword_A8B240); /*0x76edbf*/
    if ( v10 ) /*0x76edca*/
    {
      MEMORY[0xA8B270] = *(unsigned __int8 *)(v10 + 14); /*0x76edd7*/
      g_RulesInitConfig = *(unsigned __int8 *)(v10 + 15); /*0x76ede2*/
      MEMORY[0xA8B25C] = *(unsigned __int16 *)(v10 + 16); /*0x76edec*/
      v7 = *(_DWORD *)(v10 + 56) >> 2; /*0x76edf5*/
      byte_A8B31D = 0; /*0x76edfd*/
      byte_A8B31C = v7 & 1; /*0x76ee06*/
      MEMORY[0xA8B258] = (*(_DWORD *)(v10 + 56) & 0x10) != 0; /*0x76ee14*/
      LOBYTE(v7) = (*(_DWORD *)(v10 + 56) & 0x20) != 0; /*0x76ee20*/
      byte_A8B31F = 0; /*0x76ee22*/
      LOBYTE(dword_A8B320) = v7; /*0x76ee29*/
      MEMORY[0xA8B260] = 1; /*0x76ee2f*/
      MEMORY[0xA8B261] = BYTE1(*(_DWORD *)(v10 + 56)) & 1; /*0x76ee3d*/
      MEMORY[0xA8B262] = (*(_DWORD *)(v10 + 56) & 0x400) != 0; /*0x76ee4b*/
      v8 = (*(_DWORD *)(v10 + 56) & 0x200) != 0; /*0x76ee57*/
      LOBYTE(MEMORY[0xA8B264]) = 0; /*0x76ee59*/
      MEMORY[0xA8B263] = v8; /*0x76ee60*/
      MEMORY[0xA8B274] = 0; /*0x76ee65*/
      MEMORY[0xA8B278] = 1; /*0x76ee6f*/
    }
    else
    {
      v6 = 0; /*0x76ee77*/
    }
    v9 = &rc_ptr<WDTTerritory>::`vftable'; /*0x76ee7d*/
    ComPtr::Release(&v9); /*0x76ee85*/
  }
  v11 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ee8e*/
  ComPtr::Release(&v11); /*0x76ee96*/
  SelectionInitializeWOL((int)v13); /*0x76ee9f*/
  return v6; /*0x76ed22*/
}



// ==== 0x0076EEB0  ObjectClass::ConstructWDTSelection_Create_76EEB0  this=ObjectClass  sig=csp ====
int __thiscall ConstructWDTSelection_Create_76EEB0(TechnoClass *this)
{
  String *v2; // edi
  char *v3; // eax
  int v4; // eax
  int result; // eax

  v2 = (String *)&this->turretRotateSoundController[2]; /*0x76eeb6*/
  byte_A8ED9C = 0; /*0x76eebc*/
  if ( (unsigned __int8)String::NotEquals((String *)&this->turretRotateSoundController[2], 0) ) /*0x76eec5*/
  {
    v3 = String::GetOrEmpty(v2); /*0x76eed0*/
    v4 = StringList::Find((StringList *)&unk_A83D10, v3); /*0x76eedb*/
    ThemeClass::Play((ThemeClass *)&unk_A83D10, v4); /*0x76eee6*/
    byte_A83D20 = 1; /*0x76eeeb*/
  }
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x76eefa*/
  (*(void (__thiscall **)(DSurface *, _DWORD))(DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate, 0); /*0x76ef07*/
  (*(void (__thiscall **)(ObjectClass *, _DWORD))(g_DSurface_Hidden->vtable0 + 24))(g_DSurface_Hidden, 0); /*0x76ef14*/
  (*(void (__thiscall **)(DSurface *, ObjectClass *, _DWORD, int))(g_DSurface_Primary->DSurface_field_0x0 + 4))( /*0x76ef29*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  Timer::PumpMessages((Timer *)dword_87F770); /*0x76ef32*/
  ConstructWDTSelection_Create_76EEB0_Create( /*0x76ef42*/
    (ObjectClass *)this->currentTargets[1],
    this,
    &this->customSound_controller[2]);
  for ( result = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640); /*0x76ef56*/
        result < 0;
        result = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) )
  {
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x76ef60*/
  }
  return result; /*0x76ef52*/
}



// ==== 0x0076EFE0  Selection_WorldDominationTour::QueryInterface  this=Selection@WorldDominationTour  sig=csp ====
void *__thiscall WOL::QueryInterface(Selection_WorldDominationTour *this, char a2)
{
  SelectionInitializeWOL((int)this); /*0x76efe3*/
  if ( (a2 & 1) != 0 ) /*0x76efed*/
    __3_YAXPAX_Z(this); /*0x76eff0*/
  return this; /*0x76effa*/
}



// ==== 0x0076F000  ComPtr::DestroyWrapper  this=ObjectClass  sig=csp ====
int __stdcall ComPtr_DestroyWrapper(int a1, int a2)
{
  FindTerritoryWOL(a2); /*0x76f00f*/
  return a1; /*0x76f016*/
}



// ==== 0x0076F020  FileClass::GetState  this=FileClass  sig=csp ====
int __thiscall FileClass::GetState(RawFileClass *this)
{
  return this->FilePointer; /*0x76f023*/
}



// ==== 0x0076F030  WDTGame::Constructor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall WDTGame::Constructor(WDTGame *this, int a2)
{
  ComPtr::Constructor((ComPtr *)this); /*0x76f033*/
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f03c*/
  ComPtr::Set((ComPtr *)this, *(_DWORD *)(a2 + 4)); /*0x76f048*/
  return this->__pad_0; /*0x76f04f*/
}



// ==== 0x0076F060  ComPtr::Territory_Dtor  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ComPtr::Territory_Dtor(ComPtr *this)
{
  *(_DWORD *)this->__pad_0 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f060*/
  return ComPtr::Release(this);
}



// ==== 0x0076F070  FileClass::SetState  this=FileClass  sig=csp ====
int __thiscall FileClass::SetState(RawFileClass *this)
{
  return this->FilePointer; /*0x76f073*/
}



// ==== 0x0076F080  Count::Get  this=Count  sig=csp ====
int __thiscall Count::Get(Count *this)
{
  return *((_DWORD *)this + 1); /*0x76f083*/
}



// ==== 0x0076F090  Trigger::processTrigger  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Trigger::processTrigger(Trigger *this, int a2, int a3)
{
  this->Trigger_field_0x4 = (MSAnim *)a2; /*0x76f09a*/
  *(_DWORD *)this->__pad_8 = a3; /*0x76f09d*/
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76f0a0*/
  return this->__pad_0; /*0x76f0a6*/
}



// ==== 0x0076F0B0  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::HasCapacity  this=VectorCursor  sig=csp ====
BOOL __thiscall Vector::HasCapacity(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0bd*/
}



// ==== 0x0076F0C0  VectorCursor::Construct  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::Construct(VectorCursor *this, int a2, int a3)
{
  this->VectorCursor_field_0x04 = a2; /*0x76f0ca*/
  this->VectorCursor_field_0x08 = a3; /*0x76f0cd*/
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76f0d0*/
  return this->__pad_0; /*0x76f0d6*/
}



// ==== 0x0076F0E0  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::HasNext  this=VectorCursor  sig=csp ====
BOOL __thiscall VectorCursor::HasNext(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0ed*/
}



// ==== 0x0076F0F0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::AddRef  this=VectorCursor  sig=csp ====
BOOL __thiscall CampaignProperties_WorldDominationTour_22::AddRef(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  return this->q008 < *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 16); /*0x76f0fd*/
}



// ==== 0x0076F100  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::initCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::initCursor(
        _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable'; /*0x76f109*/
  if ( (a2 & 1) != 0 ) /*0x76f10f*/
    __3_YAXPAX_Z(this); /*0x76f112*/
  return this->__pad_0; /*0x76f11c*/
}



// ==== 0x0076F120  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::updateCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::updateCursor(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this,
        char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76f129*/
  if ( (a2 & 1) != 0 ) /*0x76f12f*/
    __3_YAXPAX_Z(this); /*0x76f132*/
  return this->__pad_0; /*0x76f13c*/
}



// ==== 0x0076F140  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::drawCursor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::drawCursor(_VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &VectorCursor<MSAnim *,DynamicVectorClass<MSAnim *>>::`vftable'; /*0x76f149*/
  if ( (a2 & 1) != 0 ) /*0x76f14f*/
    __3_YAXPAX_Z(this); /*0x76f152*/
  return this->__pad_0; /*0x76f15c*/
}



// ==== 0x0076F160  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::Release(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  ++this->q008; /*0x76f162*/
  return this->__pad_0; /*0x76f165*/
}



// ==== 0x0076F170  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall Count::ddtor(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *this)
{
  --this->q008; /*0x76f172*/
  return this->__pad_0; /*0x76f175*/
}



// ==== 0x0076F180  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::Release(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  ++this->q008; /*0x76f182*/
  return this->__pad_0; /*0x76f185*/
}



// ==== 0x0076F190  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall VectorCursor::ddtor(
        _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *this)
{
  --this->q008; /*0x76f192*/
  return this->__pad_0; /*0x76f195*/
}



// ==== 0x0076F1A0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::Release  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::Release(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  ++this->q008; /*0x76f1a2*/
  return this->__pad_0; /*0x76f1a5*/
}



// ==== 0x0076F1B0  _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim::ddtor  this=VectorCursor  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::ddtor(
        _VectorCursor_PAVMSAnim_V_DynamicVectorClass_PAVMSAnim *this)
{
  --this->q008; /*0x76f1b2*/
  return this->__pad_0; /*0x76f1b5*/
}



// ==== 0x0076F1C0  Trigger::checkCondition  this=VectorClass  sig=csp ====
_DWORD *__thiscall Trigger::checkCondition(Trigger *this, int a2, int a3)
{
  this->Trigger_field_0x4 = 0; /*0x76f1cb*/
  *(_DWORD *)this->__pad_8 = a2; /*0x76f1ce*/
  this->__pad_8[4] = 1; /*0x76f1d1*/
  this->__pad_8[5] = 0; /*0x76f1d5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x76f1d8*/
  if ( a2 ) /*0x76f1de*/
  {
    if ( a3 ) /*0x76f1e6*/
    {
      this->Trigger_field_0x4 = (MSAnim *)a3; /*0x76f1e8*/
      return this->__pad_0; /*0x76f1ee*/
    }
    this->Trigger_field_0x4 = (MSAnim *)__2_YAPAXI_Z(4 * a2); /*0x76f1fd*/
    this->__pad_8[5] = 1; /*0x76f200*/
  }
  return this->__pad_0; /*0x76f1ed*/
}



// ==== 0x0076F210  VectorClass::ConstructWDTSelection_Create_76F210  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_76F210(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x76f21b*/
  this->Capacity = a2; /*0x76f21e*/
  this->IsInitialized = 1; /*0x76f221*/
  this->IsAllocated = 0; /*0x76f225*/
  this->vtable0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x76f228*/
  if ( a2 ) /*0x76f22e*/
  {
    if ( a3 ) /*0x76f236*/
    {
      this->Items = (void *)a3; /*0x76f238*/
      return &this->vtable0; /*0x76f23e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x76f24d*/
    this->IsAllocated = 1; /*0x76f250*/
  }
  return &this->vtable0; /*0x76f23d*/
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
ComPtr *__fastcall ActivateScreenWDT_Create(ComPtr *a1, int a2, unsigned int a3)
{
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax

  v5 = __2_YAPAXI_Z(0x14u); /*0x76f479*/
  v6 = v5; /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = (_DWORD *)(v5 + 8); /*0x76f488*/
    *(_DWORD *)(v5 + 4) = 0; /*0x76f48d*/
    *(_DWORD *)v5 = &ReferenceCounted::`vftable'; /*0x76f494*/
    ComPtr::Constructor((ComPtr *)(v5 + 8)); /*0x76f49a*/
    *v7 = &rc_ptr<WDTState>::`vftable'; /*0x76f49f*/
    ComPtr::Set((ComPtr *)(v6 + 8), *(_DWORD *)(a2 + 4)); /*0x76f4ab*/
    *(_DWORD *)(v6 + 16) = 0; /*0x76f4b0*/
    *(_DWORD *)v6 = &WorldDominationTour::State::`vftable'; /*0x76f4b7*/
    v8 = *(_DWORD *)(v6 + 12); /*0x76f4bd*/
    if ( v8 && a3 < *(_DWORD *)(v8 + 36) ) /*0x76f4ce*/
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(_DWORD *)(v8 + 68) + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  *(_DWORD *)a1->__pad_0 = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76f4e6*/
  ComPtr::Set(a1, v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}



// ==== 0x0076F500  rc_ptr::ConstructWDTSelection_Create_76F500  this=rc_ptr  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_76F500(rc_ptr *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v2 = __2_YAPAXI_Z(0x14u); /*0x76f506*/
  v3 = (_DWORD *)v2; /*0x76f50b*/
  if ( v2 ) /*0x76f512*/
  {
    v4 = (_DWORD *)(v2 + 8); /*0x76f515*/
    *(_DWORD *)(v2 + 4) = 0; /*0x76f51a*/
    *(_DWORD *)v2 = &ReferenceCounted::`vftable'; /*0x76f521*/
    ComPtr::Constructor((ComPtr *)(v2 + 8)); /*0x76f527*/
    *v4 = &rc_ptr<WDTState>::`vftable'; /*0x76f52c*/
    v3[4] = 0; /*0x76f532*/
    *v3 = &WorldDominationTour::State::`vftable'; /*0x76f539*/
  }
  else
  {
    v3 = 0; /*0x76f542*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76f546*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76f54d*/
  ComPtr::Set((ComPtr *)this, (int)v3); /*0x76f554*/
  return this; /*0x76f55b*/
}



// ==== 0x0076F600  WDTClass::GetCellType  this=WDTClass  sig=csp ====
int __thiscall WDTClass::GetCellType(WDTClass *this, unsigned int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *((_DWORD *)this + 3) ) /*0x76f600*/
  {
    v2 = this->q004; /*0x76f607*/
    if ( v2 ) /*0x76f60c*/
    {
      if ( a2 < *(_DWORD *)(*((_DWORD *)this + 3) + 32) ) /*0x76f61c*/
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
int __thiscall WDTClass::CountCellType(WDTClass *this, int a2)
{
  unsigned __int8 *v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx

  if ( !*((_DWORD *)this + 3) ) /*0x76f670*/
    return 0; /*0x76f670*/
  v2 = (unsigned __int8 *)this->q004; /*0x76f677*/
  if ( !v2 ) /*0x76f67c*/
    return 0; /*0x76f6b6*/
  result = 0; /*0x76f682*/
  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 32) ) /*0x76f687*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 3) + 32); /*0x76f693*/
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
  ComPtr *v3; // ecx

  v3 = (ComPtr *)(this + 2); /*0x76f6c3*/
  *this = (State_WorldDominationTour)&WorldDominationTour::State::`vftable'; /*0x76f6c6*/
  *(_DWORD *)v3->__pad_0 = &rc_ptr<WDTState>::`vftable'; /*0x76f6cc*/
  ComPtr::Release(v3); /*0x76f6d2*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76f6d9*/
  if ( (a2 & 1) != 0 ) /*0x76f6e3*/
    __3_YAXPAX_Z(this); /*0x76f6e6*/
  return this; /*0x76f6f0*/
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
_DWORD *__fastcall ArtConfig_Read(rc_ptr *this, int a2, _DWORD *a3, char *Source, const char **a5, const char **a6)
{
  char *v8; // eax
  char *v9; // edi

  v8 = (char *)__2_YAPAXI_Z(0x30u); /*0x76f918*/
  if ( v8 ) /*0x76f922*/
    v9 = WorldDominationTour::Territory::Constructor(v8, a2, a3, Source, a5, a6); /*0x76f940*/
  else
    v9 = 0; /*0x76f944*/
  ComPtr::Constructor((ComPtr *)this); /*0x76f948*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76f94f*/
  ComPtr::Set((ComPtr *)this, (int)v9); /*0x76f956*/
  return this; /*0x76f95d*/
}



// ==== 0x0076F970  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
char *__thiscall WorldDominationTour::Territory::Constructor(
        char *this,
        int a2,
        _DWORD *a3,
        char *Source,
        const char **a5,
        const char **a6)
{
  int v6; // ebp
  _DWORD *v8; // edi
  _DWORD *v9; // ebx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char *v14; // eax
  wchar_t *StringCSF; // eax
  char **v16; // eax
  char *v17; // ebp
  int *CoordPair; // eax
  int v19; // ecx
  int v20; // eax
  char **v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int *v28; // eax
  int v29; // ecx
  int v30; // eax
  void *v32; // [esp+10h] [ebp-14h] BYREF
  void *v33; // [esp+14h] [ebp-10h] BYREF
  void *v34; // [esp+18h] [ebp-Ch] BYREF
  int v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = a2; /*0x76f975*/
  *((_DWORD *)this + 1) = 0; /*0x76f982*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x76f985*/
  *((_DWORD *)this + 2) = v6; /*0x76f98b*/
  unknown_libname_74(this + 12); /*0x76f98e*/
  v8 = this + 16; /*0x76f993*/
  *((_DWORD *)this + 4) = 0; /*0x76f999*/
  *((_DWORD *)this + 5) = 0; /*0x76f99b*/
  v9 = this + 24; /*0x76f99e*/
  *((_DWORD *)this + 6) = 0; /*0x76f9a1*/
  *((_DWORD *)this + 7) = 0; /*0x76f9a7*/
  unknown_libname_73(this + 32); /*0x76f9ae*/
  *((_DWORD *)this + 9) = 0; /*0x76f9ba*/
  *((_DWORD *)this + 10) = 0; /*0x76f9bd*/
  *((_DWORD *)this + 11) = 0; /*0x76f9c0*/
  *(_DWORD *)this = &WorldDominationTour::Territory::`vftable'; /*0x76f9d0*/
  v10 = FormatStringInt((char **)v35, v6, 2); /*0x76f9d6*/
  v11 = ConcatStringAlloc((char **)&v34, a5, v10); /*0x76f9e4*/
  v12 = String::Concat2((const char **)v11, (char **)&v33, aShp_0); /*0x76f9eb*/
  String::Reassign((char **)this + 8, (const char **)v12); /*0x76f9f4*/
  DeleteAndZero(&v33); /*0x76f9fd*/
  DeleteAndZero(&v34); /*0x76fa06*/
  DeleteAndZero((void **)v35); /*0x76fa0f*/
  v13 = FormatStringInt((char **)&a5, v6, 2); /*0x76fa1c*/
  ConcatStringAlloc((char **)&v32, a6, v13); /*0x76fa2a*/
  DeleteAndZero((void **)&a5); /*0x76fa33*/
  v14 = String::GetOrEmpty((char **)&v32); /*0x76fa43*/
  StringCSF = GetStringCSF((wchar_t *)v14, 0, aDRa2mdpostWdtt, 39); /*0x76fa4c*/
  WideString::Assign_Alt((void **)this + 3, StringCSF); /*0x76fa55*/
  FromStringInt((char **)&a2, g_DisplayWidth); /*0x76fa64*/
  v16 = ProcessStringAndCopy((char **)&a5, aTarget_0, (char **)&a2); /*0x76fa78*/
  v17 = Source; /*0x76fa7d*/
  CoordPair = INIClass::GetCoordPair(a3, v35, Source, v16, (_DWORD *)this + 4); /*0x76fa8c*/
  v19 = *CoordPair; /*0x76fa91*/
  v20 = CoordPair[1]; /*0x76fa93*/
  *((_DWORD *)this + 4) = v19; /*0x76fa96*/
  *((_DWORD *)this + 5) = v20; /*0x76fa9c*/
  DeleteAndZero((void **)&a5); /*0x76fa9f*/
  v21 = ProcessStringAndCopy((char **)&a5, aOrigin_0, (char **)&a2); /*0x76fab3*/
  v22 = INIClass::GetCoordPair(a3, v35, v17, v21, (_DWORD *)this + 6); /*0x76fac3*/
  v23 = *v22; /*0x76fac8*/
  v24 = v22[1]; /*0x76faca*/
  *((_DWORD *)this + 6) = v23; /*0x76facd*/
  *((_DWORD *)this + 7) = v24; /*0x76fad3*/
  DeleteAndZero((void **)&a5); /*0x76fad6*/
  if ( g_DisplayWidth > 800 ) /*0x76fae5*/
  {
    if ( !*v8 && !*((_DWORD *)this + 5) ) /*0x76faf0*/
    {
      String::Assign((char **)&a5, aTarget800); /*0x76fb00*/
      v25 = INIClass::GetCoordPair(a3, v35, v17, (char **)&a5, (_DWORD *)this + 4); /*0x76fb15*/
      v26 = *v25; /*0x76fb1a*/
      v27 = v25[1]; /*0x76fb1c*/
      *v8 = v26; /*0x76fb1f*/
      *((_DWORD *)this + 5) = v27; /*0x76fb25*/
      DeleteAndZero((void **)&a5); /*0x76fb28*/
    }
    if ( !*v9 && !*((_DWORD *)this + 7) ) /*0x76fb32*/
    {
      String::Assign((char **)&a5, aOrigin800); /*0x76fb42*/
      v28 = INIClass::GetCoordPair(a3, v35, v17, (char **)&a5, (_DWORD *)this + 6); /*0x76fb57*/
      v29 = *v28; /*0x76fb5c*/
      v30 = v28[1]; /*0x76fb5e*/
      *v9 = v29; /*0x76fb61*/
      *((_DWORD *)this + 7) = v30; /*0x76fb67*/
      DeleteAndZero((void **)&a5); /*0x76fb6a*/
    }
  }
  DeleteAndZero((void **)&a2); /*0x76fb73*/
  DeleteAndZero(&v32); /*0x76fb7c*/
  return this; /*0x76fb83*/
}



// ==== 0x0076FB90  ArtConfig::resetConfig  this=ArtConfig  sig=csp ====
int __thiscall sub_76FB90(int this, _DWORD *a2, int a3, _DWORD *a4)
{
  char **v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  void *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (char **)(this + 32); /*0x76fba8*/
  v6 = a4[1] + *(_DWORD *)(this + 28); /*0x76fbab*/
  v7 = *a4 + *(_DWORD *)(this + 24); /*0x76fbb2*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fbb4*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fbbf*/
  {
    v8 = __2_YAPAXI_Z(0x4Cu); /*0x76fbca*/
    if ( v8 ) /*0x76fbd4*/
      v9 = MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(a2 + 6), 1, -1, 0); /*0x76fbf6*/
    else
      v9 = 0; /*0x76fbfd*/
    *(_DWORD *)(this + 36) = v9; /*0x76fbff*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v9 + 4))(v9, 0); /*0x76fc08*/
    PriorityQueue::Add(a2, *(_DWORD *)(this + 36)); /*0x76fc16*/
  }
  v11[0] = &CCFileClass::`vftable'; /*0x76fc1f*/
  v13 = 0; /*0x76fc27*/
  Vector::Clear((int)v12); /*0x76fc2f*/
  v11[0] = &off_7E1668; /*0x76fc38*/
  return BufferIOFileClass::Dtor(v11); /*0x76fc45*/
}



// ==== 0x0076FC50  ArtConfig::validateConfig  this=ArtConfig  sig=csp ====
int __thiscall sub_76FC50(int this, _DWORD *a2, int a3, _DWORD *a4)
{
  char **v5; // ebp
  int v6; // ebx
  int v7; // edi
  void *v8; // eax
  void *v9; // eax
  _DWORD v11[22]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+68h] [ebp-14h] BYREF
  int v13; // [esp+74h] [ebp-8h]

  v5 = (char **)(this + 32); /*0x76fc68*/
  v6 = a4[1] + *(_DWORD *)(this + 28); /*0x76fc6b*/
  v7 = *a4 + *(_DWORD *)(this + 24); /*0x76fc72*/
  CCFileClass::Construct2(v11, (char **)(this + 32)); /*0x76fc74*/
  if ( CCFileClass::Open(v11, 0) ) /*0x76fc7f*/
  {
    v8 = __2_YAPAXI_Z(0x4Cu); /*0x76fc8a*/
    if ( v8 ) /*0x76fc94*/
      v9 = MSOverlayAnim::Init(v8, v5, v7, v6, a3, 0, (int)(a2 + 6), 1, 0, 0); /*0x76fcb6*/
    else
      v9 = 0; /*0x76fcbd*/
    *(_DWORD *)(this + 40) = v9; /*0x76fcbf*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v9 + 4))(v9, 0); /*0x76fcc8*/
    PriorityQueue::Add(a2, *(_DWORD *)(this + 40)); /*0x76fcd6*/
  }
  v11[0] = &CCFileClass::`vftable'; /*0x76fcdf*/
  v13 = 0; /*0x76fce7*/
  Vector::Clear((int)v12); /*0x76fcef*/
  v11[0] = &off_7E1668; /*0x76fcf8*/
  return BufferIOFileClass::Dtor(v11); /*0x76fd05*/
}



// ==== 0x0076FD40  ObjectClass::Map_Process_76FD40  this=ObjectClass  sig=csp ====
void __userpurge sub_76FD40(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int *a5, int a6)
{
  int v7; // ecx
  int v8; // ebp
  int *v9; // eax
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]
  int v21; // [esp+14h] [ebp-30h] BYREF
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  _DWORD v25[2]; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+2Ch] [ebp-18h]
  char v27[12]; // [esp+38h] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(a1 + 36); /*0x76fd46*/
  if ( v7 ) /*0x76fd4b*/
  {
    v8 = -1; /*0x76fd57*/
    switch ( a4 ) /*0x76fd5c*/
    {
      case 1: /*0x76fd5c*/
        v8 = 3; /*0x76fd72*/
        break;
      case 2: /*0x76fd5c*/
        v8 = 2; /*0x76fd6b*/
        break;
      case 3: /*0x76fd5c*/
        v8 = 1; /*0x76fd64*/
        break;
    }
    v9 = (int *)(*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v7 + 24))(v7, v25, a3, a2); /*0x76fd7e*/
    v10 = *v9; /*0x76fd81*/
    v11 = v9[1]; /*0x76fd85*/
    v21 = v9[2]; /*0x76fd8b*/
    v22 = v9[3]; /*0x76fd92*/
    if ( v8 < 0 ) /*0x76fd96*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 4))(*(_DWORD *)(a1 + 36), 0); /*0x76fdbc*/
    }
    else
    {
      MSAnim::Reset(*(_DWORD **)(a1 + 36), v8); /*0x76fd9c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 36) + 4))(*(_DWORD *)(a1 + 36), 1); /*0x76fda8*/
      Map_Process_5CC690(*(_DWORD **)(a1 + 36)); /*0x76fdae*/
    }
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a1 + 36) + 24))(*(_DWORD *)(a1 + 36), v27); /*0x76fdcb*/
    v25[0] = *v12; /*0x76fdd2*/
    v25[1] = v12[1]; /*0x76fdd9*/
    if ( (int)v12[2] <= 0 || (int)v12[3] <= 0 ) /*0x76fde9*/
    {
      v17 = v19; /*0x76fe60*/
      v16 = v20; /*0x76fe64*/
      v13 = v10; /*0x76fe68*/
      v15 = v11; /*0x76fe6a*/
    }
    else if ( v19 <= 0 || v20 <= 0 ) /*0x76fdf9*/
    {
      v13 = *v12; /*0x76fe53*/
      v15 = v12[1]; /*0x76fe55*/
      v17 = v12[2]; /*0x76fe58*/
      v16 = v12[3]; /*0x76fe5b*/
    }
    else
    {
      v13 = *v12; /*0x76fdfb*/
      v14 = v12[2]; /*0x76fdfd*/
      v15 = v12[1]; /*0x76fe00*/
      v16 = v12[3]; /*0x76fe03*/
      v26 = v14; /*0x76fe08*/
      if ( v13 > v10 ) /*0x76fe0c*/
      {
        v14 += v13 - v10; /*0x76fe10*/
        v13 = v10; /*0x76fe12*/
        v26 = v14; /*0x76fe14*/
      }
      if ( v15 > v11 ) /*0x76fe1a*/
      {
        v16 += v15 - v11; /*0x76fe1e*/
        v15 = v11; /*0x76fe20*/
      }
      if ( v13 + v14 >= v10 + v19 ) /*0x76fe28*/
        v17 = v26; /*0x76fe36*/
      else
        v17 = v19 - v13 + v10 + 1; /*0x76fe30*/
      if ( v16 + v15 < v11 + v20 ) /*0x76fe45*/
        v16 = v11 - v15 + v20 + 1; /*0x76fe4d*/
    }
    v21 = v13; /*0x76fe6c*/
    v23 = v17; /*0x76fe70*/
    v22 = v15; /*0x76fe7f*/
    v24 = v16; /*0x76fe83*/
    Team::ReleaseAll(a5, (int)&v21); /*0x76fe87*/
    DSurface::Flip2(); /*0x76fe8e*/
    GameClass::FrameLoop(a5, 1); /*0x76fe97*/
  }
}



// ==== 0x0076FEB0  ObjectClass::TerritorySelectWDT_Process  this=ObjectClass  sig=csp ====
void __thiscall TerritorySelectWDT_Process(ObjectClass *this, int a2, int *a3)
{
  int owningHouseIndex; // ecx
  int *v5; // eax
  int v6[4]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+18h] [ebp-10h] BYREF

  owningHouseIndex = this->owningHouseIndex; /*0x76feb6*/
  if ( owningHouseIndex ) /*0x76febb*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)owningHouseIndex + 4))(owningHouseIndex, a2); /*0x76fec5*/
    v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->owningHouseIndex + 24))( /*0x76fed2*/
                  this->owningHouseIndex,
                  v7);
    v6[0] = *v5; /*0x76fedb*/
    v6[1] = v5[1]; /*0x76fee2*/
    v6[2] = v5[2]; /*0x76fee9*/
    v6[3] = v5[3]; /*0x76fef7*/
    Team::ReleaseAll((Team *)a3, (int)v6); /*0x76fefb*/
    DSurface::Flip2(); /*0x76ff02*/
    MSEngine::ProcessEvents((MSEngine *)a3, this->owningHouseIndex, 300000); /*0x76ff12*/
  }
}



// ==== 0x0076FF20  Trigger::executeActions  this=Trigger  sig=csp ====
int __thiscall Trigger::executeActions(Trigger *this, int a2)
{
  this->Trigger_field_0x2C = (void *)a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}



// ==== 0x0076FF30  WDTObject::GetAndClearFlag  this=WDTObject  sig=csp ====
int __thiscall WDTObject::GetAndClearFlag(WDTObject *this)
{
  int result; // eax

  result = *((_DWORD *)this + 11); /*0x76ff30*/
  *((_DWORD *)this + 11) = 0; /*0x76ff33*/
  return result; /*0x76ff3a*/
}



// ==== 0x0076FF40  rc_ptr::FindTerritoryWOL  this=rc_ptr  sig=csp ====
_DWORD *__fastcall FindTerritoryWOL(rc_ptr *this, int a2, int a3)
{
  char v4; // bl
  _DWORD *v5; // edi
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v8; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v4 = 0; /*0x76ff47*/
  v10 = 0; /*0x76ff4e*/
  *(_DWORD *)&v8.m_1[3] = a2; /*0x76ff52*/
  v9 = 0; /*0x76ff56*/
  *(_DWORD *)v8.__pad_0 = &VectorCursor<rc_ptr<WorldDominationTour::Territory>,DynamicVectorClass<rc_ptr<WorldDominationTour::Territory>>>::`vftable'; /*0x76ff5a*/
  if ( VectorCursor::HasNext(&v8) ) /*0x76ff62*/
  {
    do /*0x76ff9a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v8.m_1[3] + 4) + 8 * v9 + 4) + 8) == a3 ) /*0x76ff85*/
        break; /*0x76ff85*/
      (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 8))(&v8); /*0x76ff8f*/
    }
    while ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 4))(&v8) ); /*0x76ff9a*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(_DWORD *)v8.__pad_0 + 4))(&v8) ) /*0x76ffa9*/
  {
    v5 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&v8.m_1[3] + 4) + 8 * v9); /*0x76ffbb*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v7); /*0x76ffc4*/
    v7[0] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ffc9*/
    v4 = 1; /*0x76ffd1*/
    v5 = v7; /*0x76ffd6*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76ffdc*/
  *(_DWORD *)this = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76ffe1*/
  ComPtr::Set((ComPtr *)this, v5[1]); /*0x76ffed*/
  if ( (v4 & 1) != 0 ) /*0x76fff5*/
  {
    v7[0] = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76fffb*/
    ComPtr::Release((ComPtr *)v7); /*0x770003*/
  }
  return this; /*0x77000a*/
}


