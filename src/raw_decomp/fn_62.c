// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00620050  DrawSurfaceLineAlpha  this=-  sig=csp ====
char __fastcall Surface_DrawLineAlpha(int a1, int *a2, int *a3, __int16 a4, unsigned __int8 a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  __int16 *v9; // edi
  unsigned int v10; // edx
  int v11; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  __int16 v16; // bp
  __int16 v17; // si
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ecx
  int v21; // eax
  __int16 v22; // bx
  __int16 v23; // ax
  __int16 v24; // bp
  int v25; // esi
  int v26; // ebx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int16 v32; // bx
  __int16 v33; // ax
  int v34; // esi
  unsigned int v35; // ebp
  unsigned int v36; // ebx
  int v37; // ebp
  unsigned int v38; // ebp
  int v39; // ecx
  int v40; // edx
  __int16 v41; // bx
  __int16 v42; // ax
  __int16 v43; // bp
  bool v44; // zf
  int v45; // [esp+14h] [ebp-24h]
  int v47; // [esp+1Ch] [ebp-1Ch]
  int v48; // [esp+1Ch] [ebp-1Ch]
  int v49; // [esp+20h] [ebp-18h]
  int v50; // [esp+20h] [ebp-18h]
  int v51; // [esp+20h] [ebp-18h]
  int v52; // [esp+24h] [ebp-14h]
  int v53; // [esp+24h] [ebp-14h]
  int v54; // [esp+28h] [ebp-10h]
  int v55; // [esp+2Ch] [ebp-Ch]
  int v56; // [esp+2Ch] [ebp-Ch]
  int v57; // [esp+30h] [ebp-8h]
  int v58; // [esp+30h] [ebp-8h]
  int v59; // [esp+30h] [ebp-8h]
  int v60; // [esp+34h] [ebp-4h]
  __int16 v62; // [esp+3Ch] [ebp+4h]
  __int16 v63; // [esp+3Ch] [ebp+4h]
  __int16 v64; // [esp+3Ch] [ebp+4h]
  __int16 *v65; // [esp+40h] [ebp+8h]
  int v66; // [esp+44h] [ebp+Ch]

  v60 = a2[1]; /*0x620057*/
  v5 = *a2; /*0x620060*/
  v6 = a3[1]; /*0x620062*/
  v7 = *a3; /*0x620066*/
  if ( *a2 > *a3 ) /*0x620071*/
  {
    v6 = a2[1]; /*0x620075*/
    v5 = *a3; /*0x620078*/
    v7 = *a2; /*0x62007a*/
    v60 = a3[1]; /*0x62007c*/
  }
  v45 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 112))(a1); /*0x62008b*/
  v9 = (__int16 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 92))(a1, v5, v60); /*0x620098*/
  if ( !v9 ) /*0x62009c*/
    return 0; /*0x6205bc*/
  if ( v60 == v6 ) /*0x6200a8*/
  {
    if ( v45 == 1 ) /*0x6200b3*/
    {
      LOBYTE(v6) = a4; /*0x6200bb*/
      BYTE1(v6) = a4; /*0x6200bf*/
      v10 = v7 - v5 + 1; /*0x6200c4*/
      v11 = v6 << 16; /*0x6200c6*/
      LOWORD(v11) = v6; /*0x6200c9*/
      memset32(v9, v11, v10 >> 2); /*0x6200cf*/
      memset(&v9[2 * (v10 >> 2)], a4, v10 & 3); /*0x6200d6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6200de*/
      return 1; /*0x6200ea*/
    }
    v13 = v7 - v5; /*0x6200ed*/
    if ( v13 >= 0 ) /*0x6200ef*/
    {
      v14 = a5; /*0x6200fd*/
      v15 = 255 - a5; /*0x620108*/
      v16 = a4; /*0x62010a*/
      v55 = a5; /*0x620111*/
      v57 = v15; /*0x620115*/
      v65 = v9; /*0x62011d*/
      v66 = v13 + 1; /*0x620121*/
      while ( 1 ) /*0x620142*/
      {
        v17 = *v9; /*0x620142*/
        g_GameScreenConfig = v15; /*0x62014a*/
        v18 = (v15 * (unsigned __int16)(v17 & HIWORD(MEMORY[0xAC48B8])) /*0x62018a*/
             + v14 * (unsigned int)(unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & a4)) >> 8;
        LOWORD(v18) = HIWORD(MEMORY[0xAC48B8]) & v18; /*0x62018d*/
        v19 = v18 /*0x6201a3*/
            | MEMORY[0xAC48B8]
            & ((v15 * (unsigned __int16)(v17 & MEMORY[0xAC48B8])
              + v14 * (unsigned int)(unsigned __int16)(v16 & MEMORY[0xAC48B8])) >> 8);
        v16 = a4; /*0x6201a5*/
        g_GameScreenFlags = v14; /*0x6201bd*/
        *v65 = ((v15 * (unsigned __int16)(v17 & MEMORY[0xAC48BC]) /*0x6201c3*/
               + v14 * (unsigned int)(unsigned __int16)(a4 & MEMORY[0xAC48BC])) >> 8)
             | v19;
        v9 = ++v65; /*0x6201c6*/
        if ( !--v66 ) /*0x6201d2*/
          break; /*0x6201d2*/
        v15 = v57; /*0x620127*/
        v14 = v55; /*0x62012b*/
      }
    }
  }
  else if ( v5 == v7 ) /*0x6201ef*/
  {
    if ( v60 <= v6 ) /*0x6201fb*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x62020d*/
    else
      v20 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x620204*/
    v47 = v20; /*0x620217*/
    v21 = abs32(v6 - v60); /*0x62021e*/
    if ( v21 >= 0 ) /*0x620220*/
    {
      v22 = a4; /*0x620226*/
      v49 = v21 + 1; /*0x62022b*/
      do /*0x620305*/
      {
        if ( v45 == 1 ) /*0x620234*/
        {
          *(_BYTE *)v9 = v22; /*0x620236*/
        }
        else
        {
          v23 = *v9; /*0x620241*/
          g_GameScreenFlags = a5; /*0x62024f*/
          v62 = v22; /*0x620291*/
          g_GameScreenConfig = 255 - a5; /*0x6202a4*/
          v24 = HIWORD(MEMORY[0xAC48B8]) /*0x6202dd*/
              & ((a5 * (unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v22)
                + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v23)) >> 8)
              | MEMORY[0xAC48B8]
              & ((a5 * (unsigned __int16)(v22 & MEMORY[0xAC48B8])
                + (255 - a5) * (unsigned int)(unsigned __int16)(MEMORY[0xAC48B8] & v23)) >> 8);
          v22 = a4; /*0x6202e5*/
          v20 = v47; /*0x6202ec*/
          *v9 = ((a5 * (unsigned __int16)(v62 & MEMORY[0xAC48BC]) /*0x6202f7*/
                + g_GameScreenConfig * (unsigned int)(unsigned __int16)(MEMORY[0xAC48BC] & v23)) >> 8)
              | v24;
        }
        v9 = (__int16 *)((char *)v9 + v20); /*0x6202fe*/
        --v49; /*0x620301*/
      }
      while ( v49 ); /*0x620305*/
    }
  }
  else
  {
    v25 = v7 - v5; /*0x620324*/
    v58 = v25; /*0x620326*/
    v26 = v6 - v60; /*0x62032a*/
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x62032e*/
    v48 = v27; /*0x620333*/
    if ( v26 < 0 ) /*0x620337*/
      v48 = -v27; /*0x62033b*/
    v28 = 2 * v25; /*0x620341*/
    v54 = 2 * v25; /*0x620347*/
    v29 = abs32(v26); /*0x62034b*/
    v56 = 2 * v29; /*0x620352*/
    if ( v25 <= v29 ) /*0x620356*/
    {
      v39 = 0; /*0x620488*/
      v40 = v28 - v29; /*0x62048a*/
      v53 = 0; /*0x62048c*/
      v51 = v28 - v29; /*0x620492*/
      if ( v29 > 0 ) /*0x620496*/
      {
        v41 = a4; /*0x62049c*/
        v59 = v29; /*0x6204a0*/
        do /*0x62059e*/
        {
          if ( v45 == 1 ) /*0x6204a9*/
          {
            *((_BYTE *)v9 + v39) = v41; /*0x6204ab*/
          }
          else
          {
            v42 = v9[v39]; /*0x6204b3*/
            g_GameScreenFlags = a5; /*0x6204c6*/
            v64 = v41; /*0x620508*/
            g_GameScreenConfig = 255 - a5; /*0x62051b*/
            v43 = HIWORD(MEMORY[0xAC48B8]) /*0x620554*/
                & ((a5 * (unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v41)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v42)) >> 8)
                | MEMORY[0xAC48B8]
                & ((a5 * (unsigned __int16)(v41 & MEMORY[0xAC48B8])
                  + (255 - a5) * (unsigned int)(unsigned __int16)(MEMORY[0xAC48B8] & v42)) >> 8);
            v41 = a4; /*0x62055c*/
            v39 = v53; /*0x620563*/
            v40 = v51; /*0x620569*/
            v9[v53] = ((a5 * (unsigned __int16)(v64 & MEMORY[0xAC48BC]) /*0x620572*/
                      + g_GameScreenConfig * (unsigned int)(unsigned __int16)(MEMORY[0xAC48BC] & v42)) >> 8)
                    | v43;
            v28 = 2 * v25; /*0x620576*/
          }
          if ( v40 > 0 ) /*0x62057c*/
          {
            v53 = ++v39; /*0x620583*/
            v40 -= v56; /*0x620587*/
          }
          v40 += v28; /*0x620591*/
          v9 = (__int16 *)((char *)v9 + v48); /*0x620593*/
          v44 = v59 == 1; /*0x620595*/
          v51 = v40; /*0x620596*/
          --v59; /*0x62059a*/
        }
        while ( !v44 ); /*0x62059e*/
      }
    }
    else
    {
      v30 = 2 * v29 - v25; /*0x62035c*/
      v31 = 0; /*0x62035e*/
      v50 = v30; /*0x620362*/
      v52 = 0; /*0x620366*/
      if ( v25 > 0 ) /*0x62036a*/
      {
        v32 = a4; /*0x620370*/
        do /*0x62046b*/
        {
          if ( v45 == 1 ) /*0x620379*/
          {
            *((_BYTE *)v9 + v31) = v32; /*0x62037b*/
          }
          else
          {
            v33 = v9[v31]; /*0x620387*/
            g_GameScreenFlags = a5; /*0x620396*/
            v34 = 255 - a5; /*0x62039c*/
            v63 = v32; /*0x6203d8*/
            v35 = MEMORY[0xAC48B8] /*0x6203e5*/
                & ((a5 * (unsigned __int16)(v32 & MEMORY[0xAC48B8])
                  + v34 * (unsigned int)(unsigned __int16)(MEMORY[0xAC48B8] & v33)) >> 8);
            g_GameScreenConfig = v34; /*0x6203eb*/
            v36 = (a5 * (unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v32) /*0x620411*/
                 + v34 * (unsigned int)(unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v33)) >> 8;
            LOWORD(v36) = HIWORD(MEMORY[0xAC48B8]) & v36; /*0x620414*/
            v37 = v36 | v35; /*0x620424*/
            v32 = a4; /*0x62042c*/
            v25 = v58; /*0x620435*/
            v30 = v50; /*0x620439*/
            v38 = ((a5 * (unsigned __int16)(v63 & MEMORY[0xAC48BC]) /*0x620440*/
                  + g_GameScreenConfig * (unsigned int)(unsigned __int16)(MEMORY[0xAC48BC] & v33)) >> 8)
                | v37;
            v31 = v52; /*0x620442*/
            v9[v52] = v38; /*0x620446*/
            v28 = v54; /*0x62044a*/
          }
          if ( v30 > 0 ) /*0x620450*/
          {
            v9 = (__int16 *)((char *)v9 + v48); /*0x620456*/
            v30 -= v28; /*0x620458*/
          }
          v30 += v56; /*0x62045e*/
          ++v31; /*0x620460*/
          v50 = v30; /*0x620463*/
          v52 = v31; /*0x620467*/
        }
        while ( v31 < v25 ); /*0x62046b*/
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x620311*/
  return 1; /*0x6200e3*/
}


// ==== 0x006205D0  Scrollbar_Draw  this=AbstractClass  sig=csp ====
char __fastcall Scrollbar_Draw(
        ObjectClass *aP0,
        int *a1,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  char result; // al
  int v9; // esi
  __int16 v10; // bp
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // ebp
  int v19; // ecx
  int v20; // ebp
  int v21; // ecx
  int v22; // edx
  __int16 v23; // [esp+10h] [ebp-48h]
  __int16 v24; // [esp+14h] [ebp-44h]
  int v25[2]; // [esp+18h] [ebp-40h] BYREF
  int v26[2]; // [esp+20h] [ebp-38h] BYREF
  int v27; // [esp+28h] [ebp-30h] BYREF
  int v28; // [esp+2Ch] [ebp-2Ch]
  int v29[2]; // [esp+30h] [ebp-28h] BYREF
  int v30[2]; // [esp+38h] [ebp-20h] BYREF
  int v31[2]; // [esp+40h] [ebp-18h] BYREF
  int v32[2]; // [esp+48h] [ebp-10h] BYREF
  int v33[2]; // [esp+50h] [ebp-8h] BYREF

  result = a3; /*0x6205d3*/
  v9 = 0; /*0x6205da*/
  v10 = 0; /*0x6205dc*/
  v23 = -1; /*0x6205e5*/
  v24 = 0; /*0x6205ed*/
  if ( !a3 ) /*0x6205f1*/
  {
    v10 = -1; /*0x6205f3*/
    v23 = 0; /*0x6205f8*/
    v24 = -1; /*0x6205fc*/
  }
  if ( a4 > 0 ) /*0x620604*/
  {
    do /*0x620710*/
    {
      v13 = a1[1]; /*0x620615*/
      v14 = v9 + *a1; /*0x620618*/
      v25[0] = a1[2] - v9 + *a1 - 2; /*0x62061a*/
      v26[0] = v14; /*0x620624*/
      v25[1] = v9 + v13; /*0x62062c*/
      v26[1] = v9 + v13; /*0x620630*/
      DrawSurfaceLineAlpha((int)aP0, v26, v25, v23, a6); /*0x620641*/
      v15 = *a1; /*0x620649*/
      v16 = a1[1]; /*0x620651*/
      v27 = a1[2] - v9 + *a1 - 1; /*0x620654*/
      v17 = a1[3]; /*0x620658*/
      v29[0] = v9 + v15; /*0x62065f*/
      v28 = v16 - v9 + v17 - 1; /*0x620670*/
      v29[1] = v28; /*0x620674*/
      DrawSurfaceLineAlpha((int)aP0, v29, &v27, v10, a8); /*0x620680*/
      v18 = a1[3]; /*0x620687*/
      v19 = a1[1]; /*0x62068d*/
      v30[0] = *a1 + v9; /*0x620692*/
      v31[0] = v30[0]; /*0x620698*/
      v31[1] = v19 + v9 + 1; /*0x6206a8*/
      v30[1] = v19 - v9 + v18 - 1; /*0x6206ac*/
      DrawSurfaceLineAlpha((int)aP0, v31, v30, v23, a5); /*0x6206c1*/
      v20 = a1[3]; /*0x6206cd*/
      v21 = a1[1]; /*0x6206d4*/
      v32[0] = *a1 - v9 + a1[2] - 1; /*0x6206d9*/
      v33[0] = v32[0]; /*0x6206df*/
      v22 = v21 - v9 + v20 - 2; /*0x6206e9*/
      v10 = v24; /*0x6206ed*/
      v33[1] = v9 + v21; /*0x6206f1*/
      v32[1] = v22; /*0x6206f6*/
      result = DrawSurfaceLineAlpha((int)aP0, v33, v32, v24, a7); /*0x620706*/
      ++v9; /*0x62070b*/
    }
    while ( v9 < a4 ); /*0x620710*/
  }
  return result; /*0x620716*/
}


// ==== 0x00620720  DrawScrollArrowUI  this=AbstractClass  sig=csp ====
void __fastcall DrawScrollArrowUI(int *a0, _DWORD *a1, ObjectClass *aP2, int a4, char a5)
{
  char v7; // al
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // edx
  ObjectClass *v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD v14[2]; // [esp+Ch] [ebp-40h] BYREF
  int v15; // [esp+14h] [ebp-38h]
  ObjectClass *v16; // [esp+18h] [ebp-34h]
  _DWORD v17[4]; // [esp+1Ch] [ebp-30h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  if ( a0 ) /*0x62072c*/
  {
    v7 = 114; /*0x620736*/
    if ( a4 ) /*0x62073a*/
      v7 = 112; /*0x62073c*/
    if ( aP2 ) /*0x620744*/
      sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[1572], (INIClass *)v7); /*0x620754*/
    else
      sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[1556], (INIClass *)v7); /*0x620764*/
    v8 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &Buffer[a5 == 0], 0); /*0x620788*/
    if ( v8 ) /*0x62078c*/
    {
      v9 = a1[1]; /*0x620790*/
      v10 = a1[2]; /*0x620793*/
      v14[0] = *a1; /*0x620796*/
      v11 = (ObjectClass *)a1[3]; /*0x62079a*/
      v14[1] = v9; /*0x62079d*/
      v15 = v10; /*0x6207a1*/
      v16 = v11; /*0x6207a5*/
      v15 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 124))(v8); /*0x6207b0*/
      v16 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 128))(v8); /*0x6207be*/
      v17[1] = 0; /*0x6207c2*/
      v17[0] = 0; /*0x6207ca*/
      v17[2] = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 124))(v8); /*0x6207d9*/
      v12 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 128))(v8); /*0x6207e1*/
      v13 = *a0; /*0x6207e7*/
      v17[3] = v12; /*0x6207ea*/
      (*(void (__thiscall **)(int *, _DWORD *, ObjectClass *, _DWORD *, _DWORD, int))(v13 + 8))(a0, v14, v8, v17, 0, 1); /*0x6207ff*/
    }
  }
}


// ==== 0x00620870  sub_620870  this=-  sig=ida-proto ====
int __fastcall sub_620870(unsigned __int16 a1)
{
  int v1; // eax

  v1 = (unsigned __int8)((unsigned __int8)(a1 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]); /*0x6208c7*/
  BYTE1(v1) = 2; /*0x6208d2*/
  return (unsigned __int8)((unsigned __int8)(a1 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]) /*0x6208e5*/
       | (((unsigned __int8)((unsigned __int8)(a1 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]) | (v1 << 8)) << 8);
}


// ==== 0x006208F0  DrawDialogGradient  this=AbstractClass  sig=csp ====
int __fastcall Dialog_DrawGradient(int *a1, int *a2, int a3, int a4)
{
  int v4; // ebp
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int result; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // ebx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  int v23; // ebx
  int v24; // edx
  int v25; // edx
  bool v26; // zf
  int v27; // [esp+40h] [ebp-8Ch]
  int v28; // [esp+44h] [ebp-88h]
  int v29; // [esp+48h] [ebp-84h]
  int v30; // [esp+4Ch] [ebp-80h]
  int *v31; // [esp+50h] [ebp-7Ch]
  int *v32; // [esp+54h] [ebp-78h]
  int v33; // [esp+58h] [ebp-74h] BYREF
  int v34; // [esp+5Ch] [ebp-70h] BYREF
  int v35; // [esp+60h] [ebp-6Ch]
  int v36; // [esp+64h] [ebp-68h]
  _DWORD v37[2]; // [esp+68h] [ebp-64h] BYREF
  int v38; // [esp+70h] [ebp-5Ch]
  int v39; // [esp+74h] [ebp-58h]
  int v40; // [esp+78h] [ebp-54h]
  int v41; // [esp+7Ch] [ebp-50h]
  int v42; // [esp+80h] [ebp-4Ch]
  _DWORD v43[2]; // [esp+84h] [ebp-48h] BYREF
  _DWORD v44[2]; // [esp+8Ch] [ebp-40h] BYREF
  _DWORD v45[2]; // [esp+94h] [ebp-38h] BYREF
  _DWORD v46[2]; // [esp+9Ch] [ebp-30h] BYREF
  _DWORD v47[2]; // [esp+A4h] [ebp-28h] BYREF
  _DWORD v48[2]; // [esp+ACh] [ebp-20h] BYREF
  _DWORD v49[2]; // [esp+B4h] [ebp-18h] BYREF
  _DWORD v50[2]; // [esp+BCh] [ebp-10h] BYREF
  _DWORD v51[2]; // [esp+C4h] [ebp-8h] BYREF

  v4 = a4; /*0x6208f8*/
  if ( a4 == -1 && MEMORY[0xAC4624] != -1 ) /*0x620911*/
    v4 = ((int)(unsigned __int8)MEMORY[0xAC4624] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x62095c*/
       | (BYTE1(MEMORY[0xAC4624]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (BYTE2(MEMORY[0xAC4624]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v7 = MEMORY[0xAC1B94]; /*0x620963*/
  v29 = MEMORY[0xAC1B98]; /*0x62096c*/
  v30 = MEMORY[0xAC1B94]; /*0x620970*/
  if ( MEMORY[0xAC1B98] == -1 ) /*0x620974*/
  {
    v33 = -1; /*0x620976*/
  }
  else
  {
    v33 = ((int)(unsigned __int8)MEMORY[0xAC1B98] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6209bf*/
        | (BYTE1(MEMORY[0xAC1B98]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
        | (BYTE2(MEMORY[0xAC1B98]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
    v7 = MEMORY[0xAC1B94]; /*0x6209c3*/
  }
  if ( v7 == -1 ) /*0x6209ca*/
    v34 = -1; /*0x6209cc*/
  else
    v34 = ((int)(unsigned __int8)v7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620a16*/
        | (BYTE1(v7) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
        | (BYTE2(MEMORY[0xAC1B94]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v8 = *a2; /*0x620a1d*/
  v9 = a2[1]; /*0x620a1f*/
  v10 = a2[2]; /*0x620a22*/
  v39 = a2[3]; /*0x620a25*/
  v11 = a3; /*0x620a29*/
  result = v8 - a3; /*0x620a30*/
  v13 = v9 - a3; /*0x620a32*/
  v38 = 2 * a3 + v10; /*0x620a39*/
  v39 += 2 * a3; /*0x620a45*/
  if ( a3 > 0 ) /*0x620a49*/
  {
    v14 = result; /*0x620a53*/
    v31 = &v33; /*0x620a55*/
    v36 = a3; /*0x620a5d*/
    v15 = v39 + v13 - 1; /*0x620a61*/
    v16 = v13 - result; /*0x620a65*/
    v27 = v15; /*0x620a67*/
    v35 = v16; /*0x620a6f*/
    v28 = v38 + result - 1; /*0x620a77*/
    v32 = &v34; /*0x620a7f*/
    while ( 1 ) /*0x620a90*/
    {
      if ( v11 == 2 ) /*0x620a93*/
        v4 = *v31; /*0x620a99*/
      v17 = v16 + v14; /*0x620aa0*/
      v18 = *a1; /*0x620aa3*/
      v41 = v28 - 1; /*0x620aaf*/
      v48[0] = v28 - 1; /*0x620ab3*/
      v48[1] = v17; /*0x620ac1*/
      v51[0] = v14; /*0x620acc*/
      v51[1] = v17; /*0x620ad3*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v18 + 48))(a1, v51, v48, v4); /*0x620ada*/
      v46[1] = v17 + 1; /*0x620ae8*/
      v43[1] = v27; /*0x620af1*/
      v19 = *a1; /*0x620af5*/
      v43[0] = v14; /*0x620afb*/
      v46[0] = v14; /*0x620aff*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v19 + 48))(a1, v46, v43, v4); /*0x620b03*/
      if ( a3 == 2 ) /*0x620b0e*/
        v4 = *v32; /*0x620b14*/
      v20 = *a1; /*0x620b1a*/
      v50[0] = v28; /*0x620b1c*/
      v50[1] = v27; /*0x620b27*/
      v44[1] = v27; /*0x620b2e*/
      v44[0] = v14; /*0x620b42*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v20 + 48))(a1, v44, v50, v4); /*0x620b46*/
      v45[0] = v28; /*0x620b51*/
      v47[0] = v28; /*0x620b55*/
      v21 = *a1; /*0x620b59*/
      v40 = v27 - 1; /*0x620b5e*/
      v45[1] = v27 - 1; /*0x620b62*/
      v47[1] = v17; /*0x620b73*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v21 + 48))(a1, v47, v45, v4); /*0x620b7a*/
      if ( a3 == 2 ) /*0x620b85*/
      {
        v22 = (v29 & 0xFF00) + (v30 & 0xFF00); /*0x620ba8*/
        v23 = (unsigned __int8)(((unsigned __int8)v29 + (unsigned __int8)v30) / 2) /*0x620beb*/
            + ((((v29 & 0xFF0000) + (v30 & 0xFF0000)) / 2) & 0xFF0000)
            + ((((int)v22 - HIDWORD(v22)) >> 1) & 0xFF00);
        v42 = v23; /*0x620bf0*/
        if ( v23 == -1 ) /*0x620bf4*/
          v4 = -1; /*0x620bf6*/
        else
          v4 = ((int)(unsigned __int8)v23 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620c3e*/
             | (BYTE1(v23) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
             | (BYTE2(v42) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
        v24 = *a1; /*0x620c48*/
        v49[0] = v28; /*0x620c4a*/
        v49[1] = v35 + v14; /*0x620c55*/
        (*(void (__thiscall **)(int *, _DWORD *, int))(v24 + 36))(a1, v49, v4); /*0x620c66*/
        v25 = *a1; /*0x620c69*/
        v37[1] = v27; /*0x620c74*/
        v37[0] = v14; /*0x620c7b*/
        (*(void (__thiscall **)(int *, _DWORD *, int))(v25 + 36))(a1, v37, v4); /*0x620c7f*/
      }
      ++v14; /*0x620c9b*/
      --v32; /*0x620c9c*/
      result = v36 - 1; /*0x620ca4*/
      v26 = v36 == 1; /*0x620ca4*/
      ++v31; /*0x620ca5*/
      v28 = v41; /*0x620ca9*/
      v27 = v40; /*0x620cad*/
      --v36; /*0x620cb1*/
      if ( v26 ) /*0x620cb5*/
        break; /*0x620cb5*/
      v16 = v35; /*0x620a85*/
      v11 = a3; /*0x620a89*/
    }
  }
  return result; /*0x620cbb*/
}


// ==== 0x00620CD0  ComputeHashModPrime  this=-  sig=ida-proto ====
int __fastcall ComputeHashModPrime(int *a1, int *a2, int a3)
{
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int result; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  bool v19; // cc
  int v20; // [esp+30h] [ebp-68h]
  int v21; // [esp+34h] [ebp-64h]
  int v22; // [esp+38h] [ebp-60h]
  int i; // [esp+3Ch] [ebp-5Ch]
  int v24; // [esp+40h] [ebp-58h]
  int v25; // [esp+44h] [ebp-54h]
  _DWORD v26[2]; // [esp+48h] [ebp-50h] BYREF
  _DWORD v27[2]; // [esp+50h] [ebp-48h] BYREF
  _DWORD v28[2]; // [esp+58h] [ebp-40h] BYREF
  _DWORD v29[2]; // [esp+60h] [ebp-38h] BYREF
  _DWORD v30[2]; // [esp+68h] [ebp-30h] BYREF
  _DWORD v31[2]; // [esp+70h] [ebp-28h] BYREF
  _DWORD v32[2]; // [esp+78h] [ebp-20h] BYREF
  _DWORD v33[2]; // [esp+80h] [ebp-18h] BYREF
  int v34; // [esp+88h] [ebp-10h]
  int v35; // [esp+8Ch] [ebp-Ch]
  int v36; // [esp+90h] [ebp-8h]
  int v37; // [esp+94h] [ebp-4h]

  v5 = *a2; /*0x620cdb*/
  v6 = a2[1]; /*0x620cdd*/
  v34 = v5; /*0x620ce6*/
  v7 = a2[2]; /*0x620cea*/
  v35 = v6; /*0x620ced*/
  v8 = a2[3]; /*0x620cf1*/
  v36 = v7; /*0x620cf9*/
  v37 = v8; /*0x620d04*/
  v9 = (39 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620d3e*/
     | (248 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
     | (116 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v10 = (19 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620d7d*/
      | (123 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (57 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v24 = (30 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620dbf*/
      | (186 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (87 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v22 = 0; /*0x620dfb*/
  v25 = (24 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x620e0d*/
      | (153 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (71 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  result = a3; /*0x620e11*/
  v12 = -1 - a3 + v34; /*0x620e19*/
  v35 += -1 - a3; /*0x620e25*/
  v13 = 2 * a3 + 2; /*0x620e29*/
  v36 += v13; /*0x620e2f*/
  v14 = v13 + v8; /*0x620e37*/
  if ( a3 > 0 ) /*0x620e3b*/
  {
    v21 = v36 + v12 - 1; /*0x620e4d*/
    v15 = v35 - v12; /*0x620e55*/
    v20 = v14 + v35 - 1; /*0x620e57*/
    for ( i = v35 - v12; ; v15 = i ) /*0x620e5b*/
    {
      v16 = *a1; /*0x620e69*/
      v26[1] = v12 + v15; /*0x620e6e*/
      v27[1] = v12 + v15; /*0x620e72*/
      v26[0] = v21 - 1; /*0x620e76*/
      v27[0] = v12; /*0x620e87*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v16 + 48))(a1, v27, v26, v9); /*0x620e8b*/
      v28[0] = v21; /*0x620e9a*/
      v28[1] = v20; /*0x620e9e*/
      v29[1] = v20; /*0x620ea2*/
      v17 = *a1; /*0x620ea6*/
      v29[0] = v12; /*0x620eb1*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v17 + 48))(a1, v29, v28, v10); /*0x620eb5*/
      v30[1] = v20; /*0x620ec4*/
      v30[0] = v12; /*0x620ec8*/
      v31[0] = v12; /*0x620ecc*/
      v18 = *a1; /*0x620ed4*/
      v31[1] = v35 + v22 + 1; /*0x620ed6*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v18 + 48))(a1, v31, v30, v24); /*0x620eeb*/
      v32[1] = v20 - 1; /*0x620efb*/
      v32[0] = v21; /*0x620f03*/
      v33[0] = v21; /*0x620f07*/
      v33[1] = i + v12; /*0x620f17*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(*a1 + 48))(a1, v33, v32, v25); /*0x620f21*/
      result = v22 + 1; /*0x620f30*/
      ++v12; /*0x620f31*/
      --v20; /*0x620f33*/
      v19 = ++v22 < a3; /*0x620f3c*/
      --v21; /*0x620f42*/
      if ( !v19 ) /*0x620f46*/
        break; /*0x620f46*/
    }
  }
  return result; /*0x620f4c*/
}


// ==== 0x00620F60  Surface_Render  this=AbstractClass  sig=csp ====
int __fastcall Surface_Render(ObjectClass *aP0, _WORD *a1, int *yTop, _BYTE *a3, int aP1, int a6)
{
  AbstractClass *v6; // edi
  int v8; // ebx
  AbstractClass *v9; // ebp
  AbstractClass *v10; // ebx
  int v12; // [esp+10h] [ebp-Ch]
  int *yTopa; // [esp+20h] [ebp+4h]
  AbstractClass *aP1a; // [esp+28h] [ebp+Ch]

  v6 = (AbstractClass *)a3; /*0x620fab*/
  v8 = yTop[2]; /*0x620fc5*/
  v9 = (AbstractClass *)(yTop[3] - yTop[1]); /*0x620fd0*/
  yTopa = (int *)yTop[1]; /*0x620fd2*/
  v10 = (AbstractClass *)(v8 - *yTop); /*0x620fda*/
  aP1a = (AbstractClass *)(((unsigned __int8)aP1 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x620fdc*/
                         | (BYTE2(aP1) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                         | (BYTE1(aP1) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]));
  v12 = *yTop; /*0x620fe2*/
  if ( !a3 ) /*0x620fe6*/
    v6 = ::aP0; /*0x620fe8*/
  Char::Swap(v6, (ObjectClass *)1); /*0x620ff2*/
  TextGroup::SetRect(v6, (AbstractClass *)yTop); /*0x620ffa*/
  Property::Set(v6, aP1a); /*0x621006*/
  Font::Print(v6, (AbstractClass *)aP0, (AbstractClass *)a1, v12, (AbstractClass *)yTopa, v10, v9, 0, 0, 0); /*0x62102e*/
  return 0; /*0x621035*/
}


// ==== 0x00621040  PrintFontLayout  this=AbstractClass  sig=csp ====
int PrintFontLayout(AbstractClass *aP0, AbstractClass *aP1, AbstractClass aP3)
{
  unsigned __int16 *v3; // edx
  AbstractClass *v4; // ecx
  AbstractClass *v10; // esi
  int v6; // ebp
  AbstractClass *v12; // edi
  int v8; // ebx
  AbstractClass *v9; // ebp
  BitFont *v15; // ebx
  AbstractClass *aP1a; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  AbstractClass *aP2; // [esp+18h] [ebp-8h]
  AbstractClass *var4; // [esp+1Ch] [ebp-4h]

  var4 = v4; /*0x62104a*/
  aP2 = (AbstractClass *)v3; /*0x621087*/
  v10 = aP0; /*0x62109d*/
  v6 = *(_DWORD *)&aP0->__pad_0[12]; /*0x6210a1*/
  v12 = (AbstractClass *)(*(_DWORD *)&aP0->__pad_0[8] - *(_DWORD *)aP0->__pad_0); /*0x6210ab*/
  v13 = *(_DWORD *)aP0->__pad_0; /*0x6210ad*/
  v8 = ((unsigned __int8)aP3.__pad_0[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x6210b1*/
     | ((unsigned __int8)aP3.__pad_0[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
     | ((unsigned __int8)aP3.__pad_0[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]);
  *(_DWORD *)aP3.__pad_0 = *(_DWORD *)&aP0->__pad_0[4]; /*0x6210b6*/
  v9 = (AbstractClass *)(v6 - *(_DWORD *)aP3.__pad_0); /*0x6210ba*/
  aP1a = (AbstractClass *)v8; /*0x6210c0*/
  v15 = (BitFont *)aP1; /*0x6210c4*/
  if ( (aP3.__pad_0[4] & 4) != 0 ) /*0x6210ca*/
  {
    Text::Layout(aP1, v3, (AbstractClass *)&aP1, (AbstractClass *)&aP0, v12); /*0x6210da*/
    *(_DWORD *)aP3.__pad_0 += ((char *)v9 - (char *)aP0) / 2; /*0x6210f2*/
  }
  Char::Swap(v15, (ObjectClass *)1); /*0x6210fa*/
  TextGroup::SetRect(v15, v10); /*0x621102*/
  Property::Set(v15, aP1a); /*0x62110e*/
  Font::Print( /*0x62113f*/
    (AbstractClass *)v15,
    var4,
    aP2,
    v13,
    *(AbstractClass **)aP3.__pad_0,
    v12,
    v9,
    *(AbstractClass **)&aP3.__pad_0[4],
    (AbstractClass *)aP3.uniqueId,
    (AbstractClass *)aP3.abstractFlags);
  return 0; /*0x621146*/
}


// ==== 0x00621150  sub_621150  this=-  sig=ida-proto ====
double __fastcall sub_621150(int a1)
{
  double result; // st7
  int *v2; // edx
  int v3; // esi
  int v4; // eax
  double v5; // st7
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = 1.0; /*0x621153*/
  v6[0] = 43; /*0x62115b*/
  v6[1] = 128; /*0x621163*/
  v6[2] = 213; /*0x62116b*/
  v2 = v6; /*0x621173*/
  v3 = 3; /*0x621177*/
  do /*0x6211c6*/
  {
    v4 = *v2; /*0x62117c*/
    if ( a1 <= *v2 - 16 ) /*0x621183*/
    {
      if ( a1 <= v4 ) /*0x621199*/
        goto LABEL_9; /*0x621199*/
    }
    else if ( a1 <= v4 ) /*0x621187*/
    {
      v5 = (double)(v4 - a1); /*0x621191*/
      goto LABEL_8; /*0x621195*/
    }
    if ( a1 > v4 + 16 ) /*0x6211a0*/
      goto LABEL_9; /*0x6211a0*/
    v5 = (double)(a1 - v4); /*0x6211ac*/
LABEL_8:
    result = v5 * 0.0625 * 0.60000002 + 0.40000001; /*0x6211b0*/
LABEL_9:
    ++v2; /*0x6211c2*/
    --v3; /*0x6211c5*/
  }
  while ( v3 ); /*0x6211c6*/
  return result; /*0x6211c8*/
}


// ==== 0x006211D0  DrawTextRendererTextAligned  this=-  sig=csp ====
int __fastcall DrawTextRendererTextAligned(
        int ecx0,
        _DWORD *a1,
        ObjectClass *aP2,
        unsigned __int16 *a3,
        int a5,
        int a6,
        int arg10,
        int *a7,
        int a9)
{
  AbstractClass *v9; // edi
  int v12; // ebp
  AbstractClass *v13; // esi
  AbstractClass *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  _BYTE v18[32]; // [esp+4h] [ebp-20h] BYREF
  int yTop; // [esp+28h] [ebp+4h]

  v9 = (AbstractClass *)a1; /*0x6211dc*/
  if ( !HouseClass_Player.__pad_5568[23244] ) /*0x6211e0*/
    return 0; /*0x6211e8*/
  if ( !a7 ) /*0x6211f1*/
    a7 = *(int **)&stru_87C374.__pad_579C[22528]; /*0x6211f9*/
  v12 = *(_DWORD *)aP2->__pad_0; /*0x621234*/
  *(_DWORD *)&v18[12] = *(_DWORD *)&aP2->__pad_0[12]; /*0x621255*/
  v13 = (AbstractClass *)(((unsigned __int8)ecx0 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x621259*/
                        | (BYTE1(ecx0) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                        | (BYTE2(ecx0) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
  yTop = *(_DWORD *)&aP2->__pad_0[4]; /*0x62125e*/
  v14 = *(AbstractClass **)&aP2->__pad_0[8]; /*0x621262*/
  *(_DWORD *)&v18[8] = v14; /*0x621267*/
  if ( !a1 ) /*0x62126b*/
    v9 = aP0; /*0x62126d*/
  Text::Layout(v9, a3, (AbstractClass *)v18, (AbstractClass *)&v18[4], v14); /*0x621285*/
  switch ( a6 ) /*0x621291*/
  {
    case 1: /*0x621291*/
      v12 += (*(_DWORD *)&v18[8] - *(_DWORD *)v18 + 1) / 2; /*0x6212a3*/
      break;
    case 2: /*0x621291*/
      v12 += (*(_DWORD *)v18 + 1) / -2; /*0x6212ba*/
      break;
    case 3: /*0x621291*/
      v12 += -1 - *(_DWORD *)v18; /*0x6212cc*/
      break;
    case 4: /*0x621291*/
      v12 = *(_DWORD *)&v18[8] - *(_DWORD *)v18 + v12 - 1; /*0x6212df*/
      break;
  }
  switch ( arg10 ) /*0x6212ea*/
  {
    case 1: /*0x6212ea*/
      v15 = (*(_DWORD *)&v18[12] - *(_DWORD *)&v18[4] + 1) / 2; /*0x6212fa*/
LABEL_21:
      yTop += v15; /*0x621321*/
      break; /*0x621321*/
    case 2: /*0x6212ea*/
      v15 = (*(_DWORD *)&v18[4] + 1) / -2; /*0x62130f*/
      goto LABEL_21; /*0x621311*/
    case 3: /*0x6212ea*/
      v15 = -1 - *(_DWORD *)&v18[4]; /*0x62131f*/
      goto LABEL_21; /*0x62131f*/
  }
  v16 = *(_DWORD *)aP2->__pad_0; /*0x621325*/
  v17 = *(_DWORD *)&aP2->__pad_0[4]; /*0x621327*/
  *(_DWORD *)&v18[16] = v16; /*0x621332*/
  *(_DWORD *)&v18[20] = v17; /*0x621336*/
  *(_DWORD *)&v18[24] = *(_DWORD *)&v18[8] + v16; /*0x621342*/
  *(_DWORD *)&v18[28] = *(_DWORD *)&v18[12] + v17; /*0x621346*/
  Char::Swap(v9, (ObjectClass *)1); /*0x62134a*/
  TextGroup::SetRect(v9, (AbstractClass *)&v18[16]); /*0x621356*/
  Property::Set(v9, v13); /*0x62135e*/
  return FontRenderer::DrawText(v9, a7, a3, v12, yTop, a5, a9) - v12; /*0x6211e4*/
}


// ==== 0x006213A0  Dialog::Resize  this=Dialog  sig=csp ====
int __thiscall Dialog::Resize(_DWORD *this)
{
  int result; // eax
  int SystemMetrics; // esi
  int v4; // esi
  int v5; // [esp+8h] [ebp-24h] BYREF
  int v6; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch]
  int v8; // [esp+14h] [ebp-18h]
  int v9; // [esp+18h] [ebp-14h]
  __int128 Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = MEMORY[0x87F7E8][7880]; /*0x6213a0*/
  if ( MEMORY[0x87F7E8][7880] ) /*0x6213ae*/
  {
    result = MEMORY[0x87F7E8][7882]; /*0x6213b4*/
    if ( MEMORY[0x87F7E8][7882] ) /*0x6213bb*/
    {
      ScreenDialogToClient(*(this + 5), &v6); /*0x6213c8*/
      ((void (__stdcall *)(_DWORD, __int128 *))GetClientRect)(*(this + 5), &Rect); /*0x6213d6*/
      result = ((int (__stdcall *)(_DWORD, int))GetWindowLongA)(*(this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor' & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6 += SystemMetrics; /*0x62140e*/
        v8 -= SystemMetrics; /*0x62141c*/
        v7 += result; /*0x621420*/
        v9 -= result; /*0x621424*/
      }
      if ( *this == 4 ) /*0x62142c*/
      {
        result = dword_A8ED54[52076]; /*0x62142e*/
        v4 = *(this + 5); /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( dword_A8ED54[52076] ) /*0x62143c*/
        {
          result = *(_DWORD *)(dword_A8ED54[52075] /*0x62145d*/
                             + 4
                             * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&v5)
                              & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
          if ( result ) /*0x621462*/
          {
            while ( *(_DWORD *)result != v5 ) /*0x62146a*/
            {
              result = *(_DWORD *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(_DWORD *)(result + 232) = this->__pad_010; /*0x621491*/
              ((void (__stdcall *)(int, _DWORD *, _DWORD))InvalidateRect)(v4, this + 7, 0); /*0x621497*/
              return ((int (__stdcall *)(int))UpdateWindow)(v4); /*0x62149e*/
            }
          }
        }
      }
    }
  }
  return result; /*0x621476*/
}


// ==== 0x006214B0  SetupDialogRenderBuffer  this=AbstractClass  sig=csp ====
int __fastcall SetupDialogRenderBuffer(int *a1, HWND a2, unsigned __int8 a3)
{
  int *v3; // ebx
  int v4; // edi
  _DWORD *v5; // ebp
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ecx
  HWND Parent; // eax
  _DWORD *v11; // edx
  int v12; // edi
  __int16 *v13; // edi
  int v14; // ebx
  int v15; // ebp
  int v16; // edx
  int v17; // ecx
  __int16 v18; // ax
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  HWND hWnd; // [esp+14h] [ebp-74h] BYREF
  HWND v24; // [esp+18h] [ebp-70h] BYREF
  int *v25; // [esp+1Ch] [ebp-6Ch]
  int v26; // [esp+20h] [ebp-68h]
  int v27; // [esp+24h] [ebp-64h]
  struct tagRECT v28; // [esp+28h] [ebp-60h] BYREF
  _DWORD v29[4]; // [esp+38h] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+48h] [ebp-40h] BYREF
  LONG left; // [esp+58h] [ebp-30h] BYREF
  LONG top; // [esp+5Ch] [ebp-2Ch]
  int v33; // [esp+60h] [ebp-28h]
  int v34; // [esp+64h] [ebp-24h]
  _DWORD v35[4]; // [esp+68h] [ebp-20h] BYREF
  struct tagRECT v36; // [esp+78h] [ebp-10h] BYREF

  v3 = a1; /*0x6214bc*/
  v4 = 0; /*0x6214be*/
  v5 = 0; /*0x6214c0*/
  hWnd = a2; /*0x6214c4*/
  v25 = a1; /*0x6214c8*/
  if ( MEMORY[0xAC1B04] ) /*0x6214cc*/
  {
    v6 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6214ed*/
    a2 = hWnd; /*0x6214f0*/
    if ( v6 ) /*0x6214f6*/
    {
      while ( *(HWND *)v6 != hWnd ) /*0x6214fa*/
      {
        v6 = *(_DWORD *)(v6 + 516); /*0x6214fc*/
        if ( !v6 ) /*0x621504*/
          goto LABEL_7; /*0x621504*/
      }
      v4 = v6 + 4; /*0x62150c*/
    }
  }
LABEL_7:
  GetClientRect(a2, &Rect); /*0x62150f*/
  ScreenDialogToClient(hWnd, &v28); /*0x621523*/
  v7 = *(_DWORD **)(v4 + 16); /*0x621528*/
  if ( !v7 ) /*0x62152d*/
  {
    v7 = __2_YAPAXI_Z(0x20u); /*0x62153a*/
    if ( v7 ) /*0x621543*/
    {
      v8 = Rect.bottom + 1; /*0x62154d*/
      v9 = Rect.right + 1; /*0x62154e*/
      v7[2] = Rect.bottom + 1; /*0x62154f*/
      v7[1] = v9; /*0x621557*/
      v7[3] = 0; /*0x62155f*/
      *v7 = &XSurface_Vtable; /*0x621562*/
      v7[4] = 2; /*0x621568*/
      Buffer::Init(v7 + 5, 0, 2 * v9 * v8); /*0x62156f*/
      *v7 = &BSurface_Vtable; /*0x621574*/
    }
    else
    {
      v7 = 0; /*0x62157e*/
    }
    *(_DWORD *)(v4 + 16) = v7; /*0x621580*/
    v29[0] = 0; /*0x621591*/
    v29[1] = 0; /*0x621595*/
    ++MEMORY[0xAC48B4]; /*0x6215a1*/
    v29[2] = Rect.right + 1; /*0x6215a7*/
    v29[3] = Rect.bottom + 1; /*0x6215ab*/
    Parent = GetParent(hWnd); /*0x6215af*/
    v24 = Parent; /*0x6215bd*/
    if ( MEMORY[0xAC1B04] ) /*0x6215c1*/
    {
      v11 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v24) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6215e2*/
      Parent = v24; /*0x6215e5*/
      if ( v11 ) /*0x6215eb*/
      {
        while ( (HWND)*v11 != v24 ) /*0x6215ef*/
        {
          v11 = (_DWORD *)v11[129]; /*0x6215f1*/
          if ( !v11 ) /*0x6215f9*/
            goto LABEL_17; /*0x6215f9*/
        }
        v5 = v11 + 1; /*0x621601*/
      }
    }
LABEL_17:
    v12 = v5[4]; /*0x621604*/
    if ( v12 ) /*0x621609*/
    {
      ScreenDialogToClient(Parent, &v36); /*0x621611*/
      left = v28.left - v36.left; /*0x621628*/
      top = v28.top - v36.top; /*0x621636*/
      v34 = v28.bottom - v28.top + 1; /*0x62164c*/
      v33 = v28.right - v28.left + 1; /*0x621655*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))(v7, v29, v12, &left, 0, 1); /*0x62165d*/
    }
    else
    {
      left = v28.left; /*0x621670*/
      top = v28.top; /*0x62167d*/
      v33 = v28.right - v28.left + 1; /*0x621682*/
      v34 = v28.bottom - v28.top + 1; /*0x621688*/
      if ( MEMORY[0x887308] ) /*0x62168c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))( /*0x6216a1*/
          v7,
          v29,
          MEMORY[0x887308],
          &left,
          0,
          1);
    }
    v13 = (__int16 *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v7 + 92))(v7, 0, 0); /*0x6216b1*/
    if ( v13 ) /*0x6216b5*/
    {
      v14 = 0; /*0x6216bf*/
      v15 = (*(int (__thiscall **)(_DWORD *))(*v7 + 128))(v7); /*0x6216cb*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 124))(v7) * v15 > 0 ) /*0x6216d5*/
      {
        v16 = a3; /*0x6216e7*/
        v17 = 255 - a3; /*0x6216ed*/
        v27 = a3; /*0x6216ef*/
        v26 = v17; /*0x6216f3*/
        while ( 1 ) /*0x621701*/
        {
          v18 = *v13; /*0x621701*/
          g_GameScreenFlags = v16; /*0x621704*/
          g_GameScreenConfig = v17; /*0x62171d*/
          *v13++ = ((v17 * (unsigned int)(unsigned __int16)(v18 & MEMORY[0xAC48BC])) >> 8) /*0x621763*/
                 | MEMORY[0xAC48B8] & ((v17 * (unsigned int)(unsigned __int16)(v18 & MEMORY[0xAC48B8])) >> 8)
                 | HIWORD(MEMORY[0xAC48B8])
                 & ((v17 * (unsigned int)(unsigned __int16)(v18 & HIWORD(MEMORY[0xAC48B8]))) >> 8);
          ++v14; /*0x621769*/
          v19 = (*(int (__thiscall **)(_DWORD *))(*v7 + 128))(v7); /*0x621774*/
          if ( v14 >= (*(int (__thiscall **)(_DWORD *))(*v7 + 124))(v7) * v19 ) /*0x62177e*/
            break; /*0x62177e*/
          v17 = v26; /*0x6216f9*/
          v16 = v27; /*0x6216fd*/
        }
      }
      v3 = v25; /*0x621786*/
      (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7); /*0x62178c*/
    }
  }
  v20 = v3[1]; /*0x621792*/
  v21 = *v3; /*0x621799*/
  v35[2] = v3[2]; /*0x62179b*/
  v35[3] = v3[3]; /*0x6217a2*/
  v35[1] = v20 - v28.top; /*0x6217ae*/
  v35[0] = v21 - v28.left; /*0x6217c0*/
  return (*(int (__thiscall **)(int, int *, _DWORD *, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x6217cc*/
           MEMORY[0x887310],
           v3,
           v7,
           v35,
           0,
           1);
}


// ==== 0x006217E0  UI_Helper_6217E0  this=-  sig=csp ====
void __fastcall UI_Helper_6217E0(ObjectClass *aP0, ObjectClass *aP1, __int16 a3, int a4)
{
  ObjectClass *v4; // esi
  ObjectClass *v5; // ebp
  int v6; // ebx
  __int16 v7; // di
  int v8; // ecx
  int v9; // eax
  __int16 *v10; // ecx
  int v11; // eax
  unsigned __int8 v12; // al
  __int16 v13; // si
  unsigned int v14; // ebp
  __int16 v15; // di
  int v16; // ecx
  unsigned int v17; // eax
  bool v18; // zf
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  __int16 *v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  __int16 v25; // [esp+24h] [ebp-Ch]
  int v28; // [esp+38h] [ebp+8h]

  v4 = aP0; /*0x6217ea*/
  v5 = aP1; /*0x6217ec*/
  v6 = (*(_DWORD *)&aP0->__pad_0[8] * a4) >> 16; /*0x6217fa*/
  v19 = 1; /*0x6217fd*/
  v20 = v6; /*0x621805*/
  if ( v6 >= 0 ) /*0x621809*/
  {
    if ( !v6 ) /*0x621811*/
    {
      v6 = 1; /*0x621813*/
      v20 = 1; /*0x621818*/
    }
    v24 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x62182c*/
    if ( v24 ) /*0x621830*/
    {
      v28 = 0; /*0x621839*/
      if ( *(int *)&v4->__pad_0[12] > 0 ) /*0x621843*/
      {
        v7 = a3; /*0x62184a*/
        do /*0x6219b1*/
        {
          v8 = *(_DWORD *)v4->__pad_0 /*0x62186b*/
             + (v28 + *(_DWORD *)&v4->__pad_0[4])
             * ((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 116))(v5)
              / 2);
          v9 = *(_DWORD *)&v4->__pad_0[12] / 4; /*0x621876*/
          if ( v28 == 3 * v9 ) /*0x621880*/
            v19 = 1; /*0x621882*/
          if ( v28 == v9 ) /*0x62188e*/
            v19 = 0; /*0x621890*/
          if ( v6 > 0 ) /*0x62189a*/
          {
            v23 = v6; /*0x6218a4*/
            v10 = (__int16 *)(v24 + 2 * v8); /*0x6218a8*/
            v11 = 255; /*0x6218ab*/
            v21 = v10; /*0x6218b0*/
            v22 = 255; /*0x6218b4*/
            do /*0x62199d*/
            {
              if ( v19 ) /*0x6218be*/
              {
                v12 = v11 / *(_DWORD *)&v4->__pad_0[8]; /*0x6218c5*/
                v13 = *v10; /*0x6218d8*/
                v25 = v7; /*0x6218e7*/
                g_GameScreenFlags = v12; /*0x6218fc*/
                g_GameScreenConfig = 255 - v12; /*0x621908*/
                v14 = (unsigned int)*(&g_MatrixTransformState + 5802) /*0x62192d*/
                    & ((g_GameScreenConfig * (unsigned __int16)(v13 & *(_WORD *)(&g_MatrixTransformState + 5802))
                      + v12 * (unsigned int)(unsigned __int16)(v7 & *(_WORD *)(&g_MatrixTransformState + 5802))) >> 8);
                v15 = *((_WORD *)&g_MatrixTransformState + 11605) /*0x621946*/
                    & ((g_GameScreenConfig * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v13)
                      + v12 * (unsigned int)(unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v7)) >> 8);
                v16 = g_GameScreenConfig * (unsigned __int16)(v13 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621958*/
                v4 = aP0; /*0x62195b*/
                v6 = v20; /*0x62195f*/
                v17 = v16 + v12 * (unsigned __int16)(v25 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621963*/
                v10 = v21; /*0x621965*/
                LOWORD(v14) = v15 | v14; /*0x621969*/
                v7 = a3; /*0x62196b*/
                *v21 = (v17 >> 8) | v14; /*0x621974*/
                v5 = aP1; /*0x621977*/
              }
              else
              {
                *v10 = v7; /*0x62197d*/
              }
              ++v10; /*0x621988*/
              v11 = v22 + 255; /*0x62198b*/
              v18 = v23 == 1; /*0x621990*/
              v21 = v10; /*0x621991*/
              v22 += 255; /*0x621995*/
              --v23; /*0x621999*/
            }
            while ( !v18 ); /*0x62199d*/
          }
          ++v28; /*0x6219ad*/
        }
        while ( v28 < *(_DWORD *)&v4->__pad_0[12] ); /*0x6219b1*/
      }
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x6219bd*/
    }
  }
}


// ==== 0x006219D0  Team_Find  this=-  sig=csp ====
int __fastcall sub_6219D0(int *a1, int a2, int a3, int a4)
{
  int v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // kr00_4
  int v11; // ebp
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  int v15; // edx
  _WORD *v16; // ecx
  int v17; // ebp
  int v18; // ebx
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  int v22; // edx
  _WORD *v23; // ecx
  int v24; // ebp
  int v25; // [esp+8h] [ebp-14h]
  int v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+Ch] [ebp-10h]
  int v29; // [esp+20h] [ebp+4h]
  int v30; // [esp+20h] [ebp+4h]

  v5 = a2; /*0x6219d7*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6219e7*/
  v27 = result; /*0x6219ec*/
  if ( result ) /*0x6219f0*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5); /*0x6219fc*/
    v8 = a1[1]; /*0x621a05*/
    v9 = v7; /*0x621a0a*/
    v11 = v9 / 2; /*0x621a12*/
    v25 = v8; /*0x621a1a*/
    if ( v8 < a1[3] + v8 ) /*0x621a1e*/
    {
      v12 = v11 * v8; /*0x621a26*/
      v29 = v11 * v8; /*0x621a29*/
      do /*0x621aaf*/
      {
        v13 = *a1; /*0x621a2d*/
        v14 = *a1 + a3; /*0x621a36*/
        if ( v13 < v13 + a3 ) /*0x621a3b*/
        {
          HIWORD(v15) = HIWORD(v27); /*0x621a3d*/
          v16 = (_WORD *)(v27 + 2 * (v12 + *a1)); /*0x621a45*/
          do /*0x621a8c*/
          {
            LOWORD(v15) = *v16++; /*0x621a4f*/
            LOWORD(v11) = HIWORD(MEMORY[0xAC48B8]) & (HIWORD(MEMORY[0xAC48B8]) >> 1); /*0x621a5b*/
            LOWORD(v14) = (unsigned __int16)MEMORY[0xAC48B8] >> 1; /*0x621a65*/
            v14 &= MEMORY[0xAC48B8]; /*0x621a68*/
            LOWORD(v15) = (unsigned __int16)v15 >> 1; /*0x621a6e*/
            v17 = v14 | v11; /*0x621a71*/
            LOWORD(v14) = (unsigned __int16)MEMORY[0xAC48BC] >> 1; /*0x621a7a*/
            v11 = v15 & (v14 | v17); /*0x621a7f*/
            ++v13; /*0x621a81*/
            *(v16 - 1) = v11; /*0x621a82*/
            v15 = a3 + *a1; /*0x621a88*/
          }
          while ( v13 < v15 ); /*0x621a8c*/
          v8 = v25; /*0x621a8e*/
          v11 = v9 / 2; /*0x621a92*/
          v12 = v29; /*0x621a96*/
        }
        ++v8; /*0x621aa0*/
        v12 += v11; /*0x621aa3*/
        v25 = v8; /*0x621aa7*/
        v29 = v12; /*0x621aab*/
      }
      while ( v8 < a1[3] + a1[1] ); /*0x621aaf*/
      v5 = a2; /*0x621ab5*/
    }
    v18 = a1[1]; /*0x621ab9*/
    v26 = v18; /*0x621ac0*/
    if ( v18 < v18 + a4 ) /*0x621ac9*/
    {
      v19 = v11 * v18; /*0x621acf*/
      v30 = v19; /*0x621ad2*/
      do /*0x621b59*/
      {
        v20 = *a1 + a1[2]; /*0x621adb*/
        v21 = *a1 + a3; /*0x621ae0*/
        v22 = a3 + v19 + *a1; /*0x621ae3*/
        if ( v21 < v20 ) /*0x621ae7*/
        {
          v23 = (_WORD *)(v27 + 2 * v22); /*0x621aed*/
          do /*0x621b35*/
          {
            LOWORD(v22) = *v23++; /*0x621af7*/
            LOWORD(v20) = HIWORD(MEMORY[0xAC48B8]) & (HIWORD(MEMORY[0xAC48B8]) >> 1); /*0x621b03*/
            LOWORD(v19) = (unsigned __int16)MEMORY[0xAC48B8] >> 1; /*0x621b0d*/
            v19 &= MEMORY[0xAC48B8]; /*0x621b10*/
            LOWORD(v22) = (unsigned __int16)v22 >> 1; /*0x621b16*/
            v24 = v19 | v20; /*0x621b19*/
            LOWORD(v19) = (unsigned __int16)MEMORY[0xAC48BC] >> 1; /*0x621b22*/
            v20 = v22 & (v19 | v24); /*0x621b27*/
            ++v21; /*0x621b29*/
            *(v23 - 1) = v20; /*0x621b2a*/
            v22 = *a1 + a1[2]; /*0x621b31*/
          }
          while ( v21 < v22 ); /*0x621b35*/
          v19 = v30; /*0x621b37*/
        }
        v19 += v9 / 2; /*0x621b47*/
        ++v26; /*0x621b4f*/
        v30 = v19; /*0x621b55*/
      }
      while ( v26 < a4 + a1[1] ); /*0x621b59*/
      v5 = a2; /*0x621b5f*/
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x621b67*/
  }
  return result; /*0x621b6c*/
}


// ==== 0x00621B80  DSurface::FillRectWithColor  this=DSurface  sig=csp ====
int __fastcall DSurface::FillRectWithColor(int *a0, ObjectClass *aP1, __int16 a3, unsigned __int8 a4)
{
  int *v4; // esi
  ObjectClass *v5; // ebp
  int result; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  _WORD *v13; // eax
  int v14; // ecx
  __int16 v15; // bx
  __int16 v16; // si
  __int16 v17; // bp
  unsigned int v18; // ecx
  int v19; // edx
  _WORD *v20; // [esp+Ch] [ebp-28h]
  int v21; // [esp+10h] [ebp-24h]
  int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+20h] [ebp-14h]
  int v27; // [esp+30h] [ebp-4h]

  v4 = a0; /*0x621b85*/
  v5 = aP1; /*0x621b87*/
  result = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x621b9c*/
  v25 = result; /*0x621ba1*/
  if ( result ) /*0x621ba5*/
  {
    v7 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 116))(v5); /*0x621bb2*/
    v8 = v4[1]; /*0x621bb5*/
    v23 = v8; /*0x621bc2*/
    v9 = v7 / 2; /*0x621bc6*/
    v27 = v9; /*0x621bca*/
    if ( v8 < v4[3] + v8 ) /*0x621bce*/
    {
      v10 = v9 * v8; /*0x621bd6*/
      v24 = v9 * v8; /*0x621bd9*/
      do /*0x621d11*/
      {
        v21 = *v4; /*0x621be4*/
        v11 = v10 + *v4; /*0x621bea*/
        if ( *v4 >= *v4 + v4[2] ) /*0x621bed*/
        {
          v5 = aP1; /*0x621cf4*/
        }
        else
        {
          v12 = a4; /*0x621bff*/
          v13 = (_WORD *)(v25 + 2 * v11); /*0x621c0a*/
          v14 = 255 - a4; /*0x621c0d*/
          v15 = a3; /*0x621c0f*/
          v20 = v13; /*0x621c21*/
          while ( 1 ) /*0x621c2f*/
          {
            v16 = *v13; /*0x621c2f*/
            g_GameScreenConfig = v14; /*0x621c32*/
            v17 = *(_WORD *)(&g_MatrixTransformState + 5802) /*0x621c6d*/
                & ((v14 * (unsigned __int16)(v16 & *(_WORD *)(&g_MatrixTransformState + 5802))
                  + v12 * (unsigned int)(unsigned __int16)(v15 & *(_WORD *)(&g_MatrixTransformState + 5802))) >> 8);
            v18 = v14 * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v16) /*0x621c8a*/
                + v12 * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & a3);
            v15 = a3; /*0x621c8c*/
            g_GameScreenFlags = v12; /*0x621ca0*/
            v19 = g_GameScreenConfig * (unsigned __int16)(v16 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621cb1*/
            v4 = a0; /*0x621cb8*/
            v13 = v20 + 1; /*0x621cbe*/
            *v20++ = ((v19 + v12 * (unsigned int)(unsigned __int16)(a3 & *(_WORD *)(&g_MatrixTransformState + 5803))) >> 8) /*0x621cca*/
                   | *((_WORD *)&g_MatrixTransformState + 11605) & (v18 >> 8)
                   | v17;
            if ( ++v21 >= a0[2] + *a0 ) /*0x621ce0*/
              break; /*0x621ce0*/
            v12 = a4; /*0x621c27*/
            v14 = 255 - a4; /*0x621c2b*/
          }
          v5 = aP1; /*0x621ce6*/
          v8 = v23; /*0x621cea*/
          v10 = v24; /*0x621cee*/
        }
        v10 += v27; /*0x621cff*/
        v23 = ++v8; /*0x621d09*/
        v24 = v10; /*0x621d0d*/
      }
      while ( v8 < v4[3] + v4[1] ); /*0x621d11*/
    }
    return (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x621d1c*/
  }
  return result; /*0x621d21*/
}


// ==== 0x00621D30  sub_621D30  this=-  sig=ida-proto ====
int __fastcall sub_621D30(int *a1, int a2)
{
  int v4; // ebx
  int v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // [esp+10h] [ebp-318h] BYREF
  int v13; // [esp+14h] [ebp-314h]
  int v14; // [esp+18h] [ebp-310h]
  int v15; // [esp+1Ch] [ebp-30Ch]
  int v16; // [esp+20h] [ebp-308h]
  int v17; // [esp+24h] [ebp-304h]
  unsigned __int8 v18[768]; // [esp+28h] [ebp-300h] BYREF

  v16 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8363FC], v18); /*0x621d5e*/
  v4 = 0; /*0x621d6b*/
  v17 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8363F0], 0); /*0x621d6d*/
  sub_6B93E0(v18); /*0x621d71*/
  v5 = 0; /*0x621d78*/
  v12 = *a1; /*0x621d7c*/
  v13 = a1[1]; /*0x621d83*/
  v14 = a1[2]; /*0x621d8a*/
  v15 = a1[3]; /*0x621d91*/
  result = a1[2]; /*0x621d95*/
  if ( result > 0 ) /*0x621d9a*/
  {
    do /*0x621e74*/
    {
      v7 = rand() % 8; /*0x621db0*/
      v8 = a1[1] + 1; /*0x621dbb*/
      v12 = v5 + *a1; /*0x621dbc*/
      v13 = v8; /*0x621dc4*/
      v14 = 10; /*0x621de5*/
      v15 = 12; /*0x621ded*/
      Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v7, 0); /*0x621df5*/
      v9 = rand() % 8; /*0x621e0a*/
      v10 = a1[1]; /*0x621e0d*/
      v12 = v5 + *a1; /*0x621e14*/
      v11 = a1[3]; /*0x621e18*/
      v14 = 10; /*0x621e1b*/
      v15 = 12; /*0x621e23*/
      v13 = v10 + v11 - 16; /*0x621e34*/
      Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v9, 0); /*0x621e55*/
      if ( !(++v4 % 6) ) /*0x621e63*/
        v5 += 10; /*0x621e69*/
      result = a1[2]; /*0x621e6c*/
      v5 += 10; /*0x621e6f*/
    }
    while ( v5 < result ); /*0x621e74*/
  }
  return result; /*0x621e7a*/
}


// ==== 0x00621E90  Dialog::DrawBackground  this=SkirmishDialog  sig=csp ====
void __thiscall Dialog::DrawBackground(HWND hWnd)
{
  int v1; // ebp
  _DWORD *v3; // ebx
  HWND *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  _DWORD *v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  HWND *v11; // eax
  _DWORD *v12; // eax
  HWND *v13; // eax
  int v14; // edi
  HWND *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  HWND *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  HWND v28; // [esp+10h] [ebp-58h] BYREF
  HWND v29; // [esp+14h] [ebp-54h] BYREF
  HWND v30; // [esp+18h] [ebp-50h] BYREF
  LONG v31; // [esp+1Ch] [ebp-4Ch]
  LONG v32; // [esp+20h] [ebp-48h]
  LONG v33; // [esp+24h] [ebp-44h]
  LONG left; // [esp+28h] [ebp-40h] BYREF
  LONG top; // [esp+2Ch] [ebp-3Ch]
  LONG v36; // [esp+30h] [ebp-38h]
  LONG v37; // [esp+34h] [ebp-34h]
  struct tagRECT v38; // [esp+38h] [ebp-30h] BYREF
  LONG v39; // [esp+48h] [ebp-20h] BYREF
  LONG v40; // [esp+4Ch] [ebp-1Ch]
  LONG v41; // [esp+50h] [ebp-18h]
  LONG v42; // [esp+54h] [ebp-14h]
  struct tagRECT Rect; // [esp+58h] [ebp-10h] BYREF

  v1 = 0; /*0x621e9c*/
  v3 = 0; /*0x621ea0*/
  v30 = hWnd; /*0x621ea4*/
  v28 = hWnd; /*0x621ea8*/
  if ( MEMORY[0xAC1B04] ) /*0x621eac*/
  {
    v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v28)); /*0x621ec3*/
    if ( v4 ) /*0x621ec8*/
    {
      while ( *v4 != v28 ) /*0x621ed0*/
      {
        v4 = (HWND *)v4[129]; /*0x621ed2*/
        if ( !v4 ) /*0x621eda*/
          goto LABEL_7; /*0x621eda*/
      }
      v3 = v4 + 1; /*0x621ee2*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x621ee7*/
  {
    GetClientRect(hWnd, &Rect); /*0x621ef3*/
    ScreenDialogToClient(hWnd, &v38); /*0x621eff*/
    left = v38.left; /*0x621f10*/
    right = v38.right - v38.left; /*0x621f14*/
    top = v38.top; /*0x621f1a*/
    bottom = v38.bottom - v38.top; /*0x621f1e*/
    v36 = v38.right - v38.left; /*0x621f24*/
    v37 = v38.bottom - v38.top; /*0x621f2a*/
    if ( v38.right - v38.left <= Rect.right ) /*0x621f2e*/
    {
      right = Rect.right; /*0x621f30*/
      v36 = Rect.right; /*0x621f32*/
    }
    if ( bottom <= Rect.bottom ) /*0x621f3c*/
    {
      bottom = Rect.bottom; /*0x621f3e*/
      v37 = Rect.bottom; /*0x621f40*/
    }
    if ( !v3[8] ) /*0x621f44*/
    {
      v7 = (_DWORD *)v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = __2_YAPAXI_Z(0x20u); /*0x621f5b*/
        if ( v7 ) /*0x621f62*/
        {
          v8 = Rect.right; /*0x621f64*/
          v9 = Rect.bottom; /*0x621f68*/
          v7[1] = Rect.right; /*0x621f6c*/
          v7[2] = v9; /*0x621f74*/
          v7[3] = 0; /*0x621f7c*/
          *v7 = &XSurface_Vtable; /*0x621f7f*/
          v7[4] = 2; /*0x621f85*/
          Buffer::Init(v7 + 5, 0, 2 * v9 * v8); /*0x621f8c*/
          *v7 = &BSurface_Vtable; /*0x621f91*/
        }
        else
        {
          v7 = 0; /*0x621f99*/
        }
        v3[4] = v7; /*0x621f9b*/
        bottom = v37; /*0x621fa3*/
        ++MEMORY[0xAC48B4]; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x621fc5*/
        {
          RenderCreditsScreen((int)v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int)v7, &left, *((_BYTE *)v3 + 212) == 0); /*0x621ffe*/
          v29 = hWnd; /*0x62200a*/
          if ( MEMORY[0xAC1B04] ) /*0x62200e*/
          {
            v11 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x62202f*/
            if ( v11 ) /*0x622034*/
            {
              while ( *v11 != v29 ) /*0x62203c*/
              {
                v11 = (HWND *)v11[129]; /*0x62203e*/
                if ( !v11 ) /*0x622046*/
                  goto LABEL_29; /*0x622046*/
              }
              v12 = v11 + 1; /*0x62204e*/
              if ( v12 ) /*0x622053*/
                v1 = v12[29]; /*0x622055*/
            }
          }
LABEL_29:
          v29 = hWnd; /*0x622058*/
          if ( !MEMORY[0xAC1B04] ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x622084*/
          if ( !v13 ) /*0x622089*/
            goto LABEL_33; /*0x622089*/
          while ( *v13 != v29 ) /*0x622091*/
          {
            v13 = (HWND *)v13[129]; /*0x622093*/
            if ( !v13 ) /*0x62209b*/
              goto LABEL_33; /*0x62209b*/
          }
          v16 = v13 + 1; /*0x6220ee*/
          if ( v16 ) /*0x6220f3*/
            v14 = v16[56]; /*0x6220f5*/
          else
LABEL_33:
            v14 = 0; /*0x62209d*/
          v29 = v30; /*0x6220aa*/
          if ( !MEMORY[0xAC1B04] ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6220cf*/
          if ( !v15 ) /*0x6220d4*/
            goto LABEL_43; /*0x6220d4*/
          while ( *v15 != v29 ) /*0x6220dc*/
          {
            v15 = (HWND *)v15[129]; /*0x6220de*/
            if ( !v15 ) /*0x6220e6*/
              goto LABEL_43; /*0x6220e6*/
          }
          v17 = v15 + 1; /*0x622101*/
          if ( v17 ) /*0x622106*/
            v18 = v17[57]; /*0x622108*/
          else
LABEL_43:
            v18 = 0; /*0x622110*/
          UI_Draw_72E730((int)v7, &left, v1, v14, v18); /*0x62211b*/
          if ( *((_BYTE *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0((int)v7, &left); /*0x622130*/
          if ( *((_BYTE *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860((int)v7, &left); /*0x622145*/
          if ( MEMORY[0xAC1B04] ) /*0x622159*/
          {
            v19 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v30) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x62217e*/
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (HWND *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((_BYTE *)v20 + 215) ) /*0x6221b3*/
                UI_Draw_72E920((int)v7, &left); /*0x6221c7*/
            }
          }
        }
      }
      else if ( v10 == 2 ) /*0x6221d4*/
      {
        v42 = bottom; /*0x6221de*/
        v39 = left; /*0x6221e2*/
        v40 = top; /*0x6221f0*/
        v41 = right; /*0x622200*/
        v21 = *v7; /*0x622204*/
        v39 = 0; /*0x62220a*/
        v40 = 0; /*0x62220e*/
        (*(void (__thiscall **)(_DWORD *, LONG *, int, LONG *, _DWORD, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          MEMORY[0x887310],
          &left,
          0,
          1);
        if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x62221a*/
        {
          v22 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x622229*/
          if ( v22 ) /*0x622231*/
          {
            if ( v22 == 1 ) /*0x622243*/
            {
              v23 = MEMORY[0xB0FC88]; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = MEMORY[0xB0FC8C]; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = MEMORY[0xB0FC84]; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = MEMORY[0xB0FC80]; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP((int)v7, v24, (int)v23, 0, (int *)&v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x833654], 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = (HWND)left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x622318*/
        if ( MEMORY[0x8A00A4] > v26 ) /*0x622321*/
          v30 = (HWND)((char *)v30 + (MEMORY[0x8A00A4] - v26) / -2); /*0x622332*/
        if ( *(&MEMORY[0x8A00A4] + 1) > v27 ) /*0x62233d*/
          v31 += (*(&MEMORY[0x8A00A4] + 1) - v27) / -2; /*0x62234e*/
        (*(void (__thiscall **)(_DWORD *, LONG *, int, HWND *, _DWORD, int))(*v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*(void (__thiscall **)(int, LONG *, _DWORD *, LONG *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x6223b3*/
          MEMORY[0x887310],
          &left,
          v7,
          &v39,
          0,
          1);
      }
    }
  }
}


// ==== 0x006223C0  ObjectClass::DestroyDialog  this=Game  sig=csp ====
_DWORD *__thiscall DestroyDialog(void *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void *v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x6223c1*/
  v4 = this; /*0x6223c9*/
  if ( MEMORY[0xAC1B04] ) /*0x6223cd*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6223ee*/
    if ( result ) /*0x6223f3*/
    {
      while ( (void *)*result != v4 ) /*0x6223fb*/
      {
        result = (_DWORD *)result[129]; /*0x6223fd*/
        if ( !result ) /*0x622405*/
          return result; /*0x622405*/
      }
      v2 = result + 1; /*0x62240e*/
      if ( result != (_DWORD *)-4 ) /*0x622413*/
      {
        v3 = (void (__thiscall ***)(_DWORD, int))result[5]; /*0x622415*/
        if ( v3 ) /*0x62241a*/
        {
          (**v3)(v3, 1); /*0x622420*/
          v2[4] = 0; /*0x622422*/
          return (_DWORD *)--MEMORY[0xAC48B4]; /*0x62242e*/
        }
      }
    }
  }
  return result; /*0x622407*/
}


// ==== 0x00622470  AddDynamicVector  this=-  sig=csp ====
BOOL __stdcall AddDynamicVector(HWND a1, int *a2)
{
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // edi
  void *v6; // edx
  const void *v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  void *v10; // ebp
  const void *v11; // esi
  _DWORD *v12; // ebp
  int v14; // [esp+4h] [ebp-8h]
  int v15; // [esp+8h] [ebp-4h]
  LPARAM v16; // [esp+14h] [ebp+8h]
  LPARAM v17; // [esp+14h] [ebp+8h]

  if ( !a2 ) /*0x62247a*/
    return 1; /*0x6225d1*/
  v3 = *a2; /*0x622484*/
  v15 = *a2; /*0x62248a*/
  if ( *a2 >= a2[1] ) /*0x62248e*/
  {
    v4 = 2 * v3; /*0x622490*/
    v16 = 2 * v3; /*0x622497*/
    if ( 2 * v3 < 10 ) /*0x62249b*/
    {
      v16 = 10; /*0x62249d*/
      v4 = 10; /*0x6224a5*/
    }
    v5 = 4 * v4; /*0x6224a9*/
    v6 = __2_YAPAXI_Z(4 * v4); /*0x6224b8*/
    memset(v6, 0, v5); /*0x6224c6*/
    v14 = (int)v6; /*0x6224ca*/
    v7 = (const void *)a2[2]; /*0x6224d3*/
    if ( v7 ) /*0x6224d8*/
      qmemcpy(v6, v7, 4 * *a2); /*0x6224e6*/
    __3_YAXPAX_Z((void *)a2[2]); /*0x6224f3*/
    a2[2] = v14; /*0x622503*/
    a2[1] = v16; /*0x622506*/
  }
  if ( *a2 >= a2[1] ) /*0x622510*/
  {
    v8 = 2 * *a2; /*0x622512*/
    v17 = v8; /*0x622517*/
    if ( v8 < 10 ) /*0x62251b*/
    {
      v17 = 10; /*0x62251d*/
      v8 = 10; /*0x622525*/
    }
    v9 = 4 * v8; /*0x622529*/
    v10 = __2_YAPAXI_Z(4 * v8); /*0x622538*/
    memset(v10, 0, v9); /*0x622546*/
    v11 = (const void *)a2[2]; /*0x62254f*/
    if ( v11 ) /*0x622554*/
      qmemcpy(v10, v11, 4 * *a2); /*0x622562*/
    __3_YAXPAX_Z((void *)a2[2]); /*0x62256f*/
    a2[2] = (int)v10; /*0x622578*/
    v3 = v15; /*0x62257b*/
    a2[1] = v17; /*0x622582*/
  }
  if ( v3 < *a2 ) /*0x622589*/
    memcpy((void *)(a2[2] + 4 * v3 + 4), (const void *)(a2[2] + 4 * v3), 4 * (*a2 + 0x3FFFFFFF * v3)); /*0x6225a4*/
  v12 = (_DWORD *)(a2[2] + 4 * v3); /*0x6225af*/
  if ( v12 ) /*0x6225b4*/
    *v12 = a1; /*0x6225ba*/
  ++*a2; /*0x6225c2*/
  return 1; /*0x6225ca*/
}


// ==== 0x00622610  ObjectClass::UI_Process  this=ObjectClass  sig=csp ====
int sub_622610()
{
  int result; // eax
  bool v1; // zf

  result = MEMORY[0xAC48EC]; /*0x622610*/
  v1 = MEMORY[0xAC48EC] == 0; /*0x622615*/
  if ( MEMORY[0xAC48EC] > 0 ) /*0x622617*/
  {
    result = MEMORY[0xAC48EC] - 1; /*0x622619*/
    MEMORY[0xAC48EC] = result; /*0x62261a*/
    v1 = result == 0; /*0x62261f*/
  }
  if ( v1 && MEMORY[0x887640] ) /*0x62262b*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 28))(MEMORY[0x887640]) ) /*0x62262f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 24))(MEMORY[0x887640]); /*0x62263e*/
    return MEMORY[0xAC48EC]; /*0x622641*/
  }
  return result; /*0x622646*/
}


// ==== 0x00622650  CreateDialog  this=-  sig=csp ====
int __fastcall sub_622650(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3)
{
  int v4; // ebp
  int result; // eax
  HWND *v6; // edi
  int *v7; // ebx
  HINSTANCE v8; // eax
  HWND DialogIndirectParamA; // eax
  HWND v10; // esi
  const DLGTEMPLATE *v11; // [esp-10h] [ebp-2Ch]
  HWND v12; // [esp-Ch] [ebp-28h]
  LPARAM dwInitParam[2]; // [esp+14h] [ebp-8h] BYREF

  v4 = a1; /*0x62265e*/
  result = FindResource(a1, 5); /*0x62266c*/
  if ( result ) /*0x622673*/
  {
    v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x622690*/
    v7 = (int *)(8 * g_DialogTrackingList + 12004652); /*0x622697*/
    LOWORD(dwInitParam[0]) = a1; /*0x62269f*/
    ++g_DialogTrackingList; /*0x6226a4*/
    dwInitParam[1] = a3; /*0x6226ae*/
    v12 = g_hWnd; /*0x6226b7*/
    v11 = (const DLGTEMPLATE *)result; /*0x6226b8*/
    v8 = g_hInstance; /*0x6226b9*/
    *v6 = 0; /*0x6226be*/
    *v7 = 0; /*0x6226c5*/
    DialogIndirectParamA = CreateDialogIndirectParamA(v8, v11, v12, a2, (LPARAM)dwInitParam); /*0x6226cb*/
    v10 = DialogIndirectParamA; /*0x6226d1*/
    if ( DialogIndirectParamA ) /*0x6226d5*/
    {
      *v6 = DialogIndirectParamA; /*0x6226ee*/
      *v7 = v4; /*0x6226f2*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x6226f4*/
      dword_B72F44 = v10; /*0x6226f9*/
      dword_B72F48 = v4; /*0x622702*/
      return (int)v10; /*0x6226ff*/
    }
    else
    {
      --g_DialogTrackingList; /*0x6226df*/
      return 0; /*0x6226e5*/
    }
  }
  return result; /*0x622675*/
}


// ==== 0x00622720  Dialog::Destroy  this=IUnknown  sig=csp ====
int __thiscall Dialog::Destroy(void *this)
{
  int result; // eax
  int *i; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  Timer::PumpMessages((int *)MEMORY[0x87F6C0][44]); /*0x62272a*/
  Dialog::IdleProcess(this); /*0x622731*/
  ((void (__stdcall *)(void *))DestroyWindow)(this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( dword_A8ED54[233599] > 0 ) /*0x622749*/
  {
    for ( i = &dword_A8ED54[233461]; (void *)*i != this; i += 2 ) /*0x62274f*/
    {
      if ( ++result >= dword_A8ED54[233599] ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * result + 12004648),
      (const void *)(8 * result + 12004656),
      8 * (dword_A8ED54[233599] + 0x1FFFFFFF * (result + 1)));
    v4 = dword_A8ED54[233599]; /*0x622788*/
    dword_A8ED54[2 * dword_A8ED54[233599] + 233459] = 0; /*0x622790*/
    dword_A8ED54[2 * v4 + 233460] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    dword_A8ED54[233599] = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      dword_A8ED54[233596] = 0; /*0x6227de*/
      dword_A8ED54[233597] = 0; /*0x6227e5*/
      ((void (__stdcall *)(int))SetForegroundWindow)(dword_A8ED54[233983]); /*0x6227eb*/
      return ((int (__stdcall *)(int))SetFocus)(dword_A8ED54[233983]); /*0x6227f7*/
    }
    else
    {
      v6 = dword_A8ED54[2 * v5 + 233459]; /*0x6227a8*/
      v7 = dword_A8ED54[2 * v5 + 233460]; /*0x6227af*/
      dword_A8ED54[233596] = v6; /*0x6227b7*/
      dword_A8ED54[233597] = v7; /*0x6227bd*/
      ((void (__stdcall *)(int))SetForegroundWindow)(v6); /*0x6227c2*/
      return ((int (__stdcall *)(int))SetFocus)(dword_A8ED54[233596]); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/
}


// ==== 0x00622800  Dialog::Show  this=IUnknown  sig=csp ====
int __thiscall Dialog::Show(void *this)
{
  ((void (__stdcall *)(void *, int))ShowWindow)(this, 1); /*0x622806*/
  ((void (__stdcall *)(void *))SetForegroundWindow)(this); /*0x62280d*/
  return Timer::PumpMessages((int *)MEMORY[0x87F6C0][44]); /*0x62281e*/
}


// ==== 0x00622820  SetupDialog  this=-  sig=csp ====
HWND __fastcall SetupDialog(CoordStruct *hWnd, int a2)
{
  int v4; // eax
  bool v5; // al
  int v6; // eax
  bool v7; // al
  int v8; // eax
  bool v9; // al
  int v10; // eax
  bool v11; // al
  int v12; // eax
  int v14; // [esp+10h] [ebp-Ch] BYREF
  LPARAM lParam[2]; // [esp+14h] [ebp-8h] BYREF

  DialogClass::RegisterWinClasses(); /*0x62282b*/
  *(&g_MatrixTransformState + 5798) = hWnd; /*0x622836*/
  EnumChildWindows((HWND)hWnd, (WNDENUMPROC)Dialog::InitWindow, 1); /*0x622844*/
  Dialog::InitWindow((SkirmishDialog *)hWnd, 1); /*0x622849*/
  EnumChildWindows((HWND)hWnd, Dialog::SubclassEditControl, 1); /*0x622856*/
  EnumChildWindows((HWND)hWnd, Dialog::InitializeControls, 0); /*0x622861*/
  Dialog::InitializeControls((HWND)hWnd, 0); /*0x622865*/
  EnumChildWindows((HWND)hWnd, (WNDENUMPROC)Dialog::InitWindow, 0); /*0x622871*/
  Dialog::InitWindow((SkirmishDialog *)hWnd, 0); /*0x622875*/
  Dialog::GetField((HWND)hWnd); /*0x62287c*/
  lParam[0] = (LPARAM)hWnd; /*0x622890*/
  v14 = 0; /*0x622894*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622898*/
  if ( v14 ) /*0x6228a3*/
    *(_DWORD *)(v14 + 108) = a2; /*0x6228a5*/
  if ( !SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x6228ad*/
    Control::CreateControlDialog(hWnd); /*0x6228b8*/
  lParam[0] = (LPARAM)hWnd; /*0x6228cc*/
  v14 = 0; /*0x6228d0*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6228d4*/
  if ( v14 ) /*0x6228df*/
  {
    v4 = *(_DWORD *)(v14 + 108); /*0x6228e1*/
    v5 = v4 == 188 /*0x622925*/
      || v4 == 189
      || v4 == 258
      || v4 == 194
      || v4 == 201
      || v4 == 3014
      || v4 == 261
      || v4 == 107
      || v4 == 275;
    *(_BYTE *)(v14 + 213) = v5; /*0x62292a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62293f*/
  v14 = 0; /*0x622943*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622947*/
  if ( v14 ) /*0x622952*/
  {
    v6 = *(_DWORD *)(v14 + 108); /*0x622954*/
    v7 = v6 == 188 || v6 == 189 || v6 == 258 || v6 == 194 || v6 == 201 || v6 == 3014; /*0x622985*/
    *(_BYTE *)(v14 + 214) = v7; /*0x62298a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62299f*/
  v14 = 0; /*0x6229a3*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6229a7*/
  if ( v14 ) /*0x6229b2*/
  {
    v8 = *(_DWORD *)(v14 + 108); /*0x6229b4*/
    v9 = v8 == 259 || v8 == 3015; /*0x6229c9*/
    *(_BYTE *)(v14 + 215) = v9; /*0x6229ce*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x6229e3*/
  v14 = 0; /*0x6229e7*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6229eb*/
  if ( v14 ) /*0x6229f6*/
  {
    v10 = *(_DWORD *)(v14 + 108); /*0x6229f8*/
    v11 = v10 == 264 || v10 == 3014; /*0x622a0d*/
    *(_BYTE *)(v14 + 216) = v11; /*0x622a12*/
  }
  EnumChildWindows((HWND)hWnd, GadgetClass::FindByWindow, 0); /*0x622a1f*/
  if ( Control::CheckControlTypeDialog(hWnd) ) /*0x622a23*/
  {
    lParam[0] = 640; /*0x622a3d*/
    lParam[1] = 480; /*0x622a4d*/
    MoveWindow((HWND)hWnd, 0, 0, *(int *)&stru_89E138.__pad_14B0[2748], *(int *)&stru_89E138.__pad_14B0[2752], 0); /*0x622a51*/
    *(&g_MatrixTransformState + 5798) = hWnd; /*0x622a5b*/
    EnumChildWindows((HWND)hWnd, (WNDENUMPROC)RepositionDialogControls, (LPARAM)lParam); /*0x622a68*/
  }
  else
  {
    lParam[0] = (LPARAM)hWnd; /*0x622a7e*/
    v14 = 0; /*0x622a82*/
    HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622a86*/
    if ( v14 ) /*0x622a91*/
    {
      v12 = *(_DWORD *)(v14 + 108); /*0x622a97*/
      if ( v12 == 269 /*0x622b1d*/
        || v12 == 217
        || v12 == 240
        || v12 == 206
        || v12 == 288
        || v12 == 289
        || v12 == 277
        || v12 == 211
        || v12 == 207
        || v12 == 287
        || v12 == 195
        || v12 == 283
        || v12 == 225
        || v12 == 286
        || v12 == 196
        || v12 == 304
        || v12 == 208
        || v12 == 252
        || v12 == 294 )
      {
        *(_DWORD *)(v14 + 176) = 2; /*0x622b1f*/
      }
    }
  }
  EnumChildWindows((HWND)hWnd, Dialog::HandleTabKey, 0); /*0x622b30*/
  EnumChildWindows((HWND)hWnd, Dialog::DispatchEvent, 0); /*0x622b39*/
  return Dialog::RestoreParent((HWND)hWnd); /*0x622b42*/
}


// ==== 0x00622B50  BaseDialogProc  this=-  sig=csp ====
int __fastcall BaseDialogProc(void *a1, unsigned int a2, int a3, int a4)
{
  int result; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  unsigned int v10; // ebp
  int v11; // ebx
  int v12; // eax
  void *v13; // ebx
  int v14; // ebp
  LRESULT (__stdcall *v15)(HWND, UINT, WPARAM, LPARAM); // edi
  int v16; // eax
  #72 *v17; // eax
  #72 *v18; // eax
  char *v19; // eax
  #72 *v20; // eax
  unsigned __int16 v21; // bx
  BOOL (__stdcall *v22)(HWND, WNDENUMPROC, LPARAM); // edi
  #72 *StringCSF; // [esp-4h] [ebp-44h]
  void *v24; // [esp+10h] [ebp-30h] BYREF
  void *lParam; // [esp+14h] [ebp-2Ch] BYREF
  int v26; // [esp+18h] [ebp-28h]
  void *v27; // [esp+1Ch] [ebp-24h] BYREF
  void *v28; // [esp+20h] [ebp-20h] BYREF
  void *v29; // [esp+24h] [ebp-1Ch] BYREF
  _DWORD hWnd[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD Rect[4]; // [esp+30h] [ebp-10h] BYREF

  if ( a2 > 0x84 ) /*0x622b5f*/
  {
    if ( a2 > 0x497 ) /*0x622ea0*/
    {
      if ( a2 == 1260 ) /*0x6230be*/
        ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)(a1, sub_60AA60, 0); /*0x6230c8*/
      return 0; /*0x6230c8*/
    }
    if ( a2 == 1175 ) /*0x622ea6*/
    {
      ((void (__stdcall *)(void *, int, void *, int))SendMessageA)(a1, 1193, a1, 1); /*0x6230a6*/
      return 0; /*0x6230b5*/
    }
    if ( a2 != 272 ) /*0x622eb2*/
    {
      if ( a2 > 0x131 && a2 <= 0x138 ) /*0x622ec6*/
        return ((int (__stdcall *)(int))GetStockObject)(4); /*0x622edb*/
      return 0; /*0x622ec6*/
    }
    ++dword_A8ED54[14]; /*0x622eed*/
    if ( a4 ) /*0x622ef3*/
    {
      v21 = *(_WORD *)a4; /*0x622efb*/
      DialogClass::RegisterWinClasses(); /*0x622efe*/
      v22 = EnumChildWindows; /*0x622f03*/
      dword_A8ED54[54997] = (int)a1; /*0x622f09*/
      ((void (__stdcall *)(void *, int (__stdcall *)(int, int), int))EnumChildWindows)(a1, Dialog::InitWindow, 1); /*0x622f17*/
      Dialog::InitWindow((int)a1, 1); /*0x622f1c*/
      ((void (__stdcall *)(void *, int (__stdcall *)(int, int), int))EnumChildWindows)( /*0x622f29*/
        a1,
        Dialog::SubclassEditControl,
        1);
      ((void (__stdcall *)(void *, int (__stdcall *)(void *, void *), _DWORD))EnumChildWindows)( /*0x622f32*/
        a1,
        Dialog::InitializeControls,
        0);
      Dialog::InitializeControls(a1, 0); /*0x622f36*/
      ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)(a1, Dialog::InitWindow, 0); /*0x622f42*/
      Dialog::InitWindow((int)a1, 0); /*0x622f46*/
      Dialog::GetField(a1); /*0x622f4d*/
      UI_Helper_60D2C0((int)a1, v21); /*0x622f56*/
      if ( !SessionClass::GetGameSpeed(&MEMORY[0x87F7E8][536212]) ) /*0x622f60*/
        Control::CreateControlDialog(a1); /*0x622f6b*/
      UI_Helper_60CAF0(a1); /*0x622f72*/
      UI_Helper_60C930(a1); /*0x622f79*/
      UI_Helper_60CCC0(a1); /*0x622f80*/
      UI_Helper_60CDB0(a1); /*0x622f87*/
      ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)( /*0x622f93*/
        a1,
        GadgetClass::FindByWindow,
        0);
      if ( Control::CheckControlTypeDialog(a1) ) /*0x622f97*/
      {
LABEL_41:
        hWnd[0] = 640; /*0x622fa4*/
        hWnd[1] = 480; /*0x622fb4*/
        ResizeDialogAndEnum((int)a1, (int)hWnd); /*0x622fbe*/
LABEL_48:
        ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))v22)(a1, Dialog::HandleTabKey, 0); /*0x623071*/
        ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))v22)(a1, Dialog::DispatchEvent, 0); /*0x623081*/
        Dialog::RestoreParent(a1); /*0x623085*/
        ((void (__stdcall *)(void *))SetFocus)(a1); /*0x62308b*/
        return 0; /*0x62309a*/
      }
    }
    else
    {
      InitializeDialogControls((int)a1, 0); /*0x622fcc*/
      Dialog::GetField(a1); /*0x622fd3*/
      hWnd[0] = a1; /*0x622fe7*/
      a4 = 0; /*0x622feb*/
      HashTable::Get(&dword_A8ED54[52075], hWnd, &a4); /*0x622fef*/
      if ( a4 ) /*0x622ffa*/
        *(_DWORD *)(a4 + 108) = 0; /*0x622ffc*/
      if ( !SessionClass::GetGameSpeed(&MEMORY[0x87F7E8][536212]) ) /*0x623004*/
        Control::CreateControlDialog(a1); /*0x62300f*/
      UI_Helper_60CAF0(a1); /*0x623016*/
      UI_Helper_60C930(a1); /*0x62301d*/
      UI_Helper_60CCC0(a1); /*0x623024*/
      UI_Helper_60CDB0(a1); /*0x62302b*/
      v22 = EnumChildWindows; /*0x623030*/
      ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)( /*0x62303d*/
        a1,
        GadgetClass::FindByWindow,
        0);
      if ( Control::CheckControlTypeDialog(a1) ) /*0x623041*/
        goto LABEL_41; /*0x623048*/
    }
    UI_Helper_60C7D0(a1); /*0x62306c*/
    goto LABEL_48; /*0x62306c*/
  }
  if ( a2 != 132 ) /*0x622b65*/
  {
    switch ( a2 ) /*0x622b7f*/
    {
      case 2u: /*0x622b7f*/
        DialogQueue::RemoveEntry(a1); /*0x622b88*/
        --dword_A8ED54[14]; /*0x622b9b*/
        ((void (__stdcall *)(int))SetFocus)(dword_A8ED54[233983]); /*0x622ba1*/
        return 0; /*0x622bb0*/
      case 0xFu: /*0x622b7f*/
        a4 = (int)a1; /*0x622bd0*/
        if ( !dword_A8ED54[52076] ) /*0x622bd6*/
          return 0; /*0x622bd6*/
        result = *(_DWORD *)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&a4)); /*0x622bf1*/
        if ( !result ) /*0x622bf6*/
          return 0; /*0x622bf6*/
        break; /*0x622bf6*/
      case 0x14u: /*0x622b7f*/
        return 1;
      case 0x2Bu: /*0x622b7f*/
        Dialog::Resize((_DWORD *)a4); /*0x622bb7*/
        return 1; /*0x622bc8*/
      default:
        return 0;
    }
    while ( *(_DWORD *)result != a4 ) /*0x622c02*/
    {
      result = *(_DWORD *)(result + 516); /*0x622c04*/
      if ( !result ) /*0x622c0c*/
        return result; /*0x622c0c*/
    }
    v6 = result + 4; /*0x622c20*/
    if ( v6 ) /*0x622c25*/
    {
      if ( *(_BYTE *)(v6 + 188) ) /*0x622c2b*/
      {
        ((void (__stdcall *)(void *, _DWORD))ValidateRect)(a1, 0); /*0x622c38*/
        return 1; /*0x622c3e*/
      }
      else
      {
        Dialog::DrawBackground(a1); /*0x622c4f*/
        lParam = a1; /*0x622c63*/
        a4 = 0; /*0x622c67*/
        HashTable::Get(&dword_A8ED54[52075], &lParam, &a4); /*0x622c6f*/
        v7 = a4; /*0x622c74*/
        if ( a4 && *(_BYTE *)(a4 + 190) ) /*0x622c7c*/
        {
          v8 = ((int (__stdcall *)(void *, int))GetDlgItem)(a1, 1818); /*0x622c8c*/
          if ( v8 ) /*0x622c94*/
            ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v8, 1250, 0, 0); /*0x622ca0*/
          RenderGadgetClassAnimation((int)a1, 0); /*0x622caa*/
          *(_BYTE *)(v7 + 190) = 0; /*0x622caf*/
        }
        ((void (__stdcall *)(void *, _DWORD))ValidateRect)(a1, 0); /*0x622cb9*/
        return 0; /*0x622cbf*/
      }
    }
    return 0; /*0x6230d1*/
  }
  hWnd[0] = ((int (__stdcall *)(void *, int))GetDlgItem)(a1, 1685); /*0x622cd9*/
  if ( !hWnd[0] ) /*0x622cdd*/
    return 0; /*0x622cdd*/
  v9 = (unsigned __int16)a4; /*0x622cef*/
  v10 = HIWORD(a4); /*0x622cf5*/
  ((void (__stdcall *)(void *, _DWORD *))GetWindowRect)(a1, Rect); /*0x622cf8*/
  v11 = v9 - Rect[0]; /*0x622d0c*/
  v26 = v10 - Rect[1]; /*0x622d12*/
  unknown_libname_74(&a4); /*0x622d16*/
  v12 = ((int (__stdcall *)(void *, int, int, int))ChildWindowFromPointEx)(a1, v11, v26, 1); /*0x622d24*/
  v13 = (void *)v12; /*0x622d2a*/
  if ( v12 ) /*0x622d2e*/
  {
    v14 = (unsigned __int16)v9 | ((unsigned __int16)v10 << 16); /*0x622d43*/
    v15 = SendMessageA; /*0x622d45*/
    v16 = ((int (__stdcall *)(int, int, _DWORD, int))SendMessageA)(v12, 1256, 0, v14); /*0x622d54*/
    UI_Assign((#72 **)&lParam, (int)a1, (int)v13, v16); /*0x622d5e*/
    WideString::AssignFromPtr((#72 **)&v28, (const #72 **)&lParam); /*0x622d6c*/
    DeleteAndZero::Alt(&lParam); /*0x622d75*/
    WideString::Reassign_Alt((void **)&a4, (const #72 **)&v28); /*0x622d83*/
    DeleteAndZero::Alt(&v28); /*0x622d8c*/
    v17 = WideString::GetOrEmpty((#72 **)&a4); /*0x622d9a*/
    if ( !wcscmp(v17, (const #72 *)&MEMORY[0x87F7E8][8147]) ) /*0x622da0*/
    {
      unknown_libname_74(&v27); /*0x622db4*/
      lParam = v13; /*0x622dbd*/
      v26 = -1; /*0x622dca*/
      ((void (__stdcall *)(void *, int, _DWORD, void **))SendMessageA)(a1, 1257, 0, &lParam); /*0x622dd2*/
      WideString::AssignFromPtr((#72 **)&v29, (const #72 **)&v27); /*0x622ddd*/
      DeleteAndZero::Alt(&v27); /*0x622de6*/
      WideString::Reassign_Alt((void **)&a4, (const #72 **)&v29); /*0x622df4*/
      DeleteAndZero::Alt(&v29); /*0x622dfd*/
      v18 = WideString::GetOrEmpty((#72 **)&a4); /*0x622e0b*/
      if ( !wcscmp(v18, (const #72 *)&MEMORY[0x87F7E8][8147]) ) /*0x622e11*/
      {
        v19 = DlgSkirmishMenuProc((int)a1, (int)v13); /*0x622e21*/
        if ( v19 ) /*0x622e28*/
        {
          StringCSF = GetStringCSF((#72 *)v19, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x622e3d*/
          WideString::Assign((#72 **)&v24, StringCSF); /*0x622e3e*/
        }
        else
        {
          WideString::Assign((#72 **)&v24, (#72 *)&MEMORY[0x87F7E8][8147]); /*0x622e49*/
        }
        WideString::Reassign_Alt((void **)&a4, (const #72 **)&v24); /*0x622e57*/
        DeleteAndZero::Alt(&v24); /*0x622e60*/
      }
    }
  }
  else
  {
    v15 = SendMessageA; /*0x622e67*/
  }
  v20 = WideString::GetOrEmpty_Alt((#72 **)&a4); /*0x622e71*/
  ((void (__stdcall *)(_DWORD, int, _DWORD, #72 *))v15)(hWnd[0], 1202, 0, v20); /*0x622e83*/
  DeleteAndZero::Alt((void **)&a4); /*0x622e89*/
  return 0; /*0x622ba9*/
}


// ==== 0x00623120  Dialog::PumpMessages  this=Dialog  sig=csp ====
char Dialog_PumpMessages()
{
  MessageLoop(); /*0x623120*/
  if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 || MEMORY[0xA8D60E] || MEMORY[0xA8DAB4] ) /*0x623143*/
  {
    Event::Dispatch(); /*0x62315a*/
  }
  else if ( !(unsigned __int8)VtableStub::55CBF0() && GameFrameLoop() ) /*0x62314e*/
  {
    return 1; /*0x623159*/
  }
  return 0; /*0x623159*/
}


// ==== 0x00623170  UI_Connect  this=AbstractClass  sig=csp ====
BOOL __fastcall UI_Connect(HWND hWnd, LONG a2, LONG a3)
{
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-20h] BYREF
  struct tagPOINT Point; // [esp+1Ch] [ebp-10h] BYREF
  struct tagPOINT v10; // [esp+24h] [ebp-8h] BYREF

  v10 = *(struct tagPOINT *)&MEMORY[0x8A00A4]; /*0x623185*/
  Point.x = 0; /*0x623198*/
  Point.y = 0; /*0x6231a2*/
  ClientToScreen(g_hWnd, &Point); /*0x6231ae*/
  ClientToScreen(g_hWnd, &v10); /*0x6231bc*/
  GetWindowRect(hWnd, &Rect); /*0x6231c4*/
  Rect.right -= Rect.left; /*0x6231d8*/
  Rect.bottom -= Rect.top; /*0x6231e5*/
  if ( a2 == -1 ) /*0x6231e9*/
    v5 = Rect.left - Point.x; /*0x6231eb*/
  else
    v5 = a2; /*0x6231f1*/
  Rect.left = v5; /*0x6231f7*/
  if ( a3 == -1 ) /*0x6231fe*/
    v6 = Rect.top - Point.y; /*0x623200*/
  else
    v6 = a3; /*0x623206*/
  Rect.top = v6; /*0x623217*/
  return MoveWindow(hWnd, v5, v6, Rect.right, Rect.bottom, 0); /*0x623221*/
}


// ==== 0x00623230  CreateMessageBox  this=AbstractClass  sig=ida-proto ====
HWND __fastcall CreateMessageBox(LPARAM lParam, LPARAM a2, LONG dwNewLong)
{
  HWND Dialog; // esi
  HWND DlgItem; // eax
  HWND v7; // edi

  Dialog = (HWND)CreateDialog(0xF0u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_6232B0, 0); /*0x623249*/
  if ( Dialog ) /*0x62324d*/
  {
    SetWindowLongA(Dialog, 8, dwNewLong); /*0x623257*/
    DlgItem = GetDlgItem(Dialog, 1456); /*0x623269*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62327a*/
    if ( a2 ) /*0x62327e*/
    {
      v7 = GetDlgItem(Dialog, 1472); /*0x623288*/
      SendMessageA(v7, 0x4B2u, 0, a2); /*0x623293*/
      EnableWindow(v7, 1); /*0x623298*/
      ShowWindow(v7, 5); /*0x6232a1*/
    }
  }
  return Dialog; /*0x6232a9*/
}


// ==== 0x006232B0  sub_6232B0  this=-  sig=csp ====
int __stdcall sub_6232B0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _BYTE *WindowLongA; // esi

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x6232c9*/
  if ( !result ) /*0x6232d0*/
  {
    if ( a2 == 273 && a3 == 1472 ) /*0x6232e0*/
    {
      WindowLongA = (_BYTE *)GetWindowLongA(hWnd, 8); /*0x6232eb*/
      if ( WindowLongA ) /*0x6232ef*/
      {
        EventBuffer::Enqueue(MEMORY[0x87F770], 27); /*0x6232f9*/
        *WindowLongA = 1; /*0x6232fe*/
      }
    }
    return 0; /*0x623301*/
  }
  return result; /*0x623303*/
}


// ==== 0x00623310  Network_Start  this=AbstractClass  sig=csp ====
BOOL __fastcall Network_Start(HWND hWnd, LPARAM lParam)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem(hWnd, 1456); /*0x62331c*/
  SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62332b*/
  return UpdateWindow(hWnd); /*0x623338*/
}


// ==== 0x00623340  DialogControl::Constructor  this=DialogControl  sig=csp ====
_DWORD *__thiscall DialogControl::Constructor(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  memset(this, 0, 0x200u); /*0x62334d*/
  *(this + 26) = 11; /*0x62334f*/
  *(this + 25) = MEMORY[0x87F7E8][29498]; /*0x62335d*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  *(this + 15) = v3; /*0x623379*/
  this->__pad_010 = 0; /*0x62337c*/
  *(this + 23) = 0; /*0x62337f*/
  *(this + 36) = -1; /*0x623382*/
  return this; /*0x62338e*/
}


// ==== 0x006233A0  Dialog::CleanupTree  this=Dialog  sig=csp ====
void __thiscall Dialog_CleanupTree(int this)
{
  _DWORD *i; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  void **v5; // esi

  if ( *(_DWORD *)(this + 40) ) /*0x6233a3*/
  {
    __3_YAXPAX_Z(*(void **)(this + 40)); /*0x6233ab*/
    *(_DWORD *)(this + 40) = 0; /*0x6233b3*/
  }
  for ( i = *(_DWORD **)(this + 52); i; i = *(_DWORD **)(this + 52) ) /*0x6233bf*/
  {
    v3 = i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (_DWORD *)*v3; /*0x6233cf*/
      if ( !v3 ) /*0x6233d3*/
        goto LABEL_12; /*0x6233d3*/
    }
    if ( v4 ) /*0x6233dd*/
      *v4 = *v3; /*0x6233e1*/
    else
      *(_DWORD *)(this + 52) = *v3; /*0x6233e7*/
    __3_YAXPAX_Z(v3); /*0x6233eb*/
LABEL_12:
    ; /*0x6233f3*/
  }
  v5 = *(void ***)(this + 60); /*0x6233fa*/
  if ( v5 ) /*0x6233ff*/
  {
    DeleteAndZero::Alt(v5); /*0x623403*/
    __3_YAXPAX_Z(v5); /*0x623409*/
  }
}


// ==== 0x00623460  LinkedList::Remove  this=LinkedList  sig=csp ====
void __thiscall LinkedList_Remove(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edx

  v2 = (_DWORD *)this->q034; /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( v2 ) /*0x623468*/
  {
    while ( a2 != v2 ) /*0x623470*/
    {
      v3 = v2; /*0x623472*/
      v2 = (_DWORD *)*v2; /*0x623474*/
      if ( !v2 ) /*0x623478*/
        return; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *v2; /*0x623489*/
    else
      this->q034 = *v2; /*0x62349a*/
    __3_YAXPAX_Z(v2); /*0x62348b*/
  }
}


// ==== 0x006234B0  SymbolTable::Rebuild  this=CampaignClass  sig=csp ====
void __thiscall SymbolTable_Rebuild(_DWORD *this, int **a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  int **j; // esi
  size_t v7; // eax
  char *v8; // eax

  for ( i = (_DWORD *)this->q0D0; i; i = (_DWORD *)this->q0D0 ) /*0x6234b9*/
  {
    v4 = i; /*0x6234bb*/
    v5 = 0; /*0x6234bd*/
    while ( i != v4 ) /*0x6234c5*/
    {
      v5 = v4; /*0x6234c7*/
      v4 = (_DWORD *)*v4; /*0x6234c9*/
      if ( !v4 ) /*0x6234cd*/
        goto LABEL_10; /*0x6234cd*/
    }
    if ( v5 ) /*0x6234d7*/
      *v5 = *v4; /*0x6234db*/
    else
      this->q0D0 = *v4; /*0x6234e1*/
    __3_YAXPAX_Z(v4); /*0x6234e5*/
LABEL_10:
    ; /*0x6234ed*/
  }
  for ( j = a2; j; j = (int **)*j ) /*0x6234fa*/
  {
    v7 = wcslen((const wchar_t *)j[2]); /*0x623500*/
    v8 = (char *)__2_YAPAXI_Z(2 * v7 + 18); /*0x62350a*/
    if ( v8 ) /*0x623514*/
    {
      *((_DWORD *)v8 + 2) = v8 + 16; /*0x623519*/
      *(_DWORD *)v8 = this->q0D0; /*0x62351f*/
      *((_DWORD *)v8 + 1) = 0; /*0x623521*/
      this->q0D0 = v8; /*0x623528*/
    }
    *((_DWORD *)v8 + 3) = j[3]; /*0x62352e*/
    *((_DWORD *)v8 + 1) = j[1]; /*0x623534*/
    wcscpy(*((wchar_t **)v8 + 2), (const wchar_t *)j[2]); /*0x62353f*/
  }
}


// ==== 0x00623560  GadgetClass::SetTooltip  this=CampaignClass  sig=csp ====
void __thiscall GadgetClass::SetTooltip(void **this, #72 *String)
{
  int v3; // eax
  void *v4; // eax

  if ( this->scenario ) /*0x623564*/
  {
    __3_YAXPAX_Z(this->scenario); /*0x62356c*/
    this->scenario = 0; /*0x623574*/
  }
  if ( String ) /*0x623581*/
  {
    if ( *(_WORD *)String ) /*0x623583*/
    {
      v3 = wcslen(String); /*0x62358a*/
      v4 = (void *)__2_YAPAXI_Z(2 * v3 + 2); /*0x623594*/
      this->scenario = v4; /*0x62359b*/
      wcscpy((#72 *)v4, String); /*0x62359e*/
    }
  }
}


// ==== 0x006235B0  ObjectClass::method_6235B0  this=ObjectClass  sig=csp ====
void __thiscall sub_6235B0(void **this, wchar_t *Format)
{
  wchar_t *v3; // eax

  if ( this->owningHouseIndex ) /*0x6235b4*/
  {
    __3_YAXPAX_Z(this->owningHouseIndex); /*0x6235bc*/
    this->owningHouseIndex = 0; /*0x6235c4*/
  }
  if ( Format ) /*0x6235d1*/
  {
    if ( *(_BYTE *)Format ) /*0x6235d3*/
    {
      v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2); /*0x6235ea*/
      this->owningHouseIndex = v3; /*0x6235f6*/
      swprintf(v3, (const size_t)MEMORY[0x835874], Format); /*0x6235f9*/
    }
  }
}


// ==== 0x00623610  DialogClass::CopyTemplateStruct  this=CampaignClass  sig=csp ====
_DWORD *__thiscall DialogClass::CopyTemplateStruct(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  void *v4; // eax
  const #72 *v6; // esi
  int v7; // eax
  #72 *v8; // eax
  _DWORD *v9; // ecx
  int **i; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = this->q0D0; /*0x62361c*/
  v4 = (void *)this->scenario; /*0x62361f*/
  v15 = this->q03C; /*0x623624*/
  if ( this == a2 ) /*0x623628*/
    return this; /*0x62362a*/
  qmemcpy(this, a2, 0x200u); /*0x62363d*/
  this->scenario = v4; /*0x623645*/
  this->q03C = v15; /*0x623648*/
  this->q0D0 = v3; /*0x62364b*/
  v6 = (const #72 *)a2[10]; /*0x62364e*/
  if ( v4 ) /*0x623653*/
  {
    __3_YAXPAX_Z(v4); /*0x623656*/
    this->scenario = 0; /*0x62365e*/
  }
  if ( v6 && *(_WORD *)v6 ) /*0x623665*/
  {
    v7 = wcslen(v6); /*0x62366b*/
    v8 = (#72 *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623675*/
    this->scenario = v8; /*0x62367c*/
    wcscpy(v8, v6); /*0x62367f*/
  }
  v9 = (_DWORD *)this->q0D0; /*0x623687*/
  for ( i = (int **)a2[13]; v9; v9 = (_DWORD *)this->q0D0 ) /*0x62368f*/
  {
    v11 = v9; /*0x623691*/
    v12 = 0; /*0x623693*/
    while ( v9 != v11 ) /*0x62369b*/
    {
      v12 = v11; /*0x62369d*/
      v11 = (_DWORD *)*v11; /*0x62369f*/
      if ( !v11 ) /*0x6236a3*/
        goto LABEL_17; /*0x6236a3*/
    }
    if ( v12 ) /*0x6236ad*/
      *v12 = *v11; /*0x6236b1*/
    else
      this->q0D0 = *v11; /*0x6236b7*/
    __3_YAXPAX_Z(v11); /*0x6236bb*/
LABEL_17:
    ; /*0x6236c3*/
  }
  for ( ; i; i = (int **)*i ) /*0x6236cc*/
  {
    v13 = wcslen((const #72 *)i[2]); /*0x6236d2*/
    v14 = __2_YAPAXI_Z(2 * v13 + 18); /*0x6236dc*/
    if ( v14 ) /*0x6236e6*/
    {
      *(_DWORD *)(v14 + 8) = v14 + 16; /*0x6236eb*/
      *(_DWORD *)v14 = this->q0D0; /*0x6236f1*/
      *(_DWORD *)(v14 + 4) = 0; /*0x6236f3*/
      this->q0D0 = v14; /*0x6236f6*/
    }
    *(_DWORD *)(v14 + 12) = i[3]; /*0x6236fc*/
    *(_DWORD *)(v14 + 4) = i[1]; /*0x623702*/
    wcscpy(*(#72 **)(v14 + 8), (const #72 *)i[2]); /*0x62370d*/
  }
  return this; /*0x62362c*/
}


// ==== 0x00623730  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_623730(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  void *v4; // eax
  int v5; // ebp
  const wchar_t *v6; // esi
  size_t v7; // eax
  wchar_t *v8; // eax
  _DWORD *v9; // ecx
  int **i; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  size_t v13; // eax
  char *v14; // eax

  v3 = this->attachedTag; /*0x623741*/
  v4 = (void *)this->owningHouseIndex; /*0x623744*/
  v5 = this->ambientSoundController; /*0x623747*/
  qmemcpy(this, a2, 0x200u); /*0x62374a*/
  this->ambientSoundController = v5; /*0x623750*/
  this->owningHouseIndex = v4; /*0x623755*/
  this->attachedTag = v3; /*0x623758*/
  v6 = (const wchar_t *)a2[10]; /*0x62375b*/
  if ( v4 ) /*0x623760*/
  {
    __3_YAXPAX_Z(v4); /*0x623763*/
    this->owningHouseIndex = 0; /*0x62376b*/
  }
  if ( v6 && *v6 ) /*0x623772*/
  {
    v7 = wcslen(v6); /*0x623778*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623782*/
    this->owningHouseIndex = v8; /*0x623789*/
    wcscpy(v8, v6); /*0x62378c*/
  }
  v9 = (_DWORD *)this->attachedTag; /*0x623794*/
  for ( i = (int **)a2[13]; v9; v9 = (_DWORD *)this->attachedTag ) /*0x62379c*/
  {
    v11 = v9; /*0x62379e*/
    v12 = 0; /*0x6237a0*/
    while ( v9 != v11 ) /*0x6237a8*/
    {
      v12 = v11; /*0x6237aa*/
      v11 = (_DWORD *)*v11; /*0x6237ac*/
      if ( !v11 ) /*0x6237b0*/
        goto LABEL_15; /*0x6237b0*/
    }
    if ( v12 ) /*0x6237ba*/
      *v12 = *v11; /*0x6237be*/
    else
      this->attachedTag = *v11; /*0x6237c4*/
    __3_YAXPAX_Z(v11); /*0x6237c8*/
LABEL_15:
    ; /*0x6237d0*/
  }
  for ( ; i; i = (int **)*i ) /*0x6237d9*/
  {
    v13 = wcslen((const wchar_t *)i[2]); /*0x6237df*/
    v14 = (char *)__2_YAPAXI_Z(2 * v13 + 18); /*0x6237e9*/
    if ( v14 ) /*0x6237f3*/
    {
      *((_DWORD *)v14 + 2) = v14 + 16; /*0x6237f8*/
      *(_DWORD *)v14 = this->attachedTag; /*0x6237fe*/
      *((_DWORD *)v14 + 1) = 0; /*0x623800*/
      this->attachedTag = v14; /*0x623803*/
    }
    *((_DWORD *)v14 + 3) = i[3]; /*0x623809*/
    *((_DWORD *)v14 + 1) = i[1]; /*0x62380f*/
    wcscpy(*((wchar_t **)v14 + 2), (const wchar_t *)i[2]); /*0x62381a*/
  }
  return this; /*0x623828*/
}


// ==== 0x00623840  ListBox::Clear  this=MultiplayerGameMode  sig=csp ====
int __thiscall ListBox::Clear(HWND hWnd)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA(hWnd, 0x146u, 0, 0); /*0x623855*/
  v3 = v2 - 1; /*0x623859*/
  if ( v2 ) /*0x62385c*/
  {
    do /*0x62386e*/
      SendMessageA(hWnd, 0x144u, v3, 0); /*0x623867*/
    while ( v3-- ); /*0x62386e*/
  }
  return 0; /*0x623870*/
}


// ==== 0x00623880  DrawTextRendererMultiline  this=AbstractClass  sig=csp ====
char __fastcall DrawTextRendererMultiline(
        IUnknown *aP0,
        int *a1,
        wchar_t *String,
        ObjectClass *aP3,
        _DWORD *a4,
        int ecx0,
        signed int *a6,
        int a8,
        int a9,
        int a10,
        int a11)
{
  wchar_t *v11; // edi
  int v12; // ebx
  signed int v14; // eax
  int v15; // ebp
  signed int v16; // edx
  wchar_t *v17; // edi
  int i; // ecx
  int v19; // eax
  signed int v20; // edi
  signed int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  bool v25; // sf
  int v26; // edx
  CampaignScore *v27; // edi
  int v28; // ebp
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int *v33; // ebp
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  char result; // al
  int v46; // edi
  int v47; // ecx
  int v48; // edx
  int v49; // [esp+10h] [ebp-1030h]
  int v50; // [esp+14h] [ebp-102Ch]
  int v51; // [esp+14h] [ebp-102Ch]
  int v52; // [esp+18h] [ebp-1028h] BYREF
  int v53; // [esp+1Ch] [ebp-1024h]
  int v54; // [esp+20h] [ebp-1020h] BYREF
  ObjectClass *v55; // [esp+24h] [ebp-101Ch]
  char *v56; // [esp+28h] [ebp-1018h]
  int *a7; // [esp+2Ch] [ebp-1014h]
  _DWORD v58[4]; // [esp+30h] [ebp-1010h] BYREF
  wchar_t Destination[2048]; // [esp+40h] [ebp-1000h] BYREF

  a7 = &aP0->field_0; /*0x62388a*/
  v54 = -1; /*0x62388e*/
  v11 = String; /*0x62389a*/
  v12 = 0; /*0x6238a1*/
  v49 = 0; /*0x6238a7*/
  v52 = 0; /*0x6238ab*/
  if ( !String ) /*0x6238af*/
    v11 = (wchar_t *)&stru_87C374.__pad_579C[23588]; /*0x6238b1*/
  v14 = wcslen(v11); /*0x6238b7*/
  v15 = (int)aP3; /*0x6238bc*/
  if ( (int)aP3 < 0 || (int)aP3 > v14 ) /*0x6238cc*/
    v15 = 0; /*0x6238ce*/
  if ( a8 ) /*0x6238d9*/
  {
    ProcessCompositionIME(); /*0x6238db*/
    v49 = dword_B73564; /*0x6238eb*/
    v52 = dword_B7356C; /*0x6238ef*/
    v12 = dword_B73564; /*0x6238f3*/
  }
  Destination[0] = 0; /*0x623900*/
  wcsncpy(Destination, v11, (DropListClass *)0x800); /*0x623907*/
  if ( v12 ) /*0x623911*/
  {
    wcsncpy(&Destination[v15], WideCharStr, (DropListClass *)(2048 - v15)); /*0x623925*/
    wcsncpy(&Destination[v12 + v15], &v11[v15], (DropListClass *)(2048 - v12 - v15)); /*0x623940*/
  }
  Destination[2047] = 0; /*0x62394c*/
  v16 = wcslen(Destination); /*0x62395c*/
  v50 = v16; /*0x623968*/
  if ( a9 && v16 > 0 ) /*0x623972*/
  {
    memset32(Destination, 2752554, (unsigned int)v16 >> 1); /*0x623981*/
    v17 = &Destination[2 * ((unsigned int)v16 >> 1)]; /*0x623981*/
    for ( i = v16 & 1; i; --i ) /*0x623983*/
      *v17++ = 42; /*0x623985*/
  }
  if ( v52 || v12 ) /*0x623992*/
  {
    v56 = (char *)(v15 + MaxCount); /*0x6239a4*/
    v19 = v15 + MaxCount; /*0x6239a8*/
  }
  else
  {
    v19 = v15; /*0x623994*/
    v56 = (char *)v15; /*0x623996*/
  }
  if ( v19 < *a6 + 5 ) /*0x6239b8*/
  {
    if ( v19 < 5 ) /*0x6239bd*/
      *a6 = 0; /*0x6239c6*/
    else
      *a6 = v19 - 5; /*0x6239c2*/
  }
  if ( *a6 < v16 ) /*0x6239ce*/
  {
    do /*0x623a03*/
    {
      v20 = *a6; /*0x6239d0*/
      if ( MessageListClass::CountCharsInWidth(a4, &Destination[*a6], a1[2] - 5, 0, 0) >= (int)&v56[-v20] ) /*0x6239f8*/
        break; /*0x6239f8*/
      v21 = v20 + 1; /*0x6239fe*/
      *a6 = v21; /*0x623a01*/
    }
    while ( v21 < v50 ); /*0x623a03*/
    v16 = v50; /*0x623a05*/
  }
  v22 = v15 - *a6; /*0x623a0d*/
  v23 = v49; /*0x623a0f*/
  v51 = v22 < 0 ? 0 : v22;
  v24 = v49; /*0x623a22*/
  if ( v22 < 0 )
  {
    v25 = v49 + v22 < 0; /*0x623a2c*/
    v22 += v49; /*0x623a2c*/
    v24 = v25 ? 0 : v22;
    v49 = v24; /*0x623a39*/
  }
  v26 = v16 - v23 - v15; /*0x623a3f*/
  v52 = v26; /*0x623a43*/
  if ( v22 < 0 ) /*0x623a47*/
  {
    v26 += v22; /*0x623a49*/
    v52 = v26; /*0x623a4b*/
  }
  if ( v26 < 0 ) /*0x623a51*/
    v52 = 0; /*0x623a53*/
  v27 = (CampaignScore *)&Destination[*a6]; /*0x623a5d*/
  if ( a10 ) /*0x623a6a*/
  {
    v28 = a1[3] + 2; /*0x623a79*/
    v29 = Text::MeasureWidth(v27, 0); /*0x623a7c*/
    v30 = *a1 - 1; /*0x623a89*/
    v31 = a1[1] - 1; /*0x623a8a*/
    v58[2] = v29 + 5; /*0x623a8b*/
    v58[1] = v31; /*0x623a8f*/
    v58[0] = v30; /*0x623a97*/
    v32 = *a7; /*0x623a9f*/
    v58[3] = v28; /*0x623aa4*/
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v32 + 20))(a7, v58, 0); /*0x623aa8*/
    v24 = v49; /*0x623aab*/
  }
  if ( v51 ) /*0x623ab5*/
  {
    v33 = a7; /*0x623abe*/
    v34 = DrawTextRendererTextAligned(ecx0, a4, (ObjectClass *)a1, (unsigned __int16 *)v27, v51, 0, 0, a7, a11); /*0x623ad9*/
    v35 = a1[2] - v34; /*0x623ae5*/
    *a1 += v34; /*0x623ae7*/
    a1[2] = v35; /*0x623ae9*/
    if ( v35 < 0 ) /*0x623aec*/
      a1[2] = 0; /*0x623aee*/
    v24 = v49; /*0x623af9*/
    v27 = (CampaignScore *)((char *)v27 + 2 * v51); /*0x623afd*/
  }
  else
  {
    v33 = a7; /*0x623b02*/
  }
  if ( v24 ) /*0x623b08*/
  {
    v36 = v51 + *a6; /*0x623b14*/
    v37 = (int)&v56[-v36]; /*0x623b1a*/
    if ( (int)&v56[-v36] < 0 || v37 > v24 ) /*0x623b20*/
    {
      v38 = -1; /*0x623b2e*/
    }
    else
    {
      v38 = v24 - v37; /*0x623b24*/
      v24 = (int)&v56[-v36]; /*0x623b26*/
      v49 = (int)&v56[-v36]; /*0x623b28*/
    }
    if ( v24 > 0 ) /*0x623b33*/
    {
      v39 = DrawTextRendererTextAligned( /*0x623b52*/
              (int)*(&g_MatrixTransformState + 5634),
              a4,
              (ObjectClass *)a1,
              (unsigned __int16 *)v27,
              v24,
              0,
              0,
              v33,
              a11);
      v40 = a1[2] - v39; /*0x623b5e*/
      *a1 += v39; /*0x623b60*/
      a1[2] = v40; /*0x623b62*/
      if ( v40 < 0 ) /*0x623b65*/
        a1[2] = 0; /*0x623b67*/
      v27 = (CampaignScore *)((char *)v27 + 2 * v49); /*0x623b72*/
    }
    if ( v38 >= 0 ) /*0x623b77*/
    {
      v54 = *a1; /*0x623b7b*/
      if ( v38 ) /*0x623b7f*/
      {
        v41 = DrawTextRendererTextAligned( /*0x623b9e*/
                (int)*(&g_MatrixTransformState + 5634),
                a4,
                (ObjectClass *)a1,
                (unsigned __int16 *)v27,
                v38,
                0,
                0,
                v33,
                a11);
        v42 = a1[2] - v41; /*0x623baa*/
        *a1 += v41; /*0x623bac*/
        a1[2] = v42; /*0x623bae*/
        if ( v42 < 0 ) /*0x623bb1*/
          a1[2] = 0; /*0x623bb3*/
        v27 = (CampaignScore *)((char *)v27 + 2 * v38); /*0x623bba*/
      }
    }
  }
  else
  {
    v54 = *a1; /*0x623bc1*/
  }
  if ( v52 ) /*0x623bcb*/
  {
    v43 = DrawTextRendererTextAligned(ecx0, a4, (ObjectClass *)a1, (unsigned __int16 *)v27, v52, 0, 0, v33, a11); /*0x623beb*/
    v44 = a1[2] - v43; /*0x623bf7*/
    *a1 += v43; /*0x623bf9*/
    a1[2] = v44; /*0x623bfb*/
    if ( v44 < 0 ) /*0x623bfe*/
      a1[2] = 0; /*0x623c00*/
  }
  result = 0; /*0x623c0e*/
  if ( !a8 || (v46 = v54, v54 <= 0) || *(&g_MatrixTransformState + 5806) ) /*0x623c2a*/
  {
    *(&g_MatrixTransformState + 5806) = 0; /*0x623cb7*/
  }
  else
  {
    v47 = a1[3]; /*0x623c33*/
    v53 = a1[1]; /*0x623c36*/
    v55 = (ObjectClass *)(v53 + v47 - 2); /*0x623c4d*/
    v52 = v54; /*0x623c5c*/
    DrawSurfaceLineAlpha((int)v33, &v52, &v54, *((__int16 *)&g_MatrixTransformState + 5406), 0xFFu); /*0x623c60*/
    v48 = a1[3]; /*0x623c68*/
    v53 = a1[1]; /*0x623c6e*/
    v54 = v46 + 1; /*0x623c72*/
    v52 = v46 + 1; /*0x623c76*/
    v55 = (ObjectClass *)(v53 + v48 - 2); /*0x623c8d*/
    result = DrawSurfaceLineAlpha((int)v33, &v52, &v54, *((__int16 *)&g_MatrixTransformState + 5406), 0xFFu); /*0x623c98*/
    *(&g_MatrixTransformState + 5806) = 0; /*0x623c9d*/
  }
  return result; /*0x623ca7*/
}


// ==== 0x00623CD0  CD::CreateDialog  this=CD  sig=csp ====
BOOL __thiscall CD::CreateDialog(LPARAM lParam)
{
  ObjectClass *Dialog; // eax
  ObjectClass *v3; // esi
  HWND DlgItem; // eax
  LONG dwNewLong; // [esp+8h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x623ce1*/
  Dialog = (ObjectClass *)CreateDialog(0x10Du, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_623DA0, 0); /*0x623ce9*/
  v3 = Dialog; /*0x623cee*/
  if ( Dialog ) /*0x623cf2*/
  {
    DlgItem = GetDlgItem((HWND)Dialog, 1456); /*0x623cfe*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x623d0d*/
    SetWindowLongA((HWND)v3, 8, (LONG)&dwNewLong); /*0x623d1b*/
    ShowWindow((HWND)v3, 1); /*0x623d24*/
    SetForegroundWindow((HWND)v3); /*0x623d2b*/
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x623d37*/
    if ( dwNewLong < 0 ) /*0x623d42*/
    {
      do /*0x623d81*/
        MessageLoop(); /*0x623d44*/
      while ( (!MEMORY[0xA8B238][0] /*0x623d81*/
            || MEMORY[0xA8B238][0] == 5
            || MEMORY[0xA8D60E]
            || MEMORY[0xA8DAB4]
            || VtableStub::Method_55CBF0()
            || !GameFrameLoop())
           && dwNewLong < 0 );
    }
    Dialog::Destroy((HWND)v3); /*0x623d85*/
  }
  return dwNewLong == 1473; /*0x623d96*/
}


// ==== 0x00623DA0  sub_623DA0  this=-  sig=csp ====
int __stdcall sub_623DA0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x623db9*/
  if ( !result ) /*0x623dc0*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x623dc5*/
    if ( a2 == 273 && (unsigned __int16)a3 >= 0x5C0u && (unsigned __int16)a3 <= 0x5C1u ) /*0x623de7*/
      *WindowLongA = (unsigned __int16)a3; /*0x623de9*/
    return 0; /*0x623deb*/
  }
  return result; /*0x623ded*/
}


// ==== 0x00623E00  ObjectClass::Memory_Pop  this=ObjectClass  sig=csp ====
int __thiscall Memory_Pop(HWND hWnd)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x623e15*/
  v3 = v2 - 1; /*0x623e19*/
  if ( v2 ) /*0x623e1c*/
  {
    do /*0x623e2e*/
      SendMessageA(hWnd, 0x182u, v3, 0); /*0x623e27*/
    while ( v3-- ); /*0x623e2e*/
  }
  return 0; /*0x623e30*/
}


// ==== 0x00623E40  GetDialogText  this=rc_ptr  sig=csp ====
AbstractClass *__fastcall GetDialogText(HWND hWnd, void **a2)
{
  LRESULT v4; // edi
  CCINIClass *v6; // esi
  AbstractClass *v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623e54*/
  if ( v4 > 0 ) /*0x623e58*/
  {
    v6 = (CCINIClass *)__2_YAPAXI_Z(v4 + 2); /*0x623e74*/
    v7 = (AbstractClass *)SendMessageA(hWnd, 0x4B5u, v4 + 1, (LPARAM)v6); /*0x623e87*/
    String::Assign_Alt(a2, v6); /*0x623e8a*/
    __3_YAXPAX_Z(v6); /*0x623e90*/
    return v7; /*0x623e98*/
  }
  else
  {
    DeleteAndZero::Alt2(a2); /*0x623e5c*/
    return 0; /*0x623e61*/
  }
}


// ==== 0x00623EA0  GetEditControlText  this=-  sig=csp ====
LRESULT __fastcall GetEditControlText(HWND hWnd, void **a2)
{
  LRESULT v4; // edi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623eb4*/
  if ( v4 > 0 ) /*0x623eb8*/
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 4); /*0x623ed5*/
    v7 = SendMessageA(hWnd, 0x4B3u, v4 + 1, (LPARAM)v6); /*0x623ee8*/
    WideString::Assign_Alt(a2, v6); /*0x623eeb*/
    __3_YAXPAX_Z(v6); /*0x623ef1*/
    return v7; /*0x623ef9*/
  }
  else
  {
    SafeDelete::Ptr(a2); /*0x623ebc*/
    return 0; /*0x623ec1*/
  }
}


// ==== 0x00623F00  GetListBoxItemText  this=ObjectClass  sig=csp ====
LRESULT __fastcall GetListBoxItemText(ObjectClass *aP0, WPARAM wParam, void **a2)
{
  LRESULT v5; // esi
  CCINIClass *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA((HWND)aP0, 0x18Au, wParam, 0); /*0x623f19*/
  if ( v5 <= 0 ) /*0x623f1d*/
    DeleteAndZero::Alt2(a2); /*0x623f23*/
  v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2); /*0x623f34*/
  v7 = SendMessageA((HWND)aP0, 0x4B7u, wParam, (LPARAM)v6); /*0x623f40*/
  String::Assign_Alt(a2, v6); /*0x623f47*/
  __3_YAXPAX_Z(v6); /*0x623f4d*/
  return v7; /*0x623f57*/
}


// ==== 0x00623F60  UI_Assign_623F60  this=CampaignScore  sig=csp ====
LRESULT __fastcall UI_Assign_623F60(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x18Au, wParam, 0); /*0x623f79*/
  if ( v5 <= 0 ) /*0x623f7d*/
    SafeDelete::Ptr(a3); /*0x623f83*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4); /*0x623f95*/
  v7 = SendMessageA(hWnd, 0x4B6u, wParam, (LPARAM)v6); /*0x623fa1*/
  WideString::Assign_Alt(a3, v6); /*0x623fa8*/
  __3_YAXPAX_Z(v6); /*0x623fae*/
  return v7; /*0x623fb8*/
}


// ==== 0x00623FC0  OptionsDlgProcWOL_Assign  this=-  sig=csp ====
LRESULT __fastcall OptionsDlgProcWOL_Assign(ObjectClass *aP0, WPARAM wParam, void **a2)
{
  LRESULT v5; // esi
  CCINIClass *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA((HWND)aP0, 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    DeleteAndZero::Alt2(a2); /*0x623fe3*/
  v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2); /*0x623ff4*/
  v7 = SendMessageA((HWND)aP0, 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  String::Assign_Alt(a2, v6); /*0x624007*/
  __3_YAXPAX_Z(v6); /*0x62400d*/
  return v7; /*0x624017*/
}


// ==== 0x00624020  MainLobbyDlgProcWOL_Assign  this=-  sig=csp ====
LRESULT __fastcall MainLobbyDlgProcWOL_Assign(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x149u, wParam, 0); /*0x624039*/
  if ( v5 <= 0 ) /*0x62403d*/
    SafeDelete::Ptr(a3); /*0x624043*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4); /*0x624055*/
  v7 = SendMessageA(hWnd, 0x4C3u, wParam, (LPARAM)v6); /*0x624061*/
  WideString::Assign_Alt(a3, v6); /*0x624068*/
  __3_YAXPAX_Z(v6); /*0x62406e*/
  return v7; /*0x624078*/
}


// ==== 0x00624080  ObjectClass::method  this=DialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall sub_624080(DialogControl_OwnerDraw *this)
{
  this->vfptr = &vt_OwnerDraw_DialogControl; /*0x624082*/
  return &this->vfptr; /*0x624088*/
}


// ==== 0x00624090  DialogControl@OwnerDraw::method  this=DialogControl@OwnerDraw  sig=csp ====
void __thiscall sub_624090(DialogControl_OwnerDraw *this)
{
  this->vfptr = &vt_OwnerDraw_DialogControl; /*0x624090*/
}


// ==== 0x00624110  SimpleDialogControl::Constructor  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall SimpleDialogControl_Constructor(_DWORD *this)
{
  *(this + 1) = 0; /*0x624114*/
  *((_BYTE *)this + 8) = 0; /*0x624117*/
  *this = &OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
  return this; /*0x624120*/
}


// ==== 0x00624130  OwnerDrawControl::InitVtable  this=DialogControl@OwnerDraw  sig=csp ====
void __thiscall OwnerDrawControl::InitVtable(DialogControl_OwnerDraw *this)
{
  this->vfptr = &OwnerDraw::DialogControl::`vftable'; /*0x624130*/
}


// ==== 0x00624140  FactionSelectDialogControl_WorldDominationTour::FindAndMark  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall HashTable::FindAndMark(SimpleDialogControl_OwnerDraw *this, int a2, int a3)
{
  int result; // eax

  *((_DWORD *)this + 1) = a3; /*0x62414c*/
  result = (int)*(&g_MatrixTransformState + 2877); /*0x62414f*/
  a3 = a2; /*0x624156*/
  if ( *(&g_MatrixTransformState + 2877) ) /*0x62415a*/
  {
    result = *(&(*(&g_MatrixTransformState + 2876))->X /*0x62417d*/
             + (((int (__thiscall *)(int *))*(&g_MatrixTransformState + 2882))(&a3)
              & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
    if ( !result ) /*0x624182*/
      goto LABEL_5; /*0x624182*/
    while ( *(_DWORD *)result != a3 ) /*0x62418a*/
    {
      result = *(_DWORD *)(result + 516); /*0x62418c*/
      if ( !result ) /*0x624194*/
        goto LABEL_5; /*0x624194*/
    }
    result += 4; /*0x6241a2*/
    if ( result ) /*0x6241a7*/
    {
      *(_BYTE *)(result + 212) = 1; /*0x6241a9*/
      *((_BYTE *)this + 8) = 1; /*0x6241af*/
    }
    else
    {
LABEL_5:
      *((_BYTE *)this + 8) = 1; /*0x624196*/
    }
  }
  else
  {
    *((_BYTE *)this + 8) = 1; /*0x6241b7*/
  }
  return result; /*0x624199*/
}


// ==== 0x006241C0  SimpleDialogControl@OwnerDraw::Release  this=SimpleDialogControl@OwnerDraw  sig=csp ====
char __thiscall ObjectClass::Release(SimpleDialogControl_OwnerDraw *this)
{
  return *((_BYTE *)this + 8); /*0x6241c3*/
}


// ==== 0x006241D0  SimpleDialogControl@OwnerDraw::GetMember01  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall ObjectClass::GetMember01(SimpleDialogControl_OwnerDraw *this)
{
  return *((_DWORD *)this + 1); /*0x6241d3*/
}


// ==== 0x006241E0  SimpleDialogControl_OwnerDraw::StubReturnFalse  this=SimpleDialogControl@OwnerDraw  sig=csp ====
char __thiscall StreamWrapper::StubReturnFalse(SimpleDialogControl_OwnerDraw *this)
{
  return 0; /*0x6241e2*/
}


// ==== 0x006241F0  RunDialog  this=-  sig=csp ====
int __fastcall Dialog_Run(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3)
{
  HWND v3; // eax
  HWND v4; // edi
  int v6; // ecx

  v3 = (HWND)CreateDialog(a1, a2, a3); /*0x6241f7*/
  v4 = v3; /*0x6241fc*/
  if ( v3 ) /*0x624200*/
  {
    ShowWindow(v3, 1); /*0x624215*/
    SetForegroundWindow(v4); /*0x62421c*/
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x624228*/
    if ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x624231*/
    {
      while ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 16))(a3) ) /*0x624241*/
      {
        MessageLoop(); /*0x624243*/
        if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 || MEMORY[0xA8D60E] || MEMORY[0xA8DAB4] ) /*0x624266*/
        {
          Event::Dispatch(); /*0x62427c*/
        }
        else if ( !(unsigned __int8)VtableStub::Method_55CBF0() && GameFrameLoop() ) /*0x624271*/
        {
          break; /*0x624278*/
        }
        LOBYTE(v6) = 0; /*0x624281*/
        ScreenSaver::Process(v6); /*0x624283*/
        if ( (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x62428c*/
          break; /*0x624291*/
      }
    }
    Dialog::Destroy(v4); /*0x624293*/
    return (*(int (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 12))(a3); /*0x62429e*/
  }
  else
  {
    (*(void (__thiscall **)(LPARAM, _DWORD, _DWORD))(*(_DWORD *)a3 + 4))(a3, 0, 0); /*0x624208*/
    return 0; /*0x62420b*/
  }
}


// ==== 0x006242B0  ObjectClass::method_6242B0  this=ObjectClass  sig=csp ====
bool __thiscall sub_6242B0(HWND hWnd)
{
  int v2; // eax
  HWND v3; // edi
  HWND hWnda; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnda = hWnd; /*0x6242c4*/
  GetClassNameA(hWnd, ClassName, 128); /*0x6242c8*/
  if ( !strcmp(ClassName, MEMORY[0x833728]) ) /*0x6242df*/
    return 1; /*0x62430a*/
  if ( !strcmp(ClassName, MEMORY[0x833720]) ) /*0x624325*/
    return 1; /*0x624350*/
  if ( !strcmp(ClassName, MEMORY[0x833718]) /*0x6243c1*/
    && MEMORY[0xAC1B04]
    && (v2 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnda) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    v3 = hWnda; /*0x6243c3*/
    while ( *(HWND *)v2 != hWnda ) /*0x6243c9*/
    {
      v2 = *(_DWORD *)(v2 + 516); /*0x6243cb*/
      if ( !v2 ) /*0x6243d3*/
        return !strcmp(ClassName, MEMORY[0x83370C]) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x6243d3*/
    }
    return *(_DWORD *)(v2 + 108) == 1; /*0x6243e8*/
  }
  else
  {
    v3 = hWnda; /*0x6243f2*/
    return !strcmp(ClassName, MEMORY[0x83370C]) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x624445*/
  }
}


// ==== 0x00624460  Options::ClearComboBoxes  this=Options  sig=csp ====
void __thiscall sub_624460(void **this)
{
  DeleteAndZero::Alt(this + 2); /*0x624466*/
  DeleteAndZero::Alt(this + 1); /*0x62446e*/
}


// ==== 0x00624480  DeleteAndZero::OrFree  this=DeleteAndZero  sig=csp ====
void **__thiscall DeleteAndZero::OrFree(void **Block, char a2)
{
  DeleteAndZero::Alt(Block); /*0x624483*/
  if ( (a2 & 1) != 0 ) /*0x62448d*/
    __3_YAXPAX_Z(Block); /*0x624490*/
  return Block; /*0x62449a*/
}


// ==== 0x006244A0  DialogControl_OwnerDraw::Destructor  this=DialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor(
        DialogControl_OwnerDraw *this,
        char a2)
{
  this->vfptr = &vt_OwnerDraw_DialogControl; /*0x6244a9*/
  if ( (a2 & 1) != 0 ) /*0x6244af*/
    __3_YAXPAX_Z(this); /*0x6244b2*/
  return &this->vfptr; /*0x6244bc*/
}


// ==== 0x006244C0  SimpleDialogControl_OwnerDraw::Destructor_0  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(
        DialogControl_OwnerDraw *this,
        char a2)
{
  this->vfptr = &vt_OwnerDraw_DialogControl; /*0x6244c9*/
  if ( (a2 & 1) != 0 ) /*0x6244cf*/
    __3_YAXPAX_Z(this); /*0x6244d2*/
  return &this->vfptr; /*0x6244dc*/
}


// ==== 0x006244E0  Options::DeleteAndZero  this=Options  sig=csp ====
int __thiscall sub_6244E0(int *this)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int result; // eax

  v2 = 0; /*0x6244e4*/
  if ( *this <= 0 ) /*0x6244e9*/
  {
    *this = 0; /*0x62451b*/
  }
  else
  {
    v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      v4 = this->q008 + v3; /*0x6244f4*/
      DeleteAndZero::Alt((void **)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((void **)(v4 + 4)); /*0x624501*/
      result = *this; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *this ); /*0x62450e*/
    *this = 0; /*0x624511*/
  }
  return result; /*0x624518*/
}


// ==== 0x00624530  SymbolTable::Insert  this=AbstractClass  sig=csp ====
char __thiscall SymbolTable::Insert(void *this, _DWORD *a2, int ***Block)
{
  _DWORD *v4; // esi
  void *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  void *v9; // edx
  const wchar_t *v10; // esi
  size_t v11; // eax
  wchar_t *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  double v16; // st7
  int v17; // ecx
  void *v18; // edi
  unsigned int v19; // edx
  int *v20; // edi
  int v21; // ebp
  int v22; // esi
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  _DWORD *v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int *Blocka; // [esp+28h] [ebp+8h]

  v4 = __2_YAPAXI_Z(0x208u); /*0x624543*/
  if ( v4 ) /*0x62454a*/
  {
    memset(v4 + 1, 0, 0x200u); /*0x624558*/
    v4[27] = 11; /*0x62455a*/
    v4[26] = aP0; /*0x624568*/
    v5 = __2_YAPAXI_Z(4u); /*0x62456b*/
    if ( v5 ) /*0x624577*/
      v6 = unknown_libname_74(v5); /*0x62457b*/
    else
      v6 = 0; /*0x624582*/
    v4[16] = v6; /*0x624584*/
    v7 = v4; /*0x624587*/
    v4[17] = 0; /*0x624589*/
    v4[24] = 0; /*0x62458c*/
    v4[37] = -1; /*0x62458f*/
    v27 = v4; /*0x624599*/
  }
  else
  {
    v27 = 0; /*0x62459f*/
    v7 = 0; /*0x6245a7*/
  }
  v8 = v7 + 1; /*0x6245b3*/
  *v7 = *a2; /*0x6245ba*/
  v9 = (void *)v7[11]; /*0x6245bf*/
  v29 = v7[14]; /*0x6245c2*/
  v28 = v7[16]; /*0x6245c9*/
  if ( v7 + 1 != Block ) /*0x6245cd*/
  {
    qmemcpy(v8, Block, 0x200u); /*0x6245da*/
    v7[16] = v28; /*0x6245e0*/
    v7[11] = v9; /*0x6245e7*/
    v7[14] = v29; /*0x6245ea*/
    v10 = (const wchar_t *)Block[10]; /*0x6245ed*/
    if ( v9 ) /*0x6245f2*/
    {
      __3_YAXPAX_Z(v9); /*0x6245f5*/
      v8[10] = 0; /*0x6245fd*/
    }
    if ( v10 && *v10 ) /*0x624608*/
    {
      v11 = wcslen(v10); /*0x62460f*/
      v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x624619*/
      v8[10] = v12; /*0x624620*/
      wcscpy(v12, v10); /*0x624623*/
    }
    SymbolTable::Rebuild(v8, Block[13]); /*0x624635*/
    v7 = v27; /*0x62463a*/
  }
  v7[129] = 0; /*0x624642*/
  v13 = (*((int (__thiscall **)(_DWORD *))this + 6))(a2) & ((1 << this->vtable4) - 1); /*0x62465c*/
  v14 = *(_DWORD *)(*(_DWORD *)this + 4 * v13); /*0x62465e*/
  *(_DWORD *)(*(_DWORD *)this + 4 * v13) = v27; /*0x62466c*/
  if ( v14 ) /*0x624666*/
    v27[129] = v14; /*0x624676*/
  v15 = this->vtable3; /*0x62467f*/
  v16 = (double)(unsigned int)++this->vtable2 / (double)v15; /*0x624699*/
  if ( v16 >= *((double *)this + 5) && this->abstractFlags != 1 ) /*0x6246b2*/
  {
    Blocka = *(int **)this; /*0x6246bd*/
    v17 = this->vtable4 + 1; /*0x6246cb*/
    this->vtable3 = 2 * v15; /*0x6246cd*/
    this->vtable4 = v17; /*0x6246d0*/
    v18 = __2_YAPAXI_Z(8 * v15); /*0x6246db*/
    v19 = 4 * this->vtable3; /*0x6246e0*/
    *(_DWORD *)this = v18; /*0x6246e7*/
    memset(v18, 0, v19); /*0x6246ec*/
    if ( v15 > 0 ) /*0x6246f7*/
    {
      v20 = Blocka; /*0x6246f9*/
      v21 = v15; /*0x6246fd*/
      do /*0x624737*/
      {
        v22 = *v20; /*0x6246ff*/
        if ( *v20 ) /*0x6246ff*/
        {
          do /*0x624731*/
          {
            v23 = (*((int (__thiscall **)(int))this + 6))(v22) & ((1 << this->vtable4) - 1); /*0x624715*/
            v24 = *(_DWORD *)(*(_DWORD *)this + 4 * v23); /*0x624719*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v23) = v22; /*0x62471f*/
            v25 = *(_DWORD *)(v22 + 516); /*0x624721*/
            *(_DWORD *)(v22 + 516) = v24; /*0x624727*/
            v22 = v25; /*0x62472d*/
          }
          while ( v25 ); /*0x624731*/
        }
        ++v20; /*0x624733*/
        --v21; /*0x624736*/
      }
      while ( v21 ); /*0x624737*/
    }
    __3_YAXPAX_Z(Blocka); /*0x62473e*/
  }
  return 1; /*0x624746*/
}


// ==== 0x00624760  HashTable::Get  this=HashTable  sig=csp ====
char __thiscall HashTable::Get(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  _DWORD *v4; // eax

  if ( !this->HashTable_field_0x04 ) /*0x624764*/
    return 0; /*0x62476c*/
  v4 = *(_DWORD **)(*this + 4 * (((int (__thiscall *)(IUnknown *))this->HashTable_field_0x18)(aP1) & ((1 << this->HashTable_field_0x0C) - 1))); /*0x62478a*/
  if ( !v4 ) /*0x62478f*/
    return 0; /*0x624792*/
  while ( *v4 != aP1->field_0 ) /*0x62479c*/
  {
    v4 = (_DWORD *)v4[129]; /*0x62479e*/
    if ( !v4 ) /*0x6247a6*/
      return 0; /*0x6247ac*/
  }
  aP2->field_0 = (int)(v4 + 1); /*0x6247c3*/
  return 1; /*0x62476b*/
}


// ==== 0x006247D0  Struct::WideStringCopy  this=Struct  sig=csp ====
wchar_t **__thiscall Struct::WideStringCopy(wchar_t **this, ObjectClass *aP1)
{
  *this = *(wchar_t **)aP1->__pad_0; /*0x6247e1*/
  WideString::AssignFromPtr(this + 1, (const wchar_t **)&aP1->__pad_0[4]); /*0x6247e3*/
  WideString::AssignFromPtr(this + 2, (const wchar_t **)&aP1->__pad_0[8]); /*0x6247ef*/
  this->q00C = *(wchar_t **)&aP1->__pad_0[12]; /*0x6247f7*/
  this->q004 = (wchar_t *)aP1->uniqueId; /*0x6247fd*/
  this->q014 = (wchar_t *)aP1->abstractFlags; /*0x624803*/
  return this; /*0x624808*/
}


// ==== 0x00624810  DynamicVector::GrowCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::GrowCapacity(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x624814*/
  if ( *this < this->Items ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = __2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  v6 = (const void *)this->DynamicVector_field_0x8; /*0x62485a*/
  if ( v6 ) /*0x62485f*/
    qmemcpy(v5, v6, 24 * *this); /*0x624870*/
  __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x62487d*/
  this->Items = v4; /*0x624889*/
  this->DynamicVector_field_0x8 = v7; /*0x62488c*/
  return 1; /*0x62481f*/
}


// ==== 0x006248A0  Options::EnsureCapacity  this=Options  sig=csp ====
char __thiscall sub_6248A0(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x6248a5*/
  v3 = this->q004; /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  v6 = __2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  v7 = (const void *)this->q008; /*0x6248e2*/
  v8 = (int)v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *this); /*0x624901*/
  __3_YAXPAX_Z((void *)this->q008); /*0x62490f*/
  this->q008 = v8; /*0x62491b*/
  this->q004 = v5; /*0x62491e*/
  return 1; /*0x6248b2*/
}


// ==== 0x00624930  Dialog::UpdateControlState  this=Dialog  sig=csp ====
char __thiscall sub_624930(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax

  if ( !this->__pad_010 ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(_DWORD **)(*this + 4 * (((int (__thiscall *)(_DWORD *))*(this + 6))(a2) & ((1 << this->Dialog_field_0xC) - 1))); /*0x62495a*/
  if ( !v4 ) /*0x62495f*/
    return 0; /*0x624962*/
  while ( *v4 != *a2 ) /*0x62496c*/
  {
    v4 = (_DWORD *)v4[2]; /*0x62496e*/
    if ( !v4 ) /*0x624973*/
      return 0; /*0x624979*/
  }
  *a3 = v4 + 1; /*0x624990*/
  return 1; /*0x62493b*/
}


// ==== 0x006249A0  DynamicArray::Resize  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::Resize(_DWORD *this, int *a1, CCINIClass *aP2)
{
  int v4; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ebp
  bool v10; // c0
  bool v11; // c3
  unsigned int v12; // ebp
  int v13; // edi
  AbstractClass *v14; // ebx
  AbstractClass *v15; // edi
  unsigned int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // ebp
  int v23; // edi
  AbstractClass *v24; // ebx
  AbstractClass *v25; // edi
  unsigned int v26; // edx
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // [esp-4h] [ebp-1Ch]
  float v32; // [esp+10h] [ebp-8h]
  char a1a; // [esp+1Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+20h] [ebp+8h]
  AbstractClass *aP2b; // [esp+20h] [ebp+8h]

  v4 = this->DynamicArray_field_0x04; /*0x6249ab*/
  if ( !v4 ) /*0x6249b0*/
    return 0; /*0x6249b5*/
  v32 = (double)(unsigned int)(v4 - 1) / (double)(int)this->DynamicArray_field_0x08; /*0x6249e0*/
  v6 = ((int (__thiscall *)(int *))*(this + 6))(a1) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x6249f4*/
  v7 = *(_DWORD **)(*this + 4 * v6); /*0x6249f6*/
  if ( !v7 ) /*0x6249fb*/
    return 0; /*0x624a00*/
  v8 = *a1; /*0x624a09*/
  if ( *v7 == *a1 ) /*0x624a10*/
  {
    *(_DWORD *)aP2->__pad_0 = v7[1]; /*0x624a1d*/
    v31 = *(_DWORD **)(*this + 4 * v6); /*0x624a24*/
    v9 = v31[2]; /*0x624a25*/
    __3_YAXPAX_Z(v31); /*0x624a28*/
    *(_DWORD *)(*this + 4 * v6) = v9; /*0x624a36*/
    v10 = v32 < *((double *)this + 4); /*0x624a3c*/
    v11 = v32 == *((double *)this + 4); /*0x624a3c*/
    --this->DynamicArray_field_0x04; /*0x624a40*/
    if ( v10 || v11 ) /*0x624a45*/
    {
      v12 = this->DynamicArray_field_0x08; /*0x624a4e*/
      if ( v12 > this->DynamicArray_field_0x0C && *((_BYTE *)this + 20) != 1 ) /*0x624a60*/
      {
        v13 = this->DynamicArray_field_0x0C; /*0x624a62*/
        v14 = (AbstractClass *)*this; /*0x624a65*/
        aP2a = (AbstractClass *)*this; /*0x624a69*/
        this->DynamicArray_field_0x08 = v12 >> 1; /*0x624a6f*/
        this->DynamicArray_field_0x0C = v13 - 1; /*0x624a77*/
        v15 = (AbstractClass *)__2_YAPAXI_Z(4 * (v12 >> 1)); /*0x624a82*/
        v16 = 4 * this->DynamicArray_field_0x08; /*0x624a87*/
        *this = v15; /*0x624a8e*/
        memset(v15, 0, v16); /*0x624a93*/
        if ( (int)v12 > 0 ) /*0x624a9e*/
        {
          do /*0x624ad2*/
          {
            v17 = *(_DWORD *)v14->__pad_0; /*0x624aa0*/
            if ( *(_DWORD *)v14->__pad_0 ) /*0x624aa0*/
            {
              do /*0x624acc*/
              {
                v18 = ((int (__thiscall *)(int))*(this + 6))(v17) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ab6*/
                v19 = *(_DWORD *)(*this + 4 * v18); /*0x624aba*/
                *(_DWORD *)(*this + 4 * v18) = v17; /*0x624ac0*/
                v20 = *(_DWORD *)(v17 + 8); /*0x624ac2*/
                *(_DWORD *)(v17 + 8) = v19; /*0x624ac5*/
                v17 = v20; /*0x624ac8*/
              }
              while ( v20 ); /*0x624acc*/
            }
            v14 = (AbstractClass *)((char *)v14 + 4); /*0x624ace*/
            --v12; /*0x624ad1*/
          }
          while ( v12 ); /*0x624ad2*/
          v14 = aP2a; /*0x624ad4*/
        }
        __3_YAXPAX_Z(v14); /*0x624ad9*/
      }
    }
    return 1; /*0x624ae4*/
  }
  else
  {
    v21 = (_DWORD *)v7[2]; /*0x624aed*/
    a1a = 0; /*0x624af0*/
    if ( v21 ) /*0x624af7*/
    {
      while ( *v21 != v8 ) /*0x624afb*/
      {
        v7 = v21; /*0x624afd*/
        v21 = (_DWORD *)v21[2]; /*0x624aff*/
        if ( !v21 ) /*0x624b04*/
          goto LABEL_21; /*0x624b04*/
      }
      *(_DWORD *)aP2->__pad_0 = v21[1]; /*0x624b10*/
      v7[2] = v21[2]; /*0x624b15*/
      --this->DynamicArray_field_0x04; /*0x624b1c*/
      __3_YAXPAX_Z(v21); /*0x624b1f*/
      a1a = 1; /*0x624b27*/
    }
LABEL_21:
    if ( v32 <= *((double *)this + 4) ) /*0x624b38*/
    {
      v22 = this->DynamicArray_field_0x08; /*0x624b3e*/
      if ( v22 > this->DynamicArray_field_0x0C && *((_BYTE *)this + 20) != 1 ) /*0x624b50*/
      {
        v23 = this->DynamicArray_field_0x0C; /*0x624b52*/
        v24 = (AbstractClass *)*this; /*0x624b55*/
        aP2b = (AbstractClass *)*this; /*0x624b59*/
        this->DynamicArray_field_0x08 = v22 >> 1; /*0x624b5f*/
        this->DynamicArray_field_0x0C = v23 - 1; /*0x624b67*/
        v25 = (AbstractClass *)__2_YAPAXI_Z(4 * (v22 >> 1)); /*0x624b72*/
        v26 = 4 * this->DynamicArray_field_0x08; /*0x624b77*/
        *this = v25; /*0x624b7e*/
        memset(v25, 0, v26); /*0x624b83*/
        if ( (int)v22 > 0 ) /*0x624b8e*/
        {
          do /*0x624bc2*/
          {
            v27 = *(_DWORD *)v24->__pad_0; /*0x624b90*/
            if ( *(_DWORD *)v24->__pad_0 ) /*0x624b90*/
            {
              do /*0x624bbc*/
              {
                v28 = ((int (__thiscall *)(int))*(this + 6))(v27) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ba6*/
                v29 = *(_DWORD *)(*this + 4 * v28); /*0x624baa*/
                *(_DWORD *)(*this + 4 * v28) = v27; /*0x624bb0*/
                v30 = *(_DWORD *)(v27 + 8); /*0x624bb2*/
                *(_DWORD *)(v27 + 8) = v29; /*0x624bb5*/
                v27 = v30; /*0x624bb8*/
              }
              while ( v30 ); /*0x624bbc*/
            }
            v24 = (AbstractClass *)((char *)v24 + 4); /*0x624bbe*/
            --v22; /*0x624bc1*/
          }
          while ( v22 ); /*0x624bc2*/
          v24 = aP2b; /*0x624bc4*/
        }
        __3_YAXPAX_Z(v24); /*0x624bc9*/
      }
    }
    return a1a; /*0x624bd1*/
  }
}


// ==== 0x00624BE0  Dialog::GrowBuffer  this=Dialog  sig=csp ====
void __thiscall sub_624BE0(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( *((_BYTE *)this + 20) != 1 ) /*0x624be8*/
  {
    v2 = this->Dialog_field_0x8; /*0x624bf0*/
    v3 = (_DWORD *)*this; /*0x624bf3*/
    v4 = this->Dialog_field_0xC + 1; /*0x624bfc*/
    this->Dialog_field_0x8 = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    this->Dialog_field_0xC = v4; /*0x624c08*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x624c13*/
    v6 = 4 * this->Dialog_field_0x8; /*0x624c18*/
    *this = v5; /*0x624c1f*/
    memset(v5, 0, v6); /*0x624c24*/
    if ( v2 > 0 ) /*0x624c2f*/
    {
      v7 = v3; /*0x624c31*/
      v8 = v2; /*0x624c33*/
      do /*0x624c67*/
      {
        v9 = *v7; /*0x624c35*/
        if ( *v7 ) /*0x624c35*/
        {
          do /*0x624c61*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << this->Dialog_field_0xC) - 1); /*0x624c4b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x624c4f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x624c55*/
            v12 = *(_DWORD *)(v9 + 8); /*0x624c57*/
            *(_DWORD *)(v9 + 8) = v11; /*0x624c5a*/
            v9 = v12; /*0x624c5d*/
          }
          while ( v12 ); /*0x624c61*/
        }
        ++v7; /*0x624c63*/
        --v8; /*0x624c66*/
      }
      while ( v8 ); /*0x624c67*/
      v3 = v13; /*0x624c69*/
    }
    __3_YAXPAX_Z(v3); /*0x624c6e*/
  }
}


// ==== 0x00624C80  HashMap::ComputeIndex  this=HashMap  sig=csp ====
int __thiscall HashMap::ComputeIndex(int this, CCINIClass *aP1)
{
  return (*(int (__thiscall **)(CCINIClass *))(this + 24))(aP1) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x624c94*/
}


// ==== 0x00624CA0  Dialog::BindGadgetData  this=Dialog  sig=csp ====
char __thiscall Dialog::BindGadgetData(double *this, int *a2, char *Block)
{
  int v4; // eax
  int v6; // edx
  char *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  const #72 *v12; // esi
  int v13; // eax
  #72 *v14; // eax
  int v15; // edi
  int v16; // ebx
  _DWORD *i; // eax
  void **v18; // esi
  bool v19; // c0
  bool v20; // c3
  unsigned int v21; // esi
  int *v22; // ebx
  int v23; // ecx
  void *v24; // edi
  unsigned int v25; // edx
  int *v26; // edi
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  char *v32; // esi
  char v33; // bl
  int v35; // edx
  char *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+18h] [ebp-Ch]
  int v40; // [esp+1Ch] [ebp-8h]
  int v41; // [esp+1Ch] [ebp-8h]
  int v42; // [esp+28h] [ebp+4h]
  int v43; // [esp+28h] [ebp+4h]
  void *Blocka; // [esp+2Ch] [ebp+8h]
  int *Blockb; // [esp+2Ch] [ebp+8h]
  void *Blockc; // [esp+2Ch] [ebp+8h]

  v4 = this->__pad_010; /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  v39 = (double)(unsigned int)(v4 - 1) / (double)*((int *)this + 2); /*0x624ce0*/
  v6 = (*((int (__thiscall **)(int *))this + 6))(a2) & ((1 << this->Dialog_field_0xC) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(char **)(*(_DWORD *)this + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = *a2; /*0x624d12*/
  if ( *(_DWORD *)v7 == *a2 ) /*0x624d18*/
  {
    v10 = (int ***)(v7 + 4); /*0x624d22*/
    v11 = Block == v7 + 4; /*0x624d25*/
    v42 = (int)(v7 + 4); /*0x624d27*/
    v40 = *((_DWORD *)Block + 13); /*0x624d2e*/
    Blocka = (void *)*((_DWORD *)Block + 10); /*0x624d35*/
    v37 = *((_DWORD *)Block + 15); /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(Block, v10, 0x200u); /*0x624d4f*/
      *((_DWORD *)Block + 15) = v37; /*0x624d55*/
      *((_DWORD *)Block + 10) = Blocka; /*0x624d5c*/
      *((_DWORD *)Block + 13) = v40; /*0x624d5f*/
      v12 = (const #72 *)*((_DWORD *)v7 + 11); /*0x624d62*/
      if ( Blocka ) /*0x624d67*/
      {
        __3_YAXPAX_Z(Blocka); /*0x624d6a*/
        v10 = (int ***)v42; /*0x624d6f*/
        *((_DWORD *)Block + 10) = 0; /*0x624d76*/
      }
      if ( v12 && *(_WORD *)v12 ) /*0x624d81*/
      {
        v13 = wcslen(v12); /*0x624d88*/
        v14 = (#72 *)__2_YAPAXI_Z(2 * v13 + 2); /*0x624d92*/
        *((_DWORD *)Block + 10) = v14; /*0x624d99*/
        wcscpy(v14, v12); /*0x624d9c*/
        v10 = (int ***)v42; /*0x624da1*/
      }
      SymbolTable::Rebuild(Block, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(_DWORD *)(*(_DWORD *)this + 4 * v6); /*0x624dba*/
    v16 = *(_DWORD *)(v15 + 516); /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((void **)(v15 + 4), 0); /*0x624dce*/
      for ( i = *(_DWORD **)(v15 + 56); i; i = *(_DWORD **)(v15 + 56) ) /*0x624dd8*/
        LinkedList::Remove((_DWORD *)(v15 + 4), i); /*0x624ddd*/
      v18 = *(void ***)(v15 + 64); /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      __3_YAXPAX_Z((void *)v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(_DWORD *)(*(_DWORD *)this + 4 * v6) = v16; /*0x624e0d*/
    v19 = v39 < this->__pad_010; /*0x624e13*/
    v20 = v39 == this->__pad_010; /*0x624e13*/
    --this->__pad_010; /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = this->Dialog_field_0x8; /*0x624e25*/
      if ( v21 > this->Dialog_field_0xC && *((_BYTE *)this + 20) != 1 ) /*0x624e37*/
      {
        v22 = *(int **)this; /*0x624e40*/
        Blockb = *(int **)this; /*0x624e45*/
        v23 = this->Dialog_field_0xC - 1; /*0x624e4b*/
        this->Dialog_field_0x8 = v21 >> 1; /*0x624e4c*/
        this->Dialog_field_0xC = v23; /*0x624e56*/
        v24 = (void *)__2_YAPAXI_Z(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * this->Dialog_field_0x8; /*0x624e67*/
        *(_DWORD *)this = v24; /*0x624e6e*/
        memset(v24, 0, v25); /*0x624e74*/
        if ( (int)v21 > 0 ) /*0x624e7f*/
        {
          v26 = v22; /*0x624e81*/
          v27 = v21; /*0x624e83*/
          do /*0x624ebe*/
          {
            v28 = *v26; /*0x624e85*/
            if ( *v26 ) /*0x624e85*/
            {
              do /*0x624eb8*/
              {
                v29 = (*((int (__thiscall **)(int))this + 6))(v28) & ((1 << this->Dialog_field_0xC) - 1); /*0x624e9b*/
                v30 = *(_DWORD *)(*(_DWORD *)this + 4 * v29); /*0x624ea0*/
                *(_DWORD *)(*(_DWORD *)this + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(_DWORD *)(v28 + 516); /*0x624ea8*/
                *(_DWORD *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            ++v26; /*0x624eba*/
            --v27; /*0x624ebd*/
          }
          while ( v27 ); /*0x624ebe*/
          v22 = Blockb; /*0x624ec0*/
        }
        __3_YAXPAX_Z(v22); /*0x624ec5*/
      }
    }
    return 1; /*0x624ed0*/
  }
  else
  {
    v32 = (char *)*((_DWORD *)v7 + 129); /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    v43 = (int)v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( *(_DWORD *)v32 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        v43 = *((_DWORD *)v32 + 129); /*0x624f07*/
        if ( !v43 ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = (char *)*((_DWORD *)v32 + 129); /*0x624ef3*/
      }
      v11 = Block == v32 + 4; /*0x624f19*/
      v35 = *((_DWORD *)Block + 13); /*0x624f1e*/
      Blockc = (void *)*((_DWORD *)Block + 10); /*0x624f21*/
      v41 = *((_DWORD *)Block + 15); /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(Block, v32 + 4, 0x200u); /*0x624f37*/
        *((_DWORD *)Block + 13) = v35; /*0x624f3d*/
        *((_DWORD *)Block + 10) = Blockc; /*0x624f40*/
        *((_DWORD *)Block + 15) = v41; /*0x624f47*/
        GadgetClass::SetTooltip((void **)Block, *((#72 **)v32 + 11)); /*0x624f50*/
        SymbolTable::Rebuild(Block, *(int ***)(v43 + 56)); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = (char *)v43; /*0x624f6b*/
      }
      *((_DWORD *)v7 + 129) = *((_DWORD *)v32 + 129); /*0x624f75*/
      --this->__pad_010; /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((int)(v32 + 4)); /*0x624f89*/
        __3_YAXPAX_Z(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( v39 <= this->__pad_010 ) /*0x624fa5*/
      HashTable::Rebuild2(this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }
}


// ==== 0x00624FC0  HashTable::Grow2  this=HashTable  sig=csp ====
void __thiscall HashTable_Grow2(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->HashTable_field_0x50 != 1 ) /*0x624fc8*/
  {
    v2 = this->HashTable_field_0x08; /*0x624fd0*/
    v3 = (_DWORD *)*this; /*0x624fd3*/
    v4 = this->HashTable_field_0x0C + 1; /*0x624fdc*/
    this->HashTable_field_0x08 = 2 * v2; /*0x624fdd*/
    v13 = v3; /*0x624fe0*/
    this->HashTable_field_0x0C = v4; /*0x624fe8*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x624ff3*/
    v6 = 4 * this->HashTable_field_0x08; /*0x624ff8*/
    *this = v5; /*0x624fff*/
    memset(v5, 0, v6); /*0x625004*/
    if ( v2 > 0 ) /*0x62500f*/
    {
      v7 = v3; /*0x625011*/
      v8 = v2; /*0x625013*/
      do /*0x62504d*/
      {
        v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
          do /*0x625047*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x62502b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x62502f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625035*/
            v12 = *(_DWORD *)(v9 + 516); /*0x625037*/
            *(_DWORD *)(v9 + 516) = v11; /*0x62503d*/
            v9 = v12; /*0x625043*/
          }
          while ( v12 ); /*0x625047*/
        }
        ++v7; /*0x625049*/
        --v8; /*0x62504c*/
      }
      while ( v8 ); /*0x62504d*/
      v3 = v13; /*0x62504f*/
    }
    __3_YAXPAX_Z(v3); /*0x625054*/
  }
}


// ==== 0x00625070  HashTable::ComputeHash  this=HashTable  sig=csp ====
int __thiscall HashTable_ComputeHash(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x625084*/
}


// ==== 0x00625090  HashTable::RemoveAndResize  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveAndResize(_DWORD *this, _DWORD *a2, _BYTE *a3)
{
  int v4; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // ebp
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // ebp
  int *v14; // ebx
  int v15; // ecx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // ebp
  int v24; // edi
  int *v25; // ebx
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  _DWORD *v32; // [esp-4h] [ebp-1Ch]
  float v33; // [esp+10h] [ebp-8h]
  char v34; // [esp+1Ch] [ebp+4h]
  int *v35; // [esp+20h] [ebp+8h]
  int *v36; // [esp+20h] [ebp+8h]

  v4 = this->HashTable_field_0x04; /*0x62509b*/
  if ( !v4 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  v33 = (double)(unsigned int)(v4 - 1) / (double)(int)this->HashTable_field_0x08; /*0x6250d0*/
  v7 = ((int (__thiscall *)(_DWORD *))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6250e4*/
  v8 = *(_DWORD **)(*this + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  v9 = a2[1]; /*0x6250f9*/
  if ( v9 == v8[1] && *a2 == *v8 ) /*0x62510e*/
  {
    *a3 = *((_BYTE *)v8 + 8); /*0x62511b*/
    v32 = *(_DWORD **)(*this + 4 * v7); /*0x625122*/
    v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x625134*/
    v11 = v33 < *((double *)this + 4); /*0x62513a*/
    v12 = v33 == *((double *)this + 4); /*0x62513a*/
    --this->HashTable_field_0x04; /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      v13 = this->HashTable_field_0x08; /*0x62514c*/
      if ( v13 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x62515e*/
      {
        v14 = (int *)*this; /*0x625167*/
        v35 = (int *)*this; /*0x62516b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x625171*/
        this->HashTable_field_0x08 = v13 >> 1; /*0x625172*/
        this->HashTable_field_0x0C = v15; /*0x62517c*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x625188*/
        v17 = 4 * this->HashTable_field_0x08; /*0x62518d*/
        *this = v16; /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
        if ( (int)v13 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
              do /*0x6251d2*/
              {
                v19 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v18) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6251bc*/
                v20 = *(_DWORD *)(*this + 4 * v19); /*0x6251c0*/
                *(_DWORD *)(*this + 4 * v19) = v18; /*0x6251c6*/
                v21 = *(_DWORD *)(v18 + 12); /*0x6251c8*/
                *(_DWORD *)(v18 + 12) = v20; /*0x6251cb*/
                v18 = v21; /*0x6251ce*/
              }
              while ( v21 ); /*0x6251d2*/
            }
            ++v14; /*0x6251d4*/
            --v13; /*0x6251d7*/
          }
          while ( v13 ); /*0x6251d8*/
          v14 = v35; /*0x6251da*/
        }
        __3_YAXPAX_Z(v14); /*0x6251df*/
      }
    }
    return 1; /*0x6251ea*/
  }
  else
  {
    v22 = (_DWORD *)v8[3]; /*0x6251f3*/
    v34 = 0; /*0x6251f6*/
    if ( v22 ) /*0x6251fd*/
    {
      while ( v9 != v22[1] || *a2 != *v22 ) /*0x62520b*/
      {
        v8 = v22; /*0x62520d*/
        v22 = (_DWORD *)v22[3]; /*0x62520f*/
        if ( !v22 ) /*0x625214*/
          goto LABEL_23; /*0x625214*/
      }
      *a3 = *((_BYTE *)v22 + 8); /*0x625220*/
      v8[3] = v22[3]; /*0x625225*/
      --this->HashTable_field_0x04; /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= *((double *)this + 4) ) /*0x625248*/
    {
      v23 = this->HashTable_field_0x08; /*0x62524e*/
      if ( v23 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x625260*/
      {
        v24 = this->HashTable_field_0x0C; /*0x625262*/
        v25 = (int *)*this; /*0x625265*/
        v36 = (int *)*this; /*0x625269*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x62526f*/
        this->HashTable_field_0x0C = v24 - 1; /*0x625277*/
        v26 = __2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * this->HashTable_field_0x08; /*0x625287*/
        *this = v26; /*0x62528e*/
        memset(v26, 0, v27); /*0x625293*/
        if ( (int)v23 > 0 ) /*0x62529e*/
        {
          do /*0x6252d2*/
          {
            v28 = *v25; /*0x6252a0*/
            if ( *v25 ) /*0x6252a0*/
            {
              do /*0x6252cc*/
              {
                v29 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v28) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6252b6*/
                v30 = *(_DWORD *)(*this + 4 * v29); /*0x6252ba*/
                *(_DWORD *)(*this + 4 * v29) = v28; /*0x6252c0*/
                v31 = *(_DWORD *)(v28 + 12); /*0x6252c2*/
                *(_DWORD *)(v28 + 12) = v30; /*0x6252c5*/
                v28 = v31; /*0x6252c8*/
              }
              while ( v31 ); /*0x6252cc*/
            }
            ++v25; /*0x6252ce*/
            --v23; /*0x6252d1*/
          }
          while ( v23 ); /*0x6252d2*/
          v25 = v36; /*0x6252d4*/
        }
        __3_YAXPAX_Z(v25); /*0x6252d9*/
      }
    }
    return v34; /*0x6252e1*/
  }
}


// ==== 0x006252F0  ComboBoxOwnerDraw::SortItems  this=ComboBoxOwnerDraw  sig=csp ====
void __thiscall sub_6252F0(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->ComboBoxOwnerDraw_field_0x14 != 1 ) /*0x6252f8*/
  {
    v2 = this->ComboBoxOwnerDraw_field_0x08; /*0x625300*/
    v3 = (_DWORD *)*this; /*0x625303*/
    v4 = this->ComboBoxOwnerDraw_field_0x0C + 1; /*0x62530c*/
    this->ComboBoxOwnerDraw_field_0x08 = 2 * v2; /*0x62530d*/
    v13 = v3; /*0x625310*/
    this->ComboBoxOwnerDraw_field_0x0C = v4; /*0x625318*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x625323*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625328*/
    *this = v5; /*0x62532f*/
    memset(v5, 0, v6); /*0x625334*/
    if ( v2 > 0 ) /*0x62533f*/
    {
      v7 = v3; /*0x625341*/
      v8 = v2; /*0x625343*/
      do /*0x625377*/
      {
        v9 = *v7; /*0x625345*/
        if ( *v7 ) /*0x625345*/
        {
          do /*0x625371*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1); /*0x62535b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x62535f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625365*/
            v12 = *(_DWORD *)(v9 + 12); /*0x625367*/
            *(_DWORD *)(v9 + 12) = v11; /*0x62536a*/
            v9 = v12; /*0x62536d*/
          }
          while ( v12 ); /*0x625371*/
        }
        ++v7; /*0x625373*/
        --v8; /*0x625376*/
      }
      while ( v8 ); /*0x625377*/
      v3 = v13; /*0x625379*/
    }
    __3_YAXPAX_Z(v3); /*0x62537e*/
  }
}


// ==== 0x00625390  ComboBoxOwnerDraw::ComputeMask  this=ComboBoxOwnerDraw  sig=csp ====
int __thiscall sub_625390(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6253a4*/
}


// ==== 0x006253B0  Options::GrowBuffer  this=Options  sig=csp ====
char __thiscall sub_6253B0(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x6253b4*/
  if ( *this < this->q004 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  v4 = 2 * v2; /*0x6253c4*/
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->q008 ) /*0x625403*/
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *this); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z((void *)this->q008); /*0x625429*/
  this->q004 = v4; /*0x625431*/
  this->q008 = (int)v5; /*0x625434*/
  return 1; /*0x6253bf*/
}


// ==== 0x00625440  DynamicArray::ShrinkCapacity  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::ShrinkCapacity(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x625445*/
  v3 = this->DynamicArray_field_0x04; /*0x625448*/
  if ( 3 * v2 > v3 ) /*0x625450*/
    return 0; /*0x625453*/
  v5 = v3 / 2; /*0x62545f*/
  if ( v3 / 2 < 10 ) /*0x625464*/
    v5 = 10; /*0x625466*/
  if ( v5 >= v3 ) /*0x62546d*/
    return 0; /*0x625470*/
  v6 = __2_YAPAXI_Z(4 * v5); /*0x62547e*/
  v7 = (const void *)this->DynamicArray_field_0x08; /*0x625483*/
  v8 = (int)v6; /*0x62548b*/
  if ( v7 ) /*0x62548f*/
    qmemcpy(v6, v7, 4 * *this); /*0x62549f*/
  __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x6254ad*/
  this->DynamicArray_field_0x08 = v8; /*0x6254b9*/
  this->DynamicArray_field_0x04 = v5; /*0x6254bc*/
  return 1; /*0x625452*/
}


// ==== 0x006254D0  Options::ReadOptionValue  this=Options  sig=csp ====
char __thiscall sub_6254D0(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x6254d5*/
  v3 = this->q004; /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  v6 = __2_YAPAXI_Z(20 * v5); /*0x62550d*/
  v7 = (const void *)this->q008; /*0x625512*/
  v8 = (int)v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *this); /*0x625531*/
  __3_YAXPAX_Z((void *)this->q008); /*0x62553f*/
  this->q008 = v8; /*0x62554b*/
  this->q004 = v5; /*0x62554e*/
  return 1; /*0x6254e2*/
}


// ==== 0x00625560  Options::DestroyComposite  this=Options  sig=csp ====
void *__thiscall Options::DestroyComposite(void *Block, char a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  void *v6; // esi

  if ( *((_DWORD *)Block + 11) ) /*0x625563*/
  {
    __3_YAXPAX_Z(*((void **)Block + 11)); /*0x62556b*/
    *((_DWORD *)Block + 11) = 0; /*0x625573*/
  }
  for ( i = (_DWORD *)*((_DWORD *)Block + 14); i; i = (_DWORD *)*((_DWORD *)Block + 14) ) /*0x62557f*/
  {
    v4 = i; /*0x625581*/
    v5 = 0; /*0x625583*/
    while ( i != v4 ) /*0x62558b*/
    {
      v5 = v4; /*0x62558d*/
      v4 = (_DWORD *)*v4; /*0x62558f*/
      if ( !v4 ) /*0x625593*/
        goto LABEL_12; /*0x625593*/
    }
    if ( v5 ) /*0x62559d*/
      *v5 = *v4; /*0x6255a1*/
    else
      *((_DWORD *)Block + 14) = *v4; /*0x6255a7*/
    __3_YAXPAX_Z(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = (void *)*((_DWORD *)Block + 16); /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*((void ***)Block + 16)); /*0x6255c4*/
    __3_YAXPAX_Z(v6); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    __3_YAXPAX_Z(Block); /*0x6255dc*/
  return Block; /*0x6255e6*/
}


// ==== 0x006255F0  Options::RebuildDropdownList  this=Options  sig=csp ====
int *__thiscall Options::RebuildDropdownList(int *this, ObjectClass *aP1)
{
  ObjectClass *v2; // ebp
  SessionClass *v3; // edi
  int v4; // ebx
  ReferenceCounted *v5; // esi
  ReferenceCounted v6; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  ReferenceCounted v13; // edi
  wchar_t **v14; // ecx
  int v16; // [esp+10h] [ebp-20h]
  int v18; // [esp+18h] [ebp-18h] BYREF
  CampaignScore *v19; // [esp+1Ch] [ebp-14h] BYREF
  void *v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  v2 = aP1; /*0x6255f5*/
  v3 = (SessionClass *)this; /*0x6255fb*/
  v4 = 0; /*0x625600*/
  *this = *(_DWORD *)aP1->__pad_0; /*0x625602*/
  v5 = (ReferenceCounted *)(this + 2); /*0x625607*/
  this->q004 = *(_DWORD *)&aP1->__pad_0[4]; /*0x62560a*/
  this->q008 = 0; /*0x625615*/
  this->q00C = 0; /*0x625617*/
  this->q004 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v20); /*0x625626*/
  v18 = 0; /*0x62562e*/
  v21 = -1; /*0x625632*/
  v23 = -1; /*0x625636*/
  v6 = *v5; /*0x62563a*/
  v22 = 0; /*0x62563c*/
  if ( *(int *)&v6 > 0 ) /*0x625642*/
  {
    v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      v8 = *(_DWORD *)&v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((void **)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((void **)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < *(_DWORD *)v5 ); /*0x625665*/
    v2 = aP1; /*0x625667*/
    v3 = (SessionClass *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  v9 = *(_DWORD *)&v2->__pad_0[8]; /*0x625675*/
  v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    v11 = 0; /*0x625682*/
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        v12 = v11 + v2->uniqueId; /*0x625699*/
        v18 = *(_DWORD *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt(&v20, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v21 = *(_DWORD *)(v12 + 12); /*0x6256be*/
        v22 = *(_DWORD *)(v12 + 16); /*0x6256c5*/
        v23 = *(_DWORD *)(v12 + 20); /*0x6256cc*/
      }
      v13 = *v5; /*0x6256d0*/
      if ( *(_DWORD *)v5 >= *(_DWORD *)&v5[1] ) /*0x6256d7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256db*/
      if ( *(_DWORD *)v5 >= *(_DWORD *)&v5[1] ) /*0x6256e7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256eb*/
      if ( *(_DWORD *)&v13 < *(_DWORD *)v5 ) /*0x6256f4*/
        memcpy( /*0x625713*/
          (void *)(*(_DWORD *)&v5[2] + 8 * (3 * *(_DWORD *)&v13 + 3)),
          (const void *)(*(_DWORD *)&v5[2] + 24 * *(_DWORD *)&v13),
          24 * *(_DWORD *)v5 - 24 * *(_DWORD *)&v13);
      v14 = (wchar_t **)(*(_DWORD *)&v5[2] + 24 * *(_DWORD *)&v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        Struct::WideStringCopy(v14, (ObjectClass *)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      ++*(_DWORD *)v5; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = *(_DWORD *)&aP1->__pad_0[8]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = aP1; /*0x62568a*/
    }
    v3 = (SessionClass *)this; /*0x625752*/
  }
  DeleteAndZero::Alt(&v20); /*0x62575a*/
  DeleteAndZero::Alt((void **)&v19); /*0x625763*/
  return v3->GameMode; /*0x62576a*/
}


// ==== 0x00625780  HashTable::Shrink2  this=HashTable  sig=csp ====
void __thiscall HashTable_Shrink2(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = this->HashTable_field_0x08; /*0x625785*/
  if ( v2 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x625797*/
  {
    v3 = (int *)*this; /*0x6257a0*/
    v4 = this->HashTable_field_0x0C; /*0x6257a3*/
    v13 = (int *)*this; /*0x6257a6*/
    this->HashTable_field_0x08 = v2 >> 1; /*0x6257ac*/
    this->HashTable_field_0x0C = v4 - 1; /*0x6257b4*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6257bf*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6257c4*/
    *this = v5; /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
    if ( (int)v2 > 0 ) /*0x6257db*/
    {
      v7 = v3; /*0x6257dd*/
      v8 = v2; /*0x6257df*/
      do /*0x625813*/
      {
        v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
          do /*0x62580d*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6257f7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6257fb*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625801*/
            v12 = *(_DWORD *)(v9 + 8); /*0x625803*/
            *(_DWORD *)(v9 + 8) = v11; /*0x625806*/
            v9 = v12; /*0x625809*/
          }
          while ( v12 ); /*0x62580d*/
        }
        ++v7; /*0x62580f*/
        --v8; /*0x625812*/
      }
      while ( v8 ); /*0x625813*/
      v3 = v13; /*0x625815*/
    }
    __3_YAXPAX_Z(v3); /*0x62581a*/
  }
}


// ==== 0x00625830  HashTable::Rebuild2  this=HashTable  sig=csp ====
void __thiscall HashTable_Rebuild2(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = this->HashTable_field_0x08; /*0x625835*/
  if ( v2 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x625847*/
  {
    v3 = (int *)*this; /*0x625850*/
    v4 = this->HashTable_field_0x0C; /*0x625853*/
    v13 = (int *)*this; /*0x625856*/
    this->HashTable_field_0x08 = v2 >> 1; /*0x62585c*/
    this->HashTable_field_0x0C = v4 - 1; /*0x625864*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x62586f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x625874*/
    *this = v5; /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
    if ( (int)v2 > 0 ) /*0x62588b*/
    {
      v7 = v3; /*0x62588d*/
      v8 = v2; /*0x62588f*/
      do /*0x6258c9*/
      {
        v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
          do /*0x6258c3*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6258a7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6258ab*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x6258b1*/
            v12 = *(_DWORD *)(v9 + 516); /*0x6258b3*/
            *(_DWORD *)(v9 + 516) = v11; /*0x6258b9*/
            v9 = v12; /*0x6258bf*/
          }
          while ( v12 ); /*0x6258c3*/
        }
        ++v7; /*0x6258c5*/
        --v8; /*0x6258c8*/
      }
      while ( v8 ); /*0x6258c9*/
      v3 = v13; /*0x6258cb*/
    }
    __3_YAXPAX_Z(v3); /*0x6258d0*/
  }
}


// ==== 0x006258E0  ComboBoxOwnerDraw::SetCapacity  this=ComboBoxOwnerDraw  sig=csp ====
void __thiscall sub_6258E0(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = this->ComboBoxOwnerDraw_field_0x08; /*0x6258e5*/
  if ( v2 > this->q030 && this->ComboBoxOwnerDraw_field_0x14 != 1 ) /*0x6258f7*/
  {
    v3 = (int *)*this; /*0x625900*/
    v4 = this->ComboBoxOwnerDraw_field_0x0C; /*0x625903*/
    v13 = (int *)*this; /*0x625906*/
    this->ComboBoxOwnerDraw_field_0x08 = v2 >> 1; /*0x62590c*/
    this->ComboBoxOwnerDraw_field_0x0C = v4 - 1; /*0x625914*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x62591f*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625924*/
    *this = v5; /*0x62592b*/
    memset(v5, 0, v6); /*0x625930*/
    if ( (int)v2 > 0 ) /*0x62593b*/
    {
      v7 = v3; /*0x62593d*/
      v8 = v2; /*0x62593f*/
      do /*0x625973*/
      {
        v9 = *v7; /*0x625941*/
        if ( *v7 ) /*0x625941*/
        {
          do /*0x62596d*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1); /*0x625957*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x62595b*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625961*/
            v12 = *(_DWORD *)(v9 + 12); /*0x625963*/
            *(_DWORD *)(v9 + 12) = v11; /*0x625966*/
            v9 = v12; /*0x625969*/
          }
          while ( v12 ); /*0x62596d*/
        }
        ++v7; /*0x62596f*/
        --v8; /*0x625972*/
      }
      while ( v8 ); /*0x625973*/
      v3 = v13; /*0x625975*/
    }
    __3_YAXPAX_Z(v3); /*0x62597a*/
  }
}


// ==== 0x00625990  ComboBoxOwnerDraw::GrowBuffer  this=ComboBoxOwnerDraw  sig=csp ====
char __thiscall sub_625990(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x625994*/
  if ( *this < this->ComboBoxOwnerDraw_field_0x04 ) /*0x62599b*/
    return 0; /*0x62599d*/
  v4 = 2 * v2; /*0x6259a4*/
  v6 = 2 * v2; /*0x6259ab*/
  if ( 2 * v2 < 10 ) /*0x6259af*/
  {
    v6 = 10; /*0x6259b1*/
    v4 = 10; /*0x6259b9*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x6259cc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6259da*/
  if ( this->ComboBoxOwnerDraw_field_0x08 ) /*0x6259e3*/
  {
    qmemcpy(v5, (const void *)this->ComboBoxOwnerDraw_field_0x08, 4 * *this); /*0x6259f8*/
    v4 = v6; /*0x625a01*/
  }
  __3_YAXPAX_Z((void *)this->ComboBoxOwnerDraw_field_0x08); /*0x625a09*/
  this->ComboBoxOwnerDraw_field_0x04 = v4; /*0x625a11*/
  this->ComboBoxOwnerDraw_field_0x08 = (int)v5; /*0x625a14*/
  return 1; /*0x62599f*/
}


// ==== 0x00625A20  Options::SaveOptionValue  this=Options  sig=csp ====
char __thiscall sub_625A20(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x625a24*/
  if ( *this < this->q004 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = __2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = (int)v5; /*0x625a64*/
  v6 = (const void *)this->q008; /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *this); /*0x625a80*/
  __3_YAXPAX_Z((void *)this->q008); /*0x625a8d*/
  this->q004 = v4; /*0x625a99*/
  this->q008 = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/
}


// ==== 0x00625AB0  ResultNode::CleanupList  this=CampaignClass  sig=csp ====
void __thiscall ResultNode::CleanupList(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi

  v1 = (_DWORD *)this->vtable2; /*0x625ab1*/
  if ( v1 ) /*0x625ab6*/
  {
    do /*0x625ad4*/
    {
      v2 = (_DWORD *)v1[3]; /*0x625ab9*/
      if ( v1 ) /*0x625abe*/
      {
        ResultNode::Init(v1); /*0x625ac2*/
        __3_YAXPAX_Z(v1); /*0x625ac8*/
      }
      v1 = v2; /*0x625ad2*/
    }
    while ( v2 ); /*0x625ad4*/
  }
}


// ==== 0x00625AE0  LinkedList::PushFront  this=LinkedList  sig=csp ====
int __thiscall LinkedList::PushFront(_DWORD *this, IUnknown *aP1)
{
  aP1->field_C = this->Tail; /*0x625ae7*/
  this->Tail = aP1; /*0x625aea*/
  return (int)aP1; /*0x625aed*/
}


// ==== 0x00625AF0  File::LoadPaletteData  this=File  sig=csp ====
u_short *__thiscall File::LoadPaletteData(u_short *this, ObjectClass *aP1)
{
  u_short v3; // cx
  u_short v4; // ax
  char *v5; // esi
  u_short v6; // ax
  int v7; // eax
  int v8; // ecx
  ObjectClass *v9; // ebx
  _DWORD *v10; // esi
  size_t v11; // ebp
  void *v12; // eax
  int v13; // eax
  u_short *result; // eax
  int v15; // [esp+8h] [ebp-8h]
  ObjectClass *aP1a; // [esp+14h] [ebp+4h]

  v3 = *(_WORD *)aP1->__pad_0; /*0x625b02*/
  *this = *(_WORD *)aP1->__pad_0; /*0x625b05*/
  *this = ntohs(v3); /*0x625b11*/
  v4 = *(_WORD *)&aP1->__pad_0[2]; /*0x625b17*/
  this->q004 = v4; /*0x625b1a*/
  v5 = &aP1->__pad_0[4]; /*0x625b1f*/
  this->q004 = ntohs(v4); /*0x625b27*/
  v6 = *this; /*0x625b2d*/
  this->q004 = 0; /*0x625b30*/
  v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return this; /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    v7 = __2_YAPAXI_Z(0x10u); /*0x625b50*/
    v8 = *(_DWORD *)v5; /*0x625b55*/
    v9 = (ObjectClass *)v7; /*0x625b57*/
    v10 = v5 + 8; /*0x625b5c*/
    *(_DWORD *)v7 = v8; /*0x625b5f*/
    *(_DWORD *)(v7 + 4) = *(v10 - 1); /*0x625b64*/
    v11 = ntohs(*(_WORD *)(v7 + 6)); /*0x625b78*/
    v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *(_DWORD *)&v9->__pad_0[8] = v12; /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    v13 = -(ntohs(*(_WORD *)&v9->__pad_0[6]) & 3) & 3; /*0x625baf*/
    aP1a = (ObjectClass *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    File::Dispatch((int)v9); /*0x625bd0*/
    result = this; /*0x625bd5*/
    *(_DWORD *)&v9->__pad_0[12] = this->q004; /*0x625bde*/
    this->q004 = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = (char *)aP1a; /*0x625b4a*/
  }
  return result; /*0x625bec*/
}


// ==== 0x00625C00  ObjectClass::Event_Process_625C00  this=ObjectClass  sig=csp ====
u_short *__thiscall Event_Process_625C00(int this, ObjectClass *aP1)
{
  ObjectClass *i; // eax
  int v4; // ecx
  AbstractClass *v5; // eax
  IUnknown *ecx3; // ecx
  AbstractClass *v6; // edi
  IUnknown *v8; // edx
  ObjectClass *v7; // ebx
  char *v10; // ebp
  ObjectClass *v11; // edx
  char *v12; // ebp
  u_short v13; // ax
  ObjectClass *v14; // edx
  unsigned int v15; // edx
  char *v16; // edi
  u_short *aP1a; // [esp+14h] [ebp+4h]

  *(_DWORD *)aP1->__pad_0 = 4; /*0x625c0a*/
  for ( i = *(ObjectClass **)(this + 4); i; i = *(ObjectClass **)&i->__pad_0[12] ) /*0x625c15*/
  {
    v4 = *(_DWORD *)aP1->__pad_0 + 8; /*0x625c1b*/
    *(_DWORD *)aP1->__pad_0 = v4; /*0x625c1e*/
    *(_DWORD *)aP1->__pad_0 = *(unsigned __int16 *)&i->__pad_0[6] /*0x625c32*/
                            + v4
                            + (-(((unsigned __int8)*(_WORD *)&i->__pad_0[6] + (_BYTE)v4) & 3) & 3);
  }
  v5 = (AbstractClass *)__2_YAPAXI_Z(*(_DWORD *)aP1->__pad_0); /*0x625c3e*/
  LOWORD(ecx3) = *(_WORD *)aP1->__pad_0; /*0x625c43*/
  v6 = v5; /*0x625c49*/
  aP1a = (u_short *)v5; /*0x625c4c*/
  *(_WORD *)v5->__pad_0 = htons(ecx3); /*0x625c55*/
  LOWORD(v8) = *(_WORD *)(this + 2); /*0x625c58*/
  *(_WORD *)&v6->__pad_0[2] = htons(v8); /*0x625c65*/
  v7 = *(ObjectClass **)(this + 4); /*0x625c69*/
  v10 = &v6->__pad_0[4]; /*0x625c6c*/
  if ( !v7 ) /*0x625c71*/
    return (u_short *)v6; /*0x625d0d*/
  do /*0x625cfc*/
  {
    sub_4CB8B0((int)v7); /*0x625c79*/
    *(_DWORD *)v10 = *(_DWORD *)v7->__pad_0; /*0x625c80*/
    *((_DWORD *)v10 + 1) = *(_DWORD *)&v7->__pad_0[4]; /*0x625c86*/
    LOWORD(v11) = *(_WORD *)&v7->__pad_0[6]; /*0x625c89*/
    v12 = v10 + 8; /*0x625c8e*/
    qmemcpy(v12, *(const void **)&v7->__pad_0[8], ntohs(v11)); /*0x625ca9*/
    v13 = ntohs((ObjectClass *)*(unsigned __int16 *)&v7->__pad_0[6]); /*0x625cb7*/
    LOWORD(v14) = *(_WORD *)&v7->__pad_0[6]; /*0x625cbc*/
    v10 = &v12[v13]; /*0x625cc6*/
    v15 = -(ntohs(v14) & 3) & 3; /*0x625cd5*/
    if ( v15 ) /*0x625cd8*/
    {
      memset(v10, 0, 4 * (v15 >> 2)); /*0x625ce5*/
      v16 = &v10[4 * (v15 >> 2)]; /*0x625ce5*/
      v10 += v15; /*0x625cec*/
      memset(v16, 0, v15 & 3); /*0x625cee*/
    }
    File::Dispatch((int)v7); /*0x625cf2*/
    v7 = *(ObjectClass **)&v7->__pad_0[12]; /*0x625cf7*/
  }
  while ( v7 ); /*0x625cfc*/
  return aP1a; /*0x625d06*/
}


// ==== 0x00625DB0  File::FindByPrefix  this=CampaignClass  sig=csp ====
bool __thiscall sub_625DB0(_DWORD *this, char *Str1, _BYTE *a3)
{
  int v3; // esi

  v3 = this->vtable2; /*0x625db1*/
  if ( !v3 ) /*0x625db7*/
    return 0; /*0x625dd4*/
  while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625dcb*/
  {
    v3 = *(_DWORD *)(v3 + 12); /*0x625dcd*/
    if ( !v3 ) /*0x625dd2*/
      return 0; /*0x625dd2*/
  }
  *a3 = **(_BYTE **)(v3 + 8); /*0x625def*/
  return v3 != 0; /*0x625dd6*/
}


// ==== 0x00625F60  HashTable::FindString  this=CampaignClass  sig=csp ====
bool __thiscall HashTable::FindString(_DWORD *this, char *Str1, IUnknown *aP2)
{
  int v3; // esi
  BOOL v4; // eax

  v3 = this->vtable2; /*0x625f61*/
  if ( v3 ) /*0x625f67*/
  {
    while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625f7b*/
    {
      v3 = *(_DWORD *)(v3 + 12); /*0x625f7d*/
      if ( !v3 ) /*0x625f82*/
        return 0; /*0x625f82*/
    }
    aP2->field_0 = **(_DWORD **)(v3 + 8); /*0x625f9f*/
    LOBYTE(v4) = v3 != 0; /*0x625fa5*/
  }
  else
  {
    return 0; /*0x625f84*/
  }
  return v4; /*0x625f86*/
}


// ==== 0x00625FB0  HashTable::FindChunk  this=CampaignClass  sig=csp ====
bool __thiscall HashTable::FindChunk(_DWORD *this, char *Str1, void *a2, CCINIClass *aP3)
{
  int v4; // ebx
  unsigned int v6; // ecx

  v4 = this->vtable2; /*0x625fb1*/
  if ( !v4 ) /*0x625fb7*/
    return 0; /*0x625fd4*/
  while ( strncmp(Str1, (const char *)v4, 4u) ) /*0x625fcb*/
  {
    v4 = *(_DWORD *)(v4 + 12); /*0x625fcd*/
    if ( !v4 ) /*0x625fd2*/
      return 0; /*0x625fd2*/
  }
  v6 = *(_DWORD *)aP3->__pad_0; /*0x625fee*/
  if ( *(unsigned __int16 *)(v4 + 6) < *(int *)aP3->__pad_0 ) /*0x625ff2*/
    v6 = *(unsigned __int16 *)(v4 + 6); /*0x625ff4*/
  qmemcpy(a2, *(const void **)(v4 + 8), v6); /*0x626003*/
  *(_DWORD *)aP3->__pad_0 = *(unsigned __int16 *)(v4 + 6); /*0x626013*/
  return v4 != 0; /*0x625fd6*/
}


// ==== 0x00626020  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_626020(char *this, int a2)
{
  char *result; // eax
  _BYTE *v3; // edx
  int v4; // esi
  char *v5; // edx
  int v6; // esi
  char *v7; // ebx

  result = this; /*0x626021*/
  v3 = this + 2; /*0x626026*/
  v4 = 256; /*0x626029*/
  do /*0x62603c*/
  {
    *(v3 - 2) = 0; /*0x626030*/
    *(v3 - 1) = 0; /*0x626033*/
    *v3 = 0; /*0x626036*/
    v3 += 3; /*0x626038*/
    --v4; /*0x62603b*/
  }
  while ( v4 ); /*0x62603c*/
  v5 = this; /*0x626042*/
  v6 = 256; /*0x626044*/
  do /*0x62605d*/
  {
    v7 = v5; /*0x62604b*/
    v5 += 3; /*0x62604d*/
    --v6; /*0x626050*/
    *(_WORD *)v7 = *(_WORD *)a2; /*0x626054*/
    v7[2] = *(_BYTE *)(a2 + 2); /*0x62605a*/
  }
  while ( v6 ); /*0x62605d*/
  return result; /*0x62605f*/
}


// ==== 0x00626070  ObjectClass::method  this=ObjectClass  sig=csp ====
void *__thiscall sub_626070(char *this, const void *a2)
{
  void *result; // eax
  _BYTE *v3; // ecx
  int v4; // edx

  result = this; /*0x626070*/
  v3 = this + 2; /*0x626075*/
  v4 = 256; /*0x626078*/
  do /*0x62608b*/
  {
    *(v3 - 2) = 0; /*0x62607f*/
    *(v3 - 1) = 0; /*0x626082*/
    *v3 = 0; /*0x626085*/
    v3 += 3; /*0x626087*/
    --v4; /*0x62608a*/
  }
  while ( v4 ); /*0x62608b*/
  qmemcpy(result, a2, 0x300u); /*0x626098*/
  return result; /*0x62609a*/
}


// ==== 0x006260A0  ObjectClass::method_6260A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_6260A0(const void *this, const void *a2)
{
  return this == a2 || memcmp(this, a2, 0x300u) == 0; /*0x6260ac*/
}


// ==== 0x006260D0  Block::Copy  this=BlowStraw  sig=csp ====
void *__thiscall Block_Copy(void *this, const void *a2)
{
  void *result; // eax

  result = this; /*0x6260d5*/
  if ( this != a2 ) /*0x6260d9*/
    qmemcpy(this, a2, 0x300u); /*0x6260e3*/
  return result; /*0x6260e6*/
}


// ==== 0x006260F0  ObjectClass::method_6260F0  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall sub_6260F0(unsigned __int8 *this, ObjectClass *aP1)
{
  int v3; // edi
  unsigned __int8 result; // al

  v3 = 256; /*0x6260f9*/
  do /*0x62610f*/
  {
    result = Color::Lerp(this, aP1, &byte_A83CD9); /*0x626106*/
    this += 3; /*0x62610b*/
    --v3; /*0x62610e*/
  }
  while ( v3 ); /*0x62610f*/
  return result; /*0x626111*/
}


// ==== 0x00626120  ObjectClass::Render_Helper  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall Render_Helper(unsigned __int8 *this, ObjectClass *aP1, int a3)
{
  int i; // esi
  unsigned __int8 result; // al

  for ( i = 0; i < 256; ++i ) /*0x62612c*/
  {
    result = Color::Lerp(this, aP1, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x626149*/
    this += 3; /*0x62614f*/
  }
  return result; /*0x62615a*/
}


// ==== 0x00626170  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall sub_626170(unsigned __int8 *this, ObjectClass *aP1, int a3)
{
  int i; // esi
  unsigned __int8 result; // al

  for ( i = 0; i < 256; ++i ) /*0x62617c*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x626180*/
      result = Color::Lerp(this, aP1, &byte_A83CD9); /*0x62618e*/
    this += 3; /*0x626194*/
  }
  return result; /*0x62619f*/
}


// ==== 0x006261B0  ObjectClass::method_6261B0  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall sub_6261B0(unsigned __int8 *this, ObjectClass *aP1, int a3, int a4)
{
  int i; // esi
  unsigned __int8 result; // al

  for ( i = 0; i < 256; ++i ) /*0x6261bc*/
  {
    result = a4; /*0x6261c0*/
    if ( *(_BYTE *)(i + a4) ) /*0x6261c4*/
      result = Color::Lerp(this, aP1, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x6261e3*/
    this += 3; /*0x6261e9*/
  }
  return result; /*0x6261f4*/
}


// ==== 0x00626200  Palette::FindClosestColor  this=Palette  sig=csp ====
int __thiscall Palette_FindClosestColor(char *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v5; // eax
  char *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x626208*/
  v8 = 0; /*0x62620b*/
  v3 = -1; /*0x62620f*/
  do /*0x626237*/
  {
    v7 = this; /*0x626218*/
    this += 3; /*0x626219*/
    v5 = Palette::CalcColorDistance(v7); /*0x62621c*/
    if ( v3 == -1 || v5 < v3 ) /*0x626228*/
    {
      v3 = v5; /*0x62622a*/
      v8 = v2; /*0x62622c*/
    }
    ++v2; /*0x626230*/
  }
  while ( v2 < 256 ); /*0x626237*/
  return v8; /*0x62623d*/
}


// ==== 0x00626250  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_626250(int this, const char *a2, int a3)
{
  strcpy((char *)this, a2); /*0x62626c*/
  *(_DWORD *)(this + 256) = a3; /*0x62627c*/
  return this; /*0x62627b*/
}


// ==== 0x00626290  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_626290(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->q100; /*0x626293*/
  if ( v2 ) /*0x62629b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62629e*/
    for ( i = 0; i < v3; ++i ) /*0x6262a6*/
    {
      v5 = *(_DWORD *)(this->q100 + 4); /*0x6262af*/
      v6 = *(void **)(v5 + 4 * i); /*0x6262b2*/
      if ( v6 ) /*0x6262b7*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v5 + 4 * i)); /*0x6262bb*/
        __3_YAXPAX_Z(v6); /*0x6262c1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->q100; /*0x6262cf*/
    if ( v7 ) /*0x6262d9*/
      (**v7)(v7, 1); /*0x6262df*/
    this->q100 = 0; /*0x6262e1*/
  }
}


// ==== 0x006262F0  ObjectClass::method_6262F0  this=ObjectClass  sig=csp ====
int __thiscall sub_6262F0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // edi
  int v6; // ecx
  void *v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // ecx

  result = this->q100; /*0x6262f3*/
  if ( result ) /*0x6262fb*/
  {
    v4 = *(_DWORD *)(result + 16); /*0x6262fe*/
    for ( i = 0; i < v4; ++i ) /*0x626306*/
    {
      v6 = *(_DWORD *)(this->q100 + 4); /*0x62630f*/
      v7 = *(void **)(v6 + 4 * i); /*0x626312*/
      if ( v7 ) /*0x626317*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v6 + 4 * i)); /*0x62631b*/
        __3_YAXPAX_Z(v7); /*0x626321*/
      }
    }
    v8 = (void (__thiscall ***)(_DWORD, int))this->q100; /*0x62632f*/
    if ( v8 ) /*0x626339*/
      (**v8)(v8, 1); /*0x62633f*/
    this->q100 = 0; /*0x626345*/
    this->q100 = a2; /*0x62634f*/
    return a2; /*0x626341*/
  }
  else
  {
    this->q100 = a2; /*0x62635d*/
  }
  return result; /*0x626355*/
}


// ==== 0x00626370  FileSystem::mountDrive  this=CampaignClass  sig=csp ====
void __thiscall sub_626370(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->uniqueId; /*0x626373*/
  if ( v2 ) /*0x62637b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62637e*/
    for ( i = 0; i < v3; ++i ) /*0x626386*/
    {
      v5 = *(_DWORD *)(this->uniqueId + 4); /*0x62638f*/
      v6 = *(void **)(v5 + 4 * i); /*0x626392*/
      if ( v6 ) /*0x626397*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v5 + 4 * i)); /*0x62639b*/
        __3_YAXPAX_Z(v6); /*0x6263a1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->uniqueId; /*0x6263af*/
    if ( v7 ) /*0x6263b9*/
      (**v7)(v7, 1); /*0x6263bf*/
    this->uniqueId = 0; /*0x6263c1*/
  }
}


// ==== 0x006263D0  FileExtension::MapHandler  this=IUnknown  sig=csp ====
int __thiscall FileExtension::MapHandler(ObjectClass *this)
{
  CoordStruct *v1; // edi
  CoordStruct *v3; // eax
  VectorClass *v4; // eax
  VectorClass *v5; // esi
  _DWORD *eax6; // eax
  VectorClass *v6; // eax
  int *v8; // eax
  int X; // esi
  int v10; // ebp
  int v11; // esi
  int v12; // ebx
  int v13; // edi
  int result; // eax
  int v15; // ebp
  _DWORD *v16; // ebx
  int v17; // edx
  int v18; // esi
  _DWORD *v19; // ebp
  int v20; // esi
  int v21; // edi
  ObjectClass *v22; // eax
  int v23; // esi
  int v24; // esi
  int v25; // ebp
  int v26; // esi
  int i; // ebx
  int v28; // edi
  int v30; // [esp+14h] [ebp-208h] BYREF
  ObjectClass String; // [esp+18h] [ebp-204h] BYREF
  _BYTE v32[260]; // [esp+118h] [ebp-104h] BYREF

  v1 = *(&g_MatrixTransformState + 5816); /*0x6263da*/
  if ( !*(&g_MatrixTransformState + 5816) ) /*0x6263e8*/
  {
    v3 = (CoordStruct *)__2_YAPAXI_Z(0x10u); /*0x6263f0*/
    v1 = v3; /*0x6263f5*/
    if ( v3 ) /*0x6263fc*/
    {
      v3->X = -1; /*0x626404*/
      v4 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x62640a*/
      v5 = v4; /*0x62640f*/
      if ( v4 ) /*0x626416*/
      {
        StringVector::Construct(v4, 0, 0); /*0x62641e*/
        v5->vtable0 = &vt_DynamicVectorClass_char; /*0x626423*/
        v5[1].Items = (void *)10; /*0x626429*/
        v5[1].vtable0 = 0; /*0x626430*/
      }
      else
      {
        v5 = 0; /*0x626439*/
      }
      v1->Y = (int)v5; /*0x62643d*/
      eax6 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x626440*/
      if ( eax6 ) /*0x62644a*/
        v6 = (VectorClass *)FileExtension::Constructor(eax6, 0, 0); /*0x626452*/
      else
        v6 = 0; /*0x626459*/
      v1->Z = (int)v6; /*0x62645d*/
      v8 = (int *)__2_YAPAXI_Z(0x10u); /*0x626460*/
      if ( v8 ) /*0x62646a*/
        v1[1].X = (int)DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x62647c*/
      else
        v1[1].X = 0; /*0x626483*/
    }
    else
    {
      v1 = 0; /*0x626488*/
    }
    *(&g_MatrixTransformState + 5816) = v1; /*0x62648a*/
  }
  String::CopyUpper(String.__pad_0, this); /*0x626495*/
  X = v1[1].X; /*0x62649a*/
  v10 = *(_DWORD *)X + 24 * ((*(int (__thiscall **)(ObjectClass *))(X + 4))(&String) % *(_DWORD *)(X + 8)); /*0x6264b1*/
  v11 = *(_DWORD *)(v10 + 16) - 1; /*0x6264b4*/
  if ( v11 < 0 ) /*0x6264b5*/
    goto LABEL_21; /*0x6264b5*/
  v12 = 260 * v11; /*0x6264be*/
  while ( 1 ) /*0x6264c6*/
  {
    v13 = *(_DWORD *)(v10 + 4) + v12; /*0x6264c6*/
    if ( String::Equals((const char *)v13, &String) ) /*0x6264cf*/
      break; /*0x6264cf*/
    --v11; /*0x6264d8*/
    v12 -= 260; /*0x6264d9*/
    if ( v11 < 0 ) /*0x6264e1*/
      goto LABEL_21; /*0x6264e1*/
  }
  if ( v13 == -256 || (result = *(_DWORD *)(*(_DWORD *)(v13 + 256) + 256)) == 0 ) /*0x6264f9*/
  {
LABEL_21:
    v15 = (int)*(&g_MatrixTransformState + 5816); /*0x6264ff*/
    v16 = MIXFile::Load(*(&g_MatrixTransformState + 5816), this); /*0x626511*/
    v17 = __2_YAPAXI_Z(0x104u); /*0x62651d*/
    if ( v17 ) /*0x626524*/
    {
      strcpy((char *)v17, this->__pad_0); /*0x62653e*/
      *(_DWORD *)(v17 + 256) = v16; /*0x626547*/
      v30 = v17; /*0x62654d*/
    }
    else
    {
      v30 = 0; /*0x626553*/
    }
    String::CopyUpper(String.__pad_0, this); /*0x626564*/
    v18 = *(_DWORD *)(v15 + 12); /*0x626569*/
    v19 = (_DWORD *)(*(_DWORD *)v18 /*0x626580*/
                   + 24 * ((*(int (__thiscall **)(ObjectClass *))(v18 + 4))(&String) % *(_DWORD *)(v18 + 8)));
    v20 = v19[4] - 1; /*0x626583*/
    if ( v20 < 0 ) /*0x626584*/
    {
LABEL_28:
      v22 = (ObjectClass *)FileExtension::Check((int)v32, String.__pad_0, &v30); /*0x6265ae*/
      FileExtension::CheckExtensionMatch(v19, v22); /*0x6265c7*/
    }
    else
    {
      v21 = 260 * v20; /*0x62658d*/
      while ( !String::Equals((const char *)(v21 + v19[1]), &String) ) /*0x6265a1*/
      {
        --v20; /*0x6265a3*/
        v21 -= 260; /*0x6265a4*/
        if ( v20 < 0 ) /*0x6265ac*/
          goto LABEL_28; /*0x6265ac*/
      }
    }
    v23 = (int)*(&g_MatrixTransformState + 5816); /*0x6265cc*/
    String::CopyUpper(String.__pad_0, this); /*0x6265d7*/
    v24 = *(_DWORD *)(v23 + 12); /*0x6265dc*/
    v25 = *(_DWORD *)v24 + 24 * ((*(int (__thiscall **)(ObjectClass *))(v24 + 4))(&String) % *(_DWORD *)(v24 + 8)); /*0x6265f3*/
    v26 = *(_DWORD *)(v25 + 16) - 1; /*0x6265f6*/
    if ( v26 < 0 ) /*0x6265f7*/
      return 0; /*0x6265f7*/
    for ( i = 260 * v26; ; i -= 260 ) /*0x626600*/
    {
      v28 = i + *(_DWORD *)(v25 + 4); /*0x62660a*/
      if ( String::Equals((const char *)v28, &String) ) /*0x62660f*/
        break; /*0x62660f*/
      if ( --v26 < 0 ) /*0x626621*/
        return 0; /*0x62662f*/
    }
    if ( v28 == -256 ) /*0x626638*/
      return 0; /*0x62663d*/
    else
      return *(_DWORD *)(*(_DWORD *)(v28 + 256) + 256); /*0x626649*/
  }
  return result; /*0x626623*/
}


// ==== 0x00626660  HashStringMod31  this=-  sig=ida-proto ====
int __fastcall String_HashMod31(char *a1)
{
  char v1; // dl
  int result; // eax

  v1 = *a1; /*0x626660*/
  for ( result = 0; *a1; v1 = *a1 ) /*0x626660*/
  {
    ++a1; /*0x62667d*/
    result = (v1 + 26 * result) % 31; /*0x62667e*/
  }
  return result; /*0x626687*/
}


// ==== 0x00626690  FlagSystem::GetNextActive  this=FlagSystem  sig=csp ====
int __thiscall FlagSystem_GetNextActive(_BYTE *this)
{
  _DWORD *v1; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // edx
  char *v6; // ebp
  int v7; // edx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int i; // ebx
  int v15; // esi
  int v16; // [esp+10h] [ebp-4h]

  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x626699*/
  if ( *(this + 8) ) /*0x62669f*/
    return 0; /*0x62669f*/
  if ( *(_DWORD *)this >= v1[2] ) /*0x6266ad*/
  {
LABEL_7:
    *(this + 8) = 1; /*0x6266ff*/
    return 0; /*0x62670a*/
  }
  while ( 1 ) /*0x6266ba*/
  {
    v3 = *v1 + 24 * *(_DWORD *)this; /*0x6266ba*/
    v4 = *((_DWORD *)this + 1); /*0x6266bd*/
    if ( v4 < *(_DWORD *)(v3 + 16) ) /*0x6266c2*/
      break; /*0x6266c2*/
LABEL_6:
    v7 = *(_DWORD *)this; /*0x6266ea*/
    *((_DWORD *)this + 1) = 0; /*0x6266ec*/
    *(_DWORD *)this = ++v7; /*0x6266f4*/
    if ( v7 >= v1[2] ) /*0x6266fd*/
      goto LABEL_7; /*0x6266fd*/
  }
  while ( 1 ) /*0x6266c4*/
  {
    v5 = *(_DWORD *)(v3 + 4); /*0x6266c4*/
    *((_DWORD *)this + 1) = v4 + 1; /*0x6266cf*/
    v6 = (char *)(v5 + 260 * v4); /*0x6266d2*/
    if ( !Flag::IsZero(v6) ) /*0x6266d7*/
      break; /*0x6266d7*/
    v4 = *((_DWORD *)this + 1); /*0x6266e0*/
    if ( v4 >= *(_DWORD *)(v3 + 16) ) /*0x6266e8*/
      goto LABEL_6; /*0x6266e8*/
  }
  if ( !v6 ) /*0x62670d*/
    return 0; /*0x626712*/
  v9 = *((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x62671e*/
  v10 = (*(int (__thiscall **)(char *))(v9 + 4))(v6); /*0x626721*/
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)) + 16); /*0x62672d*/
  v12 = *(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)); /*0x626731*/
  v13 = v11 - 1; /*0x626734*/
  v16 = v12; /*0x626735*/
  if ( v13 < 0 ) /*0x626739*/
    return 0; /*0x626739*/
  for ( i = 260 * v13; ; i -= 260 ) /*0x626742*/
  {
    v15 = *(_DWORD *)(v12 + 4) + i; /*0x626750*/
    if ( String::Equals((const char *)v15, v6) ) /*0x626755*/
      break; /*0x626755*/
    if ( --v13 < 0 ) /*0x626767*/
      return 0; /*0x626770*/
    v12 = v16; /*0x626747*/
  }
  if ( v15 == -256 ) /*0x626779*/
    return 0; /*0x62677e*/
  else
    return *(_DWORD *)(*(_DWORD *)(v15 + 256) + 256); /*0x626788*/
}


// ==== 0x006267A0  FileSystem::InitExtensionState  this=DynamicVector  sig=csp ====
void __thiscall FileSystem::InitExtensionState(void *this)
{
  void **v1; // edi
  void *v2; // esi
  void **v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // ebp
  int v19; // edx
  char *v20; // esi
  int v21; // ebp
  _DWORD *v22; // esi
  int v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch]
  char v25; // [esp+18h] [ebp-108h]
  void *v26; // [esp+1Ch] [ebp-104h]
  char String[256]; // [esp+20h] [ebp-100h] BYREF

  v1 = (void **)MEMORY[0xAC48F0]; /*0x6267aa*/
  v2 = this; /*0x6267b0*/
  v26 = this; /*0x6267b4*/
  if ( !MEMORY[0xAC48F0] ) /*0x6267b8*/
  {
    v3 = (void **)__2_YAPAXI_Z(0x10u); /*0x6267c0*/
    v1 = v3; /*0x6267c5*/
    if ( !v3 ) /*0x6267cc*/
    {
      v1 = 0; /*0x6268bf*/
      MEMORY[0xAC48F0] = 0; /*0x6268c1*/
      goto LABEL_19; /*0x6268c1*/
    }
    *v3 = (void *)-1; /*0x6267d4*/
    v4 = __2_YAPAXI_Z(0x18u); /*0x6267da*/
    v5 = v4; /*0x6267df*/
    v6 = 0; /*0x6267e1*/
    if ( v4 ) /*0x6267ed*/
    {
      StringVector::Construct(v4, 0, 0); /*0x6267f3*/
      *v5 = &vt_DynamicVectorClass_char; /*0x6267f8*/
      v5[5] = 10; /*0x6267fe*/
      v5[4] = 0; /*0x626801*/
    }
    else
    {
      v5 = 0; /*0x626806*/
    }
    v1[1] = v5; /*0x62680a*/
    v7 = __2_YAPAXI_Z(0x18u); /*0x62680d*/
    v8 = v7; /*0x626812*/
    if ( v7 ) /*0x626819*/
    {
      VectorClass::ConstructHSV(v7, 0, 0); /*0x62681f*/
      *v8 = &vt_DynamicVectorClass_HSVClass; /*0x626824*/
      v8[5] = 10; /*0x62682a*/
      v8[4] = 0; /*0x62682d*/
    }
    else
    {
      v8 = 0; /*0x626832*/
    }
    v1[2] = v8; /*0x626836*/
    v9 = __2_YAPAXI_Z(0x10u); /*0x626839*/
    v10 = v9; /*0x62683e*/
    if ( v9 ) /*0x626845*/
    {
      v9[1] = HashStringMod31; /*0x62684c*/
      v9[2] = 31; /*0x626853*/
      v9[3] = 10; /*0x62685a*/
      v11 = __2_YAPAXI_Z(0x2ECu); /*0x62685d*/
      if ( v11 ) /*0x626867*/
      {
        v6 = v11 + 1; /*0x62686e*/
        *v11 = 31; /*0x626876*/
        Array::ForEach((int)(v11 + 1), 24, 31, (int (__thiscall *)(int))FileSystem::readFile); /*0x62687c*/
      }
      v12 = v10[2]; /*0x626881*/
      v13 = 0; /*0x626884*/
      *v10 = v6; /*0x626888*/
      if ( v12 > 0 ) /*0x62688a*/
      {
        v14 = 0; /*0x62688c*/
        do /*0x62689d*/
        {
          ++v13; /*0x626890*/
          *(_DWORD *)(*v10 + v14 + 20) = 10; /*0x626891*/
          v14 += 24; /*0x626898*/
        }
        while ( v13 < v10[2] ); /*0x62689d*/
        v1[3] = v10; /*0x62689f*/
        v2 = v26; /*0x6268a2*/
        MEMORY[0xAC48F0] = v1; /*0x6268a6*/
        goto LABEL_19; /*0x6268ac*/
      }
    }
    else
    {
      v10 = 0; /*0x6268ae*/
    }
    v1[3] = v10; /*0x6268b0*/
    v2 = v26; /*0x6268b3*/
    MEMORY[0xAC48F0] = v1; /*0x6268b7*/
  }
LABEL_19:
  if ( *v1 != v2 ) /*0x6268c9*/
  {
    v15 = v1[3]; /*0x6268cf*/
    v16 = 0; /*0x6268d2*/
    v17 = 0; /*0x6268d4*/
    *v1 = v2; /*0x6268d6*/
    v23 = 0; /*0x6268d8*/
    v24 = 0; /*0x6268dc*/
    v25 = 0; /*0x6268e0*/
    if ( (int)v15[2] > 0 ) /*0x6268e9*/
    {
      while ( 1 ) /*0x6268f4*/
      {
        v18 = *v15 + 24 * v16; /*0x6268f4*/
        if ( *(int *)(v18 + 16) > 0 ) /*0x6268fd*/
          break; /*0x6268fd*/
LABEL_25:
        ++v16; /*0x62692b*/
        v17 = 0; /*0x62692c*/
        v23 = v16; /*0x62692e*/
        v24 = 0; /*0x626932*/
        if ( v16 >= v15[2] ) /*0x626939*/
          return; /*0x626939*/
      }
      while ( 1 ) /*0x6268ff*/
      {
        v19 = *(_DWORD *)(v18 + 4); /*0x6268ff*/
        v24 = v17 + 1; /*0x62690a*/
        v20 = (char *)(v19 + 260 * v17); /*0x62690e*/
        if ( !Flag::IsZero(v20) ) /*0x626913*/
          break; /*0x626913*/
        v17 = v24; /*0x62691c*/
        if ( v24 >= *(_DWORD *)(v18 + 16) ) /*0x626925*/
        {
          v16 = v23; /*0x626927*/
          goto LABEL_25; /*0x626927*/
        }
      }
      for ( ; v20; v20 = (char *)FileSystem::closeFile(&v23) ) /*0x626948*/
      {
        String::CopyUpper(String, v20); /*0x62694f*/
        v21 = *(_DWORD *)FileSystem::openFile(String); /*0x626961*/
        v22 = MIXFile::Load(v1, v20); /*0x62696d*/
        FileSystem::mountDrive(v21); /*0x62696f*/
        *(_DWORD *)(v21 + 256) = v22; /*0x626978*/
      }
    }
  }
}


// ==== 0x006269A0  ObjectClass::System_Reset  this=ObjectClass  sig=csp ====
int sub_6269A0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int *v7; // eax
  int v8; // esi
  int v9; // edi

  v0 = MEMORY[0xAC48F0]; /*0x6269a0*/
  if ( !MEMORY[0xAC48F0] ) /*0x6269a9*/
  {
    v1 = __2_YAPAXI_Z(0x10u); /*0x6269b1*/
    v2 = v1; /*0x6269b6*/
    if ( v1 ) /*0x6269bd*/
    {
      *v1 = -1; /*0x6269c5*/
      v3 = __2_YAPAXI_Z(0x18u); /*0x6269cb*/
      v4 = v3; /*0x6269d0*/
      if ( v3 ) /*0x6269d7*/
      {
        StringVector::Construct(v3, 0, 0); /*0x6269df*/
        *v4 = &vt_DynamicVectorClass_char; /*0x6269e4*/
        v4[5] = 10; /*0x6269ea*/
        v4[4] = 0; /*0x6269f1*/
      }
      else
      {
        v4 = 0; /*0x6269fa*/
      }
      v2[1] = v4; /*0x6269fe*/
      v5 = __2_YAPAXI_Z(0x18u); /*0x626a01*/
      v6 = v5; /*0x626a06*/
      if ( v5 ) /*0x626a0d*/
      {
        VectorClass::ConstructHSV(v5, 0, 0); /*0x626a15*/
        *v6 = &vt_DynamicVectorClass_HSVClass; /*0x626a1a*/
        v6[5] = 10; /*0x626a20*/
        v6[4] = 0; /*0x626a27*/
      }
      else
      {
        v6 = 0; /*0x626a30*/
      }
      v2[2] = v6; /*0x626a34*/
      v7 = (int *)__2_YAPAXI_Z(0x10u); /*0x626a37*/
      if ( v7 ) /*0x626a41*/
        v2[3] = DynamicVectorArray::Constructor(v7, 10, 31, (int)HashStringMod31); /*0x626a53*/
      else
        v2[3] = 0; /*0x626a5c*/
      v0 = v2; /*0x626a56*/
    }
    else
    {
      v0 = 0; /*0x626a63*/
    }
    MEMORY[0xAC48F0] = v0; /*0x626a65*/
  }
  v8 = 0; /*0x626a6d*/
  v9 = *(_DWORD *)(v0[1] + 16); /*0x626a6f*/
  if ( v9 > 0 ) /*0x626a74*/
  {
    do /*0x626a90*/
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v0[1] + 4) + 4 * v8)); /*0x626a80*/
      v0 = MEMORY[0xAC48F0]; /*0x626a85*/
      ++v8; /*0x626a8d*/
    }
    while ( v8 < v9 ); /*0x626a90*/
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v0[1] + 12))(v0[1]); /*0x626a99*/
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xAC48F0] + 2) + 12))(*((_DWORD *)MEMORY[0xAC48F0] + 2)); /*0x626aa9*/
}


// ==== 0x00626AB0  System_Read  this=char*  sig=csp ====
char __fastcall sub_626AB0(const char *a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int *v8; // eax
  char *v9; // ebp
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // edx

  if ( !MEMORY[0xAC48F0] ) /*0x626ac5*/
  {
    v2 = __2_YAPAXI_Z(0x10u); /*0x626acd*/
    v3 = v2; /*0x626ad2*/
    if ( v2 ) /*0x626ad9*/
    {
      *v2 = -1; /*0x626ae1*/
      v4 = __2_YAPAXI_Z(0x18u); /*0x626ae8*/
      v5 = v4; /*0x626aed*/
      if ( v4 ) /*0x626af9*/
      {
        StringVector::Construct(v4, 0, 0); /*0x626b01*/
        *v5 = &vt_DynamicVectorClass_char; /*0x626b06*/
        v5[5] = 10; /*0x626b0c*/
        v5[4] = 0; /*0x626b0f*/
      }
      else
      {
        v5 = 0; /*0x626b18*/
      }
      v3[1] = v5; /*0x626b1c*/
      v6 = __2_YAPAXI_Z(0x18u); /*0x626b1f*/
      v7 = v6; /*0x626b24*/
      if ( v6 ) /*0x626b2b*/
      {
        VectorClass::ConstructHSV(v6, 0, 0); /*0x626b33*/
        *v7 = &vt_DynamicVectorClass_HSVClass; /*0x626b38*/
        v7[5] = 10; /*0x626b3e*/
        v7[4] = 0; /*0x626b41*/
      }
      else
      {
        v7 = 0; /*0x626b4a*/
      }
      v3[2] = v7; /*0x626b4e*/
      v8 = (int *)__2_YAPAXI_Z(0x10u); /*0x626b51*/
      if ( v8 ) /*0x626b5b*/
        v3[3] = DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x626b6c*/
      else
        v3[3] = 0; /*0x626b79*/
      MEMORY[0xAC48F0] = v3; /*0x626b6f*/
    }
    else
    {
      MEMORY[0xAC48F0] = 0; /*0x626b84*/
    }
  }
  v9 = (char *)__2_YAPAXI_Z(0x100u); /*0x626b9c*/
  strcpy(v9, a1); /*0x626bb5*/
  v10 = *((_DWORD *)MEMORY[0xAC48F0] + 1); /*0x626bc4*/
  v11 = *(_DWORD *)(v10 + 8); /*0x626bc7*/
  if ( *(_DWORD *)(v10 + 16) < v11 /*0x626bec*/
    || (*(_BYTE *)(v10 + 13) || !v11)
    && (v12 = *(_DWORD *)(v10 + 20), v12 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v11 + v12, 0) )
  {
    v13 = *(_DWORD *)(v10 + 16); /*0x626bf3*/
    v14 = *(_DWORD *)(v10 + 4); /*0x626bf6*/
    *(_DWORD *)(v10 + 16) = v13 + 1; /*0x626bfc*/
    *(_DWORD *)(v14 + 4 * v13) = v9; /*0x626bff*/
  }
  v15 = *((_DWORD *)MEMORY[0xAC48F0] + 2); /*0x626c07*/
  v16 = *(_DWORD *)(v15 + 8); /*0x626c0a*/
  if ( *(_DWORD *)(v15 + 16) < v16 /*0x626c34*/
    || ((LOBYTE(v17) = *(_BYTE *)(v15 + 13), (_BYTE)v17) || !v16)
    && (v17 = *(_DWORD *)(v15 + 20), v17 > 0)
    && (LOBYTE(v17) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(v15, v16 + v17, 0), (_BYTE)v17) )
  {
    v18 = *(_DWORD *)(v15 + 16); /*0x626c36*/
    v19 = v18 + 1; /*0x626c39*/
    v20 = 3 * v18; /*0x626c3c*/
    v17 = *(_DWORD *)(v15 + 4); /*0x626c3f*/
    *(_DWORD *)(v15 + 16) = v19; /*0x626c42*/
    v21 = v17 + v20; /*0x626c45*/
    *(_WORD *)v21 = *(_WORD *)a2; /*0x626c4e*/
    LOBYTE(v17) = *(_BYTE *)(a2 + 2); /*0x626c51*/
    *(_BYTE *)(v21 + 2) = v17; /*0x626c54*/
  }
  return v17; /*0x626c57*/
}


// ==== 0x00626C60  ObjectClass::Surface_Update  this=ObjectClass  sig=csp ====
int sub_626C60()
{
  _DWORD *v0; // eax
  _DWORD *v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx

  if ( MEMORY[0xAC48F0] ) /*0x626c68*/
    return *(_DWORD *)(*((_DWORD *)MEMORY[0xAC48F0] + 1) + 16); /*0x626d93*/
  v0 = __2_YAPAXI_Z(0x10u); /*0x626c70*/
  v1 = v0; /*0x626c75*/
  if ( v0 ) /*0x626c7c*/
  {
    *v0 = -1; /*0x626c86*/
    v2 = __2_YAPAXI_Z(0x18u); /*0x626c8c*/
    v3 = v2; /*0x626c91*/
    if ( v2 ) /*0x626c98*/
    {
      StringVector::Construct(v2, 0, 0); /*0x626ca0*/
      *v3 = &vt_DynamicVectorClass_char; /*0x626caa*/
      v3[5] = 10; /*0x626cb0*/
      v3[4] = 0; /*0x626cb3*/
    }
    else
    {
      v3 = 0; /*0x626cbc*/
    }
    v1[1] = v3; /*0x626cc5*/
    v4 = __2_YAPAXI_Z(0x18u); /*0x626cc8*/
    v5 = v4; /*0x626ccd*/
    if ( v4 ) /*0x626cd4*/
    {
      VectorClass::ConstructHSV(v4, 0, 0); /*0x626cdc*/
      *v5 = &vt_DynamicVectorClass_HSVClass; /*0x626ce1*/
      v5[5] = 10; /*0x626ce7*/
      v5[4] = 0; /*0x626cea*/
    }
    else
    {
      v5 = 0; /*0x626cf3*/
    }
    v1[2] = v5; /*0x626cf7*/
    v6 = __2_YAPAXI_Z(0x10u); /*0x626cfa*/
    v7 = v6; /*0x626cff*/
    if ( v6 ) /*0x626d06*/
    {
      v6[1] = HashStringMod31; /*0x626d0d*/
      v6[2] = 31; /*0x626d14*/
      v6[3] = 10; /*0x626d1b*/
      v8 = __2_YAPAXI_Z(0x2ECu); /*0x626d1e*/
      if ( v8 ) /*0x626d28*/
      {
        v9 = v8 + 1; /*0x626d2f*/
        *v8 = 31; /*0x626d37*/
        Array::ForEach((int)(v8 + 1), 24, 31, (int (__thiscall *)(int))FileSystem::readFile); /*0x626d3d*/
      }
      else
      {
        v9 = 0; /*0x626d44*/
      }
      v10 = v7[2]; /*0x626d46*/
      v11 = 0; /*0x626d49*/
      *v7 = v9; /*0x626d4d*/
      if ( v10 > 0 ) /*0x626d4f*/
      {
        v12 = 0; /*0x626d51*/
        do /*0x626d66*/
        {
          ++v11; /*0x626d55*/
          *(_DWORD *)(*v7 + v12 + 20) = 10; /*0x626d56*/
          v12 += 24; /*0x626d61*/
        }
        while ( v11 < v7[2] ); /*0x626d66*/
      }
    }
    else
    {
      v7 = 0; /*0x626d6a*/
    }
    v1[3] = v7; /*0x626d6e*/
    MEMORY[0xAC48F0] = v1; /*0x626d71*/
    return *(_DWORD *)(v1[1] + 16); /*0x626d7c*/
  }
  else
  {
    MEMORY[0xAC48F0] = 0; /*0x626d83*/
    return *(_DWORD *)(MEMORY[4] + 16); /*0x626d8b*/
  }
}


// ==== 0x00626DA0  FileSystem::ProcessNextFileExtension  this=FileSystem  sig=csp ====
int FileSystem::ProcessNextFileExtension()
{
  _DWORD *v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int *v5; // eax
  _DWORD *v6; // ebp
  int v7; // esi
  int v8; // edi
  int v9; // eax
  char *v10; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // ebp
  int v16; // edi
  const char *v17; // edi
  const char *v18; // edi
  _DWORD *v19; // eax
  int k; // ebp
  int v21; // edi
  int v22; // ecx
  _BYTE *v23; // ebx
  int v24; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  _DWORD *v29; // [esp+18h] [ebp-10h]
  int v30; // [esp+1Ch] [ebp-Ch]

  v0 = MEMORY[0xAC48F0]; /*0x626da7*/
  if ( !MEMORY[0xAC48F0] ) /*0x626db1*/
  {
    v1 = __2_YAPAXI_Z(0x10u); /*0x626db9*/
    v0 = v1; /*0x626dbe*/
    if ( v1 ) /*0x626dc5*/
    {
      *v1 = -1; /*0x626dc9*/
      v2 = __2_YAPAXI_Z(0x18u); /*0x626dcf*/
      v3 = v2; /*0x626dd4*/
      if ( v2 ) /*0x626ddb*/
      {
        StringVector::Construct(v2, 0, 0); /*0x626de1*/
        *v3 = &vt_DynamicVectorClass_char; /*0x626de6*/
        v3[5] = 10; /*0x626dec*/
        v3[4] = 0; /*0x626df3*/
      }
      else
      {
        v3 = 0; /*0x626df8*/
      }
      v0[1] = v3; /*0x626dfc*/
      if ( __2_YAPAXI_Z(0x18u) ) /*0x626dff*/
        v4 = FileExtension::Constructor(0, 0); /*0x626e0f*/
      else
        v4 = 0; /*0x626e16*/
      v0[2] = v4; /*0x626e1a*/
      v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v5 ) /*0x626e27*/
        v0[3] = DynamicVectorArray::Constructor(v5, 10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        v0[3] = 0; /*0x626e40*/
    }
    else
    {
      v0 = 0; /*0x626e45*/
    }
    MEMORY[0xAC48F0] = v0; /*0x626e47*/
  }
  v6 = (_DWORD *)v0[3]; /*0x626e4d*/
  v7 = 0; /*0x626e50*/
  v30 = 0; /*0x626e52*/
  v27 = 0; /*0x626e56*/
  if ( (int)v6[2] > 0 ) /*0x626e5d*/
  {
    for ( i = 0; ; i += 24 ) /*0x626e63*/
    {
      v8 = i + *v6; /*0x626e6e*/
      if ( *(int *)(v8 + 16) > 0 ) /*0x626e73*/
        break; /*0x626e73*/
LABEL_19:
      v7 = 0; /*0x626e95*/
      if ( ++v30 >= v6[2] ) /*0x626ea6*/
        return 0; /*0x626ebd*/
    }
    while ( 1 ) /*0x626e7d*/
    {
      v9 = 65 * v7++; /*0x626e7d*/
      v10 = (char *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x626e80*/
      if ( !Flag::IsZero(v10) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v7 >= *(_DWORD *)(v8 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v10 ) /*0x626ec0*/
    {
      v13 = *((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x626ece*/
      v14 = *(_DWORD *)v13 + 24 * ((*(int (__thiscall **)(char *))(v13 + 4))(v10) % *(_DWORD *)(v13 + 8)); /*0x626ee1*/
      v15 = *(_DWORD *)(v14 + 16) - 1; /*0x626ee4*/
      v28 = v14; /*0x626ee5*/
      if ( v15 >= 0 ) /*0x626ee9*/
      {
        v16 = 260 * v15; /*0x626ef6*/
        for ( j = 260 * v15; ; v16 = j ) /*0x626ef9*/
        {
          v17 = (const char *)(*(_DWORD *)(v14 + 4) + v16); /*0x626f0b*/
          if ( String::Equals(v17, v10) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v15; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v15 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v14 = v28; /*0x626eff*/
        }
        v18 = v17 + 256; /*0x626f37*/
        if ( v18 && *(_DWORD *)(*(_DWORD *)v18 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v19 = (_DWORD *)*((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x626f63*/
            ++v27; /*0x626f66*/
            v29 = v19; /*0x626f6a*/
            if ( v30 >= v19[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v30; ; k += 24 ) /*0x626f77*/
            {
              v21 = *v19 + k; /*0x626f7e*/
              if ( v7 < *(_DWORD *)(v21 + 16) ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v7 = 0; /*0x626fb2*/
              if ( ++v30 >= v19[2] ) /*0x626fba*/
                return v27; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v22 = 65 * v7++; /*0x626f8d*/
              v23 = (_BYTE *)(*(_DWORD *)(v21 + 4) + 4 * v22); /*0x626f90*/
              if ( !Flag::IsZero(v23) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v7 >= *(_DWORD *)(v21 + 16) ) /*0x626fa1*/
              {
                v19 = v29; /*0x626fa3*/
                goto LABEL_36; /*0x626fa3*/
              }
            }
            if ( !v23 ) /*0x626fc0*/
              break; /*0x626fc0*/
            v24 = FileSystem::openFile(v23); /*0x626fcb*/
            if ( !v24 ) /*0x626fd2*/
              break; /*0x626fd2*/
          }
          while ( *(_DWORD *)(*(_DWORD *)v24 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v27; /*0x626eb6*/
}


// ==== 0x00626FF0  WinMainSetup_Setup_626FF0  this=-  sig=ida-proto ====
void sub_626FF0()
{
  void *v0; // esi

  v0 = MEMORY[0xAC48F0]; /*0x626ff1*/
  if ( MEMORY[0xAC48F0] ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(MEMORY[0xAC48F0]); /*0x626ffd*/
    __3_YAXPAX_Z(v0); /*0x627003*/
    MEMORY[0xAC48F0] = 0; /*0x62700b*/
  }
}


// ==== 0x00627020  sub_627020  this=-  sig=ida-proto ====
_DWORD *sub_627020()
{
  _DWORD *result; // eax
  _DWORD *v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // [esp+8h] [ebp-8h]
  _DWORD *v12; // [esp+Ch] [ebp-4h]

  result = MEMORY[0xAC48F0]; /*0x627020*/
  if ( !MEMORY[0xAC48F0] ) /*0x62702e*/
  {
    result = __2_YAPAXI_Z(0x10u); /*0x627036*/
    v1 = result; /*0x62703b*/
    v12 = result; /*0x627042*/
    if ( !result ) /*0x627046*/
    {
      MEMORY[0xAC48F0] = 0; /*0x62715e*/
      return result; /*0x62715e*/
    }
    *result = -1; /*0x62704e*/
    v2 = __2_YAPAXI_Z(0x18u); /*0x627054*/
    if ( v2 ) /*0x62705e*/
    {
      v2[1] = 0; /*0x627060*/
      v2[2] = 0; /*0x627063*/
      *((_BYTE *)v2 + 12) = 1; /*0x627066*/
      *((_BYTE *)v2 + 13) = 0; /*0x62706a*/
      *v2 = &vt_DynamicVectorClass_char; /*0x62706d*/
      v2[5] = 10; /*0x627073*/
      v2[4] = 0; /*0x62707a*/
    }
    else
    {
      v2 = 0; /*0x62707f*/
    }
    v1[1] = v2; /*0x627083*/
    v3 = __2_YAPAXI_Z(0x18u); /*0x627086*/
    if ( v3 ) /*0x627090*/
    {
      v3[1] = 0; /*0x627092*/
      v3[2] = 0; /*0x627095*/
      *((_BYTE *)v3 + 12) = 1; /*0x627098*/
      *((_BYTE *)v3 + 13) = 0; /*0x62709c*/
      *v3 = &vt_DynamicVectorClass_HSVClass; /*0x62709f*/
      v3[5] = 10; /*0x6270a5*/
      v3[4] = 0; /*0x6270ac*/
    }
    else
    {
      v3 = 0; /*0x6270b1*/
    }
    v1[2] = v3; /*0x6270b6*/
    result = __2_YAPAXI_Z(0x10u); /*0x6270b9*/
    v4 = result; /*0x6270be*/
    if ( result ) /*0x6270c5*/
    {
      v5 = 31; /*0x6270cc*/
      result[1] = HashStringMod31; /*0x6270d6*/
      result[2] = 31; /*0x6270dd*/
      result[3] = 10; /*0x6270e0*/
      v6 = __2_YAPAXI_Z(0x2ECu); /*0x6270e7*/
      if ( v6 ) /*0x6270f1*/
      {
        *v6 = 31; /*0x6270f3*/
        v11 = v6 + 1; /*0x6270f8*/
        v7 = v6 + 1; /*0x6270fc*/
        do /*0x62710b*/
        {
          sub_628B00(v7, 0, 0); /*0x627102*/
          v7 += 6; /*0x627107*/
          --v5; /*0x62710a*/
        }
        while ( v5 ); /*0x62710b*/
        v8 = v11; /*0x62710d*/
        v1 = v12; /*0x627111*/
      }
      else
      {
        v8 = 0; /*0x627117*/
      }
      v9 = v4[2]; /*0x627119*/
      *v4 = v8; /*0x62711c*/
      result = 0; /*0x62711e*/
      if ( v9 > 0 ) /*0x627123*/
      {
        v10 = 0; /*0x627125*/
        do /*0x62713a*/
        {
          result = (_DWORD *)((char *)result + 1); /*0x627129*/
          *(_DWORD *)(*v4 + v10 + 20) = 10; /*0x62712a*/
          v10 += 24; /*0x627135*/
        }
        while ( (int)result < v4[2] ); /*0x62713a*/
        v1[3] = v4; /*0x62713c*/
        MEMORY[0xAC48F0] = v1; /*0x62713f*/
        return result; /*0x62714b*/
      }
    }
    else
    {
      v4 = 0; /*0x62714c*/
    }
    v1[3] = v4; /*0x62714e*/
    MEMORY[0xAC48F0] = v1; /*0x627151*/
  }
  return result; /*0x627146*/
}


// ==== 0x00627170  FileSystem::findFile  this=DynamicVector  sig=csp ====
_DWORD *__thiscall sub_627170(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v14; // [esp+Ch] [ebp-8h]

  v1 = this; /*0x627175*/
  *this = -1; /*0x62717e*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x627184*/
  if ( v2 ) /*0x627190*/
  {
    v2[1] = 0; /*0x627192*/
    v2[2] = 0; /*0x627195*/
    *((_BYTE *)v2 + 12) = 1; /*0x627198*/
    *((_BYTE *)v2 + 13) = 0; /*0x62719c*/
    *v2 = &vt_DynamicVectorClass_char; /*0x62719f*/
    v2[5] = 10; /*0x6271a5*/
    v2[4] = 0; /*0x6271ac*/
  }
  else
  {
    v2 = 0; /*0x6271b1*/
  }
  v1[1] = v2; /*0x6271b5*/
  v3 = __2_YAPAXI_Z(0x18u); /*0x6271b8*/
  if ( v3 ) /*0x6271c2*/
  {
    v3[1] = 0; /*0x6271c4*/
    v3[2] = 0; /*0x6271c7*/
    *((_BYTE *)v3 + 12) = 1; /*0x6271ca*/
    *((_BYTE *)v3 + 13) = 0; /*0x6271ce*/
    *v3 = &vt_DynamicVectorClass_HSVClass; /*0x6271d1*/
    v3[5] = 10; /*0x6271d7*/
    v3[4] = 0; /*0x6271de*/
  }
  else
  {
    v3 = 0; /*0x6271e3*/
  }
  v1[2] = v3; /*0x6271e7*/
  v4 = __2_YAPAXI_Z(0x10u); /*0x6271ea*/
  v5 = v4; /*0x6271ef*/
  if ( v4 ) /*0x6271f6*/
  {
    v6 = 31; /*0x6271fd*/
    v4[1] = HashStringMod31; /*0x627207*/
    v4[2] = 31; /*0x62720e*/
    v4[3] = 10; /*0x627211*/
    v7 = __2_YAPAXI_Z(0x2ECu); /*0x627218*/
    if ( v7 ) /*0x627222*/
    {
      *v7 = 31; /*0x627224*/
      v14 = v7 + 1; /*0x627229*/
      v8 = v7 + 1; /*0x62722d*/
      do /*0x62724c*/
      {
        FileSystem::writeFile(v8, 0, 0); /*0x627233*/
        *v8 = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode; /*0x627238*/
        v8[5] = 10; /*0x62723e*/
        v8[4] = 0; /*0x627245*/
        v8 += 6; /*0x627248*/
        --v6; /*0x62724b*/
      }
      while ( v6 ); /*0x62724c*/
      v9 = v14; /*0x62724e*/
      v1 = this; /*0x627252*/
    }
    else
    {
      v9 = 0; /*0x627258*/
    }
    v10 = v5[2]; /*0x62725a*/
    *v5 = v9; /*0x62725d*/
    v11 = 0; /*0x62725f*/
    if ( v10 > 0 ) /*0x627264*/
    {
      v12 = 0; /*0x627266*/
      do /*0x62727b*/
      {
        ++v11; /*0x62726a*/
        *(_DWORD *)(*v5 + v12 + 20) = 10; /*0x62726b*/
        v12 += 24; /*0x627276*/
      }
      while ( v11 < v5[2] ); /*0x62727b*/
    }
    v1[3] = v5; /*0x62727d*/
    return v1; /*0x627280*/
  }
  else
  {
    v1[3] = 0; /*0x627289*/
    return v1; /*0x62728c*/
  }
}


// ==== 0x006272A0  FileSystem::FlushTempFiles  this=CampaignClass  sig=csp ====
void __thiscall FileSystem::FlushTempFiles(_DWORD *this)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // eax
  void *v3; // eax
  int v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  int v12; // edi
  int v13; // eax
  char *v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  const char *v19; // ebx
  _DWORD *v20; // eax
  void *v21; // edi
  _DWORD *v22; // eax
  int v23; // ebp
  int v24; // edi
  int v25; // ecx
  char *v26; // ebx
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // ebx
  _DWORD *v30; // esi
  int v32; // [esp+Ch] [ebp-14h]
  const char *v33; // [esp+Ch] [ebp-14h]
  _DWORD *v34; // [esp+10h] [ebp-10h]
  int v35; // [esp+10h] [ebp-10h]
  _DWORD *v36; // [esp+10h] [ebp-10h]
  int v37; // [esp+14h] [ebp-Ch]

  v1 = this; /*0x6272a4*/
  if ( this->vtable4 ) /*0x6272ab*/
  {
    v2 = MEMORY[0xAC48F0]; /*0x6272b6*/
    if ( !MEMORY[0xAC48F0] ) /*0x6272bd*/
    {
      v3 = __2_YAPAXI_Z(0x10u); /*0x6272c1*/
      if ( v3 ) /*0x6272cb*/
        v2 = (_DWORD *)FileSystem::findFile(v3); /*0x6272cf*/
      else
        v2 = 0; /*0x6272d6*/
      MEMORY[0xAC48F0] = v2; /*0x6272d8*/
    }
    v4 = 0; /*0x6272e2*/
    v5 = *(_DWORD *)(v2[1] + 16); /*0x6272e4*/
    if ( v5 > 0 ) /*0x6272e9*/
    {
      do /*0x627305*/
      {
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v2[1] + 4) + 4 * v4)); /*0x6272f5*/
        v2 = MEMORY[0xAC48F0]; /*0x6272fa*/
        ++v4; /*0x627302*/
      }
      while ( v4 < v5 ); /*0x627305*/
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v2[1] + 12))(v2[1]); /*0x62730e*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xAC48F0] + 2) + 12))(*((_DWORD *)MEMORY[0xAC48F0] + 2)); /*0x62731b*/
    v6 = (void (__thiscall ***)(_DWORD, int))v1[1]; /*0x62731e*/
    if ( v6 ) /*0x627323*/
      (**v6)(v6, 1); /*0x627329*/
    v7 = (void (__thiscall ***)(_DWORD, int))v1[2]; /*0x62732b*/
    if ( v7 ) /*0x627330*/
      (**v7)(v7, 1); /*0x627336*/
    v8 = (_DWORD *)v1[3]; /*0x627338*/
    v9 = 0; /*0x62733b*/
    v10 = 0; /*0x62733d*/
    v37 = 0; /*0x62733f*/
    v34 = v8; /*0x627346*/
    if ( (int)v8[2] > 0 ) /*0x62734c*/
    {
      v11 = 0; /*0x627352*/
      v32 = 0; /*0x627354*/
      while ( 1 ) /*0x627358*/
      {
        v12 = *v8 + v11; /*0x627358*/
        if ( *(int *)(v12 + 16) > 0 ) /*0x62735f*/
          break; /*0x62735f*/
LABEL_19:
        ++v9; /*0x627387*/
        v11 = v32 + 24; /*0x62738f*/
        v10 = 0; /*0x627392*/
        v37 = v9; /*0x627396*/
        v32 += 24; /*0x62739a*/
        if ( v9 >= v8[2] ) /*0x62739e*/
          goto LABEL_44; /*0x62739e*/
      }
      while ( 1 ) /*0x627369*/
      {
        v13 = 65 * v10++; /*0x627369*/
        v14 = (char *)(*(_DWORD *)(v12 + 4) + 4 * v13); /*0x62736c*/
        if ( !Flag::IsZero(v14) ) /*0x627371*/
          break; /*0x627371*/
        if ( v10 >= *(_DWORD *)(v12 + 16) ) /*0x62737d*/
        {
          v8 = v34; /*0x62737f*/
          v1 = this; /*0x627383*/
          goto LABEL_19; /*0x627383*/
        }
      }
      v33 = v14; /*0x6273a7*/
      if ( v14 ) /*0x6273ab*/
      {
        while ( 2 ) /*0x6273b7*/
        {
          v15 = this->vtable4; /*0x6273b7*/
          v16 = *(_DWORD *)v15 + 24 * ((*(int (__thiscall **)(const char *))(v15 + 4))(v33) % *(_DWORD *)(v15 + 8)); /*0x6273d2*/
          v17 = *(_DWORD *)(v16 + 16) - 1; /*0x6273d5*/
          v35 = v16; /*0x6273d6*/
          if ( v17 < 0 ) /*0x6273da*/
          {
LABEL_30:
            v20 = 0; /*0x627412*/
          }
          else
          {
            v18 = 260 * v17; /*0x6273e3*/
            while ( 1 ) /*0x6273f6*/
            {
              v19 = (const char *)(*(_DWORD *)(v16 + 4) + v18); /*0x6273f6*/
              if ( String::Equals(v19, v33) ) /*0x6273fa*/
                break; /*0x6273fa*/
              --v17; /*0x627403*/
              v18 -= 260; /*0x627404*/
              if ( v17 < 0 ) /*0x62740c*/
              {
                v9 = v37; /*0x62740e*/
                goto LABEL_30; /*0x62740e*/
              }
              v16 = v35; /*0x6273e8*/
            }
            v20 = v19 + 256; /*0x627482*/
            v9 = v37; /*0x627488*/
          }
          v21 = (void *)*v20; /*0x627414*/
          if ( *v20 ) /*0x627414*/
          {
            FileSystem::mountDrive(*v20); /*0x62741c*/
            __3_YAXPAX_Z(v21); /*0x627422*/
          }
          v22 = (_DWORD *)this->vtable4; /*0x62742e*/
          v36 = v22; /*0x627431*/
          if ( v9 < v22[2] ) /*0x627438*/
          {
            v23 = 24 * v9; /*0x62743d*/
            while ( 1 ) /*0x627442*/
            {
              v24 = v23 + *v22; /*0x627442*/
              if ( v10 < *(_DWORD *)(v24 + 16) ) /*0x627447*/
                break; /*0x627447*/
LABEL_39:
              ++v9; /*0x62746f*/
              v23 += 24; /*0x627473*/
              v10 = 0; /*0x627476*/
              v37 = v9; /*0x62747a*/
              if ( v9 >= v22[2] ) /*0x62747e*/
                goto LABEL_43; /*0x62747e*/
            }
            while ( 1 ) /*0x627451*/
            {
              v25 = 65 * v10++; /*0x627451*/
              v26 = (char *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627454*/
              if ( !Flag::IsZero(v26) ) /*0x627459*/
                break; /*0x627459*/
              if ( v10 >= *(_DWORD *)(v24 + 16) ) /*0x627465*/
              {
                v9 = v37; /*0x627467*/
                v22 = v36; /*0x62746b*/
                goto LABEL_39; /*0x62746b*/
              }
            }
            v33 = v26; /*0x627490*/
            if ( v26 ) /*0x627494*/
            {
              v9 = v37; /*0x6273b3*/
              continue; /*0x6273b3*/
            }
          }
          break;
        }
      }
LABEL_43:
      v1 = this; /*0x62749a*/
    }
LABEL_44:
    v27 = (_DWORD *)v1[3]; /*0x62749e*/
    v28 = 0; /*0x6274a1*/
    if ( (int)v27[2] > 0 ) /*0x6274a8*/
    {
      v29 = 0; /*0x6274aa*/
      do /*0x6274c0*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)(v29 + *v27) + 12))(v29 + *v27); /*0x6274b4*/
        ++v28; /*0x6274ba*/
        v29 += 24; /*0x6274bb*/
      }
      while ( v28 < v27[2] ); /*0x6274c0*/
    }
    v30 = (_DWORD *)v1[3]; /*0x6274c2*/
    if ( v30 ) /*0x6274c9*/
    {
      if ( *v30 ) /*0x6274cb*/
        (**(void (__thiscall ***)(_DWORD, int))*v30)(*v30, 3); /*0x6274d5*/
      __3_YAXPAX_Z(v30); /*0x6274d8*/
    }
  }
}


// ==== 0x006274F0  ObjectClass::method_6274F0  this=ObjectClass  sig=csp ====
int __thiscall sub_6274F0(_DWORD *this, ObjectClass *aP1)
{
  int v3; // esi
  int v4; // ebp
  int v5; // esi
  int i; // ebx
  int v7; // edi
  ObjectClass String; // [esp+10h] [ebp-100h] BYREF

  String::CopyUpper(String.__pad_0, aP1); /*0x627505*/
  v3 = this->vtable4; /*0x62750a*/
  v4 = *(_DWORD *)v3 + 24 * ((*(int (__thiscall **)(ObjectClass *))(v3 + 4))(&String) % *(_DWORD *)(v3 + 8)); /*0x627521*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x627524*/
  if ( v5 < 0 ) /*0x627525*/
    return 0; /*0x627525*/
  for ( i = 260 * v5; ; i -= 260 ) /*0x62752e*/
  {
    v7 = *(_DWORD *)(v4 + 4) + i; /*0x627536*/
    if ( String::Equals((const char *)v7, &String) ) /*0x62753f*/
      break; /*0x62753f*/
    if ( --v5 < 0 ) /*0x627551*/
      return 0; /*0x62755f*/
  }
  if ( v7 == -256 ) /*0x62756a*/
    return 0; /*0x62756f*/
  else
    return *(_DWORD *)(*(_DWORD *)(v7 + 256) + 256); /*0x627580*/
}


// ==== 0x00627590  MIXFile::Load  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MIXFile::Load(_DWORD *this, ObjectClass *aP1)
{
  _DWORD *v2; // ebp
  ObjectClass *v3; // edx
  _BYTE *v5; // esi
  int v6; // edi
  const void *v7; // eax
  int v8; // ebx
  int i; // esi
  _BYTE *v10; // eax
  char v11; // cl
  ObjectClass *v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  char *v15; // ebp
  int v16; // edx
  char *eax15; // eax
  ObjectClass *v17; // edi
  int v19; // ebx
  int v20; // eax
  int ecx21; // ecx
  ObjectClass *v21; // eax
  ObjectClass *v22; // edx
  char *v24; // eax
  ObjectClass *v23; // edi
  int eax27; // eax
  int ecx30; // ecx
  ObjectClass *v26; // eax
  ObjectClass *v27; // edx
  bool v30; // cc
  __int16 v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  ObjectClass aP2; // [esp+14h] [ebp-410h] BYREF
  _BYTE aP3[768]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  *(_DWORD *)&aP2.__pad_0[8] = this; /*0x62759c*/
  v3 = (ObjectClass *)*this; /*0x6275a0*/
  if ( *this == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy((char *)&aP2.uniqueId, aP1->__pad_0); /*0x6275d6*/
  strcat((char *)&aP2.uniqueId, (const char *)&off_7E1BC6 + 112 * (_DWORD)v3); /*0x627611*/
  strcat((char *)&aP2.uniqueId, stru_826598.__pad_0); /*0x62763d*/
  strcat((char *)&aP2.uniqueId, *(const char **)&stru_830620.__pad_579C[1704]); /*0x62766a*/
  _strupr((char *)&aP2.uniqueId); /*0x627678*/
  v5 = aP3; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
    v5 += 3; /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  v7 = (const void *)SearchMIXFile((char *)&aP2.uniqueId, 0); /*0x62769f*/
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(aP3, v7, sizeof(aP3)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    v10 = &aP3[2 * (i % 256) + i % 256]; /*0x6276e2*/
    v31 = *(_WORD *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(_WORD *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(ObjectClass **)(v2[2] + 16); /*0x627719*/
  *(_DWORD *)&aP2.__pad_0[12] = v12; /*0x62771c*/
  v13 = __2_YAPAXI_Z(0x18u); /*0x627720*/
  v14 = (_DWORD *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(_DWORD *)(v13 + 4) = 0; /*0x627730*/
    *(_DWORD *)(v13 + 8) = 20; /*0x627733*/
    *(_BYTE *)(v13 + 12) = 1; /*0x62773a*/
    *(_BYTE *)(v13 + 13) = 0; /*0x62773e*/
    *(_DWORD *)v13 = &vt_VectorClass_ColorScheme; /*0x627742*/
    *(_DWORD *)(v13 + 4) = __2_YAPAXI_Z(0x50u); /*0x627750*/
    *((_BYTE *)v14 + 13) = 1; /*0x627753*/
    *v14 = &vt_DynamicVectorClass_ColorScheme; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  *(_DWORD *)&aP2.__pad_0[4] = 0; /*0x62776d*/
  if ( (int)v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*(_DWORD *)(v2[1] + 4) + 4 * v8); /*0x62779b*/
      v16 = v32 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&aP2.__pad_0[8] + 8) + 4); /*0x6277a1*/
      *(_WORD *)aP2.__pad_0 = *(_WORD *)v16; /*0x6277a6*/
      aP2.__pad_0[2] = *(_BYTE *)(v16 + 2); /*0x6277ae*/
      eax15 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( eax15 ) /*0x6277bc*/
        v17 = (ObjectClass *)FontClass::InitMetrics( /*0x6277dc*/
                               eax15,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&MEMORY[0x87F8E4].__pad_5568[2356],
                               1,
                               0);
      else
        v17 = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(_DWORD *)v17->__pad_0 = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((_BYTE *)v14 + 13) || !v20)
        && (ecx21 = v14[5], ecx21 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v20 + ecx21, 0) )
      {
        v21 = (ObjectClass *)v14[4]; /*0x627810*/
        v22 = (ObjectClass *)v14[1]; /*0x627813*/
        v14[4] = &v21->__pad_0[1]; /*0x627819*/
        *(_DWORD *)&v22->__pad_0[4 * (_DWORD)v21] = v17; /*0x62781c*/
      }
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v23 = (ObjectClass *)FontClass::InitMetrics( /*0x62784e*/
                               v24,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&MEMORY[0x87F8E4].__pad_5568[2356],
                               53,
                               0);
      else
        v23 = 0; /*0x627852*/
      *(_DWORD *)v23->__pad_0 = v19 + 1; /*0x627855*/
      eax27 = v14[2]; /*0x627857*/
      if ( v14[4] < eax27 /*0x62787a*/
        || (*((_BYTE *)v14 + 13) || !eax27)
        && (ecx30 = v14[5], ecx30 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, eax27 + ecx30, 0) )
      {
        v26 = (ObjectClass *)v14[4]; /*0x627881*/
        v27 = (ObjectClass *)v14[1]; /*0x627884*/
        v14[4] = &v26->__pad_0[1]; /*0x62788a*/
        *(_DWORD *)&v27->__pad_0[4 * (_DWORD)v26] = v23; /*0x62788d*/
      }
      v30 = ++*(_DWORD *)&aP2.__pad_0[4] < *(_DWORD *)&aP2.__pad_0[12]; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = *(_DWORD *)&aP2.__pad_0[4]; /*0x62777d*/
      v2 = *(_DWORD **)&aP2.__pad_0[8]; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/
}


// ==== 0x006278C0  ObjectClass::method_6278C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6278C0(_DWORD *this, const char *a2)
{
  char *v3; // edx
  _DWORD *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // esi
  _DWORD *v17; // [esp+10h] [ebp-208h]
  char *v18; // [esp+10h] [ebp-208h]
  char String[256]; // [esp+14h] [ebp-204h] BYREF
  char v20[256]; // [esp+114h] [ebp-104h] BYREF
  char *v21; // [esp+214h] [ebp-4h]

  v17 = MIXFile::Load(this, a2); /*0x6278de*/
  v3 = (char *)__2_YAPAXI_Z(0x104u); /*0x6278e7*/
  if ( v3 ) /*0x6278ee*/
  {
    strcpy(v3, a2); /*0x627906*/
    v4 = v17; /*0x62790f*/
    v18 = v3; /*0x627913*/
    *((_DWORD *)v3 + 64) = v4; /*0x627917*/
  }
  else
  {
    v18 = 0; /*0x62791f*/
  }
  String::CopyUpper(String, a2); /*0x62792c*/
  v5 = this->vtable4; /*0x627931*/
  v6 = (*(int (__thiscall **)(char *))(v5 + 4))(String); /*0x627938*/
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 24 * (v6 % *(_DWORD *)(v5 + 8)) + 16); /*0x627944*/
  v8 = *(_DWORD *)v5 + 24 * (v6 % *(_DWORD *)(v5 + 8)); /*0x627948*/
  v9 = v7 - 1; /*0x62794b*/
  if ( v9 < 0 ) /*0x62794c*/
  {
LABEL_8:
    String::Copy(v20, String); /*0x62797a*/
    v12 = *(_DWORD *)(v8 + 8); /*0x62798f*/
    v21 = v18; /*0x627992*/
    if ( *(_DWORD *)(v8 + 16) < v12 /*0x6279c0*/
      || ((LOBYTE(v11) = *(_BYTE *)(v8 + 13), (_BYTE)v11) || !v12)
      && (v11 = *(_DWORD *)(v8 + 20), v11 > 0)
      && (LOBYTE(v11) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v12 + v11, 0), (_BYTE)v11) )
    {
      v13 = 65 * *(_DWORD *)(v8 + 16); /*0x6279cd*/
      v14 = *(_DWORD *)(v8 + 4); /*0x6279cf*/
      ++*(_DWORD *)(v8 + 16); /*0x6279d2*/
      v15 = v14 + 4 * v13; /*0x6279dc*/
      LOBYTE(v11) = (unsigned __int8)String::CopyChecked((char *)v15, v20); /*0x6279e2*/
      *(_DWORD *)(v15 + 256) = v21; /*0x6279ee*/
    }
  }
  else
  {
    v10 = 260 * v9; /*0x627955*/
    while ( 1 ) /*0x627962*/
    {
      LOBYTE(v11) = String::Equals((const char *)(v10 + *(_DWORD *)(v8 + 4)), String); /*0x627962*/
      if ( (_BYTE)v11 ) /*0x627969*/
        break; /*0x627969*/
      --v9; /*0x62796f*/
      v10 -= 260; /*0x627970*/
      if ( v9 < 0 ) /*0x627978*/
        goto LABEL_8; /*0x627978*/
    }
  }
  return v11; /*0x6279f4*/
}


// ==== 0x00627A10  ObjectClass::method_627A10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_627A10(_DWORD *this, ObjectClass *aP1)
{
  int v3; // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebx
  const char *v7; // edi
  int *v8; // edi
  int v9; // esi
  ObjectClass *v10; // ecx
  ObjectClass *result; // eax
  int uniqueId; // ebp
  int i; // ebx
  int v14; // eax
  ColorScheme *v15; // edi
  ObjectClass *v16; // ecx
  ObjectClass *v18; // [esp+10h] [ebp-104h]
  ObjectClass String; // [esp+14h] [ebp-100h] BYREF

  String::CopyUpper(String.__pad_0, aP1); /*0x627a2c*/
  v3 = this->vtable4; /*0x627a31*/
  v4 = *(_DWORD *)v3 + 24 * ((*(int (__thiscall **)(ObjectClass *))(v3 + 4))(&String) % *(_DWORD *)(v3 + 8)); /*0x627a48*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x627a4b*/
  if ( v5 < 0 ) /*0x627a4c*/
  {
LABEL_5:
    v8 = 0; /*0x627a7e*/
  }
  else
  {
    v6 = 260 * v5; /*0x627a55*/
    while ( 1 ) /*0x627a5d*/
    {
      v7 = (const char *)(*(_DWORD *)(v4 + 4) + v6); /*0x627a5d*/
      if ( String::Equals(v7, &String) ) /*0x627a66*/
        break; /*0x627a66*/
      --v5; /*0x627a73*/
      v6 -= 260; /*0x627a74*/
      if ( v5 < 0 ) /*0x627a7c*/
        goto LABEL_5; /*0x627a7c*/
    }
    v8 = (int *)(v7 + 256); /*0x627b02*/
  }
  v9 = *v8; /*0x627a87*/
  v10 = (ObjectClass *)MIXFile::Load(this, aP1); /*0x627a93*/
  result = *(ObjectClass **)(v9 + 256); /*0x627a95*/
  v18 = v10; /*0x627a9d*/
  if ( result ) /*0x627aa1*/
  {
    uniqueId = result->uniqueId; /*0x627aa3*/
    for ( i = 0; i < uniqueId; ++i ) /*0x627aaa*/
    {
      v14 = *(_DWORD *)(*(_DWORD *)(v9 + 256) + 4); /*0x627ab2*/
      v15 = *(ColorScheme **)(v14 + 4 * i); /*0x627ab5*/
      if ( v15 ) /*0x627aba*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v14 + 4 * i)); /*0x627abe*/
        __3_YAXPAX_Z(v15); /*0x627ac4*/
      }
    }
    v16 = *(ObjectClass **)(v9 + 256); /*0x627ad1*/
    if ( v16 ) /*0x627ad9*/
      (**(void (__thiscall ***)(ObjectClass *, int))v16->__pad_0)(v16, 1); /*0x627adf*/
    *(_DWORD *)(v9 + 256) = 0; /*0x627ae5*/
    *(_DWORD *)(v9 + 256) = v18; /*0x627aef*/
    return v18->__pad_0; /*0x627ae1*/
  }
  else
  {
    *(_DWORD *)(v9 + 256) = v10; /*0x627b0d*/
  }
  return result->__pad_0; /*0x627af5*/
}


// ==== 0x00627B20  ColorSchemeClass::LoadAllSchemes  this=ColorSchemeClass  sig=csp ====
int __thiscall sub_627B20(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  char *v7; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  const char *v15; // ebx
  int *v16; // ebx
  int v17; // edi
  int v18; // ebp
  int v19; // edx
  void *v20; // ebx
  int (__thiscall ***v21)(_DWORD, int); // ecx
  int v22; // ecx
  _DWORD *v23; // ebp
  int v24; // edi
  int v25; // eax
  char *v26; // ebx
  int i; // [esp+10h] [ebp-118h]
  const char *v28; // [esp+10h] [ebp-118h]
  _DWORD *v29; // [esp+10h] [ebp-118h]
  int v30; // [esp+10h] [ebp-118h]
  int v31; // [esp+14h] [ebp-114h]
  int j; // [esp+14h] [ebp-114h]
  int v34; // [esp+1Ch] [ebp-10Ch]
  char String[256]; // [esp+28h] [ebp-100h] BYREF

  v2 = (_DWORD *)this->q00C; /*0x627b2f*/
  *this = a2; /*0x627b32*/
  result = v2[2]; /*0x627b35*/
  v4 = 0; /*0x627b38*/
  v34 = 0; /*0x627b41*/
  if ( result > 0 ) /*0x627b49*/
  {
    for ( i = 0; ; i += 24 ) /*0x627b4f*/
    {
      v5 = i + *v2; /*0x627b5a*/
      if ( *(int *)(v5 + 16) > 0 ) /*0x627b61*/
        break; /*0x627b61*/
LABEL_6:
      result = v34 + 1; /*0x627b81*/
      v4 = 0; /*0x627b90*/
      if ( ++v34 >= v2[2] ) /*0x627b92*/
        return result; /*0x627b9c*/
    }
    while ( 1 ) /*0x627b6b*/
    {
      v6 = 65 * v4++; /*0x627b6b*/
      v7 = (char *)(*(_DWORD *)(v5 + 4) + 4 * v6); /*0x627b6e*/
      result = Flag::IsZero(v7); /*0x627b73*/
      if ( !(_BYTE)result ) /*0x627b7a*/
        break; /*0x627b7a*/
      if ( v4 >= *(_DWORD *)(v5 + 16) ) /*0x627b7f*/
        goto LABEL_6; /*0x627b7f*/
    }
    v28 = v7; /*0x627bad*/
    if ( v7 ) /*0x627bb1*/
    {
      do /*0x627d0c*/
      {
        String::CopyUpper(String, v28); /*0x627bc0*/
        v9 = this->q00C; /*0x627bc9*/
        v10 = (*(int (__thiscall **)(char *))(v9 + 4))(String); /*0x627bd0*/
        v11 = 3 * (v10 % *(_DWORD *)(v9 + 8)); /*0x627bd9*/
        v12 = *(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)); /*0x627be0*/
        v13 = *(_DWORD *)(*(_DWORD *)v9 + 8 * v11 + 16) - 1; /*0x627be3*/
        v31 = v12; /*0x627be4*/
        if ( v13 < 0 ) /*0x627be8*/
        {
LABEL_14:
          v16 = 0; /*0x627c20*/
        }
        else
        {
          v14 = 260 * v13; /*0x627bf1*/
          while ( 1 ) /*0x627bff*/
          {
            v15 = (const char *)(*(_DWORD *)(v12 + 4) + v14); /*0x627bff*/
            if ( String::Equals(v15, String) ) /*0x627c08*/
              break; /*0x627c08*/
            --v13; /*0x627c15*/
            v14 -= 260; /*0x627c16*/
            if ( v13 < 0 ) /*0x627c1e*/
              goto LABEL_14; /*0x627c1e*/
            v12 = v31; /*0x627bf6*/
          }
          v16 = (int *)(v15 + 256); /*0x627cfb*/
        }
        v17 = *v16; /*0x627c2a*/
        v29 = MIXFile::Load(this, v28); /*0x627c32*/
        result = *(_DWORD *)(v17 + 256); /*0x627c36*/
        if ( result ) /*0x627c3e*/
        {
          result = *(_DWORD *)(result + 16); /*0x627c40*/
          v18 = 0; /*0x627c43*/
          for ( j = result; v18 < result; ++v18 ) /*0x627c4b*/
          {
            v19 = *(_DWORD *)(*(_DWORD *)(v17 + 256) + 4); /*0x627c53*/
            v20 = *(void **)(v19 + 4 * v18); /*0x627c56*/
            if ( v20 ) /*0x627c5b*/
            {
              ColorScheme::Destructor(*(_DWORD *)(v19 + 4 * v18)); /*0x627c5f*/
              __3_YAXPAX_Z(v20); /*0x627c65*/
              result = j; /*0x627c6a*/
            }
          }
          v21 = *(int (__thiscall ****)(_DWORD, int))(v17 + 256); /*0x627c76*/
          if ( v21 ) /*0x627c7e*/
            result = (**v21)(v21, 1); /*0x627c84*/
          *(_DWORD *)(v17 + 256) = 0; /*0x627c86*/
        }
        *(_DWORD *)(v17 + 256) = v29; /*0x627c98*/
        v22 = v34; /*0x627c9e*/
        v23 = (_DWORD *)this->q00C; /*0x627ca2*/
        if ( v34 >= v23[2] ) /*0x627ca8*/
          break; /*0x627ca8*/
        result = 24 * v34; /*0x627cad*/
        v30 = 24 * v34; /*0x627cb0*/
        while ( 1 ) /*0x627cb7*/
        {
          v24 = result + *v23; /*0x627cb7*/
          if ( v4 < *(_DWORD *)(v24 + 16) ) /*0x627cbc*/
            break; /*0x627cbc*/
LABEL_29:
          ++v22; /*0x627ce4*/
          result += 24; /*0x627ce8*/
          v4 = 0; /*0x627ceb*/
          v34 = v22; /*0x627cef*/
          v30 = result; /*0x627cf3*/
          if ( v22 >= v23[2] ) /*0x627cf7*/
            return result; /*0x627cf7*/
        }
        while ( 1 ) /*0x627cc6*/
        {
          v25 = 65 * v4++; /*0x627cc6*/
          v26 = (char *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627cc9*/
          result = Flag::IsZero(v26); /*0x627cce*/
          if ( !(_BYTE)result ) /*0x627cd5*/
            break; /*0x627cd5*/
          if ( v4 >= *(_DWORD *)(v24 + 16) ) /*0x627cda*/
          {
            result = v30; /*0x627cdc*/
            v22 = v34; /*0x627ce0*/
            goto LABEL_29; /*0x627ce0*/
          }
        }
        v28 = v26; /*0x627d08*/
      }
      while ( v26 ); /*0x627d0c*/
    }
  }
  return result; /*0x627b9e*/
}


// ==== 0x00627D20  _DynamicVectorClass_PAVColorScheme::Clear_627D20  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x627d26*/
  *(_DWORD *)(this + 16) = 0; /*0x627d29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x627d30*/
  {
    __3_YAXPAX_Z(v2); /*0x627d36*/
    *(_DWORD *)(this + 4) = 0; /*0x627d3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x627d41*/
  *(_DWORD *)(this + 8) = 0; /*0x627d44*/
}


// ==== 0x00627D50  _DynamicVectorClass_PAVColorScheme::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x627d50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x627d65*/
  else
    return 0; /*0x627d57*/
}


// ==== 0x00627D70  _VectorClass_PAVColorScheme::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x627d7a*/
}


// ==== 0x00627D80  _DynamicVectorClass_VHSVClass::Clear_627D80  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D80(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x627d86*/
  *(_DWORD *)(this + 16) = 0; /*0x627d89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x627d90*/
  {
    __3_YAXPAX_Z(v2); /*0x627d96*/
    *(_DWORD *)(this + 4) = 0; /*0x627d9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x627da1*/
  *(_DWORD *)(this + 8) = 0; /*0x627da4*/
}


// ==== 0x00627DB0  _DynamicVectorClass_VHSVClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627DB0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x627db0*/
    return (a2 - *(_DWORD *)(this + 4)) / 3u; /*0x627dce*/
  else
    return 0; /*0x627db7*/
}


// ==== 0x00627DE0  _VectorClass_VHSVClass::GetItem  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627DE0(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  v3 = this->Items + 3 * a3; /*0x627ded*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x627df8*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x627dff*/
  return a2; /*0x627dfb*/
}


// ==== 0x00627E10  _VectorClass_PAVColorScheme::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x627e12*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x627e1d*/
  {
    v3 = 0; /*0x627e1f*/
    if ( v2 <= 0 ) /*0x627e23*/
      return 1; /*0x627e43*/
    v4 = (_DWORD *)this->Items; /*0x627e25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x627e2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x627e34*/
    {
      ++v3; /*0x627e36*/
      ++v4; /*0x627e37*/
      if ( v3 >= v2 ) /*0x627e3c*/
        return 1; /*0x627e3c*/
    }
  }
  return 0; /*0x627e3e*/
}


// ==== 0x00627E50  _VectorClass_PAVColorScheme::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x627e5c*/
  {
    this->IsInitialized = 0; /*0x627e66*/
    if ( a3 ) /*0x627e6c*/
      v4 = a3; /*0x627e82*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x627e7e*/
    this->IsInitialized = 1; /*0x627e86*/
    if ( v4 ) /*0x627e8a*/
    {
      if ( this->Items ) /*0x627e95*/
      {
        v6 = this->Capacity; /*0x627e9c*/
        if ( a2 < v6 ) /*0x627ea1*/
          v6 = a2; /*0x627ea3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x627ea9*/
          ++i; /*0x627eae*/
        if ( this->IsAllocated ) /*0x627ebb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x627ec6*/
          this->Items = 0; /*0x627ece*/
        }
      }
      this->Items = v4; /*0x627ed7*/
      this->Capacity = a2; /*0x627edf*/
      this->IsAllocated = a3 == 0; /*0x627ee2*/
      return 1; /*0x627ee8*/
    }
    else
    {
      return 0; /*0x627e8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x627ef2*/
    return 1; /*0x627ef8*/
  }
}


// ==== 0x00627F00  _VectorClass_PAVColorScheme::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x627f0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x627f13*/
    *(_DWORD *)(this + 4) = 0; /*0x627f1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x627f1e*/
  *(_DWORD *)(this + 8) = 0; /*0x627f21*/
}


// ==== 0x00627F30  _VectorClass_PAVColorScheme::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x627f30*/
    return 0; /*0x627f38*/
  v3 = *(_DWORD *)(this + 8); /*0x627f3e*/
  result = 0; /*0x627f41*/
  if ( v3 <= 0 ) /*0x627f45*/
    return -1; /*0x627f5c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x627f4b*/
  {
    if ( ++result >= v3 ) /*0x627f5a*/
      return -1; /*0x627f5a*/
  }
  return result; /*0x627f3a*/
}


// ==== 0x00627F70  _VectorClass_PAVColorScheme::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x627f70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x627f85*/
  else
    return 0; /*0x627f77*/
}


// ==== 0x00627F90  _DynamicVectorClass_PAVColorScheme::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627F90(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x627f9c*/
  {
    this->IsInitialized = 0; /*0x627fa2*/
    if ( a3 ) /*0x627fa8*/
      v4 = a3; /*0x627fbe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x627fba*/
    this->IsInitialized = 1; /*0x627fc2*/
    if ( !v4 ) /*0x627fc6*/
      return 0; /*0x62803a*/
    if ( this->Items ) /*0x627fc8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x627fcf*/
      if ( a2 < v5 ) /*0x627fd4*/
        v5 = a2; /*0x627fd6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x627fdc*/
        ++i; /*0x627fe1*/
      if ( this->IsAllocated ) /*0x627fee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x627ff9*/
        this->Items = 0; /*0x628001*/
      }
    }
    this->Items = v4; /*0x62800a*/
    this->DynamicVector_field_0x8 = a2; /*0x628012*/
    this->IsAllocated = a3 == 0; /*0x628015*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x62801e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x628021*/
  if ( v7 < this->Items ) /*0x628029*/
    this->Items = v7; /*0x62802b*/
  return 1; /*0x62802e*/
}


// ==== 0x00628040  _DynamicVectorClass_PAVColorScheme::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_628040(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x628040*/
  result = 0; /*0x628043*/
  if ( v2 <= 0 ) /*0x628048*/
    return -1; /*0x62805f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x62804e*/
  {
    if ( ++result >= v2 ) /*0x62805d*/
      return -1; /*0x62805d*/
  }
  return result; /*0x628062*/
}


// ==== 0x00628070  DynamicVectorArray::Constructor  this=DynamicVectorArray  sig=csp ====
int *__thiscall DynamicVectorArray_Constructor(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax

  v4 = a2; /*0x62807b*/
  *(this + 1) = a4; /*0x628084*/
  *(this + 2) = a3; /*0x628087*/
  *(this + 3) = a2; /*0x628091*/
  v6 = (int *)__2_YAPAXI_Z(24 * a3 + 4); /*0x628095*/
  v7 = 0; /*0x62809a*/
  if ( v6 ) /*0x6280a1*/
  {
    v8 = v6 + 1; /*0x6280a7*/
    *v6 = a3; /*0x6280aa*/
    v9 = v6 + 1; /*0x6280ae*/
    if ( a3 - 1 >= 0 ) /*0x6280b0*/
    {
      v10 = a3; /*0x6280b2*/
      do /*0x6280dc*/
      {
        v9[1] = 0; /*0x6280ba*/
        v9[2] = 0; /*0x6280bd*/
        *((_BYTE *)v9 + 12) = 1; /*0x6280c0*/
        *((_BYTE *)v9 + 13) = 0; /*0x6280c3*/
        *v9 = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x6280c6*/
        *v9 = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode; /*0x6280cc*/
        v9[5] = 10; /*0x6280d2*/
        v9[4] = 0; /*0x6280d5*/
        v9 += 6; /*0x6280d8*/
        --v10; /*0x6280db*/
      }
      while ( v10 ); /*0x6280dc*/
      v4 = a2; /*0x6280de*/
    }
    v11 = v8; /*0x6280e2*/
  }
  else
  {
    v11 = 0; /*0x6280e7*/
  }
  v12 = *(this + 2); /*0x6280e9*/
  *this = (int)v11; /*0x6280ec*/
  v13 = 0; /*0x6280ee*/
  if ( v12 > 0 ) /*0x6280f2*/
  {
    do /*0x628103*/
    {
      ++v13; /*0x6280f6*/
      *(_DWORD *)(v7 + *this + 20) = v4; /*0x6280f7*/
      v7 += 24; /*0x6280fe*/
    }
    while ( v13 < *(this + 2) ); /*0x628103*/
  }
  return this; /*0x628107*/
}


// ==== 0x00628110  FileSystem::openFile  this=FileSystem  sig=csp ====
const char *__thiscall sub_628110(int (__thiscall **this)(const char *), const char *a2)
{
  int v2; // ebp
  int v3; // edi
  int i; // ebx
  const char *v5; // esi

  v2 = (int)*this + 24 * ((this->q004)(a2) % (int)this->q008); /*0x62812a*/
  v3 = *(_DWORD *)(v2 + 16) - 1; /*0x62812d*/
  if ( v3 < 0 ) /*0x62812e*/
    return 0; /*0x62815a*/
  for ( i = 260 * v3; ; i -= 260 ) /*0x628137*/
  {
    v5 = (const char *)(i + *(_DWORD *)(v2 + 4)); /*0x628141*/
    if ( String::Equals(v5, a2) ) /*0x628146*/
      break; /*0x628146*/
    if ( --v3 < 0 ) /*0x628158*/
      return 0; /*0x628158*/
  }
  return v5 + 256; /*0x62815a*/
}


// ==== 0x00628170  FileSystem::closeFile  this=FileSystem  sig=csp ====
_BYTE *__thiscall sub_628170(_DWORD *this, int *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  _BYTE *v6; // ebp
  int v7; // edx

  if ( *((_BYTE *)a2 + 8) ) /*0x62817a*/
    return 0; /*0x62817f*/
  if ( *a2 >= this->q008 ) /*0x628188*/
  {
LABEL_7:
    *((_BYTE *)a2 + 8) = 1; /*0x6281da*/
    return 0; /*0x6281e4*/
  }
  while ( 1 ) /*0x628191*/
  {
    v3 = a2[1]; /*0x628191*/
    v4 = *this + 24 * *a2; /*0x628194*/
    if ( v3 < *(_DWORD *)(v4 + 16) ) /*0x62819d*/
      break; /*0x62819d*/
LABEL_6:
    v7 = *a2; /*0x6281c5*/
    a2[1] = 0; /*0x6281c7*/
    *a2 = ++v7; /*0x6281cf*/
    if ( v7 >= this->q008 ) /*0x6281d8*/
      goto LABEL_7; /*0x6281d8*/
  }
  while ( 1 ) /*0x62819f*/
  {
    v5 = *(_DWORD *)(v4 + 4); /*0x62819f*/
    a2[1] = v3 + 1; /*0x6281aa*/
    v6 = (_BYTE *)(v5 + 260 * v3); /*0x6281ad*/
    if ( !Flag::IsZero(v6) ) /*0x6281b2*/
      return v6; /*0x6281de*/
    v3 = a2[1]; /*0x6281bb*/
    if ( v3 >= *(_DWORD *)(v4 + 16) ) /*0x6281c3*/
      goto LABEL_6; /*0x6281c3*/
  }
}


// ==== 0x006281F0  _VectorClass_VHSVClass::IsEqualTo  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6281F0(int *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int i; // esi

  v3 = this->Capacity; /*0x6281fd*/
  if ( v3 == *(_DWORD *)(a2 + 8) ) /*0x628202*/
  {
    v4 = 0; /*0x628204*/
    if ( v3 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    for ( i = 0; /*0x62820a*/
          !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
             (_BYTE *)(i + this->Items),
             (_BYTE *)(i + *(_DWORD *)(a2 + 4)));
          i += 3 )
    {
      if ( ++v4 >= this->Capacity ) /*0x628229*/
        return 1; /*0x628229*/
    }
  }
  return 0; /*0x62822b*/
}


// ==== 0x00628240  FileExtension::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628240(_DWORD *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->Items = 0; /*0x62824d*/
  this->Capacity = a2; /*0x628250*/
  this->q030 = 1; /*0x628253*/
  this->__pad_034 = 0; /*0x628257*/
  *this = &vt_VectorClass_HSVClass; /*0x62825a*/
  if ( a2 ) /*0x628260*/
  {
    if ( a3 ) /*0x628268*/
    {
      if ( a2 - 1 >= 0 ) /*0x62826f*/
      {
        v4 = (_BYTE *)(a3 + 2); /*0x628271*/
        v5 = a2; /*0x628274*/
        do /*0x628281*/
        {
          *(v4 - 2) = 0; /*0x628275*/
          *(v4 - 1) = 0; /*0x628278*/
          *v4 = 0; /*0x62827b*/
          v4 += 3; /*0x62827d*/
          --v5; /*0x628280*/
        }
        while ( v5 ); /*0x628281*/
      }
      this->Items = a3; /*0x628283*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x62828c*/
      if ( v6 ) /*0x628296*/
      {
        if ( a2 - 1 >= 0 ) /*0x62829d*/
        {
          v7 = v6 + 2; /*0x62829f*/
          v8 = a2; /*0x6282a2*/
          do /*0x6282af*/
          {
            *(v7 - 2) = 0; /*0x6282a3*/
            *(v7 - 1) = 0; /*0x6282a6*/
            *v7 = 0; /*0x6282a9*/
            v7 += 3; /*0x6282ab*/
            --v8; /*0x6282ae*/
          }
          while ( v8 ); /*0x6282af*/
        }
      }
      else
      {
        v6 = 0; /*0x6282b3*/
      }
      this->Items = v6; /*0x6282b5*/
      this->__pad_034 = 1; /*0x6282b8*/
    }
  }
  *this = &vt_DynamicVectorClass_HSVClass; /*0x6282bc*/
  this->__pad_014 = 10; /*0x6282c2*/
  this->q010 = 0; /*0x6282c9*/
  return this; /*0x6282ce*/
}


// ==== 0x006282E0  _VectorClass_VHSVClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::sub_6282E0(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x6282e2*/
  if ( a2 ) /*0x6282ee*/
  {
    v5 = a3; /*0x6282f4*/
    this->IsInitialized = 0; /*0x6282f8*/
    if ( a3 ) /*0x6282fd*/
    {
      if ( a2 - 1 >= 0 ) /*0x628336*/
      {
        v9 = a3 + 2; /*0x628338*/
        v10 = a2; /*0x62833b*/
        do /*0x628348*/
        {
          *(v9 - 2) = 0; /*0x62833c*/
          *(v9 - 1) = 0; /*0x62833f*/
          *v9 = 0; /*0x628342*/
          v9 += 3; /*0x628344*/
          --v10; /*0x628347*/
        }
        while ( v10 ); /*0x628348*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x628304*/
      if ( v6 ) /*0x62830e*/
      {
        if ( a2 - 1 >= 0 ) /*0x628315*/
        {
          v7 = v6 + 2; /*0x628317*/
          v8 = a2; /*0x62831a*/
          do /*0x628327*/
          {
            *(v7 - 2) = 0; /*0x62831b*/
            *(v7 - 1) = 0; /*0x62831e*/
            *v7 = 0; /*0x628321*/
            v7 += 3; /*0x628323*/
            --v8; /*0x628326*/
          }
          while ( v8 ); /*0x628327*/
        }
        v5 = v6; /*0x628329*/
      }
      else
      {
        v5 = 0; /*0x62832d*/
      }
    }
    this->IsInitialized = 1; /*0x62834c*/
    if ( v5 ) /*0x628350*/
    {
      if ( this->Items ) /*0x62835b*/
      {
        v12 = this->Capacity; /*0x628360*/
        if ( a2 < v12 ) /*0x628365*/
          v12 = a2; /*0x628367*/
        if ( v12 > 0 ) /*0x62836b*/
        {
          v13 = 0; /*0x62836d*/
          do /*0x628389*/
          {
            v14 = this->Items + v13; /*0x628374*/
            v15 = &v5[v13]; /*0x628376*/
            v13 += 3; /*0x628379*/
            --v12; /*0x62837c*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x628380*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x628386*/
          }
          while ( v12 ); /*0x628389*/
          v3 = a2; /*0x62838b*/
        }
        if ( this->IsAllocated ) /*0x628391*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x62839a*/
          this->Items = 0; /*0x6283a2*/
        }
      }
      this->Items = v5; /*0x6283ad*/
      this->Capacity = v3; /*0x6283b3*/
      this->IsAllocated = a3 == 0; /*0x6283b6*/
      return 1; /*0x6283bc*/
    }
    else
    {
      return 0; /*0x628355*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6283c6*/
    return 1; /*0x6283cc*/
  }
}


// ==== 0x006283E0  _VectorClass_VHSVClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::sub_6283E0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6283ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6283f3*/
    *(_DWORD *)(this + 4) = 0; /*0x6283fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6283fe*/
  *(_DWORD *)(this + 8) = 0; /*0x628401*/
}


// ==== 0x00628410  _VectorClass_VHSVClass::ScalarDeletingDestructor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::sub_628410(int this, int a2)
{
  if ( !*(_BYTE *)(this + 12) ) /*0x628416*/
    return 0; /*0x628420*/
  if ( *(int *)(this + 8) > 0 ) /*0x62842d*/
    VtableStub::Method_5175D0(*(_DWORD *)(this + 4), a2); /*0x62843c*/
  return -1; /*0x62841d*/
}


// ==== 0x00628470  _VectorClass_VHSVClass::GetItemIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::sub_628470(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x628470*/
    return (a2 - *(_DWORD *)(this + 4)) / 3u; /*0x62848e*/
  else
    return 0; /*0x628477*/
}


// ==== 0x006284A0  _DynamicVectorClass_VHSVClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6284A0(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    v5 = a3; /*0x6284b4*/
    this->IsInitialized = 0; /*0x6284b8*/
    if ( a3 ) /*0x6284bd*/
    {
      if ( a2 - 1 >= 0 ) /*0x6284f6*/
      {
        v9 = a3 + 2; /*0x6284f8*/
        v10 = a2; /*0x6284fb*/
        do /*0x628508*/
        {
          *(v9 - 2) = 0; /*0x6284fc*/
          *(v9 - 1) = 0; /*0x6284ff*/
          *v9 = 0; /*0x628502*/
          v9 += 3; /*0x628504*/
          --v10; /*0x628507*/
        }
        while ( v10 ); /*0x628508*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x6284c4*/
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          v7 = v6 + 2; /*0x6284d7*/
          v8 = a2; /*0x6284da*/
          do /*0x6284e7*/
          {
            *(v7 - 2) = 0; /*0x6284db*/
            *(v7 - 1) = 0; /*0x6284de*/
            *v7 = 0; /*0x6284e1*/
            v7 += 3; /*0x6284e3*/
            --v8; /*0x6284e6*/
          }
          while ( v8 ); /*0x6284e7*/
        }
        v5 = v6; /*0x6284e9*/
      }
      else
      {
        v5 = 0; /*0x6284ed*/
      }
    }
    this->IsInitialized = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( this->Items ) /*0x628512*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x628517*/
      if ( a2 < v11 ) /*0x62851c*/
        v11 = a2; /*0x62851e*/
      if ( v11 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          v13 = this->Items + v12; /*0x62852b*/
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --v11; /*0x628533*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x628537*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x62853d*/
        }
        while ( v11 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( this->IsAllocated ) /*0x628548*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x628551*/
        this->Items = 0; /*0x628559*/
      }
    }
    this->Items = v5; /*0x628564*/
    this->DynamicVector_field_0x8 = v3; /*0x62856a*/
    this->IsAllocated = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628576*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x628579*/
  if ( v15 < this->Items ) /*0x628581*/
    this->Items = v15; /*0x628583*/
  return 1; /*0x628586*/
}


// ==== 0x006285A0  _DynamicVectorClass_VHSVClass::ProcessAll  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6285A0(_DWORD *this, int a2)
{
  if ( (int)this->DynamicVector_field_0x10 > 0 ) /*0x6285ad*/
    VtableStub::Method_5175D0(this->Items, a2); /*0x6285bc*/
  return -1; /*0x6285d0*/
}


// ==== 0x006285F0  _VectorClass_PAVColorScheme::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ColorScheme::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6285f3*/
  *Block = &vt_VectorClass_ColorScheme; /*0x6285f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x628600*/
  {
    __3_YAXPAX_Z(v3); /*0x628608*/
    *(Block + 1) = 0; /*0x628610*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x62861b*/
  *(Block + 2) = 0; /*0x628621*/
  if ( (a2 & 1) != 0 ) /*0x628628*/
    __3_YAXPAX_Z(Block); /*0x62862b*/
  return (VectorClass *)Block; /*0x628635*/
}


// ==== 0x00628640  _DynamicVectorClass_PAVColorScheme::Destructor_1  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x628643*/
  *Block = &vt_VectorClass_ColorScheme; /*0x628646*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x628650*/
  {
    __3_YAXPAX_Z(v3); /*0x628658*/
    *(Block + 1) = 0; /*0x628660*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x62866b*/
  *(Block + 2) = 0; /*0x628671*/
  if ( (a2 & 1) != 0 ) /*0x628678*/
    __3_YAXPAX_Z(Block); /*0x62867b*/
  return (DynamicVector *)Block; /*0x628685*/
}


// ==== 0x00628690  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Add  this=DynamicVector  sig=csp ====
char *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x62869a*/
  {
    v3 = *(Block - 1); /*0x62869c*/
    v4 = Block - 1; /*0x6286a0*/
    v5 = 3 * v3; /*0x6286a3*/
    v6 = v3 - 1; /*0x6286a6*/
    v7 = Block + 2 * v5; /*0x6286a7*/
    if ( v6 >= 0 ) /*0x6286aa*/
    {
      v8 = v6 + 1; /*0x6286ad*/
      do /*0x6286da*/
      {
        v9 = (void *)*(v7 - 5); /*0x6286b2*/
        v7 -= 6; /*0x6286b5*/
        *v7 = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x6286ba*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x6286c2*/
        {
          __3_YAXPAX_Z(v9); /*0x6286c8*/
          v7[1] = 0; /*0x6286d0*/
        }
        --v8; /*0x6286d3*/
        *((_BYTE *)v7 + 13) = 0; /*0x6286d4*/
        v7[2] = 0; /*0x6286d7*/
      }
      while ( v8 ); /*0x6286da*/
    }
    if ( (a2 & 1) != 0 ) /*0x6286e2*/
      __3_YAXPAX_Z(v4); /*0x6286e5*/
    return (char *)v4; /*0x6286ed*/
  }
  else
  {
    v11 = (void *)*(Block + 1); /*0x6286f5*/
    *Block = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x6286fc*/
    if ( v11 && *((_BYTE *)Block + 13) ) /*0x628704*/
    {
      __3_YAXPAX_Z(v11); /*0x62870a*/
      *(Block + 1) = 0; /*0x628712*/
    }
    *((_BYTE *)Block + 13) = 0; /*0x628719*/
    *(Block + 2) = 0; /*0x62871e*/
    if ( (a2 & 1) != 0 ) /*0x628721*/
      __3_YAXPAX_Z(Block); /*0x628724*/
    return (char *)Block; /*0x62872c*/
  }
}


// ==== 0x00628740  FileSystem::readFile  this=DynamicVector  sig=csp ====
int __thiscall FileSystem::readFile(_BYTE *this)
{
  this->IsInitialized = 1; /*0x628742*/
  this->Items = 0; /*0x628746*/
  this->DynamicVector_field_0x8 = 0; /*0x628749*/
  this->IsAllocated = 0; /*0x62874c*/
  *(_DWORD *)this = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode; /*0x62874f*/
  this->CapacityIncrement = 10; /*0x628755*/
  this->Items = 0; /*0x62875c*/
  return 0; /*0x62875f*/
}


// ==== 0x00628760  _VectorClass_VHSVClass::Constructor_VectorClass_HSVClass_  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x628763*/
  *Block = &vt_VectorClass_HSVClass; /*0x628766*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x628770*/
  {
    __3_YAXPAX_Z(v3); /*0x628778*/
    *(Block + 1) = 0; /*0x628780*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x62878b*/
  *(Block + 2) = 0; /*0x628791*/
  if ( (a2 & 1) != 0 ) /*0x628798*/
    __3_YAXPAX_Z(Block); /*0x62879b*/
  return (VectorClass *)Block; /*0x6287a5*/
}


// ==== 0x006287B0  _DynamicVectorClass_VHSVClass::Destructor_2  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6287b3*/
  *Block = &vt_VectorClass_HSVClass; /*0x6287b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6287c0*/
  {
    __3_YAXPAX_Z(v3); /*0x6287c8*/
    *(Block + 1) = 0; /*0x6287d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6287db*/
  *(Block + 2) = 0; /*0x6287e1*/
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    __3_YAXPAX_Z(Block); /*0x6287eb*/
  return (DynamicVector *)Block; /*0x6287f5*/
}


// ==== 0x00628800  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::ddtor  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x628806*/
  *(_DWORD *)(this + 16) = 0; /*0x628809*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x628810*/
  {
    __3_YAXPAX_Z(v2); /*0x628816*/
    *(_DWORD *)(this + 4) = 0; /*0x62881e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x628821*/
  *(_DWORD *)(this + 8) = 0; /*0x628824*/
}


// ==== 0x00628830  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Get  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x628830*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x104u; /*0x62884e*/
  else
    return 0; /*0x628837*/
}


// ==== 0x00628860  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // esi

  v3 = this->Items + 260 * a3; /*0x628876*/
  String::Copy((char *)a2, (const char *)v3); /*0x62887a*/
  *(_DWORD *)(a2 + 256) = *(_DWORD *)(v3 + 256); /*0x628887*/
  return a2; /*0x62888d*/
}


// ==== 0x006288A0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::AddRef(int *this, int a2)
{
  int v2; // eax

  v2 = this->Capacity; /*0x6288ad*/
  if ( v2 != *(_DWORD *)(a2 + 8) ) /*0x6288b2*/
    return 0; /*0x6288e9*/
  if ( v2 > 0 ) /*0x6288b8*/
    j_Stub_InfiniteLoop(); /*0x6288c6*/
  return 1; /*0x6288dd*/
}


// ==== 0x006288F0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_0  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::SetCapacity_0(void *this, CCINIClass *aP1, _BYTE *a2)
{
  CCINIClass *v3; // edi
  _BYTE *v5; // esi
  AbstractClass *v6; // ebx
  AbstractClass *v7; // esi
  CCINIClass *v8; // ebx
  CCINIClass *v10; // eax
  int v11; // ebx
  AbstractClass *v12; // edi
  int v13; // esi
  CCINIClass *v14; // [esp+10h] [ebp-8h]
  AbstractClass *v15; // [esp+10h] [ebp-8h]
  CCINIClass *v16; // [esp+14h] [ebp-4h]

  v3 = aP1; /*0x6288f7*/
  if ( aP1 ) /*0x6288ff*/
  {
    v5 = a2; /*0x628905*/
    this->IsInitialized = 0; /*0x628909*/
    if ( a2 ) /*0x62890f*/
    {
      if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628965*/
      {
        v8 = aP1; /*0x628967*/
        do /*0x628978*/
        {
          Byte::Zero(v5); /*0x62896c*/
          v5 += 260; /*0x628971*/
          v8 = (CCINIClass *)((char *)v8 - 1); /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = (AbstractClass *)a2; /*0x62897e*/
    }
    else
    {
      v6 = (AbstractClass *)__2_YAPAXI_Z(260 * (_DWORD)aP1); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        v7 = v6; /*0x62892d*/
        if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628931*/
        {
          v14 = aP1; /*0x628934*/
          do /*0x62894e*/
          {
            Byte::Zero(v7); /*0x62893a*/
            v7 = (AbstractClass *)((char *)v7 + 260); /*0x628943*/
            v14 = (CCINIClass *)((char *)v14 - 1); /*0x62894a*/
          }
          while ( v14 ); /*0x62894e*/
        }
        v15 = v6; /*0x628950*/
      }
      else
      {
        v15 = 0; /*0x628956*/
      }
    }
    this->IsInitialized = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( this->Items ) /*0x62899a*/
      {
        v10 = (CCINIClass *)this->Capacity; /*0x6289a1*/
        if ( (int)aP1 < (int)v10 ) /*0x6289a6*/
          v10 = aP1; /*0x6289a8*/
        if ( (int)v10 > 0 ) /*0x6289ac*/
        {
          v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = v10; /*0x6289b2*/
          do /*0x6289e4*/
          {
            v13 = v11 + this->Items; /*0x6289bb*/
            String::CopyChecked(v12->__pad_0, (const char *)v13); /*0x6289be*/
            *(_DWORD *)&v12[7].__pad_0[4] = *(_DWORD *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 = (AbstractClass *)((char *)v12 + 260); /*0x6289d9*/
            v16 = (CCINIClass *)((char *)v16 - 1); /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = aP1; /*0x6289e6*/
        }
        if ( this->IsAllocated ) /*0x6289ea*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6289f5*/
          this->Items = 0; /*0x6289fd*/
        }
      }
      this->Items = v15; /*0x628a0a*/
      this->Capacity = v3; /*0x628a13*/
      this->IsAllocated = a2 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }
}


// ==== 0x00628A40  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::sub_628A40(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x628a4d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x628a53*/
    *(_DWORD *)(this + 4) = 0; /*0x628a5b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x628a5e*/
  *(_DWORD *)(this + 8) = 0; /*0x628a61*/
}


// ==== 0x00628A70  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_1  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::sub_628A70(int this, int a2)
{
  if ( !*(_BYTE *)(this + 12) ) /*0x628a76*/
    return 0; /*0x628a80*/
  if ( *(int *)(this + 8) > 0 ) /*0x628a8d*/
    Stub::InfiniteLoop(*(_DWORD *)(this + 4), a2); /*0x628a9c*/
  return -1; /*0x628a7d*/
}


// ==== 0x00628AD0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::sub_628AD0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x628ad0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x104u; /*0x628aee*/
  else
    return 0; /*0x628ad7*/
}


// ==== 0x00628B00  VectorClass::sub_628B00  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628B00(_DWORD *this, int a2, _BYTE *a3)
{
  int v3; // esi
  _BYTE *v5; // ebp
  _BYTE *v6; // ebx
  _BYTE *v7; // ebp

  v3 = a2; /*0x628b03*/
  this->Items = 0; /*0x628b0c*/
  this->Capacity = a2; /*0x628b13*/
  this->q030 = 1; /*0x628b16*/
  this->__pad_034 = 0; /*0x628b1a*/
  *this = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x628b1e*/
  if ( a2 ) /*0x628b24*/
  {
    if ( a3 ) /*0x628b2c*/
    {
      v5 = a3; /*0x628b31*/
      if ( a2 - 1 >= 0 ) /*0x628b35*/
      {
        do /*0x628b48*/
        {
          Byte::Zero(v5); /*0x628b3c*/
          v5 += 260; /*0x628b41*/
          --v3; /*0x628b47*/
        }
        while ( v3 ); /*0x628b48*/
      }
      this->Items = a3; /*0x628b4a*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(260 * a2); /*0x628b5f*/
      if ( v6 ) /*0x628b66*/
      {
        v7 = v6; /*0x628b6b*/
        if ( a2 - 1 >= 0 ) /*0x628b6f*/
        {
          do /*0x628b82*/
          {
            Byte::Zero(v7); /*0x628b76*/
            v7 += 260; /*0x628b7b*/
            --v3; /*0x628b81*/
          }
          while ( v3 ); /*0x628b82*/
        }
      }
      else
      {
        v6 = 0; /*0x628b86*/
      }
      this->Items = v6; /*0x628b88*/
      this->__pad_034 = 1; /*0x628b8b*/
    }
  }
  *this = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode; /*0x628b8f*/
  this->__pad_014 = 10; /*0x628b95*/
  this->q010 = 0; /*0x628b9c*/
  return this; /*0x628ba5*/
}


// ==== 0x00628BB0  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Remove  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(
        void *this,
        CCINIClass *aP1,
        _BYTE *a2)
{
  CCINIClass *v3; // edi
  _BYTE *v5; // esi
  AbstractClass *v6; // ebx
  AbstractClass *v7; // esi
  CCINIClass *v8; // ebx
  CCINIClass *v9; // eax
  int v10; // ebx
  AbstractClass *v11; // edi
  int v12; // esi
  int v13; // eax
  CCINIClass *v15; // [esp+10h] [ebp-8h]
  AbstractClass *v16; // [esp+10h] [ebp-8h]
  CCINIClass *v17; // [esp+14h] [ebp-4h]

  v3 = aP1; /*0x628bb7*/
  if ( aP1 ) /*0x628bbf*/
  {
    v5 = a2; /*0x628bc5*/
    this->IsInitialized = 0; /*0x628bc9*/
    if ( a2 ) /*0x628bcf*/
    {
      if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628c25*/
      {
        v8 = aP1; /*0x628c27*/
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 260; /*0x628c31*/
          v8 = (CCINIClass *)((char *)v8 - 1); /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = (AbstractClass *)a2; /*0x628c3e*/
    }
    else
    {
      v6 = (AbstractClass *)__2_YAPAXI_Z(260 * (_DWORD)aP1); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = v6; /*0x628bed*/
        if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628bf1*/
        {
          v15 = aP1; /*0x628bf4*/
          do /*0x628c0e*/
          {
            Byte::Zero(v7); /*0x628bfa*/
            v7 = (AbstractClass *)((char *)v7 + 260); /*0x628c03*/
            v15 = (CCINIClass *)((char *)v15 - 1); /*0x628c0a*/
          }
          while ( v15 ); /*0x628c0e*/
        }
        v16 = v6; /*0x628c10*/
      }
      else
      {
        v16 = 0; /*0x628c16*/
      }
    }
    this->IsInitialized = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( this->Items ) /*0x628c52*/
    {
      v9 = (CCINIClass *)this->DynamicVector_field_0x8; /*0x628c59*/
      if ( (int)aP1 < (int)v9 ) /*0x628c5e*/
        v9 = aP1; /*0x628c60*/
      if ( (int)v9 > 0 ) /*0x628c64*/
      {
        v10 = 0; /*0x628c66*/
        v11 = v16; /*0x628c68*/
        v17 = v9; /*0x628c6a*/
        do /*0x628c9c*/
        {
          v12 = v10 + this->Items; /*0x628c73*/
          String::CopyChecked(v11->__pad_0, (const char *)v12); /*0x628c76*/
          *(_DWORD *)&v11[7].__pad_0[4] = *(_DWORD *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 = (AbstractClass *)((char *)v11 + 260); /*0x628c91*/
          v17 = (CCINIClass *)((char *)v17 - 1); /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = aP1; /*0x628c9e*/
      }
      if ( this->IsAllocated ) /*0x628ca2*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x628cad*/
        this->Items = 0; /*0x628cb5*/
      }
    }
    this->Items = v16; /*0x628cc2*/
    this->DynamicVector_field_0x8 = v3; /*0x628cce*/
    this->IsAllocated = a2 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628cdb*/
  }
  v13 = this->DynamicVector_field_0x8; /*0x628cde*/
  if ( v13 < this->Items ) /*0x628ce6*/
    this->Items = v13; /*0x628ce8*/
  return 1; /*0x628ceb*/
}


// ==== 0x00628D10  FileExtension::CheckExtensionMatch  this=FileExtension  sig=csp ====
char __thiscall FileExtension::CheckExtensionMatch(_DWORD *this, ObjectClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // esi

  v3 = this->FileExtension_field_0x08; /*0x628d13*/
  if ( this->FileExtension_field_0x04 >= v3 ) /*0x628d1b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x628d26*/
      return 0; /*0x628d26*/
    v4 = *(this + 5); /*0x628d28*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x628d38*/
      return 0; /*0x628d3f*/
  }
  v6 = this->FileExtension_field_0x04; /*0x628d45*/
  v7 = v6 + 1; /*0x628d52*/
  v8 = 65 * v6; /*0x628d55*/
  v9 = this->FileExtension_field_0x04; /*0x628d57*/
  this->FileExtension_field_0x04 = v7; /*0x628d5a*/
  v10 = v9 + 4 * v8; /*0x628d5e*/
  String::CopyChecked((char *)v10, aP1->__pad_0); /*0x628d63*/
  *(_DWORD *)(v10 + 256) = aP1[1].customSound_controller[1]; /*0x628d6f*/
  return 1; /*0x628d41*/
}


// ==== 0x00628D80  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt04(_DWORD *this, int a2)
{
  if ( (int)this->DynamicVector_field_0x10 > 0 ) /*0x628d8d*/
    Stub::InfiniteLoop(this->Items, a2); /*0x628d9c*/
  return -1; /*0x628db3*/
}


// ==== 0x00628DD0  FileExtension::Check  this=FileExtension  sig=csp ====
int __thiscall sub_628DD0(int this, const char *a2, _DWORD *a3)
{
  String::Copy((char *)this, a2); /*0x628dd8*/
  *(_DWORD *)(this + 256) = *a3; /*0x628de5*/
  return this; /*0x628deb*/
}


// ==== 0x00628DF0  VectorClass::ConstructHSV  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628DF0(_DWORD *this, int a2, int a3)
{
  char *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  char *v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x628df9*/
  this->Items = 0; /*0x628dfd*/
  this->Capacity = a2; /*0x628e00*/
  this->q030 = 1; /*0x628e03*/
  this->__pad_034 = 0; /*0x628e07*/
  *this = &vt_VectorClass_HSVClass; /*0x628e0a*/
  if ( !a2 ) /*0x628e10*/
    return this; /*0x628e70*/
  if ( !a3 ) /*0x628e18*/
  {
    v8 = (char *)__2_YAPAXI_Z(3 * a2); /*0x628e42*/
    if ( v8 ) /*0x628e4c*/
    {
      if ( a2 - 1 >= 0 ) /*0x628e53*/
      {
        v9 = v8 + 2; /*0x628e55*/
        v10 = a2; /*0x628e58*/
        do /*0x628e65*/
        {
          *(v9 - 2) = 0; /*0x628e59*/
          *(v9 - 1) = 0; /*0x628e5c*/
          *v9 = 0; /*0x628e5f*/
          v9 += 3; /*0x628e61*/
          --v10; /*0x628e64*/
        }
        while ( v10 ); /*0x628e65*/
      }
      v4 = v8; /*0x628e67*/
    }
    this->Items = v4; /*0x628e69*/
    this->__pad_034 = 1; /*0x628e6c*/
    return this; /*0x628e6c*/
  }
  if ( a2 - 1 >= 0 ) /*0x628e1f*/
  {
    v5 = (_BYTE *)(a3 + 2); /*0x628e21*/
    v6 = a2; /*0x628e24*/
    do /*0x628e31*/
    {
      *(v5 - 2) = 0; /*0x628e25*/
      *(v5 - 1) = 0; /*0x628e28*/
      *v5 = 0; /*0x628e2b*/
      v5 += 3; /*0x628e2d*/
      --v6; /*0x628e30*/
    }
    while ( v6 ); /*0x628e31*/
  }
  this->Items = a3; /*0x628e33*/
  return this; /*0x628e38*/
}


// ==== 0x00628E80  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Constructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ColorScheme::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x628e83*/
  *Block = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x628e86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x628e90*/
  {
    __3_YAXPAX_Z(v3); /*0x628e98*/
    *(Block + 1) = 0; /*0x628ea0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x628eab*/
  *(Block + 2) = 0; /*0x628eb1*/
  if ( (a2 & 1) != 0 ) /*0x628eb8*/
    __3_YAXPAX_Z(Block); /*0x628ebb*/
  return (VectorClass *)Block; /*0x628ec5*/
}


// ==== 0x00628ED0  FileSystem::writeFile  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628ED0(_DWORD *this, int a2, _BYTE *a3)
{
  int v3; // esi
  _BYTE *v5; // ebp
  _BYTE *v7; // ebx
  _BYTE *v8; // ebp

  v3 = a2; /*0x628ed3*/
  this->Items = 0; /*0x628edc*/
  this->Capacity = a2; /*0x628ee3*/
  this->q030 = 1; /*0x628ee6*/
  this->__pad_034 = 0; /*0x628eea*/
  *this = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x628eee*/
  if ( !a2 ) /*0x628ef4*/
    return this; /*0x628ef4*/
  if ( !a3 ) /*0x628efc*/
  {
    v7 = __2_YAPAXI_Z(260 * a2); /*0x628f36*/
    if ( v7 ) /*0x628f3d*/
    {
      v8 = v7; /*0x628f42*/
      if ( a2 - 1 >= 0 ) /*0x628f46*/
      {
        do /*0x628f59*/
        {
          Byte::Zero(v8); /*0x628f4d*/
          v8 += 260; /*0x628f52*/
          --v3; /*0x628f58*/
        }
        while ( v3 ); /*0x628f59*/
        this->Items = v7; /*0x628f5b*/
        this->__pad_034 = 1; /*0x628f5e*/
        return this; /*0x628f68*/
      }
    }
    else
    {
      v7 = 0; /*0x628f6b*/
    }
    this->Items = v7; /*0x628f6d*/
    this->__pad_034 = 1; /*0x628f70*/
    return this; /*0x628f74*/
  }
  v5 = a3; /*0x628f01*/
  if ( a2 - 1 >= 0 ) /*0x628f05*/
  {
    do /*0x628f18*/
    {
      Byte::Zero(v5); /*0x628f0c*/
      v5 += 260; /*0x628f11*/
      --v3; /*0x628f17*/
    }
    while ( v3 ); /*0x628f18*/
  }
  this->Items = a3; /*0x628f1a*/
  return this; /*0x628f1f*/
}


// ==== 0x00628F80  sub_628F80  this=-  sig=ida-proto ====
void sub_628F80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x628f8c*/
  MEMORY[0xAC4930] = Math::Sqrt(v0 + v0); /*0x628f9e*/
}


// ==== 0x00628FB0  sub_628FB0  this=-  sig=ida-proto ====
void sub_628FB0()
{
  MEMORY[0xAC4980] = MEMORY[0xAC4930] / 60.0; /*0x628fbc*/
}


// ==== 0x00628FD0  sub_628FD0  this=-  sig=ida-proto ====
void sub_628FD0()
{
  MEMORY[0xAC4968] = 1.0 / MEMORY[0xAC4980]; /*0x628fdc*/
}


// ==== 0x00628FF0  sub_628FF0  this=-  sig=ida-proto ====
void sub_628FF0()
{
  MEMORY[0xAC4960] = 0.0174532925199433 * 45.0; /*0x628ffc*/
}


// ==== 0x00629010  sub_629010  this=-  sig=ida-proto ====
void sub_629010()
{
  MEMORY[0xAC4938] = 0.0174532925199433 * 60.0; /*0x62901c*/
}


// ==== 0x00629030  sub_629030  this=-  sig=ida-proto ====
void sub_629030()
{
  MEMORY[0xAC48F8] = 0.0174532925199433 * 90.0; /*0x62903c*/
}


// ==== 0x00629050  sub_629050  this=-  sig=ida-proto ====
__int64 sub_629050()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC48F8] - MEMORY[0xAC4938]); /*0x629062*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4930] * 0.5); /*0x629076*/
  MEMORY[0xAC4988] = result; /*0x62907b*/
  return result; /*0x629080*/
}


// ==== 0x00629090  sub_629090  this=-  sig=ida-proto ====
void sub_629090()
{
  MEMORY[0xAC4940] = Math::ArcTan((double)MEMORY[0xAC4988] * 0.00390625); /*0x6290a7*/
}


// ==== 0x006290C0  sub_6290C0  this=-  sig=ida-proto ====
void sub_6290C0()
{
  MEMORY[0xAC4958] = Math::ArcTan((double)(2 * MEMORY[0xAC4988]) / MEMORY[0xAC4930]); /*0x6290e2*/
}


// ==== 0x006290F0  sub_6290F0  this=-  sig=ida-proto ====
__int64 sub_6290F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC4988]) + 0.5); /*0x62910b*/
  MEMORY[0xAC497C] = result; /*0x629110*/
  return result; /*0x629116*/
}


// ==== 0x00629120  sub_629120  this=-  sig=ida-proto ====
int sub_629120()
{
  MEMORY[0xAC4928] = 0; /*0x629122*/
  return 0; /*0x62912e*/
}


// ==== 0x00629130  sub_629130  this=-  sig=ida-proto ====
int sub_629130()
{
  MEMORY[0xAC4948] = 0; /*0x629132*/
  MEMORY[0xAC494C] = 0; /*0x629137*/
  MEMORY[0xAC4950] = 0; /*0x62913c*/
  return 0; /*0x629141*/
}


// ==== 0x00629150  sub_629150  this=-  sig=ida-proto ====
int sub_629150()
{
  MEMORY[0xAC4978] = 0; /*0x629155*/
  MEMORY[0xAC4970] = 128; /*0x62915f*/
  MEMORY[0xAC4974] = 128; /*0x629164*/
  return 128; /*0x629169*/
}


// ==== 0x00629170  sub_629170  this=-  sig=ida-proto ====
int sub_629170()
{
  MEMORY[0xAC4900] = 0; /*0x629172*/
  MEMORY[0xAC4904] = 0; /*0x629177*/
  MEMORY[0xAC4908] = 0; /*0x62917c*/
  MEMORY[0xAC490C] = 0; /*0x629181*/
  return 0; /*0x629186*/
}


// ==== 0x00629190  sub_629190  this=-  sig=ida-proto ====
int sub_629190()
{
  MEMORY[0xAC4914] = 0; /*0x629197*/
  MEMORY[0xAC4918] = 0; /*0x62919c*/
  MEMORY[0xAC491C] = 1; /*0x6291a1*/
  MEMORY[0xAC491D] = 0; /*0x6291a8*/
  MEMORY[0xAC4910] = (int)&vt_DynamicVectorClass_ParasiteClass; /*0x6291ad*/
  MEMORY[0xAC4924] = 10; /*0x6291b7*/
  MEMORY[0xAC4920] = 0; /*0x6291c1*/
  return atexit(sub_6291D0); /*0x6291cc*/
}


// ==== 0x006291D0  sub_6291D0  this=-  sig=ida-proto ====
void __cdecl sub_6291D0()
{
  MEMORY[0xAC4910] = (int)&vt_VectorClass_ParasiteClass; /*0x6291d8*/
  if ( MEMORY[0xAC4914] && MEMORY[0xAC491D] ) /*0x6291ec*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4914]); /*0x6291ef*/
    MEMORY[0xAC4914] = 0; /*0x6291f7*/
  }
  MEMORY[0xAC491D] = 0; /*0x6291fd*/
  MEMORY[0xAC4918] = 0; /*0x629203*/
}


// ==== 0x00629210  ParasiteClass::Constructor  this=ParasiteClass  sig=csp ====
int __thiscall sub_629210(int this)
{
  wchar_t *v2; // ecx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x629213*/
  *(_DWORD *)(this + 44) = MEMORY[0xA8ED84]; /*0x62921f*/
  *(_DWORD *)(this + 52) = 0; /*0x629222*/
  v2 = MEMORY[0xA8ED84]; /*0x629225*/
  *(_DWORD *)(this + 64) = 0; /*0x62922b*/
  *(_DWORD *)(this + 56) = v2; /*0x62922e*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x629231*/
  *(_DWORD *)(this + 4) = &ParasiteClass::`vftable'; /*0x629237*/
  *(_DWORD *)(this + 8) = &ParasiteClass::`vftable'; /*0x62923e*/
  *(_DWORD *)(this + 12) = &vt_ParasiteClass; /*0x629245*/
  if ( MEMORY[0xAC4920] < MEMORY[0xAC4918] /*0x62927e*/
    || (MEMORY[0xAC491D] || !MEMORY[0xAC4918])
    && MEMORY[0xAC4924] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xAC4910] + 8))(
         &MEMORY[0xAC4910],
         MEMORY[0xAC4918] + MEMORY[0xAC4924],
         0) )
  {
    v3 = MEMORY[0xAC4920]++; /*0x62928b*/
    *((_DWORD *)MEMORY[0xAC4914] + v3) = this; /*0x62929a*/
  }
  return this; /*0x62929f*/
}


// ==== 0x006292B0  ParasiteClass::ParasiteClass  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::ParasiteClass(int this, TechnoClass *aP1)
{
  IUnknown *v3; // ecx
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6292b6*/
  *(_DWORD *)(this + 44) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6292c4*/
  *(_DWORD *)(this + 52) = 0; /*0x6292c9*/
  *(_DWORD *)(this + 56) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6292d2*/
  *(_DWORD *)(this + 64) = 0; /*0x6292d5*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x6292d8*/
  *(_DWORD *)(this + 4) = &ParasiteClass::`vftable'; /*0x6292de*/
  *(_DWORD *)(this + 8) = &ParasiteClass::`vftable'; /*0x6292e5*/
  *(_DWORD *)(this + 12) = &vt_ParasiteClass; /*0x6292ec*/
  *(_DWORD *)(this + 36) = aP1; /*0x6292f3*/
  *(_DWORD *)(this + 40) = 0; /*0x6292f6*/
  *(_DWORD *)(this + 56) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x629303*/
  *(_DWORD *)(this + 60) = v6; /*0x62930a*/
  *(_DWORD *)(this + 64) = 0; /*0x62930d*/
  v3 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x629310*/
  *(_BYTE *)(this + 84) = 0; /*0x629316*/
  *(_DWORD *)(this + 44) = v3; /*0x629319*/
  *(_DWORD *)(this + 48) = v6; /*0x62931c*/
  *(_DWORD *)(this + 52) = 0; /*0x62931f*/
  *(_DWORD *)(this + 76) = 0; /*0x629322*/
  *(_DWORD *)(this + 80) = 0; /*0x629325*/
  *(_DWORD *)(this + 68) = 0; /*0x629328*/
  *(_DWORD *)(this + 72) = 0; /*0x62932b*/
  if ( (int)*(&g_MatrixTransformState + 5828) < (int)*(&g_MatrixTransformState + 5826) /*0x629360*/
    || (*((_BYTE *)&g_MatrixTransformState + 23309) || !*(&g_MatrixTransformState + 5826))
    && (int)*(&g_MatrixTransformState + 5829) > 0
    && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 5824))->Z)(
         &g_MatrixTransformState + 5824,
         (char *)*(&g_MatrixTransformState + 5829) + (_DWORD)*(&g_MatrixTransformState + 5826),
         0) )
  {
    v4 = (int)*(&g_MatrixTransformState + 5828); /*0x62936d*/
    *(&g_MatrixTransformState + 5828) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5828) + 1); /*0x629370*/
    *(&(*(&g_MatrixTransformState + 5825))->X + v4) = this; /*0x62937c*/
  }
  return this; /*0x629381*/
}


// ==== 0x006293E0  AbstractClass::ProcessData  this=ParasiteClass  sig=csp ====
void __thiscall sub_6293E0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 68); /*0x6293e7*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x6293ea*/
  *(_DWORD *)(this + 4) = &ParasiteClass::`vftable'; /*0x6293f2*/
  *(_DWORD *)(this + 8) = &ParasiteClass::`vftable'; /*0x6293f9*/
  *(_DWORD *)(this + 12) = &vt_ParasiteClass; /*0x629400*/
  *(_DWORD *)(this + 76) = 0; /*0x629407*/
  *(_DWORD *)(this + 80) = 0; /*0x62940a*/
  *(_DWORD *)(this + 72) = 0; /*0x62940d*/
  if ( v2 ) /*0x629410*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629414*/
    *(_DWORD *)(this + 68) = 0; /*0x62941a*/
  }
  if ( *(_BYTE *)(this + 84) ) /*0x62941d*/
  {
    v5 = this; /*0x629432*/
    v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v5); /*0x629436*/
    if ( v3 != -1 && v3 < MEMORY[0xB0F5C8] && v3 < --MEMORY[0xB0F5C8] ) /*0x629451*/
    {
      do /*0x629469*/
      {
        ++v3; /*0x629459*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v3); /*0x62945d*/
      }
      while ( v3 < MEMORY[0xB0F5C8] ); /*0x629469*/
    }
    *(_BYTE *)(this + 84) = 0; /*0x62946b*/
  }
  v5 = this; /*0x62947e*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xAC4910] + 16))(&MEMORY[0xAC4910], &v5); /*0x629482*/
  if ( v4 != -1 && v4 < MEMORY[0xAC4920] && v4 < --MEMORY[0xAC4920] ) /*0x62949d*/
  {
    do /*0x6294b5*/
    {
      ++v4; /*0x6294a5*/
      *((_DWORD *)MEMORY[0xAC4914] + v4 - 1) = *((_DWORD *)MEMORY[0xAC4914] + v4); /*0x6294a9*/
    }
    while ( v4 < MEMORY[0xAC4920] ); /*0x6294b5*/
  }
  AbstractClass::DTOR((_DWORD *)this); /*0x6294b9*/
}


// ==== 0x006294D0  ParasiteClass::Attach  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  AbstractClass::ProcessPower((#378 *)this); /*0x6294d9*/
  v3 = *(_DWORD *)(this + 68); /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6294fd*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x629508*/
  Power::TimerProcess(*(_DWORD *)(this + 80)); /*0x629513*/
  LOBYTE(v5) = *(_BYTE *)(this + 84); /*0x629518*/
  return Power::FlagProcess(a2, v5); /*0x629523*/
}


// ==== 0x00629530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_629530(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 68); /*0x629537*/
  *(_DWORD *)(this + 76) = 0; /*0x62953a*/
  *(_DWORD *)(this + 80) = 0; /*0x62953f*/
  *(_DWORD *)(this + 72) = 0; /*0x629542*/
  if ( v2 ) /*0x629545*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629549*/
    *(_DWORD *)(this + 68) = 0; /*0x62954f*/
  }
  if ( *(_BYTE *)(this + 84) ) /*0x629552*/
  {
    v4 = this; /*0x629567*/
    v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v4); /*0x62956b*/
    if ( v3 != -1 && v3 < MEMORY[0xB0F5C8] && v3 < --MEMORY[0xB0F5C8] ) /*0x629586*/
    {
      do /*0x62959e*/
      {
        ++v3; /*0x62958e*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v3); /*0x629592*/
      }
      while ( v3 < MEMORY[0xB0F5C8] ); /*0x62959e*/
    }
    *(_BYTE *)(this + 84) = 0; /*0x6295a0*/
  }
}


// ==== 0x006295B0  ParasiteClass::LoadParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::LoadParasite(int *a0, AbstractClass *aP1)
{
  int result; // eax
  int v3; // ebp
  IUnknown *v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, aP1); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( a0 ) /*0x6295cd*/
    {
      AbstractClass::InitVtables(a0, (IUnknown *)&aP1); /*0x6295d6*/
      v4 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6295db*/
      a0[13] = 0; /*0x6295e1*/
      a0[11] = (int)v4; /*0x6295e8*/
      a0[14] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6295f0*/
      a0[16] = 0; /*0x6295f3*/
      *a0 = (int)&ParasiteClass::`vftable'; /*0x6295fa*/
      a0[1] = (int)&ParasiteClass::`vftable'; /*0x629600*/
      a0[2] = (int)&ParasiteClass::`vftable'; /*0x629607*/
      a0[3] = (int)&vt_ParasiteClass; /*0x62960e*/
    }
    if ( a0[17] /*0x629657*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v5 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x629664*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v5) = a0; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 9)); /*0x62967f*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 10)); /*0x62968d*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 17)); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}


// ==== 0x006296B0  ParasiteClass::SaveParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::SaveParasite(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6296c4*/
}


// ==== 0x006296D0  ParasiteClass::ddtor  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = 1822515787; /*0x629700*/
  return 0; /*0x6296dd*/
}


// ==== 0x00629710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_629710(_DWORD *this)
{
  this->customSound_controller = 0; /*0x629712*/
  this->q04C = 0; /*0x629715*/
  return 0; /*0x629718*/
}


// ==== 0x00629720  BuildingClass::AnimController  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_AnimController(int *this)
{
  unsigned int *Value; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  _DWORD *v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  Value = ProgressTimer::GetValue((_WORD *)(this->owningHouseIndex + 904), v12); /*0x629736*/
  v3 = this->q048; /*0x62973b*/
  v4 = *Value; /*0x62973e*/
  if ( v3 < 0 ) /*0x629742*/
    goto LABEL_6; /*0x629742*/
  if ( v3 <= 1 ) /*0x629747*/
  {
    v5 = 0; /*0x629755*/
    v6 = 3; /*0x629757*/
    goto LABEL_8; /*0x62975c*/
  }
  if ( v3 == 2 ) /*0x62974c*/
    v5 = 80; /*0x62974e*/
  else
LABEL_6:
    v5 = 160; /*0x62975e*/
  v6 = 4; /*0x629763*/
LABEL_8:
  v7 = this->abstractFlags + 1; /*0x629768*/
  this->abstractFlags = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->q04C; /*0x629775*/
    this->abstractFlags = 0; /*0x629778*/
    this->q04C = ++v8; /*0x629782*/
    if ( v8 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (_DWORD *)this->q011; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = MEMORY[0xA8ED84]; /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(_DWORD *)(this->q011 + 172) = v5 + this->q04C + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
    }
  }
  return 0; /*0x62978a*/
}


// ==== 0x006297F0  ParasiteClass::DeploySquad  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass_DeploySquad(unsigned int this)
{
  _DWORD *v2; // eax
  int *v3; // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // esi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // edx
  int Index; // eax
  void *v12; // edi
  void **v13; // eax
  void **v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  int v19; // edi
  int v20; // eax
  void **v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  _BYTE *v27; // edi
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // edx
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // edi
  int v35; // ecx
  int v36; // ebp
  int v37; // ecx
  int v38; // eax
  int v39; // [esp-4h] [ebp-6Ch]
  double v40; // [esp+10h] [ebp-58h]
  double v41; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  _DWORD v43[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v44; // [esp+28h] [ebp-40h] BYREF
  int v45; // [esp+2Ch] [ebp-3Ch] BYREF
  double v46; // [esp+30h] [ebp-38h]
  double v47; // [esp+38h] [ebp-30h]
  double v48; // [esp+40h] [ebp-28h]
  double v49; // [esp+48h] [ebp-20h]
  int v50; // [esp+50h] [ebp-18h] BYREF
  int v51; // [esp+54h] [ebp-14h]
  int v52; // [esp+58h] [ebp-10h]
  int v53; // [esp+5Ch] [ebp-Ch] BYREF
  int v54; // [esp+60h] [ebp-8h]
  int v55; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1016))(*(_DWORD *)(this + 36), 0); /*0x629807*/
  v3 = *(int **)(this + 40); /*0x62980d*/
  v43[1] = *v2; /*0x629812*/
  v4 = *(_DWORD *)(v43[1] + 172); /*0x629816*/
  v43[0] = v4; /*0x629822*/
  v50 = v3[39]; /*0x629828*/
  v51 = v3[40]; /*0x62982f*/
  v52 = v3[41]; /*0x629836*/
  v5 = (int *)(*(int (__thiscall **)(int *))(*v3 + 444))(v3); /*0x62983c*/
  v40 = 1.0; /*0x629844*/
  if ( !v5 || Cell::IsValidHeight(v5) ) /*0x629854*/
  {
    v9 = *(_DWORD *)(v4 + 368); /*0x629898*/
    v10 = (_DWORD *)(*(_DWORD *)(this + 40) + 1696); /*0x62989e*/
    *v10 = MEMORY[0xA8ED84]; /*0x6298a4*/
    v10[1] = v54; /*0x6298aa*/
    v10[2] = v9; /*0x6298ad*/
    switch ( *(_DWORD *)(this + 72) ) /*0x6298bc*/
    {
      case 0: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)(this + 40) + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(MEMORY[0x83665C]); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v12 = (void *)*((_DWORD *)MEMORY[0x8B4154] + Index); /*0x6298e5*/
          if ( v12 ) /*0x6298ea*/
          {
            v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6298f5*/
            if ( v13 ) /*0x6298ff*/
            {
              v14 = AnimClass::ctor(v13, v12, &v50, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v14 ) /*0x62991a*/
              {
                *(_DWORD *)(this + 68) = v14; /*0x62991c*/
                if ( MEMORY[0xB0F5C8] < MEMORY[0xB0F5C0] /*0x629953*/
                  || (MEMORY[0xB0F5C5] || !MEMORY[0xB0F5C0])
                  && MEMORY[0xB0F5CC] > 0
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F5B8] + 8))(
                       &MEMORY[0xB0F5B8],
                       MEMORY[0xB0F5CC] + MEMORY[0xB0F5C0],
                       0) )
                {
                  v15 = MEMORY[0xB0F5C8]++; /*0x629960*/
                  *((_DWORD *)MEMORY[0xB0F5BC] + v15) = this; /*0x62996f*/
                }
              }
            }
          }
        }
        *(_DWORD *)(this + 72) = 1; /*0x629974*/
        *(_DWORD *)(this + 80) = 0; /*0x62997b*/
        *(_DWORD *)(this + 76) = 0; /*0x62997e*/
        BuildingClass::AnimController((int *)this); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1: /*0x6298bc*/
        if ( BuildingClass::AnimController((int *)this) ) /*0x62998d*/
        {
          v16 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1); /*0x6299a9*/
          *(_DWORD *)(this + 80) = 0; /*0x6299b7*/
          *(_DWORD *)(this + 72) = 3 - (v16 != 0); /*0x6299ba*/
          *(_DWORD *)(this + 76) = 0; /*0x6299bd*/
          BuildingClass::AnimController((int *)this); /*0x6299c0*/
          FootClass::CreateWakes(v50, v51, v52); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2: /*0x6298bc*/
        v40 = -1.0; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3: /*0x6298bc*/
LABEL_20:
        if ( BuildingClass::AnimController((int *)this) ) /*0x6299fd*/
        {
          *(_DWORD *)(this + 72) = 4; /*0x629a08*/
          *(_DWORD *)(this + 80) = 0; /*0x629a0f*/
          *(_DWORD *)(this + 76) = 0; /*0x629a12*/
          BuildingClass::AnimController((int *)this); /*0x629a15*/
        }
        *(double *)&v43[1] = (double)*(int *)(this + 76) * v40 * 0.3141592653589793; /*0x629a27*/
        *(float *)(*(_DWORD *)(this + 40) + 808) = Math::SinCos(*(double *)&v43[1]) * 0.78539819; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)(this + 40) + 808) = 0; /*0x629a59*/
        v17 = *((_DWORD *)MEMORY[0x8871E0] + 756); /*0x629a67*/
        v41 = -((double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v45) - 0x3FFF) /*0x629a91*/
              * -0.00009587672516830327);
        v49 = Math::ArcTan2(v41); /*0x629aa4*/
        v48 = Math::SinCos(v41); /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          v46 = 64.0; /*0x629ac8*/
          v47 = (double)i * 128.0 - 128.0; /*0x629aea*/
          if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1) ) /*0x629aee*/
            v18 = -64.0; /*0x629af7*/
          else
            v18 = v46; /*0x629aff*/
          v19 = Math::RoundToInt(v18); /*0x629b26*/
          v20 = Math::RoundToInt(v47 * v48 + v18 * v49); /*0x629b2a*/
          v53 = v19 + v50; /*0x629b44*/
          v54 = v51 + v20; /*0x629b48*/
          v55 = v52; /*0x629b4c*/
          v21 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x629b55*/
          if ( v21 ) /*0x629b5c*/
          {
            v22 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v17 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v21,
              *(void **)(*((_DWORD *)MEMORY[0x8871E0] + 753) + 4 * v22),
              &v53,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(_BYTE *)(v43[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(int **)(this + 40))
           || BuildingClass::GetSellPriority(*(int **)(this + 40)) == 1
           && VeterancyStruct::IsElite((float *)(*(_DWORD *)(this + 36) + 336))) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3214) ) /*0x629bfe*/
          {
            v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 132))(*(_DWORD *)(this + 40)); /*0x629c16*/
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)); /*0x629c23*/
            v39 = *(_DWORD *)(*(_DWORD *)(this + 40) + 540); /*0x629c2f*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x629c30*/
            v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 132))( /*0x629c46*/
                    v24,
                    *(_DWORD *)(*(_DWORD *)(this + 36) + 540),
                    v25);
            VeterancyStruct::Accumulate((float *)(*(_DWORD *)(this + 36) + 336), v26, v39); /*0x629c56*/
          }
          v27 = *(_BYTE **)(this + 40); /*0x629c5d*/
          BuildingClass::Deploy(this, 0, (int)v27); /*0x629c62*/
          v28 = *(_DWORD *)v27; /*0x629c67*/
          v27[973] = 1; /*0x629c69*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(v28 + 952))(v27, *(_DWORD *)(this + 36)); /*0x629c76*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v27 + 928))(v27); /*0x629c80*/
          v29 = *(_DWORD *)(this + 68); /*0x629c86*/
          *(_DWORD *)(this + 76) = 0; /*0x629c89*/
          *(_DWORD *)(this + 80) = 0; /*0x629c8e*/
          *(_DWORD *)(this + 72) = 0; /*0x629c91*/
          if ( v29 ) /*0x629c94*/
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 248))(v29); /*0x629c98*/
            *(_DWORD *)(this + 68) = 0; /*0x629c9e*/
          }
          if ( *(_BYTE *)(this + 84) ) /*0x629ca1*/
          {
            v43[0] = this; /*0x629cb8*/
            v30 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v43); /*0x629cbc*/
            if ( v30 != -1 && v30 < MEMORY[0xB0F5C8] && v30 < --MEMORY[0xB0F5C8] ) /*0x629cd7*/
            {
              do /*0x629cef*/
              {
                ++v30; /*0x629cdf*/
                *((_DWORD *)MEMORY[0xB0F5BC] + v30 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v30); /*0x629ce3*/
              }
              while ( v30 < MEMORY[0xB0F5C8] ); /*0x629cef*/
            }
            *(_BYTE *)(this + 84) = 0; /*0x629cf1*/
          }
          v31 = (_DWORD *)(*(_DWORD *)(this + 36) + 1696); /*0x629cff*/
          *v31 = MEMORY[0xA8ED84]; /*0x629d05*/
          v31[1] = v54; /*0x629d0b*/
          v31[2] = 0; /*0x629d0e*/
        }
        else
        {
          v32 = *(_DWORD *)(this + 40); /*0x629d27*/
          v44 = *(_DWORD *)(v43[1] + 164); /*0x629d2a*/
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v32 + 364))( /*0x629d3b*/
            v32,
            &v44,
            0,
            v43[0],
            *(_DWORD *)(this + 36),
            0,
            1,
            0);
          if ( *(_DWORD *)(this + 40) ) /*0x629d41*/
          {
            v33 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1); /*0x629d58*/
            *(_DWORD *)(this + 80) = 0; /*0x629d66*/
            *(_DWORD *)(this + 72) = 3 - (v33 != 0); /*0x629d69*/
            *(_DWORD *)(this + 76) = 0; /*0x629d6c*/
            BuildingClass::AnimController((int *)this); /*0x629d6f*/
            FootClass::CreateWakes(v50, v51, v52); /*0x629d90*/
          }
          else
          {
            v37 = *(_DWORD *)(this + 68); /*0x629df3*/
            *(_DWORD *)(this + 76) = 0; /*0x629df6*/
            *(_DWORD *)(this + 80) = 0; /*0x629dfb*/
            *(_DWORD *)(this + 72) = 0; /*0x629dfe*/
            if ( v37 ) /*0x629e01*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 248))(v37); /*0x629e05*/
              *(_DWORD *)(this + 68) = 0; /*0x629e0b*/
            }
            if ( *(_BYTE *)(this + 84) ) /*0x629e0e*/
            {
              v43[1] = this; /*0x629e25*/
              v38 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v43[1]); /*0x629e29*/
              if ( v38 != -1 && v38 < MEMORY[0xB0F5C8] && v38 < --MEMORY[0xB0F5C8] ) /*0x629e44*/
              {
                do /*0x629e5c*/
                {
                  ++v38; /*0x629e4c*/
                  *((_DWORD *)MEMORY[0xB0F5BC] + v38 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v38); /*0x629e50*/
                }
                while ( v38 < MEMORY[0xB0F5C8] ); /*0x629e5c*/
              }
              *(_BYTE *)(this + 84) = 0; /*0x629e5e*/
            }
          }
LABEL_47:
          v34 = *(_DWORD **)(this + 68); /*0x629d97*/
          if ( v34 ) /*0x629d9c*/
          {
            if ( *(_DWORD *)(this + 36) ) /*0x629d9e*/
            {
              v35 = *(_DWORD *)(this + 40); /*0x629da3*/
              if ( v35 ) /*0x629da8*/
              {
                v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35); /*0x629db8*/
                if ( *(_DWORD *)(this + 40) != v34[51] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v34, *(_BYTE **)(this + 40)); /*0x629dc4*/
                  v34[53] = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 484))(*(_DWORD *)(this + 36)); /*0x629dd6*/
                  if ( v36 ) /*0x629ddc*/
                    v34[63] = *(__int16 *)(v36 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy(this, (int)&savedregs, v4); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy(this, (int)&savedregs, v4); /*0x62985f*/
    v6 = *(_DWORD *)(this + 36); /*0x629864*/
    if ( v6 ) /*0x629869*/
    {
      v7 = v54; /*0x629874*/
      v8 = (_DWORD *)(v6 + 1696); /*0x62987a*/
      *v8 = MEMORY[0xA8ED84]; /*0x629880*/
      v8[1] = v7; /*0x629882*/
      v8[2] = 0; /*0x629885*/
    }
  }
}


// ==== 0x00629E90  FootClass::CreateWakes  this=ObjectClass  sig=csp ====
int __thiscall FootClass::CreateWakes(_WORD *this, TechnoTypeClass *aP1, int a3, int a4)
{
  double v4; // rdi
  double v5; // st7
  ScenarioClass *v6; // esi
  int v7; // eax
  void **v8; // eax
  int result; // eax
  int v10; // [esp+Ch] [ebp-34h]
  double v11; // [esp+10h] [ebp-30h] BYREF
  double v12; // [esp+18h] [ebp-28h]
  double v13; // [esp+20h] [ebp-20h]
  double v14; // [esp+28h] [ebp-18h]
  CoordStruct aP2; // [esp+34h] [ebp-Ch] BYREF

  v11 = -((double)(*(__int16 *)ProgressTimer::GetValue(this + 452, (IUnknown *)&v11) - 0x3FFF) * -0.00009587672516830327); /*0x629ec5*/
  v4 = v11; /*0x629ecd*/
  v14 = Math::ArcTan2(v11); /*0x629ed8*/
  v13 = Math::SinCos(v4); /*0x629ee3*/
  v10 = 3; /*0x629ef0*/
  do /*0x629fba*/
  {
    LODWORD(v11) = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0xFFFFFF4C, (IUnknown *)0xB4); /*0x629f13*/
    v12 = (double)SLODWORD(v11); /*0x629f2a*/
    LODWORD(v11) = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0xFFFFFFC0, (IUnknown *)0x40); /*0x629f33*/
    v5 = (double)SLODWORD(v11); /*0x629f37*/
    v6 = (ScenarioClass *)Math::RoundToInt(v5); /*0x629f5e*/
    v7 = Math::RoundToInt(v12 * v13 + v5 * v14); /*0x629f62*/
    aP2.X = (int)&aP1->vtable0[(_DWORD)v6]; /*0x629f73*/
    aP2.Y = a3 + v7; /*0x629f77*/
    aP2.Z = a4; /*0x629f7b*/
    v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x629f7f*/
    if ( v8 ) /*0x629f89*/
      AnimClass::ctor( /*0x629fac*/
        v8,
        *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 148),
        &aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    result = --v10; /*0x629fb5*/
  }
  while ( v10 ); /*0x629fba*/
  return result; /*0x629fc0*/
}


// ==== 0x00629FD0  ParasiteClass::TickDamage  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass::_vt23(unsigned int this)
{
  int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  void *v12; // eax
  unsigned int v13; // ebx
  void *v14; // ebp
  void **v15; // eax
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  int v21; // eax
  _DWORD v22[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v23; // [esp+1Ch] [ebp-30h] BYREF
  int v24; // [esp+20h] [ebp-2Ch]
  double v25; // [esp+24h] [ebp-28h]
  double v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  int v30; // [esp+40h] [ebp-Ch] BYREF
  int v31; // [esp+44h] [ebp-8h]
  int v32; // [esp+48h] [ebp-4h]

  if ( !*(_DWORD *)(this + 40) ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3278) /*0x62a004*/
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3479) )
  {
    ParasiteClass::DeploySquad(this); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1016))(*(_DWORD *)(this + 36), 0); /*0x62a024*/
  v3 = *(int **)(this + 40); /*0x62a02a*/
  v4 = *(_DWORD **)v2; /*0x62a02d*/
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 172); /*0x62a02f*/
  v24 = v5; /*0x62a03b*/
  v27 = v3[39]; /*0x62a041*/
  v28 = v3[40]; /*0x62a048*/
  v6 = *(_DWORD *)(this + 64); /*0x62a04c*/
  v29 = v3[41]; /*0x62a052*/
  v7 = *(_DWORD *)(this + 56); /*0x62a056*/
  if ( v7 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( (int)MEMORY[0xA8ED84] - v7 < v6 ) /*0x62a068*/
  {
    v6 -= (int)MEMORY[0xA8ED84] - v7; /*0x62a06a*/
LABEL_8:
    if ( v6 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v8 = v4[44]; /*0x62a074*/
  *(_DWORD *)(this + 56) = MEMORY[0xA8ED84]; /*0x62a080*/
  *(_DWORD *)(this + 60) = v31; /*0x62a087*/
  *(_DWORD *)(this + 64) = v8; /*0x62a08a*/
  v9 = *(_DWORD *)(v5 + 368); /*0x62a092*/
  v10 = v3 + 424; /*0x62a098*/
  *v10 = MEMORY[0xA8ED84]; /*0x62a09e*/
  v10[1] = v31; /*0x62a0a4*/
  v10[2] = v9; /*0x62a0a7*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 44))(*(_DWORD *)(this + 40)) == 15 ) /*0x62a0b5*/
  {
    v11 = *(_DWORD **)(this + 40); /*0x62a0b7*/
    v22[0] = v11[27]; /*0x62a0c3*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int, _DWORD, int, int, _DWORD))(*v11 + 364))( /*0x62a0ce*/
      v22,
      0,
      v5,
      *(_DWORD *)(this + 36),
      1,
      1,
      0);
  }
  else
  {
    v12 = __2_YAPAXI_Z(0x100u); /*0x62a0d8*/
    if ( v12 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor((int)v12, MEMORY[0x8871E0]->?, &v27, 0, 0, &MEMORY[0xAC4948], 0); /*0x62a103*/
    v13 = *ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v23); /*0x62a11b*/
    if ( v4[65] ) /*0x62a11d*/
    {
      v14 = *(void **)(v4[62] + 4 * ((((v13 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v14 ) /*0x62a13d*/
      {
        v15 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x62a144*/
        if ( v15 ) /*0x62a14e*/
          AnimClass::ctor(v15, v14, &v27, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v16 = -(Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1) != 0); /*0x62a189*/
    v22[1] = (__int16)(v13 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    LOBYTE(v16) = v16 & 0xFC; /*0x62a195*/
    v17 = v29; /*0x62a19e*/
    v23 = v16 + 2; /*0x62a1a2*/
    *(double *)&v22[1] = (double)v22[1] * -0.00009587672516830327; /*0x62a1ac*/
    v26 = (double)v28; /*0x62a1be*/
    v25 = (double)(v16 + 2); /*0x62a1c6*/
    v18 = Math::SinCos(*(double *)&v22[1]); /*0x62a1ca*/
    v23 = Math::RoundToInt(v26 - v18 * v25); /*0x62a1dc*/
    v19 = Math::ArcTan2(*(double *)&v22[1]); /*0x62a1e6*/
    v30 = Math::RoundToInt(v19 * v25 + (double)v27); /*0x62a1ff*/
    v31 = v23; /*0x62a203*/
    v20 = *(_DWORD *)(this + 40); /*0x62a207*/
    v32 = v17; /*0x62a20a*/
    (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v20 + 984))(v20, &v30, 1069547520, 0); /*0x62a21c*/
    v21 = *(_DWORD *)(this + 36); /*0x62a228*/
    v22[0] = v4[41]; /*0x62a22f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int, int, _DWORD, int, _DWORD))(**(_DWORD **)(this + 40) + 364))( /*0x62a247*/
      v22,
      0,
      v24,
      v21,
      0,
      1,
      0);
  }
}


// ==== 0x0062A260  ParasiteClass::DeployUnit  this=ParasiteClass  sig=csp ====
char __thiscall TeamClass_DeployUnit(int this, int a2, int a3)
{
  char result; // al
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *Value; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
  v5 = *(_DWORD *)(this + 36); /*0x62a26c*/
  if ( a2 == v5 ) /*0x62a271*/
  {
    *(_DWORD *)(this + 36) = 0; /*0x62a273*/
    return result; /*0x62a280*/
  }
  if ( a2 == *(_DWORD *)(this + 40) ) /*0x62a286*/
  {
    result = MEMORY[0xA8ED5C]; /*0x62a28c*/
    if ( !MEMORY[0xA8ED5C] ) /*0x62a295*/
    {
      *(_DWORD *)(this + 40) = 0; /*0x62a297*/
      return result; /*0x62a2a0*/
    }
    v6 = *(_DWORD *)(this + 44); /*0x62a2a3*/
    v7 = *(_DWORD *)(this + 52); /*0x62a2a6*/
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( (int)MEMORY[0xA8ED84] - v6 >= v7 ) /*0x62a2b8*/
      {
LABEL_12:
        v9 = (_DWORD *)Object::CalculateObjectPlacementPosition(v18); /*0x62a2ec*/
        v17[0] = *v9; /*0x62a303*/
        v10 = v9[1]; /*0x62a307*/
        v17[1] = v10; /*0x62a30a*/
        v11 = v9[2]; /*0x62a30e*/
        ++MEMORY[0xA8E7AC]; /*0x62a311*/
        v17[2] = v11; /*0x62a31d*/
        if ( v17[0] == MEMORY[0xAC4948] && v10 == MEMORY[0xAC494C] && v11 == MEMORY[0xAC4950] /*0x62a364*/
          || (Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &a2),
              !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(this + 36) + 216))(
                 *(_DWORD *)(this + 36),
                 v17,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --MEMORY[0xA8E7AC]; /*0x62a462*/
          *(_DWORD *)(*(_DWORD *)(this + 36) + 108) = 0; /*0x62a46a*/
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 248))(*(_DWORD *)(this + 36)); /*0x62a472*/
          *(_DWORD *)(this + 40) = 0; /*0x62a478*/
        }
        else
        {
          --MEMORY[0xA8E7AC]; /*0x62a379*/
          v13 = *(_DWORD *)(this + 36); /*0x62a37f*/
          if ( *(_BYTE *)(v13 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540)) ) /*0x62a390*/
          {
            *(_BYTE *)(*(_DWORD *)(this + 36) + 1074) = 0; /*0x62a39c*/
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 332))(*(_DWORD *)(this + 36)); /*0x62a3a7*/
          }
          v14 = *(_DWORD *)(this + 36); /*0x62a3ad*/
          v15 = *(_DWORD *)(v14 + 1076); /*0x62a3b0*/
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 1196))(*(_DWORD *)(this + 36)) ) /*0x62a3c6*/
          {
            TechnoClass::SetFocus(*(_DWORD **)(this + 36), 0); /*0x62a3d4*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 968))(*(_DWORD *)(this + 36), 0); /*0x62a3df*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1152))( /*0x62a3ed*/
              *(_DWORD *)(this + 36),
              0,
              1);
          }
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1156))(*(_DWORD *)(this + 36), 0, 1); /*0x62a3fb*/
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1160))( /*0x62a40b*/
            *(_DWORD *)(this + 36),
            0,
            0,
            0,
            0,
            0);
          v16 = *(_DWORD **)(this + 36); /*0x62a411*/
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2(v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
          *(_DWORD *)(this + 40) = 0; /*0x62a450*/
        }
        return result; /*0x62a459*/
      }
      v7 -= (int)MEMORY[0xA8ED84] - v6; /*0x62a2ba*/
    }
    if ( v7 > 0 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 352))(v5) ) /*0x62a2c2*/
    {
      *(_DWORD *)(*(_DWORD *)(this + 40) + 1684) = 0; /*0x62a2cf*/
      v8 = *(_DWORD *)(this + 36); /*0x62a2d5*/
      *(_DWORD *)(this + 40) = 0; /*0x62a2d8*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8); /*0x62a2e9*/
    }
    goto LABEL_12; /*0x62a2ca*/
  }
  if ( a2 == *(_DWORD *)(this + 68) ) /*0x62a487*/
  {
    *(_DWORD *)(this + 68) = 0; /*0x62a489*/
    *(_BYTE *)(this + 84) = 1; /*0x62a490*/
  }
  return result; /*0x62a27a*/
}


// ==== 0x0062A4A0  BuildingClass::Deploy  this=BuildingClass  sig=csp ====
int __usercall BuildingClass_Deploy@<eax>(unsigned int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  char v4; // bl
  _WORD *v5; // eax
  unsigned int v6; // ecx
  __int16 v7; // dx
  int v8; // edx
  int v9; // eax
  void *v10; // ebp
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  void *v18; // eax
  int *v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // edx
  int result; // eax
  _DWORD *v30; // edx
  int TileIndex; // [esp+14h] [ebp-4Ch]
  int v32; // [esp+18h] [ebp-48h]
  unsigned int v35; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v36; // [esp+38h] [ebp-28h]
  unsigned int v37; // [esp+3Ch] [ebp-24h] BYREF
  int v38; // [esp+40h] [ebp-20h] BYREF
  int *v39; // [esp+44h] [ebp-1Ch] BYREF
  int v40; // [esp+48h] [ebp-18h] BYREF
  int v41; // [esp+4Ch] [ebp-14h]
  int v42; // [esp+50h] [ebp-10h]
  _BYTE v43[4]; // [esp+54h] [ebp-Ch] BYREF
  int v44; // [esp+58h] [ebp-8h]

  v4 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 132))(*(_DWORD *)(a1 + 36)) + 3278); /*0x62a4b2*/
  if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v37) >> 12) + 1) >> 1) & 7) > 2 ) /*0x62a4db*/
    LOWORD(v37) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v38) - 0x3FFF; /*0x62a51c*/
  else
    LOWORD(v37) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v38) + 0x3FFF; /*0x62a4f7*/
  v36 = v37; /*0x62a527*/
  if ( !v4 ) /*0x62a52b*/
  {
    v8 = *(_DWORD *)(a1 + 44); /*0x62a57a*/
    v9 = *(_DWORD *)(a1 + 52); /*0x62a57d*/
    if ( v8 != -1 ) /*0x62a583*/
    {
      if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x62a58f*/
      {
LABEL_10:
        v35 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(a1 + 40) + 440))( /*0x62a5a1*/
                           *(_DWORD *)(a1 + 40),
                           &v39);
        goto LABEL_11; /*0x62a5b3*/
      }
      v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x62a591*/
    }
    if ( v9 ) /*0x62a597*/
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 108) = 0; /*0x62a8a0*/
      v30 = (_DWORD *)(*(_DWORD *)(a1 + 40) + 1696); /*0x62a8ab*/
      *v30 = MEMORY[0xA8ED84]; /*0x62a8b1*/
      v30[1] = v44; /*0x62a8b7*/
      v30[2] = 0; /*0x62a8ba*/
      *(_DWORD *)(*(_DWORD *)(a1 + 40) + 1684) = 0; /*0x62a8c0*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 248))(*(_DWORD *)(a1 + 36)); /*0x62a8cb*/
      *(_DWORD *)(a1 + 40) = 0; /*0x62a8d1*/
      return result; /*0x62a8d1*/
    }
    goto LABEL_10; /*0x62a597*/
  }
  v5 = (_WORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(a1 + 40) + 440))(*(_DWORD *)(a1 + 40), &v39); /*0x62a537*/
  v6 = (((v36 >> 12) + 1) >> 1) & 7; /*0x62a54a*/
  v7 = LOWORD(MEMORY[0x89F688][v6]) + *v5; /*0x62a54d*/
  LOWORD(v6) = HIWORD(MEMORY[0x89F688][v6]); /*0x62a55c*/
  LOWORD(v37) = v7; /*0x62a560*/
  HIWORD(v37) = v5[1] + v6; /*0x62a56b*/
  v35 = v37; /*0x62a574*/
LABEL_11:
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v35); /*0x62a5b7*/
  v11 = *(int **)(a1 + 36); /*0x62a5cd*/
  v12 = *v11; /*0x62a5d5*/
  v39 = v11; /*0x62a5d7*/
  v32 = *(_DWORD *)((*(int (__thiscall **)(int *))(v12 + 132))(v11) + 1460); /*0x62a5e9*/
  v13 = (*(int (__thiscall **)(int *))(*v11 + 132))(v11); /*0x62a5ed*/
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v35, *(_DWORD *)(v13 + 1460), 0); /*0x62a60b*/
  v14 = (*(int (__thiscall **)(int *))(*v11 + 132))(v11); /*0x62a610*/
  if ( !Cell::IsBuildable((int)v10, *(_DWORD *)(v14 + 1660), 0, 0, TileIndex, v32, -1, 1) ) /*0x62a61f*/
    v35 = *(_DWORD *)MapClass::FindPlacementCellsAlt(&v39, 0); /*0x62a638*/
  v15 = MEMORY[0xAC4948]; /*0x62a641*/
  v16 = MEMORY[0xAC494C]; /*0x62a646*/
  v17 = MEMORY[0xAC4950]; /*0x62a64c*/
  v40 = MEMORY[0xAC4948]; /*0x62a659*/
  v41 = MEMORY[0xAC494C]; /*0x62a65d*/
  v42 = MEMORY[0xAC4950]; /*0x62a661*/
  if ( v35 != MEMORY[0xAC4928] ) /*0x62a665*/
  {
    v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v35); /*0x62a67f*/
    v19 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v18 + 72))(v18, v43); /*0x62a690*/
    v15 = *v19; /*0x62a692*/
    v40 = *v19; /*0x62a694*/
    v16 = v19[1]; /*0x62a698*/
    v41 = v16; /*0x62a69b*/
    v17 = v19[2]; /*0x62a69f*/
    v42 = v17; /*0x62a6a2*/
  }
  if ( v35 == MEMORY[0xAC4928] /*0x62a70b*/
    || v15 == MEMORY[0xAC4948] && v16 == MEMORY[0xAC494C] && v17 == MEMORY[0xAC4950]
    || !(unsigned __int8)ParasiteClass::CanExistOnVictimCell(a1)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a1 + 36) + 216))(
          *(_DWORD *)(a1 + 36),
          &v40,
          (unsigned __int8)(((v36 >> 7) + 1) >> 1)) )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 36) + 108) = 0; /*0x62a854*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 248))(*(_DWORD *)(a1 + 36)); /*0x62a85c*/
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 36); /*0x62a719*/
    if ( *(_BYTE *)(v20 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v20 + 540)) ) /*0x62a72c*/
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 36) + 1074) = 0; /*0x62a738*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 332))(*(_DWORD *)(a1 + 36)); /*0x62a744*/
    }
    v21 = *(_DWORD *)(a1 + 36); /*0x62a74a*/
    v22 = *(_DWORD *)(v21 + 1076); /*0x62a74d*/
    if ( v22 ) /*0x62a755*/
      TeamClass::AddMember(v22, v21, 0); /*0x62a759*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 36) + 1196))( /*0x62a763*/
            *(_DWORD *)(a1 + 36),
            a3,
            a2) )
    {
      TechnoClass::SetFocus(*(_DWORD **)(a1 + 36), 0); /*0x62a771*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 968))(*(_DWORD *)(a1 + 36), 0); /*0x62a77c*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 1152))(*(_DWORD *)(a1 + 36), 0, 1); /*0x62a78a*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 1156))(*(_DWORD *)(a1 + 36), 0, 1); /*0x62a798*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 1160))( /*0x62a7a8*/
      *(_DWORD *)(a1 + 36),
      0,
      0,
      0,
      0,
      0);
    v23 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 1016))(*(_DWORD *)(a1 + 36), 0); /*0x62a7b4*/
    v24 = (_DWORD *)(*(_DWORD *)(a1 + 36) + 1696); /*0x62a7c5*/
    v25 = *(_DWORD *)(*(_DWORD *)v23 + 176); /*0x62a7cb*/
    *v24 = MEMORY[0xA8ED84]; /*0x62a7d1*/
    v24[1] = v44; /*0x62a7da*/
    v24[2] = 3 * v25; /*0x62a7dd*/
    v26 = *(_DWORD *)(a1 + 68); /*0x62a7e0*/
    *(_DWORD *)(a1 + 76) = 0; /*0x62a7e5*/
    *(_DWORD *)(a1 + 80) = 0; /*0x62a7e8*/
    *(_DWORD *)(a1 + 72) = 0; /*0x62a7eb*/
    if ( v26 ) /*0x62a7ee*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 248))(v26); /*0x62a7f2*/
      *(_DWORD *)(a1 + 68) = 0; /*0x62a7f8*/
    }
    if ( *(_BYTE *)(a1 + 84) ) /*0x62a7fb*/
    {
      v37 = a1; /*0x62a812*/
      v27 = (*(int (__thiscall **)(int *, unsigned int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v37); /*0x62a816*/
      if ( v27 != -1 && v27 < MEMORY[0xB0F5C8] && v27 < --MEMORY[0xB0F5C8] ) /*0x62a831*/
      {
        do /*0x62a849*/
        {
          ++v27; /*0x62a839*/
          *((_DWORD *)MEMORY[0xB0F5BC] + v27 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v27); /*0x62a83d*/
        }
        while ( v27 < MEMORY[0xB0F5C8] ); /*0x62a849*/
      }
      *(_BYTE *)(a1 + 84) = 0; /*0x62a84b*/
    }
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 40) + 808) = 0; /*0x62a869*/
  v28 = (_DWORD *)(*(_DWORD *)(a1 + 40) + 1696); /*0x62a877*/
  *v28 = MEMORY[0xA8ED84]; /*0x62a87d*/
  result = v44; /*0x62a87f*/
  v28[1] = v44; /*0x62a883*/
  v28[2] = 0; /*0x62a886*/
  *(_DWORD *)(*(_DWORD *)(a1 + 40) + 1684) = 0; /*0x62a88c*/
  *(_DWORD *)(a1 + 40) = 0; /*0x62a892*/
  return result; /*0x62a895*/
}


// ==== 0x0062A8E0  ParasiteClass::CanInfect  this=ParasiteClass  sig=csp ====
bool __thiscall ParasiteClass::CanInfect(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int *v4; // eax
  bool result; // al

  result = 0; /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((_BYTE *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((_BYTE *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                v3 = this->creationFrame; /*0x62a933*/
                if ( !v3 ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (int *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( Cell::IsValidHeight(v4) ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/
}


// ==== 0x0062A980  ParasiteClass::TryInfect  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::TryInfect(int this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // eax
  int v6; // ebx
  int v7; // eax
  char v8; // al
  int v9; // ecx
  int result; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // ebx
  int v14; // [esp+1Ch] [ebp-10h] BYREF
  int v15; // [esp+20h] [ebp-Ch] BYREF
  int v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]

  v3 = *(_DWORD *)(this + 68); /*0x62a98b*/
  *(_DWORD *)(this + 76) = 0; /*0x62a98e*/
  *(_DWORD *)(this + 80) = 0; /*0x62a993*/
  *(_DWORD *)(this + 72) = 0; /*0x62a996*/
  if ( v3 ) /*0x62a999*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62a99d*/
    *(_DWORD *)(this + 68) = 0; /*0x62a9a3*/
  }
  if ( *(_BYTE *)(this + 84) ) /*0x62a9a6*/
  {
    v14 = this; /*0x62a9bd*/
    v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x62a9cf*/
    *(_BYTE *)(this + 84) = 0; /*0x62a9d4*/
  }
  *(_DWORD *)(this + 56) = MEMORY[0xA8ED84]; /*0x62a9e6*/
  *(_DWORD *)(this + 60) = v16; /*0x62a9ed*/
  *(_DWORD *)(this + 64) = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((_DWORD *)this, a2) ) /*0x62a9f5*/
  {
    v12 = (_DWORD *)(*(_DWORD *)(this + 36) + 1652); /*0x62aae2*/
    v13 = a2[39]; /*0x62aae8*/
    v16 = a2[40]; /*0x62aaed*/
    v17 = a2[41]; /*0x62aaf4*/
    if ( !*v12 ) /*0x62aaf8*/
      WinAPI::Wrapper(-2147467261); /*0x62ab03*/
    result = (*(int (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v12 + 112))(*v12, -1, v13, v16, v17); /*0x62ab24*/
    a2[421] = *(_DWORD *)(this + 36); /*0x62ab2b*/
    *(_DWORD *)(this + 40) = a2; /*0x62ab31*/
  }
  else
  {
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(*(_DWORD *)(this + 36) + 1372)); /*0x62aa11*/
    v6 = **(_DWORD **)(this + 36); /*0x62aa1f*/
    v7 = (*(int (__thiscall **)(void *, int *, _DWORD))(*(_DWORD *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    v8 = (*(int (__thiscall **)(_DWORD, int))(v6 + 216))(*(_DWORD *)(this + 36), v7); /*0x62aa2c*/
    v9 = *(_DWORD *)(this + 36); /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(_DWORD **)(this + 36); /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2(&MEMORY[0x87F7E8], &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 1196))(*(_DWORD *)(this + 36)) ) /*0x62aa9b*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 968))(*(_DWORD *)(this + 36), 0); /*0x62aaab*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1152))(*(_DWORD *)(this + 36), 0, 1); /*0x62aab9*/
      }
      return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1156))( /*0x62aac9*/
               *(_DWORD *)(this + 36),
               0,
               1);
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 248))(v9); /*0x62aa3b*/
    }
  }
  return result; /*0x62aa41*/
}


// ==== 0x0062AB40  ParasiteClass::CanExistOnVictimCell  this=ParasiteClass  sig=csp ====
bool __thiscall ParasiteClass::CanExistOnVictimCell(int this)
{
  int v2; // ecx
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  _DWORD *v9; // eax

  v2 = *(_DWORD *)(this + 40); /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  v4 = *(_DWORD *)(this + 36); /*0x62ab77*/
  if ( v4 ) /*0x62ab7c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1 ) /*0x62ab86*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 320) /*0x62abdc*/
        & 0x100) == 0;
    v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
LABEL_20:
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/
}


// ==== 0x0062AC30  Object::CalculateObjectPlacementPosition  this=ParasiteClass  sig=csp ====
int *__thiscall CalculateObjectPlacementPosition(int this, int *a2)
{
  int *result; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // eax
  int v7; // ecx
  void *v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // ebp
  _DWORD *NeighbourContentCell; // esi
  int v15; // eax
  bool v16; // bl
  int v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  void *v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // edi
  int v26; // [esp+10h] [ebp-28h] BYREF
  int v27; // [esp+14h] [ebp-24h] BYREF
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  _BYTE v30[12]; // [esp+20h] [ebp-18h] BYREF
  int v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 40) ) /*0x62ac39*/
  {
    result = a2; /*0x62ac40*/
    v4 = MEMORY[0xAC4948]; /*0x62ac44*/
    v5 = a2; /*0x62ac4a*/
LABEL_39:
    *v5 = v4; /*0x62af27*/
    v5[1] = MEMORY[0xAC494C]; /*0x62af31*/
    v5[2] = MEMORY[0xAC4950]; /*0x62af3c*/
    return result; /*0x62af3c*/
  }
  if ( !(unsigned __int8)ParasiteClass::CanExistOnVictimCell(this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x62ad3a*/
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ad43*/
    NeighbourContentCell = Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3278) ) /*0x62ad5a*/
    {
      v15 = NeighbourContentCell[59]; /*0x62ad64*/
      if ( v15 == 2 || v15 == 6 || v15 == 3 ) /*0x62ad77*/
      {
        v16 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 320) /*0x62ad90*/
             & 0x100) == 0;
        v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 68); /*0x62ad9d*/
        if ( v17 >= 74 && v17 <= 99 ) /*0x62ada8*/
          v16 = 0; /*0x62adaa*/
        if ( (v17 < 205 || v17 > 230) && v16 ) /*0x62adbc*/
        {
          result = a2; /*0x62adbe*/
          v4 = MEMORY[0xAC4948]; /*0x62adc2*/
          v5 = a2; /*0x62adc8*/
          goto LABEL_39; /*0x62adca*/
        }
      }
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*NeighbourContentCell + 72))(NeighbourContentCell, v30); /*0x62adde*/
    v19 = ObjectPlacement::CalcPosition(NeighbourContentCell, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = *(_DWORD *)(this + 36); /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell(&MEMORY[0x87F7E8], &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v21 + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 140) ) /*0x62ae45*/
    {
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v27) + 80) & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += MEMORY[0xAC497C]; /*0x62ae75*/
        *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v27) + 80) & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(_DWORD *, int *))(*v13 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(_DWORD *)(v23 + 8) ) /*0x62aec1*/
      {
LABEL_29:
        *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += MEMORY[0xAC497C]; /*0x62aec9*/
      *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62aedc*/
    }
LABEL_34:
    v4 = MEMORY[0xAC4948]; /*0x62aee3*/
    v24 = v28; /*0x62aeed*/
    v25 = v29; /*0x62aef1*/
    if ( v27 != MEMORY[0xAC4948] || v28 != MEMORY[0xAC494C] || v29 != MEMORY[0xAC4950] ) /*0x62af07*/
    {
      *a2 = v27; /*0x62af0f*/
      a2[1] = v24; /*0x62af11*/
      a2[2] = v25; /*0x62af14*/
      return a2; /*0x62af1e*/
    }
    result = a2; /*0x62af21*/
    v5 = a2; /*0x62af25*/
    goto LABEL_39; /*0x62af25*/
  }
  v6 = (int *)(*(_DWORD *)(this + 40) + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = *(_DWORD *)(this + 36); /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell(&MEMORY[0x87F7E8], &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = *(_DWORD *)(this + 40); /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( *(_BYTE *)(v10 + 140) ) /*0x62acbf*/
        v29 = MEMORY[0xAC497C] + v11; /*0x62accf*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 140) ) /*0x62acd6*/
    *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62ace3*/
  else
    *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}


// ==== 0x0062AF50  ParasiteClass::StubReturn88  this=ParasiteClass  sig=csp ====
int ParasiteClass::_vt12()
{
  return 88; /*0x62af55*/
}


// ==== 0x0062AF60  ParasiteClass::StubReturn67  this=ParasiteClass  sig=csp ====
int ParasiteClass::_vt11()
{
  return 67; /*0x62af65*/
}


// ==== 0x0062AF70  ParasiteClass::UpdateParasite  this=ParasiteClass  sig=csp ====
ParasiteClass *__thiscall ParasiteClass::UpdateParasite(ParasiteClass *Block, char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  ParasiteClass *v7; // [esp+8h] [ebp-4h] BYREF

  v3 = *((_DWORD *)Block + 17); /*0x62af77*/
  *(_DWORD *)Block->__pad_0 = &ParasiteClass::`vftable'; /*0x62af7a*/
  *(_DWORD *)&Block->__pad_0[4] = &ParasiteClass::`vftable'; /*0x62af82*/
  *(_DWORD *)&Block->__pad_0[8] = &ParasiteClass::`vftable'; /*0x62af89*/
  *(_DWORD *)&Block->__pad_0[12] = &vt_ParasiteClass; /*0x62af90*/
  *((_DWORD *)Block + 19) = 0; /*0x62af97*/
  *((_DWORD *)Block + 20) = 0; /*0x62af9a*/
  *((_DWORD *)Block + 18) = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62afa4*/
    *((_DWORD *)Block + 17) = 0; /*0x62afaa*/
  }
  if ( *((_BYTE *)Block + 84) ) /*0x62afad*/
  {
    v7 = Block; /*0x62afc2*/
    v4 = (*(int (__thiscall **)(int *, ParasiteClass **))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v7); /*0x62afc6*/
    if ( v4 != -1 && v4 < MEMORY[0xB0F5C8] && v4 < --MEMORY[0xB0F5C8] ) /*0x62afe1*/
    {
      do /*0x62aff9*/
      {
        ++v4; /*0x62afe9*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v4); /*0x62afed*/
      }
      while ( v4 < MEMORY[0xB0F5C8] ); /*0x62aff9*/
    }
    *((_BYTE *)Block + 84) = 0; /*0x62affb*/
  }
  v7 = Block; /*0x62b00e*/
  v5 = (*(int (__thiscall **)(int *, ParasiteClass **))(MEMORY[0xAC4910] + 16))(&MEMORY[0xAC4910], &v7); /*0x62b012*/
  if ( v5 != -1 && v5 < MEMORY[0xAC4920] && v5 < --MEMORY[0xAC4920] ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((_DWORD *)MEMORY[0xAC4914] + v5 - 1) = *((_DWORD *)MEMORY[0xAC4914] + v5); /*0x62b039*/
    }
    while ( v5 < MEMORY[0xAC4920] ); /*0x62b045*/
  }
  AbstractClass::DTOR(Block); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    __3_YAXPAX_Z(Block); /*0x62b056*/
  return Block; /*0x62b060*/
}


// ==== 0x0062B070  _DynamicVectorClass_PAVParasiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::sub_62B070(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x62b076*/
  *(_DWORD *)(this + 16) = 0; /*0x62b079*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x62b080*/
  {
    __3_YAXPAX_Z(v2); /*0x62b086*/
    *(_DWORD *)(this + 4) = 0; /*0x62b08e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x62b091*/
  *(_DWORD *)(this + 8) = 0; /*0x62b094*/
}


// ==== 0x0062B0A0  _DynamicVectorClass_PAVParasiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::sub_62B0A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x62b0a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x62b0b5*/
  else
    return 0; /*0x62b0a7*/
}


// ==== 0x0062B0C0  _VectorClass_PAVParasiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x62b0ca*/
}


// ==== 0x0062B0D0  _VectorClass_PAVParasiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x62b0d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x62b0dd*/
  {
    v3 = 0; /*0x62b0df*/
    if ( v2 <= 0 ) /*0x62b0e3*/
      return 1; /*0x62b103*/
    v4 = (_DWORD *)this->Items; /*0x62b0e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x62b0eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x62b0f4*/
    {
      ++v3; /*0x62b0f6*/
      ++v4; /*0x62b0f7*/
      if ( v3 >= v2 ) /*0x62b0fc*/
        return 1; /*0x62b0fc*/
    }
  }
  return 0; /*0x62b0fe*/
}


// ==== 0x0062B110  _VectorClass_PAVParasiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x62b11c*/
  {
    this->IsInitialized = 0; /*0x62b126*/
    if ( a3 ) /*0x62b12c*/
      v4 = a3; /*0x62b142*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x62b13e*/
    this->IsInitialized = 1; /*0x62b146*/
    if ( v4 ) /*0x62b14a*/
    {
      if ( this->Items ) /*0x62b155*/
      {
        v6 = this->Capacity; /*0x62b15c*/
        if ( a2 < v6 ) /*0x62b161*/
          v6 = a2; /*0x62b163*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x62b169*/
          ++i; /*0x62b16e*/
        if ( this->IsAllocated ) /*0x62b17b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x62b186*/
          this->Items = 0; /*0x62b18e*/
        }
      }
      this->Items = v4; /*0x62b197*/
      this->Capacity = a2; /*0x62b19f*/
      this->IsAllocated = a3 == 0; /*0x62b1a2*/
      return 1; /*0x62b1a8*/
    }
    else
    {
      return 0; /*0x62b14f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x62b1b2*/
    return 1; /*0x62b1b8*/
  }
}


// ==== 0x0062B1C0  _VectorClass_PAVParasiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x62b1cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x62b1d3*/
    *(_DWORD *)(this + 4) = 0; /*0x62b1db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x62b1de*/
  *(_DWORD *)(this + 8) = 0; /*0x62b1e1*/
}


// ==== 0x0062B1F0  _VectorClass_PAVParasiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x62b1f0*/
    return 0; /*0x62b1f8*/
  v3 = *(_DWORD *)(this + 8); /*0x62b1fe*/
  result = 0; /*0x62b201*/
  if ( v3 <= 0 ) /*0x62b205*/
    return -1; /*0x62b21c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x62b20b*/
  {
    if ( ++result >= v3 ) /*0x62b21a*/
      return -1; /*0x62b21a*/
  }
  return result; /*0x62b1fa*/
}


// ==== 0x0062B230  _VectorClass_PAVParasiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x62b230*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x62b245*/
  else
    return 0; /*0x62b237*/
}


// ==== 0x0062B250  _DynamicVectorClass_PAVParasiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::sub_62B250(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x62b25c*/
  {
    this->IsInitialized = 0; /*0x62b262*/
    if ( a3 ) /*0x62b268*/
      v4 = a3; /*0x62b27e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x62b27a*/
    this->IsInitialized = 1; /*0x62b282*/
    if ( !v4 ) /*0x62b286*/
      return 0; /*0x62b2fa*/
    if ( this->Items ) /*0x62b288*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x62b28f*/
      if ( a2 < v5 ) /*0x62b294*/
        v5 = a2; /*0x62b296*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x62b29c*/
        ++i; /*0x62b2a1*/
      if ( this->IsAllocated ) /*0x62b2ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x62b2b9*/
        this->Items = 0; /*0x62b2c1*/
      }
    }
    this->Items = v4; /*0x62b2ca*/
    this->DynamicVector_field_0x8 = a2; /*0x62b2d2*/
    this->IsAllocated = a3 == 0; /*0x62b2d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x62b2de*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x62b2e1*/
  if ( v7 < this->Items ) /*0x62b2e9*/
    this->Items = v7; /*0x62b2eb*/
  return 1; /*0x62b2ee*/
}


// ==== 0x0062B300  _DynamicVectorClass_PAVParasiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::sub_62B300(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x62b300*/
  result = 0; /*0x62b303*/
  if ( v2 <= 0 ) /*0x62b308*/
    return -1; /*0x62b31f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x62b30e*/
  {
    if ( ++result >= v2 ) /*0x62b31d*/
      return -1; /*0x62b31d*/
  }
  return result; /*0x62b322*/
}


// ==== 0x0062B330  _VectorClass_PAVParasiteClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ParasiteClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x62b333*/
  *Block = &vt_VectorClass_ParasiteClass; /*0x62b336*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x62b340*/
  {
    __3_YAXPAX_Z(v3); /*0x62b348*/
    *(Block + 1) = 0; /*0x62b350*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x62b35b*/
  *(Block + 2) = 0; /*0x62b361*/
  if ( (a2 & 1) != 0 ) /*0x62b368*/
    __3_YAXPAX_Z(Block); /*0x62b36b*/
  return (VectorClass *)Block; /*0x62b375*/
}


// ==== 0x0062B380  _DynamicVectorClass_PAVParasiteClass::Constructor_VectorClass_ParasiteClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x62b383*/
  *Block = &vt_VectorClass_ParasiteClass; /*0x62b386*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x62b390*/
  {
    __3_YAXPAX_Z(v3); /*0x62b398*/
    *(Block + 1) = 0; /*0x62b3a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x62b3ab*/
  *(Block + 2) = 0; /*0x62b3b1*/
  if ( (a2 & 1) != 0 ) /*0x62b3b8*/
    __3_YAXPAX_Z(Block); /*0x62b3bb*/
  return (DynamicVector *)Block; /*0x62b3c5*/
}


// ==== 0x0062B3D0  sub_62B3D0  this=-  sig=ida-proto ====
void sub_62B3D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62b3dc*/
  MEMORY[0xAC49B8] = Math::Sqrt(v0 + v0); /*0x62b3ee*/
}


// ==== 0x0062B400  sub_62B400  this=-  sig=ida-proto ====
void sub_62B400()
{
  MEMORY[0xAC4A10] = MEMORY[0xAC49B8] / 60.0; /*0x62b40c*/
}


// ==== 0x0062B420  sub_62B420  this=-  sig=ida-proto ====
void sub_62B420()
{
  MEMORY[0xAC49F8] = 1.0 / MEMORY[0xAC4A10]; /*0x62b42c*/
}


// ==== 0x0062B440  sub_62B440  this=-  sig=ida-proto ====
void sub_62B440()
{
  MEMORY[0xAC49F0] = 0.0174532925199433 * 45.0; /*0x62b44c*/
}


// ==== 0x0062B460  sub_62B460  this=-  sig=ida-proto ====
void sub_62B460()
{
  MEMORY[0xAC49C0] = 0.0174532925199433 * 60.0; /*0x62b46c*/
}


// ==== 0x0062B480  sub_62B480  this=-  sig=ida-proto ====
void sub_62B480()
{
  MEMORY[0xAC4990] = 0.0174532925199433 * 90.0; /*0x62b48c*/
}


// ==== 0x0062B4A0  sub_62B4A0  this=-  sig=ida-proto ====
__int64 sub_62B4A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4990] - MEMORY[0xAC49C0]); /*0x62b4b2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC49B8] * 0.5); /*0x62b4c6*/
  MEMORY[0xAC4A18] = result; /*0x62b4cb*/
  return result; /*0x62b4d0*/
}


// ==== 0x0062B4E0  sub_62B4E0  this=-  sig=ida-proto ====
void sub_62B4E0()
{
  MEMORY[0xAC49C8] = Math::ArcTan((double)MEMORY[0xAC4A18] * 0.00390625); /*0x62b4f7*/
}


// ==== 0x0062B510  sub_62B510  this=-  sig=ida-proto ====
void sub_62B510()
{
  MEMORY[0xAC49E8] = Math::ArcTan((double)(2 * MEMORY[0xAC4A18]) / MEMORY[0xAC49B8]); /*0x62b532*/
}


// ==== 0x0062B540  sub_62B540  this=-  sig=ida-proto ====
__int64 sub_62B540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC4A18]) + 0.5); /*0x62b55b*/
  MEMORY[0xAC4A0C] = result; /*0x62b560*/
  return result; /*0x62b566*/
}


// ==== 0x0062B570  sub_62B570  this=-  sig=ida-proto ====
int sub_62B570()
{
  MEMORY[0xAC49B0] = 0; /*0x62b572*/
  MEMORY[0xAC49B2] = 0; /*0x62b578*/
  return 0; /*0x62b57e*/
}


// ==== 0x0062B580  sub_62B580  this=-  sig=ida-proto ====
int sub_62B580()
{
  MEMORY[0xAC49D8] = 0; /*0x62b582*/
  MEMORY[0xAC49DC] = 0; /*0x62b587*/
  MEMORY[0xAC49E0] = 0; /*0x62b58c*/
  return 0; /*0x62b591*/
}


// ==== 0x0062B5A0  sub_62B5A0  this=-  sig=ida-proto ====
int sub_62B5A0()
{
  MEMORY[0xAC4A08] = 0; /*0x62b5a5*/
  MEMORY[0xAC4A00] = 128; /*0x62b5af*/
  MEMORY[0xAC4A04] = 128; /*0x62b5b4*/
  return 128; /*0x62b5b9*/
}


// ==== 0x0062B5C0  sub_62B5C0  this=-  sig=ida-proto ====
int sub_62B5C0()
{
  MEMORY[0xAC49A0] = 0; /*0x62b5c2*/
  MEMORY[0xAC49A4] = 0; /*0x62b5c7*/
  MEMORY[0xAC49A8] = 0; /*0x62b5cc*/
  MEMORY[0xAC49AC] = 0; /*0x62b5d1*/
  return 0; /*0x62b5d6*/
}


// ==== 0x0062B5E0  ParticleClass::Construct  this=ParticleClass  sig=csp ====
ParticleClass *__thiscall ParticleClass::Construct(
        int this,
        ParticleClass *aP1,
        ParticleClass *aP2,
        AbstractClass *aP3,
        IUnknown *aP4)
{
  BuildingTypeClass *v6; // eax
  double v7; // st7
  int v8; // edx
  float *v9; // ebp
  AbstractClass *v10; // ecx
  double v11; // st7
  double v12; // st6
  _BYTE *v13; // eax
  int v14; // eax
  int v15; // eax
  __int16 v16; // ax
  double v17; // st7
  float v18; // eax
  IUnknown *v19; // ecx
  BuildingTypeClass *v20; // edx
  int v21; // edi
  double v22; // st7
  int v23; // eax
  int v24; // edx
  _BYTE *v25; // eax
  AbstractClass *v27; // [esp+Ch] [ebp-2Ch]
  void *v28; // [esp+28h] [ebp-10h]
  float v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-Ch]
  IUnknown *v31; // [esp+30h] [ebp-8h]
  BuildingTypeClass *v32; // [esp+34h] [ebp-4h]
  float aP1a; // [esp+3Ch] [ebp+4h]

  ObjectClass::ctor((_DWORD *)this); /*0x62b5e9*/
  *(_DWORD *)(this + 172) = aP1; /*0x62b5f4*/
  *(_BYTE *)(this + 176) = 0; /*0x62b5fa*/
  *(_BYTE *)(this + 177) = 0; /*0x62b600*/
  *(_BYTE *)(this + 178) = 0; /*0x62b606*/
  *(_DWORD *)(this + 184) = 0; /*0x62b60c*/
  *(_DWORD *)(this + 180) = 0; /*0x62b612*/
  *(_DWORD *)(this + 188) = 0; /*0x62b618*/
  v6 = (BuildingTypeClass *)aP3; /*0x62b61e*/
  *(_DWORD *)(this + 192) = 0; /*0x62b622*/
  *(_DWORD *)(this + 196) = 0; /*0x62b628*/
  *(_DWORD *)(this + 200) = 0; /*0x62b62e*/
  *(_DWORD *)(this + 204) = 0; /*0x62b634*/
  *(_DWORD *)(this + 208) = 0; /*0x62b63a*/
  *(_DWORD *)(this + 212) = -1082130432; /*0x62b640*/
  *(_DWORD *)(this + 216) = 0; /*0x62b64a*/
  *(_DWORD *)(this + 220) = 0; /*0x62b650*/
  *(_DWORD *)(this + 224) = 0; /*0x62b656*/
  *(_DWORD *)(this + 228) = *(_DWORD *)(*(_DWORD *)(this + 172) + 764); /*0x62b66e*/
  *(_DWORD *)(this + 232) = *(_DWORD *)v6->vtable0; /*0x62b678*/
  *(_DWORD *)(this + 236) = *(_DWORD *)&v6->vtable0[4]; /*0x62b67d*/
  *(_DWORD *)(this + 240) = *(_DWORD *)&v6->vtable0[8]; /*0x62b687*/
  *(_DWORD *)(this + 244) = *(_DWORD *)aP2->__pad_0; /*0x62b694*/
  *(_DWORD *)(this + 248) = *(_DWORD *)&aP2->field_2[2]; /*0x62b699*/
  *(_DWORD *)(this + 252) = aP2->field_8; /*0x62b69f*/
  *(_QWORD *)(this + 256) = *((_QWORD *)&g_MatrixTransformState + 2937); /*0x62b6ae*/
  *(_DWORD *)(this + 264) = *(&g_MatrixTransformState + 5876); /*0x62b6c3*/
  v7 = (double)(*(_DWORD *)&v6->vtable0[8] - (unsigned int)aP2->field_8); /*0x62b6da*/
  v8 = *(_DWORD *)&v6->vtable0[4] - *(_DWORD *)&aP2->field_2[2]; /*0x62b6e0*/
  v9 = (float *)(this + 268); /*0x62b6f0*/
  v10 = (AbstractClass *)aP4; /*0x62b6fa*/
  *(float *)(this + 268) = (float)(*(_DWORD *)v6->vtable0 - *(_DWORD *)aP2->__pad_0); /*0x62b6fe*/
  *(float *)(this + 272) = (float)v8; /*0x62b701*/
  *(float *)(this + 276) = v7; /*0x62b704*/
  v11 = (double)(int)aP2->field_8; /*0x62b707*/
  v12 = (double)*(int *)&aP2->field_2[2]; /*0x62b70a*/
  *(float *)(this + 280) = (float)*(int *)aP2->__pad_0; /*0x62b70f*/
  *(float *)(this + 284) = v12; /*0x62b715*/
  *(float *)(this + 288) = v11; /*0x62b71b*/
  *(_DWORD *)(this + 292) = v10; /*0x62b721*/
  v13 = *(_BYTE **)(this + 172); /*0x62b727*/
  LOBYTE(v8) = v13[779]; /*0x62b72d*/
  *(_BYTE *)(this + 301) = 0; /*0x62b733*/
  *(_BYTE *)(this + 300) = v8; /*0x62b739*/
  *(_BYTE *)(this + 302) = v13[778]; /*0x62b745*/
  *(_BYTE *)(this + 303) = v13[756]; /*0x62b754*/
  *(_BYTE *)(this + 304) = 0; /*0x62b75b*/
  *(_BYTE *)(this + 305) = 0; /*0x62b761*/
  *(_DWORD *)this = &ParticleClass::`vftable'; /*0x62b767*/
  *(_DWORD *)(this + 4) = &ParticleClass::`vftable'; /*0x62b76d*/
  *(_DWORD *)(this + 8) = &ParticleClass::`vftable'; /*0x62b773*/
  *(_DWORD *)(this + 12) = &vt_ParticleClass; /*0x62b77a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x62b781*/
  if ( *(int *)&HouseClass_Player.__pad_74[24] < *(int *)&HouseClass_Player.__pad_74[16] /*0x62b7b9*/
    || (HouseClass_Player.__pad_74[21] || !*(_DWORD *)&HouseClass_Player.__pad_74[16])
    && *(int *)&HouseClass_Player.__pad_74[28] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_74[8] + 8))(
         &HouseClass_Player.__pad_74[8],
         *(_DWORD *)&HouseClass_Player.__pad_74[28] + *(_DWORD *)&HouseClass_Player.__pad_74[16],
         0) )
  {
    v14 = (*(_DWORD *)&HouseClass_Player.__pad_74[24])++; /*0x62b7c6*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[12] + 4 * v14) = this; /*0x62b7d5*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 172) + 788) == 1 ) /*0x62b7e5*/
    *(float *)(this + 228) = (double)(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 2) /*0x62b811*/
                           + *(float *)(this + 228);
  v15 = *(_DWORD *)(this + 172); /*0x62b817*/
  *(_WORD *)(this + 298) = *(_WORD *)(v15 + 732); /*0x62b824*/
  if ( *(_DWORD *)(v15 + 788) == 4 ) /*0x62b834*/
    v16 = *(_WORD *)(*(_DWORD *)(this + 172) + 736) /*0x62b85c*/
        + abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 10);
  else
    v16 = *(_WORD *)(*(_DWORD *)(this + 172) + 736) /*0x62b889*/
        + abs32(
            Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))
          % *(_DWORD *)(*(_DWORD *)(this + 172) + 736));
  *(_WORD *)(this + 296) = v16; /*0x62b890*/
  v28 = aP2->field_8; /*0x62b8ad*/
  if ( (int)v28 <= Cell::GetGroundHeight((IUnknown *)aP2) ) /*0x62b8ba*/
    Cell::GetGroundHeight((IUnknown *)aP2); /*0x62b8c2*/
  ObjectClass::SetPosition((#374 *)this); /*0x62b8d2*/
  v17 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x62b8fc*/
                                      *v9 * *v9
                                    + *(float *)(this + 272) * *(float *)(this + 272)
                                    + *(float *)(this + 276) * *(float *)(this + 276)));
  if ( v17 == 0.0 ) /*0x62b90f*/
  {
    v18 = *v9; /*0x62b93c*/
    v19 = *(IUnknown **)(this + 272); /*0x62b93e*/
    v20 = *(BuildingTypeClass **)(this + 276); /*0x62b941*/
  }
  else
  {
    v29 = *v9 / v17; /*0x62b916*/
    v18 = v29; /*0x62b91f*/
    *(float *)&v31 = *(float *)(this + 272) / v17; /*0x62b923*/
    v19 = v31; /*0x62b927*/
    *(float *)&v32 = *(float *)(this + 276) / v17; /*0x62b92e*/
    v20 = v32; /*0x62b932*/
  }
  *v9 = v18; /*0x62b94a*/
  *(_DWORD *)(this + 272) = v19; /*0x62b950*/
  *(_DWORD *)(this + 276) = v20; /*0x62b953*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 172) + 783) ) /*0x62b95c*/
  {
    v30 = *(_DWORD *)aP2->__pad_0 - *(_DWORD *)aP3->__pad_0; /*0x62b97e*/
    v21 = *(_DWORD *)&aP2->field_2[2] - *(_DWORD *)&aP3->__pad_0[4]; /*0x62b985*/
    *(float *)&aP3 = (float)(int)abs32(Math::RoundToInt(*v9 * *(float *)(this + 228))); /*0x62b999*/
    aP1a = (float)(int)abs32(Math::RoundToInt(*(float *)(this + 272) * *(float *)(this + 228))); /*0x62b9bb*/
    v22 = 9999.0; /*0x62b9bf*/
    if ( *(float *)&aP3 > 0.000001 ) /*0x62b9d4*/
      v22 = (double)(int)abs32(v30) / *(float *)&aP3; /*0x62b9e9*/
    if ( aP1a > 0.000001 ) /*0x62b9fc*/
    {
      *(float *)&aP3 = (double)(int)abs32(v21) / aP1a; /*0x62ba11*/
      if ( v22 >= *(float *)&aP3 ) /*0x62ba1e*/
        v22 = *(float *)&aP3; /*0x62ba22*/
    }
    aP3 = (AbstractClass *)(*(char *)(*(_DWORD *)(this + 172) + 780) + 1); /*0x62ba34*/
    *(_BYTE *)(this + 300) = Math::RoundToInt(v22); /*0x62ba4b*/
  }
  v23 = *(_DWORD *)(this + 172); /*0x62ba51*/
  if ( *(int *)(v23 + 712) > 0 ) /*0x62ba5d*/
  {
    if ( *(_BYTE *)(v23 + 724) /*0x62ba8b*/
      || *(_BYTE *)(v23 + 725)
      || *(_BYTE *)(v23 + 726)
      || *(_BYTE *)(v23 + 727)
      || *(_BYTE *)(v23 + 728)
      || *(_BYTE *)(v23 + 729) )
    {
      *(float *)&v27 = (double)Random::Range( /*0x62bae5*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 0,
                                 (IUnknown *)0x7FFFFFFE)
                     * 4.656612877414201e-10;
      v25 = Color::Lerp2(&aP3, *(_DWORD *)(this + 172) + 724, *(_DWORD *)(this + 172) + 727, *(float *)&v27); /*0x62baee*/
      *(_WORD *)(this + 176) = *(_WORD *)v25; /*0x62baf6*/
      *(_BYTE *)(this + 178) = v25[2]; /*0x62bb00*/
    }
    else
    {
      v24 = *(_DWORD *)(v23 + 700); /*0x62ba93*/
      *(_WORD *)(this + 176) = *(_WORD *)v24; /*0x62ba9c*/
      *(_BYTE *)(this + 178) = *(_BYTE *)(v24 + 2); /*0x62baa6*/
    }
  }
  ObjectClass::Deploy((#374 *)this); /*0x62bb0e*/
  return (ParticleClass *)this; /*0x62bb15*/
}


// ==== 0x0062BB20  ObjectClass::ProcessUpdate  this=ParticleClass  sig=csp ====
int __thiscall sub_62BB20(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x62bb23*/
  *(_DWORD *)(this + 172) = 0; /*0x62bb30*/
  *(_BYTE *)(this + 176) = 0; /*0x62bb36*/
  *(_BYTE *)(this + 177) = 0; /*0x62bb3c*/
  *(_BYTE *)(this + 178) = 0; /*0x62bb42*/
  *(_DWORD *)(this + 184) = 0; /*0x62bb48*/
  *(_DWORD *)(this + 180) = 0; /*0x62bb4e*/
  *(_DWORD *)(this + 188) = 0; /*0x62bb54*/
  *(_DWORD *)(this + 192) = 0; /*0x62bb5a*/
  *(_DWORD *)(this + 196) = 0; /*0x62bb60*/
  *(_DWORD *)(this + 200) = 0; /*0x62bb66*/
  *(_DWORD *)(this + 204) = 0; /*0x62bb6c*/
  *(_DWORD *)(this + 208) = 0; /*0x62bb72*/
  *(_DWORD *)(this + 212) = -1082130432; /*0x62bb78*/
  *(_DWORD *)(this + 216) = 0; /*0x62bb82*/
  *(_DWORD *)(this + 220) = 0; /*0x62bb88*/
  *(_DWORD *)(this + 224) = 0; /*0x62bb8e*/
  *(_DWORD *)(this + 228) = 0; /*0x62bb94*/
  *(_DWORD *)(this + 232) = MEMORY[0xAC49D8]; /*0x62bba0*/
  *(_DWORD *)(this + 236) = MEMORY[0xAC49DC]; /*0x62bba8*/
  *(_DWORD *)(this + 240) = MEMORY[0xAC49E0]; /*0x62bbb1*/
  *(_DWORD *)(this + 244) = MEMORY[0xAC49D8]; /*0x62bbc0*/
  *(_DWORD *)(this + 248) = MEMORY[0xAC49DC]; /*0x62bbcc*/
  *(_DWORD *)(this + 252) = MEMORY[0xAC49E0]; /*0x62bbd5*/
  *(_DWORD *)(this + 256) = MEMORY[0xAC49D8]; /*0x62bbe4*/
  *(_DWORD *)(this + 260) = MEMORY[0xAC49DC]; /*0x62bbf0*/
  *(_DWORD *)(this + 264) = MEMORY[0xAC49E0]; /*0x62bbf9*/
  *(_DWORD *)(this + 268) = 0; /*0x62bbfc*/
  *(_DWORD *)(this + 272) = 0; /*0x62bc02*/
  *(_DWORD *)(this + 276) = 0; /*0x62bc08*/
  *(_DWORD *)(this + 280) = 0; /*0x62bc0e*/
  *(_DWORD *)(this + 284) = 0; /*0x62bc14*/
  *(_DWORD *)(this + 288) = 0; /*0x62bc1a*/
  *(_DWORD *)(this + 292) = 0; /*0x62bc20*/
  *(_BYTE *)(this + 300) = 0; /*0x62bc26*/
  *(_BYTE *)(this + 301) = 0; /*0x62bc2c*/
  *(_BYTE *)(this + 302) = 0; /*0x62bc32*/
  *(_BYTE *)(this + 303) = 0; /*0x62bc38*/
  *(_BYTE *)(this + 304) = 0; /*0x62bc3e*/
  *(_BYTE *)(this + 305) = 0; /*0x62bc44*/
  *(_DWORD *)this = &ParticleClass::`vftable'; /*0x62bc4a*/
  *(_DWORD *)(this + 4) = &ParticleClass::`vftable'; /*0x62bc50*/
  *(_DWORD *)(this + 8) = &ParticleClass::`vftable'; /*0x62bc57*/
  *(_DWORD *)(this + 12) = &vt_ParticleClass; /*0x62bc5e*/
  if ( MEMORY[0xA83DD8] < MEMORY[0xA83DD0] /*0x62bc99*/
    || (MEMORY[0xA83DD5] || !MEMORY[0xA83DD0])
    && MEMORY[0xA83DDC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA83DC8] + 8))(
         &MEMORY[0xA83DC8],
         MEMORY[0xA83DD0] + MEMORY[0xA83DDC],
         0) )
  {
    v2 = MEMORY[0xA83DD8]++; /*0x62bca6*/
    *((_DWORD *)MEMORY[0xA83DCC] + v2) = this; /*0x62bcb5*/
  }
  return this; /*0x62bcba*/
}


// ==== 0x0062BD50  ParasiteClass::Update  this=ParticleClass  sig=csp ====
char __thiscall ParasiteClass_Update(char *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int *v8; // ebx
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // esi
  double v14; // st7
  _DWORD *v15; // edi
  int Byte284; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // edx
  float *v20; // eax
  float *v21; // eax
  float v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int *v26; // esi
  int v27; // edx
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  int *v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rax
  int v38; // edi
  int v39; // ebx
  char result; // al
  int v41; // [esp-Ch] [ebp-100h]
  int v42; // [esp+0h] [ebp-F4h]
  int v43; // [esp+0h] [ebp-F4h]
  int v44; // [esp+0h] [ebp-F4h]
  int v45; // [esp+4h] [ebp-F0h]
  int v46; // [esp+4h] [ebp-F0h]
  int v47; // [esp+4h] [ebp-F0h]
  bool v48; // [esp+19h] [ebp-DBh]
  char v49; // [esp+1Ah] [ebp-DAh]
  char v50; // [esp+1Bh] [ebp-D9h]
  int v51; // [esp+1Ch] [ebp-D8h] BYREF
  float v52; // [esp+20h] [ebp-D4h]
  float v53; // [esp+24h] [ebp-D0h]
  float v54; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v56; // [esp+30h] [ebp-C4h]
  float v57; // [esp+34h] [ebp-C0h]
  float v58; // [esp+38h] [ebp-BCh]
  int v59; // [esp+3Ch] [ebp-B8h]
  _DWORD v60[2]; // [esp+40h] [ebp-B4h] BYREF
  int v61; // [esp+48h] [ebp-ACh]
  _DWORD v62[3]; // [esp+4Ch] [ebp-A8h] BYREF
  float v63[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v64; // [esp+60h] [ebp-94h]
  float v65[12]; // [esp+64h] [ebp-90h] BYREF
  float v66[12]; // [esp+94h] [ebp-60h] BYREF
  float v67[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((unsigned __int8)MEMORY[0xA8ED84] & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v51 = this->q027; /*0x62bd75*/
  v52 = *((float *)this + 40); /*0x62bd88*/
  v53 = *((float *)this + 41); /*0x62bd8f*/
  if ( (abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + this->nextObject; /*0x62be11*/
    v5 = v3 + this->ParticleClass_field_0xC4; /*0x62be1b*/
    this->nextObject = v4; /*0x62be1f*/
    this->ParticleClass_field_0xC4 = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        this->nextObject = 2; /*0x62be3e*/
    }
    else
    {
      this->nextObject = -2; /*0x62be32*/
    }
    v6 = this->ParticleClass_field_0xC4; /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        this->ParticleClass_field_0xC4 = 2; /*0x62be5a*/
    }
    else
    {
      this->ParticleClass_field_0xC4 = -2; /*0x62be4e*/
    }
  }
  v7 = (double)v51; /*0x62be60*/
  v8 = (int *)(this + 204); /*0x62be64*/
  v51 = 0; /*0x62be6a*/
  v56 = v7; /*0x62be78*/
  v9 = (double)SLODWORD(v52); /*0x62be7c*/
  v52 = 0.0; /*0x62be80*/
  this->ParticleClass_field_0xCC = 0; /*0x62be8c*/
  v57 = v9; /*0x62be8e*/
  v10 = (double)SLODWORD(v53); /*0x62be92*/
  v53 = -2.0; /*0x62be96*/
  this->attachedTag = 0; /*0x62bea2*/
  v58 = v10; /*0x62bea5*/
  this->q0D4 = -1073741824; /*0x62bea9*/
  *((float *)this + 53) = *((float *)this + 53) - (double)MEMORY[0x8871E0][1].?; /*0x62bebd*/
  v45 = Math::RoundToInt(v58); /*0x62becd*/
  v42 = Math::RoundToInt(v57); /*0x62bed7*/
  v11 = Math::RoundToInt(v56); /*0x62bed8*/
  Coord3D::Set(v60, v11, v42, v45); /*0x62bee2*/
  Vector3::AddAssign(this + 204); /*0x62beec*/
  v46 = Math::RoundToInt(v58); /*0x62befe*/
  v43 = Math::RoundToInt(v57); /*0x62bf08*/
  v12 = Math::RoundToInt(v56); /*0x62bf09*/
  Coord3D::Set(v62, v12, v43, v46); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v62); /*0x62bf2d*/
  v59 = MEMORY[0xAC4A0C] + GroundHeight; /*0x62bf3d*/
  v13 = Coord::To_Cell(&MEMORY[0x87F7E8], v62); /*0x62bf46*/
  v50 = 0; /*0x62bf4d*/
  v49 = 0; /*0x62bf52*/
  if ( (v13[80] & 0x100) != 0 || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v60) + 80) & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v62[2] < v59 ) /*0x62bf84*/
    {
      if ( v61 >= v59 ) /*0x62bf93*/
        v50 = 1; /*0x62bf95*/
    }
    else if ( v61 < v59 ) /*0x62bf88*/
    {
      v49 = 1; /*0x62bf8a*/
    }
  }
  v48 = 0; /*0x62bf9e*/
  if ( !v50 && !v49 ) /*0x62bfb1*/
  {
    v14 = (double)GroundHeight; /*0x62bfb7*/
    if ( v58 >= v14 && v58 - 150.0 < v14 ) /*0x62bfdb*/
    {
      v15 = Cell::IsBridge(v13); /*0x62bfe4*/
      if ( v15 || BuildingPlacement::ValidateType(v13, -1, -1) ) /*0x62bff0*/
      {
        v48 = 1; /*0x62c001*/
        if ( v15 ) /*0x62c006*/
        {
          if ( *(_BYTE *)(v15[328] + 5823) ) /*0x62c00e*/
            v48 = v15[390] < 8; /*0x62c021*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 128))(v15) ) /*0x62c02a*/
            v48 = 0; /*0x62c034*/
        }
      }
      else
      {
        v48 = 0; /*0x62bff9*/
      }
    }
  }
  v54 = (float)GroundHeight; /*0x62c041*/
  if ( v58 < (double)v54 ) /*0x62c056*/
  {
    if ( !v50 ) /*0x62c1b7*/
    {
      if ( !v49 ) /*0x62c1cc*/
      {
LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v58 ) /*0x62c094*/
          v58 = v54; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v50 ) /*0x62c05e*/
  {
    if ( !v49 ) /*0x62c06a*/
    {
      if ( !v48 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
LABEL_47:
    LODWORD(v54) = v59 - 20; /*0x62c1d2*/
    v58 = (float)(v59 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v58 = (float)v59; /*0x62c1bd*/
LABEL_39:
  Byte284 = CellClass::GetByte284(v62); /*0x62c09e*/
  qmemcpy(v65, CopyAudioData((char *)v67, Byte284), sizeof(v65)); /*0x62c0cb*/
  v17 = InvertMatrix3x3Signs(v67, v65); /*0x62c0d4*/
  v18 = *((float *)this + 52); /*0x62c0d9*/
  v19 = *v8; /*0x62c0ea*/
  qmemcpy(v66, v17, sizeof(v66)); /*0x62c0ec*/
  *(float *)&v44 = -v18; /*0x62c0f9*/
  Triple::Set(&v51, v19, v44, this->q0D4); /*0x62c0fd*/
  v20 = Matrix3x3::TransformPoint(v66, v63, (float *)&v51); /*0x62c113*/
  v51 = *(_DWORD *)v20; /*0x62c11f*/
  v52 = v20[1]; /*0x62c126*/
  v53 = v20[2]; /*0x62c131*/
  Coord::Scale((float *)&v51, 1.0); /*0x62c135*/
  v53 = -v53; /*0x62c14a*/
  v21 = Matrix3x3::TransformPoint(v65, v63, (float *)&v51); /*0x62c152*/
  v51 = *(_DWORD *)v21; /*0x62c159*/
  v52 = v21[1]; /*0x62c160*/
  v22 = v21[2]; /*0x62c164*/
  v23 = v51; /*0x62c167*/
  *((float *)this + 52) = -v52; /*0x62c171*/
  v53 = v22; /*0x62c176*/
  *v8 = v23; /*0x62c17a*/
  *((float *)this + 53) = v22; /*0x62c17c*/
LABEL_40:
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 456))(this) <= 5 || (int)MEMORY[0xA8ED84] % 2 )
  {
    v24 = this->ParticleClass_field_0xC8 <= 0 ? 0 : this->ParticleClass_field_0xC8;
  }
  else
  {
    v24 = this->ParticleClass_field_0xC8 - 1; /*0x62c1a8*/
    if ( v24 < -5 ) /*0x62c1ac*/
      v24 = -5; /*0x62c1ae*/
  }
  this->ParticleClass_field_0xC8 = v24; /*0x62c1fa*/
LABEL_50:
  if ( !--*((_WORD *)this + 149) ) /*0x62c207*/
  {
    v25 = this->ParticleClass_field_0xAC; /*0x62c215*/
    if ( *(_DWORD *)(v25 + 744) ) /*0x62c21b*/
    {
      *((_WORD *)this + 149) = *(_WORD *)(v25 + 732); /*0x62c236*/
      v60[0] = this->q027; /*0x62c23f*/
      v60[1] = this->q028; /*0x62c250*/
      v61 = this->q029; /*0x62c257*/
      v26 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v60) + 57); /*0x62c260*/
      if ( v26 ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v27 = v26[39]; /*0x62c276*/
          v28 = v26[40]; /*0x62c278*/
          v64 = v26[41]; /*0x62c286*/
          v29 = this->q027 - v27; /*0x62c28c*/
          v30 = this->q028 - v28; /*0x62c291*/
          v31 = (int *)v26[12]; /*0x62c293*/
          v64 = this->q029; /*0x62c299*/
          v32 = abs32(v29) + abs32(v30); /*0x62c2af*/
          if ( *((_BYTE *)v26 + 144) && v26[27] > 0 ) /*0x62c2c0*/
          {
            v33 = this->ParticleClass_field_0x124; /*0x62c2c2*/
            if ( v33 ) /*0x62c2ca*/
              v34 = *(_DWORD *)(v33 + 252); /*0x62c2cc*/
            else
              v34 = 0; /*0x62c2d4*/
            v35 = this->ParticleClass_field_0xAC; /*0x62c2d6*/
            v47 = v34; /*0x62c2dc*/
            v54 = *(float *)(v35 + 744); /*0x62c2e9*/
            v36 = *v26; /*0x62c2f3*/
            v41 = *(_DWORD *)(v35 + 740); /*0x62c2f5*/
            v37 = ZCoordToScreenY(v32); /*0x62c2f6*/
            (*(void (__fastcall **)(int *, _DWORD, float *, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(v36 + 364))( /*0x62c303*/
              v26,
              HIDWORD(v37),
              &v54,
              v37,
              v41,
              0,
              0,
              0,
              v47);
          }
          v26 = v31; /*0x62c30b*/
        }
        while ( v31 ); /*0x62c30d*/
      }
    }
  }
  v38 = this->ParticleClass_field_0xAC; /*0x62c316*/
  v39 = *(_DWORD *)(v38 + 736) /*0x62c33f*/
      - *((unsigned __int16 *)this + 148)
      + (*(int (__stdcall **)(char *))(this->vtable2 + 16))(this + 4);
  if ( !(v39 % (*(char *)(v38 + 779) + ((*(int (__stdcall **)(char *))(this->vtable2 + 16))(this + 4) & 1))) ) /*0x62c355*/
    ++this->StartStateAI; /*0x62c35b*/
  result = this->StartStateAI; /*0x62c361*/
  if ( result == *(_BYTE *)(v38 + 777) ) /*0x62c36f*/
  {
    result = *(_BYTE *)(v38 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      this->q131 = 1; /*0x62c37c*/
    else
      this->StartStateAI = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/
}


// ==== 0x0062C3A0  ParticleClass::UpdateParticlePhysics  this=ParticleClass  sig=csp ====
void __thiscall sub_62C3A0(void *this)
{
  double v2; // st7
  float v3; // eax
  int v4; // eax
  double v5; // st7
  float v6; // eax
  double v7; // st7
  float v8; // eax
  float v9; // edx
  int v10; // ecx
  double v11; // st7
  int v12; // eax
  int v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch] BYREF
  float v18; // [esp+18h] [ebp-8h]
  float v19; // [esp+1Ch] [ebp-4h]

  v2 = *((float *)this + 67); /*0x62c3b1*/
  v3 = *((float *)this + 57); /*0x62c3bd*/
  v18 = *((float *)this + 68); /*0x62c3c5*/
  v19 = *((float *)this + 69); /*0x62c3cf*/
  v14 = v2 * v3; /*0x62c3e1*/
  v15 = v18 * v3; /*0x62c3ed*/
  v16 = v19 * v3; /*0x62c3f9*/
  *((float *)this + 57) = ((double)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646) /*0x62c422*/
                         * 4.656612877414201e-10
                         - 0.5)
                        * 0.1
                        + *((float *)this + 57);
  *((float *)this + 70) = v14 + *((float *)this + 70); /*0x62c432*/
  *((float *)this + 71) = v15 + *((float *)this + 71); /*0x62c442*/
  *((float *)this + 72) = v16 + *((float *)this + 72); /*0x62c452*/
  v4 = Math::RoundToInt(*((float *)this + 70)); /*0x62c45e*/
  v5 = *((float *)this + 71); /*0x62c463*/
  v17 = v4; /*0x62c469*/
  LODWORD(v6) = Math::RoundToInt(v5); /*0x62c46d*/
  v7 = *((float *)this + 72); /*0x62c472*/
  v18 = v6; /*0x62c478*/
  LODWORD(v8) = Math::RoundToInt(v7); /*0x62c47c*/
  v9 = *(float *)this; /*0x62c481*/
  v19 = v8; /*0x62c483*/
  (*(void (__thiscall **)(void *, int *))(LODWORD(v9) + 436))(this, &v17); /*0x62c48e*/
  v13 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646); /*0x62c4ac*/
  v10 = this->ParticleClass_field_0xAC; /*0x62c4b0*/
  v11 = (double)v13 * 4.656612877414201e-10 * 0.05 + *(double *)(v10 + 688) + *((double *)this + 23); /*0x62c4cc*/
  *((double *)this + 23) = v11; /*0x62c4d2*/
  if ( v11 > 1.0 ) /*0x62c4e3*/
  {
    v12 = this->ParticleClass_field_0xB4; /*0x62c4eb*/
    if ( v12 >= *(_DWORD *)(v10 + 712) - 2 ) /*0x62c4f6*/
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c518*/
      this->ParticleClass_field_0xBC = 1072693248; /*0x62c522*/
    }
    else
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c4f9*/
      this->ParticleClass_field_0xB4 = v12 + 1; /*0x62c503*/
      this->ParticleClass_field_0xBC = 0; /*0x62c509*/
    }
  }
}


// ==== 0x0062C540  ParticleClass::UpdateAnimationDrift  this=ParticleClass  sig=csp ====
void __thiscall sub_62C540(int this)
{
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // [esp+Ch] [ebp-4h]

  if ( ((unsigned __int8)MEMORY[0xA8ED84] & 1) != 0 ) /*0x62c54d*/
  {
    if ( (abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) & 3) == 0 ) /*0x62c56a*/
    {
      v2 = 0; /*0x62c576*/
      v3 = 0; /*0x62c57e*/
      v4 = Random::State((_DWORD *)MEMORY[0xA8B230] + 134); /*0x62c580*/
      v5 = (char *)MEMORY[0xA8B230] + 536; /*0x62c592*/
      if ( (abs32(v4) & 1) != 0 ) /*0x62c598*/
        v3 = (int)abs32(Random::State(v5)) % 3 - 1; /*0x62c5c5*/
      else
        v2 = (int)abs32(Random::State(v5)) % 3 - 1; /*0x62c5ae*/
      v6 = v2 + *(_DWORD *)(this + 192); /*0x62c5d1*/
      v7 = v3 + *(_DWORD *)(this + 196); /*0x62c5d9*/
      *(_DWORD *)(this + 192) = v6; /*0x62c5dd*/
      *(_DWORD *)(this + 196) = v7; /*0x62c5e3*/
      if ( v6 >= -5 ) /*0x62c5ee*/
      {
        if ( v6 > 5 ) /*0x62c5fa*/
          *(_DWORD *)(this + 192) = 5; /*0x62c5fc*/
      }
      else
      {
        *(_DWORD *)(this + 192) = -5; /*0x62c5f0*/
      }
      v8 = *(_DWORD *)(this + 196); /*0x62c602*/
      if ( v8 >= -5 ) /*0x62c60a*/
      {
        if ( v8 > 5 ) /*0x62c616*/
          *(_DWORD *)(this + 196) = 5; /*0x62c618*/
      }
      else
      {
        *(_DWORD *)(this + 196) = -5; /*0x62c60c*/
      }
    }
    *(_DWORD *)(this + 200) = 0; /*0x62c61e*/
  }
  v9 = *(_DWORD *)(this + 172); /*0x62c628*/
  if ( *(_BYTE *)(this + 302) < *(_BYTE *)(v9 + 777) ) /*0x62c63a*/
  {
    v10 = *(_DWORD *)(*(_DWORD *)(this + 172) + 736) /*0x62c664*/
        - *(unsigned __int16 *)(this + 296)
        + (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4);
    if ( !(v10 % (*(char *)(v9 + 779) + ((*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4) & 1))) ) /*0x62c67e*/
      ++*(_BYTE *)(this + 302); /*0x62c684*/
    if ( *(_BYTE *)(this + 302) == *(_BYTE *)(v9 + 777) && *(_BYTE *)(v9 + 776) ) /*0x62c69a*/
      *(_BYTE *)(this + 305) = 1; /*0x62c6a4*/
  }
  if ( *(float *)(this + 228) > 3.0 ) /*0x62c6bc*/
    *(float *)(this + 228) = *(float *)(this + 228) - *(float *)(v9 + 768); /*0x62c6ca*/
}


// ==== 0x0062C6E0  ObjectClass::UpdateParticleSystem  this=ParticleClass  sig=csp ====
void __thiscall UpdateParticleSystem(void *this)
{
  double v2; // st7
  MouseClass *v3; // eax
  IUnknown *v4; // eax
  IUnknown *v5; // eax
  char *v6; // ebx
  BuildingTypeClass *v7; // esi
  bool v8; // bl
  double v9; // st7
  _DWORD *v10; // edi
  int Byte284; // eax
  float *v12; // eax
  float *v13; // eax
  IUnknown *v14; // eax
  IUnknown *v15; // eax
  int v16; // ecx
  double v17; // st7
  int v18; // eax
  IUnknown *aP2; // [esp+0h] [ebp-13Ch]
  IUnknown *aP2a; // [esp+0h] [ebp-13Ch]
  IUnknown *aP2b; // [esp+0h] [ebp-13Ch]
  IUnknown *aP2c; // [esp+0h] [ebp-13Ch]
  int v23; // [esp+4h] [ebp-138h]
  int v24; // [esp+4h] [ebp-138h]
  IUnknown *v25; // [esp+4h] [ebp-138h]
  char v26; // [esp+1Ah] [ebp-122h]
  char v27; // [esp+1Bh] [ebp-121h]
  MouseClass *a2; // [esp+1Ch] [ebp-120h] BYREF
  float v29; // [esp+20h] [ebp-11Ch]
  float v30; // [esp+24h] [ebp-118h]
  float v31; // [esp+28h] [ebp-114h]
  float v32; // [esp+2Ch] [ebp-110h] BYREF
  float v33; // [esp+30h] [ebp-10Ch]
  float v34; // [esp+34h] [ebp-108h]
  IUnknown *v35; // [esp+38h] [ebp-104h]
  MouseClass *v36; // [esp+3Ch] [ebp-100h] BYREF
  float v37; // [esp+40h] [ebp-FCh]
  IUnknown *aP3; // [esp+44h] [ebp-F8h]
  int GroundHeight; // [esp+48h] [ebp-F4h]
  _DWORD v40[2]; // [esp+4Ch] [ebp-F0h] BYREF
  int v41; // [esp+54h] [ebp-E8h]
  _DWORD v42[3]; // [esp+58h] [ebp-E4h] BYREF
  float v43[3]; // [esp+64h] [ebp-D8h] BYREF
  float v44[3]; // [esp+70h] [ebp-CCh] BYREF
  float v45[12]; // [esp+7Ch] [ebp-C0h] BYREF
  float v46[12]; // [esp+ACh] [ebp-90h] BYREF
  char v47[48]; // [esp+DCh] [ebp-60h] BYREF
  float v48[12]; // [esp+10Ch] [ebp-30h] BYREF

  a2 = (MouseClass *)this->q027; /*0x62c6f8*/
  v2 = (double)*(int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5816); /*0x62c705*/
  v3 = (MouseClass *)this->q029; /*0x62c70b*/
  v29 = *((float *)this + 40); /*0x62c70e*/
  v30 = *(float *)&v3; /*0x62c712*/
  *((float *)this + 69) = *((float *)this + 69) - v2; /*0x62c71c*/
  v36 = *((MouseClass **)this + 67); /*0x62c728*/
  v37 = *((float *)this + 68); /*0x62c732*/
  aP3 = *((IUnknown **)this + 69); /*0x62c73c*/
  v32 = (float)(int)a2; /*0x62c74a*/
  v33 = (float)SLODWORD(v29); /*0x62c752*/
  v34 = (float)SLODWORD(v30); /*0x62c75a*/
  *(float *)&aP3 = *(float *)&aP3 - (double)*(int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5816); /*0x62c76a*/
  v23 = Math::RoundToInt(v34); /*0x62c77b*/
  aP2 = (IUnknown *)Math::RoundToInt(v33); /*0x62c785*/
  v4 = (IUnknown *)Math::RoundToInt(v32); /*0x62c786*/
  Coord3D::Set(v40, v4, (MouseClass *)aP2, v23); /*0x62c790*/
  Vector3::AddAssign(&v32, (MouseClass *)&v36); /*0x62c79e*/
  v24 = Math::RoundToInt(v34); /*0x62c7b0*/
  aP2a = (IUnknown *)Math::RoundToInt(v33); /*0x62c7ba*/
  v5 = (IUnknown *)Math::RoundToInt(v32); /*0x62c7bb*/
  Coord3D::Set(v42, v5, (MouseClass *)aP2a, v24); /*0x62c7c5*/
  GroundHeight = Cell::GetGroundHeight(v42); /*0x62c7df*/
  v6 = (char *)*(&g_MatrixTransformState + 5887) + GroundHeight; /*0x62c7e8*/
  v35 = (IUnknown *)((char *)*(&g_MatrixTransformState + 5887) + GroundHeight); /*0x62c7f0*/
  v7 = (BuildingTypeClass *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v42); /*0x62c7f9*/
  v26 = 0; /*0x62c800*/
  v27 = 0; /*0x62c805*/
  if ( (v7->ChargerBarrels[15] & 0x100) != 0 /*0x62c827*/
    || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v40) + 80) & 0x100) != 0 )
  {
    if ( v42[2] < (int)v6 ) /*0x62c833*/
    {
      if ( v41 >= (int)v6 ) /*0x62c842*/
        v26 = 1; /*0x62c844*/
    }
    else if ( v41 < (int)v6 ) /*0x62c837*/
    {
      v27 = 1; /*0x62c839*/
    }
  }
  v8 = 0; /*0x62c84d*/
  if ( !v26 && !v27 ) /*0x62c859*/
  {
    v9 = (double)GroundHeight; /*0x62c85b*/
    if ( v34 >= v9 && v34 - 150.0 < v9 ) /*0x62c87f*/
    {
      v10 = Cell::IsBridge(v7); /*0x62c888*/
      if ( v10 || BuildingPlacement::ValidateType(v7, (AbstractClass *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF) ) /*0x62c894*/
      {
        v8 = 1; /*0x62c89f*/
        if ( v10 ) /*0x62c8a1*/
        {
          if ( *(_BYTE *)(v10[328] + 5823) ) /*0x62c8a9*/
            v8 = v10[390] < 8; /*0x62c8bc*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v10 + 128))(v10) ) /*0x62c8c2*/
            v8 = 0; /*0x62c8cc*/
        }
      }
    }
  }
  v31 = (float)GroundHeight; /*0x62c8d6*/
  if ( v34 < (double)v31 ) /*0x62c8eb*/
  {
    if ( !v26 ) /*0x62c904*/
    {
      if ( !v27 ) /*0x62c916*/
      {
LABEL_28:
        v35 = (IUnknown *)(GroundHeight - 100); /*0x62c92d*/
        if ( (double)(GroundHeight - 100) < v34 ) /*0x62c945*/
          v34 = v31; /*0x62c94b*/
        goto LABEL_30; /*0x62c94b*/
      }
      goto LABEL_27; /*0x62c916*/
    }
LABEL_25:
    v34 = (float)(int)v35; /*0x62c906*/
LABEL_30:
    Byte284 = CellClass::GetByte284(v42); /*0x62c94f*/
    qmemcpy(v45, CopyAudioData(v47, Byte284), sizeof(v45)); /*0x62c97c*/
    qmemcpy(v46, InvertMatrix3x3Signs(v48, v45), sizeof(v46)); /*0x62c99c*/
    *(float *)&aP2b = -v37; /*0x62c9ae*/
    Triple::Set(&a2, (IUnknown *)v36, aP2b, aP3); /*0x62c9b2*/
    v12 = Matrix3x3::TransformPoint(v46, (IUnknown *)v44, (float *)&a2); /*0x62c9c8*/
    a2 = *(MouseClass **)v12; /*0x62c9d4*/
    v29 = v12[1]; /*0x62c9df*/
    v30 = v12[2]; /*0x62c9e6*/
    Coord::Scale((float *)&a2, (IUnknown *)0x3F800000); /*0x62c9ea*/
    v30 = -v30; /*0x62c9fd*/
    v13 = Matrix3x3::TransformPoint(v45, (IUnknown *)v43, (float *)&a2); /*0x62ca07*/
    a2 = *(MouseClass **)v13; /*0x62ca0e*/
    v29 = v13[1]; /*0x62ca15*/
    v14 = (IUnknown *)*((_DWORD *)v13 + 2); /*0x62ca19*/
    v36 = a2; /*0x62ca1c*/
    v37 = -v29; /*0x62ca26*/
    v30 = *(float *)&v14; /*0x62ca2c*/
    aP3 = v14; /*0x62ca30*/
    this->q131 = 1; /*0x62ca34*/
    goto LABEL_31; /*0x62ca34*/
  }
  if ( v26 ) /*0x62c8ef*/
    goto LABEL_25; /*0x62c8ef*/
  if ( v27 ) /*0x62c8f7*/
  {
LABEL_27:
    LODWORD(v31) = &v35[-1].__pad_1600D[15]; /*0x62c918*/
    v34 = (float)(int)&v35[-1].__pad_1600D[15]; /*0x62c927*/
    goto LABEL_30; /*0x62c92b*/
  }
  if ( v8 ) /*0x62c8fb*/
    goto LABEL_28; /*0x62c8fb*/
LABEL_31:
  v25 = (IUnknown *)Math::RoundToInt(v34); /*0x62ca3b*/
  aP2c = (IUnknown *)Math::RoundToInt(v33); /*0x62ca52*/
  v15 = (IUnknown *)Math::RoundToInt(v32); /*0x62ca53*/
  Coord::Subtract(v40, v15, aP2c, v25); /*0x62ca5d*/
  (*(void (__thiscall **)(void *, _DWORD *))(this->__pad_1B4)(this, v40); /*0x62ca6c*/
  v31 = COERCE_FLOAT(Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x7FFFFFFE)); /*0x62ca8b*/
  v16 = this->ParticleClass_field_0xAC; /*0x62ca8f*/
  v17 = (double)SLODWORD(v31) * 4.656612877414201e-10 * 0.05 + *(double *)(v16 + 688) + *((double *)this + 23); /*0x62caab*/
  *((double *)this + 23) = v17; /*0x62cab1*/
  if ( v17 > 1.0 ) /*0x62cac2*/
  {
    v18 = this->ParticleClass_field_0xB4; /*0x62caca*/
    if ( v18 >= *(_DWORD *)(v16 + 712) - 2 ) /*0x62cad5*/
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62caf5*/
      this->ParticleClass_field_0xBC = 1072693248; /*0x62cafb*/
    }
    else
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62cad8*/
      this->ParticleClass_field_0xBC = 0; /*0x62cade*/
      this->ParticleClass_field_0xB4 = v18 + 1; /*0x62cae5*/
    }
  }
}


// ==== 0x0062CB10  ObjectClass::UpdateAreaDamageEffect  this=ParticleClass  sig=csp ====
void __thiscall UpdateAreaDamageEffect(unsigned __int16 *this)
{
  double v2; // st7
  double v3; // st7
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  char v7; // cl
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  char v11; // bl
  double v12; // st7
  bool v13; // zf
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // ebx
  int v20; // ebp
  int v21; // edx
  int *v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  double v26; // st7
  int v27; // ecx
  int v28; // eax
  int v29; // [esp+24h] [ebp-28h] BYREF
  float v30; // [esp+28h] [ebp-24h] BYREF
  float v31; // [esp+2Ch] [ebp-20h]
  int v32; // [esp+30h] [ebp-1Ch]
  int v33; // [esp+34h] [ebp-18h]
  int v34; // [esp+38h] [ebp-14h]
  int v35; // [esp+3Ch] [ebp-10h]
  char v36[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( *((float *)this + 57) <= 0.0 ) /*0x62cb30*/
  {
    this->q0E4 = 0; /*0x62ce1c*/
LABEL_25:
    this->q131 = 1; /*0x62ce26*/
    return; /*0x62ce26*/
  }
  v29 = Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % 10 - 5; /*0x62cb51*/
  v2 = (double)v29 * 0.02 + 1.0; /*0x62cb5f*/
  v30 = v2 * *((float *)this + 67); /*0x62cb6d*/
  v31 = v2 * *((float *)this + 68); /*0x62cb79*/
  v3 = v2 * *((float *)this + 69); /*0x62cb7d*/
  v4 = Math::RoundToInt(v3); /*0x62cb9c*/
  v5 = Math::RoundToInt(v3); /*0x62cba9*/
  v6 = Math::RoundToInt(v3 * *((float *)this + 57)); /*0x62cbab*/
  v7 = this->StartStateAI; /*0x62cbb6*/
  this->q040 = v4; /*0x62cbbc*/
  this->q104 = v5; /*0x62cbbe*/
  this->q108 = v6; /*0x62cbc1*/
  v8 = this->ParticleClass_field_0xAC; /*0x62cbc4*/
  if ( v7 < *(char *)(v8 + 777) ) /*0x62cbd0*/
  {
    v9 = *(_DWORD *)(this->ParticleClass_field_0xAC + 736) /*0x62cbfc*/
       - this->lastLayer
       + (*(int (__stdcall **)(unsigned __int16 *))(this->vtable2 + 16))(this + 2);
    if ( !(v9 /*0x62cc12*/
         % (*((char *)this + 300)
          + ((*(int (__stdcall **)(unsigned __int16 *))(this->vtable2 + 16))(this + 2) & 1))) )
    {
      v10 = this->ParticleClass_field_0xAC; /*0x62cc1e*/
      v11 = this->StartStateAI + 1; /*0x62cc24*/
      this->StartStateAI = v11; /*0x62cc28*/
      if ( v11 == *(unsigned __int8 *)(v10 + 781) ) /*0x62cc39*/
        this->Translucency = 25; /*0x62cc3b*/
      if ( v11 == *(unsigned __int8 *)(v10 + 782) ) /*0x62cc4c*/
        this->Translucency = 50; /*0x62cc4e*/
    }
    v8 = this->ParticleClass_field_0xAC; /*0x62cc55*/
    v7 = this->StartStateAI; /*0x62cc5b*/
    if ( v7 == *(_BYTE *)(v8 + 777) ) /*0x62cc67*/
    {
      if ( *(_BYTE *)(v8 + 776) ) /*0x62cc69*/
        goto LABEL_25; /*0x62cc71*/
    }
  }
  v12 = *((float *)this + 57) - *(float *)(v8 + 768); /*0x62cc7d*/
  v13 = --*(this + 149) == 0; /*0x62cc8a*/
  *((float *)this + 57) = v12; /*0x62cc92*/
  if ( v13 && *(_DWORD *)(v8 + 744) && v7 <= *(char *)(v8 + 780) ) /*0x62ccb2*/
  {
    *(this + 149) = *(_WORD *)(v8 + 732); /*0x62ccc7*/
    v30 = *((float *)this + 39); /*0x62ccd0*/
    v31 = *((float *)this + 40); /*0x62ccdc*/
    v32 = this->q029; /*0x62cce3*/
    v14 = Coord::To_Cell(&MEMORY[0x87F7E8], &v30); /*0x62ccec*/
    if ( (v14[80] & 0x100) == 0 ) /*0x62ccfa*/
      goto LABEL_16; /*0x62ccfa*/
    v15 = this->q028; /*0x62ccfe*/
    v33 = this->q027; /*0x62cd01*/
    v16 = this->q029; /*0x62cd05*/
    v17 = *((char *)v14 + 283) + 4; /*0x62cd0f*/
    v34 = v15; /*0x62cd12*/
    if ( v16 >= MEMORY[0xAC4A18] * v17 ) /*0x62cd1f*/
      v18 = v14[58]; /*0x62cd21*/
    else
LABEL_16:
      v18 = v14[57]; /*0x62cd29*/
    for ( ; v18; v18 = *(_DWORD *)(v18 + 48) ) /*0x62cd31*/
    {
      v19 = *(_DWORD *)(v18 + 156); /*0x62cd3f*/
      v20 = *(_DWORD *)(v18 + 160); /*0x62cd41*/
      v21 = *(_DWORD *)this; /*0x62cd47*/
      v35 = *(_DWORD *)(v18 + 164); /*0x62cd49*/
      v22 = (int *)(*(int (__thiscall **)(unsigned __int16 *, char *))(v21 + 72))(this, v36); /*0x62cd52*/
      v23 = *v22; /*0x62cd55*/
      v24 = v22[1]; /*0x62cd57*/
      v25 = v22[2]; /*0x62cd5a*/
      LODWORD(v30) = v23 - v19; /*0x62cd5f*/
      LODWORD(v31) = v24 - v20; /*0x62cd6b*/
      v32 = v25 - v35; /*0x62cd6f*/
      v26 = Math::Sqrt( /*0x62cd9b*/
              (double)(v23 - v19) * (double)(v23 - v19)
            + (double)(v25 - v35) * (double)(v25 - v35)
            + (double)(v24 - v20) * (double)(v24 - v20));
      v27 = Math::RoundToInt(v26); /*0x62cda8*/
      v28 = this->ParticleClass_field_0xAC; /*0x62cdaa*/
      v29 = *(_DWORD *)(v28 + 744); /*0x62cdb6*/
      if ( *(int *)(v18 + 108) > 0 && *(_BYTE *)(v18 + 144) && v18 != *(_DWORD *)(this->ParticleClass_field_0x124 + 224) ) /*0x62cdd7*/
        (*(void (__thiscall **)(int, int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v18 + 364))( /*0x62ce03*/
          v18,
          &v29,
          v27 / 10,
          *(_DWORD *)(v28 + 740),
          0,
          0,
          0,
          0);
    }
  }
}


// ==== 0x0062CE40  ParticleClass::Dispatch  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass_Dispatch(int this)
{
  int result; // eax

  result = *(_DWORD *)(*(_DWORD *)(this + 172) + 788); /*0x62ce49*/
  switch ( result ) /*0x62ce54*/
  {
    case 0: /*0x62ce54*/
      result = ParasiteClass::Update(this); /*0x62ce5d*/
      break; /*0x62ce62*/
    case 1: /*0x62ce54*/
      result = ParticleClass::UpdateAnimationDrift(this); /*0x62ce66*/
      break; /*0x62ce6b*/
    case 2: /*0x62ce54*/
      result = UpdateAreaDamageEffect(this); /*0x62ce6f*/
      break; /*0x62ce74*/
    case 3: /*0x62ce54*/
      result = UpdateParticleSystem(this); /*0x62ce78*/
      break; /*0x62ce7d*/
    case 4: /*0x62ce54*/
      result = ParticleClass::UpdateParticlePhysics(this); /*0x62ce81*/
      break; /*0x62ce81*/
    default:
      break;
  }
  if ( !--*(_WORD *)(this + 296) ) /*0x62ce8d*/
    *(_BYTE *)(this + 305) = 1; /*0x62ce97*/
  return result; /*0x62ce9e*/
}


// ==== 0x0062CEC0  ParticleClass::DrawParticle  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::_vt69(void *this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  unsigned int v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  __int16 v20; // dx
  char v21; // al
  double v22; // st7
  int v23; // esi
  int v24; // ebp
  int v25; // eax
  int v26[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v27; // [esp+28h] [ebp-Ch] BYREF
  int v28; // [esp+2Ch] [ebp-8h]
  int v29; // [esp+30h] [ebp-4h]

  if ( (unsigned int)dword_ABCD44 >= PingPongBuffer::GetWriteOffset() || *(_DWORD *)(this->ParticleClass_field_0xAC + 744) ) /*0x62cedc*/
  {
    if ( MEMORY[0xA8EB78] || (v4 = *(_DWORD *)(this->ParticleClass_field_0xAC + 788), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( MEMORY[0xA8ED6B] /*0x62cf58*/
        || !g_hWnd
        || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0
        || (v27 = this->q027,
            v28 = this->q028,
            v29 = this->q029,
            !Game::Stub3((int)&v27)) )
      {
        v5 = *(_DWORD *)(this->ParticleClass_field_0xAC + 788); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          v26[0] = this->q027; /*0x62d036*/
          v26[1] = this->q028; /*0x62d048*/
          v26[2] = this->q029; /*0x62d054*/
          Coord::To_Screen(MEMORY[0x887324], v26, &v27); /*0x62d058*/
          v12 = MEMORY[0x886FA4] + v28; /*0x62d06b*/
          v28 += MEMORY[0x886FA4]; /*0x62d071*/
          if ( v27 >= *a3 && v27 < *a3 + a3[2] ) /*0x62d086*/
          {
            v13 = a3[1]; /*0x62d08c*/
            if ( v12 >= v13 && v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           (int)MEMORY[0x87E8A4],
                                           v27,
                                           v12 - *((_DWORD *)MEMORY[0x87E8A4] + 1));
              if ( (_WORD)v14 ) /*0x62d0bb*/
              {
                v15 = v28 - *((_DWORD *)MEMORY[0x887644] + 1); /*0x62d0d4*/
                v26[0] = v27; /*0x62d0d9*/
                v16 = ZCoordToScreenY(this->q029); /*0x62d0e8*/
                v17 = (unsigned __int16)(*((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18) - v28) /*0x62d10f*/
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int)MEMORY[0x887644], v26[0], v15) ) /*0x62d11e*/
                {
                  v18 = this->ParticleClass_field_0xB4; /*0x62d124*/
                  if ( v18 ) /*0x62d12c*/
                    v19 = *(_DWORD *)(this->ParticleClass_field_0xAC + 700) + 3 * v18; /*0x62d13f*/
                  else
                    v19 = (int)this + 176; /*0x62d12e*/
                  v20 = *(_WORD *)v19; /*0x62d145*/
                  v21 = *(_BYTE *)(v19 + 2); /*0x62d148*/
                  LOWORD(v26[0]) = v20; /*0x62d14b*/
                  BYTE2(v26[0]) = v21; /*0x62d15a*/
                  v22 = 1.0 - *((double *)this + 23); /*0x62d16d*/
                  v23 = Math::RoundToInt(v22); /*0x62d1c9*/
                  v24 = Math::RoundToInt(v22); /*0x62d1ea*/
                  v25 = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v23 = (v14 * v23) >> 7; /*0x62d22a*/
                    v24 = (v14 * v24) >> 7; /*0x62d22d*/
                    v25 = (v14 * v25) >> 7; /*0x62d230*/
                  }
                  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 36))( /*0x62d288*/
                    MEMORY[0x887314],
                    &v27,
                    (unsigned __int16)(v23 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                  | (unsigned __int16)(v24 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | (unsigned __int16)(v25 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
                }
              }
            }
          }
        }
        else
        {
          v6 = (*(int (__thiscall **)(void *))(this->isOnMap)(this); /*0x62cf87*/
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          v8 = (*(int (__thiscall **)(void *))(this->health)(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            v9 = 10240; /*0x62cfb0*/
            v10 = (*(int (__thiscall **)(void *))(this->q7A0)(this); /*0x62cfb5*/
            if ( MEMORY[0xA8EB78] == 2 ) /*0x62cfc2*/
            {
              v11 = this->Translucency; /*0x62cfc4*/
              if ( v11 == 25 ) /*0x62cfcd*/
              {
                v9 = 10242; /*0x62cfcf*/
              }
              else if ( v11 == 50 ) /*0x62cfd9*/
              {
                v9 = 10244; /*0x62cfdb*/
              }
              else if ( v11 >= 75 ) /*0x62cfe5*/
              {
                v9 = 10246; /*0x62cfe7*/
              }
            }
            DrawToSurfaceSHP( /*0x62d01d*/
              MEMORY[0x887314],
              MEMORY[0x87F6C0],
              v8,
              v10,
              a2,
              a3,
              v9 | 0xE00,
              0,
              v7,
              2,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
        }
      }
    }
  }
}


// ==== 0x0062D2A0  BuildingClass::UpdateFloatPosition  this=ParticleClass  sig=csp ====
int __thiscall sub_62D2A0(_DWORD *this)
{
  char *v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int GroundHeight; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]

  v2 = (char *)(this + 39); /*0x62d2ad*/
  v15 = this->location; /*0x62d2b9*/
  v3 = this->ParticleClass_field_0xAC; /*0x62d2bd*/
  v16 = *((_DWORD *)v2 + 1); /*0x62d2c6*/
  v17 = *((_DWORD *)v2 + 2); /*0x62d2cd*/
  v4 = *(_DWORD *)(v3 + 760); /*0x62d2d1*/
  if ( v4 > 0 && !((int)MEMORY[0xA8ED84] % (10 / v4)) ) /*0x62d2e8*/
  {
    v5 = MEMORY[0x8871E0]->BuildWeapons[1]; /*0x62d2fe*/
    v6 = MEMORY[0x836664][v5]; /*0x62d301*/
    v7 = MEMORY[0x836684][v5]; /*0x62d307*/
    v15 += v6; /*0x62d315*/
    v16 += v7; /*0x62d319*/
  }
  if ( ((unsigned __int8)MEMORY[0xA8ED84] & 1) != 0 ) /*0x62d320*/
  {
    v15 = Math::RoundToInt((double)v15 + *((float *)this + 51)); /*0x62d339*/
    v16 = Math::RoundToInt((double)v16 + *((float *)this + 52)); /*0x62d348*/
    GroundHeight = Cell::GetGroundHeight(&v15); /*0x62d356*/
    v9 = v17; /*0x62d35b*/
    if ( v17 > GroundHeight + 5 ) /*0x62d364*/
    {
      v10 = v17 - GroundHeight - 5; /*0x62d36a*/
      if ( v10 >= 2 ) /*0x62d370*/
        v10 = 2; /*0x62d372*/
      v9 = v17 - v10; /*0x62d377*/
    }
    v11 = this->ParticleClass_field_0xC8; /*0x62d389*/
    v15 += this->ParticleClass_field_0xC0; /*0x62d38f*/
    v12 = this->ParticleClass_field_0xC4 + v16; /*0x62d39f*/
    v17 = v11 + v9; /*0x62d3a1*/
    v16 = v12; /*0x62d3ab*/
    v13 = Cell::GetGroundHeight(&v15); /*0x62d3af*/
    if ( v17 < v13 + 5 ) /*0x62d3bd*/
      v17 = Cell::GetGroundHeight(&v15) + 5; /*0x62d3d1*/
  }
  return (*(int (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &v15); /*0x62d3e4*/
}


// ==== 0x0062D3F0  ParticleClass::CheckWaterImpact  this=ParticleClass  sig=csp ====
void __thiscall sub_62D3F0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  int GroundHeight; // eax
  int v15; // [esp+14h] [ebp-18h] BYREF
  int v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  _DWORD v18[2]; // [esp+20h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp-4h]

  v2 = this + 39; /*0x62d3ff*/
  v18[0] = *v2; /*0x62d405*/
  v3 = v2[2]; /*0x62d409*/
  v15 = v18[0]; /*0x62d40c*/
  v4 = v2[1]; /*0x62d410*/
  v19 = v3; /*0x62d413*/
  v16 = v4; /*0x62d417*/
  v5 = v2[2]; /*0x62d41b*/
  v6 = this->ParticleClass_field_0xAC; /*0x62d421*/
  v18[1] = v2[1]; /*0x62d427*/
  v17 = v5; /*0x62d431*/
  v7 = *(_DWORD *)(v6 + 760); /*0x62d435*/
  v8 = MEMORY[0x8871E0]->BuildWeapons[1]; /*0x62d441*/
  v9 = v7 * MEMORY[0x8366A4][v8] + v18[0]; /*0x62d45c*/
  v10 = v7 * MEMORY[0x8366C4][v8] + v4; /*0x62d45e*/
  v11 = Math::RoundToInt(*((float *)this + 57)); /*0x62d460*/
  v12 = this->ParticleClass_field_0xC0 + v9; /*0x62d479*/
  v16 = this->ParticleClass_field_0xC4 + v10; /*0x62d47b*/
  v13 = this->ParticleClass_field_0xC8 + v11 + v5; /*0x62d485*/
  v15 = v12; /*0x62d48d*/
  v17 = v13; /*0x62d491*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v18) + 80) & 0x100) != 0 /*0x62d4e5*/
    && (GroundHeight = Cell::GetGroundHeight(v18), v19 < MEMORY[0xAC4A0C] + GroundHeight)
    && (double)(MEMORY[0xAC4A0C] + GroundHeight) - (double)MEMORY[0xAC4A18] * 2.5 <= (double)v17 )
  {
    this->q131 = 1; /*0x62d4e7*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &v15); /*0x62d4ff*/
  }
}


// ==== 0x0062D510  ObjectClass::method_62D510  this=ObjectClass  sig=csp ====
int __thiscall sub_62D510(float *this)
{
  double v2; // st7
  char *v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int GroundHeight; // edi
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  _DWORD v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this->q0E4; /*0x62d524*/
  v3 = (char *)(this + 39); /*0x62d530*/
  *(float *)v15 = this->q027; /*0x62d532*/
  v4 = this->owningHouseIndex; /*0x62d536*/
  v5 = this->q029; /*0x62d539*/
  v6 = this->q027; /*0x62d53c*/
  v15[2] = v5; /*0x62d53e*/
  v7 = *((_DWORD *)v3 + 1); /*0x62d544*/
  v12 = v6; /*0x62d547*/
  v8 = *((_DWORD *)v3 + 2); /*0x62d54e*/
  v13 = v7; /*0x62d551*/
  v14 = v8; /*0x62d555*/
  v15[1] = v4; /*0x62d559*/
  if ( v2 > 0.0 ) /*0x62d55d*/
  {
    v9 = this->q108; /*0x62d565*/
    v12 = this->q040 + v6; /*0x62d56d*/
    v13 = this->q041 + v7; /*0x62d57b*/
    v14 = v9 + v8; /*0x62d57f*/
  }
  if ( this->q0E4 > 0.0 ) /*0x62d594*/
  {
    GroundHeight = Cell::GetGroundHeight(v15); /*0x62d5af*/
    if ( Cell::GetGroundHeight(&v12) > GroundHeight ) /*0x62d5b8*/
    {
      this->q12D = 1; /*0x62d5bc*/
      this->q131 = 1; /*0x62d5c2*/
    }
  }
  return (*(int (__thiscall **)(float *, int *))(this->__pad_1B4)(this, &v12); /*0x62d5d7*/
}


// ==== 0x0062D5E0  BuildingClass::AdjustHeight  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::AdjustHeight(ParticleClass *this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int GroundHeight; // edi
  MouseClass *v10; // [esp+4h] [ebp-18h] BYREF
  int var14; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h]
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this->field_AC + 197); /*0x62d5ec*/
  if ( v2 ) /*0x62d5f5*/
  {
    v3 = v2 - 1; /*0x62d5fb*/
    if ( v3 ) /*0x62d5fc*/
    {
      if ( v3 == 1 ) /*0x62d603*/
      {
        v4 = *(float *)this->__pad_E4; /*0x62d609*/
        v12[0] = *(_DWORD *)&this->__pad_28[116]; /*0x62d623*/
        v5 = *(_DWORD *)&this->__pad_28[120]; /*0x62d627*/
        v12[2] = *(_DWORD *)&this->__pad_28[124]; /*0x62d630*/
        v6 = *(_DWORD *)&this->__pad_28[124]; /*0x62d636*/
        v10 = (MouseClass *)v12[0]; /*0x62d639*/
        var14 = v5; /*0x62d640*/
        v11 = v6; /*0x62d644*/
        v12[1] = v5; /*0x62d648*/
        if ( v4 > 0.0 ) /*0x62d64c*/
        {
          v7 = *(_DWORD *)&this->__pad_E4[36]; /*0x62d654*/
          v10 = (MouseClass *)(*(_DWORD *)&this->__pad_E4[28] + v12[0]); /*0x62d65c*/
          var14 = *(_DWORD *)&this->__pad_E4[32] + v5; /*0x62d66a*/
          v11 = v7 + v6; /*0x62d66e*/
        }
        if ( *(float *)this->__pad_E4 > 0.0 ) /*0x62d683*/
        {
          GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x62d69e*/
          if ( Cell::GetGroundHeight((IUnknown *)&v10) > GroundHeight ) /*0x62d6a7*/
          {
            this->__pad_128[5] = 1; /*0x62d6ab*/
            this->__pad_128[9] = 1; /*0x62d6b1*/
          }
        }
        (*(void (__thiscall **)(ParticleClass *, MouseClass **))(*(_DWORD *)this->__pad_0 + 436))(this, &v10); /*0x62d6c0*/
      }
    }
    else
    {
      ParticleClass::CheckWaterImpact(this); /*0x62d6cf*/
    }
  }
  else
  {
    BuildingClass::UpdateFloatPosition(this); /*0x62d6db*/
  }
}


// ==== 0x0062D6F0  ParticleClass::CheckMirrorState  this=ParticleClass  sig=csp ====
bool __thiscall ParticleClass::CheckMirrorState(void *this, ObjectClass *aP1)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) != 0; /*0x62d6ff*/
}


// ==== 0x0062D710  ParticleClass::CheckDrawFlags  this=ParticleClass  sig=csp ====
int *__stdcall ParticleClass::_vt66(int a1)
{
  if ( (MEMORY[0xAC4998] & 1) == 0 ) /*0x62d71b*/
  {
    MEMORY[0xAC4998] |= 1u; /*0x62d739*/
    MEMORY[0xAC49D0] = 2147450879; /*0x62d73f*/
    atexit(nullsub_214); /*0x62d744*/
  }
  return &MEMORY[0xAC49D0]; /*0x62d752*/
}


// ==== 0x0062D760  nullsub_214  this=-  sig=ida-proto ====
void __cdecl nullsub_214()
{
  ; /*0x62d760*/
}


// ==== 0x0062D770  ParticleClass::CheckStateFlag  this=ParticleClass  sig=csp ====
int ParticleClass::_vt30()
{
  return 3; /*0x62d775*/
}


// ==== 0x0062D7A0  ParticleClass::LoadParticleData  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::LoadParticleData(void *this, ObjectClass *aP1, int aP1a)
{
  int result; // eax

  result = BuildingClass::SaveLoad_Register((#374 *)this); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( aP1 ) /*0x62d7b6*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x62d7bf*/
      *(_DWORD *)aP1->__pad_0 = &ParticleClass::`vftable'; /*0x62d7c4*/
      *(_DWORD *)&aP1->__pad_0[4] = &ParticleClass::`vftable'; /*0x62d7ca*/
      *(_DWORD *)&aP1->__pad_0[8] = &ParticleClass::`vftable'; /*0x62d7d1*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_ParticleClass; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x62d7eb*/
    ObjectPtr::RegisterForTracking( /*0x62d7fc*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].spawnStatus);
    return 0; /*0x62d801*/
  }
  return result; /*0x62d803*/
}


// ==== 0x0062D810  ParticleClass::CheckCollisionFlags  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::CheckCollisionFlags(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x62d820*/
  LOBYTE(aP0->ChargerBarrels[11]) = 1; /*0x62d825*/
  return result; /*0x62d82c*/
}


// ==== 0x0062D830  ParticleClass::vt_entry_1E8  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::vt_entry_1E8(int this)
{
  int v2; // eax
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-10h] BYREF
  int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(_DWORD *)(*(_DWORD *)(this + 172) + 788); /*0x62d83c*/
  if ( v2 >= 0 ) /*0x62d844*/
  {
    if ( v2 <= 1 ) /*0x62d84d*/
      return *(char *)(this + 302); /*0x62d84d*/
    if ( v2 == 2 ) /*0x62d856*/
    {
      Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(this + 244), v6); /*0x62d86e*/
      Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(this + 232), v5); /*0x62d885*/
      v3 = CalcMathFacing8(v6, v5); /*0x62d892*/
      if ( v3 == 2 || v3 == 6 ) /*0x62d89f*/
        return *(char *)(this + 302) + 2 * *(char *)(*(_DWORD *)(this + 172) + 777); /*0x62d91e*/
      if ( v3 != 4 && v3 ) /*0x62d8a8*/
      {
        if ( v3 == 1 || v3 == 5 ) /*0x62d8b2*/
          return *(char *)(this + 302) + *(char *)(*(_DWORD *)(this + 172) + 777); /*0x62d8f6*/
        if ( v3 == 3 || v3 == 7 ) /*0x62d8bc*/
          return *(char *)(this + 302) + 3 * *(char *)(*(_DWORD *)(this + 172) + 777); /*0x62d8db*/
        return 0; /*0x62d8bc*/
      }
      return *(char *)(this + 302); /*0x62d902*/
    }
  }
  return 0; /*0x62d8d2*/
}


// ==== 0x0062D930  ParticleClass::GetClassIdentifier  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x62d936*/
    return -2147467261; /*0x62d938*/
  *a2 = 237448652; /*0x62d946*/
  a2[1] = 298949647; /*0x62d94e*/
  a2[2] = -1610610249; /*0x62d957*/
  a2[3] = -777003740; /*0x62d960*/
  return 0; /*0x62d93d*/
}


// ==== 0x0062D970  ParticleClass::GetObjectSize  this=ParticleClass  sig=csp ====
int ParticleClass::_vt12()
{
  return 312; /*0x62d975*/
}


// ==== 0x0062D980  ParticleClass::GetTypeIdentifier  this=ParticleClass  sig=csp ====
int ParticleClass::_vt11()
{
  return 22; /*0x62d985*/
}


// ==== 0x0062D990  ParticleClass::Stub  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::_vt34(_DWORD *this)
{
  return this->ParticleClass_field_0xAC; /*0x62d996*/
}


// ==== 0x0062D9A0  ParticleClass::UpdateParticle  this=ParticleClass  sig=csp ====
ParticleClass *__thiscall ParticleClass::UpdateParticle(void **this, char a2)
{
  AbstractClass *v3; // edx
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &ParticleClass::`vftable'; /*0x62d9a4*/
  this->vtable2 = &ParticleClass::`vftable'; /*0x62d9aa*/
  this->vtable3 = &ParticleClass::`vftable'; /*0x62d9b1*/
  this->vtable4 = &vt_ParticleClass; /*0x62d9b8*/
  ObjectClass::Undeploy((#374 *)this); /*0x62d9bf*/
  LOBYTE(v3) = 1; /*0x62d9c4*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v3); /*0x62d9c8*/
  this->ParticleClass_field_0xAC = 0; /*0x62d9cd*/
  v6 = this; /*0x62d9e7*/
  v4 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&HouseClass_Player.__pad_74[8] + 16))( /*0x62d9eb*/
         &HouseClass_Player.__pad_74[8],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&HouseClass_Player.__pad_74[24] ) /*0x62d9fb*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_74[24]; /*0x62da00*/
    for ( ; /*0x62da06*/
          v4 < *(int *)&HouseClass_Player.__pad_74[24];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[12] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[12]
                                                                                           + 4 * v4) )
    {
      ++v4; /*0x62da0e*/
    }
  }
  ObjectClass::Dtor(this); /*0x62da22*/
  if ( (a2 & 1) != 0 ) /*0x62da2c*/
    __3_YAXPAX_Z(this); /*0x62da2f*/
  return (ParticleClass *)this; /*0x62da39*/
}


// ==== 0x0062DA40  sub_62DA40  this=-  sig=ida-proto ====
void sub_62DA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62da4c*/
  MEMORY[0xAC4A40] = Math::Sqrt(v0 + v0); /*0x62da5e*/
}


// ==== 0x0062DA70  sub_62DA70  this=-  sig=ida-proto ====
void sub_62DA70()
{
  MEMORY[0xAC4A90] = MEMORY[0xAC4A40] / 60.0; /*0x62da7c*/
}


// ==== 0x0062DA90  sub_62DA90  this=-  sig=ida-proto ====
void sub_62DA90()
{
  MEMORY[0xAC4A78] = 1.0 / MEMORY[0xAC4A90]; /*0x62da9c*/
}


// ==== 0x0062DAB0  sub_62DAB0  this=-  sig=ida-proto ====
void sub_62DAB0()
{
  MEMORY[0xAC4A70] = 0.0174532925199433 * 45.0; /*0x62dabc*/
}


// ==== 0x0062DAD0  sub_62DAD0  this=-  sig=ida-proto ====
void sub_62DAD0()
{
  MEMORY[0xAC4A48] = 0.0174532925199433 * 60.0; /*0x62dadc*/
}


// ==== 0x0062DAF0  sub_62DAF0  this=-  sig=ida-proto ====
void sub_62DAF0()
{
  MEMORY[0xAC4A20] = 0.0174532925199433 * 90.0; /*0x62dafc*/
}


// ==== 0x0062DB10  sub_62DB10  this=-  sig=ida-proto ====
__int64 sub_62DB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4A20] - MEMORY[0xAC4A48]); /*0x62db22*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4A40] * 0.5); /*0x62db36*/
  MEMORY[0xAC4A98] = result; /*0x62db3b*/
  return result; /*0x62db40*/
}


// ==== 0x0062DB50  sub_62DB50  this=-  sig=ida-proto ====
void sub_62DB50()
{
  MEMORY[0xAC4A50] = Math::ArcTan((double)MEMORY[0xAC4A98] * 0.00390625); /*0x62db67*/
}


// ==== 0x0062DB80  sub_62DB80  this=-  sig=ida-proto ====
void sub_62DB80()
{
  MEMORY[0xAC4A68] = Math::ArcTan((double)(2 * MEMORY[0xAC4A98]) / MEMORY[0xAC4A40]); /*0x62dba2*/
}


// ==== 0x0062DBB0  sub_62DBB0  this=-  sig=ida-proto ====
__int64 sub_62DBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC4A98]) + 0.5); /*0x62dbcb*/
  MEMORY[0xAC4A8C] = result; /*0x62dbd0*/
  return result; /*0x62dbd6*/
}


// ==== 0x0062DBE0  sub_62DBE0  this=-  sig=ida-proto ====
int sub_62DBE0()
{
  MEMORY[0xAC4A38] = 0; /*0x62dbe2*/
  MEMORY[0xAC4A3A] = 0; /*0x62dbe8*/
  return 0; /*0x62dbee*/
}


// ==== 0x0062DBF0  sub_62DBF0  this=-  sig=ida-proto ====
int sub_62DBF0()
{
  MEMORY[0xAC4A58] = 0; /*0x62dbf2*/
  MEMORY[0xAC4A5C] = 0; /*0x62dbf7*/
  MEMORY[0xAC4A60] = 0; /*0x62dbfc*/
  return 0; /*0x62dc01*/
}


// ==== 0x0062DC10  sub_62DC10  this=-  sig=ida-proto ====
int sub_62DC10()
{
  MEMORY[0xAC4A88] = 0; /*0x62dc15*/
  MEMORY[0xAC4A80] = 128; /*0x62dc1f*/
  MEMORY[0xAC4A84] = 128; /*0x62dc24*/
  return 128; /*0x62dc29*/
}


// ==== 0x0062DC30  sub_62DC30  this=-  sig=ida-proto ====
int sub_62DC30()
{
  MEMORY[0xAC4A28] = 0; /*0x62dc32*/
  MEMORY[0xAC4A2C] = 0; /*0x62dc37*/
  MEMORY[0xAC4A30] = 0; /*0x62dc3c*/
  MEMORY[0xAC4A34] = 0; /*0x62dc41*/
  return 0; /*0x62dc46*/
}


// ==== 0x0062DC50  ParticleSystemClass::Constructor  this=ParticleSystemClass  sig=csp ====
ParticleSystemClass *__thiscall ParticleSystemClass::Constructor(
        int this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6)
{
  int *v8; // ebp
  int v9; // edx
  ParticleSystemTypeClass *v10; // eax
  int v11; // eax
  int *v12; // eax
  IUnknown *v13; // eax
  _DWORD *v14; // eax
  TechnoClass *v15; // ecx
  int v16; // edi
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  _BYTE v24[12]; // [esp+1Ch] [ebp-Ch] BYREF

  ObjectClass::ctor((_DWORD *)this); /*0x62dc59*/
  *(_DWORD *)(this + 172) = aP1; /*0x62dc6a*/
  v8 = (int *)(this + 212); /*0x62dc70*/
  *(_DWORD *)(this + 176) = 0; /*0x62dc76*/
  *(_DWORD *)(this + 180) = 0; /*0x62dc7c*/
  *(_DWORD *)(this + 184) = 0; /*0x62dc82*/
  *(_DWORD *)(this + 192) = 0; /*0x62dc88*/
  *(_DWORD *)(this + 196) = 0; /*0x62dc8b*/
  *(_BYTE *)(this + 200) = 1; /*0x62dc8e*/
  *(_BYTE *)(this + 201) = 0; /*0x62dc92*/
  *(_DWORD *)(this + 188) = &vt_DynamicVectorClass_ParticleClass; /*0x62dc95*/
  *(_DWORD *)(this + 208) = 10; /*0x62dc9b*/
  *(_DWORD *)(this + 204) = 0; /*0x62dca2*/
  *(_QWORD *)(this + 212) = *((_QWORD *)&(&g_MatrixTransformState)[492] + 1); /*0x62dcad*/
  v9 = (int)*(&g_MatrixTransformState + 5908); /*0x62dcb7*/
  v10 = *(ParticleSystemTypeClass **)(this + 172); /*0x62dcbd*/
  *(_DWORD *)(this + 224) = 0; /*0x62dcc3*/
  *(_DWORD *)(this + 220) = v9; /*0x62dcc9*/
  *(_DWORD *)(this + 228) = 0; /*0x62dccc*/
  *(float *)(this + 232) = (float)v10->field_29C; /*0x62dcd8*/
  *(_DWORD *)(this + 236) = v10->field_2B8; /*0x62dce4*/
  *(_DWORD *)(this + 240) = v10->field_300; /*0x62dcf3*/
  *(_DWORD *)(this + 244) = 29; /*0x62dcfa*/
  *(_BYTE *)(this + 248) = 0; /*0x62dd04*/
  *(_BYTE *)(this + 249) = 0; /*0x62dd0a*/
  *(_DWORD *)(this + 252) = 0; /*0x62dd10*/
  *(_DWORD *)this = &ParticleSystemClass::`vftable'; /*0x62dd16*/
  *(_DWORD *)(this + 4) = &ParticleSystemClass::`vftable'; /*0x62dd1c*/
  *(_DWORD *)(this + 8) = &vt_ParticleSystemClass; /*0x62dd22*/
  *(_DWORD *)(this + 12) = &off_7EFB70; /*0x62dd29*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x62dd30*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dd6a*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A80208->field_8)(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v11 = g_GameCleanupState++; /*0x62dd77*/
    *(_DWORD *)&dword_A8020C->__pad_0[4 * v11] = this; /*0x62dd86*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 188) + 12))(this + 188); /*0x62dd8d*/
  *(_DWORD *)(this + 252) = aP6; /*0x62dd9a*/
  if ( aP3 ) /*0x62dda0*/
  {
    v12 = (int *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP3->field_0 + 72))(aP3, v24); /*0x62ddab*/
    *v8 = *v12; /*0x62ddb0*/
    *(_DWORD *)(this + 216) = v12[1]; /*0x62ddb8*/
    *(_DWORD *)(this + 220) = v12[2]; /*0x62ddbe*/
    v13 = (IUnknown *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP3->field_0 + 72))(aP3, v24); /*0x62ddc8*/
    if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v13) + 80) & 0x100) != 0 /*0x62ddeb*/
      && (*(int (__thiscall **)(IUnknown *))(aP3->field_0 + 44))(aP3) == 11 )
    {
      *(_DWORD *)(this + 220) += *(&g_MatrixTransformState + 5919); /*0x62ddfa*/
    }
  }
  else
  {
    *v8 = aP5->field_0; /*0x62de08*/
    *(_DWORD *)(this + 216) = aP5->field_4; /*0x62de0e*/
    *(_DWORD *)(this + 220) = aP5->field_8; /*0x62de14*/
  }
  if ( aP4 ) /*0x62de35*/
  {
    *(_DWORD *)(this + 224) = aP4; /*0x62de37*/
    v14 = AbstractClass::IsTechnoType(aP4); /*0x62de3d*/
    if ( v14 ) /*0x62de44*/
      *(_DWORD *)(this + 228) = v14[173]; /*0x62de4c*/
  }
  else
  {
    *(_DWORD *)(this + 224) = 0; /*0x62de54*/
    *(_DWORD *)(this + 228) = aP3; /*0x62de5a*/
  }
  ObjectClass::Deploy((#374 *)this); /*0x62de68*/
  v15 = *(TechnoClass **)(this + 224); /*0x62de6d*/
  if ( v15 ) /*0x62de75*/
  {
    v16 = *(_DWORD *)(this + 156); /*0x62de7f*/
    v17 = *(_DWORD *)(this + 160); /*0x62de81*/
    v18 = *(_DWORD *)(this + 164); /*0x62de84*/
    v19 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)v15->__pad_0 + 72))(v15, v24); /*0x62de8c*/
    v20 = v19[2]; /*0x62de96*/
    v21 = v17 - v19[1]; /*0x62de99*/
    *(_DWORD *)(this + 176) = v16 - *v19; /*0x62de9d*/
    *(_DWORD *)(this + 180) = v21; /*0x62dea3*/
    *(_DWORD *)(this + 184) = v18 - v20; /*0x62dea9*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19212] < *(int *)&stru_B05488.__pad_579C[19204] /*0x62dee6*/
    || (stru_B05488.__pad_579C[19209] || !*(_DWORD *)&stru_B05488.__pad_579C[19204])
    && *(int *)&stru_B05488.__pad_579C[19216] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19196] + 8))(
         &stru_B05488.__pad_579C[19196],
         *(_DWORD *)&stru_B05488.__pad_579C[19216] + *(_DWORD *)&stru_B05488.__pad_579C[19204],
         0) )
  {
    v22 = (*(_DWORD *)&stru_B05488.__pad_579C[19212])++; /*0x62def3*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v22) = this; /*0x62df02*/
  }
  return (ParticleSystemClass *)this; /*0x62df07*/
}


// ==== 0x0062DF20  ParticleSystemClass::ProcessCreation  this=ParticleSystemClass  sig=csp ====
int __thiscall sub_62DF20(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x62df24*/
  *(_DWORD *)(this + 172) = 0; /*0x62df31*/
  *(_DWORD *)(this + 192) = 0; /*0x62df3d*/
  *(_DWORD *)(this + 196) = 0; /*0x62df40*/
  *(_BYTE *)(this + 200) = 1; /*0x62df43*/
  *(_BYTE *)(this + 201) = 0; /*0x62df47*/
  *(_DWORD *)(this + 188) = &vt_DynamicVectorClass_ParticleClass; /*0x62df4a*/
  *(_DWORD *)(this + 208) = 10; /*0x62df50*/
  *(_DWORD *)(this + 204) = 0; /*0x62df57*/
  *(_DWORD *)(this + 212) = MEMORY[0xAC4A58]; /*0x62df60*/
  *(_DWORD *)(this + 216) = MEMORY[0xAC4A5C]; /*0x62df68*/
  v2 = MEMORY[0xAC4A60]; /*0x62df6b*/
  *(_DWORD *)(this + 224) = 0; /*0x62df71*/
  *(_DWORD *)(this + 228) = 0; /*0x62df77*/
  *(_DWORD *)(this + 220) = v2; /*0x62df7d*/
  v3 = *(_DWORD *)(this + 188); /*0x62df80*/
  *(_DWORD *)(this + 232) = 0; /*0x62df82*/
  *(_DWORD *)(this + 236) = 0; /*0x62df88*/
  *(_DWORD *)(this + 240) = 0; /*0x62df8e*/
  *(_DWORD *)(this + 244) = 0; /*0x62df94*/
  *(_BYTE *)(this + 248) = 0; /*0x62df9a*/
  *(_BYTE *)(this + 249) = 0; /*0x62dfa0*/
  *(_DWORD *)this = &ParticleSystemClass::`vftable'; /*0x62dfa6*/
  *(_DWORD *)(this + 4) = &ParticleSystemClass::`vftable'; /*0x62dfac*/
  *(_DWORD *)(this + 8) = &vt_ParticleSystemClass; /*0x62dfb3*/
  *(_DWORD *)(this + 12) = &off_7EFB70; /*0x62dfba*/
  (*(void (**)(void))(v3 + 12))(); /*0x62dfc1*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dff8*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A80208 + 8))(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v4 = g_GameCleanupState++; /*0x62e005*/
    *((_DWORD *)dword_A8020C + v4) = this; /*0x62e014*/
  }
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x62e04b*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v5 = MEMORY[0xB0F730]++; /*0x62e058*/
    *((_DWORD *)MEMORY[0xB0F724] + v5) = this; /*0x62e067*/
  }
  return this; /*0x62e06c*/
}


// ==== 0x0062E070  ParticleSystemClass::DestructParticleSystemClass  this=ParticleSystemClass  sig=csp ====
int DestructParticleSystemClass(ParticleSystemClass *aP0, int a2)
{
  AbstractClass *v2; // edx
  int v3; // ecx
  ParticleSystemClass *v4; // esi
  ParticleSystemClass *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char *Owner; // ecx
  char *v10; // ecx
  int eax14; // eax
  int v12; // eax
  int v13; // eax
  CCINIClass *v11; // eax
  int result; // eax
  ParticleSystemClass *v16; // [esp+8h] [ebp-10h]
  ParticleSystemClass *v17; // [esp+14h] [ebp-4h] BYREF

  v5 = (ParticleSystemClass *)v3; /*0x62e073*/
  LOBYTE(v2) = 1; /*0x62e075*/
  *(_DWORD *)v3 = &ParticleSystemClass::`vftable'; /*0x62e077*/
  *(_DWORD *)(v3 + 4) = &ParticleSystemClass::`vftable'; /*0x62e07d*/
  *(_DWORD *)(v3 + 8) = &vt_ParticleSystemClass; /*0x62e084*/
  *(_DWORD *)(v3 + 12) = &off_7EFB70; /*0x62e08b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)v3, v2); /*0x62e092*/
  ObjectClass::Undeploy((#374 *)v5); /*0x62e099*/
  if ( v5->Owner ) /*0x62e09e*/
  {
    v16 = v4; /*0x62e0ae*/
    do /*0x62e150*/
    {
      v6 = *(_DWORD *)v5->TargetCoords[0]; /*0x62e0b5*/
      if ( v6 ) /*0x62e0b9*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x62e0bf*/
      v17 = *(ParticleSystemClass **)v5->TargetCoords[0]; /*0x62e0d4*/
      v7 = (*(int (__thiscall **)(char *, ParticleSystemClass **, ParticleSystemClass *))(*(_DWORD *)&stru_B05488.__pad_579C[19060] /*0x62e0dd*/
                                                                                        + 16))(
             &stru_B05488.__pad_579C[19060],
             &v17,
             v16);
      if ( v7 != -1 && v7 < *(int *)&stru_B05488.__pad_579C[19076] ) /*0x62e0ed*/
      {
        --*(_DWORD *)&stru_B05488.__pad_579C[19076]; /*0x62e0f2*/
        for ( ; /*0x62e0f8*/
              v7 < *(int *)&stru_B05488.__pad_579C[19076];
              *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064]
                                                                                              + 4 * v7) )
        {
          ++v7; /*0x62e100*/
        }
      }
      v16 = (ParticleSystemClass *)v5->TargetCoords[0]; /*0x62e124*/
      v8 = (*(int (__thiscall **)(int *))(v5->Particles[0] + 16))(v5->Particles); /*0x62e127*/
      if ( v8 != -1 ) /*0x62e12d*/
      {
        Owner = (char *)v5->Owner; /*0x62e12f*/
        if ( v8 < (int)Owner ) /*0x62e134*/
        {
          v10 = Owner - 1; /*0x62e136*/
          for ( v5->Owner = v10; /*0x62e13c*/
                v8 < (int)v5->Owner;
                *(_DWORD *)(v5->TargetCoords[0] + 4 * v8 - 4) = *(_DWORD *)(v5->TargetCoords[0] + 4 * v8) )
          {
            ++v8; /*0x62e141*/
          }
        }
      }
    }
    while ( v5->Owner ); /*0x62e150*/
  }
  v5->Type = 0; /*0x62e15d*/
  v17 = v5; /*0x62e173*/
  eax14 = ((int (__thiscall *)(DynamicVector **, ParticleSystemClass **))dword_A80208->field_10)(&dword_A80208, &v17); /*0x62e177*/
  if ( eax14 != -1 && eax14 < g_GameCleanupState && eax14 < --g_GameCleanupState ) /*0x62e192*/
  {
    do /*0x62e1aa*/
    {
      ++eax14; /*0x62e19a*/
      *(_DWORD *)&dword_A8020C->__pad_0[4 * eax14 - 4] = *(_DWORD *)&dword_A8020C->__pad_0[4 * eax14]; /*0x62e19e*/
    }
    while ( eax14 < g_GameCleanupState ); /*0x62e1aa*/
  }
  v17 = v5; /*0x62e1bc*/
  v12 = (*(int (__thiscall **)(char *, ParticleSystemClass **))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 16))( /*0x62e1c0*/
          &stru_B05488.__pad_579C[19020],
          &v17);
  if ( v12 != -1 && v12 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x62e1d0*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19036]; /*0x62e1d5*/
    for ( ; /*0x62e1db*/
          v12 < *(int *)&stru_B05488.__pad_579C[19036];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v12 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024]
                                                                                           + 4 * v12) )
    {
      ++v12; /*0x62e1e3*/
    }
  }
  v17 = v5; /*0x62e205*/
  v13 = (*(int (__thiscall **)(char *, ParticleSystemClass **))(*(_DWORD *)&stru_B05488.__pad_579C[19196] + 16))( /*0x62e209*/
          &stru_B05488.__pad_579C[19196],
          &v17);
  if ( v13 != -1 && v13 < *(int *)&stru_B05488.__pad_579C[19212] ) /*0x62e219*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19212]; /*0x62e21e*/
    for ( ; /*0x62e224*/
          v13 < *(int *)&stru_B05488.__pad_579C[19212];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v13 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200]
                                                                                           + 4 * v13) )
    {
      ++v13; /*0x62e22c*/
    }
  }
  v11 = (CCINIClass *)v5->TargetCoords[0]; /*0x62e23e*/
  v5->Particles[0] = (int)&vt_VectorClass_ParticleClass; /*0x62e244*/
  if ( v11 && BYTE1(v5->TargetCoords[2]) ) /*0x62e252*/
  {
    __3_YAXPAX_Z(v11); /*0x62e25b*/
    v5->TargetCoords[0] = 0; /*0x62e263*/
  }
  BYTE1(v5->TargetCoords[2]) = 0; /*0x62e26b*/
  v5->TargetCoords[1] = 0; /*0x62e271*/
  ObjectClass::Dtor(v5); /*0x62e277*/
  return result; /*0x62e27c*/
}


// ==== 0x0062E280  ParticleSystemClass::CreateBuildingLight  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::CreateBuildingLight(int *this, int a2, TechnoClass *aP2)
{
  ParticleSystemTypeClass *v4; // eax
  double v5; // st7
  double v6; // st6
  ParticleSystemTypeClass *v7; // esi
  _DWORD *v8; // eax
  ParticleSystemTypeClass *v9; // esi

  v4 = (ParticleSystemTypeClass *)this->Type; /*0x62e287*/
  if ( LOBYTE(v4[1].field_0) && *(int *)v4->__pad_304 > 0 && this->Owner > 0 ) /*0x62e2b9*/
  {
    v5 = (double)this->Owner / (double)v4->field_2A4; /*0x62e2c3*/
    if ( v5 <= 1.0 ) /*0x62e2d6*/
      v6 = v5; /*0x62e2e0*/
    else
      v6 = 1.0; /*0x62e2d8*/
    if ( v6 >= 0.4 ) /*0x62e2ed*/
    {
      if ( v5 > 1.0 ) /*0x62e306*/
        v5 = 1.0; /*0x62e30a*/
    }
    else
    {
      v5 = 0.4; /*0x62e2f1*/
    }
    v7 = (ParticleSystemTypeClass *)Math::RoundToInt(v5 * (double)*(int *)v4->__pad_304); /*0x62e31b*/
    v8 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x62e31d*/
    if ( v8 ) /*0x62e327*/
      v9 = (ParticleSystemTypeClass *)ObjectClass::RegisterInArray( /*0x62e34c*/
                                        v8,
                                        (AbstractClass *)this->q027,
                                        this->owningHouseIndex,
                                        this->q029,
                                        (int)v7);
    else
      v9 = 0; /*0x62e350*/
    *(_DWORD *)v9->__pad_C = this->q03D; /*0x62e35a*/
    BuildingLight::CalculateShading((IUnknown *)v9); /*0x62e35d*/
    if ( v9 ) /*0x62e364*/
    {
      BuildingLightQueue::RemoveEntry(v9); /*0x62e368*/
      __3_YAXPAX_Z(v9); /*0x62e36e*/
    }
  }
}


// ==== 0x0062E380  ParticleSystemClass::CreateParticle  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::CreateParticle(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // eax
  ParticleClass *v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // edx

  if ( *(_DWORD *)(this->Type + 660) == -1 ) /*0x62e391*/
    return 0; /*0x62e391*/
  v4 = __2_YAPAXI_Z(0x138u); /*0x62e39c*/
  if ( !v4 ) /*0x62e3a6*/
    return 0; /*0x62e3a6*/
  v5 = ParticleClass::Construct( /*0x62e3d0*/
         v4,
         *(ParticleClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * *(_DWORD *)(this->Type + 660)),
         (ParticleClass *)aP1,
         (AbstractClass *)aP2,
         (IUnknown *)this);
  if ( !v5 ) /*0x62e3d4*/
    return 0; /*0x62e425*/
  v6 = this->q0C4; /*0x62e3d6*/
  v7 = this->Owner; /*0x62e3dc*/
  v8 = this + 47; /*0x62e3e2*/
  if ( v7 < v6 /*0x62e407*/
    || (*((_BYTE *)v8 + 13) || !v6)
    && (v9 = v8[5], v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v8 + 8))(v8, v6 + v9, 0) )
  {
    v10 = v8[4]; /*0x62e40e*/
    v11 = v8[1]; /*0x62e411*/
    v8[4] = v10 + 1; /*0x62e417*/
    *(_DWORD *)(v11 + 4 * v10) = v5; /*0x62e41a*/
  }
  return (int)v5->__pad_0; /*0x62e41f*/
}


// ==== 0x0062E430  ObjectClass::CreateFireAtSW  this=IUnknown  sig=csp ====
int __thiscall CreateFireAtSW(_DWORD *this, int aP1, IUnknown *aP2)
{
  int eax1; // eax
  ParticleClass *v4; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // edx

  eax1 = __2_YAPAXI_Z(0x138u); /*0x62e439*/
  if ( !eax1 ) /*0x62e443*/
    return 0; /*0x62e443*/
  v4 = ParticleClass::Construct( /*0x62e45c*/
         eax1,
         (ParticleClass *)aP1,
         (ParticleClass *)aP2,
         (AbstractClass *)(&(&g_MatrixTransformState)[492] + 2),
         (IUnknown *)this);
  if ( !v4 ) /*0x62e460*/
    return 0; /*0x62e4b1*/
  v6 = *(this + 49); /*0x62e462*/
  v7 = *(this + 51); /*0x62e468*/
  v8 = this + 47; /*0x62e46e*/
  if ( v7 < v6 /*0x62e493*/
    || (*((_BYTE *)v8 + 13) || !v6)
    && (v9 = v8[5], v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v8 + 8))(v8, v6 + v9, 0) )
  {
    v10 = v8[4]; /*0x62e49a*/
    v11 = v8[1]; /*0x62e49d*/
    v8[4] = v10 + 1; /*0x62e4a3*/
    *(_DWORD *)(v11 + 4 * v10) = v4; /*0x62e4a6*/
  }
  return (int)v4->__pad_0; /*0x62e4ab*/
}


// ==== 0x0062E4C0  ParticleClass::CreateInstance  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleClass::CreateInstance(int this, ParticleSystemClass *aP1, float aP3, int a4)
{
  int v5; // eax
  ParticleClass *v6; // ebp
  TechnoClass *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  TechnoClass *v12; // esi
  CoordStruct *v13; // ebx
  int v14; // edx
  char *v15; // eax
  char *v16; // esi
  int *v17; // ecx
  int v18; // eax

  if ( *(_DWORD *)(*(_DWORD *)(this + 172) + 660) == -1 ) /*0x62e4d2*/
    return 0; /*0x62e4d2*/
  v5 = __2_YAPAXI_Z(0x138u); /*0x62e4dd*/
  if ( !v5 ) /*0x62e4e7*/
    return 0; /*0x62e4e7*/
  v6 = ParticleClass::Construct( /*0x62e515*/
         v5,
         *(ParticleClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * *(_DWORD *)(*(_DWORD *)(this + 172) + 660)),
         (ParticleClass *)aP1,
         (AbstractClass *)LODWORD(aP3),
         (IUnknown *)this);
  if ( !v6 ) /*0x62e519*/
    return 0; /*0x62e519*/
  v7 = (TechnoClass *)a4; /*0x62e51f*/
  if ( a4 <= 0 ) /*0x62e525*/
    return 0; /*0x62e5c8*/
  v8 = *(_DWORD *)(this + 196); /*0x62e52b*/
  if ( *(_DWORD *)(this + 204) < v8 /*0x62e55d*/
    || (*(_BYTE *)(this + 201) || !v8)
    && (v9 = *(_DWORD *)(this + 208), v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 188) + 8))(this + 188, v8 + v9, 0) )
  {
    v10 = *(_DWORD *)(this + 204); /*0x62e564*/
    v11 = *(_DWORD *)(this + 192); /*0x62e567*/
    *(_DWORD *)(this + 204) = v10 + 1; /*0x62e56d*/
    *(_DWORD *)(v11 + 4 * v10) = v6; /*0x62e570*/
  }
  v12 = *(TechnoClass **)(this + 204); /*0x62e573*/
  v13 = *(CoordStruct **)(this + 192); /*0x62e579*/
  if ( (int)v12 < a4 ) /*0x62e581*/
    v7 = v12; /*0x62e583*/
  v14 = (int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))) % (int)v7; /*0x62e59b*/
  v15 = (char *)&v12[-1].isDisguisedFlag_as_house + 2; /*0x62e59d*/
  v16 = &v12->__pad_0[-v14]; /*0x62e5a0*/
  if ( (int)v15 > (int)(v16 - 2) ) /*0x62e5a7*/
  {
    v17 = &v13->X + (_DWORD)v15; /*0x62e5a9*/
    v18 = v15 - (v16 - 2); /*0x62e5ac*/
    do /*0x62e5b7*/
    {
      v17[1] = *v17; /*0x62e5b0*/
      --v17; /*0x62e5b3*/
      --v18; /*0x62e5b6*/
    }
    while ( v18 ); /*0x62e5b7*/
  }
  *((_DWORD *)v13 + (_DWORD)v16 - 1) = v6; /*0x62e5b9*/
  return (int)v6->__pad_0; /*0x62e5c0*/
}


// ==== 0x0062E650  ScenarioClass::DestroyAndClearVector  this=ScenarioClass  sig=csp ====
void __thiscall sub_62E650(int *this)
{
  int i; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  for ( i = this->q0CC - 1; i >= 0; --i ) /*0x62e65b*/
  {
    if ( i < this->q0CC ) /*0x62e664*/
    {
      v3 = *(_DWORD *)(this->q030 + 4 * i); /*0x62e673*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62e678*/
      v4 = (*(int (__thiscall **)(int *, int))(this->q0BC + 16))(this + 47, 4 * i + this->q030); /*0x62e695*/
      if ( v4 != -1 ) /*0x62e69b*/
      {
        v5 = this->q0CC; /*0x62e69d*/
        if ( v4 < v5 ) /*0x62e6a2*/
        {
          v6 = v5 - 1; /*0x62e6a4*/
          for ( this->q0CC = v6; /*0x62e6aa*/
                v4 < this->q0CC;
                *(_DWORD *)(this->q030 + 4 * v4 - 4) = *(_DWORD *)(this->q030 + 4 * v4) )
          {
            ++v4; /*0x62e6af*/
          }
        }
      }
    }
  }
}


// ==== 0x0062E6D0  ParticleSystemClass::UpdateAllParticles  this=ParticleSystemClass  sig=csp ====
void __thiscall sub_62E6D0(int this)
{
  int v1; // edi
  int i; // esi
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  int v13; // edi
  void *v14; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // ebp
  int j; // [esp+Ch] [ebp-10h]
  _DWORD v23[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = this; /*0x62e6d5*/
  for ( i = *(_DWORD *)(this + 204) - 1; i >= 0; --i ) /*0x62e6e2*/
    ParticleClass::Dispatch(*(_DWORD *)(*(_DWORD *)(v1 + 192) + 4 * i)); /*0x62e6ed*/
  v3 = *(_DWORD *)(v1 + 204) - 1; /*0x62e6fb*/
  for ( j = v3; v3 >= 0; j = v3 ) /*0x62e700*/
  {
    v4 = *(_DWORD *)(v1 + 192); /*0x62e708*/
    v5 = *(_DWORD *)(v4 + 4 * v3); /*0x62e70e*/
    if ( *(_BYTE *)(v5 + 305) ) /*0x62e711*/
    {
      v6 = *(_DWORD **)(v5 + 172); /*0x62e71f*/
      v7 = v6[196]; /*0x62e725*/
      if ( v7 != -1 ) /*0x62e72e*/
      {
        v8 = *((_DWORD *)MEMORY[0xA83D9C] + v7); /*0x62e747*/
        v9 = *(_DWORD *)(v5 + 156) + v6[165]; /*0x62e753*/
        v10 = v6[166]; /*0x62e755*/
        v11 = *(_DWORD *)(v5 + 160); /*0x62e75b*/
        v12 = v6[167]; /*0x62e75e*/
        v23[0] = v9; /*0x62e766*/
        v13 = *(_DWORD *)(v5 + 164); /*0x62e76a*/
        v23[1] = v11 + v10; /*0x62e76d*/
        v23[2] = v13 + v12; /*0x62e773*/
        v14 = __2_YAPAXI_Z(0x138u); /*0x62e777*/
        v1 = this; /*0x62e77c*/
        if ( v14 ) /*0x62e785*/
        {
          v15 = ParticleClass::Construct((int)v14, v8, v23, COERCE_FLOAT(&MEMORY[0xAC4A58]), this); /*0x62e79e*/
          if ( v15 ) /*0x62e7a2*/
          {
            v16 = *(_DWORD *)(this + 196); /*0x62e7a4*/
            if ( *(_DWORD *)(this + 204) < v16 /*0x62e7d5*/
              || (*(_BYTE *)(this + 201) || !v16)
              && (v17 = *(_DWORD *)(this + 208), v17 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 188) + 8))(
                   this + 188,
                   v16 + v17,
                   0) )
            {
              v18 = *(_DWORD *)(this + 204); /*0x62e7dc*/
              v19 = *(_DWORD *)(this + 192); /*0x62e7df*/
              *(_DWORD *)(this + 204) = v18 + 1; /*0x62e7e5*/
              *(_DWORD *)(v19 + 4 * v18) = v15; /*0x62e7e8*/
            }
            *(_DWORD *)(v15 + 228) = *(_DWORD *)(v5 + 228); /*0x62e7f7*/
            v20 = (_DWORD *)(v15 + 192); /*0x62e7fd*/
            *v20 = *(_DWORD *)(v5 + 192); /*0x62e805*/
            v20[1] = *(_DWORD *)(v5 + 196); /*0x62e80b*/
            v20[2] = *(_DWORD *)(v5 + 200); /*0x62e811*/
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 248))(v5); /*0x62e818*/
      v3 = j; /*0x62e81e*/
    }
    else
    {
      ParticleClass::AdjustHeight(*(float **)(v4 + 4 * v3)); /*0x62e826*/
    }
    --v3; /*0x62e82b*/
  }
}


// ==== 0x0062E840  ObjectClass::UpdateProductionParticleSystem  this=ObjectClass  sig=csp ====
char __thiscall UpdateProductionParticleSystem(int this)
{
  int v2; // eax
  int v3; // eax
  AbstractClass *v4; // edi
  int v5; // esi
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  AbstractClass *v11; // eax
  ScenarioClass *v12; // ebp
  int v13; // eax
  _DWORD *v14; // edi
  float *v15; // esi
  double v16; // st7
  char v17; // al
  double v18; // st7
  ScenarioClass *v19; // eax
  float v20; // edx
  float *v21; // eax
  double v22; // st7
  float v23; // edx
  float v24; // ecx
  double v25; // st7
  float v26; // eax
  float v27; // ecx
  ScenarioClass *v28; // edx
  double v29; // st7
  double v30; // st7
  float v31; // ecx
  ScenarioClass *v32; // eax
  AbstractClass *v33; // eax
  _DWORD *v34; // eax
  int v35; // eax
  double v36; // st7
  int v37; // eax
  int v38; // eax
  int i; // esi
  int j; // esi
  _BYTE *v41; // ecx
  ScenarioClass *v43; // [esp+1Ch] [ebp-64h] BYREF
  ScenarioClass *v44; // [esp+20h] [ebp-60h]
  int aP1_8; // [esp+24h] [ebp-5Ch]
  float aP1_12; // [esp+28h] [ebp-58h]
  float aP1_16; // [esp+2Ch] [ebp-54h]
  float aP1_20; // [esp+30h] [ebp-50h]
  float aP1_24; // [esp+34h] [ebp-4Ch]
  float aP1_28; // [esp+38h] [ebp-48h]
  float aP1_32; // [esp+3Ch] [ebp-44h]
  float v52; // [esp+40h] [ebp-40h]
  float v53; // [esp+44h] [ebp-3Ch]
  float v54; // [esp+48h] [ebp-38h]
  ScenarioClass *v55; // [esp+4Ch] [ebp-34h]
  ScenarioClass *v56; // [esp+50h] [ebp-30h]
  float v57; // [esp+54h] [ebp-2Ch]
  int v58; // [esp+58h] [ebp-28h]
  AbstractClass aP3; // [esp+5Ch] [ebp-24h] BYREF

  v2 = *(_DWORD *)(this + 240); /*0x62e84e*/
  if ( v2 > 0 ) /*0x62e857*/
  {
    if ( v2 == 1 /*0x62e898*/
      || (aP1_8 = Random::Range(
                    (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                    0,
                    (IUnknown *)0x7FFFFFFE),
          (double)aP1_8 * 4.656612877414201e-10 <= *(double *)(*(_DWORD *)(this + 172) + 760)) )
    {
      v3 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x62e8aa*/
      v4 = *(AbstractClass **)(this + 172); /*0x62e8af*/
      v5 = v4[18].referenceCount / 2 + (int)abs32(v3) % (v4[18].referenceCount / 2); /*0x62e8dc*/
      v6 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536); /*0x62e8e4*/
      v7 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * *(_DWORD *)&v4[18].__pad_0[12]); /*0x62e8ea*/
      v43 = (ScenarioClass *)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x62e8f4*/
      v44 = (ScenarioClass *)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x62e90a*/
      aP1_8 = Random::State(v6) % v7[171]; /*0x62e91e*/
      v8 = (int)v44 % v7[168]; /*0x62e927*/
      aP1_12 = (float)aP1_8; /*0x62e92d*/
      aP1_8 = v8; /*0x62e935*/
      v9 = (int)v43 % v7[169]; /*0x62e93e*/
      *(float *)&aP3.nextArrayIndex = (float)aP1_8; /*0x62e944*/
      aP1_8 = v9; /*0x62e94a*/
      *(float *)&aP3.referenceCount = (float)v9; /*0x62e952*/
      if ( v5 > 0 ) /*0x62e956*/
      {
        aP1_8 = v5; /*0x62e95c*/
        do /*0x62ebec*/
        {
          *(_DWORD *)aP3.__pad_0 = *(_DWORD *)(this + 156); /*0x62e96a*/
          *(_DWORD *)&aP3.__pad_0[4] = *(_DWORD *)(this + 160); /*0x62e971*/
          v10 = *(_DWORD *)(this + 164); /*0x62e977*/
          *(_DWORD *)&aP3.__pad_0[12] = *(_DWORD *)(this + 156); /*0x62e97a*/
          *(_DWORD *)&aP3.__pad_0[8] = v10; /*0x62e97e*/
          aP3.uniqueId = *(_DWORD *)(this + 160); /*0x62e985*/
          v11 = *(AbstractClass **)(this + 172); /*0x62e98c*/
          aP3.abstractFlags = *(_DWORD *)(this + 164); /*0x62e992*/
          if ( *(_DWORD *)&v11[18].__pad_0[12] == -1 ) /*0x62e99d*/
          {
            v12 = 0; /*0x62e99f*/
          }
          else
          {
            v13 = __2_YAPAXI_Z(0x138u); /*0x62e9a8*/
            v12 = 0; /*0x62e9ad*/
            if ( v13 ) /*0x62e9b4*/
            {
              v43 = (ScenarioClass *)ParticleClass::Construct( /*0x62e9e4*/
                                       v13,
                                       *(ParticleClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20]
                                                         + 4 * *(_DWORD *)(*(_DWORD *)(this + 172) + 660)),
                                       (ParticleClass *)&aP3.__pad_0[12],
                                       &aP3,
                                       (IUnknown *)this);
              if ( v43 ) /*0x62e9e8*/
              {
                VectorClass::PushBackCopy((_DWORD *)(this + 188), (AbstractClass *)&v43); /*0x62e9f5*/
                v12 = v43; /*0x62e9fa*/
              }
            }
            else
            {
              v43 = 0; /*0x62eaf4*/
            }
          }
          v14 = (_DWORD *)v12->nextScenario[43]; /*0x62ea04*/
          v15 = (float *)&v12->altNextScenario[2]; /*0x62ea10*/
          v44 = (ScenarioClass *)(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) /*0x62ea22*/
                                % v14[168]);
          *(float *)&v12->altNextScenario[2] = (float)(int)v44; /*0x62ea2a*/
          v44 = (ScenarioClass *)(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) /*0x62ea44*/
                                % v14[169]);
          *(float *)&v12->altNextScenario[3] = (float)(int)v44; /*0x62ea4c*/
          v44 = (ScenarioClass *)(v14[170] /*0x62ea77*/
                                + (int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                    + 536)))
                                % v14[171]);
          *(float *)&v12->altNextScenario[4] = (float)(int)v44; /*0x62ea7f*/
          v16 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x62eaa6*/
                                              *v15 * *v15
                                            + *(float *)&v12->altNextScenario[3] * *(float *)&v12->altNextScenario[3]
                                            + *(float *)&v12->altNextScenario[4] * *(float *)&v12->altNextScenario[4]));
          v17 = *(_BYTE *)(this + 249); /*0x62eaab*/
          *(float *)&v44 = v16; /*0x62eab4*/
          if ( v17 ) /*0x62eaba*/
          {
            aP1_16 = *(float *)&aP3.nextArrayIndex + *v15; /*0x62eac4*/
            aP1_20 = *(float *)&aP3.referenceCount + *(float *)&v12->altNextScenario[3]; /*0x62ead3*/
            v18 = aP1_12 + *(float *)&v12->altNextScenario[4]; /*0x62eadb*/
            v19 = (ScenarioClass *)LODWORD(aP1_20); /*0x62eade*/
            *v15 = aP1_16; /*0x62eae2*/
            aP1_24 = v18; /*0x62eae4*/
            v20 = aP1_24; /*0x62eae8*/
            v12->altNextScenario[3] = (int)v19; /*0x62eaec*/
            *(float *)&v12->altNextScenario[4] = v20; /*0x62eaef*/
          }
          else
          {
            v21 = (float *)(*(_DWORD *)(this + 172) + 700); /*0x62eb03*/
            aP1_28 = *v21 + *v15; /*0x62eb0c*/
            aP1_32 = v21[1] + *(float *)&v12->altNextScenario[3]; /*0x62eb1a*/
            v22 = v21[2] + *(float *)&v12->altNextScenario[4]; /*0x62eb21*/
            v23 = aP1_32; /*0x62eb24*/
            *v15 = aP1_28; /*0x62eb2a*/
            v52 = v22; /*0x62eb2c*/
            v24 = v52; /*0x62eb30*/
            *(float *)&v12->altNextScenario[3] = v23; /*0x62eb34*/
            *(float *)&v12->altNextScenario[4] = v24; /*0x62eb37*/
          }
          v25 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x62eb5e*/
                                              *v15 * *v15
                                            + *(float *)&v12->altNextScenario[3] * *(float *)&v12->altNextScenario[3]
                                            + *(float *)&v12->altNextScenario[4] * *(float *)&v12->altNextScenario[4]));
          if ( v25 == 0.0 ) /*0x62eb71*/
          {
            v26 = *v15; /*0x62eb9d*/
            v27 = *(float *)&v12->altNextScenario[3]; /*0x62eb9f*/
            v28 = (ScenarioClass *)v12->altNextScenario[4]; /*0x62eba2*/
          }
          else
          {
            v53 = *v15 / v25; /*0x62eb77*/
            v26 = v53; /*0x62eb80*/
            v54 = *(float *)&v12->altNextScenario[3] / v25; /*0x62eb84*/
            v27 = v54; /*0x62eb88*/
            *(float *)&v55 = *(float *)&v12->altNextScenario[4] / v25; /*0x62eb8f*/
            v28 = v55; /*0x62eb93*/
          }
          v29 = *(float *)&v44; /*0x62eba7*/
          *v15 = v26; /*0x62ebab*/
          *(float *)&v12->altNextScenario[3] = v27; /*0x62ebad*/
          v12->altNextScenario[4] = (int)v28; /*0x62ebb0*/
          *(float *)&v56 = v29 * *v15; /*0x62ebb5*/
          v57 = *(float *)&v44 * *(float *)&v12->altNextScenario[3]; /*0x62ebc4*/
          v30 = *(float *)&v44 * *(float *)&v12->altNextScenario[4]; /*0x62ebcc*/
          v31 = v57; /*0x62ebcf*/
          *(_DWORD *)v15 = v56; /*0x62ebd3*/
          v32 = (ScenarioClass *)aP1_8; /*0x62ebd5*/
          *(float *)&v12->altNextScenario[3] = v31; /*0x62ebd9*/
          *(float *)&v58 = v30; /*0x62ebdc*/
          v12->altNextScenario[4] = v58; /*0x62ebe5*/
          aP1_8 = (int)&v32[-1].ls800BkgdPal[15] + 3; /*0x62ebe8*/
        }
        while ( v32 != (ScenarioClass *)1 ); /*0x62ebec*/
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22724] == 2 ) /*0x62ebf9*/
      {
        v33 = *(AbstractClass **)(this + 172); /*0x62ebfb*/
        if ( *(_DWORD *)(this + 240) == *(_DWORD *)&v33[21].__pad_0[12] /*0x62ec19*/
          && v33[21].uniqueId > 0
          && !LOBYTE(v33[21].nextArrayIndex) )
        {
          v34 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x62ec25*/
          if ( v34 ) /*0x62ec2f*/
            ObjectClass::RegisterInArray( /*0x62ec5b*/
              v34,
              *(AbstractClass **)(this + 156),
              *(_DWORD *)(this + 160),
              *(_DWORD *)(this + 164),
              *(_DWORD *)(*(_DWORD *)(this + 172) + 772));
        }
      }
    }
    v35 = *(_DWORD *)(this + 240) - 1; /*0x62ec67*/
    *(_DWORD *)(this + 240) = v35; /*0x62ec69*/
    if ( v35 <= 0 ) /*0x62ec71*/
      *(_BYTE *)(this + 248) = 1; /*0x62ec73*/
    aP1_12 = COERCE_FLOAT( /*0x62ec91*/
               Random::Range(
                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                 0,
                 (IUnknown *)0x7FFFFFFE));
    v36 = (double)SLODWORD(aP1_12) * 4.656612877414201e-10; /*0x62ec99*/
    if ( v36 >= 0.3 ) /*0x62ecaa*/
    {
      if ( v36 >= 0.6 ) /*0x62ecce*/
        goto LABEL_34; /*0x62ecce*/
      v37 = *(_DWORD *)(this + 244) + 3; /*0x62ecd6*/
      if ( v37 >= 41 ) /*0x62ecdc*/
        v37 = 41; /*0x62ecde*/
    }
    else
    {
      v37 = *(_DWORD *)(this + 244) - 3; /*0x62ecb2*/
      if ( v37 <= 17 ) /*0x62ecba*/
        v37 = 17; /*0x62ecbc*/
    }
    *(_DWORD *)(this + 244) = v37; /*0x62ece3*/
  }
LABEL_34:
  v38 = *(_DWORD *)(this + 204); /*0x62ece9*/
  for ( i = 0; i < v38; ++i ) /*0x62ecf3*/
  {
    ParticleClass::Dispatch(*(_DWORD *)(*(_DWORD *)(this + 192) + 4 * i)); /*0x62ecfe*/
    v38 = *(_DWORD *)(this + 204); /*0x62ed03*/
  }
  for ( j = *(_DWORD *)(this + 204) - 1; j >= 0; --j ) /*0x62ed15*/
  {
    v41 = *(_BYTE **)(*(_DWORD *)(this + 192) + 4 * j); /*0x62ed1d*/
    LOBYTE(v38) = v41[305]; /*0x62ed20*/
    if ( (_BYTE)v38 ) /*0x62ed28*/
      LOBYTE(v38) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 248))(v41); /*0x62ed2c*/
  }
  return v38; /*0x62ed35*/
}


// ==== 0x0062ED40  ObjectClass::UpdateBuildingParticleSystem  this=ParticleSystemClass  sig=csp ====
void __thiscall UpdateBuildingParticleSystem(_DWORD *this)
{
  int v2; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int i; // edi
  int uniqueId; // ebx
  int *v13; // edi
  int v14; // ebp
  int v15; // ebx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  ParticleClass *v24; // eax
  int v25; // edx
  int v26; // ebx
  int v27; // eax
  _DWORD *v28; // edi
  int v29; // eax
  ParticleSystemTypeClass *v30; // ebx
  int v31; // ebp
  ScenarioClass *v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  ParticleClass *v37; // ebx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // edx
  double v42; // st7
  ParticleSystemTypeClass *v43; // eax
  double v44; // st7
  int v45; // [esp+14h] [ebp-40h]
  int v46; // [esp+14h] [ebp-40h]
  int v47; // [esp+14h] [ebp-40h]
  AbstractClass aP1; // [esp+18h] [ebp-3Ch] BYREF
  int v49; // [esp+3Ch] [ebp-18h] BYREF
  TechnoTypeClass *v58; // [esp+40h] [ebp-14h]
  void *v51; // [esp+44h] [ebp-10h]
  char v52[8]; // [esp+48h] [ebp-Ch] BYREF
  void *v53; // [esp+50h] [ebp-4h]

  v2 = this->SpotlightRadius; /*0x62ed49*/
  if ( v2 && (*(_BYTE *)(v2 + 20) & 2) != 0 && (*(int (__stdcall **)(int))(*(_DWORD *)(v2 + 4) + 12))(v2 + 4) != 6 ) /*0x62ed6e*/
  {
    v3 = (int *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->SpotlightRadius + 72))(this->SpotlightRadius, v52); /*0x62ed7d*/
    v4 = *v3; /*0x62ed86*/
    v5 = v3[1]; /*0x62ed88*/
    v6 = v3[2]; /*0x62ed8b*/
    v7 = this->q0B8; /*0x62ed8e*/
    v8 = *this; /*0x62ed94*/
    v9 = v4 + this->SpawnDistanceToOwner; /*0x62ed96*/
    v10 = this->q0B4; /*0x62ed98*/
    aP1.nextArrayIndex = v9; /*0x62ed9e*/
    aP1.referenceCount = v5 + v10; /*0x62edad*/
    aP1.NeedsSaveOrLink = (void *)(v6 + v7); /*0x62edb1*/
    (*(void (__thiscall **)(_DWORD *, int *))(v8 + 436))(this, &aP1.nextArrayIndex); /*0x62edb5*/
  }
  for ( i = 0; i < this->Owner; ++i ) /*0x62edc5*/
    ParticleClass::Dispatch(*(_DWORD *)(this->TargetCoords + 4 * i)); /*0x62edd0*/
  uniqueId = this->Owner - 1; /*0x62ede6*/
  aP1.uniqueId = uniqueId; /*0x62ede7*/
  if ( uniqueId >= 0 )
  {
    while ( 1 )
    {
      v13 = *(int **)(this->TargetCoords + 4 * uniqueId); /*0x62edf7*/
      if ( !*((_BYTE *)v13 + 305) ) /*0x62ee02*/
      {
        ParticleClass::AdjustHeight((ParticleClass *)v13); /*0x62f037*/
        goto LABEL_29; /*0x62f037*/
      }
      if ( *(_DWORD *)(v13[43] + 784) == -1 ) /*0x62ee15*/
        goto LABEL_27; /*0x62ee15*/
      v14 = v13[39]; /*0x62ee2d*/
      v15 = v13[40]; /*0x62ee2f*/
      v16 = v13[43]; /*0x62ee35*/
      v53 = (void *)v13[41]; /*0x62ee3b*/
      v45 = *(int *)(v16 + 772) >> 3; /*0x62ee48*/
      v17 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % v45; /*0x62ee56*/
      v18 = v17 > 0 ? v45 + v17 : v17 - v45;
      *(_DWORD *)&aP1.__pad_0[4] = v18; /*0x62ee67*/
      *(_DWORD *)&aP1.__pad_0[12] = v13[43]; /*0x62ee77*/
      v46 = *(int *)(*(_DWORD *)&aP1.__pad_0[12] + 772) >> 3; /*0x62ee84*/
      v19 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % v46; /*0x62ee92*/
      v20 = v19 > 0 ? v46 + v19 : v19 - v46;
      v47 = v20; /*0x62eea2*/
      *(_DWORD *)&aP1.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] /*0x62eebe*/
                                              + 4 * *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[12] + 784));
      aP1.nextArrayIndex = *(_DWORD *)&aP1.__pad_0[4] + v14; /*0x62eecc*/
      aP1.referenceCount = v15 + v20; /*0x62eed0*/
      aP1.NeedsSaveOrLink = v53; /*0x62eed4*/
      v21 = __2_YAPAXI_Z(0x138u); /*0x62eed8*/
      if ( v21 )
      {
        *(_DWORD *)aP1.__pad_0 = ParticleClass::Construct( /*0x62ef01*/
                                   v21,
                                   *(ParticleClass **)&aP1.__pad_0[12],
                                   (ParticleClass *)&aP1.nextArrayIndex,
                                   (AbstractClass *)(&(&g_MatrixTransformState)[492] + 2),
                                   (IUnknown *)this);
        if ( *(_DWORD *)aP1.__pad_0 )
        {
          VectorClass::PushBackCopy(this + 47, &aP1); /*0x62ef12*/
          aP1.abstractFlags = *(_DWORD *)aP1.__pad_0; /*0x62ef1d*/
          if ( *(_DWORD *)aP1.__pad_0 )
          {
            *(_DWORD *)(*(_DWORD *)aP1.__pad_0 + 228) = v13[57]; /*0x62ef29*/
            v22 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x62ef3b*/
            *(_BYTE *)(aP1.abstractFlags + 303) = *((_BYTE *)v13 + 303) + (v22 % 6 != 0 ? 0x19 : 0);
          }
        }
      }
      else
      {
        *(_DWORD *)aP1.__pad_0 = 0; /*0x62efab*/
      }
      v49 = v14 - *(_DWORD *)&aP1.__pad_0[4]; /*0x62ef76*/
      v58 = (TechnoTypeClass *)(v15 - v47); /*0x62ef7a*/
      v51 = v53; /*0x62ef7e*/
      v23 = __2_YAPAXI_Z(0x138u); /*0x62ef82*/
      if ( v23 ) /*0x62ef8c*/
        break; /*0x62ef8c*/
      v25 = *v13; /*0x62efb5*/
      *(_DWORD *)&aP1.__pad_0[8] = 0; /*0x62efb9*/
      (*(void (__thiscall **)(int *))(v25 + 248))(v13); /*0x62efc1*/
      uniqueId = aP1.uniqueId; /*0x62efc7*/
LABEL_29:
      aP1.uniqueId = --uniqueId; /*0x62f03d*/
      if ( uniqueId < 0 ) /*0x62f041*/
        goto LABEL_30; /*0x62f041*/
    }
    v24 = ParticleClass::Construct( /*0x62efa0*/
            v23,
            *(ParticleClass **)&aP1.__pad_0[12],
            (ParticleClass *)&v49,
            (AbstractClass *)(&(&g_MatrixTransformState)[492] + 2),
            (IUnknown *)this);
    *(_DWORD *)&aP1.__pad_0[8] = v24; /*0x62efa5*/
    if ( v24 )
    {
      VectorClass::PushBackCopy(this + 47, (AbstractClass *)&aP1.__pad_0[8]); /*0x62efdc*/
      v26 = *(_DWORD *)&aP1.__pad_0[8]; /*0x62efe7*/
      if ( *(_DWORD *)&aP1.__pad_0[8] )
      {
        *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[8] + 228) = v13[57]; /*0x62eff1*/
        *(_BYTE *)(v26 + 303) = *((_BYTE *)v13 + 303)
                              + (Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 6 != 0
                               ? 0x19
                               : 0);
      }
    }
LABEL_27:
    (*(void (__thiscall **)(int *))(*v13 + 248))(v13); /*0x62f025*/
    uniqueId = aP1.uniqueId; /*0x62f02f*/
    goto LABEL_29; /*0x62f033*/
  }
LABEL_30:
  if ( !this->q0F8 ) /*0x62f047*/
  {
    if ( this->isAliveFlag ) /*0x62f055*/
    {
      if ( !(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % (int)Math::RoundToInt(*((float *)this + 58))) ) /*0x62f076*/
      {
        v27 = this->SpotlightRadius; /*0x62f080*/
        if ( !v27 || (*(_BYTE *)(v27 + 20) & 4) == 0 || *(char *)(v27 + 1668) < 0 ) /*0x62f098*/
        {
          v28 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536); /*0x62f0a4*/
          v29 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x62f0ac*/
          v30 = (ParticleSystemTypeClass *)this->Type; /*0x62f0b1*/
          aP1.abstractFlags = v29; /*0x62f0b7*/
          v31 = v30->field_2A8 + 1; /*0x62f0c3*/
          v32 = (ScenarioClass *)(Random::State(v28) % v31); /*0x62f0d2*/
          v33 = aP1.abstractFlags % v31; /*0x62f0d5*/
          v34 = this->location; /*0x62f0df*/
          v35 = this->q0A4; /*0x62f0e7*/
          v58 = (TechnoTypeClass *)((char *)v32 + this->q0A0); /*0x62f0ea*/
          v49 = v33 + v34; /*0x62f0f3*/
          v51 = (void *)(v35 + 10); /*0x62f0f7*/
          if ( v30->field_294 != -1 ) /*0x62f102*/
          {
            v36 = __2_YAPAXI_Z(0x138u); /*0x62f10d*/
            if ( v36 ) /*0x62f117*/
            {
              v37 = ParticleClass::Construct( /*0x62f147*/
                      v36,
                      *(ParticleClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20]
                                        + 4 * *(_DWORD *)(this->Type + 660)),
                      (ParticleClass *)&v49,
                      (AbstractClass *)(this + 53),
                      (IUnknown *)this);
              if ( v37 ) /*0x62f14b*/
              {
                v38 = this->q0C4; /*0x62f151*/
                if ( this->Owner < v38 /*0x62f182*/
                  || (this->q0C9 || !v38)
                  && (v39 = this->Target, v39 > 0)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(this->Particles + 8))(
                       this + 47,
                       v38 + v39,
                       0) )
                {
                  v40 = this->Owner; /*0x62f189*/
                  v41 = this->TargetCoords; /*0x62f18c*/
                  this->Owner = v40 + 1; /*0x62f192*/
                  *(_DWORD *)(v41 + 4 * v40) = v37; /*0x62f195*/
                }
                if ( *((float *)this + 58) > (double)*(float *)(this->Type + 688) ) /*0x62f1af*/
                  v37->__pad_128[7] += 25; /*0x62f1b1*/
                v42 = *(float *)v37->__pad_E4 /*0x62f1d0*/
                    - (*((float *)this + 58) - (double)*(int *)(this->Type + 668)) * 0.34999999;
                *(float *)v37->__pad_E4 = v42; /*0x62f1d6*/
                if ( v42 < 2.0 ) /*0x62f1e7*/
                  *(_DWORD *)v37->__pad_E4 = 0x40000000; /*0x62f1e9*/
              }
            }
          }
        }
      }
    }
  }
  v43 = (ParticleSystemTypeClass *)this->Type; /*0x62f1f3*/
  v44 = *(float *)&v43->field_2A0 + *((float *)this + 58); /*0x62f1ff*/
  *((float *)this + 58) = v44; /*0x62f205*/
  if ( v44 > *(float *)&v43->field_2AC ) /*0x62f216*/
    this->q0F8 = 1; /*0x62f218*/
}


// ==== 0x0062F230  ParticleSystemClass::SpawnParticle  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::SpawnParticle(int this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  ParticleClass *v5; // ebx
  int v6; // ecx
  ParticleClass *v7; // ebp
  int v8; // edx
  int v9; // esi
  double v10; // st7
  double v11; // st5
  double v12; // st7
  int v13; // eax
  int eax9; // eax
  ParticleSystemTypeClass *v14; // esi
  ParticleSystemTypeClass *v15; // eax
  ObjectClass *v16; // esi
  IUnknown *v18; // ebp
  float *v19; // eax
  float edx15; // edx
  float v21; // edx
  ParticleSystemTypeClass *v20; // eax
  double v23; // st7
  ParticleSystemTypeClass *v22; // eax
  double st7_15a; // st7
  int edx15b; // edx
  BuildingTypeClass *v25; // eax
  BuildingTypeClass *v26; // esi
  int v29; // ebp
  BuildingTypeClass *v28; // ebx
  int *v31; // eax
  int v32; // edx
  int ecx15; // ecx
  int v34; // eax
  ParticleSystemTypeClass *v33; // edx
  ScenarioClass *ebx16; // ebx
  int eax17; // eax
  TechnoTypeClass *v36; // esi
  ParticleSystemTypeClass *v37; // eax
  double v40; // st7
  double v41; // st4
  double v42; // st7
  float eax21; // eax
  float v44; // ecx
  float v45; // edx
  ParticleSystemTypeClass *v43; // ecx
  double v47; // st7
  double v48; // st6
  double v49; // st7
  bool v50; // cc
  char *v51; // eax
  char ecx_3_33; // ecx^3
  char v53; // esp^3
  char v54; // ecx^3
  TechnoClass *v52; // eax
  int i; // esi
  int j; // esi
  _BYTE *v58; // ecx
  int v60; // [esp-18h] [ebp-110h]
  int *v61; // [esp-14h] [ebp-10Ch]
  int _FFFFFFF0[3]; // [esp-10h] [ebp-108h] BYREF
  int v63; // [esp-4h] [ebp-FCh]
  AbstractClass *aP0[2]; // [esp+0h] [ebp-F8h]
  AbstractClass *aP1; // [esp+1Ch] [ebp-DCh]
  ScenarioClass *v62; // [esp+20h] [ebp-D8h] BYREF
  int v67; // [esp+24h] [ebp-D4h]
  double v68; // [esp+28h] [ebp-D0h]
  int v69; // [esp+34h] [ebp-C4h]
  float v70; // [esp+38h] [ebp-C0h] BYREF
  int v71; // [esp+3Ch] [ebp-BCh]
  float v72; // [esp+40h] [ebp-B8h]
  float v73; // [esp+44h] [ebp-B4h]
  ParticleClass *v74; // [esp+48h] [ebp-B0h]
  float v75; // [esp+4Ch] [ebp-ACh]
  double v76; // [esp+50h] [ebp-A8h]
  int v77; // [esp+58h] [ebp-A0h]
  float v78; // [esp+5Ch] [ebp-9Ch]
  ParticleSystemTypeClass *v79; // [esp+60h] [ebp-98h]
  float v80; // [esp+64h] [ebp-94h]
  float v81; // [esp+68h] [ebp-90h]
  float v82; // [esp+6Ch] [ebp-8Ch]
  float v83; // [esp+70h] [ebp-88h]
  float v84; // [esp+74h] [ebp-84h]
  float v85; // [esp+78h] [ebp-80h]
  float v86; // [esp+7Ch] [ebp-7Ch]
  AbstractClass aP3; // [esp+80h] [ebp-78h] BYREF
  float v88; // [esp+A8h] [ebp-50h]
  float v89; // [esp+ACh] [ebp-4Ch]
  AbstractClass v90; // [esp+B0h] [ebp-48h] BYREF

  if ( !*(_BYTE *)(this + 248) && !*(_DWORD *)(this + 204) ) /*0x62f250*/
  {
    v2 = *(_DWORD *)(this + 220); /*0x62f264*/
    v3 = *(_DWORD *)(this + 216); /*0x62f26c*/
    v4 = *(_DWORD *)(this + 156); /*0x62f27b*/
    v5 = (ParticleClass *)(*(_DWORD *)(this + 212) - v4); /*0x62f27d*/
    v6 = *(_DWORD *)(this + 160); /*0x62f27f*/
    LODWORD(v73) = *(_DWORD *)(this + 212) - v4; /*0x62f282*/
    v7 = (ParticleClass *)(v3 - v6); /*0x62f286*/
    v8 = *(_DWORD *)(this + 164); /*0x62f288*/
    v74 = v7; /*0x62f28b*/
    v9 = v2 - v8; /*0x62f28f*/
    v75 = *(float *)&v9; /*0x62f291*/
    v68 = (double)(int)v7; /*0x62f29d*/
    v76 = (double)SLODWORD(v73); /*0x62f2a5*/
    v10 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v76 * v76 + v68 * v68 + (double)v9 * (double)v9)); /*0x62f2c2*/
    aP1 = (AbstractClass *)Math::RoundToInt(v10); /*0x62f2dc*/
    v11 = v68 * v68 + v76 * v76; /*0x62f2e0*/
    *(double *)aP0 = v11; /*0x62f2e2*/
    v12 = Math::Sqrt((AbstractClass *)LODWORD(v11)); /*0x62f2e9*/
    v13 = Math::RoundToInt(v12); /*0x62f2f1*/
    v69 = v13; /*0x62f2fa*/
    v67 = v9; /*0x62f300*/
    v62 = (ScenarioClass *)v5; /*0x62f304*/
    if ( v9 >= (int)aP1 ) /*0x62f308*/
    {
      v9 = (int)aP1; /*0x62f30a*/
      v67 = (int)aP1; /*0x62f30c*/
    }
    if ( v9 <= -(int)aP1 ) /*0x62f314*/
      v67 = -(int)aP1; /*0x62f316*/
    if ( (int)v5 >= v13 ) /*0x62f31c*/
    {
      v5 = (ParticleClass *)v13; /*0x62f31e*/
      v62 = (ScenarioClass *)v13; /*0x62f320*/
    }
    eax9 = -v13; /*0x62f324*/
    if ( (int)v5 <= eax9 ) /*0x62f328*/
      v62 = (ScenarioClass *)eax9; /*0x62f32a*/
    v14 = (ParticleSystemTypeClass *)Math::RoundToInt((double)(int)aP1 * *(double *)(*(_DWORD *)(this + 172) + 712)); /*0x62f34a*/
    v79 = v14; /*0x62f34c*/
    v78 = (float)(int)aP1; /*0x62f350*/
    *(float *)&aP1 = BuildingLight::CalcIntensity((double)v67 / v78); /*0x62f364*/
    *(float *)&v62 = Math::ArcTan2_Table((double)(int)v62 / (double)v69); /*0x62f378*/
    if ( (int)v7 < 0 ) /*0x62f381*/
      *(float *)&v62 = -*(float *)&v62; /*0x62f389*/
    Matrix3x4::Identity(&v90.nextArrayIndex); /*0x62f394*/
    Matrix2D::Rotate((float *)&v90.nextArrayIndex, (AbstractClass *)v62); /*0x62f3a5*/
    Matrix3x3::RotateX((float *)&v90.nextArrayIndex, aP1); /*0x62f3b6*/
    *(float *)&aP1 = 0.0; /*0x62f3bd*/
    v67 = 0; /*0x62f3c5*/
    if ( (int)v14 > 0 ) /*0x62f3cd*/
    {
      v86 = (float)(int)v79; /*0x62f3d7*/
      do /*0x62f876*/
      {
        v15 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f3df*/
        *(float *)&v69 = (double)v67 / v86; /*0x62f3e9*/
        v68 = v78 * *(float *)&v69 * *(double *)&v15->field_2D0; /*0x62f3fb*/
        v16 = (ObjectClass *)HIDWORD(v68); /*0x62f3ff*/
        v18 = (IUnknown *)LODWORD(v68); /*0x62f403*/
        v68 = Math::SinCos((IUnknown *)LODWORD(v68)); /*0x62f40e*/
        v63 = (int)v16; /*0x62f412*/
        *(float *)&v71 = Math::ArcTan2(v18); /*0x62f419*/
        v72 = v68; /*0x62f428*/
        v70 = 0.0; /*0x62f43b*/
        v19 = TransformMatrix3x4Point(&v90, (IUnknown *)&v90.nextArrayIndex, (IUnknown *)&v70); /*0x62f443*/
        edx15 = *v19; /*0x62f448*/
        aP0[1] = (AbstractClass *)2147483646; /*0x62f44a*/
        v70 = edx15; /*0x62f44f*/
        aP0[0] = 0; /*0x62f453*/
        v71 = *((int *)v19 + 1); /*0x62f458*/
        v21 = v19[2]; /*0x62f45c*/
        v20 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f45f*/
        v72 = v21; /*0x62f465*/
        v23 = *(double *)&v20->__pad_2D4[4]; /*0x62f469*/
        v73 = v70 * v23; /*0x62f475*/
        v80 = v73; /*0x62f483*/
        *(float *)&v74 = *(float *)&v71 * v23; /*0x62f48d*/
        v81 = *(float *)&v74; /*0x62f4a1*/
        v75 = v21 * v23; /*0x62f4a5*/
        v82 = v75; /*0x62f4af*/
        LODWORD(v68) = Random::Range( /*0x62f4c5*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x7FFFFFFE);
        LODWORD(v76) = Random::Range( /*0x62f4d4*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x7FFFFFFE);
        v77 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x7FFFFFFE); /*0x62f4ef*/
        v22 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f4f3*/
        st7_15a = ((double)v77 * 4.656612877414201e-10 - 0.5) * *(double *)&v22->__pad_2D4[12]; /*0x62f509*/
        *(float *)&aP3.referenceCount = ((double)SLODWORD(v76) * 4.656612877414201e-10 - 0.5) /*0x62f525*/
                                      * *(double *)&v22->__pad_2D4[12];
        *(float *)&aP3.NeedsSaveOrLink = ((double)SLODWORD(v68) * 4.656612877414201e-10 - 0.5) /*0x62f548*/
                                       * *(double *)&v22->__pad_2D4[12];
        edx15b = *(_DWORD *)(this + 160); /*0x62f560*/
        *(_DWORD *)&aP3.__pad_0[12] = *(_DWORD *)(this + 156); /*0x62f563*/
        aP3.uniqueId = edx15b; /*0x62f56a*/
        v25 = *(BuildingTypeClass **)(this + 164); /*0x62f571*/
        v81 = *(float *)&aP3.referenceCount + v81; /*0x62f574*/
        aP3.abstractFlags = (int)v25; /*0x62f583*/
        v82 = *(float *)&aP3.NeedsSaveOrLink + v82; /*0x62f58a*/
        v26 = (BuildingTypeClass *)Math::RoundToInt(st7_15a + v73); /*0x62f597*/
        v29 = Math::RoundToInt(v81); /*0x62f5a2*/
        v28 = (BuildingTypeClass *)Math::RoundToInt(v82); /*0x62f5ad*/
        v31 = Color::RGBFromFloat(&v90.__pad_0[12], (IUnknown *)(this + 212), *(float *)&v69); /*0x62f5c5*/
        v32 = v31[1]; /*0x62f5ca*/
        ecx15 = *v31; /*0x62f5cd*/
        v34 = v31[2]; /*0x62f5cf*/
        *(_DWORD *)&aP3.__pad_0[4] = v29 + v32; /*0x62f5d4*/
        v33 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f5d8*/
        *(_DWORD *)aP3.__pad_0 = (char *)v26 + ecx15; /*0x62f5e2*/
        *(_DWORD *)&aP3.__pad_0[8] = (char *)v28 + v34; /*0x62f5e6*/
        if ( v33->field_294 == -1 ) /*0x62f5f4*/
        {
          ebx16 = 0; /*0x62f5f6*/
        }
        else
        {
          eax17 = __2_YAPAXI_Z(0x138u); /*0x62f5ff*/
          ebx16 = 0; /*0x62f604*/
          if ( eax17 ) /*0x62f60b*/
          {
            v62 = (ScenarioClass *)ParticleClass::Construct( /*0x62f63e*/
                                     eax17,
                                     *(ParticleClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20]
                                                       + 4 * *(_DWORD *)(*(_DWORD *)(this + 172) + 660)),
                                     (ParticleClass *)&aP3,
                                     &aP3,
                                     (IUnknown *)this);
            if ( v62 ) /*0x62f642*/
            {
              VectorClass::PushBackCopy((_DWORD *)(this + 188), (AbstractClass *)&v62); /*0x62f64f*/
              ebx16 = v62; /*0x62f654*/
            }
          }
          else
          {
            v62 = 0; /*0x62f79a*/
          }
        }
        v36 = (TechnoTypeClass *)&ebx16->altNextScenario[2]; /*0x62f65c*/
        aP0[1] = (AbstractClass *)2147483646; /*0x62f664*/
        aP0[0] = 0; /*0x62f669*/
        *(float *)&ebx16->altNextScenario[2] = v70; /*0x62f66b*/
        ebx16->altNextScenario[3] = v71; /*0x62f671*/
        *(float *)&ebx16->altNextScenario[4] = v72; /*0x62f678*/
        v77 = Random::Range( /*0x62f69e*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                (IUnknown *)aP0[0],
                (IUnknown *)aP0[1]);
        LODWORD(v76) = Random::Range( /*0x62f6b4*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x7FFFFFFE);
        LODWORD(v68) = Random::Range( /*0x62f6c3*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x7FFFFFFE);
        v37 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f6c7*/
        v40 = ((double)SLODWORD(v68) * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8; /*0x62f6e0*/
        v88 = ((double)SLODWORD(v76) * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8; /*0x62f6fc*/
        v89 = ((double)v77 * 4.656612877414201e-10 - 0.5) * *(double *)&v37->field_2E8; /*0x62f719*/
        *(float *)&ebx16->altNextScenario[2] = v40 + *(float *)&ebx16->altNextScenario[2]; /*0x62f722*/
        *(float *)&ebx16->altNextScenario[3] = v88 + *(float *)&ebx16->altNextScenario[3]; /*0x62f72e*/
        *(float *)&ebx16->altNextScenario[4] = v89 + *(float *)&ebx16->altNextScenario[4]; /*0x62f73b*/
        v41 = *(float *)v36->vtable0 * *(float *)v36->vtable0 /*0x62f754*/
            + *(float *)&ebx16->altNextScenario[3] * *(float *)&ebx16->altNextScenario[3]
            + *(float *)&ebx16->altNextScenario[4] * *(float *)&ebx16->altNextScenario[4];
        *(double *)aP0 = v41; /*0x62f756*/
        v42 = Math::Sqrt((AbstractClass *)LODWORD(v41)); /*0x62f75f*/
        if ( v42 == 0.0 ) /*0x62f772*/
        {
          eax21 = *(float *)v36->vtable0; /*0x62f7a7*/
          v44 = *(float *)&ebx16->altNextScenario[3]; /*0x62f7a9*/
          v45 = *(float *)&ebx16->altNextScenario[4]; /*0x62f7ac*/
        }
        else
        {
          v83 = *(float *)v36->vtable0 / v42; /*0x62f778*/
          eax21 = v83; /*0x62f781*/
          v84 = *(float *)&ebx16->altNextScenario[3] / v42; /*0x62f785*/
          v44 = v84; /*0x62f789*/
          v85 = *(float *)&ebx16->altNextScenario[4] / v42; /*0x62f790*/
          v45 = v85; /*0x62f794*/
        }
        *(float *)v36->vtable0 = eax21; /*0x62f7af*/
        *(float *)&ebx16->altNextScenario[3] = v44; /*0x62f7b1*/
        *(float *)&ebx16->altNextScenario[4] = v45; /*0x62f7b4*/
        LODWORD(v68) = Random::Range( /*0x62f7ce*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x7FFFFFFE);
        v43 = *(ParticleSystemTypeClass **)(this + 172); /*0x62f7d2*/
        v47 = ((double)SLODWORD(v68) * 4.656612877414201e-10 + *(float *)&aP1 - 0.5) /*0x62f7f8*/
            * (*(double *)&v43->__pad_2EC[4]
             * 0.5);
        if ( *(double *)&v43->__pad_2EC[4] <= v47 ) /*0x62f809*/
          v48 = *(double *)&v43->__pad_2EC[4]; /*0x62f80f*/
        else
          v48 = v47; /*0x62f80b*/
        v68 = -*(double *)&v43->field_2E8; /*0x62f81d*/
        if ( v48 <= v68 ) /*0x62f82a*/
        {
          v47 = v68; /*0x62f849*/
        }
        else if ( *(double *)&v43->__pad_2EC[4] <= v47 ) /*0x62f83b*/
        {
          v47 = *(double *)&v43->__pad_2EC[4]; /*0x62f83f*/
        }
        *(float *)&aP1 = v47; /*0x62f84d*/
        v49 = *(float *)&aP1 + *(float *)(ebx16->nextScenario[43] + 764); /*0x62f85f*/
        v50 = ++v67 < (int)v79; /*0x62f86a*/
        *(float *)&ebx16->nextScenario[57] = v49; /*0x62f870*/
      }
      while ( v50 ); /*0x62f876*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 172) + 779) ) /*0x62f882*/
    {
      v51 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x62f892*/
      if ( v51 ) /*0x62f89c*/
      {
        aP0[1] = 0; /*0x62f8a2*/
        aP0[0] = (AbstractClass *)1056964608; /*0x62f8a4*/
        v63 = 1; /*0x62f8a9*/
        _FFFFFFF0[2] = 0; /*0x62f8ab*/
        _FFFFFFF0[1] = 10; /*0x62f8ad*/
        HIBYTE(_FFFFFFF0[0]) = ecx_3_33; /*0x62f8af*/
        LOWORD(v67) = 0; /*0x62f8b0*/
        v54 = v53; /*0x62f8bf*/
        LOWORD(_FFFFFFF0[0]) = 0; /*0x62f8c5*/
        LOWORD(aP1) = 0; /*0x62f8c8*/
        v61 = _FFFFFFF0; /*0x62f8cc*/
        BYTE2(_FFFFFFF0[0]) = 0; /*0x62f8d1*/
        HIBYTE(v60) = v54; /*0x62f8db*/
        LOWORD(v61) = 0; /*0x62f8dc*/
        BYTE2(v61) = 0; /*0x62f8e5*/
        LOWORD(v60) = *(_WORD *)(*(_DWORD *)(this + 172) + 776); /*0x62f8fa*/
        BYTE2(v60) = *(_BYTE *)(*(_DWORD *)(this + 172) + 778); /*0x62f900*/
        TimerClass::Construct( /*0x62f940*/
          v51,
          *(_DWORD *)(this + 156),
          *(_DWORD *)(this + 160),
          *(TechnoTypeClass **)(this + 164),
          *(_DWORD *)(this + 212),
          *(_DWORD *)(this + 216),
          *(_DWORD *)(this + 220),
          0,
          1,
          v60,
          (int)v61,
          _FFFFFFF0[0],
          10,
          0,
          1,
          1056964608,
          0);
      }
    }
    *(_BYTE *)(this + 248) = 1; /*0x62f945*/
  }
  v52 = *(TechnoClass **)(this + 204); /*0x62f94c*/
  for ( i = 0; i < (int)v52; ++i ) /*0x62f956*/
  {
    ParticleClass::Dispatch(*(_DWORD *)(*(_DWORD *)(this + 192) + 4 * i)); /*0x62f961*/
    v52 = *(TechnoClass **)(this + 204); /*0x62f966*/
  }
  for ( j = *(_DWORD *)(this + 204) - 1; j >= 0; --j ) /*0x62f978*/
  {
    v58 = *(_BYTE **)(*(_DWORD *)(this + 192) + 4 * j); /*0x62f980*/
    LOBYTE(v52) = v58[305]; /*0x62f983*/
    if ( (_BYTE)v52 ) /*0x62f98b*/
      LOBYTE(v52) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v58 + 248))(v58); /*0x62f98f*/
  }
  return (char)v52; /*0x62f998*/
}


// ==== 0x0062F9A0  ObjectClass::UpdateBuildingDamageParticles  this=ParticleSystemClass  sig=csp ====
char __thiscall UpdateBuildingDamageParticles(char *this)
{
  int i; // ebx
  ParticleClass *v3; // edi
  int j; // edi
  _BYTE *v5; // ecx
  CoordStruct *v6; // eax
  CoordStruct *v7; // ebx
  int *v8; // ecx
  int v9; // eax
  int Y; // ecx
  int Z; // edx
  double v12; // st7
  int v13; // eax
  IUnknown *v14; // edi
  double v15; // st7
  double v16; // st7
  IUnknown *v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  char *v23; // edi
  int v24; // ebx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // edi
  char v37; // [esp+1Dh] [ebp-49h]
  double v38; // [esp+1Eh] [ebp-48h]
  ObjectClass *v39; // [esp+1Eh] [ebp-48h]
  int v40; // [esp+26h] [ebp-40h]
  double v41; // [esp+26h] [ebp-40h]
  int v42; // [esp+32h] [ebp-34h] BYREF
  int v43; // [esp+36h] [ebp-30h]
  int v44; // [esp+3Ah] [ebp-2Ch]
  double v45; // [esp+3Eh] [ebp-28h] BYREF
  int v46; // [esp+46h] [ebp-20h]
  int v47; // [esp+4Eh] [ebp-18h] BYREF
  int v48; // [esp+52h] [ebp-14h]
  int v49; // [esp+56h] [ebp-10h]
  int X; // [esp+5Ah] [ebp-Ch] BYREF
  int v51; // [esp+5Eh] [ebp-8h]
  int v52; // [esp+62h] [ebp-4h]

  for ( i = this->Owner - 1; i >= 0; --i ) /*0x62f9b5*/
  {
    v3 = *(ParticleClass **)(this->nextObject + 4 * i); /*0x62f9bd*/
    ParticleClass::Dispatch((int)v3); /*0x62f9c2*/
    ParticleClass::AdjustHeight((float *)v3->__pad_0); /*0x62f9c9*/
  }
  for ( j = this->Owner - 1; j >= 0; --j ) /*0x62f9d8*/
  {
    v5 = *(_BYTE **)(this->nextObject + 4 * j); /*0x62f9e0*/
    if ( v5[305] ) /*0x62f9e3*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 248))(v5); /*0x62f9ef*/
  }
  v37 = 0; /*0x62f9fe*/
  v6 = (CoordStruct *)AbstractClass::IsTechnoType(*((void **)this + 56)); /*0x62fa03*/
  v7 = v6; /*0x62fa08*/
  if ( v6 ) /*0x62fa0c*/
  {
    if ( !LOBYTE(v6[12].X) ) /*0x62fa12*/
      goto LABEL_13; /*0x62fa12*/
    if ( v6[57].Z && TimerClass::Active((int)&v6[75].Y) ) /*0x62fa34*/
    {
      v8 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7[57].Z + 72))(v7[57].Z, &X); /*0x62fa51*/
      v9 = *v8; /*0x62fa5c*/
      v43 = v8[1]; /*0x62fa61*/
      v44 = v8[2]; /*0x62fa6a*/
      X = v7[13].X; /*0x62fa70*/
      Y = v7[13].Y; /*0x62fa78*/
      LODWORD(v45) = v9 - X; /*0x62fa7b*/
      Z = v7[13].Z; /*0x62fa83*/
      HIDWORD(v45) = v43 - Y; /*0x62fa88*/
      v46 = v44 - Z; /*0x62fa92*/
      v12 = Math::Sqrt( /*0x62fabb*/
              (double)(v9 - X) * (double)(v9 - X)
            + (double)(v43 - Y) * (double)(v43 - Y)
            + (double)(v44 - Z) * (double)(v44 - Z));
      v40 = Math::RoundToInt(v12); /*0x62face*/
      v13 = v7[13].Y; /*0x62fad2*/
      v14 = (IUnknown *)v7[13].Z; /*0x62fad5*/
      v47 = v7[13].X; /*0x62fadf*/
      v48 = v13; /*0x62fae3*/
      v38 = (double)(*(__int16 *)ProgressTimer::GetValue(&v7[75].Y, (IUnknown *)&v42) - 0x3FFF) /*0x62fb03*/
          * -0.00009587672516830327;
      v45 = (double)v40; /*0x62fb15*/
      v41 = (double)v48; /*0x62fb1d*/
      v15 = Math::SinCos(v38); /*0x62fb21*/
      LODWORD(v41) = Math::RoundToInt(v41 - v15 * v45); /*0x62fb37*/
      v16 = Math::ArcTan2(v38); /*0x62fb41*/
      v17 = (IUnknown *)Math::RoundToInt(v16 * v45 + (double)v47); /*0x62fb51*/
      Coord::Subtract(&X, v17, (IUnknown *)LODWORD(v41), v14); /*0x62fb61*/
      v18 = v51; /*0x62fb6a*/
      v19 = *(_DWORD *)this; /*0x62fb77*/
      this->SpawnFrames = X; /*0x62fb79*/
      v20 = v52; /*0x62fb7b*/
      this->Lifetime = v18; /*0x62fb7f*/
      this->SparkSpawnFrames = v20; /*0x62fb84*/
      v21 = (*(int (__thiscall **)(CoordStruct *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(v7->X + 176))( /*0x62fb9b*/
              v7,
              &X,
              0,
              0,
              0,
              0);
      (*(void (__thiscall **)(char *, int))(v19 + 436))(this, v21); /*0x62fba4*/
      v37 = 1; /*0x62fbaa*/
    }
    if ( !LOBYTE(v7[12].X) ) /*0x62fbaf*/
LABEL_13:
      (*(void (__thiscall **)(char *))(this->q0F8)(this); /*0x62fbbd*/
  }
  else
  {
    (*(void (__thiscall **)(char *))(this->q0F8)(this); /*0x62fbc9*/
  }
  LOBYTE(v22) = this->q0F8; /*0x62fbcf*/
  if ( !(_BYTE)v22 ) /*0x62fbd7*/
  {
    if ( !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % *(_DWORD *)(this->Type + 668)) /*0x62fc0e*/
      || (v22 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] / 3, !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % 3))
      && (LOBYTE(v22) = v37) != 0 )
    {
      v23 = this + 156; /*0x62fc1e*/
      v24 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % 500; /*0x62fc27*/
      v25 = this->q027 - this->SpawnFrames; /*0x62fc2d*/
      v26 = this->q029; /*0x62fc3c*/
      v51 = this->owningHouseIndex - this->Lifetime; /*0x62fc3f*/
      v39 = (ObjectClass *)3; /*0x62fc79*/
      if ( Math::Sqrt((double)(v25 * v25 + v51 * v51 + (v26 - this->SparkSpawnFrames) * (v26 - this->SparkSpawnFrames))) >= 200.0 ) /*0x62fc86*/
        v39 = (ObjectClass *)1; /*0x62fc88*/
      v27 = Math::RoundToInt((double)(12 * *(__int16 *)&g_AsyncMovieState.__pad_524[2 * v24 + 328]) / ((double)(int)v39 * 3.0)); /*0x62fcb2*/
      v28 = this->SpawnFrames; /*0x62fcbd*/
      HIDWORD(v45) = this->Lifetime; /*0x62fcc3*/
      v29 = v27; /*0x62fcc9*/
      LODWORD(v45) = v28; /*0x62fccb*/
      v42 = *(_DWORD *)v23; /*0x62fcd1*/
      v43 = this->owningHouseIndex; /*0x62fcd8*/
      v52 = this->q029; /*0x62fce3*/
      v30 = CalcMathFacing8(&v42, &v45); /*0x62fceb*/
      v31 = v29 * *(_DWORD *)&stru_830620.__pad_579C[4 * v30 + 2376] + this->SpawnFrames; /*0x62fd0c*/
      v32 = v29 * *(_DWORD *)&stru_830620.__pad_579C[4 * v30 + 2408] + this->Lifetime; /*0x62fd14*/
      v52 = this->SparkSpawnFrames; /*0x62fd1c*/
      v33 = *(_DWORD *)v23; /*0x62fd20*/
      v51 = v32; /*0x62fd22*/
      v34 = this->owningHouseIndex; /*0x62fd26*/
      v35 = this->q029; /*0x62fd29*/
      v47 = v33; /*0x62fd2c*/
      v48 = v34; /*0x62fd30*/
      X = v31; /*0x62fd3c*/
      v49 = v35 + 1; /*0x62fd47*/
      LOBYTE(v22) = ParticleClass::CreateInstance((int)this, (ParticleSystemClass *)&v47, COERCE_FLOAT(&X), 4); /*0x62fd4b*/
    }
  }
  return v22; /*0x62fd50*/
}


// ==== 0x0062FD60  ParticleSystemClass::Update  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::Update(_BYTE *this)
{
  int v2; // eax
  int v3; // eax

  switch ( *(_DWORD *)(this->Type + 692) ) /*0x62fd74*/
  {
    case 0: /*0x62fd74*/
      UpdateBuildingParticleSystem(this); /*0x62fd7d*/
      break; /*0x62fd82*/
    case 1: /*0x62fd74*/
      ParticleSystemClass::UpdateAllParticles(this); /*0x62fd86*/
      break; /*0x62fd8b*/
    case 2: /*0x62fd74*/
      UpdateBuildingDamageParticles(this); /*0x62fd8f*/
      break; /*0x62fd94*/
    case 3: /*0x62fd74*/
      UpdateProductionParticleSystem(this); /*0x62fd98*/
      break; /*0x62fd9d*/
    case 4: /*0x62fd74*/
      ParticleSystemClass::SpawnParticle((int)this); /*0x62fda1*/
      break; /*0x62fda1*/
    default:
      break;
  }
  v2 = this->q0EC - 1; /*0x62fda6*/
  this->q0EC = v2; /*0x62fdad*/
  if ( !v2 ) /*0x62fdb3*/
    (*(void (__thiscall **)(_BYTE *))(this->q0F8)(this); /*0x62fdb9*/
  LOBYTE(v3) = this->isAliveFlag; /*0x62fdbf*/
  if ( (_BYTE)v3 ) /*0x62fdc7*/
  {
    LOBYTE(v3) = this->q0F8; /*0x62fdc9*/
    if ( (_BYTE)v3 ) /*0x62fdd1*/
    {
      v3 = this->Owner; /*0x62fdd3*/
      if ( !v3 ) /*0x62fddb*/
      {
        (*(void (__thiscall **)(_BYTE *))(this->SpawnFrames)(this); /*0x62fde1*/
        this->isAliveFlag = 0; /*0x62fde7*/
        LOBYTE(v3) = MEMORY[0xB0F6A0]; /*0x62fdee*/
        if ( MEMORY[0xB0F6A8] < MEMORY[0xB0F6A0] /*0x62fe28*/
          || (MEMORY[0xB0F6A5] || !MEMORY[0xB0F6A0])
          && MEMORY[0xB0F6AC] > 0
          && (LOBYTE(v3) = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F698] + 8))(
                             &MEMORY[0xB0F698],
                             MEMORY[0xB0F6A0] + MEMORY[0xB0F6AC],
                             0),
              (_BYTE)v3) )
        {
          v3 = MEMORY[0xB0F6A8]++; /*0x62fe30*/
          *((_DWORD *)MEMORY[0xB0F69C] + v3) = this; /*0x62fe3f*/
        }
      }
    }
  }
  return v3; /*0x62fe42*/
}


// ==== 0x0062FE60  ParticleSystemClass::Draw  this=ParticleSystemClass  sig=csp ====
BOOL __thiscall ParticleSystemClass::_vt17(int this)
{
  return *(_BYTE *)(this + 248) && !*(_DWORD *)(this + 204); /*0x62fe79*/
}


// ==== 0x0062FE80  ParticleSystemClass::StubReturn2  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::_vt30()
{
  return 2; /*0x62fe85*/
}


// ==== 0x0062FE90  ParticleSystemClass::UpdateSystem  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::UpdateSystem(int this, IUnknown *aP1, int a3)
{
  DynamicVector *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  ParticleSystemTypeClass *result; // eax

  Object::Unlink((#374 *)this); /*0x62fe9f*/
  v4 = *(DynamicVector **)(this + 188); /*0x62fea4*/
  a3 = (int)aP1; /*0x62feb7*/
  v5 = ((int (__thiscall *)(int, int *))v4->field_10)(this + 188, &a3); /*0x62febb*/
  if ( v5 != -1 ) /*0x62fec1*/
  {
    v6 = *(_DWORD *)(this + 204); /*0x62fec3*/
    if ( v5 < v6 ) /*0x62fec8*/
    {
      v7 = v6 - 1; /*0x62feca*/
      for ( *(_DWORD *)(this + 204) = v7; /*0x62fed0*/
            v5 < *(_DWORD *)(this + 204);
            *(_DWORD *)(*(_DWORD *)(this + 192) + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)(this + 192) + 4 * v5) )
      {
        ++v5; /*0x62fed5*/
      }
    }
  }
  result = 0; /*0x62feea*/
  if ( aP1 == *(IUnknown **)(this + 172) ) /*0x62feee*/
    *(_DWORD *)(this + 172) = 0; /*0x62fef0*/
  if ( aP1 == *(IUnknown **)(this + 228) ) /*0x62fefc*/
    *(_DWORD *)(this + 228) = 0; /*0x62fefe*/
  if ( aP1 == *(IUnknown **)(this + 224) ) /*0x62ff0a*/
  {
    *(_BYTE *)(this + 248) = 1; /*0x62ff0c*/
    *(_DWORD *)(this + 224) = 0; /*0x62ff13*/
  }
  return (int)result; /*0x62ff19*/
}


// ==== 0x0062FF20  ParticleSystemClass::Write  this=ParticleSystemClass  sig=csp ====
int __thiscall C07EFB9C::_vt05(#374 *this, int a2, int *a3)
{
  int *v3; // ebp
  int v4; // edi
  int result; // eax
  int v6; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int i; // esi
  _BYTE v15[4]; // [esp+20h] [ebp-4h] BYREF

  v3 = a3; /*0x62ff23*/
  v4 = a2; /*0x62ff29*/
  result = BuildingClass::SaveLoad_Register(this); /*0x62ff2f*/
  if ( result >= 0 ) /*0x62ff38*/
  {
    if ( v4 ) /*0x62ff40*/
    {
      ObjectClass::Init((_DWORD *)v4, (int)&a3); /*0x62ff49*/
      ParticleSystemClass::resetSystemState((_DWORD *)(v4 + 188), 0, 0); /*0x62ff58*/
      *(_DWORD *)(v4 + 188) = &vt_DynamicVectorClass_ParticleClass; /*0x62ff5d*/
      *(_DWORD *)(v4 + 208) = 10; /*0x62ff63*/
      *(_DWORD *)(v4 + 204) = 0; /*0x62ff6a*/
      *(_DWORD *)v4 = &ParticleSystemClass::`vftable'; /*0x62ff6d*/
      *(_DWORD *)(v4 + 4) = &ParticleSystemClass::`vftable'; /*0x62ff73*/
      *(_DWORD *)(v4 + 8) = &vt_ParticleSystemClass; /*0x62ff7a*/
      *(_DWORD *)(v4 + 12) = &off_7EFB70; /*0x62ff81*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4 + 172)); /*0x62ff94*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4 + 228)); /*0x62ffa5*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4 + 224)); /*0x62ffb6*/
    v6 = *v3; /*0x62ffbb*/
    a2 = 0; /*0x62ffc7*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v3, &a2, 4, 0); /*0x62ffcb*/
    if ( result >= 0 ) /*0x62ffd0*/
    {
      if ( a2-- == 0 ) /*0x62ffdd*/
      {
LABEL_14:
        for ( i = 0; i < *(_DWORD *)(v4 + 204); ++i ) /*0x630065*/
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v4 + 192) + 4 * i)); /*0x630076*/
        return 0; /*0x630086*/
      }
      else
      {
        while ( 1 ) /*0x62ffe5*/
        {
          v8 = *v3; /*0x62ffe5*/
          a3 = 0; /*0x62fff5*/
          result = (*(int (__stdcall **)(int *, int **, int, _BYTE *))(v8 + 12))(v3, &a3, 4, v15); /*0x62fff9*/
          if ( result < 0 ) /*0x62fffe*/
            break; /*0x62fffe*/
          v9 = *(_DWORD *)(v4 + 196); /*0x630004*/
          if ( *(_DWORD *)(v4 + 204) < v9 /*0x630032*/
            || (*(_BYTE *)(v4 + 201) || !v9)
            && (v10 = *(_DWORD *)(v4 + 208), v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 188) + 8))(v4 + 188, v9 + v10, 0) )
          {
            v11 = *(_DWORD *)(v4 + 204); /*0x630039*/
            v12 = *(_DWORD *)(v4 + 192); /*0x63003c*/
            *(_DWORD *)(v4 + 204) = v11 + 1; /*0x630042*/
            *(_DWORD *)(v12 + 4 * v11) = a3; /*0x630049*/
          }
          if ( !a2-- ) /*0x630050*/
            goto LABEL_14; /*0x630059*/
        }
      }
    }
  }
  return result; /*0x630088*/
}

