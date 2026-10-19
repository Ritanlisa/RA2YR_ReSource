// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004C0750  DSurface::DrawDashedLineStipple  this=DSurface  sig=csp ====
int __thiscall DSurface::DrawDashedLineStipple(DSurface *this, int *a2, int *a3, __int16 a4, int a5, int a6, char a7)
{
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  _WORD *v18; // esi
  _DWORD *v19; // edx
  int v20; // ecx
  _WORD *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  _WORD *v28; // edi
  _WORD *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // esi
  _DWORD *v37; // ecx
  int v38; // edx
  _WORD *v39; // eax
  int v40; // edx
  int v41; // esi
  _DWORD *v42; // edx
  int v43; // ebx
  _WORD *v44; // ecx
  int *v45; // eax
  int v46; // ebx
  int v47; // ebx
  _WORD *v48; // esi
  _DWORD *v49; // edx
  int v50; // ecx
  _WORD *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  _DWORD *v56; // edx
  int v57; // ecx
  _WORD *v58; // edi
  _WORD *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  int v65; // edi
  int v66; // esi
  _DWORD *v67; // ecx
  int v68; // edx
  _WORD *v69; // eax
  int v70; // edx
  int v71; // esi
  _DWORD *v72; // edx
  _WORD *v73; // ecx
  int *v74; // eax
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  int v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int *v88; // [esp+38h] [ebp+8h]
  int v89; // [esp+48h] [ebp+18h]
  int v90; // [esp+48h] [ebp+18h]
  int v91; // [esp+48h] [ebp+18h]
  int v92; // [esp+48h] [ebp+18h]
  int v93; // [esp+48h] [ebp+18h]
  int v94; // [esp+48h] [ebp+18h]

  v7 = *a2; /*0x4c075a*/
  v8 = a2[1]; /*0x4c075d*/
  v76 = 1; /*0x4c0768*/
  v9 = *a3; /*0x4c0770*/
  v10 = a3[1]; /*0x4c0772*/
  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( v7 > v9 ) /*0x4c078d*/
  {
    v12 = v7; /*0x4c078f*/
    v13 = v8; /*0x4c0791*/
    v7 = v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v13; /*0x4c079b*/
    v14 = v9; /*0x4c079d*/
    v9 = v12; /*0x4c079f*/
    v15 = abs32(v14 - v12); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = -1; /*0x4c07d3*/
  }
  v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
          *(int **)&stru_87E790.__pad_D8[60],
          v7,
          v8 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
  v87 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c080b*/
  v88 = (int *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = v88; /*0x4c0842*/
          v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = (_WORD *)v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0882*/
            }
            if ( v87 <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                v21 = (_WORD *)((char *)v21 + v19[8]); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
            {
              v21 = (_WORD *)((char *)v21 - v19[8]); /*0x4c089a*/
            }
            ++v18; /*0x4c08ac*/
            v20 = v76 + v23; /*0x4c08af*/
            --v22; /*0x4c08b1*/
          }
          while ( v22 );
          a6 = v20; /*0x4c08b4*/
        }
        goto LABEL_155; /*0x4c08b8*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c08cb*/
          v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08dd*/
        else
          v24 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = (_WORD *)v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0930*/
            }
            v28 = (_WORD *)((char *)v28 + v24); /*0x4c0936*/
            v29 += v87; /*0x4c0938*/
            if ( v87 <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                v29 = (_WORD *)((char *)v29 + v26[8]); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
            {
              v29 = (_WORD *)((char *)v29 - v26[8]); /*0x4c0944*/
            }
            v27 = v76 + v30; /*0x4c0955*/
            --v89; /*0x4c095c*/
          }
          while ( v89 );
          a6 = v27; /*0x4c0962*/
        }
        goto LABEL_155; /*0x4c0966*/
      }
      v31 = v9 - v7; /*0x4c096f*/
      v32 = v10 - v8; /*0x4c0971*/
      v33 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0975*/
      v79 = v33; /*0x4c097a*/
      if ( v32 < 0 ) /*0x4c097e*/
        v79 = -v33; /*0x4c0982*/
      v85 = 2 * v31; /*0x4c098e*/
      v34 = abs32(v32); /*0x4c0992*/
      v81 = 2 * v34; /*0x4c0999*/
      if ( v31 > v34 )
      {
        v35 = 0; /*0x4c09a5*/
        v36 = 2 * v34 - v31; /*0x4c09a7*/
        v90 = 0; /*0x4c09a9*/
        if ( v31 > 0 )
        {
          v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = (_WORD *)v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *((_WORD *)v88 + v35) = a4; /*0x4c09eb*/
              v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 = (int *)((char *)v88 + v79); /*0x4c0a08*/
              v39 += v87; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = v90; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( v87 <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                v39 = (_WORD *)((char *)v39 + v37[8]); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
            {
              v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a3a*/
            }
            ++v35; /*0x4c0a50*/
            v38 = v76 + v40; /*0x4c0a51*/
            v90 = v35; /*0x4c0a55*/
          }
          while ( v35 < v31 );
          a6 = v38; /*0x4c0a5f*/
        }
        goto LABEL_155; /*0x4c0a63*/
      }
      v41 = 2 * v31 - v34; /*0x4c0a68*/
      if ( v34 > 0 )
      {
        v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = (_WORD *)v77; /*0x4c0a7c*/
        v83 = v34; /*0x4c0a84*/
        v45 = v88; /*0x4c0a88*/
        v91 = 0; /*0x4c0a8c*/
        do
        {
          v46 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(_BYTE *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(_WORD *)((char *)v45 + v91) = a4; /*0x4c0abc*/
            v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            v91 += 2; /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
              v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += v87; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
          if ( v87 <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
              v44 = (_WORD *)((char *)v44 + v42[8]); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
          {
            v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0afe*/
          }
          v43 = v76 + v46; /*0x4c0b0f*/
          --v83; /*0x4c0b16*/
        }
        while ( v83 );
LABEL_154:
        a6 = v43; /*0x4c0e13*/
      }
    }
    else
    {
      if ( v8 == v10 )
      {
        v47 = v9 - v7; /*0x4c0b2d*/
        if ( v47 >= 0 )
        {
          v48 = v88; /*0x4c0b35*/
          v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = (_WORD *)v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b75*/
            }
            if ( v87 <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                v51 = (_WORD *)((char *)v51 + v49[8]); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
            {
              v51 = (_WORD *)((char *)v51 - v49[8]); /*0x4c0b8d*/
            }
            ++v48; /*0x4c0b9f*/
            v50 = v76 + v53; /*0x4c0ba2*/
            --v52; /*0x4c0ba4*/
          }
          while ( v52 );
          a6 = v50; /*0x4c0ba7*/
        }
        goto LABEL_155; /*0x4c0bab*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c0bbe*/
          v54 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bd0*/
        else
          v54 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = (_WORD *)v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0c23*/
            }
            v58 = (_WORD *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += v87; /*0x4c0c2b*/
            if ( v87 <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                v59 = (_WORD *)((char *)v59 + v56[8]); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
            {
              v59 = (_WORD *)((char *)v59 - v56[8]); /*0x4c0c37*/
            }
            v57 = v76 + v60; /*0x4c0c48*/
            --v92; /*0x4c0c4f*/
          }
          while ( v92 );
          a6 = v57; /*0x4c0c55*/
        }
        goto LABEL_155; /*0x4c0c59*/
      }
      v61 = v9 - v7; /*0x4c0c62*/
      v62 = v10 - v8; /*0x4c0c64*/
      v63 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0c68*/
      v80 = v63; /*0x4c0c6d*/
      if ( v62 < 0 ) /*0x4c0c71*/
        v80 = -v63; /*0x4c0c75*/
      v86 = 2 * v61; /*0x4c0c81*/
      v64 = abs32(v62); /*0x4c0c85*/
      v84 = 2 * v64; /*0x4c0c8c*/
      if ( v61 > v64 )
      {
        v65 = 0; /*0x4c0c98*/
        v66 = 2 * v64 - v61; /*0x4c0c9a*/
        v93 = 0; /*0x4c0c9c*/
        if ( v61 > 0 )
        {
          v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = (_WORD *)v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *((_WORD *)v88 + v65) = a4; /*0x4c0cde*/
              v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 = (int *)((char *)v88 + v80); /*0x4c0cfb*/
              v69 += v87; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = v93; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( v87 <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                v69 = (_WORD *)((char *)v69 + v67[8]); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
            {
              v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d2d*/
            }
            ++v65; /*0x4c0d43*/
            v68 = v76 + v70; /*0x4c0d44*/
            v93 = v65; /*0x4c0d48*/
          }
          while ( v65 < v61 );
          a6 = v68; /*0x4c0d52*/
        }
        goto LABEL_155; /*0x4c0d56*/
      }
      v71 = 2 * v61 - v64; /*0x4c0d5b*/
      if ( v64 > 0 )
      {
        v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = (_WORD *)v77; /*0x4c0d6f*/
        v82 = v64; /*0x4c0d77*/
        v74 = v88; /*0x4c0d7b*/
        v94 = 0; /*0x4c0d7f*/
        do
        {
          v75 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(_BYTE *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(_WORD *)((char *)v74 + v94) = a4; /*0x4c0daf*/
            v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            v94 += 2; /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
              v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += v87; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
          if ( v87 <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
              v73 = (_WORD *)((char *)v73 + v72[8]); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
          {
            v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0df1*/
          }
          v43 = v76 + v75; /*0x4c0e02*/
          --v82; /*0x4c0e09*/
        }
        while ( v82 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
LABEL_155:
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/
}



// ==== 0x004C0E30  DSurface::DrawStippledRect  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawStippledRect(DSurface *this, _DWORD *a2, _DWORD *a3, __int16 a4, char a5)
{
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _WORD *v13; // esi
  int v14; // edx
  __int16 *v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  __int16 *v19; // ebp
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // eax
  __int16 *v30; // edi
  int v31; // edx
  _DWORD *v32; // ecx
  __int16 *v33; // eax
  int v34; // edi
  int v35; // edx
  __int16 *v36; // ecx
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // eax
  __int16 *v40; // ebp
  int v41; // edx
  _DWORD *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  _DWORD *v50; // eax
  __int16 *v51; // edi
  int v53; // edx
  _DWORD *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h] BYREF
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h] BYREF
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  __int16 *v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
  v67 = *v6; /*0x4c0e5a*/
  v68 = v6[1]; /*0x4c0e61*/
  v69 = v6[2]; /*0x4c0e68*/
  v70 = v6[3]; /*0x4c0e73*/
  v7 = v68 + a2[1]; /*0x4c0e7e*/
  v63 = v67 + *a2; /*0x4c0e80*/
  v64 = v7; /*0x4c0e84*/
  v8 = v67 + *a3; /*0x4c0e93*/
  v66 = v68 + a3[1]; /*0x4c0e95*/
  v65 = v8; /*0x4c0ea6*/
  if ( !(unsigned __int8)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( v63 <= v65 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v10 = v64; /*0x4c0ec3*/
    v11 = v63; /*0x4c0ec7*/
    v9 = v65; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = v65; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    v65 = v11; /*0x4c0ed7*/
    v66 = v10; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (_WORD *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                   *(int **)&stru_87E790.__pad_D8[60],
                   v9,
                   v12 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
  v71 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
  v72 = (__int16 *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = v72; /*0x4c0f61*/
        v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
          }
          if ( v71 <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
              v13 = (_WORD *)((char *)v13 + v16[8]); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
          {
            v13 = (_WORD *)((char *)v13 - v16[8]); /*0x4c0f8e*/
          }
          ++v14; /*0x4c0fa4*/
          ++v15; /*0x4c0fa9*/
        }
        while ( v14 <= v65 - v63 ); /*0x4c0fae*/
      }
    }
    else if ( v63 == v65 ) /*0x4c0fcf*/
    {
      if ( v64 <= v66 ) /*0x4c0fd7*/
        v17 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
      else
        v17 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
          }
          v13 += v71; /*0x4c102b*/
          if ( v71 <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
              v13 = (_WORD *)((char *)v13 + v21[8]); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
          {
            v13 = (_WORD *)((char *)v13 - v21[8]); /*0x4c1035*/
          }
          v19 = (__int16 *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
      v73 = v24; /*0x4c106e*/
      if ( v23 < 0 ) /*0x4c1072*/
        v73 = -v24; /*0x4c1076*/
      v25 = abs32(v23); /*0x4c107f*/
      v62[0] = 2 * v22; /*0x4c1086*/
      v26 = 2 * v25; /*0x4c108a*/
      v56 = 2 * v25; /*0x4c108d*/
      if ( v22 <= v25 ) /*0x4c1091*/
      {
        v31 = 2 * v22 - v25; /*0x4c1126*/
        if ( v25 > 0 ) /*0x4c112a*/
        {
          v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              v33[v34] = a4; /*0x4c1155*/
              v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              ++v34; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 = (__int16 *)((char *)v33 + v73); /*0x4c1182*/
            if ( v71 <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                v13 = (_WORD *)((char *)v13 + v32[8]); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
            {
              v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c118d*/
            }
            if ( !--v58 ) /*0x4c11a3*/
              break; /*0x4c11a3*/
            v26 = v56; /*0x4c1146*/
          }
        }
      }
      else
      {
        v27 = 0; /*0x4c1099*/
        v28 = v26 - v22; /*0x4c109b*/
        if ( v22 > 0 ) /*0x4c109f*/
        {
          v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
          v30 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              v30[v27] = a4; /*0x4c10b9*/
              v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 = (__int16 *)((char *)v30 + v73); /*0x4c10ca*/
              v13 += v71; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( v71 <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                v13 = (_WORD *)((char *)v13 + v29[8]); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
            {
              v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10f4*/
            }
            v28 += v56; /*0x4c110a*/
            ++v27; /*0x4c110c*/
          }
          while ( v27 < v22 ); /*0x4c110f*/
        }
      }
    }
  }
  else if ( v64 == v66 ) /*0x4c11bc*/
  {
    v35 = 0; /*0x4c11c6*/
    if ( v65 - v63 >= 0 ) /*0x4c11ca*/
    {
      v36 = v72; /*0x4c11d0*/
      v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
        }
        if ( v71 <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
            v13 = (_WORD *)((char *)v13 + v37[8]); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
        {
          v13 = (_WORD *)((char *)v13 - v37[8]); /*0x4c11fd*/
        }
        ++v35; /*0x4c1213*/
        ++v36; /*0x4c1218*/
      }
      while ( v35 <= v65 - v63 ); /*0x4c121d*/
    }
  }
  else if ( v63 == v65 ) /*0x4c123e*/
  {
    if ( v64 <= v66 ) /*0x4c1246*/
      v38 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
    else
      v38 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
        }
        v13 += v71; /*0x4c129a*/
        if ( v71 <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
            v13 = (_WORD *)((char *)v13 + v42[8]); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
        {
          v13 = (_WORD *)((char *)v13 - v42[8]); /*0x4c12a4*/
        }
        v40 = (__int16 *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
    v46 = v45; /*0x4c12dc*/
    v59 = v45; /*0x4c12e0*/
    if ( v44 < 0 ) /*0x4c12e4*/
    {
      v46 = -v45; /*0x4c12e6*/
      v59 = -v45; /*0x4c12e8*/
    }
    v47 = abs32(v44); /*0x4c12f1*/
    v57 = 2 * v43; /*0x4c12f8*/
    v74 = 2 * v47; /*0x4c12ff*/
    if ( v43 <= v47 ) /*0x4c1303*/
    {
      v53 = 2 * v43 - v47; /*0x4c1395*/
      if ( v47 > 0 ) /*0x4c1399*/
      {
        v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            v72[v55] = a4; /*0x4c13b5*/
            v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            ++v55; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 = (__int16 *)((char *)v72 + v46); /*0x4c13e5*/
          v13 += v71; /*0x4c13ef*/
          if ( v71 <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
              v13 = (_WORD *)((char *)v13 + v54[8]); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
          {
            v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13f9*/
          }
          --v60; /*0x4c140b*/
        }
        while ( v60 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
        v51 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            v51[v49] = a4; /*0x4c1329*/
            v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 = (__int16 *)((char *)v51 + v59); /*0x4c133a*/
            v13 += v71; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
              v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( v71 <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
              v13 = (_WORD *)((char *)v13 + v50[8]); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
          {
            v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c1363*/
          }
          v48 += v74; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/
}



// ==== 0x004C1440  ObjectClass::method_4C1440  this=ObjectClass  sig=csp ====
int sub_4C1440(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c1452*/
  v2[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v2[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v2[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v2[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v2[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v2[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
          else
            return -1; /*0x4c14b2*/
        }
        else
        {
          return -1; /*0x4c14a3*/
        }
      }
      else
      {
        return -1; /*0x4c148d*/
      }
    }
    else
    {
      return -1; /*0x4c147a*/
    }
  }
  return result; /*0x4c1470*/
}



// ==== 0x004C14D0  ObjectClass::method_4C14D0  this=ObjectClass  sig=csp ====
int sub_4C14D0(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[63]; // [esp+8h] [ebp-1F8h] BYREF
  _DWORD v3[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c14e2*/
  memset(v3, 0, sizeof(v3)); /*0x4c14f5*/
  v2[0] = 252; /*0x4c14fc*/
  v3[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)g_DrawColorState + 12))( /*0x4c1517*/
             g_DrawColorState,
             v2,
             v3);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v2[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v2[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v2[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v2[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v2[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v2[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v2[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v2[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v2[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v2[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v2[46] < 0x100u); /*0x4c15ef*/
                      else
                        return -1; /*0x4c15de*/
                    }
                    else
                    {
                      return -1; /*0x4c15c4*/
                    }
                  }
                  else
                  {
                    return -1; /*0x4c15b4*/
                  }
                }
                else
                {
                  return -1; /*0x4c15a4*/
                }
              }
              else
              {
                return -1; /*0x4c1593*/
              }
            }
            else
            {
              return -1; /*0x4c1580*/
            }
          }
          else
          {
            return -1; /*0x4c156d*/
          }
        }
        else
        {
          return -1; /*0x4c155e*/
        }
      }
      else
      {
        return -1; /*0x4c1547*/
      }
    }
    else
    {
      return -1; /*0x4c1533*/
    }
  }
  return result; /*0x4c151c*/
}



// ==== 0x004C1600  ObjectClass::method_4C1600  this=ObjectClass  sig=csp ====
int sub_4C1600(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[79]; // [esp+20h] [ebp-13Ch] BYREF

  result = g_lpDirectDraw7->lpVtbl->QueryInterface( /*0x4c1618*/
             g_lpDirectDraw7,
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&dword_8A0E00);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))dword_8A0E00)(dword_8A0E00, &unk_7F8070, &dword_8A0DF4); /*0x4c1630*/
    if ( !result ) /*0x4c1634*/
    {
      memset(v2, 0, sizeof(v2)); /*0x4c1644*/
      v2[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0) /*0x4c1687*/
        && (v2[1] & 1) != 0
        && (v2[14] & 0x400) != 0
        && (v2[33] & 0x2000) != 0
        && (v2[33] & 0x1000) != 0
        && (v2[33] & 0x20000) != 0 )
      {
        return 0; /*0x4c1693*/
      }
      else
      {
        return -1; /*0x4c1689*/
      }
    }
  }
  return result; /*0x4c168c*/
}



// ==== 0x004C16A0  ObjectClass::InitializeRadialGradientTexture  this=ObjectClass  sig=csp ====
int InitializeRadialGradientTexture(ObjectClass *this)
{
  double v1; // st7
  _DWORD *AudioStream_field_0x1C; // esi
  int result; // eax
  int v4; // eax
  ObjectClass *v5; // eax
  void *v6; // eax
  int v7; // edi
  _WORD *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  ObjectClass *v13; // eax
  ObjectClass *v14; // eax
  StructTable *v15; // eax
  double v16; // [esp+3Ch] [ebp-C8h]
  ObjectClass *v17; // [esp+44h] [ebp-C0h]
  void *v18[2]; // [esp+58h] [ebp-ACh]
  void *v19[2]; // [esp+58h] [ebp-ACh]
  const void *v20; // [esp+58h] [ebp-ACh]
  int v21; // [esp+60h] [ebp-A4h]
  _DWORD *v22; // [esp+64h] [ebp-A0h]
  int v23; // [esp+68h] [ebp-9Ch]
  _DWORD v24[11]; // [esp+6Ch] [ebp-98h] BYREF
  _DWORD v25[27]; // [esp+98h] [ebp-6Ch] BYREF

  AudioStream_field_0x1C = DSurface_Composite->AudioStream_field_0x1C; /*0x4c16b4*/
  v22 = AudioStream_field_0x1C; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, _DWORD *, __int64 *))(*(_DWORD *)dword_8A0DF4 + 32))( /*0x4c16cf*/
             dword_8A0DF4,
             &unk_7F80B0,
             AudioStream_field_0x1C,
             &g_DrawColorState);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0(v17) ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, _DWORD))(*(_DWORD *)dword_8A0DF4 + 24))( /*0x4c16fe*/
               dword_8A0DF4,
               (char *)&g_DrawColorState + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 24))( /*0x4c1718*/
                 g_DrawColorState,
                 HIDWORD(g_DrawColorState));
      if ( !result ) /*0x4c171d*/
      {
        memset(v25, 0, sizeof(v25)); /*0x4c172e*/
        v4 = *AudioStream_field_0x1C; /*0x4c1730*/
        v25[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(v4 + 88))(AudioStream_field_0x1C, v25); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
          memset(v24, 0, sizeof(v24)); /*0x4c175a*/
          *(_QWORD *)v18 = v25[3]; /*0x4c1764*/
          v24[3] = v25[3]; /*0x4c1768*/
          __asm { fild qword ptr [esp+0C0h+var_AC] } /*0x4c176c*/
          *(_QWORD *)v19 = v25[2]; /*0x4c1775*/
          v24[4] = v25[2]; /*0x4c177d*/
          __asm /*0x4c1781*/
          {
            fstp [esp+0C0h+var_7C]
            fild qword ptr [esp+0C0h+var_AC]
          }
          v24[0] = 44; /*0x4c178d*/
          v24[10] = 1065353216; /*0x4c1795*/
          __asm { fstp [esp+0C4h+var_78] } /*0x4c179e*/
          result = (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(g_DrawColorState) + 68))( /*0x4c17a5*/
                     HIDWORD(g_DrawColorState),
                     v24);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 52))( /*0x4c17bf*/
                       g_DrawColorState,
                       HIDWORD(g_DrawColorState));
            if ( !result ) /*0x4c17c4*/
            {
              v5 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x4c17cc*/
              if ( v5 ) /*0x4c17d6*/
              {
                dword_8A0E04 = (AudioStream *)sub_4A3270(v5, 256, 256, 0); /*0x4c17ec*/
                if ( dword_8A0E04 ) /*0x4c17f1*/
                {
                  v6 = malloc(0x20000u); /*0x4c17f8*/
                  v20 = v6; /*0x4c1802*/
                  if ( !v6 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  v7 = -128; /*0x4c180c*/
                  v8 = v6; /*0x4c1811*/
                  v21 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    v9 = v7 * v7; /*0x4c1817*/
                    v10 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      v23 = v9 + v10 * v10; /*0x4c1829*/
                      __asm /*0x4c182d*/
                      {
                        fild [esp+0C8h+var_9C]
                        fstp [esp+0C8h+var_C8]; double
                      }
                      Math::Sqrt(v16); /*0x4c1834*/
                      __asm { fmul ds:dbl_7E3D90 } /*0x4c1839*/
                      LOWORD(v11) = Math::RoundToInt(v1); /*0x4c1842*/
                      v12 = 400 - v11; /*0x4c184c*/
                      if ( 400 - v11 >= 0 ) /*0x4c184e*/
                      {
                        if ( v12 > 255 ) /*0x4c186d*/
                          v12 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v12 = 0; /*0x4c1850*/
                      }
                      ++v8; /*0x4c1886*/
                      ++v10; /*0x4c18af*/
                      *(v8 - 1) = (v12 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4c18b0*/
                                | (v12 >> g_BitMask_Blue << g_BitMask_Green)
                                | (v12 >> g_BitMask_Red << g_BitShift_Blue);
                    }
                    while ( v10 + 128 < 256 ); /*0x4c18c0*/
                    v7 = v21 + 1; /*0x4c18ca*/
                    v21 = v7; /*0x4c18cb*/
                  }
                  while ( v7 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(dword_8A0E04, v20) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v25, 0, sizeof(v25)); /*0x4c1911*/
                  v25[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v22 + 88))(v22, v25); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    v13 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x4c1930*/
                    if ( v13 ) /*0x4c193a*/
                      dword_8A0E08 = (DDraw *)sub_4A3270(v13, v25[3], v25[2], 1); /*0x4c194f*/
                    else
                      dword_8A0E08 = 0; /*0x4c1956*/
                    v14 = (ObjectClass *)__2_YAPAXI_Z(0x18004u); /*0x4c1965*/
                    if ( v14 ) /*0x4c196f*/
                      v15 = (StructTable *)sub_4A3630(v14); /*0x4c1973*/
                    else
                      v15 = 0; /*0x4c197a*/
                    dword_8A0E10 = v15; /*0x4c1982*/
                    if ( !dword_8A0E08 || !v15 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                dword_8A0E04 = 0; /*0x4c1854*/
              }
              return 1; /*0x4c185a*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4c16e8*/
}



// ==== 0x004C19B0  DDraw::CleanupSurfaces  this=DDraw  sig=csp ====
int DDraw::CleanupSurfaces(DDraw *this)
{
  StructTable *v1; // esi
  DDraw *v2; // esi
  DDraw *v3; // esi
  AudioStream *v4; // esi
  int result; // eax

  v1 = dword_8A0E10; /*0x4c19b1*/
  if ( dword_8A0E10 ) /*0x4c19bc*/
  {
    DDraw::Init((DDraw *)dword_8A0E10); /*0x4c19c0*/
    __3_YAXPAX_Z(v1); /*0x4c19c6*/
    dword_8A0E10 = 0; /*0x4c19ce*/
  }
  v2 = dword_8A0E0C; /*0x4c19d4*/
  if ( dword_8A0E0C ) /*0x4c19dc*/
  {
    DDraw::ReleaseSurfaces(dword_8A0E0C); /*0x4c19e0*/
    __3_YAXPAX_Z(v2); /*0x4c19e6*/
    dword_8A0E0C = 0; /*0x4c19ee*/
  }
  v3 = dword_8A0E08; /*0x4c19f4*/
  if ( dword_8A0E08 ) /*0x4c19fc*/
  {
    DDraw::ReleaseSurfaces(dword_8A0E08); /*0x4c1a00*/
    __3_YAXPAX_Z(v3); /*0x4c1a06*/
    dword_8A0E08 = 0; /*0x4c1a0e*/
  }
  v4 = dword_8A0E04; /*0x4c1a14*/
  if ( dword_8A0E04 ) /*0x4c1a1c*/
  {
    DDraw::ReleaseSurfaces((DDraw *)dword_8A0E04); /*0x4c1a20*/
    __3_YAXPAX_Z(v4); /*0x4c1a26*/
    dword_8A0E04 = 0; /*0x4c1a2e*/
  }
  if ( HIDWORD(g_DrawColorState) ) /*0x4c1a3b*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)HIDWORD(g_DrawColorState) + 8))(HIDWORD(g_DrawColorState)); /*0x4c1a40*/
    HIDWORD(g_DrawColorState) = 0; /*0x4c1a43*/
  }
  if ( (_DWORD)g_DrawColorState ) /*0x4c1a50*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)g_DrawColorState + 8))(g_DrawColorState); /*0x4c1a55*/
    LODWORD(g_DrawColorState) = 0; /*0x4c1a58*/
  }
  if ( dword_8A0DF4 ) /*0x4c1a65*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_8A0DF4 + 8))(dword_8A0DF4); /*0x4c1a6a*/
    dword_8A0DF4 = 0; /*0x4c1a6d*/
  }
  result = dword_8A0E00; /*0x4c1a73*/
  if ( dword_8A0E00 ) /*0x4c1a7a*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_8A0E00 + 8))(dword_8A0E00); /*0x4c1a7f*/
    dword_8A0E00 = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/
}



// ==== 0x004C1A90  DSurface::BlitWhole  this=DSurface  sig=csp ====
int __stdcall DSurface::BlitWhole(DSurface *this, int a2, int a3)
{
  XSurface *v3; // ecx

  return XSurface::BlitWhole(v3, (int *)this, a2, a3); /*0x4c1aa4*/
}



// ==== 0x004C1AB0  DSurface::IsDSurface  this=DSurface  sig=csp ====
char __thiscall DSurface::IsDSurface(DSurface *this)
{
  return 1; /*0x4c1ab2*/
}



// ==== 0x004C1B50  Vector::2DMagnitudeMath  this=Vector  sig=csp ====
double __thiscall Vector::TwoDMagnitudeMath(Vector *this)
{
  double result; // st7

  result = (double)this->Vector_field_0x4; /*0x4c1b50*/
  Math::Sqrt((double)*(int *)this->__pad_0 * (double)*(int *)this->__pad_0 + result * result); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}



// ==== 0x004C1B80  sub_4C1B80  this=-  sig=ida-proto ====
void sub_4C1B80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c1b8c*/
  dbl_8A0E38 = Math::Sqrt(v0 + v0); /*0x4c1b9e*/
}



// ==== 0x004C1BB0  sub_4C1BB0  this=-  sig=ida-proto ====
void sub_4C1BB0()
{
  dbl_8A0EA8 = dbl_8A0E38 / 60.0; /*0x4c1bbc*/
}



// ==== 0x004C1BD0  sub_4C1BD0  this=-  sig=ida-proto ====
void sub_4C1BD0()
{
  dbl_8A0E70 = 1.0 / dbl_8A0EA8; /*0x4c1bdc*/
}



// ==== 0x004C1BF0  sub_4C1BF0  this=-  sig=ida-proto ====
void sub_4C1BF0()
{
  dbl_8A0E68 = 0.0174532925199433 * 45.0; /*0x4c1bfc*/
}



// ==== 0x004C1C10  sub_4C1C10  this=-  sig=ida-proto ====
void sub_4C1C10()
{
  dbl_8A0E40 = 0.0174532925199433 * 60.0; /*0x4c1c1c*/
}



// ==== 0x004C1C30  sub_4C1C30  this=-  sig=ida-proto ====
void sub_4C1C30()
{
  dbl_8A0E18 = 0.0174532925199433 * 90.0; /*0x4c1c3c*/
}



// ==== 0x004C1C50  sub_4C1C50  this=-  sig=ida-proto ====
__int64 sub_4C1C50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0E18 - dbl_8A0E40); /*0x4c1c62*/
  result = Math::RoundToInt(v0 * dbl_8A0E38 * 0.5); /*0x4c1c76*/
  dword_8A0EB0 = result; /*0x4c1c7b*/
  return result; /*0x4c1c80*/
}



// ==== 0x004C1C90  sub_4C1C90  this=-  sig=ida-proto ====
void sub_4C1C90()
{
  dbl_8A0E48 = Math::ArcTan((double)dword_8A0EB0 * 0.00390625); /*0x4c1ca7*/
}



// ==== 0x004C1CC0  sub_4C1CC0  this=-  sig=ida-proto ====
void sub_4C1CC0()
{
  dbl_8A0E60 = Math::ArcTan((double)(2 * dword_8A0EB0) / dbl_8A0E38); /*0x4c1ce2*/
}



// ==== 0x004C1CF0  sub_4C1CF0  this=-  sig=ida-proto ====
__int64 sub_4C1CF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0EB0) + 0.5); /*0x4c1d0b*/
  dword_8A0EA0 = result; /*0x4c1d10*/
  return result; /*0x4c1d16*/
}



// ==== 0x004C1D20  sub_4C1D20  this=-  sig=ida-proto ====
int sub_4C1D20()
{
  word_8A0E30 = 0; /*0x4c1d22*/
  word_8A0E32 = 0; /*0x4c1d28*/
  return 0; /*0x4c1d2e*/
}



// ==== 0x004C1D30  sub_4C1D30  this=-  sig=ida-proto ====
int sub_4C1D30()
{
  dword_8A0E50 = 0; /*0x4c1d32*/
  dword_8A0E54 = 0; /*0x4c1d37*/
  dword_8A0E58 = 0; /*0x4c1d3c*/
  return 0; /*0x4c1d41*/
}



// ==== 0x004C1D50  sub_4C1D50  this=-  sig=ida-proto ====
int sub_4C1D50()
{
  dword_8A0E80 = 0; /*0x4c1d55*/
  dword_8A0E78 = 128; /*0x4c1d5f*/
  dword_8A0E7C = 128; /*0x4c1d64*/
  return 128; /*0x4c1d69*/
}



// ==== 0x004C1D70  sub_4C1D70  this=-  sig=ida-proto ====
int sub_4C1D70()
{
  dword_8A0E20 = 0; /*0x4c1d72*/
  dword_8A0E24 = 0; /*0x4c1d77*/
  dword_8A0E28 = 0; /*0x4c1d7c*/
  dword_8A0E2C = 0; /*0x4c1d81*/
  return 0; /*0x4c1d86*/
}



// ==== 0x004C1D90  sub_4C1D90  this=-  sig=ida-proto ====
int sub_4C1D90()
{
  dword_8A0E8C = 0; /*0x4c1d97*/
  dword_8A0E90 = 0; /*0x4c1d9c*/
  byte_8A0E94 = 1; /*0x4c1da1*/
  byte_8A0E95 = 0; /*0x4c1da8*/
  dword_8A0E88 = (int)&DynamicVectorClass<EBolt *>::`vftable'; /*0x4c1dad*/
  dword_8A0E9C = 10; /*0x4c1db7*/
  dword_8A0E98 = 0; /*0x4c1dc1*/
  return atexit(sub_4C1DD0); /*0x4c1dcc*/
}



// ==== 0x004C1DD0  sub_4C1DD0  this=-  sig=ida-proto ====
void __cdecl sub_4C1DD0()
{
  dword_8A0E88 = (int)&VectorClass<EBolt *>::`vftable'; /*0x4c1dd8*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c1dec*/
  {
    __3_YAXPAX_Z(dword_8A0E8C); /*0x4c1def*/
    dword_8A0E8C = 0; /*0x4c1df7*/
  }
  byte_8A0E95 = 0; /*0x4c1dfd*/
  dword_8A0E90 = 0; /*0x4c1e03*/
}



// ==== 0x004C1E10  TechnoClass::ResetDamageAccumulator  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::ResetDamageAccumulator(TechnoClass *this)
{
  this->RadioClass = 0; /*0x4c1e1a*/
  this->? = 0; /*0x4c1e1e*/
  this->? = 0x10000; /*0x4c1e21*/
  this->? = 0; /*0x4c1e28*/
  LOBYTE(this->?) = 0; /*0x4c1e2b*/
  this->? = 0; /*0x4c1e2e*/
  this->? = 0; /*0x4c1e31*/
  this->? = 0; /*0x4c1e34*/
  this->? = 0; /*0x4c1e3a*/
  this->? = 0; /*0x4c1e3d*/
  this->? = 0; /*0x4c1e3f*/
  this->? = 0; /*0x4c1e42*/
  return &this->RadioClass; /*0x4c1e45*/
}



// ==== 0x004C1E70  sub_4C1E70  this=-  sig=csp ====
int __stdcall sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15[2]; // [esp+8h] [ebp-10h] BYREF
  int v16[2]; // [esp+10h] [ebp-8h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &a1, v16); /*0x4c1e85*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, v15); /*0x4c1e9a*/
  v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  v10 = a8 - v9 - 2; /*0x4c1eb2*/
  v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x4c1ecf*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(dword_87F6C4 + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(dword_87F6C4 + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite + 52))( /*0x4c1f13*/
           DSurface_Composite,
           &DSurface_ViewBounds,
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}



// ==== 0x004C1F20  Lightning::Draw  this=Lightning  sig=csp ====
int __thiscall Lightning::Draw(Lightning *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  double v8; // st7
  int *v9; // esi
  int v10; // edi
  int *v11; // eax
  int result; // eax
  int v13; // ebx
  int i; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // edx
  int v19; // esi
  char *v20; // edi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // edi
  _DWORD *v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  _DWORD *v39; // esi
  int v40; // eax
  int v41; // edx
  char *v42; // eax
  _DWORD *v43; // ecx
  _DWORD *v44; // edx
  _DWORD *v45; // esi
  int v46; // edi
  int v47; // edx
  int v48; // eax
  int v49; // edi
  int v50; // esi
  int v51; // ebx
  int v52; // eax
  int v53; // edx
  double v54; // [esp+38h] [ebp-410h]
  double v55; // [esp+38h] [ebp-410h]
  char v56; // [esp+53h] [ebp-3F5h]
  int v57; // [esp+54h] [ebp-3F4h]
  int v58; // [esp+54h] [ebp-3F4h]
  int v59; // [esp+54h] [ebp-3F4h]
  int v60; // [esp+54h] [ebp-3F4h]
  int v61; // [esp+58h] [ebp-3F0h]
  int v62; // [esp+5Ch] [ebp-3ECh]
  char *v63; // [esp+60h] [ebp-3E8h]
  int v64; // [esp+60h] [ebp-3E8h]
  int v65; // [esp+64h] [ebp-3E4h]
  int v66; // [esp+68h] [ebp-3E0h]
  int v67; // [esp+6Ch] [ebp-3DCh]
  int v68; // [esp+70h] [ebp-3D8h]
  char *v69; // [esp+74h] [ebp-3D4h]
  int v71; // [esp+78h] [ebp-3D0h]
  int v72; // [esp+78h] [ebp-3D0h]
  int v74; // [esp+84h] [ebp-3C4h] BYREF
  int v75; // [esp+88h] [ebp-3C0h]
  int v76; // [esp+8Ch] [ebp-3BCh]
  _DWORD v77[9]; // [esp+90h] [ebp-3B8h] BYREF
  _DWORD v78[9]; // [esp+B4h] [ebp-394h] BYREF
  int v79; // [esp+D8h] [ebp-370h]
  _DWORD v80[9]; // [esp+DCh] [ebp-36Ch] BYREF
  Coord v81; // [esp+100h] [ebp-348h] BYREF

  v9 = (int *)&v81.__pad_C[124]; /*0x4c1f33*/
  v10 = 8; /*0x4c1f3a*/
  do /*0x4c1f64*/
  {
    Array::ForEach(v9, 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f49*/
    Array::ForEach(v9 + 9, 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f5b*/
    v9 += 22; /*0x4c1f60*/
    --v10; /*0x4c1f63*/
  }
  while ( v10 ); /*0x4c1f64*/
  v56 = 1; /*0x4c1f88*/
  v66 = 0; /*0x4c1f8d*/
  v11 = Coord::Subtract(&v81, a2 - a5, a3 - a6, a4 - a7); /*0x4c1f95*/
  v74 = *v11; /*0x4c1f9f*/
  v75 = v11[1]; /*0x4c1fa6*/
  __asm { fild [esp+410h+var_3C0] } /*0x4c1fad*/
  v76 = v11[2]; /*0x4c1fb1*/
  __asm /*0x4c1fb5*/
  {
    fild [esp+410h+var_3BC]
    fild [esp+410h+var_3C4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+410h+var_410]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v54); /*0x4c1fd6*/
  LOWORD(result) = Math::RoundToInt(v8); /*0x4c1fde*/
  v62 = result; /*0x4c1fe5*/
  if ( result )
  {
    v78[1] = a6; /*0x4c1ff1*/
    v78[2] = a7; /*0x4c1ffa*/
    v79 = (102 * result) >> 8; /*0x4c2014*/
    v61 = *((_DWORD *)this + 6); /*0x4c202c*/
    v63 = &v81.__pad_C[124]; /*0x4c2033*/
    v78[0] = a5; /*0x4c203c*/
    qmemcpy(&v78[3], v78, 0x18u); /*0x4c2043*/
    v80[1] = a3; /*0x4c2048*/
    v80[0] = a2; /*0x4c204f*/
    v80[2] = a4; /*0x4c2059*/
    qmemcpy(&v80[3], v80, 0x18u); /*0x4c207c*/
    v69 = &v81.__pad_C[160]; /*0x4c207e*/
    v68 = 0; /*0x4c208d*/
    v65 = (char *)v78 - &v81.__pad_C[124]; /*0x4c209e*/
    v13 = (23 * result) >> 8; /*0x4c20a6*/
    v57 = v13; /*0x4c20ab*/
    v67 = (char *)v77 - &v81.__pad_C[124]; /*0x4c20af*/
    while ( 1 )
    {
      while ( result > 64 && v66 < 8 ) /*0x4c20c1*/
      {
        for ( i = 0; i < 9; v77[i - 1] = v18 >> 1 ) /*0x4c20c7*/
        {
          v15 = v80[i + 1]; /*0x4c20d6*/
          v77[i] = (v80[i] + v78[i]) >> 1; /*0x4c20df*/
          v16 = v15 + v78[i + 1]; /*0x4c20e7*/
          v17 = v80[i + 2]; /*0x4c20e9*/
          v77[i + 1] = v16 >> 1; /*0x4c20f2*/
          v18 = v17 + v78[i + 2]; /*0x4c20fa*/
          i += 3; /*0x4c20fc*/
        }
        if ( v56 ) /*0x4c2110*/
        {
          __asm { fild [esp+408h+var_3F4] } /*0x4c2116*/
          v56 = 0; /*0x4c211a*/
          v19 = 0; /*0x4c211f*/
          v20 = &v81.__pad_C[60]; /*0x4c2121*/
          __asm { fstp [esp+408h+var_3D0] } /*0x4c2128*/
          do /*0x4c2166*/
          {
            _EAX = this; /*0x4c212c*/
            v58 = v19 + 7; /*0x4c2133*/
            __asm /*0x4c213a*/
            {
              fild dword ptr [eax+1Ch]
              fmul ds:dbl_7E44D0
              fild [esp+410h+var_3F4]
              fdivp st(1), st
              fstp [esp+410h+var_410]; double
            }
            Math::SinCos(v55); /*0x4c214c*/
            __asm { fmul [esp+410h+var_3D0] } /*0x4c2151*/
            LOWORD(v22) = Math::RoundToInt(v8); /*0x4c2158*/
            *(_DWORD *)v20 = v22; /*0x4c215d*/
            ++v19; /*0x4c215f*/
            v20 += 4; /*0x4c2160*/
          }
          while ( v19 < 6 ); /*0x4c2166*/
          v23 = &v77[1]; /*0x4c216f*/
          v24 = 3; /*0x4c217f*/
          v25 = (*(_DWORD *)&v81.__pad_C[68] + *(_DWORD *)&v81.__pad_C[76] + 2 * v13) >> 1; /*0x4c2184*/
          do /*0x4c21c0*/
          {
            v26 = *(_DWORD *)&v81.__pad_C[80]; /*0x4c219b*/
            *(v23 - 1) += *(_DWORD *)&v81.__pad_C[60] + *(_DWORD *)&v81.__pad_C[72]; /*0x4c21a2*/
            *v23 += *(_DWORD *)&v81.__pad_C[64] + v26; /*0x4c21b2*/
            v23[1] += v25; /*0x4c21b9*/
            v23 += 3; /*0x4c21bc*/
            --v24; /*0x4c21bf*/
          }
          while ( v24 ); /*0x4c21c0*/
          result = v62; /*0x4c21c2*/
        }
        if ( result > 128 ) /*0x4c21cb*/
        {
          v30 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c222e*/
          v77[0] += v30; /*0x4c223b*/
          v31 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c2244*/
          v77[1] += v31; /*0x4c2251*/
          v32 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c225a*/
          v77[2] += v32; /*0x4c225f*/
        }
        else
        {
          v27 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c21d6*/
          v77[0] += 2 * v13 * v27; /*0x4c21ee*/
          v28 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c21f2*/
          v77[1] += 2 * v13 * v28; /*0x4c220a*/
          v29 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c220e*/
          v77[2] += 2 * v13 * v29; /*0x4c221d*/
        }
        if ( v62 <= v79 ) /*0x4c2272*/
        {
          v38 = -v13; /*0x4c22d6*/
          v39 = &v77[4]; /*0x4c22d8*/
          v60 = 2; /*0x4c22dc*/
          do /*0x4c232a*/
          {
            *(v39 - 1) += Random::Range(&Randomizer_Global, v38, v13); /*0x4c22fc*/
            *v39 += Random::Range(&Randomizer_Global, v38, v13); /*0x4c230f*/
            v40 = Random::Range(&Randomizer_Global, v38, v13); /*0x4c2311*/
            v41 = v39[1]; /*0x4c2316*/
            v39 += 3; /*0x4c2319*/
            *(v39 - 2) = v40 + v41; /*0x4c2322*/
            --v60; /*0x4c2326*/
          }
          while ( v60 ); /*0x4c232a*/
        }
        else
        {
          v33 = -v13; /*0x4c2274*/
          v34 = &v77[4]; /*0x4c2276*/
          v59 = 2; /*0x4c227a*/
          do /*0x4c22d2*/
          {
            v35 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c2289*/
            *(v34 - 1) = v77[0] + (v35 >> 1); /*0x4c229d*/
            v36 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c22a0*/
            *v34 = v77[1] + (v36 >> 1); /*0x4c22b4*/
            v37 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c22b6*/
            v34 += 3; /*0x4c22bf*/
            *(v34 - 2) = v77[2] + (v37 >> 1); /*0x4c22c6*/
            --v59; /*0x4c22ce*/
          }
          while ( v59 ); /*0x4c22d2*/
        }
        v13 >>= 1; /*0x4c233d*/
        v42 = v63; /*0x4c2345*/
        v62 >>= 1; /*0x4c2349*/
        v57 = v13; /*0x4c234d*/
        v43 = v63; /*0x4c2351*/
        v64 = 3; /*0x4c2353*/
        do /*0x4c2398*/
        {
          *v43 = *(_DWORD *)((char *)v43 + v67); /*0x4c2365*/
          v43[1] = *(_DWORD *)((char *)v43 + v67 + 4); /*0x4c236a*/
          v43[2] = *(_DWORD *)((char *)v43 + v67 + 8); /*0x4c2370*/
          v44 = (_DWORD *)((char *)v43 + v65); /*0x4c2377*/
          v45 = v43 + 9; /*0x4c2379*/
          v43 += 3; /*0x4c237c*/
          *v45 = *v44; /*0x4c2381*/
          v45[1] = v44[1]; /*0x4c2386*/
          v45[2] = v44[2]; /*0x4c238c*/
          --v64; /*0x4c2394*/
        }
        while ( v64 ); /*0x4c2398*/
        *((_DWORD *)v42 + 18) = v62; /*0x4c23a2*/
        *((_DWORD *)v42 + 21) = v68; /*0x4c23a9*/
        *((_DWORD *)v42 + 19) = v13; /*0x4c23b9*/
        *((_DWORD *)v42 + 20) = (v68 + v61) >> 1; /*0x4c23bc*/
        v63 = v42 + 88; /*0x4c23c3*/
        v67 -= 88; /*0x4c23cf*/
        v65 -= 88; /*0x4c23d7*/
        v69 += 88; /*0x4c23db*/
        ++v66; /*0x4c23ed*/
        result = v62; /*0x4c23f1*/
        qmemcpy(v78, v77, sizeof(v78)); /*0x4c23f5*/
        v68 = (v68 + v61) >> 1; /*0x4c23f7*/
      }
      *(_DWORD *)&v81.__pad_C[24] = v78[3]; /*0x4c2415*/
      *(_DWORD *)&v81.__pad_C[28] = v78[4]; /*0x4c2423*/
      *(_DWORD *)&v81.__pad_C[32] = v78[5]; /*0x4c2431*/
      *(_DWORD *)&v81.__pad_C[36] = v80[3]; /*0x4c243f*/
      *(_DWORD *)&v81.__pad_C[40] = v80[4]; /*0x4c2446*/
      *(_DWORD *)&v81.__pad_C[44] = v80[5]; /*0x4c245b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[36], (int *)&v81.__pad_C[84]); /*0x4c246a*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[24], (int *)&v81.__pad_C[116]); /*0x4c2485*/
      v46 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[44]) - 2; /*0x4c24a5*/
      v71 = v68 - ZCoordToScreenY(*(int *)&v81.__pad_C[32]) - 2; /*0x4c24ba*/
      v47 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x4c24c6*/
      v48 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
          ? *(unsigned __int8 *)(v47 + a8)
          : *(unsigned __int16 *)(v47 + 2 * a8);
      (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x4c2512*/
                                                                                                 + 52))(
        DSurface_Composite,
        &DSurface_ViewBounds,
        &v81.__pad_C[84],
        &v81.__pad_C[116],
        v48,
        v46,
        v71,
        0);
      *(_DWORD *)&v81.__pad_C[48] = v78[6]; /*0x4c252a*/
      *(_DWORD *)&v81.__pad_C[52] = v78[7]; /*0x4c2538*/
      *(_DWORD *)&v81.__pad_C[12] = v80[6]; /*0x4c2546*/
      *(_DWORD *)&v81.__pad_C[16] = v80[7]; /*0x4c254d*/
      *(_DWORD *)&v81.__pad_C[56] = v78[8]; /*0x4c255b*/
      *(_DWORD *)&v81.__pad_C[20] = v80[8]; /*0x4c2578*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[12], (int *)&v81.__pad_C[108]); /*0x4c257f*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[48], (int *)&v81.__pad_C[92]); /*0x4c259a*/
      v49 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[20]) - 2; /*0x4c25b6*/
      v72 = v68 - ZCoordToScreenY(*(int *)&v81.__pad_C[56]) - 2; /*0x4c25c7*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4c25d4*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, _DWORD, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 52))( /*0x4c25e8*/
          DSurface_Composite,
          &DSurface_ViewBounds,
          &v81.__pad_C[108],
          &v81.__pad_C[92],
          *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + a8),
          v49,
          v72,
          0);
      else
        (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, _DWORD, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 52))( /*0x4c2627*/
          DSurface_Composite,
          &DSurface_ViewBounds,
          &v81.__pad_C[108],
          &v81.__pad_C[92],
          *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * a8),
          v49,
          v72,
          0);
      *(_DWORD *)v81.__pad_0 = v78[0]; /*0x4c2636*/
      *(_DWORD *)&v81.Coord_field_0x2[2] = v78[1]; /*0x4c2644*/
      *(_DWORD *)v81.__pad_C = v80[0]; /*0x4c2652*/
      *(_DWORD *)&v81.__pad_C[4] = v80[1]; /*0x4c2659*/
      v81.Coord_field_0x8 = (void *)v78[2]; /*0x4c266b*/
      *(_DWORD *)&v81.__pad_C[8] = v80[2]; /*0x4c2681*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v81.__pad_C, &v74); /*0x4c2688*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81, (int *)&v81.__pad_C[100]); /*0x4c26a3*/
      v50 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[8]) - 2; /*0x4c26bd*/
      v51 = v68 - ZCoordToScreenY((int)v81.Coord_field_0x8) - 2; /*0x4c26cc*/
      v52 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
          ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 15)
          : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 30);
      (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, char *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x4c270d*/
                                                                                                + 52))(
        DSurface_Composite,
        &DSurface_ViewBounds,
        &v74,
        &v81.__pad_C[100],
        v52,
        v50,
        v51,
        0);
      result = --v66; /*0x4c2714*/
      if ( v66 < 0 ) /*0x4c2719*/
        break; /*0x4c2719*/
      v65 += 88; /*0x4c2730*/
      v67 += 88; /*0x4c273a*/
      v13 = *((_DWORD *)v63 - 3); /*0x4c2749*/
      v53 = *((_DWORD *)v63 - 2); /*0x4c274c*/
      v69 -= 88; /*0x4c274f*/
      qmemcpy(v78, v69, sizeof(v78)); /*0x4c2753*/
      v63 -= 88; /*0x4c2763*/
      qmemcpy(v80, v63, sizeof(v80)); /*0x4c2767*/
      v68 = *((_DWORD *)v63 + 21); /*0x4c276f*/
      v62 = *((_DWORD *)v63 + 18); /*0x4c2773*/
      v57 = v13; /*0x4c2777*/
      v61 = v53; /*0x4c277b*/
      result = v62; /*0x4c277f*/
    }
  }
  return result; /*0x4c2786*/
}



// ==== 0x004C2790  ObjectClass::method_4C2790  this=ObjectClass  sig=csp ====
int __thiscall sub_4C2790(ObjectClass *this)
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( this->owningHouseIndex )
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v4); /*0x4c27aa*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->?, v3); /*0x4c27be*/
    if ( (unsigned __int8)ClipLine(v4, v3, &DSurface_ViewBounds.field_0) )
      Lightning::Draw(
        (Lightning *)this,
        (int)this->AbstractClass,
        (int)this->?,
        (int)this->?,
        (int)this->?,
        this->?,
        this->?,
        LOBYTE(this->fallRate) != 0 ? 5 : 10);
    ++this->?; /*0x4c281a*/
  }
  result = this->owningHouseIndex >> 1; /*0x4c2821*/
  this->owningHouseIndex = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}



// ==== 0x004C2830  ObjectClass::method_4C2830  this=ObjectClass  sig=csp ====
int sub_4C2830(ObjectClass *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // ecx
  int *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // esi
  int *v9; // ebx
  int *v10; // esi
  int v11; // eax
  int v12; // eax
  void *v13; // edx
  int v14; // ecx
  _DWORD *v15; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]
  int v18[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+28h] [ebp-14h] BYREF
  char v20[12]; // [esp+30h] [ebp-Ch] BYREF

  result = dword_8A0E98 - 1; /*0x4c2839*/
  for ( i = dword_8A0E98 - 1; i >= 0; --i ) /*0x4c2843*/
  {
    v2 = (int *)*((_DWORD *)dword_8A0E8C + result); /*0x4c284f*/
    Block = v2; /*0x4c2852*/
    v3 = v2[8]; /*0x4c2856*/
    if ( v3 ) /*0x4c285b*/
    {
      v4 = (int *)(*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 176))( /*0x4c2888*/
                    v3,
                    v20,
                    v2[9],
                    0,
                    0,
                    0);
      v5 = *v4; /*0x4c288a*/
      v6 = v4[1]; /*0x4c288e*/
      v7 = v4[2]; /*0x4c2891*/
      if ( v5 != dword_8A0E50 || v6 != dword_8A0E54 || v7 != dword_8A0E58 ) /*0x4c28a4*/
      {
        v8 = Block; /*0x4c28a6*/
        *(_DWORD *)Block = v5; /*0x4c28aa*/
        v8[1] = v6; /*0x4c28ac*/
        v8[2] = v7; /*0x4c28af*/
      }
      v2 = (int *)Block; /*0x4c28b2*/
    }
    v9 = v2 + 10; /*0x4c28b9*/
    v10 = v2; /*0x4c28be*/
    if ( v2[10] ) /*0x4c28b6*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v19); /*0x4c28ce*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10 + 3, v18); /*0x4c28e2*/
      if ( (unsigned __int8)ClipLine(v19, v18, &DSurface_ViewBounds.field_0) ) /*0x4c28f4*/
      {
        v11 = -(*((_BYTE *)v10 + 44) != 0); /*0x4c2904*/
        LOBYTE(v11) = v11 & 0xFB; /*0x4c2906*/
        Lightning::Draw((Lightning *)v10, *v10, v10[1], v10[2], v10[3], v10[4], v10[5], v11 + 10); /*0x4c2938*/
      }
      ++v10[7]; /*0x4c293d*/
    }
    *v9 >>= 1; /*0x4c2944*/
    if ( !*((_DWORD *)Block + 10) ) /*0x4c294a*/
    {
      v12 = (*(int (__thiscall **)(int *, void **))(dword_8A0E88 + 16))(&dword_8A0E88, &Block); /*0x4c2960*/
      if ( v12 != -1 && v12 < dword_8A0E98 && v12 < --dword_8A0E98 ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v12; /*0x4c2983*/
          *((_DWORD *)dword_8A0E8C + v12 - 1) = *((_DWORD *)dword_8A0E8C + v12); /*0x4c2987*/
        }
        while ( v12 < dword_8A0E98 ); /*0x4c2993*/
      }
      v13 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        v14 = *((_DWORD *)Block + 8); /*0x4c299f*/
        v15 = (char *)Block + 32; /*0x4c29a2*/
        if ( v14 ) /*0x4c29a7*/
        {
          *(_DWORD *)(v14 + 1756) = 0; /*0x4c29a9*/
          *v15 = 0; /*0x4c29b3*/
        }
        __3_YAXPAX_Z(v13); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}



// ==== 0x004C29E0  ObjectClass::method_4C29E0  this=ObjectClass  sig=csp ====
void sub_4C29E0(TechnoClass *this)
{
  int i; // esi
  _DWORD *v2; // eax
  int v3; // ecx

  for ( i = 0; i < dword_8A0E98; ++i ) /*0x4c29ed*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_8A0E8C + i); /*0x4c29f4*/
    if ( v2 ) /*0x4c29f9*/
    {
      v3 = v2[8]; /*0x4c29fb*/
      if ( v3 ) /*0x4c2a00*/
      {
        *(_DWORD *)(v3 + 1756) = 0; /*0x4c2a02*/
        v2[8] = 0; /*0x4c2a08*/
      }
      __3_YAXPAX_Z(v2); /*0x4c2a0c*/
    }
  }
  dword_8A0E98 = 0; /*0x4c2a23*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c2a33*/
  {
    __3_YAXPAX_Z(dword_8A0E8C); /*0x4c2a36*/
    dword_8A0E8C = 0; /*0x4c2a3e*/
  }
  byte_8A0E95 = 0; /*0x4c2a44*/
  dword_8A0E90 = 0; /*0x4c2a4a*/
}



// ==== 0x004C2A60  TechnoClass::CreateTrailParticle  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::CreateTrailParticle(
        TechnoClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  void *result; // eax

  this->RadioClass = (void *)a2; /*0x4c2a74*/
  this->? = (void *)a3; /*0x4c2a7a*/
  this->? = (void *)a4; /*0x4c2a80*/
  v9 = a6; /*0x4c2a87*/
  this->? = (void *)a5; /*0x4c2a8b*/
  v10 = a7; /*0x4c2a8d*/
  this->? = v9; /*0x4c2a91*/
  this->? = a8; /*0x4c2a98*/
  this->? = v10; /*0x4c2aa0*/
  this->? = Random::Range(&Randomizer_Global, 0, 256); /*0x4c2aa8*/
  if ( dword_8A0E98 < dword_8A0E90 /*0x4c2ae0*/
    || (byte_8A0E95 || !dword_8A0E90)
    && dword_8A0E9C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A0E88 + 8))(
         &dword_8A0E88,
         dword_8A0E90 + dword_8A0E9C,
         0) )
  {
    v11 = dword_8A0E98++; /*0x4c2aed*/
    *((_DWORD *)dword_8A0E8C + v11) = this; /*0x4c2afc*/
  }
  result = (void *)__2_YAPAXI_Z(0x100u); /*0x4c2b04*/
  if ( result ) /*0x4c2b0f*/
    return (void *)ParticleSystemClass::Constructor( /*0x4c2b30*/
                     (int *)result,
                     *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
                     &a5,
                     0,
                     0,
                     &dword_8A0E50,
                     0);
  return result; /*0x4c2b0e*/
}



// ==== 0x004C2B40  ObjectClass::method_4C2B40  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C2B40(ObjectClass *this, _DWORD *a2)
{
  void *NeedsSaveOrLink; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  NeedsSaveOrLink = this->?; /*0x4c2b40*/
  if ( NeedsSaveOrLink ) /*0x4c2b4c*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)NeedsSaveOrLink + 176))( /*0x4c2b75*/
                     NeedsSaveOrLink,
                     v5,
                     this->occupant,
                     0,
                     0,
                     0);
    *a2 = *v3; /*0x4c2b7f*/
    a2[1] = v3[1]; /*0x4c2b84*/
    a2[2] = v3[2]; /*0x4c2b8a*/
    return a2; /*0x4c2b77*/
  }
  else
  {
    *a2 = dword_8A0E50; /*0x4c2ba6*/
    a2[1] = dword_8A0E54; /*0x4c2baf*/
    a2[2] = dword_8A0E58; /*0x4c2bb8*/
    return a2; /*0x4c2b97*/
  }
}



// ==== 0x004C2BD0  TechnoClass::updateSightRange  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::updateSightRange(TechnoClass *this, _BYTE *a2, int a3)
{
  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 1 && a2[144] && !a2[129] ) /*0x4c2bf2*/
  {
    this->? = a2; /*0x4c2c00*/
    this->? = a3; /*0x4c2c03*/
  }
}



// ==== 0x004C2C10  UnitClass::updateHarvesting  this=UnitClass  sig=csp ====
int __thiscall UnitClass::updateHarvesting(UnitClass *this)
{
  int result; // eax

  result = (int)this->?; /*0x4c2c10*/
  if ( result ) /*0x4c2c17*/
  {
    *(_DWORD *)(result + 1756) = 0; /*0x4c2c19*/
    this->? = 0; /*0x4c2c1f*/
  }
  return result; /*0x4c2c22*/
}



// ==== 0x004C2C30  ObjectClass::??0Iostream_init_QAE_XZ_3  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_3(Iostream_init *this)
{
  return this; /*0x4c2c32*/
}



// ==== 0x004C2C40  _DynamicVectorClass_PAVEBolt::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::Destroy(_DynamicVectorClass_PAVEBolt *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c2c46*/
  this->m_10 = 0; /*0x4c2c49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c2c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4c2c56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2c5e*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2c61*/
  this->m_8 = 0; /*0x4c2c64*/
}



// ==== 0x004C2C70  _DynamicVectorClass_PAVEBolt::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::GetItemIndex(_DynamicVectorClass_PAVEBolt *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c2c70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c2c85*/
  else
    return 0; /*0x4c2c77*/
}



// ==== 0x004C2C90  _VectorClass_PAVEBolt::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::Get(_VectorClass_PAVEBolt *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c2c9a*/
}



// ==== 0x004C2CA0  _VectorClass_PAVEBolt::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::Add(_VectorClass_PAVEBolt *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c2ca2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c2cad*/
  {
    v3 = 0; /*0x4c2caf*/
    if ( m_8 <= 0 ) /*0x4c2cb3*/
      return 1; /*0x4c2cd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c2cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c2cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c2cc4*/
    {
      ++v3; /*0x4c2cc6*/
      ++v4; /*0x4c2cc7*/
      if ( v3 >= m_8 ) /*0x4c2ccc*/
        return 1; /*0x4c2ccc*/
    }
  }
  return 0; /*0x4c2cce*/
}



// ==== 0x004C2CE0  _VectorClass_PAVEBolt::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::Release(_VectorClass_PAVEBolt *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c2cec*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c2cf6*/
    if ( a3 ) /*0x4c2cfc*/
      v4 = a3; /*0x4c2d12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c2d0e*/
    LOBYTE(this->m_C) = 1; /*0x4c2d16*/
    if ( v4 ) /*0x4c2d1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c2d25*/
      {
        m_8 = this->m_8; /*0x4c2d2c*/
        if ( a2 < m_8 ) /*0x4c2d31*/
          m_8 = a2; /*0x4c2d33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c2d39*/
          ++i; /*0x4c2d3e*/
        if ( BYTE1(this->m_C) ) /*0x4c2d4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2d56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c2d5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c2d67*/
      this->m_8 = a2; /*0x4c2d6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c2d72*/
      return 1; /*0x4c2d78*/
    }
    else
    {
      return 0; /*0x4c2d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEBolt *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c2d82*/
    return 1; /*0x4c2d88*/
  }
}



// ==== 0x004C2D90  _VectorClass_PAVEBolt::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::Remove(_VectorClass_PAVEBolt *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c2d9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2da3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2dab*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2dae*/
  this->m_8 = 0; /*0x4c2db1*/
}



// ==== 0x004C2DC0  _VectorClass_PAVEBolt::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::GetSize(_VectorClass_PAVEBolt *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c2dc0*/
    return 0; /*0x4c2dc8*/
  m_8 = this->m_8; /*0x4c2dce*/
  result = 0; /*0x4c2dd1*/
  if ( m_8 <= 0 ) /*0x4c2dd5*/
    return -1; /*0x4c2dec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c2ddb*/
  {
    if ( ++result >= m_8 ) /*0x4c2dea*/
      return -1; /*0x4c2dea*/
  }
  return result; /*0x4c2dca*/
}



// ==== 0x004C2E00  _VectorClass_PAVEBolt::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::GetCapacity(_VectorClass_PAVEBolt *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c2e00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c2e15*/
  else
    return 0; /*0x4c2e07*/
}



// ==== 0x004C2E20  _DynamicVectorClass_PAVEBolt::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::SetCapacity(_DynamicVectorClass_PAVEBolt *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c2e2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c2e32*/
    if ( a3 ) /*0x4c2e38*/
      v4 = a3; /*0x4c2e4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c2e4a*/
    LOBYTE(this->m_C) = 1; /*0x4c2e52*/
    if ( !v4 ) /*0x4c2e56*/
      return 0; /*0x4c2eca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c2e58*/
    {
      m_8 = this->m_8; /*0x4c2e5f*/
      if ( a2 < m_8 ) /*0x4c2e64*/
        m_8 = a2; /*0x4c2e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c2e6c*/
        ++i; /*0x4c2e71*/
      if ( BYTE1(this->m_C) ) /*0x4c2e7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2e89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c2e91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c2e9a*/
    this->m_8 = a2; /*0x4c2ea2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c2ea5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEBolt *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c2eae*/
  }
  v7 = this->m_8; /*0x4c2eb1*/
  if ( v7 < this->m_10 ) /*0x4c2eb9*/
    this->m_10 = v7; /*0x4c2ebb*/
  return 1; /*0x4c2ebe*/
}



// ==== 0x004C2ED0  _DynamicVectorClass_PAVEBolt::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::FindItemIndex(_DynamicVectorClass_PAVEBolt *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c2ed0*/
  result = 0; /*0x4c2ed3*/
  if ( m_10 <= 0 ) /*0x4c2ed8*/
    return -1; /*0x4c2eef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c2ede*/
  {
    if ( ++result >= m_10 ) /*0x4c2eed*/
      return -1; /*0x4c2eed*/
  }
  return result; /*0x4c2ef2*/
}



// ==== 0x004C2F00  _VectorClass_PAVEBolt::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EBolt::QueryInterface(_VectorClass_PAVEBolt *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c2f03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EBolt *>::`vftable'; /*0x4c2f06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c2f10*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2f20*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2f2b*/
  this->m_8 = 0; /*0x4c2f31*/
  if ( (a2 & 1) != 0 ) /*0x4c2f38*/
    __3_YAXPAX_Z(this); /*0x4c2f3b*/
  return this->__pad_0; /*0x4c2f45*/
}



// ==== 0x004C2F50  _DynamicVectorClass_PAVEBolt::Constructor_VectorClass_EBolt___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(_DynamicVectorClass_PAVEBolt *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c2f53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EBolt *>::`vftable'; /*0x4c2f56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c2f60*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2f70*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2f7b*/
  this->m_8 = 0; /*0x4c2f81*/
  if ( (a2 & 1) != 0 ) /*0x4c2f88*/
    __3_YAXPAX_Z(this); /*0x4c2f8b*/
  return this->__pad_0; /*0x4c2f95*/
}



// ==== 0x004C2FA0  sub_4C2FA0  this=-  sig=ida-proto ====
int sub_4C2FA0()
{
  dword_8A0EB8 = 0; /*0x4c2fa2*/
  dword_8A0EBC = 0; /*0x4c2fa7*/
  dword_8A0EC0 = 0; /*0x4c2fac*/
  dword_8A0EC4 = 0; /*0x4c2fb1*/
  return 0; /*0x4c2fb6*/
}



// ==== 0x004C2FC0  EditClass::method_4C2FC0  this=EditClass  sig=csp ====
int *__thiscall sub_4C2FC0(
        EditClass *this,
        int a2,
        wchar_t *String,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // eax
  int Instance; // eax
  int v13; // eax

  ControlClass::Construct((ControlClass *)this, a2, a6, a7, a8, a9, 1, 0); /*0x4c2fe5*/
  v11 = a5; /*0x4c2ff6*/
  BYTE1(v11) = BYTE1(a5) & 0xFE; /*0x4c2ff8*/
  *((_DWORD *)this + 11) = v11; /*0x4c2ffc*/
  *this = (EditClass)&EditClass::`vftable'; /*0x4c3004*/
  *((_DWORD *)this + 12) = a10; /*0x4c300a*/
  *((_DWORD *)this + 13) = String; /*0x4c300d*/
  *((_DWORD *)this + 14) = a4 - 1; /*0x4c3010*/
  *((_DWORD *)this + 15) = wcslen(String); /*0x4c3018*/
  (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3022*/
  *((_DWORD *)this + 16) = BuildingAnim::GetType(); /*0x4c302d*/
  if ( a8 == -1 || a9 == -1 ) /*0x4c3035*/
  {
    Instance = TextRenderer::GetInstance(); /*0x4c3039*/
    if ( a9 == -1 ) /*0x4c3043*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28) + 1; /*0x4c3049*/
    if ( a8 == -1 ) /*0x4c304f*/
    {
      if ( wcslen(*((const wchar_t **)this + 13)) ) /*0x4c3055*/
      {
        v13 = Text::MeasureWidth(*((_DWORD *)this + 13), 0); /*0x4c3069*/
        *((_DWORD *)this + 17) = 0; /*0x4c3071*/
        *((_DWORD *)this + 5) = v13 + 6; /*0x4c3078*/
        return (int *)this; /*0x4c3081*/
      }
      *((_DWORD *)this + 5) = (*((_DWORD *)this + 14) + 1) * Text::MeasureWidth((int)asc_820768, 0) + 2; /*0x4c309a*/
    }
  }
  *((_DWORD *)this + 17) = 0; /*0x4c309d*/
  return (int *)this; /*0x4c307d*/
}



// ==== 0x004C30B0  DropListClass::Constructor  this=EditClass  sig=csp ====
int __thiscall DropListClass::Constructor(DropListClass *this)
{
  *(_DWORD *)this->__pad_0 = &EditClass::`vftable'; /*0x4c30b3*/
  if ( COMObject::IsPrimaryInstance((GadgetClass *)this) ) /*0x4c30b9*/
    COMObject::DeactivateGlobal((ShpButtonClass *)this); /*0x4c30c4*/
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x4c30d0*/
}



// ==== 0x004C30E0  EditClass::SelectItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt34(int *this, wchar_t *String, int a3)
{
  size_t v4; // eax
  int v5; // edx

  *(this + 13) = (int)String; /*0x4c30ed*/
  *(this + 14) = a3 - 1; /*0x4c30f0*/
  v4 = wcslen(String); /*0x4c30f3*/
  v5 = *this; /*0x4c30f8*/
  *(this + 15) = v4; /*0x4c30ff*/
  return (*(int (__thiscall **)(int *))(v5 + 72))(this); /*0x4c3105*/
}



// ==== 0x004C3110  EditClass::GetItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetItem(EditClass *this, int a2)
{
  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x4c311b*/
    return 0; /*0x4c3183*/
  (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 32))( /*0x4c314e*/
    stru_887598.lineTrailer,
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    *((_DWORD *)this + 6));
  (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 144))(this); /*0x4c3155*/
  (*(void (__thiscall **)(EditClass *, _DWORD))(*(_DWORD *)this + 148))(this, *((_DWORD *)this + 13)); /*0x4c3163*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 36))(stru_887598.lineTrailer); /*0x4c3171*/
  return 1; /*0x4c3179*/
}



// ==== 0x004C3190  EditClass::GetCount  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetCount(EditClass *this, unsigned int a2, int *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  EditClass v9; // ebp
  char v10; // al

  if ( *((_DWORD *)this + 17) ) /*0x4c3193*/
    return 0; /*0x4c319d*/
  v6 = a2; /*0x4c31a1*/
  if ( (a2 & 1) != 0 ) /*0x4c31a9*/
  {
    v6 = a2 & 0xFFFFFFFE; /*0x4c31af*/
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 80))(this); /*0x4c31b2*/
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c31b9*/
  }
  if ( (v6 & 0x100) == 0 || !(*(unsigned __int8 (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this) ) /*0x4c31cd*/
    return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c31d2*/
  if ( *a3 == 27 ) /*0x4c31dd*/
  {
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 84))(this); /*0x4c31e3*/
    return CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4c31f5*/
  }
  v7 = (unsigned __int8)Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], *a3); /*0x4c3209*/
  v8 = *a3; /*0x4c320b*/
  if ( (*a3 & 0x1000) != 0 && v7 >= 48 && v7 <= 57 ) /*0x4c321f*/
  {
    BYTE1(v8) &= ~0x10u; /*0x4c3221*/
    *a3 = v8; /*0x4c3227*/
    if ( (v6 & 0x44) != 0 || !(*(unsigned __int8 (__thiscall **)(EditClass *, int))(*(_DWORD *)this + 152))(this, v7) ) /*0x4c3230*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c3238*/
  }
  else if ( (*a3 & 0x1000) == 0 && v7 >= 32 || v8 == 13 || v8 == 8 ) /*0x4c3255*/
  {
    if ( (v6 & 0x44) != 0 ) /*0x4c325a*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c325a*/
    v9 = *this; /*0x4c3263*/
    v10 = Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], v8); /*0x4c3266*/
    if ( !(*(unsigned __int8 (__thiscall **)(EditClass *, _DWORD))(*(_DWORD *)&v9 + 152))(this, v10) ) /*0x4c3271*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c327a*/
  }
  BYTE1(v6) &= ~1u; /*0x4c327c*/
  *a3 = 0; /*0x4c327f*/
  return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c319c*/
}



// ==== 0x004C32A0  EditClass::GetSelected  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetSelected(EditClass *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v1 = *((_DWORD *)this + 4); /*0x4c32a6*/
  v5[0] = (int)*(this + 3); /*0x4c32a9*/
  v2 = *((_DWORD *)this + 5); /*0x4c32ad*/
  v3 = *((_DWORD *)this + 6); /*0x4c32b0*/
  v5[1] = v1; /*0x4c32b3*/
  v5[3] = v3; /*0x4c32b7*/
  v5[2] = v2; /*0x4c32c6*/
  return DrawBuildingTilesSHP(v5, 4, 1); /*0x4c32cf*/
}



// ==== 0x004C32E0  EditClass::GetItemText  this=EditClass  sig=csp ====
_DWORD *__thiscall DropListClass::GetItemText(EditClass *this, wchar_t *String)
{
  char v3; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *result; // eax
  int v9; // ebp
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp-14h] [ebp-44h]
  int v16; // [esp-10h] [ebp-40h]
  int v17; // [esp-Ch] [ebp-3Ch]
  int v18; // [esp-8h] [ebp-38h]
  int v19; // [esp-4h] [ebp-34h]
  int v20; // [esp+Ch] [ebp-24h]
  int v21; // [esp+10h] [ebp-20h] BYREF
  int v22; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v23[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v25[12]; // [esp+24h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this); /*0x4c32ea*/
  v4 = *((_DWORD *)this + 4); /*0x4c32f0*/
  v22 = *((_DWORD *)this + 3) + 1; /*0x4c32ff*/
  v5 = *((_DWORD *)this + 5) - 2; /*0x4c3307*/
  v23[0] = v4 + 1; /*0x4c330a*/
  v6 = *((_DWORD *)this + 11); /*0x4c330e*/
  v21 = v3 != 0 ? 0x2000 : 0;
  v19 = v5; /*0x4c3315*/
  v18 = v21 | v6; /*0x4c3321*/
  v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *((_DWORD *)this + 16)); /*0x4c3331*/
  v7 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x4c333a*/
  FillRectangle(v23, (int)String, (int)g_DSurface_Hidden_2, v7, (int)v25, (int)&v22, v16, 0, v18, v19); /*0x4c334f*/
  TextRenderer::GetInstance(); /*0x4c3357*/
  result = (_DWORD *)(*(int (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this); /*0x4c3362*/
  if ( (_BYTE)result ) /*0x4c3367*/
  {
    result = (_DWORD *)wcslen(String); /*0x4c336e*/
    if ( (unsigned int)result < *((_DWORD *)this + 14) ) /*0x4c337b*/
    {
      v9 = Text::MeasureWidth((int)String, 0); /*0x4c3395*/
      v10 = Text::MeasureWidth((int)asc_82076C, 0) + v9; /*0x4c339c*/
      result = (_DWORD *)(*((_DWORD *)this + 5) - 2); /*0x4c33a1*/
      if ( v10 < (int)result ) /*0x4c33a7*/
      {
        v11 = Text::MeasureWidth((int)String, 0) + *((_DWORD *)this + 3) + 1; /*0x4c33ba*/
        v12 = *((_DWORD *)this + 4); /*0x4c33be*/
        v13 = *((_DWORD *)this + 11); /*0x4c33c1*/
        v21 = v11; /*0x4c33c4*/
        v22 = v12 + 1; /*0x4c33cd*/
        v17 = v20 | v13; /*0x4c33db*/
        v15 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *((_DWORD *)this + 16)); /*0x4c33e5*/
        v14 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4c33f4*/
                g_DSurface_Hidden_2,
                v24);
        return FillRectangle(v23, (int)asc_82076C, (int)g_DSurface_Hidden_2, v14, (int)&v21, v15, 0, v17, -1, 0); /*0x4c3407*/
      }
    }
  }
  return result; /*0x4c340c*/
}



// ==== 0x004C3420  EditClass::SetItemText  this=EditClass  sig=csp ====
char __thiscall DropListClass::SetItemText(EditClass *this, int C)
{
  int v3; // edi
  FontClass *Instance; // ebx
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  v3 = C; /*0x4c342d*/
  Instance = (FontClass *)TextRenderer::GetInstance(); /*0x4c3431*/
  if ( C ) /*0x4c3435*/
  {
    if ( C == 8 ) /*0x4c343e*/
    {
      v9 = *((_DWORD *)this + 15); /*0x4c3540*/
      if ( v9 ) /*0x4c3545*/
      {
        v10 = *((_DWORD *)this + 13); /*0x4c3547*/
        v11 = v9 - 1; /*0x4c354a*/
        *((_DWORD *)this + 15) = v11; /*0x4c354b*/
        *(_WORD *)(v10 + 2 * v11) = 0; /*0x4c354e*/
        (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3558*/
      }
      return 1; /*0x4c3558*/
    }
    if ( C == 13 ) /*0x4c3447*/
    {
      (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 84))(this); /*0x4c3535*/
      return 0; /*0x4c353d*/
    }
    v5 = Text::MeasureWidth(*((_DWORD *)this + 13), 0); /*0x4c345e*/
    if ( FontClass::GetPixelData(Instance, C) + v5 < *((_DWORD *)this + 5) - 2 /*0x4c347e*/
      && *((_DWORD *)this + 15) < *((_DWORD *)this + 14) )
    {
      if ( isgraph(C) ) /*0x4c3485*/
      {
        if ( C != 32 ) /*0x4c349f*/
        {
LABEL_11:
          if ( (*(_BYTE *)(this + 12) & 8) != 0 && isalpha(C) ) /*0x4c34b3*/
            v3 = toupper(C); /*0x4c34c8*/
          if ( (*(_BYTE *)(this + 12) & 2) != 0 && isdigit(v3) /*0x4c3506*/
            || (*(_BYTE *)(this + 12) & 1) != 0 && isalpha(v3)
            || (*(_BYTE *)(this + 12) & 4) != 0 && !isalnum(v3)
            || v3 == 32 )
          {
            *(_WORD *)(*((_DWORD *)this + 13) + 2 * *((_DWORD *)this + 15)) = v3; /*0x4c350e*/
            v6 = *((_DWORD *)this + 13); /*0x4c3515*/
            v7 = *((_DWORD *)this + 15) + 1; /*0x4c3518*/
            *((_DWORD *)this + 15) = v7; /*0x4c3519*/
            *(_WORD *)(v6 + 2 * v7) = 0; /*0x4c351e*/
            (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3526*/
            return 1; /*0x4c352e*/
          }
          return 1; /*0x4c3506*/
        }
      }
      else if ( C != 32 ) /*0x4c3494*/
      {
        return 1; /*0x4c3494*/
      }
      if ( *((_DWORD *)this + 15) ) /*0x4c34a1*/
        goto LABEL_11; /*0x4c34a6*/
    }
  }
  return 1; /*0x4c3529*/
}



// ==== 0x004C3570  EditClass::Close  this=EditClass  sig=csp ====
__int16 __thiscall DropListClass::Close(EditClass *this)
{
  const wchar_t *v2; // eax

  v2 = (const wchar_t *)*((_DWORD *)this + 13); /*0x4c3573*/
  *((_DWORD *)this + 15) = 0; /*0x4c3576*/
  if ( v2 ) /*0x4c357f*/
    *((_DWORD *)this + 15) = wcslen(v2); /*0x4c358a*/
  return COMObject::ActivateGlobal((ShpButtonClass *)this); /*0x4c3594*/
}



// ==== 0x004C35A0  sub_4C35A0  this=-  sig=ida-proto ====
void sub_4C35A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c35ac*/
  dbl_8A0EE8 = Math::Sqrt(v0 + v0); /*0x4c35be*/
}



// ==== 0x004C35D0  sub_4C35D0  this=-  sig=ida-proto ====
void sub_4C35D0()
{
  dbl_8A0F38 = dbl_8A0EE8 / 60.0; /*0x4c35dc*/
}



// ==== 0x004C35F0  sub_4C35F0  this=-  sig=ida-proto ====
void sub_4C35F0()
{
  dbl_8A0F20 = 1.0 / dbl_8A0F38; /*0x4c35fc*/
}



// ==== 0x004C3610  sub_4C3610  this=-  sig=ida-proto ====
void sub_4C3610()
{
  dbl_8A0F18 = 0.0174532925199433 * 45.0; /*0x4c361c*/
}



// ==== 0x004C3630  sub_4C3630  this=-  sig=ida-proto ====
void sub_4C3630()
{
  dbl_8A0EF0 = 0.0174532925199433 * 60.0; /*0x4c363c*/
}



// ==== 0x004C3650  sub_4C3650  this=-  sig=ida-proto ====
void sub_4C3650()
{
  dbl_8A0EC8 = 0.0174532925199433 * 90.0; /*0x4c365c*/
}



// ==== 0x004C3670  sub_4C3670  this=-  sig=ida-proto ====
__int64 sub_4C3670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0EC8 - dbl_8A0EF0); /*0x4c3682*/
  result = Math::RoundToInt(v0 * dbl_8A0EE8 * 0.5); /*0x4c3696*/
  dword_8A0F40 = result; /*0x4c369b*/
  return result; /*0x4c36a0*/
}



// ==== 0x004C36B0  sub_4C36B0  this=-  sig=ida-proto ====
void sub_4C36B0()
{
  dbl_8A0EF8 = Math::ArcTan((double)dword_8A0F40 * 0.00390625); /*0x4c36c7*/
}



// ==== 0x004C36E0  sub_4C36E0  this=-  sig=ida-proto ====
void sub_4C36E0()
{
  dbl_8A0F10 = Math::ArcTan((double)(2 * dword_8A0F40) / dbl_8A0EE8); /*0x4c3702*/
}



// ==== 0x004C3710  sub_4C3710  this=-  sig=ida-proto ====
__int64 sub_4C3710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0F40) + 0.5); /*0x4c372b*/
  dword_8A0F34 = result; /*0x4c3730*/
  return result; /*0x4c3736*/
}



// ==== 0x004C3740  sub_4C3740  this=-  sig=ida-proto ====
int sub_4C3740()
{
  word_8A0EE0 = 0; /*0x4c3742*/
  word_8A0EE2 = 0; /*0x4c3748*/
  return 0; /*0x4c374e*/
}



// ==== 0x004C3750  sub_4C3750  this=-  sig=ida-proto ====
int sub_4C3750()
{
  dword_8A0F00 = 0; /*0x4c3752*/
  dword_8A0F04 = 0; /*0x4c3757*/
  dword_8A0F08 = 0; /*0x4c375c*/
  return 0; /*0x4c3761*/
}



// ==== 0x004C3770  sub_4C3770  this=-  sig=ida-proto ====
int sub_4C3770()
{
  dword_8A0F30 = 0; /*0x4c3775*/
  dword_8A0F28 = 128; /*0x4c377f*/
  dword_8A0F2C = 128; /*0x4c3784*/
  return 128; /*0x4c3789*/
}



// ==== 0x004C3790  sub_4C3790  this=-  sig=ida-proto ====
int sub_4C3790()
{
  dword_8A0ED0 = 0; /*0x4c3792*/
  dword_8A0ED4 = 0; /*0x4c3797*/
  dword_8A0ED8 = 0; /*0x4c379c*/
  dword_8A0EDC = 0; /*0x4c37a1*/
  return 0; /*0x4c37a6*/
}



// ==== 0x004C37B0  sub_4C37B0  this=-  sig=ida-proto ====
int sub_4C37B0()
{
  dword_8A0F48 = 0; /*0x4c37b2*/
  dword_8A0F4C = 0; /*0x4c37b7*/
  dword_8A0F50 = 0; /*0x4c37bc*/
  dword_8A0F54 = 0; /*0x4c37c1*/
  return 0; /*0x4c37c6*/
}



// ==== 0x004C37D0  sub_4C37D0  this=-  sig=csp ====
_BYTE *__fastcall sub_4C37D0(int a1, _BYTE *a2, int a3, unsigned __int8 a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int i; // esi
  int v10; // eax
  _BYTE *v12; // [esp+4h] [ebp-10h]
  __int16 v13; // [esp+8h] [ebp-Ch] BYREF
  char v14; // [esp+Ah] [ebp-Ah]
  int v15; // [esp+Ch] [ebp-8h]
  _BYTE *v16; // [esp+10h] [ebp-4h]

  v16 = a2; /*0x4c37d4*/
  if ( !a2 ) /*0x4c37dc*/
    return 0; /*0x4c38c7*/
  v5 = 0; /*0x4c37e3*/
  v12 = a2; /*0x4c37e7*/
  v15 = 0; /*0x4c37eb*/
  do /*0x4c38b5*/
  {
    if ( v5 <= 240 && v5 ) /*0x4c37fc*/
    {
      v6 = a1 + 2 * (v5 % 256) + v5 % 256; /*0x4c3813*/
      v13 = *(_WORD *)v6; /*0x4c3818*/
      v14 = *(_BYTE *)(v6 + 2); /*0x4c3820*/
      Color::Lerp((unsigned __int8 *)&v13, a4, (unsigned __int8 *)(a1 + 2 * (a3 % 256) + a3 % 256)); /*0x4c3845*/
      v7 = -1; /*0x4c384a*/
      v8 = 0; /*0x4c384d*/
      for ( i = 240; i < 255; ++i ) /*0x4c384f*/
      {
        v10 = Palette::CalcColorDistance((unsigned __int8 *)(a1 + 2 * (i % 256) + i % 256), (unsigned __int8 *)&v13); /*0x4c3870*/
        if ( v7 == -1 || v10 < v8 ) /*0x4c387c*/
        {
          v7 = i; /*0x4c387e*/
          v8 = v10; /*0x4c3880*/
        }
      }
      a2 = v16; /*0x4c388f*/
      *v12++ = v7; /*0x4c3893*/
      v5 = v15; /*0x4c389a*/
    }
    else
    {
      *v12++ = v5; /*0x4c38a4*/
    }
    v15 = ++v5; /*0x4c38b1*/
  }
  while ( v5 < 256 ); /*0x4c38b5*/
  return a2; /*0x4c38c0*/
}



// ==== 0x004C38D0  ObjectClass::method_4C38D0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C38D0(ObjectClass *this)
{
  return ((_DWORD)&this->AbstractClass + 1) << 8; /*0x4c38d6*/
}



// ==== 0x004C38E0  sub_4C38E0  this=-  sig=ida-proto ====
char *__fastcall sub_4C38E0(char *a1, int a2, int a3, char *a4)
{
  char *v5; // edx
  char *v6; // eax
  _BYTE *v7; // ebp
  unsigned __int8 *v8; // edi
  int v9; // eax
  int v10; // esi
  char *v11; // eax
  int v12; // eax
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+12h] [ebp-Eh]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v16 = a2; /*0x4c38ed*/
  if ( !a3 || !a2 ) /*0x4c38fb*/
    return a4; /*0x4c38fb*/
  v5 = a4; /*0x4c3901*/
  if ( a4 ) /*0x4c3907*/
    goto LABEL_6; /*0x4c3907*/
  v6 = (char *)__2_YAPAXI_Z((a3 + 1) << 8); /*0x4c3910*/
  a4 = v6; /*0x4c3918*/
  if ( !v6 ) /*0x4c391e*/
    return a4; /*0x4c3a11*/
  v5 = v6; /*0x4c3924*/
LABEL_6:
  v7 = v5 + 256; /*0x4c3926*/
  memset(v5, 0xFFu, 0x100u); /*0x4c3938*/
  v17 = 0; /*0x4c393a*/
  if ( a3 > 0 ) /*0x4c3942*/
  {
    v8 = (unsigned __int8 *)(v16 + 1); /*0x4c394c*/
    while ( 1 ) /*0x4c395b*/
    {
      v5[*(v8 - 1)] = v17; /*0x4c395e*/
      v9 = *v8; /*0x4c396a*/
      v18 = v8[1]; /*0x4c396f*/
      v10 = 1; /*0x4c397f*/
      v11 = &a1[2 * v9 + v9]; /*0x4c3984*/
      v14 = *(_WORD *)v11; /*0x4c3989*/
      LOBYTE(v11) = v11[2]; /*0x4c398e*/
      *v7 = 0; /*0x4c3991*/
      v15 = (char)v11; /*0x4c3995*/
      do /*0x4c39e6*/
      {
        v12 = (int)&a1[2 * (v10 % 256) + v10 % 256]; /*0x4c39ac*/
        LOWORD(v16) = *(_WORD *)v12; /*0x4c39ba*/
        BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4c39c7*/
        Color::Lerp((unsigned __int8 *)&v16, v18, (unsigned __int8 *)&v14); /*0x4c39cb*/
        v7[v10++] = Palette::FindClosestColor(a1, (int)&v16); /*0x4c39dc*/
      }
      while ( v10 < 256 ); /*0x4c39e6*/
      v7 += 256; /*0x4c39f0*/
      v8 += 4; /*0x4c39f7*/
      if ( ++v17 >= a3 ) /*0x4c3a00*/
        break; /*0x4c3a00*/
      v5 = a4; /*0x4c3951*/
    }
    return a4; /*0x4c3a00*/
  }
  return v5; /*0x4c3a0a*/
}



// ==== 0x004C3A20  sub_4C3A20  this=-  sig=ida-proto ====
char *__fastcall sub_4C3A20(int a1, int a2, int a3, char *a4)
{
  char *v4; // ebp
  int v5; // ebx
  _BYTE *v6; // edi
  unsigned __int8 *v7; // esi

  if ( !a3 || !a2 ) /*0x4c3a39*/
    return a4; /*0x4c3ab3*/
  v4 = a4; /*0x4c3a3b*/
  if ( a4 || (v4 = (char *)__2_YAPAXI_Z((a3 + 1) << 8)) != 0 ) /*0x4c3a56*/
  {
    v5 = 0; /*0x4c3a62*/
    memset(v4, 0xFFu, 0x100u); /*0x4c3a64*/
    v6 = v4 + 256; /*0x4c3a68*/
    if ( a3 > 0 ) /*0x4c3a6e*/
    {
      v7 = (unsigned __int8 *)(a2 + 1); /*0x4c3a74*/
      do /*0x4c3aa5*/
      {
        v4[*(v7 - 1)] = v5; /*0x4c3a80*/
        sub_4C37D0(a1, v6, *v7, v7[1]); /*0x4c3a90*/
        v6 += 256; /*0x4c3a95*/
        ++v5; /*0x4c3a9b*/
        v7 += 4; /*0x4c3aa0*/
      }
      while ( v5 < a3 ); /*0x4c3aa5*/
    }
  }
  return v4; /*0x4c3aa7*/
}



// ==== 0x004C3AD0  sub_4C3AD0  this=-  sig=ida-proto ====
int __fastcall sub_4C3AD0(char *a1, int a2, int a3, unsigned __int8 a4)
{
  int v6; // esi
  unsigned __int8 *v7; // ebp
  int v8; // eax

  if ( !a2 ) /*0x4c3ad8*/
    return 0; /*0x4c3b4a*/
  v6 = 0; /*0x4c3ae0*/
  v7 = (unsigned __int8 *)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3af3*/
  do /*0x4c3b3f*/
  {
    v8 = (int)&a1[2 * (v6 % 256) + v6 % 256]; /*0x4c3b0a*/
    LOWORD(a3) = *(_WORD *)v8; /*0x4c3b0f*/
    BYTE2(a3) = *(_BYTE *)(v8 + 2); /*0x4c3b20*/
    Color::Lerp((unsigned __int8 *)&a3, a4, v7); /*0x4c3b24*/
    *(_BYTE *)(v6 + a2) = Palette::FindClosestColor(a1, (int)&a3); /*0x4c3b35*/
    ++v6; /*0x4c3b38*/
  }
  while ( v6 < 256 ); /*0x4c3b3f*/
  return a2; /*0x4c3b45*/
}



// ==== 0x004C3B60  sub_4C3B60  this=-  sig=ida-proto ====
_BYTE *__fastcall sub_4C3B60(char *a1, _BYTE *a2, int a3, int a4)
{
  unsigned __int8 v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v6 = a4; /*0x4c3b7d*/
  v7 = (int)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3b81*/
  v8 = 1; /*0x4c3b83*/
  LOWORD(a3) = *(_WORD *)v7; /*0x4c3b8b*/
  LOBYTE(v7) = *(_BYTE *)(v7 + 2); /*0x4c3b90*/
  *a2 = 0; /*0x4c3b93*/
  BYTE2(a3) = v7; /*0x4c3b96*/
  do /*0x4c3be3*/
  {
    v9 = (int)&a1[2 * (v8 % 256) + v8 % 256]; /*0x4c3bad*/
    LOWORD(a4) = *(_WORD *)v9; /*0x4c3bbc*/
    BYTE2(a4) = *(_BYTE *)(v9 + 2); /*0x4c3bc4*/
    Color::Lerp((unsigned __int8 *)&a4, v6, (unsigned __int8 *)&a3); /*0x4c3bc8*/
    a2[v8++] = Palette::FindClosestColor(a1, (int)&a4); /*0x4c3bd9*/
  }
  while ( v8 < 256 ); /*0x4c3be3*/
  return a2; /*0x4c3be5*/
}



// ==== 0x004C3BF0  sub_4C3BF0  this=-  sig=ida-proto ====
int sub_4C3BF0()
{
  dword_8A3760 = 0; /*0x4c3bf2*/
  dword_8A3764 = 0; /*0x4c3bf7*/
  dword_8A3768 = 0; /*0x4c3bfc*/
  dword_8A376C = 0; /*0x4c3c01*/
  return 0; /*0x4c3c06*/
}



// ==== 0x004C3C10  sub_4C3C10  this=-  sig=ida-proto ====
int sub_4C3C10()
{
  dword_8A3774 = 0; /*0x4c3c17*/
  dword_8A3778 = 0; /*0x4c3c1c*/
  byte_8A377C = 1; /*0x4c3c21*/
  byte_8A377D = 0; /*0x4c3c28*/
  dword_8A3770 = (int)&DynamicVectorClass<EgoClass *>::`vftable'; /*0x4c3c2d*/
  dword_8A3784 = 10; /*0x4c3c37*/
  dword_8A3780 = 0; /*0x4c3c41*/
  return atexit(sub_4C3C50); /*0x4c3c4c*/
}



// ==== 0x004C3C50  sub_4C3C50  this=-  sig=ida-proto ====
void __cdecl sub_4C3C50()
{
  dword_8A3770 = (int)&VectorClass<EgoClass *>::`vftable'; /*0x4c3c58*/
  if ( dword_8A3774 && byte_8A377D ) /*0x4c3c6c*/
  {
    __3_YAXPAX_Z(dword_8A3774); /*0x4c3c6f*/
    dword_8A3774 = 0; /*0x4c3c77*/
  }
  byte_8A377D = 0; /*0x4c3c7d*/
  dword_8A3778 = 0; /*0x4c3c83*/
}



// ==== 0x004C3C90  ObjectClass::method_4C3C90  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_4C3C90(wchar_t **this, wchar_t *a2, wchar_t *a3, wchar_t *String, wchar_t *a5)
{
  size_t v6; // eax
  wchar_t *v7; // eax

  this->vtable2 = a2; /*0x4c3ca5*/
  this->vtable3 = a3; /*0x4c3ca8*/
  this->vtable4 = a5; /*0x4c3cab*/
  v6 = wcslen(String); /*0x4c3cae*/
  v7 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2); /*0x4c3cb8*/
  *this = v7; /*0x4c3cbf*/
  wcscpy(v7, String); /*0x4c3cc1*/
  return this; /*0x4c3ccb*/
}



// ==== 0x004C3D00  CreditsPower::DrawCreditsTextLine  this=AbstractClass  sig=csp ====
char __thiscall sub_4C3D00(int this, char a2)
{
  int v3; // esi
  char result; // al
  int v5; // ecx
  int v6; // eax
  size_t v7; // eax
  int v8; // [esp-10h] [ebp-28h]
  int v9[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 8); /*0x4c3d0d*/
  if ( v3 < (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 128))(g_DSurface_Hidden_2) /*0x4c3d44*/
    && (v3 = *(_DWORD *)(this + 8),
        v3 > (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 128))(g_DSurface_Hidden_2) - 52)
    || v3 >= -16 && v3 <= 32
    || (result = a2) != 0 )
  {
    v9[3] = *(&g_DisplayWidth + 1); /*0x4c3d56*/
    v5 = 0; /*0x4c3d5d*/
    v9[0] = (g_DisplayWidth - 520) / 2; /*0x4c3d61*/
    v6 = *(_DWORD *)(this + 12); /*0x4c3d65*/
    v9[2] = 520; /*0x4c3d6b*/
    v9[1] = v3; /*0x4c3d73*/
    if ( (v6 & 0x100) != 0 ) /*0x4c3d77*/
    {
      v5 = 1; /*0x4c3d79*/
    }
    else if ( (v6 & 0x200) != 0 ) /*0x4c3d83*/
    {
      v5 = 4; /*0x4c3d85*/
    }
    result = byte_A8ED80; /*0x4c3d8a*/
    if ( byte_A8ED80 ) /*0x4c3d91*/
    {
      v8 = v5; /*0x4c3da0*/
      v7 = wcslen(*(const wchar_t **)this); /*0x4c3da2*/
      return DrawTextRendererTextAligned(8454143, 0, v9, *(unsigned __int16 **)this, v7, v8, 0, dword_8A0F58, 0); /*0x4c3dba*/
    }
  }
  return result; /*0x4c3dbf*/
}



// ==== 0x004C3DD0  ObjectClass::method_4C3DD0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C3DD0(ObjectClass *this, int a2)
{
  void *vtable2; // edx
  _DWORD v5[4]; // [esp+4h] [ebp-10h] BYREF

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth((int)this->AbstractClass, 0); /*0x4c3de5*/
  vtable2 = this->?; /*0x4c3def*/
  v5[2] = g_DisplayWidth; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = vtable2; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x4c3e28*/
                                                                                    + 8))(
           g_DSurface_Hidden_2,
           v5,
           a2,
           v5,
           0,
           1);
}



// ==== 0x004C3E30  CreditsPower::Display  this=CreditsPower  sig=csp ====
int __usercall CreditsPower::Display@<eax>(CreditsPower *this, int a2@<edi>, int a3@<esi>)
{
  int v3; // ebx
  int Size; // eax
  char *v5; // esi
  signed int v6; // eax
  int BuildingAnimByName; // eax
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // edx
  char v11; // al
  int v12; // edi
  int v13; // kr08_4
  int v14; // eax
  char *v15; // edi
  char v16; // al
  char *v17; // ebp
  int v18; // kr10_4
  char v19; // cl
  int v20; // ecx
  bool v21; // cc
  wchar_t **v22; // ebp
  char *v23; // edi
  unsigned __int8 *v24; // esi
  wchar_t *v25; // ebx
  unsigned __int8 v26; // al
  unsigned int v27; // ecx
  unsigned __int8 *v28; // edx
  wchar_t *StringCSF; // edi
  wchar_t *v30; // ecx
  unsigned __int8 v31; // al
  unsigned __int8 v33; // al
  float v34; // eax
  int v35; // eax
  wchar_t *v36; // eax
  wchar_t **v37; // esi
  int v38; // eax
  char *v39; // eax
  char *v40; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // esi
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  void **v47; // edi
  int v48; // eax
  int i; // esi
  int v50; // edi
  int v51; // eax
  LoadingScreen *v52; // edx
  int v53; // eax
  int v54; // esi
  unsigned __int8 v55; // bp
  int v56; // ecx
  __int16 *v57; // esi
  int v58; // eax
  int v59; // edx
  int v60; // edi
  __int16 v61; // cx
  __int16 v62; // cx
  void (__stdcall **DSurface_field_0x0)(int, _DWORD, int); // eax
  int v64; // edi
  int v65; // esi
  int v66; // esi
  int v67; // ecx
  void ***v68; // edx
  void **v69; // esi
  int v70; // eax
  int v72; // [esp+54h] [ebp-12Ch]
  int v73; // [esp+58h] [ebp-128h]
  int v74; // [esp+5Ch] [ebp-124h]
  int v75; // [esp+60h] [ebp-120h]
  int v76; // [esp+64h] [ebp-11Ch]
  int v77; // [esp+68h] [ebp-118h]
  int v79; // [esp+6Ch] [ebp-114h]
  int v80; // [esp+70h] [ebp-110h]
  int v81; // [esp+70h] [ebp-110h]
  int v82; // [esp+78h] [ebp-108h]
  int *v83; // [esp+7Ch] [ebp-104h]
  int v84; // [esp+7Ch] [ebp-104h]
  int v85; // [esp+80h] [ebp-100h]
  int v86; // [esp+84h] [ebp-FCh]
  int v87; // [esp+88h] [ebp-F8h]
  char v88; // [esp+88h] [ebp-F8h]
  __int16 *v89; // [esp+8Ch] [ebp-F4h]
  char v90; // [esp+8Fh] [ebp-F1h]
  int v91; // [esp+90h] [ebp-F0h]
  int v92; // [esp+90h] [ebp-F0h]
  char *v93; // [esp+94h] [ebp-ECh]
  int v94; // [esp+98h] [ebp-E8h]
  int v95; // [esp+98h] [ebp-E8h]
  char v96; // [esp+9Fh] [ebp-E1h]
  char *v97; // [esp+A0h] [ebp-E0h]
  int v98; // [esp+A4h] [ebp-DCh]
  int v99; // [esp+A4h] [ebp-DCh]
  float v100; // [esp+A8h] [ebp-D8h] BYREF
  float v101; // [esp+ACh] [ebp-D4h]
  void *Block; // [esp+B0h] [ebp-D0h]
  int v103; // [esp+B8h] [ebp-C8h]
  int v104; // [esp+BCh] [ebp-C4h]
  _DWORD v105[4]; // [esp+C0h] [ebp-C0h] BYREF
  _DWORD v106[2]; // [esp+D0h] [ebp-B0h] BYREF
  int v107[2]; // [esp+D8h] [ebp-A8h] BYREF
  int v108; // [esp+E0h] [ebp-A0h]
  _DWORD v109[3]; // [esp+E8h] [ebp-98h] BYREF
  char *v110; // [esp+F4h] [ebp-8Ch] BYREF
  _DWORD v111[2]; // [esp+F8h] [ebp-88h] BYREF
  wchar_t Format[2]; // [esp+100h] [ebp-80h] BYREF
  char *v113; // [esp+104h] [ebp-7Ch]
  CCFileClass v114; // [esp+110h] [ebp-70h] BYREF
  char v115[12]; // [esp+16Ch] [ebp-14h] BYREF
  int v116; // [esp+178h] [ebp-8h]

  g_DSurface_Hidden_2 = (AudioStream *)DSurface_Alternate; /*0x4c3e42*/
  CCFileClass::Construct((CCFileClass *)&v114.?, aCreditsmdTxt); /*0x4c3e4d*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v114.?, 0) ) /*0x4c3e5c*/
  {
    Size = CCFileClass::GetSize((CCFileClass *)&v114.?); /*0x4c3e73*/
    v5 = (char *)__2_YAPAXI_Z(Size + 1); /*0x4c3e7f*/
    Block = v5; /*0x4c3e8b*/
    v6 = CCFileClass::GetSize((CCFileClass *)&v114.?); /*0x4c3e8f*/
    CCFileClass::Read((CCFileClass *)&v114.?, v5, v6); /*0x4c3e9d*/
    stru_822420.ExpireAnim = (AnimTypeClass *)&stru_820320.?[9]; /*0x4c3eb2*/
    v100 = 0.0; /*0x4c3ebc*/
    v101 = 0.0; /*0x4c3ec0*/
    BuildingAnimByName = FindBuildingAnimByName(aLightgold, 1); /*0x4c3ec4*/
    v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, char **, float *, int, _DWORD, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4c3edf*/
                     g_DSurface_Hidden_2,
                     &v110,
                     &v100,
                     BuildingAnimByName,
                     0,
                     328,
                     a2,
                     a3);
    TextRenderer::DrawText(v107, (size_t)asc_82083C, (int)g_DSurface_Hidden_2, v8, v72, v73, v74, v75); /*0x4c3ef7*/
    v9 = CCFileClass::GetSize(&v114); /*0x4c3f11*/
    v98 = -2; /*0x4c3f26*/
    v87 = (*((int (__thiscall **)(ObjectClass *, int, int, int, int))g_DSurface_Hidden->AbstractClass + 32))( /*0x4c3f2e*/
            g_DSurface_Hidden,
            v76,
            v77,
            v79,
            v80)
        + 2;
    while ( 2 ) /*0x4c3f32*/
    {
      v11 = *v5++; /*0x4c3f32*/
      v12 = v9 - 1; /*0x4c3f3b*/
      v94 = v12; /*0x4c3f3f*/
      v13 = v10; /*0x4c3f45*/
      v10 = 0; /*0x4c3f45*/
      switch ( v11 ) /*0x4c3f4d*/
      {
        case 9: /*0x4c3f4d*/
          v14 = v86 + 8; /*0x4c3f7f*/
          goto LABEL_63; /*0x4c3f82*/
        case 10: /*0x4c3f4d*/
          goto LABEL_65;
        case 13: /*0x4c3f4d*/
          ++v91; /*0x4c3f60*/
          v87 += 16; /*0x4c3f64*/
          v86 = 0; /*0x4c3f68*/
          goto LABEL_65; /*0x4c3f6c*/
        case 32: /*0x4c3f4d*/
          v14 = v86 + 1; /*0x4c3f75*/
          goto LABEL_64; /*0x4c3f76*/
        default:
          v10 = v13; /*0xf1c00004*/
          v17 = v5 - 1; /*0x4c3f87*/
          v19 = 0; /*0x4c3f8a*/
          LOBYTE(v10) = v11; /*0x4c3f8c*/
          v97 = v5 - 1; /*0x4c3f8e*/
          v15 = &v5[v12]; /*0x4c3f92*/
          do /*0x4c3fc9*/
          {
            v16 = *v17++; /*0x4c3f94*/
            v90 = v16; /*0x4c3f98*/
            v18 = v3; /*0x4c3fa7*/
            v3 = 0; /*0x4c3fa7*/
            switch ( v16 ) /*0x4c3faf*/
            {
              case 9: /*0x4c3faf*/
              case 10: /*0x4c3faf*/
              case 13: /*0x4c3faf*/
                goto LABEL_9;
              case 32: /*0x4c3faf*/
                if ( (_BYTE)v10 == 32 ) /*0x4c3fb9*/
LABEL_9:
                  v19 = 1; /*0x4c3fbb*/
                break; /*0x4c3fbb*/
              default:
                v3 = v18; /*0xf1c00008*/
                break; /*0xf1c00008*/
            }
            if ( v17 >= v15 ) /*0x4c3fbf*/
              v19 = 1; /*0x4c3fc1*/
            LOBYTE(v10) = v16; /*0x4c3fc3*/
          }
          while ( !v19 ); /*0x4c3fc9*/
          v93 = v17; /*0x4c3fcd*/
          if ( v17 >= v15 ) /*0x4c3fd1*/
            goto LABEL_65; /*0x4c3fd1*/
          if ( *(v17 - 2) == 32 ) /*0x4c3fdb*/
            v93 = v17 - 1; /*0x4c3fde*/
          v20 = 72; /*0x4c3fe6*/
          if ( v86 <= 3 ) /*0x4c3fee*/
          {
            v21 = v86 <= 8; /*0x4c3ffc*/
          }
          else
          {
            v21 = v86 <= 8; /*0x4c3ff0*/
            if ( v86 < 8 ) /*0x4c3ff3*/
            {
              v20 = 328; /*0x4c3ff5*/
              goto LABEL_22; /*0x4c3ffa*/
            }
          }
          if ( !v21 ) /*0x4c3fff*/
            v20 = 584; /*0x4c4001*/
LABEL_22:
          if ( v86 <= 3 || v86 >= 8 || v91 - v98 <= 1 ) /*0x4c401d*/
            v20 |= 0x20u; /*0x4c4024*/
          else
            LOBYTE(v20) = v20 | 0x80; /*0x4c401f*/
          v3 = (int)v93; /*0x4c4027*/
          LODWORD(v100) = v20; /*0x4c402f*/
          v98 = v91; /*0x4c4038*/
          v96 = *(v93 - 1); /*0x4c403c*/
          *(v93 - 1) = 0; /*0x4c4040*/
          v22 = (wchar_t **)__2_YAPAXI_Z(0x10u); /*0x4c4049*/
          if ( v22 ) /*0x4c4050*/
          {
            v23 = v5 - 1; /*0x4c4056*/
            word_8A0F5C = 0; /*0x4c405a*/
            v24 = (unsigned __int8 *)(v5 - 1); /*0x4c4063*/
            v25 = &word_8A0F5C; /*0x4c4065*/
            if ( *v97 ) /*0x4c406a*/
            {
              do /*0x4c411e*/
              {
                if ( *v24 == 123 ) /*0x4c4077*/
                {
                  v26 = v24[1]; /*0x4c407d*/
                  v27 = 0; /*0x4c4080*/
                  v28 = ++v24; /*0x4c4085*/
                  if ( !v26 ) /*0x4c4087*/
                    goto LABEL_34; /*0x4c4087*/
                  do /*0x4c4094*/
                  {
                    if ( v26 == 125 ) /*0x4c408b*/
                      break; /*0x4c408b*/
                    v26 = v24[1]; /*0x4c408d*/
                    ++v27; /*0x4c4090*/
                    ++v24; /*0x4c4091*/
                  }
                  while ( v26 ); /*0x4c4094*/
                  if ( v27 ) /*0x4c4098*/
                  {
                    if ( v27 <= 0x1F ) /*0x4c40a4*/
                    {
                      v24 = v28; /*0x4c40af*/
                      v30 = Format; /*0x4c40b3*/
                      if ( *v28 ) /*0x4c40ad*/
                      {
                        do /*0x4c40d3*/
                        {
                          v31 = *v24; /*0x4c40bc*/
                          if ( *v24 == 125 ) /*0x4c40c0*/
                            break; /*0x4c40c0*/
                          if ( v31 != 32 && v31 != 9 ) /*0x4c40c8*/
                          {
                            *(_BYTE *)v30 = v31; /*0x4c40ca*/
                            v30 = (wchar_t *)((char *)v30 + 1); /*0x4c40cc*/
                          }
                        }
                        while ( *++v24 ); /*0x4c40d3*/
                      }
                      v33 = *v24; /*0x4c40d5*/
                      *(_BYTE *)v30 = 0; /*0x4c40d7*/
                      if ( v33 == 125 ) /*0x4c40dc*/
                        ++v24; /*0x4c40de*/
                      StringCSF = GetStringCSF(Format, 0, aDRa2mdpostEgos, 284); /*0x4c40f7*/
                    }
                    else
                    {
                      StringCSF = (wchar_t *)&off_820804; /*0x4c40a6*/
                    }
                  }
                  else
                  {
LABEL_34:
                    StringCSF = &off_82081C; /*0x4c409a*/
                  }
                  if ( StringCSF ) /*0x4c40fb*/
                  {
                    wcscpy(v25, StringCSF); /*0x4c40ff*/
                    v25 += wcslen(StringCSF); /*0x4c410d*/
                  }
                }
                else
                {
                  *v25++ = *v24++; /*0x4c4117*/
                }
              }
              while ( *v24 ); /*0x4c411e*/
              v23 = v97; /*0x4c4127*/
            }
            v34 = v100; /*0x4c412f*/
            *v25 = 0; /*0x4c4133*/
            v22[1] = 0; /*0x4c413d*/
            v22[2] = (wchar_t *)v87; /*0x4c4144*/
            *((float *)v22 + 3) = v34; /*0x4c4147*/
            v35 = wcslen(&word_8A0F5C); /*0x4c414a*/
            v36 = (wchar_t *)__2_YAPAXI_Z(2 * v35 + 2); /*0x4c4154*/
            *v22 = v36; /*0x4c415f*/
            wcscpy(v36, &word_8A0F5C); /*0x4c4162*/
            v3 = (int)v93; /*0x4c4167*/
            v37 = v22; /*0x4c416e*/
          }
          else
          {
            v23 = v5 - 1; /*0x4c4172*/
            v37 = 0; /*0x4c4176*/
          }
          if ( dword_8A3780 < dword_8A3778 /*0x4c41af*/
            || (byte_8A377D || !dword_8A3778)
            && dword_8A3784 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A3770 + 8))(
                 &dword_8A3770,
                 dword_8A3784 + dword_8A3778,
                 0) )
          {
            v38 = dword_8A3780++; /*0x4c41bc*/
            *((_DWORD *)dword_8A3774 + v38) = v37; /*0x4c41cb*/
          }
          *(_BYTE *)(v3 - 1) = v96; /*0x4c41e6*/
          v10 = (int)&v23[v94 - v3 + 1]; /*0x4c41e9*/
          v5 = (char *)v3; /*0x4c41ef*/
          v86 += v3 - (_DWORD)v23; /*0x4c41f1*/
          v94 = v10; /*0x4c41f5*/
          if ( v90 == 13 ) /*0x4c41f9*/
          {
            ++v91; /*0x4c4207*/
            v87 += 16; /*0x4c420b*/
            v86 = 0; /*0x4c420f*/
          }
          else if ( v90 == 9 ) /*0x4c421b*/
          {
            v14 = v86 + 7; /*0x4c4221*/
LABEL_63:
            LOBYTE(v14) = v14 & 0xF8; /*0x4c4224*/
LABEL_64:
            v86 = v14; /*0x4c4226*/
          }
LABEL_65:
          v9 = v94; /*0x4c422a*/
          if ( v94 > 0 ) /*0x4c4232*/
            continue; /*0x4c4232*/
          Theme::Stop((Theme *)&unk_A83D10, 0); /*0x4c423e*/
          (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x4c424c*/
          Frame::Present((int)g_DSurface_Hidden, v3, 0, v94, 0, 0, v82, v83); /*0x4c4258*/
          v39 = (char *)__2_YAPAXI_Z(0x24u); /*0x4c425f*/
          if ( v39 ) /*0x4c4269*/
            v40 = DSurface::Construct( /*0x4c427d*/
                    v39,
                    *(int *)&DSurface_ViewBounds.__pad_8[16],
                    *(int *)&DSurface_ViewBounds.__pad_8[20],
                    0,
                    0);
          else
            v40 = 0; /*0x4c4284*/
          v81 = 1; /*0x4c428c*/
          dword_8A0F58 = (int)v40; /*0x4c428e*/
          (*(void (__thiscall **)(char *, ObjectClass *))(*(_DWORD *)v40 + 4))(v40, g_DSurface_Hidden); /*0x4c4299*/
          Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x4c42a2*/
          v101 = *(float *)&stru_A8EB00.ObjectTypeClass[40]; /*0x4c42b3*/
          g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x4c42bd*/
          if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x4c42c8*/
            Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], 0.40000001, 0); /*0x4c42d5*/
          v41 = StringList::Find((StringList *)&unk_A83D10, aCredits_0); /*0x4c42e4*/
          Theme::QueueSong((int)&unk_A83D10, v41); /*0x4c42ef*/
          v84 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c42f9*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c4305*/
            v84 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c431f*/
          v42 = 0; /*0x4c4329*/
          v85 = 0; /*0x4c432b*/
          v92 = 0; /*0x4c432f*/
          v88 = 0; /*0x4c4335*/
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4c4339*/
          if ( !dword_8A3780 ) /*0x4c4342*/
            goto LABEL_118; /*0x4c4342*/
          break; /*0x4c4342*/
      }
      break;
    }
    do /*0x4c4796*/
    {
      v108 = ++v42; /*0x4c4350*/
      if ( g_LoadScreenFlag ) /*0x4c4354*/
      {
        g_LoadScreenFlag = 0; /*0x4c435b*/
        v88 = 1; /*0x4c4364*/
        if ( !g_DDraw_Initialized ) /*0x4c4369*/
        {
          (*((void (__thiscall **)(DSurface *, _DWORD))g_DSurface_Primary->DSurface_field_0x0 + 6))( /*0x4c4374*/
            g_DSurface_Primary,
            0);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_8A0F58 + 24))(dword_8A0F58, 0); /*0x4c4380*/
        }
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4c438b*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4c4396*/
      }
      if ( ++v85 > 200 && v92 < 16 ) /*0x4c43b0*/
      {
        v85 = 0; /*0x4c43b3*/
        ++v92; /*0x4c43b7*/
      }
      v43 = dword_8A3780 - 1; /*0x4c43c0*/
      if ( dword_8A3780 - 1 >= 0 ) /*0x4c43c5*/
      {
        while ( 1 ) /*0x4c43d2*/
        {
          v44 = *((_DWORD *)dword_8A3774 + v43); /*0x4c43d2*/
          v45 = *(_DWORD *)(v44 + 8) - 2; /*0x4c43d8*/
          *(_DWORD *)(v44 + 8) = v45; /*0x4c43dc*/
          if ( v45 < -20 ) /*0x4c43e2*/
            break; /*0x4c43e2*/
          if ( --v43 < 0 ) /*0x4c43e5*/
            goto LABEL_92; /*0x4c43e5*/
        }
        v46 = dword_8A3774; /*0x4c43e9*/
        v47 = (void **)*((_DWORD *)dword_8A3774 + v43); /*0x4c43ef*/
        if ( v47 ) /*0x4c43f4*/
        {
          __3_YAXPAX_Z(*v47); /*0x4c43f9*/
          __3_YAXPAX_Z(v47); /*0x4c43ff*/
          v46 = dword_8A3774; /*0x4c4404*/
        }
        if ( v43 < dword_8A3780 ) /*0x4c4415*/
        {
          v48 = v43; /*0x4c4418*/
          if ( v43 < --dword_8A3780 ) /*0x4c4422*/
          {
            while ( 1 ) /*0x4c4430*/
            {
              v46[v48] = v46[v48 + 1]; /*0x4c4430*/
              if ( ++v48 >= dword_8A3780 ) /*0x4c443c*/
                break; /*0x4c443c*/
              v46 = dword_8A3774; /*0x4c4426*/
            }
          }
        }
      }
LABEL_92:
      v113 = (char *)&(*(&g_DisplayWidth + 1))[-2].LoadingScreen_field_0x3C + 2; /*0x4c443e*/
      v110 = (char *)&(*(&g_DisplayWidth + 1))[-2].LoadingScreen_field_0x3C + 2; /*0x4c445d*/
      v106[1] = (char *)*(&g_DisplayWidth + 1) - 34; /*0x4c446a*/
      v111[0] = 0; /*0x4c446e*/
      v111[1] = 32; /*0x4c4475*/
      *(_DWORD *)Format = g_DisplayWidth; /*0x4c4480*/
      v109[0] = 0; /*0x4c4487*/
      v109[1] = 34; /*0x4c448b*/
      v109[2] = g_DisplayWidth; /*0x4c4492*/
      v105[0] = 0; /*0x4c4499*/
      v105[1] = 0; /*0x4c449d*/
      v105[2] = g_DisplayWidth; /*0x4c44a1*/
      v105[3] = 34; /*0x4c44a5*/
      v106[0] = 0; /*0x4c44a9*/
      v107[0] = (int)g_DisplayWidth; /*0x4c44ad*/
      v107[1] = 34; /*0x4c44b1*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, int))(*(_DWORD *)dword_8A0F58 + 20))( /*0x4c44bd*/
        dword_8A0F58,
        v105,
        0,
        0,
        v81);
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)dword_8A0F58 + 20))(dword_8A0F58, v107, 0); /*0x4c44ce*/
      for ( i = dword_8A3780 - 1; i >= 0; --i ) /*0x4c44db*/
        CreditsPower::DrawCreditsTextLine(*((_DWORD *)dword_8A3774 + i), v92); /*0x4c44eb*/
      v81 = 0; /*0x4c44fd*/
      v50 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 92))(dword_8A0F58); /*0x4c4504*/
      v103 = v50; /*0x4c4508*/
      if ( v50 ) /*0x4c450c*/
      {
        v51 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 116))(dword_8A0F58); /*0x4c451a*/
        v52 = g_DisplayWidth; /*0x4c4520*/
        v53 = v51 / 2; /*0x4c4526*/
        v54 = 256; /*0x4c4528*/
        v104 = v53; /*0x4c452d*/
        v95 = 0; /*0x4c4531*/
        v89 = (__int16 *)v50; /*0x4c4535*/
        LODWORD(v100) = 256; /*0x4c4539*/
        do /*0x4c4697*/
        {
          v55 = v54; /*0x4c4543*/
          if ( v54 >= 255 ) /*0x4c4545*/
            v55 = -1; /*0x4c4547*/
          v99 = 0; /*0x4c4552*/
          v56 = v53 * (_DWORD)&(*(&g_DisplayWidth + 1))->__pad_0[-v95 - 1]; /*0x4c455f*/
          if ( (int)v52 > 0 ) /*0x4c4564*/
          {
            v57 = v89; /*0x4c456a*/
            v58 = v55; /*0x4c4570*/
            v59 = 255 - v55; /*0x4c457a*/
            v60 = v50 + 2 * v56; /*0x4c4584*/
            while ( 1 ) /*0x4c4591*/
            {
              v61 = *v57; /*0x4c4591*/
              g_GameScreenFlags = v58; /*0x4c4594*/
              g_GameScreenConfig = v59; /*0x4c45c0*/
              ++v57; /*0x4c45c8*/
              v60 += 2; /*0x4c45e9*/
              *(v57 - 1) = ((v59 * (unsigned int)(unsigned __int16)(v61 & g_CreditsScreenState)) >> 8) /*0x4c45f1*/
                         | g_ScreenSaverState
                         & ((v59 * (unsigned int)(unsigned __int16)(v61 & g_ScreenSaverState)) >> 8)
                         | HIWORD(g_ScreenSaverState)
                         & ((v59 * (unsigned int)(unsigned __int16)(v61 & HIWORD(g_ScreenSaverState))) >> 8);
              v62 = *(_WORD *)(v60 - 2); /*0x4c4601*/
              g_GameScreenFlags = v55; /*0x4c460a*/
              g_GameScreenConfig = 255 - v55; /*0x4c4616*/
              *(_WORD *)(v60 - 2) = (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & g_CreditsScreenState)) >> 8) /*0x4c4651*/
                                  | g_ScreenSaverState
                                  & (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & g_ScreenSaverState)) >> 8)
                                  | HIWORD(g_ScreenSaverState)
                                  & (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & HIWORD(g_ScreenSaverState))) >> 8);
              v52 = g_DisplayWidth; /*0x4c4655*/
              if ( ++v99 >= (int)g_DisplayWidth ) /*0x4c4662*/
                break; /*0x4c4662*/
              v59 = 255 - v55; /*0x4c4589*/
              v58 = v55; /*0x4c458d*/
            }
            v53 = v104; /*0x4c4668*/
            v50 = v103; /*0x4c466c*/
            v42 = v108; /*0x4c4670*/
            v54 = LODWORD(v100); /*0x4c4674*/
          }
          v54 -= 8; /*0x4c4680*/
          ++v95; /*0x4c4683*/
          LODWORD(v100) = v54; /*0x4c468d*/
          v89 += v53; /*0x4c4693*/
        }
        while ( v54 > 0 ); /*0x4c4697*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 96))(dword_8A0F58); /*0x4c46a5*/
      }
      if ( stru_A8EB00.?[412] ) /*0x4c46b1*/
      {
        DSurface_field_0x0 = (void (__stdcall **)(int, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0; /*0x4c46bf*/
        if ( v88 ) /*0x4c46c4*/
        {
          DSurface_field_0x0[1](dword_8A0F58, 0, 1); /*0x4c46cd*/
        }
        else
        {
          ((void (__stdcall *)(_DWORD *, int, _DWORD *, _DWORD, int))DSurface_field_0x0[2])( /*0x4c46e3*/
            v105,
            dword_8A0F58,
            v105,
            0,
            1);
          (*((void (__stdcall **)(_DWORD *, DSurface *, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x4c46ff*/
            v111,
            g_DSurface_Primary,
            v109,
            0,
            1);
          (*((void (__thiscall **)(DSurface *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x4c471e*/
           + 2))(
            g_DSurface_Primary,
            v106,
            dword_8A0F58,
            v106,
            0,
            1);
        }
      }
      v88 = 0; /*0x4c4721*/
      Event::Dispatch(); /*0x4c4726*/
      v64 = v84; /*0x4c472b*/
      do /*0x4c476d*/
      {
        v65 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c4734*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c473d*/
          v65 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c474f*/
      }
      while ( v65 - v84 < v42 * dword_820770 && !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x4c476d*/
    }
    while ( (!EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) /*0x4c4796*/
          || EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) != 27)
         && dword_8A3780 );
    if ( v85 <= 187 ) /*0x4c47a4*/
    {
LABEL_118:
      v64 = v85; /*0x4c47a6*/
      do /*0x4c480e*/
      {
        if ( v64 < 150 && v64 > 47 ) /*0x4c47b5*/
          v64 = 150; /*0x4c47b7*/
        ++v42; /*0x4c47bc*/
        ++v64; /*0x4c47bd*/
        Event::Dispatch(); /*0x4c47be*/
        do /*0x4c4806*/
        {
          v66 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c47c8*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c47d1*/
            v66 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c47e3*/
        }
        while ( v66 - v84 < v42 * dword_820770 && !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x4c4806*/
      }
      while ( v64 <= 187 ); /*0x4c480e*/
    }
    (*((void (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden); /*0x4c4819*/
    Frame::Present((int)g_DSurface_Hidden, v42, 0, v64, 0, 0, 0, (int *)v81); /*0x4c4825*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4c4832*/
    stru_822420.ExpireAnim = (AnimTypeClass *)g_INI_Key_Blue; /*0x4c483a*/
    Theme::Stop((Theme *)&unk_A83D10, 0); /*0x4c4845*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v100, 0); /*0x4c4855*/
    if ( dword_8A0F58 ) /*0x4c4862*/
      (**(void (__thiscall ***)(int, int))dword_8A0F58)(dword_8A0F58, 1); /*0x4c4868*/
    __3_YAXPAX_Z(Block); /*0x4c486f*/
    v67 = dword_8A3780; /*0x4c4874*/
    v68 = (void ***)dword_8A3774; /*0x4c487a*/
    while ( v67 > 0 ) /*0x4c4885*/
    {
      v69 = *v68; /*0x4c488b*/
      if ( *v68 ) /*0x4c488b*/
      {
        __3_YAXPAX_Z(*v69); /*0x4c4894*/
        __3_YAXPAX_Z(v69); /*0x4c489a*/
        v67 = dword_8A3780; /*0x4c489f*/
        v68 = (void ***)dword_8A3774; /*0x4c48a5*/
      }
      if ( v67 > 0 ) /*0x4c48b0*/
      {
        v70 = 0; /*0x4c48b3*/
        dword_8A3780 = v67 - 1; /*0x4c48b7*/
        if ( v67 - 1 <= 0 ) /*0x4c48bd*/
          break; /*0x4c48bd*/
        do /*0x4c48d5*/
        {
          v68[v70] = v68[v70 + 1]; /*0x4c48c3*/
          v67 = dword_8A3780; /*0x4c48c6*/
          v68 = (void ***)dword_8A3774; /*0x4c48cc*/
          ++v70; /*0x4c48d2*/
        }
        while ( v70 < dword_8A3780 ); /*0x4c48d5*/
      }
    }
    dword_8A3780 = 0; /*0x4c48dd*/
    if ( v68 && byte_8A377D ) /*0x4c48f1*/
    {
      __3_YAXPAX_Z(v68); /*0x4c48f4*/
      dword_8A3774 = 0; /*0x4c48fc*/
    }
    byte_8A377D = 0; /*0x4c4902*/
    dword_8A3778 = 0; /*0x4c4909*/
  }
  v114.? = (int)&CCFileClass::`vftable'; /*0x4c4916*/
  v116 = 0; /*0x4c4921*/
  Vector::Clear((int)v115); /*0x4c4928*/
  v114.? = (int)&off_7E1668; /*0x4c4934*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v114.?); /*0x4c4944*/
}


// ==== 0x004C49A0  _DynamicVectorClass_PAVEgoClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::Destroy(_DynamicVectorClass_PAVEgoClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c49a6*/
  this->m_10 = 0; /*0x4c49a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c49b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4c49b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c49be*/
  }
  BYTE1(this->m_C) = 0; /*0x4c49c1*/
  this->m_8 = 0; /*0x4c49c4*/
}



// ==== 0x004C49D0  _DynamicVectorClass_PAVEgoClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::GetItemIndex(_DynamicVectorClass_PAVEgoClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c49d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c49e5*/
  else
    return 0; /*0x4c49d7*/
}



// ==== 0x004C49F0  _VectorClass_PAVEgoClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::Get(_VectorClass_PAVEgoClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c49fa*/
}



// ==== 0x004C4A00  _VectorClass_PAVEgoClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::Add(_VectorClass_PAVEgoClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c4a02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c4a0d*/
  {
    v3 = 0; /*0x4c4a0f*/
    if ( m_8 <= 0 ) /*0x4c4a13*/
      return 1; /*0x4c4a33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c4a15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c4a1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c4a24*/
    {
      ++v3; /*0x4c4a26*/
      ++v4; /*0x4c4a27*/
      if ( v3 >= m_8 ) /*0x4c4a2c*/
        return 1; /*0x4c4a2c*/
    }
  }
  return 0; /*0x4c4a2e*/
}



// ==== 0x004C4A40  _VectorClass_PAVEgoClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::Release(_VectorClass_PAVEgoClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c4a4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c4a56*/
    if ( a3 ) /*0x4c4a5c*/
      v4 = a3; /*0x4c4a72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c4a6e*/
    LOBYTE(this->m_C) = 1; /*0x4c4a76*/
    if ( v4 ) /*0x4c4a7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c4a85*/
      {
        m_8 = this->m_8; /*0x4c4a8c*/
        if ( a2 < m_8 ) /*0x4c4a91*/
          m_8 = a2; /*0x4c4a93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c4a99*/
          ++i; /*0x4c4a9e*/
        if ( BYTE1(this->m_C) ) /*0x4c4aab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4ab6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c4abe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c4ac7*/
      this->m_8 = a2; /*0x4c4acf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c4ad2*/
      return 1; /*0x4c4ad8*/
    }
    else
    {
      return 0; /*0x4c4a7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEgoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c4ae2*/
    return 1; /*0x4c4ae8*/
  }
}



// ==== 0x004C4AF0  _VectorClass_PAVEgoClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::Remove(_VectorClass_PAVEgoClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c4afd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4b03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4b0b*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4b0e*/
  this->m_8 = 0; /*0x4c4b11*/
}



// ==== 0x004C4B20  _VectorClass_PAVEgoClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::GetSize(_VectorClass_PAVEgoClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c4b20*/
    return 0; /*0x4c4b28*/
  m_8 = this->m_8; /*0x4c4b2e*/
  result = 0; /*0x4c4b31*/
  if ( m_8 <= 0 ) /*0x4c4b35*/
    return -1; /*0x4c4b4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c4b3b*/
  {
    if ( ++result >= m_8 ) /*0x4c4b4a*/
      return -1; /*0x4c4b4a*/
  }
  return result; /*0x4c4b2a*/
}



// ==== 0x004C4B60  _VectorClass_PAVEgoClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::GetCapacity(_VectorClass_PAVEgoClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c4b60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c4b75*/
  else
    return 0; /*0x4c4b67*/
}



// ==== 0x004C4B80  _DynamicVectorClass_PAVEgoClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::SetCapacity(_DynamicVectorClass_PAVEgoClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c4b8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c4b92*/
    if ( a3 ) /*0x4c4b98*/
      v4 = a3; /*0x4c4bae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c4baa*/
    LOBYTE(this->m_C) = 1; /*0x4c4bb2*/
    if ( !v4 ) /*0x4c4bb6*/
      return 0; /*0x4c4c2a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c4bb8*/
    {
      m_8 = this->m_8; /*0x4c4bbf*/
      if ( a2 < m_8 ) /*0x4c4bc4*/
        m_8 = a2; /*0x4c4bc6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c4bcc*/
        ++i; /*0x4c4bd1*/
      if ( BYTE1(this->m_C) ) /*0x4c4bde*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4be9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c4bf1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c4bfa*/
    this->m_8 = a2; /*0x4c4c02*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c4c05*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEgoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c4c0e*/
  }
  v7 = this->m_8; /*0x4c4c11*/
  if ( v7 < this->m_10 ) /*0x4c4c19*/
    this->m_10 = v7; /*0x4c4c1b*/
  return 1; /*0x4c4c1e*/
}



// ==== 0x004C4C30  _DynamicVectorClass_PAVEgoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::FindItemIndex(_DynamicVectorClass_PAVEgoClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c4c30*/
  result = 0; /*0x4c4c33*/
  if ( m_10 <= 0 ) /*0x4c4c38*/
    return -1; /*0x4c4c4f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c4c3e*/
  {
    if ( ++result >= m_10 ) /*0x4c4c4d*/
      return -1; /*0x4c4c4d*/
  }
  return result; /*0x4c4c52*/
}



// ==== 0x004C4C60  _VectorClass_PAVEgoClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EgoClass::QueryInterface(_VectorClass_PAVEgoClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c4c63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EgoClass *>::`vftable'; /*0x4c4c66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c4c70*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4c78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4c80*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4c8b*/
  this->m_8 = 0; /*0x4c4c91*/
  if ( (a2 & 1) != 0 ) /*0x4c4c98*/
    __3_YAXPAX_Z(this); /*0x4c4c9b*/
  return this->__pad_0; /*0x4c4ca5*/
}



// ==== 0x004C4CB0  _DynamicVectorClass_PAVEgoClass::Constructor_VectorClass_EgoClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(
        _DynamicVectorClass_PAVEgoClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c4cb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EgoClass *>::`vftable'; /*0x4c4cb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c4cc0*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4cc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4cd0*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4cdb*/
  this->m_8 = 0; /*0x4c4ce1*/
  if ( (a2 & 1) != 0 ) /*0x4c4ce8*/
    __3_YAXPAX_Z(this); /*0x4c4ceb*/
  return this->__pad_0; /*0x4c4cf5*/
}



// ==== 0x004C4D00  sub_4C4D00  this=-  sig=ida-proto ====
void sub_4C4D00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c4d0c*/
  dbl_8A3798 = Math::Sqrt(v0 + v0); /*0x4c4d1e*/
}



// ==== 0x004C4D30  sub_4C4D30  this=-  sig=ida-proto ====
void sub_4C4D30()
{
  dbl_8A3808 = dbl_8A3798 / 60.0; /*0x4c4d3c*/
}



// ==== 0x004C4D50  sub_4C4D50  this=-  sig=ida-proto ====
void sub_4C4D50()
{
  dbl_8A37F0 = 1.0 / dbl_8A3808; /*0x4c4d5c*/
}



// ==== 0x004C4D70  sub_4C4D70  this=-  sig=ida-proto ====
void sub_4C4D70()
{
  dbl_8A37E8 = 0.0174532925199433 * 45.0; /*0x4c4d7c*/
}



// ==== 0x004C4D90  sub_4C4D90  this=-  sig=ida-proto ====
void sub_4C4D90()
{
  dbl_8A37C0 = 0.0174532925199433 * 60.0; /*0x4c4d9c*/
}



// ==== 0x004C4DB0  sub_4C4DB0  this=-  sig=ida-proto ====
void sub_4C4DB0()
{
  dbl_8A3788 = 0.0174532925199433 * 90.0; /*0x4c4dbc*/
}



// ==== 0x004C4DD0  sub_4C4DD0  this=-  sig=ida-proto ====
__int64 sub_4C4DD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3788 - dbl_8A37C0); /*0x4c4de2*/
  result = Math::RoundToInt(v0 * dbl_8A3798 * 0.5); /*0x4c4df6*/
  dword_8A3810 = result; /*0x4c4dfb*/
  return result; /*0x4c4e00*/
}



// ==== 0x004C4E10  sub_4C4E10  this=-  sig=ida-proto ====
void sub_4C4E10()
{
  dbl_8A37C8 = Math::ArcTan((double)dword_8A3810 * 0.00390625); /*0x4c4e27*/
}



// ==== 0x004C4E40  sub_4C4E40  this=-  sig=ida-proto ====
void sub_4C4E40()
{
  dbl_8A37E0 = Math::ArcTan((double)(2 * dword_8A3810) / dbl_8A3798); /*0x4c4e62*/
}



// ==== 0x004C4E70  sub_4C4E70  this=-  sig=ida-proto ====
__int64 sub_4C4E70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3810) + 0.5); /*0x4c4e8b*/
  dword_8A3804 = result; /*0x4c4e90*/
  return result; /*0x4c4e96*/
}



// ==== 0x004C4EA0  sub_4C4EA0  this=-  sig=ida-proto ====
int sub_4C4EA0()
{
  word_8A3790 = 0; /*0x4c4ea2*/
  word_8A3792 = 0; /*0x4c4ea8*/
  return 0; /*0x4c4eae*/
}



// ==== 0x004C4EB0  sub_4C4EB0  this=-  sig=ida-proto ====
int sub_4C4EB0()
{
  dword_8A37D0 = 0; /*0x4c4eb2*/
  dword_8A37D4 = 0; /*0x4c4eb7*/
  dword_8A37D8 = 0; /*0x4c4ebc*/
  return 0; /*0x4c4ec1*/
}



// ==== 0x004C4ED0  sub_4C4ED0  this=-  sig=ida-proto ====
int sub_4C4ED0()
{
  dword_8A3800 = 0; /*0x4c4ed5*/
  dword_8A37F8 = 128; /*0x4c4edf*/
  dword_8A37FC = 128; /*0x4c4ee4*/
  return 128; /*0x4c4ee9*/
}



// ==== 0x004C4EF0  TaskForceClass::ParseUnitCountAndType  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall TaskForceClass::ParseUnitCountAndType(TaskForceClass *this, char *Buffer)
{
  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  char *v9; // [esp-10h] [ebp-54h]
  TypeClass v10; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *(_DWORD *)this->__pad_0 = 0; /*0x4c4f0a*/
  this->TaskForceClass_field_0x4 = 0; /*0x4c4f10*/
  sscanf(v9, "%d,%s", &Buffer, &v10); /*0x4c4f17*/
  *(_DWORD *)this->__pad_0 = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)&v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)&v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = TypeClass::FindByName(&v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->TaskForceClass_field_0x4 = *((_DWORD *)dword_A8B21C + v8); /*0x4c4f82*/
      return this->__pad_0; /*0x4c4f85*/
    }
    else
    {
      v7 = *((_DWORD *)dword_A83CE4 + Index); /*0x4c4f5c*/
      this->TaskForceClass_field_0x4 = v7; /*0x4c4f61*/
      return this->__pad_0; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x4c4f39*/
    this->TaskForceClass_field_0x4 = v4; /*0x4c4f3e*/
    return this->__pad_0; /*0x4c4f3c*/
  }
}



// ==== 0x004C4F90  TaskForceClass::Check  this=TaskForceClass  sig=csp ====
char *__thiscall TaskForceClass::Check(TaskForceClass *this)
{
  sprintf(byte_8A37A0, "%d,%s", *(_DWORD *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/
}



// ==== 0x004C4FC0  ObjectClass::method_4C4FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C4FC0(ObjectClass *this, int a2)
{
  int result; // eax
  void *vtable1; // ecx
  int v5; // eax
  int v6; // eax

  result = Power::TimerProcess((int)this->AbstractClass); /*0x4c4fcd*/
  vtable1 = this->?; /*0x4c4fd2*/
  if ( vtable1 ) /*0x4c4fd7*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable1 + 44))(vtable1); /*0x4c4fdb*/
    Power::TimerProcess(v5); /*0x4c4fe1*/
    v6 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->? + 1) + 16))((char *)this->? + 4); /*0x4c4ff0*/
    return Power::TimerProcess(v6); /*0x4c4ff6*/
  }
  return result; /*0x4c4ffb*/
}



// ==== 0x004C5000  sub_4C5000  this=-  sig=ida-proto ====
void sub_4C5000()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c500c*/
  dbl_8A3840 = Math::Sqrt(v0 + v0); /*0x4c501e*/
}



// ==== 0x004C5030  sub_4C5030  this=-  sig=ida-proto ====
void sub_4C5030()
{
  dbl_8A38A8 = dbl_8A3840 / 60.0; /*0x4c503c*/
}



// ==== 0x004C5050  sub_4C5050  this=-  sig=ida-proto ====
void sub_4C5050()
{
  dbl_8A3890 = 1.0 / dbl_8A38A8; /*0x4c505c*/
}



// ==== 0x004C5070  sub_4C5070  this=-  sig=ida-proto ====
void sub_4C5070()
{
  dbl_8A3888 = 0.0174532925199433 * 45.0; /*0x4c507c*/
}



// ==== 0x004C5090  sub_4C5090  this=-  sig=ida-proto ====
void sub_4C5090()
{
  dbl_8A3848 = 0.0174532925199433 * 60.0; /*0x4c509c*/
}



// ==== 0x004C50B0  sub_4C50B0  this=-  sig=ida-proto ====
void sub_4C50B0()
{
  dbl_8A3820 = 0.0174532925199433 * 90.0; /*0x4c50bc*/
}



// ==== 0x004C50D0  sub_4C50D0  this=-  sig=ida-proto ====
__int64 sub_4C50D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3820 - dbl_8A3848); /*0x4c50e2*/
  result = Math::RoundToInt(v0 * dbl_8A3840 * 0.5); /*0x4c50f6*/
  dword_8A38B0 = result; /*0x4c50fb*/
  return result; /*0x4c5100*/
}



// ==== 0x004C5110  sub_4C5110  this=-  sig=ida-proto ====
void sub_4C5110()
{
  dbl_8A3850 = Math::ArcTan((double)dword_8A38B0 * 0.00390625); /*0x4c5127*/
}



// ==== 0x004C5140  sub_4C5140  this=-  sig=ida-proto ====
void sub_4C5140()
{
  dbl_8A3868 = Math::ArcTan((double)(2 * dword_8A38B0) / dbl_8A3840); /*0x4c5162*/
}



// ==== 0x004C5170  sub_4C5170  this=-  sig=ida-proto ====
__int64 sub_4C5170()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A38B0) + 0.5); /*0x4c518b*/
  dword_8A38A4 = result; /*0x4c5190*/
  return result; /*0x4c5196*/
}



// ==== 0x004C51A0  sub_4C51A0  this=-  sig=ida-proto ====
int sub_4C51A0()
{
  dword_8A3838 = 0; /*0x4c51a2*/
  return 0; /*0x4c51ae*/
}



// ==== 0x004C51B0  sub_4C51B0  this=-  sig=ida-proto ====
int sub_4C51B0()
{
  dword_8A3858 = 0; /*0x4c51b2*/
  dword_8A385C = 0; /*0x4c51b7*/
  dword_8A3860 = 0; /*0x4c51bc*/
  return 0; /*0x4c51c1*/
}



// ==== 0x004C51D0  sub_4C51D0  this=-  sig=ida-proto ====
int sub_4C51D0()
{
  dword_8A38A0 = 0; /*0x4c51d5*/
  dword_8A3898 = 128; /*0x4c51df*/
  dword_8A389C = 128; /*0x4c51e4*/
  return 128; /*0x4c51e9*/
}



// ==== 0x004C51F0  sub_4C51F0  this=-  sig=ida-proto ====
int sub_4C51F0()
{
  dword_8A3828 = 0; /*0x4c51f2*/
  dword_8A382C = 0; /*0x4c51f7*/
  dword_8A3830 = 0; /*0x4c51fc*/
  dword_8A3834 = 0; /*0x4c5201*/
  return 0; /*0x4c5206*/
}



// ==== 0x004C5210  sub_4C5210  this=-  sig=ida-proto ====
int sub_4C5210()
{
  dword_8A3874 = 0; /*0x4c5217*/
  dword_8A3878 = 0; /*0x4c521c*/
  byte_8A387C = 1; /*0x4c5221*/
  byte_8A387D = 0; /*0x4c5228*/
  dword_8A3870 = (int)&DynamicVectorClass<EMPulseClass *>::`vftable'; /*0x4c522d*/
  dword_8A3884 = 10; /*0x4c5237*/
  dword_8A3880 = 0; /*0x4c5241*/
  return atexit(sub_4C5250); /*0x4c524c*/
}



// ==== 0x004C5250  sub_4C5250  this=-  sig=ida-proto ====
void __cdecl sub_4C5250()
{
  if ( (byte_8A3818 & 1) == 0 ) /*0x4c525a*/
  {
    dword_8A3870 = (int)&VectorClass<EMPulseClass *>::`vftable'; /*0x4c525e*/
    byte_8A3818 |= 1u; /*0x4c5271*/
    if ( dword_8A3874 ) /*0x4c5277*/
    {
      if ( byte_8A387D ) /*0x4c5281*/
      {
        __3_YAXPAX_Z(dword_8A3874); /*0x4c5284*/
        dword_8A3874 = 0; /*0x4c528c*/
      }
    }
    byte_8A387D = 0; /*0x4c5296*/
    dword_8A3878 = 0; /*0x4c529d*/
  }
}



// ==== 0x004C5370  EMPulseClass::Helper_4C5370  this=EMPulseClass  sig=csp ====
int __thiscall Helper_4C5370(EMPulseClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4c5373*/
  v2 = dword_8A3838; /*0x4c5378*/
  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c537d*/
  *((_DWORD *)this + 9) = v2; /*0x4c5383*/
  *((_DWORD *)this + 10) = 0; /*0x4c5388*/
  *((_DWORD *)this + 11) = 0; /*0x4c538b*/
  this->vtable4 = 0; /*0x4c538e*/
  this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5391*/
  this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5398*/
  this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c539f*/
  return (int)this->__pad_0; /*0x4c53a8*/
}



// ==== 0x004C5470  ObjectClass::method_4C5470  this=ObjectClass  sig=csp ====
int sub_4C5470(ObjectClass *this)
{
  int result; // eax

  for ( result = dword_8A3880; dword_8A3880; result = dword_8A3880 ) /*0x4c5477*/
  {
    if ( *(_DWORD *)dword_8A3874 ) /*0x4c547e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A3874 + 32))(*(_DWORD *)dword_8A3874, 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}



// ==== 0x004C54A0  LocomotionClass::UpdateAll  this=LocomotionClass  sig=csp ====
wchar_t *LocomotionClass::UpdateAll(LocomotionClass *this)
{
  wchar_t *result; // eax
  int i; // esi
  _DWORD *v3; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v3 = (_DWORD *)*((_DWORD *)dword_8A3874 + i); /*0x4c54b3*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x4c54be*/
    if ( *(int *)&stru_A8EB00.?[416] >= v3[11] + v3[12] ) /*0x4c54c5*/
    {
      if ( v3 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/
}



// ==== 0x004C54E0  ObjectClass::ApplyEMPPulseEffect  this=ObjectClass  sig=csp ====
int __thiscall ApplyEMPPulseEffect(ObjectClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ebp
  _DWORD *v8; // eax
  int *v9; // eax
  int j; // edx
  int v11; // esi
  unsigned __int16 v12; // cx
  int v13; // edx
  int v14; // ecx
  Cell *v15; // edi
  BuildingClass *v16; // eax
  BuildingClass *v17; // esi
  int *v18; // eax
  int v19; // kr04_4
  int v20; // eax
  BuildingTypeClass *Type; // ecx
  int ClosestObjectCell; // eax
  _DWORD *v23; // esi
  int v24; // eax
  AnimClass *v25; // edi
  int *v26; // eax
  BuildingClass *v27; // eax
  int owningHouseIndex; // eax
  void *v29; // [esp-10h] [ebp-5Ch]
  __int16 v30[2]; // [esp+14h] [ebp-38h] BYREF
  int v31; // [esp+18h] [ebp-34h]
  int i; // [esp+1Ch] [ebp-30h]
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h] BYREF
  int v36; // [esp+2Ch] [ebp-20h]
  int v37; // [esp+30h] [ebp-1Ch]
  _BYTE v38[12]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v39[3]; // [esp+40h] [ebp-Ch] BYREF

  result = (int)this->nextObject + this->fallRate; /*0x4c54f3*/
  if ( result > *(int *)&stru_A8EB00.?[416] ) /*0x4c54f9*/
  {
    v34 = this->owningHouseIndex * this->owningHouseIndex; /*0x4c5509*/
    v4 = 0; /*0x4c5513*/
    for ( i = 0; i < dword_A8E3A0; ++i ) /*0x4c551b*/
    {
      v5 = *((_DWORD *)dword_A8E394 + v4); /*0x4c5527*/
      if ( *(_BYTE *)(v5 + 116) ) /*0x4c552a*/
      {
        if ( !*(_BYTE *)(v5 + 129) /*0x4c5551*/
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5)
          && *(int *)(v5 + 108) > 0 )
        {
          v6 = (SLOWORD(this->occupant) << 8) + 128; /*0x4c556a*/
          v7 = (SHIWORD(this->occupant) << 8) + 128; /*0x4c5570*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v38); /*0x4c5576*/
          v9 = Coord::Subtract((Coord *)v39, *v8 - v6, v8[1] - v7, v8[2]); /*0x4c558c*/
          v35 = *v9; /*0x4c5593*/
          v36 = v9[1]; /*0x4c559e*/
          v37 = v9[2]; /*0x4c55a5*/
          if ( (int)Coord::Length((Coord *)&v35) < this->owningHouseIndex << 8 ) /*0x4c55b6*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 988))(v5, a2); /*0x4c55c1*/
        }
      }
      v4 = i + 1; /*0x4c55d3*/
    }
    result = this->owningHouseIndex; /*0x4c55e0*/
    i = -result; /*0x4c55e9*/
    for ( j = -result; j <= result; i = j ) /*0x4c55ed*/
    {
      v11 = -result; /*0x4c55f5*/
      v31 = -result; /*0x4c55f9*/
      if ( -result <= result ) /*0x4c55fd*/
      {
        do /*0x4c5899*/
        {
          v12 = j + HIWORD(this->occupant); /*0x4c560e*/
          LOWORD(v33) = v11 + LOWORD(this->occupant); /*0x4c5611*/
          HIWORD(v33) = v12; /*0x4c5616*/
          *(_DWORD *)v30 = v33; /*0x4c5622*/
          if ( (unsigned __int16)v33 < 0x200u && v12 < 0x200u ) /*0x4c5639*/
          {
            if ( (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v30) ) /*0x4c5654*/
            {
              v13 = v30[1] - SHIWORD(this->occupant); /*0x4c5677*/
              v14 = v30[0] - SLOWORD(this->occupant); /*0x4c567c*/
              if ( v14 * v14 + v13 * v13 <= v34 ) /*0x4c5689*/
              {
                v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x4c569e*/
                v16 = (BuildingClass *)Cell::IsBridge(v15); /*0x4c56a2*/
                v17 = v16; /*0x4c56a7*/
                if ( v16 ) /*0x4c56ab*/
                {
                  v18 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))v16->TechnoClass + 18))(v16, v39); /*0x4c56ba*/
                  v19 = *v18; /*0x4c56ca*/
                  v20 = v18[1] / 256; /*0x4c56db*/
                  if ( (unsigned __int16)(v19 / 256) == v30[0] && (_WORD)v20 == v30[1] && !v17->Type->InvisibleInGame ) /*0x4c56fa*/
                  {
                    BuildingClass::Deactivate(v17); /*0x4c570a*/
                    Type = v17->Type; /*0x4c5712*/
                    v17->? = (int)this->nextObject; /*0x4c5718*/
                    if ( Type->__pad_1624[128] ) /*0x4c571e*/
                      BYTE1(v17->?->HouseClass_field_timer_B[2]) = 1; /*0x4c5732*/
                  }
                }
                else
                {
                  v35 = 0; /*0x4c5747*/
                  v36 = 0; /*0x4c574b*/
                  ClosestObjectCell = Object::FindClosestObjectCell((Object *)v15, &v35, 0, 0); /*0x4c574f*/
                  v23 = (_DWORD *)ClosestObjectCell; /*0x4c5754*/
                  if ( ClosestObjectCell /*0x4c5787*/
                    && ((*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 1
                     || (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) == 2)
                    && (v23[5] & 4) != 0 )
                  {
                    if ( v23[413] ) /*0x4c578d*/
                    {
                      if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 1 /*0x4c57b5*/
                        || (v24 = v23[433], !*(_BYTE *)(v24 + 3609))
                        || !*(_BYTE *)(v24 + 3608) )
                      {
                        if ( !v23[413] ) /*0x4c57c3*/
                          WinAPI::Wrapper(-2147467261); /*0x4c57d0*/
                        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 92))(v23[413]); /*0x4c57de*/
                        if ( !v23[413] ) /*0x4c57e1*/
                          WinAPI::Wrapper(-2147467261); /*0x4c57ee*/
                        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) ) /*0x4c57fc*/
                        {
                          if ( !v23[413] ) /*0x4c5803*/
                            WinAPI::Wrapper(-2147467261); /*0x4c5810*/
                          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 72))(v23[413]); /*0x4c581e*/
                        }
                        v23[321] = this->nextObject; /*0x4c5829*/
                        v25 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4c5834*/
                        if ( v25 ) /*0x4c583b*/
                        {
                          v29 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 25); /*0x4c585b*/
                          v26 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v23 + 72))(v23, v38); /*0x4c5863*/
                          v27 = (BuildingClass *)AnimClass::ctor( /*0x4c5876*/
                                                   v25,
                                                   *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6132),
                                                   v26,
                                                   v29,
                                                   1,
                                                   (void *)0x600,
                                                   0,
                                                   0);
                          if ( v27 ) /*0x4c587d*/
                            BuildingClass::AimTurret(v27, v23); /*0x4c5882*/
                        }
                      }
                    }
                  }
                }
                v11 = v31; /*0x4c5887*/
              }
            }
          }
          owningHouseIndex = this->owningHouseIndex; /*0x4c588b*/
          j = i; /*0x4c588e*/
          v31 = ++v11; /*0x4c5895*/
        }
        while ( v11 <= owningHouseIndex ); /*0x4c5899*/
      }
      result = this->owningHouseIndex; /*0x4c589f*/
      ++j; /*0x4c58a2*/
    }
  }
  return result; /*0x4c58af*/
}



// ==== 0x004C58C0  EMPulseClass::IterateCellsInRadius  this=EMPulseClass  sig=csp ====
int __thiscall EMPulseClass::IterateCellsInRadius(EMPulseClass *this)
{
  int result; // eax
  int v3; // ebx
  int i; // ebp
  int v5; // edi
  unsigned __int16 v6; // cx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  __int16 v10[2]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  result = *((_DWORD *)this + 10); /*0x4c58c8*/
  v3 = -result; /*0x4c58cf*/
  for ( i = result * result; v3 <= result; ++v3 ) /*0x4c58d6*/
  {
    v5 = -result; /*0x4c58df*/
    if ( -result <= result ) /*0x4c58e3*/
    {
      do /*0x4c5978*/
      {
        v6 = v3 + this->IsAllocated; /*0x4c58f4*/
        LOWORD(v11) = v5 + *((_WORD *)this + 18); /*0x4c58f7*/
        HIWORD(v11) = v6; /*0x4c58fc*/
        *(_DWORD *)v10 = v11; /*0x4c5908*/
        if ( (unsigned __int16)v11 < 0x200u /*0x4c592a*/
          && v6 < 0x200u
          && (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v10) )
        {
          v7 = v10[0] - *((__int16 *)this + 18); /*0x4c5940*/
          v8 = v10[1] - *((__int16 *)this + 19); /*0x4c5949*/
          if ( v7 * v7 + v8 * v8 <= i ) /*0x4c5957*/
          {
            v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4c5963*/
            v9[80] &= ~0x80000u; /*0x4c5968*/
          }
        }
        ++v5; /*0x4c5975*/
      }
      while ( v5 <= *((_DWORD *)this + 10) ); /*0x4c5978*/
    }
    result = *((_DWORD *)this + 10); /*0x4c597e*/
  }
  return result; /*0x4c598b*/
}



// ==== 0x004C59A0  EMPulseClass::Stat  this=EMPulseClass  sig=csp ====
int __thiscall EMPulseClass::Stat(EMPulseClass *this, unsigned int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x4c59a9*/
  Checksummer::Add_WORD((Checksummer *)a2, *((_WORD *)this + 18)); /*0x4c59b5*/
  Checksummer::Add_WORD((Checksummer *)a2, this->IsAllocated); /*0x4c59c1*/
  Power::TimerProcess(*((_DWORD *)this + 10)); /*0x4c59cc*/
  Power::TimerProcess(*((_DWORD *)this + 11)); /*0x4c59d7*/
  return Power::TimerProcess(this->vtable4); /*0x4c59e7*/
}



// ==== 0x004C59F0  EMPulseClass::ddtor  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::ddtor(EMPulseClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = unk_7E994C; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}



// ==== 0x004C5A30  EMPulseClass::Write  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Write(EMPulseClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4c5a3b*/
  if ( result >= 0 ) /*0x4c5a42*/
  {
    if ( this ) /*0x4c5a46*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x4c5a4f*/
      *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5a54*/
      this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5a5a*/
      this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5a61*/
      this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c5a68*/
    }
    return 0; /*0x4c5a6f*/
  }
  return result; /*0x4c5a71*/
}



// ==== 0x004C5A80  EMPulseClass::Seek  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Seek(EMPulseClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x4c5a8f*/
  if ( result >= 0 ) /*0x4c5a96*/
    return 0; /*0x4c5a98*/
  return result; /*0x4c5a9a*/
}



// ==== 0x004C5AA0  EMPulseClass::StubReturn52  this=EMPulseClass  sig=csp ====
int EMPulseClass::StubReturn52(EMPulseClass *this)
{
  return 52; /*0x4c5aa5*/
}



// ==== 0x004C5AB0  EMPulseClass::StubReturn55  this=EMPulseClass  sig=csp ====
int EMPulseClass::StubReturn55(EMPulseClass *this)
{
  return 55; /*0x4c5ab5*/
}



// ==== 0x004C5AC0  EMPulseClass::CopyTo  this=EMPulseClass  sig=csp ====
void **__thiscall EMPulseClass::CopyTo(EMPulseClass *this, char a2)
{
  int v3; // eax
  EMPulseClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5ac4*/
  this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5aca*/
  this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5ad1*/
  this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c5ad8*/
  if ( byte_A8E9A0 ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius(this); /*0x4c5ae8*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x4c5af1*/
  v5 = this; /*0x4c5b06*/
  v3 = (*(int (__thiscall **)(int *, EMPulseClass **))(dword_8A3870 + 16))(&dword_8A3870, &v5); /*0x4c5b0a*/
  if ( v3 != -1 && v3 < dword_8A3880 && v3 < --dword_8A3880 ) /*0x4c5b25*/
  {
    do /*0x4c5b3d*/
    {
      ++v3; /*0x4c5b2d*/
      *((_DWORD *)dword_8A3874 + v3 - 1) = *((_DWORD *)dword_8A3874 + v3); /*0x4c5b31*/
    }
    while ( v3 < dword_8A3880 ); /*0x4c5b3d*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4c5b41*/
  if ( (a2 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z(this); /*0x4c5b4e*/
  return (void **)this; /*0x4c5b58*/
}



// ==== 0x004C5B60  _DynamicVectorClass_PAVEMPulseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::Destroy(_DynamicVectorClass_PAVEMPulseClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c5b66*/
  this->m_10 = 0; /*0x4c5b69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c5b70*/
  {
    __3_YAXPAX_Z(v2); /*0x4c5b76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5b7e*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5b81*/
  this->m_8 = 0; /*0x4c5b84*/
}



// ==== 0x004C5B90  _DynamicVectorClass_PAVEMPulseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::GetItemIndex(_DynamicVectorClass_PAVEMPulseClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c5b90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c5ba5*/
  else
    return 0; /*0x4c5b97*/
}



// ==== 0x004C5BB0  _VectorClass_PAVEMPulseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::Get(_VectorClass_PAVEMPulseClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c5bba*/
}



// ==== 0x004C5BC0  _VectorClass_PAVEMPulseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::Add(_VectorClass_PAVEMPulseClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c5bc2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c5bcd*/
  {
    v3 = 0; /*0x4c5bcf*/
    if ( m_8 <= 0 ) /*0x4c5bd3*/
      return 1; /*0x4c5bf3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c5bd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c5bdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c5be4*/
    {
      ++v3; /*0x4c5be6*/
      ++v4; /*0x4c5be7*/
      if ( v3 >= m_8 ) /*0x4c5bec*/
        return 1; /*0x4c5bec*/
    }
  }
  return 0; /*0x4c5bee*/
}



// ==== 0x004C5C00  _VectorClass_PAVEMPulseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::Release(_VectorClass_PAVEMPulseClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c5c0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c5c16*/
    if ( a3 ) /*0x4c5c1c*/
      v4 = a3; /*0x4c5c32*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c5c2e*/
    LOBYTE(this->m_C) = 1; /*0x4c5c36*/
    if ( v4 ) /*0x4c5c3a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c5c45*/
      {
        m_8 = this->m_8; /*0x4c5c4c*/
        if ( a2 < m_8 ) /*0x4c5c51*/
          m_8 = a2; /*0x4c5c53*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c5c59*/
          ++i; /*0x4c5c5e*/
        if ( BYTE1(this->m_C) ) /*0x4c5c6b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5c76*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c5c7e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c5c87*/
      this->m_8 = a2; /*0x4c5c8f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c5c92*/
      return 1; /*0x4c5c98*/
    }
    else
    {
      return 0; /*0x4c5c3f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEMPulseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c5ca2*/
    return 1; /*0x4c5ca8*/
  }
}



// ==== 0x004C5CB0  _VectorClass_PAVEMPulseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::Remove(_VectorClass_PAVEMPulseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c5cbd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5cc3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5ccb*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5cce*/
  this->m_8 = 0; /*0x4c5cd1*/
}



// ==== 0x004C5CE0  _VectorClass_PAVEMPulseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::GetSize(_VectorClass_PAVEMPulseClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c5ce0*/
    return 0; /*0x4c5ce8*/
  m_8 = this->m_8; /*0x4c5cee*/
  result = 0; /*0x4c5cf1*/
  if ( m_8 <= 0 ) /*0x4c5cf5*/
    return -1; /*0x4c5d0c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c5cfb*/
  {
    if ( ++result >= m_8 ) /*0x4c5d0a*/
      return -1; /*0x4c5d0a*/
  }
  return result; /*0x4c5cea*/
}



// ==== 0x004C5D20  _VectorClass_PAVEMPulseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::GetCapacity(_VectorClass_PAVEMPulseClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c5d20*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c5d35*/
  else
    return 0; /*0x4c5d27*/
}



// ==== 0x004C5D40  _DynamicVectorClass_PAVEMPulseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::SetCapacity(
        _DynamicVectorClass_PAVEMPulseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c5d4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c5d52*/
    if ( a3 ) /*0x4c5d58*/
      v4 = a3; /*0x4c5d6e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c5d6a*/
    LOBYTE(this->m_C) = 1; /*0x4c5d72*/
    if ( !v4 ) /*0x4c5d76*/
      return 0; /*0x4c5dea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c5d78*/
    {
      m_8 = this->m_8; /*0x4c5d7f*/
      if ( a2 < m_8 ) /*0x4c5d84*/
        m_8 = a2; /*0x4c5d86*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c5d8c*/
        ++i; /*0x4c5d91*/
      if ( BYTE1(this->m_C) ) /*0x4c5d9e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5da9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c5db1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c5dba*/
    this->m_8 = a2; /*0x4c5dc2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c5dc5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEMPulseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c5dce*/
  }
  v7 = this->m_8; /*0x4c5dd1*/
  if ( v7 < this->m_10 ) /*0x4c5dd9*/
    this->m_10 = v7; /*0x4c5ddb*/
  return 1; /*0x4c5dde*/
}



// ==== 0x004C5DF0  _DynamicVectorClass_PAVEMPulseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::FindItemIndex(_DynamicVectorClass_PAVEMPulseClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c5df0*/
  result = 0; /*0x4c5df3*/
  if ( m_10 <= 0 ) /*0x4c5df8*/
    return -1; /*0x4c5e0f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c5dfe*/
  {
    if ( ++result >= m_10 ) /*0x4c5e0d*/
      return -1; /*0x4c5e0d*/
  }
  return result; /*0x4c5e12*/
}



// ==== 0x004C5E20  _VectorClass_PAVEMPulseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EMPulseClass::QueryInterface(_VectorClass_PAVEMPulseClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c5e23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EMPulseClass *>::`vftable'; /*0x4c5e26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c5e30*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5e40*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5e4b*/
  this->m_8 = 0; /*0x4c5e51*/
  if ( (a2 & 1) != 0 ) /*0x4c5e58*/
    __3_YAXPAX_Z(this); /*0x4c5e5b*/
  return this->__pad_0; /*0x4c5e65*/
}



// ==== 0x004C5E70  _DynamicVectorClass_PAVEMPulseClass::Constructor_VectorClass_EMPulseClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(
        _DynamicVectorClass_PAVEMPulseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c5e73*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EMPulseClass *>::`vftable'; /*0x4c5e76*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c5e80*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e88*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5e90*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5e9b*/
  this->m_8 = 0; /*0x4c5ea1*/
  if ( (a2 & 1) != 0 ) /*0x4c5ea8*/
    __3_YAXPAX_Z(this); /*0x4c5eab*/
  return this->__pad_0; /*0x4c5eb5*/
}



// ==== 0x004C5EC0  nullsub_127  this=-  sig=ida-proto ====
void nullsub_127()
{
  ; /*0x4c5ec0*/
}



// ==== 0x004C5ED0  nullsub_128  this=-  sig=ida-proto ====
void nullsub_128()
{
  ; /*0x4c5ed0*/
}



// ==== 0x004C5EE0  sub_4C5EE0  this=-  sig=ida-proto ====
void sub_4C5EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c5eec*/
  dbl_8A38D8 = Math::Sqrt(v0 + v0); /*0x4c5efe*/
}



// ==== 0x004C5F10  sub_4C5F10  this=-  sig=ida-proto ====
void sub_4C5F10()
{
  dbl_8A3970 = dbl_8A38D8 / 60.0; /*0x4c5f1c*/
}



// ==== 0x004C5F30  sub_4C5F30  this=-  sig=ida-proto ====
void sub_4C5F30()
{
  dbl_8A3958 = 1.0 / dbl_8A3970; /*0x4c5f3c*/
}



// ==== 0x004C5F50  sub_4C5F50  this=-  sig=ida-proto ====
void sub_4C5F50()
{
  dbl_8A3950 = 0.0174532925199433 * 45.0; /*0x4c5f5c*/
}



// ==== 0x004C5F70  sub_4C5F70  this=-  sig=ida-proto ====
void sub_4C5F70()
{
  dbl_8A3928 = 0.0174532925199433 * 60.0; /*0x4c5f7c*/
}



// ==== 0x004C5F90  sub_4C5F90  this=-  sig=ida-proto ====
void sub_4C5F90()
{
  dbl_8A38B8 = 0.0174532925199433 * 90.0; /*0x4c5f9c*/
}



// ==== 0x004C5FB0  sub_4C5FB0  this=-  sig=ida-proto ====
__int64 sub_4C5FB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A38B8 - dbl_8A3928); /*0x4c5fc2*/
  result = Math::RoundToInt(v0 * dbl_8A38D8 * 0.5); /*0x4c5fd6*/
  dword_8A3978 = result; /*0x4c5fdb*/
  return result; /*0x4c5fe0*/
}



// ==== 0x004C5FF0  sub_4C5FF0  this=-  sig=ida-proto ====
void sub_4C5FF0()
{
  dbl_8A3930 = Math::ArcTan((double)dword_8A3978 * 0.00390625); /*0x4c6007*/
}



// ==== 0x004C6020  sub_4C6020  this=-  sig=ida-proto ====
void sub_4C6020()
{
  dbl_8A3948 = Math::ArcTan((double)(2 * dword_8A3978) / dbl_8A38D8); /*0x4c6042*/
}



// ==== 0x004C6050  sub_4C6050  this=-  sig=ida-proto ====
__int64 sub_4C6050()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3978) + 0.5); /*0x4c606b*/
  dword_8A396C = result; /*0x4c6070*/
  return result; /*0x4c6076*/
}



// ==== 0x004C6080  sub_4C6080  this=-  sig=ida-proto ====
int sub_4C6080()
{
  word_8A38D0 = 0; /*0x4c6082*/
  word_8A38D2 = 0; /*0x4c6088*/
  return 0; /*0x4c608e*/
}



// ==== 0x004C6090  sub_4C6090  this=-  sig=ida-proto ====
int sub_4C6090()
{
  dword_8A3938 = 0; /*0x4c6092*/
  dword_8A393C = 0; /*0x4c6097*/
  dword_8A3940 = 0; /*0x4c609c*/
  return 0; /*0x4c60a1*/
}



// ==== 0x004C60B0  sub_4C60B0  this=-  sig=ida-proto ====
int sub_4C60B0()
{
  dword_8A3968 = 0; /*0x4c60b5*/
  dword_8A3960 = 128; /*0x4c60bf*/
  dword_8A3964 = 128; /*0x4c60c4*/
  return 128; /*0x4c60c9*/
}



// ==== 0x004C60D0  sub_4C60D0  this=-  sig=ida-proto ====
int sub_4C60D0()
{
  dword_8A38C0 = 0; /*0x4c60d2*/
  dword_8A38C4 = 0; /*0x4c60d7*/
  dword_8A38C8 = 0; /*0x4c60dc*/
  dword_8A38CC = 0; /*0x4c60e1*/
  return 0; /*0x4c60e6*/
}



// ==== 0x004C60F0  sub_4C60F0  this=-  sig=ida-proto ====
int sub_4C60F0()
{
  dword_8A3914 = 0; /*0x4c60fd*/
  dword_8A3918 = 0; /*0x4c6102*/
  dword_8A391C = 1; /*0x4c6107*/
  word_8A3920 = 0; /*0x4c6111*/
  memset(&stru_8A38E0, 0, 0x30u); /*0x4c6117*/
  unk_8A3910 = 0; /*0x4c611e*/
  return atexit(nullsub_129); /*0x4c6128*/
}



// ==== 0x004C6130  nullsub_129  this=-  sig=ida-proto ====
void __cdecl nullsub_129()
{
  ; /*0x4c6130*/
}



// ==== 0x004C6140  Menu::Reset  this=Menu  sig=csp ====
int __thiscall Menu::Reset(Menu *this)
{
  this->u32_34 = 0; /*0x4c614c*/
  this->u32_38 = 0; /*0x4c614f*/
  this->u32_3C = 1; /*0x4c6152*/
  this->q020 = 0; /*0x4c6159*/
  memset(this, 0, 0x30u); /*0x4c615d*/
  this->u32_18 = 0; /*0x4c615f*/
  return (int)this; /*0x4c6163*/
}



// ==== 0x004C6170  nullsub_130  this=-  sig=ida-proto ====
void nullsub_130()
{
  ; /*0x4c6170*/
}



// ==== 0x004C6180  Scenario::CopyLocalScenarioData  this=Scenario  sig=csp ====
int __thiscall Scenario::CopyLocalScenarioData(Scenario *this)
{
  int v2; // ecx
  int i; // eax
  void *vtable3; // edx
  char *abstractFlags; // eax
  int result; // eax

  v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *((_BYTE *)this + v2 - 1) = *((_BYTE *)&dword_A8B230[202].referenceCount + i + 3) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  this->Scenario_field_0x34 = (void *)(*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x4c61b1*/
  vtable3 = dword_A8B230[127].vtable3; /*0x4c61ba*/
  abstractFlags = (char *)dword_A8B230[127].abstractFlags; /*0x4c61c0*/
  if ( vtable3 != (void *)-1 ) /*0x4c61c9*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= (int)abstractFlags ) /*0x4c61d5*/
      abstractFlags = 0; /*0x4c61db*/
    else
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x4c61d7*/
  }
  this->Scenario_field_0x38 = abstractFlags; /*0x4c61dd*/
  result = *(_DWORD *)&dword_A83D4C->__pad_140[68]; /*0x4c61e6*/
  *(_DWORD *)this->__pad_3C = result; /*0x4c61ec*/
  *(_WORD *)&this->__pad_3C[4] = dword_A8B230[381].vtable3; /*0x4c61fc*/
  return result; /*0x4c6200*/
}



// ==== 0x004C6210  GameResult::CalcScore  this=GameResult  sig=csp ====
_WORD *__thiscall GameResult::CalcScore(GameResult *this)
{
  signed int i; // esi
  double v3; // st7
  int v4; // eax
  int v5; // esi
  _WORD *result; // eax
  int v7; // ecx
  void **p_vtable3; // eax
  double nextArrayIndex; // [esp+8h] [ebp-Ch]

  for ( i = 0; i < 50; ++i ) /*0x4c6217*/
    ScenarioClass::SetGlobalToByID((ScenarioClass *)dword_A8B230, i, this->__tail_0[i]); /*0x4c6224*/
  v3 = (double)*((int *)this + 13) * *(double *)&dword_A8B230[202].uniqueId; /*0x4c6244*/
  if ( dword_A8B230[202].nextArrayIndex != -1 ) /*0x4c624a*/
  {
    nextArrayIndex = (double)dword_A8B230[202].nextArrayIndex; /*0x4c6250*/
    if ( v3 >= nextArrayIndex ) /*0x4c625d*/
      v3 = nextArrayIndex; /*0x4c6261*/
  }
  LOWORD(v4) = Math::RoundToInt(v3); /*0x4c6265*/
  v5 = v4; /*0x4c6270*/
  HouseClass::AddPower((HouseClass *)dword_A83D4C, v4); /*0x4c6273*/
  *(_DWORD *)&dword_A83D4C->__pad_140[156] += v5; /*0x4c6285*/
  HouseClass::SetCombatPower((int *)dword_A83D4C->__pad_0, *((_DWORD *)this + 15)); /*0x4c6295*/
  result = dword_A8B230; /*0x4c629a*/
  if ( BYTE1(dword_A8B230[374].abstractFlags) ) /*0x4c629f*/
  {
    v7 = *((_DWORD *)this + 14); /*0x4c62a9*/
    if ( v7 <= 0 ) /*0x4c62ae*/
    {
      LOWORD(dword_A8B230[381].vtable3) = *((_WORD *)this + 32); /*0x4c62fc*/
      return result; /*0x4c6307*/
    }
    p_vtable3 = &dword_A8B230[127].vtable3; /*0x4c62b6*/
    dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x4c62bb*/
    p_vtable3[1] = (void *)HIDWORD(nextArrayIndex); /*0x4c62c1*/
    p_vtable3[2] = (void *)v7; /*0x4c62c4*/
    result = dword_A8B230; /*0x4c62c7*/
    if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x4c62d3*/
    {
      dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x4c62db*/
      result = dword_A8B230; /*0x4c62e1*/
      LOWORD(dword_A8B230[381].vtable3) = *((_WORD *)this + 32); /*0x4c62eb*/
      return result; /*0x4c62f6*/
    }
  }
  result[6864] = *((_WORD *)this + 32); /*0x4c630d*/
  return result; /*0x4c62ea*/
}



// ==== 0x004C6320  LoadGame::LoadBlock68  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadBlock68(LoadGame *this, int a2)
{
  return (*(int (__stdcall **)(int, LoadGame *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 68, 0); /*0x4c632f*/
}



// ==== 0x004C6340  SaveGame::SaveBlock68  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveBlock68(SaveGame *this, int a2)
{
  return (*(int (__stdcall **)(int, SaveGame *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/
}



// ==== 0x004C6360  sub_4C6360  this=-  sig=ida-proto ====
void sub_4C6360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c636c*/
  dbl_8A39A0 = Math::Sqrt(v0 + v0); /*0x4c637e*/
}



// ==== 0x004C6390  sub_4C6390  this=-  sig=ida-proto ====
void sub_4C6390()
{
  dbl_8A39F0 = dbl_8A39A0 / 60.0; /*0x4c639c*/
}



// ==== 0x004C63B0  sub_4C63B0  this=-  sig=ida-proto ====
void sub_4C63B0()
{
  dbl_8A39D8 = 1.0 / dbl_8A39F0; /*0x4c63bc*/
}



// ==== 0x004C63D0  sub_4C63D0  this=-  sig=ida-proto ====
void sub_4C63D0()
{
  dbl_8A39D0 = 0.0174532925199433 * 45.0; /*0x4c63dc*/
}



// ==== 0x004C63F0  sub_4C63F0  this=-  sig=ida-proto ====
void sub_4C63F0()
{
  dbl_8A39A8 = 0.0174532925199433 * 60.0; /*0x4c63fc*/
}



// ==== 0x004C6410  sub_4C6410  this=-  sig=ida-proto ====
void sub_4C6410()
{
  dbl_8A3980 = 0.0174532925199433 * 90.0; /*0x4c641c*/
}



// ==== 0x004C6430  sub_4C6430  this=-  sig=ida-proto ====
__int64 sub_4C6430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3980 - dbl_8A39A8); /*0x4c6442*/
  result = Math::RoundToInt(v0 * dbl_8A39A0 * 0.5); /*0x4c6456*/
  dword_8A39F8 = result; /*0x4c645b*/
  return result; /*0x4c6460*/
}



// ==== 0x004C6470  sub_4C6470  this=-  sig=ida-proto ====
void sub_4C6470()
{
  dbl_8A39B0 = Math::ArcTan((double)dword_8A39F8 * 0.00390625); /*0x4c6487*/
}



// ==== 0x004C64A0  sub_4C64A0  this=-  sig=ida-proto ====
void sub_4C64A0()
{
  dbl_8A39C8 = Math::ArcTan((double)(2 * dword_8A39F8) / dbl_8A39A0); /*0x4c64c2*/
}



// ==== 0x004C64D0  sub_4C64D0  this=-  sig=ida-proto ====
__int64 sub_4C64D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A39F8) + 0.5); /*0x4c64eb*/
  dword_8A39EC = result; /*0x4c64f0*/
  return result; /*0x4c64f6*/
}



// ==== 0x004C6500  sub_4C6500  this=-  sig=ida-proto ====
int sub_4C6500()
{
  dword_8A3998 = 0; /*0x4c6502*/
  return 0; /*0x4c650e*/
}



// ==== 0x004C6510  sub_4C6510  this=-  sig=ida-proto ====
int sub_4C6510()
{
  dword_8A39B8 = 0; /*0x4c6512*/
  dword_8A39BC = 0; /*0x4c6517*/
  dword_8A39C0 = 0; /*0x4c651c*/
  return 0; /*0x4c6521*/
}



// ==== 0x004C6530  sub_4C6530  this=-  sig=ida-proto ====
int sub_4C6530()
{
  dword_8A39E8 = 0; /*0x4c6535*/
  dword_8A39E0 = 128; /*0x4c653f*/
  dword_8A39E4 = 128; /*0x4c6544*/
  return 128; /*0x4c6549*/
}



// ==== 0x004C6550  sub_4C6550  this=-  sig=ida-proto ====
int sub_4C6550()
{
  dword_8A3988 = 0; /*0x4c6552*/
  dword_8A398C = 0; /*0x4c6557*/
  dword_8A3990 = 0; /*0x4c655c*/
  dword_8A3994 = 0; /*0x4c6561*/
  return 0; /*0x4c6566*/
}



// ==== 0x004C65E0  EventClass::Add  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_Add(char *this, int a2, unsigned __int8 a3, int a4, char a5)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c65fc*/
  if ( a2 < 0 ) /*0x4c660a*/
  {
    this->vtable3 = -1; /*0x4c6631*/
    *this = 0; /*0x4c6635*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6610*/
    *this = a3; /*0x4c661a*/
    *(_DWORD *)(this + 7) = a4; /*0x4c661c*/
    *(this + 11) = a5; /*0x4c6620*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}



// ==== 0x004C6650  PlayerClass::SetTargetOrClear  this=AbstractClass  sig=csp ====
char *__thiscall sub_4C6650(char *this, int a2, char a3, _WORD *a4)
{
  Debug::Log(); /*0x4c666c*/
  if ( a2 < 0 ) /*0x4c667a*/
  {
    this->vtable3 = -1; /*0x4c66a4*/
    *this = 0; /*0x4c66a8*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c66b3*/
    return this; /*0x4c66b1*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c667c*/
    *this = a3; /*0x4c6683*/
    *(_WORD *)(this + 7) = *a4; /*0x4c6688*/
    *(_WORD *)(this + 9) = a4[1]; /*0x4c6690*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c669a*/
    return this; /*0x4c669d*/
  }
}



// ==== 0x004C66C0  EventClass::AddEvent  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_AddEvent(char *this, int a2, unsigned __int8 a3)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    this->vtable3 = -1; /*0x4c6701*/
    *this = 0; /*0x4c6705*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c66ec*/
    *this = a3; /*0x4c66ef*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}



// ==== 0x004C6720  EventClass::Add2  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_Add2(char *this, int a2, unsigned __int8 a3, int a4)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c673c*/
  if ( a2 < 0 ) /*0x4c674a*/
  {
    this->vtable3 = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6755*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}



// ==== 0x004C6780  ScenarioClass::SetEvent  this=AbstractClass  sig=csp ====
char *__thiscall ScenarioClass_SetEvent(char *this, int a2, char a3, int a4, char a5, int a6, char a7)
{
  Debug::Log(); /*0x4c679c*/
  if ( a2 < 0 ) /*0x4c67aa*/
  {
    this->vtable3 = -1; /*0x4c67e2*/
    *this = 0; /*0x4c67e6*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c67ee*/
    return this; /*0x4c67f1*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c67b0*/
    *this = a3; /*0x4c67ba*/
    *(_DWORD *)(this + 7) = a4; /*0x4c67bc*/
    *(this + 11) = a5; /*0x4c67c2*/
    this->vtable4 = a6; /*0x4c67cc*/
    this->uniqueId = a7; /*0x4c67d1*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c67da*/
    return this; /*0x4c67cf*/
  }
}



// ==== 0x004C6860  ScriptAction::InitActionFields  this=AbstractClass  sig=csp ====
char *__thiscall sub_4C6860(
        char *this,
        int a2,
        int a3,
        char a4,
        char a5,
        int a6,
        char a7,
        int a8,
        char a9,
        int a10,
        char a11)
{
  char *result; // eax

  result = this; /*0x4c6860*/
  if ( a2 < 0 ) /*0x4c6868*/
  {
    this->vtable3 = -1; /*0x4c68ca*/
    *this = 0; /*0x4c68ce*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c686e*/
    *this = 4; /*0x4c6874*/
    this->q01D = 0; /*0x4c6877*/
    *(_DWORD *)(this + 7) = a3; /*0x4c687b*/
    *(this + 11) = a4; /*0x4c6881*/
    this->vtable4 = a5; /*0x4c6888*/
    *(_DWORD *)(this + 14) = a6; /*0x4c6892*/
    *(this + 18) = a7; /*0x4c6899*/
    *(_DWORD *)(this + 19) = a8; /*0x4c68a3*/
    *(this + 23) = a9; /*0x4c68aa*/
    this->nextArrayIndex = a10; /*0x4c68b4*/
    this->referenceCount = a11; /*0x4c68bb*/
  }
  *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c68c4*/
  return result; /*0x4c68c7*/
}



// ==== 0x004C68E0  ObjectClass::method_4C68E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C68E0(
        char *this,
        int a2,
        int a3,
        char a4,
        char a5,
        int a6,
        char a7,
        int a8,
        char a9,
        int a10,
        int a11)
{
  Debug::Log(); /*0x4c68e8*/
  if ( a2 < 0 ) /*0x4c68f6*/
  {
    this->vtable3 = -1; /*0x4c6952*/
    *this = 0; /*0x4c6956*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6961*/
    return this; /*0x4c695f*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6900*/
    *this = 5; /*0x4c6906*/
    *(_DWORD *)(this + 7) = a3; /*0x4c6909*/
    this->fallRate = a4; /*0x4c690e*/
    this->vtable4 = a5; /*0x4c6919*/
    *(_DWORD *)(this + 13) = a6; /*0x4c6920*/
    this->q011 = a7; /*0x4c6926*/
    *(_DWORD *)(this + 18) = a8; /*0x4c6930*/
    *(_DWORD *)(this + 27) = a11; /*0x4c6937*/
    this->q058 = a9; /*0x4c693a*/
    *(_DWORD *)(this + 23) = a10; /*0x4c6941*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6949*/
    return this; /*0x4c694c*/
  }
}



// ==== 0x004C6970  EventClass::AddEventEx  this=SelectClass@StripClass@SidebarClass  sig=csp ====
char *__thiscall EventClass_AddEventEx(char *this, int a2, unsigned __int8 a3, int a4, int a5, int a6)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c698c*/
  if ( a2 < 0 ) /*0x4c699a*/
  {
    this->Y = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    this->Y = a2; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    *(_DWORD *)(this + 7) = a4; /*0x4c69ad*/
    *(_DWORD *)(this + 11) = a5; /*0x4c69b0*/
    *(_DWORD *)(this + 15) = a6; /*0x4c69b3*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}



// ==== 0x004C69E0  ObjectClass::method_4C69E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C69E0(ObjectClass *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c69fc*/
  if ( a2 < 0 ) /*0x4c6a0a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6a48*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6a4c*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a57*/
    return (char *)this; /*0x4c6a55*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6a10*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6a17*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6a19*/
    *(void **)((char *)&this->? + 3) = (void *)-1; /*0x4c6a1c*/
    *(void **)((char *)&this->? + 3) = 0; /*0x4c6a23*/
    *(_WORD *)((char *)&this->? + 3) = *a5; /*0x4c6a2d*/
    *(_WORD *)((char *)&this->? + 1) = a5[1]; /*0x4c6a35*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a3e*/
    return (char *)this; /*0x4c6a41*/
  }
}



// ==== 0x004C6A60  ObjectClass::method_4C6A60  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6A60(ObjectClass *this, int a2, char a3, int a4, int a5, _WORD *a6)
{
  Debug::Log(); /*0x4c6a7c*/
  if ( a2 < 0 ) /*0x4c6a8a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6ac8*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6acc*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6ad7*/
    return (char *)this; /*0x4c6ad5*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6a90*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6a97*/
    *(void **)((char *)&this->? + 3) = (void *)a5; /*0x4c6a99*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6aa0*/
    *(void **)((char *)&this->? + 3) = 0; /*0x4c6aa3*/
    *(_WORD *)((char *)&this->? + 3) = *a6; /*0x4c6aad*/
    *(_WORD *)((char *)&this->? + 1) = a6[1]; /*0x4c6ab5*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6abe*/
    return (char *)this; /*0x4c6ac1*/
  }
}



// ==== 0x004C6AE0  EventClass::Init  this=AbstractClass  sig=csp ====
char *__thiscall EventClass::Init(char *this, int a2, char a3, int a4, int a5, int a6, _WORD *a7)
{
  Debug::Log(); /*0x4c6afc*/
  if ( a2 < 0 ) /*0x4c6b0a*/
  {
    this->vtable3 = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6b14*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b24*/
    *(_DWORD *)(this + 15) = a6; /*0x4c6b27*/
    *(_WORD *)(this + 19) = *a7; /*0x4c6b2d*/
    *(_WORD *)(this + 21) = a7[1]; /*0x4c6b35*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}



// ==== 0x004C6B60  SidebarClass::SetFlashEntry  this=SidebarClass  sig=csp ====
char *__thiscall sub_4C6B60(char *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c6b7c*/
  if ( a2 < 0 ) /*0x4c6b8a*/
  {
    this->q008 = -1; /*0x4c6bba*/
    *this = 0; /*0x4c6bbe*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6bc9*/
    return this; /*0x4c6bc7*/
  }
  else
  {
    this->q008 = a2; /*0x4c6b90*/
    *this = a3; /*0x4c6b97*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b99*/
    *(_WORD *)(this + 11) = *a5; /*0x4c6b9f*/
    *(_WORD *)(this + 13) = a5[1]; /*0x4c6ba7*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6bb0*/
    return this; /*0x4c6bb3*/
  }
}



// ==== 0x004C6BE0  ObjectClass::method_4C6BE0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6BE0(ObjectClass *this, int a2, char a3, int a4, int a5)
{
  Debug::Log(); /*0x4c6bfc*/
  if ( a2 < 0 ) /*0x4c6c0a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6c2f*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6c33*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6c10*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6c17*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6c19*/
    *(void **)((char *)&this->? + 3) = (void *)a5; /*0x4c6c1c*/
  }
  *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6c27*/
  return (char *)this; /*0x4c6c2a*/
}



// ==== 0x004C6C50  Network::initConnection  this=Network  sig=csp ====
char *__thiscall sub_4C6C50(char *this, int a2, _DWORD *a3, char a4)
{
  _DWORD *v5; // ecx
  char v6; // al
  int v8; // [esp+4h] [ebp-8h] BYREF

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    this->q008 = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6ca6*/
    return this; /*0x4c6ca4*/
  }
  else
  {
    this->q008 = a2; /*0x4c6c5e*/
    v5 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    Network::CopyAddress(v5, &a2, (int)&v8); /*0x4c6c72*/
    v6 = a4; /*0x4c6c7b*/
    this->q008 = v8; /*0x4c6c7f*/
    this->q01C = v6; /*0x4c6c82*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6c8d*/
    return this; /*0x4c6c8b*/
  }
}



// ==== 0x004C6CB0  EventClass::ProcessEvent  this=EventClass  sig=csp ====
void __thiscall EventClass::ProcessEvent(EventClass *this)
{
  void *v2; // ebx
  int v3; // edi
  BuildingClass *Building; // esi
  BuildingClass *v5; // esi
  TechnoClass *v6; // edi
  void *v7; // eax
  wchar_t *v8; // eax
  _BYTE *v9; // esi
  _BYTE *v10; // edi
  _DWORD *v11; // eax
  CellClass *v12; // eax
  __int16 v13; // ax
  int v14; // eax
  AnimClass *v15; // eax
  void **v16; // eax
  AnimClass *v17; // eax
  void **v18; // edi
  int v19; // esi
  __int16 v20; // dx
  bool v21; // zf
  void *v22; // eax
  int v23; // esi
  Team *v24; // edi
  int v25; // ebx
  int v26; // eax
  int Object; // eax
  void *v28; // eax
  void *v29; // ebp
  _BYTE *Member; // eax
  _BYTE *v31; // ebp
  int *v32; // ecx
  int v33; // ebx
  TechnoClass *v34; // ebp
  FactoryClass *v35; // ecx
  int v36; // ebx
  BuildingLoadQueue *v37; // esi
  void *Next; // eax
  void *v39; // eax
  void *v40; // ebx
  int v41; // ebp
  void *v42; // eax
  int v43; // ebx
  void *v44; // eax
  FootClass *v45; ... [37047 chars total]



// ==== 0x004C81D0  sub_4C81D0  this=-  sig=ida-proto ====
int sub_4C81D0()
{
  *(_DWORD *)&Buffer[0x10000] = 0; /*0x4c81d2*/
  *(_DWORD *)&Buffer[65540] = 0; /*0x4c81d7*/
  *(_DWORD *)&Buffer[65544] = 0; /*0x4c81dc*/
  *(_DWORD *)&Buffer[65548] = 0; /*0x4c81e1*/
  return 0; /*0x4c81e6*/
}



// ==== 0x004C81F0  sub_4C81F0  this=-  sig=ida-proto ====
void sub_4C81F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c81fc*/
  *(double *)&Buffer[65560] = Math::Sqrt(v0 + v0); /*0x4c820e*/
}



// ==== 0x004C8220  sub_4C8220  this=-  sig=ida-proto ====
void sub_4C8220()
{
  *(double *)&Buffer[65640] = *(double *)&Buffer[65560] / 60.0; /*0x4c822c*/
}



// ==== 0x004C8240  sub_4C8240  this=-  sig=ida-proto ====
void sub_4C8240()
{
  *(double *)&Buffer[65616] = 1.0 / *(double *)&Buffer[65640]; /*0x4c824c*/
}



// ==== 0x004C8260  sub_4C8260  this=-  sig=ida-proto ====
void sub_4C8260()
{
  *(double *)&Buffer[65608] = 0.0174532925199433 * 45.0; /*0x4c826c*/
}



// ==== 0x004C8280  sub_4C8280  this=-  sig=ida-proto ====
void sub_4C8280()
{
  *(double *)&Buffer[65568] = 0.0174532925199433 * 60.0; /*0x4c828c*/
}



// ==== 0x004C82A0  sub_4C82A0  this=-  sig=ida-proto ====
void sub_4C82A0()
{
  dbl_8A3A00 = 0.0174532925199433 * 90.0; /*0x4c82ac*/
}



// ==== 0x004C82C0  sub_4C82C0  this=-  sig=ida-proto ====
__int64 sub_4C82C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3A00 - *(double *)&Buffer[65568]); /*0x4c82d2*/
  result = Math::RoundToInt(v0 * *(double *)&Buffer[65560] * 0.5); /*0x4c82e6*/
  *(_DWORD *)&Buffer[65648] = result; /*0x4c82eb*/
  return result; /*0x4c82f0*/
}



// ==== 0x004C8300  sub_4C8300  this=-  sig=ida-proto ====
void sub_4C8300()
{
  *(double *)&Buffer[65576] = Math::ArcTan((double)*(int *)&Buffer[65648] * 0.00390625); /*0x4c8317*/
}



// ==== 0x004C8330  sub_4C8330  this=-  sig=ida-proto ====
void sub_4C8330()
{
  *(double *)&Buffer[65600] = Math::ArcTan((double)(2 * *(_DWORD *)&Buffer[65648]) / *(double *)&Buffer[65560]); /*0x4c8352*/
}



// ==== 0x004C8360  sub_4C8360  this=-  sig=ida-proto ====
__int64 sub_4C8360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&Buffer[65648]) + 0.5); /*0x4c837b*/
  *(_DWORD *)&Buffer[65636] = result; /*0x4c8380*/
  return result; /*0x4c8386*/
}



// ==== 0x004C8390  sub_4C8390  this=-  sig=ida-proto ====
int sub_4C8390()
{
  *(_WORD *)&Buffer[65552] = 0; /*0x4c8392*/
  *(_WORD *)&Buffer[65554] = 0; /*0x4c8398*/
  return 0; /*0x4c839e*/
}



// ==== 0x004C83A0  sub_4C83A0  this=-  sig=ida-proto ====
int sub_4C83A0()
{
  *(_DWORD *)&Buffer[65584] = 0; /*0x4c83a2*/
  *(_DWORD *)&Buffer[65588] = 0; /*0x4c83a7*/
  *(_DWORD *)&Buffer[65592] = 0; /*0x4c83ac*/
  return 0; /*0x4c83b1*/
}



// ==== 0x004C83C0  sub_4C83C0  this=-  sig=ida-proto ====
int sub_4C83C0()
{
  *(_DWORD *)&Buffer[65632] = 0; /*0x4c83c5*/
  *(_DWORD *)&Buffer[65624] = 128; /*0x4c83cf*/
  *(_DWORD *)&Buffer[65628] = 128; /*0x4c83d4*/
  return 128; /*0x4c83d9*/
}



// ==== 0x004C83E0  DialogFunc  this=-  sig=csp ====
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 > 0x111 ) /*0x4c83ea*/
  {
    if ( a2 == 534 ) /*0x4c84bc*/
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x4c84d6*/
    return 0; /*0x4c84bc*/
  }
  if ( a2 == 273 ) /*0x4c83f0*/
  {
    if ( (unsigned __int16)a3 == 1149 ) /*0x4c847d*/
    {
      MessageBoxA(hDlg, aSorryYouCanOnl, aBummer, 0x30u); /*0x4c84ab*/
      return 0; /*0x4c84b4*/
    }
    if ( (unsigned __int16)a3 == 1153 ) /*0x4c8482*/
    {
      EndDialog(hDlg, 1153); /*0x4c848e*/
      return 0; /*0x4c8497*/
    }
    return 0; /*0x4c8482*/
  }
  if ( a2 == 16 ) /*0x4c83f5*/
  {
    EndDialog(hDlg, 1153); /*0x4c845c*/
    Object::RemoveObjectArray(hDlg); /*0x4c8464*/
    return 0; /*0x4c846c*/
  }
  if ( a2 != 272 ) /*0x4c83fc*/
    return 0; /*0x4c84c1*/
  Debug::Log(aWmInitdialog); /*0x4c8407*/
  SetDlgItemTextA(hDlg, 1156, Buffer); /*0x4c841e*/
  SetFocus(hDlg); /*0x4c8425*/
  if ( g_hWnd ) /*0x4c8433*/
    SetDialogParent(hDlg, g_hWnd); /*0x4c8437*/
  ShowWindow(hDlg, 1); /*0x4c843f*/
  TimerPool::AllocSlot(hDlg); /*0x4c8447*/
  return 0; /*0x4c844e*/
}



// ==== 0x004C84E0  sub_4C84E0  this=-  sig=ida-proto ====
int sub_4C84E0()
{
  const DLGTEMPLATE *Resource; // esi
  INT_PTR v1; // esi

  WinMain_Write_53E6B0(); /*0x4c84e2*/
  switch ( dword_820E5C ) /*0x4c84ed*/
  {
    case 1: /*0x4c84ed*/
      if ( !AllocConsole() ) /*0x4c85a0*/
      {
        FreeConsole(); /*0x4c85ac*/
        AllocConsole(); /*0x4c85ae*/
      }
      _cwprintf(aErrorRecursive); /*0x4c85b5*/
      Sleep(0xFA0u); /*0x4c85c2*/
      sub_7DD1D7(); /*0x4c85c8*/
      FreeConsole(); /*0x4c85cd*/
      return 1153; /*0x4c85cd*/
    case 2: /*0x4c84ed*/
      return 1153; /*0x4c85d0*/
    case 3: /*0x4c84ed*/
      ExitProcess(0); /*0x4c858c*/
  }
  ShowCursor(1); /*0x4c8509*/
  Resource = (const DLGTEMPLATE *)FindResource(0xF7u, (const CHAR *)5); /*0x4c851a*/
  Debug::Log(); /*0x4c8525*/
  if ( Resource ) /*0x4c851e*/
    v1 = DialogBoxIndirectParamA(g_hInstance, Resource, g_hWnd, DialogFunc, 0); /*0x4c8548*/
  else
    v1 = DialogBoxParamA(g_hInstance, (LPCSTR)0xF7, g_hWnd, DialogFunc, 0); /*0x4c857f*/
  ShowCursor(0); /*0x4c854c*/
  return v1; /*0x4c8550*/
}



// ==== 0x004C85E0  ExceptionHandler::GenerateReport  this=ExceptionHandler  sig=csp ====
int __thiscall ExceptionHandler::GenerateReport(ExceptionHandler *this)
{
  HMODULE LibraryA; // ebp
  FARPROC *v2; // esi
  LPCSTR *i; // edi
  HANDLE v4; // eax
  HANDLE CurrentProcess; // eax
  ExceptionHandler v6; // ebp
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int *v10; // ecx
  const CHAR *v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  HANDLE v17; // eax
  int v18; // edi
  char *ModuleVersion; // eax
  int v20; // edi
  char *ModuleInternalVersion; // eax
  int v22; // edi
  char *v23; // eax
  int v24; // edi
  char *v25; // eax
  char *Name; // eax
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  unsigned __int8 *v34; // edi
  int v35; // edi
  int v36; // edi
  FARPROC *v37; // edi
  void (__stdcall *v38)(LPSTR, LPCSTR); // ebp
  bool v39; // zf
  HANDLE v40; // eax
  int v41; // ebp
  HANDLE v42; // eax
  HANDLE v43; // eax
  int v44; // edi
  int result; // eax
  int v46; // [esp+18h] [ebp-4E4h]
  FARPROC v47; // [esp+18h] [ebp-4E4h]
  char *v48; // [esp+1Ch] [ebp-4E0h]
  const char *v49; // [esp+1Ch] [ebp-4E0h]
  FARPROC v50; // [esp+20h] [ebp-4DCh]
  char v51; // [esp+37h] [ebp-4C5h] BYREF
  int v52; // [esp+38h] [ebp-4C4h]
  int v53; // [esp+3Ch] [ebp-4C0h] BYREF
  int v54; // [esp+40h] [ebp-4BCh]
  ExceptionHandler *v55; // [esp+44h] [ebp-4B8h]
  int v56; // [esp+48h] [ebp-4B4h]
  int v57; // [esp+4Ch] [ebp-4B0h]
  int v58; // [esp+50h] [ebp-4ACh] BYREF
  HMODULE hLibModule; // [esp+54h] [ebp-4A8h]
  CHAR String[256]; // [esp+58h] [ebp-4A4h] BYREF
  CHAR String2[32]; // [esp+158h] [ebp-3A4h] BYREF
  _DWORD v62[64]; // [esp+178h] [ebp-384h] BYREF
  char Buffer[128]; // [esp+278h] [ebp-284h] BYREF
  CHAR Filename[260]; // [esp+2F8h] [ebp-204h] BYREF
  char Destination[128]; // [esp+3FCh] [ebp-100h] BYREF
  char v66[128]; // [esp+47Ch] [ebp-80h] BYREF

  v55 = this; /*0x4c85ea*/
  Debug::Log(); /*0x4c85f3*/
  memset(::Buffer, 0, 0x10000u); /*0x4c8607*/
  LibraryA = LoadLibraryA(LibFileName); /*0x4c8614*/
  hLibModule = LibraryA; /*0x4c8618*/
  if ( LibraryA ) /*0x4c861c*/
  {
    Debug::Log(); /*0x4c8623*/
    v2 = (FARPROC *)&dword_8B3A88; /*0x4c8631*/
    for ( i = (LPCSTR *)off_820E64; *i; ++i ) /*0x4c8636*/
      *v2++ = GetProcAddress(LibraryA, *i); /*0x4c8645*/
  }
  else
  {
    Debug::Log(); /*0x4c8654*/
  }
  if ( dword_8B3A98 ) /*0x4c8663*/
    dword_8B3A98(4); /*0x4c8667*/
  v57 = 0; /*0x4c867f*/
  v54 = 0; /*0x4c8683*/
  if ( dword_8B3A90 && (v4 = GetCurrentProcess(), dword_8B3A90(v4, 0, 0)) ) /*0x4c8692*/
  {
    Debug::Log(); /*0x4c86a5*/
    v54 = 1; /*0x4c86b4*/
    if ( dword_8B3A98 ) /*0x4c86bc*/
      dword_8B3A98(6); /*0x4c86c0*/
    GetModuleFileNameA(0, Filename, 0x104u); /*0x4c86d1*/
    if ( !dword_8B3A94 /*0x4c86ff*/
      || (CurrentProcess = GetCurrentProcess(), (v57 = dword_8B3A94(CurrentProcess, 0, Filename, 0, 0, 0)) == 0) )
    {
      GetLastError(); /*0x4c8703*/
      Debug::Log(); /*0x4c8713*/
    }
  }
  else
  {
    GetLastError(); /*0x4c875e*/
    Debug::Log(); /*0x4c8766*/
  }
  v52 = -1; /*0x4c871f*/
  v56 = 0; /*0x4c8727*/
  v6 = v55[1]; /*0x4c8731*/
  if ( **(_DWORD **)v55 == -1073741819 ) /*0x4c873b*/
  {
    Debug::Log(); /*0x4c8742*/
    v7 = *(_DWORD *)(*(_DWORD *)v55 + 24); /*0x4c874f*/
    v52 = *(_DWORD *)(*(_DWORD *)v55 + 20); /*0x4c8752*/
    v56 = v7; /*0x4c8756*/
  }
  else
  {
    Debug::Log(); /*0x4c8776*/
  }
  v8 = -1073741819; /*0x4c877e*/
  v9 = 0; /*0x4c8783*/
  v10 = &dword_7E8838; /*0x4c878e*/
  while ( v8 != **(_DWORD **)v55 ) /*0x4c8795*/
  {
    v8 = v10[1]; /*0x4c8797*/
    ++v10; /*0x4c879a*/
    ++v9; /*0x4c879d*/
    if ( v8 == -1 ) /*0x4c87a1*/
      goto LABEL_24; /*0x4c87a1*/
  }
  Debug::Log(); /*0x4c87aa*/
LABEL_24:
  v11 = (&lpString2)[v9]; /*0x4c87b2*/
  v12 = lstrlenA(v11); /*0x4c87c2*/
  if ( lstrlenA(::Buffer) + v12 < 0xFFFF ) /*0x4c87d9*/
    lstrcatA(::Buffer, v11); /*0x4c87e1*/
  v13 = lstrlenA(::String2); /*0x4c87ea*/
  if ( lstrlenA(::Buffer) + v13 < 0xFFFF ) /*0x4c87fb*/
    lstrcatA(::Buffer, ::String2); /*0x4c8807*/
  if ( **(_DWORD **)v55 == -1073741819 ) /*0x4c881b*/
  {
    wsprintfA(String, "Access address:%08X ", v56); /*0x4c8830*/
    v14 = lstrlenA(::Buffer); /*0x4c883c*/
    if ( lstrlenA(String) + v14 < 0xFFFF ) /*0x4c884d*/
      lstrcatA(::Buffer, String); /*0x4c8859*/
    if ( v52 ) /*0x4c8865*/
    {
      v15 = lstrlenA(::String); /*0x4c886e*/
      if ( lstrlenA(::Buffer) + v15 < 0xFFFF ) /*0x4c887f*/
        lstrcatA(::Buffer, ::String); /*0x4c8886*/
    }
    else
    {
      v16 = lstrlenA(aWasReadFrom); /*0x4c888f*/
      if ( lstrlenA(::Buffer) + v16 < 0xFFFF ) /*0x4c88a0*/
        lstrcatA(::Buffer, aWasReadFrom); /*0x4c88ac*/
    }
  }
  memset(v62, 0, 0x18u); /*0x4c88c0*/
  v62[0] = 24; /*0x4c88c2*/
  v62[4] = 232; /*0x4c88cd*/
  v62[2] = 0; /*0x4c88d8*/
  v62[1] = *(_DWORD *)(*(_DWORD *)&v6 + 184); /*0x4c88e5*/
  if ( IsBadCodePtr(*(FARPROC *)(*(_DWORD *)&v6 + 184)) ) /*0x4c88f3*/
  {
    Debug::Log(); /*0x4c899d*/
  }
  else if ( dword_8B3A8C /*0x4c8925*/
         && (v46 = *(_DWORD *)(*(_DWORD *)&v6 + 184), v17 = GetCurrentProcess(), dword_8B3A8C(v17, v46, &v53, v62)) )
  {
    wsprintfA( /*0x4c894d*/
      String,
      "Exception occurred at %08X - %s + %08X\r\n",
      *(_DWORD *)(*(_DWORD *)&v6 + 184),
      (const char *)&v62[5],
      v53);
  }
  else
  {
    Debug::Log(); /*0x4c8959*/
    if ( dword_8B3A8C ) /*0x4c8968*/
    {
      GetLastError(); /*0x4c896c*/
      Debug::Log(); /*0x4c8978*/
    }
    wsprintfA(String, "Exception occurred at %08X\r\n", *(_DWORD *)(*(_DWORD *)&v6 + 184)); /*0x4c8991*/
  }
  v18 = lstrlenA(::Buffer); /*0x4c89b0*/
  if ( lstrlenA(String) + v18 < 0xFFFF ) /*0x4c89bd*/
    lstrcatA(::Buffer, String); /*0x4c89c9*/
  ModuleVersion = GetModuleVersion(); /*0x4c89cf*/
  wsprintfA(String, "\r\nVersion %s\r\n", ModuleVersion); /*0x4c89df*/
  v20 = lstrlenA(::Buffer); /*0x4c89ef*/
  if ( lstrlenA(String) + v20 < 0xFFFF ) /*0x4c89fc*/
    lstrcatA(::Buffer, String); /*0x4c8a08*/
  ModuleInternalVersion = GetModuleInternalVersion((ObjectClass *)&stru_A8EB00.?[252]); /*0x4c8a13*/
  wsprintfA(String, "Internal Version %s\r\n", ModuleInternalVersion); /*0x4c8a23*/
  v22 = lstrlenA(::Buffer); /*0x4c8a33*/
  if ( lstrlenA(String) + v22 < 0xFFFF ) /*0x4c8a40*/
    lstrcatA(::Buffer, String); /*0x4c8a4c*/
  Buffer[0] = 0; /*0x4c8a5e*/
  Time::FormatDate(Buffer); /*0x4c8a66*/
  v48 = String::CopyConstant(Destination); /*0x4c8a90*/
  v23 = String::FormatDword(v66); /*0x4c8a91*/
  wsprintfA(String, "Release Build: %s by %s - %s\r\n", v23, v48, Buffer);
  v24 = lstrlenA(::Buffer); /*0x4c8ab1*/
  if ( lstrlenA(String) + v24 < 0xFFFF ) /*0x4c8abe*/
    lstrcatA(::Buffer, String); /*0x4c8aca*/
  v58 = 5; /*0x4c8adc*/
  v51 = 0; /*0x4c8ae4*/
  GetVersionString(&v58, &v51, 0, 0); /*0x4c8ae9*/
  v25 = (char *)&off_821F08; /*0x4c8af4*/
  if ( !v51 ) /*0x4c8af9*/
    v25 = g_INI_Key_No; /*0x4c8afb*/
  v49 = v25; /*0x4c8b05*/
  Name = PlayerType::GetName(); /*0x4c8b06*/
  wsprintfA(String, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v49, Source);
  v27 = lstrlenA(::Buffer); /*0x4c8b26*/
  if ( lstrlenA(String) + v27 < 0xFFFF ) /*0x4c8b33*/
    lstrcatA(::Buffer, String); /*0x4c8b3f*/
  v28 = lstrlenA(aDetails); /*0x4c8b4c*/
  if ( lstrlenA(::Buffer) + v28 < 0xFFFF ) /*0x4c8b5d*/
    lstrcatA(::Buffer, aDetails); /*0x4c8b69*/
  Debug::Log(); /*0x4c8b74*/
  wsprintfA( /*0x4c8b98*/
    String,
    "Eip:%08X\tEsp:%08X\tEbp:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 184),
    *(_DWORD *)(*(_DWORD *)&v6 + 196),
    *(_DWORD *)(*(_DWORD *)&v6 + 180));
  v29 = lstrlenA(::Buffer); /*0x4c8ba8*/
  if ( lstrlenA(String) + v29 < 0xFFFF ) /*0x4c8bb5*/
    lstrcatA(::Buffer, String); /*0x4c8bc1*/
  wsprintfA( /*0x4c8be6*/
    String,
    "Eax:%08X\tEbx:%08X\tEcx:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 176),
    *(_DWORD *)(*(_DWORD *)&v6 + 164),
    *(_DWORD *)(*(_DWORD *)&v6 + 172));
  v30 = lstrlenA(::Buffer); /*0x4c8bf6*/
  if ( lstrlenA(String) + v30 < 0xFFFF ) /*0x4c8c03*/
    lstrcatA(::Buffer, String); /*0x4c8c0f*/
  wsprintfA( /*0x4c8c34*/
    String,
    "Edx:%08X\tEsi:%08X\tEdi:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 168),
    *(_DWORD *)(*(_DWORD *)&v6 + 160),
    *(_DWORD *)(*(_DWORD *)&v6 + 156));
  v31 = lstrlenA(::Buffer); /*0x4c8c44*/
  if ( lstrlenA(String) + v31 < 0xFFFF ) /*0x4c8c51*/
    lstrcatA(::Buffer, String); /*0x4c8c5d*/
  wsprintfA(String, "EFlags:%08X \r\n", *(_DWORD *)(*(_DWORD *)&v6 + 192)); /*0x4c8c74*/
  v32 = lstrlenA(::Buffer); /*0x4c8c80*/
  if ( lstrlenA(String) + v32 < 0xFFFF ) /*0x4c8c91*/
    lstrcatA(::Buffer, String); /*0x4c8c9d*/
  wsprintfA( /*0x4c8cd7*/
    String,
    "CS:%04x  SS:%04x  DS:%04x  ES:%04x  FS:%04x  GS:%04x\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 188),
    *(_DWORD *)(*(_DWORD *)&v6 + 200),
    *(_DWORD *)(*(_DWORD *)&v6 + 152),
    *(_DWORD *)(*(_DWORD *)&v6 + 148),
    *(_DWORD *)(*(_DWORD *)&v6 + 144),
    *(_DWORD *)(*(_DWORD *)&v6 + 140));
  v33 = lstrlenA(::Buffer); /*0x4c8ce3*/
  if ( lstrlenA(String) + v33 < 0xFFFF ) /*0x4c8cf4*/
    lstrcatA(::Buffer, String); /*0x4c8d00*/
  Debug::Log(); /*0x4c8d0b*/
  wsprintfA(String, "\r\nBytes at CS:EIP (%08X)  : ", *(_DWORD *)(*(_DWORD *)&v6 + 184));
  v34 = *(unsigned __int8 **)(*(_DWORD *)&v6 + 184); /*0x4c8d23*/
  v52 = 32; /*0x4c8d2c*/
  do /*0x4c8d81*/
  {
    if ( IsBadReadPtr(v34, 1u) ) /*0x4c8d37*/
    {
      lstrcatA(String, asc_821DE0); /*0x4c8d4b*/
    }
    else
    {
      wsprintfA(String2, "%02X ", *v34); /*0x4c8d5f*/
      lstrcatA(String, String2); /*0x4c8d71*/
    }
    ++v34; /*0x4c8d77*/
    --v52; /*0x4c8d7d*/
  }
  while ( v52 ); /*0x4c8d81*/
  lstrcatA(String, asc_821DD0); /*0x4c8d8d*/
  v35 = lstrlenA(::Buffer); /*0x4c8d9e*/
  if ( lstrlenA(String) + v35 < 0xFFFF ) /*0x4c8dab*/
    lstrcatA(::Buffer, String); /*0x4c8db7*/
  Debug::Log(); /*0x4c8dc2*/
  v36 = lstrlenA(aStackDumpIndic); /*0x4c8dd1*/
  if ( lstrlenA(::Buffer) + v36 < 0xFFFF ) /*0x4c8de2*/
    lstrcatA(::Buffer, aStackDumpIndic); /*0x4c8dee*/
  v37 = *(FARPROC **)(*(_DWORD *)&v6 + 196); /*0x4c8df4*/
  v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8dfa*/
  v52 = 1024; /*0x4c8e00*/
  do
  {
    if ( IsBadReadPtr(v37, 4u) )
    {
      wsprintfA(String, "%08X: ", v37);
      v38(String, asc_821D78); /*0x4c8e2f*/
    }
    else
    {
      v39 = !IsBadCodePtr(*v37); /*0x4c8e3d*/
      v50 = *v37; /*0x4c8e41*/
      if ( v39 )
      {
        wsprintfA(String, "%08X: %08X", v37, v50);
        if ( v54 ) /*0x4c8e78*/
        {
          v62[0] = 256; /*0x4c8e83*/
          v62[4] = 128; /*0x4c8e8e*/
          v62[2] = 0; /*0x4c8e99*/
          v62[1] = *v37; /*0x4c8ea8*/
          if ( dword_8B3A8C ) /*0x4c8eaf*/
          {
            v47 = *v37; /*0x4c8ec0*/
            v40 = GetCurrentProcess(); /*0x4c8ec1*/
            if ( dword_8B3A8C(v40, v47, &v53, v62) ) /*0x4c8ec8*/
            {
              wsprintfA(Filename, " - %s + %08X", (const char *)&v62[5], v53); /*0x4c8eec*/
              v38(String, Filename); /*0x4c8efe*/
            }
          }
        }
        else
        {
          v38(String, asc_821D40); /*0x4c8f0a*/
        }
        v38(String, ::String2); /*0x4c8f16*/
      }
      else
      {
        wsprintfA(String, "%08X: %08X ", v37, v50);
        v38(String, aDataPtr); /*0x4c8e5e*/
      }
    }
    v41 = lstrlenA(::Buffer); /*0x4c8f23*/
    if ( lstrlenA(String) + v41 >= 0xFFFF ) /*0x4c8f30*/
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f46*/
    }
    else
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f32*/
      lstrcatA(::Buffer, String); /*0x4c8f42*/
    }
    ++v37; /*0x4c8f50*/
    --v52; /*0x4c8f54*/
  }
  while ( v52 );
  if ( v54 ) /*0x4c8f64*/
  {
    if ( dword_8B3A88 ) /*0x4c8f6d*/
    {
      v42 = GetCurrentProcess(); /*0x4c8f6f*/
      dword_8B3A88(v42); /*0x4c8f76*/
    }
    if ( v57 && dword_8B3A9C ) /*0x4c8f8b*/
    {
      v43 = GetCurrentProcess(); /*0x4c8f8f*/
      dword_8B3A9C(v43, 0); /*0x4c8f96*/
    }
  }
  if ( hLibModule ) /*0x4c8fa2*/
    FreeLibrary(hLibModule); /*0x4c8fa5*/
  v44 = lstrlenA(asc_821DD0); /*0x4c8fb2*/
  result = lstrlenA(::Buffer); /*0x4c8fb9*/
  if ( result + v44 < 0xFFFF ) /*0x4c8fc3*/
    return (int)((LPSTR (__stdcall *)(LPSTR, LPCSTR))v38)(::Buffer, asc_821DD0); /*0x4c8fcf*/
  return result; /*0x4c8fd1*/
}



// ==== 0x004C9150  XSurface::g_var_04f235  this=XSurface  sig=csp ====
int __thiscall XSurface::g_var_04f235(Class_7E8C94 *this)
{
  return 0; /*0x4c9152*/
}



// ==== 0x004C9160  sub_4C9160  this=-  sig=ida-proto ====
char sub_4C9160()
{
  char v0; // bl
  _DWORD v2[22]; // [esp+4h] [ebp-6Ch] BYREF
  _BYTE v3[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v4; // [esp+68h] [ebp-8h]

  CCFileClass::Construct(v2, aExpandDat); /*0x4c916d*/
  v0 = CCFileClass::Open(v2, 0); /*0x4c9181*/
  v2[0] = &CCFileClass::`vftable'; /*0x4c9183*/
  v4 = 0; /*0x4c918b*/
  Vector::Clear((int)v3); /*0x4c9193*/
  v2[0] = &off_7E1668; /*0x4c919c*/
  BufferIOFileClass::Dtor(v2); /*0x4c91a4*/
  return v0; /*0x4c91ab*/
}



// ==== 0x004C91B0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_5  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_5(std::codecvt_base *this)
{
  return 1; /*0x4c91b2*/
}



// ==== 0x004C91C0  FrameSnapshot::Init  this=FrameSnapshot  sig=csp ====
_WORD *__thiscall FrameSnapshot::Init(FrameSnapshot *this)
{
  int v2; // edx

  *(_WORD *)this->__pad_0 = 0; /*0x4c91c4*/
  LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91c7*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c91cb*/
  this->q004 = 0; /*0x4c91d1*/
  *((_DWORD *)this + 2) = v2; /*0x4c91d4*/
  *((_WORD *)this + 10) = 0; /*0x4c91d7*/
  return this->__pad_0; /*0x4c91db*/
}



// ==== 0x004C91E0  FrameSnapshot::InitMax  this=FrameSnapshot  sig=csp ====
_WORD *__thiscall FrameSnapshot::InitMax(FrameSnapshot *this, int a2)
{
  _WORD *result; // eax
  int v3; // edx
  char v4; // cl
  __int16 v5; // dx

  result = this; /*0x4c91e0*/
  *(_WORD *)this->__pad_0 = 0; /*0x4c91e4*/
  LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91e7*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c91eb*/
  this->q004 = 0; /*0x4c91f1*/
  *((_DWORD *)this + 2) = v3; /*0x4c91f4*/
  *((_WORD *)this + 10) = 0; /*0x4c91f7*/
  v4 = a2; /*0x4c91fb*/
  if ( a2 >= 127 ) /*0x4c9202*/
    v4 = 127; /*0x4c9204*/
  LOBYTE(v5) = 0; /*0x4c9209*/
  HIBYTE(v5) = v4; /*0x4c920b*/
  result[10] = v5; /*0x4c920d*/
  return result; /*0x4c9211*/
}



// ==== 0x004C9220  FacingClass::Update  this=FacingClass  sig=csp ====
int __thiscall FacingClass::Update(char *this, _WORD *a2)
{
  int result; // eax
  __int16 v3; // bp
  int v4; // edi
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  __int16 v10; // di
  int v11; // eax
  int v12; // edx
  char *v13; // ecx
  int v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+8h] [ebp-8h]

  LOWORD(result) = *(_WORD *)this; /*0x4c9224*/
  if ( *(_WORD *)this == *a2 ) /*0x4c922d*/
  {
    LOBYTE(result) = 0; /*0x4c92f7*/
    return result; /*0x4c92f7*/
  }
  v3 = *((_WORD *)this + 10); /*0x4c9235*/
  if ( v3 <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  v4 = this->RotationTimer; /*0x4c9240*/
  v5 = this->StartFacing; /*0x4c9243*/
  if ( v4 != -1 ) /*0x4c924f*/
  {
    if ( (int)dword_A8ED84 - v4 >= v5 ) /*0x4c9257*/
    {
LABEL_15:
      v11 = *(_DWORD *)this; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    v5 -= (int)dword_A8ED84 - v4; /*0x4c9259*/
  }
  if ( !v5 ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (__int16)(result - this->RotationTimer); /*0x4c9266*/
  v7 = abs16(result - this->RotationTimer) / v3; /*0x4c9271*/
  v14 = *(_DWORD *)this; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->RotationTimer; /*0x4c927e*/
    v9 = this->StartFacing; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( (int)dword_A8ED84 - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - ((_WORD)dword_A8ED84 - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v14) = v14 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v14; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = v11; /*0x4c92b1*/
  result = (int)a2; /*0x4c92b4*/
  v12 = *(_DWORD *)a2; /*0x4c92bb*/
  *(_DWORD *)this = *(_DWORD *)a2; /*0x4c92bd*/
  if ( v3 > 0 ) /*0x4c92bf*/
  {
    result = abs16(v12 - this->RotationTimer) / v3; /*0x4c92da*/
    v13 = this + 8; /*0x4c92e0*/
    *(_DWORD *)v13 = dword_A8ED84; /*0x4c92e3*/
    *((_DWORD *)v13 + 1) = v15; /*0x4c92e5*/
    *((_DWORD *)v13 + 2) = result; /*0x4c92e8*/
  }
  LOBYTE(result) = 1; /*0x4c92ee*/
  return result; /*0x4c92f1*/
}



// ==== 0x004C9300  FacingClass::Set_SyncLog  this=FrameSnapshot  sig=csp ====
int __thiscall FacingClass::Set_SyncLog(char *this, _DWORD *a2)
{
  char *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  __int16 v7; // cx
  int v8; // ecx
  char *v9; // esi
  int result; // eax
  int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( *((__int16 *)this + 10) > 0 ) /*0x4c930c*/
  {
    v3 = this + 8; /*0x4c930e*/
    if ( Locomotor::GetSpeed((int *)this + 2) ) /*0x4c9313*/
    {
      v4 = abs16(*(_WORD *)this - *((_WORD *)this + 2)) / *((__int16 *)this + 10); /*0x4c9333*/
      v11 = *(_DWORD *)this; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      v5 = this->q004; /*0x4c9340*/
      v6 = *(_DWORD *)v3; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( (int)dword_A8ED84 - v6 >= v5 ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(v5) = v5 - ((_WORD)dword_A8ED84 - v6); /*0x4c9356*/
      }
      v7 = v5; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(*(_WORD *)this - *((_WORD *)this + 2)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = *(_DWORD *)this; /*0x4c9375*/
LABEL_12:
  if ( (_WORD)v8 == *(_WORD *)a2 ) /*0x4c937e*/
  {
    v9 = this + 8; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    *(_DWORD *)v9 = dword_A8ED84; /*0x4c93b8*/
    *((_DWORD *)v9 + 1) = v12; /*0x4c93ba*/
  }
  else
  {
    *(_DWORD *)this = *a2; /*0x4c9382*/
    this->q004 = *a2; /*0x4c9386*/
    v9 = this + 8; /*0x4c9390*/
    *(_DWORD *)v9 = dword_A8ED84; /*0x4c9393*/
    result = v12; /*0x4c9395*/
    *((_DWORD *)v9 + 1) = v12; /*0x4c9399*/
    LOBYTE(result) = 1; /*0x4c939c*/
  }
  *((_DWORD *)v9 + 2) = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}



// ==== 0x004C93D0  ProgressTimer::GetValue  this=ProgressTimer  sig=csp ====
_DWORD *__thiscall ProgressTimer::GetValue(ProgressTimer *this, _DWORD *a2)
{
  __int16 ProgressTimer_field_0x14; // bx
  void *ProgressTimer_field_0x8; // esi
  char *ProgressTimer_field_0x10; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  void *v8; // edx
  void *v9; // ecx
  __int16 v10; // cx
  int v12; // [esp+Ch] [ebp-4h]

  ProgressTimer_field_0x14 = (__int16)this->ProgressTimer_field_0x14; /*0x4c93d2*/
  if ( ProgressTimer_field_0x14 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  ProgressTimer_field_0x8 = this->ProgressTimer_field_0x8; /*0x4c93dd*/
  ProgressTimer_field_0x10 = (char *)this->ProgressTimer_field_0x10; /*0x4c93e0*/
  if ( ProgressTimer_field_0x8 != (void *)-1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ProgressTimer_field_0x8 >= (int)ProgressTimer_field_0x10 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    ProgressTimer_field_0x10 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ProgressTimer_field_0x8; /*0x4c93f6*/
  }
  if ( ProgressTimer_field_0x10 ) /*0x4c93fa*/
  {
    v5 = (__int16)(*(_WORD *)this->__pad_0 - *(_WORD *)&this->__pad_0[4]); /*0x4c9406*/
    v6 = (__int16)(*(_WORD *)this->__pad_0 - *(_WORD *)&this->__pad_0[4]); /*0x4c940b*/
    v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / ProgressTimer_field_0x14; /*0x4c9411*/
    v12 = *(_DWORD *)this->__pad_0; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      *a2 = v12; /*0x4c9445*/
      return a2; /*0x4c9453*/
    }
    v8 = this->ProgressTimer_field_0x10; /*0x4c941e*/
    v9 = this->ProgressTimer_field_0x8; /*0x4c9421*/
    if ( v9 != (void *)-1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v9 >= (int)v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = (_WORD)v8 - (*(_WORD *)&stru_A8EB00.?[416] - (_WORD)v9); /*0x4c9431*/
    }
    v10 = (__int16)v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = v12 - v10 * (v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  *a2 = *(_DWORD *)this->__pad_0; /*0x4c945a*/
  return a2; /*0x4c944d*/
}



// ==== 0x004C9470  TechnoClass::GetWeaponType  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWeaponType(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->RadioClass; /*0x4c9476*/
  return a2; /*0x4c9478*/
}



// ==== 0x004C9480  TimerClass::Active  this=FacingStruct  sig=csp ====
int __thiscall TimerClass::Active(int this)
{
  int v1; // edx
  int v2; // eax

  if ( *(__int16 *)(this + 20) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  v1 = *(_DWORD *)(this + 8); /*0x4c9487*/
  v2 = *(_DWORD *)(this + 16); /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)dword_A8ED84 - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)dword_A8ED84 - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}



// ==== 0x004C94B0  JumpjetLocomotionClass::StubReturnZero_5  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall JumpjetLocomotionClass::StubReturnZero_5(JumpjetLocomotionClass *this)
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(this->?) <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  Owner = this->?; /*0x4c94b8*/
  v2 = *(_DWORD *)&this->?; /*0x4c94bb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c94c1*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)Owner >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)Owner; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (__int16)(LOWORD(this->LocomotionClass[0]) - LOWORD(this->LocomotionClass[1])) > 0; /*0x4c94e7*/
  return 0; /*0x4c94d8*/
}



// ==== 0x004C94F0  JumpjetLocomotionClass::StubReturnZero_6  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall JumpjetLocomotionClass::StubReturnZero_6(JumpjetLocomotionClass *this)
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(this->?) <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  Owner = this->?; /*0x4c94f8*/
  v2 = *(_DWORD *)&this->?; /*0x4c94fb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c9501*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)Owner >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)Owner; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (__int16)(LOWORD(this->LocomotionClass[0]) - LOWORD(this->LocomotionClass[1])) < 0; /*0x4c9525*/
  return 0; /*0x4c9518*/
}



// ==== 0x004C9530  MovementClass::CompareAbsCoords  this=MovementClass  sig=csp ====
_DWORD *__thiscall MovementClass::CompareAbsCoords(MovementClass *this, _DWORD *a2)
{
  __int16 v2; // bp
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // si
  int v14; // [esp+Ch] [ebp-4h]

  v2 = *((_WORD *)this + 10); /*0x4c9533*/
  if ( v2 <= 0 ) /*0x4c953b*/
    goto LABEL_14; /*0x4c953b*/
  v3 = *((_DWORD *)this + 2); /*0x4c953d*/
  v4 = this->q004; /*0x4c9540*/
  if ( v3 != -1 ) /*0x4c954c*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x4c9554*/
    {
LABEL_14:
      v7 = *(_DWORD *)this->__pad_0; /*0x4c95b1*/
      v11 = *(_DWORD *)this->__pad_0; /*0x4c95b3*/
      goto LABEL_15; /*0x4c95b3*/
    }
    v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x4c9556*/
  }
  if ( !v4 ) /*0x4c955a*/
    goto LABEL_14; /*0x4c955a*/
  v5 = (__int16)(*(_WORD *)this->__pad_0 - LOWORD(this->MovementClass_field_0x04)); /*0x4c9567*/
  v6 = abs16(*(_WORD *)this->__pad_0 - LOWORD(this->MovementClass_field_0x04)) / v2; /*0x4c9572*/
  v7 = *(_DWORD *)this->__pad_0; /*0x4c9574*/
  v14 = *(_DWORD *)this->__pad_0; /*0x4c9576*/
  if ( (__int16)v6 > 0 ) /*0x4c957d*/
  {
    v8 = this->q004; /*0x4c957f*/
    v9 = *((_DWORD *)this + 2); /*0x4c9582*/
    if ( v9 != -1 ) /*0x4c9588*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v8 ) /*0x4c9590*/
      {
        v10 = 0; /*0x4c95ad*/
        goto LABEL_11; /*0x4c95af*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&stru_A8EB00.?[416] - v9); /*0x4c9592*/
    }
    v10 = v8; /*0x4c9594*/
LABEL_11:
    LOWORD(v14) = v14 - v10 * (v5 / (__int16)v6); /*0x4c9596*/
  }
  LOWORD(v11) = v14; /*0x4c95a6*/
LABEL_15:
  v12 = v7 - v11; /*0x4c95b5*/
  LOWORD(v14) = v12; /*0x4c95bb*/
  *a2 = v14; /*0x4c95c6*/
  return a2; /*0x4c95c4*/
}



// ==== 0x004C95D0  ObjectClass::method_4C95D0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C95D0(ObjectClass *this, _DWORD *a2, _WORD *a3)
{
  __int16 abstractFlags; // bx
  void *vtable2; // esi
  int uniqueId; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // edx
  void *v10; // ecx
  __int16 v11; // cx
  void *vtable0; // ecx
  void *v14; // [esp+Ch] [ebp-4h]

  abstractFlags = this->?; /*0x4c95d2*/
  if ( abstractFlags <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  vtable2 = this->?; /*0x4c95dd*/
  uniqueId = this->?; /*0x4c95e0*/
  if ( vtable2 != (void *)-1 ) /*0x4c95ec*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable2 >= uniqueId ) /*0x4c95f4*/
    {
LABEL_14:
      vtable0 = this->AbstractClass; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    uniqueId -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable2; /*0x4c95f6*/
  }
  if ( !uniqueId ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  v6 = (__int16)(LOWORD(this->AbstractClass) - LOWORD(this->?)); /*0x4c9606*/
  v7 = (__int16)(LOWORD(this->AbstractClass) - LOWORD(this->?)); /*0x4c960b*/
  v8 = (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) / abstractFlags; /*0x4c9611*/
  v14 = this->AbstractClass; /*0x4c9615*/
  if ( (__int16)v8 > 0 ) /*0x4c961c*/
  {
    v9 = this->?; /*0x4c961e*/
    v10 = this->?; /*0x4c9621*/
    if ( v10 != (void *)-1 ) /*0x4c9627*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      LOWORD(v9) = v9 - (*(_WORD *)&stru_A8EB00.?[416] - (_WORD)v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
LABEL_11:
    LOWORD(v14) = (_WORD)v14 - v11 * (v6 / (__int16)v8); /*0x4c9635*/
  }
  LOWORD(vtable0) = (_WORD)v14; /*0x4c9645*/
LABEL_15:
  LOWORD(a3) = *a3 - (_WORD)vtable0; /*0x4c9651*/
  *a2 = a3; /*0x4c966b*/
  return a2; /*0x4c9655*/
}



// ==== 0x004C9680  BuildingTypeClass::GetPowerOutput  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetPowerOutput(BuildingTypeClass *this, int a2)
{
  int result; // eax
  __int16 v3; // dx

  result = a2; /*0x4c9680*/
  if ( a2 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  LOBYTE(v3) = 0; /*0x4c968e*/
  HIBYTE(v3) = result; /*0x4c9690*/
  LOWORD(this->?) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/
}



// ==== 0x004C96A0  sub_4C96A0  this=-  sig=ida-proto ====
void sub_4C96A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c96ac*/
  dbl_8B3AD0 = Math::Sqrt(v0 + v0); /*0x4c96be*/
}



// ==== 0x004C96D0  sub_4C96D0  this=-  sig=ida-proto ====
void sub_4C96D0()
{
  dbl_8B3B20 = dbl_8B3AD0 / 60.0; /*0x4c96dc*/
}



// ==== 0x004C96F0  sub_4C96F0  this=-  sig=ida-proto ====
void sub_4C96F0()
{
  dbl_8B3B08 = 1.0 / dbl_8B3B20; /*0x4c96fc*/
}



// ==== 0x004C9710  sub_4C9710  this=-  sig=ida-proto ====
void sub_4C9710()
{
  dbl_8B3B00 = 0.0174532925199433 * 45.0; /*0x4c971c*/
}



// ==== 0x004C9730  sub_4C9730  this=-  sig=ida-proto ====
void sub_4C9730()
{
  dbl_8B3AD8 = 0.0174532925199433 * 60.0; /*0x4c973c*/
}



// ==== 0x004C9750  sub_4C9750  this=-  sig=ida-proto ====
void sub_4C9750()
{
  dbl_8B3AB0 = 0.0174532925199433 * 90.0; /*0x4c975c*/
}



// ==== 0x004C9770  sub_4C9770  this=-  sig=ida-proto ====
__int64 sub_4C9770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3AB0 - dbl_8B3AD8); /*0x4c9782*/
  result = Math::RoundToInt(v0 * dbl_8B3AD0 * 0.5); /*0x4c9796*/
  dword_8B3B28 = result; /*0x4c979b*/
  return result; /*0x4c97a0*/
}



// ==== 0x004C97B0  sub_4C97B0  this=-  sig=ida-proto ====
void sub_4C97B0()
{
  dbl_8B3AE0 = Math::ArcTan((double)dword_8B3B28 * 0.00390625); /*0x4c97c7*/
}



// ==== 0x004C97E0  sub_4C97E0  this=-  sig=ida-proto ====
void sub_4C97E0()
{
  dbl_8B3AF8 = Math::ArcTan((double)(2 * dword_8B3B28) / dbl_8B3AD0); /*0x4c9802*/
}



// ==== 0x004C9810  sub_4C9810  this=-  sig=ida-proto ====
__int64 sub_4C9810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3B28) + 0.5); /*0x4c982b*/
  dword_8B3B1C = result; /*0x4c9830*/
  return result; /*0x4c9836*/
}



// ==== 0x004C9840  sub_4C9840  this=-  sig=ida-proto ====
int sub_4C9840()
{
  word_8B3AC8 = 0; /*0x4c9842*/
  word_8B3ACA = 0; /*0x4c9848*/
  return 0; /*0x4c984e*/
}



// ==== 0x004C9850  sub_4C9850  this=-  sig=ida-proto ====
int sub_4C9850()
{
  dword_8B3AE8 = 0; /*0x4c9852*/
  dword_8B3AEC = 0; /*0x4c9857*/
  dword_8B3AF0 = 0; /*0x4c985c*/
  return 0; /*0x4c9861*/
}



// ==== 0x004C9870  sub_4C9870  this=-  sig=ida-proto ====
int sub_4C9870()
{
  dword_8B3B18 = 0; /*0x4c9875*/
  dword_8B3B10 = 128; /*0x4c987f*/
  dword_8B3B14 = 128; /*0x4c9884*/
  return 128; /*0x4c9889*/
}



// ==== 0x004C9890  sub_4C9890  this=-  sig=ida-proto ====
int sub_4C9890()
{
  dword_8B3AB8 = 0; /*0x4c9892*/
  dword_8B3ABC = 0; /*0x4c9897*/
  dword_8B3AC0 = 0; /*0x4c989c*/
  dword_8B3AC4 = 0; /*0x4c98a1*/
  return 0; /*0x4c98a6*/
}



// ==== 0x004C98B0  TeamTypeClass::Construct  this=FactoryClass  sig=csp ====
int __thiscall TeamTypeClass::Construct(TeamTypeClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->__pad_4C[0] = 1; /*0x4c98e0*/
  this->__pad_4C[1] = 0; /*0x4c98e3*/
  this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
  *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
  *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
  this->? = &FactoryClass::`vftable'; /*0x4c9920*/
  this->? = &FactoryClass::`vftable'; /*0x4c9926*/
  this->? = &FactoryClass::`vftable'; /*0x4c992d*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
  if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
    || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
    && *(int *)&stru_A83D50.__pad_C8[44] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
         &stru_A83D50.__pad_C8[24],
         *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
         0) )
  {
    v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
  }
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
  }
  return (int)this; /*0x4c99fd*/
}



// ==== 0x004C9B20  FactoryClass::UpdateProduction  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::UpdateProduction(FactoryClass *this)
{
  int Speed; // eax
  int *v3; // edi
  int v4; // eax
  int v5; // eax
  int balance; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  LOBYTE(Speed) = this->isSuspended; /*0x4c9b28*/
  if ( !(_BYTE)Speed ) /*0x4c9b2d*/
  {
    Speed = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( this->production[0] == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !this->specialItem ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( this->specialItem == -1 || this->production[0] != 54 ) /*0x4c9b5d*/
    {
      v3 = &this->production[2]; /*0x4c9b63*/
      Speed = Locomotor::GetSpeed((Locomotor *)&this->production[2]); /*0x4c9b68*/
      if ( Speed || (Speed = this->queuedCapacity) == 0 ) /*0x4c9b76*/
      {
        LOBYTE(this->production[1]) = 0; /*0x4c9bba*/
      }
      else
      {
        this->production[0] += (int)this->object; /*0x4c9b82*/
        LOBYTE(this->production[1]) = 1; /*0x4c9b89*/
        *v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9b92*/
        this->queuedObjects[0] = v11; /*0x4c9b94*/
        this->queuedCount = Speed; /*0x4c9b97*/
        v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b9a*/
        this->__pad_42[27] = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          v5 = this->production[0]; /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            balance = this->balance; /*0x4c9bc5*/
          else
            balance = this->balance / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          balance = 0; /*0x4c9bca*/
        }
        if ( balance >= this->balance ) /*0x4c9bd1*/
          balance = this->balance; /*0x4c9bd3*/
        if ( balance <= (*(int (__stdcall **)(int *))(this->owner->arrayIndex + 24))(&this->owner->arrayIndex) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain((int *)this->owner, balance); /*0x4c9bf5*/
          v8 = this->balance; /*0x4c9bfa*/
          this->__pad_42[26] = 0; /*0x4c9bfd*/
          Speed = v8 - balance; /*0x4c9c01*/
          this->balance = Speed; /*0x4c9c03*/
        }
        else
        {
          v7 = this->production[0]; /*0x4c9be5*/
          this->__pad_42[26] = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          this->production[0] = Speed; /*0x4c9bec*/
        }
        if ( this->production[0] == 54 ) /*0x4c9c0a*/
        {
          this->isSuspended = 1; /*0x4c9c0c*/
          v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9c0f*/
          this->queuedCapacity = 0; /*0x4c9c19*/
          this->production[2] = v9; /*0x4c9c1c*/
          this->queuedObjects[0] = v11; /*0x4c9c22*/
          this->queuedCount = 0; /*0x4c9c25*/
          LOBYTE(Speed) = HouseClass::ProcessPowerDrain((int *)this->owner, this->balance); /*0x4c9c2f*/
          this->balance = 0; /*0x4c9c34*/
        }
      }
    }
  }
  return Speed; /*0x4c9bbe*/
}



// ==== 0x004C9C50  SidebarClass::draw  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::draw(SidebarClass *this)
{
  return (char)this->SidebarClass_field_0x5C; /*0x4c9c53*/
}



// ==== 0x004C9C60  FactoryClass::HasProgressChanged  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::HasProgressChanged(FactoryClass *this)
{
  char result; // al

  result = this->__pad_42[27]; /*0x4c9c60*/
  this->__pad_42[27] = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/
}



// ==== 0x004C9C70  FactoryClass::DemandProduction  this=FactoryClass  sig=csp ====
bool __thiscall FactoryClass::DemandProduction(int this, int a2, #375 *a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-8h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    BuildingClass::AbandonProduction(this); /*0x4c9c89*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!*(_DWORD *)(this + 56) || *(_BYTE *)(this + 112))
    && *(int *)(this + 80) <= 0
    && (!*(_DWORD *)(this + 88) || !*(_BYTE *)(this + 112))
    || a4 )
  {
    *(_BYTE *)(this + 93) = 1; /*0x4c9d6e*/
    *(_BYTE *)(this + 112) = 1; /*0x4c9d72*/
    *(_DWORD *)(this + 44) = dword_A8ED84; /*0x4c9d85*/
    *(_DWORD *)(this + 56) = 0; /*0x4c9d8b*/
    *(_DWORD *)(this + 48) = v17; /*0x4c9d8e*/
    *(_DWORD *)(this + 52) = 0; /*0x4c9d92*/
    *(_DWORD *)(this + 36) = 0; /*0x4c9d95*/
    *(_DWORD *)(this + 88) = (*(int (__thiscall **)(int, #375 *))(*(_DWORD *)a2 + 140))(a2, a3); /*0x4c9da4*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      v12 = *(_DWORD *)(this + 88); /*0x4c9db1*/
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
          *(_BYTE *)(*(_DWORD *)(this + 88) + 1738) = 1; /*0x4c9dc5*/
      }
    }
    v13 = *(_DWORD *)(this + 88); /*0x4c9dcc*/
    if ( v13 ) /*0x4c9dd1*/
    {
      v14 = *(_DWORD *)(v13 + 540); /*0x4c9dd3*/
      *(_DWORD *)(this + 108) = v14; /*0x4c9ddb*/
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 132))(a2, v14); /*0x4c9de1*/
      v16 = *(_DWORD *)(this + 88); /*0x4c9de7*/
      *(_DWORD *)(this + 96) = v15; /*0x4c9dea*/
      *(_DWORD *)(v16 + 768) = v15; /*0x4c9ded*/
    }
    return *(_DWORD *)(this + 88) != 0; /*0x4c9dfc*/
  }
  else if ( *(_DWORD *)(this + 80) >= dword_8871E0->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(*(_DWORD **)(this + 108), a2) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    v5 = *(_DWORD *)(this + 72); /*0x4c9cf3*/
    v6 = *(_DWORD *)(this + 80); /*0x4c9cf6*/
    v7 = this + 64; /*0x4c9cf9*/
    if ( v6 < v5 /*0x4c9d1b*/
      || (*(_BYTE *)(v7 + 13) || !v5)
      && (v8 = *(_DWORD *)(v7 + 20), v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, v5 + v8, 0) )
    {
      v9 = *(_DWORD *)(v7 + 16); /*0x4c9d22*/
      v10 = *(_DWORD *)(v7 + 4); /*0x4c9d25*/
      *(_DWORD *)(v7 + 16) = v9 + 1; /*0x4c9d2b*/
      *(_DWORD *)(v10 + 4 * v9) = a2; /*0x4c9d2e*/
    }
    return 1; /*0x4c9d32*/
  }
}



// ==== 0x004C9E10  FactoryClass::SetObject  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::SetObject(FactoryClass *this, int a2)
{
  HouseClass *v3; // eax
  int v5; // [esp+8h] [ebp-8h]

  BuildingClass::AbandonProduction((int)this); /*0x4c9e16*/
  *(_DWORD *)&this->__pad_42[22] = a2; /*0x4c9e21*/
  v3 = *(HouseClass **)(a2 + 540); /*0x4c9e27*/
  this->balance = 0; /*0x4c9e2d*/
  this->owner = v3; /*0x4c9e30*/
  this->production[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9e38*/
  this->queuedCapacity = 0; /*0x4c9e3e*/
  this->queuedObjects[0] = v5; /*0x4c9e41*/
  this->queuedCount = 0; /*0x4c9e46*/
  this->production[0] = 54; /*0x4c9e49*/
  this->__pad_42[27] = 1; /*0x4c9e50*/
  this->isSuspended = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/
}



// ==== 0x004C9E60  FactoryClass::StartProduction  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::StartProduction(int *this, char a2)
{
  wchar_t *v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]

  if ( this->isSuspended ) /*0x4c9e60*/
  {
    LOBYTE(result) = 0; /*0x4c9e98*/
  }
  else
  {
    this->isManual = a2; /*0x4c9e71*/
    this->isSuspended = 1; /*0x4c9e74*/
    v2 = dword_A8ED84; /*0x4c9e78*/
    this->queuedCapacity = 0; /*0x4c9e80*/
    this->q02C = (int)v2; /*0x4c9e83*/
    result = v4; /*0x4c9e85*/
    this->vtable4 = v4; /*0x4c9e89*/
    LOBYTE(result) = 1; /*0x4c9e8c*/
    this->queuedCount = 0; /*0x4c9e8e*/
  }
  return result; /*0x4c9e92*/
}



// ==== 0x004C9EA0  ProductionClass::StartTimer  this=FactoryClass  sig=csp ====
int __thiscall ProductionClass::StartTimer(int this, char a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // edx
  wchar_t *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // [esp+Ch] [ebp-8h]

  v4 = *(_DWORD **)(this + 88); /*0x4c9ea7*/
  if ( !v4 ) /*0x4c9eac*/
  {
    result = *(_DWORD *)(this + 104); /*0x4c9eae*/
    if ( !result ) /*0x4c9eb3*/
      goto LABEL_24; /*0x4c9eb3*/
  }
  if ( !*(_BYTE *)(this + 112) /*0x4c9edf*/
    || v4 && *(_DWORD *)(this + 36) == 54
    || *(_DWORD *)(this + 104) != -1 && *(_DWORD *)(this + 36) == 54 )
  {
    goto LABEL_24; /*0x4c9edf*/
  }
  v5 = 0; /*0x4c9ee5*/
  *(_BYTE *)(this + 112) = 0; /*0x4c9ee7*/
  if ( v4 ) /*0x4c9eed*/
    v5 = HouseClass::CalcProductionSpeed(v4); /*0x4c9ef4*/
  v6 = v5 / 54; /*0x4c9f05*/
  if ( v6 >= 1 ) /*0x4c9f0a*/
  {
    if ( v6 > 255 ) /*0x4c9f19*/
      v6 = 255; /*0x4c9f1b*/
  }
  else
  {
    v6 = 1; /*0x4c9f0c*/
  }
  v7 = dword_A8ED84; /*0x4c9f20*/
  *(_DWORD *)(this + 56) = v6; /*0x4c9f28*/
  *(_DWORD *)(this + 44) = v7; /*0x4c9f2b*/
  *(_DWORD *)(this + 48) = v10; /*0x4c9f31*/
  *(_DWORD *)(this + 52) = v6; /*0x4c9f34*/
  if ( *(_DWORD *)(this + 88) )
  {
    v8 = *(_DWORD *)(this + 36); /*0x4c9f3e*/
    v9 = v8 == 54 ? *(_DWORD *)(this + 96) : *(_DWORD *)(this + 96) / (54 - v8);
  }
  else
  {
    v9 = 0; /*0x4c9f56*/
  }
  result = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 108) + 36) + 24))(*(_DWORD *)(this + 108) + 36); /*0x4c9f61*/
  if ( result >= v9 ) /*0x4c9f66*/
  {
    *(_BYTE *)(this + 113) = 1; /*0x4c9f6c*/
    if ( a2 ) /*0x4c9f72*/
    {
      if ( !*(_BYTE *)(this + 112) ) /*0x4c9f74*/
      {
        *(_BYTE *)(this + 113) = 1; /*0x4c9f7b*/
        *(_BYTE *)(this + 112) = 1; /*0x4c9f7f*/
        *(_DWORD *)(this + 44) = dword_A8ED84; /*0x4c9f8d*/
        result = v10; /*0x4c9f8f*/
        *(_DWORD *)(this + 56) = 0; /*0x4c9f93*/
        *(_DWORD *)(this + 48) = v10; /*0x4c9f96*/
        *(_DWORD *)(this + 52) = 0; /*0x4c9f99*/
      }
    }
    LOBYTE(result) = 1; /*0x4c9f9d*/
  }
  else
  {
LABEL_24:
    LOBYTE(result) = 0; /*0x4c9fa7*/
  }
  return result; /*0x4c9f9c*/
}



// ==== 0x004C9FB0  FactoryClass::GetBuildTimeFrames  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::GetBuildTimeFrames(FactoryClass *this)
{
  HouseClass *v1; // ecx
  int v2; // edx
  int v3; // edx
  int result; // eax

  v1 = *(HouseClass **)&this->__pad_42[22]; /*0x4c9fb0*/
  v2 = 0; /*0x4c9fb3*/
  if ( v1 ) /*0x4c9fb7*/
    v2 = HouseClass::CalcProductionSpeed(v1); /*0x4c9fbe*/
  v3 = v2 / 54; /*0x4c9fcf*/
  result = v3; /*0x4c9fd1*/
  if ( v3 < 1 ) /*0x4c9fd6*/
    return 1; /*0x4c9fd8*/
  if ( v3 > 255 ) /*0x4c9fe3*/
    return 255; /*0x4c9fe5*/
  return result; /*0x4c9fdd*/
}



// ==== 0x004C9FF0  BuildingClass::AbandonProduction  this=AbstractClass  sig=csp ====
char __thiscall BuildingClass_AbandonProduction(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wchar_t *v7; // eax
  #375 *v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 88); /*0x4c9ff9*/
  if ( !v2 ) /*0x4c9ffe*/
    return 0; /*0x4ca116*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x4ca007*/
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100)); /*0x4ca016*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 136))(*(_DWORD *)(this + 88)); /*0x4ca023*/
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 132))(v4, *(_DWORD *)(*(_DWORD *)(this + 88) + 540)); /*0x4ca037*/
  HouseClass::AddPower(*(_DWORD **)(this + 108), v5 - *(_DWORD *)(this + 96)); /*0x4ca046*/
  v6 = *(_DWORD *)(this + 104); /*0x4ca04b*/
  *(_DWORD *)(this + 96) = 0; /*0x4ca053*/
  if ( v6 ) /*0x4ca056*/
    *(_DWORD *)(this + 104) = -1; /*0x4ca058*/
  v7 = dword_A8ED84; /*0x4ca05b*/
  *(_DWORD *)(this + 56) = 0; /*0x4ca065*/
  *(_DWORD *)(this + 44) = v7; /*0x4ca068*/
  *(_DWORD *)(this + 48) = v11; /*0x4ca06e*/
  *(_DWORD *)(this + 52) = 0; /*0x4ca071*/
  v8 = *(#375 **)(this + 108); /*0x4ca074*/
  *(_DWORD *)(this + 36) = 0; /*0x4ca077*/
  *(_BYTE *)(this + 112) = 1; /*0x4ca07a*/
  *(_BYTE *)(this + 93) = 1; /*0x4ca07e*/
  if ( !(unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x4ca082*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 15 ) /*0x4ca096*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22100) = -1; /*0x4ca09b*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 1 ) /*0x4ca0ac*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22096) = -1; /*0x4ca0b1*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 2 ) /*0x4ca0c2*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22104) = -1; /*0x4ca0c7*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 6 ) /*0x4ca0d8*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22092) = -1; /*0x4ca0dd*/
  }
  ++dword_A8E7AC; /*0x4ca0eb*/
  v9 = *(_DWORD *)(this + 88); /*0x4ca0f1*/
  if ( v9 ) /*0x4ca0f6*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4ca0fc*/
  *(_DWORD *)(this + 88) = 0; /*0x4ca0ff*/
  --dword_A8E7AC; /*0x4ca109*/
  return 1; /*0x4ca108*/
}



// ==== 0x004CA120  ObjectClass::GetMember09  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetMember09(ObjectClass *this)
{
  return this->occupant; /*0x4ca123*/
}



// ==== 0x004CA130  ObjectClass::IsCliffWall  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsCliffWall(ObjectClass *this)
{
  int result; // eax

  result = 54; /*0x4ca133*/
  LOBYTE(result) = this->customSound_controller[2] && this->occupant == 54 /*0x4ca141*/
                || *(_DWORD *)&this->bombVisible != -1 && this->occupant == 54;
  return result; /*0x4ca143*/
}



// ==== 0x004CA160  AbstractClass::GetType  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetType(AbstractClass *this)
{
  return *((_DWORD *)this + 22); /*0x4ca163*/
}



// ==== 0x004CA170  SidebarClass::draw2  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::draw2(SidebarClass *this)
{
  return this->SidebarClass_field_0x68; /*0x4ca173*/
}



// ==== 0x004CA1A0  ProductionQueue::CompleteOrCancel  this=ProductionQueue  sig=csp ====
char __thiscall ProductionQueue::CompleteOrCancel(ProductionQueue *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // [esp+Ch] [ebp-8h]

  if ( *((_DWORD *)this + 22) && *((_DWORD *)this + 9) == 54 ) /*0x4ca1b6*/
  {
    *((_DWORD *)this + 22) = 0; /*0x4ca1ba*/
    *((_BYTE *)this + 112) = 1; /*0x4ca1bd*/
    *((_BYTE *)this + 93) = 1; /*0x4ca1c0*/
    *((_DWORD *)this + 9) = 0; /*0x4ca1c3*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4ca1c6*/
    *((_DWORD *)this + 14) = 0; /*0x4ca1cf*/
    *((_DWORD *)this + 11) = v2; /*0x4ca1d2*/
    *((_DWORD *)this + 12) = v4; /*0x4ca1d8*/
    *((_DWORD *)this + 13) = 0; /*0x4ca1db*/
    return 1; /*0x4ca1b8*/
  }
  else if ( *((_DWORD *)this + 26) && *((_DWORD *)this + 9) == 54 ) /*0x4ca1ec*/
  {
    *((_DWORD *)this + 26) = -1; /*0x4ca1f0*/
    *((_BYTE *)this + 112) = 1; /*0x4ca1f7*/
    *((_BYTE *)this + 93) = 1; /*0x4ca1fa*/
    *((_DWORD *)this + 9) = 0; /*0x4ca1fd*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4ca200*/
    *((_DWORD *)this + 14) = 0; /*0x4ca209*/
    *((_DWORD *)this + 11) = v3; /*0x4ca20c*/
    *((_DWORD *)this + 12) = v4; /*0x4ca212*/
    *((_DWORD *)this + 13) = 0; /*0x4ca215*/
    return 1; /*0x4ca1ee*/
  }
  else
  {
    return 0; /*0x4ca21f*/
  }
}



// ==== 0x004CA230  FactoryClass::ddtor  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::ddtor(FactoryClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4ca236*/
    return -2147467261; /*0x4ca238*/
  *a2 = 887937448; /*0x4ca246*/
  a2[1] = 298977968; /*0x4ca24e*/
  a2[2] = 1610655660; /*0x4ca257*/
  a2[3] = unk_7E982C; /*0x4ca260*/
  return 0; /*0x4ca23d*/
}



// ==== 0x004CA270  FactoryClass::LoadFromStream  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::LoadFromStream(FactoryClass *this, int *a2)
{
  int *v2; // ebp
  FactoryClass *v3; // edi
  int result; // eax
  int v5; // edx
  FactoryClass *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x4ca273*/
  v3 = this; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(this, (int)a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&v3->production[2], (int)&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor((TechnoTypeVector *)&v3->onHold, 0, 0); /*0x4ca2b2*/
      *(_DWORD *)&v3->onHold = &DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4ca2b7*/
      *(_DWORD *)&v3->__pad_42[18] = 10; /*0x4ca2bd*/
      *(_DWORD *)&v3->__pad_42[14] = 0; /*0x4ca2c4*/
      v3->AbstractClass = &FactoryClass::`vftable'; /*0x4ca2c7*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2cd*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2d4*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    this = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, FactoryClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = this; /*0x4ca2fd*/
      v13 = 0; /*0x4ca301*/
      if ( (int)this <= 0 ) /*0x4ca307*/
      {
LABEL_14:
        v12 = 0; /*0x4ca374*/
        if ( (int)v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking( /*0x4ca386*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)&v3->__pad_42[2] + 4 * v12++));
          while ( v12 < (int)this ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->owner); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->__pad_42[22]); /*0x4ca3a9*/
        return 0; /*0x4ca3ae*/
      }
      else
      {
        while ( 1 ) /*0x4ca309*/
        {
          v7 = *v2; /*0x4ca309*/
          a2 = 0; /*0x4ca315*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          v8 = *(_DWORD *)&v3->__pad_42[6]; /*0x4ca324*/
          if ( *(_DWORD *)&v3->__pad_42[14] < v8 /*0x4ca349*/
            || (v3->__pad_42[11] || !v8)
            && (v9 = *(_DWORD *)&v3->__pad_42[18], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&v3->onHold + 8))(
                 &v3->onHold,
                 v8 + v9,
                 0) )
          {
            v10 = *(_DWORD *)&v3->__pad_42[14]; /*0x4ca350*/
            v11 = *(_DWORD *)&v3->__pad_42[2]; /*0x4ca353*/
            *(_DWORD *)&v3->__pad_42[14] = v10 + 1; /*0x4ca359*/
            *(_DWORD *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = this; /*0x4ca367*/
          if ( ++v13 >= (int)this ) /*0x4ca372*/
            goto LABEL_14; /*0x4ca372*/
        }
      }
    }
  }
  return result; /*0x4ca3b0*/
}



// ==== 0x004CA3C0  FactoryClass::Seek  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::Seek(FactoryClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4ca3d2*/
  if ( result >= 0 ) /*0x4ca3d9*/
  {
    v4 = *a2; /*0x4ca3de*/
    a3 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca3ea*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->__pad_42[2] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
          break; /*0x4ca412*/
      }
      return 0; /*0x4ca41d*/
    }
  }
  return result; /*0x4ca41f*/
}



// ==== 0x004CA430  FactoryClass::Stat  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::Stat(FactoryClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  Debug::Log(); /*0x4ca43f*/
  Debug::Log(); /*0x4ca44d*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 44))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca45a*/
  Debug::Log(); /*0x4ca463*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 64))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca470*/
  Debug::Log(); /*0x4ca479*/
  Debug::Log(); /*0x4ca489*/
  Debug::Log(); /*0x4ca499*/
  Debug::Log(); /*0x4ca4a7*/
  Debug::Log(); /*0x4ca4b5*/
  Debug::Log(); /*0x4ca4c3*/
  (*((void (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x4ca4d4*/
  Debug::Log(); /*0x4ca4dd*/
  (*((void (__stdcall **)(void **))this->? + 4))(&this->?); /*0x4ca4ec*/
  Debug::Log(); /*0x4ca4f5*/
  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4ca504*/
  LOBYTE(v3) = this->isSuspended; /*0x4ca509*/
  Power::FlagProcess((Power *)a2, v3); /*0x4ca50f*/
  LOBYTE(v4) = this->__pad_42[27]; /*0x4ca514*/
  Power::FlagProcess((Power *)a2, v4); /*0x4ca51a*/
  Power::TimerProcess(this->balance); /*0x4ca525*/
  Power::TimerProcess(this->originalBalance); /*0x4ca530*/
  v5 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(this->specialItem); /*0x4ca554*/
  v7 = (*((int (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/
}



// ==== 0x004CA580  FactoryClass::Revert  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::Revert(FactoryClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == *(_DWORD *)&this->__pad_42[22] ) /*0x4ca589*/
    *(_DWORD *)&this->__pad_42[22] = 0; /*0x4ca58b*/
  return result; /*0x4ca592*/
}



// ==== 0x004CA5A0  FactoryClass::StartProduction_2  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::StartProduction_2(FactoryClass *this)
{
  int v2; // eax
  _BYTE *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char v10; // [esp-8h] [ebp-10h]

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !this->queuedCapacity || (LOBYTE(v2) = this->isSuspended, (_BYTE)v2) ) /*0x4ca5be*/
      {
        v3 = **(_BYTE ***)&this->__pad_42[2]; /*0x4ca5c3*/
        v4 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *(_DWORD *)&this->__pad_42[14] = v5; /*0x4ca5d6*/
                v6 < *(_DWORD *)&this->__pad_42[14];
                *(_DWORD *)(*(_DWORD *)&this->__pad_42[2] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&this->__pad_42[2]
                                                                                    + 4 * v6) )
          {
            ++v6; /*0x4ca5db*/
          }
        }
        v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 64))(v3); /*0x4ca5ee*/
        if ( v2 >= 0 ) /*0x4ca5f3*/
        {
          v10 = v3[3278]; /*0x4ca5ff*/
          v9 = v2; /*0x4ca600*/
          v7 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3); /*0x4ca603*/
          LOBYTE(v2) = Sidebar::StartSidebarProduction((int)this->owner, v7, v9, v10, 1); /*0x4ca60a*/
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}



// ==== 0x004CA620  FactoryClass::RemoveOneFromQueue  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::RemoveOneFromQueue(FactoryClass *this, char a2)
{
  char *p_onHold; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  p_onHold = &this->onHold; /*0x4ca624*/
  v3 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&this->onHold + 16))(&this->onHold, &a2); /*0x4ca62e*/
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = *((_DWORD *)p_onHold + 4); /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( *((_DWORD *)p_onHold + 4) = v5; /*0x4ca643*/
        v3 < *((_DWORD *)p_onHold + 4);
        *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3 - 4) = *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3) )
  {
    ++v3; /*0x4ca648*/
  }
  return 1; /*0x4ca659*/
}



// ==== 0x004CA670  FactoryClass::CountType  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::CountType(FactoryClass *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi

  v3 = 0; /*0x4ca679*/
  v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) == a2; /*0x4ca68e*/
  v5 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = *(_DWORD **)&this->__pad_42[2]; /*0x4ca69a*/
    do /*0x4ca6a6*/
    {
      if ( *v6 == a2 ) /*0x4ca69f*/
        ++v3; /*0x4ca6a1*/
      ++v6; /*0x4ca6a2*/
      --v5; /*0x4ca6a5*/
    }
    while ( v5 ); /*0x4ca6a6*/
  }
  return v3; /*0x4ca6aa*/
}



// ==== 0x004CA6B0  FactoryClass::IsQueued  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::IsQueued(FactoryClass *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca6b0*/
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = *(_DWORD **)&this->__pad_42[2]; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}



// ==== 0x004CA6E0  HouseClass::UpdateTeamProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateTeamProductionSpeed(HouseClass *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  HouseClass *v5; // ecx
  int v6; // edx
  int v7; // edx

  result = *(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca6e0*/
  for ( i = 0; i < *(int *)&stru_A83D50.__pad_C8[40]; ++i ) /*0x4ca6ed*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i); /*0x4ca6f5*/
    if ( *(HouseClass **)(v4 + 108) == this ) /*0x4ca6fb*/
    {
      v5 = *(HouseClass **)(v4 + 88); /*0x4ca6fd*/
      v6 = 0; /*0x4ca700*/
      if ( v5 ) /*0x4ca704*/
        v6 = HouseClass::CalcProductionSpeed(v5); /*0x4ca70b*/
      v7 = v6 / 54; /*0x4ca71c*/
      if ( v7 >= 1 ) /*0x4ca721*/
      {
        if ( v7 > 255 ) /*0x4ca730*/
          v7 = 255; /*0x4ca732*/
      }
      else
      {
        v7 = 1; /*0x4ca723*/
      }
      if ( v7 != *(_DWORD *)(v4 + 56) ) /*0x4ca73a*/
        *(_DWORD *)(v4 + 56) = v7; /*0x4ca73c*/
    }
    result = *(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca73f*/
  }
  return result; /*0x4ca74a*/
}



// ==== 0x004CA750  FactoryClass::StubReturn12  this=FactoryClass  sig=csp ====
int FactoryClass::StubReturn12(FactoryClass *this)
{
  return 12; /*0x4ca755*/
}



// ==== 0x004CA760  FactoryClass::StubReturn116  this=FactoryClass  sig=csp ====
int FactoryClass::StubReturn116(FactoryClass *this)
{
  return 116; /*0x4ca765*/
}



// ==== 0x004CA770  FactoryClass::CopyTo  this=FactoryClass  sig=csp ====
void **__thiscall FactoryClass::CopyTo(FactoryClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  FactoryClass *v7; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &FactoryClass::`vftable'; /*0x4ca776*/
  this->? = &FactoryClass::`vftable'; /*0x4ca77c*/
  this->? = &FactoryClass::`vftable'; /*0x4ca783*/
  this->? = &FactoryClass::`vftable'; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x4ca791*/
  v7 = this; /*0x4ca7a6*/
  v3 = (*(int (__thiscall **)(char *, FactoryClass **))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 16))( /*0x4ca7aa*/
         &stru_A83D50.__pad_C8[24],
         &v7);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_C8[40] ) /*0x4ca7ba*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca7bf*/
    for ( ; /*0x4ca7c5*/
          v3 < *(int *)&stru_A83D50.__pad_C8[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28]
                                                                                     + 4 * v3) )
    {
      ++v3; /*0x4ca7cd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x4ca7e6*/
    BuildingClass::AbandonProduction((int)this); /*0x4ca7ea*/
  v7 = this; /*0x4ca7ff*/
  v4 = (*(int (__thiscall **)(int *, FactoryClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4ca803*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4ca813*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4ca818*/
    for ( ; /*0x4ca81e*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4ca826*/
    }
  }
  v5 = *(void **)&this->__pad_42[2]; /*0x4ca838*/
  *(_DWORD *)&this->onHold = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4ca83b*/
  if ( v5 && this->__pad_42[11] ) /*0x4ca846*/
  {
    __3_YAXPAX_Z(v5); /*0x4ca84e*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x4ca856*/
  }
  this->__pad_42[11] = 0; /*0x4ca85f*/
  *(_DWORD *)&this->__pad_42[6] = 0; /*0x4ca863*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    __3_YAXPAX_Z(this); /*0x4ca877*/
  return &this->AbstractClass; /*0x4ca881*/
}



// ==== 0x004CA890  ?$DynamicVectorClass@PBVTechnoTypeClass@@::processScriptEvent  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_4CA890(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4ca896*/
  *(_DWORD *)(this + 16) = 0; /*0x4ca899*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4ca8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x4ca8a6*/
    *(_DWORD *)(this + 4) = 0; /*0x4ca8ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ca8b1*/
  *(_DWORD *)(this + 8) = 0; /*0x4ca8b4*/
}



// ==== 0x004CA8C0  ?$DynamicVectorClass@PBVTechnoTypeClass@@::checkScriptCondition  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_4CA8C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ca8c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ca8d5*/
  else
    return 0; /*0x4ca8c7*/
}



// ==== 0x004CA8E0  _VectorClass_PBVTechnoTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FactoryClass_33::Seek(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4ca8ea*/
}



// ==== 0x004CA8F0  _VectorClass_PBVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33::AddRef(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4ca8f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( m_8 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4ca905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ca90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ca914*/
    {
      ++v3; /*0x4ca916*/
      ++v4; /*0x4ca917*/
      if ( v3 >= m_8 ) /*0x4ca91c*/
        return 1; /*0x4ca91c*/
    }
  }
  return 0; /*0x4ca91e*/
}



// ==== 0x004CA930  _VectorClass_PBVTechnoTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33::Release(_VectorClass_PBVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4ca946*/
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4ca95e*/
    LOBYTE(this->m_C) = 1; /*0x4ca966*/
    if ( v4 ) /*0x4ca96a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4ca975*/
      {
        m_8 = this->m_8; /*0x4ca97c*/
        if ( a2 < m_8 ) /*0x4ca981*/
          m_8 = a2; /*0x4ca983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ca989*/
          ++i; /*0x4ca98e*/
        if ( BYTE1(this->m_C) ) /*0x4ca99b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ca9a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4ca9b7*/
      this->m_8 = a2; /*0x4ca9bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4ca9c2*/
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4ca9d2*/
    return 1; /*0x4ca9d8*/
  }
}



// ==== 0x004CA9E0  _VectorClass_PBVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FactoryClass_33::ddtor(_VectorClass_PBVTechnoTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4ca9ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ca9f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9fb*/
  }
  BYTE1(this->m_C) = 0; /*0x4ca9fe*/
  this->m_8 = 0; /*0x4caa01*/
}



// ==== 0x004CAA10  _VectorClass_PBVTechnoTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall FactoryClass_33::Read(_VectorClass_PBVTechnoTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4caa10*/
    return 0; /*0x4caa18*/
  m_8 = this->m_8; /*0x4caa1e*/
  result = 0; /*0x4caa21*/
  if ( m_8 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4caa2b*/
  {
    if ( ++result >= m_8 ) /*0x4caa3a*/
      return -1; /*0x4caa3a*/
  }
  return result; /*0x4caa1a*/
}



// ==== 0x004CAA50  _VectorClass_PBVTechnoTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FactoryClass_33::Write(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4caa50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4caa65*/
  else
    return 0; /*0x4caa57*/
}



// ==== 0x004CAA70  ?$DynamicVectorClass@PBVTechnoTypeClass@@::executeScriptAction  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_4CAA70(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4caa7c*/
  {
    this->IsInitialized = 0; /*0x4caa82*/
    if ( a3 ) /*0x4caa88*/
      v4 = a3; /*0x4caa9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4caa9a*/
    this->IsInitialized = 1; /*0x4caaa2*/
    if ( !v4 ) /*0x4caaa6*/
      return 0; /*0x4cab1a*/
    if ( this->Items ) /*0x4caaa8*/
    {
      v5 = this->q008; /*0x4caaaf*/
      if ( a2 < v5 ) /*0x4caab4*/
        v5 = a2; /*0x4caab6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4caabc*/
        ++i; /*0x4caac1*/
      if ( this->IsAllocated ) /*0x4caace*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4caad9*/
        this->Items = 0; /*0x4caae1*/
      }
    }
    this->Items = v4; /*0x4caaea*/
    this->q008 = a2; /*0x4caaf2*/
    this->IsAllocated = a3 == 0; /*0x4caaf5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4caafe*/
  }
  v7 = this->q008; /*0x4cab01*/
  if ( v7 < this->Items ) /*0x4cab09*/
    this->Items = v7; /*0x4cab0b*/
  return 1; /*0x4cab0e*/
}



// ==== 0x004CAB20  ?$DynamicVectorClass@PBVTechnoTypeClass@@::validateScriptArgs  this=DynamicVector  sig=csp ====
int __thiscall AbstractClass::sub_4CAB20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4cab20*/
  result = 0; /*0x4cab23*/
  if ( v2 <= 0 ) /*0x4cab28*/
    return -1; /*0x4cab3f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4cab2e*/
  {
    if ( ++result >= v2 ) /*0x4cab3d*/
      return -1; /*0x4cab3d*/
  }
  return result; /*0x4cab42*/
}



// ==== 0x004CAB50  _VectorClass_PBVTechnoTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FactoryClass_33::QueryInterface(_VectorClass_PBVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4cab53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4cab56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x4cab68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4cab70*/
  }
  BYTE1(this->m_C) = 0; /*0x4cab7b*/
  this->m_8 = 0; /*0x4cab81*/
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    __3_YAXPAX_Z(this); /*0x4cab8b*/
  return this->__pad_0; /*0x4cab95*/
}



// ==== 0x004CABA0  ?$DynamicVectorClass@PBVTechnoTypeClass@@::resetScriptState  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_4CABA0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4caba3*/
  *Block = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4caba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4cabb0*/
  {
    __3_YAXPAX_Z(v3); /*0x4cabb8*/
    *(Block + 1) = 0; /*0x4cabc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4cabcb*/
  *(Block + 2) = 0; /*0x4cabd1*/
  if ( (a2 & 1) != 0 ) /*0x4cabd8*/
    __3_YAXPAX_Z(Block); /*0x4cabdb*/
  return Block; /*0x4cabe5*/
}



// ==== 0x004CABF0  TechnoTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TechnoTypeVector::Constructor(TechnoTypeVector *this, int a2, int a3)
{
  this->TechnoTypeVector_field_0x04 = 0; /*0x4cabfb*/
  this->Capacity = a2; /*0x4cabfe*/
  this->IsInitialized = 1; /*0x4cac01*/
  this->IsAllocated = 0; /*0x4cac05*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4cac08*/
  if ( a2 ) /*0x4cac0e*/
  {
    if ( a3 ) /*0x4cac16*/
    {
      this->TechnoTypeVector_field_0x04 = a3; /*0x4cac18*/
      return this->__pad_0; /*0x4cac1e*/
    }
    this->TechnoTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4cac2d*/
    this->IsAllocated = 1; /*0x4cac30*/
  }
  return this->__pad_0; /*0x4cac1d*/
}



// ==== 0x004CAC40  Math::Sqrt  this=Math  sig=csp ====
int __cdecl Math::Sqrt(double a1)
{
  __int16 v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  float v7; // [esp+4h] [ebp+4h]

  v2 = a1; /*0x4cac40*/
  v3 = a1 < 0.0; /*0x4cac44*/
  v4 = 0; /*0x4cac44*/
  v5 = a1 == 0.0; /*0x4cac44*/
  LOWORD(result) = v1; /*0x4cac4a*/
  if ( a1 != 0.0 ) /*0x4cac4f*/
  {
    if ( a1 <= 0.0 ) /*0x4cac65*/
      v2 = a1 * -1.0; /*0x4cac67*/
    v7 = v2; /*0x4cac6d*/
    return (((__int16)((LODWORD(v7) >> 23) - 127) >> 1) + 127) << 23; /*0x4caca0*/
  }
  return result; /*0x4cac59*/
}



// ==== 0x004CACB0  Math::SinCos  this=Math  sig=csp ====
int __cdecl Math::SinCos(double a1)
{
  int v1; // eax
  char v2; // cl
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * flt_8223B0); /*0x4cacba*/
  v2 = v1 & 1; /*0x4cacc4*/
  result = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( result < 0 )
    result = (((_WORD)result - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 ) /*0x4cace0*/
  {
    if ( result < 0x1FFF ) /*0x4cace7*/
      ++result; /*0x4cace9*/
  }
  return result; /*0x4cacf1*/
}



// ==== 0x004CAD00  Math::ArcTan2  this=RecoilData  sig=csp ====
int __cdecl Math::ArcTan2(double a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * flt_8223B4); /*0x4cad0a*/
  v2 = v1 & 1; /*0x4cad14*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    result = v3 + 2048; /*0x4cad30*/
  else
    result = v3 + 10240; /*0x4cad29*/
  if ( v2 ) /*0x4cad37*/
  {
    if ( result < 10239 ) /*0x4cad3e*/
      ++result; /*0x4cad40*/
  }
  return result; /*0x4cad48*/
}



// ==== 0x004CAD50  Math::Sin  this=Math  sig=csp ====
int __cdecl Math::Sin(double a1)
{
  int v1; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * 651.8986469044033); /*0x4cad5a*/
  result = v1 & 0x80000FFF; /*0x4cad5f*/
  if ( result < 0 )
    return (((_WORD)result - 1) | 0xFFFFF000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return result; /*0x4cad7b*/
}



// ==== 0x004CAD80  BuildingLight::CalcIntensity  this=BuildingLight  sig=csp ====
int __cdecl BuildingLight::CalcIntensity(double a1)
{
  int v1; // eax

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cad90*/
  return 4 * v1; /*0x4cada1*/
}



// ==== 0x004CADB0  Math::ArcTan2_Table  this=Math  sig=csp ====
int __cdecl Math::ArcTan2_Table(double a1)
{
  int v1; // eax

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cadc0*/
  return 4 * v1; /*0x4cadd7*/
}



// ==== 0x004CADE0  Math::ArcTan  this=Math  sig=csp ====
int __cdecl Math::ArcTan(double a1)
{
  int v2; // eax
  __int16 v3; // fps
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  int result; // eax
  float v8; // [esp+4h] [ebp+4h]

  v8 = a1; /*0x4cade4*/
  LOWORD(v2) = Math::RoundToInt(a1 / flt_8650B8); /*0x4cadee*/
  result = abs32(v2); /*0x4cadf6*/
  v4 = v8 < 0.0; /*0x4cae12*/
  v5 = 0; /*0x4cae12*/
  v6 = v8 == 0.0; /*0x4cae12*/
  LOWORD(result) = v3; /*0x4cae18*/
  return result; /*0x4cae21*/
}



// ==== 0x004CAE30  Math::CalcAngle  this=AbstractClass  sig=csp ====
int __cdecl Math::CalcAngle(double a1, double a2)
{
  __int16 v2; // fps
  double v3; // st7
  char v4; // c3
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  __int16 v9; // fps
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int v13; // eax
  __int16 v14; // fps
  bool v15; // c0
  char v16; // c2
  bool v17; // c3
  float v18; // [esp+0h] [ebp-4h]
  float v19; // [esp+10h] [ebp+Ch]

  v18 = a2; /*0x4cae35*/
  v19 = a1; /*0x4cae3d*/
  v3 = v19; /*0x4cae4b*/
  if ( v4 ) /*0x4cae54*/
  {
    v5 = v3 < 0.0; /*0x4cae56*/
    v6 = 0; /*0x4cae56*/
    v7 = v3 == 0.0; /*0x4cae56*/
    LOWORD(result) = v2; /*0x4cae5c*/
    if ( v3 != 0.0 ) /*0x4cae61*/
    {
      v10 = v19 < 0.0; /*0x4cae6f*/
      v11 = 0; /*0x4cae6f*/
      v12 = v19 == 0.0; /*0x4cae6f*/
      LOWORD(result) = v9; /*0x4cae75*/
    }
  }
  else
  {
    LOWORD(v13) = Math::RoundToInt(v3 / v18 / flt_8650B8); /*0x4cae96*/
    result = abs32(v13); /*0x4cae9e*/
    v15 = v19 < 0.0; /*0x4caed1*/
    v16 = 0; /*0x4caed1*/
    v17 = v19 == 0.0; /*0x4caed1*/
    LOWORD(result) = v14; /*0x4caed7*/
  }
  return result; /*0x4cae6a*/
}



// ==== 0x004CAEF0  nullsub_131  this=-  sig=ida-proto ====
void nullsub_131()
{
  ; /*0x4caef0*/
}



// ==== 0x004CAF00  nullsub_132  this=-  sig=ida-proto ====
void nullsub_132()
{
  ; /*0x4caf00*/
}



// ==== 0x004CAF10  nullsub_133  this=-  sig=ida-proto ====
void nullsub_133()
{
  ; /*0x4caf10*/
}



// ==== 0x004CAF20  VoxelAnimClass::ProcessFrame  this=VoxelAnimClass  sig=csp ====
unsigned int VoxelAnimClass::ProcessFrame(VoxelAnimClass *this)
{
  int v1; // esi
  _DWORD *v2; // edx
  int v3; // edi
  double v4; // st7
  double v5; // st7
  unsigned int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int result; // eax
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x4caf23*/
  v2 = &unk_86D0BC; /*0x4caf25*/
  v3 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v4 = COERCE_FLOAT((v1 | 0xFE000) << 10); /*0x4caf3d*/
    if ( v4 == 0.0 ) /*0x4caf4c*/
    {
      v5 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v4 <= 0.0 ) /*0x4caf63*/
        v4 = v4 * -1.0; /*0x4caf65*/
      v13 = v4; /*0x4caf6b*/
      v6 = (unsigned int)&unk_7FFFFF & LODWORD(v13); /*0x4caf75*/
      v7 = (LODWORD(v13) >> 23) - 127; /*0x4caf7e*/
      if ( (v7 & 1) != 0 ) /*0x4caf83*/
        v6 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4caf85*/
      v5 = COERCE_FLOAT(((((__int16)v7 >> 1) + 127) << 23) + dword_8650BC[v6 >> 10]); /*0x4cafa7*/
    }
    v14 = v5; /*0x4cafab*/
    *(v2 - 0x2000) = (unsigned int)&unk_7FFFFF & LODWORD(v14); /*0x4cafc7*/
    v8 = COERCE_FLOAT((v1 | 0x100000) << 10); /*0x4cafcd*/
    if ( v8 == 0.0 ) /*0x4cafdc*/
    {
      v9 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v8 <= 0.0 ) /*0x4caff3*/
        v8 = v8 * -1.0; /*0x4caff5*/
      v15 = v8; /*0x4caffb*/
      v10 = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb005*/
      v11 = (LODWORD(v15) >> 23) - 127; /*0x4cb00e*/
      if ( (v11 & 1) != 0 ) /*0x4cb013*/
        v10 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4cb015*/
      v9 = COERCE_FLOAT(((((__int16)v11 >> 1) + 127) << 23) + dword_8650BC[v10 >> 10]); /*0x4cb037*/
    }
    v16 = v9; /*0x4cb03b*/
    ++v2; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & LODWORD(v16); /*0x4cb046*/
    ++v1; /*0x4cb04b*/
    *(v2 - 1) = (unsigned int)&unk_7FFFFF & LODWORD(v16); /*0x4cb04c*/
    --v3; /*0x4cb04f*/
  }
  while ( v3 ); /*0x4cb050*/
  return result; /*0x4cb056*/
}



// ==== 0x004CB150  ComputeDistortionVariant  this=-  sig=csp ====
int __stdcall ComputeDistortionVariant(float a1)
{
  int v1; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb15a*/
  result = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( result < 0 )
    return (((_WORD)result - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  return result; /*0x4cb190*/
}



// ==== 0x004CB1A0  ComputeChronosphereDistortion  this=-  sig=csp ====
int __stdcall ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  signed int v2; // eax

  LOWORD(v1) = Math::RoundToInt(flt_8223B4 * a1); /*0x4cb1aa*/
  v2 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v2 >= 0 ) /*0x4cb1be*/
    return v2 + 2048; /*0x4cb1be*/
  v2 = (((_WORD)v2 - 1) | 0xFFFFE000) + 1; /*0x4cb1c6*/
  if ( v2 >= 0 ) /*0x4cb1c7*/
    return v2 + 2048; /*0x4cb1d0*/
  else
    return v2 + 10240; /*0x4cb1c9*/
}



// ==== 0x004CB3D0  globalHelper_0CB3D0  this=-  sig=csp ====
double __stdcall sub_4CB3D0(float a1, float a2)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax

  v3 = a1; /*0x4cb3da*/
  if ( v4 ) /*0x4cb3e3*/
  {
    if ( v3 == 0.0 ) /*0x4cb3f0*/
    {
      return 0.0; /*0x4cb3f2*/
    }
    else if ( a1 <= 0.0 ) /*0x4cb40a*/
    {
      return -1.5707964; /*0x4cb415*/
    }
    else
    {
      return 1.5707964; /*0x4cb40c*/
    }
  }
  else
  {
    v6 = abs32(Math::RoundToInt(v3 / a2 / flt_8650B8)); /*0x4cb430*/
    if ( v6 >= 4097 ) /*0x4cb437*/
      result = 1.5707964; /*0x4cb442*/
    else
      result = flt_8610B4[v6]; /*0x4cb439*/
    if ( a2 < 0.0 ) /*0x4cb457*/
      result = 3.141592653589793 - result; /*0x4cb459*/
    if ( a1 < 0.0 ) /*0x4cb46e*/
      return -result; /*0x4cb470*/
  }
  return result; /*0x4cb3f8*/
}



// ==== 0x004CB4C0  sub_4CB4C0  this=-  sig=ida-proto ====
// write access to const memory has been detected, the output may be wrong!
void sub_4CB4C0()
{
  PVOID BaseAddress; // esi
  SIZE_T RegionSize; // edi
  HANDLE CurrentProcess; // eax
  DWORD flOldProtect; // [esp+10h] [ebp-20h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+14h] [ebp-1Ch] BYREF

  memset(&Buffer, 0, sizeof(Buffer)); /*0x4cb4d4*/
  if ( VirtualQuery(Math::SinCos, &Buffer, 0x1Cu) ) /*0x4cb4e5*/
  {
    BaseAddress = Buffer.BaseAddress; /*0x4cb50a*/
    RegionSize = Buffer.RegionSize; /*0x4cb50c*/
    flOldProtect = 0; /*0x4cb50e*/
    if ( VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, 8u, &flOldProtect) ) /*0x4cb516*/
    {
      *(_DWORD *)Math::SinCos = 0; /*0x4cb53d*/
      if ( !VirtualProtect(BaseAddress, RegionSize, 0x10u, &flOldProtect) ) /*0x4cb549*/
      {
        GetLastError(); /*0x4cb550*/
        Debug::Log(); /*0x4cb55c*/
      }
      CurrentProcess = GetCurrentProcess(); /*0x4cb568*/
      FlushInstructionCache(CurrentProcess, 0, 0); /*0x4cb56f*/
    }
    else
    {
      GetLastError(); /*0x4cb51d*/
      Debug::Log(); /*0x4cb529*/
    }
  }
}



// ==== 0x004CB580  ObjectClass::method_4CB580  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB580(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb58d*/
  LOWORD(this->?) = 1; /*0x4cb598*/
  HIWORD(this->?) = 1; /*0x4cb59c*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb5a0*/
  vtable1_high = HIWORD(this->?); /*0x4cb5b1*/
  this->? = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb5b9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb5c5*/
  this->? = 0; /*0x4cb5c8*/
  return (char *)this; /*0x4cb5c7*/
}



// ==== 0x004CB5E0  String::AllocAndCopy  this=AbstractClass  sig=csp ====
char *__thiscall String_AllocAndCopy(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb5ed*/
  *((_WORD *)Destination + 2) = 2; /*0x4cb5f4*/
  *((_WORD *)Destination + 3) = 1; /*0x4cb5fa*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb600*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb611*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb613*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb619*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb625*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb628*/
  return Destination; /*0x4cb627*/
}



// ==== 0x004CB640  ObjectClass::method_4CB640  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB640(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb64d*/
  LOWORD(this->?) = 3; /*0x4cb654*/
  HIWORD(this->?) = 2; /*0x4cb65a*/
  v4 = (char *)__2_YAPAXI_Z(2u); /*0x4cb660*/
  vtable1_high = HIWORD(this->?); /*0x4cb671*/
  this->? = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb679*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb679*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb685*/
  this->? = 0; /*0x4cb688*/
  return (char *)this; /*0x4cb687*/
}



// ==== 0x004CB6A0  ObjectClass::method_4CB6A0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB6A0(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb6ad*/
  LOWORD(this->?) = 4; /*0x4cb6b4*/
  HIWORD(this->?) = 2; /*0x4cb6ba*/
  v4 = (char *)__2_YAPAXI_Z(2u); /*0x4cb6c0*/
  vtable1_high = HIWORD(this->?); /*0x4cb6d1*/
  this->? = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb6d9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb6e5*/
  this->? = 0; /*0x4cb6e8*/
  return (char *)this; /*0x4cb6e7*/
}



// ==== 0x004CB700  NetMessage::Pack4  this=AbstractClass  sig=csp ====
char *__thiscall NetMessage_Pack4(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb70d*/
  *((_WORD *)Destination + 2) = 5; /*0x4cb714*/
  *((_WORD *)Destination + 3) = 4; /*0x4cb71a*/
  v4 = (char *)__2_YAPAXI_Z(4u); /*0x4cb720*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb731*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb733*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb739*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb739*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb745*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb748*/
  return Destination; /*0x4cb747*/
}



// ==== 0x004CB760  ObjectClass::TerrainInitMap  this=AbstractClass  sig=csp ====
char *__thiscall Map_TerrainInit(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb76d*/
  *((_WORD *)Destination + 2) = 6; /*0x4cb774*/
  *((_WORD *)Destination + 3) = 4; /*0x4cb77a*/
  v4 = (char *)__2_YAPAXI_Z(4u); /*0x4cb780*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb791*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb793*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb799*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb799*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb7a5*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb7a8*/
  return Destination; /*0x4cb7a7*/
}



// ==== 0x004CB7C0  ObjectClass::BuildResultPacket  this=AbstractClass  sig=csp ====
char *__thiscall BuildResultPacket(char *Destination, char *Source, const char *a3)
{
  unsigned int v4; // kr04_4
  char *v5; // eax
  unsigned __int16 v6; // cx
  char v7; // dl
  int v8; // ecx
  char *v9; // edi

  strncpy(Destination, Source, 4u); /*0x4cb7cd*/
  *((_WORD *)Destination + 2) = 7; /*0x4cb7dd*/
  v4 = strlen(a3) + 1; /*0x4cb7e3*/
  *((_WORD *)Destination + 3) = v4; /*0x4cb7e9*/
  v5 = (char *)__2_YAPAXI_Z((unsigned __int16)v4); /*0x4cb7f3*/
  v6 = *((_WORD *)Destination + 3); /*0x4cb7fc*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb800*/
  v7 = v6; /*0x4cb803*/
  v8 = v6 >> 2; /*0x4cb808*/
  qmemcpy(v5, a3, 4 * v8); /*0x4cb80b*/
  v9 = &v5[4 * v8]; /*0x4cb80b*/
  qmemcpy(v9, &a3[4 * v8], v7 & 3); /*0x4cb814*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb817*/
  return Destination; /*0x4cb816*/
}



// ==== 0x004CB830  NetMessage::Pack  this=AbstractClass  sig=csp ====
char *__thiscall NetMessage_Pack(char *Destination, char *Source, char *a3, unsigned __int16 a4)
{
  char *v5; // eax
  unsigned int v6; // edx
  char *v7; // edi

  strncpy(Destination, Source, 4u); /*0x4cb83d*/
  *((_WORD *)Destination + 2) = 20; /*0x4cb846*/
  *((_WORD *)Destination + 3) = a4; /*0x4cb84c*/
  v5 = (char *)__2_YAPAXI_Z(a4); /*0x4cb856*/
  v6 = *((unsigned __int16 *)Destination + 3); /*0x4cb867*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb869*/
  qmemcpy(v5, a3, 4 * (v6 >> 2)); /*0x4cb86f*/
  v7 = &v5[4 * (v6 >> 2)]; /*0x4cb86f*/
  qmemcpy(v7, &a3[4 * (v6 >> 2)], v6 & 3); /*0x4cb87b*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb87e*/
  return Destination; /*0x4cb87d*/
}



// ==== 0x004CB890  ResultNode::Init  this=ResultNode  sig=csp ====
int __thiscall ResultNode::Init(ResultNode *this)
{
  int result; // eax

  __3_YAXPAX_Z(*((void **)this + 2)); /*0x4cb897*/
  *((_DWORD *)this + 2) = 0; /*0x4cb89f*/
  return result; /*0x4cb8a6*/
}



// ==== 0x004CB8B0  ObjectClass::method_4CB8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4CB8B0(ObjectClass *this)
{
  __int16 v2; // ax
  u_short vtable1_high; // cx
  int result; // eax

  switch ( LOWORD(this->?) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      *(_WORD *)this->? = htons(*(_WORD *)this->?); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      *(_DWORD *)this->? = htonl(*(_DWORD *)this->?); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons((u_short)this->?); /*0x4cb8ec*/
  vtable1_high = HIWORD(this->?); /*0x4cb8f6*/
  LOWORD(this->?) = v2; /*0x4cb8fa*/
  result = htons(vtable1_high); /*0x4cb8ff*/
  HIWORD(this->?) = result; /*0x4cb904*/
  return result; /*0x4cb908*/
}



// ==== 0x004CB920  File::Dispatch  this=File  sig=csp ====
__int16 __thiscall File::Dispatch(File *this)
{
  __int16 v2; // ax
  u_short v3; // cx
  unsigned __int16 v4; // ax
  int v5; // eax

  v2 = ntohs(*(_WORD *)this->__pad_6); /*0x4cb928*/
  v3 = *(_WORD *)&this->File_field_0x2[2]; /*0x4cb92d*/
  *(_WORD *)this->__pad_6 = v2; /*0x4cb931*/
  v4 = ntohs(v3); /*0x4cb936*/
  *(_WORD *)&this->File_field_0x2[2] = v4; /*0x4cb93b*/
  v5 = v4 - 3; /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0: /*0x4cb94c*/
    case 1: /*0x4cb94c*/
      LOWORD(v5) = ntohs(**(_WORD **)&this->__pad_6[2]); /*0x4cb95a*/
      **(_WORD **)&this->__pad_6[2] = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2: /*0x4cb94c*/
    case 3: /*0x4cb94c*/
      v5 = ntohl(**(_DWORD **)&this->__pad_6[2]); /*0x4cb96d*/
      **(_DWORD **)&this->__pad_6[2] = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/
}



// ==== 0x004CB990  sub_4CB990  this=-  sig=ida-proto ====
int sub_4CB990()
{
  dword_8B3B38 = 0; /*0x4cb992*/
  dword_8B3B3C = 0; /*0x4cb997*/
  dword_8B3B40 = 0; /*0x4cb99c*/
  dword_8B3B44 = 0; /*0x4cb9a1*/
  return 0; /*0x4cb9a6*/
}



// ==== 0x004CB9B0  sub_4CB9B0  this=-  sig=ida-proto ====
void sub_4CB9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cb9bc*/
  dbl_8B3B50 = Math::Sqrt(v0 + v0); /*0x4cb9ce*/
}



// ==== 0x004CB9E0  sub_4CB9E0  this=-  sig=ida-proto ====
void sub_4CB9E0()
{
  dbl_8B3BA0 = dbl_8B3B50 / 60.0; /*0x4cb9ec*/
}



// ==== 0x004CBA00  sub_4CBA00  this=-  sig=ida-proto ====
void sub_4CBA00()
{
  dbl_8B3B88 = 1.0 / dbl_8B3BA0; /*0x4cba0c*/
}



// ==== 0x004CBA20  sub_4CBA20  this=-  sig=ida-proto ====
void sub_4CBA20()
{
  dbl_8B3B80 = 0.0174532925199433 * 45.0; /*0x4cba2c*/
}



// ==== 0x004CBA40  sub_4CBA40  this=-  sig=ida-proto ====
void sub_4CBA40()
{
  dbl_8B3B58 = 0.0174532925199433 * 60.0; /*0x4cba4c*/
}



// ==== 0x004CBA60  sub_4CBA60  this=-  sig=ida-proto ====
void sub_4CBA60()
{
  dbl_8B3B30 = 0.0174532925199433 * 90.0; /*0x4cba6c*/
}



// ==== 0x004CBA80  sub_4CBA80  this=-  sig=ida-proto ====
__int64 sub_4CBA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3B30 - dbl_8B3B58); /*0x4cba92*/
  result = Math::RoundToInt(v0 * dbl_8B3B50 * 0.5); /*0x4cbaa6*/
  dword_8B3BA8 = result; /*0x4cbaab*/
  return result; /*0x4cbab0*/
}



// ==== 0x004CBAC0  sub_4CBAC0  this=-  sig=ida-proto ====
void sub_4CBAC0()
{
  dbl_8B3B60 = Math::ArcTan((double)dword_8B3BA8 * 0.00390625); /*0x4cbad7*/
}



// ==== 0x004CBAF0  sub_4CBAF0  this=-  sig=ida-proto ====
void sub_4CBAF0()
{
  dbl_8B3B78 = Math::ArcTan((double)(2 * dword_8B3BA8) / dbl_8B3B50); /*0x4cbb12*/
}



// ==== 0x004CBB20  sub_4CBB20  this=-  sig=ida-proto ====
__int64 sub_4CBB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3BA8) + 0.5); /*0x4cbb3b*/
  dword_8B3B9C = result; /*0x4cbb40*/
  return result; /*0x4cbb46*/
}



// ==== 0x004CBB50  sub_4CBB50  this=-  sig=ida-proto ====
int sub_4CBB50()
{
  dword_8B3B48 = 0; /*0x4cbb52*/
  return 0; /*0x4cbb5e*/
}



// ==== 0x004CBB60  sub_4CBB60  this=-  sig=ida-proto ====
int sub_4CBB60()
{
  dword_8B3B68 = 0; /*0x4cbb62*/
  dword_8B3B6C = 0; /*0x4cbb67*/
  dword_8B3B70 = 0; /*0x4cbb6c*/
  return 0; /*0x4cbb71*/
}



// ==== 0x004CBB80  sub_4CBB80  this=-  sig=ida-proto ====
int sub_4CBB80()
{
  dword_8B3B98 = 0; /*0x4cbb85*/
  dword_8B3B90 = 128; /*0x4cbb8f*/
  dword_8B3B94 = 128; /*0x4cbb94*/
  return 128; /*0x4cbb99*/
}



// ==== 0x004CBBA0  FootClass::FindPathWithRetry  this=FootClass  sig=csp ====
void *__thiscall FootClass::FindPathWithRetry(FootClass *this, __int16 *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v8; // eax
  int v9; // edi
  int v11; // [esp+8h] [ebp-14h] BYREF
  int v12; // [esp+Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+10h] [ebp-Ch] BYREF

  v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *, _DWORD))this->TechnoClass + 19))(this, v13, 0); /*0x4cbbb2*/
  v9 = a3; /*0x4cbbb7*/
  LOWORD(v12) = *v8 / 256; /*0x4cbbc9*/
  HIWORD(v12) = v8[1] / 256; /*0x4cbbdd*/
  v11 = v12; /*0x4cbbe8*/
  if ( !a3 ) /*0x4cbbec*/
    return 0; /*0x4cbbef*/
  v11 = *WalkPathClassPath(&a3, &v11, a6, this->pathDirections); /*0x4cbc20*/
  return FindPathWithRetry((int)&stru_87E790.__pad_D8[80], (__int16 *)&v11, a2, (char *)this, v9, -1, -1, a7); /*0x4cbbee*/
}



// ==== 0x004CBC40  ObjectClass::WalkPathfindingLine  this=ObjectClass  sig=csp ====
int *__thiscall WalkPathfindingLine(ObjectClass *this, int *a2, int a3, int *a4, int a5, int a6)
{
  double v6; // st7
  int v7; // eax
  int *v8; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  char v14; // bl
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int (__thiscall **vtable0)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v19; // eax
  int v20; // edi
  int (__thiscall **v21)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v22; // eax
  int v23; // edi
  int (__thiscall **v24)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v25; // eax
  double v27; // [esp+8h] [ebp-34h]
  double v28; // [esp+10h] [ebp-2Ch]
  int v29; // [esp+28h] [ebp-14h]
  int v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+30h] [ebp-Ch]
  int v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v7 = a3; /*0x4cbc43*/
  v8 = a4; /*0x4cbc4b*/
  v10 = *(__int16 *)a3; /*0x4cbc5d*/
  a3 = *(__int16 *)a4; /*0x4cbc60*/
  __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc64*/
  v11 = *(__int16 *)(v7 + 2); /*0x4cbc68*/
  a3 = v10; /*0x4cbc6c*/
  __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc70*/
  v12 = *((__int16 *)a4 + 1); /*0x4cbc74*/
  __asm { fsubp st(1), st } /*0x4cbc78*/
  a3 = v11; /*0x4cbc7a*/
  __asm /*0x4cbc7e*/
  {
    fstp [esp+34h+var_2C]; double
    fild dword ptr [esp+34h+arg_4]
  }
  a3 = v12; /*0x4cbc86*/
  __asm /*0x4cbc8a*/
  {
    fild dword ptr [esp+34h+arg_4]
    fsubp st(1), st
    fstp [esp+34h+var_34]; double
  }
  Math::CalcAngle(v27, v28); /*0x4cbc93*/
  __asm { fsub ds:dbl_7E2820 } /*0x4cbc98*/
  __asm { fmul ds:dbl_7E2818 }
  LOWORD(a3) = Math::RoundToInt(v6); /*0x4cbcac*/
  v13 = a5; /*0x4cbcb8*/
  v29 = a5; /*0x4cbcc1*/
  v14 = ((((((unsigned int)a3 >> 12) + 1) >> 1) ^ 0xFC) - 1) & 7; /*0x4cbccb*/
  if ( a5 >= a6 ) /*0x4cbcd0*/
  {
LABEL_24:
    *a2 = dword_8B3B48; /*0x4cbea7*/
    return a2; /*0x4cbeba*/
  }
  while ( 1 ) /*0x4cbcdc*/
  {
    v15 = *v8; /*0x4cbcdc*/
    a3 = *v8; /*0x4cbce0*/
    if ( v13 > 0 ) /*0x4cbce4*/
    {
      v16 = v13; /*0x4cbce8*/
      do /*0x4cbd16*/
      {
        --v16; /*0x4cbd08*/
        HIWORD(v30) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[(v14 & 7) + 82]); /*0x4cbd09*/
        LOWORD(v15) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[(v14 & 7) + 82]); /*0x4cbd0e*/
        LOWORD(v30) = v15; /*0x4cbd03*/
        a3 = v30; /*0x4cbd12*/
      }
      while ( v16 ); /*0x4cbd16*/
    }
    a5 = 0; /*0x4cbd1b*/
    if ( (v14 & 1) != 0 ) /*0x4cbd23*/
    {
      if ( 2 * v13 > 0 ) /*0x4cbd2e*/
      {
        v17 = (v14 + 3) & 7; /*0x4cbd37*/
        while ( 1 ) /*0x4cbd55*/
        {
          vtable0 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbd55*/
          LOWORD(v31) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4cbd5c*/
          HIWORD(v31) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4cbd69*/
          a3 = v31; /*0x4cbd79*/
          v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbd7d*/
          if ( !vtable0[107](this, v19, (v14 + 3) & 7, -1, 0, 1) ) /*0x4cbd85*/
            break; /*0x4cbd85*/
          v13 = v29; /*0x4cbd93*/
          if ( ++a5 >= 2 * v29 ) /*0x4cbda5*/
            goto LABEL_23; /*0x4cbda5*/
          LOWORD(v15) = a3; /*0x4cbd3c*/
        }
LABEL_26:
        *a2 = a3; /*0x4cbed1*/
        return a2; /*0x4cbed1*/
      }
      goto LABEL_23; /*0x4cbd2e*/
    }
    if ( v13 > 0 ) /*0x4cbdae*/
      break; /*0x4cbdae*/
LABEL_18:
    a5 = 0; /*0x4cbe1e*/
    if ( v13 > 0 ) /*0x4cbe28*/
    {
      v23 = (v14 - 4) & 7; /*0x4cbe2d*/
      while ( 1 ) /*0x4cbe4b*/
      {
        v24 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbe4b*/
        LOWORD(v33) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4cbe52*/
        HIWORD(v33) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4cbe5f*/
        a3 = v33; /*0x4cbe6f*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbe73*/
        if ( !v24[107](this, v25, (v14 - 4) & 7, -1, 0, 1) ) /*0x4cbe7b*/
          goto LABEL_26; /*0x4cbe83*/
        v13 = v29; /*0x4cbe89*/
        if ( ++a5 >= v29 ) /*0x4cbe94*/
          break; /*0x4cbe94*/
        LOWORD(v15) = a3; /*0x4cbe32*/
      }
    }
LABEL_23:
    v29 = ++v13; /*0x4cbe9d*/
    if ( v13 >= a6 ) /*0x4cbea1*/
      goto LABEL_24; /*0x4cbea1*/
    v8 = a4; /*0x4cbcd8*/
  }
  v20 = (v14 + 2) & 7; /*0x4cbdb3*/
  while ( 1 ) /*0x4cbdbe*/
  {
    v21 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbdbe*/
    LOWORD(v32) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x4cbdd0*/
    HIWORD(v32) = HIWORD(g_DDrawSurfaceManager.scenario[v20 + 82]) + HIWORD(a3); /*0x4cbdd9*/
    a3 = v32; /*0x4cbde8*/
    v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbdf3*/
    if ( !v21[107](this, v22, (v14 + 2) & 7, -1, 0, 1) ) /*0x4cbdfb*/
      break; /*0x4cbdfb*/
    v13 = v29; /*0x4cbe0d*/
    ++a5; /*0x4cbe12*/
    LOWORD(v15) = a3; /*0x4cbe18*/
    if ( a5 >= v29 ) /*0x4cbe1c*/
      goto LABEL_18; /*0x4cbe1c*/
  }
  *a2 = a3; /*0x4cbec8*/
  return a2; /*0x4cbeb1*/
}



// ==== 0x004CBEF0  sub_4CBEF0  this=-  sig=ida-proto ====
int sub_4CBEF0()
{
  dword_8B3BB8 = 0; /*0x4cbef2*/
  dword_8B3BBC = 0; /*0x4cbef7*/
  dword_8B3BC0 = 0; /*0x4cbefc*/
  dword_8B3BC4 = 0; /*0x4cbf01*/
  return 0; /*0x4cbf06*/
}



// ==== 0x004CBF10  sub_4CBF10  this=-  sig=ida-proto ====
void sub_4CBF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cbf1c*/
  dbl_8B3BD0 = Math::Sqrt(v0 + v0); /*0x4cbf2e*/
}



// ==== 0x004CBF40  sub_4CBF40  this=-  sig=ida-proto ====
void sub_4CBF40()
{
  dbl_8B3C20 = dbl_8B3BD0 / 60.0; /*0x4cbf4c*/
}



// ==== 0x004CBF60  sub_4CBF60  this=-  sig=ida-proto ====
void sub_4CBF60()
{
  dbl_8B3C08 = 1.0 / dbl_8B3C20; /*0x4cbf6c*/
}



// ==== 0x004CBF80  sub_4CBF80  this=-  sig=ida-proto ====
void sub_4CBF80()
{
  dbl_8B3C00 = 0.0174532925199433 * 45.0; /*0x4cbf8c*/
}



// ==== 0x004CBFA0  sub_4CBFA0  this=-  sig=ida-proto ====
void sub_4CBFA0()
{
  dbl_8B3BD8 = 0.0174532925199433 * 60.0; /*0x4cbfac*/
}



// ==== 0x004CBFC0  sub_4CBFC0  this=-  sig=ida-proto ====
void sub_4CBFC0()
{
  dbl_8B3BB0 = 0.0174532925199433 * 90.0; /*0x4cbfcc*/
}



// ==== 0x004CBFE0  sub_4CBFE0  this=-  sig=ida-proto ====
__int64 sub_4CBFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3BB0 - dbl_8B3BD8); /*0x4cbff2*/
  result = Math::RoundToInt(v0 * dbl_8B3BD0 * 0.5); /*0x4cc006*/
  dword_8B3C28 = result; /*0x4cc00b*/
  return result; /*0x4cc010*/
}



// ==== 0x004CC020  sub_4CC020  this=-  sig=ida-proto ====
void sub_4CC020()
{
  dbl_8B3BE0 = Math::ArcTan((double)dword_8B3C28 * 0.00390625); /*0x4cc037*/
}



// ==== 0x004CC050  sub_4CC050  this=-  sig=ida-proto ====
void sub_4CC050()
{
  dbl_8B3BF8 = Math::ArcTan((double)(2 * dword_8B3C28) / dbl_8B3BD0); /*0x4cc072*/
}



// ==== 0x004CC080  sub_4CC080  this=-  sig=ida-proto ====
__int64 sub_4CC080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3C28) + 0.5); /*0x4cc09b*/
  dword_8B3C1C = result; /*0x4cc0a0*/
  return result; /*0x4cc0a6*/
}



// ==== 0x004CC0B0  sub_4CC0B0  this=-  sig=ida-proto ====
int sub_4CC0B0()
{
  word_8B3BC8 = 0; /*0x4cc0b2*/
  word_8B3BCA = 0; /*0x4cc0b8*/
  return 0; /*0x4cc0be*/
}



// ==== 0x004CC0C0  sub_4CC0C0  this=-  sig=ida-proto ====
int sub_4CC0C0()
{
  dword_8B3BE8 = 0; /*0x4cc0c2*/
  dword_8B3BEC = 0; /*0x4cc0c7*/
  dword_8B3BF0 = 0; /*0x4cc0cc*/
  return 0; /*0x4cc0d1*/
}



// ==== 0x004CC0E0  sub_4CC0E0  this=-  sig=ida-proto ====
int sub_4CC0E0()
{
  dword_8B3C18 = 0; /*0x4cc0e5*/
  dword_8B3C10 = 128; /*0x4cc0ef*/
  dword_8B3C14 = 128; /*0x4cc0f4*/
  return 128; /*0x4cc0f9*/
}



// ==== 0x004CC100  TrajectoryHelper::FindFirstObstacle  this=IUnknown  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::FindFirstObstacle(_DWORD *a1, int *a2, int a3, #375 *a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // ebp
  signed int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  _BYTE *v12; // esi
  void *v13; // eax
  int v14; // esi
  int v15; // edi
  _DWORD *result; // eax
  bool v17; // cc
  int v18; // [esp+10h] [ebp-34h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h]
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  int v25; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+28h] [ebp-1Ch] BYREF
  _BYTE *v27; // [esp+2Ch] [ebp-18h]
  _BYTE *v28; // [esp+30h] [ebp-14h]
  int v29; // [esp+34h] [ebp-10h] BYREF
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]

  if ( !*(_BYTE *)(a3 + 662) && !*(_BYTE *)(a3 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  v5 = *a2; /*0x4cc12d*/
  v6 = a2[1]; /*0x4cc136*/
  LOWORD(v21) = *a1 / 256; /*0x4cc151*/
  HIWORD(v21) = a1[1] / 256; /*0x4cc156*/
  v25 = v21; /*0x4cc15f*/
  LOWORD(v18) = v5 / 256; /*0x4cc171*/
  HIWORD(v18) = v6 / 256; /*0x4cc184*/
  v26 = v18; /*0x4cc18d*/
  v7 = abs32((__int16)v21 - (__int16)v18); /*0x4cc1aa*/
  v8 = abs32(SHIWORD(v21) - SHIWORD(v18)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  v9 = v6 - a1[1]; /*0x4cc1bf*/
  v10 = v5 - *a1; /*0x4cc1c5*/
  v11 = a2[2] - a1[2]; /*0x4cc1ca*/
  if ( v7 ) /*0x4cc1ce*/
  {
    v30 = v10 / v7; /*0x4cc1f0*/
    v31 = v9 / v7; /*0x4cc1fb*/
    v32 = v11 / v7; /*0x4cc1ff*/
  }
  else
  {
    v30 = 0; /*0x4cc1d6*/
    v31 = 0; /*0x4cc1da*/
    v32 = 0; /*0x4cc1de*/
  }
  v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v25); /*0x4cc216*/
  v28 = v12; /*0x4cc21e*/
  v27 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v26); /*0x4cc229*/
  v13 = v12; /*0x4cc22f*/
  v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  v22 = 0; /*0x4cc23b*/
  v20 = 0; /*0x4cc23f*/
  v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    v14 = *a1 + v19; /*0x4cc254*/
    v15 = v20 + a1[1]; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, a1[2] + v22, a3, a4); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
    LOWORD(v23) = v14 / 256; /*0x4cc2a2*/
    HIWORD(v23) = v15 / 256; /*0x4cc2b5*/
    v29 = v23; /*0x4cc2be*/
    v13 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v29); /*0x4cc2c2*/
    v19 += v30; /*0x4cc2dd*/
    v17 = ++v24 < v7; /*0x4cc2ee*/
    v20 += v31; /*0x4cc2f4*/
    v22 += v32; /*0x4cc2f8*/
    if ( !v17 ) /*0x4cc2fc*/
      return 0; /*0x4cc2fc*/
  }
  return result; /*0x4cc304*/
}



// ==== 0x004CC310  TrajectoryHelper::FindFirstImpenetrableObstacle  this=TrajectoryHelper  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::FindFirstImpenetrableObstacle(_DWORD *a1, int *a2, int a3, #375 *a4)
{
  _DWORD *FirstObstacle; // eax
  _DWORD *v5; // esi

  FirstObstacle = TrajectoryHelper::FindFirstObstacle(a1, a2, *(_DWORD *)(a3 + 160), a4); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType(FirstObstacle, -1, -1)
    && *(_BYTE *)(*(_DWORD *)(a3 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return v5; /*0x4cc353*/
  }
}



// ==== 0x004CC360  TrajectoryHelper::GetObstacle  this=TrajectoryHelper  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::GetObstacle(
        _BYTE *a1,
        _BYTE *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        #375 *other)
{
  _BYTE *v8; // ebx
  _DWORD *v10; // esi
  int SlopeIndex; // ebx
  int v12; // ebx
  int v13; // eax
  bool v14; // al
  #375 *v15; // ecx
  _DWORD *v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  double v20; // st7
  int *v21; // eax
  int v22; // esi
  int v23; // ebp
  int v24; // edx
  int v25; // eax
  int *v26; // eax
  int v27; // ecx
  signed int v28; // ecx
  signed int v29; // esi
  signed int v30; // edi
  signed int v31; // eax
  bool v32; // cc
  _DWORD *v33; // esi
  int v34; // ebx
  int v35; // ebx
  int v37; // eax
  bool v38; // al
  #375 *v39; // ecx
  int v41; // [esp+20h] [ebp-24h]
  _DWORD *v42; // [esp+20h] [ebp-24h]
  int v43; // [esp+24h] [ebp-20h] BYREF
  _BYTE *v44; // [esp+28h] [ebp-1Ch]
  int v45; // [esp+2Ch] [ebp-18h] BYREF
  int v46; // [esp+30h] [ebp-14h]
  int v47; // [esp+34h] [ebp-10h]
  char v48[12]; // [esp+38h] [ebp-Ch] BYREF

  v8 = a2; /*0x4cc36b*/
  LOWORD(v41) = a4 / 256; /*0x4cc382*/
  HIWORD(v41) = a5 / 256; /*0x4cc3a0*/
  v44 = a1; /*0x4cc3a9*/
  v43 = v41; /*0x4cc3ad*/
  v10 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v43); /*0x4cc3b6*/
  v42 = v10; /*0x4cc3bc*/
  if ( *(_BYTE *)(a7 + 662) ) /*0x4cc3c0*/
  {
    SlopeIndex = Cell::GetSlopeIndex((int)v10); /*0x4cc3d5*/
    if ( SlopeIndex - Cell::GetSlopeIndex(a3) >= 4 ) /*0x4cc3e1*/
    {
      v12 = Cell::GetSlopeIndex((int)v10); /*0x4cc3ec*/
      if ( v12 - Cell::GetSlopeIndex((int)a1) > 0 ) /*0x4cc3f7*/
        goto LABEL_16; /*0x4cc3f7*/
    }
    v8 = a2; /*0x4cc3fd*/
  }
  if ( *(_BYTE *)(a7 + 664) ) /*0x4cc405*/
  {
    v13 = v10[17]; /*0x4cc413*/
    v14 = v13 != -1 && *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v13] + 680); /*0x4cc432*/
    if ( v10 != (_DWORD *)v8 /*0x4cc47c*/
      && v14
      && a1[283] <= v8[283]
      && (!LOBYTE(dword_8871E0[1].?[3])
       || (v15 = *(#375 **)&dword_A8022C->AbstractClass[4 * v10[20]]) == 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v15, other)) )
    {
LABEL_16:
      v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v10 + 72))(v10, &v45); /*0x4cc489*/
      v17 = a4 - *v16; /*0x4cc49c*/
      v18 = v16[1]; /*0x4cc4a2*/
      v19 = v16[2]; /*0x4cc4a7*/
      v46 = a5 - v18; /*0x4cc4ae*/
      v47 = a6 - v19; /*0x4cc4b8*/
      v45 = v17; /*0x4cc4bc*/
      v20 = Math::Sqrt( /*0x4cc4e1*/
              (double)v17 * (double)v17
            + (double)(a6 - v19) * (double)(a6 - v19)
            + (double)(a5 - v18) * (double)(a5 - v18));
      if ( (int)Math::RoundToInt(v20) <= 85 ) /*0x4cc4f1*/
        return v10; /*0x4cc665*/
      v21 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a1 + 72))(a1, &v45); /*0x4cc501*/
      v22 = *v21; /*0x4cc504*/
      v23 = v21[1]; /*0x4cc50a*/
      v24 = v21[2]; /*0x4cc50d*/
      v25 = *(_DWORD *)a2; /*0x4cc510*/
      v47 = v24; /*0x4cc512*/
      v26 = (int *)(*(int (__thiscall **)(_BYTE *, char *))(v25 + 72))(a2, v48); /*0x4cc51b*/
      v27 = *v26; /*0x4cc51e*/
      v46 = v26[1]; /*0x4cc523*/
      v47 = v26[2]; /*0x4cc52a*/
      v28 = abs32(v22 - v27); /*0x4cc539*/
      v29 = abs32(v23 - v46); /*0x4cc548*/
      v30 = abs32(v17); /*0x4cc555*/
      v31 = abs32(a5 - v18); /*0x4cc55a*/
      v32 = v29 <= v28; /*0x4cc55c*/
      if ( v29 < v28 ) /*0x4cc55e*/
      {
        if ( v31 > v30 ) /*0x4cc562*/
        {
LABEL_22:
          v33 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v43); /*0x4cc574*/
          if ( *(_BYTE *)(a7 + 662) ) /*0x4cc589*/
          {
            v34 = Cell::GetSlopeIndex(a3); /*0x4cc59e*/
            if ( Cell::GetSlopeIndex((int)v33) - v34 >= 4 ) /*0x4cc5aa*/
            {
              v35 = Cell::GetSlopeIndex((int)v44); /*0x4cc5b7*/
              if ( Cell::GetSlopeIndex((int)v33) - v35 > 0 ) /*0x4cc5c2*/
                return v42; /*0x4cc5cf*/
            }
          }
          if ( *(_BYTE *)(a7 + 664) ) /*0x4cc5d2*/
          {
            v37 = v33[17]; /*0x4cc5e0*/
            v38 = v37 != -1 && *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v37] + 680); /*0x4cc5ff*/
            if ( v33 != (_DWORD *)a2 && v38 && v44[283] <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE(dword_8871E0[1].?[3]) ) /*0x4cc627*/
                return v42; /*0x4cc627*/
              v39 = *(#375 **)&dword_A8022C->AbstractClass[4 * v33[20]]; /*0x4cc639*/
              if ( !v39 || !(unsigned __int8)HouseClass::IsAlliedWith(v39, other) ) /*0x4cc645*/
                return v42; /*0x4cc64c*/
            }
          }
          return 0; /*0x4cc64c*/
        }
        v32 = v29 <= v28; /*0x4cc564*/
      }
      if ( v32 || v30 <= v31 ) /*0x4cc56e*/
        return v42; /*0x4cc659*/
      goto LABEL_22; /*0x4cc56e*/
    }
  }
  return 0; /*0x4cc5c8*/
}



// ==== 0x004CC680  sub_4CC680  this=-  sig=ida-proto ====
BOOL __fastcall sub_4CC680(int a1, int a2, int a3)
{
  int SlopeIndex; // ebx
  int v5; // esi
  BOOL result; // eax

  SlopeIndex = Cell::GetSlopeIndex(a2); /*0x4cc690*/
  result = 0; /*0x4cc6c3*/
  if ( Cell::GetSlopeIndex(a3) - SlopeIndex >= 4 ) /*0x4cc69e*/
  {
    v5 = Cell::GetSlopeIndex(a1); /*0x4cc6a9*/
    if ( Cell::GetSlopeIndex(a3) - v5 > 0 ) /*0x4cc6b4*/
      return 1; /*0x4cc69e*/
  }
  return result; /*0x4cc6b6*/
}



// ==== 0x004CC750  sub_4CC750  this=-  sig=ida-proto ====
int sub_4CC750()
{
  dword_8B3C30 = 0; /*0x4cc752*/
  dword_8B3C34 = 0; /*0x4cc757*/
  dword_8B3C38 = 0; /*0x4cc75c*/
  dword_8B3C3C = 0; /*0x4cc761*/
  return 0; /*0x4cc766*/
}



// ==== 0x004CC770  TechnoClass::UpdateThunk  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::UpdateThunk(TechnoClass *this)
{
  char *v1; // eax

  if ( !this->RadioClass ) /*0x4cc770*/
    return 0; /*0x4cc788*/
  v1 = (char *)this->RadioClass - 1; /*0x4cc776*/
  LOBYTE(this->?) = 0; /*0x4cc777*/
  this->RadioClass = v1; /*0x4cc77d*/
  if ( ((unsigned __int8)v1 & 1) != 0 ) /*0x4cc77f*/
    LOBYTE(this->?) = 1; /*0x4cc781*/
  return 1; /*0x4cc787*/
}



// ==== 0x004CC790  sub_4CC790  this=-  sig=ida-proto ====
void sub_4CC790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cc79c*/
  dbl_8B3C60 = Math::Sqrt(v0 + v0); /*0x4cc7ae*/
}



// ==== 0x004CC7C0  sub_4CC7C0  this=-  sig=ida-proto ====
void sub_4CC7C0()
{
  dbl_8B3CB0 = dbl_8B3C60 / 60.0; /*0x4cc7cc*/
}



// ==== 0x004CC7E0  sub_4CC7E0  this=-  sig=ida-proto ====
void sub_4CC7E0()
{
  dbl_8B3C98 = 1.0 / dbl_8B3CB0; /*0x4cc7ec*/
}



// ==== 0x004CC800  sub_4CC800  this=-  sig=ida-proto ====
void sub_4CC800()
{
  dbl_8B3C90 = 0.0174532925199433 * 45.0; /*0x4cc80c*/
}



// ==== 0x004CC820  sub_4CC820  this=-  sig=ida-proto ====
void sub_4CC820()
{
  dbl_8B3C68 = 0.0174532925199433 * 60.0; /*0x4cc82c*/
}



// ==== 0x004CC840  sub_4CC840  this=-  sig=ida-proto ====
void sub_4CC840()
{
  dbl_8B3C40 = 0.0174532925199433 * 90.0; /*0x4cc84c*/
}



// ==== 0x004CC860  sub_4CC860  this=-  sig=ida-proto ====
__int64 sub_4CC860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3C40 - dbl_8B3C68); /*0x4cc872*/
  result = Math::RoundToInt(v0 * dbl_8B3C60 * 0.5); /*0x4cc886*/
  dword_8B3CB8 = result; /*0x4cc88b*/
  return result; /*0x4cc890*/
}



// ==== 0x004CC8A0  sub_4CC8A0  this=-  sig=ida-proto ====
void sub_4CC8A0()
{
  dbl_8B3C70 = Math::ArcTan((double)dword_8B3CB8 * 0.00390625); /*0x4cc8b7*/
}



// ==== 0x004CC8D0  sub_4CC8D0  this=-  sig=ida-proto ====
void sub_4CC8D0()
{
  dbl_8B3C88 = Math::ArcTan((double)(2 * dword_8B3CB8) / dbl_8B3C60); /*0x4cc8f2*/
}



// ==== 0x004CC900  sub_4CC900  this=-  sig=ida-proto ====
__int64 sub_4CC900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3CB8) + 0.5); /*0x4cc91b*/
  dword_8B3CAC = result; /*0x4cc920*/
  return result; /*0x4cc926*/
}



// ==== 0x004CC930  sub_4CC930  this=-  sig=ida-proto ====
int sub_4CC930()
{
  dword_8B3C58 = 0; /*0x4cc932*/
  return 0; /*0x4cc93e*/
}



// ==== 0x004CC940  sub_4CC940  this=-  sig=ida-proto ====
int sub_4CC940()
{
  dword_8B3C78 = 0; /*0x4cc942*/
  dword_8B3C7C = 0; /*0x4cc947*/
  dword_8B3C80 = 0; /*0x4cc94c*/
  return 0; /*0x4cc951*/
}



// ==== 0x004CC960  sub_4CC960  this=-  sig=ida-proto ====
int sub_4CC960()
{
  dword_8B3CA8 = 0; /*0x4cc965*/
  dword_8B3CA0 = 128; /*0x4cc96f*/
  dword_8B3CA4 = 128; /*0x4cc974*/
  return 128; /*0x4cc979*/
}



// ==== 0x004CC980  sub_4CC980  this=-  sig=ida-proto ====
int sub_4CC980()
{
  dword_8B3C48 = 0; /*0x4cc982*/
  dword_8B3C4C = 0; /*0x4cc987*/
  dword_8B3C50 = 0; /*0x4cc98c*/
  dword_8B3C54 = 0; /*0x4cc991*/
  return 0; /*0x4cc996*/
}



// ==== 0x004CC9A0  FlyLocomotionClass::LocomotionClass  this=FlyLocomotionClass  sig=csp ====
int __thiscall FlyLocomotionClass::LocomotionClass(FlyLocomotionClass *this)
{
  int v2; // edx

  LocomotionClass::Init((LocomotionClass *)this); /*0x4cc9a3*/
  this->AirportBound = 0; /*0x4cc9ad*/
  this->MovingDestination[0] = dword_8B3C78; /*0x4cc9b6*/
  this->MovingDestination[1] = dword_8B3C7C; /*0x4cc9be*/
  this->MovingDestination[2] = dword_8B3C80; /*0x4cc9c7*/
  this->XYZ2[0] = dword_8B3C78; /*0x4cc9d3*/
  this->XYZ2[1] = dword_8B3C7C; /*0x4cc9dc*/
  v2 = dword_8B3C80; /*0x4cc9df*/
  this->TargetSpeed[1] = 0; /*0x4cc9e5*/
  this->CurrentSpeed[1] = 0; /*0x4cc9e8*/
  this->HasMoveOrder = 0; /*0x4cc9eb*/
  this->FlightLevel = 0; /*0x4cc9ee*/
  this->CurrentSpeed[0] = 0; /*0x4cc9f1*/
  *(_DWORD *)&this->IsTakingOff = 0; /*0x4cc9f4*/
  this->__pad_4F[1] = 0; /*0x4cc9f7*/
  this->__pad_4F[2] = 0; /*0x4cc9fa*/
  this->__pad_4F[3] = 0; /*0x4cc9fd*/
  this->FlyLocomotionClass_field_bool_53 = 0; /*0x4cca00*/
  this->FlyLocomotionClass_field_54 = 0; /*0x4cca03*/
  this->FlyLocomotionClass_field_58 = 0; /*0x4cca06*/
  this->IsElevating = 0; /*0x4cca09*/
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cca0c*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cca12*/
  this->XYZ2[2] = v2; /*0x4cca1b*/
  return (int)this->LocomotionClass; /*0x4cca1e*/
}



// ==== 0x004CCA20  JumpjetLocomotionClass::StubReturnZero_7  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_7(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // esi

  v2 = StreamClass::ResetPosition((LocomotionClass *)this, (int)a2); /*0x4cca32*/
  if ( !v2 ) /*0x4cca36*/
  {
    if ( a2 && (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 2 && *(_BYTE *)(a2[433] + 3597) ) /*0x4cca4e*/
    {
      LOBYTE(this->?) = 1; /*0x4cca5b*/
      return 0; /*0x4cca61*/
    }
    LOBYTE(this->?) = 0; /*0x4cca64*/
  }
  return v2; /*0x4cca5a*/
}



// ==== 0x004CCA70  FlyLocomotionClass::method_4CCA70  this=FlyLocomotionClass  sig=csp ====
void __thiscall sub_4CCA70(FlyLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cca70*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cca76*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4cca7d*/
}



// ==== 0x004CCA90  JumpjetLocomotionClass::ComputeFloatExpression  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ComputeFloatExpression(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles) || this->?->? > 0.0; /*0x4ccab3*/
}



// ==== 0x004CCAC0  FlyLocomotionClass::ComputeFloatExpression_0  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ComputeFloatExpression_0(FlyLocomotionClass *this)
{
  return *(double *)this->CurrentSpeed != 0.0; /*0x4ccad6*/
}



// ==== 0x004CCAE0  JumpjetLocomotionClass::GetMovementCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x4ccae9*/
  {
    result = a2; /*0x4ccaf0*/
    Speed = this->Speed; /*0x4ccaf7*/
    Climb = this->Climb; /*0x4ccafa*/
    v5 = (float *)a2; /*0x4ccafd*/
    *a2 = this->TurnRate; /*0x4ccaff*/
  }
  else
  {
    result = a2; /*0x4ccb0c*/
    Speed = dword_8B3C7C; /*0x4ccb16*/
    Climb = *(float *)&dword_8B3C80; /*0x4ccb1c*/
    v5 = (float *)a2; /*0x4ccb22*/
    *a2 = dword_8B3C78; /*0x4ccb24*/
  }
  *((_DWORD *)v5 + 1) = Speed; /*0x4ccb01*/
  v5[2] = Climb; /*0x4ccb04*/
  return result; /*0x4ccb07*/
}



// ==== 0x004CCB40  FlyLocomotionClass::ProcessLocomotionStep  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ProcessLocomotionStep(FlyLocomotionClass *this)
{
  int v1; // eax
  FootClass *Owner; // ecx
  char result; // al
  FootClass *v4; // ecx

  if ( !this->IsLanding && !this->IsTakingOff && *(double *)this->TargetSpeed >= 1.0 && !*(_DWORD *)&this->HasMoveOrder ) /*0x4ccb65*/
  {
    v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x4ccb71*/
    *(_DWORD *)&this->HasMoveOrder = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 188))(v1); /*0x4ccb81*/
  }
  Owner = this->?; /*0x4ccb84*/
  if ( Owner->? > 0 /*0x4ccb9e*/
    && !this->IsLanding
    && !this->IsTakingOff
    && (*((unsigned __int8 (__thiscall **)(FootClass *))Owner->TechnoClass + 128))(Owner) )
  {
    (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 123))(this->?); /*0x4ccbad*/
  }
  JumpjetLocomotionClass::ProcessRotation((JumpjetLocomotionClass *)((char *)this - 4)); /*0x4ccbb8*/
  DamageArea::ApplyScatter((DamageArea *)this - 1); /*0x4ccbbf*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this); /*0x4ccbc7*/
  if ( result ) /*0x4ccbcc*/
  {
    v4 = this->?; /*0x4ccbd4*/
    if ( v4->? ) /*0x4ccbd7*/
    {
      if ( v4->? > 0 /*0x4ccc2d*/
        && (*(_DWORD *)&this->AirportBound != dword_8B3C78
         || this->MovingDestination[0] != dword_8B3C7C
         || this->MovingDestination[1] != dword_8B3C80)
        && !this->IsLanding
        && !this->IsTakingOff
        && (*((int (__thiscall **)(FootClass *))v4->TechnoClass + 114))(v4) > 0 )
      {
        LandFootClassAtPosition( /*0x4ccc49*/
          (int)this - 4,
          this->MovingDestination[1],
          1,
          *(float *)&this->AirportBound,
          this->MovingDestination[0],
          this->MovingDestination[1]);
      }
      if ( this->?->? > 0 ) /*0x4ccc56*/
        FootClass::ProcessDeployMission((FootClass *)((char *)this - 4)); /*0x4ccc5a*/
      JumpjetLocomotionClass::IsMapCoordVisible((JumpjetLocomotionClass *)((char *)this - 4)); /*0x4ccc61*/
      return (*(char (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x4ccc69*/
    }
    else
    {
      return 0; /*0x4ccbe1*/
    }
  }
  return result; /*0x4ccbce*/
}



// ==== 0x004CCC80  FlyLocomotionClass::UpdateFootLocomotion  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFootLocomotion(FlyLocomotionClass *this, int a2, int a3, int a4)
{
  FlyLocomotionClass *v4; // ebx
  int v5; // ebp
  FlyLocomotionClass *v6; // eax
  FootClass **p_Owner; // edi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  int *location; // eax
  FootClass *v14; // ecx
  int v15; // esi
  int GroundHeight; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // esi
  char v20; // al
  FootClass *Owner; // ecx
  FootClass *v22; // ecx
  int v23; // eax
  _DWORD v25[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = this; /*0x4ccc84*/
  v5 = a2; /*0x4ccc89*/
  if ( (unsigned __int16)(a2 / 256) != (unsigned __int16)(*(_DWORD *)&this->AirportBound / 256) /*0x4ccce0*/
    || (unsigned __int16)(a3 / 256) != (unsigned __int16)(this->MovingDestination[0] / 256)
    || (LOBYTE(v6) = this->IsLanding, !(_BYTE)v6) )
  {
    p_Owner = &this->?; /*0x4ccce9*/
    LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x4cccee*/
    if ( !(_BYTE)v6 ) /*0x4cccf6*/
    {
      LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 224))(*p_Owner); /*0x4ccd00*/
      if ( !(_BYTE)v6 ) /*0x4ccd08*/
      {
        LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 117))(*p_Owner); /*0x4ccd12*/
        if ( !(_BYTE)v6 ) /*0x4ccd1a*/
        {
          LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 118))(*p_Owner); /*0x4ccd24*/
          if ( !(_BYTE)v6 ) /*0x4ccd2c*/
          {
            LOBYTE(v6) = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v4->LocomotionClass + 96))(v4); /*0x4ccd35*/
            if ( (_BYTE)v6 ) /*0x4ccd3a*/
            {
              v8 = a3; /*0x4ccd45*/
              v9 = a4; /*0x4ccd4b*/
              if ( v5 == dword_8B3C78 && a3 == dword_8B3C7C && a4 == dword_8B3C80 ) /*0x4ccd67*/
              {
                v10 = 0; /*0x4ccd6f*/
                v11 = *p_Owner == 0; /*0x4ccd71*/
                this = 0; /*0x4ccd73*/
                if ( !v11 ) /*0x4ccd77*/
                {
                  v12 = ComPtr::ReleaseAndSet((ComPtr *)&this, &v4->?); /*0x4ccd7e*/
                  if ( v12 < 0 && v12 != -2147467262 ) /*0x4ccd8c*/
                    WinAPI::Wrapper(v12); /*0x4ccd8f*/
                  if ( this ) /*0x4ccd9a*/
                    v10 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 12))(this); /*0x4ccda2*/
                }
                if ( (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v10 /*0x4ccdb9*/
                  && !v4->IsTakingOff
                  || v4->IsLanding )
                {
                  *(_DWORD *)&v4->AirportBound = dword_8B3C78; /*0x4ccde8*/
                  v4->MovingDestination[0] = dword_8B3C7C; /*0x4ccdf1*/
                  v4->MovingDestination[1] = dword_8B3C80; /*0x4ccdf9*/
                }
                else
                {
                  location = (*p_Owner)->?; /*0x4ccdc2*/
                  *(_DWORD *)&v4->AirportBound = *location; /*0x4ccdc9*/
                  v4->MovingDestination[0] = location[1]; /*0x4ccdd2*/
                  v4->MovingDestination[1] = location[2]; /*0x4ccdd8*/
                  LocomotionClass::CheckBridgeBlock((LocomotionClass *)&v4[-1].IsElevating); /*0x4ccddb*/
                }
                v6 = this; /*0x4ccdfc*/
                LOBYTE(v4->FlyLocomotionClass_field_58) = 0; /*0x4cce00*/
                if ( v6 ) /*0x4cce06*/
                  LOBYTE(v6) = (*(char (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 8))(v6); /*0x4cce0f*/
              }
              else
              {
                *(_DWORD *)&v4->AirportBound = v5; /*0x4cce1c*/
                v4->MovingDestination[0] = v8; /*0x4cce1f*/
                v4->MovingDestination[1] = v9; /*0x4cce22*/
                v14 = *p_Owner; /*0x4cce25*/
                if ( (*p_Owner)->? && v14->? ) /*0x4cce31*/
                {
                  v25[0] = v5; /*0x4cce3b*/
                  v25[1] = v8; /*0x4cce3f*/
                  v25[2] = v9; /*0x4cce43*/
                  v15 = (*((int (__thiscall **)(FootClass *))v14->TechnoClass + 33))(v14); /*0x4cce4f*/
                  GroundHeight = Cell::GetGroundHeight(v25); /*0x4cce64*/
                  v4->MovingDestination[1] = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 188))(v15) + GroundHeight; /*0x4cce6e*/
                }
                v17 = 0; /*0x4cce73*/
                v11 = *p_Owner == 0; /*0x4cce75*/
                a2 = 0; /*0x4cce77*/
                if ( !v11 ) /*0x4cce7b*/
                {
                  v18 = ComPtr::ReleaseAndSet((ComPtr *)&a2, &v4->?); /*0x4cce82*/
                  if ( v18 < 0 && v18 != -2147467262 ) /*0x4cce90*/
                    WinAPI::Wrapper(v18); /*0x4cce93*/
                  v17 = a2; /*0x4cce98*/
                }
                v19 = 0; /*0x4cce9c*/
                if ( v17 ) /*0x4ccea0*/
                  v19 = (*(int (__stdcall **)(int))(*(_DWORD *)v17 + 12))(v17); /*0x4ccea8*/
                LOBYTE(v4->XYZ2[2]) = 1; /*0x4cceaa*/
                if ( (*p_Owner)->? > 0 /*0x4ccecf*/
                  && !v4->IsTakingOff
                  && (v4->IsLanding
                   || (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v19) )
                {
                  TechnoClass::GetData((TechnoClass *)&v4[-1].IsElevating); /*0x4cced4*/
                }
                if ( v4->MovingDestination[1] <= Cell::GetGroundHeight(&v4->AirportBound) + 120 ) /*0x4cceef*/
                {
                  Owner = v4->?; /*0x4ccef8*/
                  if ( Owner->? && Owner->? ) /*0x4ccf08*/
                  {
                    v20 = 1; /*0x4ccf12*/
                  }
                  else
                  {
                    v22 = v4->?; /*0x4ccf16*/
                    this = 0; /*0x4ccf18*/
                    if ( v22 ) /*0x4ccf22*/
                    {
                      v23 = ComPtr::ReleaseAndSet((ComPtr *)&this, &v4->?); /*0x4ccf29*/
                      if ( v23 < 0 && v23 != -2147467262 ) /*0x4ccf37*/
                        WinAPI::Wrapper(v23); /*0x4ccf3a*/
                    }
                    if ( JumpjetLocomotionClass::CheckWindowsErrorWrapper_0((JumpjetLocomotionClass *)&this, 0) ) /*0x4ccf45*/
                      goto LABEL_54; /*0x4ccf45*/
                    if ( !this ) /*0x4ccf54*/
                      WinAPI::Wrapper(-2147467261); /*0x4ccf5b*/
                    if ( !(*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 32))(this) ) /*0x4ccf67*/
                    {
LABEL_54:
                      Release3COM((ObjectClass *)&this); /*0x4ccf7f*/
                      v20 = 0; /*0x4ccf84*/
                    }
                    else
                    {
                      Release3COM((ObjectClass *)&this); /*0x4ccf72*/
                      v20 = 1; /*0x4ccf77*/
                    }
                  }
                }
                else
                {
                  v20 = 1; /*0x4ccef1*/
                }
                LOBYTE(v4->FlyLocomotionClass_field_58) = v20; /*0x4ccf86*/
                if ( (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 11))(*p_Owner) == 2 /*0x4ccf9d*/
                  && !*((_BYTE *)(*p_Owner)[1].? + 3594) )
                {
                  LOBYTE(v4->FlyLocomotionClass_field_58) = 1; /*0x4ccfa7*/
                }
                LOBYTE(v6) = a2; /*0x4ccfab*/
                if ( a2 ) /*0x4ccfb1*/
                  LOBYTE(v6) = (*(char (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4ccfb6*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v6; /*0x4cce12*/
}



// ==== 0x004CCFD0  FlyLocomotionClass::ComputeMoveToPosition  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ComputeMoveToPosition(FlyLocomotionClass *this)
{
  FlyLocomotionClass *v1; // esi
  char result; // al
  FootClass *Owner; // ecx
  int v4; // eax
  int v5; // edi
  TechnoClass *v6; // edi
  void *ClosestPlacementCell; // eax
  void *v8; // eax
  int v9; // eax
  void (__thiscall **vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v11; // eax
  char (__thiscall **v12)(FootClass *, CellClass *, int); // edi
  CellClass *v13; // eax
  int *v14; // ecx
  char *p_AirportBound; // esi
  int v16; // [esp+8h] [ebp-18h] BYREF
  __int16 v17[2]; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x4ccfd4*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x4ccfdc*/
  if ( result ) /*0x4ccfe1*/
  {
    Owner = v1->?; /*0x4ccfe7*/
    v4 = Owner->?[0]; /*0x4ccff0*/
    v5 = Owner->?[1]; /*0x4ccff6*/
    GroundHeight = Owner->?[2]; /*0x4ccffc*/
    LOWORD(this) = v4 / 256; /*0x4cd00c*/
    HIWORD(this) = v5 / 256; /*0x4cd01f*/
    if ( !Owner->? /*0x4cd050*/
      && !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, 1)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))v1->?->TechnoClass + 311))(v1->?) )
    {
      this = (FlyLocomotionClass *)*JumpjetLocomotionClass::ClampToCellBounds( /*0x4cd072*/
                                      (JumpjetLocomotionClass *)&stru_87F5F0.__pad_58[416],
                                      v17,
                                      (__int16 *)&this,
                                      1);
    }
    v6 = (TechnoClass *)v1->?; /*0x4cd076*/
    if ( v6 && (*((int (__thiscall **)(FootClass *))v6->RadioClass + 11))(v1->?) == 2 ) /*0x4cd08b*/
    {
      if ( this == (FlyLocomotionClass *)dword_8B3C58 ) /*0x4cd09d*/
      {
        (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))v1->?->TechnoClass + 91))( /*0x4cd0cd*/
          &v1->?->?,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
LABEL_21:
        result = dword_8B3C78; /*0x4cd273*/
        p_AirportBound = &v1->AirportBound; /*0x4cd278*/
        *(_DWORD *)p_AirportBound = dword_8B3C78; /*0x4cd27b*/
        *((_DWORD *)p_AirportBound + 1) = dword_8B3C7C; /*0x4cd283*/
        *((_DWORD *)p_AirportBound + 2) = dword_8B3C80; /*0x4cd28c*/
        return result; /*0x4cd28c*/
      }
      if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 1 ) /*0x4cd0e6*/
      {
        ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(v6); /*0x4cd0ea*/
      }
      else
      {
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x4cd10f*/
        ClosestPlacementCell = InfantryClass::FindNearbyCell((InfantryClass *)v6, (int)v8); /*0x4cd117*/
      }
      return (*((char (__thiscall **)(FootClass *, void *, int))v1->?->TechnoClass + 288))( /*0x4cd0f7*/
               v1->?,
               ClosestPlacementCell,
               1);
    }
    else
    {
      v16 = 0; /*0x4cd161*/
      v9 = *LayerClass::Pathfinding_Find( /*0x4cd174*/
              &stru_87F5F0.__pad_58[416],
              (int)&v16,
              &v18,
              (__int16 *)&this,
              1,
              -1,
              9,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (__int16 *)&v16,
              0,
              0);
      *(_DWORD *)v17 = v9; /*0x4cd17d*/
      if ( v9 == dword_8B3C58 ) /*0x4cd186*/
      {
        v14 = (int *)v1->?; /*0x4cd246*/
        result = (_BYTE)v14 + 108; /*0x4cd24c*/
        if ( v14[27] <= 0 ) /*0x4cd251*/
          return result; /*0x4cd251*/
        (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v14 + 364))( /*0x4cd26d*/
          v14 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
        goto LABEL_21; /*0x4cd26d*/
      }
      GroundHeight = 0; /*0x4cd1a9*/
      v19[1] = (SHIWORD(v9) << 8) + 128; /*0x4cd1b6*/
      v19[0] = ((__int16)v9 << 8) + 128; /*0x4cd1c0*/
      GroundHeight = Cell::GetGroundHeight(v19); /*0x4cd1ce*/
      if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 ) /*0x4cd1e5*/
        GroundHeight += dword_8B3CAC; /*0x4cd1f3*/
      vtable0 = (void (__thiscall **)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd201*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd208*/
      vtable0[288](v1->?, v11, 1); /*0x4cd211*/
      result = v1->IsLanding; /*0x4cd217*/
      if ( !result ) /*0x4cd21c*/
      {
        v12 = (char (__thiscall **)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd228*/
        v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd22f*/
        return v12[288](v1->?, v13, 1); /*0x4cd238*/
      }
    }
  }
  return result; /*0x4cd0fd*/
}



// ==== 0x004CD2A0  FootClass::ProcessDeployMission  this=FootClass  sig=csp ====
char __thiscall FootClass::ProcessDeployMission(FootClass *this)
{
  _DWORD *vtable3; // edi
  void *v3; // ecx
  int v4; // eax
  int *v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // edi
  CellClass *v10; // eax
  _BYTE *v11; // eax
  int *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  void *v16; // ecx
  _DWORD *v17; // eax
  Team *v18; // eax
  _DWORD *v19; // edi
  int v20; // [esp+34h] [ebp-Ch] BYREF
  int v21; // [esp+38h] [ebp-8h]
  int v22; // [esp+3Ch] [ebp-4h]

  vtable3 = this->?; /*0x4cd2a7*/
  if ( vtable3 && (*(int (__thiscall **)(void *))(*vtable3 + 44))(this->?) == 2 && !*(_BYTE *)(vtable3[433] + 3594) ) /*0x4cd2c0*/
  {
    v3 = this->?; /*0x4cd2ca*/
    LOBYTE(this->?[3]) = 1; /*0x4cd2cd*/
    BYTE1(this->?[0]) = 0; /*0x4cd2d1*/
    LOBYTE(this->?[0]) = 0; /*0x4cd2d5*/
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 132))(v3); /*0x4cd2db*/
    this->? = (BombClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cd2eb*/
    return 0; /*0x4cd2ef*/
  }
  else
  {
    v6 = (int *)this->?; /*0x4cd2f6*/
    if ( v6[27] > 0 && (BYTE1(this->?[0]) || LOBYTE(this->?[0])) ) /*0x4cd30b*/
    {
      v7 = (*(int (__thiscall **)(int *))(*v6 + 120))(v6); /*0x4cd320*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->? + 292))(this->?, 0); /*0x4cd324*/
      RemoveTarget((int)this->?); /*0x4cd333*/
      if ( BYTE1(this->?[0]) ) /*0x4cd338*/
        DropPod::ProcessLanding((DropPod *)this); /*0x4cd341*/
      if ( LOBYTE(this->?[0]) ) /*0x4cd346*/
        FootClass::UpdateDeployMovement(this); /*0x4cd34f*/
      if ( v7 != (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?) ) /*0x4cd35e*/
      {
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?) != 2 /*0x4cd3b6*/
          || LOBYTE(this->?[0])
          || (v8 = (int *)this->?,
              v20 = v8[39],
              v21 = v8[40],
              v22 = v8[41],
              v9 = *v8,
              v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v20),
              (*(unsigned __int8 (__thiscall **)(void *, CellClass *))(v9 + 1360))(this->?, v10)) )
        {
          v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?); /*0x4cd40a*/
          v16 = this->?; /*0x4cd40d*/
          if ( v15 == 2 ) /*0x4cd413*/
          {
            (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v16 + 1152))(v16, 0, 1); /*0x4cd41f*/
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 628))(this->?, 24); /*0x4cd42c*/
            (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->? + 1164))( /*0x4cd43f*/
              this->?,
              0,
              0,
              0,
              0);
            (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->? + 1160))( /*0x4cd454*/
              this->?,
              0,
              0,
              0,
              0,
              0);
            v17 = this->?; /*0x4cd45a*/
            v20 = v17[39]; /*0x4cd46b*/
            v21 = v17[40]; /*0x4cd472*/
            v22 = v17[41]; /*0x4cd479*/
            MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v20, v17[152] - 3, v17[152] + 3, 0); /*0x4cd495*/
          }
          else
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v16 + 628))(v16, 25); /*0x4cd4a0*/
            if ( (unsigned __int8)Team::AllMembersValid((Team *)this->?) ) /*0x4cd4a9*/
            {
              v18 = (Team *)this->?; /*0x4cd4b2*/
              if ( *(_DWORD *)&v18[6].__pad_0[28] ) /*0x4cd4b5*/
              {
                v19 = this->?; /*0x4cd4bf*/
                if ( v19[361] != Team::GetMember(v18, 0) ) /*0x4cd4d0*/
                  (*(void (__thiscall **)(_DWORD *, int))(*v19 + 628))(v19, 3); /*0x4cd4d8*/
              }
            }
          }
        }
        else
        {
          v11 = this->?; /*0x4cd3c0*/
          LOBYTE(this->?[0]) = 1; /*0x4cd3c3*/
          v11[140] = 0; /*0x4cd3c9*/
          (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->? + 292))(this->?, 0); /*0x4cd3d5*/
          v12 = (int *)this->?; /*0x4cd3db*/
          v13 = *v12; /*0x4cd3de*/
          v14 = (*(int (__thiscall **)(int *))(*v12 + 456))(v12); /*0x4cd3e0*/
          (*(void (__thiscall **)(void *, int))(v13 + 460))(this->?, v14 + 10); /*0x4cd3ed*/
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 292))(this->?, 1); /*0x4cd3fa*/
        }
      }
      Targeting::Readd((_DWORD *)this->?); /*0x4cd4e7*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 292))(this->?, 1); /*0x4cd4f3*/
    }
    return 0; /*0x4cd4fa*/
  }
}



// ==== 0x004CD510  JumpjetLocomotionClass::IsMapCoordVisible  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall JumpjetLocomotionClass::IsMapCoordVisible(JumpjetLocomotionClass *this)
{
  int *location; // eax
  char v3; // al
  FootClass *LinkedTo; // ecx
  LinkedList *i; // eax
  _DWORD *v6; // esi
  int v7; // eax
  TeamClass *team; // eax
  _DWORD v10[3]; // [esp+4h] [ebp-Ch] BYREF

  location = this->?->?; /*0x4cd519*/
  v10[0] = *location; /*0x4cd520*/
  v10[1] = location[1]; /*0x4cd52c*/
  v10[2] = location[2]; /*0x4cd538*/
  v3 = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v10); /*0x4cd53c*/
  LinkedTo = this->?; /*0x4cd541*/
  if ( v3 ) /*0x4cd546*/
  {
    LinkedTo->? = 1; /*0x4cd5f0*/
    return 0; /*0x4cd5f0*/
  }
  if ( (*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 97))(LinkedTo) != 4 ) /*0x4cd557*/
    return 0; /*0x4cd5f7*/
  for ( i = (LinkedList *)this->?; i[23].Tail[0]; i = (LinkedList *)this->? ) /*0x4cd566*/
  {
    v6 = (_DWORD *)LinkedList::Pop(i + 23); /*0x4cd57c*/
    if ( sub_413CD0((int)v6) ) /*0x4cd580*/
      *(_BYTE *)(v6[135] + 505) = 1; /*0x4cd58f*/
    v7 = v6[373]; /*0x4cd595*/
    if ( v7 ) /*0x4cd59d*/
      *(_BYTE *)(v7 + 130) = 1; /*0x4cd59f*/
    if ( v6 ) /*0x4cd5a7*/
      (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x4cd5ae*/
  }
  team = this->?->team; /*0x4cd5c2*/
  if ( team ) /*0x4cd5ca*/
    team->unknown82 = 1; /*0x4cd5cc*/
  (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 232))(this->?); /*0x4cd5d7*/
  (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 62))(this->?); /*0x4cd5e2*/
  return 1; /*0x4cd5eb*/
}



// ==== 0x004CD600  DamageArea::ApplyScatter  this=DamageArea  sig=csp ====
int __thiscall DamageArea::ApplyScatter(DamageArea *this)
{
  double v1; // st7
  int v3; // edi
  _WORD *v4; // eax
  DamageArea *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  TechnoClass *v11; // ecx
  int health; // edi
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int result; // eax
  AnimClass *v18; // esi
  int v19; // ebx
  void *WarheadVersusMultiplier; // eax
  int *DamageArea_field_00; // ecx
  _DWORD *v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // edi
  unsigned int v28; // ebx
  unsigned int v29; // ebp
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  _DWORD *v43; // ebp
  int v44; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // eax
  bool v48; //... [31505 chars total]



// ==== 0x004CE4B0  ObjectClass::ProcessDataHelper  this=ObjectClass  sig=csp ====
int __thiscall ProcessDataHelper(ObjectClass *this, int *a2, int a3)
{
  double v3; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v10; // [esp+4h] [ebp-18h]
  double v12; // [esp+Ch] [ebp-10h]

  v10 = (*((int (__stdcall **)(void **))this->? + 33))(&this->?); /*0x4ce4c1*/
  if ( v10 <= 0 ) /*0x4ce4c5*/
    return 0; /*0x4ce594*/
  a3 = (__int16)a3 - 0x3FFF; /*0x4ce4d7*/
  __asm { fild dword ptr [esp+20h+arg_4] } /*0x4ce4dc*/
  _ESI = a2; /*0x4ce4e1*/
  __asm { fmul ds:dbl_7E2810 } /*0x4ce4e6*/
  v5 = a2[2]; /*0x4ce4ec*/
  __asm /*0x4ce4ef*/
  {
    fstp [esp+28h+var_14+4]
    fild dword ptr [esp+28h+var_1C+4]
  }
  __asm
  {
    fstp [esp+30h+var_1C+4]
    fild dword ptr [esi+4]
    fstp [esp+30h+var_C+4]
  }
  Math::SinCos(v12); /*0x4ce50c*/
  __asm /*0x4ce511*/
  {
    fmul [esp+30h+var_1C+4]
    fsubr [esp+30h+var_C+4]
  }
  LOWORD(v6) = Math::RoundToInt(v3); /*0x4ce519*/
  a3 = v6; /*0x4ce520*/
  Math::ArcTan2(v12); /*0x4ce524*/
  __asm { fmul [esp+38h+var_1C+4] } /*0x4ce529*/
  __asm { fiadd dword ptr [esi] }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x4ce532*/
  v8 = a3; /*0x4ce537*/
  *a2 = v7; /*0x4ce53d*/
  a2[1] = v8; /*0x4ce53f*/
  a2[2] = v5; /*0x4ce542*/
  LOWORD(a3) = *a2 / 256; /*0x4ce558*/
  HIWORD(a3) = a2[1] / 256; /*0x4ce571*/
  return 2 /*0x4ce58e*/
       - ((unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) != 0);
}



// ==== 0x004CE5A0  JumpjetLocomotionClass::ProcessRotation  this=JumpjetLocomotionClass  sig=csp ====
void __thiscall JumpjetLocomotionClass::ProcessRotation(JumpjetLocomotionClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  FootClass *LinkedTo; // ecx
  CellClass *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this->__pad_50[3] && this->?->? > 0 ) /*0x4ce5b9*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int *))(this->LocomotionClass[1] + 96))(&this->LocomotionClass[1]) ) /*0x4ce5c6*/
    {
      LinkedTo = this->?; /*0x4ce636*/
      this->__pad_50[3] = 0; /*0x4ce639*/
      LinkedTo = (FootClass *)((char *)LinkedTo + 156); /*0x4ce63d*/
      v9[0] = LinkedTo->TechnoClass; /*0x4ce645*/
      v9[1] = LinkedTo->?; /*0x4ce651*/
      v9[2] = LinkedTo->?; /*0x4ce658*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x4ce661*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v6); /*0x4ce668*/
    }
    else
    {
      LOWORD(v7) = *ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v8) /*0x4ce5ee*/
                 + ((unsigned __int16)*(_DWORD *)&this->__pad_50[4] << 8);
      FacingClass::Set_SyncLog((char *)this->?->?, &v7); /*0x4ce605*/
      v2 = *(_DWORD *)&this->__pad_50[4]; /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      *(_DWORD *)&this->__pad_50[4] = v4; /*0x4ce624*/
    }
  }
}



// ==== 0x004CE680  FootClass::UpdateDeployMovement  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateDeployMovement(FootClass *this)
{
  double v1; // st7
  int v3; // edi
  char *vtable3; // eax
  _DWORD *v5; // eax
  int (__stdcall ***v6)(void *, void *, int *); // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  _WORD *WeaponType; // eax
  int *v13; // eax
  int v14; // ecx
  char *v15; // ecx
  int v17; // [esp+28h] [ebp-1Ch] BYREF
  int referenceCount; // [esp+2Ch] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-14h]
  int v20; // [esp+34h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?); /*0x4ce694*/
  vtable3 = (char *)this->?; /*0x4ce696*/
  if ( !vtable3[140] ) /*0x4ce699*/
  {
    v5 = vtable3 + 156; /*0x4ce6a3*/
    v21[0] = *v5; /*0x4ce6aa*/
    v21[1] = v5[1]; /*0x4ce6b6*/
    v21[2] = v5[2]; /*0x4ce6c2*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v21)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce6dd*/
      v3 -= dword_8B3CAC; /*0x4ce6df*/
  }
  v6 = (int (__stdcall ***)(void *, void *, int *))this->?; /*0x4ce6e1*/
  v7 = 0; /*0x4ce6e4*/
  v17 = 0; /*0x4ce6e8*/
  if ( v6 ) /*0x4ce6ec*/
  {
    v8 = (**v6)(v6, &unk_822410, &referenceCount); /*0x4ce6fd*/
    if ( v8 >= 0 ) /*0x4ce701*/
      v7 = referenceCount; /*0x4ce70e*/
    Release3COM((ObjectClass *)&v17); /*0x4ce707*/
    v17 = v7; /*0x4ce71d*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce729*/
      WinAPI::Wrapper(v8); /*0x4ce72c*/
  }
  v9 = 0; /*0x4ce735*/
  if ( v7 ) /*0x4ce739*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)v7 + 12))(v7); /*0x4ce73f*/
    v7 = v17; /*0x4ce742*/
  }
  v10 = v3 - v9; /*0x4ce749*/
  v11 = (int)this->? - v9; /*0x4ce74b*/
  LOBYTE(this->?[0]) = 0; /*0x4ce756*/
  BYTE1(this->?[0]) = 0; /*0x4ce763*/
  if ( v10 <= v11 - v11 / 3 ) /*0x4ce769*/
  {
    if ( v10 <= v11 / 2 ) /*0x4ce79b*/
      goto LABEL_18; /*0x4ce79b*/
    v13 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this->? + 72))(this->?, v21); /*0x4ce7ab*/
    v14 = *v13; /*0x4ce7b1*/
    referenceCount = this->?; /*0x4ce7b3*/
    v19 = v14; /*0x4ce7b7*/
    Math::CalcAngle((double)v13[1] - (double)(int)this->?, (double)referenceCount - (double)v14); /*0x4ce7d6*/
    LOWORD(v19) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x4ce7f3*/
    v15 = (char *)this->?; /*0x4ce7fd*/
    v20 = v19; /*0x4ce800*/
    FacingClass::Update(v15 + 904, &v20); /*0x4ce80a*/
    this->?[1] = 0; /*0x4ce80f*/
    this->?[2] = 1072693248; /*0x4ce816*/
  }
  else
  {
    WeaponType = TechnoClass::GetWeaponType((TechnoClass *)((char *)this->? + 904), &v20); /*0x4ce779*/
    FacingClass::Update((char *)this->? + 928, WeaponType); /*0x4ce788*/
  }
  v7 = v17; /*0x4ce81d*/
LABEL_18:
  if ( v7 ) /*0x4ce823*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x4ce829*/
  return 1; /*0x4ce82c*/
}



// ==== 0x004CE840  DropPod::ProcessLanding  this=DropPod  sig=csp ====
char __thiscall DropPod::ProcessLanding(DropPod *this)
{
  int v3; // edi
  int *v4; // ecx
  int v5; // ecx
  double v6; // st7
  int (__stdcall ***v7)(_DWORD, void *, int *); // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  CellClass *v11; // ebx
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // ecx
  AnimClass *v19; // edi
  int Index; // eax
  int v21; // eax
  bool v22; // zf
  AnimClass *v23; // edi
  int v24; // eax
  int *v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // ecx
  int *v29; // ecx
  int v30; // eax
  _WORD *v31; // ecx
  int i; // edi
  __int16 v33; // cx
  _BYTE *v34; // eax
  int v35; // edi
  __int16 v36; // cx
  _BYTE *v37; // eax
  int v38; // edi
  __int16 v39; // cx
  _BYTE *v40; // eax
  int v41; // edi
  int v42; // ebp
  _DWORD *v43; // ebx
  Cell *v44; // eax
  _DWORD *v45; // edi
  int v46; // ebx
  int v47; // [esp+4Eh] [ebp-4Ch]
  char v48; // [esp+65h] [ebp-35h]
  int v49; // [esp+66h] [ebp-34h] BYREF
  int v50; // [esp+6Ah] [ebp-30h]
  int v51; // [esp+6Eh] [ebp-2Ch] BYREF
  int v52; // [esp+72h] [ebp-28h] BYREF
  int v53; // [esp+76h] [ebp-24h]
  __int16 v54[2]; // [esp+7Ah] [ebp-20h] BYREF
  int v55; // [esp+7Eh] [ebp-1Ch] BYREF
  int v56; // [esp+82h] [ebp-18h] BYREF
  int v57; // [esp+86h] [ebp-14h]
  int GroundHeight; // [esp+8Ah] [ebp-10h]
  char v59[12]; // [esp+8Eh] [ebp-Ch] BYREF

  if ( !*((_BYTE *)this + 81) ) /*0x4ce849*/
    return 1; /*0x4ce859*/
  v48 = 0; /*0x4ce85d*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 456))(*((_DWORD *)this + 3)); /*0x4ce86d*/
  v4 = (int *)(*((_DWORD *)this + 3) + 156); /*0x4ce86f*/
  v50 = v3; /*0x4ce875*/
  v56 = *v4; /*0x4ce87b*/
  v57 = v4[1]; /*0x4ce887*/
  GroundHeight = v4[2]; /*0x4ce88e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v56)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce8ae*/
  {
    v3 -= dword_8B3CAC; /*0x4ce8b0*/
    v50 = v3; /*0x4ce8b2*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 132))(*((_DWORD *)this + 3)) + 3221) ) /*0x4ce8c1*/
  {
    if ( !v3 ) /*0x4ce8cf*/
    {
      v5 = *((_DWORD *)this + 3); /*0x4ce8d1*/
      if ( *(float *)(v5 + 744) > 0.0 ) /*0x4ce8e5*/
      {
        v6 = *(float *)(v5 + 744) - 0.02; /*0x4ce8ed*/
        if ( v6 < 0.0 ) /*0x4ce900*/
          v6 = 0.0; /*0x4ce904*/
        *(float *)(v5 + 744) = v6; /*0x4ce90a*/
      }
    }
    *((_DWORD *)this + 16) = 0; /*0x4ce910*/
    *((_DWORD *)this + 17) = 0; /*0x4ce913*/
  }
  else
  {
    *((_DWORD *)this + 16) = 0; /*0x4ce91c*/
    *((_DWORD *)this + 17) = 0; /*0x4ce91f*/
  }
  v7 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 3); /*0x4ce922*/
  v53 = 0; /*0x4ce925*/
  v49 = 0; /*0x4ce92b*/
  if ( v7 ) /*0x4ce92f*/
  {
    v8 = (**v7)(v7, &unk_822410, &v52); /*0x4ce940*/
    if ( v8 >= 0 ) /*0x4ce944*/
    {
      v10 = v52; /*0x4ce953*/
      Release3COM((ObjectClass *)&v49); /*0x4ce95b*/
      v9 = v10; /*0x4ce960*/
    }
    else
    {
      Release3COM((ObjectClass *)&v49); /*0x4ce94a*/
      v9 = 0; /*0x4ce94f*/
    }
    v49 = v9; /*0x4ce964*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce970*/
      WinAPI::Wrapper(v8); /*0x4ce973*/
    if ( v9 ) /*0x4ce97e*/
      v53 = (*(int (__stdcall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x4ce986*/
  }
  v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 7); /*0x4ce998*/
  if ( !*((_BYTE *)this + 24) ) /*0x4ce99f*/
    goto LABEL_26; /*0x4ce99f*/
  v12 = Cell::IsBridge((Cell *)v11); /*0x4ce9a3*/
  if ( (unsigned __int8)Array::Contains(*((Array **)this + 3), (int)v12) ) /*0x4ce9ac*/
  {
    if ( *((_BYTE *)this + 24) ) /*0x4ce9b5*/
      goto LABEL_32; /*0x4ce9ba*/
LABEL_26:
    if ( !(*(int (__thiscall **)(_DWORD, CellClass *, int, int, _DWORD, int))(**((_DWORD **)this + 3) + 428))( /*0x4ce9d5*/
            *((_DWORD *)this + 3),
            v11,
            -1,
            -1,
            0,
            1) )
      goto LABEL_32; /*0x4ce9d5*/
  }
  TechnoClass::GetData((TechnoClass *)this); /*0x4ce9db*/
  v13 = *(_DWORD *)(*((_DWORD *)this + 3) + 156); /*0x4ce9ee*/
  v14 = *(_DWORD *)(*((_DWORD *)this + 3) + 160); /*0x4ce9f0*/
  GroundHeight = *(_DWORD *)(*((_DWORD *)this + 3) + 164); /*0x4ce9f6*/
  LOWORD(v51) = v13 / 256; /*0x4cea06*/
  HIWORD(v51) = v14 / 256; /*0x4cea1d*/
  *(_DWORD *)v54 = v51; /*0x4cea26*/
  v51 = 0; /*0x4cea4d*/
  v15 = *LayerClass::Pathfinding_Find( /*0x4cea5c*/
           &stru_87F5F0.__pad_58[416],
           (int)&v51,
           &v55,
           v54,
           1,
           -1,
           9,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&v51,
           0,
           0);
  v52 = v15; /*0x4cea65*/
  if ( v15 == dword_8B3C58 ) /*0x4cea6e*/
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 364))( /*0x4cebc7*/
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 3) + 108,
      0,
      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
      0,
      1,
      1,
      0);
    *((_DWORD *)this + 7) = dword_8B3C78; /*0x4cebd3*/
    *((_DWORD *)this + 8) = dword_8B3C7C; /*0x4cebda*/
    v21 = v49; /*0x4cebdd*/
    v22 = v49 == 0; /*0x4cebe7*/
    *((_DWORD *)this + 9) = dword_8B3C80; /*0x4cebe9*/
    if ( !v22 ) /*0x4cebec*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x4cebf1*/
    return 0; /*0x4cebfd*/
  }
  GroundHeight = 0; /*0x4cea91*/
  v57 = (SHIWORD(v15) << 8) + 128; /*0x4cea9e*/
  v56 = ((__int16)v15 << 8) + 128; /*0x4ceaa8*/
  GroundHeight = Cell::GetGroundHeight(&v56); /*0x4ceab1*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v52) + 80) & 0x100) != 0 ) /*0x4ceacd*/
    GroundHeight += dword_8B3CAC; /*0x4ceadb*/
  (*(void (__stdcall **)(DropPod *, int, int, int))(*((_DWORD *)this + 1) + 68))(this + 1, v56, v57, GroundHeight); /*0x4ceaff*/
LABEL_32:
  if ( !*((_BYTE *)this + 82) && v50 < 300 ) /*0x4ceb15*/
  {
    v16 = (int *)(*((_DWORD *)this + 3) + 156); /*0x4ceb1e*/
    v56 = *v16; /*0x4ceb25*/
    v57 = v16[1]; /*0x4ceb31*/
    GroundHeight = v16[2]; /*0x4ceb3d*/
    v17 = Cell::GetGroundHeight(&v56); /*0x4ceb41*/
    v18 = *((_DWORD *)this + 3); /*0x4ceb46*/
    GroundHeight = v17; /*0x4ceb49*/
    *((_BYTE *)this + 82) = 1; /*0x4ceb4d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18) + 3221) ) /*0x4ceb59*/
    {
      v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4ceb71*/
      if ( v19 ) /*0x4ceb78*/
      {
        Index = AnimTypeClass::FindIndex((AnimTypeClass *)&stru_822420.?); /*0x4ceb83*/
        AnimClass::ctor(v19, *(void **)(FootClass_Array.?[3] + 4 * Index), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4ceba3*/
      }
    }
    else if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 44))(*((_DWORD *)this + 3)) == 2 ) /*0x4cec09*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1732) + 3580) ) /*0x4cec14*/
      {
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4cec28*/
        if ( v23 ) /*0x4cec2f*/
        {
          v24 = AnimTypeClass::FindIndex(&stru_822420); /*0x4cec36*/
          AnimClass::ctor(v23, *(void **)(FootClass_Array.?[3] + 4 * v24), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4cec58*/
        }
      }
    }
    v25 = (int *)*((_DWORD *)this + 3); /*0x4cec5d*/
    if ( v25[27] > 0 ) /*0x4cec63*/
    {
      v26 = (*(int (__thiscall **)(int *))(*v25 + 132))(v25); /*0x4cec6c*/
      StartAudioControllerAt(*(_DWORD *)(v26 + 1328), &v56, 0); /*0x4cec7a*/
    }
  }
  v27 = v53; /*0x4cec7f*/
  if ( v50 <= v53 ) /*0x4cec89*/
  {
    v28 = *((_DWORD *)this + 3); /*0x4cec8f*/
    if ( *(float *)(v28 + 744) <= 0.0 ) /*0x4ceca3*/
    {
      v29 = (int *)(v28 + 156); /*0x4ceca9*/
      v56 = *v29; /*0x4cecb1*/
      v57 = v29[1]; /*0x4cecbd*/
      GroundHeight = v29[2]; /*0x4cecc4*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v56)->flags[0] & 0x100) != 0 ) /*0x4cecdb*/
      {
        v30 = Cell::GetGroundHeight(&v56); /*0x4cece7*/
        if ( GroundHeight >= dword_8B3CAC + v30 ) /*0x4cecfa*/
          *(_BYTE *)(*((_DWORD *)this + 3) + 140) = 1; /*0x4cecff*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 460))(*((_DWORD *)this + 3), v27); /*0x4ced0c*/
      v47 = *((_DWORD *)this + 3); /*0x4ced1a*/
      *((_BYTE *)this + 81) = 0; /*0x4ced1b*/
      *((_BYTE *)this + 80) = 0; /*0x4ced1f*/
      v48 = 1; /*0x4ced23*/
      GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, v47); /*0x4ced28*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 1348))(*((_DWORD *)this + 3), 0, 0); /*0x4ced34*/
      v31 = (_WORD *)*((_DWORD *)this + 3); /*0x4ced3a*/
      *((_DWORD *)this + 18) = 0; /*0x4ced3d*/
      *((_DWORD *)this + 16) = 0; /*0x4ced40*/
      *((_DWORD *)this + 19) = 0; /*0x4ced43*/
      *((_DWORD *)this + 17) = 0; /*0x4ced46*/
      if ( v31[686] || v31[687] ) /*0x4ced52*/
      {
        for ( i = 0; i < 8; ++i ) /*0x4ced5f*/
        {
          v33 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(i & 7) + 82]); /*0x4ced7f*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(i & 7) + 82]) + *(_WORD *)(*((_DWORD *)this + 3) + 1372); /*0x4ced87*/
          HIWORD(v53) = v33; /*0x4ced8d*/
          *(_DWORD *)v54 = v53; /*0x4ced9b*/
          v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4ced9f*/
          --v34[290]; /*0x4cedb0*/
        }
        v35 = 0; /*0x4cedcd*/
        *(_DWORD *)(*((_DWORD *)this + 3) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 3) + 440))( /*0x4cedcf*/
                                                                 *((_DWORD *)this + 3),
                                                                 &v55);
        do /*0x4cee2a*/
        {
          v36 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(v35 & 7) + 82]); /*0x4cedf3*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(v35 & 7) + 82]) /*0x4cedfb*/
                      + *(_WORD *)(*((_DWORD *)this + 3) + 1372);
          HIWORD(v53) = v36; /*0x4cee01*/
          *(_DWORD *)v54 = v53; /*0x4cee0f*/
          v37 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4cee13*/
          ++v35; /*0x4cee20*/
          ++v37[290]; /*0x4cee24*/
        }
        while ( v35 < 8 ); /*0x4cee2a*/
      }
      else
      {
        v38 = 0; /*0x4cee40*/
        *(_DWORD *)(*((_DWORD *)this + 3) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_WORD *, int *))(*(_DWORD *)v31 + 440))( /*0x4cee42*/
                                                                 v31,
                                                                 &v55);
        do /*0x4cee9d*/
        {
          v39 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(v38 & 7) + 82]); /*0x4cee66*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(v38 & 7) + 82]) /*0x4cee6e*/
                      + *(_WORD *)(*((_DWORD *)this + 3) + 1372);
          HIWORD(v53) = v39; /*0x4cee74*/
          *(_DWORD *)v54 = v53; /*0x4cee82*/
          v40 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4cee86*/
          ++v38; /*0x4cee93*/
          ++v40[290]; /*0x4cee97*/
        }
        while ( v38 < 8 ); /*0x4cee9d*/
      }
      v41 = *((_DWORD *)this + 7) / 256; /*0x4ceec5*/
      v42 = *((_DWORD *)this + 8) / 256; /*0x4ceec8*/
      v43 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 3) + 72))(*((_DWORD *)this + 3), v59); /*0x4ceece*/
      if ( (unsigned __int16)(*v43 / 256) == (_WORD)v41 && (unsigned __int16)(v43[1] / 256) == (_WORD)v42 /*0x4cef4d*/
        || (LOWORD(v53) = *((_DWORD *)this + 7) / 256,
            HIWORD(v53) = *((_DWORD *)this + 8) / 256,
            *(_DWORD *)v54 = v53,
            v44 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54),
            v45 = Cell::IsBridge(v44),
            v45 == (_DWORD *)Team::GetMember(*((Team **)this + 3), 0)) )
      {
        v46 = *((_DWORD *)this + 1); /*0x4cef52*/
        *((_BYTE *)this + 52) = 0; /*0x4cef55*/
        (*(void (__stdcall **)(DropPod *, int, int, int))(v46 + 68))(this + 1, dword_8B3C78, dword_8B3C7C, dword_8B3C80); /*0x4cef7a*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 3) + 1152))(*((_DWORD *)this + 3), 0, 1); /*0x4cef88*/
      }
    }
  }
  if ( v49 ) /*0x4cef96*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v49 + 8))(v49); /*0x4cef9b*/
  return v48; /*0x4ce852*/
}



// ==== 0x004CEFB0  LandFootClassAtPosition  this=IPersistStream  sig=csp ====
int __fastcall FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
  int **v6; // esi
  int *v7; // eax
  int v8; // eax
  int *v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  int *v15; // ecx
  void *NearbyCell; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // ebx
  int v24; // edi
  int v25; // ebp
  int *v26; // ecx
  int *v27; // eax
  int v28; // ebx
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int *v33; // ecx
  int *v34; // eax
  float *Height; // eax
  char *v36; // ecx
  int *v37; // eax
  int v38; // eax
  double v39; // st7
  int v40; // ebp
  int v41; // eax
  int *v42; // ecx
  bool v43; // cc
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int *v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v55; // [esp+50h] [ebp-38h] BYREF
  int *v56; // [esp+54h] [ebp-34h] BYREF
  float v57; // [esp+58h] [ebp-30h] BYREF
  float v58; // [esp+5Ch] [ebp-2Ch] BYREF
  int v59; // [esp+60h] [ebp-28h]
  float v60; // [esp+64h] [ebp-24h] BYREF
  int v61; // [esp+68h] [ebp-20h]
  int v62; // [esp+6Ch] [ebp-1Ch]
  int v63[3]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v64[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v6 = (int **)(a1 + 12); /*0x4cefb6*/
  v59 = a1; /*0x4cefb9*/
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 12) + 440))(*(_DWORD *)(a1 + 12), &v58); /*0x4cefc7*/
  v7 = *v6; /*0x4cefcd*/
  v55 = 0; /*0x4cefcf*/
  if ( v7 ) /*0x4cefd9*/
  {
    v8 = ComPtr::ReleaseAndSet(&v55, v6); /*0x4cefe0*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4cefee*/
      WinAPI::Wrapper(v8); /*0x4ceff1*/
    if ( v55 && (*v6)[173] && (*v6)[191] && (*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf017*/
      a3 = 0; /*0x4cf01e*/
  }
  if ( *v6 && (*(int (__thiscall **)(int *))(**v6 + 44))(*v6) == 2 )
  {
    if ( *v6 )
    {
      v9 = *v6; /*0x4cf033*/
      v10 = (*(int (__thiscall **)(int *))(*v9 + 44))(*v6) == 2 ? (unsigned int)v9 : 0;
    }
    else
    {
      v10 = 0; /*0x4cf039*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(v10 + 1732) + 3595) ) /*0x4cf055*/
      a3 = 0; /*0x4cf05f*/
  }
  v11 = LODWORD(a4); /*0x4cf06c*/
  v62 = a6; /*0x4cf06e*/
  v12 = a5; /*0x4cf072*/
  LOWORD(v56) = SLODWORD(a4) / 256; /*0x4cf08c*/
  HIWORD(v56) = a5 / 256; /*0x4cf09f*/
  v13 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v56); /*0x4cf0ac*/
  v14 = Cell::IsBridge(v13); /*0x4cf0b8*/
  if ( v14 && !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf0cc*/
  {
    if ( Array::Contains(*v6, (int)v14) ) /*0x4cf0d9*/
    {
      v18 = (int *)(*(int (__thiscall **)(_DWORD *, int *, int *))(*v14 + 168))(v14, v63, *v6); /*0x4cf142*/
      v11 = *v18; /*0x4cf148*/
      v12 = v18[1]; /*0x4cf14a*/
      v62 = v18[2]; /*0x4cf150*/
    }
    else
    {
      v15 = *v6; /*0x4cf0e2*/
      v56 = *v6; /*0x4cf0e6*/
      if ( v56 && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 2 ) /*0x4cf0f4*/
      {
        NearbyCell = InfantryClass::FindNearbyCell(v56, (int)v14); /*0x4cf0fb*/
        if ( NearbyCell ) /*0x4cf102*/
        {
          v17 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)NearbyCell + 72))(NearbyCell, v63); /*0x4cf125*/
          v11 = *v17; /*0x4cf128*/
          v12 = v17[1]; /*0x4cf12a*/
          v62 = v17[2]; /*0x4cf130*/
        }
        else
        {
          v11 = dword_8B3C78; /*0x4cf10a*/
          v12 = dword_8B3C7C; /*0x4cf110*/
          v62 = dword_8B3C80; /*0x4cf116*/
        }
      }
    }
  }
  (*(void (__thiscall **)(int *))(**v6 + 464))(*v6); /*0x4cf158*/
  v19 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf167*/
  v20 = *v19; /*0x4cf16a*/
  v21 = v19[1] - v12; /*0x4cf171*/
  LODWORD(v60) = v20 - v11; /*0x4cf173*/
  v61 = v21; /*0x4cf17b*/
  Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf17f*/
  v23 = (int)v22; /*0x4cf184*/
  v56 = v22; /*0x4cf18c*/
  if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf197*/
  {
    v24 = LODWORD(a4); /*0x4cf1a2*/
    v25 = a5; /*0x4cf1a6*/
    v26 = *v6; /*0x4cf1ae*/
    v60 = a4; /*0x4cf1b4*/
    v61 = a5; /*0x4cf1b9*/
    v62 = a6; /*0x4cf1bd*/
    v27 = (int *)(*(int (__thiscall **)(int *, int *))(*v26 + 72))(v26, v63); /*0x4cf1c8*/
    v28 = *(_DWORD *)Cell::GetHeight(&v58, v27, (int *)&v60); /*0x4cf1d5*/
    if ( !v55 ) /*0x4cf1dd*/
      goto LABEL_32; /*0x4cf1dd*/
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf1e2*/
      goto LABEL_32; /*0x4cf1e2*/
    v29 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf1f2*/
    v30 = *v29; /*0x4cf1f5*/
    v31 = v29[1] - v25; /*0x4cf1fc*/
    LODWORD(v60) = v30 - v24; /*0x4cf1fe*/
    v61 = v31; /*0x4cf206*/
    Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf20a*/
    if ( v32 > 768 /*0x4cf248*/
      || (LOWORD(v58) = 0x2000,
          LOWORD(v57) = v28 - *(_WORD *)ProgressTimer::GetValue((_WORD *)*v6 + 452, &v60),
          (unsigned __int8)UnitClass::CompareCoordinateMagnitude(&v57)) )
    {
LABEL_32:
      v63[2] = a6; /*0x4cf259*/
      v33 = *v6; /*0x4cf25d*/
      v63[0] = v24; /*0x4cf260*/
      v63[1] = v25; /*0x4cf264*/
      v34 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v33 + 72))(v33, v64); /*0x4cf26f*/
      Height = (float *)Cell::GetHeight(&v60, v34, v63); /*0x4cf277*/
      v36 = (char *)(*v6 + 226); /*0x4cf285*/
      v58 = *Height; /*0x4cf28b*/
      FacingClass::Update(v36, &v58); /*0x4cf28f*/
    }
    v23 = (int)v56; /*0x4cf294*/
  }
  if ( v23 >= 256 || !a3 || *(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf2bc*/
  {
    if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf363*/
    {
      v38 = (*(int (__thiscall **)(int *, _DWORD *))(**v6 + 72))(*v6, v64); /*0x4cf373*/
      v58 = *(float *)v38; /*0x4cf37f*/
      v39 = Math::CalcAngle((double)*(int *)(v38 + 4) - (double)a5, (double)SLODWORD(a4) - (double)SLODWORD(v58)); /*0x4cf398*/
      LOWORD(a4) = Math::RoundToInt((v39 - 1.570796326794897) * -10430.06004058427); /*0x4cf3b1*/
      v57 = a4; /*0x4cf3ba*/
      v37 = (int *)&v57; /*0x4cf3be*/
      goto LABEL_51; /*0x4cf3be*/
    }
  }
  else
  {
    if ( !(*v6)[173] || !(*v6)[191] ) /*0x4cf2d4*/
      goto LABEL_44; /*0x4cf2d4*/
    if ( !v55 ) /*0x4cf2e2*/
    {
LABEL_43:
      v37 = ObjectClass::CalcTargetFacing(*v6, (int *)&a4, (*v6)[173]); /*0x4cf304*/
LABEL_51:
      FacingClass::Update((char *)*v6 + 928, v37); /*0x4cf3c2*/
      goto LABEL_52; /*0x4cf3cb*/
    }
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf2e7*/
    {
      if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf2f9*/
        goto LABEL_43; /*0x4cf2fe*/
    }
    else
    {
LABEL_44:
      LOWORD(a4) = 0; /*0x4cf320*/
      if ( !v55 /*0x4cf34a*/
        || (LOWORD(a4) = (*(unsigned __int16 (__stdcall **)(int))(*(_DWORD *)v55 + 16))(v55) << 13, !v55)
        || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) )
      {
        FacingClass::Update((char *)*v6 + 928, &a4); /*0x4cf356*/
      }
    }
  }
LABEL_52:
  v40 = v59; /*0x4cf3d0*/
  if ( !*(_BYTE *)(v59 + 92) || v23 >= 768 ) /*0x4cf3e1*/
  {
    v41 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf402*/
    v42 = *v6; /*0x4cf410*/
    if ( *(_BYTE *)(v41 + 3221) ) /*0x4cf408*/
    {
      v43 = v23 < *(_DWORD *)((*(int (__thiscall **)(int *))(*v42 + 132))(v42) + 760); /*0x4cf426*/
      v44 = **v6; /*0x4cf42a*/
      if ( v43 ) /*0x4cf42c*/
      {
        v45 = (*(int (**)(void))(v44 + 132))(); /*0x4cf432*/
        v46 = *v6; /*0x4cf443*/
        v47 = **v6; /*0x4cf445*/
        a4 = (float)(v23 / *(_DWORD *)(v45 + 760)); /*0x4cf44f*/
        v48 = (int *)(*(int (__thiscall **)(int *))(v47 + 132))(v46); /*0x4cf45b*/
        v49 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf45f*/
        v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 188))(v49) / 3; /*0x4cf481*/
        v50 = *v48; /*0x4cf485*/
        v58 = (double)v59 * (1.0 - a4); /*0x4cf497*/
        v59 = (*(int (__thiscall **)(int *))(v50 + 188))(v48); /*0x4cf4a1*/
        *(_DWORD *)(v40 + 56) = Math::RoundToInt((double)v59 * a4 + v58); /*0x4cf4b6*/
        goto LABEL_60; /*0x4cf4bb*/
      }
    }
    else
    {
      v44 = *v42; /*0x4cf4bd*/
    }
    v51 = (*(int (**)(void))(v44 + 132))(); /*0x4cf4bf*/
    *(_DWORD *)(v40 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)v51 + 188))(v51); /*0x4cf4cf*/
    goto LABEL_60; /*0x4cf4cf*/
  }
  *(_DWORD *)(v40 + 56) = *(_DWORD *)(v40 + 36) - Cell::GetGroundHeight((_DWORD *)(v59 + 28)); /*0x4cf3f6*/
LABEL_60:
  if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) /*0x4cf4e8*/
    && (unsigned __int8)DamageArea::CheckOccupancyEligibility(v40) )
  {
    if ( v23 >= 128 ) /*0x4cf4f7*/
    {
      if ( v23 >= 512 ) /*0x4cf52d*/
      {
        if ( v23 < 768 && a3 ) /*0x4cf551*/
        {
          *(_DWORD *)(v40 + 64) = 0; /*0x4cf553*/
          *(_DWORD *)(v40 + 68) = 1072168960; /*0x4cf556*/
        }
      }
      else if ( a3 ) /*0x4cf535*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf537*/
        *(_DWORD *)(v40 + 68) = 1071644672; /*0x4cf53a*/
      }
    }
    else
    {
      if ( a3 ) /*0x4cf4ff*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf501*/
        *(_DWORD *)(v40 + 68) = 0; /*0x4cf504*/
      }
      if ( !*(_BYTE *)(v40 + 92) && *(double *)(v40 + 72) < 0.05 ) /*0x4cf51c*/
        LocomotionClass::CheckBridgeBlock(v40); /*0x4cf520*/
    }
  }
  if ( *((_BYTE *)*v6 + 131) ) /*0x4cf55f*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)(*v6)[135]) ) /*0x4cf573*/
    {
      v52 = (int)(*v6 + 39); /*0x4cf57e*/
      a4 = *(float *)v52; /*0x4cf586*/
      a5 = *(_DWORD *)(v52 + 4); /*0x4cf592*/
      a6 = *(_DWORD *)(v52 + 8); /*0x4cf599*/
      if ( Cell::IsPassable(&a4) /*0x4cf5dd*/
        || (*(_DWORD *)dword_A8B230 & 0x1000) != 0
        && (v53 = (int)(*v6 + 39),
            a4 = *(float *)v53,
            a5 = *(_DWORD *)(v53 + 4),
            a6 = *(_DWORD *)(v53 + 8),
            Game::Stub3((int)&a4)) )
      {
        (*(void (__thiscall **)(int *))(**v6 + 336))(*v6); /*0x4cf5ec*/
      }
    }
  }
  if ( v55 ) /*0x4cf5f8*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v55 + 8))(v55); /*0x4cf5fd*/
  return v23; /*0x4cf600*/
}



// ==== 0x004CF610  JumpjetLocomotionClass::ComputeRotationMatrix  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeRotationMatrix(JumpjetLocomotionClass *this, float *a2, signed int a3)
{
  int *v3; // edi
  JumpjetLocomotionClass *v4; // esi
  FootClass *Owner; // ecx
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  float *result; // eax
  float v11; // [esp+0h] [ebp-3Ch]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+0h] [ebp-3Ch]
  Matrix3x4 v15; // [esp+Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v15); /*0x4cf619*/
  v3 = (int *)a3; /*0x4cf61e*/
  v4 = this; /*0x4cf622*/
  if ( a3 ) /*0x4cf628*/
    *v3 |= 8 * (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &a3) >> 10) + 1) >> 1) & 0x1F); /*0x4cf64f*/
  a3 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v4->?->?, &this) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x4cf677*/
  v11 = (double)a3 * -0.1963495408493621; /*0x4cf685*/
  Matrix2D::Rotate(v15.m_Data, v11); /*0x4cf688*/
  if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 114))(v4->?) > 0 ) /*0x4cf69a*/
  {
    Owner = v4->?; /*0x4cf6a0*/
    if ( Owner->? ) /*0x4cf6a3*/
    {
      Matrix3x3::RotateX(v15.m_Data, *(float *)&Owner->?); /*0x4cf6b8*/
      if ( *(double *)&v4->DestinationCoords[1] <= *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass /*0x4cf6d6*/
                                                                + 33))(v4->?)
                                                             + 936) )
      {
        Matrix3D::RotateZ(v15.m_Data, *(float *)&v4->?->?); /*0x4cf706*/
      }
      else
      {
        v12 = *(float *)&v4->?->? /*0x4cf6f3*/
            + *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944);
        Matrix3D::RotateZ(v15.m_Data, v12); /*0x4cf6f6*/
      }
      if ( v3 ) /*0x4cf70d*/
        *v3 = -1; /*0x4cf713*/
    }
    else if ( *(double *)&v4->DestinationCoords[1] > *(double *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass /*0x4cf734*/
                                                                  + 33))(Owner)
                                                               + 936) )
    {
      if ( *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944) != 0.0 ) /*0x4cf756*/
      {
        if ( v3 ) /*0x4cf75a*/
        {
          v6 = *v3; /*0x4cf75c*/
          LOBYTE(v6) = *v3 | 4; /*0x4cf75e*/
          *v3 = v6; /*0x4cf760*/
        }
        v13 = *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944); /*0x4cf778*/
        Matrix3D::RotateZ(v15.m_Data, v13); /*0x4cf77b*/
      }
      if ( *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928) != 0.0 ) /*0x4cf79c*/
      {
        if ( JumpjetLocomotionClass::StubReturnZero_5((JumpjetLocomotionClass *)v4->?->?) ) /*0x4cf7a7*/
        {
          if ( v3 ) /*0x4cf7b2*/
          {
            v7 = *v3; /*0x4cf7b4*/
            LOBYTE(v7) = *v3 | 1; /*0x4cf7b6*/
            *v3 = v7; /*0x4cf7b8*/
          }
          v8 = *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7c5*/
        }
        else
        {
          if ( !JumpjetLocomotionClass::StubReturnZero_6((JumpjetLocomotionClass *)v4->?->?) ) /*0x4cf7dd*/
            goto LABEL_25; /*0x4cf7dd*/
          if ( v3 ) /*0x4cf7e1*/
          {
            v9 = *v3; /*0x4cf7e3*/
            LOBYTE(v9) = *v3 | 2; /*0x4cf7e5*/
            *v3 = v9; /*0x4cf7e7*/
          }
          v8 = -*(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7fa*/
        }
        v14 = v8; /*0x4cf801*/
        Matrix3x3::RotateX(v15.m_Data, v14); /*0x4cf804*/
      }
    }
  }
LABEL_25:
  result = a2; /*0x4cf809*/
  qmemcpy(a2, &v15, 0x30u); /*0x4cf818*/
  return result; /*0x4cf81a*/
}



// ==== 0x004CF830  FlyLocomotionClass::CalculateBobOffset  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::CalculateBobOffset(FlyLocomotionClass *this, _DWORD *a2)
{
  double v2; // st7
  FlyLocomotionClass *v3; // edi
  int v4; // ebp
  FlyLocomotionClass *v5; // ecx
  FootClass *Owner; // eax
  int v7; // esi
  FlyLocomotionClass *v8; // ebx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // esi
  FlyLocomotionClass *v12; // eax
  bool v13; // zf
  double v15; // [esp+4h] [ebp-18h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = this; /*0x4cf834*/
  v4 = 0; /*0x4cf838*/
  v5 = 0; /*0x4cf83a*/
  Owner = this->?; /*0x4cf83c*/
  this = 0; /*0x4cf83f*/
  if ( Owner ) /*0x4cf845*/
  {
    v7 = (*(int (__stdcall **)(FootClass *, void *, int *))Owner->TechnoClass)(Owner, &unk_822410, &v16); /*0x4cf856*/
    if ( v7 >= 0 ) /*0x4cf85a*/
    {
      v8 = (FlyLocomotionClass *)v16; /*0x4cf86e*/
      Release3COM((ObjectClass *)&this); /*0x4cf876*/
      v5 = v8; /*0x4cf87b*/
      this = v8; /*0x4cf87e*/
    }
    else
    {
      Release3COM((ObjectClass *)&this); /*0x4cf860*/
      v5 = 0; /*0x4cf865*/
      this = 0; /*0x4cf867*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4cf88c*/
      WinAPI::Wrapper(v7); /*0x4cf88f*/
  }
  v9 = 0; /*0x4cf898*/
  if ( v5 ) /*0x4cf89c*/
    v9 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v5->LocomotionClass + 12))(v5); /*0x4cf8a4*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v3->?->TechnoClass + 33))(v3->?) + 3221) /*0x4cf8d6*/
    && !v3->IsLanding
    && !v3->IsTakingOff
    && (*((int (__thiscall **)(FootClass *))v3->?->TechnoClass + 114))(v3->?) > v9 )
  {
    v16 = *(_DWORD *)&stru_A8EB00.?[416] % 20; /*0x4cf8e8*/
    __asm /*0x4cf8ec*/
    {
      fild [esp+18h+var_4]
      fmul ds:dbl_7E8AF0
      fstp [esp+18h+var_1C+4]; double
    }
    Math::SinCos(v15); /*0x4cf8f9*/
    __asm { fmul ds:dbl_7E48F0 } /*0x4cf8fe*/
    __asm { fadd ds:dbl_7E1738 }
    LOWORD(v10) = Math::RoundToInt(v2); /*0x4cf90d*/
    v4 = v10; /*0x4cf912*/
  }
  v11 = a2; /*0x4cf914*/
  *a2 = 0; /*0x4cf91a*/
  v12 = this; /*0x4cf91c*/
  v13 = this == 0; /*0x4cf920*/
  v11[1] = v4; /*0x4cf922*/
  if ( !v13 ) /*0x4cf925*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v12->LocomotionClass + 8))(v12); /*0x4cf92a*/
  return v11; /*0x4cf92f*/
}



// ==== 0x004CF940  FlyLocomotionClass::ShortFunc_4CF940  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ShortFunc_4CF940(FlyLocomotionClass *this, _DWORD *a2)
{
  *a2 = 0; /*0x4cf948*/
  a2[1] = 0; /*0x4cf94a*/
  return a2; /*0x4cf94d*/
}



// ==== 0x004CF950  TechnoClass::GetData  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetData(TechnoClass *this)
{
  int result; // eax
  void *vtable3; // ecx
  int v4; // eax
  BombClass *v5; // eax
  void *v6; // ecx
  _DWORD *WeaponType; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // [esp+4h] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 892))(this->?); /*0x4cf95b*/
  if ( !(_BYTE)result ) /*0x4cf963*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 896))(this->?); /*0x4cf96e*/
    if ( !(_BYTE)result ) /*0x4cf976*/
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 468))(this->?); /*0x4cf981*/
      if ( !(_BYTE)result ) /*0x4cf989*/
      {
        result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 472))(this->?); /*0x4cf994*/
        if ( !(_BYTE)result ) /*0x4cf99c*/
        {
          vtable3 = this->?; /*0x4cf9a2*/
          BYTE1(this->?[0]) = 0; /*0x4cf9a5*/
          LOBYTE(this->?[0]) = 1; /*0x4cf9a8*/
          if ( *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)vtable3 + 756))(vtable3, &v10) == dword_8B3C58 ) /*0x4cf9c3*/
            GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x4cf9db*/
          v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?); /*0x4cf9e5*/
          v5 = (BombClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cf9ef*/
          v6 = this->?; /*0x4cf9f5*/
          this->? = v5; /*0x4cf9f8*/
          if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 456))(v6) ) /*0x4cf9fd*/
          {
            WeaponType = TechnoClass::GetWeaponType((TechnoClass *)((char *)this->? + 928), &v10); /*0x4cfa15*/
            FacingClass::Set_SyncLog((char *)this->? + 904, WeaponType); /*0x4cfa24*/
          }
          v8 = this->?; /*0x4cfa29*/
          v11[0] = v8[39]; /*0x4cfa3e*/
          v11[1] = v8[40]; /*0x4cfa45*/
          v11[2] = v8[41]; /*0x4cfa4c*/
          v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8); /*0x4cfa52*/
          return (int)StartAudioControllerAt(*(_DWORD *)(v9 + 1324), v11, 0); /*0x4cfa60*/
        }
      }
    }
  }
  return result; /*0x4cfa65*/
}



// ==== 0x004CFA70  LocomotionClass::CheckBridgeBlock  this=LocomotionClass  sig=csp ====
char __thiscall LocomotionClass::CheckBridgeBlock(LocomotionClass *this)
{
  int vtable1; // eax
  FootClass *LinkedTo; // edi
  Cell *v4; // eax
  _DWORD *v5; // eax

  if ( (*((int (__thiscall **)(FootClass *))this->LinkedTo->TechnoClass + 97))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->TechnoClass), !(_BYTE)vtable1) )
  {
    vtable1 = (*((int (__thiscall **)(FootClass *))this->LinkedTo->TechnoClass + 11))(this->LinkedTo); /*0x4cfa95*/
    if ( vtable1 == 2 /*0x4cfacc*/
      && (LinkedTo = this->LinkedTo, vtable1 = (int)LinkedTo[1].?, *(_BYTE *)(vtable1 + 3597))
      && (v4 = (Cell *)(*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 111))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          LOBYTE(vtable1) = Array::Contains((Array *)this->LinkedTo, (int)v5),
          !(_BYTE)vtable1) )
    {
      LOBYTE(vtable1) = (*((char (__thiscall **)(FootClass *, _DWORD, int))LinkedTo->TechnoClass + 289))(LinkedTo, 0, 1); /*0x4cfad6*/
    }
    else
    {
      this->u8_14 = 0; /*0x4cfadf*/
      *((_BYTE *)this + 81) = 1; /*0x4cfae3*/
      *((_BYTE *)this + 82) = 0; /*0x4cfae7*/
      *((_DWORD *)this + 14) = 0; /*0x4cfaeb*/
    }
  }
  return vtable1; /*0x4cfadc*/
}



// ==== 0x004CFB00  FlyLocomotionClass::ComputeVoxelMatrix  this=FlyLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelMatrix(FlyLocomotionClass *this, float *a2, _DWORD *a3)
{
  int *location; // eax
  int slopeIndex; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  location = this->?->?; /*0x4cfb0e*/
  v8[0] = *location; /*0x4cfb15*/
  v8[1] = location[1]; /*0x4cfb21*/
  v8[2] = location[2]; /*0x4cfb2d*/
  slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x4cfb43*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3221) ) /*0x4cfb4b*/
    slopeIndex = 0; /*0x4cfb55*/
  qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x4cfb6d*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v7) >> 10) + 1) >> 1) /*0x4cfba3*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x4cfba6*/
  if ( a3 && *a3 != -1 ) /*0x4cfbbb*/
  {
    *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x4cfbc5*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v7) >> 10) + 1) >> 1) & 0x1F; /*0x4cfbe9*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x4cfbfd*/
  return a2; /*0x4cfbff*/
}



// ==== 0x004CFC10  FlyLocomotionClass::SynchronizeFacingDirection  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection(FlyLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x4cfc2f*/
}



// ==== 0x004CFC80  FlyLocomotionClass::ddtor  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::ddtor(FlyLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *(IID *)a2 = g_CLSID_FlyLocomotion; /*0x4cfc96*/
  a2[3] = unk_7E9A8C; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}



// ==== 0x004CFCC0  FlyLocomotionClass::BeginMove  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::BeginMove(FlyLocomotionClass *this, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( this ) /*0x4cfcd6*/
    {
      *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cfcd8*/
      *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}



// ==== 0x004CFCF0  FlyLocomotionClass::DispatchVirtualCall_0  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_0(FlyLocomotionClass *this)
{
  return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) > 0 ? 4 : 2;
}



// ==== 0x004CFD20  FlyLocomotionClass::ClearLocomotionDirty  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ClearLocomotionDirty(FlyLocomotionClass *this)
{
  if ( (*(unsigned __int8 (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x4cfd28*/
  {
    this->__pad_4F[0] = 1; /*0x4cfd2f*/
    *(_DWORD *)&this->__pad_4F[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 20, 30); /*0x4cfd48*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x4cfd63*/
      *(_DWORD *)&this->__pad_4F[1] = -*(_DWORD *)&this->__pad_4F[1]; /*0x4cfd6a*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x4cfd70*/
    this->FlyLocomotionClass_field_54 = 0; /*0x4cfd73*/
  }
  return StreamClass::ClearDirty((IUnknown *)this); /*0x4cfd80*/
}



// ==== 0x004CFD90  FlyLocomotionClass::ShortFunc_4CFD90  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ShortFunc_4CFD90(FlyLocomotionClass *this)
{
  return StreamClass::GetDirty((IUnknown *)this); /*0x4cfd9a*/
}



// ==== 0x004CFDA0  FlyLocomotionClass::DispatchVirtualCall_1  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::DispatchVirtualCall_1(FlyLocomotionClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3367) == 0; /*0x4cfdbe*/
}



// ==== 0x004CFE20  FlyLocomotionClass::ComputeFloatExpression_1  this=FlyLocomotionClass  sig=csp ====
__int64 __stdcall JumpjetLocomotionClass::ComputeFloatExpression_1(FlyLocomotionClass *this)
{
  int v1; // eax
  __int64 result; // rax
  int v3; // kr00_4

  v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x4cfe2a*/
  v3 = Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)this->CurrentSpeed); /*0x4cfe39*/
  WORD2(result) = HIWORD(v3); /*0x4cfe39*/
  LOWORD(result) = v3; /*0x4cfe39*/
  return result; /*0x4cfe3e*/
}



// ==== 0x004CFE50  FlyLocomotionClass::StubReturnZero_8  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_8(FlyLocomotionClass *this)
{
  if ( this->IsLanding ) /*0x4cfe54*/
    return 1; /*0x4cfe5b*/
  if ( this->IsTakingOff ) /*0x4cfe63*/
    return 0; /*0x4cfe6a*/
  return 3 /*0x4cfe60*/
       - ((*(unsigned __int8 (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) != 0);
}



// ==== 0x004CFE80  FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget  this=FlyLocomotionClass  sig=csp ====
void __stdcall FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(FlyLocomotionClass *this)
{
  HouseClass *owner; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  int ObjectVector_field_0x04; // ecx
  int v7; // eax
  int v8; // esi
  void (__stdcall **vtable0)(_DWORD); // edx
  ObjectVector v10; // [esp+Ch] [ebp-30h] BYREF
  ObjectVector v11; // [esp+24h] [ebp-18h] BYREF
  char thisa; // [esp+40h] [ebp+4h]

  if ( this->?->? ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v11, 0, 0); /*0x4cfea2*/
  *(_DWORD *)v11.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfeb7*/
  v11.ObjectVector_field_0x14 = 10; /*0x4cfebb*/
  v11.ObjectVector_field_0x10 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  *(_DWORD *)v10.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfecd*/
  v10.ObjectVector_field_0x14 = 10; /*0x4cfed3*/
  v10.ObjectVector_field_0x10 = 0; /*0x4cfed7*/
  if ( !*(_DWORD *)&dword_A8B238 /*0x4cfeef*/
    || (owner = this->?->?, owner->enemyHouseIndex == -1)
    || (thisa = 1, (unsigned __int8)House::IsCurrentPlayer((House *)owner)) )
  {
    thisa = 0; /*0x4cfefd*/
  }
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x4cff17*/
    if ( thisa ) /*0x4cff20*/
    {
      if ( *(_DWORD *)(v4 + 540) != *((_DWORD *)stru_A80220.? + this->?->?->enemyHouseIndex) ) /*0x4cff5e*/
        continue; /*0x4cff5e*/
    }
    else if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?->?, *(#375 **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(_BYTE *)(v4 + 129)
      && *(_BYTE *)(v4 + 144)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3226)
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 561)
      && (((int)dword_A8B230->vtable0 & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 1
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3598)) )
    {
      if ( *(_DWORD *)&dword_A8B238 /*0x4d003d*/
        && (unsigned __int8)House::IsCurrentPlayer((House *)this->?->?)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 540) + 52) + 422)
        && ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( v10.ObjectVector_field_0x10 >= v10.ObjectVector_field_0x08 /*0x4d0069*/
          && (!BYTE1(v10.ObjectVector_field_0x0C) && v10.ObjectVector_field_0x08
           || v10.ObjectVector_field_0x14 <= 0
           || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v10.__pad_0 + 8))(
                 &v10,
                 v10.ObjectVector_field_0x14 + v10.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v10.ObjectVector_field_0x10++; /*0x4d0074*/
        ObjectVector_field_0x04 = v10.ObjectVector_field_0x04; /*0x4d007b*/
      }
      else
      {
        if ( v11.ObjectVector_field_0x10 >= v11.ObjectVector_field_0x08 /*0x4d00ab*/
          && (!BYTE1(v11.ObjectVector_field_0x0C) && v11.ObjectVector_field_0x08
           || v11.ObjectVector_field_0x14 <= 0
           || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v11.__pad_0 + 8))(
                 &v11,
                 v11.ObjectVector_field_0x14 + v11.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v11.ObjectVector_field_0x10++; /*0x4d00b6*/
        ObjectVector_field_0x04 = v11.ObjectVector_field_0x04; /*0x4d00bd*/
      }
      *(_DWORD *)(ObjectVector_field_0x04 + 4 * v5) = v4; /*0x4d00c1*/
    }
  }
  if ( v10.ObjectVector_field_0x10 <= 0 ) /*0x4d00d1*/
  {
    if ( v11.ObjectVector_field_0x10 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v11.ObjectVector_field_0x10 - 1); /*0x4d0109*/
    v8 = v11.ObjectVector_field_0x04; /*0x4d0111*/
    vtable0 = (void (__stdcall **)(_DWORD))this->?->TechnoClass; /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v10.ObjectVector_field_0x10 - 1); /*0x4d00e2*/
    v8 = v10.ObjectVector_field_0x04; /*0x4d00ea*/
    vtable0 = (void (__stdcall **)(_DWORD))this->?->TechnoClass; /*0x4d00ee*/
  }
  vtable0[242](*(_DWORD *)(v8 + 4 * v7)); /*0x4d011b*/
LABEL_45:
  *(_DWORD *)v10.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0121*/
  if ( v10.ObjectVector_field_0x04 && BYTE1(v10.ObjectVector_field_0x0C) ) /*0x4d0136*/
  {
    __3_YAXPAX_Z((void *)v10.ObjectVector_field_0x04); /*0x4d0139*/
    v10.ObjectVector_field_0x04 = 0; /*0x4d0141*/
  }
  *(_DWORD *)v11.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0149*/
  BYTE1(v10.ObjectVector_field_0x0C) = 0; /*0x4d0150*/
  v10.ObjectVector_field_0x08 = 0; /*0x4d0154*/
  if ( v11.ObjectVector_field_0x04 ) /*0x4d0159*/
  {
    if ( BYTE1(v11.ObjectVector_field_0x0C) ) /*0x4d015f*/
      __3_YAXPAX_Z((void *)v11.ObjectVector_field_0x04); /*0x4d0162*/
  }
}



// ==== 0x004C0750  DSurface::DrawDashedLineStipple  this=DSurface  sig=csp ====
int __thiscall DSurface::DrawDashedLineStipple(DSurface *this, int *a2, int *a3, __int16 a4, int a5, int a6, char a7)
{
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  _WORD *v18; // esi
  _DWORD *v19; // edx
  int v20; // ecx
  _WORD *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  _WORD *v28; // edi
  _WORD *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // esi
  _DWORD *v37; // ecx
  int v38; // edx
  _WORD *v39; // eax
  int v40; // edx
  int v41; // esi
  _DWORD *v42; // edx
  int v43; // ebx
  _WORD *v44; // ecx
  int *v45; // eax
  int v46; // ebx
  int v47; // ebx
  _WORD *v48; // esi
  _DWORD *v49; // edx
  int v50; // ecx
  _WORD *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  _DWORD *v56; // edx
  int v57; // ecx
  _WORD *v58; // edi
  _WORD *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  int v65; // edi
  int v66; // esi
  _DWORD *v67; // ecx
  int v68; // edx
  _WORD *v69; // eax
  int v70; // edx
  int v71; // esi
  _DWORD *v72; // edx
  _WORD *v73; // ecx
  int *v74; // eax
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  int v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int *v88; // [esp+38h] [ebp+8h]
  int v89; // [esp+48h] [ebp+18h]
  int v90; // [esp+48h] [ebp+18h]
  int v91; // [esp+48h] [ebp+18h]
  int v92; // [esp+48h] [ebp+18h]
  int v93; // [esp+48h] [ebp+18h]
  int v94; // [esp+48h] [ebp+18h]

  v7 = *a2; /*0x4c075a*/
  v8 = a2[1]; /*0x4c075d*/
  v76 = 1; /*0x4c0768*/
  v9 = *a3; /*0x4c0770*/
  v10 = a3[1]; /*0x4c0772*/
  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( v7 > v9 ) /*0x4c078d*/
  {
    v12 = v7; /*0x4c078f*/
    v13 = v8; /*0x4c0791*/
    v7 = v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v13; /*0x4c079b*/
    v14 = v9; /*0x4c079d*/
    v9 = v12; /*0x4c079f*/
    v15 = abs32(v14 - v12); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = -1; /*0x4c07d3*/
  }
  v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
          *(int **)&stru_87E790.__pad_D8[60],
          v7,
          v8 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
  v87 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c080b*/
  v88 = (int *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = v88; /*0x4c0842*/
          v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = (_WORD *)v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0882*/
            }
            if ( v87 <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                v21 = (_WORD *)((char *)v21 + v19[8]); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
            {
              v21 = (_WORD *)((char *)v21 - v19[8]); /*0x4c089a*/
            }
            ++v18; /*0x4c08ac*/
            v20 = v76 + v23; /*0x4c08af*/
            --v22; /*0x4c08b1*/
          }
          while ( v22 );
          a6 = v20; /*0x4c08b4*/
        }
        goto LABEL_155; /*0x4c08b8*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c08cb*/
          v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08dd*/
        else
          v24 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = (_WORD *)v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0930*/
            }
            v28 = (_WORD *)((char *)v28 + v24); /*0x4c0936*/
            v29 += v87; /*0x4c0938*/
            if ( v87 <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                v29 = (_WORD *)((char *)v29 + v26[8]); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
            {
              v29 = (_WORD *)((char *)v29 - v26[8]); /*0x4c0944*/
            }
            v27 = v76 + v30; /*0x4c0955*/
            --v89; /*0x4c095c*/
          }
          while ( v89 );
          a6 = v27; /*0x4c0962*/
        }
        goto LABEL_155; /*0x4c0966*/
      }
      v31 = v9 - v7; /*0x4c096f*/
      v32 = v10 - v8; /*0x4c0971*/
      v33 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0975*/
      v79 = v33; /*0x4c097a*/
      if ( v32 < 0 ) /*0x4c097e*/
        v79 = -v33; /*0x4c0982*/
      v85 = 2 * v31; /*0x4c098e*/
      v34 = abs32(v32); /*0x4c0992*/
      v81 = 2 * v34; /*0x4c0999*/
      if ( v31 > v34 )
      {
        v35 = 0; /*0x4c09a5*/
        v36 = 2 * v34 - v31; /*0x4c09a7*/
        v90 = 0; /*0x4c09a9*/
        if ( v31 > 0 )
        {
          v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = (_WORD *)v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *((_WORD *)v88 + v35) = a4; /*0x4c09eb*/
              v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 = (int *)((char *)v88 + v79); /*0x4c0a08*/
              v39 += v87; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = v90; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( v87 <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                v39 = (_WORD *)((char *)v39 + v37[8]); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
            {
              v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a3a*/
            }
            ++v35; /*0x4c0a50*/
            v38 = v76 + v40; /*0x4c0a51*/
            v90 = v35; /*0x4c0a55*/
          }
          while ( v35 < v31 );
          a6 = v38; /*0x4c0a5f*/
        }
        goto LABEL_155; /*0x4c0a63*/
      }
      v41 = 2 * v31 - v34; /*0x4c0a68*/
      if ( v34 > 0 )
      {
        v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = (_WORD *)v77; /*0x4c0a7c*/
        v83 = v34; /*0x4c0a84*/
        v45 = v88; /*0x4c0a88*/
        v91 = 0; /*0x4c0a8c*/
        do
        {
          v46 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(_BYTE *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(_WORD *)((char *)v45 + v91) = a4; /*0x4c0abc*/
            v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            v91 += 2; /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
              v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += v87; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
          if ( v87 <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
              v44 = (_WORD *)((char *)v44 + v42[8]); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
          {
            v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0afe*/
          }
          v43 = v76 + v46; /*0x4c0b0f*/
          --v83; /*0x4c0b16*/
        }
        while ( v83 );
LABEL_154:
        a6 = v43; /*0x4c0e13*/
      }
    }
    else
    {
      if ( v8 == v10 )
      {
        v47 = v9 - v7; /*0x4c0b2d*/
        if ( v47 >= 0 )
        {
          v48 = v88; /*0x4c0b35*/
          v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = (_WORD *)v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b75*/
            }
            if ( v87 <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                v51 = (_WORD *)((char *)v51 + v49[8]); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
            {
              v51 = (_WORD *)((char *)v51 - v49[8]); /*0x4c0b8d*/
            }
            ++v48; /*0x4c0b9f*/
            v50 = v76 + v53; /*0x4c0ba2*/
            --v52; /*0x4c0ba4*/
          }
          while ( v52 );
          a6 = v50; /*0x4c0ba7*/
        }
        goto LABEL_155; /*0x4c0bab*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c0bbe*/
          v54 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bd0*/
        else
          v54 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = (_WORD *)v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0c23*/
            }
            v58 = (_WORD *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += v87; /*0x4c0c2b*/
            if ( v87 <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                v59 = (_WORD *)((char *)v59 + v56[8]); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
            {
              v59 = (_WORD *)((char *)v59 - v56[8]); /*0x4c0c37*/
            }
            v57 = v76 + v60; /*0x4c0c48*/
            --v92; /*0x4c0c4f*/
          }
          while ( v92 );
          a6 = v57; /*0x4c0c55*/
        }
        goto LABEL_155; /*0x4c0c59*/
      }
      v61 = v9 - v7; /*0x4c0c62*/
      v62 = v10 - v8; /*0x4c0c64*/
      v63 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0c68*/
      v80 = v63; /*0x4c0c6d*/
      if ( v62 < 0 ) /*0x4c0c71*/
        v80 = -v63; /*0x4c0c75*/
      v86 = 2 * v61; /*0x4c0c81*/
      v64 = abs32(v62); /*0x4c0c85*/
      v84 = 2 * v64; /*0x4c0c8c*/
      if ( v61 > v64 )
      {
        v65 = 0; /*0x4c0c98*/
        v66 = 2 * v64 - v61; /*0x4c0c9a*/
        v93 = 0; /*0x4c0c9c*/
        if ( v61 > 0 )
        {
          v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = (_WORD *)v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *((_WORD *)v88 + v65) = a4; /*0x4c0cde*/
              v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 = (int *)((char *)v88 + v80); /*0x4c0cfb*/
              v69 += v87; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = v93; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( v87 <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                v69 = (_WORD *)((char *)v69 + v67[8]); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
            {
              v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d2d*/
            }
            ++v65; /*0x4c0d43*/
            v68 = v76 + v70; /*0x4c0d44*/
            v93 = v65; /*0x4c0d48*/
          }
          while ( v65 < v61 );
          a6 = v68; /*0x4c0d52*/
        }
        goto LABEL_155; /*0x4c0d56*/
      }
      v71 = 2 * v61 - v64; /*0x4c0d5b*/
      if ( v64 > 0 )
      {
        v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = (_WORD *)v77; /*0x4c0d6f*/
        v82 = v64; /*0x4c0d77*/
        v74 = v88; /*0x4c0d7b*/
        v94 = 0; /*0x4c0d7f*/
        do
        {
          v75 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(_BYTE *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(_WORD *)((char *)v74 + v94) = a4; /*0x4c0daf*/
            v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            v94 += 2; /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
              v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += v87; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
          if ( v87 <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
              v73 = (_WORD *)((char *)v73 + v72[8]); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
          {
            v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0df1*/
          }
          v43 = v76 + v75; /*0x4c0e02*/
          --v82; /*0x4c0e09*/
        }
        while ( v82 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
LABEL_155:
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/
}



// ==== 0x004C0E30  DSurface::DrawStippledRect  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawStippledRect(DSurface *this, _DWORD *a2, _DWORD *a3, __int16 a4, char a5)
{
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _WORD *v13; // esi
  int v14; // edx
  __int16 *v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  __int16 *v19; // ebp
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // eax
  __int16 *v30; // edi
  int v31; // edx
  _DWORD *v32; // ecx
  __int16 *v33; // eax
  int v34; // edi
  int v35; // edx
  __int16 *v36; // ecx
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // eax
  __int16 *v40; // ebp
  int v41; // edx
  _DWORD *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  _DWORD *v50; // eax
  __int16 *v51; // edi
  int v53; // edx
  _DWORD *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h] BYREF
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h] BYREF
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  __int16 *v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
  v67 = *v6; /*0x4c0e5a*/
  v68 = v6[1]; /*0x4c0e61*/
  v69 = v6[2]; /*0x4c0e68*/
  v70 = v6[3]; /*0x4c0e73*/
  v7 = v68 + a2[1]; /*0x4c0e7e*/
  v63 = v67 + *a2; /*0x4c0e80*/
  v64 = v7; /*0x4c0e84*/
  v8 = v67 + *a3; /*0x4c0e93*/
  v66 = v68 + a3[1]; /*0x4c0e95*/
  v65 = v8; /*0x4c0ea6*/
  if ( !(unsigned __int8)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( v63 <= v65 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v10 = v64; /*0x4c0ec3*/
    v11 = v63; /*0x4c0ec7*/
    v9 = v65; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = v65; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    v65 = v11; /*0x4c0ed7*/
    v66 = v10; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (_WORD *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                   *(int **)&stru_87E790.__pad_D8[60],
                   v9,
                   v12 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
  v71 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
  v72 = (__int16 *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = v72; /*0x4c0f61*/
        v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
          }
          if ( v71 <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
              v13 = (_WORD *)((char *)v13 + v16[8]); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
          {
            v13 = (_WORD *)((char *)v13 - v16[8]); /*0x4c0f8e*/
          }
          ++v14; /*0x4c0fa4*/
          ++v15; /*0x4c0fa9*/
        }
        while ( v14 <= v65 - v63 ); /*0x4c0fae*/
      }
    }
    else if ( v63 == v65 ) /*0x4c0fcf*/
    {
      if ( v64 <= v66 ) /*0x4c0fd7*/
        v17 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
      else
        v17 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
          }
          v13 += v71; /*0x4c102b*/
          if ( v71 <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
              v13 = (_WORD *)((char *)v13 + v21[8]); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
          {
            v13 = (_WORD *)((char *)v13 - v21[8]); /*0x4c1035*/
          }
          v19 = (__int16 *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
      v73 = v24; /*0x4c106e*/
      if ( v23 < 0 ) /*0x4c1072*/
        v73 = -v24; /*0x4c1076*/
      v25 = abs32(v23); /*0x4c107f*/
      v62[0] = 2 * v22; /*0x4c1086*/
      v26 = 2 * v25; /*0x4c108a*/
      v56 = 2 * v25; /*0x4c108d*/
      if ( v22 <= v25 ) /*0x4c1091*/
      {
        v31 = 2 * v22 - v25; /*0x4c1126*/
        if ( v25 > 0 ) /*0x4c112a*/
        {
          v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              v33[v34] = a4; /*0x4c1155*/
              v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              ++v34; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 = (__int16 *)((char *)v33 + v73); /*0x4c1182*/
            if ( v71 <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                v13 = (_WORD *)((char *)v13 + v32[8]); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
            {
              v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c118d*/
            }
            if ( !--v58 ) /*0x4c11a3*/
              break; /*0x4c11a3*/
            v26 = v56; /*0x4c1146*/
          }
        }
      }
      else
      {
        v27 = 0; /*0x4c1099*/
        v28 = v26 - v22; /*0x4c109b*/
        if ( v22 > 0 ) /*0x4c109f*/
        {
          v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
          v30 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              v30[v27] = a4; /*0x4c10b9*/
              v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 = (__int16 *)((char *)v30 + v73); /*0x4c10ca*/
              v13 += v71; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( v71 <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                v13 = (_WORD *)((char *)v13 + v29[8]); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
            {
              v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10f4*/
            }
            v28 += v56; /*0x4c110a*/
            ++v27; /*0x4c110c*/
          }
          while ( v27 < v22 ); /*0x4c110f*/
        }
      }
    }
  }
  else if ( v64 == v66 ) /*0x4c11bc*/
  {
    v35 = 0; /*0x4c11c6*/
    if ( v65 - v63 >= 0 ) /*0x4c11ca*/
    {
      v36 = v72; /*0x4c11d0*/
      v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
        }
        if ( v71 <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
            v13 = (_WORD *)((char *)v13 + v37[8]); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
        {
          v13 = (_WORD *)((char *)v13 - v37[8]); /*0x4c11fd*/
        }
        ++v35; /*0x4c1213*/
        ++v36; /*0x4c1218*/
      }
      while ( v35 <= v65 - v63 ); /*0x4c121d*/
    }
  }
  else if ( v63 == v65 ) /*0x4c123e*/
  {
    if ( v64 <= v66 ) /*0x4c1246*/
      v38 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
    else
      v38 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
        }
        v13 += v71; /*0x4c129a*/
        if ( v71 <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
            v13 = (_WORD *)((char *)v13 + v42[8]); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
        {
          v13 = (_WORD *)((char *)v13 - v42[8]); /*0x4c12a4*/
        }
        v40 = (__int16 *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
    v46 = v45; /*0x4c12dc*/
    v59 = v45; /*0x4c12e0*/
    if ( v44 < 0 ) /*0x4c12e4*/
    {
      v46 = -v45; /*0x4c12e6*/
      v59 = -v45; /*0x4c12e8*/
    }
    v47 = abs32(v44); /*0x4c12f1*/
    v57 = 2 * v43; /*0x4c12f8*/
    v74 = 2 * v47; /*0x4c12ff*/
    if ( v43 <= v47 ) /*0x4c1303*/
    {
      v53 = 2 * v43 - v47; /*0x4c1395*/
      if ( v47 > 0 ) /*0x4c1399*/
      {
        v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            v72[v55] = a4; /*0x4c13b5*/
            v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            ++v55; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 = (__int16 *)((char *)v72 + v46); /*0x4c13e5*/
          v13 += v71; /*0x4c13ef*/
          if ( v71 <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
              v13 = (_WORD *)((char *)v13 + v54[8]); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
          {
            v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13f9*/
          }
          --v60; /*0x4c140b*/
        }
        while ( v60 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
        v51 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            v51[v49] = a4; /*0x4c1329*/
            v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 = (__int16 *)((char *)v51 + v59); /*0x4c133a*/
            v13 += v71; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
              v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( v71 <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
              v13 = (_WORD *)((char *)v13 + v50[8]); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
          {
            v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c1363*/
          }
          v48 += v74; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/
}



// ==== 0x004C1440  ObjectClass::method_4C1440  this=ObjectClass  sig=csp ====
int sub_4C1440(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c1452*/
  v2[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v2[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v2[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v2[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v2[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v2[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
          else
            return -1; /*0x4c14b2*/
        }
        else
        {
          return -1; /*0x4c14a3*/
        }
      }
      else
      {
        return -1; /*0x4c148d*/
      }
    }
    else
    {
      return -1; /*0x4c147a*/
    }
  }
  return result; /*0x4c1470*/
}



// ==== 0x004C14D0  ObjectClass::method_4C14D0  this=ObjectClass  sig=csp ====
int sub_4C14D0(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[63]; // [esp+8h] [ebp-1F8h] BYREF
  _DWORD v3[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c14e2*/
  memset(v3, 0, sizeof(v3)); /*0x4c14f5*/
  v2[0] = 252; /*0x4c14fc*/
  v3[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)g_DrawColorState + 12))( /*0x4c1517*/
             g_DrawColorState,
             v2,
             v3);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v2[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v2[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v2[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v2[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v2[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v2[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v2[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v2[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v2[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v2[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v2[46] < 0x100u); /*0x4c15ef*/
                      else
                        return -1; /*0x4c15de*/
                    }
                    else
                    {
                      return -1; /*0x4c15c4*/
                    }
                  }
                  else
                  {
                    return -1; /*0x4c15b4*/
                  }
                }
                else
                {
                  return -1; /*0x4c15a4*/
                }
              }
              else
              {
                return -1; /*0x4c1593*/
              }
            }
            else
            {
              return -1; /*0x4c1580*/
            }
          }
          else
          {
            return -1; /*0x4c156d*/
          }
        }
        else
        {
          return -1; /*0x4c155e*/
        }
      }
      else
      {
        return -1; /*0x4c1547*/
      }
    }
    else
    {
      return -1; /*0x4c1533*/
    }
  }
  return result; /*0x4c151c*/
}



// ==== 0x004C1600  ObjectClass::method_4C1600  this=ObjectClass  sig=csp ====
int sub_4C1600(ObjectClass *this)
{
  int result; // eax
  _DWORD v2[79]; // [esp+20h] [ebp-13Ch] BYREF

  result = g_lpDirectDraw7->lpVtbl->QueryInterface( /*0x4c1618*/
             g_lpDirectDraw7,
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&dword_8A0E00);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))dword_8A0E00)(dword_8A0E00, &unk_7F8070, &dword_8A0DF4); /*0x4c1630*/
    if ( !result ) /*0x4c1634*/
    {
      memset(v2, 0, sizeof(v2)); /*0x4c1644*/
      v2[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0) /*0x4c1687*/
        && (v2[1] & 1) != 0
        && (v2[14] & 0x400) != 0
        && (v2[33] & 0x2000) != 0
        && (v2[33] & 0x1000) != 0
        && (v2[33] & 0x20000) != 0 )
      {
        return 0; /*0x4c1693*/
      }
      else
      {
        return -1; /*0x4c1689*/
      }
    }
  }
  return result; /*0x4c168c*/
}



// ==== 0x004C16A0  ObjectClass::InitializeRadialGradientTexture  this=ObjectClass  sig=csp ====
int InitializeRadialGradientTexture(ObjectClass *this)
{
  double v1; // st7
  _DWORD *AudioStream_field_0x1C; // esi
  int result; // eax
  int v4; // eax
  ObjectClass *v5; // eax
  void *v6; // eax
  int v7; // edi
  _WORD *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  ObjectClass *v13; // eax
  ObjectClass *v14; // eax
  StructTable *v15; // eax
  double v16; // [esp+3Ch] [ebp-C8h]
  ObjectClass *v17; // [esp+44h] [ebp-C0h]
  void *v18[2]; // [esp+58h] [ebp-ACh]
  void *v19[2]; // [esp+58h] [ebp-ACh]
  const void *v20; // [esp+58h] [ebp-ACh]
  int v21; // [esp+60h] [ebp-A4h]
  _DWORD *v22; // [esp+64h] [ebp-A0h]
  int v23; // [esp+68h] [ebp-9Ch]
  _DWORD v24[11]; // [esp+6Ch] [ebp-98h] BYREF
  _DWORD v25[27]; // [esp+98h] [ebp-6Ch] BYREF

  AudioStream_field_0x1C = DSurface_Composite->AudioStream_field_0x1C; /*0x4c16b4*/
  v22 = AudioStream_field_0x1C; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, _DWORD *, __int64 *))(*(_DWORD *)dword_8A0DF4 + 32))( /*0x4c16cf*/
             dword_8A0DF4,
             &unk_7F80B0,
             AudioStream_field_0x1C,
             &g_DrawColorState);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0(v17) ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, _DWORD))(*(_DWORD *)dword_8A0DF4 + 24))( /*0x4c16fe*/
               dword_8A0DF4,
               (char *)&g_DrawColorState + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 24))( /*0x4c1718*/
                 g_DrawColorState,
                 HIDWORD(g_DrawColorState));
      if ( !result ) /*0x4c171d*/
      {
        memset(v25, 0, sizeof(v25)); /*0x4c172e*/
        v4 = *AudioStream_field_0x1C; /*0x4c1730*/
        v25[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(v4 + 88))(AudioStream_field_0x1C, v25); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
          memset(v24, 0, sizeof(v24)); /*0x4c175a*/
          *(_QWORD *)v18 = v25[3]; /*0x4c1764*/
          v24[3] = v25[3]; /*0x4c1768*/
          __asm { fild qword ptr [esp+0C0h+var_AC] } /*0x4c176c*/
          *(_QWORD *)v19 = v25[2]; /*0x4c1775*/
          v24[4] = v25[2]; /*0x4c177d*/
          __asm /*0x4c1781*/
          {
            fstp [esp+0C0h+var_7C]
            fild qword ptr [esp+0C0h+var_AC]
          }
          v24[0] = 44; /*0x4c178d*/
          v24[10] = 1065353216; /*0x4c1795*/
          __asm { fstp [esp+0C4h+var_78] } /*0x4c179e*/
          result = (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(g_DrawColorState) + 68))( /*0x4c17a5*/
                     HIDWORD(g_DrawColorState),
                     v24);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 52))( /*0x4c17bf*/
                       g_DrawColorState,
                       HIDWORD(g_DrawColorState));
            if ( !result ) /*0x4c17c4*/
            {
              v5 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x4c17cc*/
              if ( v5 ) /*0x4c17d6*/
              {
                dword_8A0E04 = (AudioStream *)sub_4A3270(v5, 256, 256, 0); /*0x4c17ec*/
                if ( dword_8A0E04 ) /*0x4c17f1*/
                {
                  v6 = malloc(0x20000u); /*0x4c17f8*/
                  v20 = v6; /*0x4c1802*/
                  if ( !v6 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  v7 = -128; /*0x4c180c*/
                  v8 = v6; /*0x4c1811*/
                  v21 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    v9 = v7 * v7; /*0x4c1817*/
                    v10 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      v23 = v9 + v10 * v10; /*0x4c1829*/
                      __asm /*0x4c182d*/
                      {
                        fild [esp+0C8h+var_9C]
                        fstp [esp+0C8h+var_C8]; double
                      }
                      Math::Sqrt(v16); /*0x4c1834*/
                      __asm { fmul ds:dbl_7E3D90 } /*0x4c1839*/
                      LOWORD(v11) = Math::RoundToInt(v1); /*0x4c1842*/
                      v12 = 400 - v11; /*0x4c184c*/
                      if ( 400 - v11 >= 0 ) /*0x4c184e*/
                      {
                        if ( v12 > 255 ) /*0x4c186d*/
                          v12 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v12 = 0; /*0x4c1850*/
                      }
                      ++v8; /*0x4c1886*/
                      ++v10; /*0x4c18af*/
                      *(v8 - 1) = (v12 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4c18b0*/
                                | (v12 >> g_BitMask_Blue << g_BitMask_Green)
                                | (v12 >> g_BitMask_Red << g_BitShift_Blue);
                    }
                    while ( v10 + 128 < 256 ); /*0x4c18c0*/
                    v7 = v21 + 1; /*0x4c18ca*/
                    v21 = v7; /*0x4c18cb*/
                  }
                  while ( v7 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(dword_8A0E04, v20) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v25, 0, sizeof(v25)); /*0x4c1911*/
                  v25[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v22 + 88))(v22, v25); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    v13 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x4c1930*/
                    if ( v13 ) /*0x4c193a*/
                      dword_8A0E08 = (DDraw *)sub_4A3270(v13, v25[3], v25[2], 1); /*0x4c194f*/
                    else
                      dword_8A0E08 = 0; /*0x4c1956*/
                    v14 = (ObjectClass *)__2_YAPAXI_Z(0x18004u); /*0x4c1965*/
                    if ( v14 ) /*0x4c196f*/
                      v15 = (StructTable *)sub_4A3630(v14); /*0x4c1973*/
                    else
                      v15 = 0; /*0x4c197a*/
                    dword_8A0E10 = v15; /*0x4c1982*/
                    if ( !dword_8A0E08 || !v15 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                dword_8A0E04 = 0; /*0x4c1854*/
              }
              return 1; /*0x4c185a*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4c16e8*/
}



// ==== 0x004C19B0  DDraw::CleanupSurfaces  this=DDraw  sig=csp ====
int DDraw::CleanupSurfaces(DDraw *this)
{
  StructTable *v1; // esi
  DDraw *v2; // esi
  DDraw *v3; // esi
  AudioStream *v4; // esi
  int result; // eax

  v1 = dword_8A0E10; /*0x4c19b1*/
  if ( dword_8A0E10 ) /*0x4c19bc*/
  {
    DDraw::Init((DDraw *)dword_8A0E10); /*0x4c19c0*/
    __3_YAXPAX_Z(v1); /*0x4c19c6*/
    dword_8A0E10 = 0; /*0x4c19ce*/
  }
  v2 = dword_8A0E0C; /*0x4c19d4*/
  if ( dword_8A0E0C ) /*0x4c19dc*/
  {
    DDraw::ReleaseSurfaces(dword_8A0E0C); /*0x4c19e0*/
    __3_YAXPAX_Z(v2); /*0x4c19e6*/
    dword_8A0E0C = 0; /*0x4c19ee*/
  }
  v3 = dword_8A0E08; /*0x4c19f4*/
  if ( dword_8A0E08 ) /*0x4c19fc*/
  {
    DDraw::ReleaseSurfaces(dword_8A0E08); /*0x4c1a00*/
    __3_YAXPAX_Z(v3); /*0x4c1a06*/
    dword_8A0E08 = 0; /*0x4c1a0e*/
  }
  v4 = dword_8A0E04; /*0x4c1a14*/
  if ( dword_8A0E04 ) /*0x4c1a1c*/
  {
    DDraw::ReleaseSurfaces((DDraw *)dword_8A0E04); /*0x4c1a20*/
    __3_YAXPAX_Z(v4); /*0x4c1a26*/
    dword_8A0E04 = 0; /*0x4c1a2e*/
  }
  if ( HIDWORD(g_DrawColorState) ) /*0x4c1a3b*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)HIDWORD(g_DrawColorState) + 8))(HIDWORD(g_DrawColorState)); /*0x4c1a40*/
    HIDWORD(g_DrawColorState) = 0; /*0x4c1a43*/
  }
  if ( (_DWORD)g_DrawColorState ) /*0x4c1a50*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)g_DrawColorState + 8))(g_DrawColorState); /*0x4c1a55*/
    LODWORD(g_DrawColorState) = 0; /*0x4c1a58*/
  }
  if ( dword_8A0DF4 ) /*0x4c1a65*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_8A0DF4 + 8))(dword_8A0DF4); /*0x4c1a6a*/
    dword_8A0DF4 = 0; /*0x4c1a6d*/
  }
  result = dword_8A0E00; /*0x4c1a73*/
  if ( dword_8A0E00 ) /*0x4c1a7a*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_8A0E00 + 8))(dword_8A0E00); /*0x4c1a7f*/
    dword_8A0E00 = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/
}



// ==== 0x004C1A90  DSurface::BlitWhole  this=DSurface  sig=csp ====
int __stdcall DSurface::BlitWhole(DSurface *this, int a2, int a3)
{
  XSurface *v3; // ecx

  return XSurface::BlitWhole(v3, (int *)this, a2, a3); /*0x4c1aa4*/
}



// ==== 0x004C1AB0  DSurface::IsDSurface  this=DSurface  sig=csp ====
char __thiscall DSurface::IsDSurface(DSurface *this)
{
  return 1; /*0x4c1ab2*/
}



// ==== 0x004C1AC0    this=DSurface  sig=? ====
void *__thiscall DSurface::loc_4C1AC0(void *Block, char a2)
{
  char v3; // al
  int v4; // eax
  int v5; // eax

  v3 = *((_BYTE *)Block + 24); /*0x4c1ac3*/
  *(_DWORD *)Block = &DSurface_Vtable; /*0x4c1ac6*/
  if ( v3 ) /*0x4c1ace*/
  {
    v4 = *((_DWORD *)Block + 7); /*0x4c1ad0*/
    if ( v4 ) /*0x4c1ad5*/
    {
      if ( MEMORY[0x8A0DCC] ) /*0x4c1adf*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v4 + 112))(v4, 0); /*0x4c1ae6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DCC] + 8))(MEMORY[0x8A0DCC]); /*0x4c1af1*/
        MEMORY[0x8A0DCC] = 0; /*0x4c1af4*/
      }
    }
  }
  __3_YAXPAX_Z(*((void **)Block + 8)); /*0x4c1b02*/
  v5 = *((_DWORD *)Block + 7); /*0x4c1b07*/
  *((_DWORD *)Block + 8) = 0; /*0x4c1b0f*/
  if ( v5 ) /*0x4c1b16*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4c1b1b*/
  *((_DWORD *)Block + 7) = 0; /*0x4c1b22*/
  *(_DWORD *)Block = &Surface_Vtable; /*0x4c1b2b*/
  if ( (a2 & 1) != 0 ) /*0x4c1b31*/
    __3_YAXPAX_Z(Block); /*0x4c1b34*/
  return Block; /*0x4c1b3e*/
}


// ==== 0x004C1B50  Vector::2DMagnitudeMath  this=Vector  sig=csp ====
double __thiscall Vector::TwoDMagnitudeMath(Vector *this)
{
  double result; // st7

  result = (double)this->Vector_field_0x4; /*0x4c1b50*/
  Math::Sqrt((double)*(int *)this->__pad_0 * (double)*(int *)this->__pad_0 + result * result); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}



// ==== 0x004C1B80  sub_4C1B80  this=-  sig=ida-proto ====
void sub_4C1B80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c1b8c*/
  dbl_8A0E38 = Math::Sqrt(v0 + v0); /*0x4c1b9e*/
}



// ==== 0x004C1BB0  sub_4C1BB0  this=-  sig=ida-proto ====
void sub_4C1BB0()
{
  dbl_8A0EA8 = dbl_8A0E38 / 60.0; /*0x4c1bbc*/
}



// ==== 0x004C1BD0  sub_4C1BD0  this=-  sig=ida-proto ====
void sub_4C1BD0()
{
  dbl_8A0E70 = 1.0 / dbl_8A0EA8; /*0x4c1bdc*/
}



// ==== 0x004C1BF0  sub_4C1BF0  this=-  sig=ida-proto ====
void sub_4C1BF0()
{
  dbl_8A0E68 = 0.0174532925199433 * 45.0; /*0x4c1bfc*/
}



// ==== 0x004C1C10  sub_4C1C10  this=-  sig=ida-proto ====
void sub_4C1C10()
{
  dbl_8A0E40 = 0.0174532925199433 * 60.0; /*0x4c1c1c*/
}



// ==== 0x004C1C30  sub_4C1C30  this=-  sig=ida-proto ====
void sub_4C1C30()
{
  dbl_8A0E18 = 0.0174532925199433 * 90.0; /*0x4c1c3c*/
}



// ==== 0x004C1C50  sub_4C1C50  this=-  sig=ida-proto ====
__int64 sub_4C1C50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0E18 - dbl_8A0E40); /*0x4c1c62*/
  result = Math::RoundToInt(v0 * dbl_8A0E38 * 0.5); /*0x4c1c76*/
  dword_8A0EB0 = result; /*0x4c1c7b*/
  return result; /*0x4c1c80*/
}



// ==== 0x004C1C90  sub_4C1C90  this=-  sig=ida-proto ====
void sub_4C1C90()
{
  dbl_8A0E48 = Math::ArcTan((double)dword_8A0EB0 * 0.00390625); /*0x4c1ca7*/
}



// ==== 0x004C1CC0  sub_4C1CC0  this=-  sig=ida-proto ====
void sub_4C1CC0()
{
  dbl_8A0E60 = Math::ArcTan((double)(2 * dword_8A0EB0) / dbl_8A0E38); /*0x4c1ce2*/
}



// ==== 0x004C1CF0  sub_4C1CF0  this=-  sig=ida-proto ====
__int64 sub_4C1CF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0EB0) + 0.5); /*0x4c1d0b*/
  dword_8A0EA0 = result; /*0x4c1d10*/
  return result; /*0x4c1d16*/
}



// ==== 0x004C1D20  sub_4C1D20  this=-  sig=ida-proto ====
int sub_4C1D20()
{
  word_8A0E30 = 0; /*0x4c1d22*/
  word_8A0E32 = 0; /*0x4c1d28*/
  return 0; /*0x4c1d2e*/
}



// ==== 0x004C1D30  sub_4C1D30  this=-  sig=ida-proto ====
int sub_4C1D30()
{
  dword_8A0E50 = 0; /*0x4c1d32*/
  dword_8A0E54 = 0; /*0x4c1d37*/
  dword_8A0E58 = 0; /*0x4c1d3c*/
  return 0; /*0x4c1d41*/
}



// ==== 0x004C1D50  sub_4C1D50  this=-  sig=ida-proto ====
int sub_4C1D50()
{
  dword_8A0E80 = 0; /*0x4c1d55*/
  dword_8A0E78 = 128; /*0x4c1d5f*/
  dword_8A0E7C = 128; /*0x4c1d64*/
  return 128; /*0x4c1d69*/
}



// ==== 0x004C1D70  sub_4C1D70  this=-  sig=ida-proto ====
int sub_4C1D70()
{
  dword_8A0E20 = 0; /*0x4c1d72*/
  dword_8A0E24 = 0; /*0x4c1d77*/
  dword_8A0E28 = 0; /*0x4c1d7c*/
  dword_8A0E2C = 0; /*0x4c1d81*/
  return 0; /*0x4c1d86*/
}



// ==== 0x004C1D90  sub_4C1D90  this=-  sig=ida-proto ====
int sub_4C1D90()
{
  dword_8A0E8C = 0; /*0x4c1d97*/
  dword_8A0E90 = 0; /*0x4c1d9c*/
  byte_8A0E94 = 1; /*0x4c1da1*/
  byte_8A0E95 = 0; /*0x4c1da8*/
  dword_8A0E88 = (int)&DynamicVectorClass<EBolt *>::`vftable'; /*0x4c1dad*/
  dword_8A0E9C = 10; /*0x4c1db7*/
  dword_8A0E98 = 0; /*0x4c1dc1*/
  return atexit(sub_4C1DD0); /*0x4c1dcc*/
}



// ==== 0x004C1DD0  sub_4C1DD0  this=-  sig=ida-proto ====
void __cdecl sub_4C1DD0()
{
  dword_8A0E88 = (int)&VectorClass<EBolt *>::`vftable'; /*0x4c1dd8*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c1dec*/
  {
    __3_YAXPAX_Z(dword_8A0E8C); /*0x4c1def*/
    dword_8A0E8C = 0; /*0x4c1df7*/
  }
  byte_8A0E95 = 0; /*0x4c1dfd*/
  dword_8A0E90 = 0; /*0x4c1e03*/
}



// ==== 0x004C1E10  TechnoClass::ResetDamageAccumulator  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::ResetDamageAccumulator(TechnoClass *this)
{
  this->RadioClass = 0; /*0x4c1e1a*/
  this->? = 0; /*0x4c1e1e*/
  this->? = 0x10000; /*0x4c1e21*/
  this->? = 0; /*0x4c1e28*/
  LOBYTE(this->?) = 0; /*0x4c1e2b*/
  this->? = 0; /*0x4c1e2e*/
  this->? = 0; /*0x4c1e31*/
  this->? = 0; /*0x4c1e34*/
  this->? = 0; /*0x4c1e3a*/
  this->? = 0; /*0x4c1e3d*/
  this->? = 0; /*0x4c1e3f*/
  this->? = 0; /*0x4c1e42*/
  return &this->RadioClass; /*0x4c1e45*/
}



// ==== 0x004C1E70  sub_4C1E70  this=-  sig=csp ====
int __stdcall sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15[2]; // [esp+8h] [ebp-10h] BYREF
  int v16[2]; // [esp+10h] [ebp-8h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &a1, v16); /*0x4c1e85*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, v15); /*0x4c1e9a*/
  v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  v10 = a8 - v9 - 2; /*0x4c1eb2*/
  v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x4c1ecf*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(dword_87F6C4 + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(dword_87F6C4 + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite + 52))( /*0x4c1f13*/
           DSurface_Composite,
           &DSurface_ViewBounds,
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}



// ==== 0x004C1F20  Lightning::Draw  this=Lightning  sig=csp ====
int __thiscall Lightning::Draw(Lightning *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  double v8; // st7
  int *v9; // esi
  int v10; // edi
  int *v11; // eax
  int result; // eax
  int v13; // ebx
  int i; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // edx
  int v19; // esi
  char *v20; // edi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // edi
  _DWORD *v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  _DWORD *v39; // esi
  int v40; // eax
  int v41; // edx
  char *v42; // eax
  _DWORD *v43; // ecx
  _DWORD *v44; // edx
  _DWORD *v45; // esi
  int v46; // edi
  int v47; // edx
  int v48; // eax
  int v49; // edi
  int v50; // esi
  int v51; // ebx
  int v52; // eax
  int v53; // edx
  double v54; // [esp+38h] [ebp-410h]
  double v55; // [esp+38h] [ebp-410h]
  char v56; // [esp+53h] [ebp-3F5h]
  int v57; // [esp+54h] [ebp-3F4h]
  int v58; // [esp+54h] [ebp-3F4h]
  int v59; // [esp+54h] [ebp-3F4h]
  int v60; // [esp+54h] [ebp-3F4h]
  int v61; // [esp+58h] [ebp-3F0h]
  int v62; // [esp+5Ch] [ebp-3ECh]
  char *v63; // [esp+60h] [ebp-3E8h]
  int v64; // [esp+60h] [ebp-3E8h]
  int v65; // [esp+64h] [ebp-3E4h]
  int v66; // [esp+68h] [ebp-3E0h]
  int v67; // [esp+6Ch] [ebp-3DCh]
  int v68; // [esp+70h] [ebp-3D8h]
  char *v69; // [esp+74h] [ebp-3D4h]
  int v71; // [esp+78h] [ebp-3D0h]
  int v72; // [esp+78h] [ebp-3D0h]
  int v74; // [esp+84h] [ebp-3C4h] BYREF
  int v75; // [esp+88h] [ebp-3C0h]
  int v76; // [esp+8Ch] [ebp-3BCh]
  _DWORD v77[9]; // [esp+90h] [ebp-3B8h] BYREF
  _DWORD v78[9]; // [esp+B4h] [ebp-394h] BYREF
  int v79; // [esp+D8h] [ebp-370h]
  _DWORD v80[9]; // [esp+DCh] [ebp-36Ch] BYREF
  Coord v81; // [esp+100h] [ebp-348h] BYREF

  v9 = (int *)&v81.__pad_C[124]; /*0x4c1f33*/
  v10 = 8; /*0x4c1f3a*/
  do /*0x4c1f64*/
  {
    Array::ForEach(v9, 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f49*/
    Array::ForEach(v9 + 9, 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f5b*/
    v9 += 22; /*0x4c1f60*/
    --v10; /*0x4c1f63*/
  }
  while ( v10 ); /*0x4c1f64*/
  v56 = 1; /*0x4c1f88*/
  v66 = 0; /*0x4c1f8d*/
  v11 = Coord::Subtract(&v81, a2 - a5, a3 - a6, a4 - a7); /*0x4c1f95*/
  v74 = *v11; /*0x4c1f9f*/
  v75 = v11[1]; /*0x4c1fa6*/
  __asm { fild [esp+410h+var_3C0] } /*0x4c1fad*/
  v76 = v11[2]; /*0x4c1fb1*/
  __asm /*0x4c1fb5*/
  {
    fild [esp+410h+var_3BC]
    fild [esp+410h+var_3C4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+410h+var_410]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v54); /*0x4c1fd6*/
  LOWORD(result) = Math::RoundToInt(v8); /*0x4c1fde*/
  v62 = result; /*0x4c1fe5*/
  if ( result )
  {
    v78[1] = a6; /*0x4c1ff1*/
    v78[2] = a7; /*0x4c1ffa*/
    v79 = (102 * result) >> 8; /*0x4c2014*/
    v61 = *((_DWORD *)this + 6); /*0x4c202c*/
    v63 = &v81.__pad_C[124]; /*0x4c2033*/
    v78[0] = a5; /*0x4c203c*/
    qmemcpy(&v78[3], v78, 0x18u); /*0x4c2043*/
    v80[1] = a3; /*0x4c2048*/
    v80[0] = a2; /*0x4c204f*/
    v80[2] = a4; /*0x4c2059*/
    qmemcpy(&v80[3], v80, 0x18u); /*0x4c207c*/
    v69 = &v81.__pad_C[160]; /*0x4c207e*/
    v68 = 0; /*0x4c208d*/
    v65 = (char *)v78 - &v81.__pad_C[124]; /*0x4c209e*/
    v13 = (23 * result) >> 8; /*0x4c20a6*/
    v57 = v13; /*0x4c20ab*/
    v67 = (char *)v77 - &v81.__pad_C[124]; /*0x4c20af*/
    while ( 1 )
    {
      while ( result > 64 && v66 < 8 ) /*0x4c20c1*/
      {
        for ( i = 0; i < 9; v77[i - 1] = v18 >> 1 ) /*0x4c20c7*/
        {
          v15 = v80[i + 1]; /*0x4c20d6*/
          v77[i] = (v80[i] + v78[i]) >> 1; /*0x4c20df*/
          v16 = v15 + v78[i + 1]; /*0x4c20e7*/
          v17 = v80[i + 2]; /*0x4c20e9*/
          v77[i + 1] = v16 >> 1; /*0x4c20f2*/
          v18 = v17 + v78[i + 2]; /*0x4c20fa*/
          i += 3; /*0x4c20fc*/
        }
        if ( v56 ) /*0x4c2110*/
        {
          __asm { fild [esp+408h+var_3F4] } /*0x4c2116*/
          v56 = 0; /*0x4c211a*/
          v19 = 0; /*0x4c211f*/
          v20 = &v81.__pad_C[60]; /*0x4c2121*/
          __asm { fstp [esp+408h+var_3D0] } /*0x4c2128*/
          do /*0x4c2166*/
          {
            _EAX = this; /*0x4c212c*/
            v58 = v19 + 7; /*0x4c2133*/
            __asm /*0x4c213a*/
            {
              fild dword ptr [eax+1Ch]
              fmul ds:dbl_7E44D0
              fild [esp+410h+var_3F4]
              fdivp st(1), st
              fstp [esp+410h+var_410]; double
            }
            Math::SinCos(v55); /*0x4c214c*/
            __asm { fmul [esp+410h+var_3D0] } /*0x4c2151*/
            LOWORD(v22) = Math::RoundToInt(v8); /*0x4c2158*/
            *(_DWORD *)v20 = v22; /*0x4c215d*/
            ++v19; /*0x4c215f*/
            v20 += 4; /*0x4c2160*/
          }
          while ( v19 < 6 ); /*0x4c2166*/
          v23 = &v77[1]; /*0x4c216f*/
          v24 = 3; /*0x4c217f*/
          v25 = (*(_DWORD *)&v81.__pad_C[68] + *(_DWORD *)&v81.__pad_C[76] + 2 * v13) >> 1; /*0x4c2184*/
          do /*0x4c21c0*/
          {
            v26 = *(_DWORD *)&v81.__pad_C[80]; /*0x4c219b*/
            *(v23 - 1) += *(_DWORD *)&v81.__pad_C[60] + *(_DWORD *)&v81.__pad_C[72]; /*0x4c21a2*/
            *v23 += *(_DWORD *)&v81.__pad_C[64] + v26; /*0x4c21b2*/
            v23[1] += v25; /*0x4c21b9*/
            v23 += 3; /*0x4c21bc*/
            --v24; /*0x4c21bf*/
          }
          while ( v24 ); /*0x4c21c0*/
          result = v62; /*0x4c21c2*/
        }
        if ( result > 128 ) /*0x4c21cb*/
        {
          v30 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c222e*/
          v77[0] += v30; /*0x4c223b*/
          v31 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c2244*/
          v77[1] += v31; /*0x4c2251*/
          v32 = Random::Range(&Randomizer_Global, -v13, v13); /*0x4c225a*/
          v77[2] += v32; /*0x4c225f*/
        }
        else
        {
          v27 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c21d6*/
          v77[0] += 2 * v13 * v27; /*0x4c21ee*/
          v28 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c21f2*/
          v77[1] += 2 * v13 * v28; /*0x4c220a*/
          v29 = Random::Range(&Randomizer_Global, -1, 1); /*0x4c220e*/
          v77[2] += 2 * v13 * v29; /*0x4c221d*/
        }
        if ( v62 <= v79 ) /*0x4c2272*/
        {
          v38 = -v13; /*0x4c22d6*/
          v39 = &v77[4]; /*0x4c22d8*/
          v60 = 2; /*0x4c22dc*/
          do /*0x4c232a*/
          {
            *(v39 - 1) += Random::Range(&Randomizer_Global, v38, v13); /*0x4c22fc*/
            *v39 += Random::Range(&Randomizer_Global, v38, v13); /*0x4c230f*/
            v40 = Random::Range(&Randomizer_Global, v38, v13); /*0x4c2311*/
            v41 = v39[1]; /*0x4c2316*/
            v39 += 3; /*0x4c2319*/
            *(v39 - 2) = v40 + v41; /*0x4c2322*/
            --v60; /*0x4c2326*/
          }
          while ( v60 ); /*0x4c232a*/
        }
        else
        {
          v33 = -v13; /*0x4c2274*/
          v34 = &v77[4]; /*0x4c2276*/
          v59 = 2; /*0x4c227a*/
          do /*0x4c22d2*/
          {
            v35 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c2289*/
            *(v34 - 1) = v77[0] + (v35 >> 1); /*0x4c229d*/
            v36 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c22a0*/
            *v34 = v77[1] + (v36 >> 1); /*0x4c22b4*/
            v37 = Random::Range(&Randomizer_Global, v33, v13); /*0x4c22b6*/
            v34 += 3; /*0x4c22bf*/
            *(v34 - 2) = v77[2] + (v37 >> 1); /*0x4c22c6*/
            --v59; /*0x4c22ce*/
          }
          while ( v59 ); /*0x4c22d2*/
        }
        v13 >>= 1; /*0x4c233d*/
        v42 = v63; /*0x4c2345*/
        v62 >>= 1; /*0x4c2349*/
        v57 = v13; /*0x4c234d*/
        v43 = v63; /*0x4c2351*/
        v64 = 3; /*0x4c2353*/
        do /*0x4c2398*/
        {
          *v43 = *(_DWORD *)((char *)v43 + v67); /*0x4c2365*/
          v43[1] = *(_DWORD *)((char *)v43 + v67 + 4); /*0x4c236a*/
          v43[2] = *(_DWORD *)((char *)v43 + v67 + 8); /*0x4c2370*/
          v44 = (_DWORD *)((char *)v43 + v65); /*0x4c2377*/
          v45 = v43 + 9; /*0x4c2379*/
          v43 += 3; /*0x4c237c*/
          *v45 = *v44; /*0x4c2381*/
          v45[1] = v44[1]; /*0x4c2386*/
          v45[2] = v44[2]; /*0x4c238c*/
          --v64; /*0x4c2394*/
        }
        while ( v64 ); /*0x4c2398*/
        *((_DWORD *)v42 + 18) = v62; /*0x4c23a2*/
        *((_DWORD *)v42 + 21) = v68; /*0x4c23a9*/
        *((_DWORD *)v42 + 19) = v13; /*0x4c23b9*/
        *((_DWORD *)v42 + 20) = (v68 + v61) >> 1; /*0x4c23bc*/
        v63 = v42 + 88; /*0x4c23c3*/
        v67 -= 88; /*0x4c23cf*/
        v65 -= 88; /*0x4c23d7*/
        v69 += 88; /*0x4c23db*/
        ++v66; /*0x4c23ed*/
        result = v62; /*0x4c23f1*/
        qmemcpy(v78, v77, sizeof(v78)); /*0x4c23f5*/
        v68 = (v68 + v61) >> 1; /*0x4c23f7*/
      }
      *(_DWORD *)&v81.__pad_C[24] = v78[3]; /*0x4c2415*/
      *(_DWORD *)&v81.__pad_C[28] = v78[4]; /*0x4c2423*/
      *(_DWORD *)&v81.__pad_C[32] = v78[5]; /*0x4c2431*/
      *(_DWORD *)&v81.__pad_C[36] = v80[3]; /*0x4c243f*/
      *(_DWORD *)&v81.__pad_C[40] = v80[4]; /*0x4c2446*/
      *(_DWORD *)&v81.__pad_C[44] = v80[5]; /*0x4c245b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[36], (int *)&v81.__pad_C[84]); /*0x4c246a*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[24], (int *)&v81.__pad_C[116]); /*0x4c2485*/
      v46 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[44]) - 2; /*0x4c24a5*/
      v71 = v68 - ZCoordToScreenY(*(int *)&v81.__pad_C[32]) - 2; /*0x4c24ba*/
      v47 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x4c24c6*/
      v48 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
          ? *(unsigned __int8 *)(v47 + a8)
          : *(unsigned __int16 *)(v47 + 2 * a8);
      (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x4c2512*/
                                                                                                 + 52))(
        DSurface_Composite,
        &DSurface_ViewBounds,
        &v81.__pad_C[84],
        &v81.__pad_C[116],
        v48,
        v46,
        v71,
        0);
      *(_DWORD *)&v81.__pad_C[48] = v78[6]; /*0x4c252a*/
      *(_DWORD *)&v81.__pad_C[52] = v78[7]; /*0x4c2538*/
      *(_DWORD *)&v81.__pad_C[12] = v80[6]; /*0x4c2546*/
      *(_DWORD *)&v81.__pad_C[16] = v80[7]; /*0x4c254d*/
      *(_DWORD *)&v81.__pad_C[56] = v78[8]; /*0x4c255b*/
      *(_DWORD *)&v81.__pad_C[20] = v80[8]; /*0x4c2578*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[12], (int *)&v81.__pad_C[108]); /*0x4c257f*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81.__pad_C[48], (int *)&v81.__pad_C[92]); /*0x4c259a*/
      v49 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[20]) - 2; /*0x4c25b6*/
      v72 = v68 - ZCoordToScreenY(*(int *)&v81.__pad_C[56]) - 2; /*0x4c25c7*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4c25d4*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, _DWORD, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 52))( /*0x4c25e8*/
          DSurface_Composite,
          &DSurface_ViewBounds,
          &v81.__pad_C[108],
          &v81.__pad_C[92],
          *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + a8),
          v49,
          v72,
          0);
      else
        (*(void (__thiscall **)(AudioStream *, CellStruct *, char *, char *, _DWORD, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 52))( /*0x4c2627*/
          DSurface_Composite,
          &DSurface_ViewBounds,
          &v81.__pad_C[108],
          &v81.__pad_C[92],
          *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * a8),
          v49,
          v72,
          0);
      *(_DWORD *)v81.__pad_0 = v78[0]; /*0x4c2636*/
      *(_DWORD *)&v81.Coord_field_0x2[2] = v78[1]; /*0x4c2644*/
      *(_DWORD *)v81.__pad_C = v80[0]; /*0x4c2652*/
      *(_DWORD *)&v81.__pad_C[4] = v80[1]; /*0x4c2659*/
      v81.Coord_field_0x8 = (void *)v78[2]; /*0x4c266b*/
      *(_DWORD *)&v81.__pad_C[8] = v80[2]; /*0x4c2681*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v81.__pad_C, &v74); /*0x4c2688*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v81, (int *)&v81.__pad_C[100]); /*0x4c26a3*/
      v50 = v61 - ZCoordToScreenY(*(int *)&v81.__pad_C[8]) - 2; /*0x4c26bd*/
      v51 = v68 - ZCoordToScreenY((int)v81.Coord_field_0x8) - 2; /*0x4c26cc*/
      v52 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
          ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 15)
          : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 30);
      (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, char *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x4c270d*/
                                                                                                + 52))(
        DSurface_Composite,
        &DSurface_ViewBounds,
        &v74,
        &v81.__pad_C[100],
        v52,
        v50,
        v51,
        0);
      result = --v66; /*0x4c2714*/
      if ( v66 < 0 ) /*0x4c2719*/
        break; /*0x4c2719*/
      v65 += 88; /*0x4c2730*/
      v67 += 88; /*0x4c273a*/
      v13 = *((_DWORD *)v63 - 3); /*0x4c2749*/
      v53 = *((_DWORD *)v63 - 2); /*0x4c274c*/
      v69 -= 88; /*0x4c274f*/
      qmemcpy(v78, v69, sizeof(v78)); /*0x4c2753*/
      v63 -= 88; /*0x4c2763*/
      qmemcpy(v80, v63, sizeof(v80)); /*0x4c2767*/
      v68 = *((_DWORD *)v63 + 21); /*0x4c276f*/
      v62 = *((_DWORD *)v63 + 18); /*0x4c2773*/
      v57 = v13; /*0x4c2777*/
      v61 = v53; /*0x4c277b*/
      result = v62; /*0x4c277f*/
    }
  }
  return result; /*0x4c2786*/
}



// ==== 0x004C2790  ObjectClass::method_4C2790  this=ObjectClass  sig=csp ====
int __thiscall sub_4C2790(ObjectClass *this)
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( this->owningHouseIndex )
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v4); /*0x4c27aa*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->?, v3); /*0x4c27be*/
    if ( (unsigned __int8)ClipLine(v4, v3, &DSurface_ViewBounds.field_0) )
      Lightning::Draw(
        (Lightning *)this,
        (int)this->AbstractClass,
        (int)this->?,
        (int)this->?,
        (int)this->?,
        this->?,
        this->?,
        LOBYTE(this->fallRate) != 0 ? 5 : 10);
    ++this->?; /*0x4c281a*/
  }
  result = this->owningHouseIndex >> 1; /*0x4c2821*/
  this->owningHouseIndex = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}



// ==== 0x004C2830  ObjectClass::method_4C2830  this=ObjectClass  sig=csp ====
int sub_4C2830(ObjectClass *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // ecx
  int *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // esi
  int *v9; // ebx
  int *v10; // esi
  int v11; // eax
  int v12; // eax
  void *v13; // edx
  int v14; // ecx
  _DWORD *v15; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]
  int v18[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+28h] [ebp-14h] BYREF
  char v20[12]; // [esp+30h] [ebp-Ch] BYREF

  result = dword_8A0E98 - 1; /*0x4c2839*/
  for ( i = dword_8A0E98 - 1; i >= 0; --i ) /*0x4c2843*/
  {
    v2 = (int *)*((_DWORD *)dword_8A0E8C + result); /*0x4c284f*/
    Block = v2; /*0x4c2852*/
    v3 = v2[8]; /*0x4c2856*/
    if ( v3 ) /*0x4c285b*/
    {
      v4 = (int *)(*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 176))( /*0x4c2888*/
                    v3,
                    v20,
                    v2[9],
                    0,
                    0,
                    0);
      v5 = *v4; /*0x4c288a*/
      v6 = v4[1]; /*0x4c288e*/
      v7 = v4[2]; /*0x4c2891*/
      if ( v5 != dword_8A0E50 || v6 != dword_8A0E54 || v7 != dword_8A0E58 ) /*0x4c28a4*/
      {
        v8 = Block; /*0x4c28a6*/
        *(_DWORD *)Block = v5; /*0x4c28aa*/
        v8[1] = v6; /*0x4c28ac*/
        v8[2] = v7; /*0x4c28af*/
      }
      v2 = (int *)Block; /*0x4c28b2*/
    }
    v9 = v2 + 10; /*0x4c28b9*/
    v10 = v2; /*0x4c28be*/
    if ( v2[10] ) /*0x4c28b6*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v19); /*0x4c28ce*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10 + 3, v18); /*0x4c28e2*/
      if ( (unsigned __int8)ClipLine(v19, v18, &DSurface_ViewBounds.field_0) ) /*0x4c28f4*/
      {
        v11 = -(*((_BYTE *)v10 + 44) != 0); /*0x4c2904*/
        LOBYTE(v11) = v11 & 0xFB; /*0x4c2906*/
        Lightning::Draw((Lightning *)v10, *v10, v10[1], v10[2], v10[3], v10[4], v10[5], v11 + 10); /*0x4c2938*/
      }
      ++v10[7]; /*0x4c293d*/
    }
    *v9 >>= 1; /*0x4c2944*/
    if ( !*((_DWORD *)Block + 10) ) /*0x4c294a*/
    {
      v12 = (*(int (__thiscall **)(int *, void **))(dword_8A0E88 + 16))(&dword_8A0E88, &Block); /*0x4c2960*/
      if ( v12 != -1 && v12 < dword_8A0E98 && v12 < --dword_8A0E98 ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v12; /*0x4c2983*/
          *((_DWORD *)dword_8A0E8C + v12 - 1) = *((_DWORD *)dword_8A0E8C + v12); /*0x4c2987*/
        }
        while ( v12 < dword_8A0E98 ); /*0x4c2993*/
      }
      v13 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        v14 = *((_DWORD *)Block + 8); /*0x4c299f*/
        v15 = (char *)Block + 32; /*0x4c29a2*/
        if ( v14 ) /*0x4c29a7*/
        {
          *(_DWORD *)(v14 + 1756) = 0; /*0x4c29a9*/
          *v15 = 0; /*0x4c29b3*/
        }
        __3_YAXPAX_Z(v13); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}



// ==== 0x004C29E0  ObjectClass::method_4C29E0  this=ObjectClass  sig=csp ====
void sub_4C29E0(TechnoClass *this)
{
  int i; // esi
  _DWORD *v2; // eax
  int v3; // ecx

  for ( i = 0; i < dword_8A0E98; ++i ) /*0x4c29ed*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_8A0E8C + i); /*0x4c29f4*/
    if ( v2 ) /*0x4c29f9*/
    {
      v3 = v2[8]; /*0x4c29fb*/
      if ( v3 ) /*0x4c2a00*/
      {
        *(_DWORD *)(v3 + 1756) = 0; /*0x4c2a02*/
        v2[8] = 0; /*0x4c2a08*/
      }
      __3_YAXPAX_Z(v2); /*0x4c2a0c*/
    }
  }
  dword_8A0E98 = 0; /*0x4c2a23*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c2a33*/
  {
    __3_YAXPAX_Z(dword_8A0E8C); /*0x4c2a36*/
    dword_8A0E8C = 0; /*0x4c2a3e*/
  }
  byte_8A0E95 = 0; /*0x4c2a44*/
  dword_8A0E90 = 0; /*0x4c2a4a*/
}



// ==== 0x004C2A60  TechnoClass::CreateTrailParticle  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::CreateTrailParticle(
        TechnoClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  void *result; // eax

  this->RadioClass = (void *)a2; /*0x4c2a74*/
  this->? = (void *)a3; /*0x4c2a7a*/
  this->? = (void *)a4; /*0x4c2a80*/
  v9 = a6; /*0x4c2a87*/
  this->? = (void *)a5; /*0x4c2a8b*/
  v10 = a7; /*0x4c2a8d*/
  this->? = v9; /*0x4c2a91*/
  this->? = a8; /*0x4c2a98*/
  this->? = v10; /*0x4c2aa0*/
  this->? = Random::Range(&Randomizer_Global, 0, 256); /*0x4c2aa8*/
  if ( dword_8A0E98 < dword_8A0E90 /*0x4c2ae0*/
    || (byte_8A0E95 || !dword_8A0E90)
    && dword_8A0E9C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A0E88 + 8))(
         &dword_8A0E88,
         dword_8A0E90 + dword_8A0E9C,
         0) )
  {
    v11 = dword_8A0E98++; /*0x4c2aed*/
    *((_DWORD *)dword_8A0E8C + v11) = this; /*0x4c2afc*/
  }
  result = (void *)__2_YAPAXI_Z(0x100u); /*0x4c2b04*/
  if ( result ) /*0x4c2b0f*/
    return (void *)ParticleSystemClass::Constructor( /*0x4c2b30*/
                     (int *)result,
                     *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
                     &a5,
                     0,
                     0,
                     &dword_8A0E50,
                     0);
  return result; /*0x4c2b0e*/
}



// ==== 0x004C2B40  ObjectClass::method_4C2B40  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C2B40(ObjectClass *this, _DWORD *a2)
{
  void *NeedsSaveOrLink; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  NeedsSaveOrLink = this->?; /*0x4c2b40*/
  if ( NeedsSaveOrLink ) /*0x4c2b4c*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)NeedsSaveOrLink + 176))( /*0x4c2b75*/
                     NeedsSaveOrLink,
                     v5,
                     this->occupant,
                     0,
                     0,
                     0);
    *a2 = *v3; /*0x4c2b7f*/
    a2[1] = v3[1]; /*0x4c2b84*/
    a2[2] = v3[2]; /*0x4c2b8a*/
    return a2; /*0x4c2b77*/
  }
  else
  {
    *a2 = dword_8A0E50; /*0x4c2ba6*/
    a2[1] = dword_8A0E54; /*0x4c2baf*/
    a2[2] = dword_8A0E58; /*0x4c2bb8*/
    return a2; /*0x4c2b97*/
  }
}



// ==== 0x004C2BD0  TechnoClass::updateSightRange  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::updateSightRange(TechnoClass *this, _BYTE *a2, int a3)
{
  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 1 && a2[144] && !a2[129] ) /*0x4c2bf2*/
  {
    this->? = a2; /*0x4c2c00*/
    this->? = a3; /*0x4c2c03*/
  }
}



// ==== 0x004C2C10  UnitClass::updateHarvesting  this=UnitClass  sig=csp ====
int __thiscall UnitClass::updateHarvesting(UnitClass *this)
{
  int result; // eax

  result = (int)this->?; /*0x4c2c10*/
  if ( result ) /*0x4c2c17*/
  {
    *(_DWORD *)(result + 1756) = 0; /*0x4c2c19*/
    this->? = 0; /*0x4c2c1f*/
  }
  return result; /*0x4c2c22*/
}



// ==== 0x004C2C30  ObjectClass::??0Iostream_init_QAE_XZ_3  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_3(Iostream_init *this)
{
  return this; /*0x4c2c32*/
}



// ==== 0x004C2C40  _DynamicVectorClass_PAVEBolt::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::Destroy(_DynamicVectorClass_PAVEBolt *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c2c46*/
  this->m_10 = 0; /*0x4c2c49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c2c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4c2c56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2c5e*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2c61*/
  this->m_8 = 0; /*0x4c2c64*/
}



// ==== 0x004C2C70  _DynamicVectorClass_PAVEBolt::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::GetItemIndex(_DynamicVectorClass_PAVEBolt *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c2c70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c2c85*/
  else
    return 0; /*0x4c2c77*/
}



// ==== 0x004C2C90  _VectorClass_PAVEBolt::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::Get(_VectorClass_PAVEBolt *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c2c9a*/
}



// ==== 0x004C2CA0  _VectorClass_PAVEBolt::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::Add(_VectorClass_PAVEBolt *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c2ca2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c2cad*/
  {
    v3 = 0; /*0x4c2caf*/
    if ( m_8 <= 0 ) /*0x4c2cb3*/
      return 1; /*0x4c2cd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c2cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c2cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c2cc4*/
    {
      ++v3; /*0x4c2cc6*/
      ++v4; /*0x4c2cc7*/
      if ( v3 >= m_8 ) /*0x4c2ccc*/
        return 1; /*0x4c2ccc*/
    }
  }
  return 0; /*0x4c2cce*/
}



// ==== 0x004C2CE0  _VectorClass_PAVEBolt::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::Release(_VectorClass_PAVEBolt *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c2cec*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c2cf6*/
    if ( a3 ) /*0x4c2cfc*/
      v4 = a3; /*0x4c2d12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c2d0e*/
    LOBYTE(this->m_C) = 1; /*0x4c2d16*/
    if ( v4 ) /*0x4c2d1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c2d25*/
      {
        m_8 = this->m_8; /*0x4c2d2c*/
        if ( a2 < m_8 ) /*0x4c2d31*/
          m_8 = a2; /*0x4c2d33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c2d39*/
          ++i; /*0x4c2d3e*/
        if ( BYTE1(this->m_C) ) /*0x4c2d4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2d56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c2d5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c2d67*/
      this->m_8 = a2; /*0x4c2d6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c2d72*/
      return 1; /*0x4c2d78*/
    }
    else
    {
      return 0; /*0x4c2d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEBolt *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c2d82*/
    return 1; /*0x4c2d88*/
  }
}



// ==== 0x004C2D90  _VectorClass_PAVEBolt::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::Remove(_VectorClass_PAVEBolt *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c2d9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2da3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2dab*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2dae*/
  this->m_8 = 0; /*0x4c2db1*/
}



// ==== 0x004C2DC0  _VectorClass_PAVEBolt::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::GetSize(_VectorClass_PAVEBolt *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c2dc0*/
    return 0; /*0x4c2dc8*/
  m_8 = this->m_8; /*0x4c2dce*/
  result = 0; /*0x4c2dd1*/
  if ( m_8 <= 0 ) /*0x4c2dd5*/
    return -1; /*0x4c2dec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c2ddb*/
  {
    if ( ++result >= m_8 ) /*0x4c2dea*/
      return -1; /*0x4c2dea*/
  }
  return result; /*0x4c2dca*/
}



// ==== 0x004C2E00  _VectorClass_PAVEBolt::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::GetCapacity(_VectorClass_PAVEBolt *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c2e00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c2e15*/
  else
    return 0; /*0x4c2e07*/
}



// ==== 0x004C2E20  _DynamicVectorClass_PAVEBolt::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::SetCapacity(_DynamicVectorClass_PAVEBolt *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c2e2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c2e32*/
    if ( a3 ) /*0x4c2e38*/
      v4 = a3; /*0x4c2e4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c2e4a*/
    LOBYTE(this->m_C) = 1; /*0x4c2e52*/
    if ( !v4 ) /*0x4c2e56*/
      return 0; /*0x4c2eca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c2e58*/
    {
      m_8 = this->m_8; /*0x4c2e5f*/
      if ( a2 < m_8 ) /*0x4c2e64*/
        m_8 = a2; /*0x4c2e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c2e6c*/
        ++i; /*0x4c2e71*/
      if ( BYTE1(this->m_C) ) /*0x4c2e7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c2e89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c2e91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c2e9a*/
    this->m_8 = a2; /*0x4c2ea2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c2ea5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEBolt *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c2eae*/
  }
  v7 = this->m_8; /*0x4c2eb1*/
  if ( v7 < this->m_10 ) /*0x4c2eb9*/
    this->m_10 = v7; /*0x4c2ebb*/
  return 1; /*0x4c2ebe*/
}



// ==== 0x004C2ED0  _DynamicVectorClass_PAVEBolt::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::FindItemIndex(_DynamicVectorClass_PAVEBolt *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c2ed0*/
  result = 0; /*0x4c2ed3*/
  if ( m_10 <= 0 ) /*0x4c2ed8*/
    return -1; /*0x4c2eef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c2ede*/
  {
    if ( ++result >= m_10 ) /*0x4c2eed*/
      return -1; /*0x4c2eed*/
  }
  return result; /*0x4c2ef2*/
}



// ==== 0x004C2F00  _VectorClass_PAVEBolt::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EBolt::QueryInterface(_VectorClass_PAVEBolt *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c2f03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EBolt *>::`vftable'; /*0x4c2f06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c2f10*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2f20*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2f2b*/
  this->m_8 = 0; /*0x4c2f31*/
  if ( (a2 & 1) != 0 ) /*0x4c2f38*/
    __3_YAXPAX_Z(this); /*0x4c2f3b*/
  return this->__pad_0; /*0x4c2f45*/
}



// ==== 0x004C2F50  _DynamicVectorClass_PAVEBolt::Constructor_VectorClass_EBolt___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(_DynamicVectorClass_PAVEBolt *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c2f53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EBolt *>::`vftable'; /*0x4c2f56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c2f60*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c2f70*/
  }
  BYTE1(this->m_C) = 0; /*0x4c2f7b*/
  this->m_8 = 0; /*0x4c2f81*/
  if ( (a2 & 1) != 0 ) /*0x4c2f88*/
    __3_YAXPAX_Z(this); /*0x4c2f8b*/
  return this->__pad_0; /*0x4c2f95*/
}



// ==== 0x004C2FA0  sub_4C2FA0  this=-  sig=ida-proto ====
int sub_4C2FA0()
{
  dword_8A0EB8 = 0; /*0x4c2fa2*/
  dword_8A0EBC = 0; /*0x4c2fa7*/
  dword_8A0EC0 = 0; /*0x4c2fac*/
  dword_8A0EC4 = 0; /*0x4c2fb1*/
  return 0; /*0x4c2fb6*/
}



// ==== 0x004C2FC0  EditClass::method_4C2FC0  this=EditClass  sig=csp ====
int *__thiscall sub_4C2FC0(
        EditClass *this,
        int a2,
        wchar_t *String,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // eax
  int Instance; // eax
  int v13; // eax

  ControlClass::Construct((ControlClass *)this, a2, a6, a7, a8, a9, 1, 0); /*0x4c2fe5*/
  v11 = a5; /*0x4c2ff6*/
  BYTE1(v11) = BYTE1(a5) & 0xFE; /*0x4c2ff8*/
  *((_DWORD *)this + 11) = v11; /*0x4c2ffc*/
  *this = (EditClass)&EditClass::`vftable'; /*0x4c3004*/
  *((_DWORD *)this + 12) = a10; /*0x4c300a*/
  *((_DWORD *)this + 13) = String; /*0x4c300d*/
  *((_DWORD *)this + 14) = a4 - 1; /*0x4c3010*/
  *((_DWORD *)this + 15) = wcslen(String); /*0x4c3018*/
  (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3022*/
  *((_DWORD *)this + 16) = BuildingAnim::GetType(); /*0x4c302d*/
  if ( a8 == -1 || a9 == -1 ) /*0x4c3035*/
  {
    Instance = TextRenderer::GetInstance(); /*0x4c3039*/
    if ( a9 == -1 ) /*0x4c3043*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28) + 1; /*0x4c3049*/
    if ( a8 == -1 ) /*0x4c304f*/
    {
      if ( wcslen(*((const wchar_t **)this + 13)) ) /*0x4c3055*/
      {
        v13 = Text::MeasureWidth(*((_DWORD *)this + 13), 0); /*0x4c3069*/
        *((_DWORD *)this + 17) = 0; /*0x4c3071*/
        *((_DWORD *)this + 5) = v13 + 6; /*0x4c3078*/
        return (int *)this; /*0x4c3081*/
      }
      *((_DWORD *)this + 5) = (*((_DWORD *)this + 14) + 1) * Text::MeasureWidth((int)asc_820768, 0) + 2; /*0x4c309a*/
    }
  }
  *((_DWORD *)this + 17) = 0; /*0x4c309d*/
  return (int *)this; /*0x4c307d*/
}



// ==== 0x004C30B0  DropListClass::Constructor  this=EditClass  sig=csp ====
int __thiscall DropListClass::Constructor(DropListClass *this)
{
  *(_DWORD *)this->__pad_0 = &EditClass::`vftable'; /*0x4c30b3*/
  if ( COMObject::IsPrimaryInstance((GadgetClass *)this) ) /*0x4c30b9*/
    COMObject::DeactivateGlobal((ShpButtonClass *)this); /*0x4c30c4*/
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x4c30d0*/
}



// ==== 0x004C30E0  EditClass::SelectItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt34(int *this, wchar_t *String, int a3)
{
  size_t v4; // eax
  int v5; // edx

  *(this + 13) = (int)String; /*0x4c30ed*/
  *(this + 14) = a3 - 1; /*0x4c30f0*/
  v4 = wcslen(String); /*0x4c30f3*/
  v5 = *this; /*0x4c30f8*/
  *(this + 15) = v4; /*0x4c30ff*/
  return (*(int (__thiscall **)(int *))(v5 + 72))(this); /*0x4c3105*/
}



// ==== 0x004C3110  EditClass::GetItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetItem(EditClass *this, int a2)
{
  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x4c311b*/
    return 0; /*0x4c3183*/
  (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 32))( /*0x4c314e*/
    stru_887598.lineTrailer,
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    *((_DWORD *)this + 6));
  (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 144))(this); /*0x4c3155*/
  (*(void (__thiscall **)(EditClass *, _DWORD))(*(_DWORD *)this + 148))(this, *((_DWORD *)this + 13)); /*0x4c3163*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 36))(stru_887598.lineTrailer); /*0x4c3171*/
  return 1; /*0x4c3179*/
}



// ==== 0x004C3190  EditClass::GetCount  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetCount(EditClass *this, unsigned int a2, int *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  EditClass v9; // ebp
  char v10; // al

  if ( *((_DWORD *)this + 17) ) /*0x4c3193*/
    return 0; /*0x4c319d*/
  v6 = a2; /*0x4c31a1*/
  if ( (a2 & 1) != 0 ) /*0x4c31a9*/
  {
    v6 = a2 & 0xFFFFFFFE; /*0x4c31af*/
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 80))(this); /*0x4c31b2*/
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c31b9*/
  }
  if ( (v6 & 0x100) == 0 || !(*(unsigned __int8 (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this) ) /*0x4c31cd*/
    return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c31d2*/
  if ( *a3 == 27 ) /*0x4c31dd*/
  {
    (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 84))(this); /*0x4c31e3*/
    return CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4c31f5*/
  }
  v7 = (unsigned __int8)Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], *a3); /*0x4c3209*/
  v8 = *a3; /*0x4c320b*/
  if ( (*a3 & 0x1000) != 0 && v7 >= 48 && v7 <= 57 ) /*0x4c321f*/
  {
    BYTE1(v8) &= ~0x10u; /*0x4c3221*/
    *a3 = v8; /*0x4c3227*/
    if ( (v6 & 0x44) != 0 || !(*(unsigned __int8 (__thiscall **)(EditClass *, int))(*(_DWORD *)this + 152))(this, v7) ) /*0x4c3230*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c3238*/
  }
  else if ( (*a3 & 0x1000) == 0 && v7 >= 32 || v8 == 13 || v8 == 8 ) /*0x4c3255*/
  {
    if ( (v6 & 0x44) != 0 ) /*0x4c325a*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c325a*/
    v9 = *this; /*0x4c3263*/
    v10 = Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], v8); /*0x4c3266*/
    if ( !(*(unsigned __int8 (__thiscall **)(EditClass *, _DWORD))(*(_DWORD *)&v9 + 152))(this, v10) ) /*0x4c3271*/
      return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c327a*/
  }
  BYTE1(v6) &= ~1u; /*0x4c327c*/
  *a3 = 0; /*0x4c327f*/
  return CellClass::Draw((ControlClass *)this, v6, a3, 0); /*0x4c319c*/
}



// ==== 0x004C32A0  EditClass::GetSelected  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetSelected(EditClass *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v1 = *((_DWORD *)this + 4); /*0x4c32a6*/
  v5[0] = (int)*(this + 3); /*0x4c32a9*/
  v2 = *((_DWORD *)this + 5); /*0x4c32ad*/
  v3 = *((_DWORD *)this + 6); /*0x4c32b0*/
  v5[1] = v1; /*0x4c32b3*/
  v5[3] = v3; /*0x4c32b7*/
  v5[2] = v2; /*0x4c32c6*/
  return DrawBuildingTilesSHP(v5, 4, 1); /*0x4c32cf*/
}



// ==== 0x004C32E0  EditClass::GetItemText  this=EditClass  sig=csp ====
_DWORD *__thiscall DropListClass::GetItemText(EditClass *this, wchar_t *String)
{
  char v3; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *result; // eax
  int v9; // ebp
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp-14h] [ebp-44h]
  int v16; // [esp-10h] [ebp-40h]
  int v17; // [esp-Ch] [ebp-3Ch]
  int v18; // [esp-8h] [ebp-38h]
  int v19; // [esp-4h] [ebp-34h]
  int v20; // [esp+Ch] [ebp-24h]
  int v21; // [esp+10h] [ebp-20h] BYREF
  int v22; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v23[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v25[12]; // [esp+24h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this); /*0x4c32ea*/
  v4 = *((_DWORD *)this + 4); /*0x4c32f0*/
  v22 = *((_DWORD *)this + 3) + 1; /*0x4c32ff*/
  v5 = *((_DWORD *)this + 5) - 2; /*0x4c3307*/
  v23[0] = v4 + 1; /*0x4c330a*/
  v6 = *((_DWORD *)this + 11); /*0x4c330e*/
  v21 = v3 != 0 ? 0x2000 : 0;
  v19 = v5; /*0x4c3315*/
  v18 = v21 | v6; /*0x4c3321*/
  v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *((_DWORD *)this + 16)); /*0x4c3331*/
  v7 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x4c333a*/
  FillRectangle(v23, (int)String, (int)g_DSurface_Hidden_2, v7, (int)v25, (int)&v22, v16, 0, v18, v19); /*0x4c334f*/
  TextRenderer::GetInstance(); /*0x4c3357*/
  result = (_DWORD *)(*(int (__thiscall **)(EditClass *))(*(_DWORD *)this + 88))(this); /*0x4c3362*/
  if ( (_BYTE)result ) /*0x4c3367*/
  {
    result = (_DWORD *)wcslen(String); /*0x4c336e*/
    if ( (unsigned int)result < *((_DWORD *)this + 14) ) /*0x4c337b*/
    {
      v9 = Text::MeasureWidth((int)String, 0); /*0x4c3395*/
      v10 = Text::MeasureWidth((int)asc_82076C, 0) + v9; /*0x4c339c*/
      result = (_DWORD *)(*((_DWORD *)this + 5) - 2); /*0x4c33a1*/
      if ( v10 < (int)result ) /*0x4c33a7*/
      {
        v11 = Text::MeasureWidth((int)String, 0) + *((_DWORD *)this + 3) + 1; /*0x4c33ba*/
        v12 = *((_DWORD *)this + 4); /*0x4c33be*/
        v13 = *((_DWORD *)this + 11); /*0x4c33c1*/
        v21 = v11; /*0x4c33c4*/
        v22 = v12 + 1; /*0x4c33cd*/
        v17 = v20 | v13; /*0x4c33db*/
        v15 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *((_DWORD *)this + 16)); /*0x4c33e5*/
        v14 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4c33f4*/
                g_DSurface_Hidden_2,
                v24);
        return FillRectangle(v23, (int)asc_82076C, (int)g_DSurface_Hidden_2, v14, (int)&v21, v15, 0, v17, -1, 0); /*0x4c3407*/
      }
    }
  }
  return result; /*0x4c340c*/
}



// ==== 0x004C3420  EditClass::SetItemText  this=EditClass  sig=csp ====
char __thiscall DropListClass::SetItemText(EditClass *this, int C)
{
  int v3; // edi
  FontClass *Instance; // ebx
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  v3 = C; /*0x4c342d*/
  Instance = (FontClass *)TextRenderer::GetInstance(); /*0x4c3431*/
  if ( C ) /*0x4c3435*/
  {
    if ( C == 8 ) /*0x4c343e*/
    {
      v9 = *((_DWORD *)this + 15); /*0x4c3540*/
      if ( v9 ) /*0x4c3545*/
      {
        v10 = *((_DWORD *)this + 13); /*0x4c3547*/
        v11 = v9 - 1; /*0x4c354a*/
        *((_DWORD *)this + 15) = v11; /*0x4c354b*/
        *(_WORD *)(v10 + 2 * v11) = 0; /*0x4c354e*/
        (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3558*/
      }
      return 1; /*0x4c3558*/
    }
    if ( C == 13 ) /*0x4c3447*/
    {
      (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 84))(this); /*0x4c3535*/
      return 0; /*0x4c353d*/
    }
    v5 = Text::MeasureWidth(*((_DWORD *)this + 13), 0); /*0x4c345e*/
    if ( FontClass::GetPixelData(Instance, C) + v5 < *((_DWORD *)this + 5) - 2 /*0x4c347e*/
      && *((_DWORD *)this + 15) < *((_DWORD *)this + 14) )
    {
      if ( isgraph(C) ) /*0x4c3485*/
      {
        if ( C != 32 ) /*0x4c349f*/
        {
LABEL_11:
          if ( (*(_BYTE *)(this + 12) & 8) != 0 && isalpha(C) ) /*0x4c34b3*/
            v3 = toupper(C); /*0x4c34c8*/
          if ( (*(_BYTE *)(this + 12) & 2) != 0 && isdigit(v3) /*0x4c3506*/
            || (*(_BYTE *)(this + 12) & 1) != 0 && isalpha(v3)
            || (*(_BYTE *)(this + 12) & 4) != 0 && !isalnum(v3)
            || v3 == 32 )
          {
            *(_WORD *)(*((_DWORD *)this + 13) + 2 * *((_DWORD *)this + 15)) = v3; /*0x4c350e*/
            v6 = *((_DWORD *)this + 13); /*0x4c3515*/
            v7 = *((_DWORD *)this + 15) + 1; /*0x4c3518*/
            *((_DWORD *)this + 15) = v7; /*0x4c3519*/
            *(_WORD *)(v6 + 2 * v7) = 0; /*0x4c351e*/
            (*(void (__thiscall **)(EditClass *))(*(_DWORD *)this + 72))(this); /*0x4c3526*/
            return 1; /*0x4c352e*/
          }
          return 1; /*0x4c3506*/
        }
      }
      else if ( C != 32 ) /*0x4c3494*/
      {
        return 1; /*0x4c3494*/
      }
      if ( *((_DWORD *)this + 15) ) /*0x4c34a1*/
        goto LABEL_11; /*0x4c34a6*/
    }
  }
  return 1; /*0x4c3529*/
}



// ==== 0x004C3570  EditClass::Close  this=EditClass  sig=csp ====
__int16 __thiscall DropListClass::Close(EditClass *this)
{
  const wchar_t *v2; // eax

  v2 = (const wchar_t *)*((_DWORD *)this + 13); /*0x4c3573*/
  *((_DWORD *)this + 15) = 0; /*0x4c3576*/
  if ( v2 ) /*0x4c357f*/
    *((_DWORD *)this + 15) = wcslen(v2); /*0x4c358a*/
  return COMObject::ActivateGlobal((ShpButtonClass *)this); /*0x4c3594*/
}



// ==== 0x004C35A0  sub_4C35A0  this=-  sig=ida-proto ====
void sub_4C35A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c35ac*/
  dbl_8A0EE8 = Math::Sqrt(v0 + v0); /*0x4c35be*/
}



// ==== 0x004C35D0  sub_4C35D0  this=-  sig=ida-proto ====
void sub_4C35D0()
{
  dbl_8A0F38 = dbl_8A0EE8 / 60.0; /*0x4c35dc*/
}



// ==== 0x004C35F0  sub_4C35F0  this=-  sig=ida-proto ====
void sub_4C35F0()
{
  dbl_8A0F20 = 1.0 / dbl_8A0F38; /*0x4c35fc*/
}



// ==== 0x004C3610  sub_4C3610  this=-  sig=ida-proto ====
void sub_4C3610()
{
  dbl_8A0F18 = 0.0174532925199433 * 45.0; /*0x4c361c*/
}



// ==== 0x004C3630  sub_4C3630  this=-  sig=ida-proto ====
void sub_4C3630()
{
  dbl_8A0EF0 = 0.0174532925199433 * 60.0; /*0x4c363c*/
}



// ==== 0x004C3650  sub_4C3650  this=-  sig=ida-proto ====
void sub_4C3650()
{
  dbl_8A0EC8 = 0.0174532925199433 * 90.0; /*0x4c365c*/
}



// ==== 0x004C3670  sub_4C3670  this=-  sig=ida-proto ====
__int64 sub_4C3670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0EC8 - dbl_8A0EF0); /*0x4c3682*/
  result = Math::RoundToInt(v0 * dbl_8A0EE8 * 0.5); /*0x4c3696*/
  dword_8A0F40 = result; /*0x4c369b*/
  return result; /*0x4c36a0*/
}



// ==== 0x004C36B0  sub_4C36B0  this=-  sig=ida-proto ====
void sub_4C36B0()
{
  dbl_8A0EF8 = Math::ArcTan((double)dword_8A0F40 * 0.00390625); /*0x4c36c7*/
}



// ==== 0x004C36E0  sub_4C36E0  this=-  sig=ida-proto ====
void sub_4C36E0()
{
  dbl_8A0F10 = Math::ArcTan((double)(2 * dword_8A0F40) / dbl_8A0EE8); /*0x4c3702*/
}



// ==== 0x004C3710  sub_4C3710  this=-  sig=ida-proto ====
__int64 sub_4C3710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0F40) + 0.5); /*0x4c372b*/
  dword_8A0F34 = result; /*0x4c3730*/
  return result; /*0x4c3736*/
}



// ==== 0x004C3740  sub_4C3740  this=-  sig=ida-proto ====
int sub_4C3740()
{
  word_8A0EE0 = 0; /*0x4c3742*/
  word_8A0EE2 = 0; /*0x4c3748*/
  return 0; /*0x4c374e*/
}



// ==== 0x004C3750  sub_4C3750  this=-  sig=ida-proto ====
int sub_4C3750()
{
  dword_8A0F00 = 0; /*0x4c3752*/
  dword_8A0F04 = 0; /*0x4c3757*/
  dword_8A0F08 = 0; /*0x4c375c*/
  return 0; /*0x4c3761*/
}



// ==== 0x004C3770  sub_4C3770  this=-  sig=ida-proto ====
int sub_4C3770()
{
  dword_8A0F30 = 0; /*0x4c3775*/
  dword_8A0F28 = 128; /*0x4c377f*/
  dword_8A0F2C = 128; /*0x4c3784*/
  return 128; /*0x4c3789*/
}



// ==== 0x004C3790  sub_4C3790  this=-  sig=ida-proto ====
int sub_4C3790()
{
  dword_8A0ED0 = 0; /*0x4c3792*/
  dword_8A0ED4 = 0; /*0x4c3797*/
  dword_8A0ED8 = 0; /*0x4c379c*/
  dword_8A0EDC = 0; /*0x4c37a1*/
  return 0; /*0x4c37a6*/
}



// ==== 0x004C37B0  sub_4C37B0  this=-  sig=ida-proto ====
int sub_4C37B0()
{
  dword_8A0F48 = 0; /*0x4c37b2*/
  dword_8A0F4C = 0; /*0x4c37b7*/
  dword_8A0F50 = 0; /*0x4c37bc*/
  dword_8A0F54 = 0; /*0x4c37c1*/
  return 0; /*0x4c37c6*/
}



// ==== 0x004C37D0  sub_4C37D0  this=-  sig=csp ====
_BYTE *__fastcall sub_4C37D0(int a1, _BYTE *a2, int a3, unsigned __int8 a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int i; // esi
  int v10; // eax
  _BYTE *v12; // [esp+4h] [ebp-10h]
  __int16 v13; // [esp+8h] [ebp-Ch] BYREF
  char v14; // [esp+Ah] [ebp-Ah]
  int v15; // [esp+Ch] [ebp-8h]
  _BYTE *v16; // [esp+10h] [ebp-4h]

  v16 = a2; /*0x4c37d4*/
  if ( !a2 ) /*0x4c37dc*/
    return 0; /*0x4c38c7*/
  v5 = 0; /*0x4c37e3*/
  v12 = a2; /*0x4c37e7*/
  v15 = 0; /*0x4c37eb*/
  do /*0x4c38b5*/
  {
    if ( v5 <= 240 && v5 ) /*0x4c37fc*/
    {
      v6 = a1 + 2 * (v5 % 256) + v5 % 256; /*0x4c3813*/
      v13 = *(_WORD *)v6; /*0x4c3818*/
      v14 = *(_BYTE *)(v6 + 2); /*0x4c3820*/
      Color::Lerp((unsigned __int8 *)&v13, a4, (unsigned __int8 *)(a1 + 2 * (a3 % 256) + a3 % 256)); /*0x4c3845*/
      v7 = -1; /*0x4c384a*/
      v8 = 0; /*0x4c384d*/
      for ( i = 240; i < 255; ++i ) /*0x4c384f*/
      {
        v10 = Palette::CalcColorDistance((unsigned __int8 *)(a1 + 2 * (i % 256) + i % 256), (unsigned __int8 *)&v13); /*0x4c3870*/
        if ( v7 == -1 || v10 < v8 ) /*0x4c387c*/
        {
          v7 = i; /*0x4c387e*/
          v8 = v10; /*0x4c3880*/
        }
      }
      a2 = v16; /*0x4c388f*/
      *v12++ = v7; /*0x4c3893*/
      v5 = v15; /*0x4c389a*/
    }
    else
    {
      *v12++ = v5; /*0x4c38a4*/
    }
    v15 = ++v5; /*0x4c38b1*/
  }
  while ( v5 < 256 ); /*0x4c38b5*/
  return a2; /*0x4c38c0*/
}



// ==== 0x004C38D0  ObjectClass::method_4C38D0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C38D0(ObjectClass *this)
{
  return ((_DWORD)&this->AbstractClass + 1) << 8; /*0x4c38d6*/
}



// ==== 0x004C38E0  sub_4C38E0  this=-  sig=ida-proto ====
char *__fastcall sub_4C38E0(char *a1, int a2, int a3, char *a4)
{
  char *v5; // edx
  char *v6; // eax
  _BYTE *v7; // ebp
  unsigned __int8 *v8; // edi
  int v9; // eax
  int v10; // esi
  char *v11; // eax
  int v12; // eax
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+12h] [ebp-Eh]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v16 = a2; /*0x4c38ed*/
  if ( !a3 || !a2 ) /*0x4c38fb*/
    return a4; /*0x4c38fb*/
  v5 = a4; /*0x4c3901*/
  if ( a4 ) /*0x4c3907*/
    goto LABEL_6; /*0x4c3907*/
  v6 = (char *)__2_YAPAXI_Z((a3 + 1) << 8); /*0x4c3910*/
  a4 = v6; /*0x4c3918*/
  if ( !v6 ) /*0x4c391e*/
    return a4; /*0x4c3a11*/
  v5 = v6; /*0x4c3924*/
LABEL_6:
  v7 = v5 + 256; /*0x4c3926*/
  memset(v5, 0xFFu, 0x100u); /*0x4c3938*/
  v17 = 0; /*0x4c393a*/
  if ( a3 > 0 ) /*0x4c3942*/
  {
    v8 = (unsigned __int8 *)(v16 + 1); /*0x4c394c*/
    while ( 1 ) /*0x4c395b*/
    {
      v5[*(v8 - 1)] = v17; /*0x4c395e*/
      v9 = *v8; /*0x4c396a*/
      v18 = v8[1]; /*0x4c396f*/
      v10 = 1; /*0x4c397f*/
      v11 = &a1[2 * v9 + v9]; /*0x4c3984*/
      v14 = *(_WORD *)v11; /*0x4c3989*/
      LOBYTE(v11) = v11[2]; /*0x4c398e*/
      *v7 = 0; /*0x4c3991*/
      v15 = (char)v11; /*0x4c3995*/
      do /*0x4c39e6*/
      {
        v12 = (int)&a1[2 * (v10 % 256) + v10 % 256]; /*0x4c39ac*/
        LOWORD(v16) = *(_WORD *)v12; /*0x4c39ba*/
        BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4c39c7*/
        Color::Lerp((unsigned __int8 *)&v16, v18, (unsigned __int8 *)&v14); /*0x4c39cb*/
        v7[v10++] = Palette::FindClosestColor(a1, (int)&v16); /*0x4c39dc*/
      }
      while ( v10 < 256 ); /*0x4c39e6*/
      v7 += 256; /*0x4c39f0*/
      v8 += 4; /*0x4c39f7*/
      if ( ++v17 >= a3 ) /*0x4c3a00*/
        break; /*0x4c3a00*/
      v5 = a4; /*0x4c3951*/
    }
    return a4; /*0x4c3a00*/
  }
  return v5; /*0x4c3a0a*/
}



// ==== 0x004C3A20  sub_4C3A20  this=-  sig=ida-proto ====
char *__fastcall sub_4C3A20(int a1, int a2, int a3, char *a4)
{
  char *v4; // ebp
  int v5; // ebx
  _BYTE *v6; // edi
  unsigned __int8 *v7; // esi

  if ( !a3 || !a2 ) /*0x4c3a39*/
    return a4; /*0x4c3ab3*/
  v4 = a4; /*0x4c3a3b*/
  if ( a4 || (v4 = (char *)__2_YAPAXI_Z((a3 + 1) << 8)) != 0 ) /*0x4c3a56*/
  {
    v5 = 0; /*0x4c3a62*/
    memset(v4, 0xFFu, 0x100u); /*0x4c3a64*/
    v6 = v4 + 256; /*0x4c3a68*/
    if ( a3 > 0 ) /*0x4c3a6e*/
    {
      v7 = (unsigned __int8 *)(a2 + 1); /*0x4c3a74*/
      do /*0x4c3aa5*/
      {
        v4[*(v7 - 1)] = v5; /*0x4c3a80*/
        sub_4C37D0(a1, v6, *v7, v7[1]); /*0x4c3a90*/
        v6 += 256; /*0x4c3a95*/
        ++v5; /*0x4c3a9b*/
        v7 += 4; /*0x4c3aa0*/
      }
      while ( v5 < a3 ); /*0x4c3aa5*/
    }
  }
  return v4; /*0x4c3aa7*/
}



// ==== 0x004C3AD0  sub_4C3AD0  this=-  sig=ida-proto ====
int __fastcall sub_4C3AD0(char *a1, int a2, int a3, unsigned __int8 a4)
{
  int v6; // esi
  unsigned __int8 *v7; // ebp
  int v8; // eax

  if ( !a2 ) /*0x4c3ad8*/
    return 0; /*0x4c3b4a*/
  v6 = 0; /*0x4c3ae0*/
  v7 = (unsigned __int8 *)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3af3*/
  do /*0x4c3b3f*/
  {
    v8 = (int)&a1[2 * (v6 % 256) + v6 % 256]; /*0x4c3b0a*/
    LOWORD(a3) = *(_WORD *)v8; /*0x4c3b0f*/
    BYTE2(a3) = *(_BYTE *)(v8 + 2); /*0x4c3b20*/
    Color::Lerp((unsigned __int8 *)&a3, a4, v7); /*0x4c3b24*/
    *(_BYTE *)(v6 + a2) = Palette::FindClosestColor(a1, (int)&a3); /*0x4c3b35*/
    ++v6; /*0x4c3b38*/
  }
  while ( v6 < 256 ); /*0x4c3b3f*/
  return a2; /*0x4c3b45*/
}



// ==== 0x004C3B60  sub_4C3B60  this=-  sig=ida-proto ====
_BYTE *__fastcall sub_4C3B60(char *a1, _BYTE *a2, int a3, int a4)
{
  unsigned __int8 v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v6 = a4; /*0x4c3b7d*/
  v7 = (int)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3b81*/
  v8 = 1; /*0x4c3b83*/
  LOWORD(a3) = *(_WORD *)v7; /*0x4c3b8b*/
  LOBYTE(v7) = *(_BYTE *)(v7 + 2); /*0x4c3b90*/
  *a2 = 0; /*0x4c3b93*/
  BYTE2(a3) = v7; /*0x4c3b96*/
  do /*0x4c3be3*/
  {
    v9 = (int)&a1[2 * (v8 % 256) + v8 % 256]; /*0x4c3bad*/
    LOWORD(a4) = *(_WORD *)v9; /*0x4c3bbc*/
    BYTE2(a4) = *(_BYTE *)(v9 + 2); /*0x4c3bc4*/
    Color::Lerp((unsigned __int8 *)&a4, v6, (unsigned __int8 *)&a3); /*0x4c3bc8*/
    a2[v8++] = Palette::FindClosestColor(a1, (int)&a4); /*0x4c3bd9*/
  }
  while ( v8 < 256 ); /*0x4c3be3*/
  return a2; /*0x4c3be5*/
}



// ==== 0x004C3BF0  sub_4C3BF0  this=-  sig=ida-proto ====
int sub_4C3BF0()
{
  dword_8A3760 = 0; /*0x4c3bf2*/
  dword_8A3764 = 0; /*0x4c3bf7*/
  dword_8A3768 = 0; /*0x4c3bfc*/
  dword_8A376C = 0; /*0x4c3c01*/
  return 0; /*0x4c3c06*/
}



// ==== 0x004C3C10  sub_4C3C10  this=-  sig=ida-proto ====
int sub_4C3C10()
{
  dword_8A3774 = 0; /*0x4c3c17*/
  dword_8A3778 = 0; /*0x4c3c1c*/
  byte_8A377C = 1; /*0x4c3c21*/
  byte_8A377D = 0; /*0x4c3c28*/
  dword_8A3770 = (int)&DynamicVectorClass<EgoClass *>::`vftable'; /*0x4c3c2d*/
  dword_8A3784 = 10; /*0x4c3c37*/
  dword_8A3780 = 0; /*0x4c3c41*/
  return atexit(sub_4C3C50); /*0x4c3c4c*/
}



// ==== 0x004C3C50  sub_4C3C50  this=-  sig=ida-proto ====
void __cdecl sub_4C3C50()
{
  dword_8A3770 = (int)&VectorClass<EgoClass *>::`vftable'; /*0x4c3c58*/
  if ( dword_8A3774 && byte_8A377D ) /*0x4c3c6c*/
  {
    __3_YAXPAX_Z(dword_8A3774); /*0x4c3c6f*/
    dword_8A3774 = 0; /*0x4c3c77*/
  }
  byte_8A377D = 0; /*0x4c3c7d*/
  dword_8A3778 = 0; /*0x4c3c83*/
}



// ==== 0x004C3C90  ObjectClass::method_4C3C90  this=ObjectClass  sig=csp ====
wchar_t **__thiscall sub_4C3C90(wchar_t **this, wchar_t *a2, wchar_t *a3, wchar_t *String, wchar_t *a5)
{
  size_t v6; // eax
  wchar_t *v7; // eax

  this->vtable2 = a2; /*0x4c3ca5*/
  this->vtable3 = a3; /*0x4c3ca8*/
  this->vtable4 = a5; /*0x4c3cab*/
  v6 = wcslen(String); /*0x4c3cae*/
  v7 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2); /*0x4c3cb8*/
  *this = v7; /*0x4c3cbf*/
  wcscpy(v7, String); /*0x4c3cc1*/
  return this; /*0x4c3ccb*/
}



// ==== 0x004C3D00  CreditsPower::DrawCreditsTextLine  this=AbstractClass  sig=csp ====
char __thiscall sub_4C3D00(int this, char a2)
{
  int v3; // esi
  char result; // al
  int v5; // ecx
  int v6; // eax
  size_t v7; // eax
  int v8; // [esp-10h] [ebp-28h]
  int v9[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 8); /*0x4c3d0d*/
  if ( v3 < (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 128))(g_DSurface_Hidden_2) /*0x4c3d44*/
    && (v3 = *(_DWORD *)(this + 8),
        v3 > (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 128))(g_DSurface_Hidden_2) - 52)
    || v3 >= -16 && v3 <= 32
    || (result = a2) != 0 )
  {
    v9[3] = *(&g_DisplayWidth + 1); /*0x4c3d56*/
    v5 = 0; /*0x4c3d5d*/
    v9[0] = (g_DisplayWidth - 520) / 2; /*0x4c3d61*/
    v6 = *(_DWORD *)(this + 12); /*0x4c3d65*/
    v9[2] = 520; /*0x4c3d6b*/
    v9[1] = v3; /*0x4c3d73*/
    if ( (v6 & 0x100) != 0 ) /*0x4c3d77*/
    {
      v5 = 1; /*0x4c3d79*/
    }
    else if ( (v6 & 0x200) != 0 ) /*0x4c3d83*/
    {
      v5 = 4; /*0x4c3d85*/
    }
    result = byte_A8ED80; /*0x4c3d8a*/
    if ( byte_A8ED80 ) /*0x4c3d91*/
    {
      v8 = v5; /*0x4c3da0*/
      v7 = wcslen(*(const wchar_t **)this); /*0x4c3da2*/
      return DrawTextRendererTextAligned(8454143, 0, v9, *(unsigned __int16 **)this, v7, v8, 0, dword_8A0F58, 0); /*0x4c3dba*/
    }
  }
  return result; /*0x4c3dbf*/
}



// ==== 0x004C3DD0  ObjectClass::method_4C3DD0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C3DD0(ObjectClass *this, int a2)
{
  void *vtable2; // edx
  _DWORD v5[4]; // [esp+4h] [ebp-10h] BYREF

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth((int)this->AbstractClass, 0); /*0x4c3de5*/
  vtable2 = this->?; /*0x4c3def*/
  v5[2] = g_DisplayWidth; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = vtable2; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x4c3e28*/
                                                                                    + 8))(
           g_DSurface_Hidden_2,
           v5,
           a2,
           v5,
           0,
           1);
}



// ==== 0x004C3E30  CreditsPower::Display  this=CreditsPower  sig=csp ====
int __usercall CreditsPower::Display@<eax>(CreditsPower *this, int a2@<edi>, int a3@<esi>)
{
  int v3; // ebx
  int Size; // eax
  char *v5; // esi
  signed int v6; // eax
  int BuildingAnimByName; // eax
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // edx
  char v11; // al
  int v12; // edi
  int v13; // kr08_4
  int v14; // eax
  char *v15; // edi
  char v16; // al
  char *v17; // ebp
  int v18; // kr10_4
  char v19; // cl
  int v20; // ecx
  bool v21; // cc
  wchar_t **v22; // ebp
  char *v23; // edi
  unsigned __int8 *v24; // esi
  wchar_t *v25; // ebx
  unsigned __int8 v26; // al
  unsigned int v27; // ecx
  unsigned __int8 *v28; // edx
  wchar_t *StringCSF; // edi
  wchar_t *v30; // ecx
  unsigned __int8 v31; // al
  unsigned __int8 v33; // al
  float v34; // eax
  int v35; // eax
  wchar_t *v36; // eax
  wchar_t **v37; // esi
  int v38; // eax
  char *v39; // eax
  char *v40; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // esi
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  void **v47; // edi
  int v48; // eax
  int i; // esi
  int v50; // edi
  int v51; // eax
  LoadingScreen *v52; // edx
  int v53; // eax
  int v54; // esi
  unsigned __int8 v55; // bp
  int v56; // ecx
  __int16 *v57; // esi
  int v58; // eax
  int v59; // edx
  int v60; // edi
  __int16 v61; // cx
  __int16 v62; // cx
  void (__stdcall **DSurface_field_0x0)(int, _DWORD, int); // eax
  int v64; // edi
  int v65; // esi
  int v66; // esi
  int v67; // ecx
  void ***v68; // edx
  void **v69; // esi
  int v70; // eax
  int v72; // [esp+54h] [ebp-12Ch]
  int v73; // [esp+58h] [ebp-128h]
  int v74; // [esp+5Ch] [ebp-124h]
  int v75; // [esp+60h] [ebp-120h]
  int v76; // [esp+64h] [ebp-11Ch]
  int v77; // [esp+68h] [ebp-118h]
  int v79; // [esp+6Ch] [ebp-114h]
  int v80; // [esp+70h] [ebp-110h]
  int v81; // [esp+70h] [ebp-110h]
  int v82; // [esp+78h] [ebp-108h]
  int *v83; // [esp+7Ch] [ebp-104h]
  int v84; // [esp+7Ch] [ebp-104h]
  int v85; // [esp+80h] [ebp-100h]
  int v86; // [esp+84h] [ebp-FCh]
  int v87; // [esp+88h] [ebp-F8h]
  char v88; // [esp+88h] [ebp-F8h]
  __int16 *v89; // [esp+8Ch] [ebp-F4h]
  char v90; // [esp+8Fh] [ebp-F1h]
  int v91; // [esp+90h] [ebp-F0h]
  int v92; // [esp+90h] [ebp-F0h]
  char *v93; // [esp+94h] [ebp-ECh]
  int v94; // [esp+98h] [ebp-E8h]
  int v95; // [esp+98h] [ebp-E8h]
  char v96; // [esp+9Fh] [ebp-E1h]
  char *v97; // [esp+A0h] [ebp-E0h]
  int v98; // [esp+A4h] [ebp-DCh]
  int v99; // [esp+A4h] [ebp-DCh]
  float v100; // [esp+A8h] [ebp-D8h] BYREF
  float v101; // [esp+ACh] [ebp-D4h]
  void *Block; // [esp+B0h] [ebp-D0h]
  int v103; // [esp+B8h] [ebp-C8h]
  int v104; // [esp+BCh] [ebp-C4h]
  _DWORD v105[4]; // [esp+C0h] [ebp-C0h] BYREF
  _DWORD v106[2]; // [esp+D0h] [ebp-B0h] BYREF
  int v107[2]; // [esp+D8h] [ebp-A8h] BYREF
  int v108; // [esp+E0h] [ebp-A0h]
  _DWORD v109[3]; // [esp+E8h] [ebp-98h] BYREF
  char *v110; // [esp+F4h] [ebp-8Ch] BYREF
  _DWORD v111[2]; // [esp+F8h] [ebp-88h] BYREF
  wchar_t Format[2]; // [esp+100h] [ebp-80h] BYREF
  char *v113; // [esp+104h] [ebp-7Ch]
  CCFileClass v114; // [esp+110h] [ebp-70h] BYREF
  char v115[12]; // [esp+16Ch] [ebp-14h] BYREF
  int v116; // [esp+178h] [ebp-8h]

  g_DSurface_Hidden_2 = (AudioStream *)DSurface_Alternate; /*0x4c3e42*/
  CCFileClass::Construct((CCFileClass *)&v114.?, aCreditsmdTxt); /*0x4c3e4d*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v114.?, 0) ) /*0x4c3e5c*/
  {
    Size = CCFileClass::GetSize((CCFileClass *)&v114.?); /*0x4c3e73*/
    v5 = (char *)__2_YAPAXI_Z(Size + 1); /*0x4c3e7f*/
    Block = v5; /*0x4c3e8b*/
    v6 = CCFileClass::GetSize((CCFileClass *)&v114.?); /*0x4c3e8f*/
    CCFileClass::Read((CCFileClass *)&v114.?, v5, v6); /*0x4c3e9d*/
    stru_822420.ExpireAnim = (AnimTypeClass *)&stru_820320.?[9]; /*0x4c3eb2*/
    v100 = 0.0; /*0x4c3ebc*/
    v101 = 0.0; /*0x4c3ec0*/
    BuildingAnimByName = FindBuildingAnimByName(aLightgold, 1); /*0x4c3ec4*/
    v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, char **, float *, int, _DWORD, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4c3edf*/
                     g_DSurface_Hidden_2,
                     &v110,
                     &v100,
                     BuildingAnimByName,
                     0,
                     328,
                     a2,
                     a3);
    TextRenderer::DrawText(v107, (size_t)asc_82083C, (int)g_DSurface_Hidden_2, v8, v72, v73, v74, v75); /*0x4c3ef7*/
    v9 = CCFileClass::GetSize(&v114); /*0x4c3f11*/
    v98 = -2; /*0x4c3f26*/
    v87 = (*((int (__thiscall **)(ObjectClass *, int, int, int, int))g_DSurface_Hidden->AbstractClass + 32))( /*0x4c3f2e*/
            g_DSurface_Hidden,
            v76,
            v77,
            v79,
            v80)
        + 2;
    while ( 2 ) /*0x4c3f32*/
    {
      v11 = *v5++; /*0x4c3f32*/
      v12 = v9 - 1; /*0x4c3f3b*/
      v94 = v12; /*0x4c3f3f*/
      v13 = v10; /*0x4c3f45*/
      v10 = 0; /*0x4c3f45*/
      switch ( v11 ) /*0x4c3f4d*/
      {
        case 9: /*0x4c3f4d*/
          v14 = v86 + 8; /*0x4c3f7f*/
          goto LABEL_63; /*0x4c3f82*/
        case 10: /*0x4c3f4d*/
          goto LABEL_65;
        case 13: /*0x4c3f4d*/
          ++v91; /*0x4c3f60*/
          v87 += 16; /*0x4c3f64*/
          v86 = 0; /*0x4c3f68*/
          goto LABEL_65; /*0x4c3f6c*/
        case 32: /*0x4c3f4d*/
          v14 = v86 + 1; /*0x4c3f75*/
          goto LABEL_64; /*0x4c3f76*/
        default:
          v10 = v13; /*0xf1c00004*/
          v17 = v5 - 1; /*0x4c3f87*/
          v19 = 0; /*0x4c3f8a*/
          LOBYTE(v10) = v11; /*0x4c3f8c*/
          v97 = v5 - 1; /*0x4c3f8e*/
          v15 = &v5[v12]; /*0x4c3f92*/
          do /*0x4c3fc9*/
          {
            v16 = *v17++; /*0x4c3f94*/
            v90 = v16; /*0x4c3f98*/
            v18 = v3; /*0x4c3fa7*/
            v3 = 0; /*0x4c3fa7*/
            switch ( v16 ) /*0x4c3faf*/
            {
              case 9: /*0x4c3faf*/
              case 10: /*0x4c3faf*/
              case 13: /*0x4c3faf*/
                goto LABEL_9;
              case 32: /*0x4c3faf*/
                if ( (_BYTE)v10 == 32 ) /*0x4c3fb9*/
LABEL_9:
                  v19 = 1; /*0x4c3fbb*/
                break; /*0x4c3fbb*/
              default:
                v3 = v18; /*0xf1c00008*/
                break; /*0xf1c00008*/
            }
            if ( v17 >= v15 ) /*0x4c3fbf*/
              v19 = 1; /*0x4c3fc1*/
            LOBYTE(v10) = v16; /*0x4c3fc3*/
          }
          while ( !v19 ); /*0x4c3fc9*/
          v93 = v17; /*0x4c3fcd*/
          if ( v17 >= v15 ) /*0x4c3fd1*/
            goto LABEL_65; /*0x4c3fd1*/
          if ( *(v17 - 2) == 32 ) /*0x4c3fdb*/
            v93 = v17 - 1; /*0x4c3fde*/
          v20 = 72; /*0x4c3fe6*/
          if ( v86 <= 3 ) /*0x4c3fee*/
          {
            v21 = v86 <= 8; /*0x4c3ffc*/
          }
          else
          {
            v21 = v86 <= 8; /*0x4c3ff0*/
            if ( v86 < 8 ) /*0x4c3ff3*/
            {
              v20 = 328; /*0x4c3ff5*/
              goto LABEL_22; /*0x4c3ffa*/
            }
          }
          if ( !v21 ) /*0x4c3fff*/
            v20 = 584; /*0x4c4001*/
LABEL_22:
          if ( v86 <= 3 || v86 >= 8 || v91 - v98 <= 1 ) /*0x4c401d*/
            v20 |= 0x20u; /*0x4c4024*/
          else
            LOBYTE(v20) = v20 | 0x80; /*0x4c401f*/
          v3 = (int)v93; /*0x4c4027*/
          LODWORD(v100) = v20; /*0x4c402f*/
          v98 = v91; /*0x4c4038*/
          v96 = *(v93 - 1); /*0x4c403c*/
          *(v93 - 1) = 0; /*0x4c4040*/
          v22 = (wchar_t **)__2_YAPAXI_Z(0x10u); /*0x4c4049*/
          if ( v22 ) /*0x4c4050*/
          {
            v23 = v5 - 1; /*0x4c4056*/
            word_8A0F5C = 0; /*0x4c405a*/
            v24 = (unsigned __int8 *)(v5 - 1); /*0x4c4063*/
            v25 = &word_8A0F5C; /*0x4c4065*/
            if ( *v97 ) /*0x4c406a*/
            {
              do /*0x4c411e*/
              {
                if ( *v24 == 123 ) /*0x4c4077*/
                {
                  v26 = v24[1]; /*0x4c407d*/
                  v27 = 0; /*0x4c4080*/
                  v28 = ++v24; /*0x4c4085*/
                  if ( !v26 ) /*0x4c4087*/
                    goto LABEL_34; /*0x4c4087*/
                  do /*0x4c4094*/
                  {
                    if ( v26 == 125 ) /*0x4c408b*/
                      break; /*0x4c408b*/
                    v26 = v24[1]; /*0x4c408d*/
                    ++v27; /*0x4c4090*/
                    ++v24; /*0x4c4091*/
                  }
                  while ( v26 ); /*0x4c4094*/
                  if ( v27 ) /*0x4c4098*/
                  {
                    if ( v27 <= 0x1F ) /*0x4c40a4*/
                    {
                      v24 = v28; /*0x4c40af*/
                      v30 = Format; /*0x4c40b3*/
                      if ( *v28 ) /*0x4c40ad*/
                      {
                        do /*0x4c40d3*/
                        {
                          v31 = *v24; /*0x4c40bc*/
                          if ( *v24 == 125 ) /*0x4c40c0*/
                            break; /*0x4c40c0*/
                          if ( v31 != 32 && v31 != 9 ) /*0x4c40c8*/
                          {
                            *(_BYTE *)v30 = v31; /*0x4c40ca*/
                            v30 = (wchar_t *)((char *)v30 + 1); /*0x4c40cc*/
                          }
                        }
                        while ( *++v24 ); /*0x4c40d3*/
                      }
                      v33 = *v24; /*0x4c40d5*/
                      *(_BYTE *)v30 = 0; /*0x4c40d7*/
                      if ( v33 == 125 ) /*0x4c40dc*/
                        ++v24; /*0x4c40de*/
                      StringCSF = GetStringCSF(Format, 0, aDRa2mdpostEgos, 284); /*0x4c40f7*/
                    }
                    else
                    {
                      StringCSF = (wchar_t *)&off_820804; /*0x4c40a6*/
                    }
                  }
                  else
                  {
LABEL_34:
                    StringCSF = &off_82081C; /*0x4c409a*/
                  }
                  if ( StringCSF ) /*0x4c40fb*/
                  {
                    wcscpy(v25, StringCSF); /*0x4c40ff*/
                    v25 += wcslen(StringCSF); /*0x4c410d*/
                  }
                }
                else
                {
                  *v25++ = *v24++; /*0x4c4117*/
                }
              }
              while ( *v24 ); /*0x4c411e*/
              v23 = v97; /*0x4c4127*/
            }
            v34 = v100; /*0x4c412f*/
            *v25 = 0; /*0x4c4133*/
            v22[1] = 0; /*0x4c413d*/
            v22[2] = (wchar_t *)v87; /*0x4c4144*/
            *((float *)v22 + 3) = v34; /*0x4c4147*/
            v35 = wcslen(&word_8A0F5C); /*0x4c414a*/
            v36 = (wchar_t *)__2_YAPAXI_Z(2 * v35 + 2); /*0x4c4154*/
            *v22 = v36; /*0x4c415f*/
            wcscpy(v36, &word_8A0F5C); /*0x4c4162*/
            v3 = (int)v93; /*0x4c4167*/
            v37 = v22; /*0x4c416e*/
          }
          else
          {
            v23 = v5 - 1; /*0x4c4172*/
            v37 = 0; /*0x4c4176*/
          }
          if ( dword_8A3780 < dword_8A3778 /*0x4c41af*/
            || (byte_8A377D || !dword_8A3778)
            && dword_8A3784 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A3770 + 8))(
                 &dword_8A3770,
                 dword_8A3784 + dword_8A3778,
                 0) )
          {
            v38 = dword_8A3780++; /*0x4c41bc*/
            *((_DWORD *)dword_8A3774 + v38) = v37; /*0x4c41cb*/
          }
          *(_BYTE *)(v3 - 1) = v96; /*0x4c41e6*/
          v10 = (int)&v23[v94 - v3 + 1]; /*0x4c41e9*/
          v5 = (char *)v3; /*0x4c41ef*/
          v86 += v3 - (_DWORD)v23; /*0x4c41f1*/
          v94 = v10; /*0x4c41f5*/
          if ( v90 == 13 ) /*0x4c41f9*/
          {
            ++v91; /*0x4c4207*/
            v87 += 16; /*0x4c420b*/
            v86 = 0; /*0x4c420f*/
          }
          else if ( v90 == 9 ) /*0x4c421b*/
          {
            v14 = v86 + 7; /*0x4c4221*/
LABEL_63:
            LOBYTE(v14) = v14 & 0xF8; /*0x4c4224*/
LABEL_64:
            v86 = v14; /*0x4c4226*/
          }
LABEL_65:
          v9 = v94; /*0x4c422a*/
          if ( v94 > 0 ) /*0x4c4232*/
            continue; /*0x4c4232*/
          Theme::Stop((Theme *)&unk_A83D10, 0); /*0x4c423e*/
          (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x4c424c*/
          Frame::Present((int)g_DSurface_Hidden, v3, 0, v94, 0, 0, v82, v83); /*0x4c4258*/
          v39 = (char *)__2_YAPAXI_Z(0x24u); /*0x4c425f*/
          if ( v39 ) /*0x4c4269*/
            v40 = DSurface::Construct( /*0x4c427d*/
                    v39,
                    *(int *)&DSurface_ViewBounds.__pad_8[16],
                    *(int *)&DSurface_ViewBounds.__pad_8[20],
                    0,
                    0);
          else
            v40 = 0; /*0x4c4284*/
          v81 = 1; /*0x4c428c*/
          dword_8A0F58 = (int)v40; /*0x4c428e*/
          (*(void (__thiscall **)(char *, ObjectClass *))(*(_DWORD *)v40 + 4))(v40, g_DSurface_Hidden); /*0x4c4299*/
          Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x4c42a2*/
          v101 = *(float *)&stru_A8EB00.ObjectTypeClass[40]; /*0x4c42b3*/
          g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x4c42bd*/
          if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x4c42c8*/
            Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], 0.40000001, 0); /*0x4c42d5*/
          v41 = StringList::Find((StringList *)&unk_A83D10, aCredits_0); /*0x4c42e4*/
          Theme::QueueSong((int)&unk_A83D10, v41); /*0x4c42ef*/
          v84 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c42f9*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c4305*/
            v84 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c431f*/
          v42 = 0; /*0x4c4329*/
          v85 = 0; /*0x4c432b*/
          v92 = 0; /*0x4c432f*/
          v88 = 0; /*0x4c4335*/
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4c4339*/
          if ( !dword_8A3780 ) /*0x4c4342*/
            goto LABEL_118; /*0x4c4342*/
          break; /*0x4c4342*/
      }
      break;
    }
    do /*0x4c4796*/
    {
      v108 = ++v42; /*0x4c4350*/
      if ( g_LoadScreenFlag ) /*0x4c4354*/
      {
        g_LoadScreenFlag = 0; /*0x4c435b*/
        v88 = 1; /*0x4c4364*/
        if ( !g_DDraw_Initialized ) /*0x4c4369*/
        {
          (*((void (__thiscall **)(DSurface *, _DWORD))g_DSurface_Primary->DSurface_field_0x0 + 6))( /*0x4c4374*/
            g_DSurface_Primary,
            0);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_8A0F58 + 24))(dword_8A0F58, 0); /*0x4c4380*/
        }
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4c438b*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4c4396*/
      }
      if ( ++v85 > 200 && v92 < 16 ) /*0x4c43b0*/
      {
        v85 = 0; /*0x4c43b3*/
        ++v92; /*0x4c43b7*/
      }
      v43 = dword_8A3780 - 1; /*0x4c43c0*/
      if ( dword_8A3780 - 1 >= 0 ) /*0x4c43c5*/
      {
        while ( 1 ) /*0x4c43d2*/
        {
          v44 = *((_DWORD *)dword_8A3774 + v43); /*0x4c43d2*/
          v45 = *(_DWORD *)(v44 + 8) - 2; /*0x4c43d8*/
          *(_DWORD *)(v44 + 8) = v45; /*0x4c43dc*/
          if ( v45 < -20 ) /*0x4c43e2*/
            break; /*0x4c43e2*/
          if ( --v43 < 0 ) /*0x4c43e5*/
            goto LABEL_92; /*0x4c43e5*/
        }
        v46 = dword_8A3774; /*0x4c43e9*/
        v47 = (void **)*((_DWORD *)dword_8A3774 + v43); /*0x4c43ef*/
        if ( v47 ) /*0x4c43f4*/
        {
          __3_YAXPAX_Z(*v47); /*0x4c43f9*/
          __3_YAXPAX_Z(v47); /*0x4c43ff*/
          v46 = dword_8A3774; /*0x4c4404*/
        }
        if ( v43 < dword_8A3780 ) /*0x4c4415*/
        {
          v48 = v43; /*0x4c4418*/
          if ( v43 < --dword_8A3780 ) /*0x4c4422*/
          {
            while ( 1 ) /*0x4c4430*/
            {
              v46[v48] = v46[v48 + 1]; /*0x4c4430*/
              if ( ++v48 >= dword_8A3780 ) /*0x4c443c*/
                break; /*0x4c443c*/
              v46 = dword_8A3774; /*0x4c4426*/
            }
          }
        }
      }
LABEL_92:
      v113 = (char *)&(*(&g_DisplayWidth + 1))[-2].LoadingScreen_field_0x3C + 2; /*0x4c443e*/
      v110 = (char *)&(*(&g_DisplayWidth + 1))[-2].LoadingScreen_field_0x3C + 2; /*0x4c445d*/
      v106[1] = (char *)*(&g_DisplayWidth + 1) - 34; /*0x4c446a*/
      v111[0] = 0; /*0x4c446e*/
      v111[1] = 32; /*0x4c4475*/
      *(_DWORD *)Format = g_DisplayWidth; /*0x4c4480*/
      v109[0] = 0; /*0x4c4487*/
      v109[1] = 34; /*0x4c448b*/
      v109[2] = g_DisplayWidth; /*0x4c4492*/
      v105[0] = 0; /*0x4c4499*/
      v105[1] = 0; /*0x4c449d*/
      v105[2] = g_DisplayWidth; /*0x4c44a1*/
      v105[3] = 34; /*0x4c44a5*/
      v106[0] = 0; /*0x4c44a9*/
      v107[0] = (int)g_DisplayWidth; /*0x4c44ad*/
      v107[1] = 34; /*0x4c44b1*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, int))(*(_DWORD *)dword_8A0F58 + 20))( /*0x4c44bd*/
        dword_8A0F58,
        v105,
        0,
        0,
        v81);
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)dword_8A0F58 + 20))(dword_8A0F58, v107, 0); /*0x4c44ce*/
      for ( i = dword_8A3780 - 1; i >= 0; --i ) /*0x4c44db*/
        CreditsPower::DrawCreditsTextLine(*((_DWORD *)dword_8A3774 + i), v92); /*0x4c44eb*/
      v81 = 0; /*0x4c44fd*/
      v50 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 92))(dword_8A0F58); /*0x4c4504*/
      v103 = v50; /*0x4c4508*/
      if ( v50 ) /*0x4c450c*/
      {
        v51 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 116))(dword_8A0F58); /*0x4c451a*/
        v52 = g_DisplayWidth; /*0x4c4520*/
        v53 = v51 / 2; /*0x4c4526*/
        v54 = 256; /*0x4c4528*/
        v104 = v53; /*0x4c452d*/
        v95 = 0; /*0x4c4531*/
        v89 = (__int16 *)v50; /*0x4c4535*/
        LODWORD(v100) = 256; /*0x4c4539*/
        do /*0x4c4697*/
        {
          v55 = v54; /*0x4c4543*/
          if ( v54 >= 255 ) /*0x4c4545*/
            v55 = -1; /*0x4c4547*/
          v99 = 0; /*0x4c4552*/
          v56 = v53 * (_DWORD)&(*(&g_DisplayWidth + 1))->__pad_0[-v95 - 1]; /*0x4c455f*/
          if ( (int)v52 > 0 ) /*0x4c4564*/
          {
            v57 = v89; /*0x4c456a*/
            v58 = v55; /*0x4c4570*/
            v59 = 255 - v55; /*0x4c457a*/
            v60 = v50 + 2 * v56; /*0x4c4584*/
            while ( 1 ) /*0x4c4591*/
            {
              v61 = *v57; /*0x4c4591*/
              g_GameScreenFlags = v58; /*0x4c4594*/
              g_GameScreenConfig = v59; /*0x4c45c0*/
              ++v57; /*0x4c45c8*/
              v60 += 2; /*0x4c45e9*/
              *(v57 - 1) = ((v59 * (unsigned int)(unsigned __int16)(v61 & g_CreditsScreenState)) >> 8) /*0x4c45f1*/
                         | g_ScreenSaverState
                         & ((v59 * (unsigned int)(unsigned __int16)(v61 & g_ScreenSaverState)) >> 8)
                         | HIWORD(g_ScreenSaverState)
                         & ((v59 * (unsigned int)(unsigned __int16)(v61 & HIWORD(g_ScreenSaverState))) >> 8);
              v62 = *(_WORD *)(v60 - 2); /*0x4c4601*/
              g_GameScreenFlags = v55; /*0x4c460a*/
              g_GameScreenConfig = 255 - v55; /*0x4c4616*/
              *(_WORD *)(v60 - 2) = (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & g_CreditsScreenState)) >> 8) /*0x4c4651*/
                                  | g_ScreenSaverState
                                  & (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & g_ScreenSaverState)) >> 8)
                                  | HIWORD(g_ScreenSaverState)
                                  & (((255 - v55) * (unsigned int)(unsigned __int16)(v62 & HIWORD(g_ScreenSaverState))) >> 8);
              v52 = g_DisplayWidth; /*0x4c4655*/
              if ( ++v99 >= (int)g_DisplayWidth ) /*0x4c4662*/
                break; /*0x4c4662*/
              v59 = 255 - v55; /*0x4c4589*/
              v58 = v55; /*0x4c458d*/
            }
            v53 = v104; /*0x4c4668*/
            v50 = v103; /*0x4c466c*/
            v42 = v108; /*0x4c4670*/
            v54 = LODWORD(v100); /*0x4c4674*/
          }
          v54 -= 8; /*0x4c4680*/
          ++v95; /*0x4c4683*/
          LODWORD(v100) = v54; /*0x4c468d*/
          v89 += v53; /*0x4c4693*/
        }
        while ( v54 > 0 ); /*0x4c4697*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_8A0F58 + 96))(dword_8A0F58); /*0x4c46a5*/
      }
      if ( stru_A8EB00.?[412] ) /*0x4c46b1*/
      {
        DSurface_field_0x0 = (void (__stdcall **)(int, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0; /*0x4c46bf*/
        if ( v88 ) /*0x4c46c4*/
        {
          DSurface_field_0x0[1](dword_8A0F58, 0, 1); /*0x4c46cd*/
        }
        else
        {
          ((void (__stdcall *)(_DWORD *, int, _DWORD *, _DWORD, int))DSurface_field_0x0[2])( /*0x4c46e3*/
            v105,
            dword_8A0F58,
            v105,
            0,
            1);
          (*((void (__stdcall **)(_DWORD *, DSurface *, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x4c46ff*/
            v111,
            g_DSurface_Primary,
            v109,
            0,
            1);
          (*((void (__thiscall **)(DSurface *, _DWORD *, int, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x4c471e*/
           + 2))(
            g_DSurface_Primary,
            v106,
            dword_8A0F58,
            v106,
            0,
            1);
        }
      }
      v88 = 0; /*0x4c4721*/
      Event::Dispatch(); /*0x4c4726*/
      v64 = v84; /*0x4c472b*/
      do /*0x4c476d*/
      {
        v65 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c4734*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c473d*/
          v65 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c474f*/
      }
      while ( v65 - v84 < v42 * dword_820770 && !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x4c476d*/
    }
    while ( (!EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) /*0x4c4796*/
          || EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) != 27)
         && dword_8A3780 );
    if ( v85 <= 187 ) /*0x4c47a4*/
    {
LABEL_118:
      v64 = v85; /*0x4c47a6*/
      do /*0x4c480e*/
      {
        if ( v64 < 150 && v64 > 47 ) /*0x4c47b5*/
          v64 = 150; /*0x4c47b7*/
        ++v42; /*0x4c47bc*/
        ++v64; /*0x4c47bd*/
        Event::Dispatch(); /*0x4c47be*/
        do /*0x4c4806*/
        {
          v66 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x4c47c8*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x4c47d1*/
            v66 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x4c47e3*/
        }
        while ( v66 - v84 < v42 * dword_820770 && !EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ); /*0x4c4806*/
      }
      while ( v64 <= 187 ); /*0x4c480e*/
    }
    (*((void (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden); /*0x4c4819*/
    Frame::Present((int)g_DSurface_Hidden, v42, 0, v64, 0, 0, 0, (int *)v81); /*0x4c4825*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4c4832*/
    stru_822420.ExpireAnim = (AnimTypeClass *)g_INI_Key_Blue; /*0x4c483a*/
    Theme::Stop((Theme *)&unk_A83D10, 0); /*0x4c4845*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v100, 0); /*0x4c4855*/
    if ( dword_8A0F58 ) /*0x4c4862*/
      (**(void (__thiscall ***)(int, int))dword_8A0F58)(dword_8A0F58, 1); /*0x4c4868*/
    __3_YAXPAX_Z(Block); /*0x4c486f*/
    v67 = dword_8A3780; /*0x4c4874*/
    v68 = (void ***)dword_8A3774; /*0x4c487a*/
    while ( v67 > 0 ) /*0x4c4885*/
    {
      v69 = *v68; /*0x4c488b*/
      if ( *v68 ) /*0x4c488b*/
      {
        __3_YAXPAX_Z(*v69); /*0x4c4894*/
        __3_YAXPAX_Z(v69); /*0x4c489a*/
        v67 = dword_8A3780; /*0x4c489f*/
        v68 = (void ***)dword_8A3774; /*0x4c48a5*/
      }
      if ( v67 > 0 ) /*0x4c48b0*/
      {
        v70 = 0; /*0x4c48b3*/
        dword_8A3780 = v67 - 1; /*0x4c48b7*/
        if ( v67 - 1 <= 0 ) /*0x4c48bd*/
          break; /*0x4c48bd*/
        do /*0x4c48d5*/
        {
          v68[v70] = v68[v70 + 1]; /*0x4c48c3*/
          v67 = dword_8A3780; /*0x4c48c6*/
          v68 = (void ***)dword_8A3774; /*0x4c48cc*/
          ++v70; /*0x4c48d2*/
        }
        while ( v70 < dword_8A3780 ); /*0x4c48d5*/
      }
    }
    dword_8A3780 = 0; /*0x4c48dd*/
    if ( v68 && byte_8A377D ) /*0x4c48f1*/
    {
      __3_YAXPAX_Z(v68); /*0x4c48f4*/
      dword_8A3774 = 0; /*0x4c48fc*/
    }
    byte_8A377D = 0; /*0x4c4902*/
    dword_8A3778 = 0; /*0x4c4909*/
  }
  v114.? = (int)&CCFileClass::`vftable'; /*0x4c4916*/
  v116 = 0; /*0x4c4921*/
  Vector::Clear((int)v115); /*0x4c4928*/
  v114.? = (int)&off_7E1668; /*0x4c4934*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v114.?); /*0x4c4944*/
}


// ==== 0x004C49A0  _DynamicVectorClass_PAVEgoClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::Destroy(_DynamicVectorClass_PAVEgoClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c49a6*/
  this->m_10 = 0; /*0x4c49a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c49b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4c49b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c49be*/
  }
  BYTE1(this->m_C) = 0; /*0x4c49c1*/
  this->m_8 = 0; /*0x4c49c4*/
}



// ==== 0x004C49D0  _DynamicVectorClass_PAVEgoClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::GetItemIndex(_DynamicVectorClass_PAVEgoClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c49d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c49e5*/
  else
    return 0; /*0x4c49d7*/
}



// ==== 0x004C49F0  _VectorClass_PAVEgoClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::Get(_VectorClass_PAVEgoClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c49fa*/
}



// ==== 0x004C4A00  _VectorClass_PAVEgoClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::Add(_VectorClass_PAVEgoClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c4a02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c4a0d*/
  {
    v3 = 0; /*0x4c4a0f*/
    if ( m_8 <= 0 ) /*0x4c4a13*/
      return 1; /*0x4c4a33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c4a15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c4a1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c4a24*/
    {
      ++v3; /*0x4c4a26*/
      ++v4; /*0x4c4a27*/
      if ( v3 >= m_8 ) /*0x4c4a2c*/
        return 1; /*0x4c4a2c*/
    }
  }
  return 0; /*0x4c4a2e*/
}



// ==== 0x004C4A40  _VectorClass_PAVEgoClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::Release(_VectorClass_PAVEgoClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c4a4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c4a56*/
    if ( a3 ) /*0x4c4a5c*/
      v4 = a3; /*0x4c4a72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c4a6e*/
    LOBYTE(this->m_C) = 1; /*0x4c4a76*/
    if ( v4 ) /*0x4c4a7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c4a85*/
      {
        m_8 = this->m_8; /*0x4c4a8c*/
        if ( a2 < m_8 ) /*0x4c4a91*/
          m_8 = a2; /*0x4c4a93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c4a99*/
          ++i; /*0x4c4a9e*/
        if ( BYTE1(this->m_C) ) /*0x4c4aab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4ab6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c4abe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c4ac7*/
      this->m_8 = a2; /*0x4c4acf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c4ad2*/
      return 1; /*0x4c4ad8*/
    }
    else
    {
      return 0; /*0x4c4a7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEgoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c4ae2*/
    return 1; /*0x4c4ae8*/
  }
}



// ==== 0x004C4AF0  _VectorClass_PAVEgoClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::Remove(_VectorClass_PAVEgoClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c4afd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4b03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4b0b*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4b0e*/
  this->m_8 = 0; /*0x4c4b11*/
}



// ==== 0x004C4B20  _VectorClass_PAVEgoClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::GetSize(_VectorClass_PAVEgoClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c4b20*/
    return 0; /*0x4c4b28*/
  m_8 = this->m_8; /*0x4c4b2e*/
  result = 0; /*0x4c4b31*/
  if ( m_8 <= 0 ) /*0x4c4b35*/
    return -1; /*0x4c4b4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c4b3b*/
  {
    if ( ++result >= m_8 ) /*0x4c4b4a*/
      return -1; /*0x4c4b4a*/
  }
  return result; /*0x4c4b2a*/
}



// ==== 0x004C4B60  _VectorClass_PAVEgoClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::GetCapacity(_VectorClass_PAVEgoClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c4b60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c4b75*/
  else
    return 0; /*0x4c4b67*/
}



// ==== 0x004C4B80  _DynamicVectorClass_PAVEgoClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::SetCapacity(_DynamicVectorClass_PAVEgoClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c4b8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c4b92*/
    if ( a3 ) /*0x4c4b98*/
      v4 = a3; /*0x4c4bae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c4baa*/
    LOBYTE(this->m_C) = 1; /*0x4c4bb2*/
    if ( !v4 ) /*0x4c4bb6*/
      return 0; /*0x4c4c2a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c4bb8*/
    {
      m_8 = this->m_8; /*0x4c4bbf*/
      if ( a2 < m_8 ) /*0x4c4bc4*/
        m_8 = a2; /*0x4c4bc6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c4bcc*/
        ++i; /*0x4c4bd1*/
      if ( BYTE1(this->m_C) ) /*0x4c4bde*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c4be9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c4bf1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c4bfa*/
    this->m_8 = a2; /*0x4c4c02*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c4c05*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEgoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c4c0e*/
  }
  v7 = this->m_8; /*0x4c4c11*/
  if ( v7 < this->m_10 ) /*0x4c4c19*/
    this->m_10 = v7; /*0x4c4c1b*/
  return 1; /*0x4c4c1e*/
}



// ==== 0x004C4C30  _DynamicVectorClass_PAVEgoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::FindItemIndex(_DynamicVectorClass_PAVEgoClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c4c30*/
  result = 0; /*0x4c4c33*/
  if ( m_10 <= 0 ) /*0x4c4c38*/
    return -1; /*0x4c4c4f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c4c3e*/
  {
    if ( ++result >= m_10 ) /*0x4c4c4d*/
      return -1; /*0x4c4c4d*/
  }
  return result; /*0x4c4c52*/
}



// ==== 0x004C4C60  _VectorClass_PAVEgoClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EgoClass::QueryInterface(_VectorClass_PAVEgoClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c4c63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EgoClass *>::`vftable'; /*0x4c4c66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c4c70*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4c78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4c80*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4c8b*/
  this->m_8 = 0; /*0x4c4c91*/
  if ( (a2 & 1) != 0 ) /*0x4c4c98*/
    __3_YAXPAX_Z(this); /*0x4c4c9b*/
  return this->__pad_0; /*0x4c4ca5*/
}



// ==== 0x004C4CB0  _DynamicVectorClass_PAVEgoClass::Constructor_VectorClass_EgoClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(
        _DynamicVectorClass_PAVEgoClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c4cb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EgoClass *>::`vftable'; /*0x4c4cb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c4cc0*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4cc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c4cd0*/
  }
  BYTE1(this->m_C) = 0; /*0x4c4cdb*/
  this->m_8 = 0; /*0x4c4ce1*/
  if ( (a2 & 1) != 0 ) /*0x4c4ce8*/
    __3_YAXPAX_Z(this); /*0x4c4ceb*/
  return this->__pad_0; /*0x4c4cf5*/
}



// ==== 0x004C4D00  sub_4C4D00  this=-  sig=ida-proto ====
void sub_4C4D00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c4d0c*/
  dbl_8A3798 = Math::Sqrt(v0 + v0); /*0x4c4d1e*/
}



// ==== 0x004C4D30  sub_4C4D30  this=-  sig=ida-proto ====
void sub_4C4D30()
{
  dbl_8A3808 = dbl_8A3798 / 60.0; /*0x4c4d3c*/
}



// ==== 0x004C4D50  sub_4C4D50  this=-  sig=ida-proto ====
void sub_4C4D50()
{
  dbl_8A37F0 = 1.0 / dbl_8A3808; /*0x4c4d5c*/
}



// ==== 0x004C4D70  sub_4C4D70  this=-  sig=ida-proto ====
void sub_4C4D70()
{
  dbl_8A37E8 = 0.0174532925199433 * 45.0; /*0x4c4d7c*/
}



// ==== 0x004C4D90  sub_4C4D90  this=-  sig=ida-proto ====
void sub_4C4D90()
{
  dbl_8A37C0 = 0.0174532925199433 * 60.0; /*0x4c4d9c*/
}



// ==== 0x004C4DB0  sub_4C4DB0  this=-  sig=ida-proto ====
void sub_4C4DB0()
{
  dbl_8A3788 = 0.0174532925199433 * 90.0; /*0x4c4dbc*/
}



// ==== 0x004C4DD0  sub_4C4DD0  this=-  sig=ida-proto ====
__int64 sub_4C4DD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3788 - dbl_8A37C0); /*0x4c4de2*/
  result = Math::RoundToInt(v0 * dbl_8A3798 * 0.5); /*0x4c4df6*/
  dword_8A3810 = result; /*0x4c4dfb*/
  return result; /*0x4c4e00*/
}



// ==== 0x004C4E10  sub_4C4E10  this=-  sig=ida-proto ====
void sub_4C4E10()
{
  dbl_8A37C8 = Math::ArcTan((double)dword_8A3810 * 0.00390625); /*0x4c4e27*/
}



// ==== 0x004C4E40  sub_4C4E40  this=-  sig=ida-proto ====
void sub_4C4E40()
{
  dbl_8A37E0 = Math::ArcTan((double)(2 * dword_8A3810) / dbl_8A3798); /*0x4c4e62*/
}



// ==== 0x004C4E70  sub_4C4E70  this=-  sig=ida-proto ====
__int64 sub_4C4E70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3810) + 0.5); /*0x4c4e8b*/
  dword_8A3804 = result; /*0x4c4e90*/
  return result; /*0x4c4e96*/
}



// ==== 0x004C4EA0  sub_4C4EA0  this=-  sig=ida-proto ====
int sub_4C4EA0()
{
  word_8A3790 = 0; /*0x4c4ea2*/
  word_8A3792 = 0; /*0x4c4ea8*/
  return 0; /*0x4c4eae*/
}



// ==== 0x004C4EB0  sub_4C4EB0  this=-  sig=ida-proto ====
int sub_4C4EB0()
{
  dword_8A37D0 = 0; /*0x4c4eb2*/
  dword_8A37D4 = 0; /*0x4c4eb7*/
  dword_8A37D8 = 0; /*0x4c4ebc*/
  return 0; /*0x4c4ec1*/
}



// ==== 0x004C4ED0  sub_4C4ED0  this=-  sig=ida-proto ====
int sub_4C4ED0()
{
  dword_8A3800 = 0; /*0x4c4ed5*/
  dword_8A37F8 = 128; /*0x4c4edf*/
  dword_8A37FC = 128; /*0x4c4ee4*/
  return 128; /*0x4c4ee9*/
}



// ==== 0x004C4EF0  TaskForceClass::ParseUnitCountAndType  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall TaskForceClass::ParseUnitCountAndType(TaskForceClass *this, char *Buffer)
{
  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  char *v9; // [esp-10h] [ebp-54h]
  TypeClass v10; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *(_DWORD *)this->__pad_0 = 0; /*0x4c4f0a*/
  this->TaskForceClass_field_0x4 = 0; /*0x4c4f10*/
  sscanf(v9, "%d,%s", &Buffer, &v10); /*0x4c4f17*/
  *(_DWORD *)this->__pad_0 = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)&v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)&v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = TypeClass::FindByName(&v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->TaskForceClass_field_0x4 = *((_DWORD *)dword_A8B21C + v8); /*0x4c4f82*/
      return this->__pad_0; /*0x4c4f85*/
    }
    else
    {
      v7 = *((_DWORD *)dword_A83CE4 + Index); /*0x4c4f5c*/
      this->TaskForceClass_field_0x4 = v7; /*0x4c4f61*/
      return this->__pad_0; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x4c4f39*/
    this->TaskForceClass_field_0x4 = v4; /*0x4c4f3e*/
    return this->__pad_0; /*0x4c4f3c*/
  }
}



// ==== 0x004C4F90  TaskForceClass::Check  this=TaskForceClass  sig=csp ====
char *__thiscall TaskForceClass::Check(TaskForceClass *this)
{
  sprintf(byte_8A37A0, "%d,%s", *(_DWORD *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/
}



// ==== 0x004C4FC0  ObjectClass::method_4C4FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C4FC0(ObjectClass *this, int a2)
{
  int result; // eax
  void *vtable1; // ecx
  int v5; // eax
  int v6; // eax

  result = Power::TimerProcess((int)this->AbstractClass); /*0x4c4fcd*/
  vtable1 = this->?; /*0x4c4fd2*/
  if ( vtable1 ) /*0x4c4fd7*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)vtable1 + 44))(vtable1); /*0x4c4fdb*/
    Power::TimerProcess(v5); /*0x4c4fe1*/
    v6 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->? + 1) + 16))((char *)this->? + 4); /*0x4c4ff0*/
    return Power::TimerProcess(v6); /*0x4c4ff6*/
  }
  return result; /*0x4c4ffb*/
}



// ==== 0x004C5000  sub_4C5000  this=-  sig=ida-proto ====
void sub_4C5000()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c500c*/
  dbl_8A3840 = Math::Sqrt(v0 + v0); /*0x4c501e*/
}



// ==== 0x004C5030  sub_4C5030  this=-  sig=ida-proto ====
void sub_4C5030()
{
  dbl_8A38A8 = dbl_8A3840 / 60.0; /*0x4c503c*/
}



// ==== 0x004C5050  sub_4C5050  this=-  sig=ida-proto ====
void sub_4C5050()
{
  dbl_8A3890 = 1.0 / dbl_8A38A8; /*0x4c505c*/
}



// ==== 0x004C5070  sub_4C5070  this=-  sig=ida-proto ====
void sub_4C5070()
{
  dbl_8A3888 = 0.0174532925199433 * 45.0; /*0x4c507c*/
}



// ==== 0x004C5090  sub_4C5090  this=-  sig=ida-proto ====
void sub_4C5090()
{
  dbl_8A3848 = 0.0174532925199433 * 60.0; /*0x4c509c*/
}



// ==== 0x004C50B0  sub_4C50B0  this=-  sig=ida-proto ====
void sub_4C50B0()
{
  dbl_8A3820 = 0.0174532925199433 * 90.0; /*0x4c50bc*/
}



// ==== 0x004C50D0  sub_4C50D0  this=-  sig=ida-proto ====
__int64 sub_4C50D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3820 - dbl_8A3848); /*0x4c50e2*/
  result = Math::RoundToInt(v0 * dbl_8A3840 * 0.5); /*0x4c50f6*/
  dword_8A38B0 = result; /*0x4c50fb*/
  return result; /*0x4c5100*/
}



// ==== 0x004C5110  sub_4C5110  this=-  sig=ida-proto ====
void sub_4C5110()
{
  dbl_8A3850 = Math::ArcTan((double)dword_8A38B0 * 0.00390625); /*0x4c5127*/
}



// ==== 0x004C5140  sub_4C5140  this=-  sig=ida-proto ====
void sub_4C5140()
{
  dbl_8A3868 = Math::ArcTan((double)(2 * dword_8A38B0) / dbl_8A3840); /*0x4c5162*/
}



// ==== 0x004C5170  sub_4C5170  this=-  sig=ida-proto ====
__int64 sub_4C5170()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A38B0) + 0.5); /*0x4c518b*/
  dword_8A38A4 = result; /*0x4c5190*/
  return result; /*0x4c5196*/
}



// ==== 0x004C51A0  sub_4C51A0  this=-  sig=ida-proto ====
int sub_4C51A0()
{
  dword_8A3838 = 0; /*0x4c51a2*/
  return 0; /*0x4c51ae*/
}



// ==== 0x004C51B0  sub_4C51B0  this=-  sig=ida-proto ====
int sub_4C51B0()
{
  dword_8A3858 = 0; /*0x4c51b2*/
  dword_8A385C = 0; /*0x4c51b7*/
  dword_8A3860 = 0; /*0x4c51bc*/
  return 0; /*0x4c51c1*/
}



// ==== 0x004C51D0  sub_4C51D0  this=-  sig=ida-proto ====
int sub_4C51D0()
{
  dword_8A38A0 = 0; /*0x4c51d5*/
  dword_8A3898 = 128; /*0x4c51df*/
  dword_8A389C = 128; /*0x4c51e4*/
  return 128; /*0x4c51e9*/
}



// ==== 0x004C51F0  sub_4C51F0  this=-  sig=ida-proto ====
int sub_4C51F0()
{
  dword_8A3828 = 0; /*0x4c51f2*/
  dword_8A382C = 0; /*0x4c51f7*/
  dword_8A3830 = 0; /*0x4c51fc*/
  dword_8A3834 = 0; /*0x4c5201*/
  return 0; /*0x4c5206*/
}



// ==== 0x004C5210  sub_4C5210  this=-  sig=ida-proto ====
int sub_4C5210()
{
  dword_8A3874 = 0; /*0x4c5217*/
  dword_8A3878 = 0; /*0x4c521c*/
  byte_8A387C = 1; /*0x4c5221*/
  byte_8A387D = 0; /*0x4c5228*/
  dword_8A3870 = (int)&DynamicVectorClass<EMPulseClass *>::`vftable'; /*0x4c522d*/
  dword_8A3884 = 10; /*0x4c5237*/
  dword_8A3880 = 0; /*0x4c5241*/
  return atexit(sub_4C5250); /*0x4c524c*/
}



// ==== 0x004C5250  sub_4C5250  this=-  sig=ida-proto ====
void __cdecl sub_4C5250()
{
  if ( (byte_8A3818 & 1) == 0 ) /*0x4c525a*/
  {
    dword_8A3870 = (int)&VectorClass<EMPulseClass *>::`vftable'; /*0x4c525e*/
    byte_8A3818 |= 1u; /*0x4c5271*/
    if ( dword_8A3874 ) /*0x4c5277*/
    {
      if ( byte_8A387D ) /*0x4c5281*/
      {
        __3_YAXPAX_Z(dword_8A3874); /*0x4c5284*/
        dword_8A3874 = 0; /*0x4c528c*/
      }
    }
    byte_8A387D = 0; /*0x4c5296*/
    dword_8A3878 = 0; /*0x4c529d*/
  }
}



// ==== 0x004C5370  EMPulseClass::Helper_4C5370  this=EMPulseClass  sig=csp ====
int __thiscall Helper_4C5370(EMPulseClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4c5373*/
  v2 = dword_8A3838; /*0x4c5378*/
  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c537d*/
  *((_DWORD *)this + 9) = v2; /*0x4c5383*/
  *((_DWORD *)this + 10) = 0; /*0x4c5388*/
  *((_DWORD *)this + 11) = 0; /*0x4c538b*/
  this->vtable4 = 0; /*0x4c538e*/
  this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5391*/
  this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5398*/
  this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c539f*/
  return (int)this->__pad_0; /*0x4c53a8*/
}



// ==== 0x004C5470  ObjectClass::method_4C5470  this=ObjectClass  sig=csp ====
int sub_4C5470(ObjectClass *this)
{
  int result; // eax

  for ( result = dword_8A3880; dword_8A3880; result = dword_8A3880 ) /*0x4c5477*/
  {
    if ( *(_DWORD *)dword_8A3874 ) /*0x4c547e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A3874 + 32))(*(_DWORD *)dword_8A3874, 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}



// ==== 0x004C54A0  LocomotionClass::UpdateAll  this=LocomotionClass  sig=csp ====
wchar_t *LocomotionClass::UpdateAll(LocomotionClass *this)
{
  wchar_t *result; // eax
  int i; // esi
  _DWORD *v3; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v3 = (_DWORD *)*((_DWORD *)dword_8A3874 + i); /*0x4c54b3*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x4c54be*/
    if ( *(int *)&stru_A8EB00.?[416] >= v3[11] + v3[12] ) /*0x4c54c5*/
    {
      if ( v3 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/
}



// ==== 0x004C54E0  ObjectClass::ApplyEMPPulseEffect  this=ObjectClass  sig=csp ====
int __thiscall ApplyEMPPulseEffect(ObjectClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ebp
  _DWORD *v8; // eax
  int *v9; // eax
  int j; // edx
  int v11; // esi
  unsigned __int16 v12; // cx
  int v13; // edx
  int v14; // ecx
  Cell *v15; // edi
  BuildingClass *v16; // eax
  BuildingClass *v17; // esi
  int *v18; // eax
  int v19; // kr04_4
  int v20; // eax
  BuildingTypeClass *Type; // ecx
  int ClosestObjectCell; // eax
  _DWORD *v23; // esi
  int v24; // eax
  AnimClass *v25; // edi
  int *v26; // eax
  BuildingClass *v27; // eax
  int owningHouseIndex; // eax
  void *v29; // [esp-10h] [ebp-5Ch]
  __int16 v30[2]; // [esp+14h] [ebp-38h] BYREF
  int v31; // [esp+18h] [ebp-34h]
  int i; // [esp+1Ch] [ebp-30h]
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h] BYREF
  int v36; // [esp+2Ch] [ebp-20h]
  int v37; // [esp+30h] [ebp-1Ch]
  _BYTE v38[12]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v39[3]; // [esp+40h] [ebp-Ch] BYREF

  result = (int)this->nextObject + this->fallRate; /*0x4c54f3*/
  if ( result > *(int *)&stru_A8EB00.?[416] ) /*0x4c54f9*/
  {
    v34 = this->owningHouseIndex * this->owningHouseIndex; /*0x4c5509*/
    v4 = 0; /*0x4c5513*/
    for ( i = 0; i < dword_A8E3A0; ++i ) /*0x4c551b*/
    {
      v5 = *((_DWORD *)dword_A8E394 + v4); /*0x4c5527*/
      if ( *(_BYTE *)(v5 + 116) ) /*0x4c552a*/
      {
        if ( !*(_BYTE *)(v5 + 129) /*0x4c5551*/
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5)
          && *(int *)(v5 + 108) > 0 )
        {
          v6 = (SLOWORD(this->occupant) << 8) + 128; /*0x4c556a*/
          v7 = (SHIWORD(this->occupant) << 8) + 128; /*0x4c5570*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v38); /*0x4c5576*/
          v9 = Coord::Subtract((Coord *)v39, *v8 - v6, v8[1] - v7, v8[2]); /*0x4c558c*/
          v35 = *v9; /*0x4c5593*/
          v36 = v9[1]; /*0x4c559e*/
          v37 = v9[2]; /*0x4c55a5*/
          if ( (int)Coord::Length((Coord *)&v35) < this->owningHouseIndex << 8 ) /*0x4c55b6*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 988))(v5, a2); /*0x4c55c1*/
        }
      }
      v4 = i + 1; /*0x4c55d3*/
    }
    result = this->owningHouseIndex; /*0x4c55e0*/
    i = -result; /*0x4c55e9*/
    for ( j = -result; j <= result; i = j ) /*0x4c55ed*/
    {
      v11 = -result; /*0x4c55f5*/
      v31 = -result; /*0x4c55f9*/
      if ( -result <= result ) /*0x4c55fd*/
      {
        do /*0x4c5899*/
        {
          v12 = j + HIWORD(this->occupant); /*0x4c560e*/
          LOWORD(v33) = v11 + LOWORD(this->occupant); /*0x4c5611*/
          HIWORD(v33) = v12; /*0x4c5616*/
          *(_DWORD *)v30 = v33; /*0x4c5622*/
          if ( (unsigned __int16)v33 < 0x200u && v12 < 0x200u ) /*0x4c5639*/
          {
            if ( (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v30) ) /*0x4c5654*/
            {
              v13 = v30[1] - SHIWORD(this->occupant); /*0x4c5677*/
              v14 = v30[0] - SLOWORD(this->occupant); /*0x4c567c*/
              if ( v14 * v14 + v13 * v13 <= v34 ) /*0x4c5689*/
              {
                v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x4c569e*/
                v16 = (BuildingClass *)Cell::IsBridge(v15); /*0x4c56a2*/
                v17 = v16; /*0x4c56a7*/
                if ( v16 ) /*0x4c56ab*/
                {
                  v18 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))v16->TechnoClass + 18))(v16, v39); /*0x4c56ba*/
                  v19 = *v18; /*0x4c56ca*/
                  v20 = v18[1] / 256; /*0x4c56db*/
                  if ( (unsigned __int16)(v19 / 256) == v30[0] && (_WORD)v20 == v30[1] && !v17->Type->InvisibleInGame ) /*0x4c56fa*/
                  {
                    BuildingClass::Deactivate(v17); /*0x4c570a*/
                    Type = v17->Type; /*0x4c5712*/
                    v17->? = (int)this->nextObject; /*0x4c5718*/
                    if ( Type->__pad_1624[128] ) /*0x4c571e*/
                      BYTE1(v17->?->HouseClass_field_timer_B[2]) = 1; /*0x4c5732*/
                  }
                }
                else
                {
                  v35 = 0; /*0x4c5747*/
                  v36 = 0; /*0x4c574b*/
                  ClosestObjectCell = Object::FindClosestObjectCell((Object *)v15, &v35, 0, 0); /*0x4c574f*/
                  v23 = (_DWORD *)ClosestObjectCell; /*0x4c5754*/
                  if ( ClosestObjectCell /*0x4c5787*/
                    && ((*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 1
                     || (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) == 2)
                    && (v23[5] & 4) != 0 )
                  {
                    if ( v23[413] ) /*0x4c578d*/
                    {
                      if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 1 /*0x4c57b5*/
                        || (v24 = v23[433], !*(_BYTE *)(v24 + 3609))
                        || !*(_BYTE *)(v24 + 3608) )
                      {
                        if ( !v23[413] ) /*0x4c57c3*/
                          WinAPI::Wrapper(-2147467261); /*0x4c57d0*/
                        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 92))(v23[413]); /*0x4c57de*/
                        if ( !v23[413] ) /*0x4c57e1*/
                          WinAPI::Wrapper(-2147467261); /*0x4c57ee*/
                        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) ) /*0x4c57fc*/
                        {
                          if ( !v23[413] ) /*0x4c5803*/
                            WinAPI::Wrapper(-2147467261); /*0x4c5810*/
                          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 72))(v23[413]); /*0x4c581e*/
                        }
                        v23[321] = this->nextObject; /*0x4c5829*/
                        v25 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4c5834*/
                        if ( v25 ) /*0x4c583b*/
                        {
                          v29 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 25); /*0x4c585b*/
                          v26 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v23 + 72))(v23, v38); /*0x4c5863*/
                          v27 = (BuildingClass *)AnimClass::ctor( /*0x4c5876*/
                                                   v25,
                                                   *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6132),
                                                   v26,
                                                   v29,
                                                   1,
                                                   (void *)0x600,
                                                   0,
                                                   0);
                          if ( v27 ) /*0x4c587d*/
                            BuildingClass::AimTurret(v27, v23); /*0x4c5882*/
                        }
                      }
                    }
                  }
                }
                v11 = v31; /*0x4c5887*/
              }
            }
          }
          owningHouseIndex = this->owningHouseIndex; /*0x4c588b*/
          j = i; /*0x4c588e*/
          v31 = ++v11; /*0x4c5895*/
        }
        while ( v11 <= owningHouseIndex ); /*0x4c5899*/
      }
      result = this->owningHouseIndex; /*0x4c589f*/
      ++j; /*0x4c58a2*/
    }
  }
  return result; /*0x4c58af*/
}



// ==== 0x004C58C0  EMPulseClass::IterateCellsInRadius  this=EMPulseClass  sig=csp ====
int __thiscall EMPulseClass::IterateCellsInRadius(EMPulseClass *this)
{
  int result; // eax
  int v3; // ebx
  int i; // ebp
  int v5; // edi
  unsigned __int16 v6; // cx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  __int16 v10[2]; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  result = *((_DWORD *)this + 10); /*0x4c58c8*/
  v3 = -result; /*0x4c58cf*/
  for ( i = result * result; v3 <= result; ++v3 ) /*0x4c58d6*/
  {
    v5 = -result; /*0x4c58df*/
    if ( -result <= result ) /*0x4c58e3*/
    {
      do /*0x4c5978*/
      {
        v6 = v3 + this->IsAllocated; /*0x4c58f4*/
        LOWORD(v11) = v5 + *((_WORD *)this + 18); /*0x4c58f7*/
        HIWORD(v11) = v6; /*0x4c58fc*/
        *(_DWORD *)v10 = v11; /*0x4c5908*/
        if ( (unsigned __int16)v11 < 0x200u /*0x4c592a*/
          && v6 < 0x200u
          && (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v10) )
        {
          v7 = v10[0] - *((__int16 *)this + 18); /*0x4c5940*/
          v8 = v10[1] - *((__int16 *)this + 19); /*0x4c5949*/
          if ( v7 * v7 + v8 * v8 <= i ) /*0x4c5957*/
          {
            v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4c5963*/
            v9[80] &= ~0x80000u; /*0x4c5968*/
          }
        }
        ++v5; /*0x4c5975*/
      }
      while ( v5 <= *((_DWORD *)this + 10) ); /*0x4c5978*/
    }
    result = *((_DWORD *)this + 10); /*0x4c597e*/
  }
  return result; /*0x4c598b*/
}



// ==== 0x004C59A0  EMPulseClass::Stat  this=EMPulseClass  sig=csp ====
int __thiscall EMPulseClass::Stat(EMPulseClass *this, unsigned int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x4c59a9*/
  Checksummer::Add_WORD((Checksummer *)a2, *((_WORD *)this + 18)); /*0x4c59b5*/
  Checksummer::Add_WORD((Checksummer *)a2, this->IsAllocated); /*0x4c59c1*/
  Power::TimerProcess(*((_DWORD *)this + 10)); /*0x4c59cc*/
  Power::TimerProcess(*((_DWORD *)this + 11)); /*0x4c59d7*/
  return Power::TimerProcess(this->vtable4); /*0x4c59e7*/
}



// ==== 0x004C59F0  EMPulseClass::ddtor  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::ddtor(EMPulseClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = unk_7E994C; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}



// ==== 0x004C5A30  EMPulseClass::Write  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Write(EMPulseClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4c5a3b*/
  if ( result >= 0 ) /*0x4c5a42*/
  {
    if ( this ) /*0x4c5a46*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x4c5a4f*/
      *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5a54*/
      this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5a5a*/
      this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5a61*/
      this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c5a68*/
    }
    return 0; /*0x4c5a6f*/
  }
  return result; /*0x4c5a71*/
}



// ==== 0x004C5A80  EMPulseClass::Seek  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Seek(EMPulseClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x4c5a8f*/
  if ( result >= 0 ) /*0x4c5a96*/
    return 0; /*0x4c5a98*/
  return result; /*0x4c5a9a*/
}



// ==== 0x004C5AA0  EMPulseClass::StubReturn52  this=EMPulseClass  sig=csp ====
int EMPulseClass::StubReturn52(EMPulseClass *this)
{
  return 52; /*0x4c5aa5*/
}



// ==== 0x004C5AB0  EMPulseClass::StubReturn55  this=EMPulseClass  sig=csp ====
int EMPulseClass::StubReturn55(EMPulseClass *this)
{
  return 55; /*0x4c5ab5*/
}



// ==== 0x004C5AC0  EMPulseClass::CopyTo  this=EMPulseClass  sig=csp ====
void **__thiscall EMPulseClass::CopyTo(EMPulseClass *this, char a2)
{
  int v3; // eax
  EMPulseClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5ac4*/
  this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5aca*/
  this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5ad1*/
  this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c5ad8*/
  if ( byte_A8E9A0 ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius(this); /*0x4c5ae8*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x4c5af1*/
  v5 = this; /*0x4c5b06*/
  v3 = (*(int (__thiscall **)(int *, EMPulseClass **))(dword_8A3870 + 16))(&dword_8A3870, &v5); /*0x4c5b0a*/
  if ( v3 != -1 && v3 < dword_8A3880 && v3 < --dword_8A3880 ) /*0x4c5b25*/
  {
    do /*0x4c5b3d*/
    {
      ++v3; /*0x4c5b2d*/
      *((_DWORD *)dword_8A3874 + v3 - 1) = *((_DWORD *)dword_8A3874 + v3); /*0x4c5b31*/
    }
    while ( v3 < dword_8A3880 ); /*0x4c5b3d*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4c5b41*/
  if ( (a2 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z(this); /*0x4c5b4e*/
  return (void **)this; /*0x4c5b58*/
}



// ==== 0x004C5B60  _DynamicVectorClass_PAVEMPulseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::Destroy(_DynamicVectorClass_PAVEMPulseClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c5b66*/
  this->m_10 = 0; /*0x4c5b69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4c5b70*/
  {
    __3_YAXPAX_Z(v2); /*0x4c5b76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5b7e*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5b81*/
  this->m_8 = 0; /*0x4c5b84*/
}



// ==== 0x004C5B90  _DynamicVectorClass_PAVEMPulseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::GetItemIndex(_DynamicVectorClass_PAVEMPulseClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c5b90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c5ba5*/
  else
    return 0; /*0x4c5b97*/
}



// ==== 0x004C5BB0  _VectorClass_PAVEMPulseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::Get(_VectorClass_PAVEMPulseClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4c5bba*/
}



// ==== 0x004C5BC0  _VectorClass_PAVEMPulseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::Add(_VectorClass_PAVEMPulseClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4c5bc2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4c5bcd*/
  {
    v3 = 0; /*0x4c5bcf*/
    if ( m_8 <= 0 ) /*0x4c5bd3*/
      return 1; /*0x4c5bf3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4c5bd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c5bdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c5be4*/
    {
      ++v3; /*0x4c5be6*/
      ++v4; /*0x4c5be7*/
      if ( v3 >= m_8 ) /*0x4c5bec*/
        return 1; /*0x4c5bec*/
    }
  }
  return 0; /*0x4c5bee*/
}



// ==== 0x004C5C00  _VectorClass_PAVEMPulseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::Release(_VectorClass_PAVEMPulseClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c5c0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c5c16*/
    if ( a3 ) /*0x4c5c1c*/
      v4 = a3; /*0x4c5c32*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c5c2e*/
    LOBYTE(this->m_C) = 1; /*0x4c5c36*/
    if ( v4 ) /*0x4c5c3a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4c5c45*/
      {
        m_8 = this->m_8; /*0x4c5c4c*/
        if ( a2 < m_8 ) /*0x4c5c51*/
          m_8 = a2; /*0x4c5c53*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c5c59*/
          ++i; /*0x4c5c5e*/
        if ( BYTE1(this->m_C) ) /*0x4c5c6b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5c76*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4c5c7e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4c5c87*/
      this->m_8 = a2; /*0x4c5c8f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4c5c92*/
      return 1; /*0x4c5c98*/
    }
    else
    {
      return 0; /*0x4c5c3f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEMPulseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c5ca2*/
    return 1; /*0x4c5ca8*/
  }
}



// ==== 0x004C5CB0  _VectorClass_PAVEMPulseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::Remove(_VectorClass_PAVEMPulseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4c5cbd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5cc3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5ccb*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5cce*/
  this->m_8 = 0; /*0x4c5cd1*/
}



// ==== 0x004C5CE0  _VectorClass_PAVEMPulseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::GetSize(_VectorClass_PAVEMPulseClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4c5ce0*/
    return 0; /*0x4c5ce8*/
  m_8 = this->m_8; /*0x4c5cee*/
  result = 0; /*0x4c5cf1*/
  if ( m_8 <= 0 ) /*0x4c5cf5*/
    return -1; /*0x4c5d0c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c5cfb*/
  {
    if ( ++result >= m_8 ) /*0x4c5d0a*/
      return -1; /*0x4c5d0a*/
  }
  return result; /*0x4c5cea*/
}



// ==== 0x004C5D20  _VectorClass_PAVEMPulseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::GetCapacity(_VectorClass_PAVEMPulseClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4c5d20*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4c5d35*/
  else
    return 0; /*0x4c5d27*/
}



// ==== 0x004C5D40  _DynamicVectorClass_PAVEMPulseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::SetCapacity(
        _DynamicVectorClass_PAVEMPulseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c5d4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4c5d52*/
    if ( a3 ) /*0x4c5d58*/
      v4 = a3; /*0x4c5d6e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4c5d6a*/
    LOBYTE(this->m_C) = 1; /*0x4c5d72*/
    if ( !v4 ) /*0x4c5d76*/
      return 0; /*0x4c5dea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4c5d78*/
    {
      m_8 = this->m_8; /*0x4c5d7f*/
      if ( a2 < m_8 ) /*0x4c5d84*/
        m_8 = a2; /*0x4c5d86*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4c5d8c*/
        ++i; /*0x4c5d91*/
      if ( BYTE1(this->m_C) ) /*0x4c5d9e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4c5da9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4c5db1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4c5dba*/
    this->m_8 = a2; /*0x4c5dc2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4c5dc5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEMPulseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4c5dce*/
  }
  v7 = this->m_8; /*0x4c5dd1*/
  if ( v7 < this->m_10 ) /*0x4c5dd9*/
    this->m_10 = v7; /*0x4c5ddb*/
  return 1; /*0x4c5dde*/
}



// ==== 0x004C5DF0  _DynamicVectorClass_PAVEMPulseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::FindItemIndex(_DynamicVectorClass_PAVEMPulseClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4c5df0*/
  result = 0; /*0x4c5df3*/
  if ( m_10 <= 0 ) /*0x4c5df8*/
    return -1; /*0x4c5e0f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4c5dfe*/
  {
    if ( ++result >= m_10 ) /*0x4c5e0d*/
      return -1; /*0x4c5e0d*/
  }
  return result; /*0x4c5e12*/
}



// ==== 0x004C5E20  _VectorClass_PAVEMPulseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EMPulseClass::QueryInterface(_VectorClass_PAVEMPulseClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c5e23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EMPulseClass *>::`vftable'; /*0x4c5e26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c5e30*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5e40*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5e4b*/
  this->m_8 = 0; /*0x4c5e51*/
  if ( (a2 & 1) != 0 ) /*0x4c5e58*/
    __3_YAXPAX_Z(this); /*0x4c5e5b*/
  return this->__pad_0; /*0x4c5e65*/
}



// ==== 0x004C5E70  _DynamicVectorClass_PAVEMPulseClass::Constructor_VectorClass_EMPulseClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(
        _DynamicVectorClass_PAVEMPulseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4c5e73*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EMPulseClass *>::`vftable'; /*0x4c5e76*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4c5e80*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e88*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5e90*/
  }
  BYTE1(this->m_C) = 0; /*0x4c5e9b*/
  this->m_8 = 0; /*0x4c5ea1*/
  if ( (a2 & 1) != 0 ) /*0x4c5ea8*/
    __3_YAXPAX_Z(this); /*0x4c5eab*/
  return this->__pad_0; /*0x4c5eb5*/
}



// ==== 0x004C5EC0  nullsub_127  this=-  sig=ida-proto ====
void nullsub_127()
{
  ; /*0x4c5ec0*/
}



// ==== 0x004C5ED0  nullsub_128  this=-  sig=ida-proto ====
void nullsub_128()
{
  ; /*0x4c5ed0*/
}



// ==== 0x004C5EE0  sub_4C5EE0  this=-  sig=ida-proto ====
void sub_4C5EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c5eec*/
  dbl_8A38D8 = Math::Sqrt(v0 + v0); /*0x4c5efe*/
}



// ==== 0x004C5F10  sub_4C5F10  this=-  sig=ida-proto ====
void sub_4C5F10()
{
  dbl_8A3970 = dbl_8A38D8 / 60.0; /*0x4c5f1c*/
}



// ==== 0x004C5F30  sub_4C5F30  this=-  sig=ida-proto ====
void sub_4C5F30()
{
  dbl_8A3958 = 1.0 / dbl_8A3970; /*0x4c5f3c*/
}



// ==== 0x004C5F50  sub_4C5F50  this=-  sig=ida-proto ====
void sub_4C5F50()
{
  dbl_8A3950 = 0.0174532925199433 * 45.0; /*0x4c5f5c*/
}



// ==== 0x004C5F70  sub_4C5F70  this=-  sig=ida-proto ====
void sub_4C5F70()
{
  dbl_8A3928 = 0.0174532925199433 * 60.0; /*0x4c5f7c*/
}



// ==== 0x004C5F90  sub_4C5F90  this=-  sig=ida-proto ====
void sub_4C5F90()
{
  dbl_8A38B8 = 0.0174532925199433 * 90.0; /*0x4c5f9c*/
}



// ==== 0x004C5FB0  sub_4C5FB0  this=-  sig=ida-proto ====
__int64 sub_4C5FB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A38B8 - dbl_8A3928); /*0x4c5fc2*/
  result = Math::RoundToInt(v0 * dbl_8A38D8 * 0.5); /*0x4c5fd6*/
  dword_8A3978 = result; /*0x4c5fdb*/
  return result; /*0x4c5fe0*/
}



// ==== 0x004C5FF0  sub_4C5FF0  this=-  sig=ida-proto ====
void sub_4C5FF0()
{
  dbl_8A3930 = Math::ArcTan((double)dword_8A3978 * 0.00390625); /*0x4c6007*/
}



// ==== 0x004C6020  sub_4C6020  this=-  sig=ida-proto ====
void sub_4C6020()
{
  dbl_8A3948 = Math::ArcTan((double)(2 * dword_8A3978) / dbl_8A38D8); /*0x4c6042*/
}



// ==== 0x004C6050  sub_4C6050  this=-  sig=ida-proto ====
__int64 sub_4C6050()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3978) + 0.5); /*0x4c606b*/
  dword_8A396C = result; /*0x4c6070*/
  return result; /*0x4c6076*/
}



// ==== 0x004C6080  sub_4C6080  this=-  sig=ida-proto ====
int sub_4C6080()
{
  word_8A38D0 = 0; /*0x4c6082*/
  word_8A38D2 = 0; /*0x4c6088*/
  return 0; /*0x4c608e*/
}



// ==== 0x004C6090  sub_4C6090  this=-  sig=ida-proto ====
int sub_4C6090()
{
  dword_8A3938 = 0; /*0x4c6092*/
  dword_8A393C = 0; /*0x4c6097*/
  dword_8A3940 = 0; /*0x4c609c*/
  return 0; /*0x4c60a1*/
}



// ==== 0x004C60B0  sub_4C60B0  this=-  sig=ida-proto ====
int sub_4C60B0()
{
  dword_8A3968 = 0; /*0x4c60b5*/
  dword_8A3960 = 128; /*0x4c60bf*/
  dword_8A3964 = 128; /*0x4c60c4*/
  return 128; /*0x4c60c9*/
}



// ==== 0x004C60D0  sub_4C60D0  this=-  sig=ida-proto ====
int sub_4C60D0()
{
  dword_8A38C0 = 0; /*0x4c60d2*/
  dword_8A38C4 = 0; /*0x4c60d7*/
  dword_8A38C8 = 0; /*0x4c60dc*/
  dword_8A38CC = 0; /*0x4c60e1*/
  return 0; /*0x4c60e6*/
}



// ==== 0x004C60F0  sub_4C60F0  this=-  sig=ida-proto ====
int sub_4C60F0()
{
  dword_8A3914 = 0; /*0x4c60fd*/
  dword_8A3918 = 0; /*0x4c6102*/
  dword_8A391C = 1; /*0x4c6107*/
  word_8A3920 = 0; /*0x4c6111*/
  memset(&stru_8A38E0, 0, 0x30u); /*0x4c6117*/
  unk_8A3910 = 0; /*0x4c611e*/
  return atexit(nullsub_129); /*0x4c6128*/
}



// ==== 0x004C6130  nullsub_129  this=-  sig=ida-proto ====
void __cdecl nullsub_129()
{
  ; /*0x4c6130*/
}



// ==== 0x004C6140  Menu::Reset  this=Menu  sig=csp ====
int __thiscall Menu::Reset(Menu *this)
{
  this->u32_34 = 0; /*0x4c614c*/
  this->u32_38 = 0; /*0x4c614f*/
  this->u32_3C = 1; /*0x4c6152*/
  this->q020 = 0; /*0x4c6159*/
  memset(this, 0, 0x30u); /*0x4c615d*/
  this->u32_18 = 0; /*0x4c615f*/
  return (int)this; /*0x4c6163*/
}



// ==== 0x004C6170  nullsub_130  this=-  sig=ida-proto ====
void nullsub_130()
{
  ; /*0x4c6170*/
}



// ==== 0x004C6180  Scenario::CopyLocalScenarioData  this=Scenario  sig=csp ====
int __thiscall Scenario::CopyLocalScenarioData(Scenario *this)
{
  int v2; // ecx
  int i; // eax
  void *vtable3; // edx
  char *abstractFlags; // eax
  int result; // eax

  v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *((_BYTE *)this + v2 - 1) = *((_BYTE *)&dword_A8B230[202].referenceCount + i + 3) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  this->Scenario_field_0x34 = (void *)(*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x4c61b1*/
  vtable3 = dword_A8B230[127].vtable3; /*0x4c61ba*/
  abstractFlags = (char *)dword_A8B230[127].abstractFlags; /*0x4c61c0*/
  if ( vtable3 != (void *)-1 ) /*0x4c61c9*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= (int)abstractFlags ) /*0x4c61d5*/
      abstractFlags = 0; /*0x4c61db*/
    else
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x4c61d7*/
  }
  this->Scenario_field_0x38 = abstractFlags; /*0x4c61dd*/
  result = *(_DWORD *)&dword_A83D4C->__pad_140[68]; /*0x4c61e6*/
  *(_DWORD *)this->__pad_3C = result; /*0x4c61ec*/
  *(_WORD *)&this->__pad_3C[4] = dword_A8B230[381].vtable3; /*0x4c61fc*/
  return result; /*0x4c6200*/
}



// ==== 0x004C6210  GameResult::CalcScore  this=GameResult  sig=csp ====
_WORD *__thiscall GameResult::CalcScore(GameResult *this)
{
  signed int i; // esi
  double v3; // st7
  int v4; // eax
  int v5; // esi
  _WORD *result; // eax
  int v7; // ecx
  void **p_vtable3; // eax
  double nextArrayIndex; // [esp+8h] [ebp-Ch]

  for ( i = 0; i < 50; ++i ) /*0x4c6217*/
    ScenarioClass::SetGlobalToByID((ScenarioClass *)dword_A8B230, i, this->__tail_0[i]); /*0x4c6224*/
  v3 = (double)*((int *)this + 13) * *(double *)&dword_A8B230[202].uniqueId; /*0x4c6244*/
  if ( dword_A8B230[202].nextArrayIndex != -1 ) /*0x4c624a*/
  {
    nextArrayIndex = (double)dword_A8B230[202].nextArrayIndex; /*0x4c6250*/
    if ( v3 >= nextArrayIndex ) /*0x4c625d*/
      v3 = nextArrayIndex; /*0x4c6261*/
  }
  LOWORD(v4) = Math::RoundToInt(v3); /*0x4c6265*/
  v5 = v4; /*0x4c6270*/
  HouseClass::AddPower((HouseClass *)dword_A83D4C, v4); /*0x4c6273*/
  *(_DWORD *)&dword_A83D4C->__pad_140[156] += v5; /*0x4c6285*/
  HouseClass::SetCombatPower((int *)dword_A83D4C->__pad_0, *((_DWORD *)this + 15)); /*0x4c6295*/
  result = dword_A8B230; /*0x4c629a*/
  if ( BYTE1(dword_A8B230[374].abstractFlags) ) /*0x4c629f*/
  {
    v7 = *((_DWORD *)this + 14); /*0x4c62a9*/
    if ( v7 <= 0 ) /*0x4c62ae*/
    {
      LOWORD(dword_A8B230[381].vtable3) = *((_WORD *)this + 32); /*0x4c62fc*/
      return result; /*0x4c6307*/
    }
    p_vtable3 = &dword_A8B230[127].vtable3; /*0x4c62b6*/
    dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x4c62bb*/
    p_vtable3[1] = (void *)HIDWORD(nextArrayIndex); /*0x4c62c1*/
    p_vtable3[2] = (void *)v7; /*0x4c62c4*/
    result = dword_A8B230; /*0x4c62c7*/
    if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x4c62d3*/
    {
      dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x4c62db*/
      result = dword_A8B230; /*0x4c62e1*/
      LOWORD(dword_A8B230[381].vtable3) = *((_WORD *)this + 32); /*0x4c62eb*/
      return result; /*0x4c62f6*/
    }
  }
  result[6864] = *((_WORD *)this + 32); /*0x4c630d*/
  return result; /*0x4c62ea*/
}



// ==== 0x004C6320  LoadGame::LoadBlock68  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadBlock68(LoadGame *this, int a2)
{
  return (*(int (__stdcall **)(int, LoadGame *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 68, 0); /*0x4c632f*/
}



// ==== 0x004C6340  SaveGame::SaveBlock68  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveBlock68(SaveGame *this, int a2)
{
  return (*(int (__stdcall **)(int, SaveGame *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/
}



// ==== 0x004C6360  sub_4C6360  this=-  sig=ida-proto ====
void sub_4C6360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c636c*/
  dbl_8A39A0 = Math::Sqrt(v0 + v0); /*0x4c637e*/
}



// ==== 0x004C6390  sub_4C6390  this=-  sig=ida-proto ====
void sub_4C6390()
{
  dbl_8A39F0 = dbl_8A39A0 / 60.0; /*0x4c639c*/
}



// ==== 0x004C63B0  sub_4C63B0  this=-  sig=ida-proto ====
void sub_4C63B0()
{
  dbl_8A39D8 = 1.0 / dbl_8A39F0; /*0x4c63bc*/
}



// ==== 0x004C63D0  sub_4C63D0  this=-  sig=ida-proto ====
void sub_4C63D0()
{
  dbl_8A39D0 = 0.0174532925199433 * 45.0; /*0x4c63dc*/
}



// ==== 0x004C63F0  sub_4C63F0  this=-  sig=ida-proto ====
void sub_4C63F0()
{
  dbl_8A39A8 = 0.0174532925199433 * 60.0; /*0x4c63fc*/
}



// ==== 0x004C6410  sub_4C6410  this=-  sig=ida-proto ====
void sub_4C6410()
{
  dbl_8A3980 = 0.0174532925199433 * 90.0; /*0x4c641c*/
}



// ==== 0x004C6430  sub_4C6430  this=-  sig=ida-proto ====
__int64 sub_4C6430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3980 - dbl_8A39A8); /*0x4c6442*/
  result = Math::RoundToInt(v0 * dbl_8A39A0 * 0.5); /*0x4c6456*/
  dword_8A39F8 = result; /*0x4c645b*/
  return result; /*0x4c6460*/
}



// ==== 0x004C6470  sub_4C6470  this=-  sig=ida-proto ====
void sub_4C6470()
{
  dbl_8A39B0 = Math::ArcTan((double)dword_8A39F8 * 0.00390625); /*0x4c6487*/
}



// ==== 0x004C64A0  sub_4C64A0  this=-  sig=ida-proto ====
void sub_4C64A0()
{
  dbl_8A39C8 = Math::ArcTan((double)(2 * dword_8A39F8) / dbl_8A39A0); /*0x4c64c2*/
}



// ==== 0x004C64D0  sub_4C64D0  this=-  sig=ida-proto ====
__int64 sub_4C64D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A39F8) + 0.5); /*0x4c64eb*/
  dword_8A39EC = result; /*0x4c64f0*/
  return result; /*0x4c64f6*/
}



// ==== 0x004C6500  sub_4C6500  this=-  sig=ida-proto ====
int sub_4C6500()
{
  dword_8A3998 = 0; /*0x4c6502*/
  return 0; /*0x4c650e*/
}



// ==== 0x004C6510  sub_4C6510  this=-  sig=ida-proto ====
int sub_4C6510()
{
  dword_8A39B8 = 0; /*0x4c6512*/
  dword_8A39BC = 0; /*0x4c6517*/
  dword_8A39C0 = 0; /*0x4c651c*/
  return 0; /*0x4c6521*/
}



// ==== 0x004C6530  sub_4C6530  this=-  sig=ida-proto ====
int sub_4C6530()
{
  dword_8A39E8 = 0; /*0x4c6535*/
  dword_8A39E0 = 128; /*0x4c653f*/
  dword_8A39E4 = 128; /*0x4c6544*/
  return 128; /*0x4c6549*/
}



// ==== 0x004C6550  sub_4C6550  this=-  sig=ida-proto ====
int sub_4C6550()
{
  dword_8A3988 = 0; /*0x4c6552*/
  dword_8A398C = 0; /*0x4c6557*/
  dword_8A3990 = 0; /*0x4c655c*/
  dword_8A3994 = 0; /*0x4c6561*/
  return 0; /*0x4c6566*/
}



// ==== 0x004C65E0  EventClass::Add  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_Add(char *this, int a2, unsigned __int8 a3, int a4, char a5)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c65fc*/
  if ( a2 < 0 ) /*0x4c660a*/
  {
    this->vtable3 = -1; /*0x4c6631*/
    *this = 0; /*0x4c6635*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6610*/
    *this = a3; /*0x4c661a*/
    *(_DWORD *)(this + 7) = a4; /*0x4c661c*/
    *(this + 11) = a5; /*0x4c6620*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}



// ==== 0x004C6650  PlayerClass::SetTargetOrClear  this=AbstractClass  sig=csp ====
char *__thiscall sub_4C6650(char *this, int a2, char a3, _WORD *a4)
{
  Debug::Log(); /*0x4c666c*/
  if ( a2 < 0 ) /*0x4c667a*/
  {
    this->vtable3 = -1; /*0x4c66a4*/
    *this = 0; /*0x4c66a8*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c66b3*/
    return this; /*0x4c66b1*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c667c*/
    *this = a3; /*0x4c6683*/
    *(_WORD *)(this + 7) = *a4; /*0x4c6688*/
    *(_WORD *)(this + 9) = a4[1]; /*0x4c6690*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c669a*/
    return this; /*0x4c669d*/
  }
}



// ==== 0x004C66C0  EventClass::AddEvent  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_AddEvent(char *this, int a2, unsigned __int8 a3)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    this->vtable3 = -1; /*0x4c6701*/
    *this = 0; /*0x4c6705*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c66ec*/
    *this = a3; /*0x4c66ef*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}



// ==== 0x004C6720  EventClass::Add2  this=AbstractClass  sig=csp ====
char *__thiscall EventClass_Add2(char *this, int a2, unsigned __int8 a3, int a4)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c673c*/
  if ( a2 < 0 ) /*0x4c674a*/
  {
    this->vtable3 = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6755*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}



// ==== 0x004C6780  ScenarioClass::SetEvent  this=AbstractClass  sig=csp ====
char *__thiscall ScenarioClass_SetEvent(char *this, int a2, char a3, int a4, char a5, int a6, char a7)
{
  Debug::Log(); /*0x4c679c*/
  if ( a2 < 0 ) /*0x4c67aa*/
  {
    this->vtable3 = -1; /*0x4c67e2*/
    *this = 0; /*0x4c67e6*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c67ee*/
    return this; /*0x4c67f1*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c67b0*/
    *this = a3; /*0x4c67ba*/
    *(_DWORD *)(this + 7) = a4; /*0x4c67bc*/
    *(this + 11) = a5; /*0x4c67c2*/
    this->vtable4 = a6; /*0x4c67cc*/
    this->uniqueId = a7; /*0x4c67d1*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c67da*/
    return this; /*0x4c67cf*/
  }
}



// ==== 0x004C6860  ScriptAction::InitActionFields  this=AbstractClass  sig=csp ====
char *__thiscall sub_4C6860(
        char *this,
        int a2,
        int a3,
        char a4,
        char a5,
        int a6,
        char a7,
        int a8,
        char a9,
        int a10,
        char a11)
{
  char *result; // eax

  result = this; /*0x4c6860*/
  if ( a2 < 0 ) /*0x4c6868*/
  {
    this->vtable3 = -1; /*0x4c68ca*/
    *this = 0; /*0x4c68ce*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c686e*/
    *this = 4; /*0x4c6874*/
    this->q01D = 0; /*0x4c6877*/
    *(_DWORD *)(this + 7) = a3; /*0x4c687b*/
    *(this + 11) = a4; /*0x4c6881*/
    this->vtable4 = a5; /*0x4c6888*/
    *(_DWORD *)(this + 14) = a6; /*0x4c6892*/
    *(this + 18) = a7; /*0x4c6899*/
    *(_DWORD *)(this + 19) = a8; /*0x4c68a3*/
    *(this + 23) = a9; /*0x4c68aa*/
    this->nextArrayIndex = a10; /*0x4c68b4*/
    this->referenceCount = a11; /*0x4c68bb*/
  }
  *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c68c4*/
  return result; /*0x4c68c7*/
}



// ==== 0x004C68E0  ObjectClass::method_4C68E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C68E0(
        char *this,
        int a2,
        int a3,
        char a4,
        char a5,
        int a6,
        char a7,
        int a8,
        char a9,
        int a10,
        int a11)
{
  Debug::Log(); /*0x4c68e8*/
  if ( a2 < 0 ) /*0x4c68f6*/
  {
    this->vtable3 = -1; /*0x4c6952*/
    *this = 0; /*0x4c6956*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6961*/
    return this; /*0x4c695f*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6900*/
    *this = 5; /*0x4c6906*/
    *(_DWORD *)(this + 7) = a3; /*0x4c6909*/
    this->fallRate = a4; /*0x4c690e*/
    this->vtable4 = a5; /*0x4c6919*/
    *(_DWORD *)(this + 13) = a6; /*0x4c6920*/
    this->q011 = a7; /*0x4c6926*/
    *(_DWORD *)(this + 18) = a8; /*0x4c6930*/
    *(_DWORD *)(this + 27) = a11; /*0x4c6937*/
    this->q058 = a9; /*0x4c693a*/
    *(_DWORD *)(this + 23) = a10; /*0x4c6941*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6949*/
    return this; /*0x4c694c*/
  }
}



// ==== 0x004C6970  EventClass::AddEventEx  this=SelectClass@StripClass@SidebarClass  sig=csp ====
char *__thiscall EventClass_AddEventEx(char *this, int a2, unsigned __int8 a3, int a4, int a5, int a6)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c698c*/
  if ( a2 < 0 ) /*0x4c699a*/
  {
    this->Y = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    this->Y = a2; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    *(_DWORD *)(this + 7) = a4; /*0x4c69ad*/
    *(_DWORD *)(this + 11) = a5; /*0x4c69b0*/
    *(_DWORD *)(this + 15) = a6; /*0x4c69b3*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}



// ==== 0x004C69E0  ObjectClass::method_4C69E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C69E0(ObjectClass *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c69fc*/
  if ( a2 < 0 ) /*0x4c6a0a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6a48*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6a4c*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a57*/
    return (char *)this; /*0x4c6a55*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6a10*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6a17*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6a19*/
    *(void **)((char *)&this->? + 3) = (void *)-1; /*0x4c6a1c*/
    *(void **)((char *)&this->? + 3) = 0; /*0x4c6a23*/
    *(_WORD *)((char *)&this->? + 3) = *a5; /*0x4c6a2d*/
    *(_WORD *)((char *)&this->? + 1) = a5[1]; /*0x4c6a35*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a3e*/
    return (char *)this; /*0x4c6a41*/
  }
}



// ==== 0x004C6A60  ObjectClass::method_4C6A60  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6A60(ObjectClass *this, int a2, char a3, int a4, int a5, _WORD *a6)
{
  Debug::Log(); /*0x4c6a7c*/
  if ( a2 < 0 ) /*0x4c6a8a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6ac8*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6acc*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6ad7*/
    return (char *)this; /*0x4c6ad5*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6a90*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6a97*/
    *(void **)((char *)&this->? + 3) = (void *)a5; /*0x4c6a99*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6aa0*/
    *(void **)((char *)&this->? + 3) = 0; /*0x4c6aa3*/
    *(_WORD *)((char *)&this->? + 3) = *a6; /*0x4c6aad*/
    *(_WORD *)((char *)&this->? + 1) = a6[1]; /*0x4c6ab5*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6abe*/
    return (char *)this; /*0x4c6ac1*/
  }
}



// ==== 0x004C6AE0  EventClass::Init  this=AbstractClass  sig=csp ====
char *__thiscall EventClass::Init(char *this, int a2, char a3, int a4, int a5, int a6, _WORD *a7)
{
  Debug::Log(); /*0x4c6afc*/
  if ( a2 < 0 ) /*0x4c6b0a*/
  {
    this->vtable3 = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6b14*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b24*/
    *(_DWORD *)(this + 15) = a6; /*0x4c6b27*/
    *(_WORD *)(this + 19) = *a7; /*0x4c6b2d*/
    *(_WORD *)(this + 21) = a7[1]; /*0x4c6b35*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}



// ==== 0x004C6B60  SidebarClass::SetFlashEntry  this=SidebarClass  sig=csp ====
char *__thiscall sub_4C6B60(char *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c6b7c*/
  if ( a2 < 0 ) /*0x4c6b8a*/
  {
    this->q008 = -1; /*0x4c6bba*/
    *this = 0; /*0x4c6bbe*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6bc9*/
    return this; /*0x4c6bc7*/
  }
  else
  {
    this->q008 = a2; /*0x4c6b90*/
    *this = a3; /*0x4c6b97*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b99*/
    *(_WORD *)(this + 11) = *a5; /*0x4c6b9f*/
    *(_WORD *)(this + 13) = a5[1]; /*0x4c6ba7*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6bb0*/
    return this; /*0x4c6bb3*/
  }
}



// ==== 0x004C6BE0  ObjectClass::method_4C6BE0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6BE0(ObjectClass *this, int a2, char a3, int a4, int a5)
{
  Debug::Log(); /*0x4c6bfc*/
  if ( a2 < 0 ) /*0x4c6c0a*/
  {
    BYTE2(this->AbstractClass) = -1; /*0x4c6c2f*/
    LOBYTE(this->AbstractClass) = 0; /*0x4c6c33*/
  }
  else
  {
    BYTE2(this->AbstractClass) = a2; /*0x4c6c10*/
    LOBYTE(this->AbstractClass) = a3; /*0x4c6c17*/
    *(void **)((char *)&this->? + 3) = (void *)a4; /*0x4c6c19*/
    *(void **)((char *)&this->? + 3) = (void *)a5; /*0x4c6c1c*/
  }
  *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6c27*/
  return (char *)this; /*0x4c6c2a*/
}



// ==== 0x004C6C50  Network::initConnection  this=Network  sig=csp ====
char *__thiscall sub_4C6C50(char *this, int a2, _DWORD *a3, char a4)
{
  _DWORD *v5; // ecx
  char v6; // al
  int v8; // [esp+4h] [ebp-8h] BYREF

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    this->q008 = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6ca6*/
    return this; /*0x4c6ca4*/
  }
  else
  {
    this->q008 = a2; /*0x4c6c5e*/
    v5 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    Network::CopyAddress(v5, &a2, (int)&v8); /*0x4c6c72*/
    v6 = a4; /*0x4c6c7b*/
    this->q008 = v8; /*0x4c6c7f*/
    this->q01C = v6; /*0x4c6c82*/
    *(_DWORD *)(this + 3) = dword_A8ED84; /*0x4c6c8d*/
    return this; /*0x4c6c8b*/
  }
}



// ==== 0x004C6CB0  EventClass::ProcessEvent  this=EventClass  sig=csp ====
void __thiscall EventClass::ProcessEvent(EventClass *this)
{
  void *v2; // ebx
  int v3; // edi
  BuildingClass *Building; // esi
  BuildingClass *v5; // esi
  TechnoClass *v6; // edi
  void *v7; // eax
  wchar_t *v8; // eax
  _BYTE *v9; // esi
  _BYTE *v10; // edi
  _DWORD *v11; // eax
  CellClass *v12; // eax
  __int16 v13; // ax
  int v14; // eax
  AnimClass *v15; // eax
  void **v16; // eax
  AnimClass *v17; // eax
  void **v18; // edi
  int v19; // esi
  __int16 v20; // dx
  bool v21; // zf
  void *v22; // eax
  int v23; // esi
  Team *v24; // edi
  int v25; // ebx
  int v26; // eax
  int Object; // eax
  void *v28; // eax
  void *v29; // ebp
  _BYTE *Member; // eax
  _BYTE *v31; // ebp
  int *v32; // ecx
  int v33; // ebx
  TechnoClass *v34; // ebp
  FactoryClass *v35; // ecx
  int v36; // ebx
  BuildingLoadQueue *v37; // esi
  void *Next; // eax
  void *v39; // eax
  void *v40; // ebx
  int v41; // ebp
  void *v42; // eax
  int v43; // ebx
  void *v44; // eax
  FootClass *v45; ... [37047 chars total]



// ==== 0x004C81D0  sub_4C81D0  this=-  sig=ida-proto ====
int sub_4C81D0()
{
  *(_DWORD *)&Buffer[0x10000] = 0; /*0x4c81d2*/
  *(_DWORD *)&Buffer[65540] = 0; /*0x4c81d7*/
  *(_DWORD *)&Buffer[65544] = 0; /*0x4c81dc*/
  *(_DWORD *)&Buffer[65548] = 0; /*0x4c81e1*/
  return 0; /*0x4c81e6*/
}



// ==== 0x004C81F0  sub_4C81F0  this=-  sig=ida-proto ====
void sub_4C81F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c81fc*/
  *(double *)&Buffer[65560] = Math::Sqrt(v0 + v0); /*0x4c820e*/
}



// ==== 0x004C8220  sub_4C8220  this=-  sig=ida-proto ====
void sub_4C8220()
{
  *(double *)&Buffer[65640] = *(double *)&Buffer[65560] / 60.0; /*0x4c822c*/
}



// ==== 0x004C8240  sub_4C8240  this=-  sig=ida-proto ====
void sub_4C8240()
{
  *(double *)&Buffer[65616] = 1.0 / *(double *)&Buffer[65640]; /*0x4c824c*/
}



// ==== 0x004C8260  sub_4C8260  this=-  sig=ida-proto ====
void sub_4C8260()
{
  *(double *)&Buffer[65608] = 0.0174532925199433 * 45.0; /*0x4c826c*/
}



// ==== 0x004C8280  sub_4C8280  this=-  sig=ida-proto ====
void sub_4C8280()
{
  *(double *)&Buffer[65568] = 0.0174532925199433 * 60.0; /*0x4c828c*/
}



// ==== 0x004C82A0  sub_4C82A0  this=-  sig=ida-proto ====
void sub_4C82A0()
{
  dbl_8A3A00 = 0.0174532925199433 * 90.0; /*0x4c82ac*/
}



// ==== 0x004C82C0  sub_4C82C0  this=-  sig=ida-proto ====
__int64 sub_4C82C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A3A00 - *(double *)&Buffer[65568]); /*0x4c82d2*/
  result = Math::RoundToInt(v0 * *(double *)&Buffer[65560] * 0.5); /*0x4c82e6*/
  *(_DWORD *)&Buffer[65648] = result; /*0x4c82eb*/
  return result; /*0x4c82f0*/
}



// ==== 0x004C8300  sub_4C8300  this=-  sig=ida-proto ====
void sub_4C8300()
{
  *(double *)&Buffer[65576] = Math::ArcTan((double)*(int *)&Buffer[65648] * 0.00390625); /*0x4c8317*/
}



// ==== 0x004C8330  sub_4C8330  this=-  sig=ida-proto ====
void sub_4C8330()
{
  *(double *)&Buffer[65600] = Math::ArcTan((double)(2 * *(_DWORD *)&Buffer[65648]) / *(double *)&Buffer[65560]); /*0x4c8352*/
}



// ==== 0x004C8360  sub_4C8360  this=-  sig=ida-proto ====
__int64 sub_4C8360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&Buffer[65648]) + 0.5); /*0x4c837b*/
  *(_DWORD *)&Buffer[65636] = result; /*0x4c8380*/
  return result; /*0x4c8386*/
}



// ==== 0x004C8390  sub_4C8390  this=-  sig=ida-proto ====
int sub_4C8390()
{
  *(_WORD *)&Buffer[65552] = 0; /*0x4c8392*/
  *(_WORD *)&Buffer[65554] = 0; /*0x4c8398*/
  return 0; /*0x4c839e*/
}



// ==== 0x004C83A0  sub_4C83A0  this=-  sig=ida-proto ====
int sub_4C83A0()
{
  *(_DWORD *)&Buffer[65584] = 0; /*0x4c83a2*/
  *(_DWORD *)&Buffer[65588] = 0; /*0x4c83a7*/
  *(_DWORD *)&Buffer[65592] = 0; /*0x4c83ac*/
  return 0; /*0x4c83b1*/
}



// ==== 0x004C83C0  sub_4C83C0  this=-  sig=ida-proto ====
int sub_4C83C0()
{
  *(_DWORD *)&Buffer[65632] = 0; /*0x4c83c5*/
  *(_DWORD *)&Buffer[65624] = 128; /*0x4c83cf*/
  *(_DWORD *)&Buffer[65628] = 128; /*0x4c83d4*/
  return 128; /*0x4c83d9*/
}



// ==== 0x004C83E0  DialogFunc  this=-  sig=csp ====
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 > 0x111 ) /*0x4c83ea*/
  {
    if ( a2 == 534 ) /*0x4c84bc*/
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x4c84d6*/
    return 0; /*0x4c84bc*/
  }
  if ( a2 == 273 ) /*0x4c83f0*/
  {
    if ( (unsigned __int16)a3 == 1149 ) /*0x4c847d*/
    {
      MessageBoxA(hDlg, aSorryYouCanOnl, aBummer, 0x30u); /*0x4c84ab*/
      return 0; /*0x4c84b4*/
    }
    if ( (unsigned __int16)a3 == 1153 ) /*0x4c8482*/
    {
      EndDialog(hDlg, 1153); /*0x4c848e*/
      return 0; /*0x4c8497*/
    }
    return 0; /*0x4c8482*/
  }
  if ( a2 == 16 ) /*0x4c83f5*/
  {
    EndDialog(hDlg, 1153); /*0x4c845c*/
    Object::RemoveObjectArray(hDlg); /*0x4c8464*/
    return 0; /*0x4c846c*/
  }
  if ( a2 != 272 ) /*0x4c83fc*/
    return 0; /*0x4c84c1*/
  Debug::Log(aWmInitdialog); /*0x4c8407*/
  SetDlgItemTextA(hDlg, 1156, Buffer); /*0x4c841e*/
  SetFocus(hDlg); /*0x4c8425*/
  if ( g_hWnd ) /*0x4c8433*/
    SetDialogParent(hDlg, g_hWnd); /*0x4c8437*/
  ShowWindow(hDlg, 1); /*0x4c843f*/
  TimerPool::AllocSlot(hDlg); /*0x4c8447*/
  return 0; /*0x4c844e*/
}



// ==== 0x004C84E0  sub_4C84E0  this=-  sig=ida-proto ====
int sub_4C84E0()
{
  const DLGTEMPLATE *Resource; // esi
  INT_PTR v1; // esi

  WinMain_Write_53E6B0(); /*0x4c84e2*/
  switch ( dword_820E5C ) /*0x4c84ed*/
  {
    case 1: /*0x4c84ed*/
      if ( !AllocConsole() ) /*0x4c85a0*/
      {
        FreeConsole(); /*0x4c85ac*/
        AllocConsole(); /*0x4c85ae*/
      }
      _cwprintf(aErrorRecursive); /*0x4c85b5*/
      Sleep(0xFA0u); /*0x4c85c2*/
      sub_7DD1D7(); /*0x4c85c8*/
      FreeConsole(); /*0x4c85cd*/
      return 1153; /*0x4c85cd*/
    case 2: /*0x4c84ed*/
      return 1153; /*0x4c85d0*/
    case 3: /*0x4c84ed*/
      ExitProcess(0); /*0x4c858c*/
  }
  ShowCursor(1); /*0x4c8509*/
  Resource = (const DLGTEMPLATE *)FindResource(0xF7u, (const CHAR *)5); /*0x4c851a*/
  Debug::Log(); /*0x4c8525*/
  if ( Resource ) /*0x4c851e*/
    v1 = DialogBoxIndirectParamA(g_hInstance, Resource, g_hWnd, DialogFunc, 0); /*0x4c8548*/
  else
    v1 = DialogBoxParamA(g_hInstance, (LPCSTR)0xF7, g_hWnd, DialogFunc, 0); /*0x4c857f*/
  ShowCursor(0); /*0x4c854c*/
  return v1; /*0x4c8550*/
}



// ==== 0x004C85E0  ExceptionHandler::GenerateReport  this=ExceptionHandler  sig=csp ====
int __thiscall ExceptionHandler::GenerateReport(ExceptionHandler *this)
{
  HMODULE LibraryA; // ebp
  FARPROC *v2; // esi
  LPCSTR *i; // edi
  HANDLE v4; // eax
  HANDLE CurrentProcess; // eax
  ExceptionHandler v6; // ebp
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int *v10; // ecx
  const CHAR *v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  HANDLE v17; // eax
  int v18; // edi
  char *ModuleVersion; // eax
  int v20; // edi
  char *ModuleInternalVersion; // eax
  int v22; // edi
  char *v23; // eax
  int v24; // edi
  char *v25; // eax
  char *Name; // eax
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  unsigned __int8 *v34; // edi
  int v35; // edi
  int v36; // edi
  FARPROC *v37; // edi
  void (__stdcall *v38)(LPSTR, LPCSTR); // ebp
  bool v39; // zf
  HANDLE v40; // eax
  int v41; // ebp
  HANDLE v42; // eax
  HANDLE v43; // eax
  int v44; // edi
  int result; // eax
  int v46; // [esp+18h] [ebp-4E4h]
  FARPROC v47; // [esp+18h] [ebp-4E4h]
  char *v48; // [esp+1Ch] [ebp-4E0h]
  const char *v49; // [esp+1Ch] [ebp-4E0h]
  FARPROC v50; // [esp+20h] [ebp-4DCh]
  char v51; // [esp+37h] [ebp-4C5h] BYREF
  int v52; // [esp+38h] [ebp-4C4h]
  int v53; // [esp+3Ch] [ebp-4C0h] BYREF
  int v54; // [esp+40h] [ebp-4BCh]
  ExceptionHandler *v55; // [esp+44h] [ebp-4B8h]
  int v56; // [esp+48h] [ebp-4B4h]
  int v57; // [esp+4Ch] [ebp-4B0h]
  int v58; // [esp+50h] [ebp-4ACh] BYREF
  HMODULE hLibModule; // [esp+54h] [ebp-4A8h]
  CHAR String[256]; // [esp+58h] [ebp-4A4h] BYREF
  CHAR String2[32]; // [esp+158h] [ebp-3A4h] BYREF
  _DWORD v62[64]; // [esp+178h] [ebp-384h] BYREF
  char Buffer[128]; // [esp+278h] [ebp-284h] BYREF
  CHAR Filename[260]; // [esp+2F8h] [ebp-204h] BYREF
  char Destination[128]; // [esp+3FCh] [ebp-100h] BYREF
  char v66[128]; // [esp+47Ch] [ebp-80h] BYREF

  v55 = this; /*0x4c85ea*/
  Debug::Log(); /*0x4c85f3*/
  memset(::Buffer, 0, 0x10000u); /*0x4c8607*/
  LibraryA = LoadLibraryA(LibFileName); /*0x4c8614*/
  hLibModule = LibraryA; /*0x4c8618*/
  if ( LibraryA ) /*0x4c861c*/
  {
    Debug::Log(); /*0x4c8623*/
    v2 = (FARPROC *)&dword_8B3A88; /*0x4c8631*/
    for ( i = (LPCSTR *)off_820E64; *i; ++i ) /*0x4c8636*/
      *v2++ = GetProcAddress(LibraryA, *i); /*0x4c8645*/
  }
  else
  {
    Debug::Log(); /*0x4c8654*/
  }
  if ( dword_8B3A98 ) /*0x4c8663*/
    dword_8B3A98(4); /*0x4c8667*/
  v57 = 0; /*0x4c867f*/
  v54 = 0; /*0x4c8683*/
  if ( dword_8B3A90 && (v4 = GetCurrentProcess(), dword_8B3A90(v4, 0, 0)) ) /*0x4c8692*/
  {
    Debug::Log(); /*0x4c86a5*/
    v54 = 1; /*0x4c86b4*/
    if ( dword_8B3A98 ) /*0x4c86bc*/
      dword_8B3A98(6); /*0x4c86c0*/
    GetModuleFileNameA(0, Filename, 0x104u); /*0x4c86d1*/
    if ( !dword_8B3A94 /*0x4c86ff*/
      || (CurrentProcess = GetCurrentProcess(), (v57 = dword_8B3A94(CurrentProcess, 0, Filename, 0, 0, 0)) == 0) )
    {
      GetLastError(); /*0x4c8703*/
      Debug::Log(); /*0x4c8713*/
    }
  }
  else
  {
    GetLastError(); /*0x4c875e*/
    Debug::Log(); /*0x4c8766*/
  }
  v52 = -1; /*0x4c871f*/
  v56 = 0; /*0x4c8727*/
  v6 = v55[1]; /*0x4c8731*/
  if ( **(_DWORD **)v55 == -1073741819 ) /*0x4c873b*/
  {
    Debug::Log(); /*0x4c8742*/
    v7 = *(_DWORD *)(*(_DWORD *)v55 + 24); /*0x4c874f*/
    v52 = *(_DWORD *)(*(_DWORD *)v55 + 20); /*0x4c8752*/
    v56 = v7; /*0x4c8756*/
  }
  else
  {
    Debug::Log(); /*0x4c8776*/
  }
  v8 = -1073741819; /*0x4c877e*/
  v9 = 0; /*0x4c8783*/
  v10 = &dword_7E8838; /*0x4c878e*/
  while ( v8 != **(_DWORD **)v55 ) /*0x4c8795*/
  {
    v8 = v10[1]; /*0x4c8797*/
    ++v10; /*0x4c879a*/
    ++v9; /*0x4c879d*/
    if ( v8 == -1 ) /*0x4c87a1*/
      goto LABEL_24; /*0x4c87a1*/
  }
  Debug::Log(); /*0x4c87aa*/
LABEL_24:
  v11 = (&lpString2)[v9]; /*0x4c87b2*/
  v12 = lstrlenA(v11); /*0x4c87c2*/
  if ( lstrlenA(::Buffer) + v12 < 0xFFFF ) /*0x4c87d9*/
    lstrcatA(::Buffer, v11); /*0x4c87e1*/
  v13 = lstrlenA(::String2); /*0x4c87ea*/
  if ( lstrlenA(::Buffer) + v13 < 0xFFFF ) /*0x4c87fb*/
    lstrcatA(::Buffer, ::String2); /*0x4c8807*/
  if ( **(_DWORD **)v55 == -1073741819 ) /*0x4c881b*/
  {
    wsprintfA(String, "Access address:%08X ", v56); /*0x4c8830*/
    v14 = lstrlenA(::Buffer); /*0x4c883c*/
    if ( lstrlenA(String) + v14 < 0xFFFF ) /*0x4c884d*/
      lstrcatA(::Buffer, String); /*0x4c8859*/
    if ( v52 ) /*0x4c8865*/
    {
      v15 = lstrlenA(::String); /*0x4c886e*/
      if ( lstrlenA(::Buffer) + v15 < 0xFFFF ) /*0x4c887f*/
        lstrcatA(::Buffer, ::String); /*0x4c8886*/
    }
    else
    {
      v16 = lstrlenA(aWasReadFrom); /*0x4c888f*/
      if ( lstrlenA(::Buffer) + v16 < 0xFFFF ) /*0x4c88a0*/
        lstrcatA(::Buffer, aWasReadFrom); /*0x4c88ac*/
    }
  }
  memset(v62, 0, 0x18u); /*0x4c88c0*/
  v62[0] = 24; /*0x4c88c2*/
  v62[4] = 232; /*0x4c88cd*/
  v62[2] = 0; /*0x4c88d8*/
  v62[1] = *(_DWORD *)(*(_DWORD *)&v6 + 184); /*0x4c88e5*/
  if ( IsBadCodePtr(*(FARPROC *)(*(_DWORD *)&v6 + 184)) ) /*0x4c88f3*/
  {
    Debug::Log(); /*0x4c899d*/
  }
  else if ( dword_8B3A8C /*0x4c8925*/
         && (v46 = *(_DWORD *)(*(_DWORD *)&v6 + 184), v17 = GetCurrentProcess(), dword_8B3A8C(v17, v46, &v53, v62)) )
  {
    wsprintfA( /*0x4c894d*/
      String,
      "Exception occurred at %08X - %s + %08X\r\n",
      *(_DWORD *)(*(_DWORD *)&v6 + 184),
      (const char *)&v62[5],
      v53);
  }
  else
  {
    Debug::Log(); /*0x4c8959*/
    if ( dword_8B3A8C ) /*0x4c8968*/
    {
      GetLastError(); /*0x4c896c*/
      Debug::Log(); /*0x4c8978*/
    }
    wsprintfA(String, "Exception occurred at %08X\r\n", *(_DWORD *)(*(_DWORD *)&v6 + 184)); /*0x4c8991*/
  }
  v18 = lstrlenA(::Buffer); /*0x4c89b0*/
  if ( lstrlenA(String) + v18 < 0xFFFF ) /*0x4c89bd*/
    lstrcatA(::Buffer, String); /*0x4c89c9*/
  ModuleVersion = GetModuleVersion(); /*0x4c89cf*/
  wsprintfA(String, "\r\nVersion %s\r\n", ModuleVersion); /*0x4c89df*/
  v20 = lstrlenA(::Buffer); /*0x4c89ef*/
  if ( lstrlenA(String) + v20 < 0xFFFF ) /*0x4c89fc*/
    lstrcatA(::Buffer, String); /*0x4c8a08*/
  ModuleInternalVersion = GetModuleInternalVersion((ObjectClass *)&stru_A8EB00.?[252]); /*0x4c8a13*/
  wsprintfA(String, "Internal Version %s\r\n", ModuleInternalVersion); /*0x4c8a23*/
  v22 = lstrlenA(::Buffer); /*0x4c8a33*/
  if ( lstrlenA(String) + v22 < 0xFFFF ) /*0x4c8a40*/
    lstrcatA(::Buffer, String); /*0x4c8a4c*/
  Buffer[0] = 0; /*0x4c8a5e*/
  Time::FormatDate(Buffer); /*0x4c8a66*/
  v48 = String::CopyConstant(Destination); /*0x4c8a90*/
  v23 = String::FormatDword(v66); /*0x4c8a91*/
  wsprintfA(String, "Release Build: %s by %s - %s\r\n", v23, v48, Buffer);
  v24 = lstrlenA(::Buffer); /*0x4c8ab1*/
  if ( lstrlenA(String) + v24 < 0xFFFF ) /*0x4c8abe*/
    lstrcatA(::Buffer, String); /*0x4c8aca*/
  v58 = 5; /*0x4c8adc*/
  v51 = 0; /*0x4c8ae4*/
  GetVersionString(&v58, &v51, 0, 0); /*0x4c8ae9*/
  v25 = (char *)&off_821F08; /*0x4c8af4*/
  if ( !v51 ) /*0x4c8af9*/
    v25 = g_INI_Key_No; /*0x4c8afb*/
  v49 = v25; /*0x4c8b05*/
  Name = PlayerType::GetName(); /*0x4c8b06*/
  wsprintfA(String, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v49, Source);
  v27 = lstrlenA(::Buffer); /*0x4c8b26*/
  if ( lstrlenA(String) + v27 < 0xFFFF ) /*0x4c8b33*/
    lstrcatA(::Buffer, String); /*0x4c8b3f*/
  v28 = lstrlenA(aDetails); /*0x4c8b4c*/
  if ( lstrlenA(::Buffer) + v28 < 0xFFFF ) /*0x4c8b5d*/
    lstrcatA(::Buffer, aDetails); /*0x4c8b69*/
  Debug::Log(); /*0x4c8b74*/
  wsprintfA( /*0x4c8b98*/
    String,
    "Eip:%08X\tEsp:%08X\tEbp:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 184),
    *(_DWORD *)(*(_DWORD *)&v6 + 196),
    *(_DWORD *)(*(_DWORD *)&v6 + 180));
  v29 = lstrlenA(::Buffer); /*0x4c8ba8*/
  if ( lstrlenA(String) + v29 < 0xFFFF ) /*0x4c8bb5*/
    lstrcatA(::Buffer, String); /*0x4c8bc1*/
  wsprintfA( /*0x4c8be6*/
    String,
    "Eax:%08X\tEbx:%08X\tEcx:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 176),
    *(_DWORD *)(*(_DWORD *)&v6 + 164),
    *(_DWORD *)(*(_DWORD *)&v6 + 172));
  v30 = lstrlenA(::Buffer); /*0x4c8bf6*/
  if ( lstrlenA(String) + v30 < 0xFFFF ) /*0x4c8c03*/
    lstrcatA(::Buffer, String); /*0x4c8c0f*/
  wsprintfA( /*0x4c8c34*/
    String,
    "Edx:%08X\tEsi:%08X\tEdi:%08X\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 168),
    *(_DWORD *)(*(_DWORD *)&v6 + 160),
    *(_DWORD *)(*(_DWORD *)&v6 + 156));
  v31 = lstrlenA(::Buffer); /*0x4c8c44*/
  if ( lstrlenA(String) + v31 < 0xFFFF ) /*0x4c8c51*/
    lstrcatA(::Buffer, String); /*0x4c8c5d*/
  wsprintfA(String, "EFlags:%08X \r\n", *(_DWORD *)(*(_DWORD *)&v6 + 192)); /*0x4c8c74*/
  v32 = lstrlenA(::Buffer); /*0x4c8c80*/
  if ( lstrlenA(String) + v32 < 0xFFFF ) /*0x4c8c91*/
    lstrcatA(::Buffer, String); /*0x4c8c9d*/
  wsprintfA( /*0x4c8cd7*/
    String,
    "CS:%04x  SS:%04x  DS:%04x  ES:%04x  FS:%04x  GS:%04x\r\n",
    *(_DWORD *)(*(_DWORD *)&v6 + 188),
    *(_DWORD *)(*(_DWORD *)&v6 + 200),
    *(_DWORD *)(*(_DWORD *)&v6 + 152),
    *(_DWORD *)(*(_DWORD *)&v6 + 148),
    *(_DWORD *)(*(_DWORD *)&v6 + 144),
    *(_DWORD *)(*(_DWORD *)&v6 + 140));
  v33 = lstrlenA(::Buffer); /*0x4c8ce3*/
  if ( lstrlenA(String) + v33 < 0xFFFF ) /*0x4c8cf4*/
    lstrcatA(::Buffer, String); /*0x4c8d00*/
  Debug::Log(); /*0x4c8d0b*/
  wsprintfA(String, "\r\nBytes at CS:EIP (%08X)  : ", *(_DWORD *)(*(_DWORD *)&v6 + 184));
  v34 = *(unsigned __int8 **)(*(_DWORD *)&v6 + 184); /*0x4c8d23*/
  v52 = 32; /*0x4c8d2c*/
  do /*0x4c8d81*/
  {
    if ( IsBadReadPtr(v34, 1u) ) /*0x4c8d37*/
    {
      lstrcatA(String, asc_821DE0); /*0x4c8d4b*/
    }
    else
    {
      wsprintfA(String2, "%02X ", *v34); /*0x4c8d5f*/
      lstrcatA(String, String2); /*0x4c8d71*/
    }
    ++v34; /*0x4c8d77*/
    --v52; /*0x4c8d7d*/
  }
  while ( v52 ); /*0x4c8d81*/
  lstrcatA(String, asc_821DD0); /*0x4c8d8d*/
  v35 = lstrlenA(::Buffer); /*0x4c8d9e*/
  if ( lstrlenA(String) + v35 < 0xFFFF ) /*0x4c8dab*/
    lstrcatA(::Buffer, String); /*0x4c8db7*/
  Debug::Log(); /*0x4c8dc2*/
  v36 = lstrlenA(aStackDumpIndic); /*0x4c8dd1*/
  if ( lstrlenA(::Buffer) + v36 < 0xFFFF ) /*0x4c8de2*/
    lstrcatA(::Buffer, aStackDumpIndic); /*0x4c8dee*/
  v37 = *(FARPROC **)(*(_DWORD *)&v6 + 196); /*0x4c8df4*/
  v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8dfa*/
  v52 = 1024; /*0x4c8e00*/
  do
  {
    if ( IsBadReadPtr(v37, 4u) )
    {
      wsprintfA(String, "%08X: ", v37);
      v38(String, asc_821D78); /*0x4c8e2f*/
    }
    else
    {
      v39 = !IsBadCodePtr(*v37); /*0x4c8e3d*/
      v50 = *v37; /*0x4c8e41*/
      if ( v39 )
      {
        wsprintfA(String, "%08X: %08X", v37, v50);
        if ( v54 ) /*0x4c8e78*/
        {
          v62[0] = 256; /*0x4c8e83*/
          v62[4] = 128; /*0x4c8e8e*/
          v62[2] = 0; /*0x4c8e99*/
          v62[1] = *v37; /*0x4c8ea8*/
          if ( dword_8B3A8C ) /*0x4c8eaf*/
          {
            v47 = *v37; /*0x4c8ec0*/
            v40 = GetCurrentProcess(); /*0x4c8ec1*/
            if ( dword_8B3A8C(v40, v47, &v53, v62) ) /*0x4c8ec8*/
            {
              wsprintfA(Filename, " - %s + %08X", (const char *)&v62[5], v53); /*0x4c8eec*/
              v38(String, Filename); /*0x4c8efe*/
            }
          }
        }
        else
        {
          v38(String, asc_821D40); /*0x4c8f0a*/
        }
        v38(String, ::String2); /*0x4c8f16*/
      }
      else
      {
        wsprintfA(String, "%08X: %08X ", v37, v50);
        v38(String, aDataPtr); /*0x4c8e5e*/
      }
    }
    v41 = lstrlenA(::Buffer); /*0x4c8f23*/
    if ( lstrlenA(String) + v41 >= 0xFFFF ) /*0x4c8f30*/
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f46*/
    }
    else
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f32*/
      lstrcatA(::Buffer, String); /*0x4c8f42*/
    }
    ++v37; /*0x4c8f50*/
    --v52; /*0x4c8f54*/
  }
  while ( v52 );
  if ( v54 ) /*0x4c8f64*/
  {
    if ( dword_8B3A88 ) /*0x4c8f6d*/
    {
      v42 = GetCurrentProcess(); /*0x4c8f6f*/
      dword_8B3A88(v42); /*0x4c8f76*/
    }
    if ( v57 && dword_8B3A9C ) /*0x4c8f8b*/
    {
      v43 = GetCurrentProcess(); /*0x4c8f8f*/
      dword_8B3A9C(v43, 0); /*0x4c8f96*/
    }
  }
  if ( hLibModule ) /*0x4c8fa2*/
    FreeLibrary(hLibModule); /*0x4c8fa5*/
  v44 = lstrlenA(asc_821DD0); /*0x4c8fb2*/
  result = lstrlenA(::Buffer); /*0x4c8fb9*/
  if ( result + v44 < 0xFFFF ) /*0x4c8fc3*/
    return (int)((LPSTR (__stdcall *)(LPSTR, LPCSTR))v38)(::Buffer, asc_821DD0); /*0x4c8fcf*/
  return result; /*0x4c8fd1*/
}



// ==== 0x004C9150  XSurface::g_var_04f235  this=XSurface  sig=csp ====
int __thiscall XSurface::g_var_04f235(Class_7E8C94 *this)
{
  return 0; /*0x4c9152*/
}



// ==== 0x004C9160  sub_4C9160  this=-  sig=ida-proto ====
char sub_4C9160()
{
  char v0; // bl
  _DWORD v2[22]; // [esp+4h] [ebp-6Ch] BYREF
  _BYTE v3[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v4; // [esp+68h] [ebp-8h]

  CCFileClass::Construct(v2, aExpandDat); /*0x4c916d*/
  v0 = CCFileClass::Open(v2, 0); /*0x4c9181*/
  v2[0] = &CCFileClass::`vftable'; /*0x4c9183*/
  v4 = 0; /*0x4c918b*/
  Vector::Clear((int)v3); /*0x4c9193*/
  v2[0] = &off_7E1668; /*0x4c919c*/
  BufferIOFileClass::Dtor(v2); /*0x4c91a4*/
  return v0; /*0x4c91ab*/
}



// ==== 0x004C91B0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_5  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_5(std::codecvt_base *this)
{
  return 1; /*0x4c91b2*/
}



// ==== 0x004C91C0  FrameSnapshot::Init  this=FrameSnapshot  sig=csp ====
_WORD *__thiscall FrameSnapshot::Init(FrameSnapshot *this)
{
  int v2; // edx

  *(_WORD *)this->__pad_0 = 0; /*0x4c91c4*/
  LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91c7*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c91cb*/
  this->q004 = 0; /*0x4c91d1*/
  *((_DWORD *)this + 2) = v2; /*0x4c91d4*/
  *((_WORD *)this + 10) = 0; /*0x4c91d7*/
  return this->__pad_0; /*0x4c91db*/
}



// ==== 0x004C91E0  FrameSnapshot::InitMax  this=FrameSnapshot  sig=csp ====
_WORD *__thiscall FrameSnapshot::InitMax(FrameSnapshot *this, int a2)
{
  _WORD *result; // eax
  int v3; // edx
  char v4; // cl
  __int16 v5; // dx

  result = this; /*0x4c91e0*/
  *(_WORD *)this->__pad_0 = 0; /*0x4c91e4*/
  LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91e7*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c91eb*/
  this->q004 = 0; /*0x4c91f1*/
  *((_DWORD *)this + 2) = v3; /*0x4c91f4*/
  *((_WORD *)this + 10) = 0; /*0x4c91f7*/
  v4 = a2; /*0x4c91fb*/
  if ( a2 >= 127 ) /*0x4c9202*/
    v4 = 127; /*0x4c9204*/
  LOBYTE(v5) = 0; /*0x4c9209*/
  HIBYTE(v5) = v4; /*0x4c920b*/
  result[10] = v5; /*0x4c920d*/
  return result; /*0x4c9211*/
}



// ==== 0x004C9220  FacingClass::Update  this=FacingClass  sig=csp ====
int __thiscall FacingClass::Update(char *this, _WORD *a2)
{
  int result; // eax
  __int16 v3; // bp
  int v4; // edi
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  __int16 v10; // di
  int v11; // eax
  int v12; // edx
  char *v13; // ecx
  int v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+8h] [ebp-8h]

  LOWORD(result) = *(_WORD *)this; /*0x4c9224*/
  if ( *(_WORD *)this == *a2 ) /*0x4c922d*/
  {
    LOBYTE(result) = 0; /*0x4c92f7*/
    return result; /*0x4c92f7*/
  }
  v3 = *((_WORD *)this + 10); /*0x4c9235*/
  if ( v3 <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  v4 = this->RotationTimer; /*0x4c9240*/
  v5 = this->StartFacing; /*0x4c9243*/
  if ( v4 != -1 ) /*0x4c924f*/
  {
    if ( (int)dword_A8ED84 - v4 >= v5 ) /*0x4c9257*/
    {
LABEL_15:
      v11 = *(_DWORD *)this; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    v5 -= (int)dword_A8ED84 - v4; /*0x4c9259*/
  }
  if ( !v5 ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (__int16)(result - this->RotationTimer); /*0x4c9266*/
  v7 = abs16(result - this->RotationTimer) / v3; /*0x4c9271*/
  v14 = *(_DWORD *)this; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->RotationTimer; /*0x4c927e*/
    v9 = this->StartFacing; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( (int)dword_A8ED84 - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - ((_WORD)dword_A8ED84 - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v14) = v14 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v14; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = v11; /*0x4c92b1*/
  result = (int)a2; /*0x4c92b4*/
  v12 = *(_DWORD *)a2; /*0x4c92bb*/
  *(_DWORD *)this = *(_DWORD *)a2; /*0x4c92bd*/
  if ( v3 > 0 ) /*0x4c92bf*/
  {
    result = abs16(v12 - this->RotationTimer) / v3; /*0x4c92da*/
    v13 = this + 8; /*0x4c92e0*/
    *(_DWORD *)v13 = dword_A8ED84; /*0x4c92e3*/
    *((_DWORD *)v13 + 1) = v15; /*0x4c92e5*/
    *((_DWORD *)v13 + 2) = result; /*0x4c92e8*/
  }
  LOBYTE(result) = 1; /*0x4c92ee*/
  return result; /*0x4c92f1*/
}



// ==== 0x004C9300  FacingClass::Set_SyncLog  this=FrameSnapshot  sig=csp ====
int __thiscall FacingClass::Set_SyncLog(char *this, _DWORD *a2)
{
  char *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  __int16 v7; // cx
  int v8; // ecx
  char *v9; // esi
  int result; // eax
  int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( *((__int16 *)this + 10) > 0 ) /*0x4c930c*/
  {
    v3 = this + 8; /*0x4c930e*/
    if ( Locomotor::GetSpeed((int *)this + 2) ) /*0x4c9313*/
    {
      v4 = abs16(*(_WORD *)this - *((_WORD *)this + 2)) / *((__int16 *)this + 10); /*0x4c9333*/
      v11 = *(_DWORD *)this; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      v5 = this->q004; /*0x4c9340*/
      v6 = *(_DWORD *)v3; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( (int)dword_A8ED84 - v6 >= v5 ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(v5) = v5 - ((_WORD)dword_A8ED84 - v6); /*0x4c9356*/
      }
      v7 = v5; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(*(_WORD *)this - *((_WORD *)this + 2)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = *(_DWORD *)this; /*0x4c9375*/
LABEL_12:
  if ( (_WORD)v8 == *(_WORD *)a2 ) /*0x4c937e*/
  {
    v9 = this + 8; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    *(_DWORD *)v9 = dword_A8ED84; /*0x4c93b8*/
    *((_DWORD *)v9 + 1) = v12; /*0x4c93ba*/
  }
  else
  {
    *(_DWORD *)this = *a2; /*0x4c9382*/
    this->q004 = *a2; /*0x4c9386*/
    v9 = this + 8; /*0x4c9390*/
    *(_DWORD *)v9 = dword_A8ED84; /*0x4c9393*/
    result = v12; /*0x4c9395*/
    *((_DWORD *)v9 + 1) = v12; /*0x4c9399*/
    LOBYTE(result) = 1; /*0x4c939c*/
  }
  *((_DWORD *)v9 + 2) = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}



// ==== 0x004C93D0  ProgressTimer::GetValue  this=ProgressTimer  sig=csp ====
_DWORD *__thiscall ProgressTimer::GetValue(ProgressTimer *this, _DWORD *a2)
{
  __int16 ProgressTimer_field_0x14; // bx
  void *ProgressTimer_field_0x8; // esi
  char *ProgressTimer_field_0x10; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  void *v8; // edx
  void *v9; // ecx
  __int16 v10; // cx
  int v12; // [esp+Ch] [ebp-4h]

  ProgressTimer_field_0x14 = (__int16)this->ProgressTimer_field_0x14; /*0x4c93d2*/
  if ( ProgressTimer_field_0x14 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  ProgressTimer_field_0x8 = this->ProgressTimer_field_0x8; /*0x4c93dd*/
  ProgressTimer_field_0x10 = (char *)this->ProgressTimer_field_0x10; /*0x4c93e0*/
  if ( ProgressTimer_field_0x8 != (void *)-1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ProgressTimer_field_0x8 >= (int)ProgressTimer_field_0x10 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    ProgressTimer_field_0x10 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ProgressTimer_field_0x8; /*0x4c93f6*/
  }
  if ( ProgressTimer_field_0x10 ) /*0x4c93fa*/
  {
    v5 = (__int16)(*(_WORD *)this->__pad_0 - *(_WORD *)&this->__pad_0[4]); /*0x4c9406*/
    v6 = (__int16)(*(_WORD *)this->__pad_0 - *(_WORD *)&this->__pad_0[4]); /*0x4c940b*/
    v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / ProgressTimer_field_0x14; /*0x4c9411*/
    v12 = *(_DWORD *)this->__pad_0; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      *a2 = v12; /*0x4c9445*/
      return a2; /*0x4c9453*/
    }
    v8 = this->ProgressTimer_field_0x10; /*0x4c941e*/
    v9 = this->ProgressTimer_field_0x8; /*0x4c9421*/
    if ( v9 != (void *)-1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v9 >= (int)v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = (_WORD)v8 - (*(_WORD *)&stru_A8EB00.?[416] - (_WORD)v9); /*0x4c9431*/
    }
    v10 = (__int16)v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = v12 - v10 * (v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  *a2 = *(_DWORD *)this->__pad_0; /*0x4c945a*/
  return a2; /*0x4c944d*/
}



// ==== 0x004C9470  TechnoClass::GetWeaponType  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWeaponType(TechnoClass *this, _DWORD *a2)
{
  *a2 = this->RadioClass; /*0x4c9476*/
  return a2; /*0x4c9478*/
}



// ==== 0x004C9480  TimerClass::Active  this=FacingStruct  sig=csp ====
int __thiscall TimerClass::Active(int this)
{
  int v1; // edx
  int v2; // eax

  if ( *(__int16 *)(this + 20) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  v1 = *(_DWORD *)(this + 8); /*0x4c9487*/
  v2 = *(_DWORD *)(this + 16); /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)dword_A8ED84 - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)dword_A8ED84 - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}



// ==== 0x004C94B0  JumpjetLocomotionClass::StubReturnZero_5  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall JumpjetLocomotionClass::StubReturnZero_5(JumpjetLocomotionClass *this)
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(this->?) <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  Owner = this->?; /*0x4c94b8*/
  v2 = *(_DWORD *)&this->?; /*0x4c94bb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c94c1*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)Owner >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)Owner; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (__int16)(LOWORD(this->LocomotionClass[0]) - LOWORD(this->LocomotionClass[1])) > 0; /*0x4c94e7*/
  return 0; /*0x4c94d8*/
}



// ==== 0x004C94F0  JumpjetLocomotionClass::StubReturnZero_6  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall JumpjetLocomotionClass::StubReturnZero_6(JumpjetLocomotionClass *this)
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(this->?) <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  Owner = this->?; /*0x4c94f8*/
  v2 = *(_DWORD *)&this->?; /*0x4c94fb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c9501*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)Owner >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)Owner; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (__int16)(LOWORD(this->LocomotionClass[0]) - LOWORD(this->LocomotionClass[1])) < 0; /*0x4c9525*/
  return 0; /*0x4c9518*/
}



// ==== 0x004C9530  MovementClass::CompareAbsCoords  this=MovementClass  sig=csp ====
_DWORD *__thiscall MovementClass::CompareAbsCoords(MovementClass *this, _DWORD *a2)
{
  __int16 v2; // bp
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // si
  int v14; // [esp+Ch] [ebp-4h]

  v2 = *((_WORD *)this + 10); /*0x4c9533*/
  if ( v2 <= 0 ) /*0x4c953b*/
    goto LABEL_14; /*0x4c953b*/
  v3 = *((_DWORD *)this + 2); /*0x4c953d*/
  v4 = this->q004; /*0x4c9540*/
  if ( v3 != -1 ) /*0x4c954c*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x4c9554*/
    {
LABEL_14:
      v7 = *(_DWORD *)this->__pad_0; /*0x4c95b1*/
      v11 = *(_DWORD *)this->__pad_0; /*0x4c95b3*/
      goto LABEL_15; /*0x4c95b3*/
    }
    v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x4c9556*/
  }
  if ( !v4 ) /*0x4c955a*/
    goto LABEL_14; /*0x4c955a*/
  v5 = (__int16)(*(_WORD *)this->__pad_0 - LOWORD(this->MovementClass_field_0x04)); /*0x4c9567*/
  v6 = abs16(*(_WORD *)this->__pad_0 - LOWORD(this->MovementClass_field_0x04)) / v2; /*0x4c9572*/
  v7 = *(_DWORD *)this->__pad_0; /*0x4c9574*/
  v14 = *(_DWORD *)this->__pad_0; /*0x4c9576*/
  if ( (__int16)v6 > 0 ) /*0x4c957d*/
  {
    v8 = this->q004; /*0x4c957f*/
    v9 = *((_DWORD *)this + 2); /*0x4c9582*/
    if ( v9 != -1 ) /*0x4c9588*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v8 ) /*0x4c9590*/
      {
        v10 = 0; /*0x4c95ad*/
        goto LABEL_11; /*0x4c95af*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&stru_A8EB00.?[416] - v9); /*0x4c9592*/
    }
    v10 = v8; /*0x4c9594*/
LABEL_11:
    LOWORD(v14) = v14 - v10 * (v5 / (__int16)v6); /*0x4c9596*/
  }
  LOWORD(v11) = v14; /*0x4c95a6*/
LABEL_15:
  v12 = v7 - v11; /*0x4c95b5*/
  LOWORD(v14) = v12; /*0x4c95bb*/
  *a2 = v14; /*0x4c95c6*/
  return a2; /*0x4c95c4*/
}



// ==== 0x004C95D0  ObjectClass::method_4C95D0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C95D0(ObjectClass *this, _DWORD *a2, _WORD *a3)
{
  __int16 abstractFlags; // bx
  void *vtable2; // esi
  int uniqueId; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // edx
  void *v10; // ecx
  __int16 v11; // cx
  void *vtable0; // ecx
  void *v14; // [esp+Ch] [ebp-4h]

  abstractFlags = this->?; /*0x4c95d2*/
  if ( abstractFlags <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  vtable2 = this->?; /*0x4c95dd*/
  uniqueId = this->?; /*0x4c95e0*/
  if ( vtable2 != (void *)-1 ) /*0x4c95ec*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable2 >= uniqueId ) /*0x4c95f4*/
    {
LABEL_14:
      vtable0 = this->AbstractClass; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    uniqueId -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable2; /*0x4c95f6*/
  }
  if ( !uniqueId ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  v6 = (__int16)(LOWORD(this->AbstractClass) - LOWORD(this->?)); /*0x4c9606*/
  v7 = (__int16)(LOWORD(this->AbstractClass) - LOWORD(this->?)); /*0x4c960b*/
  v8 = (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) / abstractFlags; /*0x4c9611*/
  v14 = this->AbstractClass; /*0x4c9615*/
  if ( (__int16)v8 > 0 ) /*0x4c961c*/
  {
    v9 = this->?; /*0x4c961e*/
    v10 = this->?; /*0x4c9621*/
    if ( v10 != (void *)-1 ) /*0x4c9627*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      LOWORD(v9) = v9 - (*(_WORD *)&stru_A8EB00.?[416] - (_WORD)v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
LABEL_11:
    LOWORD(v14) = (_WORD)v14 - v11 * (v6 / (__int16)v8); /*0x4c9635*/
  }
  LOWORD(vtable0) = (_WORD)v14; /*0x4c9645*/
LABEL_15:
  LOWORD(a3) = *a3 - (_WORD)vtable0; /*0x4c9651*/
  *a2 = a3; /*0x4c966b*/
  return a2; /*0x4c9655*/
}



// ==== 0x004C9680  BuildingTypeClass::GetPowerOutput  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetPowerOutput(BuildingTypeClass *this, int a2)
{
  int result; // eax
  __int16 v3; // dx

  result = a2; /*0x4c9680*/
  if ( a2 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  LOBYTE(v3) = 0; /*0x4c968e*/
  HIBYTE(v3) = result; /*0x4c9690*/
  LOWORD(this->?) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/
}



// ==== 0x004C96A0  sub_4C96A0  this=-  sig=ida-proto ====
void sub_4C96A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c96ac*/
  dbl_8B3AD0 = Math::Sqrt(v0 + v0); /*0x4c96be*/
}



// ==== 0x004C96D0  sub_4C96D0  this=-  sig=ida-proto ====
void sub_4C96D0()
{
  dbl_8B3B20 = dbl_8B3AD0 / 60.0; /*0x4c96dc*/
}



// ==== 0x004C96F0  sub_4C96F0  this=-  sig=ida-proto ====
void sub_4C96F0()
{
  dbl_8B3B08 = 1.0 / dbl_8B3B20; /*0x4c96fc*/
}



// ==== 0x004C9710  sub_4C9710  this=-  sig=ida-proto ====
void sub_4C9710()
{
  dbl_8B3B00 = 0.0174532925199433 * 45.0; /*0x4c971c*/
}



// ==== 0x004C9730  sub_4C9730  this=-  sig=ida-proto ====
void sub_4C9730()
{
  dbl_8B3AD8 = 0.0174532925199433 * 60.0; /*0x4c973c*/
}



// ==== 0x004C9750  sub_4C9750  this=-  sig=ida-proto ====
void sub_4C9750()
{
  dbl_8B3AB0 = 0.0174532925199433 * 90.0; /*0x4c975c*/
}



// ==== 0x004C9770  sub_4C9770  this=-  sig=ida-proto ====
__int64 sub_4C9770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3AB0 - dbl_8B3AD8); /*0x4c9782*/
  result = Math::RoundToInt(v0 * dbl_8B3AD0 * 0.5); /*0x4c9796*/
  dword_8B3B28 = result; /*0x4c979b*/
  return result; /*0x4c97a0*/
}



// ==== 0x004C97B0  sub_4C97B0  this=-  sig=ida-proto ====
void sub_4C97B0()
{
  dbl_8B3AE0 = Math::ArcTan((double)dword_8B3B28 * 0.00390625); /*0x4c97c7*/
}



// ==== 0x004C97E0  sub_4C97E0  this=-  sig=ida-proto ====
void sub_4C97E0()
{
  dbl_8B3AF8 = Math::ArcTan((double)(2 * dword_8B3B28) / dbl_8B3AD0); /*0x4c9802*/
}



// ==== 0x004C9810  sub_4C9810  this=-  sig=ida-proto ====
__int64 sub_4C9810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3B28) + 0.5); /*0x4c982b*/
  dword_8B3B1C = result; /*0x4c9830*/
  return result; /*0x4c9836*/
}



// ==== 0x004C9840  sub_4C9840  this=-  sig=ida-proto ====
int sub_4C9840()
{
  word_8B3AC8 = 0; /*0x4c9842*/
  word_8B3ACA = 0; /*0x4c9848*/
  return 0; /*0x4c984e*/
}



// ==== 0x004C9850  sub_4C9850  this=-  sig=ida-proto ====
int sub_4C9850()
{
  dword_8B3AE8 = 0; /*0x4c9852*/
  dword_8B3AEC = 0; /*0x4c9857*/
  dword_8B3AF0 = 0; /*0x4c985c*/
  return 0; /*0x4c9861*/
}



// ==== 0x004C9870  sub_4C9870  this=-  sig=ida-proto ====
int sub_4C9870()
{
  dword_8B3B18 = 0; /*0x4c9875*/
  dword_8B3B10 = 128; /*0x4c987f*/
  dword_8B3B14 = 128; /*0x4c9884*/
  return 128; /*0x4c9889*/
}



// ==== 0x004C9890  sub_4C9890  this=-  sig=ida-proto ====
int sub_4C9890()
{
  dword_8B3AB8 = 0; /*0x4c9892*/
  dword_8B3ABC = 0; /*0x4c9897*/
  dword_8B3AC0 = 0; /*0x4c989c*/
  dword_8B3AC4 = 0; /*0x4c98a1*/
  return 0; /*0x4c98a6*/
}



// ==== 0x004C98B0  TeamTypeClass::Construct  this=FactoryClass  sig=csp ====
int __thiscall TeamTypeClass::Construct(TeamTypeClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->__pad_4C[0] = 1; /*0x4c98e0*/
  this->__pad_4C[1] = 0; /*0x4c98e3*/
  this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
  *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
  *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
  this->? = &FactoryClass::`vftable'; /*0x4c9920*/
  this->? = &FactoryClass::`vftable'; /*0x4c9926*/
  this->? = &FactoryClass::`vftable'; /*0x4c992d*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
  if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
    || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
    && *(int *)&stru_A83D50.__pad_C8[44] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
         &stru_A83D50.__pad_C8[24],
         *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
         0) )
  {
    v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
  }
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
  }
  return (int)this; /*0x4c99fd*/
}



// ==== 0x004C9B20  FactoryClass::UpdateProduction  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::UpdateProduction(FactoryClass *this)
{
  int Speed; // eax
  int *v3; // edi
  int v4; // eax
  int v5; // eax
  int balance; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  LOBYTE(Speed) = this->isSuspended; /*0x4c9b28*/
  if ( !(_BYTE)Speed ) /*0x4c9b2d*/
  {
    Speed = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( this->production[0] == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !this->specialItem ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( this->specialItem == -1 || this->production[0] != 54 ) /*0x4c9b5d*/
    {
      v3 = &this->production[2]; /*0x4c9b63*/
      Speed = Locomotor::GetSpeed((Locomotor *)&this->production[2]); /*0x4c9b68*/
      if ( Speed || (Speed = this->queuedCapacity) == 0 ) /*0x4c9b76*/
      {
        LOBYTE(this->production[1]) = 0; /*0x4c9bba*/
      }
      else
      {
        this->production[0] += (int)this->object; /*0x4c9b82*/
        LOBYTE(this->production[1]) = 1; /*0x4c9b89*/
        *v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9b92*/
        this->queuedObjects[0] = v11; /*0x4c9b94*/
        this->queuedCount = Speed; /*0x4c9b97*/
        v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b9a*/
        this->__pad_42[27] = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          v5 = this->production[0]; /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            balance = this->balance; /*0x4c9bc5*/
          else
            balance = this->balance / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          balance = 0; /*0x4c9bca*/
        }
        if ( balance >= this->balance ) /*0x4c9bd1*/
          balance = this->balance; /*0x4c9bd3*/
        if ( balance <= (*(int (__stdcall **)(int *))(this->owner->arrayIndex + 24))(&this->owner->arrayIndex) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain((int *)this->owner, balance); /*0x4c9bf5*/
          v8 = this->balance; /*0x4c9bfa*/
          this->__pad_42[26] = 0; /*0x4c9bfd*/
          Speed = v8 - balance; /*0x4c9c01*/
          this->balance = Speed; /*0x4c9c03*/
        }
        else
        {
          v7 = this->production[0]; /*0x4c9be5*/
          this->__pad_42[26] = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          this->production[0] = Speed; /*0x4c9bec*/
        }
        if ( this->production[0] == 54 ) /*0x4c9c0a*/
        {
          this->isSuspended = 1; /*0x4c9c0c*/
          v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9c0f*/
          this->queuedCapacity = 0; /*0x4c9c19*/
          this->production[2] = v9; /*0x4c9c1c*/
          this->queuedObjects[0] = v11; /*0x4c9c22*/
          this->queuedCount = 0; /*0x4c9c25*/
          LOBYTE(Speed) = HouseClass::ProcessPowerDrain((int *)this->owner, this->balance); /*0x4c9c2f*/
          this->balance = 0; /*0x4c9c34*/
        }
      }
    }
  }
  return Speed; /*0x4c9bbe*/
}



// ==== 0x004C9C50  SidebarClass::draw  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::draw(SidebarClass *this)
{
  return (char)this->SidebarClass_field_0x5C; /*0x4c9c53*/
}



// ==== 0x004C9C60  FactoryClass::HasProgressChanged  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::HasProgressChanged(FactoryClass *this)
{
  char result; // al

  result = this->__pad_42[27]; /*0x4c9c60*/
  this->__pad_42[27] = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/
}



// ==== 0x004C9C70  FactoryClass::DemandProduction  this=FactoryClass  sig=csp ====
bool __thiscall FactoryClass::DemandProduction(int this, int a2, #375 *a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-8h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    BuildingClass::AbandonProduction(this); /*0x4c9c89*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!*(_DWORD *)(this + 56) || *(_BYTE *)(this + 112))
    && *(int *)(this + 80) <= 0
    && (!*(_DWORD *)(this + 88) || !*(_BYTE *)(this + 112))
    || a4 )
  {
    *(_BYTE *)(this + 93) = 1; /*0x4c9d6e*/
    *(_BYTE *)(this + 112) = 1; /*0x4c9d72*/
    *(_DWORD *)(this + 44) = dword_A8ED84; /*0x4c9d85*/
    *(_DWORD *)(this + 56) = 0; /*0x4c9d8b*/
    *(_DWORD *)(this + 48) = v17; /*0x4c9d8e*/
    *(_DWORD *)(this + 52) = 0; /*0x4c9d92*/
    *(_DWORD *)(this + 36) = 0; /*0x4c9d95*/
    *(_DWORD *)(this + 88) = (*(int (__thiscall **)(int, #375 *))(*(_DWORD *)a2 + 140))(a2, a3); /*0x4c9da4*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      v12 = *(_DWORD *)(this + 88); /*0x4c9db1*/
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
          *(_BYTE *)(*(_DWORD *)(this + 88) + 1738) = 1; /*0x4c9dc5*/
      }
    }
    v13 = *(_DWORD *)(this + 88); /*0x4c9dcc*/
    if ( v13 ) /*0x4c9dd1*/
    {
      v14 = *(_DWORD *)(v13 + 540); /*0x4c9dd3*/
      *(_DWORD *)(this + 108) = v14; /*0x4c9ddb*/
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 132))(a2, v14); /*0x4c9de1*/
      v16 = *(_DWORD *)(this + 88); /*0x4c9de7*/
      *(_DWORD *)(this + 96) = v15; /*0x4c9dea*/
      *(_DWORD *)(v16 + 768) = v15; /*0x4c9ded*/
    }
    return *(_DWORD *)(this + 88) != 0; /*0x4c9dfc*/
  }
  else if ( *(_DWORD *)(this + 80) >= dword_8871E0->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(*(_DWORD **)(this + 108), a2) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    v5 = *(_DWORD *)(this + 72); /*0x4c9cf3*/
    v6 = *(_DWORD *)(this + 80); /*0x4c9cf6*/
    v7 = this + 64; /*0x4c9cf9*/
    if ( v6 < v5 /*0x4c9d1b*/
      || (*(_BYTE *)(v7 + 13) || !v5)
      && (v8 = *(_DWORD *)(v7 + 20), v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, v5 + v8, 0) )
    {
      v9 = *(_DWORD *)(v7 + 16); /*0x4c9d22*/
      v10 = *(_DWORD *)(v7 + 4); /*0x4c9d25*/
      *(_DWORD *)(v7 + 16) = v9 + 1; /*0x4c9d2b*/
      *(_DWORD *)(v10 + 4 * v9) = a2; /*0x4c9d2e*/
    }
    return 1; /*0x4c9d32*/
  }
}



// ==== 0x004C9E10  FactoryClass::SetObject  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::SetObject(FactoryClass *this, int a2)
{
  HouseClass *v3; // eax
  int v5; // [esp+8h] [ebp-8h]

  BuildingClass::AbandonProduction((int)this); /*0x4c9e16*/
  *(_DWORD *)&this->__pad_42[22] = a2; /*0x4c9e21*/
  v3 = *(HouseClass **)(a2 + 540); /*0x4c9e27*/
  this->balance = 0; /*0x4c9e2d*/
  this->owner = v3; /*0x4c9e30*/
  this->production[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9e38*/
  this->queuedCapacity = 0; /*0x4c9e3e*/
  this->queuedObjects[0] = v5; /*0x4c9e41*/
  this->queuedCount = 0; /*0x4c9e46*/
  this->production[0] = 54; /*0x4c9e49*/
  this->__pad_42[27] = 1; /*0x4c9e50*/
  this->isSuspended = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/
}



// ==== 0x004C9E60  FactoryClass::StartProduction  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::StartProduction(int *this, char a2)
{
  wchar_t *v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]

  if ( this->isSuspended ) /*0x4c9e60*/
  {
    LOBYTE(result) = 0; /*0x4c9e98*/
  }
  else
  {
    this->isManual = a2; /*0x4c9e71*/
    this->isSuspended = 1; /*0x4c9e74*/
    v2 = dword_A8ED84; /*0x4c9e78*/
    this->queuedCapacity = 0; /*0x4c9e80*/
    this->q02C = (int)v2; /*0x4c9e83*/
    result = v4; /*0x4c9e85*/
    this->vtable4 = v4; /*0x4c9e89*/
    LOBYTE(result) = 1; /*0x4c9e8c*/
    this->queuedCount = 0; /*0x4c9e8e*/
  }
  return result; /*0x4c9e92*/
}



// ==== 0x004C9EA0  ProductionClass::StartTimer  this=FactoryClass  sig=csp ====
int __thiscall ProductionClass::StartTimer(int this, char a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // edx
  wchar_t *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // [esp+Ch] [ebp-8h]

  v4 = *(_DWORD **)(this + 88); /*0x4c9ea7*/
  if ( !v4 ) /*0x4c9eac*/
  {
    result = *(_DWORD *)(this + 104); /*0x4c9eae*/
    if ( !result ) /*0x4c9eb3*/
      goto LABEL_24; /*0x4c9eb3*/
  }
  if ( !*(_BYTE *)(this + 112) /*0x4c9edf*/
    || v4 && *(_DWORD *)(this + 36) == 54
    || *(_DWORD *)(this + 104) != -1 && *(_DWORD *)(this + 36) == 54 )
  {
    goto LABEL_24; /*0x4c9edf*/
  }
  v5 = 0; /*0x4c9ee5*/
  *(_BYTE *)(this + 112) = 0; /*0x4c9ee7*/
  if ( v4 ) /*0x4c9eed*/
    v5 = HouseClass::CalcProductionSpeed(v4); /*0x4c9ef4*/
  v6 = v5 / 54; /*0x4c9f05*/
  if ( v6 >= 1 ) /*0x4c9f0a*/
  {
    if ( v6 > 255 ) /*0x4c9f19*/
      v6 = 255; /*0x4c9f1b*/
  }
  else
  {
    v6 = 1; /*0x4c9f0c*/
  }
  v7 = dword_A8ED84; /*0x4c9f20*/
  *(_DWORD *)(this + 56) = v6; /*0x4c9f28*/
  *(_DWORD *)(this + 44) = v7; /*0x4c9f2b*/
  *(_DWORD *)(this + 48) = v10; /*0x4c9f31*/
  *(_DWORD *)(this + 52) = v6; /*0x4c9f34*/
  if ( *(_DWORD *)(this + 88) )
  {
    v8 = *(_DWORD *)(this + 36); /*0x4c9f3e*/
    v9 = v8 == 54 ? *(_DWORD *)(this + 96) : *(_DWORD *)(this + 96) / (54 - v8);
  }
  else
  {
    v9 = 0; /*0x4c9f56*/
  }
  result = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 108) + 36) + 24))(*(_DWORD *)(this + 108) + 36); /*0x4c9f61*/
  if ( result >= v9 ) /*0x4c9f66*/
  {
    *(_BYTE *)(this + 113) = 1; /*0x4c9f6c*/
    if ( a2 ) /*0x4c9f72*/
    {
      if ( !*(_BYTE *)(this + 112) ) /*0x4c9f74*/
      {
        *(_BYTE *)(this + 113) = 1; /*0x4c9f7b*/
        *(_BYTE *)(this + 112) = 1; /*0x4c9f7f*/
        *(_DWORD *)(this + 44) = dword_A8ED84; /*0x4c9f8d*/
        result = v10; /*0x4c9f8f*/
        *(_DWORD *)(this + 56) = 0; /*0x4c9f93*/
        *(_DWORD *)(this + 48) = v10; /*0x4c9f96*/
        *(_DWORD *)(this + 52) = 0; /*0x4c9f99*/
      }
    }
    LOBYTE(result) = 1; /*0x4c9f9d*/
  }
  else
  {
LABEL_24:
    LOBYTE(result) = 0; /*0x4c9fa7*/
  }
  return result; /*0x4c9f9c*/
}



// ==== 0x004C9FB0  FactoryClass::GetBuildTimeFrames  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::GetBuildTimeFrames(FactoryClass *this)
{
  HouseClass *v1; // ecx
  int v2; // edx
  int v3; // edx
  int result; // eax

  v1 = *(HouseClass **)&this->__pad_42[22]; /*0x4c9fb0*/
  v2 = 0; /*0x4c9fb3*/
  if ( v1 ) /*0x4c9fb7*/
    v2 = HouseClass::CalcProductionSpeed(v1); /*0x4c9fbe*/
  v3 = v2 / 54; /*0x4c9fcf*/
  result = v3; /*0x4c9fd1*/
  if ( v3 < 1 ) /*0x4c9fd6*/
    return 1; /*0x4c9fd8*/
  if ( v3 > 255 ) /*0x4c9fe3*/
    return 255; /*0x4c9fe5*/
  return result; /*0x4c9fdd*/
}



// ==== 0x004C9FF0  BuildingClass::AbandonProduction  this=AbstractClass  sig=csp ====
char __thiscall BuildingClass_AbandonProduction(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wchar_t *v7; // eax
  #375 *v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 88); /*0x4c9ff9*/
  if ( !v2 ) /*0x4c9ffe*/
    return 0; /*0x4ca116*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x4ca007*/
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100)); /*0x4ca016*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 136))(*(_DWORD *)(this + 88)); /*0x4ca023*/
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 132))(v4, *(_DWORD *)(*(_DWORD *)(this + 88) + 540)); /*0x4ca037*/
  HouseClass::AddPower(*(_DWORD **)(this + 108), v5 - *(_DWORD *)(this + 96)); /*0x4ca046*/
  v6 = *(_DWORD *)(this + 104); /*0x4ca04b*/
  *(_DWORD *)(this + 96) = 0; /*0x4ca053*/
  if ( v6 ) /*0x4ca056*/
    *(_DWORD *)(this + 104) = -1; /*0x4ca058*/
  v7 = dword_A8ED84; /*0x4ca05b*/
  *(_DWORD *)(this + 56) = 0; /*0x4ca065*/
  *(_DWORD *)(this + 44) = v7; /*0x4ca068*/
  *(_DWORD *)(this + 48) = v11; /*0x4ca06e*/
  *(_DWORD *)(this + 52) = 0; /*0x4ca071*/
  v8 = *(#375 **)(this + 108); /*0x4ca074*/
  *(_DWORD *)(this + 36) = 0; /*0x4ca077*/
  *(_BYTE *)(this + 112) = 1; /*0x4ca07a*/
  *(_BYTE *)(this + 93) = 1; /*0x4ca07e*/
  if ( !(unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x4ca082*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 15 ) /*0x4ca096*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22100) = -1; /*0x4ca09b*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 1 ) /*0x4ca0ac*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22096) = -1; /*0x4ca0b1*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 2 ) /*0x4ca0c2*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22104) = -1; /*0x4ca0c7*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 6 ) /*0x4ca0d8*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22092) = -1; /*0x4ca0dd*/
  }
  ++dword_A8E7AC; /*0x4ca0eb*/
  v9 = *(_DWORD *)(this + 88); /*0x4ca0f1*/
  if ( v9 ) /*0x4ca0f6*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4ca0fc*/
  *(_DWORD *)(this + 88) = 0; /*0x4ca0ff*/
  --dword_A8E7AC; /*0x4ca109*/
  return 1; /*0x4ca108*/
}



// ==== 0x004CA120  ObjectClass::GetMember09  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetMember09(ObjectClass *this)
{
  return this->occupant; /*0x4ca123*/
}



// ==== 0x004CA130  ObjectClass::IsCliffWall  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::IsCliffWall(ObjectClass *this)
{
  int result; // eax

  result = 54; /*0x4ca133*/
  LOBYTE(result) = this->customSound_controller[2] && this->occupant == 54 /*0x4ca141*/
                || *(_DWORD *)&this->bombVisible != -1 && this->occupant == 54;
  return result; /*0x4ca143*/
}



// ==== 0x004CA160  AbstractClass::GetType  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetType(AbstractClass *this)
{
  return *((_DWORD *)this + 22); /*0x4ca163*/
}



// ==== 0x004CA170  SidebarClass::draw2  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::draw2(SidebarClass *this)
{
  return this->SidebarClass_field_0x68; /*0x4ca173*/
}



// ==== 0x004CA1A0  ProductionQueue::CompleteOrCancel  this=ProductionQueue  sig=csp ====
char __thiscall ProductionQueue::CompleteOrCancel(ProductionQueue *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // [esp+Ch] [ebp-8h]

  if ( *((_DWORD *)this + 22) && *((_DWORD *)this + 9) == 54 ) /*0x4ca1b6*/
  {
    *((_DWORD *)this + 22) = 0; /*0x4ca1ba*/
    *((_BYTE *)this + 112) = 1; /*0x4ca1bd*/
    *((_BYTE *)this + 93) = 1; /*0x4ca1c0*/
    *((_DWORD *)this + 9) = 0; /*0x4ca1c3*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4ca1c6*/
    *((_DWORD *)this + 14) = 0; /*0x4ca1cf*/
    *((_DWORD *)this + 11) = v2; /*0x4ca1d2*/
    *((_DWORD *)this + 12) = v4; /*0x4ca1d8*/
    *((_DWORD *)this + 13) = 0; /*0x4ca1db*/
    return 1; /*0x4ca1b8*/
  }
  else if ( *((_DWORD *)this + 26) && *((_DWORD *)this + 9) == 54 ) /*0x4ca1ec*/
  {
    *((_DWORD *)this + 26) = -1; /*0x4ca1f0*/
    *((_BYTE *)this + 112) = 1; /*0x4ca1f7*/
    *((_BYTE *)this + 93) = 1; /*0x4ca1fa*/
    *((_DWORD *)this + 9) = 0; /*0x4ca1fd*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4ca200*/
    *((_DWORD *)this + 14) = 0; /*0x4ca209*/
    *((_DWORD *)this + 11) = v3; /*0x4ca20c*/
    *((_DWORD *)this + 12) = v4; /*0x4ca212*/
    *((_DWORD *)this + 13) = 0; /*0x4ca215*/
    return 1; /*0x4ca1ee*/
  }
  else
  {
    return 0; /*0x4ca21f*/
  }
}



// ==== 0x004CA230  FactoryClass::ddtor  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::ddtor(FactoryClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4ca236*/
    return -2147467261; /*0x4ca238*/
  *a2 = 887937448; /*0x4ca246*/
  a2[1] = 298977968; /*0x4ca24e*/
  a2[2] = 1610655660; /*0x4ca257*/
  a2[3] = unk_7E982C; /*0x4ca260*/
  return 0; /*0x4ca23d*/
}



// ==== 0x004CA270  FactoryClass::LoadFromStream  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::LoadFromStream(FactoryClass *this, int *a2)
{
  int *v2; // ebp
  FactoryClass *v3; // edi
  int result; // eax
  int v5; // edx
  FactoryClass *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x4ca273*/
  v3 = this; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(this, (int)a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&v3->production[2], (int)&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor((TechnoTypeVector *)&v3->onHold, 0, 0); /*0x4ca2b2*/
      *(_DWORD *)&v3->onHold = &DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4ca2b7*/
      *(_DWORD *)&v3->__pad_42[18] = 10; /*0x4ca2bd*/
      *(_DWORD *)&v3->__pad_42[14] = 0; /*0x4ca2c4*/
      v3->AbstractClass = &FactoryClass::`vftable'; /*0x4ca2c7*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2cd*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2d4*/
      v3->? = &FactoryClass::`vftable'; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    this = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, FactoryClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = this; /*0x4ca2fd*/
      v13 = 0; /*0x4ca301*/
      if ( (int)this <= 0 ) /*0x4ca307*/
      {
LABEL_14:
        v12 = 0; /*0x4ca374*/
        if ( (int)v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking( /*0x4ca386*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)&v3->__pad_42[2] + 4 * v12++));
          while ( v12 < (int)this ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->owner); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->__pad_42[22]); /*0x4ca3a9*/
        return 0; /*0x4ca3ae*/
      }
      else
      {
        while ( 1 ) /*0x4ca309*/
        {
          v7 = *v2; /*0x4ca309*/
          a2 = 0; /*0x4ca315*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          v8 = *(_DWORD *)&v3->__pad_42[6]; /*0x4ca324*/
          if ( *(_DWORD *)&v3->__pad_42[14] < v8 /*0x4ca349*/
            || (v3->__pad_42[11] || !v8)
            && (v9 = *(_DWORD *)&v3->__pad_42[18], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&v3->onHold + 8))(
                 &v3->onHold,
                 v8 + v9,
                 0) )
          {
            v10 = *(_DWORD *)&v3->__pad_42[14]; /*0x4ca350*/
            v11 = *(_DWORD *)&v3->__pad_42[2]; /*0x4ca353*/
            *(_DWORD *)&v3->__pad_42[14] = v10 + 1; /*0x4ca359*/
            *(_DWORD *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = this; /*0x4ca367*/
          if ( ++v13 >= (int)this ) /*0x4ca372*/
            goto LABEL_14; /*0x4ca372*/
        }
      }
    }
  }
  return result; /*0x4ca3b0*/
}



// ==== 0x004CA3C0  FactoryClass::Seek  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::Seek(FactoryClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4ca3d2*/
  if ( result >= 0 ) /*0x4ca3d9*/
  {
    v4 = *a2; /*0x4ca3de*/
    a3 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca3ea*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->__pad_42[2] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
          break; /*0x4ca412*/
      }
      return 0; /*0x4ca41d*/
    }
  }
  return result; /*0x4ca41f*/
}



// ==== 0x004CA430  FactoryClass::Stat  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::Stat(FactoryClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  Debug::Log(); /*0x4ca43f*/
  Debug::Log(); /*0x4ca44d*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 44))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca45a*/
  Debug::Log(); /*0x4ca463*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 64))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca470*/
  Debug::Log(); /*0x4ca479*/
  Debug::Log(); /*0x4ca489*/
  Debug::Log(); /*0x4ca499*/
  Debug::Log(); /*0x4ca4a7*/
  Debug::Log(); /*0x4ca4b5*/
  Debug::Log(); /*0x4ca4c3*/
  (*((void (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x4ca4d4*/
  Debug::Log(); /*0x4ca4dd*/
  (*((void (__stdcall **)(void **))this->? + 4))(&this->?); /*0x4ca4ec*/
  Debug::Log(); /*0x4ca4f5*/
  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4ca504*/
  LOBYTE(v3) = this->isSuspended; /*0x4ca509*/
  Power::FlagProcess((Power *)a2, v3); /*0x4ca50f*/
  LOBYTE(v4) = this->__pad_42[27]; /*0x4ca514*/
  Power::FlagProcess((Power *)a2, v4); /*0x4ca51a*/
  Power::TimerProcess(this->balance); /*0x4ca525*/
  Power::TimerProcess(this->originalBalance); /*0x4ca530*/
  v5 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(this->specialItem); /*0x4ca554*/
  v7 = (*((int (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/
}



// ==== 0x004CA580  FactoryClass::Revert  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::Revert(FactoryClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == *(_DWORD *)&this->__pad_42[22] ) /*0x4ca589*/
    *(_DWORD *)&this->__pad_42[22] = 0; /*0x4ca58b*/
  return result; /*0x4ca592*/
}



// ==== 0x004CA5A0  FactoryClass::StartProduction_2  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::StartProduction_2(FactoryClass *this)
{
  int v2; // eax
  _BYTE *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char v10; // [esp-8h] [ebp-10h]

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !this->queuedCapacity || (LOBYTE(v2) = this->isSuspended, (_BYTE)v2) ) /*0x4ca5be*/
      {
        v3 = **(_BYTE ***)&this->__pad_42[2]; /*0x4ca5c3*/
        v4 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *(_DWORD *)&this->__pad_42[14] = v5; /*0x4ca5d6*/
                v6 < *(_DWORD *)&this->__pad_42[14];
                *(_DWORD *)(*(_DWORD *)&this->__pad_42[2] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&this->__pad_42[2]
                                                                                    + 4 * v6) )
          {
            ++v6; /*0x4ca5db*/
          }
        }
        v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 64))(v3); /*0x4ca5ee*/
        if ( v2 >= 0 ) /*0x4ca5f3*/
        {
          v10 = v3[3278]; /*0x4ca5ff*/
          v9 = v2; /*0x4ca600*/
          v7 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3); /*0x4ca603*/
          LOBYTE(v2) = Sidebar::StartSidebarProduction((int)this->owner, v7, v9, v10, 1); /*0x4ca60a*/
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}



// ==== 0x004CA620  FactoryClass::RemoveOneFromQueue  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::RemoveOneFromQueue(FactoryClass *this, char a2)
{
  char *p_onHold; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  p_onHold = &this->onHold; /*0x4ca624*/
  v3 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&this->onHold + 16))(&this->onHold, &a2); /*0x4ca62e*/
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = *((_DWORD *)p_onHold + 4); /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( *((_DWORD *)p_onHold + 4) = v5; /*0x4ca643*/
        v3 < *((_DWORD *)p_onHold + 4);
        *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3 - 4) = *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3) )
  {
    ++v3; /*0x4ca648*/
  }
  return 1; /*0x4ca659*/
}



// ==== 0x004CA670  FactoryClass::CountType  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::CountType(FactoryClass *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi

  v3 = 0; /*0x4ca679*/
  v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) == a2; /*0x4ca68e*/
  v5 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = *(_DWORD **)&this->__pad_42[2]; /*0x4ca69a*/
    do /*0x4ca6a6*/
    {
      if ( *v6 == a2 ) /*0x4ca69f*/
        ++v3; /*0x4ca6a1*/
      ++v6; /*0x4ca6a2*/
      --v5; /*0x4ca6a5*/
    }
    while ( v5 ); /*0x4ca6a6*/
  }
  return v3; /*0x4ca6aa*/
}



// ==== 0x004CA6B0  FactoryClass::IsQueued  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::IsQueued(FactoryClass *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca6b0*/
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = *(_DWORD **)&this->__pad_42[2]; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}



// ==== 0x004CA6E0  HouseClass::UpdateTeamProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateTeamProductionSpeed(HouseClass *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  HouseClass *v5; // ecx
  int v6; // edx
  int v7; // edx

  result = *(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca6e0*/
  for ( i = 0; i < *(int *)&stru_A83D50.__pad_C8[40]; ++i ) /*0x4ca6ed*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i); /*0x4ca6f5*/
    if ( *(HouseClass **)(v4 + 108) == this ) /*0x4ca6fb*/
    {
      v5 = *(HouseClass **)(v4 + 88); /*0x4ca6fd*/
      v6 = 0; /*0x4ca700*/
      if ( v5 ) /*0x4ca704*/
        v6 = HouseClass::CalcProductionSpeed(v5); /*0x4ca70b*/
      v7 = v6 / 54; /*0x4ca71c*/
      if ( v7 >= 1 ) /*0x4ca721*/
      {
        if ( v7 > 255 ) /*0x4ca730*/
          v7 = 255; /*0x4ca732*/
      }
      else
      {
        v7 = 1; /*0x4ca723*/
      }
      if ( v7 != *(_DWORD *)(v4 + 56) ) /*0x4ca73a*/
        *(_DWORD *)(v4 + 56) = v7; /*0x4ca73c*/
    }
    result = *(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca73f*/
  }
  return result; /*0x4ca74a*/
}



// ==== 0x004CA750  FactoryClass::StubReturn12  this=FactoryClass  sig=csp ====
int FactoryClass::StubReturn12(FactoryClass *this)
{
  return 12; /*0x4ca755*/
}



// ==== 0x004CA760  FactoryClass::StubReturn116  this=FactoryClass  sig=csp ====
int FactoryClass::StubReturn116(FactoryClass *this)
{
  return 116; /*0x4ca765*/
}



// ==== 0x004CA770  FactoryClass::CopyTo  this=FactoryClass  sig=csp ====
void **__thiscall FactoryClass::CopyTo(FactoryClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  FactoryClass *v7; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &FactoryClass::`vftable'; /*0x4ca776*/
  this->? = &FactoryClass::`vftable'; /*0x4ca77c*/
  this->? = &FactoryClass::`vftable'; /*0x4ca783*/
  this->? = &FactoryClass::`vftable'; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x4ca791*/
  v7 = this; /*0x4ca7a6*/
  v3 = (*(int (__thiscall **)(char *, FactoryClass **))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 16))( /*0x4ca7aa*/
         &stru_A83D50.__pad_C8[24],
         &v7);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_C8[40] ) /*0x4ca7ba*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca7bf*/
    for ( ; /*0x4ca7c5*/
          v3 < *(int *)&stru_A83D50.__pad_C8[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28]
                                                                                     + 4 * v3) )
    {
      ++v3; /*0x4ca7cd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x4ca7e6*/
    BuildingClass::AbandonProduction((int)this); /*0x4ca7ea*/
  v7 = this; /*0x4ca7ff*/
  v4 = (*(int (__thiscall **)(int *, FactoryClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4ca803*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4ca813*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4ca818*/
    for ( ; /*0x4ca81e*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4ca826*/
    }
  }
  v5 = *(void **)&this->__pad_42[2]; /*0x4ca838*/
  *(_DWORD *)&this->onHold = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4ca83b*/
  if ( v5 && this->__pad_42[11] ) /*0x4ca846*/
  {
    __3_YAXPAX_Z(v5); /*0x4ca84e*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x4ca856*/
  }
  this->__pad_42[11] = 0; /*0x4ca85f*/
  *(_DWORD *)&this->__pad_42[6] = 0; /*0x4ca863*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    __3_YAXPAX_Z(this); /*0x4ca877*/
  return &this->AbstractClass; /*0x4ca881*/
}



// ==== 0x004CA890  ?$DynamicVectorClass@PBVTechnoTypeClass@@::processScriptEvent  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_4CA890(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4ca896*/
  *(_DWORD *)(this + 16) = 0; /*0x4ca899*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4ca8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x4ca8a6*/
    *(_DWORD *)(this + 4) = 0; /*0x4ca8ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ca8b1*/
  *(_DWORD *)(this + 8) = 0; /*0x4ca8b4*/
}



// ==== 0x004CA8C0  ?$DynamicVectorClass@PBVTechnoTypeClass@@::checkScriptCondition  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_4CA8C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ca8c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ca8d5*/
  else
    return 0; /*0x4ca8c7*/
}



// ==== 0x004CA8E0  _VectorClass_PBVTechnoTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FactoryClass_33::Seek(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4ca8ea*/
}



// ==== 0x004CA8F0  _VectorClass_PBVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33::AddRef(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4ca8f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( m_8 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4ca905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ca90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ca914*/
    {
      ++v3; /*0x4ca916*/
      ++v4; /*0x4ca917*/
      if ( v3 >= m_8 ) /*0x4ca91c*/
        return 1; /*0x4ca91c*/
    }
  }
  return 0; /*0x4ca91e*/
}



// ==== 0x004CA930  _VectorClass_PBVTechnoTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33::Release(_VectorClass_PBVTechnoTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4ca946*/
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4ca95e*/
    LOBYTE(this->m_C) = 1; /*0x4ca966*/
    if ( v4 ) /*0x4ca96a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4ca975*/
      {
        m_8 = this->m_8; /*0x4ca97c*/
        if ( a2 < m_8 ) /*0x4ca981*/
          m_8 = a2; /*0x4ca983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ca989*/
          ++i; /*0x4ca98e*/
        if ( BYTE1(this->m_C) ) /*0x4ca99b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ca9a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4ca9b7*/
      this->m_8 = a2; /*0x4ca9bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4ca9c2*/
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTechnoTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4ca9d2*/
    return 1; /*0x4ca9d8*/
  }
}



// ==== 0x004CA9E0  _VectorClass_PBVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FactoryClass_33::ddtor(_VectorClass_PBVTechnoTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4ca9ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ca9f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9fb*/
  }
  BYTE1(this->m_C) = 0; /*0x4ca9fe*/
  this->m_8 = 0; /*0x4caa01*/
}



// ==== 0x004CAA10  _VectorClass_PBVTechnoTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall FactoryClass_33::Read(_VectorClass_PBVTechnoTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4caa10*/
    return 0; /*0x4caa18*/
  m_8 = this->m_8; /*0x4caa1e*/
  result = 0; /*0x4caa21*/
  if ( m_8 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4caa2b*/
  {
    if ( ++result >= m_8 ) /*0x4caa3a*/
      return -1; /*0x4caa3a*/
  }
  return result; /*0x4caa1a*/
}



// ==== 0x004CAA50  _VectorClass_PBVTechnoTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FactoryClass_33::Write(_VectorClass_PBVTechnoTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4caa50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4caa65*/
  else
    return 0; /*0x4caa57*/
}



// ==== 0x004CAA70  ?$DynamicVectorClass@PBVTechnoTypeClass@@::executeScriptAction  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_4CAA70(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4caa7c*/
  {
    this->IsInitialized = 0; /*0x4caa82*/
    if ( a3 ) /*0x4caa88*/
      v4 = a3; /*0x4caa9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4caa9a*/
    this->IsInitialized = 1; /*0x4caaa2*/
    if ( !v4 ) /*0x4caaa6*/
      return 0; /*0x4cab1a*/
    if ( this->Items ) /*0x4caaa8*/
    {
      v5 = this->q008; /*0x4caaaf*/
      if ( a2 < v5 ) /*0x4caab4*/
        v5 = a2; /*0x4caab6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4caabc*/
        ++i; /*0x4caac1*/
      if ( this->IsAllocated ) /*0x4caace*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4caad9*/
        this->Items = 0; /*0x4caae1*/
      }
    }
    this->Items = v4; /*0x4caaea*/
    this->q008 = a2; /*0x4caaf2*/
    this->IsAllocated = a3 == 0; /*0x4caaf5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4caafe*/
  }
  v7 = this->q008; /*0x4cab01*/
  if ( v7 < this->Items ) /*0x4cab09*/
    this->Items = v7; /*0x4cab0b*/
  return 1; /*0x4cab0e*/
}



// ==== 0x004CAB20  ?$DynamicVectorClass@PBVTechnoTypeClass@@::validateScriptArgs  this=DynamicVector  sig=csp ====
int __thiscall AbstractClass::sub_4CAB20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4cab20*/
  result = 0; /*0x4cab23*/
  if ( v2 <= 0 ) /*0x4cab28*/
    return -1; /*0x4cab3f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4cab2e*/
  {
    if ( ++result >= v2 ) /*0x4cab3d*/
      return -1; /*0x4cab3d*/
  }
  return result; /*0x4cab42*/
}



// ==== 0x004CAB50  _VectorClass_PBVTechnoTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FactoryClass_33::QueryInterface(_VectorClass_PBVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4cab53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4cab56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x4cab68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4cab70*/
  }
  BYTE1(this->m_C) = 0; /*0x4cab7b*/
  this->m_8 = 0; /*0x4cab81*/
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    __3_YAXPAX_Z(this); /*0x4cab8b*/
  return this->__pad_0; /*0x4cab95*/
}



// ==== 0x004CABA0  ?$DynamicVectorClass@PBVTechnoTypeClass@@::resetScriptState  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_4CABA0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4caba3*/
  *Block = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4caba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4cabb0*/
  {
    __3_YAXPAX_Z(v3); /*0x4cabb8*/
    *(Block + 1) = 0; /*0x4cabc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4cabcb*/
  *(Block + 2) = 0; /*0x4cabd1*/
  if ( (a2 & 1) != 0 ) /*0x4cabd8*/
    __3_YAXPAX_Z(Block); /*0x4cabdb*/
  return Block; /*0x4cabe5*/
}



// ==== 0x004CABF0  TechnoTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TechnoTypeVector::Constructor(TechnoTypeVector *this, int a2, int a3)
{
  this->TechnoTypeVector_field_0x04 = 0; /*0x4cabfb*/
  this->Capacity = a2; /*0x4cabfe*/
  this->IsInitialized = 1; /*0x4cac01*/
  this->IsAllocated = 0; /*0x4cac05*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass const *>::`vftable'; /*0x4cac08*/
  if ( a2 ) /*0x4cac0e*/
  {
    if ( a3 ) /*0x4cac16*/
    {
      this->TechnoTypeVector_field_0x04 = a3; /*0x4cac18*/
      return this->__pad_0; /*0x4cac1e*/
    }
    this->TechnoTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4cac2d*/
    this->IsAllocated = 1; /*0x4cac30*/
  }
  return this->__pad_0; /*0x4cac1d*/
}



// ==== 0x004CAC40  Math::Sqrt  this=Math  sig=csp ====
int __cdecl Math::Sqrt(double a1)
{
  __int16 v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  float v7; // [esp+4h] [ebp+4h]

  v2 = a1; /*0x4cac40*/
  v3 = a1 < 0.0; /*0x4cac44*/
  v4 = 0; /*0x4cac44*/
  v5 = a1 == 0.0; /*0x4cac44*/
  LOWORD(result) = v1; /*0x4cac4a*/
  if ( a1 != 0.0 ) /*0x4cac4f*/
  {
    if ( a1 <= 0.0 ) /*0x4cac65*/
      v2 = a1 * -1.0; /*0x4cac67*/
    v7 = v2; /*0x4cac6d*/
    return (((__int16)((LODWORD(v7) >> 23) - 127) >> 1) + 127) << 23; /*0x4caca0*/
  }
  return result; /*0x4cac59*/
}



// ==== 0x004CACB0  Math::SinCos  this=Math  sig=csp ====
int __cdecl Math::SinCos(double a1)
{
  int v1; // eax
  char v2; // cl
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * flt_8223B0); /*0x4cacba*/
  v2 = v1 & 1; /*0x4cacc4*/
  result = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( result < 0 )
    result = (((_WORD)result - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 ) /*0x4cace0*/
  {
    if ( result < 0x1FFF ) /*0x4cace7*/
      ++result; /*0x4cace9*/
  }
  return result; /*0x4cacf1*/
}



// ==== 0x004CAD00  Math::ArcTan2  this=RecoilData  sig=csp ====
int __cdecl Math::ArcTan2(double a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * flt_8223B4); /*0x4cad0a*/
  v2 = v1 & 1; /*0x4cad14*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    result = v3 + 2048; /*0x4cad30*/
  else
    result = v3 + 10240; /*0x4cad29*/
  if ( v2 ) /*0x4cad37*/
  {
    if ( result < 10239 ) /*0x4cad3e*/
      ++result; /*0x4cad40*/
  }
  return result; /*0x4cad48*/
}



// ==== 0x004CAD50  Math::Sin  this=Math  sig=csp ====
int __cdecl Math::Sin(double a1)
{
  int v1; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * 651.8986469044033); /*0x4cad5a*/
  result = v1 & 0x80000FFF; /*0x4cad5f*/
  if ( result < 0 )
    return (((_WORD)result - 1) | 0xFFFFF000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return result; /*0x4cad7b*/
}



// ==== 0x004CAD80  BuildingLight::CalcIntensity  this=BuildingLight  sig=csp ====
int __cdecl BuildingLight::CalcIntensity(double a1)
{
  int v1; // eax

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cad90*/
  return 4 * v1; /*0x4cada1*/
}



// ==== 0x004CADB0  Math::ArcTan2_Table  this=Math  sig=csp ====
int __cdecl Math::ArcTan2_Table(double a1)
{
  int v1; // eax

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cadc0*/
  return 4 * v1; /*0x4cadd7*/
}



// ==== 0x004CADE0  Math::ArcTan  this=Math  sig=csp ====
int __cdecl Math::ArcTan(double a1)
{
  int v2; // eax
  __int16 v3; // fps
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  int result; // eax
  float v8; // [esp+4h] [ebp+4h]

  v8 = a1; /*0x4cade4*/
  LOWORD(v2) = Math::RoundToInt(a1 / flt_8650B8); /*0x4cadee*/
  result = abs32(v2); /*0x4cadf6*/
  v4 = v8 < 0.0; /*0x4cae12*/
  v5 = 0; /*0x4cae12*/
  v6 = v8 == 0.0; /*0x4cae12*/
  LOWORD(result) = v3; /*0x4cae18*/
  return result; /*0x4cae21*/
}



// ==== 0x004CAE30  Math::CalcAngle  this=AbstractClass  sig=csp ====
int __cdecl Math::CalcAngle(double a1, double a2)
{
  __int16 v2; // fps
  double v3; // st7
  char v4; // c3
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  __int16 v9; // fps
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int v13; // eax
  __int16 v14; // fps
  bool v15; // c0
  char v16; // c2
  bool v17; // c3
  float v18; // [esp+0h] [ebp-4h]
  float v19; // [esp+10h] [ebp+Ch]

  v18 = a2; /*0x4cae35*/
  v19 = a1; /*0x4cae3d*/
  v3 = v19; /*0x4cae4b*/
  if ( v4 ) /*0x4cae54*/
  {
    v5 = v3 < 0.0; /*0x4cae56*/
    v6 = 0; /*0x4cae56*/
    v7 = v3 == 0.0; /*0x4cae56*/
    LOWORD(result) = v2; /*0x4cae5c*/
    if ( v3 != 0.0 ) /*0x4cae61*/
    {
      v10 = v19 < 0.0; /*0x4cae6f*/
      v11 = 0; /*0x4cae6f*/
      v12 = v19 == 0.0; /*0x4cae6f*/
      LOWORD(result) = v9; /*0x4cae75*/
    }
  }
  else
  {
    LOWORD(v13) = Math::RoundToInt(v3 / v18 / flt_8650B8); /*0x4cae96*/
    result = abs32(v13); /*0x4cae9e*/
    v15 = v19 < 0.0; /*0x4caed1*/
    v16 = 0; /*0x4caed1*/
    v17 = v19 == 0.0; /*0x4caed1*/
    LOWORD(result) = v14; /*0x4caed7*/
  }
  return result; /*0x4cae6a*/
}



// ==== 0x004CAEF0  nullsub_131  this=-  sig=ida-proto ====
void nullsub_131()
{
  ; /*0x4caef0*/
}



// ==== 0x004CAF00  nullsub_132  this=-  sig=ida-proto ====
void nullsub_132()
{
  ; /*0x4caf00*/
}



// ==== 0x004CAF10  nullsub_133  this=-  sig=ida-proto ====
void nullsub_133()
{
  ; /*0x4caf10*/
}



// ==== 0x004CAF20  VoxelAnimClass::ProcessFrame  this=VoxelAnimClass  sig=csp ====
unsigned int VoxelAnimClass::ProcessFrame(VoxelAnimClass *this)
{
  int v1; // esi
  _DWORD *v2; // edx
  int v3; // edi
  double v4; // st7
  double v5; // st7
  unsigned int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int result; // eax
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x4caf23*/
  v2 = &unk_86D0BC; /*0x4caf25*/
  v3 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v4 = COERCE_FLOAT((v1 | 0xFE000) << 10); /*0x4caf3d*/
    if ( v4 == 0.0 ) /*0x4caf4c*/
    {
      v5 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v4 <= 0.0 ) /*0x4caf63*/
        v4 = v4 * -1.0; /*0x4caf65*/
      v13 = v4; /*0x4caf6b*/
      v6 = (unsigned int)&unk_7FFFFF & LODWORD(v13); /*0x4caf75*/
      v7 = (LODWORD(v13) >> 23) - 127; /*0x4caf7e*/
      if ( (v7 & 1) != 0 ) /*0x4caf83*/
        v6 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4caf85*/
      v5 = COERCE_FLOAT(((((__int16)v7 >> 1) + 127) << 23) + dword_8650BC[v6 >> 10]); /*0x4cafa7*/
    }
    v14 = v5; /*0x4cafab*/
    *(v2 - 0x2000) = (unsigned int)&unk_7FFFFF & LODWORD(v14); /*0x4cafc7*/
    v8 = COERCE_FLOAT((v1 | 0x100000) << 10); /*0x4cafcd*/
    if ( v8 == 0.0 ) /*0x4cafdc*/
    {
      v9 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v8 <= 0.0 ) /*0x4caff3*/
        v8 = v8 * -1.0; /*0x4caff5*/
      v15 = v8; /*0x4caffb*/
      v10 = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb005*/
      v11 = (LODWORD(v15) >> 23) - 127; /*0x4cb00e*/
      if ( (v11 & 1) != 0 ) /*0x4cb013*/
        v10 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4cb015*/
      v9 = COERCE_FLOAT(((((__int16)v11 >> 1) + 127) << 23) + dword_8650BC[v10 >> 10]); /*0x4cb037*/
    }
    v16 = v9; /*0x4cb03b*/
    ++v2; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & LODWORD(v16); /*0x4cb046*/
    ++v1; /*0x4cb04b*/
    *(v2 - 1) = (unsigned int)&unk_7FFFFF & LODWORD(v16); /*0x4cb04c*/
    --v3; /*0x4cb04f*/
  }
  while ( v3 ); /*0x4cb050*/
  return result; /*0x4cb056*/
}



// ==== 0x004CB150  ComputeDistortionVariant  this=-  sig=csp ====
int __stdcall ComputeDistortionVariant(float a1)
{
  int v1; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb15a*/
  result = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( result < 0 )
    return (((_WORD)result - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  return result; /*0x4cb190*/
}



// ==== 0x004CB1A0  ComputeChronosphereDistortion  this=-  sig=csp ====
int __stdcall ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  signed int v2; // eax

  LOWORD(v1) = Math::RoundToInt(flt_8223B4 * a1); /*0x4cb1aa*/
  v2 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v2 >= 0 ) /*0x4cb1be*/
    return v2 + 2048; /*0x4cb1be*/
  v2 = (((_WORD)v2 - 1) | 0xFFFFE000) + 1; /*0x4cb1c6*/
  if ( v2 >= 0 ) /*0x4cb1c7*/
    return v2 + 2048; /*0x4cb1d0*/
  else
    return v2 + 10240; /*0x4cb1c9*/
}



// ==== 0x004CB3D0  globalHelper_0CB3D0  this=-  sig=csp ====
double __stdcall sub_4CB3D0(float a1, float a2)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax

  v3 = a1; /*0x4cb3da*/
  if ( v4 ) /*0x4cb3e3*/
  {
    if ( v3 == 0.0 ) /*0x4cb3f0*/
    {
      return 0.0; /*0x4cb3f2*/
    }
    else if ( a1 <= 0.0 ) /*0x4cb40a*/
    {
      return -1.5707964; /*0x4cb415*/
    }
    else
    {
      return 1.5707964; /*0x4cb40c*/
    }
  }
  else
  {
    v6 = abs32(Math::RoundToInt(v3 / a2 / flt_8650B8)); /*0x4cb430*/
    if ( v6 >= 4097 ) /*0x4cb437*/
      result = 1.5707964; /*0x4cb442*/
    else
      result = flt_8610B4[v6]; /*0x4cb439*/
    if ( a2 < 0.0 ) /*0x4cb457*/
      result = 3.141592653589793 - result; /*0x4cb459*/
    if ( a1 < 0.0 ) /*0x4cb46e*/
      return -result; /*0x4cb470*/
  }
  return result; /*0x4cb3f8*/
}



// ==== 0x004CB4C0  sub_4CB4C0  this=-  sig=ida-proto ====
// write access to const memory has been detected, the output may be wrong!
void sub_4CB4C0()
{
  PVOID BaseAddress; // esi
  SIZE_T RegionSize; // edi
  HANDLE CurrentProcess; // eax
  DWORD flOldProtect; // [esp+10h] [ebp-20h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+14h] [ebp-1Ch] BYREF

  memset(&Buffer, 0, sizeof(Buffer)); /*0x4cb4d4*/
  if ( VirtualQuery(Math::SinCos, &Buffer, 0x1Cu) ) /*0x4cb4e5*/
  {
    BaseAddress = Buffer.BaseAddress; /*0x4cb50a*/
    RegionSize = Buffer.RegionSize; /*0x4cb50c*/
    flOldProtect = 0; /*0x4cb50e*/
    if ( VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, 8u, &flOldProtect) ) /*0x4cb516*/
    {
      *(_DWORD *)Math::SinCos = 0; /*0x4cb53d*/
      if ( !VirtualProtect(BaseAddress, RegionSize, 0x10u, &flOldProtect) ) /*0x4cb549*/
      {
        GetLastError(); /*0x4cb550*/
        Debug::Log(); /*0x4cb55c*/
      }
      CurrentProcess = GetCurrentProcess(); /*0x4cb568*/
      FlushInstructionCache(CurrentProcess, 0, 0); /*0x4cb56f*/
    }
    else
    {
      GetLastError(); /*0x4cb51d*/
      Debug::Log(); /*0x4cb529*/
    }
  }
}



// ==== 0x004CB580  ObjectClass::method_4CB580  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB580(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb58d*/
  LOWORD(this->?) = 1; /*0x4cb598*/
  HIWORD(this->?) = 1; /*0x4cb59c*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb5a0*/
  vtable1_high = HIWORD(this->?); /*0x4cb5b1*/
  this->? = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb5b9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb5c5*/
  this->? = 0; /*0x4cb5c8*/
  return (char *)this; /*0x4cb5c7*/
}



// ==== 0x004CB5E0  String::AllocAndCopy  this=AbstractClass  sig=csp ====
char *__thiscall String_AllocAndCopy(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb5ed*/
  *((_WORD *)Destination + 2) = 2; /*0x4cb5f4*/
  *((_WORD *)Destination + 3) = 1; /*0x4cb5fa*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb600*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb611*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb613*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb619*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb625*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb628*/
  return Destination; /*0x4cb627*/
}



// ==== 0x004CB640  ObjectClass::method_4CB640  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB640(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb64d*/
  LOWORD(this->?) = 3; /*0x4cb654*/
  HIWORD(this->?) = 2; /*0x4cb65a*/
  v4 = (char *)__2_YAPAXI_Z(2u); /*0x4cb660*/
  vtable1_high = HIWORD(this->?); /*0x4cb671*/
  this->? = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb679*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb679*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb685*/
  this->? = 0; /*0x4cb688*/
  return (char *)this; /*0x4cb687*/
}



// ==== 0x004CB6A0  ObjectClass::method_4CB6A0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4CB6A0(ObjectClass *this, char *Source, char a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy((char *)this, Source, 4u); /*0x4cb6ad*/
  LOWORD(this->?) = 4; /*0x4cb6b4*/
  HIWORD(this->?) = 2; /*0x4cb6ba*/
  v4 = (char *)__2_YAPAXI_Z(2u); /*0x4cb6c0*/
  vtable1_high = HIWORD(this->?); /*0x4cb6d1*/
  this->? = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb6d9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb6e5*/
  this->? = 0; /*0x4cb6e8*/
  return (char *)this; /*0x4cb6e7*/
}



// ==== 0x004CB700  NetMessage::Pack4  this=AbstractClass  sig=csp ====
char *__thiscall NetMessage_Pack4(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb70d*/
  *((_WORD *)Destination + 2) = 5; /*0x4cb714*/
  *((_WORD *)Destination + 3) = 4; /*0x4cb71a*/
  v4 = (char *)__2_YAPAXI_Z(4u); /*0x4cb720*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb731*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb733*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb739*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb739*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb745*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb748*/
  return Destination; /*0x4cb747*/
}



// ==== 0x004CB760  ObjectClass::TerrainInitMap  this=AbstractClass  sig=csp ====
char *__thiscall Map_TerrainInit(char *Destination, char *Source, char a3)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, Source, 4u); /*0x4cb76d*/
  *((_WORD *)Destination + 2) = 6; /*0x4cb774*/
  *((_WORD *)Destination + 3) = 4; /*0x4cb77a*/
  v4 = (char *)__2_YAPAXI_Z(4u); /*0x4cb780*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb791*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb793*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb799*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb799*/
  qmemcpy(v6, &a3 + 4 * (v5 >> 2), v5 & 3); /*0x4cb7a5*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb7a8*/
  return Destination; /*0x4cb7a7*/
}



// ==== 0x004CB7C0  ObjectClass::BuildResultPacket  this=AbstractClass  sig=csp ====
char *__thiscall BuildResultPacket(char *Destination, char *Source, const char *a3)
{
  unsigned int v4; // kr04_4
  char *v5; // eax
  unsigned __int16 v6; // cx
  char v7; // dl
  int v8; // ecx
  char *v9; // edi

  strncpy(Destination, Source, 4u); /*0x4cb7cd*/
  *((_WORD *)Destination + 2) = 7; /*0x4cb7dd*/
  v4 = strlen(a3) + 1; /*0x4cb7e3*/
  *((_WORD *)Destination + 3) = v4; /*0x4cb7e9*/
  v5 = (char *)__2_YAPAXI_Z((unsigned __int16)v4); /*0x4cb7f3*/
  v6 = *((_WORD *)Destination + 3); /*0x4cb7fc*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb800*/
  v7 = v6; /*0x4cb803*/
  v8 = v6 >> 2; /*0x4cb808*/
  qmemcpy(v5, a3, 4 * v8); /*0x4cb80b*/
  v9 = &v5[4 * v8]; /*0x4cb80b*/
  qmemcpy(v9, &a3[4 * v8], v7 & 3); /*0x4cb814*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb817*/
  return Destination; /*0x4cb816*/
}



// ==== 0x004CB830  NetMessage::Pack  this=AbstractClass  sig=csp ====
char *__thiscall NetMessage_Pack(char *Destination, char *Source, char *a3, unsigned __int16 a4)
{
  char *v5; // eax
  unsigned int v6; // edx
  char *v7; // edi

  strncpy(Destination, Source, 4u); /*0x4cb83d*/
  *((_WORD *)Destination + 2) = 20; /*0x4cb846*/
  *((_WORD *)Destination + 3) = a4; /*0x4cb84c*/
  v5 = (char *)__2_YAPAXI_Z(a4); /*0x4cb856*/
  v6 = *((unsigned __int16 *)Destination + 3); /*0x4cb867*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb869*/
  qmemcpy(v5, a3, 4 * (v6 >> 2)); /*0x4cb86f*/
  v7 = &v5[4 * (v6 >> 2)]; /*0x4cb86f*/
  qmemcpy(v7, &a3[4 * (v6 >> 2)], v6 & 3); /*0x4cb87b*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb87e*/
  return Destination; /*0x4cb87d*/
}



// ==== 0x004CB890  ResultNode::Init  this=ResultNode  sig=csp ====
int __thiscall ResultNode::Init(ResultNode *this)
{
  int result; // eax

  __3_YAXPAX_Z(*((void **)this + 2)); /*0x4cb897*/
  *((_DWORD *)this + 2) = 0; /*0x4cb89f*/
  return result; /*0x4cb8a6*/
}



// ==== 0x004CB8B0  ObjectClass::method_4CB8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4CB8B0(ObjectClass *this)
{
  __int16 v2; // ax
  u_short vtable1_high; // cx
  int result; // eax

  switch ( LOWORD(this->?) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      *(_WORD *)this->? = htons(*(_WORD *)this->?); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      *(_DWORD *)this->? = htonl(*(_DWORD *)this->?); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons((u_short)this->?); /*0x4cb8ec*/
  vtable1_high = HIWORD(this->?); /*0x4cb8f6*/
  LOWORD(this->?) = v2; /*0x4cb8fa*/
  result = htons(vtable1_high); /*0x4cb8ff*/
  HIWORD(this->?) = result; /*0x4cb904*/
  return result; /*0x4cb908*/
}



// ==== 0x004CB920  File::Dispatch  this=File  sig=csp ====
__int16 __thiscall File::Dispatch(File *this)
{
  __int16 v2; // ax
  u_short v3; // cx
  unsigned __int16 v4; // ax
  int v5; // eax

  v2 = ntohs(*(_WORD *)this->__pad_6); /*0x4cb928*/
  v3 = *(_WORD *)&this->File_field_0x2[2]; /*0x4cb92d*/
  *(_WORD *)this->__pad_6 = v2; /*0x4cb931*/
  v4 = ntohs(v3); /*0x4cb936*/
  *(_WORD *)&this->File_field_0x2[2] = v4; /*0x4cb93b*/
  v5 = v4 - 3; /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0: /*0x4cb94c*/
    case 1: /*0x4cb94c*/
      LOWORD(v5) = ntohs(**(_WORD **)&this->__pad_6[2]); /*0x4cb95a*/
      **(_WORD **)&this->__pad_6[2] = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2: /*0x4cb94c*/
    case 3: /*0x4cb94c*/
      v5 = ntohl(**(_DWORD **)&this->__pad_6[2]); /*0x4cb96d*/
      **(_DWORD **)&this->__pad_6[2] = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/
}



// ==== 0x004CB990  sub_4CB990  this=-  sig=ida-proto ====
int sub_4CB990()
{
  dword_8B3B38 = 0; /*0x4cb992*/
  dword_8B3B3C = 0; /*0x4cb997*/
  dword_8B3B40 = 0; /*0x4cb99c*/
  dword_8B3B44 = 0; /*0x4cb9a1*/
  return 0; /*0x4cb9a6*/
}



// ==== 0x004CB9B0  sub_4CB9B0  this=-  sig=ida-proto ====
void sub_4CB9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cb9bc*/
  dbl_8B3B50 = Math::Sqrt(v0 + v0); /*0x4cb9ce*/
}



// ==== 0x004CB9E0  sub_4CB9E0  this=-  sig=ida-proto ====
void sub_4CB9E0()
{
  dbl_8B3BA0 = dbl_8B3B50 / 60.0; /*0x4cb9ec*/
}



// ==== 0x004CBA00  sub_4CBA00  this=-  sig=ida-proto ====
void sub_4CBA00()
{
  dbl_8B3B88 = 1.0 / dbl_8B3BA0; /*0x4cba0c*/
}



// ==== 0x004CBA20  sub_4CBA20  this=-  sig=ida-proto ====
void sub_4CBA20()
{
  dbl_8B3B80 = 0.0174532925199433 * 45.0; /*0x4cba2c*/
}



// ==== 0x004CBA40  sub_4CBA40  this=-  sig=ida-proto ====
void sub_4CBA40()
{
  dbl_8B3B58 = 0.0174532925199433 * 60.0; /*0x4cba4c*/
}



// ==== 0x004CBA60  sub_4CBA60  this=-  sig=ida-proto ====
void sub_4CBA60()
{
  dbl_8B3B30 = 0.0174532925199433 * 90.0; /*0x4cba6c*/
}



// ==== 0x004CBA80  sub_4CBA80  this=-  sig=ida-proto ====
__int64 sub_4CBA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3B30 - dbl_8B3B58); /*0x4cba92*/
  result = Math::RoundToInt(v0 * dbl_8B3B50 * 0.5); /*0x4cbaa6*/
  dword_8B3BA8 = result; /*0x4cbaab*/
  return result; /*0x4cbab0*/
}



// ==== 0x004CBAC0  sub_4CBAC0  this=-  sig=ida-proto ====
void sub_4CBAC0()
{
  dbl_8B3B60 = Math::ArcTan((double)dword_8B3BA8 * 0.00390625); /*0x4cbad7*/
}



// ==== 0x004CBAF0  sub_4CBAF0  this=-  sig=ida-proto ====
void sub_4CBAF0()
{
  dbl_8B3B78 = Math::ArcTan((double)(2 * dword_8B3BA8) / dbl_8B3B50); /*0x4cbb12*/
}



// ==== 0x004CBB20  sub_4CBB20  this=-  sig=ida-proto ====
__int64 sub_4CBB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3BA8) + 0.5); /*0x4cbb3b*/
  dword_8B3B9C = result; /*0x4cbb40*/
  return result; /*0x4cbb46*/
}



// ==== 0x004CBB50  sub_4CBB50  this=-  sig=ida-proto ====
int sub_4CBB50()
{
  dword_8B3B48 = 0; /*0x4cbb52*/
  return 0; /*0x4cbb5e*/
}



// ==== 0x004CBB60  sub_4CBB60  this=-  sig=ida-proto ====
int sub_4CBB60()
{
  dword_8B3B68 = 0; /*0x4cbb62*/
  dword_8B3B6C = 0; /*0x4cbb67*/
  dword_8B3B70 = 0; /*0x4cbb6c*/
  return 0; /*0x4cbb71*/
}



// ==== 0x004CBB80  sub_4CBB80  this=-  sig=ida-proto ====
int sub_4CBB80()
{
  dword_8B3B98 = 0; /*0x4cbb85*/
  dword_8B3B90 = 128; /*0x4cbb8f*/
  dword_8B3B94 = 128; /*0x4cbb94*/
  return 128; /*0x4cbb99*/
}



// ==== 0x004CBBA0  FootClass::FindPathWithRetry  this=FootClass  sig=csp ====
void *__thiscall FootClass::FindPathWithRetry(FootClass *this, __int16 *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v8; // eax
  int v9; // edi
  int v11; // [esp+8h] [ebp-14h] BYREF
  int v12; // [esp+Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+10h] [ebp-Ch] BYREF

  v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *, _DWORD))this->TechnoClass + 19))(this, v13, 0); /*0x4cbbb2*/
  v9 = a3; /*0x4cbbb7*/
  LOWORD(v12) = *v8 / 256; /*0x4cbbc9*/
  HIWORD(v12) = v8[1] / 256; /*0x4cbbdd*/
  v11 = v12; /*0x4cbbe8*/
  if ( !a3 ) /*0x4cbbec*/
    return 0; /*0x4cbbef*/
  v11 = *WalkPathClassPath(&a3, &v11, a6, this->pathDirections); /*0x4cbc20*/
  return FindPathWithRetry((int)&stru_87E790.__pad_D8[80], (__int16 *)&v11, a2, (char *)this, v9, -1, -1, a7); /*0x4cbbee*/
}



// ==== 0x004CBC40  ObjectClass::WalkPathfindingLine  this=ObjectClass  sig=csp ====
int *__thiscall WalkPathfindingLine(ObjectClass *this, int *a2, int a3, int *a4, int a5, int a6)
{
  double v6; // st7
  int v7; // eax
  int *v8; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  char v14; // bl
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int (__thiscall **vtable0)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v19; // eax
  int v20; // edi
  int (__thiscall **v21)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v22; // eax
  int v23; // edi
  int (__thiscall **v24)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v25; // eax
  double v27; // [esp+8h] [ebp-34h]
  double v28; // [esp+10h] [ebp-2Ch]
  int v29; // [esp+28h] [ebp-14h]
  int v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+30h] [ebp-Ch]
  int v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v7 = a3; /*0x4cbc43*/
  v8 = a4; /*0x4cbc4b*/
  v10 = *(__int16 *)a3; /*0x4cbc5d*/
  a3 = *(__int16 *)a4; /*0x4cbc60*/
  __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc64*/
  v11 = *(__int16 *)(v7 + 2); /*0x4cbc68*/
  a3 = v10; /*0x4cbc6c*/
  __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc70*/
  v12 = *((__int16 *)a4 + 1); /*0x4cbc74*/
  __asm { fsubp st(1), st } /*0x4cbc78*/
  a3 = v11; /*0x4cbc7a*/
  __asm /*0x4cbc7e*/
  {
    fstp [esp+34h+var_2C]; double
    fild dword ptr [esp+34h+arg_4]
  }
  a3 = v12; /*0x4cbc86*/
  __asm /*0x4cbc8a*/
  {
    fild dword ptr [esp+34h+arg_4]
    fsubp st(1), st
    fstp [esp+34h+var_34]; double
  }
  Math::CalcAngle(v27, v28); /*0x4cbc93*/
  __asm { fsub ds:dbl_7E2820 } /*0x4cbc98*/
  __asm { fmul ds:dbl_7E2818 }
  LOWORD(a3) = Math::RoundToInt(v6); /*0x4cbcac*/
  v13 = a5; /*0x4cbcb8*/
  v29 = a5; /*0x4cbcc1*/
  v14 = ((((((unsigned int)a3 >> 12) + 1) >> 1) ^ 0xFC) - 1) & 7; /*0x4cbccb*/
  if ( a5 >= a6 ) /*0x4cbcd0*/
  {
LABEL_24:
    *a2 = dword_8B3B48; /*0x4cbea7*/
    return a2; /*0x4cbeba*/
  }
  while ( 1 ) /*0x4cbcdc*/
  {
    v15 = *v8; /*0x4cbcdc*/
    a3 = *v8; /*0x4cbce0*/
    if ( v13 > 0 ) /*0x4cbce4*/
    {
      v16 = v13; /*0x4cbce8*/
      do /*0x4cbd16*/
      {
        --v16; /*0x4cbd08*/
        HIWORD(v30) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[(v14 & 7) + 82]); /*0x4cbd09*/
        LOWORD(v15) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[(v14 & 7) + 82]); /*0x4cbd0e*/
        LOWORD(v30) = v15; /*0x4cbd03*/
        a3 = v30; /*0x4cbd12*/
      }
      while ( v16 ); /*0x4cbd16*/
    }
    a5 = 0; /*0x4cbd1b*/
    if ( (v14 & 1) != 0 ) /*0x4cbd23*/
    {
      if ( 2 * v13 > 0 ) /*0x4cbd2e*/
      {
        v17 = (v14 + 3) & 7; /*0x4cbd37*/
        while ( 1 ) /*0x4cbd55*/
        {
          vtable0 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbd55*/
          LOWORD(v31) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4cbd5c*/
          HIWORD(v31) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4cbd69*/
          a3 = v31; /*0x4cbd79*/
          v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbd7d*/
          if ( !vtable0[107](this, v19, (v14 + 3) & 7, -1, 0, 1) ) /*0x4cbd85*/
            break; /*0x4cbd85*/
          v13 = v29; /*0x4cbd93*/
          if ( ++a5 >= 2 * v29 ) /*0x4cbda5*/
            goto LABEL_23; /*0x4cbda5*/
          LOWORD(v15) = a3; /*0x4cbd3c*/
        }
LABEL_26:
        *a2 = a3; /*0x4cbed1*/
        return a2; /*0x4cbed1*/
      }
      goto LABEL_23; /*0x4cbd2e*/
    }
    if ( v13 > 0 ) /*0x4cbdae*/
      break; /*0x4cbdae*/
LABEL_18:
    a5 = 0; /*0x4cbe1e*/
    if ( v13 > 0 ) /*0x4cbe28*/
    {
      v23 = (v14 - 4) & 7; /*0x4cbe2d*/
      while ( 1 ) /*0x4cbe4b*/
      {
        v24 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbe4b*/
        LOWORD(v33) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4cbe52*/
        HIWORD(v33) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4cbe5f*/
        a3 = v33; /*0x4cbe6f*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbe73*/
        if ( !v24[107](this, v25, (v14 - 4) & 7, -1, 0, 1) ) /*0x4cbe7b*/
          goto LABEL_26; /*0x4cbe83*/
        v13 = v29; /*0x4cbe89*/
        if ( ++a5 >= v29 ) /*0x4cbe94*/
          break; /*0x4cbe94*/
        LOWORD(v15) = a3; /*0x4cbe32*/
      }
    }
LABEL_23:
    v29 = ++v13; /*0x4cbe9d*/
    if ( v13 >= a6 ) /*0x4cbea1*/
      goto LABEL_24; /*0x4cbea1*/
    v8 = a4; /*0x4cbcd8*/
  }
  v20 = (v14 + 2) & 7; /*0x4cbdb3*/
  while ( 1 ) /*0x4cbdbe*/
  {
    v21 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))this->AbstractClass; /*0x4cbdbe*/
    LOWORD(v32) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x4cbdd0*/
    HIWORD(v32) = HIWORD(g_DDrawSurfaceManager.scenario[v20 + 82]) + HIWORD(a3); /*0x4cbdd9*/
    a3 = v32; /*0x4cbde8*/
    v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4cbdf3*/
    if ( !v21[107](this, v22, (v14 + 2) & 7, -1, 0, 1) ) /*0x4cbdfb*/
      break; /*0x4cbdfb*/
    v13 = v29; /*0x4cbe0d*/
    ++a5; /*0x4cbe12*/
    LOWORD(v15) = a3; /*0x4cbe18*/
    if ( a5 >= v29 ) /*0x4cbe1c*/
      goto LABEL_18; /*0x4cbe1c*/
  }
  *a2 = a3; /*0x4cbec8*/
  return a2; /*0x4cbeb1*/
}



// ==== 0x004CBEF0  sub_4CBEF0  this=-  sig=ida-proto ====
int sub_4CBEF0()
{
  dword_8B3BB8 = 0; /*0x4cbef2*/
  dword_8B3BBC = 0; /*0x4cbef7*/
  dword_8B3BC0 = 0; /*0x4cbefc*/
  dword_8B3BC4 = 0; /*0x4cbf01*/
  return 0; /*0x4cbf06*/
}



// ==== 0x004CBF10  sub_4CBF10  this=-  sig=ida-proto ====
void sub_4CBF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cbf1c*/
  dbl_8B3BD0 = Math::Sqrt(v0 + v0); /*0x4cbf2e*/
}



// ==== 0x004CBF40  sub_4CBF40  this=-  sig=ida-proto ====
void sub_4CBF40()
{
  dbl_8B3C20 = dbl_8B3BD0 / 60.0; /*0x4cbf4c*/
}



// ==== 0x004CBF60  sub_4CBF60  this=-  sig=ida-proto ====
void sub_4CBF60()
{
  dbl_8B3C08 = 1.0 / dbl_8B3C20; /*0x4cbf6c*/
}



// ==== 0x004CBF80  sub_4CBF80  this=-  sig=ida-proto ====
void sub_4CBF80()
{
  dbl_8B3C00 = 0.0174532925199433 * 45.0; /*0x4cbf8c*/
}



// ==== 0x004CBFA0  sub_4CBFA0  this=-  sig=ida-proto ====
void sub_4CBFA0()
{
  dbl_8B3BD8 = 0.0174532925199433 * 60.0; /*0x4cbfac*/
}



// ==== 0x004CBFC0  sub_4CBFC0  this=-  sig=ida-proto ====
void sub_4CBFC0()
{
  dbl_8B3BB0 = 0.0174532925199433 * 90.0; /*0x4cbfcc*/
}



// ==== 0x004CBFE0  sub_4CBFE0  this=-  sig=ida-proto ====
__int64 sub_4CBFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3BB0 - dbl_8B3BD8); /*0x4cbff2*/
  result = Math::RoundToInt(v0 * dbl_8B3BD0 * 0.5); /*0x4cc006*/
  dword_8B3C28 = result; /*0x4cc00b*/
  return result; /*0x4cc010*/
}



// ==== 0x004CC020  sub_4CC020  this=-  sig=ida-proto ====
void sub_4CC020()
{
  dbl_8B3BE0 = Math::ArcTan((double)dword_8B3C28 * 0.00390625); /*0x4cc037*/
}



// ==== 0x004CC050  sub_4CC050  this=-  sig=ida-proto ====
void sub_4CC050()
{
  dbl_8B3BF8 = Math::ArcTan((double)(2 * dword_8B3C28) / dbl_8B3BD0); /*0x4cc072*/
}



// ==== 0x004CC080  sub_4CC080  this=-  sig=ida-proto ====
__int64 sub_4CC080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3C28) + 0.5); /*0x4cc09b*/
  dword_8B3C1C = result; /*0x4cc0a0*/
  return result; /*0x4cc0a6*/
}



// ==== 0x004CC0B0  sub_4CC0B0  this=-  sig=ida-proto ====
int sub_4CC0B0()
{
  word_8B3BC8 = 0; /*0x4cc0b2*/
  word_8B3BCA = 0; /*0x4cc0b8*/
  return 0; /*0x4cc0be*/
}



// ==== 0x004CC0C0  sub_4CC0C0  this=-  sig=ida-proto ====
int sub_4CC0C0()
{
  dword_8B3BE8 = 0; /*0x4cc0c2*/
  dword_8B3BEC = 0; /*0x4cc0c7*/
  dword_8B3BF0 = 0; /*0x4cc0cc*/
  return 0; /*0x4cc0d1*/
}



// ==== 0x004CC0E0  sub_4CC0E0  this=-  sig=ida-proto ====
int sub_4CC0E0()
{
  dword_8B3C18 = 0; /*0x4cc0e5*/
  dword_8B3C10 = 128; /*0x4cc0ef*/
  dword_8B3C14 = 128; /*0x4cc0f4*/
  return 128; /*0x4cc0f9*/
}



// ==== 0x004CC100  TrajectoryHelper::FindFirstObstacle  this=IUnknown  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::FindFirstObstacle(_DWORD *a1, int *a2, int a3, #375 *a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // ebp
  signed int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  _BYTE *v12; // esi
  void *v13; // eax
  int v14; // esi
  int v15; // edi
  _DWORD *result; // eax
  bool v17; // cc
  int v18; // [esp+10h] [ebp-34h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h]
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  int v25; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+28h] [ebp-1Ch] BYREF
  _BYTE *v27; // [esp+2Ch] [ebp-18h]
  _BYTE *v28; // [esp+30h] [ebp-14h]
  int v29; // [esp+34h] [ebp-10h] BYREF
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]

  if ( !*(_BYTE *)(a3 + 662) && !*(_BYTE *)(a3 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  v5 = *a2; /*0x4cc12d*/
  v6 = a2[1]; /*0x4cc136*/
  LOWORD(v21) = *a1 / 256; /*0x4cc151*/
  HIWORD(v21) = a1[1] / 256; /*0x4cc156*/
  v25 = v21; /*0x4cc15f*/
  LOWORD(v18) = v5 / 256; /*0x4cc171*/
  HIWORD(v18) = v6 / 256; /*0x4cc184*/
  v26 = v18; /*0x4cc18d*/
  v7 = abs32((__int16)v21 - (__int16)v18); /*0x4cc1aa*/
  v8 = abs32(SHIWORD(v21) - SHIWORD(v18)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  v9 = v6 - a1[1]; /*0x4cc1bf*/
  v10 = v5 - *a1; /*0x4cc1c5*/
  v11 = a2[2] - a1[2]; /*0x4cc1ca*/
  if ( v7 ) /*0x4cc1ce*/
  {
    v30 = v10 / v7; /*0x4cc1f0*/
    v31 = v9 / v7; /*0x4cc1fb*/
    v32 = v11 / v7; /*0x4cc1ff*/
  }
  else
  {
    v30 = 0; /*0x4cc1d6*/
    v31 = 0; /*0x4cc1da*/
    v32 = 0; /*0x4cc1de*/
  }
  v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v25); /*0x4cc216*/
  v28 = v12; /*0x4cc21e*/
  v27 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v26); /*0x4cc229*/
  v13 = v12; /*0x4cc22f*/
  v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  v22 = 0; /*0x4cc23b*/
  v20 = 0; /*0x4cc23f*/
  v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    v14 = *a1 + v19; /*0x4cc254*/
    v15 = v20 + a1[1]; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, a1[2] + v22, a3, a4); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
    LOWORD(v23) = v14 / 256; /*0x4cc2a2*/
    HIWORD(v23) = v15 / 256; /*0x4cc2b5*/
    v29 = v23; /*0x4cc2be*/
    v13 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v29); /*0x4cc2c2*/
    v19 += v30; /*0x4cc2dd*/
    v17 = ++v24 < v7; /*0x4cc2ee*/
    v20 += v31; /*0x4cc2f4*/
    v22 += v32; /*0x4cc2f8*/
    if ( !v17 ) /*0x4cc2fc*/
      return 0; /*0x4cc2fc*/
  }
  return result; /*0x4cc304*/
}



// ==== 0x004CC310  TrajectoryHelper::FindFirstImpenetrableObstacle  this=TrajectoryHelper  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::FindFirstImpenetrableObstacle(_DWORD *a1, int *a2, int a3, #375 *a4)
{
  _DWORD *FirstObstacle; // eax
  _DWORD *v5; // esi

  FirstObstacle = TrajectoryHelper::FindFirstObstacle(a1, a2, *(_DWORD *)(a3 + 160), a4); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType(FirstObstacle, -1, -1)
    && *(_BYTE *)(*(_DWORD *)(a3 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return v5; /*0x4cc353*/
  }
}



// ==== 0x004CC360  TrajectoryHelper::GetObstacle  this=TrajectoryHelper  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::GetObstacle(
        _BYTE *a1,
        _BYTE *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        #375 *other)
{
  _BYTE *v8; // ebx
  _DWORD *v10; // esi
  int SlopeIndex; // ebx
  int v12; // ebx
  int v13; // eax
  bool v14; // al
  #375 *v15; // ecx
  _DWORD *v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  double v20; // st7
  int *v21; // eax
  int v22; // esi
  int v23; // ebp
  int v24; // edx
  int v25; // eax
  int *v26; // eax
  int v27; // ecx
  signed int v28; // ecx
  signed int v29; // esi
  signed int v30; // edi
  signed int v31; // eax
  bool v32; // cc
  _DWORD *v33; // esi
  int v34; // ebx
  int v35; // ebx
  int v37; // eax
  bool v38; // al
  #375 *v39; // ecx
  int v41; // [esp+20h] [ebp-24h]
  _DWORD *v42; // [esp+20h] [ebp-24h]
  int v43; // [esp+24h] [ebp-20h] BYREF
  _BYTE *v44; // [esp+28h] [ebp-1Ch]
  int v45; // [esp+2Ch] [ebp-18h] BYREF
  int v46; // [esp+30h] [ebp-14h]
  int v47; // [esp+34h] [ebp-10h]
  char v48[12]; // [esp+38h] [ebp-Ch] BYREF

  v8 = a2; /*0x4cc36b*/
  LOWORD(v41) = a4 / 256; /*0x4cc382*/
  HIWORD(v41) = a5 / 256; /*0x4cc3a0*/
  v44 = a1; /*0x4cc3a9*/
  v43 = v41; /*0x4cc3ad*/
  v10 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v43); /*0x4cc3b6*/
  v42 = v10; /*0x4cc3bc*/
  if ( *(_BYTE *)(a7 + 662) ) /*0x4cc3c0*/
  {
    SlopeIndex = Cell::GetSlopeIndex((int)v10); /*0x4cc3d5*/
    if ( SlopeIndex - Cell::GetSlopeIndex(a3) >= 4 ) /*0x4cc3e1*/
    {
      v12 = Cell::GetSlopeIndex((int)v10); /*0x4cc3ec*/
      if ( v12 - Cell::GetSlopeIndex((int)a1) > 0 ) /*0x4cc3f7*/
        goto LABEL_16; /*0x4cc3f7*/
    }
    v8 = a2; /*0x4cc3fd*/
  }
  if ( *(_BYTE *)(a7 + 664) ) /*0x4cc405*/
  {
    v13 = v10[17]; /*0x4cc413*/
    v14 = v13 != -1 && *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v13] + 680); /*0x4cc432*/
    if ( v10 != (_DWORD *)v8 /*0x4cc47c*/
      && v14
      && a1[283] <= v8[283]
      && (!LOBYTE(dword_8871E0[1].?[3])
       || (v15 = *(#375 **)&dword_A8022C->AbstractClass[4 * v10[20]]) == 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v15, other)) )
    {
LABEL_16:
      v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v10 + 72))(v10, &v45); /*0x4cc489*/
      v17 = a4 - *v16; /*0x4cc49c*/
      v18 = v16[1]; /*0x4cc4a2*/
      v19 = v16[2]; /*0x4cc4a7*/
      v46 = a5 - v18; /*0x4cc4ae*/
      v47 = a6 - v19; /*0x4cc4b8*/
      v45 = v17; /*0x4cc4bc*/
      v20 = Math::Sqrt( /*0x4cc4e1*/
              (double)v17 * (double)v17
            + (double)(a6 - v19) * (double)(a6 - v19)
            + (double)(a5 - v18) * (double)(a5 - v18));
      if ( (int)Math::RoundToInt(v20) <= 85 ) /*0x4cc4f1*/
        return v10; /*0x4cc665*/
      v21 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a1 + 72))(a1, &v45); /*0x4cc501*/
      v22 = *v21; /*0x4cc504*/
      v23 = v21[1]; /*0x4cc50a*/
      v24 = v21[2]; /*0x4cc50d*/
      v25 = *(_DWORD *)a2; /*0x4cc510*/
      v47 = v24; /*0x4cc512*/
      v26 = (int *)(*(int (__thiscall **)(_BYTE *, char *))(v25 + 72))(a2, v48); /*0x4cc51b*/
      v27 = *v26; /*0x4cc51e*/
      v46 = v26[1]; /*0x4cc523*/
      v47 = v26[2]; /*0x4cc52a*/
      v28 = abs32(v22 - v27); /*0x4cc539*/
      v29 = abs32(v23 - v46); /*0x4cc548*/
      v30 = abs32(v17); /*0x4cc555*/
      v31 = abs32(a5 - v18); /*0x4cc55a*/
      v32 = v29 <= v28; /*0x4cc55c*/
      if ( v29 < v28 ) /*0x4cc55e*/
      {
        if ( v31 > v30 ) /*0x4cc562*/
        {
LABEL_22:
          v33 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v43); /*0x4cc574*/
          if ( *(_BYTE *)(a7 + 662) ) /*0x4cc589*/
          {
            v34 = Cell::GetSlopeIndex(a3); /*0x4cc59e*/
            if ( Cell::GetSlopeIndex((int)v33) - v34 >= 4 ) /*0x4cc5aa*/
            {
              v35 = Cell::GetSlopeIndex((int)v44); /*0x4cc5b7*/
              if ( Cell::GetSlopeIndex((int)v33) - v35 > 0 ) /*0x4cc5c2*/
                return v42; /*0x4cc5cf*/
            }
          }
          if ( *(_BYTE *)(a7 + 664) ) /*0x4cc5d2*/
          {
            v37 = v33[17]; /*0x4cc5e0*/
            v38 = v37 != -1 && *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v37] + 680); /*0x4cc5ff*/
            if ( v33 != (_DWORD *)a2 && v38 && v44[283] <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE(dword_8871E0[1].?[3]) ) /*0x4cc627*/
                return v42; /*0x4cc627*/
              v39 = *(#375 **)&dword_A8022C->AbstractClass[4 * v33[20]]; /*0x4cc639*/
              if ( !v39 || !(unsigned __int8)HouseClass::IsAlliedWith(v39, other) ) /*0x4cc645*/
                return v42; /*0x4cc64c*/
            }
          }
          return 0; /*0x4cc64c*/
        }
        v32 = v29 <= v28; /*0x4cc564*/
      }
      if ( v32 || v30 <= v31 ) /*0x4cc56e*/
        return v42; /*0x4cc659*/
      goto LABEL_22; /*0x4cc56e*/
    }
  }
  return 0; /*0x4cc5c8*/
}



// ==== 0x004CC680  sub_4CC680  this=-  sig=ida-proto ====
BOOL __fastcall sub_4CC680(int a1, int a2, int a3)
{
  int SlopeIndex; // ebx
  int v5; // esi
  BOOL result; // eax

  SlopeIndex = Cell::GetSlopeIndex(a2); /*0x4cc690*/
  result = 0; /*0x4cc6c3*/
  if ( Cell::GetSlopeIndex(a3) - SlopeIndex >= 4 ) /*0x4cc69e*/
  {
    v5 = Cell::GetSlopeIndex(a1); /*0x4cc6a9*/
    if ( Cell::GetSlopeIndex(a3) - v5 > 0 ) /*0x4cc6b4*/
      return 1; /*0x4cc69e*/
  }
  return result; /*0x4cc6b6*/
}



// ==== 0x004CC750  sub_4CC750  this=-  sig=ida-proto ====
int sub_4CC750()
{
  dword_8B3C30 = 0; /*0x4cc752*/
  dword_8B3C34 = 0; /*0x4cc757*/
  dword_8B3C38 = 0; /*0x4cc75c*/
  dword_8B3C3C = 0; /*0x4cc761*/
  return 0; /*0x4cc766*/
}



// ==== 0x004CC770  TechnoClass::UpdateThunk  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::UpdateThunk(TechnoClass *this)
{
  char *v1; // eax

  if ( !this->RadioClass ) /*0x4cc770*/
    return 0; /*0x4cc788*/
  v1 = (char *)this->RadioClass - 1; /*0x4cc776*/
  LOBYTE(this->?) = 0; /*0x4cc777*/
  this->RadioClass = v1; /*0x4cc77d*/
  if ( ((unsigned __int8)v1 & 1) != 0 ) /*0x4cc77f*/
    LOBYTE(this->?) = 1; /*0x4cc781*/
  return 1; /*0x4cc787*/
}



// ==== 0x004CC790  sub_4CC790  this=-  sig=ida-proto ====
void sub_4CC790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cc79c*/
  dbl_8B3C60 = Math::Sqrt(v0 + v0); /*0x4cc7ae*/
}



// ==== 0x004CC7C0  sub_4CC7C0  this=-  sig=ida-proto ====
void sub_4CC7C0()
{
  dbl_8B3CB0 = dbl_8B3C60 / 60.0; /*0x4cc7cc*/
}



// ==== 0x004CC7E0  sub_4CC7E0  this=-  sig=ida-proto ====
void sub_4CC7E0()
{
  dbl_8B3C98 = 1.0 / dbl_8B3CB0; /*0x4cc7ec*/
}



// ==== 0x004CC800  sub_4CC800  this=-  sig=ida-proto ====
void sub_4CC800()
{
  dbl_8B3C90 = 0.0174532925199433 * 45.0; /*0x4cc80c*/
}



// ==== 0x004CC820  sub_4CC820  this=-  sig=ida-proto ====
void sub_4CC820()
{
  dbl_8B3C68 = 0.0174532925199433 * 60.0; /*0x4cc82c*/
}



// ==== 0x004CC840  sub_4CC840  this=-  sig=ida-proto ====
void sub_4CC840()
{
  dbl_8B3C40 = 0.0174532925199433 * 90.0; /*0x4cc84c*/
}



// ==== 0x004CC860  sub_4CC860  this=-  sig=ida-proto ====
__int64 sub_4CC860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3C40 - dbl_8B3C68); /*0x4cc872*/
  result = Math::RoundToInt(v0 * dbl_8B3C60 * 0.5); /*0x4cc886*/
  dword_8B3CB8 = result; /*0x4cc88b*/
  return result; /*0x4cc890*/
}



// ==== 0x004CC8A0  sub_4CC8A0  this=-  sig=ida-proto ====
void sub_4CC8A0()
{
  dbl_8B3C70 = Math::ArcTan((double)dword_8B3CB8 * 0.00390625); /*0x4cc8b7*/
}



// ==== 0x004CC8D0  sub_4CC8D0  this=-  sig=ida-proto ====
void sub_4CC8D0()
{
  dbl_8B3C88 = Math::ArcTan((double)(2 * dword_8B3CB8) / dbl_8B3C60); /*0x4cc8f2*/
}



// ==== 0x004CC900  sub_4CC900  this=-  sig=ida-proto ====
__int64 sub_4CC900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3CB8) + 0.5); /*0x4cc91b*/
  dword_8B3CAC = result; /*0x4cc920*/
  return result; /*0x4cc926*/
}



// ==== 0x004CC930  sub_4CC930  this=-  sig=ida-proto ====
int sub_4CC930()
{
  dword_8B3C58 = 0; /*0x4cc932*/
  return 0; /*0x4cc93e*/
}



// ==== 0x004CC940  sub_4CC940  this=-  sig=ida-proto ====
int sub_4CC940()
{
  dword_8B3C78 = 0; /*0x4cc942*/
  dword_8B3C7C = 0; /*0x4cc947*/
  dword_8B3C80 = 0; /*0x4cc94c*/
  return 0; /*0x4cc951*/
}



// ==== 0x004CC960  sub_4CC960  this=-  sig=ida-proto ====
int sub_4CC960()
{
  dword_8B3CA8 = 0; /*0x4cc965*/
  dword_8B3CA0 = 128; /*0x4cc96f*/
  dword_8B3CA4 = 128; /*0x4cc974*/
  return 128; /*0x4cc979*/
}



// ==== 0x004CC980  sub_4CC980  this=-  sig=ida-proto ====
int sub_4CC980()
{
  dword_8B3C48 = 0; /*0x4cc982*/
  dword_8B3C4C = 0; /*0x4cc987*/
  dword_8B3C50 = 0; /*0x4cc98c*/
  dword_8B3C54 = 0; /*0x4cc991*/
  return 0; /*0x4cc996*/
}



// ==== 0x004CC9A0  FlyLocomotionClass::LocomotionClass  this=FlyLocomotionClass  sig=csp ====
int __thiscall FlyLocomotionClass::LocomotionClass(FlyLocomotionClass *this)
{
  int v2; // edx

  LocomotionClass::Init((LocomotionClass *)this); /*0x4cc9a3*/
  this->AirportBound = 0; /*0x4cc9ad*/
  this->MovingDestination[0] = dword_8B3C78; /*0x4cc9b6*/
  this->MovingDestination[1] = dword_8B3C7C; /*0x4cc9be*/
  this->MovingDestination[2] = dword_8B3C80; /*0x4cc9c7*/
  this->XYZ2[0] = dword_8B3C78; /*0x4cc9d3*/
  this->XYZ2[1] = dword_8B3C7C; /*0x4cc9dc*/
  v2 = dword_8B3C80; /*0x4cc9df*/
  this->TargetSpeed[1] = 0; /*0x4cc9e5*/
  this->CurrentSpeed[1] = 0; /*0x4cc9e8*/
  this->HasMoveOrder = 0; /*0x4cc9eb*/
  this->FlightLevel = 0; /*0x4cc9ee*/
  this->CurrentSpeed[0] = 0; /*0x4cc9f1*/
  *(_DWORD *)&this->IsTakingOff = 0; /*0x4cc9f4*/
  this->__pad_4F[1] = 0; /*0x4cc9f7*/
  this->__pad_4F[2] = 0; /*0x4cc9fa*/
  this->__pad_4F[3] = 0; /*0x4cc9fd*/
  this->FlyLocomotionClass_field_bool_53 = 0; /*0x4cca00*/
  this->FlyLocomotionClass_field_54 = 0; /*0x4cca03*/
  this->FlyLocomotionClass_field_58 = 0; /*0x4cca06*/
  this->IsElevating = 0; /*0x4cca09*/
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cca0c*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cca12*/
  this->XYZ2[2] = v2; /*0x4cca1b*/
  return (int)this->LocomotionClass; /*0x4cca1e*/
}



// ==== 0x004CCA20  JumpjetLocomotionClass::StubReturnZero_7  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_7(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // esi

  v2 = StreamClass::ResetPosition((LocomotionClass *)this, (int)a2); /*0x4cca32*/
  if ( !v2 ) /*0x4cca36*/
  {
    if ( a2 && (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 2 && *(_BYTE *)(a2[433] + 3597) ) /*0x4cca4e*/
    {
      LOBYTE(this->?) = 1; /*0x4cca5b*/
      return 0; /*0x4cca61*/
    }
    LOBYTE(this->?) = 0; /*0x4cca64*/
  }
  return v2; /*0x4cca5a*/
}



// ==== 0x004CCA70  FlyLocomotionClass::method_4CCA70  this=FlyLocomotionClass  sig=csp ====
void __thiscall sub_4CCA70(FlyLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cca70*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cca76*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4cca7d*/
}



// ==== 0x004CCA90  JumpjetLocomotionClass::ComputeFloatExpression  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ComputeFloatExpression(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles) || this->?->? > 0.0; /*0x4ccab3*/
}



// ==== 0x004CCAC0  FlyLocomotionClass::ComputeFloatExpression_0  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ComputeFloatExpression_0(FlyLocomotionClass *this)
{
  return *(double *)this->CurrentSpeed != 0.0; /*0x4ccad6*/
}



// ==== 0x004CCAE0  JumpjetLocomotionClass::GetMovementCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x4ccae9*/
  {
    result = a2; /*0x4ccaf0*/
    Speed = this->Speed; /*0x4ccaf7*/
    Climb = this->Climb; /*0x4ccafa*/
    v5 = (float *)a2; /*0x4ccafd*/
    *a2 = this->TurnRate; /*0x4ccaff*/
  }
  else
  {
    result = a2; /*0x4ccb0c*/
    Speed = dword_8B3C7C; /*0x4ccb16*/
    Climb = *(float *)&dword_8B3C80; /*0x4ccb1c*/
    v5 = (float *)a2; /*0x4ccb22*/
    *a2 = dword_8B3C78; /*0x4ccb24*/
  }
  *((_DWORD *)v5 + 1) = Speed; /*0x4ccb01*/
  v5[2] = Climb; /*0x4ccb04*/
  return result; /*0x4ccb07*/
}



// ==== 0x004CCB40  FlyLocomotionClass::ProcessLocomotionStep  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ProcessLocomotionStep(FlyLocomotionClass *this)
{
  int v1; // eax
  FootClass *Owner; // ecx
  char result; // al
  FootClass *v4; // ecx

  if ( !this->IsLanding && !this->IsTakingOff && *(double *)this->TargetSpeed >= 1.0 && !*(_DWORD *)&this->HasMoveOrder ) /*0x4ccb65*/
  {
    v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x4ccb71*/
    *(_DWORD *)&this->HasMoveOrder = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 188))(v1); /*0x4ccb81*/
  }
  Owner = this->?; /*0x4ccb84*/
  if ( Owner->? > 0 /*0x4ccb9e*/
    && !this->IsLanding
    && !this->IsTakingOff
    && (*((unsigned __int8 (__thiscall **)(FootClass *))Owner->TechnoClass + 128))(Owner) )
  {
    (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 123))(this->?); /*0x4ccbad*/
  }
  JumpjetLocomotionClass::ProcessRotation((JumpjetLocomotionClass *)((char *)this - 4)); /*0x4ccbb8*/
  DamageArea::ApplyScatter((DamageArea *)this - 1); /*0x4ccbbf*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this); /*0x4ccbc7*/
  if ( result ) /*0x4ccbcc*/
  {
    v4 = this->?; /*0x4ccbd4*/
    if ( v4->? ) /*0x4ccbd7*/
    {
      if ( v4->? > 0 /*0x4ccc2d*/
        && (*(_DWORD *)&this->AirportBound != dword_8B3C78
         || this->MovingDestination[0] != dword_8B3C7C
         || this->MovingDestination[1] != dword_8B3C80)
        && !this->IsLanding
        && !this->IsTakingOff
        && (*((int (__thiscall **)(FootClass *))v4->TechnoClass + 114))(v4) > 0 )
      {
        LandFootClassAtPosition( /*0x4ccc49*/
          (int)this - 4,
          this->MovingDestination[1],
          1,
          *(float *)&this->AirportBound,
          this->MovingDestination[0],
          this->MovingDestination[1]);
      }
      if ( this->?->? > 0 ) /*0x4ccc56*/
        FootClass::ProcessDeployMission((FootClass *)((char *)this - 4)); /*0x4ccc5a*/
      JumpjetLocomotionClass::IsMapCoordVisible((JumpjetLocomotionClass *)((char *)this - 4)); /*0x4ccc61*/
      return (*(char (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x4ccc69*/
    }
    else
    {
      return 0; /*0x4ccbe1*/
    }
  }
  return result; /*0x4ccbce*/
}



// ==== 0x004CCC80  FlyLocomotionClass::UpdateFootLocomotion  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFootLocomotion(FlyLocomotionClass *this, int a2, int a3, int a4)
{
  FlyLocomotionClass *v4; // ebx
  int v5; // ebp
  FlyLocomotionClass *v6; // eax
  FootClass **p_Owner; // edi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  int *location; // eax
  FootClass *v14; // ecx
  int v15; // esi
  int GroundHeight; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // esi
  char v20; // al
  FootClass *Owner; // ecx
  FootClass *v22; // ecx
  int v23; // eax
  _DWORD v25[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = this; /*0x4ccc84*/
  v5 = a2; /*0x4ccc89*/
  if ( (unsigned __int16)(a2 / 256) != (unsigned __int16)(*(_DWORD *)&this->AirportBound / 256) /*0x4ccce0*/
    || (unsigned __int16)(a3 / 256) != (unsigned __int16)(this->MovingDestination[0] / 256)
    || (LOBYTE(v6) = this->IsLanding, !(_BYTE)v6) )
  {
    p_Owner = &this->?; /*0x4ccce9*/
    LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x4cccee*/
    if ( !(_BYTE)v6 ) /*0x4cccf6*/
    {
      LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 224))(*p_Owner); /*0x4ccd00*/
      if ( !(_BYTE)v6 ) /*0x4ccd08*/
      {
        LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 117))(*p_Owner); /*0x4ccd12*/
        if ( !(_BYTE)v6 ) /*0x4ccd1a*/
        {
          LOBYTE(v6) = (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 118))(*p_Owner); /*0x4ccd24*/
          if ( !(_BYTE)v6 ) /*0x4ccd2c*/
          {
            LOBYTE(v6) = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v4->LocomotionClass + 96))(v4); /*0x4ccd35*/
            if ( (_BYTE)v6 ) /*0x4ccd3a*/
            {
              v8 = a3; /*0x4ccd45*/
              v9 = a4; /*0x4ccd4b*/
              if ( v5 == dword_8B3C78 && a3 == dword_8B3C7C && a4 == dword_8B3C80 ) /*0x4ccd67*/
              {
                v10 = 0; /*0x4ccd6f*/
                v11 = *p_Owner == 0; /*0x4ccd71*/
                this = 0; /*0x4ccd73*/
                if ( !v11 ) /*0x4ccd77*/
                {
                  v12 = ComPtr::ReleaseAndSet((ComPtr *)&this, &v4->?); /*0x4ccd7e*/
                  if ( v12 < 0 && v12 != -2147467262 ) /*0x4ccd8c*/
                    WinAPI::Wrapper(v12); /*0x4ccd8f*/
                  if ( this ) /*0x4ccd9a*/
                    v10 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 12))(this); /*0x4ccda2*/
                }
                if ( (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v10 /*0x4ccdb9*/
                  && !v4->IsTakingOff
                  || v4->IsLanding )
                {
                  *(_DWORD *)&v4->AirportBound = dword_8B3C78; /*0x4ccde8*/
                  v4->MovingDestination[0] = dword_8B3C7C; /*0x4ccdf1*/
                  v4->MovingDestination[1] = dword_8B3C80; /*0x4ccdf9*/
                }
                else
                {
                  location = (*p_Owner)->?; /*0x4ccdc2*/
                  *(_DWORD *)&v4->AirportBound = *location; /*0x4ccdc9*/
                  v4->MovingDestination[0] = location[1]; /*0x4ccdd2*/
                  v4->MovingDestination[1] = location[2]; /*0x4ccdd8*/
                  LocomotionClass::CheckBridgeBlock((LocomotionClass *)&v4[-1].IsElevating); /*0x4ccddb*/
                }
                v6 = this; /*0x4ccdfc*/
                LOBYTE(v4->FlyLocomotionClass_field_58) = 0; /*0x4cce00*/
                if ( v6 ) /*0x4cce06*/
                  LOBYTE(v6) = (*(char (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 8))(v6); /*0x4cce0f*/
              }
              else
              {
                *(_DWORD *)&v4->AirportBound = v5; /*0x4cce1c*/
                v4->MovingDestination[0] = v8; /*0x4cce1f*/
                v4->MovingDestination[1] = v9; /*0x4cce22*/
                v14 = *p_Owner; /*0x4cce25*/
                if ( (*p_Owner)->? && v14->? ) /*0x4cce31*/
                {
                  v25[0] = v5; /*0x4cce3b*/
                  v25[1] = v8; /*0x4cce3f*/
                  v25[2] = v9; /*0x4cce43*/
                  v15 = (*((int (__thiscall **)(FootClass *))v14->TechnoClass + 33))(v14); /*0x4cce4f*/
                  GroundHeight = Cell::GetGroundHeight(v25); /*0x4cce64*/
                  v4->MovingDestination[1] = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 188))(v15) + GroundHeight; /*0x4cce6e*/
                }
                v17 = 0; /*0x4cce73*/
                v11 = *p_Owner == 0; /*0x4cce75*/
                a2 = 0; /*0x4cce77*/
                if ( !v11 ) /*0x4cce7b*/
                {
                  v18 = ComPtr::ReleaseAndSet((ComPtr *)&a2, &v4->?); /*0x4cce82*/
                  if ( v18 < 0 && v18 != -2147467262 ) /*0x4cce90*/
                    WinAPI::Wrapper(v18); /*0x4cce93*/
                  v17 = a2; /*0x4cce98*/
                }
                v19 = 0; /*0x4cce9c*/
                if ( v17 ) /*0x4ccea0*/
                  v19 = (*(int (__stdcall **)(int))(*(_DWORD *)v17 + 12))(v17); /*0x4ccea8*/
                LOBYTE(v4->XYZ2[2]) = 1; /*0x4cceaa*/
                if ( (*p_Owner)->? > 0 /*0x4ccecf*/
                  && !v4->IsTakingOff
                  && (v4->IsLanding
                   || (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v19) )
                {
                  TechnoClass::GetData((TechnoClass *)&v4[-1].IsElevating); /*0x4cced4*/
                }
                if ( v4->MovingDestination[1] <= Cell::GetGroundHeight(&v4->AirportBound) + 120 ) /*0x4cceef*/
                {
                  Owner = v4->?; /*0x4ccef8*/
                  if ( Owner->? && Owner->? ) /*0x4ccf08*/
                  {
                    v20 = 1; /*0x4ccf12*/
                  }
                  else
                  {
                    v22 = v4->?; /*0x4ccf16*/
                    this = 0; /*0x4ccf18*/
                    if ( v22 ) /*0x4ccf22*/
                    {
                      v23 = ComPtr::ReleaseAndSet((ComPtr *)&this, &v4->?); /*0x4ccf29*/
                      if ( v23 < 0 && v23 != -2147467262 ) /*0x4ccf37*/
                        WinAPI::Wrapper(v23); /*0x4ccf3a*/
                    }
                    if ( JumpjetLocomotionClass::CheckWindowsErrorWrapper_0((JumpjetLocomotionClass *)&this, 0) ) /*0x4ccf45*/
                      goto LABEL_54; /*0x4ccf45*/
                    if ( !this ) /*0x4ccf54*/
                      WinAPI::Wrapper(-2147467261); /*0x4ccf5b*/
                    if ( !(*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 32))(this) ) /*0x4ccf67*/
                    {
LABEL_54:
                      Release3COM((ObjectClass *)&this); /*0x4ccf7f*/
                      v20 = 0; /*0x4ccf84*/
                    }
                    else
                    {
                      Release3COM((ObjectClass *)&this); /*0x4ccf72*/
                      v20 = 1; /*0x4ccf77*/
                    }
                  }
                }
                else
                {
                  v20 = 1; /*0x4ccef1*/
                }
                LOBYTE(v4->FlyLocomotionClass_field_58) = v20; /*0x4ccf86*/
                if ( (*((int (__thiscall **)(FootClass *))(*p_Owner)->TechnoClass + 11))(*p_Owner) == 2 /*0x4ccf9d*/
                  && !*((_BYTE *)(*p_Owner)[1].? + 3594) )
                {
                  LOBYTE(v4->FlyLocomotionClass_field_58) = 1; /*0x4ccfa7*/
                }
                LOBYTE(v6) = a2; /*0x4ccfab*/
                if ( a2 ) /*0x4ccfb1*/
                  LOBYTE(v6) = (*(char (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4ccfb6*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v6; /*0x4cce12*/
}



// ==== 0x004CCFD0  FlyLocomotionClass::ComputeMoveToPosition  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ComputeMoveToPosition(FlyLocomotionClass *this)
{
  FlyLocomotionClass *v1; // esi
  char result; // al
  FootClass *Owner; // ecx
  int v4; // eax
  int v5; // edi
  TechnoClass *v6; // edi
  void *ClosestPlacementCell; // eax
  void *v8; // eax
  int v9; // eax
  void (__thiscall **vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v11; // eax
  char (__thiscall **v12)(FootClass *, CellClass *, int); // edi
  CellClass *v13; // eax
  int *v14; // ecx
  char *p_AirportBound; // esi
  int v16; // [esp+8h] [ebp-18h] BYREF
  __int16 v17[2]; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x4ccfd4*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x4ccfdc*/
  if ( result ) /*0x4ccfe1*/
  {
    Owner = v1->?; /*0x4ccfe7*/
    v4 = Owner->?[0]; /*0x4ccff0*/
    v5 = Owner->?[1]; /*0x4ccff6*/
    GroundHeight = Owner->?[2]; /*0x4ccffc*/
    LOWORD(this) = v4 / 256; /*0x4cd00c*/
    HIWORD(this) = v5 / 256; /*0x4cd01f*/
    if ( !Owner->? /*0x4cd050*/
      && !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, 1)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))v1->?->TechnoClass + 311))(v1->?) )
    {
      this = (FlyLocomotionClass *)*JumpjetLocomotionClass::ClampToCellBounds( /*0x4cd072*/
                                      (JumpjetLocomotionClass *)&stru_87F5F0.__pad_58[416],
                                      v17,
                                      (__int16 *)&this,
                                      1);
    }
    v6 = (TechnoClass *)v1->?; /*0x4cd076*/
    if ( v6 && (*((int (__thiscall **)(FootClass *))v6->RadioClass + 11))(v1->?) == 2 ) /*0x4cd08b*/
    {
      if ( this == (FlyLocomotionClass *)dword_8B3C58 ) /*0x4cd09d*/
      {
        (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))v1->?->TechnoClass + 91))( /*0x4cd0cd*/
          &v1->?->?,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
LABEL_21:
        result = dword_8B3C78; /*0x4cd273*/
        p_AirportBound = &v1->AirportBound; /*0x4cd278*/
        *(_DWORD *)p_AirportBound = dword_8B3C78; /*0x4cd27b*/
        *((_DWORD *)p_AirportBound + 1) = dword_8B3C7C; /*0x4cd283*/
        *((_DWORD *)p_AirportBound + 2) = dword_8B3C80; /*0x4cd28c*/
        return result; /*0x4cd28c*/
      }
      if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 1 ) /*0x4cd0e6*/
      {
        ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(v6); /*0x4cd0ea*/
      }
      else
      {
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x4cd10f*/
        ClosestPlacementCell = InfantryClass::FindNearbyCell((InfantryClass *)v6, (int)v8); /*0x4cd117*/
      }
      return (*((char (__thiscall **)(FootClass *, void *, int))v1->?->TechnoClass + 288))( /*0x4cd0f7*/
               v1->?,
               ClosestPlacementCell,
               1);
    }
    else
    {
      v16 = 0; /*0x4cd161*/
      v9 = *LayerClass::Pathfinding_Find( /*0x4cd174*/
              &stru_87F5F0.__pad_58[416],
              (int)&v16,
              &v18,
              (__int16 *)&this,
              1,
              -1,
              9,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (__int16 *)&v16,
              0,
              0);
      *(_DWORD *)v17 = v9; /*0x4cd17d*/
      if ( v9 == dword_8B3C58 ) /*0x4cd186*/
      {
        v14 = (int *)v1->?; /*0x4cd246*/
        result = (_BYTE)v14 + 108; /*0x4cd24c*/
        if ( v14[27] <= 0 ) /*0x4cd251*/
          return result; /*0x4cd251*/
        (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v14 + 364))( /*0x4cd26d*/
          v14 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
        goto LABEL_21; /*0x4cd26d*/
      }
      GroundHeight = 0; /*0x4cd1a9*/
      v19[1] = (SHIWORD(v9) << 8) + 128; /*0x4cd1b6*/
      v19[0] = ((__int16)v9 << 8) + 128; /*0x4cd1c0*/
      GroundHeight = Cell::GetGroundHeight(v19); /*0x4cd1ce*/
      if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 ) /*0x4cd1e5*/
        GroundHeight += dword_8B3CAC; /*0x4cd1f3*/
      vtable0 = (void (__thiscall **)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd201*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd208*/
      vtable0[288](v1->?, v11, 1); /*0x4cd211*/
      result = v1->IsLanding; /*0x4cd217*/
      if ( !result ) /*0x4cd21c*/
      {
        v12 = (char (__thiscall **)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd228*/
        v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd22f*/
        return v12[288](v1->?, v13, 1); /*0x4cd238*/
      }
    }
  }
  return result; /*0x4cd0fd*/
}



// ==== 0x004CD2A0  FootClass::ProcessDeployMission  this=FootClass  sig=csp ====
char __thiscall FootClass::ProcessDeployMission(FootClass *this)
{
  _DWORD *vtable3; // edi
  void *v3; // ecx
  int v4; // eax
  int *v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // edi
  CellClass *v10; // eax
  _BYTE *v11; // eax
  int *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  void *v16; // ecx
  _DWORD *v17; // eax
  Team *v18; // eax
  _DWORD *v19; // edi
  int v20; // [esp+34h] [ebp-Ch] BYREF
  int v21; // [esp+38h] [ebp-8h]
  int v22; // [esp+3Ch] [ebp-4h]

  vtable3 = this->?; /*0x4cd2a7*/
  if ( vtable3 && (*(int (__thiscall **)(void *))(*vtable3 + 44))(this->?) == 2 && !*(_BYTE *)(vtable3[433] + 3594) ) /*0x4cd2c0*/
  {
    v3 = this->?; /*0x4cd2ca*/
    LOBYTE(this->?[3]) = 1; /*0x4cd2cd*/
    BYTE1(this->?[0]) = 0; /*0x4cd2d1*/
    LOBYTE(this->?[0]) = 0; /*0x4cd2d5*/
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 132))(v3); /*0x4cd2db*/
    this->? = (BombClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cd2eb*/
    return 0; /*0x4cd2ef*/
  }
  else
  {
    v6 = (int *)this->?; /*0x4cd2f6*/
    if ( v6[27] > 0 && (BYTE1(this->?[0]) || LOBYTE(this->?[0])) ) /*0x4cd30b*/
    {
      v7 = (*(int (__thiscall **)(int *))(*v6 + 120))(v6); /*0x4cd320*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->? + 292))(this->?, 0); /*0x4cd324*/
      RemoveTarget((int)this->?); /*0x4cd333*/
      if ( BYTE1(this->?[0]) ) /*0x4cd338*/
        DropPod::ProcessLanding((DropPod *)this); /*0x4cd341*/
      if ( LOBYTE(this->?[0]) ) /*0x4cd346*/
        FootClass::UpdateDeployMovement(this); /*0x4cd34f*/
      if ( v7 != (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?) ) /*0x4cd35e*/
      {
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?) != 2 /*0x4cd3b6*/
          || LOBYTE(this->?[0])
          || (v8 = (int *)this->?,
              v20 = v8[39],
              v21 = v8[40],
              v22 = v8[41],
              v9 = *v8,
              v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v20),
              (*(unsigned __int8 (__thiscall **)(void *, CellClass *))(v9 + 1360))(this->?, v10)) )
        {
          v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 120))(this->?); /*0x4cd40a*/
          v16 = this->?; /*0x4cd40d*/
          if ( v15 == 2 ) /*0x4cd413*/
          {
            (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v16 + 1152))(v16, 0, 1); /*0x4cd41f*/
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 628))(this->?, 24); /*0x4cd42c*/
            (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->? + 1164))( /*0x4cd43f*/
              this->?,
              0,
              0,
              0,
              0);
            (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->? + 1160))( /*0x4cd454*/
              this->?,
              0,
              0,
              0,
              0,
              0);
            v17 = this->?; /*0x4cd45a*/
            v20 = v17[39]; /*0x4cd46b*/
            v21 = v17[40]; /*0x4cd472*/
            v22 = v17[41]; /*0x4cd479*/
            MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v20, v17[152] - 3, v17[152] + 3, 0); /*0x4cd495*/
          }
          else
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v16 + 628))(v16, 25); /*0x4cd4a0*/
            if ( (unsigned __int8)Team::AllMembersValid((Team *)this->?) ) /*0x4cd4a9*/
            {
              v18 = (Team *)this->?; /*0x4cd4b2*/
              if ( *(_DWORD *)&v18[6].__pad_0[28] ) /*0x4cd4b5*/
              {
                v19 = this->?; /*0x4cd4bf*/
                if ( v19[361] != Team::GetMember(v18, 0) ) /*0x4cd4d0*/
                  (*(void (__thiscall **)(_DWORD *, int))(*v19 + 628))(v19, 3); /*0x4cd4d8*/
              }
            }
          }
        }
        else
        {
          v11 = this->?; /*0x4cd3c0*/
          LOBYTE(this->?[0]) = 1; /*0x4cd3c3*/
          v11[140] = 0; /*0x4cd3c9*/
          (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->? + 292))(this->?, 0); /*0x4cd3d5*/
          v12 = (int *)this->?; /*0x4cd3db*/
          v13 = *v12; /*0x4cd3de*/
          v14 = (*(int (__thiscall **)(int *))(*v12 + 456))(v12); /*0x4cd3e0*/
          (*(void (__thiscall **)(void *, int))(v13 + 460))(this->?, v14 + 10); /*0x4cd3ed*/
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 292))(this->?, 1); /*0x4cd3fa*/
        }
      }
      Targeting::Readd((_DWORD *)this->?); /*0x4cd4e7*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 292))(this->?, 1); /*0x4cd4f3*/
    }
    return 0; /*0x4cd4fa*/
  }
}



// ==== 0x004CD510  JumpjetLocomotionClass::IsMapCoordVisible  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall JumpjetLocomotionClass::IsMapCoordVisible(JumpjetLocomotionClass *this)
{
  int *location; // eax
  char v3; // al
  FootClass *LinkedTo; // ecx
  LinkedList *i; // eax
  _DWORD *v6; // esi
  int v7; // eax
  TeamClass *team; // eax
  _DWORD v10[3]; // [esp+4h] [ebp-Ch] BYREF

  location = this->?->?; /*0x4cd519*/
  v10[0] = *location; /*0x4cd520*/
  v10[1] = location[1]; /*0x4cd52c*/
  v10[2] = location[2]; /*0x4cd538*/
  v3 = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v10); /*0x4cd53c*/
  LinkedTo = this->?; /*0x4cd541*/
  if ( v3 ) /*0x4cd546*/
  {
    LinkedTo->? = 1; /*0x4cd5f0*/
    return 0; /*0x4cd5f0*/
  }
  if ( (*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 97))(LinkedTo) != 4 ) /*0x4cd557*/
    return 0; /*0x4cd5f7*/
  for ( i = (LinkedList *)this->?; i[23].Tail[0]; i = (LinkedList *)this->? ) /*0x4cd566*/
  {
    v6 = (_DWORD *)LinkedList::Pop(i + 23); /*0x4cd57c*/
    if ( sub_413CD0((int)v6) ) /*0x4cd580*/
      *(_BYTE *)(v6[135] + 505) = 1; /*0x4cd58f*/
    v7 = v6[373]; /*0x4cd595*/
    if ( v7 ) /*0x4cd59d*/
      *(_BYTE *)(v7 + 130) = 1; /*0x4cd59f*/
    if ( v6 ) /*0x4cd5a7*/
      (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x4cd5ae*/
  }
  team = this->?->team; /*0x4cd5c2*/
  if ( team ) /*0x4cd5ca*/
    team->unknown82 = 1; /*0x4cd5cc*/
  (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 232))(this->?); /*0x4cd5d7*/
  (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 62))(this->?); /*0x4cd5e2*/
  return 1; /*0x4cd5eb*/
}



// ==== 0x004CD600  DamageArea::ApplyScatter  this=DamageArea  sig=csp ====
int __thiscall DamageArea::ApplyScatter(DamageArea *this)
{
  double v1; // st7
  int v3; // edi
  _WORD *v4; // eax
  DamageArea *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  TechnoClass *v11; // ecx
  int health; // edi
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int result; // eax
  AnimClass *v18; // esi
  int v19; // ebx
  void *WarheadVersusMultiplier; // eax
  int *DamageArea_field_00; // ecx
  _DWORD *v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // edi
  unsigned int v28; // ebx
  unsigned int v29; // ebp
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  _DWORD *v43; // ebp
  int v44; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // eax
  bool v48; //... [31505 chars total]



// ==== 0x004CE4B0  ObjectClass::ProcessDataHelper  this=ObjectClass  sig=csp ====
int __thiscall ProcessDataHelper(ObjectClass *this, int *a2, int a3)
{
  double v3; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v10; // [esp+4h] [ebp-18h]
  double v12; // [esp+Ch] [ebp-10h]

  v10 = (*((int (__stdcall **)(void **))this->? + 33))(&this->?); /*0x4ce4c1*/
  if ( v10 <= 0 ) /*0x4ce4c5*/
    return 0; /*0x4ce594*/
  a3 = (__int16)a3 - 0x3FFF; /*0x4ce4d7*/
  __asm { fild dword ptr [esp+20h+arg_4] } /*0x4ce4dc*/
  _ESI = a2; /*0x4ce4e1*/
  __asm { fmul ds:dbl_7E2810 } /*0x4ce4e6*/
  v5 = a2[2]; /*0x4ce4ec*/
  __asm /*0x4ce4ef*/
  {
    fstp [esp+28h+var_14+4]
    fild dword ptr [esp+28h+var_1C+4]
  }
  __asm
  {
    fstp [esp+30h+var_1C+4]
    fild dword ptr [esi+4]
    fstp [esp+30h+var_C+4]
  }
  Math::SinCos(v12); /*0x4ce50c*/
  __asm /*0x4ce511*/
  {
    fmul [esp+30h+var_1C+4]
    fsubr [esp+30h+var_C+4]
  }
  LOWORD(v6) = Math::RoundToInt(v3); /*0x4ce519*/
  a3 = v6; /*0x4ce520*/
  Math::ArcTan2(v12); /*0x4ce524*/
  __asm { fmul [esp+38h+var_1C+4] } /*0x4ce529*/
  __asm { fiadd dword ptr [esi] }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x4ce532*/
  v8 = a3; /*0x4ce537*/
  *a2 = v7; /*0x4ce53d*/
  a2[1] = v8; /*0x4ce53f*/
  a2[2] = v5; /*0x4ce542*/
  LOWORD(a3) = *a2 / 256; /*0x4ce558*/
  HIWORD(a3) = a2[1] / 256; /*0x4ce571*/
  return 2 /*0x4ce58e*/
       - ((unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) != 0);
}



// ==== 0x004CE5A0  JumpjetLocomotionClass::ProcessRotation  this=JumpjetLocomotionClass  sig=csp ====
void __thiscall JumpjetLocomotionClass::ProcessRotation(JumpjetLocomotionClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  FootClass *LinkedTo; // ecx
  CellClass *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this->__pad_50[3] && this->?->? > 0 ) /*0x4ce5b9*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int *))(this->LocomotionClass[1] + 96))(&this->LocomotionClass[1]) ) /*0x4ce5c6*/
    {
      LinkedTo = this->?; /*0x4ce636*/
      this->__pad_50[3] = 0; /*0x4ce639*/
      LinkedTo = (FootClass *)((char *)LinkedTo + 156); /*0x4ce63d*/
      v9[0] = LinkedTo->TechnoClass; /*0x4ce645*/
      v9[1] = LinkedTo->?; /*0x4ce651*/
      v9[2] = LinkedTo->?; /*0x4ce658*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x4ce661*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v6); /*0x4ce668*/
    }
    else
    {
      LOWORD(v7) = *ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v8) /*0x4ce5ee*/
                 + ((unsigned __int16)*(_DWORD *)&this->__pad_50[4] << 8);
      FacingClass::Set_SyncLog((char *)this->?->?, &v7); /*0x4ce605*/
      v2 = *(_DWORD *)&this->__pad_50[4]; /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      *(_DWORD *)&this->__pad_50[4] = v4; /*0x4ce624*/
    }
  }
}



// ==== 0x004CE680  FootClass::UpdateDeployMovement  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateDeployMovement(FootClass *this)
{
  double v1; // st7
  int v3; // edi
  char *vtable3; // eax
  _DWORD *v5; // eax
  int (__stdcall ***v6)(void *, void *, int *); // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  _WORD *WeaponType; // eax
  int *v13; // eax
  int v14; // ecx
  char *v15; // ecx
  int v17; // [esp+28h] [ebp-1Ch] BYREF
  int referenceCount; // [esp+2Ch] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-14h]
  int v20; // [esp+34h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?); /*0x4ce694*/
  vtable3 = (char *)this->?; /*0x4ce696*/
  if ( !vtable3[140] ) /*0x4ce699*/
  {
    v5 = vtable3 + 156; /*0x4ce6a3*/
    v21[0] = *v5; /*0x4ce6aa*/
    v21[1] = v5[1]; /*0x4ce6b6*/
    v21[2] = v5[2]; /*0x4ce6c2*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v21)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce6dd*/
      v3 -= dword_8B3CAC; /*0x4ce6df*/
  }
  v6 = (int (__stdcall ***)(void *, void *, int *))this->?; /*0x4ce6e1*/
  v7 = 0; /*0x4ce6e4*/
  v17 = 0; /*0x4ce6e8*/
  if ( v6 ) /*0x4ce6ec*/
  {
    v8 = (**v6)(v6, &unk_822410, &referenceCount); /*0x4ce6fd*/
    if ( v8 >= 0 ) /*0x4ce701*/
      v7 = referenceCount; /*0x4ce70e*/
    Release3COM((ObjectClass *)&v17); /*0x4ce707*/
    v17 = v7; /*0x4ce71d*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce729*/
      WinAPI::Wrapper(v8); /*0x4ce72c*/
  }
  v9 = 0; /*0x4ce735*/
  if ( v7 ) /*0x4ce739*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)v7 + 12))(v7); /*0x4ce73f*/
    v7 = v17; /*0x4ce742*/
  }
  v10 = v3 - v9; /*0x4ce749*/
  v11 = (int)this->? - v9; /*0x4ce74b*/
  LOBYTE(this->?[0]) = 0; /*0x4ce756*/
  BYTE1(this->?[0]) = 0; /*0x4ce763*/
  if ( v10 <= v11 - v11 / 3 ) /*0x4ce769*/
  {
    if ( v10 <= v11 / 2 ) /*0x4ce79b*/
      goto LABEL_18; /*0x4ce79b*/
    v13 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this->? + 72))(this->?, v21); /*0x4ce7ab*/
    v14 = *v13; /*0x4ce7b1*/
    referenceCount = this->?; /*0x4ce7b3*/
    v19 = v14; /*0x4ce7b7*/
    Math::CalcAngle((double)v13[1] - (double)(int)this->?, (double)referenceCount - (double)v14); /*0x4ce7d6*/
    LOWORD(v19) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x4ce7f3*/
    v15 = (char *)this->?; /*0x4ce7fd*/
    v20 = v19; /*0x4ce800*/
    FacingClass::Update(v15 + 904, &v20); /*0x4ce80a*/
    this->?[1] = 0; /*0x4ce80f*/
    this->?[2] = 1072693248; /*0x4ce816*/
  }
  else
  {
    WeaponType = TechnoClass::GetWeaponType((TechnoClass *)((char *)this->? + 904), &v20); /*0x4ce779*/
    FacingClass::Update((char *)this->? + 928, WeaponType); /*0x4ce788*/
  }
  v7 = v17; /*0x4ce81d*/
LABEL_18:
  if ( v7 ) /*0x4ce823*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x4ce829*/
  return 1; /*0x4ce82c*/
}



// ==== 0x004CE840  DropPod::ProcessLanding  this=DropPod  sig=csp ====
char __thiscall DropPod::ProcessLanding(DropPod *this)
{
  int v3; // edi
  int *v4; // ecx
  int v5; // ecx
  double v6; // st7
  int (__stdcall ***v7)(_DWORD, void *, int *); // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  CellClass *v11; // ebx
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // ecx
  AnimClass *v19; // edi
  int Index; // eax
  int v21; // eax
  bool v22; // zf
  AnimClass *v23; // edi
  int v24; // eax
  int *v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // ecx
  int *v29; // ecx
  int v30; // eax
  _WORD *v31; // ecx
  int i; // edi
  __int16 v33; // cx
  _BYTE *v34; // eax
  int v35; // edi
  __int16 v36; // cx
  _BYTE *v37; // eax
  int v38; // edi
  __int16 v39; // cx
  _BYTE *v40; // eax
  int v41; // edi
  int v42; // ebp
  _DWORD *v43; // ebx
  Cell *v44; // eax
  _DWORD *v45; // edi
  int v46; // ebx
  int v47; // [esp+4Eh] [ebp-4Ch]
  char v48; // [esp+65h] [ebp-35h]
  int v49; // [esp+66h] [ebp-34h] BYREF
  int v50; // [esp+6Ah] [ebp-30h]
  int v51; // [esp+6Eh] [ebp-2Ch] BYREF
  int v52; // [esp+72h] [ebp-28h] BYREF
  int v53; // [esp+76h] [ebp-24h]
  __int16 v54[2]; // [esp+7Ah] [ebp-20h] BYREF
  int v55; // [esp+7Eh] [ebp-1Ch] BYREF
  int v56; // [esp+82h] [ebp-18h] BYREF
  int v57; // [esp+86h] [ebp-14h]
  int GroundHeight; // [esp+8Ah] [ebp-10h]
  char v59[12]; // [esp+8Eh] [ebp-Ch] BYREF

  if ( !*((_BYTE *)this + 81) ) /*0x4ce849*/
    return 1; /*0x4ce859*/
  v48 = 0; /*0x4ce85d*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 456))(*((_DWORD *)this + 3)); /*0x4ce86d*/
  v4 = (int *)(*((_DWORD *)this + 3) + 156); /*0x4ce86f*/
  v50 = v3; /*0x4ce875*/
  v56 = *v4; /*0x4ce87b*/
  v57 = v4[1]; /*0x4ce887*/
  GroundHeight = v4[2]; /*0x4ce88e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v56)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce8ae*/
  {
    v3 -= dword_8B3CAC; /*0x4ce8b0*/
    v50 = v3; /*0x4ce8b2*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 132))(*((_DWORD *)this + 3)) + 3221) ) /*0x4ce8c1*/
  {
    if ( !v3 ) /*0x4ce8cf*/
    {
      v5 = *((_DWORD *)this + 3); /*0x4ce8d1*/
      if ( *(float *)(v5 + 744) > 0.0 ) /*0x4ce8e5*/
      {
        v6 = *(float *)(v5 + 744) - 0.02; /*0x4ce8ed*/
        if ( v6 < 0.0 ) /*0x4ce900*/
          v6 = 0.0; /*0x4ce904*/
        *(float *)(v5 + 744) = v6; /*0x4ce90a*/
      }
    }
    *((_DWORD *)this + 16) = 0; /*0x4ce910*/
    *((_DWORD *)this + 17) = 0; /*0x4ce913*/
  }
  else
  {
    *((_DWORD *)this + 16) = 0; /*0x4ce91c*/
    *((_DWORD *)this + 17) = 0; /*0x4ce91f*/
  }
  v7 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 3); /*0x4ce922*/
  v53 = 0; /*0x4ce925*/
  v49 = 0; /*0x4ce92b*/
  if ( v7 ) /*0x4ce92f*/
  {
    v8 = (**v7)(v7, &unk_822410, &v52); /*0x4ce940*/
    if ( v8 >= 0 ) /*0x4ce944*/
    {
      v10 = v52; /*0x4ce953*/
      Release3COM((ObjectClass *)&v49); /*0x4ce95b*/
      v9 = v10; /*0x4ce960*/
    }
    else
    {
      Release3COM((ObjectClass *)&v49); /*0x4ce94a*/
      v9 = 0; /*0x4ce94f*/
    }
    v49 = v9; /*0x4ce964*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce970*/
      WinAPI::Wrapper(v8); /*0x4ce973*/
    if ( v9 ) /*0x4ce97e*/
      v53 = (*(int (__stdcall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x4ce986*/
  }
  v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 7); /*0x4ce998*/
  if ( !*((_BYTE *)this + 24) ) /*0x4ce99f*/
    goto LABEL_26; /*0x4ce99f*/
  v12 = Cell::IsBridge((Cell *)v11); /*0x4ce9a3*/
  if ( (unsigned __int8)Array::Contains(*((Array **)this + 3), (int)v12) ) /*0x4ce9ac*/
  {
    if ( *((_BYTE *)this + 24) ) /*0x4ce9b5*/
      goto LABEL_32; /*0x4ce9ba*/
LABEL_26:
    if ( !(*(int (__thiscall **)(_DWORD, CellClass *, int, int, _DWORD, int))(**((_DWORD **)this + 3) + 428))( /*0x4ce9d5*/
            *((_DWORD *)this + 3),
            v11,
            -1,
            -1,
            0,
            1) )
      goto LABEL_32; /*0x4ce9d5*/
  }
  TechnoClass::GetData((TechnoClass *)this); /*0x4ce9db*/
  v13 = *(_DWORD *)(*((_DWORD *)this + 3) + 156); /*0x4ce9ee*/
  v14 = *(_DWORD *)(*((_DWORD *)this + 3) + 160); /*0x4ce9f0*/
  GroundHeight = *(_DWORD *)(*((_DWORD *)this + 3) + 164); /*0x4ce9f6*/
  LOWORD(v51) = v13 / 256; /*0x4cea06*/
  HIWORD(v51) = v14 / 256; /*0x4cea1d*/
  *(_DWORD *)v54 = v51; /*0x4cea26*/
  v51 = 0; /*0x4cea4d*/
  v15 = *LayerClass::Pathfinding_Find( /*0x4cea5c*/
           &stru_87F5F0.__pad_58[416],
           (int)&v51,
           &v55,
           v54,
           1,
           -1,
           9,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&v51,
           0,
           0);
  v52 = v15; /*0x4cea65*/
  if ( v15 == dword_8B3C58 ) /*0x4cea6e*/
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 364))( /*0x4cebc7*/
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 3) + 108,
      0,
      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
      0,
      1,
      1,
      0);
    *((_DWORD *)this + 7) = dword_8B3C78; /*0x4cebd3*/
    *((_DWORD *)this + 8) = dword_8B3C7C; /*0x4cebda*/
    v21 = v49; /*0x4cebdd*/
    v22 = v49 == 0; /*0x4cebe7*/
    *((_DWORD *)this + 9) = dword_8B3C80; /*0x4cebe9*/
    if ( !v22 ) /*0x4cebec*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x4cebf1*/
    return 0; /*0x4cebfd*/
  }
  GroundHeight = 0; /*0x4cea91*/
  v57 = (SHIWORD(v15) << 8) + 128; /*0x4cea9e*/
  v56 = ((__int16)v15 << 8) + 128; /*0x4ceaa8*/
  GroundHeight = Cell::GetGroundHeight(&v56); /*0x4ceab1*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v52) + 80) & 0x100) != 0 ) /*0x4ceacd*/
    GroundHeight += dword_8B3CAC; /*0x4ceadb*/
  (*(void (__stdcall **)(DropPod *, int, int, int))(*((_DWORD *)this + 1) + 68))(this + 1, v56, v57, GroundHeight); /*0x4ceaff*/
LABEL_32:
  if ( !*((_BYTE *)this + 82) && v50 < 300 ) /*0x4ceb15*/
  {
    v16 = (int *)(*((_DWORD *)this + 3) + 156); /*0x4ceb1e*/
    v56 = *v16; /*0x4ceb25*/
    v57 = v16[1]; /*0x4ceb31*/
    GroundHeight = v16[2]; /*0x4ceb3d*/
    v17 = Cell::GetGroundHeight(&v56); /*0x4ceb41*/
    v18 = *((_DWORD *)this + 3); /*0x4ceb46*/
    GroundHeight = v17; /*0x4ceb49*/
    *((_BYTE *)this + 82) = 1; /*0x4ceb4d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18) + 3221) ) /*0x4ceb59*/
    {
      v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4ceb71*/
      if ( v19 ) /*0x4ceb78*/
      {
        Index = AnimTypeClass::FindIndex((AnimTypeClass *)&stru_822420.?); /*0x4ceb83*/
        AnimClass::ctor(v19, *(void **)(FootClass_Array.?[3] + 4 * Index), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4ceba3*/
      }
    }
    else if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 44))(*((_DWORD *)this + 3)) == 2 ) /*0x4cec09*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1732) + 3580) ) /*0x4cec14*/
      {
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4cec28*/
        if ( v23 ) /*0x4cec2f*/
        {
          v24 = AnimTypeClass::FindIndex(&stru_822420); /*0x4cec36*/
          AnimClass::ctor(v23, *(void **)(FootClass_Array.?[3] + 4 * v24), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4cec58*/
        }
      }
    }
    v25 = (int *)*((_DWORD *)this + 3); /*0x4cec5d*/
    if ( v25[27] > 0 ) /*0x4cec63*/
    {
      v26 = (*(int (__thiscall **)(int *))(*v25 + 132))(v25); /*0x4cec6c*/
      StartAudioControllerAt(*(_DWORD *)(v26 + 1328), &v56, 0); /*0x4cec7a*/
    }
  }
  v27 = v53; /*0x4cec7f*/
  if ( v50 <= v53 ) /*0x4cec89*/
  {
    v28 = *((_DWORD *)this + 3); /*0x4cec8f*/
    if ( *(float *)(v28 + 744) <= 0.0 ) /*0x4ceca3*/
    {
      v29 = (int *)(v28 + 156); /*0x4ceca9*/
      v56 = *v29; /*0x4cecb1*/
      v57 = v29[1]; /*0x4cecbd*/
      GroundHeight = v29[2]; /*0x4cecc4*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v56)->flags[0] & 0x100) != 0 ) /*0x4cecdb*/
      {
        v30 = Cell::GetGroundHeight(&v56); /*0x4cece7*/
        if ( GroundHeight >= dword_8B3CAC + v30 ) /*0x4cecfa*/
          *(_BYTE *)(*((_DWORD *)this + 3) + 140) = 1; /*0x4cecff*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 460))(*((_DWORD *)this + 3), v27); /*0x4ced0c*/
      v47 = *((_DWORD *)this + 3); /*0x4ced1a*/
      *((_BYTE *)this + 81) = 0; /*0x4ced1b*/
      *((_BYTE *)this + 80) = 0; /*0x4ced1f*/
      v48 = 1; /*0x4ced23*/
      GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, v47); /*0x4ced28*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 1348))(*((_DWORD *)this + 3), 0, 0); /*0x4ced34*/
      v31 = (_WORD *)*((_DWORD *)this + 3); /*0x4ced3a*/
      *((_DWORD *)this + 18) = 0; /*0x4ced3d*/
      *((_DWORD *)this + 16) = 0; /*0x4ced40*/
      *((_DWORD *)this + 19) = 0; /*0x4ced43*/
      *((_DWORD *)this + 17) = 0; /*0x4ced46*/
      if ( v31[686] || v31[687] ) /*0x4ced52*/
      {
        for ( i = 0; i < 8; ++i ) /*0x4ced5f*/
        {
          v33 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(i & 7) + 82]); /*0x4ced7f*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(i & 7) + 82]) + *(_WORD *)(*((_DWORD *)this + 3) + 1372); /*0x4ced87*/
          HIWORD(v53) = v33; /*0x4ced8d*/
          *(_DWORD *)v54 = v53; /*0x4ced9b*/
          v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4ced9f*/
          --v34[290]; /*0x4cedb0*/
        }
        v35 = 0; /*0x4cedcd*/
        *(_DWORD *)(*((_DWORD *)this + 3) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 3) + 440))( /*0x4cedcf*/
                                                                 *((_DWORD *)this + 3),
                                                                 &v55);
        do /*0x4cee2a*/
        {
          v36 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(v35 & 7) + 82]); /*0x4cedf3*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(v35 & 7) + 82]) /*0x4cedfb*/
                      + *(_WORD *)(*((_DWORD *)this + 3) + 1372);
          HIWORD(v53) = v36; /*0x4cee01*/
          *(_DWORD *)v54 = v53; /*0x4cee0f*/
          v37 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4cee13*/
          ++v35; /*0x4cee20*/
          ++v37[290]; /*0x4cee24*/
        }
        while ( v35 < 8 ); /*0x4cee2a*/
      }
      else
      {
        v38 = 0; /*0x4cee40*/
        *(_DWORD *)(*((_DWORD *)this + 3) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_WORD *, int *))(*(_DWORD *)v31 + 440))( /*0x4cee42*/
                                                                 v31,
                                                                 &v55);
        do /*0x4cee9d*/
        {
          v39 = *(_WORD *)(*((_DWORD *)this + 3) + 1374) + HIWORD(g_DDrawSurfaceManager.scenario[(v38 & 7) + 82]); /*0x4cee66*/
          LOWORD(v53) = LOWORD(g_DDrawSurfaceManager.scenario[(v38 & 7) + 82]) /*0x4cee6e*/
                      + *(_WORD *)(*((_DWORD *)this + 3) + 1372);
          HIWORD(v53) = v39; /*0x4cee74*/
          *(_DWORD *)v54 = v53; /*0x4cee82*/
          v40 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4cee86*/
          ++v38; /*0x4cee93*/
          ++v40[290]; /*0x4cee97*/
        }
        while ( v38 < 8 ); /*0x4cee9d*/
      }
      v41 = *((_DWORD *)this + 7) / 256; /*0x4ceec5*/
      v42 = *((_DWORD *)this + 8) / 256; /*0x4ceec8*/
      v43 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 3) + 72))(*((_DWORD *)this + 3), v59); /*0x4ceece*/
      if ( (unsigned __int16)(*v43 / 256) == (_WORD)v41 && (unsigned __int16)(v43[1] / 256) == (_WORD)v42 /*0x4cef4d*/
        || (LOWORD(v53) = *((_DWORD *)this + 7) / 256,
            HIWORD(v53) = *((_DWORD *)this + 8) / 256,
            *(_DWORD *)v54 = v53,
            v44 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54),
            v45 = Cell::IsBridge(v44),
            v45 == (_DWORD *)Team::GetMember(*((Team **)this + 3), 0)) )
      {
        v46 = *((_DWORD *)this + 1); /*0x4cef52*/
        *((_BYTE *)this + 52) = 0; /*0x4cef55*/
        (*(void (__stdcall **)(DropPod *, int, int, int))(v46 + 68))(this + 1, dword_8B3C78, dword_8B3C7C, dword_8B3C80); /*0x4cef7a*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 3) + 1152))(*((_DWORD *)this + 3), 0, 1); /*0x4cef88*/
      }
    }
  }
  if ( v49 ) /*0x4cef96*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v49 + 8))(v49); /*0x4cef9b*/
  return v48; /*0x4ce852*/
}



// ==== 0x004CEFB0  LandFootClassAtPosition  this=IPersistStream  sig=csp ====
int __fastcall FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
  int **v6; // esi
  int *v7; // eax
  int v8; // eax
  int *v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  int *v15; // ecx
  void *NearbyCell; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // ebx
  int v24; // edi
  int v25; // ebp
  int *v26; // ecx
  int *v27; // eax
  int v28; // ebx
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int *v33; // ecx
  int *v34; // eax
  float *Height; // eax
  char *v36; // ecx
  int *v37; // eax
  int v38; // eax
  double v39; // st7
  int v40; // ebp
  int v41; // eax
  int *v42; // ecx
  bool v43; // cc
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int *v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v55; // [esp+50h] [ebp-38h] BYREF
  int *v56; // [esp+54h] [ebp-34h] BYREF
  float v57; // [esp+58h] [ebp-30h] BYREF
  float v58; // [esp+5Ch] [ebp-2Ch] BYREF
  int v59; // [esp+60h] [ebp-28h]
  float v60; // [esp+64h] [ebp-24h] BYREF
  int v61; // [esp+68h] [ebp-20h]
  int v62; // [esp+6Ch] [ebp-1Ch]
  int v63[3]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v64[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v6 = (int **)(a1 + 12); /*0x4cefb6*/
  v59 = a1; /*0x4cefb9*/
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 12) + 440))(*(_DWORD *)(a1 + 12), &v58); /*0x4cefc7*/
  v7 = *v6; /*0x4cefcd*/
  v55 = 0; /*0x4cefcf*/
  if ( v7 ) /*0x4cefd9*/
  {
    v8 = ComPtr::ReleaseAndSet(&v55, v6); /*0x4cefe0*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4cefee*/
      WinAPI::Wrapper(v8); /*0x4ceff1*/
    if ( v55 && (*v6)[173] && (*v6)[191] && (*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf017*/
      a3 = 0; /*0x4cf01e*/
  }
  if ( *v6 && (*(int (__thiscall **)(int *))(**v6 + 44))(*v6) == 2 )
  {
    if ( *v6 )
    {
      v9 = *v6; /*0x4cf033*/
      v10 = (*(int (__thiscall **)(int *))(*v9 + 44))(*v6) == 2 ? (unsigned int)v9 : 0;
    }
    else
    {
      v10 = 0; /*0x4cf039*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(v10 + 1732) + 3595) ) /*0x4cf055*/
      a3 = 0; /*0x4cf05f*/
  }
  v11 = LODWORD(a4); /*0x4cf06c*/
  v62 = a6; /*0x4cf06e*/
  v12 = a5; /*0x4cf072*/
  LOWORD(v56) = SLODWORD(a4) / 256; /*0x4cf08c*/
  HIWORD(v56) = a5 / 256; /*0x4cf09f*/
  v13 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v56); /*0x4cf0ac*/
  v14 = Cell::IsBridge(v13); /*0x4cf0b8*/
  if ( v14 && !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf0cc*/
  {
    if ( Array::Contains(*v6, (int)v14) ) /*0x4cf0d9*/
    {
      v18 = (int *)(*(int (__thiscall **)(_DWORD *, int *, int *))(*v14 + 168))(v14, v63, *v6); /*0x4cf142*/
      v11 = *v18; /*0x4cf148*/
      v12 = v18[1]; /*0x4cf14a*/
      v62 = v18[2]; /*0x4cf150*/
    }
    else
    {
      v15 = *v6; /*0x4cf0e2*/
      v56 = *v6; /*0x4cf0e6*/
      if ( v56 && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 2 ) /*0x4cf0f4*/
      {
        NearbyCell = InfantryClass::FindNearbyCell(v56, (int)v14); /*0x4cf0fb*/
        if ( NearbyCell ) /*0x4cf102*/
        {
          v17 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)NearbyCell + 72))(NearbyCell, v63); /*0x4cf125*/
          v11 = *v17; /*0x4cf128*/
          v12 = v17[1]; /*0x4cf12a*/
          v62 = v17[2]; /*0x4cf130*/
        }
        else
        {
          v11 = dword_8B3C78; /*0x4cf10a*/
          v12 = dword_8B3C7C; /*0x4cf110*/
          v62 = dword_8B3C80; /*0x4cf116*/
        }
      }
    }
  }
  (*(void (__thiscall **)(int *))(**v6 + 464))(*v6); /*0x4cf158*/
  v19 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf167*/
  v20 = *v19; /*0x4cf16a*/
  v21 = v19[1] - v12; /*0x4cf171*/
  LODWORD(v60) = v20 - v11; /*0x4cf173*/
  v61 = v21; /*0x4cf17b*/
  Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf17f*/
  v23 = (int)v22; /*0x4cf184*/
  v56 = v22; /*0x4cf18c*/
  if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf197*/
  {
    v24 = LODWORD(a4); /*0x4cf1a2*/
    v25 = a5; /*0x4cf1a6*/
    v26 = *v6; /*0x4cf1ae*/
    v60 = a4; /*0x4cf1b4*/
    v61 = a5; /*0x4cf1b9*/
    v62 = a6; /*0x4cf1bd*/
    v27 = (int *)(*(int (__thiscall **)(int *, int *))(*v26 + 72))(v26, v63); /*0x4cf1c8*/
    v28 = *(_DWORD *)Cell::GetHeight(&v58, v27, (int *)&v60); /*0x4cf1d5*/
    if ( !v55 ) /*0x4cf1dd*/
      goto LABEL_32; /*0x4cf1dd*/
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf1e2*/
      goto LABEL_32; /*0x4cf1e2*/
    v29 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf1f2*/
    v30 = *v29; /*0x4cf1f5*/
    v31 = v29[1] - v25; /*0x4cf1fc*/
    LODWORD(v60) = v30 - v24; /*0x4cf1fe*/
    v61 = v31; /*0x4cf206*/
    Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf20a*/
    if ( v32 > 768 /*0x4cf248*/
      || (LOWORD(v58) = 0x2000,
          LOWORD(v57) = v28 - *(_WORD *)ProgressTimer::GetValue((_WORD *)*v6 + 452, &v60),
          (unsigned __int8)UnitClass::CompareCoordinateMagnitude(&v57)) )
    {
LABEL_32:
      v63[2] = a6; /*0x4cf259*/
      v33 = *v6; /*0x4cf25d*/
      v63[0] = v24; /*0x4cf260*/
      v63[1] = v25; /*0x4cf264*/
      v34 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v33 + 72))(v33, v64); /*0x4cf26f*/
      Height = (float *)Cell::GetHeight(&v60, v34, v63); /*0x4cf277*/
      v36 = (char *)(*v6 + 226); /*0x4cf285*/
      v58 = *Height; /*0x4cf28b*/
      FacingClass::Update(v36, &v58); /*0x4cf28f*/
    }
    v23 = (int)v56; /*0x4cf294*/
  }
  if ( v23 >= 256 || !a3 || *(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf2bc*/
  {
    if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf363*/
    {
      v38 = (*(int (__thiscall **)(int *, _DWORD *))(**v6 + 72))(*v6, v64); /*0x4cf373*/
      v58 = *(float *)v38; /*0x4cf37f*/
      v39 = Math::CalcAngle((double)*(int *)(v38 + 4) - (double)a5, (double)SLODWORD(a4) - (double)SLODWORD(v58)); /*0x4cf398*/
      LOWORD(a4) = Math::RoundToInt((v39 - 1.570796326794897) * -10430.06004058427); /*0x4cf3b1*/
      v57 = a4; /*0x4cf3ba*/
      v37 = (int *)&v57; /*0x4cf3be*/
      goto LABEL_51; /*0x4cf3be*/
    }
  }
  else
  {
    if ( !(*v6)[173] || !(*v6)[191] ) /*0x4cf2d4*/
      goto LABEL_44; /*0x4cf2d4*/
    if ( !v55 ) /*0x4cf2e2*/
    {
LABEL_43:
      v37 = ObjectClass::CalcTargetFacing(*v6, (int *)&a4, (*v6)[173]); /*0x4cf304*/
LABEL_51:
      FacingClass::Update((char *)*v6 + 928, v37); /*0x4cf3c2*/
      goto LABEL_52; /*0x4cf3cb*/
    }
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf2e7*/
    {
      if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf2f9*/
        goto LABEL_43; /*0x4cf2fe*/
    }
    else
    {
LABEL_44:
      LOWORD(a4) = 0; /*0x4cf320*/
      if ( !v55 /*0x4cf34a*/
        || (LOWORD(a4) = (*(unsigned __int16 (__stdcall **)(int))(*(_DWORD *)v55 + 16))(v55) << 13, !v55)
        || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) )
      {
        FacingClass::Update((char *)*v6 + 928, &a4); /*0x4cf356*/
      }
    }
  }
LABEL_52:
  v40 = v59; /*0x4cf3d0*/
  if ( !*(_BYTE *)(v59 + 92) || v23 >= 768 ) /*0x4cf3e1*/
  {
    v41 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf402*/
    v42 = *v6; /*0x4cf410*/
    if ( *(_BYTE *)(v41 + 3221) ) /*0x4cf408*/
    {
      v43 = v23 < *(_DWORD *)((*(int (__thiscall **)(int *))(*v42 + 132))(v42) + 760); /*0x4cf426*/
      v44 = **v6; /*0x4cf42a*/
      if ( v43 ) /*0x4cf42c*/
      {
        v45 = (*(int (**)(void))(v44 + 132))(); /*0x4cf432*/
        v46 = *v6; /*0x4cf443*/
        v47 = **v6; /*0x4cf445*/
        a4 = (float)(v23 / *(_DWORD *)(v45 + 760)); /*0x4cf44f*/
        v48 = (int *)(*(int (__thiscall **)(int *))(v47 + 132))(v46); /*0x4cf45b*/
        v49 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf45f*/
        v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 188))(v49) / 3; /*0x4cf481*/
        v50 = *v48; /*0x4cf485*/
        v58 = (double)v59 * (1.0 - a4); /*0x4cf497*/
        v59 = (*(int (__thiscall **)(int *))(v50 + 188))(v48); /*0x4cf4a1*/
        *(_DWORD *)(v40 + 56) = Math::RoundToInt((double)v59 * a4 + v58); /*0x4cf4b6*/
        goto LABEL_60; /*0x4cf4bb*/
      }
    }
    else
    {
      v44 = *v42; /*0x4cf4bd*/
    }
    v51 = (*(int (**)(void))(v44 + 132))(); /*0x4cf4bf*/
    *(_DWORD *)(v40 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)v51 + 188))(v51); /*0x4cf4cf*/
    goto LABEL_60; /*0x4cf4cf*/
  }
  *(_DWORD *)(v40 + 56) = *(_DWORD *)(v40 + 36) - Cell::GetGroundHeight((_DWORD *)(v59 + 28)); /*0x4cf3f6*/
LABEL_60:
  if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) /*0x4cf4e8*/
    && (unsigned __int8)DamageArea::CheckOccupancyEligibility(v40) )
  {
    if ( v23 >= 128 ) /*0x4cf4f7*/
    {
      if ( v23 >= 512 ) /*0x4cf52d*/
      {
        if ( v23 < 768 && a3 ) /*0x4cf551*/
        {
          *(_DWORD *)(v40 + 64) = 0; /*0x4cf553*/
          *(_DWORD *)(v40 + 68) = 1072168960; /*0x4cf556*/
        }
      }
      else if ( a3 ) /*0x4cf535*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf537*/
        *(_DWORD *)(v40 + 68) = 1071644672; /*0x4cf53a*/
      }
    }
    else
    {
      if ( a3 ) /*0x4cf4ff*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf501*/
        *(_DWORD *)(v40 + 68) = 0; /*0x4cf504*/
      }
      if ( !*(_BYTE *)(v40 + 92) && *(double *)(v40 + 72) < 0.05 ) /*0x4cf51c*/
        LocomotionClass::CheckBridgeBlock(v40); /*0x4cf520*/
    }
  }
  if ( *((_BYTE *)*v6 + 131) ) /*0x4cf55f*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)(*v6)[135]) ) /*0x4cf573*/
    {
      v52 = (int)(*v6 + 39); /*0x4cf57e*/
      a4 = *(float *)v52; /*0x4cf586*/
      a5 = *(_DWORD *)(v52 + 4); /*0x4cf592*/
      a6 = *(_DWORD *)(v52 + 8); /*0x4cf599*/
      if ( Cell::IsPassable(&a4) /*0x4cf5dd*/
        || (*(_DWORD *)dword_A8B230 & 0x1000) != 0
        && (v53 = (int)(*v6 + 39),
            a4 = *(float *)v53,
            a5 = *(_DWORD *)(v53 + 4),
            a6 = *(_DWORD *)(v53 + 8),
            Game::Stub3((int)&a4)) )
      {
        (*(void (__thiscall **)(int *))(**v6 + 336))(*v6); /*0x4cf5ec*/
      }
    }
  }
  if ( v55 ) /*0x4cf5f8*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v55 + 8))(v55); /*0x4cf5fd*/
  return v23; /*0x4cf600*/
}



// ==== 0x004CF610  JumpjetLocomotionClass::ComputeRotationMatrix  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeRotationMatrix(JumpjetLocomotionClass *this, float *a2, signed int a3)
{
  int *v3; // edi
  JumpjetLocomotionClass *v4; // esi
  FootClass *Owner; // ecx
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  float *result; // eax
  float v11; // [esp+0h] [ebp-3Ch]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+0h] [ebp-3Ch]
  Matrix3x4 v15; // [esp+Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v15); /*0x4cf619*/
  v3 = (int *)a3; /*0x4cf61e*/
  v4 = this; /*0x4cf622*/
  if ( a3 ) /*0x4cf628*/
    *v3 |= 8 * (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &a3) >> 10) + 1) >> 1) & 0x1F); /*0x4cf64f*/
  a3 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v4->?->?, &this) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x4cf677*/
  v11 = (double)a3 * -0.1963495408493621; /*0x4cf685*/
  Matrix2D::Rotate(v15.m_Data, v11); /*0x4cf688*/
  if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 114))(v4->?) > 0 ) /*0x4cf69a*/
  {
    Owner = v4->?; /*0x4cf6a0*/
    if ( Owner->? ) /*0x4cf6a3*/
    {
      Matrix3x3::RotateX(v15.m_Data, *(float *)&Owner->?); /*0x4cf6b8*/
      if ( *(double *)&v4->DestinationCoords[1] <= *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass /*0x4cf6d6*/
                                                                + 33))(v4->?)
                                                             + 936) )
      {
        Matrix3D::RotateZ(v15.m_Data, *(float *)&v4->?->?); /*0x4cf706*/
      }
      else
      {
        v12 = *(float *)&v4->?->? /*0x4cf6f3*/
            + *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944);
        Matrix3D::RotateZ(v15.m_Data, v12); /*0x4cf6f6*/
      }
      if ( v3 ) /*0x4cf70d*/
        *v3 = -1; /*0x4cf713*/
    }
    else if ( *(double *)&v4->DestinationCoords[1] > *(double *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass /*0x4cf734*/
                                                                  + 33))(Owner)
                                                               + 936) )
    {
      if ( *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944) != 0.0 ) /*0x4cf756*/
      {
        if ( v3 ) /*0x4cf75a*/
        {
          v6 = *v3; /*0x4cf75c*/
          LOBYTE(v6) = *v3 | 4; /*0x4cf75e*/
          *v3 = v6; /*0x4cf760*/
        }
        v13 = *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944); /*0x4cf778*/
        Matrix3D::RotateZ(v15.m_Data, v13); /*0x4cf77b*/
      }
      if ( *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928) != 0.0 ) /*0x4cf79c*/
      {
        if ( JumpjetLocomotionClass::StubReturnZero_5((JumpjetLocomotionClass *)v4->?->?) ) /*0x4cf7a7*/
        {
          if ( v3 ) /*0x4cf7b2*/
          {
            v7 = *v3; /*0x4cf7b4*/
            LOBYTE(v7) = *v3 | 1; /*0x4cf7b6*/
            *v3 = v7; /*0x4cf7b8*/
          }
          v8 = *(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7c5*/
        }
        else
        {
          if ( !JumpjetLocomotionClass::StubReturnZero_6((JumpjetLocomotionClass *)v4->?->?) ) /*0x4cf7dd*/
            goto LABEL_25; /*0x4cf7dd*/
          if ( v3 ) /*0x4cf7e1*/
          {
            v9 = *v3; /*0x4cf7e3*/
            LOBYTE(v9) = *v3 | 2; /*0x4cf7e5*/
            *v3 = v9; /*0x4cf7e7*/
          }
          v8 = -*(double *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7fa*/
        }
        v14 = v8; /*0x4cf801*/
        Matrix3x3::RotateX(v15.m_Data, v14); /*0x4cf804*/
      }
    }
  }
LABEL_25:
  result = a2; /*0x4cf809*/
  qmemcpy(a2, &v15, 0x30u); /*0x4cf818*/
  return result; /*0x4cf81a*/
}



// ==== 0x004CF830  FlyLocomotionClass::CalculateBobOffset  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::CalculateBobOffset(FlyLocomotionClass *this, _DWORD *a2)
{
  double v2; // st7
  FlyLocomotionClass *v3; // edi
  int v4; // ebp
  FlyLocomotionClass *v5; // ecx
  FootClass *Owner; // eax
  int v7; // esi
  FlyLocomotionClass *v8; // ebx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // esi
  FlyLocomotionClass *v12; // eax
  bool v13; // zf
  double v15; // [esp+4h] [ebp-18h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = this; /*0x4cf834*/
  v4 = 0; /*0x4cf838*/
  v5 = 0; /*0x4cf83a*/
  Owner = this->?; /*0x4cf83c*/
  this = 0; /*0x4cf83f*/
  if ( Owner ) /*0x4cf845*/
  {
    v7 = (*(int (__stdcall **)(FootClass *, void *, int *))Owner->TechnoClass)(Owner, &unk_822410, &v16); /*0x4cf856*/
    if ( v7 >= 0 ) /*0x4cf85a*/
    {
      v8 = (FlyLocomotionClass *)v16; /*0x4cf86e*/
      Release3COM((ObjectClass *)&this); /*0x4cf876*/
      v5 = v8; /*0x4cf87b*/
      this = v8; /*0x4cf87e*/
    }
    else
    {
      Release3COM((ObjectClass *)&this); /*0x4cf860*/
      v5 = 0; /*0x4cf865*/
      this = 0; /*0x4cf867*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4cf88c*/
      WinAPI::Wrapper(v7); /*0x4cf88f*/
  }
  v9 = 0; /*0x4cf898*/
  if ( v5 ) /*0x4cf89c*/
    v9 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v5->LocomotionClass + 12))(v5); /*0x4cf8a4*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v3->?->TechnoClass + 33))(v3->?) + 3221) /*0x4cf8d6*/
    && !v3->IsLanding
    && !v3->IsTakingOff
    && (*((int (__thiscall **)(FootClass *))v3->?->TechnoClass + 114))(v3->?) > v9 )
  {
    v16 = *(_DWORD *)&stru_A8EB00.?[416] % 20; /*0x4cf8e8*/
    __asm /*0x4cf8ec*/
    {
      fild [esp+18h+var_4]
      fmul ds:dbl_7E8AF0
      fstp [esp+18h+var_1C+4]; double
    }
    Math::SinCos(v15); /*0x4cf8f9*/
    __asm { fmul ds:dbl_7E48F0 } /*0x4cf8fe*/
    __asm { fadd ds:dbl_7E1738 }
    LOWORD(v10) = Math::RoundToInt(v2); /*0x4cf90d*/
    v4 = v10; /*0x4cf912*/
  }
  v11 = a2; /*0x4cf914*/
  *a2 = 0; /*0x4cf91a*/
  v12 = this; /*0x4cf91c*/
  v13 = this == 0; /*0x4cf920*/
  v11[1] = v4; /*0x4cf922*/
  if ( !v13 ) /*0x4cf925*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)v12->LocomotionClass + 8))(v12); /*0x4cf92a*/
  return v11; /*0x4cf92f*/
}



// ==== 0x004CF940  FlyLocomotionClass::ShortFunc_4CF940  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ShortFunc_4CF940(FlyLocomotionClass *this, _DWORD *a2)
{
  *a2 = 0; /*0x4cf948*/
  a2[1] = 0; /*0x4cf94a*/
  return a2; /*0x4cf94d*/
}



// ==== 0x004CF950  TechnoClass::GetData  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetData(TechnoClass *this)
{
  int result; // eax
  void *vtable3; // ecx
  int v4; // eax
  BombClass *v5; // eax
  void *v6; // ecx
  _DWORD *WeaponType; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // [esp+4h] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 892))(this->?); /*0x4cf95b*/
  if ( !(_BYTE)result ) /*0x4cf963*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 896))(this->?); /*0x4cf96e*/
    if ( !(_BYTE)result ) /*0x4cf976*/
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 468))(this->?); /*0x4cf981*/
      if ( !(_BYTE)result ) /*0x4cf989*/
      {
        result = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 472))(this->?); /*0x4cf994*/
        if ( !(_BYTE)result ) /*0x4cf99c*/
        {
          vtable3 = this->?; /*0x4cf9a2*/
          BYTE1(this->?[0]) = 0; /*0x4cf9a5*/
          LOBYTE(this->?[0]) = 1; /*0x4cf9a8*/
          if ( *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)vtable3 + 756))(vtable3, &v10) == dword_8B3C58 ) /*0x4cf9c3*/
            GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x4cf9db*/
          v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?); /*0x4cf9e5*/
          v5 = (BombClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cf9ef*/
          v6 = this->?; /*0x4cf9f5*/
          this->? = v5; /*0x4cf9f8*/
          if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 456))(v6) ) /*0x4cf9fd*/
          {
            WeaponType = TechnoClass::GetWeaponType((TechnoClass *)((char *)this->? + 928), &v10); /*0x4cfa15*/
            FacingClass::Set_SyncLog((char *)this->? + 904, WeaponType); /*0x4cfa24*/
          }
          v8 = this->?; /*0x4cfa29*/
          v11[0] = v8[39]; /*0x4cfa3e*/
          v11[1] = v8[40]; /*0x4cfa45*/
          v11[2] = v8[41]; /*0x4cfa4c*/
          v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8); /*0x4cfa52*/
          return (int)StartAudioControllerAt(*(_DWORD *)(v9 + 1324), v11, 0); /*0x4cfa60*/
        }
      }
    }
  }
  return result; /*0x4cfa65*/
}



// ==== 0x004CFA70  LocomotionClass::CheckBridgeBlock  this=LocomotionClass  sig=csp ====
char __thiscall LocomotionClass::CheckBridgeBlock(LocomotionClass *this)
{
  int vtable1; // eax
  FootClass *LinkedTo; // edi
  Cell *v4; // eax
  _DWORD *v5; // eax

  if ( (*((int (__thiscall **)(FootClass *))this->LinkedTo->TechnoClass + 97))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->TechnoClass), !(_BYTE)vtable1) )
  {
    vtable1 = (*((int (__thiscall **)(FootClass *))this->LinkedTo->TechnoClass + 11))(this->LinkedTo); /*0x4cfa95*/
    if ( vtable1 == 2 /*0x4cfacc*/
      && (LinkedTo = this->LinkedTo, vtable1 = (int)LinkedTo[1].?, *(_BYTE *)(vtable1 + 3597))
      && (v4 = (Cell *)(*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 111))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          LOBYTE(vtable1) = Array::Contains((Array *)this->LinkedTo, (int)v5),
          !(_BYTE)vtable1) )
    {
      LOBYTE(vtable1) = (*((char (__thiscall **)(FootClass *, _DWORD, int))LinkedTo->TechnoClass + 289))(LinkedTo, 0, 1); /*0x4cfad6*/
    }
    else
    {
      this->u8_14 = 0; /*0x4cfadf*/
      *((_BYTE *)this + 81) = 1; /*0x4cfae3*/
      *((_BYTE *)this + 82) = 0; /*0x4cfae7*/
      *((_DWORD *)this + 14) = 0; /*0x4cfaeb*/
    }
  }
  return vtable1; /*0x4cfadc*/
}



// ==== 0x004CFB00  FlyLocomotionClass::ComputeVoxelMatrix  this=FlyLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelMatrix(FlyLocomotionClass *this, float *a2, _DWORD *a3)
{
  int *location; // eax
  int slopeIndex; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  location = this->?->?; /*0x4cfb0e*/
  v8[0] = *location; /*0x4cfb15*/
  v8[1] = location[1]; /*0x4cfb21*/
  v8[2] = location[2]; /*0x4cfb2d*/
  slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x4cfb43*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3221) ) /*0x4cfb4b*/
    slopeIndex = 0; /*0x4cfb55*/
  qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x4cfb6d*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v7) >> 10) + 1) >> 1) /*0x4cfba3*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x4cfba6*/
  if ( a3 && *a3 != -1 ) /*0x4cfbbb*/
  {
    *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x4cfbc5*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v7) >> 10) + 1) >> 1) & 0x1F; /*0x4cfbe9*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x4cfbfd*/
  return a2; /*0x4cfbff*/
}



// ==== 0x004CFC10  FlyLocomotionClass::SynchronizeFacingDirection  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection(FlyLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x4cfc2f*/
}



// ==== 0x004CFC80  FlyLocomotionClass::ddtor  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::ddtor(FlyLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *(IID *)a2 = g_CLSID_FlyLocomotion; /*0x4cfc96*/
  a2[3] = unk_7E9A8C; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}



// ==== 0x004CFCC0  FlyLocomotionClass::BeginMove  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::BeginMove(FlyLocomotionClass *this, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( this ) /*0x4cfcd6*/
    {
      *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4cfcd8*/
      *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}



// ==== 0x004CFCF0  FlyLocomotionClass::DispatchVirtualCall_0  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_0(FlyLocomotionClass *this)
{
  return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) > 0 ? 4 : 2;
}



// ==== 0x004CFD20  FlyLocomotionClass::ClearLocomotionDirty  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ClearLocomotionDirty(FlyLocomotionClass *this)
{
  if ( (*(unsigned __int8 (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x4cfd28*/
  {
    this->__pad_4F[0] = 1; /*0x4cfd2f*/
    *(_DWORD *)&this->__pad_4F[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 20, 30); /*0x4cfd48*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x4cfd63*/
      *(_DWORD *)&this->__pad_4F[1] = -*(_DWORD *)&this->__pad_4F[1]; /*0x4cfd6a*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x4cfd70*/
    this->FlyLocomotionClass_field_54 = 0; /*0x4cfd73*/
  }
  return StreamClass::ClearDirty((IUnknown *)this); /*0x4cfd80*/
}



// ==== 0x004CFD90  FlyLocomotionClass::ShortFunc_4CFD90  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ShortFunc_4CFD90(FlyLocomotionClass *this)
{
  return StreamClass::GetDirty((IUnknown *)this); /*0x4cfd9a*/
}



// ==== 0x004CFDA0  FlyLocomotionClass::DispatchVirtualCall_1  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::DispatchVirtualCall_1(FlyLocomotionClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3367) == 0; /*0x4cfdbe*/
}



// ==== 0x004CFE20  FlyLocomotionClass::ComputeFloatExpression_1  this=FlyLocomotionClass  sig=csp ====
__int64 __stdcall JumpjetLocomotionClass::ComputeFloatExpression_1(FlyLocomotionClass *this)
{
  int v1; // eax
  __int64 result; // rax
  int v3; // kr00_4

  v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x4cfe2a*/
  v3 = Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)this->CurrentSpeed); /*0x4cfe39*/
  WORD2(result) = HIWORD(v3); /*0x4cfe39*/
  LOWORD(result) = v3; /*0x4cfe39*/
  return result; /*0x4cfe3e*/
}



// ==== 0x004CFE50  FlyLocomotionClass::StubReturnZero_8  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_8(FlyLocomotionClass *this)
{
  if ( this->IsLanding ) /*0x4cfe54*/
    return 1; /*0x4cfe5b*/
  if ( this->IsTakingOff ) /*0x4cfe63*/
    return 0; /*0x4cfe6a*/
  return 3 /*0x4cfe60*/
       - ((*(unsigned __int8 (__stdcall **)(FlyLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) != 0);
}



// ==== 0x004CFE80  FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget  this=FlyLocomotionClass  sig=csp ====
void __stdcall FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(FlyLocomotionClass *this)
{
  HouseClass *owner; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  int ObjectVector_field_0x04; // ecx
  int v7; // eax
  int v8; // esi
  void (__stdcall **vtable0)(_DWORD); // edx
  ObjectVector v10; // [esp+Ch] [ebp-30h] BYREF
  ObjectVector v11; // [esp+24h] [ebp-18h] BYREF
  char thisa; // [esp+40h] [ebp+4h]

  if ( this->?->? ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v11, 0, 0); /*0x4cfea2*/
  *(_DWORD *)v11.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfeb7*/
  v11.ObjectVector_field_0x14 = 10; /*0x4cfebb*/
  v11.ObjectVector_field_0x10 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  *(_DWORD *)v10.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfecd*/
  v10.ObjectVector_field_0x14 = 10; /*0x4cfed3*/
  v10.ObjectVector_field_0x10 = 0; /*0x4cfed7*/
  if ( !*(_DWORD *)&dword_A8B238 /*0x4cfeef*/
    || (owner = this->?->?, owner->enemyHouseIndex == -1)
    || (thisa = 1, (unsigned __int8)House::IsCurrentPlayer((House *)owner)) )
  {
    thisa = 0; /*0x4cfefd*/
  }
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x4cff17*/
    if ( thisa ) /*0x4cff20*/
    {
      if ( *(_DWORD *)(v4 + 540) != *((_DWORD *)stru_A80220.? + this->?->?->enemyHouseIndex) ) /*0x4cff5e*/
        continue; /*0x4cff5e*/
    }
    else if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?->?, *(#375 **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(_BYTE *)(v4 + 129)
      && *(_BYTE *)(v4 + 144)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3226)
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 561)
      && (((int)dword_A8B230->vtable0 & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 1
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3598)) )
    {
      if ( *(_DWORD *)&dword_A8B238 /*0x4d003d*/
        && (unsigned __int8)House::IsCurrentPlayer((House *)this->?->?)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 540) + 52) + 422)
        && ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( v10.ObjectVector_field_0x10 >= v10.ObjectVector_field_0x08 /*0x4d0069*/
          && (!BYTE1(v10.ObjectVector_field_0x0C) && v10.ObjectVector_field_0x08
           || v10.ObjectVector_field_0x14 <= 0
           || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v10.__pad_0 + 8))(
                 &v10,
                 v10.ObjectVector_field_0x14 + v10.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v10.ObjectVector_field_0x10++; /*0x4d0074*/
        ObjectVector_field_0x04 = v10.ObjectVector_field_0x04; /*0x4d007b*/
      }
      else
      {
        if ( v11.ObjectVector_field_0x10 >= v11.ObjectVector_field_0x08 /*0x4d00ab*/
          && (!BYTE1(v11.ObjectVector_field_0x0C) && v11.ObjectVector_field_0x08
           || v11.ObjectVector_field_0x14 <= 0
           || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v11.__pad_0 + 8))(
                 &v11,
                 v11.ObjectVector_field_0x14 + v11.ObjectVector_field_0x08,
                 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v11.ObjectVector_field_0x10++; /*0x4d00b6*/
        ObjectVector_field_0x04 = v11.ObjectVector_field_0x04; /*0x4d00bd*/
      }
      *(_DWORD *)(ObjectVector_field_0x04 + 4 * v5) = v4; /*0x4d00c1*/
    }
  }
  if ( v10.ObjectVector_field_0x10 <= 0 ) /*0x4d00d1*/
  {
    if ( v11.ObjectVector_field_0x10 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v11.ObjectVector_field_0x10 - 1); /*0x4d0109*/
    v8 = v11.ObjectVector_field_0x04; /*0x4d0111*/
    vtable0 = (void (__stdcall **)(_DWORD))this->?->TechnoClass; /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v10.ObjectVector_field_0x10 - 1); /*0x4d00e2*/
    v8 = v10.ObjectVector_field_0x04; /*0x4d00ea*/
    vtable0 = (void (__stdcall **)(_DWORD))this->?->TechnoClass; /*0x4d00ee*/
  }
  vtable0[242](*(_DWORD *)(v8 + 4 * v7)); /*0x4d011b*/
LABEL_45:
  *(_DWORD *)v10.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0121*/
  if ( v10.ObjectVector_field_0x04 && BYTE1(v10.ObjectVector_field_0x0C) ) /*0x4d0136*/
  {
    __3_YAXPAX_Z((void *)v10.ObjectVector_field_0x04); /*0x4d0139*/
    v10.ObjectVector_field_0x04 = 0; /*0x4d0141*/
  }
  *(_DWORD *)v11.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0149*/
  BYTE1(v10.ObjectVector_field_0x0C) = 0; /*0x4d0150*/
  v10.ObjectVector_field_0x08 = 0; /*0x4d0154*/
  if ( v11.ObjectVector_field_0x04 ) /*0x4d0159*/
  {
    if ( BYTE1(v11.ObjectVector_field_0x0C) ) /*0x4d015f*/
      __3_YAXPAX_Z((void *)v11.ObjectVector_field_0x04); /*0x4d0162*/
  }
}


