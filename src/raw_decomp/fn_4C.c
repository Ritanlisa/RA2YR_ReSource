// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004C0750  DSurface::DrawDashedLineStipple  this=DSurface  sig=csp ====
int __thiscall DSurface_DrawDashedLineStipple(void *this, int *a2, int *a3, __int16 a4, int a5, int a6, char a7)
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
  int v45; // eax
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
  int v74; // eax
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  _WORD *v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int v88; // [esp+38h] [ebp+8h]
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
  if ( (*(int (__thiscall **)(void *))(this->q01C)(this) != 2 ) /*0x4c077d*/
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
  v77 = (_WORD *)StreamClass::ReadAndSeek(v7, v8 - *((_DWORD *)MEMORY[0x87E8A4] + 1)); /*0x4c07f3*/
  v87 = *((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x4c080b*/
  v88 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 92))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = (_WORD *)v88; /*0x4c0842*/
          v19 = MEMORY[0x87E8A4]; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = MEMORY[0x87E8A4]; /*0x4c0882*/
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
          v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c08dd*/
        else
          v24 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = MEMORY[0x87E8A4]; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = (_WORD *)v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = MEMORY[0x87E8A4]; /*0x4c0930*/
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
      v33 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0975*/
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
          v37 = MEMORY[0x87E8A4]; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *(_WORD *)(v88 + 2 * v35) = a4; /*0x4c09eb*/
              v37 = MEMORY[0x87E8A4]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 += v79; /*0x4c0a08*/
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
        v42 = MEMORY[0x87E8A4]; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = v77; /*0x4c0a7c*/
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
            *(_WORD *)(v45 + v91) = a4; /*0x4c0abc*/
            v42 = MEMORY[0x87E8A4]; /*0x4c0ac0*/
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
          v45 += v79; /*0x4c0af3*/
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
          v48 = (_WORD *)v88; /*0x4c0b35*/
          v49 = MEMORY[0x87E8A4]; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = MEMORY[0x87E8A4]; /*0x4c0b75*/
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
          v54 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0bd0*/
        else
          v54 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = MEMORY[0x87E8A4]; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = (_WORD *)v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = MEMORY[0x87E8A4]; /*0x4c0c23*/
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
      v63 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0c68*/
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
          v67 = MEMORY[0x87E8A4]; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *(_WORD *)(v88 + 2 * v65) = a4; /*0x4c0cde*/
              v67 = MEMORY[0x87E8A4]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 += v80; /*0x4c0cfb*/
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
        v72 = MEMORY[0x87E8A4]; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = v77; /*0x4c0d6f*/
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
            *(_WORD *)(v74 + v94) = a4; /*0x4c0daf*/
            v72 = MEMORY[0x87E8A4]; /*0x4c0db3*/
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
          v74 += v80; /*0x4c0de6*/
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
    (*(void (__thiscall **)(void *))(this->q018)(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/
}


// ==== 0x004C0E30  DSurface::DrawStippledRect  this=DSurface  sig=csp ====
char __thiscall DSurface_DrawStippledRect(void *this, _DWORD *a2, _DWORD *a3, __int16 a4, char a5)
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
  _WORD *v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  _WORD *v19; // ebp
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
  int v30; // edi
  int v31; // edx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  _WORD *v36; // ecx
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // eax
  _WORD *v40; // ebp
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
  int v51; // edi
  int v53; // edx
  _DWORD *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h]
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h]
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  int v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*(int (__thiscall **)(void *))(this->q01C)(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 120))(this, v62); /*0x4c0e55*/
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
  if ( !(unsigned __int8)ClipLine(&v67) ) /*0x4c0eaa*/
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
  v13 = (_WORD *)StreamClass::ReadAndSeek(v9, v12 - *((_DWORD *)MEMORY[0x87E8A4] + 1)); /*0x4c0f01*/
  v71 = *((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x4c0f18*/
  v72 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 92))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = (_WORD *)v72; /*0x4c0f61*/
        v16 = MEMORY[0x87E8A4]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = MEMORY[0x87E8A4]; /*0x4c0f7b*/
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
        v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0fef*/
      else
        v17 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = (_WORD *)v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = MEMORY[0x87E8A4]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = MEMORY[0x87E8A4]; /*0x4c1024*/
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
          v19 = (_WORD *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c1069*/
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
          v32 = MEMORY[0x87E8A4]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              *(_WORD *)(v34 + v33) = a4; /*0x4c1155*/
              v32 = MEMORY[0x87E8A4]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              v34 += 2; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 += v73; /*0x4c1182*/
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
          v29 = MEMORY[0x87E8A4]; /*0x4c10a5*/
          v30 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              *(_WORD *)(v30 + 2 * v27) = a4; /*0x4c10b9*/
              v29 = MEMORY[0x87E8A4]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 += v73; /*0x4c10ca*/
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
      v36 = (_WORD *)v72; /*0x4c11d0*/
      v37 = MEMORY[0x87E8A4]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = MEMORY[0x87E8A4]; /*0x4c11ea*/
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
      v38 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c125e*/
    else
      v38 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = (_WORD *)v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = MEMORY[0x87E8A4]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = MEMORY[0x87E8A4]; /*0x4c1293*/
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
        v40 = (_WORD *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c12d9*/
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
        v54 = MEMORY[0x87E8A4]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            *(_WORD *)(v55 + v72) = a4; /*0x4c13b5*/
            v54 = MEMORY[0x87E8A4]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            v55 += 2; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 += v46; /*0x4c13e5*/
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
        v50 = MEMORY[0x87E8A4]; /*0x4c1315*/
        v51 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            *(_WORD *)(v51 + 2 * v49) = a4; /*0x4c1329*/
            v50 = MEMORY[0x87E8A4]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 += v59; /*0x4c133a*/
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
  (*(void (__thiscall **)(void *))(this->q018)(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/
}


// ==== 0x004C1440  ObjectClass::method_4C1440  this=ObjectClass  sig=csp ====
int sub_4C1440()
{
  int result; // eax
  _DWORD v1[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v1, 0, sizeof(v1)); /*0x4c1452*/
  v1[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 44))(MEMORY[0x8A0E00], v1, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v1[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v1[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v1[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v1[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v1[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
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
int sub_4C14D0()
{
  int result; // eax
  _DWORD v1[63]; // [esp+8h] [ebp-1F8h] BYREF
  _DWORD v2[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v1, 0, sizeof(v1)); /*0x4c14e2*/
  memset(v2, 0, sizeof(v2)); /*0x4c14f5*/
  v1[0] = 252; /*0x4c14fc*/
  v2[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)MEMORY[0x8A0DF8] + 12))( /*0x4c1517*/
             MEMORY[0x8A0DF8],
             v1,
             v2);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v1[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v1[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v1[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v1[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v1[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v1[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v1[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v1[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v1[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v1[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v1[46] < 0x100u); /*0x4c15ef*/
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
int sub_4C1600()
{
  int result; // eax
  _DWORD v1[79]; // [esp+20h] [ebp-13Ch] BYREF

  result = MEMORY[0x8A0094]->lpVtbl->QueryInterface( /*0x4c1618*/
             MEMORY[0x8A0094],
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&MEMORY[0x8A0E00]);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))MEMORY[0x8A0E00])( /*0x4c1630*/
               MEMORY[0x8A0E00],
               &unk_7F8070,
               &MEMORY[0x8A0DF4]);
    if ( !result ) /*0x4c1634*/
    {
      memset(v1, 0, sizeof(v1)); /*0x4c1644*/
      v1[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 44))(MEMORY[0x8A0E00], v1, 0) /*0x4c1687*/
        && (v1[1] & 1) != 0
        && (v1[14] & 0x400) != 0
        && (v1[33] & 0x2000) != 0
        && (v1[33] & 0x1000) != 0
        && (v1[33] & 0x20000) != 0 )
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
int InitializeRadialGradientTexture()
{
  _DWORD *v0; // esi
  int result; // eax
  int v2; // eax
  void *v3; // eax
  int v4; // edi
  _WORD *v5; // ebx
  int v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // edx
  void *v10; // eax
  void *v11; // eax
  const void *v12; // [esp+58h] [ebp-ACh]
  int v13; // [esp+60h] [ebp-A4h]
  _DWORD *v14; // [esp+64h] [ebp-A0h]
  _DWORD v15[11]; // [esp+6Ch] [ebp-98h] BYREF
  _DWORD v16[27]; // [esp+98h] [ebp-6Ch] BYREF

  v0 = *(_DWORD **)(MEMORY[0x88731C] + 28); /*0x4c16b4*/
  v14 = v0; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, _DWORD *, __int64 *))(*(_DWORD *)MEMORY[0x8A0DF4] + 32))( /*0x4c16cf*/
             MEMORY[0x8A0DF4],
             &unk_7F80B0,
             v0,
             &MEMORY[0x8A0DF8]);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0() ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF4] + 24))( /*0x4c16fe*/
               MEMORY[0x8A0DF4],
               (char *)&MEMORY[0x8A0DF8] + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 24))( /*0x4c1718*/
                 MEMORY[0x8A0DF8],
                 HIDWORD(MEMORY[0x8A0DF8]));
      if ( !result ) /*0x4c171d*/
      {
        memset(v16, 0, sizeof(v16)); /*0x4c172e*/
        v2 = *v0; /*0x4c1730*/
        v16[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(v2 + 88))(v0, v16); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
          memset(v15, 0, sizeof(v15)); /*0x4c175a*/
          v15[3] = v16[3]; /*0x4c1768*/
          v15[4] = v16[2]; /*0x4c177d*/
          *(float *)&v15[7] = (float)v16[3]; /*0x4c1781*/
          v15[0] = 44; /*0x4c178d*/
          v15[10] = 1065353216; /*0x4c1795*/
          *(float *)&v15[8] = (float)v16[2]; /*0x4c179e*/
          result = (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(MEMORY[0x8A0DF8]) + 68))( /*0x4c17a5*/
                     HIDWORD(MEMORY[0x8A0DF8]),
                     v15);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 52))( /*0x4c17bf*/
                       MEMORY[0x8A0DF8],
                       HIDWORD(MEMORY[0x8A0DF8]));
            if ( !result ) /*0x4c17c4*/
            {
              if ( __2_YAPAXI_Z(0x78u) ) /*0x4c17cc*/
              {
                MEMORY[0x8A0E04] = (void *)sub_4A3270(256, 256, 0); /*0x4c17ec*/
                if ( MEMORY[0x8A0E04] ) /*0x4c17f1*/
                {
                  v3 = malloc(0x20000u); /*0x4c17f8*/
                  v12 = v3; /*0x4c1802*/
                  if ( !v3 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  v4 = -128; /*0x4c180c*/
                  v5 = v3; /*0x4c1811*/
                  v13 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    v6 = v4 * v4; /*0x4c1817*/
                    v7 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      v8 = Math::Sqrt((double)(v6 + v7 * v7)); /*0x4c1834*/
                      v9 = 400 - Math::RoundToInt(v8 * 3.0); /*0x4c184c*/
                      if ( v9 >= 0 ) /*0x4c184e*/
                      {
                        if ( v9 > 255 ) /*0x4c186d*/
                          v9 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v9 = 0; /*0x4c1850*/
                      }
                      ++v5; /*0x4c1886*/
                      ++v7; /*0x4c18af*/
                      *(v5 - 1) = (v9 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4c18b0*/
                                | (v9 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                | (v9 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
                    }
                    while ( v7 + 128 < 256 ); /*0x4c18c0*/
                    v4 = v13 + 1; /*0x4c18ca*/
                    v13 = v4; /*0x4c18cb*/
                  }
                  while ( v4 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(MEMORY[0x8A0E04], v12) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v16, 0, sizeof(v16)); /*0x4c1911*/
                  v16[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v14 + 88))(v14, v16); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    if ( __2_YAPAXI_Z(0x78u) ) /*0x4c1930*/
                      MEMORY[0x8A0E08] = (void *)sub_4A3270(v16[3], v16[2], 1); /*0x4c194f*/
                    else
                      MEMORY[0x8A0E08] = 0; /*0x4c1956*/
                    v10 = __2_YAPAXI_Z(0x18004u); /*0x4c1965*/
                    if ( v10 ) /*0x4c196f*/
                      v11 = (void *)sub_4A3630(v10); /*0x4c1973*/
                    else
                      v11 = 0; /*0x4c197a*/
                    MEMORY[0x8A0E10] = v11; /*0x4c1982*/
                    if ( !MEMORY[0x8A0E08] || !v11 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                MEMORY[0x8A0E04] = 0; /*0x4c1854*/
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
int DDraw_CleanupSurfaces()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  int result; // eax

  v0 = MEMORY[0x8A0E10]; /*0x4c19b1*/
  if ( MEMORY[0x8A0E10] ) /*0x4c19bc*/
  {
    DDraw::Init(MEMORY[0x8A0E10]); /*0x4c19c0*/
    __3_YAXPAX_Z(v0); /*0x4c19c6*/
    MEMORY[0x8A0E10] = 0; /*0x4c19ce*/
  }
  v1 = MEMORY[0x8A0E0C]; /*0x4c19d4*/
  if ( MEMORY[0x8A0E0C] ) /*0x4c19dc*/
  {
    DDraw::ReleaseSurfaces(MEMORY[0x8A0E0C]); /*0x4c19e0*/
    __3_YAXPAX_Z(v1); /*0x4c19e6*/
    MEMORY[0x8A0E0C] = 0; /*0x4c19ee*/
  }
  v2 = MEMORY[0x8A0E08]; /*0x4c19f4*/
  if ( MEMORY[0x8A0E08] ) /*0x4c19fc*/
  {
    DDraw::ReleaseSurfaces(MEMORY[0x8A0E08]); /*0x4c1a00*/
    __3_YAXPAX_Z(v2); /*0x4c1a06*/
    MEMORY[0x8A0E08] = 0; /*0x4c1a0e*/
  }
  v3 = MEMORY[0x8A0E04]; /*0x4c1a14*/
  if ( MEMORY[0x8A0E04] ) /*0x4c1a1c*/
  {
    DDraw::ReleaseSurfaces(MEMORY[0x8A0E04]); /*0x4c1a20*/
    __3_YAXPAX_Z(v3); /*0x4c1a26*/
    MEMORY[0x8A0E04] = 0; /*0x4c1a2e*/
  }
  if ( MEMORY[0x8A0DFC] ) /*0x4c1a3b*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DFC] + 8))(MEMORY[0x8A0DFC]); /*0x4c1a40*/
    MEMORY[0x8A0DFC] = 0; /*0x4c1a43*/
  }
  if ( MEMORY[0x8A0DF8] ) /*0x4c1a50*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DF8] + 8))(MEMORY[0x8A0DF8]); /*0x4c1a55*/
    MEMORY[0x8A0DF8] = 0; /*0x4c1a58*/
  }
  if ( MEMORY[0x8A0DF4] ) /*0x4c1a65*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DF4] + 8))(MEMORY[0x8A0DF4]); /*0x4c1a6a*/
    MEMORY[0x8A0DF4] = 0; /*0x4c1a6d*/
  }
  result = MEMORY[0x8A0E00]; /*0x4c1a73*/
  if ( MEMORY[0x8A0E00] ) /*0x4c1a7a*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0E00] + 8))(MEMORY[0x8A0E00]); /*0x4c1a7f*/
    MEMORY[0x8A0E00] = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/
}


// ==== 0x004C1A90  DSurface::BlitWhole  this=DSurface  sig=csp ====
int __stdcall DSurface_BlitWhole(int a1, int a2, int a3)
{
  return XSurface::BlitWhole(a1, a2, a3); /*0x4c1aa4*/
}


// ==== 0x004C1AB0  DSurface::IsDSurface  this=DSurface  sig=csp ====
char __thiscall DSurface_IsDSurface(std::codecvt_base *this)
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


// ==== 0x004C1B50  Vector::2DMagnitudeMath  this=AbstractClass  sig=csp ====
double __thiscall Math_Vector2D_Magnitude(int *this)
{
  double result; // st7

  result = Math::Sqrt((double)*this * (double)*this + (double)this->vtable2 * (double)this->vtable2); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}


// ==== 0x004C1B80  sub_4C1B80  this=-  sig=ida-proto ====
void sub_4C1B80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c1b8c*/
  MEMORY[0x8A0E38] = Math::Sqrt(v0 + v0); /*0x4c1b9e*/
}


// ==== 0x004C1BB0  sub_4C1BB0  this=-  sig=ida-proto ====
void sub_4C1BB0()
{
  MEMORY[0x8A0EA8] = MEMORY[0x8A0E38] / 60.0; /*0x4c1bbc*/
}


// ==== 0x004C1BD0  sub_4C1BD0  this=-  sig=ida-proto ====
void sub_4C1BD0()
{
  MEMORY[0x8A0E70] = 1.0 / MEMORY[0x8A0EA8]; /*0x4c1bdc*/
}


// ==== 0x004C1BF0  sub_4C1BF0  this=-  sig=ida-proto ====
void sub_4C1BF0()
{
  MEMORY[0x8A0E68] = 0.0174532925199433 * 45.0; /*0x4c1bfc*/
}


// ==== 0x004C1C10  sub_4C1C10  this=-  sig=ida-proto ====
void sub_4C1C10()
{
  MEMORY[0x8A0E40] = 0.0174532925199433 * 60.0; /*0x4c1c1c*/
}


// ==== 0x004C1C30  sub_4C1C30  this=-  sig=ida-proto ====
void sub_4C1C30()
{
  MEMORY[0x8A0E18] = 0.0174532925199433 * 90.0; /*0x4c1c3c*/
}


// ==== 0x004C1C50  sub_4C1C50  this=-  sig=ida-proto ====
__int64 sub_4C1C50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0E18] - MEMORY[0x8A0E40]); /*0x4c1c62*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0E38] * 0.5); /*0x4c1c76*/
  MEMORY[0x8A0EB0] = result; /*0x4c1c7b*/
  return result; /*0x4c1c80*/
}


// ==== 0x004C1C90  sub_4C1C90  this=-  sig=ida-proto ====
void sub_4C1C90()
{
  MEMORY[0x8A0E48] = Math::ArcTan((double)MEMORY[0x8A0EB0] * 0.00390625); /*0x4c1ca7*/
}


// ==== 0x004C1CC0  sub_4C1CC0  this=-  sig=ida-proto ====
void sub_4C1CC0()
{
  MEMORY[0x8A0E60] = Math::ArcTan((double)(2 * MEMORY[0x8A0EB0]) / MEMORY[0x8A0E38]); /*0x4c1ce2*/
}


// ==== 0x004C1CF0  sub_4C1CF0  this=-  sig=ida-proto ====
__int64 sub_4C1CF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0EB0]) + 0.5); /*0x4c1d0b*/
  MEMORY[0x8A0EA0] = result; /*0x4c1d10*/
  return result; /*0x4c1d16*/
}


// ==== 0x004C1D20  sub_4C1D20  this=-  sig=ida-proto ====
int sub_4C1D20()
{
  MEMORY[0x8A0E30] = 0; /*0x4c1d22*/
  MEMORY[0x8A0E32] = 0; /*0x4c1d28*/
  return 0; /*0x4c1d2e*/
}


// ==== 0x004C1D30  sub_4C1D30  this=-  sig=ida-proto ====
int sub_4C1D30()
{
  MEMORY[0x8A0E50] = 0; /*0x4c1d32*/
  MEMORY[0x8A0E54] = 0; /*0x4c1d37*/
  MEMORY[0x8A0E58] = 0; /*0x4c1d3c*/
  return 0; /*0x4c1d41*/
}


// ==== 0x004C1D50  sub_4C1D50  this=-  sig=ida-proto ====
int sub_4C1D50()
{
  MEMORY[0x8A0E80] = 0; /*0x4c1d55*/
  MEMORY[0x8A0E78] = 128; /*0x4c1d5f*/
  MEMORY[0x8A0E7C] = 128; /*0x4c1d64*/
  return 128; /*0x4c1d69*/
}


// ==== 0x004C1D70  sub_4C1D70  this=-  sig=ida-proto ====
int sub_4C1D70()
{
  MEMORY[0x8A0E20] = 0; /*0x4c1d72*/
  MEMORY[0x8A0E24] = 0; /*0x4c1d77*/
  MEMORY[0x8A0E28] = 0; /*0x4c1d7c*/
  MEMORY[0x8A0E2C] = 0; /*0x4c1d81*/
  return 0; /*0x4c1d86*/
}


// ==== 0x004C1D90  sub_4C1D90  this=-  sig=ida-proto ====
int sub_4C1D90()
{
  MEMORY[0x8A0E8C] = 0; /*0x4c1d97*/
  MEMORY[0x8A0E90] = 0; /*0x4c1d9c*/
  MEMORY[0x8A0E94] = 1; /*0x4c1da1*/
  MEMORY[0x8A0E95] = 0; /*0x4c1da8*/
  MEMORY[0x8A0E88] = (int)&vt_DynamicVectorClass_EBolt; /*0x4c1dad*/
  MEMORY[0x8A0E9C] = 10; /*0x4c1db7*/
  MEMORY[0x8A0E98] = 0; /*0x4c1dc1*/
  return atexit(sub_4C1DD0); /*0x4c1dcc*/
}


// ==== 0x004C1DD0  sub_4C1DD0  this=-  sig=ida-proto ====
void __cdecl sub_4C1DD0()
{
  MEMORY[0x8A0E88] = (int)&vt_VectorClass_EBolt; /*0x4c1dd8*/
  if ( MEMORY[0x8A0E8C] && MEMORY[0x8A0E95] ) /*0x4c1dec*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A0E8C]); /*0x4c1def*/
    MEMORY[0x8A0E8C] = 0; /*0x4c1df7*/
  }
  MEMORY[0x8A0E95] = 0; /*0x4c1dfd*/
  MEMORY[0x8A0E90] = 0; /*0x4c1e03*/
}


// ==== 0x004C1E10  TechnoClass::ResetDamageAccumulator  this=TechnoClass  sig=csp ====
_DWORD *__thiscall sub_4C1E10(_DWORD *this)
{
  *this = 0; /*0x4c1e1a*/
  this->nextArrayIndex = 0; /*0x4c1e1e*/
  this->owningHouseIndex = 0x10000; /*0x4c1e21*/
  this->vtable2 = 0; /*0x4c1e28*/
  this->suspendedMission = 0; /*0x4c1e2b*/
  this->referenceCount = 0; /*0x4c1e2e*/
  this->NeedsSaveOrLink = 0; /*0x4c1e31*/
  this->vtable3 = 0; /*0x4c1e34*/
  this->objectTypeFlags = 0; /*0x4c1e3a*/
  this->vtable4 = 0; /*0x4c1e3d*/
  this->uniqueId = 0; /*0x4c1e3f*/
  this->abstractFlags = 0; /*0x4c1e42*/
  return this; /*0x4c1e45*/
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

  Coord::To_Screen(MEMORY[0x887324], &a1, v16); /*0x4c1e85*/
  Coord::To_Screen(MEMORY[0x887324], &a4, v15); /*0x4c1e9a*/
  v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  v10 = a8 - v9 - 2; /*0x4c1eb2*/
  v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4c1ecf*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c1f13*/
           MEMORY[0x88731C],
           &MEMORY[0x886FA0],
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}


// ==== 0x004C1F20  Lightning::Draw  this=ObjectClass  sig=csp ====
int __thiscall Lightning_Draw(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE *v8; // esi
  int v9; // edi
  int *v10; // eax
  double v11; // st7
  int result; // eax
  int v13; // ebx
  int i; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // edx
  int v19; // esi
  _DWORD *v20; // edi
  double v21; // st7
  _DWORD *v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // edi
  _DWORD *v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // esi
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // eax
  _DWORD *v42; // ecx
  _DWORD *v43; // edx
  _DWORD *v44; // esi
  int v45; // edi
  int v46; // edx
  int v47; // eax
  int v48; // edi
  int v49; // esi
  int v50; // ebx
  int v51; // eax
  int v52; // edx
  char v53; // [esp+53h] [ebp-3F5h]
  int v54; // [esp+54h] [ebp-3F4h]
  int v55; // [esp+54h] [ebp-3F4h]
  int v56; // [esp+54h] [ebp-3F4h]
  int v57; // [esp+58h] [ebp-3F0h]
  int v58; // [esp+5Ch] [ebp-3ECh]
  _DWORD *v59; // [esp+60h] [ebp-3E8h]
  int v60; // [esp+60h] [ebp-3E8h]
  int v61; // [esp+64h] [ebp-3E4h]
  int v62; // [esp+68h] [ebp-3E0h]
  int v63; // [esp+6Ch] [ebp-3DCh]
  int v64; // [esp+70h] [ebp-3D8h]
  char *v65; // [esp+74h] [ebp-3D4h]
  int v66; // [esp+78h] [ebp-3D0h]
  int v67; // [esp+78h] [ebp-3D0h]
  int v69; // [esp+84h] [ebp-3C4h] BYREF
  int v70; // [esp+88h] [ebp-3C0h]
  int v71; // [esp+8Ch] [ebp-3BCh]
  _DWORD v72[9]; // [esp+90h] [ebp-3B8h] BYREF
  _DWORD v73[9]; // [esp+B4h] [ebp-394h] BYREF
  int v74; // [esp+D8h] [ebp-370h]
  _DWORD v75[9]; // [esp+DCh] [ebp-36Ch] BYREF
  _DWORD v76[2]; // [esp+100h] [ebp-348h] BYREF
  int v77; // [esp+108h] [ebp-340h]
  _DWORD v78[2]; // [esp+10Ch] [ebp-33Ch] BYREF
  int v79; // [esp+114h] [ebp-334h]
  _DWORD v80[2]; // [esp+118h] [ebp-330h] BYREF
  int v81; // [esp+120h] [ebp-328h]
  _DWORD v82[2]; // [esp+124h] [ebp-324h] BYREF
  int v83; // [esp+12Ch] [ebp-31Ch]
  _DWORD v84[2]; // [esp+130h] [ebp-318h] BYREF
  int v85; // [esp+138h] [ebp-310h]
  _DWORD v86[2]; // [esp+13Ch] [ebp-30Ch] BYREF
  int v87; // [esp+144h] [ebp-304h]
  _DWORD v88[6]; // [esp+148h] [ebp-300h] BYREF
  int v89[2]; // [esp+160h] [ebp-2E8h] BYREF
  int v90[2]; // [esp+168h] [ebp-2E0h] BYREF
  int v91[2]; // [esp+170h] [ebp-2D8h] BYREF
  int v92[2]; // [esp+178h] [ebp-2D0h] BYREF
  int v93[2]; // [esp+180h] [ebp-2C8h] BYREF
  _BYTE v94[36]; // [esp+188h] [ebp-2C0h] BYREF
  char v95; // [esp+1ACh] [ebp-29Ch] BYREF

  v8 = v94; /*0x4c1f33*/
  v9 = 8; /*0x4c1f3a*/
  do /*0x4c1f64*/
  {
    Array::ForEach((int)v8, 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f49*/
    Array::ForEach((int)(v8 + 36), 12, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f5b*/
    v8 += 88; /*0x4c1f60*/
    --v9; /*0x4c1f63*/
  }
  while ( v9 ); /*0x4c1f64*/
  v53 = 1; /*0x4c1f88*/
  v62 = 0; /*0x4c1f8d*/
  v10 = Coord::Subtract(v76, a2 - a5, a3 - a6, a4 - a7); /*0x4c1f95*/
  v69 = *v10; /*0x4c1f9f*/
  v70 = v10[1]; /*0x4c1fa6*/
  v71 = v10[2]; /*0x4c1fb1*/
  v11 = Math::Sqrt((double)v69 * (double)v69 + (double)v71 * (double)v71 + (double)v70 * (double)v70); /*0x4c1fd6*/
  result = Math::RoundToInt(v11); /*0x4c1fde*/
  v58 = result; /*0x4c1fe5*/
  if ( result )
  {
    v73[1] = a6; /*0x4c1ff1*/
    v73[2] = a7; /*0x4c1ffa*/
    v74 = (102 * result) >> 8; /*0x4c2014*/
    v57 = this->nextArrayIndex; /*0x4c202c*/
    v59 = v94; /*0x4c2033*/
    v73[0] = a5; /*0x4c203c*/
    qmemcpy(&v73[3], v73, 0x18u); /*0x4c2043*/
    v75[1] = a3; /*0x4c2048*/
    v75[0] = a2; /*0x4c204f*/
    v75[2] = a4; /*0x4c2059*/
    qmemcpy(&v75[3], v75, 0x18u); /*0x4c207c*/
    v65 = &v95; /*0x4c207e*/
    v64 = 0; /*0x4c208d*/
    v61 = (char *)v73 - v94; /*0x4c209e*/
    v13 = (23 * result) >> 8; /*0x4c20a6*/
    v54 = v13; /*0x4c20ab*/
    v63 = (char *)v72 - v94; /*0x4c20af*/
    while ( 1 )
    {
      while ( result > 64 && v62 < 8 ) /*0x4c20c1*/
      {
        for ( i = 0; i < 9; v72[i - 1] = v18 >> 1 ) /*0x4c20c7*/
        {
          v15 = v75[i + 1]; /*0x4c20d6*/
          v72[i] = (v75[i] + v73[i]) >> 1; /*0x4c20df*/
          v16 = v15 + v73[i + 1]; /*0x4c20e7*/
          v17 = v75[i + 2]; /*0x4c20e9*/
          v72[i + 1] = v16 >> 1; /*0x4c20f2*/
          v18 = v17 + v73[i + 2]; /*0x4c20fa*/
          i += 3; /*0x4c20fc*/
        }
        if ( v53 ) /*0x4c2110*/
        {
          v53 = 0; /*0x4c211a*/
          v19 = 0; /*0x4c211f*/
          v20 = v88; /*0x4c2121*/
          do /*0x4c2166*/
          {
            v21 = Math::SinCos((double)(int)this->referenceCount * 3.141592653589793 / (double)(v19 + 7)); /*0x4c214c*/
            *v20 = Math::RoundToInt(v21 * (double)v54); /*0x4c215d*/
            ++v19; /*0x4c215f*/
            ++v20; /*0x4c2160*/
          }
          while ( v19 < 6 ); /*0x4c2166*/
          v22 = &v72[1]; /*0x4c216f*/
          v23 = 3; /*0x4c217f*/
          v24 = (v88[2] + v88[4] + 2 * v13) >> 1; /*0x4c2184*/
          do /*0x4c21c0*/
          {
            v25 = v88[5]; /*0x4c219b*/
            *(v22 - 1) += v88[0] + v88[3]; /*0x4c21a2*/
            *v22 += v88[1] + v25; /*0x4c21b2*/
            v22[1] += v24; /*0x4c21b9*/
            v22 += 3; /*0x4c21bc*/
            --v23; /*0x4c21bf*/
          }
          while ( v23 ); /*0x4c21c0*/
          result = v58; /*0x4c21c2*/
        }
        if ( result > 128 ) /*0x4c21cb*/
        {
          v29 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c222e*/
          v72[0] += v29; /*0x4c223b*/
          v30 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c2244*/
          v72[1] += v30; /*0x4c2251*/
          v31 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c225a*/
          v72[2] += v31; /*0x4c225f*/
        }
        else
        {
          v26 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c21d6*/
          v72[0] += 2 * v13 * v26; /*0x4c21ee*/
          v27 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c21f2*/
          v72[1] += 2 * v13 * v27; /*0x4c220a*/
          v28 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c220e*/
          v72[2] += 2 * v13 * v28; /*0x4c221d*/
        }
        if ( v58 <= v74 ) /*0x4c2272*/
        {
          v37 = -v13; /*0x4c22d6*/
          v38 = &v72[4]; /*0x4c22d8*/
          v56 = 2; /*0x4c22dc*/
          do /*0x4c232a*/
          {
            *(v38 - 1) += Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c22fc*/
            *v38 += Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c230f*/
            v39 = Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c2311*/
            v40 = v38[1]; /*0x4c2316*/
            v38 += 3; /*0x4c2319*/
            *(v38 - 2) = v39 + v40; /*0x4c2322*/
            --v56; /*0x4c2326*/
          }
          while ( v56 ); /*0x4c232a*/
        }
        else
        {
          v32 = -v13; /*0x4c2274*/
          v33 = &v72[4]; /*0x4c2276*/
          v55 = 2; /*0x4c227a*/
          do /*0x4c22d2*/
          {
            v34 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c2289*/
            *(v33 - 1) = v72[0] + (v34 >> 1); /*0x4c229d*/
            v35 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c22a0*/
            *v33 = v72[1] + (v35 >> 1); /*0x4c22b4*/
            v36 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c22b6*/
            v33 += 3; /*0x4c22bf*/
            *(v33 - 2) = v72[2] + (v36 >> 1); /*0x4c22c6*/
            --v55; /*0x4c22ce*/
          }
          while ( v55 ); /*0x4c22d2*/
        }
        v13 >>= 1; /*0x4c233d*/
        v41 = v59; /*0x4c2345*/
        v58 >>= 1; /*0x4c2349*/
        v54 = v13; /*0x4c234d*/
        v42 = v59; /*0x4c2351*/
        v60 = 3; /*0x4c2353*/
        do /*0x4c2398*/
        {
          *v42 = *(_DWORD *)((char *)v42 + v63); /*0x4c2365*/
          v42[1] = *(_DWORD *)((char *)v42 + v63 + 4); /*0x4c236a*/
          v42[2] = *(_DWORD *)((char *)v42 + v63 + 8); /*0x4c2370*/
          v43 = (_DWORD *)((char *)v42 + v61); /*0x4c2377*/
          v44 = v42 + 9; /*0x4c2379*/
          v42 += 3; /*0x4c237c*/
          *v44 = *v43; /*0x4c2381*/
          v44[1] = v43[1]; /*0x4c2386*/
          v44[2] = v43[2]; /*0x4c238c*/
          --v60; /*0x4c2394*/
        }
        while ( v60 ); /*0x4c2398*/
        v41[18] = v58; /*0x4c23a2*/
        v41[21] = v64; /*0x4c23a9*/
        v41[19] = v13; /*0x4c23b9*/
        v41[20] = (v64 + v57) >> 1; /*0x4c23bc*/
        v59 = v41 + 22; /*0x4c23c3*/
        v63 -= 88; /*0x4c23cf*/
        v61 -= 88; /*0x4c23d7*/
        v65 += 88; /*0x4c23db*/
        ++v62; /*0x4c23ed*/
        result = v58; /*0x4c23f1*/
        qmemcpy(v73, v72, sizeof(v73)); /*0x4c23f5*/
        v64 = (v64 + v57) >> 1; /*0x4c23f7*/
      }
      v82[0] = v73[3]; /*0x4c2415*/
      v82[1] = v73[4]; /*0x4c2423*/
      v83 = v73[5]; /*0x4c2431*/
      v84[0] = v75[3]; /*0x4c243f*/
      v84[1] = v75[4]; /*0x4c2446*/
      v85 = v75[5]; /*0x4c245b*/
      Coord::To_Screen(MEMORY[0x887324], v84, v89); /*0x4c246a*/
      Coord::To_Screen(MEMORY[0x887324], v82, v93); /*0x4c2485*/
      v45 = v57 - ZCoordToScreenY(v85) - 2; /*0x4c24a5*/
      v66 = v64 - ZCoordToScreenY(v83) - 2; /*0x4c24ba*/
      v46 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x4c24c6*/
      v47 = *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1
          ? *(unsigned __int8 *)(v46 + a8)
          : *(unsigned __int16 *)(v46 + 2 * a8);
      (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c2512*/
        MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        v89,
        v93,
        v47,
        v45,
        v66,
        0);
      v86[0] = v73[6]; /*0x4c252a*/
      v86[1] = v73[7]; /*0x4c2538*/
      v80[0] = v75[6]; /*0x4c2546*/
      v80[1] = v75[7]; /*0x4c254d*/
      v87 = v73[8]; /*0x4c255b*/
      v81 = v75[8]; /*0x4c2578*/
      Coord::To_Screen(MEMORY[0x887324], v80, v92); /*0x4c257f*/
      Coord::To_Screen(MEMORY[0x887324], v86, v90); /*0x4c259a*/
      v48 = v57 - ZCoordToScreenY(v81) - 2; /*0x4c25b6*/
      v67 = v64 - ZCoordToScreenY(v87) - 2; /*0x4c25c7*/
      if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4c25d4*/
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c25e8*/
          MEMORY[0x88731C],
          &MEMORY[0x886FA0],
          v92,
          v90,
          *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + a8),
          v48,
          v67,
          0);
      else
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c2627*/
          MEMORY[0x88731C],
          &MEMORY[0x886FA0],
          v92,
          v90,
          *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * a8),
          v48,
          v67,
          0);
      v76[0] = v73[0]; /*0x4c2636*/
      v76[1] = v73[1]; /*0x4c2644*/
      v78[0] = v75[0]; /*0x4c2652*/
      v78[1] = v75[1]; /*0x4c2659*/
      v77 = v73[2]; /*0x4c266b*/
      v79 = v75[2]; /*0x4c2681*/
      Coord::To_Screen(MEMORY[0x887324], v78, &v69); /*0x4c2688*/
      Coord::To_Screen(MEMORY[0x887324], v76, v91); /*0x4c26a3*/
      v49 = v57 - ZCoordToScreenY(v79) - 2; /*0x4c26bd*/
      v50 = v64 - ZCoordToScreenY(v77) - 2; /*0x4c26cc*/
      v51 = *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1
          ? *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 15)
          : *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 30);
      (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c270d*/
        MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        &v69,
        v91,
        v51,
        v49,
        v50,
        0);
      result = --v62; /*0x4c2714*/
      if ( v62 < 0 ) /*0x4c2719*/
        break; /*0x4c2719*/
      v61 += 88; /*0x4c2730*/
      v63 += 88; /*0x4c273a*/
      v13 = *(v59 - 3); /*0x4c2749*/
      v52 = *(v59 - 2); /*0x4c274c*/
      v65 -= 88; /*0x4c274f*/
      qmemcpy(v73, v65, sizeof(v73)); /*0x4c2753*/
      v59 -= 22; /*0x4c2763*/
      qmemcpy(v75, v59, sizeof(v75)); /*0x4c2767*/
      v64 = v59[21]; /*0x4c276f*/
      v58 = v59[18]; /*0x4c2773*/
      v54 = v13; /*0x4c2777*/
      v57 = v52; /*0x4c277b*/
      result = v58; /*0x4c277f*/
    }
  }
  return result; /*0x4c2786*/
}


// ==== 0x004C2790  ObjectClass::method_4C2790  this=ObjectClass  sig=csp ====
int __thiscall sub_4C2790(int this)
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( *(_DWORD *)(this + 40) )
  {
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], (_DWORD *)this, (IUnknown *)v4); /*0x4c27aa*/
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], (_DWORD *)(this + 12), (IUnknown *)v3); /*0x4c27be*/
    if ( ClipLine(v4, v3, (int *)&MEMORY[0x87F8E4].__pad_5568[8532]) )
      Lightning::Draw(
        (_DWORD *)this,
        *(_DWORD *)this,
        *(_DWORD *)(this + 4),
        *(_DWORD *)(this + 8),
        *(_DWORD *)(this + 12),
        *(_DWORD *)(this + 16),
        *(_DWORD *)(this + 20),
        *(_BYTE *)(this + 44) != 0 ? 5 : 10);
    ++*(_DWORD *)(this + 28); /*0x4c281a*/
  }
  result = *(int *)(this + 40) >> 1; /*0x4c2821*/
  *(_DWORD *)(this + 40) = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}


// ==== 0x004C2830  ObjectClass::method_4C2830  this=ObjectClass  sig=csp ====
int sub_4C2830()
{
  int result; // eax
  int *v1; // eax
  int v2; // ecx
  int *v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // esi
  int *v8; // ebx
  int *v9; // esi
  int v10; // eax
  int v11; // eax
  void *v12; // edx
  int v13; // ecx
  _DWORD *v14; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]
  int v17[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+28h] [ebp-14h] BYREF
  char v19[12]; // [esp+30h] [ebp-Ch] BYREF

  result = MEMORY[0x8A0E98] - 1; /*0x4c2839*/
  for ( i = MEMORY[0x8A0E98] - 1; i >= 0; --i ) /*0x4c2843*/
  {
    v1 = (int *)*((_DWORD *)MEMORY[0x8A0E8C] + result); /*0x4c284f*/
    Block = v1; /*0x4c2852*/
    v2 = v1[8]; /*0x4c2856*/
    if ( v2 ) /*0x4c285b*/
    {
      v3 = (int *)(*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 176))( /*0x4c2888*/
                    v2,
                    v19,
                    v1[9],
                    0,
                    0,
                    0);
      v4 = *v3; /*0x4c288a*/
      v5 = v3[1]; /*0x4c288e*/
      v6 = v3[2]; /*0x4c2891*/
      if ( v4 != MEMORY[0x8A0E50] || v5 != MEMORY[0x8A0E54] || v6 != MEMORY[0x8A0E58] ) /*0x4c28a4*/
      {
        v7 = Block; /*0x4c28a6*/
        *(_DWORD *)Block = v4; /*0x4c28aa*/
        v7[1] = v5; /*0x4c28ac*/
        v7[2] = v6; /*0x4c28af*/
      }
      v1 = (int *)Block; /*0x4c28b2*/
    }
    v8 = v1 + 10; /*0x4c28b9*/
    v9 = v1; /*0x4c28be*/
    if ( v1[10] ) /*0x4c28b6*/
    {
      Coord::To_Screen(MEMORY[0x887324], v1, v18); /*0x4c28ce*/
      Coord::To_Screen(MEMORY[0x887324], v9 + 3, v17); /*0x4c28e2*/
      if ( ClipLine(v18, v17, &MEMORY[0x886FA0]) ) /*0x4c28f4*/
      {
        v10 = -(*((_BYTE *)v9 + 44) != 0); /*0x4c2904*/
        LOBYTE(v10) = v10 & 0xFB; /*0x4c2906*/
        Lightning::Draw(v9, *v9, v9[1], v9[2], v9[3], v9[4], v9[5], v10 + 10); /*0x4c2938*/
      }
      ++v9[7]; /*0x4c293d*/
    }
    *v8 >>= 1; /*0x4c2944*/
    if ( !*((_DWORD *)Block + 10) ) /*0x4c294a*/
    {
      v11 = (*(int (__thiscall **)(int *, void **))(MEMORY[0x8A0E88] + 16))(&MEMORY[0x8A0E88], &Block); /*0x4c2960*/
      if ( v11 != -1 && v11 < MEMORY[0x8A0E98] && v11 < --MEMORY[0x8A0E98] ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v11; /*0x4c2983*/
          *((_DWORD *)MEMORY[0x8A0E8C] + v11 - 1) = *((_DWORD *)MEMORY[0x8A0E8C] + v11); /*0x4c2987*/
        }
        while ( v11 < MEMORY[0x8A0E98] ); /*0x4c2993*/
      }
      v12 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        v13 = *((_DWORD *)Block + 8); /*0x4c299f*/
        v14 = (char *)Block + 32; /*0x4c29a2*/
        if ( v13 ) /*0x4c29a7*/
        {
          *(_DWORD *)(v13 + 1756) = 0; /*0x4c29a9*/
          *v14 = 0; /*0x4c29b3*/
        }
        __3_YAXPAX_Z(v12); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}


// ==== 0x004C29E0  ObjectClass::method_4C29E0  this=ObjectClass  sig=csp ====
void sub_4C29E0()
{
  int i; // esi
  _DWORD *v1; // eax
  int v2; // ecx

  for ( i = 0; i < MEMORY[0x8A0E98]; ++i ) /*0x4c29ed*/
  {
    v1 = (_DWORD *)*((_DWORD *)MEMORY[0x8A0E8C] + i); /*0x4c29f4*/
    if ( v1 ) /*0x4c29f9*/
    {
      v2 = v1[8]; /*0x4c29fb*/
      if ( v2 ) /*0x4c2a00*/
      {
        *(_DWORD *)(v2 + 1756) = 0; /*0x4c2a02*/
        v1[8] = 0; /*0x4c2a08*/
      }
      __3_YAXPAX_Z(v1); /*0x4c2a0c*/
    }
  }
  MEMORY[0x8A0E98] = 0; /*0x4c2a23*/
  if ( MEMORY[0x8A0E8C] && MEMORY[0x8A0E95] ) /*0x4c2a33*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A0E8C]); /*0x4c2a36*/
    MEMORY[0x8A0E8C] = 0; /*0x4c2a3e*/
  }
  MEMORY[0x8A0E95] = 0; /*0x4c2a44*/
  MEMORY[0x8A0E90] = 0; /*0x4c2a4a*/
}


// ==== 0x004C2A60  TechnoClass::CreateTrailParticle  this=ParticleClass  sig=csp ====
void *__thiscall sub_4C2A60(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  void *result; // eax

  *this = a2; /*0x4c2a74*/
  this->vtable2 = a3; /*0x4c2a7a*/
  this->vtable3 = a4; /*0x4c2a80*/
  v9 = a6; /*0x4c2a87*/
  this->vtable4 = a5; /*0x4c2a8b*/
  v10 = a7; /*0x4c2a8d*/
  this->q010 = v9; /*0x4c2a91*/
  this->nextArrayIndex = a8; /*0x4c2a98*/
  this->q014 = v10; /*0x4c2aa0*/
  this->referenceCount = Random::Range(MEMORY[0x886B88], 0, 256); /*0x4c2aa8*/
  if ( MEMORY[0x8A0E98] < MEMORY[0x8A0E90] /*0x4c2ae0*/
    || (MEMORY[0x8A0E95] || !MEMORY[0x8A0E90])
    && MEMORY[0x8A0E9C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8A0E88] + 8))(
         &MEMORY[0x8A0E88],
         MEMORY[0x8A0E90] + MEMORY[0x8A0E9C],
         0) )
  {
    v11 = MEMORY[0x8A0E98]++; /*0x4c2aed*/
    *((_DWORD *)MEMORY[0x8A0E8C] + v11) = this; /*0x4c2afc*/
  }
  result = __2_YAPAXI_Z(0x100u); /*0x4c2b04*/
  if ( result ) /*0x4c2b0f*/
    return (void *)ParticleSystemClass::Constructor((int)result, MEMORY[0x8871E0]->?, &a5, 0, 0, &MEMORY[0x8A0E50], 0); /*0x4c2b30*/
  return result; /*0x4c2b0e*/
}


// ==== 0x004C2B40  ObjectClass::method_4C2B40  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C2B40(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this->NeedsSaveOrLink; /*0x4c2b40*/
  if ( v2 ) /*0x4c2b4c*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 176))( /*0x4c2b75*/
                     v2,
                     v5,
                     this->objectTypeFlags,
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
    *a2 = MEMORY[0x8A0E50]; /*0x4c2ba6*/
    a2[1] = MEMORY[0x8A0E54]; /*0x4c2baf*/
    a2[2] = MEMORY[0x8A0E58]; /*0x4c2bb8*/
    return a2; /*0x4c2b97*/
  }
}


// ==== 0x004C2BD0  TechnoClass::updateSightRange  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::updateSightRange(_DWORD *this, IUnknown *aP1, int a3)
{
  if ( aP1 /*0x4c2bf2*/
    && (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1
    && aP1->__pad_8C[4]
    && !aP1->__pad_68[25] )
  {
    this->NeedsSaveOrLink = aP1; /*0x4c2c00*/
    this->objectTypeFlags = a3; /*0x4c2c03*/
  }
}


// ==== 0x004C2C10  UnitClass::updateHarvesting  this=UnitClass  sig=csp ====
int __thiscall sub_4C2C10(_DWORD *this)
{
  int result; // eax

  result = this->needsSave; /*0x4c2c10*/
  if ( result ) /*0x4c2c17*/
  {
    *(_DWORD *)(result + 1756) = 0; /*0x4c2c19*/
    this->needsSave = 0; /*0x4c2c1f*/
  }
  return result; /*0x4c2c22*/
}


// ==== 0x004C2C30  ObjectClass::??0Iostream_init_QAE_XZ_3  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_3(Iostream_init *this)
{
  return this; /*0x4c2c32*/
}


// ==== 0x004C2C40  _DynamicVectorClass_PAVEBolt::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::sub_4C2C40(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4c2c46*/
  *(_DWORD *)(this + 16) = 0; /*0x4c2c49*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4c2c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4c2c56*/
    *(_DWORD *)(this + 4) = 0; /*0x4c2c5e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c2c61*/
  *(_DWORD *)(this + 8) = 0; /*0x4c2c64*/
}


// ==== 0x004C2C70  _DynamicVectorClass_PAVEBolt::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::sub_4C2C70(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c2c70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c2c85*/
  else
    return 0; /*0x4c2c77*/
}


// ==== 0x004C2C90  _VectorClass_PAVEBolt::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4c2c9a*/
}


// ==== 0x004C2CA0  _VectorClass_PAVEBolt::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4c2ca2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4c2cad*/
  {
    v3 = 0; /*0x4c2caf*/
    if ( v2 <= 0 ) /*0x4c2cb3*/
      return 1; /*0x4c2cd3*/
    v4 = (_DWORD *)this->Items; /*0x4c2cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c2cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c2cc4*/
    {
      ++v3; /*0x4c2cc6*/
      ++v4; /*0x4c2cc7*/
      if ( v3 >= v2 ) /*0x4c2ccc*/
        return 1; /*0x4c2ccc*/
    }
  }
  return 0; /*0x4c2cce*/
}


// ==== 0x004C2CE0  _VectorClass_PAVEBolt::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4c2cec*/
  {
    this->IsInitialized = 0; /*0x4c2cf6*/
    if ( a3 ) /*0x4c2cfc*/
      v4 = a3; /*0x4c2d12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c2d0e*/
    this->IsInitialized = 1; /*0x4c2d16*/
    if ( v4 ) /*0x4c2d1a*/
    {
      if ( this->Items ) /*0x4c2d25*/
      {
        v6 = this->Capacity; /*0x4c2d2c*/
        if ( a2 < v6 ) /*0x4c2d31*/
          v6 = a2; /*0x4c2d33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c2d39*/
          ++i; /*0x4c2d3e*/
        if ( this->IsAllocated ) /*0x4c2d4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c2d56*/
          this->Items = 0; /*0x4c2d5e*/
        }
      }
      this->Items = v4; /*0x4c2d67*/
      this->Capacity = a2; /*0x4c2d6f*/
      this->IsAllocated = a3 == 0; /*0x4c2d72*/
      return 1; /*0x4c2d78*/
    }
    else
    {
      return 0; /*0x4c2d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c2d82*/
    return 1; /*0x4c2d88*/
  }
}


// ==== 0x004C2D90  _VectorClass_PAVEBolt::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EBolt::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4c2d9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4c2da3*/
    *(_DWORD *)(this + 4) = 0; /*0x4c2dab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c2dae*/
  *(_DWORD *)(this + 8) = 0; /*0x4c2db1*/
}


// ==== 0x004C2DC0  _VectorClass_PAVEBolt::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4c2dc0*/
    return 0; /*0x4c2dc8*/
  v3 = *(_DWORD *)(this + 8); /*0x4c2dce*/
  result = 0; /*0x4c2dd1*/
  if ( v3 <= 0 ) /*0x4c2dd5*/
    return -1; /*0x4c2dec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4c2ddb*/
  {
    if ( ++result >= v3 ) /*0x4c2dea*/
      return -1; /*0x4c2dea*/
  }
  return result; /*0x4c2dca*/
}


// ==== 0x004C2E00  _VectorClass_PAVEBolt::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EBolt::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c2e00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c2e15*/
  else
    return 0; /*0x4c2e07*/
}


// ==== 0x004C2E20  _DynamicVectorClass_PAVEBolt::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EBolt::sub_4C2E20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c2e2c*/
  {
    this->IsInitialized = 0; /*0x4c2e32*/
    if ( a3 ) /*0x4c2e38*/
      v4 = a3; /*0x4c2e4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c2e4a*/
    this->IsInitialized = 1; /*0x4c2e52*/
    if ( !v4 ) /*0x4c2e56*/
      return 0; /*0x4c2eca*/
    if ( this->Items ) /*0x4c2e58*/
    {
      v5 = this->q008; /*0x4c2e5f*/
      if ( a2 < v5 ) /*0x4c2e64*/
        v5 = a2; /*0x4c2e66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c2e6c*/
        ++i; /*0x4c2e71*/
      if ( this->IsAllocated ) /*0x4c2e7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c2e89*/
        this->Items = 0; /*0x4c2e91*/
      }
    }
    this->Items = v4; /*0x4c2e9a*/
    this->q008 = a2; /*0x4c2ea2*/
    this->IsAllocated = a3 == 0; /*0x4c2ea5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c2eae*/
  }
  v7 = this->q008; /*0x4c2eb1*/
  if ( v7 < this->Items ) /*0x4c2eb9*/
    this->Items = v7; /*0x4c2ebb*/
  return 1; /*0x4c2ebe*/
}


// ==== 0x004C2ED0  _DynamicVectorClass_PAVEBolt::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EBolt::sub_4C2ED0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4c2ed0*/
  result = 0; /*0x4c2ed3*/
  if ( v2 <= 0 ) /*0x4c2ed8*/
    return -1; /*0x4c2eef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4c2ede*/
  {
    if ( ++result >= v2 ) /*0x4c2eed*/
      return -1; /*0x4c2eed*/
  }
  return result; /*0x4c2ef2*/
}


// ==== 0x004C2F00  _VectorClass_PAVEBolt::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_EBolt::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c2f03*/
  *Block = &vt_VectorClass_EBolt; /*0x4c2f06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c2f10*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f18*/
    *(Block + 1) = 0; /*0x4c2f20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c2f2b*/
  *(Block + 2) = 0; /*0x4c2f31*/
  if ( (a2 & 1) != 0 ) /*0x4c2f38*/
    __3_YAXPAX_Z(Block); /*0x4c2f3b*/
  return (VectorClass *)Block; /*0x4c2f45*/
}


// ==== 0x004C2F50  _DynamicVectorClass_PAVEBolt::Constructor_VectorClass_EBolt___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c2f53*/
  *Block = &vt_VectorClass_EBolt; /*0x4c2f56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c2f60*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f68*/
    *(Block + 1) = 0; /*0x4c2f70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c2f7b*/
  *(Block + 2) = 0; /*0x4c2f81*/
  if ( (a2 & 1) != 0 ) /*0x4c2f88*/
    __3_YAXPAX_Z(Block); /*0x4c2f8b*/
  return (DynamicVector *)Block; /*0x4c2f95*/
}


// ==== 0x004C2FA0  sub_4C2FA0  this=-  sig=ida-proto ====
int sub_4C2FA0()
{
  MEMORY[0x8A0EB8] = 0; /*0x4c2fa2*/
  MEMORY[0x8A0EBC] = 0; /*0x4c2fa7*/
  MEMORY[0x8A0EC0] = 0; /*0x4c2fac*/
  MEMORY[0x8A0EC4] = 0; /*0x4c2fb1*/
  return 0; /*0x4c2fb6*/
}


// ==== 0x004C2FC0  EditClass::method_4C2FC0  this=EditClass  sig=csp ====
int *__thiscall sub_4C2FC0(
        int *this,
        DropListClass *aP1,
        ControlClass *aP2,
        int a4,
        DropListClass *aP4,
        ControlClass *aP5,
        ControlClass *aP6,
        ControlClass *aP7,
        int a9,
        int a10)
{
  DropListClass *v11; // eax
  AbstractClass *Instance; // eax
  int v13; // eax

  ControlClass::Construct(this, (ControlClass *)aP1, aP5, aP6, aP7, (ControlClass *)a9, 1, 0); /*0x4c2fe5*/
  v11 = aP4; /*0x4c2ff6*/
  BYTE1(v11) = BYTE1(aP4) & 0xFE; /*0x4c2ff8*/
  this->q02C = (int)v11; /*0x4c2ffc*/
  *this = (int)&vt_EditClass; /*0x4c3004*/
  this->Width = a10; /*0x4c300a*/
  this->q034 = (int)aP2; /*0x4c300d*/
  this->q038 = a4 - 1; /*0x4c3010*/
  this->q03C = wcslen((const wchar_t *)aP2); /*0x4c3018*/
  (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x4c3022*/
  this->Height = BuildingAnim::GetType(); /*0x4c302d*/
  if ( aP7 == (ControlClass *)-1 || a9 == -1 ) /*0x4c3035*/
  {
    Instance = TextRenderer::GetInstance(); /*0x4c3039*/
    if ( a9 == -1 ) /*0x4c3043*/
      this->q006 = Instance->referenceCount + 1; /*0x4c3049*/
    if ( aP7 == (ControlClass *)-1 ) /*0x4c304f*/
    {
      if ( wcslen((const wchar_t *)this->q034) ) /*0x4c3055*/
      {
        v13 = Text::MeasureWidth(this->q034, 0); /*0x4c3069*/
        this->q044 = 0; /*0x4c3071*/
        this->q005 = v13 + 6; /*0x4c3078*/
        return this; /*0x4c3081*/
      }
      this->q005 = (this->q038 + 1) * Text::MeasureWidth((int)stru_820768, 0) + 2; /*0x4c309a*/
    }
  }
  this->q044 = 0; /*0x4c309d*/
  return this; /*0x4c307d*/
}


// ==== 0x004C30B0  DropListClass::Constructor  this=EditClass  sig=csp ====
int __thiscall sub_4C30B0(_DWORD *this)
{
  *this = &vt_EditClass; /*0x4c30b3*/
  if ( COMObject::IsPrimaryInstance(this) ) /*0x4c30b9*/
    COMObject::DeactivateGlobal(this); /*0x4c30c4*/
  return GadgetClass::Dtor(this); /*0x4c30d0*/
}


// ==== 0x004C30E0  EditClass::SelectItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt34(int *this, wchar_t *String, int a3)
{
  size_t v4; // eax
  int v5; // edx

  this->q034 = (int)String; /*0x4c30ed*/
  this->q038 = a3 - 1; /*0x4c30f0*/
  v4 = wcslen(String); /*0x4c30f3*/
  v5 = *this; /*0x4c30f8*/
  this->q03C = v4; /*0x4c30ff*/
  return (*(int (__thiscall **)(int *))(v5 + 72))(this); /*0x4c3105*/
}


// ==== 0x004C3110  EditClass::GetItem  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt27(_DWORD *this, int a2)
{
  if ( !Control::DispatchClick(this, a2) ) /*0x4c311b*/
    return 0; /*0x4c3183*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 32))( /*0x4c314e*/
    MEMORY[0x887640],
    this->Width,
    this->Height,
    this->Visible,
    this->ID);
  (*(void (__thiscall **)(_DWORD *))(*this + 144))(this); /*0x4c3155*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 148))(this, this->q034); /*0x4c3163*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 36))(MEMORY[0x887640]); /*0x4c3171*/
  return 1; /*0x4c3179*/
}


// ==== 0x004C3190  EditClass::GetCount  this=EditClass  sig=csp ====
int __thiscall DropListClass::GetCount(_DWORD *this, int a2, ControlClass *aP2, int a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  char v10; // al

  if ( this->q044 ) /*0x4c3193*/
    return 0; /*0x4c319d*/
  v6 = a2; /*0x4c31a1*/
  if ( (a2 & 1) != 0 ) /*0x4c31a9*/
  {
    v6 = a2 & 0xFFFFFFFE; /*0x4c31af*/
    (*(void (__thiscall **)(_DWORD *))(*this + 80))(this); /*0x4c31b2*/
    (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x4c31b9*/
  }
  if ( (v6 & 0x100) == 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 88))(this) ) /*0x4c31cd*/
    return CellClass::Draw((int)this, v6, aP2, 0); /*0x4c31d2*/
  if ( *(_DWORD *)aP2->__pad_0 == 27 ) /*0x4c31dd*/
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 84))(this); /*0x4c31e3*/
    return CellClass::Draw((int)this, 0, aP2, 0); /*0x4c31f5*/
  }
  v7 = (unsigned __int8)Keyboard::MapKey((int)MEMORY[0x87F770], *(_DWORD *)aP2->__pad_0); /*0x4c3209*/
  v8 = *(_DWORD *)aP2->__pad_0; /*0x4c320b*/
  if ( (*(_DWORD *)aP2->__pad_0 & 0x1000) != 0 && v7 >= 48 && v7 <= 57 ) /*0x4c321f*/
  {
    BYTE1(v8) &= ~0x10u; /*0x4c3221*/
    *(_DWORD *)aP2->__pad_0 = v8; /*0x4c3227*/
    if ( (v6 & 0x44) != 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 152))(this, v7) ) /*0x4c3230*/
      return CellClass::Draw((int)this, v6, aP2, 0); /*0x4c3238*/
  }
  else if ( (*(_DWORD *)aP2->__pad_0 & 0x1000) == 0 && v7 >= 32 || v8 == 13 || v8 == 8 ) /*0x4c3255*/
  {
    if ( (v6 & 0x44) != 0 ) /*0x4c325a*/
      return CellClass::Draw((int)this, v6, aP2, 0); /*0x4c325a*/
    v9 = *this; /*0x4c3263*/
    v10 = Keyboard::MapKey((int)MEMORY[0x87F770], v8); /*0x4c3266*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v9 + 152))(this, v10) ) /*0x4c3271*/
      return CellClass::Draw((int)this, v6, aP2, 0); /*0x4c327a*/
  }
  BYTE1(v6) &= ~1u; /*0x4c327c*/
  *(_DWORD *)aP2->__pad_0 = 0; /*0x4c327f*/
  return CellClass::Draw((int)this, v6, aP2, 0); /*0x4c319c*/
}


// ==== 0x004C32A0  EditClass::GetSelected  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt36(int *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v1 = this->X; /*0x4c32a6*/
  v5[0] = this->Width; /*0x4c32a9*/
  v2 = this->q005; /*0x4c32ad*/
  v3 = this->q006; /*0x4c32b0*/
  v5[1] = v1; /*0x4c32b3*/
  v5[3] = v3; /*0x4c32b7*/
  v5[2] = v2; /*0x4c32c6*/
  return DrawBuildingTilesSHP(v5, 4, 1); /*0x4c32cf*/
}


// ==== 0x004C32E0  EditClass::GetItemText  this=EditClass  sig=csp ====
_DWORD *__thiscall DropListClass::_vt37(_DWORD *this, wchar_t *String)
{
  char v3; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *result; // eax
  int v9; // ebp
  _DWORD *v10; // ebp
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

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 88))(this); /*0x4c32ea*/
  v4 = this->Height; /*0x4c32f0*/
  v22 = this->Width + 1; /*0x4c32ff*/
  v5 = this->Visible - 2; /*0x4c3307*/
  v23[0] = v4 + 1; /*0x4c330a*/
  v6 = this->q02C; /*0x4c330e*/
  v21 = v3 != 0 ? 0x2000 : 0;
  v19 = v5; /*0x4c3315*/
  v18 = v21 | v6; /*0x4c3321*/
  v16 = *((_DWORD *)MEMORY[0xB054D4] + this->q040); /*0x4c3331*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314]); /*0x4c333a*/
  FillRectangle(v23, (int)String, MEMORY[0x887314], v7, (int)v25, (int)&v22, v16, 0, v18, v19); /*0x4c334f*/
  TextRenderer::GetInstance(); /*0x4c3357*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 88))(this); /*0x4c3362*/
  if ( (_BYTE)result ) /*0x4c3367*/
  {
    result = (_DWORD *)wcslen(String); /*0x4c336e*/
    if ( (unsigned int)result < this->q038 ) /*0x4c337b*/
    {
      v9 = Text::MeasureWidth((int)String, 0); /*0x4c3395*/
      v10 = (_DWORD *)(Text::MeasureWidth((int)MEMORY[0x82076C], 0) + v9); /*0x4c339c*/
      result = (_DWORD *)(this->Visible - 2); /*0x4c33a1*/
      if ( (int)v10 < (int)result ) /*0x4c33a7*/
      {
        v11 = Text::MeasureWidth((int)String, 0) + this->Width + 1; /*0x4c33ba*/
        v12 = this->Height; /*0x4c33be*/
        v13 = this->q02C; /*0x4c33c1*/
        v21 = v11; /*0x4c33c4*/
        v22 = v12 + 1; /*0x4c33cd*/
        v17 = v20 | v13; /*0x4c33db*/
        v15 = *((_DWORD *)MEMORY[0xB054D4] + this->q040); /*0x4c33e5*/
        v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v24); /*0x4c33f4*/
        return FillRectangle(v23, (int)MEMORY[0x82076C], MEMORY[0x887314], v14, (int)&v21, v15, 0, v17, -1, 0); /*0x4c3407*/
      }
    }
  }
  return result; /*0x4c340c*/
}


// ==== 0x004C3420  EditClass::SetItemText  this=EditClass  sig=csp ====
char __thiscall DropListClass::_vt38(_DWORD *this, int C)
{
  int v3; // edi
  _DWORD *Instance; // ebx
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  v3 = C; /*0x4c342d*/
  Instance = (_DWORD *)TextRenderer::GetInstance(); /*0x4c3431*/
  if ( C ) /*0x4c3435*/
  {
    if ( C == 8 ) /*0x4c343e*/
    {
      v9 = this->q03C; /*0x4c3540*/
      if ( v9 ) /*0x4c3545*/
      {
        v10 = this->q034; /*0x4c3547*/
        v11 = v9 - 1; /*0x4c354a*/
        this->q03C = v11; /*0x4c354b*/
        *(_WORD *)(v10 + 2 * v11) = 0; /*0x4c354e*/
        (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x4c3558*/
      }
      return 1; /*0x4c3558*/
    }
    if ( C == 13 ) /*0x4c3447*/
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 84))(this); /*0x4c3535*/
      return 0; /*0x4c353d*/
    }
    v5 = Text::MeasureWidth(this->q034, 0); /*0x4c345e*/
    if ( FontClass::GetPixelData(Instance, C) + v5 < this->Visible - 2 && this->q03C < this->q038 ) /*0x4c347e*/
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
            *(_WORD *)(this->q034 + 2 * this->q03C) = v3; /*0x4c350e*/
            v6 = this->q034; /*0x4c3515*/
            v7 = this->q03C + 1; /*0x4c3518*/
            this->q03C = v7; /*0x4c3519*/
            *(_WORD *)(v6 + 2 * v7) = 0; /*0x4c351e*/
            (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x4c3526*/
            return 1; /*0x4c352e*/
          }
          return 1; /*0x4c3506*/
        }
      }
      else if ( C != 32 ) /*0x4c3494*/
      {
        return 1; /*0x4c3494*/
      }
      if ( this->q03C ) /*0x4c34a1*/
        goto LABEL_11; /*0x4c34a6*/
    }
  }
  return 1; /*0x4c3529*/
}


// ==== 0x004C3570  EditClass::Close  this=EditClass  sig=csp ====
__int16 __thiscall DropListClass::_vt20(const wchar_t **this)
{
  const wchar_t *v2; // eax

  v2 = this->q034; /*0x4c3573*/
  this->q03C = 0; /*0x4c3576*/
  if ( v2 ) /*0x4c357f*/
    this->q03C = (const wchar_t *)wcslen(v2); /*0x4c358a*/
  return COMObject::ActivateGlobal(this); /*0x4c3594*/
}


// ==== 0x004C35A0  sub_4C35A0  this=-  sig=ida-proto ====
void sub_4C35A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c35ac*/
  MEMORY[0x8A0EE8] = Math::Sqrt(v0 + v0); /*0x4c35be*/
}


// ==== 0x004C35D0  sub_4C35D0  this=-  sig=ida-proto ====
void sub_4C35D0()
{
  MEMORY[0x8A0F38] = MEMORY[0x8A0EE8] / 60.0; /*0x4c35dc*/
}


// ==== 0x004C35F0  sub_4C35F0  this=-  sig=ida-proto ====
void sub_4C35F0()
{
  MEMORY[0x8A0F20] = 1.0 / MEMORY[0x8A0F38]; /*0x4c35fc*/
}


// ==== 0x004C3610  sub_4C3610  this=-  sig=ida-proto ====
void sub_4C3610()
{
  MEMORY[0x8A0F18] = 0.0174532925199433 * 45.0; /*0x4c361c*/
}


// ==== 0x004C3630  sub_4C3630  this=-  sig=ida-proto ====
void sub_4C3630()
{
  MEMORY[0x8A0EF0] = 0.0174532925199433 * 60.0; /*0x4c363c*/
}


// ==== 0x004C3650  sub_4C3650  this=-  sig=ida-proto ====
void sub_4C3650()
{
  MEMORY[0x8A0EC8] = 0.0174532925199433 * 90.0; /*0x4c365c*/
}


// ==== 0x004C3670  sub_4C3670  this=-  sig=ida-proto ====
__int64 sub_4C3670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0EC8] - MEMORY[0x8A0EF0]); /*0x4c3682*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0EE8] * 0.5); /*0x4c3696*/
  MEMORY[0x8A0F40] = result; /*0x4c369b*/
  return result; /*0x4c36a0*/
}


// ==== 0x004C36B0  sub_4C36B0  this=-  sig=ida-proto ====
void sub_4C36B0()
{
  MEMORY[0x8A0EF8] = Math::ArcTan((double)MEMORY[0x8A0F40] * 0.00390625); /*0x4c36c7*/
}


// ==== 0x004C36E0  sub_4C36E0  this=-  sig=ida-proto ====
void sub_4C36E0()
{
  MEMORY[0x8A0F10] = Math::ArcTan((double)(2 * MEMORY[0x8A0F40]) / MEMORY[0x8A0EE8]); /*0x4c3702*/
}


// ==== 0x004C3710  sub_4C3710  this=-  sig=ida-proto ====
__int64 sub_4C3710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0F40]) + 0.5); /*0x4c372b*/
  MEMORY[0x8A0F34] = result; /*0x4c3730*/
  return result; /*0x4c3736*/
}


// ==== 0x004C3740  sub_4C3740  this=-  sig=ida-proto ====
int sub_4C3740()
{
  MEMORY[0x8A0EE0] = 0; /*0x4c3742*/
  MEMORY[0x8A0EE2] = 0; /*0x4c3748*/
  return 0; /*0x4c374e*/
}


// ==== 0x004C3750  sub_4C3750  this=-  sig=ida-proto ====
int sub_4C3750()
{
  MEMORY[0x8A0F00] = 0; /*0x4c3752*/
  MEMORY[0x8A0F04] = 0; /*0x4c3757*/
  MEMORY[0x8A0F08] = 0; /*0x4c375c*/
  return 0; /*0x4c3761*/
}


// ==== 0x004C3770  sub_4C3770  this=-  sig=ida-proto ====
int sub_4C3770()
{
  MEMORY[0x8A0F30] = 0; /*0x4c3775*/
  MEMORY[0x8A0F28] = 128; /*0x4c377f*/
  MEMORY[0x8A0F2C] = 128; /*0x4c3784*/
  return 128; /*0x4c3789*/
}


// ==== 0x004C3790  sub_4C3790  this=-  sig=ida-proto ====
int sub_4C3790()
{
  MEMORY[0x8A0ED0] = 0; /*0x4c3792*/
  MEMORY[0x8A0ED4] = 0; /*0x4c3797*/
  MEMORY[0x8A0ED8] = 0; /*0x4c379c*/
  MEMORY[0x8A0EDC] = 0; /*0x4c37a1*/
  return 0; /*0x4c37a6*/
}


// ==== 0x004C37B0  sub_4C37B0  this=-  sig=ida-proto ====
int sub_4C37B0()
{
  MEMORY[0x8A0F48] = 0; /*0x4c37b2*/
  MEMORY[0x8A0F4C] = 0; /*0x4c37b7*/
  MEMORY[0x8A0F50] = 0; /*0x4c37bc*/
  MEMORY[0x8A0F54] = 0; /*0x4c37c1*/
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
int __thiscall sub_4C38D0(void *this)
{
  return ((_DWORD)this + 1) << 8; /*0x4c38d6*/
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
  MEMORY[0x8A3760] = 0; /*0x4c3bf2*/
  MEMORY[0x8A3764] = 0; /*0x4c3bf7*/
  MEMORY[0x8A3768] = 0; /*0x4c3bfc*/
  MEMORY[0x8A376C] = 0; /*0x4c3c01*/
  return 0; /*0x4c3c06*/
}


// ==== 0x004C3C10  sub_4C3C10  this=-  sig=ida-proto ====
int sub_4C3C10()
{
  MEMORY[0x8A3774] = 0; /*0x4c3c17*/
  MEMORY[0x8A3778] = 0; /*0x4c3c1c*/
  MEMORY[0x8A377C] = 1; /*0x4c3c21*/
  MEMORY[0x8A377D] = 0; /*0x4c3c28*/
  MEMORY[0x8A3770] = (int)&vt_DynamicVectorClass_EgoClass; /*0x4c3c2d*/
  MEMORY[0x8A3784] = 10; /*0x4c3c37*/
  MEMORY[0x8A3780] = 0; /*0x4c3c41*/
  return atexit(sub_4C3C50); /*0x4c3c4c*/
}


// ==== 0x004C3C50  sub_4C3C50  this=-  sig=ida-proto ====
void __cdecl sub_4C3C50()
{
  MEMORY[0x8A3770] = (int)&vt_VectorClass_EgoClass; /*0x4c3c58*/
  if ( MEMORY[0x8A3774] && MEMORY[0x8A377D] ) /*0x4c3c6c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A3774]); /*0x4c3c6f*/
    MEMORY[0x8A3774] = 0; /*0x4c3c77*/
  }
  MEMORY[0x8A377D] = 0; /*0x4c3c7d*/
  MEMORY[0x8A3778] = 0; /*0x4c3c83*/
}


// ==== 0x004C3C90  ObjectClass::method_4C3C90  this=AbstractClass  sig=csp ====
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
  if ( v3 < (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 128))(MEMORY[0x887314]) /*0x4c3d44*/
    && (v3 = *(_DWORD *)(this + 8),
        v3 > (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 128))(MEMORY[0x887314]) - 52)
    || v3 >= -16 && v3 <= 32
    || (result = a2) != 0 )
  {
    v9[3] = *(&MEMORY[0x8A00A4] + 1); /*0x4c3d56*/
    v5 = 0; /*0x4c3d5d*/
    v9[0] = (MEMORY[0x8A00A4] - 520) / 2; /*0x4c3d61*/
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
    result = MEMORY[0xA8ED80]; /*0x4c3d8a*/
    if ( MEMORY[0xA8ED80] ) /*0x4c3d91*/
    {
      v8 = v5; /*0x4c3da0*/
      v7 = wcslen(*(const wchar_t **)this); /*0x4c3da2*/
      return DrawTextRendererTextAligned(8454143, 0, v9, *(unsigned __int16 **)this, v7, v8, 0, MEMORY[0x8A0F58], 0); /*0x4c3dba*/
    }
  }
  return result; /*0x4c3dbf*/
}


// ==== 0x004C3DD0  ObjectClass::method_4C3DD0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C3DD0(int *this, int a2)
{
  int v3; // edx
  _DWORD v5[4]; // [esp+4h] [ebp-10h] BYREF

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth(*this, 0); /*0x4c3de5*/
  v3 = this->vtable3; /*0x4c3def*/
  v5[2] = MEMORY[0x8A00A4]; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = v3; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887314] + 8))( /*0x4c3e28*/
           MEMORY[0x887314],
           v5,
           a2,
           v5,
           0,
           1);
}


// ==== 0x004C49A0  _DynamicVectorClass_PAVEgoClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::sub_4C49A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4c49a6*/
  *(_DWORD *)(this + 16) = 0; /*0x4c49a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4c49b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4c49b6*/
    *(_DWORD *)(this + 4) = 0; /*0x4c49be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c49c1*/
  *(_DWORD *)(this + 8) = 0; /*0x4c49c4*/
}


// ==== 0x004C49D0  _DynamicVectorClass_PAVEgoClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::sub_4C49D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c49d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c49e5*/
  else
    return 0; /*0x4c49d7*/
}


// ==== 0x004C49F0  _VectorClass_PAVEgoClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4c49fa*/
}


// ==== 0x004C4A00  _VectorClass_PAVEgoClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4c4a02*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4c4a0d*/
  {
    v3 = 0; /*0x4c4a0f*/
    if ( v2 <= 0 ) /*0x4c4a13*/
      return 1; /*0x4c4a33*/
    v4 = (_DWORD *)this->Items; /*0x4c4a15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c4a1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c4a24*/
    {
      ++v3; /*0x4c4a26*/
      ++v4; /*0x4c4a27*/
      if ( v3 >= v2 ) /*0x4c4a2c*/
        return 1; /*0x4c4a2c*/
    }
  }
  return 0; /*0x4c4a2e*/
}


// ==== 0x004C4A40  _VectorClass_PAVEgoClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4c4a4c*/
  {
    this->IsInitialized = 0; /*0x4c4a56*/
    if ( a3 ) /*0x4c4a5c*/
      v4 = a3; /*0x4c4a72*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c4a6e*/
    this->IsInitialized = 1; /*0x4c4a76*/
    if ( v4 ) /*0x4c4a7a*/
    {
      if ( this->Items ) /*0x4c4a85*/
      {
        v6 = this->Capacity; /*0x4c4a8c*/
        if ( a2 < v6 ) /*0x4c4a91*/
          v6 = a2; /*0x4c4a93*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c4a99*/
          ++i; /*0x4c4a9e*/
        if ( this->IsAllocated ) /*0x4c4aab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c4ab6*/
          this->Items = 0; /*0x4c4abe*/
        }
      }
      this->Items = v4; /*0x4c4ac7*/
      this->Capacity = a2; /*0x4c4acf*/
      this->IsAllocated = a3 == 0; /*0x4c4ad2*/
      return 1; /*0x4c4ad8*/
    }
    else
    {
      return 0; /*0x4c4a7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c4ae2*/
    return 1; /*0x4c4ae8*/
  }
}


// ==== 0x004C4AF0  _VectorClass_PAVEgoClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EgoClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4c4afd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4c4b03*/
    *(_DWORD *)(this + 4) = 0; /*0x4c4b0b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c4b0e*/
  *(_DWORD *)(this + 8) = 0; /*0x4c4b11*/
}


// ==== 0x004C4B20  _VectorClass_PAVEgoClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4c4b20*/
    return 0; /*0x4c4b28*/
  v3 = *(_DWORD *)(this + 8); /*0x4c4b2e*/
  result = 0; /*0x4c4b31*/
  if ( v3 <= 0 ) /*0x4c4b35*/
    return -1; /*0x4c4b4c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4c4b3b*/
  {
    if ( ++result >= v3 ) /*0x4c4b4a*/
      return -1; /*0x4c4b4a*/
  }
  return result; /*0x4c4b2a*/
}


// ==== 0x004C4B60  _VectorClass_PAVEgoClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EgoClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c4b60*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c4b75*/
  else
    return 0; /*0x4c4b67*/
}


// ==== 0x004C4B80  _DynamicVectorClass_PAVEgoClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EgoClass::sub_4C4B80(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c4b8c*/
  {
    this->IsInitialized = 0; /*0x4c4b92*/
    if ( a3 ) /*0x4c4b98*/
      v4 = a3; /*0x4c4bae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c4baa*/
    this->IsInitialized = 1; /*0x4c4bb2*/
    if ( !v4 ) /*0x4c4bb6*/
      return 0; /*0x4c4c2a*/
    if ( this->Items ) /*0x4c4bb8*/
    {
      v5 = this->q008; /*0x4c4bbf*/
      if ( a2 < v5 ) /*0x4c4bc4*/
        v5 = a2; /*0x4c4bc6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c4bcc*/
        ++i; /*0x4c4bd1*/
      if ( this->IsAllocated ) /*0x4c4bde*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c4be9*/
        this->Items = 0; /*0x4c4bf1*/
      }
    }
    this->Items = v4; /*0x4c4bfa*/
    this->q008 = a2; /*0x4c4c02*/
    this->IsAllocated = a3 == 0; /*0x4c4c05*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c4c0e*/
  }
  v7 = this->q008; /*0x4c4c11*/
  if ( v7 < this->Items ) /*0x4c4c19*/
    this->Items = v7; /*0x4c4c1b*/
  return 1; /*0x4c4c1e*/
}


// ==== 0x004C4C30  _DynamicVectorClass_PAVEgoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EgoClass::sub_4C4C30(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4c4c30*/
  result = 0; /*0x4c4c33*/
  if ( v2 <= 0 ) /*0x4c4c38*/
    return -1; /*0x4c4c4f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4c4c3e*/
  {
    if ( ++result >= v2 ) /*0x4c4c4d*/
      return -1; /*0x4c4c4d*/
  }
  return result; /*0x4c4c52*/
}


// ==== 0x004C4C60  _VectorClass_PAVEgoClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_EgoClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c4c63*/
  *Block = &vt_VectorClass_EgoClass; /*0x4c4c66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c4c70*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4c78*/
    *(Block + 1) = 0; /*0x4c4c80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c4c8b*/
  *(Block + 2) = 0; /*0x4c4c91*/
  if ( (a2 & 1) != 0 ) /*0x4c4c98*/
    __3_YAXPAX_Z(Block); /*0x4c4c9b*/
  return (VectorClass *)Block; /*0x4c4ca5*/
}


// ==== 0x004C4CB0  _DynamicVectorClass_PAVEgoClass::Constructor_VectorClass_EgoClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c4cb3*/
  *Block = &vt_VectorClass_EgoClass; /*0x4c4cb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c4cc0*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4cc8*/
    *(Block + 1) = 0; /*0x4c4cd0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c4cdb*/
  *(Block + 2) = 0; /*0x4c4ce1*/
  if ( (a2 & 1) != 0 ) /*0x4c4ce8*/
    __3_YAXPAX_Z(Block); /*0x4c4ceb*/
  return (DynamicVector *)Block; /*0x4c4cf5*/
}


// ==== 0x004C4D00  sub_4C4D00  this=-  sig=ida-proto ====
void sub_4C4D00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c4d0c*/
  MEMORY[0x8A3798] = Math::Sqrt(v0 + v0); /*0x4c4d1e*/
}


// ==== 0x004C4D30  sub_4C4D30  this=-  sig=ida-proto ====
void sub_4C4D30()
{
  MEMORY[0x8A3808] = MEMORY[0x8A3798] / 60.0; /*0x4c4d3c*/
}


// ==== 0x004C4D50  sub_4C4D50  this=-  sig=ida-proto ====
void sub_4C4D50()
{
  MEMORY[0x8A37F0] = 1.0 / MEMORY[0x8A3808]; /*0x4c4d5c*/
}


// ==== 0x004C4D70  sub_4C4D70  this=-  sig=ida-proto ====
void sub_4C4D70()
{
  MEMORY[0x8A37E8] = 0.0174532925199433 * 45.0; /*0x4c4d7c*/
}


// ==== 0x004C4D90  sub_4C4D90  this=-  sig=ida-proto ====
void sub_4C4D90()
{
  MEMORY[0x8A37C0] = 0.0174532925199433 * 60.0; /*0x4c4d9c*/
}


// ==== 0x004C4DB0  sub_4C4DB0  this=-  sig=ida-proto ====
void sub_4C4DB0()
{
  MEMORY[0x8A3788] = 0.0174532925199433 * 90.0; /*0x4c4dbc*/
}


// ==== 0x004C4DD0  sub_4C4DD0  this=-  sig=ida-proto ====
__int64 sub_4C4DD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3788] - MEMORY[0x8A37C0]); /*0x4c4de2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A3798] * 0.5); /*0x4c4df6*/
  MEMORY[0x8A3810] = result; /*0x4c4dfb*/
  return result; /*0x4c4e00*/
}


// ==== 0x004C4E10  sub_4C4E10  this=-  sig=ida-proto ====
void sub_4C4E10()
{
  MEMORY[0x8A37C8] = Math::ArcTan((double)MEMORY[0x8A3810] * 0.00390625); /*0x4c4e27*/
}


// ==== 0x004C4E40  sub_4C4E40  this=-  sig=ida-proto ====
void sub_4C4E40()
{
  MEMORY[0x8A37E0] = Math::ArcTan((double)(2 * MEMORY[0x8A3810]) / MEMORY[0x8A3798]); /*0x4c4e62*/
}


// ==== 0x004C4E70  sub_4C4E70  this=-  sig=ida-proto ====
__int64 sub_4C4E70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A3810]) + 0.5); /*0x4c4e8b*/
  MEMORY[0x8A3804] = result; /*0x4c4e90*/
  return result; /*0x4c4e96*/
}


// ==== 0x004C4EA0  sub_4C4EA0  this=-  sig=ida-proto ====
int sub_4C4EA0()
{
  MEMORY[0x8A3790] = 0; /*0x4c4ea2*/
  MEMORY[0x8A3792] = 0; /*0x4c4ea8*/
  return 0; /*0x4c4eae*/
}


// ==== 0x004C4EB0  sub_4C4EB0  this=-  sig=ida-proto ====
int sub_4C4EB0()
{
  MEMORY[0x8A37D0] = 0; /*0x4c4eb2*/
  MEMORY[0x8A37D4] = 0; /*0x4c4eb7*/
  MEMORY[0x8A37D8] = 0; /*0x4c4ebc*/
  return 0; /*0x4c4ec1*/
}


// ==== 0x004C4ED0  sub_4C4ED0  this=-  sig=ida-proto ====
int sub_4C4ED0()
{
  MEMORY[0x8A3800] = 0; /*0x4c4ed5*/
  MEMORY[0x8A37F8] = 128; /*0x4c4edf*/
  MEMORY[0x8A37FC] = 128; /*0x4c4ee4*/
  return 128; /*0x4c4ee9*/
}


// ==== 0x004C4EF0  TaskForceClass::ParseUnitCountAndType  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall sub_4C4EF0(_DWORD *this, char *Buffer)
{
  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  const char *v9; // [esp-10h] [ebp-54h]
  _BYTE v10[64]; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *this = 0; /*0x4c4f0a*/
  this->vtable2 = 0; /*0x4c4f10*/
  sscanf(v9, MEMORY[0x82085C], &Buffer, v10); /*0x4c4f17*/
  *this = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName(v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex(v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = TypeClass::FindByName(v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->vtable2 = *((_DWORD *)MEMORY[0xA8B21C] + v8); /*0x4c4f82*/
      return this; /*0x4c4f85*/
    }
    else
    {
      v7 = *((_DWORD *)g_UnitTypeCount2 + Index); /*0x4c4f5c*/
      this->vtable2 = v7; /*0x4c4f61*/
      return this; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByName); /*0x4c4f39*/
    this->vtable2 = v4; /*0x4c4f3e*/
    return this; /*0x4c4f3c*/
  }
}


// ==== 0x004C4F90  TaskForceClass::Check  this=ObjectTypeClass  sig=csp ====
ObjectClass *__thiscall TaskForceClass::Check(_DWORD *this)
{
  sprintf((char *const)&stru_89E138.field_5668, (ObjectClass *)&stru_82083C.CampaignScore_field_0x20, (INIClass *)*this); /*0x4c4fa4*/
  return (ObjectClass *)&stru_89E138.field_5668; /*0x4c4fb1*/
}


// ==== 0x004C4FC0  ObjectClass::method_4C4FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_4C4FC0(int *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  result = Power::TimerProcess(*this); /*0x4c4fcd*/
  v4 = this->vtable2; /*0x4c4fd2*/
  if ( v4 ) /*0x4c4fd7*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4); /*0x4c4fdb*/
    Power::TimerProcess(v5); /*0x4c4fe1*/
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->vtable2 + 4) + 16))(this->vtable2 + 4); /*0x4c4ff0*/
    return Power::TimerProcess(v6); /*0x4c4ff6*/
  }
  return result; /*0x4c4ffb*/
}


// ==== 0x004C5000  sub_4C5000  this=-  sig=ida-proto ====
void sub_4C5000()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c500c*/
  MEMORY[0x8A3840] = Math::Sqrt(v0 + v0); /*0x4c501e*/
}


// ==== 0x004C5030  sub_4C5030  this=-  sig=ida-proto ====
void sub_4C5030()
{
  MEMORY[0x8A38A8] = MEMORY[0x8A3840] / 60.0; /*0x4c503c*/
}


// ==== 0x004C5050  sub_4C5050  this=-  sig=ida-proto ====
void sub_4C5050()
{
  MEMORY[0x8A3890] = 1.0 / MEMORY[0x8A38A8]; /*0x4c505c*/
}


// ==== 0x004C5070  sub_4C5070  this=-  sig=ida-proto ====
void sub_4C5070()
{
  MEMORY[0x8A3888] = 0.0174532925199433 * 45.0; /*0x4c507c*/
}


// ==== 0x004C5090  sub_4C5090  this=-  sig=ida-proto ====
void sub_4C5090()
{
  MEMORY[0x8A3848] = 0.0174532925199433 * 60.0; /*0x4c509c*/
}


// ==== 0x004C50B0  sub_4C50B0  this=-  sig=ida-proto ====
void sub_4C50B0()
{
  MEMORY[0x8A3820] = 0.0174532925199433 * 90.0; /*0x4c50bc*/
}


// ==== 0x004C50D0  sub_4C50D0  this=-  sig=ida-proto ====
__int64 sub_4C50D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3820] - MEMORY[0x8A3848]); /*0x4c50e2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A3840] * 0.5); /*0x4c50f6*/
  MEMORY[0x8A38B0] = result; /*0x4c50fb*/
  return result; /*0x4c5100*/
}


// ==== 0x004C5110  sub_4C5110  this=-  sig=ida-proto ====
void sub_4C5110()
{
  MEMORY[0x8A3850] = Math::ArcTan((double)MEMORY[0x8A38B0] * 0.00390625); /*0x4c5127*/
}


// ==== 0x004C5140  sub_4C5140  this=-  sig=ida-proto ====
void sub_4C5140()
{
  MEMORY[0x8A3868] = Math::ArcTan((double)(2 * MEMORY[0x8A38B0]) / MEMORY[0x8A3840]); /*0x4c5162*/
}


// ==== 0x004C5170  sub_4C5170  this=-  sig=ida-proto ====
__int64 sub_4C5170()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A38B0]) + 0.5); /*0x4c518b*/
  MEMORY[0x8A38A4] = result; /*0x4c5190*/
  return result; /*0x4c5196*/
}


// ==== 0x004C51A0  sub_4C51A0  this=-  sig=ida-proto ====
int sub_4C51A0()
{
  MEMORY[0x8A3838] = 0; /*0x4c51a2*/
  return 0; /*0x4c51ae*/
}


// ==== 0x004C51B0  sub_4C51B0  this=-  sig=ida-proto ====
int sub_4C51B0()
{
  MEMORY[0x8A3858] = 0; /*0x4c51b2*/
  MEMORY[0x8A385C] = 0; /*0x4c51b7*/
  MEMORY[0x8A3860] = 0; /*0x4c51bc*/
  return 0; /*0x4c51c1*/
}


// ==== 0x004C51D0  sub_4C51D0  this=-  sig=ida-proto ====
int sub_4C51D0()
{
  MEMORY[0x8A38A0] = 0; /*0x4c51d5*/
  MEMORY[0x8A3898] = 128; /*0x4c51df*/
  MEMORY[0x8A389C] = 128; /*0x4c51e4*/
  return 128; /*0x4c51e9*/
}


// ==== 0x004C51F0  sub_4C51F0  this=-  sig=ida-proto ====
int sub_4C51F0()
{
  MEMORY[0x8A3828] = 0; /*0x4c51f2*/
  MEMORY[0x8A382C] = 0; /*0x4c51f7*/
  MEMORY[0x8A3830] = 0; /*0x4c51fc*/
  MEMORY[0x8A3834] = 0; /*0x4c5201*/
  return 0; /*0x4c5206*/
}


// ==== 0x004C5210  sub_4C5210  this=-  sig=ida-proto ====
int sub_4C5210()
{
  MEMORY[0x8A3874] = 0; /*0x4c5217*/
  MEMORY[0x8A3878] = 0; /*0x4c521c*/
  MEMORY[0x8A387C] = 1; /*0x4c5221*/
  MEMORY[0x8A387D] = 0; /*0x4c5228*/
  MEMORY[0x8A3870] = (int)&vt_DynamicVectorClass_EMPulseClass; /*0x4c522d*/
  MEMORY[0x8A3884] = 10; /*0x4c5237*/
  MEMORY[0x8A3880] = 0; /*0x4c5241*/
  return atexit(sub_4C5250); /*0x4c524c*/
}


// ==== 0x004C5250  sub_4C5250  this=-  sig=ida-proto ====
void __cdecl sub_4C5250()
{
  if ( (MEMORY[0x8A3818] & 1) == 0 ) /*0x4c525a*/
  {
    MEMORY[0x8A3870] = (int)&vt_VectorClass_EMPulseClass; /*0x4c525e*/
    MEMORY[0x8A3818] |= 1u; /*0x4c5271*/
    if ( MEMORY[0x8A3874] ) /*0x4c5277*/
    {
      if ( MEMORY[0x8A387D] ) /*0x4c5281*/
      {
        __3_YAXPAX_Z(MEMORY[0x8A3874]); /*0x4c5284*/
        MEMORY[0x8A3874] = 0; /*0x4c528c*/
      }
    }
    MEMORY[0x8A387D] = 0; /*0x4c5296*/
    MEMORY[0x8A3878] = 0; /*0x4c529d*/
  }
}


// ==== 0x004C5370  EMPulseClass::Helper_4C5370  this=EMPulseClass  sig=csp ====
int __thiscall sub_4C5370(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4c5373*/
  v2 = MEMORY[0x8A3838]; /*0x4c5378*/
  *(_DWORD *)this = &EMPulseClass::`vftable'; /*0x4c537d*/
  *(_DWORD *)(this + 36) = v2; /*0x4c5383*/
  *(_DWORD *)(this + 40) = 0; /*0x4c5388*/
  *(_DWORD *)(this + 44) = 0; /*0x4c538b*/
  *(_DWORD *)(this + 48) = 0; /*0x4c538e*/
  *(_DWORD *)(this + 4) = &EMPulseClass::`vftable'; /*0x4c5391*/
  *(_DWORD *)(this + 8) = &EMPulseClass::`vftable'; /*0x4c5398*/
  *(_DWORD *)(this + 12) = &vt_EMPulseClass; /*0x4c539f*/
  return this; /*0x4c53a8*/
}


// ==== 0x004C5470  ObjectClass::method_4C5470  this=ObjectClass  sig=csp ====
int sub_4C5470()
{
  int result; // eax

  for ( result = MEMORY[0x8A3880]; MEMORY[0x8A3880]; result = MEMORY[0x8A3880] ) /*0x4c5477*/
  {
    if ( *(_DWORD *)MEMORY[0x8A3874] ) /*0x4c547e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8A3874] + 32))(*(_DWORD *)MEMORY[0x8A3874], 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}


// ==== 0x004C54A0  LocomotionClass::UpdateAll  this=LocomotionClass  sig=csp ====
wchar_t *sub_4C54A0()
{
  wchar_t *result; // eax
  int i; // esi
  _DWORD *v2; // ecx

  result = (wchar_t *)MEMORY[0x8A3880]; /*0x4c54a0*/
  for ( i = MEMORY[0x8A3880] - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0x8A3874] + i); /*0x4c54b3*/
    result = MEMORY[0xA8ED84]; /*0x4c54be*/
    if ( (int)MEMORY[0xA8ED84] >= v2[11] + v2[12] ) /*0x4c54c5*/
    {
      if ( v2 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(*v2 + 32))(v2, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/
}


// ==== 0x004C54E0  ObjectClass::ApplyEMPPulseEffect  this=ObjectClass  sig=csp ====
int __thiscall ApplyEMPPulseEffect(int this, int a2)
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
  _DWORD *v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // eax
  int v19; // ecx
  int ClosestObjectCell; // eax
  _DWORD *v21; // esi
  int v22; // eax
  void **v23; // edi
  int *v24; // eax
  void **v25; // eax
  int v26; // eax
  void *v27; // [esp-10h] [ebp-5Ch]
  int v28; // [esp+14h] [ebp-38h] BYREF
  int v29; // [esp+18h] [ebp-34h]
  int i; // [esp+1Ch] [ebp-30h]
  int v31; // [esp+20h] [ebp-2Ch]
  int v32; // [esp+24h] [ebp-28h]
  int v33; // [esp+28h] [ebp-24h] BYREF
  int v34; // [esp+2Ch] [ebp-20h]
  int v35; // [esp+30h] [ebp-1Ch]
  _BYTE v36[12]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v37[3]; // [esp+40h] [ebp-Ch] BYREF

  result = *(_DWORD *)(this + 48) + *(_DWORD *)(this + 44); /*0x4c54f3*/
  if ( result > (int)MEMORY[0xA8ED84] ) /*0x4c54f9*/
  {
    v32 = *(_DWORD *)(this + 40) * *(_DWORD *)(this + 40); /*0x4c5509*/
    v4 = 0; /*0x4c5513*/
    for ( i = 0; i < MEMORY[0xA8E3A0]; ++i ) /*0x4c551b*/
    {
      v5 = *((_DWORD *)MEMORY[0xA8E394] + v4); /*0x4c5527*/
      if ( *(_BYTE *)(v5 + 116) ) /*0x4c552a*/
      {
        if ( !*(_BYTE *)(v5 + 129) /*0x4c5551*/
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5)
          && *(int *)(v5 + 108) > 0 )
        {
          v6 = (*(__int16 *)(this + 36) << 8) + 128; /*0x4c556a*/
          v7 = (*(__int16 *)(this + 38) << 8) + 128; /*0x4c5570*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v36); /*0x4c5576*/
          v9 = Coord::Subtract(v37, *v8 - v6, v8[1] - v7, v8[2]); /*0x4c558c*/
          v33 = *v9; /*0x4c5593*/
          v34 = v9[1]; /*0x4c559e*/
          v35 = v9[2]; /*0x4c55a5*/
          if ( (int)Coord::Length(&v33) < *(_DWORD *)(this + 40) << 8 ) /*0x4c55b6*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 988))(v5, a2); /*0x4c55c1*/
        }
      }
      v4 = i + 1; /*0x4c55d3*/
    }
    result = *(_DWORD *)(this + 40); /*0x4c55e0*/
    i = -result; /*0x4c55e9*/
    for ( j = -result; j <= result; i = j ) /*0x4c55ed*/
    {
      v11 = -result; /*0x4c55f5*/
      v29 = -result; /*0x4c55f9*/
      if ( -result <= result ) /*0x4c55fd*/
      {
        do /*0x4c5899*/
        {
          v12 = j + *(_WORD *)(this + 38); /*0x4c560e*/
          LOWORD(v31) = v11 + *(_WORD *)(this + 36); /*0x4c5611*/
          HIWORD(v31) = v12; /*0x4c5616*/
          v28 = v31; /*0x4c5622*/
          if ( (unsigned __int16)v31 < 0x200u && v12 < 0x200u && Cell::Exists(&MEMORY[0x87F7E8], (__int16 *)&v28) ) /*0x4c5654*/
          {
            v13 = SHIWORD(v28) - *(__int16 *)(this + 38); /*0x4c5677*/
            v14 = (__int16)v28 - *(__int16 *)(this + 36); /*0x4c567c*/
            if ( v14 * v14 + v13 * v13 <= v32 ) /*0x4c5689*/
            {
              v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28); /*0x4c569e*/
              v16 = Cell::IsBridge(v15); /*0x4c56a2*/
              v17 = v16; /*0x4c56a7*/
              if ( v16 ) /*0x4c56ab*/
              {
                v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v16 + 72))(v16, v37); /*0x4c56ba*/
                if ( __PAIR32__(v18[1] / 256, *v18 / 256) == v28 && !*(_BYTE *)(v17[328] + 5889) ) /*0x4c56fa*/
                {
                  BuildingClass::Deactivate((int)v17); /*0x4c570a*/
                  v19 = v17[328]; /*0x4c5712*/
                  v17[321] = *(_DWORD *)(this + 48); /*0x4c5718*/
                  if ( *(_BYTE *)(v19 + 5796) ) /*0x4c571e*/
                    *(_BYTE *)(v17[135] + 22393) = 1; /*0x4c5732*/
                }
              }
              else
              {
                v33 = 0; /*0x4c5747*/
                v34 = 0; /*0x4c574b*/
                ClosestObjectCell = Object::FindClosestObjectCell(v15, &v33, 0, 0); /*0x4c574f*/
                v21 = (_DWORD *)ClosestObjectCell; /*0x4c5754*/
                if ( ClosestObjectCell /*0x4c5787*/
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 1
                   || (*(int (__thiscall **)(_DWORD *))(*v21 + 44))(v21) == 2)
                  && (v21[5] & 4) != 0 )
                {
                  if ( v21[413] ) /*0x4c578d*/
                  {
                    if ( (*(int (__thiscall **)(_DWORD *))(*v21 + 44))(v21) != 1 /*0x4c57b5*/
                      || (v22 = v21[433], !*(_BYTE *)(v22 + 3609))
                      || !*(_BYTE *)(v22 + 3608) )
                    {
                      if ( !v21[413] ) /*0x4c57c3*/
                        WinAPI::Wrapper(-2147467261); /*0x4c57d0*/
                      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v21[413] + 92))(v21[413]); /*0x4c57de*/
                      if ( !v21[413] ) /*0x4c57e1*/
                        WinAPI::Wrapper(-2147467261); /*0x4c57ee*/
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v21[413] + 16))(v21[413]) ) /*0x4c57fc*/
                      {
                        if ( !v21[413] ) /*0x4c5803*/
                          WinAPI::Wrapper(-2147467261); /*0x4c5810*/
                        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v21[413] + 72))(v21[413]); /*0x4c581e*/
                      }
                      v21[321] = *(_DWORD *)(this + 48); /*0x4c5829*/
                      v23 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4c5834*/
                      if ( v23 ) /*0x4c583b*/
                      {
                        v27 = (void *)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 25); /*0x4c585b*/
                        v24 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v21 + 72))(v21, v36); /*0x4c5863*/
                        v25 = AnimClass::ctor(v23, (void *)MEMORY[0x8871E0][1].?, v24, v27, 1, (void *)0x600, 0, 0); /*0x4c5876*/
                        if ( v25 ) /*0x4c587d*/
                          BuildingClass::AimTurret(v25, v21); /*0x4c5882*/
                      }
                    }
                  }
                }
              }
              v11 = v29; /*0x4c5887*/
            }
          }
          v26 = *(_DWORD *)(this + 40); /*0x4c588b*/
          j = i; /*0x4c588e*/
          v29 = ++v11; /*0x4c5895*/
        }
        while ( v11 <= v26 ); /*0x4c5899*/
      }
      result = *(_DWORD *)(this + 40); /*0x4c589f*/
      ++j; /*0x4c58a2*/
    }
  }
  return result; /*0x4c58af*/
}


// ==== 0x004C58C0  EMPulseClass::IterateCellsInRadius  this=EMPulseClass  sig=csp ====
int __thiscall sub_4C58C0(int this)
{
  int result; // eax
  int v3; // ebx
  int i; // ebp
  int v5; // edi
  unsigned __int16 v6; // cx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  result = *(_DWORD *)(this + 40); /*0x4c58c8*/
  v3 = -result; /*0x4c58cf*/
  for ( i = result * result; v3 <= result; ++v3 ) /*0x4c58d6*/
  {
    v5 = -result; /*0x4c58df*/
    if ( -result <= result ) /*0x4c58e3*/
    {
      do /*0x4c5978*/
      {
        v6 = v3 + *(_WORD *)(this + 38); /*0x4c58f4*/
        LOWORD(v11) = v5 + *(_WORD *)(this + 36); /*0x4c58f7*/
        HIWORD(v11) = v6; /*0x4c58fc*/
        v10 = v11; /*0x4c5908*/
        if ( (unsigned __int16)v11 < 0x200u && v6 < 0x200u && Cell::Exists(&MEMORY[0x87F7E8], (__int16 *)&v10) ) /*0x4c592a*/
        {
          v7 = (__int16)v10 - *(__int16 *)(this + 36); /*0x4c5940*/
          v8 = SHIWORD(v10) - *(__int16 *)(this + 38); /*0x4c5949*/
          if ( v7 * v7 + v8 * v8 <= i ) /*0x4c5957*/
          {
            v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4c5963*/
            v9[80] &= ~0x80000u; /*0x4c5968*/
          }
        }
        ++v5; /*0x4c5975*/
      }
      while ( v5 <= *(_DWORD *)(this + 40) ); /*0x4c5978*/
    }
    result = *(_DWORD *)(this + 40); /*0x4c597e*/
  }
  return result; /*0x4c598b*/
}


// ==== 0x004C59A0  EMPulseClass::Stat  this=EMPulseClass  sig=csp ====
int __thiscall EMPulseClass::_vt13(int this, unsigned int *a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x4c59a9*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 36)); /*0x4c59b5*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 38)); /*0x4c59c1*/
  Power::TimerProcess(*(_DWORD *)(this + 40)); /*0x4c59cc*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x4c59d7*/
  return Power::TimerProcess(*(_DWORD *)(this + 48)); /*0x4c59e7*/
}


// ==== 0x004C59F0  EMPulseClass::ddtor  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = 1490328072; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}


// ==== 0x004C5A30  EMPulseClass::Write  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Write(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x4c5a3b*/
  if ( result >= 0 ) /*0x4c5a42*/
  {
    if ( aP0 ) /*0x4c5a46*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x4c5a4f*/
      *(_DWORD *)aP0->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5a54*/
      *(_DWORD *)&aP0->__pad_0[4] = &EMPulseClass::`vftable'; /*0x4c5a5a*/
      *(_DWORD *)&aP0->__pad_0[8] = &EMPulseClass::`vftable'; /*0x4c5a61*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_EMPulseClass; /*0x4c5a68*/
    }
    return 0; /*0x4c5a6f*/
  }
  return result; /*0x4c5a71*/
}


// ==== 0x004C5A80  EMPulseClass::Seek  this=EMPulseClass  sig=csp ====
int __stdcall EMPulseClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4c5a8f*/
  if ( result >= 0 ) /*0x4c5a96*/
    return 0; /*0x4c5a98*/
  return result; /*0x4c5a9a*/
}


// ==== 0x004C5AA0  EMPulseClass::StubReturn52  this=EMPulseClass  sig=csp ====
int EMPulseClass::_vt12()
{
  return 52; /*0x4c5aa5*/
}


// ==== 0x004C5AB0  EMPulseClass::StubReturn55  this=EMPulseClass  sig=csp ====
int EMPulseClass::_vt11()
{
  return 55; /*0x4c5ab5*/
}


// ==== 0x004C5AC0  EMPulseClass::CopyTo  this=EMPulseClass  sig=csp ====
EMPulseClass *__fastcall EMPulseClass::CopyTo(AbstractClass *this, AbstractClass *a2, char a3)
{
  int v4; // eax
  AbstractClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5ac4*/
  *(_DWORD *)&this->__pad_0[4] = &EMPulseClass::`vftable'; /*0x4c5aca*/
  *(_DWORD *)&this->__pad_0[8] = &EMPulseClass::`vftable'; /*0x4c5ad1*/
  *(_DWORD *)&this->__pad_0[12] = &vt_EMPulseClass; /*0x4c5ad8*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius((int)this); /*0x4c5ae8*/
  LOBYTE(a2) = 1; /*0x4c5aed*/
  AbstractClass::AnnounceExpiredPointer(this, a2); /*0x4c5af1*/
  v6 = this; /*0x4c5b06*/
  v4 = (*(int (__thiscall **)(char *, AbstractClass **))(*(_DWORD *)&stru_89E138.__pad_566C[204] + 16))( /*0x4c5b0a*/
         &stru_89E138.__pad_566C[204],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_89E138.__pad_566C[220] ) /*0x4c5b1a*/
  {
    --*(_DWORD *)&stru_89E138.__pad_566C[220]; /*0x4c5b1f*/
    for ( ; /*0x4c5b25*/
          v4 < *(int *)&stru_89E138.__pad_566C[220];
          *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_566C[208] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_566C[208]
                                                                                        + 4 * v4) )
    {
      ++v4; /*0x4c5b2d*/
    }
  }
  AbstractClass::DTOR(this); /*0x4c5b41*/
  if ( (a3 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z(this); /*0x4c5b4e*/
  return (EMPulseClass *)this; /*0x4c5b58*/
}


// ==== 0x004C5B60  _DynamicVectorClass_PAVEMPulseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::sub_4C5B60(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4c5b66*/
  *(_DWORD *)(this + 16) = 0; /*0x4c5b69*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4c5b70*/
  {
    __3_YAXPAX_Z(v2); /*0x4c5b76*/
    *(_DWORD *)(this + 4) = 0; /*0x4c5b7e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c5b81*/
  *(_DWORD *)(this + 8) = 0; /*0x4c5b84*/
}


// ==== 0x004C5B90  _DynamicVectorClass_PAVEMPulseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::sub_4C5B90(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c5b90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c5ba5*/
  else
    return 0; /*0x4c5b97*/
}


// ==== 0x004C5BB0  _VectorClass_PAVEMPulseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4c5bba*/
}


// ==== 0x004C5BC0  _VectorClass_PAVEMPulseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4c5bc2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4c5bcd*/
  {
    v3 = 0; /*0x4c5bcf*/
    if ( v2 <= 0 ) /*0x4c5bd3*/
      return 1; /*0x4c5bf3*/
    v4 = (_DWORD *)this->Items; /*0x4c5bd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4c5bdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c5be4*/
    {
      ++v3; /*0x4c5be6*/
      ++v4; /*0x4c5be7*/
      if ( v3 >= v2 ) /*0x4c5bec*/
        return 1; /*0x4c5bec*/
    }
  }
  return 0; /*0x4c5bee*/
}


// ==== 0x004C5C00  _VectorClass_PAVEMPulseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4c5c0c*/
  {
    this->IsInitialized = 0; /*0x4c5c16*/
    if ( a3 ) /*0x4c5c1c*/
      v4 = a3; /*0x4c5c32*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c5c2e*/
    this->IsInitialized = 1; /*0x4c5c36*/
    if ( v4 ) /*0x4c5c3a*/
    {
      if ( this->Items ) /*0x4c5c45*/
      {
        v6 = this->Capacity; /*0x4c5c4c*/
        if ( a2 < v6 ) /*0x4c5c51*/
          v6 = a2; /*0x4c5c53*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c5c59*/
          ++i; /*0x4c5c5e*/
        if ( this->IsAllocated ) /*0x4c5c6b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c5c76*/
          this->Items = 0; /*0x4c5c7e*/
        }
      }
      this->Items = v4; /*0x4c5c87*/
      this->Capacity = a2; /*0x4c5c8f*/
      this->IsAllocated = a3 == 0; /*0x4c5c92*/
      return 1; /*0x4c5c98*/
    }
    else
    {
      return 0; /*0x4c5c3f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c5ca2*/
    return 1; /*0x4c5ca8*/
  }
}


// ==== 0x004C5CB0  _VectorClass_PAVEMPulseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_EMPulseClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4c5cbd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4c5cc3*/
    *(_DWORD *)(this + 4) = 0; /*0x4c5ccb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4c5cce*/
  *(_DWORD *)(this + 8) = 0; /*0x4c5cd1*/
}


// ==== 0x004C5CE0  _VectorClass_PAVEMPulseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4c5ce0*/
    return 0; /*0x4c5ce8*/
  v3 = *(_DWORD *)(this + 8); /*0x4c5cee*/
  result = 0; /*0x4c5cf1*/
  if ( v3 <= 0 ) /*0x4c5cf5*/
    return -1; /*0x4c5d0c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4c5cfb*/
  {
    if ( ++result >= v3 ) /*0x4c5d0a*/
      return -1; /*0x4c5d0a*/
  }
  return result; /*0x4c5cea*/
}


// ==== 0x004C5D20  _VectorClass_PAVEMPulseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_EMPulseClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4c5d20*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4c5d35*/
  else
    return 0; /*0x4c5d27*/
}


// ==== 0x004C5D40  _DynamicVectorClass_PAVEMPulseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_EMPulseClass::sub_4C5D40(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c5d4c*/
  {
    this->IsInitialized = 0; /*0x4c5d52*/
    if ( a3 ) /*0x4c5d58*/
      v4 = a3; /*0x4c5d6e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4c5d6a*/
    this->IsInitialized = 1; /*0x4c5d72*/
    if ( !v4 ) /*0x4c5d76*/
      return 0; /*0x4c5dea*/
    if ( this->Items ) /*0x4c5d78*/
    {
      v5 = this->q008; /*0x4c5d7f*/
      if ( a2 < v5 ) /*0x4c5d84*/
        v5 = a2; /*0x4c5d86*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4c5d8c*/
        ++i; /*0x4c5d91*/
      if ( this->IsAllocated ) /*0x4c5d9e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4c5da9*/
        this->Items = 0; /*0x4c5db1*/
      }
    }
    this->Items = v4; /*0x4c5dba*/
    this->q008 = a2; /*0x4c5dc2*/
    this->IsAllocated = a3 == 0; /*0x4c5dc5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4c5dce*/
  }
  v7 = this->q008; /*0x4c5dd1*/
  if ( v7 < this->Items ) /*0x4c5dd9*/
    this->Items = v7; /*0x4c5ddb*/
  return 1; /*0x4c5dde*/
}


// ==== 0x004C5DF0  _DynamicVectorClass_PAVEMPulseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_EMPulseClass::sub_4C5DF0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4c5df0*/
  result = 0; /*0x4c5df3*/
  if ( v2 <= 0 ) /*0x4c5df8*/
    return -1; /*0x4c5e0f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4c5dfe*/
  {
    if ( ++result >= v2 ) /*0x4c5e0d*/
      return -1; /*0x4c5e0d*/
  }
  return result; /*0x4c5e12*/
}


// ==== 0x004C5E20  _VectorClass_PAVEMPulseClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_EMPulseClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c5e23*/
  *Block = &vt_VectorClass_EMPulseClass; /*0x4c5e26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c5e30*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e38*/
    *(Block + 1) = 0; /*0x4c5e40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c5e4b*/
  *(Block + 2) = 0; /*0x4c5e51*/
  if ( (a2 & 1) != 0 ) /*0x4c5e58*/
    __3_YAXPAX_Z(Block); /*0x4c5e5b*/
  return (VectorClass *)Block; /*0x4c5e65*/
}


// ==== 0x004C5E70  _DynamicVectorClass_PAVEMPulseClass::Constructor_VectorClass_EMPulseClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4c5e73*/
  *Block = &vt_VectorClass_EMPulseClass; /*0x4c5e76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4c5e80*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e88*/
    *(Block + 1) = 0; /*0x4c5e90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4c5e9b*/
  *(Block + 2) = 0; /*0x4c5ea1*/
  if ( (a2 & 1) != 0 ) /*0x4c5ea8*/
    __3_YAXPAX_Z(Block); /*0x4c5eab*/
  return (DynamicVector *)Block; /*0x4c5eb5*/
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
  MEMORY[0x8A38D8] = Math::Sqrt(v0 + v0); /*0x4c5efe*/
}


// ==== 0x004C5F10  sub_4C5F10  this=-  sig=ida-proto ====
void sub_4C5F10()
{
  MEMORY[0x8A3970] = MEMORY[0x8A38D8] / 60.0; /*0x4c5f1c*/
}


// ==== 0x004C5F30  sub_4C5F30  this=-  sig=ida-proto ====
void sub_4C5F30()
{
  MEMORY[0x8A3958] = 1.0 / MEMORY[0x8A3970]; /*0x4c5f3c*/
}


// ==== 0x004C5F50  sub_4C5F50  this=-  sig=ida-proto ====
void sub_4C5F50()
{
  MEMORY[0x8A3950] = 0.0174532925199433 * 45.0; /*0x4c5f5c*/
}


// ==== 0x004C5F70  sub_4C5F70  this=-  sig=ida-proto ====
void sub_4C5F70()
{
  MEMORY[0x8A3928] = 0.0174532925199433 * 60.0; /*0x4c5f7c*/
}


// ==== 0x004C5F90  sub_4C5F90  this=-  sig=ida-proto ====
void sub_4C5F90()
{
  MEMORY[0x8A38B8] = 0.0174532925199433 * 90.0; /*0x4c5f9c*/
}


// ==== 0x004C5FB0  sub_4C5FB0  this=-  sig=ida-proto ====
__int64 sub_4C5FB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A38B8] - MEMORY[0x8A3928]); /*0x4c5fc2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A38D8] * 0.5); /*0x4c5fd6*/
  MEMORY[0x8A3978] = result; /*0x4c5fdb*/
  return result; /*0x4c5fe0*/
}


// ==== 0x004C5FF0  sub_4C5FF0  this=-  sig=ida-proto ====
void sub_4C5FF0()
{
  MEMORY[0x8A3930] = Math::ArcTan((double)MEMORY[0x8A3978] * 0.00390625); /*0x4c6007*/
}


// ==== 0x004C6020  sub_4C6020  this=-  sig=ida-proto ====
void sub_4C6020()
{
  MEMORY[0x8A3948] = Math::ArcTan((double)(2 * MEMORY[0x8A3978]) / MEMORY[0x8A38D8]); /*0x4c6042*/
}


// ==== 0x004C6050  sub_4C6050  this=-  sig=ida-proto ====
__int64 sub_4C6050()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A3978]) + 0.5); /*0x4c606b*/
  MEMORY[0x8A396C] = result; /*0x4c6070*/
  return result; /*0x4c6076*/
}


// ==== 0x004C6080  sub_4C6080  this=-  sig=ida-proto ====
int sub_4C6080()
{
  MEMORY[0x8A38D0] = 0; /*0x4c6082*/
  MEMORY[0x8A38D2] = 0; /*0x4c6088*/
  return 0; /*0x4c608e*/
}


// ==== 0x004C6090  sub_4C6090  this=-  sig=ida-proto ====
int sub_4C6090()
{
  MEMORY[0x8A3938] = 0; /*0x4c6092*/
  MEMORY[0x8A393C] = 0; /*0x4c6097*/
  MEMORY[0x8A3940] = 0; /*0x4c609c*/
  return 0; /*0x4c60a1*/
}


// ==== 0x004C60B0  sub_4C60B0  this=-  sig=ida-proto ====
int sub_4C60B0()
{
  MEMORY[0x8A3968] = 0; /*0x4c60b5*/
  MEMORY[0x8A3960] = 128; /*0x4c60bf*/
  MEMORY[0x8A3964] = 128; /*0x4c60c4*/
  return 128; /*0x4c60c9*/
}


// ==== 0x004C60D0  sub_4C60D0  this=-  sig=ida-proto ====
int sub_4C60D0()
{
  MEMORY[0x8A38C0] = 0; /*0x4c60d2*/
  MEMORY[0x8A38C4] = 0; /*0x4c60d7*/
  MEMORY[0x8A38C8] = 0; /*0x4c60dc*/
  MEMORY[0x8A38CC] = 0; /*0x4c60e1*/
  return 0; /*0x4c60e6*/
}


// ==== 0x004C60F0  sub_4C60F0  this=-  sig=ida-proto ====
int sub_4C60F0()
{
  MEMORY[0x8A3914] = 0; /*0x4c60fd*/
  MEMORY[0x8A3918] = 0; /*0x4c6102*/
  MEMORY[0x8A391C] = 1; /*0x4c6107*/
  MEMORY[0x8A3920] = 0; /*0x4c6111*/
  memset(&MEMORY[0x8A38E0], 0, 0x30u); /*0x4c6117*/
  MEMORY[0x8A3910] = 0; /*0x4c611e*/
  return atexit(nullsub_129); /*0x4c6128*/
}


// ==== 0x004C6130  nullsub_129  this=-  sig=ida-proto ====
void __cdecl nullsub_129()
{
  ; /*0x4c6130*/
}


// ==== 0x004C6140  Menu::Reset  this=Menu  sig=csp ====
int __thiscall sub_4C6140(int this)
{
  *(_DWORD *)(this + 52) = 0; /*0x4c614c*/
  *(_DWORD *)(this + 56) = 0; /*0x4c614f*/
  *(_DWORD *)(this + 60) = 1; /*0x4c6152*/
  *(_WORD *)(this + 64) = 0; /*0x4c6159*/
  memset((void *)this, 0, 0x30u); /*0x4c615d*/
  *(_WORD *)(this + 48) = 0; /*0x4c615f*/
  return this; /*0x4c6163*/
}


// ==== 0x004C6170  nullsub_130  this=-  sig=ida-proto ====
void nullsub_130()
{
  ; /*0x4c6170*/
}


// ==== 0x004C6180  Scenario::CopyLocalScenarioData  this=Scenario  sig=csp ====
int __thiscall sub_4C6180(int this)
{
  int v2; // ecx
  int i; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax

  v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *(_BYTE *)(v2 + this - 1) = *((_BYTE *)MEMORY[0xA8B230] + i + 7303) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  *(_DWORD *)(this + 52) = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x4c61b1*/
  v4 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x4c61ba*/
  v5 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x4c61c0*/
  if ( v4 != -1 ) /*0x4c61c9*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4c61d5*/
      v5 = 0; /*0x4c61db*/
    else
      v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4c61d7*/
  }
  *(_DWORD *)(this + 56) = v5; /*0x4c61dd*/
  result = *((_DWORD *)HouseClass_Player + 97); /*0x4c61e6*/
  *(_DWORD *)(this + 60) = result; /*0x4c61ec*/
  *(_WORD *)(this + 64) = *((_WORD *)MEMORY[0xA8B230] + 6864); /*0x4c61fc*/
  return result; /*0x4c6200*/
}


// ==== 0x004C6210  GameResult::CalcScore  this=GameResult  sig=csp ====
_WORD *__thiscall GameResult_CalcScore(int this)
{
  int i; // esi
  double v3; // st7
  int v4; // esi
  _WORD *result; // eax
  int v6; // ecx
  char *v7; // eax
  double v8; // [esp+8h] [ebp-Ch]

  for ( i = 0; i < 50; ++i ) /*0x4c6217*/
    ((void (__stdcall *)(int, char))ScenarioClass::SetGlobalToByID)(i, *(_BYTE *)(i + this)); /*0x4c6224*/
  v3 = (double)*(int *)(this + 52) * *((double *)MEMORY[0xA8B230] + 911); /*0x4c6244*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1824) != -1 ) /*0x4c624a*/
  {
    v8 = (double)*((int *)MEMORY[0xA8B230] + 1824); /*0x4c6250*/
    if ( v3 >= v8 ) /*0x4c625d*/
      v3 = v8; /*0x4c6261*/
  }
  v4 = Math::RoundToInt(v3); /*0x4c6270*/
  HouseClass::AddPower(HouseClass_Player, v4); /*0x4c6273*/
  *((_DWORD *)HouseClass_Player + 119) += v4; /*0x4c6285*/
  HouseClass::SetCombatPower((int)HouseClass_Player, *(_DWORD *)(this + 60)); /*0x4c6295*/
  result = MEMORY[0xA8B230]; /*0x4c629a*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13485) ) /*0x4c629f*/
  {
    v6 = *(_DWORD *)(this + 56); /*0x4c62a9*/
    if ( v6 <= 0 ) /*0x4c62ae*/
    {
      *((_WORD *)MEMORY[0xA8B230] + 6864) = *(_WORD *)(this + 64); /*0x4c62fc*/
      return result; /*0x4c6307*/
    }
    v7 = (char *)MEMORY[0xA8B230] + 4584; /*0x4c62b6*/
    *((_DWORD *)MEMORY[0xA8B230] + 1146) = MEMORY[0xA8ED84]; /*0x4c62bb*/
    *((_DWORD *)v7 + 1) = HIDWORD(v8); /*0x4c62c1*/
    *((_DWORD *)v7 + 2) = v6; /*0x4c62c4*/
    result = MEMORY[0xA8B230]; /*0x4c62c7*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 1146) == -1 ) /*0x4c62d3*/
    {
      *((_DWORD *)MEMORY[0xA8B230] + 1146) = MEMORY[0xA8ED84]; /*0x4c62db*/
      result = MEMORY[0xA8B230]; /*0x4c62e1*/
      *((_WORD *)MEMORY[0xA8B230] + 6864) = *(_WORD *)(this + 64); /*0x4c62eb*/
      return result; /*0x4c62f6*/
    }
  }
  result[6864] = *(_WORD *)(this + 64); /*0x4c630d*/
  return result; /*0x4c62ea*/
}


// ==== 0x004C6320  LoadGame::LoadBlock68  this=LoadGame  sig=csp ====
int __thiscall sub_4C6320(void *this, int a2)
{
  return (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 68, 0); /*0x4c632f*/
}


// ==== 0x004C6340  SaveGame::SaveBlock68  this=SaveGame  sig=csp ====
int __thiscall sub_4C6340(void *this, int a2)
{
  return (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/
}


// ==== 0x004C6360  sub_4C6360  this=-  sig=ida-proto ====
void sub_4C6360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c636c*/
  MEMORY[0x8A39A0] = Math::Sqrt(v0 + v0); /*0x4c637e*/
}


// ==== 0x004C6390  sub_4C6390  this=-  sig=ida-proto ====
void sub_4C6390()
{
  MEMORY[0x8A39F0] = MEMORY[0x8A39A0] / 60.0; /*0x4c639c*/
}


// ==== 0x004C63B0  sub_4C63B0  this=-  sig=ida-proto ====
void sub_4C63B0()
{
  MEMORY[0x8A39D8] = 1.0 / MEMORY[0x8A39F0]; /*0x4c63bc*/
}


// ==== 0x004C63D0  sub_4C63D0  this=-  sig=ida-proto ====
void sub_4C63D0()
{
  MEMORY[0x8A39D0] = 0.0174532925199433 * 45.0; /*0x4c63dc*/
}


// ==== 0x004C63F0  sub_4C63F0  this=-  sig=ida-proto ====
void sub_4C63F0()
{
  MEMORY[0x8A39A8] = 0.0174532925199433 * 60.0; /*0x4c63fc*/
}


// ==== 0x004C6410  sub_4C6410  this=-  sig=ida-proto ====
void sub_4C6410()
{
  MEMORY[0x8A3980] = 0.0174532925199433 * 90.0; /*0x4c641c*/
}


// ==== 0x004C6430  sub_4C6430  this=-  sig=ida-proto ====
__int64 sub_4C6430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3980] - MEMORY[0x8A39A8]); /*0x4c6442*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A39A0] * 0.5); /*0x4c6456*/
  MEMORY[0x8A39F8] = result; /*0x4c645b*/
  return result; /*0x4c6460*/
}


// ==== 0x004C6470  sub_4C6470  this=-  sig=ida-proto ====
void sub_4C6470()
{
  MEMORY[0x8A39B0] = Math::ArcTan((double)MEMORY[0x8A39F8] * 0.00390625); /*0x4c6487*/
}


// ==== 0x004C64A0  sub_4C64A0  this=-  sig=ida-proto ====
void sub_4C64A0()
{
  MEMORY[0x8A39C8] = Math::ArcTan((double)(2 * MEMORY[0x8A39F8]) / MEMORY[0x8A39A0]); /*0x4c64c2*/
}


// ==== 0x004C64D0  sub_4C64D0  this=-  sig=ida-proto ====
__int64 sub_4C64D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A39F8]) + 0.5); /*0x4c64eb*/
  MEMORY[0x8A39EC] = result; /*0x4c64f0*/
  return result; /*0x4c64f6*/
}


// ==== 0x004C6500  sub_4C6500  this=-  sig=ida-proto ====
int sub_4C6500()
{
  MEMORY[0x8A3998] = 0; /*0x4c6502*/
  return 0; /*0x4c650e*/
}


// ==== 0x004C6510  sub_4C6510  this=-  sig=ida-proto ====
int sub_4C6510()
{
  MEMORY[0x8A39B8] = 0; /*0x4c6512*/
  MEMORY[0x8A39BC] = 0; /*0x4c6517*/
  MEMORY[0x8A39C0] = 0; /*0x4c651c*/
  return 0; /*0x4c6521*/
}


// ==== 0x004C6530  sub_4C6530  this=-  sig=ida-proto ====
int sub_4C6530()
{
  MEMORY[0x8A39E8] = 0; /*0x4c6535*/
  MEMORY[0x8A39E0] = 128; /*0x4c653f*/
  MEMORY[0x8A39E4] = 128; /*0x4c6544*/
  return 128; /*0x4c6549*/
}


// ==== 0x004C6550  sub_4C6550  this=-  sig=ida-proto ====
int sub_4C6550()
{
  MEMORY[0x8A3988] = 0; /*0x4c6552*/
  MEMORY[0x8A398C] = 0; /*0x4c6557*/
  MEMORY[0x8A3990] = 0; /*0x4c655c*/
  MEMORY[0x8A3994] = 0; /*0x4c6561*/
  return 0; /*0x4c6566*/
}


// ==== 0x004C65E0  EventClass::Add  this=EventClass  sig=csp ====
char *__thiscall EventClass::Add(char *this, AbstractClass *aP1, unsigned __int8 a3, int a4, char a5)
{
  Debug::Log(); /*0x4c65fc*/
  if ( (int)aP1 < 0 ) /*0x4c660a*/
  {
    this->q008 = -1; /*0x4c6631*/
    *this = 0; /*0x4c6635*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6610*/
    *this = a3; /*0x4c661a*/
    *(_DWORD *)(this + 7) = a4; /*0x4c661c*/
    this->q00B = a5; /*0x4c6620*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}


// ==== 0x004C6650  PlayerClass::SetTargetOrClear  this=PlayerClass  sig=csp ====
char *__thiscall PlayerClass::SetTargetOrClear(char *this, AbstractClass *aP1, char arg4, _WORD *a3)
{
  Debug::Log(); /*0x4c666c*/
  if ( (int)aP1 < 0 ) /*0x4c667a*/
  {
    this->q008 = -1; /*0x4c66a4*/
    *this = 0; /*0x4c66a8*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c66b3*/
    return this; /*0x4c66b1*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c667c*/
    *this = arg4; /*0x4c6683*/
    *(_WORD *)(this + 7) = *a3; /*0x4c6688*/
    *(_WORD *)(this + 9) = a3[1]; /*0x4c6690*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c669a*/
    return this; /*0x4c669d*/
  }
}


// ==== 0x004C66C0  EventClass::AddEvent  this=EventClass  sig=csp ====
char *__thiscall EventClass_AddEvent(char *this, int a2, unsigned __int8 a3)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    this->q008 = -1; /*0x4c6701*/
    *this = 0; /*0x4c6705*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    this->q008 = a2; /*0x4c66ec*/
    *this = a3; /*0x4c66ef*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}


// ==== 0x004C6720  EventClass::Add2  this=EventClass  sig=csp ====
char *__thiscall EventClass::Add2(char *this, AnimClass *aP1, unsigned __int8 a3, IUnknown *aP3)
{
  Debug::Log(); /*0x4c673c*/
  if ( (int)aP1 < 0 ) /*0x4c674a*/
  {
    this->q008 = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    *(_DWORD *)(this + 7) = aP3; /*0x4c6755*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}


// ==== 0x004C6780  ScenarioClass::SetEvent  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass::SetEvent(char *this, IUnknown *aP1, char a3, int a4, char a5, int a6, char a7)
{
  Debug::Log(); /*0x4c679c*/
  if ( (int)aP1 < 0 ) /*0x4c67aa*/
  {
    this->q002 = -1; /*0x4c67e2*/
    *this = 0; /*0x4c67e6*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c67ee*/
    return this; /*0x4c67f1*/
  }
  else
  {
    this->q002 = (char)aP1; /*0x4c67b0*/
    *this = a3; /*0x4c67ba*/
    *(_DWORD *)(this + 7) = a4; /*0x4c67bc*/
    this->q00B = a5; /*0x4c67c2*/
    this->q003 = a6; /*0x4c67cc*/
    this->q010 = a7; /*0x4c67d1*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c67da*/
    return this; /*0x4c67cf*/
  }
}


// ==== 0x004C6860  ScriptAction::InitActionFields  this=ScriptAction  sig=csp ====
IUnknown *__thiscall ScriptAction::InitActionFields(
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
  IUnknown *result; // eax

  result = (IUnknown *)this; /*0x4c6860*/
  if ( a2 < 0 ) /*0x4c6868*/
  {
    this->q008 = -1; /*0x4c68ca*/
    *this = 0; /*0x4c68ce*/
  }
  else
  {
    this->q008 = a2; /*0x4c686e*/
    *this = 4; /*0x4c6874*/
    this->q074 = 0; /*0x4c6877*/
    *(_DWORD *)(this + 7) = a3; /*0x4c687b*/
    this->q0B0 = a4; /*0x4c6881*/
    this->q00C = a5; /*0x4c6888*/
    *(_DWORD *)(this + 14) = a6; /*0x4c6892*/
    this->q048 = a7; /*0x4c6899*/
    *(_DWORD *)(this + 19) = a8; /*0x4c68a3*/
    *(this + 23) = a9; /*0x4c68aa*/
    this->q018 = a10; /*0x4c68b4*/
    this->q01C = a11; /*0x4c68bb*/
  }
  *(_DWORD *)(this + 3) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c68c4*/
  return result; /*0x4c68c7*/
}


// ==== 0x004C68E0  ObjectClass::method_4C68E0  this=AbstractClass  sig=csp ====
char *__thiscall sub_4C68E0(
        AnimClass *this,
        int a2,
        int a3,
        IUnknown *aP3,
        IUnknown *aP4,
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
    BYTE2(this->field_0) = -1; /*0x4c6952*/
    LOBYTE(this->field_0) = 0; /*0x4c6956*/
    *(int *)((char *)&this->field_0 + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6961*/
    return (char *)this; /*0x4c695f*/
  }
  else
  {
    BYTE2(this->field_0) = a2; /*0x4c6900*/
    LOBYTE(this->field_0) = 5; /*0x4c6906*/
    *(void **)((char *)&this->field_4 + 3) = (void *)a3; /*0x4c6909*/
    HIBYTE(this->field_8) = (_BYTE)aP3; /*0x4c690e*/
    this->__pad_C[0] = (char)aP4; /*0x4c6919*/
    *(_DWORD *)&this->__pad_C[1] = a6; /*0x4c6920*/
    this->__pad_C[5] = a7; /*0x4c6926*/
    *(_DWORD *)&this->__pad_C[6] = a8; /*0x4c6930*/
    *(_DWORD *)&this->__pad_18[3] = a11; /*0x4c6937*/
    BYTE2(this->field_14) = a9; /*0x4c693a*/
    *(int *)((char *)&this->field_14 + 3) = a10; /*0x4c6941*/
    *(int *)((char *)&this->field_0 + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6949*/
    return (char *)this; /*0x4c694c*/
  }
}


// ==== 0x004C6970  EventClass::AddEventEx  this=SelectClass@StripClass@SidebarClass  sig=csp ====
char *__thiscall EventClass::AddEventEx(
        char *this,
        SelectClass_StripClass_SidebarClass *aP1,
        unsigned __int8 a3,
        IUnknown *aP3,
        SelectClass_StripClass_SidebarClass *aP4,
        SelectClass_StripClass_SidebarClass *aP5)
{
  Debug::Log(); /*0x4c698c*/
  if ( (int)aP1 < 0 ) /*0x4c699a*/
  {
    this->Y = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    this->Y = (char)aP1; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    *(_DWORD *)(this + 7) = aP3; /*0x4c69ad*/
    *(_DWORD *)(this + 11) = aP4; /*0x4c69b0*/
    *(_DWORD *)(this + 15) = aP5; /*0x4c69b3*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}


// ==== 0x004C69E0  ObjectClass::method_4C69E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C69E0(char *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c69fc*/
  if ( a2 < 0 ) /*0x4c6a0a*/
  {
    this->vtable3 = -1; /*0x4c6a48*/
    *this = 0; /*0x4c6a4c*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6a57*/
    return this; /*0x4c6a55*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6a10*/
    *this = a3; /*0x4c6a17*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6a19*/
    *(_DWORD *)(this + 11) = -1; /*0x4c6a1c*/
    *(_DWORD *)(this + 15) = 0; /*0x4c6a23*/
    *(_WORD *)(this + 19) = *a5; /*0x4c6a2d*/
    *(_WORD *)(this + 21) = a5[1]; /*0x4c6a35*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6a3e*/
    return this; /*0x4c6a41*/
  }
}


// ==== 0x004C6A60  ObjectClass::method_4C6A60  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6A60(char *this, int a2, char a3, int a4, int a5, _WORD *a6)
{
  Debug::Log(); /*0x4c6a7c*/
  if ( a2 < 0 ) /*0x4c6a8a*/
  {
    this->vtable3 = -1; /*0x4c6ac8*/
    *this = 0; /*0x4c6acc*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6ad7*/
    return this; /*0x4c6ad5*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6a90*/
    *this = a3; /*0x4c6a97*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6a99*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6aa0*/
    *(_DWORD *)(this + 15) = 0; /*0x4c6aa3*/
    *(_WORD *)(this + 19) = *a6; /*0x4c6aad*/
    *(_WORD *)(this + 21) = a6[1]; /*0x4c6ab5*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6abe*/
    return this; /*0x4c6ac1*/
  }
}


// ==== 0x004C6AE0  EventClass::Init  this=EventClass  sig=csp ====
char *__thiscall EventClass::Init(char *this, IUnknown *aP1, char a3, int a4, int a5, int arg10, _WORD *a6)
{
  Debug::Log(); /*0x4c6afc*/
  if ( (int)aP1 < 0 ) /*0x4c6b0a*/
  {
    this->q008 = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6b14*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b24*/
    *(_DWORD *)(this + 15) = arg10; /*0x4c6b27*/
    *(_WORD *)(this + 19) = *a6; /*0x4c6b2d*/
    *(_WORD *)(this + 21) = a6[1]; /*0x4c6b35*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}


// ==== 0x004C6B60  SidebarClass::SetFlashEntry  this=Game  sig=csp ====
char *__thiscall sub_4C6B60(char *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c6b7c*/
  if ( a2 < 0 ) /*0x4c6b8a*/
  {
    this->q008 = -1; /*0x4c6bba*/
    *this = 0; /*0x4c6bbe*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6bc9*/
    return this; /*0x4c6bc7*/
  }
  else
  {
    this->q008 = a2; /*0x4c6b90*/
    *this = a3; /*0x4c6b97*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b99*/
    *(_WORD *)(this + 11) = *a5; /*0x4c6b9f*/
    *(_WORD *)(this + 13) = a5[1]; /*0x4c6ba7*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6bb0*/
    return this; /*0x4c6bb3*/
  }
}


// ==== 0x004C6BE0  ObjectClass::method_4C6BE0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4C6BE0(char *this, int a2, char a3, int a4, int a5)
{
  Debug::Log(); /*0x4c6bfc*/
  if ( a2 < 0 ) /*0x4c6c0a*/
  {
    this->vtable3 = -1; /*0x4c6c2f*/
    *this = 0; /*0x4c6c33*/
  }
  else
  {
    this->vtable3 = a2; /*0x4c6c10*/
    *this = a3; /*0x4c6c17*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6c19*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6c1c*/
  }
  *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6c27*/
  return this; /*0x4c6c2a*/
}


// ==== 0x004C6C50  Network::initConnection  this=Network  sig=csp ====
char *__thiscall sub_4C6C50(char *this, int a2, _DWORD *a3, char a4)
{
  _DWORD *v5; // ecx
  char v6; // al
  int v8; // [esp+4h] [ebp-8h] BYREF

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    this->q002 = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6ca6*/
    return this; /*0x4c6ca4*/
  }
  else
  {
    this->q002 = a2; /*0x4c6c5e*/
    v5 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    Network::CopyAddress(v5, &a2, (int)&v8); /*0x4c6c72*/
    v6 = a4; /*0x4c6c7b*/
    this->q002 = v8; /*0x4c6c7f*/
    this->q007 = v6; /*0x4c6c82*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6c8d*/
    return this; /*0x4c6c8b*/
  }
}


// ==== 0x004C6CB0  EventClass::ProcessEvent  this=EventClass  sig=csp ====
void __thiscall EventClass::ProcessEvent(int this)
{
  HouseClass *v3; // ecx
  int v4; // ebx
  int v5; // edi
  BuildingClass *Building; // esi
  BuildingClass *v7; // esi
  ObjectClass *v8; // edi
  IUnknown *v9; // eax
  wchar_t *v10; // eax
  _BYTE *v11; // esi
  CellStruct *v12; // edi
  IUnknown *v13; // eax
  _DWORD *v14; // eax
  __int16 v15; // ax
  HouseClass *v16; // eax
  void **v17; // eax
  AnimClass *v18; // eax
  void **v19; // eax
  AnimClass *v20; // edi
  BuildingTypeClass *v21; // esi
  __int16 v22; // dx
  bool v23; // zf
  AnimClass *v24; // eax
  int v25; // esi
  _DWORD *v26; // edi
  int v27; // ebx
  int v28; // eax
  int Object; // eax
  void *v30; // eax
  void *v31; // ebp
  _BYTE *Member; // eax
  _BYTE *v33; // ebp
  int ecx86; // ecx
  IUnknown *v34; // ebx
  _DWORD *v36; // ebp
  _DWORD *v37; // ecx
  int v38; // ebx
  _BYTE *v39; // esi
  void *Next; // eax
  IUnknown *eax99a; // eax
  IUnknown *v41; // ebx
  int v43; // ebp
  void *v44; // eax
  int v45; // ebx
  void *eax107; // eax
  TechnoClass *v46; // esi
  int currentMission; // eax
  _DWORD *captureManager; // ecx
  int v50; // eax
  _DWORD *esi130; // esi
  CellStruct *v51; // esi
  int v53; // eax
  _DWORD *v54; // eax
  _DWORD *eax144; // eax
  CellStruct *v55; // esi
  int ecx148; // ecx
  CellStruct *v57; // esi
  AnimClass *v58; // edx
  __int16 cx156; // cx
  AnimClass *v60; // eax
  int v62; // esi
  IUnknown *StringCSF; // eax
  IUnknown *v63; // edi
  int v65; // eax
  wchar_t *v66; // eax
  wchar_t *eax167a; // eax
  IUnknown *v67; // esi
  signed int v69; // eax
  wchar_t *eax174; // eax
  AnimClass *v70; // esi
  int v72; // edx
  int v73; // eax
  int v74; // esi
  int v75; // ecx
  HouseClass **v76; // ecx
  int v77; // ebx
  char *v78; // edi
  int v79; // eax
  int v80; // esi
  int v81; // eax
  _DWORD *v82; // ecx
  int v83; // eax
  int v84; // edx
  IUnknown *v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int i; // ecx
  wchar_t *v90; // [esp-Eh] [ebp-390h]
  CampaignScore *_2; // [esp+2h] [ebp-380h]
  int a1; // [esp+16h] [ebp-36Ch] BYREF
  HouseClass *v91; // [esp+1Ah] [ebp-368h] BYREF
  HouseClass *aP2_4; // [esp+1Eh] [ebp-364h]
  AnimClass *GroundHeight; // [esp+22h] [ebp-360h]
  int v96; // [esp+26h] [ebp-35Ch] BYREF
  __int16 v97; // [esp+2Ah] [ebp-358h]
  AbstractClass v98; // [esp+2Eh] [ebp-354h] BYREF
  int v99; // [esp+52h] [ebp-330h]
  _DWORD v100[3]; // [esp+56h] [ebp-32Ch] BYREF
  char v101[4]; // [esp+62h] [ebp-320h] BYREF
  char v102[12]; // [esp+66h] [ebp-31Ch] BYREF
  _BYTE v103[108]; // [esp+72h] [ebp-310h] BYREF
  __int16 v104; // [esp+DEh] [ebp-2A4h]
  char v105; // [esp+E0h] [ebp-2A2h]
  wchar_t Buffer[80]; // [esp+E2h] [ebp-2A0h] BYREF
  wchar_t v107[256]; // [esp+182h] [ebp-200h] BYREF

  v3 = HouseClass_Array;
  v4 = *(char *)(this + 2);
  v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v4];
  switch ( *(_BYTE *)this )
  {
    case 1:
      Building = (BuildingClass *)BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction(Building, 0);
      if ( Building && Building->isAliveFlag && !Building->inLimbo && !*((_BYTE *)Building->Type + 5824) )
        BuildingClass::AnnounceReady((int)Building);
      return;
    case 2:
      v7 = (BuildingClass *)BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v7, 0);
      if ( v7 && v7->isAliveFlag && !v7->inLimbo && !*((_BYTE *)v7->Type + 5824) )
        BuildingClass::PowerOff((int)v7);
      return;
    case 3:
      if ( (unsigned __int8)HouseClass::IsAlliedWith(
                              (void *)v5,
                              *(IUnknown **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(this + 7)]) )
        COMStub_4F9F70((void *)v5, *(_DWORD *)(this + 7), 1);
      else
        HouseClass::MakeAlly((void *)v5, *(_DWORD *)(this + 7), 1);
      return;
    case 4:
    case 5:
      v26 = BuildingLoadQueue::Find((_BYTE *)(this + 7));
      if ( *(_BYTE *)(this + 29) == 1 )
        goto LABEL_2;
      ClearFactoryClassProduction(v26, this);
      if ( v26 )
      {
        if ( *((_BYTE *)v26 + 144) )
        {
          if ( (int)v26[27] > 0 && !*((_BYTE *)v26 + 129) )
          {
            v27 = 0;
            if ( !*(_BYTE *)(this + 18)
              || (v28 = BuildingLoadQueue::FindObject((_BYTE *)(this + 14)), (v27 = v28) == 0)
              || *(_BYTE *)(v28 + 144) && *(_DWORD *)(v28 + 108) && !*(_BYTE *)(v28 + 129) )
            {
              if ( !*(_BYTE *)(this + 23)
                || (Object = BuildingLoadQueue::FindObject((_BYTE *)(this + 19)), (v27 = Object) == 0)
                || *(_BYTE *)(Object + 144) && *(_DWORD *)(Object + 108) && !*(_BYTE *)(Object + 129) )
              {
                if ( *(_BYTE *)(this + 12) != 7
                  || v26[43] != 7
                  || (v26[5] & 4) == 0
                  || (v30 = BuildingLoadQueue::GetNext((_BYTE *)(this + 19)), (v31 = v30) == 0)
                  || (*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 44))(v30) != 6
                  || (void *)Team::GetMember(v26, 0) != v31 )
                {
                  if ( *((_BYTE *)v26 + 1048) )
                  {
                    Member = (_BYTE *)Team::GetMember(v26, 0);
                    v33 = Member;
                    if ( Member
                      && Member[144]
                      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 44))(Member) == 6
                      && *(_BYTE *)(*((_DWORD *)v33 + 328) + 5811) )
                    {
                      (*(void (__thiscall **)(_DWORD *, int))(*v26 + 628))(v26, 3);
                      *((_BYTE *)v26 + 1048) = 0;
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(_DWORD *, int))(*v26 + 628))(v26, 3);
                  }
                  if ( v26[320] )
                    v26[320] = 0;
                  if ( (v26[5] & 4) != 0 )
                  {
                    ecx86 = v26[373];
                    if ( ecx86 )
                    {
                      if ( *(_BYTE *)(this + 12) != 16 )
                        TeamClass::LiberateMember_Start(ecx86, (IUnknown *)v26, 0xFFFFFFFF, (AbstractClass *)1);
                    }
                  }
                  if ( v27 && Object::IsAlliedWithObjectHouse(HouseClass_Player.field_0, (IUnknown *)v26) )
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 328))(v27, 7);
                  v34 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, int))(*v26 + 1188))(v26, this);
                  (*(void (__thiscall **)(_DWORD *, IUnknown *, _DWORD))(*v26 + 488))(v26, v34, 0);
                  if ( (v26[5] & 4) != 0 )
                  {
                    v36 = v26;
                    v26[362] = 0;
                  }
                  else
                  {
                    v36 = 0;
                  }
                  v37 = (_DWORD *)v26[182];
                  v26[174] = 0;
                  if ( v37 && v34 != (IUnknown *)1 )
                    FactoryClass::ResetProductionTimers(v37);
                  if ( *(_BYTE *)(this + 12) == 11 && (v26[5] & 4) != 0 )
                  {
                    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v26 + 968))(v26, 0);
                    v38 = *v26;
                    v39 = (_BYTE *)(this + 14);
                    Next = BuildingLoadQueue::GetNext(v39);
                    (*(void (__thiscall **)(_DWORD *, void *, int))(v38 + 1152))(v26, Next, 1);
                    eax99a = (IUnknown *)BuildingLoadQueue::GetNext(v39);
                    TechnoClass::SetFocus(v26, eax99a);
                  }
                  else
                  {
                    if ( v36 )
                    {
                      TechnoClass::SetFocus(v36, 0);
                      FootClass::ClearSomeVector(v36);
                    }
                    v41 = (IUnknown *)BuildingLoadQueue::GetNext((_BYTE *)(this + 14));
                    (*(void (__thiscall **)(_DWORD *, IUnknown *))(*v26 + 968))(v26, v41);
                    v43 = *v26;
                    v44 = BuildingLoadQueue::GetNext((_BYTE *)(this + 19));
                    (*(void (__thiscall **)(_DWORD *, void *, int))(v43 + 1152))(v26, v44, 1);
                    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v26 + 132))(v26) + 1508) && v41 )
                      CCINIClass::IterateNodes(v26, v41);
                    if ( *(_BYTE *)(this + 28) )
                    {
                      v45 = *v26;
                      eax107 = BuildingLoadQueue::GetNext((_BYTE *)(this + 24));
                      (*(void (__thiscall **)(_DWORD *, void *))(v45 + 1148))(v26, eax107);
                    }
                  }
                }
              }
            }
          }
        }
      }
      return;
    case 6:
      v46 = (TechnoClass *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v46, 0);
      if ( v46 )
      {
        if ( v46->isAliveFlag )
        {
          if ( !v46->inLimbo && !v46->__pad_3F7[33] )
          {
            currentMission = v46->currentMission;
            if ( currentMission != 18 && currentMission != 19 )
            {
              if ( v46->onBridge
                || (v98.uniqueId = v46->location[0],
                    v98.abstractFlags = v46->location[1],
                    v98.nextArrayIndex = v46->location[2],
                    *((_BYTE *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v98.uniqueId) + 284))
                || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 688))(v46) )
              {
                if ( (v46->abstractFlags & 4) != 0 )
                {
                  (*(void (__thiscall **)(char *))(*(_DWORD *)&v46[1].onBridge + 12))(&v46[1].onBridge);
                  FootClass::ClearSomeVector(v46);
                  a1 = 0;
                  *(_DWORD *)v46[1].__pad_0 = -1;
                  BYTE2(v46[1].firepowerMultiplier[0]) = 0;
                  *(_DWORD *)&v46[1].__pad_0[4] = 0;
                  *(_DWORD *)&v46[1].__pad_0[8] = 0;
                }
                (*(void (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v46->__pad_0 + 640))(v46, 3);
                (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)v46->__pad_0 + 1152))(v46, 0, 1);
                (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v46->__pad_0 + 968))(v46, 0);
                if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46) + 3434) )
                {
                  (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)v46->__pad_0 + 1152))(v46, 0, 1);
                  (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v46->__pad_0 + 968))(v46, 0);
                }
                captureManager = v46->captureManager;
                if ( captureManager )
                  UnitClass::ProcessIdleOrders(captureManager);
                if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46) + 1508) )
                  CCINIClass::IterateNodes(v46, 0);
                if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 44))(v46) == 1 )
                {
                  if ( *(_BYTE *)(v46[1].ironTintTimer[2] + 3598) )
                  {
                    v50 = v46->currentMission;
                    if ( v50 == 10 || v50 == 12 )
                    {
                      (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v46->__pad_0 + 488))(v46, 5, 0);
                      (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 492))(v46);
                    }
                  }
                  esi130 = *(_DWORD **)&v46->mindControlledBy_a_unit;
                  if ( esi130 )
                    FactoryClass::ResetProductionTimers(esi130);
                }
              }
            }
          }
        }
      }
      return;
    case 7:
      v57 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v57, 0);
      if ( v57 && (v57->__pad_8[12] & 4) != 0 && v57->__pad_34[92] && !v57->__pad_34[77] && !v57[1].__pad_FC[84] )
      {
        v58 = (AnimClass *)v57->field_0;
        v57[2].__pad_FC[38] = 1;
        ((void (__thiscall *)(CellStruct *, char *, int, _DWORD))v58->field_174)(
          v57,
          &stru_89E138.__pad_579C[228],
          1,
          0);
      }
      return;
    case 8:
      goto LABEL_184;
    case 9:
      v51 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v51, 0);
      if ( v51 )
      {
        if ( v51->__pad_34[92] )
        {
          if ( !v51->__pad_34[77] && !v51[1].__pad_FC[84] && !*(_DWORD *)&v51[1].__pad_170[204] )
          {
            if ( v51->__pad_34[88]
              || (v100[0] = *(_DWORD *)&v51->__pad_34[104],
                  v100[1] = *(_DWORD *)&v51->__pad_34[108],
                  v100[2] = *(_DWORD *)&v51->__pad_34[112],
                  *((_BYTE *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v100) + 284))
              || !(*(unsigned __int8 (__thiscall **)(CellStruct *))(v51->field_0 + 688))(v51) )
            {
              v53 = *(_DWORD *)&v51->__pad_34[120];
              if ( v53 != 18 && v53 != 19 && (*(int (__thiscall **)(CellStruct *))(v51->field_0 + 44))(v51) != 2 )
              {
                a1 = *(_DWORD *)(*(int (__thiscall **)(CellStruct *, char *))(v51->field_0 + 440))(v51, v101);
                if ( a1 == *(_DWORD *)&stru_89E138.__pad_579C[196]
                  || (v54 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a1),
                      (eax144 = Cell::IsBridge(v54)) == 0)
                  || !*(_BYTE *)(eax144[328] + 5821) )
                {
                  (*(void (__thiscall **)(CellStruct *, int))(v51->field_0 + 628))(v51, 3);
                  (*(void (__thiscall **)(CellStruct *, _DWORD, int))(v51->field_0 + 1152))(v51, 0, 1);
                  (*(void (__thiscall **)(CellStruct *, _DWORD))(v51->field_0 + 968))(v51, 0);
                  (*(void (__thiscall **)(CellStruct *, int, _DWORD))(v51->field_0 + 488))(v51, 16, 0);
                }
              }
            }
          }
        }
      }
      return;
    case 0xA:
      v55 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v55, 0);
      if ( v55 )
      {
        ecx148 = *(_DWORD *)&v55->__pad_34[4];
        if ( ecx148 )
          TechnoClass::ApplyDamageEffects(ecx148);
      }
      return;
    case 0xB:
      v22 = *(_WORD *)(this + 21);
      *(_WORD *)&v98.__pad_0[4] = *(_WORD *)(this + 19);
      v23 = *(_DWORD *)(this + 15) == 0;
      v24 = *(AnimClass **)(this + 7);
      *(_WORD *)&v98.__pad_0[6] = v22;
      HouseClass::CompleteProduction(v5, v24, *(BuildingTypeClass **)(this + 11), !v23, (int)&v98.__pad_0[4]);
      return;
    case 0xC:
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 )
        *(_DWORD *)&HouseClass_Player.__pad_5568[23276] = 1;
      return;
    case 0xD:
      *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)(this + 7);
      v62 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *(char *)(this + 2)];
      if ( v62 != HouseClass_Player.field_0 )
      {
        if ( v62 )
        {
          StringCSF = (IUnknown *)GetStringCSF(aTxtPlayerChang, 0, g_Str_File_Event_CPP, 1427);
          v63 = StringCSF;
          if ( StringCSF )
          {
            if ( wcslen((const wchar_t *)StringCSF) )
              goto LABEL_164;
          }
        }
      }
      return;
    case 0xE:
      LOBYTE(v3) = *(_DWORD *)(this + 15) != 0;
      Sidebar::StartSidebarProduction(v5, *(void **)(this + 7), *(BuildingTypeClass **)(this + 11), v3, 0);
      return;
    case 0xF:
      HouseClass::StartFactoryProduction(
        v5,
        *(void **)(this + 7),
        *(BuildingTypeClass **)(this + 11),
        *(_DWORD *)(this + 15) != 0);
      return;
    case 0x10:
      HouseClass::CancelProduction(
        (void *)v5,
        *(void **)(this + 7),
        *(BuildingTypeClass **)(this + 11),
        *(_DWORD *)(this + 15) != 0,
        0);
      return;
    case 0x11:
      v25 = BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction((_DWORD *)v25, 0);
      if ( v25 && *(_BYTE *)(v25 + 144) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 1264))(v25);
      return;
    case 0x12:
      cx156 = *(_WORD *)(this + 13);
      *(_WORD *)v98.__pad_0 = *(_WORD *)(this + 11);
      v60 = *(AnimClass **)(this + 7);
      *(_WORD *)&v98.__pad_0[2] = cx156;
      SuperWeapon::FireSuperWeaponHouseClass((void *)v5, (AbstractClass *)v60, &v98);
      return;
    case 0x13:
      Debug::Log();
      byte_A83D48 = 1;
      return;
    case 0x14:
      v16 = *(HouseClass **)(this + 15);
      aP2_4 = *(HouseClass **)(this + 19);
      v91 = v16;
      GroundHeight = 0;
      GroundHeight = (AnimClass *)Cell::GetGroundHeight((IUnknown *)&v91);
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v91) + 80) & 0x100) != 0 )
        GroundHeight = (AnimClass *)((char *)GroundHeight + *(_DWORD *)&stru_89E138.__pad_579C[280]);
      if ( *(_DWORD *)(this + 7) == -1 )
      {
        v17 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v17 )
          return;
        v18 = AnimClass::ctor(
                v17,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2996),
                (CoordStruct *)&v91,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      }
      else
      {
        v19 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v19 )
          return;
        v18 = AnimClass::ctor(
                v19,
                *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * *(_DWORD *)(this + 7)),
                (CoordStruct *)&v91,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      }
      v20 = v18;
      if ( v18 )
      {
        v21 = *(BuildingTypeClass **)(this + 11);
        if ( v21 != (BuildingTypeClass *)-1
          && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * (_DWORD)v21]) )
        {
          v20->__pad_194[9] = 1;
        }
      }
      return;
    case 0x15:
      v11 = BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v11, 0);
      if ( v11 && v11[144] )
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v11 + 412))(v11, -1);
      return;
    case 0x16:
      v12 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v12, 0);
      if ( v12 && v12->__pad_34[92] && *(_DWORD *)(*(_DWORD *)&v12->__pad_170[172] + 48) == *(char *)(this + 2) )
      {
        if ( (*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 6
          || ((*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 1
           || (*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 2)
          && (v13 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, char *))(v12->field_0 + 72))(v12, v102),
              v14 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v13),
              Cell::IsBridge(v14)) )
        {
          (*(void (__thiscall **)(CellStruct *, int))(v12->field_0 + 416))(v12, -1);
        }
      }
      return;
    case 0x17:
      v15 = *(_WORD *)(this + 7);
      *(_WORD *)&v98.__pad_0[10] = *(_WORD *)(this + 9);
      *(_WORD *)&v98.__pad_0[8] = v15;
      BuildingClass::Capture((void *)v5, (HouseClass *)&v98.__pad_0[8], 0);
      return;
    case 0x18:
      if ( v5 )
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = *(_DWORD *)(this + 7);
        **(_DWORD **)&HouseClass_Player.__pad_5568[8060] = *(_DWORD *)(this + 7);
        v10 = GetStringCSF(aTxtSpecialWarn, 0, g_Str_File_Event_CPP, 953);
        swprintf(Buffer, (const size_t)v10, (const wchar_t *const)(v5 + 90154), _2);
        MessageListClass::AddMessage(
          &HouseClass_Player.__pad_5568[10668],
          0,
          0,
          (CellStruct *)Buffer,
          *(_DWORD *)(v5 + 90196),
          (IUnknown *)0x4046,
          1200,
          0);
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
      }
      return;
    case 0x1B:
      *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(unsigned __int8 *)(this + 13);
      return;
    case 0x1D:
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[23276] )
      {
        Timer::GetTicks();
        v99 = 60;
        aP2_4 = (HouseClass *)v98.NeedsSaveOrLink;
        GroundHeight = (AnimClass *)60;
        v98.referenceCount = Timer::GetTicks();
        v91 = (HouseClass *)v98.referenceCount;
        *(_DWORD *)&v98.__pad_0[12] = &stru_82083C;
        v90 = GetStringCSF(aTxtNone, 0, g_Str_File_Event_CPP, 1460);
        v66 = GetStringCSF(aTxtSavingGame, 0, g_Str_File_Event_CPP, 1460);
        Dialog::ShowMessageBox((int)v66, v90, 0, 0, 0, (int)_2);
        eax167a = GetStringCSF(aTxtMultiplayer, 0, g_Str_File_Event_CPP, 1462);
        SaveScenarioClassGame_AdjustMPSaveFileName(MultiByteStr, eax167a, 0);
        while ( 1 )
        {
          v67 = (IUnknown *)GroundHeight;
          if ( v91 != (HouseClass *)-1 )
          {
            v69 = Timer::GetTicks() - (_DWORD)v91;
            if ( v69 >= (int)GroundHeight )
              goto LABEL_173;
            v67 = (IUnknown *)((char *)GroundHeight - v69);
          }
          if ( (int)v67 <= 0 )
          {
LABEL_173:
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))(
              *(_DWORD *)&stru_87C374.__pad_579C[22524],
              0);
            MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
            TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
            return;
          }
          Event::Dispatch();
        }
      }
      eax174 = GetStringCSF(aTxtMultiplayer, 0, g_Str_File_Event_CPP, 1473);
      SaveScenarioClassGame_AdjustMPSaveFileName(MultiByteStr, eax174, 0);
      return;
    case 0x1E:
      v8 = (ObjectClass *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v8, 0);
      if ( v8 && v8->isAliveFlag )
      {
        v9 = (IUnknown *)BuildingLoadQueue::GetNext((_BYTE *)(this + 12));
        TechnoClass::SetFocus(v8, v9);
      }
      return;
    case 0x1F:
      if ( v4 != *(_DWORD *)(HouseClass_Player.field_0 + 48) )
        __3_YAXPAX_Z(*(void **)(this + 7));
      return;
    case 0x20:
      *(_WORD *)(this + 9) -= (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) != 0 ? 0xA : 0;
      if ( (unsigned int)*(unsigned __int16 *)(this + 9) > *(_DWORD *)&HouseClass_Player.__pad_5568[8860]
        || (unsigned int)*(unsigned __int8 *)(this + 11) > *(_DWORD *)&HouseClass_Player.__pad_5568[8864] )
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[8004] = *(_DWORD *)(this + 3);
        v86 = *(unsigned __int8 *)(this + 11)
            * ((*(unsigned __int8 *)(this + 11) + *(unsigned __int16 *)(this + 9) + *(_DWORD *)(this + 3) - 1)
             / *(unsigned __int8 *)(this + 11));
      }
      else
      {
        v86 = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8004] = 0;
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[7976] = v86;
      HIWORD(v87) = 0;
      *(_DWORD *)&HouseClass_Player.__pad_5568[8868] = *(unsigned __int16 *)(this + 7);
      LOWORD(v87) = *(_WORD *)(this + 9);
      *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = (unsigned __int16)v87;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8884] <= (unsigned int)(unsigned __int16)v87 )
        *(_DWORD *)&HouseClass_Player.__pad_5568[8884] = v87;
      *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = *(unsigned __int8 *)(this + 11);
      return;
    case 0x21:
      v88 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 )
        return;
      for ( i = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; v4 != *(_DWORD *)(*(_DWORD *)i + 111); i += 4 )
      {
        if ( ++v88 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
          return;
      }
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v88) + 115) = *(unsigned __int16 *)(this + 7);
      return;
    case 0x22:
      if ( (HouseClass_Player.__pad_5568[17220] & 2) == 0 )
        *(_DWORD *)&HouseClass_Player.__pad_5568[23276] = 7;
      return;
    case 0x23:
      Debug::Log();
      v70 = *(AnimClass **)(this + 7);
      v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v70];
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      {
        if ( !HouseClass_Player.__pad_5568[18668] )
          goto LABEL_182;
        if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * (_DWORD)v70]) )
          NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, v70);
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        {
LABEL_182:
          if ( dword_B779C4 )
            goto LABEL_184;
        }
      }
      if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)v5) )
LABEL_184:
        Network::SendOffer(v5);
      return;
    case 0x24:
      Debug::Log();
      *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = *(_DWORD *)(this + 7);
      Debug::Log();
      v62 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *(char *)(this + 2)];
      if ( v62 != HouseClass_Player.field_0 )
      {
        if ( v62 )
        {
          v85 = (IUnknown *)GetStringCSF(aTxtPlayerChang_0, 0, g_Str_File_Event_CPP, 1744);
          v63 = v85;
          if ( v85 )
          {
            if ( wcslen((const wchar_t *)v85) )
            {
LABEL_164:
              swprintf(v107, (const size_t)v63, (const wchar_t *const)(v62 + 90154), _2);
              v65 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0);
              MessageListClass::AddMessage(
                &HouseClass_Player.__pad_5568[10668],
                0,
                0,
                (CellStruct *)v107,
                *(_DWORD *)(v62 + 90196),
                (IUnknown *)0x4046,
                v65,
                0);
            }
          }
        }
      }
      return;
    case 0x27:
      Debug::Log();
      if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0) )
      {
        v77 = *(_DWORD *)(HouseClass_Player.field_0 + 48);
        Debug::Log();
        if ( v77 < 0 )
        {
          v103[2] = -1;
          v103[0] = 0;
        }
        else
        {
          v103[2] = v77;
          v103[0] = 19;
        }
        *(_DWORD *)&v103[3] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        if ( Networking_LastEventIndex < 128 )
        {
          v78 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
          qmemcpy(v78, v103, 0x6Cu);
          v78 += 108;
          *(_WORD *)v78 = v104;
          v78[2] = v105;
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
          ++Networking_LastEventIndex;
        }
        HouseClass_Player.__pad_5568[20476] = 1;
      }
      HouseClass_Player.__pad_5568[20508] = 1;
      v79 = EventClass::validateEventType((int *)&g_NetworkEventQueue);
      v80 = v79;
      if ( v79 == -1 )
        goto LABEL_214;
      v81 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v79];
      v96 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v80];
      if ( !v81 )
        goto LABEL_213;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 2 )
        goto LABEL_211;
      v82 = 0;
      v83 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 )
        goto LABEL_209;
      v84 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
      while ( *(_DWORD *)(*(_DWORD *)v84 + 111) != v80 )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
          goto LABEL_209;
      }
      v82 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v83) + 40);
      *(_WORD *)&HouseClass_Player.__pad_5568[18696] = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v83 + 20478];
LABEL_209:
      Network::CopyAddress(v82, &a1, (int)&v91);
      NetworkID::Assign(&HouseClass_Player.__pad_5568[18672], (IPXManagerClass *)&a1, (int)&v91, 0);
      Network::FormatAddress((unsigned __int16 *)&HouseClass_Player.__pad_5568[18672], 0);
      Debug::Log();
      Debug::Log();
      if ( !SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0) )
        Network::SetPlayerCoords(
          &HouseClass_Player.__pad_5568[22284],
          (IPXManagerClass *)&HouseClass_Player.__pad_5568[18672]);
LABEL_211:
      wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[20388], (const wchar_t *)(v96 + 90154));
      Debug::Log();
      *(_DWORD *)&HouseClass_Player.__pad_5568[20472] = v80;
      if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0) )
        Network::SendMasterPlayerList((int)&g_NetworkEventQueue);
LABEL_213:
      *(_DWORD *)&HouseClass_Player.__pad_5568[20516] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      *(_DWORD *)&HouseClass_Player.__pad_5568[20524] = v80;
      *(_DWORD *)&HouseClass_Player.__pad_5568[20504] = -1;
      *(_DWORD *)&HouseClass_Player.__pad_5568[20520] = 10
                                                      * ((*(_DWORD *)&HouseClass_Player.__pad_5568[8860]
                                                        + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]
                                                        + 10)
                                                       / 0xAu);
LABEL_214:
      HouseClass_Player.__pad_5568[20508] = 0;
      return;
    case 0x28:
      Debug::Log();
      *(_DWORD *)&HouseClass_Player.__pad_5568[20504] = *(_DWORD *)(this + 7);
      return;
    case 0x29:
      Debug::Log();
      v72 = *(_DWORD *)(this + 8);
      v97 = 0;
      a1 = 0;
      v96 = v72;
      NetworkAddress::Assign(&v91, &a1, (IUnknown *)&v96, 0);
      Network::FormatAddress((unsigned __int16 *)&v91, (IUnknown *)&v91);
      Debug::Log();
      EventClass::deserializeEvent(&HouseClass_Player.__pad_5568[22284], *(char *)(this + 7), (IUnknown *)&v91);
      NetworkManager::SetPlayerAddress(
        (int *)&g_NetworkEventQueue,
        (DynamicVector *)*(char *)(this + 7),
        (DynamicVector *)&v91);
      v73 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 )
        return;
      v74 = *(char *)(this + 7);
      v75 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
      break;
    case 0x2A:
    case 0x2B:
    case 0x2C:
LABEL_2:
      ScriptAction::DispatchBuilding((char *)this);
      return;
    case 0x2D:
      if ( v5 )
        HouseClass::NotifyImpactWater(*(AnimClass **)&HouseClass_Array->__pad_0[4 * v4]);
      return;
    case 0x2E:
      HouseClass::CancelProduction(
        (void *)v5,
        *(void **)(this + 7),
        *(BuildingTypeClass **)(this + 11),
        *(_DWORD *)(this + 15) != 0,
        (IUnknown *)1);
      return;
    default:
      return;
  }
  while ( *(_DWORD *)(*(_DWORD *)v75 + 111) != v74 )
  {
    ++v73;
    v75 += 4;
    if ( v73 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
      return;
  }
  if ( v73 < *(int *)&HouseClass_Player.__pad_5568[18384] )
  {
    v76 = (HouseClass **)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v73) + 40);
    *v76 = v91;
    v76[1] = aP2_4;
    v76[2] = (HouseClass *)GroundHeight;
  }
}


// ==== 0x004C81D0  sub_4C81D0  this=-  sig=ida-proto ====
int sub_4C81D0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][0x10000] = 0; /*0x4c81d2*/
  *(_DWORD *)&MEMORY[0x8A3A08][65540] = 0; /*0x4c81d7*/
  *(_DWORD *)&MEMORY[0x8A3A08][65544] = 0; /*0x4c81dc*/
  *(_DWORD *)&MEMORY[0x8A3A08][65548] = 0; /*0x4c81e1*/
  return 0; /*0x4c81e6*/
}


// ==== 0x004C81F0  sub_4C81F0  this=-  sig=ida-proto ====
void sub_4C81F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c81fc*/
  *(double *)&MEMORY[0x8A3A08][65560] = Math::Sqrt(v0 + v0); /*0x4c820e*/
}


// ==== 0x004C8220  sub_4C8220  this=-  sig=ida-proto ====
void sub_4C8220()
{
  *(double *)&MEMORY[0x8A3A08][65640] = *(double *)&MEMORY[0x8A3A08][65560] / 60.0; /*0x4c822c*/
}


// ==== 0x004C8240  sub_4C8240  this=-  sig=ida-proto ====
void sub_4C8240()
{
  *(double *)&MEMORY[0x8A3A08][65616] = 1.0 / *(double *)&MEMORY[0x8A3A08][65640]; /*0x4c824c*/
}


// ==== 0x004C8260  sub_4C8260  this=-  sig=ida-proto ====
void sub_4C8260()
{
  *(double *)&MEMORY[0x8A3A08][65608] = 0.0174532925199433 * 45.0; /*0x4c826c*/
}


// ==== 0x004C8280  sub_4C8280  this=-  sig=ida-proto ====
void sub_4C8280()
{
  *(double *)&MEMORY[0x8A3A08][65568] = 0.0174532925199433 * 60.0; /*0x4c828c*/
}


// ==== 0x004C82A0  sub_4C82A0  this=-  sig=ida-proto ====
void sub_4C82A0()
{
  MEMORY[0x8A3A00] = 0.0174532925199433 * 90.0; /*0x4c82ac*/
}


// ==== 0x004C82C0  sub_4C82C0  this=-  sig=ida-proto ====
__int64 sub_4C82C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3A00] - *(double *)&MEMORY[0x8A3A08][65568]); /*0x4c82d2*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0x8A3A08][65560] * 0.5); /*0x4c82e6*/
  *(_DWORD *)&MEMORY[0x8A3A08][65648] = result; /*0x4c82eb*/
  return result; /*0x4c82f0*/
}


// ==== 0x004C8300  sub_4C8300  this=-  sig=ida-proto ====
void sub_4C8300()
{
  *(double *)&MEMORY[0x8A3A08][65576] = Math::ArcTan((double)*(int *)&MEMORY[0x8A3A08][65648] * 0.00390625); /*0x4c8317*/
}


// ==== 0x004C8330  sub_4C8330  this=-  sig=ida-proto ====
void sub_4C8330()
{
  *(double *)&MEMORY[0x8A3A08][65600] = Math::ArcTan( /*0x4c8352*/
                                          (double)(2 * *(_DWORD *)&MEMORY[0x8A3A08][65648])
                                        / *(double *)&MEMORY[0x8A3A08][65560]);
}


// ==== 0x004C8360  sub_4C8360  this=-  sig=ida-proto ====
__int64 sub_4C8360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&MEMORY[0x8A3A08][65648]) + 0.5); /*0x4c837b*/
  *(_DWORD *)&MEMORY[0x8A3A08][65636] = result; /*0x4c8380*/
  return result; /*0x4c8386*/
}


// ==== 0x004C8390  sub_4C8390  this=-  sig=ida-proto ====
int sub_4C8390()
{
  *(_WORD *)&MEMORY[0x8A3A08][65552] = 0; /*0x4c8392*/
  *(_WORD *)&MEMORY[0x8A3A08][65554] = 0; /*0x4c8398*/
  return 0; /*0x4c839e*/
}


// ==== 0x004C83A0  sub_4C83A0  this=-  sig=ida-proto ====
int sub_4C83A0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][65584] = 0; /*0x4c83a2*/
  *(_DWORD *)&MEMORY[0x8A3A08][65588] = 0; /*0x4c83a7*/
  *(_DWORD *)&MEMORY[0x8A3A08][65592] = 0; /*0x4c83ac*/
  return 0; /*0x4c83b1*/
}


// ==== 0x004C83C0  sub_4C83C0  this=-  sig=ida-proto ====
int sub_4C83C0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][65632] = 0; /*0x4c83c5*/
  *(_DWORD *)&MEMORY[0x8A3A08][65624] = 128; /*0x4c83cf*/
  *(_DWORD *)&MEMORY[0x8A3A08][65628] = 128; /*0x4c83d4*/
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
  SetDlgItemTextA(hDlg, 1156, MEMORY[0x8A3A08]); /*0x4c841e*/
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
LPSTR __thiscall ExceptionHandler_GenerateReport(_DWORD *this)
{
  HMODULE LibraryA; // ebp
  FARPROC *v2; // esi
  LPCSTR *i; // edi
  HANDLE v4; // eax
  HANDLE CurrentProcess; // eax
  int v6; // ebp
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
  LPSTR result; // eax
  int v46; // [esp+18h] [ebp-4E4h]
  FARPROC v47; // [esp+18h] [ebp-4E4h]
  char *v48; // [esp+1Ch] [ebp-4E0h]
  const char *v49; // [esp+1Ch] [ebp-4E0h]
  FARPROC v50; // [esp+20h] [ebp-4DCh]
  char v51; // [esp+37h] [ebp-4C5h] BYREF
  int v52; // [esp+38h] [ebp-4C4h]
  int v53; // [esp+3Ch] [ebp-4C0h] BYREF
  int v54; // [esp+40h] [ebp-4BCh]
  _DWORD *v55; // [esp+44h] [ebp-4B8h]
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
  memset(MEMORY[0x8A3A08], 0, 0x10000u); /*0x4c8607*/
  LibraryA = LoadLibraryA(LibFileName); /*0x4c8614*/
  hLibModule = LibraryA; /*0x4c8618*/
  if ( LibraryA ) /*0x4c861c*/
  {
    Debug::Log(); /*0x4c8623*/
    v2 = (FARPROC *)&MEMORY[0x8B3A88]; /*0x4c8631*/
    for ( i = (LPCSTR *)off_820E64; *i; ++i ) /*0x4c8636*/
      *v2++ = GetProcAddress(LibraryA, *i); /*0x4c8645*/
  }
  else
  {
    Debug::Log(); /*0x4c8654*/
  }
  if ( MEMORY[0x8B3A98] ) /*0x4c8663*/
    MEMORY[0x8B3A98](4); /*0x4c8667*/
  v57 = 0; /*0x4c867f*/
  v54 = 0; /*0x4c8683*/
  if ( MEMORY[0x8B3A90] && (v4 = GetCurrentProcess(), MEMORY[0x8B3A90](v4, 0, 0)) ) /*0x4c8692*/
  {
    Debug::Log(); /*0x4c86a5*/
    v54 = 1; /*0x4c86b4*/
    if ( MEMORY[0x8B3A98] ) /*0x4c86bc*/
      MEMORY[0x8B3A98](6); /*0x4c86c0*/
    GetModuleFileNameA(0, Filename, 0x104u); /*0x4c86d1*/
    if ( !MEMORY[0x8B3A94] /*0x4c86ff*/
      || (CurrentProcess = GetCurrentProcess(), (v57 = MEMORY[0x8B3A94](CurrentProcess, 0, Filename, 0, 0, 0)) == 0) )
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
  if ( *(_DWORD *)*v55 == -1073741819 ) /*0x4c873b*/
  {
    Debug::Log(); /*0x4c8742*/
    v7 = *(_DWORD *)(*v55 + 24); /*0x4c874f*/
    v52 = *(_DWORD *)(*v55 + 20); /*0x4c8752*/
    v56 = v7; /*0x4c8756*/
  }
  else
  {
    Debug::Log(); /*0x4c8776*/
  }
  v8 = -1073741819; /*0x4c877e*/
  v9 = 0; /*0x4c8783*/
  v10 = &dword_7E8838; /*0x4c878e*/
  while ( v8 != *(_DWORD *)*v55 ) /*0x4c8795*/
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
  if ( lstrlenA(MEMORY[0x8A3A08]) + v12 < 0xFFFF ) /*0x4c87d9*/
    lstrcatA(MEMORY[0x8A3A08], v11); /*0x4c87e1*/
  v13 = lstrlenA(::String2); /*0x4c87ea*/
  if ( lstrlenA(MEMORY[0x8A3A08]) + v13 < 0xFFFF ) /*0x4c87fb*/
    lstrcatA(MEMORY[0x8A3A08], ::String2); /*0x4c8807*/
  if ( *(_DWORD *)*v55 == -1073741819 ) /*0x4c881b*/
  {
    wsprintfA(String, "Access address:%08X ", v56); /*0x4c8830*/
    v14 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c883c*/
    if ( lstrlenA(String) + v14 < 0xFFFF ) /*0x4c884d*/
      lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8859*/
    if ( v52 ) /*0x4c8865*/
    {
      v15 = lstrlenA(::String); /*0x4c886e*/
      if ( lstrlenA(MEMORY[0x8A3A08]) + v15 < 0xFFFF ) /*0x4c887f*/
        lstrcatA(MEMORY[0x8A3A08], ::String); /*0x4c8886*/
    }
    else
    {
      v16 = lstrlenA(aWasReadFrom); /*0x4c888f*/
      if ( lstrlenA(MEMORY[0x8A3A08]) + v16 < 0xFFFF ) /*0x4c88a0*/
        lstrcatA(MEMORY[0x8A3A08], aWasReadFrom); /*0x4c88ac*/
    }
  }
  memset(v62, 0, 0x18u); /*0x4c88c0*/
  v62[0] = 24; /*0x4c88c2*/
  v62[4] = 232; /*0x4c88cd*/
  v62[2] = 0; /*0x4c88d8*/
  v62[1] = *(_DWORD *)(v6 + 184); /*0x4c88e5*/
  if ( IsBadCodePtr(*(FARPROC *)(v6 + 184)) ) /*0x4c88f3*/
  {
    Debug::Log(); /*0x4c899d*/
  }
  else if ( MEMORY[0x8B3A8C] /*0x4c8925*/
         && (v46 = *(_DWORD *)(v6 + 184), v17 = GetCurrentProcess(), MEMORY[0x8B3A8C](v17, v46, &v53, v62)) )
  {
    wsprintfA(String, "Exception occurred at %08X - %s + %08X\r\n", *(_DWORD *)(v6 + 184), (const char *)&v62[5], v53); /*0x4c894d*/
  }
  else
  {
    Debug::Log(); /*0x4c8959*/
    if ( MEMORY[0x8B3A8C] ) /*0x4c8968*/
    {
      GetLastError(); /*0x4c896c*/
      Debug::Log(); /*0x4c8978*/
    }
    wsprintfA(String, "Exception occurred at %08X\r\n", *(_DWORD *)(v6 + 184)); /*0x4c8991*/
  }
  v18 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c89b0*/
  if ( lstrlenA(String) + v18 < 0xFFFF ) /*0x4c89bd*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c89c9*/
  ModuleVersion = GetModuleVersion(); /*0x4c89cf*/
  wsprintfA(String, MEMORY[0x821F44], ModuleVersion); /*0x4c89df*/
  v20 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c89ef*/
  if ( lstrlenA(String) + v20 < 0xFFFF ) /*0x4c89fc*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8a08*/
  ModuleInternalVersion = GetModuleInternalVersion((int)&MEMORY[0xA8ECE0]); /*0x4c8a13*/
  wsprintfA(String, MEMORY[0x821F2C], ModuleInternalVersion); /*0x4c8a23*/
  v22 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8a33*/
  if ( lstrlenA(String) + v22 < 0xFFFF ) /*0x4c8a40*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8a4c*/
  Buffer[0] = 0; /*0x4c8a5e*/
  Time::FormatDate(Buffer); /*0x4c8a66*/
  v48 = String::CopyConstant(Destination); /*0x4c8a90*/
  v23 = String::FormatDword(v66); /*0x4c8a91*/
  wsprintfA(String, MEMORY[0x821F0C], v23, v48, Buffer); /*0x4c8aa1*/
  v24 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8ab1*/
  if ( lstrlenA(String) + v24 < 0xFFFF ) /*0x4c8abe*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8aca*/
  v58 = 5; /*0x4c8adc*/
  v51 = 0; /*0x4c8ae4*/
  GetVersionString(&v58, &v51, 0, 0); /*0x4c8ae9*/
  v25 = (char *)&stru_821F08; /*0x4c8af4*/
  if ( !v51 ) /*0x4c8af9*/
    v25 = g_INI_Key_No; /*0x4c8afb*/
  v49 = v25; /*0x4c8b05*/
  Name = PlayerType::GetName(); /*0x4c8b06*/
  wsprintfA(String, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v49, MEMORY[0x84E865]);
  v27 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8b26*/
  if ( lstrlenA(String) + v27 < 0xFFFF ) /*0x4c8b33*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8b3f*/
  v28 = lstrlenA(aDetails); /*0x4c8b4c*/
  if ( lstrlenA(MEMORY[0x8A3A08]) + v28 < 0xFFFF ) /*0x4c8b5d*/
    lstrcatA(MEMORY[0x8A3A08], aDetails); /*0x4c8b69*/
  Debug::Log(); /*0x4c8b74*/
  wsprintfA( /*0x4c8b98*/
    String,
    "Eip:%08X\tEsp:%08X\tEbp:%08X\r\n",
    *(_DWORD *)(v6 + 184),
    *(_DWORD *)(v6 + 196),
    *(_DWORD *)(v6 + 180));
  v29 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8ba8*/
  if ( lstrlenA(String) + v29 < 0xFFFF ) /*0x4c8bb5*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8bc1*/
  wsprintfA( /*0x4c8be6*/
    String,
    "Eax:%08X\tEbx:%08X\tEcx:%08X\r\n",
    *(_DWORD *)(v6 + 176),
    *(_DWORD *)(v6 + 164),
    *(_DWORD *)(v6 + 172));
  v30 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8bf6*/
  if ( lstrlenA(String) + v30 < 0xFFFF ) /*0x4c8c03*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8c0f*/
  wsprintfA( /*0x4c8c34*/
    String,
    "Edx:%08X\tEsi:%08X\tEdi:%08X\r\n",
    *(_DWORD *)(v6 + 168),
    *(_DWORD *)(v6 + 160),
    *(_DWORD *)(v6 + 156));
  v31 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8c44*/
  if ( lstrlenA(String) + v31 < 0xFFFF ) /*0x4c8c51*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8c5d*/
  wsprintfA(String, "EFlags:%08X \r\n", *(_DWORD *)(v6 + 192)); /*0x4c8c74*/
  v32 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8c80*/
  if ( lstrlenA(String) + v32 < 0xFFFF ) /*0x4c8c91*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8c9d*/
  wsprintfA( /*0x4c8cd7*/
    String,
    "CS:%04x  SS:%04x  DS:%04x  ES:%04x  FS:%04x  GS:%04x\r\n",
    *(_DWORD *)(v6 + 188),
    *(_DWORD *)(v6 + 200),
    *(_DWORD *)(v6 + 152),
    *(_DWORD *)(v6 + 148),
    *(_DWORD *)(v6 + 144),
    *(_DWORD *)(v6 + 140));
  v33 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8ce3*/
  if ( lstrlenA(String) + v33 < 0xFFFF ) /*0x4c8cf4*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8d00*/
  Debug::Log(); /*0x4c8d0b*/
  wsprintfA(String, "\r\nBytes at CS:EIP (%08X)  : ", *(_DWORD *)(v6 + 184));
  v34 = *(unsigned __int8 **)(v6 + 184); /*0x4c8d23*/
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
  v35 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8d9e*/
  if ( lstrlenA(String) + v35 < 0xFFFF ) /*0x4c8dab*/
    lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8db7*/
  Debug::Log(); /*0x4c8dc2*/
  v36 = lstrlenA(aStackDumpIndic); /*0x4c8dd1*/
  if ( lstrlenA(MEMORY[0x8A3A08]) + v36 < 0xFFFF ) /*0x4c8de2*/
    lstrcatA(MEMORY[0x8A3A08], aStackDumpIndic); /*0x4c8dee*/
  v37 = *(FARPROC **)(v6 + 196); /*0x4c8df4*/
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
          if ( MEMORY[0x8B3A8C] ) /*0x4c8eaf*/
          {
            v47 = *v37; /*0x4c8ec0*/
            v40 = GetCurrentProcess(); /*0x4c8ec1*/
            if ( MEMORY[0x8B3A8C](v40, v47, &v53, v62) ) /*0x4c8ec8*/
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
    v41 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c8f23*/
    if ( lstrlenA(String) + v41 >= 0xFFFF ) /*0x4c8f30*/
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f46*/
    }
    else
    {
      v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f32*/
      lstrcatA(MEMORY[0x8A3A08], String); /*0x4c8f42*/
    }
    ++v37; /*0x4c8f50*/
    --v52; /*0x4c8f54*/
  }
  while ( v52 );
  if ( v54 ) /*0x4c8f64*/
  {
    if ( MEMORY[0x8B3A88] ) /*0x4c8f6d*/
    {
      v42 = GetCurrentProcess(); /*0x4c8f6f*/
      MEMORY[0x8B3A88](v42); /*0x4c8f76*/
    }
    if ( v57 && MEMORY[0x8B3A9C] ) /*0x4c8f8b*/
    {
      v43 = GetCurrentProcess(); /*0x4c8f8f*/
      MEMORY[0x8B3A9C](v43, 0); /*0x4c8f96*/
    }
  }
  if ( hLibModule ) /*0x4c8fa2*/
    FreeLibrary(hLibModule); /*0x4c8fa5*/
  v44 = lstrlenA(asc_821DD0); /*0x4c8fb2*/
  result = (LPSTR)lstrlenA(MEMORY[0x8A3A08]); /*0x4c8fb9*/
  if ( (int)&result[v44] < 0xFFFF ) /*0x4c8fc3*/
    return ((LPSTR (__stdcall *)(LPSTR, LPCSTR))v38)(MEMORY[0x8A3A08], asc_821DD0); /*0x4c8fcf*/
  return result; /*0x4c8fd1*/
}


// ==== 0x004C9150  XSurface::vt_entry_68  this=XSurface  sig=csp ====
int __thiscall XSurface::vt_entry_68(#374 *this)
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
  v2[0] = &vt_CCFileClass; /*0x4c9183*/
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
_WORD *__thiscall FrameSnapshot_Init(_WORD *this)
{
  wchar_t *v2; // edx

  *this = 0; /*0x4c91c4*/
  this->q002 = 0; /*0x4c91c7*/
  v2 = MEMORY[0xA8ED84]; /*0x4c91cb*/
  this->q004 = 0; /*0x4c91d1*/
  this->q002 = v2; /*0x4c91d4*/
  this->q00A = 0; /*0x4c91d7*/
  return this; /*0x4c91db*/
}


// ==== 0x004C91E0  FrameSnapshot::InitMax  this=TechnoClass  sig=csp ====
_WORD *__thiscall FrameSnapshot_InitMax(_WORD *this, int a2)
{
  _WORD *result; // eax
  wchar_t *v3; // edx
  char v4; // cl
  __int16 v5; // dx

  result = this; /*0x4c91e0*/
  *this = 0; /*0x4c91e4*/
  this->vtable3 = 0; /*0x4c91e7*/
  v3 = MEMORY[0xA8ED84]; /*0x4c91eb*/
  this->vtable2 = 0; /*0x4c91f1*/
  this->vtable3 = v3; /*0x4c91f4*/
  this->owningHouseIndex = 0; /*0x4c91f7*/
  v4 = a2; /*0x4c91fb*/
  if ( a2 >= 127 ) /*0x4c9202*/
    v4 = 127; /*0x4c9204*/
  LOBYTE(v5) = 0; /*0x4c9209*/
  HIBYTE(v5) = v4; /*0x4c920b*/
  result[10] = v5; /*0x4c920d*/
  return result; /*0x4c9211*/
}


// ==== 0x004C9220  FacingClass::Update  this=FacingClass  sig=csp ====
char __thiscall FacingClass::Update(FacingClass *this, DirStruct *desiredFacing)
{
  __int16 v2; // ax
  __int16 ROT; // bp
  int StartTime; // edi
  int TimeLeft; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  __int16 v10; // di
  IUnknown *v11; // eax
  DirStruct v12; // edx
  int v13; // eax
  CDTimerClass *p_RotationTimer; // ecx
  IUnknown *v16; // [esp+0h] [ebp-10h]
  int v17; // [esp+8h] [ebp-8h]

  v2 = this->DesiredFacing; /*0x4c9224*/
  if ( LOWORD(this->DesiredFacing) == desiredFacing->Value ) /*0x4c922d*/
    return 0; /*0x4c92f7*/
  ROT = this->ROT; /*0x4c9235*/
  if ( ROT <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  StartTime = this->RotationTimer.StartTime; /*0x4c9240*/
  TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9243*/
  if ( StartTime != -1 ) /*0x4c924f*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - StartTime >= TimeLeft ) /*0x4c9257*/
    {
LABEL_15:
      v11 = (IUnknown *)this->DesiredFacing; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    TimeLeft -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - StartTime; /*0x4c9259*/
  }
  if ( !TimeLeft ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (__int16)(v2 - LOWORD(this->StartFacing)); /*0x4c9266*/
  v7 = abs16(v2 - LOWORD(this->StartFacing)) / ROT; /*0x4c9271*/
  v16 = (IUnknown *)this->DesiredFacing; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->RotationTimer.StartTime; /*0x4c927e*/
    v9 = this->RotationTimer.TimeLeft; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - (*(_WORD *)&HouseClass_Player.__pad_5568[23248] - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v16) = (_WORD)v16 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v16; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = (unsigned int)v11; /*0x4c92b1*/
  v12 = *desiredFacing; /*0x4c92bb*/
  this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c92bd*/
  if ( ROT > 0 ) /*0x4c92bf*/
  {
    v13 = abs16(v12.Value - LOWORD(this->StartFacing)) / ROT; /*0x4c92da*/
    p_RotationTimer = &this->RotationTimer; /*0x4c92e0*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c92e3*/
    p_RotationTimer->pad_04 = v17; /*0x4c92e5*/
    p_RotationTimer->TimeLeft = v13; /*0x4c92e8*/
  }
  return 1; /*0x4c92f1*/
}


// ==== 0x004C9300  FacingClass::Set_SyncLog  this=TechnoClass  sig=csp ====
char __thiscall FacingClass::Set_SyncLog(FacingClass *this, DirStruct *desiredFacing)
{
  TerrainTypeClass *v3; // ebx
  int v4; // eax
  int TimeLeft; // edx
  int v6; // ebx
  __int16 v7; // cx
  unsigned int v8; // ecx
  CDTimerClass *p_RotationTimer; // esi
  char result; // al
  unsigned int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( SLOWORD(this->ROT) > 0 ) /*0x4c930c*/
  {
    v3 = (TerrainTypeClass *)&this->RotationTimer; /*0x4c930e*/
    if ( CDTimerClass::TimeRemaining(&this->RotationTimer.StartTime) ) /*0x4c9313*/
    {
      v4 = abs16(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / SLOWORD(this->ROT); /*0x4c9333*/
      v11 = this->DesiredFacing; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9340*/
      v6 = *(_DWORD *)v3->__pad_0; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v6 >= TimeLeft ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(TimeLeft) = TimeLeft - (*(_WORD *)&HouseClass_Player.__pad_5568[23248] - v6); /*0x4c9356*/
      }
      v7 = TimeLeft; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = this->DesiredFacing; /*0x4c9375*/
LABEL_12:
  if ( (_WORD)v8 == desiredFacing->Value ) /*0x4c937e*/
  {
    p_RotationTimer = &this->RotationTimer; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c93b8*/
    p_RotationTimer->pad_04 = v12; /*0x4c93ba*/
  }
  else
  {
    this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c9382*/
    this->StartFacing = (unsigned int)*desiredFacing; /*0x4c9386*/
    p_RotationTimer = &this->RotationTimer; /*0x4c9390*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c9393*/
    p_RotationTimer->pad_04 = v12; /*0x4c9399*/
    result = 1; /*0x4c939c*/
  }
  p_RotationTimer->TimeLeft = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}


// ==== 0x004C93D0  ProgressTimer::GetValue  this=FacingStruct  sig=csp ====
_DWORD *__thiscall ProgressTimer::GetValue(_WORD *this, IUnknown *aP1)
{
  __int16 v2; // bx
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  __int16 v10; // cx
  ObjectClass *v12; // [esp+Ch] [ebp-4h]

  v2 = *(this + 10); /*0x4c93d2*/
  if ( v2 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  v3 = *((_DWORD *)this + 2); /*0x4c93dd*/
  v4 = *((_DWORD *)this + 4); /*0x4c93e0*/
  if ( v3 != -1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3 >= v4 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    v4 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3; /*0x4c93f6*/
  }
  if ( v4 ) /*0x4c93fa*/
  {
    v5 = (ObjectClass *)(__int16)(*this - *(this + 2)); /*0x4c9406*/
    v6 = (__int16)(*this - *(this + 2)); /*0x4c940b*/
    v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / v2; /*0x4c9411*/
    v12 = *(ObjectClass **)this; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      aP1->field_0 = (int)v12; /*0x4c9445*/
      return &aP1->field_0; /*0x4c9453*/
    }
    v8 = *((_DWORD *)this + 4); /*0x4c941e*/
    v9 = *((_DWORD *)this + 2); /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9); /*0x4c9431*/
    }
    v10 = v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = (_WORD)v12 - v10 * ((int)v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  aP1->field_0 = *(_DWORD *)this; /*0x4c945a*/
  return &aP1->field_0; /*0x4c944d*/
}


// ==== 0x004C9470  TechnoClass::GetWeaponType  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWeaponType(_DWORD *this, ObjectClass *aP1)
{
  *(_DWORD *)aP1->__pad_0 = *this; /*0x4c9476*/
  return aP1->__pad_0; /*0x4c9478*/
}


// ==== 0x004C9480  TimerClass::Active  this=FacingStruct  sig=csp ====
BOOL __thiscall TimerClass_Active(int this)
{
  int v1; // edx
  int v2; // eax

  if ( *(__int16 *)(this + 20) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  v1 = *(_DWORD *)(this + 8); /*0x4c9487*/
  v2 = *(_DWORD *)(this + 16); /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}


// ==== 0x004C94B0  JumpjetLocomotionClass::StubReturnZero_5  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall sub_4C94B0(__int16 *this)
{
  int v1; // esi
  int v2; // eax

  if ( this->Height <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  v1 = this->Owner; /*0x4c94b8*/
  v2 = this->vtable2; /*0x4c94bb*/
  if ( v1 != -1 ) /*0x4c94c1*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (__int16)(*this - this->Owner) > 0; /*0x4c94e7*/
  return 0; /*0x4c94d8*/
}


// ==== 0x004C94F0  JumpjetLocomotionClass::StubReturnZero_6  this=JumpjetLocomotionClass  sig=csp ====
bool __thiscall sub_4C94F0(__int16 *this)
{
  int v1; // esi
  int v2; // eax

  if ( this->Height <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  v1 = this->Owner; /*0x4c94f8*/
  v2 = this->vtable2; /*0x4c94fb*/
  if ( v1 != -1 ) /*0x4c9501*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (__int16)(*this - this->Owner) < 0; /*0x4c9525*/
  return 0; /*0x4c9518*/
}


// ==== 0x004C9530  MovementClass::CompareAbsCoords  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MovementClass::CompareAbsCoords(_WORD *this, ObjectClass *aP1)
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

  v2 = this->owningHouseIndex; /*0x4c9533*/
  if ( v2 <= 0 ) /*0x4c953b*/
    goto LABEL_14; /*0x4c953b*/
  v3 = this->vtable3; /*0x4c953d*/
  v4 = this->vtable2; /*0x4c9540*/
  if ( v3 != -1 ) /*0x4c954c*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3 >= v4 ) /*0x4c9554*/
    {
LABEL_14:
      v7 = *(_DWORD *)this; /*0x4c95b1*/
      v11 = *(_DWORD *)this; /*0x4c95b3*/
      goto LABEL_15; /*0x4c95b3*/
    }
    v4 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3; /*0x4c9556*/
  }
  if ( !v4 ) /*0x4c955a*/
    goto LABEL_14; /*0x4c955a*/
  v5 = (__int16)(*this - this->vtable3); /*0x4c9567*/
  v6 = abs16(*this - this->vtable3) / v2; /*0x4c9572*/
  v7 = *(_DWORD *)this; /*0x4c9574*/
  v14 = *(_DWORD *)this; /*0x4c9576*/
  if ( (__int16)v6 > 0 ) /*0x4c957d*/
  {
    v8 = this->vtable2; /*0x4c957f*/
    v9 = this->vtable3; /*0x4c9582*/
    if ( v9 != -1 ) /*0x4c9588*/
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9 >= v8 ) /*0x4c9590*/
      {
        v10 = 0; /*0x4c95ad*/
        goto LABEL_11; /*0x4c95af*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9); /*0x4c9592*/
    }
    v10 = v8; /*0x4c9594*/
LABEL_11:
    LOWORD(v14) = v14 - v10 * (v5 / (__int16)v6); /*0x4c9596*/
  }
  LOWORD(v11) = v14; /*0x4c95a6*/
LABEL_15:
  v12 = v7 - v11; /*0x4c95b5*/
  LOWORD(v14) = v12; /*0x4c95bb*/
  *(_DWORD *)aP1->__pad_0 = v14; /*0x4c95c6*/
  return aP1->__pad_0; /*0x4c95c4*/
}


// ==== 0x004C95D0  ObjectClass::method_4C95D0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4C95D0(_WORD *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // bx
  int v4; // esi
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  __int16 v11; // cx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-4h]

  v3 = this->owningHouseIndex; /*0x4c95d2*/
  if ( v3 <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  v4 = this->vtable3; /*0x4c95dd*/
  v5 = this->vtable2; /*0x4c95e0*/
  if ( v4 != -1 ) /*0x4c95ec*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4c95f4*/
    {
LABEL_14:
      v12 = *(_DWORD *)this; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4c95f6*/
  }
  if ( !v5 ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  v6 = (__int16)(*this - this->vtable3); /*0x4c9606*/
  v7 = (__int16)(*this - this->vtable3); /*0x4c960b*/
  v8 = (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) / v3; /*0x4c9611*/
  v14 = *(_DWORD *)this; /*0x4c9615*/
  if ( (__int16)v8 > 0 ) /*0x4c961c*/
  {
    v9 = this->vtable2; /*0x4c961e*/
    v10 = this->vtable3; /*0x4c9621*/
    if ( v10 != -1 ) /*0x4c9627*/
    {
      if ( (int)MEMORY[0xA8ED84] - v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      LOWORD(v9) = v9 - ((_WORD)MEMORY[0xA8ED84] - v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
LABEL_11:
    LOWORD(v14) = v14 - v11 * (v6 / (__int16)v8); /*0x4c9635*/
  }
  LOWORD(v12) = v14; /*0x4c9645*/
LABEL_15:
  LOWORD(a3) = *a3 - v12; /*0x4c9651*/
  *a2 = a3; /*0x4c966b*/
  return a2; /*0x4c9655*/
}


// ==== 0x004C9680  BuildingTypeClass::GetPowerOutput  this=FacingStruct  sig=csp ====
int __thiscall BuildingTypeClass::GetPowerOutput(_WORD *this, ObjectClass *aP1)
{
  ObjectClass *result; // eax
  __int16 v3; // dx

  result = aP1; /*0x4c9680*/
  if ( (int)aP1 >= 127 ) /*0x4c9687*/
    result = (ObjectClass *)127; /*0x4c9689*/
  LOBYTE(v3) = 0; /*0x4c968e*/
  HIBYTE(v3) = (_BYTE)result; /*0x4c9690*/
  *(this + 10) = v3; /*0x4c9692*/
  return (int)result->__pad_0; /*0x4c9696*/
}


// ==== 0x004C96A0  sub_4C96A0  this=-  sig=ida-proto ====
void sub_4C96A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c96ac*/
  MEMORY[0x8B3AD0] = Math::Sqrt(v0 + v0); /*0x4c96be*/
}


// ==== 0x004C96D0  sub_4C96D0  this=-  sig=ida-proto ====
void sub_4C96D0()
{
  MEMORY[0x8B3B20] = MEMORY[0x8B3AD0] / 60.0; /*0x4c96dc*/
}


// ==== 0x004C96F0  sub_4C96F0  this=-  sig=ida-proto ====
void sub_4C96F0()
{
  MEMORY[0x8B3B08] = 1.0 / MEMORY[0x8B3B20]; /*0x4c96fc*/
}


// ==== 0x004C9710  sub_4C9710  this=-  sig=ida-proto ====
void sub_4C9710()
{
  MEMORY[0x8B3B00] = 0.0174532925199433 * 45.0; /*0x4c971c*/
}


// ==== 0x004C9730  sub_4C9730  this=-  sig=ida-proto ====
void sub_4C9730()
{
  MEMORY[0x8B3AD8] = 0.0174532925199433 * 60.0; /*0x4c973c*/
}


// ==== 0x004C9750  sub_4C9750  this=-  sig=ida-proto ====
void sub_4C9750()
{
  MEMORY[0x8B3AB0] = 0.0174532925199433 * 90.0; /*0x4c975c*/
}


// ==== 0x004C9770  sub_4C9770  this=-  sig=ida-proto ====
__int64 sub_4C9770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3AB0] - MEMORY[0x8B3AD8]); /*0x4c9782*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3AD0] * 0.5); /*0x4c9796*/
  MEMORY[0x8B3B28] = result; /*0x4c979b*/
  return result; /*0x4c97a0*/
}


// ==== 0x004C97B0  sub_4C97B0  this=-  sig=ida-proto ====
void sub_4C97B0()
{
  MEMORY[0x8B3AE0] = Math::ArcTan((double)MEMORY[0x8B3B28] * 0.00390625); /*0x4c97c7*/
}


// ==== 0x004C97E0  sub_4C97E0  this=-  sig=ida-proto ====
void sub_4C97E0()
{
  MEMORY[0x8B3AF8] = Math::ArcTan((double)(2 * MEMORY[0x8B3B28]) / MEMORY[0x8B3AD0]); /*0x4c9802*/
}


// ==== 0x004C9810  sub_4C9810  this=-  sig=ida-proto ====
__int64 sub_4C9810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3B28]) + 0.5); /*0x4c982b*/
  MEMORY[0x8B3B1C] = result; /*0x4c9830*/
  return result; /*0x4c9836*/
}


// ==== 0x004C9840  sub_4C9840  this=-  sig=ida-proto ====
int sub_4C9840()
{
  MEMORY[0x8B3AC8] = 0; /*0x4c9842*/
  MEMORY[0x8B3ACA] = 0; /*0x4c9848*/
  return 0; /*0x4c984e*/
}


// ==== 0x004C9850  sub_4C9850  this=-  sig=ida-proto ====
int sub_4C9850()
{
  MEMORY[0x8B3AE8] = 0; /*0x4c9852*/
  MEMORY[0x8B3AEC] = 0; /*0x4c9857*/
  MEMORY[0x8B3AF0] = 0; /*0x4c985c*/
  return 0; /*0x4c9861*/
}


// ==== 0x004C9870  sub_4C9870  this=-  sig=ida-proto ====
int sub_4C9870()
{
  MEMORY[0x8B3B18] = 0; /*0x4c9875*/
  MEMORY[0x8B3B10] = 128; /*0x4c987f*/
  MEMORY[0x8B3B14] = 128; /*0x4c9884*/
  return 128; /*0x4c9889*/
}


// ==== 0x004C9890  sub_4C9890  this=-  sig=ida-proto ====
int sub_4C9890()
{
  MEMORY[0x8B3AB8] = 0; /*0x4c9892*/
  MEMORY[0x8B3ABC] = 0; /*0x4c9897*/
  MEMORY[0x8B3AC0] = 0; /*0x4c989c*/
  MEMORY[0x8B3AC4] = 0; /*0x4c98a1*/
  return 0; /*0x4c98a6*/
}


// ==== 0x004C98B0  TeamTypeClass::Construct  this=FactoryClass  sig=csp ====
int __thiscall TeamTypeClass_Constructor(int this)
{
  #72 *v2; // eax
  int v3; // eax
  #72 *v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((#373 *)this); /*0x4c98b7*/
  *(_DWORD *)(this + 36) = 0; /*0x4c98be*/
  *(_BYTE *)(this + 40) = 0; /*0x4c98c1*/
  v2 = MEMORY[0xA8ED84]; /*0x4c98c4*/
  *(_DWORD *)(this + 52) = 0; /*0x4c98c9*/
  *(_DWORD *)(this + 44) = v2; /*0x4c98cc*/
  *(_DWORD *)(this + 56) = 0; /*0x4c98d4*/
  *(_DWORD *)(this + 60) = 1; /*0x4c98d7*/
  *(_DWORD *)(this + 68) = 0; /*0x4c98da*/
  *(_DWORD *)(this + 72) = 0; /*0x4c98dd*/
  *(_BYTE *)(this + 76) = 1; /*0x4c98e0*/
  *(_BYTE *)(this + 77) = 0; /*0x4c98e3*/
  *(_DWORD *)(this + 64) = &DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
  *(_DWORD *)(this + 84) = 10; /*0x4c98ed*/
  *(_DWORD *)(this + 80) = 0; /*0x4c98f4*/
  *(_BYTE *)(this + 113) = 1; /*0x4c98f7*/
  *(_DWORD *)(this + 88) = 0; /*0x4c98fd*/
  *(_BYTE *)(this + 92) = 0; /*0x4c9901*/
  *(_BYTE *)(this + 93) = 0; /*0x4c9904*/
  *(_DWORD *)(this + 96) = 0; /*0x4c9907*/
  *(_DWORD *)(this + 100) = 0; /*0x4c990a*/
  *(_DWORD *)(this + 104) = -1; /*0x4c990d*/
  *(_DWORD *)(this + 108) = 0; /*0x4c9914*/
  *(_BYTE *)(this + 112) = 0; /*0x4c9917*/
  *(_DWORD *)this = &FactoryClass::`vftable'; /*0x4c991a*/
  *(_DWORD *)(this + 4) = &FactoryClass::`vftable'; /*0x4c9920*/
  *(_DWORD *)(this + 8) = &FactoryClass::`vftable'; /*0x4c9926*/
  *(_DWORD *)(this + 12) = &FactoryClass::`vftable'; /*0x4c992d*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x4c9934*/
  if ( MEMORY[0xA83E40] < MEMORY[0xA83E38] /*0x4c996d*/
    || (MEMORY[0xA83E3D] || !MEMORY[0xA83E38])
    && MEMORY[0xA83E44] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA83E30] + 8))(
         &MEMORY[0xA83E30],
         MEMORY[0xA83E38] + MEMORY[0xA83E44],
         0) )
  {
    v3 = MEMORY[0xA83E40]++; /*0x4c997a*/
    *((_DWORD *)MEMORY[0xA83E34] + v3) = this; /*0x4c9989*/
  }
  v4 = MEMORY[0xA8ED84]; /*0x4c998c*/
  *(_DWORD *)(this + 56) = 0; /*0x4c9996*/
  *(_DWORD *)(this + 44) = v4; /*0x4c9999*/
  *(_DWORD *)(this + 48) = v7; /*0x4c999f*/
  *(_DWORD *)(this + 52) = 0; /*0x4c99a2*/
  *(_DWORD *)(this + 36) = 0; /*0x4c99a5*/
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x4c99dc*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v5 = MEMORY[0xB0F730]++; /*0x4c99e9*/
    *((_DWORD *)MEMORY[0xB0F724] + v5) = this; /*0x4c99f8*/
  }
  return this; /*0x4c99fd*/
}


// ==== 0x004C9B20  FactoryClass::UpdateProduction  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::UpdateProduction(int this)
{
  int Speed; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  #72 *v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  LOBYTE(Speed) = *(_BYTE *)(this + 112); /*0x4c9b28*/
  if ( !(_BYTE)Speed ) /*0x4c9b2d*/
  {
    Speed = *(_DWORD *)(this + 88); /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( *(_DWORD *)(this + 36) == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !*(_DWORD *)(this + 104) ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( *(_DWORD *)(this + 104) == -1 || *(_DWORD *)(this + 36) != 54 ) /*0x4c9b5d*/
    {
      v3 = (_DWORD *)(this + 44); /*0x4c9b63*/
      Speed = Locomotor::GetSpeed((int *)(this + 44)); /*0x4c9b68*/
      if ( Speed || (Speed = *(_DWORD *)(this + 56)) == 0 ) /*0x4c9b76*/
      {
        *(_BYTE *)(this + 40) = 0; /*0x4c9bba*/
      }
      else
      {
        *(_DWORD *)(this + 36) += *(_DWORD *)(this + 60); /*0x4c9b82*/
        *(_BYTE *)(this + 40) = 1; /*0x4c9b89*/
        *v3 = MEMORY[0xA8ED84]; /*0x4c9b92*/
        *(_DWORD *)(this + 48) = v11; /*0x4c9b94*/
        *(_DWORD *)(this + 52) = Speed; /*0x4c9b97*/
        v4 = *(_DWORD *)(this + 88); /*0x4c9b9a*/
        *(_BYTE *)(this + 93) = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          v5 = *(_DWORD *)(this + 36); /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            v6 = *(_DWORD *)(this + 96); /*0x4c9bc5*/
          else
            v6 = *(_DWORD *)(this + 96) / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          v6 = 0; /*0x4c9bca*/
        }
        if ( v6 >= *(_DWORD *)(this + 96) ) /*0x4c9bd1*/
          v6 = *(_DWORD *)(this + 96); /*0x4c9bd3*/
        if ( v6 <= (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 108) + 36) + 24))(*(_DWORD *)(this + 108) + 36) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain(*(_DWORD *)(this + 108), v6); /*0x4c9bf5*/
          v8 = *(_DWORD *)(this + 96); /*0x4c9bfa*/
          *(_BYTE *)(this + 92) = 0; /*0x4c9bfd*/
          Speed = v8 - v6; /*0x4c9c01*/
          *(_DWORD *)(this + 96) = Speed; /*0x4c9c03*/
        }
        else
        {
          v7 = *(_DWORD *)(this + 36); /*0x4c9be5*/
          *(_BYTE *)(this + 92) = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          *(_DWORD *)(this + 36) = Speed; /*0x4c9bec*/
        }
        if ( *(_DWORD *)(this + 36) == 54 ) /*0x4c9c0a*/
        {
          *(_BYTE *)(this + 112) = 1; /*0x4c9c0c*/
          v9 = MEMORY[0xA8ED84]; /*0x4c9c0f*/
          *(_DWORD *)(this + 56) = 0; /*0x4c9c19*/
          *(_DWORD *)(this + 44) = v9; /*0x4c9c1c*/
          *(_DWORD *)(this + 48) = v11; /*0x4c9c22*/
          *(_DWORD *)(this + 52) = 0; /*0x4c9c25*/
          LOBYTE(Speed) = HouseClass::ProcessPowerDrain(*(_DWORD *)(this + 108), *(_DWORD *)(this + 96)); /*0x4c9c2f*/
          *(_DWORD *)(this + 96) = 0; /*0x4c9c34*/
        }
      }
    }
  }
  return Speed; /*0x4c9bbe*/
}


// ==== 0x004C9C50  SidebarClass::draw  this=SidebarClass  sig=csp ====
char __thiscall sub_4C9C50(_BYTE *this)
{
  return this->q05C; /*0x4c9c53*/
}


// ==== 0x004C9C60  FactoryClass::HasProgressChanged  this=IUnknown  sig=csp ====
char __thiscall FactoryClass::HasProgressChanged(_BYTE *this)
{
  char result; // al

  result = *(this + 93); /*0x4c9c60*/
  *(this + 93) = 0; /*0x4c9c63*/
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
    FactoryClass::AbandonProduction(this); /*0x4c9c89*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!*(_DWORD *)(this + 56) || *(_BYTE *)(this + 112))
    && *(int *)(this + 80) <= 0
    && (!*(_DWORD *)(this + 88) || !*(_BYTE *)(this + 112))
    || a4 )
  {
    *(_BYTE *)(this + 93) = 1; /*0x4c9d6e*/
    *(_BYTE *)(this + 112) = 1; /*0x4c9d72*/
    *(_DWORD *)(this + 44) = MEMORY[0xA8ED84]; /*0x4c9d85*/
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
  else if ( *(_DWORD *)(this + 80) >= MEMORY[0x8871E0]->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(*(_DWORD **)(this + 108), a2) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
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
char __thiscall FactoryClass::SetObject(int this, int a2)
{
  int v3; // eax
  int v5; // [esp+8h] [ebp-8h]

  FactoryClass::AbandonProduction(this); /*0x4c9e16*/
  *(_DWORD *)(this + 88) = a2; /*0x4c9e21*/
  v3 = *(_DWORD *)(a2 + 540); /*0x4c9e27*/
  *(_DWORD *)(this + 96) = 0; /*0x4c9e2d*/
  *(_DWORD *)(this + 108) = v3; /*0x4c9e30*/
  *(_DWORD *)(this + 44) = MEMORY[0xA8ED84]; /*0x4c9e38*/
  *(_DWORD *)(this + 56) = 0; /*0x4c9e3e*/
  *(_DWORD *)(this + 48) = v5; /*0x4c9e41*/
  *(_DWORD *)(this + 52) = 0; /*0x4c9e46*/
  *(_DWORD *)(this + 36) = 54; /*0x4c9e49*/
  *(_BYTE *)(this + 93) = 1; /*0x4c9e50*/
  *(_BYTE *)(this + 112) = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/
}


// ==== 0x004C9E60  FactoryClass::StartProduction  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass_StartProduction(int this, char a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+4h] [ebp-8h]

  if ( *(_BYTE *)(this + 112) ) /*0x4c9e60*/
    return 0; /*0x4c9e98*/
  *(_BYTE *)(this + 113) = a2; /*0x4c9e71*/
  *(_BYTE *)(this + 112) = 1; /*0x4c9e74*/
  v2 = MEMORY[0xA8ED84]; /*0x4c9e78*/
  *(_DWORD *)(this + 56) = 0; /*0x4c9e80*/
  *(_DWORD *)(this + 44) = v2; /*0x4c9e83*/
  *(_DWORD *)(this + 48) = v4; /*0x4c9e89*/
  *(_DWORD *)(this + 52) = 0; /*0x4c9e8e*/
  return 1; /*0x4c9e92*/
}


// ==== 0x004C9EA0  ProductionClass::StartTimer  this=FactoryClass  sig=csp ====
char __thiscall ProductionClass_StartTimer(int this, char a2)
{
  _DWORD *v3; // ecx
  int v4; // edx
  int v5; // edx
  wchar_t *v6; // eax
  int v7; // eax
  int v8; // edi
  int v10; // [esp+Ch] [ebp-8h]

  v3 = *(_DWORD **)(this + 88); /*0x4c9ea7*/
  if ( !v3 && !*(_DWORD *)(this + 104) /*0x4c9edf*/
    || !*(_BYTE *)(this + 112)
    || v3 && *(_DWORD *)(this + 36) == 54
    || *(_DWORD *)(this + 104) != -1 && *(_DWORD *)(this + 36) == 54 )
  {
    return 0; /*0x4c9edf*/
  }
  v4 = 0; /*0x4c9ee5*/
  *(_BYTE *)(this + 112) = 0; /*0x4c9ee7*/
  if ( v3 ) /*0x4c9eed*/
    v4 = HouseClass::CalcProductionSpeed(v3); /*0x4c9ef4*/
  v5 = v4 / 54; /*0x4c9f05*/
  if ( v5 >= 1 ) /*0x4c9f0a*/
  {
    if ( v5 > 255 ) /*0x4c9f19*/
      v5 = 255; /*0x4c9f1b*/
  }
  else
  {
    v5 = 1; /*0x4c9f0c*/
  }
  v6 = MEMORY[0xA8ED84]; /*0x4c9f20*/
  *(_DWORD *)(this + 56) = v5; /*0x4c9f28*/
  *(_DWORD *)(this + 44) = v6; /*0x4c9f2b*/
  *(_DWORD *)(this + 48) = v10; /*0x4c9f31*/
  *(_DWORD *)(this + 52) = v5; /*0x4c9f34*/
  if ( *(_DWORD *)(this + 88) )
  {
    v7 = *(_DWORD *)(this + 36); /*0x4c9f3e*/
    v8 = v7 == 54 ? *(_DWORD *)(this + 96) : *(_DWORD *)(this + 96) / (54 - v7);
  }
  else
  {
    v8 = 0; /*0x4c9f56*/
  }
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 108) + 36) + 24))(*(_DWORD *)(this + 108) + 36) < v8 ) /*0x4c9f66*/
    return 0; /*0x4c9fa7*/
  *(_BYTE *)(this + 113) = 1; /*0x4c9f6c*/
  if ( a2 ) /*0x4c9f72*/
  {
    if ( !*(_BYTE *)(this + 112) ) /*0x4c9f74*/
    {
      *(_BYTE *)(this + 113) = 1; /*0x4c9f7b*/
      *(_BYTE *)(this + 112) = 1; /*0x4c9f7f*/
      *(_DWORD *)(this + 44) = MEMORY[0xA8ED84]; /*0x4c9f8d*/
      *(_DWORD *)(this + 56) = 0; /*0x4c9f93*/
      *(_DWORD *)(this + 48) = v10; /*0x4c9f96*/
      *(_DWORD *)(this + 52) = 0; /*0x4c9f99*/
    }
  }
  return 1; /*0x4c9f9c*/
}


// ==== 0x004C9FB0  FactoryClass::GetBuildTimeFrames  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::GetBuildTimeFrames(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  int v3; // edx
  int result; // eax

  v1 = (_DWORD *)this->q058; /*0x4c9fb0*/
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


// ==== 0x004C9FF0  BuildingClass::AbandonProduction  this=FactoryClass  sig=csp ====
char __thiscall BuildingClass_AbandonProduction(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  #72 *v7; // eax
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
  v7 = MEMORY[0xA8ED84]; /*0x4ca05b*/
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
  ++MEMORY[0xA8E7AC]; /*0x4ca0eb*/
  v9 = *(_DWORD *)(this + 88); /*0x4ca0f1*/
  if ( v9 ) /*0x4ca0f6*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4ca0fc*/
  *(_DWORD *)(this + 88) = 0; /*0x4ca0ff*/
  --MEMORY[0xA8E7AC]; /*0x4ca109*/
  return 1; /*0x4ca108*/
}


// ==== 0x004CA120  ObjectClass::GetMember09  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass_GetMember09(_DWORD *this)
{
  return this->objectTypeFlags; /*0x4ca123*/
}


// ==== 0x004CA130  ObjectClass::IsCliffWall  this=IUnknown  sig=csp ====
bool __thiscall ObjectClass_IsCliffWall(_DWORD *this)
{
  if ( this->q160 && this->q024 == 54 ) /*0x4ca13f*/
    return 1; /*0x4ca141*/
  return this->q01A != -1 && this->q024 == 54; /*0x4ca14d*/
}


// ==== 0x004CA160  AbstractClass::GetType  this=IUnknown  sig=csp ====
int __thiscall AbstractClass_GetType(_DWORD *this)
{
  return this->q160; /*0x4ca163*/
}


// ==== 0x004CA170  SidebarClass::draw2  this=IUnknown  sig=csp ====
int __thiscall sub_4CA170(_DWORD *this)
{
  return this->q01A; /*0x4ca173*/
}


// ==== 0x004CA1A0  ProductionQueue::CompleteOrCancel  this=ProductionQueue  sig=csp ====
char __thiscall ProductionQueue::CompleteOrCancel(int this)
{
  wchar_t *v2; // esi
  wchar_t *v3; // esi
  int v4; // [esp+Ch] [ebp-8h]

  if ( *(_DWORD *)(this + 88) && *(_DWORD *)(this + 36) == 54 ) /*0x4ca1b6*/
  {
    *(_DWORD *)(this + 88) = 0; /*0x4ca1ba*/
    *(_BYTE *)(this + 112) = 1; /*0x4ca1bd*/
    *(_BYTE *)(this + 93) = 1; /*0x4ca1c0*/
    *(_DWORD *)(this + 36) = 0; /*0x4ca1c3*/
    v2 = MEMORY[0xA8ED84]; /*0x4ca1c6*/
    *(_DWORD *)(this + 56) = 0; /*0x4ca1cf*/
    *(_DWORD *)(this + 44) = v2; /*0x4ca1d2*/
    *(_DWORD *)(this + 48) = v4; /*0x4ca1d8*/
    *(_DWORD *)(this + 52) = 0; /*0x4ca1db*/
    return 1; /*0x4ca1b8*/
  }
  else if ( *(_DWORD *)(this + 104) && *(_DWORD *)(this + 36) == 54 ) /*0x4ca1ec*/
  {
    *(_DWORD *)(this + 104) = -1; /*0x4ca1f0*/
    *(_BYTE *)(this + 112) = 1; /*0x4ca1f7*/
    *(_BYTE *)(this + 93) = 1; /*0x4ca1fa*/
    *(_DWORD *)(this + 36) = 0; /*0x4ca1fd*/
    v3 = MEMORY[0xA8ED84]; /*0x4ca200*/
    *(_DWORD *)(this + 56) = 0; /*0x4ca209*/
    *(_DWORD *)(this + 44) = v3; /*0x4ca20c*/
    *(_DWORD *)(this + 48) = v4; /*0x4ca212*/
    *(_DWORD *)(this + 52) = 0; /*0x4ca215*/
    return 1; /*0x4ca1ee*/
  }
  else
  {
    return 0; /*0x4ca21f*/
  }
}


// ==== 0x004CA230  FactoryClass::ddtor  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4ca236*/
    return -2147467261; /*0x4ca238*/
  *a2 = 887937448; /*0x4ca246*/
  a2[1] = 298977968; /*0x4ca24e*/
  a2[2] = 1610655660; /*0x4ca257*/
  a2[3] = -1252326136; /*0x4ca260*/
  return 0; /*0x4ca23d*/
}


// ==== 0x004CA270  FactoryClass::LoadFromStream  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::vt_05_(int a1, int *a2)
{
  int *v2; // ebp
  int v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x4ca273*/
  v3 = a1; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((_DWORD *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor(0, 0); /*0x4ca2b2*/
      *(_DWORD *)(v3 + 64) = &vt_DynamicVectorClass_TechnoTypeClass_const; /*0x4ca2b7*/
      *(_DWORD *)(v3 + 84) = 10; /*0x4ca2bd*/
      *(_DWORD *)(v3 + 80) = 0; /*0x4ca2c4*/
      *(_DWORD *)v3 = &FactoryClass::`vftable'; /*0x4ca2c7*/
      *(_DWORD *)(v3 + 4) = &FactoryClass::`vftable'; /*0x4ca2cd*/
      *(_DWORD *)(v3 + 8) = &FactoryClass::`vftable'; /*0x4ca2d4*/
      *(_DWORD *)(v3 + 12) = &vt_FactoryClass; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    a1 = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = a1; /*0x4ca2fd*/
      v13 = 0; /*0x4ca301*/
      if ( a1 <= 0 ) /*0x4ca307*/
      {
LABEL_14:
        v12 = 0; /*0x4ca374*/
        if ( v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v3 + 68) + 4 * v12++)); /*0x4ca386*/
          while ( v12 < a1 ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 108)); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 88)); /*0x4ca3a9*/
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
          v8 = *(_DWORD *)(v3 + 72); /*0x4ca324*/
          if ( *(_DWORD *)(v3 + 80) < v8 /*0x4ca349*/
            || (*(_BYTE *)(v3 + 77) || !v8)
            && (v9 = *(_DWORD *)(v3 + 84), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 64) + 8))(v3 + 64, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(v3 + 80); /*0x4ca350*/
            v11 = *(_DWORD *)(v3 + 68); /*0x4ca353*/
            *(_DWORD *)(v3 + 80) = v10 + 1; /*0x4ca359*/
            *(_DWORD *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = a1; /*0x4ca367*/
          if ( ++v13 >= a1 ) /*0x4ca372*/
            goto LABEL_14; /*0x4ca372*/
        }
      }
    }
  }
  return result; /*0x4ca3b0*/
}


// ==== 0x004CA3C0  FactoryClass::Seek  this=FactoryClass  sig=csp ====
int __stdcall FactoryClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x4ca3d2*/
  if ( result >= 0 ) /*0x4ca3d9*/
  {
    v4 = *a2; /*0x4ca3de*/
    a3 = a1[20]; /*0x4ca3ea*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, a1[17] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
          break; /*0x4ca412*/
      }
      return 0; /*0x4ca41d*/
    }
  }
  return result; /*0x4ca41f*/
}


// ==== 0x004CA430  FactoryClass::Stat  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::Stat(#378 *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  Debug::Log(); /*0x4ca43f*/
  Debug::Log(); /*0x4ca44d*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 44))(this->q058); /*0x4ca45a*/
  Debug::Log(); /*0x4ca463*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 64))(this->q058); /*0x4ca470*/
  Debug::Log(); /*0x4ca479*/
  Debug::Log(); /*0x4ca489*/
  Debug::Log(); /*0x4ca499*/
  Debug::Log(); /*0x4ca4a7*/
  Debug::Log(); /*0x4ca4b5*/
  Debug::Log(); /*0x4ca4c3*/
  (*(void (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4); /*0x4ca4d4*/
  Debug::Log(); /*0x4ca4dd*/
  (*(void (__stdcall **)(char *))(this->vtable2 + 16))((char *)this + 4); /*0x4ca4ec*/
  Debug::Log(); /*0x4ca4f5*/
  v3 = AbstractClass::ProcessPower(this); /*0x4ca504*/
  LOBYTE(v3) = this->isSuspended; /*0x4ca509*/
  Power::FlagProcess(a2, v3); /*0x4ca50f*/
  LOBYTE(v4) = this->q174; /*0x4ca514*/
  Power::FlagProcess(a2, v4); /*0x4ca51a*/
  Power::TimerProcess(this->nextArrayIndex); /*0x4ca525*/
  Power::TimerProcess(this->originalBalance); /*0x4ca530*/
  v5 = this->q058; /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(this->q01A); /*0x4ca554*/
  v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/
}


// ==== 0x004CA580  FactoryClass::Revert  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == this->q058 ) /*0x4ca589*/
    this->q058 = 0; /*0x4ca58b*/
  return result; /*0x4ca592*/
}


// ==== 0x004CA5A0  FactoryClass::StartProduction_2  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::StartProduction_2(int this)
{
  int v2; // eax
  _BYTE *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char v10; // [esp-8h] [ebp-10h]

  v2 = *(_DWORD *)(this + 80); /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = *(_DWORD *)(this + 88); /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !*(_DWORD *)(this + 56) || (LOBYTE(v2) = *(_BYTE *)(this + 112), (_BYTE)v2) ) /*0x4ca5be*/
      {
        v3 = **(_BYTE ***)(this + 68); /*0x4ca5c3*/
        v4 = *(_DWORD *)(this + 80); /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *(_DWORD *)(this + 80) = v5; /*0x4ca5d6*/
                v6 < *(_DWORD *)(this + 80);
                *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * v6) )
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
          LOBYTE(v2) = Sidebar::StartSidebarProduction(*(_DWORD *)(this + 108), v7, v9, v10, 1); /*0x4ca60a*/
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}


// ==== 0x004CA620  FactoryClass::RemoveOneFromQueue  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::RemoveOneFromQueue(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = this + 16; /*0x4ca624*/
  v3 = (*(int (__thiscall **)(_DWORD *, char *))(this->onHold + 16))(this + 16, &a2); /*0x4ca62e*/
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = v2[4]; /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( v2[4] = v5; v3 < v2[4]; *(_DWORD *)(v2[1] + 4 * v3 - 4) = *(_DWORD *)(v2[1] + 4 * v3) ) /*0x4ca643*/
    ++v3; /*0x4ca648*/
  return 1; /*0x4ca659*/
}


// ==== 0x004CA670  FactoryClass::CountType  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::CountType(int *this, IUnknown *aP1)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  IUnknown **v6; // esi

  v3 = 0; /*0x4ca679*/
  v4 = this->q058; /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) == (_DWORD)aP1; /*0x4ca68e*/
  v5 = this->abstractFlags; /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = (IUnknown **)this->q011; /*0x4ca69a*/
    do /*0x4ca6a6*/
    {
      if ( *v6 == aP1 ) /*0x4ca69f*/
        ++v3; /*0x4ca6a1*/
      ++v6; /*0x4ca6a2*/
      --v5; /*0x4ca6a5*/
    }
    while ( v5 ); /*0x4ca6a6*/
  }
  return v3; /*0x4ca6aa*/
}


// ==== 0x004CA6B0  FactoryClass::IsQueued  this=ControlClass  sig=csp ====
char __thiscall FactoryClass::IsQueued(int *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = this->Visible; /*0x4ca6b0*/
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = (_DWORD *)this->q044; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}


// ==== 0x004CA6E0  HouseClass::UpdateTeamProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall sub_4CA6E0(void *this)
{
  int result; // eax
  int i; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // edx

  result = MEMORY[0xA83E40]; /*0x4ca6e0*/
  for ( i = 0; i < MEMORY[0xA83E40]; ++i ) /*0x4ca6ed*/
  {
    v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA83E34] + i); /*0x4ca6f5*/
    if ( (void *)v4[27] == this ) /*0x4ca6fb*/
    {
      v5 = (_DWORD *)v4[22]; /*0x4ca6fd*/
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
      if ( v7 != v4[14] ) /*0x4ca73a*/
        v4[14] = v7; /*0x4ca73c*/
    }
    result = MEMORY[0xA83E40]; /*0x4ca73f*/
  }
  return result; /*0x4ca74a*/
}


// ==== 0x004CA750  FactoryClass::StubReturn12  this=FactoryClass  sig=csp ====
int FactoryClass::_vt11()
{
  return 12; /*0x4ca755*/
}


// ==== 0x004CA760  FactoryClass::StubReturn116  this=FactoryClass  sig=csp ====
int FactoryClass::_vt12()
{
  return 116; /*0x4ca765*/
}


// ==== 0x004CA770  FactoryClass::CopyTo  this=FactoryClass  sig=csp ====
FactoryClass *__thiscall FactoryClass::CopyTo(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *Block = &FactoryClass::`vftable'; /*0x4ca776*/
  *(Block + 1) = &FactoryClass::`vftable'; /*0x4ca77c*/
  *(Block + 2) = &FactoryClass::`vftable'; /*0x4ca783*/
  *(Block + 3) = &vt_FactoryClass; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x4ca791*/
  v7 = Block; /*0x4ca7a6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83E30] + 16))(&MEMORY[0xA83E30], &v7); /*0x4ca7aa*/
  if ( v3 != -1 && v3 < MEMORY[0xA83E40] && v3 < --MEMORY[0xA83E40] ) /*0x4ca7c5*/
  {
    do /*0x4ca7dd*/
    {
      ++v3; /*0x4ca7cd*/
      *((_DWORD *)MEMORY[0xA83E34] + v3 - 1) = *((_DWORD *)MEMORY[0xA83E34] + v3); /*0x4ca7d1*/
    }
    while ( v3 < MEMORY[0xA83E40] ); /*0x4ca7dd*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x4ca7e6*/
    FactoryClass::AbandonProduction((int)Block); /*0x4ca7ea*/
  v7 = Block; /*0x4ca7ff*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F720] + 16))(&MEMORY[0xB0F720], &v7); /*0x4ca803*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F730] && v4 < --MEMORY[0xB0F730] ) /*0x4ca81e*/
  {
    do /*0x4ca836*/
    {
      ++v4; /*0x4ca826*/
      *((_DWORD *)MEMORY[0xB0F724] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F724] + v4); /*0x4ca82a*/
    }
    while ( v4 < MEMORY[0xB0F730] ); /*0x4ca836*/
  }
  v5 = *(Block + 17); /*0x4ca838*/
  *(Block + 16) = &vt_VectorClass_TechnoTypeClass_const; /*0x4ca83b*/
  if ( v5 && *((_BYTE *)Block + 77) ) /*0x4ca846*/
  {
    __3_YAXPAX_Z(v5); /*0x4ca84e*/
    *(Block + 17) = 0; /*0x4ca856*/
  }
  *((_BYTE *)Block + 77) = 0; /*0x4ca85f*/
  *(Block + 18) = 0; /*0x4ca863*/
  AbstractClass::DTOR(Block); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    __3_YAXPAX_Z(Block); /*0x4ca877*/
  return (FactoryClass *)Block; /*0x4ca881*/
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
int __thiscall FactoryClass_33_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4ca8ea*/
}


// ==== 0x004CA8F0  _VectorClass_PBVTechnoTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ca8f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( v2 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
    v4 = (_DWORD *)this->Items; /*0x4ca905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ca90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ca914*/
    {
      ++v3; /*0x4ca916*/
      ++v4; /*0x4ca917*/
      if ( v3 >= v2 ) /*0x4ca91c*/
        return 1; /*0x4ca91c*/
    }
  }
  return 0; /*0x4ca91e*/
}


// ==== 0x004CA930  _VectorClass_PBVTechnoTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall FactoryClass_33_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
    this->IsInitialized = 0; /*0x4ca946*/
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ca95e*/
    this->IsInitialized = 1; /*0x4ca966*/
    if ( v4 ) /*0x4ca96a*/
    {
      if ( this->Items ) /*0x4ca975*/
      {
        v6 = this->Capacity; /*0x4ca97c*/
        if ( a2 < v6 ) /*0x4ca981*/
          v6 = a2; /*0x4ca983*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ca989*/
          ++i; /*0x4ca98e*/
        if ( this->IsAllocated ) /*0x4ca99b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ca9a6*/
          this->Items = 0; /*0x4ca9ae*/
        }
      }
      this->Items = v4; /*0x4ca9b7*/
      this->Capacity = a2; /*0x4ca9bf*/
      this->IsAllocated = a3 == 0; /*0x4ca9c2*/
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ca9d2*/
    return 1; /*0x4ca9d8*/
  }
}


// ==== 0x004CA9E0  _VectorClass_PBVTechnoTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FactoryClass_33_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ca9ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ca9f3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ca9fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ca9fe*/
  *(_DWORD *)(this + 8) = 0; /*0x4caa01*/
}


// ==== 0x004CAA10  _VectorClass_PBVTechnoTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall FactoryClass_33_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4caa10*/
    return 0; /*0x4caa18*/
  v3 = *(_DWORD *)(this + 8); /*0x4caa1e*/
  result = 0; /*0x4caa21*/
  if ( v3 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4caa2b*/
  {
    if ( ++result >= v3 ) /*0x4caa3a*/
      return -1; /*0x4caa3a*/
  }
  return result; /*0x4caa1a*/
}


// ==== 0x004CAA50  _VectorClass_PBVTechnoTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FactoryClass_33_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4caa50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4caa65*/
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
VectorClass *__thiscall FactoryClass_33_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4cab53*/
  *Block = &vt_VectorClass_TechnoTypeClass_const; /*0x4cab56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x4cab68*/
    *(Block + 1) = 0; /*0x4cab70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4cab7b*/
  *(Block + 2) = 0; /*0x4cab81*/
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    __3_YAXPAX_Z(Block); /*0x4cab8b*/
  return (VectorClass *)Block; /*0x4cab95*/
}


// ==== 0x004CABA0  ?$DynamicVectorClass@PBVTechnoTypeClass@@::resetScriptState  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AbstractClass::resetScriptState(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4caba3*/
  *Block = &vt_VectorClass_TechnoTypeClass_const; /*0x4caba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4cabb0*/
  {
    __3_YAXPAX_Z(v3); /*0x4cabb8*/
    *(Block + 1) = 0; /*0x4cabc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4cabcb*/
  *(Block + 2) = 0; /*0x4cabd1*/
  if ( (a2 & 1) != 0 ) /*0x4cabd8*/
    __3_YAXPAX_Z(Block); /*0x4cabdb*/
  return (DynamicVector *)Block; /*0x4cabe5*/
}


// ==== 0x004CABF0  TechnoTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TechnoTypeVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x4cabfb*/
  this->Capacity = a2; /*0x4cabfe*/
  this->q030 = 1; /*0x4cac01*/
  this->q034 = 0; /*0x4cac05*/
  *this = &vt_VectorClass_TechnoTypeClass_const; /*0x4cac08*/
  if ( a2 ) /*0x4cac0e*/
  {
    if ( a3 ) /*0x4cac16*/
    {
      this->Items = a3; /*0x4cac18*/
      return this; /*0x4cac1e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4cac2d*/
    this->q034 = 1; /*0x4cac30*/
  }
  return this; /*0x4cac1d*/
}


// ==== 0x004CAC40  Math::Sqrt  this=Math  sig=csp ====
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::Sqrt(AbstractClass *aP0)
{
  double v1; // st7
  unsigned int v3; // ecx
  unsigned int v4; // eax
  AbstractClass *aP0a; // [esp+4h] [ebp+4h]

  v1 = *(double *)&aP0; /*0x4cac40*/
  if ( *(double *)&aP0 == 0.0 ) /*0x4cac4f*/
    return 0.0; /*0x4cac53*/
  if ( *(double *)&aP0 <= 0.0 ) /*0x4cac65*/
    v1 = *(double *)&aP0 * -1.0; /*0x4cac67*/
  *(float *)&aP0a = v1; /*0x4cac6d*/
  v3 = (unsigned int)&unk_7FFFFF & (unsigned int)aP0a; /*0x4cac77*/
  v4 = ((unsigned int)aP0a >> 23) - 127; /*0x4cac80*/
  if ( (v4 & 1) != 0 ) /*0x4cac85*/
    v3 |= (unsigned int)&unk_800000; /*0x4cac87*/
  return COERCE_FLOAT(((((__int16)v4 >> 1) + 127) << 23) + dword_8650BC[v3 >> 10]); /*0x4cac59*/
}


// ==== 0x004CACB0  Math::SinCos  this=Math  sig=csp ====
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::SinCos(IUnknown *aP0)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax

  v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B0); /*0x4cacba*/
  v2 = v1 & 1; /*0x4cacc4*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cace7*/
    ++v3; /*0x4cace9*/
  return *(float *)&stru_84DD9C.__pad_1258[4 * v3 + 144]; /*0x4cacf1*/
}


// ==== 0x004CAD00  Math::ArcTan2  this=RecoilData  sig=csp ====
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::ArcTan2(IUnknown *aP0)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int v4; // eax

  v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B4); /*0x4cad0a*/
  v2 = v1 & 1; /*0x4cad14*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    v4 = v3 + 2048; /*0x4cad30*/
  else
    v4 = v3 + 10240; /*0x4cad29*/
  if ( v2 && v4 < 10239 ) /*0x4cad3e*/
    ++v4; /*0x4cad40*/
  return *(float *)&stru_84DD9C.__pad_1258[4 * v4 + 144]; /*0x4cad48*/
}


// ==== 0x004CAD50  Math::Sin  this=Math  sig=csp ====
double __cdecl Math_Sin(double a1)
{
  signed int v1; // eax

  v1 = Math::RoundToInt(a1 * 651.8986469044033) & 0x80000FFF; /*0x4cad5f*/
  if ( v1 < 0 )
    v1 = (((_WORD)v1 - 1) | 0xFFFFF000) + 1 + ((int)((((_WORD)v1 - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return MEMORY[0x85D0A4][v1]; /*0x4cad7b*/
}


// ==== 0x004CAD80  BuildingLight::CalcIntensity  this=BuildingLight  sig=csp ====
double __cdecl BuildingLight_CalcIntensity(double a1)
{
  return *((float *)&MEMORY[0x859094] - Math::RoundToInt((a1 + 1.0) * -2048.0)); /*0x4cada1*/
}


// ==== 0x004CADB0  Math::ArcTan2_Table  this=Math  sig=csp ====
double __cdecl Math_ArcTan2_Table(double a1)
{
  return 1.570796326794897 - *((float *)&MEMORY[0x859094] - Math::RoundToInt((a1 + 1.0) * -2048.0)); /*0x4cadd7*/
}


// ==== 0x004CADE0  Math::ArcTan  this=Math  sig=csp ====
double __cdecl Math_ArcTan(double a1)
{
  int v2; // eax
  double result; // st7
  float v4; // [esp+4h] [ebp+4h]

  v4 = a1; /*0x4cade4*/
  v2 = abs32(Math::RoundToInt(a1 / flt_8650B8)); /*0x4cadf6*/
  if ( v2 >= 4097 ) /*0x4cadfd*/
    result = 1.5707964; /*0x4cae08*/
  else
    result = MEMORY[0x8610B4][v2]; /*0x4cadff*/
  if ( v4 < 0.0 ) /*0x4cae1d*/
    return -result; /*0x4cae1f*/
  return result; /*0x4cae21*/
}


// ==== 0x004CAE30  Math::CalcAngle  this=Math  sig=csp ====
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::CalcAngle(AbstractClass *aP0, double a2)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax
  float v7; // [esp+0h] [ebp-4h]
  double v8; // [esp+10h] [ebp+Ch]
  float v9; // [esp+10h] [ebp+Ch]

  v7 = v8; /*0x4cae35*/
  v9 = *(double *)&aP0; /*0x4cae3d*/
  v3 = v9; /*0x4cae4b*/
  if ( v4 ) /*0x4cae54*/
  {
    if ( v3 == 0.0 ) /*0x4cae61*/
    {
      return 0.0; /*0x4cae63*/
    }
    else if ( v9 <= 0.0 ) /*0x4cae7a*/
    {
      return -1.5707964; /*0x4cae84*/
    }
    else
    {
      return 1.5707964; /*0x4cae7c*/
    }
  }
  else
  {
    v6 = abs32(Math::RoundToInt(v3 / v7 / flt_8650B8)); /*0x4cae9e*/
    if ( v6 >= 4097 ) /*0x4caea5*/
      result = 1.5707964; /*0x4caeb0*/
    else
      result = *(float *)&stru_84DD9C.__pad_579C[4 * v6 + 56188]; /*0x4caea7*/
    if ( v7 < 0.0 ) /*0x4caec5*/
      result = 3.141592653589793 - result; /*0x4caec7*/
    if ( v9 < 0.0 ) /*0x4caedc*/
      return -result; /*0x4caede*/
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
unsigned int sub_4CAF20()
{
  int v0; // esi
  _DWORD *v1; // edx
  int v2; // edi
  double v3; // st7
  double v4; // st7
  unsigned int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st7
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int result; // eax
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]

  v0 = 0; /*0x4caf23*/
  v1 = &unk_86D0BC; /*0x4caf25*/
  v2 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v3 = COERCE_FLOAT((v0 | 0xFE000) << 10); /*0x4caf3d*/
    if ( v3 == 0.0 ) /*0x4caf4c*/
    {
      v4 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v3 <= 0.0 ) /*0x4caf63*/
        v3 = v3 * -1.0; /*0x4caf65*/
      v12 = v3; /*0x4caf6b*/
      v5 = (unsigned int)&unk_7FFFFF & LODWORD(v12); /*0x4caf75*/
      v6 = (LODWORD(v12) >> 23) - 127; /*0x4caf7e*/
      if ( (v6 & 1) != 0 ) /*0x4caf83*/
        v5 |= (unsigned int)&unk_800000; /*0x4caf85*/
      v4 = COERCE_FLOAT(((((__int16)v6 >> 1) + 127) << 23) + dword_8650BC[v5 >> 10]); /*0x4cafa7*/
    }
    v13 = v4; /*0x4cafab*/
    *(v1 - 0x2000) = (unsigned int)&unk_7FFFFF & LODWORD(v13); /*0x4cafc7*/
    v7 = COERCE_FLOAT((v0 | 0x100000) << 10); /*0x4cafcd*/
    if ( v7 == 0.0 ) /*0x4cafdc*/
    {
      v8 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v7 <= 0.0 ) /*0x4caff3*/
        v7 = v7 * -1.0; /*0x4caff5*/
      v14 = v7; /*0x4caffb*/
      v9 = (unsigned int)&unk_7FFFFF & LODWORD(v14); /*0x4cb005*/
      v10 = (LODWORD(v14) >> 23) - 127; /*0x4cb00e*/
      if ( (v10 & 1) != 0 ) /*0x4cb013*/
        v9 |= (unsigned int)&unk_800000; /*0x4cb015*/
      v8 = COERCE_FLOAT(((((__int16)v10 >> 1) + 127) << 23) + dword_8650BC[v9 >> 10]); /*0x4cb037*/
    }
    v15 = v8; /*0x4cb03b*/
    ++v1; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb046*/
    ++v0; /*0x4cb04b*/
    *(v1 - 1) = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb04c*/
    --v2; /*0x4cb04f*/
  }
  while ( v2 ); /*0x4cb050*/
  return result; /*0x4cb056*/
}


// ==== 0x004CB150  ComputeDistortionVariant  this=-  sig=csp ====
double __stdcall ComputeDistortionVariant(float a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax

  v1 = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb161*/
  v2 = v1 & 1; /*0x4cb164*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cb187*/
    return MEMORY[0x84F088][v3]; /*0x4cb189*/
  else
    return MEMORY[0x84F084][v3]; /*0x4cb193*/
}


// ==== 0x004CB1A0  ComputeChronosphereDistortion  this=-  sig=csp ====
double __stdcall ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int v4; // eax

  v1 = Math::RoundToInt(flt_8223B4 * a1); /*0x4cb1b1*/
  v2 = v1 & 1; /*0x4cb1b4*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cb1c7*/
    v4 = v3 + 2048; /*0x4cb1d0*/
  else
    v4 = v3 + 10240; /*0x4cb1c9*/
  if ( v2 && v4 < 10239 ) /*0x4cb1de*/
    return MEMORY[0x84F088][v4]; /*0x4cb1e0*/
  else
    return MEMORY[0x84F084][v4]; /*0x4cb1ea*/
}


// ==== 0x004CB3D0  globalHelper_0CB3D0  this=-  sig=csp ====
double __stdcall globalHelper_0CB3D0(AbstractClass *aP0, AbstractClass *aP1)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax

  v3 = *(float *)&aP0; /*0x4cb3da*/
  if ( v4 ) /*0x4cb3e3*/
  {
    if ( v3 == 0.0 ) /*0x4cb3f0*/
    {
      return 0.0; /*0x4cb3f2*/
    }
    else if ( *(float *)&aP0 <= 0.0 ) /*0x4cb40a*/
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
    v6 = abs32(Math::RoundToInt(v3 / *(float *)&aP1 / flt_8650B8)); /*0x4cb430*/
    if ( v6 >= 4097 ) /*0x4cb437*/
      result = 1.5707964; /*0x4cb442*/
    else
      result = *(float *)&stru_84DD9C.__pad_579C[4 * v6 + 56188]; /*0x4cb439*/
    if ( *(float *)&aP1 < 0.0 ) /*0x4cb457*/
      result = 3.141592653589793 - result; /*0x4cb459*/
    if ( *(float *)&aP0 < 0.0 ) /*0x4cb46e*/
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
ObjectClass *__thiscall sub_4CB580(char *Destination, char *Source, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(Destination, Source, (IUnknown *)4); /*0x4cb58d*/
  *((_WORD *)Destination + 2) = 1; /*0x4cb598*/
  *((_WORD *)Destination + 3) = 1; /*0x4cb59c*/
  v4 = (int *)__2_YAPAXI_Z(1u); /*0x4cb5a0*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb5b1*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb5b9*/
  v6 = &v4[v5 >> 2]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb5c5*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb5c8*/
  return (ObjectClass *)Destination; /*0x4cb5c7*/
}


// ==== 0x004CB5E0  String::AllocAndCopy  this=ObjectClass  sig=csp ====
char *__thiscall String::AllocAndCopy(char *Destination, RandomStruct *aP1, IUnknown *aP2)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, (const char *)aP1, (IUnknown *)4); /*0x4cb5ed*/
  *((_WORD *)Destination + 2) = 2; /*0x4cb5f4*/
  *((_WORD *)Destination + 3) = 1; /*0x4cb5fa*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb600*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb611*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb613*/
  qmemcpy(v4, &aP2, 4 * (v5 >> 2)); /*0x4cb619*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &aP2 + (v5 >> 2), v5 & 3); /*0x4cb625*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb628*/
  return Destination; /*0x4cb627*/
}


// ==== 0x004CB640  ObjectClass::method_4CB640  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_4CB640(char *Destination, RandomStruct *aP1, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(Destination, (const char *)aP1, (IUnknown *)4); /*0x4cb64d*/
  *((_WORD *)Destination + 2) = 3; /*0x4cb654*/
  *((_WORD *)Destination + 3) = 2; /*0x4cb65a*/
  v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb660*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb671*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb679*/
  v6 = &v4[v5 >> 2]; /*0x4cb679*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb685*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb688*/
  return (ObjectClass *)Destination; /*0x4cb687*/
}


// ==== 0x004CB6A0  ObjectClass::method_4CB6A0  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_4CB6A0(char *Destination, RandomStruct *aP1, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(Destination, (const char *)aP1, (IUnknown *)4); /*0x4cb6ad*/
  *((_WORD *)Destination + 2) = 4; /*0x4cb6b4*/
  *((_WORD *)Destination + 3) = 2; /*0x4cb6ba*/
  v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb6c0*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb6d1*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb6d9*/
  v6 = &v4[v5 >> 2]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb6e5*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb6e8*/
  return (ObjectClass *)Destination; /*0x4cb6e7*/
}


// ==== 0x004CB700  NetMessage::Pack4  this=ObjectClass  sig=csp ====
char *__thiscall NetMessage::Pack4(char *Destination, RandomStruct *aP1, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx

  strncpy(Destination, (const char *)aP1, (IUnknown *)4); /*0x4cb70d*/
  *((_DWORD *)Destination + 1) = 262149; /*0x4cb714*/
  v4 = (int *)__2_YAPAXI_Z(4u); /*0x4cb720*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb731*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb733*/
  qmemcpy(v4, &a3, v5); /*0x4cb739*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb748*/
  return Destination; /*0x4cb747*/
}


// ==== 0x004CB760  ObjectClass::TerrainInitMap  this=ObjectClass  sig=csp ====
char *__thiscall TerrainInitMap(char *Destination, RandomStruct *aP1, IUnknown *aP2)
{
  IUnknown **v4; // eax
  unsigned int v5; // edx

  strncpy(Destination, (const char *)aP1, (IUnknown *)4); /*0x4cb76d*/
  *((_DWORD *)Destination + 1) = 262150; /*0x4cb774*/
  v4 = (IUnknown **)__2_YAPAXI_Z(4u); /*0x4cb780*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb791*/
  *((_DWORD *)Destination + 2) = v4; /*0x4cb793*/
  qmemcpy(v4, &aP2, v5); /*0x4cb799*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb7a8*/
  return Destination; /*0x4cb7a7*/
}


// ==== 0x004CB7C0  ObjectClass::BuildResultPacket  this=ObjectClass  sig=csp ====
char *__thiscall BuildResultPacket(char *Destination, char *Source, IUnknown *aP2)
{
  unsigned int v4; // kr04_4
  char *v5; // eax
  unsigned __int16 v6; // cx
  char v7; // dl
  int v8; // ecx
  char *v9; // edi

  strncpy(Destination, Source, (IUnknown *)4); /*0x4cb7cd*/
  *((_WORD *)Destination + 2) = 7; /*0x4cb7dd*/
  v4 = strlen((const char *)aP2) + 1; /*0x4cb7e3*/
  *((_WORD *)Destination + 3) = v4; /*0x4cb7e9*/
  v5 = (char *)__2_YAPAXI_Z((unsigned __int16)v4); /*0x4cb7f3*/
  v6 = *((_WORD *)Destination + 3); /*0x4cb7fc*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb800*/
  v7 = v6; /*0x4cb803*/
  v8 = v6 >> 2; /*0x4cb808*/
  qmemcpy(v5, aP2, 4 * v8); /*0x4cb80b*/
  v9 = &v5[4 * v8]; /*0x4cb80b*/
  qmemcpy(v9, &aP2->field_0 + v8, v7 & 3); /*0x4cb814*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb817*/
  return Destination; /*0x4cb816*/
}


// ==== 0x004CB830  NetMessage::Pack  this=AbstractClass  sig=csp ====
char *__thiscall NetMessage::Pack(char *Destination, char *Source, IUnknown *aP2, IUnknown *aP3)
{
  char *v5; // eax
  unsigned int v6; // edx
  char *v7; // edi

  strncpy(Destination, Source, (IUnknown *)4); /*0x4cb83d*/
  *((_WORD *)Destination + 2) = 20; /*0x4cb846*/
  *((_WORD *)Destination + 3) = (_WORD)aP3; /*0x4cb84c*/
  v5 = (char *)__2_YAPAXI_Z((unsigned __int16)aP3); /*0x4cb856*/
  v6 = *((unsigned __int16 *)Destination + 3); /*0x4cb867*/
  *((_DWORD *)Destination + 2) = v5; /*0x4cb869*/
  qmemcpy(v5, aP2, 4 * (v6 >> 2)); /*0x4cb86f*/
  v7 = &v5[4 * (v6 >> 2)]; /*0x4cb86f*/
  qmemcpy(v7, &aP2->field_0 + (v6 >> 2), v6 & 3); /*0x4cb87b*/
  *((_DWORD *)Destination + 3) = 0; /*0x4cb87e*/
  return Destination; /*0x4cb87d*/
}


// ==== 0x004CB890  ResultNode::Init  this=AbstractClass  sig=csp ====
void __thiscall ResultNode::Init(CCINIClass *this)
{
  __3_YAXPAX_Z((void *)this->headNode[1]); /*0x4cb897*/
  this->headNode[1] = 0; /*0x4cb89f*/
}


// ==== 0x004CB8B0  ObjectClass::method_4CB8B0  this=ObjectClass  sig=csp ====
u_short __thiscall sub_4CB8B0(int this)
{
  u_short v2; // ax
  u_short v3; // cx
  u_short result; // ax

  switch ( *(_WORD *)(this + 4) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      **(_WORD **)(this + 8) = htons(**(_WORD **)(this + 8)); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      **(_DWORD **)(this + 8) = htonl(**(_DWORD **)(this + 8)); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons(*(_WORD *)(this + 4)); /*0x4cb8ec*/
  v3 = *(_WORD *)(this + 6); /*0x4cb8f6*/
  *(_WORD *)(this + 4) = v2; /*0x4cb8fa*/
  result = htons(v3); /*0x4cb8ff*/
  *(_WORD *)(this + 6) = result; /*0x4cb904*/
  return result; /*0x4cb908*/
}


// ==== 0x004CB920  File::Dispatch  this=File  sig=csp ====
__int16 __thiscall sub_4CB920(int this)
{
  u_short v2; // ax
  u_short v3; // cx
  u_short v4; // ax
  u_long v5; // eax

  v2 = ntohs(*(_WORD *)(this + 6)); /*0x4cb928*/
  v3 = *(_WORD *)(this + 4); /*0x4cb92d*/
  *(_WORD *)(this + 6) = v2; /*0x4cb931*/
  v4 = ntohs(v3); /*0x4cb936*/
  *(_WORD *)(this + 4) = v4; /*0x4cb93b*/
  v5 = v4 - 3; /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0u: /*0x4cb94c*/
    case 1u: /*0x4cb94c*/
      LOWORD(v5) = ntohs(**(_WORD **)(this + 8)); /*0x4cb95a*/
      **(_WORD **)(this + 8) = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2u: /*0x4cb94c*/
    case 3u: /*0x4cb94c*/
      v5 = ntohl(**(_DWORD **)(this + 8)); /*0x4cb96d*/
      **(_DWORD **)(this + 8) = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/
}


// ==== 0x004CB990  sub_4CB990  this=-  sig=ida-proto ====
int sub_4CB990()
{
  MEMORY[0x8B3B38] = 0; /*0x4cb992*/
  MEMORY[0x8B3B3C] = 0; /*0x4cb997*/
  MEMORY[0x8B3B40] = 0; /*0x4cb99c*/
  MEMORY[0x8B3B44] = 0; /*0x4cb9a1*/
  return 0; /*0x4cb9a6*/
}


// ==== 0x004CB9B0  sub_4CB9B0  this=-  sig=ida-proto ====
void sub_4CB9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cb9bc*/
  MEMORY[0x8B3B50] = Math::Sqrt(v0 + v0); /*0x4cb9ce*/
}


// ==== 0x004CB9E0  sub_4CB9E0  this=-  sig=ida-proto ====
void sub_4CB9E0()
{
  MEMORY[0x8B3BA0] = MEMORY[0x8B3B50] / 60.0; /*0x4cb9ec*/
}


// ==== 0x004CBA00  sub_4CBA00  this=-  sig=ida-proto ====
void sub_4CBA00()
{
  MEMORY[0x8B3B88] = 1.0 / MEMORY[0x8B3BA0]; /*0x4cba0c*/
}


// ==== 0x004CBA20  sub_4CBA20  this=-  sig=ida-proto ====
void sub_4CBA20()
{
  MEMORY[0x8B3B80] = 0.0174532925199433 * 45.0; /*0x4cba2c*/
}


// ==== 0x004CBA40  sub_4CBA40  this=-  sig=ida-proto ====
void sub_4CBA40()
{
  MEMORY[0x8B3B58] = 0.0174532925199433 * 60.0; /*0x4cba4c*/
}


// ==== 0x004CBA60  sub_4CBA60  this=-  sig=ida-proto ====
void sub_4CBA60()
{
  MEMORY[0x8B3B30] = 0.0174532925199433 * 90.0; /*0x4cba6c*/
}


// ==== 0x004CBA80  sub_4CBA80  this=-  sig=ida-proto ====
__int64 sub_4CBA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3B30] - MEMORY[0x8B3B58]); /*0x4cba92*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3B50] * 0.5); /*0x4cbaa6*/
  MEMORY[0x8B3BA8] = result; /*0x4cbaab*/
  return result; /*0x4cbab0*/
}


// ==== 0x004CBAC0  sub_4CBAC0  this=-  sig=ida-proto ====
void sub_4CBAC0()
{
  MEMORY[0x8B3B60] = Math::ArcTan((double)MEMORY[0x8B3BA8] * 0.00390625); /*0x4cbad7*/
}


// ==== 0x004CBAF0  sub_4CBAF0  this=-  sig=ida-proto ====
void sub_4CBAF0()
{
  MEMORY[0x8B3B78] = Math::ArcTan((double)(2 * MEMORY[0x8B3BA8]) / MEMORY[0x8B3B50]); /*0x4cbb12*/
}


// ==== 0x004CBB20  sub_4CBB20  this=-  sig=ida-proto ====
__int64 sub_4CBB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3BA8]) + 0.5); /*0x4cbb3b*/
  MEMORY[0x8B3B9C] = result; /*0x4cbb40*/
  return result; /*0x4cbb46*/
}


// ==== 0x004CBB50  sub_4CBB50  this=-  sig=ida-proto ====
int sub_4CBB50()
{
  MEMORY[0x8B3B48] = 0; /*0x4cbb52*/
  return 0; /*0x4cbb5e*/
}


// ==== 0x004CBB60  sub_4CBB60  this=-  sig=ida-proto ====
int sub_4CBB60()
{
  MEMORY[0x8B3B68] = 0; /*0x4cbb62*/
  MEMORY[0x8B3B6C] = 0; /*0x4cbb67*/
  MEMORY[0x8B3B70] = 0; /*0x4cbb6c*/
  return 0; /*0x4cbb71*/
}


// ==== 0x004CBB80  sub_4CBB80  this=-  sig=ida-proto ====
int sub_4CBB80()
{
  MEMORY[0x8B3B98] = 0; /*0x4cbb85*/
  MEMORY[0x8B3B90] = 128; /*0x4cbb8f*/
  MEMORY[0x8B3B94] = 128; /*0x4cbb94*/
  return 128; /*0x4cbb99*/
}


// ==== 0x004CBBA0  FootClass::FindPathWithRetry  this=FootClass  sig=csp ====
void *__thiscall FootClass::FindPathWithRetry(int *this, __int16 *a1, int a3, int a4, int a5, int a6, FootClass *aP6)
{
  _DWORD *v8; // eax
  int v9; // edi
  int v11; // [esp+8h] [ebp-14h] BYREF
  int v12; // [esp+Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+10h] [ebp-Ch] BYREF

  v8 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD))(*this + 76))(this, v13, 0); /*0x4cbbb2*/
  v9 = a3; /*0x4cbbb7*/
  LOWORD(v12) = *v8 / 256; /*0x4cbbc9*/
  HIWORD(v12) = v8[1] / 256; /*0x4cbbdd*/
  v11 = v12; /*0x4cbbe8*/
  if ( !a3 ) /*0x4cbbec*/
    return 0; /*0x4cbbef*/
  v11 = *WalkPathClassPath(&a3, &v11, a6, this + 376); /*0x4cbc20*/
  return FindPathWithRetry((int)MEMORY[0x87E8B8], (FootClass *)&v11, a1, (int)this, v9, -1, -1, (int)aP6); /*0x4cbbee*/
}


// ==== 0x004CBC40  ObjectClass::WalkPathfindingLine  this=IUnknown  sig=csp ====
int *__thiscall WalkPathfindingLine(int *this, int *a2, int a3, int *a4, int a5, int a6)
{
  int v6; // eax
  int *v7; // edi
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  double v12; // st7
  int v13; // edx
  char v14; // bl
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int v18; // ebp
  void *v19; // eax
  int v20; // edi
  int v21; // ebp
  void *v22; // eax
  int v23; // edi
  int v24; // ebp
  void *v25; // eax
  int v27; // [esp+28h] [ebp-14h]
  int v28; // [esp+2Ch] [ebp-10h]
  int v29; // [esp+30h] [ebp-Ch]
  int v30; // [esp+34h] [ebp-8h]
  int v31; // [esp+38h] [ebp-4h]

  v6 = a3; /*0x4cbc43*/
  v7 = a4; /*0x4cbc4b*/
  v9 = *(__int16 *)a3; /*0x4cbc5d*/
  a3 = *(__int16 *)a4; /*0x4cbc60*/
  v10 = (double)a3; /*0x4cbc64*/
  v11 = *(__int16 *)(v6 + 2); /*0x4cbc68*/
  a3 = v9; /*0x4cbc6c*/
  a3 = *((__int16 *)a4 + 1); /*0x4cbc86*/
  v12 = Math::CalcAngle((double)v11 - (double)a3, v10 - (double)v9); /*0x4cbc93*/
  LOWORD(a3) = Math::RoundToInt((v12 - 1.570796326794897) * -10430.06004058427); /*0x4cbcac*/
  v13 = a5; /*0x4cbcb8*/
  v27 = a5; /*0x4cbcc1*/
  v14 = ((((((unsigned int)a3 >> 12) + 1) >> 1) ^ 0xFC) - 1) & 7; /*0x4cbccb*/
  if ( a5 >= a6 ) /*0x4cbcd0*/
  {
LABEL_24:
    *a2 = MEMORY[0x8B3B48]; /*0x4cbea7*/
    return a2; /*0x4cbeba*/
  }
  while ( 1 ) /*0x4cbcdc*/
  {
    v15 = *v7; /*0x4cbcdc*/
    a3 = *v7; /*0x4cbce0*/
    if ( v13 > 0 ) /*0x4cbce4*/
    {
      v16 = v13; /*0x4cbce8*/
      do /*0x4cbd16*/
      {
        --v16; /*0x4cbd08*/
        HIWORD(v28) = HIWORD(a3) + HIWORD(MEMORY[0x89F688][v14 & 7]); /*0x4cbd09*/
        LOWORD(v15) = v15 + LOWORD(MEMORY[0x89F688][v14 & 7]); /*0x4cbd0e*/
        LOWORD(v28) = v15; /*0x4cbd03*/
        a3 = v28; /*0x4cbd12*/
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
          v18 = *this; /*0x4cbd55*/
          LOWORD(v29) = v15 + LOWORD(MEMORY[0x89F688][v17]); /*0x4cbd5c*/
          HIWORD(v29) = HIWORD(a3) + HIWORD(MEMORY[0x89F688][v17]); /*0x4cbd69*/
          a3 = v29; /*0x4cbd79*/
          v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x4cbd7d*/
          if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v18 + 428))( /*0x4cbd85*/
                  this,
                  v19,
                  (v14 + 3) & 7,
                  -1,
                  0,
                  1) )
            break; /*0x4cbd85*/
          v13 = v27; /*0x4cbd93*/
          if ( ++a5 >= 2 * v27 ) /*0x4cbda5*/
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
        v24 = *this; /*0x4cbe4b*/
        LOWORD(v31) = v15 + LOWORD(MEMORY[0x89F688][v23]); /*0x4cbe52*/
        HIWORD(v31) = HIWORD(a3) + HIWORD(MEMORY[0x89F688][v23]); /*0x4cbe5f*/
        a3 = v31; /*0x4cbe6f*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x4cbe73*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v24 + 428))( /*0x4cbe7b*/
                this,
                v25,
                (v14 - 4) & 7,
                -1,
                0,
                1) )
          goto LABEL_26; /*0x4cbe83*/
        v13 = v27; /*0x4cbe89*/
        if ( ++a5 >= v27 ) /*0x4cbe94*/
          break; /*0x4cbe94*/
        LOWORD(v15) = a3; /*0x4cbe32*/
      }
    }
LABEL_23:
    v27 = ++v13; /*0x4cbe9d*/
    if ( v13 >= a6 ) /*0x4cbea1*/
      goto LABEL_24; /*0x4cbea1*/
    v7 = a4; /*0x4cbcd8*/
  }
  v20 = (v14 + 2) & 7; /*0x4cbdb3*/
  while ( 1 ) /*0x4cbdbe*/
  {
    v21 = *this; /*0x4cbdbe*/
    LOWORD(v30) = v15 + LOWORD(MEMORY[0x89F688][v20]); /*0x4cbdd0*/
    HIWORD(v30) = HIWORD(MEMORY[0x89F688][v20]) + HIWORD(a3); /*0x4cbdd9*/
    a3 = v30; /*0x4cbde8*/
    v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x4cbdf3*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v21 + 428))(this, v22, (v14 + 2) & 7, -1, 0, 1) ) /*0x4cbdfb*/
      break; /*0x4cbdfb*/
    v13 = v27; /*0x4cbe0d*/
    ++a5; /*0x4cbe12*/
    LOWORD(v15) = a3; /*0x4cbe18*/
    if ( a5 >= v27 ) /*0x4cbe1c*/
      goto LABEL_18; /*0x4cbe1c*/
  }
  *a2 = a3; /*0x4cbec8*/
  return a2; /*0x4cbeb1*/
}


// ==== 0x004CBEF0  sub_4CBEF0  this=-  sig=ida-proto ====
int sub_4CBEF0()
{
  MEMORY[0x8B3BB8] = 0; /*0x4cbef2*/
  MEMORY[0x8B3BBC] = 0; /*0x4cbef7*/
  MEMORY[0x8B3BC0] = 0; /*0x4cbefc*/
  MEMORY[0x8B3BC4] = 0; /*0x4cbf01*/
  return 0; /*0x4cbf06*/
}


// ==== 0x004CBF10  sub_4CBF10  this=-  sig=ida-proto ====
void sub_4CBF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cbf1c*/
  MEMORY[0x8B3BD0] = Math::Sqrt(v0 + v0); /*0x4cbf2e*/
}


// ==== 0x004CBF40  sub_4CBF40  this=-  sig=ida-proto ====
void sub_4CBF40()
{
  MEMORY[0x8B3C20] = MEMORY[0x8B3BD0] / 60.0; /*0x4cbf4c*/
}


// ==== 0x004CBF60  sub_4CBF60  this=-  sig=ida-proto ====
void sub_4CBF60()
{
  MEMORY[0x8B3C08] = 1.0 / MEMORY[0x8B3C20]; /*0x4cbf6c*/
}


// ==== 0x004CBF80  sub_4CBF80  this=-  sig=ida-proto ====
void sub_4CBF80()
{
  MEMORY[0x8B3C00] = 0.0174532925199433 * 45.0; /*0x4cbf8c*/
}


// ==== 0x004CBFA0  sub_4CBFA0  this=-  sig=ida-proto ====
void sub_4CBFA0()
{
  MEMORY[0x8B3BD8] = 0.0174532925199433 * 60.0; /*0x4cbfac*/
}


// ==== 0x004CBFC0  sub_4CBFC0  this=-  sig=ida-proto ====
void sub_4CBFC0()
{
  MEMORY[0x8B3BB0] = 0.0174532925199433 * 90.0; /*0x4cbfcc*/
}


// ==== 0x004CBFE0  sub_4CBFE0  this=-  sig=ida-proto ====
__int64 sub_4CBFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3BB0] - MEMORY[0x8B3BD8]); /*0x4cbff2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3BD0] * 0.5); /*0x4cc006*/
  MEMORY[0x8B3C28] = result; /*0x4cc00b*/
  return result; /*0x4cc010*/
}


// ==== 0x004CC020  sub_4CC020  this=-  sig=ida-proto ====
void sub_4CC020()
{
  MEMORY[0x8B3BE0] = Math::ArcTan((double)MEMORY[0x8B3C28] * 0.00390625); /*0x4cc037*/
}


// ==== 0x004CC050  sub_4CC050  this=-  sig=ida-proto ====
void sub_4CC050()
{
  MEMORY[0x8B3BF8] = Math::ArcTan((double)(2 * MEMORY[0x8B3C28]) / MEMORY[0x8B3BD0]); /*0x4cc072*/
}


// ==== 0x004CC080  sub_4CC080  this=-  sig=ida-proto ====
__int64 sub_4CC080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3C28]) + 0.5); /*0x4cc09b*/
  MEMORY[0x8B3C1C] = result; /*0x4cc0a0*/
  return result; /*0x4cc0a6*/
}


// ==== 0x004CC0B0  sub_4CC0B0  this=-  sig=ida-proto ====
int sub_4CC0B0()
{
  MEMORY[0x8B3BC8] = 0; /*0x4cc0b2*/
  MEMORY[0x8B3BCA] = 0; /*0x4cc0b8*/
  return 0; /*0x4cc0be*/
}


// ==== 0x004CC0C0  sub_4CC0C0  this=-  sig=ida-proto ====
int sub_4CC0C0()
{
  MEMORY[0x8B3BE8] = 0; /*0x4cc0c2*/
  MEMORY[0x8B3BEC] = 0; /*0x4cc0c7*/
  MEMORY[0x8B3BF0] = 0; /*0x4cc0cc*/
  return 0; /*0x4cc0d1*/
}


// ==== 0x004CC0E0  sub_4CC0E0  this=-  sig=ida-proto ====
int sub_4CC0E0()
{
  MEMORY[0x8B3C18] = 0; /*0x4cc0e5*/
  MEMORY[0x8B3C10] = 128; /*0x4cc0ef*/
  MEMORY[0x8B3C14] = 128; /*0x4cc0f4*/
  return 128; /*0x4cc0f9*/
}


// ==== 0x004CC100  TrajectoryHelper::FindFirstObstacle  this=IUnknown  sig=csp ====
_DWORD *__fastcall TrajectoryHelper::FindFirstObstacle(IUnknown *aP0, int *a1, int arg0, void *a3)
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

  if ( !*(_BYTE *)(arg0 + 662) && !*(_BYTE *)(arg0 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  v5 = *a1; /*0x4cc12d*/
  v6 = a1[1]; /*0x4cc136*/
  LOWORD(v21) = aP0->field_0 / 256; /*0x4cc151*/
  HIWORD(v21) = aP0->field_4 / 256; /*0x4cc156*/
  v25 = v21; /*0x4cc15f*/
  LOWORD(v18) = v5 / 256; /*0x4cc171*/
  HIWORD(v18) = v6 / 256; /*0x4cc184*/
  v26 = v18; /*0x4cc18d*/
  v7 = abs32((__int16)v21 - (__int16)v18); /*0x4cc1aa*/
  v8 = abs32(SHIWORD(v21) - SHIWORD(v18)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  v9 = v6 - aP0->field_4; /*0x4cc1bf*/
  v10 = v5 - aP0->field_0; /*0x4cc1c5*/
  v11 = a1[2] - aP0->field_8; /*0x4cc1ca*/
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
  v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v25); /*0x4cc216*/
  v28 = v12; /*0x4cc21e*/
  v27 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v26); /*0x4cc229*/
  v13 = v12; /*0x4cc22f*/
  v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  v22 = 0; /*0x4cc23b*/
  v20 = 0; /*0x4cc23f*/
  v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    v14 = aP0->field_0 + v19; /*0x4cc254*/
    v15 = v20 + aP0->field_4; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, aP0->field_8 + v22, arg0, (#375 *)a3); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
    LOWORD(v23) = v14 / 256; /*0x4cc2a2*/
    HIWORD(v23) = v15 / 256; /*0x4cc2b5*/
    v29 = v23; /*0x4cc2be*/
    v13 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v29); /*0x4cc2c2*/
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
_DWORD *__fastcall TrajectoryHelper::FindFirstImpenetrableObstacle(IUnknown *aP0, int *a1, int arg0, void *a3)
{
  IUnknown *FirstObstacle; // eax
  IUnknown *v5; // esi

  FirstObstacle = (IUnknown *)TrajectoryHelper::FindFirstObstacle(aP0, a1, *(_DWORD *)(arg0 + 160), a3); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType(FirstObstacle, (AbstractClass *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF)
    && *(_BYTE *)(*(_DWORD *)(arg0 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return &v5->field_0; /*0x4cc353*/
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
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x4cc3b6*/
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
    v14 = v13 != -1 && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v13] + 680); /*0x4cc432*/
    if ( v10 != (_DWORD *)v8 /*0x4cc47c*/
      && v14
      && a1[283] <= v8[283]
      && (!LOBYTE(MEMORY[0x8871E0][1].?[3])
       || (v15 = *(#375 **)&HouseClass_Array->__pad_0[4 * v10[20]]) == 0
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
          v33 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x4cc574*/
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
            v38 = v37 != -1 && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v37] + 680); /*0x4cc5ff*/
            if ( v33 != (_DWORD *)a2 && v38 && v44[283] <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE(MEMORY[0x8871E0][1].?[3]) ) /*0x4cc627*/
                return v42; /*0x4cc627*/
              v39 = *(#375 **)&HouseClass_Array->__pad_0[4 * v33[20]]; /*0x4cc639*/
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
  MEMORY[0x8B3C30] = 0; /*0x4cc752*/
  MEMORY[0x8B3C34] = 0; /*0x4cc757*/
  MEMORY[0x8B3C38] = 0; /*0x4cc75c*/
  MEMORY[0x8B3C3C] = 0; /*0x4cc761*/
  return 0; /*0x4cc766*/
}


// ==== 0x004CC770  TechnoClass::UpdateThunk  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::UpdateThunk(_BYTE *this)
{
  int v1; // eax

  if ( !*(_DWORD *)this ) /*0x4cc770*/
    return 0; /*0x4cc788*/
  v1 = *(_DWORD *)this - 1; /*0x4cc776*/
  this->vtable2 = 0; /*0x4cc777*/
  *(_DWORD *)this = v1; /*0x4cc77d*/
  if ( (v1 & 1) != 0 ) /*0x4cc77f*/
    this->vtable2 = 1; /*0x4cc781*/
  return 1; /*0x4cc787*/
}


// ==== 0x004CC790  sub_4CC790  this=-  sig=ida-proto ====
void sub_4CC790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cc79c*/
  MEMORY[0x8B3C60] = Math::Sqrt(v0 + v0); /*0x4cc7ae*/
}


// ==== 0x004CC7C0  sub_4CC7C0  this=-  sig=ida-proto ====
void sub_4CC7C0()
{
  MEMORY[0x8B3CB0] = MEMORY[0x8B3C60] / 60.0; /*0x4cc7cc*/
}


// ==== 0x004CC7E0  sub_4CC7E0  this=-  sig=ida-proto ====
void sub_4CC7E0()
{
  MEMORY[0x8B3C98] = 1.0 / MEMORY[0x8B3CB0]; /*0x4cc7ec*/
}


// ==== 0x004CC800  sub_4CC800  this=-  sig=ida-proto ====
void sub_4CC800()
{
  MEMORY[0x8B3C90] = 0.0174532925199433 * 45.0; /*0x4cc80c*/
}


// ==== 0x004CC820  sub_4CC820  this=-  sig=ida-proto ====
void sub_4CC820()
{
  MEMORY[0x8B3C68] = 0.0174532925199433 * 60.0; /*0x4cc82c*/
}


// ==== 0x004CC840  sub_4CC840  this=-  sig=ida-proto ====
void sub_4CC840()
{
  MEMORY[0x8B3C40] = 0.0174532925199433 * 90.0; /*0x4cc84c*/
}


// ==== 0x004CC860  sub_4CC860  this=-  sig=ida-proto ====
__int64 sub_4CC860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3C40] - MEMORY[0x8B3C68]); /*0x4cc872*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3C60] * 0.5); /*0x4cc886*/
  MEMORY[0x8B3CB8] = result; /*0x4cc88b*/
  return result; /*0x4cc890*/
}


// ==== 0x004CC8A0  sub_4CC8A0  this=-  sig=ida-proto ====
void sub_4CC8A0()
{
  MEMORY[0x8B3C70] = Math::ArcTan((double)MEMORY[0x8B3CB8] * 0.00390625); /*0x4cc8b7*/
}


// ==== 0x004CC8D0  sub_4CC8D0  this=-  sig=ida-proto ====
void sub_4CC8D0()
{
  MEMORY[0x8B3C88] = Math::ArcTan((double)(2 * MEMORY[0x8B3CB8]) / MEMORY[0x8B3C60]); /*0x4cc8f2*/
}


// ==== 0x004CC900  sub_4CC900  this=-  sig=ida-proto ====
__int64 sub_4CC900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3CB8]) + 0.5); /*0x4cc91b*/
  MEMORY[0x8B3CAC] = result; /*0x4cc920*/
  return result; /*0x4cc926*/
}


// ==== 0x004CC930  sub_4CC930  this=-  sig=ida-proto ====
int sub_4CC930()
{
  MEMORY[0x8B3C58] = 0; /*0x4cc932*/
  return 0; /*0x4cc93e*/
}


// ==== 0x004CC940  sub_4CC940  this=-  sig=ida-proto ====
int sub_4CC940()
{
  MEMORY[0x8B3C78] = 0; /*0x4cc942*/
  MEMORY[0x8B3C7C] = 0; /*0x4cc947*/
  MEMORY[0x8B3C80] = 0; /*0x4cc94c*/
  return 0; /*0x4cc951*/
}


// ==== 0x004CC960  sub_4CC960  this=-  sig=ida-proto ====
int sub_4CC960()
{
  MEMORY[0x8B3CA8] = 0; /*0x4cc965*/
  MEMORY[0x8B3CA0] = 128; /*0x4cc96f*/
  MEMORY[0x8B3CA4] = 128; /*0x4cc974*/
  return 128; /*0x4cc979*/
}


// ==== 0x004CC980  sub_4CC980  this=-  sig=ida-proto ====
int sub_4CC980()
{
  MEMORY[0x8B3C48] = 0; /*0x4cc982*/
  MEMORY[0x8B3C4C] = 0; /*0x4cc987*/
  MEMORY[0x8B3C50] = 0; /*0x4cc98c*/
  MEMORY[0x8B3C54] = 0; /*0x4cc991*/
  return 0; /*0x4cc996*/
}


// ==== 0x004CC9A0  FlyLocomotionClass::LocomotionClass  this=FlyLocomotionClass  sig=csp ====
int __thiscall FlyLocomotionClass::LocomotionClass(int this)
{
  int v2; // edx

  LocomotionClass::Init((_DWORD *)this); /*0x4cc9a3*/
  *(_BYTE *)(this + 24) = 0; /*0x4cc9ad*/
  *(_DWORD *)(this + 28) = MEMORY[0x8B3C78]; /*0x4cc9b6*/
  *(_DWORD *)(this + 32) = MEMORY[0x8B3C7C]; /*0x4cc9be*/
  *(_DWORD *)(this + 36) = MEMORY[0x8B3C80]; /*0x4cc9c7*/
  *(_DWORD *)(this + 40) = MEMORY[0x8B3C78]; /*0x4cc9d3*/
  *(_DWORD *)(this + 44) = MEMORY[0x8B3C7C]; /*0x4cc9dc*/
  v2 = MEMORY[0x8B3C80]; /*0x4cc9df*/
  *(_DWORD *)(this + 64) = 0; /*0x4cc9e5*/
  *(_DWORD *)(this + 72) = 0; /*0x4cc9e8*/
  *(_BYTE *)(this + 52) = 0; /*0x4cc9eb*/
  *(_DWORD *)(this + 56) = 0; /*0x4cc9ee*/
  *(_DWORD *)(this + 68) = 0; /*0x4cc9f1*/
  *(_DWORD *)(this + 76) = 0; /*0x4cc9f4*/
  *(_BYTE *)(this + 80) = 0; /*0x4cc9f7*/
  *(_BYTE *)(this + 81) = 0; /*0x4cc9fa*/
  *(_BYTE *)(this + 82) = 0; /*0x4cc9fd*/
  *(_BYTE *)(this + 83) = 0; /*0x4cca00*/
  *(_DWORD *)(this + 84) = 0; /*0x4cca03*/
  *(_DWORD *)(this + 88) = 0; /*0x4cca06*/
  *(_BYTE *)(this + 92) = 0; /*0x4cca09*/
  *(_DWORD *)this = &FlyLocomotionClass::`vftable'; /*0x4cca0c*/
  *(_DWORD *)(this + 4) = &FlyLocomotionClass::`vftable'; /*0x4cca12*/
  *(_DWORD *)(this + 48) = v2; /*0x4cca1b*/
  return this; /*0x4cca1e*/
}


// ==== 0x004CCA20  JumpjetLocomotionClass::StubReturnZero_7  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass *aP0, _DWORD *a1)
{
  int v2; // esi

  v2 = StreamClass::ResetPosition(aP0, (int)a1); /*0x4cca32*/
  if ( !v2 ) /*0x4cca36*/
  {
    if ( a1 && (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 2 && *(_BYTE *)(a1[433] + 3597) ) /*0x4cca4e*/
    {
      LOBYTE(aP0->RefCount) = 1; /*0x4cca5b*/
      return 0; /*0x4cca61*/
    }
    LOBYTE(aP0->RefCount) = 0; /*0x4cca64*/
  }
  return v2; /*0x4cca5a*/
}


// ==== 0x004CCA70  FlyLocomotionClass::method_4CCA70  this=FlyLocomotionClass  sig=csp ====
void __thiscall sub_4CCA70(_DWORD *this)
{
  *this = &FlyLocomotionClass::`vftable'; /*0x4cca70*/
  this->vtable2 = &vt_FlyLocomotionClass; /*0x4cca76*/
  LocomotionClass::Construct(this); /*0x4cca7d*/
}


// ==== 0x004CCA90  JumpjetLocomotionClass::ComputeFloatExpression  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4CCA90(int a1)
{
  return *(_BYTE *)(a1 + 48) || *(float *)(*(_DWORD *)(a1 + 8) + 744) > 0.0; /*0x4ccab3*/
}


// ==== 0x004CCAC0  FlyLocomotionClass::ComputeFloatExpression_0  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4CCAC0(int a1)
{
  return *(double *)(a1 + 68) != 0.0; /*0x4ccad6*/
}


// ==== 0x004CCAE0  JumpjetLocomotionClass::GetMovementCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4CCAE0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x4ccae9*/
  {
    result = a2; /*0x4ccaf0*/
    v3 = a1[7]; /*0x4ccaf7*/
    v4 = a1[8]; /*0x4ccafa*/
    v5 = a2; /*0x4ccafd*/
    *a2 = a1[6]; /*0x4ccaff*/
  }
  else
  {
    result = a2; /*0x4ccb0c*/
    v3 = MEMORY[0x8B3C7C]; /*0x4ccb16*/
    v4 = MEMORY[0x8B3C80]; /*0x4ccb1c*/
    v5 = a2; /*0x4ccb22*/
    *a2 = MEMORY[0x8B3C78]; /*0x4ccb24*/
  }
  v5[1] = v3; /*0x4ccb01*/
  v5[2] = v4; /*0x4ccb04*/
  return result; /*0x4ccb07*/
}


// ==== 0x004CCB40  FlyLocomotionClass::ProcessLocomotionStep  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4CCB40(int a1)
{
  int v1; // eax
  int *v2; // ecx
  char result; // al
  int v4; // ecx

  if ( !*(_BYTE *)(a1 + 77) && !*(_BYTE *)(a1 + 76) && *(double *)(a1 + 60) >= 1.0 && !*(_DWORD *)(a1 + 52) ) /*0x4ccb65*/
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)); /*0x4ccb71*/
    *(_DWORD *)(a1 + 52) = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 188))(v1); /*0x4ccb81*/
  }
  v2 = *(int **)(a1 + 8); /*0x4ccb84*/
  if ( v2[27] > 0 /*0x4ccb9e*/
    && !*(_BYTE *)(a1 + 77)
    && !*(_BYTE *)(a1 + 76)
    && (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 512))(v2) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 492))(*(_DWORD *)(a1 + 8)); /*0x4ccbad*/
  }
  JumpjetLocomotionClass::ProcessRotation(a1 - 4); /*0x4ccbb8*/
  DamageArea::ApplyScatter(a1 - 4); /*0x4ccbbf*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x4ccbc7*/
  if ( result ) /*0x4ccbcc*/
  {
    v4 = *(_DWORD *)(a1 + 8); /*0x4ccbd4*/
    if ( *(_BYTE *)(v4 + 144) ) /*0x4ccbd7*/
    {
      if ( *(int *)(v4 + 108) > 0 /*0x4ccc2d*/
        && (*(_DWORD *)(a1 + 24) != MEMORY[0x8B3C78]
         || *(_DWORD *)(a1 + 28) != MEMORY[0x8B3C7C]
         || *(_DWORD *)(a1 + 32) != MEMORY[0x8B3C80])
        && !*(_BYTE *)(a1 + 77)
        && !*(_BYTE *)(a1 + 76)
        && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 456))(v4) > 0 )
      {
        LandFootClassAtPosition( /*0x4ccc49*/
          a1 - 4,
          *(_DWORD *)(a1 + 32),
          1,
          *(float *)(a1 + 24),
          *(_DWORD *)(a1 + 28),
          *(_DWORD *)(a1 + 32));
      }
      if ( *(int *)(*(_DWORD *)(a1 + 8) + 108) > 0 ) /*0x4ccc56*/
        FootClass::ProcessDeployMission(a1 - 4); /*0x4ccc5a*/
      JumpjetLocomotionClass::IsMapCoordVisible((_DWORD *)(a1 - 4)); /*0x4ccc61*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4ccc69*/
    }
    else
    {
      return 0; /*0x4ccbe1*/
    }
  }
  return result; /*0x4ccbce*/
}


// ==== 0x004CCC80  FlyLocomotionClass::UpdateFootLocomotion  this=FlyLocomotionClass  sig=csp ====
char __stdcall UpdateFootLocomotion(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v15; // esi
  int GroundHeightCell; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // esi
  char v20; // al
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  _DWORD v25[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a1; /*0x4ccc84*/
  v5 = a2; /*0x4ccc89*/
  if ( (unsigned __int16)(a2 / 256) != (unsigned __int16)(*(_DWORD *)(a1 + 24) / 256) /*0x4ccce0*/
    || (unsigned __int16)(a3 / 256) != (unsigned __int16)(*(_DWORD *)(a1 + 28) / 256)
    || (LOBYTE(v6) = *(_BYTE *)(a1 + 77), !(_BYTE)v6) )
  {
    v7 = (_DWORD *)(a1 + 8); /*0x4ccce9*/
    LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x4cccee*/
    if ( !(_BYTE)v6 ) /*0x4cccf6*/
    {
      LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 896))(*v7); /*0x4ccd00*/
      if ( !(_BYTE)v6 ) /*0x4ccd08*/
      {
        LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 468))(*v7); /*0x4ccd12*/
        if ( !(_BYTE)v6 ) /*0x4ccd1a*/
        {
          LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 472))(*v7); /*0x4ccd24*/
          if ( !(_BYTE)v6 ) /*0x4ccd2c*/
          {
            LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 96))(v4); /*0x4ccd35*/
            if ( (_BYTE)v6 ) /*0x4ccd3a*/
            {
              v8 = a3; /*0x4ccd45*/
              v9 = a4; /*0x4ccd4b*/
              if ( v5 == MEMORY[0x8B3C78] && a3 == MEMORY[0x8B3C7C] && a4 == MEMORY[0x8B3C80] ) /*0x4ccd67*/
              {
                v10 = 0; /*0x4ccd6f*/
                v11 = *v7 == 0; /*0x4ccd71*/
                a1 = 0; /*0x4ccd73*/
                if ( !v11 ) /*0x4ccd77*/
                {
                  v12 = ComPtr::ReleaseAndSet(&a1, (_DWORD *)(v4 + 8)); /*0x4ccd7e*/
                  if ( v12 < 0 && v12 != -2147467262 ) /*0x4ccd8c*/
                    WinAPI::Wrapper(v12); /*0x4ccd8f*/
                  if ( a1 ) /*0x4ccd9a*/
                    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 12))(a1); /*0x4ccda2*/
                }
                if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 456))(*v7) <= v10 && !*(_BYTE *)(v4 + 76) /*0x4ccdb9*/
                  || *(_BYTE *)(v4 + 77) )
                {
                  *(_DWORD *)(v4 + 24) = MEMORY[0x8B3C78]; /*0x4ccde8*/
                  *(_DWORD *)(v4 + 28) = MEMORY[0x8B3C7C]; /*0x4ccdf1*/
                  *(_DWORD *)(v4 + 32) = MEMORY[0x8B3C80]; /*0x4ccdf9*/
                }
                else
                {
                  v13 = (_DWORD *)(*v7 + 156); /*0x4ccdc2*/
                  *(_DWORD *)(v4 + 24) = *v13; /*0x4ccdc9*/
                  *(_DWORD *)(v4 + 28) = v13[1]; /*0x4ccdd2*/
                  *(_DWORD *)(v4 + 32) = v13[2]; /*0x4ccdd8*/
                  LocomotionClass::CheckBridgeBlock(v4 - 4); /*0x4ccddb*/
                }
                v6 = a1; /*0x4ccdfc*/
                *(_BYTE *)(v4 + 88) = 0; /*0x4cce00*/
                if ( v6 ) /*0x4cce06*/
                  LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4cce0f*/
              }
              else
              {
                *(_DWORD *)(v4 + 24) = v5; /*0x4cce1c*/
                *(_DWORD *)(v4 + 28) = v8; /*0x4cce1f*/
                *(_DWORD *)(v4 + 32) = v9; /*0x4cce22*/
                v14 = (_DWORD *)*v7; /*0x4cce25*/
                if ( *(_DWORD *)(*v7 + 692) && v14[191] ) /*0x4cce31*/
                {
                  v25[0] = v5; /*0x4cce3b*/
                  v25[1] = v8; /*0x4cce3f*/
                  v25[2] = v9; /*0x4cce43*/
                  v15 = (*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14); /*0x4cce4f*/
                  GroundHeightCell = Cell::GetGroundHeight(v25); /*0x4cce64*/
                  *(_DWORD *)(v4 + 32) = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 188))(v15) + GroundHeightCell; /*0x4cce6e*/
                }
                v17 = 0; /*0x4cce73*/
                v11 = *v7 == 0; /*0x4cce75*/
                a2 = 0; /*0x4cce77*/
                if ( !v11 ) /*0x4cce7b*/
                {
                  v18 = ComPtr::ReleaseAndSet(&a2, (_DWORD *)(v4 + 8)); /*0x4cce82*/
                  if ( v18 < 0 && v18 != -2147467262 ) /*0x4cce90*/
                    WinAPI::Wrapper(v18); /*0x4cce93*/
                  v17 = a2; /*0x4cce98*/
                }
                v19 = 0; /*0x4cce9c*/
                if ( v17 ) /*0x4ccea0*/
                  v19 = (*(int (__stdcall **)(int))(*(_DWORD *)v17 + 12))(v17); /*0x4ccea8*/
                *(_BYTE *)(v4 + 48) = 1; /*0x4cceaa*/
                if ( *(int *)(*v7 + 108) > 0 /*0x4ccecf*/
                  && !*(_BYTE *)(v4 + 76)
                  && (*(_BYTE *)(v4 + 77) || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 456))(*v7) <= v19) )
                {
                  TechnoClass::GetData(v4 - 4); /*0x4cced4*/
                }
                if ( *(_DWORD *)(v4 + 32) <= Cell::GetGroundHeight((_DWORD *)(v4 + 24)) + 120 ) /*0x4cceef*/
                {
                  v21 = *(_DWORD *)(v4 + 8); /*0x4ccef8*/
                  if ( *(_DWORD *)(v21 + 692) && *(_DWORD *)(v21 + 764) ) /*0x4ccf08*/
                  {
                    v20 = 1; /*0x4ccf12*/
                  }
                  else
                  {
                    v22 = *(_DWORD *)(v4 + 8); /*0x4ccf16*/
                    a1 = 0; /*0x4ccf18*/
                    if ( v22 ) /*0x4ccf22*/
                    {
                      v23 = ComPtr::ReleaseAndSet(&a1, (_DWORD *)(v4 + 8)); /*0x4ccf29*/
                      if ( v23 < 0 && v23 != -2147467262 ) /*0x4ccf37*/
                        WinAPI::Wrapper(v23); /*0x4ccf3a*/
                    }
                    if ( (unsigned __int8)JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(0) ) /*0x4ccf45*/
                      goto LABEL_54; /*0x4ccf45*/
                    if ( !a1 ) /*0x4ccf54*/
                      WinAPI::Wrapper(-2147467261); /*0x4ccf5b*/
                    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)a1 + 32))(a1) ) /*0x4ccf67*/
                    {
LABEL_54:
                      Release3COM(&a1); /*0x4ccf7f*/
                      v20 = 0; /*0x4ccf84*/
                    }
                    else
                    {
                      Release3COM(&a1); /*0x4ccf72*/
                      v20 = 1; /*0x4ccf77*/
                    }
                  }
                }
                else
                {
                  v20 = 1; /*0x4ccef1*/
                }
                *(_BYTE *)(v4 + 88) = v20; /*0x4ccf86*/
                if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 44))(*v7) == 2 /*0x4ccf9d*/
                  && !*(_BYTE *)(*(_DWORD *)(*v7 + 1732) + 3594) )
                {
                  *(_BYTE *)(v4 + 88) = 1; /*0x4ccfa7*/
                }
                LOBYTE(v6) = a2; /*0x4ccfab*/
                if ( a2 ) /*0x4ccfb1*/
                  LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4ccfb6*/
              }
            }
          }
        }
      }
    }
  }
  return v6; /*0x4cce12*/
}


// ==== 0x004CCFD0  FlyLocomotionClass::ComputeMoveToPosition  this=FlyLocomotionClass  sig=csp ====
char __stdcall ComputeMoveToPosition(int a1)
{
  int v1; // esi
  char result; // al
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int *v6; // edi
  void *ClosestPlacementCellTechnoClass; // eax
  void *v8; // eax
  int v9; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // edi
  void *v13; // eax
  int *v14; // ecx
  _DWORD *v15; // esi
  int v16; // [esp+8h] [ebp-18h] BYREF
  int v17; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeightCell; // [esp+1Ch] [ebp-4h]

  v1 = a1; /*0x4ccfd4*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4ccfdc*/
  if ( result ) /*0x4ccfe1*/
  {
    v3 = *(_DWORD *)(v1 + 8); /*0x4ccfe7*/
    v4 = *(_DWORD *)(v3 + 156); /*0x4ccff0*/
    v5 = *(_DWORD *)(v3 + 160); /*0x4ccff6*/
    GroundHeightCell = *(_DWORD *)(v3 + 164); /*0x4ccffc*/
    LOWORD(a1) = v4 / 256; /*0x4cd00c*/
    HIWORD(a1) = v5 / 256; /*0x4cd01f*/
    if ( !*(_BYTE *)(v3 + 980) /*0x4cd050*/
      && !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a1, 1)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 1244))(*(_DWORD *)(v1 + 8)) )
    {
      a1 = *(_DWORD *)JumpjetLocomotionClass::ClampToCellBounds(&v17, &a1, 1); /*0x4cd072*/
    }
    v6 = *(int **)(v1 + 8); /*0x4cd076*/
    if ( v6 && (*(int (__thiscall **)(_DWORD))(*v6 + 44))(*(_DWORD *)(v1 + 8)) == 2 ) /*0x4cd08b*/
    {
      if ( a1 == MEMORY[0x8B3C58] ) /*0x4cd09d*/
      {
        (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int, int, _DWORD))(**(_DWORD **)(v1 + 8) + 364))( /*0x4cd0cd*/
          *(_DWORD *)(v1 + 8) + 108,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          1,
          1,
          0);
LABEL_21:
        result = MEMORY[0x8B3C78]; /*0x4cd273*/
        v15 = (_DWORD *)(v1 + 24); /*0x4cd278*/
        *v15 = MEMORY[0x8B3C78]; /*0x4cd27b*/
        v15[1] = MEMORY[0x8B3C7C]; /*0x4cd283*/
        v15[2] = MEMORY[0x8B3C80]; /*0x4cd28c*/
        return result; /*0x4cd28c*/
      }
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 1 ) /*0x4cd0e6*/
      {
        ClosestPlacementCellTechnoClass = TechnoClass::FindClosestPlacementCell(v6); /*0x4cd0ea*/
      }
      else
      {
        v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x4cd10f*/
        ClosestPlacementCellTechnoClass = InfantryClass::FindNearbyCell(v6, (int)v8); /*0x4cd117*/
      }
      return (*(int (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(v1 + 8) + 1152))( /*0x4cd0f7*/
               *(_DWORD *)(v1 + 8),
               ClosestPlacementCellTechnoClass,
               1);
    }
    else
    {
      v16 = 0; /*0x4cd161*/
      v9 = *LayerClass::Pathfinding_Find( /*0x4cd174*/
              &MEMORY[0x87F7E8],
              (int)&v16,
              &v18,
              (__int16 *)&a1,
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
      v17 = v9; /*0x4cd17d*/
      if ( v9 == MEMORY[0x8B3C58] ) /*0x4cd186*/
      {
        v14 = *(int **)(v1 + 8); /*0x4cd246*/
        result = (_BYTE)v14 + 108; /*0x4cd24c*/
        if ( v14[27] <= 0 ) /*0x4cd251*/
          return result; /*0x4cd251*/
        (*(void (__stdcall **)(int *, _DWORD, int, _DWORD, int, int, _DWORD))(*v14 + 364))( /*0x4cd26d*/
          v14 + 27,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          1,
          1,
          0);
        goto LABEL_21; /*0x4cd26d*/
      }
      GroundHeightCell = 0; /*0x4cd1a9*/
      v19[1] = (SHIWORD(v9) << 8) + 128; /*0x4cd1b6*/
      v19[0] = ((__int16)v9 << 8) + 128; /*0x4cd1c0*/
      GroundHeightCell = Cell::GetGroundHeight(v19); /*0x4cd1ce*/
      if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 80) & 0x100) != 0 ) /*0x4cd1e5*/
        GroundHeightCell += MEMORY[0x8B3CAC]; /*0x4cd1f3*/
      v10 = **(_DWORD **)(v1 + 8); /*0x4cd201*/
      v11 = Coord::To_Cell(&MEMORY[0x87F7E8], v19); /*0x4cd208*/
      (*(void (__thiscall **)(_DWORD, void *, int))(v10 + 1152))(*(_DWORD *)(v1 + 8), v11, 1); /*0x4cd211*/
      result = *(_BYTE *)(v1 + 77); /*0x4cd217*/
      if ( !result ) /*0x4cd21c*/
      {
        v12 = **(_DWORD **)(v1 + 8); /*0x4cd228*/
        v13 = Coord::To_Cell(&MEMORY[0x87F7E8], v19); /*0x4cd22f*/
        return (*(int (__thiscall **)(_DWORD, void *, int))(v12 + 1152))(*(_DWORD *)(v1 + 8), v13, 1); /*0x4cd238*/
      }
    }
  }
  return result; /*0x4cd0fd*/
}


// ==== 0x004CD2A0  FootClass::ProcessDeployMission  this=FootClass  sig=csp ====
char __thiscall FootClass::ProcessDeployMission(int this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  int v4; // eax
  int *v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // eax
  int *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // edi
  int v20; // [esp+34h] [ebp-Ch] BYREF
  int v21; // [esp+38h] [ebp-8h]
  int v22; // [esp+3Ch] [ebp-4h]

  v2 = *(_DWORD **)(this + 12); /*0x4cd2a7*/
  if ( v2 && (*(int (__thiscall **)(_DWORD))(*v2 + 44))(*(_DWORD *)(this + 12)) == 2 && !*(_BYTE *)(v2[433] + 3594) ) /*0x4cd2c0*/
  {
    v3 = *(_DWORD *)(this + 12); /*0x4cd2ca*/
    *(_BYTE *)(this + 92) = 1; /*0x4cd2cd*/
    *(_BYTE *)(this + 81) = 0; /*0x4cd2d1*/
    *(_BYTE *)(this + 80) = 0; /*0x4cd2d5*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3); /*0x4cd2db*/
    *(_DWORD *)(this + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cd2eb*/
    return 0; /*0x4cd2ef*/
  }
  else
  {
    v6 = *(int **)(this + 12); /*0x4cd2f6*/
    if ( v6[27] > 0 && (*(_BYTE *)(this + 81) || *(_BYTE *)(this + 80)) ) /*0x4cd30b*/
    {
      v7 = (*(int (__thiscall **)(int *))(*v6 + 120))(v6); /*0x4cd320*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x4cd324*/
      RemoveTarget(*(_DWORD *)(this + 12)); /*0x4cd333*/
      if ( *(_BYTE *)(this + 81) ) /*0x4cd338*/
        DropPod::ProcessLanding(this); /*0x4cd341*/
      if ( *(_BYTE *)(this + 80) ) /*0x4cd346*/
        FootClass::UpdateDeployMovement(this); /*0x4cd34f*/
      if ( v7 != (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 120))(*(_DWORD *)(this + 12)) ) /*0x4cd35e*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 120))(*(_DWORD *)(this + 12)) != 2 /*0x4cd3b6*/
          || *(_BYTE *)(this + 80)
          || (v8 = *(int **)(this + 12),
              v20 = v8[39],
              v21 = v8[40],
              v22 = v8[41],
              v9 = *v8,
              v10 = Coord::To_Cell(&MEMORY[0x87F7E8], &v20),
              (*(unsigned __int8 (__thiscall **)(_DWORD, void *))(v9 + 1360))(*(_DWORD *)(this + 12), v10)) )
        {
          v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 120))(*(_DWORD *)(this + 12)); /*0x4cd40a*/
          v16 = *(_DWORD *)(this + 12); /*0x4cd40d*/
          if ( v15 == 2 ) /*0x4cd413*/
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v16 + 1152))(v16, 0, 1); /*0x4cd41f*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 628))(*(_DWORD *)(this + 12), 24); /*0x4cd42c*/
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1164))( /*0x4cd43f*/
              *(_DWORD *)(this + 12),
              0,
              0,
              0,
              0);
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1160))( /*0x4cd454*/
              *(_DWORD *)(this + 12),
              0,
              0,
              0,
              0,
              0);
            v17 = *(_DWORD **)(this + 12); /*0x4cd45a*/
            v20 = v17[39]; /*0x4cd46b*/
            v21 = v17[40]; /*0x4cd472*/
            v22 = v17[41]; /*0x4cd479*/
            MapClass::RevealArea2(&v20, v17[152] - 3, v17[152] + 3, 0); /*0x4cd495*/
          }
          else
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 628))(v16, 25); /*0x4cd4a0*/
            if ( Team::AllMembersValid(*(int **)(this + 12)) ) /*0x4cd4a9*/
            {
              v18 = *(_DWORD **)(this + 12); /*0x4cd4b2*/
              if ( v18[361] ) /*0x4cd4b5*/
              {
                v19 = *(_DWORD **)(this + 12); /*0x4cd4bf*/
                if ( v19[361] != Team::GetMember(v18, 0) ) /*0x4cd4d0*/
                  (*(void (__thiscall **)(_DWORD *, int))(*v19 + 628))(v19, 3); /*0x4cd4d8*/
              }
            }
          }
        }
        else
        {
          v11 = *(_DWORD *)(this + 12); /*0x4cd3c0*/
          *(_BYTE *)(this + 80) = 1; /*0x4cd3c3*/
          *(_BYTE *)(v11 + 140) = 0; /*0x4cd3c9*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x4cd3d5*/
          v12 = *(int **)(this + 12); /*0x4cd3db*/
          v13 = *v12; /*0x4cd3de*/
          v14 = (*(int (__thiscall **)(int *))(*v12 + 456))(v12); /*0x4cd3e0*/
          (*(void (__thiscall **)(_DWORD, int))(v13 + 460))(*(_DWORD *)(this + 12), v14 + 10); /*0x4cd3ed*/
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x4cd3fa*/
        }
      }
      Targeting::Readd(*(_DWORD **)(this + 12)); /*0x4cd4e7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x4cd4f3*/
    }
    return 0; /*0x4cd4fa*/
  }
}


// ==== 0x004CD510  JumpjetLocomotionClass::IsMapCoordVisible  this=FootClass  sig=csp ====
char __thiscall sub_4CD510(_DWORD *this)
{
  _DWORD *v2; // eax
  bool v3; // al
  _BYTE *v4; // ecx
  int i; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD v10[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(this->vtable4 + 156); /*0x4cd519*/
  v10[0] = *v2; /*0x4cd520*/
  v10[1] = v2[1]; /*0x4cd52c*/
  v10[2] = v2[2]; /*0x4cd538*/
  v3 = IsCoordVisibleMap(&MEMORY[0x87F7E8], v10); /*0x4cd53c*/
  v4 = (_BYTE *)this->vtable4; /*0x4cd541*/
  if ( v3 ) /*0x4cd546*/
  {
    v4[981] = 1; /*0x4cd5f0*/
    return 0; /*0x4cd5f0*/
  }
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 388))(v4) != 4 ) /*0x4cd557*/
    return 0; /*0x4cd5f7*/
  for ( i = this->vtable4; *(_DWORD *)(i + 280); i = this->vtable4 ) /*0x4cd566*/
  {
    v6 = (_DWORD *)LinkedList::Pop((_DWORD *)(i + 276)); /*0x4cd57c*/
    if ( sub_413CD0((int)v6) ) /*0x4cd580*/
      *(_BYTE *)(v6[135] + 505) = 1; /*0x4cd58f*/
    v7 = v6[373]; /*0x4cd595*/
    if ( v7 ) /*0x4cd59d*/
      *(_BYTE *)(v7 + 130) = 1; /*0x4cd59f*/
    if ( v6 ) /*0x4cd5a7*/
      (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x4cd5ae*/
  }
  v8 = *(_DWORD *)(this->vtable4 + 1492); /*0x4cd5c2*/
  if ( v8 ) /*0x4cd5ca*/
    *(_BYTE *)(v8 + 130) = 1; /*0x4cd5cc*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 928))(this->vtable4); /*0x4cd5d7*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 248))(this->vtable4); /*0x4cd5e2*/
  return 1; /*0x4cd5eb*/
}


// ==== 0x004CD600  DamageArea::ApplyScatter  this=DamageArea  sig=csp ====
int __thiscall DamageArea_ApplyScatter(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int *v10; // ecx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int result; // eax
  void **v17; // esi
  int v18; // ebx
  void *VersusMultiplier; // eax
  int *v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // edi
  unsigned int v27; // ebx
  unsigned int v28; // ebp
  double v29; // st7
  double v30; // st7
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
  double v46; // st7
  int v47; // eax
  bool v48; // bl
  int v49; // ebp
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ebx
  int v54; // ebx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // edi
  int *v62; // ecx
  int v63; // ecx
  int v64; // kr44_4
  _DWORD *v65; // eax
  int v66; // edi
  double v67; // st7
  unsigned int v68; // ebp
  unsigned int v69; // ebx
  double v70; // st7
  double v71; // st7
  int v72; // ecx
  int *v73; // ecx
  int (__stdcall ***v74)(_DWORD, void *, double *); // eax
  int v75; // edi
  int v76; // eax
  double v77; // st7
  double v78; // st6
  double v79; // st6
  int *v80; // edi
  int v81; // edx
  double v82; // st7
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  double v86; // st7
  int v87; // eax
  int *v88; // ecx
  int v89; // edi
  int v90; // ebx
  _WORD *v91; // eax
  int v92; // eax
  int *v93; // ecx
  double v95; // st7
  char v96; // c0
  double v97; // st7
  __int64 v98; // [esp+30h] [ebp-70h]
  char v99; // [esp+4Bh] [ebp-55h]
  int v100; // [esp+4Ch] [ebp-54h]
  double v101; // [esp+50h] [ebp-50h] BYREF
  double v102; // [esp+58h] [ebp-48h] BYREF
  int v103; // [esp+64h] [ebp-3Ch] BYREF
  double v104; // [esp+68h] [ebp-38h] BYREF
  int v105; // [esp+70h] [ebp-30h]
  double v106; // [esp+78h] [ebp-28h] BYREF
  int v107; // [esp+80h] [ebp-20h]
  double v108; // [esp+88h] [ebp-18h] BYREF
  unsigned int v109; // [esp+90h] [ebp-10h]
  int v110; // [esp+94h] [ebp-Ch] BYREF
  int v111; // [esp+98h] [ebp-8h]
  int v112; // [esp+9Ch] [ebp-4h]

  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                    *(_DWORD *)(this + 12),
                    &v106);
  v3 = (_DWORD *)(*(_DWORD *)(this + 12) + 1376);
  v103 = v2;
  if ( v2 != *v3 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(this + 4) + 128))(this + 4) )
    Coord::ToGridIndex((char *)MEMORY[0x887888], *(_DWORD *)(this + 12), *(_DWORD *)(*(_DWORD *)(this + 12) + 1376), v2);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 7
    && *(_BYTE *)(this + 92) )
  {
    *(_BYTE *)(this + 92) = 0;
  }
  v4 = this + 4;
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(this + 4) + 96))(this + 4)
    && *(_DWORD *)(*(_DWORD *)(this + 12) + 108)
    || !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) )
  {
    v20 = *(int **)(this + 12);
    if ( v20[27] > 0 )
    {
      if ( v20[361] )
      {
        if ( (*(int (__thiscall **)(int *))(*v20 + 388))(v20) == 5 )
        {
          v21 = *(_DWORD **)(this + 12);
          if ( v21[45] == -1 && !*(_BYTE *)(this + 24) )
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v21 + 488))(v21, 2, 0);
        }
      }
    }
LABEL_34:
    result = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 16))(this + 4);
    if ( !(_BYTE)result )
      return result;
    v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12));
    v23 = *(_DWORD *)(this + 12);
    v103 = v22;
    v99 = *(_BYTE *)(v22 + 3221);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 292))(v23, 0);
    v24 = *(_DWORD *)(this + 12);
    v108 = *(double *)(v24 + 156);
    v109 = *(_DWORD *)(v24 + 164);
    v25 = *ProgressTimer::GetValue((_WORD *)(v24 + 904), &v106);
    LODWORD(v101) = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 132))(this + 4);
    if ( SLODWORD(v101) > 0 )
    {
      v26 = v109;
      v104 = (double)((__int16)v25 - 0x3FFF) * -0.00009587672516830327;
      v27 = HIDWORD(v104);
      v28 = LODWORD(v104);
      v102 = (double)SHIDWORD(v108);
      v101 = (double)SLODWORD(v101);
      v29 = Math::SinCos(v104);
      LODWORD(v102) = Math::RoundToInt(v102 - v29 * v101);
      v30 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v27, v28)));
      v31 = Math::RoundToInt(v30 * v101 + (double)SLODWORD(v108));
      Coord::Subtract(&v104, v31, SLODWORD(v102), v26);
      v109 = v105;
      v108 = v104;
      LODWORD(v102) = *(_DWORD *)CellStruct::Set(&v104, SLODWORD(v104) / 256, SHIDWORD(v104) / 256);
      LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102);
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1244))(*(_DWORD *)(this + 12)) )
    {
      goto LABEL_50;
    }
    v32 = *(_DWORD *)(this + 12);
    if ( v32 && (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 44))(v32) == 2 )
    {
      v33 = *(_DWORD *)(this + 12);
      v34 = v33 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 44))(*(_DWORD *)(this + 12)) == 2 ? v33 : 0) : 0;
      if ( *(_BYTE *)(*(_DWORD *)(v34 + 1732) + 3595) )
        goto LABEL_50;
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    LODWORD(v101) = LODWORD(v102);
    v35 = (__int16)*(_DWORD *)DamageArea::CalcScatterOffset(&v106, &v101) >= MEMORY[0x87F914] / 2
        ? LODWORD(v108) - 128
        : LODWORD(v108) + 128;
    LODWORD(v108) = v35;
    LOWORD(v102) = v35 / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || (v36 = RandomCoordScatter(&v110, (int *)&v108, 64, 0),
          v108 = *(double *)v36,
          v109 = v36[2],
          LOWORD(v102) = SLODWORD(v108) / 256,
          WORD1(v102) = SHIDWORD(v108) / 256,
          LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)) )
    {
LABEL_50:
      (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v108);
    }
    v37 = *(_DWORD *)(this + 12);
    LODWORD(v101) = 0;
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 456))(v37);
    v39 = *(_DWORD *)(this + 12);
    if ( !*(_BYTE *)(v39 + 140) && v38 >= MEMORY[0x8B3CAC] )
    {
      v40 = v39 + 156;
      v106 = *(double *)v40;
      v107 = *(_DWORD *)(v40 + 8);
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v106) + 80) & 0x100) != 0 )
      {
        v38 -= MEMORY[0x8B3CAC];
        LODWORD(v101) = MEMORY[0x8B3CAC];
      }
    }
    v41 = *(_DWORD *)(this + 28);
    v42 = *(_DWORD *)(this + 32);
    v112 = *(_DWORD *)(this + 36);
    v43 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
    v44 = *(_DWORD *)(*(_DWORD *)(this + 12) + 160);
    LODWORD(v106) = v41 - *v43;
    v45 = v43[2];
    HIDWORD(v106) = v42 - v44;
    v112 = v45;
    v46 = Math::Sqrt((double)(v42 - v44) * (double)(v42 - v44) + (double)SLODWORD(v106) * (double)SLODWORD(v106));
    LODWORD(v102) = Math::RoundToInt(v46);
    if ( v38 >= *(_DWORD *)(this + 56) || (v47 = *(_DWORD *)(this + 12), *(int *)(v47 + 108) <= 0) )
    {
      v54 = LODWORD(v101);
    }
    else
    {
      v48 = 0;
      v100 = 0;
      if ( v47 )
      {
        v49 = (**(int (__stdcall ***)(int, void *, double *))v47)(v47, &unk_822410, &v104);
        if ( v49 >= 0 )
        {
          LODWORD(v106) = LODWORD(v104);
          v50 = LODWORD(v104);
        }
        else
        {
          v50 = 0;
        }
        v100 = v50;
        if ( v49 < 0 && v49 != -2147467262 )
          WinAPI::Wrapper(v49);
        if ( v50 )
          v48 = (*(int (__stdcall **)(int))(*(_DWORD *)v50 + 20))(v50) != 0;
      }
      v51 = *(_DWORD *)(this + 56);
      if ( v99 )
      {
        v52 = v51 - v38;
        if ( v52 > 16 )
          v52 = 16;
      }
      else
      {
        v52 = v51 - v38;
        v53 = v48 ? 10 : 20;
        if ( v53 < v52 )
          v52 = v53;
      }
      v54 = LODWORD(v101);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(
        *(_DWORD *)(this + 12),
        LODWORD(v101) + v38 + v52);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
      if ( v100 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v100 + 8))(v100);
    }
    v55 = *(_DWORD *)(this + 56);
    if ( v38 <= v55 && *(_DWORD *)(*(_DWORD *)(this + 12) + 108) )
    {
LABEL_114:
      v73 = *(int **)(this + 12);
      if ( v73[27] > 0
        && !*(_BYTE *)(this + 81)
        && (!*(_BYTE *)(this + 80) || (*(int (__thiscall **)(int *))(*v73 + 456))(v73) >= *(_DWORD *)(this + 56) / 2)
        && (*(_DWORD *)(this + 28) != MEMORY[0x8B3C78]
         || *(_DWORD *)(this + 32) != MEMORY[0x8B3C7C]
         || *(_DWORD *)(this + 36) != MEMORY[0x8B3C80]) )
      {
        v74 = *(int (__stdcall ****)(_DWORD, void *, double *))(this + 12);
        v75 = 0;
        if ( v74 )
        {
          v76 = (**v74)(v74, &unk_822410, &v106);
          v75 = v76 < 0 ? 0 : LODWORD(v106);
          if ( v76 < 0 && v76 != -2147467262 )
            WinAPI::Wrapper(v76);
        }
        if ( (unsigned __int8)DamageArea::CheckOccupancyEligibility(this) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3367) )
          {
            if ( *(_BYTE *)(this + 80) || !*(_DWORD *)(*(_DWORD *)(this + 12) + 692) )
            {
              *(_DWORD *)(this + 64) = 0;
              *(_DWORD *)(this + 68) = 0;
            }
            else
            {
              *(_DWORD *)(this + 64) = 0;
              *(_DWORD *)(this + 68) = 1072693248;
            }
          }
          else
          {
            v77 = (double)SLODWORD(v102);
            v78 = v77 / (double)*(int *)(v103 + 760);
            if ( v78 > 1.0 )
              v78 = 1.0;
            *(double *)(this + 64) = v78;
            if ( v78 < 0.1 )
            {
              if ( SLODWORD(v102) <= 85 )
              {
                v79 = *(double *)(this + 72) * 0.5;
                *(_DWORD *)(this + 64) = 0;
                *(_DWORD *)(this + 68) = 0;
                *(double *)(this + 72) = v79;
              }
              else
              {
                *(_DWORD *)(this + 64) = -1717986918;
                *(_DWORD *)(this + 68) = 1069128089;
              }
            }
            if ( v77 < *(double *)(this + 72) )
              *(double *)(this + 72) = v77;
            if ( *(double *)(this + 64) == 0.0 && *(double *)(this + 72) == 0.0 && SLODWORD(v102) > 0 )
            {
              *(_DWORD *)(this + 72) = -1717986918;
              *(_DWORD *)(this + 76) = 1068079513;
            }
          }
        }
        else
        {
          *(_DWORD *)(this + 64) = 0;
          *(_DWORD *)(this + 68) = 1072693248;
        }
        if ( v75 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v75 + 8))(v75);
      }
      if ( v99 )
      {
        if ( *(int *)(*(_DWORD *)(this + 12) + 108) > 0 && *(double *)(this + 72) > 0.0 && !*(_BYTE *)(this + 80) )
        {
          LODWORD(v106) = *(_DWORD *)(v103 + 760);
          if ( SLODWORD(v102) < SLODWORD(v106) )
          {
            v80 = *(int **)(this + 12);
            v81 = *v80;
            v106 = 1.0 - ((double)SLODWORD(v102) - (double)SLODWORD(v106) * 0.6) / ((double)SLODWORD(v106) * 0.4);
            v82 = *(double *)((*(int (__thiscall **)(int *))(v81 + 132))(v80) + 944);
            v83 = *v80;
            v104 = v82;
            v84 = (*(int (__thiscall **)(int *))(v83 + 132))(v80);
            v85 = *(_DWORD *)(this + 12);
            if ( v106 * *(double *)(v84 + 944) <= v104 )
            {
              v87 = (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 132))(v85);
              v86 = v106 * *(double *)(v87 + 944);
            }
            else
            {
              v86 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v85 + 132))(v85) + 944);
            }
            *(float *)(*(_DWORD *)(this + 12) + 744) = v86;
          }
        }
      }
      if ( !*(_BYTE *)(this + 92) )
      {
        v88 = *(int **)(this + 12);
        if ( v88[27] > 0 && !*(_BYTE *)(this + 81) && !*(_BYTE *)(this + 80) )
        {
          v89 = *(_DWORD *)(this + 28) / 256;
          v90 = *(_DWORD *)(this + 32) / 256;
          v91 = (_WORD *)(*(int (__thiscall **)(int *, double *))(*v88 + 440))(v88, &v106);
          if ( (_WORD)v89 == *v91 && (_WORD)v90 == v91[1] && *(double *)(this + 64) == 0.0 )
          {
            v92 = *(_DWORD *)(this + 12);
            if ( !*(_DWORD *)(v92 + 692) || !*(_DWORD *)(v92 + 764) )
              LocomotionClass::CheckBridgeBlock(this);
          }
        }
      }
      v93 = *(int **)(this + 12);
      if ( v93[27] <= 0 )
        return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
      v95 = *(double *)(this + 72);
      if ( v96 )
      {
        v97 = v95 + 0.1;
        if ( v97 >= *(double *)(this + 64) )
LABEL_171:
          v97 = *(double *)(this + 64);
      }
      else
      {
        if ( v95 <= *(double *)(this + 64) )
          return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
        v97 = *(double *)(this + 72) - 0.1;
        if ( v97 <= *(double *)(this + 64) )
          goto LABEL_171;
      }
      *(double *)(this + 72) = v97;
      return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
    }
    v56 = v38 - v55;
    if ( v99 )
    {
      if ( !*(_BYTE *)(this + 81) )
      {
        v59 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12));
        if ( *(_DWORD *)(this + 56) == (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 188))(v59) )
        {
          if ( v38 > 16 )
          {
            v56 = 16;
            goto LABEL_97;
          }
        }
        else if ( v38 > 6 )
        {
          v56 = 6;
          goto LABEL_97;
        }
        v56 = v38;
        goto LABEL_97;
      }
      v57 = v56 / 20 + 10;
      v58 = v57;
      if ( v57 >= 48 )
        v58 = 48;
      if ( v58 < v56 )
      {
        if ( v57 >= 48 )
          v56 = 48;
        else
          v56 = v56 / 20 + 10;
      }
    }
    else
    {
      if ( v56 / 20 < v56 )
        v56 /= 20;
      if ( v56 < 50 )
      {
        if ( v56 <= 20 )
          v56 = 20;
      }
      else
      {
        v56 = 50;
      }
    }
LABEL_97:
    v60 = *(_DWORD *)(this + 12);
    v61 = v38 - v56;
    if ( !*(_DWORD *)(v60 + 108) && v61 <= 1 )
    {
      v61 = 1;
      goto LABEL_105;
    }
    if ( v61 >= 0 )
    {
      if ( v61 )
      {
LABEL_105:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), v54 + v61);
        v62 = *(int **)(this + 12);
        if ( v62[27] > 0
          && (*(_DWORD *)(this + 28) != MEMORY[0x8B3C78]
           || *(_DWORD *)(this + 32) != MEMORY[0x8B3C7C]
           || *(_DWORD *)(this + 36) != MEMORY[0x8B3C80])
          && ((*(int (__thiscall **)(int *))(*v62 + 388))(v62) != 7
           || (v63 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1444)) == 0
           || (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 44))(v63) != 6
           || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1444) + 1312) + 5835)) )
        {
          v64 = *(_DWORD *)(this + 32);
          v65 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
          v110 = ((__int16)(*(_DWORD *)(this + 28) / 256) << 8) + 128;
          LODWORD(v106) = *v65;
          v111 = ((__int16)(v64 / 256) << 8) + 128;
          HIDWORD(v106) = v65[1];
          v101 = (double)SLODWORD(v106);
          v66 = v65[2];
          v104 = (double)SHIDWORD(v106);
          v67 = Math::CalcAngle(v104 - (double)v111, (double)v110 - v101);
          v106 = (double)((__int16)Math::RoundToInt((v67 - 1.570796326794897) * -10430.06004058427) - 0x3FFF)
               * -0.00009587672516830327;
          v68 = HIDWORD(v106);
          v69 = LODWORD(v106);
          v70 = Math::SinCos(v106);
          LODWORD(v106) = Math::RoundToInt(v104 - v70 * 5.0);
          v71 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v68, v69)));
          v110 = Math::RoundToInt(v71 * 5.0 + v101);
          v111 = LODWORD(v106);
          v72 = *(_DWORD *)(this + 12);
          v112 = v66;
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v72 + 436))(v72, &v110);
        }
        goto LABEL_114;
      }
    }
    else
    {
      v61 = 0;
    }
    if ( v54 > 0 )
    {
      *(_BYTE *)(v60 + 140) = 1;
      v54 = 0;
    }
    goto LABEL_105;
  }
  v5 = *(_DWORD *)(this + 12);
  v6 = *(_DWORD *)(this + 88);
  if ( *(_DWORD *)(v5 + 108) )
    v7 = v6 + 3;
  else
    v7 = v6 + 1;
  v8 = v5 + 156;
  *(_DWORD *)(this + 88) = v7;
  v108 = *(double *)v8;
  v9 = *(_DWORD *)(this + 88);
  v105 = *(_DWORD *)(v8 + 8);
  v104 = v108;
  v109 = v105 - v9;
  Cell::GetGroundHeight(&v108);
  Coord::To_Cell(&MEMORY[0x87F7E8], &v108);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  v103 = LODWORD(v102);
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v103) )
  {
    RemoveTarget(*(_DWORD *)(this + 12));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0);
    (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v108);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1);
    Targeting::Readd(*(_DWORD **)(this + 12));
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > 0 )
    goto LABEL_34;
  GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
  v10 = *(int **)(this + 12);
  v11 = v10[27];
  if ( !v11 )
  {
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    v103 = LODWORD(v102);
    TechnoClass::ComputeCombatDamage(v10, 0);
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v103);
    v13 = **(_DWORD **)(this + 12);
    if ( v12[59] == 2 )
    {
      v14 = *(_DWORD *)((*(int (**)(void))(v13 + 132))() + 1340);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((_DWORD *)MEMORY[0x8871E0] + 128);
    }
    else
    {
      v14 = *(_DWORD *)((*(int (**)(void))(v13 + 132))() + 1344);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((_DWORD *)MEMORY[0x8871E0] + 129);
    }
    if ( v14 == -1 )
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 248))(*(_DWORD *)(this + 12));
LABEL_23:
    v15 = *(_DWORD *)(this + 12) + 156;
    v106 = *(double *)v15;
    v107 = *(_DWORD *)(v15 + 8);
    StartAudioControllerAt(v14, (int)&v106, 0);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 248))(*(_DWORD *)(this + 12));
  }
  (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v10 + 364))(
    v10 + 27,
    0,
    *((_DWORD *)MEMORY[0x8871E0] + 1002),
    0,
    1,
    1,
    0);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  LODWORD(v101) = LODWORD(v102);
  v17 = (void **)__2_YAPAXI_Z(0x1C8u);
  if ( v17 )
  {
    v18 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v101) + 59);
    v98 = v109;
    LODWORD(v98) = Return::HRESULT_Fail(SLODWORD(v108), SHIDWORD(v108), v109);
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(v11, *((_DWORD *)MEMORY[0x8871E0] + 1002), v18, &v104);
    AnimClass::ctor(v17, VersusMultiplier, (int *)&v108, 0, 1, (void *)0x2600, (void *)v98, SBYTE4(v98));
  }
  CreateSmokeEffectAt(v11, *((_DWORD *)MEMORY[0x8871E0] + 1002), SLODWORD(v108), SHIDWORD(v108), v109, 0, 0);
  return PlaySoundEffectAt(&v108, v11, 0, *((_DWORD *)MEMORY[0x8871E0] + 1002), 1, 0);
}


// ==== 0x004CE4B0  ObjectClass::ProcessDataHelper  this=ObjectClass  sig=csp ====
int __thiscall sub_4CE4B0(_DWORD *this, int *a2, int a3)
{
  int v3; // edi
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // edx
  int v9; // [esp+4h] [ebp-18h]
  double v10; // [esp+4h] [ebp-18h]
  double v11; // [esp+Ch] [ebp-10h]
  double v12; // [esp+14h] [ebp-8h]

  v9 = (*(int (__stdcall **)(_DWORD *))(this->vtable2 + 132))(this + 1); /*0x4ce4c1*/
  if ( v9 <= 0 ) /*0x4ce4c5*/
    return 0; /*0x4ce594*/
  a3 = (__int16)a3 - 0x3FFF; /*0x4ce4d7*/
  v3 = a2[2]; /*0x4ce4ec*/
  v11 = (double)a3 * -0.00009587672516830327; /*0x4ce4ef*/
  v10 = (double)v9; /*0x4ce501*/
  v12 = (double)a2[1]; /*0x4ce508*/
  v4 = Math::SinCos(v11); /*0x4ce50c*/
  a3 = Math::RoundToInt(v12 - v4 * v10); /*0x4ce520*/
  v5 = Math::ArcTan2(v11); /*0x4ce524*/
  v6 = Math::RoundToInt(v5 * v10 + (double)*a2); /*0x4ce532*/
  v7 = a3; /*0x4ce537*/
  *a2 = v6; /*0x4ce53d*/
  a2[1] = v7; /*0x4ce53f*/
  a2[2] = v3; /*0x4ce542*/
  LOWORD(a3) = *a2 / 256; /*0x4ce558*/
  HIWORD(a3) = a2[1] / 256; /*0x4ce571*/
  return 2 - LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x4ce58e*/
}


// ==== 0x004CE5A0  JumpjetLocomotionClass::ProcessRotation  this=JumpjetLocomotionClass  sig=csp ====
void __thiscall sub_4CE5A0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  void *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 83) && *(int *)(*(_DWORD *)(this + 12) + 108) > 0 ) /*0x4ce5b9*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(this + 4) + 96))(this + 4) ) /*0x4ce5c6*/
    {
      v5 = *(_DWORD **)(this + 12); /*0x4ce636*/
      *(_BYTE *)(this + 83) = 0; /*0x4ce639*/
      v5 += 39; /*0x4ce63d*/
      v9[0] = *v5; /*0x4ce645*/
      v9[1] = v5[1]; /*0x4ce651*/
      v9[2] = v5[2]; /*0x4ce658*/
      v6 = Coord::To_Cell(&MEMORY[0x87F7E8], v9); /*0x4ce661*/
      BuildingClass::CreateIdleAnim((int)v6); /*0x4ce668*/
    }
    else
    {
      LOWORD(v7) = *ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v8) /*0x4ce5ee*/
                 + ((unsigned __int16)*(_DWORD *)(this + 84) << 8);
      FacingClass::Set_SyncLog((char *)(*(_DWORD *)(this + 12) + 904), &v7); /*0x4ce605*/
      v2 = *(_DWORD *)(this + 84); /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      *(_DWORD *)(this + 84) = v4; /*0x4ce624*/
    }
  }
}


// ==== 0x004CE680  FootClass::UpdateDeployMovement  this=FootClass  sig=csp ====
char __thiscall sub_4CE680(int this)
{
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // eax
  int (__stdcall ***v5)(_DWORD, void *, int *); // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  _WORD *WeaponType; // eax
  int *v12; // eax
  int v13; // ecx
  double v14; // st7
  int v15; // ecx
  int v17; // [esp+28h] [ebp-1Ch] BYREF
  int v18; // [esp+2Ch] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-14h]
  int v20; // [esp+34h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x4ce694*/
  v3 = *(_DWORD *)(this + 12); /*0x4ce696*/
  if ( !*(_BYTE *)(v3 + 140) ) /*0x4ce699*/
  {
    v4 = (_DWORD *)(v3 + 156); /*0x4ce6a3*/
    v21[0] = *v4; /*0x4ce6aa*/
    v21[1] = v4[1]; /*0x4ce6b6*/
    v21[2] = v4[2]; /*0x4ce6c2*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v21) + 80) & 0x100) != 0 && v2 >= MEMORY[0x8B3CAC] ) /*0x4ce6dd*/
      v2 -= MEMORY[0x8B3CAC]; /*0x4ce6df*/
  }
  v5 = *(int (__stdcall ****)(_DWORD, void *, int *))(this + 12); /*0x4ce6e1*/
  v6 = 0; /*0x4ce6e4*/
  v17 = 0; /*0x4ce6e8*/
  if ( v5 ) /*0x4ce6ec*/
  {
    v7 = (**v5)(v5, &unk_822410, &v18); /*0x4ce6fd*/
    if ( v7 >= 0 ) /*0x4ce701*/
      v6 = v18; /*0x4ce70e*/
    Release3COM(&v17); /*0x4ce707*/
    v17 = v6; /*0x4ce71d*/
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4ce729*/
      WinAPI::Wrapper(v7); /*0x4ce72c*/
  }
  v8 = 0; /*0x4ce735*/
  if ( v6 ) /*0x4ce739*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 12))(v6); /*0x4ce73f*/
    v6 = v17; /*0x4ce742*/
  }
  v9 = v2 - v8; /*0x4ce749*/
  v10 = *(_DWORD *)(this + 56) - v8; /*0x4ce74b*/
  *(_BYTE *)(this + 80) = 0; /*0x4ce756*/
  *(_BYTE *)(this + 81) = 0; /*0x4ce763*/
  if ( v9 <= v10 - v10 / 3 ) /*0x4ce769*/
  {
    if ( v9 <= v10 / 2 ) /*0x4ce79b*/
      goto LABEL_18; /*0x4ce79b*/
    v12 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 72))(*(_DWORD *)(this + 12), v21); /*0x4ce7ab*/
    v13 = *v12; /*0x4ce7b1*/
    v18 = *(_DWORD *)(this + 28); /*0x4ce7b3*/
    v19 = v13; /*0x4ce7b7*/
    v14 = Math::CalcAngle((double)v12[1] - (double)*(int *)(this + 32), (double)v18 - (double)v13); /*0x4ce7d6*/
    LOWORD(v19) = Math::RoundToInt((v14 - 1.570796326794897) * -10430.06004058427); /*0x4ce7f3*/
    v15 = *(_DWORD *)(this + 12); /*0x4ce7fd*/
    v20 = v19; /*0x4ce800*/
    FacingClass::Update((char *)(v15 + 904), &v20); /*0x4ce80a*/
    *(_DWORD *)(this + 64) = 0; /*0x4ce80f*/
    *(_DWORD *)(this + 68) = 1072693248; /*0x4ce816*/
  }
  else
  {
    WeaponType = TechnoClass::GetWeaponType((_DWORD *)(*(_DWORD *)(this + 12) + 904), &v20); /*0x4ce779*/
    FacingClass::Update((char *)(*(_DWORD *)(this + 12) + 928), WeaponType); /*0x4ce788*/
  }
  v6 = v17; /*0x4ce81d*/
LABEL_18:
  if ( v6 ) /*0x4ce823*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4ce829*/
  return 1; /*0x4ce82c*/
}


// ==== 0x004CE840  DropPod::ProcessLanding  this=DropPod  sig=csp ====
char __thiscall DropPod_ProcessLanding(int this)
{
  int v3; // edi
  int *v4; // ecx
  int v5; // ecx
  double v6; // st7
  int (__stdcall ***v7)(_DWORD, void *, int *); // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int GroundHeight; // eax
  int v18; // ecx
  void **v19; // edi
  int Index; // eax
  int v21; // eax
  bool v22; // zf
  void **v23; // edi
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
  _DWORD *v44; // eax
  _DWORD *v45; // edi
  int v46; // ebx
  int v47; // [esp+4Eh] [ebp-4Ch]
  char v48; // [esp+65h] [ebp-35h]
  int v49; // [esp+66h] [ebp-34h] BYREF
  int v50; // [esp+6Ah] [ebp-30h]
  int v51; // [esp+6Eh] [ebp-2Ch] BYREF
  int v52; // [esp+72h] [ebp-28h] BYREF
  int v53; // [esp+76h] [ebp-24h]
  int v54; // [esp+7Ah] [ebp-20h] BYREF
  int v55; // [esp+7Eh] [ebp-1Ch] BYREF
  int v56; // [esp+82h] [ebp-18h] BYREF
  int v57; // [esp+86h] [ebp-14h]
  int v58; // [esp+8Ah] [ebp-10h]
  char v59[12]; // [esp+8Eh] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 81) ) /*0x4ce849*/
    return 1; /*0x4ce859*/
  v48 = 0; /*0x4ce85d*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x4ce86d*/
  v4 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x4ce86f*/
  v50 = v3; /*0x4ce875*/
  v56 = *v4; /*0x4ce87b*/
  v57 = v4[1]; /*0x4ce887*/
  v58 = v4[2]; /*0x4ce88e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v56) + 80) & 0x100) != 0 && v3 >= MEMORY[0x8B3CAC] ) /*0x4ce8ae*/
  {
    v3 -= MEMORY[0x8B3CAC]; /*0x4ce8b0*/
    v50 = v3; /*0x4ce8b2*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3221) ) /*0x4ce8c1*/
  {
    if ( !v3 ) /*0x4ce8cf*/
    {
      v5 = *(_DWORD *)(this + 12); /*0x4ce8d1*/
      if ( *(float *)(v5 + 744) > 0.0 ) /*0x4ce8e5*/
      {
        v6 = *(float *)(v5 + 744) - 0.02; /*0x4ce8ed*/
        if ( v6 < 0.0 ) /*0x4ce900*/
          v6 = 0.0; /*0x4ce904*/
        *(float *)(v5 + 744) = v6; /*0x4ce90a*/
      }
    }
    *(_DWORD *)(this + 64) = 0; /*0x4ce910*/
    *(_DWORD *)(this + 68) = 0; /*0x4ce913*/
  }
  else
  {
    *(_DWORD *)(this + 64) = 0; /*0x4ce91c*/
    *(_DWORD *)(this + 68) = 0; /*0x4ce91f*/
  }
  v7 = *(int (__stdcall ****)(_DWORD, void *, int *))(this + 12); /*0x4ce922*/
  v53 = 0; /*0x4ce925*/
  v49 = 0; /*0x4ce92b*/
  if ( v7 ) /*0x4ce92f*/
  {
    v8 = (**v7)(v7, &unk_822410, &v52); /*0x4ce940*/
    if ( v8 >= 0 ) /*0x4ce944*/
    {
      v10 = v52; /*0x4ce953*/
      Release3COM(&v49); /*0x4ce95b*/
      v9 = v10; /*0x4ce960*/
    }
    else
    {
      Release3COM(&v49); /*0x4ce94a*/
      v9 = 0; /*0x4ce94f*/
    }
    v49 = v9; /*0x4ce964*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce970*/
      WinAPI::Wrapper(v8); /*0x4ce973*/
    if ( v9 ) /*0x4ce97e*/
      v53 = (*(int (__stdcall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x4ce986*/
  }
  v11 = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(this + 28)); /*0x4ce998*/
  if ( *(_BYTE *)(this + 24) ) /*0x4ce99a*/
  {
    v12 = Cell::IsBridge(v11); /*0x4ce9a3*/
    if ( !Array::Contains(*(int **)(this + 12), (int)v12) ) /*0x4ce9b3*/
      goto LABEL_27; /*0x4ce9b3*/
    if ( *(_BYTE *)(this + 24) ) /*0x4ce9b5*/
      goto LABEL_31; /*0x4ce9b5*/
  }
  if ( !(*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))( /*0x4ce9cd*/
          *(_DWORD *)(this + 12),
          v11,
          -1,
          -1,
          0,
          1) )
  {
LABEL_31:
    if ( !*(_BYTE *)(this + 82) && v50 < 300 ) /*0x4ceb15*/
    {
      v16 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x4ceb1e*/
      v56 = *v16; /*0x4ceb25*/
      v57 = v16[1]; /*0x4ceb31*/
      v58 = v16[2]; /*0x4ceb3d*/
      GroundHeight = Cell::GetGroundHeight(&v56); /*0x4ceb41*/
      v18 = *(_DWORD *)(this + 12); /*0x4ceb46*/
      v58 = GroundHeight; /*0x4ceb49*/
      *(_BYTE *)(this + 82) = 1; /*0x4ceb4d*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18) + 3221) ) /*0x4ceb59*/
      {
        v19 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4ceb71*/
        if ( v19 ) /*0x4ceb78*/
        {
          Index = AnimTypeClass::FindIndex(aDropland); /*0x4ceb83*/
          AnimClass::ctor(v19, *((void **)MEMORY[0x8B4154] + Index), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4ceba3*/
        }
      }
      else if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 2 ) /*0x4cec09*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1732) + 3580) ) /*0x4cec14*/
        {
          v23 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4cec28*/
          if ( v23 ) /*0x4cec2f*/
          {
            v24 = AnimTypeClass::FindIndex(aCaryland); /*0x4cec36*/
            AnimClass::ctor(v23, *((void **)MEMORY[0x8B4154] + v24), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4cec58*/
          }
        }
      }
      v25 = *(int **)(this + 12); /*0x4cec5d*/
      if ( v25[27] > 0 ) /*0x4cec63*/
      {
        v26 = (*(int (__thiscall **)(int *))(*v25 + 132))(v25); /*0x4cec6c*/
        StartAudioControllerAt(*(_DWORD *)(v26 + 1328), (int)&v56, 0); /*0x4cec7a*/
      }
    }
    v27 = v53; /*0x4cec7f*/
    if ( v50 <= v53 ) /*0x4cec89*/
    {
      v28 = *(_DWORD *)(this + 12); /*0x4cec8f*/
      if ( *(float *)(v28 + 744) <= 0.0 ) /*0x4ceca3*/
      {
        v29 = (int *)(v28 + 156); /*0x4ceca9*/
        v56 = *v29; /*0x4cecb1*/
        v57 = v29[1]; /*0x4cecbd*/
        v58 = v29[2]; /*0x4cecc4*/
        if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v56) + 80) & 0x100) != 0 ) /*0x4cecdb*/
        {
          v30 = Cell::GetGroundHeight(&v56); /*0x4cece7*/
          if ( v58 >= MEMORY[0x8B3CAC] + v30 ) /*0x4cecfa*/
            *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x4cecff*/
        }
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), v27); /*0x4ced0c*/
        v47 = *(_DWORD *)(this + 12); /*0x4ced1a*/
        *(_BYTE *)(this + 81) = 0; /*0x4ced1b*/
        *(_BYTE *)(this + 80) = 0; /*0x4ced1f*/
        v48 = 1; /*0x4ced23*/
        GadgetGrid::RemoveItem(MEMORY[0x887888], v47); /*0x4ced28*/
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x4ced34*/
        v31 = *(_WORD **)(this + 12); /*0x4ced3a*/
        *(_DWORD *)(this + 72) = 0; /*0x4ced3d*/
        *(_DWORD *)(this + 64) = 0; /*0x4ced40*/
        *(_DWORD *)(this + 76) = 0; /*0x4ced43*/
        *(_DWORD *)(this + 68) = 0; /*0x4ced46*/
        if ( v31[686] || v31[687] ) /*0x4ced52*/
        {
          for ( i = 0; i < 8; ++i ) /*0x4ced5f*/
          {
            v33 = *(_WORD *)(*(_DWORD *)(this + 12) + 1374) + HIWORD(MEMORY[0x89F688][i & 7]); /*0x4ced7f*/
            LOWORD(v53) = LOWORD(MEMORY[0x89F688][i & 7]) + *(_WORD *)(*(_DWORD *)(this + 12) + 1372); /*0x4ced87*/
            HIWORD(v53) = v33; /*0x4ced8d*/
            v54 = v53; /*0x4ced9b*/
            v34 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v54); /*0x4ced9f*/
            --v34[290]; /*0x4cedb0*/
          }
          v35 = 0; /*0x4cedcd*/
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))( /*0x4cedcf*/
                                                                    *(_DWORD *)(this + 12),
                                                                    &v55);
          do /*0x4cee2a*/
          {
            v36 = *(_WORD *)(*(_DWORD *)(this + 12) + 1374) + HIWORD(MEMORY[0x89F688][v35 & 7]); /*0x4cedf3*/
            LOWORD(v53) = LOWORD(MEMORY[0x89F688][v35 & 7]) + *(_WORD *)(*(_DWORD *)(this + 12) + 1372); /*0x4cedfb*/
            HIWORD(v53) = v36; /*0x4cee01*/
            v54 = v53; /*0x4cee0f*/
            v37 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v54); /*0x4cee13*/
            ++v35; /*0x4cee20*/
            ++v37[290]; /*0x4cee24*/
          }
          while ( v35 < 8 ); /*0x4cee2a*/
        }
        else
        {
          v38 = 0; /*0x4cee40*/
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1372) = *(_DWORD *)(*(int (__thiscall **)(_WORD *, int *))(*(_DWORD *)v31 + 440))( /*0x4cee42*/
                                                                    v31,
                                                                    &v55);
          do /*0x4cee9d*/
          {
            v39 = *(_WORD *)(*(_DWORD *)(this + 12) + 1374) + HIWORD(MEMORY[0x89F688][v38 & 7]); /*0x4cee66*/
            LOWORD(v53) = LOWORD(MEMORY[0x89F688][v38 & 7]) + *(_WORD *)(*(_DWORD *)(this + 12) + 1372); /*0x4cee6e*/
            HIWORD(v53) = v39; /*0x4cee74*/
            v54 = v53; /*0x4cee82*/
            v40 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v54); /*0x4cee86*/
            ++v38; /*0x4cee93*/
            ++v40[290]; /*0x4cee97*/
          }
          while ( v38 < 8 ); /*0x4cee9d*/
        }
        v41 = *(_DWORD *)(this + 28) / 256; /*0x4ceec5*/
        v42 = *(_DWORD *)(this + 32) / 256; /*0x4ceec8*/
        v43 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 12) + 72))( /*0x4ceece*/
                          *(_DWORD *)(this + 12),
                          v59);
        if ( (unsigned __int16)(*v43 / 256) == (_WORD)v41 && (unsigned __int16)(v43[1] / 256) == (_WORD)v42 /*0x4cef4d*/
          || (LOWORD(v53) = *(_DWORD *)(this + 28) / 256,
              HIWORD(v53) = *(_DWORD *)(this + 32) / 256,
              v54 = v53,
              v44 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v54),
              v45 = Cell::IsBridge(v44),
              v45 == (_DWORD *)Team::GetMember(*(_DWORD **)(this + 12), 0)) )
        {
          v46 = *(_DWORD *)(this + 4); /*0x4cef52*/
          *(_BYTE *)(this + 52) = 0; /*0x4cef55*/
          (*(void (__stdcall **)(int, int, int, int))(v46 + 68))( /*0x4cef7a*/
            this + 4,
            MEMORY[0x8B3C78],
            MEMORY[0x8B3C7C],
            MEMORY[0x8B3C80]);
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x4cef88*/
        }
      }
    }
    if ( v49 ) /*0x4cef96*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v49 + 8))(v49); /*0x4cef9b*/
    return v48; /*0x4cef9e*/
  }
LABEL_27:
  TechnoClass::GetData(this); /*0x4ce9db*/
  v13 = *(_DWORD *)(*(_DWORD *)(this + 12) + 156); /*0x4ce9ee*/
  v14 = *(_DWORD *)(*(_DWORD *)(this + 12) + 160); /*0x4ce9f0*/
  v58 = *(_DWORD *)(*(_DWORD *)(this + 12) + 164); /*0x4ce9f6*/
  LOWORD(v51) = v13 / 256; /*0x4cea06*/
  HIWORD(v51) = v14 / 256; /*0x4cea1d*/
  v54 = v51; /*0x4cea26*/
  v51 = 0; /*0x4cea4d*/
  v15 = *LayerClass::Pathfinding_Find( /*0x4cea5c*/
           &MEMORY[0x87F7E8],
           (int)&v51,
           &v55,
           (__int16 *)&v54,
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
  if ( v15 != MEMORY[0x8B3C58] ) /*0x4cea6e*/
  {
    v58 = 0; /*0x4cea91*/
    v57 = (SHIWORD(v15) << 8) + 128; /*0x4cea9e*/
    v56 = ((__int16)v15 << 8) + 128; /*0x4ceaa8*/
    v58 = Cell::GetGroundHeight(&v56); /*0x4ceab1*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v52) + 80) & 0x100) != 0 ) /*0x4ceacd*/
      v58 += MEMORY[0x8B3CAC]; /*0x4ceadb*/
    (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)(this + 4) + 68))(this + 4, v56, v57, v58); /*0x4ceaff*/
    goto LABEL_31; /*0x4ceaff*/
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(**(_DWORD **)(this + 12) + 364))( /*0x4cebc7*/
    *(_DWORD *)(this + 12),
    *(_DWORD *)(this + 12) + 108,
    0,
    *((_DWORD *)MEMORY[0x8871E0] + 1002),
    0,
    1,
    1,
    0);
  *(_DWORD *)(this + 28) = MEMORY[0x8B3C78]; /*0x4cebd3*/
  *(_DWORD *)(this + 32) = MEMORY[0x8B3C7C]; /*0x4cebda*/
  v21 = v49; /*0x4cebdd*/
  v22 = v49 == 0; /*0x4cebe7*/
  *(_DWORD *)(this + 36) = MEMORY[0x8B3C80]; /*0x4cebe9*/
  if ( !v22 ) /*0x4cebec*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x4cebf1*/
  return 0; /*0x4ce852*/
}


// ==== 0x004CEFB0  LandFootClassAtPosition  this=FootClass  sig=csp ====
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
  v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v56); /*0x4cf0ac*/
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
          v11 = MEMORY[0x8B3C78]; /*0x4cf10a*/
          v12 = MEMORY[0x8B3C7C]; /*0x4cf110*/
          v62 = MEMORY[0x8B3C80]; /*0x4cf116*/
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
  Vector::2DMagnitudeMath((int *)&v60); /*0x4cf17f*/
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
    Vector::2DMagnitudeMath((int *)&v60); /*0x4cf20a*/
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
        || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0
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
float *__stdcall JumpjetLocomotionClass::sub_4CF610(int a1, float *a2, signed int a3)
{
  int *v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  float *result; // eax
  float v11; // [esp+0h] [ebp-3Ch]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+0h] [ebp-3Ch]
  float v15[12]; // [esp+Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v15); /*0x4cf619*/
  v3 = (int *)a3; /*0x4cf61e*/
  v4 = a1; /*0x4cf622*/
  if ( a3 ) /*0x4cf628*/
    *v3 |= 8 /*0x4cf64f*/
         * (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &a3) >> 10) + 1) >> 1) & 0x1F);
  a3 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v4 + 8) + 928), &a1) >> 10) + 1) >> 1) & 0x1F) /*0x4cf677*/
     - 8;
  v11 = (double)a3 * -0.1963495408493621; /*0x4cf685*/
  Matrix2D::Rotate(v15, v11); /*0x4cf688*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 456))(*(_DWORD *)(v4 + 8)) > 0 ) /*0x4cf69a*/
  {
    v5 = *(_DWORD *)(v4 + 8); /*0x4cf6a0*/
    if ( *(_BYTE *)(v5 + 1061) ) /*0x4cf6a3*/
    {
      Matrix3x3::RotateX(v15, *(float *)(v5 + 808)); /*0x4cf6b8*/
      if ( *(double *)(v4 + 68) <= *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) /*0x4cf6d6*/
                                             + 936) )
      {
        Matrix3D::RotateZ(v15, *(float *)(*(_DWORD *)(v4 + 8) + 812)); /*0x4cf706*/
      }
      else
      {
        v12 = *(float *)(*(_DWORD *)(v4 + 8) + 812) /*0x4cf6f3*/
            + *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944);
        Matrix3D::RotateZ(v15, v12); /*0x4cf6f6*/
      }
      if ( v3 ) /*0x4cf70d*/
        *v3 = -1; /*0x4cf713*/
    }
    else if ( *(double *)(v4 + 68) > *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 936) ) /*0x4cf734*/
    {
      if ( *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944) != 0.0 ) /*0x4cf756*/
      {
        if ( v3 ) /*0x4cf75a*/
        {
          v6 = *v3; /*0x4cf75c*/
          LOBYTE(v6) = *v3 | 4; /*0x4cf75e*/
          *v3 = v6; /*0x4cf760*/
        }
        v13 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944); /*0x4cf778*/
        Matrix3D::RotateZ(v15, v13); /*0x4cf77b*/
      }
      if ( *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928) != 0.0 ) /*0x4cf79c*/
      {
        if ( JumpjetLocomotionClass::StubReturnZero_5((__int16 *)(*(_DWORD *)(v4 + 8) + 928)) ) /*0x4cf7a7*/
        {
          if ( v3 ) /*0x4cf7b2*/
          {
            v7 = *v3; /*0x4cf7b4*/
            LOBYTE(v7) = *v3 | 1; /*0x4cf7b6*/
            *v3 = v7; /*0x4cf7b8*/
          }
          v8 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928); /*0x4cf7c5*/
        }
        else
        {
          if ( !JumpjetLocomotionClass::StubReturnZero_6((__int16 *)(*(_DWORD *)(v4 + 8) + 928)) ) /*0x4cf7dd*/
            goto LABEL_25; /*0x4cf7dd*/
          if ( v3 ) /*0x4cf7e1*/
          {
            v9 = *v3; /*0x4cf7e3*/
            LOBYTE(v9) = *v3 | 2; /*0x4cf7e5*/
            *v3 = v9; /*0x4cf7e7*/
          }
          v8 = -*(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928); /*0x4cf7fa*/
        }
        v14 = v8; /*0x4cf801*/
        Matrix3x3::RotateX(v15, v14); /*0x4cf804*/
      }
    }
  }
LABEL_25:
  result = a2; /*0x4cf809*/
  qmemcpy(a2, v15, 0x30u); /*0x4cf818*/
  return result; /*0x4cf81a*/
}


// ==== 0x004CF830  FlyLocomotionClass::CalculateBobOffset  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4CF830(int a1, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ecx
  int (__stdcall ***v5)(_DWORD, void *, int *); // eax
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // eax
  bool v12; // zf
  int v14; // [esp+18h] [ebp-4h] BYREF

  v2 = a1; /*0x4cf834*/
  v3 = 0; /*0x4cf838*/
  v4 = 0; /*0x4cf83a*/
  v5 = *(int (__stdcall ****)(_DWORD, void *, int *))(a1 + 8); /*0x4cf83c*/
  a1 = 0; /*0x4cf83f*/
  if ( v5 ) /*0x4cf845*/
  {
    v6 = (**v5)(v5, &unk_822410, &v14); /*0x4cf856*/
    if ( v6 >= 0 ) /*0x4cf85a*/
    {
      v7 = v14; /*0x4cf86e*/
      Release3COM(&a1); /*0x4cf876*/
      v4 = v7; /*0x4cf87b*/
      a1 = v7; /*0x4cf87e*/
    }
    else
    {
      Release3COM(&a1); /*0x4cf860*/
      v4 = 0; /*0x4cf865*/
      a1 = 0; /*0x4cf867*/
    }
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4cf88c*/
      WinAPI::Wrapper(v6); /*0x4cf88f*/
  }
  v8 = 0; /*0x4cf898*/
  if ( v4 ) /*0x4cf89c*/
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 12))(v4); /*0x4cf8a4*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 132))(*(_DWORD *)(v2 + 8)) + 3221) /*0x4cf8d6*/
    && !*(_BYTE *)(v2 + 77)
    && !*(_BYTE *)(v2 + 76)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 456))(*(_DWORD *)(v2 + 8)) > v8 )
  {
    v14 = (int)MEMORY[0xA8ED84] % 20; /*0x4cf8e8*/
    v9 = Math::SinCos((double)((int)MEMORY[0xA8ED84] % 20) * 0.3141592653589793); /*0x4cf8f9*/
    v3 = Math::RoundToInt(v9 * 1.5 + 0.5); /*0x4cf912*/
  }
  v10 = a2; /*0x4cf914*/
  *a2 = 0; /*0x4cf91a*/
  v11 = a1; /*0x4cf91c*/
  v12 = a1 == 0; /*0x4cf920*/
  v10[1] = v3; /*0x4cf922*/
  if ( !v12 ) /*0x4cf925*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x4cf92a*/
  return v10; /*0x4cf92f*/
}


// ==== 0x004CF940  FlyLocomotionClass::ShortFunc_4CF940  this=FlyLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4CF940(int a1, _DWORD *a2)
{
  *a2 = 0; /*0x4cf948*/
  a2[1] = 0; /*0x4cf94a*/
  return a2; /*0x4cf94d*/
}


// ==== 0x004CF950  TechnoClass::GetData  this=TechnoClass  sig=csp ====
int __thiscall sub_4CF950(int this)
{
  int result; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD *WeaponType; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // [esp+4h] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 892))(*(_DWORD *)(this + 12)); /*0x4cf95b*/
  if ( !(_BYTE)result ) /*0x4cf963*/
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 896))(*(_DWORD *)(this + 12)); /*0x4cf96e*/
    if ( !(_BYTE)result ) /*0x4cf976*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 468))(*(_DWORD *)(this + 12)); /*0x4cf981*/
      if ( !(_BYTE)result ) /*0x4cf989*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 472))(*(_DWORD *)(this + 12)); /*0x4cf994*/
        if ( !(_BYTE)result ) /*0x4cf99c*/
        {
          v3 = *(_DWORD *)(this + 12); /*0x4cf9a2*/
          *(_BYTE *)(this + 81) = 0; /*0x4cf9a5*/
          *(_BYTE *)(this + 80) = 1; /*0x4cf9a8*/
          if ( *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 756))(v3, &v10) == MEMORY[0x8B3C58] ) /*0x4cf9c3*/
            GadgetGrid::InsertItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x4cf9db*/
          v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)); /*0x4cf9e5*/
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 188))(v4); /*0x4cf9ef*/
          v6 = *(_DWORD *)(this + 12); /*0x4cf9f5*/
          *(_DWORD *)(this + 56) = v5; /*0x4cf9f8*/
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 456))(v6) ) /*0x4cf9fd*/
          {
            WeaponType = TechnoClass::GetWeaponType((_DWORD *)(*(_DWORD *)(this + 12) + 928), &v10); /*0x4cfa15*/
            FacingClass::Set_SyncLog((char *)(*(_DWORD *)(this + 12) + 904), WeaponType); /*0x4cfa24*/
          }
          v8 = *(_DWORD **)(this + 12); /*0x4cfa29*/
          v11[0] = v8[39]; /*0x4cfa3e*/
          v11[1] = v8[40]; /*0x4cfa45*/
          v11[2] = v8[41]; /*0x4cfa4c*/
          v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8); /*0x4cfa52*/
          return StartAudioControllerAt(*(_DWORD *)(v9 + 1324), (int)v11, 0); /*0x4cfa60*/
        }
      }
    }
  }
  return result; /*0x4cfa65*/
}


// ==== 0x004CFA70  LocomotionClass::CheckBridgeBlock  this=LocomotionClass  sig=csp ====
char __thiscall LocomotionClass::CheckBridgeBlock(int this)
{
  int v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 7 /*0x4cfa8e*/
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(_BYTE)v2) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)); /*0x4cfa95*/
    if ( v2 == 2 /*0x4cfacc*/
      && (v3 = *(_DWORD **)(this + 12), v2 = v3[433], *(_BYTE *)(v2 + 3597))
      && (v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v3 + 444))(*(_DWORD *)(this + 12)),
          v5 = Cell::IsBridge(v4),
          LOBYTE(v2) = Array::Contains(*(int **)(this + 12), (int)v5),
          !(_BYTE)v2) )
    {
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x4cfad6*/
    }
    else
    {
      *(_BYTE *)(this + 80) = 0; /*0x4cfadf*/
      *(_BYTE *)(this + 81) = 1; /*0x4cfae3*/
      *(_BYTE *)(this + 82) = 0; /*0x4cfae7*/
      *(_DWORD *)(this + 56) = 0; /*0x4cfaeb*/
    }
  }
  return v2; /*0x4cfadc*/
}


// ==== 0x004CFB00  FlyLocomotionClass::ComputeVoxelMatrix  this=FlyLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_4CFB00(int a1, float *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int v4; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  v3 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x4cfb0e*/
  v8[0] = *v3; /*0x4cfb15*/
  v8[1] = v3[1]; /*0x4cfb21*/
  v8[2] = v3[2]; /*0x4cfb2d*/
  v4 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], v8) + 284); /*0x4cfb43*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3221) ) /*0x4cfb4b*/
    v4 = 0; /*0x4cfb55*/
  qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9)); /*0x4cfb6d*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) /*0x4cfba3*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x4cfba6*/
  if ( a3 && *a3 != -1 ) /*0x4cfbbb*/
  {
    *a3 = 32 * (v4 + (*a3 << 6)); /*0x4cfbc5*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F; /*0x4cfbe9*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x4cfbfd*/
  return a2; /*0x4cfbff*/
}


// ==== 0x004CFC10  FlyLocomotionClass::SynchronizeFacingDirection  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4CFC10(int a1, int a2)
{
  return FacingClass::Set_SyncLog((char *)(*(_DWORD *)(a1 + 8) + 928), &a2); /*0x4cfc2f*/
}


// ==== 0x004CFC80  FlyLocomotionClass::ddtor  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *a2 = 1247291206; /*0x4cfc96*/
  a2[1] = 298948665; /*0x4cfc9e*/
  a2[2] = -1610610249; /*0x4cfca7*/
  a2[3] = -777003740; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}


// ==== 0x004CFCC0  FlyLocomotionClass::BeginMove  this=FlyLocomotionClass  sig=csp ====
int __stdcall FlyLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *a1 = (int)&FlyLocomotionClass::`vftable'; /*0x4cfcd8*/
      a1[1] = (int)&vt_FlyLocomotionClass; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}


// ==== 0x004CFCF0  FlyLocomotionClass::DispatchVirtualCall_0  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4CFCF0(int a1)
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) > 0 ? 4 : 2;
}


// ==== 0x004CFD20  FlyLocomotionClass::ClearLocomotionDirty  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4CFD20(_BYTE *a1)
{
  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) ) /*0x4cfd28*/
  {
    a1[79] = 1; /*0x4cfd2f*/
    *((_DWORD *)a1 + 20) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 20, 30); /*0x4cfd48*/
    if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 99) < 50 ) /*0x4cfd63*/
      *((_DWORD *)a1 + 20) = -*((_DWORD *)a1 + 20); /*0x4cfd6a*/
    (*(void (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1); /*0x4cfd70*/
    *((_DWORD *)a1 + 21) = 0; /*0x4cfd73*/
  }
  return StreamClass::ClearDirty(a1); /*0x4cfd80*/
}


// ==== 0x004CFD90  FlyLocomotionClass::ShortFunc_4CFD90  this=FlyLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4CFD90(int a1)
{
  return StreamClass::GetDirty(a1); /*0x4cfd9a*/
}


// ==== 0x004CFDA0  FlyLocomotionClass::DispatchVirtualCall_1  this=FlyLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4CFDA0(int a1)
{
  return *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3367) == 0; /*0x4cfdbe*/
}


// ==== 0x004CFE20  FlyLocomotionClass::ComputeFloatExpression_1  this=FlyLocomotionClass  sig=csp ====
__int64 __stdcall JumpjetLocomotionClass::sub_4CFE20(int a1)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)); /*0x4cfe2a*/
  return Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)(a1 + 68)); /*0x4cfe3e*/
}


// ==== 0x004CFE50  FlyLocomotionClass::StubReturnZero_8  this=FlyLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4CFE50(_BYTE *a1)
{
  if ( a1[77] ) /*0x4cfe54*/
    return 1; /*0x4cfe5b*/
  if ( a1[76] ) /*0x4cfe63*/
    return 0; /*0x4cfe6a*/
  return 3 - ((*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) != 0); /*0x4cfe60*/
}


// ==== 0x004CFE80  FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget  this=FlyLocomotionClass  sig=csp ====
void __stdcall FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{
  int v2; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  void **v10; // [esp+Ch] [ebp-30h] BYREF
  void *Block; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-28h]
  char v13; // [esp+19h] [ebp-23h]
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  void **v16; // [esp+24h] [ebp-18h] BYREF
  void *v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  char v19; // [esp+31h] [ebp-Bh]
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]
  char v22; // [esp+40h] [ebp+4h]

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 692) ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v16, 0, 0); /*0x4cfea2*/
  v16 = &vt_DynamicVectorClass_ObjectClass; /*0x4cfeb7*/
  v21 = 10; /*0x4cfebb*/
  v20 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  v10 = &vt_DynamicVectorClass_ObjectClass; /*0x4cfecd*/
  v15 = 10; /*0x4cfed3*/
  v14 = 0; /*0x4cfed7*/
  if ( !MEMORY[0xA8B238][0] /*0x4cfeef*/
    || (v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540), *(_DWORD *)(v2 + 22016) == -1)
    || (v22 = 1, (unsigned __int8)House::IsCurrentPlayer((#375 *)v2)) )
  {
    v22 = 0; /*0x4cfefd*/
  }
  for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x4cff17*/
    if ( v22 ) /*0x4cff20*/
    {
      if ( *(_DWORD *)(v4 + 540) != *(_DWORD *)&HouseClass_Array->__pad_0[4 /*0x4cff5e*/
                                                                        * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8)
                                                                                                + 540)
                                                                                    + 22016)] )
        continue; /*0x4cff5e*/
    }
    else if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(*(_DWORD *)(a1 + 8) + 540), *(#375 **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(_BYTE *)(v4 + 129)
      && *(_BYTE *)(v4 + 144)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3226)
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 561)
      && ((*(_DWORD *)MEMORY[0xA8B230] & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 1
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3598)) )
    {
      if ( MEMORY[0xA8B238][0] /*0x4d003d*/
        && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(*(_DWORD *)(a1 + 8) + 540))
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 540) + 52) + 422)
        && ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( v14 >= v12 /*0x4d0069*/
          && (!v13 && v12
           || v15 <= 0
           || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v10[2])(&v10, v15 + v12, 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v14++; /*0x4d0074*/
        v6 = Block; /*0x4d007b*/
      }
      else
      {
        if ( v20 >= v18 /*0x4d00ab*/
          && (!v19 && v18
           || v21 <= 0
           || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v20++; /*0x4d00b6*/
        v6 = v17; /*0x4d00bd*/
      }
      v6[v5] = v4; /*0x4d00c1*/
    }
  }
  if ( v14 <= 0 ) /*0x4d00d1*/
  {
    if ( v20 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v20 - 1); /*0x4d0109*/
    v8 = v17; /*0x4d0111*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v14 - 1); /*0x4d00e2*/
    v8 = Block; /*0x4d00ea*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d00ee*/
  }
  (*(void (__stdcall **)(_DWORD))(v9 + 968))(v8[v7]); /*0x4d011b*/
LABEL_45:
  v10 = &vt_VectorClass_ObjectClass; /*0x4d0121*/
  if ( Block && v13 ) /*0x4d0136*/
  {
    __3_YAXPAX_Z(Block); /*0x4d0139*/
    Block = 0; /*0x4d0141*/
  }
  v16 = &vt_VectorClass_ObjectClass; /*0x4d0149*/
  v13 = 0; /*0x4d0150*/
  v12 = 0; /*0x4d0154*/
  if ( v17 ) /*0x4d0159*/
  {
    if ( v19 ) /*0x4d015f*/
      __3_YAXPAX_Z(v17); /*0x4d0162*/
  }
}

